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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000fbcf };

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
0x1413,	// (0x00010fe2) Screen

0x1425,	// (0x00010ff4) application_window_ParamLimits

0x1425,	// (0x00010ff4) application_window

0x143d,	// (0x0001100c) screen_g1

0x1447,	// (0x00011016) area_bottom_pane_ParamLimits

0x1447,	// (0x00011016) area_bottom_pane

0x14ac,	// (0x0001107b) area_top_pane_ParamLimits

0x14ac,	// (0x0001107b) area_top_pane

0xcc70,	// (0x0001c83f) main_pane_ParamLimits

0xcc70,	// (0x0001c83f) main_pane

0x1524,	// (0x000110f3) misc_graphics

0x34d6,	// (0x000130a5) battery_pane_ParamLimits

0x34d6,	// (0x000130a5) battery_pane

0x41fb,	// (0x00013dca) bg_status_flat_pane_g8

0x4203,	// (0x00013dd2) bg_status_flat_pane_g9

0x3591,	// (0x00013160) context_pane_ParamLimits

0x3591,	// (0x00013160) context_pane

0x36a8,	// (0x00013277) navi_pane_ParamLimits

0x36a8,	// (0x00013277) navi_pane

0x3725,	// (0x000132f4) signal_pane_ParamLimits

0x3725,	// (0x000132f4) signal_pane

0x0008,

0xf84f,	// (0x0001f41e) bg_status_flat_pane_g

0x378e,	// (0x0001335d) status_pane_g1_ParamLimits

0x378e,	// (0x0001335d) status_pane_g1

0x379a,	// (0x00013369) status_pane_g2_ParamLimits

0x379a,	// (0x00013369) status_pane_g2

0x37a6,	// (0x00013375) status_pane_g3_ParamLimits

0x37a6,	// (0x00013375) status_pane_g3

0x0004,

0xf77b,	// (0x0001f34a) status_pane_g_ParamLimits

0xf77b,	// (0x0001f34a) status_pane_g

0x37d8,	// (0x000133a7) title_pane_ParamLimits

0x37d8,	// (0x000133a7) title_pane

0x3815,	// (0x000133e4) uni_indicator_pane_ParamLimits

0x3815,	// (0x000133e4) uni_indicator_pane

0x33ec,	// (0x00012fbb) bg_list_pane_ParamLimits

0x33ec,	// (0x00012fbb) bg_list_pane

0xc340,	// (0x0001bf0f) find_pane

0x3414,	// (0x00012fe3) listscroll_app_pane_ParamLimits

0x3414,	// (0x00012fe3) listscroll_app_pane

0x3420,	// (0x00012fef) listscroll_form_pane

0xc348,	// (0x0001bf17) listscroll_gen_pane_ParamLimits

0xc348,	// (0x0001bf17) listscroll_gen_pane

0xd46b,	// (0x0001d03a) listscroll_set_pane

0x264c,	// (0x0001221b) main_idle_act_pane

0x3100,	// (0x00012ccf) main_idle_trad_pane

0x3100,	// (0x00012ccf) main_list_empty_pane

0x344f,	// (0x0001301e) main_midp_pane

0x345b,	// (0x0001302a) main_pane_g1_ParamLimits

0x345b,	// (0x0001302a) main_pane_g1

0xd473,	// (0x0001d042) popup_ai_message_window_ParamLimits

0xd473,	// (0x0001d042) popup_ai_message_window

0xd509,	// (0x0001d0d8) popup_fep_china_uni_window_ParamLimits

0xd509,	// (0x0001d0d8) popup_fep_china_uni_window

0xd547,	// (0x0001d116) popup_fep_japan_candidate_window_ParamLimits

0xd547,	// (0x0001d116) popup_fep_japan_candidate_window

0xd565,	// (0x0001d134) popup_fep_japan_predictive_window_ParamLimits

0xd565,	// (0x0001d134) popup_fep_japan_predictive_window

0xd591,	// (0x0001d160) popup_find_window

0xd59e,	// (0x0001d16d) popup_grid_graphic_window_ParamLimits

0xd59e,	// (0x0001d16d) popup_grid_graphic_window

0xd5bc,	// (0x0001d18b) popup_large_graphic_colour_window

0xd5de,	// (0x0001d1ad) popup_menu_window_ParamLimits

0xd5de,	// (0x0001d1ad) popup_menu_window

0xd716,	// (0x0001d2e5) popup_note_image_window

0xd704,	// (0x0001d2d3) popup_note_wait_window_ParamLimits

0xd704,	// (0x0001d2d3) popup_note_wait_window

0xd704,	// (0x0001d2d3) popup_note_window_ParamLimits

0xd704,	// (0x0001d2d3) popup_note_window

0xd76a,	// (0x0001d339) popup_query_code_window_ParamLimits

0xd76a,	// (0x0001d339) popup_query_code_window

0xd77c,	// (0x0001d34b) popup_query_data_code_window_ParamLimits

0xd77c,	// (0x0001d34b) popup_query_data_code_window

0xd791,	// (0x0001d360) popup_query_data_window_ParamLimits

0xd791,	// (0x0001d360) popup_query_data_window

0xd7a7,	// (0x0001d376) popup_query_sat_info_window_ParamLimits

0xd7a7,	// (0x0001d376) popup_query_sat_info_window

0xd7d8,	// (0x0001d3a7) popup_snote_single_graphic_window_ParamLimits

0xd7d8,	// (0x0001d3a7) popup_snote_single_graphic_window

0xd7d8,	// (0x0001d3a7) popup_snote_single_text_window_ParamLimits

0xd7d8,	// (0x0001d3a7) popup_snote_single_text_window

0xd7eb,	// (0x0001d3ba) popup_sub_window_general

0xd8ef,	// (0x0001d4be) popup_window_general_ParamLimits

0xd8ef,	// (0x0001d4be) popup_window_general

0x3471,	// (0x00013040) power_save_pane

0xd303,	// (0x0001ced2) control_pane_g1_ParamLimits

0xd303,	// (0x0001ced2) control_pane_g1

0xd324,	// (0x0001cef3) control_pane_g2_ParamLimits

0xd324,	// (0x0001cef3) control_pane_g2

0x33b7,	// (0x00012f86) control_pane_g3_ParamLimits

0x33b7,	// (0x00012f86) control_pane_g3

0x0007,

0xf763,	// (0x0001f332) control_pane_g_ParamLimits

0xf763,	// (0x0001f332) control_pane_g

0xd366,	// (0x0001cf35) control_pane_t1_ParamLimits

0xd366,	// (0x0001cf35) control_pane_t1

0xd3ba,	// (0x0001cf89) control_pane_t2_ParamLimits

0xd3ba,	// (0x0001cf89) control_pane_t2

0x0002,

0xf774,	// (0x0001f343) control_pane_t_ParamLimits

0xf774,	// (0x0001f343) control_pane_t

0x32de,	// (0x00012ead) navi_navi_volume_pane_cp1

0x32e6,	// (0x00012eb5) status_small_icon_pane

0x32ee,	// (0x00012ebd) status_small_pane_g1_ParamLimits

0x32ee,	// (0x00012ebd) status_small_pane_g1

0x3322,	// (0x00012ef1) status_small_pane_g2_ParamLimits

0x3322,	// (0x00012ef1) status_small_pane_g2

0x332e,	// (0x00012efd) status_small_pane_g3_ParamLimits

0x332e,	// (0x00012efd) status_small_pane_g3

0x333a,	// (0x00012f09) status_small_pane_g4_ParamLimits

0x333a,	// (0x00012f09) status_small_pane_g4

0x3346,	// (0x00012f15) status_small_pane_g5_ParamLimits

0x3346,	// (0x00012f15) status_small_pane_g5

0x3352,	// (0x00012f21) status_small_pane_g6_ParamLimits

0x3352,	// (0x00012f21) status_small_pane_g6

0x0007,

0xf752,	// (0x0001f321) status_small_pane_g_ParamLimits

0xf752,	// (0x0001f321) status_small_pane_g

0x3381,	// (0x00012f50) status_small_pane_t1

0x33a3,	// (0x00012f72) status_small_wait_pane_ParamLimits

0x33a3,	// (0x00012f72) status_small_wait_pane

0x2b53,	// (0x00012722) aid_levels_signal_ParamLimits

0x2b53,	// (0x00012722) aid_levels_signal

0x2b64,	// (0x00012733) signal_pane_g1_ParamLimits

0x2b64,	// (0x00012733) signal_pane_g1

0x2b7a,	// (0x00012749) signal_pane_g2_ParamLimits

0x2b7a,	// (0x00012749) signal_pane_g2

0x0003,

0xf6e3,	// (0x0001f2b2) signal_pane_g_ParamLimits

0xf6e3,	// (0x0001f2b2) signal_pane_g

0x2bb5,	// (0x00012784) context_pane_g1

0x152e,	// (0x000110fd) title_pane_g1

0x1564,	// (0x00011133) title_pane_t1

0x15cc,	// (0x0001119b) title_pane_t2

0x15f2,	// (0x000111c1) title_pane_t3

0x0002,

0xf532,	// (0x0001f101) title_pane_t

0x382b,	// (0x000133fa) aid_levels_battery_ParamLimits

0x382b,	// (0x000133fa) aid_levels_battery

0x383e,	// (0x0001340d) battery_pane_g1_ParamLimits

0x383e,	// (0x0001340d) battery_pane_g1

0x3853,	// (0x00013422) battery_pane_g2_ParamLimits

0x3853,	// (0x00013422) battery_pane_g2

0x0001,

0xf786,	// (0x0001f355) battery_pane_g_ParamLimits

0xf786,	// (0x0001f355) battery_pane_g

0x4ae4,	// (0x000146b3) uni_indicator_pane_g1

0x4af8,	// (0x000146c7) uni_indicator_pane_g2

0x4b0d,	// (0x000146dc) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0001f4c6) uni_indicator_pane_g

0x2579,	// (0x00012148) navi_icon_pane_ParamLimits

0x2579,	// (0x00012148) navi_icon_pane

0x1524,	// (0x000110f3) navi_midp_pane

0x1524,	// (0x000110f3) navi_navi_pane

0x2579,	// (0x00012148) navi_text_pane_ParamLimits

0x2579,	// (0x00012148) navi_text_pane

0x143d,	// (0x0001100c) status_small_wait_pane_g1

0x1a66,	// (0x00011635) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0001f4c1) status_small_wait_pane_g

0x4817,	// (0x000143e6) navi_navi_icon_text_pane

0x4831,	// (0x00014400) navi_navi_pane_g1_ParamLimits

0x4831,	// (0x00014400) navi_navi_pane_g1

0x481f,	// (0x000143ee) navi_navi_pane_g2_ParamLimits

0x481f,	// (0x000143ee) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0001f48f) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0001f48f) navi_navi_pane_g

0x4843,	// (0x00014412) navi_navi_tabs_pane

0x4817,	// (0x000143e6) navi_navi_text_pane

0x4817,	// (0x000143e6) navi_navi_volume_pane

0x47f3,	// (0x000143c2) navi_text_pane_t1

0x47e7,	// (0x000143b6) navi_icon_pane_g1

0x473b,	// (0x0001430a) navi_navi_text_pane_t1

0xdb56,	// (0x0001d725) navi_navi_volume_pane_g1

0xdb5e,	// (0x0001d72d) volume_small_pane

0x46a1,	// (0x00014270) navi_navi_icon_text_pane_g1

0x46a9,	// (0x00014278) navi_navi_icon_text_pane_t1

0x425b,	// (0x00013e2a) navi_tabs_2_long_pane

0x425b,	// (0x00013e2a) navi_tabs_2_pane

0x425b,	// (0x00013e2a) navi_tabs_3_long_pane

0x425b,	// (0x00013e2a) navi_tabs_3_pane

0x425b,	// (0x00013e2a) navi_tabs_4_pane

0xdb36,	// (0x0001d705) tabs_2_active_pane_ParamLimits

0xdb36,	// (0x0001d705) tabs_2_active_pane

0xdb46,	// (0x0001d715) tabs_2_passive_pane_ParamLimits

0xdb46,	// (0x0001d715) tabs_2_passive_pane

0xdb04,	// (0x0001d6d3) tabs_3_active_pane_ParamLimits

0xdb04,	// (0x0001d6d3) tabs_3_active_pane

0xdb14,	// (0x0001d6e3) tabs_3_passive_pane_ParamLimits

0xdb14,	// (0x0001d6e3) tabs_3_passive_pane

0xdb25,	// (0x0001d6f4) tabs_3_passive_pane_cp_ParamLimits

0xdb25,	// (0x0001d6f4) tabs_3_passive_pane_cp

0xdac0,	// (0x0001d68f) tabs_4_active_pane_ParamLimits

0xdac0,	// (0x0001d68f) tabs_4_active_pane

0xdad1,	// (0x0001d6a0) tabs_4_passive_pane_ParamLimits

0xdad1,	// (0x0001d6a0) tabs_4_passive_pane

0xdae2,	// (0x0001d6b1) tabs_4_passive_pane_cp_ParamLimits

0xdae2,	// (0x0001d6b1) tabs_4_passive_pane_cp

0xdaf3,	// (0x0001d6c2) tabs_4_passive_pane_cp2_ParamLimits

0xdaf3,	// (0x0001d6c2) tabs_4_passive_pane_cp2

0xdaa0,	// (0x0001d66f) tabs_2_long_active_pane_ParamLimits

0xdaa0,	// (0x0001d66f) tabs_2_long_active_pane

0xdab0,	// (0x0001d67f) tabs_2_long_passive_pane_ParamLimits

0xdab0,	// (0x0001d67f) tabs_2_long_passive_pane

0xda6b,	// (0x0001d63a) tabs_3_long_active_pane_ParamLimits

0xda6b,	// (0x0001d63a) tabs_3_long_active_pane

0xda7c,	// (0x0001d64b) tabs_3_long_passive_pane_ParamLimits

0xda7c,	// (0x0001d64b) tabs_3_long_passive_pane

0xda8f,	// (0x0001d65e) tabs_3_long_passive_pane_cp_ParamLimits

0xda8f,	// (0x0001d65e) tabs_3_long_passive_pane_cp

0xda11,	// (0x0001d5e0) volume_small_pane_g1

0xda1a,	// (0x0001d5e9) volume_small_pane_g2

0xda23,	// (0x0001d5f2) volume_small_pane_g3

0xda2c,	// (0x0001d5fb) volume_small_pane_g4

0xda35,	// (0x0001d604) volume_small_pane_g5

0xda3e,	// (0x0001d60d) volume_small_pane_g6

0xda47,	// (0x0001d616) volume_small_pane_g7

0xda50,	// (0x0001d61f) volume_small_pane_g8

0xda59,	// (0x0001d628) volume_small_pane_g9

0xda62,	// (0x0001d631) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001f45b) volume_small_pane_g

0x1604,	// (0x000111d3) bg_active_tab_pane_cp2_ParamLimits

0x1604,	// (0x000111d3) bg_active_tab_pane_cp2

0x1612,	// (0x000111e1) tabs_3_active_pane_g1

0x161a,	// (0x000111e9) tabs_3_active_pane_t1

0x1604,	// (0x000111d3) bg_passive_tab_pane_cp2_ParamLimits

0x1604,	// (0x000111d3) bg_passive_tab_pane_cp2

0x1612,	// (0x000111e1) tabs_3_passive_pane_g1

0x161a,	// (0x000111e9) tabs_3_passive_pane_t1

0x1604,	// (0x000111d3) bg_active_tab_pane_cp3_ParamLimits

0x1604,	// (0x000111d3) bg_active_tab_pane_cp3

0x162c,	// (0x000111fb) tabs_4_active_pane_g1

0x1634,	// (0x00011203) tabs_4_active_pane_t1

0x1604,	// (0x000111d3) bg_passive_tab_pane_cp3_ParamLimits

0x1604,	// (0x000111d3) bg_passive_tab_pane_cp3

0x162c,	// (0x000111fb) tabs_4_1_passive_pane_g1

0x1634,	// (0x00011203) tabs_4_1_passive_pane_t1

0x344f,	// (0x0001301e) list_highlight_pane_cp2

0x4d33,	// (0x00014902) list_set_pane_ParamLimits

0x4d33,	// (0x00014902) list_set_pane

0x4dc1,	// (0x00014990) main_pane_set_t1_ParamLimits

0x4dc1,	// (0x00014990) main_pane_set_t1

0x4de1,	// (0x000149b0) main_pane_set_t2_ParamLimits

0x4de1,	// (0x000149b0) main_pane_set_t2

0x4df3,	// (0x000149c2) main_pane_set_t3_ParamLimits

0x4df3,	// (0x000149c2) main_pane_set_t3

0x4e05,	// (0x000149d4) main_pane_set_t4_ParamLimits

0x4e05,	// (0x000149d4) main_pane_set_t4

0x0003,

0xf95c,	// (0x0001f52b) main_pane_set_t_ParamLimits

0xf95c,	// (0x0001f52b) main_pane_set_t

0x4e17,	// (0x000149e6) setting_code_pane

0x4e1f,	// (0x000149ee) setting_slider_graphic_pane

0x4e1f,	// (0x000149ee) setting_slider_pane

0x4e1f,	// (0x000149ee) setting_text_pane

0x4e1f,	// (0x000149ee) setting_volume_pane

0xce6f,	// (0x0001ca3e) volume_set_pane

0x1604,	// (0x000111d3) bg_set_opt_pane_cp

0xce77,	// (0x0001ca46) setting_slider_pane_t1

0xce8d,	// (0x0001ca5c) setting_slider_pane_t2

0xcea6,	// (0x0001ca75) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001f108) setting_slider_pane_t

0xcebd,	// (0x0001ca8c) slider_set_pane

0x1524,	// (0x000110f3) bg_set_opt_pane_cp2

0x1646,	// (0x00011215) setting_slider_graphic_pane_g1

0xced3,	// (0x0001caa2) setting_slider_graphic_pane_t1

0xcee2,	// (0x0001cab1) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001f10f) setting_slider_graphic_pane_t

0xcef1,	// (0x0001cac0) slider_set_pane_cp

0x1524,	// (0x000110f3) input_focus_pane_cp1

0x4cf9,	// (0x000148c8) list_set_text_pane

0x143d,	// (0x0001100c) setting_text_pane_g1

0x1524,	// (0x000110f3) input_focus_pane_cp2

0x143d,	// (0x0001100c) setting_code_pane_g1

0x164f,	// (0x0001121e) setting_code_pane_t1

0xbbd6,	// (0x0001b7a5) set_text_pane_t1_ParamLimits

0xbbd6,	// (0x0001b7a5) set_text_pane_t1

0x2426,	// (0x00011ff5) set_opt_bg_pane_g1

0x242e,	// (0x00011ffd) set_opt_bg_pane_g2

0x4cd9,	// (0x000148a8) set_opt_bg_pane_g3

0x243e,	// (0x0001200d) set_opt_bg_pane_g4

0x2446,	// (0x00012015) set_opt_bg_pane_g5

0x244e,	// (0x0001201d) set_opt_bg_pane_g6

0x4ce1,	// (0x000148b0) set_opt_bg_pane_g7

0x4ce9,	// (0x000148b8) set_opt_bg_pane_g8

0x4cf1,	// (0x000148c0) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0001f518) set_opt_bg_pane_g

0x4ccc,	// (0x0001489b) slider_set_pane_g1

0xdbcb,	// (0x0001d79a) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0001f509) slider_set_pane_g

0xdb67,	// (0x0001d736) volume_set_pane_g1

0xdb6f,	// (0x0001d73e) volume_set_pane_g2

0xdb77,	// (0x0001d746) volume_set_pane_g3

0xdb7f,	// (0x0001d74e) volume_set_pane_g4

0xdb87,	// (0x0001d756) volume_set_pane_g5

0xdb8f,	// (0x0001d75e) volume_set_pane_g6

0xdb97,	// (0x0001d766) volume_set_pane_g7

0xdb9f,	// (0x0001d76e) volume_set_pane_g8

0xdba7,	// (0x0001d776) volume_set_pane_g9

0xdbaf,	// (0x0001d77e) volume_set_pane_g10

0x0009,

0xf912,	// (0x0001f4e1) volume_set_pane_g

0x1679,	// (0x00011248) indicator_pane_ParamLimits

0x1679,	// (0x00011248) indicator_pane

0x1685,	// (0x00011254) main_idle_pane_g2_ParamLimits

0x1685,	// (0x00011254) main_idle_pane_g2

0x16a9,	// (0x00011278) main_pane_idle_g1_ParamLimits

0x16a9,	// (0x00011278) main_pane_idle_g1

0x16b6,	// (0x00011285) popup_clock_digital_analogue_window_ParamLimits

0x16b6,	// (0x00011285) popup_clock_digital_analogue_window

0x16cd,	// (0x0001129c) soft_indicator_pane_ParamLimits

0x16cd,	// (0x0001129c) soft_indicator_pane

0x16d9,	// (0x000112a8) wallpaper_pane_ParamLimits

0x16d9,	// (0x000112a8) wallpaper_pane

0x143d,	// (0x0001100c) wallpaper_pane_g1

0x16ed,	// (0x000112bc) indicator_pane_g1_ParamLimits

0x16ed,	// (0x000112bc) indicator_pane_g1

0x510b,	// (0x00014cda) navi_navi_icon_text_pane_srt_g1

0x1708,	// (0x000112d7) soft_indicator_pane_t1

0x1722,	// (0x000112f1) aid_ps_area_pane

0x1733,	// (0x00011302) aid_ps_clock_pane

0x173f,	// (0x0001130e) aid_ps_indicator_pane

0x174b,	// (0x0001131a) indicator_ps_pane_ParamLimits

0x174b,	// (0x0001131a) indicator_ps_pane

0x175a,	// (0x00011329) power_save_pane_g1_ParamLimits

0x175a,	// (0x00011329) power_save_pane_g1

0x1766,	// (0x00011335) power_save_pane_g2_ParamLimits

0x1766,	// (0x00011335) power_save_pane_g2

0xcbec,	// (0x0001c7bb) aid_navinavi_width_pane

0x1722,	// (0x000112f1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001f114) power_save_pane_g_ParamLimits

0xf545,	// (0x0001f114) power_save_pane_g

0x1774,	// (0x00011343) power_save_pane_t1_ParamLimits

0x1774,	// (0x00011343) power_save_pane_t1

0x1733,	// (0x00011302) aid_ps_clock_pane_ParamLimits

0x173f,	// (0x0001130e) aid_ps_indicator_pane_ParamLimits

0x1786,	// (0x00011355) power_save_pane_t4_ParamLimits

0x1786,	// (0x00011355) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001f119) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001f119) power_save_pane_t

0x17b0,	// (0x0001137f) power_save_t3_ParamLimits

0x17b0,	// (0x0001137f) power_save_t3

0x179b,	// (0x0001136a) power_save_t2_ParamLimits

0x179b,	// (0x0001136a) power_save_t2

0x17c5,	// (0x00011394) indicator_ps_pane_g1

0x17ce,	// (0x0001139d) ai_gene_pane_ParamLimits

0x17ce,	// (0x0001139d) ai_gene_pane

0x17da,	// (0x000113a9) ai_links_pane_ParamLimits

0x17da,	// (0x000113a9) ai_links_pane

0x17e6,	// (0x000113b5) indicator_pane_cp1_ParamLimits

0x17e6,	// (0x000113b5) indicator_pane_cp1

0x17f2,	// (0x000113c1) main_pane_idle_g1_cp_ParamLimits

0x17f2,	// (0x000113c1) main_pane_idle_g1_cp

0x17fe,	// (0x000113cd) popup_ai_links_title_window

0x1807,	// (0x000113d6) soft_indicator_pane_cp1_ParamLimits

0x1807,	// (0x000113d6) soft_indicator_pane_cp1

0x4ad2,	// (0x000146a1) ai_links_pane_g1

0x4adb,	// (0x000146aa) grid_ai_links_pane

0x4ab7,	// (0x00014686) ai_gene_pane_1

0x4ac0,	// (0x0001468f) ai_gene_pane_2

0x4ac9,	// (0x00014698) list_highlight_pane_cp4

0x4a9b,	// (0x0001466a) cell_ai_link_pane_ParamLimits

0x4a9b,	// (0x0001466a) cell_ai_link_pane

0x4a93,	// (0x00014662) cell_ai_link_pane_g1

0x1a66,	// (0x00011635) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001f4bc) cell_ai_link_pane_g

0x1524,	// (0x000110f3) grid_highlight_cp2

0x1524,	// (0x000110f3) bg_popup_sub_pane_cp1

0x1821,	// (0x000113f0) popup_ai_links_title_window_t1

0x49e5,	// (0x000145b4) ai_gene_pane_1_g1_ParamLimits

0x49e5,	// (0x000145b4) ai_gene_pane_1_g1

0x49f1,	// (0x000145c0) ai_gene_pane_1_g2_ParamLimits

0x49f1,	// (0x000145c0) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0001f4b2) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0001f4b2) ai_gene_pane_1_g

0x49fe,	// (0x000145cd) ai_gene_pane_1_t1_ParamLimits

0x49fe,	// (0x000145cd) ai_gene_pane_1_t1

0x4a32,	// (0x00014601) grid_ai_soft_ind_pane

0x49d0,	// (0x0001459f) ai_gene_pane_2_t1_ParamLimits

0x49d0,	// (0x0001459f) ai_gene_pane_2_t1

0x1830,	// (0x000113ff) main_pane_empty_t1_ParamLimits

0x1830,	// (0x000113ff) main_pane_empty_t1

0x184d,	// (0x0001141c) main_pane_empty_t2_ParamLimits

0x184d,	// (0x0001141c) main_pane_empty_t2

0x1865,	// (0x00011434) main_pane_empty_t3_ParamLimits

0x1865,	// (0x00011434) main_pane_empty_t3

0x1878,	// (0x00011447) main_pane_empty_t4_ParamLimits

0x1878,	// (0x00011447) main_pane_empty_t4

0x188b,	// (0x0001145a) main_pane_empty_t5_ParamLimits

0x188b,	// (0x0001145a) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001f11e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001f11e) main_pane_empty_t

0x2579,	// (0x00012148) bg_popup_window_pane_ParamLimits

0x2579,	// (0x00012148) bg_popup_window_pane

0x474a,	// (0x00014319) find_popup_pane_cp2_ParamLimits

0x474a,	// (0x00014319) find_popup_pane_cp2

0x4756,	// (0x00014325) heading_pane_ParamLimits

0x4756,	// (0x00014325) heading_pane

0x1524,	// (0x000110f3) bg_popup_sub_pane

0x46c3,	// (0x00014292) bg_popup_window_pane_g1_ParamLimits

0x46c3,	// (0x00014292) bg_popup_window_pane_g1

0x46cf,	// (0x0001429e) bg_popup_window_pane_g2_ParamLimits

0x46cf,	// (0x0001429e) bg_popup_window_pane_g2

0x46db,	// (0x000142aa) bg_popup_window_pane_g3_ParamLimits

0x46db,	// (0x000142aa) bg_popup_window_pane_g3

0x46e7,	// (0x000142b6) bg_popup_window_pane_g4_ParamLimits

0x46e7,	// (0x000142b6) bg_popup_window_pane_g4

0x46f3,	// (0x000142c2) bg_popup_window_pane_g5_ParamLimits

0x46f3,	// (0x000142c2) bg_popup_window_pane_g5

0x46ff,	// (0x000142ce) bg_popup_window_pane_g6_ParamLimits

0x46ff,	// (0x000142ce) bg_popup_window_pane_g6

0x470b,	// (0x000142da) bg_popup_window_pane_g7_ParamLimits

0x470b,	// (0x000142da) bg_popup_window_pane_g7

0x4717,	// (0x000142e6) bg_popup_window_pane_g8_ParamLimits

0x4717,	// (0x000142e6) bg_popup_window_pane_g8

0x4723,	// (0x000142f2) bg_popup_window_pane_g9_ParamLimits

0x4723,	// (0x000142f2) bg_popup_window_pane_g9

0x472f,	// (0x000142fe) bg_popup_window_pane_g10_ParamLimits

0x472f,	// (0x000142fe) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001f47a) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001f47a) bg_popup_window_pane_g

0x4658,	// (0x00014227) bg_popup_heading_pane_ParamLimits

0x4658,	// (0x00014227) bg_popup_heading_pane

0xdc53,	// (0x0001d822) tabs_4_passive_pane_cp_srt_ParamLimits

0xdc53,	// (0x0001d822) tabs_4_passive_pane_cp_srt

0xdc65,	// (0x0001d834) tabs_4_passive_pane_srt_ParamLimits

0x466c,	// (0x0001423b) heading_pane_g2

0xdc65,	// (0x0001d834) tabs_4_passive_pane_srt

0x344f,	// (0x0001301e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x344f,	// (0x0001301e) bg_passive_tab_pane_cp3_srt

0x4674,	// (0x00014243) heading_pane_t1_ParamLimits

0x4674,	// (0x00014243) heading_pane_t1

0x468b,	// (0x0001425a) heading_pane_t2_ParamLimits

0x468b,	// (0x0001425a) heading_pane_t2

0x0001,

0xf8a6,	// (0x0001f475) heading_pane_t_ParamLimits

0xf8a6,	// (0x0001f475) heading_pane_t

0x41c3,	// (0x00013d92) bg_popup_heading_pane_g1

0x426c,	// (0x00013e3b) bg_popup_heading_pane_g2

0x4274,	// (0x00013e43) bg_popup_heading_pane_g3

0x427c,	// (0x00013e4b) bg_popup_heading_pane_g4

0x4284,	// (0x00013e53) bg_popup_heading_pane_g5

0x428c,	// (0x00013e5b) bg_popup_heading_pane_g6

0x4294,	// (0x00013e63) bg_popup_heading_pane_g7

0x429c,	// (0x00013e6b) bg_popup_heading_pane_g8

0x42a4,	// (0x00013e73) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0001f431) bg_popup_heading_pane_g

0x394c,	// (0x0001351b) bg_popup_sub_pane_g1

0x395c,	// (0x0001352b) bg_popup_sub_pane_g2

0x3954,	// (0x00013523) bg_popup_sub_pane_g3

0x396c,	// (0x0001353b) bg_popup_sub_pane_g4

0x3964,	// (0x00013533) bg_popup_sub_pane_g5

0x3974,	// (0x00013543) bg_popup_sub_pane_g6

0x397c,	// (0x0001354b) bg_popup_sub_pane_g7

0x398c,	// (0x0001355b) bg_popup_sub_pane_g8

0x3984,	// (0x00013553) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0001f40b) bg_popup_sub_pane_g

0x189e,	// (0x0001146d) bg_popup_window_pane_cp5_ParamLimits

0x189e,	// (0x0001146d) bg_popup_window_pane_cp5

0x18ba,	// (0x00011489) popup_note_window_g1_ParamLimits

0x18ba,	// (0x00011489) popup_note_window_g1

0x18c6,	// (0x00011495) popup_note_window_t1_ParamLimits

0x18c6,	// (0x00011495) popup_note_window_t1

0x18dc,	// (0x000114ab) popup_note_window_t2_ParamLimits

0x18dc,	// (0x000114ab) popup_note_window_t2

0x18f2,	// (0x000114c1) popup_note_window_t3_ParamLimits

0x18f2,	// (0x000114c1) popup_note_window_t3

0x1908,	// (0x000114d7) popup_note_window_t4_ParamLimits

0x1908,	// (0x000114d7) popup_note_window_t4

0x1930,	// (0x000114ff) popup_note_window_t5_ParamLimits

0x1930,	// (0x000114ff) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001f129) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001f129) popup_note_window_t

0x197a,	// (0x00011549) bg_popup_window_pane_cp6_ParamLimits

0x197a,	// (0x00011549) bg_popup_window_pane_cp6

0x413f,	// (0x00013d0e) popup_note_image_window_g1_ParamLimits

0x413f,	// (0x00013d0e) popup_note_image_window_g1

0x414b,	// (0x00013d1a) popup_note_image_window_g2_ParamLimits

0x414b,	// (0x00013d1a) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0001f3ff) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0001f3ff) popup_note_image_window_g

0x4164,	// (0x00013d33) popup_note_image_window_t1_ParamLimits

0x4164,	// (0x00013d33) popup_note_image_window_t1

0x417d,	// (0x00013d4c) popup_note_image_window_t2_ParamLimits

0x417d,	// (0x00013d4c) popup_note_image_window_t2

0x4196,	// (0x00013d65) popup_note_image_window_t3_ParamLimits

0x4196,	// (0x00013d65) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0001f404) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0001f404) popup_note_image_window_t

0x400e,	// (0x00013bdd) bg_popup_window_pane_cp7_ParamLimits

0x400e,	// (0x00013bdd) bg_popup_window_pane_cp7

0x403e,	// (0x00013c0d) popup_note_wait_window_g1_ParamLimits

0x403e,	// (0x00013c0d) popup_note_wait_window_g1

0x404a,	// (0x00013c19) popup_note_wait_window_g2_ParamLimits

0x404a,	// (0x00013c19) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0001f3ed) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0001f3ed) popup_note_wait_window_g

0x4062,	// (0x00013c31) popup_note_wait_window_t1_ParamLimits

0x4062,	// (0x00013c31) popup_note_wait_window_t1

0x4089,	// (0x00013c58) popup_note_wait_window_t2_ParamLimits

0x4089,	// (0x00013c58) popup_note_wait_window_t2

0x40a6,	// (0x00013c75) popup_note_wait_window_t3_ParamLimits

0x40a6,	// (0x00013c75) popup_note_wait_window_t3

0x40b9,	// (0x00013c88) popup_note_wait_window_t4_ParamLimits

0x40b9,	// (0x00013c88) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0001f3f4) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0001f3f4) popup_note_wait_window_t

0x40de,	// (0x00013cad) wait_bar_pane_ParamLimits

0x40de,	// (0x00013cad) wait_bar_pane

0x1524,	// (0x000110f3) wait_anim_pane

0x1524,	// (0x000110f3) wait_border_pane

0x143d,	// (0x0001100c) wait_anim_pane_g1

0x143d,	// (0x0001100c) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0001f2ad) wait_anim_pane_g

0x3fbe,	// (0x00013b8d) wait_border_pane_g1

0x3fc7,	// (0x00013b96) wait_border_pane_g2

0x3fd0,	// (0x00013b9f) wait_border_pane_g3

0x0002,

0xf817,	// (0x0001f3e6) wait_border_pane_g

0x3e2e,	// (0x000139fd) bg_popup_window_pane_cp16_ParamLimits

0x3e2e,	// (0x000139fd) bg_popup_window_pane_cp16

0x3f2e,	// (0x00013afd) indicator_popup_pane_cp4_ParamLimits

0x3f2e,	// (0x00013afd) indicator_popup_pane_cp4

0x3f42,	// (0x00013b11) popup_query_data_window_t1_ParamLimits

0x3f42,	// (0x00013b11) popup_query_data_window_t1

0x3f54,	// (0x00013b23) popup_query_data_window_t2_ParamLimits

0x3f54,	// (0x00013b23) popup_query_data_window_t2

0x3f6d,	// (0x00013b3c) popup_query_data_window_t3_ParamLimits

0x3f6d,	// (0x00013b3c) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0001f3df) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0001f3df) popup_query_data_window_t

0x3f87,	// (0x00013b56) query_popup_data_pane_ParamLimits

0x3f87,	// (0x00013b56) query_popup_data_pane

0x3f9b,	// (0x00013b6a) query_popup_data_pane_cp1_ParamLimits

0x3f9b,	// (0x00013b6a) query_popup_data_pane_cp1

0x3e2e,	// (0x000139fd) bg_popup_window_pane_cp10_ParamLimits

0x3e2e,	// (0x000139fd) bg_popup_window_pane_cp10

0x3e60,	// (0x00013a2f) indicator_popup_pane_ParamLimits

0x3e60,	// (0x00013a2f) indicator_popup_pane

0x3e82,	// (0x00013a51) popup_query_code_window_t1_ParamLimits

0x3e82,	// (0x00013a51) popup_query_code_window_t1

0x3e9c,	// (0x00013a6b) popup_query_code_window_t2_ParamLimits

0x3e9c,	// (0x00013a6b) popup_query_code_window_t2

0x3ee5,	// (0x00013ab4) popup_query_code_window_t3_ParamLimits

0x3ee5,	// (0x00013ab4) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0001f3d8) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0001f3d8) popup_query_code_window_t

0x3f14,	// (0x00013ae3) query_popup_pane_ParamLimits

0x3f14,	// (0x00013ae3) query_popup_pane

0x197a,	// (0x00011549) bg_popup_window_pane_cp15_ParamLimits

0x197a,	// (0x00011549) bg_popup_window_pane_cp15

0x1998,	// (0x00011567) indicator_popup_pane_cp1_ParamLimits

0x1998,	// (0x00011567) indicator_popup_pane_cp1

0x19ab,	// (0x0001157a) indicator_popup_pane_cp2_ParamLimits

0x19ab,	// (0x0001157a) indicator_popup_pane_cp2

0x19be,	// (0x0001158d) popup_query_data_code_window_g1_ParamLimits

0x19be,	// (0x0001158d) popup_query_data_code_window_g1

0x19d1,	// (0x000115a0) popup_query_data_code_window_t1_ParamLimits

0x19d1,	// (0x000115a0) popup_query_data_code_window_t1

0x19e3,	// (0x000115b2) popup_query_data_code_window_t2_ParamLimits

0x19e3,	// (0x000115b2) popup_query_data_code_window_t2

0x19f5,	// (0x000115c4) popup_query_data_code_window_t3_ParamLimits

0x19f5,	// (0x000115c4) popup_query_data_code_window_t3

0x1a0b,	// (0x000115da) popup_query_data_code_window_t4_ParamLimits

0x1a0b,	// (0x000115da) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001f134) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001f134) popup_query_data_code_window_t

0x2f7a,	// (0x00012b49) list_single_midp_graphic_pane_g3

0x1a23,	// (0x000115f2) query_popup_data_pane_cp2_ParamLimits

0x1a36,	// (0x00011605) query_popup_pane_cp2_ParamLimits

0x1a36,	// (0x00011605) query_popup_pane_cp2

0x1524,	// (0x000110f3) bg_popup_window_pane_cp11

0x3e12,	// (0x000139e1) heading_pane_cp5

0x3e1a,	// (0x000139e9) listscroll_popup_info_pane

0x1524,	// (0x000110f3) input_focus_pane_cp3

0x1a49,	// (0x00011618) query_popup_pane_t1

0x1a57,	// (0x00011626) list_popup_info_pane_ParamLimits

0x1a57,	// (0x00011626) list_popup_info_pane

0x1a66,	// (0x00011635) listscroll_popup_info_pane_g1

0x1a6e,	// (0x0001163d) scroll_pane_cp7

0x1a76,	// (0x00011645) popup_info_list_pane_t1_ParamLimits

0x1a76,	// (0x00011645) popup_info_list_pane_t1

0x1a90,	// (0x0001165f) popup_info_list_pane_t2_ParamLimits

0x1a90,	// (0x0001165f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001f13d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001f13d) popup_info_list_pane_t

0x1524,	// (0x000110f3) bg_popup_window_pane_cp12

0x5125,	// (0x00014cf4) find_popup_pane

0x1604,	// (0x000111d3) bg_popup_window_pane_cp3

0x1aaa,	// (0x00011679) heading_pane_cp3

0x1ab9,	// (0x00011688) listscroll_popup_graphic_pane

0x1524,	// (0x000110f3) bg_popup_window_pane_cp4

0x1b18,	// (0x000116e7) heading_pane_cp4

0x1b20,	// (0x000116ef) listscroll_popup_colour_pane

0x1b28,	// (0x000116f7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x1b28,	// (0x000116f7) cell_large_graphic_colour_none_popup_pane

0x1b38,	// (0x00011707) grid_large_graphic_colour_popup_pane_ParamLimits

0x1b38,	// (0x00011707) grid_large_graphic_colour_popup_pane

0x1b54,	// (0x00011723) listscroll_popup_colour_pane_g1_ParamLimits

0x1b54,	// (0x00011723) listscroll_popup_colour_pane_g1

0x1b6b,	// (0x0001173a) listscroll_popup_colour_pane_g2_ParamLimits

0x1b6b,	// (0x0001173a) listscroll_popup_colour_pane_g2

0x1b82,	// (0x00011751) listscroll_popup_colour_pane_g3_ParamLimits

0x1b82,	// (0x00011751) listscroll_popup_colour_pane_g3

0x1b92,	// (0x00011761) listscroll_popup_colour_pane_g4_ParamLimits

0x1b92,	// (0x00011761) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001f142) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001f142) listscroll_popup_colour_pane_g

0x1ba1,	// (0x00011770) scroll_pane_cp6_ParamLimits

0x1ba1,	// (0x00011770) scroll_pane_cp6

0x1bb3,	// (0x00011782) cell_large_graphic_colour_popup_pane_ParamLimits

0x1bb3,	// (0x00011782) cell_large_graphic_colour_popup_pane

0x1bd2,	// (0x000117a1) cell_large_graphic_colour_none_popup_pane_t1

0x1524,	// (0x000110f3) grid_highlight_pane_cp5

0x1be1,	// (0x000117b0) cell_large_graphic_colour_popup_pane_g1

0x1be9,	// (0x000117b8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001f14b) cell_large_graphic_colour_popup_pane_g

0x1bf1,	// (0x000117c0) cell_large_graphic_colour_popup_pane_g2_copy1

0x1bfa,	// (0x000117c9) grid_highlight_pane_cp4

0x1c02,	// (0x000117d1) bg_popup_window_pane_cp8_ParamLimits

0x1c02,	// (0x000117d1) bg_popup_window_pane_cp8

0x1c1d,	// (0x000117ec) popup_snote_single_text_window_g1_ParamLimits

0x1c1d,	// (0x000117ec) popup_snote_single_text_window_g1

0x1c2f,	// (0x000117fe) popup_snote_single_text_window_t1_ParamLimits

0x1c2f,	// (0x000117fe) popup_snote_single_text_window_t1

0x1c42,	// (0x00011811) popup_snote_single_text_window_t2_ParamLimits

0x1c42,	// (0x00011811) popup_snote_single_text_window_t2

0x1c55,	// (0x00011824) popup_snote_single_text_window_t3_ParamLimits

0x1c55,	// (0x00011824) popup_snote_single_text_window_t3

0x1c8e,	// (0x0001185d) popup_snote_single_text_window_t4_ParamLimits

0x1c8e,	// (0x0001185d) popup_snote_single_text_window_t4

0x1cc2,	// (0x00011891) popup_snote_single_text_window_t5_ParamLimits

0x1cc2,	// (0x00011891) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001f150) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001f150) popup_snote_single_text_window_t

0x1cf1,	// (0x000118c0) bg_popup_window_pane_cp9_ParamLimits

0x1cf1,	// (0x000118c0) bg_popup_window_pane_cp9

0x1c1d,	// (0x000117ec) popup_snote_single_graphic_window_g1_ParamLimits

0x1c1d,	// (0x000117ec) popup_snote_single_graphic_window_g1

0x1cff,	// (0x000118ce) popup_snote_single_graphic_window_g2_ParamLimits

0x1cff,	// (0x000118ce) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001f15b) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001f15b) popup_snote_single_graphic_window_g

0x1d0b,	// (0x000118da) popup_snote_single_graphic_window_t1_ParamLimits

0x1d0b,	// (0x000118da) popup_snote_single_graphic_window_t1

0x1d1e,	// (0x000118ed) popup_snote_single_graphic_window_t2_ParamLimits

0x1d1e,	// (0x000118ed) popup_snote_single_graphic_window_t2

0x1c55,	// (0x00011824) popup_snote_single_graphic_window_t3_ParamLimits

0x1c55,	// (0x00011824) popup_snote_single_graphic_window_t3

0x1c8e,	// (0x0001185d) popup_snote_single_graphic_window_t4_ParamLimits

0x1c8e,	// (0x0001185d) popup_snote_single_graphic_window_t4

0x1cc2,	// (0x00011891) popup_snote_single_graphic_window_t5_ParamLimits

0x1cc2,	// (0x00011891) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001f160) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001f160) popup_snote_single_graphic_window_t

0x5092,	// (0x00014c61) grid_graphic_popup_pane_ParamLimits

0x5092,	// (0x00014c61) grid_graphic_popup_pane

0x50b5,	// (0x00014c84) listscroll_popup_graphic_pane_g1_ParamLimits

0x50b5,	// (0x00014c84) listscroll_popup_graphic_pane_g1

0x50c9,	// (0x00014c98) listscroll_popup_graphic_pane_g2_ParamLimits

0x50c9,	// (0x00014c98) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0001f555) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0001f555) listscroll_popup_graphic_pane_g

0x50dd,	// (0x00014cac) scroll_pane_cp5

0x5036,	// (0x00014c05) cell_graphic_popup_pane_ParamLimits

0x5036,	// (0x00014c05) cell_graphic_popup_pane

0x5017,	// (0x00014be6) cell_graphic_popup_pane_g1

0x501f,	// (0x00014bee) cell_graphic_popup_pane_g2

0x1bf1,	// (0x000117c0) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001f54e) cell_graphic_popup_pane_g

0x5028,	// (0x00014bf7) cell_graphic_popup_pane_t2

0x1bfa,	// (0x000117c9) grid_highlight_pane_cp3

0x1d43,	// (0x00011912) list_gen_pane_ParamLimits

0x1d43,	// (0x00011912) list_gen_pane

0x1d74,	// (0x00011943) scroll_pane

0x4f97,	// (0x00014b66) bg_list_pane_g1_ParamLimits

0x4f97,	// (0x00014b66) bg_list_pane_g1

0x4fae,	// (0x00014b7d) bg_list_pane_g2_ParamLimits

0x4fae,	// (0x00014b7d) bg_list_pane_g2

0x4fc1,	// (0x00014b90) bg_list_pane_g3_ParamLimits

0x4fc1,	// (0x00014b90) bg_list_pane_g3

0x4fd3,	// (0x00014ba2) bg_list_pane_g4_ParamLimits

0x4fd3,	// (0x00014ba2) bg_list_pane_g4

0x4fe5,	// (0x00014bb4) bg_list_pane_g5_ParamLimits

0x4fe5,	// (0x00014bb4) bg_list_pane_g5

0x0004,

0xf974,	// (0x0001f543) bg_list_pane_g_ParamLimits

0xf974,	// (0x0001f543) bg_list_pane_g

0xc4c5,	// (0x0001c094) list_double2_graphic_large_graphic_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double2_graphic_large_graphic_pane

0xc4c5,	// (0x0001c094) list_double2_graphic_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double2_graphic_pane

0xc4c5,	// (0x0001c094) list_double2_large_graphic_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double2_large_graphic_pane

0x4ec5,	// (0x00014a94) list_double2_pane_ParamLimits

0x4ec5,	// (0x00014a94) list_double2_pane

0xc4c5,	// (0x0001c094) list_double_graphic_heading_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_graphic_heading_pane

0xc4c5,	// (0x0001c094) list_double_graphic_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_graphic_pane

0xc4c5,	// (0x0001c094) list_double_heading_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_heading_pane

0xc4c5,	// (0x0001c094) list_double_large_graphic_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_large_graphic_pane

0xc4c5,	// (0x0001c094) list_double_number_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_number_pane

0xc4c5,	// (0x0001c094) list_double_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_pane

0xc4c5,	// (0x0001c094) list_double_time_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_double_time_pane

0xc4c5,	// (0x0001c094) list_setting_number_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_setting_number_pane

0xc4c5,	// (0x0001c094) list_setting_pane_ParamLimits

0xc4c5,	// (0x0001c094) list_setting_pane

0xc51e,	// (0x0001c0ed) list_single_2graphic_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_2graphic_pane

0xc51e,	// (0x0001c0ed) list_single_graphic_heading_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_graphic_heading_pane

0xc51e,	// (0x0001c0ed) list_single_graphic_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_graphic_pane

0xc51e,	// (0x0001c0ed) list_single_heading_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_heading_pane

0xc535,	// (0x0001c104) list_single_large_graphic_pane_ParamLimits

0xc535,	// (0x0001c104) list_single_large_graphic_pane

0xc51e,	// (0x0001c0ed) list_single_number_heading_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_number_heading_pane

0xc51e,	// (0x0001c0ed) list_single_number_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_number_pane

0xc51e,	// (0x0001c0ed) list_single_pane_ParamLimits

0xc51e,	// (0x0001c0ed) list_single_pane

0x1524,	// (0x000110f3) list_highlight_pane_cp1

0xbbfe,	// (0x0001b7cd) list_single_pane_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_pane_g1

0xbc0a,	// (0x0001b7d9) list_single_pane_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001f172) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001f172) list_single_pane_g

0xc4af,	// (0x0001c07e) list_single_pane_t1_ParamLimits

0xc4af,	// (0x0001c07e) list_single_pane_t1

0xbbfe,	// (0x0001b7cd) list_single_number_pane_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_number_pane_g1

0xbc0a,	// (0x0001b7d9) list_single_number_pane_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001f172) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001f172) list_single_number_pane_g

0xbc16,	// (0x0001b7e5) list_single_number_pane_t1_ParamLimits

0xbc16,	// (0x0001b7e5) list_single_number_pane_t1

0xc470,	// (0x0001c03f) list_single_number_pane_t2_ParamLimits

0xc470,	// (0x0001c03f) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0001f504) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0001f504) list_single_number_pane_t

0xbbf2,	// (0x0001b7c1) list_single_graphic_pane_g1_ParamLimits

0xbbf2,	// (0x0001b7c1) list_single_graphic_pane_g1

0xbbfe,	// (0x0001b7cd) list_single_graphic_pane_g2_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_graphic_pane_g2

0xbc0a,	// (0x0001b7d9) list_single_graphic_pane_g3_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001f16b) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001f16b) list_single_graphic_pane_g

0xbc16,	// (0x0001b7e5) list_single_graphic_pane_t1_ParamLimits

0xbc16,	// (0x0001b7e5) list_single_graphic_pane_t1

0xbbfe,	// (0x0001b7cd) list_single_heading_pane_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_heading_pane_g1

0xbc0a,	// (0x0001b7d9) list_single_heading_pane_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001f172) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001f172) list_single_heading_pane_g

0xbc2c,	// (0x0001b7fb) list_single_heading_pane_t1_ParamLimits

0xbc2c,	// (0x0001b7fb) list_single_heading_pane_t1

0xbc42,	// (0x0001b811) list_single_heading_pane_t2_ParamLimits

0xbc42,	// (0x0001b811) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001f177) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001f177) list_single_heading_pane_t

0xbbfe,	// (0x0001b7cd) list_single_number_heading_pane_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_number_heading_pane_g1

0xbc0a,	// (0x0001b7d9) list_single_number_heading_pane_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001f172) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001f172) list_single_number_heading_pane_g

0xbc2c,	// (0x0001b7fb) list_single_number_heading_pane_t1_ParamLimits

0xbc2c,	// (0x0001b7fb) list_single_number_heading_pane_t1

0xbc54,	// (0x0001b823) list_single_number_heading_pane_t2_ParamLimits

0xbc54,	// (0x0001b823) list_single_number_heading_pane_t2

0xbc66,	// (0x0001b835) list_single_number_heading_pane_t3_ParamLimits

0xbc66,	// (0x0001b835) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001f17c) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001f17c) list_single_number_heading_pane_t

0xbbf2,	// (0x0001b7c1) list_single_graphic_heading_pane_g1_ParamLimits

0xbbf2,	// (0x0001b7c1) list_single_graphic_heading_pane_g1

0xbc78,	// (0x0001b847) list_single_graphic_heading_pane_g4_ParamLimits

0xbc78,	// (0x0001b847) list_single_graphic_heading_pane_g4

0xbc0a,	// (0x0001b7d9) list_single_graphic_heading_pane_g5_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001f183) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001f183) list_single_graphic_heading_pane_g

0xbc2c,	// (0x0001b7fb) list_single_graphic_heading_pane_t1_ParamLimits

0xbc2c,	// (0x0001b7fb) list_single_graphic_heading_pane_t1

0xbc87,	// (0x0001b856) list_single_graphic_heading_pane_t2_ParamLimits

0xbc87,	// (0x0001b856) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001f18a) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001f18a) list_single_graphic_heading_pane_t

0xbc99,	// (0x0001b868) list_single_large_graphic_pane_g1_ParamLimits

0xbc99,	// (0x0001b868) list_single_large_graphic_pane_g1

0xbca5,	// (0x0001b874) list_single_large_graphic_pane_g2_ParamLimits

0xbca5,	// (0x0001b874) list_single_large_graphic_pane_g2

0xbcb1,	// (0x0001b880) list_single_large_graphic_pane_g3_ParamLimits

0xbcb1,	// (0x0001b880) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001f18f) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001f18f) list_single_large_graphic_pane_g

0x3fc7,	// (0x00013b96) wait_border_pane_g2_copy1

0xbcbd,	// (0x0001b88c) list_single_large_graphic_pane_g4_cp2

0xbcc5,	// (0x0001b894) list_single_large_graphic_pane_t1_ParamLimits

0xbcc5,	// (0x0001b894) list_single_large_graphic_pane_t1

0xbcdb,	// (0x0001b8aa) list_double_pane_g1_ParamLimits

0xbcdb,	// (0x0001b8aa) list_double_pane_g1

0xbce7,	// (0x0001b8b6) list_double_pane_g2_ParamLimits

0xbce7,	// (0x0001b8b6) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001f196) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001f196) list_double_pane_g

0xbcf3,	// (0x0001b8c2) list_double_pane_t1_ParamLimits

0xbcf3,	// (0x0001b8c2) list_double_pane_t1

0xbd09,	// (0x0001b8d8) list_double_pane_t2_ParamLimits

0xbd09,	// (0x0001b8d8) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001f19b) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001f19b) list_double_pane_t

0xbd1b,	// (0x0001b8ea) list_double2_pane_g1_ParamLimits

0xbd1b,	// (0x0001b8ea) list_double2_pane_g1

0xbd2a,	// (0x0001b8f9) list_double2_pane_g2_ParamLimits

0xbd2a,	// (0x0001b8f9) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001f1a0) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001f1a0) list_double2_pane_g

0xbd36,	// (0x0001b905) list_double2_pane_t1_ParamLimits

0xbd36,	// (0x0001b905) list_double2_pane_t1

0xbd4c,	// (0x0001b91b) list_double2_pane_t2_ParamLimits

0xbd4c,	// (0x0001b91b) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001f1a5) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001f1a5) list_double2_pane_t

0xbcdb,	// (0x0001b8aa) list_double_number_pane_g1_ParamLimits

0xbcdb,	// (0x0001b8aa) list_double_number_pane_g1

0xbce7,	// (0x0001b8b6) list_double_number_pane_g2_ParamLimits

0xbce7,	// (0x0001b8b6) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001f196) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001f196) list_double_number_pane_g

0xbd5e,	// (0x0001b92d) list_double_number_pane_t1_ParamLimits

0xbd5e,	// (0x0001b92d) list_double_number_pane_t1

0xbd70,	// (0x0001b93f) list_double_number_pane_t2_ParamLimits

0xbd70,	// (0x0001b93f) list_double_number_pane_t2

0xbd86,	// (0x0001b955) list_double_number_pane_t3_ParamLimits

0xbd86,	// (0x0001b955) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001f1aa) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001f1aa) list_double_number_pane_t

0xbbf2,	// (0x0001b7c1) list_double_graphic_pane_g1_ParamLimits

0xbbf2,	// (0x0001b7c1) list_double_graphic_pane_g1

0xbd98,	// (0x0001b967) list_double_graphic_pane_g2_ParamLimits

0xbd98,	// (0x0001b967) list_double_graphic_pane_g2

0xbda7,	// (0x0001b976) list_double_graphic_pane_g3_ParamLimits

0xbda7,	// (0x0001b976) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001f1b1) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001f1b1) list_double_graphic_pane_g

0xbdbf,	// (0x0001b98e) list_double_graphic_pane_t1_ParamLimits

0xbdbf,	// (0x0001b98e) list_double_graphic_pane_t1

0xbdd5,	// (0x0001b9a4) list_double_graphic_pane_t2_ParamLimits

0xbdd5,	// (0x0001b9a4) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001f1ba) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001f1ba) list_double_graphic_pane_t

0xbde7,	// (0x0001b9b6) list_double2_graphic_pane_g1_ParamLimits

0xbde7,	// (0x0001b9b6) list_double2_graphic_pane_g1

0xbcdb,	// (0x0001b8aa) list_double2_graphic_pane_g2_ParamLimits

0xbcdb,	// (0x0001b8aa) list_double2_graphic_pane_g2

0xbce7,	// (0x0001b8b6) list_double2_graphic_pane_g3_ParamLimits

0xbce7,	// (0x0001b8b6) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001f1bf) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001f1bf) list_double2_graphic_pane_g

0xbdf3,	// (0x0001b9c2) list_double2_graphic_pane_t1_ParamLimits

0xbdf3,	// (0x0001b9c2) list_double2_graphic_pane_t1

0xbe09,	// (0x0001b9d8) list_double2_graphic_pane_t2_ParamLimits

0xbe09,	// (0x0001b9d8) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001f1c6) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001f1c6) list_double2_graphic_pane_t

0xbe1b,	// (0x0001b9ea) list_double_large_graphic_pane_g1_ParamLimits

0xbe1b,	// (0x0001b9ea) list_double_large_graphic_pane_g1

0xbe44,	// (0x0001ba13) list_double_large_graphic_pane_g2_ParamLimits

0xbe44,	// (0x0001ba13) list_double_large_graphic_pane_g2

0xbce7,	// (0x0001b8b6) list_double_large_graphic_pane_g3_ParamLimits

0xbce7,	// (0x0001b8b6) list_double_large_graphic_pane_g3

0xbe53,	// (0x0001ba22) list_double_large_graphic_pane_g4_ParamLimits

0xbe53,	// (0x0001ba22) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001f1cb) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001f1cb) list_double_large_graphic_pane_g

0xbe79,	// (0x0001ba48) list_double_large_graphic_pane_t1_ParamLimits

0xbe79,	// (0x0001ba48) list_double_large_graphic_pane_t1

0xbe92,	// (0x0001ba61) list_double_large_graphic_pane_t2_ParamLimits

0xbe92,	// (0x0001ba61) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001f1d6) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001f1d6) list_double_large_graphic_pane_t

0xbea4,	// (0x0001ba73) list_double2_large_graphic_pane_g1_ParamLimits

0xbea4,	// (0x0001ba73) list_double2_large_graphic_pane_g1

0xbeb0,	// (0x0001ba7f) list_double2_large_graphic_pane_g2_ParamLimits

0xbeb0,	// (0x0001ba7f) list_double2_large_graphic_pane_g2

0xbebf,	// (0x0001ba8e) list_double2_large_graphic_pane_g3_ParamLimits

0xbebf,	// (0x0001ba8e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001f1db) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001f1db) list_double2_large_graphic_pane_g

0xbecb,	// (0x0001ba9a) list_double2_large_graphic_pane_t1_ParamLimits

0xbecb,	// (0x0001ba9a) list_double2_large_graphic_pane_t1

0xbee1,	// (0x0001bab0) list_double2_large_graphic_pane_t2_ParamLimits

0xbee1,	// (0x0001bab0) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001f1e2) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001f1e2) list_double2_large_graphic_pane_t

0xbef3,	// (0x0001bac2) list_double_heading_pane_g1_ParamLimits

0xbef3,	// (0x0001bac2) list_double_heading_pane_g1

0xbf02,	// (0x0001bad1) list_double_heading_pane_g2_ParamLimits

0xbf02,	// (0x0001bad1) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001f1e7) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001f1e7) list_double_heading_pane_g

0xbf0e,	// (0x0001badd) list_double_heading_pane_t1_ParamLimits

0xbf0e,	// (0x0001badd) list_double_heading_pane_t1

0xbf24,	// (0x0001baf3) list_double_heading_pane_t2_ParamLimits

0xbf24,	// (0x0001baf3) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001f1ec) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001f1ec) list_double_heading_pane_t

0xbf36,	// (0x0001bb05) list_double_graphic_heading_pane_g1_ParamLimits

0xbf36,	// (0x0001bb05) list_double_graphic_heading_pane_g1

0xbef3,	// (0x0001bac2) list_double_graphic_heading_pane_g2_ParamLimits

0xbef3,	// (0x0001bac2) list_double_graphic_heading_pane_g2

0xbf02,	// (0x0001bad1) list_double_graphic_heading_pane_g3_ParamLimits

0xbf02,	// (0x0001bad1) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001f1f1) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001f1f1) list_double_graphic_heading_pane_g

0xbf42,	// (0x0001bb11) list_double_graphic_heading_pane_t1_ParamLimits

0xbf42,	// (0x0001bb11) list_double_graphic_heading_pane_t1

0xbe09,	// (0x0001b9d8) list_double_graphic_heading_pane_t2_ParamLimits

0xbe09,	// (0x0001b9d8) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001f1f8) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001f1f8) list_double_graphic_heading_pane_t

0xbe44,	// (0x0001ba13) list_double_time_pane_g1_ParamLimits

0xbe44,	// (0x0001ba13) list_double_time_pane_g1

0xbce7,	// (0x0001b8b6) list_double_time_pane_g2_ParamLimits

0xbce7,	// (0x0001b8b6) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001f1fd) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001f1fd) list_double_time_pane_g

0xbf58,	// (0x0001bb27) list_double_time_pane_t1_ParamLimits

0xbf58,	// (0x0001bb27) list_double_time_pane_t1

0xbf6e,	// (0x0001bb3d) list_double_time_pane_t2_ParamLimits

0xbf6e,	// (0x0001bb3d) list_double_time_pane_t2

0xbf80,	// (0x0001bb4f) list_double_time_pane_t3_ParamLimits

0xbf80,	// (0x0001bb4f) list_double_time_pane_t3

0xbf92,	// (0x0001bb61) list_double_time_pane_t4_ParamLimits

0xbf92,	// (0x0001bb61) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001f202) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001f202) list_double_time_pane_t

0xbfa4,	// (0x0001bb73) list_setting_pane_g1_ParamLimits

0xbfa4,	// (0x0001bb73) list_setting_pane_g1

0xbebf,	// (0x0001ba8e) list_setting_pane_g2_ParamLimits

0xbebf,	// (0x0001ba8e) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001f20b) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001f20b) list_setting_pane_g

0xbfb0,	// (0x0001bb7f) list_setting_pane_t1_ParamLimits

0xbfb0,	// (0x0001bb7f) list_setting_pane_t1

0xbfca,	// (0x0001bb99) list_setting_pane_t2_ParamLimits

0xbfca,	// (0x0001bb99) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001f210) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001f210) list_setting_pane_t

0xc007,	// (0x0001bbd6) set_value_pane_cp_ParamLimits

0xc007,	// (0x0001bbd6) set_value_pane_cp

0xc013,	// (0x0001bbe2) list_setting_number_pane_g1_ParamLimits

0xc013,	// (0x0001bbe2) list_setting_number_pane_g1

0xc01f,	// (0x0001bbee) list_setting_number_pane_g2_ParamLimits

0xc01f,	// (0x0001bbee) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0001f217) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0001f217) list_setting_number_pane_g

0xc02b,	// (0x0001bbfa) list_setting_number_pane_t1_ParamLimits

0xc02b,	// (0x0001bbfa) list_setting_number_pane_t1

0xc042,	// (0x0001bc11) list_setting_number_pane_t2_ParamLimits

0xc042,	// (0x0001bc11) list_setting_number_pane_t2

0xc05c,	// (0x0001bc2b) list_setting_number_pane_t3_ParamLimits

0xc05c,	// (0x0001bc2b) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0001f21c) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0001f21c) list_setting_number_pane_t

0xc007,	// (0x0001bbd6) set_value_pane_ParamLimits

0xc007,	// (0x0001bbd6) set_value_pane

0x21e9,	// (0x00011db8) bg_set_opt_pane_ParamLimits

0x21e9,	// (0x00011db8) bg_set_opt_pane

0xc09d,	// (0x0001bc6c) set_value_pane_t1

0x2218,	// (0x00011de7) slider_set_pane_cp3

0x2221,	// (0x00011df0) volume_small_pane_cp

0x222a,	// (0x00011df9) list_form_gen_pane

0x1d98,	// (0x00011967) scroll_pane_cp8

0xc0b3,	// (0x0001bc82) form_field_data_pane_ParamLimits

0xc0b3,	// (0x0001bc82) form_field_data_pane

0xc0d3,	// (0x0001bca2) form_field_data_wide_pane_ParamLimits

0xc0d3,	// (0x0001bca2) form_field_data_wide_pane

0xc0f2,	// (0x0001bcc1) form_field_popup_pane_ParamLimits

0xc0f2,	// (0x0001bcc1) form_field_popup_pane

0xc10a,	// (0x0001bcd9) form_field_popup_wide_pane_ParamLimits

0xc10a,	// (0x0001bcd9) form_field_popup_wide_pane

0xc121,	// (0x0001bcf0) form_field_slider_pane_ParamLimits

0xc121,	// (0x0001bcf0) form_field_slider_pane

0xc134,	// (0x0001bd03) form_field_slider_wide_pane_ParamLimits

0xc134,	// (0x0001bd03) form_field_slider_wide_pane

0x22d7,	// (0x00011ea6) data_form_pane

0x235c,	// (0x00011f2b) form_field_data_pane_t1

0x2303,	// (0x00011ed2) input_focus_pane

0x2311,	// (0x00011ee0) data_form_wide_pane

0xc15b,	// (0x0001bd2a) form_field_data_wide_pane_t1

0x1c0f,	// (0x000117de) input_focus_pane_cp6

0xc17d,	// (0x0001bd4c) form_field_popup_pane_t1

0x2303,	// (0x00011ed2) input_focus_pane_cp7

0x22d7,	// (0x00011ea6) list_form_pane

0xc19d,	// (0x0001bd6c) form_field_popup_wide_pane_t1

0x2303,	// (0x00011ed2) input_focus_pane_cp8

0x2391,	// (0x00011f60) list_form_wide_pane

0xc1ba,	// (0x0001bd89) form_field_slider_pane_t1_ParamLimits

0xc1ba,	// (0x0001bd89) form_field_slider_pane_t1

0xc1cc,	// (0x0001bd9b) form_field_slider_pane_t2_ParamLimits

0xc1cc,	// (0x0001bd9b) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0001f22c) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0001f22c) form_field_slider_pane_t

0x189e,	// (0x0001146d) input_focus_pane_cp9_ParamLimits

0x189e,	// (0x0001146d) input_focus_pane_cp9

0xc1de,	// (0x0001bdad) slider_cont_pane_ParamLimits

0xc1de,	// (0x0001bdad) slider_cont_pane

0x23e4,	// (0x00011fb3) form_field_slider_wide_pane_t1_ParamLimits

0x23e4,	// (0x00011fb3) form_field_slider_wide_pane_t1

0xc1f2,	// (0x0001bdc1) form_field_slider_wide_pane_t2_ParamLimits

0xc1f2,	// (0x0001bdc1) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0001f231) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0001f231) form_field_slider_wide_pane_t

0x189e,	// (0x0001146d) input_focus_pane_cp10_ParamLimits

0x189e,	// (0x0001146d) input_focus_pane_cp10

0xc204,	// (0x0001bdd3) slider_cont_pane_cp1_ParamLimits

0xc204,	// (0x0001bdd3) slider_cont_pane_cp1

0xc21a,	// (0x0001bde9) slider_form_pane_cp

0x2426,	// (0x00011ff5) input_focus_pane_g1

0x242e,	// (0x00011ffd) input_focus_pane_g2

0x2436,	// (0x00012005) input_focus_pane_g3

0x243e,	// (0x0001200d) input_focus_pane_g4

0x2446,	// (0x00012015) input_focus_pane_g5

0x244e,	// (0x0001201d) input_focus_pane_g6

0x2456,	// (0x00012025) input_focus_pane_g7

0x245e,	// (0x0001202d) input_focus_pane_g8

0x2466,	// (0x00012035) input_focus_pane_g9

0x143d,	// (0x0001100c) input_focus_pane_g10

0x0009,

0xf667,	// (0x0001f236) input_focus_pane_g

0x3fd0,	// (0x00013b9f) wait_border_pane_g3_copy1

0xc222,	// (0x0001bdf1) data_form_pane_t1

0x143d,	// (0x0001100c) wait_anim_pane_g1_copy1

0xc482,	// (0x0001c051) data_form_wide_pane_t1

0xc23c,	// (0x0001be0b) list_form_graphic_pane_cp_ParamLimits

0xc23c,	// (0x0001be0b) list_form_graphic_pane_cp

0x4e43,	// (0x00014a12) slider_form_pane_g1

0x4e4c,	// (0x00014a1b) slider_form_pane_g2

0x0006,

0xf965,	// (0x0001f534) slider_form_pane_g

0xc23c,	// (0x0001be0b) list_form_graphic_pane_ParamLimits

0xc23c,	// (0x0001be0b) list_form_graphic_pane

0xc252,	// (0x0001be21) list_form_graphic_pane_g1

0xc25a,	// (0x0001be29) list_form_graphic_pane_t1_ParamLimits

0xc25a,	// (0x0001be29) list_form_graphic_pane_t1

0x1604,	// (0x000111d3) list_highlight_pane_cp5_ParamLimits

0x1604,	// (0x000111d3) list_highlight_pane_cp5

0xc26f,	// (0x0001be3e) find_pane_g1

0x24d9,	// (0x000120a8) input_find_pane

0xc278,	// (0x0001be47) input_find_pane_g1_ParamLimits

0xc278,	// (0x0001be47) input_find_pane_g1

0xc284,	// (0x0001be53) input_find_pane_t1_ParamLimits

0xc284,	// (0x0001be53) input_find_pane_t1

0xc299,	// (0x0001be68) input_find_pane_t2_ParamLimits

0xc299,	// (0x0001be68) input_find_pane_t2

0x0001,

0xf67c,	// (0x0001f24b) input_find_pane_t_ParamLimits

0xf67c,	// (0x0001f24b) input_find_pane_t

0x2518,	// (0x000120e7) input_focus_pane_cp5_ParamLimits

0x2518,	// (0x000120e7) input_focus_pane_cp5

0x189e,	// (0x0001146d) bg_popup_window_pane_cp2_ParamLimits

0x189e,	// (0x0001146d) bg_popup_window_pane_cp2

0x2537,	// (0x00012106) listscroll_menu_pane_ParamLimits

0x2537,	// (0x00012106) listscroll_menu_pane

0x2543,	// (0x00012112) popup_submenu_window_ParamLimits

0x2543,	// (0x00012112) popup_submenu_window

0x2567,	// (0x00012136) find_popup_pane_g1

0x256f,	// (0x0001213e) input_popup_find_pane_cp

0x2579,	// (0x00012148) input_focus_pane_cp4_ParamLimits

0x2579,	// (0x00012148) input_focus_pane_cp4

0x2593,	// (0x00012162) input_popup_find_pane_t1_ParamLimits

0x2593,	// (0x00012162) input_popup_find_pane_t1

0x1524,	// (0x000110f3) bg_popup_sub_pane_cp

0x25c1,	// (0x00012190) listscroll_popup_sub_pane

0x25c9,	// (0x00012198) list_submenu_pane_ParamLimits

0x25c9,	// (0x00012198) list_submenu_pane

0x25da,	// (0x000121a9) scroll_pane_cp4

0x25e2,	// (0x000121b1) list_single_popup_submenu_pane_ParamLimits

0x25e2,	// (0x000121b1) list_single_popup_submenu_pane

0x25f4,	// (0x000121c3) list_single_popup_submenu_pane_g1

0x25fc,	// (0x000121cb) list_single_popup_submenu_pane_t1_ParamLimits

0x25fc,	// (0x000121cb) list_single_popup_submenu_pane_t1

0x1604,	// (0x000111d3) bg_active_tab_pane_cp1_ParamLimits

0x1604,	// (0x000111d3) bg_active_tab_pane_cp1

0x2611,	// (0x000121e0) tabs_2_active_pane_g1

0x2619,	// (0x000121e8) tabs_2_active_pane_t1

0x1604,	// (0x000111d3) bg_passive_tab_pane_cp1_ParamLimits

0x1604,	// (0x000111d3) bg_passive_tab_pane_cp1

0x2611,	// (0x000121e0) tabs_2_passive_pane_g1

0x2619,	// (0x000121e8) tabs_2_passive_pane_t1

0x262b,	// (0x000121fa) bg_active_tab_pane_cp4

0x2639,	// (0x00012208) tabs_2_long_active_pane_t1

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp4

0x44a5,	// (0x00014074) list_single_midp_graphic_pane_g4_ParamLimits

0x262b,	// (0x000121fa) bg_active_tab_pane_cp5

0x2658,	// (0x00012227) tabs_3_long_active_pane_t1

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp5

0x44a5,	// (0x00014074) list_single_midp_graphic_pane_g4

0x1604,	// (0x000111d3) bg_popup_window_pane_cp13_ParamLimits

0x1604,	// (0x000111d3) bg_popup_window_pane_cp13

0x2673,	// (0x00012242) listscroll_popup_fast_pane_ParamLimits

0x2673,	// (0x00012242) listscroll_popup_fast_pane

0x2682,	// (0x00012251) grid_popup_fast_pane_ParamLimits

0x2682,	// (0x00012251) grid_popup_fast_pane

0x2694,	// (0x00012263) scroll_pane_cp9_ParamLimits

0x2694,	// (0x00012263) scroll_pane_cp9

0x6a9b,	// (0x0001666a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6a9b,	// (0x0001666a) list_single_graphic_hl_pane_t1_cp2

0x26b8,	// (0x00012287) input_focus_pane_cp20_ParamLimits

0x26b8,	// (0x00012287) input_focus_pane_cp20

0x26c6,	// (0x00012295) query_popup_data_pane_t1_ParamLimits

0x26c6,	// (0x00012295) query_popup_data_pane_t1

0x26d9,	// (0x000122a8) query_popup_data_pane_t2_ParamLimits

0x26d9,	// (0x000122a8) query_popup_data_pane_t2

0x271f,	// (0x000122ee) query_popup_data_pane_t3_ParamLimits

0x271f,	// (0x000122ee) query_popup_data_pane_t3

0x2760,	// (0x0001232f) query_popup_data_pane_t4_ParamLimits

0x2760,	// (0x0001232f) query_popup_data_pane_t4

0x279c,	// (0x0001236b) query_popup_data_pane_t5_ParamLimits

0x279c,	// (0x0001236b) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0001f250) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0001f250) query_popup_data_pane_t

0x2426,	// (0x00011ff5) bg_set_opt_pane_g1

0x242e,	// (0x00011ffd) bg_set_opt_pane_g2

0x2436,	// (0x00012005) bg_set_opt_pane_g3

0x243e,	// (0x0001200d) bg_set_opt_pane_g4

0x2446,	// (0x00012015) bg_set_opt_pane_g5

0x244e,	// (0x0001201d) bg_set_opt_pane_g6

0x2456,	// (0x00012025) bg_set_opt_pane_g7

0x245e,	// (0x0001202d) bg_set_opt_pane_g8

0x2466,	// (0x00012035) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0001f25b) bg_set_opt_pane_g

0xd12d,	// (0x0001ccfc) control_top_pane_stacon_ParamLimits

0xd12d,	// (0x0001ccfc) control_top_pane_stacon

0xd180,	// (0x0001cd4f) signal_pane_stacon_ParamLimits

0xd180,	// (0x0001cd4f) signal_pane_stacon

0x2df5,	// (0x000129c4) stacon_top_pane_g1_ParamLimits

0x2df5,	// (0x000129c4) stacon_top_pane_g1

0xd1a5,	// (0x0001cd74) title_pane_stacon_ParamLimits

0xd1a5,	// (0x0001cd74) title_pane_stacon

0xd1c7,	// (0x0001cd96) uni_indicator_pane_stacon_ParamLimits

0xd1c7,	// (0x0001cd96) uni_indicator_pane_stacon

0xd1dc,	// (0x0001cdab) battery_pane_stacon_ParamLimits

0xd1dc,	// (0x0001cdab) battery_pane_stacon

0xd21c,	// (0x0001cdeb) control_bottom_pane_stacon_ParamLimits

0xd21c,	// (0x0001cdeb) control_bottom_pane_stacon

0xd23b,	// (0x0001ce0a) navi_pane_stacon_ParamLimits

0xd23b,	// (0x0001ce0a) navi_pane_stacon

0x2e17,	// (0x000129e6) stacon_bottom_pane_g1_ParamLimits

0x2e17,	// (0x000129e6) stacon_bottom_pane_g1

0x27d3,	// (0x000123a2) aid_levels_signal_lsc_ParamLimits

0x27d3,	// (0x000123a2) aid_levels_signal_lsc

0xcef9,	// (0x0001cac8) signal_pane_stacon_g1_ParamLimits

0xcef9,	// (0x0001cac8) signal_pane_stacon_g1

0xcf05,	// (0x0001cad4) signal_pane_stacon_g2_ParamLimits

0xcf05,	// (0x0001cad4) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0001f26e) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001f26e) signal_pane_stacon_g

0xcf39,	// (0x0001cb08) title_pane_stacon_t1_ParamLimits

0xcf39,	// (0x0001cb08) title_pane_stacon_t1

0x2801,	// (0x000123d0) uni_indicator_pane_stacon_g1

0x280b,	// (0x000123da) uni_indicator_pane_stacon_g2

0x27ed,	// (0x000123bc) uni_indicator_pane_stacon_g3

0x27f7,	// (0x000123c6) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0001f27a) uni_indicator_pane_stacon_g

0xcf5e,	// (0x0001cb2d) control_top_pane_stacon_g1

0xcf66,	// (0x0001cb35) control_top_pane_stacon_t1_ParamLimits

0xcf66,	// (0x0001cb35) control_top_pane_stacon_t1

0x2815,	// (0x000123e4) aid_levels_battery_lsc_ParamLimits

0x2815,	// (0x000123e4) aid_levels_battery_lsc

0xcf97,	// (0x0001cb66) battery_pane_stacon_g1_ParamLimits

0xcf97,	// (0x0001cb66) battery_pane_stacon_g1

0xcfa3,	// (0x0001cb72) battery_pane_stacon_g2_ParamLimits

0xcfa3,	// (0x0001cb72) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0001f283) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0001f283) battery_pane_stacon_g

0xcfd2,	// (0x0001cba1) navi_icon_pane_stacon

0xcfe2,	// (0x0001cbb1) navi_navi_pane_stacon

0xcfd2,	// (0x0001cba1) navi_text_pane_stacon

0xcf5e,	// (0x0001cb2d) control_bottom_pane_stacon_g1

0xcff2,	// (0x0001cbc1) control_bottom_pane_stacon_t1_ParamLimits

0xcff2,	// (0x0001cbc1) control_bottom_pane_stacon_t1

0x283d,	// (0x0001240c) grid_app_pane_ParamLimits

0x283d,	// (0x0001240c) grid_app_pane

0x2859,	// (0x00012428) scroll_pane_cp15_ParamLimits

0x2859,	// (0x00012428) scroll_pane_cp15

0x286a,	// (0x00012439) cell_app_pane_ParamLimits

0x286a,	// (0x00012439) cell_app_pane

0x288e,	// (0x0001245d) cell_app_pane_g1_ParamLimits

0x288e,	// (0x0001245d) cell_app_pane_g1

0x28b2,	// (0x00012481) cell_app_pane_g2_ParamLimits

0x28b2,	// (0x00012481) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0001f288) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0001f288) cell_app_pane_g

0x28be,	// (0x0001248d) cell_app_pane_t1_ParamLimits

0x28be,	// (0x0001248d) cell_app_pane_t1

0x28d5,	// (0x000124a4) grid_highlight_pane_ParamLimits

0x28d5,	// (0x000124a4) grid_highlight_pane

0x2426,	// (0x00011ff5) cell_highlight_pane_g1

0x242e,	// (0x00011ffd) cell_highlight_pane_g2

0x2436,	// (0x00012005) cell_highlight_pane_g3

0x243e,	// (0x0001200d) cell_highlight_pane_g4

0x2446,	// (0x00012015) cell_highlight_pane_g5

0x244e,	// (0x0001201d) cell_highlight_pane_g6

0x2456,	// (0x00012025) cell_highlight_pane_g7

0x245e,	// (0x0001202d) cell_highlight_pane_g8

0x2466,	// (0x00012035) cell_highlight_pane_g9

0x143d,	// (0x0001100c) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0001f236) cell_highlight_pane_g

0x28e6,	// (0x000124b5) bg_scroll_pane

0xd036,	// (0x0001cc05) scroll_handle_pane

0x292d,	// (0x000124fc) scroll_bg_pane_g1

0x2942,	// (0x00012511) scroll_bg_pane_g2

0x295a,	// (0x00012529) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0001f28d) scroll_bg_pane_g

0x296f,	// (0x0001253e) scroll_handle_focus_pane_ParamLimits

0x296f,	// (0x0001253e) scroll_handle_focus_pane

0x292d,	// (0x000124fc) scroll_handle_pane_g1

0x297c,	// (0x0001254b) scroll_handle_pane_g2

0x295a,	// (0x00012529) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0001f294) scroll_handle_pane_g

0x2579,	// (0x00012148) bg_popup_sub_pane_cp21_ParamLimits

0x2579,	// (0x00012148) bg_popup_sub_pane_cp21

0x2990,	// (0x0001255f) popup_fep_japan_predictive_window_t1_ParamLimits

0x2990,	// (0x0001255f) popup_fep_japan_predictive_window_t1

0x29a7,	// (0x00012576) popup_fep_japan_predictive_window_t2_ParamLimits

0x29a7,	// (0x00012576) popup_fep_japan_predictive_window_t2

0x29da,	// (0x000125a9) popup_fep_japan_predictive_window_t3_ParamLimits

0x29da,	// (0x000125a9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0001f29b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0001f29b) popup_fep_japan_predictive_window_t

0x1524,	// (0x000110f3) bg_popup_sub_pane_cp23

0x2a11,	// (0x000125e0) listscroll_japin_cand_pane

0x2a19,	// (0x000125e8) popup_fep_japan_candidate_window_t1

0x2a27,	// (0x000125f6) candidate_pane_ParamLimits

0x2a27,	// (0x000125f6) candidate_pane

0x2a3a,	// (0x00012609) scroll_pane_cp30

0x2a42,	// (0x00012611) list_single_popup_jap_candidate_pane_ParamLimits

0x2a42,	// (0x00012611) list_single_popup_jap_candidate_pane

0x1524,	// (0x000110f3) list_highlight_pane_cp30

0x2a57,	// (0x00012626) list_single_popup_jap_candidate_pane_t1

0x2a66,	// (0x00012635) level_1_signal

0x2a73,	// (0x00012642) level_2_signal

0x2a80,	// (0x0001264f) level_3_signal

0x2a8d,	// (0x0001265c) level_4_signal

0x2a9a,	// (0x00012669) level_5_signal

0x2aa7,	// (0x00012676) level_6_signal

0x2ab4,	// (0x00012683) level_7_signal

0x2a66,	// (0x00012635) level_1_battery

0x2a73,	// (0x00012642) level_2_battery

0x2a80,	// (0x0001264f) level_3_battery

0x2a8d,	// (0x0001265c) level_4_battery

0x2a9a,	// (0x00012669) level_5_battery

0x2aa7,	// (0x00012676) level_6_battery

0x2ab4,	// (0x00012683) level_7_battery

0x2ad9,	// (0x000126a8) list_menu_pane_ParamLimits

0x2ad9,	// (0x000126a8) list_menu_pane

0x2aef,	// (0x000126be) scroll_pane_cp25_ParamLimits

0x2aef,	// (0x000126be) scroll_pane_cp25

0x2b08,	// (0x000126d7) list_double2_graphic_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double2_graphic_pane_cp2

0x2b08,	// (0x000126d7) list_double2_large_graphic_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double2_large_graphic_pane_cp2

0x2b08,	// (0x000126d7) list_double2_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double2_pane_cp2

0x2b08,	// (0x000126d7) list_double_graphic_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double_graphic_pane_cp2

0x2b08,	// (0x000126d7) list_double_large_graphic_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double_large_graphic_pane_cp2

0x2b08,	// (0x000126d7) list_double_number_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double_number_pane_cp2

0x2b08,	// (0x000126d7) list_double_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double_pane_cp2

0x2b18,	// (0x000126e7) list_single_2graphic_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_2graphic_pane_cp2

0x2b18,	// (0x000126e7) list_single_graphic_heading_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_graphic_heading_pane_cp2

0x2b18,	// (0x000126e7) list_single_graphic_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_graphic_pane_cp2

0x2b18,	// (0x000126e7) list_single_heading_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_heading_pane_cp2

0x2b2d,	// (0x000126fc) list_single_large_graphic_pane_cp2_ParamLimits

0x2b2d,	// (0x000126fc) list_single_large_graphic_pane_cp2

0x2b18,	// (0x000126e7) list_single_number_heading_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_number_heading_pane_cp2

0x2b18,	// (0x000126e7) list_single_number_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_number_pane_cp2

0x2b3e,	// (0x0001270d) list_single_pane_cp2_ParamLimits

0x2b3e,	// (0x0001270d) list_single_pane_cp2

0x2bbe,	// (0x0001278d) bg_popup_sub_pane_cp22

0xd0e5,	// (0x0001ccb4) popup_side_volume_key_window_g1

0xd109,	// (0x0001ccd8) popup_side_volume_key_window_t1

0xd125,	// (0x0001ccf4) volume_small_pane_cp1

0x189e,	// (0x0001146d) bg_popup_sub_pane_cp24_ParamLimits

0x189e,	// (0x0001146d) bg_popup_sub_pane_cp24

0x2bd4,	// (0x000127a3) fep_china_uni_candidate_pane_ParamLimits

0x2bd4,	// (0x000127a3) fep_china_uni_candidate_pane

0x2be8,	// (0x000127b7) fep_china_uni_entry_pane

0x2bf8,	// (0x000127c7) popup_fep_china_uni_window_g1

0x2c14,	// (0x000127e3) fep_china_uni_entry_pane_g1

0x2c1c,	// (0x000127eb) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0001f2cc) fep_china_uni_entry_pane_g

0x2c24,	// (0x000127f3) fep_entry_item_pane

0x2c2e,	// (0x000127fd) fep_candidate_item_pane

0x2c36,	// (0x00012805) fep_china_uni_candidate_pane_g1

0x2c3e,	// (0x0001280d) fep_china_uni_candidate_pane_g2

0x2c46,	// (0x00012815) fep_china_uni_candidate_pane_g3

0x2c4e,	// (0x0001281d) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0001f2d1) fep_china_uni_candidate_pane_g

0x143d,	// (0x0001100c) fep_entry_item_pane_g1

0x2c56,	// (0x00012825) fep_entry_item_pane_t1_ParamLimits

0x2c56,	// (0x00012825) fep_entry_item_pane_t1

0x2c6c,	// (0x0001283b) fep_candidate_item_pane_t1_ParamLimits

0x2c6c,	// (0x0001283b) fep_candidate_item_pane_t1

0x2c81,	// (0x00012850) fep_candidate_item_pane_t2_ParamLimits

0x2c81,	// (0x00012850) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0001f2da) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0001f2da) fep_candidate_item_pane_t

0x1604,	// (0x000111d3) list_highlight_pane_cp31_ParamLimits

0x1604,	// (0x000111d3) list_highlight_pane_cp31

0x2c93,	// (0x00012862) level_1_signal_lsc

0x2c9c,	// (0x0001286b) level_2_signal_lsc

0x2ca5,	// (0x00012874) level_3_signal_lsc

0x2cae,	// (0x0001287d) level_4_signal_lsc

0x2cb7,	// (0x00012886) level_5_signal_lsc

0x2cc0,	// (0x0001288f) level_6_signal_lsc

0x2cc9,	// (0x00012898) level_7_signal_lsc

0x2cc9,	// (0x00012898) level_1_battery_lsc

0x2cd2,	// (0x000128a1) level_2_battery_lsc

0x2cdb,	// (0x000128aa) level_3_battery_lsc

0x2ce4,	// (0x000128b3) level_4_battery_lsc

0x2ced,	// (0x000128bc) level_5_battery_lsc

0x2cf6,	// (0x000128c5) level_6_battery_lsc

0x2c93,	// (0x00012862) level_7_battery_lsc

0x2cff,	// (0x000128ce) scroll_handle_focus_pane_g1

0x2d08,	// (0x000128d7) scroll_handle_focus_pane_g2

0x2d11,	// (0x000128e0) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0001f2df) scroll_handle_focus_pane_g

0xc2ae,	// (0x0001be7d) list_single_2graphic_pane_g1_ParamLimits

0xc2ae,	// (0x0001be7d) list_single_2graphic_pane_g1

0xbc78,	// (0x0001b847) list_single_2graphic_pane_g2_ParamLimits

0xbc78,	// (0x0001b847) list_single_2graphic_pane_g2

0xbc0a,	// (0x0001b7d9) list_single_2graphic_pane_g3_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_2graphic_pane_g3

0xc2ba,	// (0x0001be89) list_single_2graphic_pane_g4_ParamLimits

0xc2ba,	// (0x0001be89) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0001f2e6) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0001f2e6) list_single_2graphic_pane_g

0xc2c6,	// (0x0001be95) list_single_2graphic_pane_t1_ParamLimits

0xc2c6,	// (0x0001be95) list_single_2graphic_pane_t1

0xc2f4,	// (0x0001bec3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc2f4,	// (0x0001bec3) list_double2_graphic_large_graphic_pane_g1

0xbeb0,	// (0x0001ba7f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbeb0,	// (0x0001ba7f) list_double2_graphic_large_graphic_pane_g2

0xbebf,	// (0x0001ba8e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbebf,	// (0x0001ba8e) list_double2_graphic_large_graphic_pane_g3

0xc304,	// (0x0001bed3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc304,	// (0x0001bed3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0001f2ef) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0001f2ef) list_double2_graphic_large_graphic_pane_g

0xc310,	// (0x0001bedf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc310,	// (0x0001bedf) list_double2_graphic_large_graphic_pane_t1

0xc326,	// (0x0001bef5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc326,	// (0x0001bef5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0001f2f8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0001f2f8) list_double2_graphic_large_graphic_pane_t

0x2ed5,	// (0x00012aa4) popup_fast_swap_window_ParamLimits

0x2ed5,	// (0x00012aa4) popup_fast_swap_window

0x2ef1,	// (0x00012ac0) popup_side_volume_key_window

0x2f0b,	// (0x00012ada) stacon_top_pane

0x2f15,	// (0x00012ae4) status_pane_ParamLimits

0x2f15,	// (0x00012ae4) status_pane

0x1433,	// (0x00011002) status_small_pane

0x1524,	// (0x000110f3) control_pane

0x1524,	// (0x000110f3) stacon_bottom_pane

0x1d98,	// (0x00011967) scroll_pane_cp121

0x222a,	// (0x00011df9) set_content_pane

0x2db6,	// (0x00012985) bg_active_tab_pane_g1_cp1

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp1

0x2da4,	// (0x00012973) bg_active_tab_pane_g3_cp1

0x2db6,	// (0x00012985) bg_passive_tab_pane_g1_cp1

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp1

0x2da4,	// (0x00012973) bg_passive_tab_pane_g3_cp1

0x2dc8,	// (0x00012997) bg_active_tab_pane_g1_cp2

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp2

0x2dbf,	// (0x0001298e) bg_active_tab_pane_g3_cp2

0x2dc8,	// (0x00012997) bg_passive_tab_pane_g1_cp2

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp2

0x2dbf,	// (0x0001298e) bg_passive_tab_pane_g3_cp2

0x2dda,	// (0x000129a9) bg_active_tab_pane_g1_cp3

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp3

0x2dd1,	// (0x000129a0) bg_active_tab_pane_g3_cp3

0x2dda,	// (0x000129a9) bg_passive_tab_pane_g1_cp3

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp3

0x2dd1,	// (0x000129a0) bg_passive_tab_pane_g3_cp3

0x2dec,	// (0x000129bb) bg_active_tab_pane_g1_cp4

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp4

0x2de3,	// (0x000129b2) bg_active_tab_pane_g3_cp4

0x2dec,	// (0x000129bb) bg_passive_tab_pane_g1_cp4

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp4

0x2de3,	// (0x000129b2) bg_passive_tab_pane_g3_cp4

0x2e3c,	// (0x00012a0b) bg_active_tab_pane_g1_cp5

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp5

0x2e33,	// (0x00012a02) bg_active_tab_pane_g3_cp5

0x2e3c,	// (0x00012a0b) bg_passive_tab_pane_g1_cp5

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp5

0x2e33,	// (0x00012a02) bg_passive_tab_pane_g3_cp5

0x2e45,	// (0x00012a14) list_set_graphic_pane_ParamLimits

0x2e45,	// (0x00012a14) list_set_graphic_pane

0x1524,	// (0x000110f3) bg_set_opt_pane_cp4

0x2e5c,	// (0x00012a2b) list_set_graphic_pane_g1_ParamLimits

0x2e5c,	// (0x00012a2b) list_set_graphic_pane_g1

0x2e68,	// (0x00012a37) list_set_graphic_pane_g2_ParamLimits

0x2e68,	// (0x00012a37) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0001f2fd) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0001f2fd) list_set_graphic_pane_g

0x0009,

0xfaae,	// (0x0001f67d) volume_small_pane_cp_g

0x2e8a,	// (0x00012a59) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2e8a,	// (0x00012a59) list_double2_large_graphic_pane_g1_cp2

0x2e96,	// (0x00012a65) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2e96,	// (0x00012a65) list_double2_large_graphic_pane_g2_cp2

0x2ea5,	// (0x00012a74) list_double2_large_graphic_pane_g3_cp2

0x2ead,	// (0x00012a7c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2ead,	// (0x00012a7c) list_double2_large_graphic_pane_t1_cp2

0x2ec3,	// (0x00012a92) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2ec3,	// (0x00012a92) list_double2_large_graphic_pane_t2_cp2

0x4a42,	// (0x00014611) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a42,	// (0x00014611) list_double_large_graphic_pane_g1_cp2

0x4a53,	// (0x00014622) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a53,	// (0x00014622) list_double_large_graphic_pane_g2_cp2

0x2ff0,	// (0x00012bbf) list_double_large_graphic_pane_g3_cp2

0x4a62,	// (0x00014631) list_double_large_graphic_pane_g4_cp

0x4a6a,	// (0x00014639) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a6a,	// (0x00014639) list_double_large_graphic_pane_t1_cp2

0x4a81,	// (0x00014650) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a81,	// (0x00014650) list_double_large_graphic_pane_t2_cp2

0x2f23,	// (0x00012af2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2f23,	// (0x00012af2) list_double2_graphic_pane_g1_cp2

0x2f2f,	// (0x00012afe) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2f2f,	// (0x00012afe) list_double2_graphic_pane_g2_cp2

0x2f3e,	// (0x00012b0d) list_double2_graphic_pane_g3_cp2

0x2f46,	// (0x00012b15) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2f46,	// (0x00012b15) list_double2_graphic_pane_t1_cp2

0x2f5c,	// (0x00012b2b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2f5c,	// (0x00012b2b) list_double2_graphic_pane_t2_cp2

0x2f6e,	// (0x00012b3d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_number_heading_pane_g1_cp2

0x2f7a,	// (0x00012b49) list_single_number_heading_pane_g2_cp2

0x2f82,	// (0x00012b51) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2f82,	// (0x00012b51) list_single_number_heading_pane_t1_cp2

0x2f98,	// (0x00012b67) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2f98,	// (0x00012b67) list_single_number_heading_pane_t2_cp2

0x2faa,	// (0x00012b79) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2faa,	// (0x00012b79) list_single_number_heading_pane_t3_cp2

0x2f6e,	// (0x00012b3d) list_single_heading_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_heading_pane_g1_cp2

0x2f7a,	// (0x00012b49) list_single_heading_pane_g2_cp2

0x2f82,	// (0x00012b51) list_single_heading_pane_t1_cp2_ParamLimits

0x2f82,	// (0x00012b51) list_single_heading_pane_t1_cp2

0x484c,	// (0x0001441b) list_single_heading_pane_t2_cp2_ParamLimits

0x484c,	// (0x0001441b) list_single_heading_pane_t2_cp2

0x479c,	// (0x0001436b) list_double_graphic_pane_g1_cp2_ParamLimits

0x479c,	// (0x0001436b) list_double_graphic_pane_g1_cp2

0x47a8,	// (0x00014377) list_double_graphic_pane_g2_cp2_ParamLimits

0x47a8,	// (0x00014377) list_double_graphic_pane_g2_cp2

0x47b7,	// (0x00014386) list_double_graphic_pane_g3_cp2

0x47bf,	// (0x0001438e) list_double_graphic_pane_t1_cp2_ParamLimits

0x47bf,	// (0x0001438e) list_double_graphic_pane_t1_cp2

0x47d5,	// (0x000143a4) list_double_graphic_pane_t2_cp2_ParamLimits

0x47d5,	// (0x000143a4) list_double_graphic_pane_t2_cp2

0x2fe4,	// (0x00012bb3) list_double_number_pane_g1_cp2_ParamLimits

0x2fe4,	// (0x00012bb3) list_double_number_pane_g1_cp2

0x2ff0,	// (0x00012bbf) list_double_number_pane_g2_cp2

0x4762,	// (0x00014331) list_double_number_pane_t1_cp2_ParamLimits

0x4762,	// (0x00014331) list_double_number_pane_t1_cp2

0x4774,	// (0x00014343) list_double_number_pane_t2_cp2_ParamLimits

0x4774,	// (0x00014343) list_double_number_pane_t2_cp2

0x478a,	// (0x00014359) list_double_number_pane_t3_cp2_ParamLimits

0x478a,	// (0x00014359) list_double_number_pane_t3_cp2

0x464c,	// (0x0001421b) list_single_graphic_pane_g1_cp2_ParamLimits

0x464c,	// (0x0001421b) list_single_graphic_pane_g1_cp2

0x2f6e,	// (0x00012b3d) list_single_graphic_pane_g2_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_graphic_pane_g2_cp2

0x2f7a,	// (0x00012b49) list_single_graphic_pane_g3_cp2

0x4624,	// (0x000141f3) list_single_graphic_pane_t1_cp2_ParamLimits

0x4624,	// (0x000141f3) list_single_graphic_pane_t1_cp2

0x2f6e,	// (0x00012b3d) list_single_number_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_number_pane_g1_cp2

0x2f7a,	// (0x00012b49) list_single_number_pane_g2_cp2

0x4624,	// (0x000141f3) list_single_number_pane_t1_cp2_ParamLimits

0x4624,	// (0x000141f3) list_single_number_pane_t1_cp2

0x463a,	// (0x00014209) list_single_number_pane_t2_cp2_ParamLimits

0x463a,	// (0x00014209) list_single_number_pane_t2_cp2

0x2e96,	// (0x00012a65) list_double2_pane_g1_cp2_ParamLimits

0x2e96,	// (0x00012a65) list_double2_pane_g1_cp2

0x2ea5,	// (0x00012a74) list_double2_pane_g2_cp2

0x2fbc,	// (0x00012b8b) list_double2_pane_t1_cp2_ParamLimits

0x2fbc,	// (0x00012b8b) list_double2_pane_t1_cp2

0x2fd2,	// (0x00012ba1) list_double2_pane_t2_cp2_ParamLimits

0x2fd2,	// (0x00012ba1) list_double2_pane_t2_cp2

0x2fe4,	// (0x00012bb3) list_double_pane_g1_cp2_ParamLimits

0x2fe4,	// (0x00012bb3) list_double_pane_g1_cp2

0x2ff0,	// (0x00012bbf) list_double_pane_g2_cp2

0x2ff8,	// (0x00012bc7) list_double_pane_t1_cp2_ParamLimits

0x2ff8,	// (0x00012bc7) list_double_pane_t1_cp2

0x300e,	// (0x00012bdd) list_double_pane_t2_cp2_ParamLimits

0x300e,	// (0x00012bdd) list_double_pane_t2_cp2

0x303d,	// (0x00012c0c) list_single_pane_cp2_g3

0x2f6e,	// (0x00012b3d) list_single_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_pane_g1_cp2

0x2f7a,	// (0x00012b49) list_single_pane_g2_cp2

0x304d,	// (0x00012c1c) list_single_pane_t1_cp2_ParamLimits

0x304d,	// (0x00012c1c) list_single_pane_t1_cp2

0x3065,	// (0x00012c34) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3065,	// (0x00012c34) list_single_large_graphic_pane_g1_cp2

0x3071,	// (0x00012c40) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3071,	// (0x00012c40) list_single_large_graphic_pane_g2_cp2

0x307d,	// (0x00012c4c) list_single_large_graphic_pane_g3_cp2

0x3085,	// (0x00012c54) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3085,	// (0x00012c54) list_single_large_graphic_pane_g4_cp1

0x309f,	// (0x00012c6e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x309f,	// (0x00012c6e) list_single_large_graphic_pane_t1_cp2

0x44b1,	// (0x00014080) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44b1,	// (0x00014080) list_single_graphic_heading_pane_g1_cp2

0x45ed,	// (0x000141bc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x45ed,	// (0x000141bc) list_single_graphic_heading_pane_g4_cp2

0x2f7a,	// (0x00012b49) list_single_graphic_heading_pane_g5_cp2

0x2f82,	// (0x00012b51) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2f82,	// (0x00012b51) list_single_graphic_heading_pane_t1_cp2

0x4612,	// (0x000141e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4612,	// (0x000141e1) list_single_graphic_heading_pane_t2_cp2

0x45e1,	// (0x000141b0) list_single_2graphic_pane_g1_cp2_ParamLimits

0x45e1,	// (0x000141b0) list_single_2graphic_pane_g1_cp2

0x45ed,	// (0x000141bc) list_single_2graphic_pane_g2_cp2_ParamLimits

0x45ed,	// (0x000141bc) list_single_2graphic_pane_g2_cp2

0x2f7a,	// (0x00012b49) list_single_2graphic_pane_g3_cp2

0x44a5,	// (0x00014074) list_single_2graphic_pane_g4_cp2_ParamLimits

0x44a5,	// (0x00014074) list_single_2graphic_pane_g4_cp2

0x45fc,	// (0x000141cb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x45fc,	// (0x000141cb) list_single_2graphic_pane_t1_cp2

0x143d,	// (0x0001100c) list_highlight_pane_g10_cp1

0x41c3,	// (0x00013d92) list_highlight_pane_g1_cp1

0x41cb,	// (0x00013d9a) list_highlight_pane_g2_cp1

0x41d3,	// (0x00013da2) list_highlight_pane_g3_cp1

0x41db,	// (0x00013daa) list_highlight_pane_g4_cp1

0x41e3,	// (0x00013db2) list_highlight_pane_g5_cp1

0x41eb,	// (0x00013dba) list_highlight_pane_g6_cp1

0x41f3,	// (0x00013dc2) list_highlight_pane_g7_cp1

0x41fb,	// (0x00013dca) list_highlight_pane_g8_cp1

0x4203,	// (0x00013dd2) list_highlight_pane_g9_cp1

0x40f1,	// (0x00013cc0) form_field_slider_pane_t3

0x40ff,	// (0x00013cce) form_field_slider_pane_t4

0x410d,	// (0x00013cdc) slider_form_pane_ParamLimits

0x410d,	// (0x00013cdc) slider_form_pane

0x1524,	// (0x000110f3) control_abbreviations

0x1524,	// (0x000110f3) control_conventions

0x1524,	// (0x000110f3) control_definitions

0x1524,	// (0x000110f3) format_table_attribute

0x4896,	// (0x00014465) bg_popup_preview_window_pane_g9

0x1524,	// (0x000110f3) format_table_data2

0x1524,	// (0x000110f3) format_table_data3

0x1524,	// (0x000110f3) format_table_data_example

0x0008,

0x1524,	// (0x000110f3) intro_purpose

0xf8c5,	// (0x0001f494) bg_popup_preview_window_pane_g

0x1524,	// (0x000110f3) texts_category

0x1524,	// (0x000110f3) texts_graphics

0x30b5,	// (0x00012c84) text_digital

0x30c4,	// (0x00012c93) text_primary

0x30d3,	// (0x00012ca2) text_primary_small

0x30e2,	// (0x00012cb1) text_secondary

0x30f1,	// (0x00012cc0) text_title

0x5006,	// (0x00014bd5) bg_passive_tab_pane_g1_cp3_srt

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp3_srt

0x4ffd,	// (0x00014bcc) bg_passive_tab_pane_g3_cp3_srt

0x1604,	// (0x000111d3) bg_active_tab_pane_cp3_srt_ParamLimits

0x1604,	// (0x000111d3) bg_active_tab_pane_cp3_srt

0x500f,	// (0x00014bde) tabs_4_active_pane_srt_g1

0x1634,	// (0x00011203) tabs_4_active_pane_srt_t1_ParamLimits

0x1634,	// (0x00011203) tabs_4_active_pane_srt_t1

0x5006,	// (0x00014bd5) bg_active_tab_pane_g1_cp3_copy1

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp3_copy1

0x4ffd,	// (0x00014bcc) bg_active_tab_pane_g3_cp3_copy1

0x1604,	// (0x000111d3) tabs_2_long_active_pane_srt_ParamLimits

0x1604,	// (0x000111d3) tabs_2_long_active_pane_srt

0x1604,	// (0x000111d3) tabs_2_long_passive_pane_srt_ParamLimits

0x1604,	// (0x000111d3) tabs_2_long_passive_pane_srt

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp4_srt

0x4cc3,	// (0x00014892) bg_passive_tab_pane_g1_cp4_srt

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp4_srt

0x4cba,	// (0x00014889) bg_passive_tab_pane_g3_cp4_srt

0x262b,	// (0x000121fa) bg_active_tab_pane_cp4_srt_ParamLimits

0x262b,	// (0x000121fa) bg_active_tab_pane_cp4_srt

0x2639,	// (0x00012208) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2639,	// (0x00012208) tabs_2_long_active_pane_srt_t1

0x4cc3,	// (0x00014892) bg_active_tab_pane_g1_cp4_srt

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp4_srt

0x4cba,	// (0x00014889) bg_active_tab_pane_g3_cp4_srt

0x189e,	// (0x0001146d) tabs_3_long_active_pane_srt_ParamLimits

0x189e,	// (0x0001146d) tabs_3_long_active_pane_srt

0x189e,	// (0x0001146d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x189e,	// (0x0001146d) tabs_3_long_passive_pane_cp_srt

0x189e,	// (0x0001146d) tabs_3_long_passive_pane_srt_ParamLimits

0x189e,	// (0x0001146d) tabs_3_long_passive_pane_srt

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp5_srt

0x2e3c,	// (0x00012a0b) bg_passive_tab_pane_g1_cp5_srt

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp5_srt

0x2e33,	// (0x00012a02) bg_passive_tab_pane_g3_cp5_srt

0x262b,	// (0x000121fa) bg_active_tab_pane_cp5_srt_ParamLimits

0x262b,	// (0x000121fa) bg_active_tab_pane_cp5_srt

0x2658,	// (0x00012227) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2658,	// (0x00012227) tabs_3_long_active_pane_srt_t1

0x2e3c,	// (0x00012a0b) bg_active_tab_pane_g1_cp5_srt

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp5_srt

0x2e33,	// (0x00012a02) bg_active_tab_pane_g3_cp5_srt

0x4cac,	// (0x0001487b) navi_text_pane_srt_t1

0x4ca4,	// (0x00014873) navi_icon_pane_srt_g1

0x32b8,	// (0x00012e87) midp_editing_number_pane_srt

0x3100,	// (0x00012ccf) midp_ticker_pane_srt

0x32c0,	// (0x00012e8f) midp_ticker_pane_srt_g1

0x32c8,	// (0x00012e97) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0001f31c) midp_ticker_pane_srt_g

0x32d0,	// (0x00012e9f) midp_ticker_pane_srt_t1

0x4c95,	// (0x00014864) midp_editing_number_pane_t1_copy1

0x3108,	// (0x00012cd7) listscroll_midp_pane

0x3108,	// (0x00012cd7) midp_form_pane

0x3170,	// (0x00012d3f) midp_info_popup_window_ParamLimits

0x3170,	// (0x00012d3f) midp_info_popup_window

0x2579,	// (0x00012148) bg_popup_sub_pane_cp50_ParamLimits

0x2579,	// (0x00012148) bg_popup_sub_pane_cp50

0x3e06,	// (0x000139d5) listscroll_midp_info_pane_ParamLimits

0x3e06,	// (0x000139d5) listscroll_midp_info_pane

0x3dee,	// (0x000139bd) listscroll_form_midp_pane_ParamLimits

0x3dee,	// (0x000139bd) listscroll_form_midp_pane

0x3dfa,	// (0x000139c9) scroll_bar_cp050

0x3dce,	// (0x0001399d) list_midp_pane

0x5c1a,	// (0x000157e9) signal_pane_g2_cp

0x3d08,	// (0x000138d7) listscroll_midp_info_pane_t1_ParamLimits

0x3d08,	// (0x000138d7) listscroll_midp_info_pane_t1

0x3d20,	// (0x000138ef) listscroll_midp_info_pane_t2_ParamLimits

0x3d20,	// (0x000138ef) listscroll_midp_info_pane_t2

0x3d5e,	// (0x0001392d) listscroll_midp_info_pane_t3_ParamLimits

0x3d5e,	// (0x0001392d) listscroll_midp_info_pane_t3

0x3d98,	// (0x00013967) listscroll_midp_info_pane_t4_ParamLimits

0x3d98,	// (0x00013967) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0001f3cf) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0001f3cf) listscroll_midp_info_pane_t

0x25da,	// (0x000121a9) scroll_pane_cp21

0x3cac,	// (0x0001387b) form_midp_field_choice_group_pane

0x3cb5,	// (0x00013884) form_midp_field_text_pane

0x3cee,	// (0x000138bd) form_midp_field_time_pane

0x3cf6,	// (0x000138c5) form_midp_gauge_slider_pane

0x3cff,	// (0x000138ce) form_midp_gauge_wait_pane

0x1524,	// (0x000110f3) form_midp_image_pane

0xc45a,	// (0x0001c029) list_single_midp_pane_ParamLimits

0xc45a,	// (0x0001c029) list_single_midp_pane

0x3c65,	// (0x00013834) form_midp_field_text_pane_t1

0x3a64,	// (0x00013633) input_focus_pane_cp050

0x3c86,	// (0x00013855) list_midp_form_text_pane

0x3c34,	// (0x00013803) form_midp_field_choice_group_pane_t1

0x3c42,	// (0x00013811) input_focus_pane_cp051

0x3c56,	// (0x00013825) list_midp_choice_pane

0x1524,	// (0x000110f3) status_idle_pane

0x3c18,	// (0x000137e7) form_midp_field_time_pane_t1

0x143d,	// (0x0001100c) wait_anim_pane_g2_copy1

0x3c26,	// (0x000137f5) form_midp_field_time_pane_t2

0x0001,

0x321a,	// (0x00012de9) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001f3ca) form_midp_field_time_pane_t

0x1524,	// (0x000110f3) input_focus_pane_cp052

0x1524,	// (0x000110f3) bg_input_focus_pane_cp040

0x3bd8,	// (0x000137a7) form_midp_gauge_slider_pane_t1

0x3be6,	// (0x000137b5) form_midp_gauge_slider_pane_t2

0x3bf4,	// (0x000137c3) form_midp_gauge_slider_pane_t3

0x3c02,	// (0x000137d1) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0001f3c1) form_midp_gauge_slider_pane_t

0x3c10,	// (0x000137df) form_midp_slider_pane

0x1604,	// (0x000111d3) bg_input_focus_pane_cp041_ParamLimits

0x1604,	// (0x000111d3) bg_input_focus_pane_cp041

0x3ba8,	// (0x00013777) form_midp_gauge_wait_pane_t1_ParamLimits

0x3ba8,	// (0x00013777) form_midp_gauge_wait_pane_t1

0x3bba,	// (0x00013789) form_midp_gauge_wait_pane_t2_ParamLimits

0x3bba,	// (0x00013789) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001f3bc) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001f3bc) form_midp_gauge_wait_pane_t

0x3bcc,	// (0x0001379b) form_midp_wait_pane_ParamLimits

0x3bcc,	// (0x0001379b) form_midp_wait_pane

0x3b72,	// (0x00013741) form_midp_image_pane_g1

0x3b7b,	// (0x0001374a) form_midp_image_pane_t1

0x3b8a,	// (0x00013759) form_midp_image_pane_t2

0x3b99,	// (0x00013768) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0001f3b5) form_midp_image_pane_t

0x3b5a,	// (0x00013729) list_single_midp_pane_g1

0xc44b,	// (0x0001c01a) list_single_midp_pane_t1

0x3b46,	// (0x00013715) list_midp_form_item_pane_ParamLimits

0x3b46,	// (0x00013715) list_midp_form_item_pane

0x31c2,	// (0x00012d91) list_midp_form_item_pane_t1

0x31d1,	// (0x00012da0) midp_ticker_pane_g1

0x31dd,	// (0x00012dac) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0001f302) midp_ticker_pane_g

0x31e9,	// (0x00012db8) midp_ticker_pane_t1

0x4c95,	// (0x00014864) midp_editing_number_pane_t1

0x4ea6,	// (0x00014a75) midp_editing_number_pane

0x4eb2,	// (0x00014a81) midp_ticker_pane

0x4c73,	// (0x00014842) ai_message_heading_pane

0x1524,	// (0x000110f3) bg_popup_window_pane_cp14

0x4c7b,	// (0x0001484a) listscroll_ai_message_pane

0x4bfd,	// (0x000147cc) ai_message_heading_pane_g1_ParamLimits

0x4bfd,	// (0x000147cc) ai_message_heading_pane_g1

0x4c09,	// (0x000147d8) ai_message_heading_pane_g2_ParamLimits

0x4c09,	// (0x000147d8) ai_message_heading_pane_g2

0x4c15,	// (0x000147e4) ai_message_heading_pane_g3_ParamLimits

0x4c15,	// (0x000147e4) ai_message_heading_pane_g3

0x4c21,	// (0x000147f0) ai_message_heading_pane_g4_ParamLimits

0x4c21,	// (0x000147f0) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0001f4f6) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0001f4f6) ai_message_heading_pane_g

0x4c2d,	// (0x000147fc) ai_message_heading_pane_t1_ParamLimits

0x4c2d,	// (0x000147fc) ai_message_heading_pane_t1

0x4c47,	// (0x00014816) ai_message_heading_pane_t2_ParamLimits

0x4c47,	// (0x00014816) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0001f4ff) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0001f4ff) ai_message_heading_pane_t

0x4c59,	// (0x00014828) bg_popup_heading_pane_cp1_ParamLimits

0x4c59,	// (0x00014828) bg_popup_heading_pane_cp1

0x4beb,	// (0x000147ba) list_ai_message_pane_ParamLimits

0x4beb,	// (0x000147ba) list_ai_message_pane

0x25da,	// (0x000121a9) scroll_pane_cp10

0x4b87,	// (0x00014756) list_ai_message_pane_g1

0x4b8f,	// (0x0001475e) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0001f4d3) list_ai_message_pane_g

0x4b97,	// (0x00014766) list_ai_message_pane_t1_ParamLimits

0x4b97,	// (0x00014766) list_ai_message_pane_t1

0x4bac,	// (0x0001477b) list_ai_message_pane_t2_ParamLimits

0x4bac,	// (0x0001477b) list_ai_message_pane_t2

0x4bc1,	// (0x00014790) list_ai_message_pane_t3_ParamLimits

0x4bc1,	// (0x00014790) list_ai_message_pane_t3

0x4bd6,	// (0x000147a5) list_ai_message_pane_t4_ParamLimits

0x4bd6,	// (0x000147a5) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0001f4d8) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0001f4d8) list_ai_message_pane_t

0x4b75,	// (0x00014744) cell_ai_soft_ind_pane_ParamLimits

0x4b75,	// (0x00014744) cell_ai_soft_ind_pane

0x31fb,	// (0x00012dca) cell_ai_soft_ind_pane_g1_ParamLimits

0x31fb,	// (0x00012dca) cell_ai_soft_ind_pane_g1

0x1524,	// (0x000110f3) grid_highlight_cp1

0x3208,	// (0x00012dd7) text_secondary_cp56_ParamLimits

0x3208,	// (0x00012dd7) text_secondary_cp56

0x4b4a,	// (0x00014719) example_general_pane_ParamLimits

0x4b4a,	// (0x00014719) example_general_pane

0x4b56,	// (0x00014725) example_parent_pane_g1_ParamLimits

0x4b56,	// (0x00014725) example_parent_pane_g1

0x4b62,	// (0x00014731) example_parent_pane_t1_ParamLimits

0x4b62,	// (0x00014731) example_parent_pane_t1

0xd722,	// (0x0001d2f1) popup_preview_text_window_ParamLimits

0xd722,	// (0x0001d2f1) popup_preview_text_window

0x3045,	// (0x00012c14) list_single_pane_cp2_g4

0x197a,	// (0x00011549) bg_popup_preview_window_pane_ParamLimits

0x197a,	// (0x00011549) bg_popup_preview_window_pane

0x489e,	// (0x0001446d) popup_preview_text_window_t1_ParamLimits

0x489e,	// (0x0001446d) popup_preview_text_window_t1

0x48bc,	// (0x0001448b) popup_preview_text_window_t2_ParamLimits

0x48bc,	// (0x0001448b) popup_preview_text_window_t2

0x4905,	// (0x000144d4) popup_preview_text_window_t3_ParamLimits

0x4905,	// (0x000144d4) popup_preview_text_window_t3

0x494a,	// (0x00014519) popup_preview_text_window_t4_ParamLimits

0x494a,	// (0x00014519) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0001f4a7) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0001f4a7) popup_preview_text_window_t

0x49c8,	// (0x00014597) scroll_pane_cp11

0x394c,	// (0x0001351b) bg_popup_preview_window_pane_g1

0x485e,	// (0x0001442d) bg_popup_preview_window_pane_g2

0x4866,	// (0x00014435) bg_popup_preview_window_pane_g3

0x486e,	// (0x0001443d) bg_popup_preview_window_pane_g4

0x4876,	// (0x00014445) bg_popup_preview_window_pane_g5

0x487e,	// (0x0001444d) bg_popup_preview_window_pane_g6

0x4886,	// (0x00014455) bg_popup_preview_window_pane_g7

0x488e,	// (0x0001445d) bg_popup_preview_window_pane_g8

0xcbf4,	// (0x0001c7c3) aid_popup_width_pane

0xd704,	// (0x0001d2d3) popup_midp_note_alarm_window_ParamLimits

0xd704,	// (0x0001d2d3) popup_midp_note_alarm_window

0x22d7,	// (0x00011ea6) data_form_pane_ParamLimits

0xc147,	// (0x0001bd16) form_field_data_pane_g1

0x235c,	// (0x00011f2b) form_field_data_pane_t1_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_ParamLimits

0x2311,	// (0x00011ee0) data_form_wide_pane_ParamLimits

0xc14f,	// (0x0001bd1e) form_field_data_wide_pane_g1

0xc15b,	// (0x0001bd2a) form_field_data_wide_pane_t1_ParamLimits

0x1c0f,	// (0x000117de) input_focus_pane_cp6_ParamLimits

0x2587,	// (0x00012156) input_popup_find_pane_g1_ParamLimits

0x2587,	// (0x00012156) input_popup_find_pane_g1

0xcfb3,	// (0x0001cb82) aid_navi_side_left_pane

0xcfc3,	// (0x0001cb92) aid_navi_side_right_pane

0x42ac,	// (0x00013e7b) bg_popup_window_pane_cp30_ParamLimits

0x42ac,	// (0x00013e7b) bg_popup_window_pane_cp30

0x4326,	// (0x00013ef5) popup_midp_note_alarm_window_g1_ParamLimits

0x4326,	// (0x00013ef5) popup_midp_note_alarm_window_g1

0x4356,	// (0x00013f25) popup_midp_note_alarm_window_t1_ParamLimits

0x4356,	// (0x00013f25) popup_midp_note_alarm_window_t1

0x43f7,	// (0x00013fc6) popup_midp_note_alarm_window_t2_ParamLimits

0x43f7,	// (0x00013fc6) popup_midp_note_alarm_window_t2

0x44bd,	// (0x0001408c) popup_midp_note_alarm_window_t3_ParamLimits

0x44bd,	// (0x0001408c) popup_midp_note_alarm_window_t3

0x44e5,	// (0x000140b4) popup_midp_note_alarm_window_t4_ParamLimits

0x44e5,	// (0x000140b4) popup_midp_note_alarm_window_t4

0x4505,	// (0x000140d4) popup_midp_note_alarm_window_t5_ParamLimits

0x4505,	// (0x000140d4) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0001f444) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0001f444) popup_midp_note_alarm_window_t

0x45b1,	// (0x00014180) wait_bar_pane_cp1_ParamLimits

0x45b1,	// (0x00014180) wait_bar_pane_cp1

0x1524,	// (0x000110f3) wait_anim_pane_copy1

0x1524,	// (0x000110f3) wait_border_pane_copy1

0x3fbe,	// (0x00013b8d) wait_border_pane_g1_copy1

0xc175,	// (0x0001bd44) form_field_popup_pane_g1

0xc17d,	// (0x0001bd4c) form_field_popup_pane_t1_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_cp7_ParamLimits

0x22d7,	// (0x00011ea6) list_form_pane_ParamLimits

0xc195,	// (0x0001bd64) form_field_popup_wide_pane_g1

0xc19d,	// (0x0001bd6c) form_field_popup_wide_pane_t1_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_cp8_ParamLimits

0x2391,	// (0x00011f60) list_form_wide_pane_ParamLimits

0x507c,	// (0x00014c4b) aid_size_cell_graphic_pane

0xc222,	// (0x0001bdf1) data_form_pane_t1_ParamLimits

0xc482,	// (0x0001c051) data_form_wide_pane_t1_ParamLimits

0x3515,	// (0x000130e4) bg_status_flat_pane

0x1564,	// (0x00011133) title_pane_t1_ParamLimits

0x15cc,	// (0x0001119b) title_pane_t2_ParamLimits

0x15f2,	// (0x000111c1) title_pane_t3_ParamLimits

0xf532,	// (0x0001f101) title_pane_t_ParamLimits

0x2a66,	// (0x00012635) level_1_signal_ParamLimits

0x2a73,	// (0x00012642) level_2_signal_ParamLimits

0x2a80,	// (0x0001264f) level_3_signal_ParamLimits

0x2a8d,	// (0x0001265c) level_4_signal_ParamLimits

0x2a9a,	// (0x00012669) level_5_signal_ParamLimits

0x2aa7,	// (0x00012676) level_6_signal_ParamLimits

0x2ab4,	// (0x00012683) level_7_signal_ParamLimits

0x2a66,	// (0x00012635) level_1_battery_ParamLimits

0x2a73,	// (0x00012642) level_2_battery_ParamLimits

0x2a80,	// (0x0001264f) level_3_battery_ParamLimits

0x2a8d,	// (0x0001265c) level_4_battery_ParamLimits

0x2a9a,	// (0x00012669) level_5_battery_ParamLimits

0x2aa7,	// (0x00012676) level_6_battery_ParamLimits

0x2ab4,	// (0x00012683) level_7_battery_ParamLimits

0x41c3,	// (0x00013d92) bg_status_flat_pane_g1

0x41cb,	// (0x00013d9a) bg_status_flat_pane_g2

0x41d3,	// (0x00013da2) bg_status_flat_pane_g3

0x41db,	// (0x00013daa) bg_status_flat_pane_g4

0x41e3,	// (0x00013db2) bg_status_flat_pane_g5

0x41eb,	// (0x00013dba) bg_status_flat_pane_g6

0x41f3,	// (0x00013dc2) bg_status_flat_pane_g7

0x161a,	// (0x000111e9) tabs_3_active_pane_t1_ParamLimits

0x161a,	// (0x000111e9) tabs_3_passive_pane_t1_ParamLimits

0x1634,	// (0x00011203) tabs_4_active_pane_t1_ParamLimits

0x1634,	// (0x00011203) tabs_4_1_passive_pane_t1_ParamLimits

0x2619,	// (0x000121e8) tabs_2_active_pane_t1_ParamLimits

0x2619,	// (0x000121e8) tabs_2_passive_pane_t1_ParamLimits

0x262b,	// (0x000121fa) bg_active_tab_pane_cp4_ParamLimits

0x2639,	// (0x00012208) tabs_2_long_active_pane_t1_ParamLimits

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp4_ParamLimits

0xd966,	// (0x0001d535) list_single_midp_graphic_pane_t1_ParamLimits

0x262b,	// (0x000121fa) bg_active_tab_pane_cp5_ParamLimits

0x2658,	// (0x00012227) tabs_3_long_active_pane_t1_ParamLimits

0x264c,	// (0x0001221b) bg_passive_tab_pane_cp5_ParamLimits

0xd966,	// (0x0001d535) list_single_midp_graphic_pane_t1

0x3515,	// (0x000130e4) bg_status_flat_pane_ParamLimits

0x35d4,	// (0x000131a3) indicator_pane_cp2_ParamLimits

0x35d4,	// (0x000131a3) indicator_pane_cp2

0x36f8,	// (0x000132c7) navi_pane_srt_ParamLimits

0x36f8,	// (0x000132c7) navi_pane_srt

0x371c,	// (0x000132eb) popup_clock_digital_analogue_window_cp1

0x16f9,	// (0x000112c8) indicator_pane_t1

0x3100,	// (0x00012ccf) copy_highlight_pane

0x3100,	// (0x00012ccf) cursor_graphics_pane

0x3100,	// (0x00012ccf) graphic_within_text_pane

0x3100,	// (0x00012ccf) link_highlight_pane

0x498b,	// (0x0001455a) popup_preview_text_window_t5_ParamLimits

0x498b,	// (0x0001455a) popup_preview_text_window_t5

0x3222,	// (0x00012df1) cursor_digital_pane

0x3222,	// (0x00012df1) cursor_primary_pane

0x3233,	// (0x00012e02) cursor_primary_small_pane

0x323b,	// (0x00012e0a) cursor_secondary_pane

0x3243,	// (0x00012e12) cursor_title_pane

0x3222,	// (0x00012df1) link_highlight_digital_pane

0x322a,	// (0x00012df9) link_highlight_primary_pane

0x3233,	// (0x00012e02) link_highlight_primary_small_pane

0x323b,	// (0x00012e0a) link_highlight_secondary_pane

0x3243,	// (0x00012e12) link_highlight_title_pane

0x3222,	// (0x00012df1) copy_highlight_digital_pane

0x3222,	// (0x00012df1) copy_highlight_primary_pane

0x3233,	// (0x00012e02) copy_highlight_primary_small_pane

0x323b,	// (0x00012e0a) copy_highlight_secondary_pane

0x3243,	// (0x00012e12) copy_highlight_title_pane

0x323b,	// (0x00012e0a) graphic_text_digital_pane

0x425b,	// (0x00013e2a) graphic_text_primary_pane

0x4264,	// (0x00013e33) graphic_text_primary_small_pane

0x3233,	// (0x00012e02) graphic_text_secondary_pane

0x3222,	// (0x00012df1) graphic_text_title_pane

0x324b,	// (0x00012e1a) cursor_primary_pane_g1

0x424d,	// (0x00013e1c) cursor_text_primary_t1

0x4237,	// (0x00013e06) cursor_primary_small_pane_g1

0x423f,	// (0x00013e0e) cursor_text_primary_small_t1

0x4221,	// (0x00013df0) cursor_primary_small_pane_g1_copy1

0x4229,	// (0x00013df8) cursor_text_primary_small_t1_copy1

0x420b,	// (0x00013dda) cursor_text_title_t1

0x4219,	// (0x00013de8) cursor_title_pane_g1

0x324b,	// (0x00012e1a) cursor_digital_pane_g1

0x3253,	// (0x00012e22) cursor_text_digital_t1

0x3261,	// (0x00012e30) link_highlight_primary_pane_g1

0x41b4,	// (0x00013d83) link_highlight_primary_pane_t1

0x3261,	// (0x00012e30) link_highlight_primary_small_pane_g1

0x3269,	// (0x00012e38) link_highlight_primary_small_pane_t1

0x3278,	// (0x00012e47) link_highlight_secondary_pane_g1

0x3280,	// (0x00012e4f) link_highlight_secondary_pane_t1

0x4119,	// (0x00013ce8) link_highlight_title_pane_g1

0x4130,	// (0x00013cff) link_highlight_title_pane_t1

0x4119,	// (0x00013ce8) link_highlight_digital_pane_g1

0x4121,	// (0x00013cf0) link_highlight_digital_pane_t1

0x3fd9,	// (0x00013ba8) copy_highlight_primary_pane_g1

0x3fff,	// (0x00013bce) copy_highlight_primary_pane_t1

0x3fd9,	// (0x00013ba8) copy_highlight_primary_small_pane_g1

0x3ff0,	// (0x00013bbf) copy_highlight_primary_small_pane_t1

0x328f,	// (0x00012e5e) copy_highlight_secondary_pane_g1

0x3297,	// (0x00012e66) copy_highlight_secondary_pane_t1

0x3fd9,	// (0x00013ba8) copy_highlight_title_pane_g1

0x3fe1,	// (0x00013bb0) copy_highlight_title_pane_t1

0x3fd9,	// (0x00013ba8) copy_highlight_digital_pane_g1

0x51e8,	// (0x00014db7) copy_highlight_digital_pane_t1

0x513c,	// (0x00014d0b) graphic_text_primary_pane_g1

0x51cc,	// (0x00014d9b) graphic_text_primary_pane_t1

0x51da,	// (0x00014da9) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001f56e) graphic_text_primary_pane_t

0x51a8,	// (0x00014d77) graphic_text_primary_small_pane_g1

0x51b0,	// (0x00014d7f) graphic_text_primary_small_pane_t1

0x51be,	// (0x00014d8d) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001f569) graphic_text_primary_small_pane_t

0x5184,	// (0x00014d53) graphic_text_secondary_pane_g1

0x518c,	// (0x00014d5b) graphic_text_secondary_pane_t1

0x519a,	// (0x00014d69) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001f564) graphic_text_secondary_pane_t

0x5160,	// (0x00014d2f) graphic_text_title_pane_g1

0x5168,	// (0x00014d37) graphic_text_title_pane_t1

0x5176,	// (0x00014d45) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001f55f) graphic_text_title_pane_t

0x513c,	// (0x00014d0b) graphic_text_digital_pane_g1

0x5144,	// (0x00014d13) graphic_text_digital_pane_t1

0x5152,	// (0x00014d21) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001f55a) graphic_text_digital_pane_t

0x1604,	// (0x000111d3) navi_icon_pane_srt_ParamLimits

0x1604,	// (0x000111d3) navi_icon_pane_srt

0x1524,	// (0x000110f3) navi_midp_pane_srt

0x1524,	// (0x000110f3) navi_navi_pane_srt

0x1604,	// (0x000111d3) navi_text_pane_srt_ParamLimits

0x1604,	// (0x000111d3) navi_text_pane_srt

0x4817,	// (0x000143e6) navi_navi_icon_text_pane_srt

0x4831,	// (0x00014400) navi_navi_pane_srt_g1_ParamLimits

0x4831,	// (0x00014400) navi_navi_pane_srt_g1

0x481f,	// (0x000143ee) navi_navi_pane_srt_g2_ParamLimits

0x481f,	// (0x000143ee) navi_navi_pane_srt_g2

0x0001,

0xf8c0,	// (0x0001f48f) navi_navi_pane_srt_g_ParamLimits

0xf8c0,	// (0x0001f48f) navi_navi_pane_srt_g

0x4843,	// (0x00014412) navi_navi_tabs_pane_srt

0x4817,	// (0x000143e6) navi_navi_text_pane_srt

0x4817,	// (0x000143e6) navi_navi_volume_pane_srt

0x512d,	// (0x00014cfc) navi_navi_text_pane_srt_t1

0xdcca,	// (0x0001d899) navi_navi_volume_pane_srt_g1

0xdcd2,	// (0x0001d8a1) volume_small_pane_srt_ParamLimits

0xdcd2,	// (0x0001d8a1) volume_small_pane_srt

0xd25a,	// (0x0001ce29) volume_small_pane_srt_g1_ParamLimits

0xd25a,	// (0x0001ce29) volume_small_pane_srt_g1

0xd26a,	// (0x0001ce39) volume_small_pane_srt_g2_ParamLimits

0xd26a,	// (0x0001ce39) volume_small_pane_srt_g2

0xd27b,	// (0x0001ce4a) volume_small_pane_srt_g3_ParamLimits

0xd27b,	// (0x0001ce4a) volume_small_pane_srt_g3

0xd28c,	// (0x0001ce5b) volume_small_pane_srt_g4_ParamLimits

0xd28c,	// (0x0001ce5b) volume_small_pane_srt_g4

0xd29d,	// (0x0001ce6c) volume_small_pane_srt_g5_ParamLimits

0xd29d,	// (0x0001ce6c) volume_small_pane_srt_g5

0xd2ae,	// (0x0001ce7d) volume_small_pane_srt_g6_ParamLimits

0xd2ae,	// (0x0001ce7d) volume_small_pane_srt_g6

0xd2bf,	// (0x0001ce8e) volume_small_pane_srt_g7_ParamLimits

0xd2bf,	// (0x0001ce8e) volume_small_pane_srt_g7

0xd2d0,	// (0x0001ce9f) volume_small_pane_srt_g8_ParamLimits

0xd2d0,	// (0x0001ce9f) volume_small_pane_srt_g8

0xd2e1,	// (0x0001ceb0) volume_small_pane_srt_g9_ParamLimits

0xd2e1,	// (0x0001ceb0) volume_small_pane_srt_g9

0xd2f2,	// (0x0001cec1) volume_small_pane_srt_g10_ParamLimits

0xd2f2,	// (0x0001cec1) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0001f307) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0001f307) volume_small_pane_srt_g

0x1a23,	// (0x000115f2) query_popup_data_pane_cp2

0x5113,	// (0x00014ce2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5113,	// (0x00014ce2) navi_navi_icon_text_pane_srt_t1

0x425b,	// (0x00013e2a) navi_tabs_2_long_pane_srt

0x425b,	// (0x00013e2a) navi_tabs_2_pane_srt

0x425b,	// (0x00013e2a) navi_tabs_3_long_pane_srt

0x425b,	// (0x00013e2a) navi_tabs_3_pane_srt

0x425b,	// (0x00013e2a) navi_tabs_4_pane_srt

0xdcaa,	// (0x0001d879) tabs_2_active_pane_srt_ParamLimits

0xdcaa,	// (0x0001d879) tabs_2_active_pane_srt

0xdcba,	// (0x0001d889) tabs_2_passive_pane_srt_ParamLimits

0xdcba,	// (0x0001d889) tabs_2_passive_pane_srt

0x344f,	// (0x0001301e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x344f,	// (0x0001301e) bg_passive_tab_pane_cp1_srt

0x50fa,	// (0x00014cc9) bg_passive_tab_pane_g1_cp1_srt

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp1_srt

0x50f1,	// (0x00014cc0) bg_passive_tab_pane_g3_cp1_srt

0x1604,	// (0x000111d3) bg_active_tab_pane_cp1_srt_ParamLimits

0x1604,	// (0x000111d3) bg_active_tab_pane_cp1_srt

0x5103,	// (0x00014cd2) tabs_2_active_pane_srt_g1

0x2619,	// (0x000121e8) tabs_2_active_pane_srt_t1_ParamLimits

0x2619,	// (0x000121e8) tabs_2_active_pane_srt_t1

0x50fa,	// (0x00014cc9) bg_active_tab_pane_g1_cp1_srt

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp1_srt

0x50f1,	// (0x00014cc0) bg_active_tab_pane_g3_cp1_srt

0xdc77,	// (0x0001d846) tabs_3_active_pane_srt_ParamLimits

0xdc77,	// (0x0001d846) tabs_3_active_pane_srt

0xdc88,	// (0x0001d857) tabs_3_passive_pane_cp_srt_ParamLimits

0xdc88,	// (0x0001d857) tabs_3_passive_pane_cp_srt

0xdc99,	// (0x0001d868) tabs_3_passive_pane_srt_ParamLimits

0xdc99,	// (0x0001d868) tabs_3_passive_pane_srt

0x344f,	// (0x0001301e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x344f,	// (0x0001301e) bg_passive_tab_pane_cp2_srt

0x32af,	// (0x00012e7e) bg_passive_tab_pane_g1_cp2_srt

0x2dad,	// (0x0001297c) bg_passive_tab_pane_g2_cp2_srt

0x32a6,	// (0x00012e75) bg_passive_tab_pane_g3_cp2_srt

0x1604,	// (0x000111d3) bg_active_tab_pane_cp2_srt_ParamLimits

0x1604,	// (0x000111d3) bg_active_tab_pane_cp2_srt

0x50e9,	// (0x00014cb8) tabs_3_active_pane_srt_g1

0x161a,	// (0x000111e9) tabs_3_active_pane_srt_t1_ParamLimits

0x161a,	// (0x000111e9) tabs_3_active_pane_srt_t1

0x32af,	// (0x00012e7e) bg_active_tab_pane_g1_cp2_srt

0x2dad,	// (0x0001297c) bg_active_tab_pane_g2_cp2_srt

0x32a6,	// (0x00012e75) bg_active_tab_pane_g3_cp2_srt

0xdc2f,	// (0x0001d7fe) tabs_4_active_pane_srt_ParamLimits

0xdc2f,	// (0x0001d7fe) tabs_4_active_pane_srt

0xdc41,	// (0x0001d810) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdc41,	// (0x0001d810) tabs_4_passive_pane_cp2_srt

0xd45b,	// (0x0001d02a) aid_size_cell_toolbar

0x264c,	// (0x0001221b) main_idle_act_pane_ParamLimits

0xd5bc,	// (0x0001d18b) popup_large_graphic_colour_window_ParamLimits

0xd873,	// (0x0001d442) popup_toolbar_window_ParamLimits

0xd873,	// (0x0001d442) popup_toolbar_window

0x4ed7,	// (0x00014aa6) list_single_graphic_2heading_pane_ParamLimits

0x4ed7,	// (0x00014aa6) list_single_graphic_2heading_pane

0x2823,	// (0x000123f2) aid_size_cell_apps_grid_lsc_pane

0x2835,	// (0x00012404) aid_size_cell_apps_grid_prt_pane

0x344f,	// (0x0001301e) bg_wml_button_pane_cp1_ParamLimits

0x344f,	// (0x0001301e) bg_wml_button_pane_cp1

0x3c65,	// (0x00013834) form_midp_field_text_pane_t1_ParamLimits

0x3a64,	// (0x00013633) input_focus_pane_cp050_ParamLimits

0x3c86,	// (0x00013855) list_midp_form_text_pane_ParamLimits

0x3c42,	// (0x00013811) input_focus_pane_cp051_ParamLimits

0x3c56,	// (0x00013825) list_midp_choice_pane_ParamLimits

0x3b14,	// (0x000136e3) list_single_2graphic_pane_cp3_ParamLimits

0x3b14,	// (0x000136e3) list_single_2graphic_pane_cp3

0x3b27,	// (0x000136f6) list_single_midp_graphic_pane_ParamLimits

0x3b27,	// (0x000136f6) list_single_midp_graphic_pane

0xc365,	// (0x0001bf34) list_single_graphic_2heading_pane_g1_ParamLimits

0xc365,	// (0x0001bf34) list_single_graphic_2heading_pane_g1

0xbbfe,	// (0x0001b7cd) list_single_graphic_2heading_pane_g4_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_graphic_2heading_pane_g4

0xbc0a,	// (0x0001b7d9) list_single_graphic_2heading_pane_g5_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0001f35a) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0001f35a) list_single_graphic_2heading_pane_g

0xc371,	// (0x0001bf40) list_single_graphic_2heading_pane_t1_ParamLimits

0xc371,	// (0x0001bf40) list_single_graphic_2heading_pane_t1

0xc385,	// (0x0001bf54) list_single_graphic_2heading_pane_t2_ParamLimits

0xc385,	// (0x0001bf54) list_single_graphic_2heading_pane_t2

0xc39f,	// (0x0001bf6e) list_single_graphic_2heading_pane_t3_ParamLimits

0xc39f,	// (0x0001bf6e) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0001f361) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0001f361) list_single_graphic_2heading_pane_t

0x3868,	// (0x00013437) bg_popup_sub_pane_cp2

0x388e,	// (0x0001345d) grid_toobar_pane

0xd902,	// (0x0001d4d1) cell_toolbar_pane_ParamLimits

0xd902,	// (0x0001d4d1) cell_toolbar_pane

0x38f2,	// (0x000134c1) cell_toolbar_pane_g1_ParamLimits

0x38f2,	// (0x000134c1) cell_toolbar_pane_g1

0x3904,	// (0x000134d3) cell_toolbar_pane_g2_ParamLimits

0x3904,	// (0x000134d3) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0001f36f) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0001f36f) cell_toolbar_pane_g

0x3926,	// (0x000134f5) grid_highlight_pane_cp2_ParamLimits

0x3926,	// (0x000134f5) grid_highlight_pane_cp2

0x3940,	// (0x0001350f) toolbar_button_pane

0x394c,	// (0x0001351b) toolbar_button_pane_g1

0x395c,	// (0x0001352b) toolbar_button_pane_g2

0x3954,	// (0x00013523) toolbar_button_pane_g3

0x396c,	// (0x0001353b) toolbar_button_pane_g4

0x3964,	// (0x00013533) toolbar_button_pane_g5

0x3974,	// (0x00013543) toolbar_button_pane_g6

0x397c,	// (0x0001354b) toolbar_button_pane_g7

0x398c,	// (0x0001355b) toolbar_button_pane_g8

0x3984,	// (0x00013553) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0001f374) toolbar_button_pane_g

0xd931,	// (0x0001d500) list_single_2graphic_pane_g1_cp3_ParamLimits

0xd931,	// (0x0001d500) list_single_2graphic_pane_g1_cp3

0xd93d,	// (0x0001d50c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd93d,	// (0x0001d50c) list_single_2graphic_pane_g2_cp3

0x2f7a,	// (0x00012b49) list_single_2graphic_pane_g3_cp3

0x44a5,	// (0x00014074) list_single_2graphic_pane_g4_cp3_ParamLimits

0x44a5,	// (0x00014074) list_single_2graphic_pane_g4_cp3

0xd94c,	// (0x0001d51b) list_single_2graphic_pane_t1_cp3_ParamLimits

0xd94c,	// (0x0001d51b) list_single_2graphic_pane_t1_cp3

0x2f6e,	// (0x00012b3d) list_single_midp_graphic_pane_g2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_midp_graphic_pane_g2

0xd463,	// (0x0001d032) aid_zoom_text_primary

0xc338,	// (0x0001bf07) aid_zoom_text_secondary

0x335e,	// (0x00012f2d) status_small_pane_g7_ParamLimits

0x335e,	// (0x00012f2d) status_small_pane_g7

0x3381,	// (0x00012f50) status_small_pane_t1_ParamLimits

0x153b,	// (0x0001110a) title_pane_g2

0x0003,

0xf529,	// (0x0001f0f8) title_pane_g

0x1ac8,	// (0x00011697) aid_size_cell_colour_1_pane_ParamLimits

0x1ac8,	// (0x00011697) aid_size_cell_colour_1_pane

0x1adc,	// (0x000116ab) aid_size_cell_colour_2_pane_ParamLimits

0x1adc,	// (0x000116ab) aid_size_cell_colour_2_pane

0x1af0,	// (0x000116bf) aid_size_cell_colour_3_pane_ParamLimits

0x1af0,	// (0x000116bf) aid_size_cell_colour_3_pane

0x1b04,	// (0x000116d3) aid_size_cell_colour_4_pane_ParamLimits

0x1b04,	// (0x000116d3) aid_size_cell_colour_4_pane

0xcf15,	// (0x0001cae4) title_pane_stacon_g1_ParamLimits

0xcf15,	// (0x0001cae4) title_pane_stacon_g1

0x4056,	// (0x00013c25) popup_note_wait_window_g3_ParamLimits

0x4056,	// (0x00013c25) popup_note_wait_window_g3

0x40cc,	// (0x00013c9b) popup_note_wait_window_t5_ParamLimits

0x40cc,	// (0x00013c9b) popup_note_wait_window_t5

0x1524,	// (0x000110f3) main_feb_china_hwr_fs_writing_pane

0xd4d1,	// (0x0001d0a0) popup_feb_china_hwr_fs_window_ParamLimits

0xd4d1,	// (0x0001d0a0) popup_feb_china_hwr_fs_window

0xd97c,	// (0x0001d54b) aid_size_cell_hwr_fs_ParamLimits

0xd97c,	// (0x0001d54b) aid_size_cell_hwr_fs

0x3a64,	// (0x00013633) bg_popup_sub_pane_cp3_ParamLimits

0x3a64,	// (0x00013633) bg_popup_sub_pane_cp3

0xd991,	// (0x0001d560) grid_hwr_fs_pane_ParamLimits

0xd991,	// (0x0001d560) grid_hwr_fs_pane

0xd9a5,	// (0x0001d574) linegrid_hwr_fs_pane_ParamLimits

0xd9a5,	// (0x0001d574) linegrid_hwr_fs_pane

0xd9b5,	// (0x0001d584) cell_hwr_fs_pane_ParamLimits

0xd9b5,	// (0x0001d584) cell_hwr_fs_pane

0x3a70,	// (0x0001363f) linegrid_hwr_fs_pane_g1_ParamLimits

0x3a70,	// (0x0001363f) linegrid_hwr_fs_pane_g1

0x3a7c,	// (0x0001364b) linegrid_hwr_fs_pane_g2_ParamLimits

0x3a7c,	// (0x0001364b) linegrid_hwr_fs_pane_g2

0x3a8e,	// (0x0001365d) linegrid_hwr_fs_pane_g3_ParamLimits

0x3a8e,	// (0x0001365d) linegrid_hwr_fs_pane_g3

0xd9d3,	// (0x0001d5a2) linegrid_hwr_fs_pane_g4_ParamLimits

0xd9d3,	// (0x0001d5a2) linegrid_hwr_fs_pane_g4

0xd9ed,	// (0x0001d5bc) linegrid_hwr_fs_pane_g5_ParamLimits

0xd9ed,	// (0x0001d5bc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001f39a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001f39a) linegrid_hwr_fs_pane_g

0x3a9a,	// (0x00013669) cell_hwr_fs_pane_g1_ParamLimits

0x3a9a,	// (0x00013669) cell_hwr_fs_pane_g1

0x37a6,	// (0x00013375) cell_hwr_fs_pane_g2_ParamLimits

0x37a6,	// (0x00013375) cell_hwr_fs_pane_g2

0x3ab0,	// (0x0001367f) cell_hwr_fs_pane_g3_ParamLimits

0x3ab0,	// (0x0001367f) cell_hwr_fs_pane_g3

0x3abd,	// (0x0001368c) cell_hwr_fs_pane_g4_ParamLimits

0x3abd,	// (0x0001368c) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0001f3a5) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0001f3a5) cell_hwr_fs_pane_g

0xda03,	// (0x0001d5d2) cell_hwr_fs_pane_t1

0x1524,	// (0x000110f3) grid_highlight_pane_cp6

0x1524,	// (0x000110f3) main_idle_act2_pane

0x25c1,	// (0x00012190) aid_inside_area_popup_secondary

0x46b7,	// (0x00014286) aid_inside_area_window_primary_ParamLimits

0x46b7,	// (0x00014286) aid_inside_area_window_primary

0x51f7,	// (0x00014dc6) ai2_news_ticker_pane

0x51ff,	// (0x00014dce) aid_size_cell_ai1_link_ParamLimits

0x51ff,	// (0x00014dce) aid_size_cell_ai1_link

0x5219,	// (0x00014de8) popup_ai2_data_window_ParamLimits

0x5219,	// (0x00014de8) popup_ai2_data_window

0x522d,	// (0x00014dfc) popup_ai2_link_window_ParamLimits

0x522d,	// (0x00014dfc) popup_ai2_link_window

0x3a64,	// (0x00013633) bg_popup_sub_pane_cp4_ParamLimits

0x3a64,	// (0x00013633) bg_popup_sub_pane_cp4

0x5241,	// (0x00014e10) grid_ai2_link_pane_ParamLimits

0x5241,	// (0x00014e10) grid_ai2_link_pane

0x5258,	// (0x00014e27) popup_ai2_link_window_g1_ParamLimits

0x5258,	// (0x00014e27) popup_ai2_link_window_g1

0x5264,	// (0x00014e33) popup_ai2_link_window_g2_ParamLimits

0x5264,	// (0x00014e33) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001f573) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001f573) popup_ai2_link_window_g

0x5273,	// (0x00014e42) ai2_mp_button_pane

0x527b,	// (0x00014e4a) ai2_mp_volume_pane

0x3c42,	// (0x00013811) bg_popup_sub_pane_cp5_ParamLimits

0x3c42,	// (0x00013811) bg_popup_sub_pane_cp5

0x5283,	// (0x00014e52) heading_ai2_gene_pane_ParamLimits

0x5283,	// (0x00014e52) heading_ai2_gene_pane

0x528f,	// (0x00014e5e) list_ai2_gene_pane_ParamLimits

0x528f,	// (0x00014e5e) list_ai2_gene_pane

0x52d7,	// (0x00014ea6) cell_ai2_link_pane_ParamLimits

0x52d7,	// (0x00014ea6) cell_ai2_link_pane

0x52ed,	// (0x00014ebc) cell_ai2_link_pane_g1

0x1524,	// (0x000110f3) grid_highlight_pane_cp7

0xdce7,	// (0x0001d8b6) ai2_mp_volume_pane_g1

0x53c5,	// (0x00014f94) ai2_mp_volume_pane_g2

0x5332,	// (0x00014f01) list_ai2_gene_pane_t1

0x53bd,	// (0x00014f8c) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001f58c) ai2_mp_volume_pane_g

0xdcef,	// (0x0001d8be) volume_small_pane_cp3

0x53cd,	// (0x00014f9c) aid_size_cell_ai2_button

0x53d5,	// (0x00014fa4) grid_ai2_button_pane

0x53de,	// (0x00014fad) cell_ai2_button_pane_ParamLimits

0x53de,	// (0x00014fad) cell_ai2_button_pane

0x143d,	// (0x0001100c) cell_ai2_button_pane_g1

0x1524,	// (0x000110f3) grid_highlight_pane_cp8

0x537d,	// (0x00014f4c) ai2_gene_pane_t1_ParamLimits

0x537d,	// (0x00014f4c) ai2_gene_pane_t1

0xd451,	// (0x0001d020) aid_height_parent_landscape

0x4d01,	// (0x000148d0) aid_height_set_list

0x4d0d,	// (0x000148dc) aid_size_parent

0x507c,	// (0x00014c4b) aid_size_cell_graphic_pane_ParamLimits

0x529f,	// (0x00014e6e) popup_ai2_data_window_g1_ParamLimits

0x529f,	// (0x00014e6e) popup_ai2_data_window_g1

0x52ab,	// (0x00014e7a) ai2_news_ticker_pane_g1

0x52b3,	// (0x00014e82) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001f578) ai2_news_ticker_pane_g

0x52bb,	// (0x00014e8a) ai2_news_ticker_pane_t1

0x52c9,	// (0x00014e98) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001f57d) ai2_news_ticker_pane_t

0x52f6,	// (0x00014ec5) heading_ai2_gene_pane_g1

0x52fe,	// (0x00014ecd) heading_ai2_gene_pane_t1_ParamLimits

0x52fe,	// (0x00014ecd) heading_ai2_gene_pane_t1

0x5313,	// (0x00014ee2) list_highlight_pane_cp6

0x531b,	// (0x00014eea) ai2_gene_pane_ParamLimits

0x531b,	// (0x00014eea) ai2_gene_pane

0x5340,	// (0x00014f0f) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001f582) list_ai2_gene_pane_t

0x534e,	// (0x00014f1d) list_highlight_pane_cp8_ParamLimits

0x534e,	// (0x00014f1d) list_highlight_pane_cp8

0x535f,	// (0x00014f2e) ai2_gene_pane_g1_ParamLimits

0x535f,	// (0x00014f2e) ai2_gene_pane_g1

0x5371,	// (0x00014f40) ai2_gene_pane_g2_ParamLimits

0x5371,	// (0x00014f40) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001f587) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001f587) ai2_gene_pane_g

0x1d98,	// (0x00011967) scroll_pane_cp12

0xd408,	// (0x0001cfd7) control_pane_t3_ParamLimits

0xd408,	// (0x0001cfd7) control_pane_t3

0x3372,	// (0x00012f41) status_small_pane_g8_ParamLimits

0x3372,	// (0x00012f41) status_small_pane_g8

0xd591,	// (0x0001d160) popup_find_window_ParamLimits

0xd716,	// (0x0001d2e5) popup_note_image_window_ParamLimits

0xc365,	// (0x0001bf34) list_double2_graphic_pane_vc_g1_ParamLimits

0xc365,	// (0x0001bf34) list_double2_graphic_pane_vc_g1

0xc3b7,	// (0x0001bf86) list_double2_graphic_pane_vc_g2_ParamLimits

0xc3b7,	// (0x0001bf86) list_double2_graphic_pane_vc_g2

0xc3c3,	// (0x0001bf92) list_double2_graphic_pane_vc_g3_ParamLimits

0xc3c3,	// (0x0001bf92) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0001f368) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0001f368) list_double2_graphic_pane_vc_g

0xbc16,	// (0x0001b7e5) list_double2_graphic_pane_vc_t1_ParamLimits

0xbc16,	// (0x0001b7e5) list_double2_graphic_pane_vc_t1

0xbbfe,	// (0x0001b7cd) list_single_heading_pane_vc_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_heading_pane_vc_g1

0xbc0a,	// (0x0001b7d9) list_single_heading_pane_vc_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f172) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f172) list_single_heading_pane_vc_g

0xc3cf,	// (0x0001bf9e) list_single_heading_pane_vc_t1_ParamLimits

0xc3cf,	// (0x0001bf9e) list_single_heading_pane_vc_t1

0xc3e5,	// (0x0001bfb4) list_single_heading_pane_vc_t2_ParamLimits

0xc3e5,	// (0x0001bfb4) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001f389) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001f389) list_single_heading_pane_vc_t

0x39bc,	// (0x0001358b) list_setting_number_pane_vc_g1_ParamLimits

0x39bc,	// (0x0001358b) list_setting_number_pane_vc_g1

0x39c8,	// (0x00013597) list_setting_number_pane_vc_g2_ParamLimits

0x39c8,	// (0x00013597) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001f38e) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001f38e) list_setting_number_pane_vc_g

0xc3f7,	// (0x0001bfc6) list_setting_number_pane_vc_t1_ParamLimits

0xc3f7,	// (0x0001bfc6) list_setting_number_pane_vc_t1

0xc40b,	// (0x0001bfda) list_setting_number_pane_vc_t2_ParamLimits

0xc40b,	// (0x0001bfda) list_setting_number_pane_vc_t2

0xc427,	// (0x0001bff6) list_setting_number_pane_vc_t3_ParamLimits

0xc427,	// (0x0001bff6) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001f393) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001f393) list_setting_number_pane_vc_t

0xc43f,	// (0x0001c00e) set_value_pane_vc_ParamLimits

0xc43f,	// (0x0001c00e) set_value_pane_vc

0x4ed7,	// (0x00014aa6) list_double2_graphic_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double2_graphic_pane_vc

0xc4d8,	// (0x0001c0a7) list_double2_large_graphic_pane_vc_ParamLimits

0xc4d8,	// (0x0001c0a7) list_double2_large_graphic_pane_vc

0x4ed7,	// (0x00014aa6) list_double2_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double2_pane_vc

0x4ed7,	// (0x00014aa6) list_double_graphic_heading_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double_graphic_heading_pane_vc

0x4ed7,	// (0x00014aa6) list_double_graphic_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double_graphic_pane_vc

0x4ed7,	// (0x00014aa6) list_double_heading_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double_heading_pane_vc

0xc4ea,	// (0x0001c0b9) list_double_large_graphic_pane_vc_ParamLimits

0xc4ea,	// (0x0001c0b9) list_double_large_graphic_pane_vc

0x4ed7,	// (0x00014aa6) list_double_number_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double_number_pane_vc

0x4ed7,	// (0x00014aa6) list_double_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double_pane_vc

0x4ed7,	// (0x00014aa6) list_double_time_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_double_time_pane_vc

0x4ed7,	// (0x00014aa6) list_setting_number_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_setting_number_pane_vc

0x4ed7,	// (0x00014aa6) list_setting_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_setting_pane_vc

0x4ed7,	// (0x00014aa6) list_single_graphic_heading_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_single_graphic_heading_pane_vc

0x4ed7,	// (0x00014aa6) list_single_heading_pane_vc_ParamLimits

0x4ed7,	// (0x00014aa6) list_single_heading_pane_vc

0xc508,	// (0x0001c0d7) list_single_number_heading_pane_vc_ParamLimits

0xc508,	// (0x0001c0d7) list_single_number_heading_pane_vc

0xc365,	// (0x0001bf34) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc365,	// (0x0001bf34) list_double_graphic_heading_pane_vc_g1

0xbbfe,	// (0x0001b7cd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbbfe,	// (0x0001b7cd) list_double_graphic_heading_pane_vc_g2

0xbc0a,	// (0x0001b7d9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbc0a,	// (0x0001b7d9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf78b,	// (0x0001f35a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0001f35a) list_double_graphic_heading_pane_vc_g

0xc54c,	// (0x0001c11b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc54c,	// (0x0001c11b) list_double_graphic_heading_pane_vc_t1

0xc562,	// (0x0001c131) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc562,	// (0x0001c131) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x0001f593) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x0001f593) list_double_graphic_heading_pane_vc_t

0x39bc,	// (0x0001358b) list_setting_pane_vc_g1_ParamLimits

0x39bc,	// (0x0001358b) list_setting_pane_vc_g1

0x39c8,	// (0x00013597) list_setting_pane_vc_g2_ParamLimits

0x39c8,	// (0x00013597) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001f38e) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001f38e) list_setting_pane_vc_g

0xc57a,	// (0x0001c149) list_setting_pane_vc_t1_ParamLimits

0xc57a,	// (0x0001c149) list_setting_pane_vc_t1

0xc58e,	// (0x0001c15d) list_setting_pane_vc_t2_ParamLimits

0xc58e,	// (0x0001c15d) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x0001f5d6) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x0001f5d6) list_setting_pane_vc_t

0xc43f,	// (0x0001c00e) set_value_pane_cp_vc_ParamLimits

0xc43f,	// (0x0001c00e) set_value_pane_cp_vc

0xbbfe,	// (0x0001b7cd) list_single_number_heading_pane_vc_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_number_heading_pane_vc_g1

0xbc0a,	// (0x0001b7d9) list_single_number_heading_pane_vc_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f172) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f172) list_single_number_heading_pane_vc_g

0xc3cf,	// (0x0001bf9e) list_single_number_heading_pane_vc_t1_ParamLimits

0xc3cf,	// (0x0001bf9e) list_single_number_heading_pane_vc_t1

0xc5a2,	// (0x0001c171) list_single_number_heading_pane_vc_t2_ParamLimits

0xc5a2,	// (0x0001c171) list_single_number_heading_pane_vc_t2

0xbc66,	// (0x0001b835) list_single_number_heading_pane_vc_t3_ParamLimits

0xbc66,	// (0x0001b835) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x0001f5db) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x0001f5db) list_single_number_heading_pane_vc_t

0xc365,	// (0x0001bf34) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc365,	// (0x0001bf34) list_single_graphic_heading_pane_vc_g1

0xbbfe,	// (0x0001b7cd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_graphic_heading_pane_vc_g4

0xbc0a,	// (0x0001b7d9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xbc0a,	// (0x0001b7d9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0001f35a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0001f35a) list_single_graphic_heading_pane_vc_g

0xc3cf,	// (0x0001bf9e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xc3cf,	// (0x0001bf9e) list_single_graphic_heading_pane_vc_t1

0xc5b4,	// (0x0001c183) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc5b4,	// (0x0001c183) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x0001f5e2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x0001f5e2) list_single_graphic_heading_pane_vc_t

0xbbfe,	// (0x0001b7cd) list_double2_pane_vc_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_double2_pane_vc_g1

0xbc0a,	// (0x0001b7d9) list_double2_pane_vc_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f172) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f172) list_double2_pane_vc_g

0xc4af,	// (0x0001c07e) list_double2_pane_vc_t1_ParamLimits

0xc4af,	// (0x0001c07e) list_double2_pane_vc_t1

0xc5c6,	// (0x0001c195) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc5c6,	// (0x0001c195) list_double2_large_graphic_pane_vc_g1

0xc5d2,	// (0x0001c1a1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc5d2,	// (0x0001c1a1) list_double2_large_graphic_pane_vc_g2

0xc5de,	// (0x0001c1ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc5de,	// (0x0001c1ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa18,	// (0x0001f5e7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa18,	// (0x0001f5e7) list_double2_large_graphic_pane_vc_g

0xc5ea,	// (0x0001c1b9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc5ea,	// (0x0001c1b9) list_double2_large_graphic_pane_vc_t1

0xc600,	// (0x0001c1cf) list_double_time_pane_vc_g1_ParamLimits

0xc600,	// (0x0001c1cf) list_double_time_pane_vc_g1

0xc60c,	// (0x0001c1db) list_double_time_pane_vc_g2_ParamLimits

0xc60c,	// (0x0001c1db) list_double_time_pane_vc_g2

0x0001,

0xfa1f,	// (0x0001f5ee) list_double_time_pane_vc_g_ParamLimits

0xfa1f,	// (0x0001f5ee) list_double_time_pane_vc_g

0xc618,	// (0x0001c1e7) list_double_time_pane_vc_t1_ParamLimits

0xc618,	// (0x0001c1e7) list_double_time_pane_vc_t1

0xc636,	// (0x0001c205) list_double_time_pane_vc_t2_ParamLimits

0xc636,	// (0x0001c205) list_double_time_pane_vc_t2

0xc67f,	// (0x0001c24e) list_double_time_pane_vc_t3_ParamLimits

0xc67f,	// (0x0001c24e) list_double_time_pane_vc_t3

0xc691,	// (0x0001c260) list_double_time_pane_vc_t4_ParamLimits

0xc691,	// (0x0001c260) list_double_time_pane_vc_t4

0x0003,

0xfa24,	// (0x0001f5f3) list_double_time_pane_vc_t_ParamLimits

0xfa24,	// (0x0001f5f3) list_double_time_pane_vc_t

0xbbfe,	// (0x0001b7cd) list_double_pane_vc_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_double_pane_vc_g1

0xbc0a,	// (0x0001b7d9) list_double_pane_vc_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f172) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f172) list_double_pane_vc_g

0xc6a3,	// (0x0001c272) list_double_pane_vc_t1_ParamLimits

0xc6a3,	// (0x0001c272) list_double_pane_vc_t1

0xc6b5,	// (0x0001c284) list_double_pane_vc_t2_ParamLimits

0xc6b5,	// (0x0001c284) list_double_pane_vc_t2

0x0001,

0xfa2d,	// (0x0001f5fc) list_double_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001f5fc) list_double_pane_vc_t

0xbbfe,	// (0x0001b7cd) list_double_number_pane_vc_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_double_number_pane_vc_g1

0xbc0a,	// (0x0001b7d9) list_double_number_pane_vc_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f172) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f172) list_double_number_pane_vc_g

0xc6cb,	// (0x0001c29a) list_double_number_pane_vc_t1_ParamLimits

0xc6cb,	// (0x0001c29a) list_double_number_pane_vc_t1

0xc6df,	// (0x0001c2ae) list_double_number_pane_vc_t2_ParamLimits

0xc6df,	// (0x0001c2ae) list_double_number_pane_vc_t2

0xc6f1,	// (0x0001c2c0) list_double_number_pane_vc_t3_ParamLimits

0xc6f1,	// (0x0001c2c0) list_double_number_pane_vc_t3

0x0002,

0xfa32,	// (0x0001f601) list_double_number_pane_vc_t_ParamLimits

0xfa32,	// (0x0001f601) list_double_number_pane_vc_t

0xc707,	// (0x0001c2d6) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc707,	// (0x0001c2d6) list_double_large_graphic_pane_vc_g1

0xc72f,	// (0x0001c2fe) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc72f,	// (0x0001c2fe) list_double_large_graphic_pane_vc_g2

0xc743,	// (0x0001c312) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc743,	// (0x0001c312) list_double_large_graphic_pane_vc_g3

0xc752,	// (0x0001c321) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc752,	// (0x0001c321) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa39,	// (0x0001f608) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa39,	// (0x0001f608) list_double_large_graphic_pane_vc_g

0xc762,	// (0x0001c331) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc762,	// (0x0001c331) list_double_large_graphic_pane_vc_t1

0xc77c,	// (0x0001c34b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc77c,	// (0x0001c34b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0001f611) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa42,	// (0x0001f611) list_double_large_graphic_pane_vc_t

0xbbfe,	// (0x0001b7cd) list_double_heading_pane_vc_g1_ParamLimits

0xbbfe,	// (0x0001b7cd) list_double_heading_pane_vc_g1

0xbc0a,	// (0x0001b7d9) list_double_heading_pane_vc_g2_ParamLimits

0xbc0a,	// (0x0001b7d9) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f172) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f172) list_double_heading_pane_vc_g

0xc79c,	// (0x0001c36b) list_double_heading_pane_vc_t1_ParamLimits

0xc79c,	// (0x0001c36b) list_double_heading_pane_vc_t1

0xc3cf,	// (0x0001bf9e) list_double_heading_pane_vc_t2_ParamLimits

0xc3cf,	// (0x0001bf9e) list_double_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x0001f616) list_double_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x0001f616) list_double_heading_pane_vc_t

0xc7ae,	// (0x0001c37d) list_double_graphic_pane_vc_g1_ParamLimits

0xc7ae,	// (0x0001c37d) list_double_graphic_pane_vc_g1

0xc7ba,	// (0x0001c389) list_double_graphic_pane_vc_g2_ParamLimits

0xc7ba,	// (0x0001c389) list_double_graphic_pane_vc_g2

0xbbfe,	// (0x0001b7cd) list_double_graphic_pane_vc_g3_ParamLimits

0xbbfe,	// (0x0001b7cd) list_double_graphic_pane_vc_g3

0x0003,

0xfa4c,	// (0x0001f61b) list_double_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001f61b) list_double_graphic_pane_vc_g

0xc7d7,	// (0x0001c3a6) list_double_graphic_pane_vc_t1_ParamLimits

0xc7d7,	// (0x0001c3a6) list_double_graphic_pane_vc_t1

0xc7f5,	// (0x0001c3c4) list_double_graphic_pane_vc_t2_ParamLimits

0xc7f5,	// (0x0001c3c4) list_double_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0001f624) list_double_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0001f624) list_double_graphic_pane_vc_t

0xcbfc,	// (0x0001c7cb) aid_size_cell_fastswap

0xcc04,	// (0x0001c7d3) aid_size_cell_touch_ParamLimits

0xcc04,	// (0x0001c7d3) aid_size_cell_touch

0xcd49,	// (0x0001c918) popup_fast_swap_wide_window_ParamLimits

0xcd49,	// (0x0001c918) popup_fast_swap_wide_window

0xce0f,	// (0x0001c9de) touch_pane_ParamLimits

0xce0f,	// (0x0001c9de) touch_pane

0xc0ab,	// (0x0001bc7a) button_value_adjust_pane_cp2

0x5a38,	// (0x00015607) button_value_adjust_pane_cp4

0xc0cb,	// (0x0001bc9a) form_field_data_pane_cp2

0xc0ea,	// (0x0001bcb9) form_field_data_wide_pane_cp2

0x28e6,	// (0x000124b5) bg_scroll_pane_ParamLimits

0xd036,	// (0x0001cc05) scroll_handle_pane_ParamLimits

0xd04a,	// (0x0001cc19) scroll_sc2_down_pane_ParamLimits

0xd04a,	// (0x0001cc19) scroll_sc2_down_pane

0x2917,	// (0x000124e6) scroll_sc2_up_pane_ParamLimits

0x2917,	// (0x000124e6) scroll_sc2_up_pane

0x5cdc,	// (0x000158ab) grid_wheel_folder_pane_g1_ParamLimits

0x5cdc,	// (0x000158ab) grid_wheel_folder_pane_g1

0xd1fe,	// (0x0001cdcd) clock_nsta_pane_cp2_ParamLimits

0xd1fe,	// (0x0001cdcd) clock_nsta_pane_cp2

0x3108,	// (0x00012cd7) listscroll_midp_pane_ParamLimits

0x3114,	// (0x00012ce3) midp_canvas_pane

0xd449,	// (0x0001d018) nsta_clock_indic_pane

0x3420,	// (0x00012fef) listscroll_form_pane_vc

0x343d,	// (0x0001300c) listscroll_set_pane_vc_ParamLimits

0x343d,	// (0x0001300c) listscroll_set_pane_vc

0x3531,	// (0x00013100) clock_nsta_pane

0x35a1,	// (0x00013170) indicator_nsta_pane

0x3868,	// (0x00013437) bg_popup_sub_pane_cp2_ParamLimits

0x387c,	// (0x0001344b) find_pane_cp2_ParamLimits

0x387c,	// (0x0001344b) find_pane_cp2

0x388e,	// (0x0001345d) grid_toobar_pane_ParamLimits

0x3a38,	// (0x00013607) list_form_gen_pane_vc_ParamLimits

0x3a38,	// (0x00013607) list_form_gen_pane_vc

0x3a4e,	// (0x0001361d) scroll_pane_cp8_vc_ParamLimits

0x3a4e,	// (0x0001361d) scroll_pane_cp8_vc

0x3aca,	// (0x00013699) data_form_wide_pane_vc_ParamLimits

0x3aca,	// (0x00013699) data_form_wide_pane_vc

0x3ad6,	// (0x000136a5) form_field_data_wide_pane_vc_g1

0x3ade,	// (0x000136ad) form_field_data_wide_pane_vc_t1_ParamLimits

0x3ade,	// (0x000136ad) form_field_data_wide_pane_vc_t1

0x2303,	// (0x00011ed2) input_focus_pane_cp6_vc_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_cp6_vc

0x3dce,	// (0x0001399d) list_midp_pane_ParamLimits

0x3dda,	// (0x000139a9) scroll_pane_cp16_ParamLimits

0x3dda,	// (0x000139a9) scroll_pane_cp16

0x3e3c,	// (0x00013a0b) button_value_adjust_pane_ParamLimits

0x3e3c,	// (0x00013a0b) button_value_adjust_pane

0x4d1f,	// (0x000148ee) button_value_adjust_pane_cp6_ParamLimits

0x4d1f,	// (0x000148ee) button_value_adjust_pane_cp6

0x4e27,	// (0x000149f6) settings_code_pane_cp_ParamLimits

0x4e27,	// (0x000149f6) settings_code_pane_cp

0x143d,	// (0x0001100c) cell_touch_pane_g1

0x143d,	// (0x0001100c) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0001f2ad) cell_touch_pane_g

0x53f0,	// (0x00014fbf) cell_touch_pane_cp_ParamLimits

0x53f0,	// (0x00014fbf) cell_touch_pane_cp

0x5400,	// (0x00014fcf) cell_touch_pane_ParamLimits

0x5400,	// (0x00014fcf) cell_touch_pane

0x143d,	// (0x0001100c) scroll_sc2_down_pane_g1

0x143d,	// (0x0001100c) scroll_sc2_up_pane_g1

0x1524,	// (0x000110f3) bg_set_opt_pane_cp4_vc

0x5440,	// (0x0001500f) list_set_graphic_pane_vc_g1_ParamLimits

0x5440,	// (0x0001500f) list_set_graphic_pane_vc_g1

0x544c,	// (0x0001501b) list_set_graphic_pane_vc_g2_ParamLimits

0x544c,	// (0x0001501b) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x0001f598) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x0001f598) list_set_graphic_pane_vc_g

0x5458,	// (0x00015027) text_primary_small_cp13_vc_ParamLimits

0x5458,	// (0x00015027) text_primary_small_cp13_vc

0x5470,	// (0x0001503f) list_set_graphic_pane_vc_ParamLimits

0x5470,	// (0x0001503f) list_set_graphic_pane_vc

0x1524,	// (0x000110f3) input_focus_pane_cp2_vc

0x143d,	// (0x0001100c) setting_code_pane_vc_g1

0x5483,	// (0x00015052) setting_code_pane_vc_t1

0x5491,	// (0x00015060) set_text_pane_vc_t1_ParamLimits

0x5491,	// (0x00015060) set_text_pane_vc_t1

0x1524,	// (0x000110f3) input_focus_pane_cp1_vc

0x54ac,	// (0x0001507b) list_set_text_pane_vc

0x143d,	// (0x0001100c) setting_text_pane_vc_g1

0x1524,	// (0x000110f3) bg_set_opt_pane_cp2_vc

0x54b6,	// (0x00015085) setting_slider_graphic_pane_vc_g1

0x54be,	// (0x0001508d) setting_slider_graphic_pane_vc_t1

0x54cc,	// (0x0001509b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x0001f59d) setting_slider_graphic_pane_vc_t

0x54da,	// (0x000150a9) slider_set_pane_cp_vc

0x54e2,	// (0x000150b1) slider_set_pane_vc_g1

0x54eb,	// (0x000150ba) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x0001f5a2) slider_set_pane_vc_g

0x2426,	// (0x00011ff5) set_opt_bg_pane_g1_copy1

0x242e,	// (0x00011ffd) set_opt_bg_pane_g2_copy1

0x5517,	// (0x000150e6) set_opt_bg_pane_g3_copy1

0x243e,	// (0x0001200d) set_opt_bg_pane_g4_copy1

0x2446,	// (0x00012015) set_opt_bg_pane_g5_copy1

0x244e,	// (0x0001201d) set_opt_bg_pane_g6_copy1

0x551f,	// (0x000150ee) set_opt_bg_pane_g7_copy1

0x5527,	// (0x000150f6) set_opt_bg_pane_g8_copy1

0x552f,	// (0x000150fe) set_opt_bg_pane_g9_copy1

0x1524,	// (0x000110f3) bg_set_opt_pane_cp_vc

0x5537,	// (0x00015106) setting_slider_pane_vc_t1

0x54be,	// (0x0001508d) setting_slider_pane_vc_t2

0x54cc,	// (0x0001509b) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x0001f5b1) setting_slider_pane_vc_t

0x54da,	// (0x000150a9) slider_set_pane_vc

0xda11,	// (0x0001d5e0) volume_set_pane_vc_g1

0xdcf8,	// (0x0001d8c7) volume_set_pane_vc_g2

0xdd01,	// (0x0001d8d0) volume_set_pane_vc_g3

0xdd0a,	// (0x0001d8d9) volume_set_pane_vc_g4

0xdd13,	// (0x0001d8e2) volume_set_pane_vc_g5

0xdd1c,	// (0x0001d8eb) volume_set_pane_vc_g6

0xdd25,	// (0x0001d8f4) volume_set_pane_vc_g7

0xdd2e,	// (0x0001d8fd) volume_set_pane_vc_g8

0xdd37,	// (0x0001d906) volume_set_pane_vc_g9

0xdd40,	// (0x0001d90f) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x0001f5b8) volume_set_pane_vc_g

0x5546,	// (0x00015115) volume_set_pane_vc

0x554e,	// (0x0001511d) button_value_adjust_pane_cp1_vc

0x5558,	// (0x00015127) list_highlight_pane_cp2_vc

0x5561,	// (0x00015130) list_set_pane_vc_ParamLimits

0x5561,	// (0x00015130) list_set_pane_vc

0x55b3,	// (0x00015182) main_pane_set_vc_t1_ParamLimits

0x55b3,	// (0x00015182) main_pane_set_vc_t1

0x55c8,	// (0x00015197) main_pane_set_vc_t2_ParamLimits

0x55c8,	// (0x00015197) main_pane_set_vc_t2

0x55da,	// (0x000151a9) main_pane_set_vc_t3_ParamLimits

0x55da,	// (0x000151a9) main_pane_set_vc_t3

0x55ec,	// (0x000151bb) main_pane_set_vc_t4_ParamLimits

0x55ec,	// (0x000151bb) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x0001f5cd) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x0001f5cd) main_pane_set_vc_t

0x55fe,	// (0x000151cd) setting_code_pane_vc_ParamLimits

0x55fe,	// (0x000151cd) setting_code_pane_vc

0x560d,	// (0x000151dc) setting_slider_graphic_pane_vc

0x560d,	// (0x000151dc) setting_slider_pane_vc

0x560d,	// (0x000151dc) setting_text_pane_vc

0x560d,	// (0x000151dc) setting_volume_pane_vc

0x5615,	// (0x000151e4) scroll_pane_cp121_vc

0x222a,	// (0x00011df9) set_content_pane_vc

0x587b,	// (0x0001544a) button_value_adjust_pane_g1

0x5884,	// (0x00015453) button_value_adjust_pane_g2

0x0001,

0xfa5a,	// (0x0001f629) button_value_adjust_pane_g

0x588d,	// (0x0001545c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x588d,	// (0x0001545c) form_field_slider_wide_pane_vc_t1

0x58a3,	// (0x00015472) form_field_slider_wide_pane_vc_t2_ParamLimits

0x58a3,	// (0x00015472) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5f,	// (0x0001f62e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001f62e) form_field_slider_wide_pane_vc_t

0x189e,	// (0x0001146d) input_focus_pane_cp10_vc_ParamLimits

0x189e,	// (0x0001146d) input_focus_pane_cp10_vc

0x58ce,	// (0x0001549d) slider_cont_pane_cp1_vc_ParamLimits

0x58ce,	// (0x0001549d) slider_cont_pane_cp1_vc

0x54e2,	// (0x000150b1) slider_form_pane_g1_cp2

0x54eb,	// (0x000150ba) slider_form_pane_g2_cp2

0x58e9,	// (0x000154b8) form_field_slider_pane_vc_t3

0x58f7,	// (0x000154c6) form_field_slider_pane_vc_t4

0x5905,	// (0x000154d4) slider_form_pane_vc_ParamLimits

0x5905,	// (0x000154d4) slider_form_pane_vc

0x5912,	// (0x000154e1) form_field_slider_pane_vc_t1_ParamLimits

0x5912,	// (0x000154e1) form_field_slider_pane_vc_t1

0x5928,	// (0x000154f7) form_field_slider_pane_vc_t2_ParamLimits

0x5928,	// (0x000154f7) form_field_slider_pane_vc_t2

0x0001,

0xfa71,	// (0x0001f640) form_field_slider_pane_vc_t_ParamLimits

0xfa71,	// (0x0001f640) form_field_slider_pane_vc_t

0x189e,	// (0x0001146d) input_focus_pane_cp9_vc_ParamLimits

0x189e,	// (0x0001146d) input_focus_pane_cp9_vc

0x593a,	// (0x00015509) slider_cont_pane_vc_ParamLimits

0x593a,	// (0x00015509) slider_cont_pane_vc

0x594c,	// (0x0001551b) list_form_graphic_pane_cp_vc_ParamLimits

0x594c,	// (0x0001551b) list_form_graphic_pane_cp_vc

0x3ad6,	// (0x000136a5) form_field_popup_wide_pane_vc_g1

0x5961,	// (0x00015530) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5961,	// (0x00015530) form_field_popup_wide_pane_vc_t1

0x2303,	// (0x00011ed2) input_focus_pane_cp8_vc_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_cp8_vc

0x59a0,	// (0x0001556f) list_form_wide_pane_vc_ParamLimits

0x59a0,	// (0x0001556f) list_form_wide_pane_vc

0x59ac,	// (0x0001557b) list_form_graphic_pane_vc_g1

0x59b4,	// (0x00015583) list_form_graphic_pane_vc_t1_ParamLimits

0x59b4,	// (0x00015583) list_form_graphic_pane_vc_t1

0x1604,	// (0x000111d3) list_highlight_pane_cp5_vc_ParamLimits

0x1604,	// (0x000111d3) list_highlight_pane_cp5_vc

0x59d0,	// (0x0001559f) list_form_graphic_pane_vc_ParamLimits

0x59d0,	// (0x0001559f) list_form_graphic_pane_vc

0x3ad6,	// (0x000136a5) form_field_popup_pane_vc_g1

0x59e6,	// (0x000155b5) form_field_popup_pane_vc_t1_ParamLimits

0x59e6,	// (0x000155b5) form_field_popup_pane_vc_t1

0x2303,	// (0x00011ed2) input_focus_pane_cp7_vc_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_cp7_vc

0x59fb,	// (0x000155ca) list_form_pane_vc_ParamLimits

0x59fb,	// (0x000155ca) list_form_pane_vc

0x5a07,	// (0x000155d6) data_form_pane_vc_t1_ParamLimits

0x5a07,	// (0x000155d6) data_form_pane_vc_t1

0x2426,	// (0x00011ff5) input_focus_pane_vc_g1

0x242e,	// (0x00011ffd) input_focus_pane_vc_g2

0x2436,	// (0x00012005) input_focus_pane_vc_g3

0x243e,	// (0x0001200d) input_focus_pane_vc_g4

0x2446,	// (0x00012015) input_focus_pane_vc_g5

0x244e,	// (0x0001201d) input_focus_pane_vc_g6

0x2456,	// (0x00012025) input_focus_pane_vc_g7

0x245e,	// (0x0001202d) input_focus_pane_vc_g8

0x2466,	// (0x00012035) input_focus_pane_vc_g9

0x143d,	// (0x0001100c) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0001f236) input_focus_pane_vc_g

0x3aca,	// (0x00013699) data_form_pane_vc_ParamLimits

0x3aca,	// (0x00013699) data_form_pane_vc

0x3ad6,	// (0x000136a5) form_field_data_pane_vc_g1

0x5a22,	// (0x000155f1) form_field_data_pane_vc_t1_ParamLimits

0x5a22,	// (0x000155f1) form_field_data_pane_vc_t1

0x2303,	// (0x00011ed2) input_focus_pane_vc_ParamLimits

0x2303,	// (0x00011ed2) input_focus_pane_vc

0x2233,	// (0x00011e02) button_value_adjust_pane_cp3_vc

0x5a38,	// (0x00015607) button_value_adjust_pane_cp5_vc

0x5a40,	// (0x0001560f) form_field_data_pane_vc_ParamLimits

0x5a40,	// (0x0001560f) form_field_data_pane_vc

0x225b,	// (0x00011e2a) form_field_data_pane_vc_cp2

0x5a57,	// (0x00015626) form_field_data_wide_pane_vc_ParamLimits

0x5a57,	// (0x00015626) form_field_data_wide_pane_vc

0x5a6d,	// (0x0001563c) form_field_data_wide_pane_vc_cp2

0x5a75,	// (0x00015644) form_field_popup_pane_vc_ParamLimits

0x5a75,	// (0x00015644) form_field_popup_pane_vc

0x5a8c,	// (0x0001565b) form_field_popup_wide_pane_vc_ParamLimits

0x5a8c,	// (0x0001565b) form_field_popup_wide_pane_vc

0x5aa2,	// (0x00015671) form_field_slider_pane_vc_ParamLimits

0x5aa2,	// (0x00015671) form_field_slider_pane_vc

0x5ab5,	// (0x00015684) form_field_slider_wide_pane_vc_ParamLimits

0x5ab5,	// (0x00015684) form_field_slider_wide_pane_vc

0x5ac8,	// (0x00015697) grid_touch_1_pane_ParamLimits

0x5ac8,	// (0x00015697) grid_touch_1_pane

0x5ad4,	// (0x000156a3) grid_touch_2_pane_ParamLimits

0x5ad4,	// (0x000156a3) grid_touch_2_pane

0x33b7,	// (0x00012f86) touch_pane_g1_ParamLimits

0x33b7,	// (0x00012f86) touch_pane_g1

0x5aec,	// (0x000156bb) cell_app_pane_cp_wide_ParamLimits

0x5aec,	// (0x000156bb) cell_app_pane_cp_wide

0x5afc,	// (0x000156cb) grid_popup_fast_wide_pane_ParamLimits

0x5afc,	// (0x000156cb) grid_popup_fast_wide_pane

0x5b10,	// (0x000156df) scroll_pane_cp19_ParamLimits

0x5b10,	// (0x000156df) scroll_pane_cp19

0x1524,	// (0x000110f3) bg_popup_window_pane_cp20

0x5b24,	// (0x000156f3) listscroll_popup_fast_wide_pane

0x5b2c,	// (0x000156fb) grid_indicator_nsta_pane

0x5b3e,	// (0x0001570d) clock_nsta_pane_g1

0x5b47,	// (0x00015716) clock_nsta_pane_t1

0x5b63,	// (0x00015732) cell_indicator_nsta_pane_ParamLimits

0x5b63,	// (0x00015732) cell_indicator_nsta_pane

0x5b94,	// (0x00015763) cell_indicator_nsta_pane_g1

0x5ba2,	// (0x00015771) cell_indicator_nsta_pane_g2

0x0001,

0xfa82,	// (0x0001f651) cell_indicator_nsta_pane_g

0x5bb2,	// (0x00015781) clock_nsta_pane_cp

0x5bba,	// (0x00015789) indicator_nsta_pane_cp

0x5bc3,	// (0x00015792) nsta_clock_indic_pane_g1

0x16e5,	// (0x000112b4) grid_indicator_pane

0x2a09,	// (0x000125d8) scroll_pane_cp29

0xd155,	// (0x0001cd24) indicator_nsta_pane_cp2_ParamLimits

0xd155,	// (0x0001cd24) indicator_nsta_pane_cp2

0x1604,	// (0x000111d3) main_apps_wheel_pane

0x3cb5,	// (0x00013884) form_midp_field_text_pane_ParamLimits

0x3dfa,	// (0x000139c9) scroll_bar_cp050_ParamLimits

0x5c2c,	// (0x000157fb) cell_indicator_pane_ParamLimits

0x5c2c,	// (0x000157fb) cell_indicator_pane

0x5c42,	// (0x00015811) cell_indicator_pane_g1

0x5c4c,	// (0x0001581b) grid_wheel_folder_pane_ParamLimits

0x5c4c,	// (0x0001581b) grid_wheel_folder_pane

0x5c5e,	// (0x0001582d) list_wheel_apps_pane_ParamLimits

0x5c5e,	// (0x0001582d) list_wheel_apps_pane

0x5c6d,	// (0x0001583c) main_apps_wheel_pane_g1_ParamLimits

0x5c6d,	// (0x0001583c) main_apps_wheel_pane_g1

0x5c81,	// (0x00015850) main_apps_wheel_pane_g2_ParamLimits

0x5c81,	// (0x00015850) main_apps_wheel_pane_g2

0x0001,

0xfa9e,	// (0x0001f66d) main_apps_wheel_pane_g_ParamLimits

0xfa9e,	// (0x0001f66d) main_apps_wheel_pane_g

0x5c95,	// (0x00015864) main_apps_wheel_pane_t1_ParamLimits

0x5c95,	// (0x00015864) main_apps_wheel_pane_t1

0x5cb4,	// (0x00015883) list_wheel_apps_pane_g1

0x5cbc,	// (0x0001588b) list_wheel_apps_pane_g2

0x5cc4,	// (0x00015893) list_wheel_apps_pane_g3

0x5ccc,	// (0x0001589b) list_wheel_apps_pane_g4

0x5cd4,	// (0x000158a3) list_wheel_apps_pane_g5

0x0004,

0xfaa3,	// (0x0001f672) list_wheel_apps_pane_g

0x1604,	// (0x000111d3) navi_icon_text_pane

0x3479,	// (0x00013048) aid_fill_nsta

0x5cf3,	// (0x000158c2) navi_icon_text_pane_g1

0x5cff,	// (0x000158ce) navi_icon_text_pane_t1

0x2e74,	// (0x00012a43) list_set_graphic_pane_t1_ParamLimits

0x2e74,	// (0x00012a43) list_set_graphic_pane_t1

0x4534,	// (0x00014103) popup_midp_note_alarm_window_t6_ParamLimits

0x4534,	// (0x00014103) popup_midp_note_alarm_window_t6

0x4546,	// (0x00014115) popup_midp_note_alarm_window_t7_ParamLimits

0x4546,	// (0x00014115) popup_midp_note_alarm_window_t7

0x4558,	// (0x00014127) popup_midp_note_alarm_window_t8_ParamLimits

0x4558,	// (0x00014127) popup_midp_note_alarm_window_t8

0x456a,	// (0x00014139) popup_midp_note_alarm_window_t9_ParamLimits

0x456a,	// (0x00014139) popup_midp_note_alarm_window_t9

0x457c,	// (0x0001414b) popup_midp_note_alarm_window_t10_ParamLimits

0x457c,	// (0x0001414b) popup_midp_note_alarm_window_t10

0x458e,	// (0x0001415d) popup_midp_note_alarm_window_t11_ParamLimits

0x458e,	// (0x0001415d) popup_midp_note_alarm_window_t11

0x45a0,	// (0x0001416f) scroll_pane_cp17_ParamLimits

0x45a0,	// (0x0001416f) scroll_pane_cp17

0xda11,	// (0x0001d5e0) volume_small_pane_cp_g1

0xdd49,	// (0x0001d918) volume_small_pane_cp_g2

0xdd52,	// (0x0001d921) volume_small_pane_cp_g3

0xdd5b,	// (0x0001d92a) volume_small_pane_cp_g4

0xda3e,	// (0x0001d60d) volume_small_pane_cp_g5

0xdd64,	// (0x0001d933) volume_small_pane_cp_g6

0xdd6d,	// (0x0001d93c) volume_small_pane_cp_g7

0xdd76,	// (0x0001d945) volume_small_pane_cp_g8

0xdd7f,	// (0x0001d94e) volume_small_pane_cp_g9

0xdd88,	// (0x0001d957) volume_small_pane_cp_g10

0x31d1,	// (0x00012da0) midp_ticker_pane_g1_ParamLimits

0x31dd,	// (0x00012dac) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0001f302) midp_ticker_pane_g_ParamLimits

0x31e9,	// (0x00012db8) midp_ticker_pane_t1_ParamLimits

0x3489,	// (0x00013058) aid_fill_nsta_2

0x3de6,	// (0x000139b5) list_form2_midp_pane

0x4ea6,	// (0x00014a75) midp_editing_number_pane_ParamLimits

0x4eb2,	// (0x00014a81) midp_ticker_pane_ParamLimits

0x5d11,	// (0x000158e0) form2_midp_field_pane

0x5d35,	// (0x00015904) scroll_pane_cp51

0x5d55,	// (0x00015924) form2_midp_button_pane_ParamLimits

0x5d55,	// (0x00015924) form2_midp_button_pane

0x5d67,	// (0x00015936) form2_midp_content_pane_ParamLimits

0x5d67,	// (0x00015936) form2_midp_content_pane

0x5d81,	// (0x00015950) form2_midp_field_choice_group_pane

0x5d89,	// (0x00015958) form2_midp_field_pane_g1

0x5d91,	// (0x00015960) form2_midp_field_pane_g2

0x5d99,	// (0x00015968) form2_midp_field_pane_g3

0x5da1,	// (0x00015970) form2_midp_field_pane_g4

0x0003,

0xfac8,	// (0x0001f697) form2_midp_field_pane_g

0x5da9,	// (0x00015978) form2_midp_gauge_slider_pane

0x5db1,	// (0x00015980) form2_midp_gauge_wait_pane

0x5db9,	// (0x00015988) form2_midp_image_pane_ParamLimits

0x5db9,	// (0x00015988) form2_midp_image_pane

0x5dd4,	// (0x000159a3) form2_midp_label_pane_ParamLimits

0x5dd4,	// (0x000159a3) form2_midp_label_pane

0x5ded,	// (0x000159bc) form2_midp_label_pane_cp_ParamLimits

0x5ded,	// (0x000159bc) form2_midp_label_pane_cp

0x5e0c,	// (0x000159db) form2_midp_string_pane_ParamLimits

0x5e0c,	// (0x000159db) form2_midp_string_pane

0xc813,	// (0x0001c3e2) form2_midp_text_pane_ParamLimits

0xc813,	// (0x0001c3e2) form2_midp_text_pane

0x5e37,	// (0x00015a06) form2_midp_time_pane

0x5e47,	// (0x00015a16) input_focus_pane_cp51_ParamLimits

0x5e47,	// (0x00015a16) input_focus_pane_cp51

0x5e5f,	// (0x00015a2e) form2_midp_label_pane_t1_ParamLimits

0x5e5f,	// (0x00015a2e) form2_midp_label_pane_t1

0xc82c,	// (0x0001c3fb) form2_mdip_text_pane_t1_ParamLimits

0xc82c,	// (0x0001c3fb) form2_mdip_text_pane_t1

0xc847,	// (0x0001c416) form2_midp_time_pane_t1

0x5eba,	// (0x00015a89) form2_midp_gauge_slider_pane_t1

0x5ecc,	// (0x00015a9b) form2_midp_gauge_slider_pane_t2

0x5ede,	// (0x00015aad) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad1,	// (0x0001f6a0) form2_midp_gauge_slider_pane_t

0x5ef0,	// (0x00015abf) form2_midp_slider_pane

0x5efc,	// (0x00015acb) form2_midp_gauge_wait_pane_t1

0x5f0a,	// (0x00015ad9) form2_midp_wait_pane_ParamLimits

0x5f0a,	// (0x00015ad9) form2_midp_wait_pane

0x3b14,	// (0x000136e3) list_single_2graphic_pane_cp4_ParamLimits

0x3b14,	// (0x000136e3) list_single_2graphic_pane_cp4

0x5f35,	// (0x00015b04) list_single_midp_graphic_pane_cp_ParamLimits

0x5f35,	// (0x00015b04) list_single_midp_graphic_pane_cp

0x1524,	// (0x000110f3) list_highlight_pane_cp20

0x5f53,	// (0x00015b22) list_single_2graphic_pane_g1_cp4

0x52f6,	// (0x00014ec5) list_single_2graphic_pane_g2_cp4

0x5f5b,	// (0x00015b2a) list_single_2graphic_pane_t1_cp4

0x1604,	// (0x000111d3) list_highlight_pane_cp21

0x5f6a,	// (0x00015b39) list_single_midp_graphic_pane_g4_cp

0x5f79,	// (0x00015b48) list_single_midp_graphic_pane_t1_cp

0x5f8e,	// (0x00015b5d) form2_mdip_string_pane_t1_ParamLimits

0x5f8e,	// (0x00015b5d) form2_mdip_string_pane_t1

0x1524,	// (0x000110f3) bg_wml_button_pane_cp2

0x143d,	// (0x0001100c) form2_midp_image_pane_g1

0xbe64,	// (0x0001ba33) list_double_large_graphic_pane_g5_ParamLimits

0xbe64,	// (0x0001ba33) list_double_large_graphic_pane_g5

0x3108,	// (0x00012cd7) midp_form_pane_ParamLimits

0x1604,	// (0x000111d3) main_apps_wheel_pane_ParamLimits

0xd73a,	// (0x0001d309) popup_preview_window_ParamLimits

0xd73a,	// (0x0001d309) popup_preview_window

0xd8b5,	// (0x0001d484) popup_touch_info_window_ParamLimits

0xd8b5,	// (0x0001d484) popup_touch_info_window

0xd8d3,	// (0x0001d4a2) popup_touch_menu_window_ParamLimits

0xd8d3,	// (0x0001d4a2) popup_touch_menu_window

0x1433,	// (0x00011002) bg_popup_sub_pane_cp6

0x5ff8,	// (0x00015bc7) list_touch_menu_pane

0x6000,	// (0x00015bcf) list_single_touch_menu_pane_ParamLimits

0x6000,	// (0x00015bcf) list_single_touch_menu_pane

0x6017,	// (0x00015be6) list_single_touch_menu_pane_t1

0x1604,	// (0x000111d3) bg_popup_sub_pane_cp7_ParamLimits

0x1604,	// (0x000111d3) bg_popup_sub_pane_cp7

0x6025,	// (0x00015bf4) heading_sub_pane

0x602d,	// (0x00015bfc) list_touch_info_pane_ParamLimits

0x602d,	// (0x00015bfc) list_touch_info_pane

0x603c,	// (0x00015c0b) list_single_touch_info_pane_ParamLimits

0x603c,	// (0x00015c0b) list_single_touch_info_pane

0x604d,	// (0x00015c1c) list_single_touch_info_pane_t1

0x605b,	// (0x00015c2a) list_single_touch_info_pane_t2

0x0001,

0xfadf,	// (0x0001f6ae) list_single_touch_info_pane_t

0x3100,	// (0x00012ccf) bg_popup_heading_pane_cp

0x6069,	// (0x00015c38) heading_sub_pane_t1

0x3a64,	// (0x00013633) bg_popup_preview_window_pane_cp_ParamLimits

0x3a64,	// (0x00013633) bg_popup_preview_window_pane_cp

0x6025,	// (0x00015bf4) heading_preview_pane

0x602d,	// (0x00015bfc) list_preview_pane_ParamLimits

0x602d,	// (0x00015bfc) list_preview_pane

0x6077,	// (0x00015c46) popup_preview_window_g1

0x603c,	// (0x00015c0b) list_single_preview_pane_ParamLimits

0x603c,	// (0x00015c0b) list_single_preview_pane

0x607f,	// (0x00015c4e) list_single_preview_pane_g1

0x6087,	// (0x00015c56) list_single_preview_pane_t1

0x604d,	// (0x00015c1c) list_single_preview_pane_t2

0x0001,

0xfae4,	// (0x0001f6b3) list_single_preview_pane_t

0x6095,	// (0x00015c64) bg_popup_heading_pane_cp2_ParamLimits

0x6095,	// (0x00015c64) bg_popup_heading_pane_cp2

0x60ab,	// (0x00015c7a) heading_preview_pane_g1

0x60b3,	// (0x00015c82) heading_preview_pane_t1_ParamLimits

0x60b3,	// (0x00015c82) heading_preview_pane_t1

0x1708,	// (0x000112d7) soft_indicator_pane_t1_ParamLimits

0x1d74,	// (0x00011943) scroll_pane_ParamLimits

0x290e,	// (0x000124dd) scroll_sc2_left_pane

0x2905,	// (0x000124d4) scroll_sc2_right_pane

0x292d,	// (0x000124fc) scroll_bg_pane_g1_ParamLimits

0x2942,	// (0x00012511) scroll_bg_pane_g2_ParamLimits

0x295a,	// (0x00012529) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0001f28d) scroll_bg_pane_g_ParamLimits

0x292d,	// (0x000124fc) scroll_handle_pane_g1_ParamLimits

0x297c,	// (0x0001254b) scroll_handle_pane_g2_ParamLimits

0x295a,	// (0x00012529) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0001f294) scroll_handle_pane_g_ParamLimits

0xd47f,	// (0x0001d04e) popup_choice_list_window_ParamLimits

0xd47f,	// (0x0001d04e) popup_choice_list_window

0x3874,	// (0x00013443) choice_list_pane

0x3918,	// (0x000134e7) cell_toolbar_pane_t1

0x3940,	// (0x0001350f) toolbar_button_pane_ParamLimits

0x4a1d,	// (0x000145ec) ai_gene_pane_1_t2_ParamLimits

0x4a1d,	// (0x000145ec) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0001f4b7) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0001f4b7) ai_gene_pane_1_t

0x60d0,	// (0x00015c9f) scroll_sc2_left_pane_g1

0x60d0,	// (0x00015c9f) scroll_sc2_right_pane_g1

0x344f,	// (0x0001301e) bg_popup_sub_pane_cp10

0x60da,	// (0x00015ca9) list_choice_list_pane

0x60f1,	// (0x00015cc0) list_single_choice_list_pane_ParamLimits

0x60f1,	// (0x00015cc0) list_single_choice_list_pane

0x6103,	// (0x00015cd2) list_single_choice_list_pane_g1

0x25fc,	// (0x000121cb) list_single_choice_list_pane_t1_ParamLimits

0x25fc,	// (0x000121cb) list_single_choice_list_pane_t1

0x610b,	// (0x00015cda) choice_list_pane_g1

0x6113,	// (0x00015ce2) choice_list_pane_t1

0x1433,	// (0x00011002) input_focus_pane_cp11

0x27e0,	// (0x000123af) title_pane_stacon_g2_ParamLimits

0x27e0,	// (0x000123af) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0001f273) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0001f273) title_pane_stacon_g

0x3100,	// (0x00012ccf) cursor_press_pane

0xd51b,	// (0x0001d0ea) popup_fep_hwr_window_ParamLimits

0xd51b,	// (0x0001d0ea) popup_fep_hwr_window

0xd577,	// (0x0001d146) popup_fep_vkb_window_ParamLimits

0xd577,	// (0x0001d146) popup_fep_vkb_window

0x6121,	// (0x00015cf0) cursor_press_pane_g1

0x0002,

0xfb0d,	// (0x0001f6dc) fep_vkb_side_pane_g_ParamLimits

0xddc6,	// (0x0001d995) fep_hwr_candidate_pane_ParamLimits

0xddc6,	// (0x0001d995) fep_hwr_candidate_pane

0xddee,	// (0x0001d9bd) fep_hwr_side_pane_ParamLimits

0xddee,	// (0x0001d9bd) fep_hwr_side_pane

0xde0e,	// (0x0001d9dd) fep_hwr_top_pane_ParamLimits

0xde0e,	// (0x0001d9dd) fep_hwr_top_pane

0xde26,	// (0x0001d9f5) fep_hwr_write_pane_ParamLimits

0xde26,	// (0x0001d9f5) fep_hwr_write_pane

0xfb0d,	// (0x0001f6dc) fep_vkb_side_pane_g

0x613b,	// (0x00015d0a) fep_hwr_top_pane_g1

0x6129,	// (0x00015cf8) fep_hwr_top_pane_g2

0xde52,	// (0x0001da21) fep_hwr_top_pane_g3

0x0002,

0xfae9,	// (0x0001f6b8) fep_hwr_top_pane_g

0xde67,	// (0x0001da36) fep_hwr_top_text_pane

0x2ad1,	// (0x000126a0) fep_hwr_top_text_pane_g1

0x6171,	// (0x00015d40) fep_hwr_top_text_pane_t1

0xdf55,	// (0x0001db24) fep_hwr_candidate_pane_g1

0x6381,	// (0x00015f50) fep_vkb_keypad_pane_g3_ParamLimits

0x6381,	// (0x00015f50) fep_vkb_keypad_pane_g3

0x63a3,	// (0x00015f72) fep_vkb_keypad_pane_g4_ParamLimits

0x63a3,	// (0x00015f72) fep_vkb_keypad_pane_g4

0x6412,	// (0x00015fe1) fep_vkb_bottom_pane_g2_ParamLimits

0x6412,	// (0x00015fe1) fep_vkb_bottom_pane_g2

0x0001,

0xfb14,	// (0x0001f6e3) fep_vkb_bottom_pane_g_ParamLimits

0xfb14,	// (0x0001f6e3) fep_vkb_bottom_pane_g

0x60d0,	// (0x00015c9f) cell_vkb_side_pane_g2

0x0001,

0xfb1e,	// (0x0001f6ed) cell_vkb_side_pane_g

0x649d,	// (0x0001606c) cell_vkb_side_pane_t1

0x64ab,	// (0x0001607a) cell_vkb_side_pane_t1_copy1

0x60d0,	// (0x00015c9f) bg_fep_vkb_candidate_pane_g2

0x65cf,	// (0x0001619e) cell_vkb_candidate_pane_ParamLimits

0x617f,	// (0x00015d4e) aid_size_cell_vkb_ParamLimits

0x617f,	// (0x00015d4e) aid_size_cell_vkb

0x65cf,	// (0x0001619e) cell_vkb_candidate_pane

0xdf6f,	// (0x0001db3e) bg_popup_fep_shadow_pane_g1

0x61f5,	// (0x00015dc4) fep_vkb_bottom_pane_ParamLimits

0x61f5,	// (0x00015dc4) fep_vkb_bottom_pane

0x6232,	// (0x00015e01) fep_vkb_candidate_pane_ParamLimits

0x6232,	// (0x00015e01) fep_vkb_candidate_pane

0x624e,	// (0x00015e1d) fep_vkb_keypad_pane_ParamLimits

0x624e,	// (0x00015e1d) fep_vkb_keypad_pane

0x6282,	// (0x00015e51) fep_vkb_side_pane_ParamLimits

0x6282,	// (0x00015e51) fep_vkb_side_pane

0x62ae,	// (0x00015e7d) fep_vkb_top_pane_ParamLimits

0x62ae,	// (0x00015e7d) fep_vkb_top_pane

0x62da,	// (0x00015ea9) fep_vkb_top_pane_g1_ParamLimits

0x62da,	// (0x00015ea9) fep_vkb_top_pane_g1

0x62e9,	// (0x00015eb8) fep_vkb_top_pane_g2_ParamLimits

0x62e9,	// (0x00015eb8) fep_vkb_top_pane_g2

0x62f8,	// (0x00015ec7) fep_vkb_top_pane_g3_ParamLimits

0x62f8,	// (0x00015ec7) fep_vkb_top_pane_g3

0x0003,

0xfb04,	// (0x0001f6d3) fep_vkb_top_pane_g_ParamLimits

0xfb04,	// (0x0001f6d3) fep_vkb_top_pane_g

0x6316,	// (0x00015ee5) fep_vkb_top_text_pane_ParamLimits

0x6316,	// (0x00015ee5) fep_vkb_top_text_pane

0x6327,	// (0x00015ef6) fep_vkb_side_pane_g1_ParamLimits

0x6327,	// (0x00015ef6) fep_vkb_side_pane_g1

0x6370,	// (0x00015f3f) grid_vkb_side_pane_ParamLimits

0x6370,	// (0x00015f3f) grid_vkb_side_pane

0xdf77,	// (0x0001db46) bg_popup_fep_shadow_pane_g2

0xdf80,	// (0x0001db4f) bg_popup_fep_shadow_pane_g3

0xdf88,	// (0x0001db57) bg_popup_fep_shadow_pane_g4

0xdf91,	// (0x0001db60) bg_popup_fep_shadow_pane_g5

0xdf99,	// (0x0001db68) bg_popup_fep_shadow_pane_g6

0xdfa1,	// (0x0001db70) bg_popup_fep_shadow_pane_g7

0x2446,	// (0x00012015) bg_popup_fep_shadow_pane_g8

0x63c1,	// (0x00015f90) grid_vkb_keypad_number_pane_ParamLimits

0x63c1,	// (0x00015f90) grid_vkb_keypad_number_pane

0x63d1,	// (0x00015fa0) grid_vkb_keypad_pane_ParamLimits

0x63d1,	// (0x00015fa0) grid_vkb_keypad_pane

0x63f7,	// (0x00015fc6) fep_vkb_bottom_pane_g1_ParamLimits

0x63f7,	// (0x00015fc6) fep_vkb_bottom_pane_g1

0x6420,	// (0x00015fef) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6420,	// (0x00015fef) grid_vkb_keypad_bottom_left_pane

0x6435,	// (0x00016004) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6435,	// (0x00016004) grid_vkb_keypad_bottom_right_pane

0x644a,	// (0x00016019) fep_vkb_top_text_pane_g1

0x6465,	// (0x00016034) fep_vkb_top_text_pane_t1

0x647a,	// (0x00016049) cell_vkb_side_pane_ParamLimits

0x647a,	// (0x00016049) cell_vkb_side_pane

0x60d0,	// (0x00015c9f) cell_vkb_side_pane_g1

0x64b9,	// (0x00016088) cell_vkb_keypad_pane_ParamLimits

0x64b9,	// (0x00016088) cell_vkb_keypad_pane

0x6526,	// (0x000160f5) cell_vkb_keypad_pane_g1

0x0008,

0xfb31,	// (0x0001f700) bg_popup_fep_shadow_pane_g

0x60d0,	// (0x00015c9f) cell_hwr_side_pane_g1

0x60d0,	// (0x00015c9f) cell_hwr_side_pane_g2

0x6530,	// (0x000160ff) cell_vkb_keypad_pane_t1

0x653e,	// (0x0001610d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x653e,	// (0x0001610d) cell_vkb_keypad_bottom_left_pane

0x655b,	// (0x0001612a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x655b,	// (0x0001612a) cell_vkb_keypad_bottom_right_pane

0x60d0,	// (0x00015c9f) cell_vkb_keypad_bottom_left_pane_g1

0x60d0,	// (0x00015c9f) cell_vkb_keypad_bottom_right_pane_g1

0x6594,	// (0x00016163) cell_vkb_keypad_number_pane_ParamLimits

0x6594,	// (0x00016163) cell_vkb_keypad_number_pane

0x65b3,	// (0x00016182) cell_vkb_keypad_number_pane_g1

0x65bd,	// (0x0001618c) cell_vkb_keypad_number_pane_g2

0x65c6,	// (0x00016195) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb23,	// (0x0001f6f2) cell_vkb_keypad_number_pane_g

0x6530,	// (0x000160ff) cell_vkb_keypad_number_pane_t1

0x65e8,	// (0x000161b7) fep_vkb_candidate_pane_g1

0x0001,

0xfb1e,	// (0x0001f6ed) cell_hwr_side_pane_g

0x6601,	// (0x000161d0) cell_hwr_side_pane_t1

0xdfb1,	// (0x0001db80) cell_hwr_side_pane_t1_copy1

0x6308,	// (0x00015ed7) cell_hwr_candidate_pane_g1

0xdfbf,	// (0x0001db8e) cell_hwr_candidate_pane_t1

0x60d0,	// (0x00015c9f) cell_vkb_candidate_pane_g2

0x6645,	// (0x00016214) cell_vkb_candidate_pane_t1

0xdd91,	// (0x0001d960) bg_popup_fep_shadow_pane_ParamLimits

0xdd91,	// (0x0001d960) bg_popup_fep_shadow_pane

0x9c89,	// (0x00019858) bg_fep_hwr_top_pane_g4

0x614d,	// (0x00015d1c) bg_hwr_side_pane_g1_ParamLimits

0x614d,	// (0x00015d1c) bg_hwr_side_pane_g1

0xdea3,	// (0x0001da72) cell_hwr_side_pane_ParamLimits

0xdea3,	// (0x0001da72) cell_hwr_side_pane

0xdede,	// (0x0001daad) fep_hwr_write_pane_g1_ParamLimits

0xdede,	// (0x0001daad) fep_hwr_write_pane_g1

0xdeeb,	// (0x0001daba) fep_hwr_write_pane_g2_ParamLimits

0xdeeb,	// (0x0001daba) fep_hwr_write_pane_g2

0xdef8,	// (0x0001dac7) fep_hwr_write_pane_g3_ParamLimits

0xdef8,	// (0x0001dac7) fep_hwr_write_pane_g3

0xdf06,	// (0x0001dad5) fep_hwr_write_pane_g4_ParamLimits

0xdf06,	// (0x0001dad5) fep_hwr_write_pane_g4

0x0005,

0xfaf0,	// (0x0001f6bf) fep_hwr_write_pane_g_ParamLimits

0xfaf0,	// (0x0001f6bf) fep_hwr_write_pane_g

0x9c89,	// (0x00019858) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9c89,	// (0x00019858) bg_fep_hwr_candidate_pane_g2

0xdf1b,	// (0x0001daea) cell_hwr_candidate_pane_ParamLimits

0xdf1b,	// (0x0001daea) cell_hwr_candidate_pane

0xdf55,	// (0x0001db24) fep_hwr_candidate_pane_g1_ParamLimits

0x61ad,	// (0x00015d7c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x61ad,	// (0x00015d7c) bg_popup_fep_shadow_pane_cp2

0x6308,	// (0x00015ed7) fep_vkb_top_pane_g4_ParamLimits

0x6308,	// (0x00015ed7) fep_vkb_top_pane_g4

0x634e,	// (0x00015f1d) fep_vkb_side_pane_g2_ParamLimits

0x634e,	// (0x00015f1d) fep_vkb_side_pane_g2

0xbfdc,	// (0x0001bbab) list_setting_pane_t4_ParamLimits

0xbfdc,	// (0x0001bbab) list_setting_pane_t4

0xc072,	// (0x0001bc41) list_setting_number_pane_t5_ParamLimits

0xc072,	// (0x0001bc41) list_setting_number_pane_t5

0x2b08,	// (0x000126d7) list_double_heading_pane_cp2_ParamLimits

0x2b08,	// (0x000126d7) list_double_heading_pane_cp2

0x2f6e,	// (0x00012b3d) list_double_heading_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_double_heading_pane_g1_cp2

0x6653,	// (0x00016222) list_double_heading_pane_g2_cp2_ParamLimits

0x6653,	// (0x00016222) list_double_heading_pane_g2_cp2

0x6667,	// (0x00016236) list_double_heading_pane_t1_cp2_ParamLimits

0x6667,	// (0x00016236) list_double_heading_pane_t1_cp2

0x667d,	// (0x0001624c) list_double_heading_pane_t2_cp2_ParamLimits

0x667d,	// (0x0001624c) list_double_heading_pane_t2_cp2

0x141d,	// (0x00010fec) aid_value_unit2

0xcd85,	// (0x0001c954) popup_preview_fixed_window

0x18ac,	// (0x0001147b) bg_popup_preview_window_pane_cp02

0x668f,	// (0x0001625e) list_preview_fixed_pane

0x66d5,	// (0x000162a4) list_empty_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_empty_pane_fp

0x66d5,	// (0x000162a4) list_single_cale_day_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_single_cale_day_pane_fp

0x66d5,	// (0x000162a4) list_single_graphic_heading_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_single_graphic_heading_pane_fp

0x66d5,	// (0x000162a4) list_single_graphic_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_single_graphic_pane_fp

0x66d5,	// (0x000162a4) list_single_heading_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_single_heading_pane_fp

0x66d5,	// (0x000162a4) list_single_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_single_pane_fp

0x672b,	// (0x000162fa) list_single_pane_fp_g1_ParamLimits

0x672b,	// (0x000162fa) list_single_pane_fp_g1

0xc85a,	// (0x0001c429) list_single_pane_fp_g2_ParamLimits

0xc85a,	// (0x0001c429) list_single_pane_fp_g2

0xc866,	// (0x0001c435) list_single_pane_fp_g3_ParamLimits

0xc866,	// (0x0001c435) list_single_pane_fp_g3

0x6757,	// (0x00016326) list_single_pane_fp_g4_ParamLimits

0x6757,	// (0x00016326) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0001f721) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0001f721) list_single_pane_fp_g

0xc87a,	// (0x0001c449) list_single_pane_fp_t1_ParamLimits

0xc87a,	// (0x0001c449) list_single_pane_fp_t1

0xc891,	// (0x0001c460) list_single_graphic_pane_fp_g1_ParamLimits

0xc891,	// (0x0001c460) list_single_graphic_pane_fp_g1

0x672b,	// (0x000162fa) list_single_graphic_pane_fp_g2_ParamLimits

0x672b,	// (0x000162fa) list_single_graphic_pane_fp_g2

0xc85a,	// (0x0001c429) list_single_graphic_pane_fp_g3_ParamLimits

0xc85a,	// (0x0001c429) list_single_graphic_pane_fp_g3

0xc866,	// (0x0001c435) list_single_graphic_pane_fp_g4_ParamLimits

0xc866,	// (0x0001c435) list_single_graphic_pane_fp_g4

0x6757,	// (0x00016326) list_single_graphic_pane_fp_g5_ParamLimits

0x6757,	// (0x00016326) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x0001f72a) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x0001f72a) list_single_graphic_pane_fp_g

0xc89d,	// (0x0001c46c) list_single_graphic_pane_fp_t1_ParamLimits

0xc89d,	// (0x0001c46c) list_single_graphic_pane_fp_t1

0xc891,	// (0x0001c460) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc891,	// (0x0001c460) list_single_graphic_heading_pane_fp_g1

0x672b,	// (0x000162fa) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x672b,	// (0x000162fa) list_single_graphic_heading_pane_fp_g2

0xc85a,	// (0x0001c429) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc85a,	// (0x0001c429) list_single_graphic_heading_pane_fp_g3

0xc866,	// (0x0001c435) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc866,	// (0x0001c435) list_single_graphic_heading_pane_fp_g4

0x6757,	// (0x00016326) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6757,	// (0x00016326) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0001f72a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0001f72a) list_single_graphic_heading_pane_fp_g

0xc8b3,	// (0x0001c482) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc8b3,	// (0x0001c482) list_single_graphic_heading_pane_fp_t1

0xc8c9,	// (0x0001c498) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc8c9,	// (0x0001c498) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x0001f735) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x0001f735) list_single_graphic_heading_pane_fp_t

0xc8db,	// (0x0001c4aa) list_single_cale_day_pane_fp_g1_ParamLimits

0xc8db,	// (0x0001c4aa) list_single_cale_day_pane_fp_g1

0x67fc,	// (0x000163cb) list_single_cale_day_pane_fp_g2_ParamLimits

0x67fc,	// (0x000163cb) list_single_cale_day_pane_fp_g2

0xc913,	// (0x0001c4e2) list_single_cale_day_pane_fp_g3_ParamLimits

0xc913,	// (0x0001c4e2) list_single_cale_day_pane_fp_g3

0xc93b,	// (0x0001c50a) list_single_cale_day_pane_fp_g4_ParamLimits

0xc93b,	// (0x0001c50a) list_single_cale_day_pane_fp_g4

0xc95f,	// (0x0001c52e) list_single_cale_day_pane_fp_g5_ParamLimits

0xc95f,	// (0x0001c52e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x0001f73a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x0001f73a) list_single_cale_day_pane_fp_g

0xc983,	// (0x0001c552) list_single_cale_day_pane_fp_t1_ParamLimits

0xc983,	// (0x0001c552) list_single_cale_day_pane_fp_t1

0xc9a9,	// (0x0001c578) list_single_cale_day_pane_fp_t2_ParamLimits

0xc9a9,	// (0x0001c578) list_single_cale_day_pane_fp_t2

0xc9c2,	// (0x0001c591) list_single_cale_day_pane_fp_t3_ParamLimits

0xc9c2,	// (0x0001c591) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x0001f745) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x0001f745) list_single_cale_day_pane_fp_t

0x672b,	// (0x000162fa) list_empty_pane_fp_g1_ParamLimits

0x672b,	// (0x000162fa) list_empty_pane_fp_g1

0xc9db,	// (0x0001c5aa) list_empty_pane_fp_t1

0xc9e9,	// (0x0001c5b8) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x0001f74c) list_empty_pane_fp_t

0x672b,	// (0x000162fa) list_single_heading_pane_fp_g1_ParamLimits

0x672b,	// (0x000162fa) list_single_heading_pane_fp_g1

0xc85a,	// (0x0001c429) list_single_heading_pane_fp_g2_ParamLimits

0xc85a,	// (0x0001c429) list_single_heading_pane_fp_g2

0xc866,	// (0x0001c435) list_single_heading_pane_fp_g3_ParamLimits

0xc866,	// (0x0001c435) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0001f751) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001f751) list_single_heading_pane_fp_g

0xc9f7,	// (0x0001c5c6) list_single_heading_pane_fp_t1_ParamLimits

0xc9f7,	// (0x0001c5c6) list_single_heading_pane_fp_t1

0xca09,	// (0x0001c5d8) list_single_heading_pane_fp_t2_ParamLimits

0xca09,	// (0x0001c5d8) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0001f758) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0001f758) list_single_heading_pane_fp_t

0x266a,	// (0x00012239) aid_size_cell_fast

0x1813,	// (0x000113e2) soft_indicator_pane_cp1_t1

0x26a7,	// (0x00012276) cell_app_pane_cp2_ParamLimits

0x26a7,	// (0x00012276) cell_app_pane_cp2

0xddb3,	// (0x0001d982) fep_hwr_candidate_drop_down_list_pane

0x9ca9,	// (0x00019878) fep_hwr_candidate_pane_g3_ParamLimits

0x9ca9,	// (0x00019878) fep_hwr_candidate_pane_g3

0x9cb6,	// (0x00019885) fep_hwr_candidate_pane_g4_ParamLimits

0x9cb6,	// (0x00019885) fep_hwr_candidate_pane_g4

0x0002,

0xfafd,	// (0x0001f6cc) fep_hwr_candidate_pane_g_ParamLimits

0xfafd,	// (0x0001f6cc) fep_hwr_candidate_pane_g

0x6221,	// (0x00015df0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6221,	// (0x00015df0) fep_vkb_candidate_drop_down_list_pane

0x65f0,	// (0x000161bf) fep_vkb_candidate_pane_g3

0x65f8,	// (0x000161c7) fep_vkb_candidate_pane_g4

0x0002,

0xfb2a,	// (0x0001f6f9) fep_vkb_candidate_pane_g

0x6308,	// (0x00015ed7) cell_hwr_candidate_pane_g1_ParamLimits

0x66e9,	// (0x000162b8) cell_hwr_candidate_pane_g3_ParamLimits

0x66e9,	// (0x000162b8) cell_hwr_candidate_pane_g3

0x670a,	// (0x000162d9) cell_hwr_candidate_pane_g4_ParamLimits

0x670a,	// (0x000162d9) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0001f713) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0001f713) cell_hwr_candidate_pane_g

0x660f,	// (0x000161de) cell_vkb_candidate_pane_g3_ParamLimits

0x660f,	// (0x000161de) cell_vkb_candidate_pane_g3

0x662a,	// (0x000161f9) cell_vkb_candidate_pane_g4_ParamLimits

0x662a,	// (0x000161f9) cell_vkb_candidate_pane_g4

0x6914,	// (0x000164e3) cell_app_pane_cp2_g1_ParamLimits

0x6914,	// (0x000164e3) cell_app_pane_cp2_g1

0x6932,	// (0x00016501) cell_app_pane_cp2_g2_ParamLimits

0x6932,	// (0x00016501) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x0001f75d) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x0001f75d) cell_app_pane_cp2_g

0x693e,	// (0x0001650d) cell_app_pane_cp2_t1_ParamLimits

0x693e,	// (0x0001650d) cell_app_pane_cp2_t1

0x2303,	// (0x00011ed2) grid_highlight_pane_cp1_ParamLimits

0x2303,	// (0x00011ed2) grid_highlight_pane_cp1

0xdfdc,	// (0x0001dbab) cell_hwr_candidate_pane_cp1_ParamLimits

0xdfdc,	// (0x0001dbab) cell_hwr_candidate_pane_cp1

0x6308,	// (0x00015ed7) fep_hwr_candidate_drop_down_list_pane_g1

0x6973,	// (0x00016542) fep_hwr_candidate_drop_down_list_pane_g2

0x6980,	// (0x0001654f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0001f762) fep_hwr_candidate_drop_down_list_pane_g

0xdffa,	// (0x0001dbc9) fep_hwr_candidate_drop_down_list_scroll_pane

0xe003,	// (0x0001dbd2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe003,	// (0x0001dbd2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe010,	// (0x0001dbdf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe010,	// (0x0001dbdf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe01d,	// (0x0001dbec) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe01d,	// (0x0001dbec) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x660f,	// (0x000161de) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x660f,	// (0x000161de) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x662a,	// (0x000161f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x662a,	// (0x000161f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe02a,	// (0x0001dbf9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe02a,	// (0x0001dbf9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe045,	// (0x0001dc14) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe045,	// (0x0001dc14) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe060,	// (0x0001dc2f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe060,	// (0x0001dc2f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x0001f769) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x0001f769) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6950,	// (0x0001651f) cell_vkb_candidate_pane_cp1_ParamLimits

0x6950,	// (0x0001651f) cell_vkb_candidate_pane_cp1

0x6308,	// (0x00015ed7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6308,	// (0x00015ed7) fep_vkb_candidate_drop_down_list_pane_g1

0x6973,	// (0x00016542) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6973,	// (0x00016542) fep_vkb_candidate_drop_down_list_pane_g2

0x6980,	// (0x0001654f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6980,	// (0x0001654f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0001f762) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb93,	// (0x0001f762) fep_vkb_candidate_drop_down_list_pane_g

0x698d,	// (0x0001655c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x698d,	// (0x0001655c) fep_vkb_candidate_drop_down_list_scroll_pane

0x699a,	// (0x00016569) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x699a,	// (0x00016569) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x69a7,	// (0x00016576) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69a7,	// (0x00016576) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x69b3,	// (0x00016582) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69b3,	// (0x00016582) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x66e9,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x66e9,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x670a,	// (0x000162d9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x670a,	// (0x000162d9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x69bf,	// (0x0001658e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x69bf,	// (0x0001658e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x69e0,	// (0x000165af) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x69e0,	// (0x000165af) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6a01,	// (0x000165d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a01,	// (0x000165d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbab,	// (0x0001f77a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbab,	// (0x0001f77a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x152e,	// (0x000110fd) title_pane_g1_ParamLimits

0x153b,	// (0x0001110a) title_pane_g2_ParamLimits

0xf529,	// (0x0001f0f8) title_pane_g_ParamLimits

0x2ac9,	// (0x00012698) aid_call2_pane

0x2ac1,	// (0x00012690) aid_call_pane

0x2ad1,	// (0x000126a0) popup_clock_analogue_window_g1

0x2ad1,	// (0x000126a0) popup_clock_analogue_window_g2

0xd05f,	// (0x0001cc2e) popup_clock_analogue_window_g3

0xd068,	// (0x0001cc37) popup_clock_analogue_window_g4

0x143d,	// (0x0001100c) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0001f2a2) popup_clock_analogue_window_g

0xd070,	// (0x0001cc3f) popup_clock_analogue_window_t1

0xd07e,	// (0x0001cc4d) clock_digital_number_pane_ParamLimits

0xd07e,	// (0x0001cc4d) clock_digital_number_pane

0xd08a,	// (0x0001cc59) clock_digital_number_pane_cp02_ParamLimits

0xd08a,	// (0x0001cc59) clock_digital_number_pane_cp02

0xd096,	// (0x0001cc65) clock_digital_number_pane_cp03_ParamLimits

0xd096,	// (0x0001cc65) clock_digital_number_pane_cp03

0xd0a2,	// (0x0001cc71) clock_digital_number_pane_cp04_ParamLimits

0xd0a2,	// (0x0001cc71) clock_digital_number_pane_cp04

0xd0ae,	// (0x0001cc7d) clock_digital_separator_pane_ParamLimits

0xd0ae,	// (0x0001cc7d) clock_digital_separator_pane

0xd0ba,	// (0x0001cc89) popup_clock_digital_window_t1_ParamLimits

0xd0ba,	// (0x0001cc89) popup_clock_digital_window_t1

0x143d,	// (0x0001100c) clock_digital_number_pane_g1

0x143d,	// (0x0001100c) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0001f2ad) clock_digital_number_pane_g

0x143d,	// (0x0001100c) clock_digital_separator_pane_g1

0x143d,	// (0x0001100c) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0001f2ad) clock_digital_separator_pane_g

0x3479,	// (0x00013048) aid_fill_nsta_ParamLimits

0x35a1,	// (0x00013170) indicator_nsta_pane_ParamLimits

0x3714,	// (0x000132e3) popup_clock_analogue_window

0x3714,	// (0x000132e3) popup_clock_digital_window

0x5b2c,	// (0x000156fb) grid_indicator_nsta_pane_ParamLimits

0x5b55,	// (0x00015724) clock_nsta_pane_t2

0x0001,

0xfa7d,	// (0x0001f64c) clock_nsta_pane_t

0xd023,	// (0x0001cbf2) aid_size_max_handle

0xd02d,	// (0x0001cbfc) aid_size_min_handle

0x3100,	// (0x00012ccf) editor_scroll_pane

0x6a1c,	// (0x000165eb) ex_editor_pane

0x25da,	// (0x000121a9) scroll_pane_cp13

0x1da1,	// (0x00011970) scroll_pane_cp14

0x2b00,	// (0x000126cf) scroll_pane_cp36

0x2b18,	// (0x000126e7) list_single_graphic_hl_pane_cp2_ParamLimits

0x2b18,	// (0x000126e7) list_single_graphic_hl_pane_cp2

0x4f5a,	// (0x00014b29) list_single_graphic_hl_pane_ParamLimits

0x4f5a,	// (0x00014b29) list_single_graphic_hl_pane

0xca1f,	// (0x0001c5ee) aid_size_min_hl_cp1

0x6a2d,	// (0x000165fc) list_highlight_pane_cp34_ParamLimits

0x6a2d,	// (0x000165fc) list_highlight_pane_cp34

0x6a3e,	// (0x0001660d) list_single_graphic_hl_pane_g1_ParamLimits

0x6a3e,	// (0x0001660d) list_single_graphic_hl_pane_g1

0xca28,	// (0x0001c5f7) list_single_graphic_hl_pane_g2_ParamLimits

0xca28,	// (0x0001c5f7) list_single_graphic_hl_pane_g2

0xca28,	// (0x0001c5f7) list_single_graphic_hl_pane_g3_ParamLimits

0xca28,	// (0x0001c5f7) list_single_graphic_hl_pane_g3

0xc3b7,	// (0x0001bf86) list_single_graphic_hl_pane_g4_ParamLimits

0xc3b7,	// (0x0001bf86) list_single_graphic_hl_pane_g4

0xca34,	// (0x0001c603) list_single_graphic_hl_pane_g5_ParamLimits

0xca34,	// (0x0001c603) list_single_graphic_hl_pane_g5

0x0004,

0xfbbc,	// (0x0001f78b) list_single_graphic_hl_pane_g_ParamLimits

0xfbbc,	// (0x0001f78b) list_single_graphic_hl_pane_g

0xca48,	// (0x0001c617) list_single_graphic_hl_pane_t1_ParamLimits

0xca48,	// (0x0001c617) list_single_graphic_hl_pane_t1

0x6a6d,	// (0x0001663c) aid_size_min_hl_cp2

0x6a76,	// (0x00016645) list_highlight_pane_cp34_cp2_ParamLimits

0x6a76,	// (0x00016645) list_highlight_pane_cp34_cp2

0x6a3e,	// (0x0001660d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6a3e,	// (0x0001660d) list_single_graphic_hl_pane_g1_cp2

0x6a83,	// (0x00016652) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6a83,	// (0x00016652) list_single_graphic_hl_pane_g2_cp2

0x6a8f,	// (0x0001665e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6a8f,	// (0x0001665e) list_single_graphic_hl_pane_g3_cp2

0x2f6e,	// (0x00012b3d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2f6e,	// (0x00012b3d) list_single_graphic_hl_pane_g4_cp2

0x6653,	// (0x00016222) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6653,	// (0x00016222) list_single_graphic_hl_pane_g5_cp2

0xd345,	// (0x0001cf14) control_pane_g4_ParamLimits

0xd345,	// (0x0001cf14) control_pane_g4

0x344f,	// (0x0001301e) bg_popup_sub_pane_cp10_ParamLimits

0x60da,	// (0x00015ca9) list_choice_list_pane_ParamLimits

0x60e9,	// (0x00015cb8) scroll_pane_cp23

0x18ac,	// (0x0001147b) bg_popup_preview_window_pane_cp02_ParamLimits

0x668f,	// (0x0001625e) list_preview_fixed_pane_ParamLimits

0x66a5,	// (0x00016274) list_preview_fixed_pane_cp_ParamLimits

0x66a5,	// (0x00016274) list_preview_fixed_pane_cp

0x66b1,	// (0x00016280) popup_preview_fixed_window_g1_ParamLimits

0x66b1,	// (0x00016280) popup_preview_fixed_window_g1

0x66bd,	// (0x0001628c) popup_preview_fixed_window_g2_ParamLimits

0x66bd,	// (0x0001628c) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x0001f71a) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x0001f71a) popup_preview_fixed_window_g

0xcfb3,	// (0x0001cb82) aid_navi_side_left_pane_ParamLimits

0xcfc3,	// (0x0001cb92) aid_navi_side_right_pane_ParamLimits

0xcfd2,	// (0x0001cba1) navi_icon_pane_stacon_ParamLimits

0xcfe2,	// (0x0001cbb1) navi_navi_pane_stacon_ParamLimits

0xcfd2,	// (0x0001cba1) navi_text_pane_stacon_ParamLimits

0x1433,	// (0x00011002) main_text_info_pane

0x6ab1,	// (0x00016680) listscroll_text_info_pane

0x6ab9,	// (0x00016688) list_text_info_pane_ParamLimits

0x6ab9,	// (0x00016688) list_text_info_pane

0x6ac8,	// (0x00016697) scroll_pane_cp24_ParamLimits

0x6ac8,	// (0x00016697) scroll_pane_cp24

0x6ae6,	// (0x000166b5) list_text_info_pane_t1_ParamLimits

0x6ae6,	// (0x000166b5) list_text_info_pane_t1

0xd499,	// (0x0001d068) popup_fast_swap2_window_ParamLimits

0xd499,	// (0x0001d068) popup_fast_swap2_window

0x6b03,	// (0x000166d2) aid_size_cell_fast2

0x1433,	// (0x00011002) bg_popup_window_pane_cp17

0x3e12,	// (0x000139e1) heading_pane_cp2

0x3e1a,	// (0x000139e9) listscroll_fast2_pane

0x6b0d,	// (0x000166dc) grid_fast2_pane

0x6b15,	// (0x000166e4) listscroll_fast2_pane_g1

0x6b1d,	// (0x000166ec) listscroll_fast2_pane_g2

0x0001,

0xfbc7,	// (0x0001f796) listscroll_fast2_pane_g

0x25da,	// (0x000121a9) scroll_pane_cp26

0x6b25,	// (0x000166f4) cell_fast2_pane_ParamLimits

0x6b25,	// (0x000166f4) cell_fast2_pane

0x6b3b,	// (0x0001670a) cell_fast2_pane_g1

0x6b44,	// (0x00016713) cell_fast2_pane_g2

0x6b4d,	// (0x0001671c) cell_fast2_pane_g3

0x0002,

0xfbcc,	// (0x0001f79b) cell_fast2_pane_g

0x1bfa,	// (0x000117c9) grid_highlight_pane_cp9

0x1c0f,	// (0x000117de) main_eswt_pane_ParamLimits

0x1c0f,	// (0x000117de) main_eswt_pane

0x6add,	// (0x000166ac) list_single_text_info_pane

0x6b55,	// (0x00016724) eswt_ctrl_button_pane

0x6b55,	// (0x00016724) eswt_ctrl_canvas_pane

0x6b5d,	// (0x0001672c) eswt_ctrl_combo_pane

0x6b55,	// (0x00016724) eswt_ctrl_default_pane

0x6b55,	// (0x00016724) eswt_ctrl_label_pane

0x6b65,	// (0x00016734) eswt_ctrl_wait_pane

0x6b6d,	// (0x0001673c) eswt_shell_pane

0x1433,	// (0x00011002) listscroll_eswt_app_pane

0x6b89,	// (0x00016758) popup_eswt_tasktip_window_ParamLimits

0x6b89,	// (0x00016758) popup_eswt_tasktip_window

0x3a64,	// (0x00013633) bg_popup_window_pane_cp18

0x6b9a,	// (0x00016769) eswt_control_pane_g1_ParamLimits

0x6b9a,	// (0x00016769) eswt_control_pane_g1

0x6ba7,	// (0x00016776) eswt_control_pane_g2_ParamLimits

0x6ba7,	// (0x00016776) eswt_control_pane_g2

0x6bb4,	// (0x00016783) eswt_control_pane_g3_ParamLimits

0x6bb4,	// (0x00016783) eswt_control_pane_g3

0x6bc1,	// (0x00016790) eswt_control_pane_g4_ParamLimits

0x6bc1,	// (0x00016790) eswt_control_pane_g4

0x0003,

0xfbd3,	// (0x0001f7a2) eswt_control_pane_g_ParamLimits

0xfbd3,	// (0x0001f7a2) eswt_control_pane_g

0x2303,	// (0x00011ed2) bg_button_pane_ParamLimits

0x2303,	// (0x00011ed2) bg_button_pane

0x1c0f,	// (0x000117de) common_borders_pane_copy2_ParamLimits

0x1c0f,	// (0x000117de) common_borders_pane_copy2

0x6bce,	// (0x0001679d) control_button_pane_g1_ParamLimits

0x6bce,	// (0x0001679d) control_button_pane_g1

0x6bda,	// (0x000167a9) control_button_pane_g2_ParamLimits

0x6bda,	// (0x000167a9) control_button_pane_g2

0x6be6,	// (0x000167b5) control_button_pane_g3_ParamLimits

0x6be6,	// (0x000167b5) control_button_pane_g3

0x0002,

0xfbdc,	// (0x0001f7ab) control_button_pane_g_ParamLimits

0xfbdc,	// (0x0001f7ab) control_button_pane_g

0x6bfa,	// (0x000167c9) control_button_pane_t1

0x6c08,	// (0x000167d7) control_button_pane_t2

0x0001,

0xfbe3,	// (0x0001f7b2) control_button_pane_t

0x394c,	// (0x0001351b) bg_button_pane_g1

0x395c,	// (0x0001352b) bg_button_pane_g2

0x3954,	// (0x00013523) bg_button_pane_g3

0x396c,	// (0x0001353b) bg_button_pane_g4

0x3964,	// (0x00013533) bg_button_pane_g5

0x3974,	// (0x00013543) bg_button_pane_g6

0x397c,	// (0x0001354b) bg_button_pane_g7

0x398c,	// (0x0001355b) bg_button_pane_g8

0x3984,	// (0x00013553) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0001f40b) bg_button_pane_g

0x6095,	// (0x00015c64) common_borders_pane_ParamLimits

0x6095,	// (0x00015c64) common_borders_pane

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy1_ParamLimits

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy1

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy1_ParamLimits

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy1

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy1_ParamLimits

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy1

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy1_ParamLimits

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy1

0x60d0,	// (0x00015c9f) bg_eswt_ctrl_canvas_pane_g1

0x6095,	// (0x00015c64) common_borders_pane_cp2_ParamLimits

0x6095,	// (0x00015c64) common_borders_pane_cp2

0x6095,	// (0x00015c64) common_borders_pane_cp3_ParamLimits

0x6095,	// (0x00015c64) common_borders_pane_cp3

0x6c16,	// (0x000167e5) separator_horizontal_pane

0x290e,	// (0x000124dd) separator_vertical_pane

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy2_ParamLimits

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy2

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy2_ParamLimits

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy2

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy2_ParamLimits

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy2

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy2_ParamLimits

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy2

0x1433,	// (0x00011002) common_borders_pane_cp4

0x6c1e,	// (0x000167ed) separator_horizontal_pane_g1

0x6c27,	// (0x000167f6) separator_horizontal_pane_g2

0x6c30,	// (0x000167ff) separator_horizontal_pane_g3

0x0002,

0xfbe8,	// (0x0001f7b7) separator_horizontal_pane_g

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy3_ParamLimits

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy3

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy3_ParamLimits

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy3

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy3_ParamLimits

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy3

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy3_ParamLimits

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy3

0x1433,	// (0x00011002) common_borders_pane_cp5

0x6c39,	// (0x00016808) separator_vertical_pane_g1

0x6c42,	// (0x00016811) separator_vertical_pane_g2

0x6c4b,	// (0x0001681a) separator_vertical_pane_g3

0x0002,

0xfbef,	// (0x0001f7be) separator_vertical_pane_g

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy4_ParamLimits

0x6b9a,	// (0x00016769) eswt_control_pane_g1_copy4

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy4_ParamLimits

0x6ba7,	// (0x00016776) eswt_control_pane_g2_copy4

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy4_ParamLimits

0x6bb4,	// (0x00016783) eswt_control_pane_g3_copy4

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy4_ParamLimits

0x6bc1,	// (0x00016790) eswt_control_pane_g4_copy4

0x6c54,	// (0x00016823) eswt_ctrl_combo_button_pane

0x6c5c,	// (0x0001682b) eswt_ctrl_input_pane

0x6c64,	// (0x00016833) popup_choice_list_window_cp70

0x6c6c,	// (0x0001683b) eswt_ctrl_input_pane_t1

0x1433,	// (0x00011002) input_focus_pane_cp70

0x6095,	// (0x00015c64) bg_button_pane_cp70_ParamLimits

0x6095,	// (0x00015c64) bg_button_pane_cp70

0x6c7a,	// (0x00016849) eswt_ctrl_combo_button_pane_g1

0x6c82,	// (0x00016851) wait_bar_pane_cp70

0x3a64,	// (0x00013633) bg_popup_window_pane_cp70_ParamLimits

0x3a64,	// (0x00013633) bg_popup_window_pane_cp70

0x6c8a,	// (0x00016859) popup_eswt_tasktip_window_t1

0x6ca0,	// (0x0001686f) wait_bar_pane_cp71_ParamLimits

0x6ca0,	// (0x0001686f) wait_bar_pane_cp71

0x6cac,	// (0x0001687b) grid_eswt_app_pane

0x2905,	// (0x000124d4) scroll_pane_cp70

0x6cb5,	// (0x00016884) cell_eswt_app_pane_ParamLimits

0x6cb5,	// (0x00016884) cell_eswt_app_pane

0x6cdd,	// (0x000168ac) cell_eswt_app_pane_g1_ParamLimits

0x6cdd,	// (0x000168ac) cell_eswt_app_pane_g1

0x6d0c,	// (0x000168db) cell_eswt_app_pane_g2_ParamLimits

0x6d0c,	// (0x000168db) cell_eswt_app_pane_g2

0x0001,

0xfbf6,	// (0x0001f7c5) cell_eswt_app_pane_g_ParamLimits

0xfbf6,	// (0x0001f7c5) cell_eswt_app_pane_g

0x6d35,	// (0x00016904) cell_eswt_app_pane_t1_ParamLimits

0x6d35,	// (0x00016904) cell_eswt_app_pane_t1

0x6d67,	// (0x00016936) grid_highlight_pane_cp70_ParamLimits

0x6d67,	// (0x00016936) grid_highlight_pane_cp70

0x1db5,	// (0x00011984) set_content_pane_g1

0x339b,	// (0x00012f6a) status_small_volume_pane

0xe07b,	// (0x0001dc4a) status_small_volume_pane_g1

0xe083,	// (0x0001dc52) volume_small2_pane

0xe08c,	// (0x0001dc5b) volume_small2_pane_g1

0xe095,	// (0x0001dc64) volume_small2_pane_g2

0xe09e,	// (0x0001dc6d) volume_small2_pane_g3

0xe0a7,	// (0x0001dc76) volume_small2_pane_g4

0xe0b0,	// (0x0001dc7f) volume_small2_pane_g5

0xe0b9,	// (0x0001dc88) volume_small2_pane_g6

0xe0c2,	// (0x0001dc91) volume_small2_pane_g7

0xe0cb,	// (0x0001dc9a) volume_small2_pane_g8

0xe0d4,	// (0x0001dca3) volume_small2_pane_g9

0xe0dd,	// (0x0001dcac) volume_small2_pane_g10

0x0009,

0xfbfb,	// (0x0001f7ca) volume_small2_pane_g

0x644a,	// (0x00016019) fep_vkb_top_text_pane_g1_ParamLimits

0x6465,	// (0x00016034) fep_vkb_top_text_pane_t1_ParamLimits

0x66c9,	// (0x00016298) popup_preview_fixed_window_g3_ParamLimits

0x66c9,	// (0x00016298) popup_preview_fixed_window_g3

0xd85e,	// (0x0001d42d) popup_toolbar_trans_pane

0x4d01,	// (0x000148d0) aid_height_set_list_ParamLimits

0x4d0d,	// (0x000148dc) aid_size_parent_ParamLimits

0x344f,	// (0x0001301e) list_highlight_pane_cp2_ParamLimits

0x1db5,	// (0x00011984) set_content_pane_g1_ParamLimits

0x4f6f,	// (0x00014b3e) list_single_image_pane_ParamLimits

0x4f6f,	// (0x00014b3e) list_single_image_pane

0x6d73,	// (0x00016942) aid_size_cell_image_ParamLimits

0x6d73,	// (0x00016942) aid_size_cell_image

0x6d80,	// (0x0001694f) grid_single_image_pane_ParamLimits

0x6d80,	// (0x0001694f) grid_single_image_pane

0x1db5,	// (0x00011984) list_single_image_pane_g1_ParamLimits

0x1db5,	// (0x00011984) list_single_image_pane_g1

0x2329,	// (0x00011ef8) list_single_image_pane_g2_ParamLimits

0x2329,	// (0x00011ef8) list_single_image_pane_g2

0x0001,

0xfc10,	// (0x0001f7df) list_single_image_pane_g_ParamLimits

0xfc10,	// (0x0001f7df) list_single_image_pane_g

0x4e90,	// (0x00014a5f) list_single_image_pane_t1_ParamLimits

0x4e90,	// (0x00014a5f) list_single_image_pane_t1

0x6d8c,	// (0x0001695b) cell_image_list_pane_ParamLimits

0x6d8c,	// (0x0001695b) cell_image_list_pane

0x6d9f,	// (0x0001696e) cell_image_list_pane_g1

0x6da8,	// (0x00016977) cell_image_list_pane_g2

0x0001,

0xfc15,	// (0x0001f7e4) cell_image_list_pane_g

0x6db1,	// (0x00016980) aid_size_cell_tb_trans_pane

0x2303,	// (0x00011ed2) bg_tb_trans_pane

0x6dc3,	// (0x00016992) grid_tb_trans_pane

0x394c,	// (0x0001351b) bg_tb_trans_pane_g1

0x395c,	// (0x0001352b) bg_tb_trans_pane_g2

0x3954,	// (0x00013523) bg_tb_trans_pane_g3

0x396c,	// (0x0001353b) bg_tb_trans_pane_g4

0x3964,	// (0x00013533) bg_tb_trans_pane_g5

0x398c,	// (0x0001355b) bg_tb_trans_pane_g6

0x3984,	// (0x00013553) bg_tb_trans_pane_g7

0x3974,	// (0x00013543) bg_tb_trans_pane_g8

0x397c,	// (0x0001354b) bg_tb_trans_pane_g9

0x0008,

0xfc1a,	// (0x0001f7e9) bg_tb_trans_pane_g

0x6dd7,	// (0x000169a6) cell_toolbar_trans_pane_ParamLimits

0x6dd7,	// (0x000169a6) cell_toolbar_trans_pane

0x60d0,	// (0x00015c9f) cell_toolbar_trans_pane_g1

0x5d19,	// (0x000158e8) list_form2_midp_pane_t1

0x5d27,	// (0x000158f6) list_form2_midp_pane_t2

0x0001,

0xfac3,	// (0x0001f692) list_form2_midp_pane_t

0x5d35,	// (0x00015904) scroll_pane_cp51_ParamLimits

0x5f1a,	// (0x00015ae9) form2_midp_wait_pane_g1

0x5f23,	// (0x00015af2) form2_midp_wait_pane_g2

0x5f2c,	// (0x00015afb) form2_midp_wait_pane_g3

0x0002,

0xfad8,	// (0x0001f6a7) form2_midp_wait_pane_g

0x1604,	// (0x000111d3) list_highlight_pane_cp21_ParamLimits

0x5f6a,	// (0x00015b39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5f79,	// (0x00015b48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc508,	// (0x0001c0d7) list_single_2graphic_im_pane_ParamLimits

0xc508,	// (0x0001c0d7) list_single_2graphic_im_pane

0x6dfd,	// (0x000169cc) list_single_2graphic_im_pane_g1_ParamLimits

0x6dfd,	// (0x000169cc) list_single_2graphic_im_pane_g1

0x6e0e,	// (0x000169dd) list_single_2graphic_im_pane_g2_ParamLimits

0x6e0e,	// (0x000169dd) list_single_2graphic_im_pane_g2

0x6e1a,	// (0x000169e9) list_single_2graphic_im_pane_g3_ParamLimits

0x6e1a,	// (0x000169e9) list_single_2graphic_im_pane_g3

0x0003,

0xfc2d,	// (0x0001f7fc) list_single_2graphic_im_pane_g_ParamLimits

0xfc2d,	// (0x0001f7fc) list_single_2graphic_im_pane_g

0x6e3a,	// (0x00016a09) list_single_2graphic_im_pane_t1_ParamLimits

0x6e3a,	// (0x00016a09) list_single_2graphic_im_pane_t1

0x66d5,	// (0x000162a4) list_single_graphic_2heading_pane_fp_ParamLimits

0x66d5,	// (0x000162a4) list_single_graphic_2heading_pane_fp

0xc891,	// (0x0001c460) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc891,	// (0x0001c460) list_single_graphic_2heading_pane_fp_g1

0x672b,	// (0x000162fa) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x672b,	// (0x000162fa) list_single_graphic_2heading_pane_fp_g2

0xc85a,	// (0x0001c429) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc85a,	// (0x0001c429) list_single_graphic_2heading_pane_fp_g3

0xc866,	// (0x0001c435) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc866,	// (0x0001c435) list_single_graphic_2heading_pane_fp_g4

0x6757,	// (0x00016326) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6757,	// (0x00016326) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0001f72a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0001f72a) list_single_graphic_2heading_pane_fp_g

0xca5e,	// (0x0001c62d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xca5e,	// (0x0001c62d) list_single_graphic_2heading_pane_fp_t1

0xc8c9,	// (0x0001c498) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc8c9,	// (0x0001c498) list_single_graphic_2heading_pane_fp_t2

0xca74,	// (0x0001c643) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xca74,	// (0x0001c643) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc36,	// (0x0001f805) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc36,	// (0x0001f805) list_single_graphic_2heading_pane_fp_t

0x6159,	// (0x00015d28) fep_hwr_write_pane_g5_ParamLimits

0x6159,	// (0x00015d28) fep_hwr_write_pane_g5

0x6165,	// (0x00015d34) fep_hwr_write_pane_g6_ParamLimits

0x6165,	// (0x00015d34) fep_hwr_write_pane_g6

0x6b6d,	// (0x0001673c) eswt_shell_pane_ParamLimits

0x3a64,	// (0x00013633) bg_popup_window_pane_cp18_ParamLimits

0x4c73,	// (0x00014842) heading_pane_cp70

0x6c8a,	// (0x00016859) popup_eswt_tasktip_window_t1_ParamLimits

0x34bb,	// (0x0001308a) aid_touch_tab_arrow_left

0x34c7,	// (0x00013096) aid_touch_tab_arrow_right

0x154c,	// (0x0001111b) title_pane_g3_ParamLimits

0x154c,	// (0x0001111b) title_pane_g3

0x2201,	// (0x00011dd0) set_value_pane_g1

0xd85e,	// (0x0001d42d) popup_toolbar_trans_pane_ParamLimits

0x6db1,	// (0x00016980) aid_size_cell_tb_trans_pane_ParamLimits

0x2303,	// (0x00011ed2) bg_tb_trans_pane_ParamLimits

0x6dc3,	// (0x00016992) grid_tb_trans_pane_ParamLimits

0x18ac,	// (0x0001147b) cont_note_pane_ParamLimits

0x18ac,	// (0x0001147b) cont_note_pane

0x1c0f,	// (0x000117de) cont_snote2_single_text_pane_ParamLimits

0x1c0f,	// (0x000117de) cont_snote2_single_text_pane

0x1c0f,	// (0x000117de) cont_snote2_single_graphic_pane_ParamLimits

0x1c0f,	// (0x000117de) cont_snote2_single_graphic_pane

0x4030,	// (0x00013bff) cont_note_wait_pane_ParamLimits

0x4030,	// (0x00013bff) cont_note_wait_pane

0x4030,	// (0x00013bff) cont_note_image_pane_ParamLimits

0x4030,	// (0x00013bff) cont_note_image_pane

0x6e97,	// (0x00016a66) popup_note2_window_g1_ParamLimits

0x6e97,	// (0x00016a66) popup_note2_window_g1

0x6ec8,	// (0x00016a97) popup_note2_window_t1_ParamLimits

0x6ec8,	// (0x00016a97) popup_note2_window_t1

0x6f0d,	// (0x00016adc) popup_note2_window_t2_ParamLimits

0x6f0d,	// (0x00016adc) popup_note2_window_t2

0x6f52,	// (0x00016b21) popup_note2_window_t3_ParamLimits

0x6f52,	// (0x00016b21) popup_note2_window_t3

0x6f97,	// (0x00016b66) popup_note2_window_t4_ParamLimits

0x6f97,	// (0x00016b66) popup_note2_window_t4

0x1930,	// (0x000114ff) popup_note2_window_t5_ParamLimits

0x1930,	// (0x000114ff) popup_note2_window_t5

0x0004,

0xfc42,	// (0x0001f811) popup_note2_window_t_ParamLimits

0xfc42,	// (0x0001f811) popup_note2_window_t

0x6fc6,	// (0x00016b95) popup_note2_image_window_g1_ParamLimits

0x6fc6,	// (0x00016b95) popup_note2_image_window_g1

0x6fd2,	// (0x00016ba1) popup_note2_image_window_g2_ParamLimits

0x6fd2,	// (0x00016ba1) popup_note2_image_window_g2

0x0001,

0xfc4d,	// (0x0001f81c) popup_note2_image_window_g_ParamLimits

0xfc4d,	// (0x0001f81c) popup_note2_image_window_g

0x6fe4,	// (0x00016bb3) popup_note2_image_window_t1_ParamLimits

0x6fe4,	// (0x00016bb3) popup_note2_image_window_t1

0x6ffc,	// (0x00016bcb) popup_note2_image_window_t2_ParamLimits

0x6ffc,	// (0x00016bcb) popup_note2_image_window_t2

0x7014,	// (0x00016be3) popup_note2_image_window_t3_ParamLimits

0x7014,	// (0x00016be3) popup_note2_image_window_t3

0x0002,

0xfc52,	// (0x0001f821) popup_note2_image_window_t_ParamLimits

0xfc52,	// (0x0001f821) popup_note2_image_window_t

0x403e,	// (0x00013c0d) popup_note2_wait_window_g1_ParamLimits

0x403e,	// (0x00013c0d) popup_note2_wait_window_g1

0x404a,	// (0x00013c19) popup_note2_wait_window_g2_ParamLimits

0x404a,	// (0x00013c19) popup_note2_wait_window_g2

0x4056,	// (0x00013c25) popup_note2_wait_window_g3_ParamLimits

0x4056,	// (0x00013c25) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x0001f3ed) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x0001f3ed) popup_note2_wait_window_g

0x7030,	// (0x00016bff) popup_note2_wait_window_t1_ParamLimits

0x7030,	// (0x00016bff) popup_note2_wait_window_t1

0x704e,	// (0x00016c1d) popup_note2_wait_window_t2_ParamLimits

0x704e,	// (0x00016c1d) popup_note2_wait_window_t2

0x706c,	// (0x00016c3b) popup_note2_wait_window_t3_ParamLimits

0x706c,	// (0x00016c3b) popup_note2_wait_window_t3

0x707e,	// (0x00016c4d) popup_note2_wait_window_t4_ParamLimits

0x707e,	// (0x00016c4d) popup_note2_wait_window_t4

0x0003,

0xfc59,	// (0x0001f828) popup_note2_wait_window_t_ParamLimits

0xfc59,	// (0x0001f828) popup_note2_wait_window_t

0x7090,	// (0x00016c5f) wait_bar2_pane_ParamLimits

0x7090,	// (0x00016c5f) wait_bar2_pane

0x70a8,	// (0x00016c77) popup_snote2_single_text_window_g1_ParamLimits

0x70a8,	// (0x00016c77) popup_snote2_single_text_window_g1

0x70d0,	// (0x00016c9f) popup_snote2_single_text_window_t1_ParamLimits

0x70d0,	// (0x00016c9f) popup_snote2_single_text_window_t1

0x711c,	// (0x00016ceb) popup_snote2_single_text_window_t2_ParamLimits

0x711c,	// (0x00016ceb) popup_snote2_single_text_window_t2

0x7168,	// (0x00016d37) popup_snote2_single_text_window_t3_ParamLimits

0x7168,	// (0x00016d37) popup_snote2_single_text_window_t3

0x71a9,	// (0x00016d78) popup_snote2_single_text_window_t4_ParamLimits

0x71a9,	// (0x00016d78) popup_snote2_single_text_window_t4

0x71df,	// (0x00016dae) popup_snote2_single_text_window_t5_ParamLimits

0x71df,	// (0x00016dae) popup_snote2_single_text_window_t5

0x0004,

0xfc62,	// (0x0001f831) popup_snote2_single_text_window_t_ParamLimits

0xfc62,	// (0x0001f831) popup_snote2_single_text_window_t

0x720a,	// (0x00016dd9) popup_snote2_single_graphic_window_g1_ParamLimits

0x720a,	// (0x00016dd9) popup_snote2_single_graphic_window_g1

0x7232,	// (0x00016e01) popup_snote2_single_graphic_window_g2_ParamLimits

0x7232,	// (0x00016e01) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6d,	// (0x0001f83c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6d,	// (0x0001f83c) popup_snote2_single_graphic_window_g

0x725a,	// (0x00016e29) popup_snote2_single_graphic_window_t1_ParamLimits

0x725a,	// (0x00016e29) popup_snote2_single_graphic_window_t1

0x72a6,	// (0x00016e75) popup_snote2_single_graphic_window_t2_ParamLimits

0x72a6,	// (0x00016e75) popup_snote2_single_graphic_window_t2

0x7168,	// (0x00016d37) popup_snote2_single_graphic_window_t3_ParamLimits

0x7168,	// (0x00016d37) popup_snote2_single_graphic_window_t3

0x71a9,	// (0x00016d78) popup_snote2_single_graphic_window_t4_ParamLimits

0x71a9,	// (0x00016d78) popup_snote2_single_graphic_window_t4

0x71df,	// (0x00016dae) popup_snote2_single_graphic_window_t5_ParamLimits

0x71df,	// (0x00016dae) popup_snote2_single_graphic_window_t5

0x0004,

0xfc72,	// (0x0001f841) popup_snote2_single_graphic_window_t_ParamLimits

0xfc72,	// (0x0001f841) popup_snote2_single_graphic_window_t

0x5c0b,	// (0x000157da) clock_nsta_pane_cp2_t1

0x5c0b,	// (0x000157da) clock_nsta_pane_cp2_t2

0x0001,

0xfa99,	// (0x0001f668) clock_nsta_pane_cp2_t

0xc14f,	// (0x0001bd1e) form_field_data_wide_pane_g1_ParamLimits

0x1db5,	// (0x00011984) form_field_data_wide_pane_g2_ParamLimits

0x1db5,	// (0x00011984) form_field_data_wide_pane_g2

0x2329,	// (0x00011ef8) form_field_data_wide_pane_g3_ParamLimits

0x2329,	// (0x00011ef8) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0001f225) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0001f225) form_field_data_wide_pane_g

0x5ae0,	// (0x000156af) grid_touch_3_pane_ParamLimits

0x5ae0,	// (0x000156af) grid_touch_3_pane

0x72f2,	// (0x00016ec1) cell_touch_3_pane_ParamLimits

0x72f2,	// (0x00016ec1) cell_touch_3_pane

0x60d0,	// (0x00015c9f) cell_touch_3_pane_g1

0x60d0,	// (0x00015c9f) cell_touch_3_pane_g2

0x0001,

0xfb1e,	// (0x0001f6ed) cell_touch_3_pane_g

0x1988,	// (0x00011557) cont_query_data_pane

0x1990,	// (0x0001155f) cont_query_data_pane_cp1

0x731f,	// (0x00016eee) button_value_adjust_pane_cp7

0x7327,	// (0x00016ef6) query_popup_pane_cp3

0x2bbe,	// (0x0001278d) bg_popup_sub_pane_cp22_ParamLimits

0xd0d9,	// (0x0001cca8) navi_navi_volume_pane_cp2

0xd0f1,	// (0x0001ccc0) popup_side_volume_key_window_g2

0xd0fd,	// (0x0001cccc) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0001f2bb) popup_side_volume_key_window_g

0xd117,	// (0x0001cce6) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0001f2c2) popup_side_volume_key_window_t

0x2ef1,	// (0x00012ac0) popup_side_volume_key_window_ParamLimits

0xbdb3,	// (0x0001b982) list_double_graphic_pane_g4_ParamLimits

0xbdb3,	// (0x0001b982) list_double_graphic_pane_g4

0x4f43,	// (0x00014b12) list_single_2heading_msg_pane_ParamLimits

0x4f43,	// (0x00014b12) list_single_2heading_msg_pane

0xca92,	// (0x0001c661) list_single_2heading_msg_pane_g1_ParamLimits

0xca92,	// (0x0001c661) list_single_2heading_msg_pane_g1

0xbbfe,	// (0x0001b7cd) list_single_2heading_msg_pane_g2_ParamLimits

0xbbfe,	// (0x0001b7cd) list_single_2heading_msg_pane_g2

0xc600,	// (0x0001c1cf) list_single_2heading_msg_pane_g3_ParamLimits

0xc600,	// (0x0001c1cf) list_single_2heading_msg_pane_g3

0xca9e,	// (0x0001c66d) list_single_2heading_msg_pane_g4_ParamLimits

0xca9e,	// (0x0001c66d) list_single_2heading_msg_pane_g4

0x0003,

0xfc7d,	// (0x0001f84c) list_single_2heading_msg_pane_g_ParamLimits

0xfc7d,	// (0x0001f84c) list_single_2heading_msg_pane_g

0xcab6,	// (0x0001c685) list_single_2heading_msg_pane_t1_ParamLimits

0xcab6,	// (0x0001c685) list_single_2heading_msg_pane_t1

0xcade,	// (0x0001c6ad) list_single_2heading_msg_pane_t2_ParamLimits

0xcade,	// (0x0001c6ad) list_single_2heading_msg_pane_t2

0xcb12,	// (0x0001c6e1) list_single_2heading_msg_pane_t3_ParamLimits

0xcb12,	// (0x0001c6e1) list_single_2heading_msg_pane_t3

0xcb4b,	// (0x0001c71a) list_single_2heading_msg_pane_t4_ParamLimits

0xcb4b,	// (0x0001c71a) list_single_2heading_msg_pane_t4

0x0003,

0xfc86,	// (0x0001f855) list_single_2heading_msg_pane_t_ParamLimits

0xfc86,	// (0x0001f855) list_single_2heading_msg_pane_t

0x1558,	// (0x00011127) title_pane_g4_ParamLimits

0x1558,	// (0x00011127) title_pane_g4

0xcf29,	// (0x0001caf8) title_pane_stacon_g3_ParamLimits

0xcf29,	// (0x0001caf8) title_pane_stacon_g3

0x6e2e,	// (0x000169fd) list_single_2graphic_im_pane_g4_ParamLimits

0x6e2e,	// (0x000169fd) list_single_2graphic_im_pane_g4

0x4a3a,	// (0x00014609) popup_side_volume_key_window_cp

0x520b,	// (0x00014dda) main_idle_act2_pane_t1

0xd929,	// (0x0001d4f8) toolbar_button_pane_g10

0x1d6c,	// (0x0001193b) popup_toolbar_window_cp1

0x5bfc,	// (0x000157cb) clock_nsta_pane_cp_t1

0x5bfc,	// (0x000157cb) clock_nsta_pane_cp_t2

0x0001,

0xfa94,	// (0x0001f663) clock_nsta_pane_cp_t

0xd0d9,	// (0x0001cca8) navi_navi_volume_pane_cp2_ParamLimits

0xd0e5,	// (0x0001ccb4) popup_side_volume_key_window_g1_ParamLimits

0xd0f1,	// (0x0001ccc0) popup_side_volume_key_window_g2_ParamLimits

0xd0fd,	// (0x0001cccc) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0001f2bb) popup_side_volume_key_window_g_ParamLimits

0xdd9f,	// (0x0001d96e) fep_hwr_aid_pane

0x9c89,	// (0x00019858) bg_fep_hwr_top_pane_g4_ParamLimits

0x613b,	// (0x00015d0a) fep_hwr_top_pane_g1_ParamLimits

0x6129,	// (0x00015cf8) fep_hwr_top_pane_g2_ParamLimits

0xde52,	// (0x0001da21) fep_hwr_top_pane_g3_ParamLimits

0xfae9,	// (0x0001f6b8) fep_hwr_top_pane_g_ParamLimits

0xde67,	// (0x0001da36) fep_hwr_top_text_pane_ParamLimits

0x480e,	// (0x000143dd) aid_touch_tab_arrow_arrow_2

0x4805,	// (0x000143d4) aid_touch_tab_arrow_left_2

0xddb3,	// (0x0001d982) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xdde6,	// (0x0001d9b5) fep_hwr_prediction_pane

0x627a,	// (0x00015e49) fep_vkb_prediction_pane

0x635c,	// (0x00015f2b) fep_vkb_side_pane_g3_ParamLimits

0x635c,	// (0x00015f2b) fep_vkb_side_pane_g3

0x6308,	// (0x00015ed7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6973,	// (0x00016542) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6980,	// (0x0001654f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0001f762) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7445,	// (0x00017014) fep_hwr_prediction_pane_g1

0xe0e6,	// (0x0001dcb5) fep_hwr_prediction_pane_g2

0xe0ee,	// (0x0001dcbd) fep_hwr_prediction_pane_g3

0xe0f6,	// (0x0001dcc5) fep_hwr_prediction_pane_g4

0x0003,

0xfc8f,	// (0x0001f85e) fep_hwr_prediction_pane_g

0x7445,	// (0x00017014) fep_vkb_prediction_pane_g1

0x744f,	// (0x0001701e) fep_vkb_prediction_pane_g2

0x7457,	// (0x00017026) fep_vkb_prediction_pane_g3

0x745f,	// (0x0001702e) fep_vkb_prediction_pane_g4

0x0003,

0xfc98,	// (0x0001f867) fep_vkb_prediction_pane_g

0xdbd7,	// (0x0001d7a6) slider_set_pane_g3

0xdbeb,	// (0x0001d7ba) slider_set_pane_g4

0xdc03,	// (0x0001d7d2) slider_set_pane_g5

0xdbd7,	// (0x0001d7a6) slider_set_pane_g6

0xdc19,	// (0x0001d7e8) slider_set_pane_g7

0x4e54,	// (0x00014a23) slider_form_pane_g3

0x4e5d,	// (0x00014a2c) slider_form_pane_g4

0x4e65,	// (0x00014a34) slider_form_pane_g5

0x4e54,	// (0x00014a23) slider_form_pane_g6

0x4e6d,	// (0x00014a3c) slider_form_pane_g7

0x54f3,	// (0x000150c2) slider_set_pane_vc_g3

0x54fc,	// (0x000150cb) slider_set_pane_vc_g4

0x5505,	// (0x000150d4) slider_set_pane_vc_g5

0x54f3,	// (0x000150c2) slider_set_pane_vc_g6

0x550e,	// (0x000150dd) slider_set_pane_vc_g7

0x54f3,	// (0x000150c2) slider_form_pane_vc_g1

0x54fc,	// (0x000150cb) slider_form_pane_vc_g2

0x5505,	// (0x000150d4) slider_form_pane_vc_g3

0x54f3,	// (0x000150c2) slider_form_pane_vc_g4

0x58e0,	// (0x000154af) slider_form_pane_vc_g5

0x0004,

0xfa66,	// (0x0001f635) slider_form_pane_vc_g

0x1433,	// (0x00011002) main_idle_act3_pane

0x7467,	// (0x00017036) ai3_links_pane

0x7470,	// (0x0001703f) popup_ai3_data_window_ParamLimits

0x7470,	// (0x0001703f) popup_ai3_data_window

0x1433,	// (0x00011002) grid_ai3_links_pane

0x7488,	// (0x00017057) cell_ai3_links_pane_ParamLimits

0x7488,	// (0x00017057) cell_ai3_links_pane

0x749c,	// (0x0001706b) bg_popup_sub_pane_cp11

0x74a9,	// (0x00017078) cell_ai3_links_pane_g1

0x1433,	// (0x00011002) bg_popup_sub_pane_cp12

0x74ce,	// (0x0001709d) heading_ai3_data_pane

0x74d6,	// (0x000170a5) list_ai3_gene_pane

0x74e2,	// (0x000170b1) popup_ai3_data_window_g1

0x74ea,	// (0x000170b9) heading_ai3_data_pane_g1

0x74f2,	// (0x000170c1) heading_ai3_data_pane_t1

0x7500,	// (0x000170cf) list_double_ai3_gene_pane_ParamLimits

0x7500,	// (0x000170cf) list_double_ai3_gene_pane

0x750d,	// (0x000170dc) list_single_ai3_gene_pane_ParamLimits

0x750d,	// (0x000170dc) list_single_ai3_gene_pane

0x6095,	// (0x00015c64) list_highlight_pane_cp7_ParamLimits

0x6095,	// (0x00015c64) list_highlight_pane_cp7

0x751a,	// (0x000170e9) list_single_a13_gene_pane_t1_ParamLimits

0x751a,	// (0x000170e9) list_single_a13_gene_pane_t1

0x7531,	// (0x00017100) list_single_ai3_gene_pane_g1

0x753a,	// (0x00017109) list_single_ai3_gene_pane_g2

0x0001,

0xfca1,	// (0x0001f870) list_single_ai3_gene_pane_g

0x7542,	// (0x00017111) list_double_ai3_gene_pane_g1_ParamLimits

0x7542,	// (0x00017111) list_double_ai3_gene_pane_g1

0x754e,	// (0x0001711d) list_double_ai3_gene_pane_t1_ParamLimits

0x754e,	// (0x0001711d) list_double_ai3_gene_pane_t1

0x756a,	// (0x00017139) list_double_ai3_gene_pane_t2_ParamLimits

0x756a,	// (0x00017139) list_double_ai3_gene_pane_t2

0x757f,	// (0x0001714e) list_double_ai3_gene_pane_t3_ParamLimits

0x757f,	// (0x0001714e) list_double_ai3_gene_pane_t3

0x0002,

0xfca6,	// (0x0001f875) list_double_ai3_gene_pane_t_ParamLimits

0xfca6,	// (0x0001f875) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xca8a,	// (0x0001c659) aid_size_min_col_2

0x7340,	// (0x00016f0f) aid_size_min_msg_ParamLimits

0x7340,	// (0x00016f0f) aid_size_min_msg

0x6456,	// (0x00016025) fep_vkb_top_text_pane_g2_ParamLimits

0x6456,	// (0x00016025) fep_vkb_top_text_pane_g2

0x0001,

0xfb19,	// (0x0001f6e8) fep_vkb_top_text_pane_g_ParamLimits

0xfb19,	// (0x0001f6e8) fep_vkb_top_text_pane_g

0x1433,	// (0x00011002) main_hc_apps_shell_pane

0x759c,	// (0x0001716b) grid_hc_apps_pane_ParamLimits

0x759c,	// (0x0001716b) grid_hc_apps_pane

0x75ae,	// (0x0001717d) list_hc_apps_pane

0x75b6,	// (0x00017185) scroll_pane_cp37_ParamLimits

0x75b6,	// (0x00017185) scroll_pane_cp37

0x75c2,	// (0x00017191) cell_hc_apps_pane_ParamLimits

0x75c2,	// (0x00017191) cell_hc_apps_pane

0x7650,	// (0x0001721f) cell_hc_apps_pane_g1_ParamLimits

0x7650,	// (0x0001721f) cell_hc_apps_pane_g1

0x767c,	// (0x0001724b) cell_hc_apps_pane_g2_ParamLimits

0x767c,	// (0x0001724b) cell_hc_apps_pane_g2

0x7698,	// (0x00017267) cell_hc_apps_pane_g3_ParamLimits

0x7698,	// (0x00017267) cell_hc_apps_pane_g3

0x0002,

0xfcad,	// (0x0001f87c) cell_hc_apps_pane_g_ParamLimits

0xfcad,	// (0x0001f87c) cell_hc_apps_pane_g

0x76ba,	// (0x00017289) cell_hc_apps_pane_t1_ParamLimits

0x76ba,	// (0x00017289) cell_hc_apps_pane_t1

0x18ac,	// (0x0001147b) grid_highlight_pane_cp10_ParamLimits

0x18ac,	// (0x0001147b) grid_highlight_pane_cp10

0x76f8,	// (0x000172c7) list_single_hc_apps_pane_ParamLimits

0x76f8,	// (0x000172c7) list_single_hc_apps_pane

0x7728,	// (0x000172f7) list_single_hc_apps_pane_g1

0xcb70,	// (0x0001c73f) list_single_hc_apps_pane_g2

0x0001,

0xfcb4,	// (0x0001f883) list_single_hc_apps_pane_g

0xcb89,	// (0x0001c758) list_single_hc_apps_pane_g2_copy1

0xcba5,	// (0x0001c774) list_single_hc_apps_pane_t1

0x1604,	// (0x000111d3) bg_set_opt_pane_cp_ParamLimits

0xce77,	// (0x0001ca46) setting_slider_pane_t1_ParamLimits

0xce8d,	// (0x0001ca5c) setting_slider_pane_t2_ParamLimits

0xcea6,	// (0x0001ca75) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001f108) setting_slider_pane_t_ParamLimits

0xcebd,	// (0x0001ca8c) slider_set_pane_ParamLimits

0xd359,	// (0x0001cf28) control_pane_g5_ParamLimits

0xd359,	// (0x0001cf28) control_pane_g5

0x4ccc,	// (0x0001489b) slider_set_pane_g1_ParamLimits

0xdbcb,	// (0x0001d79a) slider_set_pane_g2_ParamLimits

0xdbd7,	// (0x0001d7a6) slider_set_pane_g3_ParamLimits

0xdbeb,	// (0x0001d7ba) slider_set_pane_g4_ParamLimits

0xdc03,	// (0x0001d7d2) slider_set_pane_g5_ParamLimits

0xdbd7,	// (0x0001d7a6) slider_set_pane_g6_ParamLimits

0xdc19,	// (0x0001d7e8) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0001f509) slider_set_pane_g_ParamLimits

0x1604,	// (0x000111d3) navi_icon_text_pane_ParamLimits

0x3489,	// (0x00013058) aid_fill_nsta_2_ParamLimits

0x34bb,	// (0x0001308a) aid_touch_tab_arrow_left_ParamLimits

0x34c7,	// (0x00013096) aid_touch_tab_arrow_right_ParamLimits

0x3531,	// (0x00013100) clock_nsta_pane_ParamLimits

0x47e7,	// (0x000143b6) navi_icon_pane_g1_ParamLimits

0x47f3,	// (0x000143c2) navi_text_pane_t1_ParamLimits

0x5cf3,	// (0x000158c2) navi_icon_text_pane_g1_ParamLimits

0x5cff,	// (0x000158ce) navi_icon_text_pane_t1_ParamLimits

0x7728,	// (0x000172f7) list_single_hc_apps_pane_g1_ParamLimits

0xcb70,	// (0x0001c73f) list_single_hc_apps_pane_g2_ParamLimits

0xfcb4,	// (0x0001f883) list_single_hc_apps_pane_g_ParamLimits

0xcb89,	// (0x0001c758) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcba5,	// (0x0001c774) list_single_hc_apps_pane_t1_ParamLimits

0xcda9,	// (0x0001c978) popup_toolbar2_fixed_window_ParamLimits

0xcda9,	// (0x0001c978) popup_toolbar2_fixed_window

0xd856,	// (0x0001d425) popup_toolbar2_float_window

0x1433,	// (0x00011002) bg_popup_sub_pane_cp27

0x77a4,	// (0x00017373) grid_toolbar2_float_pane

0x1433,	// (0x00011002) bg_popup_sub_pane_cp26

0x77a4,	// (0x00017373) grid_toolbar2_fixed_pane

0x77ac,	// (0x0001737b) cell_toolbar2_fixed_pane_ParamLimits

0x77ac,	// (0x0001737b) cell_toolbar2_fixed_pane

0x77bd,	// (0x0001738c) cell_toolbar2_fixed_pane_g1

0x77c6,	// (0x00017395) toolbar2_fixed_button_pane

0x394c,	// (0x0001351b) toolbar2_fixed_button_pane_g1

0x395c,	// (0x0001352b) toolbar2_fixed_button_pane_g2

0x3954,	// (0x00013523) toolbar2_fixed_button_pane_g3

0x396c,	// (0x0001353b) toolbar2_fixed_button_pane_g4

0x3964,	// (0x00013533) toolbar2_fixed_button_pane_g5

0x3974,	// (0x00013543) toolbar2_fixed_button_pane_g6

0x397c,	// (0x0001354b) toolbar2_fixed_button_pane_g7

0x398c,	// (0x0001355b) toolbar2_fixed_button_pane_g8

0x3984,	// (0x00013553) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0001f40b) toolbar2_fixed_button_pane_g

0x77ce,	// (0x0001739d) cell_toolbar2_float_pane_ParamLimits

0x77ce,	// (0x0001739d) cell_toolbar2_float_pane

0x77df,	// (0x000173ae) cell_toolbar2_float_pane_g1

0x77c6,	// (0x00017395) toolbar2_fixed_button_pane_cp

0x61e9,	// (0x00015db8) fep_vkb_accented_list_pane_ParamLimits

0x61e9,	// (0x00015db8) fep_vkb_accented_list_pane

0xdfa9,	// (0x0001db78) bg_popup_fep_shadow_pane_g9

0x3100,	// (0x00012ccf) bg_popup_fep_shadow_pane_cp3

0x25c1,	// (0x00012190) list_accented_list_pane

0x77e8,	// (0x000173b7) list_single_accented_list_pane_ParamLimits

0x77e8,	// (0x000173b7) list_single_accented_list_pane

0x3100,	// (0x00012ccf) list_highlight_pane_cp10

0x77f9,	// (0x000173c8) list_single_accented_list_pane_t1

0xd7bc,	// (0x0001d38b) popup_slider_window_ParamLimits

0xd7bc,	// (0x0001d38b) popup_slider_window

0x732f,	// (0x00016efe) aid_indentation_list_msg

0x7899,	// (0x00017468) bg_popup_window_pane_cp19

0x78fd,	// (0x000174cc) popup_slider_window_g1

0x7919,	// (0x000174e8) popup_slider_window_g2

0x7935,	// (0x00017504) popup_slider_window_g3

0x0005,

0xfcb9,	// (0x0001f888) popup_slider_window_g

0x7991,	// (0x00017560) popup_slider_window_t1

0x7a03,	// (0x000175d2) small_volume_slider_vertical_pane

0x60d0,	// (0x00015c9f) small_volume_slider_vertical_pane_g1

0x60d0,	// (0x00015c9f) small_volume_slider_vertical_pane_g2

0x7a1f,	// (0x000175ee) small_volume_slider_vertical_pane_g3

0x0002,

0xfccb,	// (0x0001f89a) small_volume_slider_vertical_pane_g

0xcc27,	// (0x0001c7f6) area_side_right_pane_ParamLimits

0xcc27,	// (0x0001c7f6) area_side_right_pane

0xe0fe,	// (0x0001dccd) aid_size_side_button_ParamLimits

0xe0fe,	// (0x0001dccd) aid_size_side_button

0xe112,	// (0x0001dce1) grid_sctrl_middle_pane_ParamLimits

0xe112,	// (0x0001dce1) grid_sctrl_middle_pane

0xe12e,	// (0x0001dcfd) sctrl_sk_bottom_pane

0xe13f,	// (0x0001dd0e) sctrl_sk_top_pane

0xe151,	// (0x0001dd20) aid_touch_sctrl_top

0x18ac,	// (0x0001147b) bg_sctrl_sk_pane_ParamLimits

0x18ac,	// (0x0001147b) bg_sctrl_sk_pane

0xe15e,	// (0x0001dd2d) sctrl_sk_top_pane_g1

0xe16b,	// (0x0001dd3a) sctrl_sk_top_pane_t1

0xe151,	// (0x0001dd20) aid_touch_sctrl_bottom

0x18ac,	// (0x0001147b) bg_sctrl_sk_pane_cp_ParamLimits

0x18ac,	// (0x0001147b) bg_sctrl_sk_pane_cp

0xe186,	// (0x0001dd55) sctrl_sk_bottom_pane_g1

0xe16b,	// (0x0001dd3a) sctrl_sk_bottom_pane_t1

0xe18f,	// (0x0001dd5e) cell_sctrl_middle_pane_ParamLimits

0xe18f,	// (0x0001dd5e) cell_sctrl_middle_pane

0xe1aa,	// (0x0001dd79) aid_touch_sctrl_middle_ParamLimits

0xe1aa,	// (0x0001dd79) aid_touch_sctrl_middle

0x2303,	// (0x00011ed2) bg_sctrl_middle_pane_ParamLimits

0x2303,	// (0x00011ed2) bg_sctrl_middle_pane

0x6308,	// (0x00015ed7) cell_sctrl_middle_pane_g1_ParamLimits

0x6308,	// (0x00015ed7) cell_sctrl_middle_pane_g1

0xe1bb,	// (0x0001dd8a) cell_sctrl_middle_pane_g2_ParamLimits

0xe1bb,	// (0x0001dd8a) cell_sctrl_middle_pane_g2

0x0001,

0xfcd7,	// (0x0001f8a6) cell_sctrl_middle_pane_g_ParamLimits

0xfcd7,	// (0x0001f8a6) cell_sctrl_middle_pane_g

0x394c,	// (0x0001351b) bg_sctrl_middle_pane_g1

0x395c,	// (0x0001352b) bg_sctrl_middle_pane_g2

0x3954,	// (0x00013523) bg_sctrl_middle_pane_g3

0x396c,	// (0x0001353b) bg_sctrl_middle_pane_g4

0x3964,	// (0x00013533) bg_sctrl_middle_pane_g5

0x3974,	// (0x00013543) bg_sctrl_middle_pane_g6

0x397c,	// (0x0001354b) bg_sctrl_middle_pane_g7

0x398c,	// (0x0001355b) bg_sctrl_middle_pane_g8

0x0007,

0xfcdc,	// (0x0001f8ab) bg_sctrl_middle_pane_g

0x3984,	// (0x00013553) bg_sctrl_middle_pane_g8_copy1

0x394c,	// (0x0001351b) bg_sctrl_sk_pane_g1

0x395c,	// (0x0001352b) bg_sctrl_sk_pane_g2

0x3954,	// (0x00013523) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0001f40b) bg_sctrl_sk_pane_g

0x1d31,	// (0x00011900) aid_size_touch_scroll_bar

0x396c,	// (0x0001353b) bg_sctrl_sk_pane_g4

0x3964,	// (0x00013533) bg_sctrl_sk_pane_g5

0x3974,	// (0x00013543) bg_sctrl_sk_pane_g6

0x397c,	// (0x0001354b) bg_sctrl_sk_pane_g7

0x398c,	// (0x0001355b) bg_sctrl_sk_pane_g8

0x3984,	// (0x00013553) bg_sctrl_sk_pane_g9

0xd4ef,	// (0x0001d0be) popup_fep_china_hwr2_fs_candidate_window

0xd4f7,	// (0x0001d0c6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd4f7,	// (0x0001d0c6) popup_fep_china_hwr2_fs_control_window

0x6308,	// (0x00015ed7) sctrl_sk_top_pane_g2

0x0001,

0xfcd2,	// (0x0001f8a1) sctrl_sk_top_pane_g

0x7a28,	// (0x000175f7) aid_fep_china_hwr2_fs_cell_ParamLimits

0x7a28,	// (0x000175f7) aid_fep_china_hwr2_fs_cell

0x7a39,	// (0x00017608) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x7a39,	// (0x00017608) bg_popup_fep_shadow_pane_cp4

0x7a50,	// (0x0001761f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x7a50,	// (0x0001761f) bg_popup_fep_shadow_pane_cp5

0x7a62,	// (0x00017631) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x7a62,	// (0x00017631) popup_fep_china_hwr2_fs_control_bar_grid

0x7a72,	// (0x00017641) popup_fep_china_hwr2_fs_control_funtion_grid

0x7a7a,	// (0x00017649) aid_fep_china_hwr2_fs_candi_cell

0x1433,	// (0x00011002) bg_popup_fep_shadow_pane_cp6

0x7a84,	// (0x00017653) popup_fep_china_hwr2_fs_candidate_grid

0x7a8c,	// (0x0001765b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x7a8c,	// (0x0001765b) cell_fep_china_hwr2_fs_funtion_grid

0x60d0,	// (0x00015c9f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7aa4,	// (0x00017673) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7aa4,	// (0x00017673) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7ab2,	// (0x00017681) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7ab2,	// (0x00017681) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfced,	// (0x0001f8bc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfced,	// (0x0001f8bc) cell_fep_china_hwr2_fs_funtion_grid_g

0x7ac8,	// (0x00017697) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x7ac8,	// (0x00017697) cell_fep_china_hwr2_fs_funtion_grid_t1

0x7add,	// (0x000176ac) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x7add,	// (0x000176ac) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf2,	// (0x0001f8c1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf2,	// (0x0001f8c1) cell_fep_china_hwr2_fs_funtion_grid_t

0x7af9,	// (0x000176c8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7b01,	// (0x000176d0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7b09,	// (0x000176d8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf7,	// (0x0001f8c6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7b11,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7b11,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid

0x7b2a,	// (0x000176f9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7b32,	// (0x00017701) popup_fep_china_hwr2_fs_candidate_grid_g21

0x60d0,	// (0x00015c9f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x60d0,	// (0x00015c9f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1e,	// (0x0001f6ed) cell_fep_china_hwr2_fs_candidate_grid_g

0x7b3a,	// (0x00017709) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3544,	// (0x00013113) clock_nsta_pane_cp_24_ParamLimits

0x3544,	// (0x00013113) clock_nsta_pane_cp_24

0x35b7,	// (0x00013186) indicator_nsta_pane_cp_24_ParamLimits

0x35b7,	// (0x00013186) indicator_nsta_pane_cp_24

0x4664,	// (0x00014233) heading_pane_g1

0x0001,

0xf8a1,	// (0x0001f470) heading_pane_g

0x50ad,	// (0x00014c7c) grid_sct_catagory_button_pane

0x50dd,	// (0x00014cac) scroll_pane_cp5_ParamLimits

0x5d41,	// (0x00015910) button_value_adjust_pane_cp5_ParamLimits

0x5d41,	// (0x00015910) button_value_adjust_pane_cp5

0x5e37,	// (0x00015a06) form2_midp_time_pane_ParamLimits

0x7b48,	// (0x00017717) cell_sct_catagory_button_pane_ParamLimits

0x7b48,	// (0x00017717) cell_sct_catagory_button_pane

0x6095,	// (0x00015c64) bg_button_pane_cp01_ParamLimits

0x6095,	// (0x00015c64) bg_button_pane_cp01

0x60d0,	// (0x00015c9f) cell_sct_catagory_button_pane_g1

0xd7f3,	// (0x0001d3c2) popup_tb_extension_window

0x7b5a,	// (0x00017729) aid_size_cell_ext_ParamLimits

0x7b5a,	// (0x00017729) aid_size_cell_ext

0x18ac,	// (0x0001147b) bg_tb_trans_pane_cp1_ParamLimits

0x18ac,	// (0x0001147b) bg_tb_trans_pane_cp1

0x7b7a,	// (0x00017749) grid_tb_ext_pane_ParamLimits

0x7b7a,	// (0x00017749) grid_tb_ext_pane

0x7ba0,	// (0x0001776f) cell_tb_ext_pane_ParamLimits

0x7ba0,	// (0x0001776f) cell_tb_ext_pane

0x7bb5,	// (0x00017784) cell_tb_ext_pane_g1_ParamLimits

0x7bb5,	// (0x00017784) cell_tb_ext_pane_g1

0x7bd2,	// (0x000177a1) cell_tb_ext_pane_t1

0x18ac,	// (0x0001147b) list_highlight_pane_cp11_ParamLimits

0x18ac,	// (0x0001147b) list_highlight_pane_cp11

0xcdc8,	// (0x0001c997) popup_uni_indicator_window_ParamLimits

0xcdc8,	// (0x0001c997) popup_uni_indicator_window

0x2303,	// (0x00011ed2) bg_popup_sub_pane_cp14

0x7bed,	// (0x000177bc) list_uniindi_pane

0x7bf9,	// (0x000177c8) uniindi_top_pane

0x18ac,	// (0x0001147b) bg_uniindi_top_pane

0x7c18,	// (0x000177e7) uniindi_top_pane_g1

0x7c2e,	// (0x000177fd) uniindi_top_pane_g2

0x0003,

0xfcfe,	// (0x0001f8cd) uniindi_top_pane_g

0x7c58,	// (0x00017827) uniindi_top_pane_t1

0x7c82,	// (0x00017851) list_single_uniindi_pane_ParamLimits

0x7c82,	// (0x00017851) list_single_uniindi_pane

0x60d0,	// (0x00015c9f) bg_uniindi_top_pane_g1

0x7c94,	// (0x00017863) list_single_uniindi_pane_g1

0x7ca7,	// (0x00017876) list_single_uniindi_pane_t1

0x1433,	// (0x00011002) control_bg_pane

0x7ccc,	// (0x0001789b) bg_sctrl_sk_pane_cp1

0x7cd5,	// (0x000178a4) bg_sctrl_sk_pane_cp2

0x7cde,	// (0x000178ad) control_bg_pane_g1

0x7ce7,	// (0x000178b6) control_bg_pane_g2

0x0001,

0xfd07,	// (0x0001f8d6) control_bg_pane_g

0x5b94,	// (0x00015763) cell_indicator_nsta_pane_g1_ParamLimits

0x5ba2,	// (0x00015771) cell_indicator_nsta_pane_g2_ParamLimits

0xfa82,	// (0x0001f651) cell_indicator_nsta_pane_g_ParamLimits

0xc847,	// (0x0001c416) form2_midp_time_pane_t1_ParamLimits

0x1c0f,	// (0x000117de) main_idle_act4_pane_ParamLimits

0x1c0f,	// (0x000117de) main_idle_act4_pane

0xd7f3,	// (0x0001d3c2) popup_tb_extension_window_ParamLimits

0x7b94,	// (0x00017763) tb_ext_find_pane_ParamLimits

0x7b94,	// (0x00017763) tb_ext_find_pane

0x7cf0,	// (0x000178bf) ai_gene_pane_1_cp1

0x323b,	// (0x00012e0a) ai_gene_pane_2_cp1

0x7cf8,	// (0x000178c7) list_single_idle_plugin_calendar_pane

0x7d01,	// (0x000178d0) list_single_idle_plugin_notification_pane

0x7d0a,	// (0x000178d9) list_single_idle_plugin_player_pane

0x7d13,	// (0x000178e2) list_single_idle_plugin_shortcut_pane_ParamLimits

0x7d13,	// (0x000178e2) list_single_idle_plugin_shortcut_pane

0x7d35,	// (0x00017904) main_idle_act4_pane_t1

0x7d47,	// (0x00017916) main_idle_act4_pane_t2

0x0001,

0xfd0c,	// (0x0001f8db) main_idle_act4_pane_t

0x7d59,	// (0x00017928) middle_sk_idle_act4_pane_ParamLimits

0x7d59,	// (0x00017928) middle_sk_idle_act4_pane

0x7d6f,	// (0x0001793e) popup_clock_digital_analogue_window_cp2

0x7d89,	// (0x00017958) shortcut_wheel_idle_act4_pane_ParamLimits

0x7d89,	// (0x00017958) shortcut_wheel_idle_act4_pane

0x60d0,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g1

0x60d0,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g2

0x60d0,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g3

0x60d0,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g4

0x60d0,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g5

0x7d9d,	// (0x0001796c) shortcut_wheel_idle_act4_pane_g6

0x7da5,	// (0x00017974) shortcut_wheel_idle_act4_pane_g7

0x7dad,	// (0x0001797c) shortcut_wheel_idle_act4_pane_g8

0x7db5,	// (0x00017984) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd11,	// (0x0001f8e0) shortcut_wheel_idle_act4_pane_g

0x6308,	// (0x00015ed7) middle_sk_idle_act4_pane_g1_ParamLimits

0x6308,	// (0x00015ed7) middle_sk_idle_act4_pane_g1

0x7e19,	// (0x000179e8) middle_sk_idle_act4_pane_g2_ParamLimits

0x7e19,	// (0x000179e8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd34,	// (0x0001f903) middle_sk_idle_act4_pane_g_ParamLimits

0xfd34,	// (0x0001f903) middle_sk_idle_act4_pane_g

0x7e25,	// (0x000179f4) middle_sk_idle_act4_pane_t1_ParamLimits

0x7e25,	// (0x000179f4) middle_sk_idle_act4_pane_t1

0x7e42,	// (0x00017a11) grid_ai_shortcut_pane_ParamLimits

0x7e42,	// (0x00017a11) grid_ai_shortcut_pane

0x7e5b,	// (0x00017a2a) list_highlight_pane_cp16_ParamLimits

0x7e5b,	// (0x00017a2a) list_highlight_pane_cp16

0x7e68,	// (0x00017a37) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x7e68,	// (0x00017a37) list_single_idle_plugin_shortcut_pane_g1

0x7e74,	// (0x00017a43) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x7e74,	// (0x00017a43) list_single_idle_plugin_shortcut_pane_g2

0x7e8c,	// (0x00017a5b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x7e8c,	// (0x00017a5b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd39,	// (0x0001f908) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd39,	// (0x0001f908) list_single_idle_plugin_shortcut_pane_g

0x7e9f,	// (0x00017a6e) cell_ai_shortcut_pane_ParamLimits

0x7e9f,	// (0x00017a6e) cell_ai_shortcut_pane

0x7ec0,	// (0x00017a8f) cell_ai_shortcut_pane_g1_ParamLimits

0x7ec0,	// (0x00017a8f) cell_ai_shortcut_pane_g1

0x7cf0,	// (0x000178bf) ai_gene_pane_1_cp2

0x7ee2,	// (0x00017ab1) ai_gene_pane_2_cp2

0x7eea,	// (0x00017ab9) list_highlight_pane_cp15

0x7ef3,	// (0x00017ac2) list_single_idle_plugin_calendar_pane_g1

0x7eea,	// (0x00017ab9) list_highlight_pane_cp17

0x7efb,	// (0x00017aca) list_single_idle_plugin_calendar_pane_g1_copy1

0x7f03,	// (0x00017ad2) list_single_idle_plugin_player_pane_g1

0x52ab,	// (0x00014e7a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd40,	// (0x0001f90f) list_single_idle_plugin_player_pane_g

0x7f0b,	// (0x00017ada) list_single_idle_plugin_player_pane_t1

0x7f19,	// (0x00017ae8) list_single_idle_plugin_player_pane_t2

0x7f27,	// (0x00017af6) list_single_idle_plugin_player_pane_t3

0x7f35,	// (0x00017b04) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd45,	// (0x0001f914) list_single_idle_plugin_player_pane_t

0x7f43,	// (0x00017b12) wait_bar_pane_cp15

0x7f4b,	// (0x00017b1a) grid_ai_notification_pane

0x52ab,	// (0x00014e7a) list_single_idle_plugin_notification_pane_g1

0x7f54,	// (0x00017b23) cell_ai_notification_pane_ParamLimits

0x7f54,	// (0x00017b23) cell_ai_notification_pane

0x7f61,	// (0x00017b30) cell_ai_notification_pane_g1

0x7f69,	// (0x00017b38) cell_ai_notification_pane_t1

0x7f77,	// (0x00017b46) tb_ext_find_button_pane

0x7f7f,	// (0x00017b4e) tb_ext_find_pane_g1

0x7f87,	// (0x00017b56) tb_ext_find_pane_t1

0x2ad1,	// (0x000126a0) tb_ext_find_button_pane_g1

0x7f95,	// (0x00017b64) tb_ext_find_button_pane_g2

0x0001,

0xfd4e,	// (0x0001f91d) tb_ext_find_button_pane_g

0x7d35,	// (0x00017904) main_idle_act4_pane_t1_ParamLimits

0x7d47,	// (0x00017916) main_idle_act4_pane_t2_ParamLimits

0xfd0c,	// (0x0001f8db) main_idle_act4_pane_t_ParamLimits

0x7d6f,	// (0x0001793e) popup_clock_digital_analogue_window_cp2_ParamLimits

0x7d7d,	// (0x0001794c) sat_plugin_idle_act4_pane_ParamLimits

0x7d7d,	// (0x0001794c) sat_plugin_idle_act4_pane

0x7f9e,	// (0x00017b6d) sat_plugin_idle_act4_pane_t1_ParamLimits

0x7f9e,	// (0x00017b6d) sat_plugin_idle_act4_pane_t1

0x7fb1,	// (0x00017b80) sat_plugin_idle_act4_pane_t2_ParamLimits

0x7fb1,	// (0x00017b80) sat_plugin_idle_act4_pane_t2

0x7fc4,	// (0x00017b93) sat_plugin_idle_act4_pane_t3_ParamLimits

0x7fc4,	// (0x00017b93) sat_plugin_idle_act4_pane_t3

0x7fd7,	// (0x00017ba6) sat_plugin_idle_act4_pane_t4_ParamLimits

0x7fd7,	// (0x00017ba6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd53,	// (0x0001f922) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd53,	// (0x0001f922) sat_plugin_idle_act4_pane_t

0xcd29,	// (0x0001c8f8) popup_battery_window_ParamLimits

0xcd29,	// (0x0001c8f8) popup_battery_window

0x18ac,	// (0x0001147b) bg_popup_sub_pane_cp25_ParamLimits

0x18ac,	// (0x0001147b) bg_popup_sub_pane_cp25

0x7fea,	// (0x00017bb9) popup_battery_window_g1_ParamLimits

0x7fea,	// (0x00017bb9) popup_battery_window_g1

0x7ff6,	// (0x00017bc5) popup_battery_window_t1_ParamLimits

0x7ff6,	// (0x00017bc5) popup_battery_window_t1

0x8008,	// (0x00017bd7) popup_battery_window_t2_ParamLimits

0x8008,	// (0x00017bd7) popup_battery_window_t2

0x0001,

0xfd5c,	// (0x0001f92b) popup_battery_window_t_ParamLimits

0xfd5c,	// (0x0001f92b) popup_battery_window_t

0x3114,	// (0x00012ce3) midp_canvas_pane_ParamLimits

0x3183,	// (0x00012d52) midp_keypad_pane_ParamLimits

0x3183,	// (0x00012d52) midp_keypad_pane

0x344f,	// (0x0001301e) main_midp_pane_ParamLimits

0x5c1a,	// (0x000157e9) signal_pane_g2_cp_ParamLimits

0x8025,	// (0x00017bf4) aid_size_cell_midp_keypad_ParamLimits

0x8025,	// (0x00017bf4) aid_size_cell_midp_keypad

0x803f,	// (0x00017c0e) midp_keyp_game_grid_pane_ParamLimits

0x803f,	// (0x00017c0e) midp_keyp_game_grid_pane

0x8059,	// (0x00017c28) midp_keyp_rocker_pane_ParamLimits

0x8059,	// (0x00017c28) midp_keyp_rocker_pane

0x8086,	// (0x00017c55) midp_keyp_sk_left_pane_ParamLimits

0x8086,	// (0x00017c55) midp_keyp_sk_left_pane

0x80de,	// (0x00017cad) midp_keyp_sk_right_pane_ParamLimits

0x80de,	// (0x00017cad) midp_keyp_sk_right_pane

0x1433,	// (0x00011002) bg_button_pane_cp03

0x8130,	// (0x00017cff) midp_keyp_sk_left_pane_g1

0x1433,	// (0x00011002) bg_button_pane_cp04

0x8130,	// (0x00017cff) midp_keyp_sk_right_pane_g1

0x60d0,	// (0x00015c9f) midp_keyp_rocker_pane_g1

0x8139,	// (0x00017d08) keyp_game_cell_pane_ParamLimits

0x8139,	// (0x00017d08) keyp_game_cell_pane

0x1433,	// (0x00011002) bg_button_pane_cp02

0x814a,	// (0x00017d19) keyp_game_cell_pane_g1

0xcd5f,	// (0x0001c92e) popup_fep_vkb2_window_ParamLimits

0xcd5f,	// (0x0001c92e) popup_fep_vkb2_window

0xe1df,	// (0x0001ddae) aid_size_cell_vkb2_ParamLimits

0xe1df,	// (0x0001ddae) aid_size_cell_vkb2

0xe22b,	// (0x0001ddfa) popup_fep_vkb2_window_g1_ParamLimits

0xe22b,	// (0x0001ddfa) popup_fep_vkb2_window_g1

0xe273,	// (0x0001de42) vkb2_area_bottom_pane_ParamLimits

0xe273,	// (0x0001de42) vkb2_area_bottom_pane

0xe2ab,	// (0x0001de7a) vkb2_area_keypad_pane_ParamLimits

0xe2ab,	// (0x0001de7a) vkb2_area_keypad_pane

0xe2e3,	// (0x0001deb2) vkb2_area_top_pane_ParamLimits

0xe2e3,	// (0x0001deb2) vkb2_area_top_pane

0xe358,	// (0x0001df27) vkb2_top_entry_pane_ParamLimits

0xe358,	// (0x0001df27) vkb2_top_entry_pane

0xe382,	// (0x0001df51) vkb2_top_grid_left_pane_ParamLimits

0xe382,	// (0x0001df51) vkb2_top_grid_left_pane

0xe3a1,	// (0x0001df70) vkb2_top_grid_right_pane_ParamLimits

0xe3a1,	// (0x0001df70) vkb2_top_grid_right_pane

0xe3c0,	// (0x0001df8f) vkb2_cell_keypad_pane_ParamLimits

0xe3c0,	// (0x0001df8f) vkb2_cell_keypad_pane

0xe471,	// (0x0001e040) vkb2_area_bottom_grid_pane_ParamLimits

0xe471,	// (0x0001e040) vkb2_area_bottom_grid_pane

0xe495,	// (0x0001e064) vkb2_area_bottom_pane_g1_ParamLimits

0xe495,	// (0x0001e064) vkb2_area_bottom_pane_g1

0xe4b9,	// (0x0001e088) vkb2_area_bottom_pane_g2_ParamLimits

0xe4b9,	// (0x0001e088) vkb2_area_bottom_pane_g2

0xe4e7,	// (0x0001e0b6) vkb2_area_bottom_pane_g3_ParamLimits

0xe4e7,	// (0x0001e0b6) vkb2_area_bottom_pane_g3

0x0002,

0xfd61,	// (0x0001f930) vkb2_area_bottom_pane_g_ParamLimits

0xfd61,	// (0x0001f930) vkb2_area_bottom_pane_g

0xe538,	// (0x0001e107) vkb2_top_cell_left_pane_ParamLimits

0xe538,	// (0x0001e107) vkb2_top_cell_left_pane

0x815b,	// (0x00017d2a) vkb2_top_entry_pane_g1_ParamLimits

0x815b,	// (0x00017d2a) vkb2_top_entry_pane_g1

0x8169,	// (0x00017d38) vkb2_top_entry_pane_t1_ParamLimits

0x8169,	// (0x00017d38) vkb2_top_entry_pane_t1

0x819b,	// (0x00017d6a) vkb2_top_entry_pane_t2_ParamLimits

0x819b,	// (0x00017d6a) vkb2_top_entry_pane_t2

0x81cd,	// (0x00017d9c) vkb2_top_entry_pane_t3_ParamLimits

0x81cd,	// (0x00017d9c) vkb2_top_entry_pane_t3

0x0002,

0xfd68,	// (0x0001f937) vkb2_top_entry_pane_t_ParamLimits

0xfd68,	// (0x0001f937) vkb2_top_entry_pane_t

0xe585,	// (0x0001e154) vkb2_top_grid_right_pane_g1_ParamLimits

0xe585,	// (0x0001e154) vkb2_top_grid_right_pane_g1

0xe59b,	// (0x0001e16a) vkb2_top_grid_right_pane_g2_ParamLimits

0xe59b,	// (0x0001e16a) vkb2_top_grid_right_pane_g2

0xe5b3,	// (0x0001e182) vkb2_top_grid_right_pane_g3_ParamLimits

0xe5b3,	// (0x0001e182) vkb2_top_grid_right_pane_g3

0xe5cb,	// (0x0001e19a) vkb2_top_grid_right_pane_g4_ParamLimits

0xe5cb,	// (0x0001e19a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6f,	// (0x0001f93e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6f,	// (0x0001f93e) vkb2_top_grid_right_pane_g

0xe5e1,	// (0x0001e1b0) vkb2_top_cell_left_pane_g1

0xe5f8,	// (0x0001e1c7) vkb2_cell_keypad_pane_g1_ParamLimits

0xe5f8,	// (0x0001e1c7) vkb2_cell_keypad_pane_g1

0x81e3,	// (0x00017db2) vkb2_cell_keypad_pane_t1_ParamLimits

0x81e3,	// (0x00017db2) vkb2_cell_keypad_pane_t1

0xe606,	// (0x0001e1d5) vkb2_cell_bottom_grid_pane_ParamLimits

0xe606,	// (0x0001e1d5) vkb2_cell_bottom_grid_pane

0xe63f,	// (0x0001e20e) vkb2_cell_bottom_grid_pane_g1

0x7dbd,	// (0x0001798c) aid_call2_pane_cp02

0x7dc5,	// (0x00017994) aid_call_pane_cp02

0x7dcd,	// (0x0001799c) clock_digital_number_pane_cp10

0x7dd5,	// (0x000179a4) clock_digital_number_pane_cp11

0x7ddd,	// (0x000179ac) clock_digital_number_pane_cp12

0x7de5,	// (0x000179b4) clock_digital_number_pane_cp13

0x7ded,	// (0x000179bc) clock_digital_separator_pane_cp10

0x2ad1,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g1

0x2ad1,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g2

0x7df5,	// (0x000179c4) popup_clock_digital_analogue_window_cp2_g3

0x2ad1,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g4

0x7df5,	// (0x000179c4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd24,	// (0x0001f8f3) popup_clock_digital_analogue_window_cp2_g

0x7dfd,	// (0x000179cc) popup_clock_digital_analogue_window_cp2_t1

0x7e0b,	// (0x000179da) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2f,	// (0x0001f8fe) popup_clock_digital_analogue_window_cp2_t

0x60d0,	// (0x00015c9f) clock_digital_number_pane_cp10_g1

0x60d0,	// (0x00015c9f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1e,	// (0x0001f6ed) clock_digital_number_pane_cp10_g

0x60d0,	// (0x00015c9f) clock_digital_separator_pane_cp10_g1

0x60d0,	// (0x00015c9f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1e,	// (0x0001f6ed) clock_digital_separator_pane_cp10_g

0x7c3a,	// (0x00017809) uniindi_top_pane_g3

0x7c4b,	// (0x0001781a) uniindi_top_pane_g4

0xe42b,	// (0x0001dffa) vkb2_row_keypad_pane_ParamLimits

0xe42b,	// (0x0001dffa) vkb2_row_keypad_pane

0xe65b,	// (0x0001e22a) vkb2_cell_t_keypad_pane_ParamLimits

0xe65b,	// (0x0001e22a) vkb2_cell_t_keypad_pane

0xe668,	// (0x0001e237) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe668,	// (0x0001e237) vkb2_cell_t_keypad_pane_cp08

0xe678,	// (0x0001e247) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe678,	// (0x0001e247) vkb2_cell_t_keypad_pane_cp09

0xe689,	// (0x0001e258) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe689,	// (0x0001e258) vkb2_cell_t_keypad_pane_cp01

0xe699,	// (0x0001e268) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe699,	// (0x0001e268) vkb2_cell_t_keypad_pane_cp02

0xe6a9,	// (0x0001e278) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe6a9,	// (0x0001e278) vkb2_cell_t_keypad_pane_cp03

0xe6b9,	// (0x0001e288) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe6b9,	// (0x0001e288) vkb2_cell_t_keypad_pane_cp04

0xe6c9,	// (0x0001e298) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe6c9,	// (0x0001e298) vkb2_cell_t_keypad_pane_cp05

0xe6d9,	// (0x0001e2a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe6d9,	// (0x0001e2a8) vkb2_cell_t_keypad_pane_cp06

0xe6e9,	// (0x0001e2b8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe6e9,	// (0x0001e2b8) vkb2_cell_t_keypad_pane_cp07

0xe6f9,	// (0x0001e2c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe6f9,	// (0x0001e2c8) vkb2_cell_t_keypad_pane_cp10

0x6308,	// (0x00015ed7) vkb2_cell_t_keypad_pane_g1

0x9c97,	// (0x00019866) vkb2_cell_t_keypad_pane_t1

0x1433,	// (0x00011002) popup_grid_graphic2_window

0xe70e,	// (0x0001e2dd) aid_size_cell_graphic2_ParamLimits

0xe70e,	// (0x0001e2dd) aid_size_cell_graphic2

0xe746,	// (0x0001e315) bg_popup_window_pane_cp21_ParamLimits

0xe746,	// (0x0001e315) bg_popup_window_pane_cp21

0xe754,	// (0x0001e323) graphic2_pages_pane_ParamLimits

0xe754,	// (0x0001e323) graphic2_pages_pane

0xe78e,	// (0x0001e35d) grid_graphic2_control_pane_ParamLimits

0xe78e,	// (0x0001e35d) grid_graphic2_control_pane

0xe7c4,	// (0x0001e393) grid_graphic2_pane_ParamLimits

0xe7c4,	// (0x0001e393) grid_graphic2_pane

0xe824,	// (0x0001e3f3) cell_graphic2_pane

0x1433,	// (0x00011002) main_comp_mode_pane

0x74d6,	// (0x000170a5) list_ai3_gene_pane_ParamLimits

0x7899,	// (0x00017468) bg_popup_window_pane_cp19_ParamLimits

0x78a5,	// (0x00017474) bg_touch_area_indi_pane_ParamLimits

0x78a5,	// (0x00017474) bg_touch_area_indi_pane

0x78bb,	// (0x0001748a) bg_touch_area_indi_pane_cp01_ParamLimits

0x78bb,	// (0x0001748a) bg_touch_area_indi_pane_cp01

0x78d1,	// (0x000174a0) bg_touch_area_indi_pane_cp02_ParamLimits

0x78d1,	// (0x000174a0) bg_touch_area_indi_pane_cp02

0x78e7,	// (0x000174b6) bg_touch_area_indi_pane_cp03_ParamLimits

0x78e7,	// (0x000174b6) bg_touch_area_indi_pane_cp03

0x78fd,	// (0x000174cc) popup_slider_window_g1_ParamLimits

0x7919,	// (0x000174e8) popup_slider_window_g2_ParamLimits

0x7935,	// (0x00017504) popup_slider_window_g3_ParamLimits

0xfcb9,	// (0x0001f888) popup_slider_window_g_ParamLimits

0x7991,	// (0x00017560) popup_slider_window_t1_ParamLimits

0x7a03,	// (0x000175d2) small_volume_slider_vertical_pane_ParamLimits

0xe824,	// (0x0001e3f3) cell_graphic2_pane_ParamLimits

0xe860,	// (0x0001e42f) bg_button_pane_cp10_ParamLimits

0xe860,	// (0x0001e42f) bg_button_pane_cp10

0xe871,	// (0x0001e440) bg_button_pane_cp11_ParamLimits

0xe871,	// (0x0001e440) bg_button_pane_cp11

0xe882,	// (0x0001e451) graphic2_pages_pane_g1_ParamLimits

0xe882,	// (0x0001e451) graphic2_pages_pane_g1

0xe895,	// (0x0001e464) graphic2_pages_pane_g2_ParamLimits

0xe895,	// (0x0001e464) graphic2_pages_pane_g2

0x0001,

0xfd7d,	// (0x0001f94c) graphic2_pages_pane_g_ParamLimits

0xfd7d,	// (0x0001f94c) graphic2_pages_pane_g

0xe8ab,	// (0x0001e47a) graphic2_pages_pane_t1_ParamLimits

0xe8ab,	// (0x0001e47a) graphic2_pages_pane_t1

0xe8c1,	// (0x0001e490) cell_graphic2_control_pane_ParamLimits

0xe8c1,	// (0x0001e490) cell_graphic2_control_pane

0xe8e0,	// (0x0001e4af) cell_graphic2_pane_g1_ParamLimits

0xe8e0,	// (0x0001e4af) cell_graphic2_pane_g1

0xe8ed,	// (0x0001e4bc) cell_graphic2_pane_g2_ParamLimits

0xe8ed,	// (0x0001e4bc) cell_graphic2_pane_g2

0xe8fa,	// (0x0001e4c9) cell_graphic2_pane_g3_ParamLimits

0xe8fa,	// (0x0001e4c9) cell_graphic2_pane_g3

0xe907,	// (0x0001e4d6) cell_graphic2_pane_g4_ParamLimits

0xe907,	// (0x0001e4d6) cell_graphic2_pane_g4

0xe914,	// (0x0001e4e3) cell_graphic2_pane_g5_ParamLimits

0xe914,	// (0x0001e4e3) cell_graphic2_pane_g5

0x0004,

0xfd82,	// (0x0001f951) cell_graphic2_pane_g_ParamLimits

0xfd82,	// (0x0001f951) cell_graphic2_pane_g

0xe92d,	// (0x0001e4fc) cell_graphic2_pane_t1_ParamLimits

0xe92d,	// (0x0001e4fc) cell_graphic2_pane_t1

0x3a64,	// (0x00013633) grid_highlight_pane_cp11_ParamLimits

0x3a64,	// (0x00013633) grid_highlight_pane_cp11

0x18ac,	// (0x0001147b) bg_button_pane_cp05

0xe955,	// (0x0001e524) cell_graphic2_control_pane_g1

0x60d0,	// (0x00015c9f) bg_touch_area_indi_pane_g1

0x9cc3,	// (0x00019892) aid_cmod_rocker_key_size

0x9ccd,	// (0x0001989c) aid_cmode_itu_key_size

0x9cd7,	// (0x000198a6) main_cmode_video_pane

0x9cdf,	// (0x000198ae) main_comp_mode_itu_pane

0x9ce9,	// (0x000198b8) main_comp_mode_rocker_pane

0x9cf1,	// (0x000198c0) cell_cmode_rocker_pane_ParamLimits

0x9cf1,	// (0x000198c0) cell_cmode_rocker_pane

0x9d03,	// (0x000198d2) cell_cmode_itu_pane_ParamLimits

0x9d03,	// (0x000198d2) cell_cmode_itu_pane

0x2303,	// (0x00011ed2) bg_button_pane_cp06_ParamLimits

0x2303,	// (0x00011ed2) bg_button_pane_cp06

0x6308,	// (0x00015ed7) cell_cmode_rocker_pane_g1_ParamLimits

0x6308,	// (0x00015ed7) cell_cmode_rocker_pane_g1

0x7aa4,	// (0x00017673) cell_cmode_rocker_pane_g2_ParamLimits

0x7aa4,	// (0x00017673) cell_cmode_rocker_pane_g2

0x0001,

0xfd92,	// (0x0001f961) cell_cmode_rocker_pane_g_ParamLimits

0xfd92,	// (0x0001f961) cell_cmode_rocker_pane_g

0x1433,	// (0x00011002) bg_button_pane_cp07

0x9d18,	// (0x000198e7) cell_cmode_itu_pane_g1

0x9d21,	// (0x000198f0) cell_cmode_itu_pane_t1

0x9d2f,	// (0x000198fe) cell_cmode_itu_pane_t2

0x0001,

0xfd97,	// (0x0001f966) cell_cmode_itu_pane_t

0x7cbc,	// (0x0001788b) aid_touch_ctrl_left

0x7cc4,	// (0x00017893) aid_touch_ctrl_right

0x1433,	// (0x00011002) compa_mode_pane

0xe97d,	// (0x0001e54c) aid_cmod_rocker_key_size_cp

0xe987,	// (0x0001e556) aid_cmode_itu_key_size_cp

0x9d3d,	// (0x0001990c) compa_mode_pane_g1

0x9d45,	// (0x00019914) compa_mode_pane_g2

0x9d4d,	// (0x0001991c) compa_mode_pane_g3

0x0002,

0xfd9c,	// (0x0001f96b) compa_mode_pane_g

0xe991,	// (0x0001e560) main_comp_mode_itu_pane_cp

0xe999,	// (0x0001e568) main_comp_mode_rocker_pane_cp

0xe9a1,	// (0x0001e570) cell_cmode_itu_pane_cp_ParamLimits

0xe9a1,	// (0x0001e570) cell_cmode_itu_pane_cp

0xe9b6,	// (0x0001e585) cell_cmode_rocker_pane_cp_ParamLimits

0xe9b6,	// (0x0001e585) cell_cmode_rocker_pane_cp

0x2303,	// (0x00011ed2) bg_button_pane_cp06_cp_ParamLimits

0x2303,	// (0x00011ed2) bg_button_pane_cp06_cp

0x6308,	// (0x00015ed7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6308,	// (0x00015ed7) cell_cmode_rocker_pane_g1_cp

0x60d0,	// (0x00015c9f) cell_cmode_rocker_pane_g2_cp

0x1433,	// (0x00011002) bg_button_pane_cp07_cp

0xe9c8,	// (0x0001e597) cell_cmode_itu_pane_g1_cp

0xe9d1,	// (0x0001e5a0) cell_cmode_itu_pane_t1_cp

0xe9df,	// (0x0001e5ae) cell_cmode_itu_pane_t2_cp

0x4e3b,	// (0x00014a0a) settings_code_pane_cp2

0x1604,	// (0x000111d3) bg_popup_window_pane_cp3_ParamLimits

0x1aaa,	// (0x00011679) heading_pane_cp3_ParamLimits

0x1ab9,	// (0x00011688) listscroll_popup_graphic_pane_ParamLimits

0xdd9f,	// (0x0001d96e) fep_hwr_aid_pane_ParamLimits

0xe151,	// (0x0001dd20) aid_touch_sctrl_top_ParamLimits

0xe15e,	// (0x0001dd2d) sctrl_sk_top_pane_g1_ParamLimits

0x6308,	// (0x00015ed7) sctrl_sk_top_pane_g2_ParamLimits

0xfcd2,	// (0x0001f8a1) sctrl_sk_top_pane_g_ParamLimits

0xe16b,	// (0x0001dd3a) sctrl_sk_top_pane_t1_ParamLimits

0xe151,	// (0x0001dd20) aid_touch_sctrl_bottom_ParamLimits

0xe16b,	// (0x0001dd3a) sctrl_sk_bottom_pane_t1_ParamLimits

0x7c06,	// (0x000177d5) aid_area_touch_clock

0xe31f,	// (0x0001deee) aid_vkb2_area_top_pane_cell_ParamLimits

0xe31f,	// (0x0001deee) aid_vkb2_area_top_pane_cell

0xe44d,	// (0x0001e01c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe44d,	// (0x0001e01c) aid_vkb2_area_bottom_pane_cell

0x8153,	// (0x00017d22) popup_char_count_window

0x9d55,	// (0x00019924) popup_char_count_window_g1

0x9d5e,	// (0x0001992d) popup_char_count_window_g2

0x9d67,	// (0x00019936) popup_char_count_window_g3

0x0002,

0xfda3,	// (0x0001f972) popup_char_count_window_g

0x9d70,	// (0x0001993f) popup_char_count_window_t1

0xe209,	// (0x0001ddd8) popup_fep_char_preview_window_ParamLimits

0xe209,	// (0x0001ddd8) popup_fep_char_preview_window

0xe33d,	// (0x0001df0c) vkb2_top_candi_pane_ParamLimits

0xe33d,	// (0x0001df0c) vkb2_top_candi_pane

0xe9ed,	// (0x0001e5bc) cell_vkb2_top_candi_pane_ParamLimits

0xe9ed,	// (0x0001e5bc) cell_vkb2_top_candi_pane

0x4030,	// (0x00013bff) bg_popup_fep_char_preview_window_ParamLimits

0x4030,	// (0x00013bff) bg_popup_fep_char_preview_window

0xea23,	// (0x0001e5f2) popup_fep_char_preview_window_t1_ParamLimits

0xea23,	// (0x0001e5f2) popup_fep_char_preview_window_t1

0x9d8e,	// (0x0001995d) bg_popup_fep_char_preview_window_g1

0x9d86,	// (0x00019955) bg_popup_fep_char_preview_window_g2

0x9d7e,	// (0x0001994d) bg_popup_fep_char_preview_window_g3

0x9db6,	// (0x00019985) bg_popup_fep_char_preview_window_g4

0x9dae,	// (0x0001997d) bg_popup_fep_char_preview_window_g5

0x9da6,	// (0x00019975) bg_popup_fep_char_preview_window_g6

0x9d9e,	// (0x0001996d) bg_popup_fep_char_preview_window_g7

0x9d96,	// (0x00019965) bg_popup_fep_char_preview_window_g8

0x9dbe,	// (0x0001998d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaa,	// (0x0001f979) bg_popup_fep_char_preview_window_g

0x6308,	// (0x00015ed7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6308,	// (0x00015ed7) cell_vkb2_top_candi_pane_g1

0x66e9,	// (0x000162b8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x66e9,	// (0x000162b8) cell_vkb2_top_candi_pane_g2

0x670a,	// (0x000162d9) cell_vkb2_top_candi_pane_g3_ParamLimits

0x670a,	// (0x000162d9) cell_vkb2_top_candi_pane_g3

0xea65,	// (0x0001e634) cell_vkb2_top_candi_pane_g4_ParamLimits

0xea65,	// (0x0001e634) cell_vkb2_top_candi_pane_g4

0x9c68,	// (0x00019837) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9c68,	// (0x00019837) cell_vkb2_top_candi_pane_g5

0x7aa4,	// (0x00017673) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7aa4,	// (0x00017673) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbf,	// (0x0001f98e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbf,	// (0x0001f98e) cell_vkb2_top_candi_pane_g

0xea86,	// (0x0001e655) cell_vkb2_top_candi_pane_t1

0xdbb7,	// (0x0001d786) aid_size_touch_slider_mark_ParamLimits

0xdbb7,	// (0x0001d786) aid_size_touch_slider_mark

0xe782,	// (0x0001e351) grid_graphic2_catg_pane_ParamLimits

0xe782,	// (0x0001e351) grid_graphic2_catg_pane

0xe800,	// (0x0001e3cf) popup_grid_graphic2_window_t1_ParamLimits

0xe800,	// (0x0001e3cf) popup_grid_graphic2_window_t1

0xe812,	// (0x0001e3e1) popup_grid_graphic2_window_t2_ParamLimits

0xe812,	// (0x0001e3e1) popup_grid_graphic2_window_t2

0x0001,

0xfd78,	// (0x0001f947) popup_grid_graphic2_window_t_ParamLimits

0xfd78,	// (0x0001f947) popup_grid_graphic2_window_t

0x18ac,	// (0x0001147b) bg_button_pane_cp05_ParamLimits

0xe955,	// (0x0001e524) cell_graphic2_control_pane_g1_ParamLimits

0xea9d,	// (0x0001e66c) cell_graphic2_catg_pane_ParamLimits

0xea9d,	// (0x0001e66c) cell_graphic2_catg_pane

0x1433,	// (0x00011002) bg_button_pane_cp12

0xeaaf,	// (0x0001e67e) cell_graphic2_catg_pane_g1

0x7bd2,	// (0x000177a1) cell_tb_ext_pane_t1_ParamLimits

0xe558,	// (0x0001e127) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe558,	// (0x0001e127) vkb2_top_cell_right_narrow_pane

0xe570,	// (0x0001e13f) vkb2_top_cell_right_wide_pane_ParamLimits

0xe570,	// (0x0001e13f) vkb2_top_cell_right_wide_pane

0xdd91,	// (0x0001d960) bg_vkb2_func_pane_ParamLimits

0xdd91,	// (0x0001d960) bg_vkb2_func_pane

0xe5e1,	// (0x0001e1b0) vkb2_top_cell_left_pane_g1_ParamLimits

0xdd91,	// (0x0001d960) bg_vkb2_fuc_pane_cp03_ParamLimits

0xdd91,	// (0x0001d960) bg_vkb2_fuc_pane_cp03

0xe63f,	// (0x0001e20e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x395c,	// (0x0001352b) bg_vkb2_func_pane_g1

0x3954,	// (0x00013523) bg_vkb2_func_pane_g2

0x3964,	// (0x00013533) bg_vkb2_func_pane_g3

0x396c,	// (0x0001353b) bg_vkb2_func_pane_g4

0x3974,	// (0x00013543) bg_vkb2_func_pane_g5

0x397c,	// (0x0001354b) bg_vkb2_func_pane_g6

0x398c,	// (0x0001355b) bg_vkb2_func_pane_g7

0x3984,	// (0x00013553) bg_vkb2_func_pane_g8

0x394c,	// (0x0001351b) bg_vkb2_func_pane_g9

0x0008,

0xfdcc,	// (0x0001f99b) bg_vkb2_func_pane_g

0xdd91,	// (0x0001d960) bg_vkb2_fuc_pane_cp01_ParamLimits

0xdd91,	// (0x0001d960) bg_vkb2_fuc_pane_cp01

0xe5e1,	// (0x0001e1b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe5e1,	// (0x0001e1b0) vkb2_top_cell_right_wide_pane_g1

0xdd91,	// (0x0001d960) bg_vkb2_fuc_pane_cp02_ParamLimits

0xdd91,	// (0x0001d960) bg_vkb2_fuc_pane_cp02

0xe63f,	// (0x0001e20e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe63f,	// (0x0001e20e) vkb2_top_cell_right_narrow_pane_g1

0x782b,	// (0x000173fa) aid_touch_area_decrease_ParamLimits

0x782b,	// (0x000173fa) aid_touch_area_decrease

0x7843,	// (0x00017412) aid_touch_area_increase_ParamLimits

0x7843,	// (0x00017412) aid_touch_area_increase

0x784f,	// (0x0001741e) aid_touch_area_mute_ParamLimits

0x784f,	// (0x0001741e) aid_touch_area_mute

0x786b,	// (0x0001743a) aid_touch_area_slider_ParamLimits

0x786b,	// (0x0001743a) aid_touch_area_slider

0x7951,	// (0x00017520) popup_slider_window_g4_ParamLimits

0x7951,	// (0x00017520) popup_slider_window_g4

0x795d,	// (0x0001752c) popup_slider_window_g5_ParamLimits

0x795d,	// (0x0001752c) popup_slider_window_g5

0x797f,	// (0x0001754e) popup_slider_window_g6_ParamLimits

0x797f,	// (0x0001754e) popup_slider_window_g6

0x79bd,	// (0x0001758c) popup_slider_window_t2_ParamLimits

0x79bd,	// (0x0001758c) popup_slider_window_t2

0x0001,

0xfcc6,	// (0x0001f895) popup_slider_window_t_ParamLimits

0xfcc6,	// (0x0001f895) popup_slider_window_t

0x79d5,	// (0x000175a4) slider_pane_ParamLimits

0x79d5,	// (0x000175a4) slider_pane

0x9dc6,	// (0x00019995) slider_pane_g1_ParamLimits

0x9dc6,	// (0x00019995) slider_pane_g1

0x9dda,	// (0x000199a9) slider_pane_g2_ParamLimits

0x9dda,	// (0x000199a9) slider_pane_g2

0x9df0,	// (0x000199bf) slider_pane_g3_ParamLimits

0x9df0,	// (0x000199bf) slider_pane_g3

0x0003,

0xfddf,	// (0x0001f9ae) slider_pane_g_ParamLimits

0xfddf,	// (0x0001f9ae) slider_pane_g

0xd843,	// (0x0001d412) popup_tb_float_extension_window_ParamLimits

0xd843,	// (0x0001d412) popup_tb_float_extension_window

0x9e1c,	// (0x000199eb) aid_size_cell_tb_float_ext

0x1433,	// (0x00011002) bg_popup_sub_window_cp28

0x9e27,	// (0x000199f6) grid_tb_float_ext_pane

0x9e2f,	// (0x000199fe) cell_tb_float_ext_pane_ParamLimits

0x9e2f,	// (0x000199fe) cell_tb_float_ext_pane

0x9e47,	// (0x00019a16) cell_tb_float_ext_pane_g1

0x9e50,	// (0x00019a1f) grid_highlight_pane_cp12

0xdecc,	// (0x0001da9b) cell_last_hwr_side_pane_ParamLimits

0xdecc,	// (0x0001da9b) cell_last_hwr_side_pane

0x60d0,	// (0x00015c9f) cell_last_hwr_side_pane_g1

0x9e59,	// (0x00019a28) cell_last_hwr_side_pane_g2

0x0001,

0xfde8,	// (0x0001f9b7) cell_last_hwr_side_pane_g

0xe515,	// (0x0001e0e4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe515,	// (0x0001e0e4) vkb2_area_bottom_space_btn_pane

0x6308,	// (0x00015ed7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9c97,	// (0x00019866) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xea86,	// (0x0001e655) cell_vkb2_top_candi_pane_t1_ParamLimits

0xeab8,	// (0x0001e687) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xeab8,	// (0x0001e687) vkb2_area_bottom_space_btn_pane_g1

0xeaee,	// (0x0001e6bd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xeaee,	// (0x0001e6bd) vkb2_area_bottom_space_btn_pane_g2

0xeb24,	// (0x0001e6f3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xeb24,	// (0x0001e6f3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfded,	// (0x0001f9bc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfded,	// (0x0001f9bc) vkb2_area_bottom_space_btn_pane_g

0xde40,	// (0x0001da0f) cel_fep_hwr_func_pane_ParamLimits

0xde40,	// (0x0001da0f) cel_fep_hwr_func_pane

0xde7c,	// (0x0001da4b) cell_hwr_side_button_pane_ParamLimits

0xde7c,	// (0x0001da4b) cell_hwr_side_button_pane

0x7c06,	// (0x000177d5) aid_area_touch_clock_ParamLimits

0x18ac,	// (0x0001147b) bg_uniindi_top_pane_ParamLimits

0x7c18,	// (0x000177e7) uniindi_top_pane_g1_ParamLimits

0x7c2e,	// (0x000177fd) uniindi_top_pane_g2_ParamLimits

0x7c3a,	// (0x00017809) uniindi_top_pane_g3_ParamLimits

0x7c4b,	// (0x0001781a) uniindi_top_pane_g4_ParamLimits

0xfcfe,	// (0x0001f8cd) uniindi_top_pane_g_ParamLimits

0x7c58,	// (0x00017827) uniindi_top_pane_t1_ParamLimits

0x18ac,	// (0x0001147b) bg_vkb2_func_pane_cp01_ParamLimits

0x18ac,	// (0x0001147b) bg_vkb2_func_pane_cp01

0x9e62,	// (0x00019a31) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e62,	// (0x00019a31) cel_fep_hwr_func_pane_g1

0x18ac,	// (0x0001147b) bg_vkb2_func_pane_cp02_ParamLimits

0x18ac,	// (0x0001147b) bg_vkb2_func_pane_cp02

0x9e62,	// (0x00019a31) cell_hwr_side_button_pane_g1_ParamLimits

0x9e62,	// (0x00019a31) cell_hwr_side_button_pane_g1

0x37b2,	// (0x00013381) status_pane_g4_ParamLimits

0x37b2,	// (0x00013381) status_pane_g4

0x37ca,	// (0x00013399) status_pane_t1

0x5eb2,	// (0x00015a81) form2_midp_gauge_slider_cont_pane

0x5eba,	// (0x00015a89) form2_midp_gauge_slider_pane_t1_ParamLimits

0x5ecc,	// (0x00015a9b) form2_midp_gauge_slider_pane_t2_ParamLimits

0x5ede,	// (0x00015aad) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad1,	// (0x0001f6a0) form2_midp_gauge_slider_pane_t_ParamLimits

0x5ef0,	// (0x00015abf) form2_midp_slider_pane_ParamLimits

0xe1d1,	// (0x0001dda0) aid_size_cell_func_vkb2_ParamLimits

0xe1d1,	// (0x0001dda0) aid_size_cell_func_vkb2

0x9e08,	// (0x000199d7) slider_pane_g4_ParamLimits

0x9e08,	// (0x000199d7) slider_pane_g4

0xeb6a,	// (0x0001e739) form2_midp_gauge_slider_pane_t2_cp01

0xeb78,	// (0x0001e747) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb78,	// (0x0001e747) form2_midp_gauge_slider_pane_t3_cp01

0xeb95,	// (0x0001e764) form2_midp_slider_pane_cp01

0x1433,	// (0x00011002) navi_smil_pane

0x9e92,	// (0x00019a61) navi_smil_pane_g1

0x9e9a,	// (0x00019a69) navi_smil_pane_t1

0x9e70,	// (0x00019a3f) form2_midp_slider_pane_g1

0x9e79,	// (0x00019a48) form2_midp_slider_pane_g2

0x9e81,	// (0x00019a50) form2_midp_slider_pane_g3

0x9e70,	// (0x00019a3f) form2_midp_slider_pane_g4

0xeb9e,	// (0x0001e76d) form2_midp_slider_pane_g5

0x0004,

0xfdf6,	// (0x0001f9c5) form2_midp_slider_pane_g

0xeb5a,	// (0x0001e729) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xeb5a,	// (0x0001e729) vkb2_area_bottom_space_btn_pane_g4

0x35f4,	// (0x000131c3) lc0_navi_pane_ParamLimits

0x35f4,	// (0x000131c3) lc0_navi_pane

0x366a,	// (0x00013239) lc0_stat_indi_pane_ParamLimits

0x366a,	// (0x00013239) lc0_stat_indi_pane

0x3681,	// (0x00013250) ls0_title_pane_ParamLimits

0x3681,	// (0x00013250) ls0_title_pane

0x2303,	// (0x00011ed2) bg_popup_sub_pane_cp14_ParamLimits

0x7bed,	// (0x000177bc) list_uniindi_pane_ParamLimits

0x7bf9,	// (0x000177c8) uniindi_top_pane_ParamLimits

0x7c94,	// (0x00017863) list_single_uniindi_pane_g1_ParamLimits

0x7ca7,	// (0x00017876) list_single_uniindi_pane_t1_ParamLimits

0xeba7,	// (0x0001e776) lc0_stat_clock_pane_ParamLimits

0xeba7,	// (0x0001e776) lc0_stat_clock_pane

0xebb4,	// (0x0001e783) lc0_stat_indi_pane_g1_ParamLimits

0xebb4,	// (0x0001e783) lc0_stat_indi_pane_g1

0xebc1,	// (0x0001e790) lc0_stat_indi_pane_g2_ParamLimits

0xebc1,	// (0x0001e790) lc0_stat_indi_pane_g2

0x0001,

0xfe01,	// (0x0001f9d0) lc0_stat_indi_pane_g_ParamLimits

0xfe01,	// (0x0001f9d0) lc0_stat_indi_pane_g

0xebce,	// (0x0001e79d) lc0_uni_indicator_pane_ParamLimits

0xebce,	// (0x0001e79d) lc0_uni_indicator_pane

0x9ea8,	// (0x00019a77) ls0_title_pane_g1_ParamLimits

0x9ea8,	// (0x00019a77) ls0_title_pane_g1

0xebdb,	// (0x0001e7aa) ls0_title_pane_t1_ParamLimits

0xebdb,	// (0x0001e7aa) ls0_title_pane_t1

0xec11,	// (0x0001e7e0) lc0_uni_indicator_pane_g1_ParamLimits

0xec11,	// (0x0001e7e0) lc0_uni_indicator_pane_g1

0x9ebc,	// (0x00019a8b) lc0_stat_clock_pane_t1

0x1433,	// (0x00011002) main_ai5_pane

0x9eca,	// (0x00019a99) ai5_sk_pane_ParamLimits

0x9eca,	// (0x00019a99) ai5_sk_pane

0xec23,	// (0x0001e7f2) cell_ai5_widget_pane_ParamLimits

0xec23,	// (0x0001e7f2) cell_ai5_widget_pane

0x9ed7,	// (0x00019aa6) aid_size_cell_widget_grid

0x9ee4,	// (0x00019ab3) bg_ai5_widget_pane_ParamLimits

0x9ee4,	// (0x00019ab3) bg_ai5_widget_pane

0xecb6,	// (0x0001e885) cell_ai5_widget_pane_g2

0xecca,	// (0x0001e899) cell_ai5_widget_pane_g3

0xece4,	// (0x0001e8b3) cell_ai5_widget_pane_g4

0xecf4,	// (0x0001e8c3) cell_ai5_widget_pane_g5

0xed04,	// (0x0001e8d3) cell_ai5_widget_pane_g6

0xed10,	// (0x0001e8df) cell_ai5_widget_pane_g7

0xed7c,	// (0x0001e94b) cell_ai5_widget_pane_t1_ParamLimits

0xed7c,	// (0x0001e94b) cell_ai5_widget_pane_t1

0xed99,	// (0x0001e968) cell_ai5_widget_pane_t2_ParamLimits

0xed99,	// (0x0001e968) cell_ai5_widget_pane_t2

0xedb1,	// (0x0001e980) cell_ai5_widget_pane_t3_ParamLimits

0xedb1,	// (0x0001e980) cell_ai5_widget_pane_t3

0xedc9,	// (0x0001e998) cell_ai5_widget_pane_t4_ParamLimits

0xedc9,	// (0x0001e998) cell_ai5_widget_pane_t4

0xedef,	// (0x0001e9be) cell_ai5_widget_pane_t5_ParamLimits

0xedef,	// (0x0001e9be) cell_ai5_widget_pane_t5

0x9f1e,	// (0x00019aed) cell_ai5_widget_pane_t6_ParamLimits

0x9f1e,	// (0x00019aed) cell_ai5_widget_pane_t6

0x9f30,	// (0x00019aff) cell_ai5_widget_pane_t7_ParamLimits

0x9f30,	// (0x00019aff) cell_ai5_widget_pane_t7

0xee0e,	// (0x0001e9dd) cell_ai5_widget_pane_t8_ParamLimits

0xee0e,	// (0x0001e9dd) cell_ai5_widget_pane_t8

0x000b,

0xfe21,	// (0x0001f9f0) cell_ai5_widget_pane_t_ParamLimits

0xfe21,	// (0x0001f9f0) cell_ai5_widget_pane_t

0xee91,	// (0x0001ea60) grid_ai5_widget_pane

0x2303,	// (0x00011ed2) highlight_cell_ai5_widget_pane_ParamLimits

0x2303,	// (0x00011ed2) highlight_cell_ai5_widget_pane

0xee9d,	// (0x0001ea6c) ai5_sk_left_pane

0xeea7,	// (0x0001ea76) ai5_sk_middle_pane

0xeeb1,	// (0x0001ea80) ai5_sk_right_pane

0x9f4f,	// (0x00019b1e) bg_ai5_widget_pane_g1_ParamLimits

0x9f4f,	// (0x00019b1e) bg_ai5_widget_pane_g1

0x9f5b,	// (0x00019b2a) bg_ai5_widget_pane_g2_ParamLimits

0x9f5b,	// (0x00019b2a) bg_ai5_widget_pane_g2

0x9f67,	// (0x00019b36) bg_ai5_widget_pane_g3_ParamLimits

0x9f67,	// (0x00019b36) bg_ai5_widget_pane_g3

0x9f73,	// (0x00019b42) bg_ai5_widget_pane_g4_ParamLimits

0x9f73,	// (0x00019b42) bg_ai5_widget_pane_g4

0x9f7f,	// (0x00019b4e) bg_ai5_widget_pane_g5_ParamLimits

0x9f7f,	// (0x00019b4e) bg_ai5_widget_pane_g5

0x9f8b,	// (0x00019b5a) bg_ai5_widget_pane_g6_ParamLimits

0x9f8b,	// (0x00019b5a) bg_ai5_widget_pane_g6

0x9f97,	// (0x00019b66) bg_ai5_widget_pane_g7_ParamLimits

0x9f97,	// (0x00019b66) bg_ai5_widget_pane_g7

0x9fa3,	// (0x00019b72) bg_ai5_widget_pane_g8_ParamLimits

0x9fa3,	// (0x00019b72) bg_ai5_widget_pane_g8

0x9faf,	// (0x00019b7e) bg_ai5_widget_pane_g9_ParamLimits

0x9faf,	// (0x00019b7e) bg_ai5_widget_pane_g9

0x0008,

0xfe3a,	// (0x0001fa09) bg_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0001fa09) bg_ai5_widget_pane_g

0x9fdf,	// (0x00019bae) cell_shortcut_ai5_widget_pane_ParamLimits

0x9fdf,	// (0x00019bae) cell_shortcut_ai5_widget_pane

0x9ff0,	// (0x00019bbf) bg_cell_shortcut_ai5_widget_pane

0x1a66,	// (0x00011635) cell_grid_ai5_widget_pane_g1

0x3100,	// (0x00012ccf) highlight_cell_shortcut_ai5_widget_pane

0x3954,	// (0x00013523) ai5_sk_left_pane_g1

0x9ff8,	// (0x00019bc7) ai5_sk_left_pane_g2

0xa000,	// (0x00019bcf) ai5_sk_left_pane_g3

0xa008,	// (0x00019bd7) ai5_sk_left_pane_g4

0x0003,

0xfe4d,	// (0x0001fa1c) ai5_sk_left_pane_g

0xa010,	// (0x00019bdf) ai5_sk_left_pane_t1

0x395c,	// (0x0001352b) ai5_sk_right_pane_g1

0xa01e,	// (0x00019bed) ai5_sk_right_pane_g2

0xa026,	// (0x00019bf5) ai5_sk_right_pane_g3

0xa02e,	// (0x00019bfd) ai5_sk_right_pane_g4

0x0003,

0xfe56,	// (0x0001fa25) ai5_sk_right_pane_g

0xa036,	// (0x00019c05) ai5_sk_right_pane_t1

0x395c,	// (0x0001352b) ai5_sk_middle_pane_g1

0x3954,	// (0x00013523) ai5_sk_middle_pane_g2

0x3974,	// (0x00013543) ai5_sk_middle_pane_g3

0xa026,	// (0x00019bf5) ai5_sk_middle_pane_g4

0xa000,	// (0x00019bcf) ai5_sk_middle_pane_g5

0xa044,	// (0x00019c13) ai5_sk_middle_pane_g6

0xeebb,	// (0x0001ea8a) ai5_sk_middle_pane_g7

0x0006,

0xfe5f,	// (0x0001fa2e) ai5_sk_middle_pane_g

0x3495,	// (0x00013064) aid_touch_area_size_lc0_ParamLimits

0x3495,	// (0x00013064) aid_touch_area_size_lc0

0xdfbf,	// (0x0001db8e) cell_hwr_candidate_pane_t1_ParamLimits

0x34af,	// (0x0001307e) aid_touch_navi_pane

0x3764,	// (0x00013333) status_dt_navi_pane_ParamLimits

0x3764,	// (0x00013333) status_dt_navi_pane

0x3771,	// (0x00013340) status_dt_sta_pane_ParamLimits

0x3771,	// (0x00013340) status_dt_sta_pane

0xeec3,	// (0x0001ea92) dt_sta_controll_pane

0xeed0,	// (0x0001ea9f) dt_sta_indi_pane

0xeee1,	// (0x0001eab0) dt_sta_title_pane

0x18ac,	// (0x0001147b) bg_dt_sta_indi_pane_ParamLimits

0x18ac,	// (0x0001147b) bg_dt_sta_indi_pane

0xeef4,	// (0x0001eac3) dt_sta_battery_pane

0xeefc,	// (0x0001eacb) dt_sta_indi_pane_g1

0xef05,	// (0x0001ead4) dt_sta_indi_pane_g2

0xef0e,	// (0x0001eadd) dt_sta_indi_pane_g3

0x0002,

0xfe6e,	// (0x0001fa3d) dt_sta_indi_pane_g

0xef17,	// (0x0001eae6) dt_sta_signal_pane

0x2303,	// (0x00011ed2) bg_dt_sta_title_pane_ParamLimits

0x2303,	// (0x00011ed2) bg_dt_sta_title_pane

0xef20,	// (0x0001eaef) dt_sta_title_pane_g1

0xef28,	// (0x0001eaf7) dt_sta_title_pane_t1_ParamLimits

0xef28,	// (0x0001eaf7) dt_sta_title_pane_t1

0x1433,	// (0x00011002) bg_dt_sta_control_pane

0xef3d,	// (0x0001eb0c) dt_sta_controll_pane_g1

0xef46,	// (0x0001eb15) bg_dt_sta_title_pane_g1

0xef4f,	// (0x0001eb1e) bg_dt_sta_title_pane_g2

0xef58,	// (0x0001eb27) bg_dt_sta_title_pane_g3

0x0002,

0xfe75,	// (0x0001fa44) bg_dt_sta_title_pane_g

0x60d0,	// (0x00015c9f) bg_dt_sta_indi_pane_g1

0xef61,	// (0x0001eb30) dt_sta_signal_pane_g1

0xef69,	// (0x0001eb38) dt_sta_signal_pane_g2

0x0001,

0xfe7c,	// (0x0001fa4b) dt_sta_signal_pane_g

0xa04c,	// (0x00019c1b) dt_sta_battery_pane_g1

0xa055,	// (0x00019c24) dt_sta_battery_pane_t1

0x60d0,	// (0x00015c9f) bg_dt_sta_control_pane_g1

0x2be0,	// (0x000127af) fep_china_uni_eep_pane

0x2be8,	// (0x000127b7) fep_china_uni_entry_pane_ParamLimits

0x2bf8,	// (0x000127c7) popup_fep_china_uni_window_g1_ParamLimits

0x2c08,	// (0x000127d7) popup_fep_china_uni_window_g2_ParamLimits

0x2c08,	// (0x000127d7) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0001f2c7) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0001f2c7) popup_fep_china_uni_window_g

0xa064,	// (0x00019c33) fep_china_uni_eep_pane_g1

0xa06c,	// (0x00019c3b) fep_china_uni_eep_pane_t1

0x9e89,	// (0x00019a58) aid_touch_area_size_smil_player

0x35ec,	// (0x000131bb) lc0_clock_pane

0x37be,	// (0x0001338d) status_pane_g5_ParamLimits

0x37be,	// (0x0001338d) status_pane_g5

0xd5b4,	// (0x0001d183) popup_keymap_window

0x3786,	// (0x00013355) status_icon_pane

0xecca,	// (0x0001e899) cell_ai5_widget_pane_g3_ParamLimits

0xece4,	// (0x0001e8b3) cell_ai5_widget_pane_g4_ParamLimits

0xecf4,	// (0x0001e8c3) cell_ai5_widget_pane_g5_ParamLimits

0xed1c,	// (0x0001e8eb) cell_ai5_widget_pane_g8_ParamLimits

0xed1c,	// (0x0001e8eb) cell_ai5_widget_pane_g8

0xed30,	// (0x0001e8ff) cell_ai5_widget_pane_g9_ParamLimits

0xed30,	// (0x0001e8ff) cell_ai5_widget_pane_g9

0xed44,	// (0x0001e913) cell_ai5_widget_pane_g10_ParamLimits

0xed44,	// (0x0001e913) cell_ai5_widget_pane_g10

0xa07b,	// (0x00019c4a) status_icon_pane_g1

0x1433,	// (0x00011002) bg_popup_sub_pane_cp13

0xa083,	// (0x00019c52) popup_keymap_window_t1

0x33df,	// (0x00012fae) control_pane_g6_ParamLimits

0x33df,	// (0x00012fae) control_pane_g6

0x33d2,	// (0x00012fa1) control_pane_g7_ParamLimits

0x33d2,	// (0x00012fa1) control_pane_g7

0x33c5,	// (0x00012f94) control_pane_g8_ParamLimits

0x33c5,	// (0x00012f94) control_pane_g8

0xeec3,	// (0x0001ea92) dt_sta_controll_pane_ParamLimits

0xeed0,	// (0x0001ea9f) dt_sta_indi_pane_ParamLimits

0xeee1,	// (0x0001eab0) dt_sta_title_pane_ParamLimits

0x1d3a,	// (0x00011909) aid_size_touch_scroll_bar_cale

0xcd3d,	// (0x0001c90c) popup_discreet_window_ParamLimits

0xcd3d,	// (0x0001c90c) popup_discreet_window

0xcda1,	// (0x0001c970) popup_sk_window

0x4030,	// (0x00013bff) bg_popup_sub_pane_cp28_ParamLimits

0x4030,	// (0x00013bff) bg_popup_sub_pane_cp28

0xa091,	// (0x00019c60) popup_discreet_window_g1_ParamLimits

0xa091,	// (0x00019c60) popup_discreet_window_g1

0xa0b1,	// (0x00019c80) popup_discreet_window_t1_ParamLimits

0xa0b1,	// (0x00019c80) popup_discreet_window_t1

0xa0cf,	// (0x00019c9e) popup_discreet_window_t2_ParamLimits

0xa0cf,	// (0x00019c9e) popup_discreet_window_t2

0x0002,

0xfe81,	// (0x0001fa50) popup_discreet_window_t_ParamLimits

0xfe81,	// (0x0001fa50) popup_discreet_window_t

0xef71,	// (0x0001eb40) popup_sk_window_g1

0xef7a,	// (0x0001eb49) popup_sk_window_g2

0x0001,

0xfe88,	// (0x0001fa57) popup_sk_window_g

0xef83,	// (0x0001eb52) popup_sk_window_t1

0xef91,	// (0x0001eb60) popup_sk_window_t1_copy1

0xecb6,	// (0x0001e885) cell_ai5_widget_pane_g2_ParamLimits

0xee20,	// (0x0001e9ef) cell_ai5_widget_pane_t9_ParamLimits

0xee20,	// (0x0001e9ef) cell_ai5_widget_pane_t9

0x1433,	// (0x00011002) main_fep_fshwr2_pane

0xef9f,	// (0x0001eb6e) aid_fshwr2_btn_pane

0xefaf,	// (0x0001eb7e) aid_fshwr2_syb_pane

0xefc3,	// (0x0001eb92) aid_fshwr2_txt_pane

0xefd3,	// (0x0001eba2) fshwr2_func_candi_pane

0xefeb,	// (0x0001ebba) fshwr2_hwr_syb_pane

0xeffd,	// (0x0001ebcc) fshwr2_icf_pane

0x1433,	// (0x00011002) fshwr2_icf_bg_pane

0xf025,	// (0x0001ebf4) fshwr2_icf_pane_t1_ParamLimits

0xf025,	// (0x0001ebf4) fshwr2_icf_pane_t1

0x2ad1,	// (0x000126a0) fshwr2_func_candi_pane_g1

0xf03d,	// (0x0001ec0c) fshwr2_func_candi_row_pane_ParamLimits

0xf03d,	// (0x0001ec0c) fshwr2_func_candi_row_pane

0xf060,	// (0x0001ec2f) cell_fshwr2_syb_pane_ParamLimits

0xf060,	// (0x0001ec2f) cell_fshwr2_syb_pane

0x9e62,	// (0x00019a31) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9e62,	// (0x00019a31) fshwr2_hwr_syb_pane_g1

0x1433,	// (0x00011002) bg_popup_call_pane_cp01

0xf07f,	// (0x0001ec4e) fshwr2_func_candi_cell_pane_ParamLimits

0xf07f,	// (0x0001ec4e) fshwr2_func_candi_cell_pane

0x4658,	// (0x00014227) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x4658,	// (0x00014227) fshwr2_func_candi_cell_bg_pane

0xf0be,	// (0x0001ec8d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0be,	// (0x0001ec8d) fshwr2_func_candi_cell_pane_g1

0xf0e9,	// (0x0001ecb8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf0e9,	// (0x0001ecb8) fshwr2_func_candi_cell_pane_t1

0x1433,	// (0x00011002) bg_button_pane_cp08

0x344f,	// (0x0001301e) cell_fshwr2_syb_bg_pane

0xf0fc,	// (0x0001eccb) cell_fshwr2_syb_bg_pane_g1

0xf110,	// (0x0001ecdf) cell_fshwr2_syb_bg_pane_t1

0x2303,	// (0x00011ed2) main_tmo_pane

0x4ae4,	// (0x000146b3) uni_indicator_pane_g1_ParamLimits

0x4af8,	// (0x000146c7) uni_indicator_pane_g2_ParamLimits

0x4b0d,	// (0x000146dc) uni_indicator_pane_g3_ParamLimits

0x4b22,	// (0x000146f1) uni_indicator_pane_g4_ParamLimits

0x4b22,	// (0x000146f1) uni_indicator_pane_g4

0x4b36,	// (0x00014705) uni_indicator_pane_g5_ParamLimits

0x4b36,	// (0x00014705) uni_indicator_pane_g5

0x4b36,	// (0x00014705) uni_indicator_pane_g6_ParamLimits

0x4b36,	// (0x00014705) uni_indicator_pane_g6

0xf8f7,	// (0x0001f4c6) uni_indicator_pane_g_ParamLimits

0x780f,	// (0x000173de) popup_tmo_note_window_ParamLimits

0x780f,	// (0x000173de) popup_tmo_note_window

0x2303,	// (0x00011ed2) fshwr2_bg_pane

0xf0da,	// (0x0001eca9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf0da,	// (0x0001eca9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8d,	// (0x0001fa5c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8d,	// (0x0001fa5c) fshwr2_func_candi_cell_pane_g

0x60d0,	// (0x00015c9f) bg_popup_window_pane_cp01

0xf126,	// (0x0001ecf5) bg_popup_window_pane_g1_cp01

0xa121,	// (0x00019cf0) bg_popup_window_pane_cp22_ParamLimits

0xa121,	// (0x00019cf0) bg_popup_window_pane_cp22

0xa12f,	// (0x00019cfe) listscroll_tmo_link_pane_ParamLimits

0xa12f,	// (0x00019cfe) listscroll_tmo_link_pane

0xa16f,	// (0x00019d3e) popup_tmo_note_window_g1_ParamLimits

0xa16f,	// (0x00019d3e) popup_tmo_note_window_g1

0xa17c,	// (0x00019d4b) tmo_note_info_pane_ParamLimits

0xa17c,	// (0x00019d4b) tmo_note_info_pane

0xf12f,	// (0x0001ecfe) list_tmo_note_info_pane_g1_ParamLimits

0xf12f,	// (0x0001ecfe) list_tmo_note_info_pane_g1

0xa196,	// (0x00019d65) list_tmo_note_info_pane_g2_ParamLimits

0xa196,	// (0x00019d65) list_tmo_note_info_pane_g2

0x0001,

0xfe92,	// (0x0001fa61) list_tmo_note_info_pane_g_ParamLimits

0xfe92,	// (0x0001fa61) list_tmo_note_info_pane_g

0xa1b2,	// (0x00019d81) list_tmo_note_info_text_pane_ParamLimits

0xa1b2,	// (0x00019d81) list_tmo_note_info_text_pane

0xa1f4,	// (0x00019dc3) list_tmo_link_pane

0xa201,	// (0x00019dd0) scroll_pane_cp20

0xa20e,	// (0x00019ddd) list_single_tmo_link_pane_ParamLimits

0xa20e,	// (0x00019ddd) list_single_tmo_link_pane

0xa21e,	// (0x00019ded) list_single_tmo_link_pane_t1

0xa22c,	// (0x00019dfb) list_tmo_note_info_text_pane_t1_ParamLimits

0xa22c,	// (0x00019dfb) list_tmo_note_info_text_pane_t1

0x252b,	// (0x000120fa) aid_size_touch_scroll_bar_cp01_ParamLimits

0x252b,	// (0x000120fa) aid_size_touch_scroll_bar_cp01

0xc1b2,	// (0x0001bd81) aid_size_touch_slider_marker

0xcd8d,	// (0x0001c95c) popup_settings_window_ParamLimits

0xcd8d,	// (0x0001c95c) popup_settings_window

0xc35d,	// (0x0001bf2c) popup_candi_list_indi_window

0x34af,	// (0x0001307e) aid_touch_navi_pane_ParamLimits

0xe125,	// (0x0001dcf4) rs_clock_indi_pane

0xe12e,	// (0x0001dcfd) sctrl_sk_bottom_pane_ParamLimits

0xe13f,	// (0x0001dd0e) sctrl_sk_top_pane_ParamLimits

0xe223,	// (0x0001ddf2) popup_fep_tooltip_window

0x9ed7,	// (0x00019aa6) aid_size_cell_widget_grid_ParamLimits

0xeca2,	// (0x0001e871) cell_ai5_widget_pane_g1_ParamLimits

0xeca2,	// (0x0001e871) cell_ai5_widget_pane_g1

0xed04,	// (0x0001e8d3) cell_ai5_widget_pane_g6_ParamLimits

0xed10,	// (0x0001e8df) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe06,	// (0x0001f9d5) cell_ai5_widget_pane_g_ParamLimits

0xfe06,	// (0x0001f9d5) cell_ai5_widget_pane_g

0xee4f,	// (0x0001ea1e) cell_ai5_widget_pane_t10_ParamLimits

0xee4f,	// (0x0001ea1e) cell_ai5_widget_pane_t10

0xee91,	// (0x0001ea60) grid_ai5_widget_pane_ParamLimits

0x9fbb,	// (0x00019b8a) cell_contacts_ai5_widget_pane_ParamLimits

0x9fbb,	// (0x00019b8a) cell_contacts_ai5_widget_pane

0xa0e4,	// (0x00019cb3) popup_discreet_window_t3_ParamLimits

0xa0e4,	// (0x00019cb3) popup_discreet_window_t3

0xf013,	// (0x0001ebe2) popup_fshwr2_char_preview_window_ParamLimits

0xf013,	// (0x0001ebe2) popup_fshwr2_char_preview_window

0xf146,	// (0x0001ed15) tmo_note_info_pane_t1

0xf15b,	// (0x0001ed2a) tmo_note_info_pane_t2

0xf170,	// (0x0001ed3f) tmo_note_info_pane_t3

0xa1d0,	// (0x00019d9f) tmo_note_info_pane_t4

0xa1e2,	// (0x00019db1) tmo_note_info_pane_t5

0x0004,

0xfe97,	// (0x0001fa66) tmo_note_info_pane_t

0xa1f4,	// (0x00019dc3) list_tmo_link_pane_ParamLimits

0xa201,	// (0x00019dd0) scroll_pane_cp20_ParamLimits

0x1433,	// (0x00011002) bg_popup_fep_char_preview_window_cp01

0xa245,	// (0x00019e14) popup_fshwr2_char_preview_window_t1

0xa253,	// (0x00019e22) popup_candi_list_indi_window_g1

0xa25c,	// (0x00019e2b) bg_cell_contacts_ai5_widget_pane

0xa268,	// (0x00019e37) cell_contacts_ai5_widget_pane_g1

0xa27d,	// (0x00019e4c) cell_contacts_ai5_widget_pane_g2

0xa289,	// (0x00019e58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea2,	// (0x0001fa71) cell_contacts_ai5_widget_pane_g

0xa295,	// (0x00019e64) cell_contacts_ai5_widget_pane_t1

0x2303,	// (0x00011ed2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa30a,	// (0x00019ed9) settings_container_pane

0x3100,	// (0x00012ccf) listscroll_set_pane_copy1

0x5615,	// (0x000151e4) scroll_pane_cp121_copy1

0xa316,	// (0x00019ee5) set_content_pane_copy1

0xa31e,	// (0x00019eed) aid_height_set_list_copy1_ParamLimits

0xa31e,	// (0x00019eed) aid_height_set_list_copy1

0x4d0d,	// (0x000148dc) aid_size_parent_copy1_ParamLimits

0x4d0d,	// (0x000148dc) aid_size_parent_copy1

0xa32a,	// (0x00019ef9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa32a,	// (0x00019ef9) button_value_adjust_pane_cp6_copy1

0x344f,	// (0x0001301e) list_highlight_pane_cp2_copy1_ParamLimits

0x344f,	// (0x0001301e) list_highlight_pane_cp2_copy1

0xa33e,	// (0x00019f0d) list_set_pane_copy1_ParamLimits

0xa33e,	// (0x00019f0d) list_set_pane_copy1

0xa2a7,	// (0x00019e76) main_pane_set_t1_copy1_ParamLimits

0xa2a7,	// (0x00019e76) main_pane_set_t1_copy1

0xa2e1,	// (0x00019eb0) main_pane_set_t2_copy1_ParamLimits

0xa2e1,	// (0x00019eb0) main_pane_set_t2_copy1

0xa3cc,	// (0x00019f9b) main_pane_set_t3_copy1

0xa3da,	// (0x00019fa9) main_pane_set_t4_copy1

0xa2fe,	// (0x00019ecd) set_content_pane_g1_copy1_ParamLimits

0xa2fe,	// (0x00019ecd) set_content_pane_g1_copy1

0xa3e8,	// (0x00019fb7) setting_code_pane_copy1

0xa3f0,	// (0x00019fbf) setting_slider_graphic_pane_copy1

0xa3f0,	// (0x00019fbf) setting_slider_pane_copy1

0xa3f0,	// (0x00019fbf) setting_text_pane_copy1

0xa3f0,	// (0x00019fbf) setting_volume_pane_copy1

0xa3f8,	// (0x00019fc7) settings_code_pane_cp2_copy1

0xa400,	// (0x00019fcf) settings_code_pane_cp_copy1_ParamLimits

0xa400,	// (0x00019fcf) settings_code_pane_cp_copy1

0xf185,	// (0x0001ed54) volume_set_pane_copy1

0xa414,	// (0x00019fe3) volume_set_pane_g10_copy1

0xa41c,	// (0x00019feb) volume_set_pane_g1_copy1

0xa424,	// (0x00019ff3) volume_set_pane_g2_copy1

0xa42c,	// (0x00019ffb) volume_set_pane_g3_copy1

0xa434,	// (0x0001a003) volume_set_pane_g4_copy1

0xa43c,	// (0x0001a00b) volume_set_pane_g5_copy1

0xa444,	// (0x0001a013) volume_set_pane_g6_copy1

0xa44c,	// (0x0001a01b) volume_set_pane_g7_copy1

0xa454,	// (0x0001a023) volume_set_pane_g8_copy1

0xa45c,	// (0x0001a02b) volume_set_pane_g9_copy1

0x1604,	// (0x000111d3) bg_set_opt_pane_cp_copy1_ParamLimits

0x1604,	// (0x000111d3) bg_set_opt_pane_cp_copy1

0xf18d,	// (0x0001ed5c) setting_slider_pane_t1_copy1_ParamLimits

0xf18d,	// (0x0001ed5c) setting_slider_pane_t1_copy1

0xf1a4,	// (0x0001ed73) setting_slider_pane_t2_copy1_ParamLimits

0xf1a4,	// (0x0001ed73) setting_slider_pane_t2_copy1

0xf1bd,	// (0x0001ed8c) setting_slider_pane_t3_copy1_ParamLimits

0xf1bd,	// (0x0001ed8c) setting_slider_pane_t3_copy1

0xcebd,	// (0x0001ca8c) slider_set_pane_copy1_ParamLimits

0xcebd,	// (0x0001ca8c) slider_set_pane_copy1

0x2426,	// (0x00011ff5) set_opt_bg_pane_g1_copy2

0x242e,	// (0x00011ffd) set_opt_bg_pane_g2_copy2

0xa464,	// (0x0001a033) set_opt_bg_pane_g3_copy2

0x243e,	// (0x0001200d) set_opt_bg_pane_g4_copy2

0x2446,	// (0x00012015) set_opt_bg_pane_g5_copy2

0x244e,	// (0x0001201d) set_opt_bg_pane_g6_copy2

0xa46c,	// (0x0001a03b) set_opt_bg_pane_g7_copy2

0xa474,	// (0x0001a043) set_opt_bg_pane_g8_copy2

0xa47c,	// (0x0001a04b) set_opt_bg_pane_g9_copy2

0xdbb7,	// (0x0001d786) aid_size_touch_slider_mark_copy1_ParamLimits

0xdbb7,	// (0x0001d786) aid_size_touch_slider_mark_copy1

0x4e43,	// (0x00014a12) slider_set_pane_g1_copy1

0x4e4c,	// (0x00014a1b) slider_set_pane_g2_copy1

0xdbd7,	// (0x0001d7a6) slider_set_pane_g3_copy1_ParamLimits

0xdbd7,	// (0x0001d7a6) slider_set_pane_g3_copy1

0xdbeb,	// (0x0001d7ba) slider_set_pane_g4_copy1_ParamLimits

0xdbeb,	// (0x0001d7ba) slider_set_pane_g4_copy1

0xdc03,	// (0x0001d7d2) slider_set_pane_g5_copy1_ParamLimits

0xdc03,	// (0x0001d7d2) slider_set_pane_g5_copy1

0xdbd7,	// (0x0001d7a6) slider_set_pane_g6_copy1_ParamLimits

0xdbd7,	// (0x0001d7a6) slider_set_pane_g6_copy1

0xf1d4,	// (0x0001eda3) slider_set_pane_g7_copy1_ParamLimits

0xf1d4,	// (0x0001eda3) slider_set_pane_g7_copy1

0x1524,	// (0x000110f3) bg_set_opt_pane_cp2_copy1

0x1646,	// (0x00011215) setting_slider_graphic_pane_g1_copy1

0xf1ea,	// (0x0001edb9) setting_slider_graphic_pane_t1_copy1

0xf1f9,	// (0x0001edc8) setting_slider_graphic_pane_t2_copy1

0xf208,	// (0x0001edd7) slider_set_pane_cp_copy1

0xa48c,	// (0x0001a05b) input_focus_pane_cp1_copy1

0xa495,	// (0x0001a064) list_set_text_pane_copy1

0xa49d,	// (0x0001a06c) setting_text_pane_g1_copy1

0xcbd3,	// (0x0001c7a2) set_text_pane_t1_copy1

0xa48c,	// (0x0001a05b) input_focus_pane_cp2_copy1

0xa49d,	// (0x0001a06c) setting_code_pane_g1_copy1

0xa4bf,	// (0x0001a08e) setting_code_pane_t1_copy1

0x9c53,	// (0x00019822) list_set_graphic_pane_copy1

0x1524,	// (0x000110f3) bg_set_opt_pane_cp4_copy1

0x2e5c,	// (0x00012a2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x2e5c,	// (0x00012a2b) list_set_graphic_pane_g1_copy1

0xa4cd,	// (0x0001a09c) list_set_graphic_pane_g2_copy1

0x2e74,	// (0x00012a43) list_set_graphic_pane_t1_copy1_ParamLimits

0x2e74,	// (0x00012a43) list_set_graphic_pane_t1_copy1

0x60d0,	// (0x00015c9f) rs_clock_indi_pane_g1

0xa4d5,	// (0x0001a0a4) rs_clock_indi_pane_t1

0xa4e3,	// (0x0001a0b2) rs_indi_pane

0xa4eb,	// (0x0001a0ba) rs_indi_pane_g1

0xa4f4,	// (0x0001a0c3) rs_indi_pane_g2

0xa253,	// (0x00019e22) rs_indi_pane_g3

0x0002,

0xfea9,	// (0x0001fa78) rs_indi_pane_g

0x3100,	// (0x00012ccf) bg_popup_preview_window_pane_cp03

0xa4fd,	// (0x0001a0cc) popup_fep_tooltip_window_t1

0x6ebb,	// (0x00016a8a) popup_note2_window_g2_ParamLimits

0x6ebb,	// (0x00016a8a) popup_note2_window_g2

0x0001,

0xfc3d,	// (0x0001f80c) popup_note2_window_g_ParamLimits

0xfc3d,	// (0x0001f80c) popup_note2_window_g

0x749c,	// (0x0001706b) bg_popup_sub_pane_cp11_ParamLimits

0x74a9,	// (0x00017078) cell_ai3_links_pane_g1_ParamLimits

0x74c0,	// (0x0001708f) cell_ai3_links_pane_t1

0xcbd3,	// (0x0001c7a2) set_text_pane_t1_copy1_ParamLimits

0x3020,	// (0x00012bef) cell_graphic_popup_pane_cp2_ParamLimits

0x3020,	// (0x00012bef) cell_graphic_popup_pane_cp2

0xa50b,	// (0x0001a0da) cell_graphic_popup_pane_g1_cp2

0x1be9,	// (0x000117b8) cell_graphic_popup_pane_g2_cp2

0xa513,	// (0x0001a0e2) cell_graphic_popup_pane_g3_cp2

0xa51b,	// (0x0001a0ea) cell_graphic_popup_pane_t2_cp2

0x1bfa,	// (0x000117c9) grid_highlight_pane_cp3_cp2

0x2823,	// (0x000123f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2303,	// (0x00011ed2) main_tmo_pane_ParamLimits

0x7807,	// (0x000173d6) popup_tmo_big_image_note_window

0x9f16,	// (0x00019ae5) cell_ai5_widget_list_pane

0xec99,	// (0x0001e868) cell_ai5_widget_lrg_icon_pane

0xf146,	// (0x0001ed15) tmo_note_info_pane_t1_ParamLimits

0xf15b,	// (0x0001ed2a) tmo_note_info_pane_t2_ParamLimits

0xf170,	// (0x0001ed3f) tmo_note_info_pane_t3_ParamLimits

0xa1d0,	// (0x00019d9f) tmo_note_info_pane_t4_ParamLimits

0xa1e2,	// (0x00019db1) tmo_note_info_pane_t5_ParamLimits

0xfe97,	// (0x0001fa66) tmo_note_info_pane_t_ParamLimits

0xa30a,	// (0x00019ed9) settings_container_pane_ParamLimits

0xa484,	// (0x0001a053) indicator_popup_pane_cp5

0xa484,	// (0x0001a053) indicator_popup_pane_cp6

0x9c53,	// (0x00019822) list_set_graphic_pane_copy1_ParamLimits

0x1433,	// (0x00011002) bg_popup_window_pane_cp23

0xa529,	// (0x0001a0f8) popup_tmo_big_image_note_window_g1

0xa532,	// (0x0001a101) popup_tmo_big_image_note_window_t1

0xa540,	// (0x0001a10f) popup_tmo_big_image_note_window_t2

0xa54e,	// (0x0001a11d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb0,	// (0x0001fa7f) popup_tmo_big_image_note_window_t

0x60d0,	// (0x00015c9f) cell_ai5_widget_lrg_icon_pane_g1

0xa55c,	// (0x0001a12b) cell_ai5_widget_lrg_icon_pane_t1

0xf210,	// (0x0001eddf) cell_ai5_widget_list_row_pane_ParamLimits

0xf210,	// (0x0001eddf) cell_ai5_widget_list_row_pane

0xf227,	// (0x0001edf6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf227,	// (0x0001edf6) cell_ai5_widget_list_row_pane_g1

0xf234,	// (0x0001ee03) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf234,	// (0x0001ee03) cell_ai5_widget_list_row_pane_t1

0xf262,	// (0x0001ee31) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf262,	// (0x0001ee31) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb7,	// (0x0001fa86) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb7,	// (0x0001fa86) cell_ai5_widget_list_row_pane_t

0x1433,	// (0x00011002) main_fep_vtchi_ss_pane

0xa577,	// (0x0001a146) popup_fep_char_pre_window

0xa57f,	// (0x0001a14e) popup_fep_ituss_window

0xf2ba,	// (0x0001ee89) popup_fep_vkbss_window

0xa5ba,	// (0x0001a189) grid_vkbss_keypad_pane_ParamLimits

0xa5ba,	// (0x0001a189) grid_vkbss_keypad_pane

0xa5ca,	// (0x0001a199) ituss_keypad_pane

0xf2d5,	// (0x0001eea4) aid_vkbss_key_offset_ParamLimits

0xf2d5,	// (0x0001eea4) aid_vkbss_key_offset

0xf2e1,	// (0x0001eeb0) cell_vkbss_key_pane_ParamLimits

0xf2e1,	// (0x0001eeb0) cell_vkbss_key_pane

0xa5d6,	// (0x0001a1a5) bg_cell_vkbss_key_g1_ParamLimits

0xa5d6,	// (0x0001a1a5) bg_cell_vkbss_key_g1

0xa5e2,	// (0x0001a1b1) cell_vkbss_key_3p_pane_ParamLimits

0xa5e2,	// (0x0001a1b1) cell_vkbss_key_3p_pane

0xa618,	// (0x0001a1e7) cell_vkbss_key_g1_ParamLimits

0xa618,	// (0x0001a1e7) cell_vkbss_key_g1

0xa64e,	// (0x0001a21d) cell_vkbss_key_t1_ParamLimits

0xa64e,	// (0x0001a21d) cell_vkbss_key_t1

0xf315,	// (0x0001eee4) cell_ituss_key_pane_ParamLimits

0xf315,	// (0x0001eee4) cell_ituss_key_pane

0xa6be,	// (0x0001a28d) bg_cell_ituss_key_g1_ParamLimits

0xa6be,	// (0x0001a28d) bg_cell_ituss_key_g1

0xa6ca,	// (0x0001a299) cell_ituss_key_pane_g1_ParamLimits

0xa6ca,	// (0x0001a299) cell_ituss_key_pane_g1

0xf326,	// (0x0001eef5) cell_ituss_key_pane_g2_ParamLimits

0xf326,	// (0x0001eef5) cell_ituss_key_pane_g2

0x0005,

0xfebe,	// (0x0001fa8d) cell_ituss_key_pane_g_ParamLimits

0xfebe,	// (0x0001fa8d) cell_ituss_key_pane_g

0xf3aa,	// (0x0001ef79) cell_ituss_key_t1_ParamLimits

0xf3aa,	// (0x0001ef79) cell_ituss_key_t1

0xf3e0,	// (0x0001efaf) cell_ituss_key_t2_ParamLimits

0xf3e0,	// (0x0001efaf) cell_ituss_key_t2

0xf412,	// (0x0001efe1) cell_ituss_key_t3_ParamLimits

0xf412,	// (0x0001efe1) cell_ituss_key_t3

0xf443,	// (0x0001f012) cell_ituss_key_t4_ParamLimits

0xf443,	// (0x0001f012) cell_ituss_key_t4

0x0004,

0xfecb,	// (0x0001fa9a) cell_ituss_key_t_ParamLimits

0xfecb,	// (0x0001fa9a) cell_ituss_key_t

0xa700,	// (0x0001a2cf) cell_vkbss_key_3p_pane_g1

0xa6f8,	// (0x0001a2c7) cell_vkbss_key_3p_pane_g2

0xa6f0,	// (0x0001a2bf) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed6,	// (0x0001faa5) cell_vkbss_key_3p_pane_g

0x3100,	// (0x00012ccf) bg_popup_fep_char_preview_window_cp02

0xa708,	// (0x0001a2d7) popup_fep_char_pre_window_t1

0xec86,	// (0x0001e855) main_ai5_sk_pane

0xa25c,	// (0x00019e2b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa268,	// (0x00019e37) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa27d,	// (0x00019e4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa289,	// (0x00019e58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea2,	// (0x0001fa71) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa295,	// (0x00019e64) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2303,	// (0x00011ed2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf486,	// (0x0001f055) main_ai5_sk_pane_g1

0x3e7a,	// (0x00013a49) popup_query_code_window_g1

0xf2a5,	// (0x0001ee74) popup_fep_vkb_icf_pane

0xa591,	// (0x0001a160) popup_fep_vtchi_icf_pane

0xa716,	// (0x0001a2e5) bg_icf_pane

0xa716,	// (0x0001a2e5) list_vkb_icf_pane

0xa722,	// (0x0001a2f1) bg_icf_pane_cp01

0xa735,	// (0x0001a304) vtchi_icf_list_pane

0xf4cf,	// (0x0001f09e) list_vkb_icf_pane_t1_ParamLimits

0xf4cf,	// (0x0001f09e) list_vkb_icf_pane_t1

0xa745,	// (0x0001a314) vtchi_icf_list_pane_t1_ParamLimits

0xa745,	// (0x0001a314) vtchi_icf_list_pane_t1

0xa57f,	// (0x0001a14e) popup_fep_ituss_window_ParamLimits

0xa591,	// (0x0001a160) popup_fep_vtchi_icf_pane_ParamLimits

0xa5ca,	// (0x0001a199) ituss_keypad_pane_ParamLimits

0xf2cd,	// (0x0001ee9c) ituss_sks_pane

0xa716,	// (0x0001a2e5) bg_icf_pane_ParamLimits

0xf28a,	// (0x0001ee59) icf_edit_indi_pane_ParamLimits

0xf28a,	// (0x0001ee59) icf_edit_indi_pane

0xa716,	// (0x0001a2e5) list_vkb_icf_pane_ParamLimits

0xa722,	// (0x0001a2f1) bg_icf_pane_cp01_ParamLimits

0xa56a,	// (0x0001a139) icf_edit_indi_pane_cp01_ParamLimits

0xa56a,	// (0x0001a139) icf_edit_indi_pane_cp01

0xa73d,	// (0x0001a30c) vtchi_query_pane

0x9e62,	// (0x00019a31) icf_edit_indi_pane_g1_ParamLimits

0x9e62,	// (0x00019a31) icf_edit_indi_pane_g1

0xf4f9,	// (0x0001f0c8) icf_edit_indi_pane_g2_ParamLimits

0xf4f9,	// (0x0001f0c8) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x0001fad0) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x0001fad0) icf_edit_indi_pane_g

0xf50b,	// (0x0001f0da) icf_edit_indi_pane_t1

0xa75d,	// (0x0001a32c) bg_input_focus_pane_cp042

0xa766,	// (0x0001a335) vtchi_button_pane

0xa76f,	// (0x0001a33e) vtchi_query_pane_t1

0xa77d,	// (0x0001a34c) vtchi_query_pane_t2

0xa78b,	// (0x0001a35a) vtchi_query_pane_t3

0x0002,

0xfef0,	// (0x0001fabf) vtchi_query_pane_t

0x1433,	// (0x00011002) bg_button_pane_cp13

0xa799,	// (0x0001a368) vtchi_button_pane_g1

0xf4e7,	// (0x0001f0b6) ituss_sks_pane_g1

0xf4f0,	// (0x0001f0bf) ituss_sks_pane_g2

0x0001,

0xfef7,	// (0x0001fac6) ituss_sks_pane_g

0xa7af,	// (0x0001a37e) ituss_sks_pane_t1

0xa7a1,	// (0x0001a370) ituss_sks_pane_t2

0x0001,

0xfefc,	// (0x0001facb) ituss_sks_pane_t

0x5bcb,	// (0x0001579a) indicator_nsta_pane_cp_g1

0x5bd4,	// (0x000157a3) indicator_nsta_pane_cp_g2

0x5bdc,	// (0x000157ab) indicator_nsta_pane_cp_g3

0x5be4,	// (0x000157b3) indicator_nsta_pane_cp_g4

0x5bec,	// (0x000157bb) indicator_nsta_pane_cp_g5

0x5bf4,	// (0x000157c3) indicator_nsta_pane_cp_g6

0x0005,

0xfa87,	// (0x0001f656) indicator_nsta_pane_cp_g

0xe943,	// (0x0001e512) cell_graphic2_pane_t2_ParamLimits

0xe943,	// (0x0001e512) cell_graphic2_pane_t2

0x0001,

0xfd8d,	// (0x0001f95c) cell_graphic2_pane_t_ParamLimits

0xfd8d,	// (0x0001f95c) cell_graphic2_pane_t

0xe96f,	// (0x0001e53e) cell_graphic2_control_pane_t1

0x2b90,	// (0x0001275f) signal_pane_g3_ParamLimits

0x2b90,	// (0x0001275f) signal_pane_g3

0x2ba1,	// (0x00012770) signal_pane_g4_ParamLimits

0x2ba1,	// (0x00012770) signal_pane_g4

0xf274,	// (0x0001ee43) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf274,	// (0x0001ee43) cell_ai5_widget_list_row_pane_t3

0xa6de,	// (0x0001a2ad) cell_ituss_key_pane_t1_ParamLimits

0xa6de,	// (0x0001a2ad) cell_ituss_key_pane_t1

0x3af0,	// (0x000136bf) form_field_data_wide_pane_vc_t2_ParamLimits

0x3af0,	// (0x000136bf) form_field_data_wide_pane_vc_t2

0x3b02,	// (0x000136d1) form_field_data_wide_pane_vc_t3_ParamLimits

0x3b02,	// (0x000136d1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001f3ae) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001f3ae) form_field_data_wide_pane_vc_t

0x58b8,	// (0x00015487) form_field_slider_wide_pane_vc_t3_ParamLimits

0x58b8,	// (0x00015487) form_field_slider_wide_pane_vc_t3

0x5976,	// (0x00015545) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5976,	// (0x00015545) form_field_popup_wide_pane_vc_t2

0x598b,	// (0x0001555a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x598b,	// (0x0001555a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa76,	// (0x0001f645) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0001f645) form_field_popup_wide_pane_vc_t

0xef9f,	// (0x0001eb6e) aid_fshwr2_btn_pane_ParamLimits

0xefaf,	// (0x0001eb7e) aid_fshwr2_syb_pane_ParamLimits

0xefc3,	// (0x0001eb92) aid_fshwr2_txt_pane_ParamLimits

0x2303,	// (0x00011ed2) fshwr2_bg_pane_ParamLimits

0xefd3,	// (0x0001eba2) fshwr2_func_candi_pane_ParamLimits

0xefeb,	// (0x0001ebba) fshwr2_hwr_syb_pane_ParamLimits

0xeffd,	// (0x0001ebcc) fshwr2_icf_pane_ParamLimits

0xc7cb,	// (0x0001c39a) list_double_graphic_pane_vc_g4_ParamLimits

0xc7cb,	// (0x0001c39a) list_double_graphic_pane_vc_g4

0xf346,	// (0x0001ef15) cell_ituss_key_pane_g3_ParamLimits

0xf346,	// (0x0001ef15) cell_ituss_key_pane_g3

0xf474,	// (0x0001f043) cell_ituss_key_t5_ParamLimits

0xf474,	// (0x0001f043) cell_ituss_key_t5

0xf2ba,	// (0x0001ee89) popup_fep_vkbss_window_ParamLimits

0xec90,	// (0x0001e85f) aid_cell_ai5_quarter

0xf50b,	// (0x0001f0da) icf_edit_indi_pane_t1_ParamLimits

0x1954,	// (0x00011523) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x1954,	// (0x00011523) aid_tch_indicator_popup_pane_cp2

0x1967,	// (0x00011536) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x1967,	// (0x00011536) aid_tch_query_popup_data_pane_cp2

0x3e22,	// (0x000139f1) aid_tch_query_popup_pane_ParamLimits

0x3e22,	// (0x000139f1) aid_tch_query_popup_pane

0x3e22,	// (0x000139f1) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3e22,	// (0x000139f1) aid_tch_query_popup_data_pane_cp1

0x344f,	// (0x0001301e) cell_fshwr2_syb_bg_pane_ParamLimits

0xf0fc,	// (0x0001eccb) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf110,	// (0x0001ecdf) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2a5,	// (0x0001ee74) popup_fep_vkb_icf_pane_ParamLimits

0xea5d,	// (0x0001e62c) bg_popup_fep_char_preview_window_g10

0xed58,	// (0x0001e927) cell_ai5_widget_pane_g11_ParamLimits

0xed58,	// (0x0001e927) cell_ai5_widget_pane_g11

0xed64,	// (0x0001e933) cell_ai5_widget_pane_g12_ParamLimits

0xed64,	// (0x0001e933) cell_ai5_widget_pane_g12

0xed70,	// (0x0001e93f) cell_ai5_widget_pane_g13_ParamLimits

0xed70,	// (0x0001e93f) cell_ai5_widget_pane_g13

0xee6d,	// (0x0001ea3c) cell_ai5_widget_pane_t11_ParamLimits

0xee6d,	// (0x0001ea3c) cell_ai5_widget_pane_t11

0xee7f,	// (0x0001ea4e) cell_ai5_widget_pane_t12_ParamLimits

0xee7f,	// (0x0001ea4e) cell_ai5_widget_pane_t12

0xf352,	// (0x0001ef21) cell_ituss_key_pane_g4_ParamLimits

0xf352,	// (0x0001ef21) cell_ituss_key_pane_g4

0xf36e,	// (0x0001ef3d) cell_ituss_key_pane_g5_ParamLimits

0xf36e,	// (0x0001ef3d) cell_ituss_key_pane_g5

0xf38a,	// (0x0001ef59) cell_ituss_key_pane_g6_ParamLimits

0xf38a,	// (0x0001ef59) cell_ituss_key_pane_g6

0x394c,	// (0x0001351b) bg_icf_pane_g1

0xf48f,	// (0x0001f05e) bg_icf_pane_g2

0xf497,	// (0x0001f066) bg_icf_pane_g3

0xf49f,	// (0x0001f06e) bg_icf_pane_g4

0xf4a7,	// (0x0001f076) bg_icf_pane_g5

0xf4af,	// (0x0001f07e) bg_icf_pane_g6

0xf4b7,	// (0x0001f086) bg_icf_pane_g7

0xf4bf,	// (0x0001f08e) bg_icf_pane_g8

0xf4c7,	// (0x0001f096) bg_icf_pane_g9

0x0008,

0xfedd,	// (0x0001faac) bg_icf_pane_g

0xa5a7,	// (0x0001a176) popup_hyb_candi_window_ParamLimits

0xa5a7,	// (0x0001a176) popup_hyb_candi_window

0x3a64,	// (0x00013633) bg_popup_sub_pane_cp01_ParamLimits

0x3a64,	// (0x00013633) bg_popup_sub_pane_cp01

0xa7bd,	// (0x0001a38c) entry_hyb_candi_pane_ParamLimits

0xa7bd,	// (0x0001a38c) entry_hyb_candi_pane

0xa7cc,	// (0x0001a39b) grid_hyb_candi_pane_ParamLimits

0xa7cc,	// (0x0001a39b) grid_hyb_candi_pane

0xa862,	// (0x0001a431) grid_hyb_phrase_pane_ParamLimits

0xa862,	// (0x0001a431) grid_hyb_phrase_pane

0xa871,	// (0x0001a440) cell_hyb_candi_pane_ParamLimits

0xa871,	// (0x0001a440) cell_hyb_candi_pane

0xa889,	// (0x0001a458) cell_hyb_candi_scroll_pane

0x2ad1,	// (0x000126a0) cell_hyb_candi_pane_g1

0xa892,	// (0x0001a461) cell_hyb_candi_pane_t1

0xa8a0,	// (0x0001a46f) cell_hyb_phrase_pane

0x2ad1,	// (0x000126a0) cell_hyb_phrase_pane_g1

0xa8a9,	// (0x0001a478) cell_hyb_phrase_pane_t1

0xa8b7,	// (0x0001a486) entry_hyb_candi_pane_t1

0x3100,	// (0x00012ccf) input_focus_pane_cp06

0xa8c5,	// (0x0001a494) cell_hyb_candi_scroll_pane_g1

0xa8cd,	// (0x0001a49c) cell_hyb_candi_scroll_pane_g1_aid

0xa8d5,	// (0x0001a4a4) cell_hyb_candi_scroll_pane_g2

0xa8dd,	// (0x0001a4ac) cell_hyb_candi_scroll_pane_g2_aid

0xa8e5,	// (0x0001a4b4) cell_hyb_candi_scroll_pane_g3

0xa8ed,	// (0x0001a4bc) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
