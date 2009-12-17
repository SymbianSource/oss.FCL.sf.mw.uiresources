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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00026d97 };

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
0x90de,	// (0x0002fe75) Screen

0x90f0,	// (0x0002fe87) application_window_ParamLimits

0x90f0,	// (0x0002fe87) application_window

0x9108,	// (0x0002fe9f) screen_g1

0x9132,	// (0x0002fec9) area_bottom_pane_ParamLimits

0x9132,	// (0x0002fec9) area_bottom_pane

0x91dd,	// (0x0002ff74) area_top_pane_ParamLimits

0x91dd,	// (0x0002ff74) area_top_pane

0x4dcd,	// (0x0002bb64) main_pane_ParamLimits

0x4dcd,	// (0x0002bb64) main_pane

0x9255,	// (0x0002ffec) misc_graphics

0xa78e,	// (0x00031525) battery_pane_ParamLimits

0xa78e,	// (0x00031525) battery_pane

0xe2cf,	// (0x00035066) bg_status_flat_pane_g8

0xe2d7,	// (0x0003506e) bg_status_flat_pane_g9

0xd8e5,	// (0x0003467c) context_pane_ParamLimits

0xd8e5,	// (0x0003467c) context_pane

0xa8e8,	// (0x0003167f) navi_pane_ParamLimits

0xa8e8,	// (0x0003167f) navi_pane

0xa95d,	// (0x000316f4) signal_pane_ParamLimits

0xa95d,	// (0x000316f4) signal_pane

0x0008,

0xf8ab,	// (0x00036642) bg_status_flat_pane_g

0xa9e9,	// (0x00031780) status_pane_g1_ParamLimits

0xa9e9,	// (0x00031780) status_pane_g1

0xa9f5,	// (0x0003178c) status_pane_g2_ParamLimits

0xa9f5,	// (0x0003178c) status_pane_g2

0xd94b,	// (0x000346e2) status_pane_g3_ParamLimits

0xd94b,	// (0x000346e2) status_pane_g3

0x0004,

0xf7e5,	// (0x0003657c) status_pane_g_ParamLimits

0xf7e5,	// (0x0003657c) status_pane_g

0xaa01,	// (0x00031798) title_pane_ParamLimits

0xaa01,	// (0x00031798) title_pane

0xaa5c,	// (0x000317f3) uni_indicator_pane_ParamLimits

0xaa5c,	// (0x000317f3) uni_indicator_pane

0xd747,	// (0x000344de) bg_list_pane_ParamLimits

0xd747,	// (0x000344de) bg_list_pane

0xa156,	// (0x00030eed) find_pane

0xa15e,	// (0x00030ef5) listscroll_app_pane_ParamLimits

0xa15e,	// (0x00030ef5) listscroll_app_pane

0xd767,	// (0x000344fe) listscroll_form_pane

0xa16a,	// (0x00030f01) listscroll_gen_pane_ParamLimits

0xa16a,	// (0x00030f01) listscroll_gen_pane

0xd767,	// (0x000344fe) listscroll_set_pane

0xa17f,	// (0x00030f16) main_idle_act_pane

0xd525,	// (0x000342bc) main_idle_trad_pane

0xd525,	// (0x000342bc) main_list_empty_pane

0xccfa,	// (0x00033a91) main_midp_pane

0xd781,	// (0x00034518) main_pane_g1_ParamLimits

0xd781,	// (0x00034518) main_pane_g1

0xa192,	// (0x00030f29) popup_ai_message_window_ParamLimits

0xa192,	// (0x00030f29) popup_ai_message_window

0xa216,	// (0x00030fad) popup_fep_china_uni_window_ParamLimits

0xa216,	// (0x00030fad) popup_fep_china_uni_window

0xd7b1,	// (0x00034548) popup_fep_japan_candidate_window_ParamLimits

0xd7b1,	// (0x00034548) popup_fep_japan_candidate_window

0xd7cf,	// (0x00034566) popup_fep_japan_predictive_window_ParamLimits

0xd7cf,	// (0x00034566) popup_fep_japan_predictive_window

0xa254,	// (0x00030feb) popup_find_window

0xa26d,	// (0x00031004) popup_grid_graphic_window_ParamLimits

0xa26d,	// (0x00031004) popup_grid_graphic_window

0xd7fb,	// (0x00034592) popup_large_graphic_colour_window

0xa2e9,	// (0x00031080) popup_menu_window_ParamLimits

0xa2e9,	// (0x00031080) popup_menu_window

0xa447,	// (0x000311de) popup_note_image_window

0xa40f,	// (0x000311a6) popup_note_wait_window_ParamLimits

0xa40f,	// (0x000311a6) popup_note_wait_window

0xa45d,	// (0x000311f4) popup_note_window_ParamLimits

0xa45d,	// (0x000311f4) popup_note_window

0xa4f1,	// (0x00031288) popup_query_code_window_ParamLimits

0xa4f1,	// (0x00031288) popup_query_code_window

0xd81a,	// (0x000345b1) popup_query_data_code_window_ParamLimits

0xd81a,	// (0x000345b1) popup_query_data_code_window

0xa529,	// (0x000312c0) popup_query_data_window_ParamLimits

0xa529,	// (0x000312c0) popup_query_data_window

0xa59d,	// (0x00031334) popup_query_sat_info_window_ParamLimits

0xa59d,	// (0x00031334) popup_query_sat_info_window

0xa62a,	// (0x000313c1) popup_snote_single_graphic_window_ParamLimits

0xa62a,	// (0x000313c1) popup_snote_single_graphic_window

0xa62a,	// (0x000313c1) popup_snote_single_text_window_ParamLimits

0xa62a,	// (0x000313c1) popup_snote_single_text_window

0xd82f,	// (0x000345c6) popup_sub_window_general

0xd871,	// (0x00034608) popup_window_general_ParamLimits

0xd871,	// (0x00034608) popup_window_general

0xd884,	// (0x0003461b) power_save_pane

0xa008,	// (0x00030d9f) control_pane_g1_ParamLimits

0xa008,	// (0x00030d9f) control_pane_g1

0x5533,	// (0x0002c2ca) control_pane_g2_ParamLimits

0x5533,	// (0x0002c2ca) control_pane_g2

0xd731,	// (0x000344c8) control_pane_g3_ParamLimits

0xd731,	// (0x000344c8) control_pane_g3

0x0007,

0xf7cd,	// (0x00036564) control_pane_g_ParamLimits

0xf7cd,	// (0x00036564) control_pane_g

0xa05c,	// (0x00030df3) control_pane_t1_ParamLimits

0xa05c,	// (0x00030df3) control_pane_t1

0xa0b8,	// (0x00030e4f) control_pane_t2_ParamLimits

0xa0b8,	// (0x00030e4f) control_pane_t2

0x0002,

0xf7de,	// (0x00036575) control_pane_t_ParamLimits

0xf7de,	// (0x00036575) control_pane_t

0xd654,	// (0x000343eb) navi_navi_volume_pane_cp1

0xd65d,	// (0x000343f4) status_small_icon_pane

0xd665,	// (0x000343fc) status_small_pane_g1_ParamLimits

0xd665,	// (0x000343fc) status_small_pane_g1

0xd699,	// (0x00034430) status_small_pane_g2_ParamLimits

0xd699,	// (0x00034430) status_small_pane_g2

0xd6a5,	// (0x0003443c) status_small_pane_g3_ParamLimits

0xd6a5,	// (0x0003443c) status_small_pane_g3

0xd6b1,	// (0x00034448) status_small_pane_g4_ParamLimits

0xd6b1,	// (0x00034448) status_small_pane_g4

0xd6bd,	// (0x00034454) status_small_pane_g5_ParamLimits

0xd6bd,	// (0x00034454) status_small_pane_g5

0xd6ca,	// (0x00034461) status_small_pane_g6_ParamLimits

0xd6ca,	// (0x00034461) status_small_pane_g6

0x0007,

0xf7bc,	// (0x00036553) status_small_pane_g_ParamLimits

0xf7bc,	// (0x00036553) status_small_pane_g

0xd6fa,	// (0x00034491) status_small_pane_t1

0xd71d,	// (0x000344b4) status_small_wait_pane_ParamLimits

0xd71d,	// (0x000344b4) status_small_wait_pane

0x9ebe,	// (0x00030c55) aid_levels_signal_ParamLimits

0x9ebe,	// (0x00030c55) aid_levels_signal

0x9ed2,	// (0x00030c69) signal_pane_g1_ParamLimits

0x9ed2,	// (0x00030c69) signal_pane_g1

0x9eec,	// (0x00030c83) signal_pane_g2_ParamLimits

0x9eec,	// (0x00030c83) signal_pane_g2

0x0001,

0xf751,	// (0x000364e8) signal_pane_g_ParamLimits

0xf751,	// (0x000364e8) signal_pane_g

0xd0ca,	// (0x00033e61) context_pane_g1

0x9304,	// (0x0003009b) title_pane_g1

0x9352,	// (0x000300e9) title_pane_t1

0x93df,	// (0x00030176) title_pane_t2

0x9405,	// (0x0003019c) title_pane_t3

0x0002,

0xf59b,	// (0x00036332) title_pane_t

0xaa82,	// (0x00031819) aid_levels_battery_ParamLimits

0xaa82,	// (0x00031819) aid_levels_battery

0xaa9a,	// (0x00031831) battery_pane_g1_ParamLimits

0xaa9a,	// (0x00031831) battery_pane_g1

0xaab5,	// (0x0003184c) battery_pane_g2_ParamLimits

0xaab5,	// (0x0003184c) battery_pane_g2

0x0001,

0xf7f0,	// (0x00036587) battery_pane_g_ParamLimits

0xf7f0,	// (0x00036587) battery_pane_g

0xae24,	// (0x00031bbb) uni_indicator_pane_g1

0xae39,	// (0x00031bd0) uni_indicator_pane_g2

0xae4f,	// (0x00031be6) uni_indicator_pane_g3

0x0005,

0xf953,	// (0x000366ea) uni_indicator_pane_g

0xcc1e,	// (0x000339b5) navi_icon_pane_ParamLimits

0xcc1e,	// (0x000339b5) navi_icon_pane

0x9255,	// (0x0002ffec) navi_midp_pane

0x9255,	// (0x0002ffec) navi_navi_pane

0xcc1e,	// (0x000339b5) navi_text_pane_ParamLimits

0xcc1e,	// (0x000339b5) navi_text_pane

0x9108,	// (0x0002fe9f) status_small_wait_pane_g1

0x994a,	// (0x000306e1) status_small_wait_pane_g2

0x0001,

0xf94e,	// (0x000366e5) status_small_wait_pane_g

0xadca,	// (0x00031b61) navi_navi_icon_text_pane

0xadd2,	// (0x00031b69) navi_navi_pane_g1_ParamLimits

0xadd2,	// (0x00031b69) navi_navi_pane_g1

0xade4,	// (0x00031b7b) navi_navi_pane_g2_ParamLimits

0xade4,	// (0x00031b7b) navi_navi_pane_g2

0x0001,

0xf91c,	// (0x000366b3) navi_navi_pane_g_ParamLimits

0xf91c,	// (0x000366b3) navi_navi_pane_g

0xadf6,	// (0x00031b8d) navi_navi_tabs_pane

0xadca,	// (0x00031b61) navi_navi_text_pane

0xadca,	// (0x00031b61) navi_navi_volume_pane

0xe815,	// (0x000355ac) navi_text_pane_t1

0xe809,	// (0x000355a0) navi_icon_pane_g1

0xe75d,	// (0x000354f4) navi_navi_text_pane_t1

0x58b0,	// (0x0002c647) navi_navi_volume_pane_g1

0xadc1,	// (0x00031b58) volume_small_pane

0xad1d,	// (0x00031ab4) navi_navi_icon_text_pane_g1

0xad25,	// (0x00031abc) navi_navi_icon_text_pane_t1

0xe317,	// (0x000350ae) navi_tabs_2_long_pane

0xe317,	// (0x000350ae) navi_tabs_2_pane

0xe317,	// (0x000350ae) navi_tabs_3_long_pane

0xe317,	// (0x000350ae) navi_tabs_3_pane

0xe317,	// (0x000350ae) navi_tabs_4_pane

0xacfd,	// (0x00031a94) tabs_2_active_pane_ParamLimits

0xacfd,	// (0x00031a94) tabs_2_active_pane

0xad0d,	// (0x00031aa4) tabs_2_passive_pane_ParamLimits

0xad0d,	// (0x00031aa4) tabs_2_passive_pane

0xaccb,	// (0x00031a62) tabs_3_active_pane_ParamLimits

0xaccb,	// (0x00031a62) tabs_3_active_pane

0xacdb,	// (0x00031a72) tabs_3_passive_pane_ParamLimits

0xacdb,	// (0x00031a72) tabs_3_passive_pane

0xacec,	// (0x00031a83) tabs_3_passive_pane_cp_ParamLimits

0xacec,	// (0x00031a83) tabs_3_passive_pane_cp

0xac87,	// (0x00031a1e) tabs_4_active_pane_ParamLimits

0xac87,	// (0x00031a1e) tabs_4_active_pane

0xac98,	// (0x00031a2f) tabs_4_passive_pane_ParamLimits

0xac98,	// (0x00031a2f) tabs_4_passive_pane

0xaca9,	// (0x00031a40) tabs_4_passive_pane_cp_ParamLimits

0xaca9,	// (0x00031a40) tabs_4_passive_pane_cp

0xacba,	// (0x00031a51) tabs_4_passive_pane_cp2_ParamLimits

0xacba,	// (0x00031a51) tabs_4_passive_pane_cp2

0xac67,	// (0x000319fe) tabs_2_long_active_pane_ParamLimits

0xac67,	// (0x000319fe) tabs_2_long_active_pane

0xac77,	// (0x00031a0e) tabs_2_long_passive_pane_ParamLimits

0xac77,	// (0x00031a0e) tabs_2_long_passive_pane

0xac30,	// (0x000319c7) tabs_3_long_active_pane_ParamLimits

0xac30,	// (0x000319c7) tabs_3_long_active_pane

0xac43,	// (0x000319da) tabs_3_long_passive_pane_ParamLimits

0xac43,	// (0x000319da) tabs_3_long_passive_pane

0xac54,	// (0x000319eb) tabs_3_long_passive_pane_cp_ParamLimits

0xac54,	// (0x000319eb) tabs_3_long_passive_pane_cp

0x576b,	// (0x0002c502) volume_small_pane_g1

0x5774,	// (0x0002c50b) volume_small_pane_g2

0x577d,	// (0x0002c514) volume_small_pane_g3

0x5786,	// (0x0002c51d) volume_small_pane_g4

0x578f,	// (0x0002c526) volume_small_pane_g5

0x5798,	// (0x0002c52f) volume_small_pane_g6

0x57a1,	// (0x0002c538) volume_small_pane_g7

0x57aa,	// (0x0002c541) volume_small_pane_g8

0x57b3,	// (0x0002c54a) volume_small_pane_g9

0x57bc,	// (0x0002c553) volume_small_pane_g10

0x0009,

0xf8e8,	// (0x0003667f) volume_small_pane_g

0x9417,	// (0x000301ae) bg_active_tab_pane_cp2_ParamLimits

0x9417,	// (0x000301ae) bg_active_tab_pane_cp2

0x9425,	// (0x000301bc) tabs_3_active_pane_g1

0x942d,	// (0x000301c4) tabs_3_active_pane_t1

0x9417,	// (0x000301ae) bg_passive_tab_pane_cp2_ParamLimits

0x9417,	// (0x000301ae) bg_passive_tab_pane_cp2

0x9425,	// (0x000301bc) tabs_3_passive_pane_g1

0x942d,	// (0x000301c4) tabs_3_passive_pane_t1

0x9417,	// (0x000301ae) bg_active_tab_pane_cp3_ParamLimits

0x9417,	// (0x000301ae) bg_active_tab_pane_cp3

0xdc86,	// (0x00034a1d) tabs_4_active_pane_g1

0x9443,	// (0x000301da) tabs_4_active_pane_t1

0x9417,	// (0x000301ae) bg_passive_tab_pane_cp3_ParamLimits

0x9417,	// (0x000301ae) bg_passive_tab_pane_cp3

0xdc86,	// (0x00034a1d) tabs_4_1_passive_pane_g1

0x9443,	// (0x000301da) tabs_4_1_passive_pane_t1

0xccfa,	// (0x00033a91) list_highlight_pane_cp2

0xaf0b,	// (0x00031ca2) list_set_pane_ParamLimits

0xaf0b,	// (0x00031ca2) list_set_pane

0xaf99,	// (0x00031d30) main_pane_set_t1_ParamLimits

0xaf99,	// (0x00031d30) main_pane_set_t1

0xafb9,	// (0x00031d50) main_pane_set_t2_ParamLimits

0xafb9,	// (0x00031d50) main_pane_set_t2

0xafcd,	// (0x00031d64) main_pane_set_t3_ParamLimits

0xafcd,	// (0x00031d64) main_pane_set_t3

0xafdf,	// (0x00031d76) main_pane_set_t4_ParamLimits

0xafdf,	// (0x00031d76) main_pane_set_t4

0x0003,

0xf9b8,	// (0x0003674f) main_pane_set_t_ParamLimits

0xf9b8,	// (0x0003674f) main_pane_set_t

0xaff1,	// (0x00031d88) setting_code_pane

0xaff9,	// (0x00031d90) setting_slider_graphic_pane

0xaff9,	// (0x00031d90) setting_slider_pane

0xaff9,	// (0x00031d90) setting_text_pane

0xaff9,	// (0x00031d90) setting_volume_pane

0x9459,	// (0x000301f0) volume_set_pane

0x9461,	// (0x000301f8) bg_set_opt_pane_cp

0x946f,	// (0x00030206) setting_slider_pane_t1

0x9485,	// (0x0003021c) setting_slider_pane_t2

0x949e,	// (0x00030235) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00036339) setting_slider_pane_t

0x94b5,	// (0x0003024c) slider_set_pane

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp2

0x94cb,	// (0x00030262) setting_slider_graphic_pane_g1

0x94d4,	// (0x0003026b) setting_slider_graphic_pane_t1

0x94e3,	// (0x0003027a) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00036340) setting_slider_graphic_pane_t

0x94f2,	// (0x00030289) slider_set_pane_cp

0x9255,	// (0x0002ffec) input_focus_pane_cp1

0xec65,	// (0x000359fc) list_set_text_pane

0x9108,	// (0x0002fe9f) setting_text_pane_g1

0x9255,	// (0x0002ffec) input_focus_pane_cp2

0x9108,	// (0x0002fe9f) setting_code_pane_g1

0x94fa,	// (0x00030291) setting_code_pane_t1

0x8911,	// (0x0002f6a8) set_text_pane_t1_ParamLimits

0x8911,	// (0x0002f6a8) set_text_pane_t1

0xcbcd,	// (0x00033964) set_opt_bg_pane_g1

0xcbd5,	// (0x0003396c) set_opt_bg_pane_g2

0xaecb,	// (0x00031c62) set_opt_bg_pane_g3

0xcbe5,	// (0x0003397c) set_opt_bg_pane_g4

0xcbed,	// (0x00033984) set_opt_bg_pane_g5

0xcbf5,	// (0x0003398c) set_opt_bg_pane_g6

0xaed3,	// (0x00031c6a) set_opt_bg_pane_g7

0xaedb,	// (0x00031c72) set_opt_bg_pane_g8

0xaee3,	// (0x00031c7a) set_opt_bg_pane_g9

0x0008,

0xf9a5,	// (0x0003673c) set_opt_bg_pane_g

0xec58,	// (0x000359ef) slider_set_pane_g1

0x5911,	// (0x0002c6a8) slider_set_pane_g2

0x0006,

0xf996,	// (0x0003672d) slider_set_pane_g

0xae65,	// (0x00031bfc) volume_set_pane_g1

0xae6d,	// (0x00031c04) volume_set_pane_g2

0xae75,	// (0x00031c0c) volume_set_pane_g3

0xae7d,	// (0x00031c14) volume_set_pane_g4

0xae85,	// (0x00031c1c) volume_set_pane_g5

0xae8d,	// (0x00031c24) volume_set_pane_g6

0xae95,	// (0x00031c2c) volume_set_pane_g7

0xae9d,	// (0x00031c34) volume_set_pane_g8

0xaea5,	// (0x00031c3c) volume_set_pane_g9

0xaead,	// (0x00031c44) volume_set_pane_g10

0x0009,

0xf96e,	// (0x00036705) volume_set_pane_g

0x9508,	// (0x0003029f) indicator_pane_ParamLimits

0x9508,	// (0x0003029f) indicator_pane

0x9530,	// (0x000302c7) main_idle_pane_g2_ParamLimits

0x9530,	// (0x000302c7) main_idle_pane_g2

0x9560,	// (0x000302f7) main_pane_idle_g1_ParamLimits

0x9560,	// (0x000302f7) main_pane_idle_g1

0x9585,	// (0x0003031c) popup_clock_digital_analogue_window_ParamLimits

0x9585,	// (0x0003031c) popup_clock_digital_analogue_window

0x959c,	// (0x00030333) soft_indicator_pane_ParamLimits

0x959c,	// (0x00030333) soft_indicator_pane

0x95b6,	// (0x0003034d) wallpaper_pane_ParamLimits

0x95b6,	// (0x0003034d) wallpaper_pane

0x9108,	// (0x0002fe9f) wallpaper_pane_g1

0x95d0,	// (0x00030367) indicator_pane_g1_ParamLimits

0x95d0,	// (0x00030367) indicator_pane_g1

0xed5f,	// (0x00035af6) navi_navi_icon_text_pane_srt_g1

0x95f8,	// (0x0003038f) soft_indicator_pane_t1

0x9612,	// (0x000303a9) aid_ps_area_pane

0x9623,	// (0x000303ba) aid_ps_clock_pane

0x962f,	// (0x000303c6) aid_ps_indicator_pane

0x963b,	// (0x000303d2) indicator_ps_pane_ParamLimits

0x963b,	// (0x000303d2) indicator_ps_pane

0x964a,	// (0x000303e1) power_save_pane_g1_ParamLimits

0x964a,	// (0x000303e1) power_save_pane_g1

0x9656,	// (0x000303ed) power_save_pane_g2_ParamLimits

0x9656,	// (0x000303ed) power_save_pane_g2

0x4d49,	// (0x0002bae0) aid_navinavi_width_pane

0x9612,	// (0x000303a9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00036345) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00036345) power_save_pane_g

0x9664,	// (0x000303fb) power_save_pane_t1_ParamLimits

0x9664,	// (0x000303fb) power_save_pane_t1

0x9623,	// (0x000303ba) aid_ps_clock_pane_ParamLimits

0x962f,	// (0x000303c6) aid_ps_indicator_pane_ParamLimits

0x9676,	// (0x0003040d) power_save_pane_t4_ParamLimits

0x9676,	// (0x0003040d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003634a) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003634a) power_save_pane_t

0x96a0,	// (0x00030437) power_save_t3_ParamLimits

0x96a0,	// (0x00030437) power_save_t3

0x968b,	// (0x00030422) power_save_t2_ParamLimits

0x968b,	// (0x00030422) power_save_t2

0x96b5,	// (0x0003044c) indicator_ps_pane_g1

0x96be,	// (0x00030455) ai_gene_pane_ParamLimits

0x96be,	// (0x00030455) ai_gene_pane

0x96d5,	// (0x0003046c) ai_links_pane_ParamLimits

0x96d5,	// (0x0003046c) ai_links_pane

0x96e7,	// (0x0003047e) indicator_pane_cp1_ParamLimits

0x96e7,	// (0x0003047e) indicator_pane_cp1

0x96f6,	// (0x0003048d) main_pane_idle_g1_cp_ParamLimits

0x96f6,	// (0x0003048d) main_pane_idle_g1_cp

0x970e,	// (0x000304a5) popup_ai_links_title_window

0x9717,	// (0x000304ae) soft_indicator_pane_cp1_ParamLimits

0x9717,	// (0x000304ae) soft_indicator_pane_cp1

0xea9a,	// (0x00035831) ai_links_pane_g1

0xeaa3,	// (0x0003583a) grid_ai_links_pane

0xae1b,	// (0x00031bb2) ai_gene_pane_1

0xea88,	// (0x0003581f) ai_gene_pane_2

0xea91,	// (0x00035828) list_highlight_pane_cp4

0xadff,	// (0x00031b96) cell_ai_link_pane_ParamLimits

0xadff,	// (0x00031b96) cell_ai_link_pane

0xea80,	// (0x00035817) cell_ai_link_pane_g1

0x994a,	// (0x000306e1) cell_ai_link_pane_g2

0x0001,

0xf949,	// (0x000366e0) cell_ai_link_pane_g

0x9255,	// (0x0002ffec) grid_highlight_cp2

0x9255,	// (0x0002ffec) bg_popup_sub_pane_cp1

0x9739,	// (0x000304d0) popup_ai_links_title_window_t1

0xe9d2,	// (0x00035769) ai_gene_pane_1_g1_ParamLimits

0xe9d2,	// (0x00035769) ai_gene_pane_1_g1

0xe9de,	// (0x00035775) ai_gene_pane_1_g2_ParamLimits

0xe9de,	// (0x00035775) ai_gene_pane_1_g2

0x0001,

0xf93f,	// (0x000366d6) ai_gene_pane_1_g_ParamLimits

0xf93f,	// (0x000366d6) ai_gene_pane_1_g

0xe9eb,	// (0x00035782) ai_gene_pane_1_t1_ParamLimits

0xe9eb,	// (0x00035782) ai_gene_pane_1_t1

0xea1f,	// (0x000357b6) grid_ai_soft_ind_pane

0xe9bd,	// (0x00035754) ai_gene_pane_2_t1_ParamLimits

0xe9bd,	// (0x00035754) ai_gene_pane_2_t1

0x9748,	// (0x000304df) main_pane_empty_t1_ParamLimits

0x9748,	// (0x000304df) main_pane_empty_t1

0x9765,	// (0x000304fc) main_pane_empty_t2_ParamLimits

0x9765,	// (0x000304fc) main_pane_empty_t2

0x977d,	// (0x00030514) main_pane_empty_t3_ParamLimits

0x977d,	// (0x00030514) main_pane_empty_t3

0x9790,	// (0x00030527) main_pane_empty_t4_ParamLimits

0x9790,	// (0x00030527) main_pane_empty_t4

0x97a3,	// (0x0003053a) main_pane_empty_t5_ParamLimits

0x97a3,	// (0x0003053a) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003634f) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003634f) main_pane_empty_t

0xcc1e,	// (0x000339b5) bg_popup_window_pane_ParamLimits

0xcc1e,	// (0x000339b5) bg_popup_window_pane

0xe76c,	// (0x00035503) find_popup_pane_cp2_ParamLimits

0xe76c,	// (0x00035503) find_popup_pane_cp2

0xe778,	// (0x0003550f) heading_pane_ParamLimits

0xe778,	// (0x0003550f) heading_pane

0x9255,	// (0x0002ffec) bg_popup_sub_pane

0xad42,	// (0x00031ad9) bg_popup_window_pane_g1_ParamLimits

0xad42,	// (0x00031ad9) bg_popup_window_pane_g1

0xad51,	// (0x00031ae8) bg_popup_window_pane_g2_ParamLimits

0xad51,	// (0x00031ae8) bg_popup_window_pane_g2

0xad5d,	// (0x00031af4) bg_popup_window_pane_g3_ParamLimits

0xad5d,	// (0x00031af4) bg_popup_window_pane_g3

0xad69,	// (0x00031b00) bg_popup_window_pane_g4_ParamLimits

0xad69,	// (0x00031b00) bg_popup_window_pane_g4

0xad78,	// (0x00031b0f) bg_popup_window_pane_g5_ParamLimits

0xad78,	// (0x00031b0f) bg_popup_window_pane_g5

0xad88,	// (0x00031b1f) bg_popup_window_pane_g6_ParamLimits

0xad88,	// (0x00031b1f) bg_popup_window_pane_g6

0xad94,	// (0x00031b2b) bg_popup_window_pane_g7_ParamLimits

0xad94,	// (0x00031b2b) bg_popup_window_pane_g7

0xada3,	// (0x00031b3a) bg_popup_window_pane_g8_ParamLimits

0xada3,	// (0x00031b3a) bg_popup_window_pane_g8

0xadb2,	// (0x00031b49) bg_popup_window_pane_g9_ParamLimits

0xadb2,	// (0x00031b49) bg_popup_window_pane_g9

0xe751,	// (0x000354e8) bg_popup_window_pane_g10_ParamLimits

0xe751,	// (0x000354e8) bg_popup_window_pane_g10

0x0009,

0xf907,	// (0x0003669e) bg_popup_window_pane_g_ParamLimits

0xf907,	// (0x0003669e) bg_popup_window_pane_g

0xe708,	// (0x0003549f) bg_popup_heading_pane_ParamLimits

0xe708,	// (0x0003549f) bg_popup_heading_pane

0x5980,	// (0x0002c717) tabs_4_passive_pane_cp_srt_ParamLimits

0x5980,	// (0x0002c717) tabs_4_passive_pane_cp_srt

0x5992,	// (0x0002c729) tabs_4_passive_pane_srt_ParamLimits

0xe71c,	// (0x000354b3) heading_pane_g2

0x5992,	// (0x0002c729) tabs_4_passive_pane_srt

0xdb21,	// (0x000348b8) bg_passive_tab_pane_cp3_srt_ParamLimits

0xdb21,	// (0x000348b8) bg_passive_tab_pane_cp3_srt

0xe724,	// (0x000354bb) heading_pane_t1_ParamLimits

0xe724,	// (0x000354bb) heading_pane_t1

0xe73b,	// (0x000354d2) heading_pane_t2_ParamLimits

0xe73b,	// (0x000354d2) heading_pane_t2

0x0001,

0xf902,	// (0x00036699) heading_pane_t_ParamLimits

0xf902,	// (0x00036699) heading_pane_t

0xe297,	// (0x0003502e) bg_popup_heading_pane_g1

0xe328,	// (0x000350bf) bg_popup_heading_pane_g2

0xe330,	// (0x000350c7) bg_popup_heading_pane_g3

0xe338,	// (0x000350cf) bg_popup_heading_pane_g4

0xe340,	// (0x000350d7) bg_popup_heading_pane_g5

0xe348,	// (0x000350df) bg_popup_heading_pane_g6

0xe350,	// (0x000350e7) bg_popup_heading_pane_g7

0xe358,	// (0x000350ef) bg_popup_heading_pane_g8

0xe360,	// (0x000350f7) bg_popup_heading_pane_g9

0x0008,

0xf8be,	// (0x00036655) bg_popup_heading_pane_g

0xda33,	// (0x000347ca) bg_popup_sub_pane_g1

0xda3b,	// (0x000347d2) bg_popup_sub_pane_g2

0xda43,	// (0x000347da) bg_popup_sub_pane_g3

0xda4b,	// (0x000347e2) bg_popup_sub_pane_g4

0xda53,	// (0x000347ea) bg_popup_sub_pane_g5

0xda5b,	// (0x000347f2) bg_popup_sub_pane_g6

0xda63,	// (0x000347fa) bg_popup_sub_pane_g7

0xda6b,	// (0x00034802) bg_popup_sub_pane_g8

0xda73,	// (0x0003480a) bg_popup_sub_pane_g9

0x0008,

0xf898,	// (0x0003662f) bg_popup_sub_pane_g

0x9417,	// (0x000301ae) bg_popup_window_pane_cp5_ParamLimits

0x9417,	// (0x000301ae) bg_popup_window_pane_cp5

0x97c4,	// (0x0003055b) popup_note_window_g1_ParamLimits

0x97c4,	// (0x0003055b) popup_note_window_g1

0x97d0,	// (0x00030567) popup_note_window_t1_ParamLimits

0x97d0,	// (0x00030567) popup_note_window_t1

0x97e6,	// (0x0003057d) popup_note_window_t2_ParamLimits

0x97e6,	// (0x0003057d) popup_note_window_t2

0x97fc,	// (0x00030593) popup_note_window_t3_ParamLimits

0x97fc,	// (0x00030593) popup_note_window_t3

0x9812,	// (0x000305a9) popup_note_window_t4_ParamLimits

0x9812,	// (0x000305a9) popup_note_window_t4

0x983a,	// (0x000305d1) popup_note_window_t5_ParamLimits

0x983a,	// (0x000305d1) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003635a) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003635a) popup_note_window_t

0x985e,	// (0x000305f5) bg_popup_window_pane_cp6_ParamLimits

0x985e,	// (0x000305f5) bg_popup_window_pane_cp6

0xe213,	// (0x00034faa) popup_note_image_window_g1_ParamLimits

0xe213,	// (0x00034faa) popup_note_image_window_g1

0xe21f,	// (0x00034fb6) popup_note_image_window_g2_ParamLimits

0xe21f,	// (0x00034fb6) popup_note_image_window_g2

0x0001,

0xf88c,	// (0x00036623) popup_note_image_window_g_ParamLimits

0xf88c,	// (0x00036623) popup_note_image_window_g

0xe238,	// (0x00034fcf) popup_note_image_window_t1_ParamLimits

0xe238,	// (0x00034fcf) popup_note_image_window_t1

0xe251,	// (0x00034fe8) popup_note_image_window_t2_ParamLimits

0xe251,	// (0x00034fe8) popup_note_image_window_t2

0xe26a,	// (0x00035001) popup_note_image_window_t3_ParamLimits

0xe26a,	// (0x00035001) popup_note_image_window_t3

0x0002,

0xf891,	// (0x00036628) popup_note_image_window_t_ParamLimits

0xf891,	// (0x00036628) popup_note_image_window_t

0xe0fe,	// (0x00034e95) bg_popup_window_pane_cp7_ParamLimits

0xe0fe,	// (0x00034e95) bg_popup_window_pane_cp7

0xe12e,	// (0x00034ec5) popup_note_wait_window_g1_ParamLimits

0xe12e,	// (0x00034ec5) popup_note_wait_window_g1

0xe13a,	// (0x00034ed1) popup_note_wait_window_g2_ParamLimits

0xe13a,	// (0x00034ed1) popup_note_wait_window_g2

0x0002,

0xf87a,	// (0x00036611) popup_note_wait_window_g_ParamLimits

0xf87a,	// (0x00036611) popup_note_wait_window_g

0xe152,	// (0x00034ee9) popup_note_wait_window_t1_ParamLimits

0xe152,	// (0x00034ee9) popup_note_wait_window_t1

0xe179,	// (0x00034f10) popup_note_wait_window_t2_ParamLimits

0xe179,	// (0x00034f10) popup_note_wait_window_t2

0xe196,	// (0x00034f2d) popup_note_wait_window_t3_ParamLimits

0xe196,	// (0x00034f2d) popup_note_wait_window_t3

0xe1a9,	// (0x00034f40) popup_note_wait_window_t4_ParamLimits

0xe1a9,	// (0x00034f40) popup_note_wait_window_t4

0x0004,

0xf881,	// (0x00036618) popup_note_wait_window_t_ParamLimits

0xf881,	// (0x00036618) popup_note_wait_window_t

0xe1ce,	// (0x00034f65) wait_bar_pane_ParamLimits

0xe1ce,	// (0x00034f65) wait_bar_pane

0x9255,	// (0x0002ffec) wait_anim_pane

0x9255,	// (0x0002ffec) wait_border_pane

0x9108,	// (0x0002fe9f) wait_anim_pane_g1

0x9108,	// (0x0002fe9f) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x000364e3) wait_anim_pane_g

0xe0ae,	// (0x00034e45) wait_border_pane_g1

0xe0b7,	// (0x00034e4e) wait_border_pane_g2

0xe0c0,	// (0x00034e57) wait_border_pane_g3

0x0002,

0xf873,	// (0x0003660a) wait_border_pane_g

0xe010,	// (0x00034da7) bg_popup_window_pane_cp16_ParamLimits

0xe010,	// (0x00034da7) bg_popup_window_pane_cp16

0xe01e,	// (0x00034db5) indicator_popup_pane_cp4_ParamLimits

0xe01e,	// (0x00034db5) indicator_popup_pane_cp4

0xe032,	// (0x00034dc9) popup_query_data_window_t1_ParamLimits

0xe032,	// (0x00034dc9) popup_query_data_window_t1

0xe044,	// (0x00034ddb) popup_query_data_window_t2_ParamLimits

0xe044,	// (0x00034ddb) popup_query_data_window_t2

0xe05d,	// (0x00034df4) popup_query_data_window_t3_ParamLimits

0xe05d,	// (0x00034df4) popup_query_data_window_t3

0x0002,

0xf86c,	// (0x00036603) popup_query_data_window_t_ParamLimits

0xf86c,	// (0x00036603) popup_query_data_window_t

0xe077,	// (0x00034e0e) query_popup_data_pane_ParamLimits

0xe077,	// (0x00034e0e) query_popup_data_pane

0xe08b,	// (0x00034e22) query_popup_data_pane_cp1_ParamLimits

0xe08b,	// (0x00034e22) query_popup_data_pane_cp1

0x985e,	// (0x000305f5) bg_popup_window_pane_cp10_ParamLimits

0x985e,	// (0x000305f5) bg_popup_window_pane_cp10

0xdf73,	// (0x00034d0a) indicator_popup_pane_ParamLimits

0xdf73,	// (0x00034d0a) indicator_popup_pane

0x98b5,	// (0x0003064c) popup_query_code_window_t1_ParamLimits

0x98b5,	// (0x0003064c) popup_query_code_window_t1

0xdf8b,	// (0x00034d22) popup_query_code_window_t2_ParamLimits

0xdf8b,	// (0x00034d22) popup_query_code_window_t2

0xdfc9,	// (0x00034d60) popup_query_code_window_t3_ParamLimits

0xdfc9,	// (0x00034d60) popup_query_code_window_t3

0x0002,

0xf865,	// (0x000365fc) popup_query_code_window_t_ParamLimits

0xf865,	// (0x000365fc) popup_query_code_window_t

0xdff8,	// (0x00034d8f) query_popup_pane_ParamLimits

0xdff8,	// (0x00034d8f) query_popup_pane

0x985e,	// (0x000305f5) bg_popup_window_pane_cp15_ParamLimits

0x985e,	// (0x000305f5) bg_popup_window_pane_cp15

0x987c,	// (0x00030613) indicator_popup_pane_cp1_ParamLimits

0x987c,	// (0x00030613) indicator_popup_pane_cp1

0x988f,	// (0x00030626) indicator_popup_pane_cp2_ParamLimits

0x988f,	// (0x00030626) indicator_popup_pane_cp2

0x98a2,	// (0x00030639) popup_query_data_code_window_g1_ParamLimits

0x98a2,	// (0x00030639) popup_query_data_code_window_g1

0x98b5,	// (0x0003064c) popup_query_data_code_window_t1_ParamLimits

0x98b5,	// (0x0003064c) popup_query_data_code_window_t1

0x98c7,	// (0x0003065e) popup_query_data_code_window_t2_ParamLimits

0x98c7,	// (0x0003065e) popup_query_data_code_window_t2

0x98d9,	// (0x00030670) popup_query_data_code_window_t3_ParamLimits

0x98d9,	// (0x00030670) popup_query_data_code_window_t3

0x98ef,	// (0x00030686) popup_query_data_code_window_t4_ParamLimits

0x98ef,	// (0x00030686) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00036365) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00036365) popup_query_data_code_window_t

0xd3a6,	// (0x0003413d) list_single_midp_graphic_pane_g3

0x9907,	// (0x0003069e) query_popup_data_pane_cp2_ParamLimits

0x991a,	// (0x000306b1) query_popup_pane_cp2_ParamLimits

0x991a,	// (0x000306b1) query_popup_pane_cp2

0x9255,	// (0x0002ffec) bg_popup_window_pane_cp11

0xdf47,	// (0x00034cde) heading_pane_cp5

0x99fe,	// (0x00030795) listscroll_popup_info_pane

0x9255,	// (0x0002ffec) input_focus_pane_cp3

0x992d,	// (0x000306c4) query_popup_pane_t1

0x993b,	// (0x000306d2) list_popup_info_pane_ParamLimits

0x993b,	// (0x000306d2) list_popup_info_pane

0x994a,	// (0x000306e1) listscroll_popup_info_pane_g1

0x9952,	// (0x000306e9) scroll_pane_cp7

0x995a,	// (0x000306f1) popup_info_list_pane_t1_ParamLimits

0x995a,	// (0x000306f1) popup_info_list_pane_t1

0x9974,	// (0x0003070b) popup_info_list_pane_t2_ParamLimits

0x9974,	// (0x0003070b) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003636e) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003636e) popup_info_list_pane_t

0x9255,	// (0x0002ffec) bg_popup_window_pane_cp12

0xed79,	// (0x00035b10) find_popup_pane

0x9461,	// (0x000301f8) bg_popup_window_pane_cp3

0x998e,	// (0x00030725) heading_pane_cp3

0x999a,	// (0x00030731) listscroll_popup_graphic_pane

0x9255,	// (0x0002ffec) bg_popup_window_pane_cp4

0x99f6,	// (0x0003078d) heading_pane_cp4

0x99fe,	// (0x00030795) listscroll_popup_colour_pane

0x9a06,	// (0x0003079d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a06,	// (0x0003079d) cell_large_graphic_colour_none_popup_pane

0x9a16,	// (0x000307ad) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a16,	// (0x000307ad) grid_large_graphic_colour_popup_pane

0x9a32,	// (0x000307c9) listscroll_popup_colour_pane_g1_ParamLimits

0x9a32,	// (0x000307c9) listscroll_popup_colour_pane_g1

0x9a49,	// (0x000307e0) listscroll_popup_colour_pane_g2_ParamLimits

0x9a49,	// (0x000307e0) listscroll_popup_colour_pane_g2

0x9a5d,	// (0x000307f4) listscroll_popup_colour_pane_g3_ParamLimits

0x9a5d,	// (0x000307f4) listscroll_popup_colour_pane_g3

0x9a6d,	// (0x00030804) listscroll_popup_colour_pane_g4_ParamLimits

0x9a6d,	// (0x00030804) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00036373) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00036373) listscroll_popup_colour_pane_g

0x9a7c,	// (0x00030813) scroll_pane_cp6_ParamLimits

0x9a7c,	// (0x00030813) scroll_pane_cp6

0x9a8e,	// (0x00030825) cell_large_graphic_colour_popup_pane_ParamLimits

0x9a8e,	// (0x00030825) cell_large_graphic_colour_popup_pane

0x9aad,	// (0x00030844) cell_large_graphic_colour_none_popup_pane_t1

0x9255,	// (0x0002ffec) grid_highlight_pane_cp5

0x9abc,	// (0x00030853) cell_large_graphic_colour_popup_pane_g1

0x9ac4,	// (0x0003085b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003637c) cell_large_graphic_colour_popup_pane_g

0x9acc,	// (0x00030863) cell_large_graphic_colour_popup_pane_g2_copy1

0x9ad5,	// (0x0003086c) grid_highlight_pane_cp4

0x9add,	// (0x00030874) bg_popup_window_pane_cp8_ParamLimits

0x9add,	// (0x00030874) bg_popup_window_pane_cp8

0x9af8,	// (0x0003088f) popup_snote_single_text_window_g1_ParamLimits

0x9af8,	// (0x0003088f) popup_snote_single_text_window_g1

0x9b0a,	// (0x000308a1) popup_snote_single_text_window_t1_ParamLimits

0x9b0a,	// (0x000308a1) popup_snote_single_text_window_t1

0x9b1d,	// (0x000308b4) popup_snote_single_text_window_t2_ParamLimits

0x9b1d,	// (0x000308b4) popup_snote_single_text_window_t2

0x9b30,	// (0x000308c7) popup_snote_single_text_window_t3_ParamLimits

0x9b30,	// (0x000308c7) popup_snote_single_text_window_t3

0x9b69,	// (0x00030900) popup_snote_single_text_window_t4_ParamLimits

0x9b69,	// (0x00030900) popup_snote_single_text_window_t4

0x9b9d,	// (0x00030934) popup_snote_single_text_window_t5_ParamLimits

0x9b9d,	// (0x00030934) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00036381) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00036381) popup_snote_single_text_window_t

0x9bcc,	// (0x00030963) bg_popup_window_pane_cp9_ParamLimits

0x9bcc,	// (0x00030963) bg_popup_window_pane_cp9

0x9af8,	// (0x0003088f) popup_snote_single_graphic_window_g1_ParamLimits

0x9af8,	// (0x0003088f) popup_snote_single_graphic_window_g1

0x9bda,	// (0x00030971) popup_snote_single_graphic_window_g2_ParamLimits

0x9bda,	// (0x00030971) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003638c) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003638c) popup_snote_single_graphic_window_g

0x9be6,	// (0x0003097d) popup_snote_single_graphic_window_t1_ParamLimits

0x9be6,	// (0x0003097d) popup_snote_single_graphic_window_t1

0x9bf9,	// (0x00030990) popup_snote_single_graphic_window_t2_ParamLimits

0x9bf9,	// (0x00030990) popup_snote_single_graphic_window_t2

0x9b30,	// (0x000308c7) popup_snote_single_graphic_window_t3_ParamLimits

0x9b30,	// (0x000308c7) popup_snote_single_graphic_window_t3

0x9b69,	// (0x00030900) popup_snote_single_graphic_window_t4_ParamLimits

0x9b69,	// (0x00030900) popup_snote_single_graphic_window_t4

0x9b9d,	// (0x00030934) popup_snote_single_graphic_window_t5_ParamLimits

0x9b9d,	// (0x00030934) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00036391) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00036391) popup_snote_single_graphic_window_t

0xb0f3,	// (0x00031e8a) grid_graphic_popup_pane_ParamLimits

0xb0f3,	// (0x00031e8a) grid_graphic_popup_pane

0xb116,	// (0x00031ead) listscroll_popup_graphic_pane_g1_ParamLimits

0xb116,	// (0x00031ead) listscroll_popup_graphic_pane_g1

0xb12a,	// (0x00031ec1) listscroll_popup_graphic_pane_g2_ParamLimits

0xb12a,	// (0x00031ec1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e2,	// (0x00036779) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e2,	// (0x00036779) listscroll_popup_graphic_pane_g

0xdf0f,	// (0x00034ca6) scroll_pane_cp5

0xb0ae,	// (0x00031e45) cell_graphic_popup_pane_ParamLimits

0xb0ae,	// (0x00031e45) cell_graphic_popup_pane

0xed22,	// (0x00035ab9) cell_graphic_popup_pane_g1

0xed2a,	// (0x00035ac1) cell_graphic_popup_pane_g2

0x9acc,	// (0x00030863) cell_graphic_popup_pane_g3

0x0002,

0xf9db,	// (0x00036772) cell_graphic_popup_pane_g

0xed33,	// (0x00035aca) cell_graphic_popup_pane_t2

0x9ad5,	// (0x0003086c) grid_highlight_pane_cp3

0x9c1e,	// (0x000309b5) list_gen_pane_ParamLimits

0x9c1e,	// (0x000309b5) list_gen_pane

0x9c4f,	// (0x000309e6) scroll_pane

0xb081,	// (0x00031e18) bg_list_pane_g1_ParamLimits

0xb081,	// (0x00031e18) bg_list_pane_g1

0xecd9,	// (0x00035a70) bg_list_pane_g2_ParamLimits

0xecd9,	// (0x00035a70) bg_list_pane_g2

0xecec,	// (0x00035a83) bg_list_pane_g3_ParamLimits

0xecec,	// (0x00035a83) bg_list_pane_g3

0xecfe,	// (0x00035a95) bg_list_pane_g4_ParamLimits

0xecfe,	// (0x00035a95) bg_list_pane_g4

0xb09c,	// (0x00031e33) bg_list_pane_g5_ParamLimits

0xb09c,	// (0x00031e33) bg_list_pane_g5

0x0004,

0xf9d0,	// (0x00036767) bg_list_pane_g_ParamLimits

0xf9d0,	// (0x00036767) bg_list_pane_g

0xb026,	// (0x00031dbd) list_double2_graphic_large_graphic_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double2_graphic_large_graphic_pane

0xb026,	// (0x00031dbd) list_double2_graphic_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double2_graphic_pane

0xb026,	// (0x00031dbd) list_double2_large_graphic_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double2_large_graphic_pane

0xb026,	// (0x00031dbd) list_double2_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double2_pane

0xb026,	// (0x00031dbd) list_double_graphic_heading_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_graphic_heading_pane

0xb026,	// (0x00031dbd) list_double_graphic_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_graphic_pane

0xb026,	// (0x00031dbd) list_double_heading_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_heading_pane

0xb026,	// (0x00031dbd) list_double_large_graphic_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_large_graphic_pane

0xb026,	// (0x00031dbd) list_double_number_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_number_pane

0xb026,	// (0x00031dbd) list_double_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_pane

0xb026,	// (0x00031dbd) list_double_time_pane_ParamLimits

0xb026,	// (0x00031dbd) list_double_time_pane

0xb026,	// (0x00031dbd) list_setting_number_pane_ParamLimits

0xb026,	// (0x00031dbd) list_setting_number_pane

0xb026,	// (0x00031dbd) list_setting_pane_ParamLimits

0xb026,	// (0x00031dbd) list_setting_pane

0xb037,	// (0x00031dce) list_single_2graphic_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_2graphic_pane

0xb037,	// (0x00031dce) list_single_graphic_heading_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_graphic_heading_pane

0xb037,	// (0x00031dce) list_single_graphic_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_graphic_pane

0xb037,	// (0x00031dce) list_single_heading_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_heading_pane

0xb06f,	// (0x00031e06) list_single_large_graphic_pane_ParamLimits

0xb06f,	// (0x00031e06) list_single_large_graphic_pane

0xb037,	// (0x00031dce) list_single_number_heading_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_number_heading_pane

0xb037,	// (0x00031dce) list_single_number_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_number_pane

0xb037,	// (0x00031dce) list_single_pane_ParamLimits

0xb037,	// (0x00031dce) list_single_pane

0x9255,	// (0x0002ffec) list_highlight_pane_cp1

0x507d,	// (0x0002be14) list_single_pane_g1_ParamLimits

0x507d,	// (0x0002be14) list_single_pane_g1

0x5089,	// (0x0002be20) list_single_pane_g2_ParamLimits

0x5089,	// (0x0002be20) list_single_pane_g2

0x0001,

0xf616,	// (0x000363ad) list_single_pane_g_ParamLimits

0xf616,	// (0x000363ad) list_single_pane_g

0x4150,	// (0x0002aee7) list_single_pane_t1_ParamLimits

0x4150,	// (0x0002aee7) list_single_pane_t1

0x507d,	// (0x0002be14) list_single_number_pane_g1_ParamLimits

0x507d,	// (0x0002be14) list_single_number_pane_g1

0x5089,	// (0x0002be20) list_single_number_pane_g2_ParamLimits

0x5089,	// (0x0002be20) list_single_number_pane_g2

0x0001,

0xf616,	// (0x000363ad) list_single_number_pane_g_ParamLimits

0xf616,	// (0x000363ad) list_single_number_pane_g

0x41cd,	// (0x0002af64) list_single_number_pane_t1_ParamLimits

0x41cd,	// (0x0002af64) list_single_number_pane_t1

0x8ecb,	// (0x0002fc62) list_single_number_pane_t2_ParamLimits

0x8ecb,	// (0x0002fc62) list_single_number_pane_t2

0x0001,

0xf991,	// (0x00036728) list_single_number_pane_t_ParamLimits

0xf991,	// (0x00036728) list_single_number_pane_t

0x41f5,	// (0x0002af8c) list_single_graphic_pane_g1_ParamLimits

0x41f5,	// (0x0002af8c) list_single_graphic_pane_g1

0x507d,	// (0x0002be14) list_single_graphic_pane_g2_ParamLimits

0x507d,	// (0x0002be14) list_single_graphic_pane_g2

0x5089,	// (0x0002be20) list_single_graphic_pane_g3_ParamLimits

0x5089,	// (0x0002be20) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003639c) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003639c) list_single_graphic_pane_g

0x41cd,	// (0x0002af64) list_single_graphic_pane_t1_ParamLimits

0x41cd,	// (0x0002af64) list_single_graphic_pane_t1

0x892a,	// (0x0002f6c1) list_single_heading_pane_g1_ParamLimits

0x892a,	// (0x0002f6c1) list_single_heading_pane_g1

0x5089,	// (0x0002be20) list_single_heading_pane_g2_ParamLimits

0x5089,	// (0x0002be20) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x000363a3) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x000363a3) list_single_heading_pane_g

0x893d,	// (0x0002f6d4) list_single_heading_pane_t1_ParamLimits

0x893d,	// (0x0002f6d4) list_single_heading_pane_t1

0x9c84,	// (0x00030a1b) list_single_heading_pane_t2_ParamLimits

0x9c84,	// (0x00030a1b) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000363a8) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000363a8) list_single_heading_pane_t

0x507d,	// (0x0002be14) list_single_number_heading_pane_g1_ParamLimits

0x507d,	// (0x0002be14) list_single_number_heading_pane_g1

0x5089,	// (0x0002be20) list_single_number_heading_pane_g2_ParamLimits

0x5089,	// (0x0002be20) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x000363ad) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x000363ad) list_single_number_heading_pane_g

0x8953,	// (0x0002f6ea) list_single_number_heading_pane_t1_ParamLimits

0x8953,	// (0x0002f6ea) list_single_number_heading_pane_t1

0x8969,	// (0x0002f700) list_single_number_heading_pane_t2_ParamLimits

0x8969,	// (0x0002f700) list_single_number_heading_pane_t2

0x4912,	// (0x0002b6a9) list_single_number_heading_pane_t3_ParamLimits

0x4912,	// (0x0002b6a9) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x000363b2) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x000363b2) list_single_number_heading_pane_t

0x897b,	// (0x0002f712) list_single_graphic_heading_pane_g1_ParamLimits

0x897b,	// (0x0002f712) list_single_graphic_heading_pane_g1

0x9c96,	// (0x00030a2d) list_single_graphic_heading_pane_g4_ParamLimits

0x9c96,	// (0x00030a2d) list_single_graphic_heading_pane_g4

0x5089,	// (0x0002be20) list_single_graphic_heading_pane_g5_ParamLimits

0x5089,	// (0x0002be20) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x000363b9) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000363b9) list_single_graphic_heading_pane_g

0x8953,	// (0x0002f6ea) list_single_graphic_heading_pane_t1_ParamLimits

0x8953,	// (0x0002f6ea) list_single_graphic_heading_pane_t1

0x8991,	// (0x0002f728) list_single_graphic_heading_pane_t2_ParamLimits

0x8991,	// (0x0002f728) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000363c0) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000363c0) list_single_graphic_heading_pane_t

0x5051,	// (0x0002bde8) list_single_large_graphic_pane_g1_ParamLimits

0x5051,	// (0x0002bde8) list_single_large_graphic_pane_g1

0x505d,	// (0x0002bdf4) list_single_large_graphic_pane_g2_ParamLimits

0x505d,	// (0x0002bdf4) list_single_large_graphic_pane_g2

0x5069,	// (0x0002be00) list_single_large_graphic_pane_g3_ParamLimits

0x5069,	// (0x0002be00) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x000363c5) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x000363c5) list_single_large_graphic_pane_g

0xe0b7,	// (0x00034e4e) wait_border_pane_g2_copy1

0x5075,	// (0x0002be0c) list_single_large_graphic_pane_g4_cp2

0x413a,	// (0x0002aed1) list_single_large_graphic_pane_t1_ParamLimits

0x413a,	// (0x0002aed1) list_single_large_graphic_pane_t1

0x9ca7,	// (0x00030a3e) list_double_pane_g1_ParamLimits

0x9ca7,	// (0x00030a3e) list_double_pane_g1

0x9cb3,	// (0x00030a4a) list_double_pane_g2_ParamLimits

0x9cb3,	// (0x00030a4a) list_double_pane_g2

0x0001,

0xf635,	// (0x000363cc) list_double_pane_g_ParamLimits

0xf635,	// (0x000363cc) list_double_pane_g

0x89a9,	// (0x0002f740) list_double_pane_t1_ParamLimits

0x89a9,	// (0x0002f740) list_double_pane_t1

0x89bf,	// (0x0002f756) list_double_pane_t2_ParamLimits

0x89bf,	// (0x0002f756) list_double_pane_t2

0x0001,

0xf63a,	// (0x000363d1) list_double_pane_t_ParamLimits

0xf63a,	// (0x000363d1) list_double_pane_t

0x89d1,	// (0x0002f768) list_double2_pane_g1_ParamLimits

0x89d1,	// (0x0002f768) list_double2_pane_g1

0x89e2,	// (0x0002f779) list_double2_pane_g2_ParamLimits

0x89e2,	// (0x0002f779) list_double2_pane_g2

0x0001,

0xf63f,	// (0x000363d6) list_double2_pane_g_ParamLimits

0xf63f,	// (0x000363d6) list_double2_pane_g

0x89ee,	// (0x0002f785) list_double2_pane_t1_ParamLimits

0x89ee,	// (0x0002f785) list_double2_pane_t1

0x8a04,	// (0x0002f79b) list_double2_pane_t2_ParamLimits

0x8a04,	// (0x0002f79b) list_double2_pane_t2

0x0001,

0xf644,	// (0x000363db) list_double2_pane_t_ParamLimits

0xf644,	// (0x000363db) list_double2_pane_t

0x9ca7,	// (0x00030a3e) list_double_number_pane_g1_ParamLimits

0x9ca7,	// (0x00030a3e) list_double_number_pane_g1

0x9cb3,	// (0x00030a4a) list_double_number_pane_g2_ParamLimits

0x9cb3,	// (0x00030a4a) list_double_number_pane_g2

0x0001,

0xf635,	// (0x000363cc) list_double_number_pane_g_ParamLimits

0xf635,	// (0x000363cc) list_double_number_pane_g

0x8a16,	// (0x0002f7ad) list_double_number_pane_t1_ParamLimits

0x8a16,	// (0x0002f7ad) list_double_number_pane_t1

0x8a28,	// (0x0002f7bf) list_double_number_pane_t2_ParamLimits

0x8a28,	// (0x0002f7bf) list_double_number_pane_t2

0x8a3e,	// (0x0002f7d5) list_double_number_pane_t3_ParamLimits

0x8a3e,	// (0x0002f7d5) list_double_number_pane_t3

0x0002,

0xf649,	// (0x000363e0) list_double_number_pane_t_ParamLimits

0xf649,	// (0x000363e0) list_double_number_pane_t

0x4323,	// (0x0002b0ba) list_double_graphic_pane_g1_ParamLimits

0x4323,	// (0x0002b0ba) list_double_graphic_pane_g1

0x9cbf,	// (0x00030a56) list_double_graphic_pane_g2_ParamLimits

0x9cbf,	// (0x00030a56) list_double_graphic_pane_g2

0x9cce,	// (0x00030a65) list_double_graphic_pane_g3_ParamLimits

0x9cce,	// (0x00030a65) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x000363e7) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x000363e7) list_double_graphic_pane_g

0x8a5c,	// (0x0002f7f3) list_double_graphic_pane_t1_ParamLimits

0x8a5c,	// (0x0002f7f3) list_double_graphic_pane_t1

0x8a72,	// (0x0002f809) list_double_graphic_pane_t2_ParamLimits

0x8a72,	// (0x0002f809) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x000363f0) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x000363f0) list_double_graphic_pane_t

0x4077,	// (0x0002ae0e) list_double2_graphic_pane_g1_ParamLimits

0x4077,	// (0x0002ae0e) list_double2_graphic_pane_g1

0x502a,	// (0x0002bdc1) list_double2_graphic_pane_g2_ParamLimits

0x502a,	// (0x0002bdc1) list_double2_graphic_pane_g2

0x5036,	// (0x0002bdcd) list_double2_graphic_pane_g3_ParamLimits

0x5036,	// (0x0002bdcd) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x000363f5) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x000363f5) list_double2_graphic_pane_g

0x4083,	// (0x0002ae1a) list_double2_graphic_pane_t1_ParamLimits

0x4083,	// (0x0002ae1a) list_double2_graphic_pane_t1

0x8a84,	// (0x0002f81b) list_double2_graphic_pane_t2_ParamLimits

0x8a84,	// (0x0002f81b) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x000363fc) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x000363fc) list_double2_graphic_pane_t

0x8a96,	// (0x0002f82d) list_double_large_graphic_pane_g1_ParamLimits

0x8a96,	// (0x0002f82d) list_double_large_graphic_pane_g1

0x8aba,	// (0x0002f851) list_double_large_graphic_pane_g2_ParamLimits

0x8aba,	// (0x0002f851) list_double_large_graphic_pane_g2

0x9cb3,	// (0x00030a4a) list_double_large_graphic_pane_g3_ParamLimits

0x9cb3,	// (0x00030a4a) list_double_large_graphic_pane_g3

0x8ad0,	// (0x0002f867) list_double_large_graphic_pane_g4_ParamLimits

0x8ad0,	// (0x0002f867) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x00036401) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x00036401) list_double_large_graphic_pane_g

0x8ae1,	// (0x0002f878) list_double_large_graphic_pane_t1_ParamLimits

0x8ae1,	// (0x0002f878) list_double_large_graphic_pane_t1

0x8afa,	// (0x0002f891) list_double_large_graphic_pane_t2_ParamLimits

0x8afa,	// (0x0002f891) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003640c) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003640c) list_double_large_graphic_pane_t

0x9cda,	// (0x00030a71) list_double2_large_graphic_pane_g1_ParamLimits

0x9cda,	// (0x00030a71) list_double2_large_graphic_pane_g1

0x8b0c,	// (0x0002f8a3) list_double2_large_graphic_pane_g2_ParamLimits

0x8b0c,	// (0x0002f8a3) list_double2_large_graphic_pane_g2

0x5036,	// (0x0002bdcd) list_double2_large_graphic_pane_g3_ParamLimits

0x5036,	// (0x0002bdcd) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x00036411) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x00036411) list_double2_large_graphic_pane_g

0x40d4,	// (0x0002ae6b) list_double2_large_graphic_pane_t1_ParamLimits

0x40d4,	// (0x0002ae6b) list_double2_large_graphic_pane_t1

0x8b1d,	// (0x0002f8b4) list_double2_large_graphic_pane_t2_ParamLimits

0x8b1d,	// (0x0002f8b4) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x00036418) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x00036418) list_double2_large_graphic_pane_t

0x8b2f,	// (0x0002f8c6) list_double_heading_pane_g1_ParamLimits

0x8b2f,	// (0x0002f8c6) list_double_heading_pane_g1

0x9ce6,	// (0x00030a7d) list_double_heading_pane_g2_ParamLimits

0x9ce6,	// (0x00030a7d) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003641d) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003641d) list_double_heading_pane_g

0x8b40,	// (0x0002f8d7) list_double_heading_pane_t1_ParamLimits

0x8b40,	// (0x0002f8d7) list_double_heading_pane_t1

0x8a04,	// (0x0002f79b) list_double_heading_pane_t2_ParamLimits

0x8a04,	// (0x0002f79b) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x00036422) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x00036422) list_double_heading_pane_t

0x4323,	// (0x0002b0ba) list_double_graphic_heading_pane_g1_ParamLimits

0x4323,	// (0x0002b0ba) list_double_graphic_heading_pane_g1

0x8b2f,	// (0x0002f8c6) list_double_graphic_heading_pane_g2_ParamLimits

0x8b2f,	// (0x0002f8c6) list_double_graphic_heading_pane_g2

0x9ce6,	// (0x00030a7d) list_double_graphic_heading_pane_g3_ParamLimits

0x9ce6,	// (0x00030a7d) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x00036427) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x00036427) list_double_graphic_heading_pane_g

0x8b56,	// (0x0002f8ed) list_double_graphic_heading_pane_t1_ParamLimits

0x8b56,	// (0x0002f8ed) list_double_graphic_heading_pane_t1

0x8a84,	// (0x0002f81b) list_double_graphic_heading_pane_t2_ParamLimits

0x8a84,	// (0x0002f81b) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003642e) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003642e) list_double_graphic_heading_pane_t

0x8b6c,	// (0x0002f903) list_double_time_pane_g1_ParamLimits

0x8b6c,	// (0x0002f903) list_double_time_pane_g1

0x8b7d,	// (0x0002f914) list_double_time_pane_g2_ParamLimits

0x8b7d,	// (0x0002f914) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x00036433) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x00036433) list_double_time_pane_g

0x8b89,	// (0x0002f920) list_double_time_pane_t1_ParamLimits

0x8b89,	// (0x0002f920) list_double_time_pane_t1

0x8b9f,	// (0x0002f936) list_double_time_pane_t2_ParamLimits

0x8b9f,	// (0x0002f936) list_double_time_pane_t2

0x8bb1,	// (0x0002f948) list_double_time_pane_t3_ParamLimits

0x8bb1,	// (0x0002f948) list_double_time_pane_t3

0x8bc3,	// (0x0002f95a) list_double_time_pane_t4_ParamLimits

0x8bc3,	// (0x0002f95a) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x00036438) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x00036438) list_double_time_pane_t

0x47a4,	// (0x0002b53b) list_setting_pane_g1_ParamLimits

0x47a4,	// (0x0002b53b) list_setting_pane_g1

0x4354,	// (0x0002b0eb) list_setting_pane_g2_ParamLimits

0x4354,	// (0x0002b0eb) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x00036441) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x00036441) list_setting_pane_g

0x8bd5,	// (0x0002f96c) list_setting_pane_t1_ParamLimits

0x8bd5,	// (0x0002f96c) list_setting_pane_t1

0x8bef,	// (0x0002f986) list_setting_pane_t2_ParamLimits

0x8bef,	// (0x0002f986) list_setting_pane_t2

0x0002,

0xf6af,	// (0x00036446) list_setting_pane_t_ParamLimits

0xf6af,	// (0x00036446) list_setting_pane_t

0x8c2c,	// (0x0002f9c3) set_value_pane_cp_ParamLimits

0x8c2c,	// (0x0002f9c3) set_value_pane_cp

0x8c38,	// (0x0002f9cf) list_setting_number_pane_g1_ParamLimits

0x8c38,	// (0x0002f9cf) list_setting_number_pane_g1

0x8c44,	// (0x0002f9db) list_setting_number_pane_g2_ParamLimits

0x8c44,	// (0x0002f9db) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003644d) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003644d) list_setting_number_pane_g

0x8c50,	// (0x0002f9e7) list_setting_number_pane_t1_ParamLimits

0x8c50,	// (0x0002f9e7) list_setting_number_pane_t1

0x8c69,	// (0x0002fa00) list_setting_number_pane_t2_ParamLimits

0x8c69,	// (0x0002fa00) list_setting_number_pane_t2

0x8c83,	// (0x0002fa1a) list_setting_number_pane_t3_ParamLimits

0x8c83,	// (0x0002fa1a) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x00036452) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x00036452) list_setting_number_pane_t

0x8c2c,	// (0x0002f9c3) set_value_pane_ParamLimits

0x8c2c,	// (0x0002f9c3) set_value_pane

0xcb36,	// (0x000338cd) bg_set_opt_pane_ParamLimits

0xcb36,	// (0x000338cd) bg_set_opt_pane

0x44a5,	// (0x0002b23c) set_value_pane_t1

0xcb57,	// (0x000338ee) slider_set_pane_cp3

0xcb60,	// (0x000338f7) volume_small_pane_cp

0xcb69,	// (0x00033900) list_form_gen_pane

0x9c73,	// (0x00030a0a) scroll_pane_cp8

0x8cc6,	// (0x0002fa5d) form_field_data_pane_ParamLimits

0x8cc6,	// (0x0002fa5d) form_field_data_pane

0x8cdd,	// (0x0002fa74) form_field_data_wide_pane_ParamLimits

0x8cdd,	// (0x0002fa74) form_field_data_wide_pane

0x8cfd,	// (0x0002fa94) form_field_popup_pane_ParamLimits

0x8cfd,	// (0x0002fa94) form_field_popup_pane

0x8d15,	// (0x0002faac) form_field_popup_wide_pane_ParamLimits

0x8d15,	// (0x0002faac) form_field_popup_wide_pane

0x4531,	// (0x0002b2c8) form_field_slider_pane_ParamLimits

0x4531,	// (0x0002b2c8) form_field_slider_pane

0x4544,	// (0x0002b2db) form_field_slider_wide_pane_ParamLimits

0x4544,	// (0x0002b2db) form_field_slider_wide_pane

0xcb72,	// (0x00033909) data_form_pane

0x8d36,	// (0x0002facd) form_field_data_pane_t1

0xcb7e,	// (0x00033915) input_focus_pane

0xcb8c,	// (0x00033923) data_form_wide_pane

0x4583,	// (0x0002b31a) form_field_data_wide_pane_t1

0x9aea,	// (0x00030881) input_focus_pane_cp6

0x8d4e,	// (0x0002fae5) form_field_popup_pane_t1

0xcb7e,	// (0x00033915) input_focus_pane_cp7

0xcb72,	// (0x00033909) list_form_pane

0x45c5,	// (0x0002b35c) form_field_popup_wide_pane_t1

0xcb7e,	// (0x00033915) input_focus_pane_cp8

0xcbac,	// (0x00033943) list_form_wide_pane

0x8d6e,	// (0x0002fb05) form_field_slider_pane_t1_ParamLimits

0x8d6e,	// (0x0002fb05) form_field_slider_pane_t1

0x8d84,	// (0x0002fb1b) form_field_slider_pane_t2_ParamLimits

0x8d84,	// (0x0002fb1b) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x00036462) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x00036462) form_field_slider_pane_t

0x9417,	// (0x000301ae) input_focus_pane_cp9_ParamLimits

0x9417,	// (0x000301ae) input_focus_pane_cp9

0x8d99,	// (0x0002fb30) slider_cont_pane_ParamLimits

0x8d99,	// (0x0002fb30) slider_cont_pane

0xcbbb,	// (0x00033952) form_field_slider_wide_pane_t1_ParamLimits

0xcbbb,	// (0x00033952) form_field_slider_wide_pane_t1

0x4621,	// (0x0002b3b8) form_field_slider_wide_pane_t2_ParamLimits

0x4621,	// (0x0002b3b8) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x00036467) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x00036467) form_field_slider_wide_pane_t

0x9417,	// (0x000301ae) input_focus_pane_cp10_ParamLimits

0x9417,	// (0x000301ae) input_focus_pane_cp10

0x8dad,	// (0x0002fb44) slider_cont_pane_cp1_ParamLimits

0x8dad,	// (0x0002fb44) slider_cont_pane_cp1

0x8dc3,	// (0x0002fb5a) slider_form_pane_cp

0xcbcd,	// (0x00033964) input_focus_pane_g1

0xcbd5,	// (0x0003396c) input_focus_pane_g2

0xcbdd,	// (0x00033974) input_focus_pane_g3

0xcbe5,	// (0x0003397c) input_focus_pane_g4

0xcbed,	// (0x00033984) input_focus_pane_g5

0xcbf5,	// (0x0003398c) input_focus_pane_g6

0xcbfd,	// (0x00033994) input_focus_pane_g7

0xcc05,	// (0x0003399c) input_focus_pane_g8

0xcc0d,	// (0x000339a4) input_focus_pane_g9

0x9108,	// (0x0002fe9f) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003646c) input_focus_pane_g

0xe0c0,	// (0x00034e57) wait_border_pane_g3_copy1

0x8dcb,	// (0x0002fb62) data_form_pane_t1

0x9108,	// (0x0002fe9f) wait_anim_pane_g1_copy1

0x8edd,	// (0x0002fc74) data_form_wide_pane_t1

0x8de3,	// (0x0002fb7a) list_form_graphic_pane_cp_ParamLimits

0x8de3,	// (0x0002fb7a) list_form_graphic_pane_cp

0xec7f,	// (0x00035a16) slider_form_pane_g1

0xec88,	// (0x00035a1f) slider_form_pane_g2

0x0006,

0xf9c1,	// (0x00036758) slider_form_pane_g

0x466b,	// (0x0002b402) list_form_graphic_pane_ParamLimits

0x466b,	// (0x0002b402) list_form_graphic_pane

0x4695,	// (0x0002b42c) list_form_graphic_pane_g1

0x469d,	// (0x0002b434) list_form_graphic_pane_t1_ParamLimits

0x469d,	// (0x0002b434) list_form_graphic_pane_t1

0x9461,	// (0x000301f8) list_highlight_pane_cp5_ParamLimits

0x9461,	// (0x000301f8) list_highlight_pane_cp5

0x8df6,	// (0x0002fb8d) find_pane_g1

0xcc15,	// (0x000339ac) input_find_pane

0x8e01,	// (0x0002fb98) input_find_pane_g1_ParamLimits

0x8e01,	// (0x0002fb98) input_find_pane_g1

0x8e0d,	// (0x0002fba4) input_find_pane_t1_ParamLimits

0x8e0d,	// (0x0002fba4) input_find_pane_t1

0x8e22,	// (0x0002fbb9) input_find_pane_t2_ParamLimits

0x8e22,	// (0x0002fbb9) input_find_pane_t2

0x0001,

0xf6ea,	// (0x00036481) input_find_pane_t_ParamLimits

0xf6ea,	// (0x00036481) input_find_pane_t

0xcc1e,	// (0x000339b5) input_focus_pane_cp5_ParamLimits

0xcc1e,	// (0x000339b5) input_focus_pane_cp5

0x9417,	// (0x000301ae) bg_popup_window_pane_cp2_ParamLimits

0x9417,	// (0x000301ae) bg_popup_window_pane_cp2

0xcc38,	// (0x000339cf) listscroll_menu_pane_ParamLimits

0xcc38,	// (0x000339cf) listscroll_menu_pane

0xcc44,	// (0x000339db) popup_submenu_window_ParamLimits

0xcc44,	// (0x000339db) popup_submenu_window

0xcc68,	// (0x000339ff) find_popup_pane_g1

0xcc70,	// (0x00033a07) input_popup_find_pane_cp

0xcc1e,	// (0x000339b5) input_focus_pane_cp4_ParamLimits

0xcc1e,	// (0x000339b5) input_focus_pane_cp4

0xcc7a,	// (0x00033a11) input_popup_find_pane_t1_ParamLimits

0xcc7a,	// (0x00033a11) input_popup_find_pane_t1

0x9255,	// (0x0002ffec) bg_popup_sub_pane_cp

0xcca8,	// (0x00033a3f) listscroll_popup_sub_pane

0xccb0,	// (0x00033a47) list_submenu_pane_ParamLimits

0xccb0,	// (0x00033a47) list_submenu_pane

0xccc1,	// (0x00033a58) scroll_pane_cp4

0xccc9,	// (0x00033a60) list_single_popup_submenu_pane_ParamLimits

0xccc9,	// (0x00033a60) list_single_popup_submenu_pane

0xccdd,	// (0x00033a74) list_single_popup_submenu_pane_g1

0xcce5,	// (0x00033a7c) list_single_popup_submenu_pane_t1_ParamLimits

0xcce5,	// (0x00033a7c) list_single_popup_submenu_pane_t1

0x9417,	// (0x000301ae) bg_active_tab_pane_cp1_ParamLimits

0x9417,	// (0x000301ae) bg_active_tab_pane_cp1

0xdc8e,	// (0x00034a25) tabs_2_active_pane_g1

0x9d0a,	// (0x00030aa1) tabs_2_active_pane_t1

0x9417,	// (0x000301ae) bg_passive_tab_pane_cp1_ParamLimits

0x9417,	// (0x000301ae) bg_passive_tab_pane_cp1

0xdc8e,	// (0x00034a25) tabs_2_passive_pane_g1

0x9d0a,	// (0x00030aa1) tabs_2_passive_pane_t1

0x9461,	// (0x000301f8) bg_active_tab_pane_cp4

0x9d20,	// (0x00030ab7) tabs_2_long_active_pane_t1

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp4

0xdca8,	// (0x00034a3f) list_single_midp_graphic_pane_g4_ParamLimits

0x9461,	// (0x000301f8) bg_active_tab_pane_cp5

0x9d37,	// (0x00030ace) tabs_3_long_active_pane_t1

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp5

0xdca8,	// (0x00034a3f) list_single_midp_graphic_pane_g4

0x9461,	// (0x000301f8) bg_popup_window_pane_cp13_ParamLimits

0x9461,	// (0x000301f8) bg_popup_window_pane_cp13

0xcd0f,	// (0x00033aa6) listscroll_popup_fast_pane_ParamLimits

0xcd0f,	// (0x00033aa6) listscroll_popup_fast_pane

0xcd1e,	// (0x00033ab5) grid_popup_fast_pane_ParamLimits

0xcd1e,	// (0x00033ab5) grid_popup_fast_pane

0xcd30,	// (0x00033ac7) scroll_pane_cp9_ParamLimits

0xcd30,	// (0x00033ac7) scroll_pane_cp9

0x1538,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x1538,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2

0xcd54,	// (0x00033aeb) input_focus_pane_cp20_ParamLimits

0xcd54,	// (0x00033aeb) input_focus_pane_cp20

0xcd62,	// (0x00033af9) query_popup_data_pane_t1_ParamLimits

0xcd62,	// (0x00033af9) query_popup_data_pane_t1

0xcd75,	// (0x00033b0c) query_popup_data_pane_t2_ParamLimits

0xcd75,	// (0x00033b0c) query_popup_data_pane_t2

0xcdbb,	// (0x00033b52) query_popup_data_pane_t3_ParamLimits

0xcdbb,	// (0x00033b52) query_popup_data_pane_t3

0xcdfc,	// (0x00033b93) query_popup_data_pane_t4_ParamLimits

0xcdfc,	// (0x00033b93) query_popup_data_pane_t4

0xce38,	// (0x00033bcf) query_popup_data_pane_t5_ParamLimits

0xce38,	// (0x00033bcf) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x00036486) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x00036486) query_popup_data_pane_t

0xcbcd,	// (0x00033964) bg_set_opt_pane_g1

0xcbd5,	// (0x0003396c) bg_set_opt_pane_g2

0xcbdd,	// (0x00033974) bg_set_opt_pane_g3

0xcbe5,	// (0x0003397c) bg_set_opt_pane_g4

0xcbed,	// (0x00033984) bg_set_opt_pane_g5

0xcbf5,	// (0x0003398c) bg_set_opt_pane_g6

0xcbfd,	// (0x00033994) bg_set_opt_pane_g7

0xcc05,	// (0x0003399c) bg_set_opt_pane_g8

0xcc0d,	// (0x000339a4) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x00036491) bg_set_opt_pane_g

0x533c,	// (0x0002c0d3) control_top_pane_stacon_ParamLimits

0x533c,	// (0x0002c0d3) control_top_pane_stacon

0x538f,	// (0x0002c126) signal_pane_stacon_ParamLimits

0x538f,	// (0x0002c126) signal_pane_stacon

0xd238,	// (0x00033fcf) stacon_top_pane_g1_ParamLimits

0xd238,	// (0x00033fcf) stacon_top_pane_g1

0x53b4,	// (0x0002c14b) title_pane_stacon_ParamLimits

0x53b4,	// (0x0002c14b) title_pane_stacon

0x53d6,	// (0x0002c16d) uni_indicator_pane_stacon_ParamLimits

0x53d6,	// (0x0002c16d) uni_indicator_pane_stacon

0x53eb,	// (0x0002c182) battery_pane_stacon_ParamLimits

0x53eb,	// (0x0002c182) battery_pane_stacon

0x542b,	// (0x0002c1c2) control_bottom_pane_stacon_ParamLimits

0x542b,	// (0x0002c1c2) control_bottom_pane_stacon

0x544a,	// (0x0002c1e1) navi_pane_stacon_ParamLimits

0x544a,	// (0x0002c1e1) navi_pane_stacon

0xd25a,	// (0x00033ff1) stacon_bottom_pane_g1_ParamLimits

0xd25a,	// (0x00033ff1) stacon_bottom_pane_g1

0xce6f,	// (0x00033c06) aid_levels_signal_lsc_ParamLimits

0xce6f,	// (0x00033c06) aid_levels_signal_lsc

0x50f8,	// (0x0002be8f) signal_pane_stacon_g1_ParamLimits

0x50f8,	// (0x0002be8f) signal_pane_stacon_g1

0x5104,	// (0x0002be9b) signal_pane_stacon_g2_ParamLimits

0x5104,	// (0x0002be9b) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x000364a4) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x000364a4) signal_pane_stacon_g

0x5138,	// (0x0002becf) title_pane_stacon_t1_ParamLimits

0x5138,	// (0x0002becf) title_pane_stacon_t1

0xce89,	// (0x00033c20) uni_indicator_pane_stacon_g1

0xce93,	// (0x00033c2a) uni_indicator_pane_stacon_g2

0xce9d,	// (0x00033c34) uni_indicator_pane_stacon_g3

0xcea7,	// (0x00033c3e) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x000364b0) uni_indicator_pane_stacon_g

0x515d,	// (0x0002bef4) control_top_pane_stacon_g1

0x5165,	// (0x0002befc) control_top_pane_stacon_t1_ParamLimits

0x5165,	// (0x0002befc) control_top_pane_stacon_t1

0xceb1,	// (0x00033c48) aid_levels_battery_lsc_ParamLimits

0xceb1,	// (0x00033c48) aid_levels_battery_lsc

0x5196,	// (0x0002bf2d) battery_pane_stacon_g1_ParamLimits

0x5196,	// (0x0002bf2d) battery_pane_stacon_g1

0x51a2,	// (0x0002bf39) battery_pane_stacon_g2_ParamLimits

0x51a2,	// (0x0002bf39) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x000364b9) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x000364b9) battery_pane_stacon_g

0x51d1,	// (0x0002bf68) navi_icon_pane_stacon

0x51e1,	// (0x0002bf78) navi_navi_pane_stacon

0x51d1,	// (0x0002bf68) navi_text_pane_stacon

0x515d,	// (0x0002bef4) control_bottom_pane_stacon_g1

0x51f1,	// (0x0002bf88) control_bottom_pane_stacon_t1_ParamLimits

0x51f1,	// (0x0002bf88) control_bottom_pane_stacon_t1

0x9d4d,	// (0x00030ae4) grid_app_pane_ParamLimits

0x9d4d,	// (0x00030ae4) grid_app_pane

0x9d7b,	// (0x00030b12) scroll_pane_cp15_ParamLimits

0x9d7b,	// (0x00030b12) scroll_pane_cp15

0x9d92,	// (0x00030b29) cell_app_pane_ParamLimits

0x9d92,	// (0x00030b29) cell_app_pane

0x9dd1,	// (0x00030b68) cell_app_pane_g1_ParamLimits

0x9dd1,	// (0x00030b68) cell_app_pane_g1

0xced9,	// (0x00033c70) cell_app_pane_g2_ParamLimits

0xced9,	// (0x00033c70) cell_app_pane_g2

0x0001,

0xf727,	// (0x000364be) cell_app_pane_g_ParamLimits

0xf727,	// (0x000364be) cell_app_pane_g

0xcee5,	// (0x00033c7c) cell_app_pane_t1_ParamLimits

0xcee5,	// (0x00033c7c) cell_app_pane_t1

0xcef7,	// (0x00033c8e) grid_highlight_pane_ParamLimits

0xcef7,	// (0x00033c8e) grid_highlight_pane

0xcbcd,	// (0x00033964) cell_highlight_pane_g1

0xcbd5,	// (0x0003396c) cell_highlight_pane_g2

0xcbdd,	// (0x00033974) cell_highlight_pane_g3

0xcbe5,	// (0x0003397c) cell_highlight_pane_g4

0xcbed,	// (0x00033984) cell_highlight_pane_g5

0xcbf5,	// (0x0003398c) cell_highlight_pane_g6

0xcbfd,	// (0x00033994) cell_highlight_pane_g7

0xcc05,	// (0x0003399c) cell_highlight_pane_g8

0xcc0d,	// (0x000339a4) cell_highlight_pane_g9

0x9108,	// (0x0002fe9f) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003646c) cell_highlight_pane_g

0xcf08,	// (0x00033c9f) bg_scroll_pane

0x5235,	// (0x0002bfcc) scroll_handle_pane

0xcf4f,	// (0x00033ce6) scroll_bg_pane_g1

0xcf64,	// (0x00033cfb) scroll_bg_pane_g2

0xcf7c,	// (0x00033d13) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x000364c3) scroll_bg_pane_g

0xcf91,	// (0x00033d28) scroll_handle_focus_pane_ParamLimits

0xcf91,	// (0x00033d28) scroll_handle_focus_pane

0xcf4f,	// (0x00033ce6) scroll_handle_pane_g1

0xcf9e,	// (0x00033d35) scroll_handle_pane_g2

0xcf7c,	// (0x00033d13) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x000364ca) scroll_handle_pane_g

0xcc1e,	// (0x000339b5) bg_popup_sub_pane_cp21_ParamLimits

0xcc1e,	// (0x000339b5) bg_popup_sub_pane_cp21

0xcfb2,	// (0x00033d49) popup_fep_japan_predictive_window_t1_ParamLimits

0xcfb2,	// (0x00033d49) popup_fep_japan_predictive_window_t1

0xcfc9,	// (0x00033d60) popup_fep_japan_predictive_window_t2_ParamLimits

0xcfc9,	// (0x00033d60) popup_fep_japan_predictive_window_t2

0xcffc,	// (0x00033d93) popup_fep_japan_predictive_window_t3_ParamLimits

0xcffc,	// (0x00033d93) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x000364d1) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x000364d1) popup_fep_japan_predictive_window_t

0x9255,	// (0x0002ffec) bg_popup_sub_pane_cp23

0xd033,	// (0x00033dca) listscroll_japin_cand_pane

0xd03b,	// (0x00033dd2) popup_fep_japan_candidate_window_t1

0xd049,	// (0x00033de0) candidate_pane_ParamLimits

0xd049,	// (0x00033de0) candidate_pane

0xd05c,	// (0x00033df3) scroll_pane_cp30

0xd064,	// (0x00033dfb) list_single_popup_jap_candidate_pane_ParamLimits

0xd064,	// (0x00033dfb) list_single_popup_jap_candidate_pane

0x9255,	// (0x0002ffec) list_highlight_pane_cp30

0xd079,	// (0x00033e10) list_single_popup_jap_candidate_pane_t1

0x9dfe,	// (0x00030b95) level_1_signal

0x9e10,	// (0x00030ba7) level_2_signal

0x9e23,	// (0x00030bba) level_3_signal

0x9e36,	// (0x00030bcd) level_4_signal

0x9e49,	// (0x00030be0) level_5_signal

0x9e5c,	// (0x00030bf3) level_6_signal

0x9e6f,	// (0x00030c06) level_7_signal

0x9dfe,	// (0x00030b95) level_1_battery

0x9e10,	// (0x00030ba7) level_2_battery

0x9e23,	// (0x00030bba) level_3_battery

0x9e36,	// (0x00030bcd) level_4_battery

0x9e49,	// (0x00030be0) level_5_battery

0x9e5c,	// (0x00030bf3) level_6_battery

0x9e6f,	// (0x00030c06) level_7_battery

0xd0a0,	// (0x00033e37) list_menu_pane_ParamLimits

0xd0a0,	// (0x00033e37) list_menu_pane

0xd0b1,	// (0x00033e48) scroll_pane_cp25_ParamLimits

0xd0b1,	// (0x00033e48) scroll_pane_cp25

0x9e82,	// (0x00030c19) list_double2_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double2_graphic_pane_cp2

0x9e82,	// (0x00030c19) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double2_large_graphic_pane_cp2

0x9e82,	// (0x00030c19) list_double2_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double2_pane_cp2

0x9e82,	// (0x00030c19) list_double_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double_graphic_pane_cp2

0x9e82,	// (0x00030c19) list_double_large_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double_large_graphic_pane_cp2

0x9e82,	// (0x00030c19) list_double_number_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double_number_pane_cp2

0x9e82,	// (0x00030c19) list_double_pane_cp2_ParamLimits

0x9e82,	// (0x00030c19) list_double_pane_cp2

0x9e9d,	// (0x00030c34) list_single_2graphic_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_2graphic_pane_cp2

0x9e9d,	// (0x00030c34) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_graphic_heading_pane_cp2

0x9e9d,	// (0x00030c34) list_single_graphic_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_graphic_pane_cp2

0x9e9d,	// (0x00030c34) list_single_heading_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_heading_pane_cp2

0x9eae,	// (0x00030c45) list_single_large_graphic_pane_cp2_ParamLimits

0x9eae,	// (0x00030c45) list_single_large_graphic_pane_cp2

0x9e9d,	// (0x00030c34) list_single_number_heading_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_number_heading_pane_cp2

0x9e9d,	// (0x00030c34) list_single_number_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_number_pane_cp2

0x9e9d,	// (0x00030c34) list_single_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_pane_cp2

0xd0d3,	// (0x00033e6a) bg_popup_sub_pane_cp22

0x52e4,	// (0x0002c07b) popup_side_volume_key_window_g1

0x5308,	// (0x0002c09f) popup_side_volume_key_window_t1

0x5324,	// (0x0002c0bb) volume_small_pane_cp1

0x9417,	// (0x000301ae) bg_popup_sub_pane_cp24_ParamLimits

0x9417,	// (0x000301ae) bg_popup_sub_pane_cp24

0xd0e9,	// (0x00033e80) fep_china_uni_candidate_pane_ParamLimits

0xd0e9,	// (0x00033e80) fep_china_uni_candidate_pane

0xd0fd,	// (0x00033e94) fep_china_uni_entry_pane

0xd10d,	// (0x00033ea4) popup_fep_china_uni_window_g1

0xd129,	// (0x00033ec0) fep_china_uni_entry_pane_g1

0xd131,	// (0x00033ec8) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x000364fe) fep_china_uni_entry_pane_g

0xd139,	// (0x00033ed0) fep_entry_item_pane

0xd143,	// (0x00033eda) fep_candidate_item_pane

0xd14b,	// (0x00033ee2) fep_china_uni_candidate_pane_g1

0xd153,	// (0x00033eea) fep_china_uni_candidate_pane_g2

0xd15b,	// (0x00033ef2) fep_china_uni_candidate_pane_g3

0xd163,	// (0x00033efa) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x00036503) fep_china_uni_candidate_pane_g

0x9108,	// (0x0002fe9f) fep_entry_item_pane_g1

0xd16b,	// (0x00033f02) fep_entry_item_pane_t1_ParamLimits

0xd16b,	// (0x00033f02) fep_entry_item_pane_t1

0xd181,	// (0x00033f18) fep_candidate_item_pane_t1_ParamLimits

0xd181,	// (0x00033f18) fep_candidate_item_pane_t1

0xd196,	// (0x00033f2d) fep_candidate_item_pane_t2_ParamLimits

0xd196,	// (0x00033f2d) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003650c) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003650c) fep_candidate_item_pane_t

0x9461,	// (0x000301f8) list_highlight_pane_cp31_ParamLimits

0x9461,	// (0x000301f8) list_highlight_pane_cp31

0xd1a8,	// (0x00033f3f) level_1_signal_lsc

0xd1b1,	// (0x00033f48) level_2_signal_lsc

0xd1ba,	// (0x00033f51) level_3_signal_lsc

0xd1c3,	// (0x00033f5a) level_4_signal_lsc

0xd1cc,	// (0x00033f63) level_5_signal_lsc

0xd1d5,	// (0x00033f6c) level_6_signal_lsc

0xd1de,	// (0x00033f75) level_7_signal_lsc

0xd1de,	// (0x00033f75) level_1_battery_lsc

0xd1e7,	// (0x00033f7e) level_2_battery_lsc

0xd1f0,	// (0x00033f87) level_3_battery_lsc

0xd1f9,	// (0x00033f90) level_4_battery_lsc

0xd202,	// (0x00033f99) level_5_battery_lsc

0xd20b,	// (0x00033fa2) level_6_battery_lsc

0xd1a8,	// (0x00033f3f) level_7_battery_lsc

0xd214,	// (0x00033fab) scroll_handle_focus_pane_g1

0xd21d,	// (0x00033fb4) scroll_handle_focus_pane_g2

0xd226,	// (0x00033fbd) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x00036511) scroll_handle_focus_pane_g

0x8e37,	// (0x0002fbce) list_single_2graphic_pane_g1_ParamLimits

0x8e37,	// (0x0002fbce) list_single_2graphic_pane_g1

0x9c96,	// (0x00030a2d) list_single_2graphic_pane_g2_ParamLimits

0x9c96,	// (0x00030a2d) list_single_2graphic_pane_g2

0x5089,	// (0x0002be20) list_single_2graphic_pane_g3_ParamLimits

0x5089,	// (0x0002be20) list_single_2graphic_pane_g3

0x8e43,	// (0x0002fbda) list_single_2graphic_pane_g4_ParamLimits

0x8e43,	// (0x0002fbda) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x00036518) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x00036518) list_single_2graphic_pane_g

0x8e54,	// (0x0002fbeb) list_single_2graphic_pane_t1_ParamLimits

0x8e54,	// (0x0002fbeb) list_single_2graphic_pane_t1

0x9f07,	// (0x00030c9e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9f07,	// (0x00030c9e) list_double2_graphic_large_graphic_pane_g1

0x8b0c,	// (0x0002f8a3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8b0c,	// (0x0002f8a3) list_double2_graphic_large_graphic_pane_g2

0x5036,	// (0x0002bdcd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5036,	// (0x0002bdcd) list_double2_graphic_large_graphic_pane_g3

0x8e82,	// (0x0002fc19) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8e82,	// (0x0002fc19) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x00036521) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x00036521) list_double2_graphic_large_graphic_pane_g

0x8e8e,	// (0x0002fc25) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8e8e,	// (0x0002fc25) list_double2_graphic_large_graphic_pane_t1

0x8ea4,	// (0x0002fc3b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8ea4,	// (0x0002fc3b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003652a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003652a) list_double2_graphic_large_graphic_pane_t

0xd301,	// (0x00034098) popup_fast_swap_window_ParamLimits

0xd301,	// (0x00034098) popup_fast_swap_window

0xd31d,	// (0x000340b4) popup_side_volume_key_window

0xd337,	// (0x000340ce) stacon_top_pane

0xd341,	// (0x000340d8) status_pane_ParamLimits

0xd341,	// (0x000340d8) status_pane

0xd337,	// (0x000340ce) status_small_pane

0x9255,	// (0x0002ffec) control_pane

0x9255,	// (0x0002ffec) stacon_bottom_pane

0x9c73,	// (0x00030a0a) scroll_pane_cp121

0xcb69,	// (0x00033900) set_content_pane

0xdc96,	// (0x00034a2d) bg_active_tab_pane_g1_cp1

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp1

0xdc9f,	// (0x00034a36) bg_active_tab_pane_g3_cp1

0xdc96,	// (0x00034a2d) bg_passive_tab_pane_g1_cp1

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp1

0xdc9f,	// (0x00034a36) bg_passive_tab_pane_g3_cp1

0x9f17,	// (0x00030cae) bg_active_tab_pane_g1_cp2

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp2

0x9f20,	// (0x00030cb7) bg_active_tab_pane_g3_cp2

0x9f17,	// (0x00030cae) bg_passive_tab_pane_g1_cp2

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp2

0x9f20,	// (0x00030cb7) bg_passive_tab_pane_g3_cp2

0x9f29,	// (0x00030cc0) bg_active_tab_pane_g1_cp3

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp3

0x9f32,	// (0x00030cc9) bg_active_tab_pane_g3_cp3

0x9f29,	// (0x00030cc0) bg_passive_tab_pane_g1_cp3

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp3

0x9f32,	// (0x00030cc9) bg_passive_tab_pane_g3_cp3

0x9f3b,	// (0x00030cd2) bg_active_tab_pane_g1_cp4

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp4

0x9f44,	// (0x00030cdb) bg_active_tab_pane_g3_cp4

0x9f3b,	// (0x00030cd2) bg_passive_tab_pane_g1_cp4

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp4

0x9f44,	// (0x00030cdb) bg_passive_tab_pane_g3_cp4

0xd276,	// (0x0003400d) bg_active_tab_pane_g1_cp5

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp5

0xd27f,	// (0x00034016) bg_active_tab_pane_g3_cp5

0xd276,	// (0x0003400d) bg_passive_tab_pane_g1_cp5

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp5

0xd27f,	// (0x00034016) bg_passive_tab_pane_g3_cp5

0x9f4d,	// (0x00030ce4) list_set_graphic_pane_ParamLimits

0x9f4d,	// (0x00030ce4) list_set_graphic_pane

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp4

0xd288,	// (0x0003401f) list_set_graphic_pane_g1_ParamLimits

0xd288,	// (0x0003401f) list_set_graphic_pane_g1

0xd294,	// (0x0003402b) list_set_graphic_pane_g2_ParamLimits

0xd294,	// (0x0003402b) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003652f) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003652f) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x00036887) volume_small_pane_cp_g

0xd2b6,	// (0x0003404d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd2b6,	// (0x0003404d) list_double2_large_graphic_pane_g1_cp2

0xd2c2,	// (0x00034059) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd2c2,	// (0x00034059) list_double2_large_graphic_pane_g2_cp2

0xd2d1,	// (0x00034068) list_double2_large_graphic_pane_g3_cp2

0xd2d9,	// (0x00034070) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd2d9,	// (0x00034070) list_double2_large_graphic_pane_t1_cp2

0xd2ef,	// (0x00034086) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd2ef,	// (0x00034086) list_double2_large_graphic_pane_t2_cp2

0xea2f,	// (0x000357c6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xea2f,	// (0x000357c6) list_double_large_graphic_pane_g1_cp2

0xea40,	// (0x000357d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xea40,	// (0x000357d7) list_double_large_graphic_pane_g2_cp2

0xd41c,	// (0x000341b3) list_double_large_graphic_pane_g3_cp2

0xea4f,	// (0x000357e6) list_double_large_graphic_pane_g4_cp

0xea57,	// (0x000357ee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xea57,	// (0x000357ee) list_double_large_graphic_pane_t1_cp2

0xea6e,	// (0x00035805) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xea6e,	// (0x00035805) list_double_large_graphic_pane_t2_cp2

0xd34f,	// (0x000340e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd34f,	// (0x000340e6) list_double2_graphic_pane_g1_cp2

0xd35b,	// (0x000340f2) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd35b,	// (0x000340f2) list_double2_graphic_pane_g2_cp2

0xd36a,	// (0x00034101) list_double2_graphic_pane_g3_cp2

0xd372,	// (0x00034109) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd372,	// (0x00034109) list_double2_graphic_pane_t1_cp2

0xd388,	// (0x0003411f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd388,	// (0x0003411f) list_double2_graphic_pane_t2_cp2

0xd39a,	// (0x00034131) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd39a,	// (0x00034131) list_single_number_heading_pane_g1_cp2

0xd3a6,	// (0x0003413d) list_single_number_heading_pane_g2_cp2

0xd3ae,	// (0x00034145) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd3ae,	// (0x00034145) list_single_number_heading_pane_t1_cp2

0xd3c4,	// (0x0003415b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd3c4,	// (0x0003415b) list_single_number_heading_pane_t2_cp2

0xd3d6,	// (0x0003416d) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd3d6,	// (0x0003416d) list_single_number_heading_pane_t3_cp2

0xd39a,	// (0x00034131) list_single_heading_pane_g1_cp2_ParamLimits

0xd39a,	// (0x00034131) list_single_heading_pane_g1_cp2

0xd3a6,	// (0x0003413d) list_single_heading_pane_g2_cp2

0xd3ae,	// (0x00034145) list_single_heading_pane_t1_cp2_ParamLimits

0xd3ae,	// (0x00034145) list_single_heading_pane_t1_cp2

0xe839,	// (0x000355d0) list_single_heading_pane_t2_cp2_ParamLimits

0xe839,	// (0x000355d0) list_single_heading_pane_t2_cp2

0xe7be,	// (0x00035555) list_double_graphic_pane_g1_cp2_ParamLimits

0xe7be,	// (0x00035555) list_double_graphic_pane_g1_cp2

0xe7ca,	// (0x00035561) list_double_graphic_pane_g2_cp2_ParamLimits

0xe7ca,	// (0x00035561) list_double_graphic_pane_g2_cp2

0xe7d9,	// (0x00035570) list_double_graphic_pane_g3_cp2

0xe7e1,	// (0x00035578) list_double_graphic_pane_t1_cp2_ParamLimits

0xe7e1,	// (0x00035578) list_double_graphic_pane_t1_cp2

0xe7f7,	// (0x0003558e) list_double_graphic_pane_t2_cp2_ParamLimits

0xe7f7,	// (0x0003558e) list_double_graphic_pane_t2_cp2

0xd410,	// (0x000341a7) list_double_number_pane_g1_cp2_ParamLimits

0xd410,	// (0x000341a7) list_double_number_pane_g1_cp2

0xd41c,	// (0x000341b3) list_double_number_pane_g2_cp2

0xe784,	// (0x0003551b) list_double_number_pane_t1_cp2_ParamLimits

0xe784,	// (0x0003551b) list_double_number_pane_t1_cp2

0xe796,	// (0x0003552d) list_double_number_pane_t2_cp2_ParamLimits

0xe796,	// (0x0003552d) list_double_number_pane_t2_cp2

0xe7ac,	// (0x00035543) list_double_number_pane_t3_cp2_ParamLimits

0xe7ac,	// (0x00035543) list_double_number_pane_t3_cp2

0xe6fc,	// (0x00035493) list_single_graphic_pane_g1_cp2_ParamLimits

0xe6fc,	// (0x00035493) list_single_graphic_pane_g1_cp2

0xd39a,	// (0x00034131) list_single_graphic_pane_g2_cp2_ParamLimits

0xd39a,	// (0x00034131) list_single_graphic_pane_g2_cp2

0xd3a6,	// (0x0003413d) list_single_graphic_pane_g3_cp2

0xe6d4,	// (0x0003546b) list_single_graphic_pane_t1_cp2_ParamLimits

0xe6d4,	// (0x0003546b) list_single_graphic_pane_t1_cp2

0xd39a,	// (0x00034131) list_single_number_pane_g1_cp2_ParamLimits

0xd39a,	// (0x00034131) list_single_number_pane_g1_cp2

0xd3a6,	// (0x0003413d) list_single_number_pane_g2_cp2

0xe6d4,	// (0x0003546b) list_single_number_pane_t1_cp2_ParamLimits

0xe6d4,	// (0x0003546b) list_single_number_pane_t1_cp2

0xe6ea,	// (0x00035481) list_single_number_pane_t2_cp2_ParamLimits

0xe6ea,	// (0x00035481) list_single_number_pane_t2_cp2

0xd2c2,	// (0x00034059) list_double2_pane_g1_cp2_ParamLimits

0xd2c2,	// (0x00034059) list_double2_pane_g1_cp2

0xd2d1,	// (0x00034068) list_double2_pane_g2_cp2

0xd3e8,	// (0x0003417f) list_double2_pane_t1_cp2_ParamLimits

0xd3e8,	// (0x0003417f) list_double2_pane_t1_cp2

0xd3fe,	// (0x00034195) list_double2_pane_t2_cp2_ParamLimits

0xd3fe,	// (0x00034195) list_double2_pane_t2_cp2

0xd410,	// (0x000341a7) list_double_pane_g1_cp2_ParamLimits

0xd410,	// (0x000341a7) list_double_pane_g1_cp2

0xd41c,	// (0x000341b3) list_double_pane_g2_cp2

0xd424,	// (0x000341bb) list_double_pane_t1_cp2_ParamLimits

0xd424,	// (0x000341bb) list_double_pane_t1_cp2

0xd43a,	// (0x000341d1) list_double_pane_t2_cp2_ParamLimits

0xd43a,	// (0x000341d1) list_double_pane_t2_cp2

0xd462,	// (0x000341f9) list_single_pane_cp2_g3

0xd39a,	// (0x00034131) list_single_pane_g1_cp2_ParamLimits

0xd39a,	// (0x00034131) list_single_pane_g1_cp2

0xd3a6,	// (0x0003413d) list_single_pane_g2_cp2

0xd472,	// (0x00034209) list_single_pane_t1_cp2_ParamLimits

0xd472,	// (0x00034209) list_single_pane_t1_cp2

0xd48a,	// (0x00034221) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd48a,	// (0x00034221) list_single_large_graphic_pane_g1_cp2

0xd496,	// (0x0003422d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd496,	// (0x0003422d) list_single_large_graphic_pane_g2_cp2

0xd4a2,	// (0x00034239) list_single_large_graphic_pane_g3_cp2

0xd4aa,	// (0x00034241) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd4aa,	// (0x00034241) list_single_large_graphic_pane_g4_cp1

0xd4c4,	// (0x0003425b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd4c4,	// (0x0003425b) list_single_large_graphic_pane_t1_cp2

0xe6b6,	// (0x0003544d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe6b6,	// (0x0003544d) list_single_graphic_heading_pane_g1_cp2

0xe691,	// (0x00035428) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe691,	// (0x00035428) list_single_graphic_heading_pane_g4_cp2

0xd3a6,	// (0x0003413d) list_single_graphic_heading_pane_g5_cp2

0xd3ae,	// (0x00034145) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd3ae,	// (0x00034145) list_single_graphic_heading_pane_t1_cp2

0xe6c2,	// (0x00035459) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe6c2,	// (0x00035459) list_single_graphic_heading_pane_t2_cp2

0xe685,	// (0x0003541c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe685,	// (0x0003541c) list_single_2graphic_pane_g1_cp2

0xe691,	// (0x00035428) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe691,	// (0x00035428) list_single_2graphic_pane_g2_cp2

0xd3a6,	// (0x0003413d) list_single_2graphic_pane_g3_cp2

0xdca8,	// (0x00034a3f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdca8,	// (0x00034a3f) list_single_2graphic_pane_g4_cp2

0xe6a0,	// (0x00035437) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe6a0,	// (0x00035437) list_single_2graphic_pane_t1_cp2

0x9108,	// (0x0002fe9f) list_highlight_pane_g10_cp1

0xe297,	// (0x0003502e) list_highlight_pane_g1_cp1

0xe29f,	// (0x00035036) list_highlight_pane_g2_cp1

0xe2a7,	// (0x0003503e) list_highlight_pane_g3_cp1

0xe2af,	// (0x00035046) list_highlight_pane_g4_cp1

0xe2b7,	// (0x0003504e) list_highlight_pane_g5_cp1

0xe2bf,	// (0x00035056) list_highlight_pane_g6_cp1

0xe2c7,	// (0x0003505e) list_highlight_pane_g7_cp1

0xe2cf,	// (0x00035066) list_highlight_pane_g8_cp1

0xe2d7,	// (0x0003506e) list_highlight_pane_g9_cp1

0xabf6,	// (0x0003198d) form_field_slider_pane_t3

0xac04,	// (0x0003199b) form_field_slider_pane_t4

0xe1e1,	// (0x00034f78) slider_form_pane_ParamLimits

0xe1e1,	// (0x00034f78) slider_form_pane

0x9255,	// (0x0002ffec) control_abbreviations

0x9255,	// (0x0002ffec) control_conventions

0x9255,	// (0x0002ffec) control_definitions

0x9255,	// (0x0002ffec) format_table_attribute

0xe883,	// (0x0003561a) bg_popup_preview_window_pane_g9

0x9255,	// (0x0002ffec) format_table_data2

0x9255,	// (0x0002ffec) format_table_data3

0x9255,	// (0x0002ffec) format_table_data_example

0x0008,

0x9255,	// (0x0002ffec) intro_purpose

0xf921,	// (0x000366b8) bg_popup_preview_window_pane_g

0x9255,	// (0x0002ffec) texts_category

0x9255,	// (0x0002ffec) texts_graphics

0xd4da,	// (0x00034271) text_digital

0xd4e9,	// (0x00034280) text_primary

0xd4f8,	// (0x0003428f) text_primary_small

0xd507,	// (0x0003429e) text_secondary

0xd516,	// (0x000342ad) text_title

0xed10,	// (0x00035aa7) bg_passive_tab_pane_g1_cp3_srt

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp3_srt

0xed19,	// (0x00035ab0) bg_passive_tab_pane_g3_cp3_srt

0x9417,	// (0x000301ae) bg_active_tab_pane_cp3_srt_ParamLimits

0x9417,	// (0x000301ae) bg_active_tab_pane_cp3_srt

0xdc86,	// (0x00034a1d) tabs_4_active_pane_srt_g1

0x9443,	// (0x000301da) tabs_4_active_pane_srt_t1_ParamLimits

0x9443,	// (0x000301da) tabs_4_active_pane_srt_t1

0xed10,	// (0x00035aa7) bg_active_tab_pane_g1_cp3_copy1

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp3_copy1

0xed19,	// (0x00035ab0) bg_active_tab_pane_g3_cp3_copy1

0x9461,	// (0x000301f8) tabs_2_long_active_pane_srt_ParamLimits

0x9461,	// (0x000301f8) tabs_2_long_active_pane_srt

0x9461,	// (0x000301f8) tabs_2_long_passive_pane_srt_ParamLimits

0x9461,	// (0x000301f8) tabs_2_long_passive_pane_srt

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp4_srt_ParamLimits

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp4_srt

0xec46,	// (0x000359dd) bg_passive_tab_pane_g1_cp4_srt

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp4_srt

0xec4f,	// (0x000359e6) bg_passive_tab_pane_g3_cp4_srt

0x9461,	// (0x000301f8) bg_active_tab_pane_cp4_srt_ParamLimits

0x9461,	// (0x000301f8) bg_active_tab_pane_cp4_srt

0x9d20,	// (0x00030ab7) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9d20,	// (0x00030ab7) tabs_2_long_active_pane_srt_t1

0xec46,	// (0x000359dd) bg_active_tab_pane_g1_cp4_srt

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp4_srt

0xec4f,	// (0x000359e6) bg_active_tab_pane_g3_cp4_srt

0x9417,	// (0x000301ae) tabs_3_long_active_pane_srt_ParamLimits

0x9417,	// (0x000301ae) tabs_3_long_active_pane_srt

0x9417,	// (0x000301ae) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9417,	// (0x000301ae) tabs_3_long_passive_pane_cp_srt

0x9417,	// (0x000301ae) tabs_3_long_passive_pane_srt_ParamLimits

0x9417,	// (0x000301ae) tabs_3_long_passive_pane_srt

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp5_srt_ParamLimits

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp5_srt

0xd276,	// (0x0003400d) bg_passive_tab_pane_g1_cp5_srt

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp5_srt

0xd27f,	// (0x00034016) bg_passive_tab_pane_g3_cp5_srt

0x9461,	// (0x000301f8) bg_active_tab_pane_cp5_srt_ParamLimits

0x9461,	// (0x000301f8) bg_active_tab_pane_cp5_srt

0x9d37,	// (0x00030ace) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d37,	// (0x00030ace) tabs_3_long_active_pane_srt_t1

0xd276,	// (0x0003400d) bg_active_tab_pane_g1_cp5_srt

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp5_srt

0xd27f,	// (0x00034016) bg_active_tab_pane_g3_cp5_srt

0xec38,	// (0x000359cf) navi_text_pane_srt_t1

0xec30,	// (0x000359c7) navi_icon_pane_srt_g1

0xd62e,	// (0x000343c5) midp_editing_number_pane_srt

0xd525,	// (0x000342bc) midp_ticker_pane_srt

0xd636,	// (0x000343cd) midp_ticker_pane_srt_g1

0xd63e,	// (0x000343d5) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003654e) midp_ticker_pane_srt_g

0xd646,	// (0x000343dd) midp_ticker_pane_srt_t1

0xec21,	// (0x000359b8) midp_editing_number_pane_t1_copy1

0x9f61,	// (0x00030cf8) listscroll_midp_pane

0x9f61,	// (0x00030cf8) midp_form_pane

0xd52d,	// (0x000342c4) midp_info_popup_window_ParamLimits

0xd52d,	// (0x000342c4) midp_info_popup_window

0xcc1e,	// (0x000339b5) bg_popup_sub_pane_cp50_ParamLimits

0xcc1e,	// (0x000339b5) bg_popup_sub_pane_cp50

0xdf3b,	// (0x00034cd2) listscroll_midp_info_pane_ParamLimits

0xdf3b,	// (0x00034cd2) listscroll_midp_info_pane

0xdf23,	// (0x00034cba) listscroll_form_midp_pane_ParamLimits

0xdf23,	// (0x00034cba) listscroll_form_midp_pane

0xdf2f,	// (0x00034cc6) scroll_bar_cp050

0xabea,	// (0x00031981) list_midp_pane

0xf560,	// (0x000362f7) signal_pane_g2_cp

0xde49,	// (0x00034be0) listscroll_midp_info_pane_t1_ParamLimits

0xde49,	// (0x00034be0) listscroll_midp_info_pane_t1

0xde61,	// (0x00034bf8) listscroll_midp_info_pane_t2_ParamLimits

0xde61,	// (0x00034bf8) listscroll_midp_info_pane_t2

0xde9f,	// (0x00034c36) listscroll_midp_info_pane_t3_ParamLimits

0xde9f,	// (0x00034c36) listscroll_midp_info_pane_t3

0xded9,	// (0x00034c70) listscroll_midp_info_pane_t4_ParamLimits

0xded9,	// (0x00034c70) listscroll_midp_info_pane_t4

0x0003,

0xf85c,	// (0x000365f3) listscroll_midp_info_pane_t_ParamLimits

0xf85c,	// (0x000365f3) listscroll_midp_info_pane_t

0xccc1,	// (0x00033a58) scroll_pane_cp21

0xdded,	// (0x00034b84) form_midp_field_choice_group_pane

0xddf6,	// (0x00034b8d) form_midp_field_text_pane

0xde2f,	// (0x00034bc6) form_midp_field_time_pane

0xde37,	// (0x00034bce) form_midp_gauge_slider_pane

0xde40,	// (0x00034bd7) form_midp_gauge_wait_pane

0x9255,	// (0x0002ffec) form_midp_image_pane

0x8eb6,	// (0x0002fc4d) list_single_midp_pane_ParamLimits

0x8eb6,	// (0x0002fc4d) list_single_midp_pane

0xabc9,	// (0x00031960) form_midp_field_text_pane_t1

0xdb21,	// (0x000348b8) input_focus_pane_cp050

0xdddc,	// (0x00034b73) list_midp_form_text_pane

0xddab,	// (0x00034b42) form_midp_field_choice_group_pane_t1

0xddb9,	// (0x00034b50) input_focus_pane_cp051

0xddcd,	// (0x00034b64) list_midp_choice_pane

0x9255,	// (0x0002ffec) status_idle_pane

0xdd8f,	// (0x00034b26) form_midp_field_time_pane_t1

0x9108,	// (0x0002fe9f) wait_anim_pane_g2_copy1

0xdd9d,	// (0x00034b34) form_midp_field_time_pane_t2

0x0001,

0xd598,	// (0x0003432f) aid_navinavi_width_2_pane

0xf857,	// (0x000365ee) form_midp_field_time_pane_t

0x9255,	// (0x0002ffec) input_focus_pane_cp052

0x9255,	// (0x0002ffec) bg_input_focus_pane_cp040

0xdd6b,	// (0x00034b02) form_midp_gauge_slider_pane_t1

0xdd79,	// (0x00034b10) form_midp_gauge_slider_pane_t2

0xabad,	// (0x00031944) form_midp_gauge_slider_pane_t3

0xabbb,	// (0x00031952) form_midp_gauge_slider_pane_t4

0x0003,

0xf84e,	// (0x000365e5) form_midp_gauge_slider_pane_t

0xdd87,	// (0x00034b1e) form_midp_slider_pane

0x9461,	// (0x000301f8) bg_input_focus_pane_cp041_ParamLimits

0x9461,	// (0x000301f8) bg_input_focus_pane_cp041

0xdd3b,	// (0x00034ad2) form_midp_gauge_wait_pane_t1_ParamLimits

0xdd3b,	// (0x00034ad2) form_midp_gauge_wait_pane_t1

0xdd4d,	// (0x00034ae4) form_midp_gauge_wait_pane_t2_ParamLimits

0xdd4d,	// (0x00034ae4) form_midp_gauge_wait_pane_t2

0x0001,

0xf849,	// (0x000365e0) form_midp_gauge_wait_pane_t_ParamLimits

0xf849,	// (0x000365e0) form_midp_gauge_wait_pane_t

0xdd5f,	// (0x00034af6) form_midp_wait_pane_ParamLimits

0xdd5f,	// (0x00034af6) form_midp_wait_pane

0xdd05,	// (0x00034a9c) form_midp_image_pane_g1

0xdd0e,	// (0x00034aa5) form_midp_image_pane_t1

0xdd1d,	// (0x00034ab4) form_midp_image_pane_t2

0xdd2c,	// (0x00034ac3) form_midp_image_pane_t3

0x0002,

0xf842,	// (0x000365d9) form_midp_image_pane_t

0xdcfc,	// (0x00034a93) list_single_midp_pane_g1

0x481e,	// (0x0002b5b5) list_single_midp_pane_t1

0xab99,	// (0x00031930) list_midp_form_item_pane_ParamLimits

0xab99,	// (0x00031930) list_midp_form_item_pane

0xd540,	// (0x000342d7) list_midp_form_item_pane_t1

0xd54f,	// (0x000342e6) midp_ticker_pane_g1

0xd55b,	// (0x000342f2) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x00036534) midp_ticker_pane_g

0xd567,	// (0x000342fe) midp_ticker_pane_t1

0xec21,	// (0x000359b8) midp_editing_number_pane_t1

0xeca9,	// (0x00035a40) midp_editing_number_pane

0xecb5,	// (0x00035a4c) midp_ticker_pane

0xec11,	// (0x000359a8) ai_message_heading_pane

0x9255,	// (0x0002ffec) bg_popup_window_pane_cp14

0xec19,	// (0x000359b0) listscroll_ai_message_pane

0xeb9b,	// (0x00035932) ai_message_heading_pane_g1_ParamLimits

0xeb9b,	// (0x00035932) ai_message_heading_pane_g1

0xeba7,	// (0x0003593e) ai_message_heading_pane_g2_ParamLimits

0xeba7,	// (0x0003593e) ai_message_heading_pane_g2

0xebb3,	// (0x0003594a) ai_message_heading_pane_g3_ParamLimits

0xebb3,	// (0x0003594a) ai_message_heading_pane_g3

0xebbf,	// (0x00035956) ai_message_heading_pane_g4_ParamLimits

0xebbf,	// (0x00035956) ai_message_heading_pane_g4

0x0003,

0xf983,	// (0x0003671a) ai_message_heading_pane_g_ParamLimits

0xf983,	// (0x0003671a) ai_message_heading_pane_g

0xebcb,	// (0x00035962) ai_message_heading_pane_t1_ParamLimits

0xebcb,	// (0x00035962) ai_message_heading_pane_t1

0xebe5,	// (0x0003597c) ai_message_heading_pane_t2_ParamLimits

0xebe5,	// (0x0003597c) ai_message_heading_pane_t2

0x0001,

0xf98c,	// (0x00036723) ai_message_heading_pane_t_ParamLimits

0xf98c,	// (0x00036723) ai_message_heading_pane_t

0xebf7,	// (0x0003598e) bg_popup_heading_pane_cp1_ParamLimits

0xebf7,	// (0x0003598e) bg_popup_heading_pane_cp1

0xeb89,	// (0x00035920) list_ai_message_pane_ParamLimits

0xeb89,	// (0x00035920) list_ai_message_pane

0xccc1,	// (0x00033a58) scroll_pane_cp10

0xeb25,	// (0x000358bc) list_ai_message_pane_g1

0xeb2d,	// (0x000358c4) list_ai_message_pane_g2

0x0001,

0xf960,	// (0x000366f7) list_ai_message_pane_g

0xeb35,	// (0x000358cc) list_ai_message_pane_t1_ParamLimits

0xeb35,	// (0x000358cc) list_ai_message_pane_t1

0xeb4a,	// (0x000358e1) list_ai_message_pane_t2_ParamLimits

0xeb4a,	// (0x000358e1) list_ai_message_pane_t2

0xeb5f,	// (0x000358f6) list_ai_message_pane_t3_ParamLimits

0xeb5f,	// (0x000358f6) list_ai_message_pane_t3

0xeb74,	// (0x0003590b) list_ai_message_pane_t4_ParamLimits

0xeb74,	// (0x0003590b) list_ai_message_pane_t4

0x0003,

0xf965,	// (0x000366fc) list_ai_message_pane_t_ParamLimits

0xf965,	// (0x000366fc) list_ai_message_pane_t

0xeb13,	// (0x000358aa) cell_ai_soft_ind_pane_ParamLimits

0xeb13,	// (0x000358aa) cell_ai_soft_ind_pane

0xd579,	// (0x00034310) cell_ai_soft_ind_pane_g1_ParamLimits

0xd579,	// (0x00034310) cell_ai_soft_ind_pane_g1

0x9255,	// (0x0002ffec) grid_highlight_cp1

0xd586,	// (0x0003431d) text_secondary_cp56_ParamLimits

0xd586,	// (0x0003431d) text_secondary_cp56

0xeae8,	// (0x0003587f) example_general_pane_ParamLimits

0xeae8,	// (0x0003587f) example_general_pane

0xeaf4,	// (0x0003588b) example_parent_pane_g1_ParamLimits

0xeaf4,	// (0x0003588b) example_parent_pane_g1

0xeb00,	// (0x00035897) example_parent_pane_t1_ParamLimits

0xeb00,	// (0x00035897) example_parent_pane_t1

0xa48d,	// (0x00031224) popup_preview_text_window_ParamLimits

0xa48d,	// (0x00031224) popup_preview_text_window

0xd46a,	// (0x00034201) list_single_pane_cp2_g4

0x985e,	// (0x000305f5) bg_popup_preview_window_pane_ParamLimits

0x985e,	// (0x000305f5) bg_popup_preview_window_pane

0xe88b,	// (0x00035622) popup_preview_text_window_t1_ParamLimits

0xe88b,	// (0x00035622) popup_preview_text_window_t1

0xe8a9,	// (0x00035640) popup_preview_text_window_t2_ParamLimits

0xe8a9,	// (0x00035640) popup_preview_text_window_t2

0xe8f2,	// (0x00035689) popup_preview_text_window_t3_ParamLimits

0xe8f2,	// (0x00035689) popup_preview_text_window_t3

0xe937,	// (0x000356ce) popup_preview_text_window_t4_ParamLimits

0xe937,	// (0x000356ce) popup_preview_text_window_t4

0x0004,

0xf934,	// (0x000366cb) popup_preview_text_window_t_ParamLimits

0xf934,	// (0x000366cb) popup_preview_text_window_t

0xe9b5,	// (0x0003574c) scroll_pane_cp11

0xda33,	// (0x000347ca) bg_popup_preview_window_pane_g1

0xe84b,	// (0x000355e2) bg_popup_preview_window_pane_g2

0xe853,	// (0x000355ea) bg_popup_preview_window_pane_g3

0xe85b,	// (0x000355f2) bg_popup_preview_window_pane_g4

0xe863,	// (0x000355fa) bg_popup_preview_window_pane_g5

0xe86b,	// (0x00035602) bg_popup_preview_window_pane_g6

0xe873,	// (0x0003560a) bg_popup_preview_window_pane_g7

0xe87b,	// (0x00035612) bg_popup_preview_window_pane_g8

0x4d51,	// (0x0002bae8) aid_popup_width_pane

0xa40f,	// (0x000311a6) popup_midp_note_alarm_window_ParamLimits

0xa40f,	// (0x000311a6) popup_midp_note_alarm_window

0xcb72,	// (0x00033909) data_form_pane_ParamLimits

0x8d2c,	// (0x0002fac3) form_field_data_pane_g1

0x8d36,	// (0x0002facd) form_field_data_pane_t1_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_ParamLimits

0xcb8c,	// (0x00033923) data_form_wide_pane_ParamLimits

0x4577,	// (0x0002b30e) form_field_data_wide_pane_g1

0x4583,	// (0x0002b31a) form_field_data_wide_pane_t1_ParamLimits

0x9aea,	// (0x00030881) input_focus_pane_cp6_ParamLimits

0x9cfe,	// (0x00030a95) input_popup_find_pane_g1_ParamLimits

0x9cfe,	// (0x00030a95) input_popup_find_pane_g1

0x51b2,	// (0x0002bf49) aid_navi_side_left_pane

0x51c2,	// (0x0002bf59) aid_navi_side_right_pane

0xe368,	// (0x000350ff) bg_popup_window_pane_cp30_ParamLimits

0xe368,	// (0x000350ff) bg_popup_window_pane_cp30

0xe3e2,	// (0x00035179) popup_midp_note_alarm_window_g1_ParamLimits

0xe3e2,	// (0x00035179) popup_midp_note_alarm_window_g1

0xe412,	// (0x000351a9) popup_midp_note_alarm_window_t1_ParamLimits

0xe412,	// (0x000351a9) popup_midp_note_alarm_window_t1

0xe4b3,	// (0x0003524a) popup_midp_note_alarm_window_t2_ParamLimits

0xe4b3,	// (0x0003524a) popup_midp_note_alarm_window_t2

0xe561,	// (0x000352f8) popup_midp_note_alarm_window_t3_ParamLimits

0xe561,	// (0x000352f8) popup_midp_note_alarm_window_t3

0xe589,	// (0x00035320) popup_midp_note_alarm_window_t4_ParamLimits

0xe589,	// (0x00035320) popup_midp_note_alarm_window_t4

0xe5a9,	// (0x00035340) popup_midp_note_alarm_window_t5_ParamLimits

0xe5a9,	// (0x00035340) popup_midp_note_alarm_window_t5

0x000a,

0xf8d1,	// (0x00036668) popup_midp_note_alarm_window_t_ParamLimits

0xf8d1,	// (0x00036668) popup_midp_note_alarm_window_t

0xe655,	// (0x000353ec) wait_bar_pane_cp1_ParamLimits

0xe655,	// (0x000353ec) wait_bar_pane_cp1

0x9255,	// (0x0002ffec) wait_anim_pane_copy1

0x9255,	// (0x0002ffec) wait_border_pane_copy1

0xe0ae,	// (0x00034e45) wait_border_pane_g1_copy1

0x459d,	// (0x0002b334) form_field_popup_pane_g1

0x8d4e,	// (0x0002fae5) form_field_popup_pane_t1_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_cp7_ParamLimits

0xcb72,	// (0x00033909) list_form_pane_ParamLimits

0x45bd,	// (0x0002b354) form_field_popup_wide_pane_g1

0x45c5,	// (0x0002b35c) form_field_popup_wide_pane_t1_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_cp8_ParamLimits

0xcbac,	// (0x00033943) list_form_wide_pane_ParamLimits

0xed41,	// (0x00035ad8) aid_size_cell_graphic_pane

0x8dcb,	// (0x0002fb62) data_form_pane_t1_ParamLimits

0x8edd,	// (0x0002fc74) data_form_wide_pane_t1_ParamLimits

0xa7eb,	// (0x00031582) bg_status_flat_pane

0x9352,	// (0x000300e9) title_pane_t1_ParamLimits

0x93df,	// (0x00030176) title_pane_t2_ParamLimits

0x9405,	// (0x0003019c) title_pane_t3_ParamLimits

0xf59b,	// (0x00036332) title_pane_t_ParamLimits

0x9dfe,	// (0x00030b95) level_1_signal_ParamLimits

0x9e10,	// (0x00030ba7) level_2_signal_ParamLimits

0x9e23,	// (0x00030bba) level_3_signal_ParamLimits

0x9e36,	// (0x00030bcd) level_4_signal_ParamLimits

0x9e49,	// (0x00030be0) level_5_signal_ParamLimits

0x9e5c,	// (0x00030bf3) level_6_signal_ParamLimits

0x9e6f,	// (0x00030c06) level_7_signal_ParamLimits

0x9dfe,	// (0x00030b95) level_1_battery_ParamLimits

0x9e10,	// (0x00030ba7) level_2_battery_ParamLimits

0x9e23,	// (0x00030bba) level_3_battery_ParamLimits

0x9e36,	// (0x00030bcd) level_4_battery_ParamLimits

0x9e49,	// (0x00030be0) level_5_battery_ParamLimits

0x9e5c,	// (0x00030bf3) level_6_battery_ParamLimits

0x9e6f,	// (0x00030c06) level_7_battery_ParamLimits

0xe297,	// (0x0003502e) bg_status_flat_pane_g1

0xe29f,	// (0x00035036) bg_status_flat_pane_g2

0xe2a7,	// (0x0003503e) bg_status_flat_pane_g3

0xe2af,	// (0x00035046) bg_status_flat_pane_g4

0xe2b7,	// (0x0003504e) bg_status_flat_pane_g5

0xe2bf,	// (0x00035056) bg_status_flat_pane_g6

0xe2c7,	// (0x0003505e) bg_status_flat_pane_g7

0x942d,	// (0x000301c4) tabs_3_active_pane_t1_ParamLimits

0x942d,	// (0x000301c4) tabs_3_passive_pane_t1_ParamLimits

0x9443,	// (0x000301da) tabs_4_active_pane_t1_ParamLimits

0x9443,	// (0x000301da) tabs_4_1_passive_pane_t1_ParamLimits

0x9d0a,	// (0x00030aa1) tabs_2_active_pane_t1_ParamLimits

0x9d0a,	// (0x00030aa1) tabs_2_passive_pane_t1_ParamLimits

0x9461,	// (0x000301f8) bg_active_tab_pane_cp4_ParamLimits

0x9d20,	// (0x00030ab7) tabs_2_long_active_pane_t1_ParamLimits

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp4_ParamLimits

0x56c0,	// (0x0002c457) list_single_midp_graphic_pane_t1_ParamLimits

0x9461,	// (0x000301f8) bg_active_tab_pane_cp5_ParamLimits

0x9d37,	// (0x00030ace) tabs_3_long_active_pane_t1_ParamLimits

0xccfa,	// (0x00033a91) bg_passive_tab_pane_cp5_ParamLimits

0x56c0,	// (0x0002c457) list_single_midp_graphic_pane_t1

0xa7eb,	// (0x00031582) bg_status_flat_pane_ParamLimits

0xd912,	// (0x000346a9) indicator_pane_cp2_ParamLimits

0xd912,	// (0x000346a9) indicator_pane_cp2

0xa951,	// (0x000316e8) navi_pane_srt_ParamLimits

0xa951,	// (0x000316e8) navi_pane_srt

0xd93a,	// (0x000346d1) popup_clock_digital_analogue_window_cp1

0x95e9,	// (0x00030380) indicator_pane_t1

0xd525,	// (0x000342bc) copy_highlight_pane

0xd525,	// (0x000342bc) cursor_graphics_pane

0xd525,	// (0x000342bc) graphic_within_text_pane

0xd525,	// (0x000342bc) link_highlight_pane

0xe978,	// (0x0003570f) popup_preview_text_window_t5_ParamLimits

0xe978,	// (0x0003570f) popup_preview_text_window_t5

0xd5a0,	// (0x00034337) cursor_digital_pane

0xd5a0,	// (0x00034337) cursor_primary_pane

0xd5b1,	// (0x00034348) cursor_primary_small_pane

0xd5b9,	// (0x00034350) cursor_secondary_pane

0xd5c1,	// (0x00034358) cursor_title_pane

0xd5a0,	// (0x00034337) link_highlight_digital_pane

0xd5a8,	// (0x0003433f) link_highlight_primary_pane

0xd5b1,	// (0x00034348) link_highlight_primary_small_pane

0xd5b9,	// (0x00034350) link_highlight_secondary_pane

0xd5c1,	// (0x00034358) link_highlight_title_pane

0xd5a0,	// (0x00034337) copy_highlight_digital_pane

0xd5a0,	// (0x00034337) copy_highlight_primary_pane

0xd5b1,	// (0x00034348) copy_highlight_primary_small_pane

0xd5b9,	// (0x00034350) copy_highlight_secondary_pane

0xd5c1,	// (0x00034358) copy_highlight_title_pane

0xd5b9,	// (0x00034350) graphic_text_digital_pane

0xe317,	// (0x000350ae) graphic_text_primary_pane

0xe320,	// (0x000350b7) graphic_text_primary_small_pane

0xd5b1,	// (0x00034348) graphic_text_secondary_pane

0xd5a0,	// (0x00034337) graphic_text_title_pane

0x9ffe,	// (0x00030d95) cursor_primary_pane_g1

0xe309,	// (0x000350a0) cursor_text_primary_t1

0xac26,	// (0x000319bd) cursor_primary_small_pane_g1

0xe2fb,	// (0x00035092) cursor_text_primary_small_t1

0xac1c,	// (0x000319b3) cursor_primary_small_pane_g1_copy1

0xe2ed,	// (0x00035084) cursor_text_primary_small_t1_copy1

0xe2df,	// (0x00035076) cursor_text_title_t1

0xac12,	// (0x000319a9) cursor_title_pane_g1

0x9ffe,	// (0x00030d95) cursor_digital_pane_g1

0xd5c9,	// (0x00034360) cursor_text_digital_t1

0xd5d7,	// (0x0003436e) link_highlight_primary_pane_g1

0xe288,	// (0x0003501f) link_highlight_primary_pane_t1

0xd5d7,	// (0x0003436e) link_highlight_primary_small_pane_g1

0xd5df,	// (0x00034376) link_highlight_primary_small_pane_t1

0xd5ee,	// (0x00034385) link_highlight_secondary_pane_g1

0xd5f6,	// (0x0003438d) link_highlight_secondary_pane_t1

0xe1ed,	// (0x00034f84) link_highlight_title_pane_g1

0xe204,	// (0x00034f9b) link_highlight_title_pane_t1

0xe1ed,	// (0x00034f84) link_highlight_digital_pane_g1

0xe1f5,	// (0x00034f8c) link_highlight_digital_pane_t1

0xe0c9,	// (0x00034e60) copy_highlight_primary_pane_g1

0xe0ef,	// (0x00034e86) copy_highlight_primary_pane_t1

0xe0c9,	// (0x00034e60) copy_highlight_primary_small_pane_g1

0xe0e0,	// (0x00034e77) copy_highlight_primary_small_pane_t1

0xd605,	// (0x0003439c) copy_highlight_secondary_pane_g1

0xd60d,	// (0x000343a4) copy_highlight_secondary_pane_t1

0xe0c9,	// (0x00034e60) copy_highlight_title_pane_g1

0xe0d1,	// (0x00034e68) copy_highlight_title_pane_t1

0xe0c9,	// (0x00034e60) copy_highlight_digital_pane_g1

0xeec7,	// (0x00035c5e) copy_highlight_digital_pane_t1

0xedc5,	// (0x00035b5c) graphic_text_primary_pane_g1

0xeeab,	// (0x00035c42) graphic_text_primary_pane_t1

0xeeb9,	// (0x00035c50) graphic_text_primary_pane_t2

0x0001,

0xfa00,	// (0x00036797) graphic_text_primary_pane_t

0xee87,	// (0x00035c1e) graphic_text_primary_small_pane_g1

0xee8f,	// (0x00035c26) graphic_text_primary_small_pane_t1

0xee9d,	// (0x00035c34) graphic_text_primary_small_pane_t2

0x0001,

0xf9fb,	// (0x00036792) graphic_text_primary_small_pane_t

0xee63,	// (0x00035bfa) graphic_text_secondary_pane_g1

0xee6b,	// (0x00035c02) graphic_text_secondary_pane_t1

0xee79,	// (0x00035c10) graphic_text_secondary_pane_t2

0x0001,

0xf9f6,	// (0x0003678d) graphic_text_secondary_pane_t

0xee3f,	// (0x00035bd6) graphic_text_title_pane_g1

0xee47,	// (0x00035bde) graphic_text_title_pane_t1

0xee55,	// (0x00035bec) graphic_text_title_pane_t2

0x0001,

0xf9f1,	// (0x00036788) graphic_text_title_pane_t

0xedc5,	// (0x00035b5c) graphic_text_digital_pane_g1

0xedcd,	// (0x00035b64) graphic_text_digital_pane_t1

0xee31,	// (0x00035bc8) graphic_text_digital_pane_t2

0x0001,

0xf9ec,	// (0x00036783) graphic_text_digital_pane_t

0x9461,	// (0x000301f8) navi_icon_pane_srt_ParamLimits

0x9461,	// (0x000301f8) navi_icon_pane_srt

0x9255,	// (0x0002ffec) navi_midp_pane_srt

0x9255,	// (0x0002ffec) navi_navi_pane_srt

0x9461,	// (0x000301f8) navi_text_pane_srt_ParamLimits

0x9461,	// (0x000301f8) navi_text_pane_srt

0xed90,	// (0x00035b27) navi_navi_icon_text_pane_srt

0xed98,	// (0x00035b2f) navi_navi_pane_srt_g1_ParamLimits

0xed98,	// (0x00035b2f) navi_navi_pane_srt_g1

0xedaa,	// (0x00035b41) navi_navi_pane_srt_g2_ParamLimits

0xedaa,	// (0x00035b41) navi_navi_pane_srt_g2

0x0001,

0xf9e7,	// (0x0003677e) navi_navi_pane_srt_g_ParamLimits

0xf9e7,	// (0x0003677e) navi_navi_pane_srt_g

0xedbc,	// (0x00035b53) navi_navi_tabs_pane_srt

0xed90,	// (0x00035b27) navi_navi_text_pane_srt

0xed90,	// (0x00035b27) navi_navi_volume_pane_srt

0xed81,	// (0x00035b18) navi_navi_text_pane_srt_t1

0x59f7,	// (0x0002c78e) navi_navi_volume_pane_srt_g1

0x59ff,	// (0x0002c796) volume_small_pane_srt_ParamLimits

0x59ff,	// (0x0002c796) volume_small_pane_srt

0x5469,	// (0x0002c200) volume_small_pane_srt_g1_ParamLimits

0x5469,	// (0x0002c200) volume_small_pane_srt_g1

0x5479,	// (0x0002c210) volume_small_pane_srt_g2_ParamLimits

0x5479,	// (0x0002c210) volume_small_pane_srt_g2

0x548a,	// (0x0002c221) volume_small_pane_srt_g3_ParamLimits

0x548a,	// (0x0002c221) volume_small_pane_srt_g3

0x549b,	// (0x0002c232) volume_small_pane_srt_g4_ParamLimits

0x549b,	// (0x0002c232) volume_small_pane_srt_g4

0x54ac,	// (0x0002c243) volume_small_pane_srt_g5_ParamLimits

0x54ac,	// (0x0002c243) volume_small_pane_srt_g5

0x54bd,	// (0x0002c254) volume_small_pane_srt_g6_ParamLimits

0x54bd,	// (0x0002c254) volume_small_pane_srt_g6

0x54ce,	// (0x0002c265) volume_small_pane_srt_g7_ParamLimits

0x54ce,	// (0x0002c265) volume_small_pane_srt_g7

0x54df,	// (0x0002c276) volume_small_pane_srt_g8_ParamLimits

0x54df,	// (0x0002c276) volume_small_pane_srt_g8

0x54f0,	// (0x0002c287) volume_small_pane_srt_g9_ParamLimits

0x54f0,	// (0x0002c287) volume_small_pane_srt_g9

0x5501,	// (0x0002c298) volume_small_pane_srt_g10_ParamLimits

0x5501,	// (0x0002c298) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x00036539) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x00036539) volume_small_pane_srt_g

0x9907,	// (0x0003069e) query_popup_data_pane_cp2

0xed67,	// (0x00035afe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xed67,	// (0x00035afe) navi_navi_icon_text_pane_srt_t1

0xe317,	// (0x000350ae) navi_tabs_2_long_pane_srt

0xe317,	// (0x000350ae) navi_tabs_2_pane_srt

0xe317,	// (0x000350ae) navi_tabs_3_long_pane_srt

0xe317,	// (0x000350ae) navi_tabs_3_pane_srt

0xe317,	// (0x000350ae) navi_tabs_4_pane_srt

0x59d7,	// (0x0002c76e) tabs_2_active_pane_srt_ParamLimits

0x59d7,	// (0x0002c76e) tabs_2_active_pane_srt

0x59e7,	// (0x0002c77e) tabs_2_passive_pane_srt_ParamLimits

0x59e7,	// (0x0002c77e) tabs_2_passive_pane_srt

0xdb21,	// (0x000348b8) bg_passive_tab_pane_cp1_srt_ParamLimits

0xdb21,	// (0x000348b8) bg_passive_tab_pane_cp1_srt

0xdc96,	// (0x00034a2d) bg_passive_tab_pane_g1_cp1_srt

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp1_srt

0xdc9f,	// (0x00034a36) bg_passive_tab_pane_g3_cp1_srt

0x9417,	// (0x000301ae) bg_active_tab_pane_cp1_srt_ParamLimits

0x9417,	// (0x000301ae) bg_active_tab_pane_cp1_srt

0xdc8e,	// (0x00034a25) tabs_2_active_pane_srt_g1

0x9d0a,	// (0x00030aa1) tabs_2_active_pane_srt_t1_ParamLimits

0x9d0a,	// (0x00030aa1) tabs_2_active_pane_srt_t1

0xdc96,	// (0x00034a2d) bg_active_tab_pane_g1_cp1_srt

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp1_srt

0xdc9f,	// (0x00034a36) bg_active_tab_pane_g3_cp1_srt

0x59a4,	// (0x0002c73b) tabs_3_active_pane_srt_ParamLimits

0x59a4,	// (0x0002c73b) tabs_3_active_pane_srt

0x59b5,	// (0x0002c74c) tabs_3_passive_pane_cp_srt_ParamLimits

0x59b5,	// (0x0002c74c) tabs_3_passive_pane_cp_srt

0x59c6,	// (0x0002c75d) tabs_3_passive_pane_srt_ParamLimits

0x59c6,	// (0x0002c75d) tabs_3_passive_pane_srt

0xdb21,	// (0x000348b8) bg_passive_tab_pane_cp2_srt_ParamLimits

0xdb21,	// (0x000348b8) bg_passive_tab_pane_cp2_srt

0xd61c,	// (0x000343b3) bg_passive_tab_pane_g1_cp2_srt

0xd22f,	// (0x00033fc6) bg_passive_tab_pane_g2_cp2_srt

0xd625,	// (0x000343bc) bg_passive_tab_pane_g3_cp2_srt

0x9417,	// (0x000301ae) bg_active_tab_pane_cp2_srt_ParamLimits

0x9417,	// (0x000301ae) bg_active_tab_pane_cp2_srt

0xed57,	// (0x00035aee) tabs_3_active_pane_srt_g1

0x942d,	// (0x000301c4) tabs_3_active_pane_srt_t1_ParamLimits

0x942d,	// (0x000301c4) tabs_3_active_pane_srt_t1

0xd61c,	// (0x000343b3) bg_active_tab_pane_g1_cp2_srt

0xd22f,	// (0x00033fc6) bg_active_tab_pane_g2_cp2_srt

0xd625,	// (0x000343bc) bg_active_tab_pane_g3_cp2_srt

0x595c,	// (0x0002c6f3) tabs_4_active_pane_srt_ParamLimits

0x595c,	// (0x0002c6f3) tabs_4_active_pane_srt

0x596e,	// (0x0002c705) tabs_4_passive_pane_cp2_srt_ParamLimits

0x596e,	// (0x0002c705) tabs_4_passive_pane_cp2_srt

0xd73f,	// (0x000344d6) aid_size_cell_toolbar

0xa17f,	// (0x00030f16) main_idle_act_pane_ParamLimits

0xd7fb,	// (0x00034592) popup_large_graphic_colour_window_ParamLimits

0xa6dd,	// (0x00031474) popup_toolbar_window_ParamLimits

0xa6dd,	// (0x00031474) popup_toolbar_window

0x5933,	// (0x0002c6ca) list_single_graphic_2heading_pane_ParamLimits

0x5933,	// (0x0002c6ca) list_single_graphic_2heading_pane

0xcebf,	// (0x00033c56) aid_size_cell_apps_grid_lsc_pane

0xced1,	// (0x00033c68) aid_size_cell_apps_grid_prt_pane

0xccfa,	// (0x00033a91) bg_wml_button_pane_cp1_ParamLimits

0xccfa,	// (0x00033a91) bg_wml_button_pane_cp1

0xabc9,	// (0x00031960) form_midp_field_text_pane_t1_ParamLimits

0xdb21,	// (0x000348b8) input_focus_pane_cp050_ParamLimits

0xdddc,	// (0x00034b73) list_midp_form_text_pane_ParamLimits

0xddb9,	// (0x00034b50) input_focus_pane_cp051_ParamLimits

0xddcd,	// (0x00034b64) list_midp_choice_pane_ParamLimits

0xab67,	// (0x000318fe) list_single_2graphic_pane_cp3_ParamLimits

0xab67,	// (0x000318fe) list_single_2graphic_pane_cp3

0xab7a,	// (0x00031911) list_single_midp_graphic_pane_ParamLimits

0xab7a,	// (0x00031911) list_single_midp_graphic_pane

0x4798,	// (0x0002b52f) list_single_graphic_2heading_pane_g1_ParamLimits

0x4798,	// (0x0002b52f) list_single_graphic_2heading_pane_g1

0x47a4,	// (0x0002b53b) list_single_graphic_2heading_pane_g4_ParamLimits

0x47a4,	// (0x0002b53b) list_single_graphic_2heading_pane_g4

0x4354,	// (0x0002b0eb) list_single_graphic_2heading_pane_g5_ParamLimits

0x4354,	// (0x0002b0eb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003658c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003658c) list_single_graphic_2heading_pane_g

0x47b0,	// (0x0002b547) list_single_graphic_2heading_pane_t1_ParamLimits

0x47b0,	// (0x0002b547) list_single_graphic_2heading_pane_t1

0x47c4,	// (0x0002b55b) list_single_graphic_2heading_pane_t2_ParamLimits

0x47c4,	// (0x0002b55b) list_single_graphic_2heading_pane_t2

0x47de,	// (0x0002b575) list_single_graphic_2heading_pane_t3_ParamLimits

0x47de,	// (0x0002b575) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x00036593) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x00036593) list_single_graphic_2heading_pane_t

0xd97d,	// (0x00034714) bg_popup_sub_pane_cp2

0xd9a3,	// (0x0003473a) grid_toobar_pane

0x565c,	// (0x0002c3f3) cell_toolbar_pane_ParamLimits

0x565c,	// (0x0002c3f3) cell_toolbar_pane

0xd9d9,	// (0x00034770) cell_toolbar_pane_g1_ParamLimits

0xd9d9,	// (0x00034770) cell_toolbar_pane_g1

0xd9eb,	// (0x00034782) cell_toolbar_pane_g2_ParamLimits

0xd9eb,	// (0x00034782) cell_toolbar_pane_g2

0x0001,

0xf803,	// (0x0003659a) cell_toolbar_pane_g_ParamLimits

0xf803,	// (0x0003659a) cell_toolbar_pane_g

0xda0d,	// (0x000347a4) grid_highlight_pane_cp2_ParamLimits

0xda0d,	// (0x000347a4) grid_highlight_pane_cp2

0xda27,	// (0x000347be) toolbar_button_pane

0xda33,	// (0x000347ca) toolbar_button_pane_g1

0xda3b,	// (0x000347d2) toolbar_button_pane_g2

0xda43,	// (0x000347da) toolbar_button_pane_g3

0xda4b,	// (0x000347e2) toolbar_button_pane_g4

0xda53,	// (0x000347ea) toolbar_button_pane_g5

0xda5b,	// (0x000347f2) toolbar_button_pane_g6

0xda63,	// (0x000347fa) toolbar_button_pane_g7

0xda6b,	// (0x00034802) toolbar_button_pane_g8

0xda73,	// (0x0003480a) toolbar_button_pane_g9

0x0009,

0xf808,	// (0x0003659f) toolbar_button_pane_g

0x568b,	// (0x0002c422) list_single_2graphic_pane_g1_cp3_ParamLimits

0x568b,	// (0x0002c422) list_single_2graphic_pane_g1_cp3

0xaacf,	// (0x00031866) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaacf,	// (0x00031866) list_single_2graphic_pane_g2_cp3

0xd3a6,	// (0x0003413d) list_single_2graphic_pane_g3_cp3

0xdca8,	// (0x00034a3f) list_single_2graphic_pane_g4_cp3_ParamLimits

0xdca8,	// (0x00034a3f) list_single_2graphic_pane_g4_cp3

0x56a6,	// (0x0002c43d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x56a6,	// (0x0002c43d) list_single_2graphic_pane_t1_cp3

0xd39a,	// (0x00034131) list_single_midp_graphic_pane_g2_ParamLimits

0xd39a,	// (0x00034131) list_single_midp_graphic_pane_g2

0x476b,	// (0x0002b502) aid_zoom_text_primary

0x5654,	// (0x0002c3eb) aid_zoom_text_secondary

0xd6d7,	// (0x0003446e) status_small_pane_g7_ParamLimits

0xd6d7,	// (0x0003446e) status_small_pane_g7

0xd6fa,	// (0x00034491) status_small_pane_t1_ParamLimits

0x931b,	// (0x000300b2) title_pane_g2

0x0003,

0xf592,	// (0x00036329) title_pane_g

0x99a6,	// (0x0003073d) aid_size_cell_colour_1_pane_ParamLimits

0x99a6,	// (0x0003073d) aid_size_cell_colour_1_pane

0x99ba,	// (0x00030751) aid_size_cell_colour_2_pane_ParamLimits

0x99ba,	// (0x00030751) aid_size_cell_colour_2_pane

0x99ce,	// (0x00030765) aid_size_cell_colour_3_pane_ParamLimits

0x99ce,	// (0x00030765) aid_size_cell_colour_3_pane

0x99e2,	// (0x00030779) aid_size_cell_colour_4_pane_ParamLimits

0x99e2,	// (0x00030779) aid_size_cell_colour_4_pane

0x5114,	// (0x0002beab) title_pane_stacon_g1_ParamLimits

0x5114,	// (0x0002beab) title_pane_stacon_g1

0xe146,	// (0x00034edd) popup_note_wait_window_g3_ParamLimits

0xe146,	// (0x00034edd) popup_note_wait_window_g3

0xe1bc,	// (0x00034f53) popup_note_wait_window_t5_ParamLimits

0xe1bc,	// (0x00034f53) popup_note_wait_window_t5

0x9255,	// (0x0002ffec) main_feb_china_hwr_fs_writing_pane

0xa1e0,	// (0x00030f77) popup_feb_china_hwr_fs_window_ParamLimits

0xa1e0,	// (0x00030f77) popup_feb_china_hwr_fs_window

0xaae0,	// (0x00031877) aid_size_cell_hwr_fs_ParamLimits

0xaae0,	// (0x00031877) aid_size_cell_hwr_fs

0xdb21,	// (0x000348b8) bg_popup_sub_pane_cp3_ParamLimits

0xdb21,	// (0x000348b8) bg_popup_sub_pane_cp3

0xaaf5,	// (0x0003188c) grid_hwr_fs_pane_ParamLimits

0xaaf5,	// (0x0003188c) grid_hwr_fs_pane

0x56ff,	// (0x0002c496) linegrid_hwr_fs_pane_ParamLimits

0x56ff,	// (0x0002c496) linegrid_hwr_fs_pane

0xab0d,	// (0x000318a4) cell_hwr_fs_pane_ParamLimits

0xab0d,	// (0x000318a4) cell_hwr_fs_pane

0xdb2d,	// (0x000348c4) linegrid_hwr_fs_pane_g1_ParamLimits

0xdb2d,	// (0x000348c4) linegrid_hwr_fs_pane_g1

0xab2d,	// (0x000318c4) linegrid_hwr_fs_pane_g2_ParamLimits

0xab2d,	// (0x000318c4) linegrid_hwr_fs_pane_g2

0xdcb4,	// (0x00034a4b) linegrid_hwr_fs_pane_g3_ParamLimits

0xdcb4,	// (0x00034a4b) linegrid_hwr_fs_pane_g3

0x572d,	// (0x0002c4c4) linegrid_hwr_fs_pane_g4_ParamLimits

0x572d,	// (0x0002c4c4) linegrid_hwr_fs_pane_g4

0x5747,	// (0x0002c4de) linegrid_hwr_fs_pane_g5_ParamLimits

0x5747,	// (0x0002c4de) linegrid_hwr_fs_pane_g5

0x0004,

0xf82e,	// (0x000365c5) linegrid_hwr_fs_pane_g_ParamLimits

0xf82e,	// (0x000365c5) linegrid_hwr_fs_pane_g

0xdcc0,	// (0x00034a57) cell_hwr_fs_pane_g1_ParamLimits

0xdcc0,	// (0x00034a57) cell_hwr_fs_pane_g1

0xd94b,	// (0x000346e2) cell_hwr_fs_pane_g2_ParamLimits

0xd94b,	// (0x000346e2) cell_hwr_fs_pane_g2

0xab3f,	// (0x000318d6) cell_hwr_fs_pane_g3_ParamLimits

0xab3f,	// (0x000318d6) cell_hwr_fs_pane_g3

0xab4c,	// (0x000318e3) cell_hwr_fs_pane_g4_ParamLimits

0xab4c,	// (0x000318e3) cell_hwr_fs_pane_g4

0x0003,

0xf839,	// (0x000365d0) cell_hwr_fs_pane_g_ParamLimits

0xf839,	// (0x000365d0) cell_hwr_fs_pane_g

0xab59,	// (0x000318f0) cell_hwr_fs_pane_t1

0x9255,	// (0x0002ffec) grid_highlight_pane_cp6

0x9255,	// (0x0002ffec) main_idle_act2_pane

0xcca8,	// (0x00033a3f) aid_inside_area_popup_secondary

0xad33,	// (0x00031aca) aid_inside_area_window_primary_ParamLimits

0xad33,	// (0x00031aca) aid_inside_area_window_primary

0xeed6,	// (0x00035c6d) ai2_news_ticker_pane

0xeede,	// (0x00035c75) aid_size_cell_ai1_link_ParamLimits

0xeede,	// (0x00035c75) aid_size_cell_ai1_link

0xb13e,	// (0x00031ed5) popup_ai2_data_window_ParamLimits

0xb13e,	// (0x00031ed5) popup_ai2_data_window

0xeef8,	// (0x00035c8f) popup_ai2_link_window_ParamLimits

0xeef8,	// (0x00035c8f) popup_ai2_link_window

0xdb21,	// (0x000348b8) bg_popup_sub_pane_cp4_ParamLimits

0xdb21,	// (0x000348b8) bg_popup_sub_pane_cp4

0xef0c,	// (0x00035ca3) grid_ai2_link_pane_ParamLimits

0xef0c,	// (0x00035ca3) grid_ai2_link_pane

0xef23,	// (0x00035cba) popup_ai2_link_window_g1_ParamLimits

0xef23,	// (0x00035cba) popup_ai2_link_window_g1

0xef2f,	// (0x00035cc6) popup_ai2_link_window_g2_ParamLimits

0xef2f,	// (0x00035cc6) popup_ai2_link_window_g2

0x0001,

0xfa05,	// (0x0003679c) popup_ai2_link_window_g_ParamLimits

0xfa05,	// (0x0003679c) popup_ai2_link_window_g

0xef3e,	// (0x00035cd5) ai2_mp_button_pane

0xef46,	// (0x00035cdd) ai2_mp_volume_pane

0xddb9,	// (0x00034b50) bg_popup_sub_pane_cp5_ParamLimits

0xddb9,	// (0x00034b50) bg_popup_sub_pane_cp5

0xef4e,	// (0x00035ce5) heading_ai2_gene_pane_ParamLimits

0xef4e,	// (0x00035ce5) heading_ai2_gene_pane

0xef5a,	// (0x00035cf1) list_ai2_gene_pane_ParamLimits

0xef5a,	// (0x00035cf1) list_ai2_gene_pane

0xefa2,	// (0x00035d39) cell_ai2_link_pane_ParamLimits

0xefa2,	// (0x00035d39) cell_ai2_link_pane

0xefb8,	// (0x00035d4f) cell_ai2_link_pane_g1

0x9255,	// (0x0002ffec) grid_highlight_pane_cp7

0x5a14,	// (0x0002c7ab) ai2_mp_volume_pane_g1

0xf04d,	// (0x00035de4) ai2_mp_volume_pane_g2

0xb168,	// (0x00031eff) list_ai2_gene_pane_t1

0xf055,	// (0x00035dec) ai2_mp_volume_pane_g3

0x0002,

0xfa1e,	// (0x000367b5) ai2_mp_volume_pane_g

0x5a1c,	// (0x0002c7b3) volume_small_pane_cp3

0xf05d,	// (0x00035df4) aid_size_cell_ai2_button

0xf065,	// (0x00035dfc) grid_ai2_button_pane

0xf06e,	// (0x00035e05) cell_ai2_button_pane_ParamLimits

0xf06e,	// (0x00035e05) cell_ai2_button_pane

0x9108,	// (0x0002fe9f) cell_ai2_button_pane_g1

0x9255,	// (0x0002ffec) grid_highlight_pane_cp8

0xf00d,	// (0x00035da4) ai2_gene_pane_t1_ParamLimits

0xf00d,	// (0x00035da4) ai2_gene_pane_t1

0xa14e,	// (0x00030ee5) aid_height_parent_landscape

0xaeeb,	// (0x00031c82) aid_height_set_list

0xec6d,	// (0x00035a04) aid_size_parent

0xed41,	// (0x00035ad8) aid_size_cell_graphic_pane_ParamLimits

0xef6a,	// (0x00035d01) popup_ai2_data_window_g1_ParamLimits

0xef6a,	// (0x00035d01) popup_ai2_data_window_g1

0xef76,	// (0x00035d0d) ai2_news_ticker_pane_g1

0xef7e,	// (0x00035d15) ai2_news_ticker_pane_g2

0x0001,

0xfa0a,	// (0x000367a1) ai2_news_ticker_pane_g

0xef86,	// (0x00035d1d) ai2_news_ticker_pane_t1

0xef94,	// (0x00035d2b) ai2_news_ticker_pane_t2

0x0001,

0xfa0f,	// (0x000367a6) ai2_news_ticker_pane_t

0xed22,	// (0x00035ab9) heading_ai2_gene_pane_g1

0xefc1,	// (0x00035d58) heading_ai2_gene_pane_t1_ParamLimits

0xefc1,	// (0x00035d58) heading_ai2_gene_pane_t1

0xefd6,	// (0x00035d6d) list_highlight_pane_cp6

0xb152,	// (0x00031ee9) ai2_gene_pane_ParamLimits

0xb152,	// (0x00031ee9) ai2_gene_pane

0xb176,	// (0x00031f0d) list_ai2_gene_pane_t2

0x0001,

0xfa14,	// (0x000367ab) list_ai2_gene_pane_t

0xefde,	// (0x00035d75) list_highlight_pane_cp8_ParamLimits

0xefde,	// (0x00035d75) list_highlight_pane_cp8

0xefef,	// (0x00035d86) ai2_gene_pane_g1_ParamLimits

0xefef,	// (0x00035d86) ai2_gene_pane_g1

0xf001,	// (0x00035d98) ai2_gene_pane_g2_ParamLimits

0xf001,	// (0x00035d98) ai2_gene_pane_g2

0x0001,

0xfa19,	// (0x000367b0) ai2_gene_pane_g_ParamLimits

0xfa19,	// (0x000367b0) ai2_gene_pane_g

0x9c73,	// (0x00030a0a) scroll_pane_cp12

0xa10d,	// (0x00030ea4) control_pane_t3_ParamLimits

0xa10d,	// (0x00030ea4) control_pane_t3

0xd6eb,	// (0x00034482) status_small_pane_g8_ParamLimits

0xd6eb,	// (0x00034482) status_small_pane_g8

0xa254,	// (0x00030feb) popup_find_window_ParamLimits

0xa447,	// (0x000311de) popup_note_image_window_ParamLimits

0x41f5,	// (0x0002af8c) list_double2_graphic_pane_vc_g1_ParamLimits

0x41f5,	// (0x0002af8c) list_double2_graphic_pane_vc_g1

0x507d,	// (0x0002be14) list_double2_graphic_pane_vc_g2_ParamLimits

0x507d,	// (0x0002be14) list_double2_graphic_pane_vc_g2

0x5089,	// (0x0002be20) list_double2_graphic_pane_vc_g3_ParamLimits

0x5089,	// (0x0002be20) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x0003639c) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x0003639c) list_double2_graphic_pane_vc_g

0x41cd,	// (0x0002af64) list_double2_graphic_pane_vc_t1_ParamLimits

0x41cd,	// (0x0002af64) list_double2_graphic_pane_vc_t1

0x507d,	// (0x0002be14) list_single_heading_pane_vc_g1_ParamLimits

0x507d,	// (0x0002be14) list_single_heading_pane_vc_g1

0x5089,	// (0x0002be20) list_single_heading_pane_vc_g2_ParamLimits

0x5089,	// (0x0002be20) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x000363ad) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x000363ad) list_single_heading_pane_vc_g

0x47f6,	// (0x0002b58d) list_single_heading_pane_vc_t1_ParamLimits

0x47f6,	// (0x0002b58d) list_single_heading_pane_vc_t1

0x480c,	// (0x0002b5a3) list_single_heading_pane_vc_t2_ParamLimits

0x480c,	// (0x0002b5a3) list_single_heading_pane_vc_t2

0x0001,

0xf81d,	// (0x000365b4) list_single_heading_pane_vc_t_ParamLimits

0xf81d,	// (0x000365b4) list_single_heading_pane_vc_t

0xda7b,	// (0x00034812) list_setting_number_pane_vc_g1_ParamLimits

0xda7b,	// (0x00034812) list_setting_number_pane_vc_g1

0xda87,	// (0x0003481e) list_setting_number_pane_vc_g2_ParamLimits

0xda87,	// (0x0003481e) list_setting_number_pane_vc_g2

0x0001,

0xf822,	// (0x000365b9) list_setting_number_pane_vc_g_ParamLimits

0xf822,	// (0x000365b9) list_setting_number_pane_vc_g

0xda93,	// (0x0003482a) list_setting_number_pane_vc_t1_ParamLimits

0xda93,	// (0x0003482a) list_setting_number_pane_vc_t1

0xdaa7,	// (0x0003483e) list_setting_number_pane_vc_t2_ParamLimits

0xdaa7,	// (0x0003483e) list_setting_number_pane_vc_t2

0xdac3,	// (0x0003485a) list_setting_number_pane_vc_t3_ParamLimits

0xdac3,	// (0x0003485a) list_setting_number_pane_vc_t3

0x0002,

0xf827,	// (0x000365be) list_setting_number_pane_vc_t_ParamLimits

0xf827,	// (0x000365be) list_setting_number_pane_vc_t

0xdae9,	// (0x00034880) set_value_pane_vc_ParamLimits

0xdae9,	// (0x00034880) set_value_pane_vc

0x5933,	// (0x0002c6ca) list_double2_graphic_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double2_graphic_pane_vc

0xecc8,	// (0x00035a5f) list_double2_large_graphic_pane_vc_ParamLimits

0xecc8,	// (0x00035a5f) list_double2_large_graphic_pane_vc

0x5933,	// (0x0002c6ca) list_double2_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double2_pane_vc

0x5933,	// (0x0002c6ca) list_double_graphic_heading_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double_graphic_heading_pane_vc

0x5933,	// (0x0002c6ca) list_double_graphic_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double_graphic_pane_vc

0x5933,	// (0x0002c6ca) list_double_heading_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double_heading_pane_vc

0xecc8,	// (0x00035a5f) list_double_large_graphic_pane_vc_ParamLimits

0xecc8,	// (0x00035a5f) list_double_large_graphic_pane_vc

0x5933,	// (0x0002c6ca) list_double_number_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double_number_pane_vc

0x5933,	// (0x0002c6ca) list_double_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double_pane_vc

0x5933,	// (0x0002c6ca) list_double_time_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_double_time_pane_vc

0x5933,	// (0x0002c6ca) list_setting_number_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_setting_number_pane_vc

0x5933,	// (0x0002c6ca) list_setting_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_setting_pane_vc

0x5933,	// (0x0002c6ca) list_single_graphic_heading_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_single_graphic_heading_pane_vc

0x5933,	// (0x0002c6ca) list_single_heading_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_single_heading_pane_vc

0x5933,	// (0x0002c6ca) list_single_number_heading_pane_vc_ParamLimits

0x5933,	// (0x0002c6ca) list_single_number_heading_pane_vc

0x41f5,	// (0x0002af8c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x41f5,	// (0x0002af8c) list_double_graphic_heading_pane_vc_g1

0x507d,	// (0x0002be14) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x507d,	// (0x0002be14) list_double_graphic_heading_pane_vc_g2

0x5089,	// (0x0002be20) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5089,	// (0x0002be20) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf605,	// (0x0003639c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0003639c) list_double_graphic_heading_pane_vc_g

0x48ee,	// (0x0002b685) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48ee,	// (0x0002b685) list_double_graphic_heading_pane_vc_t1

0x47f6,	// (0x0002b58d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x47f6,	// (0x0002b58d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa25,	// (0x000367bc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x000367bc) list_double_graphic_heading_pane_vc_t

0xda7b,	// (0x00034812) list_setting_pane_vc_g1_ParamLimits

0xda7b,	// (0x00034812) list_setting_pane_vc_g1

0xda87,	// (0x0003481e) list_setting_pane_vc_g2_ParamLimits

0xda87,	// (0x0003481e) list_setting_pane_vc_g2

0x0001,

0xf822,	// (0x000365b9) list_setting_pane_vc_g_ParamLimits

0xf822,	// (0x000365b9) list_setting_pane_vc_g

0xf25d,	// (0x00035ff4) list_setting_pane_vc_t1_ParamLimits

0xf25d,	// (0x00035ff4) list_setting_pane_vc_t1

0xf271,	// (0x00036008) list_setting_pane_vc_t2_ParamLimits

0xf271,	// (0x00036008) list_setting_pane_vc_t2

0x0001,

0xfa68,	// (0x000367ff) list_setting_pane_vc_t_ParamLimits

0xfa68,	// (0x000367ff) list_setting_pane_vc_t

0xdae9,	// (0x00034880) set_value_pane_cp_vc_ParamLimits

0xdae9,	// (0x00034880) set_value_pane_cp_vc

0x507d,	// (0x0002be14) list_single_number_heading_pane_vc_g1_ParamLimits

0x507d,	// (0x0002be14) list_single_number_heading_pane_vc_g1

0x5089,	// (0x0002be20) list_single_number_heading_pane_vc_g2_ParamLimits

0x5089,	// (0x0002be20) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x000363ad) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x000363ad) list_single_number_heading_pane_vc_g

0x47f6,	// (0x0002b58d) list_single_number_heading_pane_vc_t1_ParamLimits

0x47f6,	// (0x0002b58d) list_single_number_heading_pane_vc_t1

0x4900,	// (0x0002b697) list_single_number_heading_pane_vc_t2_ParamLimits

0x4900,	// (0x0002b697) list_single_number_heading_pane_vc_t2

0x4912,	// (0x0002b6a9) list_single_number_heading_pane_vc_t3_ParamLimits

0x4912,	// (0x0002b6a9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6d,	// (0x00036804) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x00036804) list_single_number_heading_pane_vc_t

0x41f5,	// (0x0002af8c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x41f5,	// (0x0002af8c) list_single_graphic_heading_pane_vc_g1

0x507d,	// (0x0002be14) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x507d,	// (0x0002be14) list_single_graphic_heading_pane_vc_g4

0x5089,	// (0x0002be20) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5089,	// (0x0002be20) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x0003639c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0003639c) list_single_graphic_heading_pane_vc_g

0x47f6,	// (0x0002b58d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x47f6,	// (0x0002b58d) list_single_graphic_heading_pane_vc_t1

0x4924,	// (0x0002b6bb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4924,	// (0x0002b6bb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0003680b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0003680b) list_single_graphic_heading_pane_vc_t

0x507d,	// (0x0002be14) list_double2_pane_vc_g1_ParamLimits

0x507d,	// (0x0002be14) list_double2_pane_vc_g1

0x5089,	// (0x0002be20) list_double2_pane_vc_g2_ParamLimits

0x5089,	// (0x0002be20) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x000363ad) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x000363ad) list_double2_pane_vc_g

0x4150,	// (0x0002aee7) list_double2_pane_vc_t1_ParamLimits

0x4150,	// (0x0002aee7) list_double2_pane_vc_t1

0x5051,	// (0x0002bde8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5051,	// (0x0002bde8) list_double2_large_graphic_pane_vc_g1

0x505d,	// (0x0002bdf4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x505d,	// (0x0002bdf4) list_double2_large_graphic_pane_vc_g2

0x5069,	// (0x0002be00) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5069,	// (0x0002be00) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x000363c5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x000363c5) list_double2_large_graphic_pane_vc_g

0x413a,	// (0x0002aed1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x413a,	// (0x0002aed1) list_double2_large_graphic_pane_vc_t1

0x5a76,	// (0x0002c80d) list_double_time_pane_vc_g1_ParamLimits

0x5a76,	// (0x0002c80d) list_double_time_pane_vc_g1

0x5a82,	// (0x0002c819) list_double_time_pane_vc_g2_ParamLimits

0x5a82,	// (0x0002c819) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x00036810) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x00036810) list_double_time_pane_vc_g

0x4936,	// (0x0002b6cd) list_double_time_pane_vc_t1_ParamLimits

0x4936,	// (0x0002b6cd) list_double_time_pane_vc_t1

0x494f,	// (0x0002b6e6) list_double_time_pane_vc_t2_ParamLimits

0x494f,	// (0x0002b6e6) list_double_time_pane_vc_t2

0x4988,	// (0x0002b71f) list_double_time_pane_vc_t3_ParamLimits

0x4988,	// (0x0002b71f) list_double_time_pane_vc_t3

0x49a0,	// (0x0002b737) list_double_time_pane_vc_t4_ParamLimits

0x49a0,	// (0x0002b737) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x00036815) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x00036815) list_double_time_pane_vc_t

0x507d,	// (0x0002be14) list_double_pane_vc_g1_ParamLimits

0x507d,	// (0x0002be14) list_double_pane_vc_g1

0x5089,	// (0x0002be20) list_double_pane_vc_g2_ParamLimits

0x5089,	// (0x0002be20) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x000363ad) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x000363ad) list_double_pane_vc_g

0x49b2,	// (0x0002b749) list_double_pane_vc_t1_ParamLimits

0x49b2,	// (0x0002b749) list_double_pane_vc_t1

0x49c4,	// (0x0002b75b) list_double_pane_vc_t2_ParamLimits

0x49c4,	// (0x0002b75b) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0003681e) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0003681e) list_double_pane_vc_t

0x507d,	// (0x0002be14) list_double_number_pane_vc_g1_ParamLimits

0x507d,	// (0x0002be14) list_double_number_pane_vc_g1

0x5089,	// (0x0002be20) list_double_number_pane_vc_g2_ParamLimits

0x5089,	// (0x0002be20) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x000363ad) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x000363ad) list_double_number_pane_vc_g

0x49da,	// (0x0002b771) list_double_number_pane_vc_t1_ParamLimits

0x49da,	// (0x0002b771) list_double_number_pane_vc_t1

0x49ee,	// (0x0002b785) list_double_number_pane_vc_t2_ParamLimits

0x49ee,	// (0x0002b785) list_double_number_pane_vc_t2

0x49c4,	// (0x0002b75b) list_double_number_pane_vc_t3_ParamLimits

0x49c4,	// (0x0002b75b) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x00036823) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x00036823) list_double_number_pane_vc_t

0x5a8e,	// (0x0002c825) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a8e,	// (0x0002c825) list_double_large_graphic_pane_vc_g1

0x5a9a,	// (0x0002c831) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a9a,	// (0x0002c831) list_double_large_graphic_pane_vc_g2

0x5069,	// (0x0002be00) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5069,	// (0x0002be00) list_double_large_graphic_pane_vc_g3

0x4a00,	// (0x0002b797) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4a00,	// (0x0002b797) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0003682a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0003682a) list_double_large_graphic_pane_vc_g

0x4a0c,	// (0x0002b7a3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4a0c,	// (0x0002b7a3) list_double_large_graphic_pane_vc_t1

0x4a1e,	// (0x0002b7b5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4a1e,	// (0x0002b7b5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x00036833) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x00036833) list_double_large_graphic_pane_vc_t

0x507d,	// (0x0002be14) list_double_heading_pane_vc_g1_ParamLimits

0x507d,	// (0x0002be14) list_double_heading_pane_vc_g1

0x5089,	// (0x0002be20) list_double_heading_pane_vc_g2_ParamLimits

0x5089,	// (0x0002be20) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x000363ad) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x000363ad) list_double_heading_pane_vc_g

0x4a35,	// (0x0002b7cc) list_double_heading_pane_vc_t1_ParamLimits

0x4a35,	// (0x0002b7cc) list_double_heading_pane_vc_t1

0x47f6,	// (0x0002b58d) list_double_heading_pane_vc_t2_ParamLimits

0x47f6,	// (0x0002b58d) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x00036838) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x00036838) list_double_heading_pane_vc_t

0x41f5,	// (0x0002af8c) list_double_graphic_pane_vc_g1_ParamLimits

0x41f5,	// (0x0002af8c) list_double_graphic_pane_vc_g1

0x5095,	// (0x0002be2c) list_double_graphic_pane_vc_g2_ParamLimits

0x5095,	// (0x0002be2c) list_double_graphic_pane_vc_g2

0x50a4,	// (0x0002be3b) list_double_graphic_pane_vc_g3_ParamLimits

0x50a4,	// (0x0002be3b) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0003683d) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003683d) list_double_graphic_pane_vc_g

0x4a47,	// (0x0002b7de) list_double_graphic_pane_vc_t1_ParamLimits

0x4a47,	// (0x0002b7de) list_double_graphic_pane_vc_t1

0x49c4,	// (0x0002b75b) list_double_graphic_pane_vc_t2_ParamLimits

0x49c4,	// (0x0002b75b) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x00036844) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x00036844) list_double_graphic_pane_vc_t

0x4d59,	// (0x0002baf0) aid_size_cell_fastswap

0x9112,	// (0x0002fea9) aid_size_cell_touch_ParamLimits

0x9112,	// (0x0002fea9) aid_size_cell_touch

0x4ea6,	// (0x0002bc3d) popup_fast_swap_wide_window_ParamLimits

0x4ea6,	// (0x0002bc3d) popup_fast_swap_wide_window

0x92ae,	// (0x00030045) touch_pane_ParamLimits

0x92ae,	// (0x00030045) touch_pane

0x44b3,	// (0x0002b24a) button_value_adjust_pane_cp2

0x44bb,	// (0x0002b252) button_value_adjust_pane_cp4

0x44db,	// (0x0002b272) form_field_data_pane_cp2

0x8cf3,	// (0x0002fa8a) form_field_data_wide_pane_cp2

0xcf08,	// (0x00033c9f) bg_scroll_pane_ParamLimits

0x5235,	// (0x0002bfcc) scroll_handle_pane_ParamLimits

0x5249,	// (0x0002bfe0) scroll_sc2_down_pane_ParamLimits

0x5249,	// (0x0002bfe0) scroll_sc2_down_pane

0xcf39,	// (0x00033cd0) scroll_sc2_up_pane_ParamLimits

0xcf39,	// (0x00033cd0) scroll_sc2_up_pane

0xb29a,	// (0x00032031) grid_wheel_folder_pane_g1_ParamLimits

0xb29a,	// (0x00032031) grid_wheel_folder_pane_g1

0x540d,	// (0x0002c1a4) clock_nsta_pane_cp2_ParamLimits

0x540d,	// (0x0002c1a4) clock_nsta_pane_cp2

0x9f61,	// (0x00030cf8) listscroll_midp_pane_ParamLimits

0x9f71,	// (0x00030d08) midp_canvas_pane

0x564c,	// (0x0002c3e3) nsta_clock_indic_pane

0xd767,	// (0x000344fe) listscroll_form_pane_vc

0xd76f,	// (0x00034506) listscroll_set_pane_vc_ParamLimits

0xd76f,	// (0x00034506) listscroll_set_pane_vc

0xa813,	// (0x000315aa) clock_nsta_pane

0xa836,	// (0x000315cd) indicator_nsta_pane

0xd97d,	// (0x00034714) bg_popup_sub_pane_cp2_ParamLimits

0xd991,	// (0x00034728) find_pane_cp2_ParamLimits

0xd991,	// (0x00034728) find_pane_cp2

0xd9a3,	// (0x0003473a) grid_toobar_pane_ParamLimits

0xdaf5,	// (0x0003488c) list_form_gen_pane_vc_ParamLimits

0xdaf5,	// (0x0003488c) list_form_gen_pane_vc

0xdb0b,	// (0x000348a2) scroll_pane_cp8_vc_ParamLimits

0xdb0b,	// (0x000348a2) scroll_pane_cp8_vc

0xdcd6,	// (0x00034a6d) data_form_wide_pane_vc_ParamLimits

0xdcd6,	// (0x00034a6d) data_form_wide_pane_vc

0xdce2,	// (0x00034a79) form_field_data_wide_pane_vc_g1

0xdcea,	// (0x00034a81) form_field_data_wide_pane_vc_t1_ParamLimits

0xdcea,	// (0x00034a81) form_field_data_wide_pane_vc_t1

0xcb7e,	// (0x00033915) input_focus_pane_cp6_vc_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_cp6_vc

0xabea,	// (0x00031981) list_midp_pane_ParamLimits

0xdf0f,	// (0x00034ca6) scroll_pane_cp16_ParamLimits

0xdf0f,	// (0x00034ca6) scroll_pane_cp16

0xdf4f,	// (0x00034ce6) button_value_adjust_pane_ParamLimits

0xdf4f,	// (0x00034ce6) button_value_adjust_pane

0xaef7,	// (0x00031c8e) button_value_adjust_pane_cp6_ParamLimits

0xaef7,	// (0x00031c8e) button_value_adjust_pane_cp6

0xb001,	// (0x00031d98) settings_code_pane_cp_ParamLimits

0xb001,	// (0x00031d98) settings_code_pane_cp

0x9108,	// (0x0002fe9f) cell_touch_pane_g1

0x9108,	// (0x0002fe9f) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x000364e3) cell_touch_pane_g

0xb184,	// (0x00031f1b) cell_touch_pane_cp_ParamLimits

0xb184,	// (0x00031f1b) cell_touch_pane_cp

0xb1a0,	// (0x00031f37) cell_touch_pane_ParamLimits

0xb1a0,	// (0x00031f37) cell_touch_pane

0x9108,	// (0x0002fe9f) scroll_sc2_down_pane_g1

0x9108,	// (0x0002fe9f) scroll_sc2_up_pane_g1

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp4_vc

0xf080,	// (0x00035e17) list_set_graphic_pane_vc_g1_ParamLimits

0xf080,	// (0x00035e17) list_set_graphic_pane_vc_g1

0xf08c,	// (0x00035e23) list_set_graphic_pane_vc_g2_ParamLimits

0xf08c,	// (0x00035e23) list_set_graphic_pane_vc_g2

0x0001,

0xfa2a,	// (0x000367c1) list_set_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x000367c1) list_set_graphic_pane_vc_g

0xf098,	// (0x00035e2f) text_primary_small_cp13_vc_ParamLimits

0xf098,	// (0x00035e2f) text_primary_small_cp13_vc

0xf0b0,	// (0x00035e47) list_set_graphic_pane_vc_ParamLimits

0xf0b0,	// (0x00035e47) list_set_graphic_pane_vc

0x9255,	// (0x0002ffec) input_focus_pane_cp2_vc

0x9108,	// (0x0002fe9f) setting_code_pane_vc_g1

0xf0c3,	// (0x00035e5a) setting_code_pane_vc_t1

0xf0d1,	// (0x00035e68) set_text_pane_vc_t1_ParamLimits

0xf0d1,	// (0x00035e68) set_text_pane_vc_t1

0x9255,	// (0x0002ffec) input_focus_pane_cp1_vc

0xf0ec,	// (0x00035e83) list_set_text_pane_vc

0x9108,	// (0x0002fe9f) setting_text_pane_vc_g1

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp2_vc

0xf0f6,	// (0x00035e8d) setting_slider_graphic_pane_vc_g1

0xf0fe,	// (0x00035e95) setting_slider_graphic_pane_vc_t1

0xf10c,	// (0x00035ea3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2f,	// (0x000367c6) setting_slider_graphic_pane_vc_t

0xf11a,	// (0x00035eb1) slider_set_pane_cp_vc

0xf122,	// (0x00035eb9) slider_set_pane_vc_g1

0xf12b,	// (0x00035ec2) slider_set_pane_vc_g2

0x0006,

0xfa34,	// (0x000367cb) slider_set_pane_vc_g

0xcbcd,	// (0x00033964) set_opt_bg_pane_g1_copy1

0xcbd5,	// (0x0003396c) set_opt_bg_pane_g2_copy1

0xf157,	// (0x00035eee) set_opt_bg_pane_g3_copy1

0xcbe5,	// (0x0003397c) set_opt_bg_pane_g4_copy1

0xcbed,	// (0x00033984) set_opt_bg_pane_g5_copy1

0xcbf5,	// (0x0003398c) set_opt_bg_pane_g6_copy1

0xf15f,	// (0x00035ef6) set_opt_bg_pane_g7_copy1

0xf167,	// (0x00035efe) set_opt_bg_pane_g8_copy1

0xf16f,	// (0x00035f06) set_opt_bg_pane_g9_copy1

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp_vc

0xf177,	// (0x00035f0e) setting_slider_pane_vc_t1

0xf0fe,	// (0x00035e95) setting_slider_pane_vc_t2

0xf10c,	// (0x00035ea3) setting_slider_pane_vc_t3

0x0002,

0xfa43,	// (0x000367da) setting_slider_pane_vc_t

0xf11a,	// (0x00035eb1) slider_set_pane_vc

0x576b,	// (0x0002c502) volume_set_pane_vc_g1

0x5a25,	// (0x0002c7bc) volume_set_pane_vc_g2

0x5a2e,	// (0x0002c7c5) volume_set_pane_vc_g3

0x5a37,	// (0x0002c7ce) volume_set_pane_vc_g4

0x5a40,	// (0x0002c7d7) volume_set_pane_vc_g5

0x5a49,	// (0x0002c7e0) volume_set_pane_vc_g6

0x5a52,	// (0x0002c7e9) volume_set_pane_vc_g7

0x5a5b,	// (0x0002c7f2) volume_set_pane_vc_g8

0x5a64,	// (0x0002c7fb) volume_set_pane_vc_g9

0x5a6d,	// (0x0002c804) volume_set_pane_vc_g10

0x0009,

0xfa4a,	// (0x000367e1) volume_set_pane_vc_g

0xf186,	// (0x00035f1d) volume_set_pane_vc

0xf18e,	// (0x00035f25) button_value_adjust_pane_cp1_vc

0xf198,	// (0x00035f2f) list_highlight_pane_cp2_vc

0xf1a1,	// (0x00035f38) list_set_pane_vc_ParamLimits

0xf1a1,	// (0x00035f38) list_set_pane_vc

0xf1f3,	// (0x00035f8a) main_pane_set_vc_t1_ParamLimits

0xf1f3,	// (0x00035f8a) main_pane_set_vc_t1

0xf208,	// (0x00035f9f) main_pane_set_vc_t2_ParamLimits

0xf208,	// (0x00035f9f) main_pane_set_vc_t2

0xf21a,	// (0x00035fb1) main_pane_set_vc_t3_ParamLimits

0xf21a,	// (0x00035fb1) main_pane_set_vc_t3

0xf22c,	// (0x00035fc3) main_pane_set_vc_t4_ParamLimits

0xf22c,	// (0x00035fc3) main_pane_set_vc_t4

0x0003,

0xfa5f,	// (0x000367f6) main_pane_set_vc_t_ParamLimits

0xfa5f,	// (0x000367f6) main_pane_set_vc_t

0xf23e,	// (0x00035fd5) setting_code_pane_vc_ParamLimits

0xf23e,	// (0x00035fd5) setting_code_pane_vc

0xf24d,	// (0x00035fe4) setting_slider_graphic_pane_vc

0xf24d,	// (0x00035fe4) setting_slider_pane_vc

0xf24d,	// (0x00035fe4) setting_text_pane_vc

0xf24d,	// (0x00035fe4) setting_volume_pane_vc

0xf255,	// (0x00035fec) scroll_pane_cp121_vc

0xcb69,	// (0x00033900) set_content_pane_vc

0xf293,	// (0x0003602a) button_value_adjust_pane_g1

0xf29c,	// (0x00036033) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x00036849) button_value_adjust_pane_g

0xf2a5,	// (0x0003603c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf2a5,	// (0x0003603c) form_field_slider_wide_pane_vc_t1

0xf2bb,	// (0x00036052) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf2bb,	// (0x00036052) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0003684e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0003684e) form_field_slider_wide_pane_vc_t

0x9417,	// (0x000301ae) input_focus_pane_cp10_vc_ParamLimits

0x9417,	// (0x000301ae) input_focus_pane_cp10_vc

0xf2d0,	// (0x00036067) slider_cont_pane_cp1_vc_ParamLimits

0xf2d0,	// (0x00036067) slider_cont_pane_cp1_vc

0xf122,	// (0x00035eb9) slider_form_pane_g1_cp2

0xf12b,	// (0x00035ec2) slider_form_pane_g2_cp2

0xf2eb,	// (0x00036082) form_field_slider_pane_vc_t3

0xf2f9,	// (0x00036090) form_field_slider_pane_vc_t4

0xf307,	// (0x0003609e) slider_form_pane_vc_ParamLimits

0xf307,	// (0x0003609e) slider_form_pane_vc

0xf314,	// (0x000360ab) form_field_slider_pane_vc_t1_ParamLimits

0xf314,	// (0x000360ab) form_field_slider_pane_vc_t1

0xf32a,	// (0x000360c1) form_field_slider_pane_vc_t2_ParamLimits

0xf32a,	// (0x000360c1) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0003685e) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0003685e) form_field_slider_pane_vc_t

0x9417,	// (0x000301ae) input_focus_pane_cp9_vc_ParamLimits

0x9417,	// (0x000301ae) input_focus_pane_cp9_vc

0xf33c,	// (0x000360d3) slider_cont_pane_vc_ParamLimits

0xf33c,	// (0x000360d3) slider_cont_pane_vc

0xf34e,	// (0x000360e5) list_form_graphic_pane_cp_vc_ParamLimits

0xf34e,	// (0x000360e5) list_form_graphic_pane_cp_vc

0xdce2,	// (0x00034a79) form_field_popup_wide_pane_vc_g1

0xf363,	// (0x000360fa) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf363,	// (0x000360fa) form_field_popup_wide_pane_vc_t1

0xcb7e,	// (0x00033915) input_focus_pane_cp8_vc_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_cp8_vc

0xf378,	// (0x0003610f) list_form_wide_pane_vc_ParamLimits

0xf378,	// (0x0003610f) list_form_wide_pane_vc

0xf384,	// (0x0003611b) list_form_graphic_pane_vc_g1

0xf38c,	// (0x00036123) list_form_graphic_pane_vc_t1_ParamLimits

0xf38c,	// (0x00036123) list_form_graphic_pane_vc_t1

0x9461,	// (0x000301f8) list_highlight_pane_cp5_vc_ParamLimits

0x9461,	// (0x000301f8) list_highlight_pane_cp5_vc

0xf3a8,	// (0x0003613f) list_form_graphic_pane_vc_ParamLimits

0xf3a8,	// (0x0003613f) list_form_graphic_pane_vc

0xdce2,	// (0x00034a79) form_field_popup_pane_vc_g1

0xf3be,	// (0x00036155) form_field_popup_pane_vc_t1_ParamLimits

0xf3be,	// (0x00036155) form_field_popup_pane_vc_t1

0xcb7e,	// (0x00033915) input_focus_pane_cp7_vc_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_cp7_vc

0xf3d3,	// (0x0003616a) list_form_pane_vc_ParamLimits

0xf3d3,	// (0x0003616a) list_form_pane_vc

0xf3df,	// (0x00036176) data_form_pane_vc_t1_ParamLimits

0xf3df,	// (0x00036176) data_form_pane_vc_t1

0xcbcd,	// (0x00033964) input_focus_pane_vc_g1

0xcbd5,	// (0x0003396c) input_focus_pane_vc_g2

0xcbdd,	// (0x00033974) input_focus_pane_vc_g3

0xcbe5,	// (0x0003397c) input_focus_pane_vc_g4

0xcbed,	// (0x00033984) input_focus_pane_vc_g5

0xcbf5,	// (0x0003398c) input_focus_pane_vc_g6

0xcbfd,	// (0x00033994) input_focus_pane_vc_g7

0xcc05,	// (0x0003399c) input_focus_pane_vc_g8

0xcc0d,	// (0x000339a4) input_focus_pane_vc_g9

0x9108,	// (0x0002fe9f) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003646c) input_focus_pane_vc_g

0xdcd6,	// (0x00034a6d) data_form_pane_vc_ParamLimits

0xdcd6,	// (0x00034a6d) data_form_pane_vc

0xdce2,	// (0x00034a79) form_field_data_pane_vc_g1

0xf3fa,	// (0x00036191) form_field_data_pane_vc_t1_ParamLimits

0xf3fa,	// (0x00036191) form_field_data_pane_vc_t1

0xcb7e,	// (0x00033915) input_focus_pane_vc_ParamLimits

0xcb7e,	// (0x00033915) input_focus_pane_vc

0xdb39,	// (0x000348d0) button_value_adjust_pane_cp3_vc

0xf410,	// (0x000361a7) button_value_adjust_pane_cp5_vc

0xf418,	// (0x000361af) form_field_data_pane_vc_ParamLimits

0xf418,	// (0x000361af) form_field_data_pane_vc

0xdb41,	// (0x000348d8) form_field_data_pane_vc_cp2

0xf42f,	// (0x000361c6) form_field_data_wide_pane_vc_ParamLimits

0xf42f,	// (0x000361c6) form_field_data_wide_pane_vc

0xf445,	// (0x000361dc) form_field_data_wide_pane_vc_cp2

0xf44d,	// (0x000361e4) form_field_popup_pane_vc_ParamLimits

0xf44d,	// (0x000361e4) form_field_popup_pane_vc

0xf464,	// (0x000361fb) form_field_popup_wide_pane_vc_ParamLimits

0xf464,	// (0x000361fb) form_field_popup_wide_pane_vc

0xf490,	// (0x00036227) form_field_slider_pane_vc_ParamLimits

0xf490,	// (0x00036227) form_field_slider_pane_vc

0xf4a3,	// (0x0003623a) form_field_slider_wide_pane_vc_ParamLimits

0xf4a3,	// (0x0003623a) form_field_slider_wide_pane_vc

0xb1be,	// (0x00031f55) grid_touch_1_pane_ParamLimits

0xb1be,	// (0x00031f55) grid_touch_1_pane

0xb1d2,	// (0x00031f69) grid_touch_2_pane_ParamLimits

0xb1d2,	// (0x00031f69) grid_touch_2_pane

0xf4b6,	// (0x0003624d) touch_pane_g1_ParamLimits

0xf4b6,	// (0x0003624d) touch_pane_g1

0xf4c4,	// (0x0003625b) cell_app_pane_cp_wide_ParamLimits

0xf4c4,	// (0x0003625b) cell_app_pane_cp_wide

0xf4d4,	// (0x0003626b) grid_popup_fast_wide_pane_ParamLimits

0xf4d4,	// (0x0003626b) grid_popup_fast_wide_pane

0xf4e8,	// (0x0003627f) scroll_pane_cp19_ParamLimits

0xf4e8,	// (0x0003627f) scroll_pane_cp19

0x9255,	// (0x0002ffec) bg_popup_window_pane_cp20

0xf4fc,	// (0x00036293) listscroll_popup_fast_wide_pane

0xdb49,	// (0x000348e0) grid_indicator_nsta_pane

0xf504,	// (0x0003629b) clock_nsta_pane_g1

0xf50d,	// (0x000362a4) clock_nsta_pane_t1

0xb1fc,	// (0x00031f93) cell_indicator_nsta_pane_ParamLimits

0xb1fc,	// (0x00031f93) cell_indicator_nsta_pane

0xf4b6,	// (0x0003624d) cell_indicator_nsta_pane_g1

0xb219,	// (0x00031fb0) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x00036868) cell_indicator_nsta_pane_g

0xf529,	// (0x000362c0) clock_nsta_pane_cp

0xf531,	// (0x000362c8) indicator_nsta_pane_cp

0xf53a,	// (0x000362d1) nsta_clock_indic_pane_g1

0x95c8,	// (0x0003035f) grid_indicator_pane

0xd02b,	// (0x00033dc2) scroll_pane_cp29

0x5364,	// (0x0002c0fb) indicator_nsta_pane_cp2_ParamLimits

0x5364,	// (0x0002c0fb) indicator_nsta_pane_cp2

0x9461,	// (0x000301f8) main_apps_wheel_pane

0xddf6,	// (0x00034b8d) form_midp_field_text_pane_ParamLimits

0xdf2f,	// (0x00034cc6) scroll_bar_cp050_ParamLimits

0xf572,	// (0x00036309) cell_indicator_pane_ParamLimits

0xf572,	// (0x00036309) cell_indicator_pane

0xf588,	// (0x0003631f) cell_indicator_pane_g1

0xb22e,	// (0x00031fc5) grid_wheel_folder_pane_ParamLimits

0xb22e,	// (0x00031fc5) grid_wheel_folder_pane

0xb23c,	// (0x00031fd3) list_wheel_apps_pane_ParamLimits

0xb23c,	// (0x00031fd3) list_wheel_apps_pane

0xb248,	// (0x00031fdf) main_apps_wheel_pane_g1_ParamLimits

0xb248,	// (0x00031fdf) main_apps_wheel_pane_g1

0xb254,	// (0x00031feb) main_apps_wheel_pane_g2_ParamLimits

0xb254,	// (0x00031feb) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x00036877) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x00036877) main_apps_wheel_pane_g

0xb260,	// (0x00031ff7) main_apps_wheel_pane_t1_ParamLimits

0xb260,	// (0x00031ff7) main_apps_wheel_pane_t1

0xb272,	// (0x00032009) list_wheel_apps_pane_g1

0xb27a,	// (0x00032011) list_wheel_apps_pane_g2

0xb282,	// (0x00032019) list_wheel_apps_pane_g3

0xb28a,	// (0x00032021) list_wheel_apps_pane_g4

0xb292,	// (0x00032029) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0003687c) list_wheel_apps_pane_g

0x9461,	// (0x000301f8) navi_icon_text_pane

0xa71f,	// (0x000314b6) aid_fill_nsta

0x09ac,	// (0x00027743) navi_icon_text_pane_g1

0x09b8,	// (0x0002774f) navi_icon_text_pane_t1

0xd2a0,	// (0x00034037) list_set_graphic_pane_t1_ParamLimits

0xd2a0,	// (0x00034037) list_set_graphic_pane_t1

0xe5d8,	// (0x0003536f) popup_midp_note_alarm_window_t6_ParamLimits

0xe5d8,	// (0x0003536f) popup_midp_note_alarm_window_t6

0xe5ea,	// (0x00035381) popup_midp_note_alarm_window_t7_ParamLimits

0xe5ea,	// (0x00035381) popup_midp_note_alarm_window_t7

0xe5fc,	// (0x00035393) popup_midp_note_alarm_window_t8_ParamLimits

0xe5fc,	// (0x00035393) popup_midp_note_alarm_window_t8

0xe60e,	// (0x000353a5) popup_midp_note_alarm_window_t9_ParamLimits

0xe60e,	// (0x000353a5) popup_midp_note_alarm_window_t9

0xe620,	// (0x000353b7) popup_midp_note_alarm_window_t10_ParamLimits

0xe620,	// (0x000353b7) popup_midp_note_alarm_window_t10

0xe632,	// (0x000353c9) popup_midp_note_alarm_window_t11_ParamLimits

0xe632,	// (0x000353c9) popup_midp_note_alarm_window_t11

0xe644,	// (0x000353db) scroll_pane_cp17_ParamLimits

0xe644,	// (0x000353db) scroll_pane_cp17

0x576b,	// (0x0002c502) volume_small_pane_cp_g1

0x5aa9,	// (0x0002c840) volume_small_pane_cp_g2

0x5ab2,	// (0x0002c849) volume_small_pane_cp_g3

0x5abb,	// (0x0002c852) volume_small_pane_cp_g4

0x5798,	// (0x0002c52f) volume_small_pane_cp_g5

0x5ac4,	// (0x0002c85b) volume_small_pane_cp_g6

0x5acd,	// (0x0002c864) volume_small_pane_cp_g7

0x5ad6,	// (0x0002c86d) volume_small_pane_cp_g8

0x5adf,	// (0x0002c876) volume_small_pane_cp_g9

0x5ae8,	// (0x0002c87f) volume_small_pane_cp_g10

0xd54f,	// (0x000342e6) midp_ticker_pane_g1_ParamLimits

0xd55b,	// (0x000342f2) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x00036534) midp_ticker_pane_g_ParamLimits

0xd567,	// (0x000342fe) midp_ticker_pane_t1_ParamLimits

0xa735,	// (0x000314cc) aid_fill_nsta_2

0xdf1b,	// (0x00034cb2) list_form2_midp_pane

0xeca9,	// (0x00035a40) midp_editing_number_pane_ParamLimits

0xecb5,	// (0x00035a4c) midp_ticker_pane_ParamLimits

0x09ca,	// (0x00027761) form2_midp_field_pane

0x09ee,	// (0x00027785) scroll_pane_cp51

0x0a0e,	// (0x000277a5) form2_midp_button_pane_ParamLimits

0x0a0e,	// (0x000277a5) form2_midp_button_pane

0x0a20,	// (0x000277b7) form2_midp_content_pane_ParamLimits

0x0a20,	// (0x000277b7) form2_midp_content_pane

0x0a3a,	// (0x000277d1) form2_midp_field_choice_group_pane

0x0a42,	// (0x000277d9) form2_midp_field_pane_g1

0x0a4a,	// (0x000277e1) form2_midp_field_pane_g2

0x0a52,	// (0x000277e9) form2_midp_field_pane_g3

0x0a5a,	// (0x000277f1) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x000368a1) form2_midp_field_pane_g

0x0a62,	// (0x000277f9) form2_midp_gauge_slider_pane

0x0a6a,	// (0x00027801) form2_midp_gauge_wait_pane

0x0a72,	// (0x00027809) form2_midp_image_pane_ParamLimits

0x0a72,	// (0x00027809) form2_midp_image_pane

0x0a8d,	// (0x00027824) form2_midp_label_pane_ParamLimits

0x0a8d,	// (0x00027824) form2_midp_label_pane

0xb2c7,	// (0x0003205e) form2_midp_label_pane_cp_ParamLimits

0xb2c7,	// (0x0003205e) form2_midp_label_pane_cp

0x0ac5,	// (0x0002785c) form2_midp_string_pane_ParamLimits

0x0ac5,	// (0x0002785c) form2_midp_string_pane

0x8f18,	// (0x0002fcaf) form2_midp_text_pane_ParamLimits

0x8f18,	// (0x0002fcaf) form2_midp_text_pane

0x0ad7,	// (0x0002786e) form2_midp_time_pane

0x0ae7,	// (0x0002787e) input_focus_pane_cp51_ParamLimits

0x0ae7,	// (0x0002787e) input_focus_pane_cp51

0x0aff,	// (0x00027896) form2_midp_label_pane_t1_ParamLimits

0x0aff,	// (0x00027896) form2_midp_label_pane_t1

0x8f31,	// (0x0002fcc8) form2_mdip_text_pane_t1_ParamLimits

0x8f31,	// (0x0002fcc8) form2_mdip_text_pane_t1

0x4a8d,	// (0x0002b824) form2_midp_time_pane_t1

0x0b47,	// (0x000278de) form2_midp_gauge_slider_pane_t1

0xb2e6,	// (0x0003207d) form2_midp_gauge_slider_pane_t2

0xb2f8,	// (0x0003208f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x000368aa) form2_midp_gauge_slider_pane_t

0x0b7d,	// (0x00027914) form2_midp_slider_pane

0x0b89,	// (0x00027920) form2_midp_gauge_wait_pane_t1

0x0b97,	// (0x0002792e) form2_midp_wait_pane_ParamLimits

0x0b97,	// (0x0002792e) form2_midp_wait_pane

0xab67,	// (0x000318fe) list_single_2graphic_pane_cp4_ParamLimits

0xab67,	// (0x000318fe) list_single_2graphic_pane_cp4

0xb30a,	// (0x000320a1) list_single_midp_graphic_pane_cp_ParamLimits

0xb30a,	// (0x000320a1) list_single_midp_graphic_pane_cp

0x9255,	// (0x0002ffec) list_highlight_pane_cp20

0x0bc2,	// (0x00027959) list_single_2graphic_pane_g1_cp4

0xed22,	// (0x00035ab9) list_single_2graphic_pane_g2_cp4

0x0bca,	// (0x00027961) list_single_2graphic_pane_t1_cp4

0x9461,	// (0x000301f8) list_highlight_pane_cp21

0x0bd9,	// (0x00027970) list_single_midp_graphic_pane_g4_cp

0x0be8,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp

0xb328,	// (0x000320bf) form2_mdip_string_pane_t1_ParamLimits

0xb328,	// (0x000320bf) form2_mdip_string_pane_t1

0x9255,	// (0x0002ffec) bg_wml_button_pane_cp2

0x9108,	// (0x0002fe9f) form2_midp_image_pane_g1

0x50c8,	// (0x0002be5f) list_double_large_graphic_pane_g5_ParamLimits

0x50c8,	// (0x0002be5f) list_double_large_graphic_pane_g5

0x9f61,	// (0x00030cf8) midp_form_pane_ParamLimits

0x9461,	// (0x000301f8) main_apps_wheel_pane_ParamLimits

0xa4c1,	// (0x00031258) popup_preview_window_ParamLimits

0xa4c1,	// (0x00031258) popup_preview_window

0xd837,	// (0x000345ce) popup_touch_info_window_ParamLimits

0xd837,	// (0x000345ce) popup_touch_info_window

0xd855,	// (0x000345ec) popup_touch_menu_window_ParamLimits

0xd855,	// (0x000345ec) popup_touch_menu_window

0x90fe,	// (0x0002fe95) bg_popup_sub_pane_cp6

0x0c75,	// (0x00027a0c) list_touch_menu_pane

0x0c7d,	// (0x00027a14) list_single_touch_menu_pane_ParamLimits

0x0c7d,	// (0x00027a14) list_single_touch_menu_pane

0x0c94,	// (0x00027a2b) list_single_touch_menu_pane_t1

0x9461,	// (0x000301f8) bg_popup_sub_pane_cp7_ParamLimits

0x9461,	// (0x000301f8) bg_popup_sub_pane_cp7

0x0ca2,	// (0x00027a39) heading_sub_pane

0x0caa,	// (0x00027a41) list_touch_info_pane_ParamLimits

0x0caa,	// (0x00027a41) list_touch_info_pane

0x0cb9,	// (0x00027a50) list_single_touch_info_pane_ParamLimits

0x0cb9,	// (0x00027a50) list_single_touch_info_pane

0x0cca,	// (0x00027a61) list_single_touch_info_pane_t1

0x0cd8,	// (0x00027a6f) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x000368b8) list_single_touch_info_pane_t

0xd525,	// (0x000342bc) bg_popup_heading_pane_cp

0x0ce6,	// (0x00027a7d) heading_sub_pane_t1

0xdb21,	// (0x000348b8) bg_popup_preview_window_pane_cp_ParamLimits

0xdb21,	// (0x000348b8) bg_popup_preview_window_pane_cp

0x0ca2,	// (0x00027a39) heading_preview_pane

0x0caa,	// (0x00027a41) list_preview_pane_ParamLimits

0x0caa,	// (0x00027a41) list_preview_pane

0x0cf4,	// (0x00027a8b) popup_preview_window_g1

0x0cb9,	// (0x00027a50) list_single_preview_pane_ParamLimits

0x0cb9,	// (0x00027a50) list_single_preview_pane

0x0cfc,	// (0x00027a93) list_single_preview_pane_g1

0x0d04,	// (0x00027a9b) list_single_preview_pane_t1

0x0cca,	// (0x00027a61) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x000368bd) list_single_preview_pane_t

0x0d12,	// (0x00027aa9) bg_popup_heading_pane_cp2_ParamLimits

0x0d12,	// (0x00027aa9) bg_popup_heading_pane_cp2

0x0d28,	// (0x00027abf) heading_preview_pane_g1

0x0d30,	// (0x00027ac7) heading_preview_pane_t1_ParamLimits

0x0d30,	// (0x00027ac7) heading_preview_pane_t1

0x95f8,	// (0x0003038f) soft_indicator_pane_t1_ParamLimits

0x9c4f,	// (0x000309e6) scroll_pane_ParamLimits

0xcf27,	// (0x00033cbe) scroll_sc2_left_pane

0xcf30,	// (0x00033cc7) scroll_sc2_right_pane

0xcf4f,	// (0x00033ce6) scroll_bg_pane_g1_ParamLimits

0xcf64,	// (0x00033cfb) scroll_bg_pane_g2_ParamLimits

0xcf7c,	// (0x00033d13) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x000364c3) scroll_bg_pane_g_ParamLimits

0xcf4f,	// (0x00033ce6) scroll_handle_pane_g1_ParamLimits

0xcf9e,	// (0x00033d35) scroll_handle_pane_g2_ParamLimits

0xcf7c,	// (0x00033d13) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x000364ca) scroll_handle_pane_g_ParamLimits

0xd78f,	// (0x00034526) popup_choice_list_window_ParamLimits

0xd78f,	// (0x00034526) popup_choice_list_window

0xd989,	// (0x00034720) choice_list_pane

0xd9ff,	// (0x00034796) cell_toolbar_pane_t1

0xda27,	// (0x000347be) toolbar_button_pane_ParamLimits

0xea0a,	// (0x000357a1) ai_gene_pane_1_t2_ParamLimits

0xea0a,	// (0x000357a1) ai_gene_pane_1_t2

0x0001,

0xf944,	// (0x000366db) ai_gene_pane_1_t_ParamLimits

0xf944,	// (0x000366db) ai_gene_pane_1_t

0x0d4d,	// (0x00027ae4) scroll_sc2_left_pane_g1

0x0d4d,	// (0x00027ae4) scroll_sc2_right_pane_g1

0xccfa,	// (0x00033a91) bg_popup_sub_pane_cp10

0x0d57,	// (0x00027aee) list_choice_list_pane

0x0d6e,	// (0x00027b05) list_single_choice_list_pane_ParamLimits

0x0d6e,	// (0x00027b05) list_single_choice_list_pane

0x0d82,	// (0x00027b19) list_single_choice_list_pane_g1

0xcce5,	// (0x00033a7c) list_single_choice_list_pane_t1_ParamLimits

0xcce5,	// (0x00033a7c) list_single_choice_list_pane_t1

0x0d8a,	// (0x00027b21) choice_list_pane_g1

0x0d92,	// (0x00027b29) choice_list_pane_t1

0x90fe,	// (0x0002fe95) input_focus_pane_cp11

0xce7c,	// (0x00033c13) title_pane_stacon_g2_ParamLimits

0xce7c,	// (0x00033c13) title_pane_stacon_g2

0x0002,

0xf712,	// (0x000364a9) title_pane_stacon_g_ParamLimits

0xf712,	// (0x000364a9) title_pane_stacon_g

0xd525,	// (0x000342bc) cursor_press_pane

0xa228,	// (0x00030fbf) popup_fep_hwr_window_ParamLimits

0xa228,	// (0x00030fbf) popup_fep_hwr_window

0xd7e1,	// (0x00034578) popup_fep_vkb_window_ParamLimits

0xd7e1,	// (0x00034578) popup_fep_vkb_window

0x0da0,	// (0x00027b37) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x000368e6) fep_vkb_side_pane_g_ParamLimits

0x5b18,	// (0x0002c8af) fep_hwr_candidate_pane_ParamLimits

0x5b18,	// (0x0002c8af) fep_hwr_candidate_pane

0x5b40,	// (0x0002c8d7) fep_hwr_side_pane_ParamLimits

0x5b40,	// (0x0002c8d7) fep_hwr_side_pane

0x5b60,	// (0x0002c8f7) fep_hwr_top_pane_ParamLimits

0x5b60,	// (0x0002c8f7) fep_hwr_top_pane

0x5b78,	// (0x0002c90f) fep_hwr_write_pane_ParamLimits

0x5b78,	// (0x0002c90f) fep_hwr_write_pane

0xfb4f,	// (0x000368e6) fep_vkb_side_pane_g

0x0dba,	// (0x00027b51) fep_hwr_top_pane_g1

0x0da8,	// (0x00027b3f) fep_hwr_top_pane_g2

0x5ba4,	// (0x0002c93b) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x000368c2) fep_hwr_top_pane_g

0x5bb9,	// (0x0002c950) fep_hwr_top_text_pane

0xd098,	// (0x00033e2f) fep_hwr_top_text_pane_g1

0x0df0,	// (0x00027b87) fep_hwr_top_text_pane_t1

0x5ca7,	// (0x0002ca3e) fep_hwr_candidate_pane_g1

0x100e,	// (0x00027da5) fep_vkb_keypad_pane_g3_ParamLimits

0x100e,	// (0x00027da5) fep_vkb_keypad_pane_g3

0x1030,	// (0x00027dc7) fep_vkb_keypad_pane_g4_ParamLimits

0x1030,	// (0x00027dc7) fep_vkb_keypad_pane_g4

0x109f,	// (0x00027e36) fep_vkb_bottom_pane_g2_ParamLimits

0x109f,	// (0x00027e36) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x000368ed) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x000368ed) fep_vkb_bottom_pane_g

0x0d4d,	// (0x00027ae4) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x000368f7) cell_vkb_side_pane_g

0x112a,	// (0x00027ec1) cell_vkb_side_pane_t1

0x1138,	// (0x00027ecf) cell_vkb_side_pane_t1_copy1

0x0d4d,	// (0x00027ae4) bg_fep_vkb_candidate_pane_g2

0x125c,	// (0x00027ff3) cell_vkb_candidate_pane_ParamLimits

0x0dfe,	// (0x00027b95) aid_size_cell_vkb_ParamLimits

0x0dfe,	// (0x00027b95) aid_size_cell_vkb

0x125c,	// (0x00027ff3) cell_vkb_candidate_pane

0x5cc1,	// (0x0002ca58) bg_popup_fep_shadow_pane_g1

0x0e74,	// (0x00027c0b) fep_vkb_bottom_pane_ParamLimits

0x0e74,	// (0x00027c0b) fep_vkb_bottom_pane

0x0ebf,	// (0x00027c56) fep_vkb_candidate_pane_ParamLimits

0x0ebf,	// (0x00027c56) fep_vkb_candidate_pane

0x0edb,	// (0x00027c72) fep_vkb_keypad_pane_ParamLimits

0x0edb,	// (0x00027c72) fep_vkb_keypad_pane

0x0f0f,	// (0x00027ca6) fep_vkb_side_pane_ParamLimits

0x0f0f,	// (0x00027ca6) fep_vkb_side_pane

0x0f3b,	// (0x00027cd2) fep_vkb_top_pane_ParamLimits

0x0f3b,	// (0x00027cd2) fep_vkb_top_pane

0x0f67,	// (0x00027cfe) fep_vkb_top_pane_g1_ParamLimits

0x0f67,	// (0x00027cfe) fep_vkb_top_pane_g1

0x0f76,	// (0x00027d0d) fep_vkb_top_pane_g2_ParamLimits

0x0f76,	// (0x00027d0d) fep_vkb_top_pane_g2

0x0f85,	// (0x00027d1c) fep_vkb_top_pane_g3_ParamLimits

0x0f85,	// (0x00027d1c) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x000368dd) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x000368dd) fep_vkb_top_pane_g

0x0fa3,	// (0x00027d3a) fep_vkb_top_text_pane_ParamLimits

0x0fa3,	// (0x00027d3a) fep_vkb_top_text_pane

0xb3ef,	// (0x00032186) fep_vkb_side_pane_g1_ParamLimits

0xb3ef,	// (0x00032186) fep_vkb_side_pane_g1

0x0ffd,	// (0x00027d94) grid_vkb_side_pane_ParamLimits

0x0ffd,	// (0x00027d94) grid_vkb_side_pane

0x5cc9,	// (0x0002ca60) bg_popup_fep_shadow_pane_g2

0x5cd2,	// (0x0002ca69) bg_popup_fep_shadow_pane_g3

0x5cda,	// (0x0002ca71) bg_popup_fep_shadow_pane_g4

0x5ce3,	// (0x0002ca7a) bg_popup_fep_shadow_pane_g5

0x5ceb,	// (0x0002ca82) bg_popup_fep_shadow_pane_g6

0x5cf3,	// (0x0002ca8a) bg_popup_fep_shadow_pane_g7

0xcbed,	// (0x00033984) bg_popup_fep_shadow_pane_g8

0x104e,	// (0x00027de5) grid_vkb_keypad_number_pane_ParamLimits

0x104e,	// (0x00027de5) grid_vkb_keypad_number_pane

0x105e,	// (0x00027df5) grid_vkb_keypad_pane_ParamLimits

0x105e,	// (0x00027df5) grid_vkb_keypad_pane

0x1084,	// (0x00027e1b) fep_vkb_bottom_pane_g1_ParamLimits

0x1084,	// (0x00027e1b) fep_vkb_bottom_pane_g1

0x10ad,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x10ad,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane

0x10c2,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x10c2,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane

0x10d7,	// (0x00027e6e) fep_vkb_top_text_pane_g1

0xb436,	// (0x000321cd) fep_vkb_top_text_pane_t1

0xb448,	// (0x000321df) cell_vkb_side_pane_ParamLimits

0xb448,	// (0x000321df) cell_vkb_side_pane

0x0d4d,	// (0x00027ae4) cell_vkb_side_pane_g1

0x1146,	// (0x00027edd) cell_vkb_keypad_pane_ParamLimits

0x1146,	// (0x00027edd) cell_vkb_keypad_pane

0x11b3,	// (0x00027f4a) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0003690a) bg_popup_fep_shadow_pane_g

0x0d4d,	// (0x00027ae4) cell_hwr_side_pane_g1

0x0d4d,	// (0x00027ae4) cell_hwr_side_pane_g2

0x11bd,	// (0x00027f54) cell_vkb_keypad_pane_t1

0xb45e,	// (0x000321f5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb45e,	// (0x000321f5) cell_vkb_keypad_bottom_left_pane

0xb473,	// (0x0003220a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb473,	// (0x0003220a) cell_vkb_keypad_bottom_right_pane

0x0d4d,	// (0x00027ae4) cell_vkb_keypad_bottom_left_pane_g1

0x0d4d,	// (0x00027ae4) cell_vkb_keypad_bottom_right_pane_g1

0x1221,	// (0x00027fb8) cell_vkb_keypad_number_pane_ParamLimits

0x1221,	// (0x00027fb8) cell_vkb_keypad_number_pane

0x1240,	// (0x00027fd7) cell_vkb_keypad_number_pane_g1

0x124a,	// (0x00027fe1) cell_vkb_keypad_number_pane_g2

0x1253,	// (0x00027fea) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x000368fc) cell_vkb_keypad_number_pane_g

0x11bd,	// (0x00027f54) cell_vkb_keypad_number_pane_t1

0x1275,	// (0x0002800c) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x000368f7) cell_hwr_side_pane_g

0x128e,	// (0x00028025) cell_hwr_side_pane_t1

0x5d03,	// (0x0002ca9a) cell_hwr_side_pane_t1_copy1

0x0f95,	// (0x00027d2c) cell_hwr_candidate_pane_g1

0x5d11,	// (0x0002caa8) cell_hwr_candidate_pane_t1

0x0d4d,	// (0x00027ae4) cell_vkb_candidate_pane_g2

0x1314,	// (0x000280ab) cell_vkb_candidate_pane_t1

0x0ea0,	// (0x00027c37) bg_popup_fep_shadow_pane_ParamLimits

0x0ea0,	// (0x00027c37) bg_popup_fep_shadow_pane

0x2d42,	// (0x00029ad9) bg_fep_hwr_top_pane_g4

0x0dcc,	// (0x00027b63) bg_hwr_side_pane_g1_ParamLimits

0x0dcc,	// (0x00027b63) bg_hwr_side_pane_g1

0xb3aa,	// (0x00032141) cell_hwr_side_pane_ParamLimits

0xb3aa,	// (0x00032141) cell_hwr_side_pane

0x5c30,	// (0x0002c9c7) fep_hwr_write_pane_g1_ParamLimits

0x5c30,	// (0x0002c9c7) fep_hwr_write_pane_g1

0x5c3d,	// (0x0002c9d4) fep_hwr_write_pane_g2_ParamLimits

0x5c3d,	// (0x0002c9d4) fep_hwr_write_pane_g2

0x5c4a,	// (0x0002c9e1) fep_hwr_write_pane_g3_ParamLimits

0x5c4a,	// (0x0002c9e1) fep_hwr_write_pane_g3

0xb3ca,	// (0x00032161) fep_hwr_write_pane_g4_ParamLimits

0xb3ca,	// (0x00032161) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x000368c9) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x000368c9) fep_hwr_write_pane_g

0x2d42,	// (0x00029ad9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d42,	// (0x00029ad9) bg_fep_hwr_candidate_pane_g2

0x5c6d,	// (0x0002ca04) cell_hwr_candidate_pane_ParamLimits

0x5c6d,	// (0x0002ca04) cell_hwr_candidate_pane

0x5ca7,	// (0x0002ca3e) fep_hwr_candidate_pane_g1_ParamLimits

0x0e2c,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x0e2c,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2

0x0f95,	// (0x00027d2c) fep_vkb_top_pane_g4_ParamLimits

0x0f95,	// (0x00027d2c) fep_vkb_top_pane_g4

0x0fdb,	// (0x00027d72) fep_vkb_side_pane_g2_ParamLimits

0x0fdb,	// (0x00027d72) fep_vkb_side_pane_g2

0x8c01,	// (0x0002f998) list_setting_pane_t4_ParamLimits

0x8c01,	// (0x0002f998) list_setting_pane_t4

0x8c9b,	// (0x0002fa32) list_setting_number_pane_t5_ParamLimits

0x8c9b,	// (0x0002fa32) list_setting_number_pane_t5

0x9e91,	// (0x00030c28) list_double_heading_pane_cp2_ParamLimits

0x9e91,	// (0x00030c28) list_double_heading_pane_cp2

0xd39a,	// (0x00034131) list_double_heading_pane_g1_cp2_ParamLimits

0xd39a,	// (0x00034131) list_double_heading_pane_g1_cp2

0x1322,	// (0x000280b9) list_double_heading_pane_g2_cp2_ParamLimits

0x1322,	// (0x000280b9) list_double_heading_pane_g2_cp2

0x1336,	// (0x000280cd) list_double_heading_pane_t1_cp2_ParamLimits

0x1336,	// (0x000280cd) list_double_heading_pane_t1_cp2

0x134c,	// (0x000280e3) list_double_heading_pane_t2_cp2_ParamLimits

0x134c,	// (0x000280e3) list_double_heading_pane_t2_cp2

0x90e8,	// (0x0002fe7f) aid_value_unit2

0x4ee2,	// (0x0002bc79) popup_preview_fixed_window

0x97b6,	// (0x0003054d) bg_popup_preview_window_pane_cp02

0x135e,	// (0x000280f5) list_preview_fixed_pane

0x13a4,	// (0x0002813b) list_empty_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_empty_pane_fp

0x13a4,	// (0x0002813b) list_single_cale_day_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_single_cale_day_pane_fp

0x13a4,	// (0x0002813b) list_single_graphic_heading_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_single_graphic_heading_pane_fp

0x13a4,	// (0x0002813b) list_single_graphic_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_single_graphic_pane_fp

0x13a4,	// (0x0002813b) list_single_heading_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_single_heading_pane_fp

0x13a4,	// (0x0002813b) list_single_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_single_pane_fp

0x13b8,	// (0x0002814f) list_single_pane_fp_g1_ParamLimits

0x13b8,	// (0x0002814f) list_single_pane_fp_g1

0x507d,	// (0x0002be14) list_single_pane_fp_g2_ParamLimits

0x507d,	// (0x0002be14) list_single_pane_fp_g2

0x5d2e,	// (0x0002cac5) list_single_pane_fp_g3_ParamLimits

0x5d2e,	// (0x0002cac5) list_single_pane_fp_g3

0x13c4,	// (0x0002815b) list_single_pane_fp_g4_ParamLimits

0x13c4,	// (0x0002815b) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x0003692b) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x0003692b) list_single_pane_fp_g

0x4aa0,	// (0x0002b837) list_single_pane_fp_t1_ParamLimits

0x4aa0,	// (0x0002b837) list_single_pane_fp_t1

0x4ab7,	// (0x0002b84e) list_single_graphic_pane_fp_g1_ParamLimits

0x4ab7,	// (0x0002b84e) list_single_graphic_pane_fp_g1

0x13b8,	// (0x0002814f) list_single_graphic_pane_fp_g2_ParamLimits

0x13b8,	// (0x0002814f) list_single_graphic_pane_fp_g2

0x507d,	// (0x0002be14) list_single_graphic_pane_fp_g3_ParamLimits

0x507d,	// (0x0002be14) list_single_graphic_pane_fp_g3

0x5d2e,	// (0x0002cac5) list_single_graphic_pane_fp_g4_ParamLimits

0x5d2e,	// (0x0002cac5) list_single_graphic_pane_fp_g4

0x13c4,	// (0x0002815b) list_single_graphic_pane_fp_g5_ParamLimits

0x13c4,	// (0x0002815b) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x00036934) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036934) list_single_graphic_pane_fp_g

0x4ac3,	// (0x0002b85a) list_single_graphic_pane_fp_t1_ParamLimits

0x4ac3,	// (0x0002b85a) list_single_graphic_pane_fp_t1

0x4ab7,	// (0x0002b84e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4ab7,	// (0x0002b84e) list_single_graphic_heading_pane_fp_g1

0x13b8,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x13b8,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2

0x507d,	// (0x0002be14) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x507d,	// (0x0002be14) list_single_graphic_heading_pane_fp_g3

0x5d2e,	// (0x0002cac5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5d2e,	// (0x0002cac5) list_single_graphic_heading_pane_fp_g4

0x13c4,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x13c4,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00036934) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036934) list_single_graphic_heading_pane_fp_g

0x4ad9,	// (0x0002b870) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4ad9,	// (0x0002b870) list_single_graphic_heading_pane_fp_t1

0x4aef,	// (0x0002b886) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4aef,	// (0x0002b886) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003693f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003693f) list_single_graphic_heading_pane_fp_t

0x4b01,	// (0x0002b898) list_single_cale_day_pane_fp_g1_ParamLimits

0x4b01,	// (0x0002b898) list_single_cale_day_pane_fp_g1

0x13d0,	// (0x00028167) list_single_cale_day_pane_fp_g2_ParamLimits

0x13d0,	// (0x00028167) list_single_cale_day_pane_fp_g2

0x5d42,	// (0x0002cad9) list_single_cale_day_pane_fp_g3_ParamLimits

0x5d42,	// (0x0002cad9) list_single_cale_day_pane_fp_g3

0x5d6a,	// (0x0002cb01) list_single_cale_day_pane_fp_g4_ParamLimits

0x5d6a,	// (0x0002cb01) list_single_cale_day_pane_fp_g4

0x5d8e,	// (0x0002cb25) list_single_cale_day_pane_fp_g5_ParamLimits

0x5d8e,	// (0x0002cb25) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x00036944) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x00036944) list_single_cale_day_pane_fp_g

0x4b39,	// (0x0002b8d0) list_single_cale_day_pane_fp_t1_ParamLimits

0x4b39,	// (0x0002b8d0) list_single_cale_day_pane_fp_t1

0x4b5f,	// (0x0002b8f6) list_single_cale_day_pane_fp_t2_ParamLimits

0x4b5f,	// (0x0002b8f6) list_single_cale_day_pane_fp_t2

0x4b78,	// (0x0002b90f) list_single_cale_day_pane_fp_t3_ParamLimits

0x4b78,	// (0x0002b90f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x0003694f) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x0003694f) list_single_cale_day_pane_fp_t

0x13b8,	// (0x0002814f) list_empty_pane_fp_g1_ParamLimits

0x13b8,	// (0x0002814f) list_empty_pane_fp_g1

0x4b91,	// (0x0002b928) list_empty_pane_fp_t1

0x4b9f,	// (0x0002b936) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x00036956) list_empty_pane_fp_t

0x13b8,	// (0x0002814f) list_single_heading_pane_fp_g1_ParamLimits

0x13b8,	// (0x0002814f) list_single_heading_pane_fp_g1

0x507d,	// (0x0002be14) list_single_heading_pane_fp_g2_ParamLimits

0x507d,	// (0x0002be14) list_single_heading_pane_fp_g2

0x5d2e,	// (0x0002cac5) list_single_heading_pane_fp_g3_ParamLimits

0x5d2e,	// (0x0002cac5) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x0003695b) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x0003695b) list_single_heading_pane_fp_g

0x4bad,	// (0x0002b944) list_single_heading_pane_fp_t1_ParamLimits

0x4bad,	// (0x0002b944) list_single_heading_pane_fp_t1

0x4bbf,	// (0x0002b956) list_single_heading_pane_fp_t2_ParamLimits

0x4bbf,	// (0x0002b956) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x00036962) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x00036962) list_single_heading_pane_fp_t

0xcd06,	// (0x00033a9d) aid_size_cell_fast

0x972b,	// (0x000304c2) soft_indicator_pane_cp1_t1

0xcd43,	// (0x00033ada) cell_app_pane_cp2_ParamLimits

0xcd43,	// (0x00033ada) cell_app_pane_cp2

0x5b05,	// (0x0002c89c) fep_hwr_candidate_drop_down_list_pane

0x3060,	// (0x00029df7) fep_hwr_candidate_pane_g3_ParamLimits

0x3060,	// (0x00029df7) fep_hwr_candidate_pane_g3

0x306d,	// (0x00029e04) fep_hwr_candidate_pane_g4_ParamLimits

0x306d,	// (0x00029e04) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x000368d6) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x000368d6) fep_hwr_candidate_pane_g

0x0eae,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x0eae,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane

0x127d,	// (0x00028014) fep_vkb_candidate_pane_g3

0x1285,	// (0x0002801c) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00036903) fep_vkb_candidate_pane_g

0x0f95,	// (0x00027d2c) cell_hwr_candidate_pane_g1_ParamLimits

0x12b7,	// (0x0002804e) cell_hwr_candidate_pane_g3_ParamLimits

0x12b7,	// (0x0002804e) cell_hwr_candidate_pane_g3

0x12d8,	// (0x0002806f) cell_hwr_candidate_pane_g4_ParamLimits

0x12d8,	// (0x0002806f) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x0003691d) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x0003691d) cell_hwr_candidate_pane_g

0x129c,	// (0x00028033) cell_vkb_candidate_pane_g3_ParamLimits

0x129c,	// (0x00028033) cell_vkb_candidate_pane_g3

0x12f9,	// (0x00028090) cell_vkb_candidate_pane_g4_ParamLimits

0x12f9,	// (0x00028090) cell_vkb_candidate_pane_g4

0x13dc,	// (0x00028173) cell_app_pane_cp2_g1_ParamLimits

0x13dc,	// (0x00028173) cell_app_pane_cp2_g1

0x13fa,	// (0x00028191) cell_app_pane_cp2_g2_ParamLimits

0x13fa,	// (0x00028191) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x00036967) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x00036967) cell_app_pane_cp2_g

0x1406,	// (0x0002819d) cell_app_pane_cp2_t1_ParamLimits

0x1406,	// (0x0002819d) cell_app_pane_cp2_t1

0xcb7e,	// (0x00033915) grid_highlight_pane_cp1_ParamLimits

0xcb7e,	// (0x00033915) grid_highlight_pane_cp1

0x5db2,	// (0x0002cb49) cell_hwr_candidate_pane_cp1_ParamLimits

0x5db2,	// (0x0002cb49) cell_hwr_candidate_pane_cp1

0x0f95,	// (0x00027d2c) fep_hwr_candidate_drop_down_list_pane_g1

0x1418,	// (0x000281af) fep_hwr_candidate_drop_down_list_pane_g2

0x1425,	// (0x000281bc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0003696c) fep_hwr_candidate_drop_down_list_pane_g

0x5dd0,	// (0x0002cb67) fep_hwr_candidate_drop_down_list_scroll_pane

0x5dd9,	// (0x0002cb70) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5dd9,	// (0x0002cb70) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5de6,	// (0x0002cb7d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5de6,	// (0x0002cb7d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5df3,	// (0x0002cb8a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5df3,	// (0x0002cb8a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x129c,	// (0x00028033) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x129c,	// (0x00028033) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12f9,	// (0x00028090) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12f9,	// (0x00028090) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5e00,	// (0x0002cb97) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5e00,	// (0x0002cb97) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5e1b,	// (0x0002cbb2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e1b,	// (0x0002cbb2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5e36,	// (0x0002cbcd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e36,	// (0x0002cbcd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x00036973) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x00036973) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb48e,	// (0x00032225) cell_vkb_candidate_pane_cp1_ParamLimits

0xb48e,	// (0x00032225) cell_vkb_candidate_pane_cp1

0x0f95,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x0f95,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1

0x1418,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x1418,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2

0x1425,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x1425,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0003696c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0003696c) fep_vkb_candidate_drop_down_list_pane_g

0x1455,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x1455,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane

0x1462,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1462,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x146f,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x146f,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x147b,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x147b,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x12b7,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12b7,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x12d8,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12d8,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x1487,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1487,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x14a8,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x14a8,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x14c9,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x14c9,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x00036984) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x00036984) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9304,	// (0x0003009b) title_pane_g1_ParamLimits

0x931b,	// (0x000300b2) title_pane_g2_ParamLimits

0xf592,	// (0x00036329) title_pane_g_ParamLimits

0xd088,	// (0x00033e1f) aid_call2_pane

0xd090,	// (0x00033e27) aid_call_pane

0xd098,	// (0x00033e2f) popup_clock_analogue_window_g1

0xd098,	// (0x00033e2f) popup_clock_analogue_window_g2

0x525e,	// (0x0002bff5) popup_clock_analogue_window_g3

0x5267,	// (0x0002bffe) popup_clock_analogue_window_g4

0x9108,	// (0x0002fe9f) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x000364d8) popup_clock_analogue_window_g

0x526f,	// (0x0002c006) popup_clock_analogue_window_t1

0x527d,	// (0x0002c014) clock_digital_number_pane_ParamLimits

0x527d,	// (0x0002c014) clock_digital_number_pane

0x5289,	// (0x0002c020) clock_digital_number_pane_cp02_ParamLimits

0x5289,	// (0x0002c020) clock_digital_number_pane_cp02

0x5295,	// (0x0002c02c) clock_digital_number_pane_cp03_ParamLimits

0x5295,	// (0x0002c02c) clock_digital_number_pane_cp03

0x52a1,	// (0x0002c038) clock_digital_number_pane_cp04_ParamLimits

0x52a1,	// (0x0002c038) clock_digital_number_pane_cp04

0x52ad,	// (0x0002c044) clock_digital_separator_pane_ParamLimits

0x52ad,	// (0x0002c044) clock_digital_separator_pane

0x52b9,	// (0x0002c050) popup_clock_digital_window_t1_ParamLimits

0x52b9,	// (0x0002c050) popup_clock_digital_window_t1

0x9108,	// (0x0002fe9f) clock_digital_number_pane_g1

0x9108,	// (0x0002fe9f) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x000364e3) clock_digital_number_pane_g

0x9108,	// (0x0002fe9f) clock_digital_separator_pane_g1

0x9108,	// (0x0002fe9f) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x000364e3) clock_digital_separator_pane_g

0xa71f,	// (0x000314b6) aid_fill_nsta_ParamLimits

0xa836,	// (0x000315cd) indicator_nsta_pane_ParamLimits

0xd932,	// (0x000346c9) popup_clock_analogue_window

0xd932,	// (0x000346c9) popup_clock_digital_window

0xdb49,	// (0x000348e0) grid_indicator_nsta_pane_ParamLimits

0xf51b,	// (0x000362b2) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x00036863) clock_nsta_pane_t

0x5222,	// (0x0002bfb9) aid_size_max_handle

0x9df5,	// (0x00030b8c) aid_size_min_handle

0xd525,	// (0x000342bc) editor_scroll_pane

0x14e4,	// (0x0002827b) ex_editor_pane

0xccc1,	// (0x00033a58) scroll_pane_cp13

0x9c7c,	// (0x00030a13) scroll_pane_cp14

0xd0c2,	// (0x00033e59) scroll_pane_cp36

0x9e9d,	// (0x00030c34) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e9d,	// (0x00030c34) list_single_graphic_hl_pane_cp2

0xb04b,	// (0x00031de2) list_single_graphic_hl_pane_ParamLimits

0xb04b,	// (0x00031de2) list_single_graphic_hl_pane

0x4bd5,	// (0x0002b96c) aid_size_min_hl_cp1

0x14ec,	// (0x00028283) list_highlight_pane_cp34_ParamLimits

0x14ec,	// (0x00028283) list_highlight_pane_cp34

0x14fd,	// (0x00028294) list_single_graphic_hl_pane_g1_ParamLimits

0x14fd,	// (0x00028294) list_single_graphic_hl_pane_g1

0x8f4a,	// (0x0002fce1) list_single_graphic_hl_pane_g2_ParamLimits

0x8f4a,	// (0x0002fce1) list_single_graphic_hl_pane_g2

0x8f4a,	// (0x0002fce1) list_single_graphic_hl_pane_g3_ParamLimits

0x8f4a,	// (0x0002fce1) list_single_graphic_hl_pane_g3

0x9cf2,	// (0x00030a89) list_single_graphic_hl_pane_g4_ParamLimits

0x9cf2,	// (0x00030a89) list_single_graphic_hl_pane_g4

0xcb98,	// (0x0003392f) list_single_graphic_hl_pane_g5_ParamLimits

0xcb98,	// (0x0003392f) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x00036995) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x00036995) list_single_graphic_hl_pane_g

0x8f56,	// (0x0002fced) list_single_graphic_hl_pane_t1_ParamLimits

0x8f56,	// (0x0002fced) list_single_graphic_hl_pane_t1

0x150a,	// (0x000282a1) aid_size_min_hl_cp2

0x1513,	// (0x000282aa) list_highlight_pane_cp34_cp2_ParamLimits

0x1513,	// (0x000282aa) list_highlight_pane_cp34_cp2

0x14fd,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x14fd,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2

0x1520,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x1520,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2

0x152c,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x152c,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2

0xd39a,	// (0x00034131) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd39a,	// (0x00034131) list_single_graphic_hl_pane_g4_cp2

0x1322,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x1322,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2

0xa029,	// (0x00030dc0) control_pane_g4_ParamLimits

0xa029,	// (0x00030dc0) control_pane_g4

0xccfa,	// (0x00033a91) bg_popup_sub_pane_cp10_ParamLimits

0x0d57,	// (0x00027aee) list_choice_list_pane_ParamLimits

0x0d66,	// (0x00027afd) scroll_pane_cp23

0x97b6,	// (0x0003054d) bg_popup_preview_window_pane_cp02_ParamLimits

0x135e,	// (0x000280f5) list_preview_fixed_pane_ParamLimits

0x1374,	// (0x0002810b) list_preview_fixed_pane_cp_ParamLimits

0x1374,	// (0x0002810b) list_preview_fixed_pane_cp

0x1380,	// (0x00028117) popup_preview_fixed_window_g1_ParamLimits

0x1380,	// (0x00028117) popup_preview_fixed_window_g1

0x138c,	// (0x00028123) popup_preview_fixed_window_g2_ParamLimits

0x138c,	// (0x00028123) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x00036924) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x00036924) popup_preview_fixed_window_g

0x51b2,	// (0x0002bf49) aid_navi_side_left_pane_ParamLimits

0x51c2,	// (0x0002bf59) aid_navi_side_right_pane_ParamLimits

0x51d1,	// (0x0002bf68) navi_icon_pane_stacon_ParamLimits

0x51e1,	// (0x0002bf78) navi_navi_pane_stacon_ParamLimits

0x51d1,	// (0x0002bf68) navi_text_pane_stacon_ParamLimits

0x90fe,	// (0x0002fe95) main_text_info_pane

0x154e,	// (0x000282e5) listscroll_text_info_pane

0x1556,	// (0x000282ed) list_text_info_pane_ParamLimits

0x1556,	// (0x000282ed) list_text_info_pane

0x1565,	// (0x000282fc) scroll_pane_cp24_ParamLimits

0x1565,	// (0x000282fc) scroll_pane_cp24

0xb4ae,	// (0x00032245) list_text_info_pane_t1_ParamLimits

0xb4ae,	// (0x00032245) list_text_info_pane_t1

0xa1a8,	// (0x00030f3f) popup_fast_swap2_window_ParamLimits

0xa1a8,	// (0x00030f3f) popup_fast_swap2_window

0x15a0,	// (0x00028337) aid_size_cell_fast2

0x90fe,	// (0x0002fe95) bg_popup_window_pane_cp17

0xdf47,	// (0x00034cde) heading_pane_cp2

0x99fe,	// (0x00030795) listscroll_fast2_pane

0x15aa,	// (0x00028341) grid_fast2_pane

0x15b2,	// (0x00028349) listscroll_fast2_pane_g1

0x15ba,	// (0x00028351) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x000369a0) listscroll_fast2_pane_g

0xccc1,	// (0x00033a58) scroll_pane_cp26

0x15c2,	// (0x00028359) cell_fast2_pane_ParamLimits

0x15c2,	// (0x00028359) cell_fast2_pane

0x15d8,	// (0x0002836f) cell_fast2_pane_g1

0x15e1,	// (0x00028378) cell_fast2_pane_g2

0x15ea,	// (0x00028381) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x000369a5) cell_fast2_pane_g

0x9ad5,	// (0x0003086c) grid_highlight_pane_cp9

0x9aea,	// (0x00030881) main_eswt_pane_ParamLimits

0x9aea,	// (0x00030881) main_eswt_pane

0x157a,	// (0x00028311) list_single_text_info_pane

0x15f2,	// (0x00028389) eswt_ctrl_button_pane

0x15f2,	// (0x00028389) eswt_ctrl_canvas_pane

0x15fa,	// (0x00028391) eswt_ctrl_combo_pane

0x15f2,	// (0x00028389) eswt_ctrl_default_pane

0x15f2,	// (0x00028389) eswt_ctrl_label_pane

0x1602,	// (0x00028399) eswt_ctrl_wait_pane

0x160a,	// (0x000283a1) eswt_shell_pane

0x90fe,	// (0x0002fe95) listscroll_eswt_app_pane

0x1626,	// (0x000283bd) popup_eswt_tasktip_window_ParamLimits

0x1626,	// (0x000283bd) popup_eswt_tasktip_window

0xdb21,	// (0x000348b8) bg_popup_window_pane_cp18

0x1637,	// (0x000283ce) eswt_control_pane_g1_ParamLimits

0x1637,	// (0x000283ce) eswt_control_pane_g1

0x1644,	// (0x000283db) eswt_control_pane_g2_ParamLimits

0x1644,	// (0x000283db) eswt_control_pane_g2

0x1651,	// (0x000283e8) eswt_control_pane_g3_ParamLimits

0x1651,	// (0x000283e8) eswt_control_pane_g3

0x165e,	// (0x000283f5) eswt_control_pane_g4_ParamLimits

0x165e,	// (0x000283f5) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x000369ac) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x000369ac) eswt_control_pane_g

0xcb7e,	// (0x00033915) bg_button_pane_ParamLimits

0xcb7e,	// (0x00033915) bg_button_pane

0x9aea,	// (0x00030881) common_borders_pane_copy2_ParamLimits

0x9aea,	// (0x00030881) common_borders_pane_copy2

0x166b,	// (0x00028402) control_button_pane_g1_ParamLimits

0x166b,	// (0x00028402) control_button_pane_g1

0x1677,	// (0x0002840e) control_button_pane_g2_ParamLimits

0x1677,	// (0x0002840e) control_button_pane_g2

0x1683,	// (0x0002841a) control_button_pane_g3_ParamLimits

0x1683,	// (0x0002841a) control_button_pane_g3

0x0002,

0xfc1e,	// (0x000369b5) control_button_pane_g_ParamLimits

0xfc1e,	// (0x000369b5) control_button_pane_g

0x1697,	// (0x0002842e) control_button_pane_t1

0x16a5,	// (0x0002843c) control_button_pane_t2

0x0001,

0xfc25,	// (0x000369bc) control_button_pane_t

0xda33,	// (0x000347ca) bg_button_pane_g1

0xda3b,	// (0x000347d2) bg_button_pane_g2

0xda43,	// (0x000347da) bg_button_pane_g3

0xda4b,	// (0x000347e2) bg_button_pane_g4

0xda53,	// (0x000347ea) bg_button_pane_g5

0xda5b,	// (0x000347f2) bg_button_pane_g6

0xda63,	// (0x000347fa) bg_button_pane_g7

0xda6b,	// (0x00034802) bg_button_pane_g8

0xda73,	// (0x0003480a) bg_button_pane_g9

0x0008,

0xf898,	// (0x0003662f) bg_button_pane_g

0x0d12,	// (0x00027aa9) common_borders_pane_ParamLimits

0x0d12,	// (0x00027aa9) common_borders_pane

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy1_ParamLimits

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy1

0x1644,	// (0x000283db) eswt_control_pane_g2_copy1_ParamLimits

0x1644,	// (0x000283db) eswt_control_pane_g2_copy1

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy1_ParamLimits

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy1

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy1_ParamLimits

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy1

0x0d4d,	// (0x00027ae4) bg_eswt_ctrl_canvas_pane_g1

0x0d12,	// (0x00027aa9) common_borders_pane_cp2_ParamLimits

0x0d12,	// (0x00027aa9) common_borders_pane_cp2

0x0d12,	// (0x00027aa9) common_borders_pane_cp3_ParamLimits

0x0d12,	// (0x00027aa9) common_borders_pane_cp3

0x16b3,	// (0x0002844a) separator_horizontal_pane

0xcf27,	// (0x00033cbe) separator_vertical_pane

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy2_ParamLimits

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy2

0x1644,	// (0x000283db) eswt_control_pane_g2_copy2_ParamLimits

0x1644,	// (0x000283db) eswt_control_pane_g2_copy2

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy2_ParamLimits

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy2

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy2_ParamLimits

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy2

0x90fe,	// (0x0002fe95) common_borders_pane_cp4

0x16bb,	// (0x00028452) separator_horizontal_pane_g1

0x16c4,	// (0x0002845b) separator_horizontal_pane_g2

0x16cd,	// (0x00028464) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x000369c1) separator_horizontal_pane_g

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy3_ParamLimits

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy3

0x1644,	// (0x000283db) eswt_control_pane_g2_copy3_ParamLimits

0x1644,	// (0x000283db) eswt_control_pane_g2_copy3

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy3_ParamLimits

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy3

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy3_ParamLimits

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy3

0x90fe,	// (0x0002fe95) common_borders_pane_cp5

0x16d6,	// (0x0002846d) separator_vertical_pane_g1

0x16df,	// (0x00028476) separator_vertical_pane_g2

0x16e8,	// (0x0002847f) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x000369c8) separator_vertical_pane_g

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy4_ParamLimits

0x1637,	// (0x000283ce) eswt_control_pane_g1_copy4

0x1644,	// (0x000283db) eswt_control_pane_g2_copy4_ParamLimits

0x1644,	// (0x000283db) eswt_control_pane_g2_copy4

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy4_ParamLimits

0x1651,	// (0x000283e8) eswt_control_pane_g3_copy4

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy4_ParamLimits

0x165e,	// (0x000283f5) eswt_control_pane_g4_copy4

0xb4c9,	// (0x00032260) eswt_ctrl_combo_button_pane

0xb4d1,	// (0x00032268) eswt_ctrl_input_pane

0xb4d9,	// (0x00032270) popup_choice_list_window_cp70

0xb4e1,	// (0x00032278) eswt_ctrl_input_pane_t1

0x90fe,	// (0x0002fe95) input_focus_pane_cp70

0x0d12,	// (0x00027aa9) bg_button_pane_cp70_ParamLimits

0x0d12,	// (0x00027aa9) bg_button_pane_cp70

0xb4ef,	// (0x00032286) eswt_ctrl_combo_button_pane_g1

0x171f,	// (0x000284b6) wait_bar_pane_cp70

0xdb21,	// (0x000348b8) bg_popup_window_pane_cp70_ParamLimits

0xdb21,	// (0x000348b8) bg_popup_window_pane_cp70

0x1727,	// (0x000284be) popup_eswt_tasktip_window_t1

0x173d,	// (0x000284d4) wait_bar_pane_cp71_ParamLimits

0x173d,	// (0x000284d4) wait_bar_pane_cp71

0x1749,	// (0x000284e0) grid_eswt_app_pane

0xcf30,	// (0x00033cc7) scroll_pane_cp70

0xb4f7,	// (0x0003228e) cell_eswt_app_pane_ParamLimits

0xb4f7,	// (0x0003228e) cell_eswt_app_pane

0xb51f,	// (0x000322b6) cell_eswt_app_pane_g1_ParamLimits

0xb51f,	// (0x000322b6) cell_eswt_app_pane_g1

0xb54e,	// (0x000322e5) cell_eswt_app_pane_g2_ParamLimits

0xb54e,	// (0x000322e5) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x000369cf) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x000369cf) cell_eswt_app_pane_g

0xb577,	// (0x0003230e) cell_eswt_app_pane_t1_ParamLimits

0xb577,	// (0x0003230e) cell_eswt_app_pane_t1

0x1804,	// (0x0002859b) grid_highlight_pane_cp70_ParamLimits

0x1804,	// (0x0002859b) grid_highlight_pane_cp70

0x9cf2,	// (0x00030a89) set_content_pane_g1

0xd714,	// (0x000344ab) status_small_volume_pane

0x5e51,	// (0x0002cbe8) status_small_volume_pane_g1

0x5e59,	// (0x0002cbf0) volume_small2_pane

0x5e62,	// (0x0002cbf9) volume_small2_pane_g1

0x5e6b,	// (0x0002cc02) volume_small2_pane_g2

0x5e74,	// (0x0002cc0b) volume_small2_pane_g3

0x5e7d,	// (0x0002cc14) volume_small2_pane_g4

0x5e86,	// (0x0002cc1d) volume_small2_pane_g5

0x5e8f,	// (0x0002cc26) volume_small2_pane_g6

0x5e98,	// (0x0002cc2f) volume_small2_pane_g7

0x5ea1,	// (0x0002cc38) volume_small2_pane_g8

0x5eaa,	// (0x0002cc41) volume_small2_pane_g9

0x5eb3,	// (0x0002cc4a) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x000369d4) volume_small2_pane_g

0x10d7,	// (0x00027e6e) fep_vkb_top_text_pane_g1_ParamLimits

0xb436,	// (0x000321cd) fep_vkb_top_text_pane_t1_ParamLimits

0x1398,	// (0x0002812f) popup_preview_fixed_window_g3_ParamLimits

0x1398,	// (0x0002812f) popup_preview_fixed_window_g3

0xa6c8,	// (0x0003145f) popup_toolbar_trans_pane

0xaeeb,	// (0x00031c82) aid_height_set_list_ParamLimits

0xec6d,	// (0x00035a04) aid_size_parent_ParamLimits

0xccfa,	// (0x00033a91) list_highlight_pane_cp2_ParamLimits

0x9cf2,	// (0x00030a89) set_content_pane_g1_ParamLimits

0xb05e,	// (0x00031df5) list_single_image_pane_ParamLimits

0xb05e,	// (0x00031df5) list_single_image_pane

0xb5a9,	// (0x00032340) aid_size_cell_image_ParamLimits

0xb5a9,	// (0x00032340) aid_size_cell_image

0xb5b6,	// (0x0003234d) grid_single_image_pane_ParamLimits

0xb5b6,	// (0x0003234d) grid_single_image_pane

0x9cf2,	// (0x00030a89) list_single_image_pane_g1_ParamLimits

0x9cf2,	// (0x00030a89) list_single_image_pane_g1

0xcb98,	// (0x0003392f) list_single_image_pane_g2_ParamLimits

0xcb98,	// (0x0003392f) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x000369e9) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x000369e9) list_single_image_pane_g

0xf47a,	// (0x00036211) list_single_image_pane_t1_ParamLimits

0xf47a,	// (0x00036211) list_single_image_pane_t1

0xb5c2,	// (0x00032359) cell_image_list_pane_ParamLimits

0xb5c2,	// (0x00032359) cell_image_list_pane

0xb5d6,	// (0x0003236d) cell_image_list_pane_g1

0xb5df,	// (0x00032376) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x000369ee) cell_image_list_pane_g

0x2639,	// (0x000293d0) aid_size_cell_tb_trans_pane

0xcb7e,	// (0x00033915) bg_tb_trans_pane

0x264b,	// (0x000293e2) grid_tb_trans_pane

0xda33,	// (0x000347ca) bg_tb_trans_pane_g1

0xda3b,	// (0x000347d2) bg_tb_trans_pane_g2

0xda43,	// (0x000347da) bg_tb_trans_pane_g3

0xda4b,	// (0x000347e2) bg_tb_trans_pane_g4

0xda53,	// (0x000347ea) bg_tb_trans_pane_g5

0xda6b,	// (0x00034802) bg_tb_trans_pane_g6

0xda73,	// (0x0003480a) bg_tb_trans_pane_g7

0xda5b,	// (0x000347f2) bg_tb_trans_pane_g8

0xda63,	// (0x000347fa) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x000369f3) bg_tb_trans_pane_g

0x265f,	// (0x000293f6) cell_toolbar_trans_pane_ParamLimits

0x265f,	// (0x000293f6) cell_toolbar_trans_pane

0x0d4d,	// (0x00027ae4) cell_toolbar_trans_pane_g1

0xb2ab,	// (0x00032042) list_form2_midp_pane_t1

0xb2b9,	// (0x00032050) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0003689c) list_form2_midp_pane_t

0x09ee,	// (0x00027785) scroll_pane_cp51_ParamLimits

0x0ba7,	// (0x0002793e) form2_midp_wait_pane_g1

0x0bb0,	// (0x00027947) form2_midp_wait_pane_g2

0x0bb9,	// (0x00027950) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x000368b1) form2_midp_wait_pane_g

0x9461,	// (0x000301f8) list_highlight_pane_cp21_ParamLimits

0x0bd9,	// (0x00027970) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x0be8,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5933,	// (0x0002c6ca) list_single_2graphic_im_pane_ParamLimits

0x5933,	// (0x0002c6ca) list_single_2graphic_im_pane

0xb5e8,	// (0x0003237f) list_single_2graphic_im_pane_g1_ParamLimits

0xb5e8,	// (0x0003237f) list_single_2graphic_im_pane_g1

0xb5f9,	// (0x00032390) list_single_2graphic_im_pane_g2_ParamLimits

0xb5f9,	// (0x00032390) list_single_2graphic_im_pane_g2

0xb605,	// (0x0003239c) list_single_2graphic_im_pane_g3_ParamLimits

0xb605,	// (0x0003239c) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x00036a06) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x00036a06) list_single_2graphic_im_pane_g

0xb619,	// (0x000323b0) list_single_2graphic_im_pane_t1_ParamLimits

0xb619,	// (0x000323b0) list_single_2graphic_im_pane_t1

0x13a4,	// (0x0002813b) list_single_graphic_2heading_pane_fp_ParamLimits

0x13a4,	// (0x0002813b) list_single_graphic_2heading_pane_fp

0x4ab7,	// (0x0002b84e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4ab7,	// (0x0002b84e) list_single_graphic_2heading_pane_fp_g1

0x13b8,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x13b8,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2

0x507d,	// (0x0002be14) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x507d,	// (0x0002be14) list_single_graphic_2heading_pane_fp_g3

0x5d2e,	// (0x0002cac5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5d2e,	// (0x0002cac5) list_single_graphic_2heading_pane_fp_g4

0x13c4,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x13c4,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00036934) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036934) list_single_graphic_2heading_pane_fp_g

0x4bea,	// (0x0002b981) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4bea,	// (0x0002b981) list_single_graphic_2heading_pane_fp_t1

0x4aef,	// (0x0002b886) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4aef,	// (0x0002b886) list_single_graphic_2heading_pane_fp_t2

0x4c00,	// (0x0002b997) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4c00,	// (0x0002b997) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x00036a0f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x00036a0f) list_single_graphic_2heading_pane_fp_t

0x0dd8,	// (0x00027b6f) fep_hwr_write_pane_g5_ParamLimits

0x0dd8,	// (0x00027b6f) fep_hwr_write_pane_g5

0x0de4,	// (0x00027b7b) fep_hwr_write_pane_g6_ParamLimits

0x0de4,	// (0x00027b7b) fep_hwr_write_pane_g6

0x160a,	// (0x000283a1) eswt_shell_pane_ParamLimits

0xdb21,	// (0x000348b8) bg_popup_window_pane_cp18_ParamLimits

0xec11,	// (0x000359a8) heading_pane_cp70

0x1727,	// (0x000284be) popup_eswt_tasktip_window_t1_ParamLimits

0xa763,	// (0x000314fa) aid_touch_tab_arrow_left

0xa777,	// (0x0003150e) aid_touch_tab_arrow_right

0x933a,	// (0x000300d1) title_pane_g3_ParamLimits

0x933a,	// (0x000300d1) title_pane_g3

0xcb4e,	// (0x000338e5) set_value_pane_g1

0xa6c8,	// (0x0003145f) popup_toolbar_trans_pane_ParamLimits

0x2639,	// (0x000293d0) aid_size_cell_tb_trans_pane_ParamLimits

0xcb7e,	// (0x00033915) bg_tb_trans_pane_ParamLimits

0x264b,	// (0x000293e2) grid_tb_trans_pane_ParamLimits

0x97b6,	// (0x0003054d) cont_note_pane_ParamLimits

0x97b6,	// (0x0003054d) cont_note_pane

0x9aea,	// (0x00030881) cont_snote2_single_text_pane_ParamLimits

0x9aea,	// (0x00030881) cont_snote2_single_text_pane

0x9aea,	// (0x00030881) cont_snote2_single_graphic_pane_ParamLimits

0x9aea,	// (0x00030881) cont_snote2_single_graphic_pane

0xe120,	// (0x00034eb7) cont_note_wait_pane_ParamLimits

0xe120,	// (0x00034eb7) cont_note_wait_pane

0xe120,	// (0x00034eb7) cont_note_image_pane_ParamLimits

0xe120,	// (0x00034eb7) cont_note_image_pane

0x2691,	// (0x00029428) popup_note2_window_g1_ParamLimits

0x2691,	// (0x00029428) popup_note2_window_g1

0x26c2,	// (0x00029459) popup_note2_window_t1_ParamLimits

0x26c2,	// (0x00029459) popup_note2_window_t1

0x2707,	// (0x0002949e) popup_note2_window_t2_ParamLimits

0x2707,	// (0x0002949e) popup_note2_window_t2

0x274c,	// (0x000294e3) popup_note2_window_t3_ParamLimits

0x274c,	// (0x000294e3) popup_note2_window_t3

0x2791,	// (0x00029528) popup_note2_window_t4_ParamLimits

0x2791,	// (0x00029528) popup_note2_window_t4

0x983a,	// (0x000305d1) popup_note2_window_t5_ParamLimits

0x983a,	// (0x000305d1) popup_note2_window_t5

0x0004,

0xfc84,	// (0x00036a1b) popup_note2_window_t_ParamLimits

0xfc84,	// (0x00036a1b) popup_note2_window_t

0x27c0,	// (0x00029557) popup_note2_image_window_g1_ParamLimits

0x27c0,	// (0x00029557) popup_note2_image_window_g1

0x27cc,	// (0x00029563) popup_note2_image_window_g2_ParamLimits

0x27cc,	// (0x00029563) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x00036a26) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x00036a26) popup_note2_image_window_g

0x27de,	// (0x00029575) popup_note2_image_window_t1_ParamLimits

0x27de,	// (0x00029575) popup_note2_image_window_t1

0x27f6,	// (0x0002958d) popup_note2_image_window_t2_ParamLimits

0x27f6,	// (0x0002958d) popup_note2_image_window_t2

0x280e,	// (0x000295a5) popup_note2_image_window_t3_ParamLimits

0x280e,	// (0x000295a5) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x00036a2b) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x00036a2b) popup_note2_image_window_t

0xe12e,	// (0x00034ec5) popup_note2_wait_window_g1_ParamLimits

0xe12e,	// (0x00034ec5) popup_note2_wait_window_g1

0xe13a,	// (0x00034ed1) popup_note2_wait_window_g2_ParamLimits

0xe13a,	// (0x00034ed1) popup_note2_wait_window_g2

0xe146,	// (0x00034edd) popup_note2_wait_window_g3_ParamLimits

0xe146,	// (0x00034edd) popup_note2_wait_window_g3

0x0002,

0xf87a,	// (0x00036611) popup_note2_wait_window_g_ParamLimits

0xf87a,	// (0x00036611) popup_note2_wait_window_g

0x282a,	// (0x000295c1) popup_note2_wait_window_t1_ParamLimits

0x282a,	// (0x000295c1) popup_note2_wait_window_t1

0x2848,	// (0x000295df) popup_note2_wait_window_t2_ParamLimits

0x2848,	// (0x000295df) popup_note2_wait_window_t2

0x2866,	// (0x000295fd) popup_note2_wait_window_t3_ParamLimits

0x2866,	// (0x000295fd) popup_note2_wait_window_t3

0x2878,	// (0x0002960f) popup_note2_wait_window_t4_ParamLimits

0x2878,	// (0x0002960f) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x00036a32) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x00036a32) popup_note2_wait_window_t

0x288a,	// (0x00029621) wait_bar2_pane_ParamLimits

0x288a,	// (0x00029621) wait_bar2_pane

0x28a2,	// (0x00029639) popup_snote2_single_text_window_g1_ParamLimits

0x28a2,	// (0x00029639) popup_snote2_single_text_window_g1

0x28ca,	// (0x00029661) popup_snote2_single_text_window_t1_ParamLimits

0x28ca,	// (0x00029661) popup_snote2_single_text_window_t1

0x2916,	// (0x000296ad) popup_snote2_single_text_window_t2_ParamLimits

0x2916,	// (0x000296ad) popup_snote2_single_text_window_t2

0x2962,	// (0x000296f9) popup_snote2_single_text_window_t3_ParamLimits

0x2962,	// (0x000296f9) popup_snote2_single_text_window_t3

0x29a3,	// (0x0002973a) popup_snote2_single_text_window_t4_ParamLimits

0x29a3,	// (0x0002973a) popup_snote2_single_text_window_t4

0x29d9,	// (0x00029770) popup_snote2_single_text_window_t5_ParamLimits

0x29d9,	// (0x00029770) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x00036a3b) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x00036a3b) popup_snote2_single_text_window_t

0x2a04,	// (0x0002979b) popup_snote2_single_graphic_window_g1_ParamLimits

0x2a04,	// (0x0002979b) popup_snote2_single_graphic_window_g1

0x2a2c,	// (0x000297c3) popup_snote2_single_graphic_window_g2_ParamLimits

0x2a2c,	// (0x000297c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x00036a46) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x00036a46) popup_snote2_single_graphic_window_g

0x2a54,	// (0x000297eb) popup_snote2_single_graphic_window_t1_ParamLimits

0x2a54,	// (0x000297eb) popup_snote2_single_graphic_window_t1

0x2aa0,	// (0x00029837) popup_snote2_single_graphic_window_t2_ParamLimits

0x2aa0,	// (0x00029837) popup_snote2_single_graphic_window_t2

0x2962,	// (0x000296f9) popup_snote2_single_graphic_window_t3_ParamLimits

0x2962,	// (0x000296f9) popup_snote2_single_graphic_window_t3

0x29a3,	// (0x0002973a) popup_snote2_single_graphic_window_t4_ParamLimits

0x29a3,	// (0x0002973a) popup_snote2_single_graphic_window_t4

0x29d9,	// (0x00029770) popup_snote2_single_graphic_window_t5_ParamLimits

0x29d9,	// (0x00029770) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x00036a4b) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x00036a4b) popup_snote2_single_graphic_window_t

0xf551,	// (0x000362e8) clock_nsta_pane_cp2_t1

0xf551,	// (0x000362e8) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x00036872) clock_nsta_pane_cp2_t

0x4577,	// (0x0002b30e) form_field_data_wide_pane_g1_ParamLimits

0x9cf2,	// (0x00030a89) form_field_data_wide_pane_g2_ParamLimits

0x9cf2,	// (0x00030a89) form_field_data_wide_pane_g2

0xcb98,	// (0x0003392f) form_field_data_wide_pane_g3_ParamLimits

0xcb98,	// (0x0003392f) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003645b) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003645b) form_field_data_wide_pane_g

0xb1e6,	// (0x00031f7d) grid_touch_3_pane_ParamLimits

0xb1e6,	// (0x00031f7d) grid_touch_3_pane

0xb64a,	// (0x000323e1) cell_touch_3_pane_ParamLimits

0xb64a,	// (0x000323e1) cell_touch_3_pane

0x0d4d,	// (0x00027ae4) cell_touch_3_pane_g1

0x0d4d,	// (0x00027ae4) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x000368f7) cell_touch_3_pane_g

0x986c,	// (0x00030603) cont_query_data_pane

0x9874,	// (0x0003060b) cont_query_data_pane_cp1

0x2aec,	// (0x00029883) button_value_adjust_pane_cp7

0x2af4,	// (0x0002988b) query_popup_pane_cp3

0xd0d3,	// (0x00033e6a) bg_popup_sub_pane_cp22_ParamLimits

0x52d8,	// (0x0002c06f) navi_navi_volume_pane_cp2

0x52f0,	// (0x0002c087) popup_side_volume_key_window_g2

0x52fc,	// (0x0002c093) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x000364ed) popup_side_volume_key_window_g

0x5316,	// (0x0002c0ad) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x000364f4) popup_side_volume_key_window_t

0xd31d,	// (0x000340b4) popup_side_volume_key_window_ParamLimits

0x8a50,	// (0x0002f7e7) list_double_graphic_pane_g4_ParamLimits

0x8a50,	// (0x0002f7e7) list_double_graphic_pane_g4

0x8f04,	// (0x0002fc9b) list_single_2heading_msg_pane_ParamLimits

0x8f04,	// (0x0002fc9b) list_single_2heading_msg_pane

0x8f6c,	// (0x0002fd03) list_single_2heading_msg_pane_g1_ParamLimits

0x8f6c,	// (0x0002fd03) list_single_2heading_msg_pane_g1

0x8f78,	// (0x0002fd0f) list_single_2heading_msg_pane_g2_ParamLimits

0x8f78,	// (0x0002fd0f) list_single_2heading_msg_pane_g2

0x8f8b,	// (0x0002fd22) list_single_2heading_msg_pane_g3_ParamLimits

0x8f8b,	// (0x0002fd22) list_single_2heading_msg_pane_g3

0x8f97,	// (0x0002fd2e) list_single_2heading_msg_pane_g4_ParamLimits

0x8f97,	// (0x0002fd2e) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x00036a56) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x00036a56) list_single_2heading_msg_pane_g

0x8faf,	// (0x0002fd46) list_single_2heading_msg_pane_t1_ParamLimits

0x8faf,	// (0x0002fd46) list_single_2heading_msg_pane_t1

0x8fd7,	// (0x0002fd6e) list_single_2heading_msg_pane_t2_ParamLimits

0x8fd7,	// (0x0002fd6e) list_single_2heading_msg_pane_t2

0x9042,	// (0x0002fdd9) list_single_2heading_msg_pane_t3_ParamLimits

0x9042,	// (0x0002fdd9) list_single_2heading_msg_pane_t3

0x4cde,	// (0x0002ba75) list_single_2heading_msg_pane_t4_ParamLimits

0x4cde,	// (0x0002ba75) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x00036a5f) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x00036a5f) list_single_2heading_msg_pane_t

0x9346,	// (0x000300dd) title_pane_g4_ParamLimits

0x9346,	// (0x000300dd) title_pane_g4

0x5128,	// (0x0002bebf) title_pane_stacon_g3_ParamLimits

0x5128,	// (0x0002bebf) title_pane_stacon_g3

0x2685,	// (0x0002941c) list_single_2graphic_im_pane_g4_ParamLimits

0x2685,	// (0x0002941c) list_single_2graphic_im_pane_g4

0xea27,	// (0x000357be) popup_side_volume_key_window_cp

0xeeea,	// (0x00035c81) main_idle_act2_pane_t1

0x5683,	// (0x0002c41a) toolbar_button_pane_g10

0x9c47,	// (0x000309de) popup_toolbar_window_cp1

0xf542,	// (0x000362d9) clock_nsta_pane_cp_t1

0xf542,	// (0x000362d9) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0003686d) clock_nsta_pane_cp_t

0x52d8,	// (0x0002c06f) navi_navi_volume_pane_cp2_ParamLimits

0x52e4,	// (0x0002c07b) popup_side_volume_key_window_g1_ParamLimits

0x52f0,	// (0x0002c087) popup_side_volume_key_window_g2_ParamLimits

0x52fc,	// (0x0002c093) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x000364ed) popup_side_volume_key_window_g_ParamLimits

0x5af1,	// (0x0002c888) fep_hwr_aid_pane

0x2d42,	// (0x00029ad9) bg_fep_hwr_top_pane_g4_ParamLimits

0x0dba,	// (0x00027b51) fep_hwr_top_pane_g1_ParamLimits

0x0da8,	// (0x00027b3f) fep_hwr_top_pane_g2_ParamLimits

0x5ba4,	// (0x0002c93b) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x000368c2) fep_hwr_top_pane_g_ParamLimits

0x5bb9,	// (0x0002c950) fep_hwr_top_text_pane_ParamLimits

0xe827,	// (0x000355be) aid_touch_tab_arrow_arrow_2

0xe830,	// (0x000355c7) aid_touch_tab_arrow_left_2

0x5b05,	// (0x0002c89c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5b38,	// (0x0002c8cf) fep_hwr_prediction_pane

0x0f07,	// (0x00027c9e) fep_vkb_prediction_pane

0xb416,	// (0x000321ad) fep_vkb_side_pane_g3_ParamLimits

0xb416,	// (0x000321ad) fep_vkb_side_pane_g3

0x0f95,	// (0x00027d2c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1418,	// (0x000281af) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1425,	// (0x000281bc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x0003696c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2b05,	// (0x0002989c) fep_hwr_prediction_pane_g1

0x5f9d,	// (0x0002cd34) fep_hwr_prediction_pane_g2

0x5fa5,	// (0x0002cd3c) fep_hwr_prediction_pane_g3

0x5fad,	// (0x0002cd44) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x00036a68) fep_hwr_prediction_pane_g

0x2b05,	// (0x0002989c) fep_vkb_prediction_pane_g1

0x2b0f,	// (0x000298a6) fep_vkb_prediction_pane_g2

0x2b17,	// (0x000298ae) fep_vkb_prediction_pane_g3

0x2b1f,	// (0x000298b6) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x00036a71) fep_vkb_prediction_pane_g

0xedef,	// (0x00035b86) slider_set_pane_g3

0xee03,	// (0x00035b9a) slider_set_pane_g4

0xee1b,	// (0x00035bb2) slider_set_pane_g5

0xedef,	// (0x00035b86) slider_set_pane_g6

0xaeb5,	// (0x00031c4c) slider_set_pane_g7

0xec90,	// (0x00035a27) slider_form_pane_g3

0xec99,	// (0x00035a30) slider_form_pane_g4

0xeca1,	// (0x00035a38) slider_form_pane_g5

0xec90,	// (0x00035a27) slider_form_pane_g6

0xb01d,	// (0x00031db4) slider_form_pane_g7

0xf133,	// (0x00035eca) slider_set_pane_vc_g3

0xf13c,	// (0x00035ed3) slider_set_pane_vc_g4

0xf145,	// (0x00035edc) slider_set_pane_vc_g5

0xf133,	// (0x00035eca) slider_set_pane_vc_g6

0xf14e,	// (0x00035ee5) slider_set_pane_vc_g7

0xf133,	// (0x00035eca) slider_form_pane_vc_g1

0xf13c,	// (0x00035ed3) slider_form_pane_vc_g2

0xf145,	// (0x00035edc) slider_form_pane_vc_g3

0xf133,	// (0x00035eca) slider_form_pane_vc_g4

0xf2e2,	// (0x00036079) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x00036853) slider_form_pane_vc_g

0x90fe,	// (0x0002fe95) main_idle_act3_pane

0x2b27,	// (0x000298be) ai3_links_pane

0xb691,	// (0x00032428) popup_ai3_data_window_ParamLimits

0xb691,	// (0x00032428) popup_ai3_data_window

0x90fe,	// (0x0002fe95) grid_ai3_links_pane

0xb6a9,	// (0x00032440) cell_ai3_links_pane_ParamLimits

0xb6a9,	// (0x00032440) cell_ai3_links_pane

0x2b30,	// (0x000298c7) bg_popup_sub_pane_cp11

0x2b3d,	// (0x000298d4) cell_ai3_links_pane_g1

0x90fe,	// (0x0002fe95) bg_popup_sub_pane_cp12

0x2b62,	// (0x000298f9) heading_ai3_data_pane

0x2b6a,	// (0x00029901) list_ai3_gene_pane

0x2b76,	// (0x0002990d) popup_ai3_data_window_g1

0x2b7e,	// (0x00029915) heading_ai3_data_pane_g1

0x2b86,	// (0x0002991d) heading_ai3_data_pane_t1

0x2b94,	// (0x0002992b) list_double_ai3_gene_pane_ParamLimits

0x2b94,	// (0x0002992b) list_double_ai3_gene_pane

0x2ba1,	// (0x00029938) list_single_ai3_gene_pane_ParamLimits

0x2ba1,	// (0x00029938) list_single_ai3_gene_pane

0x0d12,	// (0x00027aa9) list_highlight_pane_cp7_ParamLimits

0x0d12,	// (0x00027aa9) list_highlight_pane_cp7

0x2bae,	// (0x00029945) list_single_a13_gene_pane_t1_ParamLimits

0x2bae,	// (0x00029945) list_single_a13_gene_pane_t1

0x2bc5,	// (0x0002995c) list_single_ai3_gene_pane_g1

0x2bce,	// (0x00029965) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x00036a7a) list_single_ai3_gene_pane_g

0x2bd6,	// (0x0002996d) list_double_ai3_gene_pane_g1_ParamLimits

0x2bd6,	// (0x0002996d) list_double_ai3_gene_pane_g1

0x2be2,	// (0x00029979) list_double_ai3_gene_pane_t1_ParamLimits

0x2be2,	// (0x00029979) list_double_ai3_gene_pane_t1

0x2bfe,	// (0x00029995) list_double_ai3_gene_pane_t2_ParamLimits

0x2bfe,	// (0x00029995) list_double_ai3_gene_pane_t2

0x2c13,	// (0x000299aa) list_double_ai3_gene_pane_t3_ParamLimits

0x2c13,	// (0x000299aa) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x00036a7f) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x00036a7f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4c16,	// (0x0002b9ad) aid_size_min_col_2

0xb67d,	// (0x00032414) aid_size_min_msg_ParamLimits

0xb67d,	// (0x00032414) aid_size_min_msg

0xb42a,	// (0x000321c1) fep_vkb_top_text_pane_g2_ParamLimits

0xb42a,	// (0x000321c1) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x000368f2) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x000368f2) fep_vkb_top_text_pane_g

0x90fe,	// (0x0002fe95) main_hc_apps_shell_pane

0x2c30,	// (0x000299c7) grid_hc_apps_pane_ParamLimits

0x2c30,	// (0x000299c7) grid_hc_apps_pane

0x2c3f,	// (0x000299d6) list_hc_apps_pane

0x2c47,	// (0x000299de) scroll_pane_cp37_ParamLimits

0x2c47,	// (0x000299de) scroll_pane_cp37

0xb6bf,	// (0x00032456) cell_hc_apps_pane_ParamLimits

0xb6bf,	// (0x00032456) cell_hc_apps_pane

0xb759,	// (0x000324f0) cell_hc_apps_pane_g1_ParamLimits

0xb759,	// (0x000324f0) cell_hc_apps_pane_g1

0x2c53,	// (0x000299ea) cell_hc_apps_pane_g2_ParamLimits

0x2c53,	// (0x000299ea) cell_hc_apps_pane_g2

0x2c6f,	// (0x00029a06) cell_hc_apps_pane_g3_ParamLimits

0x2c6f,	// (0x00029a06) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x00036a86) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x00036a86) cell_hc_apps_pane_g

0xb786,	// (0x0003251d) cell_hc_apps_pane_t1_ParamLimits

0xb786,	// (0x0003251d) cell_hc_apps_pane_t1

0x97b6,	// (0x0003054d) grid_highlight_pane_cp10_ParamLimits

0x97b6,	// (0x0003054d) grid_highlight_pane_cp10

0xb7c4,	// (0x0003255b) list_single_hc_apps_pane_ParamLimits

0xb7c4,	// (0x0003255b) list_single_hc_apps_pane

0xb7f0,	// (0x00032587) list_single_hc_apps_pane_g1

0xb809,	// (0x000325a0) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x00036a8d) list_single_hc_apps_pane_g

0xb822,	// (0x000325b9) list_single_hc_apps_pane_g2_copy1

0x90b0,	// (0x0002fe47) list_single_hc_apps_pane_t1

0x9461,	// (0x000301f8) bg_set_opt_pane_cp_ParamLimits

0x946f,	// (0x00030206) setting_slider_pane_t1_ParamLimits

0x9485,	// (0x0003021c) setting_slider_pane_t2_ParamLimits

0x949e,	// (0x00030235) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00036339) setting_slider_pane_t_ParamLimits

0x94b5,	// (0x0003024c) slider_set_pane_ParamLimits

0x5560,	// (0x0002c2f7) control_pane_g5_ParamLimits

0x5560,	// (0x0002c2f7) control_pane_g5

0xec58,	// (0x000359ef) slider_set_pane_g1_ParamLimits

0x5911,	// (0x0002c6a8) slider_set_pane_g2_ParamLimits

0xedef,	// (0x00035b86) slider_set_pane_g3_ParamLimits

0xee03,	// (0x00035b9a) slider_set_pane_g4_ParamLimits

0xee1b,	// (0x00035bb2) slider_set_pane_g5_ParamLimits

0xedef,	// (0x00035b86) slider_set_pane_g6_ParamLimits

0xaeb5,	// (0x00031c4c) slider_set_pane_g7_ParamLimits

0xf996,	// (0x0003672d) slider_set_pane_g_ParamLimits

0x9461,	// (0x000301f8) navi_icon_text_pane_ParamLimits

0xa735,	// (0x000314cc) aid_fill_nsta_2_ParamLimits

0xa763,	// (0x000314fa) aid_touch_tab_arrow_left_ParamLimits

0xa777,	// (0x0003150e) aid_touch_tab_arrow_right_ParamLimits

0xa813,	// (0x000315aa) clock_nsta_pane_ParamLimits

0xe809,	// (0x000355a0) navi_icon_pane_g1_ParamLimits

0xe815,	// (0x000355ac) navi_text_pane_t1_ParamLimits

0x09ac,	// (0x00027743) navi_icon_text_pane_g1_ParamLimits

0x09b8,	// (0x0002774f) navi_icon_text_pane_t1_ParamLimits

0xb7f0,	// (0x00032587) list_single_hc_apps_pane_g1_ParamLimits

0xb809,	// (0x000325a0) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x00036a8d) list_single_hc_apps_pane_g_ParamLimits

0xb822,	// (0x000325b9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x90b0,	// (0x0002fe47) list_single_hc_apps_pane_t1_ParamLimits

0x9299,	// (0x00030030) popup_toolbar2_fixed_window_ParamLimits

0x9299,	// (0x00030030) popup_toolbar2_fixed_window

0xa6c0,	// (0x00031457) popup_toolbar2_float_window

0x90fe,	// (0x0002fe95) bg_popup_sub_pane_cp27

0x2c91,	// (0x00029a28) grid_toolbar2_float_pane

0x90fe,	// (0x0002fe95) bg_popup_sub_pane_cp26

0x2c91,	// (0x00029a28) grid_toolbar2_fixed_pane

0xb83e,	// (0x000325d5) cell_toolbar2_fixed_pane_ParamLimits

0xb83e,	// (0x000325d5) cell_toolbar2_fixed_pane

0xb859,	// (0x000325f0) cell_toolbar2_fixed_pane_g1

0x2c99,	// (0x00029a30) toolbar2_fixed_button_pane

0xda33,	// (0x000347ca) toolbar2_fixed_button_pane_g1

0xda3b,	// (0x000347d2) toolbar2_fixed_button_pane_g2

0xda43,	// (0x000347da) toolbar2_fixed_button_pane_g3

0xda4b,	// (0x000347e2) toolbar2_fixed_button_pane_g4

0xda53,	// (0x000347ea) toolbar2_fixed_button_pane_g5

0xda5b,	// (0x000347f2) toolbar2_fixed_button_pane_g6

0xda63,	// (0x000347fa) toolbar2_fixed_button_pane_g7

0xda6b,	// (0x00034802) toolbar2_fixed_button_pane_g8

0xda73,	// (0x0003480a) toolbar2_fixed_button_pane_g9

0x0008,

0xf898,	// (0x0003662f) toolbar2_fixed_button_pane_g

0x2ca1,	// (0x00029a38) cell_toolbar2_float_pane_ParamLimits

0x2ca1,	// (0x00029a38) cell_toolbar2_float_pane

0x2cb2,	// (0x00029a49) cell_toolbar2_float_pane_g1

0x2c99,	// (0x00029a30) toolbar2_fixed_button_pane_cp

0xb3df,	// (0x00032176) fep_vkb_accented_list_pane_ParamLimits

0xb3df,	// (0x00032176) fep_vkb_accented_list_pane

0x5cfb,	// (0x0002ca92) bg_popup_fep_shadow_pane_g9

0xd525,	// (0x000342bc) bg_popup_fep_shadow_pane_cp3

0xcca8,	// (0x00033a3f) list_accented_list_pane

0x2cbb,	// (0x00029a52) list_single_accented_list_pane_ParamLimits

0x2cbb,	// (0x00029a52) list_single_accented_list_pane

0xd525,	// (0x000342bc) list_highlight_pane_cp10

0x2ccc,	// (0x00029a63) list_single_accented_list_pane_t1

0xa602,	// (0x00031399) popup_slider_window_ParamLimits

0xa602,	// (0x00031399) popup_slider_window

0x2afc,	// (0x00029893) aid_indentation_list_msg

0xb938,	// (0x000326cf) bg_popup_window_pane_cp19

0x312c,	// (0x00029ec3) popup_slider_window_g1

0x3148,	// (0x00029edf) popup_slider_window_g2

0x3164,	// (0x00029efb) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x00036a92) popup_slider_window_g

0x3180,	// (0x00029f17) popup_slider_window_t1

0x31c4,	// (0x00029f5b) small_volume_slider_vertical_pane

0x0d4d,	// (0x00027ae4) small_volume_slider_vertical_pane_g1

0x0d4d,	// (0x00027ae4) small_volume_slider_vertical_pane_g2

0x31e0,	// (0x00029f77) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x00036aa4) small_volume_slider_vertical_pane_g

0x919b,	// (0x0002ff32) area_side_right_pane_ParamLimits

0x919b,	// (0x0002ff32) area_side_right_pane

0xb9f0,	// (0x00032787) aid_size_side_button_ParamLimits

0xb9f0,	// (0x00032787) aid_size_side_button

0xba09,	// (0x000327a0) grid_sctrl_middle_pane_ParamLimits

0xba09,	// (0x000327a0) grid_sctrl_middle_pane

0x62ae,	// (0x0002d045) sctrl_sk_bottom_pane

0x62bf,	// (0x0002d056) sctrl_sk_top_pane

0x62d1,	// (0x0002d068) aid_touch_sctrl_top

0x97b6,	// (0x0003054d) bg_sctrl_sk_pane_ParamLimits

0x97b6,	// (0x0003054d) bg_sctrl_sk_pane

0x62de,	// (0x0002d075) sctrl_sk_top_pane_g1

0x62eb,	// (0x0002d082) sctrl_sk_top_pane_t1

0x62d1,	// (0x0002d068) aid_touch_sctrl_bottom

0x97b6,	// (0x0003054d) bg_sctrl_sk_pane_cp_ParamLimits

0x97b6,	// (0x0003054d) bg_sctrl_sk_pane_cp

0x6306,	// (0x0002d09d) sctrl_sk_bottom_pane_g1

0x62eb,	// (0x0002d082) sctrl_sk_bottom_pane_t1

0xba1f,	// (0x000327b6) cell_sctrl_middle_pane_ParamLimits

0xba1f,	// (0x000327b6) cell_sctrl_middle_pane

0xba30,	// (0x000327c7) aid_touch_sctrl_middle_ParamLimits

0xba30,	// (0x000327c7) aid_touch_sctrl_middle

0xba3d,	// (0x000327d4) bg_sctrl_middle_pane_ParamLimits

0xba3d,	// (0x000327d4) bg_sctrl_middle_pane

0x31fb,	// (0x00029f92) cell_sctrl_middle_pane_g1_ParamLimits

0x31fb,	// (0x00029f92) cell_sctrl_middle_pane_g1

0xba4b,	// (0x000327e2) cell_sctrl_middle_pane_g2_ParamLimits

0xba4b,	// (0x000327e2) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x00036ab0) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x00036ab0) cell_sctrl_middle_pane_g

0xda33,	// (0x000347ca) bg_sctrl_middle_pane_g1

0xda3b,	// (0x000347d2) bg_sctrl_middle_pane_g2

0xda43,	// (0x000347da) bg_sctrl_middle_pane_g3

0xda4b,	// (0x000347e2) bg_sctrl_middle_pane_g4

0xda53,	// (0x000347ea) bg_sctrl_middle_pane_g5

0xda5b,	// (0x000347f2) bg_sctrl_middle_pane_g6

0xda63,	// (0x000347fa) bg_sctrl_middle_pane_g7

0xda6b,	// (0x00034802) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x00036ab5) bg_sctrl_middle_pane_g

0xda73,	// (0x0003480a) bg_sctrl_middle_pane_g8_copy1

0xda33,	// (0x000347ca) bg_sctrl_sk_pane_g1

0xda3b,	// (0x000347d2) bg_sctrl_sk_pane_g2

0xda43,	// (0x000347da) bg_sctrl_sk_pane_g3

0x0008,

0xf898,	// (0x0003662f) bg_sctrl_sk_pane_g

0x9c0c,	// (0x000309a3) aid_size_touch_scroll_bar

0xda4b,	// (0x000347e2) bg_sctrl_sk_pane_g4

0xda53,	// (0x000347ea) bg_sctrl_sk_pane_g5

0xda5b,	// (0x000347f2) bg_sctrl_sk_pane_g6

0xda63,	// (0x000347fa) bg_sctrl_sk_pane_g7

0xda6b,	// (0x00034802) bg_sctrl_sk_pane_g8

0xda73,	// (0x0003480a) bg_sctrl_sk_pane_g9

0xd7a9,	// (0x00034540) popup_fep_china_hwr2_fs_candidate_window

0xa1fd,	// (0x00030f94) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa1fd,	// (0x00030f94) popup_fep_china_hwr2_fs_control_window

0x0f95,	// (0x00027d2c) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x00036aab) sctrl_sk_top_pane_g

0xba58,	// (0x000327ef) aid_fep_china_hwr2_fs_cell_ParamLimits

0xba58,	// (0x000327ef) aid_fep_china_hwr2_fs_cell

0xba6c,	// (0x00032803) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xba6c,	// (0x00032803) bg_popup_fep_shadow_pane_cp4

0xba83,	// (0x0003281a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xba83,	// (0x0003281a) bg_popup_fep_shadow_pane_cp5

0xba95,	// (0x0003282c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xba95,	// (0x0003282c) popup_fep_china_hwr2_fs_control_bar_grid

0xbaa9,	// (0x00032840) popup_fep_china_hwr2_fs_control_funtion_grid

0x31e9,	// (0x00029f80) aid_fep_china_hwr2_fs_candi_cell

0x90fe,	// (0x0002fe95) bg_popup_fep_shadow_pane_cp6

0x31f3,	// (0x00029f8a) popup_fep_china_hwr2_fs_candidate_grid

0xbab1,	// (0x00032848) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xbab1,	// (0x00032848) cell_fep_china_hwr2_fs_funtion_grid

0x0d4d,	// (0x00027ae4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x31fb,	// (0x00029f92) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x31fb,	// (0x00029f92) cell_fep_china_hwr2_fs_funtion_grid_g1

0x3209,	// (0x00029fa0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x3209,	// (0x00029fa0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x00036ac6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x00036ac6) cell_fep_china_hwr2_fs_funtion_grid_g

0xbac9,	// (0x00032860) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xbac9,	// (0x00032860) cell_fep_china_hwr2_fs_funtion_grid_t1

0xbade,	// (0x00032875) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xbade,	// (0x00032875) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x00036acb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x00036acb) cell_fep_china_hwr2_fs_funtion_grid_t

0x321f,	// (0x00029fb6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x3227,	// (0x00029fbe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x322f,	// (0x00029fc6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x00036ad0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x3237,	// (0x00029fce) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x3237,	// (0x00029fce) cell_fep_china_hwr2_fs_candidate_grid

0x3250,	// (0x00029fe7) popup_fep_china_hwr2_fs_candidate_grid_g20

0x3258,	// (0x00029fef) popup_fep_china_hwr2_fs_candidate_grid_g21

0x0d4d,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x0d4d,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x000368f7) cell_fep_china_hwr2_fs_candidate_grid_g

0x3260,	// (0x00029ff7) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd898,	// (0x0003462f) clock_nsta_pane_cp_24_ParamLimits

0xd898,	// (0x0003462f) clock_nsta_pane_cp_24

0xd8f5,	// (0x0003468c) indicator_nsta_pane_cp_24_ParamLimits

0xd8f5,	// (0x0003468c) indicator_nsta_pane_cp_24

0xe714,	// (0x000354ab) heading_pane_g1

0x0001,

0xf8fd,	// (0x00036694) heading_pane_g

0xb10e,	// (0x00031ea5) grid_sct_catagory_button_pane

0xdf0f,	// (0x00034ca6) scroll_pane_cp5_ParamLimits

0x09fa,	// (0x00027791) button_value_adjust_pane_cp5_ParamLimits

0x09fa,	// (0x00027791) button_value_adjust_pane_cp5

0x0ad7,	// (0x0002786e) form2_midp_time_pane_ParamLimits

0x326e,	// (0x0002a005) cell_sct_catagory_button_pane_ParamLimits

0x326e,	// (0x0002a005) cell_sct_catagory_button_pane

0x0d12,	// (0x00027aa9) bg_button_pane_cp01_ParamLimits

0x0d12,	// (0x00027aa9) bg_button_pane_cp01

0x0d4d,	// (0x00027ae4) cell_sct_catagory_button_pane_g1

0xa671,	// (0x00031408) popup_tb_extension_window

0xbafa,	// (0x00032891) aid_size_cell_ext_ParamLimits

0xbafa,	// (0x00032891) aid_size_cell_ext

0x9aea,	// (0x00030881) bg_tb_trans_pane_cp1_ParamLimits

0x9aea,	// (0x00030881) bg_tb_trans_pane_cp1

0xbb20,	// (0x000328b7) grid_tb_ext_pane_ParamLimits

0xbb20,	// (0x000328b7) grid_tb_ext_pane

0xbb56,	// (0x000328ed) cell_tb_ext_pane_ParamLimits

0xbb56,	// (0x000328ed) cell_tb_ext_pane

0xbb7a,	// (0x00032911) cell_tb_ext_pane_g1_ParamLimits

0xbb7a,	// (0x00032911) cell_tb_ext_pane_g1

0x3280,	// (0x0002a017) cell_tb_ext_pane_t1

0x97b6,	// (0x0003054d) list_highlight_pane_cp11_ParamLimits

0x97b6,	// (0x0003054d) list_highlight_pane_cp11

0x4f25,	// (0x0002bcbc) popup_uni_indicator_window_ParamLimits

0x4f25,	// (0x0002bcbc) popup_uni_indicator_window

0xcb7e,	// (0x00033915) bg_popup_sub_pane_cp14

0x329b,	// (0x0002a032) list_uniindi_pane

0x32a7,	// (0x0002a03e) uniindi_top_pane

0x97b6,	// (0x0003054d) bg_uniindi_top_pane

0x32c6,	// (0x0002a05d) uniindi_top_pane_g1

0x32dc,	// (0x0002a073) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x00036ad7) uniindi_top_pane_g

0x3306,	// (0x0002a09d) uniindi_top_pane_t1

0x3330,	// (0x0002a0c7) list_single_uniindi_pane_ParamLimits

0x3330,	// (0x0002a0c7) list_single_uniindi_pane

0x0d4d,	// (0x00027ae4) bg_uniindi_top_pane_g1

0x3342,	// (0x0002a0d9) list_single_uniindi_pane_g1

0x3355,	// (0x0002a0ec) list_single_uniindi_pane_t1

0x90fe,	// (0x0002fe95) control_bg_pane

0x337a,	// (0x0002a111) bg_sctrl_sk_pane_cp1

0x3383,	// (0x0002a11a) bg_sctrl_sk_pane_cp2

0x338c,	// (0x0002a123) control_bg_pane_g1

0x3395,	// (0x0002a12c) control_bg_pane_g2

0x0001,

0xfd49,	// (0x00036ae0) control_bg_pane_g

0xf4b6,	// (0x0003624d) cell_indicator_nsta_pane_g1_ParamLimits

0xb219,	// (0x00031fb0) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x00036868) cell_indicator_nsta_pane_g_ParamLimits

0x4a8d,	// (0x0002b824) form2_midp_time_pane_t1_ParamLimits

0x0ea0,	// (0x00027c37) main_idle_act4_pane_ParamLimits

0x0ea0,	// (0x00027c37) main_idle_act4_pane

0xa671,	// (0x00031408) popup_tb_extension_window_ParamLimits

0xbb40,	// (0x000328d7) tb_ext_find_pane_ParamLimits

0xbb40,	// (0x000328d7) tb_ext_find_pane

0x339e,	// (0x0002a135) ai_gene_pane_1_cp1

0xd5b9,	// (0x00034350) ai_gene_pane_2_cp1

0x33a6,	// (0x0002a13d) list_single_idle_plugin_calendar_pane

0x33af,	// (0x0002a146) list_single_idle_plugin_notification_pane

0x33b8,	// (0x0002a14f) list_single_idle_plugin_player_pane

0xbb97,	// (0x0003292e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xbb97,	// (0x0003292e) list_single_idle_plugin_shortcut_pane

0xbbbf,	// (0x00032956) main_idle_act4_pane_t1

0xbbd5,	// (0x0003296c) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x00036ae5) main_idle_act4_pane_t

0xbbeb,	// (0x00032982) middle_sk_idle_act4_pane_ParamLimits

0xbbeb,	// (0x00032982) middle_sk_idle_act4_pane

0xbc07,	// (0x0003299e) popup_clock_digital_analogue_window_cp2

0xbc2d,	// (0x000329c4) shortcut_wheel_idle_act4_pane_ParamLimits

0xbc2d,	// (0x000329c4) shortcut_wheel_idle_act4_pane

0x0d4d,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g1

0x0d4d,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g2

0x0d4d,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g3

0x0d4d,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g4

0x0d4d,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g5

0x33c1,	// (0x0002a158) shortcut_wheel_idle_act4_pane_g6

0x33c9,	// (0x0002a160) shortcut_wheel_idle_act4_pane_g7

0x33d1,	// (0x0002a168) shortcut_wheel_idle_act4_pane_g8

0x33d9,	// (0x0002a170) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x00036aea) shortcut_wheel_idle_act4_pane_g

0x2d42,	// (0x00029ad9) middle_sk_idle_act4_pane_g1_ParamLimits

0x2d42,	// (0x00029ad9) middle_sk_idle_act4_pane_g1

0xbca8,	// (0x00032a3f) middle_sk_idle_act4_pane_g2_ParamLimits

0xbca8,	// (0x00032a3f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x00036b0d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x00036b0d) middle_sk_idle_act4_pane_g

0xbcc0,	// (0x00032a57) middle_sk_idle_act4_pane_t1_ParamLimits

0xbcc0,	// (0x00032a57) middle_sk_idle_act4_pane_t1

0xbcef,	// (0x00032a86) grid_ai_shortcut_pane_ParamLimits

0xbcef,	// (0x00032a86) grid_ai_shortcut_pane

0xbd0c,	// (0x00032aa3) list_highlight_pane_cp16_ParamLimits

0xbd0c,	// (0x00032aa3) list_highlight_pane_cp16

0xbd19,	// (0x00032ab0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xbd19,	// (0x00032ab0) list_single_idle_plugin_shortcut_pane_g1

0xbd25,	// (0x00032abc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xbd25,	// (0x00032abc) list_single_idle_plugin_shortcut_pane_g2

0xbd41,	// (0x00032ad8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xbd41,	// (0x00032ad8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x00036b12) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x00036b12) list_single_idle_plugin_shortcut_pane_g

0xbd56,	// (0x00032aed) cell_ai_shortcut_pane_ParamLimits

0xbd56,	// (0x00032aed) cell_ai_shortcut_pane

0xbd6c,	// (0x00032b03) cell_ai_shortcut_pane_g1_ParamLimits

0xbd6c,	// (0x00032b03) cell_ai_shortcut_pane_g1

0x339e,	// (0x0002a135) ai_gene_pane_1_cp2

0x33e1,	// (0x0002a178) ai_gene_pane_2_cp2

0x33e9,	// (0x0002a180) list_highlight_pane_cp15

0x33f2,	// (0x0002a189) list_single_idle_plugin_calendar_pane_g1

0x33e9,	// (0x0002a180) list_highlight_pane_cp17

0x33fa,	// (0x0002a191) list_single_idle_plugin_calendar_pane_g1_copy1

0x3402,	// (0x0002a199) list_single_idle_plugin_player_pane_g1

0xef76,	// (0x00035d0d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x00036b19) list_single_idle_plugin_player_pane_g

0x340a,	// (0x0002a1a1) list_single_idle_plugin_player_pane_t1

0x3418,	// (0x0002a1af) list_single_idle_plugin_player_pane_t2

0x3426,	// (0x0002a1bd) list_single_idle_plugin_player_pane_t3

0x3434,	// (0x0002a1cb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x00036b1e) list_single_idle_plugin_player_pane_t

0x3442,	// (0x0002a1d9) wait_bar_pane_cp15

0x344a,	// (0x0002a1e1) grid_ai_notification_pane

0xef76,	// (0x00035d0d) list_single_idle_plugin_notification_pane_g1

0xbd8e,	// (0x00032b25) cell_ai_notification_pane_ParamLimits

0xbd8e,	// (0x00032b25) cell_ai_notification_pane

0x3453,	// (0x0002a1ea) cell_ai_notification_pane_g1

0x345b,	// (0x0002a1f2) cell_ai_notification_pane_t1

0xbd9b,	// (0x00032b32) tb_ext_find_button_pane

0xbda3,	// (0x00032b3a) tb_ext_find_pane_g1

0xbdab,	// (0x00032b42) tb_ext_find_pane_t1

0xd098,	// (0x00033e2f) tb_ext_find_button_pane_g1

0x3469,	// (0x0002a200) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x00036b27) tb_ext_find_button_pane_g

0xbbbf,	// (0x00032956) main_idle_act4_pane_t1_ParamLimits

0xbbd5,	// (0x0003296c) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x00036ae5) main_idle_act4_pane_t_ParamLimits

0xbc07,	// (0x0003299e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xbc1d,	// (0x000329b4) sat_plugin_idle_act4_pane_ParamLimits

0xbc1d,	// (0x000329b4) sat_plugin_idle_act4_pane

0xbdb9,	// (0x00032b50) sat_plugin_idle_act4_pane_t1_ParamLimits

0xbdb9,	// (0x00032b50) sat_plugin_idle_act4_pane_t1

0xbdd1,	// (0x00032b68) sat_plugin_idle_act4_pane_t2_ParamLimits

0xbdd1,	// (0x00032b68) sat_plugin_idle_act4_pane_t2

0xbde9,	// (0x00032b80) sat_plugin_idle_act4_pane_t3_ParamLimits

0xbde9,	// (0x00032b80) sat_plugin_idle_act4_pane_t3

0xbe01,	// (0x00032b98) sat_plugin_idle_act4_pane_t4_ParamLimits

0xbe01,	// (0x00032b98) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x00036b2c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x00036b2c) sat_plugin_idle_act4_pane_t

0x4e86,	// (0x0002bc1d) popup_battery_window_ParamLimits

0x4e86,	// (0x0002bc1d) popup_battery_window

0x97b6,	// (0x0003054d) bg_popup_sub_pane_cp25_ParamLimits

0x97b6,	// (0x0003054d) bg_popup_sub_pane_cp25

0x3472,	// (0x0002a209) popup_battery_window_g1_ParamLimits

0x3472,	// (0x0002a209) popup_battery_window_g1

0x347e,	// (0x0002a215) popup_battery_window_t1_ParamLimits

0x347e,	// (0x0002a215) popup_battery_window_t1

0x3490,	// (0x0002a227) popup_battery_window_t2_ParamLimits

0x3490,	// (0x0002a227) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x00036b35) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x00036b35) popup_battery_window_t

0x9f71,	// (0x00030d08) midp_canvas_pane_ParamLimits

0x9fc6,	// (0x00030d5d) midp_keypad_pane_ParamLimits

0x9fc6,	// (0x00030d5d) midp_keypad_pane

0xccfa,	// (0x00033a91) main_midp_pane_ParamLimits

0xf560,	// (0x000362f7) signal_pane_g2_cp_ParamLimits

0xbe19,	// (0x00032bb0) aid_size_cell_midp_keypad_ParamLimits

0xbe19,	// (0x00032bb0) aid_size_cell_midp_keypad

0xbe37,	// (0x00032bce) midp_keyp_game_grid_pane_ParamLimits

0xbe37,	// (0x00032bce) midp_keyp_game_grid_pane

0xbe56,	// (0x00032bed) midp_keyp_rocker_pane_ParamLimits

0xbe56,	// (0x00032bed) midp_keyp_rocker_pane

0xbe97,	// (0x00032c2e) midp_keyp_sk_left_pane_ParamLimits

0xbe97,	// (0x00032c2e) midp_keyp_sk_left_pane

0xbee9,	// (0x00032c80) midp_keyp_sk_right_pane_ParamLimits

0xbee9,	// (0x00032c80) midp_keyp_sk_right_pane

0x90fe,	// (0x0002fe95) bg_button_pane_cp03

0xbf35,	// (0x00032ccc) midp_keyp_sk_left_pane_g1

0x90fe,	// (0x0002fe95) bg_button_pane_cp04

0xbf35,	// (0x00032ccc) midp_keyp_sk_right_pane_g1

0x0d4d,	// (0x00027ae4) midp_keyp_rocker_pane_g1

0xbf3e,	// (0x00032cd5) keyp_game_cell_pane_ParamLimits

0xbf3e,	// (0x00032cd5) keyp_game_cell_pane

0x90fe,	// (0x0002fe95) bg_button_pane_cp02

0xbf60,	// (0x00032cf7) keyp_game_cell_pane_g1

0x925f,	// (0x0002fff6) popup_fep_vkb2_window_ParamLimits

0x925f,	// (0x0002fff6) popup_fep_vkb2_window

0xbf69,	// (0x00032d00) aid_size_cell_vkb2_ParamLimits

0xbf69,	// (0x00032d00) aid_size_cell_vkb2

0xbf9f,	// (0x00032d36) popup_fep_vkb2_window_g1_ParamLimits

0xbf9f,	// (0x00032d36) popup_fep_vkb2_window_g1

0xbfef,	// (0x00032d86) vkb2_area_bottom_pane_ParamLimits

0xbfef,	// (0x00032d86) vkb2_area_bottom_pane

0xc02d,	// (0x00032dc4) vkb2_area_keypad_pane_ParamLimits

0xc02d,	// (0x00032dc4) vkb2_area_keypad_pane

0xc06b,	// (0x00032e02) vkb2_area_top_pane_ParamLimits

0xc06b,	// (0x00032e02) vkb2_area_top_pane

0xc0e7,	// (0x00032e7e) vkb2_top_entry_pane_ParamLimits

0xc0e7,	// (0x00032e7e) vkb2_top_entry_pane

0xc114,	// (0x00032eab) vkb2_top_grid_left_pane_ParamLimits

0xc114,	// (0x00032eab) vkb2_top_grid_left_pane

0xc134,	// (0x00032ecb) vkb2_top_grid_right_pane_ParamLimits

0xc134,	// (0x00032ecb) vkb2_top_grid_right_pane

0x69a8,	// (0x0002d73f) vkb2_cell_keypad_pane_ParamLimits

0x69a8,	// (0x0002d73f) vkb2_cell_keypad_pane

0xc17a,	// (0x00032f11) vkb2_area_bottom_grid_pane_ParamLimits

0xc17a,	// (0x00032f11) vkb2_area_bottom_grid_pane

0xc1a0,	// (0x00032f37) vkb2_area_bottom_pane_g1_ParamLimits

0xc1a0,	// (0x00032f37) vkb2_area_bottom_pane_g1

0xc1c6,	// (0x00032f5d) vkb2_area_bottom_pane_g2_ParamLimits

0xc1c6,	// (0x00032f5d) vkb2_area_bottom_pane_g2

0xc1f7,	// (0x00032f8e) vkb2_area_bottom_pane_g3_ParamLimits

0xc1f7,	// (0x00032f8e) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x00036b3a) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x00036b3a) vkb2_area_bottom_pane_g

0x6b20,	// (0x0002d8b7) vkb2_top_cell_left_pane_ParamLimits

0x6b20,	// (0x0002d8b7) vkb2_top_cell_left_pane

0xc24d,	// (0x00032fe4) vkb2_top_entry_pane_g1_ParamLimits

0xc24d,	// (0x00032fe4) vkb2_top_entry_pane_g1

0xc25b,	// (0x00032ff2) vkb2_top_entry_pane_t1_ParamLimits

0xc25b,	// (0x00032ff2) vkb2_top_entry_pane_t1

0x34b5,	// (0x0002a24c) vkb2_top_entry_pane_t2_ParamLimits

0x34b5,	// (0x0002a24c) vkb2_top_entry_pane_t2

0x34e7,	// (0x0002a27e) vkb2_top_entry_pane_t3_ParamLimits

0x34e7,	// (0x0002a27e) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x00036b41) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x00036b41) vkb2_top_entry_pane_t

0xc294,	// (0x0003302b) vkb2_top_grid_right_pane_g1_ParamLimits

0xc294,	// (0x0003302b) vkb2_top_grid_right_pane_g1

0x6bc3,	// (0x0002d95a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bc3,	// (0x0002d95a) vkb2_top_grid_right_pane_g2

0x6bdb,	// (0x0002d972) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bdb,	// (0x0002d972) vkb2_top_grid_right_pane_g3

0xc2aa,	// (0x00033041) vkb2_top_grid_right_pane_g4_ParamLimits

0xc2aa,	// (0x00033041) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x00036b48) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x00036b48) vkb2_top_grid_right_pane_g

0x6c09,	// (0x0002d9a0) vkb2_top_cell_left_pane_g1

0x6c20,	// (0x0002d9b7) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c20,	// (0x0002d9b7) vkb2_cell_keypad_pane_g1

0x34fd,	// (0x0002a294) vkb2_cell_keypad_pane_t1_ParamLimits

0x34fd,	// (0x0002a294) vkb2_cell_keypad_pane_t1

0x6c2e,	// (0x0002d9c5) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c2e,	// (0x0002d9c5) vkb2_cell_bottom_grid_pane

0x6c67,	// (0x0002d9fe) vkb2_cell_bottom_grid_pane_g1

0xbc4c,	// (0x000329e3) aid_call2_pane_cp02

0xbc54,	// (0x000329eb) aid_call_pane_cp02

0xbc5c,	// (0x000329f3) clock_digital_number_pane_cp10

0xbc64,	// (0x000329fb) clock_digital_number_pane_cp11

0xbc6c,	// (0x00032a03) clock_digital_number_pane_cp12

0xbc74,	// (0x00032a0b) clock_digital_number_pane_cp13

0xbc7c,	// (0x00032a13) clock_digital_separator_pane_cp10

0xd098,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g1

0xd098,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g2

0xbc84,	// (0x00032a1b) popup_clock_digital_analogue_window_cp2_g3

0xd098,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g4

0xbc84,	// (0x00032a1b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x00036afd) popup_clock_digital_analogue_window_cp2_g

0xbc8c,	// (0x00032a23) popup_clock_digital_analogue_window_cp2_t1

0xbc9a,	// (0x00032a31) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x00036b08) popup_clock_digital_analogue_window_cp2_t

0x0d4d,	// (0x00027ae4) clock_digital_number_pane_cp10_g1

0x0d4d,	// (0x00027ae4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x000368f7) clock_digital_number_pane_cp10_g

0x0d4d,	// (0x00027ae4) clock_digital_separator_pane_cp10_g1

0x0d4d,	// (0x00027ae4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x000368f7) clock_digital_separator_pane_cp10_g

0x32e8,	// (0x0002a07f) uniindi_top_pane_g3

0x32f9,	// (0x0002a090) uniindi_top_pane_g4

0x6a13,	// (0x0002d7aa) vkb2_row_keypad_pane_ParamLimits

0x6a13,	// (0x0002d7aa) vkb2_row_keypad_pane

0x6c83,	// (0x0002da1a) vkb2_cell_t_keypad_pane_ParamLimits

0x6c83,	// (0x0002da1a) vkb2_cell_t_keypad_pane

0x6c90,	// (0x0002da27) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6c90,	// (0x0002da27) vkb2_cell_t_keypad_pane_cp08

0x6ca0,	// (0x0002da37) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ca0,	// (0x0002da37) vkb2_cell_t_keypad_pane_cp09

0x6cb1,	// (0x0002da48) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6cb1,	// (0x0002da48) vkb2_cell_t_keypad_pane_cp01

0x6cc1,	// (0x0002da58) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6cc1,	// (0x0002da58) vkb2_cell_t_keypad_pane_cp02

0x6cd1,	// (0x0002da68) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cd1,	// (0x0002da68) vkb2_cell_t_keypad_pane_cp03

0x6ce1,	// (0x0002da78) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6ce1,	// (0x0002da78) vkb2_cell_t_keypad_pane_cp04

0x6cf1,	// (0x0002da88) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6cf1,	// (0x0002da88) vkb2_cell_t_keypad_pane_cp05

0x6d01,	// (0x0002da98) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d01,	// (0x0002da98) vkb2_cell_t_keypad_pane_cp06

0x6d11,	// (0x0002daa8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d11,	// (0x0002daa8) vkb2_cell_t_keypad_pane_cp07

0x6d21,	// (0x0002dab8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d21,	// (0x0002dab8) vkb2_cell_t_keypad_pane_cp10

0x0f95,	// (0x00027d2c) vkb2_cell_t_keypad_pane_g1

0x3514,	// (0x0002a2ab) vkb2_cell_t_keypad_pane_t1

0x90fe,	// (0x0002fe95) popup_grid_graphic2_window

0xc2c0,	// (0x00033057) aid_size_cell_graphic2_ParamLimits

0xc2c0,	// (0x00033057) aid_size_cell_graphic2

0xe120,	// (0x00034eb7) bg_popup_window_pane_cp21_ParamLimits

0xe120,	// (0x00034eb7) bg_popup_window_pane_cp21

0xc2f2,	// (0x00033089) graphic2_pages_pane_ParamLimits

0xc2f2,	// (0x00033089) graphic2_pages_pane

0xc33b,	// (0x000330d2) grid_graphic2_control_pane_ParamLimits

0xc33b,	// (0x000330d2) grid_graphic2_control_pane

0xc369,	// (0x00033100) grid_graphic2_pane_ParamLimits

0xc369,	// (0x00033100) grid_graphic2_pane

0xc3c8,	// (0x0003315f) cell_graphic2_pane

0x90fe,	// (0x0002fe95) main_comp_mode_pane

0x2b6a,	// (0x00029901) list_ai3_gene_pane_ParamLimits

0xb938,	// (0x000326cf) bg_popup_window_pane_cp19_ParamLimits

0x30d4,	// (0x00029e6b) bg_touch_area_indi_pane_ParamLimits

0x30d4,	// (0x00029e6b) bg_touch_area_indi_pane

0x30ea,	// (0x00029e81) bg_touch_area_indi_pane_cp01_ParamLimits

0x30ea,	// (0x00029e81) bg_touch_area_indi_pane_cp01

0x3100,	// (0x00029e97) bg_touch_area_indi_pane_cp02_ParamLimits

0x3100,	// (0x00029e97) bg_touch_area_indi_pane_cp02

0x3116,	// (0x00029ead) bg_touch_area_indi_pane_cp03_ParamLimits

0x3116,	// (0x00029ead) bg_touch_area_indi_pane_cp03

0x312c,	// (0x00029ec3) popup_slider_window_g1_ParamLimits

0x3148,	// (0x00029edf) popup_slider_window_g2_ParamLimits

0x3164,	// (0x00029efb) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x00036a92) popup_slider_window_g_ParamLimits

0x3180,	// (0x00029f17) popup_slider_window_t1_ParamLimits

0x31c4,	// (0x00029f5b) small_volume_slider_vertical_pane_ParamLimits

0xc3c8,	// (0x0003315f) cell_graphic2_pane_ParamLimits

0xc411,	// (0x000331a8) bg_button_pane_cp10_ParamLimits

0xc411,	// (0x000331a8) bg_button_pane_cp10

0xc422,	// (0x000331b9) bg_button_pane_cp11_ParamLimits

0xc422,	// (0x000331b9) bg_button_pane_cp11

0xc433,	// (0x000331ca) graphic2_pages_pane_g1_ParamLimits

0xc433,	// (0x000331ca) graphic2_pages_pane_g1

0xc44e,	// (0x000331e5) graphic2_pages_pane_g2_ParamLimits

0xc44e,	// (0x000331e5) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x00036b56) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x00036b56) graphic2_pages_pane_g

0xc466,	// (0x000331fd) graphic2_pages_pane_t1_ParamLimits

0xc466,	// (0x000331fd) graphic2_pages_pane_t1

0xc47e,	// (0x00033215) cell_graphic2_control_pane_ParamLimits

0xc47e,	// (0x00033215) cell_graphic2_control_pane

0xc498,	// (0x0003322f) cell_graphic2_pane_g1_ParamLimits

0xc498,	// (0x0003322f) cell_graphic2_pane_g1

0x3060,	// (0x00029df7) cell_graphic2_pane_g2_ParamLimits

0x3060,	// (0x00029df7) cell_graphic2_pane_g2

0xc4a5,	// (0x0003323c) cell_graphic2_pane_g3_ParamLimits

0xc4a5,	// (0x0003323c) cell_graphic2_pane_g3

0x306d,	// (0x00029e04) cell_graphic2_pane_g4_ParamLimits

0x306d,	// (0x00029e04) cell_graphic2_pane_g4

0xc4b2,	// (0x00033249) cell_graphic2_pane_g5_ParamLimits

0xc4b2,	// (0x00033249) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x00036b5b) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x00036b5b) cell_graphic2_pane_g

0xc4d2,	// (0x00033269) cell_graphic2_pane_t1_ParamLimits

0xc4d2,	// (0x00033269) cell_graphic2_pane_t1

0xe708,	// (0x0003549f) grid_highlight_pane_cp11_ParamLimits

0xe708,	// (0x0003549f) grid_highlight_pane_cp11

0xcb7e,	// (0x00033915) bg_button_pane_cp05

0xc4e9,	// (0x00033280) cell_graphic2_control_pane_g1

0x0d4d,	// (0x00027ae4) bg_touch_area_indi_pane_g1

0x3526,	// (0x0002a2bd) aid_cmod_rocker_key_size

0x3530,	// (0x0002a2c7) aid_cmode_itu_key_size

0x353a,	// (0x0002a2d1) main_cmode_video_pane

0x3542,	// (0x0002a2d9) main_comp_mode_itu_pane

0x354c,	// (0x0002a2e3) main_comp_mode_rocker_pane

0x3554,	// (0x0002a2eb) cell_cmode_rocker_pane_ParamLimits

0x3554,	// (0x0002a2eb) cell_cmode_rocker_pane

0x3566,	// (0x0002a2fd) cell_cmode_itu_pane_ParamLimits

0x3566,	// (0x0002a2fd) cell_cmode_itu_pane

0xcb7e,	// (0x00033915) bg_button_pane_cp06_ParamLimits

0xcb7e,	// (0x00033915) bg_button_pane_cp06

0x0f95,	// (0x00027d2c) cell_cmode_rocker_pane_g1_ParamLimits

0x0f95,	// (0x00027d2c) cell_cmode_rocker_pane_g1

0x31fb,	// (0x00029f92) cell_cmode_rocker_pane_g2_ParamLimits

0x31fb,	// (0x00029f92) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00036b66) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00036b66) cell_cmode_rocker_pane_g

0x90fe,	// (0x0002fe95) bg_button_pane_cp07

0x357b,	// (0x0002a312) cell_cmode_itu_pane_g1

0x3584,	// (0x0002a31b) cell_cmode_itu_pane_t1

0x3592,	// (0x0002a329) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00036b6b) cell_cmode_itu_pane_t

0x336a,	// (0x0002a101) aid_touch_ctrl_left

0x3372,	// (0x0002a109) aid_touch_ctrl_right

0x90fe,	// (0x0002fe95) compa_mode_pane

0xc4f6,	// (0x0003328d) aid_cmod_rocker_key_size_cp

0xc500,	// (0x00033297) aid_cmode_itu_key_size_cp

0x35a0,	// (0x0002a337) compa_mode_pane_g1

0x35a8,	// (0x0002a33f) compa_mode_pane_g2

0x35b0,	// (0x0002a347) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00036b70) compa_mode_pane_g

0xc50a,	// (0x000332a1) main_comp_mode_itu_pane_cp

0xc514,	// (0x000332ab) main_comp_mode_rocker_pane_cp

0xc51e,	// (0x000332b5) cell_cmode_itu_pane_cp_ParamLimits

0xc51e,	// (0x000332b5) cell_cmode_itu_pane_cp

0xc533,	// (0x000332ca) cell_cmode_rocker_pane_cp_ParamLimits

0xc533,	// (0x000332ca) cell_cmode_rocker_pane_cp

0xcb7e,	// (0x00033915) bg_button_pane_cp06_cp_ParamLimits

0xcb7e,	// (0x00033915) bg_button_pane_cp06_cp

0x0f95,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x0f95,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp

0x0d4d,	// (0x00027ae4) cell_cmode_rocker_pane_g2_cp

0x90fe,	// (0x0002fe95) bg_button_pane_cp07_cp

0xc545,	// (0x000332dc) cell_cmode_itu_pane_g1_cp

0xc54e,	// (0x000332e5) cell_cmode_itu_pane_t1_cp

0xc55c,	// (0x000332f3) cell_cmode_itu_pane_t2_cp

0xb015,	// (0x00031dac) settings_code_pane_cp2

0x9461,	// (0x000301f8) bg_popup_window_pane_cp3_ParamLimits

0x998e,	// (0x00030725) heading_pane_cp3_ParamLimits

0x999a,	// (0x00030731) listscroll_popup_graphic_pane_ParamLimits

0x5af1,	// (0x0002c888) fep_hwr_aid_pane_ParamLimits

0x62d1,	// (0x0002d068) aid_touch_sctrl_top_ParamLimits

0x62de,	// (0x0002d075) sctrl_sk_top_pane_g1_ParamLimits

0x0f95,	// (0x00027d2c) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x00036aab) sctrl_sk_top_pane_g_ParamLimits

0x62eb,	// (0x0002d082) sctrl_sk_top_pane_t1_ParamLimits

0x62d1,	// (0x0002d068) aid_touch_sctrl_bottom_ParamLimits

0x62eb,	// (0x0002d082) sctrl_sk_bottom_pane_t1_ParamLimits

0x32b4,	// (0x0002a04b) aid_area_touch_clock

0xc0a9,	// (0x00032e40) aid_vkb2_area_top_pane_cell_ParamLimits

0xc0a9,	// (0x00032e40) aid_vkb2_area_top_pane_cell

0xc154,	// (0x00032eeb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc154,	// (0x00032eeb) aid_vkb2_area_bottom_pane_cell

0x34ad,	// (0x0002a244) popup_char_count_window

0x35b8,	// (0x0002a34f) popup_char_count_window_g1

0x35c1,	// (0x0002a358) popup_char_count_window_g2

0x35ca,	// (0x0002a361) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00036b77) popup_char_count_window_g

0x35d3,	// (0x0002a36a) popup_char_count_window_t1

0x67f8,	// (0x0002d58f) popup_fep_char_preview_window_ParamLimits

0x67f8,	// (0x0002d58f) popup_fep_char_preview_window

0xc0c9,	// (0x00032e60) vkb2_top_candi_pane_ParamLimits

0xc0c9,	// (0x00032e60) vkb2_top_candi_pane

0xc56a,	// (0x00033301) cell_vkb2_top_candi_pane_ParamLimits

0xc56a,	// (0x00033301) cell_vkb2_top_candi_pane

0xe120,	// (0x00034eb7) bg_popup_fep_char_preview_window_ParamLimits

0xe120,	// (0x00034eb7) bg_popup_fep_char_preview_window

0x6fe7,	// (0x0002dd7e) popup_fep_char_preview_window_t1_ParamLimits

0x6fe7,	// (0x0002dd7e) popup_fep_char_preview_window_t1

0x3612,	// (0x0002a3a9) bg_popup_fep_char_preview_window_g1

0x360a,	// (0x0002a3a1) bg_popup_fep_char_preview_window_g2

0x3602,	// (0x0002a399) bg_popup_fep_char_preview_window_g3

0x3632,	// (0x0002a3c9) bg_popup_fep_char_preview_window_g4

0x362a,	// (0x0002a3c1) bg_popup_fep_char_preview_window_g5

0x7021,	// (0x0002ddb8) bg_popup_fep_char_preview_window_g6

0x3622,	// (0x0002a3b9) bg_popup_fep_char_preview_window_g7

0x361a,	// (0x0002a3b1) bg_popup_fep_char_preview_window_g8

0x363a,	// (0x0002a3d1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00036b7e) bg_popup_fep_char_preview_window_g

0x0f95,	// (0x00027d2c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f95,	// (0x00027d2c) cell_vkb2_top_candi_pane_g1

0x12b7,	// (0x0002804e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x12b7,	// (0x0002804e) cell_vkb2_top_candi_pane_g2

0x12d8,	// (0x0002806f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x12d8,	// (0x0002806f) cell_vkb2_top_candi_pane_g3

0x7029,	// (0x0002ddc0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7029,	// (0x0002ddc0) cell_vkb2_top_candi_pane_g4

0x35e1,	// (0x0002a378) cell_vkb2_top_candi_pane_g5_ParamLimits

0x35e1,	// (0x0002a378) cell_vkb2_top_candi_pane_g5

0x31fb,	// (0x00029f92) cell_vkb2_top_candi_pane_g6_ParamLimits

0x31fb,	// (0x00029f92) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00036b91) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00036b91) cell_vkb2_top_candi_pane_g

0x704a,	// (0x0002dde1) cell_vkb2_top_candi_pane_t1

0xeddb,	// (0x00035b72) aid_size_touch_slider_mark_ParamLimits

0xeddb,	// (0x00035b72) aid_size_touch_slider_mark

0xc326,	// (0x000330bd) grid_graphic2_catg_pane_ParamLimits

0xc326,	// (0x000330bd) grid_graphic2_catg_pane

0xc39d,	// (0x00033134) popup_grid_graphic2_window_t1_ParamLimits

0xc39d,	// (0x00033134) popup_grid_graphic2_window_t1

0xc3b2,	// (0x00033149) popup_grid_graphic2_window_t2_ParamLimits

0xc3b2,	// (0x00033149) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x00036b51) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x00036b51) popup_grid_graphic2_window_t

0xcb7e,	// (0x00033915) bg_button_pane_cp05_ParamLimits

0xc4e9,	// (0x00033280) cell_graphic2_control_pane_g1_ParamLimits

0x3330,	// (0x0002a0c7) cell_graphic2_catg_pane_ParamLimits

0x3330,	// (0x0002a0c7) cell_graphic2_catg_pane

0x90fe,	// (0x0002fe95) bg_button_pane_cp12

0xc5b4,	// (0x0003334b) cell_graphic2_catg_pane_g1

0x3280,	// (0x0002a017) cell_tb_ext_pane_t1_ParamLimits

0x6b80,	// (0x0002d917) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b80,	// (0x0002d917) vkb2_top_cell_right_narrow_pane

0x6b98,	// (0x0002d92f) vkb2_top_cell_right_wide_pane_ParamLimits

0x6b98,	// (0x0002d92f) vkb2_top_cell_right_wide_pane

0x0ea0,	// (0x00027c37) bg_vkb2_func_pane_ParamLimits

0x0ea0,	// (0x00027c37) bg_vkb2_func_pane

0x6c09,	// (0x0002d9a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ea0,	// (0x00027c37) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ea0,	// (0x00027c37) bg_vkb2_fuc_pane_cp03

0x6c67,	// (0x0002d9fe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xda3b,	// (0x000347d2) bg_vkb2_func_pane_g1

0xda43,	// (0x000347da) bg_vkb2_func_pane_g2

0xda53,	// (0x000347ea) bg_vkb2_func_pane_g3

0xda4b,	// (0x000347e2) bg_vkb2_func_pane_g4

0xda5b,	// (0x000347f2) bg_vkb2_func_pane_g5

0xda63,	// (0x000347fa) bg_vkb2_func_pane_g6

0xda6b,	// (0x00034802) bg_vkb2_func_pane_g7

0xda73,	// (0x0003480a) bg_vkb2_func_pane_g8

0xda33,	// (0x000347ca) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00036b9e) bg_vkb2_func_pane_g

0x0ea0,	// (0x00027c37) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ea0,	// (0x00027c37) bg_vkb2_fuc_pane_cp01

0x6c09,	// (0x0002d9a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c09,	// (0x0002d9a0) vkb2_top_cell_right_wide_pane_g1

0x0ea0,	// (0x00027c37) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ea0,	// (0x00027c37) bg_vkb2_fuc_pane_cp02

0x6c67,	// (0x0002d9fe) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c67,	// (0x0002d9fe) vkb2_top_cell_right_narrow_pane_g1

0xb886,	// (0x0003261d) aid_touch_area_decrease_ParamLimits

0xb886,	// (0x0003261d) aid_touch_area_decrease

0xb8b4,	// (0x0003264b) aid_touch_area_increase_ParamLimits

0xb8b4,	// (0x0003264b) aid_touch_area_increase

0xb8dc,	// (0x00032673) aid_touch_area_mute_ParamLimits

0xb8dc,	// (0x00032673) aid_touch_area_mute

0xb904,	// (0x0003269b) aid_touch_area_slider_ParamLimits

0xb904,	// (0x0003269b) aid_touch_area_slider

0xb944,	// (0x000326db) popup_slider_window_g4_ParamLimits

0xb944,	// (0x000326db) popup_slider_window_g4

0xb96c,	// (0x00032703) popup_slider_window_g5_ParamLimits

0xb96c,	// (0x00032703) popup_slider_window_g5

0xb9a0,	// (0x00032737) popup_slider_window_g6_ParamLimits

0xb9a0,	// (0x00032737) popup_slider_window_g6

0x31ac,	// (0x00029f43) popup_slider_window_t2_ParamLimits

0x31ac,	// (0x00029f43) popup_slider_window_t2

0x0001,

0xfd08,	// (0x00036a9f) popup_slider_window_t_ParamLimits

0xfd08,	// (0x00036a9f) popup_slider_window_t

0xb9bc,	// (0x00032753) slider_pane_ParamLimits

0xb9bc,	// (0x00032753) slider_pane

0x3642,	// (0x0002a3d9) slider_pane_g1_ParamLimits

0x3642,	// (0x0002a3d9) slider_pane_g1

0x3656,	// (0x0002a3ed) slider_pane_g2_ParamLimits

0x3656,	// (0x0002a3ed) slider_pane_g2

0x366c,	// (0x0002a403) slider_pane_g3_ParamLimits

0x366c,	// (0x0002a403) slider_pane_g3

0x0003,

0xfe1a,	// (0x00036bb1) slider_pane_g_ParamLimits

0xfe1a,	// (0x00036bb1) slider_pane_g

0xa6ad,	// (0x00031444) popup_tb_float_extension_window_ParamLimits

0xa6ad,	// (0x00031444) popup_tb_float_extension_window

0x3698,	// (0x0002a42f) aid_size_cell_tb_float_ext

0x90fe,	// (0x0002fe95) bg_popup_sub_window_cp28

0x36a3,	// (0x0002a43a) grid_tb_float_ext_pane

0x36ab,	// (0x0002a442) cell_tb_float_ext_pane_ParamLimits

0x36ab,	// (0x0002a442) cell_tb_float_ext_pane

0x36c3,	// (0x0002a45a) cell_tb_float_ext_pane_g1

0x36cc,	// (0x0002a463) grid_highlight_pane_cp12

0xb3bd,	// (0x00032154) cell_last_hwr_side_pane_ParamLimits

0xb3bd,	// (0x00032154) cell_last_hwr_side_pane

0x0d4d,	// (0x00027ae4) cell_last_hwr_side_pane_g1

0x36d5,	// (0x0002a46c) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x00036bba) cell_last_hwr_side_pane_g

0xc228,	// (0x00032fbf) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc228,	// (0x00032fbf) vkb2_area_bottom_space_btn_pane

0x0f95,	// (0x00027d2c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x3514,	// (0x0002a2ab) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x704a,	// (0x0002dde1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x707b,	// (0x0002de12) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x707b,	// (0x0002de12) vkb2_area_bottom_space_btn_pane_g1

0x70b1,	// (0x0002de48) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x70b1,	// (0x0002de48) vkb2_area_bottom_space_btn_pane_g2

0x70e7,	// (0x0002de7e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70e7,	// (0x0002de7e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00036bbf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00036bbf) vkb2_area_bottom_space_btn_pane_g

0x5b92,	// (0x0002c929) cel_fep_hwr_func_pane_ParamLimits

0x5b92,	// (0x0002c929) cel_fep_hwr_func_pane

0xb392,	// (0x00032129) cell_hwr_side_button_pane_ParamLimits

0xb392,	// (0x00032129) cell_hwr_side_button_pane

0x32b4,	// (0x0002a04b) aid_area_touch_clock_ParamLimits

0x97b6,	// (0x0003054d) bg_uniindi_top_pane_ParamLimits

0x32c6,	// (0x0002a05d) uniindi_top_pane_g1_ParamLimits

0x32dc,	// (0x0002a073) uniindi_top_pane_g2_ParamLimits

0x32e8,	// (0x0002a07f) uniindi_top_pane_g3_ParamLimits

0x32f9,	// (0x0002a090) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x00036ad7) uniindi_top_pane_g_ParamLimits

0x3306,	// (0x0002a09d) uniindi_top_pane_t1_ParamLimits

0x97b6,	// (0x0003054d) bg_vkb2_func_pane_cp01_ParamLimits

0x97b6,	// (0x0003054d) bg_vkb2_func_pane_cp01

0x712d,	// (0x0002dec4) cel_fep_hwr_func_pane_g1_ParamLimits

0x712d,	// (0x0002dec4) cel_fep_hwr_func_pane_g1

0x97b6,	// (0x0003054d) bg_vkb2_func_pane_cp02_ParamLimits

0x97b6,	// (0x0003054d) bg_vkb2_func_pane_cp02

0x712d,	// (0x0002dec4) cell_hwr_side_button_pane_g1_ParamLimits

0x712d,	// (0x0002dec4) cell_hwr_side_button_pane_g1

0xd957,	// (0x000346ee) status_pane_g4_ParamLimits

0xd957,	// (0x000346ee) status_pane_g4

0xd96f,	// (0x00034706) status_pane_t1

0x0b3f,	// (0x000278d6) form2_midp_gauge_slider_cont_pane

0x0b47,	// (0x000278de) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb2e6,	// (0x0003207d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb2f8,	// (0x0003208f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x000368aa) form2_midp_gauge_slider_pane_t_ParamLimits

0x0b7d,	// (0x00027914) form2_midp_slider_pane_ParamLimits

0x67b8,	// (0x0002d54f) aid_size_cell_func_vkb2_ParamLimits

0x67b8,	// (0x0002d54f) aid_size_cell_func_vkb2

0x3684,	// (0x0002a41b) slider_pane_g4_ParamLimits

0x3684,	// (0x0002a41b) slider_pane_g4

0xc5bd,	// (0x00033354) form2_midp_gauge_slider_pane_t2_cp01

0xc5cb,	// (0x00033362) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5cb,	// (0x00033362) form2_midp_gauge_slider_pane_t3_cp01

0x7166,	// (0x0002defd) form2_midp_slider_pane_cp01

0x90fe,	// (0x0002fe95) navi_smil_pane

0x719a,	// (0x0002df31) navi_smil_pane_g1

0x71a2,	// (0x0002df39) navi_smil_pane_t1

0x716f,	// (0x0002df06) form2_midp_slider_pane_g1

0x7178,	// (0x0002df0f) form2_midp_slider_pane_g2

0x7180,	// (0x0002df17) form2_midp_slider_pane_g3

0x716f,	// (0x0002df06) form2_midp_slider_pane_g4

0xc5e8,	// (0x0003337f) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x00036bc8) form2_midp_slider_pane_g

0x711d,	// (0x0002deb4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x711d,	// (0x0002deb4) vkb2_area_bottom_space_btn_pane_g4

0xa84f,	// (0x000315e6) lc0_navi_pane_ParamLimits

0xa84f,	// (0x000315e6) lc0_navi_pane

0xa8b9,	// (0x00031650) lc0_stat_indi_pane_ParamLimits

0xa8b9,	// (0x00031650) lc0_stat_indi_pane

0xa8ce,	// (0x00031665) ls0_title_pane_ParamLimits

0xa8ce,	// (0x00031665) ls0_title_pane

0xcb7e,	// (0x00033915) bg_popup_sub_pane_cp14_ParamLimits

0x329b,	// (0x0002a032) list_uniindi_pane_ParamLimits

0x32a7,	// (0x0002a03e) uniindi_top_pane_ParamLimits

0x3342,	// (0x0002a0d9) list_single_uniindi_pane_g1_ParamLimits

0x3355,	// (0x0002a0ec) list_single_uniindi_pane_t1_ParamLimits

0xc5f1,	// (0x00033388) lc0_stat_clock_pane_ParamLimits

0xc5f1,	// (0x00033388) lc0_stat_clock_pane

0xc5fe,	// (0x00033395) lc0_stat_indi_pane_g1_ParamLimits

0xc5fe,	// (0x00033395) lc0_stat_indi_pane_g1

0xc60b,	// (0x000333a2) lc0_stat_indi_pane_g2_ParamLimits

0xc60b,	// (0x000333a2) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00036bd3) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00036bd3) lc0_stat_indi_pane_g

0xc618,	// (0x000333af) lc0_uni_indicator_pane_ParamLimits

0xc618,	// (0x000333af) lc0_uni_indicator_pane

0x71e4,	// (0x0002df7b) ls0_title_pane_g1_ParamLimits

0x71e4,	// (0x0002df7b) ls0_title_pane_g1

0xc625,	// (0x000333bc) ls0_title_pane_t1_ParamLimits

0xc625,	// (0x000333bc) ls0_title_pane_t1

0xc653,	// (0x000333ea) lc0_uni_indicator_pane_g1_ParamLimits

0xc653,	// (0x000333ea) lc0_uni_indicator_pane_g1

0x7240,	// (0x0002dfd7) lc0_stat_clock_pane_t1

0x90fe,	// (0x0002fe95) main_ai5_pane

0x724e,	// (0x0002dfe5) ai5_sk_pane_ParamLimits

0x724e,	// (0x0002dfe5) ai5_sk_pane

0xc668,	// (0x000333ff) cell_ai5_widget_pane_ParamLimits

0xc668,	// (0x000333ff) cell_ai5_widget_pane

0xc6cf,	// (0x00033466) aid_size_cell_widget_grid

0x72c8,	// (0x0002e05f) bg_ai5_widget_pane_ParamLimits

0x72c8,	// (0x0002e05f) bg_ai5_widget_pane

0xc6fd,	// (0x00033494) cell_ai5_widget_pane_g2

0xc70d,	// (0x000334a4) cell_ai5_widget_pane_g3

0xc721,	// (0x000334b8) cell_ai5_widget_pane_g4

0xc72d,	// (0x000334c4) cell_ai5_widget_pane_g5

0xc739,	// (0x000334d0) cell_ai5_widget_pane_g6

0xc745,	// (0x000334dc) cell_ai5_widget_pane_g7

0xc78d,	// (0x00033524) cell_ai5_widget_pane_t1_ParamLimits

0xc78d,	// (0x00033524) cell_ai5_widget_pane_t1

0xc7aa,	// (0x00033541) cell_ai5_widget_pane_t2_ParamLimits

0xc7aa,	// (0x00033541) cell_ai5_widget_pane_t2

0xc7c2,	// (0x00033559) cell_ai5_widget_pane_t3_ParamLimits

0xc7c2,	// (0x00033559) cell_ai5_widget_pane_t3

0xc7da,	// (0x00033571) cell_ai5_widget_pane_t4_ParamLimits

0xc7da,	// (0x00033571) cell_ai5_widget_pane_t4

0xc7f4,	// (0x0003358b) cell_ai5_widget_pane_t5_ParamLimits

0xc7f4,	// (0x0003358b) cell_ai5_widget_pane_t5

0x7406,	// (0x0002e19d) cell_ai5_widget_pane_t6_ParamLimits

0x7406,	// (0x0002e19d) cell_ai5_widget_pane_t6

0x7418,	// (0x0002e1af) cell_ai5_widget_pane_t7_ParamLimits

0x7418,	// (0x0002e1af) cell_ai5_widget_pane_t7

0xc813,	// (0x000335aa) cell_ai5_widget_pane_t8_ParamLimits

0xc813,	// (0x000335aa) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00036bed) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00036bed) cell_ai5_widget_pane_t

0xc85b,	// (0x000335f2) grid_ai5_widget_pane

0xcb7e,	// (0x00033915) highlight_cell_ai5_widget_pane_ParamLimits

0xcb7e,	// (0x00033915) highlight_cell_ai5_widget_pane

0xc86f,	// (0x00033606) ai5_sk_left_pane

0xc879,	// (0x00033610) ai5_sk_middle_pane

0xc883,	// (0x0003361a) ai5_sk_right_pane

0x74ad,	// (0x0002e244) bg_ai5_widget_pane_g1_ParamLimits

0x74ad,	// (0x0002e244) bg_ai5_widget_pane_g1

0x74b9,	// (0x0002e250) bg_ai5_widget_pane_g2_ParamLimits

0x74b9,	// (0x0002e250) bg_ai5_widget_pane_g2

0x74c5,	// (0x0002e25c) bg_ai5_widget_pane_g3_ParamLimits

0x74c5,	// (0x0002e25c) bg_ai5_widget_pane_g3

0x74d1,	// (0x0002e268) bg_ai5_widget_pane_g4_ParamLimits

0x74d1,	// (0x0002e268) bg_ai5_widget_pane_g4

0x74dd,	// (0x0002e274) bg_ai5_widget_pane_g5_ParamLimits

0x74dd,	// (0x0002e274) bg_ai5_widget_pane_g5

0x74e9,	// (0x0002e280) bg_ai5_widget_pane_g6_ParamLimits

0x74e9,	// (0x0002e280) bg_ai5_widget_pane_g6

0x74f5,	// (0x0002e28c) bg_ai5_widget_pane_g7_ParamLimits

0x74f5,	// (0x0002e28c) bg_ai5_widget_pane_g7

0x7501,	// (0x0002e298) bg_ai5_widget_pane_g8_ParamLimits

0x7501,	// (0x0002e298) bg_ai5_widget_pane_g8

0x750d,	// (0x0002e2a4) bg_ai5_widget_pane_g9_ParamLimits

0x750d,	// (0x0002e2a4) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00036c02) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00036c02) bg_ai5_widget_pane_g

0xc88d,	// (0x00033624) cell_shortcut_ai5_widget_pane_ParamLimits

0xc88d,	// (0x00033624) cell_shortcut_ai5_widget_pane

0x95c8,	// (0x0003035f) bg_cell_shortcut_ai5_widget_pane

0xc89f,	// (0x00033636) cell_grid_ai5_widget_pane_g1

0x7550,	// (0x0002e2e7) highlight_cell_shortcut_ai5_widget_pane

0xda43,	// (0x000347da) ai5_sk_left_pane_g1

0x7558,	// (0x0002e2ef) ai5_sk_left_pane_g2

0x7560,	// (0x0002e2f7) ai5_sk_left_pane_g3

0x7568,	// (0x0002e2ff) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00036c15) ai5_sk_left_pane_g

0x7570,	// (0x0002e307) ai5_sk_left_pane_t1

0xda3b,	// (0x000347d2) ai5_sk_right_pane_g1

0x757e,	// (0x0002e315) ai5_sk_right_pane_g2

0x7586,	// (0x0002e31d) ai5_sk_right_pane_g3

0x758e,	// (0x0002e325) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00036c1e) ai5_sk_right_pane_g

0x7596,	// (0x0002e32d) ai5_sk_right_pane_t1

0xda3b,	// (0x000347d2) ai5_sk_middle_pane_g1

0xda43,	// (0x000347da) ai5_sk_middle_pane_g2

0xda5b,	// (0x000347f2) ai5_sk_middle_pane_g3

0x7586,	// (0x0002e31d) ai5_sk_middle_pane_g4

0x7560,	// (0x0002e2f7) ai5_sk_middle_pane_g5

0x75a4,	// (0x0002e33b) ai5_sk_middle_pane_g6

0xc8a8,	// (0x0003363f) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00036c27) ai5_sk_middle_pane_g

0xa74d,	// (0x000314e4) aid_touch_area_size_lc0_ParamLimits

0xa74d,	// (0x000314e4) aid_touch_area_size_lc0

0x5d11,	// (0x0002caa8) cell_hwr_candidate_pane_t1_ParamLimits

0xd88c,	// (0x00034623) aid_touch_navi_pane

0xa9ba,	// (0x00031751) status_dt_navi_pane_ParamLimits

0xa9ba,	// (0x00031751) status_dt_navi_pane

0xa9d2,	// (0x00031769) status_dt_sta_pane_ParamLimits

0xa9d2,	// (0x00031769) status_dt_sta_pane

0xc8b0,	// (0x00033647) dt_sta_controll_pane

0xc8bd,	// (0x00033654) dt_sta_indi_pane

0xc8ca,	// (0x00033661) dt_sta_title_pane

0x97b6,	// (0x0003054d) bg_dt_sta_indi_pane_ParamLimits

0x97b6,	// (0x0003054d) bg_dt_sta_indi_pane

0xc8dc,	// (0x00033673) dt_sta_battery_pane

0xc8e4,	// (0x0003367b) dt_sta_indi_pane_g1

0xc8ed,	// (0x00033684) dt_sta_indi_pane_g2

0xc8f6,	// (0x0003368d) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00036c36) dt_sta_indi_pane_g

0xc8ff,	// (0x00033696) dt_sta_signal_pane

0xcb7e,	// (0x00033915) bg_dt_sta_title_pane_ParamLimits

0xcb7e,	// (0x00033915) bg_dt_sta_title_pane

0xc908,	// (0x0003369f) dt_sta_title_pane_g1

0xc910,	// (0x000336a7) dt_sta_title_pane_t1_ParamLimits

0xc910,	// (0x000336a7) dt_sta_title_pane_t1

0x90fe,	// (0x0002fe95) bg_dt_sta_control_pane

0xc925,	// (0x000336bc) dt_sta_controll_pane_g1

0xc92e,	// (0x000336c5) bg_dt_sta_title_pane_g1

0xc937,	// (0x000336ce) bg_dt_sta_title_pane_g2

0xc940,	// (0x000336d7) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00036c3d) bg_dt_sta_title_pane_g

0x0d4d,	// (0x00027ae4) bg_dt_sta_indi_pane_g1

0xc949,	// (0x000336e0) dt_sta_signal_pane_g1

0xc951,	// (0x000336e8) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00036c44) dt_sta_signal_pane_g

0x7662,	// (0x0002e3f9) dt_sta_battery_pane_g1

0x766b,	// (0x0002e402) dt_sta_battery_pane_t1

0x0d4d,	// (0x00027ae4) bg_dt_sta_control_pane_g1

0xd0f5,	// (0x00033e8c) fep_china_uni_eep_pane

0xd0fd,	// (0x00033e94) fep_china_uni_entry_pane_ParamLimits

0xd10d,	// (0x00033ea4) popup_fep_china_uni_window_g1_ParamLimits

0xd11d,	// (0x00033eb4) popup_fep_china_uni_window_g2_ParamLimits

0xd11d,	// (0x00033eb4) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x000364f9) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x000364f9) popup_fep_china_uni_window_g

0x767a,	// (0x0002e411) fep_china_uni_eep_pane_g1

0x7682,	// (0x0002e419) fep_china_uni_eep_pane_t1

0x7191,	// (0x0002df28) aid_touch_area_size_smil_player

0xd92a,	// (0x000346c1) lc0_clock_pane

0xd963,	// (0x000346fa) status_pane_g5_ParamLimits

0xd963,	// (0x000346fa) status_pane_g5

0xa2e1,	// (0x00031078) popup_keymap_window

0xd943,	// (0x000346da) status_icon_pane

0xc70d,	// (0x000334a4) cell_ai5_widget_pane_g3_ParamLimits

0xc721,	// (0x000334b8) cell_ai5_widget_pane_g4_ParamLimits

0xc72d,	// (0x000334c4) cell_ai5_widget_pane_g5_ParamLimits

0xc751,	// (0x000334e8) cell_ai5_widget_pane_g8_ParamLimits

0xc751,	// (0x000334e8) cell_ai5_widget_pane_g8

0xc765,	// (0x000334fc) cell_ai5_widget_pane_g9_ParamLimits

0xc765,	// (0x000334fc) cell_ai5_widget_pane_g9

0xc779,	// (0x00033510) cell_ai5_widget_pane_g10_ParamLimits

0xc779,	// (0x00033510) cell_ai5_widget_pane_g10

0x7691,	// (0x0002e428) status_icon_pane_g1

0x90fe,	// (0x0002fe95) bg_popup_sub_pane_cp13

0x7699,	// (0x0002e430) popup_keymap_window_t1

0xa035,	// (0x00030dcc) control_pane_g6_ParamLimits

0xa035,	// (0x00030dcc) control_pane_g6

0xa042,	// (0x00030dd9) control_pane_g7_ParamLimits

0xa042,	// (0x00030dd9) control_pane_g7

0xa04f,	// (0x00030de6) control_pane_g8_ParamLimits

0xa04f,	// (0x00030de6) control_pane_g8

0xc8b0,	// (0x00033647) dt_sta_controll_pane_ParamLimits

0xc8bd,	// (0x00033654) dt_sta_indi_pane_ParamLimits

0xc8ca,	// (0x00033661) dt_sta_title_pane_ParamLimits

0x9c15,	// (0x000309ac) aid_size_touch_scroll_bar_cale

0x4e9a,	// (0x0002bc31) popup_discreet_window_ParamLimits

0x4e9a,	// (0x0002bc31) popup_discreet_window

0x9291,	// (0x00030028) popup_sk_window

0xe120,	// (0x00034eb7) bg_popup_sub_pane_cp28_ParamLimits

0xe120,	// (0x00034eb7) bg_popup_sub_pane_cp28

0x76a7,	// (0x0002e43e) popup_discreet_window_g1_ParamLimits

0x76a7,	// (0x0002e43e) popup_discreet_window_g1

0x76c7,	// (0x0002e45e) popup_discreet_window_t1_ParamLimits

0x76c7,	// (0x0002e45e) popup_discreet_window_t1

0x76e5,	// (0x0002e47c) popup_discreet_window_t2_ParamLimits

0x76e5,	// (0x0002e47c) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00036c49) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00036c49) popup_discreet_window_t

0x7737,	// (0x0002e4ce) popup_sk_window_g1

0x7740,	// (0x0002e4d7) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00036c50) popup_sk_window_g

0x7749,	// (0x0002e4e0) popup_sk_window_t1

0x7757,	// (0x0002e4ee) popup_sk_window_t1_copy1

0xc6fd,	// (0x00033494) cell_ai5_widget_pane_g2_ParamLimits

0xc825,	// (0x000335bc) cell_ai5_widget_pane_t9_ParamLimits

0xc825,	// (0x000335bc) cell_ai5_widget_pane_t9

0x90fe,	// (0x0002fe95) main_fep_fshwr2_pane

0xc959,	// (0x000336f0) aid_fshwr2_btn_pane

0xc961,	// (0x000336f8) aid_fshwr2_syb_pane

0xc969,	// (0x00033700) aid_fshwr2_txt_pane

0xc971,	// (0x00033708) fshwr2_func_candi_pane

0xc979,	// (0x00033710) fshwr2_hwr_syb_pane

0xc981,	// (0x00033718) fshwr2_icf_pane

0x90fe,	// (0x0002fe95) fshwr2_icf_bg_pane

0xc989,	// (0x00033720) fshwr2_icf_pane_t1_ParamLimits

0xc989,	// (0x00033720) fshwr2_icf_pane_t1

0x0d4d,	// (0x00027ae4) fshwr2_func_candi_pane_g1

0x77be,	// (0x0002e555) fshwr2_func_candi_row_pane_ParamLimits

0x77be,	// (0x0002e555) fshwr2_func_candi_row_pane

0xc9a1,	// (0x00033738) cell_fshwr2_syb_pane_ParamLimits

0xc9a1,	// (0x00033738) cell_fshwr2_syb_pane

0x0f95,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0f95,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1

0x90fe,	// (0x0002fe95) bg_popup_call_pane_cp01

0x77e6,	// (0x0002e57d) fshwr2_func_candi_cell_pane_ParamLimits

0x77e6,	// (0x0002e57d) fshwr2_func_candi_cell_pane

0x7811,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7811,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane

0x782b,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x782b,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1

0x784b,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x784b,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1

0x90fe,	// (0x0002fe95) bg_button_pane_cp08

0xd525,	// (0x000342bc) cell_fshwr2_syb_bg_pane

0xc9b8,	// (0x0003374f) cell_fshwr2_syb_bg_pane_g1

0xc9c0,	// (0x00033757) cell_fshwr2_syb_bg_pane_t1

0xcb7e,	// (0x00033915) main_tmo_pane

0xae24,	// (0x00031bbb) uni_indicator_pane_g1_ParamLimits

0xae39,	// (0x00031bd0) uni_indicator_pane_g2_ParamLimits

0xae4f,	// (0x00031be6) uni_indicator_pane_g3_ParamLimits

0xeaac,	// (0x00035843) uni_indicator_pane_g4_ParamLimits

0xeaac,	// (0x00035843) uni_indicator_pane_g4

0xeac0,	// (0x00035857) uni_indicator_pane_g5_ParamLimits

0xeac0,	// (0x00035857) uni_indicator_pane_g5

0xead4,	// (0x0003586b) uni_indicator_pane_g6_ParamLimits

0xead4,	// (0x0003586b) uni_indicator_pane_g6

0xf953,	// (0x000366ea) uni_indicator_pane_g_ParamLimits

0xb86a,	// (0x00032601) popup_tmo_note_window_ParamLimits

0xb86a,	// (0x00032601) popup_tmo_note_window

0x90fe,	// (0x0002fe95) fshwr2_bg_pane

0x783c,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x783c,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00036c55) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00036c55) fshwr2_func_candi_cell_pane_g

0x0d4d,	// (0x00027ae4) bg_popup_window_pane_cp01

0x7875,	// (0x0002e60c) bg_popup_window_pane_g1_cp01

0x787e,	// (0x0002e615) bg_popup_window_pane_cp22_ParamLimits

0x787e,	// (0x0002e615) bg_popup_window_pane_cp22

0x788c,	// (0x0002e623) listscroll_tmo_link_pane_ParamLimits

0x788c,	// (0x0002e623) listscroll_tmo_link_pane

0x78cc,	// (0x0002e663) popup_tmo_note_window_g1_ParamLimits

0x78cc,	// (0x0002e663) popup_tmo_note_window_g1

0x78d9,	// (0x0002e670) tmo_note_info_pane_ParamLimits

0x78d9,	// (0x0002e670) tmo_note_info_pane

0xc9cf,	// (0x00033766) list_tmo_note_info_pane_g1_ParamLimits

0xc9cf,	// (0x00033766) list_tmo_note_info_pane_g1

0x790a,	// (0x0002e6a1) list_tmo_note_info_pane_g2_ParamLimits

0x790a,	// (0x0002e6a1) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00036c5a) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00036c5a) list_tmo_note_info_pane_g

0x7926,	// (0x0002e6bd) list_tmo_note_info_text_pane_ParamLimits

0x7926,	// (0x0002e6bd) list_tmo_note_info_text_pane

0x79a7,	// (0x0002e73e) list_tmo_link_pane

0x79b4,	// (0x0002e74b) scroll_pane_cp20

0x79c1,	// (0x0002e758) list_single_tmo_link_pane_ParamLimits

0x79c1,	// (0x0002e758) list_single_tmo_link_pane

0x79d1,	// (0x0002e768) list_single_tmo_link_pane_t1

0x79df,	// (0x0002e776) list_tmo_note_info_text_pane_t1_ParamLimits

0x79df,	// (0x0002e776) list_tmo_note_info_text_pane_t1

0xcc2c,	// (0x000339c3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcc2c,	// (0x000339c3) aid_size_touch_scroll_bar_cp01

0x8d66,	// (0x0002fafd) aid_size_touch_slider_marker

0x9285,	// (0x0003001c) popup_settings_window_ParamLimits

0x9285,	// (0x0003001c) popup_settings_window

0x4790,	// (0x0002b527) popup_candi_list_indi_window

0xd88c,	// (0x00034623) aid_touch_navi_pane_ParamLimits

0x62a5,	// (0x0002d03c) rs_clock_indi_pane

0x62ae,	// (0x0002d045) sctrl_sk_bottom_pane_ParamLimits

0x62bf,	// (0x0002d056) sctrl_sk_top_pane_ParamLimits

0x6812,	// (0x0002d5a9) popup_fep_tooltip_window

0xc6cf,	// (0x00033466) aid_size_cell_widget_grid_ParamLimits

0xc6f1,	// (0x00033488) cell_ai5_widget_pane_g1_ParamLimits

0xc6f1,	// (0x00033488) cell_ai5_widget_pane_g1

0xc739,	// (0x000334d0) cell_ai5_widget_pane_g6_ParamLimits

0xc745,	// (0x000334dc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x00036bd8) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x00036bd8) cell_ai5_widget_pane_g

0xc849,	// (0x000335e0) cell_ai5_widget_pane_t10_ParamLimits

0xc849,	// (0x000335e0) cell_ai5_widget_pane_t10

0xc85b,	// (0x000335f2) grid_ai5_widget_pane_ParamLimits

0x7519,	// (0x0002e2b0) cell_contacts_ai5_widget_pane_ParamLimits

0x7519,	// (0x0002e2b0) cell_contacts_ai5_widget_pane

0x76fa,	// (0x0002e491) popup_discreet_window_t3_ParamLimits

0x76fa,	// (0x0002e491) popup_discreet_window_t3

0x7795,	// (0x0002e52c) popup_fshwr2_char_preview_window_ParamLimits

0x7795,	// (0x0002e52c) popup_fshwr2_char_preview_window

0xc9e6,	// (0x0003377d) tmo_note_info_pane_t1

0xc9fb,	// (0x00033792) tmo_note_info_pane_t2

0xca10,	// (0x000337a7) tmo_note_info_pane_t3

0x7983,	// (0x0002e71a) tmo_note_info_pane_t4

0x7995,	// (0x0002e72c) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00036c5f) tmo_note_info_pane_t

0x79a7,	// (0x0002e73e) list_tmo_link_pane_ParamLimits

0x79b4,	// (0x0002e74b) scroll_pane_cp20_ParamLimits

0x90fe,	// (0x0002fe95) bg_popup_fep_char_preview_window_cp01

0x79f8,	// (0x0002e78f) popup_fshwr2_char_preview_window_t1

0x7a06,	// (0x0002e79d) popup_candi_list_indi_window_g1

0x7a0f,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane

0x7a1b,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1

0x7a2f,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2

0x7a3e,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00036c6a) cell_contacts_ai5_widget_pane_g

0x7a51,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1

0xcb7e,	// (0x00033915) highlight_cell_shortcut_ai5_widget_pane_cp01

0xca88,	// (0x0003381f) settings_container_pane

0xd525,	// (0x000342bc) listscroll_set_pane_copy1

0xf255,	// (0x00035fec) scroll_pane_cp121_copy1

0x7ad5,	// (0x0002e86c) set_content_pane_copy1

0x7add,	// (0x0002e874) aid_height_set_list_copy1_ParamLimits

0x7add,	// (0x0002e874) aid_height_set_list_copy1

0xec6d,	// (0x00035a04) aid_size_parent_copy1_ParamLimits

0xec6d,	// (0x00035a04) aid_size_parent_copy1

0xca94,	// (0x0003382b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xca94,	// (0x0003382b) button_value_adjust_pane_cp6_copy1

0xccfa,	// (0x00033a91) list_highlight_pane_cp2_copy1_ParamLimits

0xccfa,	// (0x00033a91) list_highlight_pane_cp2_copy1

0xcaa8,	// (0x0003383f) list_set_pane_copy1_ParamLimits

0xcaa8,	// (0x0003383f) list_set_pane_copy1

0xca25,	// (0x000337bc) main_pane_set_t1_copy1_ParamLimits

0xca25,	// (0x000337bc) main_pane_set_t1_copy1

0xca5f,	// (0x000337f6) main_pane_set_t2_copy1_ParamLimits

0xca5f,	// (0x000337f6) main_pane_set_t2_copy1

0x7b8b,	// (0x0002e922) main_pane_set_t3_copy1

0x7b99,	// (0x0002e930) main_pane_set_t4_copy1

0xca7c,	// (0x00033813) set_content_pane_g1_copy1_ParamLimits

0xca7c,	// (0x00033813) set_content_pane_g1_copy1

0xdb57,	// (0x000348ee) setting_code_pane_copy1

0x7baf,	// (0x0002e946) setting_slider_graphic_pane_copy1

0x7baf,	// (0x0002e946) setting_slider_pane_copy1

0x7bb7,	// (0x0002e94e) setting_text_pane_copy1

0x7baf,	// (0x0002e946) setting_volume_pane_copy1

0xdb5f,	// (0x000348f6) settings_code_pane_cp2_copy1

0xdb67,	// (0x000348fe) settings_code_pane_cp_copy1_ParamLimits

0xdb67,	// (0x000348fe) settings_code_pane_cp_copy1

0xdb7b,	// (0x00034912) volume_set_pane_copy1

0xdb83,	// (0x0003491a) volume_set_pane_g10_copy1

0xdb8b,	// (0x00034922) volume_set_pane_g1_copy1

0xdb93,	// (0x0003492a) volume_set_pane_g2_copy1

0xdb9b,	// (0x00034932) volume_set_pane_g3_copy1

0xdba3,	// (0x0003493a) volume_set_pane_g4_copy1

0xdbab,	// (0x00034942) volume_set_pane_g5_copy1

0xdbb3,	// (0x0003494a) volume_set_pane_g6_copy1

0xdbbb,	// (0x00034952) volume_set_pane_g7_copy1

0xdbc3,	// (0x0003495a) volume_set_pane_g8_copy1

0xdbcb,	// (0x00034962) volume_set_pane_g9_copy1

0x9461,	// (0x000301f8) bg_set_opt_pane_cp_copy1_ParamLimits

0x9461,	// (0x000301f8) bg_set_opt_pane_cp_copy1

0x946f,	// (0x00030206) setting_slider_pane_t1_copy1_ParamLimits

0x946f,	// (0x00030206) setting_slider_pane_t1_copy1

0x7c33,	// (0x0002e9ca) setting_slider_pane_t2_copy1_ParamLimits

0x7c33,	// (0x0002e9ca) setting_slider_pane_t2_copy1

0x7c4c,	// (0x0002e9e3) setting_slider_pane_t3_copy1_ParamLimits

0x7c4c,	// (0x0002e9e3) setting_slider_pane_t3_copy1

0x94b5,	// (0x0003024c) slider_set_pane_copy1_ParamLimits

0x94b5,	// (0x0003024c) slider_set_pane_copy1

0xcbcd,	// (0x00033964) set_opt_bg_pane_g1_copy2

0xcbd5,	// (0x0003396c) set_opt_bg_pane_g2_copy2

0x7c63,	// (0x0002e9fa) set_opt_bg_pane_g3_copy2

0xcbe5,	// (0x0003397c) set_opt_bg_pane_g4_copy2

0xcbed,	// (0x00033984) set_opt_bg_pane_g5_copy2

0xcbf5,	// (0x0003398c) set_opt_bg_pane_g6_copy2

0xdbd3,	// (0x0003496a) set_opt_bg_pane_g7_copy2

0x7c73,	// (0x0002ea0a) set_opt_bg_pane_g8_copy2

0x7c7b,	// (0x0002ea12) set_opt_bg_pane_g9_copy2

0xeddb,	// (0x00035b72) aid_size_touch_slider_mark_copy1_ParamLimits

0xeddb,	// (0x00035b72) aid_size_touch_slider_mark_copy1

0xec7f,	// (0x00035a16) slider_set_pane_g1_copy1

0xec88,	// (0x00035a1f) slider_set_pane_g2_copy1

0xedef,	// (0x00035b86) slider_set_pane_g3_copy1_ParamLimits

0xedef,	// (0x00035b86) slider_set_pane_g3_copy1

0xee03,	// (0x00035b9a) slider_set_pane_g4_copy1_ParamLimits

0xee03,	// (0x00035b9a) slider_set_pane_g4_copy1

0xee1b,	// (0x00035bb2) slider_set_pane_g5_copy1_ParamLimits

0xee1b,	// (0x00035bb2) slider_set_pane_g5_copy1

0xedef,	// (0x00035b86) slider_set_pane_g6_copy1_ParamLimits

0xedef,	// (0x00035b86) slider_set_pane_g6_copy1

0xdbdb,	// (0x00034972) slider_set_pane_g7_copy1_ParamLimits

0xdbdb,	// (0x00034972) slider_set_pane_g7_copy1

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp2_copy1

0x94cb,	// (0x00030262) setting_slider_graphic_pane_g1_copy1

0xdbf1,	// (0x00034988) setting_slider_graphic_pane_t1_copy1

0xdc00,	// (0x00034997) setting_slider_graphic_pane_t2_copy1

0xdc0f,	// (0x000349a6) slider_set_pane_cp_copy1

0x7cc7,	// (0x0002ea5e) input_focus_pane_cp1_copy1

0x7cd0,	// (0x0002ea67) list_set_text_pane_copy1

0x7cd8,	// (0x0002ea6f) setting_text_pane_g1_copy1

0x4d31,	// (0x0002bac8) set_text_pane_t1_copy1

0x7cc7,	// (0x0002ea5e) input_focus_pane_cp2_copy1

0x7cd8,	// (0x0002ea6f) setting_code_pane_g1_copy1

0x7ce1,	// (0x0002ea78) setting_code_pane_t1_copy1

0x9f4d,	// (0x00030ce4) list_set_graphic_pane_copy1

0x9255,	// (0x0002ffec) bg_set_opt_pane_cp4_copy1

0x7d03,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1_ParamLimits

0x7d03,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1

0x7d0f,	// (0x0002eaa6) list_set_graphic_pane_g2_copy1

0xd2a0,	// (0x00034037) list_set_graphic_pane_t1_copy1_ParamLimits

0xd2a0,	// (0x00034037) list_set_graphic_pane_t1_copy1

0x0d4d,	// (0x00027ae4) rs_clock_indi_pane_g1

0x7d17,	// (0x0002eaae) rs_clock_indi_pane_t1

0x7d25,	// (0x0002eabc) rs_indi_pane

0x7d2d,	// (0x0002eac4) rs_indi_pane_g1

0x7d36,	// (0x0002eacd) rs_indi_pane_g2

0x7a06,	// (0x0002e79d) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00036c71) rs_indi_pane_g

0xd525,	// (0x000342bc) bg_popup_preview_window_pane_cp03

0x7d3f,	// (0x0002ead6) popup_fep_tooltip_window_t1

0x26b5,	// (0x0002944c) popup_note2_window_g2_ParamLimits

0x26b5,	// (0x0002944c) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x00036a16) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x00036a16) popup_note2_window_g

0x2b30,	// (0x000298c7) bg_popup_sub_pane_cp11_ParamLimits

0x2b3d,	// (0x000298d4) cell_ai3_links_pane_g1_ParamLimits

0x2b54,	// (0x000298eb) cell_ai3_links_pane_t1

0x4d31,	// (0x0002bac8) set_text_pane_t1_copy1_ParamLimits

0xd44c,	// (0x000341e3) cell_graphic_popup_pane_cp2_ParamLimits

0xd44c,	// (0x000341e3) cell_graphic_popup_pane_cp2

0x7d4d,	// (0x0002eae4) cell_graphic_popup_pane_g1_cp2

0x9ac4,	// (0x0003085b) cell_graphic_popup_pane_g2_cp2

0x7d55,	// (0x0002eaec) cell_graphic_popup_pane_g3_cp2

0x7d5d,	// (0x0002eaf4) cell_graphic_popup_pane_t2_cp2

0x9ad5,	// (0x0003086c) grid_highlight_pane_cp3_cp2

0xcebf,	// (0x00033c56) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcb7e,	// (0x00033915) main_tmo_pane_ParamLimits

0xb862,	// (0x000325f9) popup_tmo_big_image_note_window

0xc6e1,	// (0x00033478) cell_ai5_widget_list_pane

0xc6e9,	// (0x00033480) cell_ai5_widget_lrg_icon_pane

0xc9e6,	// (0x0003377d) tmo_note_info_pane_t1_ParamLimits

0xc9fb,	// (0x00033792) tmo_note_info_pane_t2_ParamLimits

0xca10,	// (0x000337a7) tmo_note_info_pane_t3_ParamLimits

0x7983,	// (0x0002e71a) tmo_note_info_pane_t4_ParamLimits

0x7995,	// (0x0002e72c) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00036c5f) tmo_note_info_pane_t_ParamLimits

0xca88,	// (0x0003381f) settings_container_pane_ParamLimits

0x7cbf,	// (0x0002ea56) indicator_popup_pane_cp5

0x7cbf,	// (0x0002ea56) indicator_popup_pane_cp6

0x9f4d,	// (0x00030ce4) list_set_graphic_pane_copy1_ParamLimits

0x90fe,	// (0x0002fe95) bg_popup_window_pane_cp23

0x7d6b,	// (0x0002eb02) popup_tmo_big_image_note_window_g1

0x7d74,	// (0x0002eb0b) popup_tmo_big_image_note_window_t1

0x7d82,	// (0x0002eb19) popup_tmo_big_image_note_window_t2

0x7d90,	// (0x0002eb27) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00036c78) popup_tmo_big_image_note_window_t

0xdc17,	// (0x000349ae) cell_ai5_widget_lrg_icon_pane_g1

0xdc1f,	// (0x000349b6) cell_ai5_widget_lrg_icon_pane_t1

0xdc2d,	// (0x000349c4) cell_ai5_widget_list_row_pane_ParamLimits

0xdc2d,	// (0x000349c4) cell_ai5_widget_list_row_pane

0xdc46,	// (0x000349dd) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdc46,	// (0x000349dd) cell_ai5_widget_list_row_pane_g1

0xdc53,	// (0x000349ea) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdc53,	// (0x000349ea) cell_ai5_widget_list_row_pane_t1

0xdc6b,	// (0x00034a02) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdc6b,	// (0x00034a02) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee8,	// (0x00036c7f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00036c7f) cell_ai5_widget_list_row_pane_t

0x90fe,	// (0x0002fe95) main_fep_vtchi_ss_pane

0x7e04,	// (0x0002eb9b) popup_fep_char_pre_window

0x7e0c,	// (0x0002eba3) popup_fep_ituss_window

0x7e15,	// (0x0002ebac) popup_fep_vkbss_window

0x7e1e,	// (0x0002ebb5) grid_vkbss_keypad_pane_ParamLimits

0x7e1e,	// (0x0002ebb5) grid_vkbss_keypad_pane

0x7e2e,	// (0x0002ebc5) ituss_keypad_pane

0x7e36,	// (0x0002ebcd) aid_vkbss_key_offset_ParamLimits

0x7e36,	// (0x0002ebcd) aid_vkbss_key_offset

0x7e45,	// (0x0002ebdc) cell_vkbss_key_pane_ParamLimits

0x7e45,	// (0x0002ebdc) cell_vkbss_key_pane

0x7e5b,	// (0x0002ebf2) bg_cell_vkbss_key_g1_ParamLimits

0x7e5b,	// (0x0002ebf2) bg_cell_vkbss_key_g1

0x7e67,	// (0x0002ebfe) cell_vkbss_key_3p_pane_ParamLimits

0x7e67,	// (0x0002ebfe) cell_vkbss_key_3p_pane

0x7e7b,	// (0x0002ec12) cell_vkbss_key_g1_ParamLimits

0x7e7b,	// (0x0002ec12) cell_vkbss_key_g1

0x7e8f,	// (0x0002ec26) cell_vkbss_key_t1_ParamLimits

0x7e8f,	// (0x0002ec26) cell_vkbss_key_t1

0x7eba,	// (0x0002ec51) cell_ituss_key_pane_ParamLimits

0x7eba,	// (0x0002ec51) cell_ituss_key_pane

0x7ec9,	// (0x0002ec60) bg_cell_ituss_key_g1_ParamLimits

0x7ec9,	// (0x0002ec60) bg_cell_ituss_key_g1

0x7ed5,	// (0x0002ec6c) cell_ituss_key_pane_g1_ParamLimits

0x7ed5,	// (0x0002ec6c) cell_ituss_key_pane_g1

0x7ee1,	// (0x0002ec78) cell_ituss_key_pane_g2_ParamLimits

0x7ee1,	// (0x0002ec78) cell_ituss_key_pane_g2

0x0001,

0xfeed,	// (0x00036c84) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00036c84) cell_ituss_key_pane_g

0x7ef4,	// (0x0002ec8b) cell_ituss_key_t1_ParamLimits

0x7ef4,	// (0x0002ec8b) cell_ituss_key_t1

0x7f12,	// (0x0002eca9) cell_ituss_key_t2_ParamLimits

0x7f12,	// (0x0002eca9) cell_ituss_key_t2

0x7f31,	// (0x0002ecc8) cell_ituss_key_t3_ParamLimits

0x7f31,	// (0x0002ecc8) cell_ituss_key_t3

0x7f50,	// (0x0002ece7) cell_ituss_key_t4_ParamLimits

0x7f50,	// (0x0002ece7) cell_ituss_key_t4

0x0003,

0xfef2,	// (0x00036c89) cell_ituss_key_t_ParamLimits

0xfef2,	// (0x00036c89) cell_ituss_key_t

0x7f6f,	// (0x0002ed06) cell_vkbss_key_3p_pane_g1

0x7f77,	// (0x0002ed0e) cell_vkbss_key_3p_pane_g2

0x7f7f,	// (0x0002ed16) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefb,	// (0x00036c92) cell_vkbss_key_3p_pane_g

0x90fe,	// (0x0002fe95) bg_popup_fep_char_preview_window_cp02

0x7f87,	// (0x0002ed1e) popup_fep_char_pre_window_t1

0xc6c5,	// (0x0003345c) main_ai5_sk_pane

0x7a0f,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7a1b,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7a2f,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7a3e,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00036c6a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7a51,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcb7e,	// (0x00033915) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdc7d,	// (0x00034a14) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
