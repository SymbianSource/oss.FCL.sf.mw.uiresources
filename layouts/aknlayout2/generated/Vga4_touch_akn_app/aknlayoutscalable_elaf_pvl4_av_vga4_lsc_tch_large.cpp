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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00049b96 };

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
0x9bc5,	// (0x0005375b) Screen

0x9bd1,	// (0x00053767) application_window_ParamLimits

0x9bd1,	// (0x00053767) application_window

0x6f39,	// (0x00050acf) screen_g1

0x9c09,	// (0x0005379f) area_bottom_pane_ParamLimits

0x9c09,	// (0x0005379f) area_bottom_pane

0xef00,	// (0x00058a96) area_top_pane_ParamLimits

0xef00,	// (0x00058a96) area_top_pane

0xef94,	// (0x00058b2a) main_pane_ParamLimits

0xef94,	// (0x00058b2a) main_pane

0x6f43,	// (0x00050ad9) misc_graphics

0xb953,	// (0x000554e9) battery_pane_ParamLimits

0xb953,	// (0x000554e9) battery_pane

0x2e20,	// (0x0004c9b6) bg_status_flat_pane_g8

0x2e28,	// (0x0004c9be) bg_status_flat_pane_g9

0x222a,	// (0x0004bdc0) context_pane_ParamLimits

0x222a,	// (0x0004bdc0) context_pane

0xbaca,	// (0x00055660) navi_pane_ParamLimits

0xbaca,	// (0x00055660) navi_pane

0xbb54,	// (0x000556ea) signal_pane_ParamLimits

0xbb54,	// (0x000556ea) signal_pane

0x0008,

0xf879,	// (0x0005940f) bg_status_flat_pane_g

0xbbe4,	// (0x0005577a) status_pane_g1_ParamLimits

0xbbe4,	// (0x0005577a) status_pane_g1

0xbbfa,	// (0x00055790) status_pane_g2_ParamLimits

0xbbfa,	// (0x00055790) status_pane_g2

0x246b,	// (0x0004c001) status_pane_g3_ParamLimits

0x246b,	// (0x0004c001) status_pane_g3

0x0004,

0xf7a5,	// (0x0005933b) status_pane_g_ParamLimits

0xf7a5,	// (0x0005933b) status_pane_g

0xbc06,	// (0x0005579c) title_pane_ParamLimits

0xbc06,	// (0x0005579c) title_pane

0xbc69,	// (0x000557ff) uni_indicator_pane_ParamLimits

0xbc69,	// (0x000557ff) uni_indicator_pane

0x044b,	// (0x00049fe1) bg_list_pane_ParamLimits

0x044b,	// (0x00049fe1) bg_list_pane

0xb181,	// (0x00054d17) find_pane

0xb189,	// (0x00054d1f) listscroll_app_pane_ParamLimits

0xb189,	// (0x00054d1f) listscroll_app_pane

0x047f,	// (0x0004a015) listscroll_form_pane

0xb199,	// (0x00054d2f) listscroll_gen_pane_ParamLimits

0xb199,	// (0x00054d2f) listscroll_gen_pane

0x049b,	// (0x0004a031) listscroll_set_pane

0x39bf,	// (0x0004d555) main_idle_act_pane

0xe7f5,	// (0x0005838b) main_idle_trad_pane

0xe7f5,	// (0x0005838b) main_list_empty_pane

0x04b5,	// (0x0004a04b) main_midp_pane

0x04c1,	// (0x0004a057) main_pane_g1_ParamLimits

0x04c1,	// (0x0004a057) main_pane_g1

0xb1ad,	// (0x00054d43) popup_ai_message_window_ParamLimits

0xb1ad,	// (0x00054d43) popup_ai_message_window

0xb24d,	// (0x00054de3) popup_fep_china_uni_window_ParamLimits

0xb24d,	// (0x00054de3) popup_fep_china_uni_window

0x1be3,	// (0x0004b779) popup_fep_japan_candidate_window_ParamLimits

0x1be3,	// (0x0004b779) popup_fep_japan_candidate_window

0x1c0d,	// (0x0004b7a3) popup_fep_japan_predictive_window_ParamLimits

0x1c0d,	// (0x0004b7a3) popup_fep_japan_predictive_window

0xb2ad,	// (0x00054e43) popup_find_window

0xb2ca,	// (0x00054e60) popup_grid_graphic_window_ParamLimits

0xb2ca,	// (0x00054e60) popup_grid_graphic_window

0x1c7e,	// (0x0004b814) popup_large_graphic_colour_window

0xb36e,	// (0x00054f04) popup_menu_window_ParamLimits

0xb36e,	// (0x00054f04) popup_menu_window

0xb55e,	// (0x000550f4) popup_note_image_window

0xb51e,	// (0x000550b4) popup_note_wait_window_ParamLimits

0xb51e,	// (0x000550b4) popup_note_wait_window

0xb576,	// (0x0005510c) popup_note_window_ParamLimits

0xb576,	// (0x0005510c) popup_note_window

0xb624,	// (0x000551ba) popup_query_code_window_ParamLimits

0xb624,	// (0x000551ba) popup_query_code_window

0x1eea,	// (0x0004ba80) popup_query_data_code_window_ParamLimits

0x1eea,	// (0x0004ba80) popup_query_data_code_window

0xb664,	// (0x000551fa) popup_query_data_window_ParamLimits

0xb664,	// (0x000551fa) popup_query_data_window

0xb6f8,	// (0x0005528e) popup_query_sat_info_window_ParamLimits

0xb6f8,	// (0x0005528e) popup_query_sat_info_window

0xb7a3,	// (0x00055339) popup_snote_single_graphic_window_ParamLimits

0xb7a3,	// (0x00055339) popup_snote_single_graphic_window

0xb7a3,	// (0x00055339) popup_snote_single_text_window_ParamLimits

0xb7a3,	// (0x00055339) popup_snote_single_text_window

0x1f85,	// (0x0004bb1b) popup_sub_window_general

0x20cb,	// (0x0004bc61) popup_window_general_ParamLimits

0x20cb,	// (0x0004bc61) popup_window_general

0x20e4,	// (0x0004bc7a) power_save_pane

0xafef,	// (0x00054b85) control_pane_g1_ParamLimits

0xafef,	// (0x00054b85) control_pane_g1

0xb018,	// (0x00054bae) control_pane_g2_ParamLimits

0xb018,	// (0x00054bae) control_pane_g2

0xe94a,	// (0x000584e0) control_pane_g3_ParamLimits

0xe94a,	// (0x000584e0) control_pane_g3

0x0007,

0xf78d,	// (0x00059323) control_pane_g_ParamLimits

0xf78d,	// (0x00059323) control_pane_g

0xb07a,	// (0x00054c10) control_pane_t1_ParamLimits

0xb07a,	// (0x00054c10) control_pane_t1

0xb0d8,	// (0x00054c6e) control_pane_t2_ParamLimits

0xb0d8,	// (0x00054c6e) control_pane_t2

0x0002,

0xf79e,	// (0x00059334) control_pane_t_ParamLimits

0xf79e,	// (0x00059334) control_pane_t

0xaf48,	// (0x00054ade) navi_navi_volume_pane_cp1

0xaf50,	// (0x00054ae6) status_small_icon_pane

0xe916,	// (0x000584ac) status_small_pane_g1_ParamLimits

0xe916,	// (0x000584ac) status_small_pane_g1

0xaf58,	// (0x00054aee) status_small_pane_g2_ParamLimits

0xaf58,	// (0x00054aee) status_small_pane_g2

0xaf64,	// (0x00054afa) status_small_pane_g3_ParamLimits

0xaf64,	// (0x00054afa) status_small_pane_g3

0xaf70,	// (0x00054b06) status_small_pane_g4_ParamLimits

0xaf70,	// (0x00054b06) status_small_pane_g4

0xaf7c,	// (0x00054b12) status_small_pane_g5_ParamLimits

0xaf7c,	// (0x00054b12) status_small_pane_g5

0xaf8a,	// (0x00054b20) status_small_pane_g6_ParamLimits

0xaf8a,	// (0x00054b20) status_small_pane_g6

0x0007,

0xf77c,	// (0x00059312) status_small_pane_g_ParamLimits

0xf77c,	// (0x00059312) status_small_pane_g

0xafb9,	// (0x00054b4f) status_small_pane_t1

0xafdb,	// (0x00054b71) status_small_wait_pane_ParamLimits

0xafdb,	// (0x00054b71) status_small_wait_pane

0xa997,	// (0x0005452d) aid_levels_signal_ParamLimits

0xa997,	// (0x0005452d) aid_levels_signal

0xa9af,	// (0x00054545) signal_pane_g1_ParamLimits

0xa9af,	// (0x00054545) signal_pane_g1

0xa9ca,	// (0x00054560) signal_pane_g2_ParamLimits

0xa9ca,	// (0x00054560) signal_pane_g2

0x0003,

0xf70d,	// (0x000592a3) signal_pane_g_ParamLimits

0xf70d,	// (0x000592a3) signal_pane_g

0xaa12,	// (0x000545a8) context_pane_g1

0x9df5,	// (0x0005398b) title_pane_g1

0x9e20,	// (0x000539b6) title_pane_t1

0x6f65,	// (0x00050afb) title_pane_t2

0x6f8b,	// (0x00050b21) title_pane_t3

0x0002,

0xf557,	// (0x000590ed) title_pane_t

0xbc91,	// (0x00055827) aid_levels_battery_ParamLimits

0xbc91,	// (0x00055827) aid_levels_battery

0xbcad,	// (0x00055843) battery_pane_g1_ParamLimits

0xbcad,	// (0x00055843) battery_pane_g1

0xbcca,	// (0x00055860) battery_pane_g2_ParamLimits

0xbcca,	// (0x00055860) battery_pane_g2

0x0001,

0xf7b0,	// (0x00059346) battery_pane_g_ParamLimits

0xf7b0,	// (0x00059346) battery_pane_g

0xc805,	// (0x0005639b) uni_indicator_pane_g1

0xc81b,	// (0x000563b1) uni_indicator_pane_g2

0xc831,	// (0x000563c7) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x000594b7) uni_indicator_pane_g

0xadce,	// (0x00054964) navi_icon_pane_ParamLimits

0xadce,	// (0x00054964) navi_icon_pane

0xad0a,	// (0x000548a0) navi_midp_pane

0xadea,	// (0x00054980) navi_navi_pane

0xadf4,	// (0x0005498a) navi_text_pane_ParamLimits

0xadf4,	// (0x0005498a) navi_text_pane

0x6f39,	// (0x00050acf) status_small_wait_pane_g1

0x7286,	// (0x00050e1c) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x000594b2) status_small_wait_pane_g

0xc76c,	// (0x00056302) navi_navi_icon_text_pane

0xc774,	// (0x0005630a) navi_navi_pane_g1_ParamLimits

0xc774,	// (0x0005630a) navi_navi_pane_g1

0xc786,	// (0x0005631c) navi_navi_pane_g2_ParamLimits

0xc786,	// (0x0005631c) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00059480) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00059480) navi_navi_pane_g

0x34a9,	// (0x0004d03f) navi_navi_tabs_pane

0xc798,	// (0x0005632e) navi_navi_text_pane

0xc76c,	// (0x00056302) navi_navi_volume_pane

0xc75a,	// (0x000562f0) navi_text_pane_t1

0xc74e,	// (0x000562e4) navi_icon_pane_g1

0x33a0,	// (0x0004cf36) navi_navi_text_pane_t1

0xbf08,	// (0x00055a9e) navi_navi_volume_pane_g1

0xbf10,	// (0x00055aa6) volume_small_pane

0xc696,	// (0x0005622c) navi_navi_icon_text_pane_g1

0xc69e,	// (0x00056234) navi_navi_icon_text_pane_t1

0xadea,	// (0x00054980) navi_tabs_2_long_pane

0xadea,	// (0x00054980) navi_tabs_2_pane

0xadea,	// (0x00054980) navi_tabs_3_long_pane

0xadea,	// (0x00054980) navi_tabs_3_pane

0xadea,	// (0x00054980) navi_tabs_4_pane

0xbee8,	// (0x00055a7e) tabs_2_active_pane_ParamLimits

0xbee8,	// (0x00055a7e) tabs_2_active_pane

0xbef8,	// (0x00055a8e) tabs_2_passive_pane_ParamLimits

0xbef8,	// (0x00055a8e) tabs_2_passive_pane

0xbeb6,	// (0x00055a4c) tabs_3_active_pane_ParamLimits

0xbeb6,	// (0x00055a4c) tabs_3_active_pane

0xbec6,	// (0x00055a5c) tabs_3_passive_pane_ParamLimits

0xbec6,	// (0x00055a5c) tabs_3_passive_pane

0xbed7,	// (0x00055a6d) tabs_3_passive_pane_cp_ParamLimits

0xbed7,	// (0x00055a6d) tabs_3_passive_pane_cp

0xbe72,	// (0x00055a08) tabs_4_active_pane_ParamLimits

0xbe72,	// (0x00055a08) tabs_4_active_pane

0xbe83,	// (0x00055a19) tabs_4_passive_pane_ParamLimits

0xbe83,	// (0x00055a19) tabs_4_passive_pane

0xbe94,	// (0x00055a2a) tabs_4_passive_pane_cp_ParamLimits

0xbe94,	// (0x00055a2a) tabs_4_passive_pane_cp

0xbea5,	// (0x00055a3b) tabs_4_passive_pane_cp2_ParamLimits

0xbea5,	// (0x00055a3b) tabs_4_passive_pane_cp2

0xbe4e,	// (0x000559e4) tabs_2_long_active_pane_ParamLimits

0xbe4e,	// (0x000559e4) tabs_2_long_active_pane

0xbe60,	// (0x000559f6) tabs_2_long_passive_pane_ParamLimits

0xbe60,	// (0x000559f6) tabs_2_long_passive_pane

0xbe03,	// (0x00055999) tabs_3_long_active_pane_ParamLimits

0xbe03,	// (0x00055999) tabs_3_long_active_pane

0xbe1c,	// (0x000559b2) tabs_3_long_passive_pane_ParamLimits

0xbe1c,	// (0x000559b2) tabs_3_long_passive_pane

0xbe35,	// (0x000559cb) tabs_3_long_passive_pane_cp_ParamLimits

0xbe35,	// (0x000559cb) tabs_3_long_passive_pane_cp

0x073c,	// (0x0004a2d2) volume_small_pane_g1

0xbdb2,	// (0x00055948) volume_small_pane_g2

0xbdbb,	// (0x00055951) volume_small_pane_g3

0xbdc4,	// (0x0005595a) volume_small_pane_g4

0xbdcd,	// (0x00055963) volume_small_pane_g5

0xbdd6,	// (0x0005596c) volume_small_pane_g6

0xbddf,	// (0x00055975) volume_small_pane_g7

0xbde8,	// (0x0005597e) volume_small_pane_g8

0xbdf1,	// (0x00055987) volume_small_pane_g9

0xbdfa,	// (0x00055990) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005944c) volume_small_pane_g

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp2_ParamLimits

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp2

0x9eac,	// (0x00053a42) tabs_3_active_pane_g1

0x9eb4,	// (0x00053a4a) tabs_3_active_pane_t1

0x70d0,	// (0x00050c66) bg_passive_tab_pane_cp2_ParamLimits

0x70d0,	// (0x00050c66) bg_passive_tab_pane_cp2

0x9eac,	// (0x00053a42) tabs_3_passive_pane_g1

0x9eb4,	// (0x00053a4a) tabs_3_passive_pane_t1

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp3_ParamLimits

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp3

0x9ec6,	// (0x00053a5c) tabs_4_active_pane_g1

0x9ece,	// (0x00053a64) tabs_4_active_pane_t1

0x70d0,	// (0x00050c66) bg_passive_tab_pane_cp3_ParamLimits

0x70d0,	// (0x00050c66) bg_passive_tab_pane_cp3

0x9ec6,	// (0x00053a5c) tabs_4_1_passive_pane_g1

0x9ece,	// (0x00053a64) tabs_4_1_passive_pane_t1

0x04b5,	// (0x0004a04b) list_highlight_pane_cp2

0xc8c6,	// (0x0005645c) list_set_pane_ParamLimits

0xc8c6,	// (0x0005645c) list_set_pane

0xc98e,	// (0x00056524) main_pane_set_t1_ParamLimits

0xc98e,	// (0x00056524) main_pane_set_t1

0xc9ae,	// (0x00056544) main_pane_set_t2_ParamLimits

0xc9ae,	// (0x00056544) main_pane_set_t2

0xc9c2,	// (0x00056558) main_pane_set_t3_ParamLimits

0xc9c2,	// (0x00056558) main_pane_set_t3

0xc9d6,	// (0x0005656c) main_pane_set_t4_ParamLimits

0xc9d6,	// (0x0005656c) main_pane_set_t4

0x0003,

0xf986,	// (0x0005951c) main_pane_set_t_ParamLimits

0xf986,	// (0x0005951c) main_pane_set_t

0xc9ea,	// (0x00056580) setting_code_pane

0x3b13,	// (0x0004d6a9) setting_slider_graphic_pane

0x3b13,	// (0x0004d6a9) setting_slider_pane

0x3b13,	// (0x0004d6a9) setting_text_pane

0x3b13,	// (0x0004d6a9) setting_volume_pane

0xf0a3,	// (0x00058c39) volume_set_pane

0x6f9d,	// (0x00050b33) bg_set_opt_pane_cp

0xf0ad,	// (0x00058c43) setting_slider_pane_t1

0xf0c6,	// (0x00058c5c) setting_slider_pane_t2

0xf0e0,	// (0x00058c76) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000590f4) setting_slider_pane_t

0xf0f8,	// (0x00058c8e) slider_set_pane

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp2

0x6fab,	// (0x00050b41) setting_slider_graphic_pane_g1

0xf10e,	// (0x00058ca4) setting_slider_graphic_pane_t1

0xf11e,	// (0x00058cb4) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000590fb) setting_slider_graphic_pane_t

0xf12e,	// (0x00058cc4) slider_set_pane_cp

0x6f43,	// (0x00050ad9) input_focus_pane_cp1

0x39a6,	// (0x0004d53c) list_set_text_pane

0x6f39,	// (0x00050acf) setting_text_pane_g1

0x6f43,	// (0x00050ad9) input_focus_pane_cp2

0x6f39,	// (0x00050acf) setting_code_pane_g1

0x6fb4,	// (0x00050b4a) setting_code_pane_t1

0xe5db,	// (0x00058171) set_text_pane_t1_ParamLimits

0xe5db,	// (0x00058171) set_text_pane_t1

0xa2bf,	// (0x00053e55) set_opt_bg_pane_g1

0xa2c7,	// (0x00053e5d) set_opt_bg_pane_g2

0x397e,	// (0x0004d514) set_opt_bg_pane_g3

0xa2d7,	// (0x00053e6d) set_opt_bg_pane_g4

0xa2df,	// (0x00053e75) set_opt_bg_pane_g5

0xa2e7,	// (0x00053e7d) set_opt_bg_pane_g6

0x3988,	// (0x0004d51e) set_opt_bg_pane_g7

0x3992,	// (0x0004d528) set_opt_bg_pane_g8

0x399c,	// (0x0004d532) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00059509) set_opt_bg_pane_g

0x3971,	// (0x0004d507) slider_set_pane_g1

0x0920,	// (0x0004a4b6) slider_set_pane_g2

0x0006,

0xf964,	// (0x000594fa) slider_set_pane_g

0x08a8,	// (0x0004a43e) volume_set_pane_g1

0x08b2,	// (0x0004a448) volume_set_pane_g2

0x08bc,	// (0x0004a452) volume_set_pane_g3

0x08c6,	// (0x0004a45c) volume_set_pane_g4

0x08d0,	// (0x0004a466) volume_set_pane_g5

0x08da,	// (0x0004a470) volume_set_pane_g6

0x08e4,	// (0x0004a47a) volume_set_pane_g7

0x08ee,	// (0x0004a484) volume_set_pane_g8

0x08f8,	// (0x0004a48e) volume_set_pane_g9

0x0902,	// (0x0004a498) volume_set_pane_g10

0x0009,

0xf93c,	// (0x000594d2) volume_set_pane_g

0x9ee0,	// (0x00053a76) indicator_pane_ParamLimits

0x9ee0,	// (0x00053a76) indicator_pane

0x9f0c,	// (0x00053aa2) main_idle_pane_g2_ParamLimits

0x9f0c,	// (0x00053aa2) main_idle_pane_g2

0x9f44,	// (0x00053ada) main_pane_idle_g1_ParamLimits

0x9f44,	// (0x00053ada) main_pane_idle_g1

0x6fc2,	// (0x00050b58) popup_clock_digital_analogue_window_ParamLimits

0x6fc2,	// (0x00050b58) popup_clock_digital_analogue_window

0x9f72,	// (0x00053b08) soft_indicator_pane_ParamLimits

0x9f72,	// (0x00053b08) soft_indicator_pane

0x9f8e,	// (0x00053b24) wallpaper_pane_ParamLimits

0x9f8e,	// (0x00053b24) wallpaper_pane

0x6f39,	// (0x00050acf) wallpaper_pane_g1

0x9fa0,	// (0x00053b36) indicator_pane_g1_ParamLimits

0x9fa0,	// (0x00053b36) indicator_pane_g1

0x3def,	// (0x0004d985) navi_navi_icon_text_pane_srt_g1

0x6ff0,	// (0x00050b86) soft_indicator_pane_t1

0x700a,	// (0x00050ba0) aid_ps_area_pane

0x9fb9,	// (0x00053b4f) aid_ps_clock_pane

0x701b,	// (0x00050bb1) aid_ps_indicator_pane

0x7027,	// (0x00050bbd) indicator_ps_pane_ParamLimits

0x7027,	// (0x00050bbd) indicator_ps_pane

0x7036,	// (0x00050bcc) power_save_pane_g1_ParamLimits

0x7036,	// (0x00050bcc) power_save_pane_g1

0x7042,	// (0x00050bd8) power_save_pane_g2_ParamLimits

0x7042,	// (0x00050bd8) power_save_pane_g2

0xeee0,	// (0x00058a76) aid_navinavi_width_pane

0x700a,	// (0x00050ba0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00059100) power_save_pane_g_ParamLimits

0xf56a,	// (0x00059100) power_save_pane_g

0x7050,	// (0x00050be6) power_save_pane_t1_ParamLimits

0x7050,	// (0x00050be6) power_save_pane_t1

0x9fb9,	// (0x00053b4f) aid_ps_clock_pane_ParamLimits

0x701b,	// (0x00050bb1) aid_ps_indicator_pane_ParamLimits

0x7062,	// (0x00050bf8) power_save_pane_t4_ParamLimits

0x7062,	// (0x00050bf8) power_save_pane_t4

0x0001,

0xf56f,	// (0x00059105) power_save_pane_t_ParamLimits

0xf56f,	// (0x00059105) power_save_pane_t

0x708c,	// (0x00050c22) power_save_t3_ParamLimits

0x708c,	// (0x00050c22) power_save_t3

0x7077,	// (0x00050c0d) power_save_t2_ParamLimits

0x7077,	// (0x00050c0d) power_save_t2

0x70a1,	// (0x00050c37) indicator_ps_pane_g1

0x9fc7,	// (0x00053b5d) ai_gene_pane_ParamLimits

0x9fc7,	// (0x00053b5d) ai_gene_pane

0x9fde,	// (0x00053b74) ai_links_pane_ParamLimits

0x9fde,	// (0x00053b74) ai_links_pane

0x9ff6,	// (0x00053b8c) indicator_pane_cp1_ParamLimits

0x9ff6,	// (0x00053b8c) indicator_pane_cp1

0xa005,	// (0x00053b9b) main_pane_idle_g1_cp_ParamLimits

0xa005,	// (0x00053b9b) main_pane_idle_g1_cp

0x70aa,	// (0x00050c40) popup_ai_links_title_window

0xa01d,	// (0x00053bb3) soft_indicator_pane_cp1_ParamLimits

0xa01d,	// (0x00053bb3) soft_indicator_pane_cp1

0x3758,	// (0x0004d2ee) ai_links_pane_g1

0x3761,	// (0x0004d2f7) grid_ai_links_pane

0xc7fc,	// (0x00056392) ai_gene_pane_1

0x3746,	// (0x0004d2dc) ai_gene_pane_2

0x374f,	// (0x0004d2e5) list_highlight_pane_cp4

0xc7d8,	// (0x0005636e) cell_ai_link_pane_ParamLimits

0xc7d8,	// (0x0005636e) cell_ai_link_pane

0x3715,	// (0x0004d2ab) cell_ai_link_pane_g1

0x7286,	// (0x00050e1c) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x000594ad) cell_ai_link_pane_g

0x6f43,	// (0x00050ad9) grid_highlight_cp2

0x6f43,	// (0x00050ad9) bg_popup_sub_pane_cp1

0x70c1,	// (0x00050c57) popup_ai_links_title_window_t1

0x3661,	// (0x0004d1f7) ai_gene_pane_1_g1_ParamLimits

0x3661,	// (0x0004d1f7) ai_gene_pane_1_g1

0x366d,	// (0x0004d203) ai_gene_pane_1_g2_ParamLimits

0x366d,	// (0x0004d203) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x000594a3) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x000594a3) ai_gene_pane_1_g

0x367a,	// (0x0004d210) ai_gene_pane_1_t1_ParamLimits

0x367a,	// (0x0004d210) ai_gene_pane_1_t1

0x36ae,	// (0x0004d244) grid_ai_soft_ind_pane

0x364c,	// (0x0004d1e2) ai_gene_pane_2_t1_ParamLimits

0x364c,	// (0x0004d1e2) ai_gene_pane_2_t1

0xa031,	// (0x00053bc7) main_pane_empty_t1_ParamLimits

0xa031,	// (0x00053bc7) main_pane_empty_t1

0xa049,	// (0x00053bdf) main_pane_empty_t2_ParamLimits

0xa049,	// (0x00053bdf) main_pane_empty_t2

0xa05e,	// (0x00053bf4) main_pane_empty_t3_ParamLimits

0xa05e,	// (0x00053bf4) main_pane_empty_t3

0xa070,	// (0x00053c06) main_pane_empty_t4_ParamLimits

0xa070,	// (0x00053c06) main_pane_empty_t4

0xa082,	// (0x00053c18) main_pane_empty_t5_ParamLimits

0xa082,	// (0x00053c18) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005910a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005910a) main_pane_empty_t

0xa310,	// (0x00053ea6) bg_popup_window_pane_ParamLimits

0xa310,	// (0x00053ea6) bg_popup_window_pane

0x33ae,	// (0x0004cf44) find_popup_pane_cp2_ParamLimits

0x33ae,	// (0x0004cf44) find_popup_pane_cp2

0x33ba,	// (0x0004cf50) heading_pane_ParamLimits

0x33ba,	// (0x0004cf50) heading_pane

0x6f43,	// (0x00050ad9) bg_popup_sub_pane

0xc6bb,	// (0x00056251) bg_popup_window_pane_g1_ParamLimits

0xc6bb,	// (0x00056251) bg_popup_window_pane_g1

0xc6ca,	// (0x00056260) bg_popup_window_pane_g2_ParamLimits

0xc6ca,	// (0x00056260) bg_popup_window_pane_g2

0xc6d6,	// (0x0005626c) bg_popup_window_pane_g3_ParamLimits

0xc6d6,	// (0x0005626c) bg_popup_window_pane_g3

0xc6e2,	// (0x00056278) bg_popup_window_pane_g4_ParamLimits

0xc6e2,	// (0x00056278) bg_popup_window_pane_g4

0xc6f1,	// (0x00056287) bg_popup_window_pane_g5_ParamLimits

0xc6f1,	// (0x00056287) bg_popup_window_pane_g5

0xc701,	// (0x00056297) bg_popup_window_pane_g6_ParamLimits

0xc701,	// (0x00056297) bg_popup_window_pane_g6

0xc70d,	// (0x000562a3) bg_popup_window_pane_g7_ParamLimits

0xc70d,	// (0x000562a3) bg_popup_window_pane_g7

0xc71c,	// (0x000562b2) bg_popup_window_pane_g8_ParamLimits

0xc71c,	// (0x000562b2) bg_popup_window_pane_g8

0xc72b,	// (0x000562c1) bg_popup_window_pane_g9_ParamLimits

0xc72b,	// (0x000562c1) bg_popup_window_pane_g9

0x3394,	// (0x0004cf2a) bg_popup_window_pane_g10_ParamLimits

0x3394,	// (0x0004cf2a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005946b) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005946b) bg_popup_window_pane_g

0x32bd,	// (0x0004ce53) bg_popup_heading_pane_ParamLimits

0x32bd,	// (0x0004ce53) bg_popup_heading_pane

0x09e8,	// (0x0004a57e) tabs_4_passive_pane_cp_srt_ParamLimits

0x09e8,	// (0x0004a57e) tabs_4_passive_pane_cp_srt

0x09fa,	// (0x0004a590) tabs_4_passive_pane_srt_ParamLimits

0x32d1,	// (0x0004ce67) heading_pane_g2

0x09fa,	// (0x0004a590) tabs_4_passive_pane_srt

0x266a,	// (0x0004c200) bg_passive_tab_pane_cp3_srt_ParamLimits

0x266a,	// (0x0004c200) bg_passive_tab_pane_cp3_srt

0x32d9,	// (0x0004ce6f) heading_pane_t1_ParamLimits

0x32d9,	// (0x0004ce6f) heading_pane_t1

0x32f0,	// (0x0004ce86) heading_pane_t2_ParamLimits

0x32f0,	// (0x0004ce86) heading_pane_t2

0x0001,

0xf8d0,	// (0x00059466) heading_pane_t_ParamLimits

0xf8d0,	// (0x00059466) heading_pane_t

0x2de8,	// (0x0004c97e) bg_popup_heading_pane_g1

0x2e97,	// (0x0004ca2d) bg_popup_heading_pane_g2

0x2ea1,	// (0x0004ca37) bg_popup_heading_pane_g3

0x2eab,	// (0x0004ca41) bg_popup_heading_pane_g4

0x2eb5,	// (0x0004ca4b) bg_popup_heading_pane_g5

0x2ebf,	// (0x0004ca55) bg_popup_heading_pane_g6

0x2ec7,	// (0x0004ca5d) bg_popup_heading_pane_g7

0x2ecf,	// (0x0004ca65) bg_popup_heading_pane_g8

0x2ed9,	// (0x0004ca6f) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00059422) bg_popup_heading_pane_g

0x25f6,	// (0x0004c18c) bg_popup_sub_pane_g1

0x25fe,	// (0x0004c194) bg_popup_sub_pane_g2

0x2606,	// (0x0004c19c) bg_popup_sub_pane_g3

0x260e,	// (0x0004c1a4) bg_popup_sub_pane_g4

0x2616,	// (0x0004c1ac) bg_popup_sub_pane_g5

0x261e,	// (0x0004c1b4) bg_popup_sub_pane_g6

0x2626,	// (0x0004c1bc) bg_popup_sub_pane_g7

0x262e,	// (0x0004c1c4) bg_popup_sub_pane_g8

0x2636,	// (0x0004c1cc) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x000593fc) bg_popup_sub_pane_g

0x70d0,	// (0x00050c66) bg_popup_window_pane_cp5_ParamLimits

0x70d0,	// (0x00050c66) bg_popup_window_pane_cp5

0x70ec,	// (0x00050c82) popup_note_window_g1_ParamLimits

0x70ec,	// (0x00050c82) popup_note_window_g1

0x70f8,	// (0x00050c8e) popup_note_window_t1_ParamLimits

0x70f8,	// (0x00050c8e) popup_note_window_t1

0x710e,	// (0x00050ca4) popup_note_window_t2_ParamLimits

0x710e,	// (0x00050ca4) popup_note_window_t2

0x7124,	// (0x00050cba) popup_note_window_t3_ParamLimits

0x7124,	// (0x00050cba) popup_note_window_t3

0x713a,	// (0x00050cd0) popup_note_window_t4_ParamLimits

0x713a,	// (0x00050cd0) popup_note_window_t4

0x7162,	// (0x00050cf8) popup_note_window_t5_ParamLimits

0x7162,	// (0x00050cf8) popup_note_window_t5

0x0004,

0xf57f,	// (0x00059115) popup_note_window_t_ParamLimits

0xf57f,	// (0x00059115) popup_note_window_t

0x7186,	// (0x00050d1c) bg_popup_window_pane_cp6_ParamLimits

0x7186,	// (0x00050d1c) bg_popup_window_pane_cp6

0x2d64,	// (0x0004c8fa) popup_note_image_window_g1_ParamLimits

0x2d64,	// (0x0004c8fa) popup_note_image_window_g1

0x2d70,	// (0x0004c906) popup_note_image_window_g2_ParamLimits

0x2d70,	// (0x0004c906) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x000593f0) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x000593f0) popup_note_image_window_g

0x2d89,	// (0x0004c91f) popup_note_image_window_t1_ParamLimits

0x2d89,	// (0x0004c91f) popup_note_image_window_t1

0x2da2,	// (0x0004c938) popup_note_image_window_t2_ParamLimits

0x2da2,	// (0x0004c938) popup_note_image_window_t2

0x2dbb,	// (0x0004c951) popup_note_image_window_t3_ParamLimits

0x2dbb,	// (0x0004c951) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x000593f5) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x000593f5) popup_note_image_window_t

0x2c24,	// (0x0004c7ba) bg_popup_window_pane_cp7_ParamLimits

0x2c24,	// (0x0004c7ba) bg_popup_window_pane_cp7

0x2c54,	// (0x0004c7ea) popup_note_wait_window_g1_ParamLimits

0x2c54,	// (0x0004c7ea) popup_note_wait_window_g1

0x2c60,	// (0x0004c7f6) popup_note_wait_window_g2_ParamLimits

0x2c60,	// (0x0004c7f6) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x000593de) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x000593de) popup_note_wait_window_g

0x2c78,	// (0x0004c80e) popup_note_wait_window_t1_ParamLimits

0x2c78,	// (0x0004c80e) popup_note_wait_window_t1

0x2c9f,	// (0x0004c835) popup_note_wait_window_t2_ParamLimits

0x2c9f,	// (0x0004c835) popup_note_wait_window_t2

0x2cbd,	// (0x0004c853) popup_note_wait_window_t3_ParamLimits

0x2cbd,	// (0x0004c853) popup_note_wait_window_t3

0x2cd0,	// (0x0004c866) popup_note_wait_window_t4_ParamLimits

0x2cd0,	// (0x0004c866) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x000593e5) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x000593e5) popup_note_wait_window_t

0x2cf5,	// (0x0004c88b) wait_bar_pane_ParamLimits

0x2cf5,	// (0x0004c88b) wait_bar_pane

0x6f43,	// (0x00050ad9) wait_anim_pane

0x6f43,	// (0x00050ad9) wait_border_pane

0x6f39,	// (0x00050acf) wait_anim_pane_g1

0x6f39,	// (0x00050acf) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005929e) wait_anim_pane_g

0x2bc8,	// (0x0004c75e) wait_border_pane_g1

0x2bd3,	// (0x0004c769) wait_border_pane_g2

0x2bdc,	// (0x0004c772) wait_border_pane_g3

0x0002,

0xf841,	// (0x000593d7) wait_border_pane_g

0x2a32,	// (0x0004c5c8) bg_popup_window_pane_cp16_ParamLimits

0x2a32,	// (0x0004c5c8) bg_popup_window_pane_cp16

0x2b32,	// (0x0004c6c8) indicator_popup_pane_cp4_ParamLimits

0x2b32,	// (0x0004c6c8) indicator_popup_pane_cp4

0x2b46,	// (0x0004c6dc) popup_query_data_window_t1_ParamLimits

0x2b46,	// (0x0004c6dc) popup_query_data_window_t1

0x2b58,	// (0x0004c6ee) popup_query_data_window_t2_ParamLimits

0x2b58,	// (0x0004c6ee) popup_query_data_window_t2

0x2b71,	// (0x0004c707) popup_query_data_window_t3_ParamLimits

0x2b71,	// (0x0004c707) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x000593d0) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x000593d0) popup_query_data_window_t

0x2b8b,	// (0x0004c721) query_popup_data_pane_ParamLimits

0x2b8b,	// (0x0004c721) query_popup_data_pane

0x2b9f,	// (0x0004c735) query_popup_data_pane_cp1_ParamLimits

0x2b9f,	// (0x0004c735) query_popup_data_pane_cp1

0x2a32,	// (0x0004c5c8) bg_popup_window_pane_cp10_ParamLimits

0x2a32,	// (0x0004c5c8) bg_popup_window_pane_cp10

0x2a64,	// (0x0004c5fa) indicator_popup_pane_ParamLimits

0x2a64,	// (0x0004c5fa) indicator_popup_pane

0x2a86,	// (0x0004c61c) popup_query_code_window_t1_ParamLimits

0x2a86,	// (0x0004c61c) popup_query_code_window_t1

0x2aa0,	// (0x0004c636) popup_query_code_window_t2_ParamLimits

0x2aa0,	// (0x0004c636) popup_query_code_window_t2

0x2ae9,	// (0x0004c67f) popup_query_code_window_t3_ParamLimits

0x2ae9,	// (0x0004c67f) popup_query_code_window_t3

0x0002,

0xf833,	// (0x000593c9) popup_query_code_window_t_ParamLimits

0xf833,	// (0x000593c9) popup_query_code_window_t

0x2b18,	// (0x0004c6ae) query_popup_pane_ParamLimits

0x2b18,	// (0x0004c6ae) query_popup_pane

0x7186,	// (0x00050d1c) bg_popup_window_pane_cp15_ParamLimits

0x7186,	// (0x00050d1c) bg_popup_window_pane_cp15

0x71a6,	// (0x00050d3c) indicator_popup_pane_cp1_ParamLimits

0x71a6,	// (0x00050d3c) indicator_popup_pane_cp1

0x71b9,	// (0x00050d4f) indicator_popup_pane_cp2_ParamLimits

0x71b9,	// (0x00050d4f) indicator_popup_pane_cp2

0x71d4,	// (0x00050d6a) popup_query_data_code_window_g1_ParamLimits

0x71d4,	// (0x00050d6a) popup_query_data_code_window_g1

0x71e7,	// (0x00050d7d) popup_query_data_code_window_t1_ParamLimits

0x71e7,	// (0x00050d7d) popup_query_data_code_window_t1

0x71f9,	// (0x00050d8f) popup_query_data_code_window_t2_ParamLimits

0x71f9,	// (0x00050d8f) popup_query_data_code_window_t2

0x720b,	// (0x00050da1) popup_query_data_code_window_t3_ParamLimits

0x720b,	// (0x00050da1) popup_query_data_code_window_t3

0x7221,	// (0x00050db7) popup_query_data_code_window_t4_ParamLimits

0x7221,	// (0x00050db7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00059120) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00059120) popup_query_data_code_window_t

0xad8a,	// (0x00054920) list_single_midp_graphic_pane_g3

0x723b,	// (0x00050dd1) query_popup_data_pane_cp2_ParamLimits

0x724e,	// (0x00050de4) query_popup_pane_cp2_ParamLimits

0x724e,	// (0x00050de4) query_popup_pane_cp2

0x6f43,	// (0x00050ad9) bg_popup_window_pane_cp11

0x2a2a,	// (0x0004c5c0) heading_pane_cp5

0x72e4,	// (0x00050e7a) listscroll_popup_info_pane

0x6f43,	// (0x00050ad9) input_focus_pane_cp3

0x7269,	// (0x00050dff) query_popup_pane_t1

0x7277,	// (0x00050e0d) list_popup_info_pane_ParamLimits

0x7277,	// (0x00050e0d) list_popup_info_pane

0x7286,	// (0x00050e1c) listscroll_popup_info_pane_g1

0x728e,	// (0x00050e24) scroll_pane_cp7

0x7298,	// (0x00050e2e) popup_info_list_pane_t1_ParamLimits

0x7298,	// (0x00050e2e) popup_info_list_pane_t1

0x72b2,	// (0x00050e48) popup_info_list_pane_t2_ParamLimits

0x72b2,	// (0x00050e48) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00059129) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00059129) popup_info_list_pane_t

0x6f43,	// (0x00050ad9) bg_popup_window_pane_cp12

0x3e09,	// (0x0004d99f) find_popup_pane

0x6f9d,	// (0x00050b33) bg_popup_window_pane_cp3

0x72cc,	// (0x00050e62) heading_pane_cp3

0x72d8,	// (0x00050e6e) listscroll_popup_graphic_pane

0x6f43,	// (0x00050ad9) bg_popup_window_pane_cp4

0xa0e4,	// (0x00053c7a) heading_pane_cp4

0x72e4,	// (0x00050e7a) listscroll_popup_colour_pane

0xa0ee,	// (0x00053c84) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa0ee,	// (0x00053c84) cell_large_graphic_colour_none_popup_pane

0xa102,	// (0x00053c98) grid_large_graphic_colour_popup_pane_ParamLimits

0xa102,	// (0x00053c98) grid_large_graphic_colour_popup_pane

0xa126,	// (0x00053cbc) listscroll_popup_colour_pane_g1_ParamLimits

0xa126,	// (0x00053cbc) listscroll_popup_colour_pane_g1

0xa13d,	// (0x00053cd3) listscroll_popup_colour_pane_g2_ParamLimits

0xa13d,	// (0x00053cd3) listscroll_popup_colour_pane_g2

0xa154,	// (0x00053cea) listscroll_popup_colour_pane_g3_ParamLimits

0xa154,	// (0x00053cea) listscroll_popup_colour_pane_g3

0xa164,	// (0x00053cfa) listscroll_popup_colour_pane_g4_ParamLimits

0xa164,	// (0x00053cfa) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005912e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005912e) listscroll_popup_colour_pane_g

0x72ec,	// (0x00050e82) scroll_pane_cp6_ParamLimits

0x72ec,	// (0x00050e82) scroll_pane_cp6

0xa174,	// (0x00053d0a) cell_large_graphic_colour_popup_pane_ParamLimits

0xa174,	// (0x00053d0a) cell_large_graphic_colour_popup_pane

0x72fe,	// (0x00050e94) cell_large_graphic_colour_none_popup_pane_t1

0x6f43,	// (0x00050ad9) grid_highlight_pane_cp5

0x730d,	// (0x00050ea3) cell_large_graphic_colour_popup_pane_g1

0x7315,	// (0x00050eab) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00059137) cell_large_graphic_colour_popup_pane_g

0x731d,	// (0x00050eb3) cell_large_graphic_colour_popup_pane_g2_copy1

0x7326,	// (0x00050ebc) grid_highlight_pane_cp4

0x732e,	// (0x00050ec4) bg_popup_window_pane_cp8_ParamLimits

0x732e,	// (0x00050ec4) bg_popup_window_pane_cp8

0x7349,	// (0x00050edf) popup_snote_single_text_window_g1_ParamLimits

0x7349,	// (0x00050edf) popup_snote_single_text_window_g1

0x735b,	// (0x00050ef1) popup_snote_single_text_window_t1_ParamLimits

0x735b,	// (0x00050ef1) popup_snote_single_text_window_t1

0x736e,	// (0x00050f04) popup_snote_single_text_window_t2_ParamLimits

0x736e,	// (0x00050f04) popup_snote_single_text_window_t2

0x7381,	// (0x00050f17) popup_snote_single_text_window_t3_ParamLimits

0x7381,	// (0x00050f17) popup_snote_single_text_window_t3

0x73ba,	// (0x00050f50) popup_snote_single_text_window_t4_ParamLimits

0x73ba,	// (0x00050f50) popup_snote_single_text_window_t4

0x73ee,	// (0x00050f84) popup_snote_single_text_window_t5_ParamLimits

0x73ee,	// (0x00050f84) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005913c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005913c) popup_snote_single_text_window_t

0x741d,	// (0x00050fb3) bg_popup_window_pane_cp9_ParamLimits

0x741d,	// (0x00050fb3) bg_popup_window_pane_cp9

0x7349,	// (0x00050edf) popup_snote_single_graphic_window_g1_ParamLimits

0x7349,	// (0x00050edf) popup_snote_single_graphic_window_g1

0x742b,	// (0x00050fc1) popup_snote_single_graphic_window_g2_ParamLimits

0x742b,	// (0x00050fc1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00059147) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00059147) popup_snote_single_graphic_window_g

0x7437,	// (0x00050fcd) popup_snote_single_graphic_window_t1_ParamLimits

0x7437,	// (0x00050fcd) popup_snote_single_graphic_window_t1

0x744a,	// (0x00050fe0) popup_snote_single_graphic_window_t2_ParamLimits

0x744a,	// (0x00050fe0) popup_snote_single_graphic_window_t2

0x745d,	// (0x00050ff3) popup_snote_single_graphic_window_t3_ParamLimits

0x745d,	// (0x00050ff3) popup_snote_single_graphic_window_t3

0x7496,	// (0x0005102c) popup_snote_single_graphic_window_t4_ParamLimits

0x7496,	// (0x0005102c) popup_snote_single_graphic_window_t4

0x74ca,	// (0x00051060) popup_snote_single_graphic_window_t5_ParamLimits

0x74ca,	// (0x00051060) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005914c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005914c) popup_snote_single_graphic_window_t

0x3d47,	// (0x0004d8dd) grid_graphic_popup_pane_ParamLimits

0x3d47,	// (0x0004d8dd) grid_graphic_popup_pane

0x3d75,	// (0x0004d90b) listscroll_popup_graphic_pane_g1_ParamLimits

0x3d75,	// (0x0004d90b) listscroll_popup_graphic_pane_g1

0xcaef,	// (0x00056685) listscroll_popup_graphic_pane_g2_ParamLimits

0xcaef,	// (0x00056685) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00059546) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00059546) listscroll_popup_graphic_pane_g

0x3d9d,	// (0x0004d933) scroll_pane_cp5

0xcaae,	// (0x00056644) cell_graphic_popup_pane_ParamLimits

0xcaae,	// (0x00056644) cell_graphic_popup_pane

0x3cd0,	// (0x0004d866) cell_graphic_popup_pane_g1

0x3cd8,	// (0x0004d86e) cell_graphic_popup_pane_g2

0x731d,	// (0x00050eb3) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005953f) cell_graphic_popup_pane_g

0x3ce1,	// (0x0004d877) cell_graphic_popup_pane_t2

0x7326,	// (0x00050ebc) grid_highlight_pane_cp3

0x750b,	// (0x000510a1) list_gen_pane_ParamLimits

0x750b,	// (0x000510a1) list_gen_pane

0x7533,	// (0x000510c9) scroll_pane

0xca65,	// (0x000565fb) bg_list_pane_g1_ParamLimits

0xca65,	// (0x000565fb) bg_list_pane_g1

0x3c45,	// (0x0004d7db) bg_list_pane_g2_ParamLimits

0x3c45,	// (0x0004d7db) bg_list_pane_g2

0x3c5a,	// (0x0004d7f0) bg_list_pane_g3_ParamLimits

0x3c5a,	// (0x0004d7f0) bg_list_pane_g3

0x3c6e,	// (0x0004d804) bg_list_pane_g4_ParamLimits

0x3c6e,	// (0x0004d804) bg_list_pane_g4

0xca82,	// (0x00056618) bg_list_pane_g5_ParamLimits

0xca82,	// (0x00056618) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00059534) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00059534) bg_list_pane_g

0xca28,	// (0x000565be) list_double2_graphic_large_graphic_pane_ParamLimits

0xca28,	// (0x000565be) list_double2_graphic_large_graphic_pane

0xca28,	// (0x000565be) list_double2_graphic_pane_ParamLimits

0xca28,	// (0x000565be) list_double2_graphic_pane

0xca28,	// (0x000565be) list_double2_large_graphic_pane_ParamLimits

0xca28,	// (0x000565be) list_double2_large_graphic_pane

0xca28,	// (0x000565be) list_double2_pane_ParamLimits

0xca28,	// (0x000565be) list_double2_pane

0xca28,	// (0x000565be) list_double_graphic_heading_pane_ParamLimits

0xca28,	// (0x000565be) list_double_graphic_heading_pane

0xca28,	// (0x000565be) list_double_graphic_pane_ParamLimits

0xca28,	// (0x000565be) list_double_graphic_pane

0xca28,	// (0x000565be) list_double_heading_pane_ParamLimits

0xca28,	// (0x000565be) list_double_heading_pane

0xca28,	// (0x000565be) list_double_large_graphic_pane_ParamLimits

0xca28,	// (0x000565be) list_double_large_graphic_pane

0xca28,	// (0x000565be) list_double_number_pane_ParamLimits

0xca28,	// (0x000565be) list_double_number_pane

0xca28,	// (0x000565be) list_double_pane_ParamLimits

0xca28,	// (0x000565be) list_double_pane

0xca28,	// (0x000565be) list_double_time_pane_ParamLimits

0xca28,	// (0x000565be) list_double_time_pane

0xca28,	// (0x000565be) list_setting_number_pane_ParamLimits

0xca28,	// (0x000565be) list_setting_number_pane

0xca28,	// (0x000565be) list_setting_pane_ParamLimits

0xca28,	// (0x000565be) list_setting_pane

0xca3c,	// (0x000565d2) list_single_2graphic_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_2graphic_pane

0xca3c,	// (0x000565d2) list_single_graphic_heading_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_graphic_heading_pane

0xca3c,	// (0x000565d2) list_single_graphic_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_graphic_pane

0xca3c,	// (0x000565d2) list_single_heading_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_heading_pane

0xca3c,	// (0x000565d2) list_single_large_graphic_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_large_graphic_pane

0xca3c,	// (0x000565d2) list_single_number_heading_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_number_heading_pane

0xca3c,	// (0x000565d2) list_single_number_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_number_pane

0xca3c,	// (0x000565d2) list_single_pane_ParamLimits

0xca3c,	// (0x000565d2) list_single_pane

0x6f43,	// (0x00050ad9) list_highlight_pane_cp1

0xe5f4,	// (0x0005818a) list_single_pane_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_single_pane_g1

0x0613,	// (0x0004a1a9) list_single_pane_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00059168) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00059168) list_single_pane_g

0xeaa7,	// (0x0005863d) list_single_pane_t1_ParamLimits

0xeaa7,	// (0x0005863d) list_single_pane_t1

0xe5f4,	// (0x0005818a) list_single_number_pane_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_single_number_pane_g1

0x0613,	// (0x0004a1a9) list_single_number_pane_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00059168) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00059168) list_single_number_pane_g

0xe9e8,	// (0x0005857e) list_single_number_pane_t1_ParamLimits

0xe9e8,	// (0x0005857e) list_single_number_pane_t1

0x9a21,	// (0x000535b7) list_single_number_pane_t2_ParamLimits

0x9a21,	// (0x000535b7) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x000594f5) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x000594f5) list_single_number_pane_t

0x93e4,	// (0x00052f7a) list_single_graphic_pane_g1_ParamLimits

0x93e4,	// (0x00052f7a) list_single_graphic_pane_g1

0xe5f4,	// (0x0005818a) list_single_graphic_pane_g2_ParamLimits

0xe5f4,	// (0x0005818a) list_single_graphic_pane_g2

0x0613,	// (0x0004a1a9) list_single_graphic_pane_g3_ParamLimits

0x0613,	// (0x0004a1a9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00059157) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00059157) list_single_graphic_pane_g

0x93f0,	// (0x00052f86) list_single_graphic_pane_t1_ParamLimits

0x93f0,	// (0x00052f86) list_single_graphic_pane_t1

0x9406,	// (0x00052f9c) list_single_heading_pane_g1_ParamLimits

0x9406,	// (0x00052f9c) list_single_heading_pane_g1

0x0613,	// (0x0004a1a9) list_single_heading_pane_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005915e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005915e) list_single_heading_pane_g

0x9419,	// (0x00052faf) list_single_heading_pane_t1_ParamLimits

0x9419,	// (0x00052faf) list_single_heading_pane_t1

0xa19f,	// (0x00053d35) list_single_heading_pane_t2_ParamLimits

0xa19f,	// (0x00053d35) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00059163) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00059163) list_single_heading_pane_t

0xe5f4,	// (0x0005818a) list_single_number_heading_pane_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_single_number_heading_pane_g1

0x0613,	// (0x0004a1a9) list_single_number_heading_pane_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00059168) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00059168) list_single_number_heading_pane_g

0xe600,	// (0x00058196) list_single_number_heading_pane_t1_ParamLimits

0xe600,	// (0x00058196) list_single_number_heading_pane_t1

0x942f,	// (0x00052fc5) list_single_number_heading_pane_t2_ParamLimits

0x942f,	// (0x00052fc5) list_single_number_heading_pane_t2

0xe616,	// (0x000581ac) list_single_number_heading_pane_t3_ParamLimits

0xe616,	// (0x000581ac) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005916d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005916d) list_single_number_heading_pane_t

0x9441,	// (0x00052fd7) list_single_graphic_heading_pane_g1_ParamLimits

0x9441,	// (0x00052fd7) list_single_graphic_heading_pane_g1

0xa1b1,	// (0x00053d47) list_single_graphic_heading_pane_g4_ParamLimits

0xa1b1,	// (0x00053d47) list_single_graphic_heading_pane_g4

0x0613,	// (0x0004a1a9) list_single_graphic_heading_pane_g5_ParamLimits

0x0613,	// (0x0004a1a9) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00059174) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00059174) list_single_graphic_heading_pane_g

0xe600,	// (0x00058196) list_single_graphic_heading_pane_t1_ParamLimits

0xe600,	// (0x00058196) list_single_graphic_heading_pane_t1

0x9459,	// (0x00052fef) list_single_graphic_heading_pane_t2_ParamLimits

0x9459,	// (0x00052fef) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005917b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005917b) list_single_graphic_heading_pane_t

0x0aa5,	// (0x0004a63b) list_single_large_graphic_pane_g1_ParamLimits

0x0aa5,	// (0x0004a63b) list_single_large_graphic_pane_g1

0xe5f4,	// (0x0005818a) list_single_large_graphic_pane_g2_ParamLimits

0xe5f4,	// (0x0005818a) list_single_large_graphic_pane_g2

0x0613,	// (0x0004a1a9) list_single_large_graphic_pane_g3_ParamLimits

0x0613,	// (0x0004a1a9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00059180) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00059180) list_single_large_graphic_pane_g

0x2bd3,	// (0x0004c769) wait_border_pane_g2_copy1

0xa1c2,	// (0x00053d58) list_single_large_graphic_pane_g4_cp2

0xe600,	// (0x00058196) list_single_large_graphic_pane_t1_ParamLimits

0xe600,	// (0x00058196) list_single_large_graphic_pane_t1

0x527c,	// (0x0004ee12) list_double_pane_g1_ParamLimits

0x527c,	// (0x0004ee12) list_double_pane_g1

0xa1ca,	// (0x00053d60) list_double_pane_g2_ParamLimits

0xa1ca,	// (0x00053d60) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00059187) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00059187) list_double_pane_g

0x9471,	// (0x00053007) list_double_pane_t1_ParamLimits

0x9471,	// (0x00053007) list_double_pane_t1

0x9487,	// (0x0005301d) list_double_pane_t2_ParamLimits

0x9487,	// (0x0005301d) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005918c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005918c) list_double_pane_t

0x9499,	// (0x0005302f) list_double2_pane_g1_ParamLimits

0x9499,	// (0x0005302f) list_double2_pane_g1

0x94aa,	// (0x00053040) list_double2_pane_g2_ParamLimits

0x94aa,	// (0x00053040) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00059191) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00059191) list_double2_pane_g

0x94b6,	// (0x0005304c) list_double2_pane_t1_ParamLimits

0x94b6,	// (0x0005304c) list_double2_pane_t1

0x94cc,	// (0x00053062) list_double2_pane_t2_ParamLimits

0x94cc,	// (0x00053062) list_double2_pane_t2

0x0001,

0xf600,	// (0x00059196) list_double2_pane_t_ParamLimits

0xf600,	// (0x00059196) list_double2_pane_t

0x527c,	// (0x0004ee12) list_double_number_pane_g1_ParamLimits

0x527c,	// (0x0004ee12) list_double_number_pane_g1

0xa1ca,	// (0x00053d60) list_double_number_pane_g2_ParamLimits

0xa1ca,	// (0x00053d60) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00059187) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00059187) list_double_number_pane_g

0x94de,	// (0x00053074) list_double_number_pane_t1_ParamLimits

0x94de,	// (0x00053074) list_double_number_pane_t1

0x94f0,	// (0x00053086) list_double_number_pane_t2_ParamLimits

0x94f0,	// (0x00053086) list_double_number_pane_t2

0x9506,	// (0x0005309c) list_double_number_pane_t3_ParamLimits

0x9506,	// (0x0005309c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005919b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005919b) list_double_number_pane_t

0x9518,	// (0x000530ae) list_double_graphic_pane_g1_ParamLimits

0x9518,	// (0x000530ae) list_double_graphic_pane_g1

0x9524,	// (0x000530ba) list_double_graphic_pane_g2_ParamLimits

0x9524,	// (0x000530ba) list_double_graphic_pane_g2

0x9533,	// (0x000530c9) list_double_graphic_pane_g3_ParamLimits

0x9533,	// (0x000530c9) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000591a2) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000591a2) list_double_graphic_pane_g

0x954b,	// (0x000530e1) list_double_graphic_pane_t1_ParamLimits

0x954b,	// (0x000530e1) list_double_graphic_pane_t1

0x9561,	// (0x000530f7) list_double_graphic_pane_t2_ParamLimits

0x9561,	// (0x000530f7) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000591ab) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000591ab) list_double_graphic_pane_t

0x9573,	// (0x00053109) list_double2_graphic_pane_g1_ParamLimits

0x9573,	// (0x00053109) list_double2_graphic_pane_g1

0xa1d6,	// (0x00053d6c) list_double2_graphic_pane_g2_ParamLimits

0xa1d6,	// (0x00053d6c) list_double2_graphic_pane_g2

0xa1e2,	// (0x00053d78) list_double2_graphic_pane_g3_ParamLimits

0xa1e2,	// (0x00053d78) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000591b0) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000591b0) list_double2_graphic_pane_g

0x957f,	// (0x00053115) list_double2_graphic_pane_t1_ParamLimits

0x957f,	// (0x00053115) list_double2_graphic_pane_t1

0x9595,	// (0x0005312b) list_double2_graphic_pane_t2_ParamLimits

0x9595,	// (0x0005312b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000591b7) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000591b7) list_double2_graphic_pane_t

0x95a7,	// (0x0005313d) list_double_large_graphic_pane_g1_ParamLimits

0x95a7,	// (0x0005313d) list_double_large_graphic_pane_g1

0x95d2,	// (0x00053168) list_double_large_graphic_pane_g2_ParamLimits

0x95d2,	// (0x00053168) list_double_large_graphic_pane_g2

0xa1ca,	// (0x00053d60) list_double_large_graphic_pane_g3_ParamLimits

0xa1ca,	// (0x00053d60) list_double_large_graphic_pane_g3

0x95e8,	// (0x0005317e) list_double_large_graphic_pane_g4_ParamLimits

0x95e8,	// (0x0005317e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000591bc) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000591bc) list_double_large_graphic_pane_g

0x95fb,	// (0x00053191) list_double_large_graphic_pane_t1_ParamLimits

0x95fb,	// (0x00053191) list_double_large_graphic_pane_t1

0x9614,	// (0x000531aa) list_double_large_graphic_pane_t2_ParamLimits

0x9614,	// (0x000531aa) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000591c7) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000591c7) list_double_large_graphic_pane_t

0xa1ee,	// (0x00053d84) list_double2_large_graphic_pane_g1_ParamLimits

0xa1ee,	// (0x00053d84) list_double2_large_graphic_pane_g1

0xa1fa,	// (0x00053d90) list_double2_large_graphic_pane_g2_ParamLimits

0xa1fa,	// (0x00053d90) list_double2_large_graphic_pane_g2

0xa1e2,	// (0x00053d78) list_double2_large_graphic_pane_g3_ParamLimits

0xa1e2,	// (0x00053d78) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000591cc) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000591cc) list_double2_large_graphic_pane_g

0x9626,	// (0x000531bc) list_double2_large_graphic_pane_t1_ParamLimits

0x9626,	// (0x000531bc) list_double2_large_graphic_pane_t1

0x963c,	// (0x000531d2) list_double2_large_graphic_pane_t2_ParamLimits

0x963c,	// (0x000531d2) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000591d3) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000591d3) list_double2_large_graphic_pane_t

0x964e,	// (0x000531e4) list_double_heading_pane_g1_ParamLimits

0x964e,	// (0x000531e4) list_double_heading_pane_g1

0x965f,	// (0x000531f5) list_double_heading_pane_g2_ParamLimits

0x965f,	// (0x000531f5) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000591d8) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000591d8) list_double_heading_pane_g

0x966b,	// (0x00053201) list_double_heading_pane_t1_ParamLimits

0x966b,	// (0x00053201) list_double_heading_pane_t1

0x9681,	// (0x00053217) list_double_heading_pane_t2_ParamLimits

0x9681,	// (0x00053217) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000591dd) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000591dd) list_double_heading_pane_t

0xe628,	// (0x000581be) list_double_graphic_heading_pane_g1_ParamLimits

0xe628,	// (0x000581be) list_double_graphic_heading_pane_g1

0x964e,	// (0x000531e4) list_double_graphic_heading_pane_g2_ParamLimits

0x964e,	// (0x000531e4) list_double_graphic_heading_pane_g2

0x965f,	// (0x000531f5) list_double_graphic_heading_pane_g3_ParamLimits

0x965f,	// (0x000531f5) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000591e2) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000591e2) list_double_graphic_heading_pane_g

0x9693,	// (0x00053229) list_double_graphic_heading_pane_t1_ParamLimits

0x9693,	// (0x00053229) list_double_graphic_heading_pane_t1

0x96a9,	// (0x0005323f) list_double_graphic_heading_pane_t2_ParamLimits

0x96a9,	// (0x0005323f) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000591e9) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000591e9) list_double_graphic_heading_pane_t

0x96bb,	// (0x00053251) list_double_time_pane_g1_ParamLimits

0x96bb,	// (0x00053251) list_double_time_pane_g1

0x96cc,	// (0x00053262) list_double_time_pane_g2_ParamLimits

0x96cc,	// (0x00053262) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000591ee) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000591ee) list_double_time_pane_g

0x96d8,	// (0x0005326e) list_double_time_pane_t1_ParamLimits

0x96d8,	// (0x0005326e) list_double_time_pane_t1

0x96ee,	// (0x00053284) list_double_time_pane_t2_ParamLimits

0x96ee,	// (0x00053284) list_double_time_pane_t2

0x9700,	// (0x00053296) list_double_time_pane_t3_ParamLimits

0x9700,	// (0x00053296) list_double_time_pane_t3

0x9712,	// (0x000532a8) list_double_time_pane_t4_ParamLimits

0x9712,	// (0x000532a8) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000591f3) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000591f3) list_double_time_pane_t

0x9724,	// (0x000532ba) list_setting_pane_g1_ParamLimits

0x9724,	// (0x000532ba) list_setting_pane_g1

0x9730,	// (0x000532c6) list_setting_pane_g2_ParamLimits

0x9730,	// (0x000532c6) list_setting_pane_g2

0x0001,

0xf666,	// (0x000591fc) list_setting_pane_g_ParamLimits

0xf666,	// (0x000591fc) list_setting_pane_g

0x973c,	// (0x000532d2) list_setting_pane_t1_ParamLimits

0x973c,	// (0x000532d2) list_setting_pane_t1

0x9756,	// (0x000532ec) list_setting_pane_t2_ParamLimits

0x9756,	// (0x000532ec) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00059201) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00059201) list_setting_pane_t

0x9795,	// (0x0005332b) set_value_pane_cp_ParamLimits

0x9795,	// (0x0005332b) set_value_pane_cp

0x97a3,	// (0x00053339) list_setting_number_pane_g1_ParamLimits

0x97a3,	// (0x00053339) list_setting_number_pane_g1

0x97af,	// (0x00053345) list_setting_number_pane_g2_ParamLimits

0x97af,	// (0x00053345) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00059208) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00059208) list_setting_number_pane_g

0x97bb,	// (0x00053351) list_setting_number_pane_t1_ParamLimits

0x97bb,	// (0x00053351) list_setting_number_pane_t1

0x97d4,	// (0x0005336a) list_setting_number_pane_t2_ParamLimits

0x97d4,	// (0x0005336a) list_setting_number_pane_t2

0x97ee,	// (0x00053384) list_setting_number_pane_t3_ParamLimits

0x97ee,	// (0x00053384) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005920d) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005920d) list_setting_number_pane_t

0x9795,	// (0x0005332b) set_value_pane_ParamLimits

0x9795,	// (0x0005332b) set_value_pane

0xa20b,	// (0x00053da1) bg_set_opt_pane_ParamLimits

0xa20b,	// (0x00053da1) bg_set_opt_pane

0xe634,	// (0x000581ca) set_value_pane_t1

0xa22c,	// (0x00053dc2) slider_set_pane_cp3

0xa235,	// (0x00053dcb) volume_small_pane_cp

0xa23e,	// (0x00053dd4) list_form_gen_pane

0xa247,	// (0x00053ddd) scroll_pane_cp8

0x9831,	// (0x000533c7) form_field_data_pane_ParamLimits

0x9831,	// (0x000533c7) form_field_data_pane

0x984e,	// (0x000533e4) form_field_data_wide_pane_ParamLimits

0x984e,	// (0x000533e4) form_field_data_wide_pane

0x9872,	// (0x00053408) form_field_popup_pane_ParamLimits

0x9872,	// (0x00053408) form_field_popup_pane

0xe652,	// (0x000581e8) form_field_popup_wide_pane_ParamLimits

0xe652,	// (0x000581e8) form_field_popup_wide_pane

0xe673,	// (0x00058209) form_field_slider_pane_ParamLimits

0xe673,	// (0x00058209) form_field_slider_pane

0xe686,	// (0x0005821c) form_field_slider_wide_pane_ParamLimits

0xe686,	// (0x0005821c) form_field_slider_wide_pane

0xa258,	// (0x00053dee) data_form_pane

0x989e,	// (0x00053434) form_field_data_pane_t1

0xa264,	// (0x00053dfa) input_focus_pane

0xe699,	// (0x0005822f) data_form_wide_pane

0xe6b6,	// (0x0005824c) form_field_data_wide_pane_t1

0x733b,	// (0x00050ed1) input_focus_pane_cp6

0x98b8,	// (0x0005344e) form_field_popup_pane_t1

0xa264,	// (0x00053dfa) input_focus_pane_cp7

0xa292,	// (0x00053e28) list_form_pane

0xe6e0,	// (0x00058276) form_field_popup_wide_pane_t1

0xa264,	// (0x00053dfa) input_focus_pane_cp8

0xa29e,	// (0x00053e34) list_form_wide_pane

0x98da,	// (0x00053470) form_field_slider_pane_t1_ParamLimits

0x98da,	// (0x00053470) form_field_slider_pane_t1

0x98f2,	// (0x00053488) form_field_slider_pane_t2_ParamLimits

0x98f2,	// (0x00053488) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005921d) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005921d) form_field_slider_pane_t

0x70d0,	// (0x00050c66) input_focus_pane_cp9_ParamLimits

0x70d0,	// (0x00050c66) input_focus_pane_cp9

0x9907,	// (0x0005349d) slider_cont_pane_ParamLimits

0x9907,	// (0x0005349d) slider_cont_pane

0xa2ad,	// (0x00053e43) form_field_slider_wide_pane_t1_ParamLimits

0xa2ad,	// (0x00053e43) form_field_slider_wide_pane_t1

0xe6f5,	// (0x0005828b) form_field_slider_wide_pane_t2_ParamLimits

0xe6f5,	// (0x0005828b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00059222) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00059222) form_field_slider_wide_pane_t

0x70d0,	// (0x00050c66) input_focus_pane_cp10_ParamLimits

0x70d0,	// (0x00050c66) input_focus_pane_cp10

0x991b,	// (0x000534b1) slider_cont_pane_cp1_ParamLimits

0x991b,	// (0x000534b1) slider_cont_pane_cp1

0x992f,	// (0x000534c5) slider_form_pane_cp

0xa2bf,	// (0x00053e55) input_focus_pane_g1

0xa2c7,	// (0x00053e5d) input_focus_pane_g2

0xa2cf,	// (0x00053e65) input_focus_pane_g3

0xa2d7,	// (0x00053e6d) input_focus_pane_g4

0xa2df,	// (0x00053e75) input_focus_pane_g5

0xa2e7,	// (0x00053e7d) input_focus_pane_g6

0xa2ef,	// (0x00053e85) input_focus_pane_g7

0xa2f7,	// (0x00053e8d) input_focus_pane_g8

0xa2ff,	// (0x00053e95) input_focus_pane_g9

0x6f39,	// (0x00050acf) input_focus_pane_g10

0x0009,

0xf691,	// (0x00059227) input_focus_pane_g

0x2bdc,	// (0x0004c772) wait_border_pane_g3_copy1

0x9937,	// (0x000534cd) data_form_pane_t1

0x6f39,	// (0x00050acf) wait_anim_pane_g1_copy1

0x9a33,	// (0x000535c9) data_form_wide_pane_t1

0xe707,	// (0x0005829d) list_form_graphic_pane_cp_ParamLimits

0xe707,	// (0x0005829d) list_form_graphic_pane_cp

0x3b3b,	// (0x0004d6d1) slider_form_pane_g1

0x3b44,	// (0x0004d6da) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00059525) slider_form_pane_g

0x9953,	// (0x000534e9) list_form_graphic_pane_ParamLimits

0x9953,	// (0x000534e9) list_form_graphic_pane

0xe719,	// (0x000582af) list_form_graphic_pane_g1

0xe721,	// (0x000582b7) list_form_graphic_pane_t1_ParamLimits

0xe721,	// (0x000582b7) list_form_graphic_pane_t1

0x6f9d,	// (0x00050b33) list_highlight_pane_cp5_ParamLimits

0x6f9d,	// (0x00050b33) list_highlight_pane_cp5

0x9964,	// (0x000534fa) find_pane_g1

0xa307,	// (0x00053e9d) input_find_pane

0x996d,	// (0x00053503) input_find_pane_g1_ParamLimits

0x996d,	// (0x00053503) input_find_pane_g1

0x9979,	// (0x0005350f) input_find_pane_t1_ParamLimits

0x9979,	// (0x0005350f) input_find_pane_t1

0x998e,	// (0x00053524) input_find_pane_t2_ParamLimits

0x998e,	// (0x00053524) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005923c) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005923c) input_find_pane_t

0xa310,	// (0x00053ea6) input_focus_pane_cp5_ParamLimits

0xa310,	// (0x00053ea6) input_focus_pane_cp5

0xa32a,	// (0x00053ec0) bg_popup_window_pane_cp2_ParamLimits

0xa32a,	// (0x00053ec0) bg_popup_window_pane_cp2

0xa337,	// (0x00053ecd) listscroll_menu_pane_ParamLimits

0xa337,	// (0x00053ecd) listscroll_menu_pane

0xa343,	// (0x00053ed9) popup_submenu_window_ParamLimits

0xa343,	// (0x00053ed9) popup_submenu_window

0xa373,	// (0x00053f09) find_popup_pane_g1

0xa37b,	// (0x00053f11) input_popup_find_pane_cp

0xa310,	// (0x00053ea6) input_focus_pane_cp4_ParamLimits

0xa310,	// (0x00053ea6) input_focus_pane_cp4

0xa393,	// (0x00053f29) input_popup_find_pane_t1_ParamLimits

0xa393,	// (0x00053f29) input_popup_find_pane_t1

0x6f43,	// (0x00050ad9) bg_popup_sub_pane_cp

0xa3c1,	// (0x00053f57) listscroll_popup_sub_pane

0xa3c9,	// (0x00053f5f) list_submenu_pane_ParamLimits

0xa3c9,	// (0x00053f5f) list_submenu_pane

0xa3da,	// (0x00053f70) scroll_pane_cp4

0xa3e2,	// (0x00053f78) list_single_popup_submenu_pane_ParamLimits

0xa3e2,	// (0x00053f78) list_single_popup_submenu_pane

0xa3f7,	// (0x00053f8d) list_single_popup_submenu_pane_g1

0xa3ff,	// (0x00053f95) list_single_popup_submenu_pane_t1_ParamLimits

0xa3ff,	// (0x00053f95) list_single_popup_submenu_pane_t1

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp1_ParamLimits

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp1

0xa414,	// (0x00053faa) tabs_2_active_pane_g1

0xa41c,	// (0x00053fb2) tabs_2_active_pane_t1

0x70d0,	// (0x00050c66) bg_passive_tab_pane_cp1_ParamLimits

0x70d0,	// (0x00050c66) bg_passive_tab_pane_cp1

0xa414,	// (0x00053faa) tabs_2_passive_pane_g1

0xa41c,	// (0x00053fb2) tabs_2_passive_pane_t1

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp4

0xa42e,	// (0x00053fc4) tabs_2_long_active_pane_t1

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp4

0x0644,	// (0x0004a1da) list_single_midp_graphic_pane_g4_ParamLimits

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp5

0xa441,	// (0x00053fd7) tabs_3_long_active_pane_t1

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp5

0x0644,	// (0x0004a1da) list_single_midp_graphic_pane_g4

0x6f9d,	// (0x00050b33) bg_popup_window_pane_cp13_ParamLimits

0x6f9d,	// (0x00050b33) bg_popup_window_pane_cp13

0xa45c,	// (0x00053ff2) listscroll_popup_fast_pane_ParamLimits

0xa45c,	// (0x00053ff2) listscroll_popup_fast_pane

0xa46b,	// (0x00054001) grid_popup_fast_pane_ParamLimits

0xa46b,	// (0x00054001) grid_popup_fast_pane

0xa47d,	// (0x00054013) scroll_pane_cp9_ParamLimits

0xa47d,	// (0x00054013) scroll_pane_cp9

0x54bc,	// (0x0004f052) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x54bc,	// (0x0004f052) list_single_graphic_hl_pane_t1_cp2

0xa4a1,	// (0x00054037) input_focus_pane_cp20_ParamLimits

0xa4a1,	// (0x00054037) input_focus_pane_cp20

0xa4af,	// (0x00054045) query_popup_data_pane_t1_ParamLimits

0xa4af,	// (0x00054045) query_popup_data_pane_t1

0xa4c2,	// (0x00054058) query_popup_data_pane_t2_ParamLimits

0xa4c2,	// (0x00054058) query_popup_data_pane_t2

0xa508,	// (0x0005409e) query_popup_data_pane_t3_ParamLimits

0xa508,	// (0x0005409e) query_popup_data_pane_t3

0xa549,	// (0x000540df) query_popup_data_pane_t4_ParamLimits

0xa549,	// (0x000540df) query_popup_data_pane_t4

0xa585,	// (0x0005411b) query_popup_data_pane_t5_ParamLimits

0xa585,	// (0x0005411b) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00059241) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00059241) query_popup_data_pane_t

0xa2bf,	// (0x00053e55) bg_set_opt_pane_g1

0xa2c7,	// (0x00053e5d) bg_set_opt_pane_g2

0xa2cf,	// (0x00053e65) bg_set_opt_pane_g3

0xa2d7,	// (0x00053e6d) bg_set_opt_pane_g4

0xa2df,	// (0x00053e75) bg_set_opt_pane_g5

0xa2e7,	// (0x00053e7d) bg_set_opt_pane_g6

0xa2ef,	// (0x00053e85) bg_set_opt_pane_g7

0xa2f7,	// (0x00053e8d) bg_set_opt_pane_g8

0xa2ff,	// (0x00053e95) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005924c) bg_set_opt_pane_g

0xf40a,	// (0x00058fa0) control_top_pane_stacon_ParamLimits

0xf40a,	// (0x00058fa0) control_top_pane_stacon

0xf45d,	// (0x00058ff3) signal_pane_stacon_ParamLimits

0xf45d,	// (0x00058ff3) signal_pane_stacon

0xabff,	// (0x00054795) stacon_top_pane_g1_ParamLimits

0xabff,	// (0x00054795) stacon_top_pane_g1

0xf482,	// (0x00059018) title_pane_stacon_ParamLimits

0xf482,	// (0x00059018) title_pane_stacon

0xf4ac,	// (0x00059042) uni_indicator_pane_stacon_ParamLimits

0xf4ac,	// (0x00059042) uni_indicator_pane_stacon

0xf4c4,	// (0x0005905a) battery_pane_stacon_ParamLimits

0xf4c4,	// (0x0005905a) battery_pane_stacon

0xf508,	// (0x0005909e) control_bottom_pane_stacon_ParamLimits

0xf508,	// (0x0005909e) control_bottom_pane_stacon

0xf52b,	// (0x000590c1) navi_pane_stacon_ParamLimits

0xf52b,	// (0x000590c1) navi_pane_stacon

0xac21,	// (0x000547b7) stacon_bottom_pane_g1_ParamLimits

0xac21,	// (0x000547b7) stacon_bottom_pane_g1

0xf170,	// (0x00058d06) aid_levels_signal_lsc_ParamLimits

0xf170,	// (0x00058d06) aid_levels_signal_lsc

0xf187,	// (0x00058d1d) signal_pane_stacon_g1_ParamLimits

0xf187,	// (0x00058d1d) signal_pane_stacon_g1

0xf19b,	// (0x00058d31) signal_pane_stacon_g2_ParamLimits

0xf19b,	// (0x00058d31) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005925f) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005925f) signal_pane_stacon_g

0xf1d0,	// (0x00058d66) title_pane_stacon_t1_ParamLimits

0xf1d0,	// (0x00058d66) title_pane_stacon_t1

0xa5c9,	// (0x0005415f) uni_indicator_pane_stacon_g1

0xa5d3,	// (0x00054169) uni_indicator_pane_stacon_g2

0xa5dd,	// (0x00054173) uni_indicator_pane_stacon_g3

0xa5e7,	// (0x0005417d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005926b) uni_indicator_pane_stacon_g

0xf1f5,	// (0x00058d8b) control_top_pane_stacon_g1

0xf1fd,	// (0x00058d93) control_top_pane_stacon_t1_ParamLimits

0xf1fd,	// (0x00058d93) control_top_pane_stacon_t1

0xf234,	// (0x00058dca) aid_levels_battery_lsc_ParamLimits

0xf234,	// (0x00058dca) aid_levels_battery_lsc

0xf24c,	// (0x00058de2) battery_pane_stacon_g1_ParamLimits

0xf24c,	// (0x00058de2) battery_pane_stacon_g1

0xf25f,	// (0x00058df5) battery_pane_stacon_g2_ParamLimits

0xf25f,	// (0x00058df5) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00059274) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00059274) battery_pane_stacon_g

0xf29d,	// (0x00058e33) navi_icon_pane_stacon

0xf2b1,	// (0x00058e47) navi_navi_pane_stacon

0xf29d,	// (0x00058e33) navi_text_pane_stacon

0xf1f5,	// (0x00058d8b) control_bottom_pane_stacon_g1

0xf2c7,	// (0x00058e5d) control_bottom_pane_stacon_t1_ParamLimits

0xf2c7,	// (0x00058e5d) control_bottom_pane_stacon_t1

0xa60b,	// (0x000541a1) grid_app_pane_ParamLimits

0xa60b,	// (0x000541a1) grid_app_pane

0xa643,	// (0x000541d9) scroll_pane_cp15_ParamLimits

0xa643,	// (0x000541d9) scroll_pane_cp15

0xa658,	// (0x000541ee) cell_app_pane_ParamLimits

0xa658,	// (0x000541ee) cell_app_pane

0xa6a5,	// (0x0005423b) cell_app_pane_g1_ParamLimits

0xa6a5,	// (0x0005423b) cell_app_pane_g1

0xa6c5,	// (0x0005425b) cell_app_pane_g2_ParamLimits

0xa6c5,	// (0x0005425b) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00059279) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00059279) cell_app_pane_g

0xa6d1,	// (0x00054267) cell_app_pane_t1_ParamLimits

0xa6d1,	// (0x00054267) cell_app_pane_t1

0xa6e8,	// (0x0005427e) grid_highlight_pane_ParamLimits

0xa6e8,	// (0x0005427e) grid_highlight_pane

0xa2bf,	// (0x00053e55) cell_highlight_pane_g1

0xa2c7,	// (0x00053e5d) cell_highlight_pane_g2

0xa2cf,	// (0x00053e65) cell_highlight_pane_g3

0xa2d7,	// (0x00053e6d) cell_highlight_pane_g4

0xa2df,	// (0x00053e75) cell_highlight_pane_g5

0xa2e7,	// (0x00053e7d) cell_highlight_pane_g6

0xa2ef,	// (0x00053e85) cell_highlight_pane_g7

0xa2f7,	// (0x00053e8d) cell_highlight_pane_g8

0xa2ff,	// (0x00053e95) cell_highlight_pane_g9

0x6f39,	// (0x00050acf) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00059227) cell_highlight_pane_g

0xa702,	// (0x00054298) bg_scroll_pane

0xf308,	// (0x00058e9e) scroll_handle_pane

0xa749,	// (0x000542df) scroll_bg_pane_g1

0xa75e,	// (0x000542f4) scroll_bg_pane_g2

0xa776,	// (0x0005430c) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005927e) scroll_bg_pane_g

0xa78b,	// (0x00054321) scroll_handle_focus_pane_ParamLimits

0xa78b,	// (0x00054321) scroll_handle_focus_pane

0xa749,	// (0x000542df) scroll_handle_pane_g1

0xa798,	// (0x0005432e) scroll_handle_pane_g2

0xa776,	// (0x0005430c) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00059285) scroll_handle_pane_g

0xa310,	// (0x00053ea6) bg_popup_sub_pane_cp21_ParamLimits

0xa310,	// (0x00053ea6) bg_popup_sub_pane_cp21

0xa7ac,	// (0x00054342) popup_fep_japan_predictive_window_t1_ParamLimits

0xa7ac,	// (0x00054342) popup_fep_japan_predictive_window_t1

0xa7c3,	// (0x00054359) popup_fep_japan_predictive_window_t2_ParamLimits

0xa7c3,	// (0x00054359) popup_fep_japan_predictive_window_t2

0xa7f6,	// (0x0005438c) popup_fep_japan_predictive_window_t3_ParamLimits

0xa7f6,	// (0x0005438c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005928c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005928c) popup_fep_japan_predictive_window_t

0x6f43,	// (0x00050ad9) bg_popup_sub_pane_cp23

0xa82d,	// (0x000543c3) listscroll_japin_cand_pane

0xa835,	// (0x000543cb) popup_fep_japan_candidate_window_t1

0xa843,	// (0x000543d9) candidate_pane_ParamLimits

0xa843,	// (0x000543d9) candidate_pane

0xa855,	// (0x000543eb) scroll_pane_cp30

0xa85f,	// (0x000543f5) list_single_popup_jap_candidate_pane_ParamLimits

0xa85f,	// (0x000543f5) list_single_popup_jap_candidate_pane

0x6f43,	// (0x00050ad9) list_highlight_pane_cp30

0xa873,	// (0x00054409) list_single_popup_jap_candidate_pane_t1

0xa882,	// (0x00054418) level_1_signal

0xa894,	// (0x0005442a) level_2_signal

0xa8a7,	// (0x0005443d) level_3_signal

0xa8ba,	// (0x00054450) level_4_signal

0xa8cd,	// (0x00054463) level_5_signal

0xa8e0,	// (0x00054476) level_6_signal

0xa8f3,	// (0x00054489) level_7_signal

0xa882,	// (0x00054418) level_1_battery

0xa894,	// (0x0005442a) level_2_battery

0xa8a7,	// (0x0005443d) level_3_battery

0xa8ba,	// (0x00054450) level_4_battery

0xa8cd,	// (0x00054463) level_5_battery

0xa8e0,	// (0x00054476) level_6_battery

0xa8f3,	// (0x00054489) level_7_battery

0xa91e,	// (0x000544b4) list_menu_pane_ParamLimits

0xa91e,	// (0x000544b4) list_menu_pane

0xa934,	// (0x000544ca) scroll_pane_cp25_ParamLimits

0xa934,	// (0x000544ca) scroll_pane_cp25

0xa94d,	// (0x000544e3) list_double2_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double2_graphic_pane_cp2

0xa94d,	// (0x000544e3) list_double2_large_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double2_large_graphic_pane_cp2

0xa94d,	// (0x000544e3) list_double2_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double2_pane_cp2

0xa94d,	// (0x000544e3) list_double_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double_graphic_pane_cp2

0xa94d,	// (0x000544e3) list_double_large_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double_large_graphic_pane_cp2

0xa94d,	// (0x000544e3) list_double_number_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double_number_pane_cp2

0xa94d,	// (0x000544e3) list_double_pane_cp2_ParamLimits

0xa94d,	// (0x000544e3) list_double_pane_cp2

0xa970,	// (0x00054506) list_single_2graphic_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_2graphic_pane_cp2

0xa970,	// (0x00054506) list_single_graphic_heading_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_graphic_heading_pane_cp2

0xa970,	// (0x00054506) list_single_graphic_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_graphic_pane_cp2

0xa970,	// (0x00054506) list_single_heading_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_heading_pane_cp2

0xa987,	// (0x0005451d) list_single_large_graphic_pane_cp2_ParamLimits

0xa987,	// (0x0005451d) list_single_large_graphic_pane_cp2

0xa970,	// (0x00054506) list_single_number_heading_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_number_heading_pane_cp2

0xa970,	// (0x00054506) list_single_number_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_number_pane_cp2

0xa970,	// (0x00054506) list_single_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_pane_cp2

0xaa1b,	// (0x000545b1) bg_popup_sub_pane_cp22

0xf3ba,	// (0x00058f50) popup_side_volume_key_window_g1

0xf3e4,	// (0x00058f7a) popup_side_volume_key_window_t1

0xf402,	// (0x00058f98) volume_small_pane_cp1

0x70d0,	// (0x00050c66) bg_popup_sub_pane_cp24_ParamLimits

0x70d0,	// (0x00050c66) bg_popup_sub_pane_cp24

0xaa31,	// (0x000545c7) fep_china_uni_candidate_pane_ParamLimits

0xaa31,	// (0x000545c7) fep_china_uni_candidate_pane

0xaa45,	// (0x000545db) fep_china_uni_entry_pane

0xaa55,	// (0x000545eb) popup_fep_china_uni_window_g1

0xaa71,	// (0x00054607) fep_china_uni_entry_pane_g1

0xaa7b,	// (0x00054611) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x000592bd) fep_china_uni_entry_pane_g

0xaa85,	// (0x0005461b) fep_entry_item_pane

0xaa8f,	// (0x00054625) fep_candidate_item_pane

0xaa97,	// (0x0005462d) fep_china_uni_candidate_pane_g1

0xaaa1,	// (0x00054637) fep_china_uni_candidate_pane_g2

0xaaa9,	// (0x0005463f) fep_china_uni_candidate_pane_g3

0xaab1,	// (0x00054647) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x000592c2) fep_china_uni_candidate_pane_g

0x6f39,	// (0x00050acf) fep_entry_item_pane_g1

0xaabb,	// (0x00054651) fep_entry_item_pane_t1_ParamLimits

0xaabb,	// (0x00054651) fep_entry_item_pane_t1

0xaad1,	// (0x00054667) fep_candidate_item_pane_t1_ParamLimits

0xaad1,	// (0x00054667) fep_candidate_item_pane_t1

0xaae6,	// (0x0005467c) fep_candidate_item_pane_t2_ParamLimits

0xaae6,	// (0x0005467c) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x000592cb) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x000592cb) fep_candidate_item_pane_t

0x6f9d,	// (0x00050b33) list_highlight_pane_cp31_ParamLimits

0x6f9d,	// (0x00050b33) list_highlight_pane_cp31

0xaaf8,	// (0x0005468e) level_1_signal_lsc

0xab01,	// (0x00054697) level_2_signal_lsc

0xab0a,	// (0x000546a0) level_3_signal_lsc

0xab13,	// (0x000546a9) level_4_signal_lsc

0xab1c,	// (0x000546b2) level_5_signal_lsc

0xab25,	// (0x000546bb) level_6_signal_lsc

0xab2e,	// (0x000546c4) level_7_signal_lsc

0xab2e,	// (0x000546c4) level_1_battery_lsc

0xab37,	// (0x000546cd) level_2_battery_lsc

0xab40,	// (0x000546d6) level_3_battery_lsc

0xab49,	// (0x000546df) level_4_battery_lsc

0xab52,	// (0x000546e8) level_5_battery_lsc

0xab5b,	// (0x000546f1) level_6_battery_lsc

0xaaf8,	// (0x0005468e) level_7_battery_lsc

0xab64,	// (0x000546fa) scroll_handle_focus_pane_g1

0xab6d,	// (0x00054703) scroll_handle_focus_pane_g2

0xab76,	// (0x0005470c) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000592d0) scroll_handle_focus_pane_g

0x99a3,	// (0x00053539) list_single_2graphic_pane_g1_ParamLimits

0x99a3,	// (0x00053539) list_single_2graphic_pane_g1

0xa1b1,	// (0x00053d47) list_single_2graphic_pane_g2_ParamLimits

0xa1b1,	// (0x00053d47) list_single_2graphic_pane_g2

0x0613,	// (0x0004a1a9) list_single_2graphic_pane_g3_ParamLimits

0x0613,	// (0x0004a1a9) list_single_2graphic_pane_g3

0xab7f,	// (0x00054715) list_single_2graphic_pane_g4_ParamLimits

0xab7f,	// (0x00054715) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000592d7) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000592d7) list_single_2graphic_pane_g

0x99af,	// (0x00053545) list_single_2graphic_pane_t1_ParamLimits

0x99af,	// (0x00053545) list_single_2graphic_pane_t1

0xab90,	// (0x00054726) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab90,	// (0x00054726) list_double2_graphic_large_graphic_pane_g1

0xa1fa,	// (0x00053d90) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa1fa,	// (0x00053d90) list_double2_graphic_large_graphic_pane_g2

0xa1e2,	// (0x00053d78) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa1e2,	// (0x00053d78) list_double2_graphic_large_graphic_pane_g3

0xaba2,	// (0x00054738) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaba2,	// (0x00054738) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000592e0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000592e0) list_double2_graphic_large_graphic_pane_g

0x99dd,	// (0x00053573) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x99dd,	// (0x00053573) list_double2_graphic_large_graphic_pane_t1

0x99f3,	// (0x00053589) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x99f3,	// (0x00053589) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000592e9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000592e9) list_double2_graphic_large_graphic_pane_t

0xacce,	// (0x00054864) popup_fast_swap_window_ParamLimits

0xacce,	// (0x00054864) popup_fast_swap_window

0xacec,	// (0x00054882) popup_side_volume_key_window

0xad0a,	// (0x000548a0) stacon_top_pane

0xad14,	// (0x000548aa) status_pane_ParamLimits

0xad14,	// (0x000548aa) status_pane

0xad22,	// (0x000548b8) status_small_pane

0x6f43,	// (0x00050ad9) control_pane

0x6f43,	// (0x00050ad9) stacon_bottom_pane

0xa247,	// (0x00053ddd) scroll_pane_cp121

0xa23e,	// (0x00053dd4) set_content_pane

0xabae,	// (0x00054744) bg_active_tab_pane_g1_cp1

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp1

0xabc0,	// (0x00054756) bg_active_tab_pane_g3_cp1

0xabae,	// (0x00054744) bg_passive_tab_pane_g1_cp1

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp1

0xabc0,	// (0x00054756) bg_passive_tab_pane_g3_cp1

0xabc9,	// (0x0005475f) bg_active_tab_pane_g1_cp2

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp2

0xabd2,	// (0x00054768) bg_active_tab_pane_g3_cp2

0xabc9,	// (0x0005475f) bg_passive_tab_pane_g1_cp2

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp2

0xabd2,	// (0x00054768) bg_passive_tab_pane_g3_cp2

0xabdb,	// (0x00054771) bg_active_tab_pane_g1_cp3

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp3

0xabe4,	// (0x0005477a) bg_active_tab_pane_g3_cp3

0xabdb,	// (0x00054771) bg_passive_tab_pane_g1_cp3

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp3

0xabe4,	// (0x0005477a) bg_passive_tab_pane_g3_cp3

0xabed,	// (0x00054783) bg_active_tab_pane_g1_cp4

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp4

0xabf6,	// (0x0005478c) bg_active_tab_pane_g3_cp4

0xabed,	// (0x00054783) bg_passive_tab_pane_g1_cp4

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp4

0xabf6,	// (0x0005478c) bg_passive_tab_pane_g3_cp4

0xac3d,	// (0x000547d3) bg_active_tab_pane_g1_cp5

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp5

0xac46,	// (0x000547dc) bg_active_tab_pane_g3_cp5

0xac3d,	// (0x000547d3) bg_passive_tab_pane_g1_cp5

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp5

0xac46,	// (0x000547dc) bg_passive_tab_pane_g3_cp5

0x415f,	// (0x0004dcf5) list_set_graphic_pane_ParamLimits

0x415f,	// (0x0004dcf5) list_set_graphic_pane

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp4

0xac4f,	// (0x000547e5) list_set_graphic_pane_g1_ParamLimits

0xac4f,	// (0x000547e5) list_set_graphic_pane_g1

0xac5b,	// (0x000547f1) list_set_graphic_pane_g2_ParamLimits

0xac5b,	// (0x000547f1) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000592ee) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000592ee) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x00059678) volume_small_pane_cp_g

0xac7f,	// (0x00054815) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xac7f,	// (0x00054815) list_double2_large_graphic_pane_g1_cp2

0xac8d,	// (0x00054823) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xac8d,	// (0x00054823) list_double2_large_graphic_pane_g2_cp2

0xac9e,	// (0x00054834) list_double2_large_graphic_pane_g3_cp2

0xaca6,	// (0x0005483c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xaca6,	// (0x0005483c) list_double2_large_graphic_pane_t1_cp2

0xacbc,	// (0x00054852) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xacbc,	// (0x00054852) list_double2_large_graphic_pane_t2_cp2

0xc7b4,	// (0x0005634a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7b4,	// (0x0005634a) list_double_large_graphic_pane_g1_cp2

0xc7c7,	// (0x0005635d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc7c7,	// (0x0005635d) list_double_large_graphic_pane_g2_cp2

0xae3d,	// (0x000549d3) list_double_large_graphic_pane_g3_cp2

0x36e4,	// (0x0004d27a) list_double_large_graphic_pane_g4_cp

0x36ec,	// (0x0004d282) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x36ec,	// (0x0004d282) list_double_large_graphic_pane_t1_cp2

0x3703,	// (0x0004d299) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3703,	// (0x0004d299) list_double_large_graphic_pane_t2_cp2

0xad2d,	// (0x000548c3) list_double2_graphic_pane_g1_cp2_ParamLimits

0xad2d,	// (0x000548c3) list_double2_graphic_pane_g1_cp2

0xad3b,	// (0x000548d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xad3b,	// (0x000548d1) list_double2_graphic_pane_g2_cp2

0xad4c,	// (0x000548e2) list_double2_graphic_pane_g3_cp2

0xad56,	// (0x000548ec) list_double2_graphic_pane_t1_cp2_ParamLimits

0xad56,	// (0x000548ec) list_double2_graphic_pane_t1_cp2

0xad6c,	// (0x00054902) list_double2_graphic_pane_t2_cp2_ParamLimits

0xad6c,	// (0x00054902) list_double2_graphic_pane_t2_cp2

0xad7e,	// (0x00054914) list_single_number_heading_pane_g1_cp2_ParamLimits

0xad7e,	// (0x00054914) list_single_number_heading_pane_g1_cp2

0xad8a,	// (0x00054920) list_single_number_heading_pane_g2_cp2

0xad92,	// (0x00054928) list_single_number_heading_pane_t1_cp2_ParamLimits

0xad92,	// (0x00054928) list_single_number_heading_pane_t1_cp2

0xada8,	// (0x0005493e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xada8,	// (0x0005493e) list_single_number_heading_pane_t2_cp2

0xadbc,	// (0x00054952) list_single_number_heading_pane_t3_cp2_ParamLimits

0xadbc,	// (0x00054952) list_single_number_heading_pane_t3_cp2

0xad7e,	// (0x00054914) list_single_heading_pane_g1_cp2_ParamLimits

0xad7e,	// (0x00054914) list_single_heading_pane_g1_cp2

0xad8a,	// (0x00054920) list_single_heading_pane_g2_cp2

0xad92,	// (0x00054928) list_single_heading_pane_t1_cp2_ParamLimits

0xad92,	// (0x00054928) list_single_heading_pane_t1_cp2

0xc7a0,	// (0x00056336) list_single_heading_pane_t2_cp2_ParamLimits

0xc7a0,	// (0x00056336) list_single_heading_pane_t2_cp2

0x3402,	// (0x0004cf98) list_double_graphic_pane_g1_cp2_ParamLimits

0x3402,	// (0x0004cf98) list_double_graphic_pane_g1_cp2

0x340e,	// (0x0004cfa4) list_double_graphic_pane_g2_cp2_ParamLimits

0x340e,	// (0x0004cfa4) list_double_graphic_pane_g2_cp2

0x341d,	// (0x0004cfb3) list_double_graphic_pane_g3_cp2

0x3425,	// (0x0004cfbb) list_double_graphic_pane_t1_cp2_ParamLimits

0x3425,	// (0x0004cfbb) list_double_graphic_pane_t1_cp2

0x343b,	// (0x0004cfd1) list_double_graphic_pane_t2_cp2_ParamLimits

0x343b,	// (0x0004cfd1) list_double_graphic_pane_t2_cp2

0xae31,	// (0x000549c7) list_double_number_pane_g1_cp2_ParamLimits

0xae31,	// (0x000549c7) list_double_number_pane_g1_cp2

0xae3d,	// (0x000549d3) list_double_number_pane_g2_cp2

0xc73a,	// (0x000562d0) list_double_number_pane_t1_cp2_ParamLimits

0xc73a,	// (0x000562d0) list_double_number_pane_t1_cp2

0x33da,	// (0x0004cf70) list_double_number_pane_t2_cp2_ParamLimits

0x33da,	// (0x0004cf70) list_double_number_pane_t2_cp2

0x33f0,	// (0x0004cf86) list_double_number_pane_t3_cp2_ParamLimits

0x33f0,	// (0x0004cf86) list_double_number_pane_t3_cp2

0xc688,	// (0x0005621e) list_single_graphic_pane_g1_cp2_ParamLimits

0xc688,	// (0x0005621e) list_single_graphic_pane_g1_cp2

0xe746,	// (0x000582dc) list_single_graphic_pane_g2_cp2_ParamLimits

0xe746,	// (0x000582dc) list_single_graphic_pane_g2_cp2

0xe752,	// (0x000582e8) list_single_graphic_pane_g3_cp2

0x3285,	// (0x0004ce1b) list_single_graphic_pane_t1_cp2_ParamLimits

0x3285,	// (0x0004ce1b) list_single_graphic_pane_t1_cp2

0xe746,	// (0x000582dc) list_single_number_pane_g1_cp2_ParamLimits

0xe746,	// (0x000582dc) list_single_number_pane_g1_cp2

0xe752,	// (0x000582e8) list_single_number_pane_g2_cp2

0x3285,	// (0x0004ce1b) list_single_number_pane_t1_cp2_ParamLimits

0x3285,	// (0x0004ce1b) list_single_number_pane_t1_cp2

0xc674,	// (0x0005620a) list_single_number_pane_t2_cp2_ParamLimits

0xc674,	// (0x0005620a) list_single_number_pane_t2_cp2

0xac8d,	// (0x00054823) list_double2_pane_g1_cp2_ParamLimits

0xac8d,	// (0x00054823) list_double2_pane_g1_cp2

0xac9e,	// (0x00054834) list_double2_pane_g2_cp2

0xae09,	// (0x0005499f) list_double2_pane_t1_cp2_ParamLimits

0xae09,	// (0x0005499f) list_double2_pane_t1_cp2

0xae1f,	// (0x000549b5) list_double2_pane_t2_cp2_ParamLimits

0xae1f,	// (0x000549b5) list_double2_pane_t2_cp2

0xae31,	// (0x000549c7) list_double_pane_g1_cp2_ParamLimits

0xae31,	// (0x000549c7) list_double_pane_g1_cp2

0xae3d,	// (0x000549d3) list_double_pane_g2_cp2

0xae45,	// (0x000549db) list_double_pane_t1_cp2_ParamLimits

0xae45,	// (0x000549db) list_double_pane_t1_cp2

0xae5b,	// (0x000549f1) list_double_pane_t2_cp2_ParamLimits

0xae5b,	// (0x000549f1) list_double_pane_t2_cp2

0xe736,	// (0x000582cc) list_single_pane_cp2_g3

0xe746,	// (0x000582dc) list_single_pane_g1_cp2_ParamLimits

0xe746,	// (0x000582dc) list_single_pane_g1_cp2

0xe752,	// (0x000582e8) list_single_pane_g2_cp2

0xe75a,	// (0x000582f0) list_single_pane_t1_cp2_ParamLimits

0xe75a,	// (0x000582f0) list_single_pane_t1_cp2

0xae87,	// (0x00054a1d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xae87,	// (0x00054a1d) list_single_large_graphic_pane_g1_cp2

0xe5f4,	// (0x0005818a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe5f4,	// (0x0005818a) list_single_large_graphic_pane_g2_cp2

0xe772,	// (0x00058308) list_single_large_graphic_pane_g3_cp2

0xe77a,	// (0x00058310) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe77a,	// (0x00058310) list_single_large_graphic_pane_g4_cp1

0xe794,	// (0x0005832a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe794,	// (0x0005832a) list_single_large_graphic_pane_t1_cp2

0x324f,	// (0x0004cde5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x324f,	// (0x0004cde5) list_single_graphic_heading_pane_g1_cp2

0xc64f,	// (0x000561e5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc64f,	// (0x000561e5) list_single_graphic_heading_pane_g4_cp2

0xe752,	// (0x000582e8) list_single_graphic_heading_pane_g5_cp2

0x325b,	// (0x0004cdf1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x325b,	// (0x0004cdf1) list_single_graphic_heading_pane_t1_cp2

0xc660,	// (0x000561f6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc660,	// (0x000561f6) list_single_graphic_heading_pane_t2_cp2

0x3210,	// (0x0004cda6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3210,	// (0x0004cda6) list_single_2graphic_pane_g1_cp2

0xc64f,	// (0x000561e5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc64f,	// (0x000561e5) list_single_2graphic_pane_g2_cp2

0xe752,	// (0x000582e8) list_single_2graphic_pane_g3_cp2

0x322d,	// (0x0004cdc3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x322d,	// (0x0004cdc3) list_single_2graphic_pane_g4_cp2

0x3239,	// (0x0004cdcf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3239,	// (0x0004cdcf) list_single_2graphic_pane_t1_cp2

0x6f39,	// (0x00050acf) list_highlight_pane_g10_cp1

0x2de8,	// (0x0004c97e) list_highlight_pane_g1_cp1

0x2df0,	// (0x0004c986) list_highlight_pane_g2_cp1

0x2df8,	// (0x0004c98e) list_highlight_pane_g3_cp1

0x2e00,	// (0x0004c996) list_highlight_pane_g4_cp1

0x2e08,	// (0x0004c99e) list_highlight_pane_g5_cp1

0x2e10,	// (0x0004c9a6) list_highlight_pane_g6_cp1

0x2e18,	// (0x0004c9ae) list_highlight_pane_g7_cp1

0x2e20,	// (0x0004c9b6) list_highlight_pane_g8_cp1

0x2e28,	// (0x0004c9be) list_highlight_pane_g9_cp1

0xc615,	// (0x000561ab) form_field_slider_pane_t3

0xc623,	// (0x000561b9) form_field_slider_pane_t4

0x2d24,	// (0x0004c8ba) slider_form_pane_ParamLimits

0x2d24,	// (0x0004c8ba) slider_form_pane

0x6f43,	// (0x00050ad9) control_abbreviations

0x6f43,	// (0x00050ad9) control_conventions

0x6f43,	// (0x00050ad9) control_definitions

0x6f43,	// (0x00050ad9) format_table_attribute

0x3510,	// (0x0004d0a6) bg_popup_preview_window_pane_g9

0x6f43,	// (0x00050ad9) format_table_data2

0x6f43,	// (0x00050ad9) format_table_data3

0x6f43,	// (0x00050ad9) format_table_data_example

0x0008,

0x6f43,	// (0x00050ad9) intro_purpose

0xf8ef,	// (0x00059485) bg_popup_preview_window_pane_g

0x6f43,	// (0x00050ad9) texts_category

0x6f43,	// (0x00050ad9) texts_graphics

0xe7aa,	// (0x00058340) text_digital

0xe7b9,	// (0x0005834f) text_primary

0xe7c8,	// (0x0005835e) text_primary_small

0xe7d7,	// (0x0005836d) text_secondary

0xe7e6,	// (0x0005837c) text_title

0x3ca4,	// (0x0004d83a) bg_passive_tab_pane_g1_cp3_srt

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp3_srt

0x3cad,	// (0x0004d843) bg_passive_tab_pane_g3_cp3_srt

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp3_srt_ParamLimits

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp3_srt

0x3cb6,	// (0x0004d84c) tabs_4_active_pane_srt_g1

0xca98,	// (0x0005662e) tabs_4_active_pane_srt_t1_ParamLimits

0xca98,	// (0x0005662e) tabs_4_active_pane_srt_t1

0x3ca4,	// (0x0004d83a) bg_active_tab_pane_g1_cp3_copy1

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp3_copy1

0x3cad,	// (0x0004d843) bg_active_tab_pane_g3_cp3_copy1

0x6f9d,	// (0x00050b33) tabs_2_long_active_pane_srt_ParamLimits

0x6f9d,	// (0x00050b33) tabs_2_long_active_pane_srt

0x6f9d,	// (0x00050b33) tabs_2_long_passive_pane_srt_ParamLimits

0x6f9d,	// (0x00050b33) tabs_2_long_passive_pane_srt

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp4_srt

0x394c,	// (0x0004d4e2) bg_passive_tab_pane_g1_cp4_srt

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp4_srt

0x3955,	// (0x0004d4eb) bg_passive_tab_pane_g3_cp4_srt

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp4_srt_ParamLimits

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp4_srt

0xc88a,	// (0x00056420) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc88a,	// (0x00056420) tabs_2_long_active_pane_srt_t1

0x394c,	// (0x0004d4e2) bg_active_tab_pane_g1_cp4_srt

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp4_srt

0x3955,	// (0x0004d4eb) bg_active_tab_pane_g3_cp4_srt

0x70d0,	// (0x00050c66) tabs_3_long_active_pane_srt_ParamLimits

0x70d0,	// (0x00050c66) tabs_3_long_active_pane_srt

0x70d0,	// (0x00050c66) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x70d0,	// (0x00050c66) tabs_3_long_passive_pane_cp_srt

0x70d0,	// (0x00050c66) tabs_3_long_passive_pane_srt_ParamLimits

0x70d0,	// (0x00050c66) tabs_3_long_passive_pane_srt

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp5_srt

0xac3d,	// (0x000547d3) bg_passive_tab_pane_g1_cp5_srt

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp5_srt

0xac46,	// (0x000547dc) bg_passive_tab_pane_g3_cp5_srt

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp5_srt_ParamLimits

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp5_srt

0xc874,	// (0x0005640a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc874,	// (0x0005640a) tabs_3_long_active_pane_srt_t1

0xac3d,	// (0x000547d3) bg_active_tab_pane_g1_cp5_srt

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp5_srt

0xac46,	// (0x000547dc) bg_active_tab_pane_g3_cp5_srt

0x392c,	// (0x0004d4c2) navi_text_pane_srt_t1

0x3924,	// (0x0004d4ba) navi_icon_pane_srt_g1

0xe8f0,	// (0x00058486) midp_editing_number_pane_srt

0xe7f5,	// (0x0005838b) midp_ticker_pane_srt

0xe8f8,	// (0x0005848e) midp_ticker_pane_srt_g1

0xe900,	// (0x00058496) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005930d) midp_ticker_pane_srt_g

0xe908,	// (0x0005849e) midp_ticker_pane_srt_t1

0x3915,	// (0x0004d4ab) midp_editing_number_pane_t1_copy1

0x04b5,	// (0x0004a04b) listscroll_midp_pane

0x04b5,	// (0x0004a04b) midp_form_pane

0xe7fd,	// (0x00058393) midp_info_popup_window_ParamLimits

0xe7fd,	// (0x00058393) midp_info_popup_window

0xa310,	// (0x00053ea6) bg_popup_sub_pane_cp50_ParamLimits

0xa310,	// (0x00053ea6) bg_popup_sub_pane_cp50

0x2a1e,	// (0x0004c5b4) listscroll_midp_info_pane_ParamLimits

0x2a1e,	// (0x0004c5b4) listscroll_midp_info_pane

0x2a06,	// (0x0004c59c) listscroll_form_midp_pane_ParamLimits

0x2a06,	// (0x0004c59c) listscroll_form_midp_pane

0x2a12,	// (0x0004c5a8) scroll_bar_cp050

0xc609,	// (0x0005619f) list_midp_pane

0x4739,	// (0x0004e2cf) signal_pane_g2_cp

0x2920,	// (0x0004c4b6) listscroll_midp_info_pane_t1_ParamLimits

0x2920,	// (0x0004c4b6) listscroll_midp_info_pane_t1

0x2938,	// (0x0004c4ce) listscroll_midp_info_pane_t2_ParamLimits

0x2938,	// (0x0004c4ce) listscroll_midp_info_pane_t2

0x2976,	// (0x0004c50c) listscroll_midp_info_pane_t3_ParamLimits

0x2976,	// (0x0004c50c) listscroll_midp_info_pane_t3

0x29b0,	// (0x0004c546) listscroll_midp_info_pane_t4_ParamLimits

0x29b0,	// (0x0004c546) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x000593c0) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x000593c0) listscroll_midp_info_pane_t

0xa3da,	// (0x00053f70) scroll_pane_cp21

0x28ba,	// (0x0004c450) form_midp_field_choice_group_pane

0x28c3,	// (0x0004c459) form_midp_field_text_pane

0x2906,	// (0x0004c49c) form_midp_field_time_pane

0x290e,	// (0x0004c4a4) form_midp_gauge_slider_pane

0x2917,	// (0x0004c4ad) form_midp_gauge_wait_pane

0x6f43,	// (0x00050ad9) form_midp_image_pane

0x9a05,	// (0x0005359b) list_single_midp_pane_ParamLimits

0x9a05,	// (0x0005359b) list_single_midp_pane

0xc5e1,	// (0x00056177) form_midp_field_text_pane_t1

0x266a,	// (0x0004c200) input_focus_pane_cp050

0x28a9,	// (0x0004c43f) list_midp_form_text_pane

0x284d,	// (0x0004c3e3) form_midp_field_choice_group_pane_t1

0x285b,	// (0x0004c3f1) input_focus_pane_cp051

0x286f,	// (0x0004c405) list_midp_choice_pane

0x6f43,	// (0x00050ad9) status_idle_pane

0x2831,	// (0x0004c3c7) form_midp_field_time_pane_t1

0x6f39,	// (0x00050acf) wait_anim_pane_g2_copy1

0x283f,	// (0x0004c3d5) form_midp_field_time_pane_t2

0x0001,

0xe858,	// (0x000583ee) aid_navinavi_width_2_pane

0xf825,	// (0x000593bb) form_midp_field_time_pane_t

0x6f43,	// (0x00050ad9) input_focus_pane_cp052

0x6f43,	// (0x00050ad9) bg_input_focus_pane_cp040

0x27f1,	// (0x0004c387) form_midp_gauge_slider_pane_t1

0x27ff,	// (0x0004c395) form_midp_gauge_slider_pane_t2

0xc5c5,	// (0x0005615b) form_midp_gauge_slider_pane_t3

0xc5d3,	// (0x00056169) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x000593b2) form_midp_gauge_slider_pane_t

0x2829,	// (0x0004c3bf) form_midp_slider_pane

0x6f9d,	// (0x00050b33) bg_input_focus_pane_cp041_ParamLimits

0x6f9d,	// (0x00050b33) bg_input_focus_pane_cp041

0x27be,	// (0x0004c354) form_midp_gauge_wait_pane_t1_ParamLimits

0x27be,	// (0x0004c354) form_midp_gauge_wait_pane_t1

0x27d0,	// (0x0004c366) form_midp_gauge_wait_pane_t2_ParamLimits

0x27d0,	// (0x0004c366) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x000593ad) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x000593ad) form_midp_gauge_wait_pane_t

0x27e2,	// (0x0004c378) form_midp_wait_pane_ParamLimits

0x27e2,	// (0x0004c378) form_midp_wait_pane

0x2786,	// (0x0004c31c) form_midp_image_pane_g1

0x278f,	// (0x0004c325) form_midp_image_pane_t1

0x279e,	// (0x0004c334) form_midp_image_pane_t2

0x27ad,	// (0x0004c343) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x000593a6) form_midp_image_pane_t

0x277d,	// (0x0004c313) list_single_midp_pane_g1

0xea98,	// (0x0005862e) list_single_midp_pane_t1

0xbd9b,	// (0x00055931) list_midp_form_item_pane_ParamLimits

0xbd9b,	// (0x00055931) list_midp_form_item_pane

0xe812,	// (0x000583a8) list_midp_form_item_pane_t1

0xe821,	// (0x000583b7) midp_ticker_pane_g1

0xe82d,	// (0x000583c3) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000592f3) midp_ticker_pane_g

0xaf2c,	// (0x00054ac2) midp_ticker_pane_t1

0xca19,	// (0x000565af) midp_editing_number_pane_t1

0x3b66,	// (0x0004d6fc) midp_editing_number_pane

0x3b75,	// (0x0004d70b) midp_ticker_pane

0x3905,	// (0x0004d49b) ai_message_heading_pane

0x6f43,	// (0x00050ad9) bg_popup_window_pane_cp14

0x390d,	// (0x0004d4a3) listscroll_ai_message_pane

0x388b,	// (0x0004d421) ai_message_heading_pane_g1_ParamLimits

0x388b,	// (0x0004d421) ai_message_heading_pane_g1

0x3897,	// (0x0004d42d) ai_message_heading_pane_g2_ParamLimits

0x3897,	// (0x0004d42d) ai_message_heading_pane_g2

0x38a5,	// (0x0004d43b) ai_message_heading_pane_g3_ParamLimits

0x38a5,	// (0x0004d43b) ai_message_heading_pane_g3

0x38b1,	// (0x0004d447) ai_message_heading_pane_g4_ParamLimits

0x38b1,	// (0x0004d447) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x000594e7) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x000594e7) ai_message_heading_pane_g

0x38bd,	// (0x0004d453) ai_message_heading_pane_t1_ParamLimits

0x38bd,	// (0x0004d453) ai_message_heading_pane_t1

0x38d7,	// (0x0004d46d) ai_message_heading_pane_t2_ParamLimits

0x38d7,	// (0x0004d46d) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x000594f0) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x000594f0) ai_message_heading_pane_t

0x38eb,	// (0x0004d481) bg_popup_heading_pane_cp1_ParamLimits

0x38eb,	// (0x0004d481) bg_popup_heading_pane_cp1

0x3879,	// (0x0004d40f) list_ai_message_pane_ParamLimits

0x3879,	// (0x0004d40f) list_ai_message_pane

0xa3da,	// (0x00053f70) scroll_pane_cp10

0x3815,	// (0x0004d3ab) list_ai_message_pane_g1

0x381d,	// (0x0004d3b3) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x000594c4) list_ai_message_pane_g

0x3825,	// (0x0004d3bb) list_ai_message_pane_t1_ParamLimits

0x3825,	// (0x0004d3bb) list_ai_message_pane_t1

0x383a,	// (0x0004d3d0) list_ai_message_pane_t2_ParamLimits

0x383a,	// (0x0004d3d0) list_ai_message_pane_t2

0x384f,	// (0x0004d3e5) list_ai_message_pane_t3_ParamLimits

0x384f,	// (0x0004d3e5) list_ai_message_pane_t3

0x3864,	// (0x0004d3fa) list_ai_message_pane_t4_ParamLimits

0x3864,	// (0x0004d3fa) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x000594c9) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x000594c9) list_ai_message_pane_t

0xc85a,	// (0x000563f0) cell_ai_soft_ind_pane_ParamLimits

0xc85a,	// (0x000563f0) cell_ai_soft_ind_pane

0xe839,	// (0x000583cf) cell_ai_soft_ind_pane_g1_ParamLimits

0xe839,	// (0x000583cf) cell_ai_soft_ind_pane_g1

0x6f43,	// (0x00050ad9) grid_highlight_cp1

0xe846,	// (0x000583dc) text_secondary_cp56_ParamLimits

0xe846,	// (0x000583dc) text_secondary_cp56

0x37d3,	// (0x0004d369) example_general_pane_ParamLimits

0x37d3,	// (0x0004d369) example_general_pane

0x37df,	// (0x0004d375) example_parent_pane_g1_ParamLimits

0x37df,	// (0x0004d375) example_parent_pane_g1

0x37eb,	// (0x0004d381) example_parent_pane_t1_ParamLimits

0x37eb,	// (0x0004d381) example_parent_pane_t1

0xb5ae,	// (0x00055144) popup_preview_text_window_ParamLimits

0xb5ae,	// (0x00055144) popup_preview_text_window

0xe73e,	// (0x000582d4) list_single_pane_cp2_g4

0x7186,	// (0x00050d1c) bg_popup_preview_window_pane_ParamLimits

0x7186,	// (0x00050d1c) bg_popup_preview_window_pane

0x351a,	// (0x0004d0b0) popup_preview_text_window_t1_ParamLimits

0x351a,	// (0x0004d0b0) popup_preview_text_window_t1

0x3538,	// (0x0004d0ce) popup_preview_text_window_t2_ParamLimits

0x3538,	// (0x0004d0ce) popup_preview_text_window_t2

0x3581,	// (0x0004d117) popup_preview_text_window_t3_ParamLimits

0x3581,	// (0x0004d117) popup_preview_text_window_t3

0x35c6,	// (0x0004d15c) popup_preview_text_window_t4_ParamLimits

0x35c6,	// (0x0004d15c) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00059498) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00059498) popup_preview_text_window_t

0x3644,	// (0x0004d1da) scroll_pane_cp11

0x25f6,	// (0x0004c18c) bg_popup_preview_window_pane_g1

0x34ce,	// (0x0004d064) bg_popup_preview_window_pane_g2

0x34d8,	// (0x0004d06e) bg_popup_preview_window_pane_g3

0x34e2,	// (0x0004d078) bg_popup_preview_window_pane_g4

0x34ec,	// (0x0004d082) bg_popup_preview_window_pane_g5

0x34f6,	// (0x0004d08c) bg_popup_preview_window_pane_g6

0x34fe,	// (0x0004d094) bg_popup_preview_window_pane_g7

0x3506,	// (0x0004d09c) bg_popup_preview_window_pane_g8

0xeeec,	// (0x00058a82) aid_popup_width_pane

0xb51e,	// (0x000550b4) popup_midp_note_alarm_window_ParamLimits

0xb51e,	// (0x000550b4) popup_midp_note_alarm_window

0xa258,	// (0x00053dee) data_form_pane_ParamLimits

0x9894,	// (0x0005342a) form_field_data_pane_g1

0x989e,	// (0x00053434) form_field_data_pane_t1_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_ParamLimits

0xe699,	// (0x0005822f) data_form_wide_pane_ParamLimits

0xe6aa,	// (0x00058240) form_field_data_wide_pane_g1

0xe6b6,	// (0x0005824c) form_field_data_wide_pane_t1_ParamLimits

0x733b,	// (0x00050ed1) input_focus_pane_cp6_ParamLimits

0xa385,	// (0x00053f1b) input_popup_find_pane_g1_ParamLimits

0xa385,	// (0x00053f1b) input_popup_find_pane_g1

0xf270,	// (0x00058e06) aid_navi_side_left_pane

0xf285,	// (0x00058e1b) aid_navi_side_right_pane

0x2ee3,	// (0x0004ca79) bg_popup_window_pane_cp30_ParamLimits

0x2ee3,	// (0x0004ca79) bg_popup_window_pane_cp30

0x2f5d,	// (0x0004caf3) popup_midp_note_alarm_window_g1_ParamLimits

0x2f5d,	// (0x0004caf3) popup_midp_note_alarm_window_g1

0x2f8d,	// (0x0004cb23) popup_midp_note_alarm_window_t1_ParamLimits

0x2f8d,	// (0x0004cb23) popup_midp_note_alarm_window_t1

0x302e,	// (0x0004cbc4) popup_midp_note_alarm_window_t2_ParamLimits

0x302e,	// (0x0004cbc4) popup_midp_note_alarm_window_t2

0x30dc,	// (0x0004cc72) popup_midp_note_alarm_window_t3_ParamLimits

0x30dc,	// (0x0004cc72) popup_midp_note_alarm_window_t3

0x310e,	// (0x0004cca4) popup_midp_note_alarm_window_t4_ParamLimits

0x310e,	// (0x0004cca4) popup_midp_note_alarm_window_t4

0x3134,	// (0x0004ccca) popup_midp_note_alarm_window_t5_ParamLimits

0x3134,	// (0x0004ccca) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00059435) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00059435) popup_midp_note_alarm_window_t

0x31e0,	// (0x0004cd76) wait_bar_pane_cp1_ParamLimits

0x31e0,	// (0x0004cd76) wait_bar_pane_cp1

0x6f43,	// (0x00050ad9) wait_anim_pane_copy1

0x6f43,	// (0x00050ad9) wait_border_pane_copy1

0x2bc8,	// (0x0004c75e) wait_border_pane_g1_copy1

0xe6d0,	// (0x00058266) form_field_popup_pane_g1

0x98b8,	// (0x0005344e) form_field_popup_pane_t1_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_cp7_ParamLimits

0xa292,	// (0x00053e28) list_form_pane_ParamLimits

0xe6d8,	// (0x0005826e) form_field_popup_wide_pane_g1

0xe6e0,	// (0x00058276) form_field_popup_wide_pane_t1_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_cp8_ParamLimits

0xa29e,	// (0x00053e34) list_form_wide_pane_ParamLimits

0x3d31,	// (0x0004d8c7) aid_size_cell_graphic_pane

0x9937,	// (0x000534cd) data_form_pane_t1_ParamLimits

0x9a33,	// (0x000535c9) data_form_wide_pane_t1_ParamLimits

0xb9b2,	// (0x00055548) bg_status_flat_pane

0x9e20,	// (0x000539b6) title_pane_t1_ParamLimits

0x6f65,	// (0x00050afb) title_pane_t2_ParamLimits

0x6f8b,	// (0x00050b21) title_pane_t3_ParamLimits

0xf557,	// (0x000590ed) title_pane_t_ParamLimits

0xa882,	// (0x00054418) level_1_signal_ParamLimits

0xa894,	// (0x0005442a) level_2_signal_ParamLimits

0xa8a7,	// (0x0005443d) level_3_signal_ParamLimits

0xa8ba,	// (0x00054450) level_4_signal_ParamLimits

0xa8cd,	// (0x00054463) level_5_signal_ParamLimits

0xa8e0,	// (0x00054476) level_6_signal_ParamLimits

0xa8f3,	// (0x00054489) level_7_signal_ParamLimits

0xa882,	// (0x00054418) level_1_battery_ParamLimits

0xa894,	// (0x0005442a) level_2_battery_ParamLimits

0xa8a7,	// (0x0005443d) level_3_battery_ParamLimits

0xa8ba,	// (0x00054450) level_4_battery_ParamLimits

0xa8cd,	// (0x00054463) level_5_battery_ParamLimits

0xa8e0,	// (0x00054476) level_6_battery_ParamLimits

0xa8f3,	// (0x00054489) level_7_battery_ParamLimits

0x2de8,	// (0x0004c97e) bg_status_flat_pane_g1

0x2df0,	// (0x0004c986) bg_status_flat_pane_g2

0x2df8,	// (0x0004c98e) bg_status_flat_pane_g3

0x2e00,	// (0x0004c996) bg_status_flat_pane_g4

0x2e08,	// (0x0004c99e) bg_status_flat_pane_g5

0x2e10,	// (0x0004c9a6) bg_status_flat_pane_g6

0x2e18,	// (0x0004c9ae) bg_status_flat_pane_g7

0x9eb4,	// (0x00053a4a) tabs_3_active_pane_t1_ParamLimits

0x9eb4,	// (0x00053a4a) tabs_3_passive_pane_t1_ParamLimits

0x9ece,	// (0x00053a64) tabs_4_active_pane_t1_ParamLimits

0x9ece,	// (0x00053a64) tabs_4_1_passive_pane_t1_ParamLimits

0xa41c,	// (0x00053fb2) tabs_2_active_pane_t1_ParamLimits

0xa41c,	// (0x00053fb2) tabs_2_passive_pane_t1_ParamLimits

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp4_ParamLimits

0xa42e,	// (0x00053fc4) tabs_2_long_active_pane_t1_ParamLimits

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp4_ParamLimits

0x066b,	// (0x0004a201) list_single_midp_graphic_pane_t1_ParamLimits

0x6f9d,	// (0x00050b33) bg_active_tab_pane_cp5_ParamLimits

0xa441,	// (0x00053fd7) tabs_3_long_active_pane_t1_ParamLimits

0x04b5,	// (0x0004a04b) bg_passive_tab_pane_cp5_ParamLimits

0x066b,	// (0x0004a201) list_single_midp_graphic_pane_t1

0xb9b2,	// (0x00055548) bg_status_flat_pane_ParamLimits

0x226e,	// (0x0004be04) indicator_pane_cp2_ParamLimits

0x226e,	// (0x0004be04) indicator_pane_cp2

0xbb48,	// (0x000556de) navi_pane_srt_ParamLimits

0xbb48,	// (0x000556de) navi_pane_srt

0x23d5,	// (0x0004bf6b) popup_clock_digital_analogue_window_cp1

0x6fe1,	// (0x00050b77) indicator_pane_t1

0xe7f5,	// (0x0005838b) copy_highlight_pane

0xe7f5,	// (0x0005838b) cursor_graphics_pane

0xe7f5,	// (0x0005838b) graphic_within_text_pane

0xe7f5,	// (0x0005838b) link_highlight_pane

0x3607,	// (0x0004d19d) popup_preview_text_window_t5_ParamLimits

0x3607,	// (0x0004d19d) popup_preview_text_window_t5

0xe862,	// (0x000583f8) cursor_digital_pane

0xe862,	// (0x000583f8) cursor_primary_pane

0xe873,	// (0x00058409) cursor_primary_small_pane

0xe87b,	// (0x00058411) cursor_secondary_pane

0xe883,	// (0x00058419) cursor_title_pane

0xe862,	// (0x000583f8) link_highlight_digital_pane

0xe86a,	// (0x00058400) link_highlight_primary_pane

0xe873,	// (0x00058409) link_highlight_primary_small_pane

0xe87b,	// (0x00058411) link_highlight_secondary_pane

0xe883,	// (0x00058419) link_highlight_title_pane

0xe862,	// (0x000583f8) copy_highlight_digital_pane

0xe862,	// (0x000583f8) copy_highlight_primary_pane

0xe873,	// (0x00058409) copy_highlight_primary_small_pane

0xe87b,	// (0x00058411) copy_highlight_secondary_pane

0xe883,	// (0x00058419) copy_highlight_title_pane

0xe87b,	// (0x00058411) graphic_text_digital_pane

0x2e86,	// (0x0004ca1c) graphic_text_primary_pane

0x2e8f,	// (0x0004ca25) graphic_text_primary_small_pane

0xe873,	// (0x00058409) graphic_text_secondary_pane

0xe862,	// (0x000583f8) graphic_text_title_pane

0xaf3e,	// (0x00054ad4) cursor_primary_pane_g1

0x2e78,	// (0x0004ca0e) cursor_text_primary_t1

0xc645,	// (0x000561db) cursor_primary_small_pane_g1

0x2e6a,	// (0x0004ca00) cursor_text_primary_small_t1

0xc63b,	// (0x000561d1) cursor_primary_small_pane_g1_copy1

0x2e52,	// (0x0004c9e8) cursor_text_primary_small_t1_copy1

0x2e30,	// (0x0004c9c6) cursor_text_title_t1

0xc631,	// (0x000561c7) cursor_title_pane_g1

0xaf3e,	// (0x00054ad4) cursor_digital_pane_g1

0xe88b,	// (0x00058421) cursor_text_digital_t1

0xe899,	// (0x0005842f) link_highlight_primary_pane_g1

0x2dd9,	// (0x0004c96f) link_highlight_primary_pane_t1

0xe899,	// (0x0005842f) link_highlight_primary_small_pane_g1

0xe8a1,	// (0x00058437) link_highlight_primary_small_pane_t1

0xe8b0,	// (0x00058446) link_highlight_secondary_pane_g1

0xe8b8,	// (0x0005844e) link_highlight_secondary_pane_t1

0x2d4d,	// (0x0004c8e3) link_highlight_title_pane_g1

0x2d55,	// (0x0004c8eb) link_highlight_title_pane_t1

0x2d36,	// (0x0004c8cc) link_highlight_digital_pane_g1

0x2d3e,	// (0x0004c8d4) link_highlight_digital_pane_t1

0x2bfe,	// (0x0004c794) copy_highlight_primary_pane_g1

0x2c15,	// (0x0004c7ab) copy_highlight_primary_pane_t1

0x2bfe,	// (0x0004c794) copy_highlight_primary_small_pane_g1

0x2c06,	// (0x0004c79c) copy_highlight_primary_small_pane_t1

0xe8c7,	// (0x0005845d) copy_highlight_secondary_pane_g1

0xe8cf,	// (0x00058465) copy_highlight_secondary_pane_t1

0x2be7,	// (0x0004c77d) copy_highlight_title_pane_g1

0x2bef,	// (0x0004c785) copy_highlight_title_pane_t1

0x2bfe,	// (0x0004c794) copy_highlight_digital_pane_g1

0x3f01,	// (0x0004da97) copy_highlight_digital_pane_t1

0x3e55,	// (0x0004d9eb) graphic_text_primary_pane_g1

0x3ee5,	// (0x0004da7b) graphic_text_primary_pane_t1

0x3ef3,	// (0x0004da89) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00059564) graphic_text_primary_pane_t

0x3ec1,	// (0x0004da57) graphic_text_primary_small_pane_g1

0x3ec9,	// (0x0004da5f) graphic_text_primary_small_pane_t1

0x3ed7,	// (0x0004da6d) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005955f) graphic_text_primary_small_pane_t

0x3e9d,	// (0x0004da33) graphic_text_secondary_pane_g1

0x3ea5,	// (0x0004da3b) graphic_text_secondary_pane_t1

0x3eb3,	// (0x0004da49) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005955a) graphic_text_secondary_pane_t

0x3e79,	// (0x0004da0f) graphic_text_title_pane_g1

0x3e81,	// (0x0004da17) graphic_text_title_pane_t1

0x3e8f,	// (0x0004da25) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00059555) graphic_text_title_pane_t

0x3e55,	// (0x0004d9eb) graphic_text_digital_pane_g1

0x3e5d,	// (0x0004d9f3) graphic_text_digital_pane_t1

0x3e6b,	// (0x0004da01) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00059550) graphic_text_digital_pane_t

0x6f9d,	// (0x00050b33) navi_icon_pane_srt_ParamLimits

0x6f9d,	// (0x00050b33) navi_icon_pane_srt

0x6f43,	// (0x00050ad9) navi_midp_pane_srt

0x6f43,	// (0x00050ad9) navi_navi_pane_srt

0x6f9d,	// (0x00050b33) navi_text_pane_srt_ParamLimits

0x6f9d,	// (0x00050b33) navi_text_pane_srt

0x3e20,	// (0x0004d9b6) navi_navi_icon_text_pane_srt

0x3e28,	// (0x0004d9be) navi_navi_pane_srt_g1_ParamLimits

0x3e28,	// (0x0004d9be) navi_navi_pane_srt_g1

0x3e3a,	// (0x0004d9d0) navi_navi_pane_srt_g2_ParamLimits

0x3e3a,	// (0x0004d9d0) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005954b) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005954b) navi_navi_pane_srt_g

0x3e4c,	// (0x0004d9e2) navi_navi_tabs_pane_srt

0x3e20,	// (0x0004d9b6) navi_navi_text_pane_srt

0x3e20,	// (0x0004d9b6) navi_navi_volume_pane_srt

0x3e11,	// (0x0004d9a7) navi_navi_text_pane_srt_t1

0x0a5f,	// (0x0004a5f5) navi_navi_volume_pane_srt_g1

0x0a67,	// (0x0004a5fd) volume_small_pane_srt_ParamLimits

0x0a67,	// (0x0004a5fd) volume_small_pane_srt

0x0170,	// (0x00049d06) volume_small_pane_srt_g1_ParamLimits

0x0170,	// (0x00049d06) volume_small_pane_srt_g1

0x0180,	// (0x00049d16) volume_small_pane_srt_g2_ParamLimits

0x0180,	// (0x00049d16) volume_small_pane_srt_g2

0x0191,	// (0x00049d27) volume_small_pane_srt_g3_ParamLimits

0x0191,	// (0x00049d27) volume_small_pane_srt_g3

0x01a2,	// (0x00049d38) volume_small_pane_srt_g4_ParamLimits

0x01a2,	// (0x00049d38) volume_small_pane_srt_g4

0x01b3,	// (0x00049d49) volume_small_pane_srt_g5_ParamLimits

0x01b3,	// (0x00049d49) volume_small_pane_srt_g5

0x01c4,	// (0x00049d5a) volume_small_pane_srt_g6_ParamLimits

0x01c4,	// (0x00049d5a) volume_small_pane_srt_g6

0x01d5,	// (0x00049d6b) volume_small_pane_srt_g7_ParamLimits

0x01d5,	// (0x00049d6b) volume_small_pane_srt_g7

0x01e6,	// (0x00049d7c) volume_small_pane_srt_g8_ParamLimits

0x01e6,	// (0x00049d7c) volume_small_pane_srt_g8

0x01f7,	// (0x00049d8d) volume_small_pane_srt_g9_ParamLimits

0x01f7,	// (0x00049d8d) volume_small_pane_srt_g9

0x0208,	// (0x00049d9e) volume_small_pane_srt_g10_ParamLimits

0x0208,	// (0x00049d9e) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000592f8) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000592f8) volume_small_pane_srt_g

0x723b,	// (0x00050dd1) query_popup_data_pane_cp2

0x3df7,	// (0x0004d98d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3df7,	// (0x0004d98d) navi_navi_icon_text_pane_srt_t1

0x2e86,	// (0x0004ca1c) navi_tabs_2_long_pane_srt

0x2e86,	// (0x0004ca1c) navi_tabs_2_pane_srt

0x2e86,	// (0x0004ca1c) navi_tabs_3_long_pane_srt

0x2e86,	// (0x0004ca1c) navi_tabs_3_pane_srt

0x2e86,	// (0x0004ca1c) navi_tabs_4_pane_srt

0x0a3f,	// (0x0004a5d5) tabs_2_active_pane_srt_ParamLimits

0x0a3f,	// (0x0004a5d5) tabs_2_active_pane_srt

0x0a4f,	// (0x0004a5e5) tabs_2_passive_pane_srt_ParamLimits

0x0a4f,	// (0x0004a5e5) tabs_2_passive_pane_srt

0x266a,	// (0x0004c200) bg_passive_tab_pane_cp1_srt_ParamLimits

0x266a,	// (0x0004c200) bg_passive_tab_pane_cp1_srt

0x3dc3,	// (0x0004d959) bg_passive_tab_pane_g1_cp1_srt

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp1_srt

0x3dcc,	// (0x0004d962) bg_passive_tab_pane_g3_cp1_srt

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp1_srt_ParamLimits

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp1_srt

0x3dd5,	// (0x0004d96b) tabs_2_active_pane_srt_g1

0xcb19,	// (0x000566af) tabs_2_active_pane_srt_t1_ParamLimits

0xcb19,	// (0x000566af) tabs_2_active_pane_srt_t1

0x3dc3,	// (0x0004d959) bg_active_tab_pane_g1_cp1_srt

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp1_srt

0x3dcc,	// (0x0004d962) bg_active_tab_pane_g3_cp1_srt

0x0a0c,	// (0x0004a5a2) tabs_3_active_pane_srt_ParamLimits

0x0a0c,	// (0x0004a5a2) tabs_3_active_pane_srt

0x0a1d,	// (0x0004a5b3) tabs_3_passive_pane_cp_srt_ParamLimits

0x0a1d,	// (0x0004a5b3) tabs_3_passive_pane_cp_srt

0x0a2e,	// (0x0004a5c4) tabs_3_passive_pane_srt_ParamLimits

0x0a2e,	// (0x0004a5c4) tabs_3_passive_pane_srt

0x266a,	// (0x0004c200) bg_passive_tab_pane_cp2_srt_ParamLimits

0x266a,	// (0x0004c200) bg_passive_tab_pane_cp2_srt

0xe8de,	// (0x00058474) bg_passive_tab_pane_g1_cp2_srt

0xabb7,	// (0x0005474d) bg_passive_tab_pane_g2_cp2_srt

0xe8e7,	// (0x0005847d) bg_passive_tab_pane_g3_cp2_srt

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp2_srt_ParamLimits

0x70d0,	// (0x00050c66) bg_active_tab_pane_cp2_srt

0x3da9,	// (0x0004d93f) tabs_3_active_pane_srt_g1

0xcb03,	// (0x00056699) tabs_3_active_pane_srt_t1_ParamLimits

0xcb03,	// (0x00056699) tabs_3_active_pane_srt_t1

0xe8de,	// (0x00058474) bg_active_tab_pane_g1_cp2_srt

0xabb7,	// (0x0005474d) bg_active_tab_pane_g2_cp2_srt

0xe8e7,	// (0x0005847d) bg_active_tab_pane_g3_cp2_srt

0x09c4,	// (0x0004a55a) tabs_4_active_pane_srt_ParamLimits

0x09c4,	// (0x0004a55a) tabs_4_active_pane_srt

0x09d6,	// (0x0004a56c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x09d6,	// (0x0004a56c) tabs_4_passive_pane_cp2_srt

0x0443,	// (0x00049fd9) aid_size_cell_toolbar

0x39bf,	// (0x0004d555) main_idle_act_pane_ParamLimits

0x1c7e,	// (0x0004b814) popup_large_graphic_colour_window_ParamLimits

0xb874,	// (0x0005540a) popup_toolbar_window_ParamLimits

0xb874,	// (0x0005540a) popup_toolbar_window

0x3b97,	// (0x0004d72d) list_single_graphic_2heading_pane_ParamLimits

0x3b97,	// (0x0004d72d) list_single_graphic_2heading_pane

0xa5f1,	// (0x00054187) aid_size_cell_apps_grid_lsc_pane

0xa603,	// (0x00054199) aid_size_cell_apps_grid_prt_pane

0x04b5,	// (0x0004a04b) bg_wml_button_pane_cp1_ParamLimits

0x04b5,	// (0x0004a04b) bg_wml_button_pane_cp1

0xc5e1,	// (0x00056177) form_midp_field_text_pane_t1_ParamLimits

0x266a,	// (0x0004c200) input_focus_pane_cp050_ParamLimits

0x28a9,	// (0x0004c43f) list_midp_form_text_pane_ParamLimits

0x285b,	// (0x0004c3f1) input_focus_pane_cp051_ParamLimits

0x286f,	// (0x0004c405) list_midp_choice_pane_ParamLimits

0xbd85,	// (0x0005591b) list_single_2graphic_pane_cp3_ParamLimits

0xbd85,	// (0x0005591b) list_single_2graphic_pane_cp3

0x4a5c,	// (0x0004e5f2) list_single_midp_graphic_pane_ParamLimits

0x4a5c,	// (0x0004e5f2) list_single_midp_graphic_pane

0xe970,	// (0x00058506) list_single_graphic_2heading_pane_g1_ParamLimits

0xe970,	// (0x00058506) list_single_graphic_2heading_pane_g1

0xe97c,	// (0x00058512) list_single_graphic_2heading_pane_g4_ParamLimits

0xe97c,	// (0x00058512) list_single_graphic_2heading_pane_g4

0xe988,	// (0x0005851e) list_single_graphic_2heading_pane_g5_ParamLimits

0xe988,	// (0x0005851e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005934b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005934b) list_single_graphic_2heading_pane_g

0xe994,	// (0x0005852a) list_single_graphic_2heading_pane_t1_ParamLimits

0xe994,	// (0x0005852a) list_single_graphic_2heading_pane_t1

0xe9a8,	// (0x0005853e) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9a8,	// (0x0005853e) list_single_graphic_2heading_pane_t2

0xe9c4,	// (0x0005855a) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9c4,	// (0x0005855a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00059352) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00059352) list_single_graphic_2heading_pane_t

0x2534,	// (0x0004c0ca) bg_popup_sub_pane_cp2

0x255e,	// (0x0004c0f4) grid_toobar_pane

0x05e3,	// (0x0004a179) cell_toolbar_pane_ParamLimits

0x05e3,	// (0x0004a179) cell_toolbar_pane

0x259a,	// (0x0004c130) cell_toolbar_pane_g1_ParamLimits

0x259a,	// (0x0004c130) cell_toolbar_pane_g1

0x25ae,	// (0x0004c144) cell_toolbar_pane_g2_ParamLimits

0x25ae,	// (0x0004c144) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00059360) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00059360) cell_toolbar_pane_g

0x25d0,	// (0x0004c166) grid_highlight_pane_cp2_ParamLimits

0x25d0,	// (0x0004c166) grid_highlight_pane_cp2

0x25ea,	// (0x0004c180) toolbar_button_pane

0x25f6,	// (0x0004c18c) toolbar_button_pane_g1

0x25fe,	// (0x0004c194) toolbar_button_pane_g2

0x2606,	// (0x0004c19c) toolbar_button_pane_g3

0x260e,	// (0x0004c1a4) toolbar_button_pane_g4

0x2616,	// (0x0004c1ac) toolbar_button_pane_g5

0x261e,	// (0x0004c1b4) toolbar_button_pane_g6

0x2626,	// (0x0004c1bc) toolbar_button_pane_g7

0x262e,	// (0x0004c1c4) toolbar_button_pane_g8

0x2636,	// (0x0004c1cc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00059365) toolbar_button_pane_g

0x0627,	// (0x0004a1bd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0627,	// (0x0004a1bd) list_single_2graphic_pane_g1_cp3

0xbce7,	// (0x0005587d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbce7,	// (0x0005587d) list_single_2graphic_pane_g2_cp3

0xad8a,	// (0x00054920) list_single_2graphic_pane_g3_cp3

0x0644,	// (0x0004a1da) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0644,	// (0x0004a1da) list_single_2graphic_pane_g4_cp3

0x0650,	// (0x0004a1e6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0650,	// (0x0004a1e6) list_single_2graphic_pane_t1_cp3

0xad7e,	// (0x00054914) list_single_midp_graphic_pane_g2_ParamLimits

0xad7e,	// (0x00054914) list_single_midp_graphic_pane_g2

0xe958,	// (0x000584ee) aid_zoom_text_primary

0xe960,	// (0x000584f6) aid_zoom_text_secondary

0xaf96,	// (0x00054b2c) status_small_pane_g7_ParamLimits

0xaf96,	// (0x00054b2c) status_small_pane_g7

0xafb9,	// (0x00054b4f) status_small_pane_t1_ParamLimits

0x9e08,	// (0x0005399e) title_pane_g2

0x0003,

0xf54e,	// (0x000590e4) title_pane_g

0xa094,	// (0x00053c2a) aid_size_cell_colour_1_pane_ParamLimits

0xa094,	// (0x00053c2a) aid_size_cell_colour_1_pane

0xa0a8,	// (0x00053c3e) aid_size_cell_colour_2_pane_ParamLimits

0xa0a8,	// (0x00053c3e) aid_size_cell_colour_2_pane

0xa0bc,	// (0x00053c52) aid_size_cell_colour_3_pane_ParamLimits

0xa0bc,	// (0x00053c52) aid_size_cell_colour_3_pane

0xa0d0,	// (0x00053c66) aid_size_cell_colour_4_pane_ParamLimits

0xa0d0,	// (0x00053c66) aid_size_cell_colour_4_pane

0xf1ac,	// (0x00058d42) title_pane_stacon_g1_ParamLimits

0xf1ac,	// (0x00058d42) title_pane_stacon_g1

0x2c6c,	// (0x0004c802) popup_note_wait_window_g3_ParamLimits

0x2c6c,	// (0x0004c802) popup_note_wait_window_g3

0x2ce3,	// (0x0004c879) popup_note_wait_window_t5_ParamLimits

0x2ce3,	// (0x0004c879) popup_note_wait_window_t5

0x6f43,	// (0x00050ad9) main_feb_china_hwr_fs_writing_pane

0xb20b,	// (0x00054da1) popup_feb_china_hwr_fs_window_ParamLimits

0xb20b,	// (0x00054da1) popup_feb_china_hwr_fs_window

0xbcf8,	// (0x0005588e) aid_size_cell_hwr_fs_ParamLimits

0xbcf8,	// (0x0005588e) aid_size_cell_hwr_fs

0x266a,	// (0x0004c200) bg_popup_sub_pane_cp3_ParamLimits

0x266a,	// (0x0004c200) bg_popup_sub_pane_cp3

0xbd0d,	// (0x000558a3) grid_hwr_fs_pane_ParamLimits

0xbd0d,	// (0x000558a3) grid_hwr_fs_pane

0x06c6,	// (0x0004a25c) linegrid_hwr_fs_pane_ParamLimits

0x06c6,	// (0x0004a25c) linegrid_hwr_fs_pane

0xbd25,	// (0x000558bb) cell_hwr_fs_pane_ParamLimits

0xbd25,	// (0x000558bb) cell_hwr_fs_pane

0x2676,	// (0x0004c20c) linegrid_hwr_fs_pane_g1_ParamLimits

0x2676,	// (0x0004c20c) linegrid_hwr_fs_pane_g1

0xbd4b,	// (0x000558e1) linegrid_hwr_fs_pane_g2_ParamLimits

0xbd4b,	// (0x000558e1) linegrid_hwr_fs_pane_g2

0x2694,	// (0x0004c22a) linegrid_hwr_fs_pane_g3_ParamLimits

0x2694,	// (0x0004c22a) linegrid_hwr_fs_pane_g3

0x06fa,	// (0x0004a290) linegrid_hwr_fs_pane_g4_ParamLimits

0x06fa,	// (0x0004a290) linegrid_hwr_fs_pane_g4

0x0718,	// (0x0004a2ae) linegrid_hwr_fs_pane_g5_ParamLimits

0x0718,	// (0x0004a2ae) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005938b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005938b) linegrid_hwr_fs_pane_g

0x26a0,	// (0x0004c236) cell_hwr_fs_pane_g1_ParamLimits

0x26a0,	// (0x0004c236) cell_hwr_fs_pane_g1

0x246b,	// (0x0004c001) cell_hwr_fs_pane_g2_ParamLimits

0x246b,	// (0x0004c001) cell_hwr_fs_pane_g2

0xbd5d,	// (0x000558f3) cell_hwr_fs_pane_g3_ParamLimits

0xbd5d,	// (0x000558f3) cell_hwr_fs_pane_g3

0xbd6a,	// (0x00055900) cell_hwr_fs_pane_g4_ParamLimits

0xbd6a,	// (0x00055900) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00059396) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00059396) cell_hwr_fs_pane_g

0xbd77,	// (0x0005590d) cell_hwr_fs_pane_t1

0x6f43,	// (0x00050ad9) grid_highlight_pane_cp6

0x6f43,	// (0x00050ad9) main_idle_act2_pane

0xa3c1,	// (0x00053f57) aid_inside_area_popup_secondary

0xc6ac,	// (0x00056242) aid_inside_area_window_primary_ParamLimits

0xc6ac,	// (0x00056242) aid_inside_area_window_primary

0x3f10,	// (0x0004daa6) ai2_news_ticker_pane

0x3f18,	// (0x0004daae) aid_size_cell_ai1_link_ParamLimits

0x3f18,	// (0x0004daae) aid_size_cell_ai1_link

0x3f32,	// (0x0004dac8) popup_ai2_data_window_ParamLimits

0x3f32,	// (0x0004dac8) popup_ai2_data_window

0x3f50,	// (0x0004dae6) popup_ai2_link_window_ParamLimits

0x3f50,	// (0x0004dae6) popup_ai2_link_window

0x266a,	// (0x0004c200) bg_popup_sub_pane_cp4_ParamLimits

0x266a,	// (0x0004c200) bg_popup_sub_pane_cp4

0x3f66,	// (0x0004dafc) grid_ai2_link_pane_ParamLimits

0x3f66,	// (0x0004dafc) grid_ai2_link_pane

0x3f7d,	// (0x0004db13) popup_ai2_link_window_g1_ParamLimits

0x3f7d,	// (0x0004db13) popup_ai2_link_window_g1

0x3f89,	// (0x0004db1f) popup_ai2_link_window_g2_ParamLimits

0x3f89,	// (0x0004db1f) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00059569) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00059569) popup_ai2_link_window_g

0x3f9a,	// (0x0004db30) ai2_mp_button_pane

0x3fa2,	// (0x0004db38) ai2_mp_volume_pane

0x285b,	// (0x0004c3f1) bg_popup_sub_pane_cp5_ParamLimits

0x285b,	// (0x0004c3f1) bg_popup_sub_pane_cp5

0x3faa,	// (0x0004db40) heading_ai2_gene_pane_ParamLimits

0x3faa,	// (0x0004db40) heading_ai2_gene_pane

0x3fb6,	// (0x0004db4c) list_ai2_gene_pane_ParamLimits

0x3fb6,	// (0x0004db4c) list_ai2_gene_pane

0x3ffe,	// (0x0004db94) cell_ai2_link_pane_ParamLimits

0x3ffe,	// (0x0004db94) cell_ai2_link_pane

0x4014,	// (0x0004dbaa) cell_ai2_link_pane_g1

0x6f43,	// (0x00050ad9) grid_highlight_pane_cp7

0x0a7c,	// (0x0004a612) ai2_mp_volume_pane_g1

0x40e7,	// (0x0004dc7d) ai2_mp_volume_pane_g2

0x405c,	// (0x0004dbf2) list_ai2_gene_pane_t1

0x40ef,	// (0x0004dc85) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00059582) ai2_mp_volume_pane_g

0x0a84,	// (0x0004a61a) volume_small_pane_cp3

0x40f7,	// (0x0004dc8d) aid_size_cell_ai2_button

0x40ff,	// (0x0004dc95) grid_ai2_button_pane

0x4108,	// (0x0004dc9e) cell_ai2_button_pane_ParamLimits

0x4108,	// (0x0004dc9e) cell_ai2_button_pane

0x6f39,	// (0x00050acf) cell_ai2_button_pane_g1

0x6f43,	// (0x00050ad9) grid_highlight_pane_cp8

0x40a7,	// (0x0004dc3d) ai2_gene_pane_t1_ParamLimits

0x40a7,	// (0x0004dc3d) ai2_gene_pane_t1

0xb177,	// (0x00054d0d) aid_height_parent_landscape

0xc8a1,	// (0x00056437) aid_height_set_list

0x39bf,	// (0x0004d555) aid_size_parent

0x3d31,	// (0x0004d8c7) aid_size_cell_graphic_pane_ParamLimits

0x3fc6,	// (0x0004db5c) popup_ai2_data_window_g1_ParamLimits

0x3fc6,	// (0x0004db5c) popup_ai2_data_window_g1

0x3fd2,	// (0x0004db68) ai2_news_ticker_pane_g1

0x3fda,	// (0x0004db70) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005956e) ai2_news_ticker_pane_g

0x3fe2,	// (0x0004db78) ai2_news_ticker_pane_t1

0x3ff0,	// (0x0004db86) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00059573) ai2_news_ticker_pane_t

0x401d,	// (0x0004dbb3) heading_ai2_gene_pane_g1

0x4025,	// (0x0004dbbb) heading_ai2_gene_pane_t1_ParamLimits

0x4025,	// (0x0004dbbb) heading_ai2_gene_pane_t1

0x403a,	// (0x0004dbd0) list_highlight_pane_cp6

0x4042,	// (0x0004dbd8) ai2_gene_pane_ParamLimits

0x4042,	// (0x0004dbd8) ai2_gene_pane

0x406a,	// (0x0004dc00) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00059578) list_ai2_gene_pane_t

0x4078,	// (0x0004dc0e) list_highlight_pane_cp8_ParamLimits

0x4078,	// (0x0004dc0e) list_highlight_pane_cp8

0x4089,	// (0x0004dc1f) ai2_gene_pane_g1_ParamLimits

0x4089,	// (0x0004dc1f) ai2_gene_pane_g1

0x409b,	// (0x0004dc31) ai2_gene_pane_g2_ParamLimits

0x409b,	// (0x0004dc31) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005957d) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005957d) ai2_gene_pane_g

0x7556,	// (0x000510ec) scroll_pane_cp12

0xb136,	// (0x00054ccc) control_pane_t3_ParamLimits

0xb136,	// (0x00054ccc) control_pane_t3

0xafaa,	// (0x00054b40) status_small_pane_g8_ParamLimits

0xafaa,	// (0x00054b40) status_small_pane_g8

0xb2ad,	// (0x00054e43) popup_find_window_ParamLimits

0xb55e,	// (0x000550f4) popup_note_image_window_ParamLimits

0xe9dc,	// (0x00058572) list_double2_graphic_pane_vc_g1_ParamLimits

0xe9dc,	// (0x00058572) list_double2_graphic_pane_vc_g1

0xe5f4,	// (0x0005818a) list_double2_graphic_pane_vc_g2_ParamLimits

0xe5f4,	// (0x0005818a) list_double2_graphic_pane_vc_g2

0x0613,	// (0x0004a1a9) list_double2_graphic_pane_vc_g3_ParamLimits

0x0613,	// (0x0004a1a9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059359) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059359) list_double2_graphic_pane_vc_g

0xe9e8,	// (0x0005857e) list_double2_graphic_pane_vc_t1_ParamLimits

0xe9e8,	// (0x0005857e) list_double2_graphic_pane_vc_t1

0xe5f4,	// (0x0005818a) list_single_heading_pane_vc_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_single_heading_pane_vc_g1

0x0613,	// (0x0004a1a9) list_single_heading_pane_vc_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059168) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059168) list_single_heading_pane_vc_g

0xe9fe,	// (0x00058594) list_single_heading_pane_vc_t1_ParamLimits

0xe9fe,	// (0x00058594) list_single_heading_pane_vc_t1

0xea16,	// (0x000585ac) list_single_heading_pane_vc_t2_ParamLimits

0xea16,	// (0x000585ac) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005937a) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005937a) list_single_heading_pane_vc_t

0x0681,	// (0x0004a217) list_setting_number_pane_vc_g1_ParamLimits

0x0681,	// (0x0004a217) list_setting_number_pane_vc_g1

0x068d,	// (0x0004a223) list_setting_number_pane_vc_g2_ParamLimits

0x068d,	// (0x0004a223) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005937f) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005937f) list_setting_number_pane_vc_g

0xea28,	// (0x000585be) list_setting_number_pane_vc_t1_ParamLimits

0xea28,	// (0x000585be) list_setting_number_pane_vc_t1

0xea3c,	// (0x000585d2) list_setting_number_pane_vc_t2_ParamLimits

0xea3c,	// (0x000585d2) list_setting_number_pane_vc_t2

0xea58,	// (0x000585ee) list_setting_number_pane_vc_t3_ParamLimits

0xea58,	// (0x000585ee) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00059384) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00059384) list_setting_number_pane_vc_t

0xea86,	// (0x0005861c) set_value_pane_vc_ParamLimits

0xea86,	// (0x0005861c) set_value_pane_vc

0x3b97,	// (0x0004d72d) list_double2_graphic_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double2_graphic_pane_vc

0x3b97,	// (0x0004d72d) list_double2_large_graphic_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double2_large_graphic_pane_vc

0x3b97,	// (0x0004d72d) list_double2_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double2_pane_vc

0x3b97,	// (0x0004d72d) list_double_graphic_heading_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double_graphic_heading_pane_vc

0x3b97,	// (0x0004d72d) list_double_graphic_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double_graphic_pane_vc

0x3b97,	// (0x0004d72d) list_double_heading_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double_heading_pane_vc

0x3bab,	// (0x0004d741) list_double_large_graphic_pane_vc_ParamLimits

0x3bab,	// (0x0004d741) list_double_large_graphic_pane_vc

0x3b97,	// (0x0004d72d) list_double_number_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double_number_pane_vc

0x3b97,	// (0x0004d72d) list_double_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double_pane_vc

0x3b97,	// (0x0004d72d) list_double_time_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_double_time_pane_vc

0x3b97,	// (0x0004d72d) list_setting_number_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_setting_number_pane_vc

0x3b97,	// (0x0004d72d) list_setting_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_setting_pane_vc

0x3b97,	// (0x0004d72d) list_single_graphic_heading_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_single_graphic_heading_pane_vc

0x3b97,	// (0x0004d72d) list_single_heading_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_single_heading_pane_vc

0x3b97,	// (0x0004d72d) list_single_number_heading_pane_vc_ParamLimits

0x3b97,	// (0x0004d72d) list_single_number_heading_pane_vc

0xe9dc,	// (0x00058572) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe9dc,	// (0x00058572) list_double_graphic_heading_pane_vc_g1

0x0a8d,	// (0x0004a623) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0a8d,	// (0x0004a623) list_double_graphic_heading_pane_vc_g2

0x0a99,	// (0x0004a62f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0a99,	// (0x0004a62f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x00059589) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x00059589) list_double_graphic_heading_pane_vc_g

0xeabd,	// (0x00058653) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeabd,	// (0x00058653) list_double_graphic_heading_pane_vc_t1

0xead3,	// (0x00058669) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xead3,	// (0x00058669) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x00059590) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x00059590) list_double_graphic_heading_pane_vc_t

0x0681,	// (0x0004a217) list_setting_pane_vc_g1_ParamLimits

0x0681,	// (0x0004a217) list_setting_pane_vc_g1

0x068d,	// (0x0004a223) list_setting_pane_vc_g2_ParamLimits

0x068d,	// (0x0004a223) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005937f) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005937f) list_setting_pane_vc_g

0xeaf1,	// (0x00058687) list_setting_pane_vc_t1_ParamLimits

0xeaf1,	// (0x00058687) list_setting_pane_vc_t1

0xeb0d,	// (0x000586a3) list_setting_pane_vc_t2_ParamLimits

0xeb0d,	// (0x000586a3) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x000595d3) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x000595d3) list_setting_pane_vc_t

0xea86,	// (0x0005861c) set_value_pane_cp_vc_ParamLimits

0xea86,	// (0x0005861c) set_value_pane_cp_vc

0xe5f4,	// (0x0005818a) list_single_number_heading_pane_vc_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_single_number_heading_pane_vc_g1

0x0613,	// (0x0004a1a9) list_single_number_heading_pane_vc_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059168) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059168) list_single_number_heading_pane_vc_g

0xe9fe,	// (0x00058594) list_single_number_heading_pane_vc_t1_ParamLimits

0xe9fe,	// (0x00058594) list_single_number_heading_pane_vc_t1

0xeb29,	// (0x000586bf) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb29,	// (0x000586bf) list_single_number_heading_pane_vc_t2

0xe616,	// (0x000581ac) list_single_number_heading_pane_vc_t3_ParamLimits

0xe616,	// (0x000581ac) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x000595d8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x000595d8) list_single_number_heading_pane_vc_t

0xe9dc,	// (0x00058572) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe9dc,	// (0x00058572) list_single_graphic_heading_pane_vc_g1

0xe5f4,	// (0x0005818a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe5f4,	// (0x0005818a) list_single_graphic_heading_pane_vc_g4

0x0613,	// (0x0004a1a9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0613,	// (0x0004a1a9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00059359) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059359) list_single_graphic_heading_pane_vc_g

0xe9fe,	// (0x00058594) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe9fe,	// (0x00058594) list_single_graphic_heading_pane_vc_t1

0xeb3b,	// (0x000586d1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb3b,	// (0x000586d1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x000595df) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x000595df) list_single_graphic_heading_pane_vc_t

0xe5f4,	// (0x0005818a) list_double2_pane_vc_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_double2_pane_vc_g1

0x0613,	// (0x0004a1a9) list_double2_pane_vc_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059168) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059168) list_double2_pane_vc_g

0xeaa7,	// (0x0005863d) list_double2_pane_vc_t1_ParamLimits

0xeaa7,	// (0x0005863d) list_double2_pane_vc_t1

0x0aa5,	// (0x0004a63b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0aa5,	// (0x0004a63b) list_double2_large_graphic_pane_vc_g1

0xe5f4,	// (0x0005818a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe5f4,	// (0x0005818a) list_double2_large_graphic_pane_vc_g2

0x0613,	// (0x0004a1a9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0613,	// (0x0004a1a9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00059180) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00059180) list_double2_large_graphic_pane_vc_g

0xe600,	// (0x00058196) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe600,	// (0x00058196) list_double2_large_graphic_pane_vc_t1

0x0ab1,	// (0x0004a647) list_double_time_pane_vc_g1_ParamLimits

0x0ab1,	// (0x0004a647) list_double_time_pane_vc_g1

0x0abd,	// (0x0004a653) list_double_time_pane_vc_g2_ParamLimits

0x0abd,	// (0x0004a653) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x000595e4) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x000595e4) list_double_time_pane_vc_g

0xeb4d,	// (0x000586e3) list_double_time_pane_vc_t1_ParamLimits

0xeb4d,	// (0x000586e3) list_double_time_pane_vc_t1

0xeb77,	// (0x0005870d) list_double_time_pane_vc_t2_ParamLimits

0xeb77,	// (0x0005870d) list_double_time_pane_vc_t2

0xebc0,	// (0x00058756) list_double_time_pane_vc_t3_ParamLimits

0xebc0,	// (0x00058756) list_double_time_pane_vc_t3

0xebd2,	// (0x00058768) list_double_time_pane_vc_t4_ParamLimits

0xebd2,	// (0x00058768) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x000595e9) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x000595e9) list_double_time_pane_vc_t

0xe5f4,	// (0x0005818a) list_double_pane_vc_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_double_pane_vc_g1

0x0613,	// (0x0004a1a9) list_double_pane_vc_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059168) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059168) list_double_pane_vc_g

0xebf7,	// (0x0005878d) list_double_pane_vc_t1_ParamLimits

0xebf7,	// (0x0005878d) list_double_pane_vc_t1

0xec0b,	// (0x000587a1) list_double_pane_vc_t2_ParamLimits

0xec0b,	// (0x000587a1) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x000595f2) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x000595f2) list_double_pane_vc_t

0xe5f4,	// (0x0005818a) list_double_number_pane_vc_g1_ParamLimits

0xe5f4,	// (0x0005818a) list_double_number_pane_vc_g1

0x0613,	// (0x0004a1a9) list_double_number_pane_vc_g2_ParamLimits

0x0613,	// (0x0004a1a9) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059168) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059168) list_double_number_pane_vc_g

0xec21,	// (0x000587b7) list_double_number_pane_vc_t1_ParamLimits

0xec21,	// (0x000587b7) list_double_number_pane_vc_t1

0xec35,	// (0x000587cb) list_double_number_pane_vc_t2_ParamLimits

0xec35,	// (0x000587cb) list_double_number_pane_vc_t2

0xec49,	// (0x000587df) list_double_number_pane_vc_t3_ParamLimits

0xec49,	// (0x000587df) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x000595f7) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x000595f7) list_double_number_pane_vc_t

0x0ac9,	// (0x0004a65f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ac9,	// (0x0004a65f) list_double_large_graphic_pane_vc_g1

0x0af1,	// (0x0004a687) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0af1,	// (0x0004a687) list_double_large_graphic_pane_vc_g2

0x0b05,	// (0x0004a69b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b05,	// (0x0004a69b) list_double_large_graphic_pane_vc_g3

0xec5f,	// (0x000587f5) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec5f,	// (0x000587f5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x000595fe) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x000595fe) list_double_large_graphic_pane_vc_g

0xec6f,	// (0x00058805) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec6f,	// (0x00058805) list_double_large_graphic_pane_vc_t1

0xec91,	// (0x00058827) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec91,	// (0x00058827) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00059607) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00059607) list_double_large_graphic_pane_vc_t

0x0a8d,	// (0x0004a623) list_double_heading_pane_vc_g1_ParamLimits

0x0a8d,	// (0x0004a623) list_double_heading_pane_vc_g1

0x0a99,	// (0x0004a62f) list_double_heading_pane_vc_g2_ParamLimits

0x0a99,	// (0x0004a62f) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0005960c) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0005960c) list_double_heading_pane_vc_g

0xecb1,	// (0x00058847) list_double_heading_pane_vc_t1_ParamLimits

0xecb1,	// (0x00058847) list_double_heading_pane_vc_t1

0xe9fe,	// (0x00058594) list_double_heading_pane_vc_t2_ParamLimits

0xe9fe,	// (0x00058594) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00059611) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00059611) list_double_heading_pane_vc_t

0xecc3,	// (0x00058859) list_double_graphic_pane_vc_g1_ParamLimits

0xecc3,	// (0x00058859) list_double_graphic_pane_vc_g1

0x0b14,	// (0x0004a6aa) list_double_graphic_pane_vc_g2_ParamLimits

0x0b14,	// (0x0004a6aa) list_double_graphic_pane_vc_g2

0xe5f4,	// (0x0005818a) list_double_graphic_pane_vc_g3_ParamLimits

0xe5f4,	// (0x0005818a) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00059616) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00059616) list_double_graphic_pane_vc_g

0xeccf,	// (0x00058865) list_double_graphic_pane_vc_t1_ParamLimits

0xeccf,	// (0x00058865) list_double_graphic_pane_vc_t1

0xecf9,	// (0x0005888f) list_double_graphic_pane_vc_t2_ParamLimits

0xecf9,	// (0x0005888f) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0005961f) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0005961f) list_double_graphic_pane_vc_t

0xeef8,	// (0x00058a8e) aid_size_cell_fastswap

0x9be1,	// (0x00053777) aid_size_cell_touch_ParamLimits

0x9be1,	// (0x00053777) aid_size_cell_touch

0xf075,	// (0x00058c0b) popup_fast_swap_wide_window_ParamLimits

0xf075,	// (0x00058c0b) popup_fast_swap_wide_window

0x9d9f,	// (0x00053935) touch_pane_ParamLimits

0x9d9f,	// (0x00053935) touch_pane

0xa250,	// (0x00053de6) button_value_adjust_pane_cp2

0xe642,	// (0x000581d8) button_value_adjust_pane_cp4

0xe64a,	// (0x000581e0) form_field_data_pane_cp2

0x9868,	// (0x000533fe) form_field_data_wide_pane_cp2

0xa702,	// (0x00054298) bg_scroll_pane_ParamLimits

0xf308,	// (0x00058e9e) scroll_handle_pane_ParamLimits

0xf31c,	// (0x00058eb2) scroll_sc2_down_pane_ParamLimits

0xf31c,	// (0x00058eb2) scroll_sc2_down_pane

0xa733,	// (0x000542c9) scroll_sc2_up_pane_ParamLimits

0xa733,	// (0x000542c9) scroll_sc2_up_pane

0xcc70,	// (0x00056806) grid_wheel_folder_pane_g1_ParamLimits

0xcc70,	// (0x00056806) grid_wheel_folder_pane_g1

0xf4e6,	// (0x0005907c) clock_nsta_pane_cp2_ParamLimits

0xf4e6,	// (0x0005907c) clock_nsta_pane_cp2

0x04b5,	// (0x0004a04b) listscroll_midp_pane_ParamLimits

0xae95,	// (0x00054a2b) midp_canvas_pane

0x0431,	// (0x00049fc7) nsta_clock_indic_pane

0x047f,	// (0x0004a015) listscroll_form_pane_vc

0x04a3,	// (0x0004a039) listscroll_set_pane_vc_ParamLimits

0x04a3,	// (0x0004a039) listscroll_set_pane_vc

0xb9da,	// (0x00055570) clock_nsta_pane

0xba04,	// (0x0005559a) indicator_nsta_pane

0x2534,	// (0x0004c0ca) bg_popup_sub_pane_cp2_ParamLimits

0x2548,	// (0x0004c0de) find_pane_cp2_ParamLimits

0x2548,	// (0x0004c0de) find_pane_cp2

0x255e,	// (0x0004c0f4) grid_toobar_pane_ParamLimits

0x263e,	// (0x0004c1d4) list_form_gen_pane_vc_ParamLimits

0x263e,	// (0x0004c1d4) list_form_gen_pane_vc

0x2654,	// (0x0004c1ea) scroll_pane_cp8_vc_ParamLimits

0x2654,	// (0x0004c1ea) scroll_pane_cp8_vc

0x26d0,	// (0x0004c266) data_form_wide_pane_vc_ParamLimits

0x26d0,	// (0x0004c266) data_form_wide_pane_vc

0x26dc,	// (0x0004c272) form_field_data_wide_pane_vc_g1

0x26e4,	// (0x0004c27a) form_field_data_wide_pane_vc_t1_ParamLimits

0x26e4,	// (0x0004c27a) form_field_data_wide_pane_vc_t1

0xa264,	// (0x00053dfa) input_focus_pane_cp6_vc_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_cp6_vc

0xc609,	// (0x0005619f) list_midp_pane_ParamLimits

0x3d9d,	// (0x0004d933) scroll_pane_cp16_ParamLimits

0x3d9d,	// (0x0004d933) scroll_pane_cp16

0x2a40,	// (0x0004c5d6) button_value_adjust_pane_ParamLimits

0x2a40,	// (0x0004c5d6) button_value_adjust_pane

0xc8b2,	// (0x00056448) button_value_adjust_pane_cp6_ParamLimits

0xc8b2,	// (0x00056448) button_value_adjust_pane_cp6

0xc9f4,	// (0x0005658a) settings_code_pane_cp_ParamLimits

0xc9f4,	// (0x0005658a) settings_code_pane_cp

0x6f39,	// (0x00050acf) cell_touch_pane_g1

0x6f39,	// (0x00050acf) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005929e) cell_touch_pane_g

0xcb2f,	// (0x000566c5) cell_touch_pane_cp_ParamLimits

0xcb2f,	// (0x000566c5) cell_touch_pane_cp

0xcb4b,	// (0x000566e1) cell_touch_pane_ParamLimits

0xcb4b,	// (0x000566e1) cell_touch_pane

0x6f39,	// (0x00050acf) scroll_sc2_down_pane_g1

0x6f39,	// (0x00050acf) scroll_sc2_up_pane_g1

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp4_vc

0x413b,	// (0x0004dcd1) list_set_graphic_pane_vc_g1_ParamLimits

0x413b,	// (0x0004dcd1) list_set_graphic_pane_vc_g1

0xcb69,	// (0x000566ff) list_set_graphic_pane_vc_g2_ParamLimits

0xcb69,	// (0x000566ff) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x00059595) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x00059595) list_set_graphic_pane_vc_g

0x4147,	// (0x0004dcdd) text_primary_small_cp13_vc_ParamLimits

0x4147,	// (0x0004dcdd) text_primary_small_cp13_vc

0x415f,	// (0x0004dcf5) list_set_graphic_pane_vc_ParamLimits

0x415f,	// (0x0004dcf5) list_set_graphic_pane_vc

0x6f43,	// (0x00050ad9) input_focus_pane_cp2_vc

0x6f39,	// (0x00050acf) setting_code_pane_vc_g1

0x6fb4,	// (0x00050b4a) setting_code_pane_vc_t1

0x4174,	// (0x0004dd0a) set_text_pane_vc_t1_ParamLimits

0x4174,	// (0x0004dd0a) set_text_pane_vc_t1

0x6f43,	// (0x00050ad9) input_focus_pane_cp1_vc

0x4192,	// (0x0004dd28) list_set_text_pane_vc

0x6f39,	// (0x00050acf) setting_text_pane_vc_g1

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp2_vc

0x6fab,	// (0x00050b41) setting_slider_graphic_pane_vc_g1

0x419c,	// (0x0004dd32) setting_slider_graphic_pane_vc_t1

0x41ae,	// (0x0004dd44) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0005959a) setting_slider_graphic_pane_vc_t

0x41c0,	// (0x0004dd56) slider_set_pane_cp_vc

0x41ca,	// (0x0004dd60) slider_set_pane_vc_g1

0x41d3,	// (0x0004dd69) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0005959f) slider_set_pane_vc_g

0xa2bf,	// (0x00053e55) set_opt_bg_pane_g1_copy1

0xa2c7,	// (0x00053e5d) set_opt_bg_pane_g2_copy1

0x41ff,	// (0x0004dd95) set_opt_bg_pane_g3_copy1

0xa2d7,	// (0x00053e6d) set_opt_bg_pane_g4_copy1

0xa2df,	// (0x00053e75) set_opt_bg_pane_g5_copy1

0xa2e7,	// (0x00053e7d) set_opt_bg_pane_g6_copy1

0x4209,	// (0x0004dd9f) set_opt_bg_pane_g7_copy1

0x4213,	// (0x0004dda9) set_opt_bg_pane_g8_copy1

0x421d,	// (0x0004ddb3) set_opt_bg_pane_g9_copy1

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp_vc

0x4227,	// (0x0004ddbd) setting_slider_pane_vc_t1

0x4236,	// (0x0004ddcc) setting_slider_pane_vc_t2

0x4248,	// (0x0004ddde) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x000595ae) setting_slider_pane_vc_t

0x425a,	// (0x0004ddf0) slider_set_pane_vc

0x073c,	// (0x0004a2d2) volume_set_pane_vc_g1

0x0745,	// (0x0004a2db) volume_set_pane_vc_g2

0x074e,	// (0x0004a2e4) volume_set_pane_vc_g3

0x0757,	// (0x0004a2ed) volume_set_pane_vc_g4

0x0760,	// (0x0004a2f6) volume_set_pane_vc_g5

0x0769,	// (0x0004a2ff) volume_set_pane_vc_g6

0x0772,	// (0x0004a308) volume_set_pane_vc_g7

0x077b,	// (0x0004a311) volume_set_pane_vc_g8

0x0784,	// (0x0004a31a) volume_set_pane_vc_g9

0x078d,	// (0x0004a323) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x000595b5) volume_set_pane_vc_g

0x4264,	// (0x0004ddfa) volume_set_pane_vc

0x426e,	// (0x0004de04) button_value_adjust_pane_cp1_vc

0x4278,	// (0x0004de0e) list_highlight_pane_cp2_vc

0x4281,	// (0x0004de17) list_set_pane_vc_ParamLimits

0x4281,	// (0x0004de17) list_set_pane_vc

0x42f1,	// (0x0004de87) main_pane_set_vc_t1_ParamLimits

0x42f1,	// (0x0004de87) main_pane_set_vc_t1

0x4306,	// (0x0004de9c) main_pane_set_vc_t2_ParamLimits

0x4306,	// (0x0004de9c) main_pane_set_vc_t2

0x4318,	// (0x0004deae) main_pane_set_vc_t3_ParamLimits

0x4318,	// (0x0004deae) main_pane_set_vc_t3

0x432c,	// (0x0004dec2) main_pane_set_vc_t4_ParamLimits

0x432c,	// (0x0004dec2) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x000595ca) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x000595ca) main_pane_set_vc_t

0x4340,	// (0x0004ded6) setting_code_pane_vc_ParamLimits

0x4340,	// (0x0004ded6) setting_code_pane_vc

0x4351,	// (0x0004dee7) setting_slider_graphic_pane_vc

0x4351,	// (0x0004dee7) setting_slider_pane_vc

0x4351,	// (0x0004dee7) setting_text_pane_vc

0x4351,	// (0x0004dee7) setting_volume_pane_vc

0x435b,	// (0x0004def1) scroll_pane_cp121_vc

0xa23e,	// (0x00053dd4) set_content_pane_vc

0x4363,	// (0x0004def9) button_value_adjust_pane_g1

0x436c,	// (0x0004df02) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00059624) button_value_adjust_pane_g

0x4375,	// (0x0004df0b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4375,	// (0x0004df0b) form_field_slider_wide_pane_vc_t1

0x4387,	// (0x0004df1d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4387,	// (0x0004df1d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x00059629) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00059629) form_field_slider_wide_pane_vc_t

0x70d0,	// (0x00050c66) input_focus_pane_cp10_vc_ParamLimits

0x70d0,	// (0x00050c66) input_focus_pane_cp10_vc

0x43b3,	// (0x0004df49) slider_cont_pane_cp1_vc_ParamLimits

0x43b3,	// (0x0004df49) slider_cont_pane_cp1_vc

0x43c5,	// (0x0004df5b) slider_form_pane_g1_cp2

0x41d3,	// (0x0004dd69) slider_form_pane_g2_cp2

0x43f2,	// (0x0004df88) form_field_slider_pane_vc_t3

0x4400,	// (0x0004df96) form_field_slider_pane_vc_t4

0x440e,	// (0x0004dfa4) slider_form_pane_vc_ParamLimits

0x440e,	// (0x0004dfa4) slider_form_pane_vc

0x441b,	// (0x0004dfb1) form_field_slider_pane_vc_t1_ParamLimits

0x441b,	// (0x0004dfb1) form_field_slider_pane_vc_t1

0x4387,	// (0x0004df1d) form_field_slider_pane_vc_t2_ParamLimits

0x4387,	// (0x0004df1d) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x0005963b) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x0005963b) form_field_slider_pane_vc_t

0x70d0,	// (0x00050c66) input_focus_pane_cp9_vc_ParamLimits

0x70d0,	// (0x00050c66) input_focus_pane_cp9_vc

0x4431,	// (0x0004dfc7) slider_cont_pane_vc_ParamLimits

0x4431,	// (0x0004dfc7) slider_cont_pane_vc

0x4445,	// (0x0004dfdb) list_form_graphic_pane_cp_vc_ParamLimits

0x4445,	// (0x0004dfdb) list_form_graphic_pane_cp_vc

0x26dc,	// (0x0004c272) form_field_popup_wide_pane_vc_g1

0x445a,	// (0x0004dff0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x445a,	// (0x0004dff0) form_field_popup_wide_pane_vc_t1

0xa264,	// (0x00053dfa) input_focus_pane_cp8_vc_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_cp8_vc

0x449f,	// (0x0004e035) list_form_wide_pane_vc_ParamLimits

0x449f,	// (0x0004e035) list_form_wide_pane_vc

0x44ab,	// (0x0004e041) list_form_graphic_pane_vc_g1

0x44b3,	// (0x0004e049) list_form_graphic_pane_vc_t1_ParamLimits

0x44b3,	// (0x0004e049) list_form_graphic_pane_vc_t1

0x6f9d,	// (0x00050b33) list_highlight_pane_cp5_vc_ParamLimits

0x6f9d,	// (0x00050b33) list_highlight_pane_cp5_vc

0x44cf,	// (0x0004e065) list_form_graphic_pane_vc_ParamLimits

0x44cf,	// (0x0004e065) list_form_graphic_pane_vc

0x26dc,	// (0x0004c272) form_field_popup_pane_vc_g1

0x44e5,	// (0x0004e07b) form_field_popup_pane_vc_t1_ParamLimits

0x44e5,	// (0x0004e07b) form_field_popup_pane_vc_t1

0xa264,	// (0x00053dfa) input_focus_pane_cp7_vc_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_cp7_vc

0x44fc,	// (0x0004e092) list_form_pane_vc_ParamLimits

0x44fc,	// (0x0004e092) list_form_pane_vc

0x4508,	// (0x0004e09e) data_form_pane_vc_t1_ParamLimits

0x4508,	// (0x0004e09e) data_form_pane_vc_t1

0xa2bf,	// (0x00053e55) input_focus_pane_vc_g1

0xa2c7,	// (0x00053e5d) input_focus_pane_vc_g2

0xa2cf,	// (0x00053e65) input_focus_pane_vc_g3

0xa2d7,	// (0x00053e6d) input_focus_pane_vc_g4

0xa2df,	// (0x00053e75) input_focus_pane_vc_g5

0xa2e7,	// (0x00053e7d) input_focus_pane_vc_g6

0xa2ef,	// (0x00053e85) input_focus_pane_vc_g7

0xa2f7,	// (0x00053e8d) input_focus_pane_vc_g8

0xa2ff,	// (0x00053e95) input_focus_pane_vc_g9

0x6f39,	// (0x00050acf) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00059227) input_focus_pane_vc_g

0x26d0,	// (0x0004c266) data_form_pane_vc_ParamLimits

0x26d0,	// (0x0004c266) data_form_pane_vc

0x26dc,	// (0x0004c272) form_field_data_pane_vc_g1

0x4525,	// (0x0004e0bb) form_field_data_pane_vc_t1_ParamLimits

0x4525,	// (0x0004e0bb) form_field_data_pane_vc_t1

0xa264,	// (0x00053dfa) input_focus_pane_vc_ParamLimits

0xa264,	// (0x00053dfa) input_focus_pane_vc

0x453f,	// (0x0004e0d5) button_value_adjust_pane_cp3_vc

0x4547,	// (0x0004e0dd) button_value_adjust_pane_cp5_vc

0x454f,	// (0x0004e0e5) form_field_data_pane_vc_ParamLimits

0x454f,	// (0x0004e0e5) form_field_data_pane_vc

0x456a,	// (0x0004e100) form_field_data_pane_vc_cp2

0x4572,	// (0x0004e108) form_field_data_wide_pane_vc_ParamLimits

0x4572,	// (0x0004e108) form_field_data_wide_pane_vc

0x458c,	// (0x0004e122) form_field_data_wide_pane_vc_cp2

0x4594,	// (0x0004e12a) form_field_popup_pane_vc_ParamLimits

0x4594,	// (0x0004e12a) form_field_popup_pane_vc

0x45af,	// (0x0004e145) form_field_popup_wide_pane_vc_ParamLimits

0x45af,	// (0x0004e145) form_field_popup_wide_pane_vc

0x45c9,	// (0x0004e15f) form_field_slider_pane_vc_ParamLimits

0x45c9,	// (0x0004e15f) form_field_slider_pane_vc

0x45dc,	// (0x0004e172) form_field_slider_wide_pane_vc_ParamLimits

0x45dc,	// (0x0004e172) form_field_slider_wide_pane_vc

0xcb75,	// (0x0005670b) grid_touch_1_pane_ParamLimits

0xcb75,	// (0x0005670b) grid_touch_1_pane

0xcb89,	// (0x0005671f) grid_touch_2_pane_ParamLimits

0xcb89,	// (0x0005671f) grid_touch_2_pane

0x46ad,	// (0x0004e243) touch_pane_g1_ParamLimits

0x46ad,	// (0x0004e243) touch_pane_g1

0x4615,	// (0x0004e1ab) cell_app_pane_cp_wide_ParamLimits

0x4615,	// (0x0004e1ab) cell_app_pane_cp_wide

0x4626,	// (0x0004e1bc) grid_popup_fast_wide_pane_ParamLimits

0x4626,	// (0x0004e1bc) grid_popup_fast_wide_pane

0x463a,	// (0x0004e1d0) scroll_pane_cp19_ParamLimits

0x463a,	// (0x0004e1d0) scroll_pane_cp19

0x6f43,	// (0x00050ad9) bg_popup_window_pane_cp20

0x464e,	// (0x0004e1e4) listscroll_popup_fast_wide_pane

0xcbb5,	// (0x0005674b) grid_indicator_nsta_pane

0x4656,	// (0x0004e1ec) clock_nsta_pane_g1

0x465f,	// (0x0004e1f5) clock_nsta_pane_t1

0xcbc3,	// (0x00056759) cell_indicator_nsta_pane_ParamLimits

0xcbc3,	// (0x00056759) cell_indicator_nsta_pane

0x46ad,	// (0x0004e243) cell_indicator_nsta_pane_g1

0xcbdc,	// (0x00056772) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x0005964c) cell_indicator_nsta_pane_g

0x46d1,	// (0x0004e267) clock_nsta_pane_cp

0x46d9,	// (0x0004e26f) indicator_nsta_pane_cp

0x46e2,	// (0x0004e278) nsta_clock_indic_pane_g1

0x6fd9,	// (0x00050b6f) grid_indicator_pane

0xa825,	// (0x000543bb) scroll_pane_cp29

0xf432,	// (0x00058fc8) indicator_nsta_pane_cp2_ParamLimits

0xf432,	// (0x00058fc8) indicator_nsta_pane_cp2

0x6f9d,	// (0x00050b33) main_apps_wheel_pane

0x28c3,	// (0x0004c459) form_midp_field_text_pane_ParamLimits

0x2a12,	// (0x0004c5a8) scroll_bar_cp050_ParamLimits

0x474b,	// (0x0004e2e1) cell_indicator_pane_ParamLimits

0x474b,	// (0x0004e2e1) cell_indicator_pane

0x4763,	// (0x0004e2f9) cell_indicator_pane_g1

0xcbf2,	// (0x00056788) grid_wheel_folder_pane_ParamLimits

0xcbf2,	// (0x00056788) grid_wheel_folder_pane

0xcc00,	// (0x00056796) list_wheel_apps_pane_ParamLimits

0xcc00,	// (0x00056796) list_wheel_apps_pane

0xcc0e,	// (0x000567a4) main_apps_wheel_pane_g1_ParamLimits

0xcc0e,	// (0x000567a4) main_apps_wheel_pane_g1

0xcc1e,	// (0x000567b4) main_apps_wheel_pane_g2_ParamLimits

0xcc1e,	// (0x000567b4) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x00059668) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x00059668) main_apps_wheel_pane_g

0xcc2e,	// (0x000567c4) main_apps_wheel_pane_t1_ParamLimits

0xcc2e,	// (0x000567c4) main_apps_wheel_pane_t1

0xcc46,	// (0x000567dc) list_wheel_apps_pane_g1

0xcc4e,	// (0x000567e4) list_wheel_apps_pane_g2

0xcc56,	// (0x000567ec) list_wheel_apps_pane_g3

0xcc5e,	// (0x000567f4) list_wheel_apps_pane_g4

0xcc66,	// (0x000567fc) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x0005966d) list_wheel_apps_pane_g

0xaddc,	// (0x00054972) navi_icon_text_pane

0xb8cc,	// (0x00055462) aid_fill_nsta

0xcc83,	// (0x00056819) navi_icon_text_pane_g1

0xcc8f,	// (0x00056825) navi_icon_text_pane_t1

0xac67,	// (0x000547fd) list_set_graphic_pane_t1_ParamLimits

0xac67,	// (0x000547fd) list_set_graphic_pane_t1

0x3163,	// (0x0004ccf9) popup_midp_note_alarm_window_t6_ParamLimits

0x3163,	// (0x0004ccf9) popup_midp_note_alarm_window_t6

0x3175,	// (0x0004cd0b) popup_midp_note_alarm_window_t7_ParamLimits

0x3175,	// (0x0004cd0b) popup_midp_note_alarm_window_t7

0x3187,	// (0x0004cd1d) popup_midp_note_alarm_window_t8_ParamLimits

0x3187,	// (0x0004cd1d) popup_midp_note_alarm_window_t8

0x3199,	// (0x0004cd2f) popup_midp_note_alarm_window_t9_ParamLimits

0x3199,	// (0x0004cd2f) popup_midp_note_alarm_window_t9

0x31ab,	// (0x0004cd41) popup_midp_note_alarm_window_t10_ParamLimits

0x31ab,	// (0x0004cd41) popup_midp_note_alarm_window_t10

0x31bd,	// (0x0004cd53) popup_midp_note_alarm_window_t11_ParamLimits

0x31bd,	// (0x0004cd53) popup_midp_note_alarm_window_t11

0x31cf,	// (0x0004cd65) scroll_pane_cp17_ParamLimits

0x31cf,	// (0x0004cd65) scroll_pane_cp17

0x073c,	// (0x0004a2d2) volume_small_pane_cp_g1

0x0b31,	// (0x0004a6c7) volume_small_pane_cp_g2

0x0b3a,	// (0x0004a6d0) volume_small_pane_cp_g3

0x0b43,	// (0x0004a6d9) volume_small_pane_cp_g4

0x0b4c,	// (0x0004a6e2) volume_small_pane_cp_g5

0x0b55,	// (0x0004a6eb) volume_small_pane_cp_g6

0x0b5e,	// (0x0004a6f4) volume_small_pane_cp_g7

0x0b67,	// (0x0004a6fd) volume_small_pane_cp_g8

0x0b70,	// (0x0004a706) volume_small_pane_cp_g9

0x0b79,	// (0x0004a70f) volume_small_pane_cp_g10

0xe821,	// (0x000583b7) midp_ticker_pane_g1_ParamLimits

0xe82d,	// (0x000583c3) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000592f3) midp_ticker_pane_g_ParamLimits

0xaf2c,	// (0x00054ac2) midp_ticker_pane_t1_ParamLimits

0xb8f0,	// (0x00055486) aid_fill_nsta_2

0x29fe,	// (0x0004c594) list_form2_midp_pane

0x3b66,	// (0x0004d6fc) midp_editing_number_pane_ParamLimits

0x3b75,	// (0x0004d70b) midp_ticker_pane_ParamLimits

0x4856,	// (0x0004e3ec) form2_midp_field_pane

0x487a,	// (0x0004e410) scroll_pane_cp51

0x489a,	// (0x0004e430) form2_midp_button_pane_ParamLimits

0x489a,	// (0x0004e430) form2_midp_button_pane

0x48ac,	// (0x0004e442) form2_midp_content_pane_ParamLimits

0x48ac,	// (0x0004e442) form2_midp_content_pane

0x48c6,	// (0x0004e45c) form2_midp_field_choice_group_pane

0x48ce,	// (0x0004e464) form2_midp_field_pane_g1

0x48d6,	// (0x0004e46c) form2_midp_field_pane_g2

0x48de,	// (0x0004e474) form2_midp_field_pane_g3

0x48e6,	// (0x0004e47c) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x00059692) form2_midp_field_pane_g

0x48ee,	// (0x0004e484) form2_midp_gauge_slider_pane

0x48f6,	// (0x0004e48c) form2_midp_gauge_wait_pane

0x48fe,	// (0x0004e494) form2_midp_image_pane_ParamLimits

0x48fe,	// (0x0004e494) form2_midp_image_pane

0x4919,	// (0x0004e4af) form2_midp_label_pane_ParamLimits

0x4919,	// (0x0004e4af) form2_midp_label_pane

0xccbd,	// (0x00056853) form2_midp_label_pane_cp_ParamLimits

0xccbd,	// (0x00056853) form2_midp_label_pane_cp

0x4959,	// (0x0004e4ef) form2_midp_string_pane_ParamLimits

0x4959,	// (0x0004e4ef) form2_midp_string_pane

0xed17,	// (0x000588ad) form2_midp_text_pane_ParamLimits

0xed17,	// (0x000588ad) form2_midp_text_pane

0x496b,	// (0x0004e501) form2_midp_time_pane

0x497b,	// (0x0004e511) input_focus_pane_cp51_ParamLimits

0x497b,	// (0x0004e511) input_focus_pane_cp51

0x4993,	// (0x0004e529) form2_midp_label_pane_t1_ParamLimits

0x4993,	// (0x0004e529) form2_midp_label_pane_t1

0xed3a,	// (0x000588d0) form2_mdip_text_pane_t1_ParamLimits

0xed3a,	// (0x000588d0) form2_mdip_text_pane_t1

0xed59,	// (0x000588ef) form2_midp_time_pane_t1

0x49e1,	// (0x0004e577) form2_midp_gauge_slider_pane_t1

0xccde,	// (0x00056874) form2_midp_gauge_slider_pane_t2

0xccf0,	// (0x00056886) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x0005969b) form2_midp_gauge_slider_pane_t

0x4a17,	// (0x0004e5ad) form2_midp_slider_pane

0x4a23,	// (0x0004e5b9) form2_midp_gauge_wait_pane_t1

0x4a31,	// (0x0004e5c7) form2_midp_wait_pane_ParamLimits

0x4a31,	// (0x0004e5c7) form2_midp_wait_pane

0x2723,	// (0x0004c2b9) list_single_2graphic_pane_cp4_ParamLimits

0x2723,	// (0x0004c2b9) list_single_2graphic_pane_cp4

0x4a5c,	// (0x0004e5f2) list_single_midp_graphic_pane_cp_ParamLimits

0x4a5c,	// (0x0004e5f2) list_single_midp_graphic_pane_cp

0x6f43,	// (0x00050ad9) list_highlight_pane_cp20

0x4a80,	// (0x0004e616) list_single_2graphic_pane_g1_cp4

0x401d,	// (0x0004dbb3) list_single_2graphic_pane_g2_cp4

0x4a88,	// (0x0004e61e) list_single_2graphic_pane_t1_cp4

0x6f9d,	// (0x00050b33) list_highlight_pane_cp21

0x4a97,	// (0x0004e62d) list_single_midp_graphic_pane_g4_cp

0x4aa6,	// (0x0004e63c) list_single_midp_graphic_pane_t1_cp

0xcd02,	// (0x00056898) form2_mdip_string_pane_t1_ParamLimits

0xcd02,	// (0x00056898) form2_mdip_string_pane_t1

0x6f43,	// (0x00050ad9) bg_wml_button_pane_cp2

0x6f39,	// (0x00050acf) form2_midp_image_pane_g1

0xf136,	// (0x00058ccc) list_double_large_graphic_pane_g5_ParamLimits

0xf136,	// (0x00058ccc) list_double_large_graphic_pane_g5

0x04b5,	// (0x0004a04b) midp_form_pane_ParamLimits

0x6f9d,	// (0x00050b33) main_apps_wheel_pane_ParamLimits

0xb5e4,	// (0x0005517a) popup_preview_window_ParamLimits

0xb5e4,	// (0x0005517a) popup_preview_window

0x207d,	// (0x0004bc13) popup_touch_info_window_ParamLimits

0x207d,	// (0x0004bc13) popup_touch_info_window

0x209f,	// (0x0004bc35) popup_touch_menu_window_ParamLimits

0x209f,	// (0x0004bc35) popup_touch_menu_window

0x6f2f,	// (0x00050ac5) bg_popup_sub_pane_cp6

0x4b60,	// (0x0004e6f6) list_touch_menu_pane

0x4b68,	// (0x0004e6fe) list_single_touch_menu_pane_ParamLimits

0x4b68,	// (0x0004e6fe) list_single_touch_menu_pane

0x4b80,	// (0x0004e716) list_single_touch_menu_pane_t1

0x6f9d,	// (0x00050b33) bg_popup_sub_pane_cp7_ParamLimits

0x6f9d,	// (0x00050b33) bg_popup_sub_pane_cp7

0x4b8e,	// (0x0004e724) heading_sub_pane

0x4b96,	// (0x0004e72c) list_touch_info_pane_ParamLimits

0x4b96,	// (0x0004e72c) list_touch_info_pane

0x4ba5,	// (0x0004e73b) list_single_touch_info_pane_ParamLimits

0x4ba5,	// (0x0004e73b) list_single_touch_info_pane

0x4bb7,	// (0x0004e74d) list_single_touch_info_pane_t1

0x4bc5,	// (0x0004e75b) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x000596a9) list_single_touch_info_pane_t

0xe7f5,	// (0x0005838b) bg_popup_heading_pane_cp

0x4bd3,	// (0x0004e769) heading_sub_pane_t1

0x266a,	// (0x0004c200) bg_popup_preview_window_pane_cp_ParamLimits

0x266a,	// (0x0004c200) bg_popup_preview_window_pane_cp

0x4b8e,	// (0x0004e724) heading_preview_pane

0x4b96,	// (0x0004e72c) list_preview_pane_ParamLimits

0x4b96,	// (0x0004e72c) list_preview_pane

0x4be1,	// (0x0004e777) popup_preview_window_g1

0x4ba5,	// (0x0004e73b) list_single_preview_pane_ParamLimits

0x4ba5,	// (0x0004e73b) list_single_preview_pane

0x4be9,	// (0x0004e77f) list_single_preview_pane_g1

0x4bf1,	// (0x0004e787) list_single_preview_pane_t1

0x4bb7,	// (0x0004e74d) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x000596ae) list_single_preview_pane_t

0x4bff,	// (0x0004e795) bg_popup_heading_pane_cp2_ParamLimits

0x4bff,	// (0x0004e795) bg_popup_heading_pane_cp2

0x4c15,	// (0x0004e7ab) heading_preview_pane_g1

0x4c1d,	// (0x0004e7b3) heading_preview_pane_t1_ParamLimits

0x4c1d,	// (0x0004e7b3) heading_preview_pane_t1

0x6ff0,	// (0x00050b86) soft_indicator_pane_t1_ParamLimits

0x7533,	// (0x000510c9) scroll_pane_ParamLimits

0xa721,	// (0x000542b7) scroll_sc2_left_pane

0xa72a,	// (0x000542c0) scroll_sc2_right_pane

0xa749,	// (0x000542df) scroll_bg_pane_g1_ParamLimits

0xa75e,	// (0x000542f4) scroll_bg_pane_g2_ParamLimits

0xa776,	// (0x0005430c) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005927e) scroll_bg_pane_g_ParamLimits

0xa749,	// (0x000542df) scroll_handle_pane_g1_ParamLimits

0xa798,	// (0x0005432e) scroll_handle_pane_g2_ParamLimits

0xa776,	// (0x0005430c) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00059285) scroll_handle_pane_g_ParamLimits

0x04dd,	// (0x0004a073) popup_choice_list_window_ParamLimits

0x04dd,	// (0x0004a073) popup_choice_list_window

0x2540,	// (0x0004c0d6) choice_list_pane

0x25c2,	// (0x0004c158) cell_toolbar_pane_t1

0x25ea,	// (0x0004c180) toolbar_button_pane_ParamLimits

0x3699,	// (0x0004d22f) ai_gene_pane_1_t2_ParamLimits

0x3699,	// (0x0004d22f) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x000594a8) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x000594a8) ai_gene_pane_1_t

0x4c3a,	// (0x0004e7d0) scroll_sc2_left_pane_g1

0x4c3a,	// (0x0004e7d0) scroll_sc2_right_pane_g1

0x04b5,	// (0x0004a04b) bg_popup_sub_pane_cp10

0x4c44,	// (0x0004e7da) list_choice_list_pane

0x4c5d,	// (0x0004e7f3) list_single_choice_list_pane_ParamLimits

0x4c5d,	// (0x0004e7f3) list_single_choice_list_pane

0x4c75,	// (0x0004e80b) list_single_choice_list_pane_g1

0xa3ff,	// (0x00053f95) list_single_choice_list_pane_t1_ParamLimits

0xa3ff,	// (0x00053f95) list_single_choice_list_pane_t1

0x4c7d,	// (0x0004e813) choice_list_pane_g1

0x4c85,	// (0x0004e81b) choice_list_pane_t1

0x6f2f,	// (0x00050ac5) input_focus_pane_cp11

0xa5bc,	// (0x00054152) title_pane_stacon_g2_ParamLimits

0xa5bc,	// (0x00054152) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00059264) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00059264) title_pane_stacon_g

0xe7f5,	// (0x0005838b) cursor_press_pane

0xb261,	// (0x00054df7) popup_fep_hwr_window_ParamLimits

0xb261,	// (0x00054df7) popup_fep_hwr_window

0x1c21,	// (0x0004b7b7) popup_fep_vkb_window_ParamLimits

0x1c21,	// (0x0004b7b7) popup_fep_vkb_window

0x4c93,	// (0x0004e829) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x000596d7) fep_vkb_side_pane_g_ParamLimits

0x0bad,	// (0x0004a743) fep_hwr_candidate_pane_ParamLimits

0x0bad,	// (0x0004a743) fep_hwr_candidate_pane

0x0bd7,	// (0x0004a76d) fep_hwr_side_pane_ParamLimits

0x0bd7,	// (0x0004a76d) fep_hwr_side_pane

0x0bf9,	// (0x0004a78f) fep_hwr_top_pane_ParamLimits

0x0bf9,	// (0x0004a78f) fep_hwr_top_pane

0x0c11,	// (0x0004a7a7) fep_hwr_write_pane_ParamLimits

0x0c11,	// (0x0004a7a7) fep_hwr_write_pane

0xfb41,	// (0x000596d7) fep_vkb_side_pane_g

0x4c9b,	// (0x0004e831) fep_hwr_top_pane_g1

0x4cad,	// (0x0004e843) fep_hwr_top_pane_g2

0x0c3d,	// (0x0004a7d3) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x000596b3) fep_hwr_top_pane_g

0x0c52,	// (0x0004a7e8) fep_hwr_top_text_pane

0xa916,	// (0x000544ac) fep_hwr_top_text_pane_g1

0x4ce3,	// (0x0004e879) fep_hwr_top_text_pane_t1

0x0d5c,	// (0x0004a8f2) fep_hwr_candidate_pane_g1

0x4f2e,	// (0x0004eac4) fep_vkb_keypad_pane_g3_ParamLimits

0x4f2e,	// (0x0004eac4) fep_vkb_keypad_pane_g3

0x4f5a,	// (0x0004eaf0) fep_vkb_keypad_pane_g4_ParamLimits

0x4f5a,	// (0x0004eaf0) fep_vkb_keypad_pane_g4

0x4fd1,	// (0x0004eb67) fep_vkb_bottom_pane_g2_ParamLimits

0x4fd1,	// (0x0004eb67) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x000596de) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x000596de) fep_vkb_bottom_pane_g

0x4c3a,	// (0x0004e7d0) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x000596e8) cell_vkb_side_pane_g

0x505c,	// (0x0004ebf2) cell_vkb_side_pane_t1

0x506a,	// (0x0004ec00) cell_vkb_side_pane_t1_copy1

0x4c3a,	// (0x0004e7d0) bg_fep_vkb_candidate_pane_g2

0x51ae,	// (0x0004ed44) cell_vkb_candidate_pane_ParamLimits

0x4cf1,	// (0x0004e887) aid_size_cell_vkb_ParamLimits

0x4cf1,	// (0x0004e887) aid_size_cell_vkb

0x51ae,	// (0x0004ed44) cell_vkb_candidate_pane

0x0d76,	// (0x0004a90c) bg_popup_fep_shadow_pane_g1

0xcdd2,	// (0x00056968) fep_vkb_bottom_pane_ParamLimits

0xcdd2,	// (0x00056968) fep_vkb_bottom_pane

0x4dc0,	// (0x0004e956) fep_vkb_candidate_pane_ParamLimits

0x4dc0,	// (0x0004e956) fep_vkb_candidate_pane

0xcdfe,	// (0x00056994) fep_vkb_keypad_pane_ParamLimits

0xcdfe,	// (0x00056994) fep_vkb_keypad_pane

0xce25,	// (0x000569bb) fep_vkb_side_pane_ParamLimits

0xce25,	// (0x000569bb) fep_vkb_side_pane

0xce61,	// (0x000569f7) fep_vkb_top_pane_ParamLimits

0xce61,	// (0x000569f7) fep_vkb_top_pane

0x4e87,	// (0x0004ea1d) fep_vkb_top_pane_g1_ParamLimits

0x4e87,	// (0x0004ea1d) fep_vkb_top_pane_g1

0x4e96,	// (0x0004ea2c) fep_vkb_top_pane_g2_ParamLimits

0x4e96,	// (0x0004ea2c) fep_vkb_top_pane_g2

0x4ea5,	// (0x0004ea3b) fep_vkb_top_pane_g3_ParamLimits

0x4ea5,	// (0x0004ea3b) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x000596ce) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x000596ce) fep_vkb_top_pane_g

0x4ec3,	// (0x0004ea59) fep_vkb_top_text_pane_ParamLimits

0x4ec3,	// (0x0004ea59) fep_vkb_top_text_pane

0xce9d,	// (0x00056a33) fep_vkb_side_pane_g1_ParamLimits

0xce9d,	// (0x00056a33) fep_vkb_side_pane_g1

0x4f1d,	// (0x0004eab3) grid_vkb_side_pane_ParamLimits

0x4f1d,	// (0x0004eab3) grid_vkb_side_pane

0x0d7e,	// (0x0004a914) bg_popup_fep_shadow_pane_g2

0x0d87,	// (0x0004a91d) bg_popup_fep_shadow_pane_g3

0x0d8f,	// (0x0004a925) bg_popup_fep_shadow_pane_g4

0x0d98,	// (0x0004a92e) bg_popup_fep_shadow_pane_g5

0x0da2,	// (0x0004a938) bg_popup_fep_shadow_pane_g6

0x0daa,	// (0x0004a940) bg_popup_fep_shadow_pane_g7

0xa2df,	// (0x00053e75) bg_popup_fep_shadow_pane_g8

0x4f7c,	// (0x0004eb12) grid_vkb_keypad_number_pane_ParamLimits

0x4f7c,	// (0x0004eb12) grid_vkb_keypad_number_pane

0x4f90,	// (0x0004eb26) grid_vkb_keypad_pane_ParamLimits

0x4f90,	// (0x0004eb26) grid_vkb_keypad_pane

0x4fb6,	// (0x0004eb4c) fep_vkb_bottom_pane_g1_ParamLimits

0x4fb6,	// (0x0004eb4c) fep_vkb_bottom_pane_g1

0x4fdf,	// (0x0004eb75) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4fdf,	// (0x0004eb75) grid_vkb_keypad_bottom_left_pane

0x4ff4,	// (0x0004eb8a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4ff4,	// (0x0004eb8a) grid_vkb_keypad_bottom_right_pane

0x5009,	// (0x0004eb9f) fep_vkb_top_text_pane_g1

0xcee4,	// (0x00056a7a) fep_vkb_top_text_pane_t1

0xcef6,	// (0x00056a8c) cell_vkb_side_pane_ParamLimits

0xcef6,	// (0x00056a8c) cell_vkb_side_pane

0x4c3a,	// (0x0004e7d0) cell_vkb_side_pane_g1

0x5078,	// (0x0004ec0e) cell_vkb_keypad_pane_ParamLimits

0x5078,	// (0x0004ec0e) cell_vkb_keypad_pane

0x5105,	// (0x0004ec9b) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x000596fb) bg_popup_fep_shadow_pane_g

0x4c3a,	// (0x0004e7d0) cell_hwr_side_pane_g1

0x4c3a,	// (0x0004e7d0) cell_hwr_side_pane_g2

0x510f,	// (0x0004eca5) cell_vkb_keypad_pane_t1

0xcf0c,	// (0x00056aa2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf0c,	// (0x00056aa2) cell_vkb_keypad_bottom_left_pane

0xcf21,	// (0x00056ab7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf21,	// (0x00056ab7) cell_vkb_keypad_bottom_right_pane

0x4c3a,	// (0x0004e7d0) cell_vkb_keypad_bottom_left_pane_g1

0x4c3a,	// (0x0004e7d0) cell_vkb_keypad_bottom_right_pane_g1

0x5173,	// (0x0004ed09) cell_vkb_keypad_number_pane_ParamLimits

0x5173,	// (0x0004ed09) cell_vkb_keypad_number_pane

0x5192,	// (0x0004ed28) cell_vkb_keypad_number_pane_g1

0x519c,	// (0x0004ed32) cell_vkb_keypad_number_pane_g2

0x51a5,	// (0x0004ed3b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x000596ed) cell_vkb_keypad_number_pane_g

0x510f,	// (0x0004eca5) cell_vkb_keypad_number_pane_t1

0x51cf,	// (0x0004ed65) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x000596e8) cell_hwr_side_pane_g

0x51e8,	// (0x0004ed7e) cell_hwr_side_pane_t1

0x0dbc,	// (0x0004a952) cell_hwr_side_pane_t1_copy1

0x4eb5,	// (0x0004ea4b) cell_hwr_candidate_pane_g1

0x0dca,	// (0x0004a960) cell_hwr_candidate_pane_t1

0x4c3a,	// (0x0004e7d0) cell_vkb_candidate_pane_g2

0x526e,	// (0x0004ee04) cell_vkb_candidate_pane_t1

0x8a11,	// (0x000525a7) bg_popup_fep_shadow_pane_ParamLimits

0x8a11,	// (0x000525a7) bg_popup_fep_shadow_pane

0xcd98,	// (0x0005692e) bg_fep_hwr_top_pane_g4

0x4cbf,	// (0x0004e855) bg_hwr_side_pane_g1_ParamLimits

0x4cbf,	// (0x0004e855) bg_hwr_side_pane_g1

0xbf46,	// (0x00055adc) cell_hwr_side_pane_ParamLimits

0xbf46,	// (0x00055adc) cell_hwr_side_pane

0x0ccd,	// (0x0004a863) fep_hwr_write_pane_g1_ParamLimits

0x0ccd,	// (0x0004a863) fep_hwr_write_pane_g1

0x0cda,	// (0x0004a870) fep_hwr_write_pane_g2_ParamLimits

0x0cda,	// (0x0004a870) fep_hwr_write_pane_g2

0x0ce7,	// (0x0004a87d) fep_hwr_write_pane_g3_ParamLimits

0x0ce7,	// (0x0004a87d) fep_hwr_write_pane_g3

0xbf66,	// (0x00055afc) fep_hwr_write_pane_g4_ParamLimits

0xbf66,	// (0x00055afc) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x000596ba) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x000596ba) fep_hwr_write_pane_g

0xcd98,	// (0x0005692e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcd98,	// (0x0005692e) bg_fep_hwr_candidate_pane_g2

0x0d0a,	// (0x0004a8a0) cell_hwr_candidate_pane_ParamLimits

0x0d0a,	// (0x0004a8a0) cell_hwr_candidate_pane

0x0d5c,	// (0x0004a8f2) fep_hwr_candidate_pane_g1_ParamLimits

0x4d1f,	// (0x0004e8b5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4d1f,	// (0x0004e8b5) bg_popup_fep_shadow_pane_cp2

0x4eb5,	// (0x0004ea4b) fep_vkb_top_pane_g4_ParamLimits

0x4eb5,	// (0x0004ea4b) fep_vkb_top_pane_g4

0x4efb,	// (0x0004ea91) fep_vkb_side_pane_g2_ParamLimits

0x4efb,	// (0x0004ea91) fep_vkb_side_pane_g2

0x976a,	// (0x00053300) list_setting_pane_t4_ParamLimits

0x976a,	// (0x00053300) list_setting_pane_t4

0x9806,	// (0x0005339c) list_setting_number_pane_t5_ParamLimits

0x9806,	// (0x0005339c) list_setting_number_pane_t5

0xa95d,	// (0x000544f3) list_double_heading_pane_cp2_ParamLimits

0xa95d,	// (0x000544f3) list_double_heading_pane_cp2

0x527c,	// (0x0004ee12) list_double_heading_pane_g1_cp2_ParamLimits

0x527c,	// (0x0004ee12) list_double_heading_pane_g1_cp2

0x5288,	// (0x0004ee1e) list_double_heading_pane_g2_cp2_ParamLimits

0x5288,	// (0x0004ee1e) list_double_heading_pane_g2_cp2

0x529c,	// (0x0004ee32) list_double_heading_pane_t1_cp2_ParamLimits

0x529c,	// (0x0004ee32) list_double_heading_pane_t1_cp2

0x52b2,	// (0x0004ee48) list_double_heading_pane_t2_cp2_ParamLimits

0x52b2,	// (0x0004ee48) list_double_heading_pane_t2_cp2

0x6f27,	// (0x00050abd) aid_value_unit2

0xf099,	// (0x00058c2f) popup_preview_fixed_window

0x70de,	// (0x00050c74) bg_popup_preview_window_pane_cp02

0x52c4,	// (0x0004ee5a) list_preview_fixed_pane

0x530a,	// (0x0004eea0) list_empty_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_empty_pane_fp

0x530a,	// (0x0004eea0) list_single_cale_day_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_single_cale_day_pane_fp

0x530a,	// (0x0004eea0) list_single_graphic_heading_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_single_graphic_heading_pane_fp

0x530a,	// (0x0004eea0) list_single_graphic_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_single_graphic_pane_fp

0x530a,	// (0x0004eea0) list_single_heading_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_single_heading_pane_fp

0x530a,	// (0x0004eea0) list_single_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_single_pane_fp

0x5323,	// (0x0004eeb9) list_single_pane_fp_g1_ParamLimits

0x5323,	// (0x0004eeb9) list_single_pane_fp_g1

0x527c,	// (0x0004ee12) list_single_pane_fp_g2_ParamLimits

0x527c,	// (0x0004ee12) list_single_pane_fp_g2

0x5288,	// (0x0004ee1e) list_single_pane_fp_g3_ParamLimits

0x5288,	// (0x0004ee1e) list_single_pane_fp_g3

0x532f,	// (0x0004eec5) list_single_pane_fp_g4_ParamLimits

0x532f,	// (0x0004eec5) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x0005971c) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x0005971c) list_single_pane_fp_g

0xed6c,	// (0x00058902) list_single_pane_fp_t1_ParamLimits

0xed6c,	// (0x00058902) list_single_pane_fp_t1

0xed83,	// (0x00058919) list_single_graphic_pane_fp_g1_ParamLimits

0xed83,	// (0x00058919) list_single_graphic_pane_fp_g1

0x5323,	// (0x0004eeb9) list_single_graphic_pane_fp_g2_ParamLimits

0x5323,	// (0x0004eeb9) list_single_graphic_pane_fp_g2

0x527c,	// (0x0004ee12) list_single_graphic_pane_fp_g3_ParamLimits

0x527c,	// (0x0004ee12) list_single_graphic_pane_fp_g3

0x5288,	// (0x0004ee1e) list_single_graphic_pane_fp_g4_ParamLimits

0x5288,	// (0x0004ee1e) list_single_graphic_pane_fp_g4

0x532f,	// (0x0004eec5) list_single_graphic_pane_fp_g5_ParamLimits

0x532f,	// (0x0004eec5) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059725) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059725) list_single_graphic_pane_fp_g

0xed8f,	// (0x00058925) list_single_graphic_pane_fp_t1_ParamLimits

0xed8f,	// (0x00058925) list_single_graphic_pane_fp_t1

0xed83,	// (0x00058919) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xed83,	// (0x00058919) list_single_graphic_heading_pane_fp_g1

0x5323,	// (0x0004eeb9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5323,	// (0x0004eeb9) list_single_graphic_heading_pane_fp_g2

0x527c,	// (0x0004ee12) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x527c,	// (0x0004ee12) list_single_graphic_heading_pane_fp_g3

0x5288,	// (0x0004ee1e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5288,	// (0x0004ee1e) list_single_graphic_heading_pane_fp_g4

0x532f,	// (0x0004eec5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x532f,	// (0x0004eec5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059725) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059725) list_single_graphic_heading_pane_fp_g

0xeda5,	// (0x0005893b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeda5,	// (0x0005893b) list_single_graphic_heading_pane_fp_t1

0xedbb,	// (0x00058951) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xedbb,	// (0x00058951) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00059730) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00059730) list_single_graphic_heading_pane_fp_t

0xedcd,	// (0x00058963) list_single_cale_day_pane_fp_g1_ParamLimits

0xedcd,	// (0x00058963) list_single_cale_day_pane_fp_g1

0x533b,	// (0x0004eed1) list_single_cale_day_pane_fp_g2_ParamLimits

0x533b,	// (0x0004eed1) list_single_cale_day_pane_fp_g2

0x0de8,	// (0x0004a97e) list_single_cale_day_pane_fp_g3_ParamLimits

0x0de8,	// (0x0004a97e) list_single_cale_day_pane_fp_g3

0x0e10,	// (0x0004a9a6) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e10,	// (0x0004a9a6) list_single_cale_day_pane_fp_g4

0x0e34,	// (0x0004a9ca) list_single_cale_day_pane_fp_g5_ParamLimits

0x0e34,	// (0x0004a9ca) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00059735) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00059735) list_single_cale_day_pane_fp_g

0xee05,	// (0x0005899b) list_single_cale_day_pane_fp_t1_ParamLimits

0xee05,	// (0x0005899b) list_single_cale_day_pane_fp_t1

0xee2b,	// (0x000589c1) list_single_cale_day_pane_fp_t2_ParamLimits

0xee2b,	// (0x000589c1) list_single_cale_day_pane_fp_t2

0xee44,	// (0x000589da) list_single_cale_day_pane_fp_t3_ParamLimits

0xee44,	// (0x000589da) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x00059740) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x00059740) list_single_cale_day_pane_fp_t

0x5323,	// (0x0004eeb9) list_empty_pane_fp_g1_ParamLimits

0x5323,	// (0x0004eeb9) list_empty_pane_fp_g1

0xee5d,	// (0x000589f3) list_empty_pane_fp_t1

0xee6b,	// (0x00058a01) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00059747) list_empty_pane_fp_t

0x5323,	// (0x0004eeb9) list_single_heading_pane_fp_g1_ParamLimits

0x5323,	// (0x0004eeb9) list_single_heading_pane_fp_g1

0x527c,	// (0x0004ee12) list_single_heading_pane_fp_g2_ParamLimits

0x527c,	// (0x0004ee12) list_single_heading_pane_fp_g2

0x5288,	// (0x0004ee1e) list_single_heading_pane_fp_g3_ParamLimits

0x5288,	// (0x0004ee1e) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x0005974c) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x0005974c) list_single_heading_pane_fp_g

0xee79,	// (0x00058a0f) list_single_heading_pane_fp_t1_ParamLimits

0xee79,	// (0x00058a0f) list_single_heading_pane_fp_t1

0xee8b,	// (0x00058a21) list_single_heading_pane_fp_t2_ParamLimits

0xee8b,	// (0x00058a21) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00059753) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00059753) list_single_heading_pane_fp_t

0xa453,	// (0x00053fe9) aid_size_cell_fast

0x70b3,	// (0x00050c49) soft_indicator_pane_cp1_t1

0xa490,	// (0x00054026) cell_app_pane_cp2_ParamLimits

0xa490,	// (0x00054026) cell_app_pane_cp2

0x0b96,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_pane

0xcda6,	// (0x0005693c) fep_hwr_candidate_pane_g3_ParamLimits

0xcda6,	// (0x0005693c) fep_hwr_candidate_pane_g3

0xcdb3,	// (0x00056949) fep_hwr_candidate_pane_g4_ParamLimits

0xcdb3,	// (0x00056949) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x000596c7) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x000596c7) fep_hwr_candidate_pane_g

0x4daf,	// (0x0004e945) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4daf,	// (0x0004e945) fep_vkb_candidate_drop_down_list_pane

0x51d7,	// (0x0004ed6d) fep_vkb_candidate_pane_g3

0x51df,	// (0x0004ed75) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x000596f4) fep_vkb_candidate_pane_g

0x4eb5,	// (0x0004ea4b) cell_hwr_candidate_pane_g1_ParamLimits

0x51f6,	// (0x0004ed8c) cell_hwr_candidate_pane_g3_ParamLimits

0x51f6,	// (0x0004ed8c) cell_hwr_candidate_pane_g3

0x5217,	// (0x0004edad) cell_hwr_candidate_pane_g4_ParamLimits

0x5217,	// (0x0004edad) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x0005970e) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x0005970e) cell_hwr_candidate_pane_g

0x5238,	// (0x0004edce) cell_vkb_candidate_pane_g3_ParamLimits

0x5238,	// (0x0004edce) cell_vkb_candidate_pane_g3

0x5253,	// (0x0004ede9) cell_vkb_candidate_pane_g4_ParamLimits

0x5253,	// (0x0004ede9) cell_vkb_candidate_pane_g4

0x5347,	// (0x0004eedd) cell_app_pane_cp2_g1_ParamLimits

0x5347,	// (0x0004eedd) cell_app_pane_cp2_g1

0x5365,	// (0x0004eefb) cell_app_pane_cp2_g2_ParamLimits

0x5365,	// (0x0004eefb) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x00059758) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x00059758) cell_app_pane_cp2_g

0x5371,	// (0x0004ef07) cell_app_pane_cp2_t1_ParamLimits

0x5371,	// (0x0004ef07) cell_app_pane_cp2_t1

0xa264,	// (0x00053dfa) grid_highlight_pane_cp1_ParamLimits

0xa264,	// (0x00053dfa) grid_highlight_pane_cp1

0x0e58,	// (0x0004a9ee) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e58,	// (0x0004a9ee) cell_hwr_candidate_pane_cp1

0x4eb5,	// (0x0004ea4b) fep_hwr_candidate_drop_down_list_pane_g1

0x5383,	// (0x0004ef19) fep_hwr_candidate_drop_down_list_pane_g2

0x5390,	// (0x0004ef26) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x0005975d) fep_hwr_candidate_drop_down_list_pane_g

0x0e7c,	// (0x0004aa12) fep_hwr_candidate_drop_down_list_scroll_pane

0x0e85,	// (0x0004aa1b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0e85,	// (0x0004aa1b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0e92,	// (0x0004aa28) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0e92,	// (0x0004aa28) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e9f,	// (0x0004aa35) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e9f,	// (0x0004aa35) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5238,	// (0x0004edce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5238,	// (0x0004edce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5253,	// (0x0004ede9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5253,	// (0x0004ede9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0eac,	// (0x0004aa42) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0eac,	// (0x0004aa42) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0ec7,	// (0x0004aa5d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0ec7,	// (0x0004aa5d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0ee2,	// (0x0004aa78) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0ee2,	// (0x0004aa78) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00059764) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00059764) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x539d,	// (0x0004ef33) cell_vkb_candidate_pane_cp1_ParamLimits

0x539d,	// (0x0004ef33) cell_vkb_candidate_pane_cp1

0x4eb5,	// (0x0004ea4b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4eb5,	// (0x0004ea4b) fep_vkb_candidate_drop_down_list_pane_g1

0x5383,	// (0x0004ef19) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5383,	// (0x0004ef19) fep_vkb_candidate_drop_down_list_pane_g2

0x5390,	// (0x0004ef26) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5390,	// (0x0004ef26) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x0005975d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x0005975d) fep_vkb_candidate_drop_down_list_pane_g

0x53c3,	// (0x0004ef59) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x53c3,	// (0x0004ef59) fep_vkb_candidate_drop_down_list_scroll_pane

0x53d0,	// (0x0004ef66) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x53d0,	// (0x0004ef66) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x53dd,	// (0x0004ef73) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x53dd,	// (0x0004ef73) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x53e9,	// (0x0004ef7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x53e9,	// (0x0004ef7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x51f6,	// (0x0004ed8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x51f6,	// (0x0004ed8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5217,	// (0x0004edad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5217,	// (0x0004edad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x53f5,	// (0x0004ef8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x53f5,	// (0x0004ef8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5416,	// (0x0004efac) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5416,	// (0x0004efac) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5437,	// (0x0004efcd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5437,	// (0x0004efcd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x00059775) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x00059775) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9df5,	// (0x0005398b) title_pane_g1_ParamLimits

0x9e08,	// (0x0005399e) title_pane_g2_ParamLimits

0xf54e,	// (0x000590e4) title_pane_g_ParamLimits

0xa906,	// (0x0005449c) aid_call2_pane

0xa90e,	// (0x000544a4) aid_call_pane

0xa916,	// (0x000544ac) popup_clock_analogue_window_g1

0xa916,	// (0x000544ac) popup_clock_analogue_window_g2

0xf331,	// (0x00058ec7) popup_clock_analogue_window_g3

0xf33a,	// (0x00058ed0) popup_clock_analogue_window_g4

0x6f39,	// (0x00050acf) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00059293) popup_clock_analogue_window_g

0xf342,	// (0x00058ed8) popup_clock_analogue_window_t1

0xf350,	// (0x00058ee6) clock_digital_number_pane_ParamLimits

0xf350,	// (0x00058ee6) clock_digital_number_pane

0xf35c,	// (0x00058ef2) clock_digital_number_pane_cp02_ParamLimits

0xf35c,	// (0x00058ef2) clock_digital_number_pane_cp02

0xf368,	// (0x00058efe) clock_digital_number_pane_cp03_ParamLimits

0xf368,	// (0x00058efe) clock_digital_number_pane_cp03

0xf374,	// (0x00058f0a) clock_digital_number_pane_cp04_ParamLimits

0xf374,	// (0x00058f0a) clock_digital_number_pane_cp04

0xf380,	// (0x00058f16) clock_digital_separator_pane_ParamLimits

0xf380,	// (0x00058f16) clock_digital_separator_pane

0xf38c,	// (0x00058f22) popup_clock_digital_window_t1_ParamLimits

0xf38c,	// (0x00058f22) popup_clock_digital_window_t1

0x6f39,	// (0x00050acf) clock_digital_number_pane_g1

0x6f39,	// (0x00050acf) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005929e) clock_digital_number_pane_g

0x6f39,	// (0x00050acf) clock_digital_separator_pane_g1

0x6f39,	// (0x00050acf) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005929e) clock_digital_separator_pane_g

0xb8cc,	// (0x00055462) aid_fill_nsta_ParamLimits

0xba04,	// (0x0005559a) indicator_nsta_pane_ParamLimits

0x23cd,	// (0x0004bf63) popup_clock_analogue_window

0x23cd,	// (0x0004bf63) popup_clock_digital_window

0xcbb5,	// (0x0005674b) grid_indicator_nsta_pane_ParamLimits

0x466d,	// (0x0004e203) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x00059647) clock_nsta_pane_t

0xf2fe,	// (0x00058e94) aid_size_max_handle

0xa6f9,	// (0x0005428f) aid_size_min_handle

0xe7f5,	// (0x0005838b) editor_scroll_pane

0x5452,	// (0x0004efe8) ex_editor_pane

0xa3da,	// (0x00053f70) scroll_pane_cp13

0x755f,	// (0x000510f5) scroll_pane_cp14

0xa945,	// (0x000544db) scroll_pane_cp36

0xa970,	// (0x00054506) list_single_graphic_hl_pane_cp2_ParamLimits

0xa970,	// (0x00054506) list_single_graphic_hl_pane_cp2

0xca51,	// (0x000565e7) list_single_graphic_hl_pane_ParamLimits

0xca51,	// (0x000565e7) list_single_graphic_hl_pane

0xeea1,	// (0x00058a37) aid_size_min_hl_cp1

0x545a,	// (0x0004eff0) list_highlight_pane_cp34_ParamLimits

0x545a,	// (0x0004eff0) list_highlight_pane_cp34

0x546b,	// (0x0004f001) list_single_graphic_hl_pane_g1_ParamLimits

0x546b,	// (0x0004f001) list_single_graphic_hl_pane_g1

0x9a74,	// (0x0005360a) list_single_graphic_hl_pane_g2_ParamLimits

0x9a74,	// (0x0005360a) list_single_graphic_hl_pane_g2

0x9a74,	// (0x0005360a) list_single_graphic_hl_pane_g3_ParamLimits

0x9a74,	// (0x0005360a) list_single_graphic_hl_pane_g3

0xcf3c,	// (0x00056ad2) list_single_graphic_hl_pane_g4_ParamLimits

0xcf3c,	// (0x00056ad2) list_single_graphic_hl_pane_g4

0x54a8,	// (0x0004f03e) list_single_graphic_hl_pane_g5_ParamLimits

0x54a8,	// (0x0004f03e) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x00059786) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x00059786) list_single_graphic_hl_pane_g

0x9a80,	// (0x00053616) list_single_graphic_hl_pane_t1_ParamLimits

0x9a80,	// (0x00053616) list_single_graphic_hl_pane_t1

0x5478,	// (0x0004f00e) aid_size_min_hl_cp2

0x5481,	// (0x0004f017) list_highlight_pane_cp34_cp2_ParamLimits

0x5481,	// (0x0004f017) list_highlight_pane_cp34_cp2

0x546b,	// (0x0004f001) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x546b,	// (0x0004f001) list_single_graphic_hl_pane_g1_cp2

0x548e,	// (0x0004f024) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x548e,	// (0x0004f024) list_single_graphic_hl_pane_g2_cp2

0xcf48,	// (0x00056ade) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf48,	// (0x00056ade) list_single_graphic_hl_pane_g3_cp2

0xcf3c,	// (0x00056ad2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcf3c,	// (0x00056ad2) list_single_graphic_hl_pane_g4_cp2

0x54a8,	// (0x0004f03e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x54a8,	// (0x0004f03e) list_single_graphic_hl_pane_g5_cp2

0xb03d,	// (0x00054bd3) control_pane_g4_ParamLimits

0xb03d,	// (0x00054bd3) control_pane_g4

0x04b5,	// (0x0004a04b) bg_popup_sub_pane_cp10_ParamLimits

0x4c44,	// (0x0004e7da) list_choice_list_pane_ParamLimits

0x4c53,	// (0x0004e7e9) scroll_pane_cp23

0x70de,	// (0x00050c74) bg_popup_preview_window_pane_cp02_ParamLimits

0x52c4,	// (0x0004ee5a) list_preview_fixed_pane_ParamLimits

0x52da,	// (0x0004ee70) list_preview_fixed_pane_cp_ParamLimits

0x52da,	// (0x0004ee70) list_preview_fixed_pane_cp

0x52e6,	// (0x0004ee7c) popup_preview_fixed_window_g1_ParamLimits

0x52e6,	// (0x0004ee7c) popup_preview_fixed_window_g1

0x52f2,	// (0x0004ee88) popup_preview_fixed_window_g2_ParamLimits

0x52f2,	// (0x0004ee88) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00059715) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00059715) popup_preview_fixed_window_g

0xf270,	// (0x00058e06) aid_navi_side_left_pane_ParamLimits

0xf285,	// (0x00058e1b) aid_navi_side_right_pane_ParamLimits

0xf29d,	// (0x00058e33) navi_icon_pane_stacon_ParamLimits

0xf2b1,	// (0x00058e47) navi_navi_pane_stacon_ParamLimits

0xf29d,	// (0x00058e33) navi_text_pane_stacon_ParamLimits

0x6f2f,	// (0x00050ac5) main_text_info_pane

0x54d2,	// (0x0004f068) listscroll_text_info_pane

0x54da,	// (0x0004f070) list_text_info_pane_ParamLimits

0x54da,	// (0x0004f070) list_text_info_pane

0x54e9,	// (0x0004f07f) scroll_pane_cp24_ParamLimits

0x54e9,	// (0x0004f07f) scroll_pane_cp24

0xcf56,	// (0x00056aec) list_text_info_pane_t1_ParamLimits

0xcf56,	// (0x00056aec) list_text_info_pane_t1

0xb1c5,	// (0x00054d5b) popup_fast_swap2_window_ParamLimits

0xb1c5,	// (0x00054d5b) popup_fast_swap2_window

0x552c,	// (0x0004f0c2) aid_size_cell_fast2

0x6f2f,	// (0x00050ac5) bg_popup_window_pane_cp17

0x2a2a,	// (0x0004c5c0) heading_pane_cp2

0x72e4,	// (0x00050e7a) listscroll_fast2_pane

0x5536,	// (0x0004f0cc) grid_fast2_pane

0x5540,	// (0x0004f0d6) listscroll_fast2_pane_g1

0x554a,	// (0x0004f0e0) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x00059791) listscroll_fast2_pane_g

0xa3da,	// (0x00053f70) scroll_pane_cp26

0x5554,	// (0x0004f0ea) cell_fast2_pane_ParamLimits

0x5554,	// (0x0004f0ea) cell_fast2_pane

0x556b,	// (0x0004f101) cell_fast2_pane_g1

0x5574,	// (0x0004f10a) cell_fast2_pane_g2

0x557d,	// (0x0004f113) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x00059796) cell_fast2_pane_g

0x7326,	// (0x00050ebc) grid_highlight_pane_cp9

0x733b,	// (0x00050ed1) main_eswt_pane_ParamLimits

0x733b,	// (0x00050ed1) main_eswt_pane

0x54fe,	// (0x0004f094) list_single_text_info_pane

0x5585,	// (0x0004f11b) eswt_ctrl_button_pane

0x5585,	// (0x0004f11b) eswt_ctrl_canvas_pane

0x558d,	// (0x0004f123) eswt_ctrl_combo_pane

0x5585,	// (0x0004f11b) eswt_ctrl_default_pane

0x5585,	// (0x0004f11b) eswt_ctrl_label_pane

0x5595,	// (0x0004f12b) eswt_ctrl_wait_pane

0x559d,	// (0x0004f133) eswt_shell_pane

0x6f2f,	// (0x00050ac5) listscroll_eswt_app_pane

0x55bd,	// (0x0004f153) popup_eswt_tasktip_window_ParamLimits

0x55bd,	// (0x0004f153) popup_eswt_tasktip_window

0x266a,	// (0x0004c200) bg_popup_window_pane_cp18

0x55ce,	// (0x0004f164) eswt_control_pane_g1_ParamLimits

0x55ce,	// (0x0004f164) eswt_control_pane_g1

0x55db,	// (0x0004f171) eswt_control_pane_g2_ParamLimits

0x55db,	// (0x0004f171) eswt_control_pane_g2

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_ParamLimits

0x55e8,	// (0x0004f17e) eswt_control_pane_g3

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_ParamLimits

0x55f5,	// (0x0004f18b) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x0005979d) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x0005979d) eswt_control_pane_g

0xa264,	// (0x00053dfa) bg_button_pane_ParamLimits

0xa264,	// (0x00053dfa) bg_button_pane

0x733b,	// (0x00050ed1) common_borders_pane_copy2_ParamLimits

0x733b,	// (0x00050ed1) common_borders_pane_copy2

0x5602,	// (0x0004f198) control_button_pane_g1_ParamLimits

0x5602,	// (0x0004f198) control_button_pane_g1

0x560e,	// (0x0004f1a4) control_button_pane_g2_ParamLimits

0x560e,	// (0x0004f1a4) control_button_pane_g2

0x561a,	// (0x0004f1b0) control_button_pane_g3_ParamLimits

0x561a,	// (0x0004f1b0) control_button_pane_g3

0x0002,

0xfc10,	// (0x000597a6) control_button_pane_g_ParamLimits

0xfc10,	// (0x000597a6) control_button_pane_g

0x562e,	// (0x0004f1c4) control_button_pane_t1

0x563c,	// (0x0004f1d2) control_button_pane_t2

0x0001,

0xfc17,	// (0x000597ad) control_button_pane_t

0x25f6,	// (0x0004c18c) bg_button_pane_g1

0x25fe,	// (0x0004c194) bg_button_pane_g2

0x2606,	// (0x0004c19c) bg_button_pane_g3

0x260e,	// (0x0004c1a4) bg_button_pane_g4

0x2616,	// (0x0004c1ac) bg_button_pane_g5

0x261e,	// (0x0004c1b4) bg_button_pane_g6

0x2626,	// (0x0004c1bc) bg_button_pane_g7

0x262e,	// (0x0004c1c4) bg_button_pane_g8

0x2636,	// (0x0004c1cc) bg_button_pane_g9

0x0008,

0xf866,	// (0x000593fc) bg_button_pane_g

0x4bff,	// (0x0004e795) common_borders_pane_ParamLimits

0x4bff,	// (0x0004e795) common_borders_pane

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy1_ParamLimits

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy1

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy1_ParamLimits

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy1

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy1_ParamLimits

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy1

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy1_ParamLimits

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy1

0x4c3a,	// (0x0004e7d0) bg_eswt_ctrl_canvas_pane_g1

0x4bff,	// (0x0004e795) common_borders_pane_cp2_ParamLimits

0x4bff,	// (0x0004e795) common_borders_pane_cp2

0x4bff,	// (0x0004e795) common_borders_pane_cp3_ParamLimits

0x4bff,	// (0x0004e795) common_borders_pane_cp3

0x564a,	// (0x0004f1e0) separator_horizontal_pane

0x5652,	// (0x0004f1e8) separator_vertical_pane

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy2_ParamLimits

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy2

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy2_ParamLimits

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy2

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy2_ParamLimits

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy2

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy2_ParamLimits

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy2

0x6f2f,	// (0x00050ac5) common_borders_pane_cp4

0x565b,	// (0x0004f1f1) separator_horizontal_pane_g1

0x5664,	// (0x0004f1fa) separator_horizontal_pane_g2

0x566d,	// (0x0004f203) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x000597b2) separator_horizontal_pane_g

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy3_ParamLimits

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy3

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy3_ParamLimits

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy3

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy3_ParamLimits

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy3

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy3_ParamLimits

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy3

0x6f2f,	// (0x00050ac5) common_borders_pane_cp5

0x5676,	// (0x0004f20c) separator_vertical_pane_g1

0x567f,	// (0x0004f215) separator_vertical_pane_g2

0x5688,	// (0x0004f21e) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x000597b9) separator_vertical_pane_g

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy4_ParamLimits

0x55ce,	// (0x0004f164) eswt_control_pane_g1_copy4

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy4_ParamLimits

0x55db,	// (0x0004f171) eswt_control_pane_g2_copy4

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy4_ParamLimits

0x55e8,	// (0x0004f17e) eswt_control_pane_g3_copy4

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy4_ParamLimits

0x55f5,	// (0x0004f18b) eswt_control_pane_g4_copy4

0xcf78,	// (0x00056b0e) eswt_ctrl_combo_button_pane

0xcf80,	// (0x00056b16) eswt_ctrl_input_pane

0xcf88,	// (0x00056b1e) popup_choice_list_window_cp70

0xcf90,	// (0x00056b26) eswt_ctrl_input_pane_t1

0x6f2f,	// (0x00050ac5) input_focus_pane_cp70

0x4bff,	// (0x0004e795) bg_button_pane_cp70_ParamLimits

0x4bff,	// (0x0004e795) bg_button_pane_cp70

0xcf9e,	// (0x00056b34) eswt_ctrl_combo_button_pane_g1

0x56bf,	// (0x0004f255) wait_bar_pane_cp70

0x266a,	// (0x0004c200) bg_popup_window_pane_cp70_ParamLimits

0x266a,	// (0x0004c200) bg_popup_window_pane_cp70

0x56c7,	// (0x0004f25d) popup_eswt_tasktip_window_t1

0x56dd,	// (0x0004f273) wait_bar_pane_cp71_ParamLimits

0x56dd,	// (0x0004f273) wait_bar_pane_cp71

0x56e9,	// (0x0004f27f) grid_eswt_app_pane

0xa72a,	// (0x000542c0) scroll_pane_cp70

0xcfa6,	// (0x00056b3c) cell_eswt_app_pane_ParamLimits

0xcfa6,	// (0x00056b3c) cell_eswt_app_pane

0xcfd8,	// (0x00056b6e) cell_eswt_app_pane_g1_ParamLimits

0xcfd8,	// (0x00056b6e) cell_eswt_app_pane_g1

0xd007,	// (0x00056b9d) cell_eswt_app_pane_g2_ParamLimits

0xd007,	// (0x00056b9d) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x000597c0) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x000597c0) cell_eswt_app_pane_g

0xd030,	// (0x00056bc6) cell_eswt_app_pane_t1_ParamLimits

0xd030,	// (0x00056bc6) cell_eswt_app_pane_t1

0x57ae,	// (0x0004f344) grid_highlight_pane_cp70_ParamLimits

0x57ae,	// (0x0004f344) grid_highlight_pane_cp70

0xae31,	// (0x000549c7) set_content_pane_g1

0xafd3,	// (0x00054b69) status_small_volume_pane

0x0f11,	// (0x0004aaa7) status_small_volume_pane_g1

0x0f19,	// (0x0004aaaf) volume_small2_pane

0x0f22,	// (0x0004aab8) volume_small2_pane_g1

0x0f2b,	// (0x0004aac1) volume_small2_pane_g2

0x0f34,	// (0x0004aaca) volume_small2_pane_g3

0x0f3d,	// (0x0004aad3) volume_small2_pane_g4

0x0f46,	// (0x0004aadc) volume_small2_pane_g5

0x0f4f,	// (0x0004aae5) volume_small2_pane_g6

0x0f58,	// (0x0004aaee) volume_small2_pane_g7

0x0f61,	// (0x0004aaf7) volume_small2_pane_g8

0x0f6a,	// (0x0004ab00) volume_small2_pane_g9

0x0f73,	// (0x0004ab09) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x000597c5) volume_small2_pane_g

0x5009,	// (0x0004eb9f) fep_vkb_top_text_pane_g1_ParamLimits

0xcee4,	// (0x00056a7a) fep_vkb_top_text_pane_t1_ParamLimits

0x52fe,	// (0x0004ee94) popup_preview_fixed_window_g3_ParamLimits

0x52fe,	// (0x0004ee94) popup_preview_fixed_window_g3

0xb85f,	// (0x000553f5) popup_toolbar_trans_pane

0xc8a1,	// (0x00056437) aid_height_set_list_ParamLimits

0x39bf,	// (0x0004d555) aid_size_parent_ParamLimits

0x04b5,	// (0x0004a04b) list_highlight_pane_cp2_ParamLimits

0xae31,	// (0x000549c7) set_content_pane_g1_ParamLimits

0x9a63,	// (0x000535f9) list_single_image_pane_ParamLimits

0x9a63,	// (0x000535f9) list_single_image_pane

0xd062,	// (0x00056bf8) aid_size_cell_image_ParamLimits

0xd062,	// (0x00056bf8) aid_size_cell_image

0xd06f,	// (0x00056c05) grid_single_image_pane_ParamLimits

0xd06f,	// (0x00056c05) grid_single_image_pane

0xa272,	// (0x00053e08) list_single_image_pane_g1_ParamLimits

0xa272,	// (0x00053e08) list_single_image_pane_g1

0xa27e,	// (0x00053e14) list_single_image_pane_g2_ParamLimits

0xa27e,	// (0x00053e14) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x000597da) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x000597da) list_single_image_pane_g

0x57d5,	// (0x0004f36b) list_single_image_pane_t1_ParamLimits

0x57d5,	// (0x0004f36b) list_single_image_pane_t1

0xd07d,	// (0x00056c13) cell_image_list_pane_ParamLimits

0xd07d,	// (0x00056c13) cell_image_list_pane

0xd091,	// (0x00056c27) cell_image_list_pane_g1

0xd09a,	// (0x00056c30) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x000597df) cell_image_list_pane_g

0x5813,	// (0x0004f3a9) aid_size_cell_tb_trans_pane

0xa264,	// (0x00053dfa) bg_tb_trans_pane

0x5825,	// (0x0004f3bb) grid_tb_trans_pane

0x25f6,	// (0x0004c18c) bg_tb_trans_pane_g1

0x25fe,	// (0x0004c194) bg_tb_trans_pane_g2

0x2606,	// (0x0004c19c) bg_tb_trans_pane_g3

0x260e,	// (0x0004c1a4) bg_tb_trans_pane_g4

0x2616,	// (0x0004c1ac) bg_tb_trans_pane_g5

0x262e,	// (0x0004c1c4) bg_tb_trans_pane_g6

0x2636,	// (0x0004c1cc) bg_tb_trans_pane_g7

0x261e,	// (0x0004c1b4) bg_tb_trans_pane_g8

0x2626,	// (0x0004c1bc) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x000597e4) bg_tb_trans_pane_g

0x5839,	// (0x0004f3cf) cell_toolbar_trans_pane_ParamLimits

0x5839,	// (0x0004f3cf) cell_toolbar_trans_pane

0x4c3a,	// (0x0004e7d0) cell_toolbar_trans_pane_g1

0xcca1,	// (0x00056837) list_form2_midp_pane_t1

0xccaf,	// (0x00056845) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x0005968d) list_form2_midp_pane_t

0x487a,	// (0x0004e410) scroll_pane_cp51_ParamLimits

0x4a41,	// (0x0004e5d7) form2_midp_wait_pane_g1

0x4a4a,	// (0x0004e5e0) form2_midp_wait_pane_g2

0x4a53,	// (0x0004e5e9) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x000596a2) form2_midp_wait_pane_g

0x6f9d,	// (0x00050b33) list_highlight_pane_cp21_ParamLimits

0x4a97,	// (0x0004e62d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4aa6,	// (0x0004e63c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3b97,	// (0x0004d72d) list_single_2graphic_im_pane_ParamLimits

0x3b97,	// (0x0004d72d) list_single_2graphic_im_pane

0xd0a3,	// (0x00056c39) list_single_2graphic_im_pane_g1_ParamLimits

0xd0a3,	// (0x00056c39) list_single_2graphic_im_pane_g1

0xd0b4,	// (0x00056c4a) list_single_2graphic_im_pane_g2_ParamLimits

0xd0b4,	// (0x00056c4a) list_single_2graphic_im_pane_g2

0xd0c0,	// (0x00056c56) list_single_2graphic_im_pane_g3_ParamLimits

0xd0c0,	// (0x00056c56) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x000597f7) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x000597f7) list_single_2graphic_im_pane_g

0xd0d4,	// (0x00056c6a) list_single_2graphic_im_pane_t1_ParamLimits

0xd0d4,	// (0x00056c6a) list_single_2graphic_im_pane_t1

0x530a,	// (0x0004eea0) list_single_graphic_2heading_pane_fp_ParamLimits

0x530a,	// (0x0004eea0) list_single_graphic_2heading_pane_fp

0xed83,	// (0x00058919) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xed83,	// (0x00058919) list_single_graphic_2heading_pane_fp_g1

0x5323,	// (0x0004eeb9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5323,	// (0x0004eeb9) list_single_graphic_2heading_pane_fp_g2

0x527c,	// (0x0004ee12) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x527c,	// (0x0004ee12) list_single_graphic_2heading_pane_fp_g3

0x5288,	// (0x0004ee1e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5288,	// (0x0004ee1e) list_single_graphic_2heading_pane_fp_g4

0x532f,	// (0x0004eec5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x532f,	// (0x0004eec5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059725) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059725) list_single_graphic_2heading_pane_fp_g

0xeeaa,	// (0x00058a40) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeeaa,	// (0x00058a40) list_single_graphic_2heading_pane_fp_t1

0xedbb,	// (0x00058951) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xedbb,	// (0x00058951) list_single_graphic_2heading_pane_fp_t2

0xeec0,	// (0x00058a56) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeec0,	// (0x00058a56) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x00059800) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x00059800) list_single_graphic_2heading_pane_fp_t

0x4ccb,	// (0x0004e861) fep_hwr_write_pane_g5_ParamLimits

0x4ccb,	// (0x0004e861) fep_hwr_write_pane_g5

0x4cd7,	// (0x0004e86d) fep_hwr_write_pane_g6_ParamLimits

0x4cd7,	// (0x0004e86d) fep_hwr_write_pane_g6

0x559d,	// (0x0004f133) eswt_shell_pane_ParamLimits

0x266a,	// (0x0004c200) bg_popup_window_pane_cp18_ParamLimits

0x3905,	// (0x0004d49b) heading_pane_cp70

0x56c7,	// (0x0004f25d) popup_eswt_tasktip_window_t1_ParamLimits

0xb929,	// (0x000554bf) aid_touch_tab_arrow_left

0xb93f,	// (0x000554d5) aid_touch_tab_arrow_right

0x6f4d,	// (0x00050ae3) title_pane_g3_ParamLimits

0x6f4d,	// (0x00050ae3) title_pane_g3

0xa223,	// (0x00053db9) set_value_pane_g1

0xb85f,	// (0x000553f5) popup_toolbar_trans_pane_ParamLimits

0x5813,	// (0x0004f3a9) aid_size_cell_tb_trans_pane_ParamLimits

0xa264,	// (0x00053dfa) bg_tb_trans_pane_ParamLimits

0x5825,	// (0x0004f3bb) grid_tb_trans_pane_ParamLimits

0x70de,	// (0x00050c74) cont_note_pane_ParamLimits

0x70de,	// (0x00050c74) cont_note_pane

0x733b,	// (0x00050ed1) cont_snote2_single_text_pane_ParamLimits

0x733b,	// (0x00050ed1) cont_snote2_single_text_pane

0x733b,	// (0x00050ed1) cont_snote2_single_graphic_pane_ParamLimits

0x733b,	// (0x00050ed1) cont_snote2_single_graphic_pane

0x2c46,	// (0x0004c7dc) cont_note_wait_pane_ParamLimits

0x2c46,	// (0x0004c7dc) cont_note_wait_pane

0x2c46,	// (0x0004c7dc) cont_note_image_pane_ParamLimits

0x2c46,	// (0x0004c7dc) cont_note_image_pane

0x58cd,	// (0x0004f463) popup_note2_window_g1_ParamLimits

0x58cd,	// (0x0004f463) popup_note2_window_g1

0x58fe,	// (0x0004f494) popup_note2_window_t1_ParamLimits

0x58fe,	// (0x0004f494) popup_note2_window_t1

0x5943,	// (0x0004f4d9) popup_note2_window_t2_ParamLimits

0x5943,	// (0x0004f4d9) popup_note2_window_t2

0x5988,	// (0x0004f51e) popup_note2_window_t3_ParamLimits

0x5988,	// (0x0004f51e) popup_note2_window_t3

0x59cd,	// (0x0004f563) popup_note2_window_t4_ParamLimits

0x59cd,	// (0x0004f563) popup_note2_window_t4

0x7162,	// (0x00050cf8) popup_note2_window_t5_ParamLimits

0x7162,	// (0x00050cf8) popup_note2_window_t5

0x0004,

0xfc76,	// (0x0005980c) popup_note2_window_t_ParamLimits

0xfc76,	// (0x0005980c) popup_note2_window_t

0x59fc,	// (0x0004f592) popup_note2_image_window_g1_ParamLimits

0x59fc,	// (0x0004f592) popup_note2_image_window_g1

0x5a08,	// (0x0004f59e) popup_note2_image_window_g2_ParamLimits

0x5a08,	// (0x0004f59e) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x00059817) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x00059817) popup_note2_image_window_g

0x5a1a,	// (0x0004f5b0) popup_note2_image_window_t1_ParamLimits

0x5a1a,	// (0x0004f5b0) popup_note2_image_window_t1

0x5a32,	// (0x0004f5c8) popup_note2_image_window_t2_ParamLimits

0x5a32,	// (0x0004f5c8) popup_note2_image_window_t2

0x5a4a,	// (0x0004f5e0) popup_note2_image_window_t3_ParamLimits

0x5a4a,	// (0x0004f5e0) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x0005981c) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x0005981c) popup_note2_image_window_t

0x2c54,	// (0x0004c7ea) popup_note2_wait_window_g1_ParamLimits

0x2c54,	// (0x0004c7ea) popup_note2_wait_window_g1

0x5a66,	// (0x0004f5fc) popup_note2_wait_window_g2_ParamLimits

0x5a66,	// (0x0004f5fc) popup_note2_wait_window_g2

0x2c6c,	// (0x0004c802) popup_note2_wait_window_g3_ParamLimits

0x2c6c,	// (0x0004c802) popup_note2_wait_window_g3

0x0002,

0xfc8d,	// (0x00059823) popup_note2_wait_window_g_ParamLimits

0xfc8d,	// (0x00059823) popup_note2_wait_window_g

0x5a72,	// (0x0004f608) popup_note2_wait_window_t1_ParamLimits

0x5a72,	// (0x0004f608) popup_note2_wait_window_t1

0x5a90,	// (0x0004f626) popup_note2_wait_window_t2_ParamLimits

0x5a90,	// (0x0004f626) popup_note2_wait_window_t2

0x5aae,	// (0x0004f644) popup_note2_wait_window_t3_ParamLimits

0x5aae,	// (0x0004f644) popup_note2_wait_window_t3

0x5ac0,	// (0x0004f656) popup_note2_wait_window_t4_ParamLimits

0x5ac0,	// (0x0004f656) popup_note2_wait_window_t4

0x0003,

0xfc94,	// (0x0005982a) popup_note2_wait_window_t_ParamLimits

0xfc94,	// (0x0005982a) popup_note2_wait_window_t

0x5ad2,	// (0x0004f668) wait_bar2_pane_ParamLimits

0x5ad2,	// (0x0004f668) wait_bar2_pane

0x5aea,	// (0x0004f680) popup_snote2_single_text_window_g1_ParamLimits

0x5aea,	// (0x0004f680) popup_snote2_single_text_window_g1

0x5b12,	// (0x0004f6a8) popup_snote2_single_text_window_t1_ParamLimits

0x5b12,	// (0x0004f6a8) popup_snote2_single_text_window_t1

0x5b5e,	// (0x0004f6f4) popup_snote2_single_text_window_t2_ParamLimits

0x5b5e,	// (0x0004f6f4) popup_snote2_single_text_window_t2

0x5baa,	// (0x0004f740) popup_snote2_single_text_window_t3_ParamLimits

0x5baa,	// (0x0004f740) popup_snote2_single_text_window_t3

0x5beb,	// (0x0004f781) popup_snote2_single_text_window_t4_ParamLimits

0x5beb,	// (0x0004f781) popup_snote2_single_text_window_t4

0x5c21,	// (0x0004f7b7) popup_snote2_single_text_window_t5_ParamLimits

0x5c21,	// (0x0004f7b7) popup_snote2_single_text_window_t5

0x0004,

0xfc9d,	// (0x00059833) popup_snote2_single_text_window_t_ParamLimits

0xfc9d,	// (0x00059833) popup_snote2_single_text_window_t

0x5c4c,	// (0x0004f7e2) popup_snote2_single_graphic_window_g1_ParamLimits

0x5c4c,	// (0x0004f7e2) popup_snote2_single_graphic_window_g1

0x5c74,	// (0x0004f80a) popup_snote2_single_graphic_window_g2_ParamLimits

0x5c74,	// (0x0004f80a) popup_snote2_single_graphic_window_g2

0x0001,

0xfca8,	// (0x0005983e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca8,	// (0x0005983e) popup_snote2_single_graphic_window_g

0x5c9c,	// (0x0004f832) popup_snote2_single_graphic_window_t1_ParamLimits

0x5c9c,	// (0x0004f832) popup_snote2_single_graphic_window_t1

0x5ce8,	// (0x0004f87e) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ce8,	// (0x0004f87e) popup_snote2_single_graphic_window_t2

0x5baa,	// (0x0004f740) popup_snote2_single_graphic_window_t3_ParamLimits

0x5baa,	// (0x0004f740) popup_snote2_single_graphic_window_t3

0x5beb,	// (0x0004f781) popup_snote2_single_graphic_window_t4_ParamLimits

0x5beb,	// (0x0004f781) popup_snote2_single_graphic_window_t4

0x5c21,	// (0x0004f7b7) popup_snote2_single_graphic_window_t5_ParamLimits

0x5c21,	// (0x0004f7b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcad,	// (0x00059843) popup_snote2_single_graphic_window_t_ParamLimits

0xfcad,	// (0x00059843) popup_snote2_single_graphic_window_t

0x472a,	// (0x0004e2c0) clock_nsta_pane_cp2_t1

0x472a,	// (0x0004e2c0) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x00059663) clock_nsta_pane_cp2_t

0xe6aa,	// (0x00058240) form_field_data_wide_pane_g1_ParamLimits

0xa272,	// (0x00053e08) form_field_data_wide_pane_g2_ParamLimits

0xa272,	// (0x00053e08) form_field_data_wide_pane_g2

0xa27e,	// (0x00053e14) form_field_data_wide_pane_g3_ParamLimits

0xa27e,	// (0x00053e14) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00059216) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00059216) form_field_data_wide_pane_g

0xcb9f,	// (0x00056735) grid_touch_3_pane_ParamLimits

0xcb9f,	// (0x00056735) grid_touch_3_pane

0xd105,	// (0x00056c9b) cell_touch_3_pane_ParamLimits

0xd105,	// (0x00056c9b) cell_touch_3_pane

0x4c3a,	// (0x0004e7d0) cell_touch_3_pane_g1

0x4c3a,	// (0x0004e7d0) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x000596e8) cell_touch_3_pane_g

0x7194,	// (0x00050d2a) cont_query_data_pane

0x719c,	// (0x00050d32) cont_query_data_pane_cp1

0x5d67,	// (0x0004f8fd) button_value_adjust_pane_cp7

0x5d6f,	// (0x0004f905) query_popup_pane_cp3

0xaa1b,	// (0x000545b1) bg_popup_sub_pane_cp22_ParamLimits

0xf3ab,	// (0x00058f41) navi_navi_volume_pane_cp2

0xf3c6,	// (0x00058f5c) popup_side_volume_key_window_g2

0xf3d5,	// (0x00058f6b) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000592ac) popup_side_volume_key_window_g

0xf3f2,	// (0x00058f88) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x000592b3) popup_side_volume_key_window_t

0xacec,	// (0x00054882) popup_side_volume_key_window_ParamLimits

0x953f,	// (0x000530d5) list_double_graphic_pane_g4_ParamLimits

0x953f,	// (0x000530d5) list_double_graphic_pane_g4

0xbf19,	// (0x00055aaf) list_single_2heading_msg_pane_ParamLimits

0xbf19,	// (0x00055aaf) list_single_2heading_msg_pane

0xbf7b,	// (0x00055b11) list_single_2heading_msg_pane_g1_ParamLimits

0xbf7b,	// (0x00055b11) list_single_2heading_msg_pane_g1

0xbf87,	// (0x00055b1d) list_single_2heading_msg_pane_g2_ParamLimits

0xbf87,	// (0x00055b1d) list_single_2heading_msg_pane_g2

0xbf9a,	// (0x00055b30) list_single_2heading_msg_pane_g3_ParamLimits

0xbf9a,	// (0x00055b30) list_single_2heading_msg_pane_g3

0xbfa6,	// (0x00055b3c) list_single_2heading_msg_pane_g4_ParamLimits

0xbfa6,	// (0x00055b3c) list_single_2heading_msg_pane_g4

0x0003,

0xfcb8,	// (0x0005984e) list_single_2heading_msg_pane_g_ParamLimits

0xfcb8,	// (0x0005984e) list_single_2heading_msg_pane_g

0x9a96,	// (0x0005362c) list_single_2heading_msg_pane_t1_ParamLimits

0x9a96,	// (0x0005362c) list_single_2heading_msg_pane_t1

0x9abe,	// (0x00053654) list_single_2heading_msg_pane_t2_ParamLimits

0x9abe,	// (0x00053654) list_single_2heading_msg_pane_t2

0x9b29,	// (0x000536bf) list_single_2heading_msg_pane_t3_ParamLimits

0x9b29,	// (0x000536bf) list_single_2heading_msg_pane_t3

0xf14b,	// (0x00058ce1) list_single_2heading_msg_pane_t4_ParamLimits

0xf14b,	// (0x00058ce1) list_single_2heading_msg_pane_t4

0x0003,

0xfcc1,	// (0x00059857) list_single_2heading_msg_pane_t_ParamLimits

0xfcc1,	// (0x00059857) list_single_2heading_msg_pane_t

0x6f59,	// (0x00050aef) title_pane_g4_ParamLimits

0x6f59,	// (0x00050aef) title_pane_g4

0xf1c0,	// (0x00058d56) title_pane_stacon_g3_ParamLimits

0xf1c0,	// (0x00058d56) title_pane_stacon_g3

0x5890,	// (0x0004f426) list_single_2graphic_im_pane_g4_ParamLimits

0x5890,	// (0x0004f426) list_single_2graphic_im_pane_g4

0x36b6,	// (0x0004d24c) popup_side_volume_key_window_cp

0x3f24,	// (0x0004daba) main_idle_act2_pane_t1

0x061f,	// (0x0004a1b5) toolbar_button_pane_g10

0xa195,	// (0x00053d2b) popup_toolbar_window_cp1

0x471b,	// (0x0004e2b1) clock_nsta_pane_cp_t1

0x471b,	// (0x0004e2b1) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x0005965e) clock_nsta_pane_cp_t

0xf3ab,	// (0x00058f41) navi_navi_volume_pane_cp2_ParamLimits

0xf3ba,	// (0x00058f50) popup_side_volume_key_window_g1_ParamLimits

0xf3c6,	// (0x00058f5c) popup_side_volume_key_window_g2_ParamLimits

0xf3d5,	// (0x00058f6b) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000592ac) popup_side_volume_key_window_g_ParamLimits

0x0b82,	// (0x0004a718) fep_hwr_aid_pane

0xcd98,	// (0x0005692e) bg_fep_hwr_top_pane_g4_ParamLimits

0x4c9b,	// (0x0004e831) fep_hwr_top_pane_g1_ParamLimits

0x4cad,	// (0x0004e843) fep_hwr_top_pane_g2_ParamLimits

0x0c3d,	// (0x0004a7d3) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x000596b3) fep_hwr_top_pane_g_ParamLimits

0x0c52,	// (0x0004a7e8) fep_hwr_top_text_pane_ParamLimits

0x346b,	// (0x0004d001) aid_touch_tab_arrow_arrow_2

0x3474,	// (0x0004d00a) aid_touch_tab_arrow_left_2

0x0b96,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0bcd,	// (0x0004a763) fep_hwr_prediction_pane

0x4e03,	// (0x0004e999) fep_vkb_prediction_pane

0xcec4,	// (0x00056a5a) fep_vkb_side_pane_g3_ParamLimits

0xcec4,	// (0x00056a5a) fep_vkb_side_pane_g3

0x4eb5,	// (0x0004ea4b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5383,	// (0x0004ef19) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5390,	// (0x0004ef26) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x0005975d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5d96,	// (0x0004f92c) fep_hwr_prediction_pane_g1

0x0fac,	// (0x0004ab42) fep_hwr_prediction_pane_g2

0x0fb4,	// (0x0004ab4a) fep_hwr_prediction_pane_g3

0x0fbc,	// (0x0004ab52) fep_hwr_prediction_pane_g4

0x0003,

0xfcca,	// (0x00059860) fep_hwr_prediction_pane_g

0x5d96,	// (0x0004f92c) fep_vkb_prediction_pane_g1

0x5da0,	// (0x0004f936) fep_vkb_prediction_pane_g2

0x5da8,	// (0x0004f93e) fep_vkb_prediction_pane_g3

0x5db0,	// (0x0004f946) fep_vkb_prediction_pane_g4

0x0003,

0xfcd3,	// (0x00059869) fep_vkb_prediction_pane_g

0x092c,	// (0x0004a4c2) slider_set_pane_g3

0x0940,	// (0x0004a4d6) slider_set_pane_g4

0x0958,	// (0x0004a4ee) slider_set_pane_g5

0x092c,	// (0x0004a4c2) slider_set_pane_g6

0x096e,	// (0x0004a504) slider_set_pane_g7

0x3b44,	// (0x0004d6da) slider_form_pane_g3

0x3b4d,	// (0x0004d6e3) slider_form_pane_g4

0x3b55,	// (0x0004d6eb) slider_form_pane_g5

0x3b44,	// (0x0004d6da) slider_form_pane_g6

0xca10,	// (0x000565a6) slider_form_pane_g7

0x41db,	// (0x0004dd71) slider_set_pane_vc_g3

0x41e4,	// (0x0004dd7a) slider_set_pane_vc_g4

0x41ed,	// (0x0004dd83) slider_set_pane_vc_g5

0x41db,	// (0x0004dd71) slider_set_pane_vc_g6

0x41f6,	// (0x0004dd8c) slider_set_pane_vc_g7

0x43ce,	// (0x0004df64) slider_form_pane_vc_g1

0x43d7,	// (0x0004df6d) slider_form_pane_vc_g2

0x43e0,	// (0x0004df76) slider_form_pane_vc_g3

0x43ce,	// (0x0004df64) slider_form_pane_vc_g4

0x43e9,	// (0x0004df7f) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x00059630) slider_form_pane_vc_g

0x6f2f,	// (0x00050ac5) main_idle_act3_pane

0x5db8,	// (0x0004f94e) ai3_links_pane

0xd14f,	// (0x00056ce5) popup_ai3_data_window_ParamLimits

0xd14f,	// (0x00056ce5) popup_ai3_data_window

0x6f2f,	// (0x00050ac5) grid_ai3_links_pane

0xd16d,	// (0x00056d03) cell_ai3_links_pane_ParamLimits

0xd16d,	// (0x00056d03) cell_ai3_links_pane

0x5df9,	// (0x0004f98f) bg_popup_sub_pane_cp11

0x5e06,	// (0x0004f99c) cell_ai3_links_pane_g1

0x6f2f,	// (0x00050ac5) bg_popup_sub_pane_cp12

0x5e2b,	// (0x0004f9c1) heading_ai3_data_pane

0x5e33,	// (0x0004f9c9) list_ai3_gene_pane

0x5e3f,	// (0x0004f9d5) popup_ai3_data_window_g1

0x5e47,	// (0x0004f9dd) heading_ai3_data_pane_g1

0x5e4f,	// (0x0004f9e5) heading_ai3_data_pane_t1

0x5e5d,	// (0x0004f9f3) list_double_ai3_gene_pane_ParamLimits

0x5e5d,	// (0x0004f9f3) list_double_ai3_gene_pane

0x5e6a,	// (0x0004fa00) list_single_ai3_gene_pane_ParamLimits

0x5e6a,	// (0x0004fa00) list_single_ai3_gene_pane

0x4bff,	// (0x0004e795) list_highlight_pane_cp7_ParamLimits

0x4bff,	// (0x0004e795) list_highlight_pane_cp7

0x5e77,	// (0x0004fa0d) list_single_a13_gene_pane_t1_ParamLimits

0x5e77,	// (0x0004fa0d) list_single_a13_gene_pane_t1

0x5e8e,	// (0x0004fa24) list_single_ai3_gene_pane_g1

0x5e97,	// (0x0004fa2d) list_single_ai3_gene_pane_g2

0x0001,

0xfcdc,	// (0x00059872) list_single_ai3_gene_pane_g

0x5e9f,	// (0x0004fa35) list_double_ai3_gene_pane_g1_ParamLimits

0x5e9f,	// (0x0004fa35) list_double_ai3_gene_pane_g1

0x5eab,	// (0x0004fa41) list_double_ai3_gene_pane_t1_ParamLimits

0x5eab,	// (0x0004fa41) list_double_ai3_gene_pane_t1

0x5ec7,	// (0x0004fa5d) list_double_ai3_gene_pane_t2_ParamLimits

0x5ec7,	// (0x0004fa5d) list_double_ai3_gene_pane_t2

0x5edc,	// (0x0004fa72) list_double_ai3_gene_pane_t3_ParamLimits

0x5edc,	// (0x0004fa72) list_double_ai3_gene_pane_t3

0x0002,

0xfce1,	// (0x00059877) list_double_ai3_gene_pane_t_ParamLimits

0xfce1,	// (0x00059877) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeed6,	// (0x00058a6c) aid_size_min_col_2

0xd139,	// (0x00056ccf) aid_size_min_msg_ParamLimits

0xd139,	// (0x00056ccf) aid_size_min_msg

0xced8,	// (0x00056a6e) fep_vkb_top_text_pane_g2_ParamLimits

0xced8,	// (0x00056a6e) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x000596e3) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x000596e3) fep_vkb_top_text_pane_g

0x6f2f,	// (0x00050ac5) main_hc_apps_shell_pane

0x5ef9,	// (0x0004fa8f) grid_hc_apps_pane_ParamLimits

0x5ef9,	// (0x0004fa8f) grid_hc_apps_pane

0x5f08,	// (0x0004fa9e) list_hc_apps_pane

0x5f10,	// (0x0004faa6) scroll_pane_cp37_ParamLimits

0x5f10,	// (0x0004faa6) scroll_pane_cp37

0xd187,	// (0x00056d1d) cell_hc_apps_pane_ParamLimits

0xd187,	// (0x00056d1d) cell_hc_apps_pane

0xd251,	// (0x00056de7) cell_hc_apps_pane_g1_ParamLimits

0xd251,	// (0x00056de7) cell_hc_apps_pane_g1

0x6005,	// (0x0004fb9b) cell_hc_apps_pane_g2_ParamLimits

0x6005,	// (0x0004fb9b) cell_hc_apps_pane_g2

0x6021,	// (0x0004fbb7) cell_hc_apps_pane_g3_ParamLimits

0x6021,	// (0x0004fbb7) cell_hc_apps_pane_g3

0x0002,

0xfce8,	// (0x0005987e) cell_hc_apps_pane_g_ParamLimits

0xfce8,	// (0x0005987e) cell_hc_apps_pane_g

0xd27e,	// (0x00056e14) cell_hc_apps_pane_t1_ParamLimits

0xd27e,	// (0x00056e14) cell_hc_apps_pane_t1

0x70de,	// (0x00050c74) grid_highlight_pane_cp10_ParamLimits

0x70de,	// (0x00050c74) grid_highlight_pane_cp10

0xd2be,	// (0x00056e54) list_single_hc_apps_pane_ParamLimits

0xd2be,	// (0x00056e54) list_single_hc_apps_pane

0xd2f8,	// (0x00056e8e) list_single_hc_apps_pane_g1

0xbfbe,	// (0x00055b54) list_single_hc_apps_pane_g2

0x0001,

0xfcef,	// (0x00059885) list_single_hc_apps_pane_g

0xbfd7,	// (0x00055b6d) list_single_hc_apps_pane_g2_copy1

0x9b97,	// (0x0005372d) list_single_hc_apps_pane_t1

0x6f9d,	// (0x00050b33) bg_set_opt_pane_cp_ParamLimits

0xf0ad,	// (0x00058c43) setting_slider_pane_t1_ParamLimits

0xf0c6,	// (0x00058c5c) setting_slider_pane_t2_ParamLimits

0xf0e0,	// (0x00058c76) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000590f4) setting_slider_pane_t_ParamLimits

0xf0f8,	// (0x00058c8e) slider_set_pane_ParamLimits

0x0322,	// (0x00049eb8) control_pane_g5_ParamLimits

0x0322,	// (0x00049eb8) control_pane_g5

0x3971,	// (0x0004d507) slider_set_pane_g1_ParamLimits

0x0920,	// (0x0004a4b6) slider_set_pane_g2_ParamLimits

0x092c,	// (0x0004a4c2) slider_set_pane_g3_ParamLimits

0x0940,	// (0x0004a4d6) slider_set_pane_g4_ParamLimits

0x0958,	// (0x0004a4ee) slider_set_pane_g5_ParamLimits

0x092c,	// (0x0004a4c2) slider_set_pane_g6_ParamLimits

0x096e,	// (0x0004a504) slider_set_pane_g7_ParamLimits

0xf964,	// (0x000594fa) slider_set_pane_g_ParamLimits

0xaddc,	// (0x00054972) navi_icon_text_pane_ParamLimits

0xb8f0,	// (0x00055486) aid_fill_nsta_2_ParamLimits

0xb929,	// (0x000554bf) aid_touch_tab_arrow_left_ParamLimits

0xb93f,	// (0x000554d5) aid_touch_tab_arrow_right_ParamLimits

0xb9da,	// (0x00055570) clock_nsta_pane_ParamLimits

0xc74e,	// (0x000562e4) navi_icon_pane_g1_ParamLimits

0xc75a,	// (0x000562f0) navi_text_pane_t1_ParamLimits

0xcc83,	// (0x00056819) navi_icon_text_pane_g1_ParamLimits

0xcc8f,	// (0x00056825) navi_icon_text_pane_t1_ParamLimits

0xd2f8,	// (0x00056e8e) list_single_hc_apps_pane_g1_ParamLimits

0xbfbe,	// (0x00055b54) list_single_hc_apps_pane_g2_ParamLimits

0xfcef,	// (0x00059885) list_single_hc_apps_pane_g_ParamLimits

0xbfd7,	// (0x00055b6d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9b97,	// (0x0005372d) list_single_hc_apps_pane_t1_ParamLimits

0x9d1b,	// (0x000538b1) popup_toolbar2_fixed_window_ParamLimits

0x9d1b,	// (0x000538b1) popup_toolbar2_fixed_window

0xb855,	// (0x000553eb) popup_toolbar2_float_window

0x6f2f,	// (0x00050ac5) bg_popup_sub_pane_cp27

0x60db,	// (0x0004fc71) grid_toolbar2_float_pane

0x6f2f,	// (0x00050ac5) bg_popup_sub_pane_cp26

0x60db,	// (0x0004fc71) grid_toolbar2_fixed_pane

0xd311,	// (0x00056ea7) cell_toolbar2_fixed_pane_ParamLimits

0xd311,	// (0x00056ea7) cell_toolbar2_fixed_pane

0xd32e,	// (0x00056ec4) cell_toolbar2_fixed_pane_g1

0x60fc,	// (0x0004fc92) toolbar2_fixed_button_pane

0x25f6,	// (0x0004c18c) toolbar2_fixed_button_pane_g1

0x25fe,	// (0x0004c194) toolbar2_fixed_button_pane_g2

0x2606,	// (0x0004c19c) toolbar2_fixed_button_pane_g3

0x260e,	// (0x0004c1a4) toolbar2_fixed_button_pane_g4

0x2616,	// (0x0004c1ac) toolbar2_fixed_button_pane_g5

0x261e,	// (0x0004c1b4) toolbar2_fixed_button_pane_g6

0x2626,	// (0x0004c1bc) toolbar2_fixed_button_pane_g7

0x262e,	// (0x0004c1c4) toolbar2_fixed_button_pane_g8

0x2636,	// (0x0004c1cc) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x000593fc) toolbar2_fixed_button_pane_g

0x6104,	// (0x0004fc9a) cell_toolbar2_float_pane_ParamLimits

0x6104,	// (0x0004fc9a) cell_toolbar2_float_pane

0x6115,	// (0x0004fcab) cell_toolbar2_float_pane_g1

0x60fc,	// (0x0004fc92) toolbar2_fixed_button_pane_cp

0xcdc0,	// (0x00056956) fep_vkb_accented_list_pane_ParamLimits

0xcdc0,	// (0x00056956) fep_vkb_accented_list_pane

0x0db4,	// (0x0004a94a) bg_popup_fep_shadow_pane_g9

0xe7f5,	// (0x0005838b) bg_popup_fep_shadow_pane_cp3

0xa3c1,	// (0x00053f57) list_accented_list_pane

0x611e,	// (0x0004fcb4) list_single_accented_list_pane_ParamLimits

0x611e,	// (0x0004fcb4) list_single_accented_list_pane

0xe7f5,	// (0x0005838b) list_highlight_pane_cp10

0x612f,	// (0x0004fcc5) list_single_accented_list_pane_t1

0xb771,	// (0x00055307) popup_slider_window_ParamLimits

0xb771,	// (0x00055307) popup_slider_window

0x5d77,	// (0x0004f90d) aid_indentation_list_msg

0xd439,	// (0x00056fcf) bg_popup_window_pane_cp19

0x6269,	// (0x0004fdff) popup_slider_window_g1

0x6285,	// (0x0004fe1b) popup_slider_window_g2

0x62a1,	// (0x0004fe37) popup_slider_window_g3

0x0005,

0xfcf4,	// (0x0005988a) popup_slider_window_g

0x62fd,	// (0x0004fe93) popup_slider_window_t1

0x6371,	// (0x0004ff07) small_volume_slider_vertical_pane

0x4c3a,	// (0x0004e7d0) small_volume_slider_vertical_pane_g1

0x4c3a,	// (0x0004e7d0) small_volume_slider_vertical_pane_g2

0x638d,	// (0x0004ff23) small_volume_slider_vertical_pane_g3

0x0002,

0xfd06,	// (0x0005989c) small_volume_slider_vertical_pane_g

0x9c85,	// (0x0005381b) area_side_right_pane_ParamLimits

0x9c85,	// (0x0005381b) area_side_right_pane

0xbff3,	// (0x00055b89) aid_size_side_button_ParamLimits

0xbff3,	// (0x00055b89) aid_size_side_button

0xc00c,	// (0x00055ba2) grid_sctrl_middle_pane_ParamLimits

0xc00c,	// (0x00055ba2) grid_sctrl_middle_pane

0x102d,	// (0x0004abc3) sctrl_sk_bottom_pane

0x103e,	// (0x0004abd4) sctrl_sk_top_pane

0x1050,	// (0x0004abe6) aid_touch_sctrl_top

0x70de,	// (0x00050c74) bg_sctrl_sk_pane_ParamLimits

0x70de,	// (0x00050c74) bg_sctrl_sk_pane

0x105d,	// (0x0004abf3) sctrl_sk_top_pane_g1

0x106a,	// (0x0004ac00) sctrl_sk_top_pane_t1

0x1050,	// (0x0004abe6) aid_touch_sctrl_bottom

0x70de,	// (0x00050c74) bg_sctrl_sk_pane_cp_ParamLimits

0x70de,	// (0x00050c74) bg_sctrl_sk_pane_cp

0x1085,	// (0x0004ac1b) sctrl_sk_bottom_pane_g1

0x106a,	// (0x0004ac00) sctrl_sk_bottom_pane_t1

0xc026,	// (0x00055bbc) cell_sctrl_middle_pane_ParamLimits

0xc026,	// (0x00055bbc) cell_sctrl_middle_pane

0xc039,	// (0x00055bcf) aid_touch_sctrl_middle_ParamLimits

0xc039,	// (0x00055bcf) aid_touch_sctrl_middle

0xc046,	// (0x00055bdc) bg_sctrl_middle_pane_ParamLimits

0xc046,	// (0x00055bdc) bg_sctrl_middle_pane

0x6418,	// (0x0004ffae) cell_sctrl_middle_pane_g1_ParamLimits

0x6418,	// (0x0004ffae) cell_sctrl_middle_pane_g1

0xc054,	// (0x00055bea) cell_sctrl_middle_pane_g2_ParamLimits

0xc054,	// (0x00055bea) cell_sctrl_middle_pane_g2

0x0001,

0xfd12,	// (0x000598a8) cell_sctrl_middle_pane_g_ParamLimits

0xfd12,	// (0x000598a8) cell_sctrl_middle_pane_g

0x25f6,	// (0x0004c18c) bg_sctrl_middle_pane_g1

0x25fe,	// (0x0004c194) bg_sctrl_middle_pane_g2

0x2606,	// (0x0004c19c) bg_sctrl_middle_pane_g3

0x260e,	// (0x0004c1a4) bg_sctrl_middle_pane_g4

0x2616,	// (0x0004c1ac) bg_sctrl_middle_pane_g5

0x261e,	// (0x0004c1b4) bg_sctrl_middle_pane_g6

0x2626,	// (0x0004c1bc) bg_sctrl_middle_pane_g7

0x262e,	// (0x0004c1c4) bg_sctrl_middle_pane_g8

0x0007,

0xfd17,	// (0x000598ad) bg_sctrl_middle_pane_g

0x2636,	// (0x0004c1cc) bg_sctrl_middle_pane_g8_copy1

0x25f6,	// (0x0004c18c) bg_sctrl_sk_pane_g1

0x25fe,	// (0x0004c194) bg_sctrl_sk_pane_g2

0x2606,	// (0x0004c19c) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x000593fc) bg_sctrl_sk_pane_g

0x74f9,	// (0x0005108f) aid_size_touch_scroll_bar

0x260e,	// (0x0004c1a4) bg_sctrl_sk_pane_g4

0x2616,	// (0x0004c1ac) bg_sctrl_sk_pane_g5

0x261e,	// (0x0004c1b4) bg_sctrl_sk_pane_g6

0x2626,	// (0x0004c1bc) bg_sctrl_sk_pane_g7

0x262e,	// (0x0004c1c4) bg_sctrl_sk_pane_g8

0x2636,	// (0x0004c1cc) bg_sctrl_sk_pane_g9

0x0563,	// (0x0004a0f9) popup_fep_china_hwr2_fs_candidate_window

0xb229,	// (0x00054dbf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb229,	// (0x00054dbf) popup_fep_china_hwr2_fs_control_window

0x4eb5,	// (0x0004ea4b) sctrl_sk_top_pane_g2

0x0001,

0xfd0d,	// (0x000598a3) sctrl_sk_top_pane_g

0xd4f1,	// (0x00057087) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd4f1,	// (0x00057087) aid_fep_china_hwr2_fs_cell

0xd507,	// (0x0005709d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd507,	// (0x0005709d) bg_popup_fep_shadow_pane_cp4

0xd51e,	// (0x000570b4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd51e,	// (0x000570b4) bg_popup_fep_shadow_pane_cp5

0xd530,	// (0x000570c6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd530,	// (0x000570c6) popup_fep_china_hwr2_fs_control_bar_grid

0xd544,	// (0x000570da) popup_fep_china_hwr2_fs_control_funtion_grid

0x63ec,	// (0x0004ff82) aid_fep_china_hwr2_fs_candi_cell

0x6f2f,	// (0x00050ac5) bg_popup_fep_shadow_pane_cp6

0x63f6,	// (0x0004ff8c) popup_fep_china_hwr2_fs_candidate_grid

0xd54c,	// (0x000570e2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd54c,	// (0x000570e2) cell_fep_china_hwr2_fs_funtion_grid

0x4c3a,	// (0x0004e7d0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6418,	// (0x0004ffae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6418,	// (0x0004ffae) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6426,	// (0x0004ffbc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6426,	// (0x0004ffbc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd28,	// (0x000598be) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd28,	// (0x000598be) cell_fep_china_hwr2_fs_funtion_grid_g

0xd564,	// (0x000570fa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd564,	// (0x000570fa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd579,	// (0x0005710f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd579,	// (0x0005710f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2d,	// (0x000598c3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2d,	// (0x000598c3) cell_fep_china_hwr2_fs_funtion_grid_t

0x646d,	// (0x00050003) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6475,	// (0x0005000b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x647d,	// (0x00050013) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd32,	// (0x000598c8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6485,	// (0x0005001b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6485,	// (0x0005001b) cell_fep_china_hwr2_fs_candidate_grid

0x64a4,	// (0x0005003a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x64ac,	// (0x00050042) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4c3a,	// (0x0004e7d0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4c3a,	// (0x0004e7d0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x000596e8) cell_fep_china_hwr2_fs_candidate_grid_g

0x64b4,	// (0x0005004a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x21d2,	// (0x0004bd68) clock_nsta_pane_cp_24_ParamLimits

0x21d2,	// (0x0004bd68) clock_nsta_pane_cp_24

0x2252,	// (0x0004bde8) indicator_nsta_pane_cp_24_ParamLimits

0x2252,	// (0x0004bde8) indicator_nsta_pane_cp_24

0x32c9,	// (0x0004ce5f) heading_pane_g1

0x0001,

0xf8cb,	// (0x00059461) heading_pane_g

0x3d6b,	// (0x0004d901) grid_sct_catagory_button_pane

0x3d9d,	// (0x0004d933) scroll_pane_cp5_ParamLimits

0x4886,	// (0x0004e41c) button_value_adjust_pane_cp5_ParamLimits

0x4886,	// (0x0004e41c) button_value_adjust_pane_cp5

0x496b,	// (0x0004e501) form2_midp_time_pane_ParamLimits

0x64c2,	// (0x00050058) cell_sct_catagory_button_pane_ParamLimits

0x64c2,	// (0x00050058) cell_sct_catagory_button_pane

0x4bff,	// (0x0004e795) bg_button_pane_cp01_ParamLimits

0x4bff,	// (0x0004e795) bg_button_pane_cp01

0x4c3a,	// (0x0004e7d0) cell_sct_catagory_button_pane_g1

0xb7f2,	// (0x00055388) popup_tb_extension_window

0xd595,	// (0x0005712b) aid_size_cell_ext_ParamLimits

0xd595,	// (0x0005712b) aid_size_cell_ext

0x733b,	// (0x00050ed1) bg_tb_trans_pane_cp1_ParamLimits

0x733b,	// (0x00050ed1) bg_tb_trans_pane_cp1

0xd5bb,	// (0x00057151) grid_tb_ext_pane_ParamLimits

0xd5bb,	// (0x00057151) grid_tb_ext_pane

0xd5fb,	// (0x00057191) cell_tb_ext_pane_ParamLimits

0xd5fb,	// (0x00057191) cell_tb_ext_pane

0xd623,	// (0x000571b9) cell_tb_ext_pane_g1_ParamLimits

0xd623,	// (0x000571b9) cell_tb_ext_pane_g1

0x6558,	// (0x000500ee) cell_tb_ext_pane_t1

0x70de,	// (0x00050c74) list_highlight_pane_cp11_ParamLimits

0x70de,	// (0x00050c74) list_highlight_pane_cp11

0x9d30,	// (0x000538c6) popup_uni_indicator_window_ParamLimits

0x9d30,	// (0x000538c6) popup_uni_indicator_window

0xa264,	// (0x00053dfa) bg_popup_sub_pane_cp14

0x6573,	// (0x00050109) list_uniindi_pane

0x657f,	// (0x00050115) uniindi_top_pane

0x70de,	// (0x00050c74) bg_uniindi_top_pane

0x65a0,	// (0x00050136) uniindi_top_pane_g1

0x65b6,	// (0x0005014c) uniindi_top_pane_g2

0x0003,

0xfd39,	// (0x000598cf) uniindi_top_pane_g

0x65e0,	// (0x00050176) uniindi_top_pane_t1

0x660c,	// (0x000501a2) list_single_uniindi_pane_ParamLimits

0x660c,	// (0x000501a2) list_single_uniindi_pane

0x4c3a,	// (0x0004e7d0) bg_uniindi_top_pane_g1

0x661e,	// (0x000501b4) list_single_uniindi_pane_g1

0x6631,	// (0x000501c7) list_single_uniindi_pane_t1

0x6f2f,	// (0x00050ac5) control_bg_pane

0x6656,	// (0x000501ec) bg_sctrl_sk_pane_cp1

0x665f,	// (0x000501f5) bg_sctrl_sk_pane_cp2

0x6668,	// (0x000501fe) control_bg_pane_g1

0x6671,	// (0x00050207) control_bg_pane_g2

0x0001,

0xfd42,	// (0x000598d8) control_bg_pane_g

0x46ad,	// (0x0004e243) cell_indicator_nsta_pane_g1_ParamLimits

0xcbdc,	// (0x00056772) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x0005964c) cell_indicator_nsta_pane_g_ParamLimits

0xed59,	// (0x000588ef) form2_midp_time_pane_t1_ParamLimits

0x8a11,	// (0x000525a7) main_idle_act4_pane_ParamLimits

0x8a11,	// (0x000525a7) main_idle_act4_pane

0xb7f2,	// (0x00055388) popup_tb_extension_window_ParamLimits

0xd5e3,	// (0x00057179) tb_ext_find_pane_ParamLimits

0xd5e3,	// (0x00057179) tb_ext_find_pane

0x667a,	// (0x00050210) ai_gene_pane_1_cp1

0xe87b,	// (0x00058411) ai_gene_pane_2_cp1

0x6682,	// (0x00050218) list_single_idle_plugin_calendar_pane

0x668b,	// (0x00050221) list_single_idle_plugin_notification_pane

0x6694,	// (0x0005022a) list_single_idle_plugin_player_pane

0xd640,	// (0x000571d6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd640,	// (0x000571d6) list_single_idle_plugin_shortcut_pane

0xd668,	// (0x000571fe) main_idle_act4_pane_t1

0xd680,	// (0x00057216) main_idle_act4_pane_t2

0x0001,

0xfd47,	// (0x000598dd) main_idle_act4_pane_t

0xd698,	// (0x0005722e) middle_sk_idle_act4_pane_ParamLimits

0xd698,	// (0x0005722e) middle_sk_idle_act4_pane

0xd6b4,	// (0x0005724a) popup_clock_digital_analogue_window_cp2

0xd6db,	// (0x00057271) shortcut_wheel_idle_act4_pane_ParamLimits

0xd6db,	// (0x00057271) shortcut_wheel_idle_act4_pane

0x4c3a,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g1

0x4c3a,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g2

0x4c3a,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g3

0x4c3a,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g4

0x4c3a,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g5

0x6727,	// (0x000502bd) shortcut_wheel_idle_act4_pane_g6

0x672f,	// (0x000502c5) shortcut_wheel_idle_act4_pane_g7

0x6737,	// (0x000502cd) shortcut_wheel_idle_act4_pane_g8

0x673f,	// (0x000502d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4c,	// (0x000598e2) shortcut_wheel_idle_act4_pane_g

0xcd98,	// (0x0005692e) middle_sk_idle_act4_pane_g1_ParamLimits

0xcd98,	// (0x0005692e) middle_sk_idle_act4_pane_g1

0xd758,	// (0x000572ee) middle_sk_idle_act4_pane_g2_ParamLimits

0xd758,	// (0x000572ee) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6f,	// (0x00059905) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6f,	// (0x00059905) middle_sk_idle_act4_pane_g

0xd770,	// (0x00057306) middle_sk_idle_act4_pane_t1_ParamLimits

0xd770,	// (0x00057306) middle_sk_idle_act4_pane_t1

0xd79f,	// (0x00057335) grid_ai_shortcut_pane_ParamLimits

0xd79f,	// (0x00057335) grid_ai_shortcut_pane

0xd7bc,	// (0x00057352) list_highlight_pane_cp16_ParamLimits

0xd7bc,	// (0x00057352) list_highlight_pane_cp16

0xd7c9,	// (0x0005735f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7c9,	// (0x0005735f) list_single_idle_plugin_shortcut_pane_g1

0xd7d5,	// (0x0005736b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7d5,	// (0x0005736b) list_single_idle_plugin_shortcut_pane_g2

0xd7f3,	// (0x00057389) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd7f3,	// (0x00057389) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd74,	// (0x0005990a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd74,	// (0x0005990a) list_single_idle_plugin_shortcut_pane_g

0xd808,	// (0x0005739e) cell_ai_shortcut_pane_ParamLimits

0xd808,	// (0x0005739e) cell_ai_shortcut_pane

0xd81e,	// (0x000573b4) cell_ai_shortcut_pane_g1_ParamLimits

0xd81e,	// (0x000573b4) cell_ai_shortcut_pane_g1

0x667a,	// (0x00050210) ai_gene_pane_1_cp2

0x6870,	// (0x00050406) ai_gene_pane_2_cp2

0x6878,	// (0x0005040e) list_highlight_pane_cp15

0x6881,	// (0x00050417) list_single_idle_plugin_calendar_pane_g1

0x6878,	// (0x0005040e) list_highlight_pane_cp17

0x6889,	// (0x0005041f) list_single_idle_plugin_calendar_pane_g1_copy1

0x6891,	// (0x00050427) list_single_idle_plugin_player_pane_g1

0x3fd2,	// (0x0004db68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7b,	// (0x00059911) list_single_idle_plugin_player_pane_g

0x6899,	// (0x0005042f) list_single_idle_plugin_player_pane_t1

0x68a7,	// (0x0005043d) list_single_idle_plugin_player_pane_t2

0x68b5,	// (0x0005044b) list_single_idle_plugin_player_pane_t3

0x68c3,	// (0x00050459) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd80,	// (0x00059916) list_single_idle_plugin_player_pane_t

0x68d1,	// (0x00050467) wait_bar_pane_cp15

0x68d9,	// (0x0005046f) grid_ai_notification_pane

0x3fd2,	// (0x0004db68) list_single_idle_plugin_notification_pane_g1

0xd840,	// (0x000573d6) cell_ai_notification_pane_ParamLimits

0xd840,	// (0x000573d6) cell_ai_notification_pane

0x68ef,	// (0x00050485) cell_ai_notification_pane_g1

0x68f7,	// (0x0005048d) cell_ai_notification_pane_t1

0xd84d,	// (0x000573e3) tb_ext_find_button_pane

0xd855,	// (0x000573eb) tb_ext_find_pane_g1

0xd85d,	// (0x000573f3) tb_ext_find_pane_t1

0xa916,	// (0x000544ac) tb_ext_find_button_pane_g1

0x6923,	// (0x000504b9) tb_ext_find_button_pane_g2

0x0001,

0xfd89,	// (0x0005991f) tb_ext_find_button_pane_g

0xd668,	// (0x000571fe) main_idle_act4_pane_t1_ParamLimits

0xd680,	// (0x00057216) main_idle_act4_pane_t2_ParamLimits

0xfd47,	// (0x000598dd) main_idle_act4_pane_t_ParamLimits

0xd6b4,	// (0x0005724a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd6cb,	// (0x00057261) sat_plugin_idle_act4_pane_ParamLimits

0xd6cb,	// (0x00057261) sat_plugin_idle_act4_pane

0xd86b,	// (0x00057401) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd86b,	// (0x00057401) sat_plugin_idle_act4_pane_t1

0xd883,	// (0x00057419) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd883,	// (0x00057419) sat_plugin_idle_act4_pane_t2

0xd89b,	// (0x00057431) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd89b,	// (0x00057431) sat_plugin_idle_act4_pane_t3

0xd8b3,	// (0x00057449) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8b3,	// (0x00057449) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8e,	// (0x00059924) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8e,	// (0x00059924) sat_plugin_idle_act4_pane_t

0xf04f,	// (0x00058be5) popup_battery_window_ParamLimits

0xf04f,	// (0x00058be5) popup_battery_window

0x70de,	// (0x00050c74) bg_popup_sub_pane_cp25_ParamLimits

0x70de,	// (0x00050c74) bg_popup_sub_pane_cp25

0x6978,	// (0x0005050e) popup_battery_window_g1_ParamLimits

0x6978,	// (0x0005050e) popup_battery_window_g1

0x6984,	// (0x0005051a) popup_battery_window_t1_ParamLimits

0x6984,	// (0x0005051a) popup_battery_window_t1

0x6996,	// (0x0005052c) popup_battery_window_t2_ParamLimits

0x6996,	// (0x0005052c) popup_battery_window_t2

0x0001,

0xfd97,	// (0x0005992d) popup_battery_window_t_ParamLimits

0xfd97,	// (0x0005992d) popup_battery_window_t

0xae95,	// (0x00054a2b) midp_canvas_pane_ParamLimits

0xaef0,	// (0x00054a86) midp_keypad_pane_ParamLimits

0xaef0,	// (0x00054a86) midp_keypad_pane

0x04b5,	// (0x0004a04b) main_midp_pane_ParamLimits

0x4739,	// (0x0004e2cf) signal_pane_g2_cp_ParamLimits

0xd8cb,	// (0x00057461) aid_size_cell_midp_keypad_ParamLimits

0xd8cb,	// (0x00057461) aid_size_cell_midp_keypad

0xd8e9,	// (0x0005747f) midp_keyp_game_grid_pane_ParamLimits

0xd8e9,	// (0x0005747f) midp_keyp_game_grid_pane

0xd910,	// (0x000574a6) midp_keyp_rocker_pane_ParamLimits

0xd910,	// (0x000574a6) midp_keyp_rocker_pane

0xd94f,	// (0x000574e5) midp_keyp_sk_left_pane_ParamLimits

0xd94f,	// (0x000574e5) midp_keyp_sk_left_pane

0xd9a3,	// (0x00057539) midp_keyp_sk_right_pane_ParamLimits

0xd9a3,	// (0x00057539) midp_keyp_sk_right_pane

0x6f2f,	// (0x00050ac5) bg_button_pane_cp03

0xd9f7,	// (0x0005758d) midp_keyp_sk_left_pane_g1

0x6f2f,	// (0x00050ac5) bg_button_pane_cp04

0xd9f7,	// (0x0005758d) midp_keyp_sk_right_pane_g1

0x4c3a,	// (0x0004e7d0) midp_keyp_rocker_pane_g1

0xda00,	// (0x00057596) keyp_game_cell_pane_ParamLimits

0xda00,	// (0x00057596) keyp_game_cell_pane

0x6f2f,	// (0x00050ac5) bg_button_pane_cp02

0xda26,	// (0x000575bc) keyp_game_cell_pane_g1

0x9cc7,	// (0x0005385d) popup_fep_vkb2_window_ParamLimits

0x9cc7,	// (0x0005385d) popup_fep_vkb2_window

0xc060,	// (0x00055bf6) aid_size_cell_vkb2_ParamLimits

0xc060,	// (0x00055bf6) aid_size_cell_vkb2

0xc096,	// (0x00055c2c) popup_fep_vkb2_window_g1_ParamLimits

0xc096,	// (0x00055c2c) popup_fep_vkb2_window_g1

0xc0e6,	// (0x00055c7c) vkb2_area_bottom_pane_ParamLimits

0xc0e6,	// (0x00055c7c) vkb2_area_bottom_pane

0xc142,	// (0x00055cd8) vkb2_area_keypad_pane_ParamLimits

0xc142,	// (0x00055cd8) vkb2_area_keypad_pane

0xc190,	// (0x00055d26) vkb2_area_top_pane_ParamLimits

0xc190,	// (0x00055d26) vkb2_area_top_pane

0xc216,	// (0x00055dac) vkb2_top_entry_pane_ParamLimits

0xc216,	// (0x00055dac) vkb2_top_entry_pane

0xc243,	// (0x00055dd9) vkb2_top_grid_left_pane_ParamLimits

0xc243,	// (0x00055dd9) vkb2_top_grid_left_pane

0xc263,	// (0x00055df9) vkb2_top_grid_right_pane_ParamLimits

0xc263,	// (0x00055df9) vkb2_top_grid_right_pane

0x12f1,	// (0x0004ae87) vkb2_cell_keypad_pane_ParamLimits

0x12f1,	// (0x0004ae87) vkb2_cell_keypad_pane

0xc2a9,	// (0x00055e3f) vkb2_area_bottom_grid_pane_ParamLimits

0xc2a9,	// (0x00055e3f) vkb2_area_bottom_grid_pane

0xc2d3,	// (0x00055e69) vkb2_area_bottom_pane_g1_ParamLimits

0xc2d3,	// (0x00055e69) vkb2_area_bottom_pane_g1

0xc2f9,	// (0x00055e8f) vkb2_area_bottom_pane_g2_ParamLimits

0xc2f9,	// (0x00055e8f) vkb2_area_bottom_pane_g2

0xc32a,	// (0x00055ec0) vkb2_area_bottom_pane_g3_ParamLimits

0xc32a,	// (0x00055ec0) vkb2_area_bottom_pane_g3

0x0002,

0xfd9c,	// (0x00059932) vkb2_area_bottom_pane_g_ParamLimits

0xfd9c,	// (0x00059932) vkb2_area_bottom_pane_g

0x149b,	// (0x0004b031) vkb2_top_cell_left_pane_ParamLimits

0x149b,	// (0x0004b031) vkb2_top_cell_left_pane

0xda2f,	// (0x000575c5) vkb2_top_entry_pane_g1_ParamLimits

0xda2f,	// (0x000575c5) vkb2_top_entry_pane_g1

0xda3d,	// (0x000575d3) vkb2_top_entry_pane_t1_ParamLimits

0xda3d,	// (0x000575d3) vkb2_top_entry_pane_t1

0x6b39,	// (0x000506cf) vkb2_top_entry_pane_t2_ParamLimits

0x6b39,	// (0x000506cf) vkb2_top_entry_pane_t2

0x6b6b,	// (0x00050701) vkb2_top_entry_pane_t3_ParamLimits

0x6b6b,	// (0x00050701) vkb2_top_entry_pane_t3

0x0002,

0xfda3,	// (0x00059939) vkb2_top_entry_pane_t_ParamLimits

0xfda3,	// (0x00059939) vkb2_top_entry_pane_t

0xc394,	// (0x00055f2a) vkb2_top_grid_right_pane_g1_ParamLimits

0xc394,	// (0x00055f2a) vkb2_top_grid_right_pane_g1

0x14fe,	// (0x0004b094) vkb2_top_grid_right_pane_g2_ParamLimits

0x14fe,	// (0x0004b094) vkb2_top_grid_right_pane_g2

0x1516,	// (0x0004b0ac) vkb2_top_grid_right_pane_g3_ParamLimits

0x1516,	// (0x0004b0ac) vkb2_top_grid_right_pane_g3

0xc3aa,	// (0x00055f40) vkb2_top_grid_right_pane_g4_ParamLimits

0xc3aa,	// (0x00055f40) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaa,	// (0x00059940) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaa,	// (0x00059940) vkb2_top_grid_right_pane_g

0x1544,	// (0x0004b0da) vkb2_top_cell_left_pane_g1

0x155b,	// (0x0004b0f1) vkb2_cell_keypad_pane_g1_ParamLimits

0x155b,	// (0x0004b0f1) vkb2_cell_keypad_pane_g1

0x6b8f,	// (0x00050725) vkb2_cell_keypad_pane_t1_ParamLimits

0x6b8f,	// (0x00050725) vkb2_cell_keypad_pane_t1

0x1569,	// (0x0004b0ff) vkb2_cell_bottom_grid_pane_ParamLimits

0x1569,	// (0x0004b0ff) vkb2_cell_bottom_grid_pane

0x15a2,	// (0x0004b138) vkb2_cell_bottom_grid_pane_g1

0xd6fc,	// (0x00057292) aid_call2_pane_cp02

0xd704,	// (0x0005729a) aid_call_pane_cp02

0xd70c,	// (0x000572a2) clock_digital_number_pane_cp10

0xd714,	// (0x000572aa) clock_digital_number_pane_cp11

0xd71c,	// (0x000572b2) clock_digital_number_pane_cp12

0xd724,	// (0x000572ba) clock_digital_number_pane_cp13

0xd72c,	// (0x000572c2) clock_digital_separator_pane_cp10

0xa916,	// (0x000544ac) popup_clock_digital_analogue_window_cp2_g1

0xa916,	// (0x000544ac) popup_clock_digital_analogue_window_cp2_g2

0xd734,	// (0x000572ca) popup_clock_digital_analogue_window_cp2_g3

0xa916,	// (0x000544ac) popup_clock_digital_analogue_window_cp2_g4

0xd734,	// (0x000572ca) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5f,	// (0x000598f5) popup_clock_digital_analogue_window_cp2_g

0xd73c,	// (0x000572d2) popup_clock_digital_analogue_window_cp2_t1

0xd74a,	// (0x000572e0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6a,	// (0x00059900) popup_clock_digital_analogue_window_cp2_t

0x4c3a,	// (0x0004e7d0) clock_digital_number_pane_cp10_g1

0x4c3a,	// (0x0004e7d0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x000596e8) clock_digital_number_pane_cp10_g

0x4c3a,	// (0x0004e7d0) clock_digital_separator_pane_cp10_g1

0x4c3a,	// (0x0004e7d0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x000596e8) clock_digital_separator_pane_cp10_g

0x65c2,	// (0x00050158) uniindi_top_pane_g3

0x65d3,	// (0x00050169) uniindi_top_pane_g4

0x137c,	// (0x0004af12) vkb2_row_keypad_pane_ParamLimits

0x137c,	// (0x0004af12) vkb2_row_keypad_pane

0x15be,	// (0x0004b154) vkb2_cell_t_keypad_pane_ParamLimits

0x15be,	// (0x0004b154) vkb2_cell_t_keypad_pane

0x15ce,	// (0x0004b164) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x15ce,	// (0x0004b164) vkb2_cell_t_keypad_pane_cp08

0x15e3,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x15e3,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp09

0x15f7,	// (0x0004b18d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x15f7,	// (0x0004b18d) vkb2_cell_t_keypad_pane_cp01

0x1608,	// (0x0004b19e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1608,	// (0x0004b19e) vkb2_cell_t_keypad_pane_cp02

0x1619,	// (0x0004b1af) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1619,	// (0x0004b1af) vkb2_cell_t_keypad_pane_cp03

0x162a,	// (0x0004b1c0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x162a,	// (0x0004b1c0) vkb2_cell_t_keypad_pane_cp04

0x163b,	// (0x0004b1d1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x163b,	// (0x0004b1d1) vkb2_cell_t_keypad_pane_cp05

0x164c,	// (0x0004b1e2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x164c,	// (0x0004b1e2) vkb2_cell_t_keypad_pane_cp06

0x165f,	// (0x0004b1f5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x165f,	// (0x0004b1f5) vkb2_cell_t_keypad_pane_cp07

0x1674,	// (0x0004b20a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1674,	// (0x0004b20a) vkb2_cell_t_keypad_pane_cp10

0x4eb5,	// (0x0004ea4b) vkb2_cell_t_keypad_pane_g1

0x6ba6,	// (0x0005073c) vkb2_cell_t_keypad_pane_t1

0x6f2f,	// (0x00050ac5) popup_grid_graphic2_window

0xda76,	// (0x0005760c) aid_size_cell_graphic2_ParamLimits

0xda76,	// (0x0005760c) aid_size_cell_graphic2

0xdab4,	// (0x0005764a) bg_popup_window_pane_cp21_ParamLimits

0xdab4,	// (0x0005764a) bg_popup_window_pane_cp21

0xdac2,	// (0x00057658) graphic2_pages_pane_ParamLimits

0xdac2,	// (0x00057658) graphic2_pages_pane

0xdb1a,	// (0x000576b0) grid_graphic2_control_pane_ParamLimits

0xdb1a,	// (0x000576b0) grid_graphic2_control_pane

0xdb62,	// (0x000576f8) grid_graphic2_pane_ParamLimits

0xdb62,	// (0x000576f8) grid_graphic2_pane

0xdbed,	// (0x00057783) cell_graphic2_pane

0x6f2f,	// (0x00050ac5) main_comp_mode_pane

0x5e33,	// (0x0004f9c9) list_ai3_gene_pane_ParamLimits

0xd439,	// (0x00056fcf) bg_popup_window_pane_cp19_ParamLimits

0x6207,	// (0x0004fd9d) bg_touch_area_indi_pane_ParamLimits

0x6207,	// (0x0004fd9d) bg_touch_area_indi_pane

0x621d,	// (0x0004fdb3) bg_touch_area_indi_pane_cp01_ParamLimits

0x621d,	// (0x0004fdb3) bg_touch_area_indi_pane_cp01

0x6235,	// (0x0004fdcb) bg_touch_area_indi_pane_cp02_ParamLimits

0x6235,	// (0x0004fdcb) bg_touch_area_indi_pane_cp02

0x624f,	// (0x0004fde5) bg_touch_area_indi_pane_cp03_ParamLimits

0x624f,	// (0x0004fde5) bg_touch_area_indi_pane_cp03

0x6269,	// (0x0004fdff) popup_slider_window_g1_ParamLimits

0x6285,	// (0x0004fe1b) popup_slider_window_g2_ParamLimits

0x62a1,	// (0x0004fe37) popup_slider_window_g3_ParamLimits

0xfcf4,	// (0x0005988a) popup_slider_window_g_ParamLimits

0x62fd,	// (0x0004fe93) popup_slider_window_t1_ParamLimits

0x6371,	// (0x0004ff07) small_volume_slider_vertical_pane_ParamLimits

0xdbed,	// (0x00057783) cell_graphic2_pane_ParamLimits

0xdc50,	// (0x000577e6) bg_button_pane_cp10_ParamLimits

0xdc50,	// (0x000577e6) bg_button_pane_cp10

0xdc63,	// (0x000577f9) bg_button_pane_cp11_ParamLimits

0xdc63,	// (0x000577f9) bg_button_pane_cp11

0xdc76,	// (0x0005780c) graphic2_pages_pane_g1_ParamLimits

0xdc76,	// (0x0005780c) graphic2_pages_pane_g1

0xdc91,	// (0x00057827) graphic2_pages_pane_g2_ParamLimits

0xdc91,	// (0x00057827) graphic2_pages_pane_g2

0x0001,

0xfdb8,	// (0x0005994e) graphic2_pages_pane_g_ParamLimits

0xfdb8,	// (0x0005994e) graphic2_pages_pane_g

0xdca9,	// (0x0005783f) graphic2_pages_pane_t1_ParamLimits

0xdca9,	// (0x0005783f) graphic2_pages_pane_t1

0xdcc1,	// (0x00057857) cell_graphic2_control_pane_ParamLimits

0xdcc1,	// (0x00057857) cell_graphic2_control_pane

0xdcf5,	// (0x0005788b) cell_graphic2_pane_g1_ParamLimits

0xdcf5,	// (0x0005788b) cell_graphic2_pane_g1

0xcda6,	// (0x0005693c) cell_graphic2_pane_g2_ParamLimits

0xcda6,	// (0x0005693c) cell_graphic2_pane_g2

0xdd02,	// (0x00057898) cell_graphic2_pane_g3_ParamLimits

0xdd02,	// (0x00057898) cell_graphic2_pane_g3

0xcdb3,	// (0x00056949) cell_graphic2_pane_g4_ParamLimits

0xcdb3,	// (0x00056949) cell_graphic2_pane_g4

0xdd0f,	// (0x000578a5) cell_graphic2_pane_g5_ParamLimits

0xdd0f,	// (0x000578a5) cell_graphic2_pane_g5

0x0004,

0xfdbd,	// (0x00059953) cell_graphic2_pane_g_ParamLimits

0xfdbd,	// (0x00059953) cell_graphic2_pane_g

0xdd2f,	// (0x000578c5) cell_graphic2_pane_t1_ParamLimits

0xdd2f,	// (0x000578c5) cell_graphic2_pane_t1

0x32bd,	// (0x0004ce53) grid_highlight_pane_cp11_ParamLimits

0x32bd,	// (0x0004ce53) grid_highlight_pane_cp11

0x70de,	// (0x00050c74) bg_button_pane_cp05

0xdd64,	// (0x000578fa) cell_graphic2_control_pane_g1

0x4c3a,	// (0x0004e7d0) bg_touch_area_indi_pane_g1

0x6e80,	// (0x00050a16) aid_cmod_rocker_key_size

0x6e8a,	// (0x00050a20) aid_cmode_itu_key_size

0x6e94,	// (0x00050a2a) main_cmode_video_pane

0x6e9e,	// (0x00050a34) main_comp_mode_itu_pane

0x6eaa,	// (0x00050a40) main_comp_mode_rocker_pane

0x6eb6,	// (0x00050a4c) cell_cmode_rocker_pane_ParamLimits

0x6eb6,	// (0x00050a4c) cell_cmode_rocker_pane

0x6eca,	// (0x00050a60) cell_cmode_itu_pane_ParamLimits

0x6eca,	// (0x00050a60) cell_cmode_itu_pane

0xa264,	// (0x00053dfa) bg_button_pane_cp06_ParamLimits

0xa264,	// (0x00053dfa) bg_button_pane_cp06

0x4eb5,	// (0x0004ea4b) cell_cmode_rocker_pane_g1_ParamLimits

0x4eb5,	// (0x0004ea4b) cell_cmode_rocker_pane_g1

0x6418,	// (0x0004ffae) cell_cmode_rocker_pane_g2_ParamLimits

0x6418,	// (0x0004ffae) cell_cmode_rocker_pane_g2

0x0001,

0xfdcd,	// (0x00059963) cell_cmode_rocker_pane_g_ParamLimits

0xfdcd,	// (0x00059963) cell_cmode_rocker_pane_g

0x6f2f,	// (0x00050ac5) bg_button_pane_cp07

0x6ee1,	// (0x00050a77) cell_cmode_itu_pane_g1

0x6eea,	// (0x00050a80) cell_cmode_itu_pane_t1

0x6ef8,	// (0x00050a8e) cell_cmode_itu_pane_t2

0x0001,

0xfdd2,	// (0x00059968) cell_cmode_itu_pane_t

0x6646,	// (0x000501dc) aid_touch_ctrl_left

0x664e,	// (0x000501e4) aid_touch_ctrl_right

0x6f2f,	// (0x00050ac5) compa_mode_pane

0xdd8a,	// (0x00057920) aid_cmod_rocker_key_size_cp

0xdd94,	// (0x0005792a) aid_cmode_itu_key_size_cp

0x757b,	// (0x00051111) compa_mode_pane_g1

0x7583,	// (0x00051119) compa_mode_pane_g2

0x758b,	// (0x00051121) compa_mode_pane_g3

0x0002,

0xfdd7,	// (0x0005996d) compa_mode_pane_g

0xdd9e,	// (0x00057934) main_comp_mode_itu_pane_cp

0xdda6,	// (0x0005793c) main_comp_mode_rocker_pane_cp

0xddae,	// (0x00057944) cell_cmode_itu_pane_cp_ParamLimits

0xddae,	// (0x00057944) cell_cmode_itu_pane_cp

0xddc3,	// (0x00057959) cell_cmode_rocker_pane_cp_ParamLimits

0xddc3,	// (0x00057959) cell_cmode_rocker_pane_cp

0xa264,	// (0x00053dfa) bg_button_pane_cp06_cp_ParamLimits

0xa264,	// (0x00053dfa) bg_button_pane_cp06_cp

0x4eb5,	// (0x0004ea4b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4eb5,	// (0x0004ea4b) cell_cmode_rocker_pane_g1_cp

0x4c3a,	// (0x0004e7d0) cell_cmode_rocker_pane_g2_cp

0x6f2f,	// (0x00050ac5) bg_button_pane_cp07_cp

0xddd5,	// (0x0005796b) cell_cmode_itu_pane_g1_cp

0xddde,	// (0x00057974) cell_cmode_itu_pane_t1_cp

0xddde,	// (0x00057974) cell_cmode_itu_pane_t2_cp

0xca08,	// (0x0005659e) settings_code_pane_cp2

0x6f9d,	// (0x00050b33) bg_popup_window_pane_cp3_ParamLimits

0x72cc,	// (0x00050e62) heading_pane_cp3_ParamLimits

0x72d8,	// (0x00050e6e) listscroll_popup_graphic_pane_ParamLimits

0x0b82,	// (0x0004a718) fep_hwr_aid_pane_ParamLimits

0x1050,	// (0x0004abe6) aid_touch_sctrl_top_ParamLimits

0x105d,	// (0x0004abf3) sctrl_sk_top_pane_g1_ParamLimits

0x4eb5,	// (0x0004ea4b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0d,	// (0x000598a3) sctrl_sk_top_pane_g_ParamLimits

0x106a,	// (0x0004ac00) sctrl_sk_top_pane_t1_ParamLimits

0x1050,	// (0x0004abe6) aid_touch_sctrl_bottom_ParamLimits

0x106a,	// (0x0004ac00) sctrl_sk_bottom_pane_t1_ParamLimits

0x658c,	// (0x00050122) aid_area_touch_clock

0xc1d8,	// (0x00055d6e) aid_vkb2_area_top_pane_cell_ParamLimits

0xc1d8,	// (0x00055d6e) aid_vkb2_area_top_pane_cell

0xc283,	// (0x00055e19) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc283,	// (0x00055e19) aid_vkb2_area_bottom_pane_cell

0x6af1,	// (0x00050687) popup_char_count_window

0x75e1,	// (0x00051177) popup_char_count_window_g1

0x75ea,	// (0x00051180) popup_char_count_window_g2

0x75f3,	// (0x00051189) popup_char_count_window_g3

0x0002,

0xfdde,	// (0x00059974) popup_char_count_window_g

0x75fc,	// (0x00051192) popup_char_count_window_t1

0x110d,	// (0x0004aca3) popup_fep_char_preview_window_ParamLimits

0x110d,	// (0x0004aca3) popup_fep_char_preview_window

0xc1f8,	// (0x00055d8e) vkb2_top_candi_pane_ParamLimits

0xc1f8,	// (0x00055d8e) vkb2_top_candi_pane

0xddec,	// (0x00057982) cell_vkb2_top_candi_pane_ParamLimits

0xddec,	// (0x00057982) cell_vkb2_top_candi_pane

0x2c46,	// (0x0004c7dc) bg_popup_fep_char_preview_window_ParamLimits

0x2c46,	// (0x0004c7dc) bg_popup_fep_char_preview_window

0x1689,	// (0x0004b21f) popup_fep_char_preview_window_t1_ParamLimits

0x1689,	// (0x0004b21f) popup_fep_char_preview_window_t1

0x765b,	// (0x000511f1) bg_popup_fep_char_preview_window_g1

0x7663,	// (0x000511f9) bg_popup_fep_char_preview_window_g2

0x766b,	// (0x00051201) bg_popup_fep_char_preview_window_g3

0x7673,	// (0x00051209) bg_popup_fep_char_preview_window_g4

0x767b,	// (0x00051211) bg_popup_fep_char_preview_window_g5

0x16c3,	// (0x0004b259) bg_popup_fep_char_preview_window_g6

0x7683,	// (0x00051219) bg_popup_fep_char_preview_window_g7

0x768b,	// (0x00051221) bg_popup_fep_char_preview_window_g8

0x7693,	// (0x00051229) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde5,	// (0x0005997b) bg_popup_fep_char_preview_window_g

0x4eb5,	// (0x0004ea4b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4eb5,	// (0x0004ea4b) cell_vkb2_top_candi_pane_g1

0x51f6,	// (0x0004ed8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x51f6,	// (0x0004ed8c) cell_vkb2_top_candi_pane_g2

0x5217,	// (0x0004edad) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5217,	// (0x0004edad) cell_vkb2_top_candi_pane_g3

0x16cb,	// (0x0004b261) cell_vkb2_top_candi_pane_g4_ParamLimits

0x16cb,	// (0x0004b261) cell_vkb2_top_candi_pane_g4

0x6f06,	// (0x00050a9c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6f06,	// (0x00050a9c) cell_vkb2_top_candi_pane_g5

0x6418,	// (0x0004ffae) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6418,	// (0x0004ffae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf8,	// (0x0005998e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf8,	// (0x0005998e) cell_vkb2_top_candi_pane_g

0x16ec,	// (0x0004b282) cell_vkb2_top_candi_pane_t1

0x090c,	// (0x0004a4a2) aid_size_touch_slider_mark_ParamLimits

0x090c,	// (0x0004a4a2) aid_size_touch_slider_mark

0xdafe,	// (0x00057694) grid_graphic2_catg_pane_ParamLimits

0xdafe,	// (0x00057694) grid_graphic2_catg_pane

0xdbbc,	// (0x00057752) popup_grid_graphic2_window_t1_ParamLimits

0xdbbc,	// (0x00057752) popup_grid_graphic2_window_t1

0xdbd2,	// (0x00057768) popup_grid_graphic2_window_t2_ParamLimits

0xdbd2,	// (0x00057768) popup_grid_graphic2_window_t2

0x0001,

0xfdb3,	// (0x00059949) popup_grid_graphic2_window_t_ParamLimits

0xfdb3,	// (0x00059949) popup_grid_graphic2_window_t

0x70de,	// (0x00050c74) bg_button_pane_cp05_ParamLimits

0xdd64,	// (0x000578fa) cell_graphic2_control_pane_g1_ParamLimits

0xde56,	// (0x000579ec) cell_graphic2_catg_pane_ParamLimits

0xde56,	// (0x000579ec) cell_graphic2_catg_pane

0x6f2f,	// (0x00050ac5) bg_button_pane_cp12

0xde68,	// (0x000579fe) cell_graphic2_catg_pane_g1

0x6558,	// (0x000500ee) cell_tb_ext_pane_t1_ParamLimits

0x14bb,	// (0x0004b051) vkb2_top_cell_right_narrow_pane_ParamLimits

0x14bb,	// (0x0004b051) vkb2_top_cell_right_narrow_pane

0x14d3,	// (0x0004b069) vkb2_top_cell_right_wide_pane_ParamLimits

0x14d3,	// (0x0004b069) vkb2_top_cell_right_wide_pane

0x8a11,	// (0x000525a7) bg_vkb2_func_pane_ParamLimits

0x8a11,	// (0x000525a7) bg_vkb2_func_pane

0x1544,	// (0x0004b0da) vkb2_top_cell_left_pane_g1_ParamLimits

0x8a11,	// (0x000525a7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8a11,	// (0x000525a7) bg_vkb2_fuc_pane_cp03

0x15a2,	// (0x0004b138) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x25fe,	// (0x0004c194) bg_vkb2_func_pane_g1

0x2606,	// (0x0004c19c) bg_vkb2_func_pane_g2

0x2616,	// (0x0004c1ac) bg_vkb2_func_pane_g3

0x260e,	// (0x0004c1a4) bg_vkb2_func_pane_g4

0x261e,	// (0x0004c1b4) bg_vkb2_func_pane_g5

0x2626,	// (0x0004c1bc) bg_vkb2_func_pane_g6

0x262e,	// (0x0004c1c4) bg_vkb2_func_pane_g7

0x2636,	// (0x0004c1cc) bg_vkb2_func_pane_g8

0x25f6,	// (0x0004c18c) bg_vkb2_func_pane_g9

0x0008,

0xfe05,	// (0x0005999b) bg_vkb2_func_pane_g

0x8a11,	// (0x000525a7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8a11,	// (0x000525a7) bg_vkb2_fuc_pane_cp01

0x1544,	// (0x0004b0da) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1544,	// (0x0004b0da) vkb2_top_cell_right_wide_pane_g1

0x8a11,	// (0x000525a7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8a11,	// (0x000525a7) bg_vkb2_fuc_pane_cp02

0x15a2,	// (0x0004b138) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x15a2,	// (0x0004b138) vkb2_top_cell_right_narrow_pane_g1

0xd373,	// (0x00056f09) aid_touch_area_decrease_ParamLimits

0xd373,	// (0x00056f09) aid_touch_area_decrease

0xd3ad,	// (0x00056f43) aid_touch_area_increase_ParamLimits

0xd3ad,	// (0x00056f43) aid_touch_area_increase

0xd3d5,	// (0x00056f6b) aid_touch_area_mute_ParamLimits

0xd3d5,	// (0x00056f6b) aid_touch_area_mute

0xd405,	// (0x00056f9b) aid_touch_area_slider_ParamLimits

0xd405,	// (0x00056f9b) aid_touch_area_slider

0xd445,	// (0x00056fdb) popup_slider_window_g4_ParamLimits

0xd445,	// (0x00056fdb) popup_slider_window_g4

0xd46d,	// (0x00057003) popup_slider_window_g5_ParamLimits

0xd46d,	// (0x00057003) popup_slider_window_g5

0xd4a1,	// (0x00057037) popup_slider_window_g6_ParamLimits

0xd4a1,	// (0x00057037) popup_slider_window_g6

0x632b,	// (0x0004fec1) popup_slider_window_t2_ParamLimits

0x632b,	// (0x0004fec1) popup_slider_window_t2

0x0001,

0xfd01,	// (0x00059897) popup_slider_window_t_ParamLimits

0xfd01,	// (0x00059897) popup_slider_window_t

0xd4bd,	// (0x00057053) slider_pane_ParamLimits

0xd4bd,	// (0x00057053) slider_pane

0x76b6,	// (0x0005124c) slider_pane_g1_ParamLimits

0x76b6,	// (0x0005124c) slider_pane_g1

0x76ca,	// (0x00051260) slider_pane_g2_ParamLimits

0x76ca,	// (0x00051260) slider_pane_g2

0x76e0,	// (0x00051276) slider_pane_g3_ParamLimits

0x76e0,	// (0x00051276) slider_pane_g3

0x0003,

0xfe18,	// (0x000599ae) slider_pane_g_ParamLimits

0xfe18,	// (0x000599ae) slider_pane_g

0xb83e,	// (0x000553d4) popup_tb_float_extension_window_ParamLimits

0xb83e,	// (0x000553d4) popup_tb_float_extension_window

0x770c,	// (0x000512a2) aid_size_cell_tb_float_ext

0x6f2f,	// (0x00050ac5) bg_popup_sub_window_cp28

0x7718,	// (0x000512ae) grid_tb_float_ext_pane

0x7724,	// (0x000512ba) cell_tb_float_ext_pane_ParamLimits

0x7724,	// (0x000512ba) cell_tb_float_ext_pane

0x7740,	// (0x000512d6) cell_tb_float_ext_pane_g1

0x7749,	// (0x000512df) grid_highlight_pane_cp12

0xbf59,	// (0x00055aef) cell_last_hwr_side_pane_ParamLimits

0xbf59,	// (0x00055aef) cell_last_hwr_side_pane

0x4c3a,	// (0x0004e7d0) cell_last_hwr_side_pane_g1

0x7752,	// (0x000512e8) cell_last_hwr_side_pane_g2

0x0001,

0xfe21,	// (0x000599b7) cell_last_hwr_side_pane_g

0xc35f,	// (0x00055ef5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc35f,	// (0x00055ef5) vkb2_area_bottom_space_btn_pane

0x4eb5,	// (0x0004ea4b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ba6,	// (0x0005073c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x16ec,	// (0x0004b282) cell_vkb2_top_candi_pane_t1_ParamLimits

0x170a,	// (0x0004b2a0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x170a,	// (0x0004b2a0) vkb2_area_bottom_space_btn_pane_g1

0x1744,	// (0x0004b2da) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1744,	// (0x0004b2da) vkb2_area_bottom_space_btn_pane_g2

0x177a,	// (0x0004b310) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x177a,	// (0x0004b310) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe26,	// (0x000599bc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe26,	// (0x000599bc) vkb2_area_bottom_space_btn_pane_g

0x0c2b,	// (0x0004a7c1) cel_fep_hwr_func_pane_ParamLimits

0x0c2b,	// (0x0004a7c1) cel_fep_hwr_func_pane

0xbf2e,	// (0x00055ac4) cell_hwr_side_button_pane_ParamLimits

0xbf2e,	// (0x00055ac4) cell_hwr_side_button_pane

0x658c,	// (0x00050122) aid_area_touch_clock_ParamLimits

0x70de,	// (0x00050c74) bg_uniindi_top_pane_ParamLimits

0x65a0,	// (0x00050136) uniindi_top_pane_g1_ParamLimits

0x65b6,	// (0x0005014c) uniindi_top_pane_g2_ParamLimits

0x65c2,	// (0x00050158) uniindi_top_pane_g3_ParamLimits

0x65d3,	// (0x00050169) uniindi_top_pane_g4_ParamLimits

0xfd39,	// (0x000598cf) uniindi_top_pane_g_ParamLimits

0x65e0,	// (0x00050176) uniindi_top_pane_t1_ParamLimits

0x70de,	// (0x00050c74) bg_vkb2_func_pane_cp01_ParamLimits

0x70de,	// (0x00050c74) bg_vkb2_func_pane_cp01

0x775b,	// (0x000512f1) cel_fep_hwr_func_pane_g1_ParamLimits

0x775b,	// (0x000512f1) cel_fep_hwr_func_pane_g1

0x70de,	// (0x00050c74) bg_vkb2_func_pane_cp02_ParamLimits

0x70de,	// (0x00050c74) bg_vkb2_func_pane_cp02

0x775b,	// (0x000512f1) cell_hwr_side_button_pane_g1_ParamLimits

0x775b,	// (0x000512f1) cell_hwr_side_button_pane_g1

0x2477,	// (0x0004c00d) status_pane_g4_ParamLimits

0x2477,	// (0x0004c00d) status_pane_g4

0x2491,	// (0x0004c027) status_pane_t1

0x49d9,	// (0x0004e56f) form2_midp_gauge_slider_cont_pane

0x49e1,	// (0x0004e577) form2_midp_gauge_slider_pane_t1_ParamLimits

0xccde,	// (0x00056874) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccf0,	// (0x00056886) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x0005969b) form2_midp_gauge_slider_pane_t_ParamLimits

0x4a17,	// (0x0004e5ad) form2_midp_slider_pane_ParamLimits

0x10cd,	// (0x0004ac63) aid_size_cell_func_vkb2_ParamLimits

0x10cd,	// (0x0004ac63) aid_size_cell_func_vkb2

0x76f8,	// (0x0005128e) slider_pane_g4_ParamLimits

0x76f8,	// (0x0005128e) slider_pane_g4

0xc3c0,	// (0x00055f56) form2_midp_gauge_slider_pane_t2_cp01

0xc3ce,	// (0x00055f64) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc3ce,	// (0x00055f64) form2_midp_gauge_slider_pane_t3_cp01

0x17ef,	// (0x0004b385) form2_midp_slider_pane_cp01

0x6f2f,	// (0x00050ac5) navi_smil_pane

0x7794,	// (0x0005132a) navi_smil_pane_g1

0x779c,	// (0x00051332) navi_smil_pane_t1

0x7769,	// (0x000512ff) form2_midp_slider_pane_g1

0x7772,	// (0x00051308) form2_midp_slider_pane_g2

0x777a,	// (0x00051310) form2_midp_slider_pane_g3

0x7769,	// (0x000512ff) form2_midp_slider_pane_g4

0xde71,	// (0x00057a07) form2_midp_slider_pane_g5

0x0004,

0xfe2f,	// (0x000599c5) form2_midp_slider_pane_g

0x17b4,	// (0x0004b34a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x17b4,	// (0x0004b34a) vkb2_area_bottom_space_btn_pane_g4

0xba25,	// (0x000555bb) lc0_navi_pane_ParamLimits

0xba25,	// (0x000555bb) lc0_navi_pane

0xba95,	// (0x0005562b) lc0_stat_indi_pane_ParamLimits

0xba95,	// (0x0005562b) lc0_stat_indi_pane

0xbaaa,	// (0x00055640) ls0_title_pane_ParamLimits

0xbaaa,	// (0x00055640) ls0_title_pane

0xa264,	// (0x00053dfa) bg_popup_sub_pane_cp14_ParamLimits

0x6573,	// (0x00050109) list_uniindi_pane_ParamLimits

0x657f,	// (0x00050115) uniindi_top_pane_ParamLimits

0x661e,	// (0x000501b4) list_single_uniindi_pane_g1_ParamLimits

0x6631,	// (0x000501c7) list_single_uniindi_pane_t1_ParamLimits

0xc3eb,	// (0x00055f81) lc0_stat_clock_pane_ParamLimits

0xc3eb,	// (0x00055f81) lc0_stat_clock_pane

0xde7a,	// (0x00057a10) lc0_stat_indi_pane_g1_ParamLimits

0xde7a,	// (0x00057a10) lc0_stat_indi_pane_g1

0xde87,	// (0x00057a1d) lc0_stat_indi_pane_g2_ParamLimits

0xde87,	// (0x00057a1d) lc0_stat_indi_pane_g2

0x0001,

0xfe3a,	// (0x000599d0) lc0_stat_indi_pane_g_ParamLimits

0xfe3a,	// (0x000599d0) lc0_stat_indi_pane_g

0xc3f8,	// (0x00055f8e) lc0_uni_indicator_pane_ParamLimits

0xc3f8,	// (0x00055f8e) lc0_uni_indicator_pane

0xde94,	// (0x00057a2a) ls0_title_pane_g1_ParamLimits

0xde94,	// (0x00057a2a) ls0_title_pane_g1

0xdea8,	// (0x00057a3e) ls0_title_pane_t1_ParamLimits

0xdea8,	// (0x00057a3e) ls0_title_pane_t1

0xc405,	// (0x00055f9b) lc0_uni_indicator_pane_g1_ParamLimits

0xc405,	// (0x00055f9b) lc0_uni_indicator_pane_g1

0x780e,	// (0x000513a4) lc0_stat_clock_pane_t1

0x6f2f,	// (0x00050ac5) main_ai5_pane

0x781c,	// (0x000513b2) ai5_sk_pane_ParamLimits

0x781c,	// (0x000513b2) ai5_sk_pane

0xded6,	// (0x00057a6c) cell_ai5_widget_pane_ParamLimits

0xded6,	// (0x00057a6c) cell_ai5_widget_pane

0x7dc5,	// (0x0005195b) aid_size_cell_widget_grid

0x7dd3,	// (0x00051969) bg_ai5_widget_pane_ParamLimits

0x7dd3,	// (0x00051969) bg_ai5_widget_pane

0x7e47,	// (0x000519dd) cell_ai5_widget_pane_g2

0x7e57,	// (0x000519ed) cell_ai5_widget_pane_g3

0x7e6e,	// (0x00051a04) cell_ai5_widget_pane_g4

0x7e7a,	// (0x00051a10) cell_ai5_widget_pane_g5

0xe22d,	// (0x00057dc3) cell_ai5_widget_pane_g6

0xe239,	// (0x00057dcf) cell_ai5_widget_pane_g7

0x7eda,	// (0x00051a70) cell_ai5_widget_pane_t1_ParamLimits

0x7eda,	// (0x00051a70) cell_ai5_widget_pane_t1

0x7ef7,	// (0x00051a8d) cell_ai5_widget_pane_t2_ParamLimits

0x7ef7,	// (0x00051a8d) cell_ai5_widget_pane_t2

0x7f0f,	// (0x00051aa5) cell_ai5_widget_pane_t3_ParamLimits

0x7f0f,	// (0x00051aa5) cell_ai5_widget_pane_t3

0x7f27,	// (0x00051abd) cell_ai5_widget_pane_t4_ParamLimits

0x7f27,	// (0x00051abd) cell_ai5_widget_pane_t4

0x7f44,	// (0x00051ada) cell_ai5_widget_pane_t5_ParamLimits

0x7f44,	// (0x00051ada) cell_ai5_widget_pane_t5

0x7f63,	// (0x00051af9) cell_ai5_widget_pane_t6_ParamLimits

0x7f63,	// (0x00051af9) cell_ai5_widget_pane_t6

0x7f75,	// (0x00051b0b) cell_ai5_widget_pane_t7_ParamLimits

0x7f75,	// (0x00051b0b) cell_ai5_widget_pane_t7

0x7f8e,	// (0x00051b24) cell_ai5_widget_pane_t8_ParamLimits

0x7f8e,	// (0x00051b24) cell_ai5_widget_pane_t8

0x0009,

0xfe54,	// (0x000599ea) cell_ai5_widget_pane_t_ParamLimits

0xfe54,	// (0x000599ea) cell_ai5_widget_pane_t

0x7fe2,	// (0x00051b78) grid_ai5_widget_pane

0xa264,	// (0x00053dfa) highlight_cell_ai5_widget_pane_ParamLimits

0xa264,	// (0x00053dfa) highlight_cell_ai5_widget_pane

0xe245,	// (0x00057ddb) ai5_sk_left_pane

0xe24f,	// (0x00057de5) ai5_sk_middle_pane

0xe259,	// (0x00057def) ai5_sk_right_pane

0x8014,	// (0x00051baa) bg_ai5_widget_pane_g1_ParamLimits

0x8014,	// (0x00051baa) bg_ai5_widget_pane_g1

0x8020,	// (0x00051bb6) bg_ai5_widget_pane_g2_ParamLimits

0x8020,	// (0x00051bb6) bg_ai5_widget_pane_g2

0x802c,	// (0x00051bc2) bg_ai5_widget_pane_g3_ParamLimits

0x802c,	// (0x00051bc2) bg_ai5_widget_pane_g3

0x8038,	// (0x00051bce) bg_ai5_widget_pane_g4_ParamLimits

0x8038,	// (0x00051bce) bg_ai5_widget_pane_g4

0x8044,	// (0x00051bda) bg_ai5_widget_pane_g5_ParamLimits

0x8044,	// (0x00051bda) bg_ai5_widget_pane_g5

0x8050,	// (0x00051be6) bg_ai5_widget_pane_g6_ParamLimits

0x8050,	// (0x00051be6) bg_ai5_widget_pane_g6

0x805c,	// (0x00051bf2) bg_ai5_widget_pane_g7_ParamLimits

0x805c,	// (0x00051bf2) bg_ai5_widget_pane_g7

0x8068,	// (0x00051bfe) bg_ai5_widget_pane_g8_ParamLimits

0x8068,	// (0x00051bfe) bg_ai5_widget_pane_g8

0x8074,	// (0x00051c0a) bg_ai5_widget_pane_g9_ParamLimits

0x8074,	// (0x00051c0a) bg_ai5_widget_pane_g9

0x0008,

0xfe69,	// (0x000599ff) bg_ai5_widget_pane_g_ParamLimits

0xfe69,	// (0x000599ff) bg_ai5_widget_pane_g

0x80aa,	// (0x00051c40) cell_shortcut_ai5_widget_pane_ParamLimits

0x80aa,	// (0x00051c40) cell_shortcut_ai5_widget_pane

0xe7f5,	// (0x0005838b) bg_cell_shortcut_ai5_widget_pane

0x80bd,	// (0x00051c53) cell_grid_ai5_widget_pane_g1

0xe7f5,	// (0x0005838b) highlight_cell_shortcut_ai5_widget_pane

0x2606,	// (0x0004c19c) ai5_sk_left_pane_g1

0x80c6,	// (0x00051c5c) ai5_sk_left_pane_g2

0x80ce,	// (0x00051c64) ai5_sk_left_pane_g3

0x80d6,	// (0x00051c6c) ai5_sk_left_pane_g4

0x0003,

0xfe7c,	// (0x00059a12) ai5_sk_left_pane_g

0x80de,	// (0x00051c74) ai5_sk_left_pane_t1

0x25fe,	// (0x0004c194) ai5_sk_right_pane_g1

0x80ec,	// (0x00051c82) ai5_sk_right_pane_g2

0x80f4,	// (0x00051c8a) ai5_sk_right_pane_g3

0x80fc,	// (0x00051c92) ai5_sk_right_pane_g4

0x0003,

0xfe85,	// (0x00059a1b) ai5_sk_right_pane_g

0x8104,	// (0x00051c9a) ai5_sk_right_pane_t1

0x25fe,	// (0x0004c194) ai5_sk_middle_pane_g1

0x2606,	// (0x0004c19c) ai5_sk_middle_pane_g2

0x261e,	// (0x0004c1b4) ai5_sk_middle_pane_g3

0x80f4,	// (0x00051c8a) ai5_sk_middle_pane_g4

0x80ce,	// (0x00051c64) ai5_sk_middle_pane_g5

0x8112,	// (0x00051ca8) ai5_sk_middle_pane_g6

0xe263,	// (0x00057df9) ai5_sk_middle_pane_g7

0x0006,

0xfe8e,	// (0x00059a24) ai5_sk_middle_pane_g

0xb90f,	// (0x000554a5) aid_touch_area_size_lc0_ParamLimits

0xb90f,	// (0x000554a5) aid_touch_area_size_lc0

0x0dca,	// (0x0004a960) cell_hwr_candidate_pane_t1_ParamLimits

0x212e,	// (0x0004bcc4) aid_touch_navi_pane

0xbbb5,	// (0x0005574b) status_dt_navi_pane_ParamLimits

0xbbb5,	// (0x0005574b) status_dt_navi_pane

0xbbcd,	// (0x00055763) status_dt_sta_pane_ParamLimits

0xbbcd,	// (0x00055763) status_dt_sta_pane

0xe26b,	// (0x00057e01) dt_sta_controll_pane

0xe278,	// (0x00057e0e) dt_sta_indi_pane

0xe285,	// (0x00057e1b) dt_sta_title_pane

0x70de,	// (0x00050c74) bg_dt_sta_indi_pane_ParamLimits

0x70de,	// (0x00050c74) bg_dt_sta_indi_pane

0xe297,	// (0x00057e2d) dt_sta_battery_pane

0xe29f,	// (0x00057e35) dt_sta_indi_pane_g1

0xe2a8,	// (0x00057e3e) dt_sta_indi_pane_g2

0xe2b1,	// (0x00057e47) dt_sta_indi_pane_g3

0x0002,

0xfe9d,	// (0x00059a33) dt_sta_indi_pane_g

0xe2ba,	// (0x00057e50) dt_sta_signal_pane

0xa264,	// (0x00053dfa) bg_dt_sta_title_pane_ParamLimits

0xa264,	// (0x00053dfa) bg_dt_sta_title_pane

0xe2c3,	// (0x00057e59) dt_sta_title_pane_g1

0xe2cb,	// (0x00057e61) dt_sta_title_pane_t1_ParamLimits

0xe2cb,	// (0x00057e61) dt_sta_title_pane_t1

0x6f2f,	// (0x00050ac5) bg_dt_sta_control_pane

0xe2e0,	// (0x00057e76) dt_sta_controll_pane_g1

0xe2e9,	// (0x00057e7f) bg_dt_sta_title_pane_g1

0xe2f2,	// (0x00057e88) bg_dt_sta_title_pane_g2

0xe2fb,	// (0x00057e91) bg_dt_sta_title_pane_g3

0x0002,

0xfea4,	// (0x00059a3a) bg_dt_sta_title_pane_g

0x4c3a,	// (0x0004e7d0) bg_dt_sta_indi_pane_g1

0x81c0,	// (0x00051d56) dt_sta_signal_pane_g1

0x81c8,	// (0x00051d5e) dt_sta_signal_pane_g2

0x0001,

0xfeab,	// (0x00059a41) dt_sta_signal_pane_g

0x81d0,	// (0x00051d66) dt_sta_battery_pane_g1

0x81d9,	// (0x00051d6f) dt_sta_battery_pane_t1

0x4c3a,	// (0x0004e7d0) bg_dt_sta_control_pane_g1

0xaa3d,	// (0x000545d3) fep_china_uni_eep_pane

0xaa45,	// (0x000545db) fep_china_uni_entry_pane_ParamLimits

0xaa55,	// (0x000545eb) popup_fep_china_uni_window_g1_ParamLimits

0xaa65,	// (0x000545fb) popup_fep_china_uni_window_g2_ParamLimits

0xaa65,	// (0x000545fb) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x000592b8) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x000592b8) popup_fep_china_uni_window_g

0x81e8,	// (0x00051d7e) fep_china_uni_eep_pane_g1

0x81f0,	// (0x00051d86) fep_china_uni_eep_pane_t1

0x778b,	// (0x00051321) aid_touch_area_size_smil_player

0x2286,	// (0x0004be1c) lc0_clock_pane

0x2485,	// (0x0004c01b) status_pane_g5_ParamLimits

0x2485,	// (0x0004c01b) status_pane_g5

0xb364,	// (0x00054efa) popup_keymap_window

0x2443,	// (0x0004bfd9) status_icon_pane

0x7e57,	// (0x000519ed) cell_ai5_widget_pane_g3_ParamLimits

0x7e6e,	// (0x00051a04) cell_ai5_widget_pane_g4_ParamLimits

0x7e7a,	// (0x00051a10) cell_ai5_widget_pane_g5_ParamLimits

0x7e9e,	// (0x00051a34) cell_ai5_widget_pane_g8_ParamLimits

0x7e9e,	// (0x00051a34) cell_ai5_widget_pane_g8

0x7eb2,	// (0x00051a48) cell_ai5_widget_pane_g9_ParamLimits

0x7eb2,	// (0x00051a48) cell_ai5_widget_pane_g9

0x7ec6,	// (0x00051a5c) cell_ai5_widget_pane_g10_ParamLimits

0x7ec6,	// (0x00051a5c) cell_ai5_widget_pane_g10

0x81ff,	// (0x00051d95) status_icon_pane_g1

0x6f2f,	// (0x00050ac5) bg_popup_sub_pane_cp13

0x8207,	// (0x00051d9d) popup_keymap_window_t1

0xb053,	// (0x00054be9) control_pane_g6_ParamLimits

0xb053,	// (0x00054be9) control_pane_g6

0xb060,	// (0x00054bf6) control_pane_g7_ParamLimits

0xb060,	// (0x00054bf6) control_pane_g7

0xb06d,	// (0x00054c03) control_pane_g8_ParamLimits

0xb06d,	// (0x00054c03) control_pane_g8

0xe26b,	// (0x00057e01) dt_sta_controll_pane_ParamLimits

0xe278,	// (0x00057e0e) dt_sta_indi_pane_ParamLimits

0xe285,	// (0x00057e1b) dt_sta_title_pane_ParamLimits

0x7502,	// (0x00051098) aid_size_touch_scroll_bar_cale

0xf067,	// (0x00058bfd) popup_discreet_window_ParamLimits

0xf067,	// (0x00058bfd) popup_discreet_window

0x9d11,	// (0x000538a7) popup_sk_window

0x2c46,	// (0x0004c7dc) bg_popup_sub_pane_cp28_ParamLimits

0x2c46,	// (0x0004c7dc) bg_popup_sub_pane_cp28

0x8215,	// (0x00051dab) popup_discreet_window_g1_ParamLimits

0x8215,	// (0x00051dab) popup_discreet_window_g1

0x8235,	// (0x00051dcb) popup_discreet_window_t1_ParamLimits

0x8235,	// (0x00051dcb) popup_discreet_window_t1

0x8253,	// (0x00051de9) popup_discreet_window_t2_ParamLimits

0x8253,	// (0x00051de9) popup_discreet_window_t2

0x0002,

0xfeb0,	// (0x00059a46) popup_discreet_window_t_ParamLimits

0xfeb0,	// (0x00059a46) popup_discreet_window_t

0x1825,	// (0x0004b3bb) popup_sk_window_g1

0x182f,	// (0x0004b3c5) popup_sk_window_g2

0x0001,

0xfeb7,	// (0x00059a4d) popup_sk_window_g

0x1839,	// (0x0004b3cf) popup_sk_window_t1

0x1849,	// (0x0004b3df) popup_sk_window_t1_copy1

0x7e47,	// (0x000519dd) cell_ai5_widget_pane_g2_ParamLimits

0x7fa0,	// (0x00051b36) cell_ai5_widget_pane_t9_ParamLimits

0x7fa0,	// (0x00051b36) cell_ai5_widget_pane_t9

0x6f2f,	// (0x00050ac5) main_fep_fshwr2_pane

0xc424,	// (0x00055fba) aid_fshwr2_btn_pane

0xc435,	// (0x00055fcb) aid_fshwr2_syb_pane

0xc446,	// (0x00055fdc) aid_fshwr2_txt_pane

0xc452,	// (0x00055fe8) fshwr2_func_candi_pane

0xc473,	// (0x00056009) fshwr2_hwr_syb_pane

0xc490,	// (0x00056026) fshwr2_icf_pane

0x6f2f,	// (0x00050ac5) fshwr2_icf_bg_pane

0x18cb,	// (0x0004b461) fshwr2_icf_pane_t1_ParamLimits

0x18cb,	// (0x0004b461) fshwr2_icf_pane_t1

0xa916,	// (0x000544ac) fshwr2_func_candi_pane_g1

0xe304,	// (0x00057e9a) fshwr2_func_candi_row_pane_ParamLimits

0xe304,	// (0x00057e9a) fshwr2_func_candi_row_pane

0xc4bc,	// (0x00056052) cell_fshwr2_syb_pane_ParamLimits

0xc4bc,	// (0x00056052) cell_fshwr2_syb_pane

0x4eb5,	// (0x0004ea4b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4eb5,	// (0x0004ea4b) fshwr2_hwr_syb_pane_g1

0x6f2f,	// (0x00050ac5) bg_popup_call_pane_cp01

0xc4d2,	// (0x00056068) fshwr2_func_candi_cell_pane_ParamLimits

0xc4d2,	// (0x00056068) fshwr2_func_candi_cell_pane

0xe314,	// (0x00057eaa) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe314,	// (0x00057eaa) fshwr2_func_candi_cell_bg_pane

0xc502,	// (0x00056098) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc502,	// (0x00056098) fshwr2_func_candi_cell_pane_g1

0xc531,	// (0x000560c7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc531,	// (0x000560c7) fshwr2_func_candi_cell_pane_t1

0x6f2f,	// (0x00050ac5) bg_button_pane_cp08

0x82c1,	// (0x00051e57) cell_fshwr2_syb_bg_pane

0xc544,	// (0x000560da) cell_fshwr2_syb_bg_pane_g1

0xc54c,	// (0x000560e2) cell_fshwr2_syb_bg_pane_t1

0xa264,	// (0x00053dfa) main_tmo_pane

0xc805,	// (0x0005639b) uni_indicator_pane_g1_ParamLimits

0xc81b,	// (0x000563b1) uni_indicator_pane_g2_ParamLimits

0xc831,	// (0x000563c7) uni_indicator_pane_g3_ParamLimits

0xc846,	// (0x000563dc) uni_indicator_pane_g4_ParamLimits

0xc846,	// (0x000563dc) uni_indicator_pane_g4

0x37bf,	// (0x0004d355) uni_indicator_pane_g5_ParamLimits

0x37bf,	// (0x0004d355) uni_indicator_pane_g5

0x37bf,	// (0x0004d355) uni_indicator_pane_g6_ParamLimits

0x37bf,	// (0x0004d355) uni_indicator_pane_g6

0xf921,	// (0x000594b7) uni_indicator_pane_g_ParamLimits

0xd343,	// (0x00056ed9) popup_tmo_note_window_ParamLimits

0xd343,	// (0x00056ed9) popup_tmo_note_window

0xa264,	// (0x00053dfa) fshwr2_bg_pane

0xc522,	// (0x000560b8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc522,	// (0x000560b8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebc,	// (0x00059a52) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebc,	// (0x00059a52) fshwr2_func_candi_cell_pane_g

0x4c3a,	// (0x0004e7d0) bg_popup_window_pane_cp01

0x1977,	// (0x0004b50d) bg_popup_window_pane_g1_cp01

0x82c9,	// (0x00051e5f) bg_popup_window_pane_cp22_ParamLimits

0x82c9,	// (0x00051e5f) bg_popup_window_pane_cp22

0x82d7,	// (0x00051e6d) listscroll_tmo_link_pane_ParamLimits

0x82d7,	// (0x00051e6d) listscroll_tmo_link_pane

0x8317,	// (0x00051ead) popup_tmo_note_window_g1_ParamLimits

0x8317,	// (0x00051ead) popup_tmo_note_window_g1

0x8324,	// (0x00051eba) tmo_note_info_pane_ParamLimits

0x8324,	// (0x00051eba) tmo_note_info_pane

0xe320,	// (0x00057eb6) list_tmo_note_info_pane_g1_ParamLimits

0xe320,	// (0x00057eb6) list_tmo_note_info_pane_g1

0x8355,	// (0x00051eeb) list_tmo_note_info_pane_g2_ParamLimits

0x8355,	// (0x00051eeb) list_tmo_note_info_pane_g2

0x0001,

0xfec1,	// (0x00059a57) list_tmo_note_info_pane_g_ParamLimits

0xfec1,	// (0x00059a57) list_tmo_note_info_pane_g

0x8371,	// (0x00051f07) list_tmo_note_info_text_pane_ParamLimits

0x8371,	// (0x00051f07) list_tmo_note_info_text_pane

0x83f6,	// (0x00051f8c) list_tmo_link_pane

0x8403,	// (0x00051f99) scroll_pane_cp20

0x8410,	// (0x00051fa6) list_single_tmo_link_pane_ParamLimits

0x8410,	// (0x00051fa6) list_single_tmo_link_pane

0x8420,	// (0x00051fb6) list_single_tmo_link_pane_t1

0x842e,	// (0x00051fc4) list_tmo_note_info_text_pane_t1_ParamLimits

0x842e,	// (0x00051fc4) list_tmo_note_info_text_pane_t1

0xa31e,	// (0x00053eb4) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa31e,	// (0x00053eb4) aid_size_touch_scroll_bar_cp01

0x98d2,	// (0x00053468) aid_size_touch_slider_marker

0x9d01,	// (0x00053897) popup_settings_window_ParamLimits

0x9d01,	// (0x00053897) popup_settings_window

0xe968,	// (0x000584fe) popup_candi_list_indi_window

0x212e,	// (0x0004bcc4) aid_touch_navi_pane_ParamLimits

0x1024,	// (0x0004abba) rs_clock_indi_pane

0x102d,	// (0x0004abc3) sctrl_sk_bottom_pane_ParamLimits

0x103e,	// (0x0004abd4) sctrl_sk_top_pane_ParamLimits

0x1127,	// (0x0004acbd) popup_fep_tooltip_window

0x7dc5,	// (0x0005195b) aid_size_cell_widget_grid_ParamLimits

0x7e32,	// (0x000519c8) cell_ai5_widget_pane_g1_ParamLimits

0x7e32,	// (0x000519c8) cell_ai5_widget_pane_g1

0xe22d,	// (0x00057dc3) cell_ai5_widget_pane_g6_ParamLimits

0xe239,	// (0x00057dcf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3f,	// (0x000599d5) cell_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x000599d5) cell_ai5_widget_pane_g

0x7fc4,	// (0x00051b5a) cell_ai5_widget_pane_t10_ParamLimits

0x7fc4,	// (0x00051b5a) cell_ai5_widget_pane_t10

0x7fe2,	// (0x00051b78) grid_ai5_widget_pane_ParamLimits

0x8080,	// (0x00051c16) cell_contacts_ai5_widget_pane_ParamLimits

0x8080,	// (0x00051c16) cell_contacts_ai5_widget_pane

0x8268,	// (0x00051dfe) popup_discreet_window_t3_ParamLimits

0x8268,	// (0x00051dfe) popup_discreet_window_t3

0xc4a8,	// (0x0005603e) popup_fshwr2_char_preview_window_ParamLimits

0xc4a8,	// (0x0005603e) popup_fshwr2_char_preview_window

0xe337,	// (0x00057ecd) tmo_note_info_pane_t1

0xe34c,	// (0x00057ee2) tmo_note_info_pane_t2

0xe365,	// (0x00057efb) tmo_note_info_pane_t3

0x83d2,	// (0x00051f68) tmo_note_info_pane_t4

0x83e4,	// (0x00051f7a) tmo_note_info_pane_t5

0x0004,

0xfec6,	// (0x00059a5c) tmo_note_info_pane_t

0x83f6,	// (0x00051f8c) list_tmo_link_pane_ParamLimits

0x8403,	// (0x00051f99) scroll_pane_cp20_ParamLimits

0x6f2f,	// (0x00050ac5) bg_popup_fep_char_preview_window_cp01

0x8447,	// (0x00051fdd) popup_fshwr2_char_preview_window_t1

0x8455,	// (0x00051feb) popup_candi_list_indi_window_g1

0x845e,	// (0x00051ff4) bg_cell_contacts_ai5_widget_pane

0x846a,	// (0x00052000) cell_contacts_ai5_widget_pane_g1

0x847f,	// (0x00052015) cell_contacts_ai5_widget_pane_g2

0x848b,	// (0x00052021) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed1,	// (0x00059a67) cell_contacts_ai5_widget_pane_g

0x8497,	// (0x0005202d) cell_contacts_ai5_widget_pane_t1

0xa264,	// (0x00053dfa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe3df,	// (0x00057f75) settings_container_pane

0xe7f5,	// (0x0005838b) listscroll_set_pane_copy1

0x435b,	// (0x0004def1) scroll_pane_cp121_copy1

0x851a,	// (0x000520b0) set_content_pane_copy1

0xe3eb,	// (0x00057f81) aid_height_set_list_copy1_ParamLimits

0xe3eb,	// (0x00057f81) aid_height_set_list_copy1

0x39bf,	// (0x0004d555) aid_size_parent_copy1_ParamLimits

0x39bf,	// (0x0004d555) aid_size_parent_copy1

0xe3f7,	// (0x00057f8d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe3f7,	// (0x00057f8d) button_value_adjust_pane_cp6_copy1

0x04b5,	// (0x0004a04b) list_highlight_pane_cp2_copy1_ParamLimits

0x04b5,	// (0x0004a04b) list_highlight_pane_cp2_copy1

0xe40b,	// (0x00057fa1) list_set_pane_copy1_ParamLimits

0xe40b,	// (0x00057fa1) list_set_pane_copy1

0xe37a,	// (0x00057f10) main_pane_set_t1_copy1_ParamLimits

0xe37a,	// (0x00057f10) main_pane_set_t1_copy1

0xe3b4,	// (0x00057f4a) main_pane_set_t2_copy1_ParamLimits

0xe3b4,	// (0x00057f4a) main_pane_set_t2_copy1

0xe4d2,	// (0x00058068) main_pane_set_t3_copy1

0xe4e0,	// (0x00058076) main_pane_set_t4_copy1

0xe3d3,	// (0x00057f69) set_content_pane_g1_copy1_ParamLimits

0xe3d3,	// (0x00057f69) set_content_pane_g1_copy1

0xe4ee,	// (0x00058084) setting_code_pane_copy1

0x862d,	// (0x000521c3) setting_slider_graphic_pane_copy1

0x862d,	// (0x000521c3) setting_slider_pane_copy1

0x862d,	// (0x000521c3) setting_text_pane_copy1

0x862d,	// (0x000521c3) setting_volume_pane_copy1

0xe4ee,	// (0x00058084) settings_code_pane_cp2_copy1

0xe4f6,	// (0x0005808c) settings_code_pane_cp_copy1_ParamLimits

0xe4f6,	// (0x0005808c) settings_code_pane_cp_copy1

0xc55b,	// (0x000560f1) volume_set_pane_copy1

0xe50a,	// (0x000580a0) volume_set_pane_g10_copy1

0xe516,	// (0x000580ac) volume_set_pane_g1_copy1

0xe520,	// (0x000580b6) volume_set_pane_g2_copy1

0xe52a,	// (0x000580c0) volume_set_pane_g3_copy1

0xe534,	// (0x000580ca) volume_set_pane_g4_copy1

0xe53e,	// (0x000580d4) volume_set_pane_g5_copy1

0xe548,	// (0x000580de) volume_set_pane_g6_copy1

0xe552,	// (0x000580e8) volume_set_pane_g7_copy1

0xe55c,	// (0x000580f2) volume_set_pane_g8_copy1

0xe566,	// (0x000580fc) volume_set_pane_g9_copy1

0x6f9d,	// (0x00050b33) bg_set_opt_pane_cp_copy1_ParamLimits

0x6f9d,	// (0x00050b33) bg_set_opt_pane_cp_copy1

0x198c,	// (0x0004b522) setting_slider_pane_t1_copy1_ParamLimits

0x198c,	// (0x0004b522) setting_slider_pane_t1_copy1

0xc567,	// (0x000560fd) setting_slider_pane_t2_copy1_ParamLimits

0xc567,	// (0x000560fd) setting_slider_pane_t2_copy1

0xc581,	// (0x00056117) setting_slider_pane_t3_copy1_ParamLimits

0xc581,	// (0x00056117) setting_slider_pane_t3_copy1

0xc599,	// (0x0005612f) slider_set_pane_copy1_ParamLimits

0xc599,	// (0x0005612f) slider_set_pane_copy1

0xa2bf,	// (0x00053e55) set_opt_bg_pane_g1_copy2

0xa2c7,	// (0x00053e5d) set_opt_bg_pane_g2_copy2

0x86af,	// (0x00052245) set_opt_bg_pane_g3_copy2

0xa2d7,	// (0x00053e6d) set_opt_bg_pane_g4_copy2

0xa2df,	// (0x00053e75) set_opt_bg_pane_g5_copy2

0xa2e7,	// (0x00053e7d) set_opt_bg_pane_g6_copy2

0xe570,	// (0x00058106) set_opt_bg_pane_g7_copy2

0x86c3,	// (0x00052259) set_opt_bg_pane_g8_copy2

0x86cd,	// (0x00052263) set_opt_bg_pane_g9_copy2

0x19f2,	// (0x0004b588) aid_size_touch_slider_mark_copy1_ParamLimits

0x19f2,	// (0x0004b588) aid_size_touch_slider_mark_copy1

0x86d7,	// (0x0005226d) slider_set_pane_g1_copy1

0x1a06,	// (0x0004b59c) slider_set_pane_g2_copy1

0x092c,	// (0x0004a4c2) slider_set_pane_g3_copy1_ParamLimits

0x092c,	// (0x0004a4c2) slider_set_pane_g3_copy1

0x0940,	// (0x0004a4d6) slider_set_pane_g4_copy1_ParamLimits

0x0940,	// (0x0004a4d6) slider_set_pane_g4_copy1

0x0958,	// (0x0004a4ee) slider_set_pane_g5_copy1_ParamLimits

0x0958,	// (0x0004a4ee) slider_set_pane_g5_copy1

0x092c,	// (0x0004a4c2) slider_set_pane_g6_copy1_ParamLimits

0x092c,	// (0x0004a4c2) slider_set_pane_g6_copy1

0xc5af,	// (0x00056145) slider_set_pane_g7_copy1_ParamLimits

0xc5af,	// (0x00056145) slider_set_pane_g7_copy1

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp2_copy1

0x86e0,	// (0x00052276) setting_slider_graphic_pane_g1_copy1

0xe57a,	// (0x00058110) setting_slider_graphic_pane_t1_copy1

0xe58a,	// (0x00058120) setting_slider_graphic_pane_t2_copy1

0xe59a,	// (0x00058130) slider_set_pane_cp_copy1

0x8719,	// (0x000522af) input_focus_pane_cp1_copy1

0x8722,	// (0x000522b8) list_set_text_pane_copy1

0x872a,	// (0x000522c0) setting_text_pane_g1_copy1

0xe5db,	// (0x00058171) set_text_pane_t1_copy1

0x8719,	// (0x000522af) input_focus_pane_cp2_copy1

0x872a,	// (0x000522c0) setting_code_pane_g1_copy1

0xe5a2,	// (0x00058138) setting_code_pane_t1_copy1

0xe5b0,	// (0x00058146) list_set_graphic_pane_copy1

0x6f43,	// (0x00050ad9) bg_set_opt_pane_cp4_copy1

0xac4f,	// (0x000547e5) list_set_graphic_pane_g1_copy1_ParamLimits

0xac4f,	// (0x000547e5) list_set_graphic_pane_g1_copy1

0xe5c2,	// (0x00058158) list_set_graphic_pane_g2_copy1

0xac67,	// (0x000547fd) list_set_graphic_pane_t1_copy1_ParamLimits

0xac67,	// (0x000547fd) list_set_graphic_pane_t1_copy1

0x4c3a,	// (0x0004e7d0) rs_clock_indi_pane_g1

0x875b,	// (0x000522f1) rs_clock_indi_pane_t1

0x8769,	// (0x000522ff) rs_indi_pane

0x8771,	// (0x00052307) rs_indi_pane_g1

0x877a,	// (0x00052310) rs_indi_pane_g2

0x8783,	// (0x00052319) rs_indi_pane_g3

0x0002,

0xfed8,	// (0x00059a6e) rs_indi_pane_g

0xe7f5,	// (0x0005838b) bg_popup_preview_window_pane_cp03

0x878c,	// (0x00052322) popup_fep_tooltip_window_t1

0x58f1,	// (0x0004f487) popup_note2_window_g2_ParamLimits

0x58f1,	// (0x0004f487) popup_note2_window_g2

0x0001,

0xfc71,	// (0x00059807) popup_note2_window_g_ParamLimits

0xfc71,	// (0x00059807) popup_note2_window_g

0x5df9,	// (0x0004f98f) bg_popup_sub_pane_cp11_ParamLimits

0x5e06,	// (0x0004f99c) cell_ai3_links_pane_g1_ParamLimits

0x5e1d,	// (0x0004f9b3) cell_ai3_links_pane_t1

0xe5db,	// (0x00058171) set_text_pane_t1_copy1_ParamLimits

0xae6d,	// (0x00054a03) cell_graphic_popup_pane_cp2_ParamLimits

0xae6d,	// (0x00054a03) cell_graphic_popup_pane_cp2

0xe5ca,	// (0x00058160) cell_graphic_popup_pane_g1_cp2

0x7315,	// (0x00050eab) cell_graphic_popup_pane_g2_cp2

0x87a2,	// (0x00052338) cell_graphic_popup_pane_g3_cp2

0x87aa,	// (0x00052340) cell_graphic_popup_pane_t2_cp2

0x7326,	// (0x00050ebc) grid_highlight_pane_cp3_cp2

0xa5f1,	// (0x00054187) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa264,	// (0x00053dfa) main_tmo_pane_ParamLimits

0xd337,	// (0x00056ecd) popup_tmo_big_image_note_window

0x7e21,	// (0x000519b7) cell_ai5_widget_list_pane

0x7e29,	// (0x000519bf) cell_ai5_widget_lrg_icon_pane

0xe337,	// (0x00057ecd) tmo_note_info_pane_t1_ParamLimits

0xe34c,	// (0x00057ee2) tmo_note_info_pane_t2_ParamLimits

0xe365,	// (0x00057efb) tmo_note_info_pane_t3_ParamLimits

0x83d2,	// (0x00051f68) tmo_note_info_pane_t4_ParamLimits

0x83e4,	// (0x00051f7a) tmo_note_info_pane_t5_ParamLimits

0xfec6,	// (0x00059a5c) tmo_note_info_pane_t_ParamLimits

0xe3df,	// (0x00057f75) settings_container_pane_ParamLimits

0x8711,	// (0x000522a7) indicator_popup_pane_cp5

0x8711,	// (0x000522a7) indicator_popup_pane_cp6

0xe5b0,	// (0x00058146) list_set_graphic_pane_copy1_ParamLimits

0x6f2f,	// (0x00050ac5) bg_popup_window_pane_cp23

0x87b8,	// (0x0005234e) popup_tmo_big_image_note_window_g1

0x87c4,	// (0x0005235a) popup_tmo_big_image_note_window_t1

0x87d4,	// (0x0005236a) popup_tmo_big_image_note_window_t2

0x87e4,	// (0x0005237a) popup_tmo_big_image_note_window_t3

0x0002,

0xfedf,	// (0x00059a75) popup_tmo_big_image_note_window_t

0x4c3a,	// (0x0004e7d0) cell_ai5_widget_lrg_icon_pane_g1

0x87f4,	// (0x0005238a) cell_ai5_widget_lrg_icon_pane_t1

0x8802,	// (0x00052398) cell_ai5_widget_list_row_pane_ParamLimits

0x8802,	// (0x00052398) cell_ai5_widget_list_row_pane

0x881a,	// (0x000523b0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x881a,	// (0x000523b0) cell_ai5_widget_list_row_pane_g1

0x8827,	// (0x000523bd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8827,	// (0x000523bd) cell_ai5_widget_list_row_pane_t1

0x8852,	// (0x000523e8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8852,	// (0x000523e8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee6,	// (0x00059a7c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee6,	// (0x00059a7c) cell_ai5_widget_list_row_pane_t

0x6f2f,	// (0x00050ac5) main_fep_vtchi_ss_pane

0x1a40,	// (0x0004b5d6) popup_fep_char_pre_window

0x1a48,	// (0x0004b5de) popup_fep_ituss_window

0x1a69,	// (0x0004b5ff) popup_fep_vkbss_window

0x887a,	// (0x00052410) grid_vkbss_keypad_pane_ParamLimits

0x887a,	// (0x00052410) grid_vkbss_keypad_pane

0x888a,	// (0x00052420) ituss_keypad_pane

0x1a97,	// (0x0004b62d) aid_vkbss_key_offset_ParamLimits

0x1a97,	// (0x0004b62d) aid_vkbss_key_offset

0x1aa3,	// (0x0004b639) cell_vkbss_key_pane_ParamLimits

0x1aa3,	// (0x0004b639) cell_vkbss_key_pane

0x8899,	// (0x0005242f) bg_cell_vkbss_key_g1_ParamLimits

0x8899,	// (0x0005242f) bg_cell_vkbss_key_g1

0x88a5,	// (0x0005243b) cell_vkbss_key_3p_pane_ParamLimits

0x88a5,	// (0x0005243b) cell_vkbss_key_3p_pane

0x88bf,	// (0x00052455) cell_vkbss_key_g1_ParamLimits

0x88bf,	// (0x00052455) cell_vkbss_key_g1

0x88d9,	// (0x0005246f) cell_vkbss_key_t1_ParamLimits

0x88d9,	// (0x0005246f) cell_vkbss_key_t1

0x1ab9,	// (0x0004b64f) cell_ituss_key_pane_ParamLimits

0x1ab9,	// (0x0004b64f) cell_ituss_key_pane

0x8904,	// (0x0005249a) bg_cell_ituss_key_g1_ParamLimits

0x8904,	// (0x0005249a) bg_cell_ituss_key_g1

0x8910,	// (0x000524a6) cell_ituss_key_pane_g1_ParamLimits

0x8910,	// (0x000524a6) cell_ituss_key_pane_g1

0x1aca,	// (0x0004b660) cell_ituss_key_pane_g2_ParamLimits

0x1aca,	// (0x0004b660) cell_ituss_key_pane_g2

0x0002,

0xfeed,	// (0x00059a83) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00059a83) cell_ituss_key_pane_g

0x1af6,	// (0x0004b68c) cell_ituss_key_t1_ParamLimits

0x1af6,	// (0x0004b68c) cell_ituss_key_t1

0x1b30,	// (0x0004b6c6) cell_ituss_key_t2_ParamLimits

0x1b30,	// (0x0004b6c6) cell_ituss_key_t2

0x1b61,	// (0x0004b6f7) cell_ituss_key_t3_ParamLimits

0x1b61,	// (0x0004b6f7) cell_ituss_key_t3

0x1b30,	// (0x0004b6c6) cell_ituss_key_t4_ParamLimits

0x1b30,	// (0x0004b6c6) cell_ituss_key_t4

0x0004,

0xfef4,	// (0x00059a8a) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x00059a8a) cell_ituss_key_t

0x8936,	// (0x000524cc) cell_vkbss_key_3p_pane_g1

0x893e,	// (0x000524d4) cell_vkbss_key_3p_pane_g2

0x8946,	// (0x000524dc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00059a95) cell_vkbss_key_3p_pane_g

0x6f2f,	// (0x00050ac5) bg_popup_fep_char_preview_window_cp02

0x1ba4,	// (0x0004b73a) popup_fep_char_pre_window_t1

0xe223,	// (0x00057db9) main_ai5_sk_pane

0x845e,	// (0x00051ff4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x846a,	// (0x00052000) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x847f,	// (0x00052015) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x848b,	// (0x00052021) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed1,	// (0x00059a67) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8497,	// (0x0005202d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa264,	// (0x00053dfa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe5d2,	// (0x00058168) main_ai5_sk_pane_g1

0x2a7e,	// (0x0004c614) popup_query_code_window_g1

0x1a5e,	// (0x0004b5f4) popup_fep_vkb_icf_pane

0x1a74,	// (0x0004b60a) popup_fep_vtchi_icf_pane

0x8957,	// (0x000524ed) bg_icf_pane

0x8963,	// (0x000524f9) list_vkb_icf_pane

0x896f,	// (0x00052505) bg_icf_pane_cp01

0x897b,	// (0x00052511) vtchi_icf_list_pane

0x898c,	// (0x00052522) list_vkb_icf_pane_t1_ParamLimits

0x898c,	// (0x00052522) list_vkb_icf_pane_t1

0x89a2,	// (0x00052538) vtchi_icf_list_pane_t1_ParamLimits

0x89a2,	// (0x00052538) vtchi_icf_list_pane_t1

0x1a48,	// (0x0004b5de) popup_fep_ituss_window_ParamLimits

0x1a74,	// (0x0004b60a) popup_fep_vtchi_icf_pane_ParamLimits

0x888a,	// (0x00052420) ituss_keypad_pane_ParamLimits

0x1a8b,	// (0x0004b621) ituss_sks_pane

0x8957,	// (0x000524ed) bg_icf_pane_ParamLimits

0x1a24,	// (0x0004b5ba) icf_edit_indi_pane_ParamLimits

0x1a24,	// (0x0004b5ba) icf_edit_indi_pane

0x8963,	// (0x000524f9) list_vkb_icf_pane_ParamLimits

0x896f,	// (0x00052505) bg_icf_pane_cp01_ParamLimits

0x1a33,	// (0x0004b5c9) icf_edit_indi_pane_cp01_ParamLimits

0x1a33,	// (0x0004b5c9) icf_edit_indi_pane_cp01

0x8983,	// (0x00052519) vtchi_query_pane

0x4eb5,	// (0x0004ea4b) icf_edit_indi_pane_g1_ParamLimits

0x4eb5,	// (0x0004ea4b) icf_edit_indi_pane_g1

0x1bc6,	// (0x0004b75c) icf_edit_indi_pane_g2_ParamLimits

0x1bc6,	// (0x0004b75c) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00059aad) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00059aad) icf_edit_indi_pane_g

0x1bd5,	// (0x0004b76b) icf_edit_indi_pane_t1

0x89ba,	// (0x00052550) bg_input_focus_pane_cp042

0x74f9,	// (0x0005108f) vtchi_button_pane

0x89c3,	// (0x00052559) vtchi_query_pane_t1

0x89d1,	// (0x00052567) vtchi_query_pane_t2

0x89df,	// (0x00052575) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00059a9c) vtchi_query_pane_t

0x6f2f,	// (0x00050ac5) bg_button_pane_cp13

0x89ed,	// (0x00052583) vtchi_button_pane_g1

0x1bb3,	// (0x0004b749) ituss_sks_pane_g1

0x1bbe,	// (0x0004b754) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00059aa3) ituss_sks_pane_g

0x89f5,	// (0x0005258b) ituss_sks_pane_t1

0x8a03,	// (0x00052599) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00059aa8) ituss_sks_pane_t

0x46ea,	// (0x0004e280) indicator_nsta_pane_cp_g1

0x46f3,	// (0x0004e289) indicator_nsta_pane_cp_g2

0x46fb,	// (0x0004e291) indicator_nsta_pane_cp_g3

0x4703,	// (0x0004e299) indicator_nsta_pane_cp_g4

0x470b,	// (0x0004e2a1) indicator_nsta_pane_cp_g5

0x4713,	// (0x0004e2a9) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x00059651) indicator_nsta_pane_cp_g

0xdd46,	// (0x000578dc) cell_graphic2_pane_t2_ParamLimits

0xdd46,	// (0x000578dc) cell_graphic2_pane_t2

0x0001,

0xfdc8,	// (0x0005995e) cell_graphic2_pane_t_ParamLimits

0xfdc8,	// (0x0005995e) cell_graphic2_pane_t

0xdd7c,	// (0x00057912) cell_graphic2_control_pane_t1

0xa9e6,	// (0x0005457c) signal_pane_g3_ParamLimits

0xa9e6,	// (0x0005457c) signal_pane_g3

0xa9fa,	// (0x00054590) signal_pane_g4_ParamLimits

0xa9fa,	// (0x00054590) signal_pane_g4

0x8864,	// (0x000523fa) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8864,	// (0x000523fa) cell_ai5_widget_list_row_pane_t3

0x8924,	// (0x000524ba) cell_ituss_key_pane_t1_ParamLimits

0x8924,	// (0x000524ba) cell_ituss_key_pane_t1

0x26fb,	// (0x0004c291) form_field_data_wide_pane_vc_t2_ParamLimits

0x26fb,	// (0x0004c291) form_field_data_wide_pane_vc_t2

0x270f,	// (0x0004c2a5) form_field_data_wide_pane_vc_t3_ParamLimits

0x270f,	// (0x0004c2a5) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005939f) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005939f) form_field_data_wide_pane_vc_t

0x439b,	// (0x0004df31) form_field_slider_wide_pane_vc_t3_ParamLimits

0x439b,	// (0x0004df31) form_field_slider_wide_pane_vc_t3

0x4471,	// (0x0004e007) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4471,	// (0x0004e007) form_field_popup_wide_pane_vc_t2

0x4488,	// (0x0004e01e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4488,	// (0x0004e01e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x00059640) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x00059640) form_field_popup_wide_pane_vc_t

0xc424,	// (0x00055fba) aid_fshwr2_btn_pane_ParamLimits

0xc435,	// (0x00055fcb) aid_fshwr2_syb_pane_ParamLimits

0xc446,	// (0x00055fdc) aid_fshwr2_txt_pane_ParamLimits

0xa264,	// (0x00053dfa) fshwr2_bg_pane_ParamLimits

0xc452,	// (0x00055fe8) fshwr2_func_candi_pane_ParamLimits

0xc473,	// (0x00056009) fshwr2_hwr_syb_pane_ParamLimits

0xc490,	// (0x00056026) fshwr2_icf_pane_ParamLimits

0x0b25,	// (0x0004a6bb) list_double_graphic_pane_vc_g4_ParamLimits

0x0b25,	// (0x0004a6bb) list_double_graphic_pane_vc_g4

0x1aea,	// (0x0004b680) cell_ituss_key_pane_g3_ParamLimits

0x1aea,	// (0x0004b680) cell_ituss_key_pane_g3

0x1b92,	// (0x0004b728) cell_ituss_key_t5_ParamLimits

0x1b92,	// (0x0004b728) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
