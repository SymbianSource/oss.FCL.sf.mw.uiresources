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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00002710 };

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
0xd610,	// (0x0000fd20) Screen

0xd622,	// (0x0000fd32) application_window_ParamLimits

0xd622,	// (0x0000fd32) application_window

0xd63a,	// (0x0000fd4a) screen_g1

0xd644,	// (0x0000fd54) area_bottom_pane_ParamLimits

0xd644,	// (0x0000fd54) area_bottom_pane

0xd6a9,	// (0x0000fdb9) area_top_pane_ParamLimits

0xd6a9,	// (0x0000fdb9) area_top_pane

0xbd21,	// (0x0000e431) main_pane_ParamLimits

0xbd21,	// (0x0000e431) main_pane

0xd721,	// (0x0000fe31) misc_graphics

0x0637,	// (0x00002d47) battery_pane_ParamLimits

0x0637,	// (0x00002d47) battery_pane

0x1433,	// (0x00003b43) bg_status_flat_pane_g8

0x143b,	// (0x00003b4b) bg_status_flat_pane_g9

0x06ec,	// (0x00002dfc) context_pane_ParamLimits

0x06ec,	// (0x00002dfc) context_pane

0x0803,	// (0x00002f13) navi_pane_ParamLimits

0x0803,	// (0x00002f13) navi_pane

0x0880,	// (0x00002f90) signal_pane_ParamLimits

0x0880,	// (0x00002f90) signal_pane

0x0008,

0xf8a1,	// (0x00011fb1) bg_status_flat_pane_g

0x08e9,	// (0x00002ff9) status_pane_g1_ParamLimits

0x08e9,	// (0x00002ff9) status_pane_g1

0x08f5,	// (0x00003005) status_pane_g2_ParamLimits

0x08f5,	// (0x00003005) status_pane_g2

0x0901,	// (0x00003011) status_pane_g3_ParamLimits

0x0901,	// (0x00003011) status_pane_g3

0x0004,

0xf7db,	// (0x00011eeb) status_pane_g_ParamLimits

0xf7db,	// (0x00011eeb) status_pane_g

0x0933,	// (0x00003043) title_pane_ParamLimits

0x0933,	// (0x00003043) title_pane

0x0970,	// (0x00003080) uni_indicator_pane_ParamLimits

0x0970,	// (0x00003080) uni_indicator_pane

0x00c1,	// (0x000027d1) bg_list_pane_ParamLimits

0x00c1,	// (0x000027d1) bg_list_pane

0x00e1,	// (0x000027f1) find_pane

0x00e9,	// (0x000027f9) listscroll_app_pane_ParamLimits

0x00e9,	// (0x000027f9) listscroll_app_pane

0x00f5,	// (0x00002805) listscroll_form_pane

0x00fd,	// (0x0000280d) listscroll_gen_pane_ParamLimits

0x00fd,	// (0x0000280d) listscroll_gen_pane

0x00f5,	// (0x00002805) listscroll_set_pane

0xe852,	// (0x00010f62) main_idle_act_pane

0xf2a4,	// (0x000119b4) main_idle_trad_pane

0xf2a4,	// (0x000119b4) main_list_empty_pane

0x0124,	// (0x00002834) main_midp_pane

0x0130,	// (0x00002840) main_pane_g1_ParamLimits

0x0130,	// (0x00002840) main_pane_g1

0x013e,	// (0x0000284e) popup_ai_message_window_ParamLimits

0x013e,	// (0x0000284e) popup_ai_message_window

0x01dc,	// (0x000028ec) popup_fep_china_uni_window_ParamLimits

0x01dc,	// (0x000028ec) popup_fep_china_uni_window

0x021a,	// (0x0000292a) popup_fep_japan_candidate_window_ParamLimits

0x021a,	// (0x0000292a) popup_fep_japan_candidate_window

0x0238,	// (0x00002948) popup_fep_japan_predictive_window_ParamLimits

0x0238,	// (0x00002948) popup_fep_japan_predictive_window

0x0264,	// (0x00002974) popup_find_window

0x0271,	// (0x00002981) popup_grid_graphic_window_ParamLimits

0x0271,	// (0x00002981) popup_grid_graphic_window

0x028f,	// (0x0000299f) popup_large_graphic_colour_window

0x02ae,	// (0x000029be) popup_menu_window_ParamLimits

0x02ae,	// (0x000029be) popup_menu_window

0x03e6,	// (0x00002af6) popup_note_image_window

0x03d4,	// (0x00002ae4) popup_note_wait_window_ParamLimits

0x03d4,	// (0x00002ae4) popup_note_wait_window

0x03d4,	// (0x00002ae4) popup_note_window_ParamLimits

0x03d4,	// (0x00002ae4) popup_note_window

0x043a,	// (0x00002b4a) popup_query_code_window_ParamLimits

0x043a,	// (0x00002b4a) popup_query_code_window

0x044c,	// (0x00002b5c) popup_query_data_code_window_ParamLimits

0x044c,	// (0x00002b5c) popup_query_data_code_window

0x0461,	// (0x00002b71) popup_query_data_window_ParamLimits

0x0461,	// (0x00002b71) popup_query_data_window

0x0477,	// (0x00002b87) popup_query_sat_info_window_ParamLimits

0x0477,	// (0x00002b87) popup_query_sat_info_window

0x04a8,	// (0x00002bb8) popup_snote_single_graphic_window_ParamLimits

0x04a8,	// (0x00002bb8) popup_snote_single_graphic_window

0x04a8,	// (0x00002bb8) popup_snote_single_text_window_ParamLimits

0x04a8,	// (0x00002bb8) popup_snote_single_text_window

0x04bb,	// (0x00002bcb) popup_sub_window_general

0x05bf,	// (0x00002ccf) popup_window_general_ParamLimits

0x05bf,	// (0x00002ccf) popup_window_general

0x05d2,	// (0x00002ce2) power_save_pane

0xc3b4,	// (0x0000eac4) control_pane_g1_ParamLimits

0xc3b4,	// (0x0000eac4) control_pane_g1

0xc3d5,	// (0x0000eae5) control_pane_g2_ParamLimits

0xc3d5,	// (0x0000eae5) control_pane_g2

0xf55d,	// (0x00011c6d) control_pane_g3_ParamLimits

0xf55d,	// (0x00011c6d) control_pane_g3

0x0007,

0xf7c3,	// (0x00011ed3) control_pane_g_ParamLimits

0xf7c3,	// (0x00011ed3) control_pane_g

0xc40f,	// (0x0000eb1f) control_pane_t1_ParamLimits

0xc40f,	// (0x0000eb1f) control_pane_t1

0xc461,	// (0x0000eb71) control_pane_t2_ParamLimits

0xc461,	// (0x0000eb71) control_pane_t2

0x0002,

0xf7d4,	// (0x00011ee4) control_pane_t_ParamLimits

0xf7d4,	// (0x00011ee4) control_pane_t

0xf480,	// (0x00011b90) navi_navi_volume_pane_cp1

0xf489,	// (0x00011b99) status_small_icon_pane

0xf491,	// (0x00011ba1) status_small_pane_g1_ParamLimits

0xf491,	// (0x00011ba1) status_small_pane_g1

0xf4c5,	// (0x00011bd5) status_small_pane_g2_ParamLimits

0xf4c5,	// (0x00011bd5) status_small_pane_g2

0xf4d1,	// (0x00011be1) status_small_pane_g3_ParamLimits

0xf4d1,	// (0x00011be1) status_small_pane_g3

0xf4dd,	// (0x00011bed) status_small_pane_g4_ParamLimits

0xf4dd,	// (0x00011bed) status_small_pane_g4

0xf4e9,	// (0x00011bf9) status_small_pane_g5_ParamLimits

0xf4e9,	// (0x00011bf9) status_small_pane_g5

0xf4f6,	// (0x00011c06) status_small_pane_g6_ParamLimits

0xf4f6,	// (0x00011c06) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00011ec2) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00011ec2) status_small_pane_g

0xf526,	// (0x00011c36) status_small_pane_t1

0xf549,	// (0x00011c59) status_small_wait_pane_ParamLimits

0xf549,	// (0x00011c59) status_small_wait_pane

0xed3a,	// (0x0001144a) aid_levels_signal_ParamLimits

0xed3a,	// (0x0001144a) aid_levels_signal

0xed4b,	// (0x0001145b) signal_pane_g1_ParamLimits

0xed4b,	// (0x0001145b) signal_pane_g1

0xed61,	// (0x00011471) signal_pane_g2_ParamLimits

0xed61,	// (0x00011471) signal_pane_g2

0x0001,

0xf747,	// (0x00011e57) signal_pane_g_ParamLimits

0xf747,	// (0x00011e57) signal_pane_g

0xed77,	// (0x00011487) context_pane_g1

0xd72b,	// (0x0000fe3b) title_pane_g1

0xd761,	// (0x0000fe71) title_pane_t1

0xd7c9,	// (0x0000fed9) title_pane_t2

0xd7ef,	// (0x0000feff) title_pane_t3

0x0002,

0xf59b,	// (0x00011cab) title_pane_t

0x0986,	// (0x00003096) aid_levels_battery_ParamLimits

0x0986,	// (0x00003096) aid_levels_battery

0x0999,	// (0x000030a9) battery_pane_g1_ParamLimits

0x0999,	// (0x000030a9) battery_pane_g1

0x09ae,	// (0x000030be) battery_pane_g2_ParamLimits

0x09ae,	// (0x000030be) battery_pane_g2

0x0001,

0xf7e6,	// (0x00011ef6) battery_pane_g_ParamLimits

0xf7e6,	// (0x00011ef6) battery_pane_g

0x1e66,	// (0x00004576) uni_indicator_pane_g1

0x1e7b,	// (0x0000458b) uni_indicator_pane_g2

0x1e91,	// (0x000045a1) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x00012059) uni_indicator_pane_g

0xe72f,	// (0x00010e3f) navi_icon_pane_ParamLimits

0xe72f,	// (0x00010e3f) navi_icon_pane

0xd721,	// (0x0000fe31) navi_midp_pane

0xd721,	// (0x0000fe31) navi_navi_pane

0xe72f,	// (0x00010e3f) navi_text_pane_ParamLimits

0xe72f,	// (0x00010e3f) navi_text_pane

0xd63a,	// (0x0000fd4a) status_small_wait_pane_g1

0xdc68,	// (0x00010378) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x00012054) status_small_wait_pane_g

0x1b99,	// (0x000042a9) navi_navi_icon_text_pane

0x1bb3,	// (0x000042c3) navi_navi_pane_g1_ParamLimits

0x1bb3,	// (0x000042c3) navi_navi_pane_g1

0x1ba1,	// (0x000042b1) navi_navi_pane_g2_ParamLimits

0x1ba1,	// (0x000042b1) navi_navi_pane_g2

0x0001,

0xf912,	// (0x00012022) navi_navi_pane_g_ParamLimits

0xf912,	// (0x00012022) navi_navi_pane_g

0x1bc5,	// (0x000042d5) navi_navi_tabs_pane

0x1b99,	// (0x000042a9) navi_navi_text_pane

0x1b99,	// (0x000042a9) navi_navi_volume_pane

0x1b75,	// (0x00004285) navi_text_pane_t1

0x1b69,	// (0x00004279) navi_icon_pane_g1

0x1abd,	// (0x000041cd) navi_navi_text_pane_t1

0xc7d4,	// (0x0000eee4) navi_navi_volume_pane_g1

0xc7dc,	// (0x0000eeec) volume_small_pane

0x1a12,	// (0x00004122) navi_navi_icon_text_pane_g1

0x1a1a,	// (0x0000412a) navi_navi_icon_text_pane_t1

0x1493,	// (0x00003ba3) navi_tabs_2_long_pane

0x1493,	// (0x00003ba3) navi_tabs_2_pane

0x1493,	// (0x00003ba3) navi_tabs_3_long_pane

0x1493,	// (0x00003ba3) navi_tabs_3_pane

0x1493,	// (0x00003ba3) navi_tabs_4_pane

0xc7b4,	// (0x0000eec4) tabs_2_active_pane_ParamLimits

0xc7b4,	// (0x0000eec4) tabs_2_active_pane

0xc7c4,	// (0x0000eed4) tabs_2_passive_pane_ParamLimits

0xc7c4,	// (0x0000eed4) tabs_2_passive_pane

0xc782,	// (0x0000ee92) tabs_3_active_pane_ParamLimits

0xc782,	// (0x0000ee92) tabs_3_active_pane

0xc792,	// (0x0000eea2) tabs_3_passive_pane_ParamLimits

0xc792,	// (0x0000eea2) tabs_3_passive_pane

0xc7a3,	// (0x0000eeb3) tabs_3_passive_pane_cp_ParamLimits

0xc7a3,	// (0x0000eeb3) tabs_3_passive_pane_cp

0xc73e,	// (0x0000ee4e) tabs_4_active_pane_ParamLimits

0xc73e,	// (0x0000ee4e) tabs_4_active_pane

0xc74f,	// (0x0000ee5f) tabs_4_passive_pane_ParamLimits

0xc74f,	// (0x0000ee5f) tabs_4_passive_pane

0xc760,	// (0x0000ee70) tabs_4_passive_pane_cp_ParamLimits

0xc760,	// (0x0000ee70) tabs_4_passive_pane_cp

0xc771,	// (0x0000ee81) tabs_4_passive_pane_cp2_ParamLimits

0xc771,	// (0x0000ee81) tabs_4_passive_pane_cp2

0xc71e,	// (0x0000ee2e) tabs_2_long_active_pane_ParamLimits

0xc71e,	// (0x0000ee2e) tabs_2_long_active_pane

0xc72e,	// (0x0000ee3e) tabs_2_long_passive_pane_ParamLimits

0xc72e,	// (0x0000ee3e) tabs_2_long_passive_pane

0xc6e9,	// (0x0000edf9) tabs_3_long_active_pane_ParamLimits

0xc6e9,	// (0x0000edf9) tabs_3_long_active_pane

0xc6fa,	// (0x0000ee0a) tabs_3_long_passive_pane_ParamLimits

0xc6fa,	// (0x0000ee0a) tabs_3_long_passive_pane

0xc70d,	// (0x0000ee1d) tabs_3_long_passive_pane_cp_ParamLimits

0xc70d,	// (0x0000ee1d) tabs_3_long_passive_pane_cp

0xc68f,	// (0x0000ed9f) volume_small_pane_g1

0xc698,	// (0x0000eda8) volume_small_pane_g2

0xc6a1,	// (0x0000edb1) volume_small_pane_g3

0xc6aa,	// (0x0000edba) volume_small_pane_g4

0xc6b3,	// (0x0000edc3) volume_small_pane_g5

0xc6bc,	// (0x0000edcc) volume_small_pane_g6

0xc6c5,	// (0x0000edd5) volume_small_pane_g7

0xc6ce,	// (0x0000edde) volume_small_pane_g8

0xc6d7,	// (0x0000ede7) volume_small_pane_g9

0xc6e0,	// (0x0000edf0) volume_small_pane_g10

0x0009,

0xf8de,	// (0x00011fee) volume_small_pane_g

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp2_ParamLimits

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp2

0xd80f,	// (0x0000ff1f) tabs_3_active_pane_g1

0xd817,	// (0x0000ff27) tabs_3_active_pane_t1

0xd801,	// (0x0000ff11) bg_passive_tab_pane_cp2_ParamLimits

0xd801,	// (0x0000ff11) bg_passive_tab_pane_cp2

0xd80f,	// (0x0000ff1f) tabs_3_passive_pane_g1

0xd817,	// (0x0000ff27) tabs_3_passive_pane_t1

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp3_ParamLimits

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp3

0xd829,	// (0x0000ff39) tabs_4_active_pane_g1

0xd831,	// (0x0000ff41) tabs_4_active_pane_t1

0xd801,	// (0x0000ff11) bg_passive_tab_pane_cp3_ParamLimits

0xd801,	// (0x0000ff11) bg_passive_tab_pane_cp3

0xd829,	// (0x0000ff39) tabs_4_1_passive_pane_g1

0xd831,	// (0x0000ff41) tabs_4_1_passive_pane_t1

0x0124,	// (0x00002834) list_highlight_pane_cp2

0x2194,	// (0x000048a4) list_set_pane_ParamLimits

0x2194,	// (0x000048a4) list_set_pane

0x2222,	// (0x00004932) main_pane_set_t1_ParamLimits

0x2222,	// (0x00004932) main_pane_set_t1

0x2242,	// (0x00004952) main_pane_set_t2_ParamLimits

0x2242,	// (0x00004952) main_pane_set_t2

0x2254,	// (0x00004964) main_pane_set_t3_ParamLimits

0x2254,	// (0x00004964) main_pane_set_t3

0x2266,	// (0x00004976) main_pane_set_t4_ParamLimits

0x2266,	// (0x00004976) main_pane_set_t4

0x0003,

0xf9ae,	// (0x000120be) main_pane_set_t_ParamLimits

0xf9ae,	// (0x000120be) main_pane_set_t

0x2278,	// (0x00004988) setting_code_pane

0x2280,	// (0x00004990) setting_slider_graphic_pane

0x2280,	// (0x00004990) setting_slider_pane

0x2280,	// (0x00004990) setting_text_pane

0x2280,	// (0x00004990) setting_volume_pane

0xbf20,	// (0x0000e630) volume_set_pane

0xd801,	// (0x0000ff11) bg_set_opt_pane_cp

0xbf28,	// (0x0000e638) setting_slider_pane_t1

0xbf3e,	// (0x0000e64e) setting_slider_pane_t2

0xbf57,	// (0x0000e667) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00011cb2) setting_slider_pane_t

0xbf6e,	// (0x0000e67e) slider_set_pane

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp2

0xd843,	// (0x0000ff53) setting_slider_graphic_pane_g1

0xbf84,	// (0x0000e694) setting_slider_graphic_pane_t1

0xbf93,	// (0x0000e6a3) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00011cb9) setting_slider_graphic_pane_t

0xbfa2,	// (0x0000e6b2) slider_set_pane_cp

0xd721,	// (0x0000fe31) input_focus_pane_cp1

0x215a,	// (0x0000486a) list_set_text_pane

0xd63a,	// (0x0000fd4a) setting_text_pane_g1

0xd721,	// (0x0000fe31) input_focus_pane_cp2

0xd63a,	// (0x0000fd4a) setting_code_pane_g1

0xd84c,	// (0x0000ff5c) setting_code_pane_t1

0xd85a,	// (0x0000ff6a) set_text_pane_t1_ParamLimits

0xd85a,	// (0x0000ff6a) set_text_pane_t1

0xe63d,	// (0x00010d4d) set_opt_bg_pane_g1

0xe645,	// (0x00010d55) set_opt_bg_pane_g2

0x213a,	// (0x0000484a) set_opt_bg_pane_g3

0xe655,	// (0x00010d65) set_opt_bg_pane_g4

0xe65d,	// (0x00010d6d) set_opt_bg_pane_g5

0xe665,	// (0x00010d75) set_opt_bg_pane_g6

0x2142,	// (0x00004852) set_opt_bg_pane_g7

0x214a,	// (0x0000485a) set_opt_bg_pane_g8

0x2152,	// (0x00004862) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x000120ab) set_opt_bg_pane_g

0x20c9,	// (0x000047d9) slider_set_pane_g1

0xc849,	// (0x0000ef59) slider_set_pane_g2

0x0006,

0xf98c,	// (0x0001209c) slider_set_pane_g

0xc7e5,	// (0x0000eef5) volume_set_pane_g1

0xc7ed,	// (0x0000eefd) volume_set_pane_g2

0xc7f5,	// (0x0000ef05) volume_set_pane_g3

0xc7fd,	// (0x0000ef0d) volume_set_pane_g4

0xc805,	// (0x0000ef15) volume_set_pane_g5

0xc80d,	// (0x0000ef1d) volume_set_pane_g6

0xc815,	// (0x0000ef25) volume_set_pane_g7

0xc81d,	// (0x0000ef2d) volume_set_pane_g8

0xc825,	// (0x0000ef35) volume_set_pane_g9

0xc82d,	// (0x0000ef3d) volume_set_pane_g10

0x0009,

0xf964,	// (0x00012074) volume_set_pane_g

0xd875,	// (0x0000ff85) indicator_pane_ParamLimits

0xd875,	// (0x0000ff85) indicator_pane

0xd881,	// (0x0000ff91) main_idle_pane_g2_ParamLimits

0xd881,	// (0x0000ff91) main_idle_pane_g2

0xd8a5,	// (0x0000ffb5) main_pane_idle_g1_ParamLimits

0xd8a5,	// (0x0000ffb5) main_pane_idle_g1

0xd8b2,	// (0x0000ffc2) popup_clock_digital_analogue_window_ParamLimits

0xd8b2,	// (0x0000ffc2) popup_clock_digital_analogue_window

0xd8c9,	// (0x0000ffd9) soft_indicator_pane_ParamLimits

0xd8c9,	// (0x0000ffd9) soft_indicator_pane

0xd8d5,	// (0x0000ffe5) wallpaper_pane_ParamLimits

0xd8d5,	// (0x0000ffe5) wallpaper_pane

0xd63a,	// (0x0000fd4a) wallpaper_pane_g1

0xd8e9,	// (0x0000fff9) indicator_pane_g1_ParamLimits

0xd8e9,	// (0x0000fff9) indicator_pane_g1

0x25eb,	// (0x00004cfb) navi_navi_icon_text_pane_srt_g1

0xd904,	// (0x00010014) soft_indicator_pane_t1

0xd91e,	// (0x0001002e) aid_ps_area_pane

0xd92f,	// (0x0001003f) aid_ps_clock_pane

0xd93b,	// (0x0001004b) aid_ps_indicator_pane

0xd947,	// (0x00010057) indicator_ps_pane_ParamLimits

0xd947,	// (0x00010057) indicator_ps_pane

0xd956,	// (0x00010066) power_save_pane_g1_ParamLimits

0xd956,	// (0x00010066) power_save_pane_g1

0xd962,	// (0x00010072) power_save_pane_g2_ParamLimits

0xd962,	// (0x00010072) power_save_pane_g2

0xbc93,	// (0x0000e3a3) aid_navinavi_width_pane

0xd91e,	// (0x0001002e) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00011cbe) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00011cbe) power_save_pane_g

0xd970,	// (0x00010080) power_save_pane_t1_ParamLimits

0xd970,	// (0x00010080) power_save_pane_t1

0xd92f,	// (0x0001003f) aid_ps_clock_pane_ParamLimits

0xd93b,	// (0x0001004b) aid_ps_indicator_pane_ParamLimits

0xd982,	// (0x00010092) power_save_pane_t4_ParamLimits

0xd982,	// (0x00010092) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00011cc3) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00011cc3) power_save_pane_t

0xd9ac,	// (0x000100bc) power_save_t3_ParamLimits

0xd9ac,	// (0x000100bc) power_save_t3

0xd997,	// (0x000100a7) power_save_t2_ParamLimits

0xd997,	// (0x000100a7) power_save_t2

0xd9c1,	// (0x000100d1) indicator_ps_pane_g1

0xd9ca,	// (0x000100da) ai_gene_pane_ParamLimits

0xd9ca,	// (0x000100da) ai_gene_pane

0xd9d6,	// (0x000100e6) ai_links_pane_ParamLimits

0xd9d6,	// (0x000100e6) ai_links_pane

0xd9e2,	// (0x000100f2) indicator_pane_cp1_ParamLimits

0xd9e2,	// (0x000100f2) indicator_pane_cp1

0xd9ee,	// (0x000100fe) main_pane_idle_g1_cp_ParamLimits

0xd9ee,	// (0x000100fe) main_pane_idle_g1_cp

0xd9fa,	// (0x0001010a) popup_ai_links_title_window

0xda03,	// (0x00010113) soft_indicator_pane_cp1_ParamLimits

0xda03,	// (0x00010113) soft_indicator_pane_cp1

0x1e54,	// (0x00004564) ai_links_pane_g1

0x1e5d,	// (0x0000456d) grid_ai_links_pane

0x1e39,	// (0x00004549) ai_gene_pane_1

0x1e42,	// (0x00004552) ai_gene_pane_2

0x1e4b,	// (0x0000455b) list_highlight_pane_cp4

0x1e1d,	// (0x0000452d) cell_ai_link_pane_ParamLimits

0x1e1d,	// (0x0000452d) cell_ai_link_pane

0x1e15,	// (0x00004525) cell_ai_link_pane_g1

0xdc68,	// (0x00010378) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x0001204f) cell_ai_link_pane_g

0xd721,	// (0x0000fe31) grid_highlight_cp2

0xd721,	// (0x0000fe31) bg_popup_sub_pane_cp1

0xda1d,	// (0x0001012d) popup_ai_links_title_window_t1

0x1d67,	// (0x00004477) ai_gene_pane_1_g1_ParamLimits

0x1d67,	// (0x00004477) ai_gene_pane_1_g1

0x1d73,	// (0x00004483) ai_gene_pane_1_g2_ParamLimits

0x1d73,	// (0x00004483) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x00012045) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x00012045) ai_gene_pane_1_g

0x1d80,	// (0x00004490) ai_gene_pane_1_t1_ParamLimits

0x1d80,	// (0x00004490) ai_gene_pane_1_t1

0x1db4,	// (0x000044c4) grid_ai_soft_ind_pane

0x1d52,	// (0x00004462) ai_gene_pane_2_t1_ParamLimits

0x1d52,	// (0x00004462) ai_gene_pane_2_t1

0xda2c,	// (0x0001013c) main_pane_empty_t1_ParamLimits

0xda2c,	// (0x0001013c) main_pane_empty_t1

0xda49,	// (0x00010159) main_pane_empty_t2_ParamLimits

0xda49,	// (0x00010159) main_pane_empty_t2

0xda61,	// (0x00010171) main_pane_empty_t3_ParamLimits

0xda61,	// (0x00010171) main_pane_empty_t3

0xda74,	// (0x00010184) main_pane_empty_t4_ParamLimits

0xda74,	// (0x00010184) main_pane_empty_t4

0xda87,	// (0x00010197) main_pane_empty_t5_ParamLimits

0xda87,	// (0x00010197) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00011cc8) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00011cc8) main_pane_empty_t

0xe72f,	// (0x00010e3f) bg_popup_window_pane_ParamLimits

0xe72f,	// (0x00010e3f) bg_popup_window_pane

0x1acc,	// (0x000041dc) find_popup_pane_cp2_ParamLimits

0x1acc,	// (0x000041dc) find_popup_pane_cp2

0x1ad8,	// (0x000041e8) heading_pane_ParamLimits

0x1ad8,	// (0x000041e8) heading_pane

0xd721,	// (0x0000fe31) bg_popup_sub_pane

0x1a34,	// (0x00004144) bg_popup_window_pane_g1_ParamLimits

0x1a34,	// (0x00004144) bg_popup_window_pane_g1

0x1a40,	// (0x00004150) bg_popup_window_pane_g2_ParamLimits

0x1a40,	// (0x00004150) bg_popup_window_pane_g2

0x1a4c,	// (0x0000415c) bg_popup_window_pane_g3_ParamLimits

0x1a4c,	// (0x0000415c) bg_popup_window_pane_g3

0x1a58,	// (0x00004168) bg_popup_window_pane_g4_ParamLimits

0x1a58,	// (0x00004168) bg_popup_window_pane_g4

0x1a64,	// (0x00004174) bg_popup_window_pane_g5_ParamLimits

0x1a64,	// (0x00004174) bg_popup_window_pane_g5

0x1a70,	// (0x00004180) bg_popup_window_pane_g6_ParamLimits

0x1a70,	// (0x00004180) bg_popup_window_pane_g6

0x1a7c,	// (0x0000418c) bg_popup_window_pane_g7_ParamLimits

0x1a7c,	// (0x0000418c) bg_popup_window_pane_g7

0x1a88,	// (0x00004198) bg_popup_window_pane_g8_ParamLimits

0x1a88,	// (0x00004198) bg_popup_window_pane_g8

0x1a94,	// (0x000041a4) bg_popup_window_pane_g9_ParamLimits

0x1a94,	// (0x000041a4) bg_popup_window_pane_g9

0x1aa0,	// (0x000041b0) bg_popup_window_pane_g10_ParamLimits

0x1aa0,	// (0x000041b0) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x0001200d) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x0001200d) bg_popup_window_pane_g

0x19c9,	// (0x000040d9) bg_popup_heading_pane_ParamLimits

0x19c9,	// (0x000040d9) bg_popup_heading_pane

0xc8d1,	// (0x0000efe1) tabs_4_passive_pane_cp_srt_ParamLimits

0xc8d1,	// (0x0000efe1) tabs_4_passive_pane_cp_srt

0xc8e3,	// (0x0000eff3) tabs_4_passive_pane_srt_ParamLimits

0x19dd,	// (0x000040ed) heading_pane_g2

0xc8e3,	// (0x0000eff3) tabs_4_passive_pane_srt

0x0124,	// (0x00002834) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0124,	// (0x00002834) bg_passive_tab_pane_cp3_srt

0x19e5,	// (0x000040f5) heading_pane_t1_ParamLimits

0x19e5,	// (0x000040f5) heading_pane_t1

0x19fc,	// (0x0000410c) heading_pane_t2_ParamLimits

0x19fc,	// (0x0000410c) heading_pane_t2

0x0001,

0xf8f8,	// (0x00012008) heading_pane_t_ParamLimits

0xf8f8,	// (0x00012008) heading_pane_t

0x13fb,	// (0x00003b0b) bg_popup_heading_pane_g1

0x14a4,	// (0x00003bb4) bg_popup_heading_pane_g2

0x14ac,	// (0x00003bbc) bg_popup_heading_pane_g3

0x14b4,	// (0x00003bc4) bg_popup_heading_pane_g4

0x14bc,	// (0x00003bcc) bg_popup_heading_pane_g5

0x14c4,	// (0x00003bd4) bg_popup_heading_pane_g6

0x14cc,	// (0x00003bdc) bg_popup_heading_pane_g7

0x14d4,	// (0x00003be4) bg_popup_heading_pane_g8

0x14dc,	// (0x00003bec) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x00011fc4) bg_popup_heading_pane_g

0x0af2,	// (0x00003202) bg_popup_sub_pane_g1

0x0afa,	// (0x0000320a) bg_popup_sub_pane_g2

0x0b02,	// (0x00003212) bg_popup_sub_pane_g3

0x0b0a,	// (0x0000321a) bg_popup_sub_pane_g4

0x0b12,	// (0x00003222) bg_popup_sub_pane_g5

0x0b1a,	// (0x0000322a) bg_popup_sub_pane_g6

0x0b22,	// (0x00003232) bg_popup_sub_pane_g7

0x0b2a,	// (0x0000323a) bg_popup_sub_pane_g8

0x0b32,	// (0x00003242) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x00011f9e) bg_popup_sub_pane_g

0xdac6,	// (0x000101d6) bg_popup_window_pane_cp5_ParamLimits

0xdac6,	// (0x000101d6) bg_popup_window_pane_cp5

0xdae2,	// (0x000101f2) popup_note_window_g1_ParamLimits

0xdae2,	// (0x000101f2) popup_note_window_g1

0xdaee,	// (0x000101fe) popup_note_window_t1_ParamLimits

0xdaee,	// (0x000101fe) popup_note_window_t1

0xdb04,	// (0x00010214) popup_note_window_t2_ParamLimits

0xdb04,	// (0x00010214) popup_note_window_t2

0xdb1a,	// (0x0001022a) popup_note_window_t3_ParamLimits

0xdb1a,	// (0x0001022a) popup_note_window_t3

0xdb30,	// (0x00010240) popup_note_window_t4_ParamLimits

0xdb30,	// (0x00010240) popup_note_window_t4

0xdb58,	// (0x00010268) popup_note_window_t5_ParamLimits

0xdb58,	// (0x00010268) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00011cd3) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00011cd3) popup_note_window_t

0xdb7c,	// (0x0001028c) bg_popup_window_pane_cp6_ParamLimits

0xdb7c,	// (0x0001028c) bg_popup_window_pane_cp6

0x1377,	// (0x00003a87) popup_note_image_window_g1_ParamLimits

0x1377,	// (0x00003a87) popup_note_image_window_g1

0x1383,	// (0x00003a93) popup_note_image_window_g2_ParamLimits

0x1383,	// (0x00003a93) popup_note_image_window_g2

0x0001,

0xf882,	// (0x00011f92) popup_note_image_window_g_ParamLimits

0xf882,	// (0x00011f92) popup_note_image_window_g

0x139c,	// (0x00003aac) popup_note_image_window_t1_ParamLimits

0x139c,	// (0x00003aac) popup_note_image_window_t1

0x13b5,	// (0x00003ac5) popup_note_image_window_t2_ParamLimits

0x13b5,	// (0x00003ac5) popup_note_image_window_t2

0x13ce,	// (0x00003ade) popup_note_image_window_t3_ParamLimits

0x13ce,	// (0x00003ade) popup_note_image_window_t3

0x0002,

0xf887,	// (0x00011f97) popup_note_image_window_t_ParamLimits

0xf887,	// (0x00011f97) popup_note_image_window_t

0x1246,	// (0x00003956) bg_popup_window_pane_cp7_ParamLimits

0x1246,	// (0x00003956) bg_popup_window_pane_cp7

0x1276,	// (0x00003986) popup_note_wait_window_g1_ParamLimits

0x1276,	// (0x00003986) popup_note_wait_window_g1

0x1282,	// (0x00003992) popup_note_wait_window_g2_ParamLimits

0x1282,	// (0x00003992) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x00011f80) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x00011f80) popup_note_wait_window_g

0x129a,	// (0x000039aa) popup_note_wait_window_t1_ParamLimits

0x129a,	// (0x000039aa) popup_note_wait_window_t1

0x12c1,	// (0x000039d1) popup_note_wait_window_t2_ParamLimits

0x12c1,	// (0x000039d1) popup_note_wait_window_t2

0x12de,	// (0x000039ee) popup_note_wait_window_t3_ParamLimits

0x12de,	// (0x000039ee) popup_note_wait_window_t3

0x12f1,	// (0x00003a01) popup_note_wait_window_t4_ParamLimits

0x12f1,	// (0x00003a01) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x00011f87) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x00011f87) popup_note_wait_window_t

0x1316,	// (0x00003a26) wait_bar_pane_ParamLimits

0x1316,	// (0x00003a26) wait_bar_pane

0xd721,	// (0x0000fe31) wait_anim_pane

0xd721,	// (0x0000fe31) wait_border_pane

0xd63a,	// (0x0000fd4a) wait_anim_pane_g1

0xd63a,	// (0x0000fd4a) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00011e52) wait_anim_pane_g

0x11f6,	// (0x00003906) wait_border_pane_g1

0x11ff,	// (0x0000390f) wait_border_pane_g2

0x1208,	// (0x00003918) wait_border_pane_g3

0x0002,

0xf869,	// (0x00011f79) wait_border_pane_g

0x1158,	// (0x00003868) bg_popup_window_pane_cp16_ParamLimits

0x1158,	// (0x00003868) bg_popup_window_pane_cp16

0x1166,	// (0x00003876) indicator_popup_pane_cp4_ParamLimits

0x1166,	// (0x00003876) indicator_popup_pane_cp4

0x117a,	// (0x0000388a) popup_query_data_window_t1_ParamLimits

0x117a,	// (0x0000388a) popup_query_data_window_t1

0x118c,	// (0x0000389c) popup_query_data_window_t2_ParamLimits

0x118c,	// (0x0000389c) popup_query_data_window_t2

0x11a5,	// (0x000038b5) popup_query_data_window_t3_ParamLimits

0x11a5,	// (0x000038b5) popup_query_data_window_t3

0x0002,

0xf862,	// (0x00011f72) popup_query_data_window_t_ParamLimits

0xf862,	// (0x00011f72) popup_query_data_window_t

0x11bf,	// (0x000038cf) query_popup_data_pane_ParamLimits

0x11bf,	// (0x000038cf) query_popup_data_pane

0x11d3,	// (0x000038e3) query_popup_data_pane_cp1_ParamLimits

0x11d3,	// (0x000038e3) query_popup_data_pane_cp1

0xdb7c,	// (0x0001028c) bg_popup_window_pane_cp10_ParamLimits

0xdb7c,	// (0x0001028c) bg_popup_window_pane_cp10

0x10bb,	// (0x000037cb) indicator_popup_pane_ParamLimits

0x10bb,	// (0x000037cb) indicator_popup_pane

0xdbd3,	// (0x000102e3) popup_query_code_window_t1_ParamLimits

0xdbd3,	// (0x000102e3) popup_query_code_window_t1

0x10d3,	// (0x000037e3) popup_query_code_window_t2_ParamLimits

0x10d3,	// (0x000037e3) popup_query_code_window_t2

0x1111,	// (0x00003821) popup_query_code_window_t3_ParamLimits

0x1111,	// (0x00003821) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x00011f6b) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x00011f6b) popup_query_code_window_t

0x1140,	// (0x00003850) query_popup_pane_ParamLimits

0x1140,	// (0x00003850) query_popup_pane

0xdb7c,	// (0x0001028c) bg_popup_window_pane_cp15_ParamLimits

0xdb7c,	// (0x0001028c) bg_popup_window_pane_cp15

0xdb9a,	// (0x000102aa) indicator_popup_pane_cp1_ParamLimits

0xdb9a,	// (0x000102aa) indicator_popup_pane_cp1

0xdbad,	// (0x000102bd) indicator_popup_pane_cp2_ParamLimits

0xdbad,	// (0x000102bd) indicator_popup_pane_cp2

0xdbc0,	// (0x000102d0) popup_query_data_code_window_g1_ParamLimits

0xdbc0,	// (0x000102d0) popup_query_data_code_window_g1

0xdbd3,	// (0x000102e3) popup_query_data_code_window_t1_ParamLimits

0xdbd3,	// (0x000102e3) popup_query_data_code_window_t1

0xdbe5,	// (0x000102f5) popup_query_data_code_window_t2_ParamLimits

0xdbe5,	// (0x000102f5) popup_query_data_code_window_t2

0xdbf7,	// (0x00010307) popup_query_data_code_window_t3_ParamLimits

0xdbf7,	// (0x00010307) popup_query_data_code_window_t3

0xdc0d,	// (0x0001031d) popup_query_data_code_window_t4_ParamLimits

0xdc0d,	// (0x0001031d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00011cde) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00011cde) popup_query_data_code_window_t

0xc5aa,	// (0x0000ecba) list_single_midp_graphic_pane_g3

0xdc25,	// (0x00010335) query_popup_data_pane_cp2_ParamLimits

0xdc38,	// (0x00010348) query_popup_pane_cp2_ParamLimits

0xdc38,	// (0x00010348) query_popup_pane_cp2

0xd721,	// (0x0000fe31) bg_popup_window_pane_cp11

0x108f,	// (0x0000379f) heading_pane_cp5

0xdd1c,	// (0x0001042c) listscroll_popup_info_pane

0xd721,	// (0x0000fe31) input_focus_pane_cp3

0xdc4b,	// (0x0001035b) query_popup_pane_t1

0xdc59,	// (0x00010369) list_popup_info_pane_ParamLimits

0xdc59,	// (0x00010369) list_popup_info_pane

0xdc68,	// (0x00010378) listscroll_popup_info_pane_g1

0xdc70,	// (0x00010380) scroll_pane_cp7

0xdc78,	// (0x00010388) popup_info_list_pane_t1_ParamLimits

0xdc78,	// (0x00010388) popup_info_list_pane_t1

0xdc92,	// (0x000103a2) popup_info_list_pane_t2_ParamLimits

0xdc92,	// (0x000103a2) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00011ce7) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00011ce7) popup_info_list_pane_t

0xd721,	// (0x0000fe31) bg_popup_window_pane_cp12

0x2622,	// (0x00004d32) find_popup_pane

0xd801,	// (0x0000ff11) bg_popup_window_pane_cp3

0xdcac,	// (0x000103bc) heading_pane_cp3

0xdcb8,	// (0x000103c8) listscroll_popup_graphic_pane

0xd721,	// (0x0000fe31) bg_popup_window_pane_cp4

0xdd14,	// (0x00010424) heading_pane_cp4

0xdd1c,	// (0x0001042c) listscroll_popup_colour_pane

0xdd24,	// (0x00010434) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xdd24,	// (0x00010434) cell_large_graphic_colour_none_popup_pane

0xdd34,	// (0x00010444) grid_large_graphic_colour_popup_pane_ParamLimits

0xdd34,	// (0x00010444) grid_large_graphic_colour_popup_pane

0xdd50,	// (0x00010460) listscroll_popup_colour_pane_g1_ParamLimits

0xdd50,	// (0x00010460) listscroll_popup_colour_pane_g1

0xdd67,	// (0x00010477) listscroll_popup_colour_pane_g2_ParamLimits

0xdd67,	// (0x00010477) listscroll_popup_colour_pane_g2

0xdd7b,	// (0x0001048b) listscroll_popup_colour_pane_g3_ParamLimits

0xdd7b,	// (0x0001048b) listscroll_popup_colour_pane_g3

0xdd8b,	// (0x0001049b) listscroll_popup_colour_pane_g4_ParamLimits

0xdd8b,	// (0x0001049b) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00011cec) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00011cec) listscroll_popup_colour_pane_g

0xdd9a,	// (0x000104aa) scroll_pane_cp6_ParamLimits

0xdd9a,	// (0x000104aa) scroll_pane_cp6

0xddac,	// (0x000104bc) cell_large_graphic_colour_popup_pane_ParamLimits

0xddac,	// (0x000104bc) cell_large_graphic_colour_popup_pane

0xddcb,	// (0x000104db) cell_large_graphic_colour_none_popup_pane_t1

0xd721,	// (0x0000fe31) grid_highlight_pane_cp5

0xddda,	// (0x000104ea) cell_large_graphic_colour_popup_pane_g1

0xdde2,	// (0x000104f2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00011cf5) cell_large_graphic_colour_popup_pane_g

0xddea,	// (0x000104fa) cell_large_graphic_colour_popup_pane_g2_copy1

0xddf3,	// (0x00010503) grid_highlight_pane_cp4

0xddfb,	// (0x0001050b) bg_popup_window_pane_cp8_ParamLimits

0xddfb,	// (0x0001050b) bg_popup_window_pane_cp8

0xde16,	// (0x00010526) popup_snote_single_text_window_g1_ParamLimits

0xde16,	// (0x00010526) popup_snote_single_text_window_g1

0xde28,	// (0x00010538) popup_snote_single_text_window_t1_ParamLimits

0xde28,	// (0x00010538) popup_snote_single_text_window_t1

0xde3b,	// (0x0001054b) popup_snote_single_text_window_t2_ParamLimits

0xde3b,	// (0x0001054b) popup_snote_single_text_window_t2

0xde4e,	// (0x0001055e) popup_snote_single_text_window_t3_ParamLimits

0xde4e,	// (0x0001055e) popup_snote_single_text_window_t3

0xde87,	// (0x00010597) popup_snote_single_text_window_t4_ParamLimits

0xde87,	// (0x00010597) popup_snote_single_text_window_t4

0xdebb,	// (0x000105cb) popup_snote_single_text_window_t5_ParamLimits

0xdebb,	// (0x000105cb) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00011cfa) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00011cfa) popup_snote_single_text_window_t

0xdeea,	// (0x000105fa) bg_popup_window_pane_cp9_ParamLimits

0xdeea,	// (0x000105fa) bg_popup_window_pane_cp9

0xde16,	// (0x00010526) popup_snote_single_graphic_window_g1_ParamLimits

0xde16,	// (0x00010526) popup_snote_single_graphic_window_g1

0xdef8,	// (0x00010608) popup_snote_single_graphic_window_g2_ParamLimits

0xdef8,	// (0x00010608) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00011d05) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00011d05) popup_snote_single_graphic_window_g

0xdf04,	// (0x00010614) popup_snote_single_graphic_window_t1_ParamLimits

0xdf04,	// (0x00010614) popup_snote_single_graphic_window_t1

0xdf17,	// (0x00010627) popup_snote_single_graphic_window_t2_ParamLimits

0xdf17,	// (0x00010627) popup_snote_single_graphic_window_t2

0xde4e,	// (0x0001055e) popup_snote_single_graphic_window_t3_ParamLimits

0xde4e,	// (0x0001055e) popup_snote_single_graphic_window_t3

0xde87,	// (0x00010597) popup_snote_single_graphic_window_t4_ParamLimits

0xde87,	// (0x00010597) popup_snote_single_graphic_window_t4

0xdebb,	// (0x000105cb) popup_snote_single_graphic_window_t5_ParamLimits

0xdebb,	// (0x000105cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00011d0a) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00011d0a) popup_snote_single_graphic_window_t

0x24d7,	// (0x00004be7) grid_graphic_popup_pane_ParamLimits

0x24d7,	// (0x00004be7) grid_graphic_popup_pane

0x24fa,	// (0x00004c0a) listscroll_popup_graphic_pane_g1_ParamLimits

0x24fa,	// (0x00004c0a) listscroll_popup_graphic_pane_g1

0x250e,	// (0x00004c1e) listscroll_popup_graphic_pane_g2_ParamLimits

0x250e,	// (0x00004c1e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x000120e8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x000120e8) listscroll_popup_graphic_pane_g

0x2522,	// (0x00004c32) scroll_pane_cp5

0x247a,	// (0x00004b8a) cell_graphic_popup_pane_ParamLimits

0x247a,	// (0x00004b8a) cell_graphic_popup_pane

0x245b,	// (0x00004b6b) cell_graphic_popup_pane_g1

0x2463,	// (0x00004b73) cell_graphic_popup_pane_g2

0xddea,	// (0x000104fa) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x000120e1) cell_graphic_popup_pane_g

0x246c,	// (0x00004b7c) cell_graphic_popup_pane_t2

0xddf3,	// (0x00010503) grid_highlight_pane_cp3

0xdf3c,	// (0x0001064c) list_gen_pane_ParamLimits

0xdf3c,	// (0x0001064c) list_gen_pane

0xdf6d,	// (0x0001067d) scroll_pane

0x23db,	// (0x00004aeb) bg_list_pane_g1_ParamLimits

0x23db,	// (0x00004aeb) bg_list_pane_g1

0x23f2,	// (0x00004b02) bg_list_pane_g2_ParamLimits

0x23f2,	// (0x00004b02) bg_list_pane_g2

0x2405,	// (0x00004b15) bg_list_pane_g3_ParamLimits

0x2405,	// (0x00004b15) bg_list_pane_g3

0x2417,	// (0x00004b27) bg_list_pane_g4_ParamLimits

0x2417,	// (0x00004b27) bg_list_pane_g4

0x2429,	// (0x00004b39) bg_list_pane_g5_ParamLimits

0x2429,	// (0x00004b39) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x000120d6) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x000120d6) bg_list_pane_g

0x2326,	// (0x00004a36) list_double2_graphic_large_graphic_pane_ParamLimits

0x2326,	// (0x00004a36) list_double2_graphic_large_graphic_pane

0x2326,	// (0x00004a36) list_double2_graphic_pane_ParamLimits

0x2326,	// (0x00004a36) list_double2_graphic_pane

0x2326,	// (0x00004a36) list_double2_large_graphic_pane_ParamLimits

0x2326,	// (0x00004a36) list_double2_large_graphic_pane

0x2326,	// (0x00004a36) list_double2_pane_ParamLimits

0x2326,	// (0x00004a36) list_double2_pane

0x2326,	// (0x00004a36) list_double_graphic_heading_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_graphic_heading_pane

0x2326,	// (0x00004a36) list_double_graphic_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_graphic_pane

0x2326,	// (0x00004a36) list_double_heading_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_heading_pane

0x2326,	// (0x00004a36) list_double_large_graphic_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_large_graphic_pane

0x2326,	// (0x00004a36) list_double_number_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_number_pane

0x2326,	// (0x00004a36) list_double_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_pane

0x2326,	// (0x00004a36) list_double_time_pane_ParamLimits

0x2326,	// (0x00004a36) list_double_time_pane

0x2326,	// (0x00004a36) list_setting_number_pane_ParamLimits

0x2326,	// (0x00004a36) list_setting_number_pane

0x2326,	// (0x00004a36) list_setting_pane_ParamLimits

0x2326,	// (0x00004a36) list_setting_pane

0x2371,	// (0x00004a81) list_single_2graphic_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_2graphic_pane

0x2371,	// (0x00004a81) list_single_graphic_heading_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_graphic_heading_pane

0x2371,	// (0x00004a81) list_single_graphic_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_graphic_pane

0x2371,	// (0x00004a81) list_single_heading_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_heading_pane

0x23c5,	// (0x00004ad5) list_single_large_graphic_pane_ParamLimits

0x23c5,	// (0x00004ad5) list_single_large_graphic_pane

0x2371,	// (0x00004a81) list_single_number_heading_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_number_heading_pane

0x2371,	// (0x00004a81) list_single_number_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_number_pane

0x2371,	// (0x00004a81) list_single_pane_ParamLimits

0x2371,	// (0x00004a81) list_single_pane

0xd721,	// (0x0000fe31) list_highlight_pane_cp1

0xdfae,	// (0x000106be) list_single_pane_g1_ParamLimits

0xdfae,	// (0x000106be) list_single_pane_g1

0xdfba,	// (0x000106ca) list_single_pane_g2_ParamLimits

0xdfba,	// (0x000106ca) list_single_pane_g2

0x0001,

0xf60c,	// (0x00011d1c) list_single_pane_g_ParamLimits

0xf60c,	// (0x00011d1c) list_single_pane_g

0x22f1,	// (0x00004a01) list_single_pane_t1_ParamLimits

0x22f1,	// (0x00004a01) list_single_pane_t1

0xdfae,	// (0x000106be) list_single_number_pane_g1_ParamLimits

0xdfae,	// (0x000106be) list_single_number_pane_g1

0xdfba,	// (0x000106ca) list_single_number_pane_g2_ParamLimits

0xdfba,	// (0x000106ca) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00011d1c) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00011d1c) list_single_number_pane_g

0xdfc6,	// (0x000106d6) list_single_number_pane_t1_ParamLimits

0xdfc6,	// (0x000106d6) list_single_number_pane_t1

0x206c,	// (0x0000477c) list_single_number_pane_t2_ParamLimits

0x206c,	// (0x0000477c) list_single_number_pane_t2

0x0001,

0xf987,	// (0x00012097) list_single_number_pane_t_ParamLimits

0xf987,	// (0x00012097) list_single_number_pane_t

0xdfa2,	// (0x000106b2) list_single_graphic_pane_g1_ParamLimits

0xdfa2,	// (0x000106b2) list_single_graphic_pane_g1

0xdfae,	// (0x000106be) list_single_graphic_pane_g2_ParamLimits

0xdfae,	// (0x000106be) list_single_graphic_pane_g2

0xdfba,	// (0x000106ca) list_single_graphic_pane_g3_ParamLimits

0xdfba,	// (0x000106ca) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00011d15) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00011d15) list_single_graphic_pane_g

0xdfc6,	// (0x000106d6) list_single_graphic_pane_t1_ParamLimits

0xdfc6,	// (0x000106d6) list_single_graphic_pane_t1

0xdfae,	// (0x000106be) list_single_heading_pane_g1_ParamLimits

0xdfae,	// (0x000106be) list_single_heading_pane_g1

0xdfba,	// (0x000106ca) list_single_heading_pane_g2_ParamLimits

0xdfba,	// (0x000106ca) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00011d1c) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00011d1c) list_single_heading_pane_g

0xdfdc,	// (0x000106ec) list_single_heading_pane_t1_ParamLimits

0xdfdc,	// (0x000106ec) list_single_heading_pane_t1

0xdff2,	// (0x00010702) list_single_heading_pane_t2_ParamLimits

0xdff2,	// (0x00010702) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00011d21) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00011d21) list_single_heading_pane_t

0xdfae,	// (0x000106be) list_single_number_heading_pane_g1_ParamLimits

0xdfae,	// (0x000106be) list_single_number_heading_pane_g1

0xdfba,	// (0x000106ca) list_single_number_heading_pane_g2_ParamLimits

0xdfba,	// (0x000106ca) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00011d1c) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00011d1c) list_single_number_heading_pane_g

0xdfdc,	// (0x000106ec) list_single_number_heading_pane_t1_ParamLimits

0xdfdc,	// (0x000106ec) list_single_number_heading_pane_t1

0xe004,	// (0x00010714) list_single_number_heading_pane_t2_ParamLimits

0xe004,	// (0x00010714) list_single_number_heading_pane_t2

0xe016,	// (0x00010726) list_single_number_heading_pane_t3_ParamLimits

0xe016,	// (0x00010726) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00011d26) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00011d26) list_single_number_heading_pane_t

0xdfa2,	// (0x000106b2) list_single_graphic_heading_pane_g1_ParamLimits

0xdfa2,	// (0x000106b2) list_single_graphic_heading_pane_g1

0xe028,	// (0x00010738) list_single_graphic_heading_pane_g4_ParamLimits

0xe028,	// (0x00010738) list_single_graphic_heading_pane_g4

0xdfba,	// (0x000106ca) list_single_graphic_heading_pane_g5_ParamLimits

0xdfba,	// (0x000106ca) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00011d2d) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00011d2d) list_single_graphic_heading_pane_g

0xdfdc,	// (0x000106ec) list_single_graphic_heading_pane_t1_ParamLimits

0xdfdc,	// (0x000106ec) list_single_graphic_heading_pane_t1

0xe037,	// (0x00010747) list_single_graphic_heading_pane_t2_ParamLimits

0xe037,	// (0x00010747) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00011d34) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00011d34) list_single_graphic_heading_pane_t

0xe049,	// (0x00010759) list_single_large_graphic_pane_g1_ParamLimits

0xe049,	// (0x00010759) list_single_large_graphic_pane_g1

0xe055,	// (0x00010765) list_single_large_graphic_pane_g2_ParamLimits

0xe055,	// (0x00010765) list_single_large_graphic_pane_g2

0xe061,	// (0x00010771) list_single_large_graphic_pane_g3_ParamLimits

0xe061,	// (0x00010771) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00011d39) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00011d39) list_single_large_graphic_pane_g

0x11ff,	// (0x0000390f) wait_border_pane_g2_copy1

0xe06d,	// (0x0001077d) list_single_large_graphic_pane_g4_cp2

0xe075,	// (0x00010785) list_single_large_graphic_pane_t1_ParamLimits

0xe075,	// (0x00010785) list_single_large_graphic_pane_t1

0xe08b,	// (0x0001079b) list_double_pane_g1_ParamLimits

0xe08b,	// (0x0001079b) list_double_pane_g1

0xe097,	// (0x000107a7) list_double_pane_g2_ParamLimits

0xe097,	// (0x000107a7) list_double_pane_g2

0x0001,

0xf630,	// (0x00011d40) list_double_pane_g_ParamLimits

0xf630,	// (0x00011d40) list_double_pane_g

0xe0a3,	// (0x000107b3) list_double_pane_t1_ParamLimits

0xe0a3,	// (0x000107b3) list_double_pane_t1

0xe0b9,	// (0x000107c9) list_double_pane_t2_ParamLimits

0xe0b9,	// (0x000107c9) list_double_pane_t2

0x0001,

0xf635,	// (0x00011d45) list_double_pane_t_ParamLimits

0xf635,	// (0x00011d45) list_double_pane_t

0xe0cb,	// (0x000107db) list_double2_pane_g1_ParamLimits

0xe0cb,	// (0x000107db) list_double2_pane_g1

0xe0da,	// (0x000107ea) list_double2_pane_g2_ParamLimits

0xe0da,	// (0x000107ea) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00011d4a) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00011d4a) list_double2_pane_g

0xe0e6,	// (0x000107f6) list_double2_pane_t1_ParamLimits

0xe0e6,	// (0x000107f6) list_double2_pane_t1

0xe0fc,	// (0x0001080c) list_double2_pane_t2_ParamLimits

0xe0fc,	// (0x0001080c) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00011d4f) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00011d4f) list_double2_pane_t

0xe08b,	// (0x0001079b) list_double_number_pane_g1_ParamLimits

0xe08b,	// (0x0001079b) list_double_number_pane_g1

0xe097,	// (0x000107a7) list_double_number_pane_g2_ParamLimits

0xe097,	// (0x000107a7) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00011d40) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00011d40) list_double_number_pane_g

0xe10e,	// (0x0001081e) list_double_number_pane_t1_ParamLimits

0xe10e,	// (0x0001081e) list_double_number_pane_t1

0xe120,	// (0x00010830) list_double_number_pane_t2_ParamLimits

0xe120,	// (0x00010830) list_double_number_pane_t2

0xe136,	// (0x00010846) list_double_number_pane_t3_ParamLimits

0xe136,	// (0x00010846) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00011d54) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00011d54) list_double_number_pane_t

0xe148,	// (0x00010858) list_double_graphic_pane_g1_ParamLimits

0xe148,	// (0x00010858) list_double_graphic_pane_g1

0xe154,	// (0x00010864) list_double_graphic_pane_g2_ParamLimits

0xe154,	// (0x00010864) list_double_graphic_pane_g2

0xe163,	// (0x00010873) list_double_graphic_pane_g3_ParamLimits

0xe163,	// (0x00010873) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00011d5b) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00011d5b) list_double_graphic_pane_g

0xe17b,	// (0x0001088b) list_double_graphic_pane_t1_ParamLimits

0xe17b,	// (0x0001088b) list_double_graphic_pane_t1

0xe191,	// (0x000108a1) list_double_graphic_pane_t2_ParamLimits

0xe191,	// (0x000108a1) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00011d64) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00011d64) list_double_graphic_pane_t

0xe1a3,	// (0x000108b3) list_double2_graphic_pane_g1_ParamLimits

0xe1a3,	// (0x000108b3) list_double2_graphic_pane_g1

0xe1af,	// (0x000108bf) list_double2_graphic_pane_g2_ParamLimits

0xe1af,	// (0x000108bf) list_double2_graphic_pane_g2

0xe0da,	// (0x000107ea) list_double2_graphic_pane_g3_ParamLimits

0xe0da,	// (0x000107ea) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00011d69) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00011d69) list_double2_graphic_pane_g

0xe1bb,	// (0x000108cb) list_double2_graphic_pane_t1_ParamLimits

0xe1bb,	// (0x000108cb) list_double2_graphic_pane_t1

0xe1d1,	// (0x000108e1) list_double2_graphic_pane_t2_ParamLimits

0xe1d1,	// (0x000108e1) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00011d70) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00011d70) list_double2_graphic_pane_t

0xe1e3,	// (0x000108f3) list_double_large_graphic_pane_g1_ParamLimits

0xe1e3,	// (0x000108f3) list_double_large_graphic_pane_g1

0xe20c,	// (0x0001091c) list_double_large_graphic_pane_g2_ParamLimits

0xe20c,	// (0x0001091c) list_double_large_graphic_pane_g2

0xe097,	// (0x000107a7) list_double_large_graphic_pane_g3_ParamLimits

0xe097,	// (0x000107a7) list_double_large_graphic_pane_g3

0xe21b,	// (0x0001092b) list_double_large_graphic_pane_g4_ParamLimits

0xe21b,	// (0x0001092b) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00011d75) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00011d75) list_double_large_graphic_pane_g

0xe241,	// (0x00010951) list_double_large_graphic_pane_t1_ParamLimits

0xe241,	// (0x00010951) list_double_large_graphic_pane_t1

0xe25a,	// (0x0001096a) list_double_large_graphic_pane_t2_ParamLimits

0xe25a,	// (0x0001096a) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00011d80) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00011d80) list_double_large_graphic_pane_t

0xe26c,	// (0x0001097c) list_double2_large_graphic_pane_g1_ParamLimits

0xe26c,	// (0x0001097c) list_double2_large_graphic_pane_g1

0xe0cb,	// (0x000107db) list_double2_large_graphic_pane_g2_ParamLimits

0xe0cb,	// (0x000107db) list_double2_large_graphic_pane_g2

0xe0da,	// (0x000107ea) list_double2_large_graphic_pane_g3_ParamLimits

0xe0da,	// (0x000107ea) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00011d85) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00011d85) list_double2_large_graphic_pane_g

0xe278,	// (0x00010988) list_double2_large_graphic_pane_t1_ParamLimits

0xe278,	// (0x00010988) list_double2_large_graphic_pane_t1

0xe28e,	// (0x0001099e) list_double2_large_graphic_pane_t2_ParamLimits

0xe28e,	// (0x0001099e) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00011d8c) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00011d8c) list_double2_large_graphic_pane_t

0xe2a0,	// (0x000109b0) list_double_heading_pane_g1_ParamLimits

0xe2a0,	// (0x000109b0) list_double_heading_pane_g1

0xe2af,	// (0x000109bf) list_double_heading_pane_g2_ParamLimits

0xe2af,	// (0x000109bf) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00011d91) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00011d91) list_double_heading_pane_g

0xe2bb,	// (0x000109cb) list_double_heading_pane_t1_ParamLimits

0xe2bb,	// (0x000109cb) list_double_heading_pane_t1

0xe0fc,	// (0x0001080c) list_double_heading_pane_t2_ParamLimits

0xe0fc,	// (0x0001080c) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00011d96) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00011d96) list_double_heading_pane_t

0xe148,	// (0x00010858) list_double_graphic_heading_pane_g1_ParamLimits

0xe148,	// (0x00010858) list_double_graphic_heading_pane_g1

0xe2a0,	// (0x000109b0) list_double_graphic_heading_pane_g2_ParamLimits

0xe2a0,	// (0x000109b0) list_double_graphic_heading_pane_g2

0xe2af,	// (0x000109bf) list_double_graphic_heading_pane_g3_ParamLimits

0xe2af,	// (0x000109bf) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00011d9b) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00011d9b) list_double_graphic_heading_pane_g

0xe2d1,	// (0x000109e1) list_double_graphic_heading_pane_t1_ParamLimits

0xe2d1,	// (0x000109e1) list_double_graphic_heading_pane_t1

0xe1d1,	// (0x000108e1) list_double_graphic_heading_pane_t2_ParamLimits

0xe1d1,	// (0x000108e1) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00011da2) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00011da2) list_double_graphic_heading_pane_t

0xe20c,	// (0x0001091c) list_double_time_pane_g1_ParamLimits

0xe20c,	// (0x0001091c) list_double_time_pane_g1

0xe097,	// (0x000107a7) list_double_time_pane_g2_ParamLimits

0xe097,	// (0x000107a7) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00011da7) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00011da7) list_double_time_pane_g

0xe2e7,	// (0x000109f7) list_double_time_pane_t1_ParamLimits

0xe2e7,	// (0x000109f7) list_double_time_pane_t1

0xe2fd,	// (0x00010a0d) list_double_time_pane_t2_ParamLimits

0xe2fd,	// (0x00010a0d) list_double_time_pane_t2

0xe30f,	// (0x00010a1f) list_double_time_pane_t3_ParamLimits

0xe30f,	// (0x00010a1f) list_double_time_pane_t3

0xe321,	// (0x00010a31) list_double_time_pane_t4_ParamLimits

0xe321,	// (0x00010a31) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00011dac) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00011dac) list_double_time_pane_t

0xe1af,	// (0x000108bf) list_setting_pane_g1_ParamLimits

0xe1af,	// (0x000108bf) list_setting_pane_g1

0xe0da,	// (0x000107ea) list_setting_pane_g2_ParamLimits

0xe0da,	// (0x000107ea) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00011db5) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00011db5) list_setting_pane_g

0xe333,	// (0x00010a43) list_setting_pane_t1_ParamLimits

0xe333,	// (0x00010a43) list_setting_pane_t1

0xe34a,	// (0x00010a5a) list_setting_pane_t2_ParamLimits

0xe34a,	// (0x00010a5a) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00011dba) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00011dba) list_setting_pane_t

0xe387,	// (0x00010a97) set_value_pane_cp_ParamLimits

0xe387,	// (0x00010a97) set_value_pane_cp

0xe1af,	// (0x000108bf) list_setting_number_pane_g1_ParamLimits

0xe1af,	// (0x000108bf) list_setting_number_pane_g1

0xe0da,	// (0x000107ea) list_setting_number_pane_g2_ParamLimits

0xe0da,	// (0x000107ea) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x00011db5) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x00011db5) list_setting_number_pane_g

0xe393,	// (0x00010aa3) list_setting_number_pane_t1_ParamLimits

0xe393,	// (0x00010aa3) list_setting_number_pane_t1

0xe3a5,	// (0x00010ab5) list_setting_number_pane_t2_ParamLimits

0xe3a5,	// (0x00010ab5) list_setting_number_pane_t2

0xe3bc,	// (0x00010acc) list_setting_number_pane_t3_ParamLimits

0xe3bc,	// (0x00010acc) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00011dc1) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00011dc1) list_setting_number_pane_t

0xe387,	// (0x00010a97) set_value_pane_ParamLimits

0xe387,	// (0x00010a97) set_value_pane

0xe3fd,	// (0x00010b0d) bg_set_opt_pane_ParamLimits

0xe3fd,	// (0x00010b0d) bg_set_opt_pane

0xe41e,	// (0x00010b2e) set_value_pane_t1

0xe42c,	// (0x00010b3c) slider_set_pane_cp3

0xe435,	// (0x00010b45) volume_small_pane_cp

0xe43e,	// (0x00010b4e) list_form_gen_pane

0xdf91,	// (0x000106a1) scroll_pane_cp8

0xe457,	// (0x00010b67) form_field_data_pane_ParamLimits

0xe457,	// (0x00010b67) form_field_data_pane

0xe477,	// (0x00010b87) form_field_data_wide_pane_ParamLimits

0xe477,	// (0x00010b87) form_field_data_wide_pane

0xe496,	// (0x00010ba6) form_field_popup_pane_ParamLimits

0xe496,	// (0x00010ba6) form_field_popup_pane

0xe4ae,	// (0x00010bbe) form_field_popup_wide_pane_ParamLimits

0xe4ae,	// (0x00010bbe) form_field_popup_wide_pane

0xe4c5,	// (0x00010bd5) form_field_slider_pane_ParamLimits

0xe4c5,	// (0x00010bd5) form_field_slider_pane

0xe4d8,	// (0x00010be8) form_field_slider_wide_pane_ParamLimits

0xe4d8,	// (0x00010be8) form_field_slider_wide_pane

0xe4eb,	// (0x00010bfb) data_form_pane

0xe4ff,	// (0x00010c0f) form_field_data_pane_t1

0xe517,	// (0x00010c27) input_focus_pane

0xe525,	// (0x00010c35) data_form_wide_pane

0xe551,	// (0x00010c61) form_field_data_wide_pane_t1

0xde08,	// (0x00010518) input_focus_pane_cp6

0xe573,	// (0x00010c83) form_field_popup_pane_t1

0xe517,	// (0x00010c27) input_focus_pane_cp7

0xe4eb,	// (0x00010bfb) list_form_pane

0xe593,	// (0x00010ca3) form_field_popup_wide_pane_t1

0xe517,	// (0x00010c27) input_focus_pane_cp8

0xe5a8,	// (0x00010cb8) list_form_wide_pane

0xe5bf,	// (0x00010ccf) form_field_slider_pane_t1_ParamLimits

0xe5bf,	// (0x00010ccf) form_field_slider_pane_t1

0xe5d5,	// (0x00010ce5) form_field_slider_pane_t2_ParamLimits

0xe5d5,	// (0x00010ce5) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00011dd1) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00011dd1) form_field_slider_pane_t

0xdac6,	// (0x000101d6) input_focus_pane_cp9_ParamLimits

0xdac6,	// (0x000101d6) input_focus_pane_cp9

0xe5e7,	// (0x00010cf7) slider_cont_pane_ParamLimits

0xe5e7,	// (0x00010cf7) slider_cont_pane

0xe5fb,	// (0x00010d0b) form_field_slider_wide_pane_t1_ParamLimits

0xe5fb,	// (0x00010d0b) form_field_slider_wide_pane_t1

0xe60d,	// (0x00010d1d) form_field_slider_wide_pane_t2_ParamLimits

0xe60d,	// (0x00010d1d) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00011dd6) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00011dd6) form_field_slider_wide_pane_t

0xdac6,	// (0x000101d6) input_focus_pane_cp10_ParamLimits

0xdac6,	// (0x000101d6) input_focus_pane_cp10

0xe61f,	// (0x00010d2f) slider_cont_pane_cp1_ParamLimits

0xe61f,	// (0x00010d2f) slider_cont_pane_cp1

0xe635,	// (0x00010d45) slider_form_pane_cp

0xe63d,	// (0x00010d4d) input_focus_pane_g1

0xe645,	// (0x00010d55) input_focus_pane_g2

0xe64d,	// (0x00010d5d) input_focus_pane_g3

0xe655,	// (0x00010d65) input_focus_pane_g4

0xe65d,	// (0x00010d6d) input_focus_pane_g5

0xe665,	// (0x00010d75) input_focus_pane_g6

0xe66d,	// (0x00010d7d) input_focus_pane_g7

0xe675,	// (0x00010d85) input_focus_pane_g8

0xe67d,	// (0x00010d8d) input_focus_pane_g9

0xd63a,	// (0x0000fd4a) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00011ddb) input_focus_pane_g

0x1208,	// (0x00003918) wait_border_pane_g3_copy1

0xe685,	// (0x00010d95) data_form_pane_t1

0xd63a,	// (0x0000fd4a) wait_anim_pane_g1_copy1

0x22d7,	// (0x000049e7) data_form_wide_pane_t1

0xe69f,	// (0x00010daf) list_form_graphic_pane_cp_ParamLimits

0xe69f,	// (0x00010daf) list_form_graphic_pane_cp

0x22a4,	// (0x000049b4) slider_form_pane_g1

0x22ad,	// (0x000049bd) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x000120c7) slider_form_pane_g

0xe6b4,	// (0x00010dc4) list_form_graphic_pane_ParamLimits

0xe6b4,	// (0x00010dc4) list_form_graphic_pane

0xe6ca,	// (0x00010dda) list_form_graphic_pane_g1

0xe6d2,	// (0x00010de2) list_form_graphic_pane_t1_ParamLimits

0xe6d2,	// (0x00010de2) list_form_graphic_pane_t1

0xd801,	// (0x0000ff11) list_highlight_pane_cp5_ParamLimits

0xd801,	// (0x0000ff11) list_highlight_pane_cp5

0xe6e7,	// (0x00010df7) find_pane_g1

0xe6f0,	// (0x00010e00) input_find_pane

0xe6f9,	// (0x00010e09) input_find_pane_g1_ParamLimits

0xe6f9,	// (0x00010e09) input_find_pane_g1

0xe705,	// (0x00010e15) input_find_pane_t1_ParamLimits

0xe705,	// (0x00010e15) input_find_pane_t1

0xe71a,	// (0x00010e2a) input_find_pane_t2_ParamLimits

0xe71a,	// (0x00010e2a) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00011df0) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00011df0) input_find_pane_t

0xe72f,	// (0x00010e3f) input_focus_pane_cp5_ParamLimits

0xe72f,	// (0x00010e3f) input_focus_pane_cp5

0xdac6,	// (0x000101d6) bg_popup_window_pane_cp2_ParamLimits

0xdac6,	// (0x000101d6) bg_popup_window_pane_cp2

0xe749,	// (0x00010e59) listscroll_menu_pane_ParamLimits

0xe749,	// (0x00010e59) listscroll_menu_pane

0xe755,	// (0x00010e65) popup_submenu_window_ParamLimits

0xe755,	// (0x00010e65) popup_submenu_window

0xe779,	// (0x00010e89) find_popup_pane_g1

0xe781,	// (0x00010e91) input_popup_find_pane_cp

0xe72f,	// (0x00010e3f) input_focus_pane_cp4_ParamLimits

0xe72f,	// (0x00010e3f) input_focus_pane_cp4

0xe797,	// (0x00010ea7) input_popup_find_pane_t1_ParamLimits

0xe797,	// (0x00010ea7) input_popup_find_pane_t1

0xd721,	// (0x0000fe31) bg_popup_sub_pane_cp

0xe7c5,	// (0x00010ed5) listscroll_popup_sub_pane

0xe7cd,	// (0x00010edd) list_submenu_pane_ParamLimits

0xe7cd,	// (0x00010edd) list_submenu_pane

0xe7de,	// (0x00010eee) scroll_pane_cp4

0xe7e6,	// (0x00010ef6) list_single_popup_submenu_pane_ParamLimits

0xe7e6,	// (0x00010ef6) list_single_popup_submenu_pane

0xe7fa,	// (0x00010f0a) list_single_popup_submenu_pane_g1

0xe802,	// (0x00010f12) list_single_popup_submenu_pane_t1_ParamLimits

0xe802,	// (0x00010f12) list_single_popup_submenu_pane_t1

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp1_ParamLimits

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp1

0xe817,	// (0x00010f27) tabs_2_active_pane_g1

0xe81f,	// (0x00010f2f) tabs_2_active_pane_t1

0xd801,	// (0x0000ff11) bg_passive_tab_pane_cp1_ParamLimits

0xd801,	// (0x0000ff11) bg_passive_tab_pane_cp1

0xe817,	// (0x00010f27) tabs_2_passive_pane_g1

0xe81f,	// (0x00010f2f) tabs_2_passive_pane_t1

0xe831,	// (0x00010f41) bg_active_tab_pane_cp4

0xe83f,	// (0x00010f4f) tabs_2_long_active_pane_t1

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp4

0xc5b2,	// (0x0000ecc2) list_single_midp_graphic_pane_g4_ParamLimits

0xe831,	// (0x00010f41) bg_active_tab_pane_cp5

0xe85e,	// (0x00010f6e) tabs_3_long_active_pane_t1

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp5

0xc5b2,	// (0x0000ecc2) list_single_midp_graphic_pane_g4

0xd801,	// (0x0000ff11) bg_popup_window_pane_cp13_ParamLimits

0xd801,	// (0x0000ff11) bg_popup_window_pane_cp13

0xe879,	// (0x00010f89) listscroll_popup_fast_pane_ParamLimits

0xe879,	// (0x00010f89) listscroll_popup_fast_pane

0xe888,	// (0x00010f98) grid_popup_fast_pane_ParamLimits

0xe888,	// (0x00010f98) grid_popup_fast_pane

0xe89a,	// (0x00010faa) scroll_pane_cp9_ParamLimits

0xe89a,	// (0x00010faa) scroll_pane_cp9

0x421a,	// (0x0000692a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x421a,	// (0x0000692a) list_single_graphic_hl_pane_t1_cp2

0xe8be,	// (0x00010fce) input_focus_pane_cp20_ParamLimits

0xe8be,	// (0x00010fce) input_focus_pane_cp20

0xe8cc,	// (0x00010fdc) query_popup_data_pane_t1_ParamLimits

0xe8cc,	// (0x00010fdc) query_popup_data_pane_t1

0xe8df,	// (0x00010fef) query_popup_data_pane_t2_ParamLimits

0xe8df,	// (0x00010fef) query_popup_data_pane_t2

0xe925,	// (0x00011035) query_popup_data_pane_t3_ParamLimits

0xe925,	// (0x00011035) query_popup_data_pane_t3

0xe966,	// (0x00011076) query_popup_data_pane_t4_ParamLimits

0xe966,	// (0x00011076) query_popup_data_pane_t4

0xe9a2,	// (0x000110b2) query_popup_data_pane_t5_ParamLimits

0xe9a2,	// (0x000110b2) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00011df5) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00011df5) query_popup_data_pane_t

0xe63d,	// (0x00010d4d) bg_set_opt_pane_g1

0xe645,	// (0x00010d55) bg_set_opt_pane_g2

0xe64d,	// (0x00010d5d) bg_set_opt_pane_g3

0xe655,	// (0x00010d65) bg_set_opt_pane_g4

0xe65d,	// (0x00010d6d) bg_set_opt_pane_g5

0xe665,	// (0x00010d75) bg_set_opt_pane_g6

0xe66d,	// (0x00010d7d) bg_set_opt_pane_g7

0xe675,	// (0x00010d85) bg_set_opt_pane_g8

0xe67d,	// (0x00010d8d) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00011e00) bg_set_opt_pane_g

0xc1de,	// (0x0000e8ee) control_top_pane_stacon_ParamLimits

0xc1de,	// (0x0000e8ee) control_top_pane_stacon

0xc231,	// (0x0000e941) signal_pane_stacon_ParamLimits

0xc231,	// (0x0000e941) signal_pane_stacon

0xefb7,	// (0x000116c7) stacon_top_pane_g1_ParamLimits

0xefb7,	// (0x000116c7) stacon_top_pane_g1

0xc256,	// (0x0000e966) title_pane_stacon_ParamLimits

0xc256,	// (0x0000e966) title_pane_stacon

0xc278,	// (0x0000e988) uni_indicator_pane_stacon_ParamLimits

0xc278,	// (0x0000e988) uni_indicator_pane_stacon

0xc28d,	// (0x0000e99d) battery_pane_stacon_ParamLimits

0xc28d,	// (0x0000e99d) battery_pane_stacon

0xc2cd,	// (0x0000e9dd) control_bottom_pane_stacon_ParamLimits

0xc2cd,	// (0x0000e9dd) control_bottom_pane_stacon

0xc2ec,	// (0x0000e9fc) navi_pane_stacon_ParamLimits

0xc2ec,	// (0x0000e9fc) navi_pane_stacon

0xefd9,	// (0x000116e9) stacon_bottom_pane_g1_ParamLimits

0xefd9,	// (0x000116e9) stacon_bottom_pane_g1

0xe9d9,	// (0x000110e9) aid_levels_signal_lsc_ParamLimits

0xe9d9,	// (0x000110e9) aid_levels_signal_lsc

0xbfaa,	// (0x0000e6ba) signal_pane_stacon_g1_ParamLimits

0xbfaa,	// (0x0000e6ba) signal_pane_stacon_g1

0xbfb6,	// (0x0000e6c6) signal_pane_stacon_g2_ParamLimits

0xbfb6,	// (0x0000e6c6) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00011e13) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00011e13) signal_pane_stacon_g

0xbfea,	// (0x0000e6fa) title_pane_stacon_t1_ParamLimits

0xbfea,	// (0x0000e6fa) title_pane_stacon_t1

0xe9f3,	// (0x00011103) uni_indicator_pane_stacon_g1

0xe9fd,	// (0x0001110d) uni_indicator_pane_stacon_g2

0xea07,	// (0x00011117) uni_indicator_pane_stacon_g3

0xea11,	// (0x00011121) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00011e1f) uni_indicator_pane_stacon_g

0xc00f,	// (0x0000e71f) control_top_pane_stacon_g1

0xc017,	// (0x0000e727) control_top_pane_stacon_t1_ParamLimits

0xc017,	// (0x0000e727) control_top_pane_stacon_t1

0xea1b,	// (0x0001112b) aid_levels_battery_lsc_ParamLimits

0xea1b,	// (0x0001112b) aid_levels_battery_lsc

0xc048,	// (0x0000e758) battery_pane_stacon_g1_ParamLimits

0xc048,	// (0x0000e758) battery_pane_stacon_g1

0xc054,	// (0x0000e764) battery_pane_stacon_g2_ParamLimits

0xc054,	// (0x0000e764) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00011e28) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00011e28) battery_pane_stacon_g

0xc083,	// (0x0000e793) navi_icon_pane_stacon

0xc093,	// (0x0000e7a3) navi_navi_pane_stacon

0xc083,	// (0x0000e793) navi_text_pane_stacon

0xc00f,	// (0x0000e71f) control_bottom_pane_stacon_g1

0xc0a3,	// (0x0000e7b3) control_bottom_pane_stacon_t1_ParamLimits

0xc0a3,	// (0x0000e7b3) control_bottom_pane_stacon_t1

0xea43,	// (0x00011153) grid_app_pane_ParamLimits

0xea43,	// (0x00011153) grid_app_pane

0xea5f,	// (0x0001116f) scroll_pane_cp15_ParamLimits

0xea5f,	// (0x0001116f) scroll_pane_cp15

0xea72,	// (0x00011182) cell_app_pane_ParamLimits

0xea72,	// (0x00011182) cell_app_pane

0xea94,	// (0x000111a4) cell_app_pane_g1_ParamLimits

0xea94,	// (0x000111a4) cell_app_pane_g1

0xeab8,	// (0x000111c8) cell_app_pane_g2_ParamLimits

0xeab8,	// (0x000111c8) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00011e2d) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00011e2d) cell_app_pane_g

0xeac4,	// (0x000111d4) cell_app_pane_t1_ParamLimits

0xeac4,	// (0x000111d4) cell_app_pane_t1

0xead6,	// (0x000111e6) grid_highlight_pane_ParamLimits

0xead6,	// (0x000111e6) grid_highlight_pane

0xe63d,	// (0x00010d4d) cell_highlight_pane_g1

0xe645,	// (0x00010d55) cell_highlight_pane_g2

0xe64d,	// (0x00010d5d) cell_highlight_pane_g3

0xe655,	// (0x00010d65) cell_highlight_pane_g4

0xe65d,	// (0x00010d6d) cell_highlight_pane_g5

0xe665,	// (0x00010d75) cell_highlight_pane_g6

0xe66d,	// (0x00010d7d) cell_highlight_pane_g7

0xe675,	// (0x00010d85) cell_highlight_pane_g8

0xe67d,	// (0x00010d8d) cell_highlight_pane_g9

0xd63a,	// (0x0000fd4a) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00011ddb) cell_highlight_pane_g

0xeae7,	// (0x000111f7) bg_scroll_pane

0xc0e7,	// (0x0000e7f7) scroll_handle_pane

0xeb2e,	// (0x0001123e) scroll_bg_pane_g1

0xeb43,	// (0x00011253) scroll_bg_pane_g2

0xeb5b,	// (0x0001126b) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00011e32) scroll_bg_pane_g

0xeb70,	// (0x00011280) scroll_handle_focus_pane_ParamLimits

0xeb70,	// (0x00011280) scroll_handle_focus_pane

0xeb2e,	// (0x0001123e) scroll_handle_pane_g1

0xeb7d,	// (0x0001128d) scroll_handle_pane_g2

0xeb5b,	// (0x0001126b) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00011e39) scroll_handle_pane_g

0xe72f,	// (0x00010e3f) bg_popup_sub_pane_cp21_ParamLimits

0xe72f,	// (0x00010e3f) bg_popup_sub_pane_cp21

0xeb91,	// (0x000112a1) popup_fep_japan_predictive_window_t1_ParamLimits

0xeb91,	// (0x000112a1) popup_fep_japan_predictive_window_t1

0xeba8,	// (0x000112b8) popup_fep_japan_predictive_window_t2_ParamLimits

0xeba8,	// (0x000112b8) popup_fep_japan_predictive_window_t2

0xebdb,	// (0x000112eb) popup_fep_japan_predictive_window_t3_ParamLimits

0xebdb,	// (0x000112eb) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00011e40) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00011e40) popup_fep_japan_predictive_window_t

0xd721,	// (0x0000fe31) bg_popup_sub_pane_cp23

0xec12,	// (0x00011322) listscroll_japin_cand_pane

0xec1a,	// (0x0001132a) popup_fep_japan_candidate_window_t1

0xec28,	// (0x00011338) candidate_pane_ParamLimits

0xec28,	// (0x00011338) candidate_pane

0xec3b,	// (0x0001134b) scroll_pane_cp30

0xec43,	// (0x00011353) list_single_popup_jap_candidate_pane_ParamLimits

0xec43,	// (0x00011353) list_single_popup_jap_candidate_pane

0xd721,	// (0x0000fe31) list_highlight_pane_cp30

0xec58,	// (0x00011368) list_single_popup_jap_candidate_pane_t1

0xec67,	// (0x00011377) level_1_signal

0xec74,	// (0x00011384) level_2_signal

0xec81,	// (0x00011391) level_3_signal

0xec8e,	// (0x0001139e) level_4_signal

0xec9b,	// (0x000113ab) level_5_signal

0xeca8,	// (0x000113b8) level_6_signal

0xecb5,	// (0x000113c5) level_7_signal

0xec67,	// (0x00011377) level_1_battery

0xec74,	// (0x00011384) level_2_battery

0xec81,	// (0x00011391) level_3_battery

0xec8e,	// (0x0001139e) level_4_battery

0xec9b,	// (0x000113ab) level_5_battery

0xeca8,	// (0x000113b8) level_6_battery

0xecb5,	// (0x000113c5) level_7_battery

0xecda,	// (0x000113ea) list_menu_pane_ParamLimits

0xecda,	// (0x000113ea) list_menu_pane

0xeceb,	// (0x000113fb) scroll_pane_cp25_ParamLimits

0xeceb,	// (0x000113fb) scroll_pane_cp25

0xed04,	// (0x00011414) list_double2_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double2_graphic_pane_cp2

0xed04,	// (0x00011414) list_double2_large_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double2_large_graphic_pane_cp2

0xed04,	// (0x00011414) list_double2_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double2_pane_cp2

0xed04,	// (0x00011414) list_double_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double_graphic_pane_cp2

0xed04,	// (0x00011414) list_double_large_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double_large_graphic_pane_cp2

0xed04,	// (0x00011414) list_double_number_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double_number_pane_cp2

0xed04,	// (0x00011414) list_double_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double_pane_cp2

0xed14,	// (0x00011424) list_single_2graphic_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_2graphic_pane_cp2

0xed14,	// (0x00011424) list_single_graphic_heading_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_graphic_heading_pane_cp2

0xed14,	// (0x00011424) list_single_graphic_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_graphic_pane_cp2

0xed14,	// (0x00011424) list_single_heading_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_heading_pane_cp2

0xed29,	// (0x00011439) list_single_large_graphic_pane_cp2_ParamLimits

0xed29,	// (0x00011439) list_single_large_graphic_pane_cp2

0xed14,	// (0x00011424) list_single_number_heading_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_number_heading_pane_cp2

0xed14,	// (0x00011424) list_single_number_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_number_pane_cp2

0xed14,	// (0x00011424) list_single_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_pane_cp2

0xed80,	// (0x00011490) bg_popup_sub_pane_cp22

0xc196,	// (0x0000e8a6) popup_side_volume_key_window_g1

0xc1ba,	// (0x0000e8ca) popup_side_volume_key_window_t1

0xc1d6,	// (0x0000e8e6) volume_small_pane_cp1

0xdac6,	// (0x000101d6) bg_popup_sub_pane_cp24_ParamLimits

0xdac6,	// (0x000101d6) bg_popup_sub_pane_cp24

0xed96,	// (0x000114a6) fep_china_uni_candidate_pane_ParamLimits

0xed96,	// (0x000114a6) fep_china_uni_candidate_pane

0xedaa,	// (0x000114ba) fep_china_uni_entry_pane

0xedba,	// (0x000114ca) popup_fep_china_uni_window_g1

0xedd6,	// (0x000114e6) fep_china_uni_entry_pane_g1

0xedde,	// (0x000114ee) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00011e6d) fep_china_uni_entry_pane_g

0xede6,	// (0x000114f6) fep_entry_item_pane

0xedf0,	// (0x00011500) fep_candidate_item_pane

0xedf8,	// (0x00011508) fep_china_uni_candidate_pane_g1

0xee00,	// (0x00011510) fep_china_uni_candidate_pane_g2

0xee08,	// (0x00011518) fep_china_uni_candidate_pane_g3

0xee10,	// (0x00011520) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00011e72) fep_china_uni_candidate_pane_g

0xd63a,	// (0x0000fd4a) fep_entry_item_pane_g1

0xee18,	// (0x00011528) fep_entry_item_pane_t1_ParamLimits

0xee18,	// (0x00011528) fep_entry_item_pane_t1

0xee2e,	// (0x0001153e) fep_candidate_item_pane_t1_ParamLimits

0xee2e,	// (0x0001153e) fep_candidate_item_pane_t1

0xee43,	// (0x00011553) fep_candidate_item_pane_t2_ParamLimits

0xee43,	// (0x00011553) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00011e7b) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00011e7b) fep_candidate_item_pane_t

0xd801,	// (0x0000ff11) list_highlight_pane_cp31_ParamLimits

0xd801,	// (0x0000ff11) list_highlight_pane_cp31

0xee55,	// (0x00011565) level_1_signal_lsc

0xee5e,	// (0x0001156e) level_2_signal_lsc

0xee67,	// (0x00011577) level_3_signal_lsc

0xee70,	// (0x00011580) level_4_signal_lsc

0xee79,	// (0x00011589) level_5_signal_lsc

0xee82,	// (0x00011592) level_6_signal_lsc

0xee8b,	// (0x0001159b) level_7_signal_lsc

0xee8b,	// (0x0001159b) level_1_battery_lsc

0xee94,	// (0x000115a4) level_2_battery_lsc

0xee9d,	// (0x000115ad) level_3_battery_lsc

0xeea6,	// (0x000115b6) level_4_battery_lsc

0xeeaf,	// (0x000115bf) level_5_battery_lsc

0xeeb8,	// (0x000115c8) level_6_battery_lsc

0xee55,	// (0x00011565) level_7_battery_lsc

0xeec1,	// (0x000115d1) scroll_handle_focus_pane_g1

0xeeca,	// (0x000115da) scroll_handle_focus_pane_g2

0xeed3,	// (0x000115e3) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00011e80) scroll_handle_focus_pane_g

0xeedc,	// (0x000115ec) list_single_2graphic_pane_g1_ParamLimits

0xeedc,	// (0x000115ec) list_single_2graphic_pane_g1

0xe028,	// (0x00010738) list_single_2graphic_pane_g2_ParamLimits

0xe028,	// (0x00010738) list_single_2graphic_pane_g2

0xdfba,	// (0x000106ca) list_single_2graphic_pane_g3_ParamLimits

0xdfba,	// (0x000106ca) list_single_2graphic_pane_g3

0xeee8,	// (0x000115f8) list_single_2graphic_pane_g4_ParamLimits

0xeee8,	// (0x000115f8) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x00011e87) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x00011e87) list_single_2graphic_pane_g

0xeef4,	// (0x00011604) list_single_2graphic_pane_t1_ParamLimits

0xeef4,	// (0x00011604) list_single_2graphic_pane_t1

0xef22,	// (0x00011632) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xef22,	// (0x00011632) list_double2_graphic_large_graphic_pane_g1

0xe0cb,	// (0x000107db) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe0cb,	// (0x000107db) list_double2_graphic_large_graphic_pane_g2

0xe0da,	// (0x000107ea) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe0da,	// (0x000107ea) list_double2_graphic_large_graphic_pane_g3

0xef32,	// (0x00011642) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xef32,	// (0x00011642) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00011e90) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00011e90) list_double2_graphic_large_graphic_pane_g

0xef3e,	// (0x0001164e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xef3e,	// (0x0001164e) list_double2_graphic_large_graphic_pane_t1

0xef54,	// (0x00011664) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xef54,	// (0x00011664) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x00011e99) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x00011e99) list_double2_graphic_large_graphic_pane_t

0xf080,	// (0x00011790) popup_fast_swap_window_ParamLimits

0xf080,	// (0x00011790) popup_fast_swap_window

0xf09c,	// (0x000117ac) popup_side_volume_key_window

0xf0b6,	// (0x000117c6) stacon_top_pane

0xf0c0,	// (0x000117d0) status_pane_ParamLimits

0xf0c0,	// (0x000117d0) status_pane

0xf0b6,	// (0x000117c6) status_small_pane

0xd721,	// (0x0000fe31) control_pane

0xd721,	// (0x0000fe31) stacon_bottom_pane

0xdf91,	// (0x000106a1) scroll_pane_cp121

0xe43e,	// (0x00010b4e) set_content_pane

0xef66,	// (0x00011676) bg_active_tab_pane_g1_cp1

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp1

0xef78,	// (0x00011688) bg_active_tab_pane_g3_cp1

0xef66,	// (0x00011676) bg_passive_tab_pane_g1_cp1

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp1

0xef78,	// (0x00011688) bg_passive_tab_pane_g3_cp1

0xef81,	// (0x00011691) bg_active_tab_pane_g1_cp2

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp2

0xef8a,	// (0x0001169a) bg_active_tab_pane_g3_cp2

0xef81,	// (0x00011691) bg_passive_tab_pane_g1_cp2

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp2

0xef8a,	// (0x0001169a) bg_passive_tab_pane_g3_cp2

0xef93,	// (0x000116a3) bg_active_tab_pane_g1_cp3

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp3

0xef9c,	// (0x000116ac) bg_active_tab_pane_g3_cp3

0xef93,	// (0x000116a3) bg_passive_tab_pane_g1_cp3

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp3

0xef9c,	// (0x000116ac) bg_passive_tab_pane_g3_cp3

0xefa5,	// (0x000116b5) bg_active_tab_pane_g1_cp4

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp4

0xefae,	// (0x000116be) bg_active_tab_pane_g3_cp4

0xefa5,	// (0x000116b5) bg_passive_tab_pane_g1_cp4

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp4

0xefae,	// (0x000116be) bg_passive_tab_pane_g3_cp4

0xeff5,	// (0x00011705) bg_active_tab_pane_g1_cp5

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp5

0xeffe,	// (0x0001170e) bg_active_tab_pane_g3_cp5

0xeff5,	// (0x00011705) bg_passive_tab_pane_g1_cp5

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp5

0xeffe,	// (0x0001170e) bg_passive_tab_pane_g3_cp5

0xe6b4,	// (0x00010dc4) list_set_graphic_pane_ParamLimits

0xe6b4,	// (0x00010dc4) list_set_graphic_pane

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp4

0xf007,	// (0x00011717) list_set_graphic_pane_g1_ParamLimits

0xf007,	// (0x00011717) list_set_graphic_pane_g1

0xf013,	// (0x00011723) list_set_graphic_pane_g2_ParamLimits

0xf013,	// (0x00011723) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00011e9e) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00011e9e) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x000121f1) volume_small_pane_cp_g

0xf035,	// (0x00011745) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xf035,	// (0x00011745) list_double2_large_graphic_pane_g1_cp2

0xf041,	// (0x00011751) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf041,	// (0x00011751) list_double2_large_graphic_pane_g2_cp2

0xf050,	// (0x00011760) list_double2_large_graphic_pane_g3_cp2

0xf058,	// (0x00011768) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf058,	// (0x00011768) list_double2_large_graphic_pane_t1_cp2

0xf06e,	// (0x0001177e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf06e,	// (0x0001177e) list_double2_large_graphic_pane_t2_cp2

0x1dc4,	// (0x000044d4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x1dc4,	// (0x000044d4) list_double_large_graphic_pane_g1_cp2

0x1dd5,	// (0x000044e5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1dd5,	// (0x000044e5) list_double_large_graphic_pane_g2_cp2

0xf19b,	// (0x000118ab) list_double_large_graphic_pane_g3_cp2

0x1de4,	// (0x000044f4) list_double_large_graphic_pane_g4_cp

0x1dec,	// (0x000044fc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1dec,	// (0x000044fc) list_double_large_graphic_pane_t1_cp2

0x1e03,	// (0x00004513) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1e03,	// (0x00004513) list_double_large_graphic_pane_t2_cp2

0xf0ce,	// (0x000117de) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf0ce,	// (0x000117de) list_double2_graphic_pane_g1_cp2

0xf0da,	// (0x000117ea) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf0da,	// (0x000117ea) list_double2_graphic_pane_g2_cp2

0xf0e9,	// (0x000117f9) list_double2_graphic_pane_g3_cp2

0xf0f1,	// (0x00011801) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf0f1,	// (0x00011801) list_double2_graphic_pane_t1_cp2

0xf107,	// (0x00011817) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf107,	// (0x00011817) list_double2_graphic_pane_t2_cp2

0xf119,	// (0x00011829) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011829) list_single_number_heading_pane_g1_cp2

0xf125,	// (0x00011835) list_single_number_heading_pane_g2_cp2

0xf12d,	// (0x0001183d) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf12d,	// (0x0001183d) list_single_number_heading_pane_t1_cp2

0xf143,	// (0x00011853) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf143,	// (0x00011853) list_single_number_heading_pane_t2_cp2

0xf155,	// (0x00011865) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf155,	// (0x00011865) list_single_number_heading_pane_t3_cp2

0xf119,	// (0x00011829) list_single_heading_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011829) list_single_heading_pane_g1_cp2

0xf125,	// (0x00011835) list_single_heading_pane_g2_cp2

0xf12d,	// (0x0001183d) list_single_heading_pane_t1_cp2_ParamLimits

0xf12d,	// (0x0001183d) list_single_heading_pane_t1_cp2

0x1bce,	// (0x000042de) list_single_heading_pane_t2_cp2_ParamLimits

0x1bce,	// (0x000042de) list_single_heading_pane_t2_cp2

0x1b1e,	// (0x0000422e) list_double_graphic_pane_g1_cp2_ParamLimits

0x1b1e,	// (0x0000422e) list_double_graphic_pane_g1_cp2

0x1b2a,	// (0x0000423a) list_double_graphic_pane_g2_cp2_ParamLimits

0x1b2a,	// (0x0000423a) list_double_graphic_pane_g2_cp2

0x1b39,	// (0x00004249) list_double_graphic_pane_g3_cp2

0x1b41,	// (0x00004251) list_double_graphic_pane_t1_cp2_ParamLimits

0x1b41,	// (0x00004251) list_double_graphic_pane_t1_cp2

0x1b57,	// (0x00004267) list_double_graphic_pane_t2_cp2_ParamLimits

0x1b57,	// (0x00004267) list_double_graphic_pane_t2_cp2

0xf18f,	// (0x0001189f) list_double_number_pane_g1_cp2_ParamLimits

0xf18f,	// (0x0001189f) list_double_number_pane_g1_cp2

0xf19b,	// (0x000118ab) list_double_number_pane_g2_cp2

0x1ae4,	// (0x000041f4) list_double_number_pane_t1_cp2_ParamLimits

0x1ae4,	// (0x000041f4) list_double_number_pane_t1_cp2

0x1af6,	// (0x00004206) list_double_number_pane_t2_cp2_ParamLimits

0x1af6,	// (0x00004206) list_double_number_pane_t2_cp2

0x1b0c,	// (0x0000421c) list_double_number_pane_t3_cp2_ParamLimits

0x1b0c,	// (0x0000421c) list_double_number_pane_t3_cp2

0x19bd,	// (0x000040cd) list_single_graphic_pane_g1_cp2_ParamLimits

0x19bd,	// (0x000040cd) list_single_graphic_pane_g1_cp2

0xf119,	// (0x00011829) list_single_graphic_pane_g2_cp2_ParamLimits

0xf119,	// (0x00011829) list_single_graphic_pane_g2_cp2

0xf125,	// (0x00011835) list_single_graphic_pane_g3_cp2

0x1995,	// (0x000040a5) list_single_graphic_pane_t1_cp2_ParamLimits

0x1995,	// (0x000040a5) list_single_graphic_pane_t1_cp2

0xf119,	// (0x00011829) list_single_number_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011829) list_single_number_pane_g1_cp2

0xf125,	// (0x00011835) list_single_number_pane_g2_cp2

0x1995,	// (0x000040a5) list_single_number_pane_t1_cp2_ParamLimits

0x1995,	// (0x000040a5) list_single_number_pane_t1_cp2

0x19ab,	// (0x000040bb) list_single_number_pane_t2_cp2_ParamLimits

0x19ab,	// (0x000040bb) list_single_number_pane_t2_cp2

0xf041,	// (0x00011751) list_double2_pane_g1_cp2_ParamLimits

0xf041,	// (0x00011751) list_double2_pane_g1_cp2

0xf050,	// (0x00011760) list_double2_pane_g2_cp2

0xf167,	// (0x00011877) list_double2_pane_t1_cp2_ParamLimits

0xf167,	// (0x00011877) list_double2_pane_t1_cp2

0xf17d,	// (0x0001188d) list_double2_pane_t2_cp2_ParamLimits

0xf17d,	// (0x0001188d) list_double2_pane_t2_cp2

0xf18f,	// (0x0001189f) list_double_pane_g1_cp2_ParamLimits

0xf18f,	// (0x0001189f) list_double_pane_g1_cp2

0xf19b,	// (0x000118ab) list_double_pane_g2_cp2

0xf1a3,	// (0x000118b3) list_double_pane_t1_cp2_ParamLimits

0xf1a3,	// (0x000118b3) list_double_pane_t1_cp2

0xf1b9,	// (0x000118c9) list_double_pane_t2_cp2_ParamLimits

0xf1b9,	// (0x000118c9) list_double_pane_t2_cp2

0xf1e1,	// (0x000118f1) list_single_pane_cp2_g3

0xf119,	// (0x00011829) list_single_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011829) list_single_pane_g1_cp2

0xf125,	// (0x00011835) list_single_pane_g2_cp2

0xf1f1,	// (0x00011901) list_single_pane_t1_cp2_ParamLimits

0xf1f1,	// (0x00011901) list_single_pane_t1_cp2

0xf209,	// (0x00011919) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xf209,	// (0x00011919) list_single_large_graphic_pane_g1_cp2

0xf215,	// (0x00011925) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf215,	// (0x00011925) list_single_large_graphic_pane_g2_cp2

0xf221,	// (0x00011931) list_single_large_graphic_pane_g3_cp2

0xf229,	// (0x00011939) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf229,	// (0x00011939) list_single_large_graphic_pane_g4_cp1

0xf243,	// (0x00011953) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf243,	// (0x00011953) list_single_large_graphic_pane_t1_cp2

0x1832,	// (0x00003f42) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1832,	// (0x00003f42) list_single_graphic_heading_pane_g1_cp2

0x180d,	// (0x00003f1d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x180d,	// (0x00003f1d) list_single_graphic_heading_pane_g4_cp2

0xf125,	// (0x00011835) list_single_graphic_heading_pane_g5_cp2

0xf12d,	// (0x0001183d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xf12d,	// (0x0001183d) list_single_graphic_heading_pane_t1_cp2

0x183e,	// (0x00003f4e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x183e,	// (0x00003f4e) list_single_graphic_heading_pane_t2_cp2

0x1801,	// (0x00003f11) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1801,	// (0x00003f11) list_single_2graphic_pane_g1_cp2

0x180d,	// (0x00003f1d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x180d,	// (0x00003f1d) list_single_2graphic_pane_g2_cp2

0xf125,	// (0x00011835) list_single_2graphic_pane_g3_cp2

0x0b5d,	// (0x0000326d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x0b5d,	// (0x0000326d) list_single_2graphic_pane_g4_cp2

0x181c,	// (0x00003f2c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x181c,	// (0x00003f2c) list_single_2graphic_pane_t1_cp2

0xd63a,	// (0x0000fd4a) list_highlight_pane_g10_cp1

0x13fb,	// (0x00003b0b) list_highlight_pane_g1_cp1

0x1403,	// (0x00003b13) list_highlight_pane_g2_cp1

0x140b,	// (0x00003b1b) list_highlight_pane_g3_cp1

0x1413,	// (0x00003b23) list_highlight_pane_g4_cp1

0x141b,	// (0x00003b2b) list_highlight_pane_g5_cp1

0x1423,	// (0x00003b33) list_highlight_pane_g6_cp1

0x142b,	// (0x00003b3b) list_highlight_pane_g7_cp1

0x1433,	// (0x00003b43) list_highlight_pane_g8_cp1

0x143b,	// (0x00003b4b) list_highlight_pane_g9_cp1

0x1329,	// (0x00003a39) form_field_slider_pane_t3

0x1337,	// (0x00003a47) form_field_slider_pane_t4

0x1345,	// (0x00003a55) slider_form_pane_ParamLimits

0x1345,	// (0x00003a55) slider_form_pane

0xd721,	// (0x0000fe31) control_abbreviations

0xd721,	// (0x0000fe31) control_conventions

0xd721,	// (0x0000fe31) control_definitions

0xd721,	// (0x0000fe31) format_table_attribute

0x1c18,	// (0x00004328) bg_popup_preview_window_pane_g9

0xd721,	// (0x0000fe31) format_table_data2

0xd721,	// (0x0000fe31) format_table_data3

0xd721,	// (0x0000fe31) format_table_data_example

0x0008,

0xd721,	// (0x0000fe31) intro_purpose

0xf917,	// (0x00012027) bg_popup_preview_window_pane_g

0xd721,	// (0x0000fe31) texts_category

0xd721,	// (0x0000fe31) texts_graphics

0xf259,	// (0x00011969) text_digital

0xf268,	// (0x00011978) text_primary

0xf277,	// (0x00011987) text_primary_small

0xf286,	// (0x00011996) text_secondary

0xf295,	// (0x000119a5) text_title

0x244a,	// (0x00004b5a) bg_passive_tab_pane_g1_cp3_srt

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp3_srt

0x2441,	// (0x00004b51) bg_passive_tab_pane_g3_cp3_srt

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp3_srt_ParamLimits

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp3_srt

0x2453,	// (0x00004b63) tabs_4_active_pane_srt_g1

0xd831,	// (0x0000ff41) tabs_4_active_pane_srt_t1_ParamLimits

0xd831,	// (0x0000ff41) tabs_4_active_pane_srt_t1

0x244a,	// (0x00004b5a) bg_active_tab_pane_g1_cp3_copy1

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp3_copy1

0x2441,	// (0x00004b51) bg_active_tab_pane_g3_cp3_copy1

0xd801,	// (0x0000ff11) tabs_2_long_active_pane_srt_ParamLimits

0xd801,	// (0x0000ff11) tabs_2_long_active_pane_srt

0xd801,	// (0x0000ff11) tabs_2_long_passive_pane_srt_ParamLimits

0xd801,	// (0x0000ff11) tabs_2_long_passive_pane_srt

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp4_srt_ParamLimits

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp4_srt

0x20ac,	// (0x000047bc) bg_passive_tab_pane_g1_cp4_srt

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp4_srt

0x20a3,	// (0x000047b3) bg_passive_tab_pane_g3_cp4_srt

0xe831,	// (0x00010f41) bg_active_tab_pane_cp4_srt_ParamLimits

0xe831,	// (0x00010f41) bg_active_tab_pane_cp4_srt

0xe83f,	// (0x00010f4f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xe83f,	// (0x00010f4f) tabs_2_long_active_pane_srt_t1

0x20ac,	// (0x000047bc) bg_active_tab_pane_g1_cp4_srt

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp4_srt

0x20a3,	// (0x000047b3) bg_active_tab_pane_g3_cp4_srt

0xdac6,	// (0x000101d6) tabs_3_long_active_pane_srt_ParamLimits

0xdac6,	// (0x000101d6) tabs_3_long_active_pane_srt

0xdac6,	// (0x000101d6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdac6,	// (0x000101d6) tabs_3_long_passive_pane_cp_srt

0xdac6,	// (0x000101d6) tabs_3_long_passive_pane_srt_ParamLimits

0xdac6,	// (0x000101d6) tabs_3_long_passive_pane_srt

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp5_srt_ParamLimits

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp5_srt

0xeff5,	// (0x00011705) bg_passive_tab_pane_g1_cp5_srt

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp5_srt

0xeffe,	// (0x0001170e) bg_passive_tab_pane_g3_cp5_srt

0xe831,	// (0x00010f41) bg_active_tab_pane_cp5_srt_ParamLimits

0xe831,	// (0x00010f41) bg_active_tab_pane_cp5_srt

0xe85e,	// (0x00010f6e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xe85e,	// (0x00010f6e) tabs_3_long_active_pane_srt_t1

0xeff5,	// (0x00011705) bg_active_tab_pane_g1_cp5_srt

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp5_srt

0xeffe,	// (0x0001170e) bg_active_tab_pane_g3_cp5_srt

0x2095,	// (0x000047a5) navi_text_pane_srt_t1

0x208d,	// (0x0000479d) navi_icon_pane_srt_g1

0xf45a,	// (0x00011b6a) midp_editing_number_pane_srt

0xf2a4,	// (0x000119b4) midp_ticker_pane_srt

0xf462,	// (0x00011b72) midp_ticker_pane_srt_g1

0xf46a,	// (0x00011b7a) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00011ebd) midp_ticker_pane_srt_g

0xf472,	// (0x00011b82) midp_ticker_pane_srt_t1

0x207e,	// (0x0000478e) midp_editing_number_pane_t1_copy1

0xf2ac,	// (0x000119bc) listscroll_midp_pane

0xf2ac,	// (0x000119bc) midp_form_pane

0xf314,	// (0x00011a24) midp_info_popup_window_ParamLimits

0xf314,	// (0x00011a24) midp_info_popup_window

0xe72f,	// (0x00010e3f) bg_popup_sub_pane_cp50_ParamLimits

0xe72f,	// (0x00010e3f) bg_popup_sub_pane_cp50

0x1083,	// (0x00003793) listscroll_midp_info_pane_ParamLimits

0x1083,	// (0x00003793) listscroll_midp_info_pane

0x106b,	// (0x0000377b) listscroll_form_midp_pane_ParamLimits

0x106b,	// (0x0000377b) listscroll_form_midp_pane

0x1077,	// (0x00003787) scroll_bar_cp050

0x104b,	// (0x0000375b) list_midp_pane

0x303d,	// (0x0000574d) signal_pane_g2_cp

0x0f85,	// (0x00003695) listscroll_midp_info_pane_t1_ParamLimits

0x0f85,	// (0x00003695) listscroll_midp_info_pane_t1

0x0f9d,	// (0x000036ad) listscroll_midp_info_pane_t2_ParamLimits

0x0f9d,	// (0x000036ad) listscroll_midp_info_pane_t2

0x0fdb,	// (0x000036eb) listscroll_midp_info_pane_t3_ParamLimits

0x0fdb,	// (0x000036eb) listscroll_midp_info_pane_t3

0x1015,	// (0x00003725) listscroll_midp_info_pane_t4_ParamLimits

0x1015,	// (0x00003725) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x00011f62) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x00011f62) listscroll_midp_info_pane_t

0xe7de,	// (0x00010eee) scroll_pane_cp21

0x0f29,	// (0x00003639) form_midp_field_choice_group_pane

0x0f32,	// (0x00003642) form_midp_field_text_pane

0x0f6b,	// (0x0000367b) form_midp_field_time_pane

0x0f73,	// (0x00003683) form_midp_gauge_slider_pane

0x0f7c,	// (0x0000368c) form_midp_gauge_wait_pane

0xd721,	// (0x0000fe31) form_midp_image_pane

0x0f11,	// (0x00003621) list_single_midp_pane_ParamLimits

0x0f11,	// (0x00003621) list_single_midp_pane

0x0edd,	// (0x000035ed) form_midp_field_text_pane_t1

0x0c7c,	// (0x0000338c) input_focus_pane_cp050

0x0f00,	// (0x00003610) list_midp_form_text_pane

0x0eac,	// (0x000035bc) form_midp_field_choice_group_pane_t1

0x0eba,	// (0x000035ca) input_focus_pane_cp051

0x0ece,	// (0x000035de) list_midp_choice_pane

0xd721,	// (0x0000fe31) status_idle_pane

0x0e90,	// (0x000035a0) form_midp_field_time_pane_t1

0xd63a,	// (0x0000fd4a) wait_anim_pane_g2_copy1

0x0e9e,	// (0x000035ae) form_midp_field_time_pane_t2

0x0001,

0xf3bc,	// (0x00011acc) aid_navinavi_width_2_pane

0xf84d,	// (0x00011f5d) form_midp_field_time_pane_t

0xd721,	// (0x0000fe31) input_focus_pane_cp052

0xd721,	// (0x0000fe31) bg_input_focus_pane_cp040

0x0e50,	// (0x00003560) form_midp_gauge_slider_pane_t1

0x0e5e,	// (0x0000356e) form_midp_gauge_slider_pane_t2

0x0e6c,	// (0x0000357c) form_midp_gauge_slider_pane_t3

0x0e7a,	// (0x0000358a) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x00011f54) form_midp_gauge_slider_pane_t

0x0e88,	// (0x00003598) form_midp_slider_pane

0xd801,	// (0x0000ff11) bg_input_focus_pane_cp041_ParamLimits

0xd801,	// (0x0000ff11) bg_input_focus_pane_cp041

0x0e20,	// (0x00003530) form_midp_gauge_wait_pane_t1_ParamLimits

0x0e20,	// (0x00003530) form_midp_gauge_wait_pane_t1

0x0e32,	// (0x00003542) form_midp_gauge_wait_pane_t2_ParamLimits

0x0e32,	// (0x00003542) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x00011f4f) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x00011f4f) form_midp_gauge_wait_pane_t

0x0e44,	// (0x00003554) form_midp_wait_pane_ParamLimits

0x0e44,	// (0x00003554) form_midp_wait_pane

0x0dea,	// (0x000034fa) form_midp_image_pane_g1

0x0df3,	// (0x00003503) form_midp_image_pane_t1

0x0e02,	// (0x00003512) form_midp_image_pane_t2

0x0e11,	// (0x00003521) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x00011f48) form_midp_image_pane_t

0x0dd2,	// (0x000034e2) list_single_midp_pane_g1

0x0ddb,	// (0x000034eb) list_single_midp_pane_t1

0x0dbc,	// (0x000034cc) list_midp_form_item_pane_ParamLimits

0x0dbc,	// (0x000034cc) list_midp_form_item_pane

0xf364,	// (0x00011a74) list_midp_form_item_pane_t1

0xf373,	// (0x00011a83) midp_ticker_pane_g1

0xf37f,	// (0x00011a8f) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00011ea3) midp_ticker_pane_g

0xf38b,	// (0x00011a9b) midp_ticker_pane_t1

0x207e,	// (0x0000478e) midp_editing_number_pane_t1

0x2307,	// (0x00004a17) midp_editing_number_pane

0x2313,	// (0x00004a23) midp_ticker_pane

0x205c,	// (0x0000476c) ai_message_heading_pane

0xd721,	// (0x0000fe31) bg_popup_window_pane_cp14

0x2064,	// (0x00004774) listscroll_ai_message_pane

0x1fe6,	// (0x000046f6) ai_message_heading_pane_g1_ParamLimits

0x1fe6,	// (0x000046f6) ai_message_heading_pane_g1

0x1ff2,	// (0x00004702) ai_message_heading_pane_g2_ParamLimits

0x1ff2,	// (0x00004702) ai_message_heading_pane_g2

0x1ffe,	// (0x0000470e) ai_message_heading_pane_g3_ParamLimits

0x1ffe,	// (0x0000470e) ai_message_heading_pane_g3

0x200a,	// (0x0000471a) ai_message_heading_pane_g4_ParamLimits

0x200a,	// (0x0000471a) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x00012089) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x00012089) ai_message_heading_pane_g

0x2016,	// (0x00004726) ai_message_heading_pane_t1_ParamLimits

0x2016,	// (0x00004726) ai_message_heading_pane_t1

0x2030,	// (0x00004740) ai_message_heading_pane_t2_ParamLimits

0x2030,	// (0x00004740) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x00012092) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x00012092) ai_message_heading_pane_t

0x2042,	// (0x00004752) bg_popup_heading_pane_cp1_ParamLimits

0x2042,	// (0x00004752) bg_popup_heading_pane_cp1

0x1fd4,	// (0x000046e4) list_ai_message_pane_ParamLimits

0x1fd4,	// (0x000046e4) list_ai_message_pane

0xe7de,	// (0x00010eee) scroll_pane_cp10

0x1f20,	// (0x00004630) list_ai_message_pane_g1

0x1f28,	// (0x00004638) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x00012066) list_ai_message_pane_g

0x1f30,	// (0x00004640) list_ai_message_pane_t1_ParamLimits

0x1f30,	// (0x00004640) list_ai_message_pane_t1

0x1f45,	// (0x00004655) list_ai_message_pane_t2_ParamLimits

0x1f45,	// (0x00004655) list_ai_message_pane_t2

0x1f5a,	// (0x0000466a) list_ai_message_pane_t3_ParamLimits

0x1f5a,	// (0x0000466a) list_ai_message_pane_t3

0x1f6f,	// (0x0000467f) list_ai_message_pane_t4_ParamLimits

0x1f6f,	// (0x0000467f) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x0001206b) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x0001206b) list_ai_message_pane_t

0x1f0e,	// (0x0000461e) cell_ai_soft_ind_pane_ParamLimits

0x1f0e,	// (0x0000461e) cell_ai_soft_ind_pane

0xf39d,	// (0x00011aad) cell_ai_soft_ind_pane_g1_ParamLimits

0xf39d,	// (0x00011aad) cell_ai_soft_ind_pane_g1

0xd721,	// (0x0000fe31) grid_highlight_cp1

0xf3aa,	// (0x00011aba) text_secondary_cp56_ParamLimits

0xf3aa,	// (0x00011aba) text_secondary_cp56

0x1ee3,	// (0x000045f3) example_general_pane_ParamLimits

0x1ee3,	// (0x000045f3) example_general_pane

0x1eef,	// (0x000045ff) example_parent_pane_g1_ParamLimits

0x1eef,	// (0x000045ff) example_parent_pane_g1

0x1efb,	// (0x0000460b) example_parent_pane_t1_ParamLimits

0x1efb,	// (0x0000460b) example_parent_pane_t1

0x03f2,	// (0x00002b02) popup_preview_text_window_ParamLimits

0x03f2,	// (0x00002b02) popup_preview_text_window

0xf1e9,	// (0x000118f9) list_single_pane_cp2_g4

0xdb7c,	// (0x0001028c) bg_popup_preview_window_pane_ParamLimits

0xdb7c,	// (0x0001028c) bg_popup_preview_window_pane

0x1c20,	// (0x00004330) popup_preview_text_window_t1_ParamLimits

0x1c20,	// (0x00004330) popup_preview_text_window_t1

0x1c3e,	// (0x0000434e) popup_preview_text_window_t2_ParamLimits

0x1c3e,	// (0x0000434e) popup_preview_text_window_t2

0x1c87,	// (0x00004397) popup_preview_text_window_t3_ParamLimits

0x1c87,	// (0x00004397) popup_preview_text_window_t3

0x1ccc,	// (0x000043dc) popup_preview_text_window_t4_ParamLimits

0x1ccc,	// (0x000043dc) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x0001203a) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x0001203a) popup_preview_text_window_t

0x1d4a,	// (0x0000445a) scroll_pane_cp11

0x0af2,	// (0x00003202) bg_popup_preview_window_pane_g1

0x1be0,	// (0x000042f0) bg_popup_preview_window_pane_g2

0x1be8,	// (0x000042f8) bg_popup_preview_window_pane_g3

0x1bf0,	// (0x00004300) bg_popup_preview_window_pane_g4

0x1bf8,	// (0x00004308) bg_popup_preview_window_pane_g5

0x1c00,	// (0x00004310) bg_popup_preview_window_pane_g6

0x1c08,	// (0x00004318) bg_popup_preview_window_pane_g7

0x1c10,	// (0x00004320) bg_popup_preview_window_pane_g8

0xbc9b,	// (0x0000e3ab) aid_popup_width_pane

0x03d4,	// (0x00002ae4) popup_midp_note_alarm_window_ParamLimits

0x03d4,	// (0x00002ae4) popup_midp_note_alarm_window

0xe4eb,	// (0x00010bfb) data_form_pane_ParamLimits

0xe4f7,	// (0x00010c07) form_field_data_pane_g1

0xe4ff,	// (0x00010c0f) form_field_data_pane_t1_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_ParamLimits

0xe525,	// (0x00010c35) data_form_wide_pane_ParamLimits

0xe531,	// (0x00010c41) form_field_data_wide_pane_g1

0xe551,	// (0x00010c61) form_field_data_wide_pane_t1_ParamLimits

0xde08,	// (0x00010518) input_focus_pane_cp6_ParamLimits

0xe78b,	// (0x00010e9b) input_popup_find_pane_g1_ParamLimits

0xe78b,	// (0x00010e9b) input_popup_find_pane_g1

0xc064,	// (0x0000e774) aid_navi_side_left_pane

0xc074,	// (0x0000e784) aid_navi_side_right_pane

0x14e4,	// (0x00003bf4) bg_popup_window_pane_cp30_ParamLimits

0x14e4,	// (0x00003bf4) bg_popup_window_pane_cp30

0x155e,	// (0x00003c6e) popup_midp_note_alarm_window_g1_ParamLimits

0x155e,	// (0x00003c6e) popup_midp_note_alarm_window_g1

0x158e,	// (0x00003c9e) popup_midp_note_alarm_window_t1_ParamLimits

0x158e,	// (0x00003c9e) popup_midp_note_alarm_window_t1

0x162f,	// (0x00003d3f) popup_midp_note_alarm_window_t2_ParamLimits

0x162f,	// (0x00003d3f) popup_midp_note_alarm_window_t2

0x16dd,	// (0x00003ded) popup_midp_note_alarm_window_t3_ParamLimits

0x16dd,	// (0x00003ded) popup_midp_note_alarm_window_t3

0x1705,	// (0x00003e15) popup_midp_note_alarm_window_t4_ParamLimits

0x1705,	// (0x00003e15) popup_midp_note_alarm_window_t4

0x1725,	// (0x00003e35) popup_midp_note_alarm_window_t5_ParamLimits

0x1725,	// (0x00003e35) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x00011fd7) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x00011fd7) popup_midp_note_alarm_window_t

0x17d1,	// (0x00003ee1) wait_bar_pane_cp1_ParamLimits

0x17d1,	// (0x00003ee1) wait_bar_pane_cp1

0xd721,	// (0x0000fe31) wait_anim_pane_copy1

0xd721,	// (0x0000fe31) wait_border_pane_copy1

0x11f6,	// (0x00003906) wait_border_pane_g1_copy1

0xe56b,	// (0x00010c7b) form_field_popup_pane_g1

0xe573,	// (0x00010c83) form_field_popup_pane_t1_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_cp7_ParamLimits

0xe4eb,	// (0x00010bfb) list_form_pane_ParamLimits

0xe58b,	// (0x00010c9b) form_field_popup_wide_pane_g1

0xe593,	// (0x00010ca3) form_field_popup_wide_pane_t1_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_cp8_ParamLimits

0xe5a8,	// (0x00010cb8) list_form_wide_pane_ParamLimits

0x24c1,	// (0x00004bd1) aid_size_cell_graphic_pane

0xe685,	// (0x00010d95) data_form_pane_t1_ParamLimits

0x22d7,	// (0x000049e7) data_form_wide_pane_t1_ParamLimits

0x0676,	// (0x00002d86) bg_status_flat_pane

0xd761,	// (0x0000fe71) title_pane_t1_ParamLimits

0xd7c9,	// (0x0000fed9) title_pane_t2_ParamLimits

0xd7ef,	// (0x0000feff) title_pane_t3_ParamLimits

0xf59b,	// (0x00011cab) title_pane_t_ParamLimits

0xec67,	// (0x00011377) level_1_signal_ParamLimits

0xec74,	// (0x00011384) level_2_signal_ParamLimits

0xec81,	// (0x00011391) level_3_signal_ParamLimits

0xec8e,	// (0x0001139e) level_4_signal_ParamLimits

0xec9b,	// (0x000113ab) level_5_signal_ParamLimits

0xeca8,	// (0x000113b8) level_6_signal_ParamLimits

0xecb5,	// (0x000113c5) level_7_signal_ParamLimits

0xec67,	// (0x00011377) level_1_battery_ParamLimits

0xec74,	// (0x00011384) level_2_battery_ParamLimits

0xec81,	// (0x00011391) level_3_battery_ParamLimits

0xec8e,	// (0x0001139e) level_4_battery_ParamLimits

0xec9b,	// (0x000113ab) level_5_battery_ParamLimits

0xeca8,	// (0x000113b8) level_6_battery_ParamLimits

0xecb5,	// (0x000113c5) level_7_battery_ParamLimits

0x13fb,	// (0x00003b0b) bg_status_flat_pane_g1

0x1403,	// (0x00003b13) bg_status_flat_pane_g2

0x140b,	// (0x00003b1b) bg_status_flat_pane_g3

0x1413,	// (0x00003b23) bg_status_flat_pane_g4

0x141b,	// (0x00003b2b) bg_status_flat_pane_g5

0x1423,	// (0x00003b33) bg_status_flat_pane_g6

0x142b,	// (0x00003b3b) bg_status_flat_pane_g7

0xd817,	// (0x0000ff27) tabs_3_active_pane_t1_ParamLimits

0xd817,	// (0x0000ff27) tabs_3_passive_pane_t1_ParamLimits

0xd831,	// (0x0000ff41) tabs_4_active_pane_t1_ParamLimits

0xd831,	// (0x0000ff41) tabs_4_1_passive_pane_t1_ParamLimits

0xe81f,	// (0x00010f2f) tabs_2_active_pane_t1_ParamLimits

0xe81f,	// (0x00010f2f) tabs_2_passive_pane_t1_ParamLimits

0xe831,	// (0x00010f41) bg_active_tab_pane_cp4_ParamLimits

0xe83f,	// (0x00010f4f) tabs_2_long_active_pane_t1_ParamLimits

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp4_ParamLimits

0xc5e4,	// (0x0000ecf4) list_single_midp_graphic_pane_t1_ParamLimits

0xe831,	// (0x00010f41) bg_active_tab_pane_cp5_ParamLimits

0xe85e,	// (0x00010f6e) tabs_3_long_active_pane_t1_ParamLimits

0xe852,	// (0x00010f62) bg_passive_tab_pane_cp5_ParamLimits

0xc5e4,	// (0x0000ecf4) list_single_midp_graphic_pane_t1

0x0676,	// (0x00002d86) bg_status_flat_pane_ParamLimits

0x072f,	// (0x00002e3f) indicator_pane_cp2_ParamLimits

0x072f,	// (0x00002e3f) indicator_pane_cp2

0x0853,	// (0x00002f63) navi_pane_srt_ParamLimits

0x0853,	// (0x00002f63) navi_pane_srt

0x0877,	// (0x00002f87) popup_clock_digital_analogue_window_cp1

0xd8f5,	// (0x00010005) indicator_pane_t1

0xf2a4,	// (0x000119b4) copy_highlight_pane

0xf2a4,	// (0x000119b4) cursor_graphics_pane

0xf2a4,	// (0x000119b4) graphic_within_text_pane

0xf2a4,	// (0x000119b4) link_highlight_pane

0x1d0d,	// (0x0000441d) popup_preview_text_window_t5_ParamLimits

0x1d0d,	// (0x0000441d) popup_preview_text_window_t5

0xf3c4,	// (0x00011ad4) cursor_digital_pane

0xf3c4,	// (0x00011ad4) cursor_primary_pane

0xf3d5,	// (0x00011ae5) cursor_primary_small_pane

0xf3dd,	// (0x00011aed) cursor_secondary_pane

0xf3e5,	// (0x00011af5) cursor_title_pane

0xf3c4,	// (0x00011ad4) link_highlight_digital_pane

0xf3cc,	// (0x00011adc) link_highlight_primary_pane

0xf3d5,	// (0x00011ae5) link_highlight_primary_small_pane

0xf3dd,	// (0x00011aed) link_highlight_secondary_pane

0xf3e5,	// (0x00011af5) link_highlight_title_pane

0xf3c4,	// (0x00011ad4) copy_highlight_digital_pane

0xf3c4,	// (0x00011ad4) copy_highlight_primary_pane

0xf3d5,	// (0x00011ae5) copy_highlight_primary_small_pane

0xf3dd,	// (0x00011aed) copy_highlight_secondary_pane

0xf3e5,	// (0x00011af5) copy_highlight_title_pane

0xf3dd,	// (0x00011aed) graphic_text_digital_pane

0x1493,	// (0x00003ba3) graphic_text_primary_pane

0x149c,	// (0x00003bac) graphic_text_primary_small_pane

0xf3d5,	// (0x00011ae5) graphic_text_secondary_pane

0xf3c4,	// (0x00011ad4) graphic_text_title_pane

0xf3ed,	// (0x00011afd) cursor_primary_pane_g1

0x1485,	// (0x00003b95) cursor_text_primary_t1

0x146f,	// (0x00003b7f) cursor_primary_small_pane_g1

0x1477,	// (0x00003b87) cursor_text_primary_small_t1

0x1459,	// (0x00003b69) cursor_primary_small_pane_g1_copy1

0x1461,	// (0x00003b71) cursor_text_primary_small_t1_copy1

0x1443,	// (0x00003b53) cursor_text_title_t1

0x1451,	// (0x00003b61) cursor_title_pane_g1

0xf3ed,	// (0x00011afd) cursor_digital_pane_g1

0xf3f5,	// (0x00011b05) cursor_text_digital_t1

0xf403,	// (0x00011b13) link_highlight_primary_pane_g1

0x13ec,	// (0x00003afc) link_highlight_primary_pane_t1

0xf403,	// (0x00011b13) link_highlight_primary_small_pane_g1

0xf40b,	// (0x00011b1b) link_highlight_primary_small_pane_t1

0xf41a,	// (0x00011b2a) link_highlight_secondary_pane_g1

0xf422,	// (0x00011b32) link_highlight_secondary_pane_t1

0x1351,	// (0x00003a61) link_highlight_title_pane_g1

0x1368,	// (0x00003a78) link_highlight_title_pane_t1

0x1351,	// (0x00003a61) link_highlight_digital_pane_g1

0x1359,	// (0x00003a69) link_highlight_digital_pane_t1

0x1211,	// (0x00003921) copy_highlight_primary_pane_g1

0x1237,	// (0x00003947) copy_highlight_primary_pane_t1

0x1211,	// (0x00003921) copy_highlight_primary_small_pane_g1

0x1228,	// (0x00003938) copy_highlight_primary_small_pane_t1

0xf431,	// (0x00011b41) copy_highlight_secondary_pane_g1

0xf439,	// (0x00011b49) copy_highlight_secondary_pane_t1

0x1211,	// (0x00003921) copy_highlight_title_pane_g1

0x1219,	// (0x00003929) copy_highlight_title_pane_t1

0x1211,	// (0x00003921) copy_highlight_digital_pane_g1

0x26e5,	// (0x00004df5) copy_highlight_digital_pane_t1

0x2639,	// (0x00004d49) graphic_text_primary_pane_g1

0x26c9,	// (0x00004dd9) graphic_text_primary_pane_t1

0x26d7,	// (0x00004de7) graphic_text_primary_pane_t2

0x0001,

0xf9f1,	// (0x00012101) graphic_text_primary_pane_t

0x26a5,	// (0x00004db5) graphic_text_primary_small_pane_g1

0x26ad,	// (0x00004dbd) graphic_text_primary_small_pane_t1

0x26bb,	// (0x00004dcb) graphic_text_primary_small_pane_t2

0x0001,

0xf9ec,	// (0x000120fc) graphic_text_primary_small_pane_t

0x2681,	// (0x00004d91) graphic_text_secondary_pane_g1

0x2689,	// (0x00004d99) graphic_text_secondary_pane_t1

0x2697,	// (0x00004da7) graphic_text_secondary_pane_t2

0x0001,

0xf9e7,	// (0x000120f7) graphic_text_secondary_pane_t

0x265d,	// (0x00004d6d) graphic_text_title_pane_g1

0x2665,	// (0x00004d75) graphic_text_title_pane_t1

0x2673,	// (0x00004d83) graphic_text_title_pane_t2

0x0001,

0xf9e2,	// (0x000120f2) graphic_text_title_pane_t

0x2639,	// (0x00004d49) graphic_text_digital_pane_g1

0x2641,	// (0x00004d51) graphic_text_digital_pane_t1

0x264f,	// (0x00004d5f) graphic_text_digital_pane_t2

0x0001,

0xf9dd,	// (0x000120ed) graphic_text_digital_pane_t

0xd801,	// (0x0000ff11) navi_icon_pane_srt_ParamLimits

0xd801,	// (0x0000ff11) navi_icon_pane_srt

0xd721,	// (0x0000fe31) navi_midp_pane_srt

0xd721,	// (0x0000fe31) navi_navi_pane_srt

0xd801,	// (0x0000ff11) navi_text_pane_srt_ParamLimits

0xd801,	// (0x0000ff11) navi_text_pane_srt

0x1b99,	// (0x000042a9) navi_navi_icon_text_pane_srt

0x1bb3,	// (0x000042c3) navi_navi_pane_srt_g1_ParamLimits

0x1bb3,	// (0x000042c3) navi_navi_pane_srt_g1

0x1ba1,	// (0x000042b1) navi_navi_pane_srt_g2_ParamLimits

0x1ba1,	// (0x000042b1) navi_navi_pane_srt_g2

0x0001,

0xf912,	// (0x00012022) navi_navi_pane_srt_g_ParamLimits

0xf912,	// (0x00012022) navi_navi_pane_srt_g

0x1bc5,	// (0x000042d5) navi_navi_tabs_pane_srt

0x1b99,	// (0x000042a9) navi_navi_text_pane_srt

0x1b99,	// (0x000042a9) navi_navi_volume_pane_srt

0x262a,	// (0x00004d3a) navi_navi_text_pane_srt_t1

0xc948,	// (0x0000f058) navi_navi_volume_pane_srt_g1

0xc950,	// (0x0000f060) volume_small_pane_srt_ParamLimits

0xc950,	// (0x0000f060) volume_small_pane_srt

0xc30b,	// (0x0000ea1b) volume_small_pane_srt_g1_ParamLimits

0xc30b,	// (0x0000ea1b) volume_small_pane_srt_g1

0xc31b,	// (0x0000ea2b) volume_small_pane_srt_g2_ParamLimits

0xc31b,	// (0x0000ea2b) volume_small_pane_srt_g2

0xc32c,	// (0x0000ea3c) volume_small_pane_srt_g3_ParamLimits

0xc32c,	// (0x0000ea3c) volume_small_pane_srt_g3

0xc33d,	// (0x0000ea4d) volume_small_pane_srt_g4_ParamLimits

0xc33d,	// (0x0000ea4d) volume_small_pane_srt_g4

0xc34e,	// (0x0000ea5e) volume_small_pane_srt_g5_ParamLimits

0xc34e,	// (0x0000ea5e) volume_small_pane_srt_g5

0xc35f,	// (0x0000ea6f) volume_small_pane_srt_g6_ParamLimits

0xc35f,	// (0x0000ea6f) volume_small_pane_srt_g6

0xc370,	// (0x0000ea80) volume_small_pane_srt_g7_ParamLimits

0xc370,	// (0x0000ea80) volume_small_pane_srt_g7

0xc381,	// (0x0000ea91) volume_small_pane_srt_g8_ParamLimits

0xc381,	// (0x0000ea91) volume_small_pane_srt_g8

0xc392,	// (0x0000eaa2) volume_small_pane_srt_g9_ParamLimits

0xc392,	// (0x0000eaa2) volume_small_pane_srt_g9

0xc3a3,	// (0x0000eab3) volume_small_pane_srt_g10_ParamLimits

0xc3a3,	// (0x0000eab3) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x00011ea8) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x00011ea8) volume_small_pane_srt_g

0xdc25,	// (0x00010335) query_popup_data_pane_cp2

0x25f3,	// (0x00004d03) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x25f3,	// (0x00004d03) navi_navi_icon_text_pane_srt_t1

0x1493,	// (0x00003ba3) navi_tabs_2_long_pane_srt

0x1493,	// (0x00003ba3) navi_tabs_2_pane_srt

0x1493,	// (0x00003ba3) navi_tabs_3_long_pane_srt

0x1493,	// (0x00003ba3) navi_tabs_3_pane_srt

0x1493,	// (0x00003ba3) navi_tabs_4_pane_srt

0xc928,	// (0x0000f038) tabs_2_active_pane_srt_ParamLimits

0xc928,	// (0x0000f038) tabs_2_active_pane_srt

0xc938,	// (0x0000f048) tabs_2_passive_pane_srt_ParamLimits

0xc938,	// (0x0000f048) tabs_2_passive_pane_srt

0x0124,	// (0x00002834) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0124,	// (0x00002834) bg_passive_tab_pane_cp1_srt

0x25ba,	// (0x00004cca) bg_passive_tab_pane_g1_cp1_srt

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp1_srt

0x25b1,	// (0x00004cc1) bg_passive_tab_pane_g3_cp1_srt

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp1_srt_ParamLimits

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp1_srt

0x25c3,	// (0x00004cd3) tabs_2_active_pane_srt_g1

0xe81f,	// (0x00010f2f) tabs_2_active_pane_srt_t1_ParamLimits

0xe81f,	// (0x00010f2f) tabs_2_active_pane_srt_t1

0x25ba,	// (0x00004cca) bg_active_tab_pane_g1_cp1_srt

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp1_srt

0x25b1,	// (0x00004cc1) bg_active_tab_pane_g3_cp1_srt

0xc8f5,	// (0x0000f005) tabs_3_active_pane_srt_ParamLimits

0xc8f5,	// (0x0000f005) tabs_3_active_pane_srt

0xc906,	// (0x0000f016) tabs_3_passive_pane_cp_srt_ParamLimits

0xc906,	// (0x0000f016) tabs_3_passive_pane_cp_srt

0xc917,	// (0x0000f027) tabs_3_passive_pane_srt_ParamLimits

0xc917,	// (0x0000f027) tabs_3_passive_pane_srt

0x0124,	// (0x00002834) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0124,	// (0x00002834) bg_passive_tab_pane_cp2_srt

0xf448,	// (0x00011b58) bg_passive_tab_pane_g1_cp2_srt

0xef6f,	// (0x0001167f) bg_passive_tab_pane_g2_cp2_srt

0xf451,	// (0x00011b61) bg_passive_tab_pane_g3_cp2_srt

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp2_srt_ParamLimits

0xd801,	// (0x0000ff11) bg_active_tab_pane_cp2_srt

0x2576,	// (0x00004c86) tabs_3_active_pane_srt_g1

0xd817,	// (0x0000ff27) tabs_3_active_pane_srt_t1_ParamLimits

0xd817,	// (0x0000ff27) tabs_3_active_pane_srt_t1

0xf448,	// (0x00011b58) bg_active_tab_pane_g1_cp2_srt

0xef6f,	// (0x0001167f) bg_active_tab_pane_g2_cp2_srt

0xf451,	// (0x00011b61) bg_active_tab_pane_g3_cp2_srt

0xc8ad,	// (0x0000efbd) tabs_4_active_pane_srt_ParamLimits

0xc8ad,	// (0x0000efbd) tabs_4_active_pane_srt

0xc8bf,	// (0x0000efcf) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc8bf,	// (0x0000efcf) tabs_4_passive_pane_cp2_srt

0x00a9,	// (0x000027b9) aid_size_cell_toolbar

0xe852,	// (0x00010f62) main_idle_act_pane_ParamLimits

0x028f,	// (0x0000299f) popup_large_graphic_colour_window_ParamLimits

0x0543,	// (0x00002c53) popup_toolbar_window_ParamLimits

0x0543,	// (0x00002c53) popup_toolbar_window

0x2338,	// (0x00004a48) list_single_graphic_2heading_pane_ParamLimits

0x2338,	// (0x00004a48) list_single_graphic_2heading_pane

0xea29,	// (0x00011139) aid_size_cell_apps_grid_lsc_pane

0xea3b,	// (0x0001114b) aid_size_cell_apps_grid_prt_pane

0x0124,	// (0x00002834) bg_wml_button_pane_cp1_ParamLimits

0x0124,	// (0x00002834) bg_wml_button_pane_cp1

0x0edd,	// (0x000035ed) form_midp_field_text_pane_t1_ParamLimits

0x0c7c,	// (0x0000338c) input_focus_pane_cp050_ParamLimits

0x0f00,	// (0x00003610) list_midp_form_text_pane_ParamLimits

0x0eba,	// (0x000035ca) input_focus_pane_cp051_ParamLimits

0x0ece,	// (0x000035de) list_midp_choice_pane_ParamLimits

0x0d88,	// (0x00003498) list_single_2graphic_pane_cp3_ParamLimits

0x0d88,	// (0x00003498) list_single_2graphic_pane_cp3

0x0d9c,	// (0x000034ac) list_single_midp_graphic_pane_ParamLimits

0x0d9c,	// (0x000034ac) list_single_midp_graphic_pane

0xc4f6,	// (0x0000ec06) list_single_graphic_2heading_pane_g1_ParamLimits

0xc4f6,	// (0x0000ec06) list_single_graphic_2heading_pane_g1

0xc502,	// (0x0000ec12) list_single_graphic_2heading_pane_g4_ParamLimits

0xc502,	// (0x0000ec12) list_single_graphic_2heading_pane_g4

0xc50e,	// (0x0000ec1e) list_single_graphic_2heading_pane_g5_ParamLimits

0xc50e,	// (0x0000ec1e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00011efb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00011efb) list_single_graphic_2heading_pane_g

0xc51a,	// (0x0000ec2a) list_single_graphic_2heading_pane_t1_ParamLimits

0xc51a,	// (0x0000ec2a) list_single_graphic_2heading_pane_t1

0xc52e,	// (0x0000ec3e) list_single_graphic_2heading_pane_t2_ParamLimits

0xc52e,	// (0x0000ec3e) list_single_graphic_2heading_pane_t2

0xc548,	// (0x0000ec58) list_single_graphic_2heading_pane_t3_ParamLimits

0xc548,	// (0x0000ec58) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00011f02) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00011f02) list_single_graphic_2heading_pane_t

0x0a15,	// (0x00003125) bg_popup_sub_pane_cp2

0x0a3b,	// (0x0000314b) grid_toobar_pane

0xc560,	// (0x0000ec70) cell_toolbar_pane_ParamLimits

0xc560,	// (0x0000ec70) cell_toolbar_pane

0x0a98,	// (0x000031a8) cell_toolbar_pane_g1_ParamLimits

0x0a98,	// (0x000031a8) cell_toolbar_pane_g1

0x0aaa,	// (0x000031ba) cell_toolbar_pane_g2_ParamLimits

0x0aaa,	// (0x000031ba) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x00011f09) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x00011f09) cell_toolbar_pane_g

0x0acc,	// (0x000031dc) grid_highlight_pane_cp2_ParamLimits

0x0acc,	// (0x000031dc) grid_highlight_pane_cp2

0x0ae6,	// (0x000031f6) toolbar_button_pane

0x0af2,	// (0x00003202) toolbar_button_pane_g1

0x0b02,	// (0x00003212) toolbar_button_pane_g2

0x0afa,	// (0x0000320a) toolbar_button_pane_g3

0x0b12,	// (0x00003222) toolbar_button_pane_g4

0x0b0a,	// (0x0000321a) toolbar_button_pane_g5

0x0b1a,	// (0x0000322a) toolbar_button_pane_g6

0x0b22,	// (0x00003232) toolbar_button_pane_g7

0x0b32,	// (0x00003242) toolbar_button_pane_g8

0x0b2a,	// (0x0000323a) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x00011f0e) toolbar_button_pane_g

0xc58f,	// (0x0000ec9f) list_single_2graphic_pane_g1_cp3_ParamLimits

0xc58f,	// (0x0000ec9f) list_single_2graphic_pane_g1_cp3

0xc59b,	// (0x0000ecab) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc59b,	// (0x0000ecab) list_single_2graphic_pane_g2_cp3

0xc5aa,	// (0x0000ecba) list_single_2graphic_pane_g3_cp3

0xc5b2,	// (0x0000ecc2) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc5b2,	// (0x0000ecc2) list_single_2graphic_pane_g4_cp3

0xc5be,	// (0x0000ecce) list_single_2graphic_pane_t1_cp3_ParamLimits

0xc5be,	// (0x0000ecce) list_single_2graphic_pane_t1_cp3

0xc5d8,	// (0x0000ece8) list_single_midp_graphic_pane_g2_ParamLimits

0xc5d8,	// (0x0000ece8) list_single_midp_graphic_pane_g2

0x00b1,	// (0x000027c1) aid_zoom_text_primary

0x00b9,	// (0x000027c9) aid_zoom_text_secondary

0xf503,	// (0x00011c13) status_small_pane_g7_ParamLimits

0xf503,	// (0x00011c13) status_small_pane_g7

0xf526,	// (0x00011c36) status_small_pane_t1_ParamLimits

0xd738,	// (0x0000fe48) title_pane_g2

0x0003,

0xf592,	// (0x00011ca2) title_pane_g

0xdcc4,	// (0x000103d4) aid_size_cell_colour_1_pane_ParamLimits

0xdcc4,	// (0x000103d4) aid_size_cell_colour_1_pane

0xdcd8,	// (0x000103e8) aid_size_cell_colour_2_pane_ParamLimits

0xdcd8,	// (0x000103e8) aid_size_cell_colour_2_pane

0xdcec,	// (0x000103fc) aid_size_cell_colour_3_pane_ParamLimits

0xdcec,	// (0x000103fc) aid_size_cell_colour_3_pane

0xdd00,	// (0x00010410) aid_size_cell_colour_4_pane_ParamLimits

0xdd00,	// (0x00010410) aid_size_cell_colour_4_pane

0xbfc6,	// (0x0000e6d6) title_pane_stacon_g1_ParamLimits

0xbfc6,	// (0x0000e6d6) title_pane_stacon_g1

0x128e,	// (0x0000399e) popup_note_wait_window_g3_ParamLimits

0x128e,	// (0x0000399e) popup_note_wait_window_g3

0x1304,	// (0x00003a14) popup_note_wait_window_t5_ParamLimits

0x1304,	// (0x00003a14) popup_note_wait_window_t5

0xd721,	// (0x0000fe31) main_feb_china_hwr_fs_writing_pane

0x01a4,	// (0x000028b4) popup_feb_china_hwr_fs_window_ParamLimits

0x01a4,	// (0x000028b4) popup_feb_china_hwr_fs_window

0xc5fa,	// (0x0000ed0a) aid_size_cell_hwr_fs_ParamLimits

0xc5fa,	// (0x0000ed0a) aid_size_cell_hwr_fs

0x0c7c,	// (0x0000338c) bg_popup_sub_pane_cp3_ParamLimits

0x0c7c,	// (0x0000338c) bg_popup_sub_pane_cp3

0xc60f,	// (0x0000ed1f) grid_hwr_fs_pane_ParamLimits

0xc60f,	// (0x0000ed1f) grid_hwr_fs_pane

0xc623,	// (0x0000ed33) linegrid_hwr_fs_pane_ParamLimits

0xc623,	// (0x0000ed33) linegrid_hwr_fs_pane

0xc633,	// (0x0000ed43) cell_hwr_fs_pane_ParamLimits

0xc633,	// (0x0000ed43) cell_hwr_fs_pane

0x0cca,	// (0x000033da) linegrid_hwr_fs_pane_g1_ParamLimits

0x0cca,	// (0x000033da) linegrid_hwr_fs_pane_g1

0x0cd6,	// (0x000033e6) linegrid_hwr_fs_pane_g2_ParamLimits

0x0cd6,	// (0x000033e6) linegrid_hwr_fs_pane_g2

0x0ce8,	// (0x000033f8) linegrid_hwr_fs_pane_g3_ParamLimits

0x0ce8,	// (0x000033f8) linegrid_hwr_fs_pane_g3

0xc651,	// (0x0000ed61) linegrid_hwr_fs_pane_g4_ParamLimits

0xc651,	// (0x0000ed61) linegrid_hwr_fs_pane_g4

0xc66b,	// (0x0000ed7b) linegrid_hwr_fs_pane_g5_ParamLimits

0xc66b,	// (0x0000ed7b) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x00011f34) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x00011f34) linegrid_hwr_fs_pane_g

0x0d24,	// (0x00003434) cell_hwr_fs_pane_g1_ParamLimits

0x0d24,	// (0x00003434) cell_hwr_fs_pane_g1

0x0901,	// (0x00003011) cell_hwr_fs_pane_g2_ParamLimits

0x0901,	// (0x00003011) cell_hwr_fs_pane_g2

0x0d3a,	// (0x0000344a) cell_hwr_fs_pane_g3_ParamLimits

0x0d3a,	// (0x0000344a) cell_hwr_fs_pane_g3

0x0d47,	// (0x00003457) cell_hwr_fs_pane_g4_ParamLimits

0x0d47,	// (0x00003457) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x00011f3f) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x00011f3f) cell_hwr_fs_pane_g

0xc681,	// (0x0000ed91) cell_hwr_fs_pane_t1

0xd721,	// (0x0000fe31) grid_highlight_pane_cp6

0xd721,	// (0x0000fe31) main_idle_act2_pane

0xe7c5,	// (0x00010ed5) aid_inside_area_popup_secondary

0x1a28,	// (0x00004138) aid_inside_area_window_primary_ParamLimits

0x1a28,	// (0x00004138) aid_inside_area_window_primary

0x26f4,	// (0x00004e04) ai2_news_ticker_pane

0x26fc,	// (0x00004e0c) aid_size_cell_ai1_link_ParamLimits

0x26fc,	// (0x00004e0c) aid_size_cell_ai1_link

0x2716,	// (0x00004e26) popup_ai2_data_window_ParamLimits

0x2716,	// (0x00004e26) popup_ai2_data_window

0x272a,	// (0x00004e3a) popup_ai2_link_window_ParamLimits

0x272a,	// (0x00004e3a) popup_ai2_link_window

0x0c7c,	// (0x0000338c) bg_popup_sub_pane_cp4_ParamLimits

0x0c7c,	// (0x0000338c) bg_popup_sub_pane_cp4

0x273e,	// (0x00004e4e) grid_ai2_link_pane_ParamLimits

0x273e,	// (0x00004e4e) grid_ai2_link_pane

0x2755,	// (0x00004e65) popup_ai2_link_window_g1_ParamLimits

0x2755,	// (0x00004e65) popup_ai2_link_window_g1

0x2761,	// (0x00004e71) popup_ai2_link_window_g2_ParamLimits

0x2761,	// (0x00004e71) popup_ai2_link_window_g2

0x0001,

0xf9f6,	// (0x00012106) popup_ai2_link_window_g_ParamLimits

0xf9f6,	// (0x00012106) popup_ai2_link_window_g

0x2770,	// (0x00004e80) ai2_mp_button_pane

0x2778,	// (0x00004e88) ai2_mp_volume_pane

0x0eba,	// (0x000035ca) bg_popup_sub_pane_cp5_ParamLimits

0x0eba,	// (0x000035ca) bg_popup_sub_pane_cp5

0x2780,	// (0x00004e90) heading_ai2_gene_pane_ParamLimits

0x2780,	// (0x00004e90) heading_ai2_gene_pane

0x278c,	// (0x00004e9c) list_ai2_gene_pane_ParamLimits

0x278c,	// (0x00004e9c) list_ai2_gene_pane

0x27d4,	// (0x00004ee4) cell_ai2_link_pane_ParamLimits

0x27d4,	// (0x00004ee4) cell_ai2_link_pane

0x27ea,	// (0x00004efa) cell_ai2_link_pane_g1

0xd721,	// (0x0000fe31) grid_highlight_pane_cp7

0xc965,	// (0x0000f075) ai2_mp_volume_pane_g1

0x28c2,	// (0x00004fd2) ai2_mp_volume_pane_g2

0x2827,	// (0x00004f37) list_ai2_gene_pane_t1

0x28ba,	// (0x00004fca) ai2_mp_volume_pane_g3

0x0002,

0xfa0f,	// (0x0001211f) ai2_mp_volume_pane_g

0xc96d,	// (0x0000f07d) volume_small_pane_cp3

0x28d3,	// (0x00004fe3) aid_size_cell_ai2_button

0x28db,	// (0x00004feb) grid_ai2_button_pane

0x28e4,	// (0x00004ff4) cell_ai2_button_pane_ParamLimits

0x28e4,	// (0x00004ff4) cell_ai2_button_pane

0xd63a,	// (0x0000fd4a) cell_ai2_button_pane_g1

0xd721,	// (0x0000fe31) grid_highlight_pane_cp8

0x2872,	// (0x00004f82) ai2_gene_pane_t1_ParamLimits

0x2872,	// (0x00004f82) ai2_gene_pane_t1

0x009f,	// (0x000027af) aid_height_parent_landscape

0x2162,	// (0x00004872) aid_height_set_list

0x216e,	// (0x0000487e) aid_size_parent

0x24c1,	// (0x00004bd1) aid_size_cell_graphic_pane_ParamLimits

0x279c,	// (0x00004eac) popup_ai2_data_window_g1_ParamLimits

0x279c,	// (0x00004eac) popup_ai2_data_window_g1

0x27a8,	// (0x00004eb8) ai2_news_ticker_pane_g1

0x27b0,	// (0x00004ec0) ai2_news_ticker_pane_g2

0x0001,

0xf9fb,	// (0x0001210b) ai2_news_ticker_pane_g

0x27b8,	// (0x00004ec8) ai2_news_ticker_pane_t1

0x27c6,	// (0x00004ed6) ai2_news_ticker_pane_t2

0x0001,

0xfa00,	// (0x00012110) ai2_news_ticker_pane_t

0x245b,	// (0x00004b6b) heading_ai2_gene_pane_g1

0x27f3,	// (0x00004f03) heading_ai2_gene_pane_t1_ParamLimits

0x27f3,	// (0x00004f03) heading_ai2_gene_pane_t1

0x2808,	// (0x00004f18) list_highlight_pane_cp6

0x2810,	// (0x00004f20) ai2_gene_pane_ParamLimits

0x2810,	// (0x00004f20) ai2_gene_pane

0x2835,	// (0x00004f45) list_ai2_gene_pane_t2

0x0001,

0xfa05,	// (0x00012115) list_ai2_gene_pane_t

0x2843,	// (0x00004f53) list_highlight_pane_cp8_ParamLimits

0x2843,	// (0x00004f53) list_highlight_pane_cp8

0x2854,	// (0x00004f64) ai2_gene_pane_g1_ParamLimits

0x2854,	// (0x00004f64) ai2_gene_pane_g1

0x2866,	// (0x00004f76) ai2_gene_pane_g2_ParamLimits

0x2866,	// (0x00004f76) ai2_gene_pane_g2

0x0001,

0xfa0a,	// (0x0001211a) ai2_gene_pane_g_ParamLimits

0xfa0a,	// (0x0001211a) ai2_gene_pane_g

0xdf91,	// (0x000106a1) scroll_pane_cp12

0xc4ad,	// (0x0000ebbd) control_pane_t3_ParamLimits

0xc4ad,	// (0x0000ebbd) control_pane_t3

0xf517,	// (0x00011c27) status_small_pane_g8_ParamLimits

0xf517,	// (0x00011c27) status_small_pane_g8

0x0264,	// (0x00002974) popup_find_window_ParamLimits

0x03e6,	// (0x00002af6) popup_note_image_window_ParamLimits

0xe1a3,	// (0x000108b3) list_double2_graphic_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108b3) list_double2_graphic_pane_vc_g1

0xe1af,	// (0x000108bf) list_double2_graphic_pane_vc_g2_ParamLimits

0xe1af,	// (0x000108bf) list_double2_graphic_pane_vc_g2

0xe0da,	// (0x000107ea) list_double2_graphic_pane_vc_g3_ParamLimits

0xe0da,	// (0x000107ea) list_double2_graphic_pane_vc_g3

0x0002,

0xf659,	// (0x00011d69) list_double2_graphic_pane_vc_g_ParamLimits

0xf659,	// (0x00011d69) list_double2_graphic_pane_vc_g

0xe1bb,	// (0x000108cb) list_double2_graphic_pane_vc_t1_ParamLimits

0xe1bb,	// (0x000108cb) list_double2_graphic_pane_vc_t1

0xe1af,	// (0x000108bf) list_single_heading_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108bf) list_single_heading_pane_vc_g1

0xe0da,	// (0x000107ea) list_single_heading_pane_vc_g2_ParamLimits

0xe0da,	// (0x000107ea) list_single_heading_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011db5) list_single_heading_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011db5) list_single_heading_pane_vc_g

0x0b83,	// (0x00003293) list_single_heading_pane_vc_t1_ParamLimits

0x0b83,	// (0x00003293) list_single_heading_pane_vc_t1

0x0b99,	// (0x000032a9) list_single_heading_pane_vc_t2_ParamLimits

0x0b99,	// (0x000032a9) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x00011f23) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x00011f23) list_single_heading_pane_vc_t

0x0bc1,	// (0x000032d1) list_setting_number_pane_vc_g1_ParamLimits

0x0bc1,	// (0x000032d1) list_setting_number_pane_vc_g1

0x0bcd,	// (0x000032dd) list_setting_number_pane_vc_g2_ParamLimits

0x0bcd,	// (0x000032dd) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x00011f28) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x00011f28) list_setting_number_pane_vc_g

0x0bd9,	// (0x000032e9) list_setting_number_pane_vc_t1_ParamLimits

0x0bd9,	// (0x000032e9) list_setting_number_pane_vc_t1

0x0bed,	// (0x000032fd) list_setting_number_pane_vc_t2_ParamLimits

0x0bed,	// (0x000032fd) list_setting_number_pane_vc_t2

0x0c09,	// (0x00003319) list_setting_number_pane_vc_t3_ParamLimits

0x0c09,	// (0x00003319) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x00011f2d) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x00011f2d) list_setting_number_pane_vc_t

0x0c2f,	// (0x0000333f) set_value_pane_vc_ParamLimits

0x0c2f,	// (0x0000333f) set_value_pane_vc

0x2338,	// (0x00004a48) list_double2_graphic_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double2_graphic_pane_vc

0x234b,	// (0x00004a5b) list_double2_large_graphic_pane_vc_ParamLimits

0x234b,	// (0x00004a5b) list_double2_large_graphic_pane_vc

0x2338,	// (0x00004a48) list_double2_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double2_pane_vc

0x2338,	// (0x00004a48) list_double_graphic_heading_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double_graphic_heading_pane_vc

0x2338,	// (0x00004a48) list_double_graphic_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double_graphic_pane_vc

0x2338,	// (0x00004a48) list_double_heading_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double_heading_pane_vc

0x234b,	// (0x00004a5b) list_double_large_graphic_pane_vc_ParamLimits

0x234b,	// (0x00004a5b) list_double_large_graphic_pane_vc

0x2338,	// (0x00004a48) list_double_number_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double_number_pane_vc

0x2338,	// (0x00004a48) list_double_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double_pane_vc

0x2338,	// (0x00004a48) list_double_time_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_double_time_pane_vc

0x2338,	// (0x00004a48) list_setting_number_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_setting_number_pane_vc

0x2338,	// (0x00004a48) list_setting_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_setting_pane_vc

0x2338,	// (0x00004a48) list_single_graphic_heading_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_single_graphic_heading_pane_vc

0x2338,	// (0x00004a48) list_single_heading_pane_vc_ParamLimits

0x2338,	// (0x00004a48) list_single_heading_pane_vc

0x235c,	// (0x00004a6c) list_single_number_heading_pane_vc_ParamLimits

0x235c,	// (0x00004a6c) list_single_number_heading_pane_vc

0xe1a3,	// (0x000108b3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108b3) list_double_graphic_heading_pane_vc_g1

0xe1af,	// (0x000108bf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe1af,	// (0x000108bf) list_double_graphic_heading_pane_vc_g2

0xe0da,	// (0x000107ea) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe0da,	// (0x000107ea) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf659,	// (0x00011d69) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00011d69) list_double_graphic_heading_pane_vc_g

0x2918,	// (0x00005028) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2918,	// (0x00005028) list_double_graphic_heading_pane_vc_t1

0x0b83,	// (0x00003293) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b83,	// (0x00003293) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x00012126) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00012126) list_double_graphic_heading_pane_vc_t

0x0bc1,	// (0x000032d1) list_setting_pane_vc_g1_ParamLimits

0x0bc1,	// (0x000032d1) list_setting_pane_vc_g1

0x0bcd,	// (0x000032dd) list_setting_pane_vc_g2_ParamLimits

0x0bcd,	// (0x000032dd) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x00011f28) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x00011f28) list_setting_pane_vc_g

0x2b58,	// (0x00005268) list_setting_pane_vc_t1_ParamLimits

0x2b58,	// (0x00005268) list_setting_pane_vc_t1

0x2b6c,	// (0x0000527c) list_setting_pane_vc_t2_ParamLimits

0x2b6c,	// (0x0000527c) list_setting_pane_vc_t2

0x0001,

0xfa59,	// (0x00012169) list_setting_pane_vc_t_ParamLimits

0xfa59,	// (0x00012169) list_setting_pane_vc_t

0x0c2f,	// (0x0000333f) set_value_pane_cp_vc_ParamLimits

0x0c2f,	// (0x0000333f) set_value_pane_cp_vc

0xe1af,	// (0x000108bf) list_single_number_heading_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108bf) list_single_number_heading_pane_vc_g1

0xe0da,	// (0x000107ea) list_single_number_heading_pane_vc_g2_ParamLimits

0xe0da,	// (0x000107ea) list_single_number_heading_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011db5) list_single_number_heading_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011db5) list_single_number_heading_pane_vc_g

0x0b83,	// (0x00003293) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b83,	// (0x00003293) list_single_number_heading_pane_vc_t1

0x2b8e,	// (0x0000529e) list_single_number_heading_pane_vc_t2_ParamLimits

0x2b8e,	// (0x0000529e) list_single_number_heading_pane_vc_t2

0x2ba0,	// (0x000052b0) list_single_number_heading_pane_vc_t3_ParamLimits

0x2ba0,	// (0x000052b0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa5e,	// (0x0001216e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001216e) list_single_number_heading_pane_vc_t

0xe1a3,	// (0x000108b3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108b3) list_single_graphic_heading_pane_vc_g1

0xe1af,	// (0x000108bf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe1af,	// (0x000108bf) list_single_graphic_heading_pane_vc_g4

0xe0da,	// (0x000107ea) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe0da,	// (0x000107ea) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf659,	// (0x00011d69) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00011d69) list_single_graphic_heading_pane_vc_g

0x0b83,	// (0x00003293) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b83,	// (0x00003293) list_single_graphic_heading_pane_vc_t1

0x2bb2,	// (0x000052c2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2bb2,	// (0x000052c2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x00012175) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x00012175) list_single_graphic_heading_pane_vc_t

0xe1af,	// (0x000108bf) list_double2_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108bf) list_double2_pane_vc_g1

0xe0da,	// (0x000107ea) list_double2_pane_vc_g2_ParamLimits

0xe0da,	// (0x000107ea) list_double2_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011db5) list_double2_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011db5) list_double2_pane_vc_g

0xe0e6,	// (0x000107f6) list_double2_pane_vc_t1_ParamLimits

0xe0e6,	// (0x000107f6) list_double2_pane_vc_t1

0xe049,	// (0x00010759) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe049,	// (0x00010759) list_double2_large_graphic_pane_vc_g1

0xe055,	// (0x00010765) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe055,	// (0x00010765) list_double2_large_graphic_pane_vc_g2

0xe061,	// (0x00010771) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe061,	// (0x00010771) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00011d39) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00011d39) list_double2_large_graphic_pane_vc_g

0xe075,	// (0x00010785) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe075,	// (0x00010785) list_double2_large_graphic_pane_vc_t1

0x2bc4,	// (0x000052d4) list_double_time_pane_vc_g1_ParamLimits

0x2bc4,	// (0x000052d4) list_double_time_pane_vc_g1

0x2bd0,	// (0x000052e0) list_double_time_pane_vc_g2_ParamLimits

0x2bd0,	// (0x000052e0) list_double_time_pane_vc_g2

0x0001,

0xfa6a,	// (0x0001217a) list_double_time_pane_vc_g_ParamLimits

0xfa6a,	// (0x0001217a) list_double_time_pane_vc_g

0x2bdc,	// (0x000052ec) list_double_time_pane_vc_t1_ParamLimits

0x2bdc,	// (0x000052ec) list_double_time_pane_vc_t1

0x2bf5,	// (0x00005305) list_double_time_pane_vc_t2_ParamLimits

0x2bf5,	// (0x00005305) list_double_time_pane_vc_t2

0x2c0e,	// (0x0000531e) list_double_time_pane_vc_t3_ParamLimits

0x2c0e,	// (0x0000531e) list_double_time_pane_vc_t3

0x2c26,	// (0x00005336) list_double_time_pane_vc_t4_ParamLimits

0x2c26,	// (0x00005336) list_double_time_pane_vc_t4

0x0003,

0xfa6f,	// (0x0001217f) list_double_time_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001217f) list_double_time_pane_vc_t

0xe1af,	// (0x000108bf) list_double_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108bf) list_double_pane_vc_g1

0xe0da,	// (0x000107ea) list_double_pane_vc_g2_ParamLimits

0xe0da,	// (0x000107ea) list_double_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011db5) list_double_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011db5) list_double_pane_vc_g

0x2c38,	// (0x00005348) list_double_pane_vc_t1_ParamLimits

0x2c38,	// (0x00005348) list_double_pane_vc_t1

0x2c4a,	// (0x0000535a) list_double_pane_vc_t2_ParamLimits

0x2c4a,	// (0x0000535a) list_double_pane_vc_t2

0x0001,

0xfa78,	// (0x00012188) list_double_pane_vc_t_ParamLimits

0xfa78,	// (0x00012188) list_double_pane_vc_t

0xe1af,	// (0x000108bf) list_double_number_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108bf) list_double_number_pane_vc_g1

0xe0da,	// (0x000107ea) list_double_number_pane_vc_g2_ParamLimits

0xe0da,	// (0x000107ea) list_double_number_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011db5) list_double_number_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011db5) list_double_number_pane_vc_g

0x2c60,	// (0x00005370) list_double_number_pane_vc_t1_ParamLimits

0x2c60,	// (0x00005370) list_double_number_pane_vc_t1

0x2c74,	// (0x00005384) list_double_number_pane_vc_t2_ParamLimits

0x2c74,	// (0x00005384) list_double_number_pane_vc_t2

0x2c4a,	// (0x0000535a) list_double_number_pane_vc_t3_ParamLimits

0x2c4a,	// (0x0000535a) list_double_number_pane_vc_t3

0x0002,

0xfa7d,	// (0x0001218d) list_double_number_pane_vc_t_ParamLimits

0xfa7d,	// (0x0001218d) list_double_number_pane_vc_t

0x2c86,	// (0x00005396) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2c86,	// (0x00005396) list_double_large_graphic_pane_vc_g1

0x2c92,	// (0x000053a2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2c92,	// (0x000053a2) list_double_large_graphic_pane_vc_g2

0xe061,	// (0x00010771) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe061,	// (0x00010771) list_double_large_graphic_pane_vc_g3

0x2ca1,	// (0x000053b1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2ca1,	// (0x000053b1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa84,	// (0x00012194) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x00012194) list_double_large_graphic_pane_vc_g

0x2cad,	// (0x000053bd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2cad,	// (0x000053bd) list_double_large_graphic_pane_vc_t1

0x2cbf,	// (0x000053cf) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2cbf,	// (0x000053cf) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x0001219d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001219d) list_double_large_graphic_pane_vc_t

0xe1af,	// (0x000108bf) list_double_heading_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108bf) list_double_heading_pane_vc_g1

0xe0da,	// (0x000107ea) list_double_heading_pane_vc_g2_ParamLimits

0xe0da,	// (0x000107ea) list_double_heading_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011db5) list_double_heading_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011db5) list_double_heading_pane_vc_g

0x2cd6,	// (0x000053e6) list_double_heading_pane_vc_t1_ParamLimits

0x2cd6,	// (0x000053e6) list_double_heading_pane_vc_t1

0x0b83,	// (0x00003293) list_double_heading_pane_vc_t2_ParamLimits

0x0b83,	// (0x00003293) list_double_heading_pane_vc_t2

0x0001,

0xfa92,	// (0x000121a2) list_double_heading_pane_vc_t_ParamLimits

0xfa92,	// (0x000121a2) list_double_heading_pane_vc_t

0xe1a3,	// (0x000108b3) list_double_graphic_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108b3) list_double_graphic_pane_vc_g1

0x2ce8,	// (0x000053f8) list_double_graphic_pane_vc_g2_ParamLimits

0x2ce8,	// (0x000053f8) list_double_graphic_pane_vc_g2

0x2cf7,	// (0x00005407) list_double_graphic_pane_vc_g3_ParamLimits

0x2cf7,	// (0x00005407) list_double_graphic_pane_vc_g3

0x0002,

0xfa97,	// (0x000121a7) list_double_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x000121a7) list_double_graphic_pane_vc_g

0x2d03,	// (0x00005413) list_double_graphic_pane_vc_t1_ParamLimits

0x2d03,	// (0x00005413) list_double_graphic_pane_vc_t1

0x2c4a,	// (0x0000535a) list_double_graphic_pane_vc_t2_ParamLimits

0x2c4a,	// (0x0000535a) list_double_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x000121ae) list_double_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x000121ae) list_double_graphic_pane_vc_t

0xbca3,	// (0x0000e3b3) aid_size_cell_fastswap

0xbcab,	// (0x0000e3bb) aid_size_cell_touch_ParamLimits

0xbcab,	// (0x0000e3bb) aid_size_cell_touch

0xbdfa,	// (0x0000e50a) popup_fast_swap_wide_window_ParamLimits

0xbdfa,	// (0x0000e50a) popup_fast_swap_wide_window

0xbec0,	// (0x0000e5d0) touch_pane_ParamLimits

0xbec0,	// (0x0000e5d0) touch_pane

0xe447,	// (0x00010b57) button_value_adjust_pane_cp2

0xe44f,	// (0x00010b5f) button_value_adjust_pane_cp4

0xe46f,	// (0x00010b7f) form_field_data_pane_cp2

0xe48e,	// (0x00010b9e) form_field_data_wide_pane_cp2

0xeae7,	// (0x000111f7) bg_scroll_pane_ParamLimits

0xc0e7,	// (0x0000e7f7) scroll_handle_pane_ParamLimits

0xc0fb,	// (0x0000e80b) scroll_sc2_down_pane_ParamLimits

0xc0fb,	// (0x0000e80b) scroll_sc2_down_pane

0xeb18,	// (0x00011228) scroll_sc2_up_pane_ParamLimits

0xeb18,	// (0x00011228) scroll_sc2_up_pane

0x30ff,	// (0x0000580f) grid_wheel_folder_pane_g1_ParamLimits

0x30ff,	// (0x0000580f) grid_wheel_folder_pane_g1

0xc2af,	// (0x0000e9bf) clock_nsta_pane_cp2_ParamLimits

0xc2af,	// (0x0000e9bf) clock_nsta_pane_cp2

0xf2ac,	// (0x000119bc) listscroll_midp_pane_ParamLimits

0xf2b8,	// (0x000119c8) midp_canvas_pane

0xc4ee,	// (0x0000ebfe) nsta_clock_indic_pane

0x00f5,	// (0x00002805) listscroll_form_pane_vc

0x0112,	// (0x00002822) listscroll_set_pane_vc_ParamLimits

0x0112,	// (0x00002822) listscroll_set_pane_vc

0x0692,	// (0x00002da2) clock_nsta_pane

0x06fc,	// (0x00002e0c) indicator_nsta_pane

0x0a15,	// (0x00003125) bg_popup_sub_pane_cp2_ParamLimits

0x0a29,	// (0x00003139) find_pane_cp2_ParamLimits

0x0a29,	// (0x00003139) find_pane_cp2

0x0a3b,	// (0x0000314b) grid_toobar_pane_ParamLimits

0x0c3b,	// (0x0000334b) list_form_gen_pane_vc_ParamLimits

0x0c3b,	// (0x0000334b) list_form_gen_pane_vc

0x0c51,	// (0x00003361) scroll_pane_cp8_vc_ParamLimits

0x0c51,	// (0x00003361) scroll_pane_cp8_vc

0x0d62,	// (0x00003472) data_form_wide_pane_vc_ParamLimits

0x0d62,	// (0x00003472) data_form_wide_pane_vc

0x0d6e,	// (0x0000347e) form_field_data_wide_pane_vc_g1

0x0d76,	// (0x00003486) form_field_data_wide_pane_vc_t1_ParamLimits

0x0d76,	// (0x00003486) form_field_data_wide_pane_vc_t1

0xe517,	// (0x00010c27) input_focus_pane_cp6_vc_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_cp6_vc

0x104b,	// (0x0000375b) list_midp_pane_ParamLimits

0x1057,	// (0x00003767) scroll_pane_cp16_ParamLimits

0x1057,	// (0x00003767) scroll_pane_cp16

0x1097,	// (0x000037a7) button_value_adjust_pane_ParamLimits

0x1097,	// (0x000037a7) button_value_adjust_pane

0x2180,	// (0x00004890) button_value_adjust_pane_cp6_ParamLimits

0x2180,	// (0x00004890) button_value_adjust_pane_cp6

0x2288,	// (0x00004998) settings_code_pane_cp_ParamLimits

0x2288,	// (0x00004998) settings_code_pane_cp

0xd63a,	// (0x0000fd4a) cell_touch_pane_g1

0xd63a,	// (0x0000fd4a) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00011e52) cell_touch_pane_g

0x28f6,	// (0x00005006) cell_touch_pane_cp_ParamLimits

0x28f6,	// (0x00005006) cell_touch_pane_cp

0x2906,	// (0x00005016) cell_touch_pane_ParamLimits

0x2906,	// (0x00005016) cell_touch_pane

0xd63a,	// (0x0000fd4a) scroll_sc2_down_pane_g1

0xd63a,	// (0x0000fd4a) scroll_sc2_up_pane_g1

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp4_vc

0x292a,	// (0x0000503a) list_set_graphic_pane_vc_g1_ParamLimits

0x292a,	// (0x0000503a) list_set_graphic_pane_vc_g1

0x2936,	// (0x00005046) list_set_graphic_pane_vc_g2_ParamLimits

0x2936,	// (0x00005046) list_set_graphic_pane_vc_g2

0x0001,

0xfa1b,	// (0x0001212b) list_set_graphic_pane_vc_g_ParamLimits

0xfa1b,	// (0x0001212b) list_set_graphic_pane_vc_g

0x2942,	// (0x00005052) text_primary_small_cp13_vc_ParamLimits

0x2942,	// (0x00005052) text_primary_small_cp13_vc

0x295a,	// (0x0000506a) list_set_graphic_pane_vc_ParamLimits

0x295a,	// (0x0000506a) list_set_graphic_pane_vc

0xd721,	// (0x0000fe31) input_focus_pane_cp2_vc

0xd63a,	// (0x0000fd4a) setting_code_pane_vc_g1

0x296d,	// (0x0000507d) setting_code_pane_vc_t1

0x297b,	// (0x0000508b) set_text_pane_vc_t1_ParamLimits

0x297b,	// (0x0000508b) set_text_pane_vc_t1

0xd721,	// (0x0000fe31) input_focus_pane_cp1_vc

0x2996,	// (0x000050a6) list_set_text_pane_vc

0xd63a,	// (0x0000fd4a) setting_text_pane_vc_g1

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp2_vc

0x29a0,	// (0x000050b0) setting_slider_graphic_pane_vc_g1

0x29a8,	// (0x000050b8) setting_slider_graphic_pane_vc_t1

0x29b6,	// (0x000050c6) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa20,	// (0x00012130) setting_slider_graphic_pane_vc_t

0x29c4,	// (0x000050d4) slider_set_pane_cp_vc

0x29cc,	// (0x000050dc) slider_set_pane_vc_g1

0x29d5,	// (0x000050e5) slider_set_pane_vc_g2

0x0006,

0xfa25,	// (0x00012135) slider_set_pane_vc_g

0xe63d,	// (0x00010d4d) set_opt_bg_pane_g1_copy1

0xe645,	// (0x00010d55) set_opt_bg_pane_g2_copy1

0x2a01,	// (0x00005111) set_opt_bg_pane_g3_copy1

0xe655,	// (0x00010d65) set_opt_bg_pane_g4_copy1

0xe65d,	// (0x00010d6d) set_opt_bg_pane_g5_copy1

0xe665,	// (0x00010d75) set_opt_bg_pane_g6_copy1

0x2a09,	// (0x00005119) set_opt_bg_pane_g7_copy1

0x2a11,	// (0x00005121) set_opt_bg_pane_g8_copy1

0x2a19,	// (0x00005129) set_opt_bg_pane_g9_copy1

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp_vc

0x2a21,	// (0x00005131) setting_slider_pane_vc_t1

0x29a8,	// (0x000050b8) setting_slider_pane_vc_t2

0x29b6,	// (0x000050c6) setting_slider_pane_vc_t3

0x0002,

0xfa34,	// (0x00012144) setting_slider_pane_vc_t

0x29c4,	// (0x000050d4) slider_set_pane_vc

0xc68f,	// (0x0000ed9f) volume_set_pane_vc_g1

0xc976,	// (0x0000f086) volume_set_pane_vc_g2

0xc97f,	// (0x0000f08f) volume_set_pane_vc_g3

0xc988,	// (0x0000f098) volume_set_pane_vc_g4

0xc991,	// (0x0000f0a1) volume_set_pane_vc_g5

0xc99a,	// (0x0000f0aa) volume_set_pane_vc_g6

0xc9a3,	// (0x0000f0b3) volume_set_pane_vc_g7

0xc9ac,	// (0x0000f0bc) volume_set_pane_vc_g8

0xc9b5,	// (0x0000f0c5) volume_set_pane_vc_g9

0xc9be,	// (0x0000f0ce) volume_set_pane_vc_g10

0x0009,

0xfa3b,	// (0x0001214b) volume_set_pane_vc_g

0x2a81,	// (0x00005191) volume_set_pane_vc

0x2a89,	// (0x00005199) button_value_adjust_pane_cp1_vc

0x2a93,	// (0x000051a3) list_highlight_pane_cp2_vc

0x2a9c,	// (0x000051ac) list_set_pane_vc_ParamLimits

0x2a9c,	// (0x000051ac) list_set_pane_vc

0x2aee,	// (0x000051fe) main_pane_set_vc_t1_ParamLimits

0x2aee,	// (0x000051fe) main_pane_set_vc_t1

0x2b03,	// (0x00005213) main_pane_set_vc_t2_ParamLimits

0x2b03,	// (0x00005213) main_pane_set_vc_t2

0x2b15,	// (0x00005225) main_pane_set_vc_t3_ParamLimits

0x2b15,	// (0x00005225) main_pane_set_vc_t3

0x2b27,	// (0x00005237) main_pane_set_vc_t4_ParamLimits

0x2b27,	// (0x00005237) main_pane_set_vc_t4

0x0003,

0xfa50,	// (0x00012160) main_pane_set_vc_t_ParamLimits

0xfa50,	// (0x00012160) main_pane_set_vc_t

0x2b39,	// (0x00005249) setting_code_pane_vc_ParamLimits

0x2b39,	// (0x00005249) setting_code_pane_vc

0x2b48,	// (0x00005258) setting_slider_graphic_pane_vc

0x2b48,	// (0x00005258) setting_slider_pane_vc

0x2b48,	// (0x00005258) setting_text_pane_vc

0x2b48,	// (0x00005258) setting_volume_pane_vc

0x2b50,	// (0x00005260) scroll_pane_cp121_vc

0xe43e,	// (0x00010b4e) set_content_pane_vc

0x2d15,	// (0x00005425) button_value_adjust_pane_g1

0x2d1e,	// (0x0000542e) button_value_adjust_pane_g2

0x0001,

0xfaa3,	// (0x000121b3) button_value_adjust_pane_g

0x2d27,	// (0x00005437) form_field_slider_wide_pane_vc_t1_ParamLimits

0x2d27,	// (0x00005437) form_field_slider_wide_pane_vc_t1

0x2d3d,	// (0x0000544d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x2d3d,	// (0x0000544d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa8,	// (0x000121b8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa8,	// (0x000121b8) form_field_slider_wide_pane_vc_t

0xdac6,	// (0x000101d6) input_focus_pane_cp10_vc_ParamLimits

0xdac6,	// (0x000101d6) input_focus_pane_cp10_vc

0x2d52,	// (0x00005462) slider_cont_pane_cp1_vc_ParamLimits

0x2d52,	// (0x00005462) slider_cont_pane_cp1_vc

0x29cc,	// (0x000050dc) slider_form_pane_g1_cp2

0x29d5,	// (0x000050e5) slider_form_pane_g2_cp2

0x2d6d,	// (0x0000547d) form_field_slider_pane_vc_t3

0x2d7b,	// (0x0000548b) form_field_slider_pane_vc_t4

0x2d89,	// (0x00005499) slider_form_pane_vc_ParamLimits

0x2d89,	// (0x00005499) slider_form_pane_vc

0x2d96,	// (0x000054a6) form_field_slider_pane_vc_t1_ParamLimits

0x2d96,	// (0x000054a6) form_field_slider_pane_vc_t1

0x2dac,	// (0x000054bc) form_field_slider_pane_vc_t2_ParamLimits

0x2dac,	// (0x000054bc) form_field_slider_pane_vc_t2

0x0001,

0xfab8,	// (0x000121c8) form_field_slider_pane_vc_t_ParamLimits

0xfab8,	// (0x000121c8) form_field_slider_pane_vc_t

0xdac6,	// (0x000101d6) input_focus_pane_cp9_vc_ParamLimits

0xdac6,	// (0x000101d6) input_focus_pane_cp9_vc

0x2dbe,	// (0x000054ce) slider_cont_pane_vc_ParamLimits

0x2dbe,	// (0x000054ce) slider_cont_pane_vc

0x2dd0,	// (0x000054e0) list_form_graphic_pane_cp_vc_ParamLimits

0x2dd0,	// (0x000054e0) list_form_graphic_pane_cp_vc

0x0d6e,	// (0x0000347e) form_field_popup_wide_pane_vc_g1

0x2de5,	// (0x000054f5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x2de5,	// (0x000054f5) form_field_popup_wide_pane_vc_t1

0xe517,	// (0x00010c27) input_focus_pane_cp8_vc_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_cp8_vc

0x2dfa,	// (0x0000550a) list_form_wide_pane_vc_ParamLimits

0x2dfa,	// (0x0000550a) list_form_wide_pane_vc

0x2e06,	// (0x00005516) list_form_graphic_pane_vc_g1

0x2e0e,	// (0x0000551e) list_form_graphic_pane_vc_t1_ParamLimits

0x2e0e,	// (0x0000551e) list_form_graphic_pane_vc_t1

0xd801,	// (0x0000ff11) list_highlight_pane_cp5_vc_ParamLimits

0xd801,	// (0x0000ff11) list_highlight_pane_cp5_vc

0x2e2a,	// (0x0000553a) list_form_graphic_pane_vc_ParamLimits

0x2e2a,	// (0x0000553a) list_form_graphic_pane_vc

0x0d6e,	// (0x0000347e) form_field_popup_pane_vc_g1

0x2e40,	// (0x00005550) form_field_popup_pane_vc_t1_ParamLimits

0x2e40,	// (0x00005550) form_field_popup_pane_vc_t1

0xe517,	// (0x00010c27) input_focus_pane_cp7_vc_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_cp7_vc

0x2e55,	// (0x00005565) list_form_pane_vc_ParamLimits

0x2e55,	// (0x00005565) list_form_pane_vc

0x2e61,	// (0x00005571) data_form_pane_vc_t1_ParamLimits

0x2e61,	// (0x00005571) data_form_pane_vc_t1

0xe63d,	// (0x00010d4d) input_focus_pane_vc_g1

0xe645,	// (0x00010d55) input_focus_pane_vc_g2

0xe64d,	// (0x00010d5d) input_focus_pane_vc_g3

0xe655,	// (0x00010d65) input_focus_pane_vc_g4

0xe65d,	// (0x00010d6d) input_focus_pane_vc_g5

0xe665,	// (0x00010d75) input_focus_pane_vc_g6

0xe66d,	// (0x00010d7d) input_focus_pane_vc_g7

0xe675,	// (0x00010d85) input_focus_pane_vc_g8

0xe67d,	// (0x00010d8d) input_focus_pane_vc_g9

0xd63a,	// (0x0000fd4a) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00011ddb) input_focus_pane_vc_g

0x0d62,	// (0x00003472) data_form_pane_vc_ParamLimits

0x0d62,	// (0x00003472) data_form_pane_vc

0x0d6e,	// (0x0000347e) form_field_data_pane_vc_g1

0x2e7c,	// (0x0000558c) form_field_data_pane_vc_t1_ParamLimits

0x2e7c,	// (0x0000558c) form_field_data_pane_vc_t1

0xe517,	// (0x00010c27) input_focus_pane_vc_ParamLimits

0xe517,	// (0x00010c27) input_focus_pane_vc

0xe447,	// (0x00010b57) button_value_adjust_pane_cp3_vc

0x2e92,	// (0x000055a2) button_value_adjust_pane_cp5_vc

0x2e9a,	// (0x000055aa) form_field_data_pane_vc_ParamLimits

0x2e9a,	// (0x000055aa) form_field_data_pane_vc

0xe46f,	// (0x00010b7f) form_field_data_pane_vc_cp2

0x2eb1,	// (0x000055c1) form_field_data_wide_pane_vc_ParamLimits

0x2eb1,	// (0x000055c1) form_field_data_wide_pane_vc

0x2ec7,	// (0x000055d7) form_field_data_wide_pane_vc_cp2

0x2ecf,	// (0x000055df) form_field_popup_pane_vc_ParamLimits

0x2ecf,	// (0x000055df) form_field_popup_pane_vc

0x2ee6,	// (0x000055f6) form_field_popup_wide_pane_vc_ParamLimits

0x2ee6,	// (0x000055f6) form_field_popup_wide_pane_vc

0x2efc,	// (0x0000560c) form_field_slider_pane_vc_ParamLimits

0x2efc,	// (0x0000560c) form_field_slider_pane_vc

0x2f0f,	// (0x0000561f) form_field_slider_wide_pane_vc_ParamLimits

0x2f0f,	// (0x0000561f) form_field_slider_wide_pane_vc

0x2f22,	// (0x00005632) grid_touch_1_pane_ParamLimits

0x2f22,	// (0x00005632) grid_touch_1_pane

0x2f2e,	// (0x0000563e) grid_touch_2_pane_ParamLimits

0x2f2e,	// (0x0000563e) grid_touch_2_pane

0xf55d,	// (0x00011c6d) touch_pane_g1_ParamLimits

0xf55d,	// (0x00011c6d) touch_pane_g1

0x2f46,	// (0x00005656) cell_app_pane_cp_wide_ParamLimits

0x2f46,	// (0x00005656) cell_app_pane_cp_wide

0x2f56,	// (0x00005666) grid_popup_fast_wide_pane_ParamLimits

0x2f56,	// (0x00005666) grid_popup_fast_wide_pane

0x2f6a,	// (0x0000567a) scroll_pane_cp19_ParamLimits

0x2f6a,	// (0x0000567a) scroll_pane_cp19

0xd721,	// (0x0000fe31) bg_popup_window_pane_cp20

0x2f7e,	// (0x0000568e) listscroll_popup_fast_wide_pane

0xd801,	// (0x0000ff11) grid_indicator_nsta_pane

0x2f86,	// (0x00005696) clock_nsta_pane_g1

0x2f8f,	// (0x0000569f) clock_nsta_pane_t1

0x2fab,	// (0x000056bb) cell_indicator_nsta_pane_ParamLimits

0x2fab,	// (0x000056bb) cell_indicator_nsta_pane

0x2fe3,	// (0x000056f3) cell_indicator_nsta_pane_g1

0x2ff1,	// (0x00005701) cell_indicator_nsta_pane_g2

0x0001,

0xfac2,	// (0x000121d2) cell_indicator_nsta_pane_g

0x3006,	// (0x00005716) clock_nsta_pane_cp

0x300e,	// (0x0000571e) indicator_nsta_pane_cp

0x3017,	// (0x00005727) nsta_clock_indic_pane_g1

0xd8e1,	// (0x0000fff1) grid_indicator_pane

0xec0a,	// (0x0001131a) scroll_pane_cp29

0xc206,	// (0x0000e916) indicator_nsta_pane_cp2_ParamLimits

0xc206,	// (0x0000e916) indicator_nsta_pane_cp2

0xd801,	// (0x0000ff11) main_apps_wheel_pane

0x0f32,	// (0x00003642) form_midp_field_text_pane_ParamLimits

0x1077,	// (0x00003787) scroll_bar_cp050_ParamLimits

0x304f,	// (0x0000575f) cell_indicator_pane_ParamLimits

0x304f,	// (0x0000575f) cell_indicator_pane

0x3065,	// (0x00005775) cell_indicator_pane_g1

0x306f,	// (0x0000577f) grid_wheel_folder_pane_ParamLimits

0x306f,	// (0x0000577f) grid_wheel_folder_pane

0x3081,	// (0x00005791) list_wheel_apps_pane_ParamLimits

0x3081,	// (0x00005791) list_wheel_apps_pane

0x3090,	// (0x000057a0) main_apps_wheel_pane_g1_ParamLimits

0x3090,	// (0x000057a0) main_apps_wheel_pane_g1

0x30a4,	// (0x000057b4) main_apps_wheel_pane_g2_ParamLimits

0x30a4,	// (0x000057b4) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x000121e1) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x000121e1) main_apps_wheel_pane_g

0x30b8,	// (0x000057c8) main_apps_wheel_pane_t1_ParamLimits

0x30b8,	// (0x000057c8) main_apps_wheel_pane_t1

0x30d7,	// (0x000057e7) list_wheel_apps_pane_g1

0x30df,	// (0x000057ef) list_wheel_apps_pane_g2

0x30e7,	// (0x000057f7) list_wheel_apps_pane_g3

0x30ef,	// (0x000057ff) list_wheel_apps_pane_g4

0x30f7,	// (0x00005807) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x000121e6) list_wheel_apps_pane_g

0xd801,	// (0x0000ff11) navi_icon_text_pane

0x05da,	// (0x00002cea) aid_fill_nsta

0x3116,	// (0x00005826) navi_icon_text_pane_g1

0x3122,	// (0x00005832) navi_icon_text_pane_t1

0xf01f,	// (0x0001172f) list_set_graphic_pane_t1_ParamLimits

0xf01f,	// (0x0001172f) list_set_graphic_pane_t1

0x1754,	// (0x00003e64) popup_midp_note_alarm_window_t6_ParamLimits

0x1754,	// (0x00003e64) popup_midp_note_alarm_window_t6

0x1766,	// (0x00003e76) popup_midp_note_alarm_window_t7_ParamLimits

0x1766,	// (0x00003e76) popup_midp_note_alarm_window_t7

0x1778,	// (0x00003e88) popup_midp_note_alarm_window_t8_ParamLimits

0x1778,	// (0x00003e88) popup_midp_note_alarm_window_t8

0x178a,	// (0x00003e9a) popup_midp_note_alarm_window_t9_ParamLimits

0x178a,	// (0x00003e9a) popup_midp_note_alarm_window_t9

0x179c,	// (0x00003eac) popup_midp_note_alarm_window_t10_ParamLimits

0x179c,	// (0x00003eac) popup_midp_note_alarm_window_t10

0x17ae,	// (0x00003ebe) popup_midp_note_alarm_window_t11_ParamLimits

0x17ae,	// (0x00003ebe) popup_midp_note_alarm_window_t11

0x17c0,	// (0x00003ed0) scroll_pane_cp17_ParamLimits

0x17c0,	// (0x00003ed0) scroll_pane_cp17

0xc68f,	// (0x0000ed9f) volume_small_pane_cp_g1

0xc9c7,	// (0x0000f0d7) volume_small_pane_cp_g2

0xc9d0,	// (0x0000f0e0) volume_small_pane_cp_g3

0xc9d9,	// (0x0000f0e9) volume_small_pane_cp_g4

0xc6bc,	// (0x0000edcc) volume_small_pane_cp_g5

0xc9e2,	// (0x0000f0f2) volume_small_pane_cp_g6

0xc9eb,	// (0x0000f0fb) volume_small_pane_cp_g7

0xc9f4,	// (0x0000f104) volume_small_pane_cp_g8

0xc9fd,	// (0x0000f10d) volume_small_pane_cp_g9

0xca06,	// (0x0000f116) volume_small_pane_cp_g10

0xf373,	// (0x00011a83) midp_ticker_pane_g1_ParamLimits

0xf37f,	// (0x00011a8f) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00011ea3) midp_ticker_pane_g_ParamLimits

0xf38b,	// (0x00011a9b) midp_ticker_pane_t1_ParamLimits

0x05ea,	// (0x00002cfa) aid_fill_nsta_2

0x1063,	// (0x00003773) list_form2_midp_pane

0x2307,	// (0x00004a17) midp_editing_number_pane_ParamLimits

0x2313,	// (0x00004a23) midp_ticker_pane_ParamLimits

0x317c,	// (0x0000588c) form2_midp_field_pane

0x31a0,	// (0x000058b0) scroll_pane_cp51

0x31c0,	// (0x000058d0) form2_midp_button_pane_ParamLimits

0x31c0,	// (0x000058d0) form2_midp_button_pane

0x31d2,	// (0x000058e2) form2_midp_content_pane_ParamLimits

0x31d2,	// (0x000058e2) form2_midp_content_pane

0x31ec,	// (0x000058fc) form2_midp_field_choice_group_pane

0x31f4,	// (0x00005904) form2_midp_field_pane_g1

0x31fc,	// (0x0000590c) form2_midp_field_pane_g2

0x3204,	// (0x00005914) form2_midp_field_pane_g3

0x320c,	// (0x0000591c) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x0001220b) form2_midp_field_pane_g

0x3214,	// (0x00005924) form2_midp_gauge_slider_pane

0x321c,	// (0x0000592c) form2_midp_gauge_wait_pane

0x3224,	// (0x00005934) form2_midp_image_pane_ParamLimits

0x3224,	// (0x00005934) form2_midp_image_pane

0x323f,	// (0x0000594f) form2_midp_label_pane_ParamLimits

0x323f,	// (0x0000594f) form2_midp_label_pane

0x3258,	// (0x00005968) form2_midp_label_pane_cp_ParamLimits

0x3258,	// (0x00005968) form2_midp_label_pane_cp

0x3277,	// (0x00005987) form2_midp_string_pane_ParamLimits

0x3277,	// (0x00005987) form2_midp_string_pane

0x3289,	// (0x00005999) form2_midp_text_pane_ParamLimits

0x3289,	// (0x00005999) form2_midp_text_pane

0x32a2,	// (0x000059b2) form2_midp_time_pane

0x32b2,	// (0x000059c2) input_focus_pane_cp51_ParamLimits

0x32b2,	// (0x000059c2) input_focus_pane_cp51

0x32ca,	// (0x000059da) form2_midp_label_pane_t1_ParamLimits

0x32ca,	// (0x000059da) form2_midp_label_pane_t1

0x330a,	// (0x00005a1a) form2_mdip_text_pane_t1_ParamLimits

0x330a,	// (0x00005a1a) form2_mdip_text_pane_t1

0x3326,	// (0x00005a36) form2_midp_time_pane_t1

0x3341,	// (0x00005a51) form2_midp_gauge_slider_pane_t1

0x3353,	// (0x00005a63) form2_midp_gauge_slider_pane_t2

0x3365,	// (0x00005a75) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x00012214) form2_midp_gauge_slider_pane_t

0x3377,	// (0x00005a87) form2_midp_slider_pane

0x3383,	// (0x00005a93) form2_midp_gauge_wait_pane_t1

0x3391,	// (0x00005aa1) form2_midp_wait_pane_ParamLimits

0x3391,	// (0x00005aa1) form2_midp_wait_pane

0xed14,	// (0x00011424) list_single_2graphic_pane_cp4_ParamLimits

0xed14,	// (0x00011424) list_single_2graphic_pane_cp4

0x0d9c,	// (0x000034ac) list_single_midp_graphic_pane_cp_ParamLimits

0x0d9c,	// (0x000034ac) list_single_midp_graphic_pane_cp

0xd721,	// (0x0000fe31) list_highlight_pane_cp20

0x33bc,	// (0x00005acc) list_single_2graphic_pane_g1_cp4

0x245b,	// (0x00004b6b) list_single_2graphic_pane_g2_cp4

0x33c4,	// (0x00005ad4) list_single_2graphic_pane_t1_cp4

0xd801,	// (0x0000ff11) list_highlight_pane_cp21

0x33d3,	// (0x00005ae3) list_single_midp_graphic_pane_g4_cp

0x33e2,	// (0x00005af2) list_single_midp_graphic_pane_t1_cp

0x33f7,	// (0x00005b07) form2_mdip_string_pane_t1_ParamLimits

0x33f7,	// (0x00005b07) form2_mdip_string_pane_t1

0xd721,	// (0x0000fe31) bg_wml_button_pane_cp2

0xd63a,	// (0x0000fd4a) form2_midp_image_pane_g1

0xe22c,	// (0x0001093c) list_double_large_graphic_pane_g5_ParamLimits

0xe22c,	// (0x0001093c) list_double_large_graphic_pane_g5

0xf2ac,	// (0x000119bc) midp_form_pane_ParamLimits

0xd801,	// (0x0000ff11) main_apps_wheel_pane_ParamLimits

0x040a,	// (0x00002b1a) popup_preview_window_ParamLimits

0x040a,	// (0x00002b1a) popup_preview_window

0x0585,	// (0x00002c95) popup_touch_info_window_ParamLimits

0x0585,	// (0x00002c95) popup_touch_info_window

0x05a3,	// (0x00002cb3) popup_touch_menu_window_ParamLimits

0x05a3,	// (0x00002cb3) popup_touch_menu_window

0xd630,	// (0x0000fd40) bg_popup_sub_pane_cp6

0x346f,	// (0x00005b7f) list_touch_menu_pane

0x3477,	// (0x00005b87) list_single_touch_menu_pane_ParamLimits

0x3477,	// (0x00005b87) list_single_touch_menu_pane

0x348e,	// (0x00005b9e) list_single_touch_menu_pane_t1

0xd801,	// (0x0000ff11) bg_popup_sub_pane_cp7_ParamLimits

0xd801,	// (0x0000ff11) bg_popup_sub_pane_cp7

0x349c,	// (0x00005bac) heading_sub_pane

0x34a4,	// (0x00005bb4) list_touch_info_pane_ParamLimits

0x34a4,	// (0x00005bb4) list_touch_info_pane

0x34b3,	// (0x00005bc3) list_single_touch_info_pane_ParamLimits

0x34b3,	// (0x00005bc3) list_single_touch_info_pane

0x34c4,	// (0x00005bd4) list_single_touch_info_pane_t1

0x34d2,	// (0x00005be2) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x00012222) list_single_touch_info_pane_t

0xf2a4,	// (0x000119b4) bg_popup_heading_pane_cp

0x34e0,	// (0x00005bf0) heading_sub_pane_t1

0x0c7c,	// (0x0000338c) bg_popup_preview_window_pane_cp_ParamLimits

0x0c7c,	// (0x0000338c) bg_popup_preview_window_pane_cp

0x349c,	// (0x00005bac) heading_preview_pane

0x34a4,	// (0x00005bb4) list_preview_pane_ParamLimits

0x34a4,	// (0x00005bb4) list_preview_pane

0x34ee,	// (0x00005bfe) popup_preview_window_g1

0x34b3,	// (0x00005bc3) list_single_preview_pane_ParamLimits

0x34b3,	// (0x00005bc3) list_single_preview_pane

0x34f6,	// (0x00005c06) list_single_preview_pane_g1

0x34fe,	// (0x00005c0e) list_single_preview_pane_t1

0x34c4,	// (0x00005bd4) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x00012227) list_single_preview_pane_t

0x350c,	// (0x00005c1c) bg_popup_heading_pane_cp2_ParamLimits

0x350c,	// (0x00005c1c) bg_popup_heading_pane_cp2

0x3522,	// (0x00005c32) heading_preview_pane_g1

0x352a,	// (0x00005c3a) heading_preview_pane_t1_ParamLimits

0x352a,	// (0x00005c3a) heading_preview_pane_t1

0xd904,	// (0x00010014) soft_indicator_pane_t1_ParamLimits

0xdf6d,	// (0x0001067d) scroll_pane_ParamLimits

0xeb06,	// (0x00011216) scroll_sc2_left_pane

0xeb0f,	// (0x0001121f) scroll_sc2_right_pane

0xeb2e,	// (0x0001123e) scroll_bg_pane_g1_ParamLimits

0xeb43,	// (0x00011253) scroll_bg_pane_g2_ParamLimits

0xeb5b,	// (0x0001126b) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00011e32) scroll_bg_pane_g_ParamLimits

0xeb2e,	// (0x0001123e) scroll_handle_pane_g1_ParamLimits

0xeb7d,	// (0x0001128d) scroll_handle_pane_g2_ParamLimits

0xeb5b,	// (0x0001126b) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00011e39) scroll_handle_pane_g_ParamLimits

0x0152,	// (0x00002862) popup_choice_list_window_ParamLimits

0x0152,	// (0x00002862) popup_choice_list_window

0x0a21,	// (0x00003131) choice_list_pane

0x0abe,	// (0x000031ce) cell_toolbar_pane_t1

0x0ae6,	// (0x000031f6) toolbar_button_pane_ParamLimits

0x1d9f,	// (0x000044af) ai_gene_pane_1_t2_ParamLimits

0x1d9f,	// (0x000044af) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x0001204a) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x0001204a) ai_gene_pane_1_t

0x3547,	// (0x00005c57) scroll_sc2_left_pane_g1

0x3547,	// (0x00005c57) scroll_sc2_right_pane_g1

0x0124,	// (0x00002834) bg_popup_sub_pane_cp10

0x3551,	// (0x00005c61) list_choice_list_pane

0x3568,	// (0x00005c78) list_single_choice_list_pane_ParamLimits

0x3568,	// (0x00005c78) list_single_choice_list_pane

0x357c,	// (0x00005c8c) list_single_choice_list_pane_g1

0xe802,	// (0x00010f12) list_single_choice_list_pane_t1_ParamLimits

0xe802,	// (0x00010f12) list_single_choice_list_pane_t1

0x3584,	// (0x00005c94) choice_list_pane_g1

0x358c,	// (0x00005c9c) choice_list_pane_t1

0xd630,	// (0x0000fd40) input_focus_pane_cp11

0xe9e6,	// (0x000110f6) title_pane_stacon_g2_ParamLimits

0xe9e6,	// (0x000110f6) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00011e18) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00011e18) title_pane_stacon_g

0xf2a4,	// (0x000119b4) cursor_press_pane

0x01ee,	// (0x000028fe) popup_fep_hwr_window_ParamLimits

0x01ee,	// (0x000028fe) popup_fep_hwr_window

0x024a,	// (0x0000295a) popup_fep_vkb_window_ParamLimits

0x024a,	// (0x0000295a) popup_fep_vkb_window

0x359a,	// (0x00005caa) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x00012250) fep_vkb_side_pane_g_ParamLimits

0xca44,	// (0x0000f154) fep_hwr_candidate_pane_ParamLimits

0xca44,	// (0x0000f154) fep_hwr_candidate_pane

0xca6c,	// (0x0000f17c) fep_hwr_side_pane_ParamLimits

0xca6c,	// (0x0000f17c) fep_hwr_side_pane

0xca8c,	// (0x0000f19c) fep_hwr_top_pane_ParamLimits

0xca8c,	// (0x0000f19c) fep_hwr_top_pane

0xcaa4,	// (0x0000f1b4) fep_hwr_write_pane_ParamLimits

0xcaa4,	// (0x0000f1b4) fep_hwr_write_pane

0xfb40,	// (0x00012250) fep_vkb_side_pane_g

0x3683,	// (0x00005d93) fep_hwr_top_pane_g1

0x3671,	// (0x00005d81) fep_hwr_top_pane_g2

0xcade,	// (0x0000f1ee) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x0001222c) fep_hwr_top_pane_g

0xcaf3,	// (0x0000f203) fep_hwr_top_text_pane

0xecd2,	// (0x000113e2) fep_hwr_top_text_pane_g1

0x3782,	// (0x00005e92) fep_hwr_top_text_pane_t1

0xcbe1,	// (0x0000f2f1) fep_hwr_candidate_pane_g1

0x3a00,	// (0x00006110) fep_vkb_keypad_pane_g3_ParamLimits

0x3a00,	// (0x00006110) fep_vkb_keypad_pane_g3

0x3a22,	// (0x00006132) fep_vkb_keypad_pane_g4_ParamLimits

0x3a22,	// (0x00006132) fep_vkb_keypad_pane_g4

0x3a91,	// (0x000061a1) fep_vkb_bottom_pane_g2_ParamLimits

0x3a91,	// (0x000061a1) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x00012257) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x00012257) fep_vkb_bottom_pane_g

0x3547,	// (0x00005c57) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x00012261) cell_vkb_side_pane_g

0x3b1c,	// (0x0000622c) cell_vkb_side_pane_t1

0x3b2a,	// (0x0000623a) cell_vkb_side_pane_t1_copy1

0x3547,	// (0x00005c57) bg_fep_vkb_candidate_pane_g2

0x3c4e,	// (0x0000635e) cell_vkb_candidate_pane_ParamLimits

0x37fe,	// (0x00005f0e) aid_size_cell_vkb_ParamLimits

0x37fe,	// (0x00005f0e) aid_size_cell_vkb

0x3c4e,	// (0x0000635e) cell_vkb_candidate_pane

0xcc08,	// (0x0000f318) bg_popup_fep_shadow_pane_g1

0x3874,	// (0x00005f84) fep_vkb_bottom_pane_ParamLimits

0x3874,	// (0x00005f84) fep_vkb_bottom_pane

0x38b1,	// (0x00005fc1) fep_vkb_candidate_pane_ParamLimits

0x38b1,	// (0x00005fc1) fep_vkb_candidate_pane

0x38cd,	// (0x00005fdd) fep_vkb_keypad_pane_ParamLimits

0x38cd,	// (0x00005fdd) fep_vkb_keypad_pane

0x3901,	// (0x00006011) fep_vkb_side_pane_ParamLimits

0x3901,	// (0x00006011) fep_vkb_side_pane

0x392d,	// (0x0000603d) fep_vkb_top_pane_ParamLimits

0x392d,	// (0x0000603d) fep_vkb_top_pane

0x3959,	// (0x00006069) fep_vkb_top_pane_g1_ParamLimits

0x3959,	// (0x00006069) fep_vkb_top_pane_g1

0x3968,	// (0x00006078) fep_vkb_top_pane_g2_ParamLimits

0x3968,	// (0x00006078) fep_vkb_top_pane_g2

0x3977,	// (0x00006087) fep_vkb_top_pane_g3_ParamLimits

0x3977,	// (0x00006087) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x00012247) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x00012247) fep_vkb_top_pane_g

0x3995,	// (0x000060a5) fep_vkb_top_text_pane_ParamLimits

0x3995,	// (0x000060a5) fep_vkb_top_text_pane

0x39a6,	// (0x000060b6) fep_vkb_side_pane_g1_ParamLimits

0x39a6,	// (0x000060b6) fep_vkb_side_pane_g1

0x39ef,	// (0x000060ff) grid_vkb_side_pane_ParamLimits

0x39ef,	// (0x000060ff) grid_vkb_side_pane

0xcc10,	// (0x0000f320) bg_popup_fep_shadow_pane_g2

0xcc19,	// (0x0000f329) bg_popup_fep_shadow_pane_g3

0xcc21,	// (0x0000f331) bg_popup_fep_shadow_pane_g4

0xcc2a,	// (0x0000f33a) bg_popup_fep_shadow_pane_g5

0xcc32,	// (0x0000f342) bg_popup_fep_shadow_pane_g6

0xcc3a,	// (0x0000f34a) bg_popup_fep_shadow_pane_g7

0xe655,	// (0x00010d65) bg_popup_fep_shadow_pane_g8

0x3a40,	// (0x00006150) grid_vkb_keypad_number_pane_ParamLimits

0x3a40,	// (0x00006150) grid_vkb_keypad_number_pane

0x3a50,	// (0x00006160) grid_vkb_keypad_pane_ParamLimits

0x3a50,	// (0x00006160) grid_vkb_keypad_pane

0x3a76,	// (0x00006186) fep_vkb_bottom_pane_g1_ParamLimits

0x3a76,	// (0x00006186) fep_vkb_bottom_pane_g1

0x3a9f,	// (0x000061af) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x3a9f,	// (0x000061af) grid_vkb_keypad_bottom_left_pane

0x3ab4,	// (0x000061c4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3ab4,	// (0x000061c4) grid_vkb_keypad_bottom_right_pane

0x3ac9,	// (0x000061d9) fep_vkb_top_text_pane_g1

0x3ae4,	// (0x000061f4) fep_vkb_top_text_pane_t1

0x3af9,	// (0x00006209) cell_vkb_side_pane_ParamLimits

0x3af9,	// (0x00006209) cell_vkb_side_pane

0x3547,	// (0x00005c57) cell_vkb_side_pane_g1

0x3b38,	// (0x00006248) cell_vkb_keypad_pane_ParamLimits

0x3b38,	// (0x00006248) cell_vkb_keypad_pane

0x3ba5,	// (0x000062b5) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x00012274) bg_popup_fep_shadow_pane_g

0xcc4a,	// (0x0000f35a) cell_hwr_side_pane_g1

0xcc4a,	// (0x0000f35a) cell_hwr_side_pane_g2

0x3baf,	// (0x000062bf) cell_vkb_keypad_pane_t1

0x3bbd,	// (0x000062cd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x3bbd,	// (0x000062cd) cell_vkb_keypad_bottom_left_pane

0x3bda,	// (0x000062ea) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x3bda,	// (0x000062ea) cell_vkb_keypad_bottom_right_pane

0x3547,	// (0x00005c57) cell_vkb_keypad_bottom_left_pane_g1

0x3547,	// (0x00005c57) cell_vkb_keypad_bottom_right_pane_g1

0x3c13,	// (0x00006323) cell_vkb_keypad_number_pane_ParamLimits

0x3c13,	// (0x00006323) cell_vkb_keypad_number_pane

0x3c32,	// (0x00006342) cell_vkb_keypad_number_pane_g1

0x3c3c,	// (0x0000634c) cell_vkb_keypad_number_pane_g2

0x3c45,	// (0x00006355) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x00012266) cell_vkb_keypad_number_pane_g

0x3baf,	// (0x000062bf) cell_vkb_keypad_number_pane_t1

0x3c67,	// (0x00006377) fep_vkb_candidate_pane_g1

0x0001,

0xfb77,	// (0x00012287) cell_hwr_side_pane_g

0x3cc2,	// (0x000063d2) cell_hwr_side_pane_t1

0xcc54,	// (0x0000f364) cell_hwr_side_pane_t1_copy1

0xcc62,	// (0x0000f372) cell_hwr_candidate_pane_g1

0xcc91,	// (0x0000f3a1) cell_hwr_candidate_pane_t1

0x3547,	// (0x00005c57) cell_vkb_candidate_pane_g2

0x3d73,	// (0x00006483) cell_vkb_candidate_pane_t1

0xca0f,	// (0x0000f11f) bg_popup_fep_shadow_pane_ParamLimits

0xca0f,	// (0x0000f11f) bg_popup_fep_shadow_pane

0xcabe,	// (0x0000f1ce) bg_fep_hwr_top_pane_g4

0x36bf,	// (0x00005dcf) bg_hwr_side_pane_g1_ParamLimits

0x36bf,	// (0x00005dcf) bg_hwr_side_pane_g1

0xcb2f,	// (0x0000f23f) cell_hwr_side_pane_ParamLimits

0xcb2f,	// (0x0000f23f) cell_hwr_side_pane

0xcb6a,	// (0x0000f27a) fep_hwr_write_pane_g1_ParamLimits

0xcb6a,	// (0x0000f27a) fep_hwr_write_pane_g1

0xcb77,	// (0x0000f287) fep_hwr_write_pane_g2_ParamLimits

0xcb77,	// (0x0000f287) fep_hwr_write_pane_g2

0xcb84,	// (0x0000f294) fep_hwr_write_pane_g3_ParamLimits

0xcb84,	// (0x0000f294) fep_hwr_write_pane_g3

0xcb92,	// (0x0000f2a2) fep_hwr_write_pane_g4_ParamLimits

0xcb92,	// (0x0000f2a2) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x00012233) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x00012233) fep_hwr_write_pane_g

0xcabe,	// (0x0000f1ce) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcabe,	// (0x0000f1ce) bg_fep_hwr_candidate_pane_g2

0xcba7,	// (0x0000f2b7) cell_hwr_candidate_pane_ParamLimits

0xcba7,	// (0x0000f2b7) cell_hwr_candidate_pane

0xcbe1,	// (0x0000f2f1) fep_hwr_candidate_pane_g1_ParamLimits

0x382c,	// (0x00005f3c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x382c,	// (0x00005f3c) bg_popup_fep_shadow_pane_cp2

0x3987,	// (0x00006097) fep_vkb_top_pane_g4_ParamLimits

0x3987,	// (0x00006097) fep_vkb_top_pane_g4

0x39cd,	// (0x000060dd) fep_vkb_side_pane_g2_ParamLimits

0x39cd,	// (0x000060dd) fep_vkb_side_pane_g2

0xe35c,	// (0x00010a6c) list_setting_pane_t4_ParamLimits

0xe35c,	// (0x00010a6c) list_setting_pane_t4

0xe3d2,	// (0x00010ae2) list_setting_number_pane_t5_ParamLimits

0xe3d2,	// (0x00010ae2) list_setting_number_pane_t5

0xed04,	// (0x00011414) list_double_heading_pane_cp2_ParamLimits

0xed04,	// (0x00011414) list_double_heading_pane_cp2

0xf119,	// (0x00011829) list_double_heading_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011829) list_double_heading_pane_g1_cp2

0x3d81,	// (0x00006491) list_double_heading_pane_g2_cp2_ParamLimits

0x3d81,	// (0x00006491) list_double_heading_pane_g2_cp2

0x3d95,	// (0x000064a5) list_double_heading_pane_t1_cp2_ParamLimits

0x3d95,	// (0x000064a5) list_double_heading_pane_t1_cp2

0x3dab,	// (0x000064bb) list_double_heading_pane_t2_cp2_ParamLimits

0x3dab,	// (0x000064bb) list_double_heading_pane_t2_cp2

0xd61a,	// (0x0000fd2a) aid_value_unit2

0xbe36,	// (0x0000e546) popup_preview_fixed_window

0xdad4,	// (0x000101e4) bg_popup_preview_window_pane_cp02

0x3dbd,	// (0x000064cd) list_preview_fixed_pane

0x3e03,	// (0x00006513) list_empty_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_empty_pane_fp

0x3e03,	// (0x00006513) list_single_cale_day_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_single_cale_day_pane_fp

0x3e03,	// (0x00006513) list_single_graphic_heading_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_single_graphic_heading_pane_fp

0x3e03,	// (0x00006513) list_single_graphic_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_single_graphic_pane_fp

0x3e03,	// (0x00006513) list_single_heading_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_single_heading_pane_fp

0x3e03,	// (0x00006513) list_single_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_single_pane_fp

0x3e17,	// (0x00006527) list_single_pane_fp_g1_ParamLimits

0x3e17,	// (0x00006527) list_single_pane_fp_g1

0xe1af,	// (0x000108bf) list_single_pane_fp_g2_ParamLimits

0xe1af,	// (0x000108bf) list_single_pane_fp_g2

0x3e23,	// (0x00006533) list_single_pane_fp_g3_ParamLimits

0x3e23,	// (0x00006533) list_single_pane_fp_g3

0x3e37,	// (0x00006547) list_single_pane_fp_g4_ParamLimits

0x3e37,	// (0x00006547) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x0001229a) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001229a) list_single_pane_fp_g

0x3e43,	// (0x00006553) list_single_pane_fp_t1_ParamLimits

0x3e43,	// (0x00006553) list_single_pane_fp_t1

0x3e5a,	// (0x0000656a) list_single_graphic_pane_fp_g1_ParamLimits

0x3e5a,	// (0x0000656a) list_single_graphic_pane_fp_g1

0x3e17,	// (0x00006527) list_single_graphic_pane_fp_g2_ParamLimits

0x3e17,	// (0x00006527) list_single_graphic_pane_fp_g2

0xe1af,	// (0x000108bf) list_single_graphic_pane_fp_g3_ParamLimits

0xe1af,	// (0x000108bf) list_single_graphic_pane_fp_g3

0x3e23,	// (0x00006533) list_single_graphic_pane_fp_g4_ParamLimits

0x3e23,	// (0x00006533) list_single_graphic_pane_fp_g4

0x3e37,	// (0x00006547) list_single_graphic_pane_fp_g5_ParamLimits

0x3e37,	// (0x00006547) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x000122a3) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x000122a3) list_single_graphic_pane_fp_g

0x3e66,	// (0x00006576) list_single_graphic_pane_fp_t1_ParamLimits

0x3e66,	// (0x00006576) list_single_graphic_pane_fp_t1

0x3e5a,	// (0x0000656a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3e5a,	// (0x0000656a) list_single_graphic_heading_pane_fp_g1

0x3e17,	// (0x00006527) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x3e17,	// (0x00006527) list_single_graphic_heading_pane_fp_g2

0xe1af,	// (0x000108bf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe1af,	// (0x000108bf) list_single_graphic_heading_pane_fp_g3

0x3e23,	// (0x00006533) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3e23,	// (0x00006533) list_single_graphic_heading_pane_fp_g4

0x3e37,	// (0x00006547) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x3e37,	// (0x00006547) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000122a3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000122a3) list_single_graphic_heading_pane_fp_g

0x3e7c,	// (0x0000658c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3e7c,	// (0x0000658c) list_single_graphic_heading_pane_fp_t1

0x3e92,	// (0x000065a2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3e92,	// (0x000065a2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x000122ae) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x000122ae) list_single_graphic_heading_pane_fp_t

0x3ea4,	// (0x000065b4) list_single_cale_day_pane_fp_g1_ParamLimits

0x3ea4,	// (0x000065b4) list_single_cale_day_pane_fp_g1

0x3edc,	// (0x000065ec) list_single_cale_day_pane_fp_g2_ParamLimits

0x3edc,	// (0x000065ec) list_single_cale_day_pane_fp_g2

0x3ee8,	// (0x000065f8) list_single_cale_day_pane_fp_g3_ParamLimits

0x3ee8,	// (0x000065f8) list_single_cale_day_pane_fp_g3

0x3f10,	// (0x00006620) list_single_cale_day_pane_fp_g4_ParamLimits

0x3f10,	// (0x00006620) list_single_cale_day_pane_fp_g4

0x3f34,	// (0x00006644) list_single_cale_day_pane_fp_g5_ParamLimits

0x3f34,	// (0x00006644) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x000122b3) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x000122b3) list_single_cale_day_pane_fp_g

0x3f58,	// (0x00006668) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f58,	// (0x00006668) list_single_cale_day_pane_fp_t1

0x3f7e,	// (0x0000668e) list_single_cale_day_pane_fp_t2_ParamLimits

0x3f7e,	// (0x0000668e) list_single_cale_day_pane_fp_t2

0x3f97,	// (0x000066a7) list_single_cale_day_pane_fp_t3_ParamLimits

0x3f97,	// (0x000066a7) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x000122be) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x000122be) list_single_cale_day_pane_fp_t

0x3e17,	// (0x00006527) list_empty_pane_fp_g1_ParamLimits

0x3e17,	// (0x00006527) list_empty_pane_fp_g1

0x3fb0,	// (0x000066c0) list_empty_pane_fp_t1

0x3fbe,	// (0x000066ce) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x000122c5) list_empty_pane_fp_t

0x3e17,	// (0x00006527) list_single_heading_pane_fp_g1_ParamLimits

0x3e17,	// (0x00006527) list_single_heading_pane_fp_g1

0xe1af,	// (0x000108bf) list_single_heading_pane_fp_g2_ParamLimits

0xe1af,	// (0x000108bf) list_single_heading_pane_fp_g2

0x3e23,	// (0x00006533) list_single_heading_pane_fp_g3_ParamLimits

0x3e23,	// (0x00006533) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x000122ca) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x000122ca) list_single_heading_pane_fp_g

0x3fcc,	// (0x000066dc) list_single_heading_pane_fp_t1_ParamLimits

0x3fcc,	// (0x000066dc) list_single_heading_pane_fp_t1

0x3fde,	// (0x000066ee) list_single_heading_pane_fp_t2_ParamLimits

0x3fde,	// (0x000066ee) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x000122d1) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x000122d1) list_single_heading_pane_fp_t

0xe870,	// (0x00010f80) aid_size_cell_fast

0xda0f,	// (0x0001011f) soft_indicator_pane_cp1_t1

0xe8ad,	// (0x00010fbd) cell_app_pane_cp2_ParamLimits

0xe8ad,	// (0x00010fbd) cell_app_pane_cp2

0xca31,	// (0x0000f141) fep_hwr_candidate_drop_down_list_pane

0xcbfb,	// (0x0000f30b) fep_hwr_candidate_pane_g3_ParamLimits

0xcbfb,	// (0x0000f30b) fep_hwr_candidate_pane_g3

0xb1b7,	// (0x0000d8c7) fep_hwr_candidate_pane_g4_ParamLimits

0xb1b7,	// (0x0000d8c7) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x00012240) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x00012240) fep_hwr_candidate_pane_g

0x38a0,	// (0x00005fb0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x38a0,	// (0x00005fb0) fep_vkb_candidate_drop_down_list_pane

0x3c6f,	// (0x0000637f) fep_vkb_candidate_pane_g3

0x3c77,	// (0x00006387) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x0001226d) fep_vkb_candidate_pane_g

0xcc62,	// (0x0000f372) cell_hwr_candidate_pane_g1_ParamLimits

0xcc70,	// (0x0000f380) cell_hwr_candidate_pane_g3_ParamLimits

0xcc70,	// (0x0000f380) cell_hwr_candidate_pane_g3

0x642c,	// (0x00008b3c) cell_hwr_candidate_pane_g4_ParamLimits

0x642c,	// (0x00008b3c) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x0001228c) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x0001228c) cell_hwr_candidate_pane_g

0x3d3d,	// (0x0000644d) cell_vkb_candidate_pane_g3_ParamLimits

0x3d3d,	// (0x0000644d) cell_vkb_candidate_pane_g3

0x3d58,	// (0x00006468) cell_vkb_candidate_pane_g4_ParamLimits

0x3d58,	// (0x00006468) cell_vkb_candidate_pane_g4

0x3ff4,	// (0x00006704) cell_app_pane_cp2_g1_ParamLimits

0x3ff4,	// (0x00006704) cell_app_pane_cp2_g1

0x4012,	// (0x00006722) cell_app_pane_cp2_g2_ParamLimits

0x4012,	// (0x00006722) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x000122d6) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x000122d6) cell_app_pane_cp2_g

0x401e,	// (0x0000672e) cell_app_pane_cp2_t1_ParamLimits

0x401e,	// (0x0000672e) cell_app_pane_cp2_t1

0xe517,	// (0x00010c27) grid_highlight_pane_cp1_ParamLimits

0xe517,	// (0x00010c27) grid_highlight_pane_cp1

0xccae,	// (0x0000f3be) cell_hwr_candidate_pane_cp1_ParamLimits

0xccae,	// (0x0000f3be) cell_hwr_candidate_pane_cp1

0xcc62,	// (0x0000f372) fep_hwr_candidate_drop_down_list_pane_g1

0xcccc,	// (0x0000f3dc) fep_hwr_candidate_drop_down_list_pane_g2

0xccd9,	// (0x0000f3e9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x000122db) fep_hwr_candidate_drop_down_list_pane_g

0xcce6,	// (0x0000f3f6) fep_hwr_candidate_drop_down_list_scroll_pane

0xccef,	// (0x0000f3ff) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xccef,	// (0x0000f3ff) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xccfc,	// (0x0000f40c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xccfc,	// (0x0000f40c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xcd09,	// (0x0000f419) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xcd09,	// (0x0000f419) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xcd16,	// (0x0000f426) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcd16,	// (0x0000f426) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xcd31,	// (0x0000f441) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcd31,	// (0x0000f441) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xcd4c,	// (0x0000f45c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcd4c,	// (0x0000f45c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xcd67,	// (0x0000f477) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcd67,	// (0x0000f477) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xcd82,	// (0x0000f492) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcd82,	// (0x0000f492) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x000122e2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x000122e2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x40e9,	// (0x000067f9) cell_vkb_candidate_pane_cp1_ParamLimits

0x40e9,	// (0x000067f9) cell_vkb_candidate_pane_cp1

0x3987,	// (0x00006097) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3987,	// (0x00006097) fep_vkb_candidate_drop_down_list_pane_g1

0x404e,	// (0x0000675e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x404e,	// (0x0000675e) fep_vkb_candidate_drop_down_list_pane_g2

0x405b,	// (0x0000676b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x405b,	// (0x0000676b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x000122f3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe3,	// (0x000122f3) fep_vkb_candidate_drop_down_list_pane_g

0x410c,	// (0x0000681c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x410c,	// (0x0000681c) fep_vkb_candidate_drop_down_list_scroll_pane

0x4119,	// (0x00006829) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4119,	// (0x00006829) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4126,	// (0x00006836) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4126,	// (0x00006836) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4132,	// (0x00006842) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4132,	// (0x00006842) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x3cde,	// (0x000063ee) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3cde,	// (0x000063ee) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x3cff,	// (0x0000640f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3cff,	// (0x0000640f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x413e,	// (0x0000684e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x413e,	// (0x0000684e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x415f,	// (0x0000686f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x415f,	// (0x0000686f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4180,	// (0x00006890) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4180,	// (0x00006890) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x000122fa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x000122fa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd72b,	// (0x0000fe3b) title_pane_g1_ParamLimits

0xd738,	// (0x0000fe48) title_pane_g2_ParamLimits

0xf592,	// (0x00011ca2) title_pane_g_ParamLimits

0xecc2,	// (0x000113d2) aid_call2_pane

0xecca,	// (0x000113da) aid_call_pane

0xecd2,	// (0x000113e2) popup_clock_analogue_window_g1

0xecd2,	// (0x000113e2) popup_clock_analogue_window_g2

0xc110,	// (0x0000e820) popup_clock_analogue_window_g3

0xc119,	// (0x0000e829) popup_clock_analogue_window_g4

0xd63a,	// (0x0000fd4a) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00011e47) popup_clock_analogue_window_g

0xc121,	// (0x0000e831) popup_clock_analogue_window_t1

0xc12f,	// (0x0000e83f) clock_digital_number_pane_ParamLimits

0xc12f,	// (0x0000e83f) clock_digital_number_pane

0xc13b,	// (0x0000e84b) clock_digital_number_pane_cp02_ParamLimits

0xc13b,	// (0x0000e84b) clock_digital_number_pane_cp02

0xc147,	// (0x0000e857) clock_digital_number_pane_cp03_ParamLimits

0xc147,	// (0x0000e857) clock_digital_number_pane_cp03

0xc153,	// (0x0000e863) clock_digital_number_pane_cp04_ParamLimits

0xc153,	// (0x0000e863) clock_digital_number_pane_cp04

0xc15f,	// (0x0000e86f) clock_digital_separator_pane_ParamLimits

0xc15f,	// (0x0000e86f) clock_digital_separator_pane

0xc16b,	// (0x0000e87b) popup_clock_digital_window_t1_ParamLimits

0xc16b,	// (0x0000e87b) popup_clock_digital_window_t1

0xd63a,	// (0x0000fd4a) clock_digital_number_pane_g1

0xd63a,	// (0x0000fd4a) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00011e52) clock_digital_number_pane_g

0xd63a,	// (0x0000fd4a) clock_digital_separator_pane_g1

0xd63a,	// (0x0000fd4a) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00011e52) clock_digital_separator_pane_g

0x05da,	// (0x00002cea) aid_fill_nsta_ParamLimits

0x06fc,	// (0x00002e0c) indicator_nsta_pane_ParamLimits

0x086f,	// (0x00002f7f) popup_clock_analogue_window

0x086f,	// (0x00002f7f) popup_clock_digital_window

0xd801,	// (0x0000ff11) grid_indicator_nsta_pane_ParamLimits

0x2f9d,	// (0x000056ad) clock_nsta_pane_t2

0x0001,

0xfabd,	// (0x000121cd) clock_nsta_pane_t

0xc0d4,	// (0x0000e7e4) aid_size_max_handle

0xc0de,	// (0x0000e7ee) aid_size_min_handle

0xf2a4,	// (0x000119b4) editor_scroll_pane

0x419b,	// (0x000068ab) ex_editor_pane

0xe7de,	// (0x00010eee) scroll_pane_cp13

0xdf9a,	// (0x000106aa) scroll_pane_cp14

0xecfc,	// (0x0001140c) scroll_pane_cp36

0xed14,	// (0x00011424) list_single_graphic_hl_pane_cp2_ParamLimits

0xed14,	// (0x00011424) list_single_graphic_hl_pane_cp2

0x239e,	// (0x00004aae) list_single_graphic_hl_pane_ParamLimits

0x239e,	// (0x00004aae) list_single_graphic_hl_pane

0x41a3,	// (0x000068b3) aid_size_min_hl_cp1

0x41ac,	// (0x000068bc) list_highlight_pane_cp34_ParamLimits

0x41ac,	// (0x000068bc) list_highlight_pane_cp34

0x41bd,	// (0x000068cd) list_single_graphic_hl_pane_g1_ParamLimits

0x41bd,	// (0x000068cd) list_single_graphic_hl_pane_g1

0x41ca,	// (0x000068da) list_single_graphic_hl_pane_g2_ParamLimits

0x41ca,	// (0x000068da) list_single_graphic_hl_pane_g2

0x41ca,	// (0x000068da) list_single_graphic_hl_pane_g3_ParamLimits

0x41ca,	// (0x000068da) list_single_graphic_hl_pane_g3

0xf119,	// (0x00011829) list_single_graphic_hl_pane_g4_ParamLimits

0xf119,	// (0x00011829) list_single_graphic_hl_pane_g4

0x3d81,	// (0x00006491) list_single_graphic_hl_pane_g5_ParamLimits

0x3d81,	// (0x00006491) list_single_graphic_hl_pane_g5

0x0004,

0xfbfb,	// (0x0001230b) list_single_graphic_hl_pane_g_ParamLimits

0xfbfb,	// (0x0001230b) list_single_graphic_hl_pane_g

0x41d6,	// (0x000068e6) list_single_graphic_hl_pane_t1_ParamLimits

0x41d6,	// (0x000068e6) list_single_graphic_hl_pane_t1

0x41ec,	// (0x000068fc) aid_size_min_hl_cp2

0x41f5,	// (0x00006905) list_highlight_pane_cp34_cp2_ParamLimits

0x41f5,	// (0x00006905) list_highlight_pane_cp34_cp2

0x41bd,	// (0x000068cd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x41bd,	// (0x000068cd) list_single_graphic_hl_pane_g1_cp2

0x4202,	// (0x00006912) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4202,	// (0x00006912) list_single_graphic_hl_pane_g2_cp2

0x420e,	// (0x0000691e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x420e,	// (0x0000691e) list_single_graphic_hl_pane_g3_cp2

0xf119,	// (0x00011829) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf119,	// (0x00011829) list_single_graphic_hl_pane_g4_cp2

0x3d81,	// (0x00006491) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x3d81,	// (0x00006491) list_single_graphic_hl_pane_g5_cp2

0xc3f6,	// (0x0000eb06) control_pane_g4_ParamLimits

0xc3f6,	// (0x0000eb06) control_pane_g4

0x0124,	// (0x00002834) bg_popup_sub_pane_cp10_ParamLimits

0x3551,	// (0x00005c61) list_choice_list_pane_ParamLimits

0x3560,	// (0x00005c70) scroll_pane_cp23

0xdad4,	// (0x000101e4) bg_popup_preview_window_pane_cp02_ParamLimits

0x3dbd,	// (0x000064cd) list_preview_fixed_pane_ParamLimits

0x3dd3,	// (0x000064e3) list_preview_fixed_pane_cp_ParamLimits

0x3dd3,	// (0x000064e3) list_preview_fixed_pane_cp

0x3ddf,	// (0x000064ef) popup_preview_fixed_window_g1_ParamLimits

0x3ddf,	// (0x000064ef) popup_preview_fixed_window_g1

0x3deb,	// (0x000064fb) popup_preview_fixed_window_g2_ParamLimits

0x3deb,	// (0x000064fb) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x00012293) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x00012293) popup_preview_fixed_window_g

0xc064,	// (0x0000e774) aid_navi_side_left_pane_ParamLimits

0xc074,	// (0x0000e784) aid_navi_side_right_pane_ParamLimits

0xc083,	// (0x0000e793) navi_icon_pane_stacon_ParamLimits

0xc093,	// (0x0000e7a3) navi_navi_pane_stacon_ParamLimits

0xc083,	// (0x0000e793) navi_text_pane_stacon_ParamLimits

0xd630,	// (0x0000fd40) main_text_info_pane

0x4230,	// (0x00006940) listscroll_text_info_pane

0x4238,	// (0x00006948) list_text_info_pane_ParamLimits

0x4238,	// (0x00006948) list_text_info_pane

0x4247,	// (0x00006957) scroll_pane_cp24_ParamLimits

0x4247,	// (0x00006957) scroll_pane_cp24

0x4265,	// (0x00006975) list_text_info_pane_t1_ParamLimits

0x4265,	// (0x00006975) list_text_info_pane_t1

0x016c,	// (0x0000287c) popup_fast_swap2_window_ParamLimits

0x016c,	// (0x0000287c) popup_fast_swap2_window

0x4282,	// (0x00006992) aid_size_cell_fast2

0xd630,	// (0x0000fd40) bg_popup_window_pane_cp17

0x108f,	// (0x0000379f) heading_pane_cp2

0xdd1c,	// (0x0001042c) listscroll_fast2_pane

0x428c,	// (0x0000699c) grid_fast2_pane

0x4294,	// (0x000069a4) listscroll_fast2_pane_g1

0x429c,	// (0x000069ac) listscroll_fast2_pane_g2

0x0001,

0xfc06,	// (0x00012316) listscroll_fast2_pane_g

0xe7de,	// (0x00010eee) scroll_pane_cp26

0x42a4,	// (0x000069b4) cell_fast2_pane_ParamLimits

0x42a4,	// (0x000069b4) cell_fast2_pane

0x42ba,	// (0x000069ca) cell_fast2_pane_g1

0x42c3,	// (0x000069d3) cell_fast2_pane_g2

0x42cc,	// (0x000069dc) cell_fast2_pane_g3

0x0002,

0xfc0b,	// (0x0001231b) cell_fast2_pane_g

0xddf3,	// (0x00010503) grid_highlight_pane_cp9

0xde08,	// (0x00010518) main_eswt_pane_ParamLimits

0xde08,	// (0x00010518) main_eswt_pane

0x425c,	// (0x0000696c) list_single_text_info_pane

0x42d4,	// (0x000069e4) eswt_ctrl_button_pane

0x42d4,	// (0x000069e4) eswt_ctrl_canvas_pane

0x42dc,	// (0x000069ec) eswt_ctrl_combo_pane

0x42d4,	// (0x000069e4) eswt_ctrl_default_pane

0x42d4,	// (0x000069e4) eswt_ctrl_label_pane

0x42e4,	// (0x000069f4) eswt_ctrl_wait_pane

0x42ec,	// (0x000069fc) eswt_shell_pane

0xd630,	// (0x0000fd40) listscroll_eswt_app_pane

0x4308,	// (0x00006a18) popup_eswt_tasktip_window_ParamLimits

0x4308,	// (0x00006a18) popup_eswt_tasktip_window

0x0c7c,	// (0x0000338c) bg_popup_window_pane_cp18

0x4319,	// (0x00006a29) eswt_control_pane_g1_ParamLimits

0x4319,	// (0x00006a29) eswt_control_pane_g1

0x4326,	// (0x00006a36) eswt_control_pane_g2_ParamLimits

0x4326,	// (0x00006a36) eswt_control_pane_g2

0x4333,	// (0x00006a43) eswt_control_pane_g3_ParamLimits

0x4333,	// (0x00006a43) eswt_control_pane_g3

0x4340,	// (0x00006a50) eswt_control_pane_g4_ParamLimits

0x4340,	// (0x00006a50) eswt_control_pane_g4

0x0003,

0xfc12,	// (0x00012322) eswt_control_pane_g_ParamLimits

0xfc12,	// (0x00012322) eswt_control_pane_g

0xe517,	// (0x00010c27) bg_button_pane_ParamLimits

0xe517,	// (0x00010c27) bg_button_pane

0xde08,	// (0x00010518) common_borders_pane_copy2_ParamLimits

0xde08,	// (0x00010518) common_borders_pane_copy2

0x434d,	// (0x00006a5d) control_button_pane_g1_ParamLimits

0x434d,	// (0x00006a5d) control_button_pane_g1

0x4359,	// (0x00006a69) control_button_pane_g2_ParamLimits

0x4359,	// (0x00006a69) control_button_pane_g2

0x4365,	// (0x00006a75) control_button_pane_g3_ParamLimits

0x4365,	// (0x00006a75) control_button_pane_g3

0x0002,

0xfc1b,	// (0x0001232b) control_button_pane_g_ParamLimits

0xfc1b,	// (0x0001232b) control_button_pane_g

0x4379,	// (0x00006a89) control_button_pane_t1

0x4387,	// (0x00006a97) control_button_pane_t2

0x0001,

0xfc22,	// (0x00012332) control_button_pane_t

0x0af2,	// (0x00003202) bg_button_pane_g1

0x0afa,	// (0x0000320a) bg_button_pane_g2

0x0b02,	// (0x00003212) bg_button_pane_g3

0x0b0a,	// (0x0000321a) bg_button_pane_g4

0x0b12,	// (0x00003222) bg_button_pane_g5

0x0b1a,	// (0x0000322a) bg_button_pane_g6

0x0b22,	// (0x00003232) bg_button_pane_g7

0x0b2a,	// (0x0000323a) bg_button_pane_g8

0x0b32,	// (0x00003242) bg_button_pane_g9

0x0008,

0xf88e,	// (0x00011f9e) bg_button_pane_g

0x350c,	// (0x00005c1c) common_borders_pane_ParamLimits

0x350c,	// (0x00005c1c) common_borders_pane

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy1_ParamLimits

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy1

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy1_ParamLimits

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy1

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy1_ParamLimits

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy1

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy1_ParamLimits

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy1

0x3547,	// (0x00005c57) bg_eswt_ctrl_canvas_pane_g1

0x350c,	// (0x00005c1c) common_borders_pane_cp2_ParamLimits

0x350c,	// (0x00005c1c) common_borders_pane_cp2

0x350c,	// (0x00005c1c) common_borders_pane_cp3_ParamLimits

0x350c,	// (0x00005c1c) common_borders_pane_cp3

0x4395,	// (0x00006aa5) separator_horizontal_pane

0xeb0f,	// (0x0001121f) separator_vertical_pane

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy2_ParamLimits

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy2

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy2_ParamLimits

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy2

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy2_ParamLimits

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy2

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy2_ParamLimits

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy2

0xd630,	// (0x0000fd40) common_borders_pane_cp4

0x439d,	// (0x00006aad) separator_horizontal_pane_g1

0x43a6,	// (0x00006ab6) separator_horizontal_pane_g2

0x43af,	// (0x00006abf) separator_horizontal_pane_g3

0x0002,

0xfc27,	// (0x00012337) separator_horizontal_pane_g

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy3_ParamLimits

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy3

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy3_ParamLimits

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy3

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy3_ParamLimits

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy3

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy3_ParamLimits

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy3

0xd630,	// (0x0000fd40) common_borders_pane_cp5

0x43b8,	// (0x00006ac8) separator_vertical_pane_g1

0x43c1,	// (0x00006ad1) separator_vertical_pane_g2

0x43ca,	// (0x00006ada) separator_vertical_pane_g3

0x0002,

0xfc2e,	// (0x0001233e) separator_vertical_pane_g

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy4_ParamLimits

0x4319,	// (0x00006a29) eswt_control_pane_g1_copy4

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy4_ParamLimits

0x4326,	// (0x00006a36) eswt_control_pane_g2_copy4

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy4_ParamLimits

0x4333,	// (0x00006a43) eswt_control_pane_g3_copy4

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy4_ParamLimits

0x4340,	// (0x00006a50) eswt_control_pane_g4_copy4

0x43d3,	// (0x00006ae3) eswt_ctrl_combo_button_pane

0x43db,	// (0x00006aeb) eswt_ctrl_input_pane

0x43e3,	// (0x00006af3) popup_choice_list_window_cp70

0x43eb,	// (0x00006afb) eswt_ctrl_input_pane_t1

0xd630,	// (0x0000fd40) input_focus_pane_cp70

0x350c,	// (0x00005c1c) bg_button_pane_cp70_ParamLimits

0x350c,	// (0x00005c1c) bg_button_pane_cp70

0x43f9,	// (0x00006b09) eswt_ctrl_combo_button_pane_g1

0x4401,	// (0x00006b11) wait_bar_pane_cp70

0x0c7c,	// (0x0000338c) bg_popup_window_pane_cp70_ParamLimits

0x0c7c,	// (0x0000338c) bg_popup_window_pane_cp70

0x4409,	// (0x00006b19) popup_eswt_tasktip_window_t1

0x441f,	// (0x00006b2f) wait_bar_pane_cp71_ParamLimits

0x441f,	// (0x00006b2f) wait_bar_pane_cp71

0x442b,	// (0x00006b3b) grid_eswt_app_pane

0xeb06,	// (0x00011216) scroll_pane_cp70

0x4434,	// (0x00006b44) cell_eswt_app_pane_ParamLimits

0x4434,	// (0x00006b44) cell_eswt_app_pane

0x445c,	// (0x00006b6c) cell_eswt_app_pane_g1_ParamLimits

0x445c,	// (0x00006b6c) cell_eswt_app_pane_g1

0x448b,	// (0x00006b9b) cell_eswt_app_pane_g2_ParamLimits

0x448b,	// (0x00006b9b) cell_eswt_app_pane_g2

0x0001,

0xfc35,	// (0x00012345) cell_eswt_app_pane_g_ParamLimits

0xfc35,	// (0x00012345) cell_eswt_app_pane_g

0x44b4,	// (0x00006bc4) cell_eswt_app_pane_t1_ParamLimits

0x44b4,	// (0x00006bc4) cell_eswt_app_pane_t1

0x44e6,	// (0x00006bf6) grid_highlight_pane_cp70_ParamLimits

0x44e6,	// (0x00006bf6) grid_highlight_pane_cp70

0xdfae,	// (0x000106be) set_content_pane_g1

0xf540,	// (0x00011c50) status_small_volume_pane

0xcd9d,	// (0x0000f4ad) status_small_volume_pane_g1

0xcda5,	// (0x0000f4b5) volume_small2_pane

0xcdae,	// (0x0000f4be) volume_small2_pane_g1

0xcdb7,	// (0x0000f4c7) volume_small2_pane_g2

0xcdc0,	// (0x0000f4d0) volume_small2_pane_g3

0xcdc9,	// (0x0000f4d9) volume_small2_pane_g4

0xcdd2,	// (0x0000f4e2) volume_small2_pane_g5

0xcddb,	// (0x0000f4eb) volume_small2_pane_g6

0xcde4,	// (0x0000f4f4) volume_small2_pane_g7

0xcded,	// (0x0000f4fd) volume_small2_pane_g8

0xcdf6,	// (0x0000f506) volume_small2_pane_g9

0xcdff,	// (0x0000f50f) volume_small2_pane_g10

0x0009,

0xfc3a,	// (0x0001234a) volume_small2_pane_g

0x3ac9,	// (0x000061d9) fep_vkb_top_text_pane_g1_ParamLimits

0x3ae4,	// (0x000061f4) fep_vkb_top_text_pane_t1_ParamLimits

0x3df7,	// (0x00006507) popup_preview_fixed_window_g3_ParamLimits

0x3df7,	// (0x00006507) popup_preview_fixed_window_g3

0x052e,	// (0x00002c3e) popup_toolbar_trans_pane

0x2162,	// (0x00004872) aid_height_set_list_ParamLimits

0x216e,	// (0x0000487e) aid_size_parent_ParamLimits

0x0124,	// (0x00002834) list_highlight_pane_cp2_ParamLimits

0xdfae,	// (0x000106be) set_content_pane_g1_ParamLimits

0x23b3,	// (0x00004ac3) list_single_image_pane_ParamLimits

0x23b3,	// (0x00004ac3) list_single_image_pane

0x455d,	// (0x00006c6d) aid_size_cell_image_ParamLimits

0x455d,	// (0x00006c6d) aid_size_cell_image

0x456a,	// (0x00006c7a) grid_single_image_pane_ParamLimits

0x456a,	// (0x00006c7a) grid_single_image_pane

0xdfae,	// (0x000106be) list_single_image_pane_g1_ParamLimits

0xdfae,	// (0x000106be) list_single_image_pane_g1

0xe53d,	// (0x00010c4d) list_single_image_pane_g2_ParamLimits

0xe53d,	// (0x00010c4d) list_single_image_pane_g2

0x0001,

0xfc4f,	// (0x0001235f) list_single_image_pane_g_ParamLimits

0xfc4f,	// (0x0001235f) list_single_image_pane_g

0x22f1,	// (0x00004a01) list_single_image_pane_t1_ParamLimits

0x22f1,	// (0x00004a01) list_single_image_pane_t1

0x4576,	// (0x00006c86) cell_image_list_pane_ParamLimits

0x4576,	// (0x00006c86) cell_image_list_pane

0x4589,	// (0x00006c99) cell_image_list_pane_g1

0x4592,	// (0x00006ca2) cell_image_list_pane_g2

0x0001,

0xfc54,	// (0x00012364) cell_image_list_pane_g

0x459b,	// (0x00006cab) aid_size_cell_tb_trans_pane

0xe517,	// (0x00010c27) bg_tb_trans_pane

0x45ad,	// (0x00006cbd) grid_tb_trans_pane

0x0af2,	// (0x00003202) bg_tb_trans_pane_g1

0x0afa,	// (0x0000320a) bg_tb_trans_pane_g2

0x0b02,	// (0x00003212) bg_tb_trans_pane_g3

0x0b0a,	// (0x0000321a) bg_tb_trans_pane_g4

0x0b12,	// (0x00003222) bg_tb_trans_pane_g5

0x0b2a,	// (0x0000323a) bg_tb_trans_pane_g6

0x0b32,	// (0x00003242) bg_tb_trans_pane_g7

0x0b1a,	// (0x0000322a) bg_tb_trans_pane_g8

0x0b22,	// (0x00003232) bg_tb_trans_pane_g9

0x0008,

0xfc59,	// (0x00012369) bg_tb_trans_pane_g

0x45c1,	// (0x00006cd1) cell_toolbar_trans_pane_ParamLimits

0x45c1,	// (0x00006cd1) cell_toolbar_trans_pane

0x3547,	// (0x00005c57) cell_toolbar_trans_pane_g1

0x3184,	// (0x00005894) list_form2_midp_pane_t1

0x3192,	// (0x000058a2) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x00012206) list_form2_midp_pane_t

0x31a0,	// (0x000058b0) scroll_pane_cp51_ParamLimits

0x33a1,	// (0x00005ab1) form2_midp_wait_pane_g1

0x33aa,	// (0x00005aba) form2_midp_wait_pane_g2

0x33b3,	// (0x00005ac3) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x0001221b) form2_midp_wait_pane_g

0xd801,	// (0x0000ff11) list_highlight_pane_cp21_ParamLimits

0x33d3,	// (0x00005ae3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x33e2,	// (0x00005af2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x235c,	// (0x00004a6c) list_single_2graphic_im_pane_ParamLimits

0x235c,	// (0x00004a6c) list_single_2graphic_im_pane

0x45e7,	// (0x00006cf7) list_single_2graphic_im_pane_g1_ParamLimits

0x45e7,	// (0x00006cf7) list_single_2graphic_im_pane_g1

0x45f8,	// (0x00006d08) list_single_2graphic_im_pane_g2_ParamLimits

0x45f8,	// (0x00006d08) list_single_2graphic_im_pane_g2

0x4604,	// (0x00006d14) list_single_2graphic_im_pane_g3_ParamLimits

0x4604,	// (0x00006d14) list_single_2graphic_im_pane_g3

0x0003,

0xfc6c,	// (0x0001237c) list_single_2graphic_im_pane_g_ParamLimits

0xfc6c,	// (0x0001237c) list_single_2graphic_im_pane_g

0x4624,	// (0x00006d34) list_single_2graphic_im_pane_t1_ParamLimits

0x4624,	// (0x00006d34) list_single_2graphic_im_pane_t1

0x3e03,	// (0x00006513) list_single_graphic_2heading_pane_fp_ParamLimits

0x3e03,	// (0x00006513) list_single_graphic_2heading_pane_fp

0x3e5a,	// (0x0000656a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3e5a,	// (0x0000656a) list_single_graphic_2heading_pane_fp_g1

0x3e17,	// (0x00006527) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x3e17,	// (0x00006527) list_single_graphic_2heading_pane_fp_g2

0xe1af,	// (0x000108bf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe1af,	// (0x000108bf) list_single_graphic_2heading_pane_fp_g3

0x3e23,	// (0x00006533) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3e23,	// (0x00006533) list_single_graphic_2heading_pane_fp_g4

0x3e37,	// (0x00006547) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x3e37,	// (0x00006547) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000122a3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000122a3) list_single_graphic_2heading_pane_fp_g

0x4655,	// (0x00006d65) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4655,	// (0x00006d65) list_single_graphic_2heading_pane_fp_t1

0x3e92,	// (0x000065a2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3e92,	// (0x000065a2) list_single_graphic_2heading_pane_fp_t2

0x466b,	// (0x00006d7b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x466b,	// (0x00006d7b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc75,	// (0x00012385) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc75,	// (0x00012385) list_single_graphic_2heading_pane_fp_t

0x376a,	// (0x00005e7a) fep_hwr_write_pane_g5_ParamLimits

0x376a,	// (0x00005e7a) fep_hwr_write_pane_g5

0x3776,	// (0x00005e86) fep_hwr_write_pane_g6_ParamLimits

0x3776,	// (0x00005e86) fep_hwr_write_pane_g6

0x42ec,	// (0x000069fc) eswt_shell_pane_ParamLimits

0x0c7c,	// (0x0000338c) bg_popup_window_pane_cp18_ParamLimits

0x205c,	// (0x0000476c) heading_pane_cp70

0x4409,	// (0x00006b19) popup_eswt_tasktip_window_t1_ParamLimits

0x061c,	// (0x00002d2c) aid_touch_tab_arrow_left

0x0628,	// (0x00002d38) aid_touch_tab_arrow_right

0xd749,	// (0x0000fe59) title_pane_g3_ParamLimits

0xd749,	// (0x0000fe59) title_pane_g3

0xe415,	// (0x00010b25) set_value_pane_g1

0x052e,	// (0x00002c3e) popup_toolbar_trans_pane_ParamLimits

0x459b,	// (0x00006cab) aid_size_cell_tb_trans_pane_ParamLimits

0xe517,	// (0x00010c27) bg_tb_trans_pane_ParamLimits

0x45ad,	// (0x00006cbd) grid_tb_trans_pane_ParamLimits

0xdad4,	// (0x000101e4) cont_note_pane_ParamLimits

0xdad4,	// (0x000101e4) cont_note_pane

0xde08,	// (0x00010518) cont_snote2_single_text_pane_ParamLimits

0xde08,	// (0x00010518) cont_snote2_single_text_pane

0xde08,	// (0x00010518) cont_snote2_single_graphic_pane_ParamLimits

0xde08,	// (0x00010518) cont_snote2_single_graphic_pane

0x1268,	// (0x00003978) cont_note_wait_pane_ParamLimits

0x1268,	// (0x00003978) cont_note_wait_pane

0x1268,	// (0x00003978) cont_note_image_pane_ParamLimits

0x1268,	// (0x00003978) cont_note_image_pane

0x4681,	// (0x00006d91) popup_note2_window_g1_ParamLimits

0x4681,	// (0x00006d91) popup_note2_window_g1

0x46b2,	// (0x00006dc2) popup_note2_window_t1_ParamLimits

0x46b2,	// (0x00006dc2) popup_note2_window_t1

0x46f7,	// (0x00006e07) popup_note2_window_t2_ParamLimits

0x46f7,	// (0x00006e07) popup_note2_window_t2

0x473c,	// (0x00006e4c) popup_note2_window_t3_ParamLimits

0x473c,	// (0x00006e4c) popup_note2_window_t3

0x4781,	// (0x00006e91) popup_note2_window_t4_ParamLimits

0x4781,	// (0x00006e91) popup_note2_window_t4

0xdb58,	// (0x00010268) popup_note2_window_t5_ParamLimits

0xdb58,	// (0x00010268) popup_note2_window_t5

0x0004,

0xfc81,	// (0x00012391) popup_note2_window_t_ParamLimits

0xfc81,	// (0x00012391) popup_note2_window_t

0x47b0,	// (0x00006ec0) popup_note2_image_window_g1_ParamLimits

0x47b0,	// (0x00006ec0) popup_note2_image_window_g1

0x47bc,	// (0x00006ecc) popup_note2_image_window_g2_ParamLimits

0x47bc,	// (0x00006ecc) popup_note2_image_window_g2

0x0001,

0xfc8c,	// (0x0001239c) popup_note2_image_window_g_ParamLimits

0xfc8c,	// (0x0001239c) popup_note2_image_window_g

0x47ce,	// (0x00006ede) popup_note2_image_window_t1_ParamLimits

0x47ce,	// (0x00006ede) popup_note2_image_window_t1

0x47e6,	// (0x00006ef6) popup_note2_image_window_t2_ParamLimits

0x47e6,	// (0x00006ef6) popup_note2_image_window_t2

0x47fe,	// (0x00006f0e) popup_note2_image_window_t3_ParamLimits

0x47fe,	// (0x00006f0e) popup_note2_image_window_t3

0x0002,

0xfc91,	// (0x000123a1) popup_note2_image_window_t_ParamLimits

0xfc91,	// (0x000123a1) popup_note2_image_window_t

0x1276,	// (0x00003986) popup_note2_wait_window_g1_ParamLimits

0x1276,	// (0x00003986) popup_note2_wait_window_g1

0x1282,	// (0x00003992) popup_note2_wait_window_g2_ParamLimits

0x1282,	// (0x00003992) popup_note2_wait_window_g2

0x128e,	// (0x0000399e) popup_note2_wait_window_g3_ParamLimits

0x128e,	// (0x0000399e) popup_note2_wait_window_g3

0x0002,

0xf870,	// (0x00011f80) popup_note2_wait_window_g_ParamLimits

0xf870,	// (0x00011f80) popup_note2_wait_window_g

0x481a,	// (0x00006f2a) popup_note2_wait_window_t1_ParamLimits

0x481a,	// (0x00006f2a) popup_note2_wait_window_t1

0x4838,	// (0x00006f48) popup_note2_wait_window_t2_ParamLimits

0x4838,	// (0x00006f48) popup_note2_wait_window_t2

0x4856,	// (0x00006f66) popup_note2_wait_window_t3_ParamLimits

0x4856,	// (0x00006f66) popup_note2_wait_window_t3

0x4868,	// (0x00006f78) popup_note2_wait_window_t4_ParamLimits

0x4868,	// (0x00006f78) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x000123a8) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x000123a8) popup_note2_wait_window_t

0x487a,	// (0x00006f8a) wait_bar2_pane_ParamLimits

0x487a,	// (0x00006f8a) wait_bar2_pane

0x4892,	// (0x00006fa2) popup_snote2_single_text_window_g1_ParamLimits

0x4892,	// (0x00006fa2) popup_snote2_single_text_window_g1

0x48ba,	// (0x00006fca) popup_snote2_single_text_window_t1_ParamLimits

0x48ba,	// (0x00006fca) popup_snote2_single_text_window_t1

0x4906,	// (0x00007016) popup_snote2_single_text_window_t2_ParamLimits

0x4906,	// (0x00007016) popup_snote2_single_text_window_t2

0x4952,	// (0x00007062) popup_snote2_single_text_window_t3_ParamLimits

0x4952,	// (0x00007062) popup_snote2_single_text_window_t3

0x4993,	// (0x000070a3) popup_snote2_single_text_window_t4_ParamLimits

0x4993,	// (0x000070a3) popup_snote2_single_text_window_t4

0x49c9,	// (0x000070d9) popup_snote2_single_text_window_t5_ParamLimits

0x49c9,	// (0x000070d9) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x000123b1) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x000123b1) popup_snote2_single_text_window_t

0x49f4,	// (0x00007104) popup_snote2_single_graphic_window_g1_ParamLimits

0x49f4,	// (0x00007104) popup_snote2_single_graphic_window_g1

0x4a1c,	// (0x0000712c) popup_snote2_single_graphic_window_g2_ParamLimits

0x4a1c,	// (0x0000712c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x000123bc) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x000123bc) popup_snote2_single_graphic_window_g

0x4a44,	// (0x00007154) popup_snote2_single_graphic_window_t1_ParamLimits

0x4a44,	// (0x00007154) popup_snote2_single_graphic_window_t1

0x4a90,	// (0x000071a0) popup_snote2_single_graphic_window_t2_ParamLimits

0x4a90,	// (0x000071a0) popup_snote2_single_graphic_window_t2

0x4952,	// (0x00007062) popup_snote2_single_graphic_window_t3_ParamLimits

0x4952,	// (0x00007062) popup_snote2_single_graphic_window_t3

0x4993,	// (0x000070a3) popup_snote2_single_graphic_window_t4_ParamLimits

0x4993,	// (0x000070a3) popup_snote2_single_graphic_window_t4

0x49c9,	// (0x000070d9) popup_snote2_single_graphic_window_t5_ParamLimits

0x49c9,	// (0x000070d9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x000123c1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x000123c1) popup_snote2_single_graphic_window_t

0x302e,	// (0x0000573e) clock_nsta_pane_cp2_t1

0x302e,	// (0x0000573e) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x000121dc) clock_nsta_pane_cp2_t

0xe531,	// (0x00010c41) form_field_data_wide_pane_g1_ParamLimits

0xdfae,	// (0x000106be) form_field_data_wide_pane_g2_ParamLimits

0xdfae,	// (0x000106be) form_field_data_wide_pane_g2

0xe53d,	// (0x00010c4d) form_field_data_wide_pane_g3_ParamLimits

0xe53d,	// (0x00010c4d) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00011dca) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00011dca) form_field_data_wide_pane_g

0x2f3a,	// (0x0000564a) grid_touch_3_pane_ParamLimits

0x2f3a,	// (0x0000564a) grid_touch_3_pane

0x4adc,	// (0x000071ec) cell_touch_3_pane_ParamLimits

0x4adc,	// (0x000071ec) cell_touch_3_pane

0x3547,	// (0x00005c57) cell_touch_3_pane_g1

0x3547,	// (0x00005c57) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x00012261) cell_touch_3_pane_g

0xdb8a,	// (0x0001029a) cont_query_data_pane

0xdb92,	// (0x000102a2) cont_query_data_pane_cp1

0x4b09,	// (0x00007219) button_value_adjust_pane_cp7

0x4b11,	// (0x00007221) query_popup_pane_cp3

0xed80,	// (0x00011490) bg_popup_sub_pane_cp22_ParamLimits

0xc18a,	// (0x0000e89a) navi_navi_volume_pane_cp2

0xc1a2,	// (0x0000e8b2) popup_side_volume_key_window_g2

0xc1ae,	// (0x0000e8be) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00011e5c) popup_side_volume_key_window_g

0xc1c8,	// (0x0000e8d8) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00011e63) popup_side_volume_key_window_t

0xf09c,	// (0x000117ac) popup_side_volume_key_window_ParamLimits

0xe16f,	// (0x0001087f) list_double_graphic_pane_g4_ParamLimits

0xe16f,	// (0x0001087f) list_double_graphic_pane_g4

0x2387,	// (0x00004a97) list_single_2heading_msg_pane_ParamLimits

0x2387,	// (0x00004a97) list_single_2heading_msg_pane

0x4b3e,	// (0x0000724e) list_single_2heading_msg_pane_g1_ParamLimits

0x4b3e,	// (0x0000724e) list_single_2heading_msg_pane_g1

0x4b4a,	// (0x0000725a) list_single_2heading_msg_pane_g2_ParamLimits

0x4b4a,	// (0x0000725a) list_single_2heading_msg_pane_g2

0x4b56,	// (0x00007266) list_single_2heading_msg_pane_g3_ParamLimits

0x4b56,	// (0x00007266) list_single_2heading_msg_pane_g3

0x4b62,	// (0x00007272) list_single_2heading_msg_pane_g4_ParamLimits

0x4b62,	// (0x00007272) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x000123cc) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x000123cc) list_single_2heading_msg_pane_g

0x4b7a,	// (0x0000728a) list_single_2heading_msg_pane_t1_ParamLimits

0x4b7a,	// (0x0000728a) list_single_2heading_msg_pane_t1

0x4ba2,	// (0x000072b2) list_single_2heading_msg_pane_t2_ParamLimits

0x4ba2,	// (0x000072b2) list_single_2heading_msg_pane_t2

0x4bd1,	// (0x000072e1) list_single_2heading_msg_pane_t3_ParamLimits

0x4bd1,	// (0x000072e1) list_single_2heading_msg_pane_t3

0x4c0a,	// (0x0000731a) list_single_2heading_msg_pane_t4_ParamLimits

0x4c0a,	// (0x0000731a) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x000123d5) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x000123d5) list_single_2heading_msg_pane_t

0xd755,	// (0x0000fe65) title_pane_g4_ParamLimits

0xd755,	// (0x0000fe65) title_pane_g4

0xbfda,	// (0x0000e6ea) title_pane_stacon_g3_ParamLimits

0xbfda,	// (0x0000e6ea) title_pane_stacon_g3

0x4618,	// (0x00006d28) list_single_2graphic_im_pane_g4_ParamLimits

0x4618,	// (0x00006d28) list_single_2graphic_im_pane_g4

0x1dbc,	// (0x000044cc) popup_side_volume_key_window_cp

0x2708,	// (0x00004e18) main_idle_act2_pane_t1

0xc587,	// (0x0000ec97) toolbar_button_pane_g10

0xdf65,	// (0x00010675) popup_toolbar_window_cp1

0x301f,	// (0x0000572f) clock_nsta_pane_cp_t1

0x301f,	// (0x0000572f) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x000121d7) clock_nsta_pane_cp_t

0xc18a,	// (0x0000e89a) navi_navi_volume_pane_cp2_ParamLimits

0xc196,	// (0x0000e8a6) popup_side_volume_key_window_g1_ParamLimits

0xc1a2,	// (0x0000e8b2) popup_side_volume_key_window_g2_ParamLimits

0xc1ae,	// (0x0000e8be) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00011e5c) popup_side_volume_key_window_g_ParamLimits

0xca1d,	// (0x0000f12d) fep_hwr_aid_pane

0xcabe,	// (0x0000f1ce) bg_fep_hwr_top_pane_g4_ParamLimits

0x3683,	// (0x00005d93) fep_hwr_top_pane_g1_ParamLimits

0x3671,	// (0x00005d81) fep_hwr_top_pane_g2_ParamLimits

0xcade,	// (0x0000f1ee) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x0001222c) fep_hwr_top_pane_g_ParamLimits

0xcaf3,	// (0x0000f203) fep_hwr_top_text_pane_ParamLimits

0x1b90,	// (0x000042a0) aid_touch_tab_arrow_arrow_2

0x1b87,	// (0x00004297) aid_touch_tab_arrow_left_2

0xca31,	// (0x0000f141) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xca64,	// (0x0000f174) fep_hwr_prediction_pane

0x38f9,	// (0x00006009) fep_vkb_prediction_pane

0x39db,	// (0x000060eb) fep_vkb_side_pane_g3_ParamLimits

0x39db,	// (0x000060eb) fep_vkb_side_pane_g3

0xcc62,	// (0x0000f372) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xcccc,	// (0x0000f3dc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xccd9,	// (0x0000f3e9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x000122db) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce08,	// (0x0000f518) fep_hwr_prediction_pane_g1

0xce12,	// (0x0000f522) fep_hwr_prediction_pane_g2

0xce1a,	// (0x0000f52a) fep_hwr_prediction_pane_g3

0xce22,	// (0x0000f532) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x000123de) fep_hwr_prediction_pane_g

0x4c2f,	// (0x0000733f) fep_vkb_prediction_pane_g1

0x4c51,	// (0x00007361) fep_vkb_prediction_pane_g2

0x4c59,	// (0x00007369) fep_vkb_prediction_pane_g3

0x4c61,	// (0x00007371) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x000123e7) fep_vkb_prediction_pane_g

0xc855,	// (0x0000ef65) slider_set_pane_g3

0xc869,	// (0x0000ef79) slider_set_pane_g4

0xc881,	// (0x0000ef91) slider_set_pane_g5

0xc855,	// (0x0000ef65) slider_set_pane_g6

0xc897,	// (0x0000efa7) slider_set_pane_g7

0x22b5,	// (0x000049c5) slider_form_pane_g3

0x22be,	// (0x000049ce) slider_form_pane_g4

0x22c6,	// (0x000049d6) slider_form_pane_g5

0x22b5,	// (0x000049c5) slider_form_pane_g6

0x22ce,	// (0x000049de) slider_form_pane_g7

0x29dd,	// (0x000050ed) slider_set_pane_vc_g3

0x29e6,	// (0x000050f6) slider_set_pane_vc_g4

0x29ef,	// (0x000050ff) slider_set_pane_vc_g5

0x29dd,	// (0x000050ed) slider_set_pane_vc_g6

0x29f8,	// (0x00005108) slider_set_pane_vc_g7

0x29dd,	// (0x000050ed) slider_form_pane_vc_g1

0x29e6,	// (0x000050f6) slider_form_pane_vc_g2

0x29ef,	// (0x000050ff) slider_form_pane_vc_g3

0x29dd,	// (0x000050ed) slider_form_pane_vc_g4

0x2d64,	// (0x00005474) slider_form_pane_vc_g5

0x0004,

0xfaad,	// (0x000121bd) slider_form_pane_vc_g

0xd630,	// (0x0000fd40) main_idle_act3_pane

0x4c69,	// (0x00007379) ai3_links_pane

0x4c72,	// (0x00007382) popup_ai3_data_window_ParamLimits

0x4c72,	// (0x00007382) popup_ai3_data_window

0xd630,	// (0x0000fd40) grid_ai3_links_pane

0x4c8a,	// (0x0000739a) cell_ai3_links_pane_ParamLimits

0x4c8a,	// (0x0000739a) cell_ai3_links_pane

0x4c9e,	// (0x000073ae) bg_popup_sub_pane_cp11

0x4cab,	// (0x000073bb) cell_ai3_links_pane_g1

0xd630,	// (0x0000fd40) bg_popup_sub_pane_cp12

0x4cd0,	// (0x000073e0) heading_ai3_data_pane

0x4cd8,	// (0x000073e8) list_ai3_gene_pane

0x4ce4,	// (0x000073f4) popup_ai3_data_window_g1

0x4cec,	// (0x000073fc) heading_ai3_data_pane_g1

0x4cf4,	// (0x00007404) heading_ai3_data_pane_t1

0x4d02,	// (0x00007412) list_double_ai3_gene_pane_ParamLimits

0x4d02,	// (0x00007412) list_double_ai3_gene_pane

0x4d0f,	// (0x0000741f) list_single_ai3_gene_pane_ParamLimits

0x4d0f,	// (0x0000741f) list_single_ai3_gene_pane

0x350c,	// (0x00005c1c) list_highlight_pane_cp7_ParamLimits

0x350c,	// (0x00005c1c) list_highlight_pane_cp7

0x4d1c,	// (0x0000742c) list_single_a13_gene_pane_t1_ParamLimits

0x4d1c,	// (0x0000742c) list_single_a13_gene_pane_t1

0x4d33,	// (0x00007443) list_single_ai3_gene_pane_g1

0x4d3c,	// (0x0000744c) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x000123f0) list_single_ai3_gene_pane_g

0x4d44,	// (0x00007454) list_double_ai3_gene_pane_g1_ParamLimits

0x4d44,	// (0x00007454) list_double_ai3_gene_pane_g1

0x4d50,	// (0x00007460) list_double_ai3_gene_pane_t1_ParamLimits

0x4d50,	// (0x00007460) list_double_ai3_gene_pane_t1

0x4d6c,	// (0x0000747c) list_double_ai3_gene_pane_t2_ParamLimits

0x4d6c,	// (0x0000747c) list_double_ai3_gene_pane_t2

0x4d81,	// (0x00007491) list_double_ai3_gene_pane_t3_ParamLimits

0x4d81,	// (0x00007491) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x000123f5) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x000123f5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4b22,	// (0x00007232) aid_size_min_col_2

0x4b2a,	// (0x0000723a) aid_size_min_msg_ParamLimits

0x4b2a,	// (0x0000723a) aid_size_min_msg

0x3ad5,	// (0x000061e5) fep_vkb_top_text_pane_g2_ParamLimits

0x3ad5,	// (0x000061e5) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x0001225c) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x0001225c) fep_vkb_top_text_pane_g

0xd630,	// (0x0000fd40) main_hc_apps_shell_pane

0x4d9e,	// (0x000074ae) grid_hc_apps_pane_ParamLimits

0x4d9e,	// (0x000074ae) grid_hc_apps_pane

0x4dad,	// (0x000074bd) list_hc_apps_pane

0x4db5,	// (0x000074c5) scroll_pane_cp37_ParamLimits

0x4db5,	// (0x000074c5) scroll_pane_cp37

0x4dc1,	// (0x000074d1) cell_hc_apps_pane_ParamLimits

0x4dc1,	// (0x000074d1) cell_hc_apps_pane

0x4e4f,	// (0x0000755f) cell_hc_apps_pane_g1_ParamLimits

0x4e4f,	// (0x0000755f) cell_hc_apps_pane_g1

0x4e7c,	// (0x0000758c) cell_hc_apps_pane_g2_ParamLimits

0x4e7c,	// (0x0000758c) cell_hc_apps_pane_g2

0x4e98,	// (0x000075a8) cell_hc_apps_pane_g3_ParamLimits

0x4e98,	// (0x000075a8) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x000123fc) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x000123fc) cell_hc_apps_pane_g

0x4eba,	// (0x000075ca) cell_hc_apps_pane_t1_ParamLimits

0x4eba,	// (0x000075ca) cell_hc_apps_pane_t1

0xdad4,	// (0x000101e4) grid_highlight_pane_cp10_ParamLimits

0xdad4,	// (0x000101e4) grid_highlight_pane_cp10

0x4ef8,	// (0x00007608) list_single_hc_apps_pane_ParamLimits

0x4ef8,	// (0x00007608) list_single_hc_apps_pane

0x4f28,	// (0x00007638) list_single_hc_apps_pane_g1

0x4f41,	// (0x00007651) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x00012403) list_single_hc_apps_pane_g

0x4f5a,	// (0x0000766a) list_single_hc_apps_pane_g2_copy1

0x4f76,	// (0x00007686) list_single_hc_apps_pane_t1

0xd801,	// (0x0000ff11) bg_set_opt_pane_cp_ParamLimits

0xbf28,	// (0x0000e638) setting_slider_pane_t1_ParamLimits

0xbf3e,	// (0x0000e64e) setting_slider_pane_t2_ParamLimits

0xbf57,	// (0x0000e667) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00011cb2) setting_slider_pane_t_ParamLimits

0xbf6e,	// (0x0000e67e) slider_set_pane_ParamLimits

0xc402,	// (0x0000eb12) control_pane_g5_ParamLimits

0xc402,	// (0x0000eb12) control_pane_g5

0x20c9,	// (0x000047d9) slider_set_pane_g1_ParamLimits

0xc849,	// (0x0000ef59) slider_set_pane_g2_ParamLimits

0xc855,	// (0x0000ef65) slider_set_pane_g3_ParamLimits

0xc869,	// (0x0000ef79) slider_set_pane_g4_ParamLimits

0xc881,	// (0x0000ef91) slider_set_pane_g5_ParamLimits

0xc855,	// (0x0000ef65) slider_set_pane_g6_ParamLimits

0xc897,	// (0x0000efa7) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x0001209c) slider_set_pane_g_ParamLimits

0xd801,	// (0x0000ff11) navi_icon_text_pane_ParamLimits

0x05ea,	// (0x00002cfa) aid_fill_nsta_2_ParamLimits

0x061c,	// (0x00002d2c) aid_touch_tab_arrow_left_ParamLimits

0x0628,	// (0x00002d38) aid_touch_tab_arrow_right_ParamLimits

0x0692,	// (0x00002da2) clock_nsta_pane_ParamLimits

0x1b69,	// (0x00004279) navi_icon_pane_g1_ParamLimits

0x1b75,	// (0x00004285) navi_text_pane_t1_ParamLimits

0x3116,	// (0x00005826) navi_icon_text_pane_g1_ParamLimits

0x3122,	// (0x00005832) navi_icon_text_pane_t1_ParamLimits

0x4f28,	// (0x00007638) list_single_hc_apps_pane_g1_ParamLimits

0x4f41,	// (0x00007651) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x00012403) list_single_hc_apps_pane_g_ParamLimits

0x4f5a,	// (0x0000766a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x4f76,	// (0x00007686) list_single_hc_apps_pane_t1_ParamLimits

0xbe5a,	// (0x0000e56a) popup_toolbar2_fixed_window_ParamLimits

0xbe5a,	// (0x0000e56a) popup_toolbar2_fixed_window

0x0526,	// (0x00002c36) popup_toolbar2_float_window

0xd630,	// (0x0000fd40) bg_popup_sub_pane_cp27

0x4fa4,	// (0x000076b4) grid_toolbar2_float_pane

0xd630,	// (0x0000fd40) bg_popup_sub_pane_cp26

0x4fa4,	// (0x000076b4) grid_toolbar2_fixed_pane

0x4fac,	// (0x000076bc) cell_toolbar2_fixed_pane_ParamLimits

0x4fac,	// (0x000076bc) cell_toolbar2_fixed_pane

0x4fbd,	// (0x000076cd) cell_toolbar2_fixed_pane_g1

0x4fc6,	// (0x000076d6) toolbar2_fixed_button_pane

0x0af2,	// (0x00003202) toolbar2_fixed_button_pane_g1

0x0afa,	// (0x0000320a) toolbar2_fixed_button_pane_g2

0x0b02,	// (0x00003212) toolbar2_fixed_button_pane_g3

0x0b0a,	// (0x0000321a) toolbar2_fixed_button_pane_g4

0x0b12,	// (0x00003222) toolbar2_fixed_button_pane_g5

0x0b1a,	// (0x0000322a) toolbar2_fixed_button_pane_g6

0x0b22,	// (0x00003232) toolbar2_fixed_button_pane_g7

0x0b2a,	// (0x0000323a) toolbar2_fixed_button_pane_g8

0x0b32,	// (0x00003242) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x00011f9e) toolbar2_fixed_button_pane_g

0x4fce,	// (0x000076de) cell_toolbar2_float_pane_ParamLimits

0x4fce,	// (0x000076de) cell_toolbar2_float_pane

0x4fdf,	// (0x000076ef) cell_toolbar2_float_pane_g1

0x4fc6,	// (0x000076d6) toolbar2_fixed_button_pane_cp

0x3868,	// (0x00005f78) fep_vkb_accented_list_pane_ParamLimits

0x3868,	// (0x00005f78) fep_vkb_accented_list_pane

0xcc42,	// (0x0000f352) bg_popup_fep_shadow_pane_g9

0xf2a4,	// (0x000119b4) bg_popup_fep_shadow_pane_cp3

0xe7c5,	// (0x00010ed5) list_accented_list_pane

0x4fe8,	// (0x000076f8) list_single_accented_list_pane_ParamLimits

0x4fe8,	// (0x000076f8) list_single_accented_list_pane

0xf2a4,	// (0x000119b4) list_highlight_pane_cp10

0x4ff9,	// (0x00007709) list_single_accented_list_pane_t1

0x048c,	// (0x00002b9c) popup_slider_window_ParamLimits

0x048c,	// (0x00002b9c) popup_slider_window

0x4b19,	// (0x00007229) aid_indentation_list_msg

0x5099,	// (0x000077a9) bg_popup_window_pane_cp19

0x50fd,	// (0x0000780d) popup_slider_window_g1

0x5119,	// (0x00007829) popup_slider_window_g2

0x5135,	// (0x00007845) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x00012408) popup_slider_window_g

0x5191,	// (0x000078a1) popup_slider_window_t1

0x5203,	// (0x00007913) small_volume_slider_vertical_pane

0x3547,	// (0x00005c57) small_volume_slider_vertical_pane_g1

0x3547,	// (0x00005c57) small_volume_slider_vertical_pane_g2

0x521f,	// (0x0000792f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x0001241a) small_volume_slider_vertical_pane_g

0xbcce,	// (0x0000e3de) area_side_right_pane_ParamLimits

0xbcce,	// (0x0000e3de) area_side_right_pane

0xce2a,	// (0x0000f53a) aid_size_side_button_ParamLimits

0xce2a,	// (0x0000f53a) aid_size_side_button

0xce3e,	// (0x0000f54e) grid_sctrl_middle_pane_ParamLimits

0xce3e,	// (0x0000f54e) grid_sctrl_middle_pane

0xce5a,	// (0x0000f56a) sctrl_sk_bottom_pane

0xce6b,	// (0x0000f57b) sctrl_sk_top_pane

0xce7d,	// (0x0000f58d) aid_touch_sctrl_top

0xce8a,	// (0x0000f59a) bg_sctrl_sk_pane_ParamLimits

0xce8a,	// (0x0000f59a) bg_sctrl_sk_pane

0xce98,	// (0x0000f5a8) sctrl_sk_top_pane_g1

0xcea5,	// (0x0000f5b5) sctrl_sk_top_pane_t1

0xce7d,	// (0x0000f58d) aid_touch_sctrl_bottom

0xce8a,	// (0x0000f59a) bg_sctrl_sk_pane_cp_ParamLimits

0xce8a,	// (0x0000f59a) bg_sctrl_sk_pane_cp

0xcec0,	// (0x0000f5d0) sctrl_sk_bottom_pane_g1

0xcea5,	// (0x0000f5b5) sctrl_sk_bottom_pane_t1

0xcec9,	// (0x0000f5d9) cell_sctrl_middle_pane_ParamLimits

0xcec9,	// (0x0000f5d9) cell_sctrl_middle_pane

0xcee4,	// (0x0000f5f4) aid_touch_sctrl_middle_ParamLimits

0xcee4,	// (0x0000f5f4) aid_touch_sctrl_middle

0xcef5,	// (0x0000f605) bg_sctrl_middle_pane_ParamLimits

0xcef5,	// (0x0000f605) bg_sctrl_middle_pane

0xcc62,	// (0x0000f372) cell_sctrl_middle_pane_g1_ParamLimits

0xcc62,	// (0x0000f372) cell_sctrl_middle_pane_g1

0xcf03,	// (0x0000f613) cell_sctrl_middle_pane_g2_ParamLimits

0xcf03,	// (0x0000f613) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x00012426) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x00012426) cell_sctrl_middle_pane_g

0x0af2,	// (0x00003202) bg_sctrl_middle_pane_g1

0x0b02,	// (0x00003212) bg_sctrl_middle_pane_g2

0x0afa,	// (0x0000320a) bg_sctrl_middle_pane_g3

0x0b12,	// (0x00003222) bg_sctrl_middle_pane_g4

0x0b0a,	// (0x0000321a) bg_sctrl_middle_pane_g5

0x0b1a,	// (0x0000322a) bg_sctrl_middle_pane_g6

0x0b22,	// (0x00003232) bg_sctrl_middle_pane_g7

0x0b32,	// (0x00003242) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x0001242b) bg_sctrl_middle_pane_g

0x0b2a,	// (0x0000323a) bg_sctrl_middle_pane_g8_copy1

0x0af2,	// (0x00003202) bg_sctrl_sk_pane_g1

0x0afa,	// (0x0000320a) bg_sctrl_sk_pane_g2

0x0b02,	// (0x00003212) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x00011f9e) bg_sctrl_sk_pane_g

0xdf2a,	// (0x0001063a) aid_size_touch_scroll_bar

0x0b0a,	// (0x0000321a) bg_sctrl_sk_pane_g4

0x0b12,	// (0x00003222) bg_sctrl_sk_pane_g5

0x0b1a,	// (0x0000322a) bg_sctrl_sk_pane_g6

0x0b22,	// (0x00003232) bg_sctrl_sk_pane_g7

0x0b2a,	// (0x0000323a) bg_sctrl_sk_pane_g8

0x0b32,	// (0x00003242) bg_sctrl_sk_pane_g9

0x01c2,	// (0x000028d2) popup_fep_china_hwr2_fs_candidate_window

0x01ca,	// (0x000028da) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x01ca,	// (0x000028da) popup_fep_china_hwr2_fs_control_window

0xcc62,	// (0x0000f372) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x00012421) sctrl_sk_top_pane_g

0x52fb,	// (0x00007a0b) aid_fep_china_hwr2_fs_cell_ParamLimits

0x52fb,	// (0x00007a0b) aid_fep_china_hwr2_fs_cell

0x530c,	// (0x00007a1c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x530c,	// (0x00007a1c) bg_popup_fep_shadow_pane_cp4

0x5323,	// (0x00007a33) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x5323,	// (0x00007a33) bg_popup_fep_shadow_pane_cp5

0x5335,	// (0x00007a45) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x5335,	// (0x00007a45) popup_fep_china_hwr2_fs_control_bar_grid

0x5345,	// (0x00007a55) popup_fep_china_hwr2_fs_control_funtion_grid

0x534d,	// (0x00007a5d) aid_fep_china_hwr2_fs_candi_cell

0xd630,	// (0x0000fd40) bg_popup_fep_shadow_pane_cp6

0x5357,	// (0x00007a67) popup_fep_china_hwr2_fs_candidate_grid

0x535f,	// (0x00007a6f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x535f,	// (0x00007a6f) cell_fep_china_hwr2_fs_funtion_grid

0x3547,	// (0x00005c57) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5377,	// (0x00007a87) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5377,	// (0x00007a87) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5385,	// (0x00007a95) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5385,	// (0x00007a95) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x0001243c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x0001243c) cell_fep_china_hwr2_fs_funtion_grid_g

0x539b,	// (0x00007aab) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x539b,	// (0x00007aab) cell_fep_china_hwr2_fs_funtion_grid_t1

0x53b0,	// (0x00007ac0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x53b0,	// (0x00007ac0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x00012441) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x00012441) cell_fep_china_hwr2_fs_funtion_grid_t

0x53cc,	// (0x00007adc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x53d4,	// (0x00007ae4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x53dc,	// (0x00007aec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x00012446) popup_fep_china_hwr2_fs_control_bar_grid_g

0x53e4,	// (0x00007af4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x53e4,	// (0x00007af4) cell_fep_china_hwr2_fs_candidate_grid

0x53fd,	// (0x00007b0d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5405,	// (0x00007b15) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3547,	// (0x00005c57) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3547,	// (0x00005c57) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x00012261) cell_fep_china_hwr2_fs_candidate_grid_g

0x540d,	// (0x00007b1d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x069f,	// (0x00002daf) clock_nsta_pane_cp_24_ParamLimits

0x069f,	// (0x00002daf) clock_nsta_pane_cp_24

0x0712,	// (0x00002e22) indicator_nsta_pane_cp_24_ParamLimits

0x0712,	// (0x00002e22) indicator_nsta_pane_cp_24

0x19d5,	// (0x000040e5) heading_pane_g1

0x0001,

0xf8f3,	// (0x00012003) heading_pane_g

0x24f2,	// (0x00004c02) grid_sct_catagory_button_pane

0x2522,	// (0x00004c32) scroll_pane_cp5_ParamLimits

0x31ac,	// (0x000058bc) button_value_adjust_pane_cp5_ParamLimits

0x31ac,	// (0x000058bc) button_value_adjust_pane_cp5

0x32a2,	// (0x000059b2) form2_midp_time_pane_ParamLimits

0x541b,	// (0x00007b2b) cell_sct_catagory_button_pane_ParamLimits

0x541b,	// (0x00007b2b) cell_sct_catagory_button_pane

0x350c,	// (0x00005c1c) bg_button_pane_cp01_ParamLimits

0x350c,	// (0x00005c1c) bg_button_pane_cp01

0x3547,	// (0x00005c57) cell_sct_catagory_button_pane_g1

0x04c3,	// (0x00002bd3) popup_tb_extension_window

0x542d,	// (0x00007b3d) aid_size_cell_ext_ParamLimits

0x542d,	// (0x00007b3d) aid_size_cell_ext

0xdad4,	// (0x000101e4) bg_tb_trans_pane_cp1_ParamLimits

0xdad4,	// (0x000101e4) bg_tb_trans_pane_cp1

0x544d,	// (0x00007b5d) grid_tb_ext_pane_ParamLimits

0x544d,	// (0x00007b5d) grid_tb_ext_pane

0x5473,	// (0x00007b83) cell_tb_ext_pane_ParamLimits

0x5473,	// (0x00007b83) cell_tb_ext_pane

0x5488,	// (0x00007b98) cell_tb_ext_pane_g1_ParamLimits

0x5488,	// (0x00007b98) cell_tb_ext_pane_g1

0x54a5,	// (0x00007bb5) cell_tb_ext_pane_t1

0xdad4,	// (0x000101e4) list_highlight_pane_cp11_ParamLimits

0xdad4,	// (0x000101e4) list_highlight_pane_cp11

0xbe79,	// (0x0000e589) popup_uni_indicator_window_ParamLimits

0xbe79,	// (0x0000e589) popup_uni_indicator_window

0xe517,	// (0x00010c27) bg_popup_sub_pane_cp14

0x54c0,	// (0x00007bd0) list_uniindi_pane

0x54cc,	// (0x00007bdc) uniindi_top_pane

0xdad4,	// (0x000101e4) bg_uniindi_top_pane

0x54eb,	// (0x00007bfb) uniindi_top_pane_g1

0x5501,	// (0x00007c11) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x0001244d) uniindi_top_pane_g

0x552b,	// (0x00007c3b) uniindi_top_pane_t1

0x5555,	// (0x00007c65) list_single_uniindi_pane_ParamLimits

0x5555,	// (0x00007c65) list_single_uniindi_pane

0x3547,	// (0x00005c57) bg_uniindi_top_pane_g1

0x5567,	// (0x00007c77) list_single_uniindi_pane_g1

0x557a,	// (0x00007c8a) list_single_uniindi_pane_t1

0xbd17,	// (0x0000e427) control_bg_pane

0x559f,	// (0x00007caf) bg_sctrl_sk_pane_cp1

0x55a8,	// (0x00007cb8) bg_sctrl_sk_pane_cp2

0x55b1,	// (0x00007cc1) control_bg_pane_g1

0x55ba,	// (0x00007cca) control_bg_pane_g2

0x0001,

0xfd46,	// (0x00012456) control_bg_pane_g

0x2fe3,	// (0x000056f3) cell_indicator_nsta_pane_g1_ParamLimits

0x2ff1,	// (0x00005701) cell_indicator_nsta_pane_g2_ParamLimits

0xfac2,	// (0x000121d2) cell_indicator_nsta_pane_g_ParamLimits

0x3326,	// (0x00005a36) form2_midp_time_pane_t1_ParamLimits

0xde08,	// (0x00010518) main_idle_act4_pane_ParamLimits

0xde08,	// (0x00010518) main_idle_act4_pane

0x04c3,	// (0x00002bd3) popup_tb_extension_window_ParamLimits

0x5467,	// (0x00007b77) tb_ext_find_pane_ParamLimits

0x5467,	// (0x00007b77) tb_ext_find_pane

0x55c3,	// (0x00007cd3) ai_gene_pane_1_cp1

0xf3dd,	// (0x00011aed) ai_gene_pane_2_cp1

0x55cb,	// (0x00007cdb) list_single_idle_plugin_calendar_pane

0x55d4,	// (0x00007ce4) list_single_idle_plugin_notification_pane

0x55dd,	// (0x00007ced) list_single_idle_plugin_player_pane

0x55e6,	// (0x00007cf6) list_single_idle_plugin_shortcut_pane_ParamLimits

0x55e6,	// (0x00007cf6) list_single_idle_plugin_shortcut_pane

0x5608,	// (0x00007d18) main_idle_act4_pane_t1

0x561a,	// (0x00007d2a) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x0001245b) main_idle_act4_pane_t

0x562c,	// (0x00007d3c) middle_sk_idle_act4_pane_ParamLimits

0x562c,	// (0x00007d3c) middle_sk_idle_act4_pane

0x5642,	// (0x00007d52) popup_clock_digital_analogue_window_cp2

0x565c,	// (0x00007d6c) shortcut_wheel_idle_act4_pane_ParamLimits

0x565c,	// (0x00007d6c) shortcut_wheel_idle_act4_pane

0x3547,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g1

0x3547,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g2

0x3547,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g3

0x3547,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g4

0x3547,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g5

0x5670,	// (0x00007d80) shortcut_wheel_idle_act4_pane_g6

0x5678,	// (0x00007d88) shortcut_wheel_idle_act4_pane_g7

0x5680,	// (0x00007d90) shortcut_wheel_idle_act4_pane_g8

0x5688,	// (0x00007d98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x00012460) shortcut_wheel_idle_act4_pane_g

0x3987,	// (0x00006097) middle_sk_idle_act4_pane_g1_ParamLimits

0x3987,	// (0x00006097) middle_sk_idle_act4_pane_g1

0x56ec,	// (0x00007dfc) middle_sk_idle_act4_pane_g2_ParamLimits

0x56ec,	// (0x00007dfc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x00012483) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x00012483) middle_sk_idle_act4_pane_g

0x56f8,	// (0x00007e08) middle_sk_idle_act4_pane_t1_ParamLimits

0x56f8,	// (0x00007e08) middle_sk_idle_act4_pane_t1

0x5715,	// (0x00007e25) grid_ai_shortcut_pane_ParamLimits

0x5715,	// (0x00007e25) grid_ai_shortcut_pane

0x572e,	// (0x00007e3e) list_highlight_pane_cp16_ParamLimits

0x572e,	// (0x00007e3e) list_highlight_pane_cp16

0x573b,	// (0x00007e4b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x573b,	// (0x00007e4b) list_single_idle_plugin_shortcut_pane_g1

0x5747,	// (0x00007e57) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x5747,	// (0x00007e57) list_single_idle_plugin_shortcut_pane_g2

0x575f,	// (0x00007e6f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x575f,	// (0x00007e6f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x00012488) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x00012488) list_single_idle_plugin_shortcut_pane_g

0x5772,	// (0x00007e82) cell_ai_shortcut_pane_ParamLimits

0x5772,	// (0x00007e82) cell_ai_shortcut_pane

0x5793,	// (0x00007ea3) cell_ai_shortcut_pane_g1_ParamLimits

0x5793,	// (0x00007ea3) cell_ai_shortcut_pane_g1

0x55c3,	// (0x00007cd3) ai_gene_pane_1_cp2

0x57b5,	// (0x00007ec5) ai_gene_pane_2_cp2

0x57bd,	// (0x00007ecd) list_highlight_pane_cp15

0x57c6,	// (0x00007ed6) list_single_idle_plugin_calendar_pane_g1

0x57bd,	// (0x00007ecd) list_highlight_pane_cp17

0x57ce,	// (0x00007ede) list_single_idle_plugin_calendar_pane_g1_copy1

0x57d6,	// (0x00007ee6) list_single_idle_plugin_player_pane_g1

0x27a8,	// (0x00004eb8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x0001248f) list_single_idle_plugin_player_pane_g

0x57de,	// (0x00007eee) list_single_idle_plugin_player_pane_t1

0x57ec,	// (0x00007efc) list_single_idle_plugin_player_pane_t2

0x57fa,	// (0x00007f0a) list_single_idle_plugin_player_pane_t3

0x5808,	// (0x00007f18) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x00012494) list_single_idle_plugin_player_pane_t

0x5816,	// (0x00007f26) wait_bar_pane_cp15

0x581e,	// (0x00007f2e) grid_ai_notification_pane

0x27a8,	// (0x00004eb8) list_single_idle_plugin_notification_pane_g1

0x5827,	// (0x00007f37) cell_ai_notification_pane_ParamLimits

0x5827,	// (0x00007f37) cell_ai_notification_pane

0x5834,	// (0x00007f44) cell_ai_notification_pane_g1

0x583c,	// (0x00007f4c) cell_ai_notification_pane_t1

0x584a,	// (0x00007f5a) tb_ext_find_button_pane

0x5852,	// (0x00007f62) tb_ext_find_pane_g1

0x585a,	// (0x00007f6a) tb_ext_find_pane_t1

0xecd2,	// (0x000113e2) tb_ext_find_button_pane_g1

0x5868,	// (0x00007f78) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x0001249d) tb_ext_find_button_pane_g

0x5608,	// (0x00007d18) main_idle_act4_pane_t1_ParamLimits

0x561a,	// (0x00007d2a) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x0001245b) main_idle_act4_pane_t_ParamLimits

0x5642,	// (0x00007d52) popup_clock_digital_analogue_window_cp2_ParamLimits

0x5650,	// (0x00007d60) sat_plugin_idle_act4_pane_ParamLimits

0x5650,	// (0x00007d60) sat_plugin_idle_act4_pane

0x5871,	// (0x00007f81) sat_plugin_idle_act4_pane_t1_ParamLimits

0x5871,	// (0x00007f81) sat_plugin_idle_act4_pane_t1

0x5884,	// (0x00007f94) sat_plugin_idle_act4_pane_t2_ParamLimits

0x5884,	// (0x00007f94) sat_plugin_idle_act4_pane_t2

0x5897,	// (0x00007fa7) sat_plugin_idle_act4_pane_t3_ParamLimits

0x5897,	// (0x00007fa7) sat_plugin_idle_act4_pane_t3

0x58aa,	// (0x00007fba) sat_plugin_idle_act4_pane_t4_ParamLimits

0x58aa,	// (0x00007fba) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x000124a2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x000124a2) sat_plugin_idle_act4_pane_t

0xbdda,	// (0x0000e4ea) popup_battery_window_ParamLimits

0xbdda,	// (0x0000e4ea) popup_battery_window

0xdad4,	// (0x000101e4) bg_popup_sub_pane_cp25_ParamLimits

0xdad4,	// (0x000101e4) bg_popup_sub_pane_cp25

0x58bd,	// (0x00007fcd) popup_battery_window_g1_ParamLimits

0x58bd,	// (0x00007fcd) popup_battery_window_g1

0x58c9,	// (0x00007fd9) popup_battery_window_t1_ParamLimits

0x58c9,	// (0x00007fd9) popup_battery_window_t1

0x58db,	// (0x00007feb) popup_battery_window_t2_ParamLimits

0x58db,	// (0x00007feb) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x000124ab) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x000124ab) popup_battery_window_t

0xf2b8,	// (0x000119c8) midp_canvas_pane_ParamLimits

0xf327,	// (0x00011a37) midp_keypad_pane_ParamLimits

0xf327,	// (0x00011a37) midp_keypad_pane

0x0124,	// (0x00002834) main_midp_pane_ParamLimits

0x303d,	// (0x0000574d) signal_pane_g2_cp_ParamLimits

0x58f8,	// (0x00008008) aid_size_cell_midp_keypad_ParamLimits

0x58f8,	// (0x00008008) aid_size_cell_midp_keypad

0x5912,	// (0x00008022) midp_keyp_game_grid_pane_ParamLimits

0x5912,	// (0x00008022) midp_keyp_game_grid_pane

0x592c,	// (0x0000803c) midp_keyp_rocker_pane_ParamLimits

0x592c,	// (0x0000803c) midp_keyp_rocker_pane

0x5959,	// (0x00008069) midp_keyp_sk_left_pane_ParamLimits

0x5959,	// (0x00008069) midp_keyp_sk_left_pane

0x59b1,	// (0x000080c1) midp_keyp_sk_right_pane_ParamLimits

0x59b1,	// (0x000080c1) midp_keyp_sk_right_pane

0xd630,	// (0x0000fd40) bg_button_pane_cp03

0x5a03,	// (0x00008113) midp_keyp_sk_left_pane_g1

0xd630,	// (0x0000fd40) bg_button_pane_cp04

0x5a03,	// (0x00008113) midp_keyp_sk_right_pane_g1

0x3547,	// (0x00005c57) midp_keyp_rocker_pane_g1

0x5a0c,	// (0x0000811c) keyp_game_cell_pane_ParamLimits

0x5a0c,	// (0x0000811c) keyp_game_cell_pane

0xd630,	// (0x0000fd40) bg_button_pane_cp02

0x5a1d,	// (0x0000812d) keyp_game_cell_pane_g1

0xbe10,	// (0x0000e520) popup_fep_vkb2_window_ParamLimits

0xbe10,	// (0x0000e520) popup_fep_vkb2_window

0xcf27,	// (0x0000f637) aid_size_cell_vkb2_ParamLimits

0xcf27,	// (0x0000f637) aid_size_cell_vkb2

0xcf7b,	// (0x0000f68b) popup_fep_vkb2_window_g1_ParamLimits

0xcf7b,	// (0x0000f68b) popup_fep_vkb2_window_g1

0xcfc3,	// (0x0000f6d3) vkb2_area_bottom_pane_ParamLimits

0xcfc3,	// (0x0000f6d3) vkb2_area_bottom_pane

0xcffb,	// (0x0000f70b) vkb2_area_keypad_pane_ParamLimits

0xcffb,	// (0x0000f70b) vkb2_area_keypad_pane

0xd033,	// (0x0000f743) vkb2_area_top_pane_ParamLimits

0xd033,	// (0x0000f743) vkb2_area_top_pane

0xd0a3,	// (0x0000f7b3) vkb2_top_entry_pane_ParamLimits

0xd0a3,	// (0x0000f7b3) vkb2_top_entry_pane

0xd0cd,	// (0x0000f7dd) vkb2_top_grid_left_pane_ParamLimits

0xd0cd,	// (0x0000f7dd) vkb2_top_grid_left_pane

0xd0eb,	// (0x0000f7fb) vkb2_top_grid_right_pane_ParamLimits

0xd0eb,	// (0x0000f7fb) vkb2_top_grid_right_pane

0xd109,	// (0x0000f819) vkb2_cell_keypad_pane_ParamLimits

0xd109,	// (0x0000f819) vkb2_cell_keypad_pane

0xd1ba,	// (0x0000f8ca) vkb2_area_bottom_grid_pane_ParamLimits

0xd1ba,	// (0x0000f8ca) vkb2_area_bottom_grid_pane

0xd1de,	// (0x0000f8ee) vkb2_area_bottom_pane_g1_ParamLimits

0xd1de,	// (0x0000f8ee) vkb2_area_bottom_pane_g1

0xd202,	// (0x0000f912) vkb2_area_bottom_pane_g2_ParamLimits

0xd202,	// (0x0000f912) vkb2_area_bottom_pane_g2

0xd230,	// (0x0000f940) vkb2_area_bottom_pane_g3_ParamLimits

0xd230,	// (0x0000f940) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x000124b0) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x000124b0) vkb2_area_bottom_pane_g

0xd281,	// (0x0000f991) vkb2_top_cell_left_pane_ParamLimits

0xd281,	// (0x0000f991) vkb2_top_cell_left_pane

0x5db6,	// (0x000084c6) vkb2_top_entry_pane_g1_ParamLimits

0x5db6,	// (0x000084c6) vkb2_top_entry_pane_g1

0x5dc4,	// (0x000084d4) vkb2_top_entry_pane_t1_ParamLimits

0x5dc4,	// (0x000084d4) vkb2_top_entry_pane_t1

0x5df6,	// (0x00008506) vkb2_top_entry_pane_t2_ParamLimits

0x5df6,	// (0x00008506) vkb2_top_entry_pane_t2

0x5e28,	// (0x00008538) vkb2_top_entry_pane_t3_ParamLimits

0x5e28,	// (0x00008538) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x000124b7) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x000124b7) vkb2_top_entry_pane_t

0xd2ce,	// (0x0000f9de) vkb2_top_grid_right_pane_g1_ParamLimits

0xd2ce,	// (0x0000f9de) vkb2_top_grid_right_pane_g1

0xd2e4,	// (0x0000f9f4) vkb2_top_grid_right_pane_g2_ParamLimits

0xd2e4,	// (0x0000f9f4) vkb2_top_grid_right_pane_g2

0xd2fc,	// (0x0000fa0c) vkb2_top_grid_right_pane_g3_ParamLimits

0xd2fc,	// (0x0000fa0c) vkb2_top_grid_right_pane_g3

0xd314,	// (0x0000fa24) vkb2_top_grid_right_pane_g4_ParamLimits

0xd314,	// (0x0000fa24) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x000124be) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x000124be) vkb2_top_grid_right_pane_g

0xd32a,	// (0x0000fa3a) vkb2_top_cell_left_pane_g1

0xd341,	// (0x0000fa51) vkb2_cell_keypad_pane_g1_ParamLimits

0xd341,	// (0x0000fa51) vkb2_cell_keypad_pane_g1

0x5eec,	// (0x000085fc) vkb2_cell_keypad_pane_t1_ParamLimits

0x5eec,	// (0x000085fc) vkb2_cell_keypad_pane_t1

0xd34f,	// (0x0000fa5f) vkb2_cell_bottom_grid_pane_ParamLimits

0xd34f,	// (0x0000fa5f) vkb2_cell_bottom_grid_pane

0xd388,	// (0x0000fa98) vkb2_cell_bottom_grid_pane_g1

0x5690,	// (0x00007da0) aid_call2_pane_cp02

0x5698,	// (0x00007da8) aid_call_pane_cp02

0x56a0,	// (0x00007db0) clock_digital_number_pane_cp10

0x56a8,	// (0x00007db8) clock_digital_number_pane_cp11

0x56b0,	// (0x00007dc0) clock_digital_number_pane_cp12

0x56b8,	// (0x00007dc8) clock_digital_number_pane_cp13

0x56c0,	// (0x00007dd0) clock_digital_separator_pane_cp10

0xecd2,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g1

0xecd2,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g2

0x56c8,	// (0x00007dd8) popup_clock_digital_analogue_window_cp2_g3

0xecd2,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g4

0x56c8,	// (0x00007dd8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x00012473) popup_clock_digital_analogue_window_cp2_g

0x56d0,	// (0x00007de0) popup_clock_digital_analogue_window_cp2_t1

0x56de,	// (0x00007dee) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0001247e) popup_clock_digital_analogue_window_cp2_t

0x3547,	// (0x00005c57) clock_digital_number_pane_cp10_g1

0x3547,	// (0x00005c57) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x00012261) clock_digital_number_pane_cp10_g

0x3547,	// (0x00005c57) clock_digital_separator_pane_cp10_g1

0x3547,	// (0x00005c57) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x00012261) clock_digital_separator_pane_cp10_g

0x550d,	// (0x00007c1d) uniindi_top_pane_g3

0x551e,	// (0x00007c2e) uniindi_top_pane_g4

0xd174,	// (0x0000f884) vkb2_row_keypad_pane_ParamLimits

0xd174,	// (0x0000f884) vkb2_row_keypad_pane

0xd3a4,	// (0x0000fab4) vkb2_cell_t_keypad_pane_ParamLimits

0xd3a4,	// (0x0000fab4) vkb2_cell_t_keypad_pane

0xd3b1,	// (0x0000fac1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd3b1,	// (0x0000fac1) vkb2_cell_t_keypad_pane_cp08

0xd3c1,	// (0x0000fad1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd3c1,	// (0x0000fad1) vkb2_cell_t_keypad_pane_cp09

0xd3d2,	// (0x0000fae2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd3d2,	// (0x0000fae2) vkb2_cell_t_keypad_pane_cp01

0xd3e2,	// (0x0000faf2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd3e2,	// (0x0000faf2) vkb2_cell_t_keypad_pane_cp02

0xd3f2,	// (0x0000fb02) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd3f2,	// (0x0000fb02) vkb2_cell_t_keypad_pane_cp03

0xd402,	// (0x0000fb12) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd402,	// (0x0000fb12) vkb2_cell_t_keypad_pane_cp04

0xd412,	// (0x0000fb22) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd412,	// (0x0000fb22) vkb2_cell_t_keypad_pane_cp05

0xd422,	// (0x0000fb32) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd422,	// (0x0000fb32) vkb2_cell_t_keypad_pane_cp06

0xd432,	// (0x0000fb42) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd432,	// (0x0000fb42) vkb2_cell_t_keypad_pane_cp07

0xd442,	// (0x0000fb52) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd442,	// (0x0000fb52) vkb2_cell_t_keypad_pane_cp10

0xcc62,	// (0x0000f372) vkb2_cell_t_keypad_pane_g1

0x600b,	// (0x0000871b) vkb2_cell_t_keypad_pane_t1

0xbd17,	// (0x0000e427) popup_grid_graphic2_window

0x601d,	// (0x0000872d) aid_size_cell_graphic2_ParamLimits

0x601d,	// (0x0000872d) aid_size_cell_graphic2

0x35a2,	// (0x00005cb2) bg_popup_window_pane_cp21_ParamLimits

0x35a2,	// (0x00005cb2) bg_popup_window_pane_cp21

0x6049,	// (0x00008759) graphic2_pages_pane_ParamLimits

0x6049,	// (0x00008759) graphic2_pages_pane

0x6083,	// (0x00008793) grid_graphic2_control_pane_ParamLimits

0x6083,	// (0x00008793) grid_graphic2_control_pane

0x60ab,	// (0x000087bb) grid_graphic2_pane_ParamLimits

0x60ab,	// (0x000087bb) grid_graphic2_pane

0x60fb,	// (0x0000880b) cell_graphic2_pane

0xd630,	// (0x0000fd40) main_comp_mode_pane

0x4cd8,	// (0x000073e8) list_ai3_gene_pane_ParamLimits

0x5099,	// (0x000077a9) bg_popup_window_pane_cp19_ParamLimits

0x50a5,	// (0x000077b5) bg_touch_area_indi_pane_ParamLimits

0x50a5,	// (0x000077b5) bg_touch_area_indi_pane

0x50bb,	// (0x000077cb) bg_touch_area_indi_pane_cp01_ParamLimits

0x50bb,	// (0x000077cb) bg_touch_area_indi_pane_cp01

0x50d1,	// (0x000077e1) bg_touch_area_indi_pane_cp02_ParamLimits

0x50d1,	// (0x000077e1) bg_touch_area_indi_pane_cp02

0x50e7,	// (0x000077f7) bg_touch_area_indi_pane_cp03_ParamLimits

0x50e7,	// (0x000077f7) bg_touch_area_indi_pane_cp03

0x50fd,	// (0x0000780d) popup_slider_window_g1_ParamLimits

0x5119,	// (0x00007829) popup_slider_window_g2_ParamLimits

0x5135,	// (0x00007845) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x00012408) popup_slider_window_g_ParamLimits

0x5191,	// (0x000078a1) popup_slider_window_t1_ParamLimits

0x5203,	// (0x00007913) small_volume_slider_vertical_pane_ParamLimits

0x60fb,	// (0x0000880b) cell_graphic2_pane_ParamLimits

0x6138,	// (0x00008848) bg_button_pane_cp10_ParamLimits

0x6138,	// (0x00008848) bg_button_pane_cp10

0x6149,	// (0x00008859) bg_button_pane_cp11_ParamLimits

0x6149,	// (0x00008859) bg_button_pane_cp11

0x615a,	// (0x0000886a) graphic2_pages_pane_g1_ParamLimits

0x615a,	// (0x0000886a) graphic2_pages_pane_g1

0x616d,	// (0x0000887d) graphic2_pages_pane_g2_ParamLimits

0x616d,	// (0x0000887d) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x000124cc) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x000124cc) graphic2_pages_pane_g

0x6183,	// (0x00008893) graphic2_pages_pane_t1_ParamLimits

0x6183,	// (0x00008893) graphic2_pages_pane_t1

0x6199,	// (0x000088a9) cell_graphic2_control_pane_ParamLimits

0x6199,	// (0x000088a9) cell_graphic2_control_pane

0x61b3,	// (0x000088c3) cell_graphic2_pane_g1_ParamLimits

0x61b3,	// (0x000088c3) cell_graphic2_pane_g1

0x61c0,	// (0x000088d0) cell_graphic2_pane_g2_ParamLimits

0x61c0,	// (0x000088d0) cell_graphic2_pane_g2

0x61cd,	// (0x000088dd) cell_graphic2_pane_g3_ParamLimits

0x61cd,	// (0x000088dd) cell_graphic2_pane_g3

0x61da,	// (0x000088ea) cell_graphic2_pane_g4_ParamLimits

0x61da,	// (0x000088ea) cell_graphic2_pane_g4

0x61e7,	// (0x000088f7) cell_graphic2_pane_g5_ParamLimits

0x61e7,	// (0x000088f7) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x000124d1) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x000124d1) cell_graphic2_pane_g

0x6202,	// (0x00008912) cell_graphic2_pane_t1_ParamLimits

0x6202,	// (0x00008912) cell_graphic2_pane_t1

0x0c7c,	// (0x0000338c) grid_highlight_pane_cp11_ParamLimits

0x0c7c,	// (0x0000338c) grid_highlight_pane_cp11

0xe517,	// (0x00010c27) bg_button_pane_cp05

0x6218,	// (0x00008928) cell_graphic2_control_pane_g1

0x3547,	// (0x00005c57) bg_touch_area_indi_pane_g1

0x6225,	// (0x00008935) aid_cmod_rocker_key_size

0x622f,	// (0x0000893f) aid_cmode_itu_key_size

0x6239,	// (0x00008949) main_cmode_video_pane

0x6241,	// (0x00008951) main_comp_mode_itu_pane

0x624b,	// (0x0000895b) main_comp_mode_rocker_pane

0x6253,	// (0x00008963) cell_cmode_rocker_pane_ParamLimits

0x6253,	// (0x00008963) cell_cmode_rocker_pane

0x6265,	// (0x00008975) cell_cmode_itu_pane_ParamLimits

0x6265,	// (0x00008975) cell_cmode_itu_pane

0xe517,	// (0x00010c27) bg_button_pane_cp06_ParamLimits

0xe517,	// (0x00010c27) bg_button_pane_cp06

0x3987,	// (0x00006097) cell_cmode_rocker_pane_g1_ParamLimits

0x3987,	// (0x00006097) cell_cmode_rocker_pane_g1

0x5377,	// (0x00007a87) cell_cmode_rocker_pane_g2_ParamLimits

0x5377,	// (0x00007a87) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x000124dc) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x000124dc) cell_cmode_rocker_pane_g

0xd630,	// (0x0000fd40) bg_button_pane_cp07

0x627a,	// (0x0000898a) cell_cmode_itu_pane_g1

0x6283,	// (0x00008993) cell_cmode_itu_pane_t1

0x6291,	// (0x000089a1) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x000124e1) cell_cmode_itu_pane_t

0x558f,	// (0x00007c9f) aid_touch_ctrl_left

0x5597,	// (0x00007ca7) aid_touch_ctrl_right

0xd630,	// (0x0000fd40) compa_mode_pane

0x629f,	// (0x000089af) aid_cmod_rocker_key_size_cp

0x62a9,	// (0x000089b9) aid_cmode_itu_key_size_cp

0x62b3,	// (0x000089c3) compa_mode_pane_g1

0x62bb,	// (0x000089cb) compa_mode_pane_g2

0x62c3,	// (0x000089d3) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x000124e6) compa_mode_pane_g

0x62cb,	// (0x000089db) main_comp_mode_itu_pane_cp

0x62d3,	// (0x000089e3) main_comp_mode_rocker_pane_cp

0x62db,	// (0x000089eb) cell_cmode_itu_pane_cp_ParamLimits

0x62db,	// (0x000089eb) cell_cmode_itu_pane_cp

0x62f0,	// (0x00008a00) cell_cmode_rocker_pane_cp_ParamLimits

0x62f0,	// (0x00008a00) cell_cmode_rocker_pane_cp

0xe517,	// (0x00010c27) bg_button_pane_cp06_cp_ParamLimits

0xe517,	// (0x00010c27) bg_button_pane_cp06_cp

0x3987,	// (0x00006097) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3987,	// (0x00006097) cell_cmode_rocker_pane_g1_cp

0x3547,	// (0x00005c57) cell_cmode_rocker_pane_g2_cp

0xd630,	// (0x0000fd40) bg_button_pane_cp07_cp

0x6302,	// (0x00008a12) cell_cmode_itu_pane_g1_cp

0x630b,	// (0x00008a1b) cell_cmode_itu_pane_t1_cp

0x6319,	// (0x00008a29) cell_cmode_itu_pane_t2_cp

0x229c,	// (0x000049ac) settings_code_pane_cp2

0xd801,	// (0x0000ff11) bg_popup_window_pane_cp3_ParamLimits

0xdcac,	// (0x000103bc) heading_pane_cp3_ParamLimits

0xdcb8,	// (0x000103c8) listscroll_popup_graphic_pane_ParamLimits

0xca1d,	// (0x0000f12d) fep_hwr_aid_pane_ParamLimits

0xce7d,	// (0x0000f58d) aid_touch_sctrl_top_ParamLimits

0xce98,	// (0x0000f5a8) sctrl_sk_top_pane_g1_ParamLimits

0xcc62,	// (0x0000f372) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x00012421) sctrl_sk_top_pane_g_ParamLimits

0xcea5,	// (0x0000f5b5) sctrl_sk_top_pane_t1_ParamLimits

0xce7d,	// (0x0000f58d) aid_touch_sctrl_bottom_ParamLimits

0xcea5,	// (0x0000f5b5) sctrl_sk_bottom_pane_t1_ParamLimits

0x54d9,	// (0x00007be9) aid_area_touch_clock

0xd06b,	// (0x0000f77b) aid_vkb2_area_top_pane_cell_ParamLimits

0xd06b,	// (0x0000f77b) aid_vkb2_area_top_pane_cell

0xd196,	// (0x0000f8a6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd196,	// (0x0000f8a6) aid_vkb2_area_bottom_pane_cell

0x5dae,	// (0x000084be) popup_char_count_window

0x6327,	// (0x00008a37) popup_char_count_window_g1

0x6330,	// (0x00008a40) popup_char_count_window_g2

0x6339,	// (0x00008a49) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x000124ed) popup_char_count_window_g

0x6342,	// (0x00008a52) popup_char_count_window_t1

0xcf59,	// (0x0000f669) popup_fep_char_preview_window_ParamLimits

0xcf59,	// (0x0000f669) popup_fep_char_preview_window

0xd089,	// (0x0000f799) vkb2_top_candi_pane_ParamLimits

0xd089,	// (0x0000f799) vkb2_top_candi_pane

0x6350,	// (0x00008a60) cell_vkb2_top_candi_pane_ParamLimits

0x6350,	// (0x00008a60) cell_vkb2_top_candi_pane

0xd457,	// (0x0000fb67) bg_popup_fep_char_preview_window_ParamLimits

0xd457,	// (0x0000fb67) bg_popup_fep_char_preview_window

0xd465,	// (0x0000fb75) popup_fep_char_preview_window_t1_ParamLimits

0xd465,	// (0x0000fb75) popup_fep_char_preview_window_t1

0x63d3,	// (0x00008ae3) bg_popup_fep_char_preview_window_g1

0x63cb,	// (0x00008adb) bg_popup_fep_char_preview_window_g2

0x63c3,	// (0x00008ad3) bg_popup_fep_char_preview_window_g3

0x63fb,	// (0x00008b0b) bg_popup_fep_char_preview_window_g4

0x63f3,	// (0x00008b03) bg_popup_fep_char_preview_window_g5

0xd49f,	// (0x0000fbaf) bg_popup_fep_char_preview_window_g6

0x63e3,	// (0x00008af3) bg_popup_fep_char_preview_window_g7

0x63db,	// (0x00008aeb) bg_popup_fep_char_preview_window_g8

0x6403,	// (0x00008b13) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x000124f4) bg_popup_fep_char_preview_window_g

0xcc62,	// (0x0000f372) cell_vkb2_top_candi_pane_g1_ParamLimits

0xcc62,	// (0x0000f372) cell_vkb2_top_candi_pane_g1

0xcc70,	// (0x0000f380) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcc70,	// (0x0000f380) cell_vkb2_top_candi_pane_g2

0x642c,	// (0x00008b3c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x642c,	// (0x00008b3c) cell_vkb2_top_candi_pane_g3

0xd4a7,	// (0x0000fbb7) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd4a7,	// (0x0000fbb7) cell_vkb2_top_candi_pane_g4

0x3cff,	// (0x0000640f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x3cff,	// (0x0000640f) cell_vkb2_top_candi_pane_g5

0xd4c8,	// (0x0000fbd8) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4c8,	// (0x0000fbd8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x00012507) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x00012507) cell_vkb2_top_candi_pane_g

0xd4d6,	// (0x0000fbe6) cell_vkb2_top_candi_pane_t1

0xc835,	// (0x0000ef45) aid_size_touch_slider_mark_ParamLimits

0xc835,	// (0x0000ef45) aid_size_touch_slider_mark

0x6077,	// (0x00008787) grid_graphic2_catg_pane_ParamLimits

0x6077,	// (0x00008787) grid_graphic2_catg_pane

0x60d7,	// (0x000087e7) popup_grid_graphic2_window_t1_ParamLimits

0x60d7,	// (0x000087e7) popup_grid_graphic2_window_t1

0x60e9,	// (0x000087f9) popup_grid_graphic2_window_t2_ParamLimits

0x60e9,	// (0x000087f9) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x000124c7) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x000124c7) popup_grid_graphic2_window_t

0xe517,	// (0x00010c27) bg_button_pane_cp05_ParamLimits

0x6218,	// (0x00008928) cell_graphic2_control_pane_g1_ParamLimits

0x6463,	// (0x00008b73) cell_graphic2_catg_pane_ParamLimits

0x6463,	// (0x00008b73) cell_graphic2_catg_pane

0xd630,	// (0x0000fd40) bg_button_pane_cp12

0x6475,	// (0x00008b85) cell_graphic2_catg_pane_g1

0x54a5,	// (0x00007bb5) cell_tb_ext_pane_t1_ParamLimits

0xd2a1,	// (0x0000f9b1) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd2a1,	// (0x0000f9b1) vkb2_top_cell_right_narrow_pane

0xd2b9,	// (0x0000f9c9) vkb2_top_cell_right_wide_pane_ParamLimits

0xd2b9,	// (0x0000f9c9) vkb2_top_cell_right_wide_pane

0xca0f,	// (0x0000f11f) bg_vkb2_func_pane_ParamLimits

0xca0f,	// (0x0000f11f) bg_vkb2_func_pane

0xd32a,	// (0x0000fa3a) vkb2_top_cell_left_pane_g1_ParamLimits

0xca0f,	// (0x0000f11f) bg_vkb2_fuc_pane_cp03_ParamLimits

0xca0f,	// (0x0000f11f) bg_vkb2_fuc_pane_cp03

0xd388,	// (0x0000fa98) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0b02,	// (0x00003212) bg_vkb2_func_pane_g1

0x0afa,	// (0x0000320a) bg_vkb2_func_pane_g2

0x0b0a,	// (0x0000321a) bg_vkb2_func_pane_g3

0x0b12,	// (0x00003222) bg_vkb2_func_pane_g4

0x0b1a,	// (0x0000322a) bg_vkb2_func_pane_g5

0x0b22,	// (0x00003232) bg_vkb2_func_pane_g6

0x0b32,	// (0x00003242) bg_vkb2_func_pane_g7

0x0b2a,	// (0x0000323a) bg_vkb2_func_pane_g8

0x0af2,	// (0x00003202) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x00012514) bg_vkb2_func_pane_g

0xca0f,	// (0x0000f11f) bg_vkb2_fuc_pane_cp01_ParamLimits

0xca0f,	// (0x0000f11f) bg_vkb2_fuc_pane_cp01

0xd32a,	// (0x0000fa3a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd32a,	// (0x0000fa3a) vkb2_top_cell_right_wide_pane_g1

0xca0f,	// (0x0000f11f) bg_vkb2_fuc_pane_cp02_ParamLimits

0xca0f,	// (0x0000f11f) bg_vkb2_fuc_pane_cp02

0xd388,	// (0x0000fa98) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd388,	// (0x0000fa98) vkb2_top_cell_right_narrow_pane_g1

0x502b,	// (0x0000773b) aid_touch_area_decrease_ParamLimits

0x502b,	// (0x0000773b) aid_touch_area_decrease

0x5043,	// (0x00007753) aid_touch_area_increase_ParamLimits

0x5043,	// (0x00007753) aid_touch_area_increase

0x504f,	// (0x0000775f) aid_touch_area_mute_ParamLimits

0x504f,	// (0x0000775f) aid_touch_area_mute

0x506b,	// (0x0000777b) aid_touch_area_slider_ParamLimits

0x506b,	// (0x0000777b) aid_touch_area_slider

0x5151,	// (0x00007861) popup_slider_window_g4_ParamLimits

0x5151,	// (0x00007861) popup_slider_window_g4

0x515d,	// (0x0000786d) popup_slider_window_g5_ParamLimits

0x515d,	// (0x0000786d) popup_slider_window_g5

0x517f,	// (0x0000788f) popup_slider_window_g6_ParamLimits

0x517f,	// (0x0000788f) popup_slider_window_g6

0x51bd,	// (0x000078cd) popup_slider_window_t2_ParamLimits

0x51bd,	// (0x000078cd) popup_slider_window_t2

0x0001,

0xfd05,	// (0x00012415) popup_slider_window_t_ParamLimits

0xfd05,	// (0x00012415) popup_slider_window_t

0x51d5,	// (0x000078e5) slider_pane_ParamLimits

0x51d5,	// (0x000078e5) slider_pane

0x647e,	// (0x00008b8e) slider_pane_g1_ParamLimits

0x647e,	// (0x00008b8e) slider_pane_g1

0x6492,	// (0x00008ba2) slider_pane_g2_ParamLimits

0x6492,	// (0x00008ba2) slider_pane_g2

0x64a8,	// (0x00008bb8) slider_pane_g3_ParamLimits

0x64a8,	// (0x00008bb8) slider_pane_g3

0x0003,

0xfe17,	// (0x00012527) slider_pane_g_ParamLimits

0xfe17,	// (0x00012527) slider_pane_g

0x0513,	// (0x00002c23) popup_tb_float_extension_window_ParamLimits

0x0513,	// (0x00002c23) popup_tb_float_extension_window

0x64d4,	// (0x00008be4) aid_size_cell_tb_float_ext

0xd630,	// (0x0000fd40) bg_popup_sub_window_cp28

0x64df,	// (0x00008bef) grid_tb_float_ext_pane

0x64e7,	// (0x00008bf7) cell_tb_float_ext_pane_ParamLimits

0x64e7,	// (0x00008bf7) cell_tb_float_ext_pane

0x64ff,	// (0x00008c0f) cell_tb_float_ext_pane_g1

0x6508,	// (0x00008c18) grid_highlight_pane_cp12

0xcb58,	// (0x0000f268) cell_last_hwr_side_pane_ParamLimits

0xcb58,	// (0x0000f268) cell_last_hwr_side_pane

0x3547,	// (0x00005c57) cell_last_hwr_side_pane_g1

0x6511,	// (0x00008c21) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x00012530) cell_last_hwr_side_pane_g

0xd25e,	// (0x0000f96e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd25e,	// (0x0000f96e) vkb2_area_bottom_space_btn_pane

0xcc62,	// (0x0000f372) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x600b,	// (0x0000871b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd4d6,	// (0x0000fbe6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd4ec,	// (0x0000fbfc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd4ec,	// (0x0000fbfc) vkb2_area_bottom_space_btn_pane_g1

0xd522,	// (0x0000fc32) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd522,	// (0x0000fc32) vkb2_area_bottom_space_btn_pane_g2

0xd558,	// (0x0000fc68) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd558,	// (0x0000fc68) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x00012535) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x00012535) vkb2_area_bottom_space_btn_pane_g

0xcacc,	// (0x0000f1dc) cel_fep_hwr_func_pane_ParamLimits

0xcacc,	// (0x0000f1dc) cel_fep_hwr_func_pane

0xcb08,	// (0x0000f218) cell_hwr_side_button_pane_ParamLimits

0xcb08,	// (0x0000f218) cell_hwr_side_button_pane

0x54d9,	// (0x00007be9) aid_area_touch_clock_ParamLimits

0xdad4,	// (0x000101e4) bg_uniindi_top_pane_ParamLimits

0x54eb,	// (0x00007bfb) uniindi_top_pane_g1_ParamLimits

0x5501,	// (0x00007c11) uniindi_top_pane_g2_ParamLimits

0x550d,	// (0x00007c1d) uniindi_top_pane_g3_ParamLimits

0x551e,	// (0x00007c2e) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x0001244d) uniindi_top_pane_g_ParamLimits

0x552b,	// (0x00007c3b) uniindi_top_pane_t1_ParamLimits

0xdad4,	// (0x000101e4) bg_vkb2_func_pane_cp01_ParamLimits

0xdad4,	// (0x000101e4) bg_vkb2_func_pane_cp01

0x65cc,	// (0x00008cdc) cel_fep_hwr_func_pane_g1_ParamLimits

0x65cc,	// (0x00008cdc) cel_fep_hwr_func_pane_g1

0xdad4,	// (0x000101e4) bg_vkb2_func_pane_cp02_ParamLimits

0xdad4,	// (0x000101e4) bg_vkb2_func_pane_cp02

0x65cc,	// (0x00008cdc) cell_hwr_side_button_pane_g1_ParamLimits

0x65cc,	// (0x00008cdc) cell_hwr_side_button_pane_g1

0x090d,	// (0x0000301d) status_pane_g4_ParamLimits

0x090d,	// (0x0000301d) status_pane_g4

0x0925,	// (0x00003035) status_pane_t1

0x3339,	// (0x00005a49) form2_midp_gauge_slider_cont_pane

0x3341,	// (0x00005a51) form2_midp_gauge_slider_pane_t1_ParamLimits

0x3353,	// (0x00005a63) form2_midp_gauge_slider_pane_t2_ParamLimits

0x3365,	// (0x00005a75) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x00012214) form2_midp_gauge_slider_pane_t_ParamLimits

0x3377,	// (0x00005a87) form2_midp_slider_pane_ParamLimits

0xcf19,	// (0x0000f629) aid_size_cell_func_vkb2_ParamLimits

0xcf19,	// (0x0000f629) aid_size_cell_func_vkb2

0x64c0,	// (0x00008bd0) slider_pane_g4_ParamLimits

0x64c0,	// (0x00008bd0) slider_pane_g4

0xd59e,	// (0x0000fcae) form2_midp_gauge_slider_pane_t2_cp01

0xd5ac,	// (0x0000fcbc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd5ac,	// (0x0000fcbc) form2_midp_gauge_slider_pane_t3_cp01

0xd5c9,	// (0x0000fcd9) form2_midp_slider_pane_cp01

0xd630,	// (0x0000fd40) navi_smil_pane

0x6639,	// (0x00008d49) navi_smil_pane_g1

0x6641,	// (0x00008d51) navi_smil_pane_t1

0x660e,	// (0x00008d1e) form2_midp_slider_pane_g1

0x6617,	// (0x00008d27) form2_midp_slider_pane_g2

0x661f,	// (0x00008d2f) form2_midp_slider_pane_g3

0x660e,	// (0x00008d1e) form2_midp_slider_pane_g4

0x6627,	// (0x00008d37) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001253e) form2_midp_slider_pane_g

0xd58e,	// (0x0000fc9e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd58e,	// (0x0000fc9e) vkb2_area_bottom_space_btn_pane_g4

0x074f,	// (0x00002e5f) lc0_navi_pane_ParamLimits

0x074f,	// (0x00002e5f) lc0_navi_pane

0x07c5,	// (0x00002ed5) lc0_stat_indi_pane_ParamLimits

0x07c5,	// (0x00002ed5) lc0_stat_indi_pane

0x07dc,	// (0x00002eec) ls0_title_pane_ParamLimits

0x07dc,	// (0x00002eec) ls0_title_pane

0xe517,	// (0x00010c27) bg_popup_sub_pane_cp14_ParamLimits

0x54c0,	// (0x00007bd0) list_uniindi_pane_ParamLimits

0x54cc,	// (0x00007bdc) uniindi_top_pane_ParamLimits

0x5567,	// (0x00007c77) list_single_uniindi_pane_g1_ParamLimits

0x557a,	// (0x00007c8a) list_single_uniindi_pane_t1_ParamLimits

0xd5d2,	// (0x0000fce2) lc0_stat_clock_pane_ParamLimits

0xd5d2,	// (0x0000fce2) lc0_stat_clock_pane

0x6669,	// (0x00008d79) lc0_stat_indi_pane_g1_ParamLimits

0x6669,	// (0x00008d79) lc0_stat_indi_pane_g1

0x665c,	// (0x00008d6c) lc0_stat_indi_pane_g2_ParamLimits

0x665c,	// (0x00008d6c) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x00012549) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x00012549) lc0_stat_indi_pane_g

0xd5df,	// (0x0000fcef) lc0_uni_indicator_pane_ParamLimits

0xd5df,	// (0x0000fcef) lc0_uni_indicator_pane

0x6683,	// (0x00008d93) ls0_title_pane_g1_ParamLimits

0x6683,	// (0x00008d93) ls0_title_pane_g1

0x6697,	// (0x00008da7) ls0_title_pane_t1_ParamLimits

0x6697,	// (0x00008da7) ls0_title_pane_t1

0xd5ec,	// (0x0000fcfc) lc0_uni_indicator_pane_g1_ParamLimits

0xd5ec,	// (0x0000fcfc) lc0_uni_indicator_pane_g1

0x66df,	// (0x00008def) lc0_stat_clock_pane_t1

0xd630,	// (0x0000fd40) main_ai5_pane

0x66ed,	// (0x00008dfd) ai5_sk_pane_ParamLimits

0x66ed,	// (0x00008dfd) ai5_sk_pane

0x66fa,	// (0x00008e0a) cell_ai5_widget_pane_ParamLimits

0x66fa,	// (0x00008e0a) cell_ai5_widget_pane

0x6755,	// (0x00008e65) aid_size_cell_widget_grid

0x6767,	// (0x00008e77) bg_ai5_widget_pane_ParamLimits

0x6767,	// (0x00008e77) bg_ai5_widget_pane

0x678f,	// (0x00008e9f) cell_ai5_widget_pane_g2

0x679f,	// (0x00008eaf) cell_ai5_widget_pane_g3

0x67b3,	// (0x00008ec3) cell_ai5_widget_pane_g4

0x67bf,	// (0x00008ecf) cell_ai5_widget_pane_g5

0x67cb,	// (0x00008edb) cell_ai5_widget_pane_g6

0x67d7,	// (0x00008ee7) cell_ai5_widget_pane_g7

0x681f,	// (0x00008f2f) cell_ai5_widget_pane_t1_ParamLimits

0x681f,	// (0x00008f2f) cell_ai5_widget_pane_t1

0x683c,	// (0x00008f4c) cell_ai5_widget_pane_t2_ParamLimits

0x683c,	// (0x00008f4c) cell_ai5_widget_pane_t2

0x6854,	// (0x00008f64) cell_ai5_widget_pane_t3_ParamLimits

0x6854,	// (0x00008f64) cell_ai5_widget_pane_t3

0x686c,	// (0x00008f7c) cell_ai5_widget_pane_t4_ParamLimits

0x686c,	// (0x00008f7c) cell_ai5_widget_pane_t4

0x6886,	// (0x00008f96) cell_ai5_widget_pane_t5_ParamLimits

0x6886,	// (0x00008f96) cell_ai5_widget_pane_t5

0x68a5,	// (0x00008fb5) cell_ai5_widget_pane_t6_ParamLimits

0x68a5,	// (0x00008fb5) cell_ai5_widget_pane_t6

0x68b7,	// (0x00008fc7) cell_ai5_widget_pane_t7_ParamLimits

0x68b7,	// (0x00008fc7) cell_ai5_widget_pane_t7

0x68d0,	// (0x00008fe0) cell_ai5_widget_pane_t8_ParamLimits

0x68d0,	// (0x00008fe0) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x00012563) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x00012563) cell_ai5_widget_pane_t

0x6918,	// (0x00009028) grid_ai5_widget_pane

0xe517,	// (0x00010c27) highlight_cell_ai5_widget_pane_ParamLimits

0xe517,	// (0x00010c27) highlight_cell_ai5_widget_pane

0x692e,	// (0x0000903e) ai5_sk_left_pane

0x6938,	// (0x00009048) ai5_sk_middle_pane

0x6942,	// (0x00009052) ai5_sk_right_pane

0x694c,	// (0x0000905c) bg_ai5_widget_pane_g1_ParamLimits

0x694c,	// (0x0000905c) bg_ai5_widget_pane_g1

0x6958,	// (0x00009068) bg_ai5_widget_pane_g2_ParamLimits

0x6958,	// (0x00009068) bg_ai5_widget_pane_g2

0x6964,	// (0x00009074) bg_ai5_widget_pane_g3_ParamLimits

0x6964,	// (0x00009074) bg_ai5_widget_pane_g3

0x6970,	// (0x00009080) bg_ai5_widget_pane_g4_ParamLimits

0x6970,	// (0x00009080) bg_ai5_widget_pane_g4

0x697c,	// (0x0000908c) bg_ai5_widget_pane_g5_ParamLimits

0x697c,	// (0x0000908c) bg_ai5_widget_pane_g5

0x6988,	// (0x00009098) bg_ai5_widget_pane_g6_ParamLimits

0x6988,	// (0x00009098) bg_ai5_widget_pane_g6

0x6994,	// (0x000090a4) bg_ai5_widget_pane_g7_ParamLimits

0x6994,	// (0x000090a4) bg_ai5_widget_pane_g7

0x69a0,	// (0x000090b0) bg_ai5_widget_pane_g8_ParamLimits

0x69a0,	// (0x000090b0) bg_ai5_widget_pane_g8

0x69ac,	// (0x000090bc) bg_ai5_widget_pane_g9_ParamLimits

0x69ac,	// (0x000090bc) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x00012578) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x00012578) bg_ai5_widget_pane_g

0x69d4,	// (0x000090e4) cell_shortcut_ai5_widget_pane_ParamLimits

0x69d4,	// (0x000090e4) cell_shortcut_ai5_widget_pane

0xd8e1,	// (0x0000fff1) bg_cell_shortcut_ai5_widget_pane

0x69e6,	// (0x000090f6) cell_grid_ai5_widget_pane_g1

0x69ef,	// (0x000090ff) highlight_cell_shortcut_ai5_widget_pane

0x0b02,	// (0x00003212) ai5_sk_left_pane_g1

0x69f7,	// (0x00009107) ai5_sk_left_pane_g2

0x69ff,	// (0x0000910f) ai5_sk_left_pane_g3

0x6a07,	// (0x00009117) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001258b) ai5_sk_left_pane_g

0x6a0f,	// (0x0000911f) ai5_sk_left_pane_t1

0x0afa,	// (0x0000320a) ai5_sk_right_pane_g1

0x6a1d,	// (0x0000912d) ai5_sk_right_pane_g2

0x6a25,	// (0x00009135) ai5_sk_right_pane_g3

0x6a2d,	// (0x0000913d) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x00012594) ai5_sk_right_pane_g

0x6a35,	// (0x00009145) ai5_sk_right_pane_t1

0x0afa,	// (0x0000320a) ai5_sk_middle_pane_g1

0x0b02,	// (0x00003212) ai5_sk_middle_pane_g2

0x0b1a,	// (0x0000322a) ai5_sk_middle_pane_g3

0x6a25,	// (0x00009135) ai5_sk_middle_pane_g4

0x69ff,	// (0x0000910f) ai5_sk_middle_pane_g5

0x6a43,	// (0x00009153) ai5_sk_middle_pane_g6

0x6a4b,	// (0x0000915b) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001259d) ai5_sk_middle_pane_g

0x05f6,	// (0x00002d06) aid_touch_area_size_lc0_ParamLimits

0x05f6,	// (0x00002d06) aid_touch_area_size_lc0

0xcc91,	// (0x0000f3a1) cell_hwr_candidate_pane_t1_ParamLimits

0x0610,	// (0x00002d20) aid_touch_navi_pane

0x08bf,	// (0x00002fcf) status_dt_navi_pane_ParamLimits

0x08bf,	// (0x00002fcf) status_dt_navi_pane

0x08cc,	// (0x00002fdc) status_dt_sta_pane_ParamLimits

0x08cc,	// (0x00002fdc) status_dt_sta_pane

0x6a53,	// (0x00009163) dt_sta_controll_pane

0x6a60,	// (0x00009170) dt_sta_indi_pane

0x6a71,	// (0x00009181) dt_sta_title_pane

0xdad4,	// (0x000101e4) bg_dt_sta_indi_pane_ParamLimits

0xdad4,	// (0x000101e4) bg_dt_sta_indi_pane

0x6a84,	// (0x00009194) dt_sta_battery_pane

0x6a8c,	// (0x0000919c) dt_sta_indi_pane_g1

0x6a95,	// (0x000091a5) dt_sta_indi_pane_g2

0x6a9e,	// (0x000091ae) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x000125ac) dt_sta_indi_pane_g

0x6aa7,	// (0x000091b7) dt_sta_signal_pane

0xe517,	// (0x00010c27) bg_dt_sta_title_pane_ParamLimits

0xe517,	// (0x00010c27) bg_dt_sta_title_pane

0x6ab0,	// (0x000091c0) dt_sta_title_pane_g1

0x6ab8,	// (0x000091c8) dt_sta_title_pane_t1_ParamLimits

0x6ab8,	// (0x000091c8) dt_sta_title_pane_t1

0xd630,	// (0x0000fd40) bg_dt_sta_control_pane

0x6acd,	// (0x000091dd) dt_sta_controll_pane_g1

0x6ad6,	// (0x000091e6) bg_dt_sta_title_pane_g1

0x6adf,	// (0x000091ef) bg_dt_sta_title_pane_g2

0x6ae8,	// (0x000091f8) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x000125b3) bg_dt_sta_title_pane_g

0x3547,	// (0x00005c57) bg_dt_sta_indi_pane_g1

0x6af1,	// (0x00009201) dt_sta_signal_pane_g1

0x6af9,	// (0x00009209) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x000125ba) dt_sta_signal_pane_g

0x6b01,	// (0x00009211) dt_sta_battery_pane_g1

0x6b0a,	// (0x0000921a) dt_sta_battery_pane_t1

0x3547,	// (0x00005c57) bg_dt_sta_control_pane_g1

0xeda2,	// (0x000114b2) fep_china_uni_eep_pane

0xedaa,	// (0x000114ba) fep_china_uni_entry_pane_ParamLimits

0xedba,	// (0x000114ca) popup_fep_china_uni_window_g1_ParamLimits

0xedca,	// (0x000114da) popup_fep_china_uni_window_g2_ParamLimits

0xedca,	// (0x000114da) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00011e68) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00011e68) popup_fep_china_uni_window_g

0x6b19,	// (0x00009229) fep_china_uni_eep_pane_g1

0x6b21,	// (0x00009231) fep_china_uni_eep_pane_t1

0x6630,	// (0x00008d40) aid_touch_area_size_smil_player

0x0747,	// (0x00002e57) lc0_clock_pane

0x0919,	// (0x00003029) status_pane_g5_ParamLimits

0x0919,	// (0x00003029) status_pane_g5

0x0287,	// (0x00002997) popup_keymap_window

0x08e1,	// (0x00002ff1) status_icon_pane

0x679f,	// (0x00008eaf) cell_ai5_widget_pane_g3_ParamLimits

0x67b3,	// (0x00008ec3) cell_ai5_widget_pane_g4_ParamLimits

0x67bf,	// (0x00008ecf) cell_ai5_widget_pane_g5_ParamLimits

0x67e3,	// (0x00008ef3) cell_ai5_widget_pane_g8_ParamLimits

0x67e3,	// (0x00008ef3) cell_ai5_widget_pane_g8

0x67f7,	// (0x00008f07) cell_ai5_widget_pane_g9_ParamLimits

0x67f7,	// (0x00008f07) cell_ai5_widget_pane_g9

0x680b,	// (0x00008f1b) cell_ai5_widget_pane_g10_ParamLimits

0x680b,	// (0x00008f1b) cell_ai5_widget_pane_g10

0x6b30,	// (0x00009240) status_icon_pane_g1

0xd630,	// (0x0000fd40) bg_popup_sub_pane_cp13

0x6b38,	// (0x00009248) popup_keymap_window_t1

0xf56b,	// (0x00011c7b) control_pane_g6_ParamLimits

0xf56b,	// (0x00011c7b) control_pane_g6

0xf578,	// (0x00011c88) control_pane_g7_ParamLimits

0xf578,	// (0x00011c88) control_pane_g7

0xf585,	// (0x00011c95) control_pane_g8_ParamLimits

0xf585,	// (0x00011c95) control_pane_g8

0x6a53,	// (0x00009163) dt_sta_controll_pane_ParamLimits

0x6a60,	// (0x00009170) dt_sta_indi_pane_ParamLimits

0x6a71,	// (0x00009181) dt_sta_title_pane_ParamLimits

0xdf33,	// (0x00010643) aid_size_touch_scroll_bar_cale

0xbdee,	// (0x0000e4fe) popup_discreet_window_ParamLimits

0xbdee,	// (0x0000e4fe) popup_discreet_window

0xbe52,	// (0x0000e562) popup_sk_window

0x1268,	// (0x00003978) bg_popup_sub_pane_cp28_ParamLimits

0x1268,	// (0x00003978) bg_popup_sub_pane_cp28

0x6b46,	// (0x00009256) popup_discreet_window_g1_ParamLimits

0x6b46,	// (0x00009256) popup_discreet_window_g1

0x6b66,	// (0x00009276) popup_discreet_window_t1_ParamLimits

0x6b66,	// (0x00009276) popup_discreet_window_t1

0x6b84,	// (0x00009294) popup_discreet_window_t2_ParamLimits

0x6b84,	// (0x00009294) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x000125bf) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x000125bf) popup_discreet_window_t

0xd5fe,	// (0x0000fd0e) popup_sk_window_g1

0xd607,	// (0x0000fd17) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x000125c6) popup_sk_window_g

0x6bf6,	// (0x00009306) popup_sk_window_t1

0x6be8,	// (0x000092f8) popup_sk_window_t1_copy1

0x678f,	// (0x00008e9f) cell_ai5_widget_pane_g2_ParamLimits

0x68e2,	// (0x00008ff2) cell_ai5_widget_pane_t9_ParamLimits

0x68e2,	// (0x00008ff2) cell_ai5_widget_pane_t9

0xd630,	// (0x0000fd40) main_fep_fshwr2_pane

0x6c04,	// (0x00009314) aid_fshwr2_btn_pane

0x6c0c,	// (0x0000931c) aid_fshwr2_syb_pane

0x6c14,	// (0x00009324) aid_fshwr2_txt_pane

0x6c1c,	// (0x0000932c) fshwr2_func_candi_pane

0x6c24,	// (0x00009334) fshwr2_hwr_syb_pane

0x6c2c,	// (0x0000933c) fshwr2_icf_pane

0xd630,	// (0x0000fd40) fshwr2_icf_bg_pane

0x6c46,	// (0x00009356) fshwr2_icf_pane_t1_ParamLimits

0x6c46,	// (0x00009356) fshwr2_icf_pane_t1

0x3547,	// (0x00005c57) fshwr2_func_candi_pane_g1

0x6c5d,	// (0x0000936d) fshwr2_func_candi_row_pane_ParamLimits

0x6c5d,	// (0x0000936d) fshwr2_func_candi_row_pane

0x6c6e,	// (0x0000937e) cell_fshwr2_syb_pane_ParamLimits

0x6c6e,	// (0x0000937e) cell_fshwr2_syb_pane

0x3987,	// (0x00006097) fshwr2_hwr_syb_pane_g1_ParamLimits

0x3987,	// (0x00006097) fshwr2_hwr_syb_pane_g1

0xd630,	// (0x0000fd40) bg_popup_call_pane_cp01

0x6c85,	// (0x00009395) fshwr2_func_candi_cell_pane_ParamLimits

0x6c85,	// (0x00009395) fshwr2_func_candi_cell_pane

0x6cb0,	// (0x000093c0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6cb0,	// (0x000093c0) fshwr2_func_candi_cell_bg_pane

0x6cca,	// (0x000093da) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6cca,	// (0x000093da) fshwr2_func_candi_cell_pane_g1

0x6cea,	// (0x000093fa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6cea,	// (0x000093fa) fshwr2_func_candi_cell_pane_t1

0xd630,	// (0x0000fd40) bg_button_pane_cp08

0xf2a4,	// (0x000119b4) cell_fshwr2_syb_bg_pane

0x6cfd,	// (0x0000940d) cell_fshwr2_syb_bg_pane_g1

0x6d05,	// (0x00009415) cell_fshwr2_syb_bg_pane_t1

0xe517,	// (0x00010c27) main_tmo_pane

0x1e66,	// (0x00004576) uni_indicator_pane_g1_ParamLimits

0x1e7b,	// (0x0000458b) uni_indicator_pane_g2_ParamLimits

0x1e91,	// (0x000045a1) uni_indicator_pane_g3_ParamLimits

0x1ea7,	// (0x000045b7) uni_indicator_pane_g4_ParamLimits

0x1ea7,	// (0x000045b7) uni_indicator_pane_g4

0x1ebb,	// (0x000045cb) uni_indicator_pane_g5_ParamLimits

0x1ebb,	// (0x000045cb) uni_indicator_pane_g5

0x1ecf,	// (0x000045df) uni_indicator_pane_g6_ParamLimits

0x1ecf,	// (0x000045df) uni_indicator_pane_g6

0xf949,	// (0x00012059) uni_indicator_pane_g_ParamLimits

0x500f,	// (0x0000771f) popup_tmo_note_window_ParamLimits

0x500f,	// (0x0000771f) popup_tmo_note_window

0xd630,	// (0x0000fd40) fshwr2_bg_pane

0x6cdb,	// (0x000093eb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6cdb,	// (0x000093eb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x000125cb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x000125cb) fshwr2_func_candi_cell_pane_g

0x3547,	// (0x00005c57) bg_popup_window_pane_cp01

0x6d14,	// (0x00009424) bg_popup_window_pane_g1_cp01

0x6d1d,	// (0x0000942d) bg_popup_window_pane_cp22_ParamLimits

0x6d1d,	// (0x0000942d) bg_popup_window_pane_cp22

0x6d2b,	// (0x0000943b) listscroll_tmo_link_pane_ParamLimits

0x6d2b,	// (0x0000943b) listscroll_tmo_link_pane

0x6d6b,	// (0x0000947b) popup_tmo_note_window_g1_ParamLimits

0x6d6b,	// (0x0000947b) popup_tmo_note_window_g1

0x6d78,	// (0x00009488) tmo_note_info_pane_ParamLimits

0x6d78,	// (0x00009488) tmo_note_info_pane

0x6d92,	// (0x000094a2) list_tmo_note_info_pane_g1_ParamLimits

0x6d92,	// (0x000094a2) list_tmo_note_info_pane_g1

0x6da9,	// (0x000094b9) list_tmo_note_info_pane_g2_ParamLimits

0x6da9,	// (0x000094b9) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x000125d0) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x000125d0) list_tmo_note_info_pane_g

0x6dc5,	// (0x000094d5) list_tmo_note_info_text_pane_ParamLimits

0x6dc5,	// (0x000094d5) list_tmo_note_info_text_pane

0x6e46,	// (0x00009556) list_tmo_link_pane

0x6e53,	// (0x00009563) scroll_pane_cp20

0x6e60,	// (0x00009570) list_single_tmo_link_pane_ParamLimits

0x6e60,	// (0x00009570) list_single_tmo_link_pane

0x6e70,	// (0x00009580) list_single_tmo_link_pane_t1

0x6e7e,	// (0x0000958e) list_tmo_note_info_text_pane_t1_ParamLimits

0x6e7e,	// (0x0000958e) list_tmo_note_info_text_pane_t1

0xe73d,	// (0x00010e4d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xe73d,	// (0x00010e4d) aid_size_touch_scroll_bar_cp01

0xe5b7,	// (0x00010cc7) aid_size_touch_slider_marker

0xbe3e,	// (0x0000e54e) popup_settings_window_ParamLimits

0xbe3e,	// (0x0000e54e) popup_settings_window

0x014a,	// (0x0000285a) popup_candi_list_indi_window

0x0610,	// (0x00002d20) aid_touch_navi_pane_ParamLimits

0xce51,	// (0x0000f561) rs_clock_indi_pane

0xce5a,	// (0x0000f56a) sctrl_sk_bottom_pane_ParamLimits

0xce6b,	// (0x0000f57b) sctrl_sk_top_pane_ParamLimits

0xcf73,	// (0x0000f683) popup_fep_tooltip_window

0x6755,	// (0x00008e65) aid_size_cell_widget_grid_ParamLimits

0x6783,	// (0x00008e93) cell_ai5_widget_pane_g1_ParamLimits

0x6783,	// (0x00008e93) cell_ai5_widget_pane_g1

0x67cb,	// (0x00008edb) cell_ai5_widget_pane_g6_ParamLimits

0x67d7,	// (0x00008ee7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001254e) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001254e) cell_ai5_widget_pane_g

0x6906,	// (0x00009016) cell_ai5_widget_pane_t10_ParamLimits

0x6906,	// (0x00009016) cell_ai5_widget_pane_t10

0x6918,	// (0x00009028) grid_ai5_widget_pane_ParamLimits

0x69b8,	// (0x000090c8) cell_contacts_ai5_widget_pane_ParamLimits

0x69b8,	// (0x000090c8) cell_contacts_ai5_widget_pane

0x6b99,	// (0x000092a9) popup_discreet_window_t3_ParamLimits

0x6b99,	// (0x000092a9) popup_discreet_window_t3

0x6c34,	// (0x00009344) popup_fshwr2_char_preview_window_ParamLimits

0x6c34,	// (0x00009344) popup_fshwr2_char_preview_window

0x6de3,	// (0x000094f3) tmo_note_info_pane_t1

0x6df8,	// (0x00009508) tmo_note_info_pane_t2

0x6e0d,	// (0x0000951d) tmo_note_info_pane_t3

0x6e22,	// (0x00009532) tmo_note_info_pane_t4

0x6e34,	// (0x00009544) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x000125d5) tmo_note_info_pane_t

0x6e46,	// (0x00009556) list_tmo_link_pane_ParamLimits

0x6e53,	// (0x00009563) scroll_pane_cp20_ParamLimits

0xd630,	// (0x0000fd40) bg_popup_fep_char_preview_window_cp01

0x6e97,	// (0x000095a7) popup_fshwr2_char_preview_window_t1

0x6ea5,	// (0x000095b5) popup_candi_list_indi_window_g1

0x6eae,	// (0x000095be) bg_cell_contacts_ai5_widget_pane

0x6eba,	// (0x000095ca) cell_contacts_ai5_widget_pane_g1

0x6ece,	// (0x000095de) cell_contacts_ai5_widget_pane_g2

0x6edd,	// (0x000095ed) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x000125e0) cell_contacts_ai5_widget_pane_g

0x6ef0,	// (0x00009600) cell_contacts_ai5_widget_pane_t1

0xe517,	// (0x00010c27) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6f68,	// (0x00009678) settings_container_pane

0xf2a4,	// (0x000119b4) listscroll_set_pane_copy1

0x2b50,	// (0x00005260) scroll_pane_cp121_copy1

0x6f74,	// (0x00009684) set_content_pane_copy1

0x6f7c,	// (0x0000968c) aid_height_set_list_copy1_ParamLimits

0x6f7c,	// (0x0000968c) aid_height_set_list_copy1

0x216e,	// (0x0000487e) aid_size_parent_copy1_ParamLimits

0x216e,	// (0x0000487e) aid_size_parent_copy1

0x6f88,	// (0x00009698) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6f88,	// (0x00009698) button_value_adjust_pane_cp6_copy1

0x0124,	// (0x00002834) list_highlight_pane_cp2_copy1_ParamLimits

0x0124,	// (0x00002834) list_highlight_pane_cp2_copy1

0x6f9c,	// (0x000096ac) list_set_pane_copy1_ParamLimits

0x6f9c,	// (0x000096ac) list_set_pane_copy1

0x6f05,	// (0x00009615) main_pane_set_t1_copy1_ParamLimits

0x6f05,	// (0x00009615) main_pane_set_t1_copy1

0x6f3f,	// (0x0000964f) main_pane_set_t2_copy1_ParamLimits

0x6f3f,	// (0x0000964f) main_pane_set_t2_copy1

0x702a,	// (0x0000973a) main_pane_set_t3_copy1

0x7038,	// (0x00009748) main_pane_set_t4_copy1

0x6f5c,	// (0x0000966c) set_content_pane_g1_copy1_ParamLimits

0x6f5c,	// (0x0000966c) set_content_pane_g1_copy1

0x7046,	// (0x00009756) setting_code_pane_copy1

0x704e,	// (0x0000975e) setting_slider_graphic_pane_copy1

0x704e,	// (0x0000975e) setting_slider_pane_copy1

0x7056,	// (0x00009766) setting_text_pane_copy1

0x704e,	// (0x0000975e) setting_volume_pane_copy1

0x705e,	// (0x0000976e) settings_code_pane_cp2_copy1

0x7066,	// (0x00009776) settings_code_pane_cp_copy1_ParamLimits

0x7066,	// (0x00009776) settings_code_pane_cp_copy1

0x707a,	// (0x0000978a) volume_set_pane_copy1

0x7082,	// (0x00009792) volume_set_pane_g10_copy1

0x708a,	// (0x0000979a) volume_set_pane_g1_copy1

0x7092,	// (0x000097a2) volume_set_pane_g2_copy1

0x709a,	// (0x000097aa) volume_set_pane_g3_copy1

0x70a2,	// (0x000097b2) volume_set_pane_g4_copy1

0x70aa,	// (0x000097ba) volume_set_pane_g5_copy1

0x70b2,	// (0x000097c2) volume_set_pane_g6_copy1

0x70ba,	// (0x000097ca) volume_set_pane_g7_copy1

0x70c2,	// (0x000097d2) volume_set_pane_g8_copy1

0x70ca,	// (0x000097da) volume_set_pane_g9_copy1

0xd801,	// (0x0000ff11) bg_set_opt_pane_cp_copy1_ParamLimits

0xd801,	// (0x0000ff11) bg_set_opt_pane_cp_copy1

0xda9a,	// (0x000101aa) setting_slider_pane_t1_copy1_ParamLimits

0xda9a,	// (0x000101aa) setting_slider_pane_t1_copy1

0x70d2,	// (0x000097e2) setting_slider_pane_t2_copy1_ParamLimits

0x70d2,	// (0x000097e2) setting_slider_pane_t2_copy1

0x70eb,	// (0x000097fb) setting_slider_pane_t3_copy1_ParamLimits

0x70eb,	// (0x000097fb) setting_slider_pane_t3_copy1

0xdab0,	// (0x000101c0) slider_set_pane_copy1_ParamLimits

0xdab0,	// (0x000101c0) slider_set_pane_copy1

0xe63d,	// (0x00010d4d) set_opt_bg_pane_g1_copy2

0xe645,	// (0x00010d55) set_opt_bg_pane_g2_copy2

0x7102,	// (0x00009812) set_opt_bg_pane_g3_copy2

0xe655,	// (0x00010d65) set_opt_bg_pane_g4_copy2

0xe65d,	// (0x00010d6d) set_opt_bg_pane_g5_copy2

0xe665,	// (0x00010d75) set_opt_bg_pane_g6_copy2

0x710a,	// (0x0000981a) set_opt_bg_pane_g7_copy2

0x7112,	// (0x00009822) set_opt_bg_pane_g8_copy2

0x711a,	// (0x0000982a) set_opt_bg_pane_g9_copy2

0x20b5,	// (0x000047c5) aid_size_touch_slider_mark_copy1_ParamLimits

0x20b5,	// (0x000047c5) aid_size_touch_slider_mark_copy1

0x22a4,	// (0x000049b4) slider_set_pane_g1_copy1

0x22ad,	// (0x000049bd) slider_set_pane_g2_copy1

0x20e2,	// (0x000047f2) slider_set_pane_g3_copy1_ParamLimits

0x20e2,	// (0x000047f2) slider_set_pane_g3_copy1

0x20f6,	// (0x00004806) slider_set_pane_g4_copy1_ParamLimits

0x20f6,	// (0x00004806) slider_set_pane_g4_copy1

0x210e,	// (0x0000481e) slider_set_pane_g5_copy1_ParamLimits

0x210e,	// (0x0000481e) slider_set_pane_g5_copy1

0x20e2,	// (0x000047f2) slider_set_pane_g6_copy1_ParamLimits

0x20e2,	// (0x000047f2) slider_set_pane_g6_copy1

0x7122,	// (0x00009832) slider_set_pane_g7_copy1_ParamLimits

0x7122,	// (0x00009832) slider_set_pane_g7_copy1

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp2_copy1

0xd843,	// (0x0000ff53) setting_slider_graphic_pane_g1_copy1

0x7138,	// (0x00009848) setting_slider_graphic_pane_t1_copy1

0x7147,	// (0x00009857) setting_slider_graphic_pane_t2_copy1

0x7156,	// (0x00009866) slider_set_pane_cp_copy1

0x7166,	// (0x00009876) input_focus_pane_cp1_copy1

0x716f,	// (0x0000987f) list_set_text_pane_copy1

0x7177,	// (0x00009887) setting_text_pane_g1_copy1

0x7180,	// (0x00009890) set_text_pane_t1_copy1

0x7166,	// (0x00009876) input_focus_pane_cp2_copy1

0x7177,	// (0x00009887) setting_code_pane_g1_copy1

0x7199,	// (0x000098a9) setting_code_pane_t1_copy1

0x71a7,	// (0x000098b7) list_set_graphic_pane_copy1

0xd721,	// (0x0000fe31) bg_set_opt_pane_cp4_copy1

0x71bb,	// (0x000098cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x71bb,	// (0x000098cb) list_set_graphic_pane_g1_copy1

0x71c7,	// (0x000098d7) list_set_graphic_pane_g2_copy1

0xf01f,	// (0x0001172f) list_set_graphic_pane_t1_copy1_ParamLimits

0xf01f,	// (0x0001172f) list_set_graphic_pane_t1_copy1

0x3547,	// (0x00005c57) rs_clock_indi_pane_g1

0x71cf,	// (0x000098df) rs_clock_indi_pane_t1

0x71dd,	// (0x000098ed) rs_indi_pane

0x71e5,	// (0x000098f5) rs_indi_pane_g1

0x71ee,	// (0x000098fe) rs_indi_pane_g2

0x6ea5,	// (0x000095b5) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x000125e7) rs_indi_pane_g

0xf2a4,	// (0x000119b4) bg_popup_preview_window_pane_cp03

0x71f7,	// (0x00009907) popup_fep_tooltip_window_t1

0x46a5,	// (0x00006db5) popup_note2_window_g2_ParamLimits

0x46a5,	// (0x00006db5) popup_note2_window_g2

0x0001,

0xfc7c,	// (0x0001238c) popup_note2_window_g_ParamLimits

0xfc7c,	// (0x0001238c) popup_note2_window_g

0x4c9e,	// (0x000073ae) bg_popup_sub_pane_cp11_ParamLimits

0x4cab,	// (0x000073bb) cell_ai3_links_pane_g1_ParamLimits

0x4cc2,	// (0x000073d2) cell_ai3_links_pane_t1

0x7180,	// (0x00009890) set_text_pane_t1_copy1_ParamLimits

0xf1cb,	// (0x000118db) cell_graphic_popup_pane_cp2_ParamLimits

0xf1cb,	// (0x000118db) cell_graphic_popup_pane_cp2

0x7205,	// (0x00009915) cell_graphic_popup_pane_g1_cp2

0xdde2,	// (0x000104f2) cell_graphic_popup_pane_g2_cp2

0x720d,	// (0x0000991d) cell_graphic_popup_pane_g3_cp2

0x7215,	// (0x00009925) cell_graphic_popup_pane_t2_cp2

0xddf3,	// (0x00010503) grid_highlight_pane_cp3_cp2

0xea29,	// (0x00011139) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe517,	// (0x00010c27) main_tmo_pane_ParamLimits

0x5007,	// (0x00007717) popup_tmo_big_image_note_window

0x6773,	// (0x00008e83) cell_ai5_widget_list_pane

0x677b,	// (0x00008e8b) cell_ai5_widget_lrg_icon_pane

0x6de3,	// (0x000094f3) tmo_note_info_pane_t1_ParamLimits

0x6df8,	// (0x00009508) tmo_note_info_pane_t2_ParamLimits

0x6e0d,	// (0x0000951d) tmo_note_info_pane_t3_ParamLimits

0x6e22,	// (0x00009532) tmo_note_info_pane_t4_ParamLimits

0x6e34,	// (0x00009544) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x000125d5) tmo_note_info_pane_t_ParamLimits

0x6f68,	// (0x00009678) settings_container_pane_ParamLimits

0x715e,	// (0x0000986e) indicator_popup_pane_cp5

0x715e,	// (0x0000986e) indicator_popup_pane_cp6

0x71a7,	// (0x000098b7) list_set_graphic_pane_copy1_ParamLimits

0xd630,	// (0x0000fd40) bg_popup_window_pane_cp23

0x7223,	// (0x00009933) popup_tmo_big_image_note_window_g1

0x722c,	// (0x0000993c) popup_tmo_big_image_note_window_t1

0x723a,	// (0x0000994a) popup_tmo_big_image_note_window_t2

0x7248,	// (0x00009958) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x000125ee) popup_tmo_big_image_note_window_t

0x7256,	// (0x00009966) cell_ai5_widget_lrg_icon_pane_g1

0x725e,	// (0x0000996e) cell_ai5_widget_lrg_icon_pane_t1

0x726c,	// (0x0000997c) cell_ai5_widget_list_row_pane_ParamLimits

0x726c,	// (0x0000997c) cell_ai5_widget_list_row_pane

0x7285,	// (0x00009995) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7285,	// (0x00009995) cell_ai5_widget_list_row_pane_g1

0x7292,	// (0x000099a2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7292,	// (0x000099a2) cell_ai5_widget_list_row_pane_t1

0x72aa,	// (0x000099ba) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x72aa,	// (0x000099ba) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x000125f5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x000125f5) cell_ai5_widget_list_row_pane_t

0xbd17,	// (0x0000e427) main_fep_vtchi_ss_pane

0x72bc,	// (0x000099cc) popup_fep_char_pre_window

0x72c4,	// (0x000099d4) popup_fep_ituss_window

0x72cd,	// (0x000099dd) popup_fep_vkbss_window

0x72d6,	// (0x000099e6) grid_vkbss_keypad_pane_ParamLimits

0x72d6,	// (0x000099e6) grid_vkbss_keypad_pane

0x72e6,	// (0x000099f6) ituss_keypad_pane

0x72ee,	// (0x000099fe) aid_vkbss_key_offset_ParamLimits

0x72ee,	// (0x000099fe) aid_vkbss_key_offset

0x72fd,	// (0x00009a0d) cell_vkbss_key_pane_ParamLimits

0x72fd,	// (0x00009a0d) cell_vkbss_key_pane

0x7313,	// (0x00009a23) bg_cell_vkbss_key_g1_ParamLimits

0x7313,	// (0x00009a23) bg_cell_vkbss_key_g1

0x731f,	// (0x00009a2f) cell_vkbss_key_3p_pane_ParamLimits

0x731f,	// (0x00009a2f) cell_vkbss_key_3p_pane

0x7333,	// (0x00009a43) cell_vkbss_key_g1_ParamLimits

0x7333,	// (0x00009a43) cell_vkbss_key_g1

0x7347,	// (0x00009a57) cell_vkbss_key_t1_ParamLimits

0x7347,	// (0x00009a57) cell_vkbss_key_t1

0x7372,	// (0x00009a82) cell_ituss_key_pane_ParamLimits

0x7372,	// (0x00009a82) cell_ituss_key_pane

0x7381,	// (0x00009a91) bg_cell_ituss_key_g1_ParamLimits

0x7381,	// (0x00009a91) bg_cell_ituss_key_g1

0x738d,	// (0x00009a9d) cell_ituss_key_pane_g1_ParamLimits

0x738d,	// (0x00009a9d) cell_ituss_key_pane_g1

0x7399,	// (0x00009aa9) cell_ituss_key_pane_g2_ParamLimits

0x7399,	// (0x00009aa9) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x000125fa) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x000125fa) cell_ituss_key_pane_g

0x73ac,	// (0x00009abc) cell_ituss_key_t1_ParamLimits

0x73ac,	// (0x00009abc) cell_ituss_key_t1

0x73ca,	// (0x00009ada) cell_ituss_key_t2_ParamLimits

0x73ca,	// (0x00009ada) cell_ituss_key_t2

0x73e9,	// (0x00009af9) cell_ituss_key_t3_ParamLimits

0x73e9,	// (0x00009af9) cell_ituss_key_t3

0x7408,	// (0x00009b18) cell_ituss_key_t4_ParamLimits

0x7408,	// (0x00009b18) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x000125ff) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x000125ff) cell_ituss_key_t

0x7427,	// (0x00009b37) cell_vkbss_key_3p_pane_g1

0x742f,	// (0x00009b3f) cell_vkbss_key_3p_pane_g2

0x7437,	// (0x00009b47) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00012608) cell_vkbss_key_3p_pane_g

0xd630,	// (0x0000fd40) bg_popup_fep_char_preview_window_cp02

0x743f,	// (0x00009b4f) popup_fep_char_pre_window_t1

0x674b,	// (0x00008e5b) main_ai5_sk_pane

0x6eae,	// (0x000095be) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6eba,	// (0x000095ca) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6ece,	// (0x000095de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6edd,	// (0x000095ed) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x000125e0) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6ef0,	// (0x00009600) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe517,	// (0x00010c27) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x744e,	// (0x00009b5e) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
