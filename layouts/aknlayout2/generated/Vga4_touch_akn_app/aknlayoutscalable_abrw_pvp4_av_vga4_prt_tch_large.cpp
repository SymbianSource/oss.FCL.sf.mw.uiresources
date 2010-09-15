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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00052e13 };

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
0x4caf,	// (0x00057ac2) Screen

0x4cbb,	// (0x00057ace) application_window_ParamLimits

0x4cbb,	// (0x00057ace) application_window

0xebd9,	// (0x000619ec) screen_g1

0x4d17,	// (0x00057b2a) area_bottom_pane_ParamLimits

0x4d17,	// (0x00057b2a) area_bottom_pane

0x4dd7,	// (0x00057bea) area_top_pane_ParamLimits

0x4dd7,	// (0x00057bea) area_top_pane

0x4e75,	// (0x00057c88) main_pane_ParamLimits

0x4e75,	// (0x00057c88) main_pane

0xebe3,	// (0x000619f6) misc_graphics

0x8985,	// (0x0005b798) battery_pane_ParamLimits

0x8985,	// (0x0005b798) battery_pane

0x967d,	// (0x0005c490) bg_status_flat_pane_g8

0x9685,	// (0x0005c498) bg_status_flat_pane_g9

0x8a4d,	// (0x0005b860) context_pane_ParamLimits

0x8a4d,	// (0x0005b860) context_pane

0x8b71,	// (0x0005b984) navi_pane_ParamLimits

0x8b71,	// (0x0005b984) navi_pane

0x8c01,	// (0x0005ba14) signal_pane_ParamLimits

0x8c01,	// (0x0005ba14) signal_pane

0x0008,

0xf859,	// (0x0006266c) bg_status_flat_pane_g

0x8c6e,	// (0x0005ba81) status_pane_g1_ParamLimits

0x8c6e,	// (0x0005ba81) status_pane_g1

0x8c7a,	// (0x0005ba8d) status_pane_g2_ParamLimits

0x8c7a,	// (0x0005ba8d) status_pane_g2

0x8c86,	// (0x0005ba99) status_pane_g3_ParamLimits

0x8c86,	// (0x0005ba99) status_pane_g3

0x0004,

0xf780,	// (0x00062593) status_pane_g_ParamLimits

0xf780,	// (0x00062593) status_pane_g

0x8cba,	// (0x0005bacd) title_pane_ParamLimits

0x8cba,	// (0x0005bacd) title_pane

0x8cf9,	// (0x0005bb0c) uni_indicator_pane_ParamLimits

0x8cf9,	// (0x0005bb0c) uni_indicator_pane

0x88b7,	// (0x0005b6ca) bg_list_pane_ParamLimits

0x88b7,	// (0x0005b6ca) bg_list_pane

0x6405,	// (0x00059218) find_pane

0x88d7,	// (0x0005b6ea) listscroll_app_pane_ParamLimits

0x88d7,	// (0x0005b6ea) listscroll_app_pane

0x88e3,	// (0x0005b6f6) listscroll_form_pane

0x640d,	// (0x00059220) listscroll_gen_pane_ParamLimits

0x640d,	// (0x00059220) listscroll_gen_pane

0x6421,	// (0x00059234) listscroll_set_pane

0x5b6e,	// (0x00058981) main_idle_act_pane

0x85b0,	// (0x0005b3c3) main_idle_trad_pane

0x85b0,	// (0x0005b3c3) main_list_empty_pane

0x88d7,	// (0x0005b6ea) main_midp_pane

0x88fd,	// (0x0005b710) main_pane_g1_ParamLimits

0x88fd,	// (0x0005b710) main_pane_g1

0x6437,	// (0x0005924a) popup_ai_message_window_ParamLimits

0x6437,	// (0x0005924a) popup_ai_message_window

0x64eb,	// (0x000592fe) popup_fep_china_uni_window_ParamLimits

0x64eb,	// (0x000592fe) popup_fep_china_uni_window

0x654b,	// (0x0005935e) popup_fep_japan_candidate_window_ParamLimits

0x654b,	// (0x0005935e) popup_fep_japan_candidate_window

0x6575,	// (0x00059388) popup_fep_japan_predictive_window_ParamLimits

0x6575,	// (0x00059388) popup_fep_japan_predictive_window

0x65ab,	// (0x000593be) popup_find_window

0x65b8,	// (0x000593cb) popup_grid_graphic_window_ParamLimits

0x65b8,	// (0x000593cb) popup_grid_graphic_window

0x65e8,	// (0x000593fb) popup_large_graphic_colour_window

0x660e,	// (0x00059421) popup_menu_window_ParamLimits

0x660e,	// (0x00059421) popup_menu_window

0x67d8,	// (0x000595eb) popup_note_image_window

0x67c2,	// (0x000595d5) popup_note_wait_window_ParamLimits

0x67c2,	// (0x000595d5) popup_note_wait_window

0x67c2,	// (0x000595d5) popup_note_window_ParamLimits

0x67c2,	// (0x000595d5) popup_note_window

0x683e,	// (0x00059651) popup_query_code_window_ParamLimits

0x683e,	// (0x00059651) popup_query_code_window

0x6854,	// (0x00059667) popup_query_data_code_window_ParamLimits

0x6854,	// (0x00059667) popup_query_data_code_window

0x6877,	// (0x0005968a) popup_query_data_window_ParamLimits

0x6877,	// (0x0005968a) popup_query_data_window

0x6899,	// (0x000596ac) popup_query_sat_info_window_ParamLimits

0x6899,	// (0x000596ac) popup_query_sat_info_window

0x68d8,	// (0x000596eb) popup_snote_single_graphic_window_ParamLimits

0x68d8,	// (0x000596eb) popup_snote_single_graphic_window

0x68d8,	// (0x000596eb) popup_snote_single_text_window_ParamLimits

0x68d8,	// (0x000596eb) popup_snote_single_text_window

0x68ef,	// (0x00059702) popup_sub_window_general

0x6a35,	// (0x00059848) popup_window_general_ParamLimits

0x6a35,	// (0x00059848) popup_window_general

0x890b,	// (0x0005b71e) power_save_pane

0x62bc,	// (0x000590cf) control_pane_g1_ParamLimits

0x62bc,	// (0x000590cf) control_pane_g1

0x62df,	// (0x000590f2) control_pane_g2_ParamLimits

0x62df,	// (0x000590f2) control_pane_g2

0x887a,	// (0x0005b68d) control_pane_g3_ParamLimits

0x887a,	// (0x0005b68d) control_pane_g3

0x0007,

0xf768,	// (0x0006257b) control_pane_g_ParamLimits

0xf768,	// (0x0006257b) control_pane_g

0x6324,	// (0x00059137) control_pane_t1_ParamLimits

0x6324,	// (0x00059137) control_pane_t1

0x636c,	// (0x0005917f) control_pane_t2_ParamLimits

0x636c,	// (0x0005917f) control_pane_t2

0x0002,

0xf779,	// (0x0006258c) control_pane_t_ParamLimits

0xf779,	// (0x0006258c) control_pane_t

0x879f,	// (0x0005b5b2) navi_navi_volume_pane_cp1

0x87a7,	// (0x0005b5ba) status_small_icon_pane

0x87af,	// (0x0005b5c2) status_small_pane_g1_ParamLimits

0x87af,	// (0x0005b5c2) status_small_pane_g1

0x87e3,	// (0x0005b5f6) status_small_pane_g2_ParamLimits

0x87e3,	// (0x0005b5f6) status_small_pane_g2

0x87ef,	// (0x0005b602) status_small_pane_g3_ParamLimits

0x87ef,	// (0x0005b602) status_small_pane_g3

0x87fb,	// (0x0005b60e) status_small_pane_g4_ParamLimits

0x87fb,	// (0x0005b60e) status_small_pane_g4

0x8807,	// (0x0005b61a) status_small_pane_g5_ParamLimits

0x8807,	// (0x0005b61a) status_small_pane_g5

0x8815,	// (0x0005b628) status_small_pane_g6_ParamLimits

0x8815,	// (0x0005b628) status_small_pane_g6

0x0007,

0xf757,	// (0x0006256a) status_small_pane_g_ParamLimits

0xf757,	// (0x0006256a) status_small_pane_g

0x8844,	// (0x0005b657) status_small_pane_t1

0x8866,	// (0x0005b679) status_small_wait_pane_ParamLimits

0x8866,	// (0x0005b679) status_small_wait_pane

0x5f38,	// (0x00058d4b) aid_levels_signal_ParamLimits

0x5f38,	// (0x00058d4b) aid_levels_signal

0x5f47,	// (0x00058d5a) signal_pane_g1_ParamLimits

0x5f47,	// (0x00058d5a) signal_pane_g1

0x5f5c,	// (0x00058d6f) signal_pane_g2_ParamLimits

0x5f5c,	// (0x00058d6f) signal_pane_g2

0x0003,

0xf6e8,	// (0x000624fb) signal_pane_g_ParamLimits

0xf6e8,	// (0x000624fb) signal_pane_g

0x31ef,	// (0x00056002) context_pane_g1

0x50d4,	// (0x00057ee7) title_pane_g1

0x5106,	// (0x00057f19) title_pane_t1

0xebf9,	// (0x00061a0c) title_pane_t2

0xec1f,	// (0x00061a32) title_pane_t3

0x0002,

0xf532,	// (0x00062345) title_pane_t

0x8d11,	// (0x0005bb24) aid_levels_battery_ParamLimits

0x8d11,	// (0x0005bb24) aid_levels_battery

0x8d22,	// (0x0005bb35) battery_pane_g1_ParamLimits

0x8d22,	// (0x0005bb35) battery_pane_g1

0x8d38,	// (0x0005bb4b) battery_pane_g2_ParamLimits

0x8d38,	// (0x0005bb4b) battery_pane_g2

0x0001,

0xf78b,	// (0x0006259e) battery_pane_g_ParamLimits

0xf78b,	// (0x0006259e) battery_pane_g

0xa1b5,	// (0x0005cfc8) uni_indicator_pane_g1

0xa1cb,	// (0x0005cfde) uni_indicator_pane_g2

0xa1e1,	// (0x0005cff4) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00062714) uni_indicator_pane_g

0x8413,	// (0x0005b226) navi_icon_pane_ParamLimits

0x8413,	// (0x0005b226) navi_icon_pane

0x8366,	// (0x0005b179) navi_midp_pane

0x842f,	// (0x0005b242) navi_navi_pane

0x8439,	// (0x0005b24c) navi_text_pane_ParamLimits

0x8439,	// (0x0005b24c) navi_text_pane

0xebd9,	// (0x000619ec) status_small_wait_pane_g1

0xef40,	// (0x00061d53) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x0006270f) status_small_wait_pane_g

0x9ec8,	// (0x0005ccdb) navi_navi_icon_text_pane

0x9ed0,	// (0x0005cce3) navi_navi_pane_g1_ParamLimits

0x9ed0,	// (0x0005cce3) navi_navi_pane_g1

0x9ee2,	// (0x0005ccf5) navi_navi_pane_g2_ParamLimits

0x9ee2,	// (0x0005ccf5) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x000626dd) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x000626dd) navi_navi_pane_g

0x9ef4,	// (0x0005cd07) navi_navi_tabs_pane

0x9efd,	// (0x0005cd10) navi_navi_text_pane

0x9ec8,	// (0x0005ccdb) navi_navi_volume_pane

0x9ea4,	// (0x0005ccb7) navi_text_pane_t1

0x9e98,	// (0x0005ccab) navi_icon_pane_g1

0x9bfd,	// (0x0005ca10) navi_navi_text_pane_t1

0x6d11,	// (0x00059b24) navi_navi_volume_pane_g1

0x6d19,	// (0x00059b2c) volume_small_pane

0x9b63,	// (0x0005c976) navi_navi_icon_text_pane_g1

0x9b6b,	// (0x0005c97e) navi_navi_icon_text_pane_t1

0x842f,	// (0x0005b242) navi_tabs_2_long_pane

0x842f,	// (0x0005b242) navi_tabs_2_pane

0x842f,	// (0x0005b242) navi_tabs_3_long_pane

0x842f,	// (0x0005b242) navi_tabs_3_pane

0x842f,	// (0x0005b242) navi_tabs_4_pane

0x6cf1,	// (0x00059b04) tabs_2_active_pane_ParamLimits

0x6cf1,	// (0x00059b04) tabs_2_active_pane

0x6d01,	// (0x00059b14) tabs_2_passive_pane_ParamLimits

0x6d01,	// (0x00059b14) tabs_2_passive_pane

0x6cbf,	// (0x00059ad2) tabs_3_active_pane_ParamLimits

0x6cbf,	// (0x00059ad2) tabs_3_active_pane

0x6ccf,	// (0x00059ae2) tabs_3_passive_pane_ParamLimits

0x6ccf,	// (0x00059ae2) tabs_3_passive_pane

0x6ce0,	// (0x00059af3) tabs_3_passive_pane_cp_ParamLimits

0x6ce0,	// (0x00059af3) tabs_3_passive_pane_cp

0x6c73,	// (0x00059a86) tabs_4_active_pane_ParamLimits

0x6c73,	// (0x00059a86) tabs_4_active_pane

0x6c86,	// (0x00059a99) tabs_4_passive_pane_ParamLimits

0x6c86,	// (0x00059a99) tabs_4_passive_pane

0x6c97,	// (0x00059aaa) tabs_4_passive_pane_cp_ParamLimits

0x6c97,	// (0x00059aaa) tabs_4_passive_pane_cp

0x6ca8,	// (0x00059abb) tabs_4_passive_pane_cp2_ParamLimits

0x6ca8,	// (0x00059abb) tabs_4_passive_pane_cp2

0x6c4f,	// (0x00059a62) tabs_2_long_active_pane_ParamLimits

0x6c4f,	// (0x00059a62) tabs_2_long_active_pane

0x6c61,	// (0x00059a74) tabs_2_long_passive_pane_ParamLimits

0x6c61,	// (0x00059a74) tabs_2_long_passive_pane

0x6c10,	// (0x00059a23) tabs_3_long_active_pane_ParamLimits

0x6c10,	// (0x00059a23) tabs_3_long_active_pane

0x6c23,	// (0x00059a36) tabs_3_long_passive_pane_ParamLimits

0x6c23,	// (0x00059a36) tabs_3_long_passive_pane

0x6c3c,	// (0x00059a4f) tabs_3_long_passive_pane_cp_ParamLimits

0x6c3c,	// (0x00059a4f) tabs_3_long_passive_pane_cp

0x6bb6,	// (0x000599c9) volume_small_pane_g1

0x6bbf,	// (0x000599d2) volume_small_pane_g2

0x6bc8,	// (0x000599db) volume_small_pane_g3

0x6bd1,	// (0x000599e4) volume_small_pane_g4

0x6bda,	// (0x000599ed) volume_small_pane_g5

0x6be3,	// (0x000599f6) volume_small_pane_g6

0x6bec,	// (0x000599ff) volume_small_pane_g7

0x6bf5,	// (0x00059a08) volume_small_pane_g8

0x6bfe,	// (0x00059a11) volume_small_pane_g9

0x6c07,	// (0x00059a1a) volume_small_pane_g10

0x0009,

0xf896,	// (0x000626a9) volume_small_pane_g

0xec31,	// (0x00061a44) bg_active_tab_pane_cp2_ParamLimits

0xec31,	// (0x00061a44) bg_active_tab_pane_cp2

0x516e,	// (0x00057f81) tabs_3_active_pane_g1

0x5176,	// (0x00057f89) tabs_3_active_pane_t1

0xec31,	// (0x00061a44) bg_passive_tab_pane_cp2_ParamLimits

0xec31,	// (0x00061a44) bg_passive_tab_pane_cp2

0x516e,	// (0x00057f81) tabs_3_passive_pane_g1

0x5176,	// (0x00057f89) tabs_3_passive_pane_t1

0xec31,	// (0x00061a44) bg_active_tab_pane_cp3_ParamLimits

0xec31,	// (0x00061a44) bg_active_tab_pane_cp3

0x5188,	// (0x00057f9b) tabs_4_active_pane_g1

0x5190,	// (0x00057fa3) tabs_4_active_pane_t1

0xec31,	// (0x00061a44) bg_passive_tab_pane_cp3_ParamLimits

0xec31,	// (0x00061a44) bg_passive_tab_pane_cp3

0x5188,	// (0x00057f9b) tabs_4_1_passive_pane_g1

0x5190,	// (0x00057fa3) tabs_4_1_passive_pane_t1

0x88d7,	// (0x0005b6ea) list_highlight_pane_cp2

0xa42e,	// (0x0005d241) list_set_pane_ParamLimits

0xa42e,	// (0x0005d241) list_set_pane

0xa4f0,	// (0x0005d303) main_pane_set_t1_ParamLimits

0xa4f0,	// (0x0005d303) main_pane_set_t1

0xa510,	// (0x0005d323) main_pane_set_t2_ParamLimits

0xa510,	// (0x0005d323) main_pane_set_t2

0xa524,	// (0x0005d337) main_pane_set_t3_ParamLimits

0xa524,	// (0x0005d337) main_pane_set_t3

0xa538,	// (0x0005d34b) main_pane_set_t4_ParamLimits

0xa538,	// (0x0005d34b) main_pane_set_t4

0x0003,

0xf966,	// (0x00062779) main_pane_set_t_ParamLimits

0xf966,	// (0x00062779) main_pane_set_t

0xa54c,	// (0x0005d35f) setting_code_pane

0xa556,	// (0x0005d369) setting_slider_graphic_pane

0xa556,	// (0x0005d369) setting_slider_pane

0xa556,	// (0x0005d369) setting_text_pane

0xa556,	// (0x0005d369) setting_volume_pane

0x51a2,	// (0x00057fb5) volume_set_pane

0xec31,	// (0x00061a44) bg_set_opt_pane_cp

0x51ac,	// (0x00057fbf) setting_slider_pane_t1

0x51c5,	// (0x00057fd8) setting_slider_pane_t2

0x51df,	// (0x00057ff2) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006234c) setting_slider_pane_t

0x51f7,	// (0x0005800a) slider_set_pane

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp2

0xec3f,	// (0x00061a52) setting_slider_graphic_pane_g1

0x520d,	// (0x00058020) setting_slider_graphic_pane_t1

0x521d,	// (0x00058030) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00062353) setting_slider_graphic_pane_t

0x522d,	// (0x00058040) slider_set_pane_cp

0xebe3,	// (0x000619f6) input_focus_pane_cp1

0xa3ef,	// (0x0005d202) list_set_text_pane

0xebd9,	// (0x000619ec) setting_text_pane_g1

0xebe3,	// (0x000619f6) input_focus_pane_cp2

0xebd9,	// (0x000619ec) setting_code_pane_g1

0xec48,	// (0x00061a5b) setting_code_pane_t1

0x2fd2,	// (0x00055de5) set_text_pane_t1_ParamLimits

0x2fd2,	// (0x00055de5) set_text_pane_t1

0xf2d9,	// (0x000620ec) set_opt_bg_pane_g1

0xf2e1,	// (0x000620f4) set_opt_bg_pane_g2

0xa3c7,	// (0x0005d1da) set_opt_bg_pane_g3

0xf2f1,	// (0x00062104) set_opt_bg_pane_g4

0xf2f9,	// (0x0006210c) set_opt_bg_pane_g5

0xf301,	// (0x00062114) set_opt_bg_pane_g6

0xa3d1,	// (0x0005d1e4) set_opt_bg_pane_g7

0xa3db,	// (0x0005d1ee) set_opt_bg_pane_g8

0xa3e5,	// (0x0005d1f8) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00062766) set_opt_bg_pane_g

0xa3ba,	// (0x0005d1cd) slider_set_pane_g1

0x6dc2,	// (0x00059bd5) slider_set_pane_g2

0x0006,

0xf944,	// (0x00062757) slider_set_pane_g

0x6d22,	// (0x00059b35) volume_set_pane_g1

0x6d2c,	// (0x00059b3f) volume_set_pane_g2

0x6d36,	// (0x00059b49) volume_set_pane_g3

0x6d40,	// (0x00059b53) volume_set_pane_g4

0x6d4a,	// (0x00059b5d) volume_set_pane_g5

0x6d54,	// (0x00059b67) volume_set_pane_g6

0x6d5e,	// (0x00059b71) volume_set_pane_g7

0x6d68,	// (0x00059b7b) volume_set_pane_g8

0x6d72,	// (0x00059b85) volume_set_pane_g9

0x6d7c,	// (0x00059b8f) volume_set_pane_g10

0x0009,

0xf91c,	// (0x0006272f) volume_set_pane_g

0x5235,	// (0x00058048) indicator_pane_ParamLimits

0x5235,	// (0x00058048) indicator_pane

0x5241,	// (0x00058054) main_idle_pane_g2_ParamLimits

0x5241,	// (0x00058054) main_idle_pane_g2

0x5269,	// (0x0005807c) main_pane_idle_g1_ParamLimits

0x5269,	// (0x0005807c) main_pane_idle_g1

0xec56,	// (0x00061a69) popup_clock_digital_analogue_window_ParamLimits

0xec56,	// (0x00061a69) popup_clock_digital_analogue_window

0x5277,	// (0x0005808a) soft_indicator_pane_ParamLimits

0x5277,	// (0x0005808a) soft_indicator_pane

0x5285,	// (0x00058098) wallpaper_pane_ParamLimits

0x5285,	// (0x00058098) wallpaper_pane

0xebd9,	// (0x000619ec) wallpaper_pane_g1

0x5291,	// (0x000580a4) indicator_pane_g1_ParamLimits

0x5291,	// (0x000580a4) indicator_pane_g1

0xa819,	// (0x0005d62c) navi_navi_icon_text_pane_srt_g1

0xec84,	// (0x00061a97) soft_indicator_pane_t1

0xec9e,	// (0x00061ab1) aid_ps_area_pane

0x529d,	// (0x000580b0) aid_ps_clock_pane

0xecaf,	// (0x00061ac2) aid_ps_indicator_pane

0xecbb,	// (0x00061ace) indicator_ps_pane_ParamLimits

0xecbb,	// (0x00061ace) indicator_ps_pane

0xecca,	// (0x00061add) power_save_pane_g1_ParamLimits

0xecca,	// (0x00061add) power_save_pane_g1

0xecd6,	// (0x00061ae9) power_save_pane_g2_ParamLimits

0xecd6,	// (0x00061ae9) power_save_pane_g2

0x4ccb,	// (0x00057ade) aid_navinavi_width_pane

0xec9e,	// (0x00061ab1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00062358) power_save_pane_g_ParamLimits

0xf545,	// (0x00062358) power_save_pane_g

0xece4,	// (0x00061af7) power_save_pane_t1_ParamLimits

0xece4,	// (0x00061af7) power_save_pane_t1

0x529d,	// (0x000580b0) aid_ps_clock_pane_ParamLimits

0xecaf,	// (0x00061ac2) aid_ps_indicator_pane_ParamLimits

0xecf6,	// (0x00061b09) power_save_pane_t4_ParamLimits

0xecf6,	// (0x00061b09) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006235d) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006235d) power_save_pane_t

0xed20,	// (0x00061b33) power_save_t3_ParamLimits

0xed20,	// (0x00061b33) power_save_t3

0xed0b,	// (0x00061b1e) power_save_t2_ParamLimits

0xed0b,	// (0x00061b1e) power_save_t2

0xed35,	// (0x00061b48) indicator_ps_pane_g1

0x52ab,	// (0x000580be) ai_gene_pane_ParamLimits

0x52ab,	// (0x000580be) ai_gene_pane

0x52b7,	// (0x000580ca) ai_links_pane_ParamLimits

0x52b7,	// (0x000580ca) ai_links_pane

0x52c3,	// (0x000580d6) indicator_pane_cp1_ParamLimits

0x52c3,	// (0x000580d6) indicator_pane_cp1

0x52cf,	// (0x000580e2) main_pane_idle_g1_cp_ParamLimits

0x52cf,	// (0x000580e2) main_pane_idle_g1_cp

0xed3e,	// (0x00061b51) popup_ai_links_title_window

0x52db,	// (0x000580ee) soft_indicator_pane_cp1_ParamLimits

0x52db,	// (0x000580ee) soft_indicator_pane_cp1

0xa1a3,	// (0x0005cfb6) ai_links_pane_g1

0xa1ac,	// (0x0005cfbf) grid_ai_links_pane

0xa188,	// (0x0005cf9b) ai_gene_pane_1

0xa191,	// (0x0005cfa4) ai_gene_pane_2

0xa19a,	// (0x0005cfad) list_highlight_pane_cp4

0xa168,	// (0x0005cf7b) cell_ai_link_pane_ParamLimits

0xa168,	// (0x0005cf7b) cell_ai_link_pane

0xa160,	// (0x0005cf73) cell_ai_link_pane_g1

0xef40,	// (0x00061d53) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x0006270a) cell_ai_link_pane_g

0xebe3,	// (0x000619f6) grid_highlight_cp2

0xebe3,	// (0x000619f6) bg_popup_sub_pane_cp1

0xed55,	// (0x00061b68) popup_ai_links_title_window_t1

0xa0ac,	// (0x0005cebf) ai_gene_pane_1_g1_ParamLimits

0xa0ac,	// (0x0005cebf) ai_gene_pane_1_g1

0xa0b8,	// (0x0005cecb) ai_gene_pane_1_g2_ParamLimits

0xa0b8,	// (0x0005cecb) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00062700) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00062700) ai_gene_pane_1_g

0xa0c5,	// (0x0005ced8) ai_gene_pane_1_t1_ParamLimits

0xa0c5,	// (0x0005ced8) ai_gene_pane_1_t1

0xa0f9,	// (0x0005cf0c) grid_ai_soft_ind_pane

0xa097,	// (0x0005ceaa) ai_gene_pane_2_t1_ParamLimits

0xa097,	// (0x0005ceaa) ai_gene_pane_2_t1

0x52e7,	// (0x000580fa) main_pane_empty_t1_ParamLimits

0x52e7,	// (0x000580fa) main_pane_empty_t1

0x52ff,	// (0x00058112) main_pane_empty_t2_ParamLimits

0x52ff,	// (0x00058112) main_pane_empty_t2

0x5314,	// (0x00058127) main_pane_empty_t3_ParamLimits

0x5314,	// (0x00058127) main_pane_empty_t3

0x5326,	// (0x00058139) main_pane_empty_t4_ParamLimits

0x5326,	// (0x00058139) main_pane_empty_t4

0x5338,	// (0x0005814b) main_pane_empty_t5_ParamLimits

0x5338,	// (0x0005814b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00062362) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00062362) main_pane_empty_t

0xf368,	// (0x0006217b) bg_popup_window_pane_ParamLimits

0xf368,	// (0x0006217b) bg_popup_window_pane

0x9c0b,	// (0x0005ca1e) find_popup_pane_cp2_ParamLimits

0x9c0b,	// (0x0005ca1e) find_popup_pane_cp2

0x9e05,	// (0x0005cc18) heading_pane_ParamLimits

0x9e05,	// (0x0005cc18) heading_pane

0xebe3,	// (0x000619f6) bg_popup_sub_pane

0x9b85,	// (0x0005c998) bg_popup_window_pane_g1_ParamLimits

0x9b85,	// (0x0005c998) bg_popup_window_pane_g1

0x9b91,	// (0x0005c9a4) bg_popup_window_pane_g2_ParamLimits

0x9b91,	// (0x0005c9a4) bg_popup_window_pane_g2

0x9b9d,	// (0x0005c9b0) bg_popup_window_pane_g3_ParamLimits

0x9b9d,	// (0x0005c9b0) bg_popup_window_pane_g3

0x9ba9,	// (0x0005c9bc) bg_popup_window_pane_g4_ParamLimits

0x9ba9,	// (0x0005c9bc) bg_popup_window_pane_g4

0x9bb5,	// (0x0005c9c8) bg_popup_window_pane_g5_ParamLimits

0x9bb5,	// (0x0005c9c8) bg_popup_window_pane_g5

0x9bc1,	// (0x0005c9d4) bg_popup_window_pane_g6_ParamLimits

0x9bc1,	// (0x0005c9d4) bg_popup_window_pane_g6

0x9bcd,	// (0x0005c9e0) bg_popup_window_pane_g7_ParamLimits

0x9bcd,	// (0x0005c9e0) bg_popup_window_pane_g7

0x9bd9,	// (0x0005c9ec) bg_popup_window_pane_g8_ParamLimits

0x9bd9,	// (0x0005c9ec) bg_popup_window_pane_g8

0x9be5,	// (0x0005c9f8) bg_popup_window_pane_g9_ParamLimits

0x9be5,	// (0x0005c9f8) bg_popup_window_pane_g9

0x9bf1,	// (0x0005ca04) bg_popup_window_pane_g10_ParamLimits

0x9bf1,	// (0x0005ca04) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x000626c8) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x000626c8) bg_popup_window_pane_g

0x9b1a,	// (0x0005c92d) bg_popup_heading_pane_ParamLimits

0x9b1a,	// (0x0005c92d) bg_popup_heading_pane

0x6ebe,	// (0x00059cd1) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ebe,	// (0x00059cd1) tabs_4_passive_pane_cp_srt

0x6ed0,	// (0x00059ce3) tabs_4_passive_pane_srt_ParamLimits

0x9b2e,	// (0x0005c941) heading_pane_g2

0x6ed0,	// (0x00059ce3) tabs_4_passive_pane_srt

0x88d7,	// (0x0005b6ea) bg_passive_tab_pane_cp3_srt_ParamLimits

0x88d7,	// (0x0005b6ea) bg_passive_tab_pane_cp3_srt

0x9b36,	// (0x0005c949) heading_pane_t1_ParamLimits

0x9b36,	// (0x0005c949) heading_pane_t1

0x9b4d,	// (0x0005c960) heading_pane_t2_ParamLimits

0x9b4d,	// (0x0005c960) heading_pane_t2

0x0001,

0xf8b0,	// (0x000626c3) heading_pane_t_ParamLimits

0xf8b0,	// (0x000626c3) heading_pane_t

0x9645,	// (0x0005c458) bg_popup_heading_pane_g1

0x96f4,	// (0x0005c507) bg_popup_heading_pane_g2

0x96fe,	// (0x0005c511) bg_popup_heading_pane_g3

0x9708,	// (0x0005c51b) bg_popup_heading_pane_g4

0x9712,	// (0x0005c525) bg_popup_heading_pane_g5

0x971c,	// (0x0005c52f) bg_popup_heading_pane_g6

0x9724,	// (0x0005c537) bg_popup_heading_pane_g7

0x972c,	// (0x0005c53f) bg_popup_heading_pane_g8

0x9736,	// (0x0005c549) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x0006267f) bg_popup_heading_pane_g

0x8e25,	// (0x0005bc38) bg_popup_sub_pane_g1

0x8e35,	// (0x0005bc48) bg_popup_sub_pane_g2

0x8e2d,	// (0x0005bc40) bg_popup_sub_pane_g3

0x8e45,	// (0x0005bc58) bg_popup_sub_pane_g4

0x8e3d,	// (0x0005bc50) bg_popup_sub_pane_g5

0x8e4d,	// (0x0005bc60) bg_popup_sub_pane_g6

0x8e55,	// (0x0005bc68) bg_popup_sub_pane_g7

0x8e65,	// (0x0005bc78) bg_popup_sub_pane_g8

0x8e5d,	// (0x0005bc70) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00062659) bg_popup_sub_pane_g

0xed64,	// (0x00061b77) bg_popup_window_pane_cp5_ParamLimits

0xed64,	// (0x00061b77) bg_popup_window_pane_cp5

0xed80,	// (0x00061b93) popup_note_window_g1_ParamLimits

0xed80,	// (0x00061b93) popup_note_window_g1

0xed8c,	// (0x00061b9f) popup_note_window_t1_ParamLimits

0xed8c,	// (0x00061b9f) popup_note_window_t1

0xeda2,	// (0x00061bb5) popup_note_window_t2_ParamLimits

0xeda2,	// (0x00061bb5) popup_note_window_t2

0xedb8,	// (0x00061bcb) popup_note_window_t3_ParamLimits

0xedb8,	// (0x00061bcb) popup_note_window_t3

0xedce,	// (0x00061be1) popup_note_window_t4_ParamLimits

0xedce,	// (0x00061be1) popup_note_window_t4

0xedf6,	// (0x00061c09) popup_note_window_t5_ParamLimits

0xedf6,	// (0x00061c09) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006236d) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006236d) popup_note_window_t

0xee40,	// (0x00061c53) bg_popup_window_pane_cp6_ParamLimits

0xee40,	// (0x00061c53) bg_popup_window_pane_cp6

0x95c1,	// (0x0005c3d4) popup_note_image_window_g1_ParamLimits

0x95c1,	// (0x0005c3d4) popup_note_image_window_g1

0x95cd,	// (0x0005c3e0) popup_note_image_window_g2_ParamLimits

0x95cd,	// (0x0005c3e0) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x0006264d) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x0006264d) popup_note_image_window_g

0x95e6,	// (0x0005c3f9) popup_note_image_window_t1_ParamLimits

0x95e6,	// (0x0005c3f9) popup_note_image_window_t1

0x95ff,	// (0x0005c412) popup_note_image_window_t2_ParamLimits

0x95ff,	// (0x0005c412) popup_note_image_window_t2

0x9618,	// (0x0005c42b) popup_note_image_window_t3_ParamLimits

0x9618,	// (0x0005c42b) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00062652) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00062652) popup_note_image_window_t

0x9481,	// (0x0005c294) bg_popup_window_pane_cp7_ParamLimits

0x9481,	// (0x0005c294) bg_popup_window_pane_cp7

0x94b1,	// (0x0005c2c4) popup_note_wait_window_g1_ParamLimits

0x94b1,	// (0x0005c2c4) popup_note_wait_window_g1

0x94bd,	// (0x0005c2d0) popup_note_wait_window_g2_ParamLimits

0x94bd,	// (0x0005c2d0) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x0006263b) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x0006263b) popup_note_wait_window_g

0x94d5,	// (0x0005c2e8) popup_note_wait_window_t1_ParamLimits

0x94d5,	// (0x0005c2e8) popup_note_wait_window_t1

0x94fc,	// (0x0005c30f) popup_note_wait_window_t2_ParamLimits

0x94fc,	// (0x0005c30f) popup_note_wait_window_t2

0x951a,	// (0x0005c32d) popup_note_wait_window_t3_ParamLimits

0x951a,	// (0x0005c32d) popup_note_wait_window_t3

0x952d,	// (0x0005c340) popup_note_wait_window_t4_ParamLimits

0x952d,	// (0x0005c340) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00062642) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00062642) popup_note_wait_window_t

0x9552,	// (0x0005c365) wait_bar_pane_ParamLimits

0x9552,	// (0x0005c365) wait_bar_pane

0xebe3,	// (0x000619f6) wait_anim_pane

0xebe3,	// (0x000619f6) wait_border_pane

0xebd9,	// (0x000619ec) wait_anim_pane_g1

0xebd9,	// (0x000619ec) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000624f6) wait_anim_pane_g

0x9425,	// (0x0005c238) wait_border_pane_g1

0x9430,	// (0x0005c243) wait_border_pane_g2

0x9439,	// (0x0005c24c) wait_border_pane_g3

0x0002,

0xf821,	// (0x00062634) wait_border_pane_g

0x928f,	// (0x0005c0a2) bg_popup_window_pane_cp16_ParamLimits

0x928f,	// (0x0005c0a2) bg_popup_window_pane_cp16

0x938f,	// (0x0005c1a2) indicator_popup_pane_cp4_ParamLimits

0x938f,	// (0x0005c1a2) indicator_popup_pane_cp4

0x93a3,	// (0x0005c1b6) popup_query_data_window_t1_ParamLimits

0x93a3,	// (0x0005c1b6) popup_query_data_window_t1

0x93b5,	// (0x0005c1c8) popup_query_data_window_t2_ParamLimits

0x93b5,	// (0x0005c1c8) popup_query_data_window_t2

0x93ce,	// (0x0005c1e1) popup_query_data_window_t3_ParamLimits

0x93ce,	// (0x0005c1e1) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x0006262d) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x0006262d) popup_query_data_window_t

0x93e8,	// (0x0005c1fb) query_popup_data_pane_ParamLimits

0x93e8,	// (0x0005c1fb) query_popup_data_pane

0x93fc,	// (0x0005c20f) query_popup_data_pane_cp1_ParamLimits

0x93fc,	// (0x0005c20f) query_popup_data_pane_cp1

0x928f,	// (0x0005c0a2) bg_popup_window_pane_cp10_ParamLimits

0x928f,	// (0x0005c0a2) bg_popup_window_pane_cp10

0x92c1,	// (0x0005c0d4) indicator_popup_pane_ParamLimits

0x92c1,	// (0x0005c0d4) indicator_popup_pane

0x92e3,	// (0x0005c0f6) popup_query_code_window_t1_ParamLimits

0x92e3,	// (0x0005c0f6) popup_query_code_window_t1

0x92fd,	// (0x0005c110) popup_query_code_window_t2_ParamLimits

0x92fd,	// (0x0005c110) popup_query_code_window_t2

0x9346,	// (0x0005c159) popup_query_code_window_t3_ParamLimits

0x9346,	// (0x0005c159) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00062626) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00062626) popup_query_code_window_t

0x9375,	// (0x0005c188) query_popup_pane_ParamLimits

0x9375,	// (0x0005c188) query_popup_pane

0xee40,	// (0x00061c53) bg_popup_window_pane_cp15_ParamLimits

0xee40,	// (0x00061c53) bg_popup_window_pane_cp15

0xee60,	// (0x00061c73) indicator_popup_pane_cp1_ParamLimits

0xee60,	// (0x00061c73) indicator_popup_pane_cp1

0xee73,	// (0x00061c86) indicator_popup_pane_cp2_ParamLimits

0xee73,	// (0x00061c86) indicator_popup_pane_cp2

0xee8e,	// (0x00061ca1) popup_query_data_code_window_g1_ParamLimits

0xee8e,	// (0x00061ca1) popup_query_data_code_window_g1

0xeea1,	// (0x00061cb4) popup_query_data_code_window_t1_ParamLimits

0xeea1,	// (0x00061cb4) popup_query_data_code_window_t1

0xeeb3,	// (0x00061cc6) popup_query_data_code_window_t2_ParamLimits

0xeeb3,	// (0x00061cc6) popup_query_data_code_window_t2

0xeec5,	// (0x00061cd8) popup_query_data_code_window_t3_ParamLimits

0xeec5,	// (0x00061cd8) popup_query_data_code_window_t3

0xeedb,	// (0x00061cee) popup_query_data_code_window_t4_ParamLimits

0xeedb,	// (0x00061cee) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00062378) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00062378) popup_query_data_code_window_t

0x6aa3,	// (0x000598b6) list_single_midp_graphic_pane_g3

0xeef5,	// (0x00061d08) query_popup_data_pane_cp2_ParamLimits

0xef08,	// (0x00061d1b) query_popup_pane_cp2_ParamLimits

0xef08,	// (0x00061d1b) query_popup_pane_cp2

0xebe3,	// (0x000619f6) bg_popup_window_pane_cp11

0x9273,	// (0x0005c086) heading_pane_cp5

0x927b,	// (0x0005c08e) listscroll_popup_info_pane

0xebe3,	// (0x000619f6) input_focus_pane_cp3

0xef23,	// (0x00061d36) query_popup_pane_t1

0xef31,	// (0x00061d44) list_popup_info_pane_ParamLimits

0xef31,	// (0x00061d44) list_popup_info_pane

0xef40,	// (0x00061d53) listscroll_popup_info_pane_g1

0xef48,	// (0x00061d5b) scroll_pane_cp7

0xef52,	// (0x00061d65) popup_info_list_pane_t1_ParamLimits

0xef52,	// (0x00061d65) popup_info_list_pane_t1

0xef6c,	// (0x00061d7f) popup_info_list_pane_t2_ParamLimits

0xef6c,	// (0x00061d7f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00062381) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00062381) popup_info_list_pane_t

0xebe3,	// (0x000619f6) bg_popup_window_pane_cp12

0xa833,	// (0x0005d646) find_popup_pane

0xec31,	// (0x00061a44) bg_popup_window_pane_cp3

0xef86,	// (0x00061d99) heading_pane_cp3

0xef95,	// (0x00061da8) listscroll_popup_graphic_pane

0xebe3,	// (0x000619f6) bg_popup_window_pane_cp4

0x539a,	// (0x000581ad) heading_pane_cp4

0xefa5,	// (0x00061db8) listscroll_popup_colour_pane

0x53a4,	// (0x000581b7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x53a4,	// (0x000581b7) cell_large_graphic_colour_none_popup_pane

0x53b8,	// (0x000581cb) grid_large_graphic_colour_popup_pane_ParamLimits

0x53b8,	// (0x000581cb) grid_large_graphic_colour_popup_pane

0x53e4,	// (0x000581f7) listscroll_popup_colour_pane_g1_ParamLimits

0x53e4,	// (0x000581f7) listscroll_popup_colour_pane_g1

0x53fb,	// (0x0005820e) listscroll_popup_colour_pane_g2_ParamLimits

0x53fb,	// (0x0005820e) listscroll_popup_colour_pane_g2

0x5412,	// (0x00058225) listscroll_popup_colour_pane_g3_ParamLimits

0x5412,	// (0x00058225) listscroll_popup_colour_pane_g3

0x5422,	// (0x00058235) listscroll_popup_colour_pane_g4_ParamLimits

0x5422,	// (0x00058235) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00062386) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00062386) listscroll_popup_colour_pane_g

0xefad,	// (0x00061dc0) scroll_pane_cp6_ParamLimits

0xefad,	// (0x00061dc0) scroll_pane_cp6

0x5436,	// (0x00058249) cell_large_graphic_colour_popup_pane_ParamLimits

0x5436,	// (0x00058249) cell_large_graphic_colour_popup_pane

0xefbf,	// (0x00061dd2) cell_large_graphic_colour_none_popup_pane_t1

0xebe3,	// (0x000619f6) grid_highlight_pane_cp5

0xefce,	// (0x00061de1) cell_large_graphic_colour_popup_pane_g1

0xefd6,	// (0x00061de9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0006238f) cell_large_graphic_colour_popup_pane_g

0xefde,	// (0x00061df1) cell_large_graphic_colour_popup_pane_g2_copy1

0xefe7,	// (0x00061dfa) grid_highlight_pane_cp4

0xefef,	// (0x00061e02) bg_popup_window_pane_cp8_ParamLimits

0xefef,	// (0x00061e02) bg_popup_window_pane_cp8

0xf00a,	// (0x00061e1d) popup_snote_single_text_window_g1_ParamLimits

0xf00a,	// (0x00061e1d) popup_snote_single_text_window_g1

0xf01c,	// (0x00061e2f) popup_snote_single_text_window_t1_ParamLimits

0xf01c,	// (0x00061e2f) popup_snote_single_text_window_t1

0xf02f,	// (0x00061e42) popup_snote_single_text_window_t2_ParamLimits

0xf02f,	// (0x00061e42) popup_snote_single_text_window_t2

0xf042,	// (0x00061e55) popup_snote_single_text_window_t3_ParamLimits

0xf042,	// (0x00061e55) popup_snote_single_text_window_t3

0xf07b,	// (0x00061e8e) popup_snote_single_text_window_t4_ParamLimits

0xf07b,	// (0x00061e8e) popup_snote_single_text_window_t4

0xf0af,	// (0x00061ec2) popup_snote_single_text_window_t5_ParamLimits

0xf0af,	// (0x00061ec2) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00062394) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00062394) popup_snote_single_text_window_t

0xf0de,	// (0x00061ef1) bg_popup_window_pane_cp9_ParamLimits

0xf0de,	// (0x00061ef1) bg_popup_window_pane_cp9

0xf00a,	// (0x00061e1d) popup_snote_single_graphic_window_g1_ParamLimits

0xf00a,	// (0x00061e1d) popup_snote_single_graphic_window_g1

0xf0ec,	// (0x00061eff) popup_snote_single_graphic_window_g2_ParamLimits

0xf0ec,	// (0x00061eff) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006239f) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006239f) popup_snote_single_graphic_window_g

0xf0f8,	// (0x00061f0b) popup_snote_single_graphic_window_t1_ParamLimits

0xf0f8,	// (0x00061f0b) popup_snote_single_graphic_window_t1

0xf10b,	// (0x00061f1e) popup_snote_single_graphic_window_t2_ParamLimits

0xf10b,	// (0x00061f1e) popup_snote_single_graphic_window_t2

0xf11e,	// (0x00061f31) popup_snote_single_graphic_window_t3_ParamLimits

0xf11e,	// (0x00061f31) popup_snote_single_graphic_window_t3

0xf157,	// (0x00061f6a) popup_snote_single_graphic_window_t4_ParamLimits

0xf157,	// (0x00061f6a) popup_snote_single_graphic_window_t4

0xf18b,	// (0x00061f9e) popup_snote_single_graphic_window_t5_ParamLimits

0xf18b,	// (0x00061f9e) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000623a4) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000623a4) popup_snote_single_graphic_window_t

0xa771,	// (0x0005d584) grid_graphic_popup_pane_ParamLimits

0xa771,	// (0x0005d584) grid_graphic_popup_pane

0xa79f,	// (0x0005d5b2) listscroll_popup_graphic_pane_g1_ParamLimits

0xa79f,	// (0x0005d5b2) listscroll_popup_graphic_pane_g1

0xa7b3,	// (0x0005d5c6) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7b3,	// (0x0005d5c6) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x000627a3) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x000627a3) listscroll_popup_graphic_pane_g

0xa7c7,	// (0x0005d5da) scroll_pane_cp5

0xa709,	// (0x0005d51c) cell_graphic_popup_pane_ParamLimits

0xa709,	// (0x0005d51c) cell_graphic_popup_pane

0xa6ea,	// (0x0005d4fd) cell_graphic_popup_pane_g1

0xa6f2,	// (0x0005d505) cell_graphic_popup_pane_g2

0xefde,	// (0x00061df1) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x0006279c) cell_graphic_popup_pane_g

0xa6fb,	// (0x0005d50e) cell_graphic_popup_pane_t2

0xefe7,	// (0x00061dfa) grid_highlight_pane_cp3

0xf1cc,	// (0x00061fdf) list_gen_pane_ParamLimits

0xf1cc,	// (0x00061fdf) list_gen_pane

0xf1f4,	// (0x00062007) scroll_pane

0xa642,	// (0x0005d455) bg_list_pane_g1_ParamLimits

0xa642,	// (0x0005d455) bg_list_pane_g1

0xa65f,	// (0x0005d472) bg_list_pane_g2_ParamLimits

0xa65f,	// (0x0005d472) bg_list_pane_g2

0xa674,	// (0x0005d487) bg_list_pane_g3_ParamLimits

0xa674,	// (0x0005d487) bg_list_pane_g3

0xa688,	// (0x0005d49b) bg_list_pane_g4_ParamLimits

0xa688,	// (0x0005d49b) bg_list_pane_g4

0xa69c,	// (0x0005d4af) bg_list_pane_g5_ParamLimits

0xa69c,	// (0x0005d4af) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00062791) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00062791) bg_list_pane_g

0xa5da,	// (0x0005d3ed) list_double2_graphic_large_graphic_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double2_graphic_large_graphic_pane

0xa5da,	// (0x0005d3ed) list_double2_graphic_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double2_graphic_pane

0xa5da,	// (0x0005d3ed) list_double2_large_graphic_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double2_large_graphic_pane

0x6e72,	// (0x00059c85) list_double2_pane_ParamLimits

0x6e72,	// (0x00059c85) list_double2_pane

0xa5da,	// (0x0005d3ed) list_double_graphic_heading_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_graphic_heading_pane

0xa5da,	// (0x0005d3ed) list_double_graphic_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_graphic_pane

0xa5da,	// (0x0005d3ed) list_double_heading_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_heading_pane

0xa5da,	// (0x0005d3ed) list_double_large_graphic_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_large_graphic_pane

0xa5da,	// (0x0005d3ed) list_double_number_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_number_pane

0xa5da,	// (0x0005d3ed) list_double_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_pane

0xa5da,	// (0x0005d3ed) list_double_time_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_double_time_pane

0xa5da,	// (0x0005d3ed) list_setting_number_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_setting_number_pane

0xa5da,	// (0x0005d3ed) list_setting_pane_ParamLimits

0xa5da,	// (0x0005d3ed) list_setting_pane

0x9c2e,	// (0x0005ca41) list_single_2graphic_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_2graphic_pane

0x9c2e,	// (0x0005ca41) list_single_graphic_heading_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_graphic_heading_pane

0x9c2e,	// (0x0005ca41) list_single_graphic_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_graphic_pane

0x9c2e,	// (0x0005ca41) list_single_heading_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_heading_pane

0xa627,	// (0x0005d43a) list_single_large_graphic_pane_ParamLimits

0xa627,	// (0x0005d43a) list_single_large_graphic_pane

0x9c2e,	// (0x0005ca41) list_single_number_heading_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_number_heading_pane

0x9c2e,	// (0x0005ca41) list_single_number_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_number_pane

0x9c2e,	// (0x0005ca41) list_single_pane_ParamLimits

0x9c2e,	// (0x0005ca41) list_single_pane

0xebe3,	// (0x000619f6) list_highlight_pane_cp1

0x546d,	// (0x00058280) list_single_pane_g1_ParamLimits

0x546d,	// (0x00058280) list_single_pane_g1

0x5479,	// (0x0005828c) list_single_pane_g2_ParamLimits

0x5479,	// (0x0005828c) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000623c0) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000623c0) list_single_pane_g

0x6e5c,	// (0x00059c6f) list_single_pane_t1_ParamLimits

0x6e5c,	// (0x00059c6f) list_single_pane_t1

0x546d,	// (0x00058280) list_single_number_pane_g1_ParamLimits

0x546d,	// (0x00058280) list_single_number_pane_g1

0x5479,	// (0x0005828c) list_single_number_pane_g2_ParamLimits

0x5479,	// (0x0005828c) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000623c0) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000623c0) list_single_number_pane_g

0x6d86,	// (0x00059b99) list_single_number_pane_t1_ParamLimits

0x6d86,	// (0x00059b99) list_single_number_pane_t1

0x6d9c,	// (0x00059baf) list_single_number_pane_t2_ParamLimits

0x6d9c,	// (0x00059baf) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00062752) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00062752) list_single_number_pane_t

0x5461,	// (0x00058274) list_single_graphic_pane_g1_ParamLimits

0x5461,	// (0x00058274) list_single_graphic_pane_g1

0x546d,	// (0x00058280) list_single_graphic_pane_g2_ParamLimits

0x546d,	// (0x00058280) list_single_graphic_pane_g2

0x5479,	// (0x0005828c) list_single_graphic_pane_g3_ParamLimits

0x5479,	// (0x0005828c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000623af) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000623af) list_single_graphic_pane_g

0x5485,	// (0x00058298) list_single_graphic_pane_t1_ParamLimits

0x5485,	// (0x00058298) list_single_graphic_pane_t1

0x549b,	// (0x000582ae) list_single_heading_pane_g1_ParamLimits

0x549b,	// (0x000582ae) list_single_heading_pane_g1

0x5479,	// (0x0005828c) list_single_heading_pane_g2_ParamLimits

0x5479,	// (0x0005828c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000623b6) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000623b6) list_single_heading_pane_g

0x54ae,	// (0x000582c1) list_single_heading_pane_t1_ParamLimits

0x54ae,	// (0x000582c1) list_single_heading_pane_t1

0x54c4,	// (0x000582d7) list_single_heading_pane_t2_ParamLimits

0x54c4,	// (0x000582d7) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000623bb) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000623bb) list_single_heading_pane_t

0x546d,	// (0x00058280) list_single_number_heading_pane_g1_ParamLimits

0x546d,	// (0x00058280) list_single_number_heading_pane_g1

0x5479,	// (0x0005828c) list_single_number_heading_pane_g2_ParamLimits

0x5479,	// (0x0005828c) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000623c0) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000623c0) list_single_number_heading_pane_g

0x54d6,	// (0x000582e9) list_single_number_heading_pane_t1_ParamLimits

0x54d6,	// (0x000582e9) list_single_number_heading_pane_t1

0x54ec,	// (0x000582ff) list_single_number_heading_pane_t2_ParamLimits

0x54ec,	// (0x000582ff) list_single_number_heading_pane_t2

0x54fe,	// (0x00058311) list_single_number_heading_pane_t3_ParamLimits

0x54fe,	// (0x00058311) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000623c5) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000623c5) list_single_number_heading_pane_t

0x5510,	// (0x00058323) list_single_graphic_heading_pane_g1_ParamLimits

0x5510,	// (0x00058323) list_single_graphic_heading_pane_g1

0x551c,	// (0x0005832f) list_single_graphic_heading_pane_g4_ParamLimits

0x551c,	// (0x0005832f) list_single_graphic_heading_pane_g4

0x5479,	// (0x0005828c) list_single_graphic_heading_pane_g5_ParamLimits

0x5479,	// (0x0005828c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000623cc) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000623cc) list_single_graphic_heading_pane_g

0x54d6,	// (0x000582e9) list_single_graphic_heading_pane_t1_ParamLimits

0x54d6,	// (0x000582e9) list_single_graphic_heading_pane_t1

0x552d,	// (0x00058340) list_single_graphic_heading_pane_t2_ParamLimits

0x552d,	// (0x00058340) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000623d3) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000623d3) list_single_graphic_heading_pane_t

0x553f,	// (0x00058352) list_single_large_graphic_pane_g1_ParamLimits

0x553f,	// (0x00058352) list_single_large_graphic_pane_g1

0x546d,	// (0x00058280) list_single_large_graphic_pane_g2_ParamLimits

0x546d,	// (0x00058280) list_single_large_graphic_pane_g2

0x5479,	// (0x0005828c) list_single_large_graphic_pane_g3_ParamLimits

0x5479,	// (0x0005828c) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000623d8) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000623d8) list_single_large_graphic_pane_g

0x9430,	// (0x0005c243) wait_border_pane_g2_copy1

0x554b,	// (0x0005835e) list_single_large_graphic_pane_g4_cp2

0x5553,	// (0x00058366) list_single_large_graphic_pane_t1_ParamLimits

0x5553,	// (0x00058366) list_single_large_graphic_pane_t1

0x8239,	// (0x0005b04c) list_double_pane_g1_ParamLimits

0x8239,	// (0x0005b04c) list_double_pane_g1

0x5569,	// (0x0005837c) list_double_pane_g2_ParamLimits

0x5569,	// (0x0005837c) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000623df) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000623df) list_double_pane_g

0x5575,	// (0x00058388) list_double_pane_t1_ParamLimits

0x5575,	// (0x00058388) list_double_pane_t1

0x558b,	// (0x0005839e) list_double_pane_t2_ParamLimits

0x558b,	// (0x0005839e) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000623e4) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000623e4) list_double_pane_t

0x559d,	// (0x000583b0) list_double2_pane_g1_ParamLimits

0x559d,	// (0x000583b0) list_double2_pane_g1

0x55ae,	// (0x000583c1) list_double2_pane_g2_ParamLimits

0x55ae,	// (0x000583c1) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000623e9) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000623e9) list_double2_pane_g

0x55ba,	// (0x000583cd) list_double2_pane_t1_ParamLimits

0x55ba,	// (0x000583cd) list_double2_pane_t1

0x55d0,	// (0x000583e3) list_double2_pane_t2_ParamLimits

0x55d0,	// (0x000583e3) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000623ee) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000623ee) list_double2_pane_t

0x8239,	// (0x0005b04c) list_double_number_pane_g1_ParamLimits

0x8239,	// (0x0005b04c) list_double_number_pane_g1

0x5569,	// (0x0005837c) list_double_number_pane_g2_ParamLimits

0x5569,	// (0x0005837c) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000623df) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000623df) list_double_number_pane_g

0x55e2,	// (0x000583f5) list_double_number_pane_t1_ParamLimits

0x55e2,	// (0x000583f5) list_double_number_pane_t1

0x55f4,	// (0x00058407) list_double_number_pane_t2_ParamLimits

0x55f4,	// (0x00058407) list_double_number_pane_t2

0x560a,	// (0x0005841d) list_double_number_pane_t3_ParamLimits

0x560a,	// (0x0005841d) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000623f3) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000623f3) list_double_number_pane_t

0x561c,	// (0x0005842f) list_double_graphic_pane_g1_ParamLimits

0x561c,	// (0x0005842f) list_double_graphic_pane_g1

0x5628,	// (0x0005843b) list_double_graphic_pane_g2_ParamLimits

0x5628,	// (0x0005843b) list_double_graphic_pane_g2

0x5637,	// (0x0005844a) list_double_graphic_pane_g3_ParamLimits

0x5637,	// (0x0005844a) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000623fa) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000623fa) list_double_graphic_pane_g

0x564f,	// (0x00058462) list_double_graphic_pane_t1_ParamLimits

0x564f,	// (0x00058462) list_double_graphic_pane_t1

0x5665,	// (0x00058478) list_double_graphic_pane_t2_ParamLimits

0x5665,	// (0x00058478) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00062403) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00062403) list_double_graphic_pane_t

0x5677,	// (0x0005848a) list_double2_graphic_pane_g1_ParamLimits

0x5677,	// (0x0005848a) list_double2_graphic_pane_g1

0x5683,	// (0x00058496) list_double2_graphic_pane_g2_ParamLimits

0x5683,	// (0x00058496) list_double2_graphic_pane_g2

0x568f,	// (0x000584a2) list_double2_graphic_pane_g3_ParamLimits

0x568f,	// (0x000584a2) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00062408) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00062408) list_double2_graphic_pane_g

0x569b,	// (0x000584ae) list_double2_graphic_pane_t1_ParamLimits

0x569b,	// (0x000584ae) list_double2_graphic_pane_t1

0x56b1,	// (0x000584c4) list_double2_graphic_pane_t2_ParamLimits

0x56b1,	// (0x000584c4) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0006240f) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0006240f) list_double2_graphic_pane_t

0x56c3,	// (0x000584d6) list_double_large_graphic_pane_g1_ParamLimits

0x56c3,	// (0x000584d6) list_double_large_graphic_pane_g1

0x56e2,	// (0x000584f5) list_double_large_graphic_pane_g2_ParamLimits

0x56e2,	// (0x000584f5) list_double_large_graphic_pane_g2

0x5569,	// (0x0005837c) list_double_large_graphic_pane_g3_ParamLimits

0x5569,	// (0x0005837c) list_double_large_graphic_pane_g3

0x56f8,	// (0x0005850b) list_double_large_graphic_pane_g4_ParamLimits

0x56f8,	// (0x0005850b) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00062414) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00062414) list_double_large_graphic_pane_g

0x5720,	// (0x00058533) list_double_large_graphic_pane_t1_ParamLimits

0x5720,	// (0x00058533) list_double_large_graphic_pane_t1

0x5739,	// (0x0005854c) list_double_large_graphic_pane_t2_ParamLimits

0x5739,	// (0x0005854c) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0006241f) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0006241f) list_double_large_graphic_pane_t

0x574b,	// (0x0005855e) list_double2_large_graphic_pane_g1_ParamLimits

0x574b,	// (0x0005855e) list_double2_large_graphic_pane_g1

0x5757,	// (0x0005856a) list_double2_large_graphic_pane_g2_ParamLimits

0x5757,	// (0x0005856a) list_double2_large_graphic_pane_g2

0x568f,	// (0x000584a2) list_double2_large_graphic_pane_g3_ParamLimits

0x568f,	// (0x000584a2) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00062424) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00062424) list_double2_large_graphic_pane_g

0x5768,	// (0x0005857b) list_double2_large_graphic_pane_t1_ParamLimits

0x5768,	// (0x0005857b) list_double2_large_graphic_pane_t1

0x577e,	// (0x00058591) list_double2_large_graphic_pane_t2_ParamLimits

0x577e,	// (0x00058591) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0006242b) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0006242b) list_double2_large_graphic_pane_t

0x5790,	// (0x000585a3) list_double_heading_pane_g1_ParamLimits

0x5790,	// (0x000585a3) list_double_heading_pane_g1

0x57a1,	// (0x000585b4) list_double_heading_pane_g2_ParamLimits

0x57a1,	// (0x000585b4) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00062430) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00062430) list_double_heading_pane_g

0x57ad,	// (0x000585c0) list_double_heading_pane_t1_ParamLimits

0x57ad,	// (0x000585c0) list_double_heading_pane_t1

0x57c3,	// (0x000585d6) list_double_heading_pane_t2_ParamLimits

0x57c3,	// (0x000585d6) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00062435) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00062435) list_double_heading_pane_t

0x57d5,	// (0x000585e8) list_double_graphic_heading_pane_g1_ParamLimits

0x57d5,	// (0x000585e8) list_double_graphic_heading_pane_g1

0x5790,	// (0x000585a3) list_double_graphic_heading_pane_g2_ParamLimits

0x5790,	// (0x000585a3) list_double_graphic_heading_pane_g2

0x57a1,	// (0x000585b4) list_double_graphic_heading_pane_g3_ParamLimits

0x57a1,	// (0x000585b4) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0006243a) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0006243a) list_double_graphic_heading_pane_g

0x57e1,	// (0x000585f4) list_double_graphic_heading_pane_t1_ParamLimits

0x57e1,	// (0x000585f4) list_double_graphic_heading_pane_t1

0x57f7,	// (0x0005860a) list_double_graphic_heading_pane_t2_ParamLimits

0x57f7,	// (0x0005860a) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00062441) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00062441) list_double_graphic_heading_pane_t

0x5809,	// (0x0005861c) list_double_time_pane_g1_ParamLimits

0x5809,	// (0x0005861c) list_double_time_pane_g1

0x581a,	// (0x0005862d) list_double_time_pane_g2_ParamLimits

0x581a,	// (0x0005862d) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00062446) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00062446) list_double_time_pane_g

0x5826,	// (0x00058639) list_double_time_pane_t1_ParamLimits

0x5826,	// (0x00058639) list_double_time_pane_t1

0x583c,	// (0x0005864f) list_double_time_pane_t2_ParamLimits

0x583c,	// (0x0005864f) list_double_time_pane_t2

0x584e,	// (0x00058661) list_double_time_pane_t3_ParamLimits

0x584e,	// (0x00058661) list_double_time_pane_t3

0x5860,	// (0x00058673) list_double_time_pane_t4_ParamLimits

0x5860,	// (0x00058673) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0006244b) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0006244b) list_double_time_pane_t

0x5872,	// (0x00058685) list_setting_pane_g1_ParamLimits

0x5872,	// (0x00058685) list_setting_pane_g1

0x587e,	// (0x00058691) list_setting_pane_g2_ParamLimits

0x587e,	// (0x00058691) list_setting_pane_g2

0x0001,

0xf641,	// (0x00062454) list_setting_pane_g_ParamLimits

0xf641,	// (0x00062454) list_setting_pane_g

0x588a,	// (0x0005869d) list_setting_pane_t1_ParamLimits

0x588a,	// (0x0005869d) list_setting_pane_t1

0x58a4,	// (0x000586b7) list_setting_pane_t2_ParamLimits

0x58a4,	// (0x000586b7) list_setting_pane_t2

0x0002,

0xf646,	// (0x00062459) list_setting_pane_t_ParamLimits

0xf646,	// (0x00062459) list_setting_pane_t

0x58e3,	// (0x000586f6) set_value_pane_cp_ParamLimits

0x58e3,	// (0x000586f6) set_value_pane_cp

0x58f1,	// (0x00058704) list_setting_number_pane_g1_ParamLimits

0x58f1,	// (0x00058704) list_setting_number_pane_g1

0x58fd,	// (0x00058710) list_setting_number_pane_g2_ParamLimits

0x58fd,	// (0x00058710) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00062460) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00062460) list_setting_number_pane_g

0x5909,	// (0x0005871c) list_setting_number_pane_t1_ParamLimits

0x5909,	// (0x0005871c) list_setting_number_pane_t1

0x5922,	// (0x00058735) list_setting_number_pane_t2_ParamLimits

0x5922,	// (0x00058735) list_setting_number_pane_t2

0x593c,	// (0x0005874f) list_setting_number_pane_t3_ParamLimits

0x593c,	// (0x0005874f) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00062465) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00062465) list_setting_number_pane_t

0x58e3,	// (0x000586f6) set_value_pane_ParamLimits

0x58e3,	// (0x000586f6) set_value_pane

0xf228,	// (0x0006203b) bg_set_opt_pane_ParamLimits

0xf228,	// (0x0006203b) bg_set_opt_pane

0x39a2,	// (0x000567b5) set_value_pane_t1

0xf249,	// (0x0006205c) slider_set_pane_cp3

0xf252,	// (0x00062065) volume_small_pane_cp

0xf25b,	// (0x0006206e) list_form_gen_pane

0xf264,	// (0x00062077) scroll_pane_cp8

0x597f,	// (0x00058792) form_field_data_pane_ParamLimits

0x597f,	// (0x00058792) form_field_data_pane

0x599f,	// (0x000587b2) form_field_data_wide_pane_ParamLimits

0x599f,	// (0x000587b2) form_field_data_wide_pane

0x59c6,	// (0x000587d9) form_field_popup_pane_ParamLimits

0x59c6,	// (0x000587d9) form_field_popup_pane

0x39c0,	// (0x000567d3) form_field_popup_wide_pane_ParamLimits

0x39c0,	// (0x000567d3) form_field_popup_wide_pane

0x39e1,	// (0x000567f4) form_field_slider_pane_ParamLimits

0x39e1,	// (0x000567f4) form_field_slider_pane

0x39f4,	// (0x00056807) form_field_slider_wide_pane_ParamLimits

0x39f4,	// (0x00056807) form_field_slider_wide_pane

0xf275,	// (0x00062088) data_form_pane

0x59f2,	// (0x00058805) form_field_data_pane_t1

0xf281,	// (0x00062094) input_focus_pane

0x3a07,	// (0x0005681a) data_form_wide_pane

0x3a24,	// (0x00056837) form_field_data_wide_pane_t1

0xeffc,	// (0x00061e0f) input_focus_pane_cp6

0x5a0c,	// (0x0005881f) form_field_popup_pane_t1

0xf281,	// (0x00062094) input_focus_pane_cp7

0xf2af,	// (0x000620c2) list_form_pane

0x3a4e,	// (0x00056861) form_field_popup_wide_pane_t1

0xf281,	// (0x00062094) input_focus_pane_cp8

0xf2bb,	// (0x000620ce) list_form_wide_pane

0x5a2e,	// (0x00058841) form_field_slider_pane_t1_ParamLimits

0x5a2e,	// (0x00058841) form_field_slider_pane_t1

0x5a46,	// (0x00058859) form_field_slider_pane_t2_ParamLimits

0x5a46,	// (0x00058859) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00062475) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00062475) form_field_slider_pane_t

0xed64,	// (0x00061b77) input_focus_pane_cp9_ParamLimits

0xed64,	// (0x00061b77) input_focus_pane_cp9

0x5a5b,	// (0x0005886e) slider_cont_pane_ParamLimits

0x5a5b,	// (0x0005886e) slider_cont_pane

0xf2c7,	// (0x000620da) form_field_slider_wide_pane_t1_ParamLimits

0xf2c7,	// (0x000620da) form_field_slider_wide_pane_t1

0x3a63,	// (0x00056876) form_field_slider_wide_pane_t2_ParamLimits

0x3a63,	// (0x00056876) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0006247a) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0006247a) form_field_slider_wide_pane_t

0xed64,	// (0x00061b77) input_focus_pane_cp10_ParamLimits

0xed64,	// (0x00061b77) input_focus_pane_cp10

0x5a6f,	// (0x00058882) slider_cont_pane_cp1_ParamLimits

0x5a6f,	// (0x00058882) slider_cont_pane_cp1

0x5a83,	// (0x00058896) slider_form_pane_cp

0xf2d9,	// (0x000620ec) input_focus_pane_g1

0xf2e1,	// (0x000620f4) input_focus_pane_g2

0xf2e9,	// (0x000620fc) input_focus_pane_g3

0xf2f1,	// (0x00062104) input_focus_pane_g4

0xf2f9,	// (0x0006210c) input_focus_pane_g5

0xf301,	// (0x00062114) input_focus_pane_g6

0xf309,	// (0x0006211c) input_focus_pane_g7

0xf311,	// (0x00062124) input_focus_pane_g8

0xf319,	// (0x0006212c) input_focus_pane_g9

0xebd9,	// (0x000619ec) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0006247f) input_focus_pane_g

0x9439,	// (0x0005c24c) wait_border_pane_g3_copy1

0x5a8b,	// (0x0005889e) data_form_pane_t1

0xebd9,	// (0x000619ec) wait_anim_pane_g1_copy1

0x6e26,	// (0x00059c39) data_form_wide_pane_t1

0x3a75,	// (0x00056888) list_form_graphic_pane_cp_ParamLimits

0x3a75,	// (0x00056888) list_form_graphic_pane_cp

0xa57e,	// (0x0005d391) slider_form_pane_g1

0xa587,	// (0x0005d39a) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00062782) slider_form_pane_g

0x3a75,	// (0x00056888) list_form_graphic_pane_ParamLimits

0x3a75,	// (0x00056888) list_form_graphic_pane

0x3a87,	// (0x0005689a) list_form_graphic_pane_g1

0x3a8f,	// (0x000568a2) list_form_graphic_pane_t1_ParamLimits

0x3a8f,	// (0x000568a2) list_form_graphic_pane_t1

0xec31,	// (0x00061a44) list_highlight_pane_cp5_ParamLimits

0xec31,	// (0x00061a44) list_highlight_pane_cp5

0x5aaa,	// (0x000588bd) find_pane_g1

0xf321,	// (0x00062134) input_find_pane

0x5ab3,	// (0x000588c6) input_find_pane_g1_ParamLimits

0x5ab3,	// (0x000588c6) input_find_pane_g1

0x5abf,	// (0x000588d2) input_find_pane_t1_ParamLimits

0x5abf,	// (0x000588d2) input_find_pane_t1

0x5ad4,	// (0x000588e7) input_find_pane_t2_ParamLimits

0x5ad4,	// (0x000588e7) input_find_pane_t2

0x0001,

0xf681,	// (0x00062494) input_find_pane_t_ParamLimits

0xf681,	// (0x00062494) input_find_pane_t

0xf32a,	// (0x0006213d) input_focus_pane_cp5_ParamLimits

0xf32a,	// (0x0006213d) input_focus_pane_cp5

0xf33d,	// (0x00062150) bg_popup_window_pane_cp2_ParamLimits

0xf33d,	// (0x00062150) bg_popup_window_pane_cp2

0xf34a,	// (0x0006215d) listscroll_menu_pane_ParamLimits

0xf34a,	// (0x0006215d) listscroll_menu_pane

0x5af5,	// (0x00058908) popup_submenu_window_ParamLimits

0x5af5,	// (0x00058908) popup_submenu_window

0xf356,	// (0x00062169) find_popup_pane_g1

0xf35e,	// (0x00062171) input_popup_find_pane_cp

0xf368,	// (0x0006217b) input_focus_pane_cp4_ParamLimits

0xf368,	// (0x0006217b) input_focus_pane_cp4

0xf376,	// (0x00062189) input_popup_find_pane_t1_ParamLimits

0xf376,	// (0x00062189) input_popup_find_pane_t1

0xebe3,	// (0x000619f6) bg_popup_sub_pane_cp

0xf3a4,	// (0x000621b7) listscroll_popup_sub_pane

0xf3ac,	// (0x000621bf) list_submenu_pane_ParamLimits

0xf3ac,	// (0x000621bf) list_submenu_pane

0xf3bd,	// (0x000621d0) scroll_pane_cp4

0xf3c5,	// (0x000621d8) list_single_popup_submenu_pane_ParamLimits

0xf3c5,	// (0x000621d8) list_single_popup_submenu_pane

0xf3da,	// (0x000621ed) list_single_popup_submenu_pane_g1

0xf3e2,	// (0x000621f5) list_single_popup_submenu_pane_t1_ParamLimits

0xf3e2,	// (0x000621f5) list_single_popup_submenu_pane_t1

0xec31,	// (0x00061a44) bg_active_tab_pane_cp1_ParamLimits

0xec31,	// (0x00061a44) bg_active_tab_pane_cp1

0x5b33,	// (0x00058946) tabs_2_active_pane_g1

0x5b3b,	// (0x0005894e) tabs_2_active_pane_t1

0xec31,	// (0x00061a44) bg_passive_tab_pane_cp1_ParamLimits

0xec31,	// (0x00061a44) bg_passive_tab_pane_cp1

0x5b33,	// (0x00058946) tabs_2_passive_pane_g1

0x5b3b,	// (0x0005894e) tabs_2_passive_pane_t1

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp4

0x5b5b,	// (0x0005896e) tabs_2_long_active_pane_t1

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp4

0x6aab,	// (0x000598be) list_single_midp_graphic_pane_g4_ParamLimits

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp5

0x5b7a,	// (0x0005898d) tabs_3_long_active_pane_t1

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp5

0x6aab,	// (0x000598be) list_single_midp_graphic_pane_g4

0xec31,	// (0x00061a44) bg_popup_window_pane_cp13_ParamLimits

0xec31,	// (0x00061a44) bg_popup_window_pane_cp13

0xf400,	// (0x00062213) listscroll_popup_fast_pane_ParamLimits

0xf400,	// (0x00062213) listscroll_popup_fast_pane

0xf40f,	// (0x00062222) grid_popup_fast_pane_ParamLimits

0xf40f,	// (0x00062222) grid_popup_fast_pane

0xf421,	// (0x00062234) scroll_pane_cp9_ParamLimits

0xf421,	// (0x00062234) scroll_pane_cp9

0xbeed,	// (0x0005ed00) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbeed,	// (0x0005ed00) list_single_graphic_hl_pane_t1_cp2

0xf445,	// (0x00062258) input_focus_pane_cp20_ParamLimits

0xf445,	// (0x00062258) input_focus_pane_cp20

0xf453,	// (0x00062266) query_popup_data_pane_t1_ParamLimits

0xf453,	// (0x00062266) query_popup_data_pane_t1

0xf466,	// (0x00062279) query_popup_data_pane_t2_ParamLimits

0xf466,	// (0x00062279) query_popup_data_pane_t2

0xf4ac,	// (0x000622bf) query_popup_data_pane_t3_ParamLimits

0xf4ac,	// (0x000622bf) query_popup_data_pane_t3

0xf4ed,	// (0x00062300) query_popup_data_pane_t4_ParamLimits

0xf4ed,	// (0x00062300) query_popup_data_pane_t4

0x123d,	// (0x00054050) query_popup_data_pane_t5_ParamLimits

0x123d,	// (0x00054050) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00062499) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00062499) query_popup_data_pane_t

0xf2d9,	// (0x000620ec) bg_set_opt_pane_g1

0xf2e1,	// (0x000620f4) bg_set_opt_pane_g2

0xf2e9,	// (0x000620fc) bg_set_opt_pane_g3

0xf2f1,	// (0x00062104) bg_set_opt_pane_g4

0xf2f9,	// (0x0006210c) bg_set_opt_pane_g5

0xf301,	// (0x00062114) bg_set_opt_pane_g6

0xf309,	// (0x0006211c) bg_set_opt_pane_g7

0xf311,	// (0x00062124) bg_set_opt_pane_g8

0xf319,	// (0x0006212c) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000624a4) bg_set_opt_pane_g

0x60d2,	// (0x00058ee5) control_top_pane_stacon_ParamLimits

0x60d2,	// (0x00058ee5) control_top_pane_stacon

0x6125,	// (0x00058f38) signal_pane_stacon_ParamLimits

0x6125,	// (0x00058f38) signal_pane_stacon

0x8245,	// (0x0005b058) stacon_top_pane_g1_ParamLimits

0x8245,	// (0x0005b058) stacon_top_pane_g1

0x614a,	// (0x00058f5d) title_pane_stacon_ParamLimits

0x614a,	// (0x00058f5d) title_pane_stacon

0x6174,	// (0x00058f87) uni_indicator_pane_stacon_ParamLimits

0x6174,	// (0x00058f87) uni_indicator_pane_stacon

0x6189,	// (0x00058f9c) battery_pane_stacon_ParamLimits

0x6189,	// (0x00058f9c) battery_pane_stacon

0x61cd,	// (0x00058fe0) control_bottom_pane_stacon_ParamLimits

0x61cd,	// (0x00058fe0) control_bottom_pane_stacon

0x61f0,	// (0x00059003) navi_pane_stacon_ParamLimits

0x61f0,	// (0x00059003) navi_pane_stacon

0x8267,	// (0x0005b07a) stacon_bottom_pane_g1_ParamLimits

0x8267,	// (0x0005b07a) stacon_bottom_pane_g1

0x5b8c,	// (0x0005899f) aid_levels_signal_lsc_ParamLimits

0x5b8c,	// (0x0005899f) aid_levels_signal_lsc

0x5ba3,	// (0x000589b6) signal_pane_stacon_g1_ParamLimits

0x5ba3,	// (0x000589b6) signal_pane_stacon_g1

0x5bb7,	// (0x000589ca) signal_pane_stacon_g2_ParamLimits

0x5bb7,	// (0x000589ca) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000624b7) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000624b7) signal_pane_stacon_g

0x5bec,	// (0x000589ff) title_pane_stacon_t1_ParamLimits

0x5bec,	// (0x000589ff) title_pane_stacon_t1

0x1295,	// (0x000540a8) uni_indicator_pane_stacon_g1

0x129f,	// (0x000540b2) uni_indicator_pane_stacon_g2

0x1281,	// (0x00054094) uni_indicator_pane_stacon_g3

0x128b,	// (0x0005409e) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000624c3) uni_indicator_pane_stacon_g

0x5c11,	// (0x00058a24) control_top_pane_stacon_g1

0x5c19,	// (0x00058a2c) control_top_pane_stacon_t1_ParamLimits

0x5c19,	// (0x00058a2c) control_top_pane_stacon_t1

0x5c50,	// (0x00058a63) aid_levels_battery_lsc_ParamLimits

0x5c50,	// (0x00058a63) aid_levels_battery_lsc

0x5c68,	// (0x00058a7b) battery_pane_stacon_g1_ParamLimits

0x5c68,	// (0x00058a7b) battery_pane_stacon_g1

0x5c7a,	// (0x00058a8d) battery_pane_stacon_g2_ParamLimits

0x5c7a,	// (0x00058a8d) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000624cc) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000624cc) battery_pane_stacon_g

0x5cb8,	// (0x00058acb) navi_icon_pane_stacon

0x5ccc,	// (0x00058adf) navi_navi_pane_stacon

0x5cb8,	// (0x00058acb) navi_text_pane_stacon

0x5ce2,	// (0x00058af5) control_bottom_pane_stacon_g1

0x5cea,	// (0x00058afd) control_bottom_pane_stacon_t1_ParamLimits

0x5cea,	// (0x00058afd) control_bottom_pane_stacon_t1

0x5d21,	// (0x00058b34) grid_app_pane_ParamLimits

0x5d21,	// (0x00058b34) grid_app_pane

0x5d43,	// (0x00058b56) scroll_pane_cp15_ParamLimits

0x5d43,	// (0x00058b56) scroll_pane_cp15

0x5d56,	// (0x00058b69) cell_app_pane_ParamLimits

0x5d56,	// (0x00058b69) cell_app_pane

0x5d82,	// (0x00058b95) cell_app_pane_g1_ParamLimits

0x5d82,	// (0x00058b95) cell_app_pane_g1

0x2feb,	// (0x00055dfe) cell_app_pane_g2_ParamLimits

0x2feb,	// (0x00055dfe) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000624d1) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000624d1) cell_app_pane_g

0x5da6,	// (0x00058bb9) cell_app_pane_t1_ParamLimits

0x5da6,	// (0x00058bb9) cell_app_pane_t1

0x2ff7,	// (0x00055e0a) grid_highlight_pane_ParamLimits

0x2ff7,	// (0x00055e0a) grid_highlight_pane

0xf2d9,	// (0x000620ec) cell_highlight_pane_g1

0xf2e1,	// (0x000620f4) cell_highlight_pane_g2

0xf2e9,	// (0x000620fc) cell_highlight_pane_g3

0xf2f1,	// (0x00062104) cell_highlight_pane_g4

0xf2f9,	// (0x0006210c) cell_highlight_pane_g5

0xf301,	// (0x00062114) cell_highlight_pane_g6

0xf309,	// (0x0006211c) cell_highlight_pane_g7

0xf311,	// (0x00062124) cell_highlight_pane_g8

0xf319,	// (0x0006212c) cell_highlight_pane_g9

0xebd9,	// (0x000619ec) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0006247f) cell_highlight_pane_g

0x3008,	// (0x00055e1b) bg_scroll_pane

0x5dea,	// (0x00058bfd) scroll_handle_pane

0x304f,	// (0x00055e62) scroll_bg_pane_g1

0x3064,	// (0x00055e77) scroll_bg_pane_g2

0x307c,	// (0x00055e8f) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000624d6) scroll_bg_pane_g

0x3091,	// (0x00055ea4) scroll_handle_focus_pane_ParamLimits

0x3091,	// (0x00055ea4) scroll_handle_focus_pane

0x304f,	// (0x00055e62) scroll_handle_pane_g1

0x309e,	// (0x00055eb1) scroll_handle_pane_g2

0x307c,	// (0x00055e8f) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000624dd) scroll_handle_pane_g

0xf368,	// (0x0006217b) bg_popup_sub_pane_cp21_ParamLimits

0xf368,	// (0x0006217b) bg_popup_sub_pane_cp21

0x30b2,	// (0x00055ec5) popup_fep_japan_predictive_window_t1_ParamLimits

0x30b2,	// (0x00055ec5) popup_fep_japan_predictive_window_t1

0x30c9,	// (0x00055edc) popup_fep_japan_predictive_window_t2_ParamLimits

0x30c9,	// (0x00055edc) popup_fep_japan_predictive_window_t2

0x30fc,	// (0x00055f0f) popup_fep_japan_predictive_window_t3_ParamLimits

0x30fc,	// (0x00055f0f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x000624e4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x000624e4) popup_fep_japan_predictive_window_t

0xebe3,	// (0x000619f6) bg_popup_sub_pane_cp23

0x3133,	// (0x00055f46) listscroll_japin_cand_pane

0x313b,	// (0x00055f4e) popup_fep_japan_candidate_window_t1

0x3149,	// (0x00055f5c) candidate_pane_ParamLimits

0x3149,	// (0x00055f5c) candidate_pane

0x315b,	// (0x00055f6e) scroll_pane_cp30

0x3165,	// (0x00055f78) list_single_popup_jap_candidate_pane_ParamLimits

0x3165,	// (0x00055f78) list_single_popup_jap_candidate_pane

0xebe3,	// (0x000619f6) list_highlight_pane_cp30

0x3179,	// (0x00055f8c) list_single_popup_jap_candidate_pane_t1

0x5e13,	// (0x00058c26) level_1_signal

0x5e20,	// (0x00058c33) level_2_signal

0x5e2d,	// (0x00058c40) level_3_signal

0x5e3a,	// (0x00058c4d) level_4_signal

0x5e47,	// (0x00058c5a) level_5_signal

0x5e54,	// (0x00058c67) level_6_signal

0x5e61,	// (0x00058c74) level_7_signal

0x5e13,	// (0x00058c26) level_1_battery

0x5e20,	// (0x00058c33) level_2_battery

0x5e2d,	// (0x00058c40) level_3_battery

0x5e3a,	// (0x00058c4d) level_4_battery

0x5e47,	// (0x00058c5a) level_5_battery

0x5e54,	// (0x00058c67) level_6_battery

0x5e61,	// (0x00058c74) level_7_battery

0x31a0,	// (0x00055fb3) list_menu_pane_ParamLimits

0x31a0,	// (0x00055fb3) list_menu_pane

0x31b6,	// (0x00055fc9) scroll_pane_cp25_ParamLimits

0x31b6,	// (0x00055fc9) scroll_pane_cp25

0x31cf,	// (0x00055fe2) list_double2_graphic_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double2_graphic_pane_cp2

0x31cf,	// (0x00055fe2) list_double2_large_graphic_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double2_large_graphic_pane_cp2

0x31cf,	// (0x00055fe2) list_double2_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double2_pane_cp2

0x31cf,	// (0x00055fe2) list_double_graphic_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double_graphic_pane_cp2

0x31cf,	// (0x00055fe2) list_double_large_graphic_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double_large_graphic_pane_cp2

0x31cf,	// (0x00055fe2) list_double_number_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double_number_pane_cp2

0x31cf,	// (0x00055fe2) list_double_pane_cp2_ParamLimits

0x31cf,	// (0x00055fe2) list_double_pane_cp2

0x5ea3,	// (0x00058cb6) list_single_2graphic_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_2graphic_pane_cp2

0x5ea3,	// (0x00058cb6) list_single_graphic_heading_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_graphic_heading_pane_cp2

0x5ea3,	// (0x00058cb6) list_single_graphic_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_graphic_pane_cp2

0x5ea3,	// (0x00058cb6) list_single_heading_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_heading_pane_cp2

0x31df,	// (0x00055ff2) list_single_large_graphic_pane_cp2_ParamLimits

0x31df,	// (0x00055ff2) list_single_large_graphic_pane_cp2

0x5ea3,	// (0x00058cb6) list_single_number_heading_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_number_heading_pane_cp2

0x5ea3,	// (0x00058cb6) list_single_number_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_number_pane_cp2

0x5ec0,	// (0x00058cd3) list_single_pane_cp2_ParamLimits

0x5ec0,	// (0x00058cd3) list_single_pane_cp2

0x31f8,	// (0x0005600b) bg_popup_sub_pane_cp22

0x5f9c,	// (0x00058daf) popup_side_volume_key_window_g1

0x5fc6,	// (0x00058dd9) popup_side_volume_key_window_t1

0x5fe4,	// (0x00058df7) volume_small_pane_cp1

0xed64,	// (0x00061b77) bg_popup_sub_pane_cp24_ParamLimits

0xed64,	// (0x00061b77) bg_popup_sub_pane_cp24

0x320e,	// (0x00056021) fep_china_uni_candidate_pane_ParamLimits

0x320e,	// (0x00056021) fep_china_uni_candidate_pane

0x3222,	// (0x00056035) fep_china_uni_entry_pane

0x3232,	// (0x00056045) popup_fep_china_uni_window_g1

0x324e,	// (0x00056061) fep_china_uni_entry_pane_g1

0x3258,	// (0x0005606b) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00062515) fep_china_uni_entry_pane_g

0x3262,	// (0x00056075) fep_entry_item_pane

0x326c,	// (0x0005607f) fep_candidate_item_pane

0x3274,	// (0x00056087) fep_china_uni_candidate_pane_g1

0x327e,	// (0x00056091) fep_china_uni_candidate_pane_g2

0x3286,	// (0x00056099) fep_china_uni_candidate_pane_g3

0x328e,	// (0x000560a1) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0006251a) fep_china_uni_candidate_pane_g

0xebd9,	// (0x000619ec) fep_entry_item_pane_g1

0x3298,	// (0x000560ab) fep_entry_item_pane_t1_ParamLimits

0x3298,	// (0x000560ab) fep_entry_item_pane_t1

0x32ae,	// (0x000560c1) fep_candidate_item_pane_t1_ParamLimits

0x32ae,	// (0x000560c1) fep_candidate_item_pane_t1

0x32c3,	// (0x000560d6) fep_candidate_item_pane_t2_ParamLimits

0x32c3,	// (0x000560d6) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00062523) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00062523) fep_candidate_item_pane_t

0xec31,	// (0x00061a44) list_highlight_pane_cp31_ParamLimits

0xec31,	// (0x00061a44) list_highlight_pane_cp31

0x32d5,	// (0x000560e8) level_1_signal_lsc

0x32de,	// (0x000560f1) level_2_signal_lsc

0x32e7,	// (0x000560fa) level_3_signal_lsc

0x32f0,	// (0x00056103) level_4_signal_lsc

0x32f9,	// (0x0005610c) level_5_signal_lsc

0x3302,	// (0x00056115) level_6_signal_lsc

0x330b,	// (0x0005611e) level_7_signal_lsc

0x330b,	// (0x0005611e) level_1_battery_lsc

0x3314,	// (0x00056127) level_2_battery_lsc

0x331d,	// (0x00056130) level_3_battery_lsc

0x3326,	// (0x00056139) level_4_battery_lsc

0x332f,	// (0x00056142) level_5_battery_lsc

0x3338,	// (0x0005614b) level_6_battery_lsc

0x32d5,	// (0x000560e8) level_7_battery_lsc

0x3341,	// (0x00056154) scroll_handle_focus_pane_g1

0x334a,	// (0x0005615d) scroll_handle_focus_pane_g2

0x3353,	// (0x00056166) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00062528) scroll_handle_focus_pane_g

0x5fec,	// (0x00058dff) list_single_2graphic_pane_g1_ParamLimits

0x5fec,	// (0x00058dff) list_single_2graphic_pane_g1

0x551c,	// (0x0005832f) list_single_2graphic_pane_g2_ParamLimits

0x551c,	// (0x0005832f) list_single_2graphic_pane_g2

0x5479,	// (0x0005828c) list_single_2graphic_pane_g3_ParamLimits

0x5479,	// (0x0005828c) list_single_2graphic_pane_g3

0x5ff8,	// (0x00058e0b) list_single_2graphic_pane_g4_ParamLimits

0x5ff8,	// (0x00058e0b) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0006252f) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0006252f) list_single_2graphic_pane_g

0x6009,	// (0x00058e1c) list_single_2graphic_pane_t1_ParamLimits

0x6009,	// (0x00058e1c) list_single_2graphic_pane_t1

0x6037,	// (0x00058e4a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6037,	// (0x00058e4a) list_double2_graphic_large_graphic_pane_g1

0x5757,	// (0x0005856a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5757,	// (0x0005856a) list_double2_graphic_large_graphic_pane_g2

0x568f,	// (0x000584a2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x568f,	// (0x000584a2) list_double2_graphic_large_graphic_pane_g3

0x6049,	// (0x00058e5c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6049,	// (0x00058e5c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00062538) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00062538) list_double2_graphic_large_graphic_pane_g

0x6055,	// (0x00058e68) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6055,	// (0x00058e68) list_double2_graphic_large_graphic_pane_t1

0x606b,	// (0x00058e7e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x606b,	// (0x00058e7e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00062541) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00062541) list_double2_graphic_large_graphic_pane_t

0x832a,	// (0x0005b13d) popup_fast_swap_window_ParamLimits

0x832a,	// (0x0005b13d) popup_fast_swap_window

0x8348,	// (0x0005b15b) popup_side_volume_key_window

0x8366,	// (0x0005b179) stacon_top_pane

0x8370,	// (0x0005b183) status_pane_ParamLimits

0x8370,	// (0x0005b183) status_pane

0xebcf,	// (0x000619e2) status_small_pane

0xebe3,	// (0x000619f6) control_pane

0xebe3,	// (0x000619f6) stacon_bottom_pane

0xf264,	// (0x00062077) scroll_pane_cp121

0xf25b,	// (0x0006206e) set_content_pane

0x607d,	// (0x00058e90) bg_active_tab_pane_g1_cp1

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp1

0x608f,	// (0x00058ea2) bg_active_tab_pane_g3_cp1

0x607d,	// (0x00058e90) bg_passive_tab_pane_g1_cp1

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp1

0x608f,	// (0x00058ea2) bg_passive_tab_pane_g3_cp1

0x6098,	// (0x00058eab) bg_active_tab_pane_g1_cp2

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp2

0x60a1,	// (0x00058eb4) bg_active_tab_pane_g3_cp2

0x6098,	// (0x00058eab) bg_passive_tab_pane_g1_cp2

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp2

0x60a1,	// (0x00058eb4) bg_passive_tab_pane_g3_cp2

0x60aa,	// (0x00058ebd) bg_active_tab_pane_g1_cp3

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp3

0x60b3,	// (0x00058ec6) bg_active_tab_pane_g3_cp3

0x60aa,	// (0x00058ebd) bg_passive_tab_pane_g1_cp3

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp3

0x60b3,	// (0x00058ec6) bg_passive_tab_pane_g3_cp3

0x60bc,	// (0x00058ecf) bg_active_tab_pane_g1_cp4

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp4

0x60c7,	// (0x00058eda) bg_active_tab_pane_g3_cp4

0x60bc,	// (0x00058ecf) bg_passive_tab_pane_g1_cp4

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp4

0x60c7,	// (0x00058eda) bg_passive_tab_pane_g3_cp4

0x8283,	// (0x0005b096) bg_active_tab_pane_g1_cp5

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp5

0x828c,	// (0x0005b09f) bg_active_tab_pane_g3_cp5

0x8283,	// (0x0005b096) bg_passive_tab_pane_g1_cp5

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp5

0x828c,	// (0x0005b09f) bg_passive_tab_pane_g3_cp5

0x8295,	// (0x0005b0a8) list_set_graphic_pane_ParamLimits

0x8295,	// (0x0005b0a8) list_set_graphic_pane

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp4

0x82ab,	// (0x0005b0be) list_set_graphic_pane_g1_ParamLimits

0x82ab,	// (0x0005b0be) list_set_graphic_pane_g1

0x82b7,	// (0x0005b0ca) list_set_graphic_pane_g2_ParamLimits

0x82b7,	// (0x0005b0ca) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00062546) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00062546) list_set_graphic_pane_g

0x0009,

0xfab4,	// (0x000628c7) volume_small_pane_cp_g

0x82db,	// (0x0005b0ee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x82db,	// (0x0005b0ee) list_double2_large_graphic_pane_g1_cp2

0x82e9,	// (0x0005b0fc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x82e9,	// (0x0005b0fc) list_double2_large_graphic_pane_g2_cp2

0x82fa,	// (0x0005b10d) list_double2_large_graphic_pane_g3_cp2

0x8302,	// (0x0005b115) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8302,	// (0x0005b115) list_double2_large_graphic_pane_t1_cp2

0x8318,	// (0x0005b12b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8318,	// (0x0005b12b) list_double2_large_graphic_pane_t2_cp2

0xa10b,	// (0x0005cf1e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa10b,	// (0x0005cf1e) list_double_large_graphic_pane_g1_cp2

0xa11e,	// (0x0005cf31) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa11e,	// (0x0005cf31) list_double_large_graphic_pane_g2_cp2

0x8482,	// (0x0005b295) list_double_large_graphic_pane_g3_cp2

0xa12f,	// (0x0005cf42) list_double_large_graphic_pane_g4_cp

0xa137,	// (0x0005cf4a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa137,	// (0x0005cf4a) list_double_large_graphic_pane_t1_cp2

0xa14e,	// (0x0005cf61) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa14e,	// (0x0005cf61) list_double_large_graphic_pane_t2_cp2

0x837e,	// (0x0005b191) list_double2_graphic_pane_g1_cp2_ParamLimits

0x837e,	// (0x0005b191) list_double2_graphic_pane_g1_cp2

0x838c,	// (0x0005b19f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x838c,	// (0x0005b19f) list_double2_graphic_pane_g2_cp2

0x839d,	// (0x0005b1b0) list_double2_graphic_pane_g3_cp2

0x83a7,	// (0x0005b1ba) list_double2_graphic_pane_t1_cp2_ParamLimits

0x83a7,	// (0x0005b1ba) list_double2_graphic_pane_t1_cp2

0x83bd,	// (0x0005b1d0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x83bd,	// (0x0005b1d0) list_double2_graphic_pane_t2_cp2

0x8239,	// (0x0005b04c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8239,	// (0x0005b04c) list_single_number_heading_pane_g1_cp2

0x83cf,	// (0x0005b1e2) list_single_number_heading_pane_g2_cp2

0x83d7,	// (0x0005b1ea) list_single_number_heading_pane_t1_cp2_ParamLimits

0x83d7,	// (0x0005b1ea) list_single_number_heading_pane_t1_cp2

0x83ed,	// (0x0005b200) list_single_number_heading_pane_t2_cp2_ParamLimits

0x83ed,	// (0x0005b200) list_single_number_heading_pane_t2_cp2

0x8401,	// (0x0005b214) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8401,	// (0x0005b214) list_single_number_heading_pane_t3_cp2

0x8239,	// (0x0005b04c) list_single_heading_pane_g1_cp2_ParamLimits

0x8239,	// (0x0005b04c) list_single_heading_pane_g1_cp2

0x83cf,	// (0x0005b1e2) list_single_heading_pane_g2_cp2

0x83d7,	// (0x0005b1ea) list_single_heading_pane_t1_cp2_ParamLimits

0x83d7,	// (0x0005b1ea) list_single_heading_pane_t1_cp2

0x9f05,	// (0x0005cd18) list_single_heading_pane_t2_cp2_ParamLimits

0x9f05,	// (0x0005cd18) list_single_heading_pane_t2_cp2

0x9e4d,	// (0x0005cc60) list_double_graphic_pane_g1_cp2_ParamLimits

0x9e4d,	// (0x0005cc60) list_double_graphic_pane_g1_cp2

0x9e59,	// (0x0005cc6c) list_double_graphic_pane_g2_cp2_ParamLimits

0x9e59,	// (0x0005cc6c) list_double_graphic_pane_g2_cp2

0x9e68,	// (0x0005cc7b) list_double_graphic_pane_g3_cp2

0x9e70,	// (0x0005cc83) list_double_graphic_pane_t1_cp2_ParamLimits

0x9e70,	// (0x0005cc83) list_double_graphic_pane_t1_cp2

0x9e86,	// (0x0005cc99) list_double_graphic_pane_t2_cp2_ParamLimits

0x9e86,	// (0x0005cc99) list_double_graphic_pane_t2_cp2

0x8476,	// (0x0005b289) list_double_number_pane_g1_cp2_ParamLimits

0x8476,	// (0x0005b289) list_double_number_pane_g1_cp2

0x8482,	// (0x0005b295) list_double_number_pane_g2_cp2

0x9e11,	// (0x0005cc24) list_double_number_pane_t1_cp2_ParamLimits

0x9e11,	// (0x0005cc24) list_double_number_pane_t1_cp2

0x9e25,	// (0x0005cc38) list_double_number_pane_t2_cp2_ParamLimits

0x9e25,	// (0x0005cc38) list_double_number_pane_t2_cp2

0x9e3b,	// (0x0005cc4e) list_double_number_pane_t3_cp2_ParamLimits

0x9e3b,	// (0x0005cc4e) list_double_number_pane_t3_cp2

0x9b0c,	// (0x0005c91f) list_single_graphic_pane_g1_cp2_ParamLimits

0x9b0c,	// (0x0005c91f) list_single_graphic_pane_g1_cp2

0x84e7,	// (0x0005b2fa) list_single_graphic_pane_g2_cp2_ParamLimits

0x84e7,	// (0x0005b2fa) list_single_graphic_pane_g2_cp2

0x84f3,	// (0x0005b306) list_single_graphic_pane_g3_cp2

0x9ae2,	// (0x0005c8f5) list_single_graphic_pane_t1_cp2_ParamLimits

0x9ae2,	// (0x0005c8f5) list_single_graphic_pane_t1_cp2

0x84e7,	// (0x0005b2fa) list_single_number_pane_g1_cp2_ParamLimits

0x84e7,	// (0x0005b2fa) list_single_number_pane_g1_cp2

0x84f3,	// (0x0005b306) list_single_number_pane_g2_cp2

0x9ae2,	// (0x0005c8f5) list_single_number_pane_t1_cp2_ParamLimits

0x9ae2,	// (0x0005c8f5) list_single_number_pane_t1_cp2

0x9af8,	// (0x0005c90b) list_single_number_pane_t2_cp2_ParamLimits

0x9af8,	// (0x0005c90b) list_single_number_pane_t2_cp2

0x82e9,	// (0x0005b0fc) list_double2_pane_g1_cp2_ParamLimits

0x82e9,	// (0x0005b0fc) list_double2_pane_g1_cp2

0x82fa,	// (0x0005b10d) list_double2_pane_g2_cp2

0x844e,	// (0x0005b261) list_double2_pane_t1_cp2_ParamLimits

0x844e,	// (0x0005b261) list_double2_pane_t1_cp2

0x8464,	// (0x0005b277) list_double2_pane_t2_cp2_ParamLimits

0x8464,	// (0x0005b277) list_double2_pane_t2_cp2

0x8476,	// (0x0005b289) list_double_pane_g1_cp2_ParamLimits

0x8476,	// (0x0005b289) list_double_pane_g1_cp2

0x8482,	// (0x0005b295) list_double_pane_g2_cp2

0x848a,	// (0x0005b29d) list_double_pane_t1_cp2_ParamLimits

0x848a,	// (0x0005b29d) list_double_pane_t1_cp2

0x84a0,	// (0x0005b2b3) list_double_pane_t2_cp2_ParamLimits

0x84a0,	// (0x0005b2b3) list_double_pane_t2_cp2

0x84d7,	// (0x0005b2ea) list_single_pane_cp2_g3

0x84e7,	// (0x0005b2fa) list_single_pane_g1_cp2_ParamLimits

0x84e7,	// (0x0005b2fa) list_single_pane_g1_cp2

0x84f3,	// (0x0005b306) list_single_pane_g2_cp2

0x84fb,	// (0x0005b30e) list_single_pane_t1_cp2_ParamLimits

0x84fb,	// (0x0005b30e) list_single_pane_t1_cp2

0x8513,	// (0x0005b326) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8513,	// (0x0005b326) list_single_large_graphic_pane_g1_cp2

0x8521,	// (0x0005b334) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8521,	// (0x0005b334) list_single_large_graphic_pane_g2_cp2

0x852d,	// (0x0005b340) list_single_large_graphic_pane_g3_cp2

0x8535,	// (0x0005b348) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8535,	// (0x0005b348) list_single_large_graphic_pane_g4_cp1

0x854f,	// (0x0005b362) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x854f,	// (0x0005b362) list_single_large_graphic_pane_t1_cp2

0x9aac,	// (0x0005c8bf) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9aac,	// (0x0005c8bf) list_single_graphic_heading_pane_g1_cp2

0x9a79,	// (0x0005c88c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9a79,	// (0x0005c88c) list_single_graphic_heading_pane_g4_cp2

0x84f3,	// (0x0005b306) list_single_graphic_heading_pane_g5_cp2

0x9ab8,	// (0x0005c8cb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9ab8,	// (0x0005c8cb) list_single_graphic_heading_pane_t1_cp2

0x9ace,	// (0x0005c8e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ace,	// (0x0005c8e1) list_single_graphic_heading_pane_t2_cp2

0x9a6d,	// (0x0005c880) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9a6d,	// (0x0005c880) list_single_2graphic_pane_g1_cp2

0x9a79,	// (0x0005c88c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9a79,	// (0x0005c88c) list_single_2graphic_pane_g2_cp2

0x84f3,	// (0x0005b306) list_single_2graphic_pane_g3_cp2

0x9a8a,	// (0x0005c89d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9a8a,	// (0x0005c89d) list_single_2graphic_pane_g4_cp2

0x9a96,	// (0x0005c8a9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9a96,	// (0x0005c8a9) list_single_2graphic_pane_t1_cp2

0xebd9,	// (0x000619ec) list_highlight_pane_g10_cp1

0x9645,	// (0x0005c458) list_highlight_pane_g1_cp1

0x964d,	// (0x0005c460) list_highlight_pane_g2_cp1

0x9655,	// (0x0005c468) list_highlight_pane_g3_cp1

0x965d,	// (0x0005c470) list_highlight_pane_g4_cp1

0x9665,	// (0x0005c478) list_highlight_pane_g5_cp1

0x966d,	// (0x0005c480) list_highlight_pane_g6_cp1

0x9675,	// (0x0005c488) list_highlight_pane_g7_cp1

0x967d,	// (0x0005c490) list_highlight_pane_g8_cp1

0x9685,	// (0x0005c498) list_highlight_pane_g9_cp1

0x9565,	// (0x0005c378) form_field_slider_pane_t3

0x9573,	// (0x0005c386) form_field_slider_pane_t4

0x9581,	// (0x0005c394) slider_form_pane_ParamLimits

0x9581,	// (0x0005c394) slider_form_pane

0xebe3,	// (0x000619f6) control_abbreviations

0xebe3,	// (0x000619f6) control_conventions

0xebe3,	// (0x000619f6) control_definitions

0xebe3,	// (0x000619f6) format_table_attribute

0x9f5b,	// (0x0005cd6e) bg_popup_preview_window_pane_g9

0xebe3,	// (0x000619f6) format_table_data2

0xebe3,	// (0x000619f6) format_table_data3

0xebe3,	// (0x000619f6) format_table_data_example

0x0008,

0xebe3,	// (0x000619f6) intro_purpose

0xf8cf,	// (0x000626e2) bg_popup_preview_window_pane_g

0xebe3,	// (0x000619f6) texts_category

0xebe3,	// (0x000619f6) texts_graphics

0x8565,	// (0x0005b378) text_digital

0x8574,	// (0x0005b387) text_primary

0x8583,	// (0x0005b396) text_primary_small

0x8592,	// (0x0005b3a5) text_secondary

0x85a1,	// (0x0005b3b4) text_title

0xa6be,	// (0x0005d4d1) bg_passive_tab_pane_g1_cp3_srt

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp3_srt

0xa6c7,	// (0x0005d4da) bg_passive_tab_pane_g3_cp3_srt

0xec31,	// (0x00061a44) bg_active_tab_pane_cp3_srt_ParamLimits

0xec31,	// (0x00061a44) bg_active_tab_pane_cp3_srt

0xa6d0,	// (0x0005d4e3) tabs_4_active_pane_srt_g1

0xa6d8,	// (0x0005d4eb) tabs_4_active_pane_srt_t1_ParamLimits

0xa6d8,	// (0x0005d4eb) tabs_4_active_pane_srt_t1

0xa6be,	// (0x0005d4d1) bg_active_tab_pane_g1_cp3_copy1

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp3_copy1

0xa6c7,	// (0x0005d4da) bg_active_tab_pane_g3_cp3_copy1

0xec31,	// (0x00061a44) tabs_2_long_active_pane_srt_ParamLimits

0xec31,	// (0x00061a44) tabs_2_long_active_pane_srt

0xec31,	// (0x00061a44) tabs_2_long_passive_pane_srt_ParamLimits

0xec31,	// (0x00061a44) tabs_2_long_passive_pane_srt

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp4_srt

0xa395,	// (0x0005d1a8) bg_passive_tab_pane_g1_cp4_srt

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp4_srt

0xa39e,	// (0x0005d1b1) bg_passive_tab_pane_g3_cp4_srt

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp4_srt_ParamLimits

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp4_srt

0xa3a7,	// (0x0005d1ba) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3a7,	// (0x0005d1ba) tabs_2_long_active_pane_srt_t1

0xa395,	// (0x0005d1a8) bg_active_tab_pane_g1_cp4_srt

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp4_srt

0xa39e,	// (0x0005d1b1) bg_active_tab_pane_g3_cp4_srt

0xed64,	// (0x00061b77) tabs_3_long_active_pane_srt_ParamLimits

0xed64,	// (0x00061b77) tabs_3_long_active_pane_srt

0xed64,	// (0x00061b77) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xed64,	// (0x00061b77) tabs_3_long_passive_pane_cp_srt

0xed64,	// (0x00061b77) tabs_3_long_passive_pane_srt_ParamLimits

0xed64,	// (0x00061b77) tabs_3_long_passive_pane_srt

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp5_srt

0x8283,	// (0x0005b096) bg_passive_tab_pane_g1_cp5_srt

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp5_srt

0x828c,	// (0x0005b09f) bg_passive_tab_pane_g3_cp5_srt

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp5_srt_ParamLimits

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp5_srt

0xa383,	// (0x0005d196) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa383,	// (0x0005d196) tabs_3_long_active_pane_srt_t1

0x8283,	// (0x0005b096) bg_active_tab_pane_g1_cp5_srt

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp5_srt

0x828c,	// (0x0005b09f) bg_active_tab_pane_g3_cp5_srt

0xa375,	// (0x0005d188) navi_text_pane_srt_t1

0xa36d,	// (0x0005d180) navi_icon_pane_srt_g1

0x8779,	// (0x0005b58c) midp_editing_number_pane_srt

0x85b0,	// (0x0005b3c3) midp_ticker_pane_srt

0x8781,	// (0x0005b594) midp_ticker_pane_srt_g1

0x8789,	// (0x0005b59c) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00062565) midp_ticker_pane_srt_g

0x8791,	// (0x0005b5a4) midp_ticker_pane_srt_t1

0xa35e,	// (0x0005d171) midp_editing_number_pane_t1_copy1

0x85b8,	// (0x0005b3cb) listscroll_midp_pane

0x85b8,	// (0x0005b3cb) midp_form_pane

0x8627,	// (0x0005b43a) midp_info_popup_window_ParamLimits

0x8627,	// (0x0005b43a) midp_info_popup_window

0xf368,	// (0x0006217b) bg_popup_sub_pane_cp50_ParamLimits

0xf368,	// (0x0006217b) bg_popup_sub_pane_cp50

0x9267,	// (0x0005c07a) listscroll_midp_info_pane_ParamLimits

0x9267,	// (0x0005c07a) listscroll_midp_info_pane

0x9247,	// (0x0005c05a) listscroll_form_midp_pane_ParamLimits

0x9247,	// (0x0005c05a) listscroll_form_midp_pane

0x9253,	// (0x0005c066) scroll_bar_cp050

0x9227,	// (0x0005c03a) list_midp_pane

0xb172,	// (0x0005df85) signal_pane_g2_cp

0x9161,	// (0x0005bf74) listscroll_midp_info_pane_t1_ParamLimits

0x9161,	// (0x0005bf74) listscroll_midp_info_pane_t1

0x9179,	// (0x0005bf8c) listscroll_midp_info_pane_t2_ParamLimits

0x9179,	// (0x0005bf8c) listscroll_midp_info_pane_t2

0x91b7,	// (0x0005bfca) listscroll_midp_info_pane_t3_ParamLimits

0x91b7,	// (0x0005bfca) listscroll_midp_info_pane_t3

0x91f1,	// (0x0005c004) listscroll_midp_info_pane_t4_ParamLimits

0x91f1,	// (0x0005c004) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x0006261d) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x0006261d) listscroll_midp_info_pane_t

0xf3bd,	// (0x000621d0) scroll_pane_cp21

0x90fb,	// (0x0005bf0e) form_midp_field_choice_group_pane

0x9104,	// (0x0005bf17) form_midp_field_text_pane

0x9147,	// (0x0005bf5a) form_midp_field_time_pane

0x914f,	// (0x0005bf62) form_midp_gauge_slider_pane

0x9158,	// (0x0005bf6b) form_midp_gauge_wait_pane

0xebe3,	// (0x000619f6) form_midp_image_pane

0x6b97,	// (0x000599aa) list_single_midp_pane_ParamLimits

0x6b97,	// (0x000599aa) list_single_midp_pane

0x90bf,	// (0x0005bed2) form_midp_field_text_pane_t1

0x8eb1,	// (0x0005bcc4) input_focus_pane_cp050

0x90ea,	// (0x0005befd) list_midp_form_text_pane

0x908e,	// (0x0005bea1) form_midp_field_choice_group_pane_t1

0x909c,	// (0x0005beaf) input_focus_pane_cp051

0x90b0,	// (0x0005bec3) list_midp_choice_pane

0xebe3,	// (0x000619f6) status_idle_pane

0x9072,	// (0x0005be85) form_midp_field_time_pane_t1

0xebd9,	// (0x000619ec) wait_anim_pane_g2_copy1

0x9080,	// (0x0005be93) form_midp_field_time_pane_t2

0x0001,

0x86d7,	// (0x0005b4ea) aid_navinavi_width_2_pane

0xf805,	// (0x00062618) form_midp_field_time_pane_t

0xebe3,	// (0x000619f6) input_focus_pane_cp052

0xebe3,	// (0x000619f6) bg_input_focus_pane_cp040

0x9032,	// (0x0005be45) form_midp_gauge_slider_pane_t1

0x9040,	// (0x0005be53) form_midp_gauge_slider_pane_t2

0x904e,	// (0x0005be61) form_midp_gauge_slider_pane_t3

0x905c,	// (0x0005be6f) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x0006260f) form_midp_gauge_slider_pane_t

0x906a,	// (0x0005be7d) form_midp_slider_pane

0xec31,	// (0x00061a44) bg_input_focus_pane_cp041_ParamLimits

0xec31,	// (0x00061a44) bg_input_focus_pane_cp041

0x8fff,	// (0x0005be12) form_midp_gauge_wait_pane_t1_ParamLimits

0x8fff,	// (0x0005be12) form_midp_gauge_wait_pane_t1

0x9011,	// (0x0005be24) form_midp_gauge_wait_pane_t2_ParamLimits

0x9011,	// (0x0005be24) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x0006260a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x0006260a) form_midp_gauge_wait_pane_t

0x9023,	// (0x0005be36) form_midp_wait_pane_ParamLimits

0x9023,	// (0x0005be36) form_midp_wait_pane

0x8fc7,	// (0x0005bdda) form_midp_image_pane_g1

0x8fd0,	// (0x0005bde3) form_midp_image_pane_t1

0x8fdf,	// (0x0005bdf2) form_midp_image_pane_t2

0x8fee,	// (0x0005be01) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00062603) form_midp_image_pane_t

0x8fbe,	// (0x0005bdd1) list_single_midp_pane_g1

0x3bd6,	// (0x000569e9) list_single_midp_pane_t1

0x8fa4,	// (0x0005bdb7) list_midp_form_item_pane_ParamLimits

0x8fa4,	// (0x0005bdb7) list_midp_form_item_pane

0x867f,	// (0x0005b492) list_midp_form_item_pane_t1

0x868e,	// (0x0005b4a1) midp_ticker_pane_g1

0x869a,	// (0x0005b4ad) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0006254b) midp_ticker_pane_g

0x86a6,	// (0x0005b4b9) midp_ticker_pane_t1

0xa5cb,	// (0x0005d3de) midp_editing_number_pane_t1

0xa5a9,	// (0x0005d3bc) midp_editing_number_pane

0xa5b8,	// (0x0005d3cb) midp_ticker_pane

0xa34e,	// (0x0005d161) ai_message_heading_pane

0xebe3,	// (0x000619f6) bg_popup_window_pane_cp14

0xa356,	// (0x0005d169) listscroll_ai_message_pane

0xa2d4,	// (0x0005d0e7) ai_message_heading_pane_g1_ParamLimits

0xa2d4,	// (0x0005d0e7) ai_message_heading_pane_g1

0xa2e0,	// (0x0005d0f3) ai_message_heading_pane_g2_ParamLimits

0xa2e0,	// (0x0005d0f3) ai_message_heading_pane_g2

0xa2ee,	// (0x0005d101) ai_message_heading_pane_g3_ParamLimits

0xa2ee,	// (0x0005d101) ai_message_heading_pane_g3

0xa2fa,	// (0x0005d10d) ai_message_heading_pane_g4_ParamLimits

0xa2fa,	// (0x0005d10d) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00062744) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00062744) ai_message_heading_pane_g

0xa306,	// (0x0005d119) ai_message_heading_pane_t1_ParamLimits

0xa306,	// (0x0005d119) ai_message_heading_pane_t1

0xa320,	// (0x0005d133) ai_message_heading_pane_t2_ParamLimits

0xa320,	// (0x0005d133) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x0006274d) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x0006274d) ai_message_heading_pane_t

0xa334,	// (0x0005d147) bg_popup_heading_pane_cp1_ParamLimits

0xa334,	// (0x0005d147) bg_popup_heading_pane_cp1

0xa2c2,	// (0x0005d0d5) list_ai_message_pane_ParamLimits

0xa2c2,	// (0x0005d0d5) list_ai_message_pane

0xf3bd,	// (0x000621d0) scroll_pane_cp10

0xa25e,	// (0x0005d071) list_ai_message_pane_g1

0xa266,	// (0x0005d079) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00062721) list_ai_message_pane_g

0xa26e,	// (0x0005d081) list_ai_message_pane_t1_ParamLimits

0xa26e,	// (0x0005d081) list_ai_message_pane_t1

0xa283,	// (0x0005d096) list_ai_message_pane_t2_ParamLimits

0xa283,	// (0x0005d096) list_ai_message_pane_t2

0xa298,	// (0x0005d0ab) list_ai_message_pane_t3_ParamLimits

0xa298,	// (0x0005d0ab) list_ai_message_pane_t3

0xa2ad,	// (0x0005d0c0) list_ai_message_pane_t4_ParamLimits

0xa2ad,	// (0x0005d0c0) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00062726) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00062726) list_ai_message_pane_t

0xa247,	// (0x0005d05a) cell_ai_soft_ind_pane_ParamLimits

0xa247,	// (0x0005d05a) cell_ai_soft_ind_pane

0x86b8,	// (0x0005b4cb) cell_ai_soft_ind_pane_g1_ParamLimits

0x86b8,	// (0x0005b4cb) cell_ai_soft_ind_pane_g1

0xebe3,	// (0x000619f6) grid_highlight_cp1

0x86c5,	// (0x0005b4d8) text_secondary_cp56_ParamLimits

0x86c5,	// (0x0005b4d8) text_secondary_cp56

0xa21c,	// (0x0005d02f) example_general_pane_ParamLimits

0xa21c,	// (0x0005d02f) example_general_pane

0xa228,	// (0x0005d03b) example_parent_pane_g1_ParamLimits

0xa228,	// (0x0005d03b) example_parent_pane_g1

0xa234,	// (0x0005d047) example_parent_pane_t1_ParamLimits

0xa234,	// (0x0005d047) example_parent_pane_t1

0x67e6,	// (0x000595f9) popup_preview_text_window_ParamLimits

0x67e6,	// (0x000595f9) popup_preview_text_window

0x84df,	// (0x0005b2f2) list_single_pane_cp2_g4

0xee40,	// (0x00061c53) bg_popup_preview_window_pane_ParamLimits

0xee40,	// (0x00061c53) bg_popup_preview_window_pane

0x9f65,	// (0x0005cd78) popup_preview_text_window_t1_ParamLimits

0x9f65,	// (0x0005cd78) popup_preview_text_window_t1

0x9f83,	// (0x0005cd96) popup_preview_text_window_t2_ParamLimits

0x9f83,	// (0x0005cd96) popup_preview_text_window_t2

0x9fcc,	// (0x0005cddf) popup_preview_text_window_t3_ParamLimits

0x9fcc,	// (0x0005cddf) popup_preview_text_window_t3

0xa011,	// (0x0005ce24) popup_preview_text_window_t4_ParamLimits

0xa011,	// (0x0005ce24) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x000626f5) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x000626f5) popup_preview_text_window_t

0xa08f,	// (0x0005cea2) scroll_pane_cp11

0x8e25,	// (0x0005bc38) bg_popup_preview_window_pane_g1

0x9f19,	// (0x0005cd2c) bg_popup_preview_window_pane_g2

0x9f23,	// (0x0005cd36) bg_popup_preview_window_pane_g3

0x9f2d,	// (0x0005cd40) bg_popup_preview_window_pane_g4

0x9f37,	// (0x0005cd4a) bg_popup_preview_window_pane_g5

0x9f41,	// (0x0005cd54) bg_popup_preview_window_pane_g6

0x9f49,	// (0x0005cd5c) bg_popup_preview_window_pane_g7

0x9f51,	// (0x0005cd64) bg_popup_preview_window_pane_g8

0x4cd7,	// (0x00057aea) aid_popup_width_pane

0x67c2,	// (0x000595d5) popup_midp_note_alarm_window_ParamLimits

0x67c2,	// (0x000595d5) popup_midp_note_alarm_window

0xf275,	// (0x00062088) data_form_pane_ParamLimits

0x59e8,	// (0x000587fb) form_field_data_pane_g1

0x59f2,	// (0x00058805) form_field_data_pane_t1_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_ParamLimits

0x3a07,	// (0x0005681a) data_form_wide_pane_ParamLimits

0x3a18,	// (0x0005682b) form_field_data_wide_pane_g1

0x3a24,	// (0x00056837) form_field_data_wide_pane_t1_ParamLimits

0xeffc,	// (0x00061e0f) input_focus_pane_cp6_ParamLimits

0x5b25,	// (0x00058938) input_popup_find_pane_g1_ParamLimits

0x5b25,	// (0x00058938) input_popup_find_pane_g1

0x5c8b,	// (0x00058a9e) aid_navi_side_left_pane

0x5ca0,	// (0x00058ab3) aid_navi_side_right_pane

0x9740,	// (0x0005c553) bg_popup_window_pane_cp30_ParamLimits

0x9740,	// (0x0005c553) bg_popup_window_pane_cp30

0x97ba,	// (0x0005c5cd) popup_midp_note_alarm_window_g1_ParamLimits

0x97ba,	// (0x0005c5cd) popup_midp_note_alarm_window_g1

0x97ea,	// (0x0005c5fd) popup_midp_note_alarm_window_t1_ParamLimits

0x97ea,	// (0x0005c5fd) popup_midp_note_alarm_window_t1

0x988b,	// (0x0005c69e) popup_midp_note_alarm_window_t2_ParamLimits

0x988b,	// (0x0005c69e) popup_midp_note_alarm_window_t2

0x9939,	// (0x0005c74c) popup_midp_note_alarm_window_t3_ParamLimits

0x9939,	// (0x0005c74c) popup_midp_note_alarm_window_t3

0x996b,	// (0x0005c77e) popup_midp_note_alarm_window_t4_ParamLimits

0x996b,	// (0x0005c77e) popup_midp_note_alarm_window_t4

0x9991,	// (0x0005c7a4) popup_midp_note_alarm_window_t5_ParamLimits

0x9991,	// (0x0005c7a4) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00062692) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00062692) popup_midp_note_alarm_window_t

0x9a3d,	// (0x0005c850) wait_bar_pane_cp1_ParamLimits

0x9a3d,	// (0x0005c850) wait_bar_pane_cp1

0xebe3,	// (0x000619f6) wait_anim_pane_copy1

0xebe3,	// (0x000619f6) wait_border_pane_copy1

0x9425,	// (0x0005c238) wait_border_pane_g1_copy1

0x3a3e,	// (0x00056851) form_field_popup_pane_g1

0x5a0c,	// (0x0005881f) form_field_popup_pane_t1_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_cp7_ParamLimits

0xf2af,	// (0x000620c2) list_form_pane_ParamLimits

0x3a46,	// (0x00056859) form_field_popup_wide_pane_g1

0x3a4e,	// (0x00056861) form_field_popup_wide_pane_t1_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_cp8_ParamLimits

0xf2bb,	// (0x000620ce) list_form_wide_pane_ParamLimits

0xa759,	// (0x0005d56c) aid_size_cell_graphic_pane

0x5a8b,	// (0x0005889e) data_form_pane_t1_ParamLimits

0x6e26,	// (0x00059c39) data_form_wide_pane_t1_ParamLimits

0x89c6,	// (0x0005b7d9) bg_status_flat_pane

0x5106,	// (0x00057f19) title_pane_t1_ParamLimits

0xebf9,	// (0x00061a0c) title_pane_t2_ParamLimits

0xec1f,	// (0x00061a32) title_pane_t3_ParamLimits

0xf532,	// (0x00062345) title_pane_t_ParamLimits

0x5e13,	// (0x00058c26) level_1_signal_ParamLimits

0x5e20,	// (0x00058c33) level_2_signal_ParamLimits

0x5e2d,	// (0x00058c40) level_3_signal_ParamLimits

0x5e3a,	// (0x00058c4d) level_4_signal_ParamLimits

0x5e47,	// (0x00058c5a) level_5_signal_ParamLimits

0x5e54,	// (0x00058c67) level_6_signal_ParamLimits

0x5e61,	// (0x00058c74) level_7_signal_ParamLimits

0x5e13,	// (0x00058c26) level_1_battery_ParamLimits

0x5e20,	// (0x00058c33) level_2_battery_ParamLimits

0x5e2d,	// (0x00058c40) level_3_battery_ParamLimits

0x5e3a,	// (0x00058c4d) level_4_battery_ParamLimits

0x5e47,	// (0x00058c5a) level_5_battery_ParamLimits

0x5e54,	// (0x00058c67) level_6_battery_ParamLimits

0x5e61,	// (0x00058c74) level_7_battery_ParamLimits

0x9645,	// (0x0005c458) bg_status_flat_pane_g1

0x964d,	// (0x0005c460) bg_status_flat_pane_g2

0x9655,	// (0x0005c468) bg_status_flat_pane_g3

0x965d,	// (0x0005c470) bg_status_flat_pane_g4

0x9665,	// (0x0005c478) bg_status_flat_pane_g5

0x966d,	// (0x0005c480) bg_status_flat_pane_g6

0x9675,	// (0x0005c488) bg_status_flat_pane_g7

0x5176,	// (0x00057f89) tabs_3_active_pane_t1_ParamLimits

0x5176,	// (0x00057f89) tabs_3_passive_pane_t1_ParamLimits

0x5190,	// (0x00057fa3) tabs_4_active_pane_t1_ParamLimits

0x5190,	// (0x00057fa3) tabs_4_1_passive_pane_t1_ParamLimits

0x5b3b,	// (0x0005894e) tabs_2_active_pane_t1_ParamLimits

0x5b3b,	// (0x0005894e) tabs_2_passive_pane_t1_ParamLimits

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp4_ParamLimits

0x5b5b,	// (0x0005896e) tabs_2_long_active_pane_t1_ParamLimits

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp4_ParamLimits

0x6ade,	// (0x000598f1) list_single_midp_graphic_pane_t1_ParamLimits

0x5b4d,	// (0x00058960) bg_active_tab_pane_cp5_ParamLimits

0x5b7a,	// (0x0005898d) tabs_3_long_active_pane_t1_ParamLimits

0x5b6e,	// (0x00058981) bg_passive_tab_pane_cp5_ParamLimits

0x6ade,	// (0x000598f1) list_single_midp_graphic_pane_t1

0x89c6,	// (0x0005b7d9) bg_status_flat_pane_ParamLimits

0x8a91,	// (0x0005b8a4) indicator_pane_cp2_ParamLimits

0x8a91,	// (0x0005b8a4) indicator_pane_cp2

0x8bd4,	// (0x0005b9e7) navi_pane_srt_ParamLimits

0x8bd4,	// (0x0005b9e7) navi_pane_srt

0x8bf8,	// (0x0005ba0b) popup_clock_digital_analogue_window_cp1

0xec75,	// (0x00061a88) indicator_pane_t1

0x85b0,	// (0x0005b3c3) copy_highlight_pane

0x85b0,	// (0x0005b3c3) cursor_graphics_pane

0x85b0,	// (0x0005b3c3) graphic_within_text_pane

0x85b0,	// (0x0005b3c3) link_highlight_pane

0xa052,	// (0x0005ce65) popup_preview_text_window_t5_ParamLimits

0xa052,	// (0x0005ce65) popup_preview_text_window_t5

0x86e1,	// (0x0005b4f4) cursor_digital_pane

0x86e1,	// (0x0005b4f4) cursor_primary_pane

0x86f2,	// (0x0005b505) cursor_primary_small_pane

0x86fa,	// (0x0005b50d) cursor_secondary_pane

0x8702,	// (0x0005b515) cursor_title_pane

0x86e1,	// (0x0005b4f4) link_highlight_digital_pane

0x86e9,	// (0x0005b4fc) link_highlight_primary_pane

0x86f2,	// (0x0005b505) link_highlight_primary_small_pane

0x86fa,	// (0x0005b50d) link_highlight_secondary_pane

0x8702,	// (0x0005b515) link_highlight_title_pane

0x86e1,	// (0x0005b4f4) copy_highlight_digital_pane

0x86e1,	// (0x0005b4f4) copy_highlight_primary_pane

0x86f2,	// (0x0005b505) copy_highlight_primary_small_pane

0x86fa,	// (0x0005b50d) copy_highlight_secondary_pane

0x8702,	// (0x0005b515) copy_highlight_title_pane

0x86fa,	// (0x0005b50d) graphic_text_digital_pane

0x96e3,	// (0x0005c4f6) graphic_text_primary_pane

0x96ec,	// (0x0005c4ff) graphic_text_primary_small_pane

0x86f2,	// (0x0005b505) graphic_text_secondary_pane

0x86e1,	// (0x0005b4f4) graphic_text_title_pane

0x870a,	// (0x0005b51d) cursor_primary_pane_g1

0x96d5,	// (0x0005c4e8) cursor_text_primary_t1

0x96bd,	// (0x0005c4d0) cursor_primary_small_pane_g1

0x96c7,	// (0x0005c4da) cursor_text_primary_small_t1

0x96a5,	// (0x0005c4b8) cursor_primary_small_pane_g1_copy1

0x96af,	// (0x0005c4c2) cursor_text_primary_small_t1_copy1

0x968d,	// (0x0005c4a0) cursor_text_title_t1

0x969b,	// (0x0005c4ae) cursor_title_pane_g1

0x870a,	// (0x0005b51d) cursor_digital_pane_g1

0x8714,	// (0x0005b527) cursor_text_digital_t1

0x8722,	// (0x0005b535) link_highlight_primary_pane_g1

0x9636,	// (0x0005c449) link_highlight_primary_pane_t1

0x8722,	// (0x0005b535) link_highlight_primary_small_pane_g1

0x872a,	// (0x0005b53d) link_highlight_primary_small_pane_t1

0x8739,	// (0x0005b54c) link_highlight_secondary_pane_g1

0x8741,	// (0x0005b554) link_highlight_secondary_pane_t1

0x95aa,	// (0x0005c3bd) link_highlight_title_pane_g1

0x95b2,	// (0x0005c3c5) link_highlight_title_pane_t1

0x9593,	// (0x0005c3a6) link_highlight_digital_pane_g1

0x959b,	// (0x0005c3ae) link_highlight_digital_pane_t1

0x945b,	// (0x0005c26e) copy_highlight_primary_pane_g1

0x9472,	// (0x0005c285) copy_highlight_primary_pane_t1

0x945b,	// (0x0005c26e) copy_highlight_primary_small_pane_g1

0x9463,	// (0x0005c276) copy_highlight_primary_small_pane_t1

0x8750,	// (0x0005b563) copy_highlight_secondary_pane_g1

0x8758,	// (0x0005b56b) copy_highlight_secondary_pane_t1

0x9444,	// (0x0005c257) copy_highlight_title_pane_g1

0x944c,	// (0x0005c25f) copy_highlight_title_pane_t1

0x945b,	// (0x0005c26e) copy_highlight_digital_pane_g1

0xa92b,	// (0x0005d73e) copy_highlight_digital_pane_t1

0xa87f,	// (0x0005d692) graphic_text_primary_pane_g1

0xa90f,	// (0x0005d722) graphic_text_primary_pane_t1

0xa91d,	// (0x0005d730) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x000627c1) graphic_text_primary_pane_t

0xa8eb,	// (0x0005d6fe) graphic_text_primary_small_pane_g1

0xa8f3,	// (0x0005d706) graphic_text_primary_small_pane_t1

0xa901,	// (0x0005d714) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x000627bc) graphic_text_primary_small_pane_t

0xa8c7,	// (0x0005d6da) graphic_text_secondary_pane_g1

0xa8cf,	// (0x0005d6e2) graphic_text_secondary_pane_t1

0xa8dd,	// (0x0005d6f0) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x000627b7) graphic_text_secondary_pane_t

0xa8a3,	// (0x0005d6b6) graphic_text_title_pane_g1

0xa8ab,	// (0x0005d6be) graphic_text_title_pane_t1

0xa8b9,	// (0x0005d6cc) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x000627b2) graphic_text_title_pane_t

0xa87f,	// (0x0005d692) graphic_text_digital_pane_g1

0xa887,	// (0x0005d69a) graphic_text_digital_pane_t1

0xa895,	// (0x0005d6a8) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x000627ad) graphic_text_digital_pane_t

0xec31,	// (0x00061a44) navi_icon_pane_srt_ParamLimits

0xec31,	// (0x00061a44) navi_icon_pane_srt

0xebe3,	// (0x000619f6) navi_midp_pane_srt

0xebe3,	// (0x000619f6) navi_navi_pane_srt

0xec31,	// (0x00061a44) navi_text_pane_srt_ParamLimits

0xec31,	// (0x00061a44) navi_text_pane_srt

0xa84a,	// (0x0005d65d) navi_navi_icon_text_pane_srt

0xa852,	// (0x0005d665) navi_navi_pane_srt_g1_ParamLimits

0xa852,	// (0x0005d665) navi_navi_pane_srt_g1

0xa864,	// (0x0005d677) navi_navi_pane_srt_g2_ParamLimits

0xa864,	// (0x0005d677) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x000627a8) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x000627a8) navi_navi_pane_srt_g

0xa876,	// (0x0005d689) navi_navi_tabs_pane_srt

0xa84a,	// (0x0005d65d) navi_navi_text_pane_srt

0xa84a,	// (0x0005d65d) navi_navi_volume_pane_srt

0xa83b,	// (0x0005d64e) navi_navi_text_pane_srt_t1

0x6f35,	// (0x00059d48) navi_navi_volume_pane_srt_g1

0x6f3d,	// (0x00059d50) volume_small_pane_srt_ParamLimits

0x6f3d,	// (0x00059d50) volume_small_pane_srt

0x6213,	// (0x00059026) volume_small_pane_srt_g1_ParamLimits

0x6213,	// (0x00059026) volume_small_pane_srt_g1

0x6223,	// (0x00059036) volume_small_pane_srt_g2_ParamLimits

0x6223,	// (0x00059036) volume_small_pane_srt_g2

0x6234,	// (0x00059047) volume_small_pane_srt_g3_ParamLimits

0x6234,	// (0x00059047) volume_small_pane_srt_g3

0x6245,	// (0x00059058) volume_small_pane_srt_g4_ParamLimits

0x6245,	// (0x00059058) volume_small_pane_srt_g4

0x6256,	// (0x00059069) volume_small_pane_srt_g5_ParamLimits

0x6256,	// (0x00059069) volume_small_pane_srt_g5

0x6267,	// (0x0005907a) volume_small_pane_srt_g6_ParamLimits

0x6267,	// (0x0005907a) volume_small_pane_srt_g6

0x6278,	// (0x0005908b) volume_small_pane_srt_g7_ParamLimits

0x6278,	// (0x0005908b) volume_small_pane_srt_g7

0x6289,	// (0x0005909c) volume_small_pane_srt_g8_ParamLimits

0x6289,	// (0x0005909c) volume_small_pane_srt_g8

0x629a,	// (0x000590ad) volume_small_pane_srt_g9_ParamLimits

0x629a,	// (0x000590ad) volume_small_pane_srt_g9

0x62ab,	// (0x000590be) volume_small_pane_srt_g10_ParamLimits

0x62ab,	// (0x000590be) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00062550) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00062550) volume_small_pane_srt_g

0xeef5,	// (0x00061d08) query_popup_data_pane_cp2

0xa821,	// (0x0005d634) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa821,	// (0x0005d634) navi_navi_icon_text_pane_srt_t1

0x96e3,	// (0x0005c4f6) navi_tabs_2_long_pane_srt

0x96e3,	// (0x0005c4f6) navi_tabs_2_pane_srt

0x96e3,	// (0x0005c4f6) navi_tabs_3_long_pane_srt

0x96e3,	// (0x0005c4f6) navi_tabs_3_pane_srt

0x96e3,	// (0x0005c4f6) navi_tabs_4_pane_srt

0x6f15,	// (0x00059d28) tabs_2_active_pane_srt_ParamLimits

0x6f15,	// (0x00059d28) tabs_2_active_pane_srt

0x6f25,	// (0x00059d38) tabs_2_passive_pane_srt_ParamLimits

0x6f25,	// (0x00059d38) tabs_2_passive_pane_srt

0x88d7,	// (0x0005b6ea) bg_passive_tab_pane_cp1_srt_ParamLimits

0x88d7,	// (0x0005b6ea) bg_passive_tab_pane_cp1_srt

0xa7ed,	// (0x0005d600) bg_passive_tab_pane_g1_cp1_srt

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp1_srt

0xa7f6,	// (0x0005d609) bg_passive_tab_pane_g3_cp1_srt

0xec31,	// (0x00061a44) bg_active_tab_pane_cp1_srt_ParamLimits

0xec31,	// (0x00061a44) bg_active_tab_pane_cp1_srt

0xa7ff,	// (0x0005d612) tabs_2_active_pane_srt_g1

0xa807,	// (0x0005d61a) tabs_2_active_pane_srt_t1_ParamLimits

0xa807,	// (0x0005d61a) tabs_2_active_pane_srt_t1

0xa7ed,	// (0x0005d600) bg_active_tab_pane_g1_cp1_srt

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp1_srt

0xa7f6,	// (0x0005d609) bg_active_tab_pane_g3_cp1_srt

0x6ee2,	// (0x00059cf5) tabs_3_active_pane_srt_ParamLimits

0x6ee2,	// (0x00059cf5) tabs_3_active_pane_srt

0x6ef3,	// (0x00059d06) tabs_3_passive_pane_cp_srt_ParamLimits

0x6ef3,	// (0x00059d06) tabs_3_passive_pane_cp_srt

0x6f04,	// (0x00059d17) tabs_3_passive_pane_srt_ParamLimits

0x6f04,	// (0x00059d17) tabs_3_passive_pane_srt

0x88d7,	// (0x0005b6ea) bg_passive_tab_pane_cp2_srt_ParamLimits

0x88d7,	// (0x0005b6ea) bg_passive_tab_pane_cp2_srt

0x8767,	// (0x0005b57a) bg_passive_tab_pane_g1_cp2_srt

0x6086,	// (0x00058e99) bg_passive_tab_pane_g2_cp2_srt

0x8770,	// (0x0005b583) bg_passive_tab_pane_g3_cp2_srt

0xec31,	// (0x00061a44) bg_active_tab_pane_cp2_srt_ParamLimits

0xec31,	// (0x00061a44) bg_active_tab_pane_cp2_srt

0xa7d3,	// (0x0005d5e6) tabs_3_active_pane_srt_g1

0xa7db,	// (0x0005d5ee) tabs_3_active_pane_srt_t1_ParamLimits

0xa7db,	// (0x0005d5ee) tabs_3_active_pane_srt_t1

0x8767,	// (0x0005b57a) bg_active_tab_pane_g1_cp2_srt

0x6086,	// (0x00058e99) bg_active_tab_pane_g2_cp2_srt

0x8770,	// (0x0005b583) bg_active_tab_pane_g3_cp2_srt

0x6e9a,	// (0x00059cad) tabs_4_active_pane_srt_ParamLimits

0x6e9a,	// (0x00059cad) tabs_4_active_pane_srt

0x6eac,	// (0x00059cbf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6eac,	// (0x00059cbf) tabs_4_passive_pane_cp2_srt

0x63fd,	// (0x00059210) aid_size_cell_toolbar

0x5b6e,	// (0x00058981) main_idle_act_pane_ParamLimits

0x65e8,	// (0x000593fb) popup_large_graphic_colour_window_ParamLimits

0x698f,	// (0x000597a2) popup_toolbar_window_ParamLimits

0x698f,	// (0x000597a2) popup_toolbar_window

0xa5f1,	// (0x0005d404) list_single_graphic_2heading_pane_ParamLimits

0xa5f1,	// (0x0005d404) list_single_graphic_2heading_pane

0x12a9,	// (0x000540bc) aid_size_cell_apps_grid_lsc_pane

0x12bb,	// (0x000540ce) aid_size_cell_apps_grid_prt_pane

0x88d7,	// (0x0005b6ea) bg_wml_button_pane_cp1_ParamLimits

0x88d7,	// (0x0005b6ea) bg_wml_button_pane_cp1

0x90bf,	// (0x0005bed2) form_midp_field_text_pane_t1_ParamLimits

0x8eb1,	// (0x0005bcc4) input_focus_pane_cp050_ParamLimits

0x90ea,	// (0x0005befd) list_midp_form_text_pane_ParamLimits

0x909c,	// (0x0005beaf) input_focus_pane_cp051_ParamLimits

0x90b0,	// (0x0005bec3) list_midp_choice_pane_ParamLimits

0x8f6a,	// (0x0005bd7d) list_single_2graphic_pane_cp3_ParamLimits

0x8f6a,	// (0x0005bd7d) list_single_2graphic_pane_cp3

0x8f80,	// (0x0005bd93) list_single_midp_graphic_pane_ParamLimits

0x8f80,	// (0x0005bd93) list_single_midp_graphic_pane

0x4c43,	// (0x00057a56) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c43,	// (0x00057a56) list_single_graphic_2heading_pane_g1

0x4c4f,	// (0x00057a62) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c4f,	// (0x00057a62) list_single_graphic_2heading_pane_g4

0x4c5b,	// (0x00057a6e) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c5b,	// (0x00057a6e) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x000625a3) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x000625a3) list_single_graphic_2heading_pane_g

0x4c67,	// (0x00057a7a) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c67,	// (0x00057a7a) list_single_graphic_2heading_pane_t1

0x4c7b,	// (0x00057a8e) list_single_graphic_2heading_pane_t2_ParamLimits

0x4c7b,	// (0x00057a8e) list_single_graphic_2heading_pane_t2

0x4c97,	// (0x00057aaa) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c97,	// (0x00057aaa) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x000625aa) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x000625aa) list_single_graphic_2heading_pane_t

0x8d4b,	// (0x0005bb5e) bg_popup_sub_pane_cp2

0x8d75,	// (0x0005bb88) grid_toobar_pane

0x6a4e,	// (0x00059861) cell_toolbar_pane_ParamLimits

0x6a4e,	// (0x00059861) cell_toolbar_pane

0x8dc9,	// (0x0005bbdc) cell_toolbar_pane_g1_ParamLimits

0x8dc9,	// (0x0005bbdc) cell_toolbar_pane_g1

0x8ddd,	// (0x0005bbf0) cell_toolbar_pane_g2_ParamLimits

0x8ddd,	// (0x0005bbf0) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x000625b8) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x000625b8) cell_toolbar_pane_g

0x8dff,	// (0x0005bc12) grid_highlight_pane_cp2_ParamLimits

0x8dff,	// (0x0005bc12) grid_highlight_pane_cp2

0x8e19,	// (0x0005bc2c) toolbar_button_pane

0x8e25,	// (0x0005bc38) toolbar_button_pane_g1

0x8e2d,	// (0x0005bc40) toolbar_button_pane_g2

0x8e35,	// (0x0005bc48) toolbar_button_pane_g3

0x8e3d,	// (0x0005bc50) toolbar_button_pane_g4

0x8e45,	// (0x0005bc58) toolbar_button_pane_g5

0x8e4d,	// (0x0005bc60) toolbar_button_pane_g6

0x8e55,	// (0x0005bc68) toolbar_button_pane_g7

0x8e5d,	// (0x0005bc70) toolbar_button_pane_g8

0x8e65,	// (0x0005bc78) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x000625bd) toolbar_button_pane_g

0x6a86,	// (0x00059899) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6a86,	// (0x00059899) list_single_2graphic_pane_g1_cp3

0x6a92,	// (0x000598a5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6a92,	// (0x000598a5) list_single_2graphic_pane_g2_cp3

0x6aa3,	// (0x000598b6) list_single_2graphic_pane_g3_cp3

0x6aab,	// (0x000598be) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6aab,	// (0x000598be) list_single_2graphic_pane_g4_cp3

0x6ab7,	// (0x000598ca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6ab7,	// (0x000598ca) list_single_2graphic_pane_t1_cp3

0x6ad2,	// (0x000598e5) list_single_midp_graphic_pane_g2_ParamLimits

0x6ad2,	// (0x000598e5) list_single_midp_graphic_pane_g2

0x4c33,	// (0x00057a46) aid_zoom_text_primary

0x4c3b,	// (0x00057a4e) aid_zoom_text_secondary

0x8821,	// (0x0005b634) status_small_pane_g7_ParamLimits

0x8821,	// (0x0005b634) status_small_pane_g7

0x8844,	// (0x0005b657) status_small_pane_t1_ParamLimits

0x50e1,	// (0x00057ef4) title_pane_g2

0x0003,

0xf529,	// (0x0006233c) title_pane_g

0x534a,	// (0x0005815d) aid_size_cell_colour_1_pane_ParamLimits

0x534a,	// (0x0005815d) aid_size_cell_colour_1_pane

0x535e,	// (0x00058171) aid_size_cell_colour_2_pane_ParamLimits

0x535e,	// (0x00058171) aid_size_cell_colour_2_pane

0x5372,	// (0x00058185) aid_size_cell_colour_3_pane_ParamLimits

0x5372,	// (0x00058185) aid_size_cell_colour_3_pane

0x5386,	// (0x00058199) aid_size_cell_colour_4_pane_ParamLimits

0x5386,	// (0x00058199) aid_size_cell_colour_4_pane

0x5bc8,	// (0x000589db) title_pane_stacon_g1_ParamLimits

0x5bc8,	// (0x000589db) title_pane_stacon_g1

0x94c9,	// (0x0005c2dc) popup_note_wait_window_g3_ParamLimits

0x94c9,	// (0x0005c2dc) popup_note_wait_window_g3

0x9540,	// (0x0005c353) popup_note_wait_window_t5_ParamLimits

0x9540,	// (0x0005c353) popup_note_wait_window_t5

0xebe3,	// (0x000619f6) main_feb_china_hwr_fs_writing_pane

0x64ad,	// (0x000592c0) popup_feb_china_hwr_fs_window_ParamLimits

0x64ad,	// (0x000592c0) popup_feb_china_hwr_fs_window

0x6af4,	// (0x00059907) aid_size_cell_hwr_fs_ParamLimits

0x6af4,	// (0x00059907) aid_size_cell_hwr_fs

0x8eb1,	// (0x0005bcc4) bg_popup_sub_pane_cp3_ParamLimits

0x8eb1,	// (0x0005bcc4) bg_popup_sub_pane_cp3

0x6b09,	// (0x0005991c) grid_hwr_fs_pane_ParamLimits

0x6b09,	// (0x0005991c) grid_hwr_fs_pane

0x6b21,	// (0x00059934) linegrid_hwr_fs_pane_ParamLimits

0x6b21,	// (0x00059934) linegrid_hwr_fs_pane

0x6b31,	// (0x00059944) cell_hwr_fs_pane_ParamLimits

0x6b31,	// (0x00059944) cell_hwr_fs_pane

0x8ebd,	// (0x0005bcd0) linegrid_hwr_fs_pane_g1_ParamLimits

0x8ebd,	// (0x0005bcd0) linegrid_hwr_fs_pane_g1

0x8ec9,	// (0x0005bcdc) linegrid_hwr_fs_pane_g2_ParamLimits

0x8ec9,	// (0x0005bcdc) linegrid_hwr_fs_pane_g2

0x8edb,	// (0x0005bcee) linegrid_hwr_fs_pane_g3_ParamLimits

0x8edb,	// (0x0005bcee) linegrid_hwr_fs_pane_g3

0x6b55,	// (0x00059968) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b55,	// (0x00059968) linegrid_hwr_fs_pane_g4

0x6b73,	// (0x00059986) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b73,	// (0x00059986) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x000625e8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x000625e8) linegrid_hwr_fs_pane_g

0x8ee7,	// (0x0005bcfa) cell_hwr_fs_pane_g1_ParamLimits

0x8ee7,	// (0x0005bcfa) cell_hwr_fs_pane_g1

0x8c86,	// (0x0005ba99) cell_hwr_fs_pane_g2_ParamLimits

0x8c86,	// (0x0005ba99) cell_hwr_fs_pane_g2

0x8efd,	// (0x0005bd10) cell_hwr_fs_pane_g3_ParamLimits

0x8efd,	// (0x0005bd10) cell_hwr_fs_pane_g3

0x8f0a,	// (0x0005bd1d) cell_hwr_fs_pane_g4_ParamLimits

0x8f0a,	// (0x0005bd1d) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x000625f3) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x000625f3) cell_hwr_fs_pane_g

0x6b89,	// (0x0005999c) cell_hwr_fs_pane_t1

0xebe3,	// (0x000619f6) grid_highlight_pane_cp6

0xebe3,	// (0x000619f6) main_idle_act2_pane

0xf3a4,	// (0x000621b7) aid_inside_area_popup_secondary

0x9b79,	// (0x0005c98c) aid_inside_area_window_primary_ParamLimits

0x9b79,	// (0x0005c98c) aid_inside_area_window_primary

0xa93a,	// (0x0005d74d) ai2_news_ticker_pane

0xa942,	// (0x0005d755) aid_size_cell_ai1_link_ParamLimits

0xa942,	// (0x0005d755) aid_size_cell_ai1_link

0xa95c,	// (0x0005d76f) popup_ai2_data_window_ParamLimits

0xa95c,	// (0x0005d76f) popup_ai2_data_window

0xa97a,	// (0x0005d78d) popup_ai2_link_window_ParamLimits

0xa97a,	// (0x0005d78d) popup_ai2_link_window

0x8eb1,	// (0x0005bcc4) bg_popup_sub_pane_cp4_ParamLimits

0x8eb1,	// (0x0005bcc4) bg_popup_sub_pane_cp4

0xa990,	// (0x0005d7a3) grid_ai2_link_pane_ParamLimits

0xa990,	// (0x0005d7a3) grid_ai2_link_pane

0xa9a7,	// (0x0005d7ba) popup_ai2_link_window_g1_ParamLimits

0xa9a7,	// (0x0005d7ba) popup_ai2_link_window_g1

0xa9b3,	// (0x0005d7c6) popup_ai2_link_window_g2_ParamLimits

0xa9b3,	// (0x0005d7c6) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x000627c6) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x000627c6) popup_ai2_link_window_g

0xa9c4,	// (0x0005d7d7) ai2_mp_button_pane

0xa9cc,	// (0x0005d7df) ai2_mp_volume_pane

0x909c,	// (0x0005beaf) bg_popup_sub_pane_cp5_ParamLimits

0x909c,	// (0x0005beaf) bg_popup_sub_pane_cp5

0xa9d4,	// (0x0005d7e7) heading_ai2_gene_pane_ParamLimits

0xa9d4,	// (0x0005d7e7) heading_ai2_gene_pane

0xa9e0,	// (0x0005d7f3) list_ai2_gene_pane_ParamLimits

0xa9e0,	// (0x0005d7f3) list_ai2_gene_pane

0xaa28,	// (0x0005d83b) cell_ai2_link_pane_ParamLimits

0xaa28,	// (0x0005d83b) cell_ai2_link_pane

0xaa3e,	// (0x0005d851) cell_ai2_link_pane_g1

0xebe3,	// (0x000619f6) grid_highlight_pane_cp7

0x6f52,	// (0x00059d65) ai2_mp_volume_pane_g1

0xab11,	// (0x0005d924) ai2_mp_volume_pane_g2

0xaa86,	// (0x0005d899) list_ai2_gene_pane_t1

0xab19,	// (0x0005d92c) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x000627df) ai2_mp_volume_pane_g

0x6f5a,	// (0x00059d6d) volume_small_pane_cp3

0xab21,	// (0x0005d934) aid_size_cell_ai2_button

0xab29,	// (0x0005d93c) grid_ai2_button_pane

0xab32,	// (0x0005d945) cell_ai2_button_pane_ParamLimits

0xab32,	// (0x0005d945) cell_ai2_button_pane

0xebd9,	// (0x000619ec) cell_ai2_button_pane_g1

0xebe3,	// (0x000619f6) grid_highlight_pane_cp8

0xaad1,	// (0x0005d8e4) ai2_gene_pane_t1_ParamLimits

0xaad1,	// (0x0005d8e4) ai2_gene_pane_t1

0x63f3,	// (0x00059206) aid_height_parent_landscape

0xa3f7,	// (0x0005d20a) aid_height_set_list

0xa408,	// (0x0005d21b) aid_size_parent

0xa759,	// (0x0005d56c) aid_size_cell_graphic_pane_ParamLimits

0xa9f0,	// (0x0005d803) popup_ai2_data_window_g1_ParamLimits

0xa9f0,	// (0x0005d803) popup_ai2_data_window_g1

0xa9fc,	// (0x0005d80f) ai2_news_ticker_pane_g1

0xaa04,	// (0x0005d817) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x000627cb) ai2_news_ticker_pane_g

0xaa0c,	// (0x0005d81f) ai2_news_ticker_pane_t1

0xaa1a,	// (0x0005d82d) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x000627d0) ai2_news_ticker_pane_t

0xaa47,	// (0x0005d85a) heading_ai2_gene_pane_g1

0xaa4f,	// (0x0005d862) heading_ai2_gene_pane_t1_ParamLimits

0xaa4f,	// (0x0005d862) heading_ai2_gene_pane_t1

0xaa64,	// (0x0005d877) list_highlight_pane_cp6

0xaa6c,	// (0x0005d87f) ai2_gene_pane_ParamLimits

0xaa6c,	// (0x0005d87f) ai2_gene_pane

0xaa94,	// (0x0005d8a7) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x000627d5) list_ai2_gene_pane_t

0xaaa2,	// (0x0005d8b5) list_highlight_pane_cp8_ParamLimits

0xaaa2,	// (0x0005d8b5) list_highlight_pane_cp8

0xaab3,	// (0x0005d8c6) ai2_gene_pane_g1_ParamLimits

0xaab3,	// (0x0005d8c6) ai2_gene_pane_g1

0xaac5,	// (0x0005d8d8) ai2_gene_pane_g2_ParamLimits

0xaac5,	// (0x0005d8d8) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x000627da) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x000627da) ai2_gene_pane_g

0xf217,	// (0x0006202a) scroll_pane_cp12

0x63b2,	// (0x000591c5) control_pane_t3_ParamLimits

0x63b2,	// (0x000591c5) control_pane_t3

0x8835,	// (0x0005b648) status_small_pane_g8_ParamLimits

0x8835,	// (0x0005b648) status_small_pane_g8

0x65ab,	// (0x000593be) popup_find_window_ParamLimits

0x67d8,	// (0x000595eb) popup_note_image_window_ParamLimits

0x3980,	// (0x00056793) list_double2_graphic_pane_vc_g1_ParamLimits

0x3980,	// (0x00056793) list_double2_graphic_pane_vc_g1

0x8db1,	// (0x0005bbc4) list_double2_graphic_pane_vc_g2_ParamLimits

0x8db1,	// (0x0005bbc4) list_double2_graphic_pane_vc_g2

0x8dbd,	// (0x0005bbd0) list_double2_graphic_pane_vc_g3_ParamLimits

0x8dbd,	// (0x0005bbd0) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x000625b1) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x000625b1) list_double2_graphic_pane_vc_g

0x3b28,	// (0x0005693b) list_double2_graphic_pane_vc_t1_ParamLimits

0x3b28,	// (0x0005693b) list_double2_graphic_pane_vc_t1

0x8db1,	// (0x0005bbc4) list_single_heading_pane_vc_g1_ParamLimits

0x8db1,	// (0x0005bbc4) list_single_heading_pane_vc_g1

0x8dbd,	// (0x0005bbd0) list_single_heading_pane_vc_g2_ParamLimits

0x8dbd,	// (0x0005bbd0) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625d2) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625d2) list_single_heading_pane_vc_g

0x3b3e,	// (0x00056951) list_single_heading_pane_vc_t1_ParamLimits

0x3b3e,	// (0x00056951) list_single_heading_pane_vc_t1

0x3b54,	// (0x00056967) list_single_heading_pane_vc_t2_ParamLimits

0x3b54,	// (0x00056967) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x000625d7) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x000625d7) list_single_heading_pane_vc_t

0x8e6d,	// (0x0005bc80) list_setting_number_pane_vc_g1_ParamLimits

0x8e6d,	// (0x0005bc80) list_setting_number_pane_vc_g1

0x8e79,	// (0x0005bc8c) list_setting_number_pane_vc_g2_ParamLimits

0x8e79,	// (0x0005bc8c) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x000625dc) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x000625dc) list_setting_number_pane_vc_g

0x3b66,	// (0x00056979) list_setting_number_pane_vc_t1_ParamLimits

0x3b66,	// (0x00056979) list_setting_number_pane_vc_t1

0x3b7a,	// (0x0005698d) list_setting_number_pane_vc_t2_ParamLimits

0x3b7a,	// (0x0005698d) list_setting_number_pane_vc_t2

0x3b96,	// (0x000569a9) list_setting_number_pane_vc_t3_ParamLimits

0x3b96,	// (0x000569a9) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x000625e1) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x000625e1) list_setting_number_pane_vc_t

0x3bc4,	// (0x000569d7) set_value_pane_vc_ParamLimits

0x3bc4,	// (0x000569d7) set_value_pane_vc

0xa5f1,	// (0x0005d404) list_double2_graphic_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double2_graphic_pane_vc

0xa5f1,	// (0x0005d404) list_double2_large_graphic_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double2_large_graphic_pane_vc

0xa5f1,	// (0x0005d404) list_double2_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double2_pane_vc

0xa5f1,	// (0x0005d404) list_double_graphic_heading_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double_graphic_heading_pane_vc

0xa5f1,	// (0x0005d404) list_double_graphic_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double_graphic_pane_vc

0xa5f1,	// (0x0005d404) list_double_heading_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double_heading_pane_vc

0xa605,	// (0x0005d418) list_double_large_graphic_pane_vc_ParamLimits

0xa605,	// (0x0005d418) list_double_large_graphic_pane_vc

0xa5f1,	// (0x0005d404) list_double_number_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double_number_pane_vc

0xa5f1,	// (0x0005d404) list_double_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double_pane_vc

0xa5f1,	// (0x0005d404) list_double_time_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_double_time_pane_vc

0xa5f1,	// (0x0005d404) list_setting_number_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_setting_number_pane_vc

0xa5f1,	// (0x0005d404) list_setting_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_setting_pane_vc

0xa5f1,	// (0x0005d404) list_single_graphic_heading_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_single_graphic_heading_pane_vc

0xa5f1,	// (0x0005d404) list_single_heading_pane_vc_ParamLimits

0xa5f1,	// (0x0005d404) list_single_heading_pane_vc

0x9c17,	// (0x0005ca2a) list_single_number_heading_pane_vc_ParamLimits

0x9c17,	// (0x0005ca2a) list_single_number_heading_pane_vc

0x3980,	// (0x00056793) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3980,	// (0x00056793) list_double_graphic_heading_pane_vc_g1

0x8521,	// (0x0005b334) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8521,	// (0x0005b334) list_double_graphic_heading_pane_vc_g2

0x9c72,	// (0x0005ca85) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9c72,	// (0x0005ca85) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x000627e6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x000627e6) list_double_graphic_heading_pane_vc_g

0x3c0d,	// (0x00056a20) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3c0d,	// (0x00056a20) list_double_graphic_heading_pane_vc_t1

0x3c23,	// (0x00056a36) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c23,	// (0x00056a36) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x000627ed) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x000627ed) list_double_graphic_heading_pane_vc_t

0x8e6d,	// (0x0005bc80) list_setting_pane_vc_g1_ParamLimits

0x8e6d,	// (0x0005bc80) list_setting_pane_vc_g1

0x8e79,	// (0x0005bc8c) list_setting_pane_vc_g2_ParamLimits

0x8e79,	// (0x0005bc8c) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x000625dc) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x000625dc) list_setting_pane_vc_g

0x3c41,	// (0x00056a54) list_setting_pane_vc_t1_ParamLimits

0x3c41,	// (0x00056a54) list_setting_pane_vc_t1

0x3c5d,	// (0x00056a70) list_setting_pane_vc_t2_ParamLimits

0x3c5d,	// (0x00056a70) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x0006281b) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x0006281b) list_setting_pane_vc_t

0x3bc4,	// (0x000569d7) set_value_pane_cp_vc_ParamLimits

0x3bc4,	// (0x000569d7) set_value_pane_cp_vc

0x8db1,	// (0x0005bbc4) list_single_number_heading_pane_vc_g1_ParamLimits

0x8db1,	// (0x0005bbc4) list_single_number_heading_pane_vc_g1

0x8dbd,	// (0x0005bbd0) list_single_number_heading_pane_vc_g2_ParamLimits

0x8dbd,	// (0x0005bbd0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625d2) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625d2) list_single_number_heading_pane_vc_g

0x3958,	// (0x0005676b) list_single_number_heading_pane_vc_t1_ParamLimits

0x3958,	// (0x0005676b) list_single_number_heading_pane_vc_t1

0x3c79,	// (0x00056a8c) list_single_number_heading_pane_vc_t2_ParamLimits

0x3c79,	// (0x00056a8c) list_single_number_heading_pane_vc_t2

0x396e,	// (0x00056781) list_single_number_heading_pane_vc_t3_ParamLimits

0x396e,	// (0x00056781) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x00062820) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x00062820) list_single_number_heading_pane_vc_t

0x3980,	// (0x00056793) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3980,	// (0x00056793) list_single_graphic_heading_pane_vc_g1

0x8db1,	// (0x0005bbc4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8db1,	// (0x0005bbc4) list_single_graphic_heading_pane_vc_g4

0x8dbd,	// (0x0005bbd0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8dbd,	// (0x0005bbd0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x000625b1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x000625b1) list_single_graphic_heading_pane_vc_g

0x3958,	// (0x0005676b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3958,	// (0x0005676b) list_single_graphic_heading_pane_vc_t1

0x3c8f,	// (0x00056aa2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3c8f,	// (0x00056aa2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x00062827) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x00062827) list_single_graphic_heading_pane_vc_t

0x8db1,	// (0x0005bbc4) list_double2_pane_vc_g1_ParamLimits

0x8db1,	// (0x0005bbc4) list_double2_pane_vc_g1

0x8dbd,	// (0x0005bbd0) list_double2_pane_vc_g2_ParamLimits

0x8dbd,	// (0x0005bbd0) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625d2) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625d2) list_double2_pane_vc_g

0x3bf7,	// (0x00056a0a) list_double2_pane_vc_t1_ParamLimits

0x3bf7,	// (0x00056a0a) list_double2_pane_vc_t1

0x9c7e,	// (0x0005ca91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9c7e,	// (0x0005ca91) list_double2_large_graphic_pane_vc_g1

0x8db1,	// (0x0005bbc4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8db1,	// (0x0005bbc4) list_double2_large_graphic_pane_vc_g2

0x8dbd,	// (0x0005bbd0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8dbd,	// (0x0005bbd0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x0006282c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x0006282c) list_double2_large_graphic_pane_vc_g

0x398c,	// (0x0005679f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x398c,	// (0x0005679f) list_double2_large_graphic_pane_vc_t1

0x9c8a,	// (0x0005ca9d) list_double_time_pane_vc_g1_ParamLimits

0x9c8a,	// (0x0005ca9d) list_double_time_pane_vc_g1

0x9c96,	// (0x0005caa9) list_double_time_pane_vc_g2_ParamLimits

0x9c96,	// (0x0005caa9) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x00062833) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x00062833) list_double_time_pane_vc_g

0x3ca1,	// (0x00056ab4) list_double_time_pane_vc_t1_ParamLimits

0x3ca1,	// (0x00056ab4) list_double_time_pane_vc_t1

0x3ccb,	// (0x00056ade) list_double_time_pane_vc_t2_ParamLimits

0x3ccb,	// (0x00056ade) list_double_time_pane_vc_t2

0x3d14,	// (0x00056b27) list_double_time_pane_vc_t3_ParamLimits

0x3d14,	// (0x00056b27) list_double_time_pane_vc_t3

0x3d26,	// (0x00056b39) list_double_time_pane_vc_t4_ParamLimits

0x3d26,	// (0x00056b39) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x00062838) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x00062838) list_double_time_pane_vc_t

0x8db1,	// (0x0005bbc4) list_double_pane_vc_g1_ParamLimits

0x8db1,	// (0x0005bbc4) list_double_pane_vc_g1

0x8dbd,	// (0x0005bbd0) list_double_pane_vc_g2_ParamLimits

0x8dbd,	// (0x0005bbd0) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625d2) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625d2) list_double_pane_vc_g

0x3d3a,	// (0x00056b4d) list_double_pane_vc_t1_ParamLimits

0x3d3a,	// (0x00056b4d) list_double_pane_vc_t1

0x3d4e,	// (0x00056b61) list_double_pane_vc_t2_ParamLimits

0x3d4e,	// (0x00056b61) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x00062841) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x00062841) list_double_pane_vc_t

0x8db1,	// (0x0005bbc4) list_double_number_pane_vc_g1_ParamLimits

0x8db1,	// (0x0005bbc4) list_double_number_pane_vc_g1

0x8dbd,	// (0x0005bbd0) list_double_number_pane_vc_g2_ParamLimits

0x8dbd,	// (0x0005bbd0) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625d2) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625d2) list_double_number_pane_vc_g

0x3be5,	// (0x000569f8) list_double_number_pane_vc_t1_ParamLimits

0x3be5,	// (0x000569f8) list_double_number_pane_vc_t1

0x3d64,	// (0x00056b77) list_double_number_pane_vc_t2_ParamLimits

0x3d64,	// (0x00056b77) list_double_number_pane_vc_t2

0x3d4e,	// (0x00056b61) list_double_number_pane_vc_t3_ParamLimits

0x3d4e,	// (0x00056b61) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x00062846) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x00062846) list_double_number_pane_vc_t

0x9ca2,	// (0x0005cab5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9ca2,	// (0x0005cab5) list_double_large_graphic_pane_vc_g1

0x9cc4,	// (0x0005cad7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9cc4,	// (0x0005cad7) list_double_large_graphic_pane_vc_g2

0x9cd8,	// (0x0005caeb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9cd8,	// (0x0005caeb) list_double_large_graphic_pane_vc_g3

0x3d78,	// (0x00056b8b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3d78,	// (0x00056b8b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x0006284d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0006284d) list_double_large_graphic_pane_vc_g

0x3d84,	// (0x00056b97) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3d84,	// (0x00056b97) list_double_large_graphic_pane_vc_t1

0x3da0,	// (0x00056bb3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3da0,	// (0x00056bb3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00062856) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00062856) list_double_large_graphic_pane_vc_t

0x8521,	// (0x0005b334) list_double_heading_pane_vc_g1_ParamLimits

0x8521,	// (0x0005b334) list_double_heading_pane_vc_g1

0x9c72,	// (0x0005ca85) list_double_heading_pane_vc_g2_ParamLimits

0x9c72,	// (0x0005ca85) list_double_heading_pane_vc_g2

0x0001,

0xfa48,	// (0x0006285b) list_double_heading_pane_vc_g_ParamLimits

0xfa48,	// (0x0006285b) list_double_heading_pane_vc_g

0x3dc0,	// (0x00056bd3) list_double_heading_pane_vc_t1_ParamLimits

0x3dc0,	// (0x00056bd3) list_double_heading_pane_vc_t1

0x3dd2,	// (0x00056be5) list_double_heading_pane_vc_t2_ParamLimits

0x3dd2,	// (0x00056be5) list_double_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x00062860) list_double_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x00062860) list_double_heading_pane_vc_t

0x3dea,	// (0x00056bfd) list_double_graphic_pane_vc_g1_ParamLimits

0x3dea,	// (0x00056bfd) list_double_graphic_pane_vc_g1

0x9ce7,	// (0x0005cafa) list_double_graphic_pane_vc_g2_ParamLimits

0x9ce7,	// (0x0005cafa) list_double_graphic_pane_vc_g2

0x8db1,	// (0x0005bbc4) list_double_graphic_pane_vc_g3_ParamLimits

0x8db1,	// (0x0005bbc4) list_double_graphic_pane_vc_g3

0x0003,

0xfa52,	// (0x00062865) list_double_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x00062865) list_double_graphic_pane_vc_g

0x3df6,	// (0x00056c09) list_double_graphic_pane_vc_t1_ParamLimits

0x3df6,	// (0x00056c09) list_double_graphic_pane_vc_t1

0x3e20,	// (0x00056c33) list_double_graphic_pane_vc_t2_ParamLimits

0x3e20,	// (0x00056c33) list_double_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0006286e) list_double_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0006286e) list_double_graphic_pane_vc_t

0x4ce3,	// (0x00057af6) aid_size_cell_fastswap

0x4ceb,	// (0x00057afe) aid_size_cell_touch_ParamLimits

0x4ceb,	// (0x00057afe) aid_size_cell_touch

0x4f56,	// (0x00057d69) popup_fast_swap_wide_window_ParamLimits

0x4f56,	// (0x00057d69) popup_fast_swap_wide_window

0x5074,	// (0x00057e87) touch_pane_ParamLimits

0x5074,	// (0x00057e87) touch_pane

0xf26d,	// (0x00062080) button_value_adjust_pane_cp2

0x39b0,	// (0x000567c3) button_value_adjust_pane_cp4

0x39b8,	// (0x000567cb) form_field_data_pane_cp2

0x59bc,	// (0x000587cf) form_field_data_wide_pane_cp2

0x3008,	// (0x00055e1b) bg_scroll_pane_ParamLimits

0x5dea,	// (0x00058bfd) scroll_handle_pane_ParamLimits

0x5dfe,	// (0x00058c11) scroll_sc2_down_pane_ParamLimits

0x5dfe,	// (0x00058c11) scroll_sc2_down_pane

0x3039,	// (0x00055e4c) scroll_sc2_up_pane_ParamLimits

0x3039,	// (0x00055e4c) scroll_sc2_up_pane

0xb25a,	// (0x0005e06d) grid_wheel_folder_pane_g1_ParamLimits

0xb25a,	// (0x0005e06d) grid_wheel_folder_pane_g1

0x61ab,	// (0x00058fbe) clock_nsta_pane_cp2_ParamLimits

0x61ab,	// (0x00058fbe) clock_nsta_pane_cp2

0x85b8,	// (0x0005b3cb) listscroll_midp_pane_ParamLimits

0x85c4,	// (0x0005b3d7) midp_canvas_pane

0x88af,	// (0x0005b6c2) nsta_clock_indic_pane

0x88e3,	// (0x0005b6f6) listscroll_form_pane_vc

0x88eb,	// (0x0005b6fe) listscroll_set_pane_vc_ParamLimits

0x88eb,	// (0x0005b6fe) listscroll_set_pane_vc

0x89e2,	// (0x0005b7f5) clock_nsta_pane

0x8a5f,	// (0x0005b872) indicator_nsta_pane

0x8d4b,	// (0x0005bb5e) bg_popup_sub_pane_cp2_ParamLimits

0x8d5f,	// (0x0005bb72) find_pane_cp2_ParamLimits

0x8d5f,	// (0x0005bb72) find_pane_cp2

0x8d75,	// (0x0005bb88) grid_toobar_pane_ParamLimits

0x8e85,	// (0x0005bc98) list_form_gen_pane_vc_ParamLimits

0x8e85,	// (0x0005bc98) list_form_gen_pane_vc

0x8e9b,	// (0x0005bcae) scroll_pane_cp8_vc_ParamLimits

0x8e9b,	// (0x0005bcae) scroll_pane_cp8_vc

0x8f17,	// (0x0005bd2a) data_form_wide_pane_vc_ParamLimits

0x8f17,	// (0x0005bd2a) data_form_wide_pane_vc

0x8f23,	// (0x0005bd36) form_field_data_wide_pane_vc_g1

0x8f2b,	// (0x0005bd3e) form_field_data_wide_pane_vc_t1_ParamLimits

0x8f2b,	// (0x0005bd3e) form_field_data_wide_pane_vc_t1

0xf281,	// (0x00062094) input_focus_pane_cp6_vc_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_cp6_vc

0x9227,	// (0x0005c03a) list_midp_pane_ParamLimits

0x9233,	// (0x0005c046) scroll_pane_cp16_ParamLimits

0x9233,	// (0x0005c046) scroll_pane_cp16

0x929d,	// (0x0005c0b0) button_value_adjust_pane_ParamLimits

0x929d,	// (0x0005c0b0) button_value_adjust_pane

0xa41a,	// (0x0005d22d) button_value_adjust_pane_cp6_ParamLimits

0xa41a,	// (0x0005d22d) button_value_adjust_pane_cp6

0xa562,	// (0x0005d375) settings_code_pane_cp_ParamLimits

0xa562,	// (0x0005d375) settings_code_pane_cp

0xebd9,	// (0x000619ec) cell_touch_pane_g1

0xebd9,	// (0x000619ec) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000624f6) cell_touch_pane_g

0xab44,	// (0x0005d957) cell_touch_pane_cp_ParamLimits

0xab44,	// (0x0005d957) cell_touch_pane_cp

0xab54,	// (0x0005d967) cell_touch_pane_ParamLimits

0xab54,	// (0x0005d967) cell_touch_pane

0xebd9,	// (0x000619ec) scroll_sc2_down_pane_g1

0xebd9,	// (0x000619ec) scroll_sc2_up_pane_g1

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp4_vc

0xab65,	// (0x0005d978) list_set_graphic_pane_vc_g1_ParamLimits

0xab65,	// (0x0005d978) list_set_graphic_pane_vc_g1

0xab71,	// (0x0005d984) list_set_graphic_pane_vc_g2_ParamLimits

0xab71,	// (0x0005d984) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x000627f2) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x000627f2) list_set_graphic_pane_vc_g

0xab7d,	// (0x0005d990) text_primary_small_cp13_vc_ParamLimits

0xab7d,	// (0x0005d990) text_primary_small_cp13_vc

0xab95,	// (0x0005d9a8) list_set_graphic_pane_vc_ParamLimits

0xab95,	// (0x0005d9a8) list_set_graphic_pane_vc

0xebe3,	// (0x000619f6) input_focus_pane_cp2_vc

0xebd9,	// (0x000619ec) setting_code_pane_vc_g1

0xec48,	// (0x00061a5b) setting_code_pane_vc_t1

0xaba8,	// (0x0005d9bb) set_text_pane_vc_t1_ParamLimits

0xaba8,	// (0x0005d9bb) set_text_pane_vc_t1

0xebe3,	// (0x000619f6) input_focus_pane_cp1_vc

0xabc9,	// (0x0005d9dc) list_set_text_pane_vc

0xebd9,	// (0x000619ec) setting_text_pane_vc_g1

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp2_vc

0xec3f,	// (0x00061a52) setting_slider_graphic_pane_vc_g1

0xabd3,	// (0x0005d9e6) setting_slider_graphic_pane_vc_t1

0xabe5,	// (0x0005d9f8) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x000627f7) setting_slider_graphic_pane_vc_t

0xabf7,	// (0x0005da0a) slider_set_pane_cp_vc

0xac01,	// (0x0005da14) slider_set_pane_vc_g1

0xac0a,	// (0x0005da1d) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x000627fc) slider_set_pane_vc_g

0xf2d9,	// (0x000620ec) set_opt_bg_pane_g1_copy1

0xf2e1,	// (0x000620f4) set_opt_bg_pane_g2_copy1

0xac36,	// (0x0005da49) set_opt_bg_pane_g3_copy1

0xf2f1,	// (0x00062104) set_opt_bg_pane_g4_copy1

0xf2f9,	// (0x0006210c) set_opt_bg_pane_g5_copy1

0xf301,	// (0x00062114) set_opt_bg_pane_g6_copy1

0xac40,	// (0x0005da53) set_opt_bg_pane_g7_copy1

0xac4a,	// (0x0005da5d) set_opt_bg_pane_g8_copy1

0xac54,	// (0x0005da67) set_opt_bg_pane_g9_copy1

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp_vc

0xac5e,	// (0x0005da71) setting_slider_pane_vc_t1

0xac6d,	// (0x0005da80) setting_slider_pane_vc_t2

0xac7f,	// (0x0005da92) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x0006280b) setting_slider_pane_vc_t

0xac91,	// (0x0005daa4) slider_set_pane_vc

0x6bb6,	// (0x000599c9) volume_set_pane_vc_g1

0x6bbf,	// (0x000599d2) volume_set_pane_vc_g2

0x6bc8,	// (0x000599db) volume_set_pane_vc_g3

0x6bd1,	// (0x000599e4) volume_set_pane_vc_g4

0x6bda,	// (0x000599ed) volume_set_pane_vc_g5

0x6be3,	// (0x000599f6) volume_set_pane_vc_g6

0x6bec,	// (0x000599ff) volume_set_pane_vc_g7

0x6bf5,	// (0x00059a08) volume_set_pane_vc_g8

0x6bfe,	// (0x00059a11) volume_set_pane_vc_g9

0x6c07,	// (0x00059a1a) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x000626a9) volume_set_pane_vc_g

0xac9b,	// (0x0005daae) volume_set_pane_vc

0xaca5,	// (0x0005dab8) button_value_adjust_pane_cp1_vc

0xacaf,	// (0x0005dac2) list_highlight_pane_cp2_vc

0xacb8,	// (0x0005dacb) list_set_pane_vc_ParamLimits

0xacb8,	// (0x0005dacb) list_set_pane_vc

0xad26,	// (0x0005db39) main_pane_set_vc_t1_ParamLimits

0xad26,	// (0x0005db39) main_pane_set_vc_t1

0xad3b,	// (0x0005db4e) main_pane_set_vc_t2_ParamLimits

0xad3b,	// (0x0005db4e) main_pane_set_vc_t2

0xad4d,	// (0x0005db60) main_pane_set_vc_t3_ParamLimits

0xad4d,	// (0x0005db60) main_pane_set_vc_t3

0xad61,	// (0x0005db74) main_pane_set_vc_t4_ParamLimits

0xad61,	// (0x0005db74) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x00062812) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x00062812) main_pane_set_vc_t

0xad75,	// (0x0005db88) setting_code_pane_vc_ParamLimits

0xad75,	// (0x0005db88) setting_code_pane_vc

0xad86,	// (0x0005db99) setting_slider_graphic_pane_vc

0xad86,	// (0x0005db99) setting_slider_pane_vc

0xad86,	// (0x0005db99) setting_text_pane_vc

0xad86,	// (0x0005db99) setting_volume_pane_vc

0xad90,	// (0x0005dba3) scroll_pane_cp121_vc

0xf25b,	// (0x0006206e) set_content_pane_vc

0xad98,	// (0x0005dbab) button_value_adjust_pane_g1

0xada1,	// (0x0005dbb4) button_value_adjust_pane_g2

0x0001,

0xfa60,	// (0x00062873) button_value_adjust_pane_g

0xadaa,	// (0x0005dbbd) form_field_slider_wide_pane_vc_t1_ParamLimits

0xadaa,	// (0x0005dbbd) form_field_slider_wide_pane_vc_t1

0xadbc,	// (0x0005dbcf) form_field_slider_wide_pane_vc_t2_ParamLimits

0xadbc,	// (0x0005dbcf) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa65,	// (0x00062878) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x00062878) form_field_slider_wide_pane_vc_t

0xed64,	// (0x00061b77) input_focus_pane_cp10_vc_ParamLimits

0xed64,	// (0x00061b77) input_focus_pane_cp10_vc

0xade8,	// (0x0005dbfb) slider_cont_pane_cp1_vc_ParamLimits

0xade8,	// (0x0005dbfb) slider_cont_pane_cp1_vc

0xadfa,	// (0x0005dc0d) slider_form_pane_g1_cp2

0xac0a,	// (0x0005da1d) slider_form_pane_g2_cp2

0xae27,	// (0x0005dc3a) form_field_slider_pane_vc_t3

0xae35,	// (0x0005dc48) form_field_slider_pane_vc_t4

0xae43,	// (0x0005dc56) slider_form_pane_vc_ParamLimits

0xae43,	// (0x0005dc56) slider_form_pane_vc

0xae50,	// (0x0005dc63) form_field_slider_pane_vc_t1_ParamLimits

0xae50,	// (0x0005dc63) form_field_slider_pane_vc_t1

0xadbc,	// (0x0005dbcf) form_field_slider_pane_vc_t2_ParamLimits

0xadbc,	// (0x0005dbcf) form_field_slider_pane_vc_t2

0x0001,

0xfa77,	// (0x0006288a) form_field_slider_pane_vc_t_ParamLimits

0xfa77,	// (0x0006288a) form_field_slider_pane_vc_t

0xed64,	// (0x00061b77) input_focus_pane_cp9_vc_ParamLimits

0xed64,	// (0x00061b77) input_focus_pane_cp9_vc

0xae66,	// (0x0005dc79) slider_cont_pane_vc_ParamLimits

0xae66,	// (0x0005dc79) slider_cont_pane_vc

0xae7a,	// (0x0005dc8d) list_form_graphic_pane_cp_vc_ParamLimits

0xae7a,	// (0x0005dc8d) list_form_graphic_pane_cp_vc

0x8f23,	// (0x0005bd36) form_field_popup_wide_pane_vc_g1

0xae8f,	// (0x0005dca2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xae8f,	// (0x0005dca2) form_field_popup_wide_pane_vc_t1

0xf281,	// (0x00062094) input_focus_pane_cp8_vc_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_cp8_vc

0xaed4,	// (0x0005dce7) list_form_wide_pane_vc_ParamLimits

0xaed4,	// (0x0005dce7) list_form_wide_pane_vc

0xaee0,	// (0x0005dcf3) list_form_graphic_pane_vc_g1

0xaee8,	// (0x0005dcfb) list_form_graphic_pane_vc_t1_ParamLimits

0xaee8,	// (0x0005dcfb) list_form_graphic_pane_vc_t1

0xec31,	// (0x00061a44) list_highlight_pane_cp5_vc_ParamLimits

0xec31,	// (0x00061a44) list_highlight_pane_cp5_vc

0xaf04,	// (0x0005dd17) list_form_graphic_pane_vc_ParamLimits

0xaf04,	// (0x0005dd17) list_form_graphic_pane_vc

0x8f23,	// (0x0005bd36) form_field_popup_pane_vc_g1

0xaf1a,	// (0x0005dd2d) form_field_popup_pane_vc_t1_ParamLimits

0xaf1a,	// (0x0005dd2d) form_field_popup_pane_vc_t1

0xf281,	// (0x00062094) input_focus_pane_cp7_vc_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_cp7_vc

0xaf31,	// (0x0005dd44) list_form_pane_vc_ParamLimits

0xaf31,	// (0x0005dd44) list_form_pane_vc

0xaf3d,	// (0x0005dd50) data_form_pane_vc_t1_ParamLimits

0xaf3d,	// (0x0005dd50) data_form_pane_vc_t1

0xf2d9,	// (0x000620ec) input_focus_pane_vc_g1

0xf2e1,	// (0x000620f4) input_focus_pane_vc_g2

0xf2e9,	// (0x000620fc) input_focus_pane_vc_g3

0xf2f1,	// (0x00062104) input_focus_pane_vc_g4

0xf2f9,	// (0x0006210c) input_focus_pane_vc_g5

0xf301,	// (0x00062114) input_focus_pane_vc_g6

0xf309,	// (0x0006211c) input_focus_pane_vc_g7

0xf311,	// (0x00062124) input_focus_pane_vc_g8

0xf319,	// (0x0006212c) input_focus_pane_vc_g9

0xebd9,	// (0x000619ec) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0006247f) input_focus_pane_vc_g

0x8f17,	// (0x0005bd2a) data_form_pane_vc_ParamLimits

0x8f17,	// (0x0005bd2a) data_form_pane_vc

0x8f23,	// (0x0005bd36) form_field_data_pane_vc_g1

0xaf5a,	// (0x0005dd6d) form_field_data_pane_vc_t1_ParamLimits

0xaf5a,	// (0x0005dd6d) form_field_data_pane_vc_t1

0xf281,	// (0x00062094) input_focus_pane_vc_ParamLimits

0xf281,	// (0x00062094) input_focus_pane_vc

0xaf74,	// (0x0005dd87) button_value_adjust_pane_cp3_vc

0xaf7c,	// (0x0005dd8f) button_value_adjust_pane_cp5_vc

0xaf84,	// (0x0005dd97) form_field_data_pane_vc_ParamLimits

0xaf84,	// (0x0005dd97) form_field_data_pane_vc

0xaf9f,	// (0x0005ddb2) form_field_data_pane_vc_cp2

0xafa7,	// (0x0005ddba) form_field_data_wide_pane_vc_ParamLimits

0xafa7,	// (0x0005ddba) form_field_data_wide_pane_vc

0xafc1,	// (0x0005ddd4) form_field_data_wide_pane_vc_cp2

0xafc9,	// (0x0005dddc) form_field_popup_pane_vc_ParamLimits

0xafc9,	// (0x0005dddc) form_field_popup_pane_vc

0xafe4,	// (0x0005ddf7) form_field_popup_wide_pane_vc_ParamLimits

0xafe4,	// (0x0005ddf7) form_field_popup_wide_pane_vc

0xaffe,	// (0x0005de11) form_field_slider_pane_vc_ParamLimits

0xaffe,	// (0x0005de11) form_field_slider_pane_vc

0xb011,	// (0x0005de24) form_field_slider_wide_pane_vc_ParamLimits

0xb011,	// (0x0005de24) form_field_slider_wide_pane_vc

0xb024,	// (0x0005de37) grid_touch_1_pane_ParamLimits

0xb024,	// (0x0005de37) grid_touch_1_pane

0xb030,	// (0x0005de43) grid_touch_2_pane_ParamLimits

0xb030,	// (0x0005de43) grid_touch_2_pane

0x887a,	// (0x0005b68d) touch_pane_g1_ParamLimits

0x887a,	// (0x0005b68d) touch_pane_g1

0xb04a,	// (0x0005de5d) cell_app_pane_cp_wide_ParamLimits

0xb04a,	// (0x0005de5d) cell_app_pane_cp_wide

0xb05b,	// (0x0005de6e) grid_popup_fast_wide_pane_ParamLimits

0xb05b,	// (0x0005de6e) grid_popup_fast_wide_pane

0xb06f,	// (0x0005de82) scroll_pane_cp19_ParamLimits

0xb06f,	// (0x0005de82) scroll_pane_cp19

0xebe3,	// (0x000619f6) bg_popup_window_pane_cp20

0xb083,	// (0x0005de96) listscroll_popup_fast_wide_pane

0xb08b,	// (0x0005de9e) grid_indicator_nsta_pane

0xb09d,	// (0x0005deb0) clock_nsta_pane_g1

0xb0a6,	// (0x0005deb9) clock_nsta_pane_t1

0xb0c2,	// (0x0005ded5) cell_indicator_nsta_pane_ParamLimits

0xb0c2,	// (0x0005ded5) cell_indicator_nsta_pane

0xb0f7,	// (0x0005df0a) cell_indicator_nsta_pane_g1

0xb105,	// (0x0005df18) cell_indicator_nsta_pane_g2

0x0001,

0xfa88,	// (0x0006289b) cell_indicator_nsta_pane_g

0xb118,	// (0x0005df2b) clock_nsta_pane_cp

0xb121,	// (0x0005df34) indicator_nsta_pane_cp

0xb12b,	// (0x0005df3e) nsta_clock_indic_pane_g1

0xec6d,	// (0x00061a80) grid_indicator_pane

0x312b,	// (0x00055f3e) scroll_pane_cp29

0x60fa,	// (0x00058f0d) indicator_nsta_pane_cp2_ParamLimits

0x60fa,	// (0x00058f0d) indicator_nsta_pane_cp2

0xec31,	// (0x00061a44) main_apps_wheel_pane

0x9104,	// (0x0005bf17) form_midp_field_text_pane_ParamLimits

0x9253,	// (0x0005c066) scroll_bar_cp050_ParamLimits

0xb184,	// (0x0005df97) cell_indicator_pane_ParamLimits

0xb184,	// (0x0005df97) cell_indicator_pane

0xb19c,	// (0x0005dfaf) cell_indicator_pane_g1

0xb1a6,	// (0x0005dfb9) grid_wheel_folder_pane_ParamLimits

0xb1a6,	// (0x0005dfb9) grid_wheel_folder_pane

0xb1ba,	// (0x0005dfcd) list_wheel_apps_pane_ParamLimits

0xb1ba,	// (0x0005dfcd) list_wheel_apps_pane

0xb1cd,	// (0x0005dfe0) main_apps_wheel_pane_g1_ParamLimits

0xb1cd,	// (0x0005dfe0) main_apps_wheel_pane_g1

0xb1e9,	// (0x0005dffc) main_apps_wheel_pane_g2_ParamLimits

0xb1e9,	// (0x0005dffc) main_apps_wheel_pane_g2

0x0001,

0xfaa4,	// (0x000628b7) main_apps_wheel_pane_g_ParamLimits

0xfaa4,	// (0x000628b7) main_apps_wheel_pane_g

0xb205,	// (0x0005e018) main_apps_wheel_pane_t1_ParamLimits

0xb205,	// (0x0005e018) main_apps_wheel_pane_t1

0xb22e,	// (0x0005e041) list_wheel_apps_pane_g1

0xb236,	// (0x0005e049) list_wheel_apps_pane_g2

0xb23e,	// (0x0005e051) list_wheel_apps_pane_g3

0xb246,	// (0x0005e059) list_wheel_apps_pane_g4

0xb250,	// (0x0005e063) list_wheel_apps_pane_g5

0x0004,

0xfaa9,	// (0x000628bc) list_wheel_apps_pane_g

0x8421,	// (0x0005b234) navi_icon_text_pane

0x8913,	// (0x0005b726) aid_fill_nsta

0xb271,	// (0x0005e084) navi_icon_text_pane_g1

0xb27d,	// (0x0005e090) navi_icon_text_pane_t1

0x82c3,	// (0x0005b0d6) list_set_graphic_pane_t1_ParamLimits

0x82c3,	// (0x0005b0d6) list_set_graphic_pane_t1

0x99c0,	// (0x0005c7d3) popup_midp_note_alarm_window_t6_ParamLimits

0x99c0,	// (0x0005c7d3) popup_midp_note_alarm_window_t6

0x99d2,	// (0x0005c7e5) popup_midp_note_alarm_window_t7_ParamLimits

0x99d2,	// (0x0005c7e5) popup_midp_note_alarm_window_t7

0x99e4,	// (0x0005c7f7) popup_midp_note_alarm_window_t8_ParamLimits

0x99e4,	// (0x0005c7f7) popup_midp_note_alarm_window_t8

0x99f6,	// (0x0005c809) popup_midp_note_alarm_window_t9_ParamLimits

0x99f6,	// (0x0005c809) popup_midp_note_alarm_window_t9

0x9a08,	// (0x0005c81b) popup_midp_note_alarm_window_t10_ParamLimits

0x9a08,	// (0x0005c81b) popup_midp_note_alarm_window_t10

0x9a1a,	// (0x0005c82d) popup_midp_note_alarm_window_t11_ParamLimits

0x9a1a,	// (0x0005c82d) popup_midp_note_alarm_window_t11

0x9a2c,	// (0x0005c83f) scroll_pane_cp17_ParamLimits

0x9a2c,	// (0x0005c83f) scroll_pane_cp17

0x6bb6,	// (0x000599c9) volume_small_pane_cp_g1

0x6f63,	// (0x00059d76) volume_small_pane_cp_g2

0x6f6c,	// (0x00059d7f) volume_small_pane_cp_g3

0x6f75,	// (0x00059d88) volume_small_pane_cp_g4

0x6f7e,	// (0x00059d91) volume_small_pane_cp_g5

0x6f87,	// (0x00059d9a) volume_small_pane_cp_g6

0x6f90,	// (0x00059da3) volume_small_pane_cp_g7

0x6f99,	// (0x00059dac) volume_small_pane_cp_g8

0x6fa2,	// (0x00059db5) volume_small_pane_cp_g9

0x6fab,	// (0x00059dbe) volume_small_pane_cp_g10

0x868e,	// (0x0005b4a1) midp_ticker_pane_g1_ParamLimits

0x869a,	// (0x0005b4ad) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0006254b) midp_ticker_pane_g_ParamLimits

0x86a6,	// (0x0005b4b9) midp_ticker_pane_t1_ParamLimits

0x8929,	// (0x0005b73c) aid_fill_nsta_2

0x923f,	// (0x0005c052) list_form2_midp_pane

0xa5a9,	// (0x0005d3bc) midp_editing_number_pane_ParamLimits

0xa5b8,	// (0x0005d3cb) midp_ticker_pane_ParamLimits

0xb28f,	// (0x0005e0a2) form2_midp_field_pane

0xb2b3,	// (0x0005e0c6) scroll_pane_cp51

0xb2d3,	// (0x0005e0e6) form2_midp_button_pane_ParamLimits

0xb2d3,	// (0x0005e0e6) form2_midp_button_pane

0xb2e5,	// (0x0005e0f8) form2_midp_content_pane_ParamLimits

0xb2e5,	// (0x0005e0f8) form2_midp_content_pane

0xb2ff,	// (0x0005e112) form2_midp_field_choice_group_pane

0xb307,	// (0x0005e11a) form2_midp_field_pane_g1

0xb30f,	// (0x0005e122) form2_midp_field_pane_g2

0xb317,	// (0x0005e12a) form2_midp_field_pane_g3

0xb31f,	// (0x0005e132) form2_midp_field_pane_g4

0x0003,

0xface,	// (0x000628e1) form2_midp_field_pane_g

0xb327,	// (0x0005e13a) form2_midp_gauge_slider_pane

0xb32f,	// (0x0005e142) form2_midp_gauge_wait_pane

0xb337,	// (0x0005e14a) form2_midp_image_pane_ParamLimits

0xb337,	// (0x0005e14a) form2_midp_image_pane

0xb352,	// (0x0005e165) form2_midp_label_pane_ParamLimits

0xb352,	// (0x0005e165) form2_midp_label_pane

0xb371,	// (0x0005e184) form2_midp_label_pane_cp_ParamLimits

0xb371,	// (0x0005e184) form2_midp_label_pane_cp

0xb392,	// (0x0005e1a5) form2_midp_string_pane_ParamLimits

0xb392,	// (0x0005e1a5) form2_midp_string_pane

0x6fb4,	// (0x00059dc7) form2_midp_text_pane_ParamLimits

0x6fb4,	// (0x00059dc7) form2_midp_text_pane

0xb3a4,	// (0x0005e1b7) form2_midp_time_pane

0xb3b4,	// (0x0005e1c7) input_focus_pane_cp51_ParamLimits

0xb3b4,	// (0x0005e1c7) input_focus_pane_cp51

0xb3cc,	// (0x0005e1df) form2_midp_label_pane_t1_ParamLimits

0xb3cc,	// (0x0005e1df) form2_midp_label_pane_t1

0x6fd7,	// (0x00059dea) form2_mdip_text_pane_t1_ParamLimits

0x6fd7,	// (0x00059dea) form2_mdip_text_pane_t1

0x3e3e,	// (0x00056c51) form2_midp_time_pane_t1

0xb41a,	// (0x0005e22d) form2_midp_gauge_slider_pane_t1

0xb42c,	// (0x0005e23f) form2_midp_gauge_slider_pane_t2

0xb43e,	// (0x0005e251) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad7,	// (0x000628ea) form2_midp_gauge_slider_pane_t

0xb450,	// (0x0005e263) form2_midp_slider_pane

0xb45c,	// (0x0005e26f) form2_midp_gauge_wait_pane_t1

0xb46a,	// (0x0005e27d) form2_midp_wait_pane_ParamLimits

0xb46a,	// (0x0005e27d) form2_midp_wait_pane

0xb495,	// (0x0005e2a8) list_single_2graphic_pane_cp4_ParamLimits

0xb495,	// (0x0005e2a8) list_single_2graphic_pane_cp4

0x8f80,	// (0x0005bd93) list_single_midp_graphic_pane_cp_ParamLimits

0x8f80,	// (0x0005bd93) list_single_midp_graphic_pane_cp

0xebe3,	// (0x000619f6) list_highlight_pane_cp20

0xb4ae,	// (0x0005e2c1) list_single_2graphic_pane_g1_cp4

0xaa47,	// (0x0005d85a) list_single_2graphic_pane_g2_cp4

0xb4b6,	// (0x0005e2c9) list_single_2graphic_pane_t1_cp4

0xec31,	// (0x00061a44) list_highlight_pane_cp21

0xb4c5,	// (0x0005e2d8) list_single_midp_graphic_pane_g4_cp

0xb4d4,	// (0x0005e2e7) list_single_midp_graphic_pane_t1_cp

0xb4e9,	// (0x0005e2fc) form2_mdip_string_pane_t1_ParamLimits

0xb4e9,	// (0x0005e2fc) form2_mdip_string_pane_t1

0xebe3,	// (0x000619f6) bg_wml_button_pane_cp2

0xebd9,	// (0x000619ec) form2_midp_image_pane_g1

0x570b,	// (0x0005851e) list_double_large_graphic_pane_g5_ParamLimits

0x570b,	// (0x0005851e) list_double_large_graphic_pane_g5

0x85b8,	// (0x0005b3cb) midp_form_pane_ParamLimits

0xec31,	// (0x00061a44) main_apps_wheel_pane_ParamLimits

0x6800,	// (0x00059613) popup_preview_window_ParamLimits

0x6800,	// (0x00059613) popup_preview_window

0x69e7,	// (0x000597fa) popup_touch_info_window_ParamLimits

0x69e7,	// (0x000597fa) popup_touch_info_window

0x6a09,	// (0x0005981c) popup_touch_menu_window_ParamLimits

0x6a09,	// (0x0005981c) popup_touch_menu_window

0xebcf,	// (0x000619e2) bg_popup_sub_pane_cp6

0xb585,	// (0x0005e398) list_touch_menu_pane

0xb58d,	// (0x0005e3a0) list_single_touch_menu_pane_ParamLimits

0xb58d,	// (0x0005e3a0) list_single_touch_menu_pane

0xb5a5,	// (0x0005e3b8) list_single_touch_menu_pane_t1

0xec31,	// (0x00061a44) bg_popup_sub_pane_cp7_ParamLimits

0xec31,	// (0x00061a44) bg_popup_sub_pane_cp7

0xb5b3,	// (0x0005e3c6) heading_sub_pane

0xb5bb,	// (0x0005e3ce) list_touch_info_pane_ParamLimits

0xb5bb,	// (0x0005e3ce) list_touch_info_pane

0xb5ca,	// (0x0005e3dd) list_single_touch_info_pane_ParamLimits

0xb5ca,	// (0x0005e3dd) list_single_touch_info_pane

0xb5dc,	// (0x0005e3ef) list_single_touch_info_pane_t1

0xb5ea,	// (0x0005e3fd) list_single_touch_info_pane_t2

0x0001,

0xfae5,	// (0x000628f8) list_single_touch_info_pane_t

0x85b0,	// (0x0005b3c3) bg_popup_heading_pane_cp

0xb5f8,	// (0x0005e40b) heading_sub_pane_t1

0x8eb1,	// (0x0005bcc4) bg_popup_preview_window_pane_cp_ParamLimits

0x8eb1,	// (0x0005bcc4) bg_popup_preview_window_pane_cp

0xb5b3,	// (0x0005e3c6) heading_preview_pane

0xb5bb,	// (0x0005e3ce) list_preview_pane_ParamLimits

0xb5bb,	// (0x0005e3ce) list_preview_pane

0xb606,	// (0x0005e419) popup_preview_window_g1

0xb5ca,	// (0x0005e3dd) list_single_preview_pane_ParamLimits

0xb5ca,	// (0x0005e3dd) list_single_preview_pane

0xb60e,	// (0x0005e421) list_single_preview_pane_g1

0xb616,	// (0x0005e429) list_single_preview_pane_t1

0xb5dc,	// (0x0005e3ef) list_single_preview_pane_t2

0x0001,

0xfaea,	// (0x000628fd) list_single_preview_pane_t

0xb624,	// (0x0005e437) bg_popup_heading_pane_cp2_ParamLimits

0xb624,	// (0x0005e437) bg_popup_heading_pane_cp2

0xb63a,	// (0x0005e44d) heading_preview_pane_g1

0xb642,	// (0x0005e455) heading_preview_pane_t1_ParamLimits

0xb642,	// (0x0005e455) heading_preview_pane_t1

0xec84,	// (0x00061a97) soft_indicator_pane_t1_ParamLimits

0xf1f4,	// (0x00062007) scroll_pane_ParamLimits

0x3030,	// (0x00055e43) scroll_sc2_left_pane

0x3027,	// (0x00055e3a) scroll_sc2_right_pane

0x304f,	// (0x00055e62) scroll_bg_pane_g1_ParamLimits

0x3064,	// (0x00055e77) scroll_bg_pane_g2_ParamLimits

0x307c,	// (0x00055e8f) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000624d6) scroll_bg_pane_g_ParamLimits

0x304f,	// (0x00055e62) scroll_handle_pane_g1_ParamLimits

0x309e,	// (0x00055eb1) scroll_handle_pane_g2_ParamLimits

0x307c,	// (0x00055e8f) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000624dd) scroll_handle_pane_g_ParamLimits

0x6445,	// (0x00059258) popup_choice_list_window_ParamLimits

0x6445,	// (0x00059258) popup_choice_list_window

0x8d57,	// (0x0005bb6a) choice_list_pane

0x8df1,	// (0x0005bc04) cell_toolbar_pane_t1

0x8e19,	// (0x0005bc2c) toolbar_button_pane_ParamLimits

0xa0e4,	// (0x0005cef7) ai_gene_pane_1_t2_ParamLimits

0xa0e4,	// (0x0005cef7) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00062705) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00062705) ai_gene_pane_1_t

0xb65f,	// (0x0005e472) scroll_sc2_left_pane_g1

0xb65f,	// (0x0005e472) scroll_sc2_right_pane_g1

0x88d7,	// (0x0005b6ea) bg_popup_sub_pane_cp10

0xb669,	// (0x0005e47c) list_choice_list_pane

0xb682,	// (0x0005e495) list_single_choice_list_pane_ParamLimits

0xb682,	// (0x0005e495) list_single_choice_list_pane

0xb69a,	// (0x0005e4ad) list_single_choice_list_pane_g1

0xf3e2,	// (0x000621f5) list_single_choice_list_pane_t1_ParamLimits

0xf3e2,	// (0x000621f5) list_single_choice_list_pane_t1

0xb6a2,	// (0x0005e4b5) choice_list_pane_g1

0xb6aa,	// (0x0005e4bd) choice_list_pane_t1

0xebcf,	// (0x000619e2) input_focus_pane_cp11

0x1274,	// (0x00054087) title_pane_stacon_g2_ParamLimits

0x1274,	// (0x00054087) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000624bc) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000624bc) title_pane_stacon_g

0x85b0,	// (0x0005b3c3) cursor_press_pane

0x64ff,	// (0x00059312) popup_fep_hwr_window_ParamLimits

0x64ff,	// (0x00059312) popup_fep_hwr_window

0x6589,	// (0x0005939c) popup_fep_vkb_window_ParamLimits

0x6589,	// (0x0005939c) popup_fep_vkb_window

0xb6b8,	// (0x0005e4cb) cursor_press_pane_g1

0x0002,

0xfb13,	// (0x00062926) fep_vkb_side_pane_g_ParamLimits

0x702f,	// (0x00059e42) fep_hwr_candidate_pane_ParamLimits

0x702f,	// (0x00059e42) fep_hwr_candidate_pane

0x7059,	// (0x00059e6c) fep_hwr_side_pane_ParamLimits

0x7059,	// (0x00059e6c) fep_hwr_side_pane

0x707b,	// (0x00059e8e) fep_hwr_top_pane_ParamLimits

0x707b,	// (0x00059e8e) fep_hwr_top_pane

0x7093,	// (0x00059ea6) fep_hwr_write_pane_ParamLimits

0x7093,	// (0x00059ea6) fep_hwr_write_pane

0xfb13,	// (0x00062926) fep_vkb_side_pane_g

0xb6c0,	// (0x0005e4d3) fep_hwr_top_pane_g1

0xb6d2,	// (0x0005e4e5) fep_hwr_top_pane_g2

0x70cd,	// (0x00059ee0) fep_hwr_top_pane_g3

0x0002,

0xfaef,	// (0x00062902) fep_hwr_top_pane_g

0x70e2,	// (0x00059ef5) fep_hwr_top_text_pane

0x3198,	// (0x00055fab) fep_hwr_top_text_pane_g1

0xb708,	// (0x0005e51b) fep_hwr_top_text_pane_t1

0x71ec,	// (0x00059fff) fep_hwr_candidate_pane_g1

0xb953,	// (0x0005e766) fep_vkb_keypad_pane_g3_ParamLimits

0xb953,	// (0x0005e766) fep_vkb_keypad_pane_g3

0xb97f,	// (0x0005e792) fep_vkb_keypad_pane_g4_ParamLimits

0xb97f,	// (0x0005e792) fep_vkb_keypad_pane_g4

0xb9f6,	// (0x0005e809) fep_vkb_bottom_pane_g2_ParamLimits

0xb9f6,	// (0x0005e809) fep_vkb_bottom_pane_g2

0x0001,

0xfb1a,	// (0x0006292d) fep_vkb_bottom_pane_g_ParamLimits

0xfb1a,	// (0x0006292d) fep_vkb_bottom_pane_g

0xb65f,	// (0x0005e472) cell_vkb_side_pane_g2

0x0001,

0xfb24,	// (0x00062937) cell_vkb_side_pane_g

0xba81,	// (0x0005e894) cell_vkb_side_pane_t1

0xba8f,	// (0x0005e8a2) cell_vkb_side_pane_t1_copy1

0xb65f,	// (0x0005e472) bg_fep_vkb_candidate_pane_g2

0xbbd3,	// (0x0005e9e6) cell_vkb_candidate_pane_ParamLimits

0xb716,	// (0x0005e529) aid_size_cell_vkb_ParamLimits

0xb716,	// (0x0005e529) aid_size_cell_vkb

0xbbd3,	// (0x0005e9e6) cell_vkb_candidate_pane

0x7213,	// (0x0005a026) bg_popup_fep_shadow_pane_g1

0xb7a8,	// (0x0005e5bb) fep_vkb_bottom_pane_ParamLimits

0xb7a8,	// (0x0005e5bb) fep_vkb_bottom_pane

0xb7e5,	// (0x0005e5f8) fep_vkb_candidate_pane_ParamLimits

0xb7e5,	// (0x0005e5f8) fep_vkb_candidate_pane

0xb801,	// (0x0005e614) fep_vkb_keypad_pane_ParamLimits

0xb801,	// (0x0005e614) fep_vkb_keypad_pane

0xb834,	// (0x0005e647) fep_vkb_side_pane_ParamLimits

0xb834,	// (0x0005e647) fep_vkb_side_pane

0xb870,	// (0x0005e683) fep_vkb_top_pane_ParamLimits

0xb870,	// (0x0005e683) fep_vkb_top_pane

0xb8ac,	// (0x0005e6bf) fep_vkb_top_pane_g1_ParamLimits

0xb8ac,	// (0x0005e6bf) fep_vkb_top_pane_g1

0xb8bb,	// (0x0005e6ce) fep_vkb_top_pane_g2_ParamLimits

0xb8bb,	// (0x0005e6ce) fep_vkb_top_pane_g2

0xb8ca,	// (0x0005e6dd) fep_vkb_top_pane_g3_ParamLimits

0xb8ca,	// (0x0005e6dd) fep_vkb_top_pane_g3

0x0003,

0xfb0a,	// (0x0006291d) fep_vkb_top_pane_g_ParamLimits

0xfb0a,	// (0x0006291d) fep_vkb_top_pane_g

0xb8e8,	// (0x0005e6fb) fep_vkb_top_text_pane_ParamLimits

0xb8e8,	// (0x0005e6fb) fep_vkb_top_text_pane

0xb8f9,	// (0x0005e70c) fep_vkb_side_pane_g1_ParamLimits

0xb8f9,	// (0x0005e70c) fep_vkb_side_pane_g1

0xb942,	// (0x0005e755) grid_vkb_side_pane_ParamLimits

0xb942,	// (0x0005e755) grid_vkb_side_pane

0x721b,	// (0x0005a02e) bg_popup_fep_shadow_pane_g2

0x7224,	// (0x0005a037) bg_popup_fep_shadow_pane_g3

0x722c,	// (0x0005a03f) bg_popup_fep_shadow_pane_g4

0x7235,	// (0x0005a048) bg_popup_fep_shadow_pane_g5

0x723f,	// (0x0005a052) bg_popup_fep_shadow_pane_g6

0x7247,	// (0x0005a05a) bg_popup_fep_shadow_pane_g7

0xf2f1,	// (0x00062104) bg_popup_fep_shadow_pane_g8

0xb9a1,	// (0x0005e7b4) grid_vkb_keypad_number_pane_ParamLimits

0xb9a1,	// (0x0005e7b4) grid_vkb_keypad_number_pane

0xb9b5,	// (0x0005e7c8) grid_vkb_keypad_pane_ParamLimits

0xb9b5,	// (0x0005e7c8) grid_vkb_keypad_pane

0xb9db,	// (0x0005e7ee) fep_vkb_bottom_pane_g1_ParamLimits

0xb9db,	// (0x0005e7ee) fep_vkb_bottom_pane_g1

0xba04,	// (0x0005e817) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xba04,	// (0x0005e817) grid_vkb_keypad_bottom_left_pane

0xba19,	// (0x0005e82c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xba19,	// (0x0005e82c) grid_vkb_keypad_bottom_right_pane

0xba2e,	// (0x0005e841) fep_vkb_top_text_pane_g1

0xba49,	// (0x0005e85c) fep_vkb_top_text_pane_t1

0xba5e,	// (0x0005e871) cell_vkb_side_pane_ParamLimits

0xba5e,	// (0x0005e871) cell_vkb_side_pane

0xb65f,	// (0x0005e472) cell_vkb_side_pane_g1

0xba9d,	// (0x0005e8b0) cell_vkb_keypad_pane_ParamLimits

0xba9d,	// (0x0005e8b0) cell_vkb_keypad_pane

0xbb2a,	// (0x0005e93d) cell_vkb_keypad_pane_g1

0x0008,

0xfb37,	// (0x0006294a) bg_popup_fep_shadow_pane_g

0x7259,	// (0x0005a06c) cell_hwr_side_pane_g1

0x7259,	// (0x0005a06c) cell_hwr_side_pane_g2

0xbb34,	// (0x0005e947) cell_vkb_keypad_pane_t1

0xbb42,	// (0x0005e955) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbb42,	// (0x0005e955) cell_vkb_keypad_bottom_left_pane

0xbb5f,	// (0x0005e972) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbb5f,	// (0x0005e972) cell_vkb_keypad_bottom_right_pane

0xb65f,	// (0x0005e472) cell_vkb_keypad_bottom_left_pane_g1

0xb65f,	// (0x0005e472) cell_vkb_keypad_bottom_right_pane_g1

0xbb98,	// (0x0005e9ab) cell_vkb_keypad_number_pane_ParamLimits

0xbb98,	// (0x0005e9ab) cell_vkb_keypad_number_pane

0xbbb7,	// (0x0005e9ca) cell_vkb_keypad_number_pane_g1

0xbbc1,	// (0x0005e9d4) cell_vkb_keypad_number_pane_g2

0xbbca,	// (0x0005e9dd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb29,	// (0x0006293c) cell_vkb_keypad_number_pane_g

0xbb34,	// (0x0005e947) cell_vkb_keypad_number_pane_t1

0xbbf4,	// (0x0005ea07) fep_vkb_candidate_pane_g1

0x0001,

0xfb4a,	// (0x0006295d) cell_hwr_side_pane_g

0xbc0d,	// (0x0005ea20) cell_hwr_side_pane_t1

0x7263,	// (0x0005a076) cell_hwr_side_pane_t1_copy1

0x7271,	// (0x0005a084) cell_hwr_candidate_pane_g1

0x72a0,	// (0x0005a0b3) cell_hwr_candidate_pane_t1

0xb65f,	// (0x0005e472) cell_vkb_candidate_pane_g2

0xbc51,	// (0x0005ea64) cell_vkb_candidate_pane_t1

0x6ff6,	// (0x00059e09) bg_popup_fep_shadow_pane_ParamLimits

0x6ff6,	// (0x00059e09) bg_popup_fep_shadow_pane

0x70ad,	// (0x00059ec0) bg_fep_hwr_top_pane_g4

0xb6e4,	// (0x0005e4f7) bg_hwr_side_pane_g1_ParamLimits

0xb6e4,	// (0x0005e4f7) bg_hwr_side_pane_g1

0x7120,	// (0x00059f33) cell_hwr_side_pane_ParamLimits

0x7120,	// (0x00059f33) cell_hwr_side_pane

0x715d,	// (0x00059f70) fep_hwr_write_pane_g1_ParamLimits

0x715d,	// (0x00059f70) fep_hwr_write_pane_g1

0x716a,	// (0x00059f7d) fep_hwr_write_pane_g2_ParamLimits

0x716a,	// (0x00059f7d) fep_hwr_write_pane_g2

0x7177,	// (0x00059f8a) fep_hwr_write_pane_g3_ParamLimits

0x7177,	// (0x00059f8a) fep_hwr_write_pane_g3

0x7185,	// (0x00059f98) fep_hwr_write_pane_g4_ParamLimits

0x7185,	// (0x00059f98) fep_hwr_write_pane_g4

0x0005,

0xfaf6,	// (0x00062909) fep_hwr_write_pane_g_ParamLimits

0xfaf6,	// (0x00062909) fep_hwr_write_pane_g

0x70ad,	// (0x00059ec0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x70ad,	// (0x00059ec0) bg_fep_hwr_candidate_pane_g2

0x719a,	// (0x00059fad) cell_hwr_candidate_pane_ParamLimits

0x719a,	// (0x00059fad) cell_hwr_candidate_pane

0x71ec,	// (0x00059fff) fep_hwr_candidate_pane_g1_ParamLimits

0xb744,	// (0x0005e557) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb744,	// (0x0005e557) bg_popup_fep_shadow_pane_cp2

0xb8da,	// (0x0005e6ed) fep_vkb_top_pane_g4_ParamLimits

0xb8da,	// (0x0005e6ed) fep_vkb_top_pane_g4

0xb920,	// (0x0005e733) fep_vkb_side_pane_g2_ParamLimits

0xb920,	// (0x0005e733) fep_vkb_side_pane_g2

0x58b8,	// (0x000586cb) list_setting_pane_t4_ParamLimits

0x58b8,	// (0x000586cb) list_setting_pane_t4

0x5954,	// (0x00058767) list_setting_number_pane_t5_ParamLimits

0x5954,	// (0x00058767) list_setting_number_pane_t5

0x5e8d,	// (0x00058ca0) list_double_heading_pane_cp2_ParamLimits

0x5e8d,	// (0x00058ca0) list_double_heading_pane_cp2

0xbc5f,	// (0x0005ea72) list_double_heading_pane_g1_cp2_ParamLimits

0xbc5f,	// (0x0005ea72) list_double_heading_pane_g1_cp2

0xbc6b,	// (0x0005ea7e) list_double_heading_pane_g2_cp2_ParamLimits

0xbc6b,	// (0x0005ea7e) list_double_heading_pane_g2_cp2

0xbc7f,	// (0x0005ea92) list_double_heading_pane_t1_cp2_ParamLimits

0xbc7f,	// (0x0005ea92) list_double_heading_pane_t1_cp2

0xbc95,	// (0x0005eaa8) list_double_heading_pane_t2_cp2_ParamLimits

0xbc95,	// (0x0005eaa8) list_double_heading_pane_t2_cp2

0xebc7,	// (0x000619da) aid_value_unit2

0x4fb4,	// (0x00057dc7) popup_preview_fixed_window

0xed72,	// (0x00061b85) bg_popup_preview_window_pane_cp02

0xbca7,	// (0x0005eaba) list_preview_fixed_pane

0xbced,	// (0x0005eb00) list_empty_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_empty_pane_fp

0xbced,	// (0x0005eb00) list_single_cale_day_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_single_cale_day_pane_fp

0xbced,	// (0x0005eb00) list_single_graphic_heading_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_single_graphic_heading_pane_fp

0xbced,	// (0x0005eb00) list_single_graphic_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_single_graphic_pane_fp

0xbced,	// (0x0005eb00) list_single_heading_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_single_heading_pane_fp

0xbced,	// (0x0005eb00) list_single_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_single_pane_fp

0xbd06,	// (0x0005eb19) list_single_pane_fp_g1_ParamLimits

0xbd06,	// (0x0005eb19) list_single_pane_fp_g1

0x9d04,	// (0x0005cb17) list_single_pane_fp_g2_ParamLimits

0x9d04,	// (0x0005cb17) list_single_pane_fp_g2

0x9d10,	// (0x0005cb23) list_single_pane_fp_g3_ParamLimits

0x9d10,	// (0x0005cb23) list_single_pane_fp_g3

0xbd12,	// (0x0005eb25) list_single_pane_fp_g4_ParamLimits

0xbd12,	// (0x0005eb25) list_single_pane_fp_g4

0x0003,

0xfb5d,	// (0x00062970) list_single_pane_fp_g_ParamLimits

0xfb5d,	// (0x00062970) list_single_pane_fp_g

0x3e51,	// (0x00056c64) list_single_pane_fp_t1_ParamLimits

0x3e51,	// (0x00056c64) list_single_pane_fp_t1

0x3e68,	// (0x00056c7b) list_single_graphic_pane_fp_g1_ParamLimits

0x3e68,	// (0x00056c7b) list_single_graphic_pane_fp_g1

0xbd06,	// (0x0005eb19) list_single_graphic_pane_fp_g2_ParamLimits

0xbd06,	// (0x0005eb19) list_single_graphic_pane_fp_g2

0x9d04,	// (0x0005cb17) list_single_graphic_pane_fp_g3_ParamLimits

0x9d04,	// (0x0005cb17) list_single_graphic_pane_fp_g3

0x9d10,	// (0x0005cb23) list_single_graphic_pane_fp_g4_ParamLimits

0x9d10,	// (0x0005cb23) list_single_graphic_pane_fp_g4

0xbd12,	// (0x0005eb25) list_single_graphic_pane_fp_g5_ParamLimits

0xbd12,	// (0x0005eb25) list_single_graphic_pane_fp_g5

0x0004,

0xfb66,	// (0x00062979) list_single_graphic_pane_fp_g_ParamLimits

0xfb66,	// (0x00062979) list_single_graphic_pane_fp_g

0x3e74,	// (0x00056c87) list_single_graphic_pane_fp_t1_ParamLimits

0x3e74,	// (0x00056c87) list_single_graphic_pane_fp_t1

0x3e68,	// (0x00056c7b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3e68,	// (0x00056c7b) list_single_graphic_heading_pane_fp_g1

0xbd06,	// (0x0005eb19) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbd06,	// (0x0005eb19) list_single_graphic_heading_pane_fp_g2

0x9d04,	// (0x0005cb17) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9d04,	// (0x0005cb17) list_single_graphic_heading_pane_fp_g3

0x9d10,	// (0x0005cb23) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9d10,	// (0x0005cb23) list_single_graphic_heading_pane_fp_g4

0xbd12,	// (0x0005eb25) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbd12,	// (0x0005eb25) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb66,	// (0x00062979) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb66,	// (0x00062979) list_single_graphic_heading_pane_fp_g

0x3e8a,	// (0x00056c9d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3e8a,	// (0x00056c9d) list_single_graphic_heading_pane_fp_t1

0x3ea0,	// (0x00056cb3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3ea0,	// (0x00056cb3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb71,	// (0x00062984) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb71,	// (0x00062984) list_single_graphic_heading_pane_fp_t

0x3eb2,	// (0x00056cc5) list_single_cale_day_pane_fp_g1_ParamLimits

0x3eb2,	// (0x00056cc5) list_single_cale_day_pane_fp_g1

0xbd1e,	// (0x0005eb31) list_single_cale_day_pane_fp_g2_ParamLimits

0xbd1e,	// (0x0005eb31) list_single_cale_day_pane_fp_g2

0x9d24,	// (0x0005cb37) list_single_cale_day_pane_fp_g3_ParamLimits

0x9d24,	// (0x0005cb37) list_single_cale_day_pane_fp_g3

0x9d4c,	// (0x0005cb5f) list_single_cale_day_pane_fp_g4_ParamLimits

0x9d4c,	// (0x0005cb5f) list_single_cale_day_pane_fp_g4

0x9d70,	// (0x0005cb83) list_single_cale_day_pane_fp_g5_ParamLimits

0x9d70,	// (0x0005cb83) list_single_cale_day_pane_fp_g5

0x0004,

0xfb76,	// (0x00062989) list_single_cale_day_pane_fp_g_ParamLimits

0xfb76,	// (0x00062989) list_single_cale_day_pane_fp_g

0x3eea,	// (0x00056cfd) list_single_cale_day_pane_fp_t1_ParamLimits

0x3eea,	// (0x00056cfd) list_single_cale_day_pane_fp_t1

0x3f10,	// (0x00056d23) list_single_cale_day_pane_fp_t2_ParamLimits

0x3f10,	// (0x00056d23) list_single_cale_day_pane_fp_t2

0x3f29,	// (0x00056d3c) list_single_cale_day_pane_fp_t3_ParamLimits

0x3f29,	// (0x00056d3c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb81,	// (0x00062994) list_single_cale_day_pane_fp_t_ParamLimits

0xfb81,	// (0x00062994) list_single_cale_day_pane_fp_t

0xbd06,	// (0x0005eb19) list_empty_pane_fp_g1_ParamLimits

0xbd06,	// (0x0005eb19) list_empty_pane_fp_g1

0x3f42,	// (0x00056d55) list_empty_pane_fp_t1

0x3f50,	// (0x00056d63) list_empty_pane_fp_t2

0x0001,

0xfb88,	// (0x0006299b) list_empty_pane_fp_t

0xbd06,	// (0x0005eb19) list_single_heading_pane_fp_g1_ParamLimits

0xbd06,	// (0x0005eb19) list_single_heading_pane_fp_g1

0x9d04,	// (0x0005cb17) list_single_heading_pane_fp_g2_ParamLimits

0x9d04,	// (0x0005cb17) list_single_heading_pane_fp_g2

0x9d10,	// (0x0005cb23) list_single_heading_pane_fp_g3_ParamLimits

0x9d10,	// (0x0005cb23) list_single_heading_pane_fp_g3

0x0002,

0xfb8d,	// (0x000629a0) list_single_heading_pane_fp_g_ParamLimits

0xfb8d,	// (0x000629a0) list_single_heading_pane_fp_g

0x3f5e,	// (0x00056d71) list_single_heading_pane_fp_t1_ParamLimits

0x3f5e,	// (0x00056d71) list_single_heading_pane_fp_t1

0x3f70,	// (0x00056d83) list_single_heading_pane_fp_t2_ParamLimits

0x3f70,	// (0x00056d83) list_single_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x000629a7) list_single_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x000629a7) list_single_heading_pane_fp_t

0xf3f7,	// (0x0006220a) aid_size_cell_fast

0xed47,	// (0x00061b5a) soft_indicator_pane_cp1_t1

0xf434,	// (0x00062247) cell_app_pane_cp2_ParamLimits

0xf434,	// (0x00062247) cell_app_pane_cp2

0x7018,	// (0x00059e2b) fep_hwr_candidate_drop_down_list_pane

0x7206,	// (0x0005a019) fep_hwr_candidate_pane_g3_ParamLimits

0x7206,	// (0x0005a019) fep_hwr_candidate_pane_g3

0x2d86,	// (0x00055b99) fep_hwr_candidate_pane_g4_ParamLimits

0x2d86,	// (0x00055b99) fep_hwr_candidate_pane_g4

0x0002,

0xfb03,	// (0x00062916) fep_hwr_candidate_pane_g_ParamLimits

0xfb03,	// (0x00062916) fep_hwr_candidate_pane_g

0xb7d4,	// (0x0005e5e7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb7d4,	// (0x0005e5e7) fep_vkb_candidate_drop_down_list_pane

0xbbfc,	// (0x0005ea0f) fep_vkb_candidate_pane_g3

0xbc04,	// (0x0005ea17) fep_vkb_candidate_pane_g4

0x0002,

0xfb30,	// (0x00062943) fep_vkb_candidate_pane_g

0x7271,	// (0x0005a084) cell_hwr_candidate_pane_g1_ParamLimits

0x727f,	// (0x0005a092) cell_hwr_candidate_pane_g3_ParamLimits

0x727f,	// (0x0005a092) cell_hwr_candidate_pane_g3

0xd5c2,	// (0x000603d5) cell_hwr_candidate_pane_g4_ParamLimits

0xd5c2,	// (0x000603d5) cell_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00062962) cell_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x00062962) cell_hwr_candidate_pane_g

0xbc1b,	// (0x0005ea2e) cell_vkb_candidate_pane_g3_ParamLimits

0xbc1b,	// (0x0005ea2e) cell_vkb_candidate_pane_g3

0xbc36,	// (0x0005ea49) cell_vkb_candidate_pane_g4_ParamLimits

0xbc36,	// (0x0005ea49) cell_vkb_candidate_pane_g4

0xbd2a,	// (0x0005eb3d) cell_app_pane_cp2_g1_ParamLimits

0xbd2a,	// (0x0005eb3d) cell_app_pane_cp2_g1

0xbd48,	// (0x0005eb5b) cell_app_pane_cp2_g2_ParamLimits

0xbd48,	// (0x0005eb5b) cell_app_pane_cp2_g2

0x0001,

0xfb99,	// (0x000629ac) cell_app_pane_cp2_g_ParamLimits

0xfb99,	// (0x000629ac) cell_app_pane_cp2_g

0xbd54,	// (0x0005eb67) cell_app_pane_cp2_t1_ParamLimits

0xbd54,	// (0x0005eb67) cell_app_pane_cp2_t1

0xf281,	// (0x00062094) grid_highlight_pane_cp1_ParamLimits

0xf281,	// (0x00062094) grid_highlight_pane_cp1

0x72be,	// (0x0005a0d1) cell_hwr_candidate_pane_cp1_ParamLimits

0x72be,	// (0x0005a0d1) cell_hwr_candidate_pane_cp1

0x7271,	// (0x0005a084) fep_hwr_candidate_drop_down_list_pane_g1

0x72e2,	// (0x0005a0f5) fep_hwr_candidate_drop_down_list_pane_g2

0x72ef,	// (0x0005a102) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x000629b1) fep_hwr_candidate_drop_down_list_pane_g

0x72fc,	// (0x0005a10f) fep_hwr_candidate_drop_down_list_scroll_pane

0x7305,	// (0x0005a118) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7305,	// (0x0005a118) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7312,	// (0x0005a125) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7312,	// (0x0005a125) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x731f,	// (0x0005a132) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x731f,	// (0x0005a132) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x732c,	// (0x0005a13f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x732c,	// (0x0005a13f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7347,	// (0x0005a15a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7347,	// (0x0005a15a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7362,	// (0x0005a175) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7362,	// (0x0005a175) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x737d,	// (0x0005a190) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x737d,	// (0x0005a190) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7398,	// (0x0005a1ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7398,	// (0x0005a1ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x000629b8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x000629b8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbd66,	// (0x0005eb79) cell_vkb_candidate_pane_cp1_ParamLimits

0xbd66,	// (0x0005eb79) cell_vkb_candidate_pane_cp1

0xb8da,	// (0x0005e6ed) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb8da,	// (0x0005e6ed) fep_vkb_candidate_drop_down_list_pane_g1

0xbd8c,	// (0x0005eb9f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbd8c,	// (0x0005eb9f) fep_vkb_candidate_drop_down_list_pane_g2

0xbd99,	// (0x0005ebac) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbd99,	// (0x0005ebac) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x000629c9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x000629c9) fep_vkb_candidate_drop_down_list_pane_g

0xbda6,	// (0x0005ebb9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbda6,	// (0x0005ebb9) fep_vkb_candidate_drop_down_list_scroll_pane

0xbdb3,	// (0x0005ebc6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbdb3,	// (0x0005ebc6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbdc0,	// (0x0005ebd3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbdc0,	// (0x0005ebd3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbdcc,	// (0x0005ebdf) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbdcc,	// (0x0005ebdf) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbdd8,	// (0x0005ebeb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbdd8,	// (0x0005ebeb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbdf9,	// (0x0005ec0c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbdf9,	// (0x0005ec0c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbe1a,	// (0x0005ec2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbe1a,	// (0x0005ec2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbe3b,	// (0x0005ec4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbe3b,	// (0x0005ec4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbe5c,	// (0x0005ec6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbe5c,	// (0x0005ec6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x000629d0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x000629d0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x50d4,	// (0x00057ee7) title_pane_g1_ParamLimits

0x50e1,	// (0x00057ef4) title_pane_g2_ParamLimits

0xf529,	// (0x0006233c) title_pane_g_ParamLimits

0x3190,	// (0x00055fa3) aid_call2_pane

0x3188,	// (0x00055f9b) aid_call_pane

0x3198,	// (0x00055fab) popup_clock_analogue_window_g1

0x3198,	// (0x00055fab) popup_clock_analogue_window_g2

0x5e6e,	// (0x00058c81) popup_clock_analogue_window_g3

0x5e77,	// (0x00058c8a) popup_clock_analogue_window_g4

0xebd9,	// (0x000619ec) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000624eb) popup_clock_analogue_window_g

0x5e7f,	// (0x00058c92) popup_clock_analogue_window_t1

0x5edd,	// (0x00058cf0) clock_digital_number_pane_ParamLimits

0x5edd,	// (0x00058cf0) clock_digital_number_pane

0x5ee9,	// (0x00058cfc) clock_digital_number_pane_cp02_ParamLimits

0x5ee9,	// (0x00058cfc) clock_digital_number_pane_cp02

0x5ef5,	// (0x00058d08) clock_digital_number_pane_cp03_ParamLimits

0x5ef5,	// (0x00058d08) clock_digital_number_pane_cp03

0x5f01,	// (0x00058d14) clock_digital_number_pane_cp04_ParamLimits

0x5f01,	// (0x00058d14) clock_digital_number_pane_cp04

0x5f0d,	// (0x00058d20) clock_digital_separator_pane_ParamLimits

0x5f0d,	// (0x00058d20) clock_digital_separator_pane

0x5f19,	// (0x00058d2c) popup_clock_digital_window_t1_ParamLimits

0x5f19,	// (0x00058d2c) popup_clock_digital_window_t1

0xebd9,	// (0x000619ec) clock_digital_number_pane_g1

0xebd9,	// (0x000619ec) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000624f6) clock_digital_number_pane_g

0xebd9,	// (0x000619ec) clock_digital_separator_pane_g1

0xebd9,	// (0x000619ec) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000624f6) clock_digital_separator_pane_g

0x8913,	// (0x0005b726) aid_fill_nsta_ParamLimits

0x8a5f,	// (0x0005b872) indicator_nsta_pane_ParamLimits

0x8bf0,	// (0x0005ba03) popup_clock_analogue_window

0x8bf0,	// (0x0005ba03) popup_clock_digital_window

0xb08b,	// (0x0005de9e) grid_indicator_nsta_pane_ParamLimits

0xb0b4,	// (0x0005dec7) clock_nsta_pane_t2

0x0001,

0xfa83,	// (0x00062896) clock_nsta_pane_t

0x5dd7,	// (0x00058bea) aid_size_max_handle

0x5de1,	// (0x00058bf4) aid_size_min_handle

0x85b0,	// (0x0005b3c3) editor_scroll_pane

0xbe77,	// (0x0005ec8a) ex_editor_pane

0xf3bd,	// (0x000621d0) scroll_pane_cp13

0xf220,	// (0x00062033) scroll_pane_cp14

0x31c7,	// (0x00055fda) scroll_pane_cp36

0x5ea3,	// (0x00058cb6) list_single_graphic_hl_pane_cp2_ParamLimits

0x5ea3,	// (0x00058cb6) list_single_graphic_hl_pane_cp2

0x6e86,	// (0x00059c99) list_single_graphic_hl_pane_ParamLimits

0x6e86,	// (0x00059c99) list_single_graphic_hl_pane

0x3f86,	// (0x00056d99) aid_size_min_hl_cp1

0xbe7f,	// (0x0005ec92) list_highlight_pane_cp34_ParamLimits

0xbe7f,	// (0x0005ec92) list_highlight_pane_cp34

0xbe90,	// (0x0005eca3) list_single_graphic_hl_pane_g1_ParamLimits

0xbe90,	// (0x0005eca3) list_single_graphic_hl_pane_g1

0x73b3,	// (0x0005a1c6) list_single_graphic_hl_pane_g2_ParamLimits

0x73b3,	// (0x0005a1c6) list_single_graphic_hl_pane_g2

0x73b3,	// (0x0005a1c6) list_single_graphic_hl_pane_g3_ParamLimits

0x73b3,	// (0x0005a1c6) list_single_graphic_hl_pane_g3

0x73bf,	// (0x0005a1d2) list_single_graphic_hl_pane_g4_ParamLimits

0x73bf,	// (0x0005a1d2) list_single_graphic_hl_pane_g4

0x73cb,	// (0x0005a1de) list_single_graphic_hl_pane_g5_ParamLimits

0x73cb,	// (0x0005a1de) list_single_graphic_hl_pane_g5

0x0004,

0xfbce,	// (0x000629e1) list_single_graphic_hl_pane_g_ParamLimits

0xfbce,	// (0x000629e1) list_single_graphic_hl_pane_g

0x73df,	// (0x0005a1f2) list_single_graphic_hl_pane_t1_ParamLimits

0x73df,	// (0x0005a1f2) list_single_graphic_hl_pane_t1

0xbe9d,	// (0x0005ecb0) aid_size_min_hl_cp2

0xbea6,	// (0x0005ecb9) list_highlight_pane_cp34_cp2_ParamLimits

0xbea6,	// (0x0005ecb9) list_highlight_pane_cp34_cp2

0xbe90,	// (0x0005eca3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbe90,	// (0x0005eca3) list_single_graphic_hl_pane_g1_cp2

0xbeb3,	// (0x0005ecc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbeb3,	// (0x0005ecc6) list_single_graphic_hl_pane_g2_cp2

0xbebf,	// (0x0005ecd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbebf,	// (0x0005ecd2) list_single_graphic_hl_pane_g3_cp2

0xbecd,	// (0x0005ece0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbecd,	// (0x0005ece0) list_single_graphic_hl_pane_g4_cp2

0xbed9,	// (0x0005ecec) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbed9,	// (0x0005ecec) list_single_graphic_hl_pane_g5_cp2

0x6301,	// (0x00059114) control_pane_g4_ParamLimits

0x6301,	// (0x00059114) control_pane_g4

0x88d7,	// (0x0005b6ea) bg_popup_sub_pane_cp10_ParamLimits

0xb669,	// (0x0005e47c) list_choice_list_pane_ParamLimits

0xb678,	// (0x0005e48b) scroll_pane_cp23

0xed72,	// (0x00061b85) bg_popup_preview_window_pane_cp02_ParamLimits

0xbca7,	// (0x0005eaba) list_preview_fixed_pane_ParamLimits

0xbcbd,	// (0x0005ead0) list_preview_fixed_pane_cp_ParamLimits

0xbcbd,	// (0x0005ead0) list_preview_fixed_pane_cp

0xbcc9,	// (0x0005eadc) popup_preview_fixed_window_g1_ParamLimits

0xbcc9,	// (0x0005eadc) popup_preview_fixed_window_g1

0xbcd5,	// (0x0005eae8) popup_preview_fixed_window_g2_ParamLimits

0xbcd5,	// (0x0005eae8) popup_preview_fixed_window_g2

0x0002,

0xfb56,	// (0x00062969) popup_preview_fixed_window_g_ParamLimits

0xfb56,	// (0x00062969) popup_preview_fixed_window_g

0x5c8b,	// (0x00058a9e) aid_navi_side_left_pane_ParamLimits

0x5ca0,	// (0x00058ab3) aid_navi_side_right_pane_ParamLimits

0x5cb8,	// (0x00058acb) navi_icon_pane_stacon_ParamLimits

0x5ccc,	// (0x00058adf) navi_navi_pane_stacon_ParamLimits

0x5cb8,	// (0x00058acb) navi_text_pane_stacon_ParamLimits

0x4e6b,	// (0x00057c7e) main_text_info_pane

0xbf03,	// (0x0005ed16) listscroll_text_info_pane

0xbf0b,	// (0x0005ed1e) list_text_info_pane_ParamLimits

0xbf0b,	// (0x0005ed1e) list_text_info_pane

0xbf1a,	// (0x0005ed2d) scroll_pane_cp24_ParamLimits

0xbf1a,	// (0x0005ed2d) scroll_pane_cp24

0xbf38,	// (0x0005ed4b) list_text_info_pane_t1_ParamLimits

0xbf38,	// (0x0005ed4b) list_text_info_pane_t1

0x6467,	// (0x0005927a) popup_fast_swap2_window_ParamLimits

0x6467,	// (0x0005927a) popup_fast_swap2_window

0xbf5d,	// (0x0005ed70) aid_size_cell_fast2

0xebcf,	// (0x000619e2) bg_popup_window_pane_cp17

0xbf67,	// (0x0005ed7a) heading_pane_cp2

0xbf6f,	// (0x0005ed82) listscroll_fast2_pane

0xbf77,	// (0x0005ed8a) grid_fast2_pane

0xbf81,	// (0x0005ed94) listscroll_fast2_pane_g1

0xbf8b,	// (0x0005ed9e) listscroll_fast2_pane_g2

0x0001,

0xfbd9,	// (0x000629ec) listscroll_fast2_pane_g

0xf3bd,	// (0x000621d0) scroll_pane_cp26

0xbf95,	// (0x0005eda8) cell_fast2_pane_ParamLimits

0xbf95,	// (0x0005eda8) cell_fast2_pane

0xbfac,	// (0x0005edbf) cell_fast2_pane_g1

0xbfb5,	// (0x0005edc8) cell_fast2_pane_g2

0xbfbe,	// (0x0005edd1) cell_fast2_pane_g3

0x0002,

0xfbde,	// (0x000629f1) cell_fast2_pane_g

0xefe7,	// (0x00061dfa) grid_highlight_pane_cp9

0x6429,	// (0x0005923c) main_eswt_pane_ParamLimits

0x6429,	// (0x0005923c) main_eswt_pane

0xbf2f,	// (0x0005ed42) list_single_text_info_pane

0xbfc6,	// (0x0005edd9) eswt_ctrl_button_pane

0xbfc6,	// (0x0005edd9) eswt_ctrl_canvas_pane

0xbfce,	// (0x0005ede1) eswt_ctrl_combo_pane

0xbfc6,	// (0x0005edd9) eswt_ctrl_default_pane

0xbfc6,	// (0x0005edd9) eswt_ctrl_label_pane

0xbfd6,	// (0x0005ede9) eswt_ctrl_wait_pane

0xbfde,	// (0x0005edf1) eswt_shell_pane

0xebcf,	// (0x000619e2) listscroll_eswt_app_pane

0xbffe,	// (0x0005ee11) popup_eswt_tasktip_window_ParamLimits

0xbffe,	// (0x0005ee11) popup_eswt_tasktip_window

0x8eb1,	// (0x0005bcc4) bg_popup_window_pane_cp18

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_ParamLimits

0xc017,	// (0x0005ee2a) eswt_control_pane_g1

0xc024,	// (0x0005ee37) eswt_control_pane_g2_ParamLimits

0xc024,	// (0x0005ee37) eswt_control_pane_g2

0xc031,	// (0x0005ee44) eswt_control_pane_g3_ParamLimits

0xc031,	// (0x0005ee44) eswt_control_pane_g3

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_ParamLimits

0xc03e,	// (0x0005ee51) eswt_control_pane_g4

0x0003,

0xfbe5,	// (0x000629f8) eswt_control_pane_g_ParamLimits

0xfbe5,	// (0x000629f8) eswt_control_pane_g

0xf281,	// (0x00062094) bg_button_pane_ParamLimits

0xf281,	// (0x00062094) bg_button_pane

0xeffc,	// (0x00061e0f) common_borders_pane_copy2_ParamLimits

0xeffc,	// (0x00061e0f) common_borders_pane_copy2

0xc04b,	// (0x0005ee5e) control_button_pane_g1_ParamLimits

0xc04b,	// (0x0005ee5e) control_button_pane_g1

0xc057,	// (0x0005ee6a) control_button_pane_g2_ParamLimits

0xc057,	// (0x0005ee6a) control_button_pane_g2

0xc063,	// (0x0005ee76) control_button_pane_g3_ParamLimits

0xc063,	// (0x0005ee76) control_button_pane_g3

0x0002,

0xfbee,	// (0x00062a01) control_button_pane_g_ParamLimits

0xfbee,	// (0x00062a01) control_button_pane_g

0xc077,	// (0x0005ee8a) control_button_pane_t1

0xc085,	// (0x0005ee98) control_button_pane_t2

0x0001,

0xfbf5,	// (0x00062a08) control_button_pane_t

0x8e25,	// (0x0005bc38) bg_button_pane_g1

0x8e35,	// (0x0005bc48) bg_button_pane_g2

0x8e2d,	// (0x0005bc40) bg_button_pane_g3

0x8e45,	// (0x0005bc58) bg_button_pane_g4

0x8e3d,	// (0x0005bc50) bg_button_pane_g5

0x8e4d,	// (0x0005bc60) bg_button_pane_g6

0x8e55,	// (0x0005bc68) bg_button_pane_g7

0x8e65,	// (0x0005bc78) bg_button_pane_g8

0x8e5d,	// (0x0005bc70) bg_button_pane_g9

0x0008,

0xf846,	// (0x00062659) bg_button_pane_g

0xb624,	// (0x0005e437) common_borders_pane_ParamLimits

0xb624,	// (0x0005e437) common_borders_pane

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy1_ParamLimits

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy1

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy1_ParamLimits

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy1

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy1_ParamLimits

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy1

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy1_ParamLimits

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy1

0xb65f,	// (0x0005e472) bg_eswt_ctrl_canvas_pane_g1

0xb624,	// (0x0005e437) common_borders_pane_cp2_ParamLimits

0xb624,	// (0x0005e437) common_borders_pane_cp2

0xb624,	// (0x0005e437) common_borders_pane_cp3_ParamLimits

0xb624,	// (0x0005e437) common_borders_pane_cp3

0xc093,	// (0x0005eea6) separator_horizontal_pane

0xc09b,	// (0x0005eeae) separator_vertical_pane

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy2_ParamLimits

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy2

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy2_ParamLimits

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy2

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy2_ParamLimits

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy2

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy2_ParamLimits

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy2

0xebcf,	// (0x000619e2) common_borders_pane_cp4

0xc0a4,	// (0x0005eeb7) separator_horizontal_pane_g1

0xc0ad,	// (0x0005eec0) separator_horizontal_pane_g2

0xc0b6,	// (0x0005eec9) separator_horizontal_pane_g3

0x0002,

0xfbfa,	// (0x00062a0d) separator_horizontal_pane_g

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy3_ParamLimits

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy3

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy3_ParamLimits

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy3

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy3_ParamLimits

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy3

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy3_ParamLimits

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy3

0xebcf,	// (0x000619e2) common_borders_pane_cp5

0xc0bf,	// (0x0005eed2) separator_vertical_pane_g1

0xc0c8,	// (0x0005eedb) separator_vertical_pane_g2

0xc0d1,	// (0x0005eee4) separator_vertical_pane_g3

0x0002,

0xfc01,	// (0x00062a14) separator_vertical_pane_g

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy4_ParamLimits

0xc017,	// (0x0005ee2a) eswt_control_pane_g1_copy4

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy4_ParamLimits

0xc024,	// (0x0005ee37) eswt_control_pane_g2_copy4

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy4_ParamLimits

0xc031,	// (0x0005ee44) eswt_control_pane_g3_copy4

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy4_ParamLimits

0xc03e,	// (0x0005ee51) eswt_control_pane_g4_copy4

0xc0da,	// (0x0005eeed) eswt_ctrl_combo_button_pane

0xc0e2,	// (0x0005eef5) eswt_ctrl_input_pane

0xc0ea,	// (0x0005eefd) popup_choice_list_window_cp70

0xc0f2,	// (0x0005ef05) eswt_ctrl_input_pane_t1

0xebcf,	// (0x000619e2) input_focus_pane_cp70

0xb624,	// (0x0005e437) bg_button_pane_cp70_ParamLimits

0xb624,	// (0x0005e437) bg_button_pane_cp70

0xc100,	// (0x0005ef13) eswt_ctrl_combo_button_pane_g1

0xc108,	// (0x0005ef1b) wait_bar_pane_cp70

0x8eb1,	// (0x0005bcc4) bg_popup_window_pane_cp70_ParamLimits

0x8eb1,	// (0x0005bcc4) bg_popup_window_pane_cp70

0xc110,	// (0x0005ef23) popup_eswt_tasktip_window_t1

0xc126,	// (0x0005ef39) wait_bar_pane_cp71_ParamLimits

0xc126,	// (0x0005ef39) wait_bar_pane_cp71

0xc132,	// (0x0005ef45) grid_eswt_app_pane

0x3030,	// (0x00055e43) scroll_pane_cp70

0xc13b,	// (0x0005ef4e) cell_eswt_app_pane_ParamLimits

0xc13b,	// (0x0005ef4e) cell_eswt_app_pane

0xc16d,	// (0x0005ef80) cell_eswt_app_pane_g1_ParamLimits

0xc16d,	// (0x0005ef80) cell_eswt_app_pane_g1

0xc19c,	// (0x0005efaf) cell_eswt_app_pane_g2_ParamLimits

0xc19c,	// (0x0005efaf) cell_eswt_app_pane_g2

0x0001,

0xfc08,	// (0x00062a1b) cell_eswt_app_pane_g_ParamLimits

0xfc08,	// (0x00062a1b) cell_eswt_app_pane_g

0xc1c5,	// (0x0005efd8) cell_eswt_app_pane_t1_ParamLimits

0xc1c5,	// (0x0005efd8) cell_eswt_app_pane_t1

0xc1f7,	// (0x0005f00a) grid_highlight_pane_cp70_ParamLimits

0xc1f7,	// (0x0005f00a) grid_highlight_pane_cp70

0x8476,	// (0x0005b289) set_content_pane_g1

0x885e,	// (0x0005b671) status_small_volume_pane

0x73f5,	// (0x0005a208) status_small_volume_pane_g1

0x73fd,	// (0x0005a210) volume_small2_pane

0x7406,	// (0x0005a219) volume_small2_pane_g1

0x740f,	// (0x0005a222) volume_small2_pane_g2

0x7418,	// (0x0005a22b) volume_small2_pane_g3

0x7421,	// (0x0005a234) volume_small2_pane_g4

0x742a,	// (0x0005a23d) volume_small2_pane_g5

0x7433,	// (0x0005a246) volume_small2_pane_g6

0x743c,	// (0x0005a24f) volume_small2_pane_g7

0x7445,	// (0x0005a258) volume_small2_pane_g8

0x744e,	// (0x0005a261) volume_small2_pane_g9

0x7457,	// (0x0005a26a) volume_small2_pane_g10

0x0009,

0xfc0d,	// (0x00062a20) volume_small2_pane_g

0xba2e,	// (0x0005e841) fep_vkb_top_text_pane_g1_ParamLimits

0xba49,	// (0x0005e85c) fep_vkb_top_text_pane_t1_ParamLimits

0xbce1,	// (0x0005eaf4) popup_preview_fixed_window_g3_ParamLimits

0xbce1,	// (0x0005eaf4) popup_preview_fixed_window_g3

0x697a,	// (0x0005978d) popup_toolbar_trans_pane

0xa3f7,	// (0x0005d20a) aid_height_set_list_ParamLimits

0xa408,	// (0x0005d21b) aid_size_parent_ParamLimits

0x88d7,	// (0x0005b6ea) list_highlight_pane_cp2_ParamLimits

0x8476,	// (0x0005b289) set_content_pane_g1_ParamLimits

0x9c5e,	// (0x0005ca71) list_single_image_pane_ParamLimits

0x9c5e,	// (0x0005ca71) list_single_image_pane

0xc203,	// (0x0005f016) aid_size_cell_image_ParamLimits

0xc203,	// (0x0005f016) aid_size_cell_image

0xc210,	// (0x0005f023) grid_single_image_pane_ParamLimits

0xc210,	// (0x0005f023) grid_single_image_pane

0xf28f,	// (0x000620a2) list_single_image_pane_g1_ParamLimits

0xf28f,	// (0x000620a2) list_single_image_pane_g1

0xf29b,	// (0x000620ae) list_single_image_pane_g2_ParamLimits

0xf29b,	// (0x000620ae) list_single_image_pane_g2

0x0001,

0xfc22,	// (0x00062a35) list_single_image_pane_g_ParamLimits

0xfc22,	// (0x00062a35) list_single_image_pane_g

0xc21e,	// (0x0005f031) list_single_image_pane_t1_ParamLimits

0xc21e,	// (0x0005f031) list_single_image_pane_t1

0xc234,	// (0x0005f047) cell_image_list_pane_ParamLimits

0xc234,	// (0x0005f047) cell_image_list_pane

0xc24c,	// (0x0005f05f) cell_image_list_pane_g1

0xc255,	// (0x0005f068) cell_image_list_pane_g2

0x0001,

0xfc27,	// (0x00062a3a) cell_image_list_pane_g

0xc25e,	// (0x0005f071) aid_size_cell_tb_trans_pane

0xf281,	// (0x00062094) bg_tb_trans_pane

0xc270,	// (0x0005f083) grid_tb_trans_pane

0x8e25,	// (0x0005bc38) bg_tb_trans_pane_g1

0x8e35,	// (0x0005bc48) bg_tb_trans_pane_g2

0x8e2d,	// (0x0005bc40) bg_tb_trans_pane_g3

0x8e45,	// (0x0005bc58) bg_tb_trans_pane_g4

0x8e3d,	// (0x0005bc50) bg_tb_trans_pane_g5

0x8e65,	// (0x0005bc78) bg_tb_trans_pane_g6

0x8e5d,	// (0x0005bc70) bg_tb_trans_pane_g7

0x8e4d,	// (0x0005bc60) bg_tb_trans_pane_g8

0x8e55,	// (0x0005bc68) bg_tb_trans_pane_g9

0x0008,

0xfc2c,	// (0x00062a3f) bg_tb_trans_pane_g

0xc284,	// (0x0005f097) cell_toolbar_trans_pane_ParamLimits

0xc284,	// (0x0005f097) cell_toolbar_trans_pane

0xb65f,	// (0x0005e472) cell_toolbar_trans_pane_g1

0xb297,	// (0x0005e0aa) list_form2_midp_pane_t1

0xb2a5,	// (0x0005e0b8) list_form2_midp_pane_t2

0x0001,

0xfac9,	// (0x000628dc) list_form2_midp_pane_t

0xb2b3,	// (0x0005e0c6) scroll_pane_cp51_ParamLimits

0xb47a,	// (0x0005e28d) form2_midp_wait_pane_g1

0xb483,	// (0x0005e296) form2_midp_wait_pane_g2

0xb48c,	// (0x0005e29f) form2_midp_wait_pane_g3

0x0002,

0xfade,	// (0x000628f1) form2_midp_wait_pane_g

0xec31,	// (0x00061a44) list_highlight_pane_cp21_ParamLimits

0xb4c5,	// (0x0005e2d8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb4d4,	// (0x0005e2e7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9c17,	// (0x0005ca2a) list_single_2graphic_im_pane_ParamLimits

0x9c17,	// (0x0005ca2a) list_single_2graphic_im_pane

0xc2aa,	// (0x0005f0bd) list_single_2graphic_im_pane_g1_ParamLimits

0xc2aa,	// (0x0005f0bd) list_single_2graphic_im_pane_g1

0xc2bb,	// (0x0005f0ce) list_single_2graphic_im_pane_g2_ParamLimits

0xc2bb,	// (0x0005f0ce) list_single_2graphic_im_pane_g2

0xc2c7,	// (0x0005f0da) list_single_2graphic_im_pane_g3_ParamLimits

0xc2c7,	// (0x0005f0da) list_single_2graphic_im_pane_g3

0x0003,

0xfc3f,	// (0x00062a52) list_single_2graphic_im_pane_g_ParamLimits

0xfc3f,	// (0x00062a52) list_single_2graphic_im_pane_g

0xc2e7,	// (0x0005f0fa) list_single_2graphic_im_pane_t1_ParamLimits

0xc2e7,	// (0x0005f0fa) list_single_2graphic_im_pane_t1

0xbced,	// (0x0005eb00) list_single_graphic_2heading_pane_fp_ParamLimits

0xbced,	// (0x0005eb00) list_single_graphic_2heading_pane_fp

0x3e68,	// (0x00056c7b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3e68,	// (0x00056c7b) list_single_graphic_2heading_pane_fp_g1

0xbd06,	// (0x0005eb19) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbd06,	// (0x0005eb19) list_single_graphic_2heading_pane_fp_g2

0x9d04,	// (0x0005cb17) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9d04,	// (0x0005cb17) list_single_graphic_2heading_pane_fp_g3

0x9d10,	// (0x0005cb23) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9d10,	// (0x0005cb23) list_single_graphic_2heading_pane_fp_g4

0xbd12,	// (0x0005eb25) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbd12,	// (0x0005eb25) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb66,	// (0x00062979) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb66,	// (0x00062979) list_single_graphic_2heading_pane_fp_g

0x3f8f,	// (0x00056da2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3f8f,	// (0x00056da2) list_single_graphic_2heading_pane_fp_t1

0x3ea0,	// (0x00056cb3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3ea0,	// (0x00056cb3) list_single_graphic_2heading_pane_fp_t2

0x3fa5,	// (0x00056db8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3fa5,	// (0x00056db8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc48,	// (0x00062a5b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc48,	// (0x00062a5b) list_single_graphic_2heading_pane_fp_t

0xb6f0,	// (0x0005e503) fep_hwr_write_pane_g5_ParamLimits

0xb6f0,	// (0x0005e503) fep_hwr_write_pane_g5

0xb6fc,	// (0x0005e50f) fep_hwr_write_pane_g6_ParamLimits

0xb6fc,	// (0x0005e50f) fep_hwr_write_pane_g6

0xbfde,	// (0x0005edf1) eswt_shell_pane_ParamLimits

0x8eb1,	// (0x0005bcc4) bg_popup_window_pane_cp18_ParamLimits

0xc00f,	// (0x0005ee22) heading_pane_cp70

0xc110,	// (0x0005ef23) popup_eswt_tasktip_window_t1_ParamLimits

0x896a,	// (0x0005b77d) aid_touch_tab_arrow_left

0x8976,	// (0x0005b789) aid_touch_tab_arrow_right

0x50fa,	// (0x00057f0d) title_pane_g3_ParamLimits

0x50fa,	// (0x00057f0d) title_pane_g3

0xf240,	// (0x00062053) set_value_pane_g1

0x697a,	// (0x0005978d) popup_toolbar_trans_pane_ParamLimits

0xc25e,	// (0x0005f071) aid_size_cell_tb_trans_pane_ParamLimits

0xf281,	// (0x00062094) bg_tb_trans_pane_ParamLimits

0xc270,	// (0x0005f083) grid_tb_trans_pane_ParamLimits

0xed72,	// (0x00061b85) cont_note_pane_ParamLimits

0xed72,	// (0x00061b85) cont_note_pane

0xeffc,	// (0x00061e0f) cont_snote2_single_text_pane_ParamLimits

0xeffc,	// (0x00061e0f) cont_snote2_single_text_pane

0xeffc,	// (0x00061e0f) cont_snote2_single_graphic_pane_ParamLimits

0xeffc,	// (0x00061e0f) cont_snote2_single_graphic_pane

0x94a3,	// (0x0005c2b6) cont_note_wait_pane_ParamLimits

0x94a3,	// (0x0005c2b6) cont_note_wait_pane

0x94a3,	// (0x0005c2b6) cont_note_image_pane_ParamLimits

0x94a3,	// (0x0005c2b6) cont_note_image_pane

0xc318,	// (0x0005f12b) popup_note2_window_g1_ParamLimits

0xc318,	// (0x0005f12b) popup_note2_window_g1

0xc349,	// (0x0005f15c) popup_note2_window_t1_ParamLimits

0xc349,	// (0x0005f15c) popup_note2_window_t1

0xc38e,	// (0x0005f1a1) popup_note2_window_t2_ParamLimits

0xc38e,	// (0x0005f1a1) popup_note2_window_t2

0xc3d3,	// (0x0005f1e6) popup_note2_window_t3_ParamLimits

0xc3d3,	// (0x0005f1e6) popup_note2_window_t3

0xc418,	// (0x0005f22b) popup_note2_window_t4_ParamLimits

0xc418,	// (0x0005f22b) popup_note2_window_t4

0xedf6,	// (0x00061c09) popup_note2_window_t5_ParamLimits

0xedf6,	// (0x00061c09) popup_note2_window_t5

0x0004,

0xfc54,	// (0x00062a67) popup_note2_window_t_ParamLimits

0xfc54,	// (0x00062a67) popup_note2_window_t

0xc447,	// (0x0005f25a) popup_note2_image_window_g1_ParamLimits

0xc447,	// (0x0005f25a) popup_note2_image_window_g1

0xc453,	// (0x0005f266) popup_note2_image_window_g2_ParamLimits

0xc453,	// (0x0005f266) popup_note2_image_window_g2

0x0001,

0xfc5f,	// (0x00062a72) popup_note2_image_window_g_ParamLimits

0xfc5f,	// (0x00062a72) popup_note2_image_window_g

0xc465,	// (0x0005f278) popup_note2_image_window_t1_ParamLimits

0xc465,	// (0x0005f278) popup_note2_image_window_t1

0xc47d,	// (0x0005f290) popup_note2_image_window_t2_ParamLimits

0xc47d,	// (0x0005f290) popup_note2_image_window_t2

0xc495,	// (0x0005f2a8) popup_note2_image_window_t3_ParamLimits

0xc495,	// (0x0005f2a8) popup_note2_image_window_t3

0x0002,

0xfc64,	// (0x00062a77) popup_note2_image_window_t_ParamLimits

0xfc64,	// (0x00062a77) popup_note2_image_window_t

0x94b1,	// (0x0005c2c4) popup_note2_wait_window_g1_ParamLimits

0x94b1,	// (0x0005c2c4) popup_note2_wait_window_g1

0xc4b1,	// (0x0005f2c4) popup_note2_wait_window_g2_ParamLimits

0xc4b1,	// (0x0005f2c4) popup_note2_wait_window_g2

0x94c9,	// (0x0005c2dc) popup_note2_wait_window_g3_ParamLimits

0x94c9,	// (0x0005c2dc) popup_note2_wait_window_g3

0x0002,

0xfc6b,	// (0x00062a7e) popup_note2_wait_window_g_ParamLimits

0xfc6b,	// (0x00062a7e) popup_note2_wait_window_g

0xc4bd,	// (0x0005f2d0) popup_note2_wait_window_t1_ParamLimits

0xc4bd,	// (0x0005f2d0) popup_note2_wait_window_t1

0xc4db,	// (0x0005f2ee) popup_note2_wait_window_t2_ParamLimits

0xc4db,	// (0x0005f2ee) popup_note2_wait_window_t2

0xc4f9,	// (0x0005f30c) popup_note2_wait_window_t3_ParamLimits

0xc4f9,	// (0x0005f30c) popup_note2_wait_window_t3

0xc50b,	// (0x0005f31e) popup_note2_wait_window_t4_ParamLimits

0xc50b,	// (0x0005f31e) popup_note2_wait_window_t4

0x0003,

0xfc72,	// (0x00062a85) popup_note2_wait_window_t_ParamLimits

0xfc72,	// (0x00062a85) popup_note2_wait_window_t

0xc51d,	// (0x0005f330) wait_bar2_pane_ParamLimits

0xc51d,	// (0x0005f330) wait_bar2_pane

0xc535,	// (0x0005f348) popup_snote2_single_text_window_g1_ParamLimits

0xc535,	// (0x0005f348) popup_snote2_single_text_window_g1

0xc55d,	// (0x0005f370) popup_snote2_single_text_window_t1_ParamLimits

0xc55d,	// (0x0005f370) popup_snote2_single_text_window_t1

0xc5a9,	// (0x0005f3bc) popup_snote2_single_text_window_t2_ParamLimits

0xc5a9,	// (0x0005f3bc) popup_snote2_single_text_window_t2

0xc5f5,	// (0x0005f408) popup_snote2_single_text_window_t3_ParamLimits

0xc5f5,	// (0x0005f408) popup_snote2_single_text_window_t3

0xc636,	// (0x0005f449) popup_snote2_single_text_window_t4_ParamLimits

0xc636,	// (0x0005f449) popup_snote2_single_text_window_t4

0xc66c,	// (0x0005f47f) popup_snote2_single_text_window_t5_ParamLimits

0xc66c,	// (0x0005f47f) popup_snote2_single_text_window_t5

0x0004,

0xfc7b,	// (0x00062a8e) popup_snote2_single_text_window_t_ParamLimits

0xfc7b,	// (0x00062a8e) popup_snote2_single_text_window_t

0xc697,	// (0x0005f4aa) popup_snote2_single_graphic_window_g1_ParamLimits

0xc697,	// (0x0005f4aa) popup_snote2_single_graphic_window_g1

0xc6bf,	// (0x0005f4d2) popup_snote2_single_graphic_window_g2_ParamLimits

0xc6bf,	// (0x0005f4d2) popup_snote2_single_graphic_window_g2

0x0001,

0xfc86,	// (0x00062a99) popup_snote2_single_graphic_window_g_ParamLimits

0xfc86,	// (0x00062a99) popup_snote2_single_graphic_window_g

0xc6e7,	// (0x0005f4fa) popup_snote2_single_graphic_window_t1_ParamLimits

0xc6e7,	// (0x0005f4fa) popup_snote2_single_graphic_window_t1

0xc733,	// (0x0005f546) popup_snote2_single_graphic_window_t2_ParamLimits

0xc733,	// (0x0005f546) popup_snote2_single_graphic_window_t2

0xc5f5,	// (0x0005f408) popup_snote2_single_graphic_window_t3_ParamLimits

0xc5f5,	// (0x0005f408) popup_snote2_single_graphic_window_t3

0xc636,	// (0x0005f449) popup_snote2_single_graphic_window_t4_ParamLimits

0xc636,	// (0x0005f449) popup_snote2_single_graphic_window_t4

0xc66c,	// (0x0005f47f) popup_snote2_single_graphic_window_t5_ParamLimits

0xc66c,	// (0x0005f47f) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8b,	// (0x00062a9e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8b,	// (0x00062a9e) popup_snote2_single_graphic_window_t

0xb163,	// (0x0005df76) clock_nsta_pane_cp2_t1

0xb163,	// (0x0005df76) clock_nsta_pane_cp2_t2

0x0001,

0xfa9f,	// (0x000628b2) clock_nsta_pane_cp2_t

0x3a18,	// (0x0005682b) form_field_data_wide_pane_g1_ParamLimits

0xf28f,	// (0x000620a2) form_field_data_wide_pane_g2_ParamLimits

0xf28f,	// (0x000620a2) form_field_data_wide_pane_g2

0xf29b,	// (0x000620ae) form_field_data_wide_pane_g3_ParamLimits

0xf29b,	// (0x000620ae) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0006246e) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0006246e) form_field_data_wide_pane_g

0xb03e,	// (0x0005de51) grid_touch_3_pane_ParamLimits

0xb03e,	// (0x0005de51) grid_touch_3_pane

0xc77f,	// (0x0005f592) cell_touch_3_pane_ParamLimits

0xc77f,	// (0x0005f592) cell_touch_3_pane

0xb65f,	// (0x0005e472) cell_touch_3_pane_g1

0xb65f,	// (0x0005e472) cell_touch_3_pane_g2

0x0001,

0xfb24,	// (0x00062937) cell_touch_3_pane_g

0xee4e,	// (0x00061c61) cont_query_data_pane

0xee56,	// (0x00061c69) cont_query_data_pane_cp1

0xc7b2,	// (0x0005f5c5) button_value_adjust_pane_cp7

0xc7ba,	// (0x0005f5cd) query_popup_pane_cp3

0x31f8,	// (0x0005600b) bg_popup_sub_pane_cp22_ParamLimits

0x5f8d,	// (0x00058da0) navi_navi_volume_pane_cp2

0x5fa8,	// (0x00058dbb) popup_side_volume_key_window_g2

0x5fb7,	// (0x00058dca) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00062504) popup_side_volume_key_window_g

0x5fd4,	// (0x00058de7) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0006250b) popup_side_volume_key_window_t

0x8348,	// (0x0005b15b) popup_side_volume_key_window_ParamLimits

0x5643,	// (0x00058456) list_double_graphic_pane_g4_ParamLimits

0x5643,	// (0x00058456) list_double_graphic_pane_g4

0x9c46,	// (0x0005ca59) list_single_2heading_msg_pane_ParamLimits

0x9c46,	// (0x0005ca59) list_single_2heading_msg_pane

0x9d94,	// (0x0005cba7) list_single_2heading_msg_pane_g1_ParamLimits

0x9d94,	// (0x0005cba7) list_single_2heading_msg_pane_g1

0x9da0,	// (0x0005cbb3) list_single_2heading_msg_pane_g2_ParamLimits

0x9da0,	// (0x0005cbb3) list_single_2heading_msg_pane_g2

0x9dac,	// (0x0005cbbf) list_single_2heading_msg_pane_g3_ParamLimits

0x9dac,	// (0x0005cbbf) list_single_2heading_msg_pane_g3

0x9db8,	// (0x0005cbcb) list_single_2heading_msg_pane_g4_ParamLimits

0x9db8,	// (0x0005cbcb) list_single_2heading_msg_pane_g4

0x0003,

0xfc96,	// (0x00062aa9) list_single_2heading_msg_pane_g_ParamLimits

0xfc96,	// (0x00062aa9) list_single_2heading_msg_pane_g

0x7460,	// (0x0005a273) list_single_2heading_msg_pane_t1_ParamLimits

0x7460,	// (0x0005a273) list_single_2heading_msg_pane_t1

0x7488,	// (0x0005a29b) list_single_2heading_msg_pane_t2_ParamLimits

0x7488,	// (0x0005a29b) list_single_2heading_msg_pane_t2

0x74b7,	// (0x0005a2ca) list_single_2heading_msg_pane_t3_ParamLimits

0x74b7,	// (0x0005a2ca) list_single_2heading_msg_pane_t3

0x4213,	// (0x00057026) list_single_2heading_msg_pane_t4_ParamLimits

0x4213,	// (0x00057026) list_single_2heading_msg_pane_t4

0x0003,

0xfc9f,	// (0x00062ab2) list_single_2heading_msg_pane_t_ParamLimits

0xfc9f,	// (0x00062ab2) list_single_2heading_msg_pane_t

0xebed,	// (0x00061a00) title_pane_g4_ParamLimits

0xebed,	// (0x00061a00) title_pane_g4

0x5bdc,	// (0x000589ef) title_pane_stacon_g3_ParamLimits

0x5bdc,	// (0x000589ef) title_pane_stacon_g3

0xc2db,	// (0x0005f0ee) list_single_2graphic_im_pane_g4_ParamLimits

0xc2db,	// (0x0005f0ee) list_single_2graphic_im_pane_g4

0xa101,	// (0x0005cf14) popup_side_volume_key_window_cp

0xa94e,	// (0x0005d761) main_idle_act2_pane_t1

0x6a7e,	// (0x00059891) toolbar_button_pane_g10

0x5457,	// (0x0005826a) popup_toolbar_window_cp1

0xb154,	// (0x0005df67) clock_nsta_pane_cp_t1

0xb154,	// (0x0005df67) clock_nsta_pane_cp_t2

0x0001,

0xfa9a,	// (0x000628ad) clock_nsta_pane_cp_t

0x5f8d,	// (0x00058da0) navi_navi_volume_pane_cp2_ParamLimits

0x5f9c,	// (0x00058daf) popup_side_volume_key_window_g1_ParamLimits

0x5fa8,	// (0x00058dbb) popup_side_volume_key_window_g2_ParamLimits

0x5fb7,	// (0x00058dca) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00062504) popup_side_volume_key_window_g_ParamLimits

0x7004,	// (0x00059e17) fep_hwr_aid_pane

0x70ad,	// (0x00059ec0) bg_fep_hwr_top_pane_g4_ParamLimits

0xb6c0,	// (0x0005e4d3) fep_hwr_top_pane_g1_ParamLimits

0xb6d2,	// (0x0005e4e5) fep_hwr_top_pane_g2_ParamLimits

0x70cd,	// (0x00059ee0) fep_hwr_top_pane_g3_ParamLimits

0xfaef,	// (0x00062902) fep_hwr_top_pane_g_ParamLimits

0x70e2,	// (0x00059ef5) fep_hwr_top_text_pane_ParamLimits

0x9eb6,	// (0x0005ccc9) aid_touch_tab_arrow_arrow_2

0x9ebf,	// (0x0005ccd2) aid_touch_tab_arrow_left_2

0x7018,	// (0x00059e2b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x704f,	// (0x00059e62) fep_hwr_prediction_pane

0xb828,	// (0x0005e63b) fep_vkb_prediction_pane

0xb92e,	// (0x0005e741) fep_vkb_side_pane_g3_ParamLimits

0xb92e,	// (0x0005e741) fep_vkb_side_pane_g3

0x7271,	// (0x0005a084) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x72e2,	// (0x0005a0f5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x72ef,	// (0x0005a102) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9e,	// (0x000629b1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x74f0,	// (0x0005a303) fep_hwr_prediction_pane_g1

0x74fa,	// (0x0005a30d) fep_hwr_prediction_pane_g2

0x7502,	// (0x0005a315) fep_hwr_prediction_pane_g3

0x750a,	// (0x0005a31d) fep_hwr_prediction_pane_g4

0x0003,

0xfca8,	// (0x00062abb) fep_hwr_prediction_pane_g

0xc7e1,	// (0x0005f5f4) fep_vkb_prediction_pane_g1

0xc7eb,	// (0x0005f5fe) fep_vkb_prediction_pane_g2

0xc7f3,	// (0x0005f606) fep_vkb_prediction_pane_g3

0xc7fb,	// (0x0005f60e) fep_vkb_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00062ac4) fep_vkb_prediction_pane_g

0x6dce,	// (0x00059be1) slider_set_pane_g3

0x6de2,	// (0x00059bf5) slider_set_pane_g4

0x6dfa,	// (0x00059c0d) slider_set_pane_g5

0x6dce,	// (0x00059be1) slider_set_pane_g6

0x6e10,	// (0x00059c23) slider_set_pane_g7

0xa587,	// (0x0005d39a) slider_form_pane_g3

0xa590,	// (0x0005d3a3) slider_form_pane_g4

0xa598,	// (0x0005d3ab) slider_form_pane_g5

0xa587,	// (0x0005d39a) slider_form_pane_g6

0xa5a0,	// (0x0005d3b3) slider_form_pane_g7

0xac12,	// (0x0005da25) slider_set_pane_vc_g3

0xac1b,	// (0x0005da2e) slider_set_pane_vc_g4

0xac24,	// (0x0005da37) slider_set_pane_vc_g5

0xac12,	// (0x0005da25) slider_set_pane_vc_g6

0xac2d,	// (0x0005da40) slider_set_pane_vc_g7

0xae03,	// (0x0005dc16) slider_form_pane_vc_g1

0xae0c,	// (0x0005dc1f) slider_form_pane_vc_g2

0xae15,	// (0x0005dc28) slider_form_pane_vc_g3

0xae03,	// (0x0005dc16) slider_form_pane_vc_g4

0xae1e,	// (0x0005dc31) slider_form_pane_vc_g5

0x0004,

0xfa6c,	// (0x0006287f) slider_form_pane_vc_g

0x4e6b,	// (0x00057c7e) main_idle_act3_pane

0xc803,	// (0x0005f616) ai3_links_pane

0xc80c,	// (0x0005f61f) popup_ai3_data_window_ParamLimits

0xc80c,	// (0x0005f61f) popup_ai3_data_window

0xebcf,	// (0x000619e2) grid_ai3_links_pane

0xc82a,	// (0x0005f63d) cell_ai3_links_pane_ParamLimits

0xc82a,	// (0x0005f63d) cell_ai3_links_pane

0xc844,	// (0x0005f657) bg_popup_sub_pane_cp11

0xc851,	// (0x0005f664) cell_ai3_links_pane_g1

0xebcf,	// (0x000619e2) bg_popup_sub_pane_cp12

0xc876,	// (0x0005f689) heading_ai3_data_pane

0xc87e,	// (0x0005f691) list_ai3_gene_pane

0xc88a,	// (0x0005f69d) popup_ai3_data_window_g1

0xc892,	// (0x0005f6a5) heading_ai3_data_pane_g1

0xc89a,	// (0x0005f6ad) heading_ai3_data_pane_t1

0xc8a8,	// (0x0005f6bb) list_double_ai3_gene_pane_ParamLimits

0xc8a8,	// (0x0005f6bb) list_double_ai3_gene_pane

0xc8b5,	// (0x0005f6c8) list_single_ai3_gene_pane_ParamLimits

0xc8b5,	// (0x0005f6c8) list_single_ai3_gene_pane

0xb624,	// (0x0005e437) list_highlight_pane_cp7_ParamLimits

0xb624,	// (0x0005e437) list_highlight_pane_cp7

0xc8c2,	// (0x0005f6d5) list_single_a13_gene_pane_t1_ParamLimits

0xc8c2,	// (0x0005f6d5) list_single_a13_gene_pane_t1

0xc8d9,	// (0x0005f6ec) list_single_ai3_gene_pane_g1

0xc8e2,	// (0x0005f6f5) list_single_ai3_gene_pane_g2

0x0001,

0xfcba,	// (0x00062acd) list_single_ai3_gene_pane_g

0xc8ea,	// (0x0005f6fd) list_double_ai3_gene_pane_g1_ParamLimits

0xc8ea,	// (0x0005f6fd) list_double_ai3_gene_pane_g1

0xc8f6,	// (0x0005f709) list_double_ai3_gene_pane_t1_ParamLimits

0xc8f6,	// (0x0005f709) list_double_ai3_gene_pane_t1

0xc912,	// (0x0005f725) list_double_ai3_gene_pane_t2_ParamLimits

0xc912,	// (0x0005f725) list_double_ai3_gene_pane_t2

0xc927,	// (0x0005f73a) list_double_ai3_gene_pane_t3_ParamLimits

0xc927,	// (0x0005f73a) list_double_ai3_gene_pane_t3

0x0002,

0xfcbf,	// (0x00062ad2) list_double_ai3_gene_pane_t_ParamLimits

0xfcbf,	// (0x00062ad2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4209,	// (0x0005701c) aid_size_min_col_2

0xc7cb,	// (0x0005f5de) aid_size_min_msg_ParamLimits

0xc7cb,	// (0x0005f5de) aid_size_min_msg

0xba3a,	// (0x0005e84d) fep_vkb_top_text_pane_g2_ParamLimits

0xba3a,	// (0x0005e84d) fep_vkb_top_text_pane_g2

0x0001,

0xfb1f,	// (0x00062932) fep_vkb_top_text_pane_g_ParamLimits

0xfb1f,	// (0x00062932) fep_vkb_top_text_pane_g

0x4e6b,	// (0x00057c7e) main_hc_apps_shell_pane

0xc944,	// (0x0005f757) grid_hc_apps_pane_ParamLimits

0xc944,	// (0x0005f757) grid_hc_apps_pane

0xc956,	// (0x0005f769) list_hc_apps_pane

0xc95e,	// (0x0005f771) scroll_pane_cp37_ParamLimits

0xc95e,	// (0x0005f771) scroll_pane_cp37

0xc96a,	// (0x0005f77d) cell_hc_apps_pane_ParamLimits

0xc96a,	// (0x0005f77d) cell_hc_apps_pane

0xca1e,	// (0x0005f831) cell_hc_apps_pane_g1_ParamLimits

0xca1e,	// (0x0005f831) cell_hc_apps_pane_g1

0xca4a,	// (0x0005f85d) cell_hc_apps_pane_g2_ParamLimits

0xca4a,	// (0x0005f85d) cell_hc_apps_pane_g2

0xca66,	// (0x0005f879) cell_hc_apps_pane_g3_ParamLimits

0xca66,	// (0x0005f879) cell_hc_apps_pane_g3

0x0002,

0xfcc6,	// (0x00062ad9) cell_hc_apps_pane_g_ParamLimits

0xfcc6,	// (0x00062ad9) cell_hc_apps_pane_g

0xca88,	// (0x0005f89b) cell_hc_apps_pane_t1_ParamLimits

0xca88,	// (0x0005f89b) cell_hc_apps_pane_t1

0xed72,	// (0x00061b85) grid_highlight_pane_cp10_ParamLimits

0xed72,	// (0x00061b85) grid_highlight_pane_cp10

0xcac8,	// (0x0005f8db) list_single_hc_apps_pane_ParamLimits

0xcac8,	// (0x0005f8db) list_single_hc_apps_pane

0xcb07,	// (0x0005f91a) list_single_hc_apps_pane_g1

0x9dd0,	// (0x0005cbe3) list_single_hc_apps_pane_g2

0x0001,

0xfccd,	// (0x00062ae0) list_single_hc_apps_pane_g

0x9de9,	// (0x0005cbfc) list_single_hc_apps_pane_g2_copy1

0x7512,	// (0x0005a325) list_single_hc_apps_pane_t1

0xec31,	// (0x00061a44) bg_set_opt_pane_cp_ParamLimits

0x51ac,	// (0x00057fbf) setting_slider_pane_t1_ParamLimits

0x51c5,	// (0x00057fd8) setting_slider_pane_t2_ParamLimits

0x51df,	// (0x00057ff2) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006234c) setting_slider_pane_t_ParamLimits

0x51f7,	// (0x0005800a) slider_set_pane_ParamLimits

0x6315,	// (0x00059128) control_pane_g5_ParamLimits

0x6315,	// (0x00059128) control_pane_g5

0xa3ba,	// (0x0005d1cd) slider_set_pane_g1_ParamLimits

0x6dc2,	// (0x00059bd5) slider_set_pane_g2_ParamLimits

0x6dce,	// (0x00059be1) slider_set_pane_g3_ParamLimits

0x6de2,	// (0x00059bf5) slider_set_pane_g4_ParamLimits

0x6dfa,	// (0x00059c0d) slider_set_pane_g5_ParamLimits

0x6dce,	// (0x00059be1) slider_set_pane_g6_ParamLimits

0x6e10,	// (0x00059c23) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00062757) slider_set_pane_g_ParamLimits

0x8421,	// (0x0005b234) navi_icon_text_pane_ParamLimits

0x8929,	// (0x0005b73c) aid_fill_nsta_2_ParamLimits

0x896a,	// (0x0005b77d) aid_touch_tab_arrow_left_ParamLimits

0x8976,	// (0x0005b789) aid_touch_tab_arrow_right_ParamLimits

0x89e2,	// (0x0005b7f5) clock_nsta_pane_ParamLimits

0x9e98,	// (0x0005ccab) navi_icon_pane_g1_ParamLimits

0x9ea4,	// (0x0005ccb7) navi_text_pane_t1_ParamLimits

0xb271,	// (0x0005e084) navi_icon_text_pane_g1_ParamLimits

0xb27d,	// (0x0005e090) navi_icon_text_pane_t1_ParamLimits

0xcb07,	// (0x0005f91a) list_single_hc_apps_pane_g1_ParamLimits

0x9dd0,	// (0x0005cbe3) list_single_hc_apps_pane_g2_ParamLimits

0xfccd,	// (0x00062ae0) list_single_hc_apps_pane_g_ParamLimits

0x9de9,	// (0x0005cbfc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7512,	// (0x0005a325) list_single_hc_apps_pane_t1_ParamLimits

0x4fe0,	// (0x00057df3) popup_toolbar2_fixed_window_ParamLimits

0x4fe0,	// (0x00057df3) popup_toolbar2_fixed_window

0x6970,	// (0x00059783) popup_toolbar2_float_window

0xebcf,	// (0x000619e2) bg_popup_sub_pane_cp27

0xcb20,	// (0x0005f933) grid_toolbar2_float_pane

0xebcf,	// (0x000619e2) bg_popup_sub_pane_cp26

0xcb20,	// (0x0005f933) grid_toolbar2_fixed_pane

0xcb28,	// (0x0005f93b) cell_toolbar2_fixed_pane_ParamLimits

0xcb28,	// (0x0005f93b) cell_toolbar2_fixed_pane

0xcb38,	// (0x0005f94b) cell_toolbar2_fixed_pane_g1

0xcb41,	// (0x0005f954) toolbar2_fixed_button_pane

0x8e25,	// (0x0005bc38) toolbar2_fixed_button_pane_g1

0x8e35,	// (0x0005bc48) toolbar2_fixed_button_pane_g2

0x8e2d,	// (0x0005bc40) toolbar2_fixed_button_pane_g3

0x8e45,	// (0x0005bc58) toolbar2_fixed_button_pane_g4

0x8e3d,	// (0x0005bc50) toolbar2_fixed_button_pane_g5

0x8e4d,	// (0x0005bc60) toolbar2_fixed_button_pane_g6

0x8e55,	// (0x0005bc68) toolbar2_fixed_button_pane_g7

0x8e65,	// (0x0005bc78) toolbar2_fixed_button_pane_g8

0x8e5d,	// (0x0005bc70) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00062659) toolbar2_fixed_button_pane_g

0xcb49,	// (0x0005f95c) cell_toolbar2_float_pane_ParamLimits

0xcb49,	// (0x0005f95c) cell_toolbar2_float_pane

0xcb5a,	// (0x0005f96d) cell_toolbar2_float_pane_g1

0xcb41,	// (0x0005f954) toolbar2_fixed_button_pane_cp

0xb796,	// (0x0005e5a9) fep_vkb_accented_list_pane_ParamLimits

0xb796,	// (0x0005e5a9) fep_vkb_accented_list_pane

0x7251,	// (0x0005a064) bg_popup_fep_shadow_pane_g9

0x85b0,	// (0x0005b3c3) bg_popup_fep_shadow_pane_cp3

0xf3a4,	// (0x000621b7) list_accented_list_pane

0xcb63,	// (0x0005f976) list_single_accented_list_pane_ParamLimits

0xcb63,	// (0x0005f976) list_single_accented_list_pane

0x85b0,	// (0x0005b3c3) list_highlight_pane_cp10

0xcb74,	// (0x0005f987) list_single_accented_list_pane_t1

0x68b6,	// (0x000596c9) popup_slider_window_ParamLimits

0x68b6,	// (0x000596c9) popup_slider_window

0xc7c2,	// (0x0005f5d5) aid_indentation_list_msg

0xcc44,	// (0x0005fa57) bg_popup_window_pane_cp19

0xccb0,	// (0x0005fac3) popup_slider_window_g1

0xcccc,	// (0x0005fadf) popup_slider_window_g2

0xcce8,	// (0x0005fafb) popup_slider_window_g3

0x0005,

0xfcd2,	// (0x00062ae5) popup_slider_window_g

0xcd4e,	// (0x0005fb61) popup_slider_window_t1

0xcdc2,	// (0x0005fbd5) small_volume_slider_vertical_pane

0xb65f,	// (0x0005e472) small_volume_slider_vertical_pane_g1

0xb65f,	// (0x0005e472) small_volume_slider_vertical_pane_g2

0xcdde,	// (0x0005fbf1) small_volume_slider_vertical_pane_g3

0x0002,

0xfce4,	// (0x00062af7) small_volume_slider_vertical_pane_g

0x4d8e,	// (0x00057ba1) area_side_right_pane_ParamLimits

0x4d8e,	// (0x00057ba1) area_side_right_pane

0x7540,	// (0x0005a353) aid_size_side_button_ParamLimits

0x7540,	// (0x0005a353) aid_size_side_button

0x7554,	// (0x0005a367) grid_sctrl_middle_pane_ParamLimits

0x7554,	// (0x0005a367) grid_sctrl_middle_pane

0x7573,	// (0x0005a386) sctrl_sk_bottom_pane

0x7584,	// (0x0005a397) sctrl_sk_top_pane

0x7596,	// (0x0005a3a9) aid_touch_sctrl_top

0x75a3,	// (0x0005a3b6) bg_sctrl_sk_pane_ParamLimits

0x75a3,	// (0x0005a3b6) bg_sctrl_sk_pane

0x75b1,	// (0x0005a3c4) sctrl_sk_top_pane_g1

0x75be,	// (0x0005a3d1) sctrl_sk_top_pane_t1

0x7596,	// (0x0005a3a9) aid_touch_sctrl_bottom

0x75a3,	// (0x0005a3b6) bg_sctrl_sk_pane_cp_ParamLimits

0x75a3,	// (0x0005a3b6) bg_sctrl_sk_pane_cp

0x75d9,	// (0x0005a3ec) sctrl_sk_bottom_pane_g1

0x75be,	// (0x0005a3d1) sctrl_sk_bottom_pane_t1

0x75e2,	// (0x0005a3f5) cell_sctrl_middle_pane_ParamLimits

0x75e2,	// (0x0005a3f5) cell_sctrl_middle_pane

0x75ff,	// (0x0005a412) aid_touch_sctrl_middle_ParamLimits

0x75ff,	// (0x0005a412) aid_touch_sctrl_middle

0x7611,	// (0x0005a424) bg_sctrl_middle_pane_ParamLimits

0x7611,	// (0x0005a424) bg_sctrl_middle_pane

0x7271,	// (0x0005a084) cell_sctrl_middle_pane_g1_ParamLimits

0x7271,	// (0x0005a084) cell_sctrl_middle_pane_g1

0x761f,	// (0x0005a432) cell_sctrl_middle_pane_g2_ParamLimits

0x761f,	// (0x0005a432) cell_sctrl_middle_pane_g2

0x0001,

0xfcf0,	// (0x00062b03) cell_sctrl_middle_pane_g_ParamLimits

0xfcf0,	// (0x00062b03) cell_sctrl_middle_pane_g

0x8e25,	// (0x0005bc38) bg_sctrl_middle_pane_g1

0x8e2d,	// (0x0005bc40) bg_sctrl_middle_pane_g2

0x8e35,	// (0x0005bc48) bg_sctrl_middle_pane_g3

0x8e3d,	// (0x0005bc50) bg_sctrl_middle_pane_g4

0x8e45,	// (0x0005bc58) bg_sctrl_middle_pane_g5

0x8e4d,	// (0x0005bc60) bg_sctrl_middle_pane_g6

0x8e55,	// (0x0005bc68) bg_sctrl_middle_pane_g7

0x8e5d,	// (0x0005bc70) bg_sctrl_middle_pane_g8

0x0007,

0xfcf5,	// (0x00062b08) bg_sctrl_middle_pane_g

0x8e65,	// (0x0005bc78) bg_sctrl_middle_pane_g8_copy1

0x8e25,	// (0x0005bc38) bg_sctrl_sk_pane_g1

0x8e35,	// (0x0005bc48) bg_sctrl_sk_pane_g2

0x8e2d,	// (0x0005bc40) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00062659) bg_sctrl_sk_pane_g

0xf1ba,	// (0x00061fcd) aid_size_touch_scroll_bar

0x8e45,	// (0x0005bc58) bg_sctrl_sk_pane_g4

0x8e3d,	// (0x0005bc50) bg_sctrl_sk_pane_g5

0x8e4d,	// (0x0005bc60) bg_sctrl_sk_pane_g6

0x8e55,	// (0x0005bc68) bg_sctrl_sk_pane_g7

0x8e65,	// (0x0005bc78) bg_sctrl_sk_pane_g8

0x8e5d,	// (0x0005bc70) bg_sctrl_sk_pane_g9

0x64cb,	// (0x000592de) popup_fep_china_hwr2_fs_candidate_window

0x64d5,	// (0x000592e8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x64d5,	// (0x000592e8) popup_fep_china_hwr2_fs_control_window

0x7271,	// (0x0005a084) sctrl_sk_top_pane_g2

0x0001,

0xfceb,	// (0x00062afe) sctrl_sk_top_pane_g

0xcde7,	// (0x0005fbfa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcde7,	// (0x0005fbfa) aid_fep_china_hwr2_fs_cell

0xcdfa,	// (0x0005fc0d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcdfa,	// (0x0005fc0d) bg_popup_fep_shadow_pane_cp4

0xce13,	// (0x0005fc26) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce13,	// (0x0005fc26) bg_popup_fep_shadow_pane_cp5

0xce25,	// (0x0005fc38) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce25,	// (0x0005fc38) popup_fep_china_hwr2_fs_control_bar_grid

0xce35,	// (0x0005fc48) popup_fep_china_hwr2_fs_control_funtion_grid

0xce3d,	// (0x0005fc50) aid_fep_china_hwr2_fs_candi_cell

0xebcf,	// (0x000619e2) bg_popup_fep_shadow_pane_cp6

0xce47,	// (0x0005fc5a) popup_fep_china_hwr2_fs_candidate_grid

0xce51,	// (0x0005fc64) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xce51,	// (0x0005fc64) cell_fep_china_hwr2_fs_funtion_grid

0xb65f,	// (0x0005e472) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xce69,	// (0x0005fc7c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xce69,	// (0x0005fc7c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xce77,	// (0x0005fc8a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xce77,	// (0x0005fc8a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd06,	// (0x00062b19) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd06,	// (0x00062b19) cell_fep_china_hwr2_fs_funtion_grid_g

0xce8d,	// (0x0005fca0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xce8d,	// (0x0005fca0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcea2,	// (0x0005fcb5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcea2,	// (0x0005fcb5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0b,	// (0x00062b1e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0b,	// (0x00062b1e) cell_fep_china_hwr2_fs_funtion_grid_t

0xcebe,	// (0x0005fcd1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcec6,	// (0x0005fcd9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcece,	// (0x0005fce1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd10,	// (0x00062b23) popup_fep_china_hwr2_fs_control_bar_grid_g

0xced6,	// (0x0005fce9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xced6,	// (0x0005fce9) cell_fep_china_hwr2_fs_candidate_grid

0xcef5,	// (0x0005fd08) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcefd,	// (0x0005fd10) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb65f,	// (0x0005e472) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb65f,	// (0x0005e472) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb24,	// (0x00062937) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf05,	// (0x0005fd18) cell_fep_china_hwr2_fs_candidate_grid_t1

0x89f5,	// (0x0005b808) clock_nsta_pane_cp_24_ParamLimits

0x89f5,	// (0x0005b808) clock_nsta_pane_cp_24

0x8a75,	// (0x0005b888) indicator_nsta_pane_cp_24_ParamLimits

0x8a75,	// (0x0005b888) indicator_nsta_pane_cp_24

0x9b26,	// (0x0005c939) heading_pane_g1

0x0001,

0xf8ab,	// (0x000626be) heading_pane_g

0xa795,	// (0x0005d5a8) grid_sct_catagory_button_pane

0xa7c7,	// (0x0005d5da) scroll_pane_cp5_ParamLimits

0xb2bf,	// (0x0005e0d2) button_value_adjust_pane_cp5_ParamLimits

0xb2bf,	// (0x0005e0d2) button_value_adjust_pane_cp5

0xb3a4,	// (0x0005e1b7) form2_midp_time_pane_ParamLimits

0xcf13,	// (0x0005fd26) cell_sct_catagory_button_pane_ParamLimits

0xcf13,	// (0x0005fd26) cell_sct_catagory_button_pane

0xb624,	// (0x0005e437) bg_button_pane_cp01_ParamLimits

0xb624,	// (0x0005e437) bg_button_pane_cp01

0xb65f,	// (0x0005e472) cell_sct_catagory_button_pane_g1

0x68f7,	// (0x0005970a) popup_tb_extension_window

0xcf25,	// (0x0005fd38) aid_size_cell_ext_ParamLimits

0xcf25,	// (0x0005fd38) aid_size_cell_ext

0xed72,	// (0x00061b85) bg_tb_trans_pane_cp1_ParamLimits

0xed72,	// (0x00061b85) bg_tb_trans_pane_cp1

0xcf45,	// (0x0005fd58) grid_tb_ext_pane_ParamLimits

0xcf45,	// (0x0005fd58) grid_tb_ext_pane

0xcf73,	// (0x0005fd86) cell_tb_ext_pane_ParamLimits

0xcf73,	// (0x0005fd86) cell_tb_ext_pane

0xcf8a,	// (0x0005fd9d) cell_tb_ext_pane_g1_ParamLimits

0xcf8a,	// (0x0005fd9d) cell_tb_ext_pane_g1

0xcfa7,	// (0x0005fdba) cell_tb_ext_pane_t1

0xed72,	// (0x00061b85) list_highlight_pane_cp11_ParamLimits

0xed72,	// (0x00061b85) list_highlight_pane_cp11

0x4fff,	// (0x00057e12) popup_uni_indicator_window_ParamLimits

0x4fff,	// (0x00057e12) popup_uni_indicator_window

0xf281,	// (0x00062094) bg_popup_sub_pane_cp14

0xcfc2,	// (0x0005fdd5) list_uniindi_pane

0xcfce,	// (0x0005fde1) uniindi_top_pane

0xed72,	// (0x00061b85) bg_uniindi_top_pane

0xcfef,	// (0x0005fe02) uniindi_top_pane_g1

0xd005,	// (0x0005fe18) uniindi_top_pane_g2

0x0003,

0xfd17,	// (0x00062b2a) uniindi_top_pane_g

0xd02f,	// (0x0005fe42) uniindi_top_pane_t1

0xd05b,	// (0x0005fe6e) list_single_uniindi_pane_ParamLimits

0xd05b,	// (0x0005fe6e) list_single_uniindi_pane

0xb65f,	// (0x0005e472) bg_uniindi_top_pane_g1

0xd06e,	// (0x0005fe81) list_single_uniindi_pane_g1

0xd081,	// (0x0005fe94) list_single_uniindi_pane_t1

0x4e6b,	// (0x00057c7e) control_bg_pane

0xd0a6,	// (0x0005feb9) bg_sctrl_sk_pane_cp1

0xd0af,	// (0x0005fec2) bg_sctrl_sk_pane_cp2

0xd0b8,	// (0x0005fecb) control_bg_pane_g1

0xd0c1,	// (0x0005fed4) control_bg_pane_g2

0x0001,

0xfd20,	// (0x00062b33) control_bg_pane_g

0xb0f7,	// (0x0005df0a) cell_indicator_nsta_pane_g1_ParamLimits

0xb105,	// (0x0005df18) cell_indicator_nsta_pane_g2_ParamLimits

0xfa88,	// (0x0006289b) cell_indicator_nsta_pane_g_ParamLimits

0x3e3e,	// (0x00056c51) form2_midp_time_pane_t1_ParamLimits

0x6429,	// (0x0005923c) main_idle_act4_pane_ParamLimits

0x6429,	// (0x0005923c) main_idle_act4_pane

0x68f7,	// (0x0005970a) popup_tb_extension_window_ParamLimits

0xcf65,	// (0x0005fd78) tb_ext_find_pane_ParamLimits

0xcf65,	// (0x0005fd78) tb_ext_find_pane

0xd0ca,	// (0x0005fedd) ai_gene_pane_1_cp1

0x86fa,	// (0x0005b50d) ai_gene_pane_2_cp1

0xd0d2,	// (0x0005fee5) list_single_idle_plugin_calendar_pane

0xd0db,	// (0x0005feee) list_single_idle_plugin_notification_pane

0xd0e4,	// (0x0005fef7) list_single_idle_plugin_player_pane

0xd0ed,	// (0x0005ff00) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd0ed,	// (0x0005ff00) list_single_idle_plugin_shortcut_pane

0xd10f,	// (0x0005ff22) main_idle_act4_pane_t1

0xd121,	// (0x0005ff34) main_idle_act4_pane_t2

0x0001,

0xfd25,	// (0x00062b38) main_idle_act4_pane_t

0xd133,	// (0x0005ff46) middle_sk_idle_act4_pane_ParamLimits

0xd133,	// (0x0005ff46) middle_sk_idle_act4_pane

0xd149,	// (0x0005ff5c) popup_clock_digital_analogue_window_cp2

0xd163,	// (0x0005ff76) shortcut_wheel_idle_act4_pane_ParamLimits

0xd163,	// (0x0005ff76) shortcut_wheel_idle_act4_pane

0xb65f,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g1

0xb65f,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g2

0xb65f,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g3

0xb65f,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g4

0xb65f,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g5

0xd177,	// (0x0005ff8a) shortcut_wheel_idle_act4_pane_g6

0xd17f,	// (0x0005ff92) shortcut_wheel_idle_act4_pane_g7

0xd187,	// (0x0005ff9a) shortcut_wheel_idle_act4_pane_g8

0xd18f,	// (0x0005ffa2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2a,	// (0x00062b3d) shortcut_wheel_idle_act4_pane_g

0xb8da,	// (0x0005e6ed) middle_sk_idle_act4_pane_g1_ParamLimits

0xb8da,	// (0x0005e6ed) middle_sk_idle_act4_pane_g1

0xd1f3,	// (0x00060006) middle_sk_idle_act4_pane_g2_ParamLimits

0xd1f3,	// (0x00060006) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4d,	// (0x00062b60) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4d,	// (0x00062b60) middle_sk_idle_act4_pane_g

0xd1ff,	// (0x00060012) middle_sk_idle_act4_pane_t1_ParamLimits

0xd1ff,	// (0x00060012) middle_sk_idle_act4_pane_t1

0xd21c,	// (0x0006002f) grid_ai_shortcut_pane_ParamLimits

0xd21c,	// (0x0006002f) grid_ai_shortcut_pane

0xd235,	// (0x00060048) list_highlight_pane_cp16_ParamLimits

0xd235,	// (0x00060048) list_highlight_pane_cp16

0xd242,	// (0x00060055) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd242,	// (0x00060055) list_single_idle_plugin_shortcut_pane_g1

0xd24e,	// (0x00060061) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd24e,	// (0x00060061) list_single_idle_plugin_shortcut_pane_g2

0xd268,	// (0x0006007b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd268,	// (0x0006007b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd52,	// (0x00062b65) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd52,	// (0x00062b65) list_single_idle_plugin_shortcut_pane_g

0xd27b,	// (0x0006008e) cell_ai_shortcut_pane_ParamLimits

0xd27b,	// (0x0006008e) cell_ai_shortcut_pane

0xd29e,	// (0x000600b1) cell_ai_shortcut_pane_g1_ParamLimits

0xd29e,	// (0x000600b1) cell_ai_shortcut_pane_g1

0xd0ca,	// (0x0005fedd) ai_gene_pane_1_cp2

0xd2c0,	// (0x000600d3) ai_gene_pane_2_cp2

0xd2c8,	// (0x000600db) list_highlight_pane_cp15

0xd2d1,	// (0x000600e4) list_single_idle_plugin_calendar_pane_g1

0xd2c8,	// (0x000600db) list_highlight_pane_cp17

0xd2d9,	// (0x000600ec) list_single_idle_plugin_calendar_pane_g1_copy1

0xd2e1,	// (0x000600f4) list_single_idle_plugin_player_pane_g1

0xa9fc,	// (0x0005d80f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd59,	// (0x00062b6c) list_single_idle_plugin_player_pane_g

0xd2e9,	// (0x000600fc) list_single_idle_plugin_player_pane_t1

0xd2f7,	// (0x0006010a) list_single_idle_plugin_player_pane_t2

0xd305,	// (0x00060118) list_single_idle_plugin_player_pane_t3

0xd313,	// (0x00060126) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5e,	// (0x00062b71) list_single_idle_plugin_player_pane_t

0xd321,	// (0x00060134) wait_bar_pane_cp15

0xd329,	// (0x0006013c) grid_ai_notification_pane

0xa9fc,	// (0x0005d80f) list_single_idle_plugin_notification_pane_g1

0xd332,	// (0x00060145) cell_ai_notification_pane_ParamLimits

0xd332,	// (0x00060145) cell_ai_notification_pane

0xd33f,	// (0x00060152) cell_ai_notification_pane_g1

0xd347,	// (0x0006015a) cell_ai_notification_pane_t1

0xd355,	// (0x00060168) tb_ext_find_button_pane

0xd35d,	// (0x00060170) tb_ext_find_pane_g1

0xd365,	// (0x00060178) tb_ext_find_pane_t1

0x3198,	// (0x00055fab) tb_ext_find_button_pane_g1

0xd373,	// (0x00060186) tb_ext_find_button_pane_g2

0x0001,

0xfd67,	// (0x00062b7a) tb_ext_find_button_pane_g

0xd10f,	// (0x0005ff22) main_idle_act4_pane_t1_ParamLimits

0xd121,	// (0x0005ff34) main_idle_act4_pane_t2_ParamLimits

0xfd25,	// (0x00062b38) main_idle_act4_pane_t_ParamLimits

0xd149,	// (0x0005ff5c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd157,	// (0x0005ff6a) sat_plugin_idle_act4_pane_ParamLimits

0xd157,	// (0x0005ff6a) sat_plugin_idle_act4_pane

0xd37c,	// (0x0006018f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd37c,	// (0x0006018f) sat_plugin_idle_act4_pane_t1

0xd38f,	// (0x000601a2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd38f,	// (0x000601a2) sat_plugin_idle_act4_pane_t2

0xd3a2,	// (0x000601b5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd3a2,	// (0x000601b5) sat_plugin_idle_act4_pane_t3

0xd3b5,	// (0x000601c8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd3b5,	// (0x000601c8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6c,	// (0x00062b7f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6c,	// (0x00062b7f) sat_plugin_idle_act4_pane_t

0x4f30,	// (0x00057d43) popup_battery_window_ParamLimits

0x4f30,	// (0x00057d43) popup_battery_window

0xed72,	// (0x00061b85) bg_popup_sub_pane_cp25_ParamLimits

0xed72,	// (0x00061b85) bg_popup_sub_pane_cp25

0xd3c8,	// (0x000601db) popup_battery_window_g1_ParamLimits

0xd3c8,	// (0x000601db) popup_battery_window_g1

0xd3d4,	// (0x000601e7) popup_battery_window_t1_ParamLimits

0xd3d4,	// (0x000601e7) popup_battery_window_t1

0xd3e6,	// (0x000601f9) popup_battery_window_t2_ParamLimits

0xd3e6,	// (0x000601f9) popup_battery_window_t2

0x0001,

0xfd75,	// (0x00062b88) popup_battery_window_t_ParamLimits

0xfd75,	// (0x00062b88) popup_battery_window_t

0x85c4,	// (0x0005b3d7) midp_canvas_pane_ParamLimits

0x863c,	// (0x0005b44f) midp_keypad_pane_ParamLimits

0x863c,	// (0x0005b44f) midp_keypad_pane

0x88d7,	// (0x0005b6ea) main_midp_pane_ParamLimits

0xb172,	// (0x0005df85) signal_pane_g2_cp_ParamLimits

0xd403,	// (0x00060216) aid_size_cell_midp_keypad_ParamLimits

0xd403,	// (0x00060216) aid_size_cell_midp_keypad

0xd41d,	// (0x00060230) midp_keyp_game_grid_pane_ParamLimits

0xd41d,	// (0x00060230) midp_keyp_game_grid_pane

0xd43d,	// (0x00060250) midp_keyp_rocker_pane_ParamLimits

0xd43d,	// (0x00060250) midp_keyp_rocker_pane

0xd46c,	// (0x0006027f) midp_keyp_sk_left_pane_ParamLimits

0xd46c,	// (0x0006027f) midp_keyp_sk_left_pane

0xd4c8,	// (0x000602db) midp_keyp_sk_right_pane_ParamLimits

0xd4c8,	// (0x000602db) midp_keyp_sk_right_pane

0xebcf,	// (0x000619e2) bg_button_pane_cp03

0xd524,	// (0x00060337) midp_keyp_sk_left_pane_g1

0xebcf,	// (0x000619e2) bg_button_pane_cp04

0xd524,	// (0x00060337) midp_keyp_sk_right_pane_g1

0xb65f,	// (0x0005e472) midp_keyp_rocker_pane_g1

0xd52c,	// (0x0006033f) keyp_game_cell_pane_ParamLimits

0xd52c,	// (0x0006033f) keyp_game_cell_pane

0xebcf,	// (0x000619e2) bg_button_pane_cp02

0xd53f,	// (0x00060352) keyp_game_cell_pane_g1

0x4f7a,	// (0x00057d8d) popup_fep_vkb2_window_ParamLimits

0x4f7a,	// (0x00057d8d) popup_fep_vkb2_window

0x763d,	// (0x0005a450) aid_size_cell_vkb2_ParamLimits

0x763d,	// (0x0005a450) aid_size_cell_vkb2

0x7689,	// (0x0005a49c) popup_fep_vkb2_window_g1_ParamLimits

0x7689,	// (0x0005a49c) popup_fep_vkb2_window_g1

0x76d1,	// (0x0005a4e4) vkb2_area_bottom_pane_ParamLimits

0x76d1,	// (0x0005a4e4) vkb2_area_bottom_pane

0x7725,	// (0x0005a538) vkb2_area_keypad_pane_ParamLimits

0x7725,	// (0x0005a538) vkb2_area_keypad_pane

0x776b,	// (0x0005a57e) vkb2_area_top_pane_ParamLimits

0x776b,	// (0x0005a57e) vkb2_area_top_pane

0x77eb,	// (0x0005a5fe) vkb2_top_entry_pane_ParamLimits

0x77eb,	// (0x0005a5fe) vkb2_top_entry_pane

0x7815,	// (0x0005a628) vkb2_top_grid_left_pane_ParamLimits

0x7815,	// (0x0005a628) vkb2_top_grid_left_pane

0x7834,	// (0x0005a647) vkb2_top_grid_right_pane_ParamLimits

0x7834,	// (0x0005a647) vkb2_top_grid_right_pane

0x7853,	// (0x0005a666) vkb2_cell_keypad_pane_ParamLimits

0x7853,	// (0x0005a666) vkb2_cell_keypad_pane

0x7924,	// (0x0005a737) vkb2_area_bottom_grid_pane_ParamLimits

0x7924,	// (0x0005a737) vkb2_area_bottom_grid_pane

0x794a,	// (0x0005a75d) vkb2_area_bottom_pane_g1_ParamLimits

0x794a,	// (0x0005a75d) vkb2_area_bottom_pane_g1

0x796e,	// (0x0005a781) vkb2_area_bottom_pane_g2_ParamLimits

0x796e,	// (0x0005a781) vkb2_area_bottom_pane_g2

0x799c,	// (0x0005a7af) vkb2_area_bottom_pane_g3_ParamLimits

0x799c,	// (0x0005a7af) vkb2_area_bottom_pane_g3

0x0002,

0xfd7a,	// (0x00062b8d) vkb2_area_bottom_pane_g_ParamLimits

0xfd7a,	// (0x00062b8d) vkb2_area_bottom_pane_g

0x79fd,	// (0x0005a810) vkb2_top_cell_left_pane_ParamLimits

0x79fd,	// (0x0005a810) vkb2_top_cell_left_pane

0xd550,	// (0x00060363) vkb2_top_entry_pane_g1_ParamLimits

0xd550,	// (0x00060363) vkb2_top_entry_pane_g1

0xd55e,	// (0x00060371) vkb2_top_entry_pane_t1_ParamLimits

0xd55e,	// (0x00060371) vkb2_top_entry_pane_t1

0xd590,	// (0x000603a3) vkb2_top_entry_pane_t2_ParamLimits

0xd590,	// (0x000603a3) vkb2_top_entry_pane_t2

0xd5e3,	// (0x000603f6) vkb2_top_entry_pane_t3_ParamLimits

0xd5e3,	// (0x000603f6) vkb2_top_entry_pane_t3

0x0002,

0xfd81,	// (0x00062b94) vkb2_top_entry_pane_t_ParamLimits

0xfd81,	// (0x00062b94) vkb2_top_entry_pane_t

0x7a4a,	// (0x0005a85d) vkb2_top_grid_right_pane_g1_ParamLimits

0x7a4a,	// (0x0005a85d) vkb2_top_grid_right_pane_g1

0x7a60,	// (0x0005a873) vkb2_top_grid_right_pane_g2_ParamLimits

0x7a60,	// (0x0005a873) vkb2_top_grid_right_pane_g2

0x7a78,	// (0x0005a88b) vkb2_top_grid_right_pane_g3_ParamLimits

0x7a78,	// (0x0005a88b) vkb2_top_grid_right_pane_g3

0x7a90,	// (0x0005a8a3) vkb2_top_grid_right_pane_g4_ParamLimits

0x7a90,	// (0x0005a8a3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd88,	// (0x00062b9b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd88,	// (0x00062b9b) vkb2_top_grid_right_pane_g

0x7aa6,	// (0x0005a8b9) vkb2_top_cell_left_pane_g1

0x7abd,	// (0x0005a8d0) vkb2_cell_keypad_pane_g1_ParamLimits

0x7abd,	// (0x0005a8d0) vkb2_cell_keypad_pane_g1

0xd607,	// (0x0006041a) vkb2_cell_keypad_pane_t1_ParamLimits

0xd607,	// (0x0006041a) vkb2_cell_keypad_pane_t1

0x7acb,	// (0x0005a8de) vkb2_cell_bottom_grid_pane_ParamLimits

0x7acb,	// (0x0005a8de) vkb2_cell_bottom_grid_pane

0x7b04,	// (0x0005a917) vkb2_cell_bottom_grid_pane_g1

0xd197,	// (0x0005ffaa) aid_call2_pane_cp02

0xd19f,	// (0x0005ffb2) aid_call_pane_cp02

0xd1a7,	// (0x0005ffba) clock_digital_number_pane_cp10

0xd1af,	// (0x0005ffc2) clock_digital_number_pane_cp11

0xd1b7,	// (0x0005ffca) clock_digital_number_pane_cp12

0xd1bf,	// (0x0005ffd2) clock_digital_number_pane_cp13

0xd1c7,	// (0x0005ffda) clock_digital_separator_pane_cp10

0x3198,	// (0x00055fab) popup_clock_digital_analogue_window_cp2_g1

0x3198,	// (0x00055fab) popup_clock_digital_analogue_window_cp2_g2

0xd1cf,	// (0x0005ffe2) popup_clock_digital_analogue_window_cp2_g3

0x3198,	// (0x00055fab) popup_clock_digital_analogue_window_cp2_g4

0xd1cf,	// (0x0005ffe2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3d,	// (0x00062b50) popup_clock_digital_analogue_window_cp2_g

0xd1d7,	// (0x0005ffea) popup_clock_digital_analogue_window_cp2_t1

0xd1e5,	// (0x0005fff8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd48,	// (0x00062b5b) popup_clock_digital_analogue_window_cp2_t

0xb65f,	// (0x0005e472) clock_digital_number_pane_cp10_g1

0xb65f,	// (0x0005e472) clock_digital_number_pane_cp10_g2

0x0001,

0xfb24,	// (0x00062937) clock_digital_number_pane_cp10_g

0xb65f,	// (0x0005e472) clock_digital_separator_pane_cp10_g1

0xb65f,	// (0x0005e472) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb24,	// (0x00062937) clock_digital_separator_pane_cp10_g

0xd011,	// (0x0005fe24) uniindi_top_pane_g3

0xd022,	// (0x0005fe35) uniindi_top_pane_g4

0x78de,	// (0x0005a6f1) vkb2_row_keypad_pane_ParamLimits

0x78de,	// (0x0005a6f1) vkb2_row_keypad_pane

0x7b20,	// (0x0005a933) vkb2_cell_t_keypad_pane_ParamLimits

0x7b20,	// (0x0005a933) vkb2_cell_t_keypad_pane

0x7b30,	// (0x0005a943) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7b30,	// (0x0005a943) vkb2_cell_t_keypad_pane_cp08

0x7b45,	// (0x0005a958) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7b45,	// (0x0005a958) vkb2_cell_t_keypad_pane_cp09

0x7b59,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7b59,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp01

0x7b6a,	// (0x0005a97d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7b6a,	// (0x0005a97d) vkb2_cell_t_keypad_pane_cp02

0x7b7b,	// (0x0005a98e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7b7b,	// (0x0005a98e) vkb2_cell_t_keypad_pane_cp03

0x7b8c,	// (0x0005a99f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7b8c,	// (0x0005a99f) vkb2_cell_t_keypad_pane_cp04

0x7b9d,	// (0x0005a9b0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7b9d,	// (0x0005a9b0) vkb2_cell_t_keypad_pane_cp05

0x7bae,	// (0x0005a9c1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7bae,	// (0x0005a9c1) vkb2_cell_t_keypad_pane_cp06

0x7bc1,	// (0x0005a9d4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7bc1,	// (0x0005a9d4) vkb2_cell_t_keypad_pane_cp07

0x7bd6,	// (0x0005a9e9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7bd6,	// (0x0005a9e9) vkb2_cell_t_keypad_pane_cp10

0x7271,	// (0x0005a084) vkb2_cell_t_keypad_pane_g1

0xd61e,	// (0x00060431) vkb2_cell_t_keypad_pane_t1

0x4e6b,	// (0x00057c7e) popup_grid_graphic2_window

0xd630,	// (0x00060443) aid_size_cell_graphic2_ParamLimits

0xd630,	// (0x00060443) aid_size_cell_graphic2

0xd668,	// (0x0006047b) bg_popup_window_pane_cp21_ParamLimits

0xd668,	// (0x0006047b) bg_popup_window_pane_cp21

0xd676,	// (0x00060489) graphic2_pages_pane_ParamLimits

0xd676,	// (0x00060489) graphic2_pages_pane

0xd6bc,	// (0x000604cf) grid_graphic2_control_pane_ParamLimits

0xd6bc,	// (0x000604cf) grid_graphic2_control_pane

0xd6fa,	// (0x0006050d) grid_graphic2_pane_ParamLimits

0xd6fa,	// (0x0006050d) grid_graphic2_pane

0xd770,	// (0x00060583) cell_graphic2_pane

0x4e6b,	// (0x00057c7e) main_comp_mode_pane

0xc87e,	// (0x0005f691) list_ai3_gene_pane_ParamLimits

0xcc44,	// (0x0005fa57) bg_popup_window_pane_cp19_ParamLimits

0xcc50,	// (0x0005fa63) bg_touch_area_indi_pane_ParamLimits

0xcc50,	// (0x0005fa63) bg_touch_area_indi_pane

0xcc66,	// (0x0005fa79) bg_touch_area_indi_pane_cp01_ParamLimits

0xcc66,	// (0x0005fa79) bg_touch_area_indi_pane_cp01

0xcc7c,	// (0x0005fa8f) bg_touch_area_indi_pane_cp02_ParamLimits

0xcc7c,	// (0x0005fa8f) bg_touch_area_indi_pane_cp02

0xcc96,	// (0x0005faa9) bg_touch_area_indi_pane_cp03_ParamLimits

0xcc96,	// (0x0005faa9) bg_touch_area_indi_pane_cp03

0xccb0,	// (0x0005fac3) popup_slider_window_g1_ParamLimits

0xcccc,	// (0x0005fadf) popup_slider_window_g2_ParamLimits

0xcce8,	// (0x0005fafb) popup_slider_window_g3_ParamLimits

0xfcd2,	// (0x00062ae5) popup_slider_window_g_ParamLimits

0xcd4e,	// (0x0005fb61) popup_slider_window_t1_ParamLimits

0xcdc2,	// (0x0005fbd5) small_volume_slider_vertical_pane_ParamLimits

0xd770,	// (0x00060583) cell_graphic2_pane_ParamLimits

0xd7c4,	// (0x000605d7) bg_button_pane_cp10_ParamLimits

0xd7c4,	// (0x000605d7) bg_button_pane_cp10

0xd7d9,	// (0x000605ec) bg_button_pane_cp11_ParamLimits

0xd7d9,	// (0x000605ec) bg_button_pane_cp11

0xd7ee,	// (0x00060601) graphic2_pages_pane_g1_ParamLimits

0xd7ee,	// (0x00060601) graphic2_pages_pane_g1

0xd809,	// (0x0006061c) graphic2_pages_pane_g2_ParamLimits

0xd809,	// (0x0006061c) graphic2_pages_pane_g2

0x0001,

0xfd96,	// (0x00062ba9) graphic2_pages_pane_g_ParamLimits

0xfd96,	// (0x00062ba9) graphic2_pages_pane_g

0xd821,	// (0x00060634) graphic2_pages_pane_t1_ParamLimits

0xd821,	// (0x00060634) graphic2_pages_pane_t1

0xd837,	// (0x0006064a) cell_graphic2_control_pane_ParamLimits

0xd837,	// (0x0006064a) cell_graphic2_control_pane

0xd857,	// (0x0006066a) cell_graphic2_pane_g1_ParamLimits

0xd857,	// (0x0006066a) cell_graphic2_pane_g1

0xd864,	// (0x00060677) cell_graphic2_pane_g2_ParamLimits

0xd864,	// (0x00060677) cell_graphic2_pane_g2

0xd871,	// (0x00060684) cell_graphic2_pane_g3_ParamLimits

0xd871,	// (0x00060684) cell_graphic2_pane_g3

0xd87e,	// (0x00060691) cell_graphic2_pane_g4_ParamLimits

0xd87e,	// (0x00060691) cell_graphic2_pane_g4

0xd88b,	// (0x0006069e) cell_graphic2_pane_g5_ParamLimits

0xd88b,	// (0x0006069e) cell_graphic2_pane_g5

0x0004,

0xfd9b,	// (0x00062bae) cell_graphic2_pane_g_ParamLimits

0xfd9b,	// (0x00062bae) cell_graphic2_pane_g

0xd8a3,	// (0x000606b6) cell_graphic2_pane_t1_ParamLimits

0xd8a3,	// (0x000606b6) cell_graphic2_pane_t1

0x8eb1,	// (0x0005bcc4) grid_highlight_pane_cp11_ParamLimits

0x8eb1,	// (0x0005bcc4) grid_highlight_pane_cp11

0xed72,	// (0x00061b85) bg_button_pane_cp05

0xd8d9,	// (0x000606ec) cell_graphic2_control_pane_g1

0xb65f,	// (0x0005e472) bg_touch_area_indi_pane_g1

0xd901,	// (0x00060714) aid_cmod_rocker_key_size

0xd90b,	// (0x0006071e) aid_cmode_itu_key_size

0xd915,	// (0x00060728) main_cmode_video_pane

0xd91f,	// (0x00060732) main_comp_mode_itu_pane

0xd92b,	// (0x0006073e) main_comp_mode_rocker_pane

0xd937,	// (0x0006074a) cell_cmode_rocker_pane_ParamLimits

0xd937,	// (0x0006074a) cell_cmode_rocker_pane

0xd94b,	// (0x0006075e) cell_cmode_itu_pane_ParamLimits

0xd94b,	// (0x0006075e) cell_cmode_itu_pane

0xf281,	// (0x00062094) bg_button_pane_cp06_ParamLimits

0xf281,	// (0x00062094) bg_button_pane_cp06

0xb8da,	// (0x0005e6ed) cell_cmode_rocker_pane_g1_ParamLimits

0xb8da,	// (0x0005e6ed) cell_cmode_rocker_pane_g1

0xce69,	// (0x0005fc7c) cell_cmode_rocker_pane_g2_ParamLimits

0xce69,	// (0x0005fc7c) cell_cmode_rocker_pane_g2

0x0001,

0xfdab,	// (0x00062bbe) cell_cmode_rocker_pane_g_ParamLimits

0xfdab,	// (0x00062bbe) cell_cmode_rocker_pane_g

0xebcf,	// (0x000619e2) bg_button_pane_cp07

0xd962,	// (0x00060775) cell_cmode_itu_pane_g1

0xd96b,	// (0x0006077e) cell_cmode_itu_pane_t1

0xd979,	// (0x0006078c) cell_cmode_itu_pane_t2

0x0001,

0xfdb0,	// (0x00062bc3) cell_cmode_itu_pane_t

0xd096,	// (0x0005fea9) aid_touch_ctrl_left

0xd09e,	// (0x0005feb1) aid_touch_ctrl_right

0xebcf,	// (0x000619e2) compa_mode_pane

0xd987,	// (0x0006079a) aid_cmod_rocker_key_size_cp

0xd991,	// (0x000607a4) aid_cmode_itu_key_size_cp

0xd99b,	// (0x000607ae) compa_mode_pane_g1

0xd9a3,	// (0x000607b6) compa_mode_pane_g2

0xd9ab,	// (0x000607be) compa_mode_pane_g3

0x0002,

0xfdb5,	// (0x00062bc8) compa_mode_pane_g

0xd9b3,	// (0x000607c6) main_comp_mode_itu_pane_cp

0xd9bb,	// (0x000607ce) main_comp_mode_rocker_pane_cp

0xd9c3,	// (0x000607d6) cell_cmode_itu_pane_cp_ParamLimits

0xd9c3,	// (0x000607d6) cell_cmode_itu_pane_cp

0xd9d8,	// (0x000607eb) cell_cmode_rocker_pane_cp_ParamLimits

0xd9d8,	// (0x000607eb) cell_cmode_rocker_pane_cp

0xf281,	// (0x00062094) bg_button_pane_cp06_cp_ParamLimits

0xf281,	// (0x00062094) bg_button_pane_cp06_cp

0xb8da,	// (0x0005e6ed) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb8da,	// (0x0005e6ed) cell_cmode_rocker_pane_g1_cp

0xb65f,	// (0x0005e472) cell_cmode_rocker_pane_g2_cp

0xebcf,	// (0x000619e2) bg_button_pane_cp07_cp

0xd9ea,	// (0x000607fd) cell_cmode_itu_pane_g1_cp

0xd9f3,	// (0x00060806) cell_cmode_itu_pane_t1_cp

0xd9f3,	// (0x00060806) cell_cmode_itu_pane_t2_cp

0xa576,	// (0x0005d389) settings_code_pane_cp2

0xec31,	// (0x00061a44) bg_popup_window_pane_cp3_ParamLimits

0xef86,	// (0x00061d99) heading_pane_cp3_ParamLimits

0xef95,	// (0x00061da8) listscroll_popup_graphic_pane_ParamLimits

0x7004,	// (0x00059e17) fep_hwr_aid_pane_ParamLimits

0x7596,	// (0x0005a3a9) aid_touch_sctrl_top_ParamLimits

0x75b1,	// (0x0005a3c4) sctrl_sk_top_pane_g1_ParamLimits

0x7271,	// (0x0005a084) sctrl_sk_top_pane_g2_ParamLimits

0xfceb,	// (0x00062afe) sctrl_sk_top_pane_g_ParamLimits

0x75be,	// (0x0005a3d1) sctrl_sk_top_pane_t1_ParamLimits

0x7596,	// (0x0005a3a9) aid_touch_sctrl_bottom_ParamLimits

0x75be,	// (0x0005a3d1) sctrl_sk_bottom_pane_t1_ParamLimits

0xcfdb,	// (0x0005fdee) aid_area_touch_clock

0x77b1,	// (0x0005a5c4) aid_vkb2_area_top_pane_cell_ParamLimits

0x77b1,	// (0x0005a5c4) aid_vkb2_area_top_pane_cell

0x7900,	// (0x0005a713) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7900,	// (0x0005a713) aid_vkb2_area_bottom_pane_cell

0xd548,	// (0x0006035b) popup_char_count_window

0xda01,	// (0x00060814) popup_char_count_window_g1

0xda0a,	// (0x0006081d) popup_char_count_window_g2

0xda13,	// (0x00060826) popup_char_count_window_g3

0x0002,

0xfdbc,	// (0x00062bcf) popup_char_count_window_g

0xda1c,	// (0x0006082f) popup_char_count_window_t1

0x7667,	// (0x0005a47a) popup_fep_char_preview_window_ParamLimits

0x7667,	// (0x0005a47a) popup_fep_char_preview_window

0x77cf,	// (0x0005a5e2) vkb2_top_candi_pane_ParamLimits

0x77cf,	// (0x0005a5e2) vkb2_top_candi_pane

0xda2a,	// (0x0006083d) cell_vkb2_top_candi_pane_ParamLimits

0xda2a,	// (0x0006083d) cell_vkb2_top_candi_pane

0x7beb,	// (0x0005a9fe) bg_popup_fep_char_preview_window_ParamLimits

0x7beb,	// (0x0005a9fe) bg_popup_fep_char_preview_window

0x7bf9,	// (0x0005aa0c) popup_fep_char_preview_window_t1_ParamLimits

0x7bf9,	// (0x0005aa0c) popup_fep_char_preview_window_t1

0xda78,	// (0x0006088b) bg_popup_fep_char_preview_window_g1

0xda80,	// (0x00060893) bg_popup_fep_char_preview_window_g2

0xda88,	// (0x0006089b) bg_popup_fep_char_preview_window_g3

0xda90,	// (0x000608a3) bg_popup_fep_char_preview_window_g4

0xda98,	// (0x000608ab) bg_popup_fep_char_preview_window_g5

0xdaa0,	// (0x000608b3) bg_popup_fep_char_preview_window_g6

0xdaa8,	// (0x000608bb) bg_popup_fep_char_preview_window_g7

0xdab0,	// (0x000608c3) bg_popup_fep_char_preview_window_g8

0xdab8,	// (0x000608cb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc3,	// (0x00062bd6) bg_popup_fep_char_preview_window_g

0x7271,	// (0x0005a084) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7271,	// (0x0005a084) cell_vkb2_top_candi_pane_g1

0x727f,	// (0x0005a092) cell_vkb2_top_candi_pane_g2_ParamLimits

0x727f,	// (0x0005a092) cell_vkb2_top_candi_pane_g2

0xd5c2,	// (0x000603d5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd5c2,	// (0x000603d5) cell_vkb2_top_candi_pane_g3

0x7c3b,	// (0x0005aa4e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7c3b,	// (0x0005aa4e) cell_vkb2_top_candi_pane_g4

0xbdf9,	// (0x0005ec0c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbdf9,	// (0x0005ec0c) cell_vkb2_top_candi_pane_g5

0x7c5c,	// (0x0005aa6f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c5c,	// (0x0005aa6f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x00062beb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x00062beb) cell_vkb2_top_candi_pane_g

0x7c6a,	// (0x0005aa7d) cell_vkb2_top_candi_pane_t1

0x6dae,	// (0x00059bc1) aid_size_touch_slider_mark_ParamLimits

0x6dae,	// (0x00059bc1) aid_size_touch_slider_mark

0xd6ac,	// (0x000604bf) grid_graphic2_catg_pane_ParamLimits

0xd6ac,	// (0x000604bf) grid_graphic2_catg_pane

0xd74a,	// (0x0006055d) popup_grid_graphic2_window_t1_ParamLimits

0xd74a,	// (0x0006055d) popup_grid_graphic2_window_t1

0xd75c,	// (0x0006056f) popup_grid_graphic2_window_t2_ParamLimits

0xd75c,	// (0x0006056f) popup_grid_graphic2_window_t2

0x0001,

0xfd91,	// (0x00062ba4) popup_grid_graphic2_window_t_ParamLimits

0xfd91,	// (0x00062ba4) popup_grid_graphic2_window_t

0xed72,	// (0x00061b85) bg_button_pane_cp05_ParamLimits

0xd8d9,	// (0x000606ec) cell_graphic2_control_pane_g1_ParamLimits

0xdac0,	// (0x000608d3) cell_graphic2_catg_pane_ParamLimits

0xdac0,	// (0x000608d3) cell_graphic2_catg_pane

0xebcf,	// (0x000619e2) bg_button_pane_cp12

0xdad2,	// (0x000608e5) cell_graphic2_catg_pane_g1

0xcfa7,	// (0x0005fdba) cell_tb_ext_pane_t1_ParamLimits

0x7a1d,	// (0x0005a830) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7a1d,	// (0x0005a830) vkb2_top_cell_right_narrow_pane

0x7a35,	// (0x0005a848) vkb2_top_cell_right_wide_pane_ParamLimits

0x7a35,	// (0x0005a848) vkb2_top_cell_right_wide_pane

0x6ff6,	// (0x00059e09) bg_vkb2_func_pane_ParamLimits

0x6ff6,	// (0x00059e09) bg_vkb2_func_pane

0x7aa6,	// (0x0005a8b9) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ff6,	// (0x00059e09) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ff6,	// (0x00059e09) bg_vkb2_fuc_pane_cp03

0x7b04,	// (0x0005a917) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e2d,	// (0x0005bc40) bg_vkb2_func_pane_g1

0x8e35,	// (0x0005bc48) bg_vkb2_func_pane_g2

0x8e45,	// (0x0005bc58) bg_vkb2_func_pane_g3

0x8e3d,	// (0x0005bc50) bg_vkb2_func_pane_g4

0x8e4d,	// (0x0005bc60) bg_vkb2_func_pane_g5

0x8e55,	// (0x0005bc68) bg_vkb2_func_pane_g6

0x8e5d,	// (0x0005bc70) bg_vkb2_func_pane_g7

0x8e65,	// (0x0005bc78) bg_vkb2_func_pane_g8

0x8e25,	// (0x0005bc38) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00062bf8) bg_vkb2_func_pane_g

0x6ff6,	// (0x00059e09) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ff6,	// (0x00059e09) bg_vkb2_fuc_pane_cp01

0x7aa6,	// (0x0005a8b9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7aa6,	// (0x0005a8b9) vkb2_top_cell_right_wide_pane_g1

0x6ff6,	// (0x00059e09) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ff6,	// (0x00059e09) bg_vkb2_fuc_pane_cp02

0x7c88,	// (0x0005aa9b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7c88,	// (0x0005aa9b) vkb2_top_cell_right_narrow_pane_g1

0xcbbe,	// (0x0005f9d1) aid_touch_area_decrease_ParamLimits

0xcbbe,	// (0x0005f9d1) aid_touch_area_decrease

0xcbe2,	// (0x0005f9f5) aid_touch_area_increase_ParamLimits

0xcbe2,	// (0x0005f9f5) aid_touch_area_increase

0xcbfa,	// (0x0005fa0d) aid_touch_area_mute_ParamLimits

0xcbfa,	// (0x0005fa0d) aid_touch_area_mute

0xcc16,	// (0x0005fa29) aid_touch_area_slider_ParamLimits

0xcc16,	// (0x0005fa29) aid_touch_area_slider

0xcd04,	// (0x0005fb17) popup_slider_window_g4_ParamLimits

0xcd04,	// (0x0005fb17) popup_slider_window_g4

0xcd1c,	// (0x0005fb2f) popup_slider_window_g5_ParamLimits

0xcd1c,	// (0x0005fb2f) popup_slider_window_g5

0xcd3e,	// (0x0005fb51) popup_slider_window_g6_ParamLimits

0xcd3e,	// (0x0005fb51) popup_slider_window_g6

0xcd7c,	// (0x0005fb8f) popup_slider_window_t2_ParamLimits

0xcd7c,	// (0x0005fb8f) popup_slider_window_t2

0x0001,

0xfcdf,	// (0x00062af2) popup_slider_window_t_ParamLimits

0xfcdf,	// (0x00062af2) popup_slider_window_t

0xcd94,	// (0x0005fba7) slider_pane_ParamLimits

0xcd94,	// (0x0005fba7) slider_pane

0xdadb,	// (0x000608ee) slider_pane_g1_ParamLimits

0xdadb,	// (0x000608ee) slider_pane_g1

0xdaef,	// (0x00060902) slider_pane_g2_ParamLimits

0xdaef,	// (0x00060902) slider_pane_g2

0xdb05,	// (0x00060918) slider_pane_g3_ParamLimits

0xdb05,	// (0x00060918) slider_pane_g3

0x0003,

0xfdf8,	// (0x00062c0b) slider_pane_g_ParamLimits

0xfdf8,	// (0x00062c0b) slider_pane_g

0x6959,	// (0x0005976c) popup_tb_float_extension_window_ParamLimits

0x6959,	// (0x0005976c) popup_tb_float_extension_window

0xdb31,	// (0x00060944) aid_size_cell_tb_float_ext

0xebcf,	// (0x000619e2) bg_popup_sub_window_cp28

0xdb3d,	// (0x00060950) grid_tb_float_ext_pane

0xdb49,	// (0x0006095c) cell_tb_float_ext_pane_ParamLimits

0xdb49,	// (0x0006095c) cell_tb_float_ext_pane

0xdb65,	// (0x00060978) cell_tb_float_ext_pane_g1

0xdb6e,	// (0x00060981) grid_highlight_pane_cp12

0x714b,	// (0x00059f5e) cell_last_hwr_side_pane_ParamLimits

0x714b,	// (0x00059f5e) cell_last_hwr_side_pane

0xb65f,	// (0x0005e472) cell_last_hwr_side_pane_g1

0xdb77,	// (0x0006098a) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00062c14) cell_last_hwr_side_pane_g

0x79cc,	// (0x0005a7df) vkb2_area_bottom_space_btn_pane_ParamLimits

0x79cc,	// (0x0005a7df) vkb2_area_bottom_space_btn_pane

0x7271,	// (0x0005a084) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd61e,	// (0x00060431) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7c6a,	// (0x0005aa7d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7ca4,	// (0x0005aab7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7ca4,	// (0x0005aab7) vkb2_area_bottom_space_btn_pane_g1

0x7cde,	// (0x0005aaf1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7cde,	// (0x0005aaf1) vkb2_area_bottom_space_btn_pane_g2

0x7d14,	// (0x0005ab27) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d14,	// (0x0005ab27) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00062c19) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00062c19) vkb2_area_bottom_space_btn_pane_g

0x70bb,	// (0x00059ece) cel_fep_hwr_func_pane_ParamLimits

0x70bb,	// (0x00059ece) cel_fep_hwr_func_pane

0x70f7,	// (0x00059f0a) cell_hwr_side_button_pane_ParamLimits

0x70f7,	// (0x00059f0a) cell_hwr_side_button_pane

0xcfdb,	// (0x0005fdee) aid_area_touch_clock_ParamLimits

0xed72,	// (0x00061b85) bg_uniindi_top_pane_ParamLimits

0xcfef,	// (0x0005fe02) uniindi_top_pane_g1_ParamLimits

0xd005,	// (0x0005fe18) uniindi_top_pane_g2_ParamLimits

0xd011,	// (0x0005fe24) uniindi_top_pane_g3_ParamLimits

0xd022,	// (0x0005fe35) uniindi_top_pane_g4_ParamLimits

0xfd17,	// (0x00062b2a) uniindi_top_pane_g_ParamLimits

0xd02f,	// (0x0005fe42) uniindi_top_pane_t1_ParamLimits

0xed72,	// (0x00061b85) bg_vkb2_func_pane_cp01_ParamLimits

0xed72,	// (0x00061b85) bg_vkb2_func_pane_cp01

0xdb80,	// (0x00060993) cel_fep_hwr_func_pane_g1_ParamLimits

0xdb80,	// (0x00060993) cel_fep_hwr_func_pane_g1

0xed72,	// (0x00061b85) bg_vkb2_func_pane_cp02_ParamLimits

0xed72,	// (0x00061b85) bg_vkb2_func_pane_cp02

0xdb80,	// (0x00060993) cell_hwr_side_button_pane_g1_ParamLimits

0xdb80,	// (0x00060993) cell_hwr_side_button_pane_g1

0x8c92,	// (0x0005baa5) status_pane_g4_ParamLimits

0x8c92,	// (0x0005baa5) status_pane_g4

0x8cac,	// (0x0005babf) status_pane_t1

0xb412,	// (0x0005e225) form2_midp_gauge_slider_cont_pane

0xb41a,	// (0x0005e22d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb42c,	// (0x0005e23f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb43e,	// (0x0005e251) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad7,	// (0x000628ea) form2_midp_gauge_slider_pane_t_ParamLimits

0xb450,	// (0x0005e263) form2_midp_slider_pane_ParamLimits

0x762f,	// (0x0005a442) aid_size_cell_func_vkb2_ParamLimits

0x762f,	// (0x0005a442) aid_size_cell_func_vkb2

0xdb1d,	// (0x00060930) slider_pane_g4_ParamLimits

0xdb1d,	// (0x00060930) slider_pane_g4

0x7d5e,	// (0x0005ab71) form2_midp_gauge_slider_pane_t2_cp01

0x7d6c,	// (0x0005ab7f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7d6c,	// (0x0005ab7f) form2_midp_gauge_slider_pane_t3_cp01

0x7d89,	// (0x0005ab9c) form2_midp_slider_pane_cp01

0xebcf,	// (0x000619e2) navi_smil_pane

0xdbb9,	// (0x000609cc) navi_smil_pane_g1

0xdbc1,	// (0x000609d4) navi_smil_pane_t1

0xdb8e,	// (0x000609a1) form2_midp_slider_pane_g1

0xdb97,	// (0x000609aa) form2_midp_slider_pane_g2

0xdb9f,	// (0x000609b2) form2_midp_slider_pane_g3

0xdb8e,	// (0x000609a1) form2_midp_slider_pane_g4

0xdba7,	// (0x000609ba) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00062c22) form2_midp_slider_pane_g

0x7d4e,	// (0x0005ab61) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d4e,	// (0x0005ab61) vkb2_area_bottom_space_btn_pane_g4

0x8ab1,	// (0x0005b8c4) lc0_navi_pane_ParamLimits

0x8ab1,	// (0x0005b8c4) lc0_navi_pane

0x8b2d,	// (0x0005b940) lc0_stat_indi_pane_ParamLimits

0x8b2d,	// (0x0005b940) lc0_stat_indi_pane

0x8b44,	// (0x0005b957) ls0_title_pane_ParamLimits

0x8b44,	// (0x0005b957) ls0_title_pane

0xf281,	// (0x00062094) bg_popup_sub_pane_cp14_ParamLimits

0xcfc2,	// (0x0005fdd5) list_uniindi_pane_ParamLimits

0xcfce,	// (0x0005fde1) uniindi_top_pane_ParamLimits

0xd06e,	// (0x0005fe81) list_single_uniindi_pane_g1_ParamLimits

0xd081,	// (0x0005fe94) list_single_uniindi_pane_t1_ParamLimits

0x7d92,	// (0x0005aba5) lc0_stat_clock_pane_ParamLimits

0x7d92,	// (0x0005aba5) lc0_stat_clock_pane

0xdbcf,	// (0x000609e2) lc0_stat_indi_pane_g1_ParamLimits

0xdbcf,	// (0x000609e2) lc0_stat_indi_pane_g1

0xdbdc,	// (0x000609ef) lc0_stat_indi_pane_g2_ParamLimits

0xdbdc,	// (0x000609ef) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x00062c2d) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x00062c2d) lc0_stat_indi_pane_g

0x7d9f,	// (0x0005abb2) lc0_uni_indicator_pane_ParamLimits

0x7d9f,	// (0x0005abb2) lc0_uni_indicator_pane

0xdbe9,	// (0x000609fc) ls0_title_pane_g1_ParamLimits

0xdbe9,	// (0x000609fc) ls0_title_pane_g1

0xdbfd,	// (0x00060a10) ls0_title_pane_t1_ParamLimits

0xdbfd,	// (0x00060a10) ls0_title_pane_t1

0x7dac,	// (0x0005abbf) lc0_uni_indicator_pane_g1_ParamLimits

0x7dac,	// (0x0005abbf) lc0_uni_indicator_pane_g1

0xdc33,	// (0x00060a46) lc0_stat_clock_pane_t1

0x4e6b,	// (0x00057c7e) main_ai5_pane

0xdc41,	// (0x00060a54) ai5_sk_pane_ParamLimits

0xdc41,	// (0x00060a54) ai5_sk_pane

0xdc4e,	// (0x00060a61) cell_ai5_widget_pane_ParamLimits

0xdc4e,	// (0x00060a61) cell_ai5_widget_pane

0xdced,	// (0x00060b00) aid_size_cell_widget_grid

0xdcfb,	// (0x00060b0e) bg_ai5_widget_pane_ParamLimits

0xdcfb,	// (0x00060b0e) bg_ai5_widget_pane

0xdd77,	// (0x00060b8a) cell_ai5_widget_pane_g2

0xdd8b,	// (0x00060b9e) cell_ai5_widget_pane_g3

0xdda5,	// (0x00060bb8) cell_ai5_widget_pane_g4

0xddb5,	// (0x00060bc8) cell_ai5_widget_pane_g5

0xddc5,	// (0x00060bd8) cell_ai5_widget_pane_g6

0xddd1,	// (0x00060be4) cell_ai5_widget_pane_g7

0xde3d,	// (0x00060c50) cell_ai5_widget_pane_t1_ParamLimits

0xde3d,	// (0x00060c50) cell_ai5_widget_pane_t1

0xde5a,	// (0x00060c6d) cell_ai5_widget_pane_t2_ParamLimits

0xde5a,	// (0x00060c6d) cell_ai5_widget_pane_t2

0xde72,	// (0x00060c85) cell_ai5_widget_pane_t3_ParamLimits

0xde72,	// (0x00060c85) cell_ai5_widget_pane_t3

0xde8a,	// (0x00060c9d) cell_ai5_widget_pane_t4_ParamLimits

0xde8a,	// (0x00060c9d) cell_ai5_widget_pane_t4

0xdeb0,	// (0x00060cc3) cell_ai5_widget_pane_t5_ParamLimits

0xdeb0,	// (0x00060cc3) cell_ai5_widget_pane_t5

0xded0,	// (0x00060ce3) cell_ai5_widget_pane_t6_ParamLimits

0xded0,	// (0x00060ce3) cell_ai5_widget_pane_t6

0xdee2,	// (0x00060cf5) cell_ai5_widget_pane_t7_ParamLimits

0xdee2,	// (0x00060cf5) cell_ai5_widget_pane_t7

0xdf01,	// (0x00060d14) cell_ai5_widget_pane_t8_ParamLimits

0xdf01,	// (0x00060d14) cell_ai5_widget_pane_t8

0x000b,

0xfe3a,	// (0x00062c4d) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x00062c4d) cell_ai5_widget_pane_t

0xdf85,	// (0x00060d98) grid_ai5_widget_pane

0xf281,	// (0x00062094) highlight_cell_ai5_widget_pane_ParamLimits

0xf281,	// (0x00062094) highlight_cell_ai5_widget_pane

0xdf93,	// (0x00060da6) ai5_sk_left_pane

0xdf9d,	// (0x00060db0) ai5_sk_middle_pane

0xdfa7,	// (0x00060dba) ai5_sk_right_pane

0xdfb1,	// (0x00060dc4) bg_ai5_widget_pane_g1_ParamLimits

0xdfb1,	// (0x00060dc4) bg_ai5_widget_pane_g1

0xdfbd,	// (0x00060dd0) bg_ai5_widget_pane_g2_ParamLimits

0xdfbd,	// (0x00060dd0) bg_ai5_widget_pane_g2

0xdfc9,	// (0x00060ddc) bg_ai5_widget_pane_g3_ParamLimits

0xdfc9,	// (0x00060ddc) bg_ai5_widget_pane_g3

0xdfd5,	// (0x00060de8) bg_ai5_widget_pane_g4_ParamLimits

0xdfd5,	// (0x00060de8) bg_ai5_widget_pane_g4

0xdfe1,	// (0x00060df4) bg_ai5_widget_pane_g5_ParamLimits

0xdfe1,	// (0x00060df4) bg_ai5_widget_pane_g5

0xdfed,	// (0x00060e00) bg_ai5_widget_pane_g6_ParamLimits

0xdfed,	// (0x00060e00) bg_ai5_widget_pane_g6

0xdff9,	// (0x00060e0c) bg_ai5_widget_pane_g7_ParamLimits

0xdff9,	// (0x00060e0c) bg_ai5_widget_pane_g7

0xe005,	// (0x00060e18) bg_ai5_widget_pane_g8_ParamLimits

0xe005,	// (0x00060e18) bg_ai5_widget_pane_g8

0xe011,	// (0x00060e24) bg_ai5_widget_pane_g9_ParamLimits

0xe011,	// (0x00060e24) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x00062c66) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x00062c66) bg_ai5_widget_pane_g

0xe049,	// (0x00060e5c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe049,	// (0x00060e5c) cell_shortcut_ai5_widget_pane

0x85b0,	// (0x0005b3c3) bg_cell_shortcut_ai5_widget_pane

0xe05c,	// (0x00060e6f) cell_grid_ai5_widget_pane_g1

0x85b0,	// (0x0005b3c3) highlight_cell_shortcut_ai5_widget_pane

0x8e2d,	// (0x0005bc40) ai5_sk_left_pane_g1

0xe065,	// (0x00060e78) ai5_sk_left_pane_g2

0xe06d,	// (0x00060e80) ai5_sk_left_pane_g3

0xe075,	// (0x00060e88) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x00062c79) ai5_sk_left_pane_g

0xe07d,	// (0x00060e90) ai5_sk_left_pane_t1

0x8e35,	// (0x0005bc48) ai5_sk_right_pane_g1

0xe08b,	// (0x00060e9e) ai5_sk_right_pane_g2

0xe093,	// (0x00060ea6) ai5_sk_right_pane_g3

0xe09b,	// (0x00060eae) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x00062c82) ai5_sk_right_pane_g

0xe0a3,	// (0x00060eb6) ai5_sk_right_pane_t1

0x8e35,	// (0x0005bc48) ai5_sk_middle_pane_g1

0x8e2d,	// (0x0005bc40) ai5_sk_middle_pane_g2

0x8e4d,	// (0x0005bc60) ai5_sk_middle_pane_g3

0xe093,	// (0x00060ea6) ai5_sk_middle_pane_g4

0xe06d,	// (0x00060e80) ai5_sk_middle_pane_g5

0xe0b1,	// (0x00060ec4) ai5_sk_middle_pane_g6

0xe0b9,	// (0x00060ecc) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x00062c8b) ai5_sk_middle_pane_g

0x8937,	// (0x0005b74a) aid_touch_area_size_lc0_ParamLimits

0x8937,	// (0x0005b74a) aid_touch_area_size_lc0

0x72a0,	// (0x0005a0b3) cell_hwr_candidate_pane_t1_ParamLimits

0x8955,	// (0x0005b768) aid_touch_navi_pane

0x8c44,	// (0x0005ba57) status_dt_navi_pane_ParamLimits

0x8c44,	// (0x0005ba57) status_dt_navi_pane

0x8c51,	// (0x0005ba64) status_dt_sta_pane_ParamLimits

0x8c51,	// (0x0005ba64) status_dt_sta_pane

0xe0c1,	// (0x00060ed4) dt_sta_controll_pane

0xe0ce,	// (0x00060ee1) dt_sta_indi_pane

0xe0df,	// (0x00060ef2) dt_sta_title_pane

0xed72,	// (0x00061b85) bg_dt_sta_indi_pane_ParamLimits

0xed72,	// (0x00061b85) bg_dt_sta_indi_pane

0xe0f2,	// (0x00060f05) dt_sta_battery_pane

0xe0fa,	// (0x00060f0d) dt_sta_indi_pane_g1

0xe103,	// (0x00060f16) dt_sta_indi_pane_g2

0xe10c,	// (0x00060f1f) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x00062c9a) dt_sta_indi_pane_g

0xe115,	// (0x00060f28) dt_sta_signal_pane

0xf281,	// (0x00062094) bg_dt_sta_title_pane_ParamLimits

0xf281,	// (0x00062094) bg_dt_sta_title_pane

0xe11e,	// (0x00060f31) dt_sta_title_pane_g1

0xe126,	// (0x00060f39) dt_sta_title_pane_t1_ParamLimits

0xe126,	// (0x00060f39) dt_sta_title_pane_t1

0xebcf,	// (0x000619e2) bg_dt_sta_control_pane

0xe13b,	// (0x00060f4e) dt_sta_controll_pane_g1

0xe144,	// (0x00060f57) bg_dt_sta_title_pane_g1

0xe14d,	// (0x00060f60) bg_dt_sta_title_pane_g2

0xe156,	// (0x00060f69) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x00062ca1) bg_dt_sta_title_pane_g

0xb65f,	// (0x0005e472) bg_dt_sta_indi_pane_g1

0xe15f,	// (0x00060f72) dt_sta_signal_pane_g1

0xe167,	// (0x00060f7a) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x00062ca8) dt_sta_signal_pane_g

0xe16f,	// (0x00060f82) dt_sta_battery_pane_g1

0xe178,	// (0x00060f8b) dt_sta_battery_pane_t1

0xb65f,	// (0x0005e472) bg_dt_sta_control_pane_g1

0x321a,	// (0x0005602d) fep_china_uni_eep_pane

0x3222,	// (0x00056035) fep_china_uni_entry_pane_ParamLimits

0x3232,	// (0x00056045) popup_fep_china_uni_window_g1_ParamLimits

0x3242,	// (0x00056055) popup_fep_china_uni_window_g2_ParamLimits

0x3242,	// (0x00056055) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00062510) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00062510) popup_fep_china_uni_window_g

0xe187,	// (0x00060f9a) fep_china_uni_eep_pane_g1

0xe18f,	// (0x00060fa2) fep_china_uni_eep_pane_t1

0xdbb0,	// (0x000609c3) aid_touch_area_size_smil_player

0x8aa9,	// (0x0005b8bc) lc0_clock_pane

0x8ca0,	// (0x0005bab3) status_pane_g5_ParamLimits

0x8ca0,	// (0x0005bab3) status_pane_g5

0x65de,	// (0x000593f1) popup_keymap_window

0x8c66,	// (0x0005ba79) status_icon_pane

0xdd8b,	// (0x00060b9e) cell_ai5_widget_pane_g3_ParamLimits

0xdda5,	// (0x00060bb8) cell_ai5_widget_pane_g4_ParamLimits

0xddb5,	// (0x00060bc8) cell_ai5_widget_pane_g5_ParamLimits

0xdddd,	// (0x00060bf0) cell_ai5_widget_pane_g8_ParamLimits

0xdddd,	// (0x00060bf0) cell_ai5_widget_pane_g8

0xddf1,	// (0x00060c04) cell_ai5_widget_pane_g9_ParamLimits

0xddf1,	// (0x00060c04) cell_ai5_widget_pane_g9

0xde05,	// (0x00060c18) cell_ai5_widget_pane_g10_ParamLimits

0xde05,	// (0x00060c18) cell_ai5_widget_pane_g10

0xe19e,	// (0x00060fb1) status_icon_pane_g1

0xebcf,	// (0x000619e2) bg_popup_sub_pane_cp13

0xe1a6,	// (0x00060fb9) popup_keymap_window_t1

0x8888,	// (0x0005b69b) control_pane_g6_ParamLimits

0x8888,	// (0x0005b69b) control_pane_g6

0x8895,	// (0x0005b6a8) control_pane_g7_ParamLimits

0x8895,	// (0x0005b6a8) control_pane_g7

0x88a2,	// (0x0005b6b5) control_pane_g8_ParamLimits

0x88a2,	// (0x0005b6b5) control_pane_g8

0xe0c1,	// (0x00060ed4) dt_sta_controll_pane_ParamLimits

0xe0ce,	// (0x00060ee1) dt_sta_indi_pane_ParamLimits

0xe0df,	// (0x00060ef2) dt_sta_title_pane_ParamLimits

0xf1c3,	// (0x00061fd6) aid_size_touch_scroll_bar_cale

0x4f48,	// (0x00057d5b) popup_discreet_window_ParamLimits

0x4f48,	// (0x00057d5b) popup_discreet_window

0x4fd6,	// (0x00057de9) popup_sk_window

0x94a3,	// (0x0005c2b6) bg_popup_sub_pane_cp28_ParamLimits

0x94a3,	// (0x0005c2b6) bg_popup_sub_pane_cp28

0xe1b4,	// (0x00060fc7) popup_discreet_window_g1_ParamLimits

0xe1b4,	// (0x00060fc7) popup_discreet_window_g1

0xe1d4,	// (0x00060fe7) popup_discreet_window_t1_ParamLimits

0xe1d4,	// (0x00060fe7) popup_discreet_window_t1

0xe1f2,	// (0x00061005) popup_discreet_window_t2_ParamLimits

0xe1f2,	// (0x00061005) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x00062cad) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x00062cad) popup_discreet_window_t

0x7dbf,	// (0x0005abd2) popup_sk_window_g1

0x7dc9,	// (0x0005abdc) popup_sk_window_g2

0x0001,

0xfea1,	// (0x00062cb4) popup_sk_window_g

0x7dd1,	// (0x0005abe4) popup_sk_window_t1

0x7ddf,	// (0x0005abf2) popup_sk_window_t1_copy1

0xdd77,	// (0x00060b8a) cell_ai5_widget_pane_g2_ParamLimits

0xdf13,	// (0x00060d26) cell_ai5_widget_pane_t9_ParamLimits

0xdf13,	// (0x00060d26) cell_ai5_widget_pane_t9

0xebcf,	// (0x000619e2) main_fep_fshwr2_pane

0x7ded,	// (0x0005ac00) aid_fshwr2_btn_pane

0x7dfd,	// (0x0005ac10) aid_fshwr2_syb_pane

0x7e11,	// (0x0005ac24) aid_fshwr2_txt_pane

0x7e21,	// (0x0005ac34) fshwr2_func_candi_pane

0x7e41,	// (0x0005ac54) fshwr2_hwr_syb_pane

0x7e57,	// (0x0005ac6a) fshwr2_icf_pane

0x4e6b,	// (0x00057c7e) fshwr2_icf_bg_pane

0x7e8b,	// (0x0005ac9e) fshwr2_icf_pane_t1_ParamLimits

0x7e8b,	// (0x0005ac9e) fshwr2_icf_pane_t1

0x3198,	// (0x00055fab) fshwr2_func_candi_pane_g1

0xe244,	// (0x00061057) fshwr2_func_candi_row_pane_ParamLimits

0xe244,	// (0x00061057) fshwr2_func_candi_row_pane

0x7ea3,	// (0x0005acb6) cell_fshwr2_syb_pane_ParamLimits

0x7ea3,	// (0x0005acb6) cell_fshwr2_syb_pane

0x7ec4,	// (0x0005acd7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7ec4,	// (0x0005acd7) fshwr2_hwr_syb_pane_g1

0x4e6b,	// (0x00057c7e) bg_popup_call_pane_cp01

0x7ed2,	// (0x0005ace5) fshwr2_func_candi_cell_pane_ParamLimits

0x7ed2,	// (0x0005ace5) fshwr2_func_candi_cell_pane

0x9b1a,	// (0x0005c92d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9b1a,	// (0x0005c92d) fshwr2_func_candi_cell_bg_pane

0x7f23,	// (0x0005ad36) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7f23,	// (0x0005ad36) fshwr2_func_candi_cell_pane_g1

0x7f4e,	// (0x0005ad61) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7f4e,	// (0x0005ad61) fshwr2_func_candi_cell_pane_t1

0x4e6b,	// (0x00057c7e) bg_button_pane_cp08

0x88d7,	// (0x0005b6ea) cell_fshwr2_syb_bg_pane

0x7f61,	// (0x0005ad74) cell_fshwr2_syb_bg_pane_g1

0x7f75,	// (0x0005ad88) cell_fshwr2_syb_bg_pane_t1

0xf281,	// (0x00062094) main_tmo_pane

0xa1b5,	// (0x0005cfc8) uni_indicator_pane_g1_ParamLimits

0xa1cb,	// (0x0005cfde) uni_indicator_pane_g2_ParamLimits

0xa1e1,	// (0x0005cff4) uni_indicator_pane_g3_ParamLimits

0xa1f4,	// (0x0005d007) uni_indicator_pane_g4_ParamLimits

0xa1f4,	// (0x0005d007) uni_indicator_pane_g4

0xa208,	// (0x0005d01b) uni_indicator_pane_g5_ParamLimits

0xa208,	// (0x0005d01b) uni_indicator_pane_g5

0xa208,	// (0x0005d01b) uni_indicator_pane_g6_ParamLimits

0xa208,	// (0x0005d01b) uni_indicator_pane_g6

0xf901,	// (0x00062714) uni_indicator_pane_g_ParamLimits

0xcb8e,	// (0x0005f9a1) popup_tmo_note_window_ParamLimits

0xcb8e,	// (0x0005f9a1) popup_tmo_note_window

0x7611,	// (0x0005a424) fshwr2_bg_pane

0x7f3f,	// (0x0005ad52) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7f3f,	// (0x0005ad52) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x00062cb9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x00062cb9) fshwr2_func_candi_cell_pane_g

0x7259,	// (0x0005a06c) bg_popup_window_pane_cp01

0x7f8b,	// (0x0005ad9e) bg_popup_window_pane_g1_cp01

0xe267,	// (0x0006107a) bg_popup_window_pane_cp22_ParamLimits

0xe267,	// (0x0006107a) bg_popup_window_pane_cp22

0xe275,	// (0x00061088) listscroll_tmo_link_pane_ParamLimits

0xe275,	// (0x00061088) listscroll_tmo_link_pane

0xe2b5,	// (0x000610c8) popup_tmo_note_window_g1_ParamLimits

0xe2b5,	// (0x000610c8) popup_tmo_note_window_g1

0xe2c2,	// (0x000610d5) tmo_note_info_pane_ParamLimits

0xe2c2,	// (0x000610d5) tmo_note_info_pane

0xe2dc,	// (0x000610ef) list_tmo_note_info_pane_g1_ParamLimits

0xe2dc,	// (0x000610ef) list_tmo_note_info_pane_g1

0xe2f3,	// (0x00061106) list_tmo_note_info_pane_g2_ParamLimits

0xe2f3,	// (0x00061106) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x00062cbe) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x00062cbe) list_tmo_note_info_pane_g

0xe30f,	// (0x00061122) list_tmo_note_info_text_pane_ParamLimits

0xe30f,	// (0x00061122) list_tmo_note_info_text_pane

0xe394,	// (0x000611a7) list_tmo_link_pane

0xe3a1,	// (0x000611b4) scroll_pane_cp20

0xe3ae,	// (0x000611c1) list_single_tmo_link_pane_ParamLimits

0xe3ae,	// (0x000611c1) list_single_tmo_link_pane

0xe3be,	// (0x000611d1) list_single_tmo_link_pane_t1

0xe3cc,	// (0x000611df) list_tmo_note_info_text_pane_t1_ParamLimits

0xe3cc,	// (0x000611df) list_tmo_note_info_text_pane_t1

0x5ae9,	// (0x000588fc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5ae9,	// (0x000588fc) aid_size_touch_scroll_bar_cp01

0x5a26,	// (0x00058839) aid_size_touch_slider_marker

0x4fbe,	// (0x00057dd1) popup_settings_window_ParamLimits

0x4fbe,	// (0x00057dd1) popup_settings_window

0x3ab4,	// (0x000568c7) popup_candi_list_indi_window

0x8955,	// (0x0005b768) aid_touch_navi_pane_ParamLimits

0x756a,	// (0x0005a37d) rs_clock_indi_pane

0x7573,	// (0x0005a386) sctrl_sk_bottom_pane_ParamLimits

0x7584,	// (0x0005a397) sctrl_sk_top_pane_ParamLimits

0x7681,	// (0x0005a494) popup_fep_tooltip_window

0xdced,	// (0x00060b00) aid_size_cell_widget_grid_ParamLimits

0xdd62,	// (0x00060b75) cell_ai5_widget_pane_g1_ParamLimits

0xdd62,	// (0x00060b75) cell_ai5_widget_pane_g1

0xddc5,	// (0x00060bd8) cell_ai5_widget_pane_g6_ParamLimits

0xddd1,	// (0x00060be4) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1f,	// (0x00062c32) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x00062c32) cell_ai5_widget_pane_g

0xdf42,	// (0x00060d55) cell_ai5_widget_pane_t10_ParamLimits

0xdf42,	// (0x00060d55) cell_ai5_widget_pane_t10

0xdf85,	// (0x00060d98) grid_ai5_widget_pane_ParamLimits

0xe01d,	// (0x00060e30) cell_contacts_ai5_widget_pane_ParamLimits

0xe01d,	// (0x00060e30) cell_contacts_ai5_widget_pane

0xe207,	// (0x0006101a) popup_discreet_window_t3_ParamLimits

0xe207,	// (0x0006101a) popup_discreet_window_t3

0x7e73,	// (0x0005ac86) popup_fshwr2_char_preview_window_ParamLimits

0x7e73,	// (0x0005ac86) popup_fshwr2_char_preview_window

0xe32d,	// (0x00061140) tmo_note_info_pane_t1

0xe342,	// (0x00061155) tmo_note_info_pane_t2

0xe35b,	// (0x0006116e) tmo_note_info_pane_t3

0xe370,	// (0x00061183) tmo_note_info_pane_t4

0xe382,	// (0x00061195) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x00062cc3) tmo_note_info_pane_t

0xe394,	// (0x000611a7) list_tmo_link_pane_ParamLimits

0xe3a1,	// (0x000611b4) scroll_pane_cp20_ParamLimits

0x4e6b,	// (0x00057c7e) bg_popup_fep_char_preview_window_cp01

0xe3e5,	// (0x000611f8) popup_fshwr2_char_preview_window_t1

0xe3f3,	// (0x00061206) popup_candi_list_indi_window_g1

0xe3fc,	// (0x0006120f) bg_cell_contacts_ai5_widget_pane

0xe408,	// (0x0006121b) cell_contacts_ai5_widget_pane_g1

0xe41d,	// (0x00061230) cell_contacts_ai5_widget_pane_g2

0xe429,	// (0x0006123c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x00062cce) cell_contacts_ai5_widget_pane_g

0xe435,	// (0x00061248) cell_contacts_ai5_widget_pane_t1

0xf281,	// (0x00062094) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe4ac,	// (0x000612bf) settings_container_pane

0x85b0,	// (0x0005b3c3) listscroll_set_pane_copy1

0xad90,	// (0x0005dba3) scroll_pane_cp121_copy1

0xe4b8,	// (0x000612cb) set_content_pane_copy1

0xe4c0,	// (0x000612d3) aid_height_set_list_copy1_ParamLimits

0xe4c0,	// (0x000612d3) aid_height_set_list_copy1

0xa408,	// (0x0005d21b) aid_size_parent_copy1_ParamLimits

0xa408,	// (0x0005d21b) aid_size_parent_copy1

0xe4cc,	// (0x000612df) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe4cc,	// (0x000612df) button_value_adjust_pane_cp6_copy1

0x88d7,	// (0x0005b6ea) list_highlight_pane_cp2_copy1_ParamLimits

0x88d7,	// (0x0005b6ea) list_highlight_pane_cp2_copy1

0xe4e0,	// (0x000612f3) list_set_pane_copy1_ParamLimits

0xe4e0,	// (0x000612f3) list_set_pane_copy1

0xe447,	// (0x0006125a) main_pane_set_t1_copy1_ParamLimits

0xe447,	// (0x0006125a) main_pane_set_t1_copy1

0xe481,	// (0x00061294) main_pane_set_t2_copy1_ParamLimits

0xe481,	// (0x00061294) main_pane_set_t2_copy1

0xe5a1,	// (0x000613b4) main_pane_set_t3_copy1

0xe5af,	// (0x000613c2) main_pane_set_t4_copy1

0xe4a0,	// (0x000612b3) set_content_pane_g1_copy1_ParamLimits

0xe4a0,	// (0x000612b3) set_content_pane_g1_copy1

0xe5bd,	// (0x000613d0) setting_code_pane_copy1

0xe5c5,	// (0x000613d8) setting_slider_graphic_pane_copy1

0xe5c5,	// (0x000613d8) setting_slider_pane_copy1

0xe5cd,	// (0x000613e0) setting_text_pane_copy1

0xe5cd,	// (0x000613e0) setting_volume_pane_copy1

0xe5bd,	// (0x000613d0) settings_code_pane_cp2_copy1

0xe5d5,	// (0x000613e8) settings_code_pane_cp_copy1_ParamLimits

0xe5d5,	// (0x000613e8) settings_code_pane_cp_copy1

0x7f94,	// (0x0005ada7) volume_set_pane_copy1

0xe5e9,	// (0x000613fc) volume_set_pane_g10_copy1

0xe5f5,	// (0x00061408) volume_set_pane_g1_copy1

0xe5ff,	// (0x00061412) volume_set_pane_g2_copy1

0xe609,	// (0x0006141c) volume_set_pane_g3_copy1

0xe613,	// (0x00061426) volume_set_pane_g4_copy1

0xe61d,	// (0x00061430) volume_set_pane_g5_copy1

0xe627,	// (0x0006143a) volume_set_pane_g6_copy1

0xe631,	// (0x00061444) volume_set_pane_g7_copy1

0xe63b,	// (0x0006144e) volume_set_pane_g8_copy1

0xe645,	// (0x00061458) volume_set_pane_g9_copy1

0xec31,	// (0x00061a44) bg_set_opt_pane_cp_copy1_ParamLimits

0xec31,	// (0x00061a44) bg_set_opt_pane_cp_copy1

0x7fa0,	// (0x0005adb3) setting_slider_pane_t1_copy1_ParamLimits

0x7fa0,	// (0x0005adb3) setting_slider_pane_t1_copy1

0x7fbf,	// (0x0005add2) setting_slider_pane_t2_copy1_ParamLimits

0x7fbf,	// (0x0005add2) setting_slider_pane_t2_copy1

0x7fd9,	// (0x0005adec) setting_slider_pane_t3_copy1_ParamLimits

0x7fd9,	// (0x0005adec) setting_slider_pane_t3_copy1

0x7ff1,	// (0x0005ae04) slider_set_pane_copy1_ParamLimits

0x7ff1,	// (0x0005ae04) slider_set_pane_copy1

0xf2d9,	// (0x000620ec) set_opt_bg_pane_g1_copy2

0xf2e1,	// (0x000620f4) set_opt_bg_pane_g2_copy2

0xe651,	// (0x00061464) set_opt_bg_pane_g3_copy2

0xf2f1,	// (0x00062104) set_opt_bg_pane_g4_copy2

0xf2f9,	// (0x0006210c) set_opt_bg_pane_g5_copy2

0xf301,	// (0x00062114) set_opt_bg_pane_g6_copy2

0xe65b,	// (0x0006146e) set_opt_bg_pane_g7_copy2

0xe665,	// (0x00061478) set_opt_bg_pane_g8_copy2

0xe66f,	// (0x00061482) set_opt_bg_pane_g9_copy2

0x8007,	// (0x0005ae1a) aid_size_touch_slider_mark_copy1_ParamLimits

0x8007,	// (0x0005ae1a) aid_size_touch_slider_mark_copy1

0xe679,	// (0x0006148c) slider_set_pane_g1_copy1

0x801b,	// (0x0005ae2e) slider_set_pane_g2_copy1

0x6dce,	// (0x00059be1) slider_set_pane_g3_copy1_ParamLimits

0x6dce,	// (0x00059be1) slider_set_pane_g3_copy1

0x6de2,	// (0x00059bf5) slider_set_pane_g4_copy1_ParamLimits

0x6de2,	// (0x00059bf5) slider_set_pane_g4_copy1

0x6dfa,	// (0x00059c0d) slider_set_pane_g5_copy1_ParamLimits

0x6dfa,	// (0x00059c0d) slider_set_pane_g5_copy1

0x6dce,	// (0x00059be1) slider_set_pane_g6_copy1_ParamLimits

0x6dce,	// (0x00059be1) slider_set_pane_g6_copy1

0x8023,	// (0x0005ae36) slider_set_pane_g7_copy1_ParamLimits

0x8023,	// (0x0005ae36) slider_set_pane_g7_copy1

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp2_copy1

0xe682,	// (0x00061495) setting_slider_graphic_pane_g1_copy1

0xe68b,	// (0x0006149e) setting_slider_graphic_pane_t1_copy1

0xe69b,	// (0x000614ae) setting_slider_graphic_pane_t2_copy1

0xe6ab,	// (0x000614be) slider_set_pane_cp_copy1

0xe6bb,	// (0x000614ce) input_focus_pane_cp1_copy1

0xe6c4,	// (0x000614d7) list_set_text_pane_copy1

0xe6cc,	// (0x000614df) setting_text_pane_g1_copy1

0x2fd2,	// (0x00055de5) set_text_pane_t1_copy1

0xe6bb,	// (0x000614ce) input_focus_pane_cp2_copy1

0xe6cc,	// (0x000614df) setting_code_pane_g1_copy1

0xe6d5,	// (0x000614e8) setting_code_pane_t1_copy1

0xab95,	// (0x0005d9a8) list_set_graphic_pane_copy1

0xebe3,	// (0x000619f6) bg_set_opt_pane_cp4_copy1

0x82ab,	// (0x0005b0be) list_set_graphic_pane_g1_copy1_ParamLimits

0x82ab,	// (0x0005b0be) list_set_graphic_pane_g1_copy1

0xe6e3,	// (0x000614f6) list_set_graphic_pane_g2_copy1

0x82c3,	// (0x0005b0d6) list_set_graphic_pane_t1_copy1_ParamLimits

0x82c3,	// (0x0005b0d6) list_set_graphic_pane_t1_copy1

0xb65f,	// (0x0005e472) rs_clock_indi_pane_g1

0xe6eb,	// (0x000614fe) rs_clock_indi_pane_t1

0xe6f9,	// (0x0006150c) rs_indi_pane

0xe701,	// (0x00061514) rs_indi_pane_g1

0xe70a,	// (0x0006151d) rs_indi_pane_g2

0xe3f3,	// (0x00061206) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x00062cd5) rs_indi_pane_g

0x85b0,	// (0x0005b3c3) bg_popup_preview_window_pane_cp03

0xe713,	// (0x00061526) popup_fep_tooltip_window_t1

0xc33c,	// (0x0005f14f) popup_note2_window_g2_ParamLimits

0xc33c,	// (0x0005f14f) popup_note2_window_g2

0x0001,

0xfc4f,	// (0x00062a62) popup_note2_window_g_ParamLimits

0xfc4f,	// (0x00062a62) popup_note2_window_g

0xc844,	// (0x0005f657) bg_popup_sub_pane_cp11_ParamLimits

0xc851,	// (0x0005f664) cell_ai3_links_pane_g1_ParamLimits

0xc868,	// (0x0005f67b) cell_ai3_links_pane_t1

0x2fd2,	// (0x00055de5) set_text_pane_t1_copy1_ParamLimits

0x84b2,	// (0x0005b2c5) cell_graphic_popup_pane_cp2_ParamLimits

0x84b2,	// (0x0005b2c5) cell_graphic_popup_pane_cp2

0xe721,	// (0x00061534) cell_graphic_popup_pane_g1_cp2

0xefd6,	// (0x00061de9) cell_graphic_popup_pane_g2_cp2

0xe729,	// (0x0006153c) cell_graphic_popup_pane_g3_cp2

0xe731,	// (0x00061544) cell_graphic_popup_pane_t2_cp2

0xefe7,	// (0x00061dfa) grid_highlight_pane_cp3_cp2

0x12a9,	// (0x000540bc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf281,	// (0x00062094) main_tmo_pane_ParamLimits

0xcb82,	// (0x0005f995) popup_tmo_big_image_note_window

0xdd51,	// (0x00060b64) cell_ai5_widget_list_pane

0xdd59,	// (0x00060b6c) cell_ai5_widget_lrg_icon_pane

0xe32d,	// (0x00061140) tmo_note_info_pane_t1_ParamLimits

0xe342,	// (0x00061155) tmo_note_info_pane_t2_ParamLimits

0xe35b,	// (0x0006116e) tmo_note_info_pane_t3_ParamLimits

0xe370,	// (0x00061183) tmo_note_info_pane_t4_ParamLimits

0xe382,	// (0x00061195) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x00062cc3) tmo_note_info_pane_t_ParamLimits

0xe4ac,	// (0x000612bf) settings_container_pane_ParamLimits

0xe6b3,	// (0x000614c6) indicator_popup_pane_cp5

0xe6b3,	// (0x000614c6) indicator_popup_pane_cp6

0xab95,	// (0x0005d9a8) list_set_graphic_pane_copy1_ParamLimits

0xebcf,	// (0x000619e2) bg_popup_window_pane_cp23

0xe73f,	// (0x00061552) popup_tmo_big_image_note_window_g1

0xe74b,	// (0x0006155e) popup_tmo_big_image_note_window_t1

0xe75b,	// (0x0006156e) popup_tmo_big_image_note_window_t2

0xe76b,	// (0x0006157e) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x00062cdc) popup_tmo_big_image_note_window_t

0xb65f,	// (0x0005e472) cell_ai5_widget_lrg_icon_pane_g1

0xe77b,	// (0x0006158e) cell_ai5_widget_lrg_icon_pane_t1

0xe789,	// (0x0006159c) cell_ai5_widget_list_row_pane_ParamLimits

0xe789,	// (0x0006159c) cell_ai5_widget_list_row_pane

0xe7a1,	// (0x000615b4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe7a1,	// (0x000615b4) cell_ai5_widget_list_row_pane_g1

0xe7ae,	// (0x000615c1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe7ae,	// (0x000615c1) cell_ai5_widget_list_row_pane_t1

0xe7d9,	// (0x000615ec) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe7d9,	// (0x000615ec) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x00062ce3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x00062ce3) cell_ai5_widget_list_row_pane_t

0x4e6b,	// (0x00057c7e) main_fep_vtchi_ss_pane

0xe829,	// (0x0006163c) popup_fep_char_pre_window

0xe831,	// (0x00061644) popup_fep_ituss_window

0xe85d,	// (0x00061670) popup_fep_vkbss_window

0x88d7,	// (0x0005b6ea) grid_vkbss_keypad_pane_ParamLimits

0x88d7,	// (0x0005b6ea) grid_vkbss_keypad_pane

0xe89f,	// (0x000616b2) ituss_keypad_pane

0x8043,	// (0x0005ae56) aid_vkbss_key_offset_ParamLimits

0x8043,	// (0x0005ae56) aid_vkbss_key_offset

0x804f,	// (0x0005ae62) cell_vkbss_key_pane_ParamLimits

0x804f,	// (0x0005ae62) cell_vkbss_key_pane

0xe8ab,	// (0x000616be) bg_cell_vkbss_key_g1_ParamLimits

0xe8ab,	// (0x000616be) bg_cell_vkbss_key_g1

0xe8b7,	// (0x000616ca) cell_vkbss_key_3p_pane_ParamLimits

0xe8b7,	// (0x000616ca) cell_vkbss_key_3p_pane

0xe8ed,	// (0x00061700) cell_vkbss_key_g1_ParamLimits

0xe8ed,	// (0x00061700) cell_vkbss_key_g1

0xe923,	// (0x00061736) cell_vkbss_key_t1_ParamLimits

0xe923,	// (0x00061736) cell_vkbss_key_t1

0x80b1,	// (0x0005aec4) cell_ituss_key_pane_ParamLimits

0x80b1,	// (0x0005aec4) cell_ituss_key_pane

0xe97f,	// (0x00061792) bg_cell_ituss_key_g1_ParamLimits

0xe97f,	// (0x00061792) bg_cell_ituss_key_g1

0xe98b,	// (0x0006179e) cell_ituss_key_pane_g1_ParamLimits

0xe98b,	// (0x0006179e) cell_ituss_key_pane_g1

0x80c2,	// (0x0005aed5) cell_ituss_key_pane_g2_ParamLimits

0x80c2,	// (0x0005aed5) cell_ituss_key_pane_g2

0x0005,

0xfed7,	// (0x00062cea) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x00062cea) cell_ituss_key_pane_g

0x8146,	// (0x0005af59) cell_ituss_key_t1_ParamLimits

0x8146,	// (0x0005af59) cell_ituss_key_t1

0x8180,	// (0x0005af93) cell_ituss_key_t2_ParamLimits

0x8180,	// (0x0005af93) cell_ituss_key_t2

0x81b2,	// (0x0005afc5) cell_ituss_key_t3_ParamLimits

0x81b2,	// (0x0005afc5) cell_ituss_key_t3

0x81e3,	// (0x0005aff6) cell_ituss_key_t4_ParamLimits

0x81e3,	// (0x0005aff6) cell_ituss_key_t4

0x0004,

0xfee4,	// (0x00062cf7) cell_ituss_key_t_ParamLimits

0xfee4,	// (0x00062cf7) cell_ituss_key_t

0xe9b1,	// (0x000617c4) cell_vkbss_key_3p_pane_g1

0xe9b9,	// (0x000617cc) cell_vkbss_key_3p_pane_g2

0xe9c1,	// (0x000617d4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeef,	// (0x00062d02) cell_vkbss_key_3p_pane_g

0x85b0,	// (0x0005b3c3) bg_popup_fep_char_preview_window_cp02

0xe9c9,	// (0x000617dc) popup_fep_char_pre_window_t1

0xdcda,	// (0x00060aed) main_ai5_sk_pane

0xe3fc,	// (0x0006120f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe408,	// (0x0006121b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe41d,	// (0x00061230) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe429,	// (0x0006123c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x00062cce) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe435,	// (0x00061248) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf281,	// (0x00062094) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9d7,	// (0x000617ea) main_ai5_sk_pane_g1

0x92db,	// (0x0005c0ee) popup_query_code_window_g1

0xe847,	// (0x0006165a) popup_fep_vkb_icf_pane

0xe876,	// (0x00061689) popup_fep_vtchi_icf_pane

0xe9e0,	// (0x000617f3) bg_icf_pane

0xe9e0,	// (0x000617f3) list_vkb_icf_pane

0xe9ec,	// (0x000617ff) bg_icf_pane_cp01

0xe9ff,	// (0x00061812) vtchi_icf_list_pane

0xea5f,	// (0x00061872) list_vkb_icf_pane_t1_ParamLimits

0xea5f,	// (0x00061872) list_vkb_icf_pane_t1

0xea78,	// (0x0006188b) vtchi_icf_list_pane_t1_ParamLimits

0xea78,	// (0x0006188b) vtchi_icf_list_pane_t1

0xe831,	// (0x00061644) popup_fep_ituss_window_ParamLimits

0xe876,	// (0x00061689) popup_fep_vtchi_icf_pane_ParamLimits

0xe89f,	// (0x000616b2) ituss_keypad_pane_ParamLimits

0x8039,	// (0x0005ae4c) ituss_sks_pane

0xe9e0,	// (0x000617f3) bg_icf_pane_ParamLimits

0xe801,	// (0x00061614) icf_edit_indi_pane_ParamLimits

0xe801,	// (0x00061614) icf_edit_indi_pane

0xe9e0,	// (0x000617f3) list_vkb_icf_pane_ParamLimits

0xe9ec,	// (0x000617ff) bg_icf_pane_cp01_ParamLimits

0xe81c,	// (0x0006162f) icf_edit_indi_pane_cp01_ParamLimits

0xe81c,	// (0x0006162f) icf_edit_indi_pane_cp01

0xe9ff,	// (0x00061812) vtchi_query_pane

0xdb80,	// (0x00060993) icf_edit_indi_pane_g1_ParamLimits

0xdb80,	// (0x00060993) icf_edit_indi_pane_g1

0xeae8,	// (0x000618fb) icf_edit_indi_pane_g2_ParamLimits

0xeae8,	// (0x000618fb) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00062d2d) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00062d2d) icf_edit_indi_pane_g

0xeafc,	// (0x0006190f) icf_edit_indi_pane_t1

0xea91,	// (0x000618a4) bg_input_focus_pane_cp042

0xf1ba,	// (0x00061fcd) vtchi_button_pane

0xea9a,	// (0x000618ad) vtchi_query_pane_t1

0xeaa8,	// (0x000618bb) vtchi_query_pane_t2

0xeab6,	// (0x000618c9) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00062d1c) vtchi_query_pane_t

0x4e6b,	// (0x00057c7e) bg_button_pane_cp13

0xeac4,	// (0x000618d7) vtchi_button_pane_g1

0x8226,	// (0x0005b039) ituss_sks_pane_g1

0x8231,	// (0x0005b044) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00062d23) ituss_sks_pane_g

0xeacc,	// (0x000618df) ituss_sks_pane_t1

0xeada,	// (0x000618ed) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00062d28) ituss_sks_pane_t

0xb133,	// (0x0005df46) indicator_nsta_pane_cp_g1

0xb13c,	// (0x0005df4f) indicator_nsta_pane_cp_g2

0xb144,	// (0x0005df57) indicator_nsta_pane_cp_g3

0xb14c,	// (0x0005df5f) indicator_nsta_pane_cp_g4

0xb13c,	// (0x0005df4f) indicator_nsta_pane_cp_g5

0xb144,	// (0x0005df57) indicator_nsta_pane_cp_g6

0x0005,

0xfa8d,	// (0x000628a0) indicator_nsta_pane_cp_g

0xd8c7,	// (0x000606da) cell_graphic2_pane_t2_ParamLimits

0xd8c7,	// (0x000606da) cell_graphic2_pane_t2

0x0001,

0xfda6,	// (0x00062bb9) cell_graphic2_pane_t_ParamLimits

0xfda6,	// (0x00062bb9) cell_graphic2_pane_t

0xd8f3,	// (0x00060706) cell_graphic2_control_pane_t1

0x5f6e,	// (0x00058d81) signal_pane_g3_ParamLimits

0x5f6e,	// (0x00058d81) signal_pane_g3

0x5f7d,	// (0x00058d90) signal_pane_g4_ParamLimits

0x5f7d,	// (0x00058d90) signal_pane_g4

0xe7eb,	// (0x000615fe) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe7eb,	// (0x000615fe) cell_ai5_widget_list_row_pane_t3

0xe99f,	// (0x000617b2) cell_ituss_key_pane_t1_ParamLimits

0xe99f,	// (0x000617b2) cell_ituss_key_pane_t1

0x8f42,	// (0x0005bd55) form_field_data_wide_pane_vc_t2_ParamLimits

0x8f42,	// (0x0005bd55) form_field_data_wide_pane_vc_t2

0x8f56,	// (0x0005bd69) form_field_data_wide_pane_vc_t3_ParamLimits

0x8f56,	// (0x0005bd69) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x000625fc) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x000625fc) form_field_data_wide_pane_vc_t

0xadd0,	// (0x0005dbe3) form_field_slider_wide_pane_vc_t3_ParamLimits

0xadd0,	// (0x0005dbe3) form_field_slider_wide_pane_vc_t3

0xaea6,	// (0x0005dcb9) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaea6,	// (0x0005dcb9) form_field_popup_wide_pane_vc_t2

0xaebd,	// (0x0005dcd0) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaebd,	// (0x0005dcd0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7c,	// (0x0006288f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7c,	// (0x0006288f) form_field_popup_wide_pane_vc_t

0x7ded,	// (0x0005ac00) aid_fshwr2_btn_pane_ParamLimits

0x7dfd,	// (0x0005ac10) aid_fshwr2_syb_pane_ParamLimits

0x7e11,	// (0x0005ac24) aid_fshwr2_txt_pane_ParamLimits

0x7611,	// (0x0005a424) fshwr2_bg_pane_ParamLimits

0x7e21,	// (0x0005ac34) fshwr2_func_candi_pane_ParamLimits

0x7e41,	// (0x0005ac54) fshwr2_hwr_syb_pane_ParamLimits

0x7e57,	// (0x0005ac6a) fshwr2_icf_pane_ParamLimits

0x9cf8,	// (0x0005cb0b) list_double_graphic_pane_vc_g4_ParamLimits

0x9cf8,	// (0x0005cb0b) list_double_graphic_pane_vc_g4

0x80e2,	// (0x0005aef5) cell_ituss_key_pane_g3_ParamLimits

0x80e2,	// (0x0005aef5) cell_ituss_key_pane_g3

0x8214,	// (0x0005b027) cell_ituss_key_t5_ParamLimits

0x8214,	// (0x0005b027) cell_ituss_key_t5

0xe85d,	// (0x00061670) popup_fep_vkbss_window_ParamLimits

0xdce4,	// (0x00060af7) aid_cell_ai5_quarter

0xeafc,	// (0x0006190f) icf_edit_indi_pane_t1_ParamLimits

0xee1a,	// (0x00061c2d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xee1a,	// (0x00061c2d) aid_tch_indicator_popup_pane_cp2

0xee2d,	// (0x00061c40) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xee2d,	// (0x00061c40) aid_tch_query_popup_data_pane_cp2

0x9283,	// (0x0005c096) aid_tch_query_popup_pane_ParamLimits

0x9283,	// (0x0005c096) aid_tch_query_popup_pane

0x9283,	// (0x0005c096) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9283,	// (0x0005c096) aid_tch_query_popup_data_pane_cp1

0x88d7,	// (0x0005b6ea) cell_fshwr2_syb_bg_pane_ParamLimits

0x7f61,	// (0x0005ad74) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7f75,	// (0x0005ad88) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe847,	// (0x0006165a) popup_fep_vkb_icf_pane_ParamLimits

0x7c33,	// (0x0005aa46) bg_popup_fep_char_preview_window_g10

0xde19,	// (0x00060c2c) cell_ai5_widget_pane_g11_ParamLimits

0xde19,	// (0x00060c2c) cell_ai5_widget_pane_g11

0xde25,	// (0x00060c38) cell_ai5_widget_pane_g12_ParamLimits

0xde25,	// (0x00060c38) cell_ai5_widget_pane_g12

0xde31,	// (0x00060c44) cell_ai5_widget_pane_g13_ParamLimits

0xde31,	// (0x00060c44) cell_ai5_widget_pane_g13

0xdf61,	// (0x00060d74) cell_ai5_widget_pane_t11_ParamLimits

0xdf61,	// (0x00060d74) cell_ai5_widget_pane_t11

0xdf73,	// (0x00060d86) cell_ai5_widget_pane_t12_ParamLimits

0xdf73,	// (0x00060d86) cell_ai5_widget_pane_t12

0x80ee,	// (0x0005af01) cell_ituss_key_pane_g4_ParamLimits

0x80ee,	// (0x0005af01) cell_ituss_key_pane_g4

0x810a,	// (0x0005af1d) cell_ituss_key_pane_g5_ParamLimits

0x810a,	// (0x0005af1d) cell_ituss_key_pane_g5

0x8126,	// (0x0005af39) cell_ituss_key_pane_g6_ParamLimits

0x8126,	// (0x0005af39) cell_ituss_key_pane_g6

0x8e25,	// (0x0005bc38) bg_icf_pane_g1

0xea07,	// (0x0006181a) bg_icf_pane_g2

0xea13,	// (0x00061826) bg_icf_pane_g3

0xea1d,	// (0x00061830) bg_icf_pane_g4

0xea29,	// (0x0006183c) bg_icf_pane_g5

0xea33,	// (0x00061846) bg_icf_pane_g6

0xea3f,	// (0x00061852) bg_icf_pane_g7

0xea49,	// (0x0006185c) bg_icf_pane_g8

0xea55,	// (0x00061868) bg_icf_pane_g9

0x0008,

0xfef6,	// (0x00062d09) bg_icf_pane_g

0xe88c,	// (0x0006169f) popup_hyb_candi_window_ParamLimits

0xe88c,	// (0x0006169f) popup_hyb_candi_window

0x8eb1,	// (0x0005bcc4) bg_popup_sub_pane_cp01_ParamLimits

0x8eb1,	// (0x0005bcc4) bg_popup_sub_pane_cp01

0xeb15,	// (0x00061928) entry_hyb_candi_pane_ParamLimits

0xeb15,	// (0x00061928) entry_hyb_candi_pane

0xeb24,	// (0x00061937) grid_hyb_candi_pane_ParamLimits

0xeb24,	// (0x00061937) grid_hyb_candi_pane

0xeb39,	// (0x0006194c) grid_hyb_phrase_pane_ParamLimits

0xeb39,	// (0x0006194c) grid_hyb_phrase_pane

0xeb48,	// (0x0006195b) cell_hyb_candi_pane_ParamLimits

0xeb48,	// (0x0006195b) cell_hyb_candi_pane

0xf1c3,	// (0x00061fd6) cell_hyb_candi_scroll_pane

0x3198,	// (0x00055fab) cell_hyb_candi_pane_g1

0xeb64,	// (0x00061977) cell_hyb_candi_pane_t1

0xeb72,	// (0x00061985) cell_hyb_phrase_pane

0x3198,	// (0x00055fab) cell_hyb_phrase_pane_g1

0xeb7b,	// (0x0006198e) cell_hyb_phrase_pane_t1

0xeb89,	// (0x0006199c) entry_hyb_candi_pane_t1

0x85b0,	// (0x0005b3c3) input_focus_pane_cp06

0xeb97,	// (0x000619aa) cell_hyb_candi_scroll_pane_g1

0xeb9f,	// (0x000619b2) cell_hyb_candi_scroll_pane_g1_aid

0xeba7,	// (0x000619ba) cell_hyb_candi_scroll_pane_g2

0xebaf,	// (0x000619c2) cell_hyb_candi_scroll_pane_g2_aid

0xebb7,	// (0x000619ca) cell_hyb_candi_scroll_pane_g3

0xebbf,	// (0x000619d2) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
