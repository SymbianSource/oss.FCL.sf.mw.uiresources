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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000272c };

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
0xd610,	// (0x0000fd3c) Screen

0xd622,	// (0x0000fd4e) application_window_ParamLimits

0xd622,	// (0x0000fd4e) application_window

0xd63a,	// (0x0000fd66) screen_g1

0xd644,	// (0x0000fd70) area_bottom_pane_ParamLimits

0xd644,	// (0x0000fd70) area_bottom_pane

0xd6a9,	// (0x0000fdd5) area_top_pane_ParamLimits

0xd6a9,	// (0x0000fdd5) area_top_pane

0xbd18,	// (0x0000e444) main_pane_ParamLimits

0xbd18,	// (0x0000e444) main_pane

0xd721,	// (0x0000fe4d) misc_graphics

0x0624,	// (0x00002d50) battery_pane_ParamLimits

0x0624,	// (0x00002d50) battery_pane

0x1420,	// (0x00003b4c) bg_status_flat_pane_g8

0x1428,	// (0x00003b54) bg_status_flat_pane_g9

0x06d9,	// (0x00002e05) context_pane_ParamLimits

0x06d9,	// (0x00002e05) context_pane

0x07f0,	// (0x00002f1c) navi_pane_ParamLimits

0x07f0,	// (0x00002f1c) navi_pane

0x086d,	// (0x00002f99) signal_pane_ParamLimits

0x086d,	// (0x00002f99) signal_pane

0x0008,

0xf8a1,	// (0x00011fcd) bg_status_flat_pane_g

0x08d6,	// (0x00003002) status_pane_g1_ParamLimits

0x08d6,	// (0x00003002) status_pane_g1

0x08e2,	// (0x0000300e) status_pane_g2_ParamLimits

0x08e2,	// (0x0000300e) status_pane_g2

0x08ee,	// (0x0000301a) status_pane_g3_ParamLimits

0x08ee,	// (0x0000301a) status_pane_g3

0x0004,

0xf7db,	// (0x00011f07) status_pane_g_ParamLimits

0xf7db,	// (0x00011f07) status_pane_g

0x0920,	// (0x0000304c) title_pane_ParamLimits

0x0920,	// (0x0000304c) title_pane

0x095d,	// (0x00003089) uni_indicator_pane_ParamLimits

0x095d,	// (0x00003089) uni_indicator_pane

0x00ae,	// (0x000027da) bg_list_pane_ParamLimits

0x00ae,	// (0x000027da) bg_list_pane

0x00ce,	// (0x000027fa) find_pane

0x00d6,	// (0x00002802) listscroll_app_pane_ParamLimits

0x00d6,	// (0x00002802) listscroll_app_pane

0x00e2,	// (0x0000280e) listscroll_form_pane

0x00ea,	// (0x00002816) listscroll_gen_pane_ParamLimits

0x00ea,	// (0x00002816) listscroll_gen_pane

0x00e2,	// (0x0000280e) listscroll_set_pane

0xe852,	// (0x00010f7e) main_idle_act_pane

0xf2a4,	// (0x000119d0) main_idle_trad_pane

0xf2a4,	// (0x000119d0) main_list_empty_pane

0x0111,	// (0x0000283d) main_midp_pane

0x011d,	// (0x00002849) main_pane_g1_ParamLimits

0x011d,	// (0x00002849) main_pane_g1

0x012b,	// (0x00002857) popup_ai_message_window_ParamLimits

0x012b,	// (0x00002857) popup_ai_message_window

0x01c9,	// (0x000028f5) popup_fep_china_uni_window_ParamLimits

0x01c9,	// (0x000028f5) popup_fep_china_uni_window

0x0207,	// (0x00002933) popup_fep_japan_candidate_window_ParamLimits

0x0207,	// (0x00002933) popup_fep_japan_candidate_window

0x0225,	// (0x00002951) popup_fep_japan_predictive_window_ParamLimits

0x0225,	// (0x00002951) popup_fep_japan_predictive_window

0x0251,	// (0x0000297d) popup_find_window

0x025e,	// (0x0000298a) popup_grid_graphic_window_ParamLimits

0x025e,	// (0x0000298a) popup_grid_graphic_window

0x027c,	// (0x000029a8) popup_large_graphic_colour_window

0x029b,	// (0x000029c7) popup_menu_window_ParamLimits

0x029b,	// (0x000029c7) popup_menu_window

0x03d3,	// (0x00002aff) popup_note_image_window

0x03c1,	// (0x00002aed) popup_note_wait_window_ParamLimits

0x03c1,	// (0x00002aed) popup_note_wait_window

0x03c1,	// (0x00002aed) popup_note_window_ParamLimits

0x03c1,	// (0x00002aed) popup_note_window

0x0427,	// (0x00002b53) popup_query_code_window_ParamLimits

0x0427,	// (0x00002b53) popup_query_code_window

0x0439,	// (0x00002b65) popup_query_data_code_window_ParamLimits

0x0439,	// (0x00002b65) popup_query_data_code_window

0x044e,	// (0x00002b7a) popup_query_data_window_ParamLimits

0x044e,	// (0x00002b7a) popup_query_data_window

0x0464,	// (0x00002b90) popup_query_sat_info_window_ParamLimits

0x0464,	// (0x00002b90) popup_query_sat_info_window

0x0495,	// (0x00002bc1) popup_snote_single_graphic_window_ParamLimits

0x0495,	// (0x00002bc1) popup_snote_single_graphic_window

0x0495,	// (0x00002bc1) popup_snote_single_text_window_ParamLimits

0x0495,	// (0x00002bc1) popup_snote_single_text_window

0x04a8,	// (0x00002bd4) popup_sub_window_general

0x05ac,	// (0x00002cd8) popup_window_general_ParamLimits

0x05ac,	// (0x00002cd8) popup_window_general

0x05bf,	// (0x00002ceb) power_save_pane

0xc3ab,	// (0x0000ead7) control_pane_g1_ParamLimits

0xc3ab,	// (0x0000ead7) control_pane_g1

0xc3cc,	// (0x0000eaf8) control_pane_g2_ParamLimits

0xc3cc,	// (0x0000eaf8) control_pane_g2

0xf55d,	// (0x00011c89) control_pane_g3_ParamLimits

0xf55d,	// (0x00011c89) control_pane_g3

0x0007,

0xf7c3,	// (0x00011eef) control_pane_g_ParamLimits

0xf7c3,	// (0x00011eef) control_pane_g

0xc40f,	// (0x0000eb3b) control_pane_t1_ParamLimits

0xc40f,	// (0x0000eb3b) control_pane_t1

0xc461,	// (0x0000eb8d) control_pane_t2_ParamLimits

0xc461,	// (0x0000eb8d) control_pane_t2

0x0002,

0xf7d4,	// (0x00011f00) control_pane_t_ParamLimits

0xf7d4,	// (0x00011f00) control_pane_t

0xf480,	// (0x00011bac) navi_navi_volume_pane_cp1

0xf489,	// (0x00011bb5) status_small_icon_pane

0xf491,	// (0x00011bbd) status_small_pane_g1_ParamLimits

0xf491,	// (0x00011bbd) status_small_pane_g1

0xf4c5,	// (0x00011bf1) status_small_pane_g2_ParamLimits

0xf4c5,	// (0x00011bf1) status_small_pane_g2

0xf4d1,	// (0x00011bfd) status_small_pane_g3_ParamLimits

0xf4d1,	// (0x00011bfd) status_small_pane_g3

0xf4dd,	// (0x00011c09) status_small_pane_g4_ParamLimits

0xf4dd,	// (0x00011c09) status_small_pane_g4

0xf4e9,	// (0x00011c15) status_small_pane_g5_ParamLimits

0xf4e9,	// (0x00011c15) status_small_pane_g5

0xf4f6,	// (0x00011c22) status_small_pane_g6_ParamLimits

0xf4f6,	// (0x00011c22) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00011ede) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00011ede) status_small_pane_g

0xf526,	// (0x00011c52) status_small_pane_t1

0xf549,	// (0x00011c75) status_small_wait_pane_ParamLimits

0xf549,	// (0x00011c75) status_small_wait_pane

0xed3a,	// (0x00011466) aid_levels_signal_ParamLimits

0xed3a,	// (0x00011466) aid_levels_signal

0xed4b,	// (0x00011477) signal_pane_g1_ParamLimits

0xed4b,	// (0x00011477) signal_pane_g1

0xed61,	// (0x0001148d) signal_pane_g2_ParamLimits

0xed61,	// (0x0001148d) signal_pane_g2

0x0001,

0xf747,	// (0x00011e73) signal_pane_g_ParamLimits

0xf747,	// (0x00011e73) signal_pane_g

0xed77,	// (0x000114a3) context_pane_g1

0xd72b,	// (0x0000fe57) title_pane_g1

0xd761,	// (0x0000fe8d) title_pane_t1

0xd7c9,	// (0x0000fef5) title_pane_t2

0xd7ef,	// (0x0000ff1b) title_pane_t3

0x0002,

0xf59b,	// (0x00011cc7) title_pane_t

0x0973,	// (0x0000309f) aid_levels_battery_ParamLimits

0x0973,	// (0x0000309f) aid_levels_battery

0x0986,	// (0x000030b2) battery_pane_g1_ParamLimits

0x0986,	// (0x000030b2) battery_pane_g1

0x099b,	// (0x000030c7) battery_pane_g2_ParamLimits

0x099b,	// (0x000030c7) battery_pane_g2

0x0001,

0xf7e6,	// (0x00011f12) battery_pane_g_ParamLimits

0xf7e6,	// (0x00011f12) battery_pane_g

0x1e53,	// (0x0000457f) uni_indicator_pane_g1

0x1e68,	// (0x00004594) uni_indicator_pane_g2

0x1e7e,	// (0x000045aa) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x00012075) uni_indicator_pane_g

0xe72f,	// (0x00010e5b) navi_icon_pane_ParamLimits

0xe72f,	// (0x00010e5b) navi_icon_pane

0xd721,	// (0x0000fe4d) navi_midp_pane

0xd721,	// (0x0000fe4d) navi_navi_pane

0xe72f,	// (0x00010e5b) navi_text_pane_ParamLimits

0xe72f,	// (0x00010e5b) navi_text_pane

0xd63a,	// (0x0000fd66) status_small_wait_pane_g1

0xdc68,	// (0x00010394) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x00012070) status_small_wait_pane_g

0x1b86,	// (0x000042b2) navi_navi_icon_text_pane

0x1ba0,	// (0x000042cc) navi_navi_pane_g1_ParamLimits

0x1ba0,	// (0x000042cc) navi_navi_pane_g1

0x1b8e,	// (0x000042ba) navi_navi_pane_g2_ParamLimits

0x1b8e,	// (0x000042ba) navi_navi_pane_g2

0x0001,

0xf912,	// (0x0001203e) navi_navi_pane_g_ParamLimits

0xf912,	// (0x0001203e) navi_navi_pane_g

0x1bb2,	// (0x000042de) navi_navi_tabs_pane

0x1b86,	// (0x000042b2) navi_navi_text_pane

0x1b86,	// (0x000042b2) navi_navi_volume_pane

0x1b62,	// (0x0000428e) navi_text_pane_t1

0x1b56,	// (0x00004282) navi_icon_pane_g1

0x1aaa,	// (0x000041d6) navi_navi_text_pane_t1

0xc7d4,	// (0x0000ef00) navi_navi_volume_pane_g1

0xc7dc,	// (0x0000ef08) volume_small_pane

0x19ff,	// (0x0000412b) navi_navi_icon_text_pane_g1

0x1a07,	// (0x00004133) navi_navi_icon_text_pane_t1

0x1480,	// (0x00003bac) navi_tabs_2_long_pane

0x1480,	// (0x00003bac) navi_tabs_2_pane

0x1480,	// (0x00003bac) navi_tabs_3_long_pane

0x1480,	// (0x00003bac) navi_tabs_3_pane

0x1480,	// (0x00003bac) navi_tabs_4_pane

0xc7b4,	// (0x0000eee0) tabs_2_active_pane_ParamLimits

0xc7b4,	// (0x0000eee0) tabs_2_active_pane

0xc7c4,	// (0x0000eef0) tabs_2_passive_pane_ParamLimits

0xc7c4,	// (0x0000eef0) tabs_2_passive_pane

0xc782,	// (0x0000eeae) tabs_3_active_pane_ParamLimits

0xc782,	// (0x0000eeae) tabs_3_active_pane

0xc792,	// (0x0000eebe) tabs_3_passive_pane_ParamLimits

0xc792,	// (0x0000eebe) tabs_3_passive_pane

0xc7a3,	// (0x0000eecf) tabs_3_passive_pane_cp_ParamLimits

0xc7a3,	// (0x0000eecf) tabs_3_passive_pane_cp

0xc73e,	// (0x0000ee6a) tabs_4_active_pane_ParamLimits

0xc73e,	// (0x0000ee6a) tabs_4_active_pane

0xc74f,	// (0x0000ee7b) tabs_4_passive_pane_ParamLimits

0xc74f,	// (0x0000ee7b) tabs_4_passive_pane

0xc760,	// (0x0000ee8c) tabs_4_passive_pane_cp_ParamLimits

0xc760,	// (0x0000ee8c) tabs_4_passive_pane_cp

0xc771,	// (0x0000ee9d) tabs_4_passive_pane_cp2_ParamLimits

0xc771,	// (0x0000ee9d) tabs_4_passive_pane_cp2

0xc71e,	// (0x0000ee4a) tabs_2_long_active_pane_ParamLimits

0xc71e,	// (0x0000ee4a) tabs_2_long_active_pane

0xc72e,	// (0x0000ee5a) tabs_2_long_passive_pane_ParamLimits

0xc72e,	// (0x0000ee5a) tabs_2_long_passive_pane

0xc6e9,	// (0x0000ee15) tabs_3_long_active_pane_ParamLimits

0xc6e9,	// (0x0000ee15) tabs_3_long_active_pane

0xc6fa,	// (0x0000ee26) tabs_3_long_passive_pane_ParamLimits

0xc6fa,	// (0x0000ee26) tabs_3_long_passive_pane

0xc70d,	// (0x0000ee39) tabs_3_long_passive_pane_cp_ParamLimits

0xc70d,	// (0x0000ee39) tabs_3_long_passive_pane_cp

0xc68f,	// (0x0000edbb) volume_small_pane_g1

0xc698,	// (0x0000edc4) volume_small_pane_g2

0xc6a1,	// (0x0000edcd) volume_small_pane_g3

0xc6aa,	// (0x0000edd6) volume_small_pane_g4

0xc6b3,	// (0x0000eddf) volume_small_pane_g5

0xc6bc,	// (0x0000ede8) volume_small_pane_g6

0xc6c5,	// (0x0000edf1) volume_small_pane_g7

0xc6ce,	// (0x0000edfa) volume_small_pane_g8

0xc6d7,	// (0x0000ee03) volume_small_pane_g9

0xc6e0,	// (0x0000ee0c) volume_small_pane_g10

0x0009,

0xf8de,	// (0x0001200a) volume_small_pane_g

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp2_ParamLimits

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp2

0xd80f,	// (0x0000ff3b) tabs_3_active_pane_g1

0xd817,	// (0x0000ff43) tabs_3_active_pane_t1

0xd801,	// (0x0000ff2d) bg_passive_tab_pane_cp2_ParamLimits

0xd801,	// (0x0000ff2d) bg_passive_tab_pane_cp2

0xd80f,	// (0x0000ff3b) tabs_3_passive_pane_g1

0xd817,	// (0x0000ff43) tabs_3_passive_pane_t1

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp3_ParamLimits

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp3

0xd829,	// (0x0000ff55) tabs_4_active_pane_g1

0xd831,	// (0x0000ff5d) tabs_4_active_pane_t1

0xd801,	// (0x0000ff2d) bg_passive_tab_pane_cp3_ParamLimits

0xd801,	// (0x0000ff2d) bg_passive_tab_pane_cp3

0xd829,	// (0x0000ff55) tabs_4_1_passive_pane_g1

0xd831,	// (0x0000ff5d) tabs_4_1_passive_pane_t1

0x0111,	// (0x0000283d) list_highlight_pane_cp2

0x2181,	// (0x000048ad) list_set_pane_ParamLimits

0x2181,	// (0x000048ad) list_set_pane

0x220f,	// (0x0000493b) main_pane_set_t1_ParamLimits

0x220f,	// (0x0000493b) main_pane_set_t1

0x222f,	// (0x0000495b) main_pane_set_t2_ParamLimits

0x222f,	// (0x0000495b) main_pane_set_t2

0x2241,	// (0x0000496d) main_pane_set_t3_ParamLimits

0x2241,	// (0x0000496d) main_pane_set_t3

0x2253,	// (0x0000497f) main_pane_set_t4_ParamLimits

0x2253,	// (0x0000497f) main_pane_set_t4

0x0003,

0xf9ae,	// (0x000120da) main_pane_set_t_ParamLimits

0xf9ae,	// (0x000120da) main_pane_set_t

0x2265,	// (0x00004991) setting_code_pane

0x226d,	// (0x00004999) setting_slider_graphic_pane

0x226d,	// (0x00004999) setting_slider_pane

0x226d,	// (0x00004999) setting_text_pane

0x226d,	// (0x00004999) setting_volume_pane

0xbf17,	// (0x0000e643) volume_set_pane

0xd801,	// (0x0000ff2d) bg_set_opt_pane_cp

0xbf1f,	// (0x0000e64b) setting_slider_pane_t1

0xbf35,	// (0x0000e661) setting_slider_pane_t2

0xbf4e,	// (0x0000e67a) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00011cce) setting_slider_pane_t

0xbf65,	// (0x0000e691) slider_set_pane

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp2

0xd843,	// (0x0000ff6f) setting_slider_graphic_pane_g1

0xbf7b,	// (0x0000e6a7) setting_slider_graphic_pane_t1

0xbf8a,	// (0x0000e6b6) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00011cd5) setting_slider_graphic_pane_t

0xbf99,	// (0x0000e6c5) slider_set_pane_cp

0xd721,	// (0x0000fe4d) input_focus_pane_cp1

0x2147,	// (0x00004873) list_set_text_pane

0xd63a,	// (0x0000fd66) setting_text_pane_g1

0xd721,	// (0x0000fe4d) input_focus_pane_cp2

0xd63a,	// (0x0000fd66) setting_code_pane_g1

0xd84c,	// (0x0000ff78) setting_code_pane_t1

0xd85a,	// (0x0000ff86) set_text_pane_t1_ParamLimits

0xd85a,	// (0x0000ff86) set_text_pane_t1

0xe63d,	// (0x00010d69) set_opt_bg_pane_g1

0xe645,	// (0x00010d71) set_opt_bg_pane_g2

0x2127,	// (0x00004853) set_opt_bg_pane_g3

0xe655,	// (0x00010d81) set_opt_bg_pane_g4

0xe65d,	// (0x00010d89) set_opt_bg_pane_g5

0xe665,	// (0x00010d91) set_opt_bg_pane_g6

0x212f,	// (0x0000485b) set_opt_bg_pane_g7

0x2137,	// (0x00004863) set_opt_bg_pane_g8

0x213f,	// (0x0000486b) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x000120c7) set_opt_bg_pane_g

0x20b6,	// (0x000047e2) slider_set_pane_g1

0xc849,	// (0x0000ef75) slider_set_pane_g2

0x0006,

0xf98c,	// (0x000120b8) slider_set_pane_g

0xc7e5,	// (0x0000ef11) volume_set_pane_g1

0xc7ed,	// (0x0000ef19) volume_set_pane_g2

0xc7f5,	// (0x0000ef21) volume_set_pane_g3

0xc7fd,	// (0x0000ef29) volume_set_pane_g4

0xc805,	// (0x0000ef31) volume_set_pane_g5

0xc80d,	// (0x0000ef39) volume_set_pane_g6

0xc815,	// (0x0000ef41) volume_set_pane_g7

0xc81d,	// (0x0000ef49) volume_set_pane_g8

0xc825,	// (0x0000ef51) volume_set_pane_g9

0xc82d,	// (0x0000ef59) volume_set_pane_g10

0x0009,

0xf964,	// (0x00012090) volume_set_pane_g

0xd875,	// (0x0000ffa1) indicator_pane_ParamLimits

0xd875,	// (0x0000ffa1) indicator_pane

0xd881,	// (0x0000ffad) main_idle_pane_g2_ParamLimits

0xd881,	// (0x0000ffad) main_idle_pane_g2

0xd8a5,	// (0x0000ffd1) main_pane_idle_g1_ParamLimits

0xd8a5,	// (0x0000ffd1) main_pane_idle_g1

0xd8b2,	// (0x0000ffde) popup_clock_digital_analogue_window_ParamLimits

0xd8b2,	// (0x0000ffde) popup_clock_digital_analogue_window

0xd8c9,	// (0x0000fff5) soft_indicator_pane_ParamLimits

0xd8c9,	// (0x0000fff5) soft_indicator_pane

0xd8d5,	// (0x00010001) wallpaper_pane_ParamLimits

0xd8d5,	// (0x00010001) wallpaper_pane

0xd63a,	// (0x0000fd66) wallpaper_pane_g1

0xd8e9,	// (0x00010015) indicator_pane_g1_ParamLimits

0xd8e9,	// (0x00010015) indicator_pane_g1

0x25d8,	// (0x00004d04) navi_navi_icon_text_pane_srt_g1

0xd904,	// (0x00010030) soft_indicator_pane_t1

0xd91e,	// (0x0001004a) aid_ps_area_pane

0xd92f,	// (0x0001005b) aid_ps_clock_pane

0xd93b,	// (0x00010067) aid_ps_indicator_pane

0xd947,	// (0x00010073) indicator_ps_pane_ParamLimits

0xd947,	// (0x00010073) indicator_ps_pane

0xd956,	// (0x00010082) power_save_pane_g1_ParamLimits

0xd956,	// (0x00010082) power_save_pane_g1

0xd962,	// (0x0001008e) power_save_pane_g2_ParamLimits

0xd962,	// (0x0001008e) power_save_pane_g2

0xbc8a,	// (0x0000e3b6) aid_navinavi_width_pane

0xd91e,	// (0x0001004a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00011cda) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00011cda) power_save_pane_g

0xd970,	// (0x0001009c) power_save_pane_t1_ParamLimits

0xd970,	// (0x0001009c) power_save_pane_t1

0xd92f,	// (0x0001005b) aid_ps_clock_pane_ParamLimits

0xd93b,	// (0x00010067) aid_ps_indicator_pane_ParamLimits

0xd982,	// (0x000100ae) power_save_pane_t4_ParamLimits

0xd982,	// (0x000100ae) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00011cdf) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00011cdf) power_save_pane_t

0xd9ac,	// (0x000100d8) power_save_t3_ParamLimits

0xd9ac,	// (0x000100d8) power_save_t3

0xd997,	// (0x000100c3) power_save_t2_ParamLimits

0xd997,	// (0x000100c3) power_save_t2

0xd9c1,	// (0x000100ed) indicator_ps_pane_g1

0xd9ca,	// (0x000100f6) ai_gene_pane_ParamLimits

0xd9ca,	// (0x000100f6) ai_gene_pane

0xd9d6,	// (0x00010102) ai_links_pane_ParamLimits

0xd9d6,	// (0x00010102) ai_links_pane

0xd9e2,	// (0x0001010e) indicator_pane_cp1_ParamLimits

0xd9e2,	// (0x0001010e) indicator_pane_cp1

0xd9ee,	// (0x0001011a) main_pane_idle_g1_cp_ParamLimits

0xd9ee,	// (0x0001011a) main_pane_idle_g1_cp

0xd9fa,	// (0x00010126) popup_ai_links_title_window

0xda03,	// (0x0001012f) soft_indicator_pane_cp1_ParamLimits

0xda03,	// (0x0001012f) soft_indicator_pane_cp1

0x1e41,	// (0x0000456d) ai_links_pane_g1

0x1e4a,	// (0x00004576) grid_ai_links_pane

0x1e26,	// (0x00004552) ai_gene_pane_1

0x1e2f,	// (0x0000455b) ai_gene_pane_2

0x1e38,	// (0x00004564) list_highlight_pane_cp4

0x1e0a,	// (0x00004536) cell_ai_link_pane_ParamLimits

0x1e0a,	// (0x00004536) cell_ai_link_pane

0x1e02,	// (0x0000452e) cell_ai_link_pane_g1

0xdc68,	// (0x00010394) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x0001206b) cell_ai_link_pane_g

0xd721,	// (0x0000fe4d) grid_highlight_cp2

0xd721,	// (0x0000fe4d) bg_popup_sub_pane_cp1

0xda1d,	// (0x00010149) popup_ai_links_title_window_t1

0x1d54,	// (0x00004480) ai_gene_pane_1_g1_ParamLimits

0x1d54,	// (0x00004480) ai_gene_pane_1_g1

0x1d60,	// (0x0000448c) ai_gene_pane_1_g2_ParamLimits

0x1d60,	// (0x0000448c) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x00012061) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x00012061) ai_gene_pane_1_g

0x1d6d,	// (0x00004499) ai_gene_pane_1_t1_ParamLimits

0x1d6d,	// (0x00004499) ai_gene_pane_1_t1

0x1da1,	// (0x000044cd) grid_ai_soft_ind_pane

0x1d3f,	// (0x0000446b) ai_gene_pane_2_t1_ParamLimits

0x1d3f,	// (0x0000446b) ai_gene_pane_2_t1

0xda2c,	// (0x00010158) main_pane_empty_t1_ParamLimits

0xda2c,	// (0x00010158) main_pane_empty_t1

0xda49,	// (0x00010175) main_pane_empty_t2_ParamLimits

0xda49,	// (0x00010175) main_pane_empty_t2

0xda61,	// (0x0001018d) main_pane_empty_t3_ParamLimits

0xda61,	// (0x0001018d) main_pane_empty_t3

0xda74,	// (0x000101a0) main_pane_empty_t4_ParamLimits

0xda74,	// (0x000101a0) main_pane_empty_t4

0xda87,	// (0x000101b3) main_pane_empty_t5_ParamLimits

0xda87,	// (0x000101b3) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00011ce4) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00011ce4) main_pane_empty_t

0xe72f,	// (0x00010e5b) bg_popup_window_pane_ParamLimits

0xe72f,	// (0x00010e5b) bg_popup_window_pane

0x1ab9,	// (0x000041e5) find_popup_pane_cp2_ParamLimits

0x1ab9,	// (0x000041e5) find_popup_pane_cp2

0x1ac5,	// (0x000041f1) heading_pane_ParamLimits

0x1ac5,	// (0x000041f1) heading_pane

0xd721,	// (0x0000fe4d) bg_popup_sub_pane

0x1a21,	// (0x0000414d) bg_popup_window_pane_g1_ParamLimits

0x1a21,	// (0x0000414d) bg_popup_window_pane_g1

0x1a2d,	// (0x00004159) bg_popup_window_pane_g2_ParamLimits

0x1a2d,	// (0x00004159) bg_popup_window_pane_g2

0x1a39,	// (0x00004165) bg_popup_window_pane_g3_ParamLimits

0x1a39,	// (0x00004165) bg_popup_window_pane_g3

0x1a45,	// (0x00004171) bg_popup_window_pane_g4_ParamLimits

0x1a45,	// (0x00004171) bg_popup_window_pane_g4

0x1a51,	// (0x0000417d) bg_popup_window_pane_g5_ParamLimits

0x1a51,	// (0x0000417d) bg_popup_window_pane_g5

0x1a5d,	// (0x00004189) bg_popup_window_pane_g6_ParamLimits

0x1a5d,	// (0x00004189) bg_popup_window_pane_g6

0x1a69,	// (0x00004195) bg_popup_window_pane_g7_ParamLimits

0x1a69,	// (0x00004195) bg_popup_window_pane_g7

0x1a75,	// (0x000041a1) bg_popup_window_pane_g8_ParamLimits

0x1a75,	// (0x000041a1) bg_popup_window_pane_g8

0x1a81,	// (0x000041ad) bg_popup_window_pane_g9_ParamLimits

0x1a81,	// (0x000041ad) bg_popup_window_pane_g9

0x1a8d,	// (0x000041b9) bg_popup_window_pane_g10_ParamLimits

0x1a8d,	// (0x000041b9) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x00012029) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x00012029) bg_popup_window_pane_g

0x19b6,	// (0x000040e2) bg_popup_heading_pane_ParamLimits

0x19b6,	// (0x000040e2) bg_popup_heading_pane

0xc8d1,	// (0x0000effd) tabs_4_passive_pane_cp_srt_ParamLimits

0xc8d1,	// (0x0000effd) tabs_4_passive_pane_cp_srt

0xc8e3,	// (0x0000f00f) tabs_4_passive_pane_srt_ParamLimits

0x19ca,	// (0x000040f6) heading_pane_g2

0xc8e3,	// (0x0000f00f) tabs_4_passive_pane_srt

0x0111,	// (0x0000283d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0111,	// (0x0000283d) bg_passive_tab_pane_cp3_srt

0x19d2,	// (0x000040fe) heading_pane_t1_ParamLimits

0x19d2,	// (0x000040fe) heading_pane_t1

0x19e9,	// (0x00004115) heading_pane_t2_ParamLimits

0x19e9,	// (0x00004115) heading_pane_t2

0x0001,

0xf8f8,	// (0x00012024) heading_pane_t_ParamLimits

0xf8f8,	// (0x00012024) heading_pane_t

0x13e8,	// (0x00003b14) bg_popup_heading_pane_g1

0x1491,	// (0x00003bbd) bg_popup_heading_pane_g2

0x1499,	// (0x00003bc5) bg_popup_heading_pane_g3

0x14a1,	// (0x00003bcd) bg_popup_heading_pane_g4

0x14a9,	// (0x00003bd5) bg_popup_heading_pane_g5

0x14b1,	// (0x00003bdd) bg_popup_heading_pane_g6

0x14b9,	// (0x00003be5) bg_popup_heading_pane_g7

0x14c1,	// (0x00003bed) bg_popup_heading_pane_g8

0x14c9,	// (0x00003bf5) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x00011fe0) bg_popup_heading_pane_g

0x0adf,	// (0x0000320b) bg_popup_sub_pane_g1

0x0ae7,	// (0x00003213) bg_popup_sub_pane_g2

0x0aef,	// (0x0000321b) bg_popup_sub_pane_g3

0x0af7,	// (0x00003223) bg_popup_sub_pane_g4

0x0aff,	// (0x0000322b) bg_popup_sub_pane_g5

0x0b07,	// (0x00003233) bg_popup_sub_pane_g6

0x0b0f,	// (0x0000323b) bg_popup_sub_pane_g7

0x0b17,	// (0x00003243) bg_popup_sub_pane_g8

0x0b1f,	// (0x0000324b) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x00011fba) bg_popup_sub_pane_g

0xda9a,	// (0x000101c6) bg_popup_window_pane_cp5_ParamLimits

0xda9a,	// (0x000101c6) bg_popup_window_pane_cp5

0xdae2,	// (0x0001020e) popup_note_window_g1_ParamLimits

0xdae2,	// (0x0001020e) popup_note_window_g1

0xdaee,	// (0x0001021a) popup_note_window_t1_ParamLimits

0xdaee,	// (0x0001021a) popup_note_window_t1

0xdb04,	// (0x00010230) popup_note_window_t2_ParamLimits

0xdb04,	// (0x00010230) popup_note_window_t2

0xdb1a,	// (0x00010246) popup_note_window_t3_ParamLimits

0xdb1a,	// (0x00010246) popup_note_window_t3

0xdb30,	// (0x0001025c) popup_note_window_t4_ParamLimits

0xdb30,	// (0x0001025c) popup_note_window_t4

0xdb58,	// (0x00010284) popup_note_window_t5_ParamLimits

0xdb58,	// (0x00010284) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00011cef) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00011cef) popup_note_window_t

0xdb7c,	// (0x000102a8) bg_popup_window_pane_cp6_ParamLimits

0xdb7c,	// (0x000102a8) bg_popup_window_pane_cp6

0x1364,	// (0x00003a90) popup_note_image_window_g1_ParamLimits

0x1364,	// (0x00003a90) popup_note_image_window_g1

0x1370,	// (0x00003a9c) popup_note_image_window_g2_ParamLimits

0x1370,	// (0x00003a9c) popup_note_image_window_g2

0x0001,

0xf882,	// (0x00011fae) popup_note_image_window_g_ParamLimits

0xf882,	// (0x00011fae) popup_note_image_window_g

0x1389,	// (0x00003ab5) popup_note_image_window_t1_ParamLimits

0x1389,	// (0x00003ab5) popup_note_image_window_t1

0x13a2,	// (0x00003ace) popup_note_image_window_t2_ParamLimits

0x13a2,	// (0x00003ace) popup_note_image_window_t2

0x13bb,	// (0x00003ae7) popup_note_image_window_t3_ParamLimits

0x13bb,	// (0x00003ae7) popup_note_image_window_t3

0x0002,

0xf887,	// (0x00011fb3) popup_note_image_window_t_ParamLimits

0xf887,	// (0x00011fb3) popup_note_image_window_t

0x1233,	// (0x0000395f) bg_popup_window_pane_cp7_ParamLimits

0x1233,	// (0x0000395f) bg_popup_window_pane_cp7

0x1263,	// (0x0000398f) popup_note_wait_window_g1_ParamLimits

0x1263,	// (0x0000398f) popup_note_wait_window_g1

0x126f,	// (0x0000399b) popup_note_wait_window_g2_ParamLimits

0x126f,	// (0x0000399b) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x00011f9c) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x00011f9c) popup_note_wait_window_g

0x1287,	// (0x000039b3) popup_note_wait_window_t1_ParamLimits

0x1287,	// (0x000039b3) popup_note_wait_window_t1

0x12ae,	// (0x000039da) popup_note_wait_window_t2_ParamLimits

0x12ae,	// (0x000039da) popup_note_wait_window_t2

0x12cb,	// (0x000039f7) popup_note_wait_window_t3_ParamLimits

0x12cb,	// (0x000039f7) popup_note_wait_window_t3

0x12de,	// (0x00003a0a) popup_note_wait_window_t4_ParamLimits

0x12de,	// (0x00003a0a) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x00011fa3) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x00011fa3) popup_note_wait_window_t

0x1303,	// (0x00003a2f) wait_bar_pane_ParamLimits

0x1303,	// (0x00003a2f) wait_bar_pane

0xd721,	// (0x0000fe4d) wait_anim_pane

0xd721,	// (0x0000fe4d) wait_border_pane

0xd63a,	// (0x0000fd66) wait_anim_pane_g1

0xd63a,	// (0x0000fd66) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00011e6e) wait_anim_pane_g

0x11e3,	// (0x0000390f) wait_border_pane_g1

0x11ec,	// (0x00003918) wait_border_pane_g2

0x11f5,	// (0x00003921) wait_border_pane_g3

0x0002,

0xf869,	// (0x00011f95) wait_border_pane_g

0x1145,	// (0x00003871) bg_popup_window_pane_cp16_ParamLimits

0x1145,	// (0x00003871) bg_popup_window_pane_cp16

0x1153,	// (0x0000387f) indicator_popup_pane_cp4_ParamLimits

0x1153,	// (0x0000387f) indicator_popup_pane_cp4

0x1167,	// (0x00003893) popup_query_data_window_t1_ParamLimits

0x1167,	// (0x00003893) popup_query_data_window_t1

0x1179,	// (0x000038a5) popup_query_data_window_t2_ParamLimits

0x1179,	// (0x000038a5) popup_query_data_window_t2

0x1192,	// (0x000038be) popup_query_data_window_t3_ParamLimits

0x1192,	// (0x000038be) popup_query_data_window_t3

0x0002,

0xf862,	// (0x00011f8e) popup_query_data_window_t_ParamLimits

0xf862,	// (0x00011f8e) popup_query_data_window_t

0x11ac,	// (0x000038d8) query_popup_data_pane_ParamLimits

0x11ac,	// (0x000038d8) query_popup_data_pane

0x11c0,	// (0x000038ec) query_popup_data_pane_cp1_ParamLimits

0x11c0,	// (0x000038ec) query_popup_data_pane_cp1

0xdb7c,	// (0x000102a8) bg_popup_window_pane_cp10_ParamLimits

0xdb7c,	// (0x000102a8) bg_popup_window_pane_cp10

0x10a8,	// (0x000037d4) indicator_popup_pane_ParamLimits

0x10a8,	// (0x000037d4) indicator_popup_pane

0xdbd3,	// (0x000102ff) popup_query_code_window_t1_ParamLimits

0xdbd3,	// (0x000102ff) popup_query_code_window_t1

0x10c0,	// (0x000037ec) popup_query_code_window_t2_ParamLimits

0x10c0,	// (0x000037ec) popup_query_code_window_t2

0x10fe,	// (0x0000382a) popup_query_code_window_t3_ParamLimits

0x10fe,	// (0x0000382a) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x00011f87) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x00011f87) popup_query_code_window_t

0x112d,	// (0x00003859) query_popup_pane_ParamLimits

0x112d,	// (0x00003859) query_popup_pane

0xdb7c,	// (0x000102a8) bg_popup_window_pane_cp15_ParamLimits

0xdb7c,	// (0x000102a8) bg_popup_window_pane_cp15

0xdb9a,	// (0x000102c6) indicator_popup_pane_cp1_ParamLimits

0xdb9a,	// (0x000102c6) indicator_popup_pane_cp1

0xdbad,	// (0x000102d9) indicator_popup_pane_cp2_ParamLimits

0xdbad,	// (0x000102d9) indicator_popup_pane_cp2

0xdbc0,	// (0x000102ec) popup_query_data_code_window_g1_ParamLimits

0xdbc0,	// (0x000102ec) popup_query_data_code_window_g1

0xdbd3,	// (0x000102ff) popup_query_data_code_window_t1_ParamLimits

0xdbd3,	// (0x000102ff) popup_query_data_code_window_t1

0xdbe5,	// (0x00010311) popup_query_data_code_window_t2_ParamLimits

0xdbe5,	// (0x00010311) popup_query_data_code_window_t2

0xdbf7,	// (0x00010323) popup_query_data_code_window_t3_ParamLimits

0xdbf7,	// (0x00010323) popup_query_data_code_window_t3

0xdc0d,	// (0x00010339) popup_query_data_code_window_t4_ParamLimits

0xdc0d,	// (0x00010339) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00011cfa) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00011cfa) popup_query_data_code_window_t

0xc5aa,	// (0x0000ecd6) list_single_midp_graphic_pane_g3

0xdc25,	// (0x00010351) query_popup_data_pane_cp2_ParamLimits

0xdc38,	// (0x00010364) query_popup_pane_cp2_ParamLimits

0xdc38,	// (0x00010364) query_popup_pane_cp2

0xd721,	// (0x0000fe4d) bg_popup_window_pane_cp11

0x107c,	// (0x000037a8) heading_pane_cp5

0xdd1c,	// (0x00010448) listscroll_popup_info_pane

0xd721,	// (0x0000fe4d) input_focus_pane_cp3

0xdc4b,	// (0x00010377) query_popup_pane_t1

0xdc59,	// (0x00010385) list_popup_info_pane_ParamLimits

0xdc59,	// (0x00010385) list_popup_info_pane

0xdc68,	// (0x00010394) listscroll_popup_info_pane_g1

0xdc70,	// (0x0001039c) scroll_pane_cp7

0xdc78,	// (0x000103a4) popup_info_list_pane_t1_ParamLimits

0xdc78,	// (0x000103a4) popup_info_list_pane_t1

0xdc92,	// (0x000103be) popup_info_list_pane_t2_ParamLimits

0xdc92,	// (0x000103be) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00011d03) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00011d03) popup_info_list_pane_t

0xd721,	// (0x0000fe4d) bg_popup_window_pane_cp12

0x260f,	// (0x00004d3b) find_popup_pane

0xd801,	// (0x0000ff2d) bg_popup_window_pane_cp3

0xdcac,	// (0x000103d8) heading_pane_cp3

0xdcb8,	// (0x000103e4) listscroll_popup_graphic_pane

0xd721,	// (0x0000fe4d) bg_popup_window_pane_cp4

0xdd14,	// (0x00010440) heading_pane_cp4

0xdd1c,	// (0x00010448) listscroll_popup_colour_pane

0xdd24,	// (0x00010450) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xdd24,	// (0x00010450) cell_large_graphic_colour_none_popup_pane

0xdd34,	// (0x00010460) grid_large_graphic_colour_popup_pane_ParamLimits

0xdd34,	// (0x00010460) grid_large_graphic_colour_popup_pane

0xdd50,	// (0x0001047c) listscroll_popup_colour_pane_g1_ParamLimits

0xdd50,	// (0x0001047c) listscroll_popup_colour_pane_g1

0xdd67,	// (0x00010493) listscroll_popup_colour_pane_g2_ParamLimits

0xdd67,	// (0x00010493) listscroll_popup_colour_pane_g2

0xdd7b,	// (0x000104a7) listscroll_popup_colour_pane_g3_ParamLimits

0xdd7b,	// (0x000104a7) listscroll_popup_colour_pane_g3

0xdd8b,	// (0x000104b7) listscroll_popup_colour_pane_g4_ParamLimits

0xdd8b,	// (0x000104b7) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00011d08) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00011d08) listscroll_popup_colour_pane_g

0xdd9a,	// (0x000104c6) scroll_pane_cp6_ParamLimits

0xdd9a,	// (0x000104c6) scroll_pane_cp6

0xddac,	// (0x000104d8) cell_large_graphic_colour_popup_pane_ParamLimits

0xddac,	// (0x000104d8) cell_large_graphic_colour_popup_pane

0xddcb,	// (0x000104f7) cell_large_graphic_colour_none_popup_pane_t1

0xd721,	// (0x0000fe4d) grid_highlight_pane_cp5

0xddda,	// (0x00010506) cell_large_graphic_colour_popup_pane_g1

0xdde2,	// (0x0001050e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00011d11) cell_large_graphic_colour_popup_pane_g

0xddea,	// (0x00010516) cell_large_graphic_colour_popup_pane_g2_copy1

0xddf3,	// (0x0001051f) grid_highlight_pane_cp4

0xddfb,	// (0x00010527) bg_popup_window_pane_cp8_ParamLimits

0xddfb,	// (0x00010527) bg_popup_window_pane_cp8

0xde16,	// (0x00010542) popup_snote_single_text_window_g1_ParamLimits

0xde16,	// (0x00010542) popup_snote_single_text_window_g1

0xde28,	// (0x00010554) popup_snote_single_text_window_t1_ParamLimits

0xde28,	// (0x00010554) popup_snote_single_text_window_t1

0xde3b,	// (0x00010567) popup_snote_single_text_window_t2_ParamLimits

0xde3b,	// (0x00010567) popup_snote_single_text_window_t2

0xde4e,	// (0x0001057a) popup_snote_single_text_window_t3_ParamLimits

0xde4e,	// (0x0001057a) popup_snote_single_text_window_t3

0xde87,	// (0x000105b3) popup_snote_single_text_window_t4_ParamLimits

0xde87,	// (0x000105b3) popup_snote_single_text_window_t4

0xdebb,	// (0x000105e7) popup_snote_single_text_window_t5_ParamLimits

0xdebb,	// (0x000105e7) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00011d16) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00011d16) popup_snote_single_text_window_t

0xdeea,	// (0x00010616) bg_popup_window_pane_cp9_ParamLimits

0xdeea,	// (0x00010616) bg_popup_window_pane_cp9

0xde16,	// (0x00010542) popup_snote_single_graphic_window_g1_ParamLimits

0xde16,	// (0x00010542) popup_snote_single_graphic_window_g1

0xdef8,	// (0x00010624) popup_snote_single_graphic_window_g2_ParamLimits

0xdef8,	// (0x00010624) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00011d21) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00011d21) popup_snote_single_graphic_window_g

0xdf04,	// (0x00010630) popup_snote_single_graphic_window_t1_ParamLimits

0xdf04,	// (0x00010630) popup_snote_single_graphic_window_t1

0xdf17,	// (0x00010643) popup_snote_single_graphic_window_t2_ParamLimits

0xdf17,	// (0x00010643) popup_snote_single_graphic_window_t2

0xde4e,	// (0x0001057a) popup_snote_single_graphic_window_t3_ParamLimits

0xde4e,	// (0x0001057a) popup_snote_single_graphic_window_t3

0xde87,	// (0x000105b3) popup_snote_single_graphic_window_t4_ParamLimits

0xde87,	// (0x000105b3) popup_snote_single_graphic_window_t4

0xdebb,	// (0x000105e7) popup_snote_single_graphic_window_t5_ParamLimits

0xdebb,	// (0x000105e7) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00011d26) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00011d26) popup_snote_single_graphic_window_t

0x24c4,	// (0x00004bf0) grid_graphic_popup_pane_ParamLimits

0x24c4,	// (0x00004bf0) grid_graphic_popup_pane

0x24e7,	// (0x00004c13) listscroll_popup_graphic_pane_g1_ParamLimits

0x24e7,	// (0x00004c13) listscroll_popup_graphic_pane_g1

0x24fb,	// (0x00004c27) listscroll_popup_graphic_pane_g2_ParamLimits

0x24fb,	// (0x00004c27) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x00012104) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x00012104) listscroll_popup_graphic_pane_g

0x250f,	// (0x00004c3b) scroll_pane_cp5

0x2467,	// (0x00004b93) cell_graphic_popup_pane_ParamLimits

0x2467,	// (0x00004b93) cell_graphic_popup_pane

0x2448,	// (0x00004b74) cell_graphic_popup_pane_g1

0x2450,	// (0x00004b7c) cell_graphic_popup_pane_g2

0xddea,	// (0x00010516) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x000120fd) cell_graphic_popup_pane_g

0x2459,	// (0x00004b85) cell_graphic_popup_pane_t2

0xddf3,	// (0x0001051f) grid_highlight_pane_cp3

0xdf3c,	// (0x00010668) list_gen_pane_ParamLimits

0xdf3c,	// (0x00010668) list_gen_pane

0xdf6d,	// (0x00010699) scroll_pane

0x23c8,	// (0x00004af4) bg_list_pane_g1_ParamLimits

0x23c8,	// (0x00004af4) bg_list_pane_g1

0x23df,	// (0x00004b0b) bg_list_pane_g2_ParamLimits

0x23df,	// (0x00004b0b) bg_list_pane_g2

0x23f2,	// (0x00004b1e) bg_list_pane_g3_ParamLimits

0x23f2,	// (0x00004b1e) bg_list_pane_g3

0x2404,	// (0x00004b30) bg_list_pane_g4_ParamLimits

0x2404,	// (0x00004b30) bg_list_pane_g4

0x2416,	// (0x00004b42) bg_list_pane_g5_ParamLimits

0x2416,	// (0x00004b42) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x000120f2) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x000120f2) bg_list_pane_g

0x2313,	// (0x00004a3f) list_double2_graphic_large_graphic_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double2_graphic_large_graphic_pane

0x2313,	// (0x00004a3f) list_double2_graphic_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double2_graphic_pane

0x2313,	// (0x00004a3f) list_double2_large_graphic_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double2_large_graphic_pane

0x2313,	// (0x00004a3f) list_double2_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double2_pane

0x2313,	// (0x00004a3f) list_double_graphic_heading_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_graphic_heading_pane

0x2313,	// (0x00004a3f) list_double_graphic_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_graphic_pane

0x2313,	// (0x00004a3f) list_double_heading_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_heading_pane

0x2313,	// (0x00004a3f) list_double_large_graphic_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_large_graphic_pane

0x2313,	// (0x00004a3f) list_double_number_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_number_pane

0x2313,	// (0x00004a3f) list_double_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_pane

0x2313,	// (0x00004a3f) list_double_time_pane_ParamLimits

0x2313,	// (0x00004a3f) list_double_time_pane

0x2313,	// (0x00004a3f) list_setting_number_pane_ParamLimits

0x2313,	// (0x00004a3f) list_setting_number_pane

0x2313,	// (0x00004a3f) list_setting_pane_ParamLimits

0x2313,	// (0x00004a3f) list_setting_pane

0x235e,	// (0x00004a8a) list_single_2graphic_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_2graphic_pane

0x235e,	// (0x00004a8a) list_single_graphic_heading_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_graphic_heading_pane

0x235e,	// (0x00004a8a) list_single_graphic_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_graphic_pane

0x235e,	// (0x00004a8a) list_single_heading_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_heading_pane

0x23b2,	// (0x00004ade) list_single_large_graphic_pane_ParamLimits

0x23b2,	// (0x00004ade) list_single_large_graphic_pane

0x235e,	// (0x00004a8a) list_single_number_heading_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_number_heading_pane

0x235e,	// (0x00004a8a) list_single_number_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_number_pane

0x235e,	// (0x00004a8a) list_single_pane_ParamLimits

0x235e,	// (0x00004a8a) list_single_pane

0xd721,	// (0x0000fe4d) list_highlight_pane_cp1

0xdfae,	// (0x000106da) list_single_pane_g1_ParamLimits

0xdfae,	// (0x000106da) list_single_pane_g1

0xdfba,	// (0x000106e6) list_single_pane_g2_ParamLimits

0xdfba,	// (0x000106e6) list_single_pane_g2

0x0001,

0xf60c,	// (0x00011d38) list_single_pane_g_ParamLimits

0xf60c,	// (0x00011d38) list_single_pane_g

0x22de,	// (0x00004a0a) list_single_pane_t1_ParamLimits

0x22de,	// (0x00004a0a) list_single_pane_t1

0xdfae,	// (0x000106da) list_single_number_pane_g1_ParamLimits

0xdfae,	// (0x000106da) list_single_number_pane_g1

0xdfba,	// (0x000106e6) list_single_number_pane_g2_ParamLimits

0xdfba,	// (0x000106e6) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00011d38) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00011d38) list_single_number_pane_g

0xdfc6,	// (0x000106f2) list_single_number_pane_t1_ParamLimits

0xdfc6,	// (0x000106f2) list_single_number_pane_t1

0x2059,	// (0x00004785) list_single_number_pane_t2_ParamLimits

0x2059,	// (0x00004785) list_single_number_pane_t2

0x0001,

0xf987,	// (0x000120b3) list_single_number_pane_t_ParamLimits

0xf987,	// (0x000120b3) list_single_number_pane_t

0xdfa2,	// (0x000106ce) list_single_graphic_pane_g1_ParamLimits

0xdfa2,	// (0x000106ce) list_single_graphic_pane_g1

0xdfae,	// (0x000106da) list_single_graphic_pane_g2_ParamLimits

0xdfae,	// (0x000106da) list_single_graphic_pane_g2

0xdfba,	// (0x000106e6) list_single_graphic_pane_g3_ParamLimits

0xdfba,	// (0x000106e6) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00011d31) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00011d31) list_single_graphic_pane_g

0xdfc6,	// (0x000106f2) list_single_graphic_pane_t1_ParamLimits

0xdfc6,	// (0x000106f2) list_single_graphic_pane_t1

0xdfae,	// (0x000106da) list_single_heading_pane_g1_ParamLimits

0xdfae,	// (0x000106da) list_single_heading_pane_g1

0xdfba,	// (0x000106e6) list_single_heading_pane_g2_ParamLimits

0xdfba,	// (0x000106e6) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00011d38) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00011d38) list_single_heading_pane_g

0xdfdc,	// (0x00010708) list_single_heading_pane_t1_ParamLimits

0xdfdc,	// (0x00010708) list_single_heading_pane_t1

0xdff2,	// (0x0001071e) list_single_heading_pane_t2_ParamLimits

0xdff2,	// (0x0001071e) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00011d3d) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00011d3d) list_single_heading_pane_t

0xdfae,	// (0x000106da) list_single_number_heading_pane_g1_ParamLimits

0xdfae,	// (0x000106da) list_single_number_heading_pane_g1

0xdfba,	// (0x000106e6) list_single_number_heading_pane_g2_ParamLimits

0xdfba,	// (0x000106e6) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00011d38) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00011d38) list_single_number_heading_pane_g

0xdfdc,	// (0x00010708) list_single_number_heading_pane_t1_ParamLimits

0xdfdc,	// (0x00010708) list_single_number_heading_pane_t1

0xe004,	// (0x00010730) list_single_number_heading_pane_t2_ParamLimits

0xe004,	// (0x00010730) list_single_number_heading_pane_t2

0xe016,	// (0x00010742) list_single_number_heading_pane_t3_ParamLimits

0xe016,	// (0x00010742) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00011d42) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00011d42) list_single_number_heading_pane_t

0xdfa2,	// (0x000106ce) list_single_graphic_heading_pane_g1_ParamLimits

0xdfa2,	// (0x000106ce) list_single_graphic_heading_pane_g1

0xe028,	// (0x00010754) list_single_graphic_heading_pane_g4_ParamLimits

0xe028,	// (0x00010754) list_single_graphic_heading_pane_g4

0xdfba,	// (0x000106e6) list_single_graphic_heading_pane_g5_ParamLimits

0xdfba,	// (0x000106e6) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00011d49) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00011d49) list_single_graphic_heading_pane_g

0xdfdc,	// (0x00010708) list_single_graphic_heading_pane_t1_ParamLimits

0xdfdc,	// (0x00010708) list_single_graphic_heading_pane_t1

0xe037,	// (0x00010763) list_single_graphic_heading_pane_t2_ParamLimits

0xe037,	// (0x00010763) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00011d50) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00011d50) list_single_graphic_heading_pane_t

0xe049,	// (0x00010775) list_single_large_graphic_pane_g1_ParamLimits

0xe049,	// (0x00010775) list_single_large_graphic_pane_g1

0xe055,	// (0x00010781) list_single_large_graphic_pane_g2_ParamLimits

0xe055,	// (0x00010781) list_single_large_graphic_pane_g2

0xe061,	// (0x0001078d) list_single_large_graphic_pane_g3_ParamLimits

0xe061,	// (0x0001078d) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00011d55) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00011d55) list_single_large_graphic_pane_g

0x11ec,	// (0x00003918) wait_border_pane_g2_copy1

0xe06d,	// (0x00010799) list_single_large_graphic_pane_g4_cp2

0xe075,	// (0x000107a1) list_single_large_graphic_pane_t1_ParamLimits

0xe075,	// (0x000107a1) list_single_large_graphic_pane_t1

0xe08b,	// (0x000107b7) list_double_pane_g1_ParamLimits

0xe08b,	// (0x000107b7) list_double_pane_g1

0xe097,	// (0x000107c3) list_double_pane_g2_ParamLimits

0xe097,	// (0x000107c3) list_double_pane_g2

0x0001,

0xf630,	// (0x00011d5c) list_double_pane_g_ParamLimits

0xf630,	// (0x00011d5c) list_double_pane_g

0xe0a3,	// (0x000107cf) list_double_pane_t1_ParamLimits

0xe0a3,	// (0x000107cf) list_double_pane_t1

0xe0b9,	// (0x000107e5) list_double_pane_t2_ParamLimits

0xe0b9,	// (0x000107e5) list_double_pane_t2

0x0001,

0xf635,	// (0x00011d61) list_double_pane_t_ParamLimits

0xf635,	// (0x00011d61) list_double_pane_t

0xe0cb,	// (0x000107f7) list_double2_pane_g1_ParamLimits

0xe0cb,	// (0x000107f7) list_double2_pane_g1

0xe0da,	// (0x00010806) list_double2_pane_g2_ParamLimits

0xe0da,	// (0x00010806) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00011d66) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00011d66) list_double2_pane_g

0xe0e6,	// (0x00010812) list_double2_pane_t1_ParamLimits

0xe0e6,	// (0x00010812) list_double2_pane_t1

0xe0fc,	// (0x00010828) list_double2_pane_t2_ParamLimits

0xe0fc,	// (0x00010828) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00011d6b) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00011d6b) list_double2_pane_t

0xe08b,	// (0x000107b7) list_double_number_pane_g1_ParamLimits

0xe08b,	// (0x000107b7) list_double_number_pane_g1

0xe097,	// (0x000107c3) list_double_number_pane_g2_ParamLimits

0xe097,	// (0x000107c3) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00011d5c) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00011d5c) list_double_number_pane_g

0xe10e,	// (0x0001083a) list_double_number_pane_t1_ParamLimits

0xe10e,	// (0x0001083a) list_double_number_pane_t1

0xe120,	// (0x0001084c) list_double_number_pane_t2_ParamLimits

0xe120,	// (0x0001084c) list_double_number_pane_t2

0xe136,	// (0x00010862) list_double_number_pane_t3_ParamLimits

0xe136,	// (0x00010862) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00011d70) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00011d70) list_double_number_pane_t

0xe148,	// (0x00010874) list_double_graphic_pane_g1_ParamLimits

0xe148,	// (0x00010874) list_double_graphic_pane_g1

0xe154,	// (0x00010880) list_double_graphic_pane_g2_ParamLimits

0xe154,	// (0x00010880) list_double_graphic_pane_g2

0xe163,	// (0x0001088f) list_double_graphic_pane_g3_ParamLimits

0xe163,	// (0x0001088f) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00011d77) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00011d77) list_double_graphic_pane_g

0xe17b,	// (0x000108a7) list_double_graphic_pane_t1_ParamLimits

0xe17b,	// (0x000108a7) list_double_graphic_pane_t1

0xe191,	// (0x000108bd) list_double_graphic_pane_t2_ParamLimits

0xe191,	// (0x000108bd) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00011d80) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00011d80) list_double_graphic_pane_t

0xe1a3,	// (0x000108cf) list_double2_graphic_pane_g1_ParamLimits

0xe1a3,	// (0x000108cf) list_double2_graphic_pane_g1

0xe1af,	// (0x000108db) list_double2_graphic_pane_g2_ParamLimits

0xe1af,	// (0x000108db) list_double2_graphic_pane_g2

0xe0da,	// (0x00010806) list_double2_graphic_pane_g3_ParamLimits

0xe0da,	// (0x00010806) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00011d85) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00011d85) list_double2_graphic_pane_g

0xe1bb,	// (0x000108e7) list_double2_graphic_pane_t1_ParamLimits

0xe1bb,	// (0x000108e7) list_double2_graphic_pane_t1

0xe1d1,	// (0x000108fd) list_double2_graphic_pane_t2_ParamLimits

0xe1d1,	// (0x000108fd) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00011d8c) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00011d8c) list_double2_graphic_pane_t

0xe1e3,	// (0x0001090f) list_double_large_graphic_pane_g1_ParamLimits

0xe1e3,	// (0x0001090f) list_double_large_graphic_pane_g1

0xe20c,	// (0x00010938) list_double_large_graphic_pane_g2_ParamLimits

0xe20c,	// (0x00010938) list_double_large_graphic_pane_g2

0xe097,	// (0x000107c3) list_double_large_graphic_pane_g3_ParamLimits

0xe097,	// (0x000107c3) list_double_large_graphic_pane_g3

0xe21b,	// (0x00010947) list_double_large_graphic_pane_g4_ParamLimits

0xe21b,	// (0x00010947) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00011d91) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00011d91) list_double_large_graphic_pane_g

0xe241,	// (0x0001096d) list_double_large_graphic_pane_t1_ParamLimits

0xe241,	// (0x0001096d) list_double_large_graphic_pane_t1

0xe25a,	// (0x00010986) list_double_large_graphic_pane_t2_ParamLimits

0xe25a,	// (0x00010986) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00011d9c) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00011d9c) list_double_large_graphic_pane_t

0xe26c,	// (0x00010998) list_double2_large_graphic_pane_g1_ParamLimits

0xe26c,	// (0x00010998) list_double2_large_graphic_pane_g1

0xe0cb,	// (0x000107f7) list_double2_large_graphic_pane_g2_ParamLimits

0xe0cb,	// (0x000107f7) list_double2_large_graphic_pane_g2

0xe0da,	// (0x00010806) list_double2_large_graphic_pane_g3_ParamLimits

0xe0da,	// (0x00010806) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00011da1) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00011da1) list_double2_large_graphic_pane_g

0xe278,	// (0x000109a4) list_double2_large_graphic_pane_t1_ParamLimits

0xe278,	// (0x000109a4) list_double2_large_graphic_pane_t1

0xe28e,	// (0x000109ba) list_double2_large_graphic_pane_t2_ParamLimits

0xe28e,	// (0x000109ba) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00011da8) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00011da8) list_double2_large_graphic_pane_t

0xe2a0,	// (0x000109cc) list_double_heading_pane_g1_ParamLimits

0xe2a0,	// (0x000109cc) list_double_heading_pane_g1

0xe2af,	// (0x000109db) list_double_heading_pane_g2_ParamLimits

0xe2af,	// (0x000109db) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00011dad) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00011dad) list_double_heading_pane_g

0xe2bb,	// (0x000109e7) list_double_heading_pane_t1_ParamLimits

0xe2bb,	// (0x000109e7) list_double_heading_pane_t1

0xe0fc,	// (0x00010828) list_double_heading_pane_t2_ParamLimits

0xe0fc,	// (0x00010828) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00011db2) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00011db2) list_double_heading_pane_t

0xe148,	// (0x00010874) list_double_graphic_heading_pane_g1_ParamLimits

0xe148,	// (0x00010874) list_double_graphic_heading_pane_g1

0xe2a0,	// (0x000109cc) list_double_graphic_heading_pane_g2_ParamLimits

0xe2a0,	// (0x000109cc) list_double_graphic_heading_pane_g2

0xe2af,	// (0x000109db) list_double_graphic_heading_pane_g3_ParamLimits

0xe2af,	// (0x000109db) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00011db7) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00011db7) list_double_graphic_heading_pane_g

0xe2d1,	// (0x000109fd) list_double_graphic_heading_pane_t1_ParamLimits

0xe2d1,	// (0x000109fd) list_double_graphic_heading_pane_t1

0xe1d1,	// (0x000108fd) list_double_graphic_heading_pane_t2_ParamLimits

0xe1d1,	// (0x000108fd) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00011dbe) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00011dbe) list_double_graphic_heading_pane_t

0xe20c,	// (0x00010938) list_double_time_pane_g1_ParamLimits

0xe20c,	// (0x00010938) list_double_time_pane_g1

0xe097,	// (0x000107c3) list_double_time_pane_g2_ParamLimits

0xe097,	// (0x000107c3) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00011dc3) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00011dc3) list_double_time_pane_g

0xe2e7,	// (0x00010a13) list_double_time_pane_t1_ParamLimits

0xe2e7,	// (0x00010a13) list_double_time_pane_t1

0xe2fd,	// (0x00010a29) list_double_time_pane_t2_ParamLimits

0xe2fd,	// (0x00010a29) list_double_time_pane_t2

0xe30f,	// (0x00010a3b) list_double_time_pane_t3_ParamLimits

0xe30f,	// (0x00010a3b) list_double_time_pane_t3

0xe321,	// (0x00010a4d) list_double_time_pane_t4_ParamLimits

0xe321,	// (0x00010a4d) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00011dc8) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00011dc8) list_double_time_pane_t

0xe1af,	// (0x000108db) list_setting_pane_g1_ParamLimits

0xe1af,	// (0x000108db) list_setting_pane_g1

0xe0da,	// (0x00010806) list_setting_pane_g2_ParamLimits

0xe0da,	// (0x00010806) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_setting_pane_g

0xe333,	// (0x00010a5f) list_setting_pane_t1_ParamLimits

0xe333,	// (0x00010a5f) list_setting_pane_t1

0xe34a,	// (0x00010a76) list_setting_pane_t2_ParamLimits

0xe34a,	// (0x00010a76) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00011dd6) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00011dd6) list_setting_pane_t

0xe387,	// (0x00010ab3) set_value_pane_cp_ParamLimits

0xe387,	// (0x00010ab3) set_value_pane_cp

0xe1af,	// (0x000108db) list_setting_number_pane_g1_ParamLimits

0xe1af,	// (0x000108db) list_setting_number_pane_g1

0xe0da,	// (0x00010806) list_setting_number_pane_g2_ParamLimits

0xe0da,	// (0x00010806) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_setting_number_pane_g

0xe393,	// (0x00010abf) list_setting_number_pane_t1_ParamLimits

0xe393,	// (0x00010abf) list_setting_number_pane_t1

0xe3a5,	// (0x00010ad1) list_setting_number_pane_t2_ParamLimits

0xe3a5,	// (0x00010ad1) list_setting_number_pane_t2

0xe3bc,	// (0x00010ae8) list_setting_number_pane_t3_ParamLimits

0xe3bc,	// (0x00010ae8) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00011ddd) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00011ddd) list_setting_number_pane_t

0xe387,	// (0x00010ab3) set_value_pane_ParamLimits

0xe387,	// (0x00010ab3) set_value_pane

0xe3fd,	// (0x00010b29) bg_set_opt_pane_ParamLimits

0xe3fd,	// (0x00010b29) bg_set_opt_pane

0xe41e,	// (0x00010b4a) set_value_pane_t1

0xe42c,	// (0x00010b58) slider_set_pane_cp3

0xe435,	// (0x00010b61) volume_small_pane_cp

0xe43e,	// (0x00010b6a) list_form_gen_pane

0xdf91,	// (0x000106bd) scroll_pane_cp8

0xe457,	// (0x00010b83) form_field_data_pane_ParamLimits

0xe457,	// (0x00010b83) form_field_data_pane

0xe477,	// (0x00010ba3) form_field_data_wide_pane_ParamLimits

0xe477,	// (0x00010ba3) form_field_data_wide_pane

0xe496,	// (0x00010bc2) form_field_popup_pane_ParamLimits

0xe496,	// (0x00010bc2) form_field_popup_pane

0xe4ae,	// (0x00010bda) form_field_popup_wide_pane_ParamLimits

0xe4ae,	// (0x00010bda) form_field_popup_wide_pane

0xe4c5,	// (0x00010bf1) form_field_slider_pane_ParamLimits

0xe4c5,	// (0x00010bf1) form_field_slider_pane

0xe4d8,	// (0x00010c04) form_field_slider_wide_pane_ParamLimits

0xe4d8,	// (0x00010c04) form_field_slider_wide_pane

0xe4eb,	// (0x00010c17) data_form_pane

0xe4ff,	// (0x00010c2b) form_field_data_pane_t1

0xe517,	// (0x00010c43) input_focus_pane

0xe525,	// (0x00010c51) data_form_wide_pane

0xe551,	// (0x00010c7d) form_field_data_wide_pane_t1

0xde08,	// (0x00010534) input_focus_pane_cp6

0xe573,	// (0x00010c9f) form_field_popup_pane_t1

0xe517,	// (0x00010c43) input_focus_pane_cp7

0xe4eb,	// (0x00010c17) list_form_pane

0xe593,	// (0x00010cbf) form_field_popup_wide_pane_t1

0xe517,	// (0x00010c43) input_focus_pane_cp8

0xe5a8,	// (0x00010cd4) list_form_wide_pane

0xe5bf,	// (0x00010ceb) form_field_slider_pane_t1_ParamLimits

0xe5bf,	// (0x00010ceb) form_field_slider_pane_t1

0xe5d5,	// (0x00010d01) form_field_slider_pane_t2_ParamLimits

0xe5d5,	// (0x00010d01) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00011ded) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00011ded) form_field_slider_pane_t

0xda9a,	// (0x000101c6) input_focus_pane_cp9_ParamLimits

0xda9a,	// (0x000101c6) input_focus_pane_cp9

0xe5e7,	// (0x00010d13) slider_cont_pane_ParamLimits

0xe5e7,	// (0x00010d13) slider_cont_pane

0xe5fb,	// (0x00010d27) form_field_slider_wide_pane_t1_ParamLimits

0xe5fb,	// (0x00010d27) form_field_slider_wide_pane_t1

0xe60d,	// (0x00010d39) form_field_slider_wide_pane_t2_ParamLimits

0xe60d,	// (0x00010d39) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00011df2) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00011df2) form_field_slider_wide_pane_t

0xda9a,	// (0x000101c6) input_focus_pane_cp10_ParamLimits

0xda9a,	// (0x000101c6) input_focus_pane_cp10

0xe61f,	// (0x00010d4b) slider_cont_pane_cp1_ParamLimits

0xe61f,	// (0x00010d4b) slider_cont_pane_cp1

0xe635,	// (0x00010d61) slider_form_pane_cp

0xe63d,	// (0x00010d69) input_focus_pane_g1

0xe645,	// (0x00010d71) input_focus_pane_g2

0xe64d,	// (0x00010d79) input_focus_pane_g3

0xe655,	// (0x00010d81) input_focus_pane_g4

0xe65d,	// (0x00010d89) input_focus_pane_g5

0xe665,	// (0x00010d91) input_focus_pane_g6

0xe66d,	// (0x00010d99) input_focus_pane_g7

0xe675,	// (0x00010da1) input_focus_pane_g8

0xe67d,	// (0x00010da9) input_focus_pane_g9

0xd63a,	// (0x0000fd66) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00011df7) input_focus_pane_g

0x11f5,	// (0x00003921) wait_border_pane_g3_copy1

0xe685,	// (0x00010db1) data_form_pane_t1

0xd63a,	// (0x0000fd66) wait_anim_pane_g1_copy1

0x22c4,	// (0x000049f0) data_form_wide_pane_t1

0xe69f,	// (0x00010dcb) list_form_graphic_pane_cp_ParamLimits

0xe69f,	// (0x00010dcb) list_form_graphic_pane_cp

0x2291,	// (0x000049bd) slider_form_pane_g1

0x229a,	// (0x000049c6) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x000120e3) slider_form_pane_g

0xe6b4,	// (0x00010de0) list_form_graphic_pane_ParamLimits

0xe6b4,	// (0x00010de0) list_form_graphic_pane

0xe6ca,	// (0x00010df6) list_form_graphic_pane_g1

0xe6d2,	// (0x00010dfe) list_form_graphic_pane_t1_ParamLimits

0xe6d2,	// (0x00010dfe) list_form_graphic_pane_t1

0xd801,	// (0x0000ff2d) list_highlight_pane_cp5_ParamLimits

0xd801,	// (0x0000ff2d) list_highlight_pane_cp5

0xe6e7,	// (0x00010e13) find_pane_g1

0xe6f0,	// (0x00010e1c) input_find_pane

0xe6f9,	// (0x00010e25) input_find_pane_g1_ParamLimits

0xe6f9,	// (0x00010e25) input_find_pane_g1

0xe705,	// (0x00010e31) input_find_pane_t1_ParamLimits

0xe705,	// (0x00010e31) input_find_pane_t1

0xe71a,	// (0x00010e46) input_find_pane_t2_ParamLimits

0xe71a,	// (0x00010e46) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00011e0c) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00011e0c) input_find_pane_t

0xe72f,	// (0x00010e5b) input_focus_pane_cp5_ParamLimits

0xe72f,	// (0x00010e5b) input_focus_pane_cp5

0xda9a,	// (0x000101c6) bg_popup_window_pane_cp2_ParamLimits

0xda9a,	// (0x000101c6) bg_popup_window_pane_cp2

0xe749,	// (0x00010e75) listscroll_menu_pane_ParamLimits

0xe749,	// (0x00010e75) listscroll_menu_pane

0xe755,	// (0x00010e81) popup_submenu_window_ParamLimits

0xe755,	// (0x00010e81) popup_submenu_window

0xe779,	// (0x00010ea5) find_popup_pane_g1

0xe781,	// (0x00010ead) input_popup_find_pane_cp

0xe72f,	// (0x00010e5b) input_focus_pane_cp4_ParamLimits

0xe72f,	// (0x00010e5b) input_focus_pane_cp4

0xe797,	// (0x00010ec3) input_popup_find_pane_t1_ParamLimits

0xe797,	// (0x00010ec3) input_popup_find_pane_t1

0xd721,	// (0x0000fe4d) bg_popup_sub_pane_cp

0xe7c5,	// (0x00010ef1) listscroll_popup_sub_pane

0xe7cd,	// (0x00010ef9) list_submenu_pane_ParamLimits

0xe7cd,	// (0x00010ef9) list_submenu_pane

0xe7de,	// (0x00010f0a) scroll_pane_cp4

0xe7e6,	// (0x00010f12) list_single_popup_submenu_pane_ParamLimits

0xe7e6,	// (0x00010f12) list_single_popup_submenu_pane

0xe7fa,	// (0x00010f26) list_single_popup_submenu_pane_g1

0xe802,	// (0x00010f2e) list_single_popup_submenu_pane_t1_ParamLimits

0xe802,	// (0x00010f2e) list_single_popup_submenu_pane_t1

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp1_ParamLimits

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp1

0xe817,	// (0x00010f43) tabs_2_active_pane_g1

0xe81f,	// (0x00010f4b) tabs_2_active_pane_t1

0xd801,	// (0x0000ff2d) bg_passive_tab_pane_cp1_ParamLimits

0xd801,	// (0x0000ff2d) bg_passive_tab_pane_cp1

0xe817,	// (0x00010f43) tabs_2_passive_pane_g1

0xe81f,	// (0x00010f4b) tabs_2_passive_pane_t1

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp4

0xe83f,	// (0x00010f6b) tabs_2_long_active_pane_t1

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp4

0xc5b2,	// (0x0000ecde) list_single_midp_graphic_pane_g4_ParamLimits

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp5

0xe85e,	// (0x00010f8a) tabs_3_long_active_pane_t1

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp5

0xc5b2,	// (0x0000ecde) list_single_midp_graphic_pane_g4

0xd801,	// (0x0000ff2d) bg_popup_window_pane_cp13_ParamLimits

0xd801,	// (0x0000ff2d) bg_popup_window_pane_cp13

0xe879,	// (0x00010fa5) listscroll_popup_fast_pane_ParamLimits

0xe879,	// (0x00010fa5) listscroll_popup_fast_pane

0xe888,	// (0x00010fb4) grid_popup_fast_pane_ParamLimits

0xe888,	// (0x00010fb4) grid_popup_fast_pane

0xe89a,	// (0x00010fc6) scroll_pane_cp9_ParamLimits

0xe89a,	// (0x00010fc6) scroll_pane_cp9

0x4207,	// (0x00006933) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4207,	// (0x00006933) list_single_graphic_hl_pane_t1_cp2

0xe8be,	// (0x00010fea) input_focus_pane_cp20_ParamLimits

0xe8be,	// (0x00010fea) input_focus_pane_cp20

0xe8cc,	// (0x00010ff8) query_popup_data_pane_t1_ParamLimits

0xe8cc,	// (0x00010ff8) query_popup_data_pane_t1

0xe8df,	// (0x0001100b) query_popup_data_pane_t2_ParamLimits

0xe8df,	// (0x0001100b) query_popup_data_pane_t2

0xe925,	// (0x00011051) query_popup_data_pane_t3_ParamLimits

0xe925,	// (0x00011051) query_popup_data_pane_t3

0xe966,	// (0x00011092) query_popup_data_pane_t4_ParamLimits

0xe966,	// (0x00011092) query_popup_data_pane_t4

0xe9a2,	// (0x000110ce) query_popup_data_pane_t5_ParamLimits

0xe9a2,	// (0x000110ce) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00011e11) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00011e11) query_popup_data_pane_t

0xe63d,	// (0x00010d69) bg_set_opt_pane_g1

0xe645,	// (0x00010d71) bg_set_opt_pane_g2

0xe64d,	// (0x00010d79) bg_set_opt_pane_g3

0xe655,	// (0x00010d81) bg_set_opt_pane_g4

0xe65d,	// (0x00010d89) bg_set_opt_pane_g5

0xe665,	// (0x00010d91) bg_set_opt_pane_g6

0xe66d,	// (0x00010d99) bg_set_opt_pane_g7

0xe675,	// (0x00010da1) bg_set_opt_pane_g8

0xe67d,	// (0x00010da9) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00011e1c) bg_set_opt_pane_g

0xc1d5,	// (0x0000e901) control_top_pane_stacon_ParamLimits

0xc1d5,	// (0x0000e901) control_top_pane_stacon

0xc228,	// (0x0000e954) signal_pane_stacon_ParamLimits

0xc228,	// (0x0000e954) signal_pane_stacon

0xefb7,	// (0x000116e3) stacon_top_pane_g1_ParamLimits

0xefb7,	// (0x000116e3) stacon_top_pane_g1

0xc24d,	// (0x0000e979) title_pane_stacon_ParamLimits

0xc24d,	// (0x0000e979) title_pane_stacon

0xc26f,	// (0x0000e99b) uni_indicator_pane_stacon_ParamLimits

0xc26f,	// (0x0000e99b) uni_indicator_pane_stacon

0xc284,	// (0x0000e9b0) battery_pane_stacon_ParamLimits

0xc284,	// (0x0000e9b0) battery_pane_stacon

0xc2c4,	// (0x0000e9f0) control_bottom_pane_stacon_ParamLimits

0xc2c4,	// (0x0000e9f0) control_bottom_pane_stacon

0xc2e3,	// (0x0000ea0f) navi_pane_stacon_ParamLimits

0xc2e3,	// (0x0000ea0f) navi_pane_stacon

0xefd9,	// (0x00011705) stacon_bottom_pane_g1_ParamLimits

0xefd9,	// (0x00011705) stacon_bottom_pane_g1

0xe9d9,	// (0x00011105) aid_levels_signal_lsc_ParamLimits

0xe9d9,	// (0x00011105) aid_levels_signal_lsc

0xbfa1,	// (0x0000e6cd) signal_pane_stacon_g1_ParamLimits

0xbfa1,	// (0x0000e6cd) signal_pane_stacon_g1

0xbfad,	// (0x0000e6d9) signal_pane_stacon_g2_ParamLimits

0xbfad,	// (0x0000e6d9) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00011e2f) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00011e2f) signal_pane_stacon_g

0xbfe1,	// (0x0000e70d) title_pane_stacon_t1_ParamLimits

0xbfe1,	// (0x0000e70d) title_pane_stacon_t1

0xe9f3,	// (0x0001111f) uni_indicator_pane_stacon_g1

0xe9fd,	// (0x00011129) uni_indicator_pane_stacon_g2

0xea07,	// (0x00011133) uni_indicator_pane_stacon_g3

0xea11,	// (0x0001113d) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00011e3b) uni_indicator_pane_stacon_g

0xc006,	// (0x0000e732) control_top_pane_stacon_g1

0xc00e,	// (0x0000e73a) control_top_pane_stacon_t1_ParamLimits

0xc00e,	// (0x0000e73a) control_top_pane_stacon_t1

0xea1b,	// (0x00011147) aid_levels_battery_lsc_ParamLimits

0xea1b,	// (0x00011147) aid_levels_battery_lsc

0xc03f,	// (0x0000e76b) battery_pane_stacon_g1_ParamLimits

0xc03f,	// (0x0000e76b) battery_pane_stacon_g1

0xc04b,	// (0x0000e777) battery_pane_stacon_g2_ParamLimits

0xc04b,	// (0x0000e777) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00011e44) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00011e44) battery_pane_stacon_g

0xc07a,	// (0x0000e7a6) navi_icon_pane_stacon

0xc08a,	// (0x0000e7b6) navi_navi_pane_stacon

0xc07a,	// (0x0000e7a6) navi_text_pane_stacon

0xc006,	// (0x0000e732) control_bottom_pane_stacon_g1

0xc09a,	// (0x0000e7c6) control_bottom_pane_stacon_t1_ParamLimits

0xc09a,	// (0x0000e7c6) control_bottom_pane_stacon_t1

0xea43,	// (0x0001116f) grid_app_pane_ParamLimits

0xea43,	// (0x0001116f) grid_app_pane

0xea5f,	// (0x0001118b) scroll_pane_cp15_ParamLimits

0xea5f,	// (0x0001118b) scroll_pane_cp15

0xea72,	// (0x0001119e) cell_app_pane_ParamLimits

0xea72,	// (0x0001119e) cell_app_pane

0xea94,	// (0x000111c0) cell_app_pane_g1_ParamLimits

0xea94,	// (0x000111c0) cell_app_pane_g1

0xeab8,	// (0x000111e4) cell_app_pane_g2_ParamLimits

0xeab8,	// (0x000111e4) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00011e49) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00011e49) cell_app_pane_g

0xeac4,	// (0x000111f0) cell_app_pane_t1_ParamLimits

0xeac4,	// (0x000111f0) cell_app_pane_t1

0xead6,	// (0x00011202) grid_highlight_pane_ParamLimits

0xead6,	// (0x00011202) grid_highlight_pane

0xe63d,	// (0x00010d69) cell_highlight_pane_g1

0xe645,	// (0x00010d71) cell_highlight_pane_g2

0xe64d,	// (0x00010d79) cell_highlight_pane_g3

0xe655,	// (0x00010d81) cell_highlight_pane_g4

0xe65d,	// (0x00010d89) cell_highlight_pane_g5

0xe665,	// (0x00010d91) cell_highlight_pane_g6

0xe66d,	// (0x00010d99) cell_highlight_pane_g7

0xe675,	// (0x00010da1) cell_highlight_pane_g8

0xe67d,	// (0x00010da9) cell_highlight_pane_g9

0xd63a,	// (0x0000fd66) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00011df7) cell_highlight_pane_g

0xeae7,	// (0x00011213) bg_scroll_pane

0xc0de,	// (0x0000e80a) scroll_handle_pane

0xeb2e,	// (0x0001125a) scroll_bg_pane_g1

0xeb43,	// (0x0001126f) scroll_bg_pane_g2

0xeb5b,	// (0x00011287) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00011e4e) scroll_bg_pane_g

0xeb70,	// (0x0001129c) scroll_handle_focus_pane_ParamLimits

0xeb70,	// (0x0001129c) scroll_handle_focus_pane

0xeb2e,	// (0x0001125a) scroll_handle_pane_g1

0xeb7d,	// (0x000112a9) scroll_handle_pane_g2

0xeb5b,	// (0x00011287) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00011e55) scroll_handle_pane_g

0xe72f,	// (0x00010e5b) bg_popup_sub_pane_cp21_ParamLimits

0xe72f,	// (0x00010e5b) bg_popup_sub_pane_cp21

0xeb91,	// (0x000112bd) popup_fep_japan_predictive_window_t1_ParamLimits

0xeb91,	// (0x000112bd) popup_fep_japan_predictive_window_t1

0xeba8,	// (0x000112d4) popup_fep_japan_predictive_window_t2_ParamLimits

0xeba8,	// (0x000112d4) popup_fep_japan_predictive_window_t2

0xebdb,	// (0x00011307) popup_fep_japan_predictive_window_t3_ParamLimits

0xebdb,	// (0x00011307) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00011e5c) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00011e5c) popup_fep_japan_predictive_window_t

0xd721,	// (0x0000fe4d) bg_popup_sub_pane_cp23

0xec12,	// (0x0001133e) listscroll_japin_cand_pane

0xec1a,	// (0x00011346) popup_fep_japan_candidate_window_t1

0xec28,	// (0x00011354) candidate_pane_ParamLimits

0xec28,	// (0x00011354) candidate_pane

0xec3b,	// (0x00011367) scroll_pane_cp30

0xec43,	// (0x0001136f) list_single_popup_jap_candidate_pane_ParamLimits

0xec43,	// (0x0001136f) list_single_popup_jap_candidate_pane

0xd721,	// (0x0000fe4d) list_highlight_pane_cp30

0xec58,	// (0x00011384) list_single_popup_jap_candidate_pane_t1

0xec67,	// (0x00011393) level_1_signal

0xec74,	// (0x000113a0) level_2_signal

0xec81,	// (0x000113ad) level_3_signal

0xec8e,	// (0x000113ba) level_4_signal

0xec9b,	// (0x000113c7) level_5_signal

0xeca8,	// (0x000113d4) level_6_signal

0xecb5,	// (0x000113e1) level_7_signal

0xec67,	// (0x00011393) level_1_battery

0xec74,	// (0x000113a0) level_2_battery

0xec81,	// (0x000113ad) level_3_battery

0xec8e,	// (0x000113ba) level_4_battery

0xec9b,	// (0x000113c7) level_5_battery

0xeca8,	// (0x000113d4) level_6_battery

0xecb5,	// (0x000113e1) level_7_battery

0xecda,	// (0x00011406) list_menu_pane_ParamLimits

0xecda,	// (0x00011406) list_menu_pane

0xeceb,	// (0x00011417) scroll_pane_cp25_ParamLimits

0xeceb,	// (0x00011417) scroll_pane_cp25

0xed04,	// (0x00011430) list_double2_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double2_graphic_pane_cp2

0xed04,	// (0x00011430) list_double2_large_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double2_large_graphic_pane_cp2

0xed04,	// (0x00011430) list_double2_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double2_pane_cp2

0xed04,	// (0x00011430) list_double_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double_graphic_pane_cp2

0xed04,	// (0x00011430) list_double_large_graphic_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double_large_graphic_pane_cp2

0xed04,	// (0x00011430) list_double_number_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double_number_pane_cp2

0xed04,	// (0x00011430) list_double_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double_pane_cp2

0xed14,	// (0x00011440) list_single_2graphic_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_2graphic_pane_cp2

0xed14,	// (0x00011440) list_single_graphic_heading_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_graphic_heading_pane_cp2

0xed14,	// (0x00011440) list_single_graphic_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_graphic_pane_cp2

0xed14,	// (0x00011440) list_single_heading_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_heading_pane_cp2

0xed29,	// (0x00011455) list_single_large_graphic_pane_cp2_ParamLimits

0xed29,	// (0x00011455) list_single_large_graphic_pane_cp2

0xed14,	// (0x00011440) list_single_number_heading_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_number_heading_pane_cp2

0xed14,	// (0x00011440) list_single_number_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_number_pane_cp2

0xed14,	// (0x00011440) list_single_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_pane_cp2

0xed80,	// (0x000114ac) bg_popup_sub_pane_cp22

0xc18d,	// (0x0000e8b9) popup_side_volume_key_window_g1

0xc1b1,	// (0x0000e8dd) popup_side_volume_key_window_t1

0xc1cd,	// (0x0000e8f9) volume_small_pane_cp1

0xda9a,	// (0x000101c6) bg_popup_sub_pane_cp24_ParamLimits

0xda9a,	// (0x000101c6) bg_popup_sub_pane_cp24

0xed96,	// (0x000114c2) fep_china_uni_candidate_pane_ParamLimits

0xed96,	// (0x000114c2) fep_china_uni_candidate_pane

0xedaa,	// (0x000114d6) fep_china_uni_entry_pane

0xedba,	// (0x000114e6) popup_fep_china_uni_window_g1

0xedd6,	// (0x00011502) fep_china_uni_entry_pane_g1

0xedde,	// (0x0001150a) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00011e89) fep_china_uni_entry_pane_g

0xede6,	// (0x00011512) fep_entry_item_pane

0xedf0,	// (0x0001151c) fep_candidate_item_pane

0xedf8,	// (0x00011524) fep_china_uni_candidate_pane_g1

0xee00,	// (0x0001152c) fep_china_uni_candidate_pane_g2

0xee08,	// (0x00011534) fep_china_uni_candidate_pane_g3

0xee10,	// (0x0001153c) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00011e8e) fep_china_uni_candidate_pane_g

0xd63a,	// (0x0000fd66) fep_entry_item_pane_g1

0xee18,	// (0x00011544) fep_entry_item_pane_t1_ParamLimits

0xee18,	// (0x00011544) fep_entry_item_pane_t1

0xee2e,	// (0x0001155a) fep_candidate_item_pane_t1_ParamLimits

0xee2e,	// (0x0001155a) fep_candidate_item_pane_t1

0xee43,	// (0x0001156f) fep_candidate_item_pane_t2_ParamLimits

0xee43,	// (0x0001156f) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00011e97) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00011e97) fep_candidate_item_pane_t

0xd801,	// (0x0000ff2d) list_highlight_pane_cp31_ParamLimits

0xd801,	// (0x0000ff2d) list_highlight_pane_cp31

0xee55,	// (0x00011581) level_1_signal_lsc

0xee5e,	// (0x0001158a) level_2_signal_lsc

0xee67,	// (0x00011593) level_3_signal_lsc

0xee70,	// (0x0001159c) level_4_signal_lsc

0xee79,	// (0x000115a5) level_5_signal_lsc

0xee82,	// (0x000115ae) level_6_signal_lsc

0xee8b,	// (0x000115b7) level_7_signal_lsc

0xee8b,	// (0x000115b7) level_1_battery_lsc

0xee94,	// (0x000115c0) level_2_battery_lsc

0xee9d,	// (0x000115c9) level_3_battery_lsc

0xeea6,	// (0x000115d2) level_4_battery_lsc

0xeeaf,	// (0x000115db) level_5_battery_lsc

0xeeb8,	// (0x000115e4) level_6_battery_lsc

0xee55,	// (0x00011581) level_7_battery_lsc

0xeec1,	// (0x000115ed) scroll_handle_focus_pane_g1

0xeeca,	// (0x000115f6) scroll_handle_focus_pane_g2

0xeed3,	// (0x000115ff) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00011e9c) scroll_handle_focus_pane_g

0xeedc,	// (0x00011608) list_single_2graphic_pane_g1_ParamLimits

0xeedc,	// (0x00011608) list_single_2graphic_pane_g1

0xe028,	// (0x00010754) list_single_2graphic_pane_g2_ParamLimits

0xe028,	// (0x00010754) list_single_2graphic_pane_g2

0xdfba,	// (0x000106e6) list_single_2graphic_pane_g3_ParamLimits

0xdfba,	// (0x000106e6) list_single_2graphic_pane_g3

0xeee8,	// (0x00011614) list_single_2graphic_pane_g4_ParamLimits

0xeee8,	// (0x00011614) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x00011ea3) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x00011ea3) list_single_2graphic_pane_g

0xeef4,	// (0x00011620) list_single_2graphic_pane_t1_ParamLimits

0xeef4,	// (0x00011620) list_single_2graphic_pane_t1

0xef22,	// (0x0001164e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xef22,	// (0x0001164e) list_double2_graphic_large_graphic_pane_g1

0xe0cb,	// (0x000107f7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe0cb,	// (0x000107f7) list_double2_graphic_large_graphic_pane_g2

0xe0da,	// (0x00010806) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe0da,	// (0x00010806) list_double2_graphic_large_graphic_pane_g3

0xef32,	// (0x0001165e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xef32,	// (0x0001165e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00011eac) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00011eac) list_double2_graphic_large_graphic_pane_g

0xef3e,	// (0x0001166a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xef3e,	// (0x0001166a) list_double2_graphic_large_graphic_pane_t1

0xef54,	// (0x00011680) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xef54,	// (0x00011680) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x00011eb5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x00011eb5) list_double2_graphic_large_graphic_pane_t

0xf080,	// (0x000117ac) popup_fast_swap_window_ParamLimits

0xf080,	// (0x000117ac) popup_fast_swap_window

0xf09c,	// (0x000117c8) popup_side_volume_key_window

0xf0b6,	// (0x000117e2) stacon_top_pane

0xf0c0,	// (0x000117ec) status_pane_ParamLimits

0xf0c0,	// (0x000117ec) status_pane

0xf0b6,	// (0x000117e2) status_small_pane

0xd721,	// (0x0000fe4d) control_pane

0xd721,	// (0x0000fe4d) stacon_bottom_pane

0xdf91,	// (0x000106bd) scroll_pane_cp121

0xe43e,	// (0x00010b6a) set_content_pane

0xef66,	// (0x00011692) bg_active_tab_pane_g1_cp1

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp1

0xef78,	// (0x000116a4) bg_active_tab_pane_g3_cp1

0xef66,	// (0x00011692) bg_passive_tab_pane_g1_cp1

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp1

0xef78,	// (0x000116a4) bg_passive_tab_pane_g3_cp1

0xef81,	// (0x000116ad) bg_active_tab_pane_g1_cp2

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp2

0xef8a,	// (0x000116b6) bg_active_tab_pane_g3_cp2

0xef81,	// (0x000116ad) bg_passive_tab_pane_g1_cp2

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp2

0xef8a,	// (0x000116b6) bg_passive_tab_pane_g3_cp2

0xef93,	// (0x000116bf) bg_active_tab_pane_g1_cp3

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp3

0xef9c,	// (0x000116c8) bg_active_tab_pane_g3_cp3

0xef93,	// (0x000116bf) bg_passive_tab_pane_g1_cp3

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp3

0xef9c,	// (0x000116c8) bg_passive_tab_pane_g3_cp3

0xefa5,	// (0x000116d1) bg_active_tab_pane_g1_cp4

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp4

0xefae,	// (0x000116da) bg_active_tab_pane_g3_cp4

0xefa5,	// (0x000116d1) bg_passive_tab_pane_g1_cp4

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp4

0xefae,	// (0x000116da) bg_passive_tab_pane_g3_cp4

0xeff5,	// (0x00011721) bg_active_tab_pane_g1_cp5

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp5

0xeffe,	// (0x0001172a) bg_active_tab_pane_g3_cp5

0xeff5,	// (0x00011721) bg_passive_tab_pane_g1_cp5

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp5

0xeffe,	// (0x0001172a) bg_passive_tab_pane_g3_cp5

0xe6b4,	// (0x00010de0) list_set_graphic_pane_ParamLimits

0xe6b4,	// (0x00010de0) list_set_graphic_pane

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp4

0xf007,	// (0x00011733) list_set_graphic_pane_g1_ParamLimits

0xf007,	// (0x00011733) list_set_graphic_pane_g1

0xf013,	// (0x0001173f) list_set_graphic_pane_g2_ParamLimits

0xf013,	// (0x0001173f) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00011eba) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00011eba) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x0001220d) volume_small_pane_cp_g

0xf035,	// (0x00011761) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xf035,	// (0x00011761) list_double2_large_graphic_pane_g1_cp2

0xf041,	// (0x0001176d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf041,	// (0x0001176d) list_double2_large_graphic_pane_g2_cp2

0xf050,	// (0x0001177c) list_double2_large_graphic_pane_g3_cp2

0xf058,	// (0x00011784) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf058,	// (0x00011784) list_double2_large_graphic_pane_t1_cp2

0xf06e,	// (0x0001179a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf06e,	// (0x0001179a) list_double2_large_graphic_pane_t2_cp2

0x1db1,	// (0x000044dd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x1db1,	// (0x000044dd) list_double_large_graphic_pane_g1_cp2

0x1dc2,	// (0x000044ee) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1dc2,	// (0x000044ee) list_double_large_graphic_pane_g2_cp2

0xf19b,	// (0x000118c7) list_double_large_graphic_pane_g3_cp2

0x1dd1,	// (0x000044fd) list_double_large_graphic_pane_g4_cp

0x1dd9,	// (0x00004505) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1dd9,	// (0x00004505) list_double_large_graphic_pane_t1_cp2

0x1df0,	// (0x0000451c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1df0,	// (0x0000451c) list_double_large_graphic_pane_t2_cp2

0xf0ce,	// (0x000117fa) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf0ce,	// (0x000117fa) list_double2_graphic_pane_g1_cp2

0xf0da,	// (0x00011806) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf0da,	// (0x00011806) list_double2_graphic_pane_g2_cp2

0xf0e9,	// (0x00011815) list_double2_graphic_pane_g3_cp2

0xf0f1,	// (0x0001181d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf0f1,	// (0x0001181d) list_double2_graphic_pane_t1_cp2

0xf107,	// (0x00011833) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf107,	// (0x00011833) list_double2_graphic_pane_t2_cp2

0xf119,	// (0x00011845) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011845) list_single_number_heading_pane_g1_cp2

0xf125,	// (0x00011851) list_single_number_heading_pane_g2_cp2

0xf12d,	// (0x00011859) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf12d,	// (0x00011859) list_single_number_heading_pane_t1_cp2

0xf143,	// (0x0001186f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf143,	// (0x0001186f) list_single_number_heading_pane_t2_cp2

0xf155,	// (0x00011881) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf155,	// (0x00011881) list_single_number_heading_pane_t3_cp2

0xf119,	// (0x00011845) list_single_heading_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011845) list_single_heading_pane_g1_cp2

0xf125,	// (0x00011851) list_single_heading_pane_g2_cp2

0xf12d,	// (0x00011859) list_single_heading_pane_t1_cp2_ParamLimits

0xf12d,	// (0x00011859) list_single_heading_pane_t1_cp2

0x1bbb,	// (0x000042e7) list_single_heading_pane_t2_cp2_ParamLimits

0x1bbb,	// (0x000042e7) list_single_heading_pane_t2_cp2

0x1b0b,	// (0x00004237) list_double_graphic_pane_g1_cp2_ParamLimits

0x1b0b,	// (0x00004237) list_double_graphic_pane_g1_cp2

0x1b17,	// (0x00004243) list_double_graphic_pane_g2_cp2_ParamLimits

0x1b17,	// (0x00004243) list_double_graphic_pane_g2_cp2

0x1b26,	// (0x00004252) list_double_graphic_pane_g3_cp2

0x1b2e,	// (0x0000425a) list_double_graphic_pane_t1_cp2_ParamLimits

0x1b2e,	// (0x0000425a) list_double_graphic_pane_t1_cp2

0x1b44,	// (0x00004270) list_double_graphic_pane_t2_cp2_ParamLimits

0x1b44,	// (0x00004270) list_double_graphic_pane_t2_cp2

0xf18f,	// (0x000118bb) list_double_number_pane_g1_cp2_ParamLimits

0xf18f,	// (0x000118bb) list_double_number_pane_g1_cp2

0xf19b,	// (0x000118c7) list_double_number_pane_g2_cp2

0x1ad1,	// (0x000041fd) list_double_number_pane_t1_cp2_ParamLimits

0x1ad1,	// (0x000041fd) list_double_number_pane_t1_cp2

0x1ae3,	// (0x0000420f) list_double_number_pane_t2_cp2_ParamLimits

0x1ae3,	// (0x0000420f) list_double_number_pane_t2_cp2

0x1af9,	// (0x00004225) list_double_number_pane_t3_cp2_ParamLimits

0x1af9,	// (0x00004225) list_double_number_pane_t3_cp2

0x19aa,	// (0x000040d6) list_single_graphic_pane_g1_cp2_ParamLimits

0x19aa,	// (0x000040d6) list_single_graphic_pane_g1_cp2

0xf119,	// (0x00011845) list_single_graphic_pane_g2_cp2_ParamLimits

0xf119,	// (0x00011845) list_single_graphic_pane_g2_cp2

0xf125,	// (0x00011851) list_single_graphic_pane_g3_cp2

0x1982,	// (0x000040ae) list_single_graphic_pane_t1_cp2_ParamLimits

0x1982,	// (0x000040ae) list_single_graphic_pane_t1_cp2

0xf119,	// (0x00011845) list_single_number_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011845) list_single_number_pane_g1_cp2

0xf125,	// (0x00011851) list_single_number_pane_g2_cp2

0x1982,	// (0x000040ae) list_single_number_pane_t1_cp2_ParamLimits

0x1982,	// (0x000040ae) list_single_number_pane_t1_cp2

0x1998,	// (0x000040c4) list_single_number_pane_t2_cp2_ParamLimits

0x1998,	// (0x000040c4) list_single_number_pane_t2_cp2

0xf041,	// (0x0001176d) list_double2_pane_g1_cp2_ParamLimits

0xf041,	// (0x0001176d) list_double2_pane_g1_cp2

0xf050,	// (0x0001177c) list_double2_pane_g2_cp2

0xf167,	// (0x00011893) list_double2_pane_t1_cp2_ParamLimits

0xf167,	// (0x00011893) list_double2_pane_t1_cp2

0xf17d,	// (0x000118a9) list_double2_pane_t2_cp2_ParamLimits

0xf17d,	// (0x000118a9) list_double2_pane_t2_cp2

0xf18f,	// (0x000118bb) list_double_pane_g1_cp2_ParamLimits

0xf18f,	// (0x000118bb) list_double_pane_g1_cp2

0xf19b,	// (0x000118c7) list_double_pane_g2_cp2

0xf1a3,	// (0x000118cf) list_double_pane_t1_cp2_ParamLimits

0xf1a3,	// (0x000118cf) list_double_pane_t1_cp2

0xf1b9,	// (0x000118e5) list_double_pane_t2_cp2_ParamLimits

0xf1b9,	// (0x000118e5) list_double_pane_t2_cp2

0xf1e1,	// (0x0001190d) list_single_pane_cp2_g3

0xf119,	// (0x00011845) list_single_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011845) list_single_pane_g1_cp2

0xf125,	// (0x00011851) list_single_pane_g2_cp2

0xf1f1,	// (0x0001191d) list_single_pane_t1_cp2_ParamLimits

0xf1f1,	// (0x0001191d) list_single_pane_t1_cp2

0xf209,	// (0x00011935) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xf209,	// (0x00011935) list_single_large_graphic_pane_g1_cp2

0xf215,	// (0x00011941) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf215,	// (0x00011941) list_single_large_graphic_pane_g2_cp2

0xf221,	// (0x0001194d) list_single_large_graphic_pane_g3_cp2

0xf229,	// (0x00011955) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf229,	// (0x00011955) list_single_large_graphic_pane_g4_cp1

0xf243,	// (0x0001196f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf243,	// (0x0001196f) list_single_large_graphic_pane_t1_cp2

0x181f,	// (0x00003f4b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x181f,	// (0x00003f4b) list_single_graphic_heading_pane_g1_cp2

0x17fa,	// (0x00003f26) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x17fa,	// (0x00003f26) list_single_graphic_heading_pane_g4_cp2

0xf125,	// (0x00011851) list_single_graphic_heading_pane_g5_cp2

0xf12d,	// (0x00011859) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xf12d,	// (0x00011859) list_single_graphic_heading_pane_t1_cp2

0x182b,	// (0x00003f57) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x182b,	// (0x00003f57) list_single_graphic_heading_pane_t2_cp2

0x17ee,	// (0x00003f1a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x17ee,	// (0x00003f1a) list_single_2graphic_pane_g1_cp2

0x17fa,	// (0x00003f26) list_single_2graphic_pane_g2_cp2_ParamLimits

0x17fa,	// (0x00003f26) list_single_2graphic_pane_g2_cp2

0xf125,	// (0x00011851) list_single_2graphic_pane_g3_cp2

0x0b4a,	// (0x00003276) list_single_2graphic_pane_g4_cp2_ParamLimits

0x0b4a,	// (0x00003276) list_single_2graphic_pane_g4_cp2

0x1809,	// (0x00003f35) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1809,	// (0x00003f35) list_single_2graphic_pane_t1_cp2

0xd63a,	// (0x0000fd66) list_highlight_pane_g10_cp1

0x13e8,	// (0x00003b14) list_highlight_pane_g1_cp1

0x13f0,	// (0x00003b1c) list_highlight_pane_g2_cp1

0x13f8,	// (0x00003b24) list_highlight_pane_g3_cp1

0x1400,	// (0x00003b2c) list_highlight_pane_g4_cp1

0x1408,	// (0x00003b34) list_highlight_pane_g5_cp1

0x1410,	// (0x00003b3c) list_highlight_pane_g6_cp1

0x1418,	// (0x00003b44) list_highlight_pane_g7_cp1

0x1420,	// (0x00003b4c) list_highlight_pane_g8_cp1

0x1428,	// (0x00003b54) list_highlight_pane_g9_cp1

0x1316,	// (0x00003a42) form_field_slider_pane_t3

0x1324,	// (0x00003a50) form_field_slider_pane_t4

0x1332,	// (0x00003a5e) slider_form_pane_ParamLimits

0x1332,	// (0x00003a5e) slider_form_pane

0xd721,	// (0x0000fe4d) control_abbreviations

0xd721,	// (0x0000fe4d) control_conventions

0xd721,	// (0x0000fe4d) control_definitions

0xd721,	// (0x0000fe4d) format_table_attribute

0x1c05,	// (0x00004331) bg_popup_preview_window_pane_g9

0xd721,	// (0x0000fe4d) format_table_data2

0xd721,	// (0x0000fe4d) format_table_data3

0xd721,	// (0x0000fe4d) format_table_data_example

0x0008,

0xd721,	// (0x0000fe4d) intro_purpose

0xf917,	// (0x00012043) bg_popup_preview_window_pane_g

0xd721,	// (0x0000fe4d) texts_category

0xd721,	// (0x0000fe4d) texts_graphics

0xf259,	// (0x00011985) text_digital

0xf268,	// (0x00011994) text_primary

0xf277,	// (0x000119a3) text_primary_small

0xf286,	// (0x000119b2) text_secondary

0xf295,	// (0x000119c1) text_title

0x2437,	// (0x00004b63) bg_passive_tab_pane_g1_cp3_srt

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp3_srt

0x242e,	// (0x00004b5a) bg_passive_tab_pane_g3_cp3_srt

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp3_srt_ParamLimits

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp3_srt

0x2440,	// (0x00004b6c) tabs_4_active_pane_srt_g1

0xd831,	// (0x0000ff5d) tabs_4_active_pane_srt_t1_ParamLimits

0xd831,	// (0x0000ff5d) tabs_4_active_pane_srt_t1

0x2437,	// (0x00004b63) bg_active_tab_pane_g1_cp3_copy1

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp3_copy1

0x242e,	// (0x00004b5a) bg_active_tab_pane_g3_cp3_copy1

0xd801,	// (0x0000ff2d) tabs_2_long_active_pane_srt_ParamLimits

0xd801,	// (0x0000ff2d) tabs_2_long_active_pane_srt

0xd801,	// (0x0000ff2d) tabs_2_long_passive_pane_srt_ParamLimits

0xd801,	// (0x0000ff2d) tabs_2_long_passive_pane_srt

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp4_srt

0x2099,	// (0x000047c5) bg_passive_tab_pane_g1_cp4_srt

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp4_srt

0x2090,	// (0x000047bc) bg_passive_tab_pane_g3_cp4_srt

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp4_srt_ParamLimits

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp4_srt

0xe83f,	// (0x00010f6b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xe83f,	// (0x00010f6b) tabs_2_long_active_pane_srt_t1

0x2099,	// (0x000047c5) bg_active_tab_pane_g1_cp4_srt

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp4_srt

0x2090,	// (0x000047bc) bg_active_tab_pane_g3_cp4_srt

0xda9a,	// (0x000101c6) tabs_3_long_active_pane_srt_ParamLimits

0xda9a,	// (0x000101c6) tabs_3_long_active_pane_srt

0xda9a,	// (0x000101c6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xda9a,	// (0x000101c6) tabs_3_long_passive_pane_cp_srt

0xda9a,	// (0x000101c6) tabs_3_long_passive_pane_srt_ParamLimits

0xda9a,	// (0x000101c6) tabs_3_long_passive_pane_srt

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp5_srt

0xeff5,	// (0x00011721) bg_passive_tab_pane_g1_cp5_srt

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp5_srt

0xeffe,	// (0x0001172a) bg_passive_tab_pane_g3_cp5_srt

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp5_srt_ParamLimits

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp5_srt

0xe85e,	// (0x00010f8a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xe85e,	// (0x00010f8a) tabs_3_long_active_pane_srt_t1

0xeff5,	// (0x00011721) bg_active_tab_pane_g1_cp5_srt

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp5_srt

0xeffe,	// (0x0001172a) bg_active_tab_pane_g3_cp5_srt

0x2082,	// (0x000047ae) navi_text_pane_srt_t1

0x207a,	// (0x000047a6) navi_icon_pane_srt_g1

0xf45a,	// (0x00011b86) midp_editing_number_pane_srt

0xf2a4,	// (0x000119d0) midp_ticker_pane_srt

0xf462,	// (0x00011b8e) midp_ticker_pane_srt_g1

0xf46a,	// (0x00011b96) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00011ed9) midp_ticker_pane_srt_g

0xf472,	// (0x00011b9e) midp_ticker_pane_srt_t1

0x206b,	// (0x00004797) midp_editing_number_pane_t1_copy1

0xf2ac,	// (0x000119d8) listscroll_midp_pane

0xf2ac,	// (0x000119d8) midp_form_pane

0xf314,	// (0x00011a40) midp_info_popup_window_ParamLimits

0xf314,	// (0x00011a40) midp_info_popup_window

0xe72f,	// (0x00010e5b) bg_popup_sub_pane_cp50_ParamLimits

0xe72f,	// (0x00010e5b) bg_popup_sub_pane_cp50

0x1070,	// (0x0000379c) listscroll_midp_info_pane_ParamLimits

0x1070,	// (0x0000379c) listscroll_midp_info_pane

0x1058,	// (0x00003784) listscroll_form_midp_pane_ParamLimits

0x1058,	// (0x00003784) listscroll_form_midp_pane

0x1064,	// (0x00003790) scroll_bar_cp050

0x1038,	// (0x00003764) list_midp_pane

0x302a,	// (0x00005756) signal_pane_g2_cp

0x0f72,	// (0x0000369e) listscroll_midp_info_pane_t1_ParamLimits

0x0f72,	// (0x0000369e) listscroll_midp_info_pane_t1

0x0f8a,	// (0x000036b6) listscroll_midp_info_pane_t2_ParamLimits

0x0f8a,	// (0x000036b6) listscroll_midp_info_pane_t2

0x0fc8,	// (0x000036f4) listscroll_midp_info_pane_t3_ParamLimits

0x0fc8,	// (0x000036f4) listscroll_midp_info_pane_t3

0x1002,	// (0x0000372e) listscroll_midp_info_pane_t4_ParamLimits

0x1002,	// (0x0000372e) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x00011f7e) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x00011f7e) listscroll_midp_info_pane_t

0xe7de,	// (0x00010f0a) scroll_pane_cp21

0x0f16,	// (0x00003642) form_midp_field_choice_group_pane

0x0f1f,	// (0x0000364b) form_midp_field_text_pane

0x0f58,	// (0x00003684) form_midp_field_time_pane

0x0f60,	// (0x0000368c) form_midp_gauge_slider_pane

0x0f69,	// (0x00003695) form_midp_gauge_wait_pane

0xd721,	// (0x0000fe4d) form_midp_image_pane

0x0efe,	// (0x0000362a) list_single_midp_pane_ParamLimits

0x0efe,	// (0x0000362a) list_single_midp_pane

0x0eca,	// (0x000035f6) form_midp_field_text_pane_t1

0x0c69,	// (0x00003395) input_focus_pane_cp050

0x0eed,	// (0x00003619) list_midp_form_text_pane

0x0e99,	// (0x000035c5) form_midp_field_choice_group_pane_t1

0x0ea7,	// (0x000035d3) input_focus_pane_cp051

0x0ebb,	// (0x000035e7) list_midp_choice_pane

0xd721,	// (0x0000fe4d) status_idle_pane

0x0e7d,	// (0x000035a9) form_midp_field_time_pane_t1

0xd63a,	// (0x0000fd66) wait_anim_pane_g2_copy1

0x0e8b,	// (0x000035b7) form_midp_field_time_pane_t2

0x0001,

0xf3bc,	// (0x00011ae8) aid_navinavi_width_2_pane

0xf84d,	// (0x00011f79) form_midp_field_time_pane_t

0xd721,	// (0x0000fe4d) input_focus_pane_cp052

0xd721,	// (0x0000fe4d) bg_input_focus_pane_cp040

0x0e3d,	// (0x00003569) form_midp_gauge_slider_pane_t1

0x0e4b,	// (0x00003577) form_midp_gauge_slider_pane_t2

0x0e59,	// (0x00003585) form_midp_gauge_slider_pane_t3

0x0e67,	// (0x00003593) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x00011f70) form_midp_gauge_slider_pane_t

0x0e75,	// (0x000035a1) form_midp_slider_pane

0xd801,	// (0x0000ff2d) bg_input_focus_pane_cp041_ParamLimits

0xd801,	// (0x0000ff2d) bg_input_focus_pane_cp041

0x0e0d,	// (0x00003539) form_midp_gauge_wait_pane_t1_ParamLimits

0x0e0d,	// (0x00003539) form_midp_gauge_wait_pane_t1

0x0e1f,	// (0x0000354b) form_midp_gauge_wait_pane_t2_ParamLimits

0x0e1f,	// (0x0000354b) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x00011f6b) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x00011f6b) form_midp_gauge_wait_pane_t

0x0e31,	// (0x0000355d) form_midp_wait_pane_ParamLimits

0x0e31,	// (0x0000355d) form_midp_wait_pane

0x0dd7,	// (0x00003503) form_midp_image_pane_g1

0x0de0,	// (0x0000350c) form_midp_image_pane_t1

0x0def,	// (0x0000351b) form_midp_image_pane_t2

0x0dfe,	// (0x0000352a) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x00011f64) form_midp_image_pane_t

0x0dbf,	// (0x000034eb) list_single_midp_pane_g1

0x0dc8,	// (0x000034f4) list_single_midp_pane_t1

0x0da9,	// (0x000034d5) list_midp_form_item_pane_ParamLimits

0x0da9,	// (0x000034d5) list_midp_form_item_pane

0xf364,	// (0x00011a90) list_midp_form_item_pane_t1

0xf373,	// (0x00011a9f) midp_ticker_pane_g1

0xf37f,	// (0x00011aab) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00011ebf) midp_ticker_pane_g

0xf38b,	// (0x00011ab7) midp_ticker_pane_t1

0x206b,	// (0x00004797) midp_editing_number_pane_t1

0x22f4,	// (0x00004a20) midp_editing_number_pane

0x2300,	// (0x00004a2c) midp_ticker_pane

0x2049,	// (0x00004775) ai_message_heading_pane

0xd721,	// (0x0000fe4d) bg_popup_window_pane_cp14

0x2051,	// (0x0000477d) listscroll_ai_message_pane

0x1fd3,	// (0x000046ff) ai_message_heading_pane_g1_ParamLimits

0x1fd3,	// (0x000046ff) ai_message_heading_pane_g1

0x1fdf,	// (0x0000470b) ai_message_heading_pane_g2_ParamLimits

0x1fdf,	// (0x0000470b) ai_message_heading_pane_g2

0x1feb,	// (0x00004717) ai_message_heading_pane_g3_ParamLimits

0x1feb,	// (0x00004717) ai_message_heading_pane_g3

0x1ff7,	// (0x00004723) ai_message_heading_pane_g4_ParamLimits

0x1ff7,	// (0x00004723) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x000120a5) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x000120a5) ai_message_heading_pane_g

0x2003,	// (0x0000472f) ai_message_heading_pane_t1_ParamLimits

0x2003,	// (0x0000472f) ai_message_heading_pane_t1

0x201d,	// (0x00004749) ai_message_heading_pane_t2_ParamLimits

0x201d,	// (0x00004749) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x000120ae) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x000120ae) ai_message_heading_pane_t

0x202f,	// (0x0000475b) bg_popup_heading_pane_cp1_ParamLimits

0x202f,	// (0x0000475b) bg_popup_heading_pane_cp1

0x1fc1,	// (0x000046ed) list_ai_message_pane_ParamLimits

0x1fc1,	// (0x000046ed) list_ai_message_pane

0xe7de,	// (0x00010f0a) scroll_pane_cp10

0x1f0d,	// (0x00004639) list_ai_message_pane_g1

0x1f15,	// (0x00004641) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x00012082) list_ai_message_pane_g

0x1f1d,	// (0x00004649) list_ai_message_pane_t1_ParamLimits

0x1f1d,	// (0x00004649) list_ai_message_pane_t1

0x1f32,	// (0x0000465e) list_ai_message_pane_t2_ParamLimits

0x1f32,	// (0x0000465e) list_ai_message_pane_t2

0x1f47,	// (0x00004673) list_ai_message_pane_t3_ParamLimits

0x1f47,	// (0x00004673) list_ai_message_pane_t3

0x1f5c,	// (0x00004688) list_ai_message_pane_t4_ParamLimits

0x1f5c,	// (0x00004688) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x00012087) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x00012087) list_ai_message_pane_t

0x1efb,	// (0x00004627) cell_ai_soft_ind_pane_ParamLimits

0x1efb,	// (0x00004627) cell_ai_soft_ind_pane

0xf39d,	// (0x00011ac9) cell_ai_soft_ind_pane_g1_ParamLimits

0xf39d,	// (0x00011ac9) cell_ai_soft_ind_pane_g1

0xd721,	// (0x0000fe4d) grid_highlight_cp1

0xf3aa,	// (0x00011ad6) text_secondary_cp56_ParamLimits

0xf3aa,	// (0x00011ad6) text_secondary_cp56

0x1ed0,	// (0x000045fc) example_general_pane_ParamLimits

0x1ed0,	// (0x000045fc) example_general_pane

0x1edc,	// (0x00004608) example_parent_pane_g1_ParamLimits

0x1edc,	// (0x00004608) example_parent_pane_g1

0x1ee8,	// (0x00004614) example_parent_pane_t1_ParamLimits

0x1ee8,	// (0x00004614) example_parent_pane_t1

0x03df,	// (0x00002b0b) popup_preview_text_window_ParamLimits

0x03df,	// (0x00002b0b) popup_preview_text_window

0xf1e9,	// (0x00011915) list_single_pane_cp2_g4

0xdb7c,	// (0x000102a8) bg_popup_preview_window_pane_ParamLimits

0xdb7c,	// (0x000102a8) bg_popup_preview_window_pane

0x1c0d,	// (0x00004339) popup_preview_text_window_t1_ParamLimits

0x1c0d,	// (0x00004339) popup_preview_text_window_t1

0x1c2b,	// (0x00004357) popup_preview_text_window_t2_ParamLimits

0x1c2b,	// (0x00004357) popup_preview_text_window_t2

0x1c74,	// (0x000043a0) popup_preview_text_window_t3_ParamLimits

0x1c74,	// (0x000043a0) popup_preview_text_window_t3

0x1cb9,	// (0x000043e5) popup_preview_text_window_t4_ParamLimits

0x1cb9,	// (0x000043e5) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x00012056) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x00012056) popup_preview_text_window_t

0x1d37,	// (0x00004463) scroll_pane_cp11

0x0adf,	// (0x0000320b) bg_popup_preview_window_pane_g1

0x1bcd,	// (0x000042f9) bg_popup_preview_window_pane_g2

0x1bd5,	// (0x00004301) bg_popup_preview_window_pane_g3

0x1bdd,	// (0x00004309) bg_popup_preview_window_pane_g4

0x1be5,	// (0x00004311) bg_popup_preview_window_pane_g5

0x1bed,	// (0x00004319) bg_popup_preview_window_pane_g6

0x1bf5,	// (0x00004321) bg_popup_preview_window_pane_g7

0x1bfd,	// (0x00004329) bg_popup_preview_window_pane_g8

0xbc92,	// (0x0000e3be) aid_popup_width_pane

0x03c1,	// (0x00002aed) popup_midp_note_alarm_window_ParamLimits

0x03c1,	// (0x00002aed) popup_midp_note_alarm_window

0xe4eb,	// (0x00010c17) data_form_pane_ParamLimits

0xe4f7,	// (0x00010c23) form_field_data_pane_g1

0xe4ff,	// (0x00010c2b) form_field_data_pane_t1_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_ParamLimits

0xe525,	// (0x00010c51) data_form_wide_pane_ParamLimits

0xe531,	// (0x00010c5d) form_field_data_wide_pane_g1

0xe551,	// (0x00010c7d) form_field_data_wide_pane_t1_ParamLimits

0xde08,	// (0x00010534) input_focus_pane_cp6_ParamLimits

0xe78b,	// (0x00010eb7) input_popup_find_pane_g1_ParamLimits

0xe78b,	// (0x00010eb7) input_popup_find_pane_g1

0xc05b,	// (0x0000e787) aid_navi_side_left_pane

0xc06b,	// (0x0000e797) aid_navi_side_right_pane

0x14d1,	// (0x00003bfd) bg_popup_window_pane_cp30_ParamLimits

0x14d1,	// (0x00003bfd) bg_popup_window_pane_cp30

0x154b,	// (0x00003c77) popup_midp_note_alarm_window_g1_ParamLimits

0x154b,	// (0x00003c77) popup_midp_note_alarm_window_g1

0x157b,	// (0x00003ca7) popup_midp_note_alarm_window_t1_ParamLimits

0x157b,	// (0x00003ca7) popup_midp_note_alarm_window_t1

0x161c,	// (0x00003d48) popup_midp_note_alarm_window_t2_ParamLimits

0x161c,	// (0x00003d48) popup_midp_note_alarm_window_t2

0x16ca,	// (0x00003df6) popup_midp_note_alarm_window_t3_ParamLimits

0x16ca,	// (0x00003df6) popup_midp_note_alarm_window_t3

0x16f2,	// (0x00003e1e) popup_midp_note_alarm_window_t4_ParamLimits

0x16f2,	// (0x00003e1e) popup_midp_note_alarm_window_t4

0x1712,	// (0x00003e3e) popup_midp_note_alarm_window_t5_ParamLimits

0x1712,	// (0x00003e3e) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x00011ff3) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x00011ff3) popup_midp_note_alarm_window_t

0x17be,	// (0x00003eea) wait_bar_pane_cp1_ParamLimits

0x17be,	// (0x00003eea) wait_bar_pane_cp1

0xd721,	// (0x0000fe4d) wait_anim_pane_copy1

0xd721,	// (0x0000fe4d) wait_border_pane_copy1

0x11e3,	// (0x0000390f) wait_border_pane_g1_copy1

0xe56b,	// (0x00010c97) form_field_popup_pane_g1

0xe573,	// (0x00010c9f) form_field_popup_pane_t1_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_cp7_ParamLimits

0xe4eb,	// (0x00010c17) list_form_pane_ParamLimits

0xe58b,	// (0x00010cb7) form_field_popup_wide_pane_g1

0xe593,	// (0x00010cbf) form_field_popup_wide_pane_t1_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_cp8_ParamLimits

0xe5a8,	// (0x00010cd4) list_form_wide_pane_ParamLimits

0x24ae,	// (0x00004bda) aid_size_cell_graphic_pane

0xe685,	// (0x00010db1) data_form_pane_t1_ParamLimits

0x22c4,	// (0x000049f0) data_form_wide_pane_t1_ParamLimits

0x0663,	// (0x00002d8f) bg_status_flat_pane

0xd761,	// (0x0000fe8d) title_pane_t1_ParamLimits

0xd7c9,	// (0x0000fef5) title_pane_t2_ParamLimits

0xd7ef,	// (0x0000ff1b) title_pane_t3_ParamLimits

0xf59b,	// (0x00011cc7) title_pane_t_ParamLimits

0xec67,	// (0x00011393) level_1_signal_ParamLimits

0xec74,	// (0x000113a0) level_2_signal_ParamLimits

0xec81,	// (0x000113ad) level_3_signal_ParamLimits

0xec8e,	// (0x000113ba) level_4_signal_ParamLimits

0xec9b,	// (0x000113c7) level_5_signal_ParamLimits

0xeca8,	// (0x000113d4) level_6_signal_ParamLimits

0xecb5,	// (0x000113e1) level_7_signal_ParamLimits

0xec67,	// (0x00011393) level_1_battery_ParamLimits

0xec74,	// (0x000113a0) level_2_battery_ParamLimits

0xec81,	// (0x000113ad) level_3_battery_ParamLimits

0xec8e,	// (0x000113ba) level_4_battery_ParamLimits

0xec9b,	// (0x000113c7) level_5_battery_ParamLimits

0xeca8,	// (0x000113d4) level_6_battery_ParamLimits

0xecb5,	// (0x000113e1) level_7_battery_ParamLimits

0x13e8,	// (0x00003b14) bg_status_flat_pane_g1

0x13f0,	// (0x00003b1c) bg_status_flat_pane_g2

0x13f8,	// (0x00003b24) bg_status_flat_pane_g3

0x1400,	// (0x00003b2c) bg_status_flat_pane_g4

0x1408,	// (0x00003b34) bg_status_flat_pane_g5

0x1410,	// (0x00003b3c) bg_status_flat_pane_g6

0x1418,	// (0x00003b44) bg_status_flat_pane_g7

0xd817,	// (0x0000ff43) tabs_3_active_pane_t1_ParamLimits

0xd817,	// (0x0000ff43) tabs_3_passive_pane_t1_ParamLimits

0xd831,	// (0x0000ff5d) tabs_4_active_pane_t1_ParamLimits

0xd831,	// (0x0000ff5d) tabs_4_1_passive_pane_t1_ParamLimits

0xe81f,	// (0x00010f4b) tabs_2_active_pane_t1_ParamLimits

0xe81f,	// (0x00010f4b) tabs_2_passive_pane_t1_ParamLimits

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp4_ParamLimits

0xe83f,	// (0x00010f6b) tabs_2_long_active_pane_t1_ParamLimits

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp4_ParamLimits

0xc5e4,	// (0x0000ed10) list_single_midp_graphic_pane_t1_ParamLimits

0xe831,	// (0x00010f5d) bg_active_tab_pane_cp5_ParamLimits

0xe85e,	// (0x00010f8a) tabs_3_long_active_pane_t1_ParamLimits

0xe852,	// (0x00010f7e) bg_passive_tab_pane_cp5_ParamLimits

0xc5e4,	// (0x0000ed10) list_single_midp_graphic_pane_t1

0x0663,	// (0x00002d8f) bg_status_flat_pane_ParamLimits

0x071c,	// (0x00002e48) indicator_pane_cp2_ParamLimits

0x071c,	// (0x00002e48) indicator_pane_cp2

0x0840,	// (0x00002f6c) navi_pane_srt_ParamLimits

0x0840,	// (0x00002f6c) navi_pane_srt

0x0864,	// (0x00002f90) popup_clock_digital_analogue_window_cp1

0xd8f5,	// (0x00010021) indicator_pane_t1

0xf2a4,	// (0x000119d0) copy_highlight_pane

0xf2a4,	// (0x000119d0) cursor_graphics_pane

0xf2a4,	// (0x000119d0) graphic_within_text_pane

0xf2a4,	// (0x000119d0) link_highlight_pane

0x1cfa,	// (0x00004426) popup_preview_text_window_t5_ParamLimits

0x1cfa,	// (0x00004426) popup_preview_text_window_t5

0xf3c4,	// (0x00011af0) cursor_digital_pane

0xf3c4,	// (0x00011af0) cursor_primary_pane

0xf3d5,	// (0x00011b01) cursor_primary_small_pane

0xf3dd,	// (0x00011b09) cursor_secondary_pane

0xf3e5,	// (0x00011b11) cursor_title_pane

0xf3c4,	// (0x00011af0) link_highlight_digital_pane

0xf3cc,	// (0x00011af8) link_highlight_primary_pane

0xf3d5,	// (0x00011b01) link_highlight_primary_small_pane

0xf3dd,	// (0x00011b09) link_highlight_secondary_pane

0xf3e5,	// (0x00011b11) link_highlight_title_pane

0xf3c4,	// (0x00011af0) copy_highlight_digital_pane

0xf3c4,	// (0x00011af0) copy_highlight_primary_pane

0xf3d5,	// (0x00011b01) copy_highlight_primary_small_pane

0xf3dd,	// (0x00011b09) copy_highlight_secondary_pane

0xf3e5,	// (0x00011b11) copy_highlight_title_pane

0xf3dd,	// (0x00011b09) graphic_text_digital_pane

0x1480,	// (0x00003bac) graphic_text_primary_pane

0x1489,	// (0x00003bb5) graphic_text_primary_small_pane

0xf3d5,	// (0x00011b01) graphic_text_secondary_pane

0xf3c4,	// (0x00011af0) graphic_text_title_pane

0xf3ed,	// (0x00011b19) cursor_primary_pane_g1

0x1472,	// (0x00003b9e) cursor_text_primary_t1

0x145c,	// (0x00003b88) cursor_primary_small_pane_g1

0x1464,	// (0x00003b90) cursor_text_primary_small_t1

0x1446,	// (0x00003b72) cursor_primary_small_pane_g1_copy1

0x144e,	// (0x00003b7a) cursor_text_primary_small_t1_copy1

0x1430,	// (0x00003b5c) cursor_text_title_t1

0x143e,	// (0x00003b6a) cursor_title_pane_g1

0xf3ed,	// (0x00011b19) cursor_digital_pane_g1

0xf3f5,	// (0x00011b21) cursor_text_digital_t1

0xf403,	// (0x00011b2f) link_highlight_primary_pane_g1

0x13d9,	// (0x00003b05) link_highlight_primary_pane_t1

0xf403,	// (0x00011b2f) link_highlight_primary_small_pane_g1

0xf40b,	// (0x00011b37) link_highlight_primary_small_pane_t1

0xf41a,	// (0x00011b46) link_highlight_secondary_pane_g1

0xf422,	// (0x00011b4e) link_highlight_secondary_pane_t1

0x133e,	// (0x00003a6a) link_highlight_title_pane_g1

0x1355,	// (0x00003a81) link_highlight_title_pane_t1

0x133e,	// (0x00003a6a) link_highlight_digital_pane_g1

0x1346,	// (0x00003a72) link_highlight_digital_pane_t1

0x11fe,	// (0x0000392a) copy_highlight_primary_pane_g1

0x1224,	// (0x00003950) copy_highlight_primary_pane_t1

0x11fe,	// (0x0000392a) copy_highlight_primary_small_pane_g1

0x1215,	// (0x00003941) copy_highlight_primary_small_pane_t1

0xf431,	// (0x00011b5d) copy_highlight_secondary_pane_g1

0xf439,	// (0x00011b65) copy_highlight_secondary_pane_t1

0x11fe,	// (0x0000392a) copy_highlight_title_pane_g1

0x1206,	// (0x00003932) copy_highlight_title_pane_t1

0x11fe,	// (0x0000392a) copy_highlight_digital_pane_g1

0x26d2,	// (0x00004dfe) copy_highlight_digital_pane_t1

0x2626,	// (0x00004d52) graphic_text_primary_pane_g1

0x26b6,	// (0x00004de2) graphic_text_primary_pane_t1

0x26c4,	// (0x00004df0) graphic_text_primary_pane_t2

0x0001,

0xf9f1,	// (0x0001211d) graphic_text_primary_pane_t

0x2692,	// (0x00004dbe) graphic_text_primary_small_pane_g1

0x269a,	// (0x00004dc6) graphic_text_primary_small_pane_t1

0x26a8,	// (0x00004dd4) graphic_text_primary_small_pane_t2

0x0001,

0xf9ec,	// (0x00012118) graphic_text_primary_small_pane_t

0x266e,	// (0x00004d9a) graphic_text_secondary_pane_g1

0x2676,	// (0x00004da2) graphic_text_secondary_pane_t1

0x2684,	// (0x00004db0) graphic_text_secondary_pane_t2

0x0001,

0xf9e7,	// (0x00012113) graphic_text_secondary_pane_t

0x264a,	// (0x00004d76) graphic_text_title_pane_g1

0x2652,	// (0x00004d7e) graphic_text_title_pane_t1

0x2660,	// (0x00004d8c) graphic_text_title_pane_t2

0x0001,

0xf9e2,	// (0x0001210e) graphic_text_title_pane_t

0x2626,	// (0x00004d52) graphic_text_digital_pane_g1

0x262e,	// (0x00004d5a) graphic_text_digital_pane_t1

0x263c,	// (0x00004d68) graphic_text_digital_pane_t2

0x0001,

0xf9dd,	// (0x00012109) graphic_text_digital_pane_t

0xd801,	// (0x0000ff2d) navi_icon_pane_srt_ParamLimits

0xd801,	// (0x0000ff2d) navi_icon_pane_srt

0xd721,	// (0x0000fe4d) navi_midp_pane_srt

0xd721,	// (0x0000fe4d) navi_navi_pane_srt

0xd801,	// (0x0000ff2d) navi_text_pane_srt_ParamLimits

0xd801,	// (0x0000ff2d) navi_text_pane_srt

0x1b86,	// (0x000042b2) navi_navi_icon_text_pane_srt

0x1ba0,	// (0x000042cc) navi_navi_pane_srt_g1_ParamLimits

0x1ba0,	// (0x000042cc) navi_navi_pane_srt_g1

0x1b8e,	// (0x000042ba) navi_navi_pane_srt_g2_ParamLimits

0x1b8e,	// (0x000042ba) navi_navi_pane_srt_g2

0x0001,

0xf912,	// (0x0001203e) navi_navi_pane_srt_g_ParamLimits

0xf912,	// (0x0001203e) navi_navi_pane_srt_g

0x1bb2,	// (0x000042de) navi_navi_tabs_pane_srt

0x1b86,	// (0x000042b2) navi_navi_text_pane_srt

0x1b86,	// (0x000042b2) navi_navi_volume_pane_srt

0x2617,	// (0x00004d43) navi_navi_text_pane_srt_t1

0xc948,	// (0x0000f074) navi_navi_volume_pane_srt_g1

0xc950,	// (0x0000f07c) volume_small_pane_srt_ParamLimits

0xc950,	// (0x0000f07c) volume_small_pane_srt

0xc302,	// (0x0000ea2e) volume_small_pane_srt_g1_ParamLimits

0xc302,	// (0x0000ea2e) volume_small_pane_srt_g1

0xc312,	// (0x0000ea3e) volume_small_pane_srt_g2_ParamLimits

0xc312,	// (0x0000ea3e) volume_small_pane_srt_g2

0xc323,	// (0x0000ea4f) volume_small_pane_srt_g3_ParamLimits

0xc323,	// (0x0000ea4f) volume_small_pane_srt_g3

0xc334,	// (0x0000ea60) volume_small_pane_srt_g4_ParamLimits

0xc334,	// (0x0000ea60) volume_small_pane_srt_g4

0xc345,	// (0x0000ea71) volume_small_pane_srt_g5_ParamLimits

0xc345,	// (0x0000ea71) volume_small_pane_srt_g5

0xc356,	// (0x0000ea82) volume_small_pane_srt_g6_ParamLimits

0xc356,	// (0x0000ea82) volume_small_pane_srt_g6

0xc367,	// (0x0000ea93) volume_small_pane_srt_g7_ParamLimits

0xc367,	// (0x0000ea93) volume_small_pane_srt_g7

0xc378,	// (0x0000eaa4) volume_small_pane_srt_g8_ParamLimits

0xc378,	// (0x0000eaa4) volume_small_pane_srt_g8

0xc389,	// (0x0000eab5) volume_small_pane_srt_g9_ParamLimits

0xc389,	// (0x0000eab5) volume_small_pane_srt_g9

0xc39a,	// (0x0000eac6) volume_small_pane_srt_g10_ParamLimits

0xc39a,	// (0x0000eac6) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x00011ec4) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x00011ec4) volume_small_pane_srt_g

0xdc25,	// (0x00010351) query_popup_data_pane_cp2

0x25e0,	// (0x00004d0c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x25e0,	// (0x00004d0c) navi_navi_icon_text_pane_srt_t1

0x1480,	// (0x00003bac) navi_tabs_2_long_pane_srt

0x1480,	// (0x00003bac) navi_tabs_2_pane_srt

0x1480,	// (0x00003bac) navi_tabs_3_long_pane_srt

0x1480,	// (0x00003bac) navi_tabs_3_pane_srt

0x1480,	// (0x00003bac) navi_tabs_4_pane_srt

0xc928,	// (0x0000f054) tabs_2_active_pane_srt_ParamLimits

0xc928,	// (0x0000f054) tabs_2_active_pane_srt

0xc938,	// (0x0000f064) tabs_2_passive_pane_srt_ParamLimits

0xc938,	// (0x0000f064) tabs_2_passive_pane_srt

0x0111,	// (0x0000283d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0111,	// (0x0000283d) bg_passive_tab_pane_cp1_srt

0x25a7,	// (0x00004cd3) bg_passive_tab_pane_g1_cp1_srt

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp1_srt

0x259e,	// (0x00004cca) bg_passive_tab_pane_g3_cp1_srt

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp1_srt_ParamLimits

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp1_srt

0x25b0,	// (0x00004cdc) tabs_2_active_pane_srt_g1

0xe81f,	// (0x00010f4b) tabs_2_active_pane_srt_t1_ParamLimits

0xe81f,	// (0x00010f4b) tabs_2_active_pane_srt_t1

0x25a7,	// (0x00004cd3) bg_active_tab_pane_g1_cp1_srt

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp1_srt

0x259e,	// (0x00004cca) bg_active_tab_pane_g3_cp1_srt

0xc8f5,	// (0x0000f021) tabs_3_active_pane_srt_ParamLimits

0xc8f5,	// (0x0000f021) tabs_3_active_pane_srt

0xc906,	// (0x0000f032) tabs_3_passive_pane_cp_srt_ParamLimits

0xc906,	// (0x0000f032) tabs_3_passive_pane_cp_srt

0xc917,	// (0x0000f043) tabs_3_passive_pane_srt_ParamLimits

0xc917,	// (0x0000f043) tabs_3_passive_pane_srt

0x0111,	// (0x0000283d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0111,	// (0x0000283d) bg_passive_tab_pane_cp2_srt

0xf448,	// (0x00011b74) bg_passive_tab_pane_g1_cp2_srt

0xef6f,	// (0x0001169b) bg_passive_tab_pane_g2_cp2_srt

0xf451,	// (0x00011b7d) bg_passive_tab_pane_g3_cp2_srt

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp2_srt_ParamLimits

0xd801,	// (0x0000ff2d) bg_active_tab_pane_cp2_srt

0x2563,	// (0x00004c8f) tabs_3_active_pane_srt_g1

0xd817,	// (0x0000ff43) tabs_3_active_pane_srt_t1_ParamLimits

0xd817,	// (0x0000ff43) tabs_3_active_pane_srt_t1

0xf448,	// (0x00011b74) bg_active_tab_pane_g1_cp2_srt

0xef6f,	// (0x0001169b) bg_active_tab_pane_g2_cp2_srt

0xf451,	// (0x00011b7d) bg_active_tab_pane_g3_cp2_srt

0xc8ad,	// (0x0000efd9) tabs_4_active_pane_srt_ParamLimits

0xc8ad,	// (0x0000efd9) tabs_4_active_pane_srt

0xc8bf,	// (0x0000efeb) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc8bf,	// (0x0000efeb) tabs_4_passive_pane_cp2_srt

0x0096,	// (0x000027c2) aid_size_cell_toolbar

0xe852,	// (0x00010f7e) main_idle_act_pane_ParamLimits

0x027c,	// (0x000029a8) popup_large_graphic_colour_window_ParamLimits

0x0530,	// (0x00002c5c) popup_toolbar_window_ParamLimits

0x0530,	// (0x00002c5c) popup_toolbar_window

0x2325,	// (0x00004a51) list_single_graphic_2heading_pane_ParamLimits

0x2325,	// (0x00004a51) list_single_graphic_2heading_pane

0xea29,	// (0x00011155) aid_size_cell_apps_grid_lsc_pane

0xea3b,	// (0x00011167) aid_size_cell_apps_grid_prt_pane

0x0111,	// (0x0000283d) bg_wml_button_pane_cp1_ParamLimits

0x0111,	// (0x0000283d) bg_wml_button_pane_cp1

0x0eca,	// (0x000035f6) form_midp_field_text_pane_t1_ParamLimits

0x0c69,	// (0x00003395) input_focus_pane_cp050_ParamLimits

0x0eed,	// (0x00003619) list_midp_form_text_pane_ParamLimits

0x0ea7,	// (0x000035d3) input_focus_pane_cp051_ParamLimits

0x0ebb,	// (0x000035e7) list_midp_choice_pane_ParamLimits

0x0d75,	// (0x000034a1) list_single_2graphic_pane_cp3_ParamLimits

0x0d75,	// (0x000034a1) list_single_2graphic_pane_cp3

0x0d89,	// (0x000034b5) list_single_midp_graphic_pane_ParamLimits

0x0d89,	// (0x000034b5) list_single_midp_graphic_pane

0xc4f6,	// (0x0000ec22) list_single_graphic_2heading_pane_g1_ParamLimits

0xc4f6,	// (0x0000ec22) list_single_graphic_2heading_pane_g1

0xc502,	// (0x0000ec2e) list_single_graphic_2heading_pane_g4_ParamLimits

0xc502,	// (0x0000ec2e) list_single_graphic_2heading_pane_g4

0xc50e,	// (0x0000ec3a) list_single_graphic_2heading_pane_g5_ParamLimits

0xc50e,	// (0x0000ec3a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00011f17) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00011f17) list_single_graphic_2heading_pane_g

0xc51a,	// (0x0000ec46) list_single_graphic_2heading_pane_t1_ParamLimits

0xc51a,	// (0x0000ec46) list_single_graphic_2heading_pane_t1

0xc52e,	// (0x0000ec5a) list_single_graphic_2heading_pane_t2_ParamLimits

0xc52e,	// (0x0000ec5a) list_single_graphic_2heading_pane_t2

0xc548,	// (0x0000ec74) list_single_graphic_2heading_pane_t3_ParamLimits

0xc548,	// (0x0000ec74) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00011f1e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00011f1e) list_single_graphic_2heading_pane_t

0x0a02,	// (0x0000312e) bg_popup_sub_pane_cp2

0x0a28,	// (0x00003154) grid_toobar_pane

0xc560,	// (0x0000ec8c) cell_toolbar_pane_ParamLimits

0xc560,	// (0x0000ec8c) cell_toolbar_pane

0x0a85,	// (0x000031b1) cell_toolbar_pane_g1_ParamLimits

0x0a85,	// (0x000031b1) cell_toolbar_pane_g1

0x0a97,	// (0x000031c3) cell_toolbar_pane_g2_ParamLimits

0x0a97,	// (0x000031c3) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x00011f25) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x00011f25) cell_toolbar_pane_g

0x0ab9,	// (0x000031e5) grid_highlight_pane_cp2_ParamLimits

0x0ab9,	// (0x000031e5) grid_highlight_pane_cp2

0x0ad3,	// (0x000031ff) toolbar_button_pane

0x0adf,	// (0x0000320b) toolbar_button_pane_g1

0x0aef,	// (0x0000321b) toolbar_button_pane_g2

0x0ae7,	// (0x00003213) toolbar_button_pane_g3

0x0aff,	// (0x0000322b) toolbar_button_pane_g4

0x0af7,	// (0x00003223) toolbar_button_pane_g5

0x0b07,	// (0x00003233) toolbar_button_pane_g6

0x0b0f,	// (0x0000323b) toolbar_button_pane_g7

0x0b1f,	// (0x0000324b) toolbar_button_pane_g8

0x0b17,	// (0x00003243) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x00011f2a) toolbar_button_pane_g

0xc58f,	// (0x0000ecbb) list_single_2graphic_pane_g1_cp3_ParamLimits

0xc58f,	// (0x0000ecbb) list_single_2graphic_pane_g1_cp3

0xc59b,	// (0x0000ecc7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc59b,	// (0x0000ecc7) list_single_2graphic_pane_g2_cp3

0xc5aa,	// (0x0000ecd6) list_single_2graphic_pane_g3_cp3

0xc5b2,	// (0x0000ecde) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc5b2,	// (0x0000ecde) list_single_2graphic_pane_g4_cp3

0xc5be,	// (0x0000ecea) list_single_2graphic_pane_t1_cp3_ParamLimits

0xc5be,	// (0x0000ecea) list_single_2graphic_pane_t1_cp3

0xc5d8,	// (0x0000ed04) list_single_midp_graphic_pane_g2_ParamLimits

0xc5d8,	// (0x0000ed04) list_single_midp_graphic_pane_g2

0x009e,	// (0x000027ca) aid_zoom_text_primary

0x00a6,	// (0x000027d2) aid_zoom_text_secondary

0xf503,	// (0x00011c2f) status_small_pane_g7_ParamLimits

0xf503,	// (0x00011c2f) status_small_pane_g7

0xf526,	// (0x00011c52) status_small_pane_t1_ParamLimits

0xd738,	// (0x0000fe64) title_pane_g2

0x0003,

0xf592,	// (0x00011cbe) title_pane_g

0xdcc4,	// (0x000103f0) aid_size_cell_colour_1_pane_ParamLimits

0xdcc4,	// (0x000103f0) aid_size_cell_colour_1_pane

0xdcd8,	// (0x00010404) aid_size_cell_colour_2_pane_ParamLimits

0xdcd8,	// (0x00010404) aid_size_cell_colour_2_pane

0xdcec,	// (0x00010418) aid_size_cell_colour_3_pane_ParamLimits

0xdcec,	// (0x00010418) aid_size_cell_colour_3_pane

0xdd00,	// (0x0001042c) aid_size_cell_colour_4_pane_ParamLimits

0xdd00,	// (0x0001042c) aid_size_cell_colour_4_pane

0xbfbd,	// (0x0000e6e9) title_pane_stacon_g1_ParamLimits

0xbfbd,	// (0x0000e6e9) title_pane_stacon_g1

0x127b,	// (0x000039a7) popup_note_wait_window_g3_ParamLimits

0x127b,	// (0x000039a7) popup_note_wait_window_g3

0x12f1,	// (0x00003a1d) popup_note_wait_window_t5_ParamLimits

0x12f1,	// (0x00003a1d) popup_note_wait_window_t5

0xd721,	// (0x0000fe4d) main_feb_china_hwr_fs_writing_pane

0x0191,	// (0x000028bd) popup_feb_china_hwr_fs_window_ParamLimits

0x0191,	// (0x000028bd) popup_feb_china_hwr_fs_window

0xc5fa,	// (0x0000ed26) aid_size_cell_hwr_fs_ParamLimits

0xc5fa,	// (0x0000ed26) aid_size_cell_hwr_fs

0x0c69,	// (0x00003395) bg_popup_sub_pane_cp3_ParamLimits

0x0c69,	// (0x00003395) bg_popup_sub_pane_cp3

0xc60f,	// (0x0000ed3b) grid_hwr_fs_pane_ParamLimits

0xc60f,	// (0x0000ed3b) grid_hwr_fs_pane

0xc623,	// (0x0000ed4f) linegrid_hwr_fs_pane_ParamLimits

0xc623,	// (0x0000ed4f) linegrid_hwr_fs_pane

0xc633,	// (0x0000ed5f) cell_hwr_fs_pane_ParamLimits

0xc633,	// (0x0000ed5f) cell_hwr_fs_pane

0x0cb7,	// (0x000033e3) linegrid_hwr_fs_pane_g1_ParamLimits

0x0cb7,	// (0x000033e3) linegrid_hwr_fs_pane_g1

0x0cc3,	// (0x000033ef) linegrid_hwr_fs_pane_g2_ParamLimits

0x0cc3,	// (0x000033ef) linegrid_hwr_fs_pane_g2

0x0cd5,	// (0x00003401) linegrid_hwr_fs_pane_g3_ParamLimits

0x0cd5,	// (0x00003401) linegrid_hwr_fs_pane_g3

0xc651,	// (0x0000ed7d) linegrid_hwr_fs_pane_g4_ParamLimits

0xc651,	// (0x0000ed7d) linegrid_hwr_fs_pane_g4

0xc66b,	// (0x0000ed97) linegrid_hwr_fs_pane_g5_ParamLimits

0xc66b,	// (0x0000ed97) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x00011f50) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x00011f50) linegrid_hwr_fs_pane_g

0x0d11,	// (0x0000343d) cell_hwr_fs_pane_g1_ParamLimits

0x0d11,	// (0x0000343d) cell_hwr_fs_pane_g1

0x08ee,	// (0x0000301a) cell_hwr_fs_pane_g2_ParamLimits

0x08ee,	// (0x0000301a) cell_hwr_fs_pane_g2

0x0d27,	// (0x00003453) cell_hwr_fs_pane_g3_ParamLimits

0x0d27,	// (0x00003453) cell_hwr_fs_pane_g3

0x0d34,	// (0x00003460) cell_hwr_fs_pane_g4_ParamLimits

0x0d34,	// (0x00003460) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x00011f5b) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x00011f5b) cell_hwr_fs_pane_g

0xc681,	// (0x0000edad) cell_hwr_fs_pane_t1

0xd721,	// (0x0000fe4d) grid_highlight_pane_cp6

0xd721,	// (0x0000fe4d) main_idle_act2_pane

0xe7c5,	// (0x00010ef1) aid_inside_area_popup_secondary

0x1a15,	// (0x00004141) aid_inside_area_window_primary_ParamLimits

0x1a15,	// (0x00004141) aid_inside_area_window_primary

0x26e1,	// (0x00004e0d) ai2_news_ticker_pane

0x26e9,	// (0x00004e15) aid_size_cell_ai1_link_ParamLimits

0x26e9,	// (0x00004e15) aid_size_cell_ai1_link

0x2703,	// (0x00004e2f) popup_ai2_data_window_ParamLimits

0x2703,	// (0x00004e2f) popup_ai2_data_window

0x2717,	// (0x00004e43) popup_ai2_link_window_ParamLimits

0x2717,	// (0x00004e43) popup_ai2_link_window

0x0c69,	// (0x00003395) bg_popup_sub_pane_cp4_ParamLimits

0x0c69,	// (0x00003395) bg_popup_sub_pane_cp4

0x272b,	// (0x00004e57) grid_ai2_link_pane_ParamLimits

0x272b,	// (0x00004e57) grid_ai2_link_pane

0x2742,	// (0x00004e6e) popup_ai2_link_window_g1_ParamLimits

0x2742,	// (0x00004e6e) popup_ai2_link_window_g1

0x274e,	// (0x00004e7a) popup_ai2_link_window_g2_ParamLimits

0x274e,	// (0x00004e7a) popup_ai2_link_window_g2

0x0001,

0xf9f6,	// (0x00012122) popup_ai2_link_window_g_ParamLimits

0xf9f6,	// (0x00012122) popup_ai2_link_window_g

0x275d,	// (0x00004e89) ai2_mp_button_pane

0x2765,	// (0x00004e91) ai2_mp_volume_pane

0x0ea7,	// (0x000035d3) bg_popup_sub_pane_cp5_ParamLimits

0x0ea7,	// (0x000035d3) bg_popup_sub_pane_cp5

0x276d,	// (0x00004e99) heading_ai2_gene_pane_ParamLimits

0x276d,	// (0x00004e99) heading_ai2_gene_pane

0x2779,	// (0x00004ea5) list_ai2_gene_pane_ParamLimits

0x2779,	// (0x00004ea5) list_ai2_gene_pane

0x27c1,	// (0x00004eed) cell_ai2_link_pane_ParamLimits

0x27c1,	// (0x00004eed) cell_ai2_link_pane

0x27d7,	// (0x00004f03) cell_ai2_link_pane_g1

0xd721,	// (0x0000fe4d) grid_highlight_pane_cp7

0xc965,	// (0x0000f091) ai2_mp_volume_pane_g1

0x28af,	// (0x00004fdb) ai2_mp_volume_pane_g2

0x2814,	// (0x00004f40) list_ai2_gene_pane_t1

0x28a7,	// (0x00004fd3) ai2_mp_volume_pane_g3

0x0002,

0xfa0f,	// (0x0001213b) ai2_mp_volume_pane_g

0xc96d,	// (0x0000f099) volume_small_pane_cp3

0x28c0,	// (0x00004fec) aid_size_cell_ai2_button

0x28c8,	// (0x00004ff4) grid_ai2_button_pane

0x28d1,	// (0x00004ffd) cell_ai2_button_pane_ParamLimits

0x28d1,	// (0x00004ffd) cell_ai2_button_pane

0xd63a,	// (0x0000fd66) cell_ai2_button_pane_g1

0xd721,	// (0x0000fe4d) grid_highlight_pane_cp8

0x285f,	// (0x00004f8b) ai2_gene_pane_t1_ParamLimits

0x285f,	// (0x00004f8b) ai2_gene_pane_t1

0x008c,	// (0x000027b8) aid_height_parent_landscape

0x214f,	// (0x0000487b) aid_height_set_list

0x215b,	// (0x00004887) aid_size_parent

0x24ae,	// (0x00004bda) aid_size_cell_graphic_pane_ParamLimits

0x2789,	// (0x00004eb5) popup_ai2_data_window_g1_ParamLimits

0x2789,	// (0x00004eb5) popup_ai2_data_window_g1

0x2795,	// (0x00004ec1) ai2_news_ticker_pane_g1

0x279d,	// (0x00004ec9) ai2_news_ticker_pane_g2

0x0001,

0xf9fb,	// (0x00012127) ai2_news_ticker_pane_g

0x27a5,	// (0x00004ed1) ai2_news_ticker_pane_t1

0x27b3,	// (0x00004edf) ai2_news_ticker_pane_t2

0x0001,

0xfa00,	// (0x0001212c) ai2_news_ticker_pane_t

0x2448,	// (0x00004b74) heading_ai2_gene_pane_g1

0x27e0,	// (0x00004f0c) heading_ai2_gene_pane_t1_ParamLimits

0x27e0,	// (0x00004f0c) heading_ai2_gene_pane_t1

0x27f5,	// (0x00004f21) list_highlight_pane_cp6

0x27fd,	// (0x00004f29) ai2_gene_pane_ParamLimits

0x27fd,	// (0x00004f29) ai2_gene_pane

0x2822,	// (0x00004f4e) list_ai2_gene_pane_t2

0x0001,

0xfa05,	// (0x00012131) list_ai2_gene_pane_t

0x2830,	// (0x00004f5c) list_highlight_pane_cp8_ParamLimits

0x2830,	// (0x00004f5c) list_highlight_pane_cp8

0x2841,	// (0x00004f6d) ai2_gene_pane_g1_ParamLimits

0x2841,	// (0x00004f6d) ai2_gene_pane_g1

0x2853,	// (0x00004f7f) ai2_gene_pane_g2_ParamLimits

0x2853,	// (0x00004f7f) ai2_gene_pane_g2

0x0001,

0xfa0a,	// (0x00012136) ai2_gene_pane_g_ParamLimits

0xfa0a,	// (0x00012136) ai2_gene_pane_g

0xdf91,	// (0x000106bd) scroll_pane_cp12

0xc4ad,	// (0x0000ebd9) control_pane_t3_ParamLimits

0xc4ad,	// (0x0000ebd9) control_pane_t3

0xf517,	// (0x00011c43) status_small_pane_g8_ParamLimits

0xf517,	// (0x00011c43) status_small_pane_g8

0x0251,	// (0x0000297d) popup_find_window_ParamLimits

0x03d3,	// (0x00002aff) popup_note_image_window_ParamLimits

0xe1a3,	// (0x000108cf) list_double2_graphic_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108cf) list_double2_graphic_pane_vc_g1

0xe1af,	// (0x000108db) list_double2_graphic_pane_vc_g2_ParamLimits

0xe1af,	// (0x000108db) list_double2_graphic_pane_vc_g2

0xe0da,	// (0x00010806) list_double2_graphic_pane_vc_g3_ParamLimits

0xe0da,	// (0x00010806) list_double2_graphic_pane_vc_g3

0x0002,

0xf659,	// (0x00011d85) list_double2_graphic_pane_vc_g_ParamLimits

0xf659,	// (0x00011d85) list_double2_graphic_pane_vc_g

0xe1bb,	// (0x000108e7) list_double2_graphic_pane_vc_t1_ParamLimits

0xe1bb,	// (0x000108e7) list_double2_graphic_pane_vc_t1

0xe1af,	// (0x000108db) list_single_heading_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108db) list_single_heading_pane_vc_g1

0xe0da,	// (0x00010806) list_single_heading_pane_vc_g2_ParamLimits

0xe0da,	// (0x00010806) list_single_heading_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_single_heading_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_single_heading_pane_vc_g

0x0b70,	// (0x0000329c) list_single_heading_pane_vc_t1_ParamLimits

0x0b70,	// (0x0000329c) list_single_heading_pane_vc_t1

0x0b86,	// (0x000032b2) list_single_heading_pane_vc_t2_ParamLimits

0x0b86,	// (0x000032b2) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x00011f3f) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x00011f3f) list_single_heading_pane_vc_t

0x0bae,	// (0x000032da) list_setting_number_pane_vc_g1_ParamLimits

0x0bae,	// (0x000032da) list_setting_number_pane_vc_g1

0x0bba,	// (0x000032e6) list_setting_number_pane_vc_g2_ParamLimits

0x0bba,	// (0x000032e6) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x00011f44) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x00011f44) list_setting_number_pane_vc_g

0x0bc6,	// (0x000032f2) list_setting_number_pane_vc_t1_ParamLimits

0x0bc6,	// (0x000032f2) list_setting_number_pane_vc_t1

0x0bda,	// (0x00003306) list_setting_number_pane_vc_t2_ParamLimits

0x0bda,	// (0x00003306) list_setting_number_pane_vc_t2

0x0bf6,	// (0x00003322) list_setting_number_pane_vc_t3_ParamLimits

0x0bf6,	// (0x00003322) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x00011f49) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x00011f49) list_setting_number_pane_vc_t

0x0c1c,	// (0x00003348) set_value_pane_vc_ParamLimits

0x0c1c,	// (0x00003348) set_value_pane_vc

0x2325,	// (0x00004a51) list_double2_graphic_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double2_graphic_pane_vc

0x2338,	// (0x00004a64) list_double2_large_graphic_pane_vc_ParamLimits

0x2338,	// (0x00004a64) list_double2_large_graphic_pane_vc

0x2325,	// (0x00004a51) list_double2_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double2_pane_vc

0x2325,	// (0x00004a51) list_double_graphic_heading_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double_graphic_heading_pane_vc

0x2325,	// (0x00004a51) list_double_graphic_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double_graphic_pane_vc

0x2325,	// (0x00004a51) list_double_heading_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double_heading_pane_vc

0x2338,	// (0x00004a64) list_double_large_graphic_pane_vc_ParamLimits

0x2338,	// (0x00004a64) list_double_large_graphic_pane_vc

0x2325,	// (0x00004a51) list_double_number_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double_number_pane_vc

0x2325,	// (0x00004a51) list_double_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double_pane_vc

0x2325,	// (0x00004a51) list_double_time_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_double_time_pane_vc

0x2325,	// (0x00004a51) list_setting_number_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_setting_number_pane_vc

0x2325,	// (0x00004a51) list_setting_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_setting_pane_vc

0x2325,	// (0x00004a51) list_single_graphic_heading_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_single_graphic_heading_pane_vc

0x2325,	// (0x00004a51) list_single_heading_pane_vc_ParamLimits

0x2325,	// (0x00004a51) list_single_heading_pane_vc

0x2349,	// (0x00004a75) list_single_number_heading_pane_vc_ParamLimits

0x2349,	// (0x00004a75) list_single_number_heading_pane_vc

0xe1a3,	// (0x000108cf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108cf) list_double_graphic_heading_pane_vc_g1

0xe1af,	// (0x000108db) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe1af,	// (0x000108db) list_double_graphic_heading_pane_vc_g2

0xe0da,	// (0x00010806) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe0da,	// (0x00010806) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf659,	// (0x00011d85) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00011d85) list_double_graphic_heading_pane_vc_g

0x2905,	// (0x00005031) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2905,	// (0x00005031) list_double_graphic_heading_pane_vc_t1

0x0b70,	// (0x0000329c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b70,	// (0x0000329c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x00012142) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00012142) list_double_graphic_heading_pane_vc_t

0x0bae,	// (0x000032da) list_setting_pane_vc_g1_ParamLimits

0x0bae,	// (0x000032da) list_setting_pane_vc_g1

0x0bba,	// (0x000032e6) list_setting_pane_vc_g2_ParamLimits

0x0bba,	// (0x000032e6) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x00011f44) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x00011f44) list_setting_pane_vc_g

0x2b45,	// (0x00005271) list_setting_pane_vc_t1_ParamLimits

0x2b45,	// (0x00005271) list_setting_pane_vc_t1

0x2b59,	// (0x00005285) list_setting_pane_vc_t2_ParamLimits

0x2b59,	// (0x00005285) list_setting_pane_vc_t2

0x0001,

0xfa59,	// (0x00012185) list_setting_pane_vc_t_ParamLimits

0xfa59,	// (0x00012185) list_setting_pane_vc_t

0x0c1c,	// (0x00003348) set_value_pane_cp_vc_ParamLimits

0x0c1c,	// (0x00003348) set_value_pane_cp_vc

0xe1af,	// (0x000108db) list_single_number_heading_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108db) list_single_number_heading_pane_vc_g1

0xe0da,	// (0x00010806) list_single_number_heading_pane_vc_g2_ParamLimits

0xe0da,	// (0x00010806) list_single_number_heading_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_single_number_heading_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_single_number_heading_pane_vc_g

0x0b70,	// (0x0000329c) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b70,	// (0x0000329c) list_single_number_heading_pane_vc_t1

0x2b7b,	// (0x000052a7) list_single_number_heading_pane_vc_t2_ParamLimits

0x2b7b,	// (0x000052a7) list_single_number_heading_pane_vc_t2

0x2b8d,	// (0x000052b9) list_single_number_heading_pane_vc_t3_ParamLimits

0x2b8d,	// (0x000052b9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa5e,	// (0x0001218a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001218a) list_single_number_heading_pane_vc_t

0xe1a3,	// (0x000108cf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108cf) list_single_graphic_heading_pane_vc_g1

0xe1af,	// (0x000108db) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe1af,	// (0x000108db) list_single_graphic_heading_pane_vc_g4

0xe0da,	// (0x00010806) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe0da,	// (0x00010806) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf659,	// (0x00011d85) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00011d85) list_single_graphic_heading_pane_vc_g

0x0b70,	// (0x0000329c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b70,	// (0x0000329c) list_single_graphic_heading_pane_vc_t1

0x2b9f,	// (0x000052cb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2b9f,	// (0x000052cb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x00012191) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x00012191) list_single_graphic_heading_pane_vc_t

0xe1af,	// (0x000108db) list_double2_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108db) list_double2_pane_vc_g1

0xe0da,	// (0x00010806) list_double2_pane_vc_g2_ParamLimits

0xe0da,	// (0x00010806) list_double2_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_double2_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_double2_pane_vc_g

0xe0e6,	// (0x00010812) list_double2_pane_vc_t1_ParamLimits

0xe0e6,	// (0x00010812) list_double2_pane_vc_t1

0xe049,	// (0x00010775) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe049,	// (0x00010775) list_double2_large_graphic_pane_vc_g1

0xe055,	// (0x00010781) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe055,	// (0x00010781) list_double2_large_graphic_pane_vc_g2

0xe061,	// (0x0001078d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe061,	// (0x0001078d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00011d55) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00011d55) list_double2_large_graphic_pane_vc_g

0xe075,	// (0x000107a1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe075,	// (0x000107a1) list_double2_large_graphic_pane_vc_t1

0x2bb1,	// (0x000052dd) list_double_time_pane_vc_g1_ParamLimits

0x2bb1,	// (0x000052dd) list_double_time_pane_vc_g1

0x2bbd,	// (0x000052e9) list_double_time_pane_vc_g2_ParamLimits

0x2bbd,	// (0x000052e9) list_double_time_pane_vc_g2

0x0001,

0xfa6a,	// (0x00012196) list_double_time_pane_vc_g_ParamLimits

0xfa6a,	// (0x00012196) list_double_time_pane_vc_g

0x2bc9,	// (0x000052f5) list_double_time_pane_vc_t1_ParamLimits

0x2bc9,	// (0x000052f5) list_double_time_pane_vc_t1

0x2be2,	// (0x0000530e) list_double_time_pane_vc_t2_ParamLimits

0x2be2,	// (0x0000530e) list_double_time_pane_vc_t2

0x2bfb,	// (0x00005327) list_double_time_pane_vc_t3_ParamLimits

0x2bfb,	// (0x00005327) list_double_time_pane_vc_t3

0x2c13,	// (0x0000533f) list_double_time_pane_vc_t4_ParamLimits

0x2c13,	// (0x0000533f) list_double_time_pane_vc_t4

0x0003,

0xfa6f,	// (0x0001219b) list_double_time_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001219b) list_double_time_pane_vc_t

0xe1af,	// (0x000108db) list_double_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108db) list_double_pane_vc_g1

0xe0da,	// (0x00010806) list_double_pane_vc_g2_ParamLimits

0xe0da,	// (0x00010806) list_double_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_double_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_double_pane_vc_g

0x2c25,	// (0x00005351) list_double_pane_vc_t1_ParamLimits

0x2c25,	// (0x00005351) list_double_pane_vc_t1

0x2c37,	// (0x00005363) list_double_pane_vc_t2_ParamLimits

0x2c37,	// (0x00005363) list_double_pane_vc_t2

0x0001,

0xfa78,	// (0x000121a4) list_double_pane_vc_t_ParamLimits

0xfa78,	// (0x000121a4) list_double_pane_vc_t

0xe1af,	// (0x000108db) list_double_number_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108db) list_double_number_pane_vc_g1

0xe0da,	// (0x00010806) list_double_number_pane_vc_g2_ParamLimits

0xe0da,	// (0x00010806) list_double_number_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_double_number_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_double_number_pane_vc_g

0x2c4d,	// (0x00005379) list_double_number_pane_vc_t1_ParamLimits

0x2c4d,	// (0x00005379) list_double_number_pane_vc_t1

0x2c61,	// (0x0000538d) list_double_number_pane_vc_t2_ParamLimits

0x2c61,	// (0x0000538d) list_double_number_pane_vc_t2

0x2c37,	// (0x00005363) list_double_number_pane_vc_t3_ParamLimits

0x2c37,	// (0x00005363) list_double_number_pane_vc_t3

0x0002,

0xfa7d,	// (0x000121a9) list_double_number_pane_vc_t_ParamLimits

0xfa7d,	// (0x000121a9) list_double_number_pane_vc_t

0x2c73,	// (0x0000539f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2c73,	// (0x0000539f) list_double_large_graphic_pane_vc_g1

0x2c7f,	// (0x000053ab) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2c7f,	// (0x000053ab) list_double_large_graphic_pane_vc_g2

0xe061,	// (0x0001078d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe061,	// (0x0001078d) list_double_large_graphic_pane_vc_g3

0x2c8e,	// (0x000053ba) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2c8e,	// (0x000053ba) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa84,	// (0x000121b0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x000121b0) list_double_large_graphic_pane_vc_g

0x2c9a,	// (0x000053c6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2c9a,	// (0x000053c6) list_double_large_graphic_pane_vc_t1

0x2cac,	// (0x000053d8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2cac,	// (0x000053d8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x000121b9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x000121b9) list_double_large_graphic_pane_vc_t

0xe1af,	// (0x000108db) list_double_heading_pane_vc_g1_ParamLimits

0xe1af,	// (0x000108db) list_double_heading_pane_vc_g1

0xe0da,	// (0x00010806) list_double_heading_pane_vc_g2_ParamLimits

0xe0da,	// (0x00010806) list_double_heading_pane_vc_g2

0x0001,

0xf6a5,	// (0x00011dd1) list_double_heading_pane_vc_g_ParamLimits

0xf6a5,	// (0x00011dd1) list_double_heading_pane_vc_g

0x2cc3,	// (0x000053ef) list_double_heading_pane_vc_t1_ParamLimits

0x2cc3,	// (0x000053ef) list_double_heading_pane_vc_t1

0x0b70,	// (0x0000329c) list_double_heading_pane_vc_t2_ParamLimits

0x0b70,	// (0x0000329c) list_double_heading_pane_vc_t2

0x0001,

0xfa92,	// (0x000121be) list_double_heading_pane_vc_t_ParamLimits

0xfa92,	// (0x000121be) list_double_heading_pane_vc_t

0xe1a3,	// (0x000108cf) list_double_graphic_pane_vc_g1_ParamLimits

0xe1a3,	// (0x000108cf) list_double_graphic_pane_vc_g1

0x2cd5,	// (0x00005401) list_double_graphic_pane_vc_g2_ParamLimits

0x2cd5,	// (0x00005401) list_double_graphic_pane_vc_g2

0x2ce4,	// (0x00005410) list_double_graphic_pane_vc_g3_ParamLimits

0x2ce4,	// (0x00005410) list_double_graphic_pane_vc_g3

0x0002,

0xfa97,	// (0x000121c3) list_double_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x000121c3) list_double_graphic_pane_vc_g

0x2cf0,	// (0x0000541c) list_double_graphic_pane_vc_t1_ParamLimits

0x2cf0,	// (0x0000541c) list_double_graphic_pane_vc_t1

0x2c37,	// (0x00005363) list_double_graphic_pane_vc_t2_ParamLimits

0x2c37,	// (0x00005363) list_double_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x000121ca) list_double_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x000121ca) list_double_graphic_pane_vc_t

0xbc9a,	// (0x0000e3c6) aid_size_cell_fastswap

0xbca2,	// (0x0000e3ce) aid_size_cell_touch_ParamLimits

0xbca2,	// (0x0000e3ce) aid_size_cell_touch

0xbdf1,	// (0x0000e51d) popup_fast_swap_wide_window_ParamLimits

0xbdf1,	// (0x0000e51d) popup_fast_swap_wide_window

0xbeb7,	// (0x0000e5e3) touch_pane_ParamLimits

0xbeb7,	// (0x0000e5e3) touch_pane

0xe447,	// (0x00010b73) button_value_adjust_pane_cp2

0xe44f,	// (0x00010b7b) button_value_adjust_pane_cp4

0xe46f,	// (0x00010b9b) form_field_data_pane_cp2

0xe48e,	// (0x00010bba) form_field_data_wide_pane_cp2

0xeae7,	// (0x00011213) bg_scroll_pane_ParamLimits

0xc0de,	// (0x0000e80a) scroll_handle_pane_ParamLimits

0xc0f2,	// (0x0000e81e) scroll_sc2_down_pane_ParamLimits

0xc0f2,	// (0x0000e81e) scroll_sc2_down_pane

0xeb18,	// (0x00011244) scroll_sc2_up_pane_ParamLimits

0xeb18,	// (0x00011244) scroll_sc2_up_pane

0x30ec,	// (0x00005818) grid_wheel_folder_pane_g1_ParamLimits

0x30ec,	// (0x00005818) grid_wheel_folder_pane_g1

0xc2a6,	// (0x0000e9d2) clock_nsta_pane_cp2_ParamLimits

0xc2a6,	// (0x0000e9d2) clock_nsta_pane_cp2

0xf2ac,	// (0x000119d8) listscroll_midp_pane_ParamLimits

0xf2b8,	// (0x000119e4) midp_canvas_pane

0xc4ee,	// (0x0000ec1a) nsta_clock_indic_pane

0x00e2,	// (0x0000280e) listscroll_form_pane_vc

0x00ff,	// (0x0000282b) listscroll_set_pane_vc_ParamLimits

0x00ff,	// (0x0000282b) listscroll_set_pane_vc

0x067f,	// (0x00002dab) clock_nsta_pane

0x06e9,	// (0x00002e15) indicator_nsta_pane

0x0a02,	// (0x0000312e) bg_popup_sub_pane_cp2_ParamLimits

0x0a16,	// (0x00003142) find_pane_cp2_ParamLimits

0x0a16,	// (0x00003142) find_pane_cp2

0x0a28,	// (0x00003154) grid_toobar_pane_ParamLimits

0x0c28,	// (0x00003354) list_form_gen_pane_vc_ParamLimits

0x0c28,	// (0x00003354) list_form_gen_pane_vc

0x0c3e,	// (0x0000336a) scroll_pane_cp8_vc_ParamLimits

0x0c3e,	// (0x0000336a) scroll_pane_cp8_vc

0x0d4f,	// (0x0000347b) data_form_wide_pane_vc_ParamLimits

0x0d4f,	// (0x0000347b) data_form_wide_pane_vc

0x0d5b,	// (0x00003487) form_field_data_wide_pane_vc_g1

0x0d63,	// (0x0000348f) form_field_data_wide_pane_vc_t1_ParamLimits

0x0d63,	// (0x0000348f) form_field_data_wide_pane_vc_t1

0xe517,	// (0x00010c43) input_focus_pane_cp6_vc_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_cp6_vc

0x1038,	// (0x00003764) list_midp_pane_ParamLimits

0x1044,	// (0x00003770) scroll_pane_cp16_ParamLimits

0x1044,	// (0x00003770) scroll_pane_cp16

0x1084,	// (0x000037b0) button_value_adjust_pane_ParamLimits

0x1084,	// (0x000037b0) button_value_adjust_pane

0x216d,	// (0x00004899) button_value_adjust_pane_cp6_ParamLimits

0x216d,	// (0x00004899) button_value_adjust_pane_cp6

0x2275,	// (0x000049a1) settings_code_pane_cp_ParamLimits

0x2275,	// (0x000049a1) settings_code_pane_cp

0xd63a,	// (0x0000fd66) cell_touch_pane_g1

0xd63a,	// (0x0000fd66) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00011e6e) cell_touch_pane_g

0x28e3,	// (0x0000500f) cell_touch_pane_cp_ParamLimits

0x28e3,	// (0x0000500f) cell_touch_pane_cp

0x28f3,	// (0x0000501f) cell_touch_pane_ParamLimits

0x28f3,	// (0x0000501f) cell_touch_pane

0xd63a,	// (0x0000fd66) scroll_sc2_down_pane_g1

0xd63a,	// (0x0000fd66) scroll_sc2_up_pane_g1

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp4_vc

0x2917,	// (0x00005043) list_set_graphic_pane_vc_g1_ParamLimits

0x2917,	// (0x00005043) list_set_graphic_pane_vc_g1

0x2923,	// (0x0000504f) list_set_graphic_pane_vc_g2_ParamLimits

0x2923,	// (0x0000504f) list_set_graphic_pane_vc_g2

0x0001,

0xfa1b,	// (0x00012147) list_set_graphic_pane_vc_g_ParamLimits

0xfa1b,	// (0x00012147) list_set_graphic_pane_vc_g

0x292f,	// (0x0000505b) text_primary_small_cp13_vc_ParamLimits

0x292f,	// (0x0000505b) text_primary_small_cp13_vc

0x2947,	// (0x00005073) list_set_graphic_pane_vc_ParamLimits

0x2947,	// (0x00005073) list_set_graphic_pane_vc

0xd721,	// (0x0000fe4d) input_focus_pane_cp2_vc

0xd63a,	// (0x0000fd66) setting_code_pane_vc_g1

0x295a,	// (0x00005086) setting_code_pane_vc_t1

0x2968,	// (0x00005094) set_text_pane_vc_t1_ParamLimits

0x2968,	// (0x00005094) set_text_pane_vc_t1

0xd721,	// (0x0000fe4d) input_focus_pane_cp1_vc

0x2983,	// (0x000050af) list_set_text_pane_vc

0xd63a,	// (0x0000fd66) setting_text_pane_vc_g1

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp2_vc

0x298d,	// (0x000050b9) setting_slider_graphic_pane_vc_g1

0x2995,	// (0x000050c1) setting_slider_graphic_pane_vc_t1

0x29a3,	// (0x000050cf) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa20,	// (0x0001214c) setting_slider_graphic_pane_vc_t

0x29b1,	// (0x000050dd) slider_set_pane_cp_vc

0x29b9,	// (0x000050e5) slider_set_pane_vc_g1

0x29c2,	// (0x000050ee) slider_set_pane_vc_g2

0x0006,

0xfa25,	// (0x00012151) slider_set_pane_vc_g

0xe63d,	// (0x00010d69) set_opt_bg_pane_g1_copy1

0xe645,	// (0x00010d71) set_opt_bg_pane_g2_copy1

0x29ee,	// (0x0000511a) set_opt_bg_pane_g3_copy1

0xe655,	// (0x00010d81) set_opt_bg_pane_g4_copy1

0xe65d,	// (0x00010d89) set_opt_bg_pane_g5_copy1

0xe665,	// (0x00010d91) set_opt_bg_pane_g6_copy1

0x29f6,	// (0x00005122) set_opt_bg_pane_g7_copy1

0x29fe,	// (0x0000512a) set_opt_bg_pane_g8_copy1

0x2a06,	// (0x00005132) set_opt_bg_pane_g9_copy1

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp_vc

0x2a0e,	// (0x0000513a) setting_slider_pane_vc_t1

0x2995,	// (0x000050c1) setting_slider_pane_vc_t2

0x29a3,	// (0x000050cf) setting_slider_pane_vc_t3

0x0002,

0xfa34,	// (0x00012160) setting_slider_pane_vc_t

0x29b1,	// (0x000050dd) slider_set_pane_vc

0xc68f,	// (0x0000edbb) volume_set_pane_vc_g1

0xc976,	// (0x0000f0a2) volume_set_pane_vc_g2

0xc97f,	// (0x0000f0ab) volume_set_pane_vc_g3

0xc988,	// (0x0000f0b4) volume_set_pane_vc_g4

0xc991,	// (0x0000f0bd) volume_set_pane_vc_g5

0xc99a,	// (0x0000f0c6) volume_set_pane_vc_g6

0xc9a3,	// (0x0000f0cf) volume_set_pane_vc_g7

0xc9ac,	// (0x0000f0d8) volume_set_pane_vc_g8

0xc9b5,	// (0x0000f0e1) volume_set_pane_vc_g9

0xc9be,	// (0x0000f0ea) volume_set_pane_vc_g10

0x0009,

0xfa3b,	// (0x00012167) volume_set_pane_vc_g

0x2a6e,	// (0x0000519a) volume_set_pane_vc

0x2a76,	// (0x000051a2) button_value_adjust_pane_cp1_vc

0x2a80,	// (0x000051ac) list_highlight_pane_cp2_vc

0x2a89,	// (0x000051b5) list_set_pane_vc_ParamLimits

0x2a89,	// (0x000051b5) list_set_pane_vc

0x2adb,	// (0x00005207) main_pane_set_vc_t1_ParamLimits

0x2adb,	// (0x00005207) main_pane_set_vc_t1

0x2af0,	// (0x0000521c) main_pane_set_vc_t2_ParamLimits

0x2af0,	// (0x0000521c) main_pane_set_vc_t2

0x2b02,	// (0x0000522e) main_pane_set_vc_t3_ParamLimits

0x2b02,	// (0x0000522e) main_pane_set_vc_t3

0x2b14,	// (0x00005240) main_pane_set_vc_t4_ParamLimits

0x2b14,	// (0x00005240) main_pane_set_vc_t4

0x0003,

0xfa50,	// (0x0001217c) main_pane_set_vc_t_ParamLimits

0xfa50,	// (0x0001217c) main_pane_set_vc_t

0x2b26,	// (0x00005252) setting_code_pane_vc_ParamLimits

0x2b26,	// (0x00005252) setting_code_pane_vc

0x2b35,	// (0x00005261) setting_slider_graphic_pane_vc

0x2b35,	// (0x00005261) setting_slider_pane_vc

0x2b35,	// (0x00005261) setting_text_pane_vc

0x2b35,	// (0x00005261) setting_volume_pane_vc

0x2b3d,	// (0x00005269) scroll_pane_cp121_vc

0xe43e,	// (0x00010b6a) set_content_pane_vc

0x2d02,	// (0x0000542e) button_value_adjust_pane_g1

0x2d0b,	// (0x00005437) button_value_adjust_pane_g2

0x0001,

0xfaa3,	// (0x000121cf) button_value_adjust_pane_g

0x2d14,	// (0x00005440) form_field_slider_wide_pane_vc_t1_ParamLimits

0x2d14,	// (0x00005440) form_field_slider_wide_pane_vc_t1

0x2d2a,	// (0x00005456) form_field_slider_wide_pane_vc_t2_ParamLimits

0x2d2a,	// (0x00005456) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa8,	// (0x000121d4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa8,	// (0x000121d4) form_field_slider_wide_pane_vc_t

0xda9a,	// (0x000101c6) input_focus_pane_cp10_vc_ParamLimits

0xda9a,	// (0x000101c6) input_focus_pane_cp10_vc

0x2d3f,	// (0x0000546b) slider_cont_pane_cp1_vc_ParamLimits

0x2d3f,	// (0x0000546b) slider_cont_pane_cp1_vc

0x29b9,	// (0x000050e5) slider_form_pane_g1_cp2

0x29c2,	// (0x000050ee) slider_form_pane_g2_cp2

0x2d5a,	// (0x00005486) form_field_slider_pane_vc_t3

0x2d68,	// (0x00005494) form_field_slider_pane_vc_t4

0x2d76,	// (0x000054a2) slider_form_pane_vc_ParamLimits

0x2d76,	// (0x000054a2) slider_form_pane_vc

0x2d83,	// (0x000054af) form_field_slider_pane_vc_t1_ParamLimits

0x2d83,	// (0x000054af) form_field_slider_pane_vc_t1

0x2d99,	// (0x000054c5) form_field_slider_pane_vc_t2_ParamLimits

0x2d99,	// (0x000054c5) form_field_slider_pane_vc_t2

0x0001,

0xfab8,	// (0x000121e4) form_field_slider_pane_vc_t_ParamLimits

0xfab8,	// (0x000121e4) form_field_slider_pane_vc_t

0xda9a,	// (0x000101c6) input_focus_pane_cp9_vc_ParamLimits

0xda9a,	// (0x000101c6) input_focus_pane_cp9_vc

0x2dab,	// (0x000054d7) slider_cont_pane_vc_ParamLimits

0x2dab,	// (0x000054d7) slider_cont_pane_vc

0x2dbd,	// (0x000054e9) list_form_graphic_pane_cp_vc_ParamLimits

0x2dbd,	// (0x000054e9) list_form_graphic_pane_cp_vc

0x0d5b,	// (0x00003487) form_field_popup_wide_pane_vc_g1

0x2dd2,	// (0x000054fe) form_field_popup_wide_pane_vc_t1_ParamLimits

0x2dd2,	// (0x000054fe) form_field_popup_wide_pane_vc_t1

0xe517,	// (0x00010c43) input_focus_pane_cp8_vc_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_cp8_vc

0x2de7,	// (0x00005513) list_form_wide_pane_vc_ParamLimits

0x2de7,	// (0x00005513) list_form_wide_pane_vc

0x2df3,	// (0x0000551f) list_form_graphic_pane_vc_g1

0x2dfb,	// (0x00005527) list_form_graphic_pane_vc_t1_ParamLimits

0x2dfb,	// (0x00005527) list_form_graphic_pane_vc_t1

0xd801,	// (0x0000ff2d) list_highlight_pane_cp5_vc_ParamLimits

0xd801,	// (0x0000ff2d) list_highlight_pane_cp5_vc

0x2e17,	// (0x00005543) list_form_graphic_pane_vc_ParamLimits

0x2e17,	// (0x00005543) list_form_graphic_pane_vc

0x0d5b,	// (0x00003487) form_field_popup_pane_vc_g1

0x2e2d,	// (0x00005559) form_field_popup_pane_vc_t1_ParamLimits

0x2e2d,	// (0x00005559) form_field_popup_pane_vc_t1

0xe517,	// (0x00010c43) input_focus_pane_cp7_vc_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_cp7_vc

0x2e42,	// (0x0000556e) list_form_pane_vc_ParamLimits

0x2e42,	// (0x0000556e) list_form_pane_vc

0x2e4e,	// (0x0000557a) data_form_pane_vc_t1_ParamLimits

0x2e4e,	// (0x0000557a) data_form_pane_vc_t1

0xe63d,	// (0x00010d69) input_focus_pane_vc_g1

0xe645,	// (0x00010d71) input_focus_pane_vc_g2

0xe64d,	// (0x00010d79) input_focus_pane_vc_g3

0xe655,	// (0x00010d81) input_focus_pane_vc_g4

0xe65d,	// (0x00010d89) input_focus_pane_vc_g5

0xe665,	// (0x00010d91) input_focus_pane_vc_g6

0xe66d,	// (0x00010d99) input_focus_pane_vc_g7

0xe675,	// (0x00010da1) input_focus_pane_vc_g8

0xe67d,	// (0x00010da9) input_focus_pane_vc_g9

0xd63a,	// (0x0000fd66) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00011df7) input_focus_pane_vc_g

0x0d4f,	// (0x0000347b) data_form_pane_vc_ParamLimits

0x0d4f,	// (0x0000347b) data_form_pane_vc

0x0d5b,	// (0x00003487) form_field_data_pane_vc_g1

0x2e69,	// (0x00005595) form_field_data_pane_vc_t1_ParamLimits

0x2e69,	// (0x00005595) form_field_data_pane_vc_t1

0xe517,	// (0x00010c43) input_focus_pane_vc_ParamLimits

0xe517,	// (0x00010c43) input_focus_pane_vc

0xe447,	// (0x00010b73) button_value_adjust_pane_cp3_vc

0x2e7f,	// (0x000055ab) button_value_adjust_pane_cp5_vc

0x2e87,	// (0x000055b3) form_field_data_pane_vc_ParamLimits

0x2e87,	// (0x000055b3) form_field_data_pane_vc

0xe46f,	// (0x00010b9b) form_field_data_pane_vc_cp2

0x2e9e,	// (0x000055ca) form_field_data_wide_pane_vc_ParamLimits

0x2e9e,	// (0x000055ca) form_field_data_wide_pane_vc

0x2eb4,	// (0x000055e0) form_field_data_wide_pane_vc_cp2

0x2ebc,	// (0x000055e8) form_field_popup_pane_vc_ParamLimits

0x2ebc,	// (0x000055e8) form_field_popup_pane_vc

0x2ed3,	// (0x000055ff) form_field_popup_wide_pane_vc_ParamLimits

0x2ed3,	// (0x000055ff) form_field_popup_wide_pane_vc

0x2ee9,	// (0x00005615) form_field_slider_pane_vc_ParamLimits

0x2ee9,	// (0x00005615) form_field_slider_pane_vc

0x2efc,	// (0x00005628) form_field_slider_wide_pane_vc_ParamLimits

0x2efc,	// (0x00005628) form_field_slider_wide_pane_vc

0x2f0f,	// (0x0000563b) grid_touch_1_pane_ParamLimits

0x2f0f,	// (0x0000563b) grid_touch_1_pane

0x2f1b,	// (0x00005647) grid_touch_2_pane_ParamLimits

0x2f1b,	// (0x00005647) grid_touch_2_pane

0xf55d,	// (0x00011c89) touch_pane_g1_ParamLimits

0xf55d,	// (0x00011c89) touch_pane_g1

0x2f33,	// (0x0000565f) cell_app_pane_cp_wide_ParamLimits

0x2f33,	// (0x0000565f) cell_app_pane_cp_wide

0x2f43,	// (0x0000566f) grid_popup_fast_wide_pane_ParamLimits

0x2f43,	// (0x0000566f) grid_popup_fast_wide_pane

0x2f57,	// (0x00005683) scroll_pane_cp19_ParamLimits

0x2f57,	// (0x00005683) scroll_pane_cp19

0xd721,	// (0x0000fe4d) bg_popup_window_pane_cp20

0x2f6b,	// (0x00005697) listscroll_popup_fast_wide_pane

0xd801,	// (0x0000ff2d) grid_indicator_nsta_pane

0x2f73,	// (0x0000569f) clock_nsta_pane_g1

0x2f7c,	// (0x000056a8) clock_nsta_pane_t1

0x2f98,	// (0x000056c4) cell_indicator_nsta_pane_ParamLimits

0x2f98,	// (0x000056c4) cell_indicator_nsta_pane

0x2fd0,	// (0x000056fc) cell_indicator_nsta_pane_g1

0x2fde,	// (0x0000570a) cell_indicator_nsta_pane_g2

0x0001,

0xfac2,	// (0x000121ee) cell_indicator_nsta_pane_g

0x2ff3,	// (0x0000571f) clock_nsta_pane_cp

0x2ffb,	// (0x00005727) indicator_nsta_pane_cp

0x3004,	// (0x00005730) nsta_clock_indic_pane_g1

0xd8e1,	// (0x0001000d) grid_indicator_pane

0xec0a,	// (0x00011336) scroll_pane_cp29

0xc1fd,	// (0x0000e929) indicator_nsta_pane_cp2_ParamLimits

0xc1fd,	// (0x0000e929) indicator_nsta_pane_cp2

0xd801,	// (0x0000ff2d) main_apps_wheel_pane

0x0f1f,	// (0x0000364b) form_midp_field_text_pane_ParamLimits

0x1064,	// (0x00003790) scroll_bar_cp050_ParamLimits

0x303c,	// (0x00005768) cell_indicator_pane_ParamLimits

0x303c,	// (0x00005768) cell_indicator_pane

0x3052,	// (0x0000577e) cell_indicator_pane_g1

0x305c,	// (0x00005788) grid_wheel_folder_pane_ParamLimits

0x305c,	// (0x00005788) grid_wheel_folder_pane

0x306e,	// (0x0000579a) list_wheel_apps_pane_ParamLimits

0x306e,	// (0x0000579a) list_wheel_apps_pane

0x307d,	// (0x000057a9) main_apps_wheel_pane_g1_ParamLimits

0x307d,	// (0x000057a9) main_apps_wheel_pane_g1

0x3091,	// (0x000057bd) main_apps_wheel_pane_g2_ParamLimits

0x3091,	// (0x000057bd) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x000121fd) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x000121fd) main_apps_wheel_pane_g

0x30a5,	// (0x000057d1) main_apps_wheel_pane_t1_ParamLimits

0x30a5,	// (0x000057d1) main_apps_wheel_pane_t1

0x30c4,	// (0x000057f0) list_wheel_apps_pane_g1

0x30cc,	// (0x000057f8) list_wheel_apps_pane_g2

0x30d4,	// (0x00005800) list_wheel_apps_pane_g3

0x30dc,	// (0x00005808) list_wheel_apps_pane_g4

0x30e4,	// (0x00005810) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x00012202) list_wheel_apps_pane_g

0xd801,	// (0x0000ff2d) navi_icon_text_pane

0x05c7,	// (0x00002cf3) aid_fill_nsta

0x3103,	// (0x0000582f) navi_icon_text_pane_g1

0x310f,	// (0x0000583b) navi_icon_text_pane_t1

0xf01f,	// (0x0001174b) list_set_graphic_pane_t1_ParamLimits

0xf01f,	// (0x0001174b) list_set_graphic_pane_t1

0x1741,	// (0x00003e6d) popup_midp_note_alarm_window_t6_ParamLimits

0x1741,	// (0x00003e6d) popup_midp_note_alarm_window_t6

0x1753,	// (0x00003e7f) popup_midp_note_alarm_window_t7_ParamLimits

0x1753,	// (0x00003e7f) popup_midp_note_alarm_window_t7

0x1765,	// (0x00003e91) popup_midp_note_alarm_window_t8_ParamLimits

0x1765,	// (0x00003e91) popup_midp_note_alarm_window_t8

0x1777,	// (0x00003ea3) popup_midp_note_alarm_window_t9_ParamLimits

0x1777,	// (0x00003ea3) popup_midp_note_alarm_window_t9

0x1789,	// (0x00003eb5) popup_midp_note_alarm_window_t10_ParamLimits

0x1789,	// (0x00003eb5) popup_midp_note_alarm_window_t10

0x179b,	// (0x00003ec7) popup_midp_note_alarm_window_t11_ParamLimits

0x179b,	// (0x00003ec7) popup_midp_note_alarm_window_t11

0x17ad,	// (0x00003ed9) scroll_pane_cp17_ParamLimits

0x17ad,	// (0x00003ed9) scroll_pane_cp17

0xc68f,	// (0x0000edbb) volume_small_pane_cp_g1

0xc9c7,	// (0x0000f0f3) volume_small_pane_cp_g2

0xc9d0,	// (0x0000f0fc) volume_small_pane_cp_g3

0xc9d9,	// (0x0000f105) volume_small_pane_cp_g4

0xc6bc,	// (0x0000ede8) volume_small_pane_cp_g5

0xc9e2,	// (0x0000f10e) volume_small_pane_cp_g6

0xc9eb,	// (0x0000f117) volume_small_pane_cp_g7

0xc9f4,	// (0x0000f120) volume_small_pane_cp_g8

0xc9fd,	// (0x0000f129) volume_small_pane_cp_g9

0xca06,	// (0x0000f132) volume_small_pane_cp_g10

0xf373,	// (0x00011a9f) midp_ticker_pane_g1_ParamLimits

0xf37f,	// (0x00011aab) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00011ebf) midp_ticker_pane_g_ParamLimits

0xf38b,	// (0x00011ab7) midp_ticker_pane_t1_ParamLimits

0x05d7,	// (0x00002d03) aid_fill_nsta_2

0x1050,	// (0x0000377c) list_form2_midp_pane

0x22f4,	// (0x00004a20) midp_editing_number_pane_ParamLimits

0x2300,	// (0x00004a2c) midp_ticker_pane_ParamLimits

0x3169,	// (0x00005895) form2_midp_field_pane

0x318d,	// (0x000058b9) scroll_pane_cp51

0x31ad,	// (0x000058d9) form2_midp_button_pane_ParamLimits

0x31ad,	// (0x000058d9) form2_midp_button_pane

0x31bf,	// (0x000058eb) form2_midp_content_pane_ParamLimits

0x31bf,	// (0x000058eb) form2_midp_content_pane

0x31d9,	// (0x00005905) form2_midp_field_choice_group_pane

0x31e1,	// (0x0000590d) form2_midp_field_pane_g1

0x31e9,	// (0x00005915) form2_midp_field_pane_g2

0x31f1,	// (0x0000591d) form2_midp_field_pane_g3

0x31f9,	// (0x00005925) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x00012227) form2_midp_field_pane_g

0x3201,	// (0x0000592d) form2_midp_gauge_slider_pane

0x3209,	// (0x00005935) form2_midp_gauge_wait_pane

0x3211,	// (0x0000593d) form2_midp_image_pane_ParamLimits

0x3211,	// (0x0000593d) form2_midp_image_pane

0x322c,	// (0x00005958) form2_midp_label_pane_ParamLimits

0x322c,	// (0x00005958) form2_midp_label_pane

0x3245,	// (0x00005971) form2_midp_label_pane_cp_ParamLimits

0x3245,	// (0x00005971) form2_midp_label_pane_cp

0x3264,	// (0x00005990) form2_midp_string_pane_ParamLimits

0x3264,	// (0x00005990) form2_midp_string_pane

0x3276,	// (0x000059a2) form2_midp_text_pane_ParamLimits

0x3276,	// (0x000059a2) form2_midp_text_pane

0x328f,	// (0x000059bb) form2_midp_time_pane

0x329f,	// (0x000059cb) input_focus_pane_cp51_ParamLimits

0x329f,	// (0x000059cb) input_focus_pane_cp51

0x32b7,	// (0x000059e3) form2_midp_label_pane_t1_ParamLimits

0x32b7,	// (0x000059e3) form2_midp_label_pane_t1

0x32f7,	// (0x00005a23) form2_mdip_text_pane_t1_ParamLimits

0x32f7,	// (0x00005a23) form2_mdip_text_pane_t1

0x3313,	// (0x00005a3f) form2_midp_time_pane_t1

0x332e,	// (0x00005a5a) form2_midp_gauge_slider_pane_t1

0x3340,	// (0x00005a6c) form2_midp_gauge_slider_pane_t2

0x3352,	// (0x00005a7e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x00012230) form2_midp_gauge_slider_pane_t

0x3364,	// (0x00005a90) form2_midp_slider_pane

0x3370,	// (0x00005a9c) form2_midp_gauge_wait_pane_t1

0x337e,	// (0x00005aaa) form2_midp_wait_pane_ParamLimits

0x337e,	// (0x00005aaa) form2_midp_wait_pane

0xed14,	// (0x00011440) list_single_2graphic_pane_cp4_ParamLimits

0xed14,	// (0x00011440) list_single_2graphic_pane_cp4

0x0d89,	// (0x000034b5) list_single_midp_graphic_pane_cp_ParamLimits

0x0d89,	// (0x000034b5) list_single_midp_graphic_pane_cp

0xd721,	// (0x0000fe4d) list_highlight_pane_cp20

0x33a9,	// (0x00005ad5) list_single_2graphic_pane_g1_cp4

0x2448,	// (0x00004b74) list_single_2graphic_pane_g2_cp4

0x33b1,	// (0x00005add) list_single_2graphic_pane_t1_cp4

0xd801,	// (0x0000ff2d) list_highlight_pane_cp21

0x33c0,	// (0x00005aec) list_single_midp_graphic_pane_g4_cp

0x33cf,	// (0x00005afb) list_single_midp_graphic_pane_t1_cp

0x33e4,	// (0x00005b10) form2_mdip_string_pane_t1_ParamLimits

0x33e4,	// (0x00005b10) form2_mdip_string_pane_t1

0xd721,	// (0x0000fe4d) bg_wml_button_pane_cp2

0xd63a,	// (0x0000fd66) form2_midp_image_pane_g1

0xe22c,	// (0x00010958) list_double_large_graphic_pane_g5_ParamLimits

0xe22c,	// (0x00010958) list_double_large_graphic_pane_g5

0xf2ac,	// (0x000119d8) midp_form_pane_ParamLimits

0xd801,	// (0x0000ff2d) main_apps_wheel_pane_ParamLimits

0x03f7,	// (0x00002b23) popup_preview_window_ParamLimits

0x03f7,	// (0x00002b23) popup_preview_window

0x0572,	// (0x00002c9e) popup_touch_info_window_ParamLimits

0x0572,	// (0x00002c9e) popup_touch_info_window

0x0590,	// (0x00002cbc) popup_touch_menu_window_ParamLimits

0x0590,	// (0x00002cbc) popup_touch_menu_window

0xd630,	// (0x0000fd5c) bg_popup_sub_pane_cp6

0x345c,	// (0x00005b88) list_touch_menu_pane

0x3464,	// (0x00005b90) list_single_touch_menu_pane_ParamLimits

0x3464,	// (0x00005b90) list_single_touch_menu_pane

0x347b,	// (0x00005ba7) list_single_touch_menu_pane_t1

0xd801,	// (0x0000ff2d) bg_popup_sub_pane_cp7_ParamLimits

0xd801,	// (0x0000ff2d) bg_popup_sub_pane_cp7

0x3489,	// (0x00005bb5) heading_sub_pane

0x3491,	// (0x00005bbd) list_touch_info_pane_ParamLimits

0x3491,	// (0x00005bbd) list_touch_info_pane

0x34a0,	// (0x00005bcc) list_single_touch_info_pane_ParamLimits

0x34a0,	// (0x00005bcc) list_single_touch_info_pane

0x34b1,	// (0x00005bdd) list_single_touch_info_pane_t1

0x34bf,	// (0x00005beb) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x0001223e) list_single_touch_info_pane_t

0xf2a4,	// (0x000119d0) bg_popup_heading_pane_cp

0x34cd,	// (0x00005bf9) heading_sub_pane_t1

0x0c69,	// (0x00003395) bg_popup_preview_window_pane_cp_ParamLimits

0x0c69,	// (0x00003395) bg_popup_preview_window_pane_cp

0x3489,	// (0x00005bb5) heading_preview_pane

0x3491,	// (0x00005bbd) list_preview_pane_ParamLimits

0x3491,	// (0x00005bbd) list_preview_pane

0x34db,	// (0x00005c07) popup_preview_window_g1

0x34a0,	// (0x00005bcc) list_single_preview_pane_ParamLimits

0x34a0,	// (0x00005bcc) list_single_preview_pane

0x34e3,	// (0x00005c0f) list_single_preview_pane_g1

0x34eb,	// (0x00005c17) list_single_preview_pane_t1

0x34b1,	// (0x00005bdd) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x00012243) list_single_preview_pane_t

0x34f9,	// (0x00005c25) bg_popup_heading_pane_cp2_ParamLimits

0x34f9,	// (0x00005c25) bg_popup_heading_pane_cp2

0x350f,	// (0x00005c3b) heading_preview_pane_g1

0x3517,	// (0x00005c43) heading_preview_pane_t1_ParamLimits

0x3517,	// (0x00005c43) heading_preview_pane_t1

0xd904,	// (0x00010030) soft_indicator_pane_t1_ParamLimits

0xdf6d,	// (0x00010699) scroll_pane_ParamLimits

0xeb06,	// (0x00011232) scroll_sc2_left_pane

0xeb0f,	// (0x0001123b) scroll_sc2_right_pane

0xeb2e,	// (0x0001125a) scroll_bg_pane_g1_ParamLimits

0xeb43,	// (0x0001126f) scroll_bg_pane_g2_ParamLimits

0xeb5b,	// (0x00011287) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00011e4e) scroll_bg_pane_g_ParamLimits

0xeb2e,	// (0x0001125a) scroll_handle_pane_g1_ParamLimits

0xeb7d,	// (0x000112a9) scroll_handle_pane_g2_ParamLimits

0xeb5b,	// (0x00011287) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00011e55) scroll_handle_pane_g_ParamLimits

0x013f,	// (0x0000286b) popup_choice_list_window_ParamLimits

0x013f,	// (0x0000286b) popup_choice_list_window

0x0a0e,	// (0x0000313a) choice_list_pane

0x0aab,	// (0x000031d7) cell_toolbar_pane_t1

0x0ad3,	// (0x000031ff) toolbar_button_pane_ParamLimits

0x1d8c,	// (0x000044b8) ai_gene_pane_1_t2_ParamLimits

0x1d8c,	// (0x000044b8) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x00012066) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x00012066) ai_gene_pane_1_t

0x3534,	// (0x00005c60) scroll_sc2_left_pane_g1

0x3534,	// (0x00005c60) scroll_sc2_right_pane_g1

0x0111,	// (0x0000283d) bg_popup_sub_pane_cp10

0x353e,	// (0x00005c6a) list_choice_list_pane

0x3555,	// (0x00005c81) list_single_choice_list_pane_ParamLimits

0x3555,	// (0x00005c81) list_single_choice_list_pane

0x3569,	// (0x00005c95) list_single_choice_list_pane_g1

0xe802,	// (0x00010f2e) list_single_choice_list_pane_t1_ParamLimits

0xe802,	// (0x00010f2e) list_single_choice_list_pane_t1

0x3571,	// (0x00005c9d) choice_list_pane_g1

0x3579,	// (0x00005ca5) choice_list_pane_t1

0xd630,	// (0x0000fd5c) input_focus_pane_cp11

0xe9e6,	// (0x00011112) title_pane_stacon_g2_ParamLimits

0xe9e6,	// (0x00011112) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00011e34) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00011e34) title_pane_stacon_g

0xf2a4,	// (0x000119d0) cursor_press_pane

0x01db,	// (0x00002907) popup_fep_hwr_window_ParamLimits

0x01db,	// (0x00002907) popup_fep_hwr_window

0x0237,	// (0x00002963) popup_fep_vkb_window_ParamLimits

0x0237,	// (0x00002963) popup_fep_vkb_window

0x3587,	// (0x00005cb3) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x0001226c) fep_vkb_side_pane_g_ParamLimits

0xca44,	// (0x0000f170) fep_hwr_candidate_pane_ParamLimits

0xca44,	// (0x0000f170) fep_hwr_candidate_pane

0xca6c,	// (0x0000f198) fep_hwr_side_pane_ParamLimits

0xca6c,	// (0x0000f198) fep_hwr_side_pane

0xca8c,	// (0x0000f1b8) fep_hwr_top_pane_ParamLimits

0xca8c,	// (0x0000f1b8) fep_hwr_top_pane

0xcaa4,	// (0x0000f1d0) fep_hwr_write_pane_ParamLimits

0xcaa4,	// (0x0000f1d0) fep_hwr_write_pane

0xfb40,	// (0x0001226c) fep_vkb_side_pane_g

0x3670,	// (0x00005d9c) fep_hwr_top_pane_g1

0x365e,	// (0x00005d8a) fep_hwr_top_pane_g2

0xcade,	// (0x0000f20a) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x00012248) fep_hwr_top_pane_g

0xcaf3,	// (0x0000f21f) fep_hwr_top_text_pane

0xecd2,	// (0x000113fe) fep_hwr_top_text_pane_g1

0x376f,	// (0x00005e9b) fep_hwr_top_text_pane_t1

0xcbe1,	// (0x0000f30d) fep_hwr_candidate_pane_g1

0x39ed,	// (0x00006119) fep_vkb_keypad_pane_g3_ParamLimits

0x39ed,	// (0x00006119) fep_vkb_keypad_pane_g3

0x3a0f,	// (0x0000613b) fep_vkb_keypad_pane_g4_ParamLimits

0x3a0f,	// (0x0000613b) fep_vkb_keypad_pane_g4

0x3a7e,	// (0x000061aa) fep_vkb_bottom_pane_g2_ParamLimits

0x3a7e,	// (0x000061aa) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x00012273) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x00012273) fep_vkb_bottom_pane_g

0x3534,	// (0x00005c60) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x0001227d) cell_vkb_side_pane_g

0x3b09,	// (0x00006235) cell_vkb_side_pane_t1

0x3b17,	// (0x00006243) cell_vkb_side_pane_t1_copy1

0x3534,	// (0x00005c60) bg_fep_vkb_candidate_pane_g2

0x3c3b,	// (0x00006367) cell_vkb_candidate_pane_ParamLimits

0x37eb,	// (0x00005f17) aid_size_cell_vkb_ParamLimits

0x37eb,	// (0x00005f17) aid_size_cell_vkb

0x3c3b,	// (0x00006367) cell_vkb_candidate_pane

0xcc08,	// (0x0000f334) bg_popup_fep_shadow_pane_g1

0x3861,	// (0x00005f8d) fep_vkb_bottom_pane_ParamLimits

0x3861,	// (0x00005f8d) fep_vkb_bottom_pane

0x389e,	// (0x00005fca) fep_vkb_candidate_pane_ParamLimits

0x389e,	// (0x00005fca) fep_vkb_candidate_pane

0x38ba,	// (0x00005fe6) fep_vkb_keypad_pane_ParamLimits

0x38ba,	// (0x00005fe6) fep_vkb_keypad_pane

0x38ee,	// (0x0000601a) fep_vkb_side_pane_ParamLimits

0x38ee,	// (0x0000601a) fep_vkb_side_pane

0x391a,	// (0x00006046) fep_vkb_top_pane_ParamLimits

0x391a,	// (0x00006046) fep_vkb_top_pane

0x3946,	// (0x00006072) fep_vkb_top_pane_g1_ParamLimits

0x3946,	// (0x00006072) fep_vkb_top_pane_g1

0x3955,	// (0x00006081) fep_vkb_top_pane_g2_ParamLimits

0x3955,	// (0x00006081) fep_vkb_top_pane_g2

0x3964,	// (0x00006090) fep_vkb_top_pane_g3_ParamLimits

0x3964,	// (0x00006090) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x00012263) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x00012263) fep_vkb_top_pane_g

0x3982,	// (0x000060ae) fep_vkb_top_text_pane_ParamLimits

0x3982,	// (0x000060ae) fep_vkb_top_text_pane

0x3993,	// (0x000060bf) fep_vkb_side_pane_g1_ParamLimits

0x3993,	// (0x000060bf) fep_vkb_side_pane_g1

0x39dc,	// (0x00006108) grid_vkb_side_pane_ParamLimits

0x39dc,	// (0x00006108) grid_vkb_side_pane

0xcc10,	// (0x0000f33c) bg_popup_fep_shadow_pane_g2

0xcc19,	// (0x0000f345) bg_popup_fep_shadow_pane_g3

0xcc21,	// (0x0000f34d) bg_popup_fep_shadow_pane_g4

0xcc2a,	// (0x0000f356) bg_popup_fep_shadow_pane_g5

0xcc32,	// (0x0000f35e) bg_popup_fep_shadow_pane_g6

0xcc3a,	// (0x0000f366) bg_popup_fep_shadow_pane_g7

0xe655,	// (0x00010d81) bg_popup_fep_shadow_pane_g8

0x3a2d,	// (0x00006159) grid_vkb_keypad_number_pane_ParamLimits

0x3a2d,	// (0x00006159) grid_vkb_keypad_number_pane

0x3a3d,	// (0x00006169) grid_vkb_keypad_pane_ParamLimits

0x3a3d,	// (0x00006169) grid_vkb_keypad_pane

0x3a63,	// (0x0000618f) fep_vkb_bottom_pane_g1_ParamLimits

0x3a63,	// (0x0000618f) fep_vkb_bottom_pane_g1

0x3a8c,	// (0x000061b8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x3a8c,	// (0x000061b8) grid_vkb_keypad_bottom_left_pane

0x3aa1,	// (0x000061cd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3aa1,	// (0x000061cd) grid_vkb_keypad_bottom_right_pane

0x3ab6,	// (0x000061e2) fep_vkb_top_text_pane_g1

0x3ad1,	// (0x000061fd) fep_vkb_top_text_pane_t1

0x3ae6,	// (0x00006212) cell_vkb_side_pane_ParamLimits

0x3ae6,	// (0x00006212) cell_vkb_side_pane

0x3534,	// (0x00005c60) cell_vkb_side_pane_g1

0x3b25,	// (0x00006251) cell_vkb_keypad_pane_ParamLimits

0x3b25,	// (0x00006251) cell_vkb_keypad_pane

0x3b92,	// (0x000062be) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x00012290) bg_popup_fep_shadow_pane_g

0xcc4a,	// (0x0000f376) cell_hwr_side_pane_g1

0xcc4a,	// (0x0000f376) cell_hwr_side_pane_g2

0x3b9c,	// (0x000062c8) cell_vkb_keypad_pane_t1

0x3baa,	// (0x000062d6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x3baa,	// (0x000062d6) cell_vkb_keypad_bottom_left_pane

0x3bc7,	// (0x000062f3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x3bc7,	// (0x000062f3) cell_vkb_keypad_bottom_right_pane

0x3534,	// (0x00005c60) cell_vkb_keypad_bottom_left_pane_g1

0x3534,	// (0x00005c60) cell_vkb_keypad_bottom_right_pane_g1

0x3c00,	// (0x0000632c) cell_vkb_keypad_number_pane_ParamLimits

0x3c00,	// (0x0000632c) cell_vkb_keypad_number_pane

0x3c1f,	// (0x0000634b) cell_vkb_keypad_number_pane_g1

0x3c29,	// (0x00006355) cell_vkb_keypad_number_pane_g2

0x3c32,	// (0x0000635e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x00012282) cell_vkb_keypad_number_pane_g

0x3b9c,	// (0x000062c8) cell_vkb_keypad_number_pane_t1

0x3c54,	// (0x00006380) fep_vkb_candidate_pane_g1

0x0001,

0xfb77,	// (0x000122a3) cell_hwr_side_pane_g

0x3caf,	// (0x000063db) cell_hwr_side_pane_t1

0xcc54,	// (0x0000f380) cell_hwr_side_pane_t1_copy1

0xcc62,	// (0x0000f38e) cell_hwr_candidate_pane_g1

0xcc91,	// (0x0000f3bd) cell_hwr_candidate_pane_t1

0x3534,	// (0x00005c60) cell_vkb_candidate_pane_g2

0x3d60,	// (0x0000648c) cell_vkb_candidate_pane_t1

0xca0f,	// (0x0000f13b) bg_popup_fep_shadow_pane_ParamLimits

0xca0f,	// (0x0000f13b) bg_popup_fep_shadow_pane

0xcabe,	// (0x0000f1ea) bg_fep_hwr_top_pane_g4

0x36ac,	// (0x00005dd8) bg_hwr_side_pane_g1_ParamLimits

0x36ac,	// (0x00005dd8) bg_hwr_side_pane_g1

0xcb2f,	// (0x0000f25b) cell_hwr_side_pane_ParamLimits

0xcb2f,	// (0x0000f25b) cell_hwr_side_pane

0xcb6a,	// (0x0000f296) fep_hwr_write_pane_g1_ParamLimits

0xcb6a,	// (0x0000f296) fep_hwr_write_pane_g1

0xcb77,	// (0x0000f2a3) fep_hwr_write_pane_g2_ParamLimits

0xcb77,	// (0x0000f2a3) fep_hwr_write_pane_g2

0xcb84,	// (0x0000f2b0) fep_hwr_write_pane_g3_ParamLimits

0xcb84,	// (0x0000f2b0) fep_hwr_write_pane_g3

0xcb92,	// (0x0000f2be) fep_hwr_write_pane_g4_ParamLimits

0xcb92,	// (0x0000f2be) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x0001224f) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x0001224f) fep_hwr_write_pane_g

0xcabe,	// (0x0000f1ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcabe,	// (0x0000f1ea) bg_fep_hwr_candidate_pane_g2

0xcba7,	// (0x0000f2d3) cell_hwr_candidate_pane_ParamLimits

0xcba7,	// (0x0000f2d3) cell_hwr_candidate_pane

0xcbe1,	// (0x0000f30d) fep_hwr_candidate_pane_g1_ParamLimits

0x3819,	// (0x00005f45) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3819,	// (0x00005f45) bg_popup_fep_shadow_pane_cp2

0x3974,	// (0x000060a0) fep_vkb_top_pane_g4_ParamLimits

0x3974,	// (0x000060a0) fep_vkb_top_pane_g4

0x39ba,	// (0x000060e6) fep_vkb_side_pane_g2_ParamLimits

0x39ba,	// (0x000060e6) fep_vkb_side_pane_g2

0xe35c,	// (0x00010a88) list_setting_pane_t4_ParamLimits

0xe35c,	// (0x00010a88) list_setting_pane_t4

0xe3d2,	// (0x00010afe) list_setting_number_pane_t5_ParamLimits

0xe3d2,	// (0x00010afe) list_setting_number_pane_t5

0xed04,	// (0x00011430) list_double_heading_pane_cp2_ParamLimits

0xed04,	// (0x00011430) list_double_heading_pane_cp2

0xf119,	// (0x00011845) list_double_heading_pane_g1_cp2_ParamLimits

0xf119,	// (0x00011845) list_double_heading_pane_g1_cp2

0x3d6e,	// (0x0000649a) list_double_heading_pane_g2_cp2_ParamLimits

0x3d6e,	// (0x0000649a) list_double_heading_pane_g2_cp2

0x3d82,	// (0x000064ae) list_double_heading_pane_t1_cp2_ParamLimits

0x3d82,	// (0x000064ae) list_double_heading_pane_t1_cp2

0x3d98,	// (0x000064c4) list_double_heading_pane_t2_cp2_ParamLimits

0x3d98,	// (0x000064c4) list_double_heading_pane_t2_cp2

0xd61a,	// (0x0000fd46) aid_value_unit2

0xbe2d,	// (0x0000e559) popup_preview_fixed_window

0xdaa8,	// (0x000101d4) bg_popup_preview_window_pane_cp02

0x3daa,	// (0x000064d6) list_preview_fixed_pane

0x3df0,	// (0x0000651c) list_empty_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_empty_pane_fp

0x3df0,	// (0x0000651c) list_single_cale_day_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_single_cale_day_pane_fp

0x3df0,	// (0x0000651c) list_single_graphic_heading_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_single_graphic_heading_pane_fp

0x3df0,	// (0x0000651c) list_single_graphic_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_single_graphic_pane_fp

0x3df0,	// (0x0000651c) list_single_heading_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_single_heading_pane_fp

0x3df0,	// (0x0000651c) list_single_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_single_pane_fp

0x3e04,	// (0x00006530) list_single_pane_fp_g1_ParamLimits

0x3e04,	// (0x00006530) list_single_pane_fp_g1

0xe1af,	// (0x000108db) list_single_pane_fp_g2_ParamLimits

0xe1af,	// (0x000108db) list_single_pane_fp_g2

0x3e10,	// (0x0000653c) list_single_pane_fp_g3_ParamLimits

0x3e10,	// (0x0000653c) list_single_pane_fp_g3

0x3e24,	// (0x00006550) list_single_pane_fp_g4_ParamLimits

0x3e24,	// (0x00006550) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x000122b6) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x000122b6) list_single_pane_fp_g

0x3e30,	// (0x0000655c) list_single_pane_fp_t1_ParamLimits

0x3e30,	// (0x0000655c) list_single_pane_fp_t1

0x3e47,	// (0x00006573) list_single_graphic_pane_fp_g1_ParamLimits

0x3e47,	// (0x00006573) list_single_graphic_pane_fp_g1

0x3e04,	// (0x00006530) list_single_graphic_pane_fp_g2_ParamLimits

0x3e04,	// (0x00006530) list_single_graphic_pane_fp_g2

0xe1af,	// (0x000108db) list_single_graphic_pane_fp_g3_ParamLimits

0xe1af,	// (0x000108db) list_single_graphic_pane_fp_g3

0x3e10,	// (0x0000653c) list_single_graphic_pane_fp_g4_ParamLimits

0x3e10,	// (0x0000653c) list_single_graphic_pane_fp_g4

0x3e24,	// (0x00006550) list_single_graphic_pane_fp_g5_ParamLimits

0x3e24,	// (0x00006550) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x000122bf) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x000122bf) list_single_graphic_pane_fp_g

0x3e53,	// (0x0000657f) list_single_graphic_pane_fp_t1_ParamLimits

0x3e53,	// (0x0000657f) list_single_graphic_pane_fp_t1

0x3e47,	// (0x00006573) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3e47,	// (0x00006573) list_single_graphic_heading_pane_fp_g1

0x3e04,	// (0x00006530) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x3e04,	// (0x00006530) list_single_graphic_heading_pane_fp_g2

0xe1af,	// (0x000108db) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe1af,	// (0x000108db) list_single_graphic_heading_pane_fp_g3

0x3e10,	// (0x0000653c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3e10,	// (0x0000653c) list_single_graphic_heading_pane_fp_g4

0x3e24,	// (0x00006550) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x3e24,	// (0x00006550) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000122bf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000122bf) list_single_graphic_heading_pane_fp_g

0x3e69,	// (0x00006595) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3e69,	// (0x00006595) list_single_graphic_heading_pane_fp_t1

0x3e7f,	// (0x000065ab) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3e7f,	// (0x000065ab) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x000122ca) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x000122ca) list_single_graphic_heading_pane_fp_t

0x3e91,	// (0x000065bd) list_single_cale_day_pane_fp_g1_ParamLimits

0x3e91,	// (0x000065bd) list_single_cale_day_pane_fp_g1

0x3ec9,	// (0x000065f5) list_single_cale_day_pane_fp_g2_ParamLimits

0x3ec9,	// (0x000065f5) list_single_cale_day_pane_fp_g2

0x3ed5,	// (0x00006601) list_single_cale_day_pane_fp_g3_ParamLimits

0x3ed5,	// (0x00006601) list_single_cale_day_pane_fp_g3

0x3efd,	// (0x00006629) list_single_cale_day_pane_fp_g4_ParamLimits

0x3efd,	// (0x00006629) list_single_cale_day_pane_fp_g4

0x3f21,	// (0x0000664d) list_single_cale_day_pane_fp_g5_ParamLimits

0x3f21,	// (0x0000664d) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x000122cf) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x000122cf) list_single_cale_day_pane_fp_g

0x3f45,	// (0x00006671) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f45,	// (0x00006671) list_single_cale_day_pane_fp_t1

0x3f6b,	// (0x00006697) list_single_cale_day_pane_fp_t2_ParamLimits

0x3f6b,	// (0x00006697) list_single_cale_day_pane_fp_t2

0x3f84,	// (0x000066b0) list_single_cale_day_pane_fp_t3_ParamLimits

0x3f84,	// (0x000066b0) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x000122da) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x000122da) list_single_cale_day_pane_fp_t

0x3e04,	// (0x00006530) list_empty_pane_fp_g1_ParamLimits

0x3e04,	// (0x00006530) list_empty_pane_fp_g1

0x3f9d,	// (0x000066c9) list_empty_pane_fp_t1

0x3fab,	// (0x000066d7) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x000122e1) list_empty_pane_fp_t

0x3e04,	// (0x00006530) list_single_heading_pane_fp_g1_ParamLimits

0x3e04,	// (0x00006530) list_single_heading_pane_fp_g1

0xe1af,	// (0x000108db) list_single_heading_pane_fp_g2_ParamLimits

0xe1af,	// (0x000108db) list_single_heading_pane_fp_g2

0x3e10,	// (0x0000653c) list_single_heading_pane_fp_g3_ParamLimits

0x3e10,	// (0x0000653c) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x000122e6) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x000122e6) list_single_heading_pane_fp_g

0x3fb9,	// (0x000066e5) list_single_heading_pane_fp_t1_ParamLimits

0x3fb9,	// (0x000066e5) list_single_heading_pane_fp_t1

0x3fcb,	// (0x000066f7) list_single_heading_pane_fp_t2_ParamLimits

0x3fcb,	// (0x000066f7) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x000122ed) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x000122ed) list_single_heading_pane_fp_t

0xe870,	// (0x00010f9c) aid_size_cell_fast

0xda0f,	// (0x0001013b) soft_indicator_pane_cp1_t1

0xe8ad,	// (0x00010fd9) cell_app_pane_cp2_ParamLimits

0xe8ad,	// (0x00010fd9) cell_app_pane_cp2

0xca31,	// (0x0000f15d) fep_hwr_candidate_drop_down_list_pane

0xcbfb,	// (0x0000f327) fep_hwr_candidate_pane_g3_ParamLimits

0xcbfb,	// (0x0000f327) fep_hwr_candidate_pane_g3

0xb1ae,	// (0x0000d8da) fep_hwr_candidate_pane_g4_ParamLimits

0xb1ae,	// (0x0000d8da) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x0001225c) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x0001225c) fep_hwr_candidate_pane_g

0x388d,	// (0x00005fb9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x388d,	// (0x00005fb9) fep_vkb_candidate_drop_down_list_pane

0x3c5c,	// (0x00006388) fep_vkb_candidate_pane_g3

0x3c64,	// (0x00006390) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x00012289) fep_vkb_candidate_pane_g

0xcc62,	// (0x0000f38e) cell_hwr_candidate_pane_g1_ParamLimits

0xcc70,	// (0x0000f39c) cell_hwr_candidate_pane_g3_ParamLimits

0xcc70,	// (0x0000f39c) cell_hwr_candidate_pane_g3

0x6419,	// (0x00008b45) cell_hwr_candidate_pane_g4_ParamLimits

0x6419,	// (0x00008b45) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x000122a8) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x000122a8) cell_hwr_candidate_pane_g

0x3d2a,	// (0x00006456) cell_vkb_candidate_pane_g3_ParamLimits

0x3d2a,	// (0x00006456) cell_vkb_candidate_pane_g3

0x3d45,	// (0x00006471) cell_vkb_candidate_pane_g4_ParamLimits

0x3d45,	// (0x00006471) cell_vkb_candidate_pane_g4

0x3fe1,	// (0x0000670d) cell_app_pane_cp2_g1_ParamLimits

0x3fe1,	// (0x0000670d) cell_app_pane_cp2_g1

0x3fff,	// (0x0000672b) cell_app_pane_cp2_g2_ParamLimits

0x3fff,	// (0x0000672b) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x000122f2) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x000122f2) cell_app_pane_cp2_g

0x400b,	// (0x00006737) cell_app_pane_cp2_t1_ParamLimits

0x400b,	// (0x00006737) cell_app_pane_cp2_t1

0xe517,	// (0x00010c43) grid_highlight_pane_cp1_ParamLimits

0xe517,	// (0x00010c43) grid_highlight_pane_cp1

0xccae,	// (0x0000f3da) cell_hwr_candidate_pane_cp1_ParamLimits

0xccae,	// (0x0000f3da) cell_hwr_candidate_pane_cp1

0xcc62,	// (0x0000f38e) fep_hwr_candidate_drop_down_list_pane_g1

0xcccc,	// (0x0000f3f8) fep_hwr_candidate_drop_down_list_pane_g2

0xccd9,	// (0x0000f405) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x000122f7) fep_hwr_candidate_drop_down_list_pane_g

0xcce6,	// (0x0000f412) fep_hwr_candidate_drop_down_list_scroll_pane

0xccef,	// (0x0000f41b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xccef,	// (0x0000f41b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xccfc,	// (0x0000f428) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xccfc,	// (0x0000f428) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xcd09,	// (0x0000f435) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xcd09,	// (0x0000f435) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xcd16,	// (0x0000f442) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcd16,	// (0x0000f442) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xcd31,	// (0x0000f45d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcd31,	// (0x0000f45d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xcd4c,	// (0x0000f478) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcd4c,	// (0x0000f478) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xcd67,	// (0x0000f493) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcd67,	// (0x0000f493) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xcd82,	// (0x0000f4ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcd82,	// (0x0000f4ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x000122fe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x000122fe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x40d6,	// (0x00006802) cell_vkb_candidate_pane_cp1_ParamLimits

0x40d6,	// (0x00006802) cell_vkb_candidate_pane_cp1

0x3974,	// (0x000060a0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3974,	// (0x000060a0) fep_vkb_candidate_drop_down_list_pane_g1

0x403b,	// (0x00006767) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x403b,	// (0x00006767) fep_vkb_candidate_drop_down_list_pane_g2

0x4048,	// (0x00006774) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4048,	// (0x00006774) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x0001230f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe3,	// (0x0001230f) fep_vkb_candidate_drop_down_list_pane_g

0x40f9,	// (0x00006825) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x40f9,	// (0x00006825) fep_vkb_candidate_drop_down_list_scroll_pane

0x4106,	// (0x00006832) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4106,	// (0x00006832) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4113,	// (0x0000683f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4113,	// (0x0000683f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x411f,	// (0x0000684b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x411f,	// (0x0000684b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x3ccb,	// (0x000063f7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3ccb,	// (0x000063f7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x3cec,	// (0x00006418) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3cec,	// (0x00006418) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x412b,	// (0x00006857) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x412b,	// (0x00006857) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x414c,	// (0x00006878) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x414c,	// (0x00006878) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x416d,	// (0x00006899) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x416d,	// (0x00006899) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x00012316) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x00012316) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd72b,	// (0x0000fe57) title_pane_g1_ParamLimits

0xd738,	// (0x0000fe64) title_pane_g2_ParamLimits

0xf592,	// (0x00011cbe) title_pane_g_ParamLimits

0xecca,	// (0x000113f6) aid_call2_pane

0xecc2,	// (0x000113ee) aid_call_pane

0xecd2,	// (0x000113fe) popup_clock_analogue_window_g1

0xecd2,	// (0x000113fe) popup_clock_analogue_window_g2

0xc107,	// (0x0000e833) popup_clock_analogue_window_g3

0xc110,	// (0x0000e83c) popup_clock_analogue_window_g4

0xd63a,	// (0x0000fd66) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00011e63) popup_clock_analogue_window_g

0xc118,	// (0x0000e844) popup_clock_analogue_window_t1

0xc126,	// (0x0000e852) clock_digital_number_pane_ParamLimits

0xc126,	// (0x0000e852) clock_digital_number_pane

0xc132,	// (0x0000e85e) clock_digital_number_pane_cp02_ParamLimits

0xc132,	// (0x0000e85e) clock_digital_number_pane_cp02

0xc13e,	// (0x0000e86a) clock_digital_number_pane_cp03_ParamLimits

0xc13e,	// (0x0000e86a) clock_digital_number_pane_cp03

0xc14a,	// (0x0000e876) clock_digital_number_pane_cp04_ParamLimits

0xc14a,	// (0x0000e876) clock_digital_number_pane_cp04

0xc156,	// (0x0000e882) clock_digital_separator_pane_ParamLimits

0xc156,	// (0x0000e882) clock_digital_separator_pane

0xc162,	// (0x0000e88e) popup_clock_digital_window_t1_ParamLimits

0xc162,	// (0x0000e88e) popup_clock_digital_window_t1

0xd63a,	// (0x0000fd66) clock_digital_number_pane_g1

0xd63a,	// (0x0000fd66) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00011e6e) clock_digital_number_pane_g

0xd63a,	// (0x0000fd66) clock_digital_separator_pane_g1

0xd63a,	// (0x0000fd66) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00011e6e) clock_digital_separator_pane_g

0x05c7,	// (0x00002cf3) aid_fill_nsta_ParamLimits

0x06e9,	// (0x00002e15) indicator_nsta_pane_ParamLimits

0x085c,	// (0x00002f88) popup_clock_analogue_window

0x085c,	// (0x00002f88) popup_clock_digital_window

0xd801,	// (0x0000ff2d) grid_indicator_nsta_pane_ParamLimits

0x2f8a,	// (0x000056b6) clock_nsta_pane_t2

0x0001,

0xfabd,	// (0x000121e9) clock_nsta_pane_t

0xc0cb,	// (0x0000e7f7) aid_size_max_handle

0xc0d5,	// (0x0000e801) aid_size_min_handle

0xf2a4,	// (0x000119d0) editor_scroll_pane

0x4188,	// (0x000068b4) ex_editor_pane

0xe7de,	// (0x00010f0a) scroll_pane_cp13

0xdf9a,	// (0x000106c6) scroll_pane_cp14

0xecfc,	// (0x00011428) scroll_pane_cp36

0xed14,	// (0x00011440) list_single_graphic_hl_pane_cp2_ParamLimits

0xed14,	// (0x00011440) list_single_graphic_hl_pane_cp2

0x238b,	// (0x00004ab7) list_single_graphic_hl_pane_ParamLimits

0x238b,	// (0x00004ab7) list_single_graphic_hl_pane

0x4190,	// (0x000068bc) aid_size_min_hl_cp1

0x4199,	// (0x000068c5) list_highlight_pane_cp34_ParamLimits

0x4199,	// (0x000068c5) list_highlight_pane_cp34

0x41aa,	// (0x000068d6) list_single_graphic_hl_pane_g1_ParamLimits

0x41aa,	// (0x000068d6) list_single_graphic_hl_pane_g1

0x41b7,	// (0x000068e3) list_single_graphic_hl_pane_g2_ParamLimits

0x41b7,	// (0x000068e3) list_single_graphic_hl_pane_g2

0x41b7,	// (0x000068e3) list_single_graphic_hl_pane_g3_ParamLimits

0x41b7,	// (0x000068e3) list_single_graphic_hl_pane_g3

0xf119,	// (0x00011845) list_single_graphic_hl_pane_g4_ParamLimits

0xf119,	// (0x00011845) list_single_graphic_hl_pane_g4

0x3d6e,	// (0x0000649a) list_single_graphic_hl_pane_g5_ParamLimits

0x3d6e,	// (0x0000649a) list_single_graphic_hl_pane_g5

0x0004,

0xfbfb,	// (0x00012327) list_single_graphic_hl_pane_g_ParamLimits

0xfbfb,	// (0x00012327) list_single_graphic_hl_pane_g

0x41c3,	// (0x000068ef) list_single_graphic_hl_pane_t1_ParamLimits

0x41c3,	// (0x000068ef) list_single_graphic_hl_pane_t1

0x41d9,	// (0x00006905) aid_size_min_hl_cp2

0x41e2,	// (0x0000690e) list_highlight_pane_cp34_cp2_ParamLimits

0x41e2,	// (0x0000690e) list_highlight_pane_cp34_cp2

0x41aa,	// (0x000068d6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x41aa,	// (0x000068d6) list_single_graphic_hl_pane_g1_cp2

0x41ef,	// (0x0000691b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x41ef,	// (0x0000691b) list_single_graphic_hl_pane_g2_cp2

0x41fb,	// (0x00006927) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x41fb,	// (0x00006927) list_single_graphic_hl_pane_g3_cp2

0xf119,	// (0x00011845) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf119,	// (0x00011845) list_single_graphic_hl_pane_g4_cp2

0x3d6e,	// (0x0000649a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x3d6e,	// (0x0000649a) list_single_graphic_hl_pane_g5_cp2

0xc3ed,	// (0x0000eb19) control_pane_g4_ParamLimits

0xc3ed,	// (0x0000eb19) control_pane_g4

0x0111,	// (0x0000283d) bg_popup_sub_pane_cp10_ParamLimits

0x353e,	// (0x00005c6a) list_choice_list_pane_ParamLimits

0x354d,	// (0x00005c79) scroll_pane_cp23

0xdaa8,	// (0x000101d4) bg_popup_preview_window_pane_cp02_ParamLimits

0x3daa,	// (0x000064d6) list_preview_fixed_pane_ParamLimits

0x3dc0,	// (0x000064ec) list_preview_fixed_pane_cp_ParamLimits

0x3dc0,	// (0x000064ec) list_preview_fixed_pane_cp

0x3dcc,	// (0x000064f8) popup_preview_fixed_window_g1_ParamLimits

0x3dcc,	// (0x000064f8) popup_preview_fixed_window_g1

0x3dd8,	// (0x00006504) popup_preview_fixed_window_g2_ParamLimits

0x3dd8,	// (0x00006504) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x000122af) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x000122af) popup_preview_fixed_window_g

0xc05b,	// (0x0000e787) aid_navi_side_left_pane_ParamLimits

0xc06b,	// (0x0000e797) aid_navi_side_right_pane_ParamLimits

0xc07a,	// (0x0000e7a6) navi_icon_pane_stacon_ParamLimits

0xc08a,	// (0x0000e7b6) navi_navi_pane_stacon_ParamLimits

0xc07a,	// (0x0000e7a6) navi_text_pane_stacon_ParamLimits

0xd630,	// (0x0000fd5c) main_text_info_pane

0x421d,	// (0x00006949) listscroll_text_info_pane

0x4225,	// (0x00006951) list_text_info_pane_ParamLimits

0x4225,	// (0x00006951) list_text_info_pane

0x4234,	// (0x00006960) scroll_pane_cp24_ParamLimits

0x4234,	// (0x00006960) scroll_pane_cp24

0x4252,	// (0x0000697e) list_text_info_pane_t1_ParamLimits

0x4252,	// (0x0000697e) list_text_info_pane_t1

0x0159,	// (0x00002885) popup_fast_swap2_window_ParamLimits

0x0159,	// (0x00002885) popup_fast_swap2_window

0x426f,	// (0x0000699b) aid_size_cell_fast2

0xd630,	// (0x0000fd5c) bg_popup_window_pane_cp17

0x107c,	// (0x000037a8) heading_pane_cp2

0xdd1c,	// (0x00010448) listscroll_fast2_pane

0x4279,	// (0x000069a5) grid_fast2_pane

0x4281,	// (0x000069ad) listscroll_fast2_pane_g1

0x4289,	// (0x000069b5) listscroll_fast2_pane_g2

0x0001,

0xfc06,	// (0x00012332) listscroll_fast2_pane_g

0xe7de,	// (0x00010f0a) scroll_pane_cp26

0x4291,	// (0x000069bd) cell_fast2_pane_ParamLimits

0x4291,	// (0x000069bd) cell_fast2_pane

0x42a7,	// (0x000069d3) cell_fast2_pane_g1

0x42b0,	// (0x000069dc) cell_fast2_pane_g2

0x42b9,	// (0x000069e5) cell_fast2_pane_g3

0x0002,

0xfc0b,	// (0x00012337) cell_fast2_pane_g

0xddf3,	// (0x0001051f) grid_highlight_pane_cp9

0xde08,	// (0x00010534) main_eswt_pane_ParamLimits

0xde08,	// (0x00010534) main_eswt_pane

0x4249,	// (0x00006975) list_single_text_info_pane

0x42c1,	// (0x000069ed) eswt_ctrl_button_pane

0x42c1,	// (0x000069ed) eswt_ctrl_canvas_pane

0x42c9,	// (0x000069f5) eswt_ctrl_combo_pane

0x42c1,	// (0x000069ed) eswt_ctrl_default_pane

0x42c1,	// (0x000069ed) eswt_ctrl_label_pane

0x42d1,	// (0x000069fd) eswt_ctrl_wait_pane

0x42d9,	// (0x00006a05) eswt_shell_pane

0xd630,	// (0x0000fd5c) listscroll_eswt_app_pane

0x42f5,	// (0x00006a21) popup_eswt_tasktip_window_ParamLimits

0x42f5,	// (0x00006a21) popup_eswt_tasktip_window

0x0c69,	// (0x00003395) bg_popup_window_pane_cp18

0x4306,	// (0x00006a32) eswt_control_pane_g1_ParamLimits

0x4306,	// (0x00006a32) eswt_control_pane_g1

0x4313,	// (0x00006a3f) eswt_control_pane_g2_ParamLimits

0x4313,	// (0x00006a3f) eswt_control_pane_g2

0x4320,	// (0x00006a4c) eswt_control_pane_g3_ParamLimits

0x4320,	// (0x00006a4c) eswt_control_pane_g3

0x432d,	// (0x00006a59) eswt_control_pane_g4_ParamLimits

0x432d,	// (0x00006a59) eswt_control_pane_g4

0x0003,

0xfc12,	// (0x0001233e) eswt_control_pane_g_ParamLimits

0xfc12,	// (0x0001233e) eswt_control_pane_g

0xe517,	// (0x00010c43) bg_button_pane_ParamLimits

0xe517,	// (0x00010c43) bg_button_pane

0xde08,	// (0x00010534) common_borders_pane_copy2_ParamLimits

0xde08,	// (0x00010534) common_borders_pane_copy2

0x433a,	// (0x00006a66) control_button_pane_g1_ParamLimits

0x433a,	// (0x00006a66) control_button_pane_g1

0x4346,	// (0x00006a72) control_button_pane_g2_ParamLimits

0x4346,	// (0x00006a72) control_button_pane_g2

0x4352,	// (0x00006a7e) control_button_pane_g3_ParamLimits

0x4352,	// (0x00006a7e) control_button_pane_g3

0x0002,

0xfc1b,	// (0x00012347) control_button_pane_g_ParamLimits

0xfc1b,	// (0x00012347) control_button_pane_g

0x4366,	// (0x00006a92) control_button_pane_t1

0x4374,	// (0x00006aa0) control_button_pane_t2

0x0001,

0xfc22,	// (0x0001234e) control_button_pane_t

0x0adf,	// (0x0000320b) bg_button_pane_g1

0x0ae7,	// (0x00003213) bg_button_pane_g2

0x0aef,	// (0x0000321b) bg_button_pane_g3

0x0af7,	// (0x00003223) bg_button_pane_g4

0x0aff,	// (0x0000322b) bg_button_pane_g5

0x0b07,	// (0x00003233) bg_button_pane_g6

0x0b0f,	// (0x0000323b) bg_button_pane_g7

0x0b17,	// (0x00003243) bg_button_pane_g8

0x0b1f,	// (0x0000324b) bg_button_pane_g9

0x0008,

0xf88e,	// (0x00011fba) bg_button_pane_g

0x34f9,	// (0x00005c25) common_borders_pane_ParamLimits

0x34f9,	// (0x00005c25) common_borders_pane

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy1_ParamLimits

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy1

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy1_ParamLimits

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy1

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy1_ParamLimits

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy1

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy1_ParamLimits

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy1

0x3534,	// (0x00005c60) bg_eswt_ctrl_canvas_pane_g1

0x34f9,	// (0x00005c25) common_borders_pane_cp2_ParamLimits

0x34f9,	// (0x00005c25) common_borders_pane_cp2

0x34f9,	// (0x00005c25) common_borders_pane_cp3_ParamLimits

0x34f9,	// (0x00005c25) common_borders_pane_cp3

0x4382,	// (0x00006aae) separator_horizontal_pane

0xeb0f,	// (0x0001123b) separator_vertical_pane

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy2_ParamLimits

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy2

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy2_ParamLimits

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy2

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy2_ParamLimits

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy2

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy2_ParamLimits

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy2

0xd630,	// (0x0000fd5c) common_borders_pane_cp4

0x438a,	// (0x00006ab6) separator_horizontal_pane_g1

0x4393,	// (0x00006abf) separator_horizontal_pane_g2

0x439c,	// (0x00006ac8) separator_horizontal_pane_g3

0x0002,

0xfc27,	// (0x00012353) separator_horizontal_pane_g

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy3_ParamLimits

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy3

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy3_ParamLimits

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy3

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy3_ParamLimits

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy3

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy3_ParamLimits

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy3

0xd630,	// (0x0000fd5c) common_borders_pane_cp5

0x43a5,	// (0x00006ad1) separator_vertical_pane_g1

0x43ae,	// (0x00006ada) separator_vertical_pane_g2

0x43b7,	// (0x00006ae3) separator_vertical_pane_g3

0x0002,

0xfc2e,	// (0x0001235a) separator_vertical_pane_g

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy4_ParamLimits

0x4306,	// (0x00006a32) eswt_control_pane_g1_copy4

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy4_ParamLimits

0x4313,	// (0x00006a3f) eswt_control_pane_g2_copy4

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy4_ParamLimits

0x4320,	// (0x00006a4c) eswt_control_pane_g3_copy4

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy4_ParamLimits

0x432d,	// (0x00006a59) eswt_control_pane_g4_copy4

0x43c0,	// (0x00006aec) eswt_ctrl_combo_button_pane

0x43c8,	// (0x00006af4) eswt_ctrl_input_pane

0x43d0,	// (0x00006afc) popup_choice_list_window_cp70

0x43d8,	// (0x00006b04) eswt_ctrl_input_pane_t1

0xd630,	// (0x0000fd5c) input_focus_pane_cp70

0x34f9,	// (0x00005c25) bg_button_pane_cp70_ParamLimits

0x34f9,	// (0x00005c25) bg_button_pane_cp70

0x43e6,	// (0x00006b12) eswt_ctrl_combo_button_pane_g1

0x43ee,	// (0x00006b1a) wait_bar_pane_cp70

0x0c69,	// (0x00003395) bg_popup_window_pane_cp70_ParamLimits

0x0c69,	// (0x00003395) bg_popup_window_pane_cp70

0x43f6,	// (0x00006b22) popup_eswt_tasktip_window_t1

0x440c,	// (0x00006b38) wait_bar_pane_cp71_ParamLimits

0x440c,	// (0x00006b38) wait_bar_pane_cp71

0x4418,	// (0x00006b44) grid_eswt_app_pane

0xeb06,	// (0x00011232) scroll_pane_cp70

0x4421,	// (0x00006b4d) cell_eswt_app_pane_ParamLimits

0x4421,	// (0x00006b4d) cell_eswt_app_pane

0x4449,	// (0x00006b75) cell_eswt_app_pane_g1_ParamLimits

0x4449,	// (0x00006b75) cell_eswt_app_pane_g1

0x4478,	// (0x00006ba4) cell_eswt_app_pane_g2_ParamLimits

0x4478,	// (0x00006ba4) cell_eswt_app_pane_g2

0x0001,

0xfc35,	// (0x00012361) cell_eswt_app_pane_g_ParamLimits

0xfc35,	// (0x00012361) cell_eswt_app_pane_g

0x44a1,	// (0x00006bcd) cell_eswt_app_pane_t1_ParamLimits

0x44a1,	// (0x00006bcd) cell_eswt_app_pane_t1

0x44d3,	// (0x00006bff) grid_highlight_pane_cp70_ParamLimits

0x44d3,	// (0x00006bff) grid_highlight_pane_cp70

0xdfae,	// (0x000106da) set_content_pane_g1

0xf540,	// (0x00011c6c) status_small_volume_pane

0xcd9d,	// (0x0000f4c9) status_small_volume_pane_g1

0xcda5,	// (0x0000f4d1) volume_small2_pane

0xcdae,	// (0x0000f4da) volume_small2_pane_g1

0xcdb7,	// (0x0000f4e3) volume_small2_pane_g2

0xcdc0,	// (0x0000f4ec) volume_small2_pane_g3

0xcdc9,	// (0x0000f4f5) volume_small2_pane_g4

0xcdd2,	// (0x0000f4fe) volume_small2_pane_g5

0xcddb,	// (0x0000f507) volume_small2_pane_g6

0xcde4,	// (0x0000f510) volume_small2_pane_g7

0xcded,	// (0x0000f519) volume_small2_pane_g8

0xcdf6,	// (0x0000f522) volume_small2_pane_g9

0xcdff,	// (0x0000f52b) volume_small2_pane_g10

0x0009,

0xfc3a,	// (0x00012366) volume_small2_pane_g

0x3ab6,	// (0x000061e2) fep_vkb_top_text_pane_g1_ParamLimits

0x3ad1,	// (0x000061fd) fep_vkb_top_text_pane_t1_ParamLimits

0x3de4,	// (0x00006510) popup_preview_fixed_window_g3_ParamLimits

0x3de4,	// (0x00006510) popup_preview_fixed_window_g3

0x051b,	// (0x00002c47) popup_toolbar_trans_pane

0x214f,	// (0x0000487b) aid_height_set_list_ParamLimits

0x215b,	// (0x00004887) aid_size_parent_ParamLimits

0x0111,	// (0x0000283d) list_highlight_pane_cp2_ParamLimits

0xdfae,	// (0x000106da) set_content_pane_g1_ParamLimits

0x23a0,	// (0x00004acc) list_single_image_pane_ParamLimits

0x23a0,	// (0x00004acc) list_single_image_pane

0x454a,	// (0x00006c76) aid_size_cell_image_ParamLimits

0x454a,	// (0x00006c76) aid_size_cell_image

0x4557,	// (0x00006c83) grid_single_image_pane_ParamLimits

0x4557,	// (0x00006c83) grid_single_image_pane

0xdfae,	// (0x000106da) list_single_image_pane_g1_ParamLimits

0xdfae,	// (0x000106da) list_single_image_pane_g1

0xe53d,	// (0x00010c69) list_single_image_pane_g2_ParamLimits

0xe53d,	// (0x00010c69) list_single_image_pane_g2

0x0001,

0xfc4f,	// (0x0001237b) list_single_image_pane_g_ParamLimits

0xfc4f,	// (0x0001237b) list_single_image_pane_g

0x22de,	// (0x00004a0a) list_single_image_pane_t1_ParamLimits

0x22de,	// (0x00004a0a) list_single_image_pane_t1

0x4563,	// (0x00006c8f) cell_image_list_pane_ParamLimits

0x4563,	// (0x00006c8f) cell_image_list_pane

0x4576,	// (0x00006ca2) cell_image_list_pane_g1

0x457f,	// (0x00006cab) cell_image_list_pane_g2

0x0001,

0xfc54,	// (0x00012380) cell_image_list_pane_g

0x4588,	// (0x00006cb4) aid_size_cell_tb_trans_pane

0xe517,	// (0x00010c43) bg_tb_trans_pane

0x459a,	// (0x00006cc6) grid_tb_trans_pane

0x0adf,	// (0x0000320b) bg_tb_trans_pane_g1

0x0ae7,	// (0x00003213) bg_tb_trans_pane_g2

0x0aef,	// (0x0000321b) bg_tb_trans_pane_g3

0x0af7,	// (0x00003223) bg_tb_trans_pane_g4

0x0aff,	// (0x0000322b) bg_tb_trans_pane_g5

0x0b17,	// (0x00003243) bg_tb_trans_pane_g6

0x0b1f,	// (0x0000324b) bg_tb_trans_pane_g7

0x0b07,	// (0x00003233) bg_tb_trans_pane_g8

0x0b0f,	// (0x0000323b) bg_tb_trans_pane_g9

0x0008,

0xfc59,	// (0x00012385) bg_tb_trans_pane_g

0x45ae,	// (0x00006cda) cell_toolbar_trans_pane_ParamLimits

0x45ae,	// (0x00006cda) cell_toolbar_trans_pane

0x3534,	// (0x00005c60) cell_toolbar_trans_pane_g1

0x3171,	// (0x0000589d) list_form2_midp_pane_t1

0x317f,	// (0x000058ab) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x00012222) list_form2_midp_pane_t

0x318d,	// (0x000058b9) scroll_pane_cp51_ParamLimits

0x338e,	// (0x00005aba) form2_midp_wait_pane_g1

0x3397,	// (0x00005ac3) form2_midp_wait_pane_g2

0x33a0,	// (0x00005acc) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x00012237) form2_midp_wait_pane_g

0xd801,	// (0x0000ff2d) list_highlight_pane_cp21_ParamLimits

0x33c0,	// (0x00005aec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x33cf,	// (0x00005afb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2349,	// (0x00004a75) list_single_2graphic_im_pane_ParamLimits

0x2349,	// (0x00004a75) list_single_2graphic_im_pane

0x45d4,	// (0x00006d00) list_single_2graphic_im_pane_g1_ParamLimits

0x45d4,	// (0x00006d00) list_single_2graphic_im_pane_g1

0x45e5,	// (0x00006d11) list_single_2graphic_im_pane_g2_ParamLimits

0x45e5,	// (0x00006d11) list_single_2graphic_im_pane_g2

0x45f1,	// (0x00006d1d) list_single_2graphic_im_pane_g3_ParamLimits

0x45f1,	// (0x00006d1d) list_single_2graphic_im_pane_g3

0x0003,

0xfc6c,	// (0x00012398) list_single_2graphic_im_pane_g_ParamLimits

0xfc6c,	// (0x00012398) list_single_2graphic_im_pane_g

0x4611,	// (0x00006d3d) list_single_2graphic_im_pane_t1_ParamLimits

0x4611,	// (0x00006d3d) list_single_2graphic_im_pane_t1

0x3df0,	// (0x0000651c) list_single_graphic_2heading_pane_fp_ParamLimits

0x3df0,	// (0x0000651c) list_single_graphic_2heading_pane_fp

0x3e47,	// (0x00006573) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3e47,	// (0x00006573) list_single_graphic_2heading_pane_fp_g1

0x3e04,	// (0x00006530) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x3e04,	// (0x00006530) list_single_graphic_2heading_pane_fp_g2

0xe1af,	// (0x000108db) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe1af,	// (0x000108db) list_single_graphic_2heading_pane_fp_g3

0x3e10,	// (0x0000653c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3e10,	// (0x0000653c) list_single_graphic_2heading_pane_fp_g4

0x3e24,	// (0x00006550) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x3e24,	// (0x00006550) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000122bf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000122bf) list_single_graphic_2heading_pane_fp_g

0x4642,	// (0x00006d6e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4642,	// (0x00006d6e) list_single_graphic_2heading_pane_fp_t1

0x3e7f,	// (0x000065ab) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3e7f,	// (0x000065ab) list_single_graphic_2heading_pane_fp_t2

0x4658,	// (0x00006d84) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4658,	// (0x00006d84) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc75,	// (0x000123a1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc75,	// (0x000123a1) list_single_graphic_2heading_pane_fp_t

0x3757,	// (0x00005e83) fep_hwr_write_pane_g5_ParamLimits

0x3757,	// (0x00005e83) fep_hwr_write_pane_g5

0x3763,	// (0x00005e8f) fep_hwr_write_pane_g6_ParamLimits

0x3763,	// (0x00005e8f) fep_hwr_write_pane_g6

0x42d9,	// (0x00006a05) eswt_shell_pane_ParamLimits

0x0c69,	// (0x00003395) bg_popup_window_pane_cp18_ParamLimits

0x2049,	// (0x00004775) heading_pane_cp70

0x43f6,	// (0x00006b22) popup_eswt_tasktip_window_t1_ParamLimits

0x0609,	// (0x00002d35) aid_touch_tab_arrow_left

0x0615,	// (0x00002d41) aid_touch_tab_arrow_right

0xd749,	// (0x0000fe75) title_pane_g3_ParamLimits

0xd749,	// (0x0000fe75) title_pane_g3

0xe415,	// (0x00010b41) set_value_pane_g1

0x051b,	// (0x00002c47) popup_toolbar_trans_pane_ParamLimits

0x4588,	// (0x00006cb4) aid_size_cell_tb_trans_pane_ParamLimits

0xe517,	// (0x00010c43) bg_tb_trans_pane_ParamLimits

0x459a,	// (0x00006cc6) grid_tb_trans_pane_ParamLimits

0xdaa8,	// (0x000101d4) cont_note_pane_ParamLimits

0xdaa8,	// (0x000101d4) cont_note_pane

0xde08,	// (0x00010534) cont_snote2_single_text_pane_ParamLimits

0xde08,	// (0x00010534) cont_snote2_single_text_pane

0xde08,	// (0x00010534) cont_snote2_single_graphic_pane_ParamLimits

0xde08,	// (0x00010534) cont_snote2_single_graphic_pane

0x1255,	// (0x00003981) cont_note_wait_pane_ParamLimits

0x1255,	// (0x00003981) cont_note_wait_pane

0x1255,	// (0x00003981) cont_note_image_pane_ParamLimits

0x1255,	// (0x00003981) cont_note_image_pane

0x466e,	// (0x00006d9a) popup_note2_window_g1_ParamLimits

0x466e,	// (0x00006d9a) popup_note2_window_g1

0x469f,	// (0x00006dcb) popup_note2_window_t1_ParamLimits

0x469f,	// (0x00006dcb) popup_note2_window_t1

0x46e4,	// (0x00006e10) popup_note2_window_t2_ParamLimits

0x46e4,	// (0x00006e10) popup_note2_window_t2

0x4729,	// (0x00006e55) popup_note2_window_t3_ParamLimits

0x4729,	// (0x00006e55) popup_note2_window_t3

0x476e,	// (0x00006e9a) popup_note2_window_t4_ParamLimits

0x476e,	// (0x00006e9a) popup_note2_window_t4

0xdb58,	// (0x00010284) popup_note2_window_t5_ParamLimits

0xdb58,	// (0x00010284) popup_note2_window_t5

0x0004,

0xfc81,	// (0x000123ad) popup_note2_window_t_ParamLimits

0xfc81,	// (0x000123ad) popup_note2_window_t

0x479d,	// (0x00006ec9) popup_note2_image_window_g1_ParamLimits

0x479d,	// (0x00006ec9) popup_note2_image_window_g1

0x47a9,	// (0x00006ed5) popup_note2_image_window_g2_ParamLimits

0x47a9,	// (0x00006ed5) popup_note2_image_window_g2

0x0001,

0xfc8c,	// (0x000123b8) popup_note2_image_window_g_ParamLimits

0xfc8c,	// (0x000123b8) popup_note2_image_window_g

0x47bb,	// (0x00006ee7) popup_note2_image_window_t1_ParamLimits

0x47bb,	// (0x00006ee7) popup_note2_image_window_t1

0x47d3,	// (0x00006eff) popup_note2_image_window_t2_ParamLimits

0x47d3,	// (0x00006eff) popup_note2_image_window_t2

0x47eb,	// (0x00006f17) popup_note2_image_window_t3_ParamLimits

0x47eb,	// (0x00006f17) popup_note2_image_window_t3

0x0002,

0xfc91,	// (0x000123bd) popup_note2_image_window_t_ParamLimits

0xfc91,	// (0x000123bd) popup_note2_image_window_t

0x1263,	// (0x0000398f) popup_note2_wait_window_g1_ParamLimits

0x1263,	// (0x0000398f) popup_note2_wait_window_g1

0x126f,	// (0x0000399b) popup_note2_wait_window_g2_ParamLimits

0x126f,	// (0x0000399b) popup_note2_wait_window_g2

0x127b,	// (0x000039a7) popup_note2_wait_window_g3_ParamLimits

0x127b,	// (0x000039a7) popup_note2_wait_window_g3

0x0002,

0xf870,	// (0x00011f9c) popup_note2_wait_window_g_ParamLimits

0xf870,	// (0x00011f9c) popup_note2_wait_window_g

0x4807,	// (0x00006f33) popup_note2_wait_window_t1_ParamLimits

0x4807,	// (0x00006f33) popup_note2_wait_window_t1

0x4825,	// (0x00006f51) popup_note2_wait_window_t2_ParamLimits

0x4825,	// (0x00006f51) popup_note2_wait_window_t2

0x4843,	// (0x00006f6f) popup_note2_wait_window_t3_ParamLimits

0x4843,	// (0x00006f6f) popup_note2_wait_window_t3

0x4855,	// (0x00006f81) popup_note2_wait_window_t4_ParamLimits

0x4855,	// (0x00006f81) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x000123c4) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x000123c4) popup_note2_wait_window_t

0x4867,	// (0x00006f93) wait_bar2_pane_ParamLimits

0x4867,	// (0x00006f93) wait_bar2_pane

0x487f,	// (0x00006fab) popup_snote2_single_text_window_g1_ParamLimits

0x487f,	// (0x00006fab) popup_snote2_single_text_window_g1

0x48a7,	// (0x00006fd3) popup_snote2_single_text_window_t1_ParamLimits

0x48a7,	// (0x00006fd3) popup_snote2_single_text_window_t1

0x48f3,	// (0x0000701f) popup_snote2_single_text_window_t2_ParamLimits

0x48f3,	// (0x0000701f) popup_snote2_single_text_window_t2

0x493f,	// (0x0000706b) popup_snote2_single_text_window_t3_ParamLimits

0x493f,	// (0x0000706b) popup_snote2_single_text_window_t3

0x4980,	// (0x000070ac) popup_snote2_single_text_window_t4_ParamLimits

0x4980,	// (0x000070ac) popup_snote2_single_text_window_t4

0x49b6,	// (0x000070e2) popup_snote2_single_text_window_t5_ParamLimits

0x49b6,	// (0x000070e2) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x000123cd) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x000123cd) popup_snote2_single_text_window_t

0x49e1,	// (0x0000710d) popup_snote2_single_graphic_window_g1_ParamLimits

0x49e1,	// (0x0000710d) popup_snote2_single_graphic_window_g1

0x4a09,	// (0x00007135) popup_snote2_single_graphic_window_g2_ParamLimits

0x4a09,	// (0x00007135) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x000123d8) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x000123d8) popup_snote2_single_graphic_window_g

0x4a31,	// (0x0000715d) popup_snote2_single_graphic_window_t1_ParamLimits

0x4a31,	// (0x0000715d) popup_snote2_single_graphic_window_t1

0x4a7d,	// (0x000071a9) popup_snote2_single_graphic_window_t2_ParamLimits

0x4a7d,	// (0x000071a9) popup_snote2_single_graphic_window_t2

0x493f,	// (0x0000706b) popup_snote2_single_graphic_window_t3_ParamLimits

0x493f,	// (0x0000706b) popup_snote2_single_graphic_window_t3

0x4980,	// (0x000070ac) popup_snote2_single_graphic_window_t4_ParamLimits

0x4980,	// (0x000070ac) popup_snote2_single_graphic_window_t4

0x49b6,	// (0x000070e2) popup_snote2_single_graphic_window_t5_ParamLimits

0x49b6,	// (0x000070e2) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x000123dd) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x000123dd) popup_snote2_single_graphic_window_t

0x301b,	// (0x00005747) clock_nsta_pane_cp2_t1

0x301b,	// (0x00005747) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x000121f8) clock_nsta_pane_cp2_t

0xe531,	// (0x00010c5d) form_field_data_wide_pane_g1_ParamLimits

0xdfae,	// (0x000106da) form_field_data_wide_pane_g2_ParamLimits

0xdfae,	// (0x000106da) form_field_data_wide_pane_g2

0xe53d,	// (0x00010c69) form_field_data_wide_pane_g3_ParamLimits

0xe53d,	// (0x00010c69) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00011de6) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00011de6) form_field_data_wide_pane_g

0x2f27,	// (0x00005653) grid_touch_3_pane_ParamLimits

0x2f27,	// (0x00005653) grid_touch_3_pane

0x4ac9,	// (0x000071f5) cell_touch_3_pane_ParamLimits

0x4ac9,	// (0x000071f5) cell_touch_3_pane

0x3534,	// (0x00005c60) cell_touch_3_pane_g1

0x3534,	// (0x00005c60) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x0001227d) cell_touch_3_pane_g

0xdb8a,	// (0x000102b6) cont_query_data_pane

0xdb92,	// (0x000102be) cont_query_data_pane_cp1

0x4af6,	// (0x00007222) button_value_adjust_pane_cp7

0x4afe,	// (0x0000722a) query_popup_pane_cp3

0xed80,	// (0x000114ac) bg_popup_sub_pane_cp22_ParamLimits

0xc181,	// (0x0000e8ad) navi_navi_volume_pane_cp2

0xc199,	// (0x0000e8c5) popup_side_volume_key_window_g2

0xc1a5,	// (0x0000e8d1) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00011e78) popup_side_volume_key_window_g

0xc1bf,	// (0x0000e8eb) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00011e7f) popup_side_volume_key_window_t

0xf09c,	// (0x000117c8) popup_side_volume_key_window_ParamLimits

0xe16f,	// (0x0001089b) list_double_graphic_pane_g4_ParamLimits

0xe16f,	// (0x0001089b) list_double_graphic_pane_g4

0x2374,	// (0x00004aa0) list_single_2heading_msg_pane_ParamLimits

0x2374,	// (0x00004aa0) list_single_2heading_msg_pane

0x4b2b,	// (0x00007257) list_single_2heading_msg_pane_g1_ParamLimits

0x4b2b,	// (0x00007257) list_single_2heading_msg_pane_g1

0x4b37,	// (0x00007263) list_single_2heading_msg_pane_g2_ParamLimits

0x4b37,	// (0x00007263) list_single_2heading_msg_pane_g2

0x4b43,	// (0x0000726f) list_single_2heading_msg_pane_g3_ParamLimits

0x4b43,	// (0x0000726f) list_single_2heading_msg_pane_g3

0x4b4f,	// (0x0000727b) list_single_2heading_msg_pane_g4_ParamLimits

0x4b4f,	// (0x0000727b) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x000123e8) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x000123e8) list_single_2heading_msg_pane_g

0x4b67,	// (0x00007293) list_single_2heading_msg_pane_t1_ParamLimits

0x4b67,	// (0x00007293) list_single_2heading_msg_pane_t1

0x4b8f,	// (0x000072bb) list_single_2heading_msg_pane_t2_ParamLimits

0x4b8f,	// (0x000072bb) list_single_2heading_msg_pane_t2

0x4bbe,	// (0x000072ea) list_single_2heading_msg_pane_t3_ParamLimits

0x4bbe,	// (0x000072ea) list_single_2heading_msg_pane_t3

0x4bf7,	// (0x00007323) list_single_2heading_msg_pane_t4_ParamLimits

0x4bf7,	// (0x00007323) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x000123f1) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x000123f1) list_single_2heading_msg_pane_t

0xd755,	// (0x0000fe81) title_pane_g4_ParamLimits

0xd755,	// (0x0000fe81) title_pane_g4

0xbfd1,	// (0x0000e6fd) title_pane_stacon_g3_ParamLimits

0xbfd1,	// (0x0000e6fd) title_pane_stacon_g3

0x4605,	// (0x00006d31) list_single_2graphic_im_pane_g4_ParamLimits

0x4605,	// (0x00006d31) list_single_2graphic_im_pane_g4

0x1da9,	// (0x000044d5) popup_side_volume_key_window_cp

0x26f5,	// (0x00004e21) main_idle_act2_pane_t1

0xc587,	// (0x0000ecb3) toolbar_button_pane_g10

0xdf65,	// (0x00010691) popup_toolbar_window_cp1

0x300c,	// (0x00005738) clock_nsta_pane_cp_t1

0x300c,	// (0x00005738) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x000121f3) clock_nsta_pane_cp_t

0xc181,	// (0x0000e8ad) navi_navi_volume_pane_cp2_ParamLimits

0xc18d,	// (0x0000e8b9) popup_side_volume_key_window_g1_ParamLimits

0xc199,	// (0x0000e8c5) popup_side_volume_key_window_g2_ParamLimits

0xc1a5,	// (0x0000e8d1) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00011e78) popup_side_volume_key_window_g_ParamLimits

0xca1d,	// (0x0000f149) fep_hwr_aid_pane

0xcabe,	// (0x0000f1ea) bg_fep_hwr_top_pane_g4_ParamLimits

0x3670,	// (0x00005d9c) fep_hwr_top_pane_g1_ParamLimits

0x365e,	// (0x00005d8a) fep_hwr_top_pane_g2_ParamLimits

0xcade,	// (0x0000f20a) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x00012248) fep_hwr_top_pane_g_ParamLimits

0xcaf3,	// (0x0000f21f) fep_hwr_top_text_pane_ParamLimits

0x1b7d,	// (0x000042a9) aid_touch_tab_arrow_arrow_2

0x1b74,	// (0x000042a0) aid_touch_tab_arrow_left_2

0xca31,	// (0x0000f15d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xca64,	// (0x0000f190) fep_hwr_prediction_pane

0x38e6,	// (0x00006012) fep_vkb_prediction_pane

0x39c8,	// (0x000060f4) fep_vkb_side_pane_g3_ParamLimits

0x39c8,	// (0x000060f4) fep_vkb_side_pane_g3

0xcc62,	// (0x0000f38e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xcccc,	// (0x0000f3f8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xccd9,	// (0x0000f405) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x000122f7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce08,	// (0x0000f534) fep_hwr_prediction_pane_g1

0xce12,	// (0x0000f53e) fep_hwr_prediction_pane_g2

0xce1a,	// (0x0000f546) fep_hwr_prediction_pane_g3

0xce22,	// (0x0000f54e) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x000123fa) fep_hwr_prediction_pane_g

0x4c1c,	// (0x00007348) fep_vkb_prediction_pane_g1

0x4c3e,	// (0x0000736a) fep_vkb_prediction_pane_g2

0x4c46,	// (0x00007372) fep_vkb_prediction_pane_g3

0x4c4e,	// (0x0000737a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x00012403) fep_vkb_prediction_pane_g

0xc855,	// (0x0000ef81) slider_set_pane_g3

0xc869,	// (0x0000ef95) slider_set_pane_g4

0xc881,	// (0x0000efad) slider_set_pane_g5

0xc855,	// (0x0000ef81) slider_set_pane_g6

0xc897,	// (0x0000efc3) slider_set_pane_g7

0x22a2,	// (0x000049ce) slider_form_pane_g3

0x22ab,	// (0x000049d7) slider_form_pane_g4

0x22b3,	// (0x000049df) slider_form_pane_g5

0x22a2,	// (0x000049ce) slider_form_pane_g6

0x22bb,	// (0x000049e7) slider_form_pane_g7

0x29ca,	// (0x000050f6) slider_set_pane_vc_g3

0x29d3,	// (0x000050ff) slider_set_pane_vc_g4

0x29dc,	// (0x00005108) slider_set_pane_vc_g5

0x29ca,	// (0x000050f6) slider_set_pane_vc_g6

0x29e5,	// (0x00005111) slider_set_pane_vc_g7

0x29ca,	// (0x000050f6) slider_form_pane_vc_g1

0x29d3,	// (0x000050ff) slider_form_pane_vc_g2

0x29dc,	// (0x00005108) slider_form_pane_vc_g3

0x29ca,	// (0x000050f6) slider_form_pane_vc_g4

0x2d51,	// (0x0000547d) slider_form_pane_vc_g5

0x0004,

0xfaad,	// (0x000121d9) slider_form_pane_vc_g

0xd630,	// (0x0000fd5c) main_idle_act3_pane

0x4c56,	// (0x00007382) ai3_links_pane

0x4c5f,	// (0x0000738b) popup_ai3_data_window_ParamLimits

0x4c5f,	// (0x0000738b) popup_ai3_data_window

0xd630,	// (0x0000fd5c) grid_ai3_links_pane

0x4c77,	// (0x000073a3) cell_ai3_links_pane_ParamLimits

0x4c77,	// (0x000073a3) cell_ai3_links_pane

0x4c8b,	// (0x000073b7) bg_popup_sub_pane_cp11

0x4c98,	// (0x000073c4) cell_ai3_links_pane_g1

0xd630,	// (0x0000fd5c) bg_popup_sub_pane_cp12

0x4cbd,	// (0x000073e9) heading_ai3_data_pane

0x4cc5,	// (0x000073f1) list_ai3_gene_pane

0x4cd1,	// (0x000073fd) popup_ai3_data_window_g1

0x4cd9,	// (0x00007405) heading_ai3_data_pane_g1

0x4ce1,	// (0x0000740d) heading_ai3_data_pane_t1

0x4cef,	// (0x0000741b) list_double_ai3_gene_pane_ParamLimits

0x4cef,	// (0x0000741b) list_double_ai3_gene_pane

0x4cfc,	// (0x00007428) list_single_ai3_gene_pane_ParamLimits

0x4cfc,	// (0x00007428) list_single_ai3_gene_pane

0x34f9,	// (0x00005c25) list_highlight_pane_cp7_ParamLimits

0x34f9,	// (0x00005c25) list_highlight_pane_cp7

0x4d09,	// (0x00007435) list_single_a13_gene_pane_t1_ParamLimits

0x4d09,	// (0x00007435) list_single_a13_gene_pane_t1

0x4d20,	// (0x0000744c) list_single_ai3_gene_pane_g1

0x4d29,	// (0x00007455) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x0001240c) list_single_ai3_gene_pane_g

0x4d31,	// (0x0000745d) list_double_ai3_gene_pane_g1_ParamLimits

0x4d31,	// (0x0000745d) list_double_ai3_gene_pane_g1

0x4d3d,	// (0x00007469) list_double_ai3_gene_pane_t1_ParamLimits

0x4d3d,	// (0x00007469) list_double_ai3_gene_pane_t1

0x4d59,	// (0x00007485) list_double_ai3_gene_pane_t2_ParamLimits

0x4d59,	// (0x00007485) list_double_ai3_gene_pane_t2

0x4d6e,	// (0x0000749a) list_double_ai3_gene_pane_t3_ParamLimits

0x4d6e,	// (0x0000749a) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x00012411) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x00012411) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4b0f,	// (0x0000723b) aid_size_min_col_2

0x4b17,	// (0x00007243) aid_size_min_msg_ParamLimits

0x4b17,	// (0x00007243) aid_size_min_msg

0x3ac2,	// (0x000061ee) fep_vkb_top_text_pane_g2_ParamLimits

0x3ac2,	// (0x000061ee) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x00012278) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x00012278) fep_vkb_top_text_pane_g

0xd630,	// (0x0000fd5c) main_hc_apps_shell_pane

0x4d8b,	// (0x000074b7) grid_hc_apps_pane_ParamLimits

0x4d8b,	// (0x000074b7) grid_hc_apps_pane

0x4d9a,	// (0x000074c6) list_hc_apps_pane

0x4da2,	// (0x000074ce) scroll_pane_cp37_ParamLimits

0x4da2,	// (0x000074ce) scroll_pane_cp37

0x4dae,	// (0x000074da) cell_hc_apps_pane_ParamLimits

0x4dae,	// (0x000074da) cell_hc_apps_pane

0x4e3c,	// (0x00007568) cell_hc_apps_pane_g1_ParamLimits

0x4e3c,	// (0x00007568) cell_hc_apps_pane_g1

0x4e69,	// (0x00007595) cell_hc_apps_pane_g2_ParamLimits

0x4e69,	// (0x00007595) cell_hc_apps_pane_g2

0x4e85,	// (0x000075b1) cell_hc_apps_pane_g3_ParamLimits

0x4e85,	// (0x000075b1) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x00012418) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x00012418) cell_hc_apps_pane_g

0x4ea7,	// (0x000075d3) cell_hc_apps_pane_t1_ParamLimits

0x4ea7,	// (0x000075d3) cell_hc_apps_pane_t1

0xdaa8,	// (0x000101d4) grid_highlight_pane_cp10_ParamLimits

0xdaa8,	// (0x000101d4) grid_highlight_pane_cp10

0x4ee5,	// (0x00007611) list_single_hc_apps_pane_ParamLimits

0x4ee5,	// (0x00007611) list_single_hc_apps_pane

0x4f15,	// (0x00007641) list_single_hc_apps_pane_g1

0x4f2e,	// (0x0000765a) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x0001241f) list_single_hc_apps_pane_g

0x4f47,	// (0x00007673) list_single_hc_apps_pane_g2_copy1

0x4f63,	// (0x0000768f) list_single_hc_apps_pane_t1

0xd801,	// (0x0000ff2d) bg_set_opt_pane_cp_ParamLimits

0xbf1f,	// (0x0000e64b) setting_slider_pane_t1_ParamLimits

0xbf35,	// (0x0000e661) setting_slider_pane_t2_ParamLimits

0xbf4e,	// (0x0000e67a) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00011cce) setting_slider_pane_t_ParamLimits

0xbf65,	// (0x0000e691) slider_set_pane_ParamLimits

0xc402,	// (0x0000eb2e) control_pane_g5_ParamLimits

0xc402,	// (0x0000eb2e) control_pane_g5

0x20b6,	// (0x000047e2) slider_set_pane_g1_ParamLimits

0xc849,	// (0x0000ef75) slider_set_pane_g2_ParamLimits

0xc855,	// (0x0000ef81) slider_set_pane_g3_ParamLimits

0xc869,	// (0x0000ef95) slider_set_pane_g4_ParamLimits

0xc881,	// (0x0000efad) slider_set_pane_g5_ParamLimits

0xc855,	// (0x0000ef81) slider_set_pane_g6_ParamLimits

0xc897,	// (0x0000efc3) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x000120b8) slider_set_pane_g_ParamLimits

0xd801,	// (0x0000ff2d) navi_icon_text_pane_ParamLimits

0x05d7,	// (0x00002d03) aid_fill_nsta_2_ParamLimits

0x0609,	// (0x00002d35) aid_touch_tab_arrow_left_ParamLimits

0x0615,	// (0x00002d41) aid_touch_tab_arrow_right_ParamLimits

0x067f,	// (0x00002dab) clock_nsta_pane_ParamLimits

0x1b56,	// (0x00004282) navi_icon_pane_g1_ParamLimits

0x1b62,	// (0x0000428e) navi_text_pane_t1_ParamLimits

0x3103,	// (0x0000582f) navi_icon_text_pane_g1_ParamLimits

0x310f,	// (0x0000583b) navi_icon_text_pane_t1_ParamLimits

0x4f15,	// (0x00007641) list_single_hc_apps_pane_g1_ParamLimits

0x4f2e,	// (0x0000765a) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x0001241f) list_single_hc_apps_pane_g_ParamLimits

0x4f47,	// (0x00007673) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x4f63,	// (0x0000768f) list_single_hc_apps_pane_t1_ParamLimits

0xbe51,	// (0x0000e57d) popup_toolbar2_fixed_window_ParamLimits

0xbe51,	// (0x0000e57d) popup_toolbar2_fixed_window

0x0513,	// (0x00002c3f) popup_toolbar2_float_window

0xd630,	// (0x0000fd5c) bg_popup_sub_pane_cp27

0x4f91,	// (0x000076bd) grid_toolbar2_float_pane

0xd630,	// (0x0000fd5c) bg_popup_sub_pane_cp26

0x4f91,	// (0x000076bd) grid_toolbar2_fixed_pane

0x4f99,	// (0x000076c5) cell_toolbar2_fixed_pane_ParamLimits

0x4f99,	// (0x000076c5) cell_toolbar2_fixed_pane

0x4faa,	// (0x000076d6) cell_toolbar2_fixed_pane_g1

0x4fb3,	// (0x000076df) toolbar2_fixed_button_pane

0x0adf,	// (0x0000320b) toolbar2_fixed_button_pane_g1

0x0ae7,	// (0x00003213) toolbar2_fixed_button_pane_g2

0x0aef,	// (0x0000321b) toolbar2_fixed_button_pane_g3

0x0af7,	// (0x00003223) toolbar2_fixed_button_pane_g4

0x0aff,	// (0x0000322b) toolbar2_fixed_button_pane_g5

0x0b07,	// (0x00003233) toolbar2_fixed_button_pane_g6

0x0b0f,	// (0x0000323b) toolbar2_fixed_button_pane_g7

0x0b17,	// (0x00003243) toolbar2_fixed_button_pane_g8

0x0b1f,	// (0x0000324b) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x00011fba) toolbar2_fixed_button_pane_g

0x4fbb,	// (0x000076e7) cell_toolbar2_float_pane_ParamLimits

0x4fbb,	// (0x000076e7) cell_toolbar2_float_pane

0x4fcc,	// (0x000076f8) cell_toolbar2_float_pane_g1

0x4fb3,	// (0x000076df) toolbar2_fixed_button_pane_cp

0x3855,	// (0x00005f81) fep_vkb_accented_list_pane_ParamLimits

0x3855,	// (0x00005f81) fep_vkb_accented_list_pane

0xcc42,	// (0x0000f36e) bg_popup_fep_shadow_pane_g9

0xf2a4,	// (0x000119d0) bg_popup_fep_shadow_pane_cp3

0xe7c5,	// (0x00010ef1) list_accented_list_pane

0x4fd5,	// (0x00007701) list_single_accented_list_pane_ParamLimits

0x4fd5,	// (0x00007701) list_single_accented_list_pane

0xf2a4,	// (0x000119d0) list_highlight_pane_cp10

0x4fe6,	// (0x00007712) list_single_accented_list_pane_t1

0x0479,	// (0x00002ba5) popup_slider_window_ParamLimits

0x0479,	// (0x00002ba5) popup_slider_window

0x4b06,	// (0x00007232) aid_indentation_list_msg

0x5086,	// (0x000077b2) bg_popup_window_pane_cp19

0x50ea,	// (0x00007816) popup_slider_window_g1

0x5106,	// (0x00007832) popup_slider_window_g2

0x5122,	// (0x0000784e) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x00012424) popup_slider_window_g

0x517e,	// (0x000078aa) popup_slider_window_t1

0x51f0,	// (0x0000791c) small_volume_slider_vertical_pane

0x3534,	// (0x00005c60) small_volume_slider_vertical_pane_g1

0x3534,	// (0x00005c60) small_volume_slider_vertical_pane_g2

0x520c,	// (0x00007938) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x00012436) small_volume_slider_vertical_pane_g

0xbcc5,	// (0x0000e3f1) area_side_right_pane_ParamLimits

0xbcc5,	// (0x0000e3f1) area_side_right_pane

0xce2a,	// (0x0000f556) aid_size_side_button_ParamLimits

0xce2a,	// (0x0000f556) aid_size_side_button

0xce3e,	// (0x0000f56a) grid_sctrl_middle_pane_ParamLimits

0xce3e,	// (0x0000f56a) grid_sctrl_middle_pane

0xce5a,	// (0x0000f586) sctrl_sk_bottom_pane

0xce6b,	// (0x0000f597) sctrl_sk_top_pane

0xce7d,	// (0x0000f5a9) aid_touch_sctrl_top

0xce8a,	// (0x0000f5b6) bg_sctrl_sk_pane_ParamLimits

0xce8a,	// (0x0000f5b6) bg_sctrl_sk_pane

0xce98,	// (0x0000f5c4) sctrl_sk_top_pane_g1

0xcea5,	// (0x0000f5d1) sctrl_sk_top_pane_t1

0xce7d,	// (0x0000f5a9) aid_touch_sctrl_bottom

0xce8a,	// (0x0000f5b6) bg_sctrl_sk_pane_cp_ParamLimits

0xce8a,	// (0x0000f5b6) bg_sctrl_sk_pane_cp

0xcec0,	// (0x0000f5ec) sctrl_sk_bottom_pane_g1

0xcea5,	// (0x0000f5d1) sctrl_sk_bottom_pane_t1

0xcec9,	// (0x0000f5f5) cell_sctrl_middle_pane_ParamLimits

0xcec9,	// (0x0000f5f5) cell_sctrl_middle_pane

0xcee4,	// (0x0000f610) aid_touch_sctrl_middle_ParamLimits

0xcee4,	// (0x0000f610) aid_touch_sctrl_middle

0xcef5,	// (0x0000f621) bg_sctrl_middle_pane_ParamLimits

0xcef5,	// (0x0000f621) bg_sctrl_middle_pane

0xcc62,	// (0x0000f38e) cell_sctrl_middle_pane_g1_ParamLimits

0xcc62,	// (0x0000f38e) cell_sctrl_middle_pane_g1

0xcf03,	// (0x0000f62f) cell_sctrl_middle_pane_g2_ParamLimits

0xcf03,	// (0x0000f62f) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x00012442) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x00012442) cell_sctrl_middle_pane_g

0x0adf,	// (0x0000320b) bg_sctrl_middle_pane_g1

0x0aef,	// (0x0000321b) bg_sctrl_middle_pane_g2

0x0ae7,	// (0x00003213) bg_sctrl_middle_pane_g3

0x0aff,	// (0x0000322b) bg_sctrl_middle_pane_g4

0x0af7,	// (0x00003223) bg_sctrl_middle_pane_g5

0x0b07,	// (0x00003233) bg_sctrl_middle_pane_g6

0x0b0f,	// (0x0000323b) bg_sctrl_middle_pane_g7

0x0b1f,	// (0x0000324b) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x00012447) bg_sctrl_middle_pane_g

0x0b17,	// (0x00003243) bg_sctrl_middle_pane_g8_copy1

0x0adf,	// (0x0000320b) bg_sctrl_sk_pane_g1

0x0ae7,	// (0x00003213) bg_sctrl_sk_pane_g2

0x0aef,	// (0x0000321b) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x00011fba) bg_sctrl_sk_pane_g

0xdf2a,	// (0x00010656) aid_size_touch_scroll_bar

0x0af7,	// (0x00003223) bg_sctrl_sk_pane_g4

0x0aff,	// (0x0000322b) bg_sctrl_sk_pane_g5

0x0b07,	// (0x00003233) bg_sctrl_sk_pane_g6

0x0b0f,	// (0x0000323b) bg_sctrl_sk_pane_g7

0x0b17,	// (0x00003243) bg_sctrl_sk_pane_g8

0x0b1f,	// (0x0000324b) bg_sctrl_sk_pane_g9

0x01af,	// (0x000028db) popup_fep_china_hwr2_fs_candidate_window

0x01b7,	// (0x000028e3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x01b7,	// (0x000028e3) popup_fep_china_hwr2_fs_control_window

0xcc62,	// (0x0000f38e) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x0001243d) sctrl_sk_top_pane_g

0x52e8,	// (0x00007a14) aid_fep_china_hwr2_fs_cell_ParamLimits

0x52e8,	// (0x00007a14) aid_fep_china_hwr2_fs_cell

0x52f9,	// (0x00007a25) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x52f9,	// (0x00007a25) bg_popup_fep_shadow_pane_cp4

0x5310,	// (0x00007a3c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x5310,	// (0x00007a3c) bg_popup_fep_shadow_pane_cp5

0x5322,	// (0x00007a4e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x5322,	// (0x00007a4e) popup_fep_china_hwr2_fs_control_bar_grid

0x5332,	// (0x00007a5e) popup_fep_china_hwr2_fs_control_funtion_grid

0x533a,	// (0x00007a66) aid_fep_china_hwr2_fs_candi_cell

0xd630,	// (0x0000fd5c) bg_popup_fep_shadow_pane_cp6

0x5344,	// (0x00007a70) popup_fep_china_hwr2_fs_candidate_grid

0x534c,	// (0x00007a78) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x534c,	// (0x00007a78) cell_fep_china_hwr2_fs_funtion_grid

0x3534,	// (0x00005c60) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5364,	// (0x00007a90) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5364,	// (0x00007a90) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5372,	// (0x00007a9e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5372,	// (0x00007a9e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x00012458) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x00012458) cell_fep_china_hwr2_fs_funtion_grid_g

0x5388,	// (0x00007ab4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x5388,	// (0x00007ab4) cell_fep_china_hwr2_fs_funtion_grid_t1

0x539d,	// (0x00007ac9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x539d,	// (0x00007ac9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x0001245d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x0001245d) cell_fep_china_hwr2_fs_funtion_grid_t

0x53b9,	// (0x00007ae5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x53c1,	// (0x00007aed) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x53c9,	// (0x00007af5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x00012462) popup_fep_china_hwr2_fs_control_bar_grid_g

0x53d1,	// (0x00007afd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x53d1,	// (0x00007afd) cell_fep_china_hwr2_fs_candidate_grid

0x53ea,	// (0x00007b16) popup_fep_china_hwr2_fs_candidate_grid_g20

0x53f2,	// (0x00007b1e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3534,	// (0x00005c60) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3534,	// (0x00005c60) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x0001227d) cell_fep_china_hwr2_fs_candidate_grid_g

0x53fa,	// (0x00007b26) cell_fep_china_hwr2_fs_candidate_grid_t1

0x068c,	// (0x00002db8) clock_nsta_pane_cp_24_ParamLimits

0x068c,	// (0x00002db8) clock_nsta_pane_cp_24

0x06ff,	// (0x00002e2b) indicator_nsta_pane_cp_24_ParamLimits

0x06ff,	// (0x00002e2b) indicator_nsta_pane_cp_24

0x19c2,	// (0x000040ee) heading_pane_g1

0x0001,

0xf8f3,	// (0x0001201f) heading_pane_g

0x24df,	// (0x00004c0b) grid_sct_catagory_button_pane

0x250f,	// (0x00004c3b) scroll_pane_cp5_ParamLimits

0x3199,	// (0x000058c5) button_value_adjust_pane_cp5_ParamLimits

0x3199,	// (0x000058c5) button_value_adjust_pane_cp5

0x328f,	// (0x000059bb) form2_midp_time_pane_ParamLimits

0x5408,	// (0x00007b34) cell_sct_catagory_button_pane_ParamLimits

0x5408,	// (0x00007b34) cell_sct_catagory_button_pane

0x34f9,	// (0x00005c25) bg_button_pane_cp01_ParamLimits

0x34f9,	// (0x00005c25) bg_button_pane_cp01

0x3534,	// (0x00005c60) cell_sct_catagory_button_pane_g1

0x04b0,	// (0x00002bdc) popup_tb_extension_window

0x541a,	// (0x00007b46) aid_size_cell_ext_ParamLimits

0x541a,	// (0x00007b46) aid_size_cell_ext

0xdaa8,	// (0x000101d4) bg_tb_trans_pane_cp1_ParamLimits

0xdaa8,	// (0x000101d4) bg_tb_trans_pane_cp1

0x543a,	// (0x00007b66) grid_tb_ext_pane_ParamLimits

0x543a,	// (0x00007b66) grid_tb_ext_pane

0x5460,	// (0x00007b8c) cell_tb_ext_pane_ParamLimits

0x5460,	// (0x00007b8c) cell_tb_ext_pane

0x5475,	// (0x00007ba1) cell_tb_ext_pane_g1_ParamLimits

0x5475,	// (0x00007ba1) cell_tb_ext_pane_g1

0x5492,	// (0x00007bbe) cell_tb_ext_pane_t1

0xdaa8,	// (0x000101d4) list_highlight_pane_cp11_ParamLimits

0xdaa8,	// (0x000101d4) list_highlight_pane_cp11

0xbe70,	// (0x0000e59c) popup_uni_indicator_window_ParamLimits

0xbe70,	// (0x0000e59c) popup_uni_indicator_window

0xe517,	// (0x00010c43) bg_popup_sub_pane_cp14

0x54ad,	// (0x00007bd9) list_uniindi_pane

0x54b9,	// (0x00007be5) uniindi_top_pane

0xdaa8,	// (0x000101d4) bg_uniindi_top_pane

0x54d8,	// (0x00007c04) uniindi_top_pane_g1

0x54ee,	// (0x00007c1a) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x00012469) uniindi_top_pane_g

0x5518,	// (0x00007c44) uniindi_top_pane_t1

0x5542,	// (0x00007c6e) list_single_uniindi_pane_ParamLimits

0x5542,	// (0x00007c6e) list_single_uniindi_pane

0x3534,	// (0x00005c60) bg_uniindi_top_pane_g1

0x5554,	// (0x00007c80) list_single_uniindi_pane_g1

0x5567,	// (0x00007c93) list_single_uniindi_pane_t1

0xbd0e,	// (0x0000e43a) control_bg_pane

0x558c,	// (0x00007cb8) bg_sctrl_sk_pane_cp1

0x5595,	// (0x00007cc1) bg_sctrl_sk_pane_cp2

0x559e,	// (0x00007cca) control_bg_pane_g1

0x55a7,	// (0x00007cd3) control_bg_pane_g2

0x0001,

0xfd46,	// (0x00012472) control_bg_pane_g

0x2fd0,	// (0x000056fc) cell_indicator_nsta_pane_g1_ParamLimits

0x2fde,	// (0x0000570a) cell_indicator_nsta_pane_g2_ParamLimits

0xfac2,	// (0x000121ee) cell_indicator_nsta_pane_g_ParamLimits

0x3313,	// (0x00005a3f) form2_midp_time_pane_t1_ParamLimits

0xde08,	// (0x00010534) main_idle_act4_pane_ParamLimits

0xde08,	// (0x00010534) main_idle_act4_pane

0x04b0,	// (0x00002bdc) popup_tb_extension_window_ParamLimits

0x5454,	// (0x00007b80) tb_ext_find_pane_ParamLimits

0x5454,	// (0x00007b80) tb_ext_find_pane

0x55b0,	// (0x00007cdc) ai_gene_pane_1_cp1

0xf3dd,	// (0x00011b09) ai_gene_pane_2_cp1

0x55b8,	// (0x00007ce4) list_single_idle_plugin_calendar_pane

0x55c1,	// (0x00007ced) list_single_idle_plugin_notification_pane

0x55ca,	// (0x00007cf6) list_single_idle_plugin_player_pane

0x55d3,	// (0x00007cff) list_single_idle_plugin_shortcut_pane_ParamLimits

0x55d3,	// (0x00007cff) list_single_idle_plugin_shortcut_pane

0x55f5,	// (0x00007d21) main_idle_act4_pane_t1

0x5607,	// (0x00007d33) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x00012477) main_idle_act4_pane_t

0x5619,	// (0x00007d45) middle_sk_idle_act4_pane_ParamLimits

0x5619,	// (0x00007d45) middle_sk_idle_act4_pane

0x562f,	// (0x00007d5b) popup_clock_digital_analogue_window_cp2

0x5649,	// (0x00007d75) shortcut_wheel_idle_act4_pane_ParamLimits

0x5649,	// (0x00007d75) shortcut_wheel_idle_act4_pane

0x3534,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g1

0x3534,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g2

0x3534,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g3

0x3534,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g4

0x3534,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g5

0x565d,	// (0x00007d89) shortcut_wheel_idle_act4_pane_g6

0x5665,	// (0x00007d91) shortcut_wheel_idle_act4_pane_g7

0x566d,	// (0x00007d99) shortcut_wheel_idle_act4_pane_g8

0x5675,	// (0x00007da1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x0001247c) shortcut_wheel_idle_act4_pane_g

0x3974,	// (0x000060a0) middle_sk_idle_act4_pane_g1_ParamLimits

0x3974,	// (0x000060a0) middle_sk_idle_act4_pane_g1

0x56d9,	// (0x00007e05) middle_sk_idle_act4_pane_g2_ParamLimits

0x56d9,	// (0x00007e05) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x0001249f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x0001249f) middle_sk_idle_act4_pane_g

0x56e5,	// (0x00007e11) middle_sk_idle_act4_pane_t1_ParamLimits

0x56e5,	// (0x00007e11) middle_sk_idle_act4_pane_t1

0x5702,	// (0x00007e2e) grid_ai_shortcut_pane_ParamLimits

0x5702,	// (0x00007e2e) grid_ai_shortcut_pane

0x571b,	// (0x00007e47) list_highlight_pane_cp16_ParamLimits

0x571b,	// (0x00007e47) list_highlight_pane_cp16

0x5728,	// (0x00007e54) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x5728,	// (0x00007e54) list_single_idle_plugin_shortcut_pane_g1

0x5734,	// (0x00007e60) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x5734,	// (0x00007e60) list_single_idle_plugin_shortcut_pane_g2

0x574c,	// (0x00007e78) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x574c,	// (0x00007e78) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x000124a4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x000124a4) list_single_idle_plugin_shortcut_pane_g

0x575f,	// (0x00007e8b) cell_ai_shortcut_pane_ParamLimits

0x575f,	// (0x00007e8b) cell_ai_shortcut_pane

0x5780,	// (0x00007eac) cell_ai_shortcut_pane_g1_ParamLimits

0x5780,	// (0x00007eac) cell_ai_shortcut_pane_g1

0x55b0,	// (0x00007cdc) ai_gene_pane_1_cp2

0x57a2,	// (0x00007ece) ai_gene_pane_2_cp2

0x57aa,	// (0x00007ed6) list_highlight_pane_cp15

0x57b3,	// (0x00007edf) list_single_idle_plugin_calendar_pane_g1

0x57aa,	// (0x00007ed6) list_highlight_pane_cp17

0x57bb,	// (0x00007ee7) list_single_idle_plugin_calendar_pane_g1_copy1

0x57c3,	// (0x00007eef) list_single_idle_plugin_player_pane_g1

0x2795,	// (0x00004ec1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x000124ab) list_single_idle_plugin_player_pane_g

0x57cb,	// (0x00007ef7) list_single_idle_plugin_player_pane_t1

0x57d9,	// (0x00007f05) list_single_idle_plugin_player_pane_t2

0x57e7,	// (0x00007f13) list_single_idle_plugin_player_pane_t3

0x57f5,	// (0x00007f21) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x000124b0) list_single_idle_plugin_player_pane_t

0x5803,	// (0x00007f2f) wait_bar_pane_cp15

0x580b,	// (0x00007f37) grid_ai_notification_pane

0x2795,	// (0x00004ec1) list_single_idle_plugin_notification_pane_g1

0x5814,	// (0x00007f40) cell_ai_notification_pane_ParamLimits

0x5814,	// (0x00007f40) cell_ai_notification_pane

0x5821,	// (0x00007f4d) cell_ai_notification_pane_g1

0x5829,	// (0x00007f55) cell_ai_notification_pane_t1

0x5837,	// (0x00007f63) tb_ext_find_button_pane

0x583f,	// (0x00007f6b) tb_ext_find_pane_g1

0x5847,	// (0x00007f73) tb_ext_find_pane_t1

0xecd2,	// (0x000113fe) tb_ext_find_button_pane_g1

0x5855,	// (0x00007f81) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x000124b9) tb_ext_find_button_pane_g

0x55f5,	// (0x00007d21) main_idle_act4_pane_t1_ParamLimits

0x5607,	// (0x00007d33) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x00012477) main_idle_act4_pane_t_ParamLimits

0x562f,	// (0x00007d5b) popup_clock_digital_analogue_window_cp2_ParamLimits

0x563d,	// (0x00007d69) sat_plugin_idle_act4_pane_ParamLimits

0x563d,	// (0x00007d69) sat_plugin_idle_act4_pane

0x585e,	// (0x00007f8a) sat_plugin_idle_act4_pane_t1_ParamLimits

0x585e,	// (0x00007f8a) sat_plugin_idle_act4_pane_t1

0x5871,	// (0x00007f9d) sat_plugin_idle_act4_pane_t2_ParamLimits

0x5871,	// (0x00007f9d) sat_plugin_idle_act4_pane_t2

0x5884,	// (0x00007fb0) sat_plugin_idle_act4_pane_t3_ParamLimits

0x5884,	// (0x00007fb0) sat_plugin_idle_act4_pane_t3

0x5897,	// (0x00007fc3) sat_plugin_idle_act4_pane_t4_ParamLimits

0x5897,	// (0x00007fc3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x000124be) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x000124be) sat_plugin_idle_act4_pane_t

0xbdd1,	// (0x0000e4fd) popup_battery_window_ParamLimits

0xbdd1,	// (0x0000e4fd) popup_battery_window

0xdaa8,	// (0x000101d4) bg_popup_sub_pane_cp25_ParamLimits

0xdaa8,	// (0x000101d4) bg_popup_sub_pane_cp25

0x58aa,	// (0x00007fd6) popup_battery_window_g1_ParamLimits

0x58aa,	// (0x00007fd6) popup_battery_window_g1

0x58b6,	// (0x00007fe2) popup_battery_window_t1_ParamLimits

0x58b6,	// (0x00007fe2) popup_battery_window_t1

0x58c8,	// (0x00007ff4) popup_battery_window_t2_ParamLimits

0x58c8,	// (0x00007ff4) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x000124c7) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x000124c7) popup_battery_window_t

0xf2b8,	// (0x000119e4) midp_canvas_pane_ParamLimits

0xf327,	// (0x00011a53) midp_keypad_pane_ParamLimits

0xf327,	// (0x00011a53) midp_keypad_pane

0x0111,	// (0x0000283d) main_midp_pane_ParamLimits

0x302a,	// (0x00005756) signal_pane_g2_cp_ParamLimits

0x58e5,	// (0x00008011) aid_size_cell_midp_keypad_ParamLimits

0x58e5,	// (0x00008011) aid_size_cell_midp_keypad

0x58ff,	// (0x0000802b) midp_keyp_game_grid_pane_ParamLimits

0x58ff,	// (0x0000802b) midp_keyp_game_grid_pane

0x5919,	// (0x00008045) midp_keyp_rocker_pane_ParamLimits

0x5919,	// (0x00008045) midp_keyp_rocker_pane

0x5946,	// (0x00008072) midp_keyp_sk_left_pane_ParamLimits

0x5946,	// (0x00008072) midp_keyp_sk_left_pane

0x599e,	// (0x000080ca) midp_keyp_sk_right_pane_ParamLimits

0x599e,	// (0x000080ca) midp_keyp_sk_right_pane

0xd630,	// (0x0000fd5c) bg_button_pane_cp03

0x59f0,	// (0x0000811c) midp_keyp_sk_left_pane_g1

0xd630,	// (0x0000fd5c) bg_button_pane_cp04

0x59f0,	// (0x0000811c) midp_keyp_sk_right_pane_g1

0x3534,	// (0x00005c60) midp_keyp_rocker_pane_g1

0x59f9,	// (0x00008125) keyp_game_cell_pane_ParamLimits

0x59f9,	// (0x00008125) keyp_game_cell_pane

0xd630,	// (0x0000fd5c) bg_button_pane_cp02

0x5a0a,	// (0x00008136) keyp_game_cell_pane_g1

0xbe07,	// (0x0000e533) popup_fep_vkb2_window_ParamLimits

0xbe07,	// (0x0000e533) popup_fep_vkb2_window

0xcf27,	// (0x0000f653) aid_size_cell_vkb2_ParamLimits

0xcf27,	// (0x0000f653) aid_size_cell_vkb2

0xcf7b,	// (0x0000f6a7) popup_fep_vkb2_window_g1_ParamLimits

0xcf7b,	// (0x0000f6a7) popup_fep_vkb2_window_g1

0xcfc3,	// (0x0000f6ef) vkb2_area_bottom_pane_ParamLimits

0xcfc3,	// (0x0000f6ef) vkb2_area_bottom_pane

0xcffb,	// (0x0000f727) vkb2_area_keypad_pane_ParamLimits

0xcffb,	// (0x0000f727) vkb2_area_keypad_pane

0xd033,	// (0x0000f75f) vkb2_area_top_pane_ParamLimits

0xd033,	// (0x0000f75f) vkb2_area_top_pane

0xd0a3,	// (0x0000f7cf) vkb2_top_entry_pane_ParamLimits

0xd0a3,	// (0x0000f7cf) vkb2_top_entry_pane

0xd0cd,	// (0x0000f7f9) vkb2_top_grid_left_pane_ParamLimits

0xd0cd,	// (0x0000f7f9) vkb2_top_grid_left_pane

0xd0eb,	// (0x0000f817) vkb2_top_grid_right_pane_ParamLimits

0xd0eb,	// (0x0000f817) vkb2_top_grid_right_pane

0xd109,	// (0x0000f835) vkb2_cell_keypad_pane_ParamLimits

0xd109,	// (0x0000f835) vkb2_cell_keypad_pane

0xd1ba,	// (0x0000f8e6) vkb2_area_bottom_grid_pane_ParamLimits

0xd1ba,	// (0x0000f8e6) vkb2_area_bottom_grid_pane

0xd1de,	// (0x0000f90a) vkb2_area_bottom_pane_g1_ParamLimits

0xd1de,	// (0x0000f90a) vkb2_area_bottom_pane_g1

0xd202,	// (0x0000f92e) vkb2_area_bottom_pane_g2_ParamLimits

0xd202,	// (0x0000f92e) vkb2_area_bottom_pane_g2

0xd230,	// (0x0000f95c) vkb2_area_bottom_pane_g3_ParamLimits

0xd230,	// (0x0000f95c) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x000124cc) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x000124cc) vkb2_area_bottom_pane_g

0xd281,	// (0x0000f9ad) vkb2_top_cell_left_pane_ParamLimits

0xd281,	// (0x0000f9ad) vkb2_top_cell_left_pane

0x5da3,	// (0x000084cf) vkb2_top_entry_pane_g1_ParamLimits

0x5da3,	// (0x000084cf) vkb2_top_entry_pane_g1

0x5db1,	// (0x000084dd) vkb2_top_entry_pane_t1_ParamLimits

0x5db1,	// (0x000084dd) vkb2_top_entry_pane_t1

0x5de3,	// (0x0000850f) vkb2_top_entry_pane_t2_ParamLimits

0x5de3,	// (0x0000850f) vkb2_top_entry_pane_t2

0x5e15,	// (0x00008541) vkb2_top_entry_pane_t3_ParamLimits

0x5e15,	// (0x00008541) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x000124d3) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x000124d3) vkb2_top_entry_pane_t

0xd2ce,	// (0x0000f9fa) vkb2_top_grid_right_pane_g1_ParamLimits

0xd2ce,	// (0x0000f9fa) vkb2_top_grid_right_pane_g1

0xd2e4,	// (0x0000fa10) vkb2_top_grid_right_pane_g2_ParamLimits

0xd2e4,	// (0x0000fa10) vkb2_top_grid_right_pane_g2

0xd2fc,	// (0x0000fa28) vkb2_top_grid_right_pane_g3_ParamLimits

0xd2fc,	// (0x0000fa28) vkb2_top_grid_right_pane_g3

0xd314,	// (0x0000fa40) vkb2_top_grid_right_pane_g4_ParamLimits

0xd314,	// (0x0000fa40) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x000124da) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x000124da) vkb2_top_grid_right_pane_g

0xd32a,	// (0x0000fa56) vkb2_top_cell_left_pane_g1

0xd341,	// (0x0000fa6d) vkb2_cell_keypad_pane_g1_ParamLimits

0xd341,	// (0x0000fa6d) vkb2_cell_keypad_pane_g1

0x5ed9,	// (0x00008605) vkb2_cell_keypad_pane_t1_ParamLimits

0x5ed9,	// (0x00008605) vkb2_cell_keypad_pane_t1

0xd34f,	// (0x0000fa7b) vkb2_cell_bottom_grid_pane_ParamLimits

0xd34f,	// (0x0000fa7b) vkb2_cell_bottom_grid_pane

0xd388,	// (0x0000fab4) vkb2_cell_bottom_grid_pane_g1

0x567d,	// (0x00007da9) aid_call2_pane_cp02

0x5685,	// (0x00007db1) aid_call_pane_cp02

0x568d,	// (0x00007db9) clock_digital_number_pane_cp10

0x5695,	// (0x00007dc1) clock_digital_number_pane_cp11

0x569d,	// (0x00007dc9) clock_digital_number_pane_cp12

0x56a5,	// (0x00007dd1) clock_digital_number_pane_cp13

0x56ad,	// (0x00007dd9) clock_digital_separator_pane_cp10

0xecd2,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g1

0xecd2,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g2

0x56b5,	// (0x00007de1) popup_clock_digital_analogue_window_cp2_g3

0xecd2,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g4

0x56b5,	// (0x00007de1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x0001248f) popup_clock_digital_analogue_window_cp2_g

0x56bd,	// (0x00007de9) popup_clock_digital_analogue_window_cp2_t1

0x56cb,	// (0x00007df7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0001249a) popup_clock_digital_analogue_window_cp2_t

0x3534,	// (0x00005c60) clock_digital_number_pane_cp10_g1

0x3534,	// (0x00005c60) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x0001227d) clock_digital_number_pane_cp10_g

0x3534,	// (0x00005c60) clock_digital_separator_pane_cp10_g1

0x3534,	// (0x00005c60) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x0001227d) clock_digital_separator_pane_cp10_g

0x54fa,	// (0x00007c26) uniindi_top_pane_g3

0x550b,	// (0x00007c37) uniindi_top_pane_g4

0xd174,	// (0x0000f8a0) vkb2_row_keypad_pane_ParamLimits

0xd174,	// (0x0000f8a0) vkb2_row_keypad_pane

0xd3a4,	// (0x0000fad0) vkb2_cell_t_keypad_pane_ParamLimits

0xd3a4,	// (0x0000fad0) vkb2_cell_t_keypad_pane

0xd3b1,	// (0x0000fadd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd3b1,	// (0x0000fadd) vkb2_cell_t_keypad_pane_cp08

0xd3c1,	// (0x0000faed) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd3c1,	// (0x0000faed) vkb2_cell_t_keypad_pane_cp09

0xd3d2,	// (0x0000fafe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd3d2,	// (0x0000fafe) vkb2_cell_t_keypad_pane_cp01

0xd3e2,	// (0x0000fb0e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd3e2,	// (0x0000fb0e) vkb2_cell_t_keypad_pane_cp02

0xd3f2,	// (0x0000fb1e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd3f2,	// (0x0000fb1e) vkb2_cell_t_keypad_pane_cp03

0xd402,	// (0x0000fb2e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd402,	// (0x0000fb2e) vkb2_cell_t_keypad_pane_cp04

0xd412,	// (0x0000fb3e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd412,	// (0x0000fb3e) vkb2_cell_t_keypad_pane_cp05

0xd422,	// (0x0000fb4e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd422,	// (0x0000fb4e) vkb2_cell_t_keypad_pane_cp06

0xd432,	// (0x0000fb5e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd432,	// (0x0000fb5e) vkb2_cell_t_keypad_pane_cp07

0xd442,	// (0x0000fb6e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd442,	// (0x0000fb6e) vkb2_cell_t_keypad_pane_cp10

0xcc62,	// (0x0000f38e) vkb2_cell_t_keypad_pane_g1

0x5ff8,	// (0x00008724) vkb2_cell_t_keypad_pane_t1

0xbd0e,	// (0x0000e43a) popup_grid_graphic2_window

0x600a,	// (0x00008736) aid_size_cell_graphic2_ParamLimits

0x600a,	// (0x00008736) aid_size_cell_graphic2

0x358f,	// (0x00005cbb) bg_popup_window_pane_cp21_ParamLimits

0x358f,	// (0x00005cbb) bg_popup_window_pane_cp21

0x6036,	// (0x00008762) graphic2_pages_pane_ParamLimits

0x6036,	// (0x00008762) graphic2_pages_pane

0x6070,	// (0x0000879c) grid_graphic2_control_pane_ParamLimits

0x6070,	// (0x0000879c) grid_graphic2_control_pane

0x6098,	// (0x000087c4) grid_graphic2_pane_ParamLimits

0x6098,	// (0x000087c4) grid_graphic2_pane

0x60e8,	// (0x00008814) cell_graphic2_pane

0xd630,	// (0x0000fd5c) main_comp_mode_pane

0x4cc5,	// (0x000073f1) list_ai3_gene_pane_ParamLimits

0x5086,	// (0x000077b2) bg_popup_window_pane_cp19_ParamLimits

0x5092,	// (0x000077be) bg_touch_area_indi_pane_ParamLimits

0x5092,	// (0x000077be) bg_touch_area_indi_pane

0x50a8,	// (0x000077d4) bg_touch_area_indi_pane_cp01_ParamLimits

0x50a8,	// (0x000077d4) bg_touch_area_indi_pane_cp01

0x50be,	// (0x000077ea) bg_touch_area_indi_pane_cp02_ParamLimits

0x50be,	// (0x000077ea) bg_touch_area_indi_pane_cp02

0x50d4,	// (0x00007800) bg_touch_area_indi_pane_cp03_ParamLimits

0x50d4,	// (0x00007800) bg_touch_area_indi_pane_cp03

0x50ea,	// (0x00007816) popup_slider_window_g1_ParamLimits

0x5106,	// (0x00007832) popup_slider_window_g2_ParamLimits

0x5122,	// (0x0000784e) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x00012424) popup_slider_window_g_ParamLimits

0x517e,	// (0x000078aa) popup_slider_window_t1_ParamLimits

0x51f0,	// (0x0000791c) small_volume_slider_vertical_pane_ParamLimits

0x60e8,	// (0x00008814) cell_graphic2_pane_ParamLimits

0x6125,	// (0x00008851) bg_button_pane_cp10_ParamLimits

0x6125,	// (0x00008851) bg_button_pane_cp10

0x6136,	// (0x00008862) bg_button_pane_cp11_ParamLimits

0x6136,	// (0x00008862) bg_button_pane_cp11

0x6147,	// (0x00008873) graphic2_pages_pane_g1_ParamLimits

0x6147,	// (0x00008873) graphic2_pages_pane_g1

0x615a,	// (0x00008886) graphic2_pages_pane_g2_ParamLimits

0x615a,	// (0x00008886) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x000124e8) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x000124e8) graphic2_pages_pane_g

0x6170,	// (0x0000889c) graphic2_pages_pane_t1_ParamLimits

0x6170,	// (0x0000889c) graphic2_pages_pane_t1

0x6186,	// (0x000088b2) cell_graphic2_control_pane_ParamLimits

0x6186,	// (0x000088b2) cell_graphic2_control_pane

0x61a0,	// (0x000088cc) cell_graphic2_pane_g1_ParamLimits

0x61a0,	// (0x000088cc) cell_graphic2_pane_g1

0x61ad,	// (0x000088d9) cell_graphic2_pane_g2_ParamLimits

0x61ad,	// (0x000088d9) cell_graphic2_pane_g2

0x61ba,	// (0x000088e6) cell_graphic2_pane_g3_ParamLimits

0x61ba,	// (0x000088e6) cell_graphic2_pane_g3

0x61c7,	// (0x000088f3) cell_graphic2_pane_g4_ParamLimits

0x61c7,	// (0x000088f3) cell_graphic2_pane_g4

0x61d4,	// (0x00008900) cell_graphic2_pane_g5_ParamLimits

0x61d4,	// (0x00008900) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x000124ed) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x000124ed) cell_graphic2_pane_g

0x61ef,	// (0x0000891b) cell_graphic2_pane_t1_ParamLimits

0x61ef,	// (0x0000891b) cell_graphic2_pane_t1

0x0c69,	// (0x00003395) grid_highlight_pane_cp11_ParamLimits

0x0c69,	// (0x00003395) grid_highlight_pane_cp11

0xe517,	// (0x00010c43) bg_button_pane_cp05

0x6205,	// (0x00008931) cell_graphic2_control_pane_g1

0x3534,	// (0x00005c60) bg_touch_area_indi_pane_g1

0x6212,	// (0x0000893e) aid_cmod_rocker_key_size

0x621c,	// (0x00008948) aid_cmode_itu_key_size

0x6226,	// (0x00008952) main_cmode_video_pane

0x622e,	// (0x0000895a) main_comp_mode_itu_pane

0x6238,	// (0x00008964) main_comp_mode_rocker_pane

0x6240,	// (0x0000896c) cell_cmode_rocker_pane_ParamLimits

0x6240,	// (0x0000896c) cell_cmode_rocker_pane

0x6252,	// (0x0000897e) cell_cmode_itu_pane_ParamLimits

0x6252,	// (0x0000897e) cell_cmode_itu_pane

0xe517,	// (0x00010c43) bg_button_pane_cp06_ParamLimits

0xe517,	// (0x00010c43) bg_button_pane_cp06

0x3974,	// (0x000060a0) cell_cmode_rocker_pane_g1_ParamLimits

0x3974,	// (0x000060a0) cell_cmode_rocker_pane_g1

0x5364,	// (0x00007a90) cell_cmode_rocker_pane_g2_ParamLimits

0x5364,	// (0x00007a90) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x000124f8) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x000124f8) cell_cmode_rocker_pane_g

0xd630,	// (0x0000fd5c) bg_button_pane_cp07

0x6267,	// (0x00008993) cell_cmode_itu_pane_g1

0x6270,	// (0x0000899c) cell_cmode_itu_pane_t1

0x627e,	// (0x000089aa) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x000124fd) cell_cmode_itu_pane_t

0x557c,	// (0x00007ca8) aid_touch_ctrl_left

0x5584,	// (0x00007cb0) aid_touch_ctrl_right

0xd630,	// (0x0000fd5c) compa_mode_pane

0x628c,	// (0x000089b8) aid_cmod_rocker_key_size_cp

0x6296,	// (0x000089c2) aid_cmode_itu_key_size_cp

0x62a0,	// (0x000089cc) compa_mode_pane_g1

0x62a8,	// (0x000089d4) compa_mode_pane_g2

0x62b0,	// (0x000089dc) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x00012502) compa_mode_pane_g

0x62b8,	// (0x000089e4) main_comp_mode_itu_pane_cp

0x62c0,	// (0x000089ec) main_comp_mode_rocker_pane_cp

0x62c8,	// (0x000089f4) cell_cmode_itu_pane_cp_ParamLimits

0x62c8,	// (0x000089f4) cell_cmode_itu_pane_cp

0x62dd,	// (0x00008a09) cell_cmode_rocker_pane_cp_ParamLimits

0x62dd,	// (0x00008a09) cell_cmode_rocker_pane_cp

0xe517,	// (0x00010c43) bg_button_pane_cp06_cp_ParamLimits

0xe517,	// (0x00010c43) bg_button_pane_cp06_cp

0x3974,	// (0x000060a0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3974,	// (0x000060a0) cell_cmode_rocker_pane_g1_cp

0x3534,	// (0x00005c60) cell_cmode_rocker_pane_g2_cp

0xd630,	// (0x0000fd5c) bg_button_pane_cp07_cp

0x62ef,	// (0x00008a1b) cell_cmode_itu_pane_g1_cp

0x62f8,	// (0x00008a24) cell_cmode_itu_pane_t1_cp

0x6306,	// (0x00008a32) cell_cmode_itu_pane_t2_cp

0x2289,	// (0x000049b5) settings_code_pane_cp2

0xd801,	// (0x0000ff2d) bg_popup_window_pane_cp3_ParamLimits

0xdcac,	// (0x000103d8) heading_pane_cp3_ParamLimits

0xdcb8,	// (0x000103e4) listscroll_popup_graphic_pane_ParamLimits

0xca1d,	// (0x0000f149) fep_hwr_aid_pane_ParamLimits

0xce7d,	// (0x0000f5a9) aid_touch_sctrl_top_ParamLimits

0xce98,	// (0x0000f5c4) sctrl_sk_top_pane_g1_ParamLimits

0xcc62,	// (0x0000f38e) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x0001243d) sctrl_sk_top_pane_g_ParamLimits

0xcea5,	// (0x0000f5d1) sctrl_sk_top_pane_t1_ParamLimits

0xce7d,	// (0x0000f5a9) aid_touch_sctrl_bottom_ParamLimits

0xcea5,	// (0x0000f5d1) sctrl_sk_bottom_pane_t1_ParamLimits

0x54c6,	// (0x00007bf2) aid_area_touch_clock

0xd06b,	// (0x0000f797) aid_vkb2_area_top_pane_cell_ParamLimits

0xd06b,	// (0x0000f797) aid_vkb2_area_top_pane_cell

0xd196,	// (0x0000f8c2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd196,	// (0x0000f8c2) aid_vkb2_area_bottom_pane_cell

0x5d9b,	// (0x000084c7) popup_char_count_window

0x6314,	// (0x00008a40) popup_char_count_window_g1

0x631d,	// (0x00008a49) popup_char_count_window_g2

0x6326,	// (0x00008a52) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x00012509) popup_char_count_window_g

0x632f,	// (0x00008a5b) popup_char_count_window_t1

0xcf59,	// (0x0000f685) popup_fep_char_preview_window_ParamLimits

0xcf59,	// (0x0000f685) popup_fep_char_preview_window

0xd089,	// (0x0000f7b5) vkb2_top_candi_pane_ParamLimits

0xd089,	// (0x0000f7b5) vkb2_top_candi_pane

0x633d,	// (0x00008a69) cell_vkb2_top_candi_pane_ParamLimits

0x633d,	// (0x00008a69) cell_vkb2_top_candi_pane

0xd457,	// (0x0000fb83) bg_popup_fep_char_preview_window_ParamLimits

0xd457,	// (0x0000fb83) bg_popup_fep_char_preview_window

0xd465,	// (0x0000fb91) popup_fep_char_preview_window_t1_ParamLimits

0xd465,	// (0x0000fb91) popup_fep_char_preview_window_t1

0x63c0,	// (0x00008aec) bg_popup_fep_char_preview_window_g1

0x63b8,	// (0x00008ae4) bg_popup_fep_char_preview_window_g2

0x63b0,	// (0x00008adc) bg_popup_fep_char_preview_window_g3

0x63e8,	// (0x00008b14) bg_popup_fep_char_preview_window_g4

0x63e0,	// (0x00008b0c) bg_popup_fep_char_preview_window_g5

0xd49f,	// (0x0000fbcb) bg_popup_fep_char_preview_window_g6

0x63d0,	// (0x00008afc) bg_popup_fep_char_preview_window_g7

0x63c8,	// (0x00008af4) bg_popup_fep_char_preview_window_g8

0x63f0,	// (0x00008b1c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x00012510) bg_popup_fep_char_preview_window_g

0xcc62,	// (0x0000f38e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xcc62,	// (0x0000f38e) cell_vkb2_top_candi_pane_g1

0xcc70,	// (0x0000f39c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcc70,	// (0x0000f39c) cell_vkb2_top_candi_pane_g2

0x6419,	// (0x00008b45) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6419,	// (0x00008b45) cell_vkb2_top_candi_pane_g3

0xd4a7,	// (0x0000fbd3) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd4a7,	// (0x0000fbd3) cell_vkb2_top_candi_pane_g4

0x3cec,	// (0x00006418) cell_vkb2_top_candi_pane_g5_ParamLimits

0x3cec,	// (0x00006418) cell_vkb2_top_candi_pane_g5

0xd4c8,	// (0x0000fbf4) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4c8,	// (0x0000fbf4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x00012523) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x00012523) cell_vkb2_top_candi_pane_g

0xd4d6,	// (0x0000fc02) cell_vkb2_top_candi_pane_t1

0xc835,	// (0x0000ef61) aid_size_touch_slider_mark_ParamLimits

0xc835,	// (0x0000ef61) aid_size_touch_slider_mark

0x6064,	// (0x00008790) grid_graphic2_catg_pane_ParamLimits

0x6064,	// (0x00008790) grid_graphic2_catg_pane

0x60c4,	// (0x000087f0) popup_grid_graphic2_window_t1_ParamLimits

0x60c4,	// (0x000087f0) popup_grid_graphic2_window_t1

0x60d6,	// (0x00008802) popup_grid_graphic2_window_t2_ParamLimits

0x60d6,	// (0x00008802) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x000124e3) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x000124e3) popup_grid_graphic2_window_t

0xe517,	// (0x00010c43) bg_button_pane_cp05_ParamLimits

0x6205,	// (0x00008931) cell_graphic2_control_pane_g1_ParamLimits

0x6450,	// (0x00008b7c) cell_graphic2_catg_pane_ParamLimits

0x6450,	// (0x00008b7c) cell_graphic2_catg_pane

0xd630,	// (0x0000fd5c) bg_button_pane_cp12

0x6462,	// (0x00008b8e) cell_graphic2_catg_pane_g1

0x5492,	// (0x00007bbe) cell_tb_ext_pane_t1_ParamLimits

0xd2a1,	// (0x0000f9cd) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd2a1,	// (0x0000f9cd) vkb2_top_cell_right_narrow_pane

0xd2b9,	// (0x0000f9e5) vkb2_top_cell_right_wide_pane_ParamLimits

0xd2b9,	// (0x0000f9e5) vkb2_top_cell_right_wide_pane

0xca0f,	// (0x0000f13b) bg_vkb2_func_pane_ParamLimits

0xca0f,	// (0x0000f13b) bg_vkb2_func_pane

0xd32a,	// (0x0000fa56) vkb2_top_cell_left_pane_g1_ParamLimits

0xca0f,	// (0x0000f13b) bg_vkb2_fuc_pane_cp03_ParamLimits

0xca0f,	// (0x0000f13b) bg_vkb2_fuc_pane_cp03

0xd388,	// (0x0000fab4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0aef,	// (0x0000321b) bg_vkb2_func_pane_g1

0x0ae7,	// (0x00003213) bg_vkb2_func_pane_g2

0x0af7,	// (0x00003223) bg_vkb2_func_pane_g3

0x0aff,	// (0x0000322b) bg_vkb2_func_pane_g4

0x0b07,	// (0x00003233) bg_vkb2_func_pane_g5

0x0b0f,	// (0x0000323b) bg_vkb2_func_pane_g6

0x0b1f,	// (0x0000324b) bg_vkb2_func_pane_g7

0x0b17,	// (0x00003243) bg_vkb2_func_pane_g8

0x0adf,	// (0x0000320b) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x00012530) bg_vkb2_func_pane_g

0xca0f,	// (0x0000f13b) bg_vkb2_fuc_pane_cp01_ParamLimits

0xca0f,	// (0x0000f13b) bg_vkb2_fuc_pane_cp01

0xd32a,	// (0x0000fa56) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd32a,	// (0x0000fa56) vkb2_top_cell_right_wide_pane_g1

0xca0f,	// (0x0000f13b) bg_vkb2_fuc_pane_cp02_ParamLimits

0xca0f,	// (0x0000f13b) bg_vkb2_fuc_pane_cp02

0xd388,	// (0x0000fab4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd388,	// (0x0000fab4) vkb2_top_cell_right_narrow_pane_g1

0x5018,	// (0x00007744) aid_touch_area_decrease_ParamLimits

0x5018,	// (0x00007744) aid_touch_area_decrease

0x5030,	// (0x0000775c) aid_touch_area_increase_ParamLimits

0x5030,	// (0x0000775c) aid_touch_area_increase

0x503c,	// (0x00007768) aid_touch_area_mute_ParamLimits

0x503c,	// (0x00007768) aid_touch_area_mute

0x5058,	// (0x00007784) aid_touch_area_slider_ParamLimits

0x5058,	// (0x00007784) aid_touch_area_slider

0x513e,	// (0x0000786a) popup_slider_window_g4_ParamLimits

0x513e,	// (0x0000786a) popup_slider_window_g4

0x514a,	// (0x00007876) popup_slider_window_g5_ParamLimits

0x514a,	// (0x00007876) popup_slider_window_g5

0x516c,	// (0x00007898) popup_slider_window_g6_ParamLimits

0x516c,	// (0x00007898) popup_slider_window_g6

0x51aa,	// (0x000078d6) popup_slider_window_t2_ParamLimits

0x51aa,	// (0x000078d6) popup_slider_window_t2

0x0001,

0xfd05,	// (0x00012431) popup_slider_window_t_ParamLimits

0xfd05,	// (0x00012431) popup_slider_window_t

0x51c2,	// (0x000078ee) slider_pane_ParamLimits

0x51c2,	// (0x000078ee) slider_pane

0x646b,	// (0x00008b97) slider_pane_g1_ParamLimits

0x646b,	// (0x00008b97) slider_pane_g1

0x647f,	// (0x00008bab) slider_pane_g2_ParamLimits

0x647f,	// (0x00008bab) slider_pane_g2

0x6495,	// (0x00008bc1) slider_pane_g3_ParamLimits

0x6495,	// (0x00008bc1) slider_pane_g3

0x0003,

0xfe17,	// (0x00012543) slider_pane_g_ParamLimits

0xfe17,	// (0x00012543) slider_pane_g

0x0500,	// (0x00002c2c) popup_tb_float_extension_window_ParamLimits

0x0500,	// (0x00002c2c) popup_tb_float_extension_window

0x64c1,	// (0x00008bed) aid_size_cell_tb_float_ext

0xd630,	// (0x0000fd5c) bg_popup_sub_window_cp28

0x64cc,	// (0x00008bf8) grid_tb_float_ext_pane

0x64d4,	// (0x00008c00) cell_tb_float_ext_pane_ParamLimits

0x64d4,	// (0x00008c00) cell_tb_float_ext_pane

0x64ec,	// (0x00008c18) cell_tb_float_ext_pane_g1

0x64f5,	// (0x00008c21) grid_highlight_pane_cp12

0xcb58,	// (0x0000f284) cell_last_hwr_side_pane_ParamLimits

0xcb58,	// (0x0000f284) cell_last_hwr_side_pane

0x3534,	// (0x00005c60) cell_last_hwr_side_pane_g1

0x64fe,	// (0x00008c2a) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001254c) cell_last_hwr_side_pane_g

0xd25e,	// (0x0000f98a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd25e,	// (0x0000f98a) vkb2_area_bottom_space_btn_pane

0xcc62,	// (0x0000f38e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5ff8,	// (0x00008724) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd4d6,	// (0x0000fc02) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd4ec,	// (0x0000fc18) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd4ec,	// (0x0000fc18) vkb2_area_bottom_space_btn_pane_g1

0xd522,	// (0x0000fc4e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd522,	// (0x0000fc4e) vkb2_area_bottom_space_btn_pane_g2

0xd558,	// (0x0000fc84) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd558,	// (0x0000fc84) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x00012551) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x00012551) vkb2_area_bottom_space_btn_pane_g

0xcacc,	// (0x0000f1f8) cel_fep_hwr_func_pane_ParamLimits

0xcacc,	// (0x0000f1f8) cel_fep_hwr_func_pane

0xcb08,	// (0x0000f234) cell_hwr_side_button_pane_ParamLimits

0xcb08,	// (0x0000f234) cell_hwr_side_button_pane

0x54c6,	// (0x00007bf2) aid_area_touch_clock_ParamLimits

0xdaa8,	// (0x000101d4) bg_uniindi_top_pane_ParamLimits

0x54d8,	// (0x00007c04) uniindi_top_pane_g1_ParamLimits

0x54ee,	// (0x00007c1a) uniindi_top_pane_g2_ParamLimits

0x54fa,	// (0x00007c26) uniindi_top_pane_g3_ParamLimits

0x550b,	// (0x00007c37) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x00012469) uniindi_top_pane_g_ParamLimits

0x5518,	// (0x00007c44) uniindi_top_pane_t1_ParamLimits

0xdaa8,	// (0x000101d4) bg_vkb2_func_pane_cp01_ParamLimits

0xdaa8,	// (0x000101d4) bg_vkb2_func_pane_cp01

0x65b9,	// (0x00008ce5) cel_fep_hwr_func_pane_g1_ParamLimits

0x65b9,	// (0x00008ce5) cel_fep_hwr_func_pane_g1

0xdaa8,	// (0x000101d4) bg_vkb2_func_pane_cp02_ParamLimits

0xdaa8,	// (0x000101d4) bg_vkb2_func_pane_cp02

0x65b9,	// (0x00008ce5) cell_hwr_side_button_pane_g1_ParamLimits

0x65b9,	// (0x00008ce5) cell_hwr_side_button_pane_g1

0x08fa,	// (0x00003026) status_pane_g4_ParamLimits

0x08fa,	// (0x00003026) status_pane_g4

0x0912,	// (0x0000303e) status_pane_t1

0x3326,	// (0x00005a52) form2_midp_gauge_slider_cont_pane

0x332e,	// (0x00005a5a) form2_midp_gauge_slider_pane_t1_ParamLimits

0x3340,	// (0x00005a6c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x3352,	// (0x00005a7e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x00012230) form2_midp_gauge_slider_pane_t_ParamLimits

0x3364,	// (0x00005a90) form2_midp_slider_pane_ParamLimits

0xcf19,	// (0x0000f645) aid_size_cell_func_vkb2_ParamLimits

0xcf19,	// (0x0000f645) aid_size_cell_func_vkb2

0x64ad,	// (0x00008bd9) slider_pane_g4_ParamLimits

0x64ad,	// (0x00008bd9) slider_pane_g4

0xd59e,	// (0x0000fcca) form2_midp_gauge_slider_pane_t2_cp01

0xd5ac,	// (0x0000fcd8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd5ac,	// (0x0000fcd8) form2_midp_gauge_slider_pane_t3_cp01

0xd5c9,	// (0x0000fcf5) form2_midp_slider_pane_cp01

0xd630,	// (0x0000fd5c) navi_smil_pane

0x6626,	// (0x00008d52) navi_smil_pane_g1

0x662e,	// (0x00008d5a) navi_smil_pane_t1

0x65fb,	// (0x00008d27) form2_midp_slider_pane_g1

0x6604,	// (0x00008d30) form2_midp_slider_pane_g2

0x660c,	// (0x00008d38) form2_midp_slider_pane_g3

0x65fb,	// (0x00008d27) form2_midp_slider_pane_g4

0x6614,	// (0x00008d40) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001255a) form2_midp_slider_pane_g

0xd58e,	// (0x0000fcba) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd58e,	// (0x0000fcba) vkb2_area_bottom_space_btn_pane_g4

0x073c,	// (0x00002e68) lc0_navi_pane_ParamLimits

0x073c,	// (0x00002e68) lc0_navi_pane

0x07b2,	// (0x00002ede) lc0_stat_indi_pane_ParamLimits

0x07b2,	// (0x00002ede) lc0_stat_indi_pane

0x07c9,	// (0x00002ef5) ls0_title_pane_ParamLimits

0x07c9,	// (0x00002ef5) ls0_title_pane

0xe517,	// (0x00010c43) bg_popup_sub_pane_cp14_ParamLimits

0x54ad,	// (0x00007bd9) list_uniindi_pane_ParamLimits

0x54b9,	// (0x00007be5) uniindi_top_pane_ParamLimits

0x5554,	// (0x00007c80) list_single_uniindi_pane_g1_ParamLimits

0x5567,	// (0x00007c93) list_single_uniindi_pane_t1_ParamLimits

0xd5d2,	// (0x0000fcfe) lc0_stat_clock_pane_ParamLimits

0xd5d2,	// (0x0000fcfe) lc0_stat_clock_pane

0x6656,	// (0x00008d82) lc0_stat_indi_pane_g1_ParamLimits

0x6656,	// (0x00008d82) lc0_stat_indi_pane_g1

0x6649,	// (0x00008d75) lc0_stat_indi_pane_g2_ParamLimits

0x6649,	// (0x00008d75) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x00012565) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x00012565) lc0_stat_indi_pane_g

0xd5df,	// (0x0000fd0b) lc0_uni_indicator_pane_ParamLimits

0xd5df,	// (0x0000fd0b) lc0_uni_indicator_pane

0x6670,	// (0x00008d9c) ls0_title_pane_g1_ParamLimits

0x6670,	// (0x00008d9c) ls0_title_pane_g1

0x6684,	// (0x00008db0) ls0_title_pane_t1_ParamLimits

0x6684,	// (0x00008db0) ls0_title_pane_t1

0xd5ec,	// (0x0000fd18) lc0_uni_indicator_pane_g1_ParamLimits

0xd5ec,	// (0x0000fd18) lc0_uni_indicator_pane_g1

0x66cc,	// (0x00008df8) lc0_stat_clock_pane_t1

0xd630,	// (0x0000fd5c) main_ai5_pane

0x66da,	// (0x00008e06) ai5_sk_pane_ParamLimits

0x66da,	// (0x00008e06) ai5_sk_pane

0x66e7,	// (0x00008e13) cell_ai5_widget_pane_ParamLimits

0x66e7,	// (0x00008e13) cell_ai5_widget_pane

0x6742,	// (0x00008e6e) aid_size_cell_widget_grid

0x6756,	// (0x00008e82) bg_ai5_widget_pane_ParamLimits

0x6756,	// (0x00008e82) bg_ai5_widget_pane

0x677e,	// (0x00008eaa) cell_ai5_widget_pane_g2

0x678e,	// (0x00008eba) cell_ai5_widget_pane_g3

0x67a2,	// (0x00008ece) cell_ai5_widget_pane_g4

0x67ae,	// (0x00008eda) cell_ai5_widget_pane_g5

0x67ba,	// (0x00008ee6) cell_ai5_widget_pane_g6

0x67c6,	// (0x00008ef2) cell_ai5_widget_pane_g7

0x680e,	// (0x00008f3a) cell_ai5_widget_pane_t1_ParamLimits

0x680e,	// (0x00008f3a) cell_ai5_widget_pane_t1

0x682b,	// (0x00008f57) cell_ai5_widget_pane_t2_ParamLimits

0x682b,	// (0x00008f57) cell_ai5_widget_pane_t2

0x6843,	// (0x00008f6f) cell_ai5_widget_pane_t3_ParamLimits

0x6843,	// (0x00008f6f) cell_ai5_widget_pane_t3

0x685b,	// (0x00008f87) cell_ai5_widget_pane_t4_ParamLimits

0x685b,	// (0x00008f87) cell_ai5_widget_pane_t4

0x6875,	// (0x00008fa1) cell_ai5_widget_pane_t5_ParamLimits

0x6875,	// (0x00008fa1) cell_ai5_widget_pane_t5

0x6894,	// (0x00008fc0) cell_ai5_widget_pane_t6_ParamLimits

0x6894,	// (0x00008fc0) cell_ai5_widget_pane_t6

0x68a6,	// (0x00008fd2) cell_ai5_widget_pane_t7_ParamLimits

0x68a6,	// (0x00008fd2) cell_ai5_widget_pane_t7

0x68bf,	// (0x00008feb) cell_ai5_widget_pane_t8_ParamLimits

0x68bf,	// (0x00008feb) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001257f) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001257f) cell_ai5_widget_pane_t

0x6907,	// (0x00009033) grid_ai5_widget_pane

0xe517,	// (0x00010c43) highlight_cell_ai5_widget_pane_ParamLimits

0xe517,	// (0x00010c43) highlight_cell_ai5_widget_pane

0x691d,	// (0x00009049) ai5_sk_left_pane

0x6927,	// (0x00009053) ai5_sk_middle_pane

0x6931,	// (0x0000905d) ai5_sk_right_pane

0x693b,	// (0x00009067) bg_ai5_widget_pane_g1_ParamLimits

0x693b,	// (0x00009067) bg_ai5_widget_pane_g1

0x6947,	// (0x00009073) bg_ai5_widget_pane_g2_ParamLimits

0x6947,	// (0x00009073) bg_ai5_widget_pane_g2

0x6953,	// (0x0000907f) bg_ai5_widget_pane_g3_ParamLimits

0x6953,	// (0x0000907f) bg_ai5_widget_pane_g3

0x695f,	// (0x0000908b) bg_ai5_widget_pane_g4_ParamLimits

0x695f,	// (0x0000908b) bg_ai5_widget_pane_g4

0x696b,	// (0x00009097) bg_ai5_widget_pane_g5_ParamLimits

0x696b,	// (0x00009097) bg_ai5_widget_pane_g5

0x6977,	// (0x000090a3) bg_ai5_widget_pane_g6_ParamLimits

0x6977,	// (0x000090a3) bg_ai5_widget_pane_g6

0x6983,	// (0x000090af) bg_ai5_widget_pane_g7_ParamLimits

0x6983,	// (0x000090af) bg_ai5_widget_pane_g7

0x698f,	// (0x000090bb) bg_ai5_widget_pane_g8_ParamLimits

0x698f,	// (0x000090bb) bg_ai5_widget_pane_g8

0x699b,	// (0x000090c7) bg_ai5_widget_pane_g9_ParamLimits

0x699b,	// (0x000090c7) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x00012594) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x00012594) bg_ai5_widget_pane_g

0x69c3,	// (0x000090ef) cell_shortcut_ai5_widget_pane_ParamLimits

0x69c3,	// (0x000090ef) cell_shortcut_ai5_widget_pane

0xd8e1,	// (0x0001000d) bg_cell_shortcut_ai5_widget_pane

0x69d4,	// (0x00009100) cell_grid_ai5_widget_pane_g1

0x69dd,	// (0x00009109) highlight_cell_shortcut_ai5_widget_pane

0x0aef,	// (0x0000321b) ai5_sk_left_pane_g1

0x69e5,	// (0x00009111) ai5_sk_left_pane_g2

0x69ed,	// (0x00009119) ai5_sk_left_pane_g3

0x69f5,	// (0x00009121) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x000125a7) ai5_sk_left_pane_g

0x69fd,	// (0x00009129) ai5_sk_left_pane_t1

0x0ae7,	// (0x00003213) ai5_sk_right_pane_g1

0x6a0b,	// (0x00009137) ai5_sk_right_pane_g2

0x6a13,	// (0x0000913f) ai5_sk_right_pane_g3

0x6a1b,	// (0x00009147) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x000125b0) ai5_sk_right_pane_g

0x6a23,	// (0x0000914f) ai5_sk_right_pane_t1

0x0ae7,	// (0x00003213) ai5_sk_middle_pane_g1

0x0aef,	// (0x0000321b) ai5_sk_middle_pane_g2

0x0b07,	// (0x00003233) ai5_sk_middle_pane_g3

0x6a13,	// (0x0000913f) ai5_sk_middle_pane_g4

0x69ed,	// (0x00009119) ai5_sk_middle_pane_g5

0x6a31,	// (0x0000915d) ai5_sk_middle_pane_g6

0x6a39,	// (0x00009165) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x000125b9) ai5_sk_middle_pane_g

0x05e3,	// (0x00002d0f) aid_touch_area_size_lc0_ParamLimits

0x05e3,	// (0x00002d0f) aid_touch_area_size_lc0

0xcc91,	// (0x0000f3bd) cell_hwr_candidate_pane_t1_ParamLimits

0x05fd,	// (0x00002d29) aid_touch_navi_pane

0x08ac,	// (0x00002fd8) status_dt_navi_pane_ParamLimits

0x08ac,	// (0x00002fd8) status_dt_navi_pane

0x08b9,	// (0x00002fe5) status_dt_sta_pane_ParamLimits

0x08b9,	// (0x00002fe5) status_dt_sta_pane

0x6a41,	// (0x0000916d) dt_sta_controll_pane

0x6a4e,	// (0x0000917a) dt_sta_indi_pane

0x6a5f,	// (0x0000918b) dt_sta_title_pane

0xdaa8,	// (0x000101d4) bg_dt_sta_indi_pane_ParamLimits

0xdaa8,	// (0x000101d4) bg_dt_sta_indi_pane

0x6a72,	// (0x0000919e) dt_sta_battery_pane

0x6a7a,	// (0x000091a6) dt_sta_indi_pane_g1

0x6a83,	// (0x000091af) dt_sta_indi_pane_g2

0x6a8c,	// (0x000091b8) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x000125c8) dt_sta_indi_pane_g

0x6a95,	// (0x000091c1) dt_sta_signal_pane

0xe517,	// (0x00010c43) bg_dt_sta_title_pane_ParamLimits

0xe517,	// (0x00010c43) bg_dt_sta_title_pane

0x6a9e,	// (0x000091ca) dt_sta_title_pane_g1

0x6aa6,	// (0x000091d2) dt_sta_title_pane_t1_ParamLimits

0x6aa6,	// (0x000091d2) dt_sta_title_pane_t1

0xd630,	// (0x0000fd5c) bg_dt_sta_control_pane

0x6abb,	// (0x000091e7) dt_sta_controll_pane_g1

0x6ac4,	// (0x000091f0) bg_dt_sta_title_pane_g1

0x6acd,	// (0x000091f9) bg_dt_sta_title_pane_g2

0x6ad6,	// (0x00009202) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x000125cf) bg_dt_sta_title_pane_g

0x3534,	// (0x00005c60) bg_dt_sta_indi_pane_g1

0x6adf,	// (0x0000920b) dt_sta_signal_pane_g1

0x6ae7,	// (0x00009213) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x000125d6) dt_sta_signal_pane_g

0x6aef,	// (0x0000921b) dt_sta_battery_pane_g1

0x6af8,	// (0x00009224) dt_sta_battery_pane_t1

0x3534,	// (0x00005c60) bg_dt_sta_control_pane_g1

0xeda2,	// (0x000114ce) fep_china_uni_eep_pane

0xedaa,	// (0x000114d6) fep_china_uni_entry_pane_ParamLimits

0xedba,	// (0x000114e6) popup_fep_china_uni_window_g1_ParamLimits

0xedca,	// (0x000114f6) popup_fep_china_uni_window_g2_ParamLimits

0xedca,	// (0x000114f6) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00011e84) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00011e84) popup_fep_china_uni_window_g

0x6b07,	// (0x00009233) fep_china_uni_eep_pane_g1

0x6b0f,	// (0x0000923b) fep_china_uni_eep_pane_t1

0x661d,	// (0x00008d49) aid_touch_area_size_smil_player

0x0734,	// (0x00002e60) lc0_clock_pane

0x0906,	// (0x00003032) status_pane_g5_ParamLimits

0x0906,	// (0x00003032) status_pane_g5

0x0274,	// (0x000029a0) popup_keymap_window

0x08ce,	// (0x00002ffa) status_icon_pane

0x678e,	// (0x00008eba) cell_ai5_widget_pane_g3_ParamLimits

0x67a2,	// (0x00008ece) cell_ai5_widget_pane_g4_ParamLimits

0x67ae,	// (0x00008eda) cell_ai5_widget_pane_g5_ParamLimits

0x67d2,	// (0x00008efe) cell_ai5_widget_pane_g8_ParamLimits

0x67d2,	// (0x00008efe) cell_ai5_widget_pane_g8

0x67e6,	// (0x00008f12) cell_ai5_widget_pane_g9_ParamLimits

0x67e6,	// (0x00008f12) cell_ai5_widget_pane_g9

0x67fa,	// (0x00008f26) cell_ai5_widget_pane_g10_ParamLimits

0x67fa,	// (0x00008f26) cell_ai5_widget_pane_g10

0x6b1e,	// (0x0000924a) status_icon_pane_g1

0xd630,	// (0x0000fd5c) bg_popup_sub_pane_cp13

0x6b26,	// (0x00009252) popup_keymap_window_t1

0xf56b,	// (0x00011c97) control_pane_g6_ParamLimits

0xf56b,	// (0x00011c97) control_pane_g6

0xf578,	// (0x00011ca4) control_pane_g7_ParamLimits

0xf578,	// (0x00011ca4) control_pane_g7

0xf585,	// (0x00011cb1) control_pane_g8_ParamLimits

0xf585,	// (0x00011cb1) control_pane_g8

0x6a41,	// (0x0000916d) dt_sta_controll_pane_ParamLimits

0x6a4e,	// (0x0000917a) dt_sta_indi_pane_ParamLimits

0x6a5f,	// (0x0000918b) dt_sta_title_pane_ParamLimits

0xdf33,	// (0x0001065f) aid_size_touch_scroll_bar_cale

0xbde5,	// (0x0000e511) popup_discreet_window_ParamLimits

0xbde5,	// (0x0000e511) popup_discreet_window

0xbe49,	// (0x0000e575) popup_sk_window

0x1255,	// (0x00003981) bg_popup_sub_pane_cp28_ParamLimits

0x1255,	// (0x00003981) bg_popup_sub_pane_cp28

0x6b34,	// (0x00009260) popup_discreet_window_g1_ParamLimits

0x6b34,	// (0x00009260) popup_discreet_window_g1

0x6b54,	// (0x00009280) popup_discreet_window_t1_ParamLimits

0x6b54,	// (0x00009280) popup_discreet_window_t1

0x6b72,	// (0x0000929e) popup_discreet_window_t2_ParamLimits

0x6b72,	// (0x0000929e) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x000125db) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x000125db) popup_discreet_window_t

0xd5fe,	// (0x0000fd2a) popup_sk_window_g1

0xd607,	// (0x0000fd33) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x000125e2) popup_sk_window_g

0x6be4,	// (0x00009310) popup_sk_window_t1

0x6bd6,	// (0x00009302) popup_sk_window_t1_copy1

0x677e,	// (0x00008eaa) cell_ai5_widget_pane_g2_ParamLimits

0x68d1,	// (0x00008ffd) cell_ai5_widget_pane_t9_ParamLimits

0x68d1,	// (0x00008ffd) cell_ai5_widget_pane_t9

0xd630,	// (0x0000fd5c) main_fep_fshwr2_pane

0x6bf2,	// (0x0000931e) aid_fshwr2_btn_pane

0x6bfa,	// (0x00009326) aid_fshwr2_syb_pane

0x6c02,	// (0x0000932e) aid_fshwr2_txt_pane

0x6c0a,	// (0x00009336) fshwr2_func_candi_pane

0x6c12,	// (0x0000933e) fshwr2_hwr_syb_pane

0x6c1a,	// (0x00009346) fshwr2_icf_pane

0xd630,	// (0x0000fd5c) fshwr2_icf_bg_pane

0x6c34,	// (0x00009360) fshwr2_icf_pane_t1_ParamLimits

0x6c34,	// (0x00009360) fshwr2_icf_pane_t1

0x3534,	// (0x00005c60) fshwr2_func_candi_pane_g1

0x6c4b,	// (0x00009377) fshwr2_func_candi_row_pane_ParamLimits

0x6c4b,	// (0x00009377) fshwr2_func_candi_row_pane

0x6c5c,	// (0x00009388) cell_fshwr2_syb_pane_ParamLimits

0x6c5c,	// (0x00009388) cell_fshwr2_syb_pane

0x3974,	// (0x000060a0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x3974,	// (0x000060a0) fshwr2_hwr_syb_pane_g1

0xd630,	// (0x0000fd5c) bg_popup_call_pane_cp01

0x6c73,	// (0x0000939f) fshwr2_func_candi_cell_pane_ParamLimits

0x6c73,	// (0x0000939f) fshwr2_func_candi_cell_pane

0x6c9e,	// (0x000093ca) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6c9e,	// (0x000093ca) fshwr2_func_candi_cell_bg_pane

0x6cb8,	// (0x000093e4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6cb8,	// (0x000093e4) fshwr2_func_candi_cell_pane_g1

0x6cd8,	// (0x00009404) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6cd8,	// (0x00009404) fshwr2_func_candi_cell_pane_t1

0xd630,	// (0x0000fd5c) bg_button_pane_cp08

0xf2a4,	// (0x000119d0) cell_fshwr2_syb_bg_pane

0x6ceb,	// (0x00009417) cell_fshwr2_syb_bg_pane_g1

0x6cf3,	// (0x0000941f) cell_fshwr2_syb_bg_pane_t1

0xe517,	// (0x00010c43) main_tmo_pane

0x1e53,	// (0x0000457f) uni_indicator_pane_g1_ParamLimits

0x1e68,	// (0x00004594) uni_indicator_pane_g2_ParamLimits

0x1e7e,	// (0x000045aa) uni_indicator_pane_g3_ParamLimits

0x1e94,	// (0x000045c0) uni_indicator_pane_g4_ParamLimits

0x1e94,	// (0x000045c0) uni_indicator_pane_g4

0x1ea8,	// (0x000045d4) uni_indicator_pane_g5_ParamLimits

0x1ea8,	// (0x000045d4) uni_indicator_pane_g5

0x1ebc,	// (0x000045e8) uni_indicator_pane_g6_ParamLimits

0x1ebc,	// (0x000045e8) uni_indicator_pane_g6

0xf949,	// (0x00012075) uni_indicator_pane_g_ParamLimits

0x4ffc,	// (0x00007728) popup_tmo_note_window_ParamLimits

0x4ffc,	// (0x00007728) popup_tmo_note_window

0xd630,	// (0x0000fd5c) fshwr2_bg_pane

0x6cc9,	// (0x000093f5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6cc9,	// (0x000093f5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x000125e7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x000125e7) fshwr2_func_candi_cell_pane_g

0x3534,	// (0x00005c60) bg_popup_window_pane_cp01

0x6d02,	// (0x0000942e) bg_popup_window_pane_g1_cp01

0x6d0b,	// (0x00009437) bg_popup_window_pane_cp22_ParamLimits

0x6d0b,	// (0x00009437) bg_popup_window_pane_cp22

0x6d19,	// (0x00009445) listscroll_tmo_link_pane_ParamLimits

0x6d19,	// (0x00009445) listscroll_tmo_link_pane

0x6d59,	// (0x00009485) popup_tmo_note_window_g1_ParamLimits

0x6d59,	// (0x00009485) popup_tmo_note_window_g1

0x6d66,	// (0x00009492) tmo_note_info_pane_ParamLimits

0x6d66,	// (0x00009492) tmo_note_info_pane

0x6d80,	// (0x000094ac) list_tmo_note_info_pane_g1_ParamLimits

0x6d80,	// (0x000094ac) list_tmo_note_info_pane_g1

0x6d97,	// (0x000094c3) list_tmo_note_info_pane_g2_ParamLimits

0x6d97,	// (0x000094c3) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x000125ec) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x000125ec) list_tmo_note_info_pane_g

0x6db3,	// (0x000094df) list_tmo_note_info_text_pane_ParamLimits

0x6db3,	// (0x000094df) list_tmo_note_info_text_pane

0x6e34,	// (0x00009560) list_tmo_link_pane

0x6e41,	// (0x0000956d) scroll_pane_cp20

0x6e4e,	// (0x0000957a) list_single_tmo_link_pane_ParamLimits

0x6e4e,	// (0x0000957a) list_single_tmo_link_pane

0x6e5e,	// (0x0000958a) list_single_tmo_link_pane_t1

0x6e6c,	// (0x00009598) list_tmo_note_info_text_pane_t1_ParamLimits

0x6e6c,	// (0x00009598) list_tmo_note_info_text_pane_t1

0xe73d,	// (0x00010e69) aid_size_touch_scroll_bar_cp01_ParamLimits

0xe73d,	// (0x00010e69) aid_size_touch_scroll_bar_cp01

0xe5b7,	// (0x00010ce3) aid_size_touch_slider_marker

0xbe35,	// (0x0000e561) popup_settings_window_ParamLimits

0xbe35,	// (0x0000e561) popup_settings_window

0x0137,	// (0x00002863) popup_candi_list_indi_window

0x05fd,	// (0x00002d29) aid_touch_navi_pane_ParamLimits

0xce51,	// (0x0000f57d) rs_clock_indi_pane

0xce5a,	// (0x0000f586) sctrl_sk_bottom_pane_ParamLimits

0xce6b,	// (0x0000f597) sctrl_sk_top_pane_ParamLimits

0xcf73,	// (0x0000f69f) popup_fep_tooltip_window

0x6742,	// (0x00008e6e) aid_size_cell_widget_grid_ParamLimits

0x6772,	// (0x00008e9e) cell_ai5_widget_pane_g1_ParamLimits

0x6772,	// (0x00008e9e) cell_ai5_widget_pane_g1

0x67ba,	// (0x00008ee6) cell_ai5_widget_pane_g6_ParamLimits

0x67c6,	// (0x00008ef2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001256a) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001256a) cell_ai5_widget_pane_g

0x68f5,	// (0x00009021) cell_ai5_widget_pane_t10_ParamLimits

0x68f5,	// (0x00009021) cell_ai5_widget_pane_t10

0x6907,	// (0x00009033) grid_ai5_widget_pane_ParamLimits

0x69a7,	// (0x000090d3) cell_contacts_ai5_widget_pane_ParamLimits

0x69a7,	// (0x000090d3) cell_contacts_ai5_widget_pane

0x6b87,	// (0x000092b3) popup_discreet_window_t3_ParamLimits

0x6b87,	// (0x000092b3) popup_discreet_window_t3

0x6c22,	// (0x0000934e) popup_fshwr2_char_preview_window_ParamLimits

0x6c22,	// (0x0000934e) popup_fshwr2_char_preview_window

0x6dd1,	// (0x000094fd) tmo_note_info_pane_t1

0x6de6,	// (0x00009512) tmo_note_info_pane_t2

0x6dfb,	// (0x00009527) tmo_note_info_pane_t3

0x6e10,	// (0x0000953c) tmo_note_info_pane_t4

0x6e22,	// (0x0000954e) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x000125f1) tmo_note_info_pane_t

0x6e34,	// (0x00009560) list_tmo_link_pane_ParamLimits

0x6e41,	// (0x0000956d) scroll_pane_cp20_ParamLimits

0xd630,	// (0x0000fd5c) bg_popup_fep_char_preview_window_cp01

0x6e85,	// (0x000095b1) popup_fshwr2_char_preview_window_t1

0x6e93,	// (0x000095bf) popup_candi_list_indi_window_g1

0x6e9c,	// (0x000095c8) bg_cell_contacts_ai5_widget_pane

0x6ea8,	// (0x000095d4) cell_contacts_ai5_widget_pane_g1

0x6ebc,	// (0x000095e8) cell_contacts_ai5_widget_pane_g2

0x6ecb,	// (0x000095f7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x000125fc) cell_contacts_ai5_widget_pane_g

0x6ede,	// (0x0000960a) cell_contacts_ai5_widget_pane_t1

0xe517,	// (0x00010c43) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6f56,	// (0x00009682) settings_container_pane

0xf2a4,	// (0x000119d0) listscroll_set_pane_copy1

0x2b3d,	// (0x00005269) scroll_pane_cp121_copy1

0x6f62,	// (0x0000968e) set_content_pane_copy1

0x6f6a,	// (0x00009696) aid_height_set_list_copy1_ParamLimits

0x6f6a,	// (0x00009696) aid_height_set_list_copy1

0x215b,	// (0x00004887) aid_size_parent_copy1_ParamLimits

0x215b,	// (0x00004887) aid_size_parent_copy1

0x6f76,	// (0x000096a2) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6f76,	// (0x000096a2) button_value_adjust_pane_cp6_copy1

0x0111,	// (0x0000283d) list_highlight_pane_cp2_copy1_ParamLimits

0x0111,	// (0x0000283d) list_highlight_pane_cp2_copy1

0x6f8a,	// (0x000096b6) list_set_pane_copy1_ParamLimits

0x6f8a,	// (0x000096b6) list_set_pane_copy1

0x6ef3,	// (0x0000961f) main_pane_set_t1_copy1_ParamLimits

0x6ef3,	// (0x0000961f) main_pane_set_t1_copy1

0x6f2d,	// (0x00009659) main_pane_set_t2_copy1_ParamLimits

0x6f2d,	// (0x00009659) main_pane_set_t2_copy1

0x7018,	// (0x00009744) main_pane_set_t3_copy1

0x7026,	// (0x00009752) main_pane_set_t4_copy1

0x6f4a,	// (0x00009676) set_content_pane_g1_copy1_ParamLimits

0x6f4a,	// (0x00009676) set_content_pane_g1_copy1

0x7034,	// (0x00009760) setting_code_pane_copy1

0x703c,	// (0x00009768) setting_slider_graphic_pane_copy1

0x703c,	// (0x00009768) setting_slider_pane_copy1

0x7044,	// (0x00009770) setting_text_pane_copy1

0x703c,	// (0x00009768) setting_volume_pane_copy1

0x704c,	// (0x00009778) settings_code_pane_cp2_copy1

0x7054,	// (0x00009780) settings_code_pane_cp_copy1_ParamLimits

0x7054,	// (0x00009780) settings_code_pane_cp_copy1

0x7068,	// (0x00009794) volume_set_pane_copy1

0x7070,	// (0x0000979c) volume_set_pane_g10_copy1

0x7078,	// (0x000097a4) volume_set_pane_g1_copy1

0x7080,	// (0x000097ac) volume_set_pane_g2_copy1

0x7088,	// (0x000097b4) volume_set_pane_g3_copy1

0x7090,	// (0x000097bc) volume_set_pane_g4_copy1

0x7098,	// (0x000097c4) volume_set_pane_g5_copy1

0x70a0,	// (0x000097cc) volume_set_pane_g6_copy1

0x70a8,	// (0x000097d4) volume_set_pane_g7_copy1

0x70b0,	// (0x000097dc) volume_set_pane_g8_copy1

0x70b8,	// (0x000097e4) volume_set_pane_g9_copy1

0xd801,	// (0x0000ff2d) bg_set_opt_pane_cp_copy1_ParamLimits

0xd801,	// (0x0000ff2d) bg_set_opt_pane_cp_copy1

0xdab6,	// (0x000101e2) setting_slider_pane_t1_copy1_ParamLimits

0xdab6,	// (0x000101e2) setting_slider_pane_t1_copy1

0x70c0,	// (0x000097ec) setting_slider_pane_t2_copy1_ParamLimits

0x70c0,	// (0x000097ec) setting_slider_pane_t2_copy1

0x70d9,	// (0x00009805) setting_slider_pane_t3_copy1_ParamLimits

0x70d9,	// (0x00009805) setting_slider_pane_t3_copy1

0xdacc,	// (0x000101f8) slider_set_pane_copy1_ParamLimits

0xdacc,	// (0x000101f8) slider_set_pane_copy1

0xe63d,	// (0x00010d69) set_opt_bg_pane_g1_copy2

0xe645,	// (0x00010d71) set_opt_bg_pane_g2_copy2

0x70f0,	// (0x0000981c) set_opt_bg_pane_g3_copy2

0xe655,	// (0x00010d81) set_opt_bg_pane_g4_copy2

0xe65d,	// (0x00010d89) set_opt_bg_pane_g5_copy2

0xe665,	// (0x00010d91) set_opt_bg_pane_g6_copy2

0x70f8,	// (0x00009824) set_opt_bg_pane_g7_copy2

0x7100,	// (0x0000982c) set_opt_bg_pane_g8_copy2

0x7108,	// (0x00009834) set_opt_bg_pane_g9_copy2

0x20a2,	// (0x000047ce) aid_size_touch_slider_mark_copy1_ParamLimits

0x20a2,	// (0x000047ce) aid_size_touch_slider_mark_copy1

0x2291,	// (0x000049bd) slider_set_pane_g1_copy1

0x229a,	// (0x000049c6) slider_set_pane_g2_copy1

0x20cf,	// (0x000047fb) slider_set_pane_g3_copy1_ParamLimits

0x20cf,	// (0x000047fb) slider_set_pane_g3_copy1

0x20e3,	// (0x0000480f) slider_set_pane_g4_copy1_ParamLimits

0x20e3,	// (0x0000480f) slider_set_pane_g4_copy1

0x20fb,	// (0x00004827) slider_set_pane_g5_copy1_ParamLimits

0x20fb,	// (0x00004827) slider_set_pane_g5_copy1

0x20cf,	// (0x000047fb) slider_set_pane_g6_copy1_ParamLimits

0x20cf,	// (0x000047fb) slider_set_pane_g6_copy1

0x7110,	// (0x0000983c) slider_set_pane_g7_copy1_ParamLimits

0x7110,	// (0x0000983c) slider_set_pane_g7_copy1

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp2_copy1

0xd843,	// (0x0000ff6f) setting_slider_graphic_pane_g1_copy1

0x7126,	// (0x00009852) setting_slider_graphic_pane_t1_copy1

0x7135,	// (0x00009861) setting_slider_graphic_pane_t2_copy1

0x7144,	// (0x00009870) slider_set_pane_cp_copy1

0x7154,	// (0x00009880) input_focus_pane_cp1_copy1

0x715d,	// (0x00009889) list_set_text_pane_copy1

0x7165,	// (0x00009891) setting_text_pane_g1_copy1

0x716e,	// (0x0000989a) set_text_pane_t1_copy1

0x7154,	// (0x00009880) input_focus_pane_cp2_copy1

0x7165,	// (0x00009891) setting_code_pane_g1_copy1

0x7187,	// (0x000098b3) setting_code_pane_t1_copy1

0x7195,	// (0x000098c1) list_set_graphic_pane_copy1

0xd721,	// (0x0000fe4d) bg_set_opt_pane_cp4_copy1

0x71a9,	// (0x000098d5) list_set_graphic_pane_g1_copy1_ParamLimits

0x71a9,	// (0x000098d5) list_set_graphic_pane_g1_copy1

0x71b5,	// (0x000098e1) list_set_graphic_pane_g2_copy1

0xf01f,	// (0x0001174b) list_set_graphic_pane_t1_copy1_ParamLimits

0xf01f,	// (0x0001174b) list_set_graphic_pane_t1_copy1

0x3534,	// (0x00005c60) rs_clock_indi_pane_g1

0x71bd,	// (0x000098e9) rs_clock_indi_pane_t1

0x71cb,	// (0x000098f7) rs_indi_pane

0x71d3,	// (0x000098ff) rs_indi_pane_g1

0x71dc,	// (0x00009908) rs_indi_pane_g2

0x6e93,	// (0x000095bf) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x00012603) rs_indi_pane_g

0xf2a4,	// (0x000119d0) bg_popup_preview_window_pane_cp03

0x71e5,	// (0x00009911) popup_fep_tooltip_window_t1

0x4692,	// (0x00006dbe) popup_note2_window_g2_ParamLimits

0x4692,	// (0x00006dbe) popup_note2_window_g2

0x0001,

0xfc7c,	// (0x000123a8) popup_note2_window_g_ParamLimits

0xfc7c,	// (0x000123a8) popup_note2_window_g

0x4c8b,	// (0x000073b7) bg_popup_sub_pane_cp11_ParamLimits

0x4c98,	// (0x000073c4) cell_ai3_links_pane_g1_ParamLimits

0x4caf,	// (0x000073db) cell_ai3_links_pane_t1

0x716e,	// (0x0000989a) set_text_pane_t1_copy1_ParamLimits

0xf1cb,	// (0x000118f7) cell_graphic_popup_pane_cp2_ParamLimits

0xf1cb,	// (0x000118f7) cell_graphic_popup_pane_cp2

0x71f3,	// (0x0000991f) cell_graphic_popup_pane_g1_cp2

0xdde2,	// (0x0001050e) cell_graphic_popup_pane_g2_cp2

0x71fb,	// (0x00009927) cell_graphic_popup_pane_g3_cp2

0x7203,	// (0x0000992f) cell_graphic_popup_pane_t2_cp2

0xddf3,	// (0x0001051f) grid_highlight_pane_cp3_cp2

0xea29,	// (0x00011155) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe517,	// (0x00010c43) main_tmo_pane_ParamLimits

0x4ff4,	// (0x00007720) popup_tmo_big_image_note_window

0x6762,	// (0x00008e8e) cell_ai5_widget_list_pane

0x676a,	// (0x00008e96) cell_ai5_widget_lrg_icon_pane

0x6dd1,	// (0x000094fd) tmo_note_info_pane_t1_ParamLimits

0x6de6,	// (0x00009512) tmo_note_info_pane_t2_ParamLimits

0x6dfb,	// (0x00009527) tmo_note_info_pane_t3_ParamLimits

0x6e10,	// (0x0000953c) tmo_note_info_pane_t4_ParamLimits

0x6e22,	// (0x0000954e) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x000125f1) tmo_note_info_pane_t_ParamLimits

0x6f56,	// (0x00009682) settings_container_pane_ParamLimits

0x714c,	// (0x00009878) indicator_popup_pane_cp5

0x714c,	// (0x00009878) indicator_popup_pane_cp6

0x7195,	// (0x000098c1) list_set_graphic_pane_copy1_ParamLimits

0xd630,	// (0x0000fd5c) bg_popup_window_pane_cp23

0x7211,	// (0x0000993d) popup_tmo_big_image_note_window_g1

0x721a,	// (0x00009946) popup_tmo_big_image_note_window_t1

0x7228,	// (0x00009954) popup_tmo_big_image_note_window_t2

0x7236,	// (0x00009962) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001260a) popup_tmo_big_image_note_window_t

0x7244,	// (0x00009970) cell_ai5_widget_lrg_icon_pane_g1

0x724c,	// (0x00009978) cell_ai5_widget_lrg_icon_pane_t1

0x725a,	// (0x00009986) cell_ai5_widget_list_row_pane_ParamLimits

0x725a,	// (0x00009986) cell_ai5_widget_list_row_pane

0x7273,	// (0x0000999f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7273,	// (0x0000999f) cell_ai5_widget_list_row_pane_g1

0x7280,	// (0x000099ac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7280,	// (0x000099ac) cell_ai5_widget_list_row_pane_t1

0x7298,	// (0x000099c4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7298,	// (0x000099c4) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x00012611) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x00012611) cell_ai5_widget_list_row_pane_t

0xbd0e,	// (0x0000e43a) main_fep_vtchi_ss_pane

0x72aa,	// (0x000099d6) popup_fep_char_pre_window

0x72b2,	// (0x000099de) popup_fep_ituss_window

0x72bb,	// (0x000099e7) popup_fep_vkbss_window

0x72c4,	// (0x000099f0) grid_vkbss_keypad_pane_ParamLimits

0x72c4,	// (0x000099f0) grid_vkbss_keypad_pane

0x72d4,	// (0x00009a00) ituss_keypad_pane

0x72dc,	// (0x00009a08) aid_vkbss_key_offset_ParamLimits

0x72dc,	// (0x00009a08) aid_vkbss_key_offset

0x72eb,	// (0x00009a17) cell_vkbss_key_pane_ParamLimits

0x72eb,	// (0x00009a17) cell_vkbss_key_pane

0x7301,	// (0x00009a2d) bg_cell_vkbss_key_g1_ParamLimits

0x7301,	// (0x00009a2d) bg_cell_vkbss_key_g1

0x730d,	// (0x00009a39) cell_vkbss_key_3p_pane_ParamLimits

0x730d,	// (0x00009a39) cell_vkbss_key_3p_pane

0x7321,	// (0x00009a4d) cell_vkbss_key_g1_ParamLimits

0x7321,	// (0x00009a4d) cell_vkbss_key_g1

0x7335,	// (0x00009a61) cell_vkbss_key_t1_ParamLimits

0x7335,	// (0x00009a61) cell_vkbss_key_t1

0x7360,	// (0x00009a8c) cell_ituss_key_pane_ParamLimits

0x7360,	// (0x00009a8c) cell_ituss_key_pane

0x736f,	// (0x00009a9b) bg_cell_ituss_key_g1_ParamLimits

0x736f,	// (0x00009a9b) bg_cell_ituss_key_g1

0x737b,	// (0x00009aa7) cell_ituss_key_pane_g1_ParamLimits

0x737b,	// (0x00009aa7) cell_ituss_key_pane_g1

0x7387,	// (0x00009ab3) cell_ituss_key_pane_g2_ParamLimits

0x7387,	// (0x00009ab3) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x00012616) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x00012616) cell_ituss_key_pane_g

0x739a,	// (0x00009ac6) cell_ituss_key_t1_ParamLimits

0x739a,	// (0x00009ac6) cell_ituss_key_t1

0x73b8,	// (0x00009ae4) cell_ituss_key_t2_ParamLimits

0x73b8,	// (0x00009ae4) cell_ituss_key_t2

0x73d7,	// (0x00009b03) cell_ituss_key_t3_ParamLimits

0x73d7,	// (0x00009b03) cell_ituss_key_t3

0x73f6,	// (0x00009b22) cell_ituss_key_t4_ParamLimits

0x73f6,	// (0x00009b22) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001261b) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001261b) cell_ituss_key_t

0x7415,	// (0x00009b41) cell_vkbss_key_3p_pane_g1

0x741d,	// (0x00009b49) cell_vkbss_key_3p_pane_g2

0x7425,	// (0x00009b51) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00012624) cell_vkbss_key_3p_pane_g

0xd630,	// (0x0000fd5c) bg_popup_fep_char_preview_window_cp02

0x742d,	// (0x00009b59) popup_fep_char_pre_window_t1

0x6738,	// (0x00008e64) main_ai5_sk_pane

0x6e9c,	// (0x000095c8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6ea8,	// (0x000095d4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6ebc,	// (0x000095e8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6ecb,	// (0x000095f7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x000125fc) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6ede,	// (0x0000960a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe517,	// (0x00010c43) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x743c,	// (0x00009b68) main_ai5_sk_pane_g1
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
