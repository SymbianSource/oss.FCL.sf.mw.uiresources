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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00041795 };

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
0xbcc3,	// (0x0004d458) Screen

0xbccf,	// (0x0004d464) application_window_ParamLimits

0xbccf,	// (0x0004d464) application_window

0xd3be,	// (0x0004eb53) screen_g1

0xbd07,	// (0x0004d49c) area_bottom_pane_ParamLimits

0xbd07,	// (0x0004d49c) area_bottom_pane

0x0c83,	// (0x00042418) area_top_pane_ParamLimits

0x0c83,	// (0x00042418) area_top_pane

0x0d17,	// (0x000424ac) main_pane_ParamLimits

0x0d17,	// (0x000424ac) main_pane

0x3307,	// (0x00044a9c) misc_graphics

0xd662,	// (0x0004edf7) battery_pane_ParamLimits

0xd662,	// (0x0004edf7) battery_pane

0x5a03,	// (0x00047198) bg_status_flat_pane_g8

0x5a0b,	// (0x000471a0) bg_status_flat_pane_g9

0x4ddd,	// (0x00046572) context_pane_ParamLimits

0x4ddd,	// (0x00046572) context_pane

0xd7cd,	// (0x0004ef62) navi_pane_ParamLimits

0xd7cd,	// (0x0004ef62) navi_pane

0xd84b,	// (0x0004efe0) signal_pane_ParamLimits

0xd84b,	// (0x0004efe0) signal_pane

0x0008,

0xf854,	// (0x00050fe9) bg_status_flat_pane_g

0xd8db,	// (0x0004f070) status_pane_g1_ParamLimits

0xd8db,	// (0x0004f070) status_pane_g1

0xd8f1,	// (0x0004f086) status_pane_g2_ParamLimits

0xd8f1,	// (0x0004f086) status_pane_g2

0x5004,	// (0x00046799) status_pane_g3_ParamLimits

0x5004,	// (0x00046799) status_pane_g3

0x0004,

0xf780,	// (0x00050f15) status_pane_g_ParamLimits

0xf780,	// (0x00050f15) status_pane_g

0xd8fd,	// (0x0004f092) title_pane_ParamLimits

0xd8fd,	// (0x0004f092) title_pane

0xd960,	// (0x0004f0f5) uni_indicator_pane_ParamLimits

0xd960,	// (0x0004f0f5) uni_indicator_pane

0x4c45,	// (0x000463da) bg_list_pane_ParamLimits

0x4c45,	// (0x000463da) bg_list_pane

0x168f,	// (0x00042e24) find_pane

0x5203,	// (0x00046998) listscroll_app_pane_ParamLimits

0x5203,	// (0x00046998) listscroll_app_pane

0x4c71,	// (0x00046406) listscroll_form_pane

0x1697,	// (0x00042e2c) listscroll_gen_pane_ParamLimits

0x1697,	// (0x00042e2c) listscroll_gen_pane

0x16ab,	// (0x00042e40) listscroll_set_pane

0x6584,	// (0x00047d19) main_idle_act_pane

0x4941,	// (0x000460d6) main_idle_trad_pane

0x4941,	// (0x000460d6) main_list_empty_pane

0x4c65,	// (0x000463fa) main_midp_pane

0x4c8b,	// (0x00046420) main_pane_g1_ParamLimits

0x4c8b,	// (0x00046420) main_pane_g1

0xc58b,	// (0x0004dd20) popup_ai_message_window_ParamLimits

0xc58b,	// (0x0004dd20) popup_ai_message_window

0xc61c,	// (0x0004ddb1) popup_fep_china_uni_window_ParamLimits

0xc61c,	// (0x0004ddb1) popup_fep_china_uni_window

0x17b5,	// (0x00042f4a) popup_fep_japan_candidate_window_ParamLimits

0x17b5,	// (0x00042f4a) popup_fep_japan_candidate_window

0x17d5,	// (0x00042f6a) popup_fep_japan_predictive_window_ParamLimits

0x17d5,	// (0x00042f6a) popup_fep_japan_predictive_window

0xc678,	// (0x0004de0d) popup_find_window

0xc695,	// (0x0004de2a) popup_grid_graphic_window_ParamLimits

0xc695,	// (0x0004de2a) popup_grid_graphic_window

0x183e,	// (0x00042fd3) popup_large_graphic_colour_window

0xc739,	// (0x0004dece) popup_menu_window_ParamLimits

0xc739,	// (0x0004dece) popup_menu_window

0xc90b,	// (0x0004e0a0) popup_note_image_window

0xc8d1,	// (0x0004e066) popup_note_wait_window_ParamLimits

0xc8d1,	// (0x0004e066) popup_note_wait_window

0xc923,	// (0x0004e0b8) popup_note_window_ParamLimits

0xc923,	// (0x0004e0b8) popup_note_window

0xc9c9,	// (0x0004e15e) popup_query_code_window_ParamLimits

0xc9c9,	// (0x0004e15e) popup_query_code_window

0x1a86,	// (0x0004321b) popup_query_data_code_window_ParamLimits

0x1a86,	// (0x0004321b) popup_query_data_code_window

0xca03,	// (0x0004e198) popup_query_data_window_ParamLimits

0xca03,	// (0x0004e198) popup_query_data_window

0xca85,	// (0x0004e21a) popup_query_sat_info_window_ParamLimits

0xca85,	// (0x0004e21a) popup_query_sat_info_window

0xcb1c,	// (0x0004e2b1) popup_snote_single_graphic_window_ParamLimits

0xcb1c,	// (0x0004e2b1) popup_snote_single_graphic_window

0xcb1c,	// (0x0004e2b1) popup_snote_single_text_window_ParamLimits

0xcb1c,	// (0x0004e2b1) popup_snote_single_text_window

0x1b0d,	// (0x000432a2) popup_sub_window_general

0x1c3d,	// (0x000433d2) popup_window_general_ParamLimits

0x1c3d,	// (0x000433d2) popup_window_general

0x4c99,	// (0x0004642e) power_save_pane

0xc40c,	// (0x0004dba1) control_pane_g1_ParamLimits

0xc40c,	// (0x0004dba1) control_pane_g1

0xc435,	// (0x0004dbca) control_pane_g2_ParamLimits

0xc435,	// (0x0004dbca) control_pane_g2

0x4c08,	// (0x0004639d) control_pane_g3_ParamLimits

0x4c08,	// (0x0004639d) control_pane_g3

0x0007,

0xf768,	// (0x00050efd) control_pane_g_ParamLimits

0xf768,	// (0x00050efd) control_pane_g

0xc476,	// (0x0004dc0b) control_pane_t1_ParamLimits

0xc476,	// (0x0004dc0b) control_pane_t1

0xc4de,	// (0x0004dc73) control_pane_t2_ParamLimits

0xc4de,	// (0x0004dc73) control_pane_t2

0x0002,

0xf779,	// (0x00050f0e) control_pane_t_ParamLimits

0xf779,	// (0x00050f0e) control_pane_t

0xd50f,	// (0x0004eca4) navi_navi_volume_pane_cp1

0xd517,	// (0x0004ecac) status_small_icon_pane

0x4b3d,	// (0x000462d2) status_small_pane_g1_ParamLimits

0x4b3d,	// (0x000462d2) status_small_pane_g1

0xd51f,	// (0x0004ecb4) status_small_pane_g2_ParamLimits

0xd51f,	// (0x0004ecb4) status_small_pane_g2

0xd52b,	// (0x0004ecc0) status_small_pane_g3_ParamLimits

0xd52b,	// (0x0004ecc0) status_small_pane_g3

0xd537,	// (0x0004eccc) status_small_pane_g4_ParamLimits

0xd537,	// (0x0004eccc) status_small_pane_g4

0xd543,	// (0x0004ecd8) status_small_pane_g5_ParamLimits

0xd543,	// (0x0004ecd8) status_small_pane_g5

0xd551,	// (0x0004ece6) status_small_pane_g6_ParamLimits

0xd551,	// (0x0004ece6) status_small_pane_g6

0x0007,

0xf757,	// (0x00050eec) status_small_pane_g_ParamLimits

0xf757,	// (0x00050eec) status_small_pane_g

0xd580,	// (0x0004ed15) status_small_pane_t1

0xd5a2,	// (0x0004ed37) status_small_wait_pane_ParamLimits

0xd5a2,	// (0x0004ed37) status_small_wait_pane

0xd3da,	// (0x0004eb6f) aid_levels_signal_ParamLimits

0xd3da,	// (0x0004eb6f) aid_levels_signal

0xd3f2,	// (0x0004eb87) signal_pane_g1_ParamLimits

0xd3f2,	// (0x0004eb87) signal_pane_g1

0xd40d,	// (0x0004eba2) signal_pane_g2_ParamLimits

0xd40d,	// (0x0004eba2) signal_pane_g2

0x0003,

0xf6e8,	// (0x00050e7d) signal_pane_g_ParamLimits

0xf6e8,	// (0x00050e7d) signal_pane_g

0x4409,	// (0x00045b9e) context_pane_g1

0xbee5,	// (0x0004d67a) title_pane_g1

0xbf1c,	// (0x0004d6b1) title_pane_t1

0x33af,	// (0x00044b44) title_pane_t2

0x33d5,	// (0x00044b6a) title_pane_t3

0x0002,

0xf532,	// (0x00050cc7) title_pane_t

0xd988,	// (0x0004f11d) aid_levels_battery_ParamLimits

0xd988,	// (0x0004f11d) aid_levels_battery

0xd9a4,	// (0x0004f139) battery_pane_g1_ParamLimits

0xd9a4,	// (0x0004f139) battery_pane_g1

0xd9c1,	// (0x0004f156) battery_pane_g2_ParamLimits

0xd9c1,	// (0x0004f156) battery_pane_g2

0x0001,

0xf78b,	// (0x00050f20) battery_pane_g_ParamLimits

0xf78b,	// (0x00050f20) battery_pane_g

0xdb82,	// (0x0004f317) uni_indicator_pane_g1

0xdb98,	// (0x0004f32d) uni_indicator_pane_g2

0xdbae,	// (0x0004f343) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00051091) uni_indicator_pane_g

0x47b6,	// (0x00045f4b) navi_icon_pane_ParamLimits

0x47b6,	// (0x00045f4b) navi_icon_pane

0x46f4,	// (0x00045e89) navi_midp_pane

0x47d2,	// (0x00045f67) navi_navi_pane

0x47dc,	// (0x00045f71) navi_text_pane_ParamLimits

0x47dc,	// (0x00045f71) navi_text_pane

0xd3be,	// (0x0004eb53) status_small_wait_pane_g1

0x382a,	// (0x00044fbf) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0005108c) status_small_wait_pane_g

0x605e,	// (0x000477f3) navi_navi_icon_text_pane

0x6066,	// (0x000477fb) navi_navi_pane_g1_ParamLimits

0x6066,	// (0x000477fb) navi_navi_pane_g1

0x6078,	// (0x0004780d) navi_navi_pane_g2_ParamLimits

0x6078,	// (0x0004780d) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0005105a) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0005105a) navi_navi_pane_g

0x608a,	// (0x0004781f) navi_navi_tabs_pane

0x6093,	// (0x00047828) navi_navi_text_pane

0x605e,	// (0x000477f3) navi_navi_volume_pane

0x603a,	// (0x000477cf) navi_text_pane_t1

0x602e,	// (0x000477c3) navi_icon_pane_g1

0x5f81,	// (0x00047716) navi_navi_text_pane_t1

0x1ef5,	// (0x0004368a) navi_navi_volume_pane_g1

0x1efd,	// (0x00043692) volume_small_pane

0x5ee7,	// (0x0004767c) navi_navi_icon_text_pane_g1

0x5eef,	// (0x00047684) navi_navi_icon_text_pane_t1

0x47d2,	// (0x00045f67) navi_tabs_2_long_pane

0x47d2,	// (0x00045f67) navi_tabs_2_pane

0x47d2,	// (0x00045f67) navi_tabs_3_long_pane

0x47d2,	// (0x00045f67) navi_tabs_3_pane

0x47d2,	// (0x00045f67) navi_tabs_4_pane

0x1ed5,	// (0x0004366a) tabs_2_active_pane_ParamLimits

0x1ed5,	// (0x0004366a) tabs_2_active_pane

0x1ee5,	// (0x0004367a) tabs_2_passive_pane_ParamLimits

0x1ee5,	// (0x0004367a) tabs_2_passive_pane

0x1ea3,	// (0x00043638) tabs_3_active_pane_ParamLimits

0x1ea3,	// (0x00043638) tabs_3_active_pane

0x1eb3,	// (0x00043648) tabs_3_passive_pane_ParamLimits

0x1eb3,	// (0x00043648) tabs_3_passive_pane

0x1ec4,	// (0x00043659) tabs_3_passive_pane_cp_ParamLimits

0x1ec4,	// (0x00043659) tabs_3_passive_pane_cp

0x1e5f,	// (0x000435f4) tabs_4_active_pane_ParamLimits

0x1e5f,	// (0x000435f4) tabs_4_active_pane

0x1e70,	// (0x00043605) tabs_4_passive_pane_ParamLimits

0x1e70,	// (0x00043605) tabs_4_passive_pane

0x1e81,	// (0x00043616) tabs_4_passive_pane_cp_ParamLimits

0x1e81,	// (0x00043616) tabs_4_passive_pane_cp

0x1e92,	// (0x00043627) tabs_4_passive_pane_cp2_ParamLimits

0x1e92,	// (0x00043627) tabs_4_passive_pane_cp2

0x1e3b,	// (0x000435d0) tabs_2_long_active_pane_ParamLimits

0x1e3b,	// (0x000435d0) tabs_2_long_active_pane

0x1e4d,	// (0x000435e2) tabs_2_long_passive_pane_ParamLimits

0x1e4d,	// (0x000435e2) tabs_2_long_passive_pane

0x1dfc,	// (0x00043591) tabs_3_long_active_pane_ParamLimits

0x1dfc,	// (0x00043591) tabs_3_long_active_pane

0x1e0f,	// (0x000435a4) tabs_3_long_passive_pane_ParamLimits

0x1e0f,	// (0x000435a4) tabs_3_long_passive_pane

0x1e28,	// (0x000435bd) tabs_3_long_passive_pane_cp_ParamLimits

0x1e28,	// (0x000435bd) tabs_3_long_passive_pane_cp

0x1da2,	// (0x00043537) volume_small_pane_g1

0x1dab,	// (0x00043540) volume_small_pane_g2

0x1db4,	// (0x00043549) volume_small_pane_g3

0x1dbd,	// (0x00043552) volume_small_pane_g4

0x1dc6,	// (0x0004355b) volume_small_pane_g5

0x1dcf,	// (0x00043564) volume_small_pane_g6

0x1dd8,	// (0x0004356d) volume_small_pane_g7

0x1de1,	// (0x00043576) volume_small_pane_g8

0x1dea,	// (0x0004357f) volume_small_pane_g9

0x1df3,	// (0x00043588) volume_small_pane_g10

0x0009,

0xf891,	// (0x00051026) volume_small_pane_g

0x3662,	// (0x00044df7) bg_active_tab_pane_cp2_ParamLimits

0x3662,	// (0x00044df7) bg_active_tab_pane_cp2

0x33f5,	// (0x00044b8a) tabs_3_active_pane_g1

0xbfa8,	// (0x0004d73d) tabs_3_active_pane_t1

0x3662,	// (0x00044df7) bg_passive_tab_pane_cp2_ParamLimits

0x3662,	// (0x00044df7) bg_passive_tab_pane_cp2

0x33f5,	// (0x00044b8a) tabs_3_passive_pane_g1

0xbfa8,	// (0x0004d73d) tabs_3_passive_pane_t1

0x3662,	// (0x00044df7) bg_active_tab_pane_cp3_ParamLimits

0x3662,	// (0x00044df7) bg_active_tab_pane_cp3

0x340f,	// (0x00044ba4) tabs_4_active_pane_g1

0xbfba,	// (0x0004d74f) tabs_4_active_pane_t1

0x3662,	// (0x00044df7) bg_passive_tab_pane_cp3_ParamLimits

0x3662,	// (0x00044df7) bg_passive_tab_pane_cp3

0x340f,	// (0x00044ba4) tabs_4_1_passive_pane_g1

0xbfba,	// (0x0004d74f) tabs_4_1_passive_pane_t1

0x4c65,	// (0x000463fa) list_highlight_pane_cp2

0xdc34,	// (0x0004f3c9) list_set_pane_ParamLimits

0xdc34,	// (0x0004f3c9) list_set_pane

0xdcce,	// (0x0004f463) main_pane_set_t1_ParamLimits

0xdcce,	// (0x0004f463) main_pane_set_t1

0xdcee,	// (0x0004f483) main_pane_set_t2_ParamLimits

0xdcee,	// (0x0004f483) main_pane_set_t2

0xdd02,	// (0x0004f497) main_pane_set_t3_ParamLimits

0xdd02,	// (0x0004f497) main_pane_set_t3

0xdd14,	// (0x0004f4a9) main_pane_set_t4_ParamLimits

0xdd14,	// (0x0004f4a9) main_pane_set_t4

0x0003,

0xf961,	// (0x000510f6) main_pane_set_t_ParamLimits

0xf961,	// (0x000510f6) main_pane_set_t

0xdd26,	// (0x0004f4bb) setting_code_pane

0xdd30,	// (0x0004f4c5) setting_slider_graphic_pane

0xdd30,	// (0x0004f4c5) setting_slider_pane

0xdd30,	// (0x0004f4c5) setting_text_pane

0xdd30,	// (0x0004f4c5) setting_volume_pane

0x0f66,	// (0x000426fb) volume_set_pane

0x33e7,	// (0x00044b7c) bg_set_opt_pane_cp

0x0f6e,	// (0x00042703) setting_slider_pane_t1

0x0f87,	// (0x0004271c) setting_slider_pane_t2

0x0fa1,	// (0x00042736) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00050cce) setting_slider_pane_t

0x0fb9,	// (0x0004274e) slider_set_pane

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp2

0x3429,	// (0x00044bbe) setting_slider_graphic_pane_g1

0x0fcf,	// (0x00042764) setting_slider_graphic_pane_t1

0x0fdf,	// (0x00042774) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00050cd5) setting_slider_graphic_pane_t

0x0fef,	// (0x00042784) slider_set_pane_cp

0x3307,	// (0x00044a9c) input_focus_pane_cp1

0x656b,	// (0x00047d00) list_set_text_pane

0xd3be,	// (0x0004eb53) setting_text_pane_g1

0x3307,	// (0x00044a9c) input_focus_pane_cp2

0xd3be,	// (0x0004eb53) setting_code_pane_g1

0x3432,	// (0x00044bc7) setting_code_pane_t1

0xf2e0,	// (0x00050a75) set_text_pane_t1_ParamLimits

0xf2e0,	// (0x00050a75) set_text_pane_t1

0x3ccc,	// (0x00045461) set_opt_bg_pane_g1

0x3cd4,	// (0x00045469) set_opt_bg_pane_g2

0x6545,	// (0x00047cda) set_opt_bg_pane_g3

0x3ce4,	// (0x00045479) set_opt_bg_pane_g4

0x3cec,	// (0x00045481) set_opt_bg_pane_g5

0x3cf4,	// (0x00045489) set_opt_bg_pane_g6

0x654f,	// (0x00047ce4) set_opt_bg_pane_g7

0x6557,	// (0x00047cec) set_opt_bg_pane_g8

0x6561,	// (0x00047cf6) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x000510e3) set_opt_bg_pane_g

0x6538,	// (0x00047ccd) slider_set_pane_g1

0x1f6a,	// (0x000436ff) slider_set_pane_g2

0x0006,

0xf93f,	// (0x000510d4) slider_set_pane_g

0x1f06,	// (0x0004369b) volume_set_pane_g1

0x1f0e,	// (0x000436a3) volume_set_pane_g2

0x1f16,	// (0x000436ab) volume_set_pane_g3

0x1f1e,	// (0x000436b3) volume_set_pane_g4

0x1f26,	// (0x000436bb) volume_set_pane_g5

0x1f2e,	// (0x000436c3) volume_set_pane_g6

0x1f36,	// (0x000436cb) volume_set_pane_g7

0x1f3e,	// (0x000436d3) volume_set_pane_g8

0x1f46,	// (0x000436db) volume_set_pane_g9

0x1f4e,	// (0x000436e3) volume_set_pane_g10

0x0009,

0xf917,	// (0x000510ac) volume_set_pane_g

0xbfcc,	// (0x0004d761) indicator_pane_ParamLimits

0xbfcc,	// (0x0004d761) indicator_pane

0xbff4,	// (0x0004d789) main_idle_pane_g2_ParamLimits

0xbff4,	// (0x0004d789) main_idle_pane_g2

0xc02c,	// (0x0004d7c1) main_pane_idle_g1_ParamLimits

0xc02c,	// (0x0004d7c1) main_pane_idle_g1

0x3481,	// (0x00044c16) popup_clock_digital_analogue_window_ParamLimits

0x3481,	// (0x00044c16) popup_clock_digital_analogue_window

0xc053,	// (0x0004d7e8) soft_indicator_pane_ParamLimits

0xc053,	// (0x0004d7e8) soft_indicator_pane

0xc06d,	// (0x0004d802) wallpaper_pane_ParamLimits

0xc06d,	// (0x0004d802) wallpaper_pane

0xd3be,	// (0x0004eb53) wallpaper_pane_g1

0xc07f,	// (0x0004d814) indicator_pane_g1_ParamLimits

0xc07f,	// (0x0004d814) indicator_pane_g1

0x6964,	// (0x000480f9) navi_navi_icon_text_pane_srt_g1

0x34d3,	// (0x00044c68) soft_indicator_pane_t1

0x34ed,	// (0x00044c82) aid_ps_area_pane

0xc095,	// (0x0004d82a) aid_ps_clock_pane

0x350c,	// (0x00044ca1) aid_ps_indicator_pane

0x3518,	// (0x00044cad) indicator_ps_pane_ParamLimits

0x3518,	// (0x00044cad) indicator_ps_pane

0x3527,	// (0x00044cbc) power_save_pane_g1_ParamLimits

0x3527,	// (0x00044cbc) power_save_pane_g1

0x3533,	// (0x00044cc8) power_save_pane_g2_ParamLimits

0x3533,	// (0x00044cc8) power_save_pane_g2

0x0b77,	// (0x0004230c) aid_navinavi_width_pane

0x34ed,	// (0x00044c82) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00050cda) power_save_pane_g_ParamLimits

0xf545,	// (0x00050cda) power_save_pane_g

0x3541,	// (0x00044cd6) power_save_pane_t1_ParamLimits

0x3541,	// (0x00044cd6) power_save_pane_t1

0xc095,	// (0x0004d82a) aid_ps_clock_pane_ParamLimits

0x350c,	// (0x00044ca1) aid_ps_indicator_pane_ParamLimits

0x3553,	// (0x00044ce8) power_save_pane_t4_ParamLimits

0x3553,	// (0x00044ce8) power_save_pane_t4

0x0001,

0xf54a,	// (0x00050cdf) power_save_pane_t_ParamLimits

0xf54a,	// (0x00050cdf) power_save_pane_t

0x357d,	// (0x00044d12) power_save_t3_ParamLimits

0x357d,	// (0x00044d12) power_save_t3

0x3568,	// (0x00044cfd) power_save_t2_ParamLimits

0x3568,	// (0x00044cfd) power_save_t2

0x3592,	// (0x00044d27) indicator_ps_pane_g1

0xc0a3,	// (0x0004d838) ai_gene_pane_ParamLimits

0xc0a3,	// (0x0004d838) ai_gene_pane

0xc0ba,	// (0x0004d84f) ai_links_pane_ParamLimits

0xc0ba,	// (0x0004d84f) ai_links_pane

0xc0d2,	// (0x0004d867) indicator_pane_cp1_ParamLimits

0xc0d2,	// (0x0004d867) indicator_pane_cp1

0xc0e1,	// (0x0004d876) main_pane_idle_g1_cp_ParamLimits

0xc0e1,	// (0x0004d876) main_pane_idle_g1_cp

0x35cb,	// (0x00044d60) popup_ai_links_title_window

0xc0f9,	// (0x0004d88e) soft_indicator_pane_cp1_ParamLimits

0xc0f9,	// (0x0004d88e) soft_indicator_pane_cp1

0x6327,	// (0x00047abc) ai_links_pane_g1

0x6330,	// (0x00047ac5) grid_ai_links_pane

0xdb79,	// (0x0004f30e) ai_gene_pane_1

0x6315,	// (0x00047aaa) ai_gene_pane_2

0x631e,	// (0x00047ab3) list_highlight_pane_cp4

0xdb55,	// (0x0004f2ea) cell_ai_link_pane_ParamLimits

0xdb55,	// (0x0004f2ea) cell_ai_link_pane

0x62e6,	// (0x00047a7b) cell_ai_link_pane_g1

0x382a,	// (0x00044fbf) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00051087) cell_ai_link_pane_g

0x3307,	// (0x00044a9c) grid_highlight_cp2

0x3307,	// (0x00044a9c) bg_popup_sub_pane_cp1

0x35ee,	// (0x00044d83) popup_ai_links_title_window_t1

0x6234,	// (0x000479c9) ai_gene_pane_1_g1_ParamLimits

0x6234,	// (0x000479c9) ai_gene_pane_1_g1

0x6240,	// (0x000479d5) ai_gene_pane_1_g2_ParamLimits

0x6240,	// (0x000479d5) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0005107d) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0005107d) ai_gene_pane_1_g

0x624d,	// (0x000479e2) ai_gene_pane_1_t1_ParamLimits

0x624d,	// (0x000479e2) ai_gene_pane_1_t1

0x6281,	// (0x00047a16) grid_ai_soft_ind_pane

0x621f,	// (0x000479b4) ai_gene_pane_2_t1_ParamLimits

0x621f,	// (0x000479b4) ai_gene_pane_2_t1

0xc10d,	// (0x0004d8a2) main_pane_empty_t1_ParamLimits

0xc10d,	// (0x0004d8a2) main_pane_empty_t1

0xc125,	// (0x0004d8ba) main_pane_empty_t2_ParamLimits

0xc125,	// (0x0004d8ba) main_pane_empty_t2

0xc13a,	// (0x0004d8cf) main_pane_empty_t3_ParamLimits

0xc13a,	// (0x0004d8cf) main_pane_empty_t3

0xc14c,	// (0x0004d8e1) main_pane_empty_t4_ParamLimits

0xc14c,	// (0x0004d8e1) main_pane_empty_t4

0xc15e,	// (0x0004d8f3) main_pane_empty_t5_ParamLimits

0xc15e,	// (0x0004d8f3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00050ce4) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00050ce4) main_pane_empty_t

0x3d93,	// (0x00045528) bg_popup_window_pane_ParamLimits

0x3d93,	// (0x00045528) bg_popup_window_pane

0x5f8f,	// (0x00047724) find_popup_pane_cp2_ParamLimits

0x5f8f,	// (0x00047724) find_popup_pane_cp2

0x5f9b,	// (0x00047730) heading_pane_ParamLimits

0x5f9b,	// (0x00047730) heading_pane

0x3307,	// (0x00044a9c) bg_popup_sub_pane

0xdad6,	// (0x0004f26b) bg_popup_window_pane_g1_ParamLimits

0xdad6,	// (0x0004f26b) bg_popup_window_pane_g1

0xdae5,	// (0x0004f27a) bg_popup_window_pane_g2_ParamLimits

0xdae5,	// (0x0004f27a) bg_popup_window_pane_g2

0xdaf1,	// (0x0004f286) bg_popup_window_pane_g3_ParamLimits

0xdaf1,	// (0x0004f286) bg_popup_window_pane_g3

0xdafd,	// (0x0004f292) bg_popup_window_pane_g4_ParamLimits

0xdafd,	// (0x0004f292) bg_popup_window_pane_g4

0xdb0c,	// (0x0004f2a1) bg_popup_window_pane_g5_ParamLimits

0xdb0c,	// (0x0004f2a1) bg_popup_window_pane_g5

0xdb1c,	// (0x0004f2b1) bg_popup_window_pane_g6_ParamLimits

0xdb1c,	// (0x0004f2b1) bg_popup_window_pane_g6

0xdb28,	// (0x0004f2bd) bg_popup_window_pane_g7_ParamLimits

0xdb28,	// (0x0004f2bd) bg_popup_window_pane_g7

0xdb37,	// (0x0004f2cc) bg_popup_window_pane_g8_ParamLimits

0xdb37,	// (0x0004f2cc) bg_popup_window_pane_g8

0xdb46,	// (0x0004f2db) bg_popup_window_pane_g9_ParamLimits

0xdb46,	// (0x0004f2db) bg_popup_window_pane_g9

0x5f75,	// (0x0004770a) bg_popup_window_pane_g10_ParamLimits

0x5f75,	// (0x0004770a) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00051045) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00051045) bg_popup_window_pane_g

0x5e9e,	// (0x00047633) bg_popup_heading_pane_ParamLimits

0x5e9e,	// (0x00047633) bg_popup_heading_pane

0x2069,	// (0x000437fe) tabs_4_passive_pane_cp_srt_ParamLimits

0x2069,	// (0x000437fe) tabs_4_passive_pane_cp_srt

0x207b,	// (0x00043810) tabs_4_passive_pane_srt_ParamLimits

0x5eb2,	// (0x00047647) heading_pane_g2

0x207b,	// (0x00043810) tabs_4_passive_pane_srt

0x5203,	// (0x00046998) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5203,	// (0x00046998) bg_passive_tab_pane_cp3_srt

0x5eba,	// (0x0004764f) heading_pane_t1_ParamLimits

0x5eba,	// (0x0004764f) heading_pane_t1

0x5ed1,	// (0x00047666) heading_pane_t2_ParamLimits

0x5ed1,	// (0x00047666) heading_pane_t2

0x0001,

0xf8ab,	// (0x00051040) heading_pane_t_ParamLimits

0xf8ab,	// (0x00051040) heading_pane_t

0x59cb,	// (0x00047160) bg_popup_heading_pane_g1

0x5a7a,	// (0x0004720f) bg_popup_heading_pane_g2

0x5a84,	// (0x00047219) bg_popup_heading_pane_g3

0x5a8e,	// (0x00047223) bg_popup_heading_pane_g4

0x5a98,	// (0x0004722d) bg_popup_heading_pane_g5

0x5aa2,	// (0x00047237) bg_popup_heading_pane_g6

0x5aaa,	// (0x0004723f) bg_popup_heading_pane_g7

0x5ab2,	// (0x00047247) bg_popup_heading_pane_g8

0x5abc,	// (0x00047251) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00050ffc) bg_popup_heading_pane_g

0x518f,	// (0x00046924) bg_popup_sub_pane_g1

0x5197,	// (0x0004692c) bg_popup_sub_pane_g2

0x519f,	// (0x00046934) bg_popup_sub_pane_g3

0x51a7,	// (0x0004693c) bg_popup_sub_pane_g4

0x51af,	// (0x00046944) bg_popup_sub_pane_g5

0x51b7,	// (0x0004694c) bg_popup_sub_pane_g6

0x51bf,	// (0x00046954) bg_popup_sub_pane_g7

0x51c7,	// (0x0004695c) bg_popup_sub_pane_g8

0x51cf,	// (0x00046964) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00050fd6) bg_popup_sub_pane_g

0x3662,	// (0x00044df7) bg_popup_window_pane_cp5_ParamLimits

0x3662,	// (0x00044df7) bg_popup_window_pane_cp5

0x367e,	// (0x00044e13) popup_note_window_g1_ParamLimits

0x367e,	// (0x00044e13) popup_note_window_g1

0x368a,	// (0x00044e1f) popup_note_window_t1_ParamLimits

0x368a,	// (0x00044e1f) popup_note_window_t1

0x36a0,	// (0x00044e35) popup_note_window_t2_ParamLimits

0x36a0,	// (0x00044e35) popup_note_window_t2

0x36b6,	// (0x00044e4b) popup_note_window_t3_ParamLimits

0x36b6,	// (0x00044e4b) popup_note_window_t3

0x36cc,	// (0x00044e61) popup_note_window_t4_ParamLimits

0x36cc,	// (0x00044e61) popup_note_window_t4

0x36f4,	// (0x00044e89) popup_note_window_t5_ParamLimits

0x36f4,	// (0x00044e89) popup_note_window_t5

0x0004,

0xf55a,	// (0x00050cef) popup_note_window_t_ParamLimits

0xf55a,	// (0x00050cef) popup_note_window_t

0x373e,	// (0x00044ed3) bg_popup_window_pane_cp6_ParamLimits

0x373e,	// (0x00044ed3) bg_popup_window_pane_cp6

0x5947,	// (0x000470dc) popup_note_image_window_g1_ParamLimits

0x5947,	// (0x000470dc) popup_note_image_window_g1

0x5953,	// (0x000470e8) popup_note_image_window_g2_ParamLimits

0x5953,	// (0x000470e8) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00050fca) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00050fca) popup_note_image_window_g

0x596c,	// (0x00047101) popup_note_image_window_t1_ParamLimits

0x596c,	// (0x00047101) popup_note_image_window_t1

0x5985,	// (0x0004711a) popup_note_image_window_t2_ParamLimits

0x5985,	// (0x0004711a) popup_note_image_window_t2

0x599e,	// (0x00047133) popup_note_image_window_t3_ParamLimits

0x599e,	// (0x00047133) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00050fcf) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00050fcf) popup_note_image_window_t

0x5808,	// (0x00046f9d) bg_popup_window_pane_cp7_ParamLimits

0x5808,	// (0x00046f9d) bg_popup_window_pane_cp7

0x5838,	// (0x00046fcd) popup_note_wait_window_g1_ParamLimits

0x5838,	// (0x00046fcd) popup_note_wait_window_g1

0x5844,	// (0x00046fd9) popup_note_wait_window_g2_ParamLimits

0x5844,	// (0x00046fd9) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00050fb8) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00050fb8) popup_note_wait_window_g

0x585c,	// (0x00046ff1) popup_note_wait_window_t1_ParamLimits

0x585c,	// (0x00046ff1) popup_note_wait_window_t1

0x5883,	// (0x00047018) popup_note_wait_window_t2_ParamLimits

0x5883,	// (0x00047018) popup_note_wait_window_t2

0x58a0,	// (0x00047035) popup_note_wait_window_t3_ParamLimits

0x58a0,	// (0x00047035) popup_note_wait_window_t3

0x58b3,	// (0x00047048) popup_note_wait_window_t4_ParamLimits

0x58b3,	// (0x00047048) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00050fbf) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00050fbf) popup_note_wait_window_t

0x58d8,	// (0x0004706d) wait_bar_pane_ParamLimits

0x58d8,	// (0x0004706d) wait_bar_pane

0x3307,	// (0x00044a9c) wait_anim_pane

0x3307,	// (0x00044a9c) wait_border_pane

0xd3be,	// (0x0004eb53) wait_anim_pane_g1

0xd3be,	// (0x0004eb53) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00050e78) wait_anim_pane_g

0x57ac,	// (0x00046f41) wait_border_pane_g1

0x57b7,	// (0x00046f4c) wait_border_pane_g2

0x57c0,	// (0x00046f55) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00050fb1) wait_border_pane_g

0x560b,	// (0x00046da0) bg_popup_window_pane_cp16_ParamLimits

0x560b,	// (0x00046da0) bg_popup_window_pane_cp16

0x5717,	// (0x00046eac) indicator_popup_pane_cp4_ParamLimits

0x5717,	// (0x00046eac) indicator_popup_pane_cp4

0x572b,	// (0x00046ec0) popup_query_data_window_t1_ParamLimits

0x572b,	// (0x00046ec0) popup_query_data_window_t1

0x573d,	// (0x00046ed2) popup_query_data_window_t2_ParamLimits

0x573d,	// (0x00046ed2) popup_query_data_window_t2

0x5756,	// (0x00046eeb) popup_query_data_window_t3_ParamLimits

0x5756,	// (0x00046eeb) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00050faa) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00050faa) popup_query_data_window_t

0x5770,	// (0x00046f05) query_popup_data_pane_ParamLimits

0x5770,	// (0x00046f05) query_popup_data_pane

0x5784,	// (0x00046f19) query_popup_data_pane_cp1_ParamLimits

0x5784,	// (0x00046f19) query_popup_data_pane_cp1

0x560b,	// (0x00046da0) bg_popup_window_pane_cp10_ParamLimits

0x560b,	// (0x00046da0) bg_popup_window_pane_cp10

0x563d,	// (0x00046dd2) indicator_popup_pane_ParamLimits

0x563d,	// (0x00046dd2) indicator_popup_pane

0x565f,	// (0x00046df4) popup_query_code_window_t1_ParamLimits

0x565f,	// (0x00046df4) popup_query_code_window_t1

0x5679,	// (0x00046e0e) popup_query_code_window_t2_ParamLimits

0x5679,	// (0x00046e0e) popup_query_code_window_t2

0x56ce,	// (0x00046e63) popup_query_code_window_t3_ParamLimits

0x56ce,	// (0x00046e63) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00050fa3) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00050fa3) popup_query_code_window_t

0x56fd,	// (0x00046e92) query_popup_pane_ParamLimits

0x56fd,	// (0x00046e92) query_popup_pane

0x373e,	// (0x00044ed3) bg_popup_window_pane_cp15_ParamLimits

0x373e,	// (0x00044ed3) bg_popup_window_pane_cp15

0x375c,	// (0x00044ef1) indicator_popup_pane_cp1_ParamLimits

0x375c,	// (0x00044ef1) indicator_popup_pane_cp1

0x376f,	// (0x00044f04) indicator_popup_pane_cp2_ParamLimits

0x376f,	// (0x00044f04) indicator_popup_pane_cp2

0x3782,	// (0x00044f17) popup_query_data_code_window_g1_ParamLimits

0x3782,	// (0x00044f17) popup_query_data_code_window_g1

0x3795,	// (0x00044f2a) popup_query_data_code_window_t1_ParamLimits

0x3795,	// (0x00044f2a) popup_query_data_code_window_t1

0x37a7,	// (0x00044f3c) popup_query_data_code_window_t2_ParamLimits

0x37a7,	// (0x00044f3c) popup_query_data_code_window_t2

0x37b9,	// (0x00044f4e) popup_query_data_code_window_t3_ParamLimits

0x37b9,	// (0x00044f4e) popup_query_data_code_window_t3

0x37cf,	// (0x00044f64) popup_query_data_code_window_t4_ParamLimits

0x37cf,	// (0x00044f64) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00050cfa) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00050cfa) popup_query_data_code_window_t

0x1ca7,	// (0x0004343c) list_single_midp_graphic_pane_g3

0x37e7,	// (0x00044f7c) query_popup_data_pane_cp2_ParamLimits

0x37fa,	// (0x00044f8f) query_popup_pane_cp2_ParamLimits

0x37fa,	// (0x00044f8f) query_popup_pane_cp2

0x3307,	// (0x00044a9c) bg_popup_window_pane_cp11

0x55ef,	// (0x00046d84) heading_pane_cp5

0x55f7,	// (0x00046d8c) listscroll_popup_info_pane

0x3307,	// (0x00044a9c) input_focus_pane_cp3

0x380d,	// (0x00044fa2) query_popup_pane_t1

0x381b,	// (0x00044fb0) list_popup_info_pane_ParamLimits

0x381b,	// (0x00044fb0) list_popup_info_pane

0x382a,	// (0x00044fbf) listscroll_popup_info_pane_g1

0x3832,	// (0x00044fc7) scroll_pane_cp7

0x383c,	// (0x00044fd1) popup_info_list_pane_t1_ParamLimits

0x383c,	// (0x00044fd1) popup_info_list_pane_t1

0x3856,	// (0x00044feb) popup_info_list_pane_t2_ParamLimits

0x3856,	// (0x00044feb) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00050d03) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00050d03) popup_info_list_pane_t

0x3307,	// (0x00044a9c) bg_popup_window_pane_cp12

0x697e,	// (0x00048113) find_popup_pane

0x33e7,	// (0x00044b7c) bg_popup_window_pane_cp3

0x3870,	// (0x00045005) heading_pane_cp3

0x387f,	// (0x00045014) listscroll_popup_graphic_pane

0x3307,	// (0x00044a9c) bg_popup_window_pane_cp4

0xc1c0,	// (0x0004d955) heading_pane_cp4

0x38e9,	// (0x0004507e) listscroll_popup_colour_pane

0xc1ca,	// (0x0004d95f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc1ca,	// (0x0004d95f) cell_large_graphic_colour_none_popup_pane

0xc1de,	// (0x0004d973) grid_large_graphic_colour_popup_pane_ParamLimits

0xc1de,	// (0x0004d973) grid_large_graphic_colour_popup_pane

0xc202,	// (0x0004d997) listscroll_popup_colour_pane_g1_ParamLimits

0xc202,	// (0x0004d997) listscroll_popup_colour_pane_g1

0xc219,	// (0x0004d9ae) listscroll_popup_colour_pane_g2_ParamLimits

0xc219,	// (0x0004d9ae) listscroll_popup_colour_pane_g2

0xc230,	// (0x0004d9c5) listscroll_popup_colour_pane_g3_ParamLimits

0xc230,	// (0x0004d9c5) listscroll_popup_colour_pane_g3

0xc240,	// (0x0004d9d5) listscroll_popup_colour_pane_g4_ParamLimits

0xc240,	// (0x0004d9d5) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00050d08) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00050d08) listscroll_popup_colour_pane_g

0x3977,	// (0x0004510c) scroll_pane_cp6_ParamLimits

0x3977,	// (0x0004510c) scroll_pane_cp6

0xc250,	// (0x0004d9e5) cell_large_graphic_colour_popup_pane_ParamLimits

0xc250,	// (0x0004d9e5) cell_large_graphic_colour_popup_pane

0x39a8,	// (0x0004513d) cell_large_graphic_colour_none_popup_pane_t1

0x3307,	// (0x00044a9c) grid_highlight_pane_cp5

0x39b7,	// (0x0004514c) cell_large_graphic_colour_popup_pane_g1

0x39bf,	// (0x00045154) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00050d11) cell_large_graphic_colour_popup_pane_g

0x39c7,	// (0x0004515c) cell_large_graphic_colour_popup_pane_g2_copy1

0x39d0,	// (0x00045165) grid_highlight_pane_cp4

0x39d8,	// (0x0004516d) bg_popup_window_pane_cp8_ParamLimits

0x39d8,	// (0x0004516d) bg_popup_window_pane_cp8

0x39f3,	// (0x00045188) popup_snote_single_text_window_g1_ParamLimits

0x39f3,	// (0x00045188) popup_snote_single_text_window_g1

0x3a05,	// (0x0004519a) popup_snote_single_text_window_t1_ParamLimits

0x3a05,	// (0x0004519a) popup_snote_single_text_window_t1

0x3a18,	// (0x000451ad) popup_snote_single_text_window_t2_ParamLimits

0x3a18,	// (0x000451ad) popup_snote_single_text_window_t2

0x3a2b,	// (0x000451c0) popup_snote_single_text_window_t3_ParamLimits

0x3a2b,	// (0x000451c0) popup_snote_single_text_window_t3

0x3a64,	// (0x000451f9) popup_snote_single_text_window_t4_ParamLimits

0x3a64,	// (0x000451f9) popup_snote_single_text_window_t4

0x3a98,	// (0x0004522d) popup_snote_single_text_window_t5_ParamLimits

0x3a98,	// (0x0004522d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00050d16) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00050d16) popup_snote_single_text_window_t

0x3ac7,	// (0x0004525c) bg_popup_window_pane_cp9_ParamLimits

0x3ac7,	// (0x0004525c) bg_popup_window_pane_cp9

0x39f3,	// (0x00045188) popup_snote_single_graphic_window_g1_ParamLimits

0x39f3,	// (0x00045188) popup_snote_single_graphic_window_g1

0x3ad5,	// (0x0004526a) popup_snote_single_graphic_window_g2_ParamLimits

0x3ad5,	// (0x0004526a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00050d21) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00050d21) popup_snote_single_graphic_window_g

0x3ae1,	// (0x00045276) popup_snote_single_graphic_window_t1_ParamLimits

0x3ae1,	// (0x00045276) popup_snote_single_graphic_window_t1

0x3af4,	// (0x00045289) popup_snote_single_graphic_window_t2_ParamLimits

0x3af4,	// (0x00045289) popup_snote_single_graphic_window_t2

0x3b07,	// (0x0004529c) popup_snote_single_graphic_window_t3_ParamLimits

0x3b07,	// (0x0004529c) popup_snote_single_graphic_window_t3

0x3b40,	// (0x000452d5) popup_snote_single_graphic_window_t4_ParamLimits

0x3b40,	// (0x000452d5) popup_snote_single_graphic_window_t4

0x3b74,	// (0x00045309) popup_snote_single_graphic_window_t5_ParamLimits

0x3b74,	// (0x00045309) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00050d26) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00050d26) popup_snote_single_graphic_window_t

0x68c0,	// (0x00048055) grid_graphic_popup_pane_ParamLimits

0x68c0,	// (0x00048055) grid_graphic_popup_pane

0x68ea,	// (0x0004807f) listscroll_popup_graphic_pane_g1_ParamLimits

0x68ea,	// (0x0004807f) listscroll_popup_graphic_pane_g1

0xde26,	// (0x0004f5bb) listscroll_popup_graphic_pane_g2_ParamLimits

0xde26,	// (0x0004f5bb) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00051120) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00051120) listscroll_popup_graphic_pane_g

0x6912,	// (0x000480a7) scroll_pane_cp5

0xdde3,	// (0x0004f578) cell_graphic_popup_pane_ParamLimits

0xdde3,	// (0x0004f578) cell_graphic_popup_pane

0x6832,	// (0x00047fc7) cell_graphic_popup_pane_g1

0x683a,	// (0x00047fcf) cell_graphic_popup_pane_g2

0x39c7,	// (0x0004515c) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00051119) cell_graphic_popup_pane_g

0x6843,	// (0x00047fd8) cell_graphic_popup_pane_t2

0x39d0,	// (0x00045165) grid_highlight_pane_cp3

0x3bb5,	// (0x0004534a) list_gen_pane_ParamLimits

0x3bb5,	// (0x0004534a) list_gen_pane

0x3be7,	// (0x0004537c) scroll_pane

0xdd9a,	// (0x0004f52f) bg_list_pane_g1_ParamLimits

0xdd9a,	// (0x0004f52f) bg_list_pane_g1

0x67a7,	// (0x00047f3c) bg_list_pane_g2_ParamLimits

0x67a7,	// (0x00047f3c) bg_list_pane_g2

0x67bc,	// (0x00047f51) bg_list_pane_g3_ParamLimits

0x67bc,	// (0x00047f51) bg_list_pane_g3

0x67d0,	// (0x00047f65) bg_list_pane_g4_ParamLimits

0x67d0,	// (0x00047f65) bg_list_pane_g4

0xddb7,	// (0x0004f54c) bg_list_pane_g5_ParamLimits

0xddb7,	// (0x0004f54c) bg_list_pane_g5

0x0004,

0xf979,	// (0x0005110e) bg_list_pane_g_ParamLimits

0xf979,	// (0x0005110e) bg_list_pane_g

0xdd63,	// (0x0004f4f8) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double2_graphic_large_graphic_pane

0xdd63,	// (0x0004f4f8) list_double2_graphic_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double2_graphic_pane

0xdd63,	// (0x0004f4f8) list_double2_large_graphic_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double2_large_graphic_pane

0xdd63,	// (0x0004f4f8) list_double2_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double2_pane

0xdd63,	// (0x0004f4f8) list_double_graphic_heading_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_graphic_heading_pane

0xdd63,	// (0x0004f4f8) list_double_graphic_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_graphic_pane

0xdd63,	// (0x0004f4f8) list_double_heading_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_heading_pane

0xdd63,	// (0x0004f4f8) list_double_large_graphic_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_large_graphic_pane

0xdd63,	// (0x0004f4f8) list_double_number_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_number_pane

0xdd63,	// (0x0004f4f8) list_double_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_pane

0xdd63,	// (0x0004f4f8) list_double_time_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_double_time_pane

0xdd63,	// (0x0004f4f8) list_setting_number_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_setting_number_pane

0xdd63,	// (0x0004f4f8) list_setting_pane_ParamLimits

0xdd63,	// (0x0004f4f8) list_setting_pane

0xdd75,	// (0x0004f50a) list_single_2graphic_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_2graphic_pane

0xdd75,	// (0x0004f50a) list_single_graphic_heading_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_graphic_heading_pane

0xdd75,	// (0x0004f50a) list_single_graphic_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_graphic_pane

0xdd75,	// (0x0004f50a) list_single_heading_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_heading_pane

0xdd75,	// (0x0004f50a) list_single_large_graphic_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_large_graphic_pane

0xdd75,	// (0x0004f50a) list_single_number_heading_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_number_heading_pane

0xdd75,	// (0x0004f50a) list_single_number_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_number_pane

0xdd75,	// (0x0004f50a) list_single_pane_ParamLimits

0xdd75,	// (0x0004f50a) list_single_pane

0x3307,	// (0x00044a9c) list_highlight_pane_cp1

0x44c0,	// (0x00045c55) list_single_pane_g1_ParamLimits

0x44c0,	// (0x00045c55) list_single_pane_g1

0x0ff7,	// (0x0004278c) list_single_pane_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00050d42) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00050d42) list_single_pane_g

0x05b6,	// (0x00041d4b) list_single_pane_t1_ParamLimits

0x05b6,	// (0x00041d4b) list_single_pane_t1

0x44c0,	// (0x00045c55) list_single_number_pane_g1_ParamLimits

0x44c0,	// (0x00045c55) list_single_number_pane_g1

0x0ff7,	// (0x0004278c) list_single_number_pane_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00050d42) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00050d42) list_single_number_pane_g

0x0491,	// (0x00041c26) list_single_number_pane_t1_ParamLimits

0x0491,	// (0x00041c26) list_single_number_pane_t1

0x0574,	// (0x00041d09) list_single_number_pane_t2_ParamLimits

0x0574,	// (0x00041d09) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x000510cf) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x000510cf) list_single_number_pane_t

0xf2f9,	// (0x00050a8e) list_single_graphic_pane_g1_ParamLimits

0xf2f9,	// (0x00050a8e) list_single_graphic_pane_g1

0x44c0,	// (0x00045c55) list_single_graphic_pane_g2_ParamLimits

0x44c0,	// (0x00045c55) list_single_graphic_pane_g2

0x0ff7,	// (0x0004278c) list_single_graphic_pane_g3_ParamLimits

0x0ff7,	// (0x0004278c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00050d31) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00050d31) list_single_graphic_pane_g

0xf305,	// (0x00050a9a) list_single_graphic_pane_t1_ParamLimits

0xf305,	// (0x00050a9a) list_single_graphic_pane_t1

0xf31b,	// (0x00050ab0) list_single_heading_pane_g1_ParamLimits

0xf31b,	// (0x00050ab0) list_single_heading_pane_g1

0x0ff7,	// (0x0004278c) list_single_heading_pane_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00050d38) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00050d38) list_single_heading_pane_g

0xf32e,	// (0x00050ac3) list_single_heading_pane_t1_ParamLimits

0xf32e,	// (0x00050ac3) list_single_heading_pane_t1

0x1003,	// (0x00042798) list_single_heading_pane_t2_ParamLimits

0x1003,	// (0x00042798) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00050d3d) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00050d3d) list_single_heading_pane_t

0x44c0,	// (0x00045c55) list_single_number_heading_pane_g1_ParamLimits

0x44c0,	// (0x00045c55) list_single_number_heading_pane_g1

0x0ff7,	// (0x0004278c) list_single_number_heading_pane_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00050d42) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00050d42) list_single_number_heading_pane_g

0xf344,	// (0x00050ad9) list_single_number_heading_pane_t1_ParamLimits

0xf344,	// (0x00050ad9) list_single_number_heading_pane_t1

0xf35a,	// (0x00050aef) list_single_number_heading_pane_t2_ParamLimits

0xf35a,	// (0x00050aef) list_single_number_heading_pane_t2

0xf36c,	// (0x00050b01) list_single_number_heading_pane_t3_ParamLimits

0xf36c,	// (0x00050b01) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00050d47) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00050d47) list_single_number_heading_pane_t

0xf37e,	// (0x00050b13) list_single_graphic_heading_pane_g1_ParamLimits

0xf37e,	// (0x00050b13) list_single_graphic_heading_pane_g1

0xc279,	// (0x0004da0e) list_single_graphic_heading_pane_g4_ParamLimits

0xc279,	// (0x0004da0e) list_single_graphic_heading_pane_g4

0x0ff7,	// (0x0004278c) list_single_graphic_heading_pane_g5_ParamLimits

0x0ff7,	// (0x0004278c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00050d4e) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00050d4e) list_single_graphic_heading_pane_g

0xf344,	// (0x00050ad9) list_single_graphic_heading_pane_t1_ParamLimits

0xf344,	// (0x00050ad9) list_single_graphic_heading_pane_t1

0xf396,	// (0x00050b2b) list_single_graphic_heading_pane_t2_ParamLimits

0xf396,	// (0x00050b2b) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00050d55) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00050d55) list_single_graphic_heading_pane_t

0x210e,	// (0x000438a3) list_single_large_graphic_pane_g1_ParamLimits

0x210e,	// (0x000438a3) list_single_large_graphic_pane_g1

0x44c0,	// (0x00045c55) list_single_large_graphic_pane_g2_ParamLimits

0x44c0,	// (0x00045c55) list_single_large_graphic_pane_g2

0x0ff7,	// (0x0004278c) list_single_large_graphic_pane_g3_ParamLimits

0x0ff7,	// (0x0004278c) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00050d5a) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00050d5a) list_single_large_graphic_pane_g

0x57b7,	// (0x00046f4c) wait_border_pane_g2_copy1

0xc28a,	// (0x0004da1f) list_single_large_graphic_pane_g4_cp2

0x069d,	// (0x00041e32) list_single_large_graphic_pane_t1_ParamLimits

0x069d,	// (0x00041e32) list_single_large_graphic_pane_t1

0x3c1b,	// (0x000453b0) list_double_pane_g1_ParamLimits

0x3c1b,	// (0x000453b0) list_double_pane_g1

0x1059,	// (0x000427ee) list_double_pane_g2_ParamLimits

0x1059,	// (0x000427ee) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00050d61) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00050d61) list_double_pane_g

0xb69c,	// (0x0004ce31) list_double_pane_t1_ParamLimits

0xb69c,	// (0x0004ce31) list_double_pane_t1

0xb6b2,	// (0x0004ce47) list_double_pane_t2_ParamLimits

0xb6b2,	// (0x0004ce47) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00050d66) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00050d66) list_double_pane_t

0xb6c4,	// (0x0004ce59) list_double2_pane_g1_ParamLimits

0xb6c4,	// (0x0004ce59) list_double2_pane_g1

0x0023,	// (0x000417b8) list_double2_pane_g2_ParamLimits

0x0023,	// (0x000417b8) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00050d6b) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00050d6b) list_double2_pane_g

0xb6d5,	// (0x0004ce6a) list_double2_pane_t1_ParamLimits

0xb6d5,	// (0x0004ce6a) list_double2_pane_t1

0xb6eb,	// (0x0004ce80) list_double2_pane_t2_ParamLimits

0xb6eb,	// (0x0004ce80) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00050d70) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00050d70) list_double2_pane_t

0x3c1b,	// (0x000453b0) list_double_number_pane_g1_ParamLimits

0x3c1b,	// (0x000453b0) list_double_number_pane_g1

0x1059,	// (0x000427ee) list_double_number_pane_g2_ParamLimits

0x1059,	// (0x000427ee) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00050d61) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00050d61) list_double_number_pane_g

0xb6fd,	// (0x0004ce92) list_double_number_pane_t1_ParamLimits

0xb6fd,	// (0x0004ce92) list_double_number_pane_t1

0xf4ef,	// (0x00050c84) list_double_number_pane_t2_ParamLimits

0xf4ef,	// (0x00050c84) list_double_number_pane_t2

0xb70f,	// (0x0004cea4) list_double_number_pane_t3_ParamLimits

0xb70f,	// (0x0004cea4) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00050d75) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00050d75) list_double_number_pane_t

0xf505,	// (0x00050c9a) list_double_graphic_pane_g1_ParamLimits

0xf505,	// (0x00050c9a) list_double_graphic_pane_g1

0xb721,	// (0x0004ceb6) list_double_graphic_pane_g2_ParamLimits

0xb721,	// (0x0004ceb6) list_double_graphic_pane_g2

0xb730,	// (0x0004cec5) list_double_graphic_pane_g3_ParamLimits

0xb730,	// (0x0004cec5) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00050d7c) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00050d7c) list_double_graphic_pane_g

0xb748,	// (0x0004cedd) list_double_graphic_pane_t1_ParamLimits

0xb748,	// (0x0004cedd) list_double_graphic_pane_t1

0xb75e,	// (0x0004cef3) list_double_graphic_pane_t2_ParamLimits

0xb75e,	// (0x0004cef3) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00050d85) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00050d85) list_double_graphic_pane_t

0xb770,	// (0x0004cf05) list_double2_graphic_pane_g1_ParamLimits

0xb770,	// (0x0004cf05) list_double2_graphic_pane_g1

0x56c2,	// (0x00046e57) list_double2_graphic_pane_g2_ParamLimits

0x56c2,	// (0x00046e57) list_double2_graphic_pane_g2

0xb77c,	// (0x0004cf11) list_double2_graphic_pane_g3_ParamLimits

0xb77c,	// (0x0004cf11) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00050d8a) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00050d8a) list_double2_graphic_pane_g

0xb788,	// (0x0004cf1d) list_double2_graphic_pane_t1_ParamLimits

0xb788,	// (0x0004cf1d) list_double2_graphic_pane_t1

0xb79e,	// (0x0004cf33) list_double2_graphic_pane_t2_ParamLimits

0xb79e,	// (0x0004cf33) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00050d91) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00050d91) list_double2_graphic_pane_t

0xb7b0,	// (0x0004cf45) list_double_large_graphic_pane_g1_ParamLimits

0xb7b0,	// (0x0004cf45) list_double_large_graphic_pane_g1

0xb7cf,	// (0x0004cf64) list_double_large_graphic_pane_g2_ParamLimits

0xb7cf,	// (0x0004cf64) list_double_large_graphic_pane_g2

0x1059,	// (0x000427ee) list_double_large_graphic_pane_g3_ParamLimits

0x1059,	// (0x000427ee) list_double_large_graphic_pane_g3

0xb7e5,	// (0x0004cf7a) list_double_large_graphic_pane_g4_ParamLimits

0xb7e5,	// (0x0004cf7a) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00050d96) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00050d96) list_double_large_graphic_pane_g

0xb7f8,	// (0x0004cf8d) list_double_large_graphic_pane_t1_ParamLimits

0xb7f8,	// (0x0004cf8d) list_double_large_graphic_pane_t1

0xb811,	// (0x0004cfa6) list_double_large_graphic_pane_t2_ParamLimits

0xb811,	// (0x0004cfa6) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00050da1) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00050da1) list_double_large_graphic_pane_t

0xc292,	// (0x0004da27) list_double2_large_graphic_pane_g1_ParamLimits

0xc292,	// (0x0004da27) list_double2_large_graphic_pane_g1

0xb823,	// (0x0004cfb8) list_double2_large_graphic_pane_g2_ParamLimits

0xb823,	// (0x0004cfb8) list_double2_large_graphic_pane_g2

0xb77c,	// (0x0004cf11) list_double2_large_graphic_pane_g3_ParamLimits

0xb77c,	// (0x0004cf11) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00050da6) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00050da6) list_double2_large_graphic_pane_g

0xb834,	// (0x0004cfc9) list_double2_large_graphic_pane_t1_ParamLimits

0xb834,	// (0x0004cfc9) list_double2_large_graphic_pane_t1

0xb84a,	// (0x0004cfdf) list_double2_large_graphic_pane_t2_ParamLimits

0xb84a,	// (0x0004cfdf) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00050dad) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00050dad) list_double2_large_graphic_pane_t

0xb85c,	// (0x0004cff1) list_double_heading_pane_g1_ParamLimits

0xb85c,	// (0x0004cff1) list_double_heading_pane_g1

0xb86d,	// (0x0004d002) list_double_heading_pane_g2_ParamLimits

0xb86d,	// (0x0004d002) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00050db2) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00050db2) list_double_heading_pane_g

0xb879,	// (0x0004d00e) list_double_heading_pane_t1_ParamLimits

0xb879,	// (0x0004d00e) list_double_heading_pane_t1

0xb6eb,	// (0x0004ce80) list_double_heading_pane_t2_ParamLimits

0xb6eb,	// (0x0004ce80) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00050db7) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00050db7) list_double_heading_pane_t

0xf511,	// (0x00050ca6) list_double_graphic_heading_pane_g1_ParamLimits

0xf511,	// (0x00050ca6) list_double_graphic_heading_pane_g1

0xb85c,	// (0x0004cff1) list_double_graphic_heading_pane_g2_ParamLimits

0xb85c,	// (0x0004cff1) list_double_graphic_heading_pane_g2

0xb86d,	// (0x0004d002) list_double_graphic_heading_pane_g3_ParamLimits

0xb86d,	// (0x0004d002) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00050dbc) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00050dbc) list_double_graphic_heading_pane_g

0xb88f,	// (0x0004d024) list_double_graphic_heading_pane_t1_ParamLimits

0xb88f,	// (0x0004d024) list_double_graphic_heading_pane_t1

0xb79e,	// (0x0004cf33) list_double_graphic_heading_pane_t2_ParamLimits

0xb79e,	// (0x0004cf33) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00050dc3) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00050dc3) list_double_graphic_heading_pane_t

0xb8a5,	// (0x0004d03a) list_double_time_pane_g1_ParamLimits

0xb8a5,	// (0x0004d03a) list_double_time_pane_g1

0xf51d,	// (0x00050cb2) list_double_time_pane_g2_ParamLimits

0xf51d,	// (0x00050cb2) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00050dc8) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00050dc8) list_double_time_pane_g

0xb8b6,	// (0x0004d04b) list_double_time_pane_t1_ParamLimits

0xb8b6,	// (0x0004d04b) list_double_time_pane_t1

0xb8cc,	// (0x0004d061) list_double_time_pane_t2_ParamLimits

0xb8cc,	// (0x0004d061) list_double_time_pane_t2

0xb8de,	// (0x0004d073) list_double_time_pane_t3_ParamLimits

0xb8de,	// (0x0004d073) list_double_time_pane_t3

0xb8f0,	// (0x0004d085) list_double_time_pane_t4_ParamLimits

0xb8f0,	// (0x0004d085) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00050dcd) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00050dcd) list_double_time_pane_t

0x0017,	// (0x000417ac) list_setting_pane_g1_ParamLimits

0x0017,	// (0x000417ac) list_setting_pane_g1

0x0023,	// (0x000417b8) list_setting_pane_g2_ParamLimits

0x0023,	// (0x000417b8) list_setting_pane_g2

0x0001,

0xf641,	// (0x00050dd6) list_setting_pane_g_ParamLimits

0xf641,	// (0x00050dd6) list_setting_pane_g

0xb902,	// (0x0004d097) list_setting_pane_t1_ParamLimits

0xb902,	// (0x0004d097) list_setting_pane_t1

0xb91c,	// (0x0004d0b1) list_setting_pane_t2_ParamLimits

0xb91c,	// (0x0004d0b1) list_setting_pane_t2

0x0002,

0xf646,	// (0x00050ddb) list_setting_pane_t_ParamLimits

0xf646,	// (0x00050ddb) list_setting_pane_t

0xb95b,	// (0x0004d0f0) set_value_pane_cp_ParamLimits

0xb95b,	// (0x0004d0f0) set_value_pane_cp

0x0094,	// (0x00041829) list_setting_number_pane_g1_ParamLimits

0x0094,	// (0x00041829) list_setting_number_pane_g1

0x00a0,	// (0x00041835) list_setting_number_pane_g2_ParamLimits

0x00a0,	// (0x00041835) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00050de2) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00050de2) list_setting_number_pane_g

0xb967,	// (0x0004d0fc) list_setting_number_pane_t1_ParamLimits

0xb967,	// (0x0004d0fc) list_setting_number_pane_t1

0xb980,	// (0x0004d115) list_setting_number_pane_t2_ParamLimits

0xb980,	// (0x0004d115) list_setting_number_pane_t2

0xb99a,	// (0x0004d12f) list_setting_number_pane_t3_ParamLimits

0xb99a,	// (0x0004d12f) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00050de7) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00050de7) list_setting_number_pane_t

0xb95b,	// (0x0004d0f0) set_value_pane_ParamLimits

0xb95b,	// (0x0004d0f0) set_value_pane

0x3c27,	// (0x000453bc) bg_set_opt_pane_ParamLimits

0x3c27,	// (0x000453bc) bg_set_opt_pane

0x0122,	// (0x000418b7) set_value_pane_t1

0x3c48,	// (0x000453dd) slider_set_pane_cp3

0x3c51,	// (0x000453e6) volume_small_pane_cp

0x3c5a,	// (0x000453ef) list_form_gen_pane

0x3c63,	// (0x000453f8) scroll_pane_cp8

0xb9dd,	// (0x0004d172) form_field_data_pane_ParamLimits

0xb9dd,	// (0x0004d172) form_field_data_pane

0xb9f6,	// (0x0004d18b) form_field_data_wide_pane_ParamLimits

0xb9f6,	// (0x0004d18b) form_field_data_wide_pane

0xba16,	// (0x0004d1ab) form_field_popup_pane_ParamLimits

0xba16,	// (0x0004d1ab) form_field_popup_pane

0xba2e,	// (0x0004d1c3) form_field_popup_wide_pane_ParamLimits

0xba2e,	// (0x0004d1c3) form_field_popup_wide_pane

0x01be,	// (0x00041953) form_field_slider_pane_ParamLimits

0x01be,	// (0x00041953) form_field_slider_pane

0x01d1,	// (0x00041966) form_field_slider_wide_pane_ParamLimits

0x01d1,	// (0x00041966) form_field_slider_wide_pane

0x3c74,	// (0x00045409) data_form_pane

0xba57,	// (0x0004d1ec) form_field_data_pane_t1

0x3c80,	// (0x00045415) input_focus_pane

0x0206,	// (0x0004199b) data_form_wide_pane

0x0223,	// (0x000419b8) form_field_data_wide_pane_t1

0x39e5,	// (0x0004517a) input_focus_pane_cp6

0xba71,	// (0x0004d206) form_field_popup_pane_t1

0x3c80,	// (0x00045415) input_focus_pane_cp7

0x3ca2,	// (0x00045437) list_form_pane

0x0265,	// (0x000419fa) form_field_popup_wide_pane_t1

0x3c80,	// (0x00045415) input_focus_pane_cp8

0x3cae,	// (0x00045443) list_form_wide_pane

0xba93,	// (0x0004d228) form_field_slider_pane_t1_ParamLimits

0xba93,	// (0x0004d228) form_field_slider_pane_t1

0xbaab,	// (0x0004d240) form_field_slider_pane_t2_ParamLimits

0xbaab,	// (0x0004d240) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00050df7) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00050df7) form_field_slider_pane_t

0x3662,	// (0x00044df7) input_focus_pane_cp9_ParamLimits

0x3662,	// (0x00044df7) input_focus_pane_cp9

0xbac0,	// (0x0004d255) slider_cont_pane_ParamLimits

0xbac0,	// (0x0004d255) slider_cont_pane

0x3cba,	// (0x0004544f) form_field_slider_wide_pane_t1_ParamLimits

0x3cba,	// (0x0004544f) form_field_slider_wide_pane_t1

0x02c1,	// (0x00041a56) form_field_slider_wide_pane_t2_ParamLimits

0x02c1,	// (0x00041a56) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00050dfc) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00050dfc) form_field_slider_wide_pane_t

0x3662,	// (0x00044df7) input_focus_pane_cp10_ParamLimits

0x3662,	// (0x00044df7) input_focus_pane_cp10

0xbad4,	// (0x0004d269) slider_cont_pane_cp1_ParamLimits

0xbad4,	// (0x0004d269) slider_cont_pane_cp1

0xbae8,	// (0x0004d27d) slider_form_pane_cp

0x3ccc,	// (0x00045461) input_focus_pane_g1

0x3cd4,	// (0x00045469) input_focus_pane_g2

0x3cdc,	// (0x00045471) input_focus_pane_g3

0x3ce4,	// (0x00045479) input_focus_pane_g4

0x3cec,	// (0x00045481) input_focus_pane_g5

0x3cf4,	// (0x00045489) input_focus_pane_g6

0x3cfc,	// (0x00045491) input_focus_pane_g7

0x3d04,	// (0x00045499) input_focus_pane_g8

0x3d0c,	// (0x000454a1) input_focus_pane_g9

0xd3be,	// (0x0004eb53) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00050e01) input_focus_pane_g

0x57c0,	// (0x00046f55) wait_border_pane_g3_copy1

0xbaf0,	// (0x0004d285) data_form_pane_t1

0xd3be,	// (0x0004eb53) wait_anim_pane_g1_copy1

0xbb59,	// (0x0004d2ee) data_form_wide_pane_t1

0xbb0a,	// (0x0004d29f) list_form_graphic_pane_cp_ParamLimits

0xbb0a,	// (0x0004d29f) list_form_graphic_pane_cp

0x66e0,	// (0x00047e75) slider_form_pane_g1

0x66e9,	// (0x00047e7e) slider_form_pane_g2

0x0006,

0xf96a,	// (0x000510ff) slider_form_pane_g

0xbb0a,	// (0x0004d29f) list_form_graphic_pane_ParamLimits

0xbb0a,	// (0x0004d29f) list_form_graphic_pane

0x033f,	// (0x00041ad4) list_form_graphic_pane_g1

0x0347,	// (0x00041adc) list_form_graphic_pane_t1_ParamLimits

0x0347,	// (0x00041adc) list_form_graphic_pane_t1

0x33e7,	// (0x00044b7c) list_highlight_pane_cp5_ParamLimits

0x33e7,	// (0x00044b7c) list_highlight_pane_cp5

0x035c,	// (0x00041af1) find_pane_g1

0x3d14,	// (0x000454a9) input_find_pane

0x0365,	// (0x00041afa) input_find_pane_g1_ParamLimits

0x0365,	// (0x00041afa) input_find_pane_g1

0x0371,	// (0x00041b06) input_find_pane_t1_ParamLimits

0x0371,	// (0x00041b06) input_find_pane_t1

0x0386,	// (0x00041b1b) input_find_pane_t2_ParamLimits

0x0386,	// (0x00041b1b) input_find_pane_t2

0x0001,

0xf681,	// (0x00050e16) input_find_pane_t_ParamLimits

0xf681,	// (0x00050e16) input_find_pane_t

0x3d1d,	// (0x000454b2) input_focus_pane_cp5_ParamLimits

0x3d1d,	// (0x000454b2) input_focus_pane_cp5

0x3d3c,	// (0x000454d1) bg_popup_window_pane_cp2_ParamLimits

0x3d3c,	// (0x000454d1) bg_popup_window_pane_cp2

0x3d49,	// (0x000454de) listscroll_menu_pane_ParamLimits

0x3d49,	// (0x000454de) listscroll_menu_pane

0xc2aa,	// (0x0004da3f) popup_submenu_window_ParamLimits

0xc2aa,	// (0x0004da3f) popup_submenu_window

0x3d81,	// (0x00045516) find_popup_pane_g1

0x3d89,	// (0x0004551e) input_popup_find_pane_cp

0x3d93,	// (0x00045528) input_focus_pane_cp4_ParamLimits

0x3d93,	// (0x00045528) input_focus_pane_cp4

0x3dad,	// (0x00045542) input_popup_find_pane_t1_ParamLimits

0x3dad,	// (0x00045542) input_popup_find_pane_t1

0x3307,	// (0x00044a9c) bg_popup_sub_pane_cp

0x3ddb,	// (0x00045570) listscroll_popup_sub_pane

0x3de3,	// (0x00045578) list_submenu_pane_ParamLimits

0x3de3,	// (0x00045578) list_submenu_pane

0x3df4,	// (0x00045589) scroll_pane_cp4

0x3dfc,	// (0x00045591) list_single_popup_submenu_pane_ParamLimits

0x3dfc,	// (0x00045591) list_single_popup_submenu_pane

0x3e10,	// (0x000455a5) list_single_popup_submenu_pane_g1

0x3e18,	// (0x000455ad) list_single_popup_submenu_pane_t1_ParamLimits

0x3e18,	// (0x000455ad) list_single_popup_submenu_pane_t1

0x3662,	// (0x00044df7) bg_active_tab_pane_cp1_ParamLimits

0x3662,	// (0x00044df7) bg_active_tab_pane_cp1

0x3e2d,	// (0x000455c2) tabs_2_active_pane_g1

0xc2e4,	// (0x0004da79) tabs_2_active_pane_t1

0x3662,	// (0x00044df7) bg_passive_tab_pane_cp1_ParamLimits

0x3662,	// (0x00044df7) bg_passive_tab_pane_cp1

0x3e2d,	// (0x000455c2) tabs_2_passive_pane_g1

0xc2e4,	// (0x0004da79) tabs_2_passive_pane_t1

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp4

0xc2f6,	// (0x0004da8b) tabs_2_long_active_pane_t1

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp4

0x1caf,	// (0x00043444) list_single_midp_graphic_pane_g4_ParamLimits

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp5

0xc309,	// (0x0004da9e) tabs_3_long_active_pane_t1

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp5

0x1caf,	// (0x00043444) list_single_midp_graphic_pane_g4

0x33e7,	// (0x00044b7c) bg_popup_window_pane_cp13_ParamLimits

0x33e7,	// (0x00044b7c) bg_popup_window_pane_cp13

0x3e8f,	// (0x00045624) listscroll_popup_fast_pane_ParamLimits

0x3e8f,	// (0x00045624) listscroll_popup_fast_pane

0x3e9e,	// (0x00045633) grid_popup_fast_pane_ParamLimits

0x3e9e,	// (0x00045633) grid_popup_fast_pane

0x3eb0,	// (0x00045645) scroll_pane_cp9_ParamLimits

0x3eb0,	// (0x00045645) scroll_pane_cp9

0x7ffd,	// (0x00049792) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ffd,	// (0x00049792) list_single_graphic_hl_pane_t1_cp2

0x3ed4,	// (0x00045669) input_focus_pane_cp20_ParamLimits

0x3ed4,	// (0x00045669) input_focus_pane_cp20

0x3ee2,	// (0x00045677) query_popup_data_pane_t1_ParamLimits

0x3ee2,	// (0x00045677) query_popup_data_pane_t1

0x3ef5,	// (0x0004568a) query_popup_data_pane_t2_ParamLimits

0x3ef5,	// (0x0004568a) query_popup_data_pane_t2

0x3f3b,	// (0x000456d0) query_popup_data_pane_t3_ParamLimits

0x3f3b,	// (0x000456d0) query_popup_data_pane_t3

0x3f7c,	// (0x00045711) query_popup_data_pane_t4_ParamLimits

0x3f7c,	// (0x00045711) query_popup_data_pane_t4

0x3fb8,	// (0x0004574d) query_popup_data_pane_t5_ParamLimits

0x3fb8,	// (0x0004574d) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00050e1b) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00050e1b) query_popup_data_pane_t

0x3ccc,	// (0x00045461) bg_set_opt_pane_g1

0x3cd4,	// (0x00045469) bg_set_opt_pane_g2

0x3cdc,	// (0x00045471) bg_set_opt_pane_g3

0x3ce4,	// (0x00045479) bg_set_opt_pane_g4

0x3cec,	// (0x00045481) bg_set_opt_pane_g5

0x3cf4,	// (0x00045489) bg_set_opt_pane_g6

0x3cfc,	// (0x00045491) bg_set_opt_pane_g7

0x3d04,	// (0x00045499) bg_set_opt_pane_g8

0x3d0c,	// (0x000454a1) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00050e26) bg_set_opt_pane_g

0x1333,	// (0x00042ac8) control_top_pane_stacon_ParamLimits

0x1333,	// (0x00042ac8) control_top_pane_stacon

0x1386,	// (0x00042b1b) signal_pane_stacon_ParamLimits

0x1386,	// (0x00042b1b) signal_pane_stacon

0x45cf,	// (0x00045d64) stacon_top_pane_g1_ParamLimits

0x45cf,	// (0x00045d64) stacon_top_pane_g1

0x13ab,	// (0x00042b40) title_pane_stacon_ParamLimits

0x13ab,	// (0x00042b40) title_pane_stacon

0x13d5,	// (0x00042b6a) uni_indicator_pane_stacon_ParamLimits

0x13d5,	// (0x00042b6a) uni_indicator_pane_stacon

0x13ea,	// (0x00042b7f) battery_pane_stacon_ParamLimits

0x13ea,	// (0x00042b7f) battery_pane_stacon

0x142e,	// (0x00042bc3) control_bottom_pane_stacon_ParamLimits

0x142e,	// (0x00042bc3) control_bottom_pane_stacon

0x1451,	// (0x00042be6) navi_pane_stacon_ParamLimits

0x1451,	// (0x00042be6) navi_pane_stacon

0x45f1,	// (0x00045d86) stacon_bottom_pane_g1_ParamLimits

0x45f1,	// (0x00045d86) stacon_bottom_pane_g1

0x107a,	// (0x0004280f) aid_levels_signal_lsc_ParamLimits

0x107a,	// (0x0004280f) aid_levels_signal_lsc

0x1090,	// (0x00042825) signal_pane_stacon_g1_ParamLimits

0x1090,	// (0x00042825) signal_pane_stacon_g1

0x10a4,	// (0x00042839) signal_pane_stacon_g2_ParamLimits

0x10a4,	// (0x00042839) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00050e39) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00050e39) signal_pane_stacon_g

0x10d9,	// (0x0004286e) title_pane_stacon_t1_ParamLimits

0x10d9,	// (0x0004286e) title_pane_stacon_t1

0x3ffc,	// (0x00045791) uni_indicator_pane_stacon_g1

0x4006,	// (0x0004579b) uni_indicator_pane_stacon_g2

0x4010,	// (0x000457a5) uni_indicator_pane_stacon_g3

0x401a,	// (0x000457af) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00050e45) uni_indicator_pane_stacon_g

0x10fe,	// (0x00042893) control_top_pane_stacon_g1

0x1106,	// (0x0004289b) control_top_pane_stacon_t1_ParamLimits

0x1106,	// (0x0004289b) control_top_pane_stacon_t1

0x113d,	// (0x000428d2) aid_levels_battery_lsc_ParamLimits

0x113d,	// (0x000428d2) aid_levels_battery_lsc

0x1154,	// (0x000428e9) battery_pane_stacon_g1_ParamLimits

0x1154,	// (0x000428e9) battery_pane_stacon_g1

0x1167,	// (0x000428fc) battery_pane_stacon_g2_ParamLimits

0x1167,	// (0x000428fc) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00050e4e) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00050e4e) battery_pane_stacon_g

0x11a5,	// (0x0004293a) navi_icon_pane_stacon

0x11b9,	// (0x0004294e) navi_navi_pane_stacon

0x11a5,	// (0x0004293a) navi_text_pane_stacon

0x10fe,	// (0x00042893) control_bottom_pane_stacon_g1

0x11cd,	// (0x00042962) control_bottom_pane_stacon_t1_ParamLimits

0x11cd,	// (0x00042962) control_bottom_pane_stacon_t1

0xc31b,	// (0x0004dab0) grid_app_pane_ParamLimits

0xc31b,	// (0x0004dab0) grid_app_pane

0xc353,	// (0x0004dae8) scroll_pane_cp15_ParamLimits

0xc353,	// (0x0004dae8) scroll_pane_cp15

0xc368,	// (0x0004dafd) cell_app_pane_ParamLimits

0xc368,	// (0x0004dafd) cell_app_pane

0xc3ad,	// (0x0004db42) cell_app_pane_g1_ParamLimits

0xc3ad,	// (0x0004db42) cell_app_pane_g1

0x40bf,	// (0x00045854) cell_app_pane_g2_ParamLimits

0x40bf,	// (0x00045854) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00050e53) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00050e53) cell_app_pane_g

0xc3d1,	// (0x0004db66) cell_app_pane_t1_ParamLimits

0xc3d1,	// (0x0004db66) cell_app_pane_t1

0x40e2,	// (0x00045877) grid_highlight_pane_ParamLimits

0x40e2,	// (0x00045877) grid_highlight_pane

0x3ccc,	// (0x00045461) cell_highlight_pane_g1

0x3cd4,	// (0x00045469) cell_highlight_pane_g2

0x3cdc,	// (0x00045471) cell_highlight_pane_g3

0x3ce4,	// (0x00045479) cell_highlight_pane_g4

0x3cec,	// (0x00045481) cell_highlight_pane_g5

0x3cf4,	// (0x00045489) cell_highlight_pane_g6

0x3cfc,	// (0x00045491) cell_highlight_pane_g7

0x3d04,	// (0x00045499) cell_highlight_pane_g8

0x3d0c,	// (0x000454a1) cell_highlight_pane_g9

0xd3be,	// (0x0004eb53) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00050e01) cell_highlight_pane_g

0x40f3,	// (0x00045888) bg_scroll_pane

0x1217,	// (0x000429ac) scroll_handle_pane

0x413a,	// (0x000458cf) scroll_bg_pane_g1

0x414f,	// (0x000458e4) scroll_bg_pane_g2

0x4167,	// (0x000458fc) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00050e58) scroll_bg_pane_g

0x417c,	// (0x00045911) scroll_handle_focus_pane_ParamLimits

0x417c,	// (0x00045911) scroll_handle_focus_pane

0x413a,	// (0x000458cf) scroll_handle_pane_g1

0x4189,	// (0x0004591e) scroll_handle_pane_g2

0x4167,	// (0x000458fc) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00050e5f) scroll_handle_pane_g

0x3d93,	// (0x00045528) bg_popup_sub_pane_cp21_ParamLimits

0x3d93,	// (0x00045528) bg_popup_sub_pane_cp21

0x419d,	// (0x00045932) popup_fep_japan_predictive_window_t1_ParamLimits

0x419d,	// (0x00045932) popup_fep_japan_predictive_window_t1

0x41b7,	// (0x0004594c) popup_fep_japan_predictive_window_t2_ParamLimits

0x41b7,	// (0x0004594c) popup_fep_japan_predictive_window_t2

0x41ea,	// (0x0004597f) popup_fep_japan_predictive_window_t3_ParamLimits

0x41ea,	// (0x0004597f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00050e66) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00050e66) popup_fep_japan_predictive_window_t

0x3307,	// (0x00044a9c) bg_popup_sub_pane_cp23

0x4221,	// (0x000459b6) listscroll_japin_cand_pane

0x4229,	// (0x000459be) popup_fep_japan_candidate_window_t1

0x4237,	// (0x000459cc) candidate_pane_ParamLimits

0x4237,	// (0x000459cc) candidate_pane

0x4249,	// (0x000459de) scroll_pane_cp30

0x4251,	// (0x000459e6) list_single_popup_jap_candidate_pane_ParamLimits

0x4251,	// (0x000459e6) list_single_popup_jap_candidate_pane

0x3307,	// (0x00044a9c) list_highlight_pane_cp30

0x4266,	// (0x000459fb) list_single_popup_jap_candidate_pane_t1

0x4275,	// (0x00045a0a) level_1_signal

0x4287,	// (0x00045a1c) level_2_signal

0x429a,	// (0x00045a2f) level_3_signal

0x42ad,	// (0x00045a42) level_4_signal

0x42c0,	// (0x00045a55) level_5_signal

0x42d3,	// (0x00045a68) level_6_signal

0x42e6,	// (0x00045a7b) level_7_signal

0x4275,	// (0x00045a0a) level_1_battery

0x4287,	// (0x00045a1c) level_2_battery

0x429a,	// (0x00045a2f) level_3_battery

0x42ad,	// (0x00045a42) level_4_battery

0x42c0,	// (0x00045a55) level_5_battery

0x42d3,	// (0x00045a68) level_6_battery

0x42e6,	// (0x00045a7b) level_7_battery

0x4311,	// (0x00045aa6) list_menu_pane_ParamLimits

0x4311,	// (0x00045aa6) list_menu_pane

0x4327,	// (0x00045abc) scroll_pane_cp25_ParamLimits

0x4327,	// (0x00045abc) scroll_pane_cp25

0x4340,	// (0x00045ad5) list_double2_graphic_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double2_graphic_pane_cp2

0x4340,	// (0x00045ad5) list_double2_large_graphic_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double2_large_graphic_pane_cp2

0x4340,	// (0x00045ad5) list_double2_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double2_pane_cp2

0x4340,	// (0x00045ad5) list_double_graphic_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double_graphic_pane_cp2

0x4340,	// (0x00045ad5) list_double_large_graphic_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double_large_graphic_pane_cp2

0x4340,	// (0x00045ad5) list_double_number_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double_number_pane_cp2

0x4340,	// (0x00045ad5) list_double_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double_pane_cp2

0xc3e8,	// (0x0004db7d) list_single_2graphic_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_2graphic_pane_cp2

0xc3e8,	// (0x0004db7d) list_single_graphic_heading_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_graphic_heading_pane_cp2

0xc3e8,	// (0x0004db7d) list_single_graphic_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_graphic_pane_cp2

0xc3e8,	// (0x0004db7d) list_single_heading_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_heading_pane_cp2

0x437d,	// (0x00045b12) list_single_large_graphic_pane_cp2_ParamLimits

0x437d,	// (0x00045b12) list_single_large_graphic_pane_cp2

0xc3e8,	// (0x0004db7d) list_single_number_heading_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_number_heading_pane_cp2

0xc3e8,	// (0x0004db7d) list_single_number_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_number_pane_cp2

0xd3c8,	// (0x0004eb5d) list_single_pane_cp2_ParamLimits

0xd3c8,	// (0x0004eb5d) list_single_pane_cp2

0x4412,	// (0x00045ba7) bg_popup_sub_pane_cp22

0x12c9,	// (0x00042a5e) popup_side_volume_key_window_g1

0x12f3,	// (0x00042a88) popup_side_volume_key_window_t1

0x130f,	// (0x00042aa4) volume_small_pane_cp1

0x3662,	// (0x00044df7) bg_popup_sub_pane_cp24_ParamLimits

0x3662,	// (0x00044df7) bg_popup_sub_pane_cp24

0x4428,	// (0x00045bbd) fep_china_uni_candidate_pane_ParamLimits

0x4428,	// (0x00045bbd) fep_china_uni_candidate_pane

0x443c,	// (0x00045bd1) fep_china_uni_entry_pane

0x444c,	// (0x00045be1) popup_fep_china_uni_window_g1

0x4468,	// (0x00045bfd) fep_china_uni_entry_pane_g1

0x4470,	// (0x00045c05) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00050e97) fep_china_uni_entry_pane_g

0x4478,	// (0x00045c0d) fep_entry_item_pane

0x4482,	// (0x00045c17) fep_candidate_item_pane

0x448a,	// (0x00045c1f) fep_china_uni_candidate_pane_g1

0x4492,	// (0x00045c27) fep_china_uni_candidate_pane_g2

0x449a,	// (0x00045c2f) fep_china_uni_candidate_pane_g3

0x44a2,	// (0x00045c37) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00050e9c) fep_china_uni_candidate_pane_g

0xd3be,	// (0x0004eb53) fep_entry_item_pane_g1

0x44aa,	// (0x00045c3f) fep_entry_item_pane_t1_ParamLimits

0x44aa,	// (0x00045c3f) fep_entry_item_pane_t1

0x44cc,	// (0x00045c61) fep_candidate_item_pane_t1_ParamLimits

0x44cc,	// (0x00045c61) fep_candidate_item_pane_t1

0x44e1,	// (0x00045c76) fep_candidate_item_pane_t2_ParamLimits

0x44e1,	// (0x00045c76) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00050ea5) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00050ea5) fep_candidate_item_pane_t

0x33e7,	// (0x00044b7c) list_highlight_pane_cp31_ParamLimits

0x33e7,	// (0x00044b7c) list_highlight_pane_cp31

0x44f3,	// (0x00045c88) level_1_signal_lsc

0x44fc,	// (0x00045c91) level_2_signal_lsc

0x4505,	// (0x00045c9a) level_3_signal_lsc

0x450e,	// (0x00045ca3) level_4_signal_lsc

0x4517,	// (0x00045cac) level_5_signal_lsc

0x4520,	// (0x00045cb5) level_6_signal_lsc

0x4529,	// (0x00045cbe) level_7_signal_lsc

0x4529,	// (0x00045cbe) level_1_battery_lsc

0x4532,	// (0x00045cc7) level_2_battery_lsc

0x453b,	// (0x00045cd0) level_3_battery_lsc

0x4544,	// (0x00045cd9) level_4_battery_lsc

0x454d,	// (0x00045ce2) level_5_battery_lsc

0x4556,	// (0x00045ceb) level_6_battery_lsc

0x44f3,	// (0x00045c88) level_7_battery_lsc

0x455f,	// (0x00045cf4) scroll_handle_focus_pane_g1

0x4568,	// (0x00045cfd) scroll_handle_focus_pane_g2

0x4571,	// (0x00045d06) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00050eaa) scroll_handle_focus_pane_g

0x039b,	// (0x00041b30) list_single_2graphic_pane_g1_ParamLimits

0x039b,	// (0x00041b30) list_single_2graphic_pane_g1

0xc279,	// (0x0004da0e) list_single_2graphic_pane_g2_ParamLimits

0xc279,	// (0x0004da0e) list_single_2graphic_pane_g2

0x0ff7,	// (0x0004278c) list_single_2graphic_pane_g3_ParamLimits

0x0ff7,	// (0x0004278c) list_single_2graphic_pane_g3

0x03a7,	// (0x00041b3c) list_single_2graphic_pane_g4_ParamLimits

0x03a7,	// (0x00041b3c) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00050eb1) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00050eb1) list_single_2graphic_pane_g

0x03b3,	// (0x00041b48) list_single_2graphic_pane_t1_ParamLimits

0x03b3,	// (0x00041b48) list_single_2graphic_pane_t1

0xc3fa,	// (0x0004db8f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc3fa,	// (0x0004db8f) list_double2_graphic_large_graphic_pane_g1

0xb823,	// (0x0004cfb8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb823,	// (0x0004cfb8) list_double2_graphic_large_graphic_pane_g2

0xb77c,	// (0x0004cf11) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb77c,	// (0x0004cf11) list_double2_graphic_large_graphic_pane_g3

0x1caf,	// (0x00043444) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1caf,	// (0x00043444) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00050eba) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00050eba) list_double2_graphic_large_graphic_pane_g

0xbb1c,	// (0x0004d2b1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb1c,	// (0x0004d2b1) list_double2_graphic_large_graphic_pane_t1

0xbb32,	// (0x0004d2c7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb32,	// (0x0004d2c7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00050ec3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00050ec3) list_double2_graphic_large_graphic_pane_t

0x46bc,	// (0x00045e51) popup_fast_swap_window_ParamLimits

0x46bc,	// (0x00045e51) popup_fast_swap_window

0x46d8,	// (0x00045e6d) popup_side_volume_key_window

0x46f4,	// (0x00045e89) stacon_top_pane

0x46fe,	// (0x00045e93) status_pane_ParamLimits

0x46fe,	// (0x00045e93) status_pane

0xd455,	// (0x0004ebea) status_small_pane

0x3307,	// (0x00044a9c) control_pane

0x3307,	// (0x00044a9c) stacon_bottom_pane

0x3c63,	// (0x000453f8) scroll_pane_cp121

0x3c5a,	// (0x000453ef) set_content_pane

0x457a,	// (0x00045d0f) bg_active_tab_pane_g1_cp1

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp1

0x458c,	// (0x00045d21) bg_active_tab_pane_g3_cp1

0x457a,	// (0x00045d0f) bg_passive_tab_pane_g1_cp1

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp1

0x458c,	// (0x00045d21) bg_passive_tab_pane_g3_cp1

0x4595,	// (0x00045d2a) bg_active_tab_pane_g1_cp2

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp2

0x459e,	// (0x00045d33) bg_active_tab_pane_g3_cp2

0x4595,	// (0x00045d2a) bg_passive_tab_pane_g1_cp2

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp2

0x459e,	// (0x00045d33) bg_passive_tab_pane_g3_cp2

0x45a7,	// (0x00045d3c) bg_active_tab_pane_g1_cp3

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp3

0x45b0,	// (0x00045d45) bg_active_tab_pane_g3_cp3

0x45a7,	// (0x00045d3c) bg_passive_tab_pane_g1_cp3

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp3

0x45b0,	// (0x00045d45) bg_passive_tab_pane_g3_cp3

0x45b9,	// (0x00045d4e) bg_active_tab_pane_g1_cp4

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp4

0x45c4,	// (0x00045d59) bg_active_tab_pane_g3_cp4

0x45b9,	// (0x00045d4e) bg_passive_tab_pane_g1_cp4

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp4

0x45c4,	// (0x00045d59) bg_passive_tab_pane_g3_cp4

0x460d,	// (0x00045da2) bg_active_tab_pane_g1_cp5

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp5

0x4616,	// (0x00045dab) bg_active_tab_pane_g3_cp5

0x460d,	// (0x00045da2) bg_passive_tab_pane_g1_cp5

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp5

0x4616,	// (0x00045dab) bg_passive_tab_pane_g3_cp5

0x6cd2,	// (0x00048467) list_set_graphic_pane_ParamLimits

0x6cd2,	// (0x00048467) list_set_graphic_pane

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp4

0x463f,	// (0x00045dd4) list_set_graphic_pane_g1_ParamLimits

0x463f,	// (0x00045dd4) list_set_graphic_pane_g1

0x464b,	// (0x00045de0) list_set_graphic_pane_g2_ParamLimits

0x464b,	// (0x00045de0) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00050ec8) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00050ec8) list_set_graphic_pane_g

0x0009,

0xfa9c,	// (0x00051231) volume_small_pane_cp_g

0x466f,	// (0x00045e04) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x466f,	// (0x00045e04) list_double2_large_graphic_pane_g1_cp2

0x467b,	// (0x00045e10) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x467b,	// (0x00045e10) list_double2_large_graphic_pane_g2_cp2

0x468c,	// (0x00045e21) list_double2_large_graphic_pane_g3_cp2

0x4694,	// (0x00045e29) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4694,	// (0x00045e29) list_double2_large_graphic_pane_t1_cp2

0x46aa,	// (0x00045e3f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x46aa,	// (0x00045e3f) list_double2_large_graphic_pane_t2_cp2

0x6293,	// (0x00047a28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6293,	// (0x00047a28) list_double_large_graphic_pane_g1_cp2

0x62a4,	// (0x00047a39) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x62a4,	// (0x00047a39) list_double_large_graphic_pane_g2_cp2

0x4825,	// (0x00045fba) list_double_large_graphic_pane_g3_cp2

0x62b5,	// (0x00047a4a) list_double_large_graphic_pane_g4_cp

0x62bd,	// (0x00047a52) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62bd,	// (0x00047a52) list_double_large_graphic_pane_t1_cp2

0x62d4,	// (0x00047a69) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x62d4,	// (0x00047a69) list_double_large_graphic_pane_t2_cp2

0x4717,	// (0x00045eac) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4717,	// (0x00045eac) list_double2_graphic_pane_g1_cp2

0x4725,	// (0x00045eba) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4725,	// (0x00045eba) list_double2_graphic_pane_g2_cp2

0x4736,	// (0x00045ecb) list_double2_graphic_pane_g3_cp2

0x4740,	// (0x00045ed5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4740,	// (0x00045ed5) list_double2_graphic_pane_t1_cp2

0x4756,	// (0x00045eeb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4756,	// (0x00045eeb) list_double2_graphic_pane_t2_cp2

0x4768,	// (0x00045efd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4768,	// (0x00045efd) list_single_number_heading_pane_g1_cp2

0x4774,	// (0x00045f09) list_single_number_heading_pane_g2_cp2

0x477c,	// (0x00045f11) list_single_number_heading_pane_t1_cp2_ParamLimits

0x477c,	// (0x00045f11) list_single_number_heading_pane_t1_cp2

0x4792,	// (0x00045f27) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4792,	// (0x00045f27) list_single_number_heading_pane_t2_cp2

0x47a4,	// (0x00045f39) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47a4,	// (0x00045f39) list_single_number_heading_pane_t3_cp2

0x4768,	// (0x00045efd) list_single_heading_pane_g1_cp2_ParamLimits

0x4768,	// (0x00045efd) list_single_heading_pane_g1_cp2

0x4774,	// (0x00045f09) list_single_heading_pane_g2_cp2

0x477c,	// (0x00045f11) list_single_heading_pane_t1_cp2_ParamLimits

0x477c,	// (0x00045f11) list_single_heading_pane_t1_cp2

0x609b,	// (0x00047830) list_single_heading_pane_t2_cp2_ParamLimits

0x609b,	// (0x00047830) list_single_heading_pane_t2_cp2

0x5fe3,	// (0x00047778) list_double_graphic_pane_g1_cp2_ParamLimits

0x5fe3,	// (0x00047778) list_double_graphic_pane_g1_cp2

0x5fef,	// (0x00047784) list_double_graphic_pane_g2_cp2_ParamLimits

0x5fef,	// (0x00047784) list_double_graphic_pane_g2_cp2

0x5ffe,	// (0x00047793) list_double_graphic_pane_g3_cp2

0x6006,	// (0x0004779b) list_double_graphic_pane_t1_cp2_ParamLimits

0x6006,	// (0x0004779b) list_double_graphic_pane_t1_cp2

0x601c,	// (0x000477b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x601c,	// (0x000477b1) list_double_graphic_pane_t2_cp2

0x4819,	// (0x00045fae) list_double_number_pane_g1_cp2_ParamLimits

0x4819,	// (0x00045fae) list_double_number_pane_g1_cp2

0x4825,	// (0x00045fba) list_double_number_pane_g2_cp2

0x5fa7,	// (0x0004773c) list_double_number_pane_t1_cp2_ParamLimits

0x5fa7,	// (0x0004773c) list_double_number_pane_t1_cp2

0x5fbb,	// (0x00047750) list_double_number_pane_t2_cp2_ParamLimits

0x5fbb,	// (0x00047750) list_double_number_pane_t2_cp2

0x5fd1,	// (0x00047766) list_double_number_pane_t3_cp2_ParamLimits

0x5fd1,	// (0x00047766) list_double_number_pane_t3_cp2

0x5e90,	// (0x00047625) list_single_graphic_pane_g1_cp2_ParamLimits

0x5e90,	// (0x00047625) list_single_graphic_pane_g1_cp2

0x4886,	// (0x0004601b) list_single_graphic_pane_g2_cp2_ParamLimits

0x4886,	// (0x0004601b) list_single_graphic_pane_g2_cp2

0x4892,	// (0x00046027) list_single_graphic_pane_g3_cp2

0x5e66,	// (0x000475fb) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e66,	// (0x000475fb) list_single_graphic_pane_t1_cp2

0x4886,	// (0x0004601b) list_single_number_pane_g1_cp2_ParamLimits

0x4886,	// (0x0004601b) list_single_number_pane_g1_cp2

0x4892,	// (0x00046027) list_single_number_pane_g2_cp2

0x5e66,	// (0x000475fb) list_single_number_pane_t1_cp2_ParamLimits

0x5e66,	// (0x000475fb) list_single_number_pane_t1_cp2

0x5e7c,	// (0x00047611) list_single_number_pane_t2_cp2_ParamLimits

0x5e7c,	// (0x00047611) list_single_number_pane_t2_cp2

0x467b,	// (0x00045e10) list_double2_pane_g1_cp2_ParamLimits

0x467b,	// (0x00045e10) list_double2_pane_g1_cp2

0x468c,	// (0x00045e21) list_double2_pane_g2_cp2

0x47f1,	// (0x00045f86) list_double2_pane_t1_cp2_ParamLimits

0x47f1,	// (0x00045f86) list_double2_pane_t1_cp2

0x4807,	// (0x00045f9c) list_double2_pane_t2_cp2_ParamLimits

0x4807,	// (0x00045f9c) list_double2_pane_t2_cp2

0x4819,	// (0x00045fae) list_double_pane_g1_cp2_ParamLimits

0x4819,	// (0x00045fae) list_double_pane_g1_cp2

0x4825,	// (0x00045fba) list_double_pane_g2_cp2

0x482d,	// (0x00045fc2) list_double_pane_t1_cp2_ParamLimits

0x482d,	// (0x00045fc2) list_double_pane_t1_cp2

0x4843,	// (0x00045fd8) list_double_pane_t2_cp2_ParamLimits

0x4843,	// (0x00045fd8) list_double_pane_t2_cp2

0x4876,	// (0x0004600b) list_single_pane_cp2_g3

0x4886,	// (0x0004601b) list_single_pane_g1_cp2_ParamLimits

0x4886,	// (0x0004601b) list_single_pane_g1_cp2

0x4892,	// (0x00046027) list_single_pane_g2_cp2

0x489a,	// (0x0004602f) list_single_pane_t1_cp2_ParamLimits

0x489a,	// (0x0004602f) list_single_pane_t1_cp2

0x48b2,	// (0x00046047) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x48b2,	// (0x00046047) list_single_large_graphic_pane_g1_cp2

0x44c0,	// (0x00045c55) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x44c0,	// (0x00045c55) list_single_large_graphic_pane_g2_cp2

0x48be,	// (0x00046053) list_single_large_graphic_pane_g3_cp2

0x48c6,	// (0x0004605b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x48c6,	// (0x0004605b) list_single_large_graphic_pane_g4_cp1

0x48e0,	// (0x00046075) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x48e0,	// (0x00046075) list_single_large_graphic_pane_t1_cp2

0x5e32,	// (0x000475c7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e32,	// (0x000475c7) list_single_graphic_heading_pane_g1_cp2

0x5dff,	// (0x00047594) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5dff,	// (0x00047594) list_single_graphic_heading_pane_g4_cp2

0x4892,	// (0x00046027) list_single_graphic_heading_pane_g5_cp2

0x5e3e,	// (0x000475d3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e3e,	// (0x000475d3) list_single_graphic_heading_pane_t1_cp2

0x5e54,	// (0x000475e9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e54,	// (0x000475e9) list_single_graphic_heading_pane_t2_cp2

0x5df3,	// (0x00047588) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5df3,	// (0x00047588) list_single_2graphic_pane_g1_cp2

0x5dff,	// (0x00047594) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5dff,	// (0x00047594) list_single_2graphic_pane_g2_cp2

0x4892,	// (0x00046027) list_single_2graphic_pane_g3_cp2

0x5e10,	// (0x000475a5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5e10,	// (0x000475a5) list_single_2graphic_pane_g4_cp2

0x5e1c,	// (0x000475b1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e1c,	// (0x000475b1) list_single_2graphic_pane_t1_cp2

0xd3be,	// (0x0004eb53) list_highlight_pane_g10_cp1

0x59cb,	// (0x00047160) list_highlight_pane_g1_cp1

0x59d3,	// (0x00047168) list_highlight_pane_g2_cp1

0x59db,	// (0x00047170) list_highlight_pane_g3_cp1

0x59e3,	// (0x00047178) list_highlight_pane_g4_cp1

0x59eb,	// (0x00047180) list_highlight_pane_g5_cp1

0x59f3,	// (0x00047188) list_highlight_pane_g6_cp1

0x59fb,	// (0x00047190) list_highlight_pane_g7_cp1

0x5a03,	// (0x00047198) list_highlight_pane_g8_cp1

0x5a0b,	// (0x000471a0) list_highlight_pane_g9_cp1

0xda8d,	// (0x0004f222) form_field_slider_pane_t3

0xda9b,	// (0x0004f230) form_field_slider_pane_t4

0x5907,	// (0x0004709c) slider_form_pane_ParamLimits

0x5907,	// (0x0004709c) slider_form_pane

0x3307,	// (0x00044a9c) control_abbreviations

0x3307,	// (0x00044a9c) control_conventions

0x3307,	// (0x00044a9c) control_definitions

0x3307,	// (0x00044a9c) format_table_attribute

0x60e5,	// (0x0004787a) bg_popup_preview_window_pane_g9

0x3307,	// (0x00044a9c) format_table_data2

0x3307,	// (0x00044a9c) format_table_data3

0x3307,	// (0x00044a9c) format_table_data_example

0x0008,

0x3307,	// (0x00044a9c) intro_purpose

0xf8ca,	// (0x0005105f) bg_popup_preview_window_pane_g

0x3307,	// (0x00044a9c) texts_category

0x3307,	// (0x00044a9c) texts_graphics

0x48f6,	// (0x0004608b) text_digital

0x4905,	// (0x0004609a) text_primary

0x4914,	// (0x000460a9) text_primary_small

0x4923,	// (0x000460b8) text_secondary

0x4932,	// (0x000460c7) text_title

0x6806,	// (0x00047f9b) bg_passive_tab_pane_g1_cp3_srt

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp3_srt

0x680f,	// (0x00047fa4) bg_passive_tab_pane_g3_cp3_srt

0x3662,	// (0x00044df7) bg_active_tab_pane_cp3_srt_ParamLimits

0x3662,	// (0x00044df7) bg_active_tab_pane_cp3_srt

0x6818,	// (0x00047fad) tabs_4_active_pane_srt_g1

0xddcd,	// (0x0004f562) tabs_4_active_pane_srt_t1_ParamLimits

0xddcd,	// (0x0004f562) tabs_4_active_pane_srt_t1

0x6806,	// (0x00047f9b) bg_active_tab_pane_g1_cp3_copy1

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp3_copy1

0x680f,	// (0x00047fa4) bg_active_tab_pane_g3_cp3_copy1

0x33e7,	// (0x00044b7c) tabs_2_long_active_pane_srt_ParamLimits

0x33e7,	// (0x00044b7c) tabs_2_long_active_pane_srt

0x33e7,	// (0x00044b7c) tabs_2_long_passive_pane_srt_ParamLimits

0x33e7,	// (0x00044b7c) tabs_2_long_passive_pane_srt

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp4_srt

0x6513,	// (0x00047ca8) bg_passive_tab_pane_g1_cp4_srt

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp4_srt

0x651c,	// (0x00047cb1) bg_passive_tab_pane_g3_cp4_srt

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp4_srt_ParamLimits

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp4_srt

0xdbf8,	// (0x0004f38d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbf8,	// (0x0004f38d) tabs_2_long_active_pane_srt_t1

0x6513,	// (0x00047ca8) bg_active_tab_pane_g1_cp4_srt

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp4_srt

0x651c,	// (0x00047cb1) bg_active_tab_pane_g3_cp4_srt

0x3662,	// (0x00044df7) tabs_3_long_active_pane_srt_ParamLimits

0x3662,	// (0x00044df7) tabs_3_long_active_pane_srt

0x3662,	// (0x00044df7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3662,	// (0x00044df7) tabs_3_long_passive_pane_cp_srt

0x3662,	// (0x00044df7) tabs_3_long_passive_pane_srt_ParamLimits

0x3662,	// (0x00044df7) tabs_3_long_passive_pane_srt

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp5_srt

0x460d,	// (0x00045da2) bg_passive_tab_pane_g1_cp5_srt

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp5_srt

0x4616,	// (0x00045dab) bg_passive_tab_pane_g3_cp5_srt

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp5_srt_ParamLimits

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp5_srt

0xdbe2,	// (0x0004f377) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbe2,	// (0x0004f377) tabs_3_long_active_pane_srt_t1

0x460d,	// (0x00045da2) bg_active_tab_pane_g1_cp5_srt

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp5_srt

0x4616,	// (0x00045dab) bg_active_tab_pane_g3_cp5_srt

0x64f3,	// (0x00047c88) navi_text_pane_srt_t1

0x64eb,	// (0x00047c80) navi_icon_pane_srt_g1

0x4b07,	// (0x0004629c) midp_editing_number_pane_srt

0x4941,	// (0x000460d6) midp_ticker_pane_srt

0x4b0f,	// (0x000462a4) midp_ticker_pane_srt_g1

0x4b17,	// (0x000462ac) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00050ee7) midp_ticker_pane_srt_g

0x4b1f,	// (0x000462b4) midp_ticker_pane_srt_t1

0x64dc,	// (0x00047c71) midp_editing_number_pane_t1_copy1

0xd460,	// (0x0004ebf5) listscroll_midp_pane

0xd460,	// (0x0004ebf5) midp_form_pane

0x49b9,	// (0x0004614e) midp_info_popup_window_ParamLimits

0x49b9,	// (0x0004614e) midp_info_popup_window

0x3d93,	// (0x00045528) bg_popup_sub_pane_cp50_ParamLimits

0x3d93,	// (0x00045528) bg_popup_sub_pane_cp50

0x55e3,	// (0x00046d78) listscroll_midp_info_pane_ParamLimits

0x55e3,	// (0x00046d78) listscroll_midp_info_pane

0x55c3,	// (0x00046d58) listscroll_form_midp_pane_ParamLimits

0x55c3,	// (0x00046d58) listscroll_form_midp_pane

0x55cf,	// (0x00046d64) scroll_bar_cp050

0x55c3,	// (0x00046d58) list_midp_pane

0x7281,	// (0x00048a16) signal_pane_g2_cp

0x54dd,	// (0x00046c72) listscroll_midp_info_pane_t1_ParamLimits

0x54dd,	// (0x00046c72) listscroll_midp_info_pane_t1

0x54f5,	// (0x00046c8a) listscroll_midp_info_pane_t2_ParamLimits

0x54f5,	// (0x00046c8a) listscroll_midp_info_pane_t2

0x5533,	// (0x00046cc8) listscroll_midp_info_pane_t3_ParamLimits

0x5533,	// (0x00046cc8) listscroll_midp_info_pane_t3

0x556d,	// (0x00046d02) listscroll_midp_info_pane_t4_ParamLimits

0x556d,	// (0x00046d02) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00050f9a) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00050f9a) listscroll_midp_info_pane_t

0x3df4,	// (0x00045589) scroll_pane_cp21

0x547b,	// (0x00046c10) form_midp_field_choice_group_pane

0x5484,	// (0x00046c19) form_midp_field_text_pane

0x54c3,	// (0x00046c58) form_midp_field_time_pane

0x54cb,	// (0x00046c60) form_midp_gauge_slider_pane

0x54d4,	// (0x00046c69) form_midp_gauge_wait_pane

0x3307,	// (0x00044a9c) form_midp_image_pane

0xbb44,	// (0x0004d2d9) list_single_midp_pane_ParamLimits

0xbb44,	// (0x0004d2d9) list_single_midp_pane

0xda6c,	// (0x0004f201) form_midp_field_text_pane_t1

0x5203,	// (0x00046998) input_focus_pane_cp050

0x546a,	// (0x00046bff) list_midp_form_text_pane

0x5402,	// (0x00046b97) form_midp_field_choice_group_pane_t1

0x5410,	// (0x00046ba5) input_focus_pane_cp051

0x5424,	// (0x00046bb9) list_midp_choice_pane

0x3307,	// (0x00044a9c) status_idle_pane

0x53e6,	// (0x00046b7b) form_midp_field_time_pane_t1

0xd3be,	// (0x0004eb53) wait_anim_pane_g2_copy1

0x53f4,	// (0x00046b89) form_midp_field_time_pane_t2

0x0001,

0x4a67,	// (0x000461fc) aid_navinavi_width_2_pane

0xf800,	// (0x00050f95) form_midp_field_time_pane_t

0x3307,	// (0x00044a9c) input_focus_pane_cp052

0x3307,	// (0x00044a9c) bg_input_focus_pane_cp040

0x53a6,	// (0x00046b3b) form_midp_gauge_slider_pane_t1

0x53b4,	// (0x00046b49) form_midp_gauge_slider_pane_t2

0xda50,	// (0x0004f1e5) form_midp_gauge_slider_pane_t3

0xda5e,	// (0x0004f1f3) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00050f8c) form_midp_gauge_slider_pane_t

0x53de,	// (0x00046b73) form_midp_slider_pane

0x33e7,	// (0x00044b7c) bg_input_focus_pane_cp041_ParamLimits

0x33e7,	// (0x00044b7c) bg_input_focus_pane_cp041

0x5373,	// (0x00046b08) form_midp_gauge_wait_pane_t1_ParamLimits

0x5373,	// (0x00046b08) form_midp_gauge_wait_pane_t1

0x5385,	// (0x00046b1a) form_midp_gauge_wait_pane_t2_ParamLimits

0x5385,	// (0x00046b1a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00050f87) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00050f87) form_midp_gauge_wait_pane_t

0x5397,	// (0x00046b2c) form_midp_wait_pane_ParamLimits

0x5397,	// (0x00046b2c) form_midp_wait_pane

0x533d,	// (0x00046ad2) form_midp_image_pane_g1

0x5346,	// (0x00046adb) form_midp_image_pane_t1

0x5355,	// (0x00046aea) form_midp_image_pane_t2

0x5364,	// (0x00046af9) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00050f80) form_midp_image_pane_t

0x5334,	// (0x00046ac9) list_single_midp_pane_g1

0x053b,	// (0x00041cd0) list_single_midp_pane_t1

0xda3c,	// (0x0004f1d1) list_midp_form_item_pane_ParamLimits

0xda3c,	// (0x0004f1d1) list_midp_form_item_pane

0x4a0f,	// (0x000461a4) list_midp_form_item_pane_t1

0x4a1e,	// (0x000461b3) midp_ticker_pane_g1

0x4a2a,	// (0x000461bf) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00050ecd) midp_ticker_pane_g

0x4a36,	// (0x000461cb) midp_ticker_pane_t1

0x672d,	// (0x00047ec2) midp_editing_number_pane_t1

0x670b,	// (0x00047ea0) midp_editing_number_pane

0x671a,	// (0x00047eaf) midp_ticker_pane

0x64cc,	// (0x00047c61) ai_message_heading_pane

0x3307,	// (0x00044a9c) bg_popup_window_pane_cp14

0x64d4,	// (0x00047c69) listscroll_ai_message_pane

0x6456,	// (0x00047beb) ai_message_heading_pane_g1_ParamLimits

0x6456,	// (0x00047beb) ai_message_heading_pane_g1

0x6462,	// (0x00047bf7) ai_message_heading_pane_g2_ParamLimits

0x6462,	// (0x00047bf7) ai_message_heading_pane_g2

0x646e,	// (0x00047c03) ai_message_heading_pane_g3_ParamLimits

0x646e,	// (0x00047c03) ai_message_heading_pane_g3

0x647a,	// (0x00047c0f) ai_message_heading_pane_g4_ParamLimits

0x647a,	// (0x00047c0f) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x000510c1) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x000510c1) ai_message_heading_pane_g

0x6486,	// (0x00047c1b) ai_message_heading_pane_t1_ParamLimits

0x6486,	// (0x00047c1b) ai_message_heading_pane_t1

0x64a0,	// (0x00047c35) ai_message_heading_pane_t2_ParamLimits

0x64a0,	// (0x00047c35) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x000510ca) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x000510ca) ai_message_heading_pane_t

0x64b2,	// (0x00047c47) bg_popup_heading_pane_cp1_ParamLimits

0x64b2,	// (0x00047c47) bg_popup_heading_pane_cp1

0x6444,	// (0x00047bd9) list_ai_message_pane_ParamLimits

0x6444,	// (0x00047bd9) list_ai_message_pane

0x3df4,	// (0x00045589) scroll_pane_cp10

0x63e0,	// (0x00047b75) list_ai_message_pane_g1

0x63e8,	// (0x00047b7d) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0005109e) list_ai_message_pane_g

0x63f0,	// (0x00047b85) list_ai_message_pane_t1_ParamLimits

0x63f0,	// (0x00047b85) list_ai_message_pane_t1

0x6405,	// (0x00047b9a) list_ai_message_pane_t2_ParamLimits

0x6405,	// (0x00047b9a) list_ai_message_pane_t2

0x641a,	// (0x00047baf) list_ai_message_pane_t3_ParamLimits

0x641a,	// (0x00047baf) list_ai_message_pane_t3

0x642f,	// (0x00047bc4) list_ai_message_pane_t4_ParamLimits

0x642f,	// (0x00047bc4) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x000510a3) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x000510a3) list_ai_message_pane_t

0xdbc1,	// (0x0004f356) cell_ai_soft_ind_pane_ParamLimits

0xdbc1,	// (0x0004f356) cell_ai_soft_ind_pane

0x4a48,	// (0x000461dd) cell_ai_soft_ind_pane_g1_ParamLimits

0x4a48,	// (0x000461dd) cell_ai_soft_ind_pane_g1

0x3307,	// (0x00044a9c) grid_highlight_cp1

0x4a55,	// (0x000461ea) text_secondary_cp56_ParamLimits

0x4a55,	// (0x000461ea) text_secondary_cp56

0x63a0,	// (0x00047b35) example_general_pane_ParamLimits

0x63a0,	// (0x00047b35) example_general_pane

0x63ac,	// (0x00047b41) example_parent_pane_g1_ParamLimits

0x63ac,	// (0x00047b41) example_parent_pane_g1

0x63b8,	// (0x00047b4d) example_parent_pane_t1_ParamLimits

0x63b8,	// (0x00047b4d) example_parent_pane_t1

0xc955,	// (0x0004e0ea) popup_preview_text_window_ParamLimits

0xc955,	// (0x0004e0ea) popup_preview_text_window

0x487e,	// (0x00046013) list_single_pane_cp2_g4

0x373e,	// (0x00044ed3) bg_popup_preview_window_pane_ParamLimits

0x373e,	// (0x00044ed3) bg_popup_preview_window_pane

0x60ed,	// (0x00047882) popup_preview_text_window_t1_ParamLimits

0x60ed,	// (0x00047882) popup_preview_text_window_t1

0x610b,	// (0x000478a0) popup_preview_text_window_t2_ParamLimits

0x610b,	// (0x000478a0) popup_preview_text_window_t2

0x6154,	// (0x000478e9) popup_preview_text_window_t3_ParamLimits

0x6154,	// (0x000478e9) popup_preview_text_window_t3

0x6199,	// (0x0004792e) popup_preview_text_window_t4_ParamLimits

0x6199,	// (0x0004792e) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00051072) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00051072) popup_preview_text_window_t

0x6217,	// (0x000479ac) scroll_pane_cp11

0x518f,	// (0x00046924) bg_popup_preview_window_pane_g1

0x60ad,	// (0x00047842) bg_popup_preview_window_pane_g2

0x60b5,	// (0x0004784a) bg_popup_preview_window_pane_g3

0x60bd,	// (0x00047852) bg_popup_preview_window_pane_g4

0x60c5,	// (0x0004785a) bg_popup_preview_window_pane_g5

0x60cd,	// (0x00047862) bg_popup_preview_window_pane_g6

0x60d5,	// (0x0004786a) bg_popup_preview_window_pane_g7

0x60dd,	// (0x00047872) bg_popup_preview_window_pane_g8

0x0b83,	// (0x00042318) aid_popup_width_pane

0xc8d1,	// (0x0004e066) popup_midp_note_alarm_window_ParamLimits

0xc8d1,	// (0x0004e066) popup_midp_note_alarm_window

0x3c74,	// (0x00045409) data_form_pane_ParamLimits

0xba4d,	// (0x0004d1e2) form_field_data_pane_g1

0xba57,	// (0x0004d1ec) form_field_data_pane_t1_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_ParamLimits

0x0206,	// (0x0004199b) data_form_wide_pane_ParamLimits

0x0217,	// (0x000419ac) form_field_data_wide_pane_g1

0x0223,	// (0x000419b8) form_field_data_wide_pane_t1_ParamLimits

0x39e5,	// (0x0004517a) input_focus_pane_cp6_ParamLimits

0xc2d6,	// (0x0004da6b) input_popup_find_pane_g1_ParamLimits

0xc2d6,	// (0x0004da6b) input_popup_find_pane_g1

0x1178,	// (0x0004290d) aid_navi_side_left_pane

0x118d,	// (0x00042922) aid_navi_side_right_pane

0x5ac6,	// (0x0004725b) bg_popup_window_pane_cp30_ParamLimits

0x5ac6,	// (0x0004725b) bg_popup_window_pane_cp30

0x5b40,	// (0x000472d5) popup_midp_note_alarm_window_g1_ParamLimits

0x5b40,	// (0x000472d5) popup_midp_note_alarm_window_g1

0x5b70,	// (0x00047305) popup_midp_note_alarm_window_t1_ParamLimits

0x5b70,	// (0x00047305) popup_midp_note_alarm_window_t1

0x5c11,	// (0x000473a6) popup_midp_note_alarm_window_t2_ParamLimits

0x5c11,	// (0x000473a6) popup_midp_note_alarm_window_t2

0x5cbf,	// (0x00047454) popup_midp_note_alarm_window_t3_ParamLimits

0x5cbf,	// (0x00047454) popup_midp_note_alarm_window_t3

0x5cf1,	// (0x00047486) popup_midp_note_alarm_window_t4_ParamLimits

0x5cf1,	// (0x00047486) popup_midp_note_alarm_window_t4

0x5d17,	// (0x000474ac) popup_midp_note_alarm_window_t5_ParamLimits

0x5d17,	// (0x000474ac) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0005100f) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0005100f) popup_midp_note_alarm_window_t

0x5dc3,	// (0x00047558) wait_bar_pane_cp1_ParamLimits

0x5dc3,	// (0x00047558) wait_bar_pane_cp1

0x3307,	// (0x00044a9c) wait_anim_pane_copy1

0x3307,	// (0x00044a9c) wait_border_pane_copy1

0x57ac,	// (0x00046f41) wait_border_pane_g1_copy1

0x023d,	// (0x000419d2) form_field_popup_pane_g1

0xba71,	// (0x0004d206) form_field_popup_pane_t1_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_cp7_ParamLimits

0x3ca2,	// (0x00045437) list_form_pane_ParamLimits

0x025d,	// (0x000419f2) form_field_popup_wide_pane_g1

0x0265,	// (0x000419fa) form_field_popup_wide_pane_t1_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_cp8_ParamLimits

0x3cae,	// (0x00045443) list_form_wide_pane_ParamLimits

0x68a8,	// (0x0004803d) aid_size_cell_graphic_pane

0xbaf0,	// (0x0004d285) data_form_pane_t1_ParamLimits

0xbb59,	// (0x0004d2ee) data_form_wide_pane_t1_ParamLimits

0xd6c1,	// (0x0004ee56) bg_status_flat_pane

0xbf1c,	// (0x0004d6b1) title_pane_t1_ParamLimits

0x33af,	// (0x00044b44) title_pane_t2_ParamLimits

0x33d5,	// (0x00044b6a) title_pane_t3_ParamLimits

0xf532,	// (0x00050cc7) title_pane_t_ParamLimits

0x4275,	// (0x00045a0a) level_1_signal_ParamLimits

0x4287,	// (0x00045a1c) level_2_signal_ParamLimits

0x429a,	// (0x00045a2f) level_3_signal_ParamLimits

0x42ad,	// (0x00045a42) level_4_signal_ParamLimits

0x42c0,	// (0x00045a55) level_5_signal_ParamLimits

0x42d3,	// (0x00045a68) level_6_signal_ParamLimits

0x42e6,	// (0x00045a7b) level_7_signal_ParamLimits

0x4275,	// (0x00045a0a) level_1_battery_ParamLimits

0x4287,	// (0x00045a1c) level_2_battery_ParamLimits

0x429a,	// (0x00045a2f) level_3_battery_ParamLimits

0x42ad,	// (0x00045a42) level_4_battery_ParamLimits

0x42c0,	// (0x00045a55) level_5_battery_ParamLimits

0x42d3,	// (0x00045a68) level_6_battery_ParamLimits

0x42e6,	// (0x00045a7b) level_7_battery_ParamLimits

0x59cb,	// (0x00047160) bg_status_flat_pane_g1

0x59d3,	// (0x00047168) bg_status_flat_pane_g2

0x59db,	// (0x00047170) bg_status_flat_pane_g3

0x59e3,	// (0x00047178) bg_status_flat_pane_g4

0x59eb,	// (0x00047180) bg_status_flat_pane_g5

0x59f3,	// (0x00047188) bg_status_flat_pane_g6

0x59fb,	// (0x00047190) bg_status_flat_pane_g7

0xbfa8,	// (0x0004d73d) tabs_3_active_pane_t1_ParamLimits

0xbfa8,	// (0x0004d73d) tabs_3_passive_pane_t1_ParamLimits

0xbfba,	// (0x0004d74f) tabs_4_active_pane_t1_ParamLimits

0xbfba,	// (0x0004d74f) tabs_4_1_passive_pane_t1_ParamLimits

0xc2e4,	// (0x0004da79) tabs_2_active_pane_t1_ParamLimits

0xc2e4,	// (0x0004da79) tabs_2_passive_pane_t1_ParamLimits

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp4_ParamLimits

0xc2f6,	// (0x0004da8b) tabs_2_long_active_pane_t1_ParamLimits

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp4_ParamLimits

0x1cd7,	// (0x0004346c) list_single_midp_graphic_pane_t1_ParamLimits

0x33e7,	// (0x00044b7c) bg_active_tab_pane_cp5_ParamLimits

0xc309,	// (0x0004da9e) tabs_3_long_active_pane_t1_ParamLimits

0x4c65,	// (0x000463fa) bg_passive_tab_pane_cp5_ParamLimits

0x1cd7,	// (0x0004346c) list_single_midp_graphic_pane_t1

0xd6c1,	// (0x0004ee56) bg_status_flat_pane_ParamLimits

0x4e1f,	// (0x000465b4) indicator_pane_cp2_ParamLimits

0x4e1f,	// (0x000465b4) indicator_pane_cp2

0xd83f,	// (0x0004efd4) navi_pane_srt_ParamLimits

0xd83f,	// (0x0004efd4) navi_pane_srt

0x4f6e,	// (0x00046703) popup_clock_digital_analogue_window_cp1

0x34c4,	// (0x00044c59) indicator_pane_t1

0x4941,	// (0x000460d6) copy_highlight_pane

0x4941,	// (0x000460d6) cursor_graphics_pane

0x4941,	// (0x000460d6) graphic_within_text_pane

0x4941,	// (0x000460d6) link_highlight_pane

0x61da,	// (0x0004796f) popup_preview_text_window_t5_ParamLimits

0x61da,	// (0x0004796f) popup_preview_text_window_t5

0x4a6f,	// (0x00046204) cursor_digital_pane

0x4a6f,	// (0x00046204) cursor_primary_pane

0x4a80,	// (0x00046215) cursor_primary_small_pane

0x4a88,	// (0x0004621d) cursor_secondary_pane

0x4a90,	// (0x00046225) cursor_title_pane

0x4a6f,	// (0x00046204) link_highlight_digital_pane

0x4a77,	// (0x0004620c) link_highlight_primary_pane

0x4a80,	// (0x00046215) link_highlight_primary_small_pane

0x4a88,	// (0x0004621d) link_highlight_secondary_pane

0x4a90,	// (0x00046225) link_highlight_title_pane

0x4a6f,	// (0x00046204) copy_highlight_digital_pane

0x4a6f,	// (0x00046204) copy_highlight_primary_pane

0x4a80,	// (0x00046215) copy_highlight_primary_small_pane

0x4a88,	// (0x0004621d) copy_highlight_secondary_pane

0x4a90,	// (0x00046225) copy_highlight_title_pane

0x4a88,	// (0x0004621d) graphic_text_digital_pane

0x5a69,	// (0x000471fe) graphic_text_primary_pane

0x5a72,	// (0x00047207) graphic_text_primary_small_pane

0x4a80,	// (0x00046215) graphic_text_secondary_pane

0x4a6f,	// (0x00046204) graphic_text_title_pane

0xd505,	// (0x0004ec9a) cursor_primary_pane_g1

0x5a5b,	// (0x000471f0) cursor_text_primary_t1

0xdabd,	// (0x0004f252) cursor_primary_small_pane_g1

0x5a4d,	// (0x000471e2) cursor_text_primary_small_t1

0xdab3,	// (0x0004f248) cursor_primary_small_pane_g1_copy1

0x5a35,	// (0x000471ca) cursor_text_primary_small_t1_copy1

0x5a13,	// (0x000471a8) cursor_text_title_t1

0xdaa9,	// (0x0004f23e) cursor_title_pane_g1

0xd505,	// (0x0004ec9a) cursor_digital_pane_g1

0x4aa2,	// (0x00046237) cursor_text_digital_t1

0x4ac7,	// (0x0004625c) link_highlight_primary_pane_g1

0x59bc,	// (0x00047151) link_highlight_primary_pane_t1

0x4ab0,	// (0x00046245) link_highlight_primary_small_pane_g1

0x4ab8,	// (0x0004624d) link_highlight_primary_small_pane_t1

0x4ac7,	// (0x0004625c) link_highlight_secondary_pane_g1

0x4acf,	// (0x00046264) link_highlight_secondary_pane_t1

0x5930,	// (0x000470c5) link_highlight_title_pane_g1

0x5938,	// (0x000470cd) link_highlight_title_pane_t1

0x5919,	// (0x000470ae) link_highlight_digital_pane_g1

0x5921,	// (0x000470b6) link_highlight_digital_pane_t1

0x57f1,	// (0x00046f86) copy_highlight_primary_pane_g1

0x57f9,	// (0x00046f8e) copy_highlight_primary_pane_t1

0x57cb,	// (0x00046f60) copy_highlight_primary_small_pane_g1

0x57e2,	// (0x00046f77) copy_highlight_primary_small_pane_t1

0x4ade,	// (0x00046273) copy_highlight_secondary_pane_g1

0x4ae6,	// (0x0004627b) copy_highlight_secondary_pane_t1

0x57cb,	// (0x00046f60) copy_highlight_title_pane_g1

0x57d3,	// (0x00046f68) copy_highlight_title_pane_t1

0x57f1,	// (0x00046f86) copy_highlight_digital_pane_g1

0x6a76,	// (0x0004820b) copy_highlight_digital_pane_t1

0x69ca,	// (0x0004815f) graphic_text_primary_pane_g1

0x6a5a,	// (0x000481ef) graphic_text_primary_pane_t1

0x6a68,	// (0x000481fd) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0005113e) graphic_text_primary_pane_t

0x6a36,	// (0x000481cb) graphic_text_primary_small_pane_g1

0x6a3e,	// (0x000481d3) graphic_text_primary_small_pane_t1

0x6a4c,	// (0x000481e1) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00051139) graphic_text_primary_small_pane_t

0x6a12,	// (0x000481a7) graphic_text_secondary_pane_g1

0x6a1a,	// (0x000481af) graphic_text_secondary_pane_t1

0x6a28,	// (0x000481bd) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00051134) graphic_text_secondary_pane_t

0x69ee,	// (0x00048183) graphic_text_title_pane_g1

0x69f6,	// (0x0004818b) graphic_text_title_pane_t1

0x6a04,	// (0x00048199) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0005112f) graphic_text_title_pane_t

0x69ca,	// (0x0004815f) graphic_text_digital_pane_g1

0x69d2,	// (0x00048167) graphic_text_digital_pane_t1

0x69e0,	// (0x00048175) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0005112a) graphic_text_digital_pane_t

0x33e7,	// (0x00044b7c) navi_icon_pane_srt_ParamLimits

0x33e7,	// (0x00044b7c) navi_icon_pane_srt

0x3307,	// (0x00044a9c) navi_midp_pane_srt

0x3307,	// (0x00044a9c) navi_navi_pane_srt

0x33e7,	// (0x00044b7c) navi_text_pane_srt_ParamLimits

0x33e7,	// (0x00044b7c) navi_text_pane_srt

0x6995,	// (0x0004812a) navi_navi_icon_text_pane_srt

0x699d,	// (0x00048132) navi_navi_pane_srt_g1_ParamLimits

0x699d,	// (0x00048132) navi_navi_pane_srt_g1

0x69af,	// (0x00048144) navi_navi_pane_srt_g2_ParamLimits

0x69af,	// (0x00048144) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00051125) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00051125) navi_navi_pane_srt_g

0x69c1,	// (0x00048156) navi_navi_tabs_pane_srt

0x6995,	// (0x0004812a) navi_navi_text_pane_srt

0x6995,	// (0x0004812a) navi_navi_volume_pane_srt

0x6986,	// (0x0004811b) navi_navi_text_pane_srt_t1

0x20e0,	// (0x00043875) navi_navi_volume_pane_srt_g1

0x20e8,	// (0x0004387d) volume_small_pane_srt_ParamLimits

0x20e8,	// (0x0004387d) volume_small_pane_srt

0x1474,	// (0x00042c09) volume_small_pane_srt_g1_ParamLimits

0x1474,	// (0x00042c09) volume_small_pane_srt_g1

0x1484,	// (0x00042c19) volume_small_pane_srt_g2_ParamLimits

0x1484,	// (0x00042c19) volume_small_pane_srt_g2

0x1495,	// (0x00042c2a) volume_small_pane_srt_g3_ParamLimits

0x1495,	// (0x00042c2a) volume_small_pane_srt_g3

0x14a6,	// (0x00042c3b) volume_small_pane_srt_g4_ParamLimits

0x14a6,	// (0x00042c3b) volume_small_pane_srt_g4

0x14b7,	// (0x00042c4c) volume_small_pane_srt_g5_ParamLimits

0x14b7,	// (0x00042c4c) volume_small_pane_srt_g5

0x14c8,	// (0x00042c5d) volume_small_pane_srt_g6_ParamLimits

0x14c8,	// (0x00042c5d) volume_small_pane_srt_g6

0x14d9,	// (0x00042c6e) volume_small_pane_srt_g7_ParamLimits

0x14d9,	// (0x00042c6e) volume_small_pane_srt_g7

0x14ea,	// (0x00042c7f) volume_small_pane_srt_g8_ParamLimits

0x14ea,	// (0x00042c7f) volume_small_pane_srt_g8

0x14fb,	// (0x00042c90) volume_small_pane_srt_g9_ParamLimits

0x14fb,	// (0x00042c90) volume_small_pane_srt_g9

0x150c,	// (0x00042ca1) volume_small_pane_srt_g10_ParamLimits

0x150c,	// (0x00042ca1) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00050ed2) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00050ed2) volume_small_pane_srt_g

0x37e7,	// (0x00044f7c) query_popup_data_pane_cp2

0x696c,	// (0x00048101) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x696c,	// (0x00048101) navi_navi_icon_text_pane_srt_t1

0x5a69,	// (0x000471fe) navi_tabs_2_long_pane_srt

0x5a69,	// (0x000471fe) navi_tabs_2_pane_srt

0x5a69,	// (0x000471fe) navi_tabs_3_long_pane_srt

0x5a69,	// (0x000471fe) navi_tabs_3_pane_srt

0x5a69,	// (0x000471fe) navi_tabs_4_pane_srt

0x20c0,	// (0x00043855) tabs_2_active_pane_srt_ParamLimits

0x20c0,	// (0x00043855) tabs_2_active_pane_srt

0x20d0,	// (0x00043865) tabs_2_passive_pane_srt_ParamLimits

0x20d0,	// (0x00043865) tabs_2_passive_pane_srt

0x5203,	// (0x00046998) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5203,	// (0x00046998) bg_passive_tab_pane_cp1_srt

0x6938,	// (0x000480cd) bg_passive_tab_pane_g1_cp1_srt

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp1_srt

0x6941,	// (0x000480d6) bg_passive_tab_pane_g3_cp1_srt

0x3662,	// (0x00044df7) bg_active_tab_pane_cp1_srt_ParamLimits

0x3662,	// (0x00044df7) bg_active_tab_pane_cp1_srt

0x694a,	// (0x000480df) tabs_2_active_pane_srt_g1

0xde50,	// (0x0004f5e5) tabs_2_active_pane_srt_t1_ParamLimits

0xde50,	// (0x0004f5e5) tabs_2_active_pane_srt_t1

0x6938,	// (0x000480cd) bg_active_tab_pane_g1_cp1_srt

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp1_srt

0x6941,	// (0x000480d6) bg_active_tab_pane_g3_cp1_srt

0x208d,	// (0x00043822) tabs_3_active_pane_srt_ParamLimits

0x208d,	// (0x00043822) tabs_3_active_pane_srt

0x209e,	// (0x00043833) tabs_3_passive_pane_cp_srt_ParamLimits

0x209e,	// (0x00043833) tabs_3_passive_pane_cp_srt

0x20af,	// (0x00043844) tabs_3_passive_pane_srt_ParamLimits

0x20af,	// (0x00043844) tabs_3_passive_pane_srt

0x5203,	// (0x00046998) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5203,	// (0x00046998) bg_passive_tab_pane_cp2_srt

0x4af5,	// (0x0004628a) bg_passive_tab_pane_g1_cp2_srt

0x4583,	// (0x00045d18) bg_passive_tab_pane_g2_cp2_srt

0x4afe,	// (0x00046293) bg_passive_tab_pane_g3_cp2_srt

0x3662,	// (0x00044df7) bg_active_tab_pane_cp2_srt_ParamLimits

0x3662,	// (0x00044df7) bg_active_tab_pane_cp2_srt

0x691e,	// (0x000480b3) tabs_3_active_pane_srt_g1

0xde3a,	// (0x0004f5cf) tabs_3_active_pane_srt_t1_ParamLimits

0xde3a,	// (0x0004f5cf) tabs_3_active_pane_srt_t1

0x4af5,	// (0x0004628a) bg_active_tab_pane_g1_cp2_srt

0x4583,	// (0x00045d18) bg_active_tab_pane_g2_cp2_srt

0x4afe,	// (0x00046293) bg_active_tab_pane_g3_cp2_srt

0x2045,	// (0x000437da) tabs_4_active_pane_srt_ParamLimits

0x2045,	// (0x000437da) tabs_4_active_pane_srt

0x2057,	// (0x000437ec) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2057,	// (0x000437ec) tabs_4_passive_pane_cp2_srt

0x167f,	// (0x00042e14) aid_size_cell_toolbar

0x6584,	// (0x00047d19) main_idle_act_pane_ParamLimits

0x183e,	// (0x00042fd3) popup_large_graphic_colour_window_ParamLimits

0xcbe1,	// (0x0004e376) popup_toolbar_window_ParamLimits

0xcbe1,	// (0x0004e376) popup_toolbar_window

0x673c,	// (0x00047ed1) list_single_graphic_2heading_pane_ParamLimits

0x673c,	// (0x00047ed1) list_single_graphic_2heading_pane

0x4024,	// (0x000457b9) aid_size_cell_apps_grid_lsc_pane

0x4036,	// (0x000457cb) aid_size_cell_apps_grid_prt_pane

0x4c65,	// (0x000463fa) bg_wml_button_pane_cp1_ParamLimits

0x4c65,	// (0x000463fa) bg_wml_button_pane_cp1

0xda6c,	// (0x0004f201) form_midp_field_text_pane_t1_ParamLimits

0x5203,	// (0x00046998) input_focus_pane_cp050_ParamLimits

0x546a,	// (0x00046bff) list_midp_form_text_pane_ParamLimits

0x5410,	// (0x00046ba5) input_focus_pane_cp051_ParamLimits

0x5424,	// (0x00046bb9) list_midp_choice_pane_ParamLimits

0xda0a,	// (0x0004f19f) list_single_2graphic_pane_cp3_ParamLimits

0xda0a,	// (0x0004f19f) list_single_2graphic_pane_cp3

0xda1d,	// (0x0004f1b2) list_single_midp_graphic_pane_ParamLimits

0xda1d,	// (0x0004f1b2) list_single_midp_graphic_pane

0x0419,	// (0x00041bae) list_single_graphic_2heading_pane_g1_ParamLimits

0x0419,	// (0x00041bae) list_single_graphic_2heading_pane_g1

0x0425,	// (0x00041bba) list_single_graphic_2heading_pane_g4_ParamLimits

0x0425,	// (0x00041bba) list_single_graphic_2heading_pane_g4

0x0431,	// (0x00041bc6) list_single_graphic_2heading_pane_g5_ParamLimits

0x0431,	// (0x00041bc6) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00050f25) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00050f25) list_single_graphic_2heading_pane_g

0x043d,	// (0x00041bd2) list_single_graphic_2heading_pane_t1_ParamLimits

0x043d,	// (0x00041bd2) list_single_graphic_2heading_pane_t1

0x0451,	// (0x00041be6) list_single_graphic_2heading_pane_t2_ParamLimits

0x0451,	// (0x00041be6) list_single_graphic_2heading_pane_t2

0x046d,	// (0x00041c02) list_single_graphic_2heading_pane_t3_ParamLimits

0x046d,	// (0x00041c02) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00050f2c) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00050f2c) list_single_graphic_2heading_pane_t

0x50cd,	// (0x00046862) bg_popup_sub_pane_cp2

0x50f7,	// (0x0004688c) grid_toobar_pane

0x1c52,	// (0x000433e7) cell_toolbar_pane_ParamLimits

0x1c52,	// (0x000433e7) cell_toolbar_pane

0x5133,	// (0x000468c8) cell_toolbar_pane_g1_ParamLimits

0x5133,	// (0x000468c8) cell_toolbar_pane_g1

0x5147,	// (0x000468dc) cell_toolbar_pane_g2_ParamLimits

0x5147,	// (0x000468dc) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00050f3a) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00050f3a) cell_toolbar_pane_g

0x5169,	// (0x000468fe) grid_highlight_pane_cp2_ParamLimits

0x5169,	// (0x000468fe) grid_highlight_pane_cp2

0x5183,	// (0x00046918) toolbar_button_pane

0x518f,	// (0x00046924) toolbar_button_pane_g1

0x5197,	// (0x0004692c) toolbar_button_pane_g2

0x519f,	// (0x00046934) toolbar_button_pane_g3

0x51a7,	// (0x0004693c) toolbar_button_pane_g4

0x51af,	// (0x00046944) toolbar_button_pane_g5

0x51b7,	// (0x0004694c) toolbar_button_pane_g6

0x51bf,	// (0x00046954) toolbar_button_pane_g7

0x51c7,	// (0x0004695c) toolbar_button_pane_g8

0x51cf,	// (0x00046964) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050f3f) toolbar_button_pane_g

0x1c8a,	// (0x0004341f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1c8a,	// (0x0004341f) list_single_2graphic_pane_g1_cp3

0xcc39,	// (0x0004e3ce) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcc39,	// (0x0004e3ce) list_single_2graphic_pane_g2_cp3

0x1ca7,	// (0x0004343c) list_single_2graphic_pane_g3_cp3

0x1caf,	// (0x00043444) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1caf,	// (0x00043444) list_single_2graphic_pane_g4_cp3

0x1cbb,	// (0x00043450) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1cbb,	// (0x00043450) list_single_2graphic_pane_t1_cp3

0x56c2,	// (0x00046e57) list_single_midp_graphic_pane_g2_ParamLimits

0x56c2,	// (0x00046e57) list_single_midp_graphic_pane_g2

0x0409,	// (0x00041b9e) aid_zoom_text_primary

0x1687,	// (0x00042e1c) aid_zoom_text_secondary

0xd55d,	// (0x0004ecf2) status_small_pane_g7_ParamLimits

0xd55d,	// (0x0004ecf2) status_small_pane_g7

0xd580,	// (0x0004ed15) status_small_pane_t1_ParamLimits

0xbef8,	// (0x0004d68d) title_pane_g2

0x0003,

0xf529,	// (0x00050cbe) title_pane_g

0xc170,	// (0x0004d905) aid_size_cell_colour_1_pane_ParamLimits

0xc170,	// (0x0004d905) aid_size_cell_colour_1_pane

0xc184,	// (0x0004d919) aid_size_cell_colour_2_pane_ParamLimits

0xc184,	// (0x0004d919) aid_size_cell_colour_2_pane

0xc198,	// (0x0004d92d) aid_size_cell_colour_3_pane_ParamLimits

0xc198,	// (0x0004d92d) aid_size_cell_colour_3_pane

0xc1ac,	// (0x0004d941) aid_size_cell_colour_4_pane_ParamLimits

0xc1ac,	// (0x0004d941) aid_size_cell_colour_4_pane

0x10b5,	// (0x0004284a) title_pane_stacon_g1_ParamLimits

0x10b5,	// (0x0004284a) title_pane_stacon_g1

0x5850,	// (0x00046fe5) popup_note_wait_window_g3_ParamLimits

0x5850,	// (0x00046fe5) popup_note_wait_window_g3

0x58c6,	// (0x0004705b) popup_note_wait_window_t5_ParamLimits

0x58c6,	// (0x0004705b) popup_note_wait_window_t5

0x3307,	// (0x00044a9c) main_feb_china_hwr_fs_writing_pane

0xc5e3,	// (0x0004dd78) popup_feb_china_hwr_fs_window_ParamLimits

0xc5e3,	// (0x0004dd78) popup_feb_china_hwr_fs_window

0xcc4a,	// (0x0004e3df) aid_size_cell_hwr_fs_ParamLimits

0xcc4a,	// (0x0004e3df) aid_size_cell_hwr_fs

0x5203,	// (0x00046998) bg_popup_sub_pane_cp3_ParamLimits

0x5203,	// (0x00046998) bg_popup_sub_pane_cp3

0xcc5f,	// (0x0004e3f4) grid_hwr_fs_pane_ParamLimits

0xcc5f,	// (0x0004e3f4) grid_hwr_fs_pane

0x1d32,	// (0x000434c7) linegrid_hwr_fs_pane_ParamLimits

0x1d32,	// (0x000434c7) linegrid_hwr_fs_pane

0xcc77,	// (0x0004e40c) cell_hwr_fs_pane_ParamLimits

0xcc77,	// (0x0004e40c) cell_hwr_fs_pane

0x520f,	// (0x000469a4) linegrid_hwr_fs_pane_g1_ParamLimits

0x520f,	// (0x000469a4) linegrid_hwr_fs_pane_g1

0xd9de,	// (0x0004f173) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9de,	// (0x0004f173) linegrid_hwr_fs_pane_g2

0x522d,	// (0x000469c2) linegrid_hwr_fs_pane_g3_ParamLimits

0x522d,	// (0x000469c2) linegrid_hwr_fs_pane_g3

0x1d64,	// (0x000434f9) linegrid_hwr_fs_pane_g4_ParamLimits

0x1d64,	// (0x000434f9) linegrid_hwr_fs_pane_g4

0x1d7e,	// (0x00043513) linegrid_hwr_fs_pane_g5_ParamLimits

0x1d7e,	// (0x00043513) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00050f65) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00050f65) linegrid_hwr_fs_pane_g

0x5239,	// (0x000469ce) cell_hwr_fs_pane_g1_ParamLimits

0x5239,	// (0x000469ce) cell_hwr_fs_pane_g1

0x5004,	// (0x00046799) cell_hwr_fs_pane_g2_ParamLimits

0x5004,	// (0x00046799) cell_hwr_fs_pane_g2

0xd9f0,	// (0x0004f185) cell_hwr_fs_pane_g3_ParamLimits

0xd9f0,	// (0x0004f185) cell_hwr_fs_pane_g3

0xd9fd,	// (0x0004f192) cell_hwr_fs_pane_g4_ParamLimits

0xd9fd,	// (0x0004f192) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00050f70) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00050f70) cell_hwr_fs_pane_g

0xcc9d,	// (0x0004e432) cell_hwr_fs_pane_t1

0x3307,	// (0x00044a9c) grid_highlight_pane_cp6

0x3307,	// (0x00044a9c) main_idle_act2_pane

0x3ddb,	// (0x00045570) aid_inside_area_popup_secondary

0xdac7,	// (0x0004f25c) aid_inside_area_window_primary_ParamLimits

0xdac7,	// (0x0004f25c) aid_inside_area_window_primary

0x6a85,	// (0x0004821a) ai2_news_ticker_pane

0x6a8d,	// (0x00048222) aid_size_cell_ai1_link_ParamLimits

0x6a8d,	// (0x00048222) aid_size_cell_ai1_link

0xde66,	// (0x0004f5fb) popup_ai2_data_window_ParamLimits

0xde66,	// (0x0004f5fb) popup_ai2_data_window

0x6abd,	// (0x00048252) popup_ai2_link_window_ParamLimits

0x6abd,	// (0x00048252) popup_ai2_link_window

0x5203,	// (0x00046998) bg_popup_sub_pane_cp4_ParamLimits

0x5203,	// (0x00046998) bg_popup_sub_pane_cp4

0x6ad1,	// (0x00048266) grid_ai2_link_pane_ParamLimits

0x6ad1,	// (0x00048266) grid_ai2_link_pane

0x6ae8,	// (0x0004827d) popup_ai2_link_window_g1_ParamLimits

0x6ae8,	// (0x0004827d) popup_ai2_link_window_g1

0x6af4,	// (0x00048289) popup_ai2_link_window_g2_ParamLimits

0x6af4,	// (0x00048289) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00051143) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00051143) popup_ai2_link_window_g

0x6b03,	// (0x00048298) ai2_mp_button_pane

0x6b0b,	// (0x000482a0) ai2_mp_volume_pane

0x5410,	// (0x00046ba5) bg_popup_sub_pane_cp5_ParamLimits

0x5410,	// (0x00046ba5) bg_popup_sub_pane_cp5

0x6b13,	// (0x000482a8) heading_ai2_gene_pane_ParamLimits

0x6b13,	// (0x000482a8) heading_ai2_gene_pane

0x6b1f,	// (0x000482b4) list_ai2_gene_pane_ParamLimits

0x6b1f,	// (0x000482b4) list_ai2_gene_pane

0x6b67,	// (0x000482fc) cell_ai2_link_pane_ParamLimits

0x6b67,	// (0x000482fc) cell_ai2_link_pane

0x6b7d,	// (0x00048312) cell_ai2_link_pane_g1

0x3307,	// (0x00044a9c) grid_highlight_pane_cp7

0x20fd,	// (0x00043892) ai2_mp_volume_pane_g1

0x6c4d,	// (0x000483e2) ai2_mp_volume_pane_g2

0xde90,	// (0x0004f625) list_ai2_gene_pane_t1

0x6c55,	// (0x000483ea) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0005115c) ai2_mp_volume_pane_g

0x2105,	// (0x0004389a) volume_small_pane_cp3

0x6c5d,	// (0x000483f2) aid_size_cell_ai2_button

0x6c65,	// (0x000483fa) grid_ai2_button_pane

0x6c6e,	// (0x00048403) cell_ai2_button_pane_ParamLimits

0x6c6e,	// (0x00048403) cell_ai2_button_pane

0xd3be,	// (0x0004eb53) cell_ai2_button_pane_g1

0x3307,	// (0x00044a9c) grid_highlight_pane_cp8

0x6c0d,	// (0x000483a2) ai2_gene_pane_t1_ParamLimits

0x6c0d,	// (0x000483a2) ai2_gene_pane_t1

0xc581,	// (0x0004dd16) aid_height_parent_landscape

0xdc0f,	// (0x0004f3a4) aid_height_set_list

0x6584,	// (0x00047d19) aid_size_parent

0x68a8,	// (0x0004803d) aid_size_cell_graphic_pane_ParamLimits

0x6b2f,	// (0x000482c4) popup_ai2_data_window_g1_ParamLimits

0x6b2f,	// (0x000482c4) popup_ai2_data_window_g1

0x6b3b,	// (0x000482d0) ai2_news_ticker_pane_g1

0x6b43,	// (0x000482d8) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00051148) ai2_news_ticker_pane_g

0x6b4b,	// (0x000482e0) ai2_news_ticker_pane_t1

0x6b59,	// (0x000482ee) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0005114d) ai2_news_ticker_pane_t

0x6b86,	// (0x0004831b) heading_ai2_gene_pane_g1

0x6b8e,	// (0x00048323) heading_ai2_gene_pane_t1_ParamLimits

0x6b8e,	// (0x00048323) heading_ai2_gene_pane_t1

0x6ba3,	// (0x00048338) list_highlight_pane_cp6

0xde7a,	// (0x0004f60f) ai2_gene_pane_ParamLimits

0xde7a,	// (0x0004f60f) ai2_gene_pane

0xde9e,	// (0x0004f633) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x00051152) list_ai2_gene_pane_t

0x6bde,	// (0x00048373) list_highlight_pane_cp8_ParamLimits

0x6bde,	// (0x00048373) list_highlight_pane_cp8

0x6bef,	// (0x00048384) ai2_gene_pane_g1_ParamLimits

0x6bef,	// (0x00048384) ai2_gene_pane_g1

0x6c01,	// (0x00048396) ai2_gene_pane_g2_ParamLimits

0x6c01,	// (0x00048396) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00051157) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00051157) ai2_gene_pane_g

0x3c0a,	// (0x0004539f) scroll_pane_cp12

0xc53e,	// (0x0004dcd3) control_pane_t3_ParamLimits

0xc53e,	// (0x0004dcd3) control_pane_t3

0xd571,	// (0x0004ed06) status_small_pane_g8_ParamLimits

0xd571,	// (0x0004ed06) status_small_pane_g8

0xc678,	// (0x0004de0d) popup_find_window_ParamLimits

0xc90b,	// (0x0004e0a0) popup_note_image_window_ParamLimits

0x0485,	// (0x00041c1a) list_double2_graphic_pane_vc_g1_ParamLimits

0x0485,	// (0x00041c1a) list_double2_graphic_pane_vc_g1

0x44c0,	// (0x00045c55) list_double2_graphic_pane_vc_g2_ParamLimits

0x44c0,	// (0x00045c55) list_double2_graphic_pane_vc_g2

0x0ff7,	// (0x0004278c) list_double2_graphic_pane_vc_g3_ParamLimits

0x0ff7,	// (0x0004278c) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00050f33) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00050f33) list_double2_graphic_pane_vc_g

0x0491,	// (0x00041c26) list_double2_graphic_pane_vc_t1_ParamLimits

0x0491,	// (0x00041c26) list_double2_graphic_pane_vc_t1

0x44c0,	// (0x00045c55) list_single_heading_pane_vc_g1_ParamLimits

0x44c0,	// (0x00045c55) list_single_heading_pane_vc_g1

0x0ff7,	// (0x0004278c) list_single_heading_pane_vc_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050d42) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050d42) list_single_heading_pane_vc_g

0x04a7,	// (0x00041c3c) list_single_heading_pane_vc_t1_ParamLimits

0x04a7,	// (0x00041c3c) list_single_heading_pane_vc_t1

0x04bd,	// (0x00041c52) list_single_heading_pane_vc_t2_ParamLimits

0x04bd,	// (0x00041c52) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00050f54) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00050f54) list_single_heading_pane_vc_t

0x1ced,	// (0x00043482) list_setting_number_pane_vc_g1_ParamLimits

0x1ced,	// (0x00043482) list_setting_number_pane_vc_g1

0x1cf9,	// (0x0004348e) list_setting_number_pane_vc_g2_ParamLimits

0x1cf9,	// (0x0004348e) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00050f59) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00050f59) list_setting_number_pane_vc_g

0x04cf,	// (0x00041c64) list_setting_number_pane_vc_t1_ParamLimits

0x04cf,	// (0x00041c64) list_setting_number_pane_vc_t1

0x04e3,	// (0x00041c78) list_setting_number_pane_vc_t2_ParamLimits

0x04e3,	// (0x00041c78) list_setting_number_pane_vc_t2

0x04ff,	// (0x00041c94) list_setting_number_pane_vc_t3_ParamLimits

0x04ff,	// (0x00041c94) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00050f5e) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00050f5e) list_setting_number_pane_vc_t

0x052b,	// (0x00041cc0) set_value_pane_vc_ParamLimits

0x052b,	// (0x00041cc0) set_value_pane_vc

0x673c,	// (0x00047ed1) list_double2_graphic_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double2_graphic_pane_vc

0x673c,	// (0x00047ed1) list_double2_large_graphic_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double2_large_graphic_pane_vc

0x673c,	// (0x00047ed1) list_double2_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double2_pane_vc

0x673c,	// (0x00047ed1) list_double_graphic_heading_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double_graphic_heading_pane_vc

0x673c,	// (0x00047ed1) list_double_graphic_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double_graphic_pane_vc

0x673c,	// (0x00047ed1) list_double_heading_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double_heading_pane_vc

0x674e,	// (0x00047ee3) list_double_large_graphic_pane_vc_ParamLimits

0x674e,	// (0x00047ee3) list_double_large_graphic_pane_vc

0x673c,	// (0x00047ed1) list_double_number_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double_number_pane_vc

0x673c,	// (0x00047ed1) list_double_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double_pane_vc

0x673c,	// (0x00047ed1) list_double_time_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_double_time_pane_vc

0x673c,	// (0x00047ed1) list_setting_number_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_setting_number_pane_vc

0x673c,	// (0x00047ed1) list_setting_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_setting_pane_vc

0x673c,	// (0x00047ed1) list_single_graphic_heading_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_single_graphic_heading_pane_vc

0x673c,	// (0x00047ed1) list_single_heading_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_single_heading_pane_vc

0x673c,	// (0x00047ed1) list_single_number_heading_pane_vc_ParamLimits

0x673c,	// (0x00047ed1) list_single_number_heading_pane_vc

0x0485,	// (0x00041c1a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0485,	// (0x00041c1a) list_double_graphic_heading_pane_vc_g1

0x44c0,	// (0x00045c55) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x44c0,	// (0x00045c55) list_double_graphic_heading_pane_vc_g2

0x0ff7,	// (0x0004278c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0ff7,	// (0x0004278c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x00050f33) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050f33) list_double_graphic_heading_pane_vc_g

0x0603,	// (0x00041d98) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0603,	// (0x00041d98) list_double_graphic_heading_pane_vc_t1

0x061f,	// (0x00041db4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x061f,	// (0x00041db4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x00051163) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x00051163) list_double_graphic_heading_pane_vc_t

0x1ced,	// (0x00043482) list_setting_pane_vc_g1_ParamLimits

0x1ced,	// (0x00043482) list_setting_pane_vc_g1

0x1cf9,	// (0x0004348e) list_setting_pane_vc_g2_ParamLimits

0x1cf9,	// (0x0004348e) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00050f59) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00050f59) list_setting_pane_vc_g

0x063d,	// (0x00041dd2) list_setting_pane_vc_t1_ParamLimits

0x063d,	// (0x00041dd2) list_setting_pane_vc_t1

0x0659,	// (0x00041dee) list_setting_pane_vc_t2_ParamLimits

0x0659,	// (0x00041dee) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x00051191) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x00051191) list_setting_pane_vc_t

0x052b,	// (0x00041cc0) set_value_pane_cp_vc_ParamLimits

0x052b,	// (0x00041cc0) set_value_pane_cp_vc

0x44c0,	// (0x00045c55) list_single_number_heading_pane_vc_g1_ParamLimits

0x44c0,	// (0x00045c55) list_single_number_heading_pane_vc_g1

0x0ff7,	// (0x0004278c) list_single_number_heading_pane_vc_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050d42) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050d42) list_single_number_heading_pane_vc_g

0x0675,	// (0x00041e0a) list_single_number_heading_pane_vc_t1_ParamLimits

0x0675,	// (0x00041e0a) list_single_number_heading_pane_vc_t1

0xf35a,	// (0x00050aef) list_single_number_heading_pane_vc_t2_ParamLimits

0xf35a,	// (0x00050aef) list_single_number_heading_pane_vc_t2

0xf36c,	// (0x00050b01) list_single_number_heading_pane_vc_t3_ParamLimits

0xf36c,	// (0x00050b01) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x00051196) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00051196) list_single_number_heading_pane_vc_t

0x0485,	// (0x00041c1a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0485,	// (0x00041c1a) list_single_graphic_heading_pane_vc_g1

0x44c0,	// (0x00045c55) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x44c0,	// (0x00045c55) list_single_graphic_heading_pane_vc_g4

0x0ff7,	// (0x0004278c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0ff7,	// (0x0004278c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00050f33) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050f33) list_single_graphic_heading_pane_vc_g

0x0675,	// (0x00041e0a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0675,	// (0x00041e0a) list_single_graphic_heading_pane_vc_t1

0x068b,	// (0x00041e20) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x068b,	// (0x00041e20) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0005119d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0005119d) list_single_graphic_heading_pane_vc_t

0x44c0,	// (0x00045c55) list_double2_pane_vc_g1_ParamLimits

0x44c0,	// (0x00045c55) list_double2_pane_vc_g1

0x0ff7,	// (0x0004278c) list_double2_pane_vc_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050d42) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050d42) list_double2_pane_vc_g

0x05b6,	// (0x00041d4b) list_double2_pane_vc_t1_ParamLimits

0x05b6,	// (0x00041d4b) list_double2_pane_vc_t1

0x210e,	// (0x000438a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x210e,	// (0x000438a3) list_double2_large_graphic_pane_vc_g1

0x44c0,	// (0x00045c55) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x44c0,	// (0x00045c55) list_double2_large_graphic_pane_vc_g2

0x0ff7,	// (0x0004278c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0ff7,	// (0x0004278c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00050d5a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00050d5a) list_double2_large_graphic_pane_vc_g

0x069d,	// (0x00041e32) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x069d,	// (0x00041e32) list_double2_large_graphic_pane_vc_t1

0x211a,	// (0x000438af) list_double_time_pane_vc_g1_ParamLimits

0x211a,	// (0x000438af) list_double_time_pane_vc_g1

0x2126,	// (0x000438bb) list_double_time_pane_vc_g2_ParamLimits

0x2126,	// (0x000438bb) list_double_time_pane_vc_g2

0x0001,

0xfa0d,	// (0x000511a2) list_double_time_pane_vc_g_ParamLimits

0xfa0d,	// (0x000511a2) list_double_time_pane_vc_g

0x06b3,	// (0x00041e48) list_double_time_pane_vc_t1_ParamLimits

0x06b3,	// (0x00041e48) list_double_time_pane_vc_t1

0x06d7,	// (0x00041e6c) list_double_time_pane_vc_t2_ParamLimits

0x06d7,	// (0x00041e6c) list_double_time_pane_vc_t2

0x0726,	// (0x00041ebb) list_double_time_pane_vc_t3_ParamLimits

0x0726,	// (0x00041ebb) list_double_time_pane_vc_t3

0x0738,	// (0x00041ecd) list_double_time_pane_vc_t4_ParamLimits

0x0738,	// (0x00041ecd) list_double_time_pane_vc_t4

0x0003,

0xfa12,	// (0x000511a7) list_double_time_pane_vc_t_ParamLimits

0xfa12,	// (0x000511a7) list_double_time_pane_vc_t

0x44c0,	// (0x00045c55) list_double_pane_vc_g1_ParamLimits

0x44c0,	// (0x00045c55) list_double_pane_vc_g1

0x0ff7,	// (0x0004278c) list_double_pane_vc_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050d42) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050d42) list_double_pane_vc_g

0x074c,	// (0x00041ee1) list_double_pane_vc_t1_ParamLimits

0x074c,	// (0x00041ee1) list_double_pane_vc_t1

0x0760,	// (0x00041ef5) list_double_pane_vc_t2_ParamLimits

0x0760,	// (0x00041ef5) list_double_pane_vc_t2

0x0001,

0xfa1b,	// (0x000511b0) list_double_pane_vc_t_ParamLimits

0xfa1b,	// (0x000511b0) list_double_pane_vc_t

0x44c0,	// (0x00045c55) list_double_number_pane_vc_g1_ParamLimits

0x44c0,	// (0x00045c55) list_double_number_pane_vc_g1

0x0ff7,	// (0x0004278c) list_double_number_pane_vc_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050d42) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050d42) list_double_number_pane_vc_g

0x0778,	// (0x00041f0d) list_double_number_pane_vc_t1_ParamLimits

0x0778,	// (0x00041f0d) list_double_number_pane_vc_t1

0x078a,	// (0x00041f1f) list_double_number_pane_vc_t2_ParamLimits

0x078a,	// (0x00041f1f) list_double_number_pane_vc_t2

0x079e,	// (0x00041f33) list_double_number_pane_vc_t3_ParamLimits

0x079e,	// (0x00041f33) list_double_number_pane_vc_t3

0x0002,

0xfa20,	// (0x000511b5) list_double_number_pane_vc_t_ParamLimits

0xfa20,	// (0x000511b5) list_double_number_pane_vc_t

0x2132,	// (0x000438c7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2132,	// (0x000438c7) list_double_large_graphic_pane_vc_g1

0x214e,	// (0x000438e3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x214e,	// (0x000438e3) list_double_large_graphic_pane_vc_g2

0x2162,	// (0x000438f7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2162,	// (0x000438f7) list_double_large_graphic_pane_vc_g3

0x07b6,	// (0x00041f4b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x07b6,	// (0x00041f4b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa27,	// (0x000511bc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x000511bc) list_double_large_graphic_pane_vc_g

0x07c5,	// (0x00041f5a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x07c5,	// (0x00041f5a) list_double_large_graphic_pane_vc_t1

0x07e1,	// (0x00041f76) list_double_large_graphic_pane_vc_t2_ParamLimits

0x07e1,	// (0x00041f76) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa30,	// (0x000511c5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa30,	// (0x000511c5) list_double_large_graphic_pane_vc_t

0x44c0,	// (0x00045c55) list_double_heading_pane_vc_g1_ParamLimits

0x44c0,	// (0x00045c55) list_double_heading_pane_vc_g1

0x0ff7,	// (0x0004278c) list_double_heading_pane_vc_g2_ParamLimits

0x0ff7,	// (0x0004278c) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050d42) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050d42) list_double_heading_pane_vc_g

0x0803,	// (0x00041f98) list_double_heading_pane_vc_t1_ParamLimits

0x0803,	// (0x00041f98) list_double_heading_pane_vc_t1

0x0817,	// (0x00041fac) list_double_heading_pane_vc_t2_ParamLimits

0x0817,	// (0x00041fac) list_double_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x000511ca) list_double_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x000511ca) list_double_heading_pane_vc_t

0x082f,	// (0x00041fc4) list_double_graphic_pane_vc_g1_ParamLimits

0x082f,	// (0x00041fc4) list_double_graphic_pane_vc_g1

0x2171,	// (0x00043906) list_double_graphic_pane_vc_g2_ParamLimits

0x2171,	// (0x00043906) list_double_graphic_pane_vc_g2

0x44c0,	// (0x00045c55) list_double_graphic_pane_vc_g3_ParamLimits

0x44c0,	// (0x00045c55) list_double_graphic_pane_vc_g3

0x0003,

0xfa3a,	// (0x000511cf) list_double_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x000511cf) list_double_graphic_pane_vc_g

0x083b,	// (0x00041fd0) list_double_graphic_pane_vc_t1_ParamLimits

0x083b,	// (0x00041fd0) list_double_graphic_pane_vc_t1

0x0865,	// (0x00041ffa) list_double_graphic_pane_vc_t2_ParamLimits

0x0865,	// (0x00041ffa) list_double_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x000511d8) list_double_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x000511d8) list_double_graphic_pane_vc_t

0x0b8f,	// (0x00042324) aid_size_cell_fastswap

0xbcdf,	// (0x0004d474) aid_size_cell_touch_ParamLimits

0xbcdf,	// (0x0004d474) aid_size_cell_touch

0x0df2,	// (0x00042587) popup_fast_swap_wide_window_ParamLimits

0x0df2,	// (0x00042587) popup_fast_swap_wide_window

0xbe8f,	// (0x0004d624) touch_pane_ParamLimits

0xbe8f,	// (0x0004d624) touch_pane

0x3c6c,	// (0x00045401) button_value_adjust_pane_cp2

0x0130,	// (0x000418c5) button_value_adjust_pane_cp4

0x0154,	// (0x000418e9) form_field_data_pane_cp2

0xba0c,	// (0x0004d1a1) form_field_data_wide_pane_cp2

0x40f3,	// (0x00045888) bg_scroll_pane_ParamLimits

0x1217,	// (0x000429ac) scroll_handle_pane_ParamLimits

0x122b,	// (0x000429c0) scroll_sc2_down_pane_ParamLimits

0x122b,	// (0x000429c0) scroll_sc2_down_pane

0x4124,	// (0x000458b9) scroll_sc2_up_pane_ParamLimits

0x4124,	// (0x000458b9) scroll_sc2_up_pane

0xdfce,	// (0x0004f763) grid_wheel_folder_pane_g1_ParamLimits

0xdfce,	// (0x0004f763) grid_wheel_folder_pane_g1

0x140c,	// (0x00042ba1) clock_nsta_pane_cp2_ParamLimits

0x140c,	// (0x00042ba1) clock_nsta_pane_cp2

0xd460,	// (0x0004ebf5) listscroll_midp_pane_ParamLimits

0xd46c,	// (0x0004ec01) midp_canvas_pane

0x4c3d,	// (0x000463d2) nsta_clock_indic_pane

0x4c71,	// (0x00046406) listscroll_form_pane_vc

0x4c79,	// (0x0004640e) listscroll_set_pane_vc_ParamLimits

0x4c79,	// (0x0004640e) listscroll_set_pane_vc

0xd6e9,	// (0x0004ee7e) clock_nsta_pane

0xd713,	// (0x0004eea8) indicator_nsta_pane

0x50cd,	// (0x00046862) bg_popup_sub_pane_cp2_ParamLimits

0x50e1,	// (0x00046876) find_pane_cp2_ParamLimits

0x50e1,	// (0x00046876) find_pane_cp2

0x50f7,	// (0x0004688c) grid_toobar_pane_ParamLimits

0x51d7,	// (0x0004696c) list_form_gen_pane_vc_ParamLimits

0x51d7,	// (0x0004696c) list_form_gen_pane_vc

0x51ed,	// (0x00046982) scroll_pane_cp8_vc_ParamLimits

0x51ed,	// (0x00046982) scroll_pane_cp8_vc

0x5269,	// (0x000469fe) data_form_wide_pane_vc_ParamLimits

0x5269,	// (0x000469fe) data_form_wide_pane_vc

0x5275,	// (0x00046a0a) form_field_data_wide_pane_vc_g1

0x527d,	// (0x00046a12) form_field_data_wide_pane_vc_t1_ParamLimits

0x527d,	// (0x00046a12) form_field_data_wide_pane_vc_t1

0x3c80,	// (0x00045415) input_focus_pane_cp6_vc_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_cp6_vc

0x55c3,	// (0x00046d58) list_midp_pane_ParamLimits

0x6912,	// (0x000480a7) scroll_pane_cp16_ParamLimits

0x6912,	// (0x000480a7) scroll_pane_cp16

0x5619,	// (0x00046dae) button_value_adjust_pane_ParamLimits

0x5619,	// (0x00046dae) button_value_adjust_pane

0xdc20,	// (0x0004f3b5) button_value_adjust_pane_cp6_ParamLimits

0xdc20,	// (0x0004f3b5) button_value_adjust_pane_cp6

0xdd3a,	// (0x0004f4cf) settings_code_pane_cp_ParamLimits

0xdd3a,	// (0x0004f4cf) settings_code_pane_cp

0xd3be,	// (0x0004eb53) cell_touch_pane_g1

0xd3be,	// (0x0004eb53) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00050e78) cell_touch_pane_g

0xdeac,	// (0x0004f641) cell_touch_pane_cp_ParamLimits

0xdeac,	// (0x0004f641) cell_touch_pane_cp

0xdec8,	// (0x0004f65d) cell_touch_pane_ParamLimits

0xdec8,	// (0x0004f65d) cell_touch_pane

0xd3be,	// (0x0004eb53) scroll_sc2_down_pane_g1

0xd3be,	// (0x0004eb53) scroll_sc2_up_pane_g1

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp4_vc

0x6ca2,	// (0x00048437) list_set_graphic_pane_vc_g1_ParamLimits

0x6ca2,	// (0x00048437) list_set_graphic_pane_vc_g1

0x6cae,	// (0x00048443) list_set_graphic_pane_vc_g2_ParamLimits

0x6cae,	// (0x00048443) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x00051168) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x00051168) list_set_graphic_pane_vc_g

0x6cba,	// (0x0004844f) text_primary_small_cp13_vc_ParamLimits

0x6cba,	// (0x0004844f) text_primary_small_cp13_vc

0x6cd2,	// (0x00048467) list_set_graphic_pane_vc_ParamLimits

0x6cd2,	// (0x00048467) list_set_graphic_pane_vc

0x3307,	// (0x00044a9c) input_focus_pane_cp2_vc

0xd3be,	// (0x0004eb53) setting_code_pane_vc_g1

0x3432,	// (0x00044bc7) setting_code_pane_vc_t1

0x6ce5,	// (0x0004847a) set_text_pane_vc_t1_ParamLimits

0x6ce5,	// (0x0004847a) set_text_pane_vc_t1

0x3307,	// (0x00044a9c) input_focus_pane_cp1_vc

0x6d01,	// (0x00048496) list_set_text_pane_vc

0xd3be,	// (0x0004eb53) setting_text_pane_vc_g1

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp2_vc

0x3429,	// (0x00044bbe) setting_slider_graphic_pane_vc_g1

0x6d0b,	// (0x000484a0) setting_slider_graphic_pane_vc_t1

0x6d1b,	// (0x000484b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0005116d) setting_slider_graphic_pane_vc_t

0x6d2b,	// (0x000484c0) slider_set_pane_cp_vc

0x6d33,	// (0x000484c8) slider_set_pane_vc_g1

0x6d3c,	// (0x000484d1) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x00051172) slider_set_pane_vc_g

0x3ccc,	// (0x00045461) set_opt_bg_pane_g1_copy1

0x3cd4,	// (0x00045469) set_opt_bg_pane_g2_copy1

0x6d68,	// (0x000484fd) set_opt_bg_pane_g3_copy1

0x3ce4,	// (0x00045479) set_opt_bg_pane_g4_copy1

0x3cec,	// (0x00045481) set_opt_bg_pane_g5_copy1

0x3cf4,	// (0x00045489) set_opt_bg_pane_g6_copy1

0x6d72,	// (0x00048507) set_opt_bg_pane_g7_copy1

0x6d7c,	// (0x00048511) set_opt_bg_pane_g8_copy1

0x6d86,	// (0x0004851b) set_opt_bg_pane_g9_copy1

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp_vc

0x6d90,	// (0x00048525) setting_slider_pane_vc_t1

0x6d9f,	// (0x00048534) setting_slider_pane_vc_t2

0x6daf,	// (0x00048544) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x00051181) setting_slider_pane_vc_t

0x6dbf,	// (0x00048554) slider_set_pane_vc

0x1da2,	// (0x00043537) volume_set_pane_vc_g1

0x1dab,	// (0x00043540) volume_set_pane_vc_g2

0x1db4,	// (0x00043549) volume_set_pane_vc_g3

0x1dbd,	// (0x00043552) volume_set_pane_vc_g4

0x1dc6,	// (0x0004355b) volume_set_pane_vc_g5

0x1dcf,	// (0x00043564) volume_set_pane_vc_g6

0x1dd8,	// (0x0004356d) volume_set_pane_vc_g7

0x1de1,	// (0x00043576) volume_set_pane_vc_g8

0x1dea,	// (0x0004357f) volume_set_pane_vc_g9

0x1df3,	// (0x00043588) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x00051026) volume_set_pane_vc_g

0x6dc7,	// (0x0004855c) volume_set_pane_vc

0x6dcf,	// (0x00048564) button_value_adjust_pane_cp1_vc

0x6dd9,	// (0x0004856e) list_highlight_pane_cp2_vc

0x6de2,	// (0x00048577) list_set_pane_vc_ParamLimits

0x6de2,	// (0x00048577) list_set_pane_vc

0x6e40,	// (0x000485d5) main_pane_set_vc_t1_ParamLimits

0x6e40,	// (0x000485d5) main_pane_set_vc_t1

0x6e55,	// (0x000485ea) main_pane_set_vc_t2_ParamLimits

0x6e55,	// (0x000485ea) main_pane_set_vc_t2

0x6e67,	// (0x000485fc) main_pane_set_vc_t3_ParamLimits

0x6e67,	// (0x000485fc) main_pane_set_vc_t3

0x6e7b,	// (0x00048610) main_pane_set_vc_t4_ParamLimits

0x6e7b,	// (0x00048610) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x00051188) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x00051188) main_pane_set_vc_t

0x6e8f,	// (0x00048624) setting_code_pane_vc_ParamLimits

0x6e8f,	// (0x00048624) setting_code_pane_vc

0x6ea0,	// (0x00048635) setting_slider_graphic_pane_vc

0x6ea0,	// (0x00048635) setting_slider_pane_vc

0x6ea0,	// (0x00048635) setting_text_pane_vc

0x6ea0,	// (0x00048635) setting_volume_pane_vc

0x6eaa,	// (0x0004863f) scroll_pane_cp121_vc

0x3c5a,	// (0x000453ef) set_content_pane_vc

0x6eb2,	// (0x00048647) button_value_adjust_pane_g1

0x6ebb,	// (0x00048650) button_value_adjust_pane_g2

0x0001,

0xfa48,	// (0x000511dd) button_value_adjust_pane_g

0x6ec4,	// (0x00048659) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ec4,	// (0x00048659) form_field_slider_wide_pane_vc_t1

0x6ed8,	// (0x0004866d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ed8,	// (0x0004866d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4d,	// (0x000511e2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4d,	// (0x000511e2) form_field_slider_wide_pane_vc_t

0x3662,	// (0x00044df7) input_focus_pane_cp10_vc_ParamLimits

0x3662,	// (0x00044df7) input_focus_pane_cp10_vc

0x6f06,	// (0x0004869b) slider_cont_pane_cp1_vc_ParamLimits

0x6f06,	// (0x0004869b) slider_cont_pane_cp1_vc

0x6f18,	// (0x000486ad) slider_form_pane_g1_cp2

0x6d3c,	// (0x000484d1) slider_form_pane_g2_cp2

0x6f45,	// (0x000486da) form_field_slider_pane_vc_t3

0x6f53,	// (0x000486e8) form_field_slider_pane_vc_t4

0x6f61,	// (0x000486f6) slider_form_pane_vc_ParamLimits

0x6f61,	// (0x000486f6) slider_form_pane_vc

0x6f6e,	// (0x00048703) form_field_slider_pane_vc_t1_ParamLimits

0x6f6e,	// (0x00048703) form_field_slider_pane_vc_t1

0x6ed8,	// (0x0004866d) form_field_slider_pane_vc_t2_ParamLimits

0x6ed8,	// (0x0004866d) form_field_slider_pane_vc_t2

0x0001,

0xfa5f,	// (0x000511f4) form_field_slider_pane_vc_t_ParamLimits

0xfa5f,	// (0x000511f4) form_field_slider_pane_vc_t

0x3662,	// (0x00044df7) input_focus_pane_cp9_vc_ParamLimits

0x3662,	// (0x00044df7) input_focus_pane_cp9_vc

0x6f8a,	// (0x0004871f) slider_cont_pane_vc_ParamLimits

0x6f8a,	// (0x0004871f) slider_cont_pane_vc

0x6f9e,	// (0x00048733) list_form_graphic_pane_cp_vc_ParamLimits

0x6f9e,	// (0x00048733) list_form_graphic_pane_cp_vc

0x5275,	// (0x00046a0a) form_field_popup_wide_pane_vc_g1

0x6fb3,	// (0x00048748) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fb3,	// (0x00048748) form_field_popup_wide_pane_vc_t1

0x3c80,	// (0x00045415) input_focus_pane_cp8_vc_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_cp8_vc

0x6ff8,	// (0x0004878d) list_form_wide_pane_vc_ParamLimits

0x6ff8,	// (0x0004878d) list_form_wide_pane_vc

0x7004,	// (0x00048799) list_form_graphic_pane_vc_g1

0x700c,	// (0x000487a1) list_form_graphic_pane_vc_t1_ParamLimits

0x700c,	// (0x000487a1) list_form_graphic_pane_vc_t1

0x33e7,	// (0x00044b7c) list_highlight_pane_cp5_vc_ParamLimits

0x33e7,	// (0x00044b7c) list_highlight_pane_cp5_vc

0x7028,	// (0x000487bd) list_form_graphic_pane_vc_ParamLimits

0x7028,	// (0x000487bd) list_form_graphic_pane_vc

0x5275,	// (0x00046a0a) form_field_popup_pane_vc_g1

0x703e,	// (0x000487d3) form_field_popup_pane_vc_t1_ParamLimits

0x703e,	// (0x000487d3) form_field_popup_pane_vc_t1

0x3c80,	// (0x00045415) input_focus_pane_cp7_vc_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_cp7_vc

0x7055,	// (0x000487ea) list_form_pane_vc_ParamLimits

0x7055,	// (0x000487ea) list_form_pane_vc

0x7061,	// (0x000487f6) data_form_pane_vc_t1_ParamLimits

0x7061,	// (0x000487f6) data_form_pane_vc_t1

0x3ccc,	// (0x00045461) input_focus_pane_vc_g1

0x3cd4,	// (0x00045469) input_focus_pane_vc_g2

0x3cdc,	// (0x00045471) input_focus_pane_vc_g3

0x3ce4,	// (0x00045479) input_focus_pane_vc_g4

0x3cec,	// (0x00045481) input_focus_pane_vc_g5

0x3cf4,	// (0x00045489) input_focus_pane_vc_g6

0x3cfc,	// (0x00045491) input_focus_pane_vc_g7

0x3d04,	// (0x00045499) input_focus_pane_vc_g8

0x3d0c,	// (0x000454a1) input_focus_pane_vc_g9

0xd3be,	// (0x0004eb53) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00050e01) input_focus_pane_vc_g

0x5269,	// (0x000469fe) data_form_pane_vc_ParamLimits

0x5269,	// (0x000469fe) data_form_pane_vc

0x5275,	// (0x00046a0a) form_field_data_pane_vc_g1

0x707c,	// (0x00048811) form_field_data_pane_vc_t1_ParamLimits

0x707c,	// (0x00048811) form_field_data_pane_vc_t1

0x3c80,	// (0x00045415) input_focus_pane_vc_ParamLimits

0x3c80,	// (0x00045415) input_focus_pane_vc

0x7096,	// (0x0004882b) button_value_adjust_pane_cp3_vc

0x709e,	// (0x00048833) button_value_adjust_pane_cp5_vc

0x70a6,	// (0x0004883b) form_field_data_pane_vc_ParamLimits

0x70a6,	// (0x0004883b) form_field_data_pane_vc

0x70bd,	// (0x00048852) form_field_data_pane_vc_cp2

0x70c5,	// (0x0004885a) form_field_data_wide_pane_vc_ParamLimits

0x70c5,	// (0x0004885a) form_field_data_wide_pane_vc

0x70db,	// (0x00048870) form_field_data_wide_pane_vc_cp2

0x70e3,	// (0x00048878) form_field_popup_pane_vc_ParamLimits

0x70e3,	// (0x00048878) form_field_popup_pane_vc

0x70fa,	// (0x0004888f) form_field_popup_wide_pane_vc_ParamLimits

0x70fa,	// (0x0004888f) form_field_popup_wide_pane_vc

0x7110,	// (0x000488a5) form_field_slider_pane_vc_ParamLimits

0x7110,	// (0x000488a5) form_field_slider_pane_vc

0x7123,	// (0x000488b8) form_field_slider_wide_pane_vc_ParamLimits

0x7123,	// (0x000488b8) form_field_slider_wide_pane_vc

0xdee6,	// (0x0004f67b) grid_touch_1_pane_ParamLimits

0xdee6,	// (0x0004f67b) grid_touch_1_pane

0xdefa,	// (0x0004f68f) grid_touch_2_pane_ParamLimits

0xdefa,	// (0x0004f68f) grid_touch_2_pane

0x7207,	// (0x0004899c) touch_pane_g1_ParamLimits

0x7207,	// (0x0004899c) touch_pane_g1

0x715a,	// (0x000488ef) cell_app_pane_cp_wide_ParamLimits

0x715a,	// (0x000488ef) cell_app_pane_cp_wide

0x716b,	// (0x00048900) grid_popup_fast_wide_pane_ParamLimits

0x716b,	// (0x00048900) grid_popup_fast_wide_pane

0x717f,	// (0x00048914) scroll_pane_cp19_ParamLimits

0x717f,	// (0x00048914) scroll_pane_cp19

0x3307,	// (0x00044a9c) bg_popup_window_pane_cp20

0x7193,	// (0x00048928) listscroll_popup_fast_wide_pane

0xdf24,	// (0x0004f6b9) grid_indicator_nsta_pane

0x71ad,	// (0x00048942) clock_nsta_pane_g1

0x71b6,	// (0x0004894b) clock_nsta_pane_t1

0xdf30,	// (0x0004f6c5) cell_indicator_nsta_pane_ParamLimits

0xdf30,	// (0x0004f6c5) cell_indicator_nsta_pane

0x7207,	// (0x0004899c) cell_indicator_nsta_pane_g1

0xdf4b,	// (0x0004f6e0) cell_indicator_nsta_pane_g2

0x0001,

0xfa70,	// (0x00051205) cell_indicator_nsta_pane_g

0x7227,	// (0x000489bc) clock_nsta_pane_cp

0x7230,	// (0x000489c5) indicator_nsta_pane_cp

0x723a,	// (0x000489cf) nsta_clock_indic_pane_g1

0x34b0,	// (0x00044c45) grid_indicator_pane

0x4219,	// (0x000459ae) scroll_pane_cp29

0x135b,	// (0x00042af0) indicator_nsta_pane_cp2_ParamLimits

0x135b,	// (0x00042af0) indicator_nsta_pane_cp2

0x33e7,	// (0x00044b7c) main_apps_wheel_pane

0x5484,	// (0x00046c19) form_midp_field_text_pane_ParamLimits

0x55cf,	// (0x00046d64) scroll_bar_cp050_ParamLimits

0x7293,	// (0x00048a28) cell_indicator_pane_ParamLimits

0x7293,	// (0x00048a28) cell_indicator_pane

0x72aa,	// (0x00048a3f) cell_indicator_pane_g1

0xdf58,	// (0x0004f6ed) grid_wheel_folder_pane_ParamLimits

0xdf58,	// (0x0004f6ed) grid_wheel_folder_pane

0xdf66,	// (0x0004f6fb) list_wheel_apps_pane_ParamLimits

0xdf66,	// (0x0004f6fb) list_wheel_apps_pane

0xdf74,	// (0x0004f709) main_apps_wheel_pane_g1_ParamLimits

0xdf74,	// (0x0004f709) main_apps_wheel_pane_g1

0xdf80,	// (0x0004f715) main_apps_wheel_pane_g2_ParamLimits

0xdf80,	// (0x0004f715) main_apps_wheel_pane_g2

0x0001,

0xfa8c,	// (0x00051221) main_apps_wheel_pane_g_ParamLimits

0xfa8c,	// (0x00051221) main_apps_wheel_pane_g

0xdf8e,	// (0x0004f723) main_apps_wheel_pane_t1_ParamLimits

0xdf8e,	// (0x0004f723) main_apps_wheel_pane_t1

0xdfa2,	// (0x0004f737) list_wheel_apps_pane_g1

0xdfaa,	// (0x0004f73f) list_wheel_apps_pane_g2

0xdfb2,	// (0x0004f747) list_wheel_apps_pane_g3

0xdfba,	// (0x0004f74f) list_wheel_apps_pane_g4

0xdfc4,	// (0x0004f759) list_wheel_apps_pane_g5

0x0004,

0xfa91,	// (0x00051226) list_wheel_apps_pane_g

0x47c4,	// (0x00045f59) navi_icon_text_pane

0xd5dd,	// (0x0004ed72) aid_fill_nsta

0x736f,	// (0x00048b04) navi_icon_text_pane_g1

0x737b,	// (0x00048b10) navi_icon_text_pane_t1

0x4657,	// (0x00045dec) list_set_graphic_pane_t1_ParamLimits

0x4657,	// (0x00045dec) list_set_graphic_pane_t1

0x5d46,	// (0x000474db) popup_midp_note_alarm_window_t6_ParamLimits

0x5d46,	// (0x000474db) popup_midp_note_alarm_window_t6

0x5d58,	// (0x000474ed) popup_midp_note_alarm_window_t7_ParamLimits

0x5d58,	// (0x000474ed) popup_midp_note_alarm_window_t7

0x5d6a,	// (0x000474ff) popup_midp_note_alarm_window_t8_ParamLimits

0x5d6a,	// (0x000474ff) popup_midp_note_alarm_window_t8

0x5d7c,	// (0x00047511) popup_midp_note_alarm_window_t9_ParamLimits

0x5d7c,	// (0x00047511) popup_midp_note_alarm_window_t9

0x5d8e,	// (0x00047523) popup_midp_note_alarm_window_t10_ParamLimits

0x5d8e,	// (0x00047523) popup_midp_note_alarm_window_t10

0x5da0,	// (0x00047535) popup_midp_note_alarm_window_t11_ParamLimits

0x5da0,	// (0x00047535) popup_midp_note_alarm_window_t11

0x5db2,	// (0x00047547) scroll_pane_cp17_ParamLimits

0x5db2,	// (0x00047547) scroll_pane_cp17

0x1da2,	// (0x00043537) volume_small_pane_cp_g1

0x218e,	// (0x00043923) volume_small_pane_cp_g2

0x2197,	// (0x0004392c) volume_small_pane_cp_g3

0x21a0,	// (0x00043935) volume_small_pane_cp_g4

0x21a9,	// (0x0004393e) volume_small_pane_cp_g5

0x21b2,	// (0x00043947) volume_small_pane_cp_g6

0x21bb,	// (0x00043950) volume_small_pane_cp_g7

0x21c4,	// (0x00043959) volume_small_pane_cp_g8

0x21cd,	// (0x00043962) volume_small_pane_cp_g9

0x21d6,	// (0x0004396b) volume_small_pane_cp_g10

0x4a1e,	// (0x000461b3) midp_ticker_pane_g1_ParamLimits

0x4a2a,	// (0x000461bf) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00050ecd) midp_ticker_pane_g_ParamLimits

0x4a36,	// (0x000461cb) midp_ticker_pane_t1_ParamLimits

0xd601,	// (0x0004ed96) aid_fill_nsta_2

0x55bb,	// (0x00046d50) list_form2_midp_pane

0x670b,	// (0x00047ea0) midp_editing_number_pane_ParamLimits

0x671a,	// (0x00047eaf) midp_ticker_pane_ParamLimits

0x738d,	// (0x00048b22) form2_midp_field_pane

0x73b1,	// (0x00048b46) scroll_pane_cp51

0x73d1,	// (0x00048b66) form2_midp_button_pane_ParamLimits

0x73d1,	// (0x00048b66) form2_midp_button_pane

0x73e3,	// (0x00048b78) form2_midp_content_pane_ParamLimits

0x73e3,	// (0x00048b78) form2_midp_content_pane

0x73fd,	// (0x00048b92) form2_midp_field_choice_group_pane

0x7405,	// (0x00048b9a) form2_midp_field_pane_g1

0x740d,	// (0x00048ba2) form2_midp_field_pane_g2

0x7415,	// (0x00048baa) form2_midp_field_pane_g3

0x741d,	// (0x00048bb2) form2_midp_field_pane_g4

0x0003,

0xfab6,	// (0x0005124b) form2_midp_field_pane_g

0x7425,	// (0x00048bba) form2_midp_gauge_slider_pane

0x742d,	// (0x00048bc2) form2_midp_gauge_wait_pane

0x7435,	// (0x00048bca) form2_midp_image_pane_ParamLimits

0x7435,	// (0x00048bca) form2_midp_image_pane

0x7450,	// (0x00048be5) form2_midp_label_pane_ParamLimits

0x7450,	// (0x00048be5) form2_midp_label_pane

0xdff7,	// (0x0004f78c) form2_midp_label_pane_cp_ParamLimits

0xdff7,	// (0x0004f78c) form2_midp_label_pane_cp

0x748a,	// (0x00048c1f) form2_midp_string_pane_ParamLimits

0x748a,	// (0x00048c1f) form2_midp_string_pane

0xbb96,	// (0x0004d32b) form2_midp_text_pane_ParamLimits

0xbb96,	// (0x0004d32b) form2_midp_text_pane

0x749c,	// (0x00048c31) form2_midp_time_pane

0x74ac,	// (0x00048c41) input_focus_pane_cp51_ParamLimits

0x74ac,	// (0x00048c41) input_focus_pane_cp51

0x74c4,	// (0x00048c59) form2_midp_label_pane_t1_ParamLimits

0x74c4,	// (0x00048c59) form2_midp_label_pane_t1

0xbbaf,	// (0x0004d344) form2_mdip_text_pane_t1_ParamLimits

0xbbaf,	// (0x0004d344) form2_mdip_text_pane_t1

0x08cc,	// (0x00042061) form2_midp_time_pane_t1

0x750d,	// (0x00048ca2) form2_midp_gauge_slider_pane_t1

0xe016,	// (0x0004f7ab) form2_midp_gauge_slider_pane_t2

0xe028,	// (0x0004f7bd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfabf,	// (0x00051254) form2_midp_gauge_slider_pane_t

0x7543,	// (0x00048cd8) form2_midp_slider_pane

0x754f,	// (0x00048ce4) form2_midp_gauge_wait_pane_t1

0x755d,	// (0x00048cf2) form2_midp_wait_pane_ParamLimits

0x755d,	// (0x00048cf2) form2_midp_wait_pane

0xe03a,	// (0x0004f7cf) list_single_2graphic_pane_cp4_ParamLimits

0xe03a,	// (0x0004f7cf) list_single_2graphic_pane_cp4

0xda1d,	// (0x0004f1b2) list_single_midp_graphic_pane_cp_ParamLimits

0xda1d,	// (0x0004f1b2) list_single_midp_graphic_pane_cp

0x3307,	// (0x00044a9c) list_highlight_pane_cp20

0x75ac,	// (0x00048d41) list_single_2graphic_pane_g1_cp4

0x75b4,	// (0x00048d49) list_single_2graphic_pane_g2_cp4

0x75bc,	// (0x00048d51) list_single_2graphic_pane_t1_cp4

0x33e7,	// (0x00044b7c) list_highlight_pane_cp21

0x75cb,	// (0x00048d60) list_single_midp_graphic_pane_g4_cp

0x75da,	// (0x00048d6f) list_single_midp_graphic_pane_t1_cp

0xe04e,	// (0x0004f7e3) form2_mdip_string_pane_t1_ParamLimits

0xe04e,	// (0x0004f7e3) form2_mdip_string_pane_t1

0x3307,	// (0x00044a9c) bg_wml_button_pane_cp2

0xd3be,	// (0x0004eb53) form2_midp_image_pane_g1

0x1065,	// (0x000427fa) list_double_large_graphic_pane_g5_ParamLimits

0x1065,	// (0x000427fa) list_double_large_graphic_pane_g5

0xd460,	// (0x0004ebf5) midp_form_pane_ParamLimits

0x33e7,	// (0x00044b7c) main_apps_wheel_pane_ParamLimits

0xc989,	// (0x0004e11e) popup_preview_window_ParamLimits

0xc989,	// (0x0004e11e) popup_preview_window

0x1bfd,	// (0x00043392) popup_touch_info_window_ParamLimits

0x1bfd,	// (0x00043392) popup_touch_info_window

0x1c1b,	// (0x000433b0) popup_touch_menu_window_ParamLimits

0x1c1b,	// (0x000433b0) popup_touch_menu_window

0xd3b4,	// (0x0004eb49) bg_popup_sub_pane_cp6

0x76e8,	// (0x00048e7d) list_touch_menu_pane

0x76f0,	// (0x00048e85) list_single_touch_menu_pane_ParamLimits

0x76f0,	// (0x00048e85) list_single_touch_menu_pane

0x7706,	// (0x00048e9b) list_single_touch_menu_pane_t1

0x33e7,	// (0x00044b7c) bg_popup_sub_pane_cp7_ParamLimits

0x33e7,	// (0x00044b7c) bg_popup_sub_pane_cp7

0x7714,	// (0x00048ea9) heading_sub_pane

0x771c,	// (0x00048eb1) list_touch_info_pane_ParamLimits

0x771c,	// (0x00048eb1) list_touch_info_pane

0x772b,	// (0x00048ec0) list_single_touch_info_pane_ParamLimits

0x772b,	// (0x00048ec0) list_single_touch_info_pane

0x773d,	// (0x00048ed2) list_single_touch_info_pane_t1

0x774b,	// (0x00048ee0) list_single_touch_info_pane_t2

0x0001,

0xfacd,	// (0x00051262) list_single_touch_info_pane_t

0x4941,	// (0x000460d6) bg_popup_heading_pane_cp

0x7759,	// (0x00048eee) heading_sub_pane_t1

0x5203,	// (0x00046998) bg_popup_preview_window_pane_cp_ParamLimits

0x5203,	// (0x00046998) bg_popup_preview_window_pane_cp

0x7714,	// (0x00048ea9) heading_preview_pane

0x771c,	// (0x00048eb1) list_preview_pane_ParamLimits

0x771c,	// (0x00048eb1) list_preview_pane

0x7767,	// (0x00048efc) popup_preview_window_g1

0x772b,	// (0x00048ec0) list_single_preview_pane_ParamLimits

0x772b,	// (0x00048ec0) list_single_preview_pane

0x776f,	// (0x00048f04) list_single_preview_pane_g1

0x7777,	// (0x00048f0c) list_single_preview_pane_t1

0x773d,	// (0x00048ed2) list_single_preview_pane_t2

0x0001,

0xfad2,	// (0x00051267) list_single_preview_pane_t

0x7785,	// (0x00048f1a) bg_popup_heading_pane_cp2_ParamLimits

0x7785,	// (0x00048f1a) bg_popup_heading_pane_cp2

0x779b,	// (0x00048f30) heading_preview_pane_g1

0x77a3,	// (0x00048f38) heading_preview_pane_t1_ParamLimits

0x77a3,	// (0x00048f38) heading_preview_pane_t1

0x34d3,	// (0x00044c68) soft_indicator_pane_t1_ParamLimits

0x3be7,	// (0x0004537c) scroll_pane_ParamLimits

0x4112,	// (0x000458a7) scroll_sc2_left_pane

0x411b,	// (0x000458b0) scroll_sc2_right_pane

0x413a,	// (0x000458cf) scroll_bg_pane_g1_ParamLimits

0x414f,	// (0x000458e4) scroll_bg_pane_g2_ParamLimits

0x4167,	// (0x000458fc) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00050e58) scroll_bg_pane_g_ParamLimits

0x413a,	// (0x000458cf) scroll_handle_pane_g1_ParamLimits

0x4189,	// (0x0004591e) scroll_handle_pane_g2_ParamLimits

0x4167,	// (0x000458fc) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00050e5f) scroll_handle_pane_g_ParamLimits

0x16c1,	// (0x00042e56) popup_choice_list_window_ParamLimits

0x16c1,	// (0x00042e56) popup_choice_list_window

0x50d9,	// (0x0004686e) choice_list_pane

0x515b,	// (0x000468f0) cell_toolbar_pane_t1

0x5183,	// (0x00046918) toolbar_button_pane_ParamLimits

0x626c,	// (0x00047a01) ai_gene_pane_1_t2_ParamLimits

0x626c,	// (0x00047a01) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00051082) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00051082) ai_gene_pane_1_t

0x77c0,	// (0x00048f55) scroll_sc2_left_pane_g1

0x77c0,	// (0x00048f55) scroll_sc2_right_pane_g1

0x4c65,	// (0x000463fa) bg_popup_sub_pane_cp10

0x77ca,	// (0x00048f5f) list_choice_list_pane

0x77e3,	// (0x00048f78) list_single_choice_list_pane_ParamLimits

0x77e3,	// (0x00048f78) list_single_choice_list_pane

0x77f6,	// (0x00048f8b) list_single_choice_list_pane_g1

0x3e18,	// (0x000455ad) list_single_choice_list_pane_t1_ParamLimits

0x3e18,	// (0x000455ad) list_single_choice_list_pane_t1

0x77fe,	// (0x00048f93) choice_list_pane_g1

0x7806,	// (0x00048f9b) choice_list_pane_t1

0xd3b4,	// (0x0004eb49) input_focus_pane_cp11

0x3fef,	// (0x00045784) title_pane_stacon_g2_ParamLimits

0x3fef,	// (0x00045784) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050e3e) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050e3e) title_pane_stacon_g

0x4941,	// (0x000460d6) cursor_press_pane

0xc630,	// (0x0004ddc5) popup_fep_hwr_window_ParamLimits

0xc630,	// (0x0004ddc5) popup_fep_hwr_window

0x17e7,	// (0x00042f7c) popup_fep_vkb_window_ParamLimits

0x17e7,	// (0x00042f7c) popup_fep_vkb_window

0x7814,	// (0x00048fa9) cursor_press_pane_g1

0x0002,

0xfafb,	// (0x00051290) fep_vkb_side_pane_g_ParamLimits

0x2218,	// (0x000439ad) fep_hwr_candidate_pane_ParamLimits

0x2218,	// (0x000439ad) fep_hwr_candidate_pane

0x2242,	// (0x000439d7) fep_hwr_side_pane_ParamLimits

0x2242,	// (0x000439d7) fep_hwr_side_pane

0x2262,	// (0x000439f7) fep_hwr_top_pane_ParamLimits

0x2262,	// (0x000439f7) fep_hwr_top_pane

0x227a,	// (0x00043a0f) fep_hwr_write_pane_ParamLimits

0x227a,	// (0x00043a0f) fep_hwr_write_pane

0xfafb,	// (0x00051290) fep_vkb_side_pane_g

0x781c,	// (0x00048fb1) fep_hwr_top_pane_g1

0x782e,	// (0x00048fc3) fep_hwr_top_pane_g2

0x22a6,	// (0x00043a3b) fep_hwr_top_pane_g3

0x0002,

0xfad7,	// (0x0005126c) fep_hwr_top_pane_g

0x22bb,	// (0x00043a50) fep_hwr_top_text_pane

0x4309,	// (0x00045a9e) fep_hwr_top_text_pane_g1

0x7864,	// (0x00048ff9) fep_hwr_top_text_pane_t1

0x23b1,	// (0x00043b46) fep_hwr_candidate_pane_g1

0x7ab7,	// (0x0004924c) fep_vkb_keypad_pane_g3_ParamLimits

0x7ab7,	// (0x0004924c) fep_vkb_keypad_pane_g3

0x7adf,	// (0x00049274) fep_vkb_keypad_pane_g4_ParamLimits

0x7adf,	// (0x00049274) fep_vkb_keypad_pane_g4

0x7b4e,	// (0x000492e3) fep_vkb_bottom_pane_g2_ParamLimits

0x7b4e,	// (0x000492e3) fep_vkb_bottom_pane_g2

0x0001,

0xfb02,	// (0x00051297) fep_vkb_bottom_pane_g_ParamLimits

0xfb02,	// (0x00051297) fep_vkb_bottom_pane_g

0x77c0,	// (0x00048f55) cell_vkb_side_pane_g2

0x0001,

0xfb0c,	// (0x000512a1) cell_vkb_side_pane_g

0x7bd9,	// (0x0004936e) cell_vkb_side_pane_t1

0x7be7,	// (0x0004937c) cell_vkb_side_pane_t1_copy1

0x77c0,	// (0x00048f55) bg_fep_vkb_candidate_pane_g2

0x7d13,	// (0x000494a8) cell_vkb_candidate_pane_ParamLimits

0x7872,	// (0x00049007) aid_size_cell_vkb_ParamLimits

0x7872,	// (0x00049007) aid_size_cell_vkb

0x7d13,	// (0x000494a8) cell_vkb_candidate_pane

0x23cb,	// (0x00043b60) bg_popup_fep_shadow_pane_g1

0xe0f8,	// (0x0004f88d) fep_vkb_bottom_pane_ParamLimits

0xe0f8,	// (0x0004f88d) fep_vkb_bottom_pane

0x7936,	// (0x000490cb) fep_vkb_candidate_pane_ParamLimits

0x7936,	// (0x000490cb) fep_vkb_candidate_pane

0xe11d,	// (0x0004f8b2) fep_vkb_keypad_pane_ParamLimits

0xe11d,	// (0x0004f8b2) fep_vkb_keypad_pane

0xe159,	// (0x0004f8ee) fep_vkb_side_pane_ParamLimits

0xe159,	// (0x0004f8ee) fep_vkb_side_pane

0xe195,	// (0x0004f92a) fep_vkb_top_pane_ParamLimits

0xe195,	// (0x0004f92a) fep_vkb_top_pane

0x7a10,	// (0x000491a5) fep_vkb_top_pane_g1_ParamLimits

0x7a10,	// (0x000491a5) fep_vkb_top_pane_g1

0x7a1f,	// (0x000491b4) fep_vkb_top_pane_g2_ParamLimits

0x7a1f,	// (0x000491b4) fep_vkb_top_pane_g2

0x7a2e,	// (0x000491c3) fep_vkb_top_pane_g3_ParamLimits

0x7a2e,	// (0x000491c3) fep_vkb_top_pane_g3

0x0003,

0xfaf2,	// (0x00051287) fep_vkb_top_pane_g_ParamLimits

0xfaf2,	// (0x00051287) fep_vkb_top_pane_g

0x7a4c,	// (0x000491e1) fep_vkb_top_text_pane_ParamLimits

0x7a4c,	// (0x000491e1) fep_vkb_top_text_pane

0xe1d1,	// (0x0004f966) fep_vkb_side_pane_g1_ParamLimits

0xe1d1,	// (0x0004f966) fep_vkb_side_pane_g1

0x7aa6,	// (0x0004923b) grid_vkb_side_pane_ParamLimits

0x7aa6,	// (0x0004923b) grid_vkb_side_pane

0x23d3,	// (0x00043b68) bg_popup_fep_shadow_pane_g2

0x23dc,	// (0x00043b71) bg_popup_fep_shadow_pane_g3

0x23e4,	// (0x00043b79) bg_popup_fep_shadow_pane_g4

0x23ed,	// (0x00043b82) bg_popup_fep_shadow_pane_g5

0x23f7,	// (0x00043b8c) bg_popup_fep_shadow_pane_g6

0x23ff,	// (0x00043b94) bg_popup_fep_shadow_pane_g7

0x3cec,	// (0x00045481) bg_popup_fep_shadow_pane_g8

0x7afd,	// (0x00049292) grid_vkb_keypad_number_pane_ParamLimits

0x7afd,	// (0x00049292) grid_vkb_keypad_number_pane

0x7b0d,	// (0x000492a2) grid_vkb_keypad_pane_ParamLimits

0x7b0d,	// (0x000492a2) grid_vkb_keypad_pane

0x7b33,	// (0x000492c8) fep_vkb_bottom_pane_g1_ParamLimits

0x7b33,	// (0x000492c8) fep_vkb_bottom_pane_g1

0x7b5c,	// (0x000492f1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b5c,	// (0x000492f1) grid_vkb_keypad_bottom_left_pane

0x7b71,	// (0x00049306) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b71,	// (0x00049306) grid_vkb_keypad_bottom_right_pane

0x7b86,	// (0x0004931b) fep_vkb_top_text_pane_g1

0xe218,	// (0x0004f9ad) fep_vkb_top_text_pane_t1

0xe22a,	// (0x0004f9bf) cell_vkb_side_pane_ParamLimits

0xe22a,	// (0x0004f9bf) cell_vkb_side_pane

0x77c0,	// (0x00048f55) cell_vkb_side_pane_g1

0x7bf5,	// (0x0004938a) cell_vkb_keypad_pane_ParamLimits

0x7bf5,	// (0x0004938a) cell_vkb_keypad_pane

0x7c6a,	// (0x000493ff) cell_vkb_keypad_pane_g1

0x0008,

0xfb1f,	// (0x000512b4) bg_popup_fep_shadow_pane_g

0x77c0,	// (0x00048f55) cell_hwr_side_pane_g1

0x77c0,	// (0x00048f55) cell_hwr_side_pane_g2

0x7c74,	// (0x00049409) cell_vkb_keypad_pane_t1

0xe240,	// (0x0004f9d5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe240,	// (0x0004f9d5) cell_vkb_keypad_bottom_left_pane

0xe255,	// (0x0004f9ea) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe255,	// (0x0004f9ea) cell_vkb_keypad_bottom_right_pane

0x77c0,	// (0x00048f55) cell_vkb_keypad_bottom_left_pane_g1

0x77c0,	// (0x00048f55) cell_vkb_keypad_bottom_right_pane_g1

0x7cd8,	// (0x0004946d) cell_vkb_keypad_number_pane_ParamLimits

0x7cd8,	// (0x0004946d) cell_vkb_keypad_number_pane

0x7cf7,	// (0x0004948c) cell_vkb_keypad_number_pane_g1

0x7d01,	// (0x00049496) cell_vkb_keypad_number_pane_g2

0x7d0a,	// (0x0004949f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb11,	// (0x000512a6) cell_vkb_keypad_number_pane_g

0x7c74,	// (0x00049409) cell_vkb_keypad_number_pane_t1

0x7d2e,	// (0x000494c3) fep_vkb_candidate_pane_g1

0x0001,

0xfb0c,	// (0x000512a1) cell_hwr_side_pane_g

0x7d47,	// (0x000494dc) cell_hwr_side_pane_t1

0x2411,	// (0x00043ba6) cell_hwr_side_pane_t1_copy1

0x7a3e,	// (0x000491d3) cell_hwr_candidate_pane_g1

0x241f,	// (0x00043bb4) cell_hwr_candidate_pane_t1

0x77c0,	// (0x00048f55) cell_vkb_candidate_pane_g2

0x7dcd,	// (0x00049562) cell_vkb_candidate_pane_t1

0x21df,	// (0x00043974) bg_popup_fep_shadow_pane_ParamLimits

0x21df,	// (0x00043974) bg_popup_fep_shadow_pane

0xe0be,	// (0x0004f853) bg_fep_hwr_top_pane_g4

0x7840,	// (0x00048fd5) bg_hwr_side_pane_g1_ParamLimits

0x7840,	// (0x00048fd5) bg_hwr_side_pane_g1

0xccd6,	// (0x0004e46b) cell_hwr_side_pane_ParamLimits

0xccd6,	// (0x0004e46b) cell_hwr_side_pane

0x2332,	// (0x00043ac7) fep_hwr_write_pane_g1_ParamLimits

0x2332,	// (0x00043ac7) fep_hwr_write_pane_g1

0x233f,	// (0x00043ad4) fep_hwr_write_pane_g2_ParamLimits

0x233f,	// (0x00043ad4) fep_hwr_write_pane_g2

0x234c,	// (0x00043ae1) fep_hwr_write_pane_g3_ParamLimits

0x234c,	// (0x00043ae1) fep_hwr_write_pane_g3

0xccf6,	// (0x0004e48b) fep_hwr_write_pane_g4_ParamLimits

0xccf6,	// (0x0004e48b) fep_hwr_write_pane_g4

0x0005,

0xfade,	// (0x00051273) fep_hwr_write_pane_g_ParamLimits

0xfade,	// (0x00051273) fep_hwr_write_pane_g

0xe0be,	// (0x0004f853) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0be,	// (0x0004f853) bg_fep_hwr_candidate_pane_g2

0x236f,	// (0x00043b04) cell_hwr_candidate_pane_ParamLimits

0x236f,	// (0x00043b04) cell_hwr_candidate_pane

0x23b1,	// (0x00043b46) fep_hwr_candidate_pane_g1_ParamLimits

0x78a0,	// (0x00049035) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78a0,	// (0x00049035) bg_popup_fep_shadow_pane_cp2

0x7a3e,	// (0x000491d3) fep_vkb_top_pane_g4_ParamLimits

0x7a3e,	// (0x000491d3) fep_vkb_top_pane_g4

0x7a84,	// (0x00049219) fep_vkb_side_pane_g2_ParamLimits

0x7a84,	// (0x00049219) fep_vkb_side_pane_g2

0xb930,	// (0x0004d0c5) list_setting_pane_t4_ParamLimits

0xb930,	// (0x0004d0c5) list_setting_pane_t4

0xb9b2,	// (0x0004d147) list_setting_number_pane_t5_ParamLimits

0xb9b2,	// (0x0004d147) list_setting_number_pane_t5

0x4340,	// (0x00045ad5) list_double_heading_pane_cp2_ParamLimits

0x4340,	// (0x00045ad5) list_double_heading_pane_cp2

0x3c1b,	// (0x000453b0) list_double_heading_pane_g1_cp2_ParamLimits

0x3c1b,	// (0x000453b0) list_double_heading_pane_g1_cp2

0x3c8e,	// (0x00045423) list_double_heading_pane_g2_cp2_ParamLimits

0x3c8e,	// (0x00045423) list_double_heading_pane_g2_cp2

0x7ddb,	// (0x00049570) list_double_heading_pane_t1_cp2_ParamLimits

0x7ddb,	// (0x00049570) list_double_heading_pane_t1_cp2

0x7df1,	// (0x00049586) list_double_heading_pane_t2_cp2_ParamLimits

0x7df1,	// (0x00049586) list_double_heading_pane_t2_cp2

0xd3ac,	// (0x0004eb41) aid_value_unit2

0x0e4c,	// (0x000425e1) popup_preview_fixed_window

0x3670,	// (0x00044e05) bg_popup_preview_window_pane_cp02

0x7e03,	// (0x00049598) list_preview_fixed_pane

0x7e49,	// (0x000495de) list_empty_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_empty_pane_fp

0x7e49,	// (0x000495de) list_single_cale_day_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_single_cale_day_pane_fp

0x7e49,	// (0x000495de) list_single_graphic_heading_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_single_graphic_heading_pane_fp

0x7e49,	// (0x000495de) list_single_graphic_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_single_graphic_pane_fp

0x7e49,	// (0x000495de) list_single_heading_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_single_heading_pane_fp

0x7e49,	// (0x000495de) list_single_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_single_pane_fp

0x7e5e,	// (0x000495f3) list_single_pane_fp_g1_ParamLimits

0x7e5e,	// (0x000495f3) list_single_pane_fp_g1

0x3c1b,	// (0x000453b0) list_single_pane_fp_g2_ParamLimits

0x3c1b,	// (0x000453b0) list_single_pane_fp_g2

0x3c8e,	// (0x00045423) list_single_pane_fp_g3_ParamLimits

0x3c8e,	// (0x00045423) list_single_pane_fp_g3

0x7e6a,	// (0x000495ff) list_single_pane_fp_g4_ParamLimits

0x7e6a,	// (0x000495ff) list_single_pane_fp_g4

0x0003,

0xfb40,	// (0x000512d5) list_single_pane_fp_g_ParamLimits

0xfb40,	// (0x000512d5) list_single_pane_fp_g

0x08df,	// (0x00042074) list_single_pane_fp_t1_ParamLimits

0x08df,	// (0x00042074) list_single_pane_fp_t1

0x08f6,	// (0x0004208b) list_single_graphic_pane_fp_g1_ParamLimits

0x08f6,	// (0x0004208b) list_single_graphic_pane_fp_g1

0x7e5e,	// (0x000495f3) list_single_graphic_pane_fp_g2_ParamLimits

0x7e5e,	// (0x000495f3) list_single_graphic_pane_fp_g2

0x3c1b,	// (0x000453b0) list_single_graphic_pane_fp_g3_ParamLimits

0x3c1b,	// (0x000453b0) list_single_graphic_pane_fp_g3

0x3c8e,	// (0x00045423) list_single_graphic_pane_fp_g4_ParamLimits

0x3c8e,	// (0x00045423) list_single_graphic_pane_fp_g4

0x7e6a,	// (0x000495ff) list_single_graphic_pane_fp_g5_ParamLimits

0x7e6a,	// (0x000495ff) list_single_graphic_pane_fp_g5

0x0004,

0xfb49,	// (0x000512de) list_single_graphic_pane_fp_g_ParamLimits

0xfb49,	// (0x000512de) list_single_graphic_pane_fp_g

0x0902,	// (0x00042097) list_single_graphic_pane_fp_t1_ParamLimits

0x0902,	// (0x00042097) list_single_graphic_pane_fp_t1

0x08f6,	// (0x0004208b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x08f6,	// (0x0004208b) list_single_graphic_heading_pane_fp_g1

0x7e5e,	// (0x000495f3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e5e,	// (0x000495f3) list_single_graphic_heading_pane_fp_g2

0x3c1b,	// (0x000453b0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3c1b,	// (0x000453b0) list_single_graphic_heading_pane_fp_g3

0x3c8e,	// (0x00045423) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3c8e,	// (0x00045423) list_single_graphic_heading_pane_fp_g4

0x7e6a,	// (0x000495ff) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e6a,	// (0x000495ff) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb49,	// (0x000512de) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb49,	// (0x000512de) list_single_graphic_heading_pane_fp_g

0x0918,	// (0x000420ad) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0918,	// (0x000420ad) list_single_graphic_heading_pane_fp_t1

0x092e,	// (0x000420c3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x092e,	// (0x000420c3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb54,	// (0x000512e9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb54,	// (0x000512e9) list_single_graphic_heading_pane_fp_t

0x0940,	// (0x000420d5) list_single_cale_day_pane_fp_g1_ParamLimits

0x0940,	// (0x000420d5) list_single_cale_day_pane_fp_g1

0x7e76,	// (0x0004960b) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e76,	// (0x0004960b) list_single_cale_day_pane_fp_g2

0x243d,	// (0x00043bd2) list_single_cale_day_pane_fp_g3_ParamLimits

0x243d,	// (0x00043bd2) list_single_cale_day_pane_fp_g3

0x2465,	// (0x00043bfa) list_single_cale_day_pane_fp_g4_ParamLimits

0x2465,	// (0x00043bfa) list_single_cale_day_pane_fp_g4

0x2489,	// (0x00043c1e) list_single_cale_day_pane_fp_g5_ParamLimits

0x2489,	// (0x00043c1e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb59,	// (0x000512ee) list_single_cale_day_pane_fp_g_ParamLimits

0xfb59,	// (0x000512ee) list_single_cale_day_pane_fp_g

0x0978,	// (0x0004210d) list_single_cale_day_pane_fp_t1_ParamLimits

0x0978,	// (0x0004210d) list_single_cale_day_pane_fp_t1

0x099e,	// (0x00042133) list_single_cale_day_pane_fp_t2_ParamLimits

0x099e,	// (0x00042133) list_single_cale_day_pane_fp_t2

0x09b7,	// (0x0004214c) list_single_cale_day_pane_fp_t3_ParamLimits

0x09b7,	// (0x0004214c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb64,	// (0x000512f9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb64,	// (0x000512f9) list_single_cale_day_pane_fp_t

0x7e5e,	// (0x000495f3) list_empty_pane_fp_g1_ParamLimits

0x7e5e,	// (0x000495f3) list_empty_pane_fp_g1

0x09d0,	// (0x00042165) list_empty_pane_fp_t1

0x09de,	// (0x00042173) list_empty_pane_fp_t2

0x0001,

0xfb6b,	// (0x00051300) list_empty_pane_fp_t

0x7e5e,	// (0x000495f3) list_single_heading_pane_fp_g1_ParamLimits

0x7e5e,	// (0x000495f3) list_single_heading_pane_fp_g1

0x3c1b,	// (0x000453b0) list_single_heading_pane_fp_g2_ParamLimits

0x3c1b,	// (0x000453b0) list_single_heading_pane_fp_g2

0x3c8e,	// (0x00045423) list_single_heading_pane_fp_g3_ParamLimits

0x3c8e,	// (0x00045423) list_single_heading_pane_fp_g3

0x0002,

0xfb70,	// (0x00051305) list_single_heading_pane_fp_g_ParamLimits

0xfb70,	// (0x00051305) list_single_heading_pane_fp_g

0x09ec,	// (0x00042181) list_single_heading_pane_fp_t1_ParamLimits

0x09ec,	// (0x00042181) list_single_heading_pane_fp_t1

0x09fe,	// (0x00042193) list_single_heading_pane_fp_t2_ParamLimits

0x09fe,	// (0x00042193) list_single_heading_pane_fp_t2

0x0001,

0xfb77,	// (0x0005130c) list_single_heading_pane_fp_t_ParamLimits

0xfb77,	// (0x0005130c) list_single_heading_pane_fp_t

0x3e86,	// (0x0004561b) aid_size_cell_fast

0x35e0,	// (0x00044d75) soft_indicator_pane_cp1_t1

0x3ec3,	// (0x00045658) cell_app_pane_cp2_ParamLimits

0x3ec3,	// (0x00045658) cell_app_pane_cp2

0x2201,	// (0x00043996) fep_hwr_candidate_drop_down_list_pane

0xe0cc,	// (0x0004f861) fep_hwr_candidate_pane_g3_ParamLimits

0xe0cc,	// (0x0004f861) fep_hwr_candidate_pane_g3

0xe0d9,	// (0x0004f86e) fep_hwr_candidate_pane_g4_ParamLimits

0xe0d9,	// (0x0004f86e) fep_hwr_candidate_pane_g4

0x0002,

0xfaeb,	// (0x00051280) fep_hwr_candidate_pane_g_ParamLimits

0xfaeb,	// (0x00051280) fep_hwr_candidate_pane_g

0x7925,	// (0x000490ba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7925,	// (0x000490ba) fep_vkb_candidate_drop_down_list_pane

0x7d36,	// (0x000494cb) fep_vkb_candidate_pane_g3

0x7d3e,	// (0x000494d3) fep_vkb_candidate_pane_g4

0x0002,

0xfb18,	// (0x000512ad) fep_vkb_candidate_pane_g

0x7a3e,	// (0x000491d3) cell_hwr_candidate_pane_g1_ParamLimits

0x7d55,	// (0x000494ea) cell_hwr_candidate_pane_g3_ParamLimits

0x7d55,	// (0x000494ea) cell_hwr_candidate_pane_g3

0x7d76,	// (0x0004950b) cell_hwr_candidate_pane_g4_ParamLimits

0x7d76,	// (0x0004950b) cell_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x000512c7) cell_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x000512c7) cell_hwr_candidate_pane_g

0x7d97,	// (0x0004952c) cell_vkb_candidate_pane_g3_ParamLimits

0x7d97,	// (0x0004952c) cell_vkb_candidate_pane_g3

0x7db2,	// (0x00049547) cell_vkb_candidate_pane_g4_ParamLimits

0x7db2,	// (0x00049547) cell_vkb_candidate_pane_g4

0x7e82,	// (0x00049617) cell_app_pane_cp2_g1_ParamLimits

0x7e82,	// (0x00049617) cell_app_pane_cp2_g1

0x7ea0,	// (0x00049635) cell_app_pane_cp2_g2_ParamLimits

0x7ea0,	// (0x00049635) cell_app_pane_cp2_g2

0x0001,

0xfb7c,	// (0x00051311) cell_app_pane_cp2_g_ParamLimits

0xfb7c,	// (0x00051311) cell_app_pane_cp2_g

0x7eac,	// (0x00049641) cell_app_pane_cp2_t1_ParamLimits

0x7eac,	// (0x00049641) cell_app_pane_cp2_t1

0x3c80,	// (0x00045415) grid_highlight_pane_cp1_ParamLimits

0x3c80,	// (0x00045415) grid_highlight_pane_cp1

0x24ad,	// (0x00043c42) cell_hwr_candidate_pane_cp1_ParamLimits

0x24ad,	// (0x00043c42) cell_hwr_candidate_pane_cp1

0x7a3e,	// (0x000491d3) fep_hwr_candidate_drop_down_list_pane_g1

0x7ebe,	// (0x00049653) fep_hwr_candidate_drop_down_list_pane_g2

0x7ecb,	// (0x00049660) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00051316) fep_hwr_candidate_drop_down_list_pane_g

0x24cc,	// (0x00043c61) fep_hwr_candidate_drop_down_list_scroll_pane

0x24d5,	// (0x00043c6a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x24d5,	// (0x00043c6a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x24e2,	// (0x00043c77) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x24e2,	// (0x00043c77) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x24ef,	// (0x00043c84) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x24ef,	// (0x00043c84) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7d97,	// (0x0004952c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d97,	// (0x0004952c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7db2,	// (0x00049547) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7db2,	// (0x00049547) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x24fc,	// (0x00043c91) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x24fc,	// (0x00043c91) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2517,	// (0x00043cac) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2517,	// (0x00043cac) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2532,	// (0x00043cc7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2532,	// (0x00043cc7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb88,	// (0x0005131d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb88,	// (0x0005131d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ed8,	// (0x0004966d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ed8,	// (0x0004966d) cell_vkb_candidate_pane_cp1

0x7a3e,	// (0x000491d3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a3e,	// (0x000491d3) fep_vkb_candidate_drop_down_list_pane_g1

0x7ebe,	// (0x00049653) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ebe,	// (0x00049653) fep_vkb_candidate_drop_down_list_pane_g2

0x7ecb,	// (0x00049660) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ecb,	// (0x00049660) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00051316) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb81,	// (0x00051316) fep_vkb_candidate_drop_down_list_pane_g

0x7ef8,	// (0x0004968d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ef8,	// (0x0004968d) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f05,	// (0x0004969a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f05,	// (0x0004969a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f12,	// (0x000496a7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f12,	// (0x000496a7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f1e,	// (0x000496b3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f1e,	// (0x000496b3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d55,	// (0x000494ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d55,	// (0x000494ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7d76,	// (0x0004950b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d76,	// (0x0004950b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f2a,	// (0x000496bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f2a,	// (0x000496bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f4b,	// (0x000496e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f4b,	// (0x000496e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f6c,	// (0x00049701) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f6c,	// (0x00049701) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x0005132e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x0005132e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbee5,	// (0x0004d67a) title_pane_g1_ParamLimits

0xbef8,	// (0x0004d68d) title_pane_g2_ParamLimits

0xf529,	// (0x00050cbe) title_pane_g_ParamLimits

0x42f9,	// (0x00045a8e) aid_call2_pane

0x4301,	// (0x00045a96) aid_call_pane

0x4309,	// (0x00045a9e) popup_clock_analogue_window_g1

0x4309,	// (0x00045a9e) popup_clock_analogue_window_g2

0x1240,	// (0x000429d5) popup_clock_analogue_window_g3

0x1249,	// (0x000429de) popup_clock_analogue_window_g4

0xd3be,	// (0x0004eb53) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00050e6d) popup_clock_analogue_window_g

0x1251,	// (0x000429e6) popup_clock_analogue_window_t1

0x125f,	// (0x000429f4) clock_digital_number_pane_ParamLimits

0x125f,	// (0x000429f4) clock_digital_number_pane

0x126b,	// (0x00042a00) clock_digital_number_pane_cp02_ParamLimits

0x126b,	// (0x00042a00) clock_digital_number_pane_cp02

0x1277,	// (0x00042a0c) clock_digital_number_pane_cp03_ParamLimits

0x1277,	// (0x00042a0c) clock_digital_number_pane_cp03

0x1283,	// (0x00042a18) clock_digital_number_pane_cp04_ParamLimits

0x1283,	// (0x00042a18) clock_digital_number_pane_cp04

0x128f,	// (0x00042a24) clock_digital_separator_pane_ParamLimits

0x128f,	// (0x00042a24) clock_digital_separator_pane

0x129b,	// (0x00042a30) popup_clock_digital_window_t1_ParamLimits

0x129b,	// (0x00042a30) popup_clock_digital_window_t1

0xd3be,	// (0x0004eb53) clock_digital_number_pane_g1

0xd3be,	// (0x0004eb53) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00050e78) clock_digital_number_pane_g

0xd3be,	// (0x0004eb53) clock_digital_separator_pane_g1

0xd3be,	// (0x0004eb53) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00050e78) clock_digital_separator_pane_g

0xd5dd,	// (0x0004ed72) aid_fill_nsta_ParamLimits

0xd713,	// (0x0004eea8) indicator_nsta_pane_ParamLimits

0x4f66,	// (0x000466fb) popup_clock_analogue_window

0x4f66,	// (0x000466fb) popup_clock_digital_window

0xdf24,	// (0x0004f6b9) grid_indicator_nsta_pane_ParamLimits

0x71c4,	// (0x00048959) clock_nsta_pane_t2

0x0001,

0xfa6b,	// (0x00051200) clock_nsta_pane_t

0x1204,	// (0x00042999) aid_size_max_handle

0x120e,	// (0x000429a3) aid_size_min_handle

0x4941,	// (0x000460d6) editor_scroll_pane

0x7f87,	// (0x0004971c) ex_editor_pane

0x3df4,	// (0x00045589) scroll_pane_cp13

0x3c13,	// (0x000453a8) scroll_pane_cp14

0x4338,	// (0x00045acd) scroll_pane_cp36

0xc3e8,	// (0x0004db7d) list_single_graphic_hl_pane_cp2_ParamLimits

0xc3e8,	// (0x0004db7d) list_single_graphic_hl_pane_cp2

0xdd88,	// (0x0004f51d) list_single_graphic_hl_pane_ParamLimits

0xdd88,	// (0x0004f51d) list_single_graphic_hl_pane

0x0a14,	// (0x000421a9) aid_size_min_hl_cp1

0x7f8f,	// (0x00049724) list_highlight_pane_cp34_ParamLimits

0x7f8f,	// (0x00049724) list_highlight_pane_cp34

0x7fa0,	// (0x00049735) list_single_graphic_hl_pane_g1_ParamLimits

0x7fa0,	// (0x00049735) list_single_graphic_hl_pane_g1

0xbbc8,	// (0x0004d35d) list_single_graphic_hl_pane_g2_ParamLimits

0xbbc8,	// (0x0004d35d) list_single_graphic_hl_pane_g2

0xbbc8,	// (0x0004d35d) list_single_graphic_hl_pane_g3_ParamLimits

0xbbc8,	// (0x0004d35d) list_single_graphic_hl_pane_g3

0x4819,	// (0x00045fae) list_single_graphic_hl_pane_g4_ParamLimits

0x4819,	// (0x00045fae) list_single_graphic_hl_pane_g4

0xcd0b,	// (0x0004e4a0) list_single_graphic_hl_pane_g5_ParamLimits

0xcd0b,	// (0x0004e4a0) list_single_graphic_hl_pane_g5

0x0004,

0xfbaa,	// (0x0005133f) list_single_graphic_hl_pane_g_ParamLimits

0xfbaa,	// (0x0005133f) list_single_graphic_hl_pane_g

0xbbd4,	// (0x0004d369) list_single_graphic_hl_pane_t1_ParamLimits

0xbbd4,	// (0x0004d369) list_single_graphic_hl_pane_t1

0x7fad,	// (0x00049742) aid_size_min_hl_cp2

0x7fb6,	// (0x0004974b) list_highlight_pane_cp34_cp2_ParamLimits

0x7fb6,	// (0x0004974b) list_highlight_pane_cp34_cp2

0x7fa0,	// (0x00049735) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7fa0,	// (0x00049735) list_single_graphic_hl_pane_g1_cp2

0x7fc3,	// (0x00049758) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7fc3,	// (0x00049758) list_single_graphic_hl_pane_g2_cp2

0x7fcf,	// (0x00049764) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7fcf,	// (0x00049764) list_single_graphic_hl_pane_g3_cp2

0x7fdd,	// (0x00049772) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7fdd,	// (0x00049772) list_single_graphic_hl_pane_g4_cp2

0x7fe9,	// (0x0004977e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fe9,	// (0x0004977e) list_single_graphic_hl_pane_g5_cp2

0xc45e,	// (0x0004dbf3) control_pane_g4_ParamLimits

0xc45e,	// (0x0004dbf3) control_pane_g4

0x4c65,	// (0x000463fa) bg_popup_sub_pane_cp10_ParamLimits

0x77ca,	// (0x00048f5f) list_choice_list_pane_ParamLimits

0x77d9,	// (0x00048f6e) scroll_pane_cp23

0x3670,	// (0x00044e05) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e03,	// (0x00049598) list_preview_fixed_pane_ParamLimits

0x7e19,	// (0x000495ae) list_preview_fixed_pane_cp_ParamLimits

0x7e19,	// (0x000495ae) list_preview_fixed_pane_cp

0x7e25,	// (0x000495ba) popup_preview_fixed_window_g1_ParamLimits

0x7e25,	// (0x000495ba) popup_preview_fixed_window_g1

0x7e31,	// (0x000495c6) popup_preview_fixed_window_g2_ParamLimits

0x7e31,	// (0x000495c6) popup_preview_fixed_window_g2

0x0002,

0xfb39,	// (0x000512ce) popup_preview_fixed_window_g_ParamLimits

0xfb39,	// (0x000512ce) popup_preview_fixed_window_g

0x1178,	// (0x0004290d) aid_navi_side_left_pane_ParamLimits

0x118d,	// (0x00042922) aid_navi_side_right_pane_ParamLimits

0x11a5,	// (0x0004293a) navi_icon_pane_stacon_ParamLimits

0x11b9,	// (0x0004294e) navi_navi_pane_stacon_ParamLimits

0x11a5,	// (0x0004293a) navi_text_pane_stacon_ParamLimits

0xd3b4,	// (0x0004eb49) main_text_info_pane

0x8013,	// (0x000497a8) listscroll_text_info_pane

0x801b,	// (0x000497b0) list_text_info_pane_ParamLimits

0x801b,	// (0x000497b0) list_text_info_pane

0x802a,	// (0x000497bf) scroll_pane_cp24_ParamLimits

0x802a,	// (0x000497bf) scroll_pane_cp24

0xe270,	// (0x0004fa05) list_text_info_pane_t1_ParamLimits

0xe270,	// (0x0004fa05) list_text_info_pane_t1

0xc5a3,	// (0x0004dd38) popup_fast_swap2_window_ParamLimits

0xc5a3,	// (0x0004dd38) popup_fast_swap2_window

0x8079,	// (0x0004980e) aid_size_cell_fast2

0xd3b4,	// (0x0004eb49) bg_popup_window_pane_cp17

0x55ef,	// (0x00046d84) heading_pane_cp2

0x55f7,	// (0x00046d8c) listscroll_fast2_pane

0x8083,	// (0x00049818) grid_fast2_pane

0x808d,	// (0x00049822) listscroll_fast2_pane_g1

0x8095,	// (0x0004982a) listscroll_fast2_pane_g2

0x0001,

0xfbb5,	// (0x0005134a) listscroll_fast2_pane_g

0x3df4,	// (0x00045589) scroll_pane_cp26

0x809f,	// (0x00049834) cell_fast2_pane_ParamLimits

0x809f,	// (0x00049834) cell_fast2_pane

0x80b4,	// (0x00049849) cell_fast2_pane_g1

0x80bd,	// (0x00049852) cell_fast2_pane_g2

0x80c6,	// (0x0004985b) cell_fast2_pane_g3

0x0002,

0xfbba,	// (0x0005134f) cell_fast2_pane_g

0x39d0,	// (0x00045165) grid_highlight_pane_cp9

0x39e5,	// (0x0004517a) main_eswt_pane_ParamLimits

0x39e5,	// (0x0004517a) main_eswt_pane

0x803f,	// (0x000497d4) list_single_text_info_pane

0x80ce,	// (0x00049863) eswt_ctrl_button_pane

0x80ce,	// (0x00049863) eswt_ctrl_canvas_pane

0x80d6,	// (0x0004986b) eswt_ctrl_combo_pane

0x80ce,	// (0x00049863) eswt_ctrl_default_pane

0x80ce,	// (0x00049863) eswt_ctrl_label_pane

0x80de,	// (0x00049873) eswt_ctrl_wait_pane

0x80e6,	// (0x0004987b) eswt_shell_pane

0xd3b4,	// (0x0004eb49) listscroll_eswt_app_pane

0x8106,	// (0x0004989b) popup_eswt_tasktip_window_ParamLimits

0x8106,	// (0x0004989b) popup_eswt_tasktip_window

0x5203,	// (0x00046998) bg_popup_window_pane_cp18

0x8117,	// (0x000498ac) eswt_control_pane_g1_ParamLimits

0x8117,	// (0x000498ac) eswt_control_pane_g1

0x8124,	// (0x000498b9) eswt_control_pane_g2_ParamLimits

0x8124,	// (0x000498b9) eswt_control_pane_g2

0x8131,	// (0x000498c6) eswt_control_pane_g3_ParamLimits

0x8131,	// (0x000498c6) eswt_control_pane_g3

0x813e,	// (0x000498d3) eswt_control_pane_g4_ParamLimits

0x813e,	// (0x000498d3) eswt_control_pane_g4

0x0003,

0xfbc1,	// (0x00051356) eswt_control_pane_g_ParamLimits

0xfbc1,	// (0x00051356) eswt_control_pane_g

0x3c80,	// (0x00045415) bg_button_pane_ParamLimits

0x3c80,	// (0x00045415) bg_button_pane

0x39e5,	// (0x0004517a) common_borders_pane_copy2_ParamLimits

0x39e5,	// (0x0004517a) common_borders_pane_copy2

0x814b,	// (0x000498e0) control_button_pane_g1_ParamLimits

0x814b,	// (0x000498e0) control_button_pane_g1

0x8157,	// (0x000498ec) control_button_pane_g2_ParamLimits

0x8157,	// (0x000498ec) control_button_pane_g2

0x8163,	// (0x000498f8) control_button_pane_g3_ParamLimits

0x8163,	// (0x000498f8) control_button_pane_g3

0x0002,

0xfbca,	// (0x0005135f) control_button_pane_g_ParamLimits

0xfbca,	// (0x0005135f) control_button_pane_g

0x8177,	// (0x0004990c) control_button_pane_t1

0x8185,	// (0x0004991a) control_button_pane_t2

0x0001,

0xfbd1,	// (0x00051366) control_button_pane_t

0x518f,	// (0x00046924) bg_button_pane_g1

0x5197,	// (0x0004692c) bg_button_pane_g2

0x519f,	// (0x00046934) bg_button_pane_g3

0x51a7,	// (0x0004693c) bg_button_pane_g4

0x51af,	// (0x00046944) bg_button_pane_g5

0x51b7,	// (0x0004694c) bg_button_pane_g6

0x51bf,	// (0x00046954) bg_button_pane_g7

0x51c7,	// (0x0004695c) bg_button_pane_g8

0x51cf,	// (0x00046964) bg_button_pane_g9

0x0008,

0xf841,	// (0x00050fd6) bg_button_pane_g

0x7785,	// (0x00048f1a) common_borders_pane_ParamLimits

0x7785,	// (0x00048f1a) common_borders_pane

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy1_ParamLimits

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy1

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy1_ParamLimits

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy1

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy1_ParamLimits

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy1

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy1_ParamLimits

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy1

0x77c0,	// (0x00048f55) bg_eswt_ctrl_canvas_pane_g1

0x7785,	// (0x00048f1a) common_borders_pane_cp2_ParamLimits

0x7785,	// (0x00048f1a) common_borders_pane_cp2

0x7785,	// (0x00048f1a) common_borders_pane_cp3_ParamLimits

0x7785,	// (0x00048f1a) common_borders_pane_cp3

0x8193,	// (0x00049928) separator_horizontal_pane

0x819b,	// (0x00049930) separator_vertical_pane

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy2_ParamLimits

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy2

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy2_ParamLimits

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy2

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy2_ParamLimits

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy2

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy2_ParamLimits

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy2

0xd3b4,	// (0x0004eb49) common_borders_pane_cp4

0x81a4,	// (0x00049939) separator_horizontal_pane_g1

0x81ad,	// (0x00049942) separator_horizontal_pane_g2

0x81b6,	// (0x0004994b) separator_horizontal_pane_g3

0x0002,

0xfbd6,	// (0x0005136b) separator_horizontal_pane_g

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy3_ParamLimits

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy3

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy3_ParamLimits

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy3

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy3_ParamLimits

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy3

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy3_ParamLimits

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy3

0xd3b4,	// (0x0004eb49) common_borders_pane_cp5

0x81bf,	// (0x00049954) separator_vertical_pane_g1

0x81c8,	// (0x0004995d) separator_vertical_pane_g2

0x81d1,	// (0x00049966) separator_vertical_pane_g3

0x0002,

0xfbdd,	// (0x00051372) separator_vertical_pane_g

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy4_ParamLimits

0x8117,	// (0x000498ac) eswt_control_pane_g1_copy4

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy4_ParamLimits

0x8124,	// (0x000498b9) eswt_control_pane_g2_copy4

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy4_ParamLimits

0x8131,	// (0x000498c6) eswt_control_pane_g3_copy4

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy4_ParamLimits

0x813e,	// (0x000498d3) eswt_control_pane_g4_copy4

0x81da,	// (0x0004996f) eswt_ctrl_combo_button_pane

0x81e2,	// (0x00049977) eswt_ctrl_input_pane

0x81ea,	// (0x0004997f) popup_choice_list_window_cp70

0x81f2,	// (0x00049987) eswt_ctrl_input_pane_t1

0xd3b4,	// (0x0004eb49) input_focus_pane_cp70

0x7785,	// (0x00048f1a) bg_button_pane_cp70_ParamLimits

0x7785,	// (0x00048f1a) bg_button_pane_cp70

0x8200,	// (0x00049995) eswt_ctrl_combo_button_pane_g1

0x8208,	// (0x0004999d) wait_bar_pane_cp70

0x5203,	// (0x00046998) bg_popup_window_pane_cp70_ParamLimits

0x5203,	// (0x00046998) bg_popup_window_pane_cp70

0x8210,	// (0x000499a5) popup_eswt_tasktip_window_t1

0x8226,	// (0x000499bb) wait_bar_pane_cp71_ParamLimits

0x8226,	// (0x000499bb) wait_bar_pane_cp71

0x8232,	// (0x000499c7) grid_eswt_app_pane

0x411b,	// (0x000458b0) scroll_pane_cp70

0xe28b,	// (0x0004fa20) cell_eswt_app_pane_ParamLimits

0xe28b,	// (0x0004fa20) cell_eswt_app_pane

0xe2b5,	// (0x0004fa4a) cell_eswt_app_pane_g1_ParamLimits

0xe2b5,	// (0x0004fa4a) cell_eswt_app_pane_g1

0xe2e4,	// (0x0004fa79) cell_eswt_app_pane_g2_ParamLimits

0xe2e4,	// (0x0004fa79) cell_eswt_app_pane_g2

0x0001,

0xfbe4,	// (0x00051379) cell_eswt_app_pane_g_ParamLimits

0xfbe4,	// (0x00051379) cell_eswt_app_pane_g

0xe30d,	// (0x0004faa2) cell_eswt_app_pane_t1_ParamLimits

0xe30d,	// (0x0004faa2) cell_eswt_app_pane_t1

0x82f5,	// (0x00049a8a) grid_highlight_pane_cp70_ParamLimits

0x82f5,	// (0x00049a8a) grid_highlight_pane_cp70

0x4819,	// (0x00045fae) set_content_pane_g1

0xd59a,	// (0x0004ed2f) status_small_volume_pane

0x2561,	// (0x00043cf6) status_small_volume_pane_g1

0x2569,	// (0x00043cfe) volume_small2_pane

0x2572,	// (0x00043d07) volume_small2_pane_g1

0x257b,	// (0x00043d10) volume_small2_pane_g2

0x2584,	// (0x00043d19) volume_small2_pane_g3

0x258d,	// (0x00043d22) volume_small2_pane_g4

0x2596,	// (0x00043d2b) volume_small2_pane_g5

0x259f,	// (0x00043d34) volume_small2_pane_g6

0x25a8,	// (0x00043d3d) volume_small2_pane_g7

0x25b1,	// (0x00043d46) volume_small2_pane_g8

0x25ba,	// (0x00043d4f) volume_small2_pane_g9

0x25c3,	// (0x00043d58) volume_small2_pane_g10

0x0009,

0xfbe9,	// (0x0005137e) volume_small2_pane_g

0x7b86,	// (0x0004931b) fep_vkb_top_text_pane_g1_ParamLimits

0xe218,	// (0x0004f9ad) fep_vkb_top_text_pane_t1_ParamLimits

0x7e3d,	// (0x000495d2) popup_preview_fixed_window_g3_ParamLimits

0x7e3d,	// (0x000495d2) popup_preview_fixed_window_g3

0xcbcc,	// (0x0004e361) popup_toolbar_trans_pane

0xdc0f,	// (0x0004f3a4) aid_height_set_list_ParamLimits

0x6584,	// (0x00047d19) aid_size_parent_ParamLimits

0x4c65,	// (0x000463fa) list_highlight_pane_cp2_ParamLimits

0x4819,	// (0x00045fae) set_content_pane_g1_ParamLimits

0xbb85,	// (0x0004d31a) list_single_image_pane_ParamLimits

0xbb85,	// (0x0004d31a) list_single_image_pane

0xe33f,	// (0x0004fad4) aid_size_cell_image_ParamLimits

0xe33f,	// (0x0004fad4) aid_size_cell_image

0xe34c,	// (0x0004fae1) grid_single_image_pane_ParamLimits

0xe34c,	// (0x0004fae1) grid_single_image_pane

0x56c2,	// (0x00046e57) list_single_image_pane_g1_ParamLimits

0x56c2,	// (0x00046e57) list_single_image_pane_g1

0x831a,	// (0x00049aaf) list_single_image_pane_g2_ParamLimits

0x831a,	// (0x00049aaf) list_single_image_pane_g2

0x0001,

0xfbfe,	// (0x00051393) list_single_image_pane_g_ParamLimits

0xfbfe,	// (0x00051393) list_single_image_pane_g

0x832e,	// (0x00049ac3) list_single_image_pane_t1_ParamLimits

0x832e,	// (0x00049ac3) list_single_image_pane_t1

0xe365,	// (0x0004fafa) cell_image_list_pane_ParamLimits

0xe365,	// (0x0004fafa) cell_image_list_pane

0xe379,	// (0x0004fb0e) cell_image_list_pane_g1

0xe382,	// (0x0004fb17) cell_image_list_pane_g2

0x0001,

0xfc03,	// (0x00051398) cell_image_list_pane_g

0x836a,	// (0x00049aff) aid_size_cell_tb_trans_pane

0x3c80,	// (0x00045415) bg_tb_trans_pane

0x837c,	// (0x00049b11) grid_tb_trans_pane

0x518f,	// (0x00046924) bg_tb_trans_pane_g1

0x5197,	// (0x0004692c) bg_tb_trans_pane_g2

0x519f,	// (0x00046934) bg_tb_trans_pane_g3

0x51a7,	// (0x0004693c) bg_tb_trans_pane_g4

0x51af,	// (0x00046944) bg_tb_trans_pane_g5

0x51c7,	// (0x0004695c) bg_tb_trans_pane_g6

0x51cf,	// (0x00046964) bg_tb_trans_pane_g7

0x51b7,	// (0x0004694c) bg_tb_trans_pane_g8

0x51bf,	// (0x00046954) bg_tb_trans_pane_g9

0x0008,

0xfc08,	// (0x0005139d) bg_tb_trans_pane_g

0x8390,	// (0x00049b25) cell_toolbar_trans_pane_ParamLimits

0x8390,	// (0x00049b25) cell_toolbar_trans_pane

0x77c0,	// (0x00048f55) cell_toolbar_trans_pane_g1

0xdfdb,	// (0x0004f770) list_form2_midp_pane_t1

0xdfe9,	// (0x0004f77e) list_form2_midp_pane_t2

0x0001,

0xfab1,	// (0x00051246) list_form2_midp_pane_t

0x73b1,	// (0x00048b46) scroll_pane_cp51_ParamLimits

0x756d,	// (0x00048d02) form2_midp_wait_pane_g1

0x7576,	// (0x00048d0b) form2_midp_wait_pane_g2

0x757f,	// (0x00048d14) form2_midp_wait_pane_g3

0x0002,

0xfac6,	// (0x0005125b) form2_midp_wait_pane_g

0x33e7,	// (0x00044b7c) list_highlight_pane_cp21_ParamLimits

0x75cb,	// (0x00048d60) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x75da,	// (0x00048d6f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x673c,	// (0x00047ed1) list_single_2graphic_im_pane_ParamLimits

0x673c,	// (0x00047ed1) list_single_2graphic_im_pane

0x83b6,	// (0x00049b4b) list_single_2graphic_im_pane_g1_ParamLimits

0x83b6,	// (0x00049b4b) list_single_2graphic_im_pane_g1

0x83c7,	// (0x00049b5c) list_single_2graphic_im_pane_g2_ParamLimits

0x83c7,	// (0x00049b5c) list_single_2graphic_im_pane_g2

0x83d3,	// (0x00049b68) list_single_2graphic_im_pane_g3_ParamLimits

0x83d3,	// (0x00049b68) list_single_2graphic_im_pane_g3

0x0003,

0xfc1b,	// (0x000513b0) list_single_2graphic_im_pane_g_ParamLimits

0xfc1b,	// (0x000513b0) list_single_2graphic_im_pane_g

0x83f3,	// (0x00049b88) list_single_2graphic_im_pane_t1_ParamLimits

0x83f3,	// (0x00049b88) list_single_2graphic_im_pane_t1

0x7e49,	// (0x000495de) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e49,	// (0x000495de) list_single_graphic_2heading_pane_fp

0x08f6,	// (0x0004208b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x08f6,	// (0x0004208b) list_single_graphic_2heading_pane_fp_g1

0x7e5e,	// (0x000495f3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e5e,	// (0x000495f3) list_single_graphic_2heading_pane_fp_g2

0x3c1b,	// (0x000453b0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3c1b,	// (0x000453b0) list_single_graphic_2heading_pane_fp_g3

0x3c8e,	// (0x00045423) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3c8e,	// (0x00045423) list_single_graphic_2heading_pane_fp_g4

0x7e6a,	// (0x000495ff) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e6a,	// (0x000495ff) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb49,	// (0x000512de) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb49,	// (0x000512de) list_single_graphic_2heading_pane_fp_g

0x0a3f,	// (0x000421d4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0a3f,	// (0x000421d4) list_single_graphic_2heading_pane_fp_t1

0x092e,	// (0x000420c3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x092e,	// (0x000420c3) list_single_graphic_2heading_pane_fp_t2

0x0a55,	// (0x000421ea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0a55,	// (0x000421ea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc24,	// (0x000513b9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc24,	// (0x000513b9) list_single_graphic_2heading_pane_fp_t

0x784c,	// (0x00048fe1) fep_hwr_write_pane_g5_ParamLimits

0x784c,	// (0x00048fe1) fep_hwr_write_pane_g5

0x7858,	// (0x00048fed) fep_hwr_write_pane_g6_ParamLimits

0x7858,	// (0x00048fed) fep_hwr_write_pane_g6

0x80e6,	// (0x0004987b) eswt_shell_pane_ParamLimits

0x5203,	// (0x00046998) bg_popup_window_pane_cp18_ParamLimits

0x64cc,	// (0x00047c61) heading_pane_cp70

0x8210,	// (0x000499a5) popup_eswt_tasktip_window_t1_ParamLimits

0xd638,	// (0x0004edcd) aid_touch_tab_arrow_left

0xd64e,	// (0x0004ede3) aid_touch_tab_arrow_right

0xbf10,	// (0x0004d6a5) title_pane_g3_ParamLimits

0xbf10,	// (0x0004d6a5) title_pane_g3

0x3c3f,	// (0x000453d4) set_value_pane_g1

0xcbcc,	// (0x0004e361) popup_toolbar_trans_pane_ParamLimits

0x836a,	// (0x00049aff) aid_size_cell_tb_trans_pane_ParamLimits

0x3c80,	// (0x00045415) bg_tb_trans_pane_ParamLimits

0x837c,	// (0x00049b11) grid_tb_trans_pane_ParamLimits

0x3670,	// (0x00044e05) cont_note_pane_ParamLimits

0x3670,	// (0x00044e05) cont_note_pane

0x39e5,	// (0x0004517a) cont_snote2_single_text_pane_ParamLimits

0x39e5,	// (0x0004517a) cont_snote2_single_text_pane

0x39e5,	// (0x0004517a) cont_snote2_single_graphic_pane_ParamLimits

0x39e5,	// (0x0004517a) cont_snote2_single_graphic_pane

0x582a,	// (0x00046fbf) cont_note_wait_pane_ParamLimits

0x582a,	// (0x00046fbf) cont_note_wait_pane

0x582a,	// (0x00046fbf) cont_note_image_pane_ParamLimits

0x582a,	// (0x00046fbf) cont_note_image_pane

0x8424,	// (0x00049bb9) popup_note2_window_g1_ParamLimits

0x8424,	// (0x00049bb9) popup_note2_window_g1

0x8455,	// (0x00049bea) popup_note2_window_t1_ParamLimits

0x8455,	// (0x00049bea) popup_note2_window_t1

0x849a,	// (0x00049c2f) popup_note2_window_t2_ParamLimits

0x849a,	// (0x00049c2f) popup_note2_window_t2

0x84df,	// (0x00049c74) popup_note2_window_t3_ParamLimits

0x84df,	// (0x00049c74) popup_note2_window_t3

0x8524,	// (0x00049cb9) popup_note2_window_t4_ParamLimits

0x8524,	// (0x00049cb9) popup_note2_window_t4

0x36f4,	// (0x00044e89) popup_note2_window_t5_ParamLimits

0x36f4,	// (0x00044e89) popup_note2_window_t5

0x0004,

0xfc30,	// (0x000513c5) popup_note2_window_t_ParamLimits

0xfc30,	// (0x000513c5) popup_note2_window_t

0x8553,	// (0x00049ce8) popup_note2_image_window_g1_ParamLimits

0x8553,	// (0x00049ce8) popup_note2_image_window_g1

0x855f,	// (0x00049cf4) popup_note2_image_window_g2_ParamLimits

0x855f,	// (0x00049cf4) popup_note2_image_window_g2

0x0001,

0xfc3b,	// (0x000513d0) popup_note2_image_window_g_ParamLimits

0xfc3b,	// (0x000513d0) popup_note2_image_window_g

0x8571,	// (0x00049d06) popup_note2_image_window_t1_ParamLimits

0x8571,	// (0x00049d06) popup_note2_image_window_t1

0x8589,	// (0x00049d1e) popup_note2_image_window_t2_ParamLimits

0x8589,	// (0x00049d1e) popup_note2_image_window_t2

0x85a1,	// (0x00049d36) popup_note2_image_window_t3_ParamLimits

0x85a1,	// (0x00049d36) popup_note2_image_window_t3

0x0002,

0xfc40,	// (0x000513d5) popup_note2_image_window_t_ParamLimits

0xfc40,	// (0x000513d5) popup_note2_image_window_t

0x5838,	// (0x00046fcd) popup_note2_wait_window_g1_ParamLimits

0x5838,	// (0x00046fcd) popup_note2_wait_window_g1

0x85bd,	// (0x00049d52) popup_note2_wait_window_g2_ParamLimits

0x85bd,	// (0x00049d52) popup_note2_wait_window_g2

0x5850,	// (0x00046fe5) popup_note2_wait_window_g3_ParamLimits

0x5850,	// (0x00046fe5) popup_note2_wait_window_g3

0x0002,

0xfc47,	// (0x000513dc) popup_note2_wait_window_g_ParamLimits

0xfc47,	// (0x000513dc) popup_note2_wait_window_g

0x85c9,	// (0x00049d5e) popup_note2_wait_window_t1_ParamLimits

0x85c9,	// (0x00049d5e) popup_note2_wait_window_t1

0x85e7,	// (0x00049d7c) popup_note2_wait_window_t2_ParamLimits

0x85e7,	// (0x00049d7c) popup_note2_wait_window_t2

0x8605,	// (0x00049d9a) popup_note2_wait_window_t3_ParamLimits

0x8605,	// (0x00049d9a) popup_note2_wait_window_t3

0x8617,	// (0x00049dac) popup_note2_wait_window_t4_ParamLimits

0x8617,	// (0x00049dac) popup_note2_wait_window_t4

0x0003,

0xfc4e,	// (0x000513e3) popup_note2_wait_window_t_ParamLimits

0xfc4e,	// (0x000513e3) popup_note2_wait_window_t

0x8629,	// (0x00049dbe) wait_bar2_pane_ParamLimits

0x8629,	// (0x00049dbe) wait_bar2_pane

0x8641,	// (0x00049dd6) popup_snote2_single_text_window_g1_ParamLimits

0x8641,	// (0x00049dd6) popup_snote2_single_text_window_g1

0x8669,	// (0x00049dfe) popup_snote2_single_text_window_t1_ParamLimits

0x8669,	// (0x00049dfe) popup_snote2_single_text_window_t1

0x86b5,	// (0x00049e4a) popup_snote2_single_text_window_t2_ParamLimits

0x86b5,	// (0x00049e4a) popup_snote2_single_text_window_t2

0x8701,	// (0x00049e96) popup_snote2_single_text_window_t3_ParamLimits

0x8701,	// (0x00049e96) popup_snote2_single_text_window_t3

0x8742,	// (0x00049ed7) popup_snote2_single_text_window_t4_ParamLimits

0x8742,	// (0x00049ed7) popup_snote2_single_text_window_t4

0x8778,	// (0x00049f0d) popup_snote2_single_text_window_t5_ParamLimits

0x8778,	// (0x00049f0d) popup_snote2_single_text_window_t5

0x0004,

0xfc57,	// (0x000513ec) popup_snote2_single_text_window_t_ParamLimits

0xfc57,	// (0x000513ec) popup_snote2_single_text_window_t

0x87a3,	// (0x00049f38) popup_snote2_single_graphic_window_g1_ParamLimits

0x87a3,	// (0x00049f38) popup_snote2_single_graphic_window_g1

0x87cb,	// (0x00049f60) popup_snote2_single_graphic_window_g2_ParamLimits

0x87cb,	// (0x00049f60) popup_snote2_single_graphic_window_g2

0x0001,

0xfc62,	// (0x000513f7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc62,	// (0x000513f7) popup_snote2_single_graphic_window_g

0x87f3,	// (0x00049f88) popup_snote2_single_graphic_window_t1_ParamLimits

0x87f3,	// (0x00049f88) popup_snote2_single_graphic_window_t1

0x883f,	// (0x00049fd4) popup_snote2_single_graphic_window_t2_ParamLimits

0x883f,	// (0x00049fd4) popup_snote2_single_graphic_window_t2

0x8701,	// (0x00049e96) popup_snote2_single_graphic_window_t3_ParamLimits

0x8701,	// (0x00049e96) popup_snote2_single_graphic_window_t3

0x8742,	// (0x00049ed7) popup_snote2_single_graphic_window_t4_ParamLimits

0x8742,	// (0x00049ed7) popup_snote2_single_graphic_window_t4

0x8778,	// (0x00049f0d) popup_snote2_single_graphic_window_t5_ParamLimits

0x8778,	// (0x00049f0d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc67,	// (0x000513fc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc67,	// (0x000513fc) popup_snote2_single_graphic_window_t

0x7272,	// (0x00048a07) clock_nsta_pane_cp2_t1

0x7272,	// (0x00048a07) clock_nsta_pane_cp2_t2

0x0001,

0xfa87,	// (0x0005121c) clock_nsta_pane_cp2_t

0x0217,	// (0x000419ac) form_field_data_wide_pane_g1_ParamLimits

0x3c1b,	// (0x000453b0) form_field_data_wide_pane_g2_ParamLimits

0x3c1b,	// (0x000453b0) form_field_data_wide_pane_g2

0x3c8e,	// (0x00045423) form_field_data_wide_pane_g3_ParamLimits

0x3c8e,	// (0x00045423) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00050df0) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00050df0) form_field_data_wide_pane_g

0xdf0e,	// (0x0004f6a3) grid_touch_3_pane_ParamLimits

0xdf0e,	// (0x0004f6a3) grid_touch_3_pane

0xe38b,	// (0x0004fb20) cell_touch_3_pane_ParamLimits

0xe38b,	// (0x0004fb20) cell_touch_3_pane

0x77c0,	// (0x00048f55) cell_touch_3_pane_g1

0x77c0,	// (0x00048f55) cell_touch_3_pane_g2

0x0001,

0xfb0c,	// (0x000512a1) cell_touch_3_pane_g

0x374c,	// (0x00044ee1) cont_query_data_pane

0x3754,	// (0x00044ee9) cont_query_data_pane_cp1

0x88b9,	// (0x0004a04e) button_value_adjust_pane_cp7

0x88c1,	// (0x0004a056) query_popup_pane_cp3

0x4412,	// (0x00045ba7) bg_popup_sub_pane_cp22_ParamLimits

0x12ba,	// (0x00042a4f) navi_navi_volume_pane_cp2

0x12d5,	// (0x00042a6a) popup_side_volume_key_window_g2

0x12e4,	// (0x00042a79) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00050e86) popup_side_volume_key_window_g

0x1301,	// (0x00042a96) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00050e8d) popup_side_volume_key_window_t

0x46d8,	// (0x00045e6d) popup_side_volume_key_window_ParamLimits

0xb73c,	// (0x0004ced1) list_double_graphic_pane_g4_ParamLimits

0xb73c,	// (0x0004ced1) list_double_graphic_pane_g4

0xccab,	// (0x0004e440) list_single_2heading_msg_pane_ParamLimits

0xccab,	// (0x0004e440) list_single_2heading_msg_pane

0xcd1f,	// (0x0004e4b4) list_single_2heading_msg_pane_g1_ParamLimits

0xcd1f,	// (0x0004e4b4) list_single_2heading_msg_pane_g1

0xcd2b,	// (0x0004e4c0) list_single_2heading_msg_pane_g2_ParamLimits

0xcd2b,	// (0x0004e4c0) list_single_2heading_msg_pane_g2

0xcd3e,	// (0x0004e4d3) list_single_2heading_msg_pane_g3_ParamLimits

0xcd3e,	// (0x0004e4d3) list_single_2heading_msg_pane_g3

0x25f0,	// (0x00043d85) list_single_2heading_msg_pane_g4_ParamLimits

0x25f0,	// (0x00043d85) list_single_2heading_msg_pane_g4

0x0003,

0xfc72,	// (0x00051407) list_single_2heading_msg_pane_g_ParamLimits

0xfc72,	// (0x00051407) list_single_2heading_msg_pane_g

0x0a75,	// (0x0004220a) list_single_2heading_msg_pane_t1_ParamLimits

0x0a75,	// (0x0004220a) list_single_2heading_msg_pane_t1

0xbbea,	// (0x0004d37f) list_single_2heading_msg_pane_t2_ParamLimits

0xbbea,	// (0x0004d37f) list_single_2heading_msg_pane_t2

0xbc55,	// (0x0004d3ea) list_single_2heading_msg_pane_t3_ParamLimits

0xbc55,	// (0x0004d3ea) list_single_2heading_msg_pane_t3

0x0b0a,	// (0x0004229f) list_single_2heading_msg_pane_t4_ParamLimits

0x0b0a,	// (0x0004229f) list_single_2heading_msg_pane_t4

0x0003,

0xfc7b,	// (0x00051410) list_single_2heading_msg_pane_t_ParamLimits

0xfc7b,	// (0x00051410) list_single_2heading_msg_pane_t

0x333b,	// (0x00044ad0) title_pane_g4_ParamLimits

0x333b,	// (0x00044ad0) title_pane_g4

0x10c9,	// (0x0004285e) title_pane_stacon_g3_ParamLimits

0x10c9,	// (0x0004285e) title_pane_stacon_g3

0x83e7,	// (0x00049b7c) list_single_2graphic_im_pane_g4_ParamLimits

0x83e7,	// (0x00049b7c) list_single_2graphic_im_pane_g4

0x6289,	// (0x00047a1e) popup_side_volume_key_window_cp

0x6a99,	// (0x0004822e) main_idle_act2_pane_t1

0x1c82,	// (0x00043417) toolbar_button_pane_g10

0xc26f,	// (0x0004da04) popup_toolbar_window_cp1

0x7263,	// (0x000489f8) clock_nsta_pane_cp_t1

0x7263,	// (0x000489f8) clock_nsta_pane_cp_t2

0x0001,

0xfa82,	// (0x00051217) clock_nsta_pane_cp_t

0x12ba,	// (0x00042a4f) navi_navi_volume_pane_cp2_ParamLimits

0x12c9,	// (0x00042a5e) popup_side_volume_key_window_g1_ParamLimits

0x12d5,	// (0x00042a6a) popup_side_volume_key_window_g2_ParamLimits

0x12e4,	// (0x00042a79) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00050e86) popup_side_volume_key_window_g_ParamLimits

0x21ed,	// (0x00043982) fep_hwr_aid_pane

0xe0be,	// (0x0004f853) bg_fep_hwr_top_pane_g4_ParamLimits

0x781c,	// (0x00048fb1) fep_hwr_top_pane_g1_ParamLimits

0x782e,	// (0x00048fc3) fep_hwr_top_pane_g2_ParamLimits

0x22a6,	// (0x00043a3b) fep_hwr_top_pane_g3_ParamLimits

0xfad7,	// (0x0005126c) fep_hwr_top_pane_g_ParamLimits

0x22bb,	// (0x00043a50) fep_hwr_top_text_pane_ParamLimits

0x604c,	// (0x000477e1) aid_touch_tab_arrow_arrow_2

0x6055,	// (0x000477ea) aid_touch_tab_arrow_left_2

0x2201,	// (0x00043996) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2238,	// (0x000439cd) fep_hwr_prediction_pane

0x798e,	// (0x00049123) fep_vkb_prediction_pane

0xe1f8,	// (0x0004f98d) fep_vkb_side_pane_g3_ParamLimits

0xe1f8,	// (0x0004f98d) fep_vkb_side_pane_g3

0x7a3e,	// (0x000491d3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ebe,	// (0x00049653) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ecb,	// (0x00049660) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb81,	// (0x00051316) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x88e6,	// (0x0004a07b) fep_hwr_prediction_pane_g1

0x2608,	// (0x00043d9d) fep_hwr_prediction_pane_g2

0x2610,	// (0x00043da5) fep_hwr_prediction_pane_g3

0x2618,	// (0x00043dad) fep_hwr_prediction_pane_g4

0x0003,

0xfc84,	// (0x00051419) fep_hwr_prediction_pane_g

0x88e6,	// (0x0004a07b) fep_vkb_prediction_pane_g1

0x88f0,	// (0x0004a085) fep_vkb_prediction_pane_g2

0x88f8,	// (0x0004a08d) fep_vkb_prediction_pane_g3

0x8900,	// (0x0004a095) fep_vkb_prediction_pane_g4

0x0003,

0xfc8d,	// (0x00051422) fep_vkb_prediction_pane_g

0x1f76,	// (0x0004370b) slider_set_pane_g3

0x1f8a,	// (0x0004371f) slider_set_pane_g4

0x1fa2,	// (0x00043737) slider_set_pane_g5

0x1f76,	// (0x0004370b) slider_set_pane_g6

0x1fb8,	// (0x0004374d) slider_set_pane_g7

0x66e9,	// (0x00047e7e) slider_form_pane_g3

0x66f2,	// (0x00047e87) slider_form_pane_g4

0x66fa,	// (0x00047e8f) slider_form_pane_g5

0x66e9,	// (0x00047e7e) slider_form_pane_g6

0xdd5a,	// (0x0004f4ef) slider_form_pane_g7

0x6d44,	// (0x000484d9) slider_set_pane_vc_g3

0x6d4d,	// (0x000484e2) slider_set_pane_vc_g4

0x6d56,	// (0x000484eb) slider_set_pane_vc_g5

0x6d44,	// (0x000484d9) slider_set_pane_vc_g6

0x6d5f,	// (0x000484f4) slider_set_pane_vc_g7

0x6f21,	// (0x000486b6) slider_form_pane_vc_g1

0x6f2a,	// (0x000486bf) slider_form_pane_vc_g2

0x6f33,	// (0x000486c8) slider_form_pane_vc_g3

0x6f21,	// (0x000486b6) slider_form_pane_vc_g4

0x6f3c,	// (0x000486d1) slider_form_pane_vc_g5

0x0004,

0xfa54,	// (0x000511e9) slider_form_pane_vc_g

0xd3b4,	// (0x0004eb49) main_idle_act3_pane

0x8908,	// (0x0004a09d) ai3_links_pane

0xe3d3,	// (0x0004fb68) popup_ai3_data_window_ParamLimits

0xe3d3,	// (0x0004fb68) popup_ai3_data_window

0xd3b4,	// (0x0004eb49) grid_ai3_links_pane

0xe3ed,	// (0x0004fb82) cell_ai3_links_pane_ParamLimits

0xe3ed,	// (0x0004fb82) cell_ai3_links_pane

0x8943,	// (0x0004a0d8) bg_popup_sub_pane_cp11

0x8950,	// (0x0004a0e5) cell_ai3_links_pane_g1

0xd3b4,	// (0x0004eb49) bg_popup_sub_pane_cp12

0x8975,	// (0x0004a10a) heading_ai3_data_pane

0x897d,	// (0x0004a112) list_ai3_gene_pane

0x8989,	// (0x0004a11e) popup_ai3_data_window_g1

0x8991,	// (0x0004a126) heading_ai3_data_pane_g1

0x8999,	// (0x0004a12e) heading_ai3_data_pane_t1

0x89a7,	// (0x0004a13c) list_double_ai3_gene_pane_ParamLimits

0x89a7,	// (0x0004a13c) list_double_ai3_gene_pane

0x89b4,	// (0x0004a149) list_single_ai3_gene_pane_ParamLimits

0x89b4,	// (0x0004a149) list_single_ai3_gene_pane

0x7785,	// (0x00048f1a) list_highlight_pane_cp7_ParamLimits

0x7785,	// (0x00048f1a) list_highlight_pane_cp7

0x89c1,	// (0x0004a156) list_single_a13_gene_pane_t1_ParamLimits

0x89c1,	// (0x0004a156) list_single_a13_gene_pane_t1

0x89d8,	// (0x0004a16d) list_single_ai3_gene_pane_g1

0x89e1,	// (0x0004a176) list_single_ai3_gene_pane_g2

0x0001,

0xfc96,	// (0x0005142b) list_single_ai3_gene_pane_g

0x89e9,	// (0x0004a17e) list_double_ai3_gene_pane_g1_ParamLimits

0x89e9,	// (0x0004a17e) list_double_ai3_gene_pane_g1

0x89f5,	// (0x0004a18a) list_double_ai3_gene_pane_t1_ParamLimits

0x89f5,	// (0x0004a18a) list_double_ai3_gene_pane_t1

0x8a11,	// (0x0004a1a6) list_double_ai3_gene_pane_t2_ParamLimits

0x8a11,	// (0x0004a1a6) list_double_ai3_gene_pane_t2

0x8a27,	// (0x0004a1bc) list_double_ai3_gene_pane_t3_ParamLimits

0x8a27,	// (0x0004a1bc) list_double_ai3_gene_pane_t3

0x0002,

0xfc9b,	// (0x00051430) list_double_ai3_gene_pane_t_ParamLimits

0xfc9b,	// (0x00051430) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0a6b,	// (0x00042200) aid_size_min_col_2

0xe3bd,	// (0x0004fb52) aid_size_min_msg_ParamLimits

0xe3bd,	// (0x0004fb52) aid_size_min_msg

0xe20c,	// (0x0004f9a1) fep_vkb_top_text_pane_g2_ParamLimits

0xe20c,	// (0x0004f9a1) fep_vkb_top_text_pane_g2

0x0001,

0xfb07,	// (0x0005129c) fep_vkb_top_text_pane_g_ParamLimits

0xfb07,	// (0x0005129c) fep_vkb_top_text_pane_g

0xd3b4,	// (0x0004eb49) main_hc_apps_shell_pane

0x8a44,	// (0x0004a1d9) grid_hc_apps_pane_ParamLimits

0x8a44,	// (0x0004a1d9) grid_hc_apps_pane

0x8a56,	// (0x0004a1eb) list_hc_apps_pane

0x8a5e,	// (0x0004a1f3) scroll_pane_cp37_ParamLimits

0x8a5e,	// (0x0004a1f3) scroll_pane_cp37

0xe407,	// (0x0004fb9c) cell_hc_apps_pane_ParamLimits

0xe407,	// (0x0004fb9c) cell_hc_apps_pane

0xe4c5,	// (0x0004fc5a) cell_hc_apps_pane_g1_ParamLimits

0xe4c5,	// (0x0004fc5a) cell_hc_apps_pane_g1

0x8b48,	// (0x0004a2dd) cell_hc_apps_pane_g2_ParamLimits

0x8b48,	// (0x0004a2dd) cell_hc_apps_pane_g2

0x8b64,	// (0x0004a2f9) cell_hc_apps_pane_g3_ParamLimits

0x8b64,	// (0x0004a2f9) cell_hc_apps_pane_g3

0x0002,

0xfca2,	// (0x00051437) cell_hc_apps_pane_g_ParamLimits

0xfca2,	// (0x00051437) cell_hc_apps_pane_g

0xe4f1,	// (0x0004fc86) cell_hc_apps_pane_t1_ParamLimits

0xe4f1,	// (0x0004fc86) cell_hc_apps_pane_t1

0x3670,	// (0x00044e05) grid_highlight_pane_cp10_ParamLimits

0x3670,	// (0x00044e05) grid_highlight_pane_cp10

0xe52f,	// (0x0004fcc4) list_single_hc_apps_pane_ParamLimits

0xe52f,	// (0x0004fcc4) list_single_hc_apps_pane

0xe55c,	// (0x0004fcf1) list_single_hc_apps_pane_g1

0xcd4a,	// (0x0004e4df) list_single_hc_apps_pane_g2

0x0001,

0xfca9,	// (0x0005143e) list_single_hc_apps_pane_g

0xcd63,	// (0x0004e4f8) list_single_hc_apps_pane_g2_copy1

0x0b2f,	// (0x000422c4) list_single_hc_apps_pane_t1

0x33e7,	// (0x00044b7c) bg_set_opt_pane_cp_ParamLimits

0x0f6e,	// (0x00042703) setting_slider_pane_t1_ParamLimits

0x0f87,	// (0x0004271c) setting_slider_pane_t2_ParamLimits

0x0fa1,	// (0x00042736) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00050cce) setting_slider_pane_t_ParamLimits

0x0fb9,	// (0x0004274e) slider_set_pane_ParamLimits

0x157f,	// (0x00042d14) control_pane_g5_ParamLimits

0x157f,	// (0x00042d14) control_pane_g5

0x6538,	// (0x00047ccd) slider_set_pane_g1_ParamLimits

0x1f6a,	// (0x000436ff) slider_set_pane_g2_ParamLimits

0x1f76,	// (0x0004370b) slider_set_pane_g3_ParamLimits

0x1f8a,	// (0x0004371f) slider_set_pane_g4_ParamLimits

0x1fa2,	// (0x00043737) slider_set_pane_g5_ParamLimits

0x1f76,	// (0x0004370b) slider_set_pane_g6_ParamLimits

0x1fb8,	// (0x0004374d) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x000510d4) slider_set_pane_g_ParamLimits

0x47c4,	// (0x00045f59) navi_icon_text_pane_ParamLimits

0xd601,	// (0x0004ed96) aid_fill_nsta_2_ParamLimits

0xd638,	// (0x0004edcd) aid_touch_tab_arrow_left_ParamLimits

0xd64e,	// (0x0004ede3) aid_touch_tab_arrow_right_ParamLimits

0xd6e9,	// (0x0004ee7e) clock_nsta_pane_ParamLimits

0x602e,	// (0x000477c3) navi_icon_pane_g1_ParamLimits

0x603a,	// (0x000477cf) navi_text_pane_t1_ParamLimits

0x736f,	// (0x00048b04) navi_icon_text_pane_g1_ParamLimits

0x737b,	// (0x00048b10) navi_icon_text_pane_t1_ParamLimits

0xe55c,	// (0x0004fcf1) list_single_hc_apps_pane_g1_ParamLimits

0xcd4a,	// (0x0004e4df) list_single_hc_apps_pane_g2_ParamLimits

0xfca9,	// (0x0005143e) list_single_hc_apps_pane_g_ParamLimits

0xcd63,	// (0x0004e4f8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0b2f,	// (0x000422c4) list_single_hc_apps_pane_t1_ParamLimits

0xbe15,	// (0x0004d5aa) popup_toolbar2_fixed_window_ParamLimits

0xbe15,	// (0x0004d5aa) popup_toolbar2_fixed_window

0xcbc2,	// (0x0004e357) popup_toolbar2_float_window

0xd3b4,	// (0x0004eb49) bg_popup_sub_pane_cp27

0x8c3b,	// (0x0004a3d0) grid_toolbar2_float_pane

0xd3b4,	// (0x0004eb49) bg_popup_sub_pane_cp26

0x8c3b,	// (0x0004a3d0) grid_toolbar2_fixed_pane

0xe575,	// (0x0004fd0a) cell_toolbar2_fixed_pane_ParamLimits

0xe575,	// (0x0004fd0a) cell_toolbar2_fixed_pane

0xe58f,	// (0x0004fd24) cell_toolbar2_fixed_pane_g1

0x8c5c,	// (0x0004a3f1) toolbar2_fixed_button_pane

0x518f,	// (0x00046924) toolbar2_fixed_button_pane_g1

0x5197,	// (0x0004692c) toolbar2_fixed_button_pane_g2

0x519f,	// (0x00046934) toolbar2_fixed_button_pane_g3

0x51a7,	// (0x0004693c) toolbar2_fixed_button_pane_g4

0x51af,	// (0x00046944) toolbar2_fixed_button_pane_g5

0x51b7,	// (0x0004694c) toolbar2_fixed_button_pane_g6

0x51bf,	// (0x00046954) toolbar2_fixed_button_pane_g7

0x51c7,	// (0x0004695c) toolbar2_fixed_button_pane_g8

0x51cf,	// (0x00046964) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00050fd6) toolbar2_fixed_button_pane_g

0x8c64,	// (0x0004a3f9) cell_toolbar2_float_pane_ParamLimits

0x8c64,	// (0x0004a3f9) cell_toolbar2_float_pane

0x8c75,	// (0x0004a40a) cell_toolbar2_float_pane_g1

0x8c5c,	// (0x0004a3f1) toolbar2_fixed_button_pane_cp

0xe0e6,	// (0x0004f87b) fep_vkb_accented_list_pane_ParamLimits

0xe0e6,	// (0x0004f87b) fep_vkb_accented_list_pane

0x2409,	// (0x00043b9e) bg_popup_fep_shadow_pane_g9

0x4941,	// (0x000460d6) bg_popup_fep_shadow_pane_cp3

0x3ddb,	// (0x00045570) list_accented_list_pane

0x8c7e,	// (0x0004a413) list_single_accented_list_pane_ParamLimits

0x8c7e,	// (0x0004a413) list_single_accented_list_pane

0x4941,	// (0x000460d6) list_highlight_pane_cp10

0x8c8f,	// (0x0004a424) list_single_accented_list_pane_t1

0xcaec,	// (0x0004e281) popup_slider_window_ParamLimits

0xcaec,	// (0x0004e281) popup_slider_window

0x88c9,	// (0x0004a05e) aid_indentation_list_msg

0xe686,	// (0x0004fe1b) bg_popup_window_pane_cp19

0x8dbb,	// (0x0004a550) popup_slider_window_g1

0x8dd7,	// (0x0004a56c) popup_slider_window_g2

0x8df3,	// (0x0004a588) popup_slider_window_g3

0x0005,

0xfcae,	// (0x00051443) popup_slider_window_g

0x8e59,	// (0x0004a5ee) popup_slider_window_t1

0x8ecd,	// (0x0004a662) small_volume_slider_vertical_pane

0x77c0,	// (0x00048f55) small_volume_slider_vertical_pane_g1

0x77c0,	// (0x00048f55) small_volume_slider_vertical_pane_g2

0x8ee9,	// (0x0004a67e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc0,	// (0x00051455) small_volume_slider_vertical_pane_g

0xbd83,	// (0x0004d518) area_side_right_pane_ParamLimits

0xbd83,	// (0x0004d518) area_side_right_pane

0xcd7f,	// (0x0004e514) aid_size_side_button_ParamLimits

0xcd7f,	// (0x0004e514) aid_size_side_button

0xcd98,	// (0x0004e52d) grid_sctrl_middle_pane_ParamLimits

0xcd98,	// (0x0004e52d) grid_sctrl_middle_pane

0x2688,	// (0x00043e1d) sctrl_sk_bottom_pane

0x2699,	// (0x00043e2e) sctrl_sk_top_pane

0x26ab,	// (0x00043e40) aid_touch_sctrl_top

0x3670,	// (0x00044e05) bg_sctrl_sk_pane_ParamLimits

0x3670,	// (0x00044e05) bg_sctrl_sk_pane

0x26b8,	// (0x00043e4d) sctrl_sk_top_pane_g1

0x26c5,	// (0x00043e5a) sctrl_sk_top_pane_t1

0x26ab,	// (0x00043e40) aid_touch_sctrl_bottom

0x3670,	// (0x00044e05) bg_sctrl_sk_pane_cp_ParamLimits

0x3670,	// (0x00044e05) bg_sctrl_sk_pane_cp

0x26e0,	// (0x00043e75) sctrl_sk_bottom_pane_g1

0x26c5,	// (0x00043e5a) sctrl_sk_bottom_pane_t1

0xcdb2,	// (0x0004e547) cell_sctrl_middle_pane_ParamLimits

0xcdb2,	// (0x0004e547) cell_sctrl_middle_pane

0xcdc3,	// (0x0004e558) aid_touch_sctrl_middle_ParamLimits

0xcdc3,	// (0x0004e558) aid_touch_sctrl_middle

0xcdd0,	// (0x0004e565) bg_sctrl_middle_pane_ParamLimits

0xcdd0,	// (0x0004e565) bg_sctrl_middle_pane

0x8f71,	// (0x0004a706) cell_sctrl_middle_pane_g1_ParamLimits

0x8f71,	// (0x0004a706) cell_sctrl_middle_pane_g1

0xcdde,	// (0x0004e573) cell_sctrl_middle_pane_g2_ParamLimits

0xcdde,	// (0x0004e573) cell_sctrl_middle_pane_g2

0x0001,

0xfccc,	// (0x00051461) cell_sctrl_middle_pane_g_ParamLimits

0xfccc,	// (0x00051461) cell_sctrl_middle_pane_g

0x518f,	// (0x00046924) bg_sctrl_middle_pane_g1

0x5197,	// (0x0004692c) bg_sctrl_middle_pane_g2

0x519f,	// (0x00046934) bg_sctrl_middle_pane_g3

0x51a7,	// (0x0004693c) bg_sctrl_middle_pane_g4

0x51af,	// (0x00046944) bg_sctrl_middle_pane_g5

0x51b7,	// (0x0004694c) bg_sctrl_middle_pane_g6

0x51bf,	// (0x00046954) bg_sctrl_middle_pane_g7

0x51c7,	// (0x0004695c) bg_sctrl_middle_pane_g8

0x0007,

0xfcd1,	// (0x00051466) bg_sctrl_middle_pane_g

0x51cf,	// (0x00046964) bg_sctrl_middle_pane_g8_copy1

0x518f,	// (0x00046924) bg_sctrl_sk_pane_g1

0x5197,	// (0x0004692c) bg_sctrl_sk_pane_g2

0x519f,	// (0x00046934) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00050fd6) bg_sctrl_sk_pane_g

0x3ba3,	// (0x00045338) aid_size_touch_scroll_bar

0x51a7,	// (0x0004693c) bg_sctrl_sk_pane_g4

0x51af,	// (0x00046944) bg_sctrl_sk_pane_g5

0x51b7,	// (0x0004694c) bg_sctrl_sk_pane_g6

0x51bf,	// (0x00046954) bg_sctrl_sk_pane_g7

0x51c7,	// (0x0004695c) bg_sctrl_sk_pane_g8

0x51cf,	// (0x00046964) bg_sctrl_sk_pane_g9

0x173d,	// (0x00042ed2) popup_fep_china_hwr2_fs_candidate_window

0xc600,	// (0x0004dd95) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc600,	// (0x0004dd95) popup_fep_china_hwr2_fs_control_window

0x7a3e,	// (0x000491d3) sctrl_sk_top_pane_g2

0x0001,

0xfcc7,	// (0x0005145c) sctrl_sk_top_pane_g

0xe73e,	// (0x0004fed3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe73e,	// (0x0004fed3) aid_fep_china_hwr2_fs_cell

0xe752,	// (0x0004fee7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe752,	// (0x0004fee7) bg_popup_fep_shadow_pane_cp4

0xe769,	// (0x0004fefe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe769,	// (0x0004fefe) bg_popup_fep_shadow_pane_cp5

0xe77b,	// (0x0004ff10) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe77b,	// (0x0004ff10) popup_fep_china_hwr2_fs_control_bar_grid

0xe78f,	// (0x0004ff24) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f45,	// (0x0004a6da) aid_fep_china_hwr2_fs_candi_cell

0xd3b4,	// (0x0004eb49) bg_popup_fep_shadow_pane_cp6

0x8f4f,	// (0x0004a6e4) popup_fep_china_hwr2_fs_candidate_grid

0xe797,	// (0x0004ff2c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe797,	// (0x0004ff2c) cell_fep_china_hwr2_fs_funtion_grid

0x77c0,	// (0x00048f55) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f71,	// (0x0004a706) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f71,	// (0x0004a706) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f7f,	// (0x0004a714) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f7f,	// (0x0004a714) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce2,	// (0x00051477) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce2,	// (0x00051477) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7af,	// (0x0004ff44) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7af,	// (0x0004ff44) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe7c4,	// (0x0004ff59) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe7c4,	// (0x0004ff59) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce7,	// (0x0005147c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce7,	// (0x0005147c) cell_fep_china_hwr2_fs_funtion_grid_t

0x8fc6,	// (0x0004a75b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8fce,	// (0x0004a763) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8fd6,	// (0x0004a76b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcec,	// (0x00051481) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8fde,	// (0x0004a773) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8fde,	// (0x0004a773) cell_fep_china_hwr2_fs_candidate_grid

0x8ff7,	// (0x0004a78c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8fff,	// (0x0004a794) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77c0,	// (0x00048f55) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77c0,	// (0x00048f55) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0c,	// (0x000512a1) cell_fep_china_hwr2_fs_candidate_grid_g

0x9007,	// (0x0004a79c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4d85,	// (0x0004651a) clock_nsta_pane_cp_24_ParamLimits

0x4d85,	// (0x0004651a) clock_nsta_pane_cp_24

0x4e03,	// (0x00046598) indicator_nsta_pane_cp_24_ParamLimits

0x4e03,	// (0x00046598) indicator_nsta_pane_cp_24

0x5eaa,	// (0x0004763f) heading_pane_g1

0x0001,

0xf8a6,	// (0x0005103b) heading_pane_g

0x68e2,	// (0x00048077) grid_sct_catagory_button_pane

0x6912,	// (0x000480a7) scroll_pane_cp5_ParamLimits

0x73bd,	// (0x00048b52) button_value_adjust_pane_cp5_ParamLimits

0x73bd,	// (0x00048b52) button_value_adjust_pane_cp5

0x749c,	// (0x00048c31) form2_midp_time_pane_ParamLimits

0x9015,	// (0x0004a7aa) cell_sct_catagory_button_pane_ParamLimits

0x9015,	// (0x0004a7aa) cell_sct_catagory_button_pane

0x7785,	// (0x00048f1a) bg_button_pane_cp01_ParamLimits

0x7785,	// (0x00048f1a) bg_button_pane_cp01

0x77c0,	// (0x00048f55) cell_sct_catagory_button_pane_g1

0xcb65,	// (0x0004e2fa) popup_tb_extension_window

0xe7e0,	// (0x0004ff75) aid_size_cell_ext_ParamLimits

0xe7e0,	// (0x0004ff75) aid_size_cell_ext

0x39e5,	// (0x0004517a) bg_tb_trans_pane_cp1_ParamLimits

0x39e5,	// (0x0004517a) bg_tb_trans_pane_cp1

0xe806,	// (0x0004ff9b) grid_tb_ext_pane_ParamLimits

0xe806,	// (0x0004ff9b) grid_tb_ext_pane

0xe841,	// (0x0004ffd6) cell_tb_ext_pane_ParamLimits

0xe841,	// (0x0004ffd6) cell_tb_ext_pane

0xe869,	// (0x0004fffe) cell_tb_ext_pane_g1_ParamLimits

0xe869,	// (0x0004fffe) cell_tb_ext_pane_g1

0x90a9,	// (0x0004a83e) cell_tb_ext_pane_t1

0x3670,	// (0x00044e05) list_highlight_pane_cp11_ParamLimits

0x3670,	// (0x00044e05) list_highlight_pane_cp11

0xbe2a,	// (0x0004d5bf) popup_uni_indicator_window_ParamLimits

0xbe2a,	// (0x0004d5bf) popup_uni_indicator_window

0x3c80,	// (0x00045415) bg_popup_sub_pane_cp14

0x90c4,	// (0x0004a859) list_uniindi_pane

0x90d0,	// (0x0004a865) uniindi_top_pane

0x3670,	// (0x00044e05) bg_uniindi_top_pane

0x90ef,	// (0x0004a884) uniindi_top_pane_g1

0x9105,	// (0x0004a89a) uniindi_top_pane_g2

0x0003,

0xfcf3,	// (0x00051488) uniindi_top_pane_g

0x912f,	// (0x0004a8c4) uniindi_top_pane_t1

0x9159,	// (0x0004a8ee) list_single_uniindi_pane_ParamLimits

0x9159,	// (0x0004a8ee) list_single_uniindi_pane

0x77c0,	// (0x00048f55) bg_uniindi_top_pane_g1

0x916c,	// (0x0004a901) list_single_uniindi_pane_g1

0x917f,	// (0x0004a914) list_single_uniindi_pane_t1

0xd3b4,	// (0x0004eb49) control_bg_pane

0x91a4,	// (0x0004a939) bg_sctrl_sk_pane_cp1

0x91ad,	// (0x0004a942) bg_sctrl_sk_pane_cp2

0x91b6,	// (0x0004a94b) control_bg_pane_g1

0x91bf,	// (0x0004a954) control_bg_pane_g2

0x0001,

0xfcfc,	// (0x00051491) control_bg_pane_g

0x7207,	// (0x0004899c) cell_indicator_nsta_pane_g1_ParamLimits

0xdf4b,	// (0x0004f6e0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa70,	// (0x00051205) cell_indicator_nsta_pane_g_ParamLimits

0x08cc,	// (0x00042061) form2_midp_time_pane_t1_ParamLimits

0x21df,	// (0x00043974) main_idle_act4_pane_ParamLimits

0x21df,	// (0x00043974) main_idle_act4_pane

0xcb65,	// (0x0004e2fa) popup_tb_extension_window_ParamLimits

0xe828,	// (0x0004ffbd) tb_ext_find_pane_ParamLimits

0xe828,	// (0x0004ffbd) tb_ext_find_pane

0x91c8,	// (0x0004a95d) ai_gene_pane_1_cp1

0x4a88,	// (0x0004621d) ai_gene_pane_2_cp1

0x91d0,	// (0x0004a965) list_single_idle_plugin_calendar_pane

0x91d9,	// (0x0004a96e) list_single_idle_plugin_notification_pane

0x91e2,	// (0x0004a977) list_single_idle_plugin_player_pane

0xe886,	// (0x0005001b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe886,	// (0x0005001b) list_single_idle_plugin_shortcut_pane

0xe8ae,	// (0x00050043) main_idle_act4_pane_t1

0xe8c4,	// (0x00050059) main_idle_act4_pane_t2

0x0001,

0xfd01,	// (0x00051496) main_idle_act4_pane_t

0xe8da,	// (0x0005006f) middle_sk_idle_act4_pane_ParamLimits

0xe8da,	// (0x0005006f) middle_sk_idle_act4_pane

0xe8f6,	// (0x0005008b) popup_clock_digital_analogue_window_cp2

0xe91e,	// (0x000500b3) shortcut_wheel_idle_act4_pane_ParamLimits

0xe91e,	// (0x000500b3) shortcut_wheel_idle_act4_pane

0x77c0,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g1

0x77c0,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g2

0x77c0,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g3

0x77c0,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g4

0x77c0,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g5

0x9275,	// (0x0004aa0a) shortcut_wheel_idle_act4_pane_g6

0x927d,	// (0x0004aa12) shortcut_wheel_idle_act4_pane_g7

0x9285,	// (0x0004aa1a) shortcut_wheel_idle_act4_pane_g8

0x928d,	// (0x0004aa22) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd06,	// (0x0005149b) shortcut_wheel_idle_act4_pane_g

0xe0be,	// (0x0004f853) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0be,	// (0x0004f853) middle_sk_idle_act4_pane_g1

0xe99b,	// (0x00050130) middle_sk_idle_act4_pane_g2_ParamLimits

0xe99b,	// (0x00050130) middle_sk_idle_act4_pane_g2

0x0001,

0xfd29,	// (0x000514be) middle_sk_idle_act4_pane_g_ParamLimits

0xfd29,	// (0x000514be) middle_sk_idle_act4_pane_g

0xe9b3,	// (0x00050148) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9b3,	// (0x00050148) middle_sk_idle_act4_pane_t1

0xe9e2,	// (0x00050177) grid_ai_shortcut_pane_ParamLimits

0xe9e2,	// (0x00050177) grid_ai_shortcut_pane

0xe9ff,	// (0x00050194) list_highlight_pane_cp16_ParamLimits

0xe9ff,	// (0x00050194) list_highlight_pane_cp16

0xea0c,	// (0x000501a1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea0c,	// (0x000501a1) list_single_idle_plugin_shortcut_pane_g1

0xea18,	// (0x000501ad) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea18,	// (0x000501ad) list_single_idle_plugin_shortcut_pane_g2

0xea34,	// (0x000501c9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea34,	// (0x000501c9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2e,	// (0x000514c3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2e,	// (0x000514c3) list_single_idle_plugin_shortcut_pane_g

0xea49,	// (0x000501de) cell_ai_shortcut_pane_ParamLimits

0xea49,	// (0x000501de) cell_ai_shortcut_pane

0xea5f,	// (0x000501f4) cell_ai_shortcut_pane_g1_ParamLimits

0xea5f,	// (0x000501f4) cell_ai_shortcut_pane_g1

0x91c8,	// (0x0004a95d) ai_gene_pane_1_cp2

0x93bd,	// (0x0004ab52) ai_gene_pane_2_cp2

0x93c5,	// (0x0004ab5a) list_highlight_pane_cp15

0x93ce,	// (0x0004ab63) list_single_idle_plugin_calendar_pane_g1

0x93c5,	// (0x0004ab5a) list_highlight_pane_cp17

0x93d6,	// (0x0004ab6b) list_single_idle_plugin_calendar_pane_g1_copy1

0x93de,	// (0x0004ab73) list_single_idle_plugin_player_pane_g1

0x6b3b,	// (0x000482d0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd35,	// (0x000514ca) list_single_idle_plugin_player_pane_g

0x93e6,	// (0x0004ab7b) list_single_idle_plugin_player_pane_t1

0x93f4,	// (0x0004ab89) list_single_idle_plugin_player_pane_t2

0x9402,	// (0x0004ab97) list_single_idle_plugin_player_pane_t3

0x9410,	// (0x0004aba5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3a,	// (0x000514cf) list_single_idle_plugin_player_pane_t

0x941e,	// (0x0004abb3) wait_bar_pane_cp15

0x9426,	// (0x0004abbb) grid_ai_notification_pane

0x6b3b,	// (0x000482d0) list_single_idle_plugin_notification_pane_g1

0xea81,	// (0x00050216) cell_ai_notification_pane_ParamLimits

0xea81,	// (0x00050216) cell_ai_notification_pane

0x943c,	// (0x0004abd1) cell_ai_notification_pane_g1

0x9444,	// (0x0004abd9) cell_ai_notification_pane_t1

0xea8e,	// (0x00050223) tb_ext_find_button_pane

0xea96,	// (0x0005022b) tb_ext_find_pane_g1

0xea9e,	// (0x00050233) tb_ext_find_pane_t1

0x4309,	// (0x00045a9e) tb_ext_find_button_pane_g1

0x9470,	// (0x0004ac05) tb_ext_find_button_pane_g2

0x0001,

0xfd43,	// (0x000514d8) tb_ext_find_button_pane_g

0xe8ae,	// (0x00050043) main_idle_act4_pane_t1_ParamLimits

0xe8c4,	// (0x00050059) main_idle_act4_pane_t2_ParamLimits

0xfd01,	// (0x00051496) main_idle_act4_pane_t_ParamLimits

0xe8f6,	// (0x0005008b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe90e,	// (0x000500a3) sat_plugin_idle_act4_pane_ParamLimits

0xe90e,	// (0x000500a3) sat_plugin_idle_act4_pane

0xeaac,	// (0x00050241) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeaac,	// (0x00050241) sat_plugin_idle_act4_pane_t1

0xeac4,	// (0x00050259) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeac4,	// (0x00050259) sat_plugin_idle_act4_pane_t2

0xeadc,	// (0x00050271) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeadc,	// (0x00050271) sat_plugin_idle_act4_pane_t3

0xeaf4,	// (0x00050289) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeaf4,	// (0x00050289) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd48,	// (0x000514dd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd48,	// (0x000514dd) sat_plugin_idle_act4_pane_t

0x0dd2,	// (0x00042567) popup_battery_window_ParamLimits

0x0dd2,	// (0x00042567) popup_battery_window

0x3670,	// (0x00044e05) bg_popup_sub_pane_cp25_ParamLimits

0x3670,	// (0x00044e05) bg_popup_sub_pane_cp25

0x94c5,	// (0x0004ac5a) popup_battery_window_g1_ParamLimits

0x94c5,	// (0x0004ac5a) popup_battery_window_g1

0x94d1,	// (0x0004ac66) popup_battery_window_t1_ParamLimits

0x94d1,	// (0x0004ac66) popup_battery_window_t1

0x94e3,	// (0x0004ac78) popup_battery_window_t2_ParamLimits

0x94e3,	// (0x0004ac78) popup_battery_window_t2

0x0001,

0xfd51,	// (0x000514e6) popup_battery_window_t_ParamLimits

0xfd51,	// (0x000514e6) popup_battery_window_t

0xd46c,	// (0x0004ec01) midp_canvas_pane_ParamLimits

0xd4c9,	// (0x0004ec5e) midp_keypad_pane_ParamLimits

0xd4c9,	// (0x0004ec5e) midp_keypad_pane

0x4c65,	// (0x000463fa) main_midp_pane_ParamLimits

0x7281,	// (0x00048a16) signal_pane_g2_cp_ParamLimits

0xeb0c,	// (0x000502a1) aid_size_cell_midp_keypad_ParamLimits

0xeb0c,	// (0x000502a1) aid_size_cell_midp_keypad

0xeb2a,	// (0x000502bf) midp_keyp_game_grid_pane_ParamLimits

0xeb2a,	// (0x000502bf) midp_keyp_game_grid_pane

0xeb51,	// (0x000502e6) midp_keyp_rocker_pane_ParamLimits

0xeb51,	// (0x000502e6) midp_keyp_rocker_pane

0xeba2,	// (0x00050337) midp_keyp_sk_left_pane_ParamLimits

0xeba2,	// (0x00050337) midp_keyp_sk_left_pane

0xebf6,	// (0x0005038b) midp_keyp_sk_right_pane_ParamLimits

0xebf6,	// (0x0005038b) midp_keyp_sk_right_pane

0xd3b4,	// (0x0004eb49) bg_button_pane_cp03

0xec4a,	// (0x000503df) midp_keyp_sk_left_pane_g1

0xd3b4,	// (0x0004eb49) bg_button_pane_cp04

0xec4a,	// (0x000503df) midp_keyp_sk_right_pane_g1

0x77c0,	// (0x00048f55) midp_keyp_rocker_pane_g1

0xec53,	// (0x000503e8) keyp_game_cell_pane_ParamLimits

0xec53,	// (0x000503e8) keyp_game_cell_pane

0xd3b4,	// (0x0004eb49) bg_button_pane_cp02

0xec77,	// (0x0005040c) keyp_game_cell_pane_g1

0xbdc5,	// (0x0004d55a) popup_fep_vkb2_window_ParamLimits

0xbdc5,	// (0x0004d55a) popup_fep_vkb2_window

0xcdea,	// (0x0004e57f) aid_size_cell_vkb2_ParamLimits

0xcdea,	// (0x0004e57f) aid_size_cell_vkb2

0xce16,	// (0x0004e5ab) popup_fep_vkb2_window_g1_ParamLimits

0xce16,	// (0x0004e5ab) popup_fep_vkb2_window_g1

0xce66,	// (0x0004e5fb) vkb2_area_bottom_pane_ParamLimits

0xce66,	// (0x0004e5fb) vkb2_area_bottom_pane

0xceba,	// (0x0004e64f) vkb2_area_keypad_pane_ParamLimits

0xceba,	// (0x0004e64f) vkb2_area_keypad_pane

0xcf02,	// (0x0004e697) vkb2_area_top_pane_ParamLimits

0xcf02,	// (0x0004e697) vkb2_area_top_pane

0xcf8e,	// (0x0004e723) vkb2_top_entry_pane_ParamLimits

0xcf8e,	// (0x0004e723) vkb2_top_entry_pane

0xcfbb,	// (0x0004e750) vkb2_top_grid_left_pane_ParamLimits

0xcfbb,	// (0x0004e750) vkb2_top_grid_left_pane

0xcfdc,	// (0x0004e771) vkb2_top_grid_right_pane_ParamLimits

0xcfdc,	// (0x0004e771) vkb2_top_grid_right_pane

0x293d,	// (0x000440d2) vkb2_cell_keypad_pane_ParamLimits

0x293d,	// (0x000440d2) vkb2_cell_keypad_pane

0xd024,	// (0x0004e7b9) vkb2_area_bottom_grid_pane_ParamLimits

0xd024,	// (0x0004e7b9) vkb2_area_bottom_grid_pane

0xd04e,	// (0x0004e7e3) vkb2_area_bottom_pane_g1_ParamLimits

0xd04e,	// (0x0004e7e3) vkb2_area_bottom_pane_g1

0xd074,	// (0x0004e809) vkb2_area_bottom_pane_g2_ParamLimits

0xd074,	// (0x0004e809) vkb2_area_bottom_pane_g2

0xd0a5,	// (0x0004e83a) vkb2_area_bottom_pane_g3_ParamLimits

0xd0a5,	// (0x0004e83a) vkb2_area_bottom_pane_g3

0x0002,

0xfd56,	// (0x000514eb) vkb2_area_bottom_pane_g_ParamLimits

0xfd56,	// (0x000514eb) vkb2_area_bottom_pane_g

0x2ae7,	// (0x0004427c) vkb2_top_cell_left_pane_ParamLimits

0x2ae7,	// (0x0004427c) vkb2_top_cell_left_pane

0xec80,	// (0x00050415) vkb2_top_entry_pane_g1_ParamLimits

0xec80,	// (0x00050415) vkb2_top_entry_pane_g1

0xec8e,	// (0x00050423) vkb2_top_entry_pane_t1_ParamLimits

0xec8e,	// (0x00050423) vkb2_top_entry_pane_t1

0x9694,	// (0x0004ae29) vkb2_top_entry_pane_t2_ParamLimits

0x9694,	// (0x0004ae29) vkb2_top_entry_pane_t2

0x96c6,	// (0x0004ae5b) vkb2_top_entry_pane_t3_ParamLimits

0x96c6,	// (0x0004ae5b) vkb2_top_entry_pane_t3

0x0002,

0xfd5d,	// (0x000514f2) vkb2_top_entry_pane_t_ParamLimits

0xfd5d,	// (0x000514f2) vkb2_top_entry_pane_t

0xd10f,	// (0x0004e8a4) vkb2_top_grid_right_pane_g1_ParamLimits

0xd10f,	// (0x0004e8a4) vkb2_top_grid_right_pane_g1

0x2b4a,	// (0x000442df) vkb2_top_grid_right_pane_g2_ParamLimits

0x2b4a,	// (0x000442df) vkb2_top_grid_right_pane_g2

0x2b62,	// (0x000442f7) vkb2_top_grid_right_pane_g3_ParamLimits

0x2b62,	// (0x000442f7) vkb2_top_grid_right_pane_g3

0xd125,	// (0x0004e8ba) vkb2_top_grid_right_pane_g4_ParamLimits

0xd125,	// (0x0004e8ba) vkb2_top_grid_right_pane_g4

0x0003,

0xfd64,	// (0x000514f9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd64,	// (0x000514f9) vkb2_top_grid_right_pane_g

0x2b90,	// (0x00044325) vkb2_top_cell_left_pane_g1

0x2ba7,	// (0x0004433c) vkb2_cell_keypad_pane_g1_ParamLimits

0x2ba7,	// (0x0004433c) vkb2_cell_keypad_pane_g1

0x96ea,	// (0x0004ae7f) vkb2_cell_keypad_pane_t1_ParamLimits

0x96ea,	// (0x0004ae7f) vkb2_cell_keypad_pane_t1

0x2bb5,	// (0x0004434a) vkb2_cell_bottom_grid_pane_ParamLimits

0x2bb5,	// (0x0004434a) vkb2_cell_bottom_grid_pane

0x2bee,	// (0x00044383) vkb2_cell_bottom_grid_pane_g1

0xe93f,	// (0x000500d4) aid_call2_pane_cp02

0xe947,	// (0x000500dc) aid_call_pane_cp02

0xe94f,	// (0x000500e4) clock_digital_number_pane_cp10

0xe957,	// (0x000500ec) clock_digital_number_pane_cp11

0xe95f,	// (0x000500f4) clock_digital_number_pane_cp12

0xe967,	// (0x000500fc) clock_digital_number_pane_cp13

0xe96f,	// (0x00050104) clock_digital_separator_pane_cp10

0x4309,	// (0x00045a9e) popup_clock_digital_analogue_window_cp2_g1

0x4309,	// (0x00045a9e) popup_clock_digital_analogue_window_cp2_g2

0xe977,	// (0x0005010c) popup_clock_digital_analogue_window_cp2_g3

0x4309,	// (0x00045a9e) popup_clock_digital_analogue_window_cp2_g4

0xe977,	// (0x0005010c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd19,	// (0x000514ae) popup_clock_digital_analogue_window_cp2_g

0xe97f,	// (0x00050114) popup_clock_digital_analogue_window_cp2_t1

0xe98d,	// (0x00050122) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd24,	// (0x000514b9) popup_clock_digital_analogue_window_cp2_t

0x77c0,	// (0x00048f55) clock_digital_number_pane_cp10_g1

0x77c0,	// (0x00048f55) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0c,	// (0x000512a1) clock_digital_number_pane_cp10_g

0x77c0,	// (0x00048f55) clock_digital_separator_pane_cp10_g1

0x77c0,	// (0x00048f55) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0c,	// (0x000512a1) clock_digital_separator_pane_cp10_g

0x9111,	// (0x0004a8a6) uniindi_top_pane_g3

0x9122,	// (0x0004a8b7) uniindi_top_pane_g4

0x29c8,	// (0x0004415d) vkb2_row_keypad_pane_ParamLimits

0x29c8,	// (0x0004415d) vkb2_row_keypad_pane

0x2c0e,	// (0x000443a3) vkb2_cell_t_keypad_pane_ParamLimits

0x2c0e,	// (0x000443a3) vkb2_cell_t_keypad_pane

0x2c1e,	// (0x000443b3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2c1e,	// (0x000443b3) vkb2_cell_t_keypad_pane_cp08

0x2c31,	// (0x000443c6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2c31,	// (0x000443c6) vkb2_cell_t_keypad_pane_cp09

0x2c45,	// (0x000443da) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2c45,	// (0x000443da) vkb2_cell_t_keypad_pane_cp01

0x2c56,	// (0x000443eb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2c56,	// (0x000443eb) vkb2_cell_t_keypad_pane_cp02

0x2c67,	// (0x000443fc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2c67,	// (0x000443fc) vkb2_cell_t_keypad_pane_cp03

0x2c78,	// (0x0004440d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2c78,	// (0x0004440d) vkb2_cell_t_keypad_pane_cp04

0x2c89,	// (0x0004441e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2c89,	// (0x0004441e) vkb2_cell_t_keypad_pane_cp05

0x2c9a,	// (0x0004442f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2c9a,	// (0x0004442f) vkb2_cell_t_keypad_pane_cp06

0x2cab,	// (0x00044440) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2cab,	// (0x00044440) vkb2_cell_t_keypad_pane_cp07

0x2cbc,	// (0x00044451) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2cbc,	// (0x00044451) vkb2_cell_t_keypad_pane_cp10

0x7a3e,	// (0x000491d3) vkb2_cell_t_keypad_pane_g1

0x9701,	// (0x0004ae96) vkb2_cell_t_keypad_pane_t1

0xd3b4,	// (0x0004eb49) popup_grid_graphic2_window

0xecc7,	// (0x0005045c) aid_size_cell_graphic2_ParamLimits

0xecc7,	// (0x0005045c) aid_size_cell_graphic2

0xed05,	// (0x0005049a) bg_popup_window_pane_cp21_ParamLimits

0xed05,	// (0x0005049a) bg_popup_window_pane_cp21

0xed13,	// (0x000504a8) graphic2_pages_pane_ParamLimits

0xed13,	// (0x000504a8) graphic2_pages_pane

0xed69,	// (0x000504fe) grid_graphic2_control_pane_ParamLimits

0xed69,	// (0x000504fe) grid_graphic2_control_pane

0xedb1,	// (0x00050546) grid_graphic2_pane_ParamLimits

0xedb1,	// (0x00050546) grid_graphic2_pane

0xee38,	// (0x000505cd) cell_graphic2_pane

0xd3b4,	// (0x0004eb49) main_comp_mode_pane

0x897d,	// (0x0004a112) list_ai3_gene_pane_ParamLimits

0xe686,	// (0x0004fe1b) bg_popup_window_pane_cp19_ParamLimits

0x8d5f,	// (0x0004a4f4) bg_touch_area_indi_pane_ParamLimits

0x8d5f,	// (0x0004a4f4) bg_touch_area_indi_pane

0x8d75,	// (0x0004a50a) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d75,	// (0x0004a50a) bg_touch_area_indi_pane_cp01

0x8d8b,	// (0x0004a520) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d8b,	// (0x0004a520) bg_touch_area_indi_pane_cp02

0x8da1,	// (0x0004a536) bg_touch_area_indi_pane_cp03_ParamLimits

0x8da1,	// (0x0004a536) bg_touch_area_indi_pane_cp03

0x8dbb,	// (0x0004a550) popup_slider_window_g1_ParamLimits

0x8dd7,	// (0x0004a56c) popup_slider_window_g2_ParamLimits

0x8df3,	// (0x0004a588) popup_slider_window_g3_ParamLimits

0xfcae,	// (0x00051443) popup_slider_window_g_ParamLimits

0x8e59,	// (0x0004a5ee) popup_slider_window_t1_ParamLimits

0x8ecd,	// (0x0004a662) small_volume_slider_vertical_pane_ParamLimits

0xee38,	// (0x000505cd) cell_graphic2_pane_ParamLimits

0xee93,	// (0x00050628) bg_button_pane_cp10_ParamLimits

0xee93,	// (0x00050628) bg_button_pane_cp10

0xeea6,	// (0x0005063b) bg_button_pane_cp11_ParamLimits

0xeea6,	// (0x0005063b) bg_button_pane_cp11

0xeeb9,	// (0x0005064e) graphic2_pages_pane_g1_ParamLimits

0xeeb9,	// (0x0005064e) graphic2_pages_pane_g1

0xeed4,	// (0x00050669) graphic2_pages_pane_g2_ParamLimits

0xeed4,	// (0x00050669) graphic2_pages_pane_g2

0x0001,

0xfd72,	// (0x00051507) graphic2_pages_pane_g_ParamLimits

0xfd72,	// (0x00051507) graphic2_pages_pane_g

0xeeec,	// (0x00050681) graphic2_pages_pane_t1_ParamLimits

0xeeec,	// (0x00050681) graphic2_pages_pane_t1

0xef04,	// (0x00050699) cell_graphic2_control_pane_ParamLimits

0xef04,	// (0x00050699) cell_graphic2_control_pane

0xef36,	// (0x000506cb) cell_graphic2_pane_g1_ParamLimits

0xef36,	// (0x000506cb) cell_graphic2_pane_g1

0xe0cc,	// (0x0004f861) cell_graphic2_pane_g2_ParamLimits

0xe0cc,	// (0x0004f861) cell_graphic2_pane_g2

0xe358,	// (0x0004faed) cell_graphic2_pane_g3_ParamLimits

0xe358,	// (0x0004faed) cell_graphic2_pane_g3

0xe0d9,	// (0x0004f86e) cell_graphic2_pane_g4_ParamLimits

0xe0d9,	// (0x0004f86e) cell_graphic2_pane_g4

0xef43,	// (0x000506d8) cell_graphic2_pane_g5_ParamLimits

0xef43,	// (0x000506d8) cell_graphic2_pane_g5

0x0004,

0xfd77,	// (0x0005150c) cell_graphic2_pane_g_ParamLimits

0xfd77,	// (0x0005150c) cell_graphic2_pane_g

0xef60,	// (0x000506f5) cell_graphic2_pane_t1_ParamLimits

0xef60,	// (0x000506f5) cell_graphic2_pane_t1

0x5e9e,	// (0x00047633) grid_highlight_pane_cp11_ParamLimits

0x5e9e,	// (0x00047633) grid_highlight_pane_cp11

0x3670,	// (0x00044e05) bg_button_pane_cp05

0xefaa,	// (0x0005073f) cell_graphic2_control_pane_g1

0x77c0,	// (0x00048f55) bg_touch_area_indi_pane_g1

0x99da,	// (0x0004b16f) aid_cmod_rocker_key_size

0x99e4,	// (0x0004b179) aid_cmode_itu_key_size

0x99ee,	// (0x0004b183) main_cmode_video_pane

0x99f8,	// (0x0004b18d) main_comp_mode_itu_pane

0x9a04,	// (0x0004b199) main_comp_mode_rocker_pane

0x9a10,	// (0x0004b1a5) cell_cmode_rocker_pane_ParamLimits

0x9a10,	// (0x0004b1a5) cell_cmode_rocker_pane

0x9a22,	// (0x0004b1b7) cell_cmode_itu_pane_ParamLimits

0x9a22,	// (0x0004b1b7) cell_cmode_itu_pane

0x3c80,	// (0x00045415) bg_button_pane_cp06_ParamLimits

0x3c80,	// (0x00045415) bg_button_pane_cp06

0x7a3e,	// (0x000491d3) cell_cmode_rocker_pane_g1_ParamLimits

0x7a3e,	// (0x000491d3) cell_cmode_rocker_pane_g1

0x8f71,	// (0x0004a706) cell_cmode_rocker_pane_g2_ParamLimits

0x8f71,	// (0x0004a706) cell_cmode_rocker_pane_g2

0x0001,

0xfd87,	// (0x0005151c) cell_cmode_rocker_pane_g_ParamLimits

0xfd87,	// (0x0005151c) cell_cmode_rocker_pane_g

0xd3b4,	// (0x0004eb49) bg_button_pane_cp07

0x9a37,	// (0x0004b1cc) cell_cmode_itu_pane_g1

0x9a40,	// (0x0004b1d5) cell_cmode_itu_pane_t1

0x9a4e,	// (0x0004b1e3) cell_cmode_itu_pane_t2

0x0001,

0xfd8c,	// (0x00051521) cell_cmode_itu_pane_t

0x9194,	// (0x0004a929) aid_touch_ctrl_left

0x919c,	// (0x0004a931) aid_touch_ctrl_right

0xd3b4,	// (0x0004eb49) compa_mode_pane

0xefce,	// (0x00050763) aid_cmod_rocker_key_size_cp

0xefd8,	// (0x0005076d) aid_cmode_itu_key_size_cp

0x9a70,	// (0x0004b205) compa_mode_pane_g1

0x9a78,	// (0x0004b20d) compa_mode_pane_g2

0x9a80,	// (0x0004b215) compa_mode_pane_g3

0x0002,

0xfd91,	// (0x00051526) compa_mode_pane_g

0xefe2,	// (0x00050777) main_comp_mode_itu_pane_cp

0xefea,	// (0x0005077f) main_comp_mode_rocker_pane_cp

0xeff2,	// (0x00050787) cell_cmode_itu_pane_cp_ParamLimits

0xeff2,	// (0x00050787) cell_cmode_itu_pane_cp

0xf007,	// (0x0005079c) cell_cmode_rocker_pane_cp_ParamLimits

0xf007,	// (0x0005079c) cell_cmode_rocker_pane_cp

0x3c80,	// (0x00045415) bg_button_pane_cp06_cp_ParamLimits

0x3c80,	// (0x00045415) bg_button_pane_cp06_cp

0x7a3e,	// (0x000491d3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a3e,	// (0x000491d3) cell_cmode_rocker_pane_g1_cp

0x77c0,	// (0x00048f55) cell_cmode_rocker_pane_g2_cp

0xd3b4,	// (0x0004eb49) bg_button_pane_cp07_cp

0xf019,	// (0x000507ae) cell_cmode_itu_pane_g1_cp

0xf022,	// (0x000507b7) cell_cmode_itu_pane_t1_cp

0xf022,	// (0x000507b7) cell_cmode_itu_pane_t2_cp

0xdd50,	// (0x0004f4e5) settings_code_pane_cp2

0x33e7,	// (0x00044b7c) bg_popup_window_pane_cp3_ParamLimits

0x3870,	// (0x00045005) heading_pane_cp3_ParamLimits

0x387f,	// (0x00045014) listscroll_popup_graphic_pane_ParamLimits

0x21ed,	// (0x00043982) fep_hwr_aid_pane_ParamLimits

0x26ab,	// (0x00043e40) aid_touch_sctrl_top_ParamLimits

0x26b8,	// (0x00043e4d) sctrl_sk_top_pane_g1_ParamLimits

0x7a3e,	// (0x000491d3) sctrl_sk_top_pane_g2_ParamLimits

0xfcc7,	// (0x0005145c) sctrl_sk_top_pane_g_ParamLimits

0x26c5,	// (0x00043e5a) sctrl_sk_top_pane_t1_ParamLimits

0x26ab,	// (0x00043e40) aid_touch_sctrl_bottom_ParamLimits

0x26c5,	// (0x00043e5a) sctrl_sk_bottom_pane_t1_ParamLimits

0x90dd,	// (0x0004a872) aid_area_touch_clock

0xcf4e,	// (0x0004e6e3) aid_vkb2_area_top_pane_cell_ParamLimits

0xcf4e,	// (0x0004e6e3) aid_vkb2_area_top_pane_cell

0xcffd,	// (0x0004e792) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcffd,	// (0x0004e792) aid_vkb2_area_bottom_pane_cell

0x964c,	// (0x0004ade1) popup_char_count_window

0x9acd,	// (0x0004b262) popup_char_count_window_g1

0x9ad6,	// (0x0004b26b) popup_char_count_window_g2

0x9adf,	// (0x0004b274) popup_char_count_window_g3

0x0002,

0xfd98,	// (0x0005152d) popup_char_count_window_g

0x9ae8,	// (0x0004b27d) popup_char_count_window_t1

0x275e,	// (0x00043ef3) popup_fep_char_preview_window_ParamLimits

0x275e,	// (0x00043ef3) popup_fep_char_preview_window

0xcf6e,	// (0x0004e703) vkb2_top_candi_pane_ParamLimits

0xcf6e,	// (0x0004e703) vkb2_top_candi_pane

0xf030,	// (0x000507c5) cell_vkb2_top_candi_pane_ParamLimits

0xf030,	// (0x000507c5) cell_vkb2_top_candi_pane

0x582a,	// (0x00046fbf) bg_popup_fep_char_preview_window_ParamLimits

0x582a,	// (0x00046fbf) bg_popup_fep_char_preview_window

0x2cd1,	// (0x00044466) popup_fep_char_preview_window_t1_ParamLimits

0x2cd1,	// (0x00044466) popup_fep_char_preview_window_t1

0x9b40,	// (0x0004b2d5) bg_popup_fep_char_preview_window_g1

0x9b48,	// (0x0004b2dd) bg_popup_fep_char_preview_window_g2

0x9b50,	// (0x0004b2e5) bg_popup_fep_char_preview_window_g3

0x9b58,	// (0x0004b2ed) bg_popup_fep_char_preview_window_g4

0x9b60,	// (0x0004b2f5) bg_popup_fep_char_preview_window_g5

0x9b68,	// (0x0004b2fd) bg_popup_fep_char_preview_window_g6

0x9b70,	// (0x0004b305) bg_popup_fep_char_preview_window_g7

0x9b78,	// (0x0004b30d) bg_popup_fep_char_preview_window_g8

0x9b80,	// (0x0004b315) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9f,	// (0x00051534) bg_popup_fep_char_preview_window_g

0x7a3e,	// (0x000491d3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a3e,	// (0x000491d3) cell_vkb2_top_candi_pane_g1

0x7d55,	// (0x000494ea) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d55,	// (0x000494ea) cell_vkb2_top_candi_pane_g2

0x7d76,	// (0x0004950b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7d76,	// (0x0004950b) cell_vkb2_top_candi_pane_g3

0x2d13,	// (0x000444a8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2d13,	// (0x000444a8) cell_vkb2_top_candi_pane_g4

0x9b88,	// (0x0004b31d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9b88,	// (0x0004b31d) cell_vkb2_top_candi_pane_g5

0x8f71,	// (0x0004a706) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f71,	// (0x0004a706) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb4,	// (0x00051549) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb4,	// (0x00051549) cell_vkb2_top_candi_pane_g

0x2d34,	// (0x000444c9) cell_vkb2_top_candi_pane_t1

0x1f56,	// (0x000436eb) aid_size_touch_slider_mark_ParamLimits

0x1f56,	// (0x000436eb) aid_size_touch_slider_mark

0xed4f,	// (0x000504e4) grid_graphic2_catg_pane_ParamLimits

0xed4f,	// (0x000504e4) grid_graphic2_catg_pane

0xee0b,	// (0x000505a0) popup_grid_graphic2_window_t1_ParamLimits

0xee0b,	// (0x000505a0) popup_grid_graphic2_window_t1

0xee21,	// (0x000505b6) popup_grid_graphic2_window_t2_ParamLimits

0xee21,	// (0x000505b6) popup_grid_graphic2_window_t2

0x0001,

0xfd6d,	// (0x00051502) popup_grid_graphic2_window_t_ParamLimits

0xfd6d,	// (0x00051502) popup_grid_graphic2_window_t

0x3670,	// (0x00044e05) bg_button_pane_cp05_ParamLimits

0xefaa,	// (0x0005073f) cell_graphic2_control_pane_g1_ParamLimits

0xf090,	// (0x00050825) cell_graphic2_catg_pane_ParamLimits

0xf090,	// (0x00050825) cell_graphic2_catg_pane

0xd3b4,	// (0x0004eb49) bg_button_pane_cp12

0xf0a2,	// (0x00050837) cell_graphic2_catg_pane_g1

0x90a9,	// (0x0004a83e) cell_tb_ext_pane_t1_ParamLimits

0x2b07,	// (0x0004429c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2b07,	// (0x0004429c) vkb2_top_cell_right_narrow_pane

0x2b1f,	// (0x000442b4) vkb2_top_cell_right_wide_pane_ParamLimits

0x2b1f,	// (0x000442b4) vkb2_top_cell_right_wide_pane

0x21df,	// (0x00043974) bg_vkb2_func_pane_ParamLimits

0x21df,	// (0x00043974) bg_vkb2_func_pane

0x2b90,	// (0x00044325) vkb2_top_cell_left_pane_g1_ParamLimits

0x21df,	// (0x00043974) bg_vkb2_fuc_pane_cp03_ParamLimits

0x21df,	// (0x00043974) bg_vkb2_fuc_pane_cp03

0x2bee,	// (0x00044383) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5197,	// (0x0004692c) bg_vkb2_func_pane_g1

0x519f,	// (0x00046934) bg_vkb2_func_pane_g2

0x51af,	// (0x00046944) bg_vkb2_func_pane_g3

0x51a7,	// (0x0004693c) bg_vkb2_func_pane_g4

0x51b7,	// (0x0004694c) bg_vkb2_func_pane_g5

0x51bf,	// (0x00046954) bg_vkb2_func_pane_g6

0x51c7,	// (0x0004695c) bg_vkb2_func_pane_g7

0x51cf,	// (0x00046964) bg_vkb2_func_pane_g8

0x518f,	// (0x00046924) bg_vkb2_func_pane_g9

0x0008,

0xfdc1,	// (0x00051556) bg_vkb2_func_pane_g

0x21df,	// (0x00043974) bg_vkb2_fuc_pane_cp01_ParamLimits

0x21df,	// (0x00043974) bg_vkb2_fuc_pane_cp01

0x2b90,	// (0x00044325) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2b90,	// (0x00044325) vkb2_top_cell_right_wide_pane_g1

0x21df,	// (0x00043974) bg_vkb2_fuc_pane_cp02_ParamLimits

0x21df,	// (0x00043974) bg_vkb2_fuc_pane_cp02

0x2d53,	// (0x000444e8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2d53,	// (0x000444e8) vkb2_top_cell_right_narrow_pane_g1

0xe5c8,	// (0x0004fd5d) aid_touch_area_decrease_ParamLimits

0xe5c8,	// (0x0004fd5d) aid_touch_area_decrease

0xe602,	// (0x0004fd97) aid_touch_area_increase_ParamLimits

0xe602,	// (0x0004fd97) aid_touch_area_increase

0xe62a,	// (0x0004fdbf) aid_touch_area_mute_ParamLimits

0xe62a,	// (0x0004fdbf) aid_touch_area_mute

0xe652,	// (0x0004fde7) aid_touch_area_slider_ParamLimits

0xe652,	// (0x0004fde7) aid_touch_area_slider

0xe692,	// (0x0004fe27) popup_slider_window_g4_ParamLimits

0xe692,	// (0x0004fe27) popup_slider_window_g4

0xe6ba,	// (0x0004fe4f) popup_slider_window_g5_ParamLimits

0xe6ba,	// (0x0004fe4f) popup_slider_window_g5

0xe6ee,	// (0x0004fe83) popup_slider_window_g6_ParamLimits

0xe6ee,	// (0x0004fe83) popup_slider_window_g6

0x8e87,	// (0x0004a61c) popup_slider_window_t2_ParamLimits

0x8e87,	// (0x0004a61c) popup_slider_window_t2

0x0001,

0xfcbb,	// (0x00051450) popup_slider_window_t_ParamLimits

0xfcbb,	// (0x00051450) popup_slider_window_t

0xe70a,	// (0x0004fe9f) slider_pane_ParamLimits

0xe70a,	// (0x0004fe9f) slider_pane

0x9bc4,	// (0x0004b359) slider_pane_g1_ParamLimits

0x9bc4,	// (0x0004b359) slider_pane_g1

0x9bd8,	// (0x0004b36d) slider_pane_g2_ParamLimits

0x9bd8,	// (0x0004b36d) slider_pane_g2

0x9bee,	// (0x0004b383) slider_pane_g3_ParamLimits

0x9bee,	// (0x0004b383) slider_pane_g3

0x0003,

0xfdd4,	// (0x00051569) slider_pane_g_ParamLimits

0xfdd4,	// (0x00051569) slider_pane_g

0xcbad,	// (0x0004e342) popup_tb_float_extension_window_ParamLimits

0xcbad,	// (0x0004e342) popup_tb_float_extension_window

0x9c1a,	// (0x0004b3af) aid_size_cell_tb_float_ext

0xd3b4,	// (0x0004eb49) bg_popup_sub_window_cp28

0x9c26,	// (0x0004b3bb) grid_tb_float_ext_pane

0x9c30,	// (0x0004b3c5) cell_tb_float_ext_pane_ParamLimits

0x9c30,	// (0x0004b3c5) cell_tb_float_ext_pane

0x9c4a,	// (0x0004b3df) cell_tb_float_ext_pane_g1

0x9c53,	// (0x0004b3e8) grid_highlight_pane_cp12

0xcce9,	// (0x0004e47e) cell_last_hwr_side_pane_ParamLimits

0xcce9,	// (0x0004e47e) cell_last_hwr_side_pane

0x77c0,	// (0x00048f55) cell_last_hwr_side_pane_g1

0x9c5c,	// (0x0004b3f1) cell_last_hwr_side_pane_g2

0x0001,

0xfddd,	// (0x00051572) cell_last_hwr_side_pane_g

0xd0da,	// (0x0004e86f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd0da,	// (0x0004e86f) vkb2_area_bottom_space_btn_pane

0x7a3e,	// (0x000491d3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9701,	// (0x0004ae96) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2d34,	// (0x000444c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2d73,	// (0x00044508) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2d73,	// (0x00044508) vkb2_area_bottom_space_btn_pane_g1

0x2dad,	// (0x00044542) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2dad,	// (0x00044542) vkb2_area_bottom_space_btn_pane_g2

0x2de3,	// (0x00044578) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2de3,	// (0x00044578) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde2,	// (0x00051577) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde2,	// (0x00051577) vkb2_area_bottom_space_btn_pane_g

0x2294,	// (0x00043a29) cel_fep_hwr_func_pane_ParamLimits

0x2294,	// (0x00043a29) cel_fep_hwr_func_pane

0xccbe,	// (0x0004e453) cell_hwr_side_button_pane_ParamLimits

0xccbe,	// (0x0004e453) cell_hwr_side_button_pane

0x90dd,	// (0x0004a872) aid_area_touch_clock_ParamLimits

0x3670,	// (0x00044e05) bg_uniindi_top_pane_ParamLimits

0x90ef,	// (0x0004a884) uniindi_top_pane_g1_ParamLimits

0x9105,	// (0x0004a89a) uniindi_top_pane_g2_ParamLimits

0x9111,	// (0x0004a8a6) uniindi_top_pane_g3_ParamLimits

0x9122,	// (0x0004a8b7) uniindi_top_pane_g4_ParamLimits

0xfcf3,	// (0x00051488) uniindi_top_pane_g_ParamLimits

0x912f,	// (0x0004a8c4) uniindi_top_pane_t1_ParamLimits

0x3670,	// (0x00044e05) bg_vkb2_func_pane_cp01_ParamLimits

0x3670,	// (0x00044e05) bg_vkb2_func_pane_cp01

0x9c65,	// (0x0004b3fa) cel_fep_hwr_func_pane_g1_ParamLimits

0x9c65,	// (0x0004b3fa) cel_fep_hwr_func_pane_g1

0x3670,	// (0x00044e05) bg_vkb2_func_pane_cp02_ParamLimits

0x3670,	// (0x00044e05) bg_vkb2_func_pane_cp02

0x9c65,	// (0x0004b3fa) cell_hwr_side_button_pane_g1_ParamLimits

0x9c65,	// (0x0004b3fa) cell_hwr_side_button_pane_g1

0x5010,	// (0x000467a5) status_pane_g4_ParamLimits

0x5010,	// (0x000467a5) status_pane_g4

0x502a,	// (0x000467bf) status_pane_t1

0x7505,	// (0x00048c9a) form2_midp_gauge_slider_cont_pane

0x750d,	// (0x00048ca2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe016,	// (0x0004f7ab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe028,	// (0x0004f7bd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfabf,	// (0x00051254) form2_midp_gauge_slider_pane_t_ParamLimits

0x7543,	// (0x00048cd8) form2_midp_slider_pane_ParamLimits

0x2726,	// (0x00043ebb) aid_size_cell_func_vkb2_ParamLimits

0x2726,	// (0x00043ebb) aid_size_cell_func_vkb2

0x9c06,	// (0x0004b39b) slider_pane_g4_ParamLimits

0x9c06,	// (0x0004b39b) slider_pane_g4

0xd143,	// (0x0004e8d8) form2_midp_gauge_slider_pane_t2_cp01

0xd151,	// (0x0004e8e6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd151,	// (0x0004e8e6) form2_midp_gauge_slider_pane_t3_cp01

0x2e58,	// (0x000445ed) form2_midp_slider_pane_cp01

0xd3b4,	// (0x0004eb49) navi_smil_pane

0x9c9e,	// (0x0004b433) navi_smil_pane_g1

0x9ca6,	// (0x0004b43b) navi_smil_pane_t1

0x9c73,	// (0x0004b408) form2_midp_slider_pane_g1

0x9c7c,	// (0x0004b411) form2_midp_slider_pane_g2

0x9c84,	// (0x0004b419) form2_midp_slider_pane_g3

0x9c73,	// (0x0004b408) form2_midp_slider_pane_g4

0xf0ab,	// (0x00050840) form2_midp_slider_pane_g5

0x0004,

0xfdeb,	// (0x00051580) form2_midp_slider_pane_g

0x2e1d,	// (0x000445b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2e1d,	// (0x000445b2) vkb2_area_bottom_space_btn_pane_g4

0xd734,	// (0x0004eec9) lc0_navi_pane_ParamLimits

0xd734,	// (0x0004eec9) lc0_navi_pane

0xd79e,	// (0x0004ef33) lc0_stat_indi_pane_ParamLimits

0xd79e,	// (0x0004ef33) lc0_stat_indi_pane

0xd7b3,	// (0x0004ef48) ls0_title_pane_ParamLimits

0xd7b3,	// (0x0004ef48) ls0_title_pane

0x3c80,	// (0x00045415) bg_popup_sub_pane_cp14_ParamLimits

0x90c4,	// (0x0004a859) list_uniindi_pane_ParamLimits

0x90d0,	// (0x0004a865) uniindi_top_pane_ParamLimits

0x916c,	// (0x0004a901) list_single_uniindi_pane_g1_ParamLimits

0x917f,	// (0x0004a914) list_single_uniindi_pane_t1_ParamLimits

0xd16e,	// (0x0004e903) lc0_stat_clock_pane_ParamLimits

0xd16e,	// (0x0004e903) lc0_stat_clock_pane

0xf0b6,	// (0x0005084b) lc0_stat_indi_pane_g1_ParamLimits

0xf0b6,	// (0x0005084b) lc0_stat_indi_pane_g1

0xf0c3,	// (0x00050858) lc0_stat_indi_pane_g2_ParamLimits

0xf0c3,	// (0x00050858) lc0_stat_indi_pane_g2

0x0001,

0xfdf6,	// (0x0005158b) lc0_stat_indi_pane_g_ParamLimits

0xfdf6,	// (0x0005158b) lc0_stat_indi_pane_g

0xd17b,	// (0x0004e910) lc0_uni_indicator_pane_ParamLimits

0xd17b,	// (0x0004e910) lc0_uni_indicator_pane

0xf0d0,	// (0x00050865) ls0_title_pane_g1_ParamLimits

0xf0d0,	// (0x00050865) ls0_title_pane_g1

0xf0e4,	// (0x00050879) ls0_title_pane_t1_ParamLimits

0xf0e4,	// (0x00050879) ls0_title_pane_t1

0xd188,	// (0x0004e91d) lc0_uni_indicator_pane_g1_ParamLimits

0xd188,	// (0x0004e91d) lc0_uni_indicator_pane_g1

0x9d18,	// (0x0004b4ad) lc0_stat_clock_pane_t1

0xd3b4,	// (0x0004eb49) main_ai5_pane

0x9d26,	// (0x0004b4bb) ai5_sk_pane_ParamLimits

0x9d26,	// (0x0004b4bb) ai5_sk_pane

0xf112,	// (0x000508a7) cell_ai5_widget_pane_ParamLimits

0xf112,	// (0x000508a7) cell_ai5_widget_pane

0x9dfc,	// (0x0004b591) aid_size_cell_widget_grid

0x9e12,	// (0x0004b5a7) bg_ai5_widget_pane_ParamLimits

0x9e12,	// (0x0004b5a7) bg_ai5_widget_pane

0x9e8e,	// (0x0004b623) cell_ai5_widget_pane_g2

0x9ea2,	// (0x0004b637) cell_ai5_widget_pane_g3

0x9ebc,	// (0x0004b651) cell_ai5_widget_pane_g4

0x9ecc,	// (0x0004b661) cell_ai5_widget_pane_g5

0x9edc,	// (0x0004b671) cell_ai5_widget_pane_g6

0x9ee8,	// (0x0004b67d) cell_ai5_widget_pane_g7

0x9f54,	// (0x0004b6e9) cell_ai5_widget_pane_t1_ParamLimits

0x9f54,	// (0x0004b6e9) cell_ai5_widget_pane_t1

0x9f71,	// (0x0004b706) cell_ai5_widget_pane_t2_ParamLimits

0x9f71,	// (0x0004b706) cell_ai5_widget_pane_t2

0x9f89,	// (0x0004b71e) cell_ai5_widget_pane_t3_ParamLimits

0x9f89,	// (0x0004b71e) cell_ai5_widget_pane_t3

0x9fa1,	// (0x0004b736) cell_ai5_widget_pane_t4_ParamLimits

0x9fa1,	// (0x0004b736) cell_ai5_widget_pane_t4

0x9fc7,	// (0x0004b75c) cell_ai5_widget_pane_t5_ParamLimits

0x9fc7,	// (0x0004b75c) cell_ai5_widget_pane_t5

0x9fe6,	// (0x0004b77b) cell_ai5_widget_pane_t6_ParamLimits

0x9fe6,	// (0x0004b77b) cell_ai5_widget_pane_t6

0x9ff8,	// (0x0004b78d) cell_ai5_widget_pane_t7_ParamLimits

0x9ff8,	// (0x0004b78d) cell_ai5_widget_pane_t7

0xa017,	// (0x0004b7ac) cell_ai5_widget_pane_t8_ParamLimits

0xa017,	// (0x0004b7ac) cell_ai5_widget_pane_t8

0x000b,

0xfe16,	// (0x000515ab) cell_ai5_widget_pane_t_ParamLimits

0xfe16,	// (0x000515ab) cell_ai5_widget_pane_t

0xa09b,	// (0x0004b830) grid_ai5_widget_pane

0x3c80,	// (0x00045415) highlight_cell_ai5_widget_pane_ParamLimits

0x3c80,	// (0x00045415) highlight_cell_ai5_widget_pane

0xf17e,	// (0x00050913) ai5_sk_left_pane

0xf188,	// (0x0005091d) ai5_sk_middle_pane

0xf192,	// (0x00050927) ai5_sk_right_pane

0xa0d0,	// (0x0004b865) bg_ai5_widget_pane_g1_ParamLimits

0xa0d0,	// (0x0004b865) bg_ai5_widget_pane_g1

0xa0dc,	// (0x0004b871) bg_ai5_widget_pane_g2_ParamLimits

0xa0dc,	// (0x0004b871) bg_ai5_widget_pane_g2

0xa0e8,	// (0x0004b87d) bg_ai5_widget_pane_g3_ParamLimits

0xa0e8,	// (0x0004b87d) bg_ai5_widget_pane_g3

0xa0f4,	// (0x0004b889) bg_ai5_widget_pane_g4_ParamLimits

0xa0f4,	// (0x0004b889) bg_ai5_widget_pane_g4

0xa100,	// (0x0004b895) bg_ai5_widget_pane_g5_ParamLimits

0xa100,	// (0x0004b895) bg_ai5_widget_pane_g5

0xa10c,	// (0x0004b8a1) bg_ai5_widget_pane_g6_ParamLimits

0xa10c,	// (0x0004b8a1) bg_ai5_widget_pane_g6

0xa118,	// (0x0004b8ad) bg_ai5_widget_pane_g7_ParamLimits

0xa118,	// (0x0004b8ad) bg_ai5_widget_pane_g7

0xa124,	// (0x0004b8b9) bg_ai5_widget_pane_g8_ParamLimits

0xa124,	// (0x0004b8b9) bg_ai5_widget_pane_g8

0xa130,	// (0x0004b8c5) bg_ai5_widget_pane_g9_ParamLimits

0xa130,	// (0x0004b8c5) bg_ai5_widget_pane_g9

0x0008,

0xfe2f,	// (0x000515c4) bg_ai5_widget_pane_g_ParamLimits

0xfe2f,	// (0x000515c4) bg_ai5_widget_pane_g

0xa162,	// (0x0004b8f7) cell_shortcut_ai5_widget_pane_ParamLimits

0xa162,	// (0x0004b8f7) cell_shortcut_ai5_widget_pane

0x4941,	// (0x000460d6) bg_cell_shortcut_ai5_widget_pane

0xa173,	// (0x0004b908) cell_grid_ai5_widget_pane_g1

0x4941,	// (0x000460d6) highlight_cell_shortcut_ai5_widget_pane

0x519f,	// (0x00046934) ai5_sk_left_pane_g1

0xa17c,	// (0x0004b911) ai5_sk_left_pane_g2

0xa184,	// (0x0004b919) ai5_sk_left_pane_g3

0xa18c,	// (0x0004b921) ai5_sk_left_pane_g4

0x0003,

0xfe42,	// (0x000515d7) ai5_sk_left_pane_g

0xa194,	// (0x0004b929) ai5_sk_left_pane_t1

0x5197,	// (0x0004692c) ai5_sk_right_pane_g1

0xa1a2,	// (0x0004b937) ai5_sk_right_pane_g2

0xa1aa,	// (0x0004b93f) ai5_sk_right_pane_g3

0xa1b2,	// (0x0004b947) ai5_sk_right_pane_g4

0x0003,

0xfe4b,	// (0x000515e0) ai5_sk_right_pane_g

0xa1ba,	// (0x0004b94f) ai5_sk_right_pane_t1

0x5197,	// (0x0004692c) ai5_sk_middle_pane_g1

0x519f,	// (0x00046934) ai5_sk_middle_pane_g2

0x51b7,	// (0x0004694c) ai5_sk_middle_pane_g3

0xa1aa,	// (0x0004b93f) ai5_sk_middle_pane_g4

0xa184,	// (0x0004b919) ai5_sk_middle_pane_g5

0xa1c8,	// (0x0004b95d) ai5_sk_middle_pane_g6

0xf19c,	// (0x00050931) ai5_sk_middle_pane_g7

0x0006,

0xfe54,	// (0x000515e9) ai5_sk_middle_pane_g

0xd620,	// (0x0004edb5) aid_touch_area_size_lc0_ParamLimits

0xd620,	// (0x0004edb5) aid_touch_area_size_lc0

0x241f,	// (0x00043bb4) cell_hwr_candidate_pane_t1_ParamLimits

0x4ce1,	// (0x00046476) aid_touch_navi_pane

0xd8ac,	// (0x0004f041) status_dt_navi_pane_ParamLimits

0xd8ac,	// (0x0004f041) status_dt_navi_pane

0xd8c4,	// (0x0004f059) status_dt_sta_pane_ParamLimits

0xd8c4,	// (0x0004f059) status_dt_sta_pane

0xf1a4,	// (0x00050939) dt_sta_controll_pane

0xf1b1,	// (0x00050946) dt_sta_indi_pane

0xf1be,	// (0x00050953) dt_sta_title_pane

0x3670,	// (0x00044e05) bg_dt_sta_indi_pane_ParamLimits

0x3670,	// (0x00044e05) bg_dt_sta_indi_pane

0xf1d0,	// (0x00050965) dt_sta_battery_pane

0xf1d8,	// (0x0005096d) dt_sta_indi_pane_g1

0xa21a,	// (0x0004b9af) dt_sta_indi_pane_g2

0xa223,	// (0x0004b9b8) dt_sta_indi_pane_g3

0x0002,

0xfe63,	// (0x000515f8) dt_sta_indi_pane_g

0xa22c,	// (0x0004b9c1) dt_sta_signal_pane

0x3c80,	// (0x00045415) bg_dt_sta_title_pane_ParamLimits

0x3c80,	// (0x00045415) bg_dt_sta_title_pane

0xa235,	// (0x0004b9ca) dt_sta_title_pane_g1

0xa23d,	// (0x0004b9d2) dt_sta_title_pane_t1_ParamLimits

0xa23d,	// (0x0004b9d2) dt_sta_title_pane_t1

0xd3b4,	// (0x0004eb49) bg_dt_sta_control_pane

0xf1e1,	// (0x00050976) dt_sta_controll_pane_g1

0xa25b,	// (0x0004b9f0) bg_dt_sta_title_pane_g1

0xa264,	// (0x0004b9f9) bg_dt_sta_title_pane_g2

0xa26d,	// (0x0004ba02) bg_dt_sta_title_pane_g3

0x0002,

0xfe6a,	// (0x000515ff) bg_dt_sta_title_pane_g

0x77c0,	// (0x00048f55) bg_dt_sta_indi_pane_g1

0xa276,	// (0x0004ba0b) dt_sta_signal_pane_g1

0xa27e,	// (0x0004ba13) dt_sta_signal_pane_g2

0x0001,

0xfe71,	// (0x00051606) dt_sta_signal_pane_g

0xa286,	// (0x0004ba1b) dt_sta_battery_pane_g1

0xa28f,	// (0x0004ba24) dt_sta_battery_pane_t1

0x77c0,	// (0x00048f55) bg_dt_sta_control_pane_g1

0x4434,	// (0x00045bc9) fep_china_uni_eep_pane

0x443c,	// (0x00045bd1) fep_china_uni_entry_pane_ParamLimits

0x444c,	// (0x00045be1) popup_fep_china_uni_window_g1_ParamLimits

0x445c,	// (0x00045bf1) popup_fep_china_uni_window_g2_ParamLimits

0x445c,	// (0x00045bf1) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00050e92) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00050e92) popup_fep_china_uni_window_g

0xa29e,	// (0x0004ba33) fep_china_uni_eep_pane_g1

0xa2a6,	// (0x0004ba3b) fep_china_uni_eep_pane_t1

0x9c95,	// (0x0004b42a) aid_touch_area_size_smil_player

0x4e37,	// (0x000465cc) lc0_clock_pane

0x501e,	// (0x000467b3) status_pane_g5_ParamLimits

0x501e,	// (0x000467b3) status_pane_g5

0xc72f,	// (0x0004dec4) popup_keymap_window

0x4fdc,	// (0x00046771) status_icon_pane

0x9ea2,	// (0x0004b637) cell_ai5_widget_pane_g3_ParamLimits

0x9ebc,	// (0x0004b651) cell_ai5_widget_pane_g4_ParamLimits

0x9ecc,	// (0x0004b661) cell_ai5_widget_pane_g5_ParamLimits

0x9ef4,	// (0x0004b689) cell_ai5_widget_pane_g8_ParamLimits

0x9ef4,	// (0x0004b689) cell_ai5_widget_pane_g8

0x9f08,	// (0x0004b69d) cell_ai5_widget_pane_g9_ParamLimits

0x9f08,	// (0x0004b69d) cell_ai5_widget_pane_g9

0x9f1c,	// (0x0004b6b1) cell_ai5_widget_pane_g10_ParamLimits

0x9f1c,	// (0x0004b6b1) cell_ai5_widget_pane_g10

0xa2b5,	// (0x0004ba4a) status_icon_pane_g1

0xd3b4,	// (0x0004eb49) bg_popup_sub_pane_cp13

0xa2bd,	// (0x0004ba52) popup_keymap_window_t1

0xd5b6,	// (0x0004ed4b) control_pane_g6_ParamLimits

0xd5b6,	// (0x0004ed4b) control_pane_g6

0xd5c3,	// (0x0004ed58) control_pane_g7_ParamLimits

0xd5c3,	// (0x0004ed58) control_pane_g7

0xd5d0,	// (0x0004ed65) control_pane_g8_ParamLimits

0xd5d0,	// (0x0004ed65) control_pane_g8

0xf1a4,	// (0x00050939) dt_sta_controll_pane_ParamLimits

0xf1b1,	// (0x00050946) dt_sta_indi_pane_ParamLimits

0xf1be,	// (0x00050953) dt_sta_title_pane_ParamLimits

0x3bac,	// (0x00045341) aid_size_touch_scroll_bar_cale

0x0de6,	// (0x0004257b) popup_discreet_window_ParamLimits

0x0de6,	// (0x0004257b) popup_discreet_window

0xbe0b,	// (0x0004d5a0) popup_sk_window

0x582a,	// (0x00046fbf) bg_popup_sub_pane_cp28_ParamLimits

0x582a,	// (0x00046fbf) bg_popup_sub_pane_cp28

0xa2cb,	// (0x0004ba60) popup_discreet_window_g1_ParamLimits

0xa2cb,	// (0x0004ba60) popup_discreet_window_g1

0xa2eb,	// (0x0004ba80) popup_discreet_window_t1_ParamLimits

0xa2eb,	// (0x0004ba80) popup_discreet_window_t1

0xa309,	// (0x0004ba9e) popup_discreet_window_t2_ParamLimits

0xa309,	// (0x0004ba9e) popup_discreet_window_t2

0x0002,

0xfe76,	// (0x0005160b) popup_discreet_window_t_ParamLimits

0xfe76,	// (0x0005160b) popup_discreet_window_t

0x2e8f,	// (0x00044624) popup_sk_window_g1

0x2e99,	// (0x0004462e) popup_sk_window_g2

0x0001,

0xfe7d,	// (0x00051612) popup_sk_window_g

0x2ea1,	// (0x00044636) popup_sk_window_t1

0x2eaf,	// (0x00044644) popup_sk_window_t1_copy1

0x9e8e,	// (0x0004b623) cell_ai5_widget_pane_g2_ParamLimits

0xa029,	// (0x0004b7be) cell_ai5_widget_pane_t9_ParamLimits

0xa029,	// (0x0004b7be) cell_ai5_widget_pane_t9

0xd3b4,	// (0x0004eb49) main_fep_fshwr2_pane

0xd1af,	// (0x0004e944) aid_fshwr2_btn_pane

0xd1bf,	// (0x0004e954) aid_fshwr2_syb_pane

0xd1d3,	// (0x0004e968) aid_fshwr2_txt_pane

0xd1e3,	// (0x0004e978) fshwr2_func_candi_pane

0xd203,	// (0x0004e998) fshwr2_hwr_syb_pane

0xd225,	// (0x0004e9ba) fshwr2_icf_pane

0xd3b4,	// (0x0004eb49) fshwr2_icf_bg_pane

0xd255,	// (0x0004e9ea) fshwr2_icf_pane_t1_ParamLimits

0xd255,	// (0x0004e9ea) fshwr2_icf_pane_t1

0x4309,	// (0x00045a9e) fshwr2_func_candi_pane_g1

0xf1ea,	// (0x0005097f) fshwr2_func_candi_row_pane_ParamLimits

0xf1ea,	// (0x0005097f) fshwr2_func_candi_row_pane

0xd26e,	// (0x0004ea03) cell_fshwr2_syb_pane_ParamLimits

0xd26e,	// (0x0004ea03) cell_fshwr2_syb_pane

0x9c65,	// (0x0004b3fa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9c65,	// (0x0004b3fa) fshwr2_hwr_syb_pane_g1

0xd3b4,	// (0x0004eb49) bg_popup_call_pane_cp01

0xd294,	// (0x0004ea29) fshwr2_func_candi_cell_pane_ParamLimits

0xd294,	// (0x0004ea29) fshwr2_func_candi_cell_pane

0x55ff,	// (0x00046d94) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x55ff,	// (0x00046d94) fshwr2_func_candi_cell_bg_pane

0xd2df,	// (0x0004ea74) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd2df,	// (0x0004ea74) fshwr2_func_candi_cell_pane_g1

0xd316,	// (0x0004eaab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd316,	// (0x0004eaab) fshwr2_func_candi_cell_pane_t1

0xd3b4,	// (0x0004eb49) bg_button_pane_cp08

0x4c65,	// (0x000463fa) cell_fshwr2_syb_bg_pane

0xd331,	// (0x0004eac6) cell_fshwr2_syb_bg_pane_g1

0xd344,	// (0x0004ead9) cell_fshwr2_syb_bg_pane_t1

0x3c80,	// (0x00045415) main_tmo_pane

0xdb82,	// (0x0004f317) uni_indicator_pane_g1_ParamLimits

0xdb98,	// (0x0004f32d) uni_indicator_pane_g2_ParamLimits

0xdbae,	// (0x0004f343) uni_indicator_pane_g3_ParamLimits

0x6378,	// (0x00047b0d) uni_indicator_pane_g4_ParamLimits

0x6378,	// (0x00047b0d) uni_indicator_pane_g4

0x638c,	// (0x00047b21) uni_indicator_pane_g5_ParamLimits

0x638c,	// (0x00047b21) uni_indicator_pane_g5

0x638c,	// (0x00047b21) uni_indicator_pane_g6_ParamLimits

0x638c,	// (0x00047b21) uni_indicator_pane_g6

0xf8fc,	// (0x00051091) uni_indicator_pane_g_ParamLimits

0xe5a4,	// (0x0004fd39) popup_tmo_note_window_ParamLimits

0xe5a4,	// (0x0004fd39) popup_tmo_note_window

0x3c80,	// (0x00045415) fshwr2_bg_pane

0xd307,	// (0x0004ea9c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd307,	// (0x0004ea9c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe82,	// (0x00051617) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe82,	// (0x00051617) fshwr2_func_candi_cell_pane_g

0x77c0,	// (0x00048f55) bg_popup_window_pane_cp01

0x304b,	// (0x000447e0) bg_popup_window_pane_g1_cp01

0xa382,	// (0x0004bb17) bg_popup_window_pane_cp22_ParamLimits

0xa382,	// (0x0004bb17) bg_popup_window_pane_cp22

0xa390,	// (0x0004bb25) listscroll_tmo_link_pane_ParamLimits

0xa390,	// (0x0004bb25) listscroll_tmo_link_pane

0xa3d0,	// (0x0004bb65) popup_tmo_note_window_g1_ParamLimits

0xa3d0,	// (0x0004bb65) popup_tmo_note_window_g1

0xa3dd,	// (0x0004bb72) tmo_note_info_pane_ParamLimits

0xa3dd,	// (0x0004bb72) tmo_note_info_pane

0xf20d,	// (0x000509a2) list_tmo_note_info_pane_g1_ParamLimits

0xf20d,	// (0x000509a2) list_tmo_note_info_pane_g1

0xa40e,	// (0x0004bba3) list_tmo_note_info_pane_g2_ParamLimits

0xa40e,	// (0x0004bba3) list_tmo_note_info_pane_g2

0x0001,

0xfe87,	// (0x0005161c) list_tmo_note_info_pane_g_ParamLimits

0xfe87,	// (0x0005161c) list_tmo_note_info_pane_g

0xa42a,	// (0x0004bbbf) list_tmo_note_info_text_pane_ParamLimits

0xa42a,	// (0x0004bbbf) list_tmo_note_info_text_pane

0xa4ab,	// (0x0004bc40) list_tmo_link_pane

0xa4b8,	// (0x0004bc4d) scroll_pane_cp20

0xa4c5,	// (0x0004bc5a) list_single_tmo_link_pane_ParamLimits

0xa4c5,	// (0x0004bc5a) list_single_tmo_link_pane

0xa4d5,	// (0x0004bc6a) list_single_tmo_link_pane_t1

0xa4e3,	// (0x0004bc78) list_tmo_note_info_text_pane_t1_ParamLimits

0xa4e3,	// (0x0004bc78) list_tmo_note_info_text_pane_t1

0xc29e,	// (0x0004da33) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc29e,	// (0x0004da33) aid_size_touch_scroll_bar_cp01

0xba8b,	// (0x0004d220) aid_size_touch_slider_marker

0xbdfb,	// (0x0004d590) popup_settings_window_ParamLimits

0xbdfb,	// (0x0004d590) popup_settings_window

0x0411,	// (0x00041ba6) popup_candi_list_indi_window

0x4ce1,	// (0x00046476) aid_touch_navi_pane_ParamLimits

0x267f,	// (0x00043e14) rs_clock_indi_pane

0x2688,	// (0x00043e1d) sctrl_sk_bottom_pane_ParamLimits

0x2699,	// (0x00043e2e) sctrl_sk_top_pane_ParamLimits

0x2778,	// (0x00043f0d) popup_fep_tooltip_window

0x9dfc,	// (0x0004b591) aid_size_cell_widget_grid_ParamLimits

0x9e79,	// (0x0004b60e) cell_ai5_widget_pane_g1_ParamLimits

0x9e79,	// (0x0004b60e) cell_ai5_widget_pane_g1

0x9edc,	// (0x0004b671) cell_ai5_widget_pane_g6_ParamLimits

0x9ee8,	// (0x0004b67d) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfb,	// (0x00051590) cell_ai5_widget_pane_g_ParamLimits

0xfdfb,	// (0x00051590) cell_ai5_widget_pane_g

0xa058,	// (0x0004b7ed) cell_ai5_widget_pane_t10_ParamLimits

0xa058,	// (0x0004b7ed) cell_ai5_widget_pane_t10

0xa09b,	// (0x0004b830) grid_ai5_widget_pane_ParamLimits

0xa13c,	// (0x0004b8d1) cell_contacts_ai5_widget_pane_ParamLimits

0xa13c,	// (0x0004b8d1) cell_contacts_ai5_widget_pane

0xa31e,	// (0x0004bab3) popup_discreet_window_t3_ParamLimits

0xa31e,	// (0x0004bab3) popup_discreet_window_t3

0xd241,	// (0x0004e9d6) popup_fshwr2_char_preview_window_ParamLimits

0xd241,	// (0x0004e9d6) popup_fshwr2_char_preview_window

0xf224,	// (0x000509b9) tmo_note_info_pane_t1

0xf239,	// (0x000509ce) tmo_note_info_pane_t2

0xf250,	// (0x000509e5) tmo_note_info_pane_t3

0xa487,	// (0x0004bc1c) tmo_note_info_pane_t4

0xa499,	// (0x0004bc2e) tmo_note_info_pane_t5

0x0004,

0xfe8c,	// (0x00051621) tmo_note_info_pane_t

0xa4ab,	// (0x0004bc40) list_tmo_link_pane_ParamLimits

0xa4b8,	// (0x0004bc4d) scroll_pane_cp20_ParamLimits

0xd3b4,	// (0x0004eb49) bg_popup_fep_char_preview_window_cp01

0xf265,	// (0x000509fa) popup_fshwr2_char_preview_window_t1

0xa50a,	// (0x0004bc9f) popup_candi_list_indi_window_g1

0xa513,	// (0x0004bca8) bg_cell_contacts_ai5_widget_pane

0xa51f,	// (0x0004bcb4) cell_contacts_ai5_widget_pane_g1

0x7ea0,	// (0x00049635) cell_contacts_ai5_widget_pane_g2

0xa534,	// (0x0004bcc9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe97,	// (0x0005162c) cell_contacts_ai5_widget_pane_g

0xa540,	// (0x0004bcd5) cell_contacts_ai5_widget_pane_t1

0x3c80,	// (0x00045415) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa5b7,	// (0x0004bd4c) settings_container_pane

0x4941,	// (0x000460d6) listscroll_set_pane_copy1

0x6eaa,	// (0x0004863f) scroll_pane_cp121_copy1

0x55bb,	// (0x00046d50) set_content_pane_copy1

0xa5c3,	// (0x0004bd58) aid_height_set_list_copy1_ParamLimits

0xa5c3,	// (0x0004bd58) aid_height_set_list_copy1

0x6584,	// (0x00047d19) aid_size_parent_copy1_ParamLimits

0x6584,	// (0x00047d19) aid_size_parent_copy1

0xa5cf,	// (0x0004bd64) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa5cf,	// (0x0004bd64) button_value_adjust_pane_cp6_copy1

0x4c65,	// (0x000463fa) list_highlight_pane_cp2_copy1_ParamLimits

0x4c65,	// (0x000463fa) list_highlight_pane_cp2_copy1

0xa5e3,	// (0x0004bd78) list_set_pane_copy1_ParamLimits

0xa5e3,	// (0x0004bd78) list_set_pane_copy1

0xa552,	// (0x0004bce7) main_pane_set_t1_copy1_ParamLimits

0xa552,	// (0x0004bce7) main_pane_set_t1_copy1

0xa58c,	// (0x0004bd21) main_pane_set_t2_copy1_ParamLimits

0xa58c,	// (0x0004bd21) main_pane_set_t2_copy1

0xa690,	// (0x0004be25) main_pane_set_t3_copy1

0xa69e,	// (0x0004be33) main_pane_set_t4_copy1

0xa5ab,	// (0x0004bd40) set_content_pane_g1_copy1_ParamLimits

0xa5ab,	// (0x0004bd40) set_content_pane_g1_copy1

0xa6ac,	// (0x0004be41) setting_code_pane_copy1

0xa6b4,	// (0x0004be49) setting_slider_graphic_pane_copy1

0xa6b4,	// (0x0004be49) setting_slider_pane_copy1

0xa6bc,	// (0x0004be51) setting_text_pane_copy1

0xa6bc,	// (0x0004be51) setting_volume_pane_copy1

0xa6ac,	// (0x0004be41) settings_code_pane_cp2_copy1

0xa6c4,	// (0x0004be59) settings_code_pane_cp_copy1_ParamLimits

0xa6c4,	// (0x0004be59) settings_code_pane_cp_copy1

0x3054,	// (0x000447e9) volume_set_pane_copy1

0xa6d8,	// (0x0004be6d) volume_set_pane_g10_copy1

0xa6e0,	// (0x0004be75) volume_set_pane_g1_copy1

0xa6e8,	// (0x0004be7d) volume_set_pane_g2_copy1

0xa6f0,	// (0x0004be85) volume_set_pane_g3_copy1

0xa6f8,	// (0x0004be8d) volume_set_pane_g4_copy1

0xa700,	// (0x0004be95) volume_set_pane_g5_copy1

0xa708,	// (0x0004be9d) volume_set_pane_g6_copy1

0xa710,	// (0x0004bea5) volume_set_pane_g7_copy1

0xa718,	// (0x0004bead) volume_set_pane_g8_copy1

0xa720,	// (0x0004beb5) volume_set_pane_g9_copy1

0x33e7,	// (0x00044b7c) bg_set_opt_pane_cp_copy1_ParamLimits

0x33e7,	// (0x00044b7c) bg_set_opt_pane_cp_copy1

0x305c,	// (0x000447f1) setting_slider_pane_t1_copy1_ParamLimits

0x305c,	// (0x000447f1) setting_slider_pane_t1_copy1

0x307b,	// (0x00044810) setting_slider_pane_t2_copy1_ParamLimits

0x307b,	// (0x00044810) setting_slider_pane_t2_copy1

0x3095,	// (0x0004482a) setting_slider_pane_t3_copy1_ParamLimits

0x3095,	// (0x0004482a) setting_slider_pane_t3_copy1

0x30ad,	// (0x00044842) slider_set_pane_copy1_ParamLimits

0x30ad,	// (0x00044842) slider_set_pane_copy1

0x3ccc,	// (0x00045461) set_opt_bg_pane_g1_copy2

0x3cd4,	// (0x00045469) set_opt_bg_pane_g2_copy2

0xa728,	// (0x0004bebd) set_opt_bg_pane_g3_copy2

0x3ce4,	// (0x00045479) set_opt_bg_pane_g4_copy2

0x3cec,	// (0x00045481) set_opt_bg_pane_g5_copy2

0x3cf4,	// (0x00045489) set_opt_bg_pane_g6_copy2

0xa732,	// (0x0004bec7) set_opt_bg_pane_g7_copy2

0xa73a,	// (0x0004becf) set_opt_bg_pane_g8_copy2

0xa744,	// (0x0004bed9) set_opt_bg_pane_g9_copy2

0x30c3,	// (0x00044858) aid_size_touch_slider_mark_copy1_ParamLimits

0x30c3,	// (0x00044858) aid_size_touch_slider_mark_copy1

0xa74e,	// (0x0004bee3) slider_set_pane_g1_copy1

0x30d7,	// (0x0004486c) slider_set_pane_g2_copy1

0x1f76,	// (0x0004370b) slider_set_pane_g3_copy1_ParamLimits

0x1f76,	// (0x0004370b) slider_set_pane_g3_copy1

0x1f8a,	// (0x0004371f) slider_set_pane_g4_copy1_ParamLimits

0x1f8a,	// (0x0004371f) slider_set_pane_g4_copy1

0x1fa2,	// (0x00043737) slider_set_pane_g5_copy1_ParamLimits

0x1fa2,	// (0x00043737) slider_set_pane_g5_copy1

0x1f76,	// (0x0004370b) slider_set_pane_g6_copy1_ParamLimits

0x1f76,	// (0x0004370b) slider_set_pane_g6_copy1

0x30df,	// (0x00044874) slider_set_pane_g7_copy1_ParamLimits

0x30df,	// (0x00044874) slider_set_pane_g7_copy1

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp2_copy1

0xa757,	// (0x0004beec) setting_slider_graphic_pane_g1_copy1

0xa760,	// (0x0004bef5) setting_slider_graphic_pane_t1_copy1

0xa770,	// (0x0004bf05) setting_slider_graphic_pane_t2_copy1

0xa780,	// (0x0004bf15) slider_set_pane_cp_copy1

0xa790,	// (0x0004bf25) input_focus_pane_cp1_copy1

0xa799,	// (0x0004bf2e) list_set_text_pane_copy1

0xa7a1,	// (0x0004bf36) setting_text_pane_g1_copy1

0x0b5d,	// (0x000422f2) set_text_pane_t1_copy1

0xa790,	// (0x0004bf25) input_focus_pane_cp2_copy1

0xa7a1,	// (0x0004bf36) setting_code_pane_g1_copy1

0xa7aa,	// (0x0004bf3f) setting_code_pane_t1_copy1

0x6cd2,	// (0x00048467) list_set_graphic_pane_copy1

0x3307,	// (0x00044a9c) bg_set_opt_pane_cp4_copy1

0x463f,	// (0x00045dd4) list_set_graphic_pane_g1_copy1_ParamLimits

0x463f,	// (0x00045dd4) list_set_graphic_pane_g1_copy1

0xa7b8,	// (0x0004bf4d) list_set_graphic_pane_g2_copy1

0x4657,	// (0x00045dec) list_set_graphic_pane_t1_copy1_ParamLimits

0x4657,	// (0x00045dec) list_set_graphic_pane_t1_copy1

0x77c0,	// (0x00048f55) rs_clock_indi_pane_g1

0xa7c0,	// (0x0004bf55) rs_clock_indi_pane_t1

0xa7ce,	// (0x0004bf63) rs_indi_pane

0xa7d6,	// (0x0004bf6b) rs_indi_pane_g1

0xa7df,	// (0x0004bf74) rs_indi_pane_g2

0xa7e8,	// (0x0004bf7d) rs_indi_pane_g3

0x0002,

0xfe9e,	// (0x00051633) rs_indi_pane_g

0x4941,	// (0x000460d6) bg_popup_preview_window_pane_cp03

0xa7f1,	// (0x0004bf86) popup_fep_tooltip_window_t1

0x8448,	// (0x00049bdd) popup_note2_window_g2_ParamLimits

0x8448,	// (0x00049bdd) popup_note2_window_g2

0x0001,

0xfc2b,	// (0x000513c0) popup_note2_window_g_ParamLimits

0xfc2b,	// (0x000513c0) popup_note2_window_g

0x8943,	// (0x0004a0d8) bg_popup_sub_pane_cp11_ParamLimits

0x8950,	// (0x0004a0e5) cell_ai3_links_pane_g1_ParamLimits

0x8967,	// (0x0004a0fc) cell_ai3_links_pane_t1

0x0b5d,	// (0x000422f2) set_text_pane_t1_copy1_ParamLimits

0x4855,	// (0x00045fea) cell_graphic_popup_pane_cp2_ParamLimits

0x4855,	// (0x00045fea) cell_graphic_popup_pane_cp2

0xa7ff,	// (0x0004bf94) cell_graphic_popup_pane_g1_cp2

0x39bf,	// (0x00045154) cell_graphic_popup_pane_g2_cp2

0xa807,	// (0x0004bf9c) cell_graphic_popup_pane_g3_cp2

0xa80f,	// (0x0004bfa4) cell_graphic_popup_pane_t2_cp2

0x39d0,	// (0x00045165) grid_highlight_pane_cp3_cp2

0x4024,	// (0x000457b9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3c80,	// (0x00045415) main_tmo_pane_ParamLimits

0xe598,	// (0x0004fd2d) popup_tmo_big_image_note_window

0x9e68,	// (0x0004b5fd) cell_ai5_widget_list_pane

0x9e70,	// (0x0004b605) cell_ai5_widget_lrg_icon_pane

0xf224,	// (0x000509b9) tmo_note_info_pane_t1_ParamLimits

0xf239,	// (0x000509ce) tmo_note_info_pane_t2_ParamLimits

0xf250,	// (0x000509e5) tmo_note_info_pane_t3_ParamLimits

0xa487,	// (0x0004bc1c) tmo_note_info_pane_t4_ParamLimits

0xa499,	// (0x0004bc2e) tmo_note_info_pane_t5_ParamLimits

0xfe8c,	// (0x00051621) tmo_note_info_pane_t_ParamLimits

0xa5b7,	// (0x0004bd4c) settings_container_pane_ParamLimits

0xa788,	// (0x0004bf1d) indicator_popup_pane_cp5

0xa788,	// (0x0004bf1d) indicator_popup_pane_cp6

0x6cd2,	// (0x00048467) list_set_graphic_pane_copy1_ParamLimits

0xd3b4,	// (0x0004eb49) bg_popup_window_pane_cp23

0xa81d,	// (0x0004bfb2) popup_tmo_big_image_note_window_g1

0xa827,	// (0x0004bfbc) popup_tmo_big_image_note_window_t1

0xa837,	// (0x0004bfcc) popup_tmo_big_image_note_window_t2

0xa847,	// (0x0004bfdc) popup_tmo_big_image_note_window_t3

0x0002,

0xfea5,	// (0x0005163a) popup_tmo_big_image_note_window_t

0x77c0,	// (0x00048f55) cell_ai5_widget_lrg_icon_pane_g1

0xa857,	// (0x0004bfec) cell_ai5_widget_lrg_icon_pane_t1

0xa865,	// (0x0004bffa) cell_ai5_widget_list_row_pane_ParamLimits

0xa865,	// (0x0004bffa) cell_ai5_widget_list_row_pane

0xa87c,	// (0x0004c011) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa87c,	// (0x0004c011) cell_ai5_widget_list_row_pane_g1

0xa889,	// (0x0004c01e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa889,	// (0x0004c01e) cell_ai5_widget_list_row_pane_t1

0xa8ba,	// (0x0004c04f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa8ba,	// (0x0004c04f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeac,	// (0x00051641) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeac,	// (0x00051641) cell_ai5_widget_list_row_pane_t

0xd3b4,	// (0x0004eb49) main_fep_vtchi_ss_pane

0xa90a,	// (0x0004c09f) popup_fep_char_pre_window

0xa912,	// (0x0004c0a7) popup_fep_ituss_window

0xf29d,	// (0x00050a32) popup_fep_vkbss_window

0x4c65,	// (0x000463fa) grid_vkbss_keypad_pane_ParamLimits

0x4c65,	// (0x000463fa) grid_vkbss_keypad_pane

0xa97e,	// (0x0004c113) ituss_keypad_pane

0x30ff,	// (0x00044894) aid_vkbss_key_offset_ParamLimits

0x30ff,	// (0x00044894) aid_vkbss_key_offset

0xd35a,	// (0x0004eaef) cell_vkbss_key_pane_ParamLimits

0xd35a,	// (0x0004eaef) cell_vkbss_key_pane

0xa98a,	// (0x0004c11f) bg_cell_vkbss_key_g1_ParamLimits

0xa98a,	// (0x0004c11f) bg_cell_vkbss_key_g1

0xf2aa,	// (0x00050a3f) cell_vkbss_key_3p_pane_ParamLimits

0xf2aa,	// (0x00050a3f) cell_vkbss_key_3p_pane

0xf3ac,	// (0x00050b41) cell_vkbss_key_g1_ParamLimits

0xf3ac,	// (0x00050b41) cell_vkbss_key_g1

0xf3e2,	// (0x00050b77) cell_vkbss_key_t1_ParamLimits

0xf3e2,	// (0x00050b77) cell_vkbss_key_t1

0x3163,	// (0x000448f8) cell_ituss_key_pane_ParamLimits

0x3163,	// (0x000448f8) cell_ituss_key_pane

0xaa5e,	// (0x0004c1f3) bg_cell_ituss_key_g1_ParamLimits

0xaa5e,	// (0x0004c1f3) bg_cell_ituss_key_g1

0xaa6a,	// (0x0004c1ff) cell_ituss_key_pane_g1_ParamLimits

0xaa6a,	// (0x0004c1ff) cell_ituss_key_pane_g1

0x3174,	// (0x00044909) cell_ituss_key_pane_g2_ParamLimits

0x3174,	// (0x00044909) cell_ituss_key_pane_g2

0x0005,

0xfeb3,	// (0x00051648) cell_ituss_key_pane_g_ParamLimits

0xfeb3,	// (0x00051648) cell_ituss_key_pane_g

0x31f8,	// (0x0004498d) cell_ituss_key_t1_ParamLimits

0x31f8,	// (0x0004498d) cell_ituss_key_t1

0x3232,	// (0x000449c7) cell_ituss_key_t2_ParamLimits

0x3232,	// (0x000449c7) cell_ituss_key_t2

0x3264,	// (0x000449f9) cell_ituss_key_t3_ParamLimits

0x3264,	// (0x000449f9) cell_ituss_key_t3

0x3295,	// (0x00044a2a) cell_ituss_key_t4_ParamLimits

0x3295,	// (0x00044a2a) cell_ituss_key_t4

0x0004,

0xfec0,	// (0x00051655) cell_ituss_key_t_ParamLimits

0xfec0,	// (0x00051655) cell_ituss_key_t

0xf43e,	// (0x00050bd3) cell_vkbss_key_3p_pane_g1

0xf446,	// (0x00050bdb) cell_vkbss_key_3p_pane_g2

0xf44e,	// (0x00050be3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecb,	// (0x00051660) cell_vkbss_key_3p_pane_g

0x4941,	// (0x000460d6) bg_popup_fep_char_preview_window_cp02

0xaaa8,	// (0x0004c23d) popup_fep_char_pre_window_t1

0xf174,	// (0x00050909) main_ai5_sk_pane

0xa513,	// (0x0004bca8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa51f,	// (0x0004bcb4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ea0,	// (0x00049635) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa534,	// (0x0004bcc9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe97,	// (0x0005162c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa540,	// (0x0004bcd5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3c80,	// (0x00045415) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf456,	// (0x00050beb) main_ai5_sk_pane_g1

0x5657,	// (0x00046dec) popup_query_code_window_g1

0xf28e,	// (0x00050a23) popup_fep_vkb_icf_pane

0xa955,	// (0x0004c0ea) popup_fep_vtchi_icf_pane

0xaabf,	// (0x0004c254) bg_icf_pane

0xaabf,	// (0x0004c254) list_vkb_icf_pane

0xaacb,	// (0x0004c260) bg_icf_pane_cp01

0xaade,	// (0x0004c273) vtchi_icf_list_pane

0xf4ab,	// (0x00050c40) list_vkb_icf_pane_t1_ParamLimits

0xf4ab,	// (0x00050c40) list_vkb_icf_pane_t1

0xab5f,	// (0x0004c2f4) vtchi_icf_list_pane_t1_ParamLimits

0xab5f,	// (0x0004c2f4) vtchi_icf_list_pane_t1

0xa912,	// (0x0004c0a7) popup_fep_ituss_window_ParamLimits

0xa955,	// (0x0004c0ea) popup_fep_vtchi_icf_pane_ParamLimits

0xa97e,	// (0x0004c113) ituss_keypad_pane_ParamLimits

0x30f5,	// (0x0004488a) ituss_sks_pane

0xaabf,	// (0x0004c254) bg_icf_pane_ParamLimits

0xf273,	// (0x00050a08) icf_edit_indi_pane_ParamLimits

0xf273,	// (0x00050a08) icf_edit_indi_pane

0xaabf,	// (0x0004c254) list_vkb_icf_pane_ParamLimits

0xaacb,	// (0x0004c260) bg_icf_pane_cp01_ParamLimits

0xa8fd,	// (0x0004c092) icf_edit_indi_pane_cp01_ParamLimits

0xa8fd,	// (0x0004c092) icf_edit_indi_pane_cp01

0xaade,	// (0x0004c273) vtchi_query_pane

0x9c65,	// (0x0004b3fa) icf_edit_indi_pane_g1_ParamLimits

0x9c65,	// (0x0004b3fa) icf_edit_indi_pane_g1

0xf4c2,	// (0x00050c57) icf_edit_indi_pane_g2_ParamLimits

0xf4c2,	// (0x00050c57) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0005168b) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0005168b) icf_edit_indi_pane_g

0xf4d6,	// (0x00050c6b) icf_edit_indi_pane_t1

0xab7d,	// (0x0004c312) bg_input_focus_pane_cp042

0x3ba3,	// (0x00045338) vtchi_button_pane

0xab86,	// (0x0004c31b) vtchi_query_pane_t1

0xab94,	// (0x0004c329) vtchi_query_pane_t2

0xaba2,	// (0x0004c337) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0005167a) vtchi_query_pane_t

0xd3b4,	// (0x0004eb49) bg_button_pane_cp13

0xabb0,	// (0x0004c345) vtchi_button_pane_g1

0x32d8,	// (0x00044a6d) ituss_sks_pane_g1

0x32e3,	// (0x00044a78) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x00051681) ituss_sks_pane_g

0xabb8,	// (0x0004c34d) ituss_sks_pane_t1

0xabc6,	// (0x0004c35b) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x00051686) ituss_sks_pane_t

0x7242,	// (0x000489d7) indicator_nsta_pane_cp_g1

0x724b,	// (0x000489e0) indicator_nsta_pane_cp_g2

0x7253,	// (0x000489e8) indicator_nsta_pane_cp_g3

0x725b,	// (0x000489f0) indicator_nsta_pane_cp_g4

0x724b,	// (0x000489e0) indicator_nsta_pane_cp_g5

0x7253,	// (0x000489e8) indicator_nsta_pane_cp_g6

0x0005,

0xfa75,	// (0x0005120a) indicator_nsta_pane_cp_g

0xef8b,	// (0x00050720) cell_graphic2_pane_t2_ParamLimits

0xef8b,	// (0x00050720) cell_graphic2_pane_t2

0x0001,

0xfd82,	// (0x00051517) cell_graphic2_pane_t_ParamLimits

0xfd82,	// (0x00051517) cell_graphic2_pane_t

0xefc0,	// (0x00050755) cell_graphic2_control_pane_t1

0xd429,	// (0x0004ebbe) signal_pane_g3_ParamLimits

0xd429,	// (0x0004ebbe) signal_pane_g3

0xd43d,	// (0x0004ebd2) signal_pane_g4_ParamLimits

0xd43d,	// (0x0004ebd2) signal_pane_g4

0xa8cc,	// (0x0004c061) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa8cc,	// (0x0004c061) cell_ai5_widget_list_row_pane_t3

0xaa7e,	// (0x0004c213) cell_ituss_key_pane_t1_ParamLimits

0xaa7e,	// (0x0004c213) cell_ituss_key_pane_t1

0x5294,	// (0x00046a29) form_field_data_wide_pane_vc_t2_ParamLimits

0x5294,	// (0x00046a29) form_field_data_wide_pane_vc_t2

0x52a8,	// (0x00046a3d) form_field_data_wide_pane_vc_t3_ParamLimits

0x52a8,	// (0x00046a3d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00050f79) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00050f79) form_field_data_wide_pane_vc_t

0x6eec,	// (0x00048681) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6eec,	// (0x00048681) form_field_slider_wide_pane_vc_t3

0x6fca,	// (0x0004875f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6fca,	// (0x0004875f) form_field_popup_wide_pane_vc_t2

0x6fe1,	// (0x00048776) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6fe1,	// (0x00048776) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa64,	// (0x000511f9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x000511f9) form_field_popup_wide_pane_vc_t

0xd1af,	// (0x0004e944) aid_fshwr2_btn_pane_ParamLimits

0xd1bf,	// (0x0004e954) aid_fshwr2_syb_pane_ParamLimits

0xd1d3,	// (0x0004e968) aid_fshwr2_txt_pane_ParamLimits

0x3c80,	// (0x00045415) fshwr2_bg_pane_ParamLimits

0xd1e3,	// (0x0004e978) fshwr2_func_candi_pane_ParamLimits

0xd203,	// (0x0004e998) fshwr2_hwr_syb_pane_ParamLimits

0xd225,	// (0x0004e9ba) fshwr2_icf_pane_ParamLimits

0x2182,	// (0x00043917) list_double_graphic_pane_vc_g4_ParamLimits

0x2182,	// (0x00043917) list_double_graphic_pane_vc_g4

0x3194,	// (0x00044929) cell_ituss_key_pane_g3_ParamLimits

0x3194,	// (0x00044929) cell_ituss_key_pane_g3

0x32c6,	// (0x00044a5b) cell_ituss_key_t5_ParamLimits

0x32c6,	// (0x00044a5b) cell_ituss_key_t5

0xf29d,	// (0x00050a32) popup_fep_vkbss_window_ParamLimits

0x9df3,	// (0x0004b588) aid_cell_ai5_quarter

0xf4d6,	// (0x00050c6b) icf_edit_indi_pane_t1_ParamLimits

0x3718,	// (0x00044ead) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3718,	// (0x00044ead) aid_tch_indicator_popup_pane_cp2

0x372b,	// (0x00044ec0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x372b,	// (0x00044ec0) aid_tch_query_popup_data_pane_cp2

0x55ff,	// (0x00046d94) aid_tch_query_popup_pane_ParamLimits

0x55ff,	// (0x00046d94) aid_tch_query_popup_pane

0x55ff,	// (0x00046d94) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x55ff,	// (0x00046d94) aid_tch_query_popup_data_pane_cp1

0x4c65,	// (0x000463fa) cell_fshwr2_syb_bg_pane_ParamLimits

0xd331,	// (0x0004eac6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd344,	// (0x0004ead9) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf28e,	// (0x00050a23) popup_fep_vkb_icf_pane_ParamLimits

0xd13b,	// (0x0004e8d0) bg_popup_fep_char_preview_window_g10

0x9f30,	// (0x0004b6c5) cell_ai5_widget_pane_g11_ParamLimits

0x9f30,	// (0x0004b6c5) cell_ai5_widget_pane_g11

0x9f3c,	// (0x0004b6d1) cell_ai5_widget_pane_g12_ParamLimits

0x9f3c,	// (0x0004b6d1) cell_ai5_widget_pane_g12

0x9f48,	// (0x0004b6dd) cell_ai5_widget_pane_g13_ParamLimits

0x9f48,	// (0x0004b6dd) cell_ai5_widget_pane_g13

0xa077,	// (0x0004b80c) cell_ai5_widget_pane_t11_ParamLimits

0xa077,	// (0x0004b80c) cell_ai5_widget_pane_t11

0xa089,	// (0x0004b81e) cell_ai5_widget_pane_t12_ParamLimits

0xa089,	// (0x0004b81e) cell_ai5_widget_pane_t12

0x31a0,	// (0x00044935) cell_ituss_key_pane_g4_ParamLimits

0x31a0,	// (0x00044935) cell_ituss_key_pane_g4

0x31bc,	// (0x00044951) cell_ituss_key_pane_g5_ParamLimits

0x31bc,	// (0x00044951) cell_ituss_key_pane_g5

0x31d8,	// (0x0004496d) cell_ituss_key_pane_g6_ParamLimits

0x31d8,	// (0x0004496d) cell_ituss_key_pane_g6

0x518f,	// (0x00046924) bg_icf_pane_g1

0xf45f,	// (0x00050bf4) bg_icf_pane_g2

0xf469,	// (0x00050bfe) bg_icf_pane_g3

0xf471,	// (0x00050c06) bg_icf_pane_g4

0xf47b,	// (0x00050c10) bg_icf_pane_g5

0xf485,	// (0x00050c1a) bg_icf_pane_g6

0xf48f,	// (0x00050c24) bg_icf_pane_g7

0xf497,	// (0x00050c2c) bg_icf_pane_g8

0xf4a1,	// (0x00050c36) bg_icf_pane_g9

0x0008,

0xfed2,	// (0x00051667) bg_icf_pane_g

0xa96b,	// (0x0004c100) popup_hyb_candi_window_ParamLimits

0xa96b,	// (0x0004c100) popup_hyb_candi_window

0x5203,	// (0x00046998) bg_popup_sub_pane_cp01_ParamLimits

0x5203,	// (0x00046998) bg_popup_sub_pane_cp01

0xac01,	// (0x0004c396) entry_hyb_candi_pane_ParamLimits

0xac01,	// (0x0004c396) entry_hyb_candi_pane

0xac10,	// (0x0004c3a5) grid_hyb_candi_pane_ParamLimits

0xac10,	// (0x0004c3a5) grid_hyb_candi_pane

0xac25,	// (0x0004c3ba) grid_hyb_phrase_pane_ParamLimits

0xac25,	// (0x0004c3ba) grid_hyb_phrase_pane

0xac34,	// (0x0004c3c9) cell_hyb_candi_pane_ParamLimits

0xac34,	// (0x0004c3c9) cell_hyb_candi_pane

0xac57,	// (0x0004c3ec) cell_hyb_candi_scroll_pane

0x4309,	// (0x00045a9e) cell_hyb_candi_pane_g1

0xac60,	// (0x0004c3f5) cell_hyb_candi_pane_t1

0xac6e,	// (0x0004c403) cell_hyb_phrase_pane

0x4309,	// (0x00045a9e) cell_hyb_phrase_pane_g1

0xac77,	// (0x0004c40c) cell_hyb_phrase_pane_t1

0xac85,	// (0x0004c41a) entry_hyb_candi_pane_t1

0x4941,	// (0x000460d6) input_focus_pane_cp06

0xac93,	// (0x0004c428) cell_hyb_candi_scroll_pane_g1

0xac9b,	// (0x0004c430) cell_hyb_candi_scroll_pane_g1_aid

0xaca3,	// (0x0004c438) cell_hyb_candi_scroll_pane_g2

0xacab,	// (0x0004c440) cell_hyb_candi_scroll_pane_g2_aid

0xacb3,	// (0x0004c448) cell_hyb_candi_scroll_pane_g3

0xacbb,	// (0x0004c450) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
