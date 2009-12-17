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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002de5a };

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
0x201b,	// (0x0002fe75) Screen

0x202d,	// (0x0002fe87) application_window_ParamLimits

0x202d,	// (0x0002fe87) application_window

0x2045,	// (0x0002fe9f) screen_g1

0x206f,	// (0x0002fec9) area_bottom_pane_ParamLimits

0x206f,	// (0x0002fec9) area_bottom_pane

0x211a,	// (0x0002ff74) area_top_pane_ParamLimits

0x211a,	// (0x0002ff74) area_top_pane

0x8fb4,	// (0x00036e0e) main_pane_ParamLimits

0x8fb4,	// (0x00036e0e) main_pane

0x2192,	// (0x0002ffec) misc_graphics

0x36cb,	// (0x00031525) battery_pane_ParamLimits

0x36cb,	// (0x00031525) battery_pane

0x720c,	// (0x00035066) bg_status_flat_pane_g8

0x7214,	// (0x0003506e) bg_status_flat_pane_g9

0x6822,	// (0x0003467c) context_pane_ParamLimits

0x6822,	// (0x0003467c) context_pane

0x3825,	// (0x0003167f) navi_pane_ParamLimits

0x3825,	// (0x0003167f) navi_pane

0x389a,	// (0x000316f4) signal_pane_ParamLimits

0x389a,	// (0x000316f4) signal_pane

0x0008,

0xf8ab,	// (0x0003d705) bg_status_flat_pane_g

0x3926,	// (0x00031780) status_pane_g1_ParamLimits

0x3926,	// (0x00031780) status_pane_g1

0x3932,	// (0x0003178c) status_pane_g2_ParamLimits

0x3932,	// (0x0003178c) status_pane_g2

0x6888,	// (0x000346e2) status_pane_g3_ParamLimits

0x6888,	// (0x000346e2) status_pane_g3

0x0004,

0xf7e5,	// (0x0003d63f) status_pane_g_ParamLimits

0xf7e5,	// (0x0003d63f) status_pane_g

0x393e,	// (0x00031798) title_pane_ParamLimits

0x393e,	// (0x00031798) title_pane

0x3999,	// (0x000317f3) uni_indicator_pane_ParamLimits

0x3999,	// (0x000317f3) uni_indicator_pane

0x6684,	// (0x000344de) bg_list_pane_ParamLimits

0x6684,	// (0x000344de) bg_list_pane

0x3093,	// (0x00030eed) find_pane

0x309b,	// (0x00030ef5) listscroll_app_pane_ParamLimits

0x309b,	// (0x00030ef5) listscroll_app_pane

0x66a4,	// (0x000344fe) listscroll_form_pane

0x30a7,	// (0x00030f01) listscroll_gen_pane_ParamLimits

0x30a7,	// (0x00030f01) listscroll_gen_pane

0x66a4,	// (0x000344fe) listscroll_set_pane

0x30bc,	// (0x00030f16) main_idle_act_pane

0x6462,	// (0x000342bc) main_idle_trad_pane

0x6462,	// (0x000342bc) main_list_empty_pane

0x5c37,	// (0x00033a91) main_midp_pane

0x66be,	// (0x00034518) main_pane_g1_ParamLimits

0x66be,	// (0x00034518) main_pane_g1

0x30cf,	// (0x00030f29) popup_ai_message_window_ParamLimits

0x30cf,	// (0x00030f29) popup_ai_message_window

0x3153,	// (0x00030fad) popup_fep_china_uni_window_ParamLimits

0x3153,	// (0x00030fad) popup_fep_china_uni_window

0x66ee,	// (0x00034548) popup_fep_japan_candidate_window_ParamLimits

0x66ee,	// (0x00034548) popup_fep_japan_candidate_window

0x670c,	// (0x00034566) popup_fep_japan_predictive_window_ParamLimits

0x670c,	// (0x00034566) popup_fep_japan_predictive_window

0x3191,	// (0x00030feb) popup_find_window

0x31aa,	// (0x00031004) popup_grid_graphic_window_ParamLimits

0x31aa,	// (0x00031004) popup_grid_graphic_window

0x6738,	// (0x00034592) popup_large_graphic_colour_window

0x3226,	// (0x00031080) popup_menu_window_ParamLimits

0x3226,	// (0x00031080) popup_menu_window

0x3384,	// (0x000311de) popup_note_image_window

0x334c,	// (0x000311a6) popup_note_wait_window_ParamLimits

0x334c,	// (0x000311a6) popup_note_wait_window

0x339a,	// (0x000311f4) popup_note_window_ParamLimits

0x339a,	// (0x000311f4) popup_note_window

0x342e,	// (0x00031288) popup_query_code_window_ParamLimits

0x342e,	// (0x00031288) popup_query_code_window

0x6757,	// (0x000345b1) popup_query_data_code_window_ParamLimits

0x6757,	// (0x000345b1) popup_query_data_code_window

0x3466,	// (0x000312c0) popup_query_data_window_ParamLimits

0x3466,	// (0x000312c0) popup_query_data_window

0x34da,	// (0x00031334) popup_query_sat_info_window_ParamLimits

0x34da,	// (0x00031334) popup_query_sat_info_window

0x3567,	// (0x000313c1) popup_snote_single_graphic_window_ParamLimits

0x3567,	// (0x000313c1) popup_snote_single_graphic_window

0x3567,	// (0x000313c1) popup_snote_single_text_window_ParamLimits

0x3567,	// (0x000313c1) popup_snote_single_text_window

0x676c,	// (0x000345c6) popup_sub_window_general

0x67ae,	// (0x00034608) popup_window_general_ParamLimits

0x67ae,	// (0x00034608) popup_window_general

0x67c1,	// (0x0003461b) power_save_pane

0xee64,	// (0x0003ccbe) control_pane_g1_ParamLimits

0xee64,	// (0x0003ccbe) control_pane_g1

0x9bb7,	// (0x00037a11) control_pane_g2_ParamLimits

0x9bb7,	// (0x00037a11) control_pane_g2

0x666e,	// (0x000344c8) control_pane_g3_ParamLimits

0x666e,	// (0x000344c8) control_pane_g3

0x0007,

0xf7cd,	// (0x0003d627) control_pane_g_ParamLimits

0xf7cd,	// (0x0003d627) control_pane_g

0xee91,	// (0x0003cceb) control_pane_t1_ParamLimits

0xee91,	// (0x0003cceb) control_pane_t1

0xeeed,	// (0x0003cd47) control_pane_t2_ParamLimits

0xeeed,	// (0x0003cd47) control_pane_t2

0x0002,

0xf7de,	// (0x0003d638) control_pane_t_ParamLimits

0xf7de,	// (0x0003d638) control_pane_t

0x6591,	// (0x000343eb) navi_navi_volume_pane_cp1

0x659a,	// (0x000343f4) status_small_icon_pane

0x65a2,	// (0x000343fc) status_small_pane_g1_ParamLimits

0x65a2,	// (0x000343fc) status_small_pane_g1

0x65d6,	// (0x00034430) status_small_pane_g2_ParamLimits

0x65d6,	// (0x00034430) status_small_pane_g2

0x65e2,	// (0x0003443c) status_small_pane_g3_ParamLimits

0x65e2,	// (0x0003443c) status_small_pane_g3

0x65ee,	// (0x00034448) status_small_pane_g4_ParamLimits

0x65ee,	// (0x00034448) status_small_pane_g4

0x65fa,	// (0x00034454) status_small_pane_g5_ParamLimits

0x65fa,	// (0x00034454) status_small_pane_g5

0x6607,	// (0x00034461) status_small_pane_g6_ParamLimits

0x6607,	// (0x00034461) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003d616) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003d616) status_small_pane_g

0x6637,	// (0x00034491) status_small_pane_t1

0x665a,	// (0x000344b4) status_small_wait_pane_ParamLimits

0x665a,	// (0x000344b4) status_small_wait_pane

0x2dfb,	// (0x00030c55) aid_levels_signal_ParamLimits

0x2dfb,	// (0x00030c55) aid_levels_signal

0x2e0f,	// (0x00030c69) signal_pane_g1_ParamLimits

0x2e0f,	// (0x00030c69) signal_pane_g1

0x2e29,	// (0x00030c83) signal_pane_g2_ParamLimits

0x2e29,	// (0x00030c83) signal_pane_g2

0x0001,

0xf751,	// (0x0003d5ab) signal_pane_g_ParamLimits

0xf751,	// (0x0003d5ab) signal_pane_g

0x6007,	// (0x00033e61) context_pane_g1

0x2241,	// (0x0003009b) title_pane_g1

0x228f,	// (0x000300e9) title_pane_t1

0x231c,	// (0x00030176) title_pane_t2

0x2342,	// (0x0003019c) title_pane_t3

0x0002,

0xf59b,	// (0x0003d3f5) title_pane_t

0x39bf,	// (0x00031819) aid_levels_battery_ParamLimits

0x39bf,	// (0x00031819) aid_levels_battery

0x39d7,	// (0x00031831) battery_pane_g1_ParamLimits

0x39d7,	// (0x00031831) battery_pane_g1

0x39f2,	// (0x0003184c) battery_pane_g2_ParamLimits

0x39f2,	// (0x0003184c) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003d64a) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003d64a) battery_pane_g

0x3d61,	// (0x00031bbb) uni_indicator_pane_g1

0x3d76,	// (0x00031bd0) uni_indicator_pane_g2

0x3d8c,	// (0x00031be6) uni_indicator_pane_g3

0x0005,

0xf953,	// (0x0003d7ad) uni_indicator_pane_g

0x5b5b,	// (0x000339b5) navi_icon_pane_ParamLimits

0x5b5b,	// (0x000339b5) navi_icon_pane

0x2192,	// (0x0002ffec) navi_midp_pane

0x2192,	// (0x0002ffec) navi_navi_pane

0x5b5b,	// (0x000339b5) navi_text_pane_ParamLimits

0x5b5b,	// (0x000339b5) navi_text_pane

0x2045,	// (0x0002fe9f) status_small_wait_pane_g1

0x2887,	// (0x000306e1) status_small_wait_pane_g2

0x0001,

0xf94e,	// (0x0003d7a8) status_small_wait_pane_g

0x3d07,	// (0x00031b61) navi_navi_icon_text_pane

0x3d21,	// (0x00031b7b) navi_navi_pane_g1_ParamLimits

0x3d21,	// (0x00031b7b) navi_navi_pane_g1

0x3d0f,	// (0x00031b69) navi_navi_pane_g2_ParamLimits

0x3d0f,	// (0x00031b69) navi_navi_pane_g2

0x0001,

0xf91c,	// (0x0003d776) navi_navi_pane_g_ParamLimits

0xf91c,	// (0x0003d776) navi_navi_pane_g

0x3d33,	// (0x00031b8d) navi_navi_tabs_pane

0x3d07,	// (0x00031b61) navi_navi_text_pane

0x3d07,	// (0x00031b61) navi_navi_volume_pane

0x7752,	// (0x000355ac) navi_text_pane_t1

0x7746,	// (0x000355a0) navi_icon_pane_g1

0x769a,	// (0x000354f4) navi_navi_text_pane_t1

0xa7a7,	// (0x00038601) navi_navi_volume_pane_g1

0xf0dc,	// (0x0003cf36) volume_small_pane

0x3c5a,	// (0x00031ab4) navi_navi_icon_text_pane_g1

0x3c62,	// (0x00031abc) navi_navi_icon_text_pane_t1

0x7254,	// (0x000350ae) navi_tabs_2_long_pane

0x7254,	// (0x000350ae) navi_tabs_2_pane

0x7254,	// (0x000350ae) navi_tabs_3_long_pane

0x7254,	// (0x000350ae) navi_tabs_3_pane

0x7254,	// (0x000350ae) navi_tabs_4_pane

0xf0bc,	// (0x0003cf16) tabs_2_active_pane_ParamLimits

0xf0bc,	// (0x0003cf16) tabs_2_active_pane

0xf0cc,	// (0x0003cf26) tabs_2_passive_pane_ParamLimits

0xf0cc,	// (0x0003cf26) tabs_2_passive_pane

0xf08a,	// (0x0003cee4) tabs_3_active_pane_ParamLimits

0xf08a,	// (0x0003cee4) tabs_3_active_pane

0xf09a,	// (0x0003cef4) tabs_3_passive_pane_ParamLimits

0xf09a,	// (0x0003cef4) tabs_3_passive_pane

0xf0ab,	// (0x0003cf05) tabs_3_passive_pane_cp_ParamLimits

0xf0ab,	// (0x0003cf05) tabs_3_passive_pane_cp

0xf046,	// (0x0003cea0) tabs_4_active_pane_ParamLimits

0xf046,	// (0x0003cea0) tabs_4_active_pane

0xf057,	// (0x0003ceb1) tabs_4_passive_pane_ParamLimits

0xf057,	// (0x0003ceb1) tabs_4_passive_pane

0xf068,	// (0x0003cec2) tabs_4_passive_pane_cp_ParamLimits

0xf068,	// (0x0003cec2) tabs_4_passive_pane_cp

0xf079,	// (0x0003ced3) tabs_4_passive_pane_cp2_ParamLimits

0xf079,	// (0x0003ced3) tabs_4_passive_pane_cp2

0xf026,	// (0x0003ce80) tabs_2_long_active_pane_ParamLimits

0xf026,	// (0x0003ce80) tabs_2_long_active_pane

0xf036,	// (0x0003ce90) tabs_2_long_passive_pane_ParamLimits

0xf036,	// (0x0003ce90) tabs_2_long_passive_pane

0xefef,	// (0x0003ce49) tabs_3_long_active_pane_ParamLimits

0xefef,	// (0x0003ce49) tabs_3_long_active_pane

0xf002,	// (0x0003ce5c) tabs_3_long_passive_pane_ParamLimits

0xf002,	// (0x0003ce5c) tabs_3_long_passive_pane

0xf013,	// (0x0003ce6d) tabs_3_long_passive_pane_cp_ParamLimits

0xf013,	// (0x0003ce6d) tabs_3_long_passive_pane_cp

0xa5d4,	// (0x0003842e) volume_small_pane_g1

0xa5dd,	// (0x00038437) volume_small_pane_g2

0xa5e6,	// (0x00038440) volume_small_pane_g3

0xa5ef,	// (0x00038449) volume_small_pane_g4

0xa5f8,	// (0x00038452) volume_small_pane_g5

0xa601,	// (0x0003845b) volume_small_pane_g6

0xa60a,	// (0x00038464) volume_small_pane_g7

0xa613,	// (0x0003846d) volume_small_pane_g8

0xa61c,	// (0x00038476) volume_small_pane_g9

0xa625,	// (0x0003847f) volume_small_pane_g10

0x0009,

0xf8e8,	// (0x0003d742) volume_small_pane_g

0x2354,	// (0x000301ae) bg_active_tab_pane_cp2_ParamLimits

0x2354,	// (0x000301ae) bg_active_tab_pane_cp2

0x2362,	// (0x000301bc) tabs_3_active_pane_g1

0x236a,	// (0x000301c4) tabs_3_active_pane_t1

0x2354,	// (0x000301ae) bg_passive_tab_pane_cp2_ParamLimits

0x2354,	// (0x000301ae) bg_passive_tab_pane_cp2

0x2362,	// (0x000301bc) tabs_3_passive_pane_g1

0x236a,	// (0x000301c4) tabs_3_passive_pane_t1

0x2354,	// (0x000301ae) bg_active_tab_pane_cp3_ParamLimits

0x2354,	// (0x000301ae) bg_active_tab_pane_cp3

0x6bc3,	// (0x00034a1d) tabs_4_active_pane_g1

0x2380,	// (0x000301da) tabs_4_active_pane_t1

0x2354,	// (0x000301ae) bg_passive_tab_pane_cp3_ParamLimits

0x2354,	// (0x000301ae) bg_passive_tab_pane_cp3

0x6bc3,	// (0x00034a1d) tabs_4_1_passive_pane_g1

0x2380,	// (0x000301da) tabs_4_1_passive_pane_t1

0x5c37,	// (0x00033a91) list_highlight_pane_cp2

0x3e48,	// (0x00031ca2) list_set_pane_ParamLimits

0x3e48,	// (0x00031ca2) list_set_pane

0x3ed6,	// (0x00031d30) main_pane_set_t1_ParamLimits

0x3ed6,	// (0x00031d30) main_pane_set_t1

0x3ef6,	// (0x00031d50) main_pane_set_t2_ParamLimits

0x3ef6,	// (0x00031d50) main_pane_set_t2

0x3f0a,	// (0x00031d64) main_pane_set_t3_ParamLimits

0x3f0a,	// (0x00031d64) main_pane_set_t3

0x3f1c,	// (0x00031d76) main_pane_set_t4_ParamLimits

0x3f1c,	// (0x00031d76) main_pane_set_t4

0x0003,

0xf9b8,	// (0x0003d812) main_pane_set_t_ParamLimits

0xf9b8,	// (0x0003d812) main_pane_set_t

0x3f2e,	// (0x00031d88) setting_code_pane

0x3f36,	// (0x00031d90) setting_slider_graphic_pane

0x3f36,	// (0x00031d90) setting_slider_pane

0x3f36,	// (0x00031d90) setting_text_pane

0x3f36,	// (0x00031d90) setting_volume_pane

0xedf1,	// (0x0003cc4b) volume_set_pane

0x239e,	// (0x000301f8) bg_set_opt_pane_cp

0x9279,	// (0x000370d3) setting_slider_pane_t1

0xedf9,	// (0x0003cc53) setting_slider_pane_t2

0xee12,	// (0x0003cc6c) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003d3fc) setting_slider_pane_t

0x92bf,	// (0x00037119) slider_set_pane

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp2

0x2408,	// (0x00030262) setting_slider_graphic_pane_g1

0xee29,	// (0x0003cc83) setting_slider_graphic_pane_t1

0xee38,	// (0x0003cc92) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003d403) setting_slider_graphic_pane_t

0xee47,	// (0x0003cca1) slider_set_pane_cp

0x2192,	// (0x0002ffec) input_focus_pane_cp1

0x7ba2,	// (0x000359fc) list_set_text_pane

0x2045,	// (0x0002fe9f) setting_text_pane_g1

0x2192,	// (0x0002ffec) input_focus_pane_cp2

0x2045,	// (0x0002fe9f) setting_code_pane_g1

0x2437,	// (0x00030291) setting_code_pane_t1

0x184e,	// (0x0002f6a8) set_text_pane_t1_ParamLimits

0x184e,	// (0x0002f6a8) set_text_pane_t1

0x5b0a,	// (0x00033964) set_opt_bg_pane_g1

0x5b12,	// (0x0003396c) set_opt_bg_pane_g2

0x3e08,	// (0x00031c62) set_opt_bg_pane_g3

0x5b22,	// (0x0003397c) set_opt_bg_pane_g4

0x5b2a,	// (0x00033984) set_opt_bg_pane_g5

0x5b32,	// (0x0003398c) set_opt_bg_pane_g6

0x3e10,	// (0x00031c6a) set_opt_bg_pane_g7

0x3e18,	// (0x00031c72) set_opt_bg_pane_g8

0x3e20,	// (0x00031c7a) set_opt_bg_pane_g9

0x0008,

0xf9a5,	// (0x0003d7ff) set_opt_bg_pane_g

0x7b95,	// (0x000359ef) slider_set_pane_g1

0xa882,	// (0x000386dc) slider_set_pane_g2

0x0006,

0xf996,	// (0x0003d7f0) slider_set_pane_g

0xf0e5,	// (0x0003cf3f) volume_set_pane_g1

0xf0ed,	// (0x0003cf47) volume_set_pane_g2

0xf0f5,	// (0x0003cf4f) volume_set_pane_g3

0xf0fd,	// (0x0003cf57) volume_set_pane_g4

0xf105,	// (0x0003cf5f) volume_set_pane_g5

0xf10d,	// (0x0003cf67) volume_set_pane_g6

0xf115,	// (0x0003cf6f) volume_set_pane_g7

0xf11d,	// (0x0003cf77) volume_set_pane_g8

0xf125,	// (0x0003cf7f) volume_set_pane_g9

0xf12d,	// (0x0003cf87) volume_set_pane_g10

0x0009,

0xf96e,	// (0x0003d7c8) volume_set_pane_g

0x2445,	// (0x0003029f) indicator_pane_ParamLimits

0x2445,	// (0x0003029f) indicator_pane

0x246d,	// (0x000302c7) main_idle_pane_g2_ParamLimits

0x246d,	// (0x000302c7) main_idle_pane_g2

0x249d,	// (0x000302f7) main_pane_idle_g1_ParamLimits

0x249d,	// (0x000302f7) main_pane_idle_g1

0x24c2,	// (0x0003031c) popup_clock_digital_analogue_window_ParamLimits

0x24c2,	// (0x0003031c) popup_clock_digital_analogue_window

0x24d9,	// (0x00030333) soft_indicator_pane_ParamLimits

0x24d9,	// (0x00030333) soft_indicator_pane

0x24f3,	// (0x0003034d) wallpaper_pane_ParamLimits

0x24f3,	// (0x0003034d) wallpaper_pane

0x2045,	// (0x0002fe9f) wallpaper_pane_g1

0x250d,	// (0x00030367) indicator_pane_g1_ParamLimits

0x250d,	// (0x00030367) indicator_pane_g1

0x7c9c,	// (0x00035af6) navi_navi_icon_text_pane_srt_g1

0x2535,	// (0x0003038f) soft_indicator_pane_t1

0x254f,	// (0x000303a9) aid_ps_area_pane

0x2560,	// (0x000303ba) aid_ps_clock_pane

0x256c,	// (0x000303c6) aid_ps_indicator_pane

0x2578,	// (0x000303d2) indicator_ps_pane_ParamLimits

0x2578,	// (0x000303d2) indicator_ps_pane

0x2587,	// (0x000303e1) power_save_pane_g1_ParamLimits

0x2587,	// (0x000303e1) power_save_pane_g1

0x2593,	// (0x000303ed) power_save_pane_g2_ParamLimits

0x2593,	// (0x000303ed) power_save_pane_g2

0x8ec1,	// (0x00036d1b) aid_navinavi_width_pane

0x254f,	// (0x000303a9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003d408) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003d408) power_save_pane_g

0x25a1,	// (0x000303fb) power_save_pane_t1_ParamLimits

0x25a1,	// (0x000303fb) power_save_pane_t1

0x2560,	// (0x000303ba) aid_ps_clock_pane_ParamLimits

0x256c,	// (0x000303c6) aid_ps_indicator_pane_ParamLimits

0x25b3,	// (0x0003040d) power_save_pane_t4_ParamLimits

0x25b3,	// (0x0003040d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003d40d) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003d40d) power_save_pane_t

0x25dd,	// (0x00030437) power_save_t3_ParamLimits

0x25dd,	// (0x00030437) power_save_t3

0x25c8,	// (0x00030422) power_save_t2_ParamLimits

0x25c8,	// (0x00030422) power_save_t2

0x25f2,	// (0x0003044c) indicator_ps_pane_g1

0x25fb,	// (0x00030455) ai_gene_pane_ParamLimits

0x25fb,	// (0x00030455) ai_gene_pane

0x2612,	// (0x0003046c) ai_links_pane_ParamLimits

0x2612,	// (0x0003046c) ai_links_pane

0x2624,	// (0x0003047e) indicator_pane_cp1_ParamLimits

0x2624,	// (0x0003047e) indicator_pane_cp1

0x2633,	// (0x0003048d) main_pane_idle_g1_cp_ParamLimits

0x2633,	// (0x0003048d) main_pane_idle_g1_cp

0x264b,	// (0x000304a5) popup_ai_links_title_window

0x2654,	// (0x000304ae) soft_indicator_pane_cp1_ParamLimits

0x2654,	// (0x000304ae) soft_indicator_pane_cp1

0x79d7,	// (0x00035831) ai_links_pane_g1

0x79e0,	// (0x0003583a) grid_ai_links_pane

0x3d58,	// (0x00031bb2) ai_gene_pane_1

0x79c5,	// (0x0003581f) ai_gene_pane_2

0x79ce,	// (0x00035828) list_highlight_pane_cp4

0x3d3c,	// (0x00031b96) cell_ai_link_pane_ParamLimits

0x3d3c,	// (0x00031b96) cell_ai_link_pane

0x79bd,	// (0x00035817) cell_ai_link_pane_g1

0x2887,	// (0x000306e1) cell_ai_link_pane_g2

0x0001,

0xf949,	// (0x0003d7a3) cell_ai_link_pane_g

0x2192,	// (0x0002ffec) grid_highlight_cp2

0x2192,	// (0x0002ffec) bg_popup_sub_pane_cp1

0x2676,	// (0x000304d0) popup_ai_links_title_window_t1

0x790f,	// (0x00035769) ai_gene_pane_1_g1_ParamLimits

0x790f,	// (0x00035769) ai_gene_pane_1_g1

0x791b,	// (0x00035775) ai_gene_pane_1_g2_ParamLimits

0x791b,	// (0x00035775) ai_gene_pane_1_g2

0x0001,

0xf93f,	// (0x0003d799) ai_gene_pane_1_g_ParamLimits

0xf93f,	// (0x0003d799) ai_gene_pane_1_g

0x7928,	// (0x00035782) ai_gene_pane_1_t1_ParamLimits

0x7928,	// (0x00035782) ai_gene_pane_1_t1

0x795c,	// (0x000357b6) grid_ai_soft_ind_pane

0x78fa,	// (0x00035754) ai_gene_pane_2_t1_ParamLimits

0x78fa,	// (0x00035754) ai_gene_pane_2_t1

0x2685,	// (0x000304df) main_pane_empty_t1_ParamLimits

0x2685,	// (0x000304df) main_pane_empty_t1

0x26a2,	// (0x000304fc) main_pane_empty_t2_ParamLimits

0x26a2,	// (0x000304fc) main_pane_empty_t2

0x26ba,	// (0x00030514) main_pane_empty_t3_ParamLimits

0x26ba,	// (0x00030514) main_pane_empty_t3

0x26cd,	// (0x00030527) main_pane_empty_t4_ParamLimits

0x26cd,	// (0x00030527) main_pane_empty_t4

0x26e0,	// (0x0003053a) main_pane_empty_t5_ParamLimits

0x26e0,	// (0x0003053a) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003d412) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003d412) main_pane_empty_t

0x5b5b,	// (0x000339b5) bg_popup_window_pane_ParamLimits

0x5b5b,	// (0x000339b5) bg_popup_window_pane

0x76a9,	// (0x00035503) find_popup_pane_cp2_ParamLimits

0x76a9,	// (0x00035503) find_popup_pane_cp2

0x76b5,	// (0x0003550f) heading_pane_ParamLimits

0x76b5,	// (0x0003550f) heading_pane

0x2192,	// (0x0002ffec) bg_popup_sub_pane

0x3c7f,	// (0x00031ad9) bg_popup_window_pane_g1_ParamLimits

0x3c7f,	// (0x00031ad9) bg_popup_window_pane_g1

0x3c8e,	// (0x00031ae8) bg_popup_window_pane_g2_ParamLimits

0x3c8e,	// (0x00031ae8) bg_popup_window_pane_g2

0x3c9a,	// (0x00031af4) bg_popup_window_pane_g3_ParamLimits

0x3c9a,	// (0x00031af4) bg_popup_window_pane_g3

0x3ca6,	// (0x00031b00) bg_popup_window_pane_g4_ParamLimits

0x3ca6,	// (0x00031b00) bg_popup_window_pane_g4

0x3cb5,	// (0x00031b0f) bg_popup_window_pane_g5_ParamLimits

0x3cb5,	// (0x00031b0f) bg_popup_window_pane_g5

0x3cc5,	// (0x00031b1f) bg_popup_window_pane_g6_ParamLimits

0x3cc5,	// (0x00031b1f) bg_popup_window_pane_g6

0x3cd1,	// (0x00031b2b) bg_popup_window_pane_g7_ParamLimits

0x3cd1,	// (0x00031b2b) bg_popup_window_pane_g7

0x3ce0,	// (0x00031b3a) bg_popup_window_pane_g8_ParamLimits

0x3ce0,	// (0x00031b3a) bg_popup_window_pane_g8

0x3cef,	// (0x00031b49) bg_popup_window_pane_g9_ParamLimits

0x3cef,	// (0x00031b49) bg_popup_window_pane_g9

0x768e,	// (0x000354e8) bg_popup_window_pane_g10_ParamLimits

0x768e,	// (0x000354e8) bg_popup_window_pane_g10

0x0009,

0xf907,	// (0x0003d761) bg_popup_window_pane_g_ParamLimits

0xf907,	// (0x0003d761) bg_popup_window_pane_g

0x7645,	// (0x0003549f) bg_popup_heading_pane_ParamLimits

0x7645,	// (0x0003549f) bg_popup_heading_pane

0xab48,	// (0x000389a2) tabs_4_passive_pane_cp_srt_ParamLimits

0xab48,	// (0x000389a2) tabs_4_passive_pane_cp_srt

0xab5a,	// (0x000389b4) tabs_4_passive_pane_srt_ParamLimits

0x7659,	// (0x000354b3) heading_pane_g2

0xab5a,	// (0x000389b4) tabs_4_passive_pane_srt

0x6a5e,	// (0x000348b8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6a5e,	// (0x000348b8) bg_passive_tab_pane_cp3_srt

0x7661,	// (0x000354bb) heading_pane_t1_ParamLimits

0x7661,	// (0x000354bb) heading_pane_t1

0x7678,	// (0x000354d2) heading_pane_t2_ParamLimits

0x7678,	// (0x000354d2) heading_pane_t2

0x0001,

0xf902,	// (0x0003d75c) heading_pane_t_ParamLimits

0xf902,	// (0x0003d75c) heading_pane_t

0x71d4,	// (0x0003502e) bg_popup_heading_pane_g1

0x7265,	// (0x000350bf) bg_popup_heading_pane_g2

0x726d,	// (0x000350c7) bg_popup_heading_pane_g3

0x7275,	// (0x000350cf) bg_popup_heading_pane_g4

0x727d,	// (0x000350d7) bg_popup_heading_pane_g5

0x7285,	// (0x000350df) bg_popup_heading_pane_g6

0x728d,	// (0x000350e7) bg_popup_heading_pane_g7

0x7295,	// (0x000350ef) bg_popup_heading_pane_g8

0x729d,	// (0x000350f7) bg_popup_heading_pane_g9

0x0008,

0xf8be,	// (0x0003d718) bg_popup_heading_pane_g

0x6970,	// (0x000347ca) bg_popup_sub_pane_g1

0x6978,	// (0x000347d2) bg_popup_sub_pane_g2

0x6980,	// (0x000347da) bg_popup_sub_pane_g3

0x6988,	// (0x000347e2) bg_popup_sub_pane_g4

0x6990,	// (0x000347ea) bg_popup_sub_pane_g5

0x6998,	// (0x000347f2) bg_popup_sub_pane_g6

0x69a0,	// (0x000347fa) bg_popup_sub_pane_g7

0x69a8,	// (0x00034802) bg_popup_sub_pane_g8

0x69b0,	// (0x0003480a) bg_popup_sub_pane_g9

0x0008,

0xf898,	// (0x0003d6f2) bg_popup_sub_pane_g

0x2354,	// (0x000301ae) bg_popup_window_pane_cp5_ParamLimits

0x2354,	// (0x000301ae) bg_popup_window_pane_cp5

0x2701,	// (0x0003055b) popup_note_window_g1_ParamLimits

0x2701,	// (0x0003055b) popup_note_window_g1

0x270d,	// (0x00030567) popup_note_window_t1_ParamLimits

0x270d,	// (0x00030567) popup_note_window_t1

0x2723,	// (0x0003057d) popup_note_window_t2_ParamLimits

0x2723,	// (0x0003057d) popup_note_window_t2

0x2739,	// (0x00030593) popup_note_window_t3_ParamLimits

0x2739,	// (0x00030593) popup_note_window_t3

0x274f,	// (0x000305a9) popup_note_window_t4_ParamLimits

0x274f,	// (0x000305a9) popup_note_window_t4

0x2777,	// (0x000305d1) popup_note_window_t5_ParamLimits

0x2777,	// (0x000305d1) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003d41d) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003d41d) popup_note_window_t

0x279b,	// (0x000305f5) bg_popup_window_pane_cp6_ParamLimits

0x279b,	// (0x000305f5) bg_popup_window_pane_cp6

0x7150,	// (0x00034faa) popup_note_image_window_g1_ParamLimits

0x7150,	// (0x00034faa) popup_note_image_window_g1

0x715c,	// (0x00034fb6) popup_note_image_window_g2_ParamLimits

0x715c,	// (0x00034fb6) popup_note_image_window_g2

0x0001,

0xf88c,	// (0x0003d6e6) popup_note_image_window_g_ParamLimits

0xf88c,	// (0x0003d6e6) popup_note_image_window_g

0x7175,	// (0x00034fcf) popup_note_image_window_t1_ParamLimits

0x7175,	// (0x00034fcf) popup_note_image_window_t1

0x718e,	// (0x00034fe8) popup_note_image_window_t2_ParamLimits

0x718e,	// (0x00034fe8) popup_note_image_window_t2

0x71a7,	// (0x00035001) popup_note_image_window_t3_ParamLimits

0x71a7,	// (0x00035001) popup_note_image_window_t3

0x0002,

0xf891,	// (0x0003d6eb) popup_note_image_window_t_ParamLimits

0xf891,	// (0x0003d6eb) popup_note_image_window_t

0x703b,	// (0x00034e95) bg_popup_window_pane_cp7_ParamLimits

0x703b,	// (0x00034e95) bg_popup_window_pane_cp7

0x706b,	// (0x00034ec5) popup_note_wait_window_g1_ParamLimits

0x706b,	// (0x00034ec5) popup_note_wait_window_g1

0x7077,	// (0x00034ed1) popup_note_wait_window_g2_ParamLimits

0x7077,	// (0x00034ed1) popup_note_wait_window_g2

0x0002,

0xf87a,	// (0x0003d6d4) popup_note_wait_window_g_ParamLimits

0xf87a,	// (0x0003d6d4) popup_note_wait_window_g

0x708f,	// (0x00034ee9) popup_note_wait_window_t1_ParamLimits

0x708f,	// (0x00034ee9) popup_note_wait_window_t1

0x70b6,	// (0x00034f10) popup_note_wait_window_t2_ParamLimits

0x70b6,	// (0x00034f10) popup_note_wait_window_t2

0x70d3,	// (0x00034f2d) popup_note_wait_window_t3_ParamLimits

0x70d3,	// (0x00034f2d) popup_note_wait_window_t3

0x70e6,	// (0x00034f40) popup_note_wait_window_t4_ParamLimits

0x70e6,	// (0x00034f40) popup_note_wait_window_t4

0x0004,

0xf881,	// (0x0003d6db) popup_note_wait_window_t_ParamLimits

0xf881,	// (0x0003d6db) popup_note_wait_window_t

0x710b,	// (0x00034f65) wait_bar_pane_ParamLimits

0x710b,	// (0x00034f65) wait_bar_pane

0x2192,	// (0x0002ffec) wait_anim_pane

0x2192,	// (0x0002ffec) wait_border_pane

0x2045,	// (0x0002fe9f) wait_anim_pane_g1

0x2045,	// (0x0002fe9f) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003d5a6) wait_anim_pane_g

0x6feb,	// (0x00034e45) wait_border_pane_g1

0x6ff4,	// (0x00034e4e) wait_border_pane_g2

0x6ffd,	// (0x00034e57) wait_border_pane_g3

0x0002,

0xf873,	// (0x0003d6cd) wait_border_pane_g

0x6f4d,	// (0x00034da7) bg_popup_window_pane_cp16_ParamLimits

0x6f4d,	// (0x00034da7) bg_popup_window_pane_cp16

0x6f5b,	// (0x00034db5) indicator_popup_pane_cp4_ParamLimits

0x6f5b,	// (0x00034db5) indicator_popup_pane_cp4

0x6f6f,	// (0x00034dc9) popup_query_data_window_t1_ParamLimits

0x6f6f,	// (0x00034dc9) popup_query_data_window_t1

0x6f81,	// (0x00034ddb) popup_query_data_window_t2_ParamLimits

0x6f81,	// (0x00034ddb) popup_query_data_window_t2

0x6f9a,	// (0x00034df4) popup_query_data_window_t3_ParamLimits

0x6f9a,	// (0x00034df4) popup_query_data_window_t3

0x0002,

0xf86c,	// (0x0003d6c6) popup_query_data_window_t_ParamLimits

0xf86c,	// (0x0003d6c6) popup_query_data_window_t

0x6fb4,	// (0x00034e0e) query_popup_data_pane_ParamLimits

0x6fb4,	// (0x00034e0e) query_popup_data_pane

0x6fc8,	// (0x00034e22) query_popup_data_pane_cp1_ParamLimits

0x6fc8,	// (0x00034e22) query_popup_data_pane_cp1

0x279b,	// (0x000305f5) bg_popup_window_pane_cp10_ParamLimits

0x279b,	// (0x000305f5) bg_popup_window_pane_cp10

0x6eb0,	// (0x00034d0a) indicator_popup_pane_ParamLimits

0x6eb0,	// (0x00034d0a) indicator_popup_pane

0x27f2,	// (0x0003064c) popup_query_code_window_t1_ParamLimits

0x27f2,	// (0x0003064c) popup_query_code_window_t1

0x6ec8,	// (0x00034d22) popup_query_code_window_t2_ParamLimits

0x6ec8,	// (0x00034d22) popup_query_code_window_t2

0x6f06,	// (0x00034d60) popup_query_code_window_t3_ParamLimits

0x6f06,	// (0x00034d60) popup_query_code_window_t3

0x0002,

0xf865,	// (0x0003d6bf) popup_query_code_window_t_ParamLimits

0xf865,	// (0x0003d6bf) popup_query_code_window_t

0x6f35,	// (0x00034d8f) query_popup_pane_ParamLimits

0x6f35,	// (0x00034d8f) query_popup_pane

0x279b,	// (0x000305f5) bg_popup_window_pane_cp15_ParamLimits

0x279b,	// (0x000305f5) bg_popup_window_pane_cp15

0x27b9,	// (0x00030613) indicator_popup_pane_cp1_ParamLimits

0x27b9,	// (0x00030613) indicator_popup_pane_cp1

0x27cc,	// (0x00030626) indicator_popup_pane_cp2_ParamLimits

0x27cc,	// (0x00030626) indicator_popup_pane_cp2

0x27df,	// (0x00030639) popup_query_data_code_window_g1_ParamLimits

0x27df,	// (0x00030639) popup_query_data_code_window_g1

0x27f2,	// (0x0003064c) popup_query_data_code_window_t1_ParamLimits

0x27f2,	// (0x0003064c) popup_query_data_code_window_t1

0x2804,	// (0x0003065e) popup_query_data_code_window_t2_ParamLimits

0x2804,	// (0x0003065e) popup_query_data_code_window_t2

0x2816,	// (0x00030670) popup_query_data_code_window_t3_ParamLimits

0x2816,	// (0x00030670) popup_query_data_code_window_t3

0x282c,	// (0x00030686) popup_query_data_code_window_t4_ParamLimits

0x282c,	// (0x00030686) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003d428) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003d428) popup_query_data_code_window_t

0xa3ee,	// (0x00038248) list_single_midp_graphic_pane_g3

0x2844,	// (0x0003069e) query_popup_data_pane_cp2_ParamLimits

0x2857,	// (0x000306b1) query_popup_pane_cp2_ParamLimits

0x2857,	// (0x000306b1) query_popup_pane_cp2

0x2192,	// (0x0002ffec) bg_popup_window_pane_cp11

0x6e84,	// (0x00034cde) heading_pane_cp5

0x293b,	// (0x00030795) listscroll_popup_info_pane

0x2192,	// (0x0002ffec) input_focus_pane_cp3

0x286a,	// (0x000306c4) query_popup_pane_t1

0x2878,	// (0x000306d2) list_popup_info_pane_ParamLimits

0x2878,	// (0x000306d2) list_popup_info_pane

0x2887,	// (0x000306e1) listscroll_popup_info_pane_g1

0x288f,	// (0x000306e9) scroll_pane_cp7

0x2897,	// (0x000306f1) popup_info_list_pane_t1_ParamLimits

0x2897,	// (0x000306f1) popup_info_list_pane_t1

0x28b1,	// (0x0003070b) popup_info_list_pane_t2_ParamLimits

0x28b1,	// (0x0003070b) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003d431) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003d431) popup_info_list_pane_t

0x2192,	// (0x0002ffec) bg_popup_window_pane_cp12

0x7cb6,	// (0x00035b10) find_popup_pane

0x239e,	// (0x000301f8) bg_popup_window_pane_cp3

0x28cb,	// (0x00030725) heading_pane_cp3

0x28d7,	// (0x00030731) listscroll_popup_graphic_pane

0x2192,	// (0x0002ffec) bg_popup_window_pane_cp4

0x2933,	// (0x0003078d) heading_pane_cp4

0x293b,	// (0x00030795) listscroll_popup_colour_pane

0x2943,	// (0x0003079d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2943,	// (0x0003079d) cell_large_graphic_colour_none_popup_pane

0x2953,	// (0x000307ad) grid_large_graphic_colour_popup_pane_ParamLimits

0x2953,	// (0x000307ad) grid_large_graphic_colour_popup_pane

0x296f,	// (0x000307c9) listscroll_popup_colour_pane_g1_ParamLimits

0x296f,	// (0x000307c9) listscroll_popup_colour_pane_g1

0x2986,	// (0x000307e0) listscroll_popup_colour_pane_g2_ParamLimits

0x2986,	// (0x000307e0) listscroll_popup_colour_pane_g2

0x299a,	// (0x000307f4) listscroll_popup_colour_pane_g3_ParamLimits

0x299a,	// (0x000307f4) listscroll_popup_colour_pane_g3

0x29aa,	// (0x00030804) listscroll_popup_colour_pane_g4_ParamLimits

0x29aa,	// (0x00030804) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003d436) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003d436) listscroll_popup_colour_pane_g

0x29b9,	// (0x00030813) scroll_pane_cp6_ParamLimits

0x29b9,	// (0x00030813) scroll_pane_cp6

0x29cb,	// (0x00030825) cell_large_graphic_colour_popup_pane_ParamLimits

0x29cb,	// (0x00030825) cell_large_graphic_colour_popup_pane

0x29ea,	// (0x00030844) cell_large_graphic_colour_none_popup_pane_t1

0x2192,	// (0x0002ffec) grid_highlight_pane_cp5

0x29f9,	// (0x00030853) cell_large_graphic_colour_popup_pane_g1

0x2a01,	// (0x0003085b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003d43f) cell_large_graphic_colour_popup_pane_g

0x2a09,	// (0x00030863) cell_large_graphic_colour_popup_pane_g2_copy1

0x2a12,	// (0x0003086c) grid_highlight_pane_cp4

0x2a1a,	// (0x00030874) bg_popup_window_pane_cp8_ParamLimits

0x2a1a,	// (0x00030874) bg_popup_window_pane_cp8

0x2a35,	// (0x0003088f) popup_snote_single_text_window_g1_ParamLimits

0x2a35,	// (0x0003088f) popup_snote_single_text_window_g1

0x2a47,	// (0x000308a1) popup_snote_single_text_window_t1_ParamLimits

0x2a47,	// (0x000308a1) popup_snote_single_text_window_t1

0x2a5a,	// (0x000308b4) popup_snote_single_text_window_t2_ParamLimits

0x2a5a,	// (0x000308b4) popup_snote_single_text_window_t2

0x2a6d,	// (0x000308c7) popup_snote_single_text_window_t3_ParamLimits

0x2a6d,	// (0x000308c7) popup_snote_single_text_window_t3

0x2aa6,	// (0x00030900) popup_snote_single_text_window_t4_ParamLimits

0x2aa6,	// (0x00030900) popup_snote_single_text_window_t4

0x2ada,	// (0x00030934) popup_snote_single_text_window_t5_ParamLimits

0x2ada,	// (0x00030934) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003d444) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003d444) popup_snote_single_text_window_t

0x2b09,	// (0x00030963) bg_popup_window_pane_cp9_ParamLimits

0x2b09,	// (0x00030963) bg_popup_window_pane_cp9

0x2a35,	// (0x0003088f) popup_snote_single_graphic_window_g1_ParamLimits

0x2a35,	// (0x0003088f) popup_snote_single_graphic_window_g1

0x2b17,	// (0x00030971) popup_snote_single_graphic_window_g2_ParamLimits

0x2b17,	// (0x00030971) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003d44f) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003d44f) popup_snote_single_graphic_window_g

0x2b23,	// (0x0003097d) popup_snote_single_graphic_window_t1_ParamLimits

0x2b23,	// (0x0003097d) popup_snote_single_graphic_window_t1

0x2b36,	// (0x00030990) popup_snote_single_graphic_window_t2_ParamLimits

0x2b36,	// (0x00030990) popup_snote_single_graphic_window_t2

0x2a6d,	// (0x000308c7) popup_snote_single_graphic_window_t3_ParamLimits

0x2a6d,	// (0x000308c7) popup_snote_single_graphic_window_t3

0x2aa6,	// (0x00030900) popup_snote_single_graphic_window_t4_ParamLimits

0x2aa6,	// (0x00030900) popup_snote_single_graphic_window_t4

0x2ada,	// (0x00030934) popup_snote_single_graphic_window_t5_ParamLimits

0x2ada,	// (0x00030934) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003d454) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003d454) popup_snote_single_graphic_window_t

0x4030,	// (0x00031e8a) grid_graphic_popup_pane_ParamLimits

0x4030,	// (0x00031e8a) grid_graphic_popup_pane

0x4053,	// (0x00031ead) listscroll_popup_graphic_pane_g1_ParamLimits

0x4053,	// (0x00031ead) listscroll_popup_graphic_pane_g1

0x4067,	// (0x00031ec1) listscroll_popup_graphic_pane_g2_ParamLimits

0x4067,	// (0x00031ec1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e2,	// (0x0003d83c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e2,	// (0x0003d83c) listscroll_popup_graphic_pane_g

0x6e4c,	// (0x00034ca6) scroll_pane_cp5

0x3feb,	// (0x00031e45) cell_graphic_popup_pane_ParamLimits

0x3feb,	// (0x00031e45) cell_graphic_popup_pane

0x7c5f,	// (0x00035ab9) cell_graphic_popup_pane_g1

0x7c67,	// (0x00035ac1) cell_graphic_popup_pane_g2

0x2a09,	// (0x00030863) cell_graphic_popup_pane_g3

0x0002,

0xf9db,	// (0x0003d835) cell_graphic_popup_pane_g

0x7c70,	// (0x00035aca) cell_graphic_popup_pane_t2

0x2a12,	// (0x0003086c) grid_highlight_pane_cp3

0x2b5b,	// (0x000309b5) list_gen_pane_ParamLimits

0x2b5b,	// (0x000309b5) list_gen_pane

0x2b8c,	// (0x000309e6) scroll_pane

0x3fbe,	// (0x00031e18) bg_list_pane_g1_ParamLimits

0x3fbe,	// (0x00031e18) bg_list_pane_g1

0x7c16,	// (0x00035a70) bg_list_pane_g2_ParamLimits

0x7c16,	// (0x00035a70) bg_list_pane_g2

0x7c29,	// (0x00035a83) bg_list_pane_g3_ParamLimits

0x7c29,	// (0x00035a83) bg_list_pane_g3

0x7c3b,	// (0x00035a95) bg_list_pane_g4_ParamLimits

0x7c3b,	// (0x00035a95) bg_list_pane_g4

0x3fd9,	// (0x00031e33) bg_list_pane_g5_ParamLimits

0x3fd9,	// (0x00031e33) bg_list_pane_g5

0x0004,

0xf9d0,	// (0x0003d82a) bg_list_pane_g_ParamLimits

0xf9d0,	// (0x0003d82a) bg_list_pane_g

0x3f63,	// (0x00031dbd) list_double2_graphic_large_graphic_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double2_graphic_large_graphic_pane

0x3f63,	// (0x00031dbd) list_double2_graphic_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double2_graphic_pane

0x3f63,	// (0x00031dbd) list_double2_large_graphic_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double2_large_graphic_pane

0x3f63,	// (0x00031dbd) list_double2_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double2_pane

0x3f63,	// (0x00031dbd) list_double_graphic_heading_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_graphic_heading_pane

0x3f63,	// (0x00031dbd) list_double_graphic_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_graphic_pane

0x3f63,	// (0x00031dbd) list_double_heading_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_heading_pane

0x3f63,	// (0x00031dbd) list_double_large_graphic_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_large_graphic_pane

0x3f63,	// (0x00031dbd) list_double_number_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_number_pane

0x3f63,	// (0x00031dbd) list_double_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_pane

0x3f63,	// (0x00031dbd) list_double_time_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_double_time_pane

0x3f63,	// (0x00031dbd) list_setting_number_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_setting_number_pane

0x3f63,	// (0x00031dbd) list_setting_pane_ParamLimits

0x3f63,	// (0x00031dbd) list_setting_pane

0x3f74,	// (0x00031dce) list_single_2graphic_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_2graphic_pane

0x3f74,	// (0x00031dce) list_single_graphic_heading_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_graphic_heading_pane

0x3f74,	// (0x00031dce) list_single_graphic_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_graphic_pane

0x3f74,	// (0x00031dce) list_single_heading_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_heading_pane

0x3fac,	// (0x00031e06) list_single_large_graphic_pane_ParamLimits

0x3fac,	// (0x00031e06) list_single_large_graphic_pane

0x3f74,	// (0x00031dce) list_single_number_heading_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_number_heading_pane

0x3f74,	// (0x00031dce) list_single_number_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_number_pane

0x3f74,	// (0x00031dce) list_single_pane_ParamLimits

0x3f74,	// (0x00031dce) list_single_pane

0x2192,	// (0x0002ffec) list_highlight_pane_cp1

0xe1f9,	// (0x0003c053) list_single_pane_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_single_pane_g1

0xe205,	// (0x0003c05f) list_single_pane_g2_ParamLimits

0xe205,	// (0x0003c05f) list_single_pane_g2

0x0001,

0xf616,	// (0x0003d470) list_single_pane_g_ParamLimits

0xf616,	// (0x0003d470) list_single_pane_g

0xd4a8,	// (0x0003b302) list_single_pane_t1_ParamLimits

0xd4a8,	// (0x0003b302) list_single_pane_t1

0xe1f9,	// (0x0003c053) list_single_number_pane_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_single_number_pane_g1

0xe205,	// (0x0003c05f) list_single_number_pane_g2_ParamLimits

0xe205,	// (0x0003c05f) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003d470) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003d470) list_single_number_pane_g

0xd525,	// (0x0003b37f) list_single_number_pane_t1_ParamLimits

0xd525,	// (0x0003b37f) list_single_number_pane_t1

0x1e08,	// (0x0002fc62) list_single_number_pane_t2_ParamLimits

0x1e08,	// (0x0002fc62) list_single_number_pane_t2

0x0001,

0xf991,	// (0x0003d7eb) list_single_number_pane_t_ParamLimits

0xf991,	// (0x0003d7eb) list_single_number_pane_t

0xd54d,	// (0x0003b3a7) list_single_graphic_pane_g1_ParamLimits

0xd54d,	// (0x0003b3a7) list_single_graphic_pane_g1

0xe1f9,	// (0x0003c053) list_single_graphic_pane_g2_ParamLimits

0xe1f9,	// (0x0003c053) list_single_graphic_pane_g2

0xe205,	// (0x0003c05f) list_single_graphic_pane_g3_ParamLimits

0xe205,	// (0x0003c05f) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003d45f) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003d45f) list_single_graphic_pane_g

0xd525,	// (0x0003b37f) list_single_graphic_pane_t1_ParamLimits

0xd525,	// (0x0003b37f) list_single_graphic_pane_t1

0x1867,	// (0x0002f6c1) list_single_heading_pane_g1_ParamLimits

0x1867,	// (0x0002f6c1) list_single_heading_pane_g1

0xe205,	// (0x0003c05f) list_single_heading_pane_g2_ParamLimits

0xe205,	// (0x0003c05f) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003d466) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003d466) list_single_heading_pane_g

0x187a,	// (0x0002f6d4) list_single_heading_pane_t1_ParamLimits

0x187a,	// (0x0002f6d4) list_single_heading_pane_t1

0x2bc1,	// (0x00030a1b) list_single_heading_pane_t2_ParamLimits

0x2bc1,	// (0x00030a1b) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003d46b) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003d46b) list_single_heading_pane_t

0xe1f9,	// (0x0003c053) list_single_number_heading_pane_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_single_number_heading_pane_g1

0xe205,	// (0x0003c05f) list_single_number_heading_pane_g2_ParamLimits

0xe205,	// (0x0003c05f) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003d470) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003d470) list_single_number_heading_pane_g

0x1890,	// (0x0002f6ea) list_single_number_heading_pane_t1_ParamLimits

0x1890,	// (0x0002f6ea) list_single_number_heading_pane_t1

0x18a6,	// (0x0002f700) list_single_number_heading_pane_t2_ParamLimits

0x18a6,	// (0x0002f700) list_single_number_heading_pane_t2

0xdc0c,	// (0x0003ba66) list_single_number_heading_pane_t3_ParamLimits

0xdc0c,	// (0x0003ba66) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003d475) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003d475) list_single_number_heading_pane_t

0x18b8,	// (0x0002f712) list_single_graphic_heading_pane_g1_ParamLimits

0x18b8,	// (0x0002f712) list_single_graphic_heading_pane_g1

0x2bd3,	// (0x00030a2d) list_single_graphic_heading_pane_g4_ParamLimits

0x2bd3,	// (0x00030a2d) list_single_graphic_heading_pane_g4

0xe205,	// (0x0003c05f) list_single_graphic_heading_pane_g5_ParamLimits

0xe205,	// (0x0003c05f) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003d47c) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003d47c) list_single_graphic_heading_pane_g

0x1890,	// (0x0002f6ea) list_single_graphic_heading_pane_t1_ParamLimits

0x1890,	// (0x0002f6ea) list_single_graphic_heading_pane_t1

0x18ce,	// (0x0002f728) list_single_graphic_heading_pane_t2_ParamLimits

0x18ce,	// (0x0002f728) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003d483) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003d483) list_single_graphic_heading_pane_t

0xe1cd,	// (0x0003c027) list_single_large_graphic_pane_g1_ParamLimits

0xe1cd,	// (0x0003c027) list_single_large_graphic_pane_g1

0xe1d9,	// (0x0003c033) list_single_large_graphic_pane_g2_ParamLimits

0xe1d9,	// (0x0003c033) list_single_large_graphic_pane_g2

0xe1e5,	// (0x0003c03f) list_single_large_graphic_pane_g3_ParamLimits

0xe1e5,	// (0x0003c03f) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003d488) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003d488) list_single_large_graphic_pane_g

0x6ff4,	// (0x00034e4e) wait_border_pane_g2_copy1

0xe1f1,	// (0x0003c04b) list_single_large_graphic_pane_g4_cp2

0xd492,	// (0x0003b2ec) list_single_large_graphic_pane_t1_ParamLimits

0xd492,	// (0x0003b2ec) list_single_large_graphic_pane_t1

0x2be4,	// (0x00030a3e) list_double_pane_g1_ParamLimits

0x2be4,	// (0x00030a3e) list_double_pane_g1

0x2bf0,	// (0x00030a4a) list_double_pane_g2_ParamLimits

0x2bf0,	// (0x00030a4a) list_double_pane_g2

0x0001,

0xf635,	// (0x0003d48f) list_double_pane_g_ParamLimits

0xf635,	// (0x0003d48f) list_double_pane_g

0x18e6,	// (0x0002f740) list_double_pane_t1_ParamLimits

0x18e6,	// (0x0002f740) list_double_pane_t1

0x18fc,	// (0x0002f756) list_double_pane_t2_ParamLimits

0x18fc,	// (0x0002f756) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003d494) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003d494) list_double_pane_t

0x190e,	// (0x0002f768) list_double2_pane_g1_ParamLimits

0x190e,	// (0x0002f768) list_double2_pane_g1

0x191f,	// (0x0002f779) list_double2_pane_g2_ParamLimits

0x191f,	// (0x0002f779) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003d499) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003d499) list_double2_pane_g

0x192b,	// (0x0002f785) list_double2_pane_t1_ParamLimits

0x192b,	// (0x0002f785) list_double2_pane_t1

0x1941,	// (0x0002f79b) list_double2_pane_t2_ParamLimits

0x1941,	// (0x0002f79b) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003d49e) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003d49e) list_double2_pane_t

0x2be4,	// (0x00030a3e) list_double_number_pane_g1_ParamLimits

0x2be4,	// (0x00030a3e) list_double_number_pane_g1

0x2bf0,	// (0x00030a4a) list_double_number_pane_g2_ParamLimits

0x2bf0,	// (0x00030a4a) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003d48f) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003d48f) list_double_number_pane_g

0x1953,	// (0x0002f7ad) list_double_number_pane_t1_ParamLimits

0x1953,	// (0x0002f7ad) list_double_number_pane_t1

0x1965,	// (0x0002f7bf) list_double_number_pane_t2_ParamLimits

0x1965,	// (0x0002f7bf) list_double_number_pane_t2

0x197b,	// (0x0002f7d5) list_double_number_pane_t3_ParamLimits

0x197b,	// (0x0002f7d5) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003d4a3) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003d4a3) list_double_number_pane_t

0xd67b,	// (0x0003b4d5) list_double_graphic_pane_g1_ParamLimits

0xd67b,	// (0x0003b4d5) list_double_graphic_pane_g1

0x2bfc,	// (0x00030a56) list_double_graphic_pane_g2_ParamLimits

0x2bfc,	// (0x00030a56) list_double_graphic_pane_g2

0x2c0b,	// (0x00030a65) list_double_graphic_pane_g3_ParamLimits

0x2c0b,	// (0x00030a65) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003d4aa) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003d4aa) list_double_graphic_pane_g

0x1999,	// (0x0002f7f3) list_double_graphic_pane_t1_ParamLimits

0x1999,	// (0x0002f7f3) list_double_graphic_pane_t1

0x19af,	// (0x0002f809) list_double_graphic_pane_t2_ParamLimits

0x19af,	// (0x0002f809) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003d4b3) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003d4b3) list_double_graphic_pane_t

0xd3cf,	// (0x0003b229) list_double2_graphic_pane_g1_ParamLimits

0xd3cf,	// (0x0003b229) list_double2_graphic_pane_g1

0xe1a6,	// (0x0003c000) list_double2_graphic_pane_g2_ParamLimits

0xe1a6,	// (0x0003c000) list_double2_graphic_pane_g2

0xe1b2,	// (0x0003c00c) list_double2_graphic_pane_g3_ParamLimits

0xe1b2,	// (0x0003c00c) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003d4b8) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003d4b8) list_double2_graphic_pane_g

0xd3db,	// (0x0003b235) list_double2_graphic_pane_t1_ParamLimits

0xd3db,	// (0x0003b235) list_double2_graphic_pane_t1

0x19c1,	// (0x0002f81b) list_double2_graphic_pane_t2_ParamLimits

0x19c1,	// (0x0002f81b) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003d4bf) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003d4bf) list_double2_graphic_pane_t

0x19d3,	// (0x0002f82d) list_double_large_graphic_pane_g1_ParamLimits

0x19d3,	// (0x0002f82d) list_double_large_graphic_pane_g1

0x19f7,	// (0x0002f851) list_double_large_graphic_pane_g2_ParamLimits

0x19f7,	// (0x0002f851) list_double_large_graphic_pane_g2

0x2bf0,	// (0x00030a4a) list_double_large_graphic_pane_g3_ParamLimits

0x2bf0,	// (0x00030a4a) list_double_large_graphic_pane_g3

0x1a0d,	// (0x0002f867) list_double_large_graphic_pane_g4_ParamLimits

0x1a0d,	// (0x0002f867) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003d4c4) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003d4c4) list_double_large_graphic_pane_g

0x1a1e,	// (0x0002f878) list_double_large_graphic_pane_t1_ParamLimits

0x1a1e,	// (0x0002f878) list_double_large_graphic_pane_t1

0x1a37,	// (0x0002f891) list_double_large_graphic_pane_t2_ParamLimits

0x1a37,	// (0x0002f891) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003d4cf) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003d4cf) list_double_large_graphic_pane_t

0x2c17,	// (0x00030a71) list_double2_large_graphic_pane_g1_ParamLimits

0x2c17,	// (0x00030a71) list_double2_large_graphic_pane_g1

0x1a49,	// (0x0002f8a3) list_double2_large_graphic_pane_g2_ParamLimits

0x1a49,	// (0x0002f8a3) list_double2_large_graphic_pane_g2

0xe1b2,	// (0x0003c00c) list_double2_large_graphic_pane_g3_ParamLimits

0xe1b2,	// (0x0003c00c) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003d4d4) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003d4d4) list_double2_large_graphic_pane_g

0xd42c,	// (0x0003b286) list_double2_large_graphic_pane_t1_ParamLimits

0xd42c,	// (0x0003b286) list_double2_large_graphic_pane_t1

0x1a5a,	// (0x0002f8b4) list_double2_large_graphic_pane_t2_ParamLimits

0x1a5a,	// (0x0002f8b4) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003d4db) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003d4db) list_double2_large_graphic_pane_t

0x1a6c,	// (0x0002f8c6) list_double_heading_pane_g1_ParamLimits

0x1a6c,	// (0x0002f8c6) list_double_heading_pane_g1

0x2c23,	// (0x00030a7d) list_double_heading_pane_g2_ParamLimits

0x2c23,	// (0x00030a7d) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003d4e0) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003d4e0) list_double_heading_pane_g

0x1a7d,	// (0x0002f8d7) list_double_heading_pane_t1_ParamLimits

0x1a7d,	// (0x0002f8d7) list_double_heading_pane_t1

0x1941,	// (0x0002f79b) list_double_heading_pane_t2_ParamLimits

0x1941,	// (0x0002f79b) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003d4e5) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003d4e5) list_double_heading_pane_t

0xd67b,	// (0x0003b4d5) list_double_graphic_heading_pane_g1_ParamLimits

0xd67b,	// (0x0003b4d5) list_double_graphic_heading_pane_g1

0x1a6c,	// (0x0002f8c6) list_double_graphic_heading_pane_g2_ParamLimits

0x1a6c,	// (0x0002f8c6) list_double_graphic_heading_pane_g2

0x2c23,	// (0x00030a7d) list_double_graphic_heading_pane_g3_ParamLimits

0x2c23,	// (0x00030a7d) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003d4ea) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003d4ea) list_double_graphic_heading_pane_g

0x1a93,	// (0x0002f8ed) list_double_graphic_heading_pane_t1_ParamLimits

0x1a93,	// (0x0002f8ed) list_double_graphic_heading_pane_t1

0x19c1,	// (0x0002f81b) list_double_graphic_heading_pane_t2_ParamLimits

0x19c1,	// (0x0002f81b) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003d4f1) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003d4f1) list_double_graphic_heading_pane_t

0x1aa9,	// (0x0002f903) list_double_time_pane_g1_ParamLimits

0x1aa9,	// (0x0002f903) list_double_time_pane_g1

0x1aba,	// (0x0002f914) list_double_time_pane_g2_ParamLimits

0x1aba,	// (0x0002f914) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003d4f6) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003d4f6) list_double_time_pane_g

0x1ac6,	// (0x0002f920) list_double_time_pane_t1_ParamLimits

0x1ac6,	// (0x0002f920) list_double_time_pane_t1

0x1adc,	// (0x0002f936) list_double_time_pane_t2_ParamLimits

0x1adc,	// (0x0002f936) list_double_time_pane_t2

0x1aee,	// (0x0002f948) list_double_time_pane_t3_ParamLimits

0x1aee,	// (0x0002f948) list_double_time_pane_t3

0x1b00,	// (0x0002f95a) list_double_time_pane_t4_ParamLimits

0x1b00,	// (0x0002f95a) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003d4fb) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003d4fb) list_double_time_pane_t

0xee4f,	// (0x0003cca9) list_setting_pane_g1_ParamLimits

0xee4f,	// (0x0003cca9) list_setting_pane_g1

0xd6ac,	// (0x0003b506) list_setting_pane_g2_ParamLimits

0xd6ac,	// (0x0003b506) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003d504) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003d504) list_setting_pane_g

0x1b12,	// (0x0002f96c) list_setting_pane_t1_ParamLimits

0x1b12,	// (0x0002f96c) list_setting_pane_t1

0x1b2c,	// (0x0002f986) list_setting_pane_t2_ParamLimits

0x1b2c,	// (0x0002f986) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003d509) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003d509) list_setting_pane_t

0x1b69,	// (0x0002f9c3) set_value_pane_cp_ParamLimits

0x1b69,	// (0x0002f9c3) set_value_pane_cp

0x1b75,	// (0x0002f9cf) list_setting_number_pane_g1_ParamLimits

0x1b75,	// (0x0002f9cf) list_setting_number_pane_g1

0x1b81,	// (0x0002f9db) list_setting_number_pane_g2_ParamLimits

0x1b81,	// (0x0002f9db) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003d510) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003d510) list_setting_number_pane_g

0x1b8d,	// (0x0002f9e7) list_setting_number_pane_t1_ParamLimits

0x1b8d,	// (0x0002f9e7) list_setting_number_pane_t1

0x1ba6,	// (0x0002fa00) list_setting_number_pane_t2_ParamLimits

0x1ba6,	// (0x0002fa00) list_setting_number_pane_t2

0x1bc0,	// (0x0002fa1a) list_setting_number_pane_t3_ParamLimits

0x1bc0,	// (0x0002fa1a) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003d515) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003d515) list_setting_number_pane_t

0x1b69,	// (0x0002f9c3) set_value_pane_ParamLimits

0x1b69,	// (0x0002f9c3) set_value_pane

0x5a73,	// (0x000338cd) bg_set_opt_pane_ParamLimits

0x5a73,	// (0x000338cd) bg_set_opt_pane

0xd7fd,	// (0x0003b657) set_value_pane_t1

0x5a94,	// (0x000338ee) slider_set_pane_cp3

0x5a9d,	// (0x000338f7) volume_small_pane_cp

0x5aa6,	// (0x00033900) list_form_gen_pane

0x2bb0,	// (0x00030a0a) scroll_pane_cp8

0x1c03,	// (0x0002fa5d) form_field_data_pane_ParamLimits

0x1c03,	// (0x0002fa5d) form_field_data_pane

0x1c1a,	// (0x0002fa74) form_field_data_wide_pane_ParamLimits

0x1c1a,	// (0x0002fa74) form_field_data_wide_pane

0x1c3a,	// (0x0002fa94) form_field_popup_pane_ParamLimits

0x1c3a,	// (0x0002fa94) form_field_popup_pane

0x1c52,	// (0x0002faac) form_field_popup_wide_pane_ParamLimits

0x1c52,	// (0x0002faac) form_field_popup_wide_pane

0xd889,	// (0x0003b6e3) form_field_slider_pane_ParamLimits

0xd889,	// (0x0003b6e3) form_field_slider_pane

0xd89c,	// (0x0003b6f6) form_field_slider_wide_pane_ParamLimits

0xd89c,	// (0x0003b6f6) form_field_slider_wide_pane

0x5aaf,	// (0x00033909) data_form_pane

0x1c73,	// (0x0002facd) form_field_data_pane_t1

0x5abb,	// (0x00033915) input_focus_pane

0x5ac9,	// (0x00033923) data_form_wide_pane

0xd8db,	// (0x0003b735) form_field_data_wide_pane_t1

0x2a27,	// (0x00030881) input_focus_pane_cp6

0x1c8b,	// (0x0002fae5) form_field_popup_pane_t1

0x5abb,	// (0x00033915) input_focus_pane_cp7

0x5aaf,	// (0x00033909) list_form_pane

0xd91d,	// (0x0003b777) form_field_popup_wide_pane_t1

0x5abb,	// (0x00033915) input_focus_pane_cp8

0x5ae9,	// (0x00033943) list_form_wide_pane

0x1cab,	// (0x0002fb05) form_field_slider_pane_t1_ParamLimits

0x1cab,	// (0x0002fb05) form_field_slider_pane_t1

0x1cc1,	// (0x0002fb1b) form_field_slider_pane_t2_ParamLimits

0x1cc1,	// (0x0002fb1b) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003d525) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003d525) form_field_slider_pane_t

0x2354,	// (0x000301ae) input_focus_pane_cp9_ParamLimits

0x2354,	// (0x000301ae) input_focus_pane_cp9

0x1cd6,	// (0x0002fb30) slider_cont_pane_ParamLimits

0x1cd6,	// (0x0002fb30) slider_cont_pane

0x5af8,	// (0x00033952) form_field_slider_wide_pane_t1_ParamLimits

0x5af8,	// (0x00033952) form_field_slider_wide_pane_t1

0xd979,	// (0x0003b7d3) form_field_slider_wide_pane_t2_ParamLimits

0xd979,	// (0x0003b7d3) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003d52a) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003d52a) form_field_slider_wide_pane_t

0x2354,	// (0x000301ae) input_focus_pane_cp10_ParamLimits

0x2354,	// (0x000301ae) input_focus_pane_cp10

0x1cea,	// (0x0002fb44) slider_cont_pane_cp1_ParamLimits

0x1cea,	// (0x0002fb44) slider_cont_pane_cp1

0x1d00,	// (0x0002fb5a) slider_form_pane_cp

0x5b0a,	// (0x00033964) input_focus_pane_g1

0x5b12,	// (0x0003396c) input_focus_pane_g2

0x5b1a,	// (0x00033974) input_focus_pane_g3

0x5b22,	// (0x0003397c) input_focus_pane_g4

0x5b2a,	// (0x00033984) input_focus_pane_g5

0x5b32,	// (0x0003398c) input_focus_pane_g6

0x5b3a,	// (0x00033994) input_focus_pane_g7

0x5b42,	// (0x0003399c) input_focus_pane_g8

0x5b4a,	// (0x000339a4) input_focus_pane_g9

0x2045,	// (0x0002fe9f) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003d52f) input_focus_pane_g

0x6ffd,	// (0x00034e57) wait_border_pane_g3_copy1

0x1d08,	// (0x0002fb62) data_form_pane_t1

0x2045,	// (0x0002fe9f) wait_anim_pane_g1_copy1

0x1e1a,	// (0x0002fc74) data_form_wide_pane_t1

0x1d20,	// (0x0002fb7a) list_form_graphic_pane_cp_ParamLimits

0x1d20,	// (0x0002fb7a) list_form_graphic_pane_cp

0x7bbc,	// (0x00035a16) slider_form_pane_g1

0x7bc5,	// (0x00035a1f) slider_form_pane_g2

0x0006,

0xf9c1,	// (0x0003d81b) slider_form_pane_g

0xd9c3,	// (0x0003b81d) list_form_graphic_pane_ParamLimits

0xd9c3,	// (0x0003b81d) list_form_graphic_pane

0xd9ed,	// (0x0003b847) list_form_graphic_pane_g1

0xd9f5,	// (0x0003b84f) list_form_graphic_pane_t1_ParamLimits

0xd9f5,	// (0x0003b84f) list_form_graphic_pane_t1

0x239e,	// (0x000301f8) list_highlight_pane_cp5_ParamLimits

0x239e,	// (0x000301f8) list_highlight_pane_cp5

0x1d33,	// (0x0002fb8d) find_pane_g1

0x5b52,	// (0x000339ac) input_find_pane

0x1d3e,	// (0x0002fb98) input_find_pane_g1_ParamLimits

0x1d3e,	// (0x0002fb98) input_find_pane_g1

0x1d4a,	// (0x0002fba4) input_find_pane_t1_ParamLimits

0x1d4a,	// (0x0002fba4) input_find_pane_t1

0x1d5f,	// (0x0002fbb9) input_find_pane_t2_ParamLimits

0x1d5f,	// (0x0002fbb9) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003d544) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003d544) input_find_pane_t

0x5b5b,	// (0x000339b5) input_focus_pane_cp5_ParamLimits

0x5b5b,	// (0x000339b5) input_focus_pane_cp5

0x2354,	// (0x000301ae) bg_popup_window_pane_cp2_ParamLimits

0x2354,	// (0x000301ae) bg_popup_window_pane_cp2

0x5b75,	// (0x000339cf) listscroll_menu_pane_ParamLimits

0x5b75,	// (0x000339cf) listscroll_menu_pane

0x5b81,	// (0x000339db) popup_submenu_window_ParamLimits

0x5b81,	// (0x000339db) popup_submenu_window

0x5ba5,	// (0x000339ff) find_popup_pane_g1

0x5bad,	// (0x00033a07) input_popup_find_pane_cp

0x5b5b,	// (0x000339b5) input_focus_pane_cp4_ParamLimits

0x5b5b,	// (0x000339b5) input_focus_pane_cp4

0x5bb7,	// (0x00033a11) input_popup_find_pane_t1_ParamLimits

0x5bb7,	// (0x00033a11) input_popup_find_pane_t1

0x2192,	// (0x0002ffec) bg_popup_sub_pane_cp

0x5be5,	// (0x00033a3f) listscroll_popup_sub_pane

0x5bed,	// (0x00033a47) list_submenu_pane_ParamLimits

0x5bed,	// (0x00033a47) list_submenu_pane

0x5bfe,	// (0x00033a58) scroll_pane_cp4

0x5c06,	// (0x00033a60) list_single_popup_submenu_pane_ParamLimits

0x5c06,	// (0x00033a60) list_single_popup_submenu_pane

0x5c1a,	// (0x00033a74) list_single_popup_submenu_pane_g1

0x5c22,	// (0x00033a7c) list_single_popup_submenu_pane_t1_ParamLimits

0x5c22,	// (0x00033a7c) list_single_popup_submenu_pane_t1

0x2354,	// (0x000301ae) bg_active_tab_pane_cp1_ParamLimits

0x2354,	// (0x000301ae) bg_active_tab_pane_cp1

0x6bcb,	// (0x00034a25) tabs_2_active_pane_g1

0x2c47,	// (0x00030aa1) tabs_2_active_pane_t1

0x2354,	// (0x000301ae) bg_passive_tab_pane_cp1_ParamLimits

0x2354,	// (0x000301ae) bg_passive_tab_pane_cp1

0x6bcb,	// (0x00034a25) tabs_2_passive_pane_g1

0x2c47,	// (0x00030aa1) tabs_2_passive_pane_t1

0x239e,	// (0x000301f8) bg_active_tab_pane_cp4

0x2c5d,	// (0x00030ab7) tabs_2_long_active_pane_t1

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp4

0xa3f6,	// (0x00038250) list_single_midp_graphic_pane_g4_ParamLimits

0x239e,	// (0x000301f8) bg_active_tab_pane_cp5

0x2c74,	// (0x00030ace) tabs_3_long_active_pane_t1

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp5

0xa3f6,	// (0x00038250) list_single_midp_graphic_pane_g4

0x239e,	// (0x000301f8) bg_popup_window_pane_cp13_ParamLimits

0x239e,	// (0x000301f8) bg_popup_window_pane_cp13

0x5c4c,	// (0x00033aa6) listscroll_popup_fast_pane_ParamLimits

0x5c4c,	// (0x00033aa6) listscroll_popup_fast_pane

0x5c5b,	// (0x00033ab5) grid_popup_fast_pane_ParamLimits

0x5c5b,	// (0x00033ab5) grid_popup_fast_pane

0x5c6d,	// (0x00033ac7) scroll_pane_cp9_ParamLimits

0x5c6d,	// (0x00033ac7) scroll_pane_cp9

0xc586,	// (0x0003a3e0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc586,	// (0x0003a3e0) list_single_graphic_hl_pane_t1_cp2

0x5c91,	// (0x00033aeb) input_focus_pane_cp20_ParamLimits

0x5c91,	// (0x00033aeb) input_focus_pane_cp20

0x5c9f,	// (0x00033af9) query_popup_data_pane_t1_ParamLimits

0x5c9f,	// (0x00033af9) query_popup_data_pane_t1

0x5cb2,	// (0x00033b0c) query_popup_data_pane_t2_ParamLimits

0x5cb2,	// (0x00033b0c) query_popup_data_pane_t2

0x5cf8,	// (0x00033b52) query_popup_data_pane_t3_ParamLimits

0x5cf8,	// (0x00033b52) query_popup_data_pane_t3

0x5d39,	// (0x00033b93) query_popup_data_pane_t4_ParamLimits

0x5d39,	// (0x00033b93) query_popup_data_pane_t4

0x5d75,	// (0x00033bcf) query_popup_data_pane_t5_ParamLimits

0x5d75,	// (0x00033bcf) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003d549) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003d549) query_popup_data_pane_t

0x5b0a,	// (0x00033964) bg_set_opt_pane_g1

0x5b12,	// (0x0003396c) bg_set_opt_pane_g2

0x5b1a,	// (0x00033974) bg_set_opt_pane_g3

0x5b22,	// (0x0003397c) bg_set_opt_pane_g4

0x5b2a,	// (0x00033984) bg_set_opt_pane_g5

0x5b32,	// (0x0003398c) bg_set_opt_pane_g6

0x5b3a,	// (0x00033994) bg_set_opt_pane_g7

0x5b42,	// (0x0003399c) bg_set_opt_pane_g8

0x5b4a,	// (0x000339a4) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003d554) bg_set_opt_pane_g

0x98fd,	// (0x00037757) control_top_pane_stacon_ParamLimits

0x98fd,	// (0x00037757) control_top_pane_stacon

0x9950,	// (0x000377aa) signal_pane_stacon_ParamLimits

0x9950,	// (0x000377aa) signal_pane_stacon

0x6175,	// (0x00033fcf) stacon_top_pane_g1_ParamLimits

0x6175,	// (0x00033fcf) stacon_top_pane_g1

0x9975,	// (0x000377cf) title_pane_stacon_ParamLimits

0x9975,	// (0x000377cf) title_pane_stacon

0x9997,	// (0x000377f1) uni_indicator_pane_stacon_ParamLimits

0x9997,	// (0x000377f1) uni_indicator_pane_stacon

0x99ac,	// (0x00037806) battery_pane_stacon_ParamLimits

0x99ac,	// (0x00037806) battery_pane_stacon

0x99ec,	// (0x00037846) control_bottom_pane_stacon_ParamLimits

0x99ec,	// (0x00037846) control_bottom_pane_stacon

0x9a0b,	// (0x00037865) navi_pane_stacon_ParamLimits

0x9a0b,	// (0x00037865) navi_pane_stacon

0x6197,	// (0x00033ff1) stacon_bottom_pane_g1_ParamLimits

0x6197,	// (0x00033ff1) stacon_bottom_pane_g1

0x5dac,	// (0x00033c06) aid_levels_signal_lsc_ParamLimits

0x5dac,	// (0x00033c06) aid_levels_signal_lsc

0x953e,	// (0x00037398) signal_pane_stacon_g1_ParamLimits

0x953e,	// (0x00037398) signal_pane_stacon_g1

0x954a,	// (0x000373a4) signal_pane_stacon_g2_ParamLimits

0x954a,	// (0x000373a4) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003d567) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003d567) signal_pane_stacon_g

0x957e,	// (0x000373d8) title_pane_stacon_t1_ParamLimits

0x957e,	// (0x000373d8) title_pane_stacon_t1

0x5dda,	// (0x00033c34) uni_indicator_pane_stacon_g1

0x5de4,	// (0x00033c3e) uni_indicator_pane_stacon_g2

0x5dc6,	// (0x00033c20) uni_indicator_pane_stacon_g3

0x5dd0,	// (0x00033c2a) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003d573) uni_indicator_pane_stacon_g

0x95a3,	// (0x000373fd) control_top_pane_stacon_g1

0x95ab,	// (0x00037405) control_top_pane_stacon_t1_ParamLimits

0x95ab,	// (0x00037405) control_top_pane_stacon_t1

0x5dee,	// (0x00033c48) aid_levels_battery_lsc_ParamLimits

0x5dee,	// (0x00033c48) aid_levels_battery_lsc

0x95dc,	// (0x00037436) battery_pane_stacon_g1_ParamLimits

0x95dc,	// (0x00037436) battery_pane_stacon_g1

0x95e8,	// (0x00037442) battery_pane_stacon_g2_ParamLimits

0x95e8,	// (0x00037442) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003d57c) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003d57c) battery_pane_stacon_g

0x9617,	// (0x00037471) navi_icon_pane_stacon

0x9627,	// (0x00037481) navi_navi_pane_stacon

0x9617,	// (0x00037471) navi_text_pane_stacon

0x95a3,	// (0x000373fd) control_bottom_pane_stacon_g1

0x9637,	// (0x00037491) control_bottom_pane_stacon_t1_ParamLimits

0x9637,	// (0x00037491) control_bottom_pane_stacon_t1

0x2c8a,	// (0x00030ae4) grid_app_pane_ParamLimits

0x2c8a,	// (0x00030ae4) grid_app_pane

0x2cb8,	// (0x00030b12) scroll_pane_cp15_ParamLimits

0x2cb8,	// (0x00030b12) scroll_pane_cp15

0x2ccf,	// (0x00030b29) cell_app_pane_ParamLimits

0x2ccf,	// (0x00030b29) cell_app_pane

0x2d0e,	// (0x00030b68) cell_app_pane_g1_ParamLimits

0x2d0e,	// (0x00030b68) cell_app_pane_g1

0x5e16,	// (0x00033c70) cell_app_pane_g2_ParamLimits

0x5e16,	// (0x00033c70) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003d581) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003d581) cell_app_pane_g

0x5e22,	// (0x00033c7c) cell_app_pane_t1_ParamLimits

0x5e22,	// (0x00033c7c) cell_app_pane_t1

0x5e34,	// (0x00033c8e) grid_highlight_pane_ParamLimits

0x5e34,	// (0x00033c8e) grid_highlight_pane

0x5b0a,	// (0x00033964) cell_highlight_pane_g1

0x5b12,	// (0x0003396c) cell_highlight_pane_g2

0x5b1a,	// (0x00033974) cell_highlight_pane_g3

0x5b22,	// (0x0003397c) cell_highlight_pane_g4

0x5b2a,	// (0x00033984) cell_highlight_pane_g5

0x5b32,	// (0x0003398c) cell_highlight_pane_g6

0x5b3a,	// (0x00033994) cell_highlight_pane_g7

0x5b42,	// (0x0003399c) cell_highlight_pane_g8

0x5b4a,	// (0x000339a4) cell_highlight_pane_g9

0x2045,	// (0x0002fe9f) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003d52f) cell_highlight_pane_g

0x5e45,	// (0x00033c9f) bg_scroll_pane

0x96f0,	// (0x0003754a) scroll_handle_pane

0x5e8c,	// (0x00033ce6) scroll_bg_pane_g1

0x5ea1,	// (0x00033cfb) scroll_bg_pane_g2

0x5eb9,	// (0x00033d13) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003d586) scroll_bg_pane_g

0x5ece,	// (0x00033d28) scroll_handle_focus_pane_ParamLimits

0x5ece,	// (0x00033d28) scroll_handle_focus_pane

0x5e8c,	// (0x00033ce6) scroll_handle_pane_g1

0x5edb,	// (0x00033d35) scroll_handle_pane_g2

0x5eb9,	// (0x00033d13) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003d58d) scroll_handle_pane_g

0x5b5b,	// (0x000339b5) bg_popup_sub_pane_cp21_ParamLimits

0x5b5b,	// (0x000339b5) bg_popup_sub_pane_cp21

0x5eef,	// (0x00033d49) popup_fep_japan_predictive_window_t1_ParamLimits

0x5eef,	// (0x00033d49) popup_fep_japan_predictive_window_t1

0x5f06,	// (0x00033d60) popup_fep_japan_predictive_window_t2_ParamLimits

0x5f06,	// (0x00033d60) popup_fep_japan_predictive_window_t2

0x5f39,	// (0x00033d93) popup_fep_japan_predictive_window_t3_ParamLimits

0x5f39,	// (0x00033d93) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003d594) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003d594) popup_fep_japan_predictive_window_t

0x2192,	// (0x0002ffec) bg_popup_sub_pane_cp23

0x5f70,	// (0x00033dca) listscroll_japin_cand_pane

0x5f78,	// (0x00033dd2) popup_fep_japan_candidate_window_t1

0x5f86,	// (0x00033de0) candidate_pane_ParamLimits

0x5f86,	// (0x00033de0) candidate_pane

0x5f99,	// (0x00033df3) scroll_pane_cp30

0x5fa1,	// (0x00033dfb) list_single_popup_jap_candidate_pane_ParamLimits

0x5fa1,	// (0x00033dfb) list_single_popup_jap_candidate_pane

0x2192,	// (0x0002ffec) list_highlight_pane_cp30

0x5fb6,	// (0x00033e10) list_single_popup_jap_candidate_pane_t1

0x2d3b,	// (0x00030b95) level_1_signal

0x2d4d,	// (0x00030ba7) level_2_signal

0x2d60,	// (0x00030bba) level_3_signal

0x2d73,	// (0x00030bcd) level_4_signal

0x2d86,	// (0x00030be0) level_5_signal

0x2d99,	// (0x00030bf3) level_6_signal

0x2dac,	// (0x00030c06) level_7_signal

0x2d3b,	// (0x00030b95) level_1_battery

0x2d4d,	// (0x00030ba7) level_2_battery

0x2d60,	// (0x00030bba) level_3_battery

0x2d73,	// (0x00030bcd) level_4_battery

0x2d86,	// (0x00030be0) level_5_battery

0x2d99,	// (0x00030bf3) level_6_battery

0x2dac,	// (0x00030c06) level_7_battery

0x5fdd,	// (0x00033e37) list_menu_pane_ParamLimits

0x5fdd,	// (0x00033e37) list_menu_pane

0x5fee,	// (0x00033e48) scroll_pane_cp25_ParamLimits

0x5fee,	// (0x00033e48) scroll_pane_cp25

0x2dbf,	// (0x00030c19) list_double2_graphic_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double2_graphic_pane_cp2

0x2dbf,	// (0x00030c19) list_double2_large_graphic_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double2_large_graphic_pane_cp2

0x2dbf,	// (0x00030c19) list_double2_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double2_pane_cp2

0x2dbf,	// (0x00030c19) list_double_graphic_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double_graphic_pane_cp2

0x2dbf,	// (0x00030c19) list_double_large_graphic_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double_large_graphic_pane_cp2

0x2dbf,	// (0x00030c19) list_double_number_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double_number_pane_cp2

0x2dbf,	// (0x00030c19) list_double_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c19) list_double_pane_cp2

0x2dda,	// (0x00030c34) list_single_2graphic_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_2graphic_pane_cp2

0x2dda,	// (0x00030c34) list_single_graphic_heading_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_graphic_heading_pane_cp2

0x2dda,	// (0x00030c34) list_single_graphic_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_graphic_pane_cp2

0x2dda,	// (0x00030c34) list_single_heading_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_heading_pane_cp2

0x2deb,	// (0x00030c45) list_single_large_graphic_pane_cp2_ParamLimits

0x2deb,	// (0x00030c45) list_single_large_graphic_pane_cp2

0x2dda,	// (0x00030c34) list_single_number_heading_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_number_heading_pane_cp2

0x2dda,	// (0x00030c34) list_single_number_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_number_pane_cp2

0x2dda,	// (0x00030c34) list_single_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_pane_cp2

0x6010,	// (0x00033e6a) bg_popup_sub_pane_cp22

0x986d,	// (0x000376c7) popup_side_volume_key_window_g1

0x9891,	// (0x000376eb) popup_side_volume_key_window_t1

0x98ad,	// (0x00037707) volume_small_pane_cp1

0x2354,	// (0x000301ae) bg_popup_sub_pane_cp24_ParamLimits

0x2354,	// (0x000301ae) bg_popup_sub_pane_cp24

0x6026,	// (0x00033e80) fep_china_uni_candidate_pane_ParamLimits

0x6026,	// (0x00033e80) fep_china_uni_candidate_pane

0x603a,	// (0x00033e94) fep_china_uni_entry_pane

0x604a,	// (0x00033ea4) popup_fep_china_uni_window_g1

0x6066,	// (0x00033ec0) fep_china_uni_entry_pane_g1

0x606e,	// (0x00033ec8) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003d5c1) fep_china_uni_entry_pane_g

0x6076,	// (0x00033ed0) fep_entry_item_pane

0x6080,	// (0x00033eda) fep_candidate_item_pane

0x6088,	// (0x00033ee2) fep_china_uni_candidate_pane_g1

0x6090,	// (0x00033eea) fep_china_uni_candidate_pane_g2

0x6098,	// (0x00033ef2) fep_china_uni_candidate_pane_g3

0x60a0,	// (0x00033efa) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003d5c6) fep_china_uni_candidate_pane_g

0x2045,	// (0x0002fe9f) fep_entry_item_pane_g1

0x60a8,	// (0x00033f02) fep_entry_item_pane_t1_ParamLimits

0x60a8,	// (0x00033f02) fep_entry_item_pane_t1

0x60be,	// (0x00033f18) fep_candidate_item_pane_t1_ParamLimits

0x60be,	// (0x00033f18) fep_candidate_item_pane_t1

0x60d3,	// (0x00033f2d) fep_candidate_item_pane_t2_ParamLimits

0x60d3,	// (0x00033f2d) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003d5cf) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003d5cf) fep_candidate_item_pane_t

0x239e,	// (0x000301f8) list_highlight_pane_cp31_ParamLimits

0x239e,	// (0x000301f8) list_highlight_pane_cp31

0x60e5,	// (0x00033f3f) level_1_signal_lsc

0x60ee,	// (0x00033f48) level_2_signal_lsc

0x60f7,	// (0x00033f51) level_3_signal_lsc

0x6100,	// (0x00033f5a) level_4_signal_lsc

0x6109,	// (0x00033f63) level_5_signal_lsc

0x6112,	// (0x00033f6c) level_6_signal_lsc

0x611b,	// (0x00033f75) level_7_signal_lsc

0x611b,	// (0x00033f75) level_1_battery_lsc

0x6124,	// (0x00033f7e) level_2_battery_lsc

0x612d,	// (0x00033f87) level_3_battery_lsc

0x6136,	// (0x00033f90) level_4_battery_lsc

0x613f,	// (0x00033f99) level_5_battery_lsc

0x6148,	// (0x00033fa2) level_6_battery_lsc

0x60e5,	// (0x00033f3f) level_7_battery_lsc

0x6151,	// (0x00033fab) scroll_handle_focus_pane_g1

0x615a,	// (0x00033fb4) scroll_handle_focus_pane_g2

0x6163,	// (0x00033fbd) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003d5d4) scroll_handle_focus_pane_g

0x1d74,	// (0x0002fbce) list_single_2graphic_pane_g1_ParamLimits

0x1d74,	// (0x0002fbce) list_single_2graphic_pane_g1

0x2bd3,	// (0x00030a2d) list_single_2graphic_pane_g2_ParamLimits

0x2bd3,	// (0x00030a2d) list_single_2graphic_pane_g2

0xe205,	// (0x0003c05f) list_single_2graphic_pane_g3_ParamLimits

0xe205,	// (0x0003c05f) list_single_2graphic_pane_g3

0x1d80,	// (0x0002fbda) list_single_2graphic_pane_g4_ParamLimits

0x1d80,	// (0x0002fbda) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003d5db) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003d5db) list_single_2graphic_pane_g

0x1d91,	// (0x0002fbeb) list_single_2graphic_pane_t1_ParamLimits

0x1d91,	// (0x0002fbeb) list_single_2graphic_pane_t1

0x2e44,	// (0x00030c9e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x2e44,	// (0x00030c9e) list_double2_graphic_large_graphic_pane_g1

0x1a49,	// (0x0002f8a3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x1a49,	// (0x0002f8a3) list_double2_graphic_large_graphic_pane_g2

0xe1b2,	// (0x0003c00c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe1b2,	// (0x0003c00c) list_double2_graphic_large_graphic_pane_g3

0x1dbf,	// (0x0002fc19) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1dbf,	// (0x0002fc19) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003d5e4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003d5e4) list_double2_graphic_large_graphic_pane_g

0x1dcb,	// (0x0002fc25) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x1dcb,	// (0x0002fc25) list_double2_graphic_large_graphic_pane_t1

0x1de1,	// (0x0002fc3b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1de1,	// (0x0002fc3b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003d5ed) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003d5ed) list_double2_graphic_large_graphic_pane_t

0x623e,	// (0x00034098) popup_fast_swap_window_ParamLimits

0x623e,	// (0x00034098) popup_fast_swap_window

0x625a,	// (0x000340b4) popup_side_volume_key_window

0x6274,	// (0x000340ce) stacon_top_pane

0x627e,	// (0x000340d8) status_pane_ParamLimits

0x627e,	// (0x000340d8) status_pane

0x6274,	// (0x000340ce) status_small_pane

0x2192,	// (0x0002ffec) control_pane

0x2192,	// (0x0002ffec) stacon_bottom_pane

0x2bb0,	// (0x00030a0a) scroll_pane_cp121

0x5aa6,	// (0x00033900) set_content_pane

0x6bdc,	// (0x00034a36) bg_active_tab_pane_g1_cp1

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp1

0x6bd3,	// (0x00034a2d) bg_active_tab_pane_g3_cp1

0x6bdc,	// (0x00034a36) bg_passive_tab_pane_g1_cp1

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp1

0x6bd3,	// (0x00034a2d) bg_passive_tab_pane_g3_cp1

0x2e5d,	// (0x00030cb7) bg_active_tab_pane_g1_cp2

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp2

0x2e54,	// (0x00030cae) bg_active_tab_pane_g3_cp2

0x2e5d,	// (0x00030cb7) bg_passive_tab_pane_g1_cp2

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp2

0x2e54,	// (0x00030cae) bg_passive_tab_pane_g3_cp2

0x2e6f,	// (0x00030cc9) bg_active_tab_pane_g1_cp3

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp3

0x2e66,	// (0x00030cc0) bg_active_tab_pane_g3_cp3

0x2e6f,	// (0x00030cc9) bg_passive_tab_pane_g1_cp3

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp3

0x2e66,	// (0x00030cc0) bg_passive_tab_pane_g3_cp3

0x2e81,	// (0x00030cdb) bg_active_tab_pane_g1_cp4

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp4

0x2e78,	// (0x00030cd2) bg_active_tab_pane_g3_cp4

0x2e81,	// (0x00030cdb) bg_passive_tab_pane_g1_cp4

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp4

0x2e78,	// (0x00030cd2) bg_passive_tab_pane_g3_cp4

0x61bc,	// (0x00034016) bg_active_tab_pane_g1_cp5

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp5

0x61b3,	// (0x0003400d) bg_active_tab_pane_g3_cp5

0x61bc,	// (0x00034016) bg_passive_tab_pane_g1_cp5

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp5

0x61b3,	// (0x0003400d) bg_passive_tab_pane_g3_cp5

0x2e8a,	// (0x00030ce4) list_set_graphic_pane_ParamLimits

0x2e8a,	// (0x00030ce4) list_set_graphic_pane

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp4

0x61c5,	// (0x0003401f) list_set_graphic_pane_g1_ParamLimits

0x61c5,	// (0x0003401f) list_set_graphic_pane_g1

0x61d1,	// (0x0003402b) list_set_graphic_pane_g2_ParamLimits

0x61d1,	// (0x0003402b) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003d5f2) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003d5f2) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0003d94a) volume_small_pane_cp_g

0x61f3,	// (0x0003404d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x61f3,	// (0x0003404d) list_double2_large_graphic_pane_g1_cp2

0x61ff,	// (0x00034059) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x61ff,	// (0x00034059) list_double2_large_graphic_pane_g2_cp2

0x620e,	// (0x00034068) list_double2_large_graphic_pane_g3_cp2

0x6216,	// (0x00034070) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6216,	// (0x00034070) list_double2_large_graphic_pane_t1_cp2

0x622c,	// (0x00034086) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x622c,	// (0x00034086) list_double2_large_graphic_pane_t2_cp2

0x796c,	// (0x000357c6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x796c,	// (0x000357c6) list_double_large_graphic_pane_g1_cp2

0x797d,	// (0x000357d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x797d,	// (0x000357d7) list_double_large_graphic_pane_g2_cp2

0x6359,	// (0x000341b3) list_double_large_graphic_pane_g3_cp2

0x798c,	// (0x000357e6) list_double_large_graphic_pane_g4_cp

0x7994,	// (0x000357ee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7994,	// (0x000357ee) list_double_large_graphic_pane_t1_cp2

0x79ab,	// (0x00035805) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x79ab,	// (0x00035805) list_double_large_graphic_pane_t2_cp2

0x628c,	// (0x000340e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x628c,	// (0x000340e6) list_double2_graphic_pane_g1_cp2

0x6298,	// (0x000340f2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6298,	// (0x000340f2) list_double2_graphic_pane_g2_cp2

0x62a7,	// (0x00034101) list_double2_graphic_pane_g3_cp2

0x62af,	// (0x00034109) list_double2_graphic_pane_t1_cp2_ParamLimits

0x62af,	// (0x00034109) list_double2_graphic_pane_t1_cp2

0x62c5,	// (0x0003411f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x62c5,	// (0x0003411f) list_double2_graphic_pane_t2_cp2

0x62d7,	// (0x00034131) list_single_number_heading_pane_g1_cp2_ParamLimits

0x62d7,	// (0x00034131) list_single_number_heading_pane_g1_cp2

0x62e3,	// (0x0003413d) list_single_number_heading_pane_g2_cp2

0x62eb,	// (0x00034145) list_single_number_heading_pane_t1_cp2_ParamLimits

0x62eb,	// (0x00034145) list_single_number_heading_pane_t1_cp2

0x6301,	// (0x0003415b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6301,	// (0x0003415b) list_single_number_heading_pane_t2_cp2

0x6313,	// (0x0003416d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6313,	// (0x0003416d) list_single_number_heading_pane_t3_cp2

0x62d7,	// (0x00034131) list_single_heading_pane_g1_cp2_ParamLimits

0x62d7,	// (0x00034131) list_single_heading_pane_g1_cp2

0x62e3,	// (0x0003413d) list_single_heading_pane_g2_cp2

0x62eb,	// (0x00034145) list_single_heading_pane_t1_cp2_ParamLimits

0x62eb,	// (0x00034145) list_single_heading_pane_t1_cp2

0x7776,	// (0x000355d0) list_single_heading_pane_t2_cp2_ParamLimits

0x7776,	// (0x000355d0) list_single_heading_pane_t2_cp2

0x76fb,	// (0x00035555) list_double_graphic_pane_g1_cp2_ParamLimits

0x76fb,	// (0x00035555) list_double_graphic_pane_g1_cp2

0x7707,	// (0x00035561) list_double_graphic_pane_g2_cp2_ParamLimits

0x7707,	// (0x00035561) list_double_graphic_pane_g2_cp2

0x7716,	// (0x00035570) list_double_graphic_pane_g3_cp2

0x771e,	// (0x00035578) list_double_graphic_pane_t1_cp2_ParamLimits

0x771e,	// (0x00035578) list_double_graphic_pane_t1_cp2

0x7734,	// (0x0003558e) list_double_graphic_pane_t2_cp2_ParamLimits

0x7734,	// (0x0003558e) list_double_graphic_pane_t2_cp2

0x634d,	// (0x000341a7) list_double_number_pane_g1_cp2_ParamLimits

0x634d,	// (0x000341a7) list_double_number_pane_g1_cp2

0x6359,	// (0x000341b3) list_double_number_pane_g2_cp2

0x76c1,	// (0x0003551b) list_double_number_pane_t1_cp2_ParamLimits

0x76c1,	// (0x0003551b) list_double_number_pane_t1_cp2

0x76d3,	// (0x0003552d) list_double_number_pane_t2_cp2_ParamLimits

0x76d3,	// (0x0003552d) list_double_number_pane_t2_cp2

0x76e9,	// (0x00035543) list_double_number_pane_t3_cp2_ParamLimits

0x76e9,	// (0x00035543) list_double_number_pane_t3_cp2

0x7639,	// (0x00035493) list_single_graphic_pane_g1_cp2_ParamLimits

0x7639,	// (0x00035493) list_single_graphic_pane_g1_cp2

0x62d7,	// (0x00034131) list_single_graphic_pane_g2_cp2_ParamLimits

0x62d7,	// (0x00034131) list_single_graphic_pane_g2_cp2

0x62e3,	// (0x0003413d) list_single_graphic_pane_g3_cp2

0x7611,	// (0x0003546b) list_single_graphic_pane_t1_cp2_ParamLimits

0x7611,	// (0x0003546b) list_single_graphic_pane_t1_cp2

0x62d7,	// (0x00034131) list_single_number_pane_g1_cp2_ParamLimits

0x62d7,	// (0x00034131) list_single_number_pane_g1_cp2

0x62e3,	// (0x0003413d) list_single_number_pane_g2_cp2

0x7611,	// (0x0003546b) list_single_number_pane_t1_cp2_ParamLimits

0x7611,	// (0x0003546b) list_single_number_pane_t1_cp2

0x7627,	// (0x00035481) list_single_number_pane_t2_cp2_ParamLimits

0x7627,	// (0x00035481) list_single_number_pane_t2_cp2

0x61ff,	// (0x00034059) list_double2_pane_g1_cp2_ParamLimits

0x61ff,	// (0x00034059) list_double2_pane_g1_cp2

0x620e,	// (0x00034068) list_double2_pane_g2_cp2

0x6325,	// (0x0003417f) list_double2_pane_t1_cp2_ParamLimits

0x6325,	// (0x0003417f) list_double2_pane_t1_cp2

0x633b,	// (0x00034195) list_double2_pane_t2_cp2_ParamLimits

0x633b,	// (0x00034195) list_double2_pane_t2_cp2

0x634d,	// (0x000341a7) list_double_pane_g1_cp2_ParamLimits

0x634d,	// (0x000341a7) list_double_pane_g1_cp2

0x6359,	// (0x000341b3) list_double_pane_g2_cp2

0x6361,	// (0x000341bb) list_double_pane_t1_cp2_ParamLimits

0x6361,	// (0x000341bb) list_double_pane_t1_cp2

0x6377,	// (0x000341d1) list_double_pane_t2_cp2_ParamLimits

0x6377,	// (0x000341d1) list_double_pane_t2_cp2

0x639f,	// (0x000341f9) list_single_pane_cp2_g3

0x62d7,	// (0x00034131) list_single_pane_g1_cp2_ParamLimits

0x62d7,	// (0x00034131) list_single_pane_g1_cp2

0x62e3,	// (0x0003413d) list_single_pane_g2_cp2

0x63af,	// (0x00034209) list_single_pane_t1_cp2_ParamLimits

0x63af,	// (0x00034209) list_single_pane_t1_cp2

0x63c7,	// (0x00034221) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x63c7,	// (0x00034221) list_single_large_graphic_pane_g1_cp2

0x63d3,	// (0x0003422d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x63d3,	// (0x0003422d) list_single_large_graphic_pane_g2_cp2

0x63df,	// (0x00034239) list_single_large_graphic_pane_g3_cp2

0x63e7,	// (0x00034241) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x63e7,	// (0x00034241) list_single_large_graphic_pane_g4_cp1

0x6401,	// (0x0003425b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x6401,	// (0x0003425b) list_single_large_graphic_pane_t1_cp2

0x75f3,	// (0x0003544d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x75f3,	// (0x0003544d) list_single_graphic_heading_pane_g1_cp2

0x75ce,	// (0x00035428) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x75ce,	// (0x00035428) list_single_graphic_heading_pane_g4_cp2

0x62e3,	// (0x0003413d) list_single_graphic_heading_pane_g5_cp2

0x62eb,	// (0x00034145) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62eb,	// (0x00034145) list_single_graphic_heading_pane_t1_cp2

0x75ff,	// (0x00035459) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x75ff,	// (0x00035459) list_single_graphic_heading_pane_t2_cp2

0x75c2,	// (0x0003541c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x75c2,	// (0x0003541c) list_single_2graphic_pane_g1_cp2

0x75ce,	// (0x00035428) list_single_2graphic_pane_g2_cp2_ParamLimits

0x75ce,	// (0x00035428) list_single_2graphic_pane_g2_cp2

0x62e3,	// (0x0003413d) list_single_2graphic_pane_g3_cp2

0x6be5,	// (0x00034a3f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6be5,	// (0x00034a3f) list_single_2graphic_pane_g4_cp2

0x75dd,	// (0x00035437) list_single_2graphic_pane_t1_cp2_ParamLimits

0x75dd,	// (0x00035437) list_single_2graphic_pane_t1_cp2

0x2045,	// (0x0002fe9f) list_highlight_pane_g10_cp1

0x71d4,	// (0x0003502e) list_highlight_pane_g1_cp1

0x71dc,	// (0x00035036) list_highlight_pane_g2_cp1

0x71e4,	// (0x0003503e) list_highlight_pane_g3_cp1

0x71ec,	// (0x00035046) list_highlight_pane_g4_cp1

0x71f4,	// (0x0003504e) list_highlight_pane_g5_cp1

0x71fc,	// (0x00035056) list_highlight_pane_g6_cp1

0x7204,	// (0x0003505e) list_highlight_pane_g7_cp1

0x720c,	// (0x00035066) list_highlight_pane_g8_cp1

0x7214,	// (0x0003506e) list_highlight_pane_g9_cp1

0x3b33,	// (0x0003198d) form_field_slider_pane_t3

0x3b41,	// (0x0003199b) form_field_slider_pane_t4

0x711e,	// (0x00034f78) slider_form_pane_ParamLimits

0x711e,	// (0x00034f78) slider_form_pane

0x2192,	// (0x0002ffec) control_abbreviations

0x2192,	// (0x0002ffec) control_conventions

0x2192,	// (0x0002ffec) control_definitions

0x2192,	// (0x0002ffec) format_table_attribute

0x77c0,	// (0x0003561a) bg_popup_preview_window_pane_g9

0x2192,	// (0x0002ffec) format_table_data2

0x2192,	// (0x0002ffec) format_table_data3

0x2192,	// (0x0002ffec) format_table_data_example

0x0008,

0x2192,	// (0x0002ffec) intro_purpose

0xf921,	// (0x0003d77b) bg_popup_preview_window_pane_g

0x2192,	// (0x0002ffec) texts_category

0x2192,	// (0x0002ffec) texts_graphics

0x6417,	// (0x00034271) text_digital

0x6426,	// (0x00034280) text_primary

0x6435,	// (0x0003428f) text_primary_small

0x6444,	// (0x0003429e) text_secondary

0x6453,	// (0x000342ad) text_title

0x7c56,	// (0x00035ab0) bg_passive_tab_pane_g1_cp3_srt

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp3_srt

0x7c4d,	// (0x00035aa7) bg_passive_tab_pane_g3_cp3_srt

0x2354,	// (0x000301ae) bg_active_tab_pane_cp3_srt_ParamLimits

0x2354,	// (0x000301ae) bg_active_tab_pane_cp3_srt

0x6bc3,	// (0x00034a1d) tabs_4_active_pane_srt_g1

0x2380,	// (0x000301da) tabs_4_active_pane_srt_t1_ParamLimits

0x2380,	// (0x000301da) tabs_4_active_pane_srt_t1

0x7c56,	// (0x00035ab0) bg_active_tab_pane_g1_cp3_copy1

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp3_copy1

0x7c4d,	// (0x00035aa7) bg_active_tab_pane_g3_cp3_copy1

0x239e,	// (0x000301f8) tabs_2_long_active_pane_srt_ParamLimits

0x239e,	// (0x000301f8) tabs_2_long_active_pane_srt

0x239e,	// (0x000301f8) tabs_2_long_passive_pane_srt_ParamLimits

0x239e,	// (0x000301f8) tabs_2_long_passive_pane_srt

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp4_srt

0x7b8c,	// (0x000359e6) bg_passive_tab_pane_g1_cp4_srt

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp4_srt

0x7b83,	// (0x000359dd) bg_passive_tab_pane_g3_cp4_srt

0x239e,	// (0x000301f8) bg_active_tab_pane_cp4_srt_ParamLimits

0x239e,	// (0x000301f8) bg_active_tab_pane_cp4_srt

0x2c5d,	// (0x00030ab7) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2c5d,	// (0x00030ab7) tabs_2_long_active_pane_srt_t1

0x7b8c,	// (0x000359e6) bg_active_tab_pane_g1_cp4_srt

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp4_srt

0x7b83,	// (0x000359dd) bg_active_tab_pane_g3_cp4_srt

0x2354,	// (0x000301ae) tabs_3_long_active_pane_srt_ParamLimits

0x2354,	// (0x000301ae) tabs_3_long_active_pane_srt

0x2354,	// (0x000301ae) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2354,	// (0x000301ae) tabs_3_long_passive_pane_cp_srt

0x2354,	// (0x000301ae) tabs_3_long_passive_pane_srt_ParamLimits

0x2354,	// (0x000301ae) tabs_3_long_passive_pane_srt

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp5_srt

0x61bc,	// (0x00034016) bg_passive_tab_pane_g1_cp5_srt

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp5_srt

0x61b3,	// (0x0003400d) bg_passive_tab_pane_g3_cp5_srt

0x239e,	// (0x000301f8) bg_active_tab_pane_cp5_srt_ParamLimits

0x239e,	// (0x000301f8) bg_active_tab_pane_cp5_srt

0x2c74,	// (0x00030ace) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2c74,	// (0x00030ace) tabs_3_long_active_pane_srt_t1

0x61bc,	// (0x00034016) bg_active_tab_pane_g1_cp5_srt

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp5_srt

0x61b3,	// (0x0003400d) bg_active_tab_pane_g3_cp5_srt

0x7b75,	// (0x000359cf) navi_text_pane_srt_t1

0x7b6d,	// (0x000359c7) navi_icon_pane_srt_g1

0x656b,	// (0x000343c5) midp_editing_number_pane_srt

0x6462,	// (0x000342bc) midp_ticker_pane_srt

0x6573,	// (0x000343cd) midp_ticker_pane_srt_g1

0x657b,	// (0x000343d5) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003d611) midp_ticker_pane_srt_g

0x6583,	// (0x000343dd) midp_ticker_pane_srt_t1

0x7b5e,	// (0x000359b8) midp_editing_number_pane_t1_copy1

0x2e9e,	// (0x00030cf8) listscroll_midp_pane

0x2e9e,	// (0x00030cf8) midp_form_pane

0x646a,	// (0x000342c4) midp_info_popup_window_ParamLimits

0x646a,	// (0x000342c4) midp_info_popup_window

0x5b5b,	// (0x000339b5) bg_popup_sub_pane_cp50_ParamLimits

0x5b5b,	// (0x000339b5) bg_popup_sub_pane_cp50

0x6e78,	// (0x00034cd2) listscroll_midp_info_pane_ParamLimits

0x6e78,	// (0x00034cd2) listscroll_midp_info_pane

0x6e60,	// (0x00034cba) listscroll_form_midp_pane_ParamLimits

0x6e60,	// (0x00034cba) listscroll_form_midp_pane

0x6e6c,	// (0x00034cc6) scroll_bar_cp050

0x3b27,	// (0x00031981) list_midp_pane

0x849d,	// (0x000362f7) signal_pane_g2_cp

0x6d86,	// (0x00034be0) listscroll_midp_info_pane_t1_ParamLimits

0x6d86,	// (0x00034be0) listscroll_midp_info_pane_t1

0x6d9e,	// (0x00034bf8) listscroll_midp_info_pane_t2_ParamLimits

0x6d9e,	// (0x00034bf8) listscroll_midp_info_pane_t2

0x6ddc,	// (0x00034c36) listscroll_midp_info_pane_t3_ParamLimits

0x6ddc,	// (0x00034c36) listscroll_midp_info_pane_t3

0x6e16,	// (0x00034c70) listscroll_midp_info_pane_t4_ParamLimits

0x6e16,	// (0x00034c70) listscroll_midp_info_pane_t4

0x0003,

0xf85c,	// (0x0003d6b6) listscroll_midp_info_pane_t_ParamLimits

0xf85c,	// (0x0003d6b6) listscroll_midp_info_pane_t

0x5bfe,	// (0x00033a58) scroll_pane_cp21

0x6d2a,	// (0x00034b84) form_midp_field_choice_group_pane

0x6d33,	// (0x00034b8d) form_midp_field_text_pane

0x6d6c,	// (0x00034bc6) form_midp_field_time_pane

0x6d74,	// (0x00034bce) form_midp_gauge_slider_pane

0x6d7d,	// (0x00034bd7) form_midp_gauge_wait_pane

0x2192,	// (0x0002ffec) form_midp_image_pane

0x1df3,	// (0x0002fc4d) list_single_midp_pane_ParamLimits

0x1df3,	// (0x0002fc4d) list_single_midp_pane

0x3b06,	// (0x00031960) form_midp_field_text_pane_t1

0x6a5e,	// (0x000348b8) input_focus_pane_cp050

0x6d19,	// (0x00034b73) list_midp_form_text_pane

0x6ce8,	// (0x00034b42) form_midp_field_choice_group_pane_t1

0x6cf6,	// (0x00034b50) input_focus_pane_cp051

0x6d0a,	// (0x00034b64) list_midp_choice_pane

0x2192,	// (0x0002ffec) status_idle_pane

0x6ccc,	// (0x00034b26) form_midp_field_time_pane_t1

0x2045,	// (0x0002fe9f) wait_anim_pane_g2_copy1

0x6cda,	// (0x00034b34) form_midp_field_time_pane_t2

0x0001,

0x64d5,	// (0x0003432f) aid_navinavi_width_2_pane

0xf857,	// (0x0003d6b1) form_midp_field_time_pane_t

0x2192,	// (0x0002ffec) input_focus_pane_cp052

0x2192,	// (0x0002ffec) bg_input_focus_pane_cp040

0x6ca8,	// (0x00034b02) form_midp_gauge_slider_pane_t1

0x6cb6,	// (0x00034b10) form_midp_gauge_slider_pane_t2

0x3aea,	// (0x00031944) form_midp_gauge_slider_pane_t3

0x3af8,	// (0x00031952) form_midp_gauge_slider_pane_t4

0x0003,

0xf84e,	// (0x0003d6a8) form_midp_gauge_slider_pane_t

0x6cc4,	// (0x00034b1e) form_midp_slider_pane

0x239e,	// (0x000301f8) bg_input_focus_pane_cp041_ParamLimits

0x239e,	// (0x000301f8) bg_input_focus_pane_cp041

0x6c78,	// (0x00034ad2) form_midp_gauge_wait_pane_t1_ParamLimits

0x6c78,	// (0x00034ad2) form_midp_gauge_wait_pane_t1

0x6c8a,	// (0x00034ae4) form_midp_gauge_wait_pane_t2_ParamLimits

0x6c8a,	// (0x00034ae4) form_midp_gauge_wait_pane_t2

0x0001,

0xf849,	// (0x0003d6a3) form_midp_gauge_wait_pane_t_ParamLimits

0xf849,	// (0x0003d6a3) form_midp_gauge_wait_pane_t

0x6c9c,	// (0x00034af6) form_midp_wait_pane_ParamLimits

0x6c9c,	// (0x00034af6) form_midp_wait_pane

0x6c42,	// (0x00034a9c) form_midp_image_pane_g1

0x6c4b,	// (0x00034aa5) form_midp_image_pane_t1

0x6c5a,	// (0x00034ab4) form_midp_image_pane_t2

0x6c69,	// (0x00034ac3) form_midp_image_pane_t3

0x0002,

0xf842,	// (0x0003d69c) form_midp_image_pane_t

0x6c39,	// (0x00034a93) list_single_midp_pane_g1

0xdb18,	// (0x0003b972) list_single_midp_pane_t1

0x3ad6,	// (0x00031930) list_midp_form_item_pane_ParamLimits

0x3ad6,	// (0x00031930) list_midp_form_item_pane

0x647d,	// (0x000342d7) list_midp_form_item_pane_t1

0x648c,	// (0x000342e6) midp_ticker_pane_g1

0x6498,	// (0x000342f2) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003d5f7) midp_ticker_pane_g

0x64a4,	// (0x000342fe) midp_ticker_pane_t1

0x7b5e,	// (0x000359b8) midp_editing_number_pane_t1

0x7be6,	// (0x00035a40) midp_editing_number_pane

0x7bf2,	// (0x00035a4c) midp_ticker_pane

0x7b4e,	// (0x000359a8) ai_message_heading_pane

0x2192,	// (0x0002ffec) bg_popup_window_pane_cp14

0x7b56,	// (0x000359b0) listscroll_ai_message_pane

0x7ad8,	// (0x00035932) ai_message_heading_pane_g1_ParamLimits

0x7ad8,	// (0x00035932) ai_message_heading_pane_g1

0x7ae4,	// (0x0003593e) ai_message_heading_pane_g2_ParamLimits

0x7ae4,	// (0x0003593e) ai_message_heading_pane_g2

0x7af0,	// (0x0003594a) ai_message_heading_pane_g3_ParamLimits

0x7af0,	// (0x0003594a) ai_message_heading_pane_g3

0x7afc,	// (0x00035956) ai_message_heading_pane_g4_ParamLimits

0x7afc,	// (0x00035956) ai_message_heading_pane_g4

0x0003,

0xf983,	// (0x0003d7dd) ai_message_heading_pane_g_ParamLimits

0xf983,	// (0x0003d7dd) ai_message_heading_pane_g

0x7b08,	// (0x00035962) ai_message_heading_pane_t1_ParamLimits

0x7b08,	// (0x00035962) ai_message_heading_pane_t1

0x7b22,	// (0x0003597c) ai_message_heading_pane_t2_ParamLimits

0x7b22,	// (0x0003597c) ai_message_heading_pane_t2

0x0001,

0xf98c,	// (0x0003d7e6) ai_message_heading_pane_t_ParamLimits

0xf98c,	// (0x0003d7e6) ai_message_heading_pane_t

0x7b34,	// (0x0003598e) bg_popup_heading_pane_cp1_ParamLimits

0x7b34,	// (0x0003598e) bg_popup_heading_pane_cp1

0x7ac6,	// (0x00035920) list_ai_message_pane_ParamLimits

0x7ac6,	// (0x00035920) list_ai_message_pane

0x5bfe,	// (0x00033a58) scroll_pane_cp10

0x7a62,	// (0x000358bc) list_ai_message_pane_g1

0x7a6a,	// (0x000358c4) list_ai_message_pane_g2

0x0001,

0xf960,	// (0x0003d7ba) list_ai_message_pane_g

0x7a72,	// (0x000358cc) list_ai_message_pane_t1_ParamLimits

0x7a72,	// (0x000358cc) list_ai_message_pane_t1

0x7a87,	// (0x000358e1) list_ai_message_pane_t2_ParamLimits

0x7a87,	// (0x000358e1) list_ai_message_pane_t2

0x7a9c,	// (0x000358f6) list_ai_message_pane_t3_ParamLimits

0x7a9c,	// (0x000358f6) list_ai_message_pane_t3

0x7ab1,	// (0x0003590b) list_ai_message_pane_t4_ParamLimits

0x7ab1,	// (0x0003590b) list_ai_message_pane_t4

0x0003,

0xf965,	// (0x0003d7bf) list_ai_message_pane_t_ParamLimits

0xf965,	// (0x0003d7bf) list_ai_message_pane_t

0x7a50,	// (0x000358aa) cell_ai_soft_ind_pane_ParamLimits

0x7a50,	// (0x000358aa) cell_ai_soft_ind_pane

0x64b6,	// (0x00034310) cell_ai_soft_ind_pane_g1_ParamLimits

0x64b6,	// (0x00034310) cell_ai_soft_ind_pane_g1

0x2192,	// (0x0002ffec) grid_highlight_cp1

0x64c3,	// (0x0003431d) text_secondary_cp56_ParamLimits

0x64c3,	// (0x0003431d) text_secondary_cp56

0x7a25,	// (0x0003587f) example_general_pane_ParamLimits

0x7a25,	// (0x0003587f) example_general_pane

0x7a31,	// (0x0003588b) example_parent_pane_g1_ParamLimits

0x7a31,	// (0x0003588b) example_parent_pane_g1

0x7a3d,	// (0x00035897) example_parent_pane_t1_ParamLimits

0x7a3d,	// (0x00035897) example_parent_pane_t1

0x33ca,	// (0x00031224) popup_preview_text_window_ParamLimits

0x33ca,	// (0x00031224) popup_preview_text_window

0x63a7,	// (0x00034201) list_single_pane_cp2_g4

0x279b,	// (0x000305f5) bg_popup_preview_window_pane_ParamLimits

0x279b,	// (0x000305f5) bg_popup_preview_window_pane

0x77c8,	// (0x00035622) popup_preview_text_window_t1_ParamLimits

0x77c8,	// (0x00035622) popup_preview_text_window_t1

0x77e6,	// (0x00035640) popup_preview_text_window_t2_ParamLimits

0x77e6,	// (0x00035640) popup_preview_text_window_t2

0x782f,	// (0x00035689) popup_preview_text_window_t3_ParamLimits

0x782f,	// (0x00035689) popup_preview_text_window_t3

0x7874,	// (0x000356ce) popup_preview_text_window_t4_ParamLimits

0x7874,	// (0x000356ce) popup_preview_text_window_t4

0x0004,

0xf934,	// (0x0003d78e) popup_preview_text_window_t_ParamLimits

0xf934,	// (0x0003d78e) popup_preview_text_window_t

0x78f2,	// (0x0003574c) scroll_pane_cp11

0x6970,	// (0x000347ca) bg_popup_preview_window_pane_g1

0x7788,	// (0x000355e2) bg_popup_preview_window_pane_g2

0x7790,	// (0x000355ea) bg_popup_preview_window_pane_g3

0x7798,	// (0x000355f2) bg_popup_preview_window_pane_g4

0x77a0,	// (0x000355fa) bg_popup_preview_window_pane_g5

0x77a8,	// (0x00035602) bg_popup_preview_window_pane_g6

0x77b0,	// (0x0003560a) bg_popup_preview_window_pane_g7

0x77b8,	// (0x00035612) bg_popup_preview_window_pane_g8

0x8ec9,	// (0x00036d23) aid_popup_width_pane

0x334c,	// (0x000311a6) popup_midp_note_alarm_window_ParamLimits

0x334c,	// (0x000311a6) popup_midp_note_alarm_window

0x5aaf,	// (0x00033909) data_form_pane_ParamLimits

0x1c69,	// (0x0002fac3) form_field_data_pane_g1

0x1c73,	// (0x0002facd) form_field_data_pane_t1_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_ParamLimits

0x5ac9,	// (0x00033923) data_form_wide_pane_ParamLimits

0xd8cf,	// (0x0003b729) form_field_data_wide_pane_g1

0xd8db,	// (0x0003b735) form_field_data_wide_pane_t1_ParamLimits

0x2a27,	// (0x00030881) input_focus_pane_cp6_ParamLimits

0x2c3b,	// (0x00030a95) input_popup_find_pane_g1_ParamLimits

0x2c3b,	// (0x00030a95) input_popup_find_pane_g1

0x95f8,	// (0x00037452) aid_navi_side_left_pane

0x9608,	// (0x00037462) aid_navi_side_right_pane

0x72a5,	// (0x000350ff) bg_popup_window_pane_cp30_ParamLimits

0x72a5,	// (0x000350ff) bg_popup_window_pane_cp30

0x731f,	// (0x00035179) popup_midp_note_alarm_window_g1_ParamLimits

0x731f,	// (0x00035179) popup_midp_note_alarm_window_g1

0x734f,	// (0x000351a9) popup_midp_note_alarm_window_t1_ParamLimits

0x734f,	// (0x000351a9) popup_midp_note_alarm_window_t1

0x73f0,	// (0x0003524a) popup_midp_note_alarm_window_t2_ParamLimits

0x73f0,	// (0x0003524a) popup_midp_note_alarm_window_t2

0x749e,	// (0x000352f8) popup_midp_note_alarm_window_t3_ParamLimits

0x749e,	// (0x000352f8) popup_midp_note_alarm_window_t3

0x74c6,	// (0x00035320) popup_midp_note_alarm_window_t4_ParamLimits

0x74c6,	// (0x00035320) popup_midp_note_alarm_window_t4

0x74e6,	// (0x00035340) popup_midp_note_alarm_window_t5_ParamLimits

0x74e6,	// (0x00035340) popup_midp_note_alarm_window_t5

0x000a,

0xf8d1,	// (0x0003d72b) popup_midp_note_alarm_window_t_ParamLimits

0xf8d1,	// (0x0003d72b) popup_midp_note_alarm_window_t

0x7592,	// (0x000353ec) wait_bar_pane_cp1_ParamLimits

0x7592,	// (0x000353ec) wait_bar_pane_cp1

0x2192,	// (0x0002ffec) wait_anim_pane_copy1

0x2192,	// (0x0002ffec) wait_border_pane_copy1

0x6feb,	// (0x00034e45) wait_border_pane_g1_copy1

0xd8f5,	// (0x0003b74f) form_field_popup_pane_g1

0x1c8b,	// (0x0002fae5) form_field_popup_pane_t1_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_cp7_ParamLimits

0x5aaf,	// (0x00033909) list_form_pane_ParamLimits

0xd915,	// (0x0003b76f) form_field_popup_wide_pane_g1

0xd91d,	// (0x0003b777) form_field_popup_wide_pane_t1_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_cp8_ParamLimits

0x5ae9,	// (0x00033943) list_form_wide_pane_ParamLimits

0x7c7e,	// (0x00035ad8) aid_size_cell_graphic_pane

0x1d08,	// (0x0002fb62) data_form_pane_t1_ParamLimits

0x1e1a,	// (0x0002fc74) data_form_wide_pane_t1_ParamLimits

0x3728,	// (0x00031582) bg_status_flat_pane

0x228f,	// (0x000300e9) title_pane_t1_ParamLimits

0x231c,	// (0x00030176) title_pane_t2_ParamLimits

0x2342,	// (0x0003019c) title_pane_t3_ParamLimits

0xf59b,	// (0x0003d3f5) title_pane_t_ParamLimits

0x2d3b,	// (0x00030b95) level_1_signal_ParamLimits

0x2d4d,	// (0x00030ba7) level_2_signal_ParamLimits

0x2d60,	// (0x00030bba) level_3_signal_ParamLimits

0x2d73,	// (0x00030bcd) level_4_signal_ParamLimits

0x2d86,	// (0x00030be0) level_5_signal_ParamLimits

0x2d99,	// (0x00030bf3) level_6_signal_ParamLimits

0x2dac,	// (0x00030c06) level_7_signal_ParamLimits

0x2d3b,	// (0x00030b95) level_1_battery_ParamLimits

0x2d4d,	// (0x00030ba7) level_2_battery_ParamLimits

0x2d60,	// (0x00030bba) level_3_battery_ParamLimits

0x2d73,	// (0x00030bcd) level_4_battery_ParamLimits

0x2d86,	// (0x00030be0) level_5_battery_ParamLimits

0x2d99,	// (0x00030bf3) level_6_battery_ParamLimits

0x2dac,	// (0x00030c06) level_7_battery_ParamLimits

0x71d4,	// (0x0003502e) bg_status_flat_pane_g1

0x71dc,	// (0x00035036) bg_status_flat_pane_g2

0x71e4,	// (0x0003503e) bg_status_flat_pane_g3

0x71ec,	// (0x00035046) bg_status_flat_pane_g4

0x71f4,	// (0x0003504e) bg_status_flat_pane_g5

0x71fc,	// (0x00035056) bg_status_flat_pane_g6

0x7204,	// (0x0003505e) bg_status_flat_pane_g7

0x236a,	// (0x000301c4) tabs_3_active_pane_t1_ParamLimits

0x236a,	// (0x000301c4) tabs_3_passive_pane_t1_ParamLimits

0x2380,	// (0x000301da) tabs_4_active_pane_t1_ParamLimits

0x2380,	// (0x000301da) tabs_4_1_passive_pane_t1_ParamLimits

0x2c47,	// (0x00030aa1) tabs_2_active_pane_t1_ParamLimits

0x2c47,	// (0x00030aa1) tabs_2_passive_pane_t1_ParamLimits

0x239e,	// (0x000301f8) bg_active_tab_pane_cp4_ParamLimits

0x2c5d,	// (0x00030ab7) tabs_2_long_active_pane_t1_ParamLimits

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp4_ParamLimits

0xa428,	// (0x00038282) list_single_midp_graphic_pane_t1_ParamLimits

0x239e,	// (0x000301f8) bg_active_tab_pane_cp5_ParamLimits

0x2c74,	// (0x00030ace) tabs_3_long_active_pane_t1_ParamLimits

0x5c37,	// (0x00033a91) bg_passive_tab_pane_cp5_ParamLimits

0xa428,	// (0x00038282) list_single_midp_graphic_pane_t1

0x3728,	// (0x00031582) bg_status_flat_pane_ParamLimits

0x684f,	// (0x000346a9) indicator_pane_cp2_ParamLimits

0x684f,	// (0x000346a9) indicator_pane_cp2

0x388e,	// (0x000316e8) navi_pane_srt_ParamLimits

0x388e,	// (0x000316e8) navi_pane_srt

0x6877,	// (0x000346d1) popup_clock_digital_analogue_window_cp1

0x2526,	// (0x00030380) indicator_pane_t1

0x6462,	// (0x000342bc) copy_highlight_pane

0x6462,	// (0x000342bc) cursor_graphics_pane

0x6462,	// (0x000342bc) graphic_within_text_pane

0x6462,	// (0x000342bc) link_highlight_pane

0x78b5,	// (0x0003570f) popup_preview_text_window_t5_ParamLimits

0x78b5,	// (0x0003570f) popup_preview_text_window_t5

0x64dd,	// (0x00034337) cursor_digital_pane

0x64dd,	// (0x00034337) cursor_primary_pane

0x64ee,	// (0x00034348) cursor_primary_small_pane

0x64f6,	// (0x00034350) cursor_secondary_pane

0x64fe,	// (0x00034358) cursor_title_pane

0x64dd,	// (0x00034337) link_highlight_digital_pane

0x64e5,	// (0x0003433f) link_highlight_primary_pane

0x64ee,	// (0x00034348) link_highlight_primary_small_pane

0x64f6,	// (0x00034350) link_highlight_secondary_pane

0x64fe,	// (0x00034358) link_highlight_title_pane

0x64dd,	// (0x00034337) copy_highlight_digital_pane

0x64dd,	// (0x00034337) copy_highlight_primary_pane

0x64ee,	// (0x00034348) copy_highlight_primary_small_pane

0x64f6,	// (0x00034350) copy_highlight_secondary_pane

0x64fe,	// (0x00034358) copy_highlight_title_pane

0x64f6,	// (0x00034350) graphic_text_digital_pane

0x7254,	// (0x000350ae) graphic_text_primary_pane

0x725d,	// (0x000350b7) graphic_text_primary_small_pane

0x64ee,	// (0x00034348) graphic_text_secondary_pane

0x64dd,	// (0x00034337) graphic_text_title_pane

0x2f3b,	// (0x00030d95) cursor_primary_pane_g1

0x7246,	// (0x000350a0) cursor_text_primary_t1

0x3b63,	// (0x000319bd) cursor_primary_small_pane_g1

0x7238,	// (0x00035092) cursor_text_primary_small_t1

0x3b59,	// (0x000319b3) cursor_primary_small_pane_g1_copy1

0x722a,	// (0x00035084) cursor_text_primary_small_t1_copy1

0x721c,	// (0x00035076) cursor_text_title_t1

0x3b4f,	// (0x000319a9) cursor_title_pane_g1

0x2f3b,	// (0x00030d95) cursor_digital_pane_g1

0x6506,	// (0x00034360) cursor_text_digital_t1

0x6514,	// (0x0003436e) link_highlight_primary_pane_g1

0x71c5,	// (0x0003501f) link_highlight_primary_pane_t1

0x6514,	// (0x0003436e) link_highlight_primary_small_pane_g1

0x651c,	// (0x00034376) link_highlight_primary_small_pane_t1

0x652b,	// (0x00034385) link_highlight_secondary_pane_g1

0x6533,	// (0x0003438d) link_highlight_secondary_pane_t1

0x712a,	// (0x00034f84) link_highlight_title_pane_g1

0x7141,	// (0x00034f9b) link_highlight_title_pane_t1

0x712a,	// (0x00034f84) link_highlight_digital_pane_g1

0x7132,	// (0x00034f8c) link_highlight_digital_pane_t1

0x7006,	// (0x00034e60) copy_highlight_primary_pane_g1

0x702c,	// (0x00034e86) copy_highlight_primary_pane_t1

0x7006,	// (0x00034e60) copy_highlight_primary_small_pane_g1

0x701d,	// (0x00034e77) copy_highlight_primary_small_pane_t1

0x6542,	// (0x0003439c) copy_highlight_secondary_pane_g1

0x654a,	// (0x000343a4) copy_highlight_secondary_pane_t1

0x7006,	// (0x00034e60) copy_highlight_title_pane_g1

0x700e,	// (0x00034e68) copy_highlight_title_pane_t1

0x7006,	// (0x00034e60) copy_highlight_digital_pane_g1

0x7e04,	// (0x00035c5e) copy_highlight_digital_pane_t1

0x7d02,	// (0x00035b5c) graphic_text_primary_pane_g1

0x7de8,	// (0x00035c42) graphic_text_primary_pane_t1

0x7df6,	// (0x00035c50) graphic_text_primary_pane_t2

0x0001,

0xfa00,	// (0x0003d85a) graphic_text_primary_pane_t

0x7dc4,	// (0x00035c1e) graphic_text_primary_small_pane_g1

0x7dcc,	// (0x00035c26) graphic_text_primary_small_pane_t1

0x7dda,	// (0x00035c34) graphic_text_primary_small_pane_t2

0x0001,

0xf9fb,	// (0x0003d855) graphic_text_primary_small_pane_t

0x7da0,	// (0x00035bfa) graphic_text_secondary_pane_g1

0x7da8,	// (0x00035c02) graphic_text_secondary_pane_t1

0x7db6,	// (0x00035c10) graphic_text_secondary_pane_t2

0x0001,

0xf9f6,	// (0x0003d850) graphic_text_secondary_pane_t

0x7d7c,	// (0x00035bd6) graphic_text_title_pane_g1

0x7d84,	// (0x00035bde) graphic_text_title_pane_t1

0x7d92,	// (0x00035bec) graphic_text_title_pane_t2

0x0001,

0xf9f1,	// (0x0003d84b) graphic_text_title_pane_t

0x7d02,	// (0x00035b5c) graphic_text_digital_pane_g1

0x7d0a,	// (0x00035b64) graphic_text_digital_pane_t1

0x7d6e,	// (0x00035bc8) graphic_text_digital_pane_t2

0x0001,

0xf9ec,	// (0x0003d846) graphic_text_digital_pane_t

0x239e,	// (0x000301f8) navi_icon_pane_srt_ParamLimits

0x239e,	// (0x000301f8) navi_icon_pane_srt

0x2192,	// (0x0002ffec) navi_midp_pane_srt

0x2192,	// (0x0002ffec) navi_navi_pane_srt

0x239e,	// (0x000301f8) navi_text_pane_srt_ParamLimits

0x239e,	// (0x000301f8) navi_text_pane_srt

0x7ccd,	// (0x00035b27) navi_navi_icon_text_pane_srt

0x7ce7,	// (0x00035b41) navi_navi_pane_srt_g1_ParamLimits

0x7ce7,	// (0x00035b41) navi_navi_pane_srt_g1

0x7cd5,	// (0x00035b2f) navi_navi_pane_srt_g2_ParamLimits

0x7cd5,	// (0x00035b2f) navi_navi_pane_srt_g2

0x0001,

0xf9e7,	// (0x0003d841) navi_navi_pane_srt_g_ParamLimits

0xf9e7,	// (0x0003d841) navi_navi_pane_srt_g

0x7cf9,	// (0x00035b53) navi_navi_tabs_pane_srt

0x7ccd,	// (0x00035b27) navi_navi_text_pane_srt

0x7ccd,	// (0x00035b27) navi_navi_volume_pane_srt

0x7cbe,	// (0x00035b18) navi_navi_text_pane_srt_t1

0xabbf,	// (0x00038a19) navi_navi_volume_pane_srt_g1

0xabc7,	// (0x00038a21) volume_small_pane_srt_ParamLimits

0xabc7,	// (0x00038a21) volume_small_pane_srt

0x9aed,	// (0x00037947) volume_small_pane_srt_g1_ParamLimits

0x9aed,	// (0x00037947) volume_small_pane_srt_g1

0x9afd,	// (0x00037957) volume_small_pane_srt_g2_ParamLimits

0x9afd,	// (0x00037957) volume_small_pane_srt_g2

0x9b0e,	// (0x00037968) volume_small_pane_srt_g3_ParamLimits

0x9b0e,	// (0x00037968) volume_small_pane_srt_g3

0x9b1f,	// (0x00037979) volume_small_pane_srt_g4_ParamLimits

0x9b1f,	// (0x00037979) volume_small_pane_srt_g4

0x9b30,	// (0x0003798a) volume_small_pane_srt_g5_ParamLimits

0x9b30,	// (0x0003798a) volume_small_pane_srt_g5

0x9b41,	// (0x0003799b) volume_small_pane_srt_g6_ParamLimits

0x9b41,	// (0x0003799b) volume_small_pane_srt_g6

0x9b52,	// (0x000379ac) volume_small_pane_srt_g7_ParamLimits

0x9b52,	// (0x000379ac) volume_small_pane_srt_g7

0x9b63,	// (0x000379bd) volume_small_pane_srt_g8_ParamLimits

0x9b63,	// (0x000379bd) volume_small_pane_srt_g8

0x9b74,	// (0x000379ce) volume_small_pane_srt_g9_ParamLimits

0x9b74,	// (0x000379ce) volume_small_pane_srt_g9

0x9b85,	// (0x000379df) volume_small_pane_srt_g10_ParamLimits

0x9b85,	// (0x000379df) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003d5fc) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003d5fc) volume_small_pane_srt_g

0x2844,	// (0x0003069e) query_popup_data_pane_cp2

0x7ca4,	// (0x00035afe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7ca4,	// (0x00035afe) navi_navi_icon_text_pane_srt_t1

0x7254,	// (0x000350ae) navi_tabs_2_long_pane_srt

0x7254,	// (0x000350ae) navi_tabs_2_pane_srt

0x7254,	// (0x000350ae) navi_tabs_3_long_pane_srt

0x7254,	// (0x000350ae) navi_tabs_3_pane_srt

0x7254,	// (0x000350ae) navi_tabs_4_pane_srt

0xab9f,	// (0x000389f9) tabs_2_active_pane_srt_ParamLimits

0xab9f,	// (0x000389f9) tabs_2_active_pane_srt

0xabaf,	// (0x00038a09) tabs_2_passive_pane_srt_ParamLimits

0xabaf,	// (0x00038a09) tabs_2_passive_pane_srt

0x6a5e,	// (0x000348b8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6a5e,	// (0x000348b8) bg_passive_tab_pane_cp1_srt

0x6bdc,	// (0x00034a36) bg_passive_tab_pane_g1_cp1_srt

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp1_srt

0x6bd3,	// (0x00034a2d) bg_passive_tab_pane_g3_cp1_srt

0x2354,	// (0x000301ae) bg_active_tab_pane_cp1_srt_ParamLimits

0x2354,	// (0x000301ae) bg_active_tab_pane_cp1_srt

0x6bcb,	// (0x00034a25) tabs_2_active_pane_srt_g1

0x2c47,	// (0x00030aa1) tabs_2_active_pane_srt_t1_ParamLimits

0x2c47,	// (0x00030aa1) tabs_2_active_pane_srt_t1

0x6bdc,	// (0x00034a36) bg_active_tab_pane_g1_cp1_srt

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp1_srt

0x6bd3,	// (0x00034a2d) bg_active_tab_pane_g3_cp1_srt

0xab6c,	// (0x000389c6) tabs_3_active_pane_srt_ParamLimits

0xab6c,	// (0x000389c6) tabs_3_active_pane_srt

0xab7d,	// (0x000389d7) tabs_3_passive_pane_cp_srt_ParamLimits

0xab7d,	// (0x000389d7) tabs_3_passive_pane_cp_srt

0xab8e,	// (0x000389e8) tabs_3_passive_pane_srt_ParamLimits

0xab8e,	// (0x000389e8) tabs_3_passive_pane_srt

0x6a5e,	// (0x000348b8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6a5e,	// (0x000348b8) bg_passive_tab_pane_cp2_srt

0x6562,	// (0x000343bc) bg_passive_tab_pane_g1_cp2_srt

0x616c,	// (0x00033fc6) bg_passive_tab_pane_g2_cp2_srt

0x6559,	// (0x000343b3) bg_passive_tab_pane_g3_cp2_srt

0x2354,	// (0x000301ae) bg_active_tab_pane_cp2_srt_ParamLimits

0x2354,	// (0x000301ae) bg_active_tab_pane_cp2_srt

0x7c94,	// (0x00035aee) tabs_3_active_pane_srt_g1

0x236a,	// (0x000301c4) tabs_3_active_pane_srt_t1_ParamLimits

0x236a,	// (0x000301c4) tabs_3_active_pane_srt_t1

0x6562,	// (0x000343bc) bg_active_tab_pane_g1_cp2_srt

0x616c,	// (0x00033fc6) bg_active_tab_pane_g2_cp2_srt

0x6559,	// (0x000343b3) bg_active_tab_pane_g3_cp2_srt

0xab24,	// (0x0003897e) tabs_4_active_pane_srt_ParamLimits

0xab24,	// (0x0003897e) tabs_4_active_pane_srt

0xab36,	// (0x00038990) tabs_4_passive_pane_cp2_srt_ParamLimits

0xab36,	// (0x00038990) tabs_4_passive_pane_cp2_srt

0x667c,	// (0x000344d6) aid_size_cell_toolbar

0x30bc,	// (0x00030f16) main_idle_act_pane_ParamLimits

0x6738,	// (0x00034592) popup_large_graphic_colour_window_ParamLimits

0x361a,	// (0x00031474) popup_toolbar_window_ParamLimits

0x361a,	// (0x00031474) popup_toolbar_window

0xe28c,	// (0x0003c0e6) list_single_graphic_2heading_pane_ParamLimits

0xe28c,	// (0x0003c0e6) list_single_graphic_2heading_pane

0x5dfc,	// (0x00033c56) aid_size_cell_apps_grid_lsc_pane

0x5e0e,	// (0x00033c68) aid_size_cell_apps_grid_prt_pane

0x5c37,	// (0x00033a91) bg_wml_button_pane_cp1_ParamLimits

0x5c37,	// (0x00033a91) bg_wml_button_pane_cp1

0x3b06,	// (0x00031960) form_midp_field_text_pane_t1_ParamLimits

0x6a5e,	// (0x000348b8) input_focus_pane_cp050_ParamLimits

0x6d19,	// (0x00034b73) list_midp_form_text_pane_ParamLimits

0x6cf6,	// (0x00034b50) input_focus_pane_cp051_ParamLimits

0x6d0a,	// (0x00034b64) list_midp_choice_pane_ParamLimits

0x3aa4,	// (0x000318fe) list_single_2graphic_pane_cp3_ParamLimits

0x3aa4,	// (0x000318fe) list_single_2graphic_pane_cp3

0x3ab7,	// (0x00031911) list_single_midp_graphic_pane_ParamLimits

0x3ab7,	// (0x00031911) list_single_midp_graphic_pane

0x8e3f,	// (0x00036c99) list_single_graphic_2heading_pane_g1_ParamLimits

0x8e3f,	// (0x00036c99) list_single_graphic_2heading_pane_g1

0x8e4b,	// (0x00036ca5) list_single_graphic_2heading_pane_g4_ParamLimits

0x8e4b,	// (0x00036ca5) list_single_graphic_2heading_pane_g4

0x8e57,	// (0x00036cb1) list_single_graphic_2heading_pane_g5_ParamLimits

0x8e57,	// (0x00036cb1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003d64f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003d64f) list_single_graphic_2heading_pane_g

0x8e63,	// (0x00036cbd) list_single_graphic_2heading_pane_t1_ParamLimits

0x8e63,	// (0x00036cbd) list_single_graphic_2heading_pane_t1

0x8e77,	// (0x00036cd1) list_single_graphic_2heading_pane_t2_ParamLimits

0x8e77,	// (0x00036cd1) list_single_graphic_2heading_pane_t2

0x8e91,	// (0x00036ceb) list_single_graphic_2heading_pane_t3_ParamLimits

0x8e91,	// (0x00036ceb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003d656) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003d656) list_single_graphic_2heading_pane_t

0x68ba,	// (0x00034714) bg_popup_sub_pane_cp2

0x68e0,	// (0x0003473a) grid_toobar_pane

0xa3a4,	// (0x000381fe) cell_toolbar_pane_ParamLimits

0xa3a4,	// (0x000381fe) cell_toolbar_pane

0x6916,	// (0x00034770) cell_toolbar_pane_g1_ParamLimits

0x6916,	// (0x00034770) cell_toolbar_pane_g1

0x6928,	// (0x00034782) cell_toolbar_pane_g2_ParamLimits

0x6928,	// (0x00034782) cell_toolbar_pane_g2

0x0001,

0xf803,	// (0x0003d65d) cell_toolbar_pane_g_ParamLimits

0xf803,	// (0x0003d65d) cell_toolbar_pane_g

0x694a,	// (0x000347a4) grid_highlight_pane_cp2_ParamLimits

0x694a,	// (0x000347a4) grid_highlight_pane_cp2

0x6964,	// (0x000347be) toolbar_button_pane

0x6970,	// (0x000347ca) toolbar_button_pane_g1

0x6980,	// (0x000347da) toolbar_button_pane_g2

0x6978,	// (0x000347d2) toolbar_button_pane_g3

0x6990,	// (0x000347ea) toolbar_button_pane_g4

0x6988,	// (0x000347e2) toolbar_button_pane_g5

0x6998,	// (0x000347f2) toolbar_button_pane_g6

0x69a0,	// (0x000347fa) toolbar_button_pane_g7

0x69b0,	// (0x0003480a) toolbar_button_pane_g8

0x69a8,	// (0x00034802) toolbar_button_pane_g9

0x0009,

0xf808,	// (0x0003d662) toolbar_button_pane_g

0xa3d3,	// (0x0003822d) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa3d3,	// (0x0003822d) list_single_2graphic_pane_g1_cp3

0xef83,	// (0x0003cddd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xef83,	// (0x0003cddd) list_single_2graphic_pane_g2_cp3

0xa3ee,	// (0x00038248) list_single_2graphic_pane_g3_cp3

0xa3f6,	// (0x00038250) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa3f6,	// (0x00038250) list_single_2graphic_pane_g4_cp3

0xa402,	// (0x0003825c) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa402,	// (0x0003825c) list_single_2graphic_pane_t1_cp3

0xa41c,	// (0x00038276) list_single_midp_graphic_pane_g2_ParamLimits

0xa41c,	// (0x00038276) list_single_midp_graphic_pane_g2

0xdac3,	// (0x0003b91d) aid_zoom_text_primary

0xe284,	// (0x0003c0de) aid_zoom_text_secondary

0x6614,	// (0x0003446e) status_small_pane_g7_ParamLimits

0x6614,	// (0x0003446e) status_small_pane_g7

0x6637,	// (0x00034491) status_small_pane_t1_ParamLimits

0x2258,	// (0x000300b2) title_pane_g2

0x0003,

0xf592,	// (0x0003d3ec) title_pane_g

0x28e3,	// (0x0003073d) aid_size_cell_colour_1_pane_ParamLimits

0x28e3,	// (0x0003073d) aid_size_cell_colour_1_pane

0x28f7,	// (0x00030751) aid_size_cell_colour_2_pane_ParamLimits

0x28f7,	// (0x00030751) aid_size_cell_colour_2_pane

0x290b,	// (0x00030765) aid_size_cell_colour_3_pane_ParamLimits

0x290b,	// (0x00030765) aid_size_cell_colour_3_pane

0x291f,	// (0x00030779) aid_size_cell_colour_4_pane_ParamLimits

0x291f,	// (0x00030779) aid_size_cell_colour_4_pane

0x955a,	// (0x000373b4) title_pane_stacon_g1_ParamLimits

0x955a,	// (0x000373b4) title_pane_stacon_g1

0x7083,	// (0x00034edd) popup_note_wait_window_g3_ParamLimits

0x7083,	// (0x00034edd) popup_note_wait_window_g3

0x70f9,	// (0x00034f53) popup_note_wait_window_t5_ParamLimits

0x70f9,	// (0x00034f53) popup_note_wait_window_t5

0x2192,	// (0x0002ffec) main_feb_china_hwr_fs_writing_pane

0x311d,	// (0x00030f77) popup_feb_china_hwr_fs_window_ParamLimits

0x311d,	// (0x00030f77) popup_feb_china_hwr_fs_window

0xef94,	// (0x0003cdee) aid_size_cell_hwr_fs_ParamLimits

0xef94,	// (0x0003cdee) aid_size_cell_hwr_fs

0x6a5e,	// (0x000348b8) bg_popup_sub_pane_cp3_ParamLimits

0x6a5e,	// (0x000348b8) bg_popup_sub_pane_cp3

0xefa9,	// (0x0003ce03) grid_hwr_fs_pane_ParamLimits

0xefa9,	// (0x0003ce03) grid_hwr_fs_pane

0xa467,	// (0x000382c1) linegrid_hwr_fs_pane_ParamLimits

0xa467,	// (0x000382c1) linegrid_hwr_fs_pane

0xefc1,	// (0x0003ce1b) cell_hwr_fs_pane_ParamLimits

0xefc1,	// (0x0003ce1b) cell_hwr_fs_pane

0x6a6a,	// (0x000348c4) linegrid_hwr_fs_pane_g1_ParamLimits

0x6a6a,	// (0x000348c4) linegrid_hwr_fs_pane_g1

0x3a6a,	// (0x000318c4) linegrid_hwr_fs_pane_g2_ParamLimits

0x3a6a,	// (0x000318c4) linegrid_hwr_fs_pane_g2

0x6bf1,	// (0x00034a4b) linegrid_hwr_fs_pane_g3_ParamLimits

0x6bf1,	// (0x00034a4b) linegrid_hwr_fs_pane_g3

0xa4a7,	// (0x00038301) linegrid_hwr_fs_pane_g4_ParamLimits

0xa4a7,	// (0x00038301) linegrid_hwr_fs_pane_g4

0xa4c1,	// (0x0003831b) linegrid_hwr_fs_pane_g5_ParamLimits

0xa4c1,	// (0x0003831b) linegrid_hwr_fs_pane_g5

0x0004,

0xf82e,	// (0x0003d688) linegrid_hwr_fs_pane_g_ParamLimits

0xf82e,	// (0x0003d688) linegrid_hwr_fs_pane_g

0x6bfd,	// (0x00034a57) cell_hwr_fs_pane_g1_ParamLimits

0x6bfd,	// (0x00034a57) cell_hwr_fs_pane_g1

0x6888,	// (0x000346e2) cell_hwr_fs_pane_g2_ParamLimits

0x6888,	// (0x000346e2) cell_hwr_fs_pane_g2

0x3a7c,	// (0x000318d6) cell_hwr_fs_pane_g3_ParamLimits

0x3a7c,	// (0x000318d6) cell_hwr_fs_pane_g3

0x3a89,	// (0x000318e3) cell_hwr_fs_pane_g4_ParamLimits

0x3a89,	// (0x000318e3) cell_hwr_fs_pane_g4

0x0003,

0xf839,	// (0x0003d693) cell_hwr_fs_pane_g_ParamLimits

0xf839,	// (0x0003d693) cell_hwr_fs_pane_g

0xefe1,	// (0x0003ce3b) cell_hwr_fs_pane_t1

0x2192,	// (0x0002ffec) grid_highlight_pane_cp6

0x2192,	// (0x0002ffec) main_idle_act2_pane

0x5be5,	// (0x00033a3f) aid_inside_area_popup_secondary

0x3c70,	// (0x00031aca) aid_inside_area_window_primary_ParamLimits

0x3c70,	// (0x00031aca) aid_inside_area_window_primary

0x7e13,	// (0x00035c6d) ai2_news_ticker_pane

0x7e1b,	// (0x00035c75) aid_size_cell_ai1_link_ParamLimits

0x7e1b,	// (0x00035c75) aid_size_cell_ai1_link

0x407b,	// (0x00031ed5) popup_ai2_data_window_ParamLimits

0x407b,	// (0x00031ed5) popup_ai2_data_window

0x7e35,	// (0x00035c8f) popup_ai2_link_window_ParamLimits

0x7e35,	// (0x00035c8f) popup_ai2_link_window

0x6a5e,	// (0x000348b8) bg_popup_sub_pane_cp4_ParamLimits

0x6a5e,	// (0x000348b8) bg_popup_sub_pane_cp4

0x7e49,	// (0x00035ca3) grid_ai2_link_pane_ParamLimits

0x7e49,	// (0x00035ca3) grid_ai2_link_pane

0x7e60,	// (0x00035cba) popup_ai2_link_window_g1_ParamLimits

0x7e60,	// (0x00035cba) popup_ai2_link_window_g1

0x7e6c,	// (0x00035cc6) popup_ai2_link_window_g2_ParamLimits

0x7e6c,	// (0x00035cc6) popup_ai2_link_window_g2

0x0001,

0xfa05,	// (0x0003d85f) popup_ai2_link_window_g_ParamLimits

0xfa05,	// (0x0003d85f) popup_ai2_link_window_g

0x7e7b,	// (0x00035cd5) ai2_mp_button_pane

0x7e83,	// (0x00035cdd) ai2_mp_volume_pane

0x6cf6,	// (0x00034b50) bg_popup_sub_pane_cp5_ParamLimits

0x6cf6,	// (0x00034b50) bg_popup_sub_pane_cp5

0x7e8b,	// (0x00035ce5) heading_ai2_gene_pane_ParamLimits

0x7e8b,	// (0x00035ce5) heading_ai2_gene_pane

0x7e97,	// (0x00035cf1) list_ai2_gene_pane_ParamLimits

0x7e97,	// (0x00035cf1) list_ai2_gene_pane

0x7edf,	// (0x00035d39) cell_ai2_link_pane_ParamLimits

0x7edf,	// (0x00035d39) cell_ai2_link_pane

0x7ef5,	// (0x00035d4f) cell_ai2_link_pane_g1

0x2192,	// (0x0002ffec) grid_highlight_pane_cp7

0xac23,	// (0x00038a7d) ai2_mp_volume_pane_g1

0x7f92,	// (0x00035dec) ai2_mp_volume_pane_g2

0x40a5,	// (0x00031eff) list_ai2_gene_pane_t1

0x7f8a,	// (0x00035de4) ai2_mp_volume_pane_g3

0x0002,

0xfa1e,	// (0x0003d878) ai2_mp_volume_pane_g

0xac2b,	// (0x00038a85) volume_small_pane_cp3

0x7f9a,	// (0x00035df4) aid_size_cell_ai2_button

0x7fa2,	// (0x00035dfc) grid_ai2_button_pane

0x7fab,	// (0x00035e05) cell_ai2_button_pane_ParamLimits

0x7fab,	// (0x00035e05) cell_ai2_button_pane

0x2045,	// (0x0002fe9f) cell_ai2_button_pane_g1

0x2192,	// (0x0002ffec) grid_highlight_pane_cp8

0x7f4a,	// (0x00035da4) ai2_gene_pane_t1_ParamLimits

0x7f4a,	// (0x00035da4) ai2_gene_pane_t1

0x308b,	// (0x00030ee5) aid_height_parent_landscape

0x3e28,	// (0x00031c82) aid_height_set_list

0x7baa,	// (0x00035a04) aid_size_parent

0x7c7e,	// (0x00035ad8) aid_size_cell_graphic_pane_ParamLimits

0x7ea7,	// (0x00035d01) popup_ai2_data_window_g1_ParamLimits

0x7ea7,	// (0x00035d01) popup_ai2_data_window_g1

0x7eb3,	// (0x00035d0d) ai2_news_ticker_pane_g1

0x7ebb,	// (0x00035d15) ai2_news_ticker_pane_g2

0x0001,

0xfa0a,	// (0x0003d864) ai2_news_ticker_pane_g

0x7ec3,	// (0x00035d1d) ai2_news_ticker_pane_t1

0x7ed1,	// (0x00035d2b) ai2_news_ticker_pane_t2

0x0001,

0xfa0f,	// (0x0003d869) ai2_news_ticker_pane_t

0x7c5f,	// (0x00035ab9) heading_ai2_gene_pane_g1

0x7efe,	// (0x00035d58) heading_ai2_gene_pane_t1_ParamLimits

0x7efe,	// (0x00035d58) heading_ai2_gene_pane_t1

0x7f13,	// (0x00035d6d) list_highlight_pane_cp6

0x408f,	// (0x00031ee9) ai2_gene_pane_ParamLimits

0x408f,	// (0x00031ee9) ai2_gene_pane

0x40b3,	// (0x00031f0d) list_ai2_gene_pane_t2

0x0001,

0xfa14,	// (0x0003d86e) list_ai2_gene_pane_t

0x7f1b,	// (0x00035d75) list_highlight_pane_cp8_ParamLimits

0x7f1b,	// (0x00035d75) list_highlight_pane_cp8

0x7f2c,	// (0x00035d86) ai2_gene_pane_g1_ParamLimits

0x7f2c,	// (0x00035d86) ai2_gene_pane_g1

0x7f3e,	// (0x00035d98) ai2_gene_pane_g2_ParamLimits

0x7f3e,	// (0x00035d98) ai2_gene_pane_g2

0x0001,

0xfa19,	// (0x0003d873) ai2_gene_pane_g_ParamLimits

0xfa19,	// (0x0003d873) ai2_gene_pane_g

0x2bb0,	// (0x00030a0a) scroll_pane_cp12

0xef42,	// (0x0003cd9c) control_pane_t3_ParamLimits

0xef42,	// (0x0003cd9c) control_pane_t3

0x6628,	// (0x00034482) status_small_pane_g8_ParamLimits

0x6628,	// (0x00034482) status_small_pane_g8

0x3191,	// (0x00030feb) popup_find_window_ParamLimits

0x3384,	// (0x000311de) popup_note_image_window_ParamLimits

0xd54d,	// (0x0003b3a7) list_double2_graphic_pane_vc_g1_ParamLimits

0xd54d,	// (0x0003b3a7) list_double2_graphic_pane_vc_g1

0xe1f9,	// (0x0003c053) list_double2_graphic_pane_vc_g2_ParamLimits

0xe1f9,	// (0x0003c053) list_double2_graphic_pane_vc_g2

0xe205,	// (0x0003c05f) list_double2_graphic_pane_vc_g3_ParamLimits

0xe205,	// (0x0003c05f) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x0003d45f) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x0003d45f) list_double2_graphic_pane_vc_g

0xd525,	// (0x0003b37f) list_double2_graphic_pane_vc_t1_ParamLimits

0xd525,	// (0x0003b37f) list_double2_graphic_pane_vc_t1

0xe1f9,	// (0x0003c053) list_single_heading_pane_vc_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_single_heading_pane_vc_g1

0xe205,	// (0x0003c05f) list_single_heading_pane_vc_g2_ParamLimits

0xe205,	// (0x0003c05f) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d470) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d470) list_single_heading_pane_vc_g

0xdaf0,	// (0x0003b94a) list_single_heading_pane_vc_t1_ParamLimits

0xdaf0,	// (0x0003b94a) list_single_heading_pane_vc_t1

0xdb06,	// (0x0003b960) list_single_heading_pane_vc_t2_ParamLimits

0xdb06,	// (0x0003b960) list_single_heading_pane_vc_t2

0x0001,

0xf81d,	// (0x0003d677) list_single_heading_pane_vc_t_ParamLimits

0xf81d,	// (0x0003d677) list_single_heading_pane_vc_t

0x69b8,	// (0x00034812) list_setting_number_pane_vc_g1_ParamLimits

0x69b8,	// (0x00034812) list_setting_number_pane_vc_g1

0x69c4,	// (0x0003481e) list_setting_number_pane_vc_g2_ParamLimits

0x69c4,	// (0x0003481e) list_setting_number_pane_vc_g2

0x0001,

0xf822,	// (0x0003d67c) list_setting_number_pane_vc_g_ParamLimits

0xf822,	// (0x0003d67c) list_setting_number_pane_vc_g

0x69d0,	// (0x0003482a) list_setting_number_pane_vc_t1_ParamLimits

0x69d0,	// (0x0003482a) list_setting_number_pane_vc_t1

0x69e4,	// (0x0003483e) list_setting_number_pane_vc_t2_ParamLimits

0x69e4,	// (0x0003483e) list_setting_number_pane_vc_t2

0x6a00,	// (0x0003485a) list_setting_number_pane_vc_t3_ParamLimits

0x6a00,	// (0x0003485a) list_setting_number_pane_vc_t3

0x0002,

0xf827,	// (0x0003d681) list_setting_number_pane_vc_t_ParamLimits

0xf827,	// (0x0003d681) list_setting_number_pane_vc_t

0x6a26,	// (0x00034880) set_value_pane_vc_ParamLimits

0x6a26,	// (0x00034880) set_value_pane_vc

0xe28c,	// (0x0003c0e6) list_double2_graphic_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double2_graphic_pane_vc

0x7c05,	// (0x00035a5f) list_double2_large_graphic_pane_vc_ParamLimits

0x7c05,	// (0x00035a5f) list_double2_large_graphic_pane_vc

0xe28c,	// (0x0003c0e6) list_double2_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double2_pane_vc

0xe28c,	// (0x0003c0e6) list_double_graphic_heading_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double_graphic_heading_pane_vc

0xe28c,	// (0x0003c0e6) list_double_graphic_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double_graphic_pane_vc

0xe28c,	// (0x0003c0e6) list_double_heading_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double_heading_pane_vc

0x7c05,	// (0x00035a5f) list_double_large_graphic_pane_vc_ParamLimits

0x7c05,	// (0x00035a5f) list_double_large_graphic_pane_vc

0xe28c,	// (0x0003c0e6) list_double_number_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double_number_pane_vc

0xe28c,	// (0x0003c0e6) list_double_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double_pane_vc

0xe28c,	// (0x0003c0e6) list_double_time_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_double_time_pane_vc

0xe28c,	// (0x0003c0e6) list_setting_number_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_setting_number_pane_vc

0xe28c,	// (0x0003c0e6) list_setting_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_setting_pane_vc

0xe28c,	// (0x0003c0e6) list_single_graphic_heading_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_single_graphic_heading_pane_vc

0xe28c,	// (0x0003c0e6) list_single_heading_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_single_heading_pane_vc

0xe28c,	// (0x0003c0e6) list_single_number_heading_pane_vc_ParamLimits

0xe28c,	// (0x0003c0e6) list_single_number_heading_pane_vc

0xd54d,	// (0x0003b3a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd54d,	// (0x0003b3a7) list_double_graphic_heading_pane_vc_g1

0xe1f9,	// (0x0003c053) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe1f9,	// (0x0003c053) list_double_graphic_heading_pane_vc_g2

0xe205,	// (0x0003c05f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe205,	// (0x0003c05f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf605,	// (0x0003d45f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0003d45f) list_double_graphic_heading_pane_vc_g

0xdbe8,	// (0x0003ba42) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdbe8,	// (0x0003ba42) list_double_graphic_heading_pane_vc_t1

0xdaf0,	// (0x0003b94a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdaf0,	// (0x0003b94a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa25,	// (0x0003d87f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x0003d87f) list_double_graphic_heading_pane_vc_t

0x69b8,	// (0x00034812) list_setting_pane_vc_g1_ParamLimits

0x69b8,	// (0x00034812) list_setting_pane_vc_g1

0x69c4,	// (0x0003481e) list_setting_pane_vc_g2_ParamLimits

0x69c4,	// (0x0003481e) list_setting_pane_vc_g2

0x0001,

0xf822,	// (0x0003d67c) list_setting_pane_vc_g_ParamLimits

0xf822,	// (0x0003d67c) list_setting_pane_vc_g

0x819a,	// (0x00035ff4) list_setting_pane_vc_t1_ParamLimits

0x819a,	// (0x00035ff4) list_setting_pane_vc_t1

0x81ae,	// (0x00036008) list_setting_pane_vc_t2_ParamLimits

0x81ae,	// (0x00036008) list_setting_pane_vc_t2

0x0001,

0xfa68,	// (0x0003d8c2) list_setting_pane_vc_t_ParamLimits

0xfa68,	// (0x0003d8c2) list_setting_pane_vc_t

0x6a26,	// (0x00034880) set_value_pane_cp_vc_ParamLimits

0x6a26,	// (0x00034880) set_value_pane_cp_vc

0xe1f9,	// (0x0003c053) list_single_number_heading_pane_vc_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_single_number_heading_pane_vc_g1

0xe205,	// (0x0003c05f) list_single_number_heading_pane_vc_g2_ParamLimits

0xe205,	// (0x0003c05f) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d470) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d470) list_single_number_heading_pane_vc_g

0xdaf0,	// (0x0003b94a) list_single_number_heading_pane_vc_t1_ParamLimits

0xdaf0,	// (0x0003b94a) list_single_number_heading_pane_vc_t1

0xdbfa,	// (0x0003ba54) list_single_number_heading_pane_vc_t2_ParamLimits

0xdbfa,	// (0x0003ba54) list_single_number_heading_pane_vc_t2

0xdc0c,	// (0x0003ba66) list_single_number_heading_pane_vc_t3_ParamLimits

0xdc0c,	// (0x0003ba66) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6d,	// (0x0003d8c7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003d8c7) list_single_number_heading_pane_vc_t

0xd54d,	// (0x0003b3a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd54d,	// (0x0003b3a7) list_single_graphic_heading_pane_vc_g1

0xe1f9,	// (0x0003c053) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe1f9,	// (0x0003c053) list_single_graphic_heading_pane_vc_g4

0xe205,	// (0x0003c05f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe205,	// (0x0003c05f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x0003d45f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0003d45f) list_single_graphic_heading_pane_vc_g

0xdaf0,	// (0x0003b94a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdaf0,	// (0x0003b94a) list_single_graphic_heading_pane_vc_t1

0xdc1e,	// (0x0003ba78) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdc1e,	// (0x0003ba78) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0003d8ce) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0003d8ce) list_single_graphic_heading_pane_vc_t

0xe1f9,	// (0x0003c053) list_double2_pane_vc_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_double2_pane_vc_g1

0xe205,	// (0x0003c05f) list_double2_pane_vc_g2_ParamLimits

0xe205,	// (0x0003c05f) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0003d470) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0003d470) list_double2_pane_vc_g

0xd4a8,	// (0x0003b302) list_double2_pane_vc_t1_ParamLimits

0xd4a8,	// (0x0003b302) list_double2_pane_vc_t1

0xe1cd,	// (0x0003c027) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe1cd,	// (0x0003c027) list_double2_large_graphic_pane_vc_g1

0xe1d9,	// (0x0003c033) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe1d9,	// (0x0003c033) list_double2_large_graphic_pane_vc_g2

0xe1e5,	// (0x0003c03f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe1e5,	// (0x0003c03f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0003d488) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0003d488) list_double2_large_graphic_pane_vc_g

0xd492,	// (0x0003b2ec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd492,	// (0x0003b2ec) list_double2_large_graphic_pane_vc_t1

0xe2b5,	// (0x0003c10f) list_double_time_pane_vc_g1_ParamLimits

0xe2b5,	// (0x0003c10f) list_double_time_pane_vc_g1

0xe2c1,	// (0x0003c11b) list_double_time_pane_vc_g2_ParamLimits

0xe2c1,	// (0x0003c11b) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0003d8d3) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0003d8d3) list_double_time_pane_vc_g

0xdc30,	// (0x0003ba8a) list_double_time_pane_vc_t1_ParamLimits

0xdc30,	// (0x0003ba8a) list_double_time_pane_vc_t1

0xdc49,	// (0x0003baa3) list_double_time_pane_vc_t2_ParamLimits

0xdc49,	// (0x0003baa3) list_double_time_pane_vc_t2

0xdc82,	// (0x0003badc) list_double_time_pane_vc_t3_ParamLimits

0xdc82,	// (0x0003badc) list_double_time_pane_vc_t3

0xdc9a,	// (0x0003baf4) list_double_time_pane_vc_t4_ParamLimits

0xdc9a,	// (0x0003baf4) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0003d8d8) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0003d8d8) list_double_time_pane_vc_t

0xe1f9,	// (0x0003c053) list_double_pane_vc_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_double_pane_vc_g1

0xe205,	// (0x0003c05f) list_double_pane_vc_g2_ParamLimits

0xe205,	// (0x0003c05f) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0003d470) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0003d470) list_double_pane_vc_g

0xdcac,	// (0x0003bb06) list_double_pane_vc_t1_ParamLimits

0xdcac,	// (0x0003bb06) list_double_pane_vc_t1

0xdcbe,	// (0x0003bb18) list_double_pane_vc_t2_ParamLimits

0xdcbe,	// (0x0003bb18) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0003d8e1) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0003d8e1) list_double_pane_vc_t

0xe1f9,	// (0x0003c053) list_double_number_pane_vc_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_double_number_pane_vc_g1

0xe205,	// (0x0003c05f) list_double_number_pane_vc_g2_ParamLimits

0xe205,	// (0x0003c05f) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0003d470) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0003d470) list_double_number_pane_vc_g

0xdcd4,	// (0x0003bb2e) list_double_number_pane_vc_t1_ParamLimits

0xdcd4,	// (0x0003bb2e) list_double_number_pane_vc_t1

0xdce8,	// (0x0003bb42) list_double_number_pane_vc_t2_ParamLimits

0xdce8,	// (0x0003bb42) list_double_number_pane_vc_t2

0xdcbe,	// (0x0003bb18) list_double_number_pane_vc_t3_ParamLimits

0xdcbe,	// (0x0003bb18) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0003d8e6) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003d8e6) list_double_number_pane_vc_t

0xe2cd,	// (0x0003c127) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe2cd,	// (0x0003c127) list_double_large_graphic_pane_vc_g1

0xe2d9,	// (0x0003c133) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe2d9,	// (0x0003c133) list_double_large_graphic_pane_vc_g2

0xe1e5,	// (0x0003c03f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe1e5,	// (0x0003c03f) list_double_large_graphic_pane_vc_g3

0xdcfa,	// (0x0003bb54) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdcfa,	// (0x0003bb54) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0003d8ed) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0003d8ed) list_double_large_graphic_pane_vc_g

0xdd06,	// (0x0003bb60) list_double_large_graphic_pane_vc_t1_ParamLimits

0xdd06,	// (0x0003bb60) list_double_large_graphic_pane_vc_t1

0xdd18,	// (0x0003bb72) list_double_large_graphic_pane_vc_t2_ParamLimits

0xdd18,	// (0x0003bb72) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0003d8f6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0003d8f6) list_double_large_graphic_pane_vc_t

0xe1f9,	// (0x0003c053) list_double_heading_pane_vc_g1_ParamLimits

0xe1f9,	// (0x0003c053) list_double_heading_pane_vc_g1

0xe205,	// (0x0003c05f) list_double_heading_pane_vc_g2_ParamLimits

0xe205,	// (0x0003c05f) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d470) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d470) list_double_heading_pane_vc_g

0xdd2f,	// (0x0003bb89) list_double_heading_pane_vc_t1_ParamLimits

0xdd2f,	// (0x0003bb89) list_double_heading_pane_vc_t1

0xdaf0,	// (0x0003b94a) list_double_heading_pane_vc_t2_ParamLimits

0xdaf0,	// (0x0003b94a) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0003d8fb) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0003d8fb) list_double_heading_pane_vc_t

0xd54d,	// (0x0003b3a7) list_double_graphic_pane_vc_g1_ParamLimits

0xd54d,	// (0x0003b3a7) list_double_graphic_pane_vc_g1

0xe211,	// (0x0003c06b) list_double_graphic_pane_vc_g2_ParamLimits

0xe211,	// (0x0003c06b) list_double_graphic_pane_vc_g2

0xe220,	// (0x0003c07a) list_double_graphic_pane_vc_g3_ParamLimits

0xe220,	// (0x0003c07a) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0003d900) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003d900) list_double_graphic_pane_vc_g

0xdd41,	// (0x0003bb9b) list_double_graphic_pane_vc_t1_ParamLimits

0xdd41,	// (0x0003bb9b) list_double_graphic_pane_vc_t1

0xdcbe,	// (0x0003bb18) list_double_graphic_pane_vc_t2_ParamLimits

0xdcbe,	// (0x0003bb18) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0003d907) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0003d907) list_double_graphic_pane_vc_t

0x8ed1,	// (0x00036d2b) aid_size_cell_fastswap

0xecea,	// (0x0003cb44) aid_size_cell_touch_ParamLimits

0xecea,	// (0x0003cb44) aid_size_cell_touch

0x908d,	// (0x00036ee7) popup_fast_swap_wide_window_ParamLimits

0x908d,	// (0x00036ee7) popup_fast_swap_wide_window

0xed9b,	// (0x0003cbf5) touch_pane_ParamLimits

0xed9b,	// (0x0003cbf5) touch_pane

0xd80b,	// (0x0003b665) button_value_adjust_pane_cp2

0xd813,	// (0x0003b66d) button_value_adjust_pane_cp4

0xd833,	// (0x0003b68d) form_field_data_pane_cp2

0x1c30,	// (0x0002fa8a) form_field_data_wide_pane_cp2

0x5e45,	// (0x00033c9f) bg_scroll_pane_ParamLimits

0x96f0,	// (0x0003754a) scroll_handle_pane_ParamLimits

0x9704,	// (0x0003755e) scroll_sc2_down_pane_ParamLimits

0x9704,	// (0x0003755e) scroll_sc2_down_pane

0x5e76,	// (0x00033cd0) scroll_sc2_up_pane_ParamLimits

0x5e76,	// (0x00033cd0) scroll_sc2_up_pane

0x41d7,	// (0x00032031) grid_wheel_folder_pane_g1_ParamLimits

0x41d7,	// (0x00032031) grid_wheel_folder_pane_g1

0x99ce,	// (0x00037828) clock_nsta_pane_cp2_ParamLimits

0x99ce,	// (0x00037828) clock_nsta_pane_cp2

0x2e9e,	// (0x00030cf8) listscroll_midp_pane_ParamLimits

0x2eae,	// (0x00030d08) midp_canvas_pane

0x9cf7,	// (0x00037b51) nsta_clock_indic_pane

0x66a4,	// (0x000344fe) listscroll_form_pane_vc

0x66ac,	// (0x00034506) listscroll_set_pane_vc_ParamLimits

0x66ac,	// (0x00034506) listscroll_set_pane_vc

0x3750,	// (0x000315aa) clock_nsta_pane

0x3773,	// (0x000315cd) indicator_nsta_pane

0x68ba,	// (0x00034714) bg_popup_sub_pane_cp2_ParamLimits

0x68ce,	// (0x00034728) find_pane_cp2_ParamLimits

0x68ce,	// (0x00034728) find_pane_cp2

0x68e0,	// (0x0003473a) grid_toobar_pane_ParamLimits

0x6a32,	// (0x0003488c) list_form_gen_pane_vc_ParamLimits

0x6a32,	// (0x0003488c) list_form_gen_pane_vc

0x6a48,	// (0x000348a2) scroll_pane_cp8_vc_ParamLimits

0x6a48,	// (0x000348a2) scroll_pane_cp8_vc

0x6c13,	// (0x00034a6d) data_form_wide_pane_vc_ParamLimits

0x6c13,	// (0x00034a6d) data_form_wide_pane_vc

0x6c1f,	// (0x00034a79) form_field_data_wide_pane_vc_g1

0x6c27,	// (0x00034a81) form_field_data_wide_pane_vc_t1_ParamLimits

0x6c27,	// (0x00034a81) form_field_data_wide_pane_vc_t1

0x5abb,	// (0x00033915) input_focus_pane_cp6_vc_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_cp6_vc

0x3b27,	// (0x00031981) list_midp_pane_ParamLimits

0x6e4c,	// (0x00034ca6) scroll_pane_cp16_ParamLimits

0x6e4c,	// (0x00034ca6) scroll_pane_cp16

0x6e8c,	// (0x00034ce6) button_value_adjust_pane_ParamLimits

0x6e8c,	// (0x00034ce6) button_value_adjust_pane

0x3e34,	// (0x00031c8e) button_value_adjust_pane_cp6_ParamLimits

0x3e34,	// (0x00031c8e) button_value_adjust_pane_cp6

0x3f3e,	// (0x00031d98) settings_code_pane_cp_ParamLimits

0x3f3e,	// (0x00031d98) settings_code_pane_cp

0x2045,	// (0x0002fe9f) cell_touch_pane_g1

0x2045,	// (0x0002fe9f) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003d5a6) cell_touch_pane_g

0x40c1,	// (0x00031f1b) cell_touch_pane_cp_ParamLimits

0x40c1,	// (0x00031f1b) cell_touch_pane_cp

0x40dd,	// (0x00031f37) cell_touch_pane_ParamLimits

0x40dd,	// (0x00031f37) cell_touch_pane

0x2045,	// (0x0002fe9f) scroll_sc2_down_pane_g1

0x2045,	// (0x0002fe9f) scroll_sc2_up_pane_g1

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp4_vc

0x7fbd,	// (0x00035e17) list_set_graphic_pane_vc_g1_ParamLimits

0x7fbd,	// (0x00035e17) list_set_graphic_pane_vc_g1

0x7fc9,	// (0x00035e23) list_set_graphic_pane_vc_g2_ParamLimits

0x7fc9,	// (0x00035e23) list_set_graphic_pane_vc_g2

0x0001,

0xfa2a,	// (0x0003d884) list_set_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x0003d884) list_set_graphic_pane_vc_g

0x7fd5,	// (0x00035e2f) text_primary_small_cp13_vc_ParamLimits

0x7fd5,	// (0x00035e2f) text_primary_small_cp13_vc

0x7fed,	// (0x00035e47) list_set_graphic_pane_vc_ParamLimits

0x7fed,	// (0x00035e47) list_set_graphic_pane_vc

0x2192,	// (0x0002ffec) input_focus_pane_cp2_vc

0x2045,	// (0x0002fe9f) setting_code_pane_vc_g1

0x8000,	// (0x00035e5a) setting_code_pane_vc_t1

0x800e,	// (0x00035e68) set_text_pane_vc_t1_ParamLimits

0x800e,	// (0x00035e68) set_text_pane_vc_t1

0x2192,	// (0x0002ffec) input_focus_pane_cp1_vc

0x8029,	// (0x00035e83) list_set_text_pane_vc

0x2045,	// (0x0002fe9f) setting_text_pane_vc_g1

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp2_vc

0x8033,	// (0x00035e8d) setting_slider_graphic_pane_vc_g1

0x803b,	// (0x00035e95) setting_slider_graphic_pane_vc_t1

0x8049,	// (0x00035ea3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2f,	// (0x0003d889) setting_slider_graphic_pane_vc_t

0x8057,	// (0x00035eb1) slider_set_pane_cp_vc

0x805f,	// (0x00035eb9) slider_set_pane_vc_g1

0x8068,	// (0x00035ec2) slider_set_pane_vc_g2

0x0006,

0xfa34,	// (0x0003d88e) slider_set_pane_vc_g

0x5b0a,	// (0x00033964) set_opt_bg_pane_g1_copy1

0x5b12,	// (0x0003396c) set_opt_bg_pane_g2_copy1

0x8094,	// (0x00035eee) set_opt_bg_pane_g3_copy1

0x5b22,	// (0x0003397c) set_opt_bg_pane_g4_copy1

0x5b2a,	// (0x00033984) set_opt_bg_pane_g5_copy1

0x5b32,	// (0x0003398c) set_opt_bg_pane_g6_copy1

0x809c,	// (0x00035ef6) set_opt_bg_pane_g7_copy1

0x80a4,	// (0x00035efe) set_opt_bg_pane_g8_copy1

0x80ac,	// (0x00035f06) set_opt_bg_pane_g9_copy1

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp_vc

0x80b4,	// (0x00035f0e) setting_slider_pane_vc_t1

0x803b,	// (0x00035e95) setting_slider_pane_vc_t2

0x8049,	// (0x00035ea3) setting_slider_pane_vc_t3

0x0002,

0xfa43,	// (0x0003d89d) setting_slider_pane_vc_t

0x8057,	// (0x00035eb1) slider_set_pane_vc

0xa5d4,	// (0x0003842e) volume_set_pane_vc_g1

0xac56,	// (0x00038ab0) volume_set_pane_vc_g2

0xac5f,	// (0x00038ab9) volume_set_pane_vc_g3

0xac68,	// (0x00038ac2) volume_set_pane_vc_g4

0xac71,	// (0x00038acb) volume_set_pane_vc_g5

0xac7a,	// (0x00038ad4) volume_set_pane_vc_g6

0xac83,	// (0x00038add) volume_set_pane_vc_g7

0xac8c,	// (0x00038ae6) volume_set_pane_vc_g8

0xac95,	// (0x00038aef) volume_set_pane_vc_g9

0xac9e,	// (0x00038af8) volume_set_pane_vc_g10

0x0009,

0xfa4a,	// (0x0003d8a4) volume_set_pane_vc_g

0x80c3,	// (0x00035f1d) volume_set_pane_vc

0x80cb,	// (0x00035f25) button_value_adjust_pane_cp1_vc

0x80d5,	// (0x00035f2f) list_highlight_pane_cp2_vc

0x80de,	// (0x00035f38) list_set_pane_vc_ParamLimits

0x80de,	// (0x00035f38) list_set_pane_vc

0x8130,	// (0x00035f8a) main_pane_set_vc_t1_ParamLimits

0x8130,	// (0x00035f8a) main_pane_set_vc_t1

0x8145,	// (0x00035f9f) main_pane_set_vc_t2_ParamLimits

0x8145,	// (0x00035f9f) main_pane_set_vc_t2

0x8157,	// (0x00035fb1) main_pane_set_vc_t3_ParamLimits

0x8157,	// (0x00035fb1) main_pane_set_vc_t3

0x8169,	// (0x00035fc3) main_pane_set_vc_t4_ParamLimits

0x8169,	// (0x00035fc3) main_pane_set_vc_t4

0x0003,

0xfa5f,	// (0x0003d8b9) main_pane_set_vc_t_ParamLimits

0xfa5f,	// (0x0003d8b9) main_pane_set_vc_t

0x817b,	// (0x00035fd5) setting_code_pane_vc_ParamLimits

0x817b,	// (0x00035fd5) setting_code_pane_vc

0x818a,	// (0x00035fe4) setting_slider_graphic_pane_vc

0x818a,	// (0x00035fe4) setting_slider_pane_vc

0x818a,	// (0x00035fe4) setting_text_pane_vc

0x818a,	// (0x00035fe4) setting_volume_pane_vc

0x8192,	// (0x00035fec) scroll_pane_cp121_vc

0x5aa6,	// (0x00033900) set_content_pane_vc

0x81d0,	// (0x0003602a) button_value_adjust_pane_g1

0x81d9,	// (0x00036033) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0003d90c) button_value_adjust_pane_g

0x81e2,	// (0x0003603c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x81e2,	// (0x0003603c) form_field_slider_wide_pane_vc_t1

0x81f8,	// (0x00036052) form_field_slider_wide_pane_vc_t2_ParamLimits

0x81f8,	// (0x00036052) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0003d911) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0003d911) form_field_slider_wide_pane_vc_t

0x2354,	// (0x000301ae) input_focus_pane_cp10_vc_ParamLimits

0x2354,	// (0x000301ae) input_focus_pane_cp10_vc

0x820d,	// (0x00036067) slider_cont_pane_cp1_vc_ParamLimits

0x820d,	// (0x00036067) slider_cont_pane_cp1_vc

0x805f,	// (0x00035eb9) slider_form_pane_g1_cp2

0x8068,	// (0x00035ec2) slider_form_pane_g2_cp2

0x8228,	// (0x00036082) form_field_slider_pane_vc_t3

0x8236,	// (0x00036090) form_field_slider_pane_vc_t4

0x8244,	// (0x0003609e) slider_form_pane_vc_ParamLimits

0x8244,	// (0x0003609e) slider_form_pane_vc

0x8251,	// (0x000360ab) form_field_slider_pane_vc_t1_ParamLimits

0x8251,	// (0x000360ab) form_field_slider_pane_vc_t1

0x8267,	// (0x000360c1) form_field_slider_pane_vc_t2_ParamLimits

0x8267,	// (0x000360c1) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0003d921) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0003d921) form_field_slider_pane_vc_t

0x2354,	// (0x000301ae) input_focus_pane_cp9_vc_ParamLimits

0x2354,	// (0x000301ae) input_focus_pane_cp9_vc

0x8279,	// (0x000360d3) slider_cont_pane_vc_ParamLimits

0x8279,	// (0x000360d3) slider_cont_pane_vc

0x828b,	// (0x000360e5) list_form_graphic_pane_cp_vc_ParamLimits

0x828b,	// (0x000360e5) list_form_graphic_pane_cp_vc

0x6c1f,	// (0x00034a79) form_field_popup_wide_pane_vc_g1

0x82a0,	// (0x000360fa) form_field_popup_wide_pane_vc_t1_ParamLimits

0x82a0,	// (0x000360fa) form_field_popup_wide_pane_vc_t1

0x5abb,	// (0x00033915) input_focus_pane_cp8_vc_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_cp8_vc

0x82b5,	// (0x0003610f) list_form_wide_pane_vc_ParamLimits

0x82b5,	// (0x0003610f) list_form_wide_pane_vc

0x82c1,	// (0x0003611b) list_form_graphic_pane_vc_g1

0x82c9,	// (0x00036123) list_form_graphic_pane_vc_t1_ParamLimits

0x82c9,	// (0x00036123) list_form_graphic_pane_vc_t1

0x239e,	// (0x000301f8) list_highlight_pane_cp5_vc_ParamLimits

0x239e,	// (0x000301f8) list_highlight_pane_cp5_vc

0x82e5,	// (0x0003613f) list_form_graphic_pane_vc_ParamLimits

0x82e5,	// (0x0003613f) list_form_graphic_pane_vc

0x6c1f,	// (0x00034a79) form_field_popup_pane_vc_g1

0x82fb,	// (0x00036155) form_field_popup_pane_vc_t1_ParamLimits

0x82fb,	// (0x00036155) form_field_popup_pane_vc_t1

0x5abb,	// (0x00033915) input_focus_pane_cp7_vc_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_cp7_vc

0x8310,	// (0x0003616a) list_form_pane_vc_ParamLimits

0x8310,	// (0x0003616a) list_form_pane_vc

0x831c,	// (0x00036176) data_form_pane_vc_t1_ParamLimits

0x831c,	// (0x00036176) data_form_pane_vc_t1

0x5b0a,	// (0x00033964) input_focus_pane_vc_g1

0x5b12,	// (0x0003396c) input_focus_pane_vc_g2

0x5b1a,	// (0x00033974) input_focus_pane_vc_g3

0x5b22,	// (0x0003397c) input_focus_pane_vc_g4

0x5b2a,	// (0x00033984) input_focus_pane_vc_g5

0x5b32,	// (0x0003398c) input_focus_pane_vc_g6

0x5b3a,	// (0x00033994) input_focus_pane_vc_g7

0x5b42,	// (0x0003399c) input_focus_pane_vc_g8

0x5b4a,	// (0x000339a4) input_focus_pane_vc_g9

0x2045,	// (0x0002fe9f) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003d52f) input_focus_pane_vc_g

0x6c13,	// (0x00034a6d) data_form_pane_vc_ParamLimits

0x6c13,	// (0x00034a6d) data_form_pane_vc

0x6c1f,	// (0x00034a79) form_field_data_pane_vc_g1

0x8337,	// (0x00036191) form_field_data_pane_vc_t1_ParamLimits

0x8337,	// (0x00036191) form_field_data_pane_vc_t1

0x5abb,	// (0x00033915) input_focus_pane_vc_ParamLimits

0x5abb,	// (0x00033915) input_focus_pane_vc

0x6a76,	// (0x000348d0) button_value_adjust_pane_cp3_vc

0x834d,	// (0x000361a7) button_value_adjust_pane_cp5_vc

0x8355,	// (0x000361af) form_field_data_pane_vc_ParamLimits

0x8355,	// (0x000361af) form_field_data_pane_vc

0x6a7e,	// (0x000348d8) form_field_data_pane_vc_cp2

0x836c,	// (0x000361c6) form_field_data_wide_pane_vc_ParamLimits

0x836c,	// (0x000361c6) form_field_data_wide_pane_vc

0x8382,	// (0x000361dc) form_field_data_wide_pane_vc_cp2

0x838a,	// (0x000361e4) form_field_popup_pane_vc_ParamLimits

0x838a,	// (0x000361e4) form_field_popup_pane_vc

0x83a1,	// (0x000361fb) form_field_popup_wide_pane_vc_ParamLimits

0x83a1,	// (0x000361fb) form_field_popup_wide_pane_vc

0x83cd,	// (0x00036227) form_field_slider_pane_vc_ParamLimits

0x83cd,	// (0x00036227) form_field_slider_pane_vc

0x83e0,	// (0x0003623a) form_field_slider_wide_pane_vc_ParamLimits

0x83e0,	// (0x0003623a) form_field_slider_wide_pane_vc

0x40fb,	// (0x00031f55) grid_touch_1_pane_ParamLimits

0x40fb,	// (0x00031f55) grid_touch_1_pane

0x410f,	// (0x00031f69) grid_touch_2_pane_ParamLimits

0x410f,	// (0x00031f69) grid_touch_2_pane

0x83f3,	// (0x0003624d) touch_pane_g1_ParamLimits

0x83f3,	// (0x0003624d) touch_pane_g1

0x8401,	// (0x0003625b) cell_app_pane_cp_wide_ParamLimits

0x8401,	// (0x0003625b) cell_app_pane_cp_wide

0x8411,	// (0x0003626b) grid_popup_fast_wide_pane_ParamLimits

0x8411,	// (0x0003626b) grid_popup_fast_wide_pane

0x8425,	// (0x0003627f) scroll_pane_cp19_ParamLimits

0x8425,	// (0x0003627f) scroll_pane_cp19

0x2192,	// (0x0002ffec) bg_popup_window_pane_cp20

0x8439,	// (0x00036293) listscroll_popup_fast_wide_pane

0x6a86,	// (0x000348e0) grid_indicator_nsta_pane

0x8441,	// (0x0003629b) clock_nsta_pane_g1

0x844a,	// (0x000362a4) clock_nsta_pane_t1

0x4139,	// (0x00031f93) cell_indicator_nsta_pane_ParamLimits

0x4139,	// (0x00031f93) cell_indicator_nsta_pane

0x83f3,	// (0x0003624d) cell_indicator_nsta_pane_g1

0x4156,	// (0x00031fb0) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0003d92b) cell_indicator_nsta_pane_g

0x8466,	// (0x000362c0) clock_nsta_pane_cp

0x846e,	// (0x000362c8) indicator_nsta_pane_cp

0x8477,	// (0x000362d1) nsta_clock_indic_pane_g1

0x2505,	// (0x0003035f) grid_indicator_pane

0x5f68,	// (0x00033dc2) scroll_pane_cp29

0x9925,	// (0x0003777f) indicator_nsta_pane_cp2_ParamLimits

0x9925,	// (0x0003777f) indicator_nsta_pane_cp2

0x239e,	// (0x000301f8) main_apps_wheel_pane

0x6d33,	// (0x00034b8d) form_midp_field_text_pane_ParamLimits

0x6e6c,	// (0x00034cc6) scroll_bar_cp050_ParamLimits

0x84af,	// (0x00036309) cell_indicator_pane_ParamLimits

0x84af,	// (0x00036309) cell_indicator_pane

0x84c5,	// (0x0003631f) cell_indicator_pane_g1

0x416b,	// (0x00031fc5) grid_wheel_folder_pane_ParamLimits

0x416b,	// (0x00031fc5) grid_wheel_folder_pane

0x4179,	// (0x00031fd3) list_wheel_apps_pane_ParamLimits

0x4179,	// (0x00031fd3) list_wheel_apps_pane

0x4185,	// (0x00031fdf) main_apps_wheel_pane_g1_ParamLimits

0x4185,	// (0x00031fdf) main_apps_wheel_pane_g1

0x4191,	// (0x00031feb) main_apps_wheel_pane_g2_ParamLimits

0x4191,	// (0x00031feb) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0003d93a) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0003d93a) main_apps_wheel_pane_g

0x419d,	// (0x00031ff7) main_apps_wheel_pane_t1_ParamLimits

0x419d,	// (0x00031ff7) main_apps_wheel_pane_t1

0x41af,	// (0x00032009) list_wheel_apps_pane_g1

0x41b7,	// (0x00032011) list_wheel_apps_pane_g2

0x41bf,	// (0x00032019) list_wheel_apps_pane_g3

0x41c7,	// (0x00032021) list_wheel_apps_pane_g4

0x41cf,	// (0x00032029) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0003d93f) list_wheel_apps_pane_g

0x239e,	// (0x000301f8) navi_icon_text_pane

0x365c,	// (0x000314b6) aid_fill_nsta

0xadbf,	// (0x00038c19) navi_icon_text_pane_g1

0xadcb,	// (0x00038c25) navi_icon_text_pane_t1

0x61dd,	// (0x00034037) list_set_graphic_pane_t1_ParamLimits

0x61dd,	// (0x00034037) list_set_graphic_pane_t1

0x7515,	// (0x0003536f) popup_midp_note_alarm_window_t6_ParamLimits

0x7515,	// (0x0003536f) popup_midp_note_alarm_window_t6

0x7527,	// (0x00035381) popup_midp_note_alarm_window_t7_ParamLimits

0x7527,	// (0x00035381) popup_midp_note_alarm_window_t7

0x7539,	// (0x00035393) popup_midp_note_alarm_window_t8_ParamLimits

0x7539,	// (0x00035393) popup_midp_note_alarm_window_t8

0x754b,	// (0x000353a5) popup_midp_note_alarm_window_t9_ParamLimits

0x754b,	// (0x000353a5) popup_midp_note_alarm_window_t9

0x755d,	// (0x000353b7) popup_midp_note_alarm_window_t10_ParamLimits

0x755d,	// (0x000353b7) popup_midp_note_alarm_window_t10

0x756f,	// (0x000353c9) popup_midp_note_alarm_window_t11_ParamLimits

0x756f,	// (0x000353c9) popup_midp_note_alarm_window_t11

0x7581,	// (0x000353db) scroll_pane_cp17_ParamLimits

0x7581,	// (0x000353db) scroll_pane_cp17

0xa5d4,	// (0x0003842e) volume_small_pane_cp_g1

0xaddd,	// (0x00038c37) volume_small_pane_cp_g2

0xade6,	// (0x00038c40) volume_small_pane_cp_g3

0xadef,	// (0x00038c49) volume_small_pane_cp_g4

0xa601,	// (0x0003845b) volume_small_pane_cp_g5

0xadf8,	// (0x00038c52) volume_small_pane_cp_g6

0xae01,	// (0x00038c5b) volume_small_pane_cp_g7

0xae0a,	// (0x00038c64) volume_small_pane_cp_g8

0xae13,	// (0x00038c6d) volume_small_pane_cp_g9

0xae1c,	// (0x00038c76) volume_small_pane_cp_g10

0x648c,	// (0x000342e6) midp_ticker_pane_g1_ParamLimits

0x6498,	// (0x000342f2) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003d5f7) midp_ticker_pane_g_ParamLimits

0x64a4,	// (0x000342fe) midp_ticker_pane_t1_ParamLimits

0x3672,	// (0x000314cc) aid_fill_nsta_2

0x6e58,	// (0x00034cb2) list_form2_midp_pane

0x7be6,	// (0x00035a40) midp_editing_number_pane_ParamLimits

0x7bf2,	// (0x00035a4c) midp_ticker_pane_ParamLimits

0xae25,	// (0x00038c7f) form2_midp_field_pane

0xba4a,	// (0x000398a4) scroll_pane_cp51

0xba6a,	// (0x000398c4) form2_midp_button_pane_ParamLimits

0xba6a,	// (0x000398c4) form2_midp_button_pane

0xba7c,	// (0x000398d6) form2_midp_content_pane_ParamLimits

0xba7c,	// (0x000398d6) form2_midp_content_pane

0xba96,	// (0x000398f0) form2_midp_field_choice_group_pane

0xba9e,	// (0x000398f8) form2_midp_field_pane_g1

0xbaa6,	// (0x00039900) form2_midp_field_pane_g2

0xbaae,	// (0x00039908) form2_midp_field_pane_g3

0xbab6,	// (0x00039910) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0003d964) form2_midp_field_pane_g

0xbabe,	// (0x00039918) form2_midp_gauge_slider_pane

0xbac6,	// (0x00039920) form2_midp_gauge_wait_pane

0xbace,	// (0x00039928) form2_midp_image_pane_ParamLimits

0xbace,	// (0x00039928) form2_midp_image_pane

0xbae9,	// (0x00039943) form2_midp_label_pane_ParamLimits

0xbae9,	// (0x00039943) form2_midp_label_pane

0x4204,	// (0x0003205e) form2_midp_label_pane_cp_ParamLimits

0x4204,	// (0x0003205e) form2_midp_label_pane_cp

0xbb21,	// (0x0003997b) form2_midp_string_pane_ParamLimits

0xbb21,	// (0x0003997b) form2_midp_string_pane

0x1e55,	// (0x0002fcaf) form2_midp_text_pane_ParamLimits

0x1e55,	// (0x0002fcaf) form2_midp_text_pane

0xbb33,	// (0x0003998d) form2_midp_time_pane

0xbb43,	// (0x0003999d) input_focus_pane_cp51_ParamLimits

0xbb43,	// (0x0003999d) input_focus_pane_cp51

0xbb5b,	// (0x000399b5) form2_midp_label_pane_t1_ParamLimits

0xbb5b,	// (0x000399b5) form2_midp_label_pane_t1

0x1e6e,	// (0x0002fcc8) form2_mdip_text_pane_t1_ParamLimits

0x1e6e,	// (0x0002fcc8) form2_mdip_text_pane_t1

0xdd87,	// (0x0003bbe1) form2_midp_time_pane_t1

0xbba3,	// (0x000399fd) form2_midp_gauge_slider_pane_t1

0x4223,	// (0x0003207d) form2_midp_gauge_slider_pane_t2

0x4235,	// (0x0003208f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0003d96d) form2_midp_gauge_slider_pane_t

0xbbd9,	// (0x00039a33) form2_midp_slider_pane

0xbbe5,	// (0x00039a3f) form2_midp_gauge_wait_pane_t1

0xbbf3,	// (0x00039a4d) form2_midp_wait_pane_ParamLimits

0xbbf3,	// (0x00039a4d) form2_midp_wait_pane

0x3aa4,	// (0x000318fe) list_single_2graphic_pane_cp4_ParamLimits

0x3aa4,	// (0x000318fe) list_single_2graphic_pane_cp4

0x4247,	// (0x000320a1) list_single_midp_graphic_pane_cp_ParamLimits

0x4247,	// (0x000320a1) list_single_midp_graphic_pane_cp

0x2192,	// (0x0002ffec) list_highlight_pane_cp20

0xbc1e,	// (0x00039a78) list_single_2graphic_pane_g1_cp4

0x7c5f,	// (0x00035ab9) list_single_2graphic_pane_g2_cp4

0xbc26,	// (0x00039a80) list_single_2graphic_pane_t1_cp4

0x239e,	// (0x000301f8) list_highlight_pane_cp21

0xbc35,	// (0x00039a8f) list_single_midp_graphic_pane_g4_cp

0xbc44,	// (0x00039a9e) list_single_midp_graphic_pane_t1_cp

0x4265,	// (0x000320bf) form2_mdip_string_pane_t1_ParamLimits

0x4265,	// (0x000320bf) form2_mdip_string_pane_t1

0x2192,	// (0x0002ffec) bg_wml_button_pane_cp2

0x2045,	// (0x0002fe9f) form2_midp_image_pane_g1

0xe244,	// (0x0003c09e) list_double_large_graphic_pane_g5_ParamLimits

0xe244,	// (0x0003c09e) list_double_large_graphic_pane_g5

0x2e9e,	// (0x00030cf8) midp_form_pane_ParamLimits

0x239e,	// (0x000301f8) main_apps_wheel_pane_ParamLimits

0x33fe,	// (0x00031258) popup_preview_window_ParamLimits

0x33fe,	// (0x00031258) popup_preview_window

0x6774,	// (0x000345ce) popup_touch_info_window_ParamLimits

0x6774,	// (0x000345ce) popup_touch_info_window

0x6792,	// (0x000345ec) popup_touch_menu_window_ParamLimits

0x6792,	// (0x000345ec) popup_touch_menu_window

0x203b,	// (0x0002fe95) bg_popup_sub_pane_cp6

0xbcd1,	// (0x00039b2b) list_touch_menu_pane

0xbcd9,	// (0x00039b33) list_single_touch_menu_pane_ParamLimits

0xbcd9,	// (0x00039b33) list_single_touch_menu_pane

0xbcf0,	// (0x00039b4a) list_single_touch_menu_pane_t1

0x239e,	// (0x000301f8) bg_popup_sub_pane_cp7_ParamLimits

0x239e,	// (0x000301f8) bg_popup_sub_pane_cp7

0xbcfe,	// (0x00039b58) heading_sub_pane

0xbd06,	// (0x00039b60) list_touch_info_pane_ParamLimits

0xbd06,	// (0x00039b60) list_touch_info_pane

0xbd15,	// (0x00039b6f) list_single_touch_info_pane_ParamLimits

0xbd15,	// (0x00039b6f) list_single_touch_info_pane

0xbd26,	// (0x00039b80) list_single_touch_info_pane_t1

0xbd34,	// (0x00039b8e) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0003d97b) list_single_touch_info_pane_t

0x6462,	// (0x000342bc) bg_popup_heading_pane_cp

0xbd42,	// (0x00039b9c) heading_sub_pane_t1

0x6a5e,	// (0x000348b8) bg_popup_preview_window_pane_cp_ParamLimits

0x6a5e,	// (0x000348b8) bg_popup_preview_window_pane_cp

0xbcfe,	// (0x00039b58) heading_preview_pane

0xbd06,	// (0x00039b60) list_preview_pane_ParamLimits

0xbd06,	// (0x00039b60) list_preview_pane

0xbd50,	// (0x00039baa) popup_preview_window_g1

0xbd15,	// (0x00039b6f) list_single_preview_pane_ParamLimits

0xbd15,	// (0x00039b6f) list_single_preview_pane

0xbd58,	// (0x00039bb2) list_single_preview_pane_g1

0xbd60,	// (0x00039bba) list_single_preview_pane_t1

0xbd26,	// (0x00039b80) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0003d980) list_single_preview_pane_t

0xbd6e,	// (0x00039bc8) bg_popup_heading_pane_cp2_ParamLimits

0xbd6e,	// (0x00039bc8) bg_popup_heading_pane_cp2

0xbd84,	// (0x00039bde) heading_preview_pane_g1

0xbd8c,	// (0x00039be6) heading_preview_pane_t1_ParamLimits

0xbd8c,	// (0x00039be6) heading_preview_pane_t1

0x2535,	// (0x0003038f) soft_indicator_pane_t1_ParamLimits

0x2b8c,	// (0x000309e6) scroll_pane_ParamLimits

0x5e6d,	// (0x00033cc7) scroll_sc2_left_pane

0x5e64,	// (0x00033cbe) scroll_sc2_right_pane

0x5e8c,	// (0x00033ce6) scroll_bg_pane_g1_ParamLimits

0x5ea1,	// (0x00033cfb) scroll_bg_pane_g2_ParamLimits

0x5eb9,	// (0x00033d13) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003d586) scroll_bg_pane_g_ParamLimits

0x5e8c,	// (0x00033ce6) scroll_handle_pane_g1_ParamLimits

0x5edb,	// (0x00033d35) scroll_handle_pane_g2_ParamLimits

0x5eb9,	// (0x00033d13) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003d58d) scroll_handle_pane_g_ParamLimits

0x66cc,	// (0x00034526) popup_choice_list_window_ParamLimits

0x66cc,	// (0x00034526) popup_choice_list_window

0x68c6,	// (0x00034720) choice_list_pane

0x693c,	// (0x00034796) cell_toolbar_pane_t1

0x6964,	// (0x000347be) toolbar_button_pane_ParamLimits

0x7947,	// (0x000357a1) ai_gene_pane_1_t2_ParamLimits

0x7947,	// (0x000357a1) ai_gene_pane_1_t2

0x0001,

0xf944,	// (0x0003d79e) ai_gene_pane_1_t_ParamLimits

0xf944,	// (0x0003d79e) ai_gene_pane_1_t

0xbda9,	// (0x00039c03) scroll_sc2_left_pane_g1

0xbda9,	// (0x00039c03) scroll_sc2_right_pane_g1

0x5c37,	// (0x00033a91) bg_popup_sub_pane_cp10

0xbdb3,	// (0x00039c0d) list_choice_list_pane

0xbdca,	// (0x00039c24) list_single_choice_list_pane_ParamLimits

0xbdca,	// (0x00039c24) list_single_choice_list_pane

0xbdde,	// (0x00039c38) list_single_choice_list_pane_g1

0x5c22,	// (0x00033a7c) list_single_choice_list_pane_t1_ParamLimits

0x5c22,	// (0x00033a7c) list_single_choice_list_pane_t1

0xbde6,	// (0x00039c40) choice_list_pane_g1

0xbdee,	// (0x00039c48) choice_list_pane_t1

0x203b,	// (0x0002fe95) input_focus_pane_cp11

0x5db9,	// (0x00033c13) title_pane_stacon_g2_ParamLimits

0x5db9,	// (0x00033c13) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003d56c) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003d56c) title_pane_stacon_g

0x6462,	// (0x000342bc) cursor_press_pane

0x3165,	// (0x00030fbf) popup_fep_hwr_window_ParamLimits

0x3165,	// (0x00030fbf) popup_fep_hwr_window

0x671e,	// (0x00034578) popup_fep_vkb_window_ParamLimits

0x671e,	// (0x00034578) popup_fep_vkb_window

0xbdfc,	// (0x00039c56) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0003d9a9) fep_vkb_side_pane_g_ParamLimits

0xae70,	// (0x00038cca) fep_hwr_candidate_pane_ParamLimits

0xae70,	// (0x00038cca) fep_hwr_candidate_pane

0xae98,	// (0x00038cf2) fep_hwr_side_pane_ParamLimits

0xae98,	// (0x00038cf2) fep_hwr_side_pane

0xaeb8,	// (0x00038d12) fep_hwr_top_pane_ParamLimits

0xaeb8,	// (0x00038d12) fep_hwr_top_pane

0xaed0,	// (0x00038d2a) fep_hwr_write_pane_ParamLimits

0xaed0,	// (0x00038d2a) fep_hwr_write_pane

0xfb4f,	// (0x0003d9a9) fep_vkb_side_pane_g

0xbe04,	// (0x00039c5e) fep_hwr_top_pane_g1

0xbe16,	// (0x00039c70) fep_hwr_top_pane_g2

0xaf0a,	// (0x00038d64) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0003d985) fep_hwr_top_pane_g

0xaf1f,	// (0x00038d79) fep_hwr_top_text_pane

0x5fd5,	// (0x00033e2f) fep_hwr_top_text_pane_g1

0xbe4c,	// (0x00039ca6) fep_hwr_top_text_pane_t1

0xb00d,	// (0x00038e67) fep_hwr_candidate_pane_g1

0xc05c,	// (0x00039eb6) fep_vkb_keypad_pane_g3_ParamLimits

0xc05c,	// (0x00039eb6) fep_vkb_keypad_pane_g3

0xc07e,	// (0x00039ed8) fep_vkb_keypad_pane_g4_ParamLimits

0xc07e,	// (0x00039ed8) fep_vkb_keypad_pane_g4

0xc0ed,	// (0x00039f47) fep_vkb_bottom_pane_g2_ParamLimits

0xc0ed,	// (0x00039f47) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0003d9b0) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0003d9b0) fep_vkb_bottom_pane_g

0xbda9,	// (0x00039c03) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0003d9ba) cell_vkb_side_pane_g

0xc178,	// (0x00039fd2) cell_vkb_side_pane_t1

0xc186,	// (0x00039fe0) cell_vkb_side_pane_t1_copy1

0xbda9,	// (0x00039c03) bg_fep_vkb_candidate_pane_g2

0xc2aa,	// (0x0003a104) cell_vkb_candidate_pane_ParamLimits

0xbe5a,	// (0x00039cb4) aid_size_cell_vkb_ParamLimits

0xbe5a,	// (0x00039cb4) aid_size_cell_vkb

0xc2aa,	// (0x0003a104) cell_vkb_candidate_pane

0xb034,	// (0x00038e8e) bg_popup_fep_shadow_pane_g1

0xbed0,	// (0x00039d2a) fep_vkb_bottom_pane_ParamLimits

0xbed0,	// (0x00039d2a) fep_vkb_bottom_pane

0xbf0d,	// (0x00039d67) fep_vkb_candidate_pane_ParamLimits

0xbf0d,	// (0x00039d67) fep_vkb_candidate_pane

0xbf29,	// (0x00039d83) fep_vkb_keypad_pane_ParamLimits

0xbf29,	// (0x00039d83) fep_vkb_keypad_pane

0xbf5d,	// (0x00039db7) fep_vkb_side_pane_ParamLimits

0xbf5d,	// (0x00039db7) fep_vkb_side_pane

0xbf89,	// (0x00039de3) fep_vkb_top_pane_ParamLimits

0xbf89,	// (0x00039de3) fep_vkb_top_pane

0xbfb5,	// (0x00039e0f) fep_vkb_top_pane_g1_ParamLimits

0xbfb5,	// (0x00039e0f) fep_vkb_top_pane_g1

0xbfc4,	// (0x00039e1e) fep_vkb_top_pane_g2_ParamLimits

0xbfc4,	// (0x00039e1e) fep_vkb_top_pane_g2

0xbfd3,	// (0x00039e2d) fep_vkb_top_pane_g3_ParamLimits

0xbfd3,	// (0x00039e2d) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0003d9a0) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0003d9a0) fep_vkb_top_pane_g

0xbff1,	// (0x00039e4b) fep_vkb_top_text_pane_ParamLimits

0xbff1,	// (0x00039e4b) fep_vkb_top_text_pane

0x432c,	// (0x00032186) fep_vkb_side_pane_g1_ParamLimits

0x432c,	// (0x00032186) fep_vkb_side_pane_g1

0xc04b,	// (0x00039ea5) grid_vkb_side_pane_ParamLimits

0xc04b,	// (0x00039ea5) grid_vkb_side_pane

0xb03c,	// (0x00038e96) bg_popup_fep_shadow_pane_g2

0xb045,	// (0x00038e9f) bg_popup_fep_shadow_pane_g3

0xb04d,	// (0x00038ea7) bg_popup_fep_shadow_pane_g4

0xb056,	// (0x00038eb0) bg_popup_fep_shadow_pane_g5

0xb05e,	// (0x00038eb8) bg_popup_fep_shadow_pane_g6

0xb066,	// (0x00038ec0) bg_popup_fep_shadow_pane_g7

0x5b22,	// (0x0003397c) bg_popup_fep_shadow_pane_g8

0xc09c,	// (0x00039ef6) grid_vkb_keypad_number_pane_ParamLimits

0xc09c,	// (0x00039ef6) grid_vkb_keypad_number_pane

0xc0ac,	// (0x00039f06) grid_vkb_keypad_pane_ParamLimits

0xc0ac,	// (0x00039f06) grid_vkb_keypad_pane

0xc0d2,	// (0x00039f2c) fep_vkb_bottom_pane_g1_ParamLimits

0xc0d2,	// (0x00039f2c) fep_vkb_bottom_pane_g1

0xc0fb,	// (0x00039f55) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc0fb,	// (0x00039f55) grid_vkb_keypad_bottom_left_pane

0xc110,	// (0x00039f6a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc110,	// (0x00039f6a) grid_vkb_keypad_bottom_right_pane

0xc125,	// (0x00039f7f) fep_vkb_top_text_pane_g1

0x4373,	// (0x000321cd) fep_vkb_top_text_pane_t1

0x4385,	// (0x000321df) cell_vkb_side_pane_ParamLimits

0x4385,	// (0x000321df) cell_vkb_side_pane

0xbda9,	// (0x00039c03) cell_vkb_side_pane_g1

0xc194,	// (0x00039fee) cell_vkb_keypad_pane_ParamLimits

0xc194,	// (0x00039fee) cell_vkb_keypad_pane

0xc201,	// (0x0003a05b) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0003d9cd) bg_popup_fep_shadow_pane_g

0xb076,	// (0x00038ed0) cell_hwr_side_pane_g1

0xb076,	// (0x00038ed0) cell_hwr_side_pane_g2

0xc20b,	// (0x0003a065) cell_vkb_keypad_pane_t1

0x439b,	// (0x000321f5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x439b,	// (0x000321f5) cell_vkb_keypad_bottom_left_pane

0x43b0,	// (0x0003220a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x43b0,	// (0x0003220a) cell_vkb_keypad_bottom_right_pane

0xbda9,	// (0x00039c03) cell_vkb_keypad_bottom_left_pane_g1

0xbda9,	// (0x00039c03) cell_vkb_keypad_bottom_right_pane_g1

0xc26f,	// (0x0003a0c9) cell_vkb_keypad_number_pane_ParamLimits

0xc26f,	// (0x0003a0c9) cell_vkb_keypad_number_pane

0xc28e,	// (0x0003a0e8) cell_vkb_keypad_number_pane_g1

0xc298,	// (0x0003a0f2) cell_vkb_keypad_number_pane_g2

0xc2a1,	// (0x0003a0fb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0003d9bf) cell_vkb_keypad_number_pane_g

0xc20b,	// (0x0003a065) cell_vkb_keypad_number_pane_t1

0xc2c3,	// (0x0003a11d) fep_vkb_candidate_pane_g1

0x0001,

0xfb86,	// (0x0003d9e0) cell_hwr_side_pane_g

0xc2dc,	// (0x0003a136) cell_hwr_side_pane_t1

0xb080,	// (0x00038eda) cell_hwr_side_pane_t1_copy1

0xb08e,	// (0x00038ee8) cell_hwr_candidate_pane_g1

0xb0bd,	// (0x00038f17) cell_hwr_candidate_pane_t1

0xbda9,	// (0x00039c03) cell_vkb_candidate_pane_g2

0xc320,	// (0x0003a17a) cell_vkb_candidate_pane_t1

0xae3b,	// (0x00038c95) bg_popup_fep_shadow_pane_ParamLimits

0xae3b,	// (0x00038c95) bg_popup_fep_shadow_pane

0xaeea,	// (0x00038d44) bg_fep_hwr_top_pane_g4

0xbe28,	// (0x00039c82) bg_hwr_side_pane_g1_ParamLimits

0xbe28,	// (0x00039c82) bg_hwr_side_pane_g1

0xf163,	// (0x0003cfbd) cell_hwr_side_pane_ParamLimits

0xf163,	// (0x0003cfbd) cell_hwr_side_pane

0xaf96,	// (0x00038df0) fep_hwr_write_pane_g1_ParamLimits

0xaf96,	// (0x00038df0) fep_hwr_write_pane_g1

0xafa3,	// (0x00038dfd) fep_hwr_write_pane_g2_ParamLimits

0xafa3,	// (0x00038dfd) fep_hwr_write_pane_g2

0xafb0,	// (0x00038e0a) fep_hwr_write_pane_g3_ParamLimits

0xafb0,	// (0x00038e0a) fep_hwr_write_pane_g3

0xf183,	// (0x0003cfdd) fep_hwr_write_pane_g4_ParamLimits

0xf183,	// (0x0003cfdd) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0003d98c) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0003d98c) fep_hwr_write_pane_g

0xaeea,	// (0x00038d44) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xaeea,	// (0x00038d44) bg_fep_hwr_candidate_pane_g2

0xafd3,	// (0x00038e2d) cell_hwr_candidate_pane_ParamLimits

0xafd3,	// (0x00038e2d) cell_hwr_candidate_pane

0xb00d,	// (0x00038e67) fep_hwr_candidate_pane_g1_ParamLimits

0xbe88,	// (0x00039ce2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbe88,	// (0x00039ce2) bg_popup_fep_shadow_pane_cp2

0xbfe3,	// (0x00039e3d) fep_vkb_top_pane_g4_ParamLimits

0xbfe3,	// (0x00039e3d) fep_vkb_top_pane_g4

0xc029,	// (0x00039e83) fep_vkb_side_pane_g2_ParamLimits

0xc029,	// (0x00039e83) fep_vkb_side_pane_g2

0x1b3e,	// (0x0002f998) list_setting_pane_t4_ParamLimits

0x1b3e,	// (0x0002f998) list_setting_pane_t4

0x1bd8,	// (0x0002fa32) list_setting_number_pane_t5_ParamLimits

0x1bd8,	// (0x0002fa32) list_setting_number_pane_t5

0x2dce,	// (0x00030c28) list_double_heading_pane_cp2_ParamLimits

0x2dce,	// (0x00030c28) list_double_heading_pane_cp2

0x62d7,	// (0x00034131) list_double_heading_pane_g1_cp2_ParamLimits

0x62d7,	// (0x00034131) list_double_heading_pane_g1_cp2

0xc32e,	// (0x0003a188) list_double_heading_pane_g2_cp2_ParamLimits

0xc32e,	// (0x0003a188) list_double_heading_pane_g2_cp2

0xc342,	// (0x0003a19c) list_double_heading_pane_t1_cp2_ParamLimits

0xc342,	// (0x0003a19c) list_double_heading_pane_t1_cp2

0xc358,	// (0x0003a1b2) list_double_heading_pane_t2_cp2_ParamLimits

0xc358,	// (0x0003a1b2) list_double_heading_pane_t2_cp2

0x2025,	// (0x0002fe7f) aid_value_unit2

0x90c9,	// (0x00036f23) popup_preview_fixed_window

0x26f3,	// (0x0003054d) bg_popup_preview_window_pane_cp02

0xc36a,	// (0x0003a1c4) list_preview_fixed_pane

0xc3b0,	// (0x0003a20a) list_empty_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_empty_pane_fp

0xc3b0,	// (0x0003a20a) list_single_cale_day_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_single_cale_day_pane_fp

0xc3b0,	// (0x0003a20a) list_single_graphic_heading_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_single_graphic_heading_pane_fp

0xc3b0,	// (0x0003a20a) list_single_graphic_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_single_graphic_pane_fp

0xc3b0,	// (0x0003a20a) list_single_heading_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_single_heading_pane_fp

0xc3b0,	// (0x0003a20a) list_single_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_single_pane_fp

0xc3c4,	// (0x0003a21e) list_single_pane_fp_g1_ParamLimits

0xc3c4,	// (0x0003a21e) list_single_pane_fp_g1

0xe1f9,	// (0x0003c053) list_single_pane_fp_g2_ParamLimits

0xe1f9,	// (0x0003c053) list_single_pane_fp_g2

0xe2e8,	// (0x0003c142) list_single_pane_fp_g3_ParamLimits

0xe2e8,	// (0x0003c142) list_single_pane_fp_g3

0xc3d0,	// (0x0003a22a) list_single_pane_fp_g4_ParamLimits

0xc3d0,	// (0x0003a22a) list_single_pane_fp_g4

0x0003,

0xfb99,	// (0x0003d9f3) list_single_pane_fp_g_ParamLimits

0xfb99,	// (0x0003d9f3) list_single_pane_fp_g

0xddbb,	// (0x0003bc15) list_single_pane_fp_t1_ParamLimits

0xddbb,	// (0x0003bc15) list_single_pane_fp_t1

0xddd2,	// (0x0003bc2c) list_single_graphic_pane_fp_g1_ParamLimits

0xddd2,	// (0x0003bc2c) list_single_graphic_pane_fp_g1

0xc3c4,	// (0x0003a21e) list_single_graphic_pane_fp_g2_ParamLimits

0xc3c4,	// (0x0003a21e) list_single_graphic_pane_fp_g2

0xe1f9,	// (0x0003c053) list_single_graphic_pane_fp_g3_ParamLimits

0xe1f9,	// (0x0003c053) list_single_graphic_pane_fp_g3

0xe2e8,	// (0x0003c142) list_single_graphic_pane_fp_g4_ParamLimits

0xe2e8,	// (0x0003c142) list_single_graphic_pane_fp_g4

0xc3d0,	// (0x0003a22a) list_single_graphic_pane_fp_g5_ParamLimits

0xc3d0,	// (0x0003a22a) list_single_graphic_pane_fp_g5

0x0004,

0xfba2,	// (0x0003d9fc) list_single_graphic_pane_fp_g_ParamLimits

0xfba2,	// (0x0003d9fc) list_single_graphic_pane_fp_g

0xddde,	// (0x0003bc38) list_single_graphic_pane_fp_t1_ParamLimits

0xddde,	// (0x0003bc38) list_single_graphic_pane_fp_t1

0xddd2,	// (0x0003bc2c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xddd2,	// (0x0003bc2c) list_single_graphic_heading_pane_fp_g1

0xc3c4,	// (0x0003a21e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc3c4,	// (0x0003a21e) list_single_graphic_heading_pane_fp_g2

0xe1f9,	// (0x0003c053) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe1f9,	// (0x0003c053) list_single_graphic_heading_pane_fp_g3

0xe2e8,	// (0x0003c142) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe2e8,	// (0x0003c142) list_single_graphic_heading_pane_fp_g4

0xc3d0,	// (0x0003a22a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3d0,	// (0x0003a22a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003d9fc) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003d9fc) list_single_graphic_heading_pane_fp_g

0xddf4,	// (0x0003bc4e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xddf4,	// (0x0003bc4e) list_single_graphic_heading_pane_fp_t1

0xde0a,	// (0x0003bc64) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xde0a,	// (0x0003bc64) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0003da07) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0003da07) list_single_graphic_heading_pane_fp_t

0xde1c,	// (0x0003bc76) list_single_cale_day_pane_fp_g1_ParamLimits

0xde1c,	// (0x0003bc76) list_single_cale_day_pane_fp_g1

0xc3dc,	// (0x0003a236) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3dc,	// (0x0003a236) list_single_cale_day_pane_fp_g2

0xe2fc,	// (0x0003c156) list_single_cale_day_pane_fp_g3_ParamLimits

0xe2fc,	// (0x0003c156) list_single_cale_day_pane_fp_g3

0xe324,	// (0x0003c17e) list_single_cale_day_pane_fp_g4_ParamLimits

0xe324,	// (0x0003c17e) list_single_cale_day_pane_fp_g4

0xe348,	// (0x0003c1a2) list_single_cale_day_pane_fp_g5_ParamLimits

0xe348,	// (0x0003c1a2) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb2,	// (0x0003da0c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb2,	// (0x0003da0c) list_single_cale_day_pane_fp_g

0xde54,	// (0x0003bcae) list_single_cale_day_pane_fp_t1_ParamLimits

0xde54,	// (0x0003bcae) list_single_cale_day_pane_fp_t1

0xde7a,	// (0x0003bcd4) list_single_cale_day_pane_fp_t2_ParamLimits

0xde7a,	// (0x0003bcd4) list_single_cale_day_pane_fp_t2

0xde93,	// (0x0003bced) list_single_cale_day_pane_fp_t3_ParamLimits

0xde93,	// (0x0003bced) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbd,	// (0x0003da17) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbd,	// (0x0003da17) list_single_cale_day_pane_fp_t

0xc3c4,	// (0x0003a21e) list_empty_pane_fp_g1_ParamLimits

0xc3c4,	// (0x0003a21e) list_empty_pane_fp_g1

0xdeac,	// (0x0003bd06) list_empty_pane_fp_t1

0xdeba,	// (0x0003bd14) list_empty_pane_fp_t2

0x0001,

0xfbc4,	// (0x0003da1e) list_empty_pane_fp_t

0xc3c4,	// (0x0003a21e) list_single_heading_pane_fp_g1_ParamLimits

0xc3c4,	// (0x0003a21e) list_single_heading_pane_fp_g1

0xe1f9,	// (0x0003c053) list_single_heading_pane_fp_g2_ParamLimits

0xe1f9,	// (0x0003c053) list_single_heading_pane_fp_g2

0xe2e8,	// (0x0003c142) list_single_heading_pane_fp_g3_ParamLimits

0xe2e8,	// (0x0003c142) list_single_heading_pane_fp_g3

0x0002,

0xfbc9,	// (0x0003da23) list_single_heading_pane_fp_g_ParamLimits

0xfbc9,	// (0x0003da23) list_single_heading_pane_fp_g

0xdec8,	// (0x0003bd22) list_single_heading_pane_fp_t1_ParamLimits

0xdec8,	// (0x0003bd22) list_single_heading_pane_fp_t1

0xdeda,	// (0x0003bd34) list_single_heading_pane_fp_t2_ParamLimits

0xdeda,	// (0x0003bd34) list_single_heading_pane_fp_t2

0x0001,

0xfbd0,	// (0x0003da2a) list_single_heading_pane_fp_t_ParamLimits

0xfbd0,	// (0x0003da2a) list_single_heading_pane_fp_t

0x5c43,	// (0x00033a9d) aid_size_cell_fast

0x2668,	// (0x000304c2) soft_indicator_pane_cp1_t1

0x5c80,	// (0x00033ada) cell_app_pane_cp2_ParamLimits

0x5c80,	// (0x00033ada) cell_app_pane_cp2

0xae5d,	// (0x00038cb7) fep_hwr_candidate_drop_down_list_pane

0xb027,	// (0x00038e81) fep_hwr_candidate_pane_g3_ParamLimits

0xb027,	// (0x00038e81) fep_hwr_candidate_pane_g3

0x53e2,	// (0x0003323c) fep_hwr_candidate_pane_g4_ParamLimits

0x53e2,	// (0x0003323c) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0003d999) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0003d999) fep_hwr_candidate_pane_g

0xbefc,	// (0x00039d56) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbefc,	// (0x00039d56) fep_vkb_candidate_drop_down_list_pane

0xc2cb,	// (0x0003a125) fep_vkb_candidate_pane_g3

0xc2d3,	// (0x0003a12d) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0003d9c6) fep_vkb_candidate_pane_g

0xb08e,	// (0x00038ee8) cell_hwr_candidate_pane_g1_ParamLimits

0xb09c,	// (0x00038ef6) cell_hwr_candidate_pane_g3_ParamLimits

0xb09c,	// (0x00038ef6) cell_hwr_candidate_pane_g3

0xdd9a,	// (0x0003bbf4) cell_hwr_candidate_pane_g4_ParamLimits

0xdd9a,	// (0x0003bbf4) cell_hwr_candidate_pane_g4

0x0002,

0xfb8b,	// (0x0003d9e5) cell_hwr_candidate_pane_g_ParamLimits

0xfb8b,	// (0x0003d9e5) cell_hwr_candidate_pane_g

0xc2ea,	// (0x0003a144) cell_vkb_candidate_pane_g3_ParamLimits

0xc2ea,	// (0x0003a144) cell_vkb_candidate_pane_g3

0xc305,	// (0x0003a15f) cell_vkb_candidate_pane_g4_ParamLimits

0xc305,	// (0x0003a15f) cell_vkb_candidate_pane_g4

0xc3e8,	// (0x0003a242) cell_app_pane_cp2_g1_ParamLimits

0xc3e8,	// (0x0003a242) cell_app_pane_cp2_g1

0xc406,	// (0x0003a260) cell_app_pane_cp2_g2_ParamLimits

0xc406,	// (0x0003a260) cell_app_pane_cp2_g2

0x0001,

0xfbd5,	// (0x0003da2f) cell_app_pane_cp2_g_ParamLimits

0xfbd5,	// (0x0003da2f) cell_app_pane_cp2_g

0xc412,	// (0x0003a26c) cell_app_pane_cp2_t1_ParamLimits

0xc412,	// (0x0003a26c) cell_app_pane_cp2_t1

0x5abb,	// (0x00033915) grid_highlight_pane_cp1_ParamLimits

0x5abb,	// (0x00033915) grid_highlight_pane_cp1

0xb0da,	// (0x00038f34) cell_hwr_candidate_pane_cp1_ParamLimits

0xb0da,	// (0x00038f34) cell_hwr_candidate_pane_cp1

0xb08e,	// (0x00038ee8) fep_hwr_candidate_drop_down_list_pane_g1

0xb0f8,	// (0x00038f52) fep_hwr_candidate_drop_down_list_pane_g2

0xb105,	// (0x00038f5f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003da34) fep_hwr_candidate_drop_down_list_pane_g

0xb112,	// (0x00038f6c) fep_hwr_candidate_drop_down_list_scroll_pane

0xb11b,	// (0x00038f75) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb11b,	// (0x00038f75) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb128,	// (0x00038f82) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb128,	// (0x00038f82) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb135,	// (0x00038f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb135,	// (0x00038f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb142,	// (0x00038f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb142,	// (0x00038f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb15d,	// (0x00038fb7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb15d,	// (0x00038fb7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb178,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb178,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb193,	// (0x00038fed) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb193,	// (0x00038fed) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb1ae,	// (0x00039008) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb1ae,	// (0x00039008) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003da3b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003da3b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x43cb,	// (0x00032225) cell_vkb_candidate_pane_cp1_ParamLimits

0x43cb,	// (0x00032225) cell_vkb_candidate_pane_cp1

0xbfe3,	// (0x00039e3d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbfe3,	// (0x00039e3d) fep_vkb_candidate_drop_down_list_pane_g1

0xc447,	// (0x0003a2a1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc447,	// (0x0003a2a1) fep_vkb_candidate_drop_down_list_pane_g2

0xc454,	// (0x0003a2ae) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc454,	// (0x0003a2ae) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf2,	// (0x0003da4c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf2,	// (0x0003da4c) fep_vkb_candidate_drop_down_list_pane_g

0xc461,	// (0x0003a2bb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc461,	// (0x0003a2bb) fep_vkb_candidate_drop_down_list_scroll_pane

0xc46e,	// (0x0003a2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc46e,	// (0x0003a2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc47b,	// (0x0003a2d5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc47b,	// (0x0003a2d5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc487,	// (0x0003a2e1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc487,	// (0x0003a2e1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc493,	// (0x0003a2ed) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc493,	// (0x0003a2ed) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc4b4,	// (0x0003a30e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc4b4,	// (0x0003a30e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc4d5,	// (0x0003a32f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc4d5,	// (0x0003a32f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc4f6,	// (0x0003a350) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc4f6,	// (0x0003a350) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc517,	// (0x0003a371) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc517,	// (0x0003a371) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf9,	// (0x0003da53) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf9,	// (0x0003da53) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2241,	// (0x0003009b) title_pane_g1_ParamLimits

0x2258,	// (0x000300b2) title_pane_g2_ParamLimits

0xf592,	// (0x0003d3ec) title_pane_g_ParamLimits

0x5fcd,	// (0x00033e27) aid_call2_pane

0x5fc5,	// (0x00033e1f) aid_call_pane

0x5fd5,	// (0x00033e2f) popup_clock_analogue_window_g1

0x5fd5,	// (0x00033e2f) popup_clock_analogue_window_g2

0x9774,	// (0x000375ce) popup_clock_analogue_window_g3

0x977d,	// (0x000375d7) popup_clock_analogue_window_g4

0x2045,	// (0x0002fe9f) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003d59b) popup_clock_analogue_window_g

0x9785,	// (0x000375df) popup_clock_analogue_window_t1

0x97c9,	// (0x00037623) clock_digital_number_pane_ParamLimits

0x97c9,	// (0x00037623) clock_digital_number_pane

0x97d5,	// (0x0003762f) clock_digital_number_pane_cp02_ParamLimits

0x97d5,	// (0x0003762f) clock_digital_number_pane_cp02

0x97e1,	// (0x0003763b) clock_digital_number_pane_cp03_ParamLimits

0x97e1,	// (0x0003763b) clock_digital_number_pane_cp03

0x97ed,	// (0x00037647) clock_digital_number_pane_cp04_ParamLimits

0x97ed,	// (0x00037647) clock_digital_number_pane_cp04

0x97f9,	// (0x00037653) clock_digital_separator_pane_ParamLimits

0x97f9,	// (0x00037653) clock_digital_separator_pane

0x9805,	// (0x0003765f) popup_clock_digital_window_t1_ParamLimits

0x9805,	// (0x0003765f) popup_clock_digital_window_t1

0x2045,	// (0x0002fe9f) clock_digital_number_pane_g1

0x2045,	// (0x0002fe9f) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003d5a6) clock_digital_number_pane_g

0x2045,	// (0x0002fe9f) clock_digital_separator_pane_g1

0x2045,	// (0x0002fe9f) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003d5a6) clock_digital_separator_pane_g

0x365c,	// (0x000314b6) aid_fill_nsta_ParamLimits

0x3773,	// (0x000315cd) indicator_nsta_pane_ParamLimits

0x686f,	// (0x000346c9) popup_clock_analogue_window

0x686f,	// (0x000346c9) popup_clock_digital_window

0x6a86,	// (0x000348e0) grid_indicator_nsta_pane_ParamLimits

0x8458,	// (0x000362b2) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0003d926) clock_nsta_pane_t

0x96dd,	// (0x00037537) aid_size_max_handle

0xee5b,	// (0x0003ccb5) aid_size_min_handle

0x6462,	// (0x000342bc) editor_scroll_pane

0xc532,	// (0x0003a38c) ex_editor_pane

0x5bfe,	// (0x00033a58) scroll_pane_cp13

0x2bb9,	// (0x00030a13) scroll_pane_cp14

0x5fff,	// (0x00033e59) scroll_pane_cp36

0x2dda,	// (0x00030c34) list_single_graphic_hl_pane_cp2_ParamLimits

0x2dda,	// (0x00030c34) list_single_graphic_hl_pane_cp2

0x3f88,	// (0x00031de2) list_single_graphic_hl_pane_ParamLimits

0x3f88,	// (0x00031de2) list_single_graphic_hl_pane

0xdef0,	// (0x0003bd4a) aid_size_min_hl_cp1

0xc53a,	// (0x0003a394) list_highlight_pane_cp34_ParamLimits

0xc53a,	// (0x0003a394) list_highlight_pane_cp34

0xc54b,	// (0x0003a3a5) list_single_graphic_hl_pane_g1_ParamLimits

0xc54b,	// (0x0003a3a5) list_single_graphic_hl_pane_g1

0x1e87,	// (0x0002fce1) list_single_graphic_hl_pane_g2_ParamLimits

0x1e87,	// (0x0002fce1) list_single_graphic_hl_pane_g2

0x1e87,	// (0x0002fce1) list_single_graphic_hl_pane_g3_ParamLimits

0x1e87,	// (0x0002fce1) list_single_graphic_hl_pane_g3

0x2c2f,	// (0x00030a89) list_single_graphic_hl_pane_g4_ParamLimits

0x2c2f,	// (0x00030a89) list_single_graphic_hl_pane_g4

0x5ad5,	// (0x0003392f) list_single_graphic_hl_pane_g5_ParamLimits

0x5ad5,	// (0x0003392f) list_single_graphic_hl_pane_g5

0x0004,

0xfc0a,	// (0x0003da64) list_single_graphic_hl_pane_g_ParamLimits

0xfc0a,	// (0x0003da64) list_single_graphic_hl_pane_g

0x1e93,	// (0x0002fced) list_single_graphic_hl_pane_t1_ParamLimits

0x1e93,	// (0x0002fced) list_single_graphic_hl_pane_t1

0xc558,	// (0x0003a3b2) aid_size_min_hl_cp2

0xc561,	// (0x0003a3bb) list_highlight_pane_cp34_cp2_ParamLimits

0xc561,	// (0x0003a3bb) list_highlight_pane_cp34_cp2

0xc54b,	// (0x0003a3a5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc54b,	// (0x0003a3a5) list_single_graphic_hl_pane_g1_cp2

0xc56e,	// (0x0003a3c8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc56e,	// (0x0003a3c8) list_single_graphic_hl_pane_g2_cp2

0xc57a,	// (0x0003a3d4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc57a,	// (0x0003a3d4) list_single_graphic_hl_pane_g3_cp2

0x62d7,	// (0x00034131) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x62d7,	// (0x00034131) list_single_graphic_hl_pane_g4_cp2

0xc32e,	// (0x0003a188) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc32e,	// (0x0003a188) list_single_graphic_hl_pane_g5_cp2

0xee85,	// (0x0003ccdf) control_pane_g4_ParamLimits

0xee85,	// (0x0003ccdf) control_pane_g4

0x5c37,	// (0x00033a91) bg_popup_sub_pane_cp10_ParamLimits

0xbdb3,	// (0x00039c0d) list_choice_list_pane_ParamLimits

0xbdc2,	// (0x00039c1c) scroll_pane_cp23

0x26f3,	// (0x0003054d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc36a,	// (0x0003a1c4) list_preview_fixed_pane_ParamLimits

0xc380,	// (0x0003a1da) list_preview_fixed_pane_cp_ParamLimits

0xc380,	// (0x0003a1da) list_preview_fixed_pane_cp

0xc38c,	// (0x0003a1e6) popup_preview_fixed_window_g1_ParamLimits

0xc38c,	// (0x0003a1e6) popup_preview_fixed_window_g1

0xc398,	// (0x0003a1f2) popup_preview_fixed_window_g2_ParamLimits

0xc398,	// (0x0003a1f2) popup_preview_fixed_window_g2

0x0002,

0xfb92,	// (0x0003d9ec) popup_preview_fixed_window_g_ParamLimits

0xfb92,	// (0x0003d9ec) popup_preview_fixed_window_g

0x95f8,	// (0x00037452) aid_navi_side_left_pane_ParamLimits

0x9608,	// (0x00037462) aid_navi_side_right_pane_ParamLimits

0x9617,	// (0x00037471) navi_icon_pane_stacon_ParamLimits

0x9627,	// (0x00037481) navi_navi_pane_stacon_ParamLimits

0x9617,	// (0x00037471) navi_text_pane_stacon_ParamLimits

0x203b,	// (0x0002fe95) main_text_info_pane

0xc59c,	// (0x0003a3f6) listscroll_text_info_pane

0xc5a4,	// (0x0003a3fe) list_text_info_pane_ParamLimits

0xc5a4,	// (0x0003a3fe) list_text_info_pane

0xc5b3,	// (0x0003a40d) scroll_pane_cp24_ParamLimits

0xc5b3,	// (0x0003a40d) scroll_pane_cp24

0x43eb,	// (0x00032245) list_text_info_pane_t1_ParamLimits

0x43eb,	// (0x00032245) list_text_info_pane_t1

0x30e5,	// (0x00030f3f) popup_fast_swap2_window_ParamLimits

0x30e5,	// (0x00030f3f) popup_fast_swap2_window

0xc5ee,	// (0x0003a448) aid_size_cell_fast2

0x203b,	// (0x0002fe95) bg_popup_window_pane_cp17

0x6e84,	// (0x00034cde) heading_pane_cp2

0x293b,	// (0x00030795) listscroll_fast2_pane

0xc5f8,	// (0x0003a452) grid_fast2_pane

0xc600,	// (0x0003a45a) listscroll_fast2_pane_g1

0xc608,	// (0x0003a462) listscroll_fast2_pane_g2

0x0001,

0xfc15,	// (0x0003da6f) listscroll_fast2_pane_g

0x5bfe,	// (0x00033a58) scroll_pane_cp26

0xc610,	// (0x0003a46a) cell_fast2_pane_ParamLimits

0xc610,	// (0x0003a46a) cell_fast2_pane

0xc626,	// (0x0003a480) cell_fast2_pane_g1

0xc62f,	// (0x0003a489) cell_fast2_pane_g2

0xc638,	// (0x0003a492) cell_fast2_pane_g3

0x0002,

0xfc1a,	// (0x0003da74) cell_fast2_pane_g

0x2a12,	// (0x0003086c) grid_highlight_pane_cp9

0x2a27,	// (0x00030881) main_eswt_pane_ParamLimits

0x2a27,	// (0x00030881) main_eswt_pane

0xc5c8,	// (0x0003a422) list_single_text_info_pane

0xc640,	// (0x0003a49a) eswt_ctrl_button_pane

0xc640,	// (0x0003a49a) eswt_ctrl_canvas_pane

0xc648,	// (0x0003a4a2) eswt_ctrl_combo_pane

0xc640,	// (0x0003a49a) eswt_ctrl_default_pane

0xc640,	// (0x0003a49a) eswt_ctrl_label_pane

0xc650,	// (0x0003a4aa) eswt_ctrl_wait_pane

0xc658,	// (0x0003a4b2) eswt_shell_pane

0x203b,	// (0x0002fe95) listscroll_eswt_app_pane

0xc674,	// (0x0003a4ce) popup_eswt_tasktip_window_ParamLimits

0xc674,	// (0x0003a4ce) popup_eswt_tasktip_window

0x6a5e,	// (0x000348b8) bg_popup_window_pane_cp18

0xc685,	// (0x0003a4df) eswt_control_pane_g1_ParamLimits

0xc685,	// (0x0003a4df) eswt_control_pane_g1

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_ParamLimits

0xc692,	// (0x0003a4ec) eswt_control_pane_g2

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_ParamLimits

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_ParamLimits

0xc6ac,	// (0x0003a506) eswt_control_pane_g4

0x0003,

0xfc21,	// (0x0003da7b) eswt_control_pane_g_ParamLimits

0xfc21,	// (0x0003da7b) eswt_control_pane_g

0x5abb,	// (0x00033915) bg_button_pane_ParamLimits

0x5abb,	// (0x00033915) bg_button_pane

0x2a27,	// (0x00030881) common_borders_pane_copy2_ParamLimits

0x2a27,	// (0x00030881) common_borders_pane_copy2

0xc6b9,	// (0x0003a513) control_button_pane_g1_ParamLimits

0xc6b9,	// (0x0003a513) control_button_pane_g1

0xc6c5,	// (0x0003a51f) control_button_pane_g2_ParamLimits

0xc6c5,	// (0x0003a51f) control_button_pane_g2

0xc6d1,	// (0x0003a52b) control_button_pane_g3_ParamLimits

0xc6d1,	// (0x0003a52b) control_button_pane_g3

0x0002,

0xfc2a,	// (0x0003da84) control_button_pane_g_ParamLimits

0xfc2a,	// (0x0003da84) control_button_pane_g

0xc6e5,	// (0x0003a53f) control_button_pane_t1

0xc6f3,	// (0x0003a54d) control_button_pane_t2

0x0001,

0xfc31,	// (0x0003da8b) control_button_pane_t

0x6970,	// (0x000347ca) bg_button_pane_g1

0x6978,	// (0x000347d2) bg_button_pane_g2

0x6980,	// (0x000347da) bg_button_pane_g3

0x6988,	// (0x000347e2) bg_button_pane_g4

0x6990,	// (0x000347ea) bg_button_pane_g5

0x6998,	// (0x000347f2) bg_button_pane_g6

0x69a0,	// (0x000347fa) bg_button_pane_g7

0x69a8,	// (0x00034802) bg_button_pane_g8

0x69b0,	// (0x0003480a) bg_button_pane_g9

0x0008,

0xf898,	// (0x0003d6f2) bg_button_pane_g

0xbd6e,	// (0x00039bc8) common_borders_pane_ParamLimits

0xbd6e,	// (0x00039bc8) common_borders_pane

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy1_ParamLimits

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy1

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy1_ParamLimits

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy1

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy1_ParamLimits

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy1

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy1_ParamLimits

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy1

0xbda9,	// (0x00039c03) bg_eswt_ctrl_canvas_pane_g1

0xbd6e,	// (0x00039bc8) common_borders_pane_cp2_ParamLimits

0xbd6e,	// (0x00039bc8) common_borders_pane_cp2

0xbd6e,	// (0x00039bc8) common_borders_pane_cp3_ParamLimits

0xbd6e,	// (0x00039bc8) common_borders_pane_cp3

0xc701,	// (0x0003a55b) separator_horizontal_pane

0x5e64,	// (0x00033cbe) separator_vertical_pane

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy2_ParamLimits

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy2

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy2_ParamLimits

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy2

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy2_ParamLimits

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy2

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy2_ParamLimits

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy2

0x203b,	// (0x0002fe95) common_borders_pane_cp4

0xc709,	// (0x0003a563) separator_horizontal_pane_g1

0xc712,	// (0x0003a56c) separator_horizontal_pane_g2

0xc71b,	// (0x0003a575) separator_horizontal_pane_g3

0x0002,

0xfc36,	// (0x0003da90) separator_horizontal_pane_g

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy3_ParamLimits

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy3

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy3_ParamLimits

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy3

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy3_ParamLimits

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy3

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy3_ParamLimits

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy3

0x203b,	// (0x0002fe95) common_borders_pane_cp5

0xc724,	// (0x0003a57e) separator_vertical_pane_g1

0xc72d,	// (0x0003a587) separator_vertical_pane_g2

0xc736,	// (0x0003a590) separator_vertical_pane_g3

0x0002,

0xfc3d,	// (0x0003da97) separator_vertical_pane_g

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy4_ParamLimits

0xc685,	// (0x0003a4df) eswt_control_pane_g1_copy4

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy4_ParamLimits

0xc692,	// (0x0003a4ec) eswt_control_pane_g2_copy4

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy4_ParamLimits

0xc69f,	// (0x0003a4f9) eswt_control_pane_g3_copy4

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy4_ParamLimits

0xc6ac,	// (0x0003a506) eswt_control_pane_g4_copy4

0x4406,	// (0x00032260) eswt_ctrl_combo_button_pane

0x440e,	// (0x00032268) eswt_ctrl_input_pane

0x4416,	// (0x00032270) popup_choice_list_window_cp70

0x441e,	// (0x00032278) eswt_ctrl_input_pane_t1

0x203b,	// (0x0002fe95) input_focus_pane_cp70

0xbd6e,	// (0x00039bc8) bg_button_pane_cp70_ParamLimits

0xbd6e,	// (0x00039bc8) bg_button_pane_cp70

0x442c,	// (0x00032286) eswt_ctrl_combo_button_pane_g1

0xc76d,	// (0x0003a5c7) wait_bar_pane_cp70

0x6a5e,	// (0x000348b8) bg_popup_window_pane_cp70_ParamLimits

0x6a5e,	// (0x000348b8) bg_popup_window_pane_cp70

0xc775,	// (0x0003a5cf) popup_eswt_tasktip_window_t1

0xc78b,	// (0x0003a5e5) wait_bar_pane_cp71_ParamLimits

0xc78b,	// (0x0003a5e5) wait_bar_pane_cp71

0xc797,	// (0x0003a5f1) grid_eswt_app_pane

0x5e6d,	// (0x00033cc7) scroll_pane_cp70

0x4434,	// (0x0003228e) cell_eswt_app_pane_ParamLimits

0x4434,	// (0x0003228e) cell_eswt_app_pane

0x445c,	// (0x000322b6) cell_eswt_app_pane_g1_ParamLimits

0x445c,	// (0x000322b6) cell_eswt_app_pane_g1

0x448b,	// (0x000322e5) cell_eswt_app_pane_g2_ParamLimits

0x448b,	// (0x000322e5) cell_eswt_app_pane_g2

0x0001,

0xfc44,	// (0x0003da9e) cell_eswt_app_pane_g_ParamLimits

0xfc44,	// (0x0003da9e) cell_eswt_app_pane_g

0x44b4,	// (0x0003230e) cell_eswt_app_pane_t1_ParamLimits

0x44b4,	// (0x0003230e) cell_eswt_app_pane_t1

0xc852,	// (0x0003a6ac) grid_highlight_pane_cp70_ParamLimits

0xc852,	// (0x0003a6ac) grid_highlight_pane_cp70

0x2c2f,	// (0x00030a89) set_content_pane_g1

0x6651,	// (0x000344ab) status_small_volume_pane

0xb1c9,	// (0x00039023) status_small_volume_pane_g1

0xb1d1,	// (0x0003902b) volume_small2_pane

0xb1da,	// (0x00039034) volume_small2_pane_g1

0xb1e3,	// (0x0003903d) volume_small2_pane_g2

0xb1ec,	// (0x00039046) volume_small2_pane_g3

0xb1f5,	// (0x0003904f) volume_small2_pane_g4

0xb1fe,	// (0x00039058) volume_small2_pane_g5

0xb207,	// (0x00039061) volume_small2_pane_g6

0xb210,	// (0x0003906a) volume_small2_pane_g7

0xb219,	// (0x00039073) volume_small2_pane_g8

0xb222,	// (0x0003907c) volume_small2_pane_g9

0xb22b,	// (0x00039085) volume_small2_pane_g10

0x0009,

0xfc49,	// (0x0003daa3) volume_small2_pane_g

0xc125,	// (0x00039f7f) fep_vkb_top_text_pane_g1_ParamLimits

0x4373,	// (0x000321cd) fep_vkb_top_text_pane_t1_ParamLimits

0xc3a4,	// (0x0003a1fe) popup_preview_fixed_window_g3_ParamLimits

0xc3a4,	// (0x0003a1fe) popup_preview_fixed_window_g3

0x3605,	// (0x0003145f) popup_toolbar_trans_pane

0x3e28,	// (0x00031c82) aid_height_set_list_ParamLimits

0x7baa,	// (0x00035a04) aid_size_parent_ParamLimits

0x5c37,	// (0x00033a91) list_highlight_pane_cp2_ParamLimits

0x2c2f,	// (0x00030a89) set_content_pane_g1_ParamLimits

0x3f9b,	// (0x00031df5) list_single_image_pane_ParamLimits

0x3f9b,	// (0x00031df5) list_single_image_pane

0x44e6,	// (0x00032340) aid_size_cell_image_ParamLimits

0x44e6,	// (0x00032340) aid_size_cell_image

0x44f3,	// (0x0003234d) grid_single_image_pane_ParamLimits

0x44f3,	// (0x0003234d) grid_single_image_pane

0x2c2f,	// (0x00030a89) list_single_image_pane_g1_ParamLimits

0x2c2f,	// (0x00030a89) list_single_image_pane_g1

0x5ad5,	// (0x0003392f) list_single_image_pane_g2_ParamLimits

0x5ad5,	// (0x0003392f) list_single_image_pane_g2

0x0001,

0xfc5e,	// (0x0003dab8) list_single_image_pane_g_ParamLimits

0xfc5e,	// (0x0003dab8) list_single_image_pane_g

0x83b7,	// (0x00036211) list_single_image_pane_t1_ParamLimits

0x83b7,	// (0x00036211) list_single_image_pane_t1

0x44ff,	// (0x00032359) cell_image_list_pane_ParamLimits

0x44ff,	// (0x00032359) cell_image_list_pane

0x4513,	// (0x0003236d) cell_image_list_pane_g1

0x451c,	// (0x00032376) cell_image_list_pane_g2

0x0001,

0xfc63,	// (0x0003dabd) cell_image_list_pane_g

0xc85e,	// (0x0003a6b8) aid_size_cell_tb_trans_pane

0x5abb,	// (0x00033915) bg_tb_trans_pane

0xc870,	// (0x0003a6ca) grid_tb_trans_pane

0x6970,	// (0x000347ca) bg_tb_trans_pane_g1

0x6978,	// (0x000347d2) bg_tb_trans_pane_g2

0x6980,	// (0x000347da) bg_tb_trans_pane_g3

0x6988,	// (0x000347e2) bg_tb_trans_pane_g4

0x6990,	// (0x000347ea) bg_tb_trans_pane_g5

0x69a8,	// (0x00034802) bg_tb_trans_pane_g6

0x69b0,	// (0x0003480a) bg_tb_trans_pane_g7

0x6998,	// (0x000347f2) bg_tb_trans_pane_g8

0x69a0,	// (0x000347fa) bg_tb_trans_pane_g9

0x0008,

0xfc68,	// (0x0003dac2) bg_tb_trans_pane_g

0xc884,	// (0x0003a6de) cell_toolbar_trans_pane_ParamLimits

0xc884,	// (0x0003a6de) cell_toolbar_trans_pane

0xbda9,	// (0x00039c03) cell_toolbar_trans_pane_g1

0x41e8,	// (0x00032042) list_form2_midp_pane_t1

0x41f6,	// (0x00032050) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0003d95f) list_form2_midp_pane_t

0xba4a,	// (0x000398a4) scroll_pane_cp51_ParamLimits

0xbc03,	// (0x00039a5d) form2_midp_wait_pane_g1

0xbc0c,	// (0x00039a66) form2_midp_wait_pane_g2

0xbc15,	// (0x00039a6f) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0003d974) form2_midp_wait_pane_g

0x239e,	// (0x000301f8) list_highlight_pane_cp21_ParamLimits

0xbc35,	// (0x00039a8f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbc44,	// (0x00039a9e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe28c,	// (0x0003c0e6) list_single_2graphic_im_pane_ParamLimits

0xe28c,	// (0x0003c0e6) list_single_2graphic_im_pane

0x4525,	// (0x0003237f) list_single_2graphic_im_pane_g1_ParamLimits

0x4525,	// (0x0003237f) list_single_2graphic_im_pane_g1

0x4536,	// (0x00032390) list_single_2graphic_im_pane_g2_ParamLimits

0x4536,	// (0x00032390) list_single_2graphic_im_pane_g2

0x4542,	// (0x0003239c) list_single_2graphic_im_pane_g3_ParamLimits

0x4542,	// (0x0003239c) list_single_2graphic_im_pane_g3

0x0003,

0xfc7b,	// (0x0003dad5) list_single_2graphic_im_pane_g_ParamLimits

0xfc7b,	// (0x0003dad5) list_single_2graphic_im_pane_g

0x4556,	// (0x000323b0) list_single_2graphic_im_pane_t1_ParamLimits

0x4556,	// (0x000323b0) list_single_2graphic_im_pane_t1

0xc3b0,	// (0x0003a20a) list_single_graphic_2heading_pane_fp_ParamLimits

0xc3b0,	// (0x0003a20a) list_single_graphic_2heading_pane_fp

0xddd2,	// (0x0003bc2c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xddd2,	// (0x0003bc2c) list_single_graphic_2heading_pane_fp_g1

0xc3c4,	// (0x0003a21e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc3c4,	// (0x0003a21e) list_single_graphic_2heading_pane_fp_g2

0xe1f9,	// (0x0003c053) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe1f9,	// (0x0003c053) list_single_graphic_2heading_pane_fp_g3

0xe2e8,	// (0x0003c142) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe2e8,	// (0x0003c142) list_single_graphic_2heading_pane_fp_g4

0xc3d0,	// (0x0003a22a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3d0,	// (0x0003a22a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003d9fc) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003d9fc) list_single_graphic_2heading_pane_fp_g

0xdf05,	// (0x0003bd5f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdf05,	// (0x0003bd5f) list_single_graphic_2heading_pane_fp_t1

0xde0a,	// (0x0003bc64) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xde0a,	// (0x0003bc64) list_single_graphic_2heading_pane_fp_t2

0xdf1b,	// (0x0003bd75) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdf1b,	// (0x0003bd75) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc84,	// (0x0003dade) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc84,	// (0x0003dade) list_single_graphic_2heading_pane_fp_t

0xbe34,	// (0x00039c8e) fep_hwr_write_pane_g5_ParamLimits

0xbe34,	// (0x00039c8e) fep_hwr_write_pane_g5

0xbe40,	// (0x00039c9a) fep_hwr_write_pane_g6_ParamLimits

0xbe40,	// (0x00039c9a) fep_hwr_write_pane_g6

0xc658,	// (0x0003a4b2) eswt_shell_pane_ParamLimits

0x6a5e,	// (0x000348b8) bg_popup_window_pane_cp18_ParamLimits

0x7b4e,	// (0x000359a8) heading_pane_cp70

0xc775,	// (0x0003a5cf) popup_eswt_tasktip_window_t1_ParamLimits

0x36a0,	// (0x000314fa) aid_touch_tab_arrow_left

0x36b4,	// (0x0003150e) aid_touch_tab_arrow_right

0x2277,	// (0x000300d1) title_pane_g3_ParamLimits

0x2277,	// (0x000300d1) title_pane_g3

0x5a8b,	// (0x000338e5) set_value_pane_g1

0x3605,	// (0x0003145f) popup_toolbar_trans_pane_ParamLimits

0xc85e,	// (0x0003a6b8) aid_size_cell_tb_trans_pane_ParamLimits

0x5abb,	// (0x00033915) bg_tb_trans_pane_ParamLimits

0xc870,	// (0x0003a6ca) grid_tb_trans_pane_ParamLimits

0x26f3,	// (0x0003054d) cont_note_pane_ParamLimits

0x26f3,	// (0x0003054d) cont_note_pane

0x2a27,	// (0x00030881) cont_snote2_single_text_pane_ParamLimits

0x2a27,	// (0x00030881) cont_snote2_single_text_pane

0x2a27,	// (0x00030881) cont_snote2_single_graphic_pane_ParamLimits

0x2a27,	// (0x00030881) cont_snote2_single_graphic_pane

0x705d,	// (0x00034eb7) cont_note_wait_pane_ParamLimits

0x705d,	// (0x00034eb7) cont_note_wait_pane

0x705d,	// (0x00034eb7) cont_note_image_pane_ParamLimits

0x705d,	// (0x00034eb7) cont_note_image_pane

0xc8b6,	// (0x0003a710) popup_note2_window_g1_ParamLimits

0xc8b6,	// (0x0003a710) popup_note2_window_g1

0xc8e7,	// (0x0003a741) popup_note2_window_t1_ParamLimits

0xc8e7,	// (0x0003a741) popup_note2_window_t1

0xc92c,	// (0x0003a786) popup_note2_window_t2_ParamLimits

0xc92c,	// (0x0003a786) popup_note2_window_t2

0xc971,	// (0x0003a7cb) popup_note2_window_t3_ParamLimits

0xc971,	// (0x0003a7cb) popup_note2_window_t3

0xc9b6,	// (0x0003a810) popup_note2_window_t4_ParamLimits

0xc9b6,	// (0x0003a810) popup_note2_window_t4

0x2777,	// (0x000305d1) popup_note2_window_t5_ParamLimits

0x2777,	// (0x000305d1) popup_note2_window_t5

0x0004,

0xfc90,	// (0x0003daea) popup_note2_window_t_ParamLimits

0xfc90,	// (0x0003daea) popup_note2_window_t

0xc9e5,	// (0x0003a83f) popup_note2_image_window_g1_ParamLimits

0xc9e5,	// (0x0003a83f) popup_note2_image_window_g1

0xc9f1,	// (0x0003a84b) popup_note2_image_window_g2_ParamLimits

0xc9f1,	// (0x0003a84b) popup_note2_image_window_g2

0x0001,

0xfc9b,	// (0x0003daf5) popup_note2_image_window_g_ParamLimits

0xfc9b,	// (0x0003daf5) popup_note2_image_window_g

0xca03,	// (0x0003a85d) popup_note2_image_window_t1_ParamLimits

0xca03,	// (0x0003a85d) popup_note2_image_window_t1

0xca1b,	// (0x0003a875) popup_note2_image_window_t2_ParamLimits

0xca1b,	// (0x0003a875) popup_note2_image_window_t2

0xca33,	// (0x0003a88d) popup_note2_image_window_t3_ParamLimits

0xca33,	// (0x0003a88d) popup_note2_image_window_t3

0x0002,

0xfca0,	// (0x0003dafa) popup_note2_image_window_t_ParamLimits

0xfca0,	// (0x0003dafa) popup_note2_image_window_t

0x706b,	// (0x00034ec5) popup_note2_wait_window_g1_ParamLimits

0x706b,	// (0x00034ec5) popup_note2_wait_window_g1

0x7077,	// (0x00034ed1) popup_note2_wait_window_g2_ParamLimits

0x7077,	// (0x00034ed1) popup_note2_wait_window_g2

0x7083,	// (0x00034edd) popup_note2_wait_window_g3_ParamLimits

0x7083,	// (0x00034edd) popup_note2_wait_window_g3

0x0002,

0xf87a,	// (0x0003d6d4) popup_note2_wait_window_g_ParamLimits

0xf87a,	// (0x0003d6d4) popup_note2_wait_window_g

0xca4f,	// (0x0003a8a9) popup_note2_wait_window_t1_ParamLimits

0xca4f,	// (0x0003a8a9) popup_note2_wait_window_t1

0xca6d,	// (0x0003a8c7) popup_note2_wait_window_t2_ParamLimits

0xca6d,	// (0x0003a8c7) popup_note2_wait_window_t2

0xca8b,	// (0x0003a8e5) popup_note2_wait_window_t3_ParamLimits

0xca8b,	// (0x0003a8e5) popup_note2_wait_window_t3

0xca9d,	// (0x0003a8f7) popup_note2_wait_window_t4_ParamLimits

0xca9d,	// (0x0003a8f7) popup_note2_wait_window_t4

0x0003,

0xfca7,	// (0x0003db01) popup_note2_wait_window_t_ParamLimits

0xfca7,	// (0x0003db01) popup_note2_wait_window_t

0xcaaf,	// (0x0003a909) wait_bar2_pane_ParamLimits

0xcaaf,	// (0x0003a909) wait_bar2_pane

0xcac7,	// (0x0003a921) popup_snote2_single_text_window_g1_ParamLimits

0xcac7,	// (0x0003a921) popup_snote2_single_text_window_g1

0xcaef,	// (0x0003a949) popup_snote2_single_text_window_t1_ParamLimits

0xcaef,	// (0x0003a949) popup_snote2_single_text_window_t1

0xcb3b,	// (0x0003a995) popup_snote2_single_text_window_t2_ParamLimits

0xcb3b,	// (0x0003a995) popup_snote2_single_text_window_t2

0xcb87,	// (0x0003a9e1) popup_snote2_single_text_window_t3_ParamLimits

0xcb87,	// (0x0003a9e1) popup_snote2_single_text_window_t3

0xcbc8,	// (0x0003aa22) popup_snote2_single_text_window_t4_ParamLimits

0xcbc8,	// (0x0003aa22) popup_snote2_single_text_window_t4

0xcbfe,	// (0x0003aa58) popup_snote2_single_text_window_t5_ParamLimits

0xcbfe,	// (0x0003aa58) popup_snote2_single_text_window_t5

0x0004,

0xfcb0,	// (0x0003db0a) popup_snote2_single_text_window_t_ParamLimits

0xfcb0,	// (0x0003db0a) popup_snote2_single_text_window_t

0xcc29,	// (0x0003aa83) popup_snote2_single_graphic_window_g1_ParamLimits

0xcc29,	// (0x0003aa83) popup_snote2_single_graphic_window_g1

0xcc51,	// (0x0003aaab) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc51,	// (0x0003aaab) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbb,	// (0x0003db15) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbb,	// (0x0003db15) popup_snote2_single_graphic_window_g

0xcc79,	// (0x0003aad3) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc79,	// (0x0003aad3) popup_snote2_single_graphic_window_t1

0xccc5,	// (0x0003ab1f) popup_snote2_single_graphic_window_t2_ParamLimits

0xccc5,	// (0x0003ab1f) popup_snote2_single_graphic_window_t2

0xcb87,	// (0x0003a9e1) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb87,	// (0x0003a9e1) popup_snote2_single_graphic_window_t3

0xcbc8,	// (0x0003aa22) popup_snote2_single_graphic_window_t4_ParamLimits

0xcbc8,	// (0x0003aa22) popup_snote2_single_graphic_window_t4

0xcbfe,	// (0x0003aa58) popup_snote2_single_graphic_window_t5_ParamLimits

0xcbfe,	// (0x0003aa58) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc0,	// (0x0003db1a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc0,	// (0x0003db1a) popup_snote2_single_graphic_window_t

0x848e,	// (0x000362e8) clock_nsta_pane_cp2_t1

0x848e,	// (0x000362e8) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0003d935) clock_nsta_pane_cp2_t

0xd8cf,	// (0x0003b729) form_field_data_wide_pane_g1_ParamLimits

0x2c2f,	// (0x00030a89) form_field_data_wide_pane_g2_ParamLimits

0x2c2f,	// (0x00030a89) form_field_data_wide_pane_g2

0x5ad5,	// (0x0003392f) form_field_data_wide_pane_g3_ParamLimits

0x5ad5,	// (0x0003392f) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003d51e) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003d51e) form_field_data_wide_pane_g

0x4123,	// (0x00031f7d) grid_touch_3_pane_ParamLimits

0x4123,	// (0x00031f7d) grid_touch_3_pane

0x4587,	// (0x000323e1) cell_touch_3_pane_ParamLimits

0x4587,	// (0x000323e1) cell_touch_3_pane

0xbda9,	// (0x00039c03) cell_touch_3_pane_g1

0xbda9,	// (0x00039c03) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0003d9ba) cell_touch_3_pane_g

0x27a9,	// (0x00030603) cont_query_data_pane

0x27b1,	// (0x0003060b) cont_query_data_pane_cp1

0xcd11,	// (0x0003ab6b) button_value_adjust_pane_cp7

0xcd19,	// (0x0003ab73) query_popup_pane_cp3

0x6010,	// (0x00033e6a) bg_popup_sub_pane_cp22_ParamLimits

0x9861,	// (0x000376bb) navi_navi_volume_pane_cp2

0x9879,	// (0x000376d3) popup_side_volume_key_window_g2

0x9885,	// (0x000376df) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003d5b0) popup_side_volume_key_window_g

0x989f,	// (0x000376f9) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003d5b7) popup_side_volume_key_window_t

0x625a,	// (0x000340b4) popup_side_volume_key_window_ParamLimits

0x198d,	// (0x0002f7e7) list_double_graphic_pane_g4_ParamLimits

0x198d,	// (0x0002f7e7) list_double_graphic_pane_g4

0x1e41,	// (0x0002fc9b) list_single_2heading_msg_pane_ParamLimits

0x1e41,	// (0x0002fc9b) list_single_2heading_msg_pane

0x1ea9,	// (0x0002fd03) list_single_2heading_msg_pane_g1_ParamLimits

0x1ea9,	// (0x0002fd03) list_single_2heading_msg_pane_g1

0x1eb5,	// (0x0002fd0f) list_single_2heading_msg_pane_g2_ParamLimits

0x1eb5,	// (0x0002fd0f) list_single_2heading_msg_pane_g2

0x1ec8,	// (0x0002fd22) list_single_2heading_msg_pane_g3_ParamLimits

0x1ec8,	// (0x0002fd22) list_single_2heading_msg_pane_g3

0x1ed4,	// (0x0002fd2e) list_single_2heading_msg_pane_g4_ParamLimits

0x1ed4,	// (0x0002fd2e) list_single_2heading_msg_pane_g4

0x0003,

0xfccb,	// (0x0003db25) list_single_2heading_msg_pane_g_ParamLimits

0xfccb,	// (0x0003db25) list_single_2heading_msg_pane_g

0x1eec,	// (0x0002fd46) list_single_2heading_msg_pane_t1_ParamLimits

0x1eec,	// (0x0002fd46) list_single_2heading_msg_pane_t1

0x1f14,	// (0x0002fd6e) list_single_2heading_msg_pane_t2_ParamLimits

0x1f14,	// (0x0002fd6e) list_single_2heading_msg_pane_t2

0x1f7f,	// (0x0002fdd9) list_single_2heading_msg_pane_t3_ParamLimits

0x1f7f,	// (0x0002fdd9) list_single_2heading_msg_pane_t3

0xdff9,	// (0x0003be53) list_single_2heading_msg_pane_t4_ParamLimits

0xdff9,	// (0x0003be53) list_single_2heading_msg_pane_t4

0x0003,

0xfcd4,	// (0x0003db2e) list_single_2heading_msg_pane_t_ParamLimits

0xfcd4,	// (0x0003db2e) list_single_2heading_msg_pane_t

0x2283,	// (0x000300dd) title_pane_g4_ParamLimits

0x2283,	// (0x000300dd) title_pane_g4

0x956e,	// (0x000373c8) title_pane_stacon_g3_ParamLimits

0x956e,	// (0x000373c8) title_pane_stacon_g3

0xc8aa,	// (0x0003a704) list_single_2graphic_im_pane_g4_ParamLimits

0xc8aa,	// (0x0003a704) list_single_2graphic_im_pane_g4

0x7964,	// (0x000357be) popup_side_volume_key_window_cp

0x7e27,	// (0x00035c81) main_idle_act2_pane_t1

0xa3cb,	// (0x00038225) toolbar_button_pane_g10

0x2b84,	// (0x000309de) popup_toolbar_window_cp1

0x847f,	// (0x000362d9) clock_nsta_pane_cp_t1

0x847f,	// (0x000362d9) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0003d930) clock_nsta_pane_cp_t

0x9861,	// (0x000376bb) navi_navi_volume_pane_cp2_ParamLimits

0x986d,	// (0x000376c7) popup_side_volume_key_window_g1_ParamLimits

0x9879,	// (0x000376d3) popup_side_volume_key_window_g2_ParamLimits

0x9885,	// (0x000376df) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003d5b0) popup_side_volume_key_window_g_ParamLimits

0xae49,	// (0x00038ca3) fep_hwr_aid_pane

0xaeea,	// (0x00038d44) bg_fep_hwr_top_pane_g4_ParamLimits

0xbe04,	// (0x00039c5e) fep_hwr_top_pane_g1_ParamLimits

0xbe16,	// (0x00039c70) fep_hwr_top_pane_g2_ParamLimits

0xaf0a,	// (0x00038d64) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0003d985) fep_hwr_top_pane_g_ParamLimits

0xaf1f,	// (0x00038d79) fep_hwr_top_text_pane_ParamLimits

0x776d,	// (0x000355c7) aid_touch_tab_arrow_arrow_2

0x7764,	// (0x000355be) aid_touch_tab_arrow_left_2

0xae5d,	// (0x00038cb7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xae90,	// (0x00038cea) fep_hwr_prediction_pane

0xbf55,	// (0x00039daf) fep_vkb_prediction_pane

0x4353,	// (0x000321ad) fep_vkb_side_pane_g3_ParamLimits

0x4353,	// (0x000321ad) fep_vkb_side_pane_g3

0xb08e,	// (0x00038ee8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb0f8,	// (0x00038f52) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb105,	// (0x00038f5f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbda,	// (0x0003da34) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb234,	// (0x0003908e) fep_hwr_prediction_pane_g1

0xb23e,	// (0x00039098) fep_hwr_prediction_pane_g2

0xb246,	// (0x000390a0) fep_hwr_prediction_pane_g3

0xb24e,	// (0x000390a8) fep_hwr_prediction_pane_g4

0x0003,

0xfcdd,	// (0x0003db37) fep_hwr_prediction_pane_g

0xcd2a,	// (0x0003ab84) fep_vkb_prediction_pane_g1

0xcd34,	// (0x0003ab8e) fep_vkb_prediction_pane_g2

0xcd3c,	// (0x0003ab96) fep_vkb_prediction_pane_g3

0xcd44,	// (0x0003ab9e) fep_vkb_prediction_pane_g4

0x0003,

0xfce6,	// (0x0003db40) fep_vkb_prediction_pane_g

0xa88e,	// (0x000386e8) slider_set_pane_g3

0xa8a2,	// (0x000386fc) slider_set_pane_g4

0xa8ba,	// (0x00038714) slider_set_pane_g5

0xa88e,	// (0x000386e8) slider_set_pane_g6

0xf135,	// (0x0003cf8f) slider_set_pane_g7

0x7bcd,	// (0x00035a27) slider_form_pane_g3

0x7bd6,	// (0x00035a30) slider_form_pane_g4

0x7bde,	// (0x00035a38) slider_form_pane_g5

0x7bcd,	// (0x00035a27) slider_form_pane_g6

0x3f5a,	// (0x00031db4) slider_form_pane_g7

0x8070,	// (0x00035eca) slider_set_pane_vc_g3

0x8079,	// (0x00035ed3) slider_set_pane_vc_g4

0x8082,	// (0x00035edc) slider_set_pane_vc_g5

0x8070,	// (0x00035eca) slider_set_pane_vc_g6

0x808b,	// (0x00035ee5) slider_set_pane_vc_g7

0x8070,	// (0x00035eca) slider_form_pane_vc_g1

0x8079,	// (0x00035ed3) slider_form_pane_vc_g2

0x8082,	// (0x00035edc) slider_form_pane_vc_g3

0x8070,	// (0x00035eca) slider_form_pane_vc_g4

0x821f,	// (0x00036079) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0003d916) slider_form_pane_vc_g

0x203b,	// (0x0002fe95) main_idle_act3_pane

0xcd4c,	// (0x0003aba6) ai3_links_pane

0x45ce,	// (0x00032428) popup_ai3_data_window_ParamLimits

0x45ce,	// (0x00032428) popup_ai3_data_window

0x203b,	// (0x0002fe95) grid_ai3_links_pane

0x45e6,	// (0x00032440) cell_ai3_links_pane_ParamLimits

0x45e6,	// (0x00032440) cell_ai3_links_pane

0xcd55,	// (0x0003abaf) bg_popup_sub_pane_cp11

0xcd62,	// (0x0003abbc) cell_ai3_links_pane_g1

0x203b,	// (0x0002fe95) bg_popup_sub_pane_cp12

0xcd87,	// (0x0003abe1) heading_ai3_data_pane

0xcd8f,	// (0x0003abe9) list_ai3_gene_pane

0xcd9b,	// (0x0003abf5) popup_ai3_data_window_g1

0xcda3,	// (0x0003abfd) heading_ai3_data_pane_g1

0xcdab,	// (0x0003ac05) heading_ai3_data_pane_t1

0xcdb9,	// (0x0003ac13) list_double_ai3_gene_pane_ParamLimits

0xcdb9,	// (0x0003ac13) list_double_ai3_gene_pane

0xcdc6,	// (0x0003ac20) list_single_ai3_gene_pane_ParamLimits

0xcdc6,	// (0x0003ac20) list_single_ai3_gene_pane

0xbd6e,	// (0x00039bc8) list_highlight_pane_cp7_ParamLimits

0xbd6e,	// (0x00039bc8) list_highlight_pane_cp7

0xcdd3,	// (0x0003ac2d) list_single_a13_gene_pane_t1_ParamLimits

0xcdd3,	// (0x0003ac2d) list_single_a13_gene_pane_t1

0xcdea,	// (0x0003ac44) list_single_ai3_gene_pane_g1

0xcdf3,	// (0x0003ac4d) list_single_ai3_gene_pane_g2

0x0001,

0xfcef,	// (0x0003db49) list_single_ai3_gene_pane_g

0xcdfb,	// (0x0003ac55) list_double_ai3_gene_pane_g1_ParamLimits

0xcdfb,	// (0x0003ac55) list_double_ai3_gene_pane_g1

0xce07,	// (0x0003ac61) list_double_ai3_gene_pane_t1_ParamLimits

0xce07,	// (0x0003ac61) list_double_ai3_gene_pane_t1

0xce23,	// (0x0003ac7d) list_double_ai3_gene_pane_t2_ParamLimits

0xce23,	// (0x0003ac7d) list_double_ai3_gene_pane_t2

0xce38,	// (0x0003ac92) list_double_ai3_gene_pane_t3_ParamLimits

0xce38,	// (0x0003ac92) list_double_ai3_gene_pane_t3

0x0002,

0xfcf4,	// (0x0003db4e) list_double_ai3_gene_pane_t_ParamLimits

0xfcf4,	// (0x0003db4e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdf31,	// (0x0003bd8b) aid_size_min_col_2

0x45ba,	// (0x00032414) aid_size_min_msg_ParamLimits

0x45ba,	// (0x00032414) aid_size_min_msg

0x4367,	// (0x000321c1) fep_vkb_top_text_pane_g2_ParamLimits

0x4367,	// (0x000321c1) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0003d9b5) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0003d9b5) fep_vkb_top_text_pane_g

0x203b,	// (0x0002fe95) main_hc_apps_shell_pane

0xce55,	// (0x0003acaf) grid_hc_apps_pane_ParamLimits

0xce55,	// (0x0003acaf) grid_hc_apps_pane

0xce64,	// (0x0003acbe) list_hc_apps_pane

0xce6c,	// (0x0003acc6) scroll_pane_cp37_ParamLimits

0xce6c,	// (0x0003acc6) scroll_pane_cp37

0x45fc,	// (0x00032456) cell_hc_apps_pane_ParamLimits

0x45fc,	// (0x00032456) cell_hc_apps_pane

0x4696,	// (0x000324f0) cell_hc_apps_pane_g1_ParamLimits

0x4696,	// (0x000324f0) cell_hc_apps_pane_g1

0xce78,	// (0x0003acd2) cell_hc_apps_pane_g2_ParamLimits

0xce78,	// (0x0003acd2) cell_hc_apps_pane_g2

0xce94,	// (0x0003acee) cell_hc_apps_pane_g3_ParamLimits

0xce94,	// (0x0003acee) cell_hc_apps_pane_g3

0x0002,

0xfcfb,	// (0x0003db55) cell_hc_apps_pane_g_ParamLimits

0xfcfb,	// (0x0003db55) cell_hc_apps_pane_g

0x46c3,	// (0x0003251d) cell_hc_apps_pane_t1_ParamLimits

0x46c3,	// (0x0003251d) cell_hc_apps_pane_t1

0x26f3,	// (0x0003054d) grid_highlight_pane_cp10_ParamLimits

0x26f3,	// (0x0003054d) grid_highlight_pane_cp10

0x4701,	// (0x0003255b) list_single_hc_apps_pane_ParamLimits

0x4701,	// (0x0003255b) list_single_hc_apps_pane

0x472d,	// (0x00032587) list_single_hc_apps_pane_g1

0x4746,	// (0x000325a0) list_single_hc_apps_pane_g2

0x0001,

0xfd02,	// (0x0003db5c) list_single_hc_apps_pane_g

0x475f,	// (0x000325b9) list_single_hc_apps_pane_g2_copy1

0x1fed,	// (0x0002fe47) list_single_hc_apps_pane_t1

0x239e,	// (0x000301f8) bg_set_opt_pane_cp_ParamLimits

0x9279,	// (0x000370d3) setting_slider_pane_t1_ParamLimits

0xedf9,	// (0x0003cc53) setting_slider_pane_t2_ParamLimits

0xee12,	// (0x0003cc6c) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003d3fc) setting_slider_pane_t_ParamLimits

0x92bf,	// (0x00037119) slider_set_pane_ParamLimits

0x9be4,	// (0x00037a3e) control_pane_g5_ParamLimits

0x9be4,	// (0x00037a3e) control_pane_g5

0x7b95,	// (0x000359ef) slider_set_pane_g1_ParamLimits

0xa882,	// (0x000386dc) slider_set_pane_g2_ParamLimits

0xa88e,	// (0x000386e8) slider_set_pane_g3_ParamLimits

0xa8a2,	// (0x000386fc) slider_set_pane_g4_ParamLimits

0xa8ba,	// (0x00038714) slider_set_pane_g5_ParamLimits

0xa88e,	// (0x000386e8) slider_set_pane_g6_ParamLimits

0xf135,	// (0x0003cf8f) slider_set_pane_g7_ParamLimits

0xf996,	// (0x0003d7f0) slider_set_pane_g_ParamLimits

0x239e,	// (0x000301f8) navi_icon_text_pane_ParamLimits

0x3672,	// (0x000314cc) aid_fill_nsta_2_ParamLimits

0x36a0,	// (0x000314fa) aid_touch_tab_arrow_left_ParamLimits

0x36b4,	// (0x0003150e) aid_touch_tab_arrow_right_ParamLimits

0x3750,	// (0x000315aa) clock_nsta_pane_ParamLimits

0x7746,	// (0x000355a0) navi_icon_pane_g1_ParamLimits

0x7752,	// (0x000355ac) navi_text_pane_t1_ParamLimits

0xadbf,	// (0x00038c19) navi_icon_text_pane_g1_ParamLimits

0xadcb,	// (0x00038c25) navi_icon_text_pane_t1_ParamLimits

0x472d,	// (0x00032587) list_single_hc_apps_pane_g1_ParamLimits

0x4746,	// (0x000325a0) list_single_hc_apps_pane_g2_ParamLimits

0xfd02,	// (0x0003db5c) list_single_hc_apps_pane_g_ParamLimits

0x475f,	// (0x000325b9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1fed,	// (0x0002fe47) list_single_hc_apps_pane_t1_ParamLimits

0xed86,	// (0x0003cbe0) popup_toolbar2_fixed_window_ParamLimits

0xed86,	// (0x0003cbe0) popup_toolbar2_fixed_window

0x35fd,	// (0x00031457) popup_toolbar2_float_window

0x203b,	// (0x0002fe95) bg_popup_sub_pane_cp27

0xceb6,	// (0x0003ad10) grid_toolbar2_float_pane

0x203b,	// (0x0002fe95) bg_popup_sub_pane_cp26

0xceb6,	// (0x0003ad10) grid_toolbar2_fixed_pane

0x477b,	// (0x000325d5) cell_toolbar2_fixed_pane_ParamLimits

0x477b,	// (0x000325d5) cell_toolbar2_fixed_pane

0x4796,	// (0x000325f0) cell_toolbar2_fixed_pane_g1

0xcebe,	// (0x0003ad18) toolbar2_fixed_button_pane

0x6970,	// (0x000347ca) toolbar2_fixed_button_pane_g1

0x6978,	// (0x000347d2) toolbar2_fixed_button_pane_g2

0x6980,	// (0x000347da) toolbar2_fixed_button_pane_g3

0x6988,	// (0x000347e2) toolbar2_fixed_button_pane_g4

0x6990,	// (0x000347ea) toolbar2_fixed_button_pane_g5

0x6998,	// (0x000347f2) toolbar2_fixed_button_pane_g6

0x69a0,	// (0x000347fa) toolbar2_fixed_button_pane_g7

0x69a8,	// (0x00034802) toolbar2_fixed_button_pane_g8

0x69b0,	// (0x0003480a) toolbar2_fixed_button_pane_g9

0x0008,

0xf898,	// (0x0003d6f2) toolbar2_fixed_button_pane_g

0xcec6,	// (0x0003ad20) cell_toolbar2_float_pane_ParamLimits

0xcec6,	// (0x0003ad20) cell_toolbar2_float_pane

0xced7,	// (0x0003ad31) cell_toolbar2_float_pane_g1

0xcebe,	// (0x0003ad18) toolbar2_fixed_button_pane_cp

0x431c,	// (0x00032176) fep_vkb_accented_list_pane_ParamLimits

0x431c,	// (0x00032176) fep_vkb_accented_list_pane

0xb06e,	// (0x00038ec8) bg_popup_fep_shadow_pane_g9

0x6462,	// (0x000342bc) bg_popup_fep_shadow_pane_cp3

0x5be5,	// (0x00033a3f) list_accented_list_pane

0xcee0,	// (0x0003ad3a) list_single_accented_list_pane_ParamLimits

0xcee0,	// (0x0003ad3a) list_single_accented_list_pane

0x6462,	// (0x000342bc) list_highlight_pane_cp10

0xcef1,	// (0x0003ad4b) list_single_accented_list_pane_t1

0x353f,	// (0x00031399) popup_slider_window_ParamLimits

0x353f,	// (0x00031399) popup_slider_window

0xcd21,	// (0x0003ab7b) aid_indentation_list_msg

0x4875,	// (0x000326cf) bg_popup_window_pane_cp19

0xcf57,	// (0x0003adb1) popup_slider_window_g1

0xcf73,	// (0x0003adcd) popup_slider_window_g2

0xcf8f,	// (0x0003ade9) popup_slider_window_g3

0x0005,

0xfd07,	// (0x0003db61) popup_slider_window_g

0xcfab,	// (0x0003ae05) popup_slider_window_t1

0xcfef,	// (0x0003ae49) small_volume_slider_vertical_pane

0xbda9,	// (0x00039c03) small_volume_slider_vertical_pane_g1

0xbda9,	// (0x00039c03) small_volume_slider_vertical_pane_g2

0xd00b,	// (0x0003ae65) small_volume_slider_vertical_pane_g3

0x0002,

0xfd19,	// (0x0003db73) small_volume_slider_vertical_pane_g

0xed0a,	// (0x0003cb64) area_side_right_pane_ParamLimits

0xed0a,	// (0x0003cb64) area_side_right_pane

0xf198,	// (0x0003cff2) aid_size_side_button_ParamLimits

0xf198,	// (0x0003cff2) aid_size_side_button

0xf1b1,	// (0x0003d00b) grid_sctrl_middle_pane_ParamLimits

0xf1b1,	// (0x0003d00b) grid_sctrl_middle_pane

0xb286,	// (0x000390e0) sctrl_sk_bottom_pane

0xb297,	// (0x000390f1) sctrl_sk_top_pane

0xb2a9,	// (0x00039103) aid_touch_sctrl_top

0xb2b6,	// (0x00039110) bg_sctrl_sk_pane_ParamLimits

0xb2b6,	// (0x00039110) bg_sctrl_sk_pane

0xb2c4,	// (0x0003911e) sctrl_sk_top_pane_g1

0xb2d1,	// (0x0003912b) sctrl_sk_top_pane_t1

0xb2a9,	// (0x00039103) aid_touch_sctrl_bottom

0xb2b6,	// (0x00039110) bg_sctrl_sk_pane_cp_ParamLimits

0xb2b6,	// (0x00039110) bg_sctrl_sk_pane_cp

0xb2ec,	// (0x00039146) sctrl_sk_bottom_pane_g1

0xb2d1,	// (0x0003912b) sctrl_sk_bottom_pane_t1

0xf1c7,	// (0x0003d021) cell_sctrl_middle_pane_ParamLimits

0xf1c7,	// (0x0003d021) cell_sctrl_middle_pane

0xf1d8,	// (0x0003d032) aid_touch_sctrl_middle_ParamLimits

0xf1d8,	// (0x0003d032) aid_touch_sctrl_middle

0xf1e5,	// (0x0003d03f) bg_sctrl_middle_pane_ParamLimits

0xf1e5,	// (0x0003d03f) bg_sctrl_middle_pane

0xb8f4,	// (0x0003974e) cell_sctrl_middle_pane_g1_ParamLimits

0xb8f4,	// (0x0003974e) cell_sctrl_middle_pane_g1

0xf1f3,	// (0x0003d04d) cell_sctrl_middle_pane_g2_ParamLimits

0xf1f3,	// (0x0003d04d) cell_sctrl_middle_pane_g2

0x0001,

0xfd25,	// (0x0003db7f) cell_sctrl_middle_pane_g_ParamLimits

0xfd25,	// (0x0003db7f) cell_sctrl_middle_pane_g

0x6970,	// (0x000347ca) bg_sctrl_middle_pane_g1

0x6980,	// (0x000347da) bg_sctrl_middle_pane_g2

0x6978,	// (0x000347d2) bg_sctrl_middle_pane_g3

0x6990,	// (0x000347ea) bg_sctrl_middle_pane_g4

0x6988,	// (0x000347e2) bg_sctrl_middle_pane_g5

0x6998,	// (0x000347f2) bg_sctrl_middle_pane_g6

0x69a0,	// (0x000347fa) bg_sctrl_middle_pane_g7

0x69b0,	// (0x0003480a) bg_sctrl_middle_pane_g8

0x0007,

0xfd2a,	// (0x0003db84) bg_sctrl_middle_pane_g

0x69a8,	// (0x00034802) bg_sctrl_middle_pane_g8_copy1

0x6970,	// (0x000347ca) bg_sctrl_sk_pane_g1

0x6978,	// (0x000347d2) bg_sctrl_sk_pane_g2

0x6980,	// (0x000347da) bg_sctrl_sk_pane_g3

0x0008,

0xf898,	// (0x0003d6f2) bg_sctrl_sk_pane_g

0x2b49,	// (0x000309a3) aid_size_touch_scroll_bar

0x6988,	// (0x000347e2) bg_sctrl_sk_pane_g4

0x6990,	// (0x000347ea) bg_sctrl_sk_pane_g5

0x6998,	// (0x000347f2) bg_sctrl_sk_pane_g6

0x69a0,	// (0x000347fa) bg_sctrl_sk_pane_g7

0x69a8,	// (0x00034802) bg_sctrl_sk_pane_g8

0x69b0,	// (0x0003480a) bg_sctrl_sk_pane_g9

0x66e6,	// (0x00034540) popup_fep_china_hwr2_fs_candidate_window

0x313a,	// (0x00030f94) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x313a,	// (0x00030f94) popup_fep_china_hwr2_fs_control_window

0xb08e,	// (0x00038ee8) sctrl_sk_top_pane_g2

0x0001,

0xfd20,	// (0x0003db7a) sctrl_sk_top_pane_g

0x4995,	// (0x000327ef) aid_fep_china_hwr2_fs_cell_ParamLimits

0x4995,	// (0x000327ef) aid_fep_china_hwr2_fs_cell

0x49a9,	// (0x00032803) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x49a9,	// (0x00032803) bg_popup_fep_shadow_pane_cp4

0x49c0,	// (0x0003281a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x49c0,	// (0x0003281a) bg_popup_fep_shadow_pane_cp5

0x49d2,	// (0x0003282c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x49d2,	// (0x0003282c) popup_fep_china_hwr2_fs_control_bar_grid

0x49e6,	// (0x00032840) popup_fep_china_hwr2_fs_control_funtion_grid

0xd014,	// (0x0003ae6e) aid_fep_china_hwr2_fs_candi_cell

0x203b,	// (0x0002fe95) bg_popup_fep_shadow_pane_cp6

0xd01e,	// (0x0003ae78) popup_fep_china_hwr2_fs_candidate_grid

0x49ee,	// (0x00032848) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x49ee,	// (0x00032848) cell_fep_china_hwr2_fs_funtion_grid

0xbda9,	// (0x00039c03) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd026,	// (0x0003ae80) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd026,	// (0x0003ae80) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd034,	// (0x0003ae8e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd034,	// (0x0003ae8e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3b,	// (0x0003db95) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3b,	// (0x0003db95) cell_fep_china_hwr2_fs_funtion_grid_g

0x4a06,	// (0x00032860) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x4a06,	// (0x00032860) cell_fep_china_hwr2_fs_funtion_grid_t1

0x4a1b,	// (0x00032875) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x4a1b,	// (0x00032875) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd40,	// (0x0003db9a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd40,	// (0x0003db9a) cell_fep_china_hwr2_fs_funtion_grid_t

0xd04a,	// (0x0003aea4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd052,	// (0x0003aeac) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd05a,	// (0x0003aeb4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd45,	// (0x0003db9f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd062,	// (0x0003aebc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd062,	// (0x0003aebc) cell_fep_china_hwr2_fs_candidate_grid

0xd07b,	// (0x0003aed5) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd083,	// (0x0003aedd) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbda9,	// (0x00039c03) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbda9,	// (0x00039c03) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0003d9ba) cell_fep_china_hwr2_fs_candidate_grid_g

0xd08b,	// (0x0003aee5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x67d5,	// (0x0003462f) clock_nsta_pane_cp_24_ParamLimits

0x67d5,	// (0x0003462f) clock_nsta_pane_cp_24

0x6832,	// (0x0003468c) indicator_nsta_pane_cp_24_ParamLimits

0x6832,	// (0x0003468c) indicator_nsta_pane_cp_24

0x7651,	// (0x000354ab) heading_pane_g1

0x0001,

0xf8fd,	// (0x0003d757) heading_pane_g

0x404b,	// (0x00031ea5) grid_sct_catagory_button_pane

0x6e4c,	// (0x00034ca6) scroll_pane_cp5_ParamLimits

0xba56,	// (0x000398b0) button_value_adjust_pane_cp5_ParamLimits

0xba56,	// (0x000398b0) button_value_adjust_pane_cp5

0xbb33,	// (0x0003998d) form2_midp_time_pane_ParamLimits

0xd099,	// (0x0003aef3) cell_sct_catagory_button_pane_ParamLimits

0xd099,	// (0x0003aef3) cell_sct_catagory_button_pane

0xbd6e,	// (0x00039bc8) bg_button_pane_cp01_ParamLimits

0xbd6e,	// (0x00039bc8) bg_button_pane_cp01

0xbda9,	// (0x00039c03) cell_sct_catagory_button_pane_g1

0x35ae,	// (0x00031408) popup_tb_extension_window

0x4a37,	// (0x00032891) aid_size_cell_ext_ParamLimits

0x4a37,	// (0x00032891) aid_size_cell_ext

0x2a27,	// (0x00030881) bg_tb_trans_pane_cp1_ParamLimits

0x2a27,	// (0x00030881) bg_tb_trans_pane_cp1

0x4a5d,	// (0x000328b7) grid_tb_ext_pane_ParamLimits

0x4a5d,	// (0x000328b7) grid_tb_ext_pane

0x4a93,	// (0x000328ed) cell_tb_ext_pane_ParamLimits

0x4a93,	// (0x000328ed) cell_tb_ext_pane

0x4ab7,	// (0x00032911) cell_tb_ext_pane_g1_ParamLimits

0x4ab7,	// (0x00032911) cell_tb_ext_pane_g1

0xd0ab,	// (0x0003af05) cell_tb_ext_pane_t1

0x26f3,	// (0x0003054d) list_highlight_pane_cp11_ParamLimits

0x26f3,	// (0x0003054d) list_highlight_pane_cp11

0x910c,	// (0x00036f66) popup_uni_indicator_window_ParamLimits

0x910c,	// (0x00036f66) popup_uni_indicator_window

0x5abb,	// (0x00033915) bg_popup_sub_pane_cp14

0xd0c6,	// (0x0003af20) list_uniindi_pane

0xd0d2,	// (0x0003af2c) uniindi_top_pane

0x26f3,	// (0x0003054d) bg_uniindi_top_pane

0xd0f1,	// (0x0003af4b) uniindi_top_pane_g1

0xd107,	// (0x0003af61) uniindi_top_pane_g2

0x0003,

0xfd4c,	// (0x0003dba6) uniindi_top_pane_g

0xd131,	// (0x0003af8b) uniindi_top_pane_t1

0xd15b,	// (0x0003afb5) list_single_uniindi_pane_ParamLimits

0xd15b,	// (0x0003afb5) list_single_uniindi_pane

0xbda9,	// (0x00039c03) bg_uniindi_top_pane_g1

0xd16d,	// (0x0003afc7) list_single_uniindi_pane_g1

0xd180,	// (0x0003afda) list_single_uniindi_pane_t1

0x8faa,	// (0x00036e04) control_bg_pane

0xd1a5,	// (0x0003afff) bg_sctrl_sk_pane_cp1

0xd1ae,	// (0x0003b008) bg_sctrl_sk_pane_cp2

0xd1b7,	// (0x0003b011) control_bg_pane_g1

0xd1c0,	// (0x0003b01a) control_bg_pane_g2

0x0001,

0xfd55,	// (0x0003dbaf) control_bg_pane_g

0x83f3,	// (0x0003624d) cell_indicator_nsta_pane_g1_ParamLimits

0x4156,	// (0x00031fb0) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0003d92b) cell_indicator_nsta_pane_g_ParamLimits

0xdd87,	// (0x0003bbe1) form2_midp_time_pane_t1_ParamLimits

0xd351,	// (0x0003b1ab) main_idle_act4_pane_ParamLimits

0xd351,	// (0x0003b1ab) main_idle_act4_pane

0x35ae,	// (0x00031408) popup_tb_extension_window_ParamLimits

0x4a7d,	// (0x000328d7) tb_ext_find_pane_ParamLimits

0x4a7d,	// (0x000328d7) tb_ext_find_pane

0xd1c9,	// (0x0003b023) ai_gene_pane_1_cp1

0x64f6,	// (0x00034350) ai_gene_pane_2_cp1

0xd1d1,	// (0x0003b02b) list_single_idle_plugin_calendar_pane

0xd1da,	// (0x0003b034) list_single_idle_plugin_notification_pane

0xd1e3,	// (0x0003b03d) list_single_idle_plugin_player_pane

0x4ad4,	// (0x0003292e) list_single_idle_plugin_shortcut_pane_ParamLimits

0x4ad4,	// (0x0003292e) list_single_idle_plugin_shortcut_pane

0x4afc,	// (0x00032956) main_idle_act4_pane_t1

0x4b12,	// (0x0003296c) main_idle_act4_pane_t2

0x0001,

0xfd5a,	// (0x0003dbb4) main_idle_act4_pane_t

0x4b28,	// (0x00032982) middle_sk_idle_act4_pane_ParamLimits

0x4b28,	// (0x00032982) middle_sk_idle_act4_pane

0x4b44,	// (0x0003299e) popup_clock_digital_analogue_window_cp2

0x4b6a,	// (0x000329c4) shortcut_wheel_idle_act4_pane_ParamLimits

0x4b6a,	// (0x000329c4) shortcut_wheel_idle_act4_pane

0xbda9,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g1

0xbda9,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g2

0xbda9,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g3

0xbda9,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g4

0xbda9,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g5

0xd1ec,	// (0x0003b046) shortcut_wheel_idle_act4_pane_g6

0xd1f4,	// (0x0003b04e) shortcut_wheel_idle_act4_pane_g7

0xd1fc,	// (0x0003b056) shortcut_wheel_idle_act4_pane_g8

0xd204,	// (0x0003b05e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5f,	// (0x0003dbb9) shortcut_wheel_idle_act4_pane_g

0xf200,	// (0x0003d05a) middle_sk_idle_act4_pane_g1_ParamLimits

0xf200,	// (0x0003d05a) middle_sk_idle_act4_pane_g1

0x4be5,	// (0x00032a3f) middle_sk_idle_act4_pane_g2_ParamLimits

0x4be5,	// (0x00032a3f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd82,	// (0x0003dbdc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd82,	// (0x0003dbdc) middle_sk_idle_act4_pane_g

0x4bfd,	// (0x00032a57) middle_sk_idle_act4_pane_t1_ParamLimits

0x4bfd,	// (0x00032a57) middle_sk_idle_act4_pane_t1

0x4c2c,	// (0x00032a86) grid_ai_shortcut_pane_ParamLimits

0x4c2c,	// (0x00032a86) grid_ai_shortcut_pane

0x4c49,	// (0x00032aa3) list_highlight_pane_cp16_ParamLimits

0x4c49,	// (0x00032aa3) list_highlight_pane_cp16

0x4c56,	// (0x00032ab0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x4c56,	// (0x00032ab0) list_single_idle_plugin_shortcut_pane_g1

0x4c62,	// (0x00032abc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x4c62,	// (0x00032abc) list_single_idle_plugin_shortcut_pane_g2

0x4c7e,	// (0x00032ad8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x4c7e,	// (0x00032ad8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd87,	// (0x0003dbe1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd87,	// (0x0003dbe1) list_single_idle_plugin_shortcut_pane_g

0x4c93,	// (0x00032aed) cell_ai_shortcut_pane_ParamLimits

0x4c93,	// (0x00032aed) cell_ai_shortcut_pane

0x4ca9,	// (0x00032b03) cell_ai_shortcut_pane_g1_ParamLimits

0x4ca9,	// (0x00032b03) cell_ai_shortcut_pane_g1

0xd1c9,	// (0x0003b023) ai_gene_pane_1_cp2

0xd20c,	// (0x0003b066) ai_gene_pane_2_cp2

0xd214,	// (0x0003b06e) list_highlight_pane_cp15

0xd21d,	// (0x0003b077) list_single_idle_plugin_calendar_pane_g1

0xd214,	// (0x0003b06e) list_highlight_pane_cp17

0xd225,	// (0x0003b07f) list_single_idle_plugin_calendar_pane_g1_copy1

0xd22d,	// (0x0003b087) list_single_idle_plugin_player_pane_g1

0x7eb3,	// (0x00035d0d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8e,	// (0x0003dbe8) list_single_idle_plugin_player_pane_g

0xd235,	// (0x0003b08f) list_single_idle_plugin_player_pane_t1

0xd243,	// (0x0003b09d) list_single_idle_plugin_player_pane_t2

0xd251,	// (0x0003b0ab) list_single_idle_plugin_player_pane_t3

0xd25f,	// (0x0003b0b9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd93,	// (0x0003dbed) list_single_idle_plugin_player_pane_t

0xd26d,	// (0x0003b0c7) wait_bar_pane_cp15

0xd275,	// (0x0003b0cf) grid_ai_notification_pane

0x7eb3,	// (0x00035d0d) list_single_idle_plugin_notification_pane_g1

0x4ccb,	// (0x00032b25) cell_ai_notification_pane_ParamLimits

0x4ccb,	// (0x00032b25) cell_ai_notification_pane

0xd27e,	// (0x0003b0d8) cell_ai_notification_pane_g1

0xd286,	// (0x0003b0e0) cell_ai_notification_pane_t1

0x4cd8,	// (0x00032b32) tb_ext_find_button_pane

0x4ce0,	// (0x00032b3a) tb_ext_find_pane_g1

0x4ce8,	// (0x00032b42) tb_ext_find_pane_t1

0x5fd5,	// (0x00033e2f) tb_ext_find_button_pane_g1

0xd294,	// (0x0003b0ee) tb_ext_find_button_pane_g2

0x0001,

0xfd9c,	// (0x0003dbf6) tb_ext_find_button_pane_g

0x4afc,	// (0x00032956) main_idle_act4_pane_t1_ParamLimits

0x4b12,	// (0x0003296c) main_idle_act4_pane_t2_ParamLimits

0xfd5a,	// (0x0003dbb4) main_idle_act4_pane_t_ParamLimits

0x4b44,	// (0x0003299e) popup_clock_digital_analogue_window_cp2_ParamLimits

0x4b5a,	// (0x000329b4) sat_plugin_idle_act4_pane_ParamLimits

0x4b5a,	// (0x000329b4) sat_plugin_idle_act4_pane

0x4cf6,	// (0x00032b50) sat_plugin_idle_act4_pane_t1_ParamLimits

0x4cf6,	// (0x00032b50) sat_plugin_idle_act4_pane_t1

0x4d0e,	// (0x00032b68) sat_plugin_idle_act4_pane_t2_ParamLimits

0x4d0e,	// (0x00032b68) sat_plugin_idle_act4_pane_t2

0x4d26,	// (0x00032b80) sat_plugin_idle_act4_pane_t3_ParamLimits

0x4d26,	// (0x00032b80) sat_plugin_idle_act4_pane_t3

0x4d3e,	// (0x00032b98) sat_plugin_idle_act4_pane_t4_ParamLimits

0x4d3e,	// (0x00032b98) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda1,	// (0x0003dbfb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda1,	// (0x0003dbfb) sat_plugin_idle_act4_pane_t

0x906d,	// (0x00036ec7) popup_battery_window_ParamLimits

0x906d,	// (0x00036ec7) popup_battery_window

0x26f3,	// (0x0003054d) bg_popup_sub_pane_cp25_ParamLimits

0x26f3,	// (0x0003054d) bg_popup_sub_pane_cp25

0xd29d,	// (0x0003b0f7) popup_battery_window_g1_ParamLimits

0xd29d,	// (0x0003b0f7) popup_battery_window_g1

0xd2a9,	// (0x0003b103) popup_battery_window_t1_ParamLimits

0xd2a9,	// (0x0003b103) popup_battery_window_t1

0xd2bb,	// (0x0003b115) popup_battery_window_t2_ParamLimits

0xd2bb,	// (0x0003b115) popup_battery_window_t2

0x0001,

0xfdaa,	// (0x0003dc04) popup_battery_window_t_ParamLimits

0xfdaa,	// (0x0003dc04) popup_battery_window_t

0x2eae,	// (0x00030d08) midp_canvas_pane_ParamLimits

0x2f03,	// (0x00030d5d) midp_keypad_pane_ParamLimits

0x2f03,	// (0x00030d5d) midp_keypad_pane

0x5c37,	// (0x00033a91) main_midp_pane_ParamLimits

0x849d,	// (0x000362f7) signal_pane_g2_cp_ParamLimits

0x4d56,	// (0x00032bb0) aid_size_cell_midp_keypad_ParamLimits

0x4d56,	// (0x00032bb0) aid_size_cell_midp_keypad

0x4d74,	// (0x00032bce) midp_keyp_game_grid_pane_ParamLimits

0x4d74,	// (0x00032bce) midp_keyp_game_grid_pane

0x4d93,	// (0x00032bed) midp_keyp_rocker_pane_ParamLimits

0x4d93,	// (0x00032bed) midp_keyp_rocker_pane

0x4dd4,	// (0x00032c2e) midp_keyp_sk_left_pane_ParamLimits

0x4dd4,	// (0x00032c2e) midp_keyp_sk_left_pane

0x4e26,	// (0x00032c80) midp_keyp_sk_right_pane_ParamLimits

0x4e26,	// (0x00032c80) midp_keyp_sk_right_pane

0x203b,	// (0x0002fe95) bg_button_pane_cp03

0x4e72,	// (0x00032ccc) midp_keyp_sk_left_pane_g1

0x203b,	// (0x0002fe95) bg_button_pane_cp04

0x4e72,	// (0x00032ccc) midp_keyp_sk_right_pane_g1

0xbda9,	// (0x00039c03) midp_keyp_rocker_pane_g1

0x4e7b,	// (0x00032cd5) keyp_game_cell_pane_ParamLimits

0x4e7b,	// (0x00032cd5) keyp_game_cell_pane

0x203b,	// (0x0002fe95) bg_button_pane_cp02

0x4e9d,	// (0x00032cf7) keyp_game_cell_pane_g1

0xed4c,	// (0x0003cba6) popup_fep_vkb2_window_ParamLimits

0xed4c,	// (0x0003cba6) popup_fep_vkb2_window

0xf20e,	// (0x0003d068) aid_size_cell_vkb2_ParamLimits

0xf20e,	// (0x0003d068) aid_size_cell_vkb2

0xf244,	// (0x0003d09e) popup_fep_vkb2_window_g1_ParamLimits

0xf244,	// (0x0003d09e) popup_fep_vkb2_window_g1

0xf294,	// (0x0003d0ee) vkb2_area_bottom_pane_ParamLimits

0xf294,	// (0x0003d0ee) vkb2_area_bottom_pane

0xf2d2,	// (0x0003d12c) vkb2_area_keypad_pane_ParamLimits

0xf2d2,	// (0x0003d12c) vkb2_area_keypad_pane

0xf310,	// (0x0003d16a) vkb2_area_top_pane_ParamLimits

0xf310,	// (0x0003d16a) vkb2_area_top_pane

0xf38c,	// (0x0003d1e6) vkb2_top_entry_pane_ParamLimits

0xf38c,	// (0x0003d1e6) vkb2_top_entry_pane

0xf3b9,	// (0x0003d213) vkb2_top_grid_left_pane_ParamLimits

0xf3b9,	// (0x0003d213) vkb2_top_grid_left_pane

0xf3d9,	// (0x0003d233) vkb2_top_grid_right_pane_ParamLimits

0xf3d9,	// (0x0003d233) vkb2_top_grid_right_pane

0xb535,	// (0x0003938f) vkb2_cell_keypad_pane_ParamLimits

0xb535,	// (0x0003938f) vkb2_cell_keypad_pane

0xf41f,	// (0x0003d279) vkb2_area_bottom_grid_pane_ParamLimits

0xf41f,	// (0x0003d279) vkb2_area_bottom_grid_pane

0xf445,	// (0x0003d29f) vkb2_area_bottom_pane_g1_ParamLimits

0xf445,	// (0x0003d29f) vkb2_area_bottom_pane_g1

0xf46b,	// (0x0003d2c5) vkb2_area_bottom_pane_g2_ParamLimits

0xf46b,	// (0x0003d2c5) vkb2_area_bottom_pane_g2

0xf49c,	// (0x0003d2f6) vkb2_area_bottom_pane_g3_ParamLimits

0xf49c,	// (0x0003d2f6) vkb2_area_bottom_pane_g3

0x0002,

0xfdaf,	// (0x0003dc09) vkb2_area_bottom_pane_g_ParamLimits

0xfdaf,	// (0x0003dc09) vkb2_area_bottom_pane_g

0xb6ad,	// (0x00039507) vkb2_top_cell_left_pane_ParamLimits

0xb6ad,	// (0x00039507) vkb2_top_cell_left_pane

0x518a,	// (0x00032fe4) vkb2_top_entry_pane_g1_ParamLimits

0x518a,	// (0x00032fe4) vkb2_top_entry_pane_g1

0x5198,	// (0x00032ff2) vkb2_top_entry_pane_t1_ParamLimits

0x5198,	// (0x00032ff2) vkb2_top_entry_pane_t1

0xd2e0,	// (0x0003b13a) vkb2_top_entry_pane_t2_ParamLimits

0xd2e0,	// (0x0003b13a) vkb2_top_entry_pane_t2

0xd312,	// (0x0003b16c) vkb2_top_entry_pane_t3_ParamLimits

0xd312,	// (0x0003b16c) vkb2_top_entry_pane_t3

0x0002,

0xfdb6,	// (0x0003dc10) vkb2_top_entry_pane_t_ParamLimits

0xfdb6,	// (0x0003dc10) vkb2_top_entry_pane_t

0xf4f2,	// (0x0003d34c) vkb2_top_grid_right_pane_g1_ParamLimits

0xf4f2,	// (0x0003d34c) vkb2_top_grid_right_pane_g1

0xb710,	// (0x0003956a) vkb2_top_grid_right_pane_g2_ParamLimits

0xb710,	// (0x0003956a) vkb2_top_grid_right_pane_g2

0xb728,	// (0x00039582) vkb2_top_grid_right_pane_g3_ParamLimits

0xb728,	// (0x00039582) vkb2_top_grid_right_pane_g3

0xf508,	// (0x0003d362) vkb2_top_grid_right_pane_g4_ParamLimits

0xf508,	// (0x0003d362) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbd,	// (0x0003dc17) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbd,	// (0x0003dc17) vkb2_top_grid_right_pane_g

0xb756,	// (0x000395b0) vkb2_top_cell_left_pane_g1

0xb76d,	// (0x000395c7) vkb2_cell_keypad_pane_g1_ParamLimits

0xb76d,	// (0x000395c7) vkb2_cell_keypad_pane_g1

0xd328,	// (0x0003b182) vkb2_cell_keypad_pane_t1_ParamLimits

0xd328,	// (0x0003b182) vkb2_cell_keypad_pane_t1

0xb77b,	// (0x000395d5) vkb2_cell_bottom_grid_pane_ParamLimits

0xb77b,	// (0x000395d5) vkb2_cell_bottom_grid_pane

0xb7b4,	// (0x0003960e) vkb2_cell_bottom_grid_pane_g1

0x4b89,	// (0x000329e3) aid_call2_pane_cp02

0x4b91,	// (0x000329eb) aid_call_pane_cp02

0x4b99,	// (0x000329f3) clock_digital_number_pane_cp10

0x4ba1,	// (0x000329fb) clock_digital_number_pane_cp11

0x4ba9,	// (0x00032a03) clock_digital_number_pane_cp12

0x4bb1,	// (0x00032a0b) clock_digital_number_pane_cp13

0x4bb9,	// (0x00032a13) clock_digital_separator_pane_cp10

0x5fd5,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g1

0x5fd5,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g2

0x4bc1,	// (0x00032a1b) popup_clock_digital_analogue_window_cp2_g3

0x5fd5,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g4

0x4bc1,	// (0x00032a1b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd72,	// (0x0003dbcc) popup_clock_digital_analogue_window_cp2_g

0x4bc9,	// (0x00032a23) popup_clock_digital_analogue_window_cp2_t1

0x4bd7,	// (0x00032a31) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7d,	// (0x0003dbd7) popup_clock_digital_analogue_window_cp2_t

0xbda9,	// (0x00039c03) clock_digital_number_pane_cp10_g1

0xbda9,	// (0x00039c03) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003d9ba) clock_digital_number_pane_cp10_g

0xbda9,	// (0x00039c03) clock_digital_separator_pane_cp10_g1

0xbda9,	// (0x00039c03) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003d9ba) clock_digital_separator_pane_cp10_g

0xd113,	// (0x0003af6d) uniindi_top_pane_g3

0xd124,	// (0x0003af7e) uniindi_top_pane_g4

0xb5a0,	// (0x000393fa) vkb2_row_keypad_pane_ParamLimits

0xb5a0,	// (0x000393fa) vkb2_row_keypad_pane

0xb7d0,	// (0x0003962a) vkb2_cell_t_keypad_pane_ParamLimits

0xb7d0,	// (0x0003962a) vkb2_cell_t_keypad_pane

0xb7dd,	// (0x00039637) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb7dd,	// (0x00039637) vkb2_cell_t_keypad_pane_cp08

0xb7ed,	// (0x00039647) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb7ed,	// (0x00039647) vkb2_cell_t_keypad_pane_cp09

0xb7fe,	// (0x00039658) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb7fe,	// (0x00039658) vkb2_cell_t_keypad_pane_cp01

0xb80e,	// (0x00039668) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb80e,	// (0x00039668) vkb2_cell_t_keypad_pane_cp02

0xb81e,	// (0x00039678) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb81e,	// (0x00039678) vkb2_cell_t_keypad_pane_cp03

0xb82e,	// (0x00039688) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb82e,	// (0x00039688) vkb2_cell_t_keypad_pane_cp04

0xb83e,	// (0x00039698) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb83e,	// (0x00039698) vkb2_cell_t_keypad_pane_cp05

0xb84e,	// (0x000396a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb84e,	// (0x000396a8) vkb2_cell_t_keypad_pane_cp06

0xb85e,	// (0x000396b8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb85e,	// (0x000396b8) vkb2_cell_t_keypad_pane_cp07

0xb86e,	// (0x000396c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb86e,	// (0x000396c8) vkb2_cell_t_keypad_pane_cp10

0xb08e,	// (0x00038ee8) vkb2_cell_t_keypad_pane_g1

0xd33f,	// (0x0003b199) vkb2_cell_t_keypad_pane_t1

0x8faa,	// (0x00036e04) popup_grid_graphic2_window

0x51fd,	// (0x00033057) aid_size_cell_graphic2_ParamLimits

0x51fd,	// (0x00033057) aid_size_cell_graphic2

0x705d,	// (0x00034eb7) bg_popup_window_pane_cp21_ParamLimits

0x705d,	// (0x00034eb7) bg_popup_window_pane_cp21

0x522f,	// (0x00033089) graphic2_pages_pane_ParamLimits

0x522f,	// (0x00033089) graphic2_pages_pane

0x5278,	// (0x000330d2) grid_graphic2_control_pane_ParamLimits

0x5278,	// (0x000330d2) grid_graphic2_control_pane

0x52a6,	// (0x00033100) grid_graphic2_pane_ParamLimits

0x52a6,	// (0x00033100) grid_graphic2_pane

0x5305,	// (0x0003315f) cell_graphic2_pane

0x203b,	// (0x0002fe95) main_comp_mode_pane

0xcd8f,	// (0x0003abe9) list_ai3_gene_pane_ParamLimits

0x4875,	// (0x000326cf) bg_popup_window_pane_cp19_ParamLimits

0xceff,	// (0x0003ad59) bg_touch_area_indi_pane_ParamLimits

0xceff,	// (0x0003ad59) bg_touch_area_indi_pane

0xcf15,	// (0x0003ad6f) bg_touch_area_indi_pane_cp01_ParamLimits

0xcf15,	// (0x0003ad6f) bg_touch_area_indi_pane_cp01

0xcf2b,	// (0x0003ad85) bg_touch_area_indi_pane_cp02_ParamLimits

0xcf2b,	// (0x0003ad85) bg_touch_area_indi_pane_cp02

0xcf41,	// (0x0003ad9b) bg_touch_area_indi_pane_cp03_ParamLimits

0xcf41,	// (0x0003ad9b) bg_touch_area_indi_pane_cp03

0xcf57,	// (0x0003adb1) popup_slider_window_g1_ParamLimits

0xcf73,	// (0x0003adcd) popup_slider_window_g2_ParamLimits

0xcf8f,	// (0x0003ade9) popup_slider_window_g3_ParamLimits

0xfd07,	// (0x0003db61) popup_slider_window_g_ParamLimits

0xcfab,	// (0x0003ae05) popup_slider_window_t1_ParamLimits

0xcfef,	// (0x0003ae49) small_volume_slider_vertical_pane_ParamLimits

0x5305,	// (0x0003315f) cell_graphic2_pane_ParamLimits

0x534e,	// (0x000331a8) bg_button_pane_cp10_ParamLimits

0x534e,	// (0x000331a8) bg_button_pane_cp10

0x535f,	// (0x000331b9) bg_button_pane_cp11_ParamLimits

0x535f,	// (0x000331b9) bg_button_pane_cp11

0x5370,	// (0x000331ca) graphic2_pages_pane_g1_ParamLimits

0x5370,	// (0x000331ca) graphic2_pages_pane_g1

0x538b,	// (0x000331e5) graphic2_pages_pane_g2_ParamLimits

0x538b,	// (0x000331e5) graphic2_pages_pane_g2

0x0001,

0xfdcb,	// (0x0003dc25) graphic2_pages_pane_g_ParamLimits

0xfdcb,	// (0x0003dc25) graphic2_pages_pane_g

0x53a3,	// (0x000331fd) graphic2_pages_pane_t1_ParamLimits

0x53a3,	// (0x000331fd) graphic2_pages_pane_t1

0x53bb,	// (0x00033215) cell_graphic2_control_pane_ParamLimits

0x53bb,	// (0x00033215) cell_graphic2_control_pane

0x53d5,	// (0x0003322f) cell_graphic2_pane_g1_ParamLimits

0x53d5,	// (0x0003322f) cell_graphic2_pane_g1

0xf51e,	// (0x0003d378) cell_graphic2_pane_g2_ParamLimits

0xf51e,	// (0x0003d378) cell_graphic2_pane_g2

0x53e2,	// (0x0003323c) cell_graphic2_pane_g3_ParamLimits

0x53e2,	// (0x0003323c) cell_graphic2_pane_g3

0xf52b,	// (0x0003d385) cell_graphic2_pane_g4_ParamLimits

0xf52b,	// (0x0003d385) cell_graphic2_pane_g4

0x53ef,	// (0x00033249) cell_graphic2_pane_g5_ParamLimits

0x53ef,	// (0x00033249) cell_graphic2_pane_g5

0x0004,

0xfdd0,	// (0x0003dc2a) cell_graphic2_pane_g_ParamLimits

0xfdd0,	// (0x0003dc2a) cell_graphic2_pane_g

0x540f,	// (0x00033269) cell_graphic2_pane_t1_ParamLimits

0x540f,	// (0x00033269) cell_graphic2_pane_t1

0x7645,	// (0x0003549f) grid_highlight_pane_cp11_ParamLimits

0x7645,	// (0x0003549f) grid_highlight_pane_cp11

0x5abb,	// (0x00033915) bg_button_pane_cp05

0x5426,	// (0x00033280) cell_graphic2_control_pane_g1

0xbda9,	// (0x00039c03) bg_touch_area_indi_pane_g1

0xd35f,	// (0x0003b1b9) aid_cmod_rocker_key_size

0xd369,	// (0x0003b1c3) aid_cmode_itu_key_size

0xd373,	// (0x0003b1cd) main_cmode_video_pane

0xd37b,	// (0x0003b1d5) main_comp_mode_itu_pane

0xd385,	// (0x0003b1df) main_comp_mode_rocker_pane

0xd38d,	// (0x0003b1e7) cell_cmode_rocker_pane_ParamLimits

0xd38d,	// (0x0003b1e7) cell_cmode_rocker_pane

0xd39f,	// (0x0003b1f9) cell_cmode_itu_pane_ParamLimits

0xd39f,	// (0x0003b1f9) cell_cmode_itu_pane

0x5abb,	// (0x00033915) bg_button_pane_cp06_ParamLimits

0x5abb,	// (0x00033915) bg_button_pane_cp06

0xbfe3,	// (0x00039e3d) cell_cmode_rocker_pane_g1_ParamLimits

0xbfe3,	// (0x00039e3d) cell_cmode_rocker_pane_g1

0xd026,	// (0x0003ae80) cell_cmode_rocker_pane_g2_ParamLimits

0xd026,	// (0x0003ae80) cell_cmode_rocker_pane_g2

0x0001,

0xfddb,	// (0x0003dc35) cell_cmode_rocker_pane_g_ParamLimits

0xfddb,	// (0x0003dc35) cell_cmode_rocker_pane_g

0x203b,	// (0x0002fe95) bg_button_pane_cp07

0xe04c,	// (0x0003bea6) cell_cmode_itu_pane_g1

0xe055,	// (0x0003beaf) cell_cmode_itu_pane_t1

0xe063,	// (0x0003bebd) cell_cmode_itu_pane_t2

0x0001,

0xfde0,	// (0x0003dc3a) cell_cmode_itu_pane_t

0xd195,	// (0x0003afef) aid_touch_ctrl_left

0xd19d,	// (0x0003aff7) aid_touch_ctrl_right

0x203b,	// (0x0002fe95) compa_mode_pane

0x5433,	// (0x0003328d) aid_cmod_rocker_key_size_cp

0x543d,	// (0x00033297) aid_cmode_itu_key_size_cp

0xe071,	// (0x0003becb) compa_mode_pane_g1

0xe079,	// (0x0003bed3) compa_mode_pane_g2

0xe081,	// (0x0003bedb) compa_mode_pane_g3

0x0002,

0xfde5,	// (0x0003dc3f) compa_mode_pane_g

0x5447,	// (0x000332a1) main_comp_mode_itu_pane_cp

0x5451,	// (0x000332ab) main_comp_mode_rocker_pane_cp

0x545b,	// (0x000332b5) cell_cmode_itu_pane_cp_ParamLimits

0x545b,	// (0x000332b5) cell_cmode_itu_pane_cp

0x5470,	// (0x000332ca) cell_cmode_rocker_pane_cp_ParamLimits

0x5470,	// (0x000332ca) cell_cmode_rocker_pane_cp

0x5abb,	// (0x00033915) bg_button_pane_cp06_cp_ParamLimits

0x5abb,	// (0x00033915) bg_button_pane_cp06_cp

0xbfe3,	// (0x00039e3d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbfe3,	// (0x00039e3d) cell_cmode_rocker_pane_g1_cp

0xbda9,	// (0x00039c03) cell_cmode_rocker_pane_g2_cp

0x203b,	// (0x0002fe95) bg_button_pane_cp07_cp

0x5482,	// (0x000332dc) cell_cmode_itu_pane_g1_cp

0x548b,	// (0x000332e5) cell_cmode_itu_pane_t1_cp

0x5499,	// (0x000332f3) cell_cmode_itu_pane_t2_cp

0x3f52,	// (0x00031dac) settings_code_pane_cp2

0x239e,	// (0x000301f8) bg_popup_window_pane_cp3_ParamLimits

0x28cb,	// (0x00030725) heading_pane_cp3_ParamLimits

0x28d7,	// (0x00030731) listscroll_popup_graphic_pane_ParamLimits

0xae49,	// (0x00038ca3) fep_hwr_aid_pane_ParamLimits

0xb2a9,	// (0x00039103) aid_touch_sctrl_top_ParamLimits

0xb2c4,	// (0x0003911e) sctrl_sk_top_pane_g1_ParamLimits

0xb08e,	// (0x00038ee8) sctrl_sk_top_pane_g2_ParamLimits

0xfd20,	// (0x0003db7a) sctrl_sk_top_pane_g_ParamLimits

0xb2d1,	// (0x0003912b) sctrl_sk_top_pane_t1_ParamLimits

0xb2a9,	// (0x00039103) aid_touch_sctrl_bottom_ParamLimits

0xb2d1,	// (0x0003912b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0df,	// (0x0003af39) aid_area_touch_clock

0xf34e,	// (0x0003d1a8) aid_vkb2_area_top_pane_cell_ParamLimits

0xf34e,	// (0x0003d1a8) aid_vkb2_area_top_pane_cell

0xf3f9,	// (0x0003d253) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xf3f9,	// (0x0003d253) aid_vkb2_area_bottom_pane_cell

0xd2d8,	// (0x0003b132) popup_char_count_window

0xe089,	// (0x0003bee3) popup_char_count_window_g1

0xe092,	// (0x0003beec) popup_char_count_window_g2

0xe09b,	// (0x0003bef5) popup_char_count_window_g3

0x0002,

0xfdec,	// (0x0003dc46) popup_char_count_window_g

0xe0a4,	// (0x0003befe) popup_char_count_window_t1

0xb385,	// (0x000391df) popup_fep_char_preview_window_ParamLimits

0xb385,	// (0x000391df) popup_fep_char_preview_window

0xf36e,	// (0x0003d1c8) vkb2_top_candi_pane_ParamLimits

0xf36e,	// (0x0003d1c8) vkb2_top_candi_pane

0x54a7,	// (0x00033301) cell_vkb2_top_candi_pane_ParamLimits

0x54a7,	// (0x00033301) cell_vkb2_top_candi_pane

0xb883,	// (0x000396dd) bg_popup_fep_char_preview_window_ParamLimits

0xb883,	// (0x000396dd) bg_popup_fep_char_preview_window

0xb891,	// (0x000396eb) popup_fep_char_preview_window_t1_ParamLimits

0xb891,	// (0x000396eb) popup_fep_char_preview_window_t1

0xe0b2,	// (0x0003bf0c) bg_popup_fep_char_preview_window_g1

0xe0ba,	// (0x0003bf14) bg_popup_fep_char_preview_window_g2

0xe0c2,	// (0x0003bf1c) bg_popup_fep_char_preview_window_g3

0xe0ca,	// (0x0003bf24) bg_popup_fep_char_preview_window_g4

0xe0d2,	// (0x0003bf2c) bg_popup_fep_char_preview_window_g5

0xb8cb,	// (0x00039725) bg_popup_fep_char_preview_window_g6

0xe0da,	// (0x0003bf34) bg_popup_fep_char_preview_window_g7

0xe0e2,	// (0x0003bf3c) bg_popup_fep_char_preview_window_g8

0xe0ea,	// (0x0003bf44) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf3,	// (0x0003dc4d) bg_popup_fep_char_preview_window_g

0xb08e,	// (0x00038ee8) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb08e,	// (0x00038ee8) cell_vkb2_top_candi_pane_g1

0xb09c,	// (0x00038ef6) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb09c,	// (0x00038ef6) cell_vkb2_top_candi_pane_g2

0xdd9a,	// (0x0003bbf4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdd9a,	// (0x0003bbf4) cell_vkb2_top_candi_pane_g3

0xb8d3,	// (0x0003972d) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb8d3,	// (0x0003972d) cell_vkb2_top_candi_pane_g4

0xc4b4,	// (0x0003a30e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc4b4,	// (0x0003a30e) cell_vkb2_top_candi_pane_g5

0xb8f4,	// (0x0003974e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb8f4,	// (0x0003974e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe06,	// (0x0003dc60) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe06,	// (0x0003dc60) cell_vkb2_top_candi_pane_g

0xb902,	// (0x0003975c) cell_vkb2_top_candi_pane_t1

0xa86e,	// (0x000386c8) aid_size_touch_slider_mark_ParamLimits

0xa86e,	// (0x000386c8) aid_size_touch_slider_mark

0x5263,	// (0x000330bd) grid_graphic2_catg_pane_ParamLimits

0x5263,	// (0x000330bd) grid_graphic2_catg_pane

0x52da,	// (0x00033134) popup_grid_graphic2_window_t1_ParamLimits

0x52da,	// (0x00033134) popup_grid_graphic2_window_t1

0x52ef,	// (0x00033149) popup_grid_graphic2_window_t2_ParamLimits

0x52ef,	// (0x00033149) popup_grid_graphic2_window_t2

0x0001,

0xfdc6,	// (0x0003dc20) popup_grid_graphic2_window_t_ParamLimits

0xfdc6,	// (0x0003dc20) popup_grid_graphic2_window_t

0x5abb,	// (0x00033915) bg_button_pane_cp05_ParamLimits

0x5426,	// (0x00033280) cell_graphic2_control_pane_g1_ParamLimits

0xd15b,	// (0x0003afb5) cell_graphic2_catg_pane_ParamLimits

0xd15b,	// (0x0003afb5) cell_graphic2_catg_pane

0x203b,	// (0x0002fe95) bg_button_pane_cp12

0x54f1,	// (0x0003334b) cell_graphic2_catg_pane_g1

0xd0ab,	// (0x0003af05) cell_tb_ext_pane_t1_ParamLimits

0xb6cd,	// (0x00039527) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb6cd,	// (0x00039527) vkb2_top_cell_right_narrow_pane

0xb6e5,	// (0x0003953f) vkb2_top_cell_right_wide_pane_ParamLimits

0xb6e5,	// (0x0003953f) vkb2_top_cell_right_wide_pane

0xae3b,	// (0x00038c95) bg_vkb2_func_pane_ParamLimits

0xae3b,	// (0x00038c95) bg_vkb2_func_pane

0xb756,	// (0x000395b0) vkb2_top_cell_left_pane_g1_ParamLimits

0xae3b,	// (0x00038c95) bg_vkb2_fuc_pane_cp03_ParamLimits

0xae3b,	// (0x00038c95) bg_vkb2_fuc_pane_cp03

0xb7b4,	// (0x0003960e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x6980,	// (0x000347da) bg_vkb2_func_pane_g1

0x6978,	// (0x000347d2) bg_vkb2_func_pane_g2

0x6988,	// (0x000347e2) bg_vkb2_func_pane_g3

0x6990,	// (0x000347ea) bg_vkb2_func_pane_g4

0x6998,	// (0x000347f2) bg_vkb2_func_pane_g5

0x69a0,	// (0x000347fa) bg_vkb2_func_pane_g6

0x69b0,	// (0x0003480a) bg_vkb2_func_pane_g7

0x69a8,	// (0x00034802) bg_vkb2_func_pane_g8

0x6970,	// (0x000347ca) bg_vkb2_func_pane_g9

0x0008,

0xfe13,	// (0x0003dc6d) bg_vkb2_func_pane_g

0xae3b,	// (0x00038c95) bg_vkb2_fuc_pane_cp01_ParamLimits

0xae3b,	// (0x00038c95) bg_vkb2_fuc_pane_cp01

0xb756,	// (0x000395b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb756,	// (0x000395b0) vkb2_top_cell_right_wide_pane_g1

0xae3b,	// (0x00038c95) bg_vkb2_fuc_pane_cp02_ParamLimits

0xae3b,	// (0x00038c95) bg_vkb2_fuc_pane_cp02

0xb7b4,	// (0x0003960e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb7b4,	// (0x0003960e) vkb2_top_cell_right_narrow_pane_g1

0x47c3,	// (0x0003261d) aid_touch_area_decrease_ParamLimits

0x47c3,	// (0x0003261d) aid_touch_area_decrease

0x47f1,	// (0x0003264b) aid_touch_area_increase_ParamLimits

0x47f1,	// (0x0003264b) aid_touch_area_increase

0x4819,	// (0x00032673) aid_touch_area_mute_ParamLimits

0x4819,	// (0x00032673) aid_touch_area_mute

0x4841,	// (0x0003269b) aid_touch_area_slider_ParamLimits

0x4841,	// (0x0003269b) aid_touch_area_slider

0x4881,	// (0x000326db) popup_slider_window_g4_ParamLimits

0x4881,	// (0x000326db) popup_slider_window_g4

0x48a9,	// (0x00032703) popup_slider_window_g5_ParamLimits

0x48a9,	// (0x00032703) popup_slider_window_g5

0x48dd,	// (0x00032737) popup_slider_window_g6_ParamLimits

0x48dd,	// (0x00032737) popup_slider_window_g6

0xcfd7,	// (0x0003ae31) popup_slider_window_t2_ParamLimits

0xcfd7,	// (0x0003ae31) popup_slider_window_t2

0x0001,

0xfd14,	// (0x0003db6e) popup_slider_window_t_ParamLimits

0xfd14,	// (0x0003db6e) popup_slider_window_t

0x48f9,	// (0x00032753) slider_pane_ParamLimits

0x48f9,	// (0x00032753) slider_pane

0xe0f2,	// (0x0003bf4c) slider_pane_g1_ParamLimits

0xe0f2,	// (0x0003bf4c) slider_pane_g1

0xe106,	// (0x0003bf60) slider_pane_g2_ParamLimits

0xe106,	// (0x0003bf60) slider_pane_g2

0xe11c,	// (0x0003bf76) slider_pane_g3_ParamLimits

0xe11c,	// (0x0003bf76) slider_pane_g3

0x0003,

0xfe26,	// (0x0003dc80) slider_pane_g_ParamLimits

0xfe26,	// (0x0003dc80) slider_pane_g

0x35ea,	// (0x00031444) popup_tb_float_extension_window_ParamLimits

0x35ea,	// (0x00031444) popup_tb_float_extension_window

0xe148,	// (0x0003bfa2) aid_size_cell_tb_float_ext

0x203b,	// (0x0002fe95) bg_popup_sub_window_cp28

0xe153,	// (0x0003bfad) grid_tb_float_ext_pane

0xe15b,	// (0x0003bfb5) cell_tb_float_ext_pane_ParamLimits

0xe15b,	// (0x0003bfb5) cell_tb_float_ext_pane

0xe173,	// (0x0003bfcd) cell_tb_float_ext_pane_g1

0xe17c,	// (0x0003bfd6) grid_highlight_pane_cp12

0xf176,	// (0x0003cfd0) cell_last_hwr_side_pane_ParamLimits

0xf176,	// (0x0003cfd0) cell_last_hwr_side_pane

0xbda9,	// (0x00039c03) cell_last_hwr_side_pane_g1

0xe185,	// (0x0003bfdf) cell_last_hwr_side_pane_g2

0x0001,

0xfe2f,	// (0x0003dc89) cell_last_hwr_side_pane_g

0xf4cd,	// (0x0003d327) vkb2_area_bottom_space_btn_pane_ParamLimits

0xf4cd,	// (0x0003d327) vkb2_area_bottom_space_btn_pane

0xb08e,	// (0x00038ee8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd33f,	// (0x0003b199) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb902,	// (0x0003975c) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb918,	// (0x00039772) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb918,	// (0x00039772) vkb2_area_bottom_space_btn_pane_g1

0xb94e,	// (0x000397a8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb94e,	// (0x000397a8) vkb2_area_bottom_space_btn_pane_g2

0xb984,	// (0x000397de) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb984,	// (0x000397de) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe34,	// (0x0003dc8e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe34,	// (0x0003dc8e) vkb2_area_bottom_space_btn_pane_g

0xaef8,	// (0x00038d52) cel_fep_hwr_func_pane_ParamLimits

0xaef8,	// (0x00038d52) cel_fep_hwr_func_pane

0xf14b,	// (0x0003cfa5) cell_hwr_side_button_pane_ParamLimits

0xf14b,	// (0x0003cfa5) cell_hwr_side_button_pane

0xd0df,	// (0x0003af39) aid_area_touch_clock_ParamLimits

0x26f3,	// (0x0003054d) bg_uniindi_top_pane_ParamLimits

0xd0f1,	// (0x0003af4b) uniindi_top_pane_g1_ParamLimits

0xd107,	// (0x0003af61) uniindi_top_pane_g2_ParamLimits

0xd113,	// (0x0003af6d) uniindi_top_pane_g3_ParamLimits

0xd124,	// (0x0003af7e) uniindi_top_pane_g4_ParamLimits

0xfd4c,	// (0x0003dba6) uniindi_top_pane_g_ParamLimits

0xd131,	// (0x0003af8b) uniindi_top_pane_t1_ParamLimits

0x26f3,	// (0x0003054d) bg_vkb2_func_pane_cp01_ParamLimits

0x26f3,	// (0x0003054d) bg_vkb2_func_pane_cp01

0x006a,	// (0x0002dec4) cel_fep_hwr_func_pane_g1_ParamLimits

0x006a,	// (0x0002dec4) cel_fep_hwr_func_pane_g1

0x26f3,	// (0x0003054d) bg_vkb2_func_pane_cp02_ParamLimits

0x26f3,	// (0x0003054d) bg_vkb2_func_pane_cp02

0x006a,	// (0x0002dec4) cell_hwr_side_button_pane_g1_ParamLimits

0x006a,	// (0x0002dec4) cell_hwr_side_button_pane_g1

0x6894,	// (0x000346ee) status_pane_g4_ParamLimits

0x6894,	// (0x000346ee) status_pane_g4

0x68ac,	// (0x00034706) status_pane_t1

0xbb9b,	// (0x000399f5) form2_midp_gauge_slider_cont_pane

0xbba3,	// (0x000399fd) form2_midp_gauge_slider_pane_t1_ParamLimits

0x4223,	// (0x0003207d) form2_midp_gauge_slider_pane_t2_ParamLimits

0x4235,	// (0x0003208f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0003d96d) form2_midp_gauge_slider_pane_t_ParamLimits

0xbbd9,	// (0x00039a33) form2_midp_slider_pane_ParamLimits

0xb345,	// (0x0003919f) aid_size_cell_func_vkb2_ParamLimits

0xb345,	// (0x0003919f) aid_size_cell_func_vkb2

0xe134,	// (0x0003bf8e) slider_pane_g4_ParamLimits

0xe134,	// (0x0003bf8e) slider_pane_g4

0xf538,	// (0x0003d392) form2_midp_gauge_slider_pane_t2_cp01

0xf546,	// (0x0003d3a0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf546,	// (0x0003d3a0) form2_midp_gauge_slider_pane_t3_cp01

0xb9f5,	// (0x0003984f) form2_midp_slider_pane_cp01

0x203b,	// (0x0002fe95) navi_smil_pane

0x00d7,	// (0x0002df31) navi_smil_pane_g1

0x00df,	// (0x0002df39) navi_smil_pane_t1

0x00ac,	// (0x0002df06) form2_midp_slider_pane_g1

0x00b5,	// (0x0002df0f) form2_midp_slider_pane_g2

0x00bd,	// (0x0002df17) form2_midp_slider_pane_g3

0x00ac,	// (0x0002df06) form2_midp_slider_pane_g4

0x5525,	// (0x0003337f) form2_midp_slider_pane_g5

0x0004,

0xfe3d,	// (0x0003dc97) form2_midp_slider_pane_g

0xb9ba,	// (0x00039814) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb9ba,	// (0x00039814) vkb2_area_bottom_space_btn_pane_g4

0x378c,	// (0x000315e6) lc0_navi_pane_ParamLimits

0x378c,	// (0x000315e6) lc0_navi_pane

0x37f6,	// (0x00031650) lc0_stat_indi_pane_ParamLimits

0x37f6,	// (0x00031650) lc0_stat_indi_pane

0x380b,	// (0x00031665) ls0_title_pane_ParamLimits

0x380b,	// (0x00031665) ls0_title_pane

0x5abb,	// (0x00033915) bg_popup_sub_pane_cp14_ParamLimits

0xd0c6,	// (0x0003af20) list_uniindi_pane_ParamLimits

0xd0d2,	// (0x0003af2c) uniindi_top_pane_ParamLimits

0xd16d,	// (0x0003afc7) list_single_uniindi_pane_g1_ParamLimits

0xd180,	// (0x0003afda) list_single_uniindi_pane_t1_ParamLimits

0xf563,	// (0x0003d3bd) lc0_stat_clock_pane_ParamLimits

0xf563,	// (0x0003d3bd) lc0_stat_clock_pane

0x5548,	// (0x000333a2) lc0_stat_indi_pane_g1_ParamLimits

0x5548,	// (0x000333a2) lc0_stat_indi_pane_g1

0x553b,	// (0x00033395) lc0_stat_indi_pane_g2_ParamLimits

0x553b,	// (0x00033395) lc0_stat_indi_pane_g2

0x0001,

0xfe48,	// (0x0003dca2) lc0_stat_indi_pane_g_ParamLimits

0xfe48,	// (0x0003dca2) lc0_stat_indi_pane_g

0xf570,	// (0x0003d3ca) lc0_uni_indicator_pane_ParamLimits

0xf570,	// (0x0003d3ca) lc0_uni_indicator_pane

0x0121,	// (0x0002df7b) ls0_title_pane_g1_ParamLimits

0x0121,	// (0x0002df7b) ls0_title_pane_g1

0x5562,	// (0x000333bc) ls0_title_pane_t1_ParamLimits

0x5562,	// (0x000333bc) ls0_title_pane_t1

0xf57d,	// (0x0003d3d7) lc0_uni_indicator_pane_g1_ParamLimits

0xf57d,	// (0x0003d3d7) lc0_uni_indicator_pane_g1

0x017d,	// (0x0002dfd7) lc0_stat_clock_pane_t1

0x203b,	// (0x0002fe95) main_ai5_pane

0x018b,	// (0x0002dfe5) ai5_sk_pane_ParamLimits

0x018b,	// (0x0002dfe5) ai5_sk_pane

0x55a5,	// (0x000333ff) cell_ai5_widget_pane_ParamLimits

0x55a5,	// (0x000333ff) cell_ai5_widget_pane

0x560c,	// (0x00033466) aid_size_cell_widget_grid

0x0205,	// (0x0002e05f) bg_ai5_widget_pane_ParamLimits

0x0205,	// (0x0002e05f) bg_ai5_widget_pane

0x563a,	// (0x00033494) cell_ai5_widget_pane_g2

0x564a,	// (0x000334a4) cell_ai5_widget_pane_g3

0x565e,	// (0x000334b8) cell_ai5_widget_pane_g4

0x566a,	// (0x000334c4) cell_ai5_widget_pane_g5

0x5676,	// (0x000334d0) cell_ai5_widget_pane_g6

0x5682,	// (0x000334dc) cell_ai5_widget_pane_g7

0x56ca,	// (0x00033524) cell_ai5_widget_pane_t1_ParamLimits

0x56ca,	// (0x00033524) cell_ai5_widget_pane_t1

0x56e7,	// (0x00033541) cell_ai5_widget_pane_t2_ParamLimits

0x56e7,	// (0x00033541) cell_ai5_widget_pane_t2

0x56ff,	// (0x00033559) cell_ai5_widget_pane_t3_ParamLimits

0x56ff,	// (0x00033559) cell_ai5_widget_pane_t3

0x5717,	// (0x00033571) cell_ai5_widget_pane_t4_ParamLimits

0x5717,	// (0x00033571) cell_ai5_widget_pane_t4

0x5731,	// (0x0003358b) cell_ai5_widget_pane_t5_ParamLimits

0x5731,	// (0x0003358b) cell_ai5_widget_pane_t5

0x0343,	// (0x0002e19d) cell_ai5_widget_pane_t6_ParamLimits

0x0343,	// (0x0002e19d) cell_ai5_widget_pane_t6

0x0355,	// (0x0002e1af) cell_ai5_widget_pane_t7_ParamLimits

0x0355,	// (0x0002e1af) cell_ai5_widget_pane_t7

0x5750,	// (0x000335aa) cell_ai5_widget_pane_t8_ParamLimits

0x5750,	// (0x000335aa) cell_ai5_widget_pane_t8

0x0009,

0xfe62,	// (0x0003dcbc) cell_ai5_widget_pane_t_ParamLimits

0xfe62,	// (0x0003dcbc) cell_ai5_widget_pane_t

0x5798,	// (0x000335f2) grid_ai5_widget_pane

0x5abb,	// (0x00033915) highlight_cell_ai5_widget_pane_ParamLimits

0x5abb,	// (0x00033915) highlight_cell_ai5_widget_pane

0x57ac,	// (0x00033606) ai5_sk_left_pane

0x57b6,	// (0x00033610) ai5_sk_middle_pane

0x57c0,	// (0x0003361a) ai5_sk_right_pane

0x03ea,	// (0x0002e244) bg_ai5_widget_pane_g1_ParamLimits

0x03ea,	// (0x0002e244) bg_ai5_widget_pane_g1

0x03f6,	// (0x0002e250) bg_ai5_widget_pane_g2_ParamLimits

0x03f6,	// (0x0002e250) bg_ai5_widget_pane_g2

0x0402,	// (0x0002e25c) bg_ai5_widget_pane_g3_ParamLimits

0x0402,	// (0x0002e25c) bg_ai5_widget_pane_g3

0x040e,	// (0x0002e268) bg_ai5_widget_pane_g4_ParamLimits

0x040e,	// (0x0002e268) bg_ai5_widget_pane_g4

0x041a,	// (0x0002e274) bg_ai5_widget_pane_g5_ParamLimits

0x041a,	// (0x0002e274) bg_ai5_widget_pane_g5

0x0426,	// (0x0002e280) bg_ai5_widget_pane_g6_ParamLimits

0x0426,	// (0x0002e280) bg_ai5_widget_pane_g6

0x0432,	// (0x0002e28c) bg_ai5_widget_pane_g7_ParamLimits

0x0432,	// (0x0002e28c) bg_ai5_widget_pane_g7

0x043e,	// (0x0002e298) bg_ai5_widget_pane_g8_ParamLimits

0x043e,	// (0x0002e298) bg_ai5_widget_pane_g8

0x044a,	// (0x0002e2a4) bg_ai5_widget_pane_g9_ParamLimits

0x044a,	// (0x0002e2a4) bg_ai5_widget_pane_g9

0x0008,

0xfe77,	// (0x0003dcd1) bg_ai5_widget_pane_g_ParamLimits

0xfe77,	// (0x0003dcd1) bg_ai5_widget_pane_g

0x57ca,	// (0x00033624) cell_shortcut_ai5_widget_pane_ParamLimits

0x57ca,	// (0x00033624) cell_shortcut_ai5_widget_pane

0x2505,	// (0x0003035f) bg_cell_shortcut_ai5_widget_pane

0x57dc,	// (0x00033636) cell_grid_ai5_widget_pane_g1

0x048d,	// (0x0002e2e7) highlight_cell_shortcut_ai5_widget_pane

0x6980,	// (0x000347da) ai5_sk_left_pane_g1

0x0495,	// (0x0002e2ef) ai5_sk_left_pane_g2

0x049d,	// (0x0002e2f7) ai5_sk_left_pane_g3

0x04a5,	// (0x0002e2ff) ai5_sk_left_pane_g4

0x0003,

0xfe8a,	// (0x0003dce4) ai5_sk_left_pane_g

0x04ad,	// (0x0002e307) ai5_sk_left_pane_t1

0x6978,	// (0x000347d2) ai5_sk_right_pane_g1

0x04bb,	// (0x0002e315) ai5_sk_right_pane_g2

0x04c3,	// (0x0002e31d) ai5_sk_right_pane_g3

0x04cb,	// (0x0002e325) ai5_sk_right_pane_g4

0x0003,

0xfe93,	// (0x0003dced) ai5_sk_right_pane_g

0x04d3,	// (0x0002e32d) ai5_sk_right_pane_t1

0x6978,	// (0x000347d2) ai5_sk_middle_pane_g1

0x6980,	// (0x000347da) ai5_sk_middle_pane_g2

0x6998,	// (0x000347f2) ai5_sk_middle_pane_g3

0x04c3,	// (0x0002e31d) ai5_sk_middle_pane_g4

0x049d,	// (0x0002e2f7) ai5_sk_middle_pane_g5

0x04e1,	// (0x0002e33b) ai5_sk_middle_pane_g6

0x57e5,	// (0x0003363f) ai5_sk_middle_pane_g7

0x0006,

0xfe9c,	// (0x0003dcf6) ai5_sk_middle_pane_g

0x368a,	// (0x000314e4) aid_touch_area_size_lc0_ParamLimits

0x368a,	// (0x000314e4) aid_touch_area_size_lc0

0xb0bd,	// (0x00038f17) cell_hwr_candidate_pane_t1_ParamLimits

0x67c9,	// (0x00034623) aid_touch_navi_pane

0x38f7,	// (0x00031751) status_dt_navi_pane_ParamLimits

0x38f7,	// (0x00031751) status_dt_navi_pane

0x390f,	// (0x00031769) status_dt_sta_pane_ParamLimits

0x390f,	// (0x00031769) status_dt_sta_pane

0x57ed,	// (0x00033647) dt_sta_controll_pane

0x57fa,	// (0x00033654) dt_sta_indi_pane

0x5807,	// (0x00033661) dt_sta_title_pane

0x26f3,	// (0x0003054d) bg_dt_sta_indi_pane_ParamLimits

0x26f3,	// (0x0003054d) bg_dt_sta_indi_pane

0x5819,	// (0x00033673) dt_sta_battery_pane

0x5821,	// (0x0003367b) dt_sta_indi_pane_g1

0x582a,	// (0x00033684) dt_sta_indi_pane_g2

0x5833,	// (0x0003368d) dt_sta_indi_pane_g3

0x0002,

0xfeab,	// (0x0003dd05) dt_sta_indi_pane_g

0x583c,	// (0x00033696) dt_sta_signal_pane

0x5abb,	// (0x00033915) bg_dt_sta_title_pane_ParamLimits

0x5abb,	// (0x00033915) bg_dt_sta_title_pane

0x5845,	// (0x0003369f) dt_sta_title_pane_g1

0x584d,	// (0x000336a7) dt_sta_title_pane_t1_ParamLimits

0x584d,	// (0x000336a7) dt_sta_title_pane_t1

0x203b,	// (0x0002fe95) bg_dt_sta_control_pane

0x5862,	// (0x000336bc) dt_sta_controll_pane_g1

0x586b,	// (0x000336c5) bg_dt_sta_title_pane_g1

0x5874,	// (0x000336ce) bg_dt_sta_title_pane_g2

0x587d,	// (0x000336d7) bg_dt_sta_title_pane_g3

0x0002,

0xfeb2,	// (0x0003dd0c) bg_dt_sta_title_pane_g

0xbda9,	// (0x00039c03) bg_dt_sta_indi_pane_g1

0x5886,	// (0x000336e0) dt_sta_signal_pane_g1

0x588e,	// (0x000336e8) dt_sta_signal_pane_g2

0x0001,

0xfeb9,	// (0x0003dd13) dt_sta_signal_pane_g

0x059f,	// (0x0002e3f9) dt_sta_battery_pane_g1

0x05a8,	// (0x0002e402) dt_sta_battery_pane_t1

0xbda9,	// (0x00039c03) bg_dt_sta_control_pane_g1

0x6032,	// (0x00033e8c) fep_china_uni_eep_pane

0x603a,	// (0x00033e94) fep_china_uni_entry_pane_ParamLimits

0x604a,	// (0x00033ea4) popup_fep_china_uni_window_g1_ParamLimits

0x605a,	// (0x00033eb4) popup_fep_china_uni_window_g2_ParamLimits

0x605a,	// (0x00033eb4) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003d5bc) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003d5bc) popup_fep_china_uni_window_g

0x05b7,	// (0x0002e411) fep_china_uni_eep_pane_g1

0x05bf,	// (0x0002e419) fep_china_uni_eep_pane_t1

0x00ce,	// (0x0002df28) aid_touch_area_size_smil_player

0x6867,	// (0x000346c1) lc0_clock_pane

0x68a0,	// (0x000346fa) status_pane_g5_ParamLimits

0x68a0,	// (0x000346fa) status_pane_g5

0x321e,	// (0x00031078) popup_keymap_window

0x6880,	// (0x000346da) status_icon_pane

0x564a,	// (0x000334a4) cell_ai5_widget_pane_g3_ParamLimits

0x565e,	// (0x000334b8) cell_ai5_widget_pane_g4_ParamLimits

0x566a,	// (0x000334c4) cell_ai5_widget_pane_g5_ParamLimits

0x568e,	// (0x000334e8) cell_ai5_widget_pane_g8_ParamLimits

0x568e,	// (0x000334e8) cell_ai5_widget_pane_g8

0x56a2,	// (0x000334fc) cell_ai5_widget_pane_g9_ParamLimits

0x56a2,	// (0x000334fc) cell_ai5_widget_pane_g9

0x56b6,	// (0x00033510) cell_ai5_widget_pane_g10_ParamLimits

0x56b6,	// (0x00033510) cell_ai5_widget_pane_g10

0x05ce,	// (0x0002e428) status_icon_pane_g1

0x203b,	// (0x0002fe95) bg_popup_sub_pane_cp13

0x05d6,	// (0x0002e430) popup_keymap_window_t1

0x2f8c,	// (0x00030de6) control_pane_g6_ParamLimits

0x2f8c,	// (0x00030de6) control_pane_g6

0x2f7f,	// (0x00030dd9) control_pane_g7_ParamLimits

0x2f7f,	// (0x00030dd9) control_pane_g7

0x2f72,	// (0x00030dcc) control_pane_g8_ParamLimits

0x2f72,	// (0x00030dcc) control_pane_g8

0x57ed,	// (0x00033647) dt_sta_controll_pane_ParamLimits

0x57fa,	// (0x00033654) dt_sta_indi_pane_ParamLimits

0x5807,	// (0x00033661) dt_sta_title_pane_ParamLimits

0x2b52,	// (0x000309ac) aid_size_touch_scroll_bar_cale

0x9081,	// (0x00036edb) popup_discreet_window_ParamLimits

0x9081,	// (0x00036edb) popup_discreet_window

0xed7e,	// (0x0003cbd8) popup_sk_window

0x705d,	// (0x00034eb7) bg_popup_sub_pane_cp28_ParamLimits

0x705d,	// (0x00034eb7) bg_popup_sub_pane_cp28

0x05e4,	// (0x0002e43e) popup_discreet_window_g1_ParamLimits

0x05e4,	// (0x0002e43e) popup_discreet_window_g1

0x0604,	// (0x0002e45e) popup_discreet_window_t1_ParamLimits

0x0604,	// (0x0002e45e) popup_discreet_window_t1

0x0622,	// (0x0002e47c) popup_discreet_window_t2_ParamLimits

0x0622,	// (0x0002e47c) popup_discreet_window_t2

0x0002,

0xfebe,	// (0x0003dd18) popup_discreet_window_t_ParamLimits

0xfebe,	// (0x0003dd18) popup_discreet_window_t

0xba2a,	// (0x00039884) popup_sk_window_g1

0xba33,	// (0x0003988d) popup_sk_window_g2

0x0001,

0xfec5,	// (0x0003dd1f) popup_sk_window_g

0x0694,	// (0x0002e4ee) popup_sk_window_t1

0x0686,	// (0x0002e4e0) popup_sk_window_t1_copy1

0x563a,	// (0x00033494) cell_ai5_widget_pane_g2_ParamLimits

0x5762,	// (0x000335bc) cell_ai5_widget_pane_t9_ParamLimits

0x5762,	// (0x000335bc) cell_ai5_widget_pane_t9

0x203b,	// (0x0002fe95) main_fep_fshwr2_pane

0x5896,	// (0x000336f0) aid_fshwr2_btn_pane

0x589e,	// (0x000336f8) aid_fshwr2_syb_pane

0x58a6,	// (0x00033700) aid_fshwr2_txt_pane

0x58ae,	// (0x00033708) fshwr2_func_candi_pane

0x58b6,	// (0x00033710) fshwr2_hwr_syb_pane

0x58be,	// (0x00033718) fshwr2_icf_pane

0x203b,	// (0x0002fe95) fshwr2_icf_bg_pane

0x58c6,	// (0x00033720) fshwr2_icf_pane_t1_ParamLimits

0x58c6,	// (0x00033720) fshwr2_icf_pane_t1

0xbda9,	// (0x00039c03) fshwr2_func_candi_pane_g1

0x06fb,	// (0x0002e555) fshwr2_func_candi_row_pane_ParamLimits

0x06fb,	// (0x0002e555) fshwr2_func_candi_row_pane

0x58de,	// (0x00033738) cell_fshwr2_syb_pane_ParamLimits

0x58de,	// (0x00033738) cell_fshwr2_syb_pane

0xbfe3,	// (0x00039e3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbfe3,	// (0x00039e3d) fshwr2_hwr_syb_pane_g1

0x203b,	// (0x0002fe95) bg_popup_call_pane_cp01

0x0723,	// (0x0002e57d) fshwr2_func_candi_cell_pane_ParamLimits

0x0723,	// (0x0002e57d) fshwr2_func_candi_cell_pane

0x074e,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x074e,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane

0x0768,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0768,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1

0x0788,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0788,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1

0x203b,	// (0x0002fe95) bg_button_pane_cp08

0x6462,	// (0x000342bc) cell_fshwr2_syb_bg_pane

0x58f5,	// (0x0003374f) cell_fshwr2_syb_bg_pane_g1

0x58fd,	// (0x00033757) cell_fshwr2_syb_bg_pane_t1

0x5abb,	// (0x00033915) main_tmo_pane

0x3d61,	// (0x00031bbb) uni_indicator_pane_g1_ParamLimits

0x3d76,	// (0x00031bd0) uni_indicator_pane_g2_ParamLimits

0x3d8c,	// (0x00031be6) uni_indicator_pane_g3_ParamLimits

0x79e9,	// (0x00035843) uni_indicator_pane_g4_ParamLimits

0x79e9,	// (0x00035843) uni_indicator_pane_g4

0x79fd,	// (0x00035857) uni_indicator_pane_g5_ParamLimits

0x79fd,	// (0x00035857) uni_indicator_pane_g5

0x7a11,	// (0x0003586b) uni_indicator_pane_g6_ParamLimits

0x7a11,	// (0x0003586b) uni_indicator_pane_g6

0xf953,	// (0x0003d7ad) uni_indicator_pane_g_ParamLimits

0x47a7,	// (0x00032601) popup_tmo_note_window_ParamLimits

0x47a7,	// (0x00032601) popup_tmo_note_window

0x203b,	// (0x0002fe95) fshwr2_bg_pane

0x0779,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0779,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeca,	// (0x0003dd24) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeca,	// (0x0003dd24) fshwr2_func_candi_cell_pane_g

0xbda9,	// (0x00039c03) bg_popup_window_pane_cp01

0x07b2,	// (0x0002e60c) bg_popup_window_pane_g1_cp01

0x07bb,	// (0x0002e615) bg_popup_window_pane_cp22_ParamLimits

0x07bb,	// (0x0002e615) bg_popup_window_pane_cp22

0x07c9,	// (0x0002e623) listscroll_tmo_link_pane_ParamLimits

0x07c9,	// (0x0002e623) listscroll_tmo_link_pane

0x0809,	// (0x0002e663) popup_tmo_note_window_g1_ParamLimits

0x0809,	// (0x0002e663) popup_tmo_note_window_g1

0x0816,	// (0x0002e670) tmo_note_info_pane_ParamLimits

0x0816,	// (0x0002e670) tmo_note_info_pane

0x590c,	// (0x00033766) list_tmo_note_info_pane_g1_ParamLimits

0x590c,	// (0x00033766) list_tmo_note_info_pane_g1

0x0847,	// (0x0002e6a1) list_tmo_note_info_pane_g2_ParamLimits

0x0847,	// (0x0002e6a1) list_tmo_note_info_pane_g2

0x0001,

0xfecf,	// (0x0003dd29) list_tmo_note_info_pane_g_ParamLimits

0xfecf,	// (0x0003dd29) list_tmo_note_info_pane_g

0x0863,	// (0x0002e6bd) list_tmo_note_info_text_pane_ParamLimits

0x0863,	// (0x0002e6bd) list_tmo_note_info_text_pane

0x08e4,	// (0x0002e73e) list_tmo_link_pane

0x08f1,	// (0x0002e74b) scroll_pane_cp20

0x08fe,	// (0x0002e758) list_single_tmo_link_pane_ParamLimits

0x08fe,	// (0x0002e758) list_single_tmo_link_pane

0x090e,	// (0x0002e768) list_single_tmo_link_pane_t1

0x091c,	// (0x0002e776) list_tmo_note_info_text_pane_t1_ParamLimits

0x091c,	// (0x0002e776) list_tmo_note_info_text_pane_t1

0x5b69,	// (0x000339c3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5b69,	// (0x000339c3) aid_size_touch_scroll_bar_cp01

0x1ca3,	// (0x0002fafd) aid_size_touch_slider_marker

0xed72,	// (0x0003cbcc) popup_settings_window_ParamLimits

0xed72,	// (0x0003cbcc) popup_settings_window

0xdae8,	// (0x0003b942) popup_candi_list_indi_window

0x67c9,	// (0x00034623) aid_touch_navi_pane_ParamLimits

0xb27d,	// (0x000390d7) rs_clock_indi_pane

0xb286,	// (0x000390e0) sctrl_sk_bottom_pane_ParamLimits

0xb297,	// (0x000390f1) sctrl_sk_top_pane_ParamLimits

0xb39f,	// (0x000391f9) popup_fep_tooltip_window

0x560c,	// (0x00033466) aid_size_cell_widget_grid_ParamLimits

0x562e,	// (0x00033488) cell_ai5_widget_pane_g1_ParamLimits

0x562e,	// (0x00033488) cell_ai5_widget_pane_g1

0x5676,	// (0x000334d0) cell_ai5_widget_pane_g6_ParamLimits

0x5682,	// (0x000334dc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4d,	// (0x0003dca7) cell_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0003dca7) cell_ai5_widget_pane_g

0x5786,	// (0x000335e0) cell_ai5_widget_pane_t10_ParamLimits

0x5786,	// (0x000335e0) cell_ai5_widget_pane_t10

0x5798,	// (0x000335f2) grid_ai5_widget_pane_ParamLimits

0x0456,	// (0x0002e2b0) cell_contacts_ai5_widget_pane_ParamLimits

0x0456,	// (0x0002e2b0) cell_contacts_ai5_widget_pane

0x0637,	// (0x0002e491) popup_discreet_window_t3_ParamLimits

0x0637,	// (0x0002e491) popup_discreet_window_t3

0x06d2,	// (0x0002e52c) popup_fshwr2_char_preview_window_ParamLimits

0x06d2,	// (0x0002e52c) popup_fshwr2_char_preview_window

0x5923,	// (0x0003377d) tmo_note_info_pane_t1

0x5938,	// (0x00033792) tmo_note_info_pane_t2

0x594d,	// (0x000337a7) tmo_note_info_pane_t3

0x08c0,	// (0x0002e71a) tmo_note_info_pane_t4

0x08d2,	// (0x0002e72c) tmo_note_info_pane_t5

0x0004,

0xfed4,	// (0x0003dd2e) tmo_note_info_pane_t

0x08e4,	// (0x0002e73e) list_tmo_link_pane_ParamLimits

0x08f1,	// (0x0002e74b) scroll_pane_cp20_ParamLimits

0x203b,	// (0x0002fe95) bg_popup_fep_char_preview_window_cp01

0x0935,	// (0x0002e78f) popup_fshwr2_char_preview_window_t1

0x0943,	// (0x0002e79d) popup_candi_list_indi_window_g1

0x094c,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane

0x0958,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1

0x096c,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2

0x097b,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedf,	// (0x0003dd39) cell_contacts_ai5_widget_pane_g

0x098e,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1

0x5abb,	// (0x00033915) highlight_cell_shortcut_ai5_widget_pane_cp01

0x59c5,	// (0x0003381f) settings_container_pane

0x6462,	// (0x000342bc) listscroll_set_pane_copy1

0x8192,	// (0x00035fec) scroll_pane_cp121_copy1

0x0a12,	// (0x0002e86c) set_content_pane_copy1

0x0a1a,	// (0x0002e874) aid_height_set_list_copy1_ParamLimits

0x0a1a,	// (0x0002e874) aid_height_set_list_copy1

0x7baa,	// (0x00035a04) aid_size_parent_copy1_ParamLimits

0x7baa,	// (0x00035a04) aid_size_parent_copy1

0x59d1,	// (0x0003382b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x59d1,	// (0x0003382b) button_value_adjust_pane_cp6_copy1

0x5c37,	// (0x00033a91) list_highlight_pane_cp2_copy1_ParamLimits

0x5c37,	// (0x00033a91) list_highlight_pane_cp2_copy1

0x59e5,	// (0x0003383f) list_set_pane_copy1_ParamLimits

0x59e5,	// (0x0003383f) list_set_pane_copy1

0x5962,	// (0x000337bc) main_pane_set_t1_copy1_ParamLimits

0x5962,	// (0x000337bc) main_pane_set_t1_copy1

0x599c,	// (0x000337f6) main_pane_set_t2_copy1_ParamLimits

0x599c,	// (0x000337f6) main_pane_set_t2_copy1

0x0ac8,	// (0x0002e922) main_pane_set_t3_copy1

0x0ad6,	// (0x0002e930) main_pane_set_t4_copy1

0x59b9,	// (0x00033813) set_content_pane_g1_copy1_ParamLimits

0x59b9,	// (0x00033813) set_content_pane_g1_copy1

0x6a94,	// (0x000348ee) setting_code_pane_copy1

0x0aec,	// (0x0002e946) setting_slider_graphic_pane_copy1

0x0aec,	// (0x0002e946) setting_slider_pane_copy1

0x0af4,	// (0x0002e94e) setting_text_pane_copy1

0x0aec,	// (0x0002e946) setting_volume_pane_copy1

0x6a9c,	// (0x000348f6) settings_code_pane_cp2_copy1

0x6aa4,	// (0x000348fe) settings_code_pane_cp_copy1_ParamLimits

0x6aa4,	// (0x000348fe) settings_code_pane_cp_copy1

0x6ab8,	// (0x00034912) volume_set_pane_copy1

0x6ac0,	// (0x0003491a) volume_set_pane_g10_copy1

0x6ac8,	// (0x00034922) volume_set_pane_g1_copy1

0x6ad0,	// (0x0003492a) volume_set_pane_g2_copy1

0x6ad8,	// (0x00034932) volume_set_pane_g3_copy1

0x6ae0,	// (0x0003493a) volume_set_pane_g4_copy1

0x6ae8,	// (0x00034942) volume_set_pane_g5_copy1

0x6af0,	// (0x0003494a) volume_set_pane_g6_copy1

0x6af8,	// (0x00034952) volume_set_pane_g7_copy1

0x6b00,	// (0x0003495a) volume_set_pane_g8_copy1

0x6b08,	// (0x00034962) volume_set_pane_g9_copy1

0x239e,	// (0x000301f8) bg_set_opt_pane_cp_copy1_ParamLimits

0x239e,	// (0x000301f8) bg_set_opt_pane_cp_copy1

0x23ac,	// (0x00030206) setting_slider_pane_t1_copy1_ParamLimits

0x23ac,	// (0x00030206) setting_slider_pane_t1_copy1

0x0b70,	// (0x0002e9ca) setting_slider_pane_t2_copy1_ParamLimits

0x0b70,	// (0x0002e9ca) setting_slider_pane_t2_copy1

0x0b89,	// (0x0002e9e3) setting_slider_pane_t3_copy1_ParamLimits

0x0b89,	// (0x0002e9e3) setting_slider_pane_t3_copy1

0x23f2,	// (0x0003024c) slider_set_pane_copy1_ParamLimits

0x23f2,	// (0x0003024c) slider_set_pane_copy1

0x5b0a,	// (0x00033964) set_opt_bg_pane_g1_copy2

0x5b12,	// (0x0003396c) set_opt_bg_pane_g2_copy2

0x0ba0,	// (0x0002e9fa) set_opt_bg_pane_g3_copy2

0x5b22,	// (0x0003397c) set_opt_bg_pane_g4_copy2

0x5b2a,	// (0x00033984) set_opt_bg_pane_g5_copy2

0x5b32,	// (0x0003398c) set_opt_bg_pane_g6_copy2

0x6b10,	// (0x0003496a) set_opt_bg_pane_g7_copy2

0x0bb0,	// (0x0002ea0a) set_opt_bg_pane_g8_copy2

0x0bb8,	// (0x0002ea12) set_opt_bg_pane_g9_copy2

0x7d18,	// (0x00035b72) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d18,	// (0x00035b72) aid_size_touch_slider_mark_copy1

0x7bbc,	// (0x00035a16) slider_set_pane_g1_copy1

0x7bc5,	// (0x00035a1f) slider_set_pane_g2_copy1

0x7d2c,	// (0x00035b86) slider_set_pane_g3_copy1_ParamLimits

0x7d2c,	// (0x00035b86) slider_set_pane_g3_copy1

0x7d40,	// (0x00035b9a) slider_set_pane_g4_copy1_ParamLimits

0x7d40,	// (0x00035b9a) slider_set_pane_g4_copy1

0x7d58,	// (0x00035bb2) slider_set_pane_g5_copy1_ParamLimits

0x7d58,	// (0x00035bb2) slider_set_pane_g5_copy1

0x7d2c,	// (0x00035b86) slider_set_pane_g6_copy1_ParamLimits

0x7d2c,	// (0x00035b86) slider_set_pane_g6_copy1

0x6b18,	// (0x00034972) slider_set_pane_g7_copy1_ParamLimits

0x6b18,	// (0x00034972) slider_set_pane_g7_copy1

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp2_copy1

0x2408,	// (0x00030262) setting_slider_graphic_pane_g1_copy1

0x6b2e,	// (0x00034988) setting_slider_graphic_pane_t1_copy1

0x6b3d,	// (0x00034997) setting_slider_graphic_pane_t2_copy1

0x6b4c,	// (0x000349a6) slider_set_pane_cp_copy1

0x0c04,	// (0x0002ea5e) input_focus_pane_cp1_copy1

0x0c0d,	// (0x0002ea67) list_set_text_pane_copy1

0x0c15,	// (0x0002ea6f) setting_text_pane_g1_copy1

0xe18e,	// (0x0003bfe8) set_text_pane_t1_copy1

0x0c04,	// (0x0002ea5e) input_focus_pane_cp2_copy1

0x0c15,	// (0x0002ea6f) setting_code_pane_g1_copy1

0x0c1e,	// (0x0002ea78) setting_code_pane_t1_copy1

0x2e8a,	// (0x00030ce4) list_set_graphic_pane_copy1

0x2192,	// (0x0002ffec) bg_set_opt_pane_cp4_copy1

0x0c40,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1_ParamLimits

0x0c40,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1

0x0c4c,	// (0x0002eaa6) list_set_graphic_pane_g2_copy1

0x61dd,	// (0x00034037) list_set_graphic_pane_t1_copy1_ParamLimits

0x61dd,	// (0x00034037) list_set_graphic_pane_t1_copy1

0xbda9,	// (0x00039c03) rs_clock_indi_pane_g1

0x0c54,	// (0x0002eaae) rs_clock_indi_pane_t1

0x0c62,	// (0x0002eabc) rs_indi_pane

0x0c6a,	// (0x0002eac4) rs_indi_pane_g1

0x0c73,	// (0x0002eacd) rs_indi_pane_g2

0x0943,	// (0x0002e79d) rs_indi_pane_g3

0x0002,

0xfee6,	// (0x0003dd40) rs_indi_pane_g

0x6462,	// (0x000342bc) bg_popup_preview_window_pane_cp03

0x0c7c,	// (0x0002ead6) popup_fep_tooltip_window_t1

0xc8da,	// (0x0003a734) popup_note2_window_g2_ParamLimits

0xc8da,	// (0x0003a734) popup_note2_window_g2

0x0001,

0xfc8b,	// (0x0003dae5) popup_note2_window_g_ParamLimits

0xfc8b,	// (0x0003dae5) popup_note2_window_g

0xcd55,	// (0x0003abaf) bg_popup_sub_pane_cp11_ParamLimits

0xcd62,	// (0x0003abbc) cell_ai3_links_pane_g1_ParamLimits

0xcd79,	// (0x0003abd3) cell_ai3_links_pane_t1

0xe18e,	// (0x0003bfe8) set_text_pane_t1_copy1_ParamLimits

0x6389,	// (0x000341e3) cell_graphic_popup_pane_cp2_ParamLimits

0x6389,	// (0x000341e3) cell_graphic_popup_pane_cp2

0x0c8a,	// (0x0002eae4) cell_graphic_popup_pane_g1_cp2

0x2a01,	// (0x0003085b) cell_graphic_popup_pane_g2_cp2

0x0c92,	// (0x0002eaec) cell_graphic_popup_pane_g3_cp2

0x0c9a,	// (0x0002eaf4) cell_graphic_popup_pane_t2_cp2

0x2a12,	// (0x0003086c) grid_highlight_pane_cp3_cp2

0x5dfc,	// (0x00033c56) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x5abb,	// (0x00033915) main_tmo_pane_ParamLimits

0x479f,	// (0x000325f9) popup_tmo_big_image_note_window

0x561e,	// (0x00033478) cell_ai5_widget_list_pane

0x5626,	// (0x00033480) cell_ai5_widget_lrg_icon_pane

0x5923,	// (0x0003377d) tmo_note_info_pane_t1_ParamLimits

0x5938,	// (0x00033792) tmo_note_info_pane_t2_ParamLimits

0x594d,	// (0x000337a7) tmo_note_info_pane_t3_ParamLimits

0x08c0,	// (0x0002e71a) tmo_note_info_pane_t4_ParamLimits

0x08d2,	// (0x0002e72c) tmo_note_info_pane_t5_ParamLimits

0xfed4,	// (0x0003dd2e) tmo_note_info_pane_t_ParamLimits

0x59c5,	// (0x0003381f) settings_container_pane_ParamLimits

0x0bfc,	// (0x0002ea56) indicator_popup_pane_cp5

0x0bfc,	// (0x0002ea56) indicator_popup_pane_cp6

0x2e8a,	// (0x00030ce4) list_set_graphic_pane_copy1_ParamLimits

0x203b,	// (0x0002fe95) bg_popup_window_pane_cp23

0x0ca8,	// (0x0002eb02) popup_tmo_big_image_note_window_g1

0x0cb1,	// (0x0002eb0b) popup_tmo_big_image_note_window_t1

0x0cbf,	// (0x0002eb19) popup_tmo_big_image_note_window_t2

0x0ccd,	// (0x0002eb27) popup_tmo_big_image_note_window_t3

0x0002,

0xfeed,	// (0x0003dd47) popup_tmo_big_image_note_window_t

0x6b54,	// (0x000349ae) cell_ai5_widget_lrg_icon_pane_g1

0x6b5c,	// (0x000349b6) cell_ai5_widget_lrg_icon_pane_t1

0x6b6a,	// (0x000349c4) cell_ai5_widget_list_row_pane_ParamLimits

0x6b6a,	// (0x000349c4) cell_ai5_widget_list_row_pane

0x6b83,	// (0x000349dd) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6b83,	// (0x000349dd) cell_ai5_widget_list_row_pane_g1

0x6b90,	// (0x000349ea) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6b90,	// (0x000349ea) cell_ai5_widget_list_row_pane_t1

0x6ba8,	// (0x00034a02) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6ba8,	// (0x00034a02) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef4,	// (0x0003dd4e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef4,	// (0x0003dd4e) cell_ai5_widget_list_row_pane_t

0x8faa,	// (0x00036e04) main_fep_vtchi_ss_pane

0x0d41,	// (0x0002eb9b) popup_fep_char_pre_window

0x0d49,	// (0x0002eba3) popup_fep_ituss_window

0x0d52,	// (0x0002ebac) popup_fep_vkbss_window

0x0d5b,	// (0x0002ebb5) grid_vkbss_keypad_pane_ParamLimits

0x0d5b,	// (0x0002ebb5) grid_vkbss_keypad_pane

0x0d6b,	// (0x0002ebc5) ituss_keypad_pane

0x0d73,	// (0x0002ebcd) aid_vkbss_key_offset_ParamLimits

0x0d73,	// (0x0002ebcd) aid_vkbss_key_offset

0x0d82,	// (0x0002ebdc) cell_vkbss_key_pane_ParamLimits

0x0d82,	// (0x0002ebdc) cell_vkbss_key_pane

0x0d98,	// (0x0002ebf2) bg_cell_vkbss_key_g1_ParamLimits

0x0d98,	// (0x0002ebf2) bg_cell_vkbss_key_g1

0x0da4,	// (0x0002ebfe) cell_vkbss_key_3p_pane_ParamLimits

0x0da4,	// (0x0002ebfe) cell_vkbss_key_3p_pane

0x0db8,	// (0x0002ec12) cell_vkbss_key_g1_ParamLimits

0x0db8,	// (0x0002ec12) cell_vkbss_key_g1

0x0dcc,	// (0x0002ec26) cell_vkbss_key_t1_ParamLimits

0x0dcc,	// (0x0002ec26) cell_vkbss_key_t1

0x0df7,	// (0x0002ec51) cell_ituss_key_pane_ParamLimits

0x0df7,	// (0x0002ec51) cell_ituss_key_pane

0x0e06,	// (0x0002ec60) bg_cell_ituss_key_g1_ParamLimits

0x0e06,	// (0x0002ec60) bg_cell_ituss_key_g1

0x0e12,	// (0x0002ec6c) cell_ituss_key_pane_g1_ParamLimits

0x0e12,	// (0x0002ec6c) cell_ituss_key_pane_g1

0x0e1e,	// (0x0002ec78) cell_ituss_key_pane_g2_ParamLimits

0x0e1e,	// (0x0002ec78) cell_ituss_key_pane_g2

0x0001,

0xfef9,	// (0x0003dd53) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x0003dd53) cell_ituss_key_pane_g

0x0e31,	// (0x0002ec8b) cell_ituss_key_t1_ParamLimits

0x0e31,	// (0x0002ec8b) cell_ituss_key_t1

0x0e4f,	// (0x0002eca9) cell_ituss_key_t2_ParamLimits

0x0e4f,	// (0x0002eca9) cell_ituss_key_t2

0x0e6e,	// (0x0002ecc8) cell_ituss_key_t3_ParamLimits

0x0e6e,	// (0x0002ecc8) cell_ituss_key_t3

0x0e8d,	// (0x0002ece7) cell_ituss_key_t4_ParamLimits

0x0e8d,	// (0x0002ece7) cell_ituss_key_t4

0x0003,

0xfefe,	// (0x0003dd58) cell_ituss_key_t_ParamLimits

0xfefe,	// (0x0003dd58) cell_ituss_key_t

0x0eac,	// (0x0002ed06) cell_vkbss_key_3p_pane_g1

0x0eb4,	// (0x0002ed0e) cell_vkbss_key_3p_pane_g2

0x0ebc,	// (0x0002ed16) cell_vkbss_key_3p_pane_g3

0x0002,

0xff07,	// (0x0003dd61) cell_vkbss_key_3p_pane_g

0x203b,	// (0x0002fe95) bg_popup_fep_char_preview_window_cp02

0x0ec4,	// (0x0002ed1e) popup_fep_char_pre_window_t1

0x5602,	// (0x0003345c) main_ai5_sk_pane

0x094c,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0958,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x096c,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x097b,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedf,	// (0x0003dd39) cell_contacts_ai5_widget_pane_g_ParamLimits

0x098e,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x5abb,	// (0x00033915) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x6bba,	// (0x00034a14) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
