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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001e255 };

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
0x960c,	// (0x00027861) Screen

0x9616,	// (0x0002786b) application_window_ParamLimits

0x9616,	// (0x0002786b) application_window

0x47d3,	// (0x00022a28) screen_g1

0x965f,	// (0x000278b4) area_bottom_pane_ParamLimits

0x965f,	// (0x000278b4) area_bottom_pane

0x47dd,	// (0x00022a32) area_top_pane_ParamLimits

0x47dd,	// (0x00022a32) area_top_pane

0x9717,	// (0x0002796c) main_pane_ParamLimits

0x9717,	// (0x0002796c) main_pane

0x4855,	// (0x00022aaa) misc_graphics

0xaa72,	// (0x00028cc7) battery_pane_ParamLimits

0xaa72,	// (0x00028cc7) battery_pane

0x633b,	// (0x00024590) bg_status_flat_pane_g8

0x6343,	// (0x00024598) bg_status_flat_pane_g9

0x5a4e,	// (0x00023ca3) context_pane_ParamLimits

0x5a4e,	// (0x00023ca3) context_pane

0xabaa,	// (0x00028dff) navi_pane_ParamLimits

0xabaa,	// (0x00028dff) navi_pane

0xac16,	// (0x00028e6b) signal_pane_ParamLimits

0xac16,	// (0x00028e6b) signal_pane

0x0008,

0xf84f,	// (0x0002daa4) bg_status_flat_pane_g

0xac77,	// (0x00028ecc) status_pane_g1_ParamLimits

0xac77,	// (0x00028ecc) status_pane_g1

0xac83,	// (0x00028ed8) status_pane_g2_ParamLimits

0xac83,	// (0x00028ed8) status_pane_g2

0x5ab4,	// (0x00023d09) status_pane_g3_ParamLimits

0x5ab4,	// (0x00023d09) status_pane_g3

0x0004,

0xf77b,	// (0x0002d9d0) status_pane_g_ParamLimits

0xf77b,	// (0x0002d9d0) status_pane_g

0xac8f,	// (0x00028ee4) title_pane_ParamLimits

0xac8f,	// (0x00028ee4) title_pane

0xaccc,	// (0x00028f21) uni_indicator_pane_ParamLimits

0xaccc,	// (0x00028f21) uni_indicator_pane

0x59a5,	// (0x00023bfa) bg_list_pane_ParamLimits

0x59a5,	// (0x00023bfa) bg_list_pane

0xd9d8,	// (0x0002bc2d) find_pane

0xa573,	// (0x000287c8) listscroll_app_pane_ParamLimits

0xa573,	// (0x000287c8) listscroll_app_pane

0x59c5,	// (0x00023c1a) listscroll_form_pane

0xd9e0,	// (0x0002bc35) listscroll_gen_pane_ParamLimits

0xd9e0,	// (0x0002bc35) listscroll_gen_pane

0xa57f,	// (0x000287d4) listscroll_set_pane

0x9ca9,	// (0x00027efe) main_idle_act_pane

0x5810,	// (0x00023a65) main_idle_trad_pane

0x5810,	// (0x00023a65) main_list_empty_pane

0x4ff2,	// (0x00023247) main_midp_pane

0x59df,	// (0x00023c34) main_pane_g1_ParamLimits

0x59df,	// (0x00023c34) main_pane_g1

0xa595,	// (0x000287ea) popup_ai_message_window_ParamLimits

0xa595,	// (0x000287ea) popup_ai_message_window

0xa62b,	// (0x00028880) popup_fep_china_uni_window_ParamLimits

0xa62b,	// (0x00028880) popup_fep_china_uni_window

0xa669,	// (0x000288be) popup_fep_japan_candidate_window_ParamLimits

0xa669,	// (0x000288be) popup_fep_japan_candidate_window

0xa687,	// (0x000288dc) popup_fep_japan_predictive_window_ParamLimits

0xa687,	// (0x000288dc) popup_fep_japan_predictive_window

0xa6b3,	// (0x00028908) popup_find_window

0xa6c0,	// (0x00028915) popup_grid_graphic_window_ParamLimits

0xa6c0,	// (0x00028915) popup_grid_graphic_window

0xa6de,	// (0x00028933) popup_large_graphic_colour_window

0xa6fd,	// (0x00028952) popup_menu_window_ParamLimits

0xa6fd,	// (0x00028952) popup_menu_window

0xa835,	// (0x00028a8a) popup_note_image_window

0xa823,	// (0x00028a78) popup_note_wait_window_ParamLimits

0xa823,	// (0x00028a78) popup_note_wait_window

0xa823,	// (0x00028a78) popup_note_window_ParamLimits

0xa823,	// (0x00028a78) popup_note_window

0xa889,	// (0x00028ade) popup_query_code_window_ParamLimits

0xa889,	// (0x00028ade) popup_query_code_window

0xa89b,	// (0x00028af0) popup_query_data_code_window_ParamLimits

0xa89b,	// (0x00028af0) popup_query_data_code_window

0xa8b0,	// (0x00028b05) popup_query_data_window_ParamLimits

0xa8b0,	// (0x00028b05) popup_query_data_window

0xa8c6,	// (0x00028b1b) popup_query_sat_info_window_ParamLimits

0xa8c6,	// (0x00028b1b) popup_query_sat_info_window

0xa8f7,	// (0x00028b4c) popup_snote_single_graphic_window_ParamLimits

0xa8f7,	// (0x00028b4c) popup_snote_single_graphic_window

0xa8f7,	// (0x00028b4c) popup_snote_single_text_window_ParamLimits

0xa8f7,	// (0x00028b4c) popup_snote_single_text_window

0xa90a,	// (0x00028b5f) popup_sub_window_general

0xaa0e,	// (0x00028c63) popup_window_general_ParamLimits

0xaa0e,	// (0x00028c63) popup_window_general

0x59ed,	// (0x00023c42) power_save_pane

0xa3e8,	// (0x0002863d) control_pane_g1_ParamLimits

0xa3e8,	// (0x0002863d) control_pane_g1

0xa409,	// (0x0002865e) control_pane_g2_ParamLimits

0xa409,	// (0x0002865e) control_pane_g2

0x5997,	// (0x00023bec) control_pane_g3_ParamLimits

0x5997,	// (0x00023bec) control_pane_g3

0x0007,

0xf763,	// (0x0002d9b8) control_pane_g_ParamLimits

0xf763,	// (0x0002d9b8) control_pane_g

0xa472,	// (0x000286c7) control_pane_t1_ParamLimits

0xa472,	// (0x000286c7) control_pane_t1

0xa4c4,	// (0x00028719) control_pane_t2_ParamLimits

0xa4c4,	// (0x00028719) control_pane_t2

0x0002,

0xf774,	// (0x0002d9c9) control_pane_t_ParamLimits

0xf774,	// (0x0002d9c9) control_pane_t

0x593f,	// (0x00023b94) navi_navi_volume_pane_cp1

0x5947,	// (0x00023b9c) status_small_icon_pane

0x594f,	// (0x00023ba4) status_small_pane_g1_ParamLimits

0x594f,	// (0x00023ba4) status_small_pane_g1

0xa367,	// (0x000285bc) status_small_pane_g2_ParamLimits

0xa367,	// (0x000285bc) status_small_pane_g2

0xa373,	// (0x000285c8) status_small_pane_g3_ParamLimits

0xa373,	// (0x000285c8) status_small_pane_g3

0xa37f,	// (0x000285d4) status_small_pane_g4_ParamLimits

0xa37f,	// (0x000285d4) status_small_pane_g4

0xa38b,	// (0x000285e0) status_small_pane_g5_ParamLimits

0xa38b,	// (0x000285e0) status_small_pane_g5

0x5983,	// (0x00023bd8) status_small_pane_g6_ParamLimits

0x5983,	// (0x00023bd8) status_small_pane_g6

0x0007,

0xf752,	// (0x0002d9a7) status_small_pane_g_ParamLimits

0xf752,	// (0x0002d9a7) status_small_pane_g

0xa3ba,	// (0x0002860f) status_small_pane_t1

0xa3d4,	// (0x00028629) status_small_wait_pane_ParamLimits

0xa3d4,	// (0x00028629) status_small_wait_pane

0x9fc4,	// (0x00028219) aid_levels_signal_ParamLimits

0x9fc4,	// (0x00028219) aid_levels_signal

0x9fd5,	// (0x0002822a) signal_pane_g1_ParamLimits

0x9fd5,	// (0x0002822a) signal_pane_g1

0x9feb,	// (0x00028240) signal_pane_g2_ParamLimits

0x9feb,	// (0x00028240) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002d938) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002d938) signal_pane_g

0x53b5,	// (0x0002360a) context_pane_g1

0x9916,	// (0x00027b6b) title_pane_g1

0x9940,	// (0x00027b95) title_pane_t1

0x486b,	// (0x00022ac0) title_pane_t2

0x4891,	// (0x00022ae6) title_pane_t3

0x0002,

0xf532,	// (0x0002d787) title_pane_t

0xace2,	// (0x00028f37) aid_levels_battery_ParamLimits

0xace2,	// (0x00028f37) aid_levels_battery

0xacf5,	// (0x00028f4a) battery_pane_g1_ParamLimits

0xacf5,	// (0x00028f4a) battery_pane_g1

0xad0a,	// (0x00028f5f) battery_pane_g2_ParamLimits

0xad0a,	// (0x00028f5f) battery_pane_g2

0x0001,

0xf786,	// (0x0002d9db) battery_pane_g_ParamLimits

0xf786,	// (0x0002d9db) battery_pane_g

0xb0eb,	// (0x00029340) uni_indicator_pane_g1

0xb0ff,	// (0x00029354) uni_indicator_pane_g2

0xb114,	// (0x00029369) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0002db4c) uni_indicator_pane_g

0x4f66,	// (0x000231bb) navi_icon_pane_ParamLimits

0x4f66,	// (0x000231bb) navi_icon_pane

0x4855,	// (0x00022aaa) navi_midp_pane

0x4855,	// (0x00022aaa) navi_navi_pane

0x4f66,	// (0x000231bb) navi_text_pane_ParamLimits

0x4f66,	// (0x000231bb) navi_text_pane

0x47d3,	// (0x00022a28) status_small_wait_pane_g1

0x4ba6,	// (0x00022dfb) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0002db47) status_small_wait_pane_g

0x6cec,	// (0x00024f41) navi_navi_icon_text_pane

0x6d06,	// (0x00024f5b) navi_navi_pane_g1_ParamLimits

0x6d06,	// (0x00024f5b) navi_navi_pane_g1

0x6cf4,	// (0x00024f49) navi_navi_pane_g2_ParamLimits

0x6cf4,	// (0x00024f49) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0002db15) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0002db15) navi_navi_pane_g

0x6d18,	// (0x00024f6d) navi_navi_tabs_pane

0x6cec,	// (0x00024f41) navi_navi_text_pane

0x6cec,	// (0x00024f41) navi_navi_volume_pane

0x6881,	// (0x00024ad6) navi_text_pane_t1

0x6875,	// (0x00024aca) navi_icon_pane_g1

0x67c9,	// (0x00024a1e) navi_navi_text_pane_t1

0xb0b5,	// (0x0002930a) navi_navi_volume_pane_g1

0xb0bd,	// (0x00029312) volume_small_pane

0xb027,	// (0x0002927c) navi_navi_icon_text_pane_g1

0xb02f,	// (0x00029284) navi_navi_icon_text_pane_t1

0x6383,	// (0x000245d8) navi_tabs_2_long_pane

0x6383,	// (0x000245d8) navi_tabs_2_pane

0x6383,	// (0x000245d8) navi_tabs_3_long_pane

0x6383,	// (0x000245d8) navi_tabs_3_pane

0x6383,	// (0x000245d8) navi_tabs_4_pane

0xb007,	// (0x0002925c) tabs_2_active_pane_ParamLimits

0xb007,	// (0x0002925c) tabs_2_active_pane

0xb017,	// (0x0002926c) tabs_2_passive_pane_ParamLimits

0xb017,	// (0x0002926c) tabs_2_passive_pane

0xafd5,	// (0x0002922a) tabs_3_active_pane_ParamLimits

0xafd5,	// (0x0002922a) tabs_3_active_pane

0xafe5,	// (0x0002923a) tabs_3_passive_pane_ParamLimits

0xafe5,	// (0x0002923a) tabs_3_passive_pane

0xaff6,	// (0x0002924b) tabs_3_passive_pane_cp_ParamLimits

0xaff6,	// (0x0002924b) tabs_3_passive_pane_cp

0xaf91,	// (0x000291e6) tabs_4_active_pane_ParamLimits

0xaf91,	// (0x000291e6) tabs_4_active_pane

0xafa2,	// (0x000291f7) tabs_4_passive_pane_ParamLimits

0xafa2,	// (0x000291f7) tabs_4_passive_pane

0xafb3,	// (0x00029208) tabs_4_passive_pane_cp_ParamLimits

0xafb3,	// (0x00029208) tabs_4_passive_pane_cp

0xafc4,	// (0x00029219) tabs_4_passive_pane_cp2_ParamLimits

0xafc4,	// (0x00029219) tabs_4_passive_pane_cp2

0xaf71,	// (0x000291c6) tabs_2_long_active_pane_ParamLimits

0xaf71,	// (0x000291c6) tabs_2_long_active_pane

0xaf81,	// (0x000291d6) tabs_2_long_passive_pane_ParamLimits

0xaf81,	// (0x000291d6) tabs_2_long_passive_pane

0xaf3c,	// (0x00029191) tabs_3_long_active_pane_ParamLimits

0xaf3c,	// (0x00029191) tabs_3_long_active_pane

0xaf4d,	// (0x000291a2) tabs_3_long_passive_pane_ParamLimits

0xaf4d,	// (0x000291a2) tabs_3_long_passive_pane

0xaf60,	// (0x000291b5) tabs_3_long_passive_pane_cp_ParamLimits

0xaf60,	// (0x000291b5) tabs_3_long_passive_pane_cp

0xaee2,	// (0x00029137) volume_small_pane_g1

0xaeeb,	// (0x00029140) volume_small_pane_g2

0xaef4,	// (0x00029149) volume_small_pane_g3

0xaefd,	// (0x00029152) volume_small_pane_g4

0xaf06,	// (0x0002915b) volume_small_pane_g5

0xaf0f,	// (0x00029164) volume_small_pane_g6

0xaf18,	// (0x0002916d) volume_small_pane_g7

0xaf21,	// (0x00029176) volume_small_pane_g8

0xaf2a,	// (0x0002917f) volume_small_pane_g9

0xaf33,	// (0x00029188) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0002dae1) volume_small_pane_g

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp2_ParamLimits

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp2

0x48b1,	// (0x00022b06) tabs_3_active_pane_g1

0x99a8,	// (0x00027bfd) tabs_3_active_pane_t1

0x48b9,	// (0x00022b0e) bg_passive_tab_pane_cp2_ParamLimits

0x48b9,	// (0x00022b0e) bg_passive_tab_pane_cp2

0x48b1,	// (0x00022b06) tabs_3_passive_pane_g1

0x99a8,	// (0x00027bfd) tabs_3_passive_pane_t1

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp3_ParamLimits

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp3

0x99ba,	// (0x00027c0f) tabs_4_active_pane_g1

0x99c2,	// (0x00027c17) tabs_4_active_pane_t1

0x48b9,	// (0x00022b0e) bg_passive_tab_pane_cp3_ParamLimits

0x48b9,	// (0x00022b0e) bg_passive_tab_pane_cp3

0x99ba,	// (0x00027c0f) tabs_4_1_passive_pane_g1

0x99c2,	// (0x00027c17) tabs_4_1_passive_pane_t1

0x4ff2,	// (0x00023247) list_highlight_pane_cp2

0xb225,	// (0x0002947a) list_set_pane_ParamLimits

0xb225,	// (0x0002947a) list_set_pane

0xb2b3,	// (0x00029508) main_pane_set_t1_ParamLimits

0xb2b3,	// (0x00029508) main_pane_set_t1

0xb2d3,	// (0x00029528) main_pane_set_t2_ParamLimits

0xb2d3,	// (0x00029528) main_pane_set_t2

0xb2e5,	// (0x0002953a) main_pane_set_t3_ParamLimits

0xb2e5,	// (0x0002953a) main_pane_set_t3

0xb2f7,	// (0x0002954c) main_pane_set_t4_ParamLimits

0xb2f7,	// (0x0002954c) main_pane_set_t4

0x0003,

0xf95c,	// (0x0002dbb1) main_pane_set_t_ParamLimits

0xf95c,	// (0x0002dbb1) main_pane_set_t

0xb309,	// (0x0002955e) setting_code_pane

0xb311,	// (0x00029566) setting_slider_graphic_pane

0xb311,	// (0x00029566) setting_slider_pane

0xb311,	// (0x00029566) setting_text_pane

0xb311,	// (0x00029566) setting_volume_pane

0x99d4,	// (0x00027c29) volume_set_pane

0x48b9,	// (0x00022b0e) bg_set_opt_pane_cp

0x99dc,	// (0x00027c31) setting_slider_pane_t1

0x99f2,	// (0x00027c47) setting_slider_pane_t2

0x9a0b,	// (0x00027c60) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002d78e) setting_slider_pane_t

0x9a22,	// (0x00027c77) slider_set_pane

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp2

0x48c7,	// (0x00022b1c) setting_slider_graphic_pane_g1

0x9a38,	// (0x00027c8d) setting_slider_graphic_pane_t1

0x9a47,	// (0x00027c9c) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002d795) setting_slider_graphic_pane_t

0x9a56,	// (0x00027cab) slider_set_pane_cp

0x4855,	// (0x00022aaa) input_focus_pane_cp1

0x6cbd,	// (0x00024f12) list_set_text_pane

0x47d3,	// (0x00022a28) setting_text_pane_g1

0x4855,	// (0x00022aaa) input_focus_pane_cp2

0x47d3,	// (0x00022a28) setting_code_pane_g1

0x48d0,	// (0x00022b25) setting_code_pane_t1

0xd276,	// (0x0002b4cb) set_text_pane_t1_ParamLimits

0xd276,	// (0x0002b4cb) set_text_pane_t1

0x4eb4,	// (0x00023109) set_opt_bg_pane_g1

0x4ebc,	// (0x00023111) set_opt_bg_pane_g2

0xb1f1,	// (0x00029446) set_opt_bg_pane_g3

0x4ecc,	// (0x00023121) set_opt_bg_pane_g4

0x4ed4,	// (0x00023129) set_opt_bg_pane_g5

0x4edc,	// (0x00023131) set_opt_bg_pane_g6

0xb1f9,	// (0x0002944e) set_opt_bg_pane_g7

0xb201,	// (0x00029456) set_opt_bg_pane_g8

0xb209,	// (0x0002945e) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0002db9e) set_opt_bg_pane_g

0x6cb0,	// (0x00024f05) slider_set_pane_g1

0xb18d,	// (0x000293e2) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0002db8f) slider_set_pane_g

0xb129,	// (0x0002937e) volume_set_pane_g1

0xb131,	// (0x00029386) volume_set_pane_g2

0xb139,	// (0x0002938e) volume_set_pane_g3

0xb141,	// (0x00029396) volume_set_pane_g4

0xb149,	// (0x0002939e) volume_set_pane_g5

0xb151,	// (0x000293a6) volume_set_pane_g6

0xb159,	// (0x000293ae) volume_set_pane_g7

0xb161,	// (0x000293b6) volume_set_pane_g8

0xb169,	// (0x000293be) volume_set_pane_g9

0xb171,	// (0x000293c6) volume_set_pane_g10

0x0009,

0xf912,	// (0x0002db67) volume_set_pane_g

0x9a5e,	// (0x00027cb3) indicator_pane_ParamLimits

0x9a5e,	// (0x00027cb3) indicator_pane

0x9a6a,	// (0x00027cbf) main_idle_pane_g2_ParamLimits

0x9a6a,	// (0x00027cbf) main_idle_pane_g2

0x9a8e,	// (0x00027ce3) main_pane_idle_g1_ParamLimits

0x9a8e,	// (0x00027ce3) main_pane_idle_g1

0x48de,	// (0x00022b33) popup_clock_digital_analogue_window_ParamLimits

0x48de,	// (0x00022b33) popup_clock_digital_analogue_window

0x9a9b,	// (0x00027cf0) soft_indicator_pane_ParamLimits

0x9a9b,	// (0x00027cf0) soft_indicator_pane

0x9aa7,	// (0x00027cfc) wallpaper_pane_ParamLimits

0x9aa7,	// (0x00027cfc) wallpaper_pane

0x47d3,	// (0x00022a28) wallpaper_pane_g1

0x9ab3,	// (0x00027d08) indicator_pane_g1_ParamLimits

0x9ab3,	// (0x00027d08) indicator_pane_g1

0x6e31,	// (0x00025086) navi_navi_icon_text_pane_srt_g1

0x490c,	// (0x00022b61) soft_indicator_pane_t1

0x4926,	// (0x00022b7b) aid_ps_area_pane

0x9abf,	// (0x00027d14) aid_ps_clock_pane

0x4937,	// (0x00022b8c) aid_ps_indicator_pane

0x4943,	// (0x00022b98) indicator_ps_pane_ParamLimits

0x4943,	// (0x00022b98) indicator_ps_pane

0x4952,	// (0x00022ba7) power_save_pane_g1_ParamLimits

0x4952,	// (0x00022ba7) power_save_pane_g1

0x495e,	// (0x00022bb3) power_save_pane_g2_ParamLimits

0x495e,	// (0x00022bb3) power_save_pane_g2

0x9624,	// (0x00027879) aid_navinavi_width_pane

0x4926,	// (0x00022b7b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002d79a) power_save_pane_g_ParamLimits

0xf545,	// (0x0002d79a) power_save_pane_g

0x496c,	// (0x00022bc1) power_save_pane_t1_ParamLimits

0x496c,	// (0x00022bc1) power_save_pane_t1

0x9abf,	// (0x00027d14) aid_ps_clock_pane_ParamLimits

0x4937,	// (0x00022b8c) aid_ps_indicator_pane_ParamLimits

0x497e,	// (0x00022bd3) power_save_pane_t4_ParamLimits

0x497e,	// (0x00022bd3) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002d79f) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002d79f) power_save_pane_t

0x49a8,	// (0x00022bfd) power_save_t3_ParamLimits

0x49a8,	// (0x00022bfd) power_save_t3

0x4993,	// (0x00022be8) power_save_t2_ParamLimits

0x4993,	// (0x00022be8) power_save_t2

0x49bd,	// (0x00022c12) indicator_ps_pane_g1

0x9acb,	// (0x00027d20) ai_gene_pane_ParamLimits

0x9acb,	// (0x00027d20) ai_gene_pane

0x9ad7,	// (0x00027d2c) ai_links_pane_ParamLimits

0x9ad7,	// (0x00027d2c) ai_links_pane

0x9ae3,	// (0x00027d38) indicator_pane_cp1_ParamLimits

0x9ae3,	// (0x00027d38) indicator_pane_cp1

0x9aef,	// (0x00027d44) main_pane_idle_g1_cp_ParamLimits

0x9aef,	// (0x00027d44) main_pane_idle_g1_cp

0x49c6,	// (0x00022c1b) popup_ai_links_title_window

0x9afb,	// (0x00027d50) soft_indicator_pane_cp1_ParamLimits

0x9afb,	// (0x00027d50) soft_indicator_pane_cp1

0x6b06,	// (0x00024d5b) ai_links_pane_g1

0x6b0f,	// (0x00024d64) grid_ai_links_pane

0xb0e2,	// (0x00029337) ai_gene_pane_1

0x6af4,	// (0x00024d49) ai_gene_pane_2

0x6afd,	// (0x00024d52) list_highlight_pane_cp4

0xb0c6,	// (0x0002931b) cell_ai_link_pane_ParamLimits

0xb0c6,	// (0x0002931b) cell_ai_link_pane

0x6aec,	// (0x00024d41) cell_ai_link_pane_g1

0x4ba6,	// (0x00022dfb) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0002db42) cell_ai_link_pane_g

0x4855,	// (0x00022aaa) grid_highlight_cp2

0x4855,	// (0x00022aaa) bg_popup_sub_pane_cp1

0x49dd,	// (0x00022c32) popup_ai_links_title_window_t1

0x6a3e,	// (0x00024c93) ai_gene_pane_1_g1_ParamLimits

0x6a3e,	// (0x00024c93) ai_gene_pane_1_g1

0x6a4a,	// (0x00024c9f) ai_gene_pane_1_g2_ParamLimits

0x6a4a,	// (0x00024c9f) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0002db38) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0002db38) ai_gene_pane_1_g

0x6a57,	// (0x00024cac) ai_gene_pane_1_t1_ParamLimits

0x6a57,	// (0x00024cac) ai_gene_pane_1_t1

0x6a8b,	// (0x00024ce0) grid_ai_soft_ind_pane

0x6a29,	// (0x00024c7e) ai_gene_pane_2_t1_ParamLimits

0x6a29,	// (0x00024c7e) ai_gene_pane_2_t1

0x9b07,	// (0x00027d5c) main_pane_empty_t1_ParamLimits

0x9b07,	// (0x00027d5c) main_pane_empty_t1

0x9b24,	// (0x00027d79) main_pane_empty_t2_ParamLimits

0x9b24,	// (0x00027d79) main_pane_empty_t2

0x9b3c,	// (0x00027d91) main_pane_empty_t3_ParamLimits

0x9b3c,	// (0x00027d91) main_pane_empty_t3

0x9b4f,	// (0x00027da4) main_pane_empty_t4_ParamLimits

0x9b4f,	// (0x00027da4) main_pane_empty_t4

0x9b62,	// (0x00027db7) main_pane_empty_t5_ParamLimits

0x9b62,	// (0x00027db7) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002d7a4) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002d7a4) main_pane_empty_t

0x4f66,	// (0x000231bb) bg_popup_window_pane_ParamLimits

0x4f66,	// (0x000231bb) bg_popup_window_pane

0x67d8,	// (0x00024a2d) find_popup_pane_cp2_ParamLimits

0x67d8,	// (0x00024a2d) find_popup_pane_cp2

0x67e4,	// (0x00024a39) heading_pane_ParamLimits

0x67e4,	// (0x00024a39) heading_pane

0x4855,	// (0x00022aaa) bg_popup_sub_pane

0xb049,	// (0x0002929e) bg_popup_window_pane_g1_ParamLimits

0xb049,	// (0x0002929e) bg_popup_window_pane_g1

0xb055,	// (0x000292aa) bg_popup_window_pane_g2_ParamLimits

0xb055,	// (0x000292aa) bg_popup_window_pane_g2

0xb061,	// (0x000292b6) bg_popup_window_pane_g3_ParamLimits

0xb061,	// (0x000292b6) bg_popup_window_pane_g3

0xb06d,	// (0x000292c2) bg_popup_window_pane_g4_ParamLimits

0xb06d,	// (0x000292c2) bg_popup_window_pane_g4

0xb079,	// (0x000292ce) bg_popup_window_pane_g5_ParamLimits

0xb079,	// (0x000292ce) bg_popup_window_pane_g5

0xb085,	// (0x000292da) bg_popup_window_pane_g6_ParamLimits

0xb085,	// (0x000292da) bg_popup_window_pane_g6

0xb091,	// (0x000292e6) bg_popup_window_pane_g7_ParamLimits

0xb091,	// (0x000292e6) bg_popup_window_pane_g7

0xb09d,	// (0x000292f2) bg_popup_window_pane_g8_ParamLimits

0xb09d,	// (0x000292f2) bg_popup_window_pane_g8

0xb0a9,	// (0x000292fe) bg_popup_window_pane_g9_ParamLimits

0xb0a9,	// (0x000292fe) bg_popup_window_pane_g9

0x67bd,	// (0x00024a12) bg_popup_window_pane_g10_ParamLimits

0x67bd,	// (0x00024a12) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0002db00) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0002db00) bg_popup_window_pane_g

0x6774,	// (0x000249c9) bg_popup_heading_pane_ParamLimits

0x6774,	// (0x000249c9) bg_popup_heading_pane

0xb472,	// (0x000296c7) tabs_4_passive_pane_cp_srt_ParamLimits

0xb472,	// (0x000296c7) tabs_4_passive_pane_cp_srt

0xb484,	// (0x000296d9) tabs_4_passive_pane_srt_ParamLimits

0x6788,	// (0x000249dd) heading_pane_g2

0xb484,	// (0x000296d9) tabs_4_passive_pane_srt

0x4ff2,	// (0x00023247) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4ff2,	// (0x00023247) bg_passive_tab_pane_cp3_srt

0x6790,	// (0x000249e5) heading_pane_t1_ParamLimits

0x6790,	// (0x000249e5) heading_pane_t1

0x67a7,	// (0x000249fc) heading_pane_t2_ParamLimits

0x67a7,	// (0x000249fc) heading_pane_t2

0x0001,

0xf8a6,	// (0x0002dafb) heading_pane_t_ParamLimits

0xf8a6,	// (0x0002dafb) heading_pane_t

0x6303,	// (0x00024558) bg_popup_heading_pane_g1

0x6394,	// (0x000245e9) bg_popup_heading_pane_g2

0x639c,	// (0x000245f1) bg_popup_heading_pane_g3

0x63a4,	// (0x000245f9) bg_popup_heading_pane_g4

0x63ac,	// (0x00024601) bg_popup_heading_pane_g5

0x63b4,	// (0x00024609) bg_popup_heading_pane_g6

0x63bc,	// (0x00024611) bg_popup_heading_pane_g7

0x63c4,	// (0x00024619) bg_popup_heading_pane_g8

0x63cc,	// (0x00024621) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0002dab7) bg_popup_heading_pane_g

0x5b9c,	// (0x00023df1) bg_popup_sub_pane_g1

0x5ba4,	// (0x00023df9) bg_popup_sub_pane_g2

0x5bac,	// (0x00023e01) bg_popup_sub_pane_g3

0x5bb4,	// (0x00023e09) bg_popup_sub_pane_g4

0x5bbc,	// (0x00023e11) bg_popup_sub_pane_g5

0x5bc4,	// (0x00023e19) bg_popup_sub_pane_g6

0x5bcc,	// (0x00023e21) bg_popup_sub_pane_g7

0x5bd4,	// (0x00023e29) bg_popup_sub_pane_g8

0x5bdc,	// (0x00023e31) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0002da91) bg_popup_sub_pane_g

0x48a3,	// (0x00022af8) bg_popup_window_pane_cp5_ParamLimits

0x48a3,	// (0x00022af8) bg_popup_window_pane_cp5

0x49fa,	// (0x00022c4f) popup_note_window_g1_ParamLimits

0x49fa,	// (0x00022c4f) popup_note_window_g1

0x4a06,	// (0x00022c5b) popup_note_window_t1_ParamLimits

0x4a06,	// (0x00022c5b) popup_note_window_t1

0x4a1c,	// (0x00022c71) popup_note_window_t2_ParamLimits

0x4a1c,	// (0x00022c71) popup_note_window_t2

0x4a32,	// (0x00022c87) popup_note_window_t3_ParamLimits

0x4a32,	// (0x00022c87) popup_note_window_t3

0x4a48,	// (0x00022c9d) popup_note_window_t4_ParamLimits

0x4a48,	// (0x00022c9d) popup_note_window_t4

0x4a70,	// (0x00022cc5) popup_note_window_t5_ParamLimits

0x4a70,	// (0x00022cc5) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002d7af) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002d7af) popup_note_window_t

0x4aba,	// (0x00022d0f) bg_popup_window_pane_cp6_ParamLimits

0x4aba,	// (0x00022d0f) bg_popup_window_pane_cp6

0x627f,	// (0x000244d4) popup_note_image_window_g1_ParamLimits

0x627f,	// (0x000244d4) popup_note_image_window_g1

0x628b,	// (0x000244e0) popup_note_image_window_g2_ParamLimits

0x628b,	// (0x000244e0) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0002da85) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0002da85) popup_note_image_window_g

0x62a4,	// (0x000244f9) popup_note_image_window_t1_ParamLimits

0x62a4,	// (0x000244f9) popup_note_image_window_t1

0x62bd,	// (0x00024512) popup_note_image_window_t2_ParamLimits

0x62bd,	// (0x00024512) popup_note_image_window_t2

0x62d6,	// (0x0002452b) popup_note_image_window_t3_ParamLimits

0x62d6,	// (0x0002452b) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0002da8a) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0002da8a) popup_note_image_window_t

0x616a,	// (0x000243bf) bg_popup_window_pane_cp7_ParamLimits

0x616a,	// (0x000243bf) bg_popup_window_pane_cp7

0x619a,	// (0x000243ef) popup_note_wait_window_g1_ParamLimits

0x619a,	// (0x000243ef) popup_note_wait_window_g1

0x61a6,	// (0x000243fb) popup_note_wait_window_g2_ParamLimits

0x61a6,	// (0x000243fb) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0002da73) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0002da73) popup_note_wait_window_g

0x61be,	// (0x00024413) popup_note_wait_window_t1_ParamLimits

0x61be,	// (0x00024413) popup_note_wait_window_t1

0x61e5,	// (0x0002443a) popup_note_wait_window_t2_ParamLimits

0x61e5,	// (0x0002443a) popup_note_wait_window_t2

0x6202,	// (0x00024457) popup_note_wait_window_t3_ParamLimits

0x6202,	// (0x00024457) popup_note_wait_window_t3

0x6215,	// (0x0002446a) popup_note_wait_window_t4_ParamLimits

0x6215,	// (0x0002446a) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0002da7a) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0002da7a) popup_note_wait_window_t

0x623a,	// (0x0002448f) wait_bar_pane_ParamLimits

0x623a,	// (0x0002448f) wait_bar_pane

0x4855,	// (0x00022aaa) wait_anim_pane

0x4855,	// (0x00022aaa) wait_border_pane

0x47d3,	// (0x00022a28) wait_anim_pane_g1

0x47d3,	// (0x00022a28) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002d933) wait_anim_pane_g

0x611a,	// (0x0002436f) wait_border_pane_g1

0x6123,	// (0x00024378) wait_border_pane_g2

0x612c,	// (0x00024381) wait_border_pane_g3

0x0002,

0xf817,	// (0x0002da6c) wait_border_pane_g

0x5f8a,	// (0x000241df) bg_popup_window_pane_cp16_ParamLimits

0x5f8a,	// (0x000241df) bg_popup_window_pane_cp16

0x608a,	// (0x000242df) indicator_popup_pane_cp4_ParamLimits

0x608a,	// (0x000242df) indicator_popup_pane_cp4

0x609e,	// (0x000242f3) popup_query_data_window_t1_ParamLimits

0x609e,	// (0x000242f3) popup_query_data_window_t1

0x60b0,	// (0x00024305) popup_query_data_window_t2_ParamLimits

0x60b0,	// (0x00024305) popup_query_data_window_t2

0x60c9,	// (0x0002431e) popup_query_data_window_t3_ParamLimits

0x60c9,	// (0x0002431e) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0002da65) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0002da65) popup_query_data_window_t

0x60e3,	// (0x00024338) query_popup_data_pane_ParamLimits

0x60e3,	// (0x00024338) query_popup_data_pane

0x60f7,	// (0x0002434c) query_popup_data_pane_cp1_ParamLimits

0x60f7,	// (0x0002434c) query_popup_data_pane_cp1

0x5f8a,	// (0x000241df) bg_popup_window_pane_cp10_ParamLimits

0x5f8a,	// (0x000241df) bg_popup_window_pane_cp10

0x5fbc,	// (0x00024211) indicator_popup_pane_ParamLimits

0x5fbc,	// (0x00024211) indicator_popup_pane

0x5fde,	// (0x00024233) popup_query_code_window_t1_ParamLimits

0x5fde,	// (0x00024233) popup_query_code_window_t1

0x5ff8,	// (0x0002424d) popup_query_code_window_t2_ParamLimits

0x5ff8,	// (0x0002424d) popup_query_code_window_t2

0x6041,	// (0x00024296) popup_query_code_window_t3_ParamLimits

0x6041,	// (0x00024296) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0002da5e) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0002da5e) popup_query_code_window_t

0x6070,	// (0x000242c5) query_popup_pane_ParamLimits

0x6070,	// (0x000242c5) query_popup_pane

0x4aba,	// (0x00022d0f) bg_popup_window_pane_cp15_ParamLimits

0x4aba,	// (0x00022d0f) bg_popup_window_pane_cp15

0x4ad8,	// (0x00022d2d) indicator_popup_pane_cp1_ParamLimits

0x4ad8,	// (0x00022d2d) indicator_popup_pane_cp1

0x4aeb,	// (0x00022d40) indicator_popup_pane_cp2_ParamLimits

0x4aeb,	// (0x00022d40) indicator_popup_pane_cp2

0x4afe,	// (0x00022d53) popup_query_data_code_window_g1_ParamLimits

0x4afe,	// (0x00022d53) popup_query_data_code_window_g1

0x4b11,	// (0x00022d66) popup_query_data_code_window_t1_ParamLimits

0x4b11,	// (0x00022d66) popup_query_data_code_window_t1

0x4b23,	// (0x00022d78) popup_query_data_code_window_t2_ParamLimits

0x4b23,	// (0x00022d78) popup_query_data_code_window_t2

0x4b35,	// (0x00022d8a) popup_query_data_code_window_t3_ParamLimits

0x4b35,	// (0x00022d8a) popup_query_data_code_window_t3

0x4b4b,	// (0x00022da0) popup_query_data_code_window_t4_ParamLimits

0x4b4b,	// (0x00022da0) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002d7ba) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002d7ba) popup_query_data_code_window_t

0xad69,	// (0x00028fbe) list_single_midp_graphic_pane_g3

0x4b63,	// (0x00022db8) query_popup_data_pane_cp2_ParamLimits

0x4b76,	// (0x00022dcb) query_popup_pane_cp2_ParamLimits

0x4b76,	// (0x00022dcb) query_popup_pane_cp2

0x4855,	// (0x00022aaa) bg_popup_window_pane_cp11

0x5f6e,	// (0x000241c3) heading_pane_cp5

0x5f76,	// (0x000241cb) listscroll_popup_info_pane

0x4855,	// (0x00022aaa) input_focus_pane_cp3

0x4b89,	// (0x00022dde) query_popup_pane_t1

0x4b97,	// (0x00022dec) list_popup_info_pane_ParamLimits

0x4b97,	// (0x00022dec) list_popup_info_pane

0x4ba6,	// (0x00022dfb) listscroll_popup_info_pane_g1

0x4bae,	// (0x00022e03) scroll_pane_cp7

0x4bb6,	// (0x00022e0b) popup_info_list_pane_t1_ParamLimits

0x4bb6,	// (0x00022e0b) popup_info_list_pane_t1

0x4bd0,	// (0x00022e25) popup_info_list_pane_t2_ParamLimits

0x4bd0,	// (0x00022e25) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002d7c3) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002d7c3) popup_info_list_pane_t

0x4855,	// (0x00022aaa) bg_popup_window_pane_cp12

0x6e4b,	// (0x000250a0) find_popup_pane

0x48b9,	// (0x00022b0e) bg_popup_window_pane_cp3

0x4bea,	// (0x00022e3f) heading_pane_cp3

0x4bf9,	// (0x00022e4e) listscroll_popup_graphic_pane

0x4855,	// (0x00022aaa) bg_popup_window_pane_cp4

0x9bc5,	// (0x00027e1a) heading_pane_cp4

0x4c08,	// (0x00022e5d) listscroll_popup_colour_pane

0x4c10,	// (0x00022e65) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4c10,	// (0x00022e65) cell_large_graphic_colour_none_popup_pane

0x9bcd,	// (0x00027e22) grid_large_graphic_colour_popup_pane_ParamLimits

0x9bcd,	// (0x00027e22) grid_large_graphic_colour_popup_pane

0x9be9,	// (0x00027e3e) listscroll_popup_colour_pane_g1_ParamLimits

0x9be9,	// (0x00027e3e) listscroll_popup_colour_pane_g1

0x9c00,	// (0x00027e55) listscroll_popup_colour_pane_g2_ParamLimits

0x9c00,	// (0x00027e55) listscroll_popup_colour_pane_g2

0x4c20,	// (0x00022e75) listscroll_popup_colour_pane_g3_ParamLimits

0x4c20,	// (0x00022e75) listscroll_popup_colour_pane_g3

0x9c14,	// (0x00027e69) listscroll_popup_colour_pane_g4_ParamLimits

0x9c14,	// (0x00027e69) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002d7c8) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002d7c8) listscroll_popup_colour_pane_g

0x4c30,	// (0x00022e85) scroll_pane_cp6_ParamLimits

0x4c30,	// (0x00022e85) scroll_pane_cp6

0x9c23,	// (0x00027e78) cell_large_graphic_colour_popup_pane_ParamLimits

0x9c23,	// (0x00027e78) cell_large_graphic_colour_popup_pane

0x4c42,	// (0x00022e97) cell_large_graphic_colour_none_popup_pane_t1

0x4855,	// (0x00022aaa) grid_highlight_pane_cp5

0x4c51,	// (0x00022ea6) cell_large_graphic_colour_popup_pane_g1

0x4c59,	// (0x00022eae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002d7d1) cell_large_graphic_colour_popup_pane_g

0x4c61,	// (0x00022eb6) cell_large_graphic_colour_popup_pane_g2_copy1

0x4c6a,	// (0x00022ebf) grid_highlight_pane_cp4

0x4c72,	// (0x00022ec7) bg_popup_window_pane_cp8_ParamLimits

0x4c72,	// (0x00022ec7) bg_popup_window_pane_cp8

0x4c8d,	// (0x00022ee2) popup_snote_single_text_window_g1_ParamLimits

0x4c8d,	// (0x00022ee2) popup_snote_single_text_window_g1

0x4c9f,	// (0x00022ef4) popup_snote_single_text_window_t1_ParamLimits

0x4c9f,	// (0x00022ef4) popup_snote_single_text_window_t1

0x4cb2,	// (0x00022f07) popup_snote_single_text_window_t2_ParamLimits

0x4cb2,	// (0x00022f07) popup_snote_single_text_window_t2

0x4cc5,	// (0x00022f1a) popup_snote_single_text_window_t3_ParamLimits

0x4cc5,	// (0x00022f1a) popup_snote_single_text_window_t3

0x4cfe,	// (0x00022f53) popup_snote_single_text_window_t4_ParamLimits

0x4cfe,	// (0x00022f53) popup_snote_single_text_window_t4

0x4d32,	// (0x00022f87) popup_snote_single_text_window_t5_ParamLimits

0x4d32,	// (0x00022f87) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002d7d6) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002d7d6) popup_snote_single_text_window_t

0x4d61,	// (0x00022fb6) bg_popup_window_pane_cp9_ParamLimits

0x4d61,	// (0x00022fb6) bg_popup_window_pane_cp9

0x4c8d,	// (0x00022ee2) popup_snote_single_graphic_window_g1_ParamLimits

0x4c8d,	// (0x00022ee2) popup_snote_single_graphic_window_g1

0x4d6f,	// (0x00022fc4) popup_snote_single_graphic_window_g2_ParamLimits

0x4d6f,	// (0x00022fc4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002d7e1) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002d7e1) popup_snote_single_graphic_window_g

0x4d7b,	// (0x00022fd0) popup_snote_single_graphic_window_t1_ParamLimits

0x4d7b,	// (0x00022fd0) popup_snote_single_graphic_window_t1

0x4d8e,	// (0x00022fe3) popup_snote_single_graphic_window_t2_ParamLimits

0x4d8e,	// (0x00022fe3) popup_snote_single_graphic_window_t2

0x4cc5,	// (0x00022f1a) popup_snote_single_graphic_window_t3_ParamLimits

0x4cc5,	// (0x00022f1a) popup_snote_single_graphic_window_t3

0x4cfe,	// (0x00022f53) popup_snote_single_graphic_window_t4_ParamLimits

0x4cfe,	// (0x00022f53) popup_snote_single_graphic_window_t4

0x4d32,	// (0x00022f87) popup_snote_single_graphic_window_t5_ParamLimits

0x4d32,	// (0x00022f87) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002d7e6) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002d7e6) popup_snote_single_graphic_window_t

0xb403,	// (0x00029658) grid_graphic_popup_pane_ParamLimits

0xb403,	// (0x00029658) grid_graphic_popup_pane

0xb426,	// (0x0002967b) listscroll_popup_graphic_pane_g1_ParamLimits

0xb426,	// (0x0002967b) listscroll_popup_graphic_pane_g1

0xb43a,	// (0x0002968f) listscroll_popup_graphic_pane_g2_ParamLimits

0xb43a,	// (0x0002968f) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0002dbdb) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0002dbdb) listscroll_popup_graphic_pane_g

0x6d4b,	// (0x00024fa0) scroll_pane_cp5

0xb3bd,	// (0x00029612) cell_graphic_popup_pane_ParamLimits

0xb3bd,	// (0x00029612) cell_graphic_popup_pane

0x6df4,	// (0x00025049) cell_graphic_popup_pane_g1

0x6dfc,	// (0x00025051) cell_graphic_popup_pane_g2

0x4c61,	// (0x00022eb6) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0002dbd4) cell_graphic_popup_pane_g

0x6e05,	// (0x0002505a) cell_graphic_popup_pane_t2

0x4c6a,	// (0x00022ebf) grid_highlight_pane_cp3

0x4db3,	// (0x00023008) list_gen_pane_ParamLimits

0x4db3,	// (0x00023008) list_gen_pane

0x4ddc,	// (0x00023031) scroll_pane

0xb38e,	// (0x000295e3) bg_list_pane_g1_ParamLimits

0xb38e,	// (0x000295e3) bg_list_pane_g1

0x6dab,	// (0x00025000) bg_list_pane_g2_ParamLimits

0x6dab,	// (0x00025000) bg_list_pane_g2

0x6dbe,	// (0x00025013) bg_list_pane_g3_ParamLimits

0x6dbe,	// (0x00025013) bg_list_pane_g3

0x6dd0,	// (0x00025025) bg_list_pane_g4_ParamLimits

0x6dd0,	// (0x00025025) bg_list_pane_g4

0xb3a5,	// (0x000295fa) bg_list_pane_g5_ParamLimits

0xb3a5,	// (0x000295fa) bg_list_pane_g5

0x0004,

0xf974,	// (0x0002dbc9) bg_list_pane_g_ParamLimits

0xf974,	// (0x0002dbc9) bg_list_pane_g

0xdb17,	// (0x0002bd6c) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double2_graphic_large_graphic_pane

0xdb17,	// (0x0002bd6c) list_double2_graphic_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double2_graphic_pane

0xdb17,	// (0x0002bd6c) list_double2_large_graphic_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double2_large_graphic_pane

0xb33e,	// (0x00029593) list_double2_pane_ParamLimits

0xb33e,	// (0x00029593) list_double2_pane

0xdb17,	// (0x0002bd6c) list_double_graphic_heading_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_graphic_heading_pane

0xdb17,	// (0x0002bd6c) list_double_graphic_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_graphic_pane

0xdb17,	// (0x0002bd6c) list_double_heading_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_heading_pane

0xdb17,	// (0x0002bd6c) list_double_large_graphic_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_large_graphic_pane

0xdb17,	// (0x0002bd6c) list_double_number_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_number_pane

0xdb17,	// (0x0002bd6c) list_double_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_pane

0xdb17,	// (0x0002bd6c) list_double_time_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_double_time_pane

0xdb17,	// (0x0002bd6c) list_setting_number_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_setting_number_pane

0xdb17,	// (0x0002bd6c) list_setting_pane_ParamLimits

0xdb17,	// (0x0002bd6c) list_setting_pane

0xdb70,	// (0x0002bdc5) list_single_2graphic_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_2graphic_pane

0xdb70,	// (0x0002bdc5) list_single_graphic_heading_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_graphic_heading_pane

0xdb70,	// (0x0002bdc5) list_single_graphic_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_graphic_pane

0xdb70,	// (0x0002bdc5) list_single_heading_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_heading_pane

0xdb87,	// (0x0002bddc) list_single_large_graphic_pane_ParamLimits

0xdb87,	// (0x0002bddc) list_single_large_graphic_pane

0xdb70,	// (0x0002bdc5) list_single_number_heading_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_number_heading_pane

0xdb70,	// (0x0002bdc5) list_single_number_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_number_pane

0xdb70,	// (0x0002bdc5) list_single_pane_ParamLimits

0xdb70,	// (0x0002bdc5) list_single_pane

0x4855,	// (0x00022aaa) list_highlight_pane_cp1

0xd29e,	// (0x0002b4f3) list_single_pane_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_pane_g1

0xd2aa,	// (0x0002b4ff) list_single_pane_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_single_pane_g

0xdb01,	// (0x0002bd56) list_single_pane_t1_ParamLimits

0xdb01,	// (0x0002bd56) list_single_pane_t1

0xd29e,	// (0x0002b4f3) list_single_number_pane_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_number_pane_g1

0xd2aa,	// (0x0002b4ff) list_single_number_pane_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_single_number_pane_g

0xd2b6,	// (0x0002b50b) list_single_number_pane_t1_ParamLimits

0xd2b6,	// (0x0002b50b) list_single_number_pane_t1

0xdac2,	// (0x0002bd17) list_single_number_pane_t2_ParamLimits

0xdac2,	// (0x0002bd17) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0002db8a) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0002db8a) list_single_number_pane_t

0xd292,	// (0x0002b4e7) list_single_graphic_pane_g1_ParamLimits

0xd292,	// (0x0002b4e7) list_single_graphic_pane_g1

0xd29e,	// (0x0002b4f3) list_single_graphic_pane_g2_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_graphic_pane_g2

0xd2aa,	// (0x0002b4ff) list_single_graphic_pane_g3_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002d7f1) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002d7f1) list_single_graphic_pane_g

0xd2b6,	// (0x0002b50b) list_single_graphic_pane_t1_ParamLimits

0xd2b6,	// (0x0002b50b) list_single_graphic_pane_t1

0xd29e,	// (0x0002b4f3) list_single_heading_pane_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_heading_pane_g1

0xd2aa,	// (0x0002b4ff) list_single_heading_pane_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_single_heading_pane_g

0xd2cc,	// (0x0002b521) list_single_heading_pane_t1_ParamLimits

0xd2cc,	// (0x0002b521) list_single_heading_pane_t1

0xd2e2,	// (0x0002b537) list_single_heading_pane_t2_ParamLimits

0xd2e2,	// (0x0002b537) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002d7fd) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002d7fd) list_single_heading_pane_t

0xd29e,	// (0x0002b4f3) list_single_number_heading_pane_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_number_heading_pane_g1

0xd2aa,	// (0x0002b4ff) list_single_number_heading_pane_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_single_number_heading_pane_g

0xd2cc,	// (0x0002b521) list_single_number_heading_pane_t1_ParamLimits

0xd2cc,	// (0x0002b521) list_single_number_heading_pane_t1

0xd2f4,	// (0x0002b549) list_single_number_heading_pane_t2_ParamLimits

0xd2f4,	// (0x0002b549) list_single_number_heading_pane_t2

0xd306,	// (0x0002b55b) list_single_number_heading_pane_t3_ParamLimits

0xd306,	// (0x0002b55b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002d802) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002d802) list_single_number_heading_pane_t

0xd292,	// (0x0002b4e7) list_single_graphic_heading_pane_g1_ParamLimits

0xd292,	// (0x0002b4e7) list_single_graphic_heading_pane_g1

0xd318,	// (0x0002b56d) list_single_graphic_heading_pane_g4_ParamLimits

0xd318,	// (0x0002b56d) list_single_graphic_heading_pane_g4

0xd2aa,	// (0x0002b4ff) list_single_graphic_heading_pane_g5_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002d809) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002d809) list_single_graphic_heading_pane_g

0xd2cc,	// (0x0002b521) list_single_graphic_heading_pane_t1_ParamLimits

0xd2cc,	// (0x0002b521) list_single_graphic_heading_pane_t1

0xd327,	// (0x0002b57c) list_single_graphic_heading_pane_t2_ParamLimits

0xd327,	// (0x0002b57c) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002d810) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002d810) list_single_graphic_heading_pane_t

0xd339,	// (0x0002b58e) list_single_large_graphic_pane_g1_ParamLimits

0xd339,	// (0x0002b58e) list_single_large_graphic_pane_g1

0xd345,	// (0x0002b59a) list_single_large_graphic_pane_g2_ParamLimits

0xd345,	// (0x0002b59a) list_single_large_graphic_pane_g2

0xd351,	// (0x0002b5a6) list_single_large_graphic_pane_g3_ParamLimits

0xd351,	// (0x0002b5a6) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002d815) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002d815) list_single_large_graphic_pane_g

0x6123,	// (0x00024378) wait_border_pane_g2_copy1

0xd35d,	// (0x0002b5b2) list_single_large_graphic_pane_g4_cp2

0xd365,	// (0x0002b5ba) list_single_large_graphic_pane_t1_ParamLimits

0xd365,	// (0x0002b5ba) list_single_large_graphic_pane_t1

0xd37b,	// (0x0002b5d0) list_double_pane_g1_ParamLimits

0xd37b,	// (0x0002b5d0) list_double_pane_g1

0xd387,	// (0x0002b5dc) list_double_pane_g2_ParamLimits

0xd387,	// (0x0002b5dc) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002d81c) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002d81c) list_double_pane_g

0xd393,	// (0x0002b5e8) list_double_pane_t1_ParamLimits

0xd393,	// (0x0002b5e8) list_double_pane_t1

0xd3a9,	// (0x0002b5fe) list_double_pane_t2_ParamLimits

0xd3a9,	// (0x0002b5fe) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002d821) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002d821) list_double_pane_t

0xd3bb,	// (0x0002b610) list_double2_pane_g1_ParamLimits

0xd3bb,	// (0x0002b610) list_double2_pane_g1

0xd3ca,	// (0x0002b61f) list_double2_pane_g2_ParamLimits

0xd3ca,	// (0x0002b61f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002d826) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002d826) list_double2_pane_g

0xd3d6,	// (0x0002b62b) list_double2_pane_t1_ParamLimits

0xd3d6,	// (0x0002b62b) list_double2_pane_t1

0xd3ec,	// (0x0002b641) list_double2_pane_t2_ParamLimits

0xd3ec,	// (0x0002b641) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002d82b) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002d82b) list_double2_pane_t

0xd37b,	// (0x0002b5d0) list_double_number_pane_g1_ParamLimits

0xd37b,	// (0x0002b5d0) list_double_number_pane_g1

0xd387,	// (0x0002b5dc) list_double_number_pane_g2_ParamLimits

0xd387,	// (0x0002b5dc) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002d81c) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002d81c) list_double_number_pane_g

0xd3fe,	// (0x0002b653) list_double_number_pane_t1_ParamLimits

0xd3fe,	// (0x0002b653) list_double_number_pane_t1

0xd410,	// (0x0002b665) list_double_number_pane_t2_ParamLimits

0xd410,	// (0x0002b665) list_double_number_pane_t2

0xd426,	// (0x0002b67b) list_double_number_pane_t3_ParamLimits

0xd426,	// (0x0002b67b) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002d830) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002d830) list_double_number_pane_t

0xd292,	// (0x0002b4e7) list_double_graphic_pane_g1_ParamLimits

0xd292,	// (0x0002b4e7) list_double_graphic_pane_g1

0xd438,	// (0x0002b68d) list_double_graphic_pane_g2_ParamLimits

0xd438,	// (0x0002b68d) list_double_graphic_pane_g2

0xd447,	// (0x0002b69c) list_double_graphic_pane_g3_ParamLimits

0xd447,	// (0x0002b69c) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002d837) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002d837) list_double_graphic_pane_g

0xd45f,	// (0x0002b6b4) list_double_graphic_pane_t1_ParamLimits

0xd45f,	// (0x0002b6b4) list_double_graphic_pane_t1

0xd475,	// (0x0002b6ca) list_double_graphic_pane_t2_ParamLimits

0xd475,	// (0x0002b6ca) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002d840) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002d840) list_double_graphic_pane_t

0xd487,	// (0x0002b6dc) list_double2_graphic_pane_g1_ParamLimits

0xd487,	// (0x0002b6dc) list_double2_graphic_pane_g1

0xd37b,	// (0x0002b5d0) list_double2_graphic_pane_g2_ParamLimits

0xd37b,	// (0x0002b5d0) list_double2_graphic_pane_g2

0xd387,	// (0x0002b5dc) list_double2_graphic_pane_g3_ParamLimits

0xd387,	// (0x0002b5dc) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002d845) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002d845) list_double2_graphic_pane_g

0xd493,	// (0x0002b6e8) list_double2_graphic_pane_t1_ParamLimits

0xd493,	// (0x0002b6e8) list_double2_graphic_pane_t1

0xd4a9,	// (0x0002b6fe) list_double2_graphic_pane_t2_ParamLimits

0xd4a9,	// (0x0002b6fe) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002d84c) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002d84c) list_double2_graphic_pane_t

0xd4bb,	// (0x0002b710) list_double_large_graphic_pane_g1_ParamLimits

0xd4bb,	// (0x0002b710) list_double_large_graphic_pane_g1

0xd4e4,	// (0x0002b739) list_double_large_graphic_pane_g2_ParamLimits

0xd4e4,	// (0x0002b739) list_double_large_graphic_pane_g2

0xd387,	// (0x0002b5dc) list_double_large_graphic_pane_g3_ParamLimits

0xd387,	// (0x0002b5dc) list_double_large_graphic_pane_g3

0xd4f3,	// (0x0002b748) list_double_large_graphic_pane_g4_ParamLimits

0xd4f3,	// (0x0002b748) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002d851) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002d851) list_double_large_graphic_pane_g

0xd519,	// (0x0002b76e) list_double_large_graphic_pane_t1_ParamLimits

0xd519,	// (0x0002b76e) list_double_large_graphic_pane_t1

0xd532,	// (0x0002b787) list_double_large_graphic_pane_t2_ParamLimits

0xd532,	// (0x0002b787) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002d85c) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002d85c) list_double_large_graphic_pane_t

0xd544,	// (0x0002b799) list_double2_large_graphic_pane_g1_ParamLimits

0xd544,	// (0x0002b799) list_double2_large_graphic_pane_g1

0xd550,	// (0x0002b7a5) list_double2_large_graphic_pane_g2_ParamLimits

0xd550,	// (0x0002b7a5) list_double2_large_graphic_pane_g2

0xd55f,	// (0x0002b7b4) list_double2_large_graphic_pane_g3_ParamLimits

0xd55f,	// (0x0002b7b4) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002d861) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002d861) list_double2_large_graphic_pane_g

0xd56b,	// (0x0002b7c0) list_double2_large_graphic_pane_t1_ParamLimits

0xd56b,	// (0x0002b7c0) list_double2_large_graphic_pane_t1

0xd581,	// (0x0002b7d6) list_double2_large_graphic_pane_t2_ParamLimits

0xd581,	// (0x0002b7d6) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002d868) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002d868) list_double2_large_graphic_pane_t

0xd593,	// (0x0002b7e8) list_double_heading_pane_g1_ParamLimits

0xd593,	// (0x0002b7e8) list_double_heading_pane_g1

0xd5a2,	// (0x0002b7f7) list_double_heading_pane_g2_ParamLimits

0xd5a2,	// (0x0002b7f7) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002d86d) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002d86d) list_double_heading_pane_g

0xd5ae,	// (0x0002b803) list_double_heading_pane_t1_ParamLimits

0xd5ae,	// (0x0002b803) list_double_heading_pane_t1

0xd5c4,	// (0x0002b819) list_double_heading_pane_t2_ParamLimits

0xd5c4,	// (0x0002b819) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002d872) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002d872) list_double_heading_pane_t

0xd5d6,	// (0x0002b82b) list_double_graphic_heading_pane_g1_ParamLimits

0xd5d6,	// (0x0002b82b) list_double_graphic_heading_pane_g1

0xd593,	// (0x0002b7e8) list_double_graphic_heading_pane_g2_ParamLimits

0xd593,	// (0x0002b7e8) list_double_graphic_heading_pane_g2

0xd5a2,	// (0x0002b7f7) list_double_graphic_heading_pane_g3_ParamLimits

0xd5a2,	// (0x0002b7f7) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002d877) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002d877) list_double_graphic_heading_pane_g

0xd5e2,	// (0x0002b837) list_double_graphic_heading_pane_t1_ParamLimits

0xd5e2,	// (0x0002b837) list_double_graphic_heading_pane_t1

0xd4a9,	// (0x0002b6fe) list_double_graphic_heading_pane_t2_ParamLimits

0xd4a9,	// (0x0002b6fe) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002d87e) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002d87e) list_double_graphic_heading_pane_t

0xd4e4,	// (0x0002b739) list_double_time_pane_g1_ParamLimits

0xd4e4,	// (0x0002b739) list_double_time_pane_g1

0xd387,	// (0x0002b5dc) list_double_time_pane_g2_ParamLimits

0xd387,	// (0x0002b5dc) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002d883) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002d883) list_double_time_pane_g

0xd5f8,	// (0x0002b84d) list_double_time_pane_t1_ParamLimits

0xd5f8,	// (0x0002b84d) list_double_time_pane_t1

0xd60e,	// (0x0002b863) list_double_time_pane_t2_ParamLimits

0xd60e,	// (0x0002b863) list_double_time_pane_t2

0xd620,	// (0x0002b875) list_double_time_pane_t3_ParamLimits

0xd620,	// (0x0002b875) list_double_time_pane_t3

0xd632,	// (0x0002b887) list_double_time_pane_t4_ParamLimits

0xd632,	// (0x0002b887) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002d888) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002d888) list_double_time_pane_t

0xd644,	// (0x0002b899) list_setting_pane_g1_ParamLimits

0xd644,	// (0x0002b899) list_setting_pane_g1

0xd55f,	// (0x0002b7b4) list_setting_pane_g2_ParamLimits

0xd55f,	// (0x0002b7b4) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002d891) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002d891) list_setting_pane_g

0xd650,	// (0x0002b8a5) list_setting_pane_t1_ParamLimits

0xd650,	// (0x0002b8a5) list_setting_pane_t1

0xd66a,	// (0x0002b8bf) list_setting_pane_t2_ParamLimits

0xd66a,	// (0x0002b8bf) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002d896) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002d896) list_setting_pane_t

0xd6a7,	// (0x0002b8fc) set_value_pane_cp_ParamLimits

0xd6a7,	// (0x0002b8fc) set_value_pane_cp

0xd6b3,	// (0x0002b908) list_setting_number_pane_g1_ParamLimits

0xd6b3,	// (0x0002b908) list_setting_number_pane_g1

0xd6bf,	// (0x0002b914) list_setting_number_pane_g2_ParamLimits

0xd6bf,	// (0x0002b914) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002d89d) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002d89d) list_setting_number_pane_g

0xd6cb,	// (0x0002b920) list_setting_number_pane_t1_ParamLimits

0xd6cb,	// (0x0002b920) list_setting_number_pane_t1

0xd6e2,	// (0x0002b937) list_setting_number_pane_t2_ParamLimits

0xd6e2,	// (0x0002b937) list_setting_number_pane_t2

0xd6fc,	// (0x0002b951) list_setting_number_pane_t3_ParamLimits

0xd6fc,	// (0x0002b951) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002d8a2) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002d8a2) list_setting_number_pane_t

0xd6a7,	// (0x0002b8fc) set_value_pane_ParamLimits

0xd6a7,	// (0x0002b8fc) set_value_pane

0x4e11,	// (0x00023066) bg_set_opt_pane_ParamLimits

0x4e11,	// (0x00023066) bg_set_opt_pane

0xd73d,	// (0x0002b992) set_value_pane_t1

0x4e32,	// (0x00023087) slider_set_pane_cp3

0x4e3b,	// (0x00023090) volume_small_pane_cp

0x4e44,	// (0x00023099) list_form_gen_pane

0x4e00,	// (0x00023055) scroll_pane_cp8

0xd753,	// (0x0002b9a8) form_field_data_pane_ParamLimits

0xd753,	// (0x0002b9a8) form_field_data_pane

0xd773,	// (0x0002b9c8) form_field_data_wide_pane_ParamLimits

0xd773,	// (0x0002b9c8) form_field_data_wide_pane

0xd792,	// (0x0002b9e7) form_field_popup_pane_ParamLimits

0xd792,	// (0x0002b9e7) form_field_popup_pane

0xd7aa,	// (0x0002b9ff) form_field_popup_wide_pane_ParamLimits

0xd7aa,	// (0x0002b9ff) form_field_popup_wide_pane

0xd7c1,	// (0x0002ba16) form_field_slider_pane_ParamLimits

0xd7c1,	// (0x0002ba16) form_field_slider_pane

0xd7d4,	// (0x0002ba29) form_field_slider_wide_pane_ParamLimits

0xd7d4,	// (0x0002ba29) form_field_slider_wide_pane

0x4e4d,	// (0x000230a2) data_form_pane

0x9c4a,	// (0x00027e9f) form_field_data_pane_t1

0x4e59,	// (0x000230ae) input_focus_pane

0x4e67,	// (0x000230bc) data_form_wide_pane

0xd7fb,	// (0x0002ba50) form_field_data_wide_pane_t1

0x4c7f,	// (0x00022ed4) input_focus_pane_cp6

0xd81d,	// (0x0002ba72) form_field_popup_pane_t1

0x4e59,	// (0x000230ae) input_focus_pane_cp7

0x4e4d,	// (0x000230a2) list_form_pane

0xd83d,	// (0x0002ba92) form_field_popup_wide_pane_t1

0x4e59,	// (0x000230ae) input_focus_pane_cp8

0x4e93,	// (0x000230e8) list_form_wide_pane

0xd85a,	// (0x0002baaf) form_field_slider_pane_t1_ParamLimits

0xd85a,	// (0x0002baaf) form_field_slider_pane_t1

0xd86c,	// (0x0002bac1) form_field_slider_pane_t2_ParamLimits

0xd86c,	// (0x0002bac1) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002d8b2) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002d8b2) form_field_slider_pane_t

0x48a3,	// (0x00022af8) input_focus_pane_cp9_ParamLimits

0x48a3,	// (0x00022af8) input_focus_pane_cp9

0xd87e,	// (0x0002bad3) slider_cont_pane_ParamLimits

0xd87e,	// (0x0002bad3) slider_cont_pane

0x4ea2,	// (0x000230f7) form_field_slider_wide_pane_t1_ParamLimits

0x4ea2,	// (0x000230f7) form_field_slider_wide_pane_t1

0xd892,	// (0x0002bae7) form_field_slider_wide_pane_t2_ParamLimits

0xd892,	// (0x0002bae7) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002d8b7) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002d8b7) form_field_slider_wide_pane_t

0x48a3,	// (0x00022af8) input_focus_pane_cp10_ParamLimits

0x48a3,	// (0x00022af8) input_focus_pane_cp10

0xd8a4,	// (0x0002baf9) slider_cont_pane_cp1_ParamLimits

0xd8a4,	// (0x0002baf9) slider_cont_pane_cp1

0xd8ba,	// (0x0002bb0f) slider_form_pane_cp

0x4eb4,	// (0x00023109) input_focus_pane_g1

0x4ebc,	// (0x00023111) input_focus_pane_g2

0x4ec4,	// (0x00023119) input_focus_pane_g3

0x4ecc,	// (0x00023121) input_focus_pane_g4

0x4ed4,	// (0x00023129) input_focus_pane_g5

0x4edc,	// (0x00023131) input_focus_pane_g6

0x4ee4,	// (0x00023139) input_focus_pane_g7

0x4eec,	// (0x00023141) input_focus_pane_g8

0x4ef4,	// (0x00023149) input_focus_pane_g9

0x47d3,	// (0x00022a28) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002d8bc) input_focus_pane_g

0x612c,	// (0x00024381) wait_border_pane_g3_copy1

0xd8c2,	// (0x0002bb17) data_form_pane_t1

0x47d3,	// (0x00022a28) wait_anim_pane_g1_copy1

0xdad4,	// (0x0002bd29) data_form_wide_pane_t1

0xd8dc,	// (0x0002bb31) list_form_graphic_pane_cp_ParamLimits

0xd8dc,	// (0x0002bb31) list_form_graphic_pane_cp

0x6ce3,	// (0x00024f38) slider_form_pane_g1

0x6d57,	// (0x00024fac) slider_form_pane_g2

0x0006,

0xf965,	// (0x0002dbba) slider_form_pane_g

0xd8dc,	// (0x0002bb31) list_form_graphic_pane_ParamLimits

0xd8dc,	// (0x0002bb31) list_form_graphic_pane

0xd8f2,	// (0x0002bb47) list_form_graphic_pane_g1

0xd8fa,	// (0x0002bb4f) list_form_graphic_pane_t1_ParamLimits

0xd8fa,	// (0x0002bb4f) list_form_graphic_pane_t1

0x48b9,	// (0x00022b0e) list_highlight_pane_cp5_ParamLimits

0x48b9,	// (0x00022b0e) list_highlight_pane_cp5

0xd90f,	// (0x0002bb64) find_pane_g1

0x4efc,	// (0x00023151) input_find_pane

0xd918,	// (0x0002bb6d) input_find_pane_g1_ParamLimits

0xd918,	// (0x0002bb6d) input_find_pane_g1

0xd924,	// (0x0002bb79) input_find_pane_t1_ParamLimits

0xd924,	// (0x0002bb79) input_find_pane_t1

0xd939,	// (0x0002bb8e) input_find_pane_t2_ParamLimits

0xd939,	// (0x0002bb8e) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002d8d1) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002d8d1) input_find_pane_t

0x4f05,	// (0x0002315a) input_focus_pane_cp5_ParamLimits

0x4f05,	// (0x0002315a) input_focus_pane_cp5

0x48a3,	// (0x00022af8) bg_popup_window_pane_cp2_ParamLimits

0x48a3,	// (0x00022af8) bg_popup_window_pane_cp2

0x4f24,	// (0x00023179) listscroll_menu_pane_ParamLimits

0x4f24,	// (0x00023179) listscroll_menu_pane

0x4f30,	// (0x00023185) popup_submenu_window_ParamLimits

0x4f30,	// (0x00023185) popup_submenu_window

0x4f54,	// (0x000231a9) find_popup_pane_g1

0x4f5c,	// (0x000231b1) input_popup_find_pane_cp

0x4f66,	// (0x000231bb) input_focus_pane_cp4_ParamLimits

0x4f66,	// (0x000231bb) input_focus_pane_cp4

0x4f74,	// (0x000231c9) input_popup_find_pane_t1_ParamLimits

0x4f74,	// (0x000231c9) input_popup_find_pane_t1

0x4855,	// (0x00022aaa) bg_popup_sub_pane_cp

0x4fa2,	// (0x000231f7) listscroll_popup_sub_pane

0x4faa,	// (0x000231ff) list_submenu_pane_ParamLimits

0x4faa,	// (0x000231ff) list_submenu_pane

0x4fbb,	// (0x00023210) scroll_pane_cp4

0x4fc3,	// (0x00023218) list_single_popup_submenu_pane_ParamLimits

0x4fc3,	// (0x00023218) list_single_popup_submenu_pane

0x4fd5,	// (0x0002322a) list_single_popup_submenu_pane_g1

0x4fdd,	// (0x00023232) list_single_popup_submenu_pane_t1_ParamLimits

0x4fdd,	// (0x00023232) list_single_popup_submenu_pane_t1

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp1_ParamLimits

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp1

0x9c6e,	// (0x00027ec3) tabs_2_active_pane_g1

0x9c76,	// (0x00027ecb) tabs_2_active_pane_t1

0x48b9,	// (0x00022b0e) bg_passive_tab_pane_cp1_ParamLimits

0x48b9,	// (0x00022b0e) bg_passive_tab_pane_cp1

0x9c6e,	// (0x00027ec3) tabs_2_passive_pane_g1

0x9c76,	// (0x00027ecb) tabs_2_passive_pane_t1

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp4

0x9c96,	// (0x00027eeb) tabs_2_long_active_pane_t1

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp4

0xad71,	// (0x00028fc6) list_single_midp_graphic_pane_g4_ParamLimits

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp5

0x9cb5,	// (0x00027f0a) tabs_3_long_active_pane_t1

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp5

0xad71,	// (0x00028fc6) list_single_midp_graphic_pane_g4

0x48b9,	// (0x00022b0e) bg_popup_window_pane_cp13_ParamLimits

0x48b9,	// (0x00022b0e) bg_popup_window_pane_cp13

0x5007,	// (0x0002325c) listscroll_popup_fast_pane_ParamLimits

0x5007,	// (0x0002325c) listscroll_popup_fast_pane

0x5016,	// (0x0002326b) grid_popup_fast_pane_ParamLimits

0x5016,	// (0x0002326b) grid_popup_fast_pane

0x5028,	// (0x0002327d) scroll_pane_cp9_ParamLimits

0x5028,	// (0x0002327d) scroll_pane_cp9

0x803a,	// (0x0002628f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x803a,	// (0x0002628f) list_single_graphic_hl_pane_t1_cp2

0x504c,	// (0x000232a1) input_focus_pane_cp20_ParamLimits

0x504c,	// (0x000232a1) input_focus_pane_cp20

0x505a,	// (0x000232af) query_popup_data_pane_t1_ParamLimits

0x505a,	// (0x000232af) query_popup_data_pane_t1

0x506d,	// (0x000232c2) query_popup_data_pane_t2_ParamLimits

0x506d,	// (0x000232c2) query_popup_data_pane_t2

0x50b3,	// (0x00023308) query_popup_data_pane_t3_ParamLimits

0x50b3,	// (0x00023308) query_popup_data_pane_t3

0x50f4,	// (0x00023349) query_popup_data_pane_t4_ParamLimits

0x50f4,	// (0x00023349) query_popup_data_pane_t4

0x5130,	// (0x00023385) query_popup_data_pane_t5_ParamLimits

0x5130,	// (0x00023385) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002d8d6) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002d8d6) query_popup_data_pane_t

0x4eb4,	// (0x00023109) bg_set_opt_pane_g1

0x4ebc,	// (0x00023111) bg_set_opt_pane_g2

0x4ec4,	// (0x00023119) bg_set_opt_pane_g3

0x4ecc,	// (0x00023121) bg_set_opt_pane_g4

0x4ed4,	// (0x00023129) bg_set_opt_pane_g5

0x4edc,	// (0x00023131) bg_set_opt_pane_g6

0x4ee4,	// (0x00023139) bg_set_opt_pane_g7

0x4eec,	// (0x00023141) bg_set_opt_pane_g8

0x4ef4,	// (0x00023149) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002d8e1) bg_set_opt_pane_g

0xa0c2,	// (0x00028317) control_top_pane_stacon_ParamLimits

0xa0c2,	// (0x00028317) control_top_pane_stacon

0xa115,	// (0x0002836a) signal_pane_stacon_ParamLimits

0xa115,	// (0x0002836a) signal_pane_stacon

0x5523,	// (0x00023778) stacon_top_pane_g1_ParamLimits

0x5523,	// (0x00023778) stacon_top_pane_g1

0xa13a,	// (0x0002838f) title_pane_stacon_ParamLimits

0xa13a,	// (0x0002838f) title_pane_stacon

0xa15c,	// (0x000283b1) uni_indicator_pane_stacon_ParamLimits

0xa15c,	// (0x000283b1) uni_indicator_pane_stacon

0xa171,	// (0x000283c6) battery_pane_stacon_ParamLimits

0xa171,	// (0x000283c6) battery_pane_stacon

0xa1b1,	// (0x00028406) control_bottom_pane_stacon_ParamLimits

0xa1b1,	// (0x00028406) control_bottom_pane_stacon

0xa1d0,	// (0x00028425) navi_pane_stacon_ParamLimits

0xa1d0,	// (0x00028425) navi_pane_stacon

0x5545,	// (0x0002379a) stacon_bottom_pane_g1_ParamLimits

0x5545,	// (0x0002379a) stacon_bottom_pane_g1

0x5167,	// (0x000233bc) aid_levels_signal_lsc_ParamLimits

0x5167,	// (0x000233bc) aid_levels_signal_lsc

0x9cc7,	// (0x00027f1c) signal_pane_stacon_g1_ParamLimits

0x9cc7,	// (0x00027f1c) signal_pane_stacon_g1

0x9cd3,	// (0x00027f28) signal_pane_stacon_g2_ParamLimits

0x9cd3,	// (0x00027f28) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002d8f4) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002d8f4) signal_pane_stacon_g

0x9d07,	// (0x00027f5c) title_pane_stacon_t1_ParamLimits

0x9d07,	// (0x00027f5c) title_pane_stacon_t1

0x5195,	// (0x000233ea) uni_indicator_pane_stacon_g1

0x519f,	// (0x000233f4) uni_indicator_pane_stacon_g2

0x5181,	// (0x000233d6) uni_indicator_pane_stacon_g3

0x518b,	// (0x000233e0) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002d900) uni_indicator_pane_stacon_g

0x9d2c,	// (0x00027f81) control_top_pane_stacon_g1

0x9d34,	// (0x00027f89) control_top_pane_stacon_t1_ParamLimits

0x9d34,	// (0x00027f89) control_top_pane_stacon_t1

0x51a9,	// (0x000233fe) aid_levels_battery_lsc_ParamLimits

0x51a9,	// (0x000233fe) aid_levels_battery_lsc

0x9d65,	// (0x00027fba) battery_pane_stacon_g1_ParamLimits

0x9d65,	// (0x00027fba) battery_pane_stacon_g1

0x9d71,	// (0x00027fc6) battery_pane_stacon_g2_ParamLimits

0x9d71,	// (0x00027fc6) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002d909) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002d909) battery_pane_stacon_g

0x9da0,	// (0x00027ff5) navi_icon_pane_stacon

0x9db0,	// (0x00028005) navi_navi_pane_stacon

0x9da0,	// (0x00027ff5) navi_text_pane_stacon

0x9d2c,	// (0x00027f81) control_bottom_pane_stacon_g1

0x9dc0,	// (0x00028015) control_bottom_pane_stacon_t1_ParamLimits

0x9dc0,	// (0x00028015) control_bottom_pane_stacon_t1

0x9df1,	// (0x00028046) grid_app_pane_ParamLimits

0x9df1,	// (0x00028046) grid_app_pane

0x9e0d,	// (0x00028062) scroll_pane_cp15_ParamLimits

0x9e0d,	// (0x00028062) scroll_pane_cp15

0x9e1e,	// (0x00028073) cell_app_pane_ParamLimits

0x9e1e,	// (0x00028073) cell_app_pane

0x9e42,	// (0x00028097) cell_app_pane_g1_ParamLimits

0x9e42,	// (0x00028097) cell_app_pane_g1

0x51d1,	// (0x00023426) cell_app_pane_g2_ParamLimits

0x51d1,	// (0x00023426) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002d90e) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002d90e) cell_app_pane_g

0x9e66,	// (0x000280bb) cell_app_pane_t1_ParamLimits

0x9e66,	// (0x000280bb) cell_app_pane_t1

0x51dd,	// (0x00023432) grid_highlight_pane_ParamLimits

0x51dd,	// (0x00023432) grid_highlight_pane

0x4eb4,	// (0x00023109) cell_highlight_pane_g1

0x4ebc,	// (0x00023111) cell_highlight_pane_g2

0x4ec4,	// (0x00023119) cell_highlight_pane_g3

0x4ecc,	// (0x00023121) cell_highlight_pane_g4

0x4ed4,	// (0x00023129) cell_highlight_pane_g5

0x4edc,	// (0x00023131) cell_highlight_pane_g6

0x4ee4,	// (0x00023139) cell_highlight_pane_g7

0x4eec,	// (0x00023141) cell_highlight_pane_g8

0x4ef4,	// (0x00023149) cell_highlight_pane_g9

0x47d3,	// (0x00022a28) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002d8bc) cell_highlight_pane_g

0x51ee,	// (0x00023443) bg_scroll_pane

0x9e90,	// (0x000280e5) scroll_handle_pane

0x5235,	// (0x0002348a) scroll_bg_pane_g1

0x524a,	// (0x0002349f) scroll_bg_pane_g2

0x5262,	// (0x000234b7) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002d913) scroll_bg_pane_g

0x5277,	// (0x000234cc) scroll_handle_focus_pane_ParamLimits

0x5277,	// (0x000234cc) scroll_handle_focus_pane

0x5235,	// (0x0002348a) scroll_handle_pane_g1

0x5284,	// (0x000234d9) scroll_handle_pane_g2

0x5262,	// (0x000234b7) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002d91a) scroll_handle_pane_g

0x4f66,	// (0x000231bb) bg_popup_sub_pane_cp21_ParamLimits

0x4f66,	// (0x000231bb) bg_popup_sub_pane_cp21

0x5298,	// (0x000234ed) popup_fep_japan_predictive_window_t1_ParamLimits

0x5298,	// (0x000234ed) popup_fep_japan_predictive_window_t1

0x52af,	// (0x00023504) popup_fep_japan_predictive_window_t2_ParamLimits

0x52af,	// (0x00023504) popup_fep_japan_predictive_window_t2

0x52e2,	// (0x00023537) popup_fep_japan_predictive_window_t3_ParamLimits

0x52e2,	// (0x00023537) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002d921) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002d921) popup_fep_japan_predictive_window_t

0x4855,	// (0x00022aaa) bg_popup_sub_pane_cp23

0x5319,	// (0x0002356e) listscroll_japin_cand_pane

0x5321,	// (0x00023576) popup_fep_japan_candidate_window_t1

0x532f,	// (0x00023584) candidate_pane_ParamLimits

0x532f,	// (0x00023584) candidate_pane

0x5342,	// (0x00023597) scroll_pane_cp30

0x534a,	// (0x0002359f) list_single_popup_jap_candidate_pane_ParamLimits

0x534a,	// (0x0002359f) list_single_popup_jap_candidate_pane

0x4855,	// (0x00022aaa) list_highlight_pane_cp30

0x535f,	// (0x000235b4) list_single_popup_jap_candidate_pane_t1

0x9eb9,	// (0x0002810e) level_1_signal

0x9ec6,	// (0x0002811b) level_2_signal

0x9ed3,	// (0x00028128) level_3_signal

0x9ee0,	// (0x00028135) level_4_signal

0x9eed,	// (0x00028142) level_5_signal

0x9efa,	// (0x0002814f) level_6_signal

0x9f07,	// (0x0002815c) level_7_signal

0x9eb9,	// (0x0002810e) level_1_battery

0x9ec6,	// (0x0002811b) level_2_battery

0x9ed3,	// (0x00028128) level_3_battery

0x9ee0,	// (0x00028135) level_4_battery

0x9eed,	// (0x00028142) level_5_battery

0x9efa,	// (0x0002814f) level_6_battery

0x9f07,	// (0x0002815c) level_7_battery

0x5386,	// (0x000235db) list_menu_pane_ParamLimits

0x5386,	// (0x000235db) list_menu_pane

0x539c,	// (0x000235f1) scroll_pane_cp25_ParamLimits

0x539c,	// (0x000235f1) scroll_pane_cp25

0x9f33,	// (0x00028188) list_double2_graphic_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double2_graphic_pane_cp2

0x9f33,	// (0x00028188) list_double2_large_graphic_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double2_large_graphic_pane_cp2

0x9f33,	// (0x00028188) list_double2_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double2_pane_cp2

0x9f33,	// (0x00028188) list_double_graphic_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double_graphic_pane_cp2

0x9f33,	// (0x00028188) list_double_large_graphic_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double_large_graphic_pane_cp2

0x9f33,	// (0x00028188) list_double_number_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double_number_pane_cp2

0x9f33,	// (0x00028188) list_double_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double_pane_cp2

0x9f43,	// (0x00028198) list_single_2graphic_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_2graphic_pane_cp2

0x9f43,	// (0x00028198) list_single_graphic_heading_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_graphic_heading_pane_cp2

0x9f43,	// (0x00028198) list_single_graphic_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_graphic_pane_cp2

0x9f43,	// (0x00028198) list_single_heading_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_heading_pane_cp2

0x9f58,	// (0x000281ad) list_single_large_graphic_pane_cp2_ParamLimits

0x9f58,	// (0x000281ad) list_single_large_graphic_pane_cp2

0x9f43,	// (0x00028198) list_single_number_heading_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_number_heading_pane_cp2

0x9f43,	// (0x00028198) list_single_number_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_number_pane_cp2

0x9f43,	// (0x00028198) list_single_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_pane_cp2

0x53be,	// (0x00023613) bg_popup_sub_pane_cp22

0xa032,	// (0x00028287) popup_side_volume_key_window_g1

0xa056,	// (0x000282ab) popup_side_volume_key_window_t1

0xa072,	// (0x000282c7) volume_small_pane_cp1

0x48a3,	// (0x00022af8) bg_popup_sub_pane_cp24_ParamLimits

0x48a3,	// (0x00022af8) bg_popup_sub_pane_cp24

0x53d4,	// (0x00023629) fep_china_uni_candidate_pane_ParamLimits

0x53d4,	// (0x00023629) fep_china_uni_candidate_pane

0x53e8,	// (0x0002363d) fep_china_uni_entry_pane

0x53f8,	// (0x0002364d) popup_fep_china_uni_window_g1

0x5414,	// (0x00023669) fep_china_uni_entry_pane_g1

0x541c,	// (0x00023671) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002d952) fep_china_uni_entry_pane_g

0x5424,	// (0x00023679) fep_entry_item_pane

0x542e,	// (0x00023683) fep_candidate_item_pane

0x5436,	// (0x0002368b) fep_china_uni_candidate_pane_g1

0x543e,	// (0x00023693) fep_china_uni_candidate_pane_g2

0x5446,	// (0x0002369b) fep_china_uni_candidate_pane_g3

0x544e,	// (0x000236a3) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002d957) fep_china_uni_candidate_pane_g

0x47d3,	// (0x00022a28) fep_entry_item_pane_g1

0x5456,	// (0x000236ab) fep_entry_item_pane_t1_ParamLimits

0x5456,	// (0x000236ab) fep_entry_item_pane_t1

0x546c,	// (0x000236c1) fep_candidate_item_pane_t1_ParamLimits

0x546c,	// (0x000236c1) fep_candidate_item_pane_t1

0x5481,	// (0x000236d6) fep_candidate_item_pane_t2_ParamLimits

0x5481,	// (0x000236d6) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002d960) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002d960) fep_candidate_item_pane_t

0x48b9,	// (0x00022b0e) list_highlight_pane_cp31_ParamLimits

0x48b9,	// (0x00022b0e) list_highlight_pane_cp31

0x5493,	// (0x000236e8) level_1_signal_lsc

0x549c,	// (0x000236f1) level_2_signal_lsc

0x54a5,	// (0x000236fa) level_3_signal_lsc

0x54ae,	// (0x00023703) level_4_signal_lsc

0x54b7,	// (0x0002370c) level_5_signal_lsc

0x54c0,	// (0x00023715) level_6_signal_lsc

0x54c9,	// (0x0002371e) level_7_signal_lsc

0x54c9,	// (0x0002371e) level_1_battery_lsc

0x54d2,	// (0x00023727) level_2_battery_lsc

0x54db,	// (0x00023730) level_3_battery_lsc

0x54e4,	// (0x00023739) level_4_battery_lsc

0x54ed,	// (0x00023742) level_5_battery_lsc

0x54f6,	// (0x0002374b) level_6_battery_lsc

0x5493,	// (0x000236e8) level_7_battery_lsc

0x54ff,	// (0x00023754) scroll_handle_focus_pane_g1

0x5508,	// (0x0002375d) scroll_handle_focus_pane_g2

0x5511,	// (0x00023766) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002d965) scroll_handle_focus_pane_g

0xd94e,	// (0x0002bba3) list_single_2graphic_pane_g1_ParamLimits

0xd94e,	// (0x0002bba3) list_single_2graphic_pane_g1

0xd318,	// (0x0002b56d) list_single_2graphic_pane_g2_ParamLimits

0xd318,	// (0x0002b56d) list_single_2graphic_pane_g2

0xd2aa,	// (0x0002b4ff) list_single_2graphic_pane_g3_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_2graphic_pane_g3

0xd95a,	// (0x0002bbaf) list_single_2graphic_pane_g4_ParamLimits

0xd95a,	// (0x0002bbaf) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002d96c) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002d96c) list_single_2graphic_pane_g

0xd966,	// (0x0002bbbb) list_single_2graphic_pane_t1_ParamLimits

0xd966,	// (0x0002bbbb) list_single_2graphic_pane_t1

0xd994,	// (0x0002bbe9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd994,	// (0x0002bbe9) list_double2_graphic_large_graphic_pane_g1

0xd550,	// (0x0002b7a5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd550,	// (0x0002b7a5) list_double2_graphic_large_graphic_pane_g2

0xd55f,	// (0x0002b7b4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd55f,	// (0x0002b7b4) list_double2_graphic_large_graphic_pane_g3

0xd9a4,	// (0x0002bbf9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd9a4,	// (0x0002bbf9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002d975) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002d975) list_double2_graphic_large_graphic_pane_g

0xd9b0,	// (0x0002bc05) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd9b0,	// (0x0002bc05) list_double2_graphic_large_graphic_pane_t1

0xd9c6,	// (0x0002bc1b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd9c6,	// (0x0002bc1b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002d97e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002d97e) list_double2_graphic_large_graphic_pane_t

0x55ec,	// (0x00023841) popup_fast_swap_window_ParamLimits

0x55ec,	// (0x00023841) popup_fast_swap_window

0x5608,	// (0x0002385d) popup_side_volume_key_window

0x5622,	// (0x00023877) stacon_top_pane

0x562c,	// (0x00023881) status_pane_ParamLimits

0x562c,	// (0x00023881) status_pane

0xa206,	// (0x0002845b) status_small_pane

0x4855,	// (0x00022aaa) control_pane

0x4855,	// (0x00022aaa) stacon_bottom_pane

0x4e00,	// (0x00023055) scroll_pane_cp121

0x4e44,	// (0x00023099) set_content_pane

0xa07a,	// (0x000282cf) bg_active_tab_pane_g1_cp1

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp1

0xa083,	// (0x000282d8) bg_active_tab_pane_g3_cp1

0xa07a,	// (0x000282cf) bg_passive_tab_pane_g1_cp1

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp1

0xa083,	// (0x000282d8) bg_passive_tab_pane_g3_cp1

0xa08c,	// (0x000282e1) bg_active_tab_pane_g1_cp2

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp2

0xa095,	// (0x000282ea) bg_active_tab_pane_g3_cp2

0xa08c,	// (0x000282e1) bg_passive_tab_pane_g1_cp2

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp2

0xa095,	// (0x000282ea) bg_passive_tab_pane_g3_cp2

0xa09e,	// (0x000282f3) bg_active_tab_pane_g1_cp3

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp3

0xa0a7,	// (0x000282fc) bg_active_tab_pane_g3_cp3

0xa09e,	// (0x000282f3) bg_passive_tab_pane_g1_cp3

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp3

0xa0a7,	// (0x000282fc) bg_passive_tab_pane_g3_cp3

0xa0b0,	// (0x00028305) bg_active_tab_pane_g1_cp4

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp4

0xa0b9,	// (0x0002830e) bg_active_tab_pane_g3_cp4

0xa0b0,	// (0x00028305) bg_passive_tab_pane_g1_cp4

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp4

0xa0b9,	// (0x0002830e) bg_passive_tab_pane_g3_cp4

0x556a,	// (0x000237bf) bg_active_tab_pane_g1_cp5

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp5

0x5561,	// (0x000237b6) bg_active_tab_pane_g3_cp5

0x556a,	// (0x000237bf) bg_passive_tab_pane_g1_cp5

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp5

0x5561,	// (0x000237b6) bg_passive_tab_pane_g3_cp5

0xa1ef,	// (0x00028444) list_set_graphic_pane_ParamLimits

0xa1ef,	// (0x00028444) list_set_graphic_pane

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp4

0x5573,	// (0x000237c8) list_set_graphic_pane_g1_ParamLimits

0x5573,	// (0x000237c8) list_set_graphic_pane_g1

0x557f,	// (0x000237d4) list_set_graphic_pane_g2_ParamLimits

0x557f,	// (0x000237d4) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002d983) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002d983) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002dd0a) volume_small_pane_cp_g

0x55a1,	// (0x000237f6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x55a1,	// (0x000237f6) list_double2_large_graphic_pane_g1_cp2

0x55ad,	// (0x00023802) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x55ad,	// (0x00023802) list_double2_large_graphic_pane_g2_cp2

0x55bc,	// (0x00023811) list_double2_large_graphic_pane_g3_cp2

0x55c4,	// (0x00023819) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x55c4,	// (0x00023819) list_double2_large_graphic_pane_t1_cp2

0x55da,	// (0x0002382f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x55da,	// (0x0002382f) list_double2_large_graphic_pane_t2_cp2

0x6a9b,	// (0x00024cf0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6a9b,	// (0x00024cf0) list_double_large_graphic_pane_g1_cp2

0x6aac,	// (0x00024d01) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6aac,	// (0x00024d01) list_double_large_graphic_pane_g2_cp2

0x5707,	// (0x0002395c) list_double_large_graphic_pane_g3_cp2

0x6abb,	// (0x00024d10) list_double_large_graphic_pane_g4_cp

0x6ac3,	// (0x00024d18) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6ac3,	// (0x00024d18) list_double_large_graphic_pane_t1_cp2

0x6ada,	// (0x00024d2f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6ada,	// (0x00024d2f) list_double_large_graphic_pane_t2_cp2

0x563a,	// (0x0002388f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x563a,	// (0x0002388f) list_double2_graphic_pane_g1_cp2

0x5646,	// (0x0002389b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5646,	// (0x0002389b) list_double2_graphic_pane_g2_cp2

0x5655,	// (0x000238aa) list_double2_graphic_pane_g3_cp2

0x565d,	// (0x000238b2) list_double2_graphic_pane_t1_cp2_ParamLimits

0x565d,	// (0x000238b2) list_double2_graphic_pane_t1_cp2

0x5673,	// (0x000238c8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5673,	// (0x000238c8) list_double2_graphic_pane_t2_cp2

0x5685,	// (0x000238da) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5685,	// (0x000238da) list_single_number_heading_pane_g1_cp2

0x5691,	// (0x000238e6) list_single_number_heading_pane_g2_cp2

0x5699,	// (0x000238ee) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5699,	// (0x000238ee) list_single_number_heading_pane_t1_cp2

0x56af,	// (0x00023904) list_single_number_heading_pane_t2_cp2_ParamLimits

0x56af,	// (0x00023904) list_single_number_heading_pane_t2_cp2

0x56c1,	// (0x00023916) list_single_number_heading_pane_t3_cp2_ParamLimits

0x56c1,	// (0x00023916) list_single_number_heading_pane_t3_cp2

0x5685,	// (0x000238da) list_single_heading_pane_g1_cp2_ParamLimits

0x5685,	// (0x000238da) list_single_heading_pane_g1_cp2

0x5691,	// (0x000238e6) list_single_heading_pane_g2_cp2

0x5699,	// (0x000238ee) list_single_heading_pane_t1_cp2_ParamLimits

0x5699,	// (0x000238ee) list_single_heading_pane_t1_cp2

0x68a5,	// (0x00024afa) list_single_heading_pane_t2_cp2_ParamLimits

0x68a5,	// (0x00024afa) list_single_heading_pane_t2_cp2

0x682a,	// (0x00024a7f) list_double_graphic_pane_g1_cp2_ParamLimits

0x682a,	// (0x00024a7f) list_double_graphic_pane_g1_cp2

0x6836,	// (0x00024a8b) list_double_graphic_pane_g2_cp2_ParamLimits

0x6836,	// (0x00024a8b) list_double_graphic_pane_g2_cp2

0x6845,	// (0x00024a9a) list_double_graphic_pane_g3_cp2

0x684d,	// (0x00024aa2) list_double_graphic_pane_t1_cp2_ParamLimits

0x684d,	// (0x00024aa2) list_double_graphic_pane_t1_cp2

0x6863,	// (0x00024ab8) list_double_graphic_pane_t2_cp2_ParamLimits

0x6863,	// (0x00024ab8) list_double_graphic_pane_t2_cp2

0x56fb,	// (0x00023950) list_double_number_pane_g1_cp2_ParamLimits

0x56fb,	// (0x00023950) list_double_number_pane_g1_cp2

0x5707,	// (0x0002395c) list_double_number_pane_g2_cp2

0x67f0,	// (0x00024a45) list_double_number_pane_t1_cp2_ParamLimits

0x67f0,	// (0x00024a45) list_double_number_pane_t1_cp2

0x6802,	// (0x00024a57) list_double_number_pane_t2_cp2_ParamLimits

0x6802,	// (0x00024a57) list_double_number_pane_t2_cp2

0x6818,	// (0x00024a6d) list_double_number_pane_t3_cp2_ParamLimits

0x6818,	// (0x00024a6d) list_double_number_pane_t3_cp2

0x6768,	// (0x000249bd) list_single_graphic_pane_g1_cp2_ParamLimits

0x6768,	// (0x000249bd) list_single_graphic_pane_g1_cp2

0x5685,	// (0x000238da) list_single_graphic_pane_g2_cp2_ParamLimits

0x5685,	// (0x000238da) list_single_graphic_pane_g2_cp2

0x5691,	// (0x000238e6) list_single_graphic_pane_g3_cp2

0x6740,	// (0x00024995) list_single_graphic_pane_t1_cp2_ParamLimits

0x6740,	// (0x00024995) list_single_graphic_pane_t1_cp2

0x5685,	// (0x000238da) list_single_number_pane_g1_cp2_ParamLimits

0x5685,	// (0x000238da) list_single_number_pane_g1_cp2

0x5691,	// (0x000238e6) list_single_number_pane_g2_cp2

0x6740,	// (0x00024995) list_single_number_pane_t1_cp2_ParamLimits

0x6740,	// (0x00024995) list_single_number_pane_t1_cp2

0x6756,	// (0x000249ab) list_single_number_pane_t2_cp2_ParamLimits

0x6756,	// (0x000249ab) list_single_number_pane_t2_cp2

0x55ad,	// (0x00023802) list_double2_pane_g1_cp2_ParamLimits

0x55ad,	// (0x00023802) list_double2_pane_g1_cp2

0x55bc,	// (0x00023811) list_double2_pane_g2_cp2

0x56d3,	// (0x00023928) list_double2_pane_t1_cp2_ParamLimits

0x56d3,	// (0x00023928) list_double2_pane_t1_cp2

0x56e9,	// (0x0002393e) list_double2_pane_t2_cp2_ParamLimits

0x56e9,	// (0x0002393e) list_double2_pane_t2_cp2

0x56fb,	// (0x00023950) list_double_pane_g1_cp2_ParamLimits

0x56fb,	// (0x00023950) list_double_pane_g1_cp2

0x5707,	// (0x0002395c) list_double_pane_g2_cp2

0x570f,	// (0x00023964) list_double_pane_t1_cp2_ParamLimits

0x570f,	// (0x00023964) list_double_pane_t1_cp2

0x5725,	// (0x0002397a) list_double_pane_t2_cp2_ParamLimits

0x5725,	// (0x0002397a) list_double_pane_t2_cp2

0x574d,	// (0x000239a2) list_single_pane_cp2_g3

0x5685,	// (0x000238da) list_single_pane_g1_cp2_ParamLimits

0x5685,	// (0x000238da) list_single_pane_g1_cp2

0x5691,	// (0x000238e6) list_single_pane_g2_cp2

0x575d,	// (0x000239b2) list_single_pane_t1_cp2_ParamLimits

0x575d,	// (0x000239b2) list_single_pane_t1_cp2

0x5775,	// (0x000239ca) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5775,	// (0x000239ca) list_single_large_graphic_pane_g1_cp2

0x5781,	// (0x000239d6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5781,	// (0x000239d6) list_single_large_graphic_pane_g2_cp2

0x578d,	// (0x000239e2) list_single_large_graphic_pane_g3_cp2

0x5795,	// (0x000239ea) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5795,	// (0x000239ea) list_single_large_graphic_pane_g4_cp1

0x57af,	// (0x00023a04) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x57af,	// (0x00023a04) list_single_large_graphic_pane_t1_cp2

0x6722,	// (0x00024977) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6722,	// (0x00024977) list_single_graphic_heading_pane_g1_cp2

0x66fd,	// (0x00024952) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x66fd,	// (0x00024952) list_single_graphic_heading_pane_g4_cp2

0x5691,	// (0x000238e6) list_single_graphic_heading_pane_g5_cp2

0x5699,	// (0x000238ee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5699,	// (0x000238ee) list_single_graphic_heading_pane_t1_cp2

0x672e,	// (0x00024983) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x672e,	// (0x00024983) list_single_graphic_heading_pane_t2_cp2

0x66f1,	// (0x00024946) list_single_2graphic_pane_g1_cp2_ParamLimits

0x66f1,	// (0x00024946) list_single_2graphic_pane_g1_cp2

0x66fd,	// (0x00024952) list_single_2graphic_pane_g2_cp2_ParamLimits

0x66fd,	// (0x00024952) list_single_2graphic_pane_g2_cp2

0x5691,	// (0x000238e6) list_single_2graphic_pane_g3_cp2

0x5c0c,	// (0x00023e61) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c0c,	// (0x00023e61) list_single_2graphic_pane_g4_cp2

0x670c,	// (0x00024961) list_single_2graphic_pane_t1_cp2_ParamLimits

0x670c,	// (0x00024961) list_single_2graphic_pane_t1_cp2

0x47d3,	// (0x00022a28) list_highlight_pane_g10_cp1

0x6303,	// (0x00024558) list_highlight_pane_g1_cp1

0x630b,	// (0x00024560) list_highlight_pane_g2_cp1

0x6313,	// (0x00024568) list_highlight_pane_g3_cp1

0x631b,	// (0x00024570) list_highlight_pane_g4_cp1

0x6323,	// (0x00024578) list_highlight_pane_g5_cp1

0x632b,	// (0x00024580) list_highlight_pane_g6_cp1

0x6333,	// (0x00024588) list_highlight_pane_g7_cp1

0x633b,	// (0x00024590) list_highlight_pane_g8_cp1

0x6343,	// (0x00024598) list_highlight_pane_g9_cp1

0xaeae,	// (0x00029103) form_field_slider_pane_t3

0xaebc,	// (0x00029111) form_field_slider_pane_t4

0x624d,	// (0x000244a2) slider_form_pane_ParamLimits

0x624d,	// (0x000244a2) slider_form_pane

0x4855,	// (0x00022aaa) control_abbreviations

0x4855,	// (0x00022aaa) control_conventions

0x4855,	// (0x00022aaa) control_definitions

0x4855,	// (0x00022aaa) format_table_attribute

0x68ef,	// (0x00024b44) bg_popup_preview_window_pane_g9

0x4855,	// (0x00022aaa) format_table_data2

0x4855,	// (0x00022aaa) format_table_data3

0x4855,	// (0x00022aaa) format_table_data_example

0x0008,

0x4855,	// (0x00022aaa) intro_purpose

0xf8c5,	// (0x0002db1a) bg_popup_preview_window_pane_g

0x4855,	// (0x00022aaa) texts_category

0x4855,	// (0x00022aaa) texts_graphics

0x57c5,	// (0x00023a1a) text_digital

0x57d4,	// (0x00023a29) text_primary

0x57e3,	// (0x00023a38) text_primary_small

0x57f2,	// (0x00023a47) text_secondary

0x5801,	// (0x00023a56) text_title

0x6deb,	// (0x00025040) bg_passive_tab_pane_g1_cp3_srt

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp3_srt

0x6de2,	// (0x00025037) bg_passive_tab_pane_g3_cp3_srt

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp3_srt_ParamLimits

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp3_srt

0x6d21,	// (0x00024f76) tabs_4_active_pane_srt_g1

0x99c2,	// (0x00027c17) tabs_4_active_pane_srt_t1_ParamLimits

0x99c2,	// (0x00027c17) tabs_4_active_pane_srt_t1

0x6deb,	// (0x00025040) bg_active_tab_pane_g1_cp3_copy1

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp3_copy1

0x6de2,	// (0x00025037) bg_active_tab_pane_g3_cp3_copy1

0x48b9,	// (0x00022b0e) tabs_2_long_active_pane_srt_ParamLimits

0x48b9,	// (0x00022b0e) tabs_2_long_active_pane_srt

0x48b9,	// (0x00022b0e) tabs_2_long_passive_pane_srt_ParamLimits

0x48b9,	// (0x00022b0e) tabs_2_long_passive_pane_srt

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp4_srt

0x6ca7,	// (0x00024efc) bg_passive_tab_pane_g1_cp4_srt

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp4_srt

0x6c9e,	// (0x00024ef3) bg_passive_tab_pane_g3_cp4_srt

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp4_srt_ParamLimits

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp4_srt

0x9c96,	// (0x00027eeb) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9c96,	// (0x00027eeb) tabs_2_long_active_pane_srt_t1

0x6ca7,	// (0x00024efc) bg_active_tab_pane_g1_cp4_srt

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp4_srt

0x6c9e,	// (0x00024ef3) bg_active_tab_pane_g3_cp4_srt

0x48a3,	// (0x00022af8) tabs_3_long_active_pane_srt_ParamLimits

0x48a3,	// (0x00022af8) tabs_3_long_active_pane_srt

0x48a3,	// (0x00022af8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x48a3,	// (0x00022af8) tabs_3_long_passive_pane_cp_srt

0x48a3,	// (0x00022af8) tabs_3_long_passive_pane_srt_ParamLimits

0x48a3,	// (0x00022af8) tabs_3_long_passive_pane_srt

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp5_srt

0x556a,	// (0x000237bf) bg_passive_tab_pane_g1_cp5_srt

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp5_srt

0x5561,	// (0x000237b6) bg_passive_tab_pane_g3_cp5_srt

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp5_srt_ParamLimits

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp5_srt

0x9cb5,	// (0x00027f0a) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9cb5,	// (0x00027f0a) tabs_3_long_active_pane_srt_t1

0x556a,	// (0x000237bf) bg_active_tab_pane_g1_cp5_srt

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp5_srt

0x5561,	// (0x000237b6) bg_active_tab_pane_g3_cp5_srt

0x6c90,	// (0x00024ee5) navi_text_pane_srt_t1

0x6c88,	// (0x00024edd) navi_icon_pane_srt_g1

0x5919,	// (0x00023b6e) midp_editing_number_pane_srt

0x5810,	// (0x00023a65) midp_ticker_pane_srt

0x5921,	// (0x00023b76) midp_ticker_pane_srt_g1

0x5929,	// (0x00023b7e) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002d9a2) midp_ticker_pane_srt_g

0x5931,	// (0x00023b86) midp_ticker_pane_srt_t1

0x6c79,	// (0x00024ece) midp_editing_number_pane_t1_copy1

0xa20f,	// (0x00028464) listscroll_midp_pane

0xa20f,	// (0x00028464) midp_form_pane

0x5818,	// (0x00023a6d) midp_info_popup_window_ParamLimits

0x5818,	// (0x00023a6d) midp_info_popup_window

0x4f66,	// (0x000231bb) bg_popup_sub_pane_cp50_ParamLimits

0x4f66,	// (0x000231bb) bg_popup_sub_pane_cp50

0x5f62,	// (0x000241b7) listscroll_midp_info_pane_ParamLimits

0x5f62,	// (0x000241b7) listscroll_midp_info_pane

0x5f4a,	// (0x0002419f) listscroll_form_midp_pane_ParamLimits

0x5f4a,	// (0x0002419f) listscroll_form_midp_pane

0x5f56,	// (0x000241ab) scroll_bar_cp050

0xae96,	// (0x000290eb) list_midp_pane

0x75cc,	// (0x00025821) signal_pane_g2_cp

0x5e7c,	// (0x000240d1) listscroll_midp_info_pane_t1_ParamLimits

0x5e7c,	// (0x000240d1) listscroll_midp_info_pane_t1

0x5e94,	// (0x000240e9) listscroll_midp_info_pane_t2_ParamLimits

0x5e94,	// (0x000240e9) listscroll_midp_info_pane_t2

0x5ed2,	// (0x00024127) listscroll_midp_info_pane_t3_ParamLimits

0x5ed2,	// (0x00024127) listscroll_midp_info_pane_t3

0x5f0c,	// (0x00024161) listscroll_midp_info_pane_t4_ParamLimits

0x5f0c,	// (0x00024161) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0002da55) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0002da55) listscroll_midp_info_pane_t

0x4fbb,	// (0x00023210) scroll_pane_cp21

0x5e20,	// (0x00024075) form_midp_field_choice_group_pane

0x5e29,	// (0x0002407e) form_midp_field_text_pane

0x5e62,	// (0x000240b7) form_midp_field_time_pane

0x5e6a,	// (0x000240bf) form_midp_gauge_slider_pane

0x5e73,	// (0x000240c8) form_midp_gauge_wait_pane

0x4855,	// (0x00022aaa) form_midp_image_pane

0xdaac,	// (0x0002bd01) list_single_midp_pane_ParamLimits

0xdaac,	// (0x0002bd01) list_single_midp_pane

0x5dee,	// (0x00024043) form_midp_field_text_pane_t1

0x5c44,	// (0x00023e99) input_focus_pane_cp050

0x5e0f,	// (0x00024064) list_midp_form_text_pane

0x5dbd,	// (0x00024012) form_midp_field_choice_group_pane_t1

0x5dcb,	// (0x00024020) input_focus_pane_cp051

0x5ddf,	// (0x00024034) list_midp_choice_pane

0x4855,	// (0x00022aaa) status_idle_pane

0x5da1,	// (0x00023ff6) form_midp_field_time_pane_t1

0x47d3,	// (0x00022a28) wait_anim_pane_g2_copy1

0x5daf,	// (0x00024004) form_midp_field_time_pane_t2

0x0001,

0x5883,	// (0x00023ad8) aid_navinavi_width_2_pane

0xf7fb,	// (0x0002da50) form_midp_field_time_pane_t

0x4855,	// (0x00022aaa) input_focus_pane_cp052

0x4855,	// (0x00022aaa) bg_input_focus_pane_cp040

0x5d7d,	// (0x00023fd2) form_midp_gauge_slider_pane_t1

0x5d8b,	// (0x00023fe0) form_midp_gauge_slider_pane_t2

0xae7a,	// (0x000290cf) form_midp_gauge_slider_pane_t3

0xae88,	// (0x000290dd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0002da47) form_midp_gauge_slider_pane_t

0x5d99,	// (0x00023fee) form_midp_slider_pane

0x48b9,	// (0x00022b0e) bg_input_focus_pane_cp041_ParamLimits

0x48b9,	// (0x00022b0e) bg_input_focus_pane_cp041

0x5d4d,	// (0x00023fa2) form_midp_gauge_wait_pane_t1_ParamLimits

0x5d4d,	// (0x00023fa2) form_midp_gauge_wait_pane_t1

0x5d5f,	// (0x00023fb4) form_midp_gauge_wait_pane_t2_ParamLimits

0x5d5f,	// (0x00023fb4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0002da42) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0002da42) form_midp_gauge_wait_pane_t

0x5d71,	// (0x00023fc6) form_midp_wait_pane_ParamLimits

0x5d71,	// (0x00023fc6) form_midp_wait_pane

0x5d17,	// (0x00023f6c) form_midp_image_pane_g1

0x5d20,	// (0x00023f75) form_midp_image_pane_t1

0x5d2f,	// (0x00023f84) form_midp_image_pane_t2

0x5d3e,	// (0x00023f93) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0002da3b) form_midp_image_pane_t

0x5d0e,	// (0x00023f63) list_single_midp_pane_g1

0xda9d,	// (0x0002bcf2) list_single_midp_pane_t1

0x5cfa,	// (0x00023f4f) list_midp_form_item_pane_ParamLimits

0x5cfa,	// (0x00023f4f) list_midp_form_item_pane

0x582b,	// (0x00023a80) list_midp_form_item_pane_t1

0x583a,	// (0x00023a8f) midp_ticker_pane_g1

0x5846,	// (0x00023a9b) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002d988) midp_ticker_pane_g

0x5852,	// (0x00023aa7) midp_ticker_pane_t1

0x6c79,	// (0x00024ece) midp_editing_number_pane_t1

0x6d78,	// (0x00024fcd) midp_editing_number_pane

0x6d84,	// (0x00024fd9) midp_ticker_pane

0x6c69,	// (0x00024ebe) ai_message_heading_pane

0x4855,	// (0x00022aaa) bg_popup_window_pane_cp14

0x6c71,	// (0x00024ec6) listscroll_ai_message_pane

0x6bf3,	// (0x00024e48) ai_message_heading_pane_g1_ParamLimits

0x6bf3,	// (0x00024e48) ai_message_heading_pane_g1

0x6bff,	// (0x00024e54) ai_message_heading_pane_g2_ParamLimits

0x6bff,	// (0x00024e54) ai_message_heading_pane_g2

0x6c0b,	// (0x00024e60) ai_message_heading_pane_g3_ParamLimits

0x6c0b,	// (0x00024e60) ai_message_heading_pane_g3

0x6c17,	// (0x00024e6c) ai_message_heading_pane_g4_ParamLimits

0x6c17,	// (0x00024e6c) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0002db7c) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0002db7c) ai_message_heading_pane_g

0x6c23,	// (0x00024e78) ai_message_heading_pane_t1_ParamLimits

0x6c23,	// (0x00024e78) ai_message_heading_pane_t1

0x6c3d,	// (0x00024e92) ai_message_heading_pane_t2_ParamLimits

0x6c3d,	// (0x00024e92) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0002db85) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0002db85) ai_message_heading_pane_t

0x6c4f,	// (0x00024ea4) bg_popup_heading_pane_cp1_ParamLimits

0x6c4f,	// (0x00024ea4) bg_popup_heading_pane_cp1

0x6be1,	// (0x00024e36) list_ai_message_pane_ParamLimits

0x6be1,	// (0x00024e36) list_ai_message_pane

0x4fbb,	// (0x00023210) scroll_pane_cp10

0x6b7d,	// (0x00024dd2) list_ai_message_pane_g1

0x6b85,	// (0x00024dda) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0002db59) list_ai_message_pane_g

0x6b8d,	// (0x00024de2) list_ai_message_pane_t1_ParamLimits

0x6b8d,	// (0x00024de2) list_ai_message_pane_t1

0x6ba2,	// (0x00024df7) list_ai_message_pane_t2_ParamLimits

0x6ba2,	// (0x00024df7) list_ai_message_pane_t2

0x6bb7,	// (0x00024e0c) list_ai_message_pane_t3_ParamLimits

0x6bb7,	// (0x00024e0c) list_ai_message_pane_t3

0x6bcc,	// (0x00024e21) list_ai_message_pane_t4_ParamLimits

0x6bcc,	// (0x00024e21) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0002db5e) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0002db5e) list_ai_message_pane_t

0x6b6b,	// (0x00024dc0) cell_ai_soft_ind_pane_ParamLimits

0x6b6b,	// (0x00024dc0) cell_ai_soft_ind_pane

0x5864,	// (0x00023ab9) cell_ai_soft_ind_pane_g1_ParamLimits

0x5864,	// (0x00023ab9) cell_ai_soft_ind_pane_g1

0x4855,	// (0x00022aaa) grid_highlight_cp1

0x5871,	// (0x00023ac6) text_secondary_cp56_ParamLimits

0x5871,	// (0x00023ac6) text_secondary_cp56

0x6b40,	// (0x00024d95) example_general_pane_ParamLimits

0x6b40,	// (0x00024d95) example_general_pane

0x6b4c,	// (0x00024da1) example_parent_pane_g1_ParamLimits

0x6b4c,	// (0x00024da1) example_parent_pane_g1

0x6b58,	// (0x00024dad) example_parent_pane_t1_ParamLimits

0x6b58,	// (0x00024dad) example_parent_pane_t1

0xa841,	// (0x00028a96) popup_preview_text_window_ParamLimits

0xa841,	// (0x00028a96) popup_preview_text_window

0x5755,	// (0x000239aa) list_single_pane_cp2_g4

0x4aba,	// (0x00022d0f) bg_popup_preview_window_pane_ParamLimits

0x4aba,	// (0x00022d0f) bg_popup_preview_window_pane

0x68f7,	// (0x00024b4c) popup_preview_text_window_t1_ParamLimits

0x68f7,	// (0x00024b4c) popup_preview_text_window_t1

0x6915,	// (0x00024b6a) popup_preview_text_window_t2_ParamLimits

0x6915,	// (0x00024b6a) popup_preview_text_window_t2

0x695e,	// (0x00024bb3) popup_preview_text_window_t3_ParamLimits

0x695e,	// (0x00024bb3) popup_preview_text_window_t3

0x69a3,	// (0x00024bf8) popup_preview_text_window_t4_ParamLimits

0x69a3,	// (0x00024bf8) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0002db2d) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0002db2d) popup_preview_text_window_t

0x6a21,	// (0x00024c76) scroll_pane_cp11

0x5b9c,	// (0x00023df1) bg_popup_preview_window_pane_g1

0x68b7,	// (0x00024b0c) bg_popup_preview_window_pane_g2

0x68bf,	// (0x00024b14) bg_popup_preview_window_pane_g3

0x68c7,	// (0x00024b1c) bg_popup_preview_window_pane_g4

0x68cf,	// (0x00024b24) bg_popup_preview_window_pane_g5

0x68d7,	// (0x00024b2c) bg_popup_preview_window_pane_g6

0x68df,	// (0x00024b34) bg_popup_preview_window_pane_g7

0x68e7,	// (0x00024b3c) bg_popup_preview_window_pane_g8

0x962c,	// (0x00027881) aid_popup_width_pane

0xa823,	// (0x00028a78) popup_midp_note_alarm_window_ParamLimits

0xa823,	// (0x00028a78) popup_midp_note_alarm_window

0x4e4d,	// (0x000230a2) data_form_pane_ParamLimits

0xd7e7,	// (0x0002ba3c) form_field_data_pane_g1

0x9c4a,	// (0x00027e9f) form_field_data_pane_t1_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_ParamLimits

0x4e67,	// (0x000230bc) data_form_wide_pane_ParamLimits

0xd7ef,	// (0x0002ba44) form_field_data_wide_pane_g1

0xd7fb,	// (0x0002ba50) form_field_data_wide_pane_t1_ParamLimits

0x4c7f,	// (0x00022ed4) input_focus_pane_cp6_ParamLimits

0x9c62,	// (0x00027eb7) input_popup_find_pane_g1_ParamLimits

0x9c62,	// (0x00027eb7) input_popup_find_pane_g1

0x9d81,	// (0x00027fd6) aid_navi_side_left_pane

0x9d91,	// (0x00027fe6) aid_navi_side_right_pane

0x63d4,	// (0x00024629) bg_popup_window_pane_cp30_ParamLimits

0x63d4,	// (0x00024629) bg_popup_window_pane_cp30

0x644e,	// (0x000246a3) popup_midp_note_alarm_window_g1_ParamLimits

0x644e,	// (0x000246a3) popup_midp_note_alarm_window_g1

0x647e,	// (0x000246d3) popup_midp_note_alarm_window_t1_ParamLimits

0x647e,	// (0x000246d3) popup_midp_note_alarm_window_t1

0x651f,	// (0x00024774) popup_midp_note_alarm_window_t2_ParamLimits

0x651f,	// (0x00024774) popup_midp_note_alarm_window_t2

0x65cd,	// (0x00024822) popup_midp_note_alarm_window_t3_ParamLimits

0x65cd,	// (0x00024822) popup_midp_note_alarm_window_t3

0x65f5,	// (0x0002484a) popup_midp_note_alarm_window_t4_ParamLimits

0x65f5,	// (0x0002484a) popup_midp_note_alarm_window_t4

0x6615,	// (0x0002486a) popup_midp_note_alarm_window_t5_ParamLimits

0x6615,	// (0x0002486a) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0002daca) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0002daca) popup_midp_note_alarm_window_t

0x66c1,	// (0x00024916) wait_bar_pane_cp1_ParamLimits

0x66c1,	// (0x00024916) wait_bar_pane_cp1

0x4855,	// (0x00022aaa) wait_anim_pane_copy1

0x4855,	// (0x00022aaa) wait_border_pane_copy1

0x611a,	// (0x0002436f) wait_border_pane_g1_copy1

0xd815,	// (0x0002ba6a) form_field_popup_pane_g1

0xd81d,	// (0x0002ba72) form_field_popup_pane_t1_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_cp7_ParamLimits

0x4e4d,	// (0x000230a2) list_form_pane_ParamLimits

0xd835,	// (0x0002ba8a) form_field_popup_wide_pane_g1

0xd83d,	// (0x0002ba92) form_field_popup_wide_pane_t1_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_cp8_ParamLimits

0x4e93,	// (0x000230e8) list_form_wide_pane_ParamLimits

0x6e13,	// (0x00025068) aid_size_cell_graphic_pane

0xd8c2,	// (0x0002bb17) data_form_pane_t1_ParamLimits

0xdad4,	// (0x0002bd29) data_form_wide_pane_t1_ParamLimits

0xaab1,	// (0x00028d06) bg_status_flat_pane

0x9940,	// (0x00027b95) title_pane_t1_ParamLimits

0x486b,	// (0x00022ac0) title_pane_t2_ParamLimits

0x4891,	// (0x00022ae6) title_pane_t3_ParamLimits

0xf532,	// (0x0002d787) title_pane_t_ParamLimits

0x9eb9,	// (0x0002810e) level_1_signal_ParamLimits

0x9ec6,	// (0x0002811b) level_2_signal_ParamLimits

0x9ed3,	// (0x00028128) level_3_signal_ParamLimits

0x9ee0,	// (0x00028135) level_4_signal_ParamLimits

0x9eed,	// (0x00028142) level_5_signal_ParamLimits

0x9efa,	// (0x0002814f) level_6_signal_ParamLimits

0x9f07,	// (0x0002815c) level_7_signal_ParamLimits

0x9eb9,	// (0x0002810e) level_1_battery_ParamLimits

0x9ec6,	// (0x0002811b) level_2_battery_ParamLimits

0x9ed3,	// (0x00028128) level_3_battery_ParamLimits

0x9ee0,	// (0x00028135) level_4_battery_ParamLimits

0x9eed,	// (0x00028142) level_5_battery_ParamLimits

0x9efa,	// (0x0002814f) level_6_battery_ParamLimits

0x9f07,	// (0x0002815c) level_7_battery_ParamLimits

0x6303,	// (0x00024558) bg_status_flat_pane_g1

0x630b,	// (0x00024560) bg_status_flat_pane_g2

0x6313,	// (0x00024568) bg_status_flat_pane_g3

0x631b,	// (0x00024570) bg_status_flat_pane_g4

0x6323,	// (0x00024578) bg_status_flat_pane_g5

0x632b,	// (0x00024580) bg_status_flat_pane_g6

0x6333,	// (0x00024588) bg_status_flat_pane_g7

0x99a8,	// (0x00027bfd) tabs_3_active_pane_t1_ParamLimits

0x99a8,	// (0x00027bfd) tabs_3_passive_pane_t1_ParamLimits

0x99c2,	// (0x00027c17) tabs_4_active_pane_t1_ParamLimits

0x99c2,	// (0x00027c17) tabs_4_1_passive_pane_t1_ParamLimits

0x9c76,	// (0x00027ecb) tabs_2_active_pane_t1_ParamLimits

0x9c76,	// (0x00027ecb) tabs_2_passive_pane_t1_ParamLimits

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp4_ParamLimits

0x9c96,	// (0x00027eeb) tabs_2_long_active_pane_t1_ParamLimits

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp4_ParamLimits

0xada3,	// (0x00028ff8) list_single_midp_graphic_pane_t1_ParamLimits

0x9c88,	// (0x00027edd) bg_active_tab_pane_cp5_ParamLimits

0x9cb5,	// (0x00027f0a) tabs_3_long_active_pane_t1_ParamLimits

0x9ca9,	// (0x00027efe) bg_passive_tab_pane_cp5_ParamLimits

0xada3,	// (0x00028ff8) list_single_midp_graphic_pane_t1

0xaab1,	// (0x00028d06) bg_status_flat_pane_ParamLimits

0x5a7b,	// (0x00023cd0) indicator_pane_cp2_ParamLimits

0x5a7b,	// (0x00023cd0) indicator_pane_cp2

0xabfa,	// (0x00028e4f) navi_pane_srt_ParamLimits

0xabfa,	// (0x00028e4f) navi_pane_srt

0x5aa3,	// (0x00023cf8) popup_clock_digital_analogue_window_cp1

0x48fd,	// (0x00022b52) indicator_pane_t1

0x5810,	// (0x00023a65) copy_highlight_pane

0x5810,	// (0x00023a65) cursor_graphics_pane

0x5810,	// (0x00023a65) graphic_within_text_pane

0x5810,	// (0x00023a65) link_highlight_pane

0x69e4,	// (0x00024c39) popup_preview_text_window_t5_ParamLimits

0x69e4,	// (0x00024c39) popup_preview_text_window_t5

0x588b,	// (0x00023ae0) cursor_digital_pane

0x588b,	// (0x00023ae0) cursor_primary_pane

0x589c,	// (0x00023af1) cursor_primary_small_pane

0x58a4,	// (0x00023af9) cursor_secondary_pane

0x58ac,	// (0x00023b01) cursor_title_pane

0x588b,	// (0x00023ae0) link_highlight_digital_pane

0x5893,	// (0x00023ae8) link_highlight_primary_pane

0x589c,	// (0x00023af1) link_highlight_primary_small_pane

0x58a4,	// (0x00023af9) link_highlight_secondary_pane

0x58ac,	// (0x00023b01) link_highlight_title_pane

0x588b,	// (0x00023ae0) copy_highlight_digital_pane

0x588b,	// (0x00023ae0) copy_highlight_primary_pane

0x589c,	// (0x00023af1) copy_highlight_primary_small_pane

0x58a4,	// (0x00023af9) copy_highlight_secondary_pane

0x58ac,	// (0x00023b01) copy_highlight_title_pane

0x58a4,	// (0x00023af9) graphic_text_digital_pane

0x6383,	// (0x000245d8) graphic_text_primary_pane

0x638c,	// (0x000245e1) graphic_text_primary_small_pane

0x589c,	// (0x00023af1) graphic_text_secondary_pane

0x588b,	// (0x00023ae0) graphic_text_title_pane

0xa2b6,	// (0x0002850b) cursor_primary_pane_g1

0x6375,	// (0x000245ca) cursor_text_primary_t1

0xaeda,	// (0x0002912f) cursor_primary_small_pane_g1

0x6367,	// (0x000245bc) cursor_text_primary_small_t1

0xaed2,	// (0x00029127) cursor_primary_small_pane_g1_copy1

0x6359,	// (0x000245ae) cursor_text_primary_small_t1_copy1

0x634b,	// (0x000245a0) cursor_text_title_t1

0xaeca,	// (0x0002911f) cursor_title_pane_g1

0xa2b6,	// (0x0002850b) cursor_digital_pane_g1

0x58b4,	// (0x00023b09) cursor_text_digital_t1

0x58c2,	// (0x00023b17) link_highlight_primary_pane_g1

0x62f4,	// (0x00024549) link_highlight_primary_pane_t1

0x58c2,	// (0x00023b17) link_highlight_primary_small_pane_g1

0x58ca,	// (0x00023b1f) link_highlight_primary_small_pane_t1

0x58d9,	// (0x00023b2e) link_highlight_secondary_pane_g1

0x58e1,	// (0x00023b36) link_highlight_secondary_pane_t1

0x6259,	// (0x000244ae) link_highlight_title_pane_g1

0x6270,	// (0x000244c5) link_highlight_title_pane_t1

0x6259,	// (0x000244ae) link_highlight_digital_pane_g1

0x6261,	// (0x000244b6) link_highlight_digital_pane_t1

0x6135,	// (0x0002438a) copy_highlight_primary_pane_g1

0x615b,	// (0x000243b0) copy_highlight_primary_pane_t1

0x6135,	// (0x0002438a) copy_highlight_primary_small_pane_g1

0x614c,	// (0x000243a1) copy_highlight_primary_small_pane_t1

0x58f0,	// (0x00023b45) copy_highlight_secondary_pane_g1

0x58f8,	// (0x00023b4d) copy_highlight_secondary_pane_t1

0x6135,	// (0x0002438a) copy_highlight_title_pane_g1

0x613d,	// (0x00024392) copy_highlight_title_pane_t1

0x6135,	// (0x0002438a) copy_highlight_digital_pane_g1

0x6f0e,	// (0x00025163) copy_highlight_digital_pane_t1

0x6e62,	// (0x000250b7) graphic_text_primary_pane_g1

0x6ef2,	// (0x00025147) graphic_text_primary_pane_t1

0x6f00,	// (0x00025155) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0002dbf4) graphic_text_primary_pane_t

0x6ece,	// (0x00025123) graphic_text_primary_small_pane_g1

0x6ed6,	// (0x0002512b) graphic_text_primary_small_pane_t1

0x6ee4,	// (0x00025139) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0002dbef) graphic_text_primary_small_pane_t

0x6eaa,	// (0x000250ff) graphic_text_secondary_pane_g1

0x6eb2,	// (0x00025107) graphic_text_secondary_pane_t1

0x6ec0,	// (0x00025115) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0002dbea) graphic_text_secondary_pane_t

0x6e86,	// (0x000250db) graphic_text_title_pane_g1

0x6e8e,	// (0x000250e3) graphic_text_title_pane_t1

0x6e9c,	// (0x000250f1) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0002dbe5) graphic_text_title_pane_t

0x6e62,	// (0x000250b7) graphic_text_digital_pane_g1

0x6e6a,	// (0x000250bf) graphic_text_digital_pane_t1

0x6e78,	// (0x000250cd) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0002dbe0) graphic_text_digital_pane_t

0x48b9,	// (0x00022b0e) navi_icon_pane_srt_ParamLimits

0x48b9,	// (0x00022b0e) navi_icon_pane_srt

0x4855,	// (0x00022aaa) navi_midp_pane_srt

0x4855,	// (0x00022aaa) navi_navi_pane_srt

0x48b9,	// (0x00022b0e) navi_text_pane_srt_ParamLimits

0x48b9,	// (0x00022b0e) navi_text_pane_srt

0x6cec,	// (0x00024f41) navi_navi_icon_text_pane_srt

0x6d06,	// (0x00024f5b) navi_navi_pane_srt_g1_ParamLimits

0x6d06,	// (0x00024f5b) navi_navi_pane_srt_g1

0x6cf4,	// (0x00024f49) navi_navi_pane_srt_g2_ParamLimits

0x6cf4,	// (0x00024f49) navi_navi_pane_srt_g2

0x0001,

0xf8c0,	// (0x0002db15) navi_navi_pane_srt_g_ParamLimits

0xf8c0,	// (0x0002db15) navi_navi_pane_srt_g

0x6d18,	// (0x00024f6d) navi_navi_tabs_pane_srt

0x6cec,	// (0x00024f41) navi_navi_text_pane_srt

0x6cec,	// (0x00024f41) navi_navi_volume_pane_srt

0x6e53,	// (0x000250a8) navi_navi_text_pane_srt_t1

0xb4e9,	// (0x0002973e) navi_navi_volume_pane_srt_g1

0xb4f1,	// (0x00029746) volume_small_pane_srt_ParamLimits

0xb4f1,	// (0x00029746) volume_small_pane_srt

0xa2be,	// (0x00028513) volume_small_pane_srt_g1_ParamLimits

0xa2be,	// (0x00028513) volume_small_pane_srt_g1

0xa2ce,	// (0x00028523) volume_small_pane_srt_g2_ParamLimits

0xa2ce,	// (0x00028523) volume_small_pane_srt_g2

0xa2df,	// (0x00028534) volume_small_pane_srt_g3_ParamLimits

0xa2df,	// (0x00028534) volume_small_pane_srt_g3

0xa2f0,	// (0x00028545) volume_small_pane_srt_g4_ParamLimits

0xa2f0,	// (0x00028545) volume_small_pane_srt_g4

0xa301,	// (0x00028556) volume_small_pane_srt_g5_ParamLimits

0xa301,	// (0x00028556) volume_small_pane_srt_g5

0xa312,	// (0x00028567) volume_small_pane_srt_g6_ParamLimits

0xa312,	// (0x00028567) volume_small_pane_srt_g6

0xa323,	// (0x00028578) volume_small_pane_srt_g7_ParamLimits

0xa323,	// (0x00028578) volume_small_pane_srt_g7

0xa334,	// (0x00028589) volume_small_pane_srt_g8_ParamLimits

0xa334,	// (0x00028589) volume_small_pane_srt_g8

0xa345,	// (0x0002859a) volume_small_pane_srt_g9_ParamLimits

0xa345,	// (0x0002859a) volume_small_pane_srt_g9

0xa356,	// (0x000285ab) volume_small_pane_srt_g10_ParamLimits

0xa356,	// (0x000285ab) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002d98d) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002d98d) volume_small_pane_srt_g

0x4b63,	// (0x00022db8) query_popup_data_pane_cp2

0x6e39,	// (0x0002508e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6e39,	// (0x0002508e) navi_navi_icon_text_pane_srt_t1

0x6383,	// (0x000245d8) navi_tabs_2_long_pane_srt

0x6383,	// (0x000245d8) navi_tabs_2_pane_srt

0x6383,	// (0x000245d8) navi_tabs_3_long_pane_srt

0x6383,	// (0x000245d8) navi_tabs_3_pane_srt

0x6383,	// (0x000245d8) navi_tabs_4_pane_srt

0xb4c9,	// (0x0002971e) tabs_2_active_pane_srt_ParamLimits

0xb4c9,	// (0x0002971e) tabs_2_active_pane_srt

0xb4d9,	// (0x0002972e) tabs_2_passive_pane_srt_ParamLimits

0xb4d9,	// (0x0002972e) tabs_2_passive_pane_srt

0x4ff2,	// (0x00023247) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4ff2,	// (0x00023247) bg_passive_tab_pane_cp1_srt

0x6d42,	// (0x00024f97) bg_passive_tab_pane_g1_cp1_srt

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp1_srt

0x6d39,	// (0x00024f8e) bg_passive_tab_pane_g3_cp1_srt

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp1_srt_ParamLimits

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp1_srt

0x6d31,	// (0x00024f86) tabs_2_active_pane_srt_g1

0x9c76,	// (0x00027ecb) tabs_2_active_pane_srt_t1_ParamLimits

0x9c76,	// (0x00027ecb) tabs_2_active_pane_srt_t1

0x6d42,	// (0x00024f97) bg_active_tab_pane_g1_cp1_srt

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp1_srt

0x6d39,	// (0x00024f8e) bg_active_tab_pane_g3_cp1_srt

0xb496,	// (0x000296eb) tabs_3_active_pane_srt_ParamLimits

0xb496,	// (0x000296eb) tabs_3_active_pane_srt

0xb4a7,	// (0x000296fc) tabs_3_passive_pane_cp_srt_ParamLimits

0xb4a7,	// (0x000296fc) tabs_3_passive_pane_cp_srt

0xb4b8,	// (0x0002970d) tabs_3_passive_pane_srt_ParamLimits

0xb4b8,	// (0x0002970d) tabs_3_passive_pane_srt

0x4ff2,	// (0x00023247) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4ff2,	// (0x00023247) bg_passive_tab_pane_cp2_srt

0x5910,	// (0x00023b65) bg_passive_tab_pane_g1_cp2_srt

0x551a,	// (0x0002376f) bg_passive_tab_pane_g2_cp2_srt

0x5907,	// (0x00023b5c) bg_passive_tab_pane_g3_cp2_srt

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp2_srt_ParamLimits

0x48b9,	// (0x00022b0e) bg_active_tab_pane_cp2_srt

0x6e29,	// (0x0002507e) tabs_3_active_pane_srt_g1

0x99a8,	// (0x00027bfd) tabs_3_active_pane_srt_t1_ParamLimits

0x99a8,	// (0x00027bfd) tabs_3_active_pane_srt_t1

0x5910,	// (0x00023b65) bg_active_tab_pane_g1_cp2_srt

0x551a,	// (0x0002376f) bg_active_tab_pane_g2_cp2_srt

0x5907,	// (0x00023b5c) bg_active_tab_pane_g3_cp2_srt

0xb44e,	// (0x000296a3) tabs_4_active_pane_srt_ParamLimits

0xb44e,	// (0x000296a3) tabs_4_active_pane_srt

0xb460,	// (0x000296b5) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb460,	// (0x000296b5) tabs_4_passive_pane_cp2_srt

0xa563,	// (0x000287b8) aid_size_cell_toolbar

0x9ca9,	// (0x00027efe) main_idle_act_pane_ParamLimits

0xa6de,	// (0x00028933) popup_large_graphic_colour_window_ParamLimits

0xa992,	// (0x00028be7) popup_toolbar_window_ParamLimits

0xa992,	// (0x00028be7) popup_toolbar_window

0x6d97,	// (0x00024fec) list_single_graphic_2heading_pane_ParamLimits

0x6d97,	// (0x00024fec) list_single_graphic_2heading_pane

0x51b7,	// (0x0002340c) aid_size_cell_apps_grid_lsc_pane

0x51c9,	// (0x0002341e) aid_size_cell_apps_grid_prt_pane

0x4ff2,	// (0x00023247) bg_wml_button_pane_cp1_ParamLimits

0x4ff2,	// (0x00023247) bg_wml_button_pane_cp1

0x5dee,	// (0x00024043) form_midp_field_text_pane_t1_ParamLimits

0x5c44,	// (0x00023e99) input_focus_pane_cp050_ParamLimits

0x5e0f,	// (0x00024064) list_midp_form_text_pane_ParamLimits

0x5dcb,	// (0x00024020) input_focus_pane_cp051_ParamLimits

0x5ddf,	// (0x00024034) list_midp_choice_pane_ParamLimits

0x5cc8,	// (0x00023f1d) list_single_2graphic_pane_cp3_ParamLimits

0x5cc8,	// (0x00023f1d) list_single_2graphic_pane_cp3

0x5cdb,	// (0x00023f30) list_single_midp_graphic_pane_ParamLimits

0x5cdb,	// (0x00023f30) list_single_midp_graphic_pane

0x95a2,	// (0x000277f7) list_single_graphic_2heading_pane_g1_ParamLimits

0x95a2,	// (0x000277f7) list_single_graphic_2heading_pane_g1

0x95ae,	// (0x00027803) list_single_graphic_2heading_pane_g4_ParamLimits

0x95ae,	// (0x00027803) list_single_graphic_2heading_pane_g4

0x95ba,	// (0x0002780f) list_single_graphic_2heading_pane_g5_ParamLimits

0x95ba,	// (0x0002780f) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002d9e0) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002d9e0) list_single_graphic_2heading_pane_g

0x95c6,	// (0x0002781b) list_single_graphic_2heading_pane_t1_ParamLimits

0x95c6,	// (0x0002781b) list_single_graphic_2heading_pane_t1

0x95da,	// (0x0002782f) list_single_graphic_2heading_pane_t2_ParamLimits

0x95da,	// (0x0002782f) list_single_graphic_2heading_pane_t2

0x95f4,	// (0x00027849) list_single_graphic_2heading_pane_t3_ParamLimits

0x95f4,	// (0x00027849) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002d9e7) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002d9e7) list_single_graphic_2heading_pane_t

0x5ae6,	// (0x00023d3b) bg_popup_sub_pane_cp2

0x5b0c,	// (0x00023d61) grid_toobar_pane

0xad1f,	// (0x00028f74) cell_toolbar_pane_ParamLimits

0xad1f,	// (0x00028f74) cell_toolbar_pane

0x5b42,	// (0x00023d97) cell_toolbar_pane_g1_ParamLimits

0x5b42,	// (0x00023d97) cell_toolbar_pane_g1

0x5b54,	// (0x00023da9) cell_toolbar_pane_g2_ParamLimits

0x5b54,	// (0x00023da9) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002d9f5) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002d9f5) cell_toolbar_pane_g

0x5b76,	// (0x00023dcb) grid_highlight_pane_cp2_ParamLimits

0x5b76,	// (0x00023dcb) grid_highlight_pane_cp2

0x5b90,	// (0x00023de5) toolbar_button_pane

0x5b9c,	// (0x00023df1) toolbar_button_pane_g1

0x5bac,	// (0x00023e01) toolbar_button_pane_g2

0x5ba4,	// (0x00023df9) toolbar_button_pane_g3

0x5bbc,	// (0x00023e11) toolbar_button_pane_g4

0x5bb4,	// (0x00023e09) toolbar_button_pane_g5

0x5bc4,	// (0x00023e19) toolbar_button_pane_g6

0x5bcc,	// (0x00023e21) toolbar_button_pane_g7

0x5bdc,	// (0x00023e31) toolbar_button_pane_g8

0x5bd4,	// (0x00023e29) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002d9fa) toolbar_button_pane_g

0xad4e,	// (0x00028fa3) list_single_2graphic_pane_g1_cp3_ParamLimits

0xad4e,	// (0x00028fa3) list_single_2graphic_pane_g1_cp3

0xad5a,	// (0x00028faf) list_single_2graphic_pane_g2_cp3_ParamLimits

0xad5a,	// (0x00028faf) list_single_2graphic_pane_g2_cp3

0xad69,	// (0x00028fbe) list_single_2graphic_pane_g3_cp3

0xad71,	// (0x00028fc6) list_single_2graphic_pane_g4_cp3_ParamLimits

0xad71,	// (0x00028fc6) list_single_2graphic_pane_g4_cp3

0xad7d,	// (0x00028fd2) list_single_2graphic_pane_t1_cp3_ParamLimits

0xad7d,	// (0x00028fd2) list_single_2graphic_pane_t1_cp3

0xad97,	// (0x00028fec) list_single_midp_graphic_pane_g2_ParamLimits

0xad97,	// (0x00028fec) list_single_midp_graphic_pane_g2

0xa56b,	// (0x000287c0) aid_zoom_text_primary

0x959a,	// (0x000277ef) aid_zoom_text_secondary

0xa397,	// (0x000285ec) status_small_pane_g7_ParamLimits

0xa397,	// (0x000285ec) status_small_pane_g7

0xa3ba,	// (0x0002860f) status_small_pane_t1_ParamLimits

0x9923,	// (0x00027b78) title_pane_g2

0x0003,

0xf529,	// (0x0002d77e) title_pane_g

0x9b75,	// (0x00027dca) aid_size_cell_colour_1_pane_ParamLimits

0x9b75,	// (0x00027dca) aid_size_cell_colour_1_pane

0x9b89,	// (0x00027dde) aid_size_cell_colour_2_pane_ParamLimits

0x9b89,	// (0x00027dde) aid_size_cell_colour_2_pane

0x9b9d,	// (0x00027df2) aid_size_cell_colour_3_pane_ParamLimits

0x9b9d,	// (0x00027df2) aid_size_cell_colour_3_pane

0x9bb1,	// (0x00027e06) aid_size_cell_colour_4_pane_ParamLimits

0x9bb1,	// (0x00027e06) aid_size_cell_colour_4_pane

0x9ce3,	// (0x00027f38) title_pane_stacon_g1_ParamLimits

0x9ce3,	// (0x00027f38) title_pane_stacon_g1

0x61b2,	// (0x00024407) popup_note_wait_window_g3_ParamLimits

0x61b2,	// (0x00024407) popup_note_wait_window_g3

0x6228,	// (0x0002447d) popup_note_wait_window_t5_ParamLimits

0x6228,	// (0x0002447d) popup_note_wait_window_t5

0x4855,	// (0x00022aaa) main_feb_china_hwr_fs_writing_pane

0xa5f3,	// (0x00028848) popup_feb_china_hwr_fs_window_ParamLimits

0xa5f3,	// (0x00028848) popup_feb_china_hwr_fs_window

0xadb9,	// (0x0002900e) aid_size_cell_hwr_fs_ParamLimits

0xadb9,	// (0x0002900e) aid_size_cell_hwr_fs

0x5c44,	// (0x00023e99) bg_popup_sub_pane_cp3_ParamLimits

0x5c44,	// (0x00023e99) bg_popup_sub_pane_cp3

0xadce,	// (0x00029023) grid_hwr_fs_pane_ParamLimits

0xadce,	// (0x00029023) grid_hwr_fs_pane

0xade2,	// (0x00029037) linegrid_hwr_fs_pane_ParamLimits

0xade2,	// (0x00029037) linegrid_hwr_fs_pane

0xadf2,	// (0x00029047) cell_hwr_fs_pane_ParamLimits

0xadf2,	// (0x00029047) cell_hwr_fs_pane

0x5c50,	// (0x00023ea5) linegrid_hwr_fs_pane_g1_ParamLimits

0x5c50,	// (0x00023ea5) linegrid_hwr_fs_pane_g1

0xae10,	// (0x00029065) linegrid_hwr_fs_pane_g2_ParamLimits

0xae10,	// (0x00029065) linegrid_hwr_fs_pane_g2

0x5c5c,	// (0x00023eb1) linegrid_hwr_fs_pane_g3_ParamLimits

0x5c5c,	// (0x00023eb1) linegrid_hwr_fs_pane_g3

0xae22,	// (0x00029077) linegrid_hwr_fs_pane_g4_ParamLimits

0xae22,	// (0x00029077) linegrid_hwr_fs_pane_g4

0xae3c,	// (0x00029091) linegrid_hwr_fs_pane_g5_ParamLimits

0xae3c,	// (0x00029091) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0002da20) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0002da20) linegrid_hwr_fs_pane_g

0x5c68,	// (0x00023ebd) cell_hwr_fs_pane_g1_ParamLimits

0x5c68,	// (0x00023ebd) cell_hwr_fs_pane_g1

0x5ab4,	// (0x00023d09) cell_hwr_fs_pane_g2_ParamLimits

0x5ab4,	// (0x00023d09) cell_hwr_fs_pane_g2

0xae52,	// (0x000290a7) cell_hwr_fs_pane_g3_ParamLimits

0xae52,	// (0x000290a7) cell_hwr_fs_pane_g3

0xae5f,	// (0x000290b4) cell_hwr_fs_pane_g4_ParamLimits

0xae5f,	// (0x000290b4) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0002da2b) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0002da2b) cell_hwr_fs_pane_g

0xae6c,	// (0x000290c1) cell_hwr_fs_pane_t1

0x4855,	// (0x00022aaa) grid_highlight_pane_cp6

0x4855,	// (0x00022aaa) main_idle_act2_pane

0x4fa2,	// (0x000231f7) aid_inside_area_popup_secondary

0xb03d,	// (0x00029292) aid_inside_area_window_primary_ParamLimits

0xb03d,	// (0x00029292) aid_inside_area_window_primary

0x6f1d,	// (0x00025172) ai2_news_ticker_pane

0x6f25,	// (0x0002517a) aid_size_cell_ai1_link_ParamLimits

0x6f25,	// (0x0002517a) aid_size_cell_ai1_link

0xb506,	// (0x0002975b) popup_ai2_data_window_ParamLimits

0xb506,	// (0x0002975b) popup_ai2_data_window

0x6f3f,	// (0x00025194) popup_ai2_link_window_ParamLimits

0x6f3f,	// (0x00025194) popup_ai2_link_window

0x5c44,	// (0x00023e99) bg_popup_sub_pane_cp4_ParamLimits

0x5c44,	// (0x00023e99) bg_popup_sub_pane_cp4

0x6f53,	// (0x000251a8) grid_ai2_link_pane_ParamLimits

0x6f53,	// (0x000251a8) grid_ai2_link_pane

0x6f6a,	// (0x000251bf) popup_ai2_link_window_g1_ParamLimits

0x6f6a,	// (0x000251bf) popup_ai2_link_window_g1

0x6f76,	// (0x000251cb) popup_ai2_link_window_g2_ParamLimits

0x6f76,	// (0x000251cb) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0002dbf9) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0002dbf9) popup_ai2_link_window_g

0x6f85,	// (0x000251da) ai2_mp_button_pane

0x6f8d,	// (0x000251e2) ai2_mp_volume_pane

0x5dcb,	// (0x00024020) bg_popup_sub_pane_cp5_ParamLimits

0x5dcb,	// (0x00024020) bg_popup_sub_pane_cp5

0x6f95,	// (0x000251ea) heading_ai2_gene_pane_ParamLimits

0x6f95,	// (0x000251ea) heading_ai2_gene_pane

0x6fa1,	// (0x000251f6) list_ai2_gene_pane_ParamLimits

0x6fa1,	// (0x000251f6) list_ai2_gene_pane

0x6fe9,	// (0x0002523e) cell_ai2_link_pane_ParamLimits

0x6fe9,	// (0x0002523e) cell_ai2_link_pane

0x6fff,	// (0x00025254) cell_ai2_link_pane_g1

0x4855,	// (0x00022aaa) grid_highlight_pane_cp7

0xb54d,	// (0x000297a2) ai2_mp_volume_pane_g1

0x70a4,	// (0x000252f9) ai2_mp_volume_pane_g2

0xb531,	// (0x00029786) list_ai2_gene_pane_t1

0x709c,	// (0x000252f1) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0002dc12) ai2_mp_volume_pane_g

0xb555,	// (0x000297aa) volume_small_pane_cp3

0x70ac,	// (0x00025301) aid_size_cell_ai2_button

0x70b4,	// (0x00025309) grid_ai2_button_pane

0x70bd,	// (0x00025312) cell_ai2_button_pane_ParamLimits

0x70bd,	// (0x00025312) cell_ai2_button_pane

0x47d3,	// (0x00022a28) cell_ai2_button_pane_g1

0x4855,	// (0x00022aaa) grid_highlight_pane_cp8

0x705c,	// (0x000252b1) ai2_gene_pane_t1_ParamLimits

0x705c,	// (0x000252b1) ai2_gene_pane_t1

0xa559,	// (0x000287ae) aid_height_parent_landscape

0x6cc5,	// (0x00024f1a) aid_height_set_list

0x6cd1,	// (0x00024f26) aid_size_parent

0x6e13,	// (0x00025068) aid_size_cell_graphic_pane_ParamLimits

0x6fb1,	// (0x00025206) popup_ai2_data_window_g1_ParamLimits

0x6fb1,	// (0x00025206) popup_ai2_data_window_g1

0x6fbd,	// (0x00025212) ai2_news_ticker_pane_g1

0x6fc5,	// (0x0002521a) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0002dbfe) ai2_news_ticker_pane_g

0x6fcd,	// (0x00025222) ai2_news_ticker_pane_t1

0x6fdb,	// (0x00025230) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0002dc03) ai2_news_ticker_pane_t

0x7008,	// (0x0002525d) heading_ai2_gene_pane_g1

0x7010,	// (0x00025265) heading_ai2_gene_pane_t1_ParamLimits

0x7010,	// (0x00025265) heading_ai2_gene_pane_t1

0x7025,	// (0x0002527a) list_highlight_pane_cp6

0xb51a,	// (0x0002976f) ai2_gene_pane_ParamLimits

0xb51a,	// (0x0002976f) ai2_gene_pane

0xb53f,	// (0x00029794) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0002dc08) list_ai2_gene_pane_t

0x702d,	// (0x00025282) list_highlight_pane_cp8_ParamLimits

0x702d,	// (0x00025282) list_highlight_pane_cp8

0x703e,	// (0x00025293) ai2_gene_pane_g1_ParamLimits

0x703e,	// (0x00025293) ai2_gene_pane_g1

0x7050,	// (0x000252a5) ai2_gene_pane_g2_ParamLimits

0x7050,	// (0x000252a5) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0002dc0d) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0002dc0d) ai2_gene_pane_g

0x4e00,	// (0x00023055) scroll_pane_cp12

0xa510,	// (0x00028765) control_pane_t3_ParamLimits

0xa510,	// (0x00028765) control_pane_t3

0xa3ab,	// (0x00028600) status_small_pane_g8_ParamLimits

0xa3ab,	// (0x00028600) status_small_pane_g8

0xa6b3,	// (0x00028908) popup_find_window_ParamLimits

0xa835,	// (0x00028a8a) popup_note_image_window_ParamLimits

0xd9fd,	// (0x0002bc52) list_double2_graphic_pane_vc_g1_ParamLimits

0xd9fd,	// (0x0002bc52) list_double2_graphic_pane_vc_g1

0xda09,	// (0x0002bc5e) list_double2_graphic_pane_vc_g2_ParamLimits

0xda09,	// (0x0002bc5e) list_double2_graphic_pane_vc_g2

0xda15,	// (0x0002bc6a) list_double2_graphic_pane_vc_g3_ParamLimits

0xda15,	// (0x0002bc6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002d9ee) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002d9ee) list_double2_graphic_pane_vc_g

0xd2b6,	// (0x0002b50b) list_double2_graphic_pane_vc_t1_ParamLimits

0xd2b6,	// (0x0002b50b) list_double2_graphic_pane_vc_t1

0xd29e,	// (0x0002b4f3) list_single_heading_pane_vc_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_heading_pane_vc_g1

0xd2aa,	// (0x0002b4ff) list_single_heading_pane_vc_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_single_heading_pane_vc_g

0xda21,	// (0x0002bc76) list_single_heading_pane_vc_t1_ParamLimits

0xda21,	// (0x0002bc76) list_single_heading_pane_vc_t1

0xda37,	// (0x0002bc8c) list_single_heading_pane_vc_t2_ParamLimits

0xda37,	// (0x0002bc8c) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0002da0f) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0002da0f) list_single_heading_pane_vc_t

0x5be4,	// (0x00023e39) list_setting_number_pane_vc_g1_ParamLimits

0x5be4,	// (0x00023e39) list_setting_number_pane_vc_g1

0x5bf0,	// (0x00023e45) list_setting_number_pane_vc_g2_ParamLimits

0x5bf0,	// (0x00023e45) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002da14) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002da14) list_setting_number_pane_vc_g

0xda49,	// (0x0002bc9e) list_setting_number_pane_vc_t1_ParamLimits

0xda49,	// (0x0002bc9e) list_setting_number_pane_vc_t1

0xda5d,	// (0x0002bcb2) list_setting_number_pane_vc_t2_ParamLimits

0xda5d,	// (0x0002bcb2) list_setting_number_pane_vc_t2

0xda79,	// (0x0002bcce) list_setting_number_pane_vc_t3_ParamLimits

0xda79,	// (0x0002bcce) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0002da19) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0002da19) list_setting_number_pane_vc_t

0xda91,	// (0x0002bce6) set_value_pane_vc_ParamLimits

0xda91,	// (0x0002bce6) set_value_pane_vc

0x6d97,	// (0x00024fec) list_double2_graphic_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double2_graphic_pane_vc

0xdb2a,	// (0x0002bd7f) list_double2_large_graphic_pane_vc_ParamLimits

0xdb2a,	// (0x0002bd7f) list_double2_large_graphic_pane_vc

0x6d97,	// (0x00024fec) list_double2_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double2_pane_vc

0x6d97,	// (0x00024fec) list_double_graphic_heading_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double_graphic_heading_pane_vc

0x6d97,	// (0x00024fec) list_double_graphic_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double_graphic_pane_vc

0x6d97,	// (0x00024fec) list_double_heading_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double_heading_pane_vc

0xdb3c,	// (0x0002bd91) list_double_large_graphic_pane_vc_ParamLimits

0xdb3c,	// (0x0002bd91) list_double_large_graphic_pane_vc

0x6d97,	// (0x00024fec) list_double_number_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double_number_pane_vc

0x6d97,	// (0x00024fec) list_double_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double_pane_vc

0x6d97,	// (0x00024fec) list_double_time_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_double_time_pane_vc

0x6d97,	// (0x00024fec) list_setting_number_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_setting_number_pane_vc

0x6d97,	// (0x00024fec) list_setting_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_setting_pane_vc

0x6d97,	// (0x00024fec) list_single_graphic_heading_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_single_graphic_heading_pane_vc

0x6d97,	// (0x00024fec) list_single_heading_pane_vc_ParamLimits

0x6d97,	// (0x00024fec) list_single_heading_pane_vc

0xdb5a,	// (0x0002bdaf) list_single_number_heading_pane_vc_ParamLimits

0xdb5a,	// (0x0002bdaf) list_single_number_heading_pane_vc

0xd9fd,	// (0x0002bc52) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd9fd,	// (0x0002bc52) list_double_graphic_heading_pane_vc_g1

0xd29e,	// (0x0002b4f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd29e,	// (0x0002b4f3) list_double_graphic_heading_pane_vc_g2

0xd2aa,	// (0x0002b4ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd2aa,	// (0x0002b4ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0002dc19) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0002dc19) list_double_graphic_heading_pane_vc_g

0xdb9e,	// (0x0002bdf3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdb9e,	// (0x0002bdf3) list_double_graphic_heading_pane_vc_t1

0xdbb4,	// (0x0002be09) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdbb4,	// (0x0002be09) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0002dc20) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0002dc20) list_double_graphic_heading_pane_vc_t

0x5be4,	// (0x00023e39) list_setting_pane_vc_g1_ParamLimits

0x5be4,	// (0x00023e39) list_setting_pane_vc_g1

0x5bf0,	// (0x00023e45) list_setting_pane_vc_g2_ParamLimits

0x5bf0,	// (0x00023e45) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002da14) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002da14) list_setting_pane_vc_g

0xdbcc,	// (0x0002be21) list_setting_pane_vc_t1_ParamLimits

0xdbcc,	// (0x0002be21) list_setting_pane_vc_t1

0xdbe0,	// (0x0002be35) list_setting_pane_vc_t2_ParamLimits

0xdbe0,	// (0x0002be35) list_setting_pane_vc_t2

0x0001,

0xfa0e,	// (0x0002dc63) list_setting_pane_vc_t_ParamLimits

0xfa0e,	// (0x0002dc63) list_setting_pane_vc_t

0xda91,	// (0x0002bce6) set_value_pane_cp_vc_ParamLimits

0xda91,	// (0x0002bce6) set_value_pane_cp_vc

0xd29e,	// (0x0002b4f3) list_single_number_heading_pane_vc_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_number_heading_pane_vc_g1

0xd2aa,	// (0x0002b4ff) list_single_number_heading_pane_vc_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_single_number_heading_pane_vc_g

0xda21,	// (0x0002bc76) list_single_number_heading_pane_vc_t1_ParamLimits

0xda21,	// (0x0002bc76) list_single_number_heading_pane_vc_t1

0xdbf4,	// (0x0002be49) list_single_number_heading_pane_vc_t2_ParamLimits

0xdbf4,	// (0x0002be49) list_single_number_heading_pane_vc_t2

0xd306,	// (0x0002b55b) list_single_number_heading_pane_vc_t3_ParamLimits

0xd306,	// (0x0002b55b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa13,	// (0x0002dc68) list_single_number_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x0002dc68) list_single_number_heading_pane_vc_t

0xd9fd,	// (0x0002bc52) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd9fd,	// (0x0002bc52) list_single_graphic_heading_pane_vc_g1

0xd29e,	// (0x0002b4f3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_graphic_heading_pane_vc_g4

0xd2aa,	// (0x0002b4ff) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd2aa,	// (0x0002b4ff) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c4,	// (0x0002dc19) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0002dc19) list_single_graphic_heading_pane_vc_g

0xda21,	// (0x0002bc76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xda21,	// (0x0002bc76) list_single_graphic_heading_pane_vc_t1

0xdc06,	// (0x0002be5b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdc06,	// (0x0002be5b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002dc6f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002dc6f) list_single_graphic_heading_pane_vc_t

0xd29e,	// (0x0002b4f3) list_double2_pane_vc_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_double2_pane_vc_g1

0xd2aa,	// (0x0002b4ff) list_double2_pane_vc_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_double2_pane_vc_g

0xdb01,	// (0x0002bd56) list_double2_pane_vc_t1_ParamLimits

0xdb01,	// (0x0002bd56) list_double2_pane_vc_t1

0xdc18,	// (0x0002be6d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xdc18,	// (0x0002be6d) list_double2_large_graphic_pane_vc_g1

0xdc24,	// (0x0002be79) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdc24,	// (0x0002be79) list_double2_large_graphic_pane_vc_g2

0xdc30,	// (0x0002be85) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdc30,	// (0x0002be85) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1f,	// (0x0002dc74) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1f,	// (0x0002dc74) list_double2_large_graphic_pane_vc_g

0xdc3c,	// (0x0002be91) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdc3c,	// (0x0002be91) list_double2_large_graphic_pane_vc_t1

0xdc52,	// (0x0002bea7) list_double_time_pane_vc_g1_ParamLimits

0xdc52,	// (0x0002bea7) list_double_time_pane_vc_g1

0xdc5e,	// (0x0002beb3) list_double_time_pane_vc_g2_ParamLimits

0xdc5e,	// (0x0002beb3) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002dc7b) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002dc7b) list_double_time_pane_vc_g

0xdc6a,	// (0x0002bebf) list_double_time_pane_vc_t1_ParamLimits

0xdc6a,	// (0x0002bebf) list_double_time_pane_vc_t1

0xdc88,	// (0x0002bedd) list_double_time_pane_vc_t2_ParamLimits

0xdc88,	// (0x0002bedd) list_double_time_pane_vc_t2

0xdcd1,	// (0x0002bf26) list_double_time_pane_vc_t3_ParamLimits

0xdcd1,	// (0x0002bf26) list_double_time_pane_vc_t3

0xdce3,	// (0x0002bf38) list_double_time_pane_vc_t4_ParamLimits

0xdce3,	// (0x0002bf38) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002dc80) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002dc80) list_double_time_pane_vc_t

0xd29e,	// (0x0002b4f3) list_double_pane_vc_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_double_pane_vc_g1

0xd2aa,	// (0x0002b4ff) list_double_pane_vc_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_double_pane_vc_g

0xdcf5,	// (0x0002bf4a) list_double_pane_vc_t1_ParamLimits

0xdcf5,	// (0x0002bf4a) list_double_pane_vc_t1

0xdd07,	// (0x0002bf5c) list_double_pane_vc_t2_ParamLimits

0xdd07,	// (0x0002bf5c) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002dc89) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002dc89) list_double_pane_vc_t

0xd29e,	// (0x0002b4f3) list_double_number_pane_vc_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_double_number_pane_vc_g1

0xd2aa,	// (0x0002b4ff) list_double_number_pane_vc_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_double_number_pane_vc_g

0xdd1d,	// (0x0002bf72) list_double_number_pane_vc_t1_ParamLimits

0xdd1d,	// (0x0002bf72) list_double_number_pane_vc_t1

0xdd31,	// (0x0002bf86) list_double_number_pane_vc_t2_ParamLimits

0xdd31,	// (0x0002bf86) list_double_number_pane_vc_t2

0xdd43,	// (0x0002bf98) list_double_number_pane_vc_t3_ParamLimits

0xdd43,	// (0x0002bf98) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002dc8e) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002dc8e) list_double_number_pane_vc_t

0xdd59,	// (0x0002bfae) list_double_large_graphic_pane_vc_g1_ParamLimits

0xdd59,	// (0x0002bfae) list_double_large_graphic_pane_vc_g1

0xdd81,	// (0x0002bfd6) list_double_large_graphic_pane_vc_g2_ParamLimits

0xdd81,	// (0x0002bfd6) list_double_large_graphic_pane_vc_g2

0xdd95,	// (0x0002bfea) list_double_large_graphic_pane_vc_g3_ParamLimits

0xdd95,	// (0x0002bfea) list_double_large_graphic_pane_vc_g3

0xdda4,	// (0x0002bff9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdda4,	// (0x0002bff9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002dc95) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002dc95) list_double_large_graphic_pane_vc_g

0xddb4,	// (0x0002c009) list_double_large_graphic_pane_vc_t1_ParamLimits

0xddb4,	// (0x0002c009) list_double_large_graphic_pane_vc_t1

0xddce,	// (0x0002c023) list_double_large_graphic_pane_vc_t2_ParamLimits

0xddce,	// (0x0002c023) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002dc9e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002dc9e) list_double_large_graphic_pane_vc_t

0xd29e,	// (0x0002b4f3) list_double_heading_pane_vc_g1_ParamLimits

0xd29e,	// (0x0002b4f3) list_double_heading_pane_vc_g1

0xd2aa,	// (0x0002b4ff) list_double_heading_pane_vc_g2_ParamLimits

0xd2aa,	// (0x0002b4ff) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7f8) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7f8) list_double_heading_pane_vc_g

0xddee,	// (0x0002c043) list_double_heading_pane_vc_t1_ParamLimits

0xddee,	// (0x0002c043) list_double_heading_pane_vc_t1

0xda21,	// (0x0002bc76) list_double_heading_pane_vc_t2_ParamLimits

0xda21,	// (0x0002bc76) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002dca3) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002dca3) list_double_heading_pane_vc_t

0xde00,	// (0x0002c055) list_double_graphic_pane_vc_g1_ParamLimits

0xde00,	// (0x0002c055) list_double_graphic_pane_vc_g1

0xde0c,	// (0x0002c061) list_double_graphic_pane_vc_g2_ParamLimits

0xde0c,	// (0x0002c061) list_double_graphic_pane_vc_g2

0xd29e,	// (0x0002b4f3) list_double_graphic_pane_vc_g3_ParamLimits

0xd29e,	// (0x0002b4f3) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002dca8) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002dca8) list_double_graphic_pane_vc_g

0xde29,	// (0x0002c07e) list_double_graphic_pane_vc_t1_ParamLimits

0xde29,	// (0x0002c07e) list_double_graphic_pane_vc_t1

0xde47,	// (0x0002c09c) list_double_graphic_pane_vc_t2_ParamLimits

0xde47,	// (0x0002c09c) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002dcb1) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002dcb1) list_double_graphic_pane_vc_t

0x9634,	// (0x00027889) aid_size_cell_fastswap

0x963c,	// (0x00027891) aid_size_cell_touch_ParamLimits

0x963c,	// (0x00027891) aid_size_cell_touch

0x97f0,	// (0x00027a45) popup_fast_swap_wide_window_ParamLimits

0x97f0,	// (0x00027a45) popup_fast_swap_wide_window

0x98b6,	// (0x00027b0b) touch_pane_ParamLimits

0x98b6,	// (0x00027b0b) touch_pane

0xd74b,	// (0x0002b9a0) button_value_adjust_pane_cp2

0x6d29,	// (0x00024f7e) button_value_adjust_pane_cp4

0xd76b,	// (0x0002b9c0) form_field_data_pane_cp2

0xd78a,	// (0x0002b9df) form_field_data_wide_pane_cp2

0x51ee,	// (0x00023443) bg_scroll_pane_ParamLimits

0x9e90,	// (0x000280e5) scroll_handle_pane_ParamLimits

0x9ea4,	// (0x000280f9) scroll_sc2_down_pane_ParamLimits

0x9ea4,	// (0x000280f9) scroll_sc2_down_pane

0x521f,	// (0x00023474) scroll_sc2_up_pane_ParamLimits

0x521f,	// (0x00023474) scroll_sc2_up_pane

0xb6d8,	// (0x0002992d) grid_wheel_folder_pane_g1_ParamLimits

0xb6d8,	// (0x0002992d) grid_wheel_folder_pane_g1

0xa193,	// (0x000283e8) clock_nsta_pane_cp2_ParamLimits

0xa193,	// (0x000283e8) clock_nsta_pane_cp2

0xa20f,	// (0x00028464) listscroll_midp_pane_ParamLimits

0xa21b,	// (0x00028470) midp_canvas_pane

0xa551,	// (0x000287a6) nsta_clock_indic_pane

0x59c5,	// (0x00023c1a) listscroll_form_pane_vc

0x59cd,	// (0x00023c22) listscroll_set_pane_vc_ParamLimits

0x59cd,	// (0x00023c22) listscroll_set_pane_vc

0xaacd,	// (0x00028d22) clock_nsta_pane

0xaae0,	// (0x00028d35) indicator_nsta_pane

0x5ae6,	// (0x00023d3b) bg_popup_sub_pane_cp2_ParamLimits

0x5afa,	// (0x00023d4f) find_pane_cp2_ParamLimits

0x5afa,	// (0x00023d4f) find_pane_cp2

0x5b0c,	// (0x00023d61) grid_toobar_pane_ParamLimits

0x5c18,	// (0x00023e6d) list_form_gen_pane_vc_ParamLimits

0x5c18,	// (0x00023e6d) list_form_gen_pane_vc

0x5c2e,	// (0x00023e83) scroll_pane_cp8_vc_ParamLimits

0x5c2e,	// (0x00023e83) scroll_pane_cp8_vc

0x5c7e,	// (0x00023ed3) data_form_wide_pane_vc_ParamLimits

0x5c7e,	// (0x00023ed3) data_form_wide_pane_vc

0x5c8a,	// (0x00023edf) form_field_data_wide_pane_vc_g1

0x5c92,	// (0x00023ee7) form_field_data_wide_pane_vc_t1_ParamLimits

0x5c92,	// (0x00023ee7) form_field_data_wide_pane_vc_t1

0x4e59,	// (0x000230ae) input_focus_pane_cp6_vc_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_cp6_vc

0xae96,	// (0x000290eb) list_midp_pane_ParamLimits

0xaea2,	// (0x000290f7) scroll_pane_cp16_ParamLimits

0xaea2,	// (0x000290f7) scroll_pane_cp16

0x5f98,	// (0x000241ed) button_value_adjust_pane_ParamLimits

0x5f98,	// (0x000241ed) button_value_adjust_pane

0xb211,	// (0x00029466) button_value_adjust_pane_cp6_ParamLimits

0xb211,	// (0x00029466) button_value_adjust_pane_cp6

0xb319,	// (0x0002956e) settings_code_pane_cp_ParamLimits

0xb319,	// (0x0002956e) settings_code_pane_cp

0x47d3,	// (0x00022a28) cell_touch_pane_g1

0x47d3,	// (0x00022a28) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002d933) cell_touch_pane_g

0xb55e,	// (0x000297b3) cell_touch_pane_cp_ParamLimits

0xb55e,	// (0x000297b3) cell_touch_pane_cp

0xb56e,	// (0x000297c3) cell_touch_pane_ParamLimits

0xb56e,	// (0x000297c3) cell_touch_pane

0x47d3,	// (0x00022a28) scroll_sc2_down_pane_g1

0x47d3,	// (0x00022a28) scroll_sc2_up_pane_g1

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp4_vc

0x70cf,	// (0x00025324) list_set_graphic_pane_vc_g1_ParamLimits

0x70cf,	// (0x00025324) list_set_graphic_pane_vc_g1

0x70db,	// (0x00025330) list_set_graphic_pane_vc_g2_ParamLimits

0x70db,	// (0x00025330) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0002dc25) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0002dc25) list_set_graphic_pane_vc_g

0x70e7,	// (0x0002533c) text_primary_small_cp13_vc_ParamLimits

0x70e7,	// (0x0002533c) text_primary_small_cp13_vc

0x70ff,	// (0x00025354) list_set_graphic_pane_vc_ParamLimits

0x70ff,	// (0x00025354) list_set_graphic_pane_vc

0x4855,	// (0x00022aaa) input_focus_pane_cp2_vc

0x47d3,	// (0x00022a28) setting_code_pane_vc_g1

0x7112,	// (0x00025367) setting_code_pane_vc_t1

0x7120,	// (0x00025375) set_text_pane_vc_t1_ParamLimits

0x7120,	// (0x00025375) set_text_pane_vc_t1

0x4855,	// (0x00022aaa) input_focus_pane_cp1_vc

0x713b,	// (0x00025390) list_set_text_pane_vc

0x47d3,	// (0x00022a28) setting_text_pane_vc_g1

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp2_vc

0x7145,	// (0x0002539a) setting_slider_graphic_pane_vc_g1

0x714d,	// (0x000253a2) setting_slider_graphic_pane_vc_t1

0x715b,	// (0x000253b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002dc2a) setting_slider_graphic_pane_vc_t

0x7169,	// (0x000253be) slider_set_pane_cp_vc

0x7171,	// (0x000253c6) slider_set_pane_vc_g1

0x717a,	// (0x000253cf) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0002dc2f) slider_set_pane_vc_g

0x4eb4,	// (0x00023109) set_opt_bg_pane_g1_copy1

0x4ebc,	// (0x00023111) set_opt_bg_pane_g2_copy1

0x71a6,	// (0x000253fb) set_opt_bg_pane_g3_copy1

0x4ecc,	// (0x00023121) set_opt_bg_pane_g4_copy1

0x4ed4,	// (0x00023129) set_opt_bg_pane_g5_copy1

0x4edc,	// (0x00023131) set_opt_bg_pane_g6_copy1

0x71ae,	// (0x00025403) set_opt_bg_pane_g7_copy1

0x71b6,	// (0x0002540b) set_opt_bg_pane_g8_copy1

0x71be,	// (0x00025413) set_opt_bg_pane_g9_copy1

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp_vc

0x71c6,	// (0x0002541b) setting_slider_pane_vc_t1

0x714d,	// (0x000253a2) setting_slider_pane_vc_t2

0x715b,	// (0x000253b0) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0002dc3e) setting_slider_pane_vc_t

0x7169,	// (0x000253be) slider_set_pane_vc

0xaee2,	// (0x00029137) volume_set_pane_vc_g1

0xb580,	// (0x000297d5) volume_set_pane_vc_g2

0xb589,	// (0x000297de) volume_set_pane_vc_g3

0xb592,	// (0x000297e7) volume_set_pane_vc_g4

0xb59b,	// (0x000297f0) volume_set_pane_vc_g5

0xb5a4,	// (0x000297f9) volume_set_pane_vc_g6

0xb5ad,	// (0x00029802) volume_set_pane_vc_g7

0xb5b6,	// (0x0002980b) volume_set_pane_vc_g8

0xb5bf,	// (0x00029814) volume_set_pane_vc_g9

0xb5c8,	// (0x0002981d) volume_set_pane_vc_g10

0x0009,

0xf9f0,	// (0x0002dc45) volume_set_pane_vc_g

0x71d5,	// (0x0002542a) volume_set_pane_vc

0x71dd,	// (0x00025432) button_value_adjust_pane_cp1_vc

0x71e7,	// (0x0002543c) list_highlight_pane_cp2_vc

0x71f0,	// (0x00025445) list_set_pane_vc_ParamLimits

0x71f0,	// (0x00025445) list_set_pane_vc

0x7242,	// (0x00025497) main_pane_set_vc_t1_ParamLimits

0x7242,	// (0x00025497) main_pane_set_vc_t1

0x7257,	// (0x000254ac) main_pane_set_vc_t2_ParamLimits

0x7257,	// (0x000254ac) main_pane_set_vc_t2

0x7269,	// (0x000254be) main_pane_set_vc_t3_ParamLimits

0x7269,	// (0x000254be) main_pane_set_vc_t3

0x727b,	// (0x000254d0) main_pane_set_vc_t4_ParamLimits

0x727b,	// (0x000254d0) main_pane_set_vc_t4

0x0003,

0xfa05,	// (0x0002dc5a) main_pane_set_vc_t_ParamLimits

0xfa05,	// (0x0002dc5a) main_pane_set_vc_t

0x728d,	// (0x000254e2) setting_code_pane_vc_ParamLimits

0x728d,	// (0x000254e2) setting_code_pane_vc

0x729c,	// (0x000254f1) setting_slider_graphic_pane_vc

0x729c,	// (0x000254f1) setting_slider_pane_vc

0x729c,	// (0x000254f1) setting_text_pane_vc

0x729c,	// (0x000254f1) setting_volume_pane_vc

0x72a4,	// (0x000254f9) scroll_pane_cp121_vc

0x4e44,	// (0x00023099) set_content_pane_vc

0x72ac,	// (0x00025501) button_value_adjust_pane_g1

0x72b5,	// (0x0002550a) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002dcb6) button_value_adjust_pane_g

0x72be,	// (0x00025513) form_field_slider_wide_pane_vc_t1_ParamLimits

0x72be,	// (0x00025513) form_field_slider_wide_pane_vc_t1

0x72d4,	// (0x00025529) form_field_slider_wide_pane_vc_t2_ParamLimits

0x72d4,	// (0x00025529) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002dcbb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002dcbb) form_field_slider_wide_pane_vc_t

0x48a3,	// (0x00022af8) input_focus_pane_cp10_vc_ParamLimits

0x48a3,	// (0x00022af8) input_focus_pane_cp10_vc

0x72ff,	// (0x00025554) slider_cont_pane_cp1_vc_ParamLimits

0x72ff,	// (0x00025554) slider_cont_pane_cp1_vc

0x7171,	// (0x000253c6) slider_form_pane_g1_cp2

0x717a,	// (0x000253cf) slider_form_pane_g2_cp2

0x731a,	// (0x0002556f) form_field_slider_pane_vc_t3

0x7328,	// (0x0002557d) form_field_slider_pane_vc_t4

0x7336,	// (0x0002558b) slider_form_pane_vc_ParamLimits

0x7336,	// (0x0002558b) slider_form_pane_vc

0x7343,	// (0x00025598) form_field_slider_pane_vc_t1_ParamLimits

0x7343,	// (0x00025598) form_field_slider_pane_vc_t1

0x7359,	// (0x000255ae) form_field_slider_pane_vc_t2_ParamLimits

0x7359,	// (0x000255ae) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002dccd) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002dccd) form_field_slider_pane_vc_t

0x48a3,	// (0x00022af8) input_focus_pane_cp9_vc_ParamLimits

0x48a3,	// (0x00022af8) input_focus_pane_cp9_vc

0x736b,	// (0x000255c0) slider_cont_pane_vc_ParamLimits

0x736b,	// (0x000255c0) slider_cont_pane_vc

0x737d,	// (0x000255d2) list_form_graphic_pane_cp_vc_ParamLimits

0x737d,	// (0x000255d2) list_form_graphic_pane_cp_vc

0x5c8a,	// (0x00023edf) form_field_popup_wide_pane_vc_g1

0x7392,	// (0x000255e7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7392,	// (0x000255e7) form_field_popup_wide_pane_vc_t1

0x4e59,	// (0x000230ae) input_focus_pane_cp8_vc_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_cp8_vc

0x73d1,	// (0x00025626) list_form_wide_pane_vc_ParamLimits

0x73d1,	// (0x00025626) list_form_wide_pane_vc

0x73dd,	// (0x00025632) list_form_graphic_pane_vc_g1

0x73e5,	// (0x0002563a) list_form_graphic_pane_vc_t1_ParamLimits

0x73e5,	// (0x0002563a) list_form_graphic_pane_vc_t1

0x48b9,	// (0x00022b0e) list_highlight_pane_cp5_vc_ParamLimits

0x48b9,	// (0x00022b0e) list_highlight_pane_cp5_vc

0x7401,	// (0x00025656) list_form_graphic_pane_vc_ParamLimits

0x7401,	// (0x00025656) list_form_graphic_pane_vc

0x5c8a,	// (0x00023edf) form_field_popup_pane_vc_g1

0x7417,	// (0x0002566c) form_field_popup_pane_vc_t1_ParamLimits

0x7417,	// (0x0002566c) form_field_popup_pane_vc_t1

0x4e59,	// (0x000230ae) input_focus_pane_cp7_vc_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_cp7_vc

0x742c,	// (0x00025681) list_form_pane_vc_ParamLimits

0x742c,	// (0x00025681) list_form_pane_vc

0x7438,	// (0x0002568d) data_form_pane_vc_t1_ParamLimits

0x7438,	// (0x0002568d) data_form_pane_vc_t1

0x4eb4,	// (0x00023109) input_focus_pane_vc_g1

0x4ebc,	// (0x00023111) input_focus_pane_vc_g2

0x4ec4,	// (0x00023119) input_focus_pane_vc_g3

0x4ecc,	// (0x00023121) input_focus_pane_vc_g4

0x4ed4,	// (0x00023129) input_focus_pane_vc_g5

0x4edc,	// (0x00023131) input_focus_pane_vc_g6

0x4ee4,	// (0x00023139) input_focus_pane_vc_g7

0x4eec,	// (0x00023141) input_focus_pane_vc_g8

0x4ef4,	// (0x00023149) input_focus_pane_vc_g9

0x47d3,	// (0x00022a28) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002d8bc) input_focus_pane_vc_g

0x5c7e,	// (0x00023ed3) data_form_pane_vc_ParamLimits

0x5c7e,	// (0x00023ed3) data_form_pane_vc

0x5c8a,	// (0x00023edf) form_field_data_pane_vc_g1

0x7453,	// (0x000256a8) form_field_data_pane_vc_t1_ParamLimits

0x7453,	// (0x000256a8) form_field_data_pane_vc_t1

0x4e59,	// (0x000230ae) input_focus_pane_vc_ParamLimits

0x4e59,	// (0x000230ae) input_focus_pane_vc

0x5bfc,	// (0x00023e51) button_value_adjust_pane_cp3_vc

0x6d29,	// (0x00024f7e) button_value_adjust_pane_cp5_vc

0x7469,	// (0x000256be) form_field_data_pane_vc_ParamLimits

0x7469,	// (0x000256be) form_field_data_pane_vc

0x5c04,	// (0x00023e59) form_field_data_pane_vc_cp2

0x7480,	// (0x000256d5) form_field_data_wide_pane_vc_ParamLimits

0x7480,	// (0x000256d5) form_field_data_wide_pane_vc

0x7496,	// (0x000256eb) form_field_data_wide_pane_vc_cp2

0x749e,	// (0x000256f3) form_field_popup_pane_vc_ParamLimits

0x749e,	// (0x000256f3) form_field_popup_pane_vc

0x74b5,	// (0x0002570a) form_field_popup_wide_pane_vc_ParamLimits

0x74b5,	// (0x0002570a) form_field_popup_wide_pane_vc

0x74cb,	// (0x00025720) form_field_slider_pane_vc_ParamLimits

0x74cb,	// (0x00025720) form_field_slider_pane_vc

0x74de,	// (0x00025733) form_field_slider_wide_pane_vc_ParamLimits

0x74de,	// (0x00025733) form_field_slider_wide_pane_vc

0xb5d1,	// (0x00029826) grid_touch_1_pane_ParamLimits

0xb5d1,	// (0x00029826) grid_touch_1_pane

0xb5dd,	// (0x00029832) grid_touch_2_pane_ParamLimits

0xb5dd,	// (0x00029832) grid_touch_2_pane

0x5997,	// (0x00023bec) touch_pane_g1_ParamLimits

0x5997,	// (0x00023bec) touch_pane_g1

0x74ff,	// (0x00025754) cell_app_pane_cp_wide_ParamLimits

0x74ff,	// (0x00025754) cell_app_pane_cp_wide

0x750f,	// (0x00025764) grid_popup_fast_wide_pane_ParamLimits

0x750f,	// (0x00025764) grid_popup_fast_wide_pane

0x7523,	// (0x00025778) scroll_pane_cp19_ParamLimits

0x7523,	// (0x00025778) scroll_pane_cp19

0x4855,	// (0x00022aaa) bg_popup_window_pane_cp20

0x7537,	// (0x0002578c) listscroll_popup_fast_wide_pane

0xb5f5,	// (0x0002984a) grid_indicator_nsta_pane

0x753f,	// (0x00025794) clock_nsta_pane_g1

0x7548,	// (0x0002579d) clock_nsta_pane_t1

0xb607,	// (0x0002985c) cell_indicator_nsta_pane_ParamLimits

0xb607,	// (0x0002985c) cell_indicator_nsta_pane

0x74f1,	// (0x00025746) cell_indicator_nsta_pane_g1

0xb638,	// (0x0002988d) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002dcde) cell_indicator_nsta_pane_g

0x7564,	// (0x000257b9) clock_nsta_pane_cp

0x756c,	// (0x000257c1) indicator_nsta_pane_cp

0x7575,	// (0x000257ca) nsta_clock_indic_pane_g1

0x48f5,	// (0x00022b4a) grid_indicator_pane

0x5311,	// (0x00023566) scroll_pane_cp29

0xa0ea,	// (0x0002833f) indicator_nsta_pane_cp2_ParamLimits

0xa0ea,	// (0x0002833f) indicator_nsta_pane_cp2

0x48b9,	// (0x00022b0e) main_apps_wheel_pane

0x5e29,	// (0x0002407e) form_midp_field_text_pane_ParamLimits

0x5f56,	// (0x000241ab) scroll_bar_cp050_ParamLimits

0x75de,	// (0x00025833) cell_indicator_pane_ParamLimits

0x75de,	// (0x00025833) cell_indicator_pane

0x75f4,	// (0x00025849) cell_indicator_pane_g1

0xb648,	// (0x0002989d) grid_wheel_folder_pane_ParamLimits

0xb648,	// (0x0002989d) grid_wheel_folder_pane

0xb65a,	// (0x000298af) list_wheel_apps_pane_ParamLimits

0xb65a,	// (0x000298af) list_wheel_apps_pane

0xb669,	// (0x000298be) main_apps_wheel_pane_g1_ParamLimits

0xb669,	// (0x000298be) main_apps_wheel_pane_g1

0xb67d,	// (0x000298d2) main_apps_wheel_pane_g2_ParamLimits

0xb67d,	// (0x000298d2) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002dcfa) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002dcfa) main_apps_wheel_pane_g

0xb691,	// (0x000298e6) main_apps_wheel_pane_t1_ParamLimits

0xb691,	// (0x000298e6) main_apps_wheel_pane_t1

0xb6b0,	// (0x00029905) list_wheel_apps_pane_g1

0xb6b8,	// (0x0002990d) list_wheel_apps_pane_g2

0xb6c0,	// (0x00029915) list_wheel_apps_pane_g3

0xb6c8,	// (0x0002991d) list_wheel_apps_pane_g4

0xb6d0,	// (0x00029925) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002dcff) list_wheel_apps_pane_g

0x48b9,	// (0x00022b0e) navi_icon_text_pane

0xaa21,	// (0x00028c76) aid_fill_nsta

0x75fe,	// (0x00025853) navi_icon_text_pane_g1

0x760a,	// (0x0002585f) navi_icon_text_pane_t1

0x558b,	// (0x000237e0) list_set_graphic_pane_t1_ParamLimits

0x558b,	// (0x000237e0) list_set_graphic_pane_t1

0x6644,	// (0x00024899) popup_midp_note_alarm_window_t6_ParamLimits

0x6644,	// (0x00024899) popup_midp_note_alarm_window_t6

0x6656,	// (0x000248ab) popup_midp_note_alarm_window_t7_ParamLimits

0x6656,	// (0x000248ab) popup_midp_note_alarm_window_t7

0x6668,	// (0x000248bd) popup_midp_note_alarm_window_t8_ParamLimits

0x6668,	// (0x000248bd) popup_midp_note_alarm_window_t8

0x667a,	// (0x000248cf) popup_midp_note_alarm_window_t9_ParamLimits

0x667a,	// (0x000248cf) popup_midp_note_alarm_window_t9

0x668c,	// (0x000248e1) popup_midp_note_alarm_window_t10_ParamLimits

0x668c,	// (0x000248e1) popup_midp_note_alarm_window_t10

0x669e,	// (0x000248f3) popup_midp_note_alarm_window_t11_ParamLimits

0x669e,	// (0x000248f3) popup_midp_note_alarm_window_t11

0x66b0,	// (0x00024905) scroll_pane_cp17_ParamLimits

0x66b0,	// (0x00024905) scroll_pane_cp17

0xaee2,	// (0x00029137) volume_small_pane_cp_g1

0xb6ef,	// (0x00029944) volume_small_pane_cp_g2

0xb6f8,	// (0x0002994d) volume_small_pane_cp_g3

0xb701,	// (0x00029956) volume_small_pane_cp_g4

0xaf0f,	// (0x00029164) volume_small_pane_cp_g5

0xb70a,	// (0x0002995f) volume_small_pane_cp_g6

0xb713,	// (0x00029968) volume_small_pane_cp_g7

0xb71c,	// (0x00029971) volume_small_pane_cp_g8

0xb725,	// (0x0002997a) volume_small_pane_cp_g9

0xb72e,	// (0x00029983) volume_small_pane_cp_g10

0x583a,	// (0x00023a8f) midp_ticker_pane_g1_ParamLimits

0x5846,	// (0x00023a9b) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002d988) midp_ticker_pane_g_ParamLimits

0x5852,	// (0x00023aa7) midp_ticker_pane_t1_ParamLimits

0xaa31,	// (0x00028c86) aid_fill_nsta_2

0x5f42,	// (0x00024197) list_form2_midp_pane

0x6d78,	// (0x00024fcd) midp_editing_number_pane_ParamLimits

0x6d84,	// (0x00024fd9) midp_ticker_pane_ParamLimits

0x761c,	// (0x00025871) form2_midp_field_pane

0x7624,	// (0x00025879) scroll_pane_cp51

0x7644,	// (0x00025899) form2_midp_button_pane_ParamLimits

0x7644,	// (0x00025899) form2_midp_button_pane

0x7656,	// (0x000258ab) form2_midp_content_pane_ParamLimits

0x7656,	// (0x000258ab) form2_midp_content_pane

0x7670,	// (0x000258c5) form2_midp_field_choice_group_pane

0x7678,	// (0x000258cd) form2_midp_field_pane_g1

0x7680,	// (0x000258d5) form2_midp_field_pane_g2

0x7688,	// (0x000258dd) form2_midp_field_pane_g3

0x7690,	// (0x000258e5) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002dd24) form2_midp_field_pane_g

0x7698,	// (0x000258ed) form2_midp_gauge_slider_pane

0x76a0,	// (0x000258f5) form2_midp_gauge_wait_pane

0x76a8,	// (0x000258fd) form2_midp_image_pane_ParamLimits

0x76a8,	// (0x000258fd) form2_midp_image_pane

0x76c3,	// (0x00025918) form2_midp_label_pane_ParamLimits

0x76c3,	// (0x00025918) form2_midp_label_pane

0xb753,	// (0x000299a8) form2_midp_label_pane_cp_ParamLimits

0xb753,	// (0x000299a8) form2_midp_label_pane_cp

0x76dc,	// (0x00025931) form2_midp_string_pane_ParamLimits

0x76dc,	// (0x00025931) form2_midp_string_pane

0xde65,	// (0x0002c0ba) form2_midp_text_pane_ParamLimits

0xde65,	// (0x0002c0ba) form2_midp_text_pane

0x76ee,	// (0x00025943) form2_midp_time_pane

0x76fe,	// (0x00025953) input_focus_pane_cp51_ParamLimits

0x76fe,	// (0x00025953) input_focus_pane_cp51

0x7716,	// (0x0002596b) form2_midp_label_pane_t1_ParamLimits

0x7716,	// (0x0002596b) form2_midp_label_pane_t1

0xde7e,	// (0x0002c0d3) form2_mdip_text_pane_t1_ParamLimits

0xde7e,	// (0x0002c0d3) form2_mdip_text_pane_t1

0xde99,	// (0x0002c0ee) form2_midp_time_pane_t1

0x775e,	// (0x000259b3) form2_midp_gauge_slider_pane_t1

0xb772,	// (0x000299c7) form2_midp_gauge_slider_pane_t2

0xb784,	// (0x000299d9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002dd2d) form2_midp_gauge_slider_pane_t

0x7770,	// (0x000259c5) form2_midp_slider_pane

0x777c,	// (0x000259d1) form2_midp_gauge_wait_pane_t1

0x778a,	// (0x000259df) form2_midp_wait_pane_ParamLimits

0x778a,	// (0x000259df) form2_midp_wait_pane

0x5cc8,	// (0x00023f1d) list_single_2graphic_pane_cp4_ParamLimits

0x5cc8,	// (0x00023f1d) list_single_2graphic_pane_cp4

0x77b5,	// (0x00025a0a) list_single_midp_graphic_pane_cp_ParamLimits

0x77b5,	// (0x00025a0a) list_single_midp_graphic_pane_cp

0x4855,	// (0x00022aaa) list_highlight_pane_cp20

0x77d3,	// (0x00025a28) list_single_2graphic_pane_g1_cp4

0x7008,	// (0x0002525d) list_single_2graphic_pane_g2_cp4

0x77db,	// (0x00025a30) list_single_2graphic_pane_t1_cp4

0x48b9,	// (0x00022b0e) list_highlight_pane_cp21

0x7800,	// (0x00025a55) list_single_midp_graphic_pane_g4_cp

0x780f,	// (0x00025a64) list_single_midp_graphic_pane_t1_cp

0x7824,	// (0x00025a79) form2_mdip_string_pane_t1_ParamLimits

0x7824,	// (0x00025a79) form2_mdip_string_pane_t1

0x4855,	// (0x00022aaa) bg_wml_button_pane_cp2

0x47d3,	// (0x00022a28) form2_midp_image_pane_g1

0xd504,	// (0x0002b759) list_double_large_graphic_pane_g5_ParamLimits

0xd504,	// (0x0002b759) list_double_large_graphic_pane_g5

0xa20f,	// (0x00028464) midp_form_pane_ParamLimits

0x48b9,	// (0x00022b0e) main_apps_wheel_pane_ParamLimits

0xa859,	// (0x00028aae) popup_preview_window_ParamLimits

0xa859,	// (0x00028aae) popup_preview_window

0xa9d4,	// (0x00028c29) popup_touch_info_window_ParamLimits

0xa9d4,	// (0x00028c29) popup_touch_info_window

0xa9f2,	// (0x00028c47) popup_touch_menu_window_ParamLimits

0xa9f2,	// (0x00028c47) popup_touch_menu_window

0x47c9,	// (0x00022a1e) bg_popup_sub_pane_cp6

0x788e,	// (0x00025ae3) list_touch_menu_pane

0x7896,	// (0x00025aeb) list_single_touch_menu_pane_ParamLimits

0x7896,	// (0x00025aeb) list_single_touch_menu_pane

0x78ad,	// (0x00025b02) list_single_touch_menu_pane_t1

0x48b9,	// (0x00022b0e) bg_popup_sub_pane_cp7_ParamLimits

0x48b9,	// (0x00022b0e) bg_popup_sub_pane_cp7

0x78bb,	// (0x00025b10) heading_sub_pane

0x78c3,	// (0x00025b18) list_touch_info_pane_ParamLimits

0x78c3,	// (0x00025b18) list_touch_info_pane

0x78d2,	// (0x00025b27) list_single_touch_info_pane_ParamLimits

0x78d2,	// (0x00025b27) list_single_touch_info_pane

0x78e3,	// (0x00025b38) list_single_touch_info_pane_t1

0x78f1,	// (0x00025b46) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002dd3b) list_single_touch_info_pane_t

0x5810,	// (0x00023a65) bg_popup_heading_pane_cp

0x78ff,	// (0x00025b54) heading_sub_pane_t1

0x5c44,	// (0x00023e99) bg_popup_preview_window_pane_cp_ParamLimits

0x5c44,	// (0x00023e99) bg_popup_preview_window_pane_cp

0x78bb,	// (0x00025b10) heading_preview_pane

0x78c3,	// (0x00025b18) list_preview_pane_ParamLimits

0x78c3,	// (0x00025b18) list_preview_pane

0x790d,	// (0x00025b62) popup_preview_window_g1

0x78d2,	// (0x00025b27) list_single_preview_pane_ParamLimits

0x78d2,	// (0x00025b27) list_single_preview_pane

0x7915,	// (0x00025b6a) list_single_preview_pane_g1

0x791d,	// (0x00025b72) list_single_preview_pane_t1

0x78e3,	// (0x00025b38) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002dd40) list_single_preview_pane_t

0x792b,	// (0x00025b80) bg_popup_heading_pane_cp2_ParamLimits

0x792b,	// (0x00025b80) bg_popup_heading_pane_cp2

0x7941,	// (0x00025b96) heading_preview_pane_g1

0x7949,	// (0x00025b9e) heading_preview_pane_t1_ParamLimits

0x7949,	// (0x00025b9e) heading_preview_pane_t1

0x490c,	// (0x00022b61) soft_indicator_pane_t1_ParamLimits

0x4ddc,	// (0x00023031) scroll_pane_ParamLimits

0x5216,	// (0x0002346b) scroll_sc2_left_pane

0x520d,	// (0x00023462) scroll_sc2_right_pane

0x5235,	// (0x0002348a) scroll_bg_pane_g1_ParamLimits

0x524a,	// (0x0002349f) scroll_bg_pane_g2_ParamLimits

0x5262,	// (0x000234b7) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002d913) scroll_bg_pane_g_ParamLimits

0x5235,	// (0x0002348a) scroll_handle_pane_g1_ParamLimits

0x5284,	// (0x000234d9) scroll_handle_pane_g2_ParamLimits

0x5262,	// (0x000234b7) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002d91a) scroll_handle_pane_g_ParamLimits

0xa5a1,	// (0x000287f6) popup_choice_list_window_ParamLimits

0xa5a1,	// (0x000287f6) popup_choice_list_window

0x5af2,	// (0x00023d47) choice_list_pane

0x5b68,	// (0x00023dbd) cell_toolbar_pane_t1

0x5b90,	// (0x00023de5) toolbar_button_pane_ParamLimits

0x6a76,	// (0x00024ccb) ai_gene_pane_1_t2_ParamLimits

0x6a76,	// (0x00024ccb) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0002db3d) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0002db3d) ai_gene_pane_1_t

0x7966,	// (0x00025bbb) scroll_sc2_left_pane_g1

0x7966,	// (0x00025bbb) scroll_sc2_right_pane_g1

0x4ff2,	// (0x00023247) bg_popup_sub_pane_cp10

0x7970,	// (0x00025bc5) list_choice_list_pane

0x7987,	// (0x00025bdc) list_single_choice_list_pane_ParamLimits

0x7987,	// (0x00025bdc) list_single_choice_list_pane

0x7999,	// (0x00025bee) list_single_choice_list_pane_g1

0x4fdd,	// (0x00023232) list_single_choice_list_pane_t1_ParamLimits

0x4fdd,	// (0x00023232) list_single_choice_list_pane_t1

0x79a1,	// (0x00025bf6) choice_list_pane_g1

0x79a9,	// (0x00025bfe) choice_list_pane_t1

0x47c9,	// (0x00022a1e) input_focus_pane_cp11

0x5174,	// (0x000233c9) title_pane_stacon_g2_ParamLimits

0x5174,	// (0x000233c9) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002d8f9) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002d8f9) title_pane_stacon_g

0x5810,	// (0x00023a65) cursor_press_pane

0xa63d,	// (0x00028892) popup_fep_hwr_window_ParamLimits

0xa63d,	// (0x00028892) popup_fep_hwr_window

0xa699,	// (0x000288ee) popup_fep_vkb_window_ParamLimits

0xa699,	// (0x000288ee) popup_fep_vkb_window

0x79b7,	// (0x00025c0c) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002dd69) fep_vkb_side_pane_g_ParamLimits

0xb7cb,	// (0x00029a20) fep_hwr_candidate_pane_ParamLimits

0xb7cb,	// (0x00029a20) fep_hwr_candidate_pane

0xb7f3,	// (0x00029a48) fep_hwr_side_pane_ParamLimits

0xb7f3,	// (0x00029a48) fep_hwr_side_pane

0xb813,	// (0x00029a68) fep_hwr_top_pane_ParamLimits

0xb813,	// (0x00029a68) fep_hwr_top_pane

0xb82b,	// (0x00029a80) fep_hwr_write_pane_ParamLimits

0xb82b,	// (0x00029a80) fep_hwr_write_pane

0xfb14,	// (0x0002dd69) fep_vkb_side_pane_g

0x79d1,	// (0x00025c26) fep_hwr_top_pane_g1

0x79bf,	// (0x00025c14) fep_hwr_top_pane_g2

0xb865,	// (0x00029aba) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002dd45) fep_hwr_top_pane_g

0xb87a,	// (0x00029acf) fep_hwr_top_text_pane

0x537e,	// (0x000235d3) fep_hwr_top_text_pane_g1

0x7a07,	// (0x00025c5c) fep_hwr_top_text_pane_t1

0xb968,	// (0x00029bbd) fep_hwr_candidate_pane_g1

0x7bd0,	// (0x00025e25) fep_vkb_keypad_pane_g3_ParamLimits

0x7bd0,	// (0x00025e25) fep_vkb_keypad_pane_g3

0x7bf2,	// (0x00025e47) fep_vkb_keypad_pane_g4_ParamLimits

0x7bf2,	// (0x00025e47) fep_vkb_keypad_pane_g4

0x7c61,	// (0x00025eb6) fep_vkb_bottom_pane_g2_ParamLimits

0x7c61,	// (0x00025eb6) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002dd70) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002dd70) fep_vkb_bottom_pane_g

0x7966,	// (0x00025bbb) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002dd7a) cell_vkb_side_pane_g

0x7ca5,	// (0x00025efa) cell_vkb_side_pane_t1

0x7cb3,	// (0x00025f08) cell_vkb_side_pane_t1_copy1

0x7966,	// (0x00025bbb) bg_fep_vkb_candidate_pane_g2

0x7d81,	// (0x00025fd6) cell_vkb_candidate_pane_ParamLimits

0x7a15,	// (0x00025c6a) aid_size_cell_vkb_ParamLimits

0x7a15,	// (0x00025c6a) aid_size_cell_vkb

0x7d81,	// (0x00025fd6) cell_vkb_candidate_pane

0xba73,	// (0x00029cc8) bg_popup_fep_shadow_pane_g1

0x7a7f,	// (0x00025cd4) fep_vkb_bottom_pane_ParamLimits

0x7a7f,	// (0x00025cd4) fep_vkb_bottom_pane

0x7abc,	// (0x00025d11) fep_vkb_candidate_pane_ParamLimits

0x7abc,	// (0x00025d11) fep_vkb_candidate_pane

0x7ad8,	// (0x00025d2d) fep_vkb_keypad_pane_ParamLimits

0x7ad8,	// (0x00025d2d) fep_vkb_keypad_pane

0x7b0c,	// (0x00025d61) fep_vkb_side_pane_ParamLimits

0x7b0c,	// (0x00025d61) fep_vkb_side_pane

0x7b38,	// (0x00025d8d) fep_vkb_top_pane_ParamLimits

0x7b38,	// (0x00025d8d) fep_vkb_top_pane

0x7b64,	// (0x00025db9) fep_vkb_top_pane_g1_ParamLimits

0x7b64,	// (0x00025db9) fep_vkb_top_pane_g1

0x7b73,	// (0x00025dc8) fep_vkb_top_pane_g2_ParamLimits

0x7b73,	// (0x00025dc8) fep_vkb_top_pane_g2

0x7b82,	// (0x00025dd7) fep_vkb_top_pane_g3_ParamLimits

0x7b82,	// (0x00025dd7) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002dd60) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002dd60) fep_vkb_top_pane_g

0x7ba0,	// (0x00025df5) fep_vkb_top_text_pane_ParamLimits

0x7ba0,	// (0x00025df5) fep_vkb_top_text_pane

0xb99b,	// (0x00029bf0) fep_vkb_side_pane_g1_ParamLimits

0xb99b,	// (0x00029bf0) fep_vkb_side_pane_g1

0x7bbf,	// (0x00025e14) grid_vkb_side_pane_ParamLimits

0x7bbf,	// (0x00025e14) grid_vkb_side_pane

0xba7b,	// (0x00029cd0) bg_popup_fep_shadow_pane_g2

0xba84,	// (0x00029cd9) bg_popup_fep_shadow_pane_g3

0xba8c,	// (0x00029ce1) bg_popup_fep_shadow_pane_g4

0xba95,	// (0x00029cea) bg_popup_fep_shadow_pane_g5

0xba9d,	// (0x00029cf2) bg_popup_fep_shadow_pane_g6

0xbaa5,	// (0x00029cfa) bg_popup_fep_shadow_pane_g7

0x4ecc,	// (0x00023121) bg_popup_fep_shadow_pane_g8

0x7c10,	// (0x00025e65) grid_vkb_keypad_number_pane_ParamLimits

0x7c10,	// (0x00025e65) grid_vkb_keypad_number_pane

0x7c20,	// (0x00025e75) grid_vkb_keypad_pane_ParamLimits

0x7c20,	// (0x00025e75) grid_vkb_keypad_pane

0x7c46,	// (0x00025e9b) fep_vkb_bottom_pane_g1_ParamLimits

0x7c46,	// (0x00025e9b) fep_vkb_bottom_pane_g1

0x7c6f,	// (0x00025ec4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7c6f,	// (0x00025ec4) grid_vkb_keypad_bottom_left_pane

0x7c84,	// (0x00025ed9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c84,	// (0x00025ed9) grid_vkb_keypad_bottom_right_pane

0x7c99,	// (0x00025eee) fep_vkb_top_text_pane_g1

0xb9e5,	// (0x00029c3a) fep_vkb_top_text_pane_t1

0xb9fa,	// (0x00029c4f) cell_vkb_side_pane_ParamLimits

0xb9fa,	// (0x00029c4f) cell_vkb_side_pane

0x7966,	// (0x00025bbb) cell_vkb_side_pane_g1

0x7cc1,	// (0x00025f16) cell_vkb_keypad_pane_ParamLimits

0x7cc1,	// (0x00025f16) cell_vkb_keypad_pane

0x7d2e,	// (0x00025f83) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002dd8d) bg_popup_fep_shadow_pane_g

0xbab5,	// (0x00029d0a) cell_hwr_side_pane_g1

0xbab5,	// (0x00029d0a) cell_hwr_side_pane_g2

0x7d38,	// (0x00025f8d) cell_vkb_keypad_pane_t1

0xba1d,	// (0x00029c72) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xba1d,	// (0x00029c72) cell_vkb_keypad_bottom_left_pane

0xba3a,	// (0x00029c8f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xba3a,	// (0x00029c8f) cell_vkb_keypad_bottom_right_pane

0x7966,	// (0x00025bbb) cell_vkb_keypad_bottom_left_pane_g1

0x7966,	// (0x00025bbb) cell_vkb_keypad_bottom_right_pane_g1

0x7d46,	// (0x00025f9b) cell_vkb_keypad_number_pane_ParamLimits

0x7d46,	// (0x00025f9b) cell_vkb_keypad_number_pane

0x7d65,	// (0x00025fba) cell_vkb_keypad_number_pane_g1

0x7d6f,	// (0x00025fc4) cell_vkb_keypad_number_pane_g2

0x7d78,	// (0x00025fcd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002dd7f) cell_vkb_keypad_number_pane_g

0x7d38,	// (0x00025f8d) cell_vkb_keypad_number_pane_t1

0x7d9a,	// (0x00025fef) fep_vkb_candidate_pane_g1

0x0001,

0xfb4b,	// (0x0002dda0) cell_hwr_side_pane_g

0x7db3,	// (0x00026008) cell_hwr_side_pane_t1

0xbabf,	// (0x00029d14) cell_hwr_side_pane_t1_copy1

0xbacd,	// (0x00029d22) cell_hwr_candidate_pane_g1

0xbafc,	// (0x00029d51) cell_hwr_candidate_pane_t1

0x7966,	// (0x00025bbb) cell_vkb_candidate_pane_g2

0x7e39,	// (0x0002608e) cell_vkb_candidate_pane_t1

0xb796,	// (0x000299eb) bg_popup_fep_shadow_pane_ParamLimits

0xb796,	// (0x000299eb) bg_popup_fep_shadow_pane

0xb845,	// (0x00029a9a) bg_fep_hwr_top_pane_g4

0x79e3,	// (0x00025c38) bg_hwr_side_pane_g1_ParamLimits

0x79e3,	// (0x00025c38) bg_hwr_side_pane_g1

0xb8b6,	// (0x00029b0b) cell_hwr_side_pane_ParamLimits

0xb8b6,	// (0x00029b0b) cell_hwr_side_pane

0xb8f1,	// (0x00029b46) fep_hwr_write_pane_g1_ParamLimits

0xb8f1,	// (0x00029b46) fep_hwr_write_pane_g1

0xb8fe,	// (0x00029b53) fep_hwr_write_pane_g2_ParamLimits

0xb8fe,	// (0x00029b53) fep_hwr_write_pane_g2

0xb90b,	// (0x00029b60) fep_hwr_write_pane_g3_ParamLimits

0xb90b,	// (0x00029b60) fep_hwr_write_pane_g3

0xb919,	// (0x00029b6e) fep_hwr_write_pane_g4_ParamLimits

0xb919,	// (0x00029b6e) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002dd4c) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002dd4c) fep_hwr_write_pane_g

0xb845,	// (0x00029a9a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xb845,	// (0x00029a9a) bg_fep_hwr_candidate_pane_g2

0xb92e,	// (0x00029b83) cell_hwr_candidate_pane_ParamLimits

0xb92e,	// (0x00029b83) cell_hwr_candidate_pane

0xb968,	// (0x00029bbd) fep_hwr_candidate_pane_g1_ParamLimits

0x7a43,	// (0x00025c98) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7a43,	// (0x00025c98) bg_popup_fep_shadow_pane_cp2

0x7b92,	// (0x00025de7) fep_vkb_top_pane_g4_ParamLimits

0x7b92,	// (0x00025de7) fep_vkb_top_pane_g4

0x7bb1,	// (0x00025e06) fep_vkb_side_pane_g2_ParamLimits

0x7bb1,	// (0x00025e06) fep_vkb_side_pane_g2

0xd67c,	// (0x0002b8d1) list_setting_pane_t4_ParamLimits

0xd67c,	// (0x0002b8d1) list_setting_pane_t4

0xd712,	// (0x0002b967) list_setting_number_pane_t5_ParamLimits

0xd712,	// (0x0002b967) list_setting_number_pane_t5

0x9f33,	// (0x00028188) list_double_heading_pane_cp2_ParamLimits

0x9f33,	// (0x00028188) list_double_heading_pane_cp2

0x5685,	// (0x000238da) list_double_heading_pane_g1_cp2_ParamLimits

0x5685,	// (0x000238da) list_double_heading_pane_g1_cp2

0x7e47,	// (0x0002609c) list_double_heading_pane_g2_cp2_ParamLimits

0x7e47,	// (0x0002609c) list_double_heading_pane_g2_cp2

0x7e5b,	// (0x000260b0) list_double_heading_pane_t1_cp2_ParamLimits

0x7e5b,	// (0x000260b0) list_double_heading_pane_t1_cp2

0x7e71,	// (0x000260c6) list_double_heading_pane_t2_cp2_ParamLimits

0x7e71,	// (0x000260c6) list_double_heading_pane_t2_cp2

0x47c1,	// (0x00022a16) aid_value_unit2

0x982c,	// (0x00027a81) popup_preview_fixed_window

0x49ec,	// (0x00022c41) bg_popup_preview_window_pane_cp02

0x7e83,	// (0x000260d8) list_preview_fixed_pane

0x7ec9,	// (0x0002611e) list_empty_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_empty_pane_fp

0x7ec9,	// (0x0002611e) list_single_cale_day_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_single_cale_day_pane_fp

0x7ec9,	// (0x0002611e) list_single_graphic_heading_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_single_graphic_heading_pane_fp

0x7ec9,	// (0x0002611e) list_single_graphic_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_single_graphic_pane_fp

0x7ec9,	// (0x0002611e) list_single_heading_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_single_heading_pane_fp

0x7ec9,	// (0x0002611e) list_single_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_single_pane_fp

0x7edd,	// (0x00026132) list_single_pane_fp_g1_ParamLimits

0x7edd,	// (0x00026132) list_single_pane_fp_g1

0xdecd,	// (0x0002c122) list_single_pane_fp_g2_ParamLimits

0xdecd,	// (0x0002c122) list_single_pane_fp_g2

0xded9,	// (0x0002c12e) list_single_pane_fp_g3_ParamLimits

0xded9,	// (0x0002c12e) list_single_pane_fp_g3

0x7ee9,	// (0x0002613e) list_single_pane_fp_g4_ParamLimits

0x7ee9,	// (0x0002613e) list_single_pane_fp_g4

0x0003,

0xfb5e,	// (0x0002ddb3) list_single_pane_fp_g_ParamLimits

0xfb5e,	// (0x0002ddb3) list_single_pane_fp_g

0xdeed,	// (0x0002c142) list_single_pane_fp_t1_ParamLimits

0xdeed,	// (0x0002c142) list_single_pane_fp_t1

0xdf04,	// (0x0002c159) list_single_graphic_pane_fp_g1_ParamLimits

0xdf04,	// (0x0002c159) list_single_graphic_pane_fp_g1

0x7edd,	// (0x00026132) list_single_graphic_pane_fp_g2_ParamLimits

0x7edd,	// (0x00026132) list_single_graphic_pane_fp_g2

0xdecd,	// (0x0002c122) list_single_graphic_pane_fp_g3_ParamLimits

0xdecd,	// (0x0002c122) list_single_graphic_pane_fp_g3

0xded9,	// (0x0002c12e) list_single_graphic_pane_fp_g4_ParamLimits

0xded9,	// (0x0002c12e) list_single_graphic_pane_fp_g4

0x7ee9,	// (0x0002613e) list_single_graphic_pane_fp_g5_ParamLimits

0x7ee9,	// (0x0002613e) list_single_graphic_pane_fp_g5

0x0004,

0xfb67,	// (0x0002ddbc) list_single_graphic_pane_fp_g_ParamLimits

0xfb67,	// (0x0002ddbc) list_single_graphic_pane_fp_g

0xdf10,	// (0x0002c165) list_single_graphic_pane_fp_t1_ParamLimits

0xdf10,	// (0x0002c165) list_single_graphic_pane_fp_t1

0xdf04,	// (0x0002c159) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xdf04,	// (0x0002c159) list_single_graphic_heading_pane_fp_g1

0x7edd,	// (0x00026132) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7edd,	// (0x00026132) list_single_graphic_heading_pane_fp_g2

0xdecd,	// (0x0002c122) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xdecd,	// (0x0002c122) list_single_graphic_heading_pane_fp_g3

0xded9,	// (0x0002c12e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xded9,	// (0x0002c12e) list_single_graphic_heading_pane_fp_g4

0x7ee9,	// (0x0002613e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ee9,	// (0x0002613e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb67,	// (0x0002ddbc) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb67,	// (0x0002ddbc) list_single_graphic_heading_pane_fp_g

0xdf26,	// (0x0002c17b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdf26,	// (0x0002c17b) list_single_graphic_heading_pane_fp_t1

0xdf3c,	// (0x0002c191) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdf3c,	// (0x0002c191) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb72,	// (0x0002ddc7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb72,	// (0x0002ddc7) list_single_graphic_heading_pane_fp_t

0xdf4e,	// (0x0002c1a3) list_single_cale_day_pane_fp_g1_ParamLimits

0xdf4e,	// (0x0002c1a3) list_single_cale_day_pane_fp_g1

0x7ef5,	// (0x0002614a) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ef5,	// (0x0002614a) list_single_cale_day_pane_fp_g2

0xdf86,	// (0x0002c1db) list_single_cale_day_pane_fp_g3_ParamLimits

0xdf86,	// (0x0002c1db) list_single_cale_day_pane_fp_g3

0xdfae,	// (0x0002c203) list_single_cale_day_pane_fp_g4_ParamLimits

0xdfae,	// (0x0002c203) list_single_cale_day_pane_fp_g4

0xdfd2,	// (0x0002c227) list_single_cale_day_pane_fp_g5_ParamLimits

0xdfd2,	// (0x0002c227) list_single_cale_day_pane_fp_g5

0x0004,

0xfb77,	// (0x0002ddcc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb77,	// (0x0002ddcc) list_single_cale_day_pane_fp_g

0xdff6,	// (0x0002c24b) list_single_cale_day_pane_fp_t1_ParamLimits

0xdff6,	// (0x0002c24b) list_single_cale_day_pane_fp_t1

0xe01c,	// (0x0002c271) list_single_cale_day_pane_fp_t2_ParamLimits

0xe01c,	// (0x0002c271) list_single_cale_day_pane_fp_t2

0xe035,	// (0x0002c28a) list_single_cale_day_pane_fp_t3_ParamLimits

0xe035,	// (0x0002c28a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb82,	// (0x0002ddd7) list_single_cale_day_pane_fp_t_ParamLimits

0xfb82,	// (0x0002ddd7) list_single_cale_day_pane_fp_t

0x7edd,	// (0x00026132) list_empty_pane_fp_g1_ParamLimits

0x7edd,	// (0x00026132) list_empty_pane_fp_g1

0xe04e,	// (0x0002c2a3) list_empty_pane_fp_t1

0xe05c,	// (0x0002c2b1) list_empty_pane_fp_t2

0x0001,

0xfb89,	// (0x0002ddde) list_empty_pane_fp_t

0x7edd,	// (0x00026132) list_single_heading_pane_fp_g1_ParamLimits

0x7edd,	// (0x00026132) list_single_heading_pane_fp_g1

0xdecd,	// (0x0002c122) list_single_heading_pane_fp_g2_ParamLimits

0xdecd,	// (0x0002c122) list_single_heading_pane_fp_g2

0xded9,	// (0x0002c12e) list_single_heading_pane_fp_g3_ParamLimits

0xded9,	// (0x0002c12e) list_single_heading_pane_fp_g3

0x0002,

0xfb8e,	// (0x0002dde3) list_single_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002dde3) list_single_heading_pane_fp_g

0xe06a,	// (0x0002c2bf) list_single_heading_pane_fp_t1_ParamLimits

0xe06a,	// (0x0002c2bf) list_single_heading_pane_fp_t1

0xe07c,	// (0x0002c2d1) list_single_heading_pane_fp_t2_ParamLimits

0xe07c,	// (0x0002c2d1) list_single_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0002ddea) list_single_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0002ddea) list_single_heading_pane_fp_t

0x4ffe,	// (0x00023253) aid_size_cell_fast

0x49cf,	// (0x00022c24) soft_indicator_pane_cp1_t1

0x503b,	// (0x00023290) cell_app_pane_cp2_ParamLimits

0x503b,	// (0x00023290) cell_app_pane_cp2

0xb7b8,	// (0x00029a0d) fep_hwr_candidate_drop_down_list_pane

0xb982,	// (0x00029bd7) fep_hwr_candidate_pane_g3_ParamLimits

0xb982,	// (0x00029bd7) fep_hwr_candidate_pane_g3

0x3f2f,	// (0x00022184) fep_hwr_candidate_pane_g4_ParamLimits

0x3f2f,	// (0x00022184) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002dd59) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002dd59) fep_hwr_candidate_pane_g

0x7aab,	// (0x00025d00) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7aab,	// (0x00025d00) fep_vkb_candidate_drop_down_list_pane

0x7da2,	// (0x00025ff7) fep_vkb_candidate_pane_g3

0x7daa,	// (0x00025fff) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002dd86) fep_vkb_candidate_pane_g

0xbacd,	// (0x00029d22) cell_hwr_candidate_pane_g1_ParamLimits

0xbadb,	// (0x00029d30) cell_hwr_candidate_pane_g3_ParamLimits

0xbadb,	// (0x00029d30) cell_hwr_candidate_pane_g3

0xdeac,	// (0x0002c101) cell_hwr_candidate_pane_g4_ParamLimits

0xdeac,	// (0x0002c101) cell_hwr_candidate_pane_g4

0x0002,

0xfb50,	// (0x0002dda5) cell_hwr_candidate_pane_g_ParamLimits

0xfb50,	// (0x0002dda5) cell_hwr_candidate_pane_g

0x7e03,	// (0x00026058) cell_vkb_candidate_pane_g3_ParamLimits

0x7e03,	// (0x00026058) cell_vkb_candidate_pane_g3

0x7e1e,	// (0x00026073) cell_vkb_candidate_pane_g4_ParamLimits

0x7e1e,	// (0x00026073) cell_vkb_candidate_pane_g4

0x7f01,	// (0x00026156) cell_app_pane_cp2_g1_ParamLimits

0x7f01,	// (0x00026156) cell_app_pane_cp2_g1

0x7f1f,	// (0x00026174) cell_app_pane_cp2_g2_ParamLimits

0x7f1f,	// (0x00026174) cell_app_pane_cp2_g2

0x0001,

0xfb9a,	// (0x0002ddef) cell_app_pane_cp2_g_ParamLimits

0xfb9a,	// (0x0002ddef) cell_app_pane_cp2_g

0x7f2b,	// (0x00026180) cell_app_pane_cp2_t1_ParamLimits

0x7f2b,	// (0x00026180) cell_app_pane_cp2_t1

0x4e59,	// (0x000230ae) grid_highlight_pane_cp1_ParamLimits

0x4e59,	// (0x000230ae) grid_highlight_pane_cp1

0xbb19,	// (0x00029d6e) cell_hwr_candidate_pane_cp1_ParamLimits

0xbb19,	// (0x00029d6e) cell_hwr_candidate_pane_cp1

0xbacd,	// (0x00029d22) fep_hwr_candidate_drop_down_list_pane_g1

0xbb37,	// (0x00029d8c) fep_hwr_candidate_drop_down_list_pane_g2

0xbb44,	// (0x00029d99) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9f,	// (0x0002ddf4) fep_hwr_candidate_drop_down_list_pane_g

0xbb51,	// (0x00029da6) fep_hwr_candidate_drop_down_list_scroll_pane

0xbb5a,	// (0x00029daf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbb5a,	// (0x00029daf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xbb67,	// (0x00029dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbb67,	// (0x00029dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xbb74,	// (0x00029dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbb74,	// (0x00029dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbb81,	// (0x00029dd6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbb81,	// (0x00029dd6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbb9c,	// (0x00029df1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbb9c,	// (0x00029df1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xbbb7,	// (0x00029e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbbb7,	// (0x00029e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xbbd2,	// (0x00029e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbbd2,	// (0x00029e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xbbed,	// (0x00029e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbbed,	// (0x00029e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0002ddfb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0002ddfb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbc08,	// (0x00029e5d) cell_vkb_candidate_pane_cp1_ParamLimits

0xbc08,	// (0x00029e5d) cell_vkb_candidate_pane_cp1

0x7b92,	// (0x00025de7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b92,	// (0x00025de7) fep_vkb_candidate_drop_down_list_pane_g1

0x7f3d,	// (0x00026192) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7f3d,	// (0x00026192) fep_vkb_candidate_drop_down_list_pane_g2

0x7f4a,	// (0x0002619f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7f4a,	// (0x0002619f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0002de0c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb7,	// (0x0002de0c) fep_vkb_candidate_drop_down_list_pane_g

0x7f57,	// (0x000261ac) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f57,	// (0x000261ac) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f64,	// (0x000261b9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f64,	// (0x000261b9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f71,	// (0x000261c6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f71,	// (0x000261c6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f7d,	// (0x000261d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f7d,	// (0x000261d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7dc1,	// (0x00026016) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7dc1,	// (0x00026016) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7de2,	// (0x00026037) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7de2,	// (0x00026037) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f89,	// (0x000261de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f89,	// (0x000261de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7faa,	// (0x000261ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7faa,	// (0x000261ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7fcb,	// (0x00026220) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fcb,	// (0x00026220) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002de13) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002de13) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9916,	// (0x00027b6b) title_pane_g1_ParamLimits

0x9923,	// (0x00027b78) title_pane_g2_ParamLimits

0xf529,	// (0x0002d77e) title_pane_g_ParamLimits

0x5376,	// (0x000235cb) aid_call2_pane

0x536e,	// (0x000235c3) aid_call_pane

0x537e,	// (0x000235d3) popup_clock_analogue_window_g1

0x537e,	// (0x000235d3) popup_clock_analogue_window_g2

0x9f14,	// (0x00028169) popup_clock_analogue_window_g3

0x9f1d,	// (0x00028172) popup_clock_analogue_window_g4

0x47d3,	// (0x00022a28) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002d928) popup_clock_analogue_window_g

0x9f25,	// (0x0002817a) popup_clock_analogue_window_t1

0x9f69,	// (0x000281be) clock_digital_number_pane_ParamLimits

0x9f69,	// (0x000281be) clock_digital_number_pane

0x9f75,	// (0x000281ca) clock_digital_number_pane_cp02_ParamLimits

0x9f75,	// (0x000281ca) clock_digital_number_pane_cp02

0x9f81,	// (0x000281d6) clock_digital_number_pane_cp03_ParamLimits

0x9f81,	// (0x000281d6) clock_digital_number_pane_cp03

0x9f8d,	// (0x000281e2) clock_digital_number_pane_cp04_ParamLimits

0x9f8d,	// (0x000281e2) clock_digital_number_pane_cp04

0x9f99,	// (0x000281ee) clock_digital_separator_pane_ParamLimits

0x9f99,	// (0x000281ee) clock_digital_separator_pane

0x9fa5,	// (0x000281fa) popup_clock_digital_window_t1_ParamLimits

0x9fa5,	// (0x000281fa) popup_clock_digital_window_t1

0x47d3,	// (0x00022a28) clock_digital_number_pane_g1

0x47d3,	// (0x00022a28) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002d933) clock_digital_number_pane_g

0x47d3,	// (0x00022a28) clock_digital_separator_pane_g1

0x47d3,	// (0x00022a28) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002d933) clock_digital_separator_pane_g

0xaa21,	// (0x00028c76) aid_fill_nsta_ParamLimits

0xaae0,	// (0x00028d35) indicator_nsta_pane_ParamLimits

0x5a9b,	// (0x00023cf0) popup_clock_analogue_window

0x5a9b,	// (0x00023cf0) popup_clock_digital_window

0xb5f5,	// (0x0002984a) grid_indicator_nsta_pane_ParamLimits

0x7556,	// (0x000257ab) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002dcd9) clock_nsta_pane_t

0x9e7d,	// (0x000280d2) aid_size_max_handle

0x9e87,	// (0x000280dc) aid_size_min_handle

0x5810,	// (0x00023a65) editor_scroll_pane

0x7fe6,	// (0x0002623b) ex_editor_pane

0x4fbb,	// (0x00023210) scroll_pane_cp13

0x4e09,	// (0x0002305e) scroll_pane_cp14

0x53ad,	// (0x00023602) scroll_pane_cp36

0x9f43,	// (0x00028198) list_single_graphic_hl_pane_cp2_ParamLimits

0x9f43,	// (0x00028198) list_single_graphic_hl_pane_cp2

0xb367,	// (0x000295bc) list_single_graphic_hl_pane_ParamLimits

0xb367,	// (0x000295bc) list_single_graphic_hl_pane

0xe092,	// (0x0002c2e7) aid_size_min_hl_cp1

0x7fee,	// (0x00026243) list_highlight_pane_cp34_ParamLimits

0x7fee,	// (0x00026243) list_highlight_pane_cp34

0x7fff,	// (0x00026254) list_single_graphic_hl_pane_g1_ParamLimits

0x7fff,	// (0x00026254) list_single_graphic_hl_pane_g1

0xe09b,	// (0x0002c2f0) list_single_graphic_hl_pane_g2_ParamLimits

0xe09b,	// (0x0002c2f0) list_single_graphic_hl_pane_g2

0xe09b,	// (0x0002c2f0) list_single_graphic_hl_pane_g3_ParamLimits

0xe09b,	// (0x0002c2f0) list_single_graphic_hl_pane_g3

0xda09,	// (0x0002bc5e) list_single_graphic_hl_pane_g4_ParamLimits

0xda09,	// (0x0002bc5e) list_single_graphic_hl_pane_g4

0xe0a7,	// (0x0002c2fc) list_single_graphic_hl_pane_g5_ParamLimits

0xe0a7,	// (0x0002c2fc) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002de24) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002de24) list_single_graphic_hl_pane_g

0xe0bb,	// (0x0002c310) list_single_graphic_hl_pane_t1_ParamLimits

0xe0bb,	// (0x0002c310) list_single_graphic_hl_pane_t1

0x800c,	// (0x00026261) aid_size_min_hl_cp2

0x8015,	// (0x0002626a) list_highlight_pane_cp34_cp2_ParamLimits

0x8015,	// (0x0002626a) list_highlight_pane_cp34_cp2

0x7fff,	// (0x00026254) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7fff,	// (0x00026254) list_single_graphic_hl_pane_g1_cp2

0x8022,	// (0x00026277) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8022,	// (0x00026277) list_single_graphic_hl_pane_g2_cp2

0x802e,	// (0x00026283) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x802e,	// (0x00026283) list_single_graphic_hl_pane_g3_cp2

0x5685,	// (0x000238da) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5685,	// (0x000238da) list_single_graphic_hl_pane_g4_cp2

0x7e47,	// (0x0002609c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e47,	// (0x0002609c) list_single_graphic_hl_pane_g5_cp2

0xa42a,	// (0x0002867f) control_pane_g4_ParamLimits

0xa42a,	// (0x0002867f) control_pane_g4

0x4ff2,	// (0x00023247) bg_popup_sub_pane_cp10_ParamLimits

0x7970,	// (0x00025bc5) list_choice_list_pane_ParamLimits

0x797f,	// (0x00025bd4) scroll_pane_cp23

0x49ec,	// (0x00022c41) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e83,	// (0x000260d8) list_preview_fixed_pane_ParamLimits

0x7e99,	// (0x000260ee) list_preview_fixed_pane_cp_ParamLimits

0x7e99,	// (0x000260ee) list_preview_fixed_pane_cp

0x7ea5,	// (0x000260fa) popup_preview_fixed_window_g1_ParamLimits

0x7ea5,	// (0x000260fa) popup_preview_fixed_window_g1

0x7eb1,	// (0x00026106) popup_preview_fixed_window_g2_ParamLimits

0x7eb1,	// (0x00026106) popup_preview_fixed_window_g2

0x0002,

0xfb57,	// (0x0002ddac) popup_preview_fixed_window_g_ParamLimits

0xfb57,	// (0x0002ddac) popup_preview_fixed_window_g

0x9d81,	// (0x00027fd6) aid_navi_side_left_pane_ParamLimits

0x9d91,	// (0x00027fe6) aid_navi_side_right_pane_ParamLimits

0x9da0,	// (0x00027ff5) navi_icon_pane_stacon_ParamLimits

0x9db0,	// (0x00028005) navi_navi_pane_stacon_ParamLimits

0x9da0,	// (0x00027ff5) navi_text_pane_stacon_ParamLimits

0x970d,	// (0x00027962) main_text_info_pane

0x8050,	// (0x000262a5) listscroll_text_info_pane

0x8058,	// (0x000262ad) list_text_info_pane_ParamLimits

0x8058,	// (0x000262ad) list_text_info_pane

0x8067,	// (0x000262bc) scroll_pane_cp24_ParamLimits

0x8067,	// (0x000262bc) scroll_pane_cp24

0xbc2b,	// (0x00029e80) list_text_info_pane_t1_ParamLimits

0xbc2b,	// (0x00029e80) list_text_info_pane_t1

0xa5bb,	// (0x00028810) popup_fast_swap2_window_ParamLimits

0xa5bb,	// (0x00028810) popup_fast_swap2_window

0x8085,	// (0x000262da) aid_size_cell_fast2

0x47c9,	// (0x00022a1e) bg_popup_window_pane_cp17

0x5f6e,	// (0x000241c3) heading_pane_cp2

0x5f76,	// (0x000241cb) listscroll_fast2_pane

0x808f,	// (0x000262e4) grid_fast2_pane

0x8097,	// (0x000262ec) listscroll_fast2_pane_g1

0x809f,	// (0x000262f4) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002de2f) listscroll_fast2_pane_g

0x4fbb,	// (0x00023210) scroll_pane_cp26

0x80a7,	// (0x000262fc) cell_fast2_pane_ParamLimits

0x80a7,	// (0x000262fc) cell_fast2_pane

0x80bd,	// (0x00026312) cell_fast2_pane_g1

0x80c6,	// (0x0002631b) cell_fast2_pane_g2

0x80cf,	// (0x00026324) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002de34) cell_fast2_pane_g

0x4c6a,	// (0x00022ebf) grid_highlight_pane_cp9

0xa587,	// (0x000287dc) main_eswt_pane_ParamLimits

0xa587,	// (0x000287dc) main_eswt_pane

0x807c,	// (0x000262d1) list_single_text_info_pane

0x80d7,	// (0x0002632c) eswt_ctrl_button_pane

0x80d7,	// (0x0002632c) eswt_ctrl_canvas_pane

0x80df,	// (0x00026334) eswt_ctrl_combo_pane

0x80d7,	// (0x0002632c) eswt_ctrl_default_pane

0x80d7,	// (0x0002632c) eswt_ctrl_label_pane

0x80e7,	// (0x0002633c) eswt_ctrl_wait_pane

0x80ef,	// (0x00026344) eswt_shell_pane

0x47c9,	// (0x00022a1e) listscroll_eswt_app_pane

0x810b,	// (0x00026360) popup_eswt_tasktip_window_ParamLimits

0x810b,	// (0x00026360) popup_eswt_tasktip_window

0x5c44,	// (0x00023e99) bg_popup_window_pane_cp18

0x811c,	// (0x00026371) eswt_control_pane_g1_ParamLimits

0x811c,	// (0x00026371) eswt_control_pane_g1

0x8129,	// (0x0002637e) eswt_control_pane_g2_ParamLimits

0x8129,	// (0x0002637e) eswt_control_pane_g2

0x8136,	// (0x0002638b) eswt_control_pane_g3_ParamLimits

0x8136,	// (0x0002638b) eswt_control_pane_g3

0x8143,	// (0x00026398) eswt_control_pane_g4_ParamLimits

0x8143,	// (0x00026398) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002de3b) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002de3b) eswt_control_pane_g

0x4e59,	// (0x000230ae) bg_button_pane_ParamLimits

0x4e59,	// (0x000230ae) bg_button_pane

0x4c7f,	// (0x00022ed4) common_borders_pane_copy2_ParamLimits

0x4c7f,	// (0x00022ed4) common_borders_pane_copy2

0x8150,	// (0x000263a5) control_button_pane_g1_ParamLimits

0x8150,	// (0x000263a5) control_button_pane_g1

0x815c,	// (0x000263b1) control_button_pane_g2_ParamLimits

0x815c,	// (0x000263b1) control_button_pane_g2

0x8168,	// (0x000263bd) control_button_pane_g3_ParamLimits

0x8168,	// (0x000263bd) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002de44) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002de44) control_button_pane_g

0x817c,	// (0x000263d1) control_button_pane_t1

0x818a,	// (0x000263df) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002de4b) control_button_pane_t

0x5b9c,	// (0x00023df1) bg_button_pane_g1

0x5ba4,	// (0x00023df9) bg_button_pane_g2

0x5bac,	// (0x00023e01) bg_button_pane_g3

0x5bb4,	// (0x00023e09) bg_button_pane_g4

0x5bbc,	// (0x00023e11) bg_button_pane_g5

0x5bc4,	// (0x00023e19) bg_button_pane_g6

0x5bcc,	// (0x00023e21) bg_button_pane_g7

0x5bd4,	// (0x00023e29) bg_button_pane_g8

0x5bdc,	// (0x00023e31) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0002da91) bg_button_pane_g

0x792b,	// (0x00025b80) common_borders_pane_ParamLimits

0x792b,	// (0x00025b80) common_borders_pane

0x811c,	// (0x00026371) eswt_control_pane_g1_copy1_ParamLimits

0x811c,	// (0x00026371) eswt_control_pane_g1_copy1

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy1_ParamLimits

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy1

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy1_ParamLimits

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy1

0x8143,	// (0x00026398) eswt_control_pane_g4_copy1_ParamLimits

0x8143,	// (0x00026398) eswt_control_pane_g4_copy1

0x7966,	// (0x00025bbb) bg_eswt_ctrl_canvas_pane_g1

0x792b,	// (0x00025b80) common_borders_pane_cp2_ParamLimits

0x792b,	// (0x00025b80) common_borders_pane_cp2

0x792b,	// (0x00025b80) common_borders_pane_cp3_ParamLimits

0x792b,	// (0x00025b80) common_borders_pane_cp3

0x8198,	// (0x000263ed) separator_horizontal_pane

0x520d,	// (0x00023462) separator_vertical_pane

0x811c,	// (0x00026371) eswt_control_pane_g1_copy2_ParamLimits

0x811c,	// (0x00026371) eswt_control_pane_g1_copy2

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy2_ParamLimits

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy2

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy2_ParamLimits

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy2

0x8143,	// (0x00026398) eswt_control_pane_g4_copy2_ParamLimits

0x8143,	// (0x00026398) eswt_control_pane_g4_copy2

0x47c9,	// (0x00022a1e) common_borders_pane_cp4

0x81a0,	// (0x000263f5) separator_horizontal_pane_g1

0x81a9,	// (0x000263fe) separator_horizontal_pane_g2

0x81b2,	// (0x00026407) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002de50) separator_horizontal_pane_g

0x811c,	// (0x00026371) eswt_control_pane_g1_copy3_ParamLimits

0x811c,	// (0x00026371) eswt_control_pane_g1_copy3

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy3_ParamLimits

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy3

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy3_ParamLimits

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy3

0x8143,	// (0x00026398) eswt_control_pane_g4_copy3_ParamLimits

0x8143,	// (0x00026398) eswt_control_pane_g4_copy3

0x47c9,	// (0x00022a1e) common_borders_pane_cp5

0x81bb,	// (0x00026410) separator_vertical_pane_g1

0x81c4,	// (0x00026419) separator_vertical_pane_g2

0x81cd,	// (0x00026422) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002de57) separator_vertical_pane_g

0x811c,	// (0x00026371) eswt_control_pane_g1_copy4_ParamLimits

0x811c,	// (0x00026371) eswt_control_pane_g1_copy4

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy4_ParamLimits

0x8129,	// (0x0002637e) eswt_control_pane_g2_copy4

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy4_ParamLimits

0x8136,	// (0x0002638b) eswt_control_pane_g3_copy4

0x8143,	// (0x00026398) eswt_control_pane_g4_copy4_ParamLimits

0x8143,	// (0x00026398) eswt_control_pane_g4_copy4

0xbc48,	// (0x00029e9d) eswt_ctrl_combo_button_pane

0xbc50,	// (0x00029ea5) eswt_ctrl_input_pane

0xbc58,	// (0x00029ead) popup_choice_list_window_cp70

0xbc60,	// (0x00029eb5) eswt_ctrl_input_pane_t1

0x47c9,	// (0x00022a1e) input_focus_pane_cp70

0x792b,	// (0x00025b80) bg_button_pane_cp70_ParamLimits

0x792b,	// (0x00025b80) bg_button_pane_cp70

0xbc6e,	// (0x00029ec3) eswt_ctrl_combo_button_pane_g1

0x81d6,	// (0x0002642b) wait_bar_pane_cp70

0x5c44,	// (0x00023e99) bg_popup_window_pane_cp70_ParamLimits

0x5c44,	// (0x00023e99) bg_popup_window_pane_cp70

0x81de,	// (0x00026433) popup_eswt_tasktip_window_t1

0x81f4,	// (0x00026449) wait_bar_pane_cp71_ParamLimits

0x81f4,	// (0x00026449) wait_bar_pane_cp71

0x8200,	// (0x00026455) grid_eswt_app_pane

0x5216,	// (0x0002346b) scroll_pane_cp70

0xbc76,	// (0x00029ecb) cell_eswt_app_pane_ParamLimits

0xbc76,	// (0x00029ecb) cell_eswt_app_pane

0xbc9e,	// (0x00029ef3) cell_eswt_app_pane_g1_ParamLimits

0xbc9e,	// (0x00029ef3) cell_eswt_app_pane_g1

0xbccd,	// (0x00029f22) cell_eswt_app_pane_g2_ParamLimits

0xbccd,	// (0x00029f22) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002de5e) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002de5e) cell_eswt_app_pane_g

0xbcf6,	// (0x00029f4b) cell_eswt_app_pane_t1_ParamLimits

0xbcf6,	// (0x00029f4b) cell_eswt_app_pane_t1

0x8209,	// (0x0002645e) grid_highlight_pane_cp70_ParamLimits

0x8209,	// (0x0002645e) grid_highlight_pane_cp70

0x4e73,	// (0x000230c8) set_content_pane_g1

0x598f,	// (0x00023be4) status_small_volume_pane

0xbd28,	// (0x00029f7d) status_small_volume_pane_g1

0xbd30,	// (0x00029f85) volume_small2_pane

0xbd39,	// (0x00029f8e) volume_small2_pane_g1

0xbd42,	// (0x00029f97) volume_small2_pane_g2

0xbd4b,	// (0x00029fa0) volume_small2_pane_g3

0xbd54,	// (0x00029fa9) volume_small2_pane_g4

0xbd5d,	// (0x00029fb2) volume_small2_pane_g5

0xbd66,	// (0x00029fbb) volume_small2_pane_g6

0xbd6f,	// (0x00029fc4) volume_small2_pane_g7

0xbd78,	// (0x00029fcd) volume_small2_pane_g8

0xbd81,	// (0x00029fd6) volume_small2_pane_g9

0xbd8a,	// (0x00029fdf) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002de63) volume_small2_pane_g

0x7c99,	// (0x00025eee) fep_vkb_top_text_pane_g1_ParamLimits

0xb9e5,	// (0x00029c3a) fep_vkb_top_text_pane_t1_ParamLimits

0x7ebd,	// (0x00026112) popup_preview_fixed_window_g3_ParamLimits

0x7ebd,	// (0x00026112) popup_preview_fixed_window_g3

0xa97d,	// (0x00028bd2) popup_toolbar_trans_pane

0x6cc5,	// (0x00024f1a) aid_height_set_list_ParamLimits

0x6cd1,	// (0x00024f26) aid_size_parent_ParamLimits

0x4ff2,	// (0x00023247) list_highlight_pane_cp2_ParamLimits

0x4e73,	// (0x000230c8) set_content_pane_g1_ParamLimits

0xb37c,	// (0x000295d1) list_single_image_pane_ParamLimits

0xb37c,	// (0x000295d1) list_single_image_pane

0xbd93,	// (0x00029fe8) aid_size_cell_image_ParamLimits

0xbd93,	// (0x00029fe8) aid_size_cell_image

0xbda0,	// (0x00029ff5) grid_single_image_pane_ParamLimits

0xbda0,	// (0x00029ff5) grid_single_image_pane

0x4e73,	// (0x000230c8) list_single_image_pane_g1_ParamLimits

0x4e73,	// (0x000230c8) list_single_image_pane_g1

0x4e7f,	// (0x000230d4) list_single_image_pane_g2_ParamLimits

0x4e7f,	// (0x000230d4) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002de78) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002de78) list_single_image_pane_g

0x77ea,	// (0x00025a3f) list_single_image_pane_t1_ParamLimits

0x77ea,	// (0x00025a3f) list_single_image_pane_t1

0xbdac,	// (0x0002a001) cell_image_list_pane_ParamLimits

0xbdac,	// (0x0002a001) cell_image_list_pane

0xbdbf,	// (0x0002a014) cell_image_list_pane_g1

0xbdc8,	// (0x0002a01d) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002de7d) cell_image_list_pane_g

0x8215,	// (0x0002646a) aid_size_cell_tb_trans_pane

0x4e59,	// (0x000230ae) bg_tb_trans_pane

0x8227,	// (0x0002647c) grid_tb_trans_pane

0x5b9c,	// (0x00023df1) bg_tb_trans_pane_g1

0x5ba4,	// (0x00023df9) bg_tb_trans_pane_g2

0x5bac,	// (0x00023e01) bg_tb_trans_pane_g3

0x5bb4,	// (0x00023e09) bg_tb_trans_pane_g4

0x5bbc,	// (0x00023e11) bg_tb_trans_pane_g5

0x5bd4,	// (0x00023e29) bg_tb_trans_pane_g6

0x5bdc,	// (0x00023e31) bg_tb_trans_pane_g7

0x5bc4,	// (0x00023e19) bg_tb_trans_pane_g8

0x5bcc,	// (0x00023e21) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002de82) bg_tb_trans_pane_g

0x823b,	// (0x00026490) cell_toolbar_trans_pane_ParamLimits

0x823b,	// (0x00026490) cell_toolbar_trans_pane

0x7966,	// (0x00025bbb) cell_toolbar_trans_pane_g1

0xb737,	// (0x0002998c) list_form2_midp_pane_t1

0xb745,	// (0x0002999a) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002dd1f) list_form2_midp_pane_t

0x7624,	// (0x00025879) scroll_pane_cp51_ParamLimits

0x779a,	// (0x000259ef) form2_midp_wait_pane_g1

0x77a3,	// (0x000259f8) form2_midp_wait_pane_g2

0x77ac,	// (0x00025a01) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002dd34) form2_midp_wait_pane_g

0x48b9,	// (0x00022b0e) list_highlight_pane_cp21_ParamLimits

0x7800,	// (0x00025a55) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x780f,	// (0x00025a64) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdb5a,	// (0x0002bdaf) list_single_2graphic_im_pane_ParamLimits

0xdb5a,	// (0x0002bdaf) list_single_2graphic_im_pane

0xbdd1,	// (0x0002a026) list_single_2graphic_im_pane_g1_ParamLimits

0xbdd1,	// (0x0002a026) list_single_2graphic_im_pane_g1

0xbde2,	// (0x0002a037) list_single_2graphic_im_pane_g2_ParamLimits

0xbde2,	// (0x0002a037) list_single_2graphic_im_pane_g2

0xbdee,	// (0x0002a043) list_single_2graphic_im_pane_g3_ParamLimits

0xbdee,	// (0x0002a043) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002de95) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002de95) list_single_2graphic_im_pane_g

0xbe02,	// (0x0002a057) list_single_2graphic_im_pane_t1_ParamLimits

0xbe02,	// (0x0002a057) list_single_2graphic_im_pane_t1

0x7ec9,	// (0x0002611e) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ec9,	// (0x0002611e) list_single_graphic_2heading_pane_fp

0xdf04,	// (0x0002c159) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xdf04,	// (0x0002c159) list_single_graphic_2heading_pane_fp_g1

0x7edd,	// (0x00026132) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7edd,	// (0x00026132) list_single_graphic_2heading_pane_fp_g2

0xdecd,	// (0x0002c122) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xdecd,	// (0x0002c122) list_single_graphic_2heading_pane_fp_g3

0xded9,	// (0x0002c12e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xded9,	// (0x0002c12e) list_single_graphic_2heading_pane_fp_g4

0x7ee9,	// (0x0002613e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ee9,	// (0x0002613e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb67,	// (0x0002ddbc) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb67,	// (0x0002ddbc) list_single_graphic_2heading_pane_fp_g

0xe0d1,	// (0x0002c326) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe0d1,	// (0x0002c326) list_single_graphic_2heading_pane_fp_t1

0xdf3c,	// (0x0002c191) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdf3c,	// (0x0002c191) list_single_graphic_2heading_pane_fp_t2

0xe0e7,	// (0x0002c33c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe0e7,	// (0x0002c33c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002de9e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002de9e) list_single_graphic_2heading_pane_fp_t

0x79ef,	// (0x00025c44) fep_hwr_write_pane_g5_ParamLimits

0x79ef,	// (0x00025c44) fep_hwr_write_pane_g5

0x79fb,	// (0x00025c50) fep_hwr_write_pane_g6_ParamLimits

0x79fb,	// (0x00025c50) fep_hwr_write_pane_g6

0x80ef,	// (0x00026344) eswt_shell_pane_ParamLimits

0x5c44,	// (0x00023e99) bg_popup_window_pane_cp18_ParamLimits

0x6c69,	// (0x00024ebe) heading_pane_cp70

0x81de,	// (0x00026433) popup_eswt_tasktip_window_t1_ParamLimits

0xaa57,	// (0x00028cac) aid_touch_tab_arrow_left

0xaa63,	// (0x00028cb8) aid_touch_tab_arrow_right

0x9934,	// (0x00027b89) title_pane_g3_ParamLimits

0x9934,	// (0x00027b89) title_pane_g3

0x4e29,	// (0x0002307e) set_value_pane_g1

0xa97d,	// (0x00028bd2) popup_toolbar_trans_pane_ParamLimits

0x8215,	// (0x0002646a) aid_size_cell_tb_trans_pane_ParamLimits

0x4e59,	// (0x000230ae) bg_tb_trans_pane_ParamLimits

0x8227,	// (0x0002647c) grid_tb_trans_pane_ParamLimits

0x49ec,	// (0x00022c41) cont_note_pane_ParamLimits

0x49ec,	// (0x00022c41) cont_note_pane

0x4c7f,	// (0x00022ed4) cont_snote2_single_text_pane_ParamLimits

0x4c7f,	// (0x00022ed4) cont_snote2_single_text_pane

0x4c7f,	// (0x00022ed4) cont_snote2_single_graphic_pane_ParamLimits

0x4c7f,	// (0x00022ed4) cont_snote2_single_graphic_pane

0x618c,	// (0x000243e1) cont_note_wait_pane_ParamLimits

0x618c,	// (0x000243e1) cont_note_wait_pane

0x618c,	// (0x000243e1) cont_note_image_pane_ParamLimits

0x618c,	// (0x000243e1) cont_note_image_pane

0x826d,	// (0x000264c2) popup_note2_window_g1_ParamLimits

0x826d,	// (0x000264c2) popup_note2_window_g1

0x829e,	// (0x000264f3) popup_note2_window_t1_ParamLimits

0x829e,	// (0x000264f3) popup_note2_window_t1

0x82e3,	// (0x00026538) popup_note2_window_t2_ParamLimits

0x82e3,	// (0x00026538) popup_note2_window_t2

0x8328,	// (0x0002657d) popup_note2_window_t3_ParamLimits

0x8328,	// (0x0002657d) popup_note2_window_t3

0x836d,	// (0x000265c2) popup_note2_window_t4_ParamLimits

0x836d,	// (0x000265c2) popup_note2_window_t4

0x4a70,	// (0x00022cc5) popup_note2_window_t5_ParamLimits

0x4a70,	// (0x00022cc5) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002deaa) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002deaa) popup_note2_window_t

0x839c,	// (0x000265f1) popup_note2_image_window_g1_ParamLimits

0x839c,	// (0x000265f1) popup_note2_image_window_g1

0x83a8,	// (0x000265fd) popup_note2_image_window_g2_ParamLimits

0x83a8,	// (0x000265fd) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002deb5) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002deb5) popup_note2_image_window_g

0x83ba,	// (0x0002660f) popup_note2_image_window_t1_ParamLimits

0x83ba,	// (0x0002660f) popup_note2_image_window_t1

0x83d2,	// (0x00026627) popup_note2_image_window_t2_ParamLimits

0x83d2,	// (0x00026627) popup_note2_image_window_t2

0x83ea,	// (0x0002663f) popup_note2_image_window_t3_ParamLimits

0x83ea,	// (0x0002663f) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002deba) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002deba) popup_note2_image_window_t

0x619a,	// (0x000243ef) popup_note2_wait_window_g1_ParamLimits

0x619a,	// (0x000243ef) popup_note2_wait_window_g1

0x61a6,	// (0x000243fb) popup_note2_wait_window_g2_ParamLimits

0x61a6,	// (0x000243fb) popup_note2_wait_window_g2

0x61b2,	// (0x00024407) popup_note2_wait_window_g3_ParamLimits

0x61b2,	// (0x00024407) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x0002da73) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x0002da73) popup_note2_wait_window_g

0x8406,	// (0x0002665b) popup_note2_wait_window_t1_ParamLimits

0x8406,	// (0x0002665b) popup_note2_wait_window_t1

0x8424,	// (0x00026679) popup_note2_wait_window_t2_ParamLimits

0x8424,	// (0x00026679) popup_note2_wait_window_t2

0x8442,	// (0x00026697) popup_note2_wait_window_t3_ParamLimits

0x8442,	// (0x00026697) popup_note2_wait_window_t3

0x8454,	// (0x000266a9) popup_note2_wait_window_t4_ParamLimits

0x8454,	// (0x000266a9) popup_note2_wait_window_t4

0x0003,

0xfc6c,	// (0x0002dec1) popup_note2_wait_window_t_ParamLimits

0xfc6c,	// (0x0002dec1) popup_note2_wait_window_t

0x8466,	// (0x000266bb) wait_bar2_pane_ParamLimits

0x8466,	// (0x000266bb) wait_bar2_pane

0x847e,	// (0x000266d3) popup_snote2_single_text_window_g1_ParamLimits

0x847e,	// (0x000266d3) popup_snote2_single_text_window_g1

0x84a6,	// (0x000266fb) popup_snote2_single_text_window_t1_ParamLimits

0x84a6,	// (0x000266fb) popup_snote2_single_text_window_t1

0x84f2,	// (0x00026747) popup_snote2_single_text_window_t2_ParamLimits

0x84f2,	// (0x00026747) popup_snote2_single_text_window_t2

0x853e,	// (0x00026793) popup_snote2_single_text_window_t3_ParamLimits

0x853e,	// (0x00026793) popup_snote2_single_text_window_t3

0x857f,	// (0x000267d4) popup_snote2_single_text_window_t4_ParamLimits

0x857f,	// (0x000267d4) popup_snote2_single_text_window_t4

0x85b5,	// (0x0002680a) popup_snote2_single_text_window_t5_ParamLimits

0x85b5,	// (0x0002680a) popup_snote2_single_text_window_t5

0x0004,

0xfc75,	// (0x0002deca) popup_snote2_single_text_window_t_ParamLimits

0xfc75,	// (0x0002deca) popup_snote2_single_text_window_t

0x85e0,	// (0x00026835) popup_snote2_single_graphic_window_g1_ParamLimits

0x85e0,	// (0x00026835) popup_snote2_single_graphic_window_g1

0x8608,	// (0x0002685d) popup_snote2_single_graphic_window_g2_ParamLimits

0x8608,	// (0x0002685d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc80,	// (0x0002ded5) popup_snote2_single_graphic_window_g_ParamLimits

0xfc80,	// (0x0002ded5) popup_snote2_single_graphic_window_g

0x8630,	// (0x00026885) popup_snote2_single_graphic_window_t1_ParamLimits

0x8630,	// (0x00026885) popup_snote2_single_graphic_window_t1

0x867c,	// (0x000268d1) popup_snote2_single_graphic_window_t2_ParamLimits

0x867c,	// (0x000268d1) popup_snote2_single_graphic_window_t2

0x853e,	// (0x00026793) popup_snote2_single_graphic_window_t3_ParamLimits

0x853e,	// (0x00026793) popup_snote2_single_graphic_window_t3

0x857f,	// (0x000267d4) popup_snote2_single_graphic_window_t4_ParamLimits

0x857f,	// (0x000267d4) popup_snote2_single_graphic_window_t4

0x85b5,	// (0x0002680a) popup_snote2_single_graphic_window_t5_ParamLimits

0x85b5,	// (0x0002680a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc85,	// (0x0002deda) popup_snote2_single_graphic_window_t_ParamLimits

0xfc85,	// (0x0002deda) popup_snote2_single_graphic_window_t

0x75bd,	// (0x00025812) clock_nsta_pane_cp2_t1

0x75bd,	// (0x00025812) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002dcf5) clock_nsta_pane_cp2_t

0xd7ef,	// (0x0002ba44) form_field_data_wide_pane_g1_ParamLimits

0x4e73,	// (0x000230c8) form_field_data_wide_pane_g2_ParamLimits

0x4e73,	// (0x000230c8) form_field_data_wide_pane_g2

0x4e7f,	// (0x000230d4) form_field_data_wide_pane_g3_ParamLimits

0x4e7f,	// (0x000230d4) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002d8ab) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002d8ab) form_field_data_wide_pane_g

0xb5e9,	// (0x0002983e) grid_touch_3_pane_ParamLimits

0xb5e9,	// (0x0002983e) grid_touch_3_pane

0xbe33,	// (0x0002a088) cell_touch_3_pane_ParamLimits

0xbe33,	// (0x0002a088) cell_touch_3_pane

0x7966,	// (0x00025bbb) cell_touch_3_pane_g1

0x7966,	// (0x00025bbb) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002dd7a) cell_touch_3_pane_g

0x4ac8,	// (0x00022d1d) cont_query_data_pane

0x4ad0,	// (0x00022d25) cont_query_data_pane_cp1

0x86c8,	// (0x0002691d) button_value_adjust_pane_cp7

0x86d0,	// (0x00026925) query_popup_pane_cp3

0x53be,	// (0x00023613) bg_popup_sub_pane_cp22_ParamLimits

0xa026,	// (0x0002827b) navi_navi_volume_pane_cp2

0xa03e,	// (0x00028293) popup_side_volume_key_window_g2

0xa04a,	// (0x0002829f) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002d941) popup_side_volume_key_window_g

0xa064,	// (0x000282b9) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002d948) popup_side_volume_key_window_t

0x5608,	// (0x0002385d) popup_side_volume_key_window_ParamLimits

0xd453,	// (0x0002b6a8) list_double_graphic_pane_g4_ParamLimits

0xd453,	// (0x0002b6a8) list_double_graphic_pane_g4

0xb350,	// (0x000295a5) list_single_2heading_msg_pane_ParamLimits

0xb350,	// (0x000295a5) list_single_2heading_msg_pane

0xe105,	// (0x0002c35a) list_single_2heading_msg_pane_g1_ParamLimits

0xe105,	// (0x0002c35a) list_single_2heading_msg_pane_g1

0xd29e,	// (0x0002b4f3) list_single_2heading_msg_pane_g2_ParamLimits

0xd29e,	// (0x0002b4f3) list_single_2heading_msg_pane_g2

0xdc52,	// (0x0002bea7) list_single_2heading_msg_pane_g3_ParamLimits

0xdc52,	// (0x0002bea7) list_single_2heading_msg_pane_g3

0xe111,	// (0x0002c366) list_single_2heading_msg_pane_g4_ParamLimits

0xe111,	// (0x0002c366) list_single_2heading_msg_pane_g4

0x0003,

0xfc90,	// (0x0002dee5) list_single_2heading_msg_pane_g_ParamLimits

0xfc90,	// (0x0002dee5) list_single_2heading_msg_pane_g

0xe129,	// (0x0002c37e) list_single_2heading_msg_pane_t1_ParamLimits

0xe129,	// (0x0002c37e) list_single_2heading_msg_pane_t1

0xe151,	// (0x0002c3a6) list_single_2heading_msg_pane_t2_ParamLimits

0xe151,	// (0x0002c3a6) list_single_2heading_msg_pane_t2

0xe185,	// (0x0002c3da) list_single_2heading_msg_pane_t3_ParamLimits

0xe185,	// (0x0002c3da) list_single_2heading_msg_pane_t3

0xe1be,	// (0x0002c413) list_single_2heading_msg_pane_t4_ParamLimits

0xe1be,	// (0x0002c413) list_single_2heading_msg_pane_t4

0x0003,

0xfc99,	// (0x0002deee) list_single_2heading_msg_pane_t_ParamLimits

0xfc99,	// (0x0002deee) list_single_2heading_msg_pane_t

0x485f,	// (0x00022ab4) title_pane_g4_ParamLimits

0x485f,	// (0x00022ab4) title_pane_g4

0x9cf7,	// (0x00027f4c) title_pane_stacon_g3_ParamLimits

0x9cf7,	// (0x00027f4c) title_pane_stacon_g3

0x8261,	// (0x000264b6) list_single_2graphic_im_pane_g4_ParamLimits

0x8261,	// (0x000264b6) list_single_2graphic_im_pane_g4

0x6a93,	// (0x00024ce8) popup_side_volume_key_window_cp

0x6f31,	// (0x00025186) main_idle_act2_pane_t1

0xad46,	// (0x00028f9b) toolbar_button_pane_g10

0x9c42,	// (0x00027e97) popup_toolbar_window_cp1

0x75ae,	// (0x00025803) clock_nsta_pane_cp_t1

0x75ae,	// (0x00025803) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002dcf0) clock_nsta_pane_cp_t

0xa026,	// (0x0002827b) navi_navi_volume_pane_cp2_ParamLimits

0xa032,	// (0x00028287) popup_side_volume_key_window_g1_ParamLimits

0xa03e,	// (0x00028293) popup_side_volume_key_window_g2_ParamLimits

0xa04a,	// (0x0002829f) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002d941) popup_side_volume_key_window_g_ParamLimits

0xb7a4,	// (0x000299f9) fep_hwr_aid_pane

0xb845,	// (0x00029a9a) bg_fep_hwr_top_pane_g4_ParamLimits

0x79d1,	// (0x00025c26) fep_hwr_top_pane_g1_ParamLimits

0x79bf,	// (0x00025c14) fep_hwr_top_pane_g2_ParamLimits

0xb865,	// (0x00029aba) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002dd45) fep_hwr_top_pane_g_ParamLimits

0xb87a,	// (0x00029acf) fep_hwr_top_text_pane_ParamLimits

0x689c,	// (0x00024af1) aid_touch_tab_arrow_arrow_2

0x6893,	// (0x00024ae8) aid_touch_tab_arrow_left_2

0xb7b8,	// (0x00029a0d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb7eb,	// (0x00029a40) fep_hwr_prediction_pane

0x7b04,	// (0x00025d59) fep_vkb_prediction_pane

0xb9c2,	// (0x00029c17) fep_vkb_side_pane_g3_ParamLimits

0xb9c2,	// (0x00029c17) fep_vkb_side_pane_g3

0xbacd,	// (0x00029d22) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbb37,	// (0x00029d8c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbb44,	// (0x00029d99) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9f,	// (0x0002ddf4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xbe74,	// (0x0002a0c9) fep_hwr_prediction_pane_g1

0xbe7e,	// (0x0002a0d3) fep_hwr_prediction_pane_g2

0xbe86,	// (0x0002a0db) fep_hwr_prediction_pane_g3

0xbe8e,	// (0x0002a0e3) fep_hwr_prediction_pane_g4

0x0003,

0xfca2,	// (0x0002def7) fep_hwr_prediction_pane_g

0x86e1,	// (0x00026936) fep_vkb_prediction_pane_g1

0x86eb,	// (0x00026940) fep_vkb_prediction_pane_g2

0x86f3,	// (0x00026948) fep_vkb_prediction_pane_g3

0x86fb,	// (0x00026950) fep_vkb_prediction_pane_g4

0x0003,

0xfcab,	// (0x0002df00) fep_vkb_prediction_pane_g

0xb199,	// (0x000293ee) slider_set_pane_g3

0xb1ad,	// (0x00029402) slider_set_pane_g4

0xb1c5,	// (0x0002941a) slider_set_pane_g5

0xb199,	// (0x000293ee) slider_set_pane_g6

0xb1db,	// (0x00029430) slider_set_pane_g7

0x6d5f,	// (0x00024fb4) slider_form_pane_g3

0x6d68,	// (0x00024fbd) slider_form_pane_g4

0x6d70,	// (0x00024fc5) slider_form_pane_g5

0x6d5f,	// (0x00024fb4) slider_form_pane_g6

0xb335,	// (0x0002958a) slider_form_pane_g7

0x7182,	// (0x000253d7) slider_set_pane_vc_g3

0x718b,	// (0x000253e0) slider_set_pane_vc_g4

0x7194,	// (0x000253e9) slider_set_pane_vc_g5

0x7182,	// (0x000253d7) slider_set_pane_vc_g6

0x719d,	// (0x000253f2) slider_set_pane_vc_g7

0x7182,	// (0x000253d7) slider_form_pane_vc_g1

0x718b,	// (0x000253e0) slider_form_pane_vc_g2

0x7194,	// (0x000253e9) slider_form_pane_vc_g3

0x7182,	// (0x000253d7) slider_form_pane_vc_g4

0x7311,	// (0x00025566) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002dcc2) slider_form_pane_vc_g

0x970d,	// (0x00027962) main_idle_act3_pane

0x8703,	// (0x00026958) ai3_links_pane

0xbe96,	// (0x0002a0eb) popup_ai3_data_window_ParamLimits

0xbe96,	// (0x0002a0eb) popup_ai3_data_window

0x47c9,	// (0x00022a1e) grid_ai3_links_pane

0xbeae,	// (0x0002a103) cell_ai3_links_pane_ParamLimits

0xbeae,	// (0x0002a103) cell_ai3_links_pane

0x870c,	// (0x00026961) bg_popup_sub_pane_cp11

0x8719,	// (0x0002696e) cell_ai3_links_pane_g1

0x47c9,	// (0x00022a1e) bg_popup_sub_pane_cp12

0x873e,	// (0x00026993) heading_ai3_data_pane

0x8746,	// (0x0002699b) list_ai3_gene_pane

0x8752,	// (0x000269a7) popup_ai3_data_window_g1

0x875a,	// (0x000269af) heading_ai3_data_pane_g1

0x8762,	// (0x000269b7) heading_ai3_data_pane_t1

0x8770,	// (0x000269c5) list_double_ai3_gene_pane_ParamLimits

0x8770,	// (0x000269c5) list_double_ai3_gene_pane

0x877d,	// (0x000269d2) list_single_ai3_gene_pane_ParamLimits

0x877d,	// (0x000269d2) list_single_ai3_gene_pane

0x792b,	// (0x00025b80) list_highlight_pane_cp7_ParamLimits

0x792b,	// (0x00025b80) list_highlight_pane_cp7

0x878a,	// (0x000269df) list_single_a13_gene_pane_t1_ParamLimits

0x878a,	// (0x000269df) list_single_a13_gene_pane_t1

0x87a1,	// (0x000269f6) list_single_ai3_gene_pane_g1

0x87aa,	// (0x000269ff) list_single_ai3_gene_pane_g2

0x0001,

0xfcb4,	// (0x0002df09) list_single_ai3_gene_pane_g

0x87b2,	// (0x00026a07) list_double_ai3_gene_pane_g1_ParamLimits

0x87b2,	// (0x00026a07) list_double_ai3_gene_pane_g1

0x87be,	// (0x00026a13) list_double_ai3_gene_pane_t1_ParamLimits

0x87be,	// (0x00026a13) list_double_ai3_gene_pane_t1

0x87da,	// (0x00026a2f) list_double_ai3_gene_pane_t2_ParamLimits

0x87da,	// (0x00026a2f) list_double_ai3_gene_pane_t2

0x87ef,	// (0x00026a44) list_double_ai3_gene_pane_t3_ParamLimits

0x87ef,	// (0x00026a44) list_double_ai3_gene_pane_t3

0x0002,

0xfcb9,	// (0x0002df0e) list_double_ai3_gene_pane_t_ParamLimits

0xfcb9,	// (0x0002df0e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe0fd,	// (0x0002c352) aid_size_min_col_2

0xbe60,	// (0x0002a0b5) aid_size_min_msg_ParamLimits

0xbe60,	// (0x0002a0b5) aid_size_min_msg

0xb9d6,	// (0x00029c2b) fep_vkb_top_text_pane_g2_ParamLimits

0xb9d6,	// (0x00029c2b) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002dd75) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002dd75) fep_vkb_top_text_pane_g

0x970d,	// (0x00027962) main_hc_apps_shell_pane

0x880c,	// (0x00026a61) grid_hc_apps_pane_ParamLimits

0x880c,	// (0x00026a61) grid_hc_apps_pane

0x881e,	// (0x00026a73) list_hc_apps_pane

0x8826,	// (0x00026a7b) scroll_pane_cp37_ParamLimits

0x8826,	// (0x00026a7b) scroll_pane_cp37

0xbec2,	// (0x0002a117) cell_hc_apps_pane_ParamLimits

0xbec2,	// (0x0002a117) cell_hc_apps_pane

0xbf50,	// (0x0002a1a5) cell_hc_apps_pane_g1_ParamLimits

0xbf50,	// (0x0002a1a5) cell_hc_apps_pane_g1

0x8832,	// (0x00026a87) cell_hc_apps_pane_g2_ParamLimits

0x8832,	// (0x00026a87) cell_hc_apps_pane_g2

0x884e,	// (0x00026aa3) cell_hc_apps_pane_g3_ParamLimits

0x884e,	// (0x00026aa3) cell_hc_apps_pane_g3

0x0002,

0xfcc0,	// (0x0002df15) cell_hc_apps_pane_g_ParamLimits

0xfcc0,	// (0x0002df15) cell_hc_apps_pane_g

0xbf7c,	// (0x0002a1d1) cell_hc_apps_pane_t1_ParamLimits

0xbf7c,	// (0x0002a1d1) cell_hc_apps_pane_t1

0x49ec,	// (0x00022c41) grid_highlight_pane_cp10_ParamLimits

0x49ec,	// (0x00022c41) grid_highlight_pane_cp10

0xbfba,	// (0x0002a20f) list_single_hc_apps_pane_ParamLimits

0xbfba,	// (0x0002a20f) list_single_hc_apps_pane

0xbfea,	// (0x0002a23f) list_single_hc_apps_pane_g1

0xe1e3,	// (0x0002c438) list_single_hc_apps_pane_g2

0x0001,

0xfcc7,	// (0x0002df1c) list_single_hc_apps_pane_g

0xe1fc,	// (0x0002c451) list_single_hc_apps_pane_g2_copy1

0xe218,	// (0x0002c46d) list_single_hc_apps_pane_t1

0x48b9,	// (0x00022b0e) bg_set_opt_pane_cp_ParamLimits

0x99dc,	// (0x00027c31) setting_slider_pane_t1_ParamLimits

0x99f2,	// (0x00027c47) setting_slider_pane_t2_ParamLimits

0x9a0b,	// (0x00027c60) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002d78e) setting_slider_pane_t_ParamLimits

0x9a22,	// (0x00027c77) slider_set_pane_ParamLimits

0xa43e,	// (0x00028693) control_pane_g5_ParamLimits

0xa43e,	// (0x00028693) control_pane_g5

0x6cb0,	// (0x00024f05) slider_set_pane_g1_ParamLimits

0xb18d,	// (0x000293e2) slider_set_pane_g2_ParamLimits

0xb199,	// (0x000293ee) slider_set_pane_g3_ParamLimits

0xb1ad,	// (0x00029402) slider_set_pane_g4_ParamLimits

0xb1c5,	// (0x0002941a) slider_set_pane_g5_ParamLimits

0xb199,	// (0x000293ee) slider_set_pane_g6_ParamLimits

0xb1db,	// (0x00029430) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0002db8f) slider_set_pane_g_ParamLimits

0x48b9,	// (0x00022b0e) navi_icon_text_pane_ParamLimits

0xaa31,	// (0x00028c86) aid_fill_nsta_2_ParamLimits

0xaa57,	// (0x00028cac) aid_touch_tab_arrow_left_ParamLimits

0xaa63,	// (0x00028cb8) aid_touch_tab_arrow_right_ParamLimits

0xaacd,	// (0x00028d22) clock_nsta_pane_ParamLimits

0x6875,	// (0x00024aca) navi_icon_pane_g1_ParamLimits

0x6881,	// (0x00024ad6) navi_text_pane_t1_ParamLimits

0x75fe,	// (0x00025853) navi_icon_text_pane_g1_ParamLimits

0x760a,	// (0x0002585f) navi_icon_text_pane_t1_ParamLimits

0xbfea,	// (0x0002a23f) list_single_hc_apps_pane_g1_ParamLimits

0xe1e3,	// (0x0002c438) list_single_hc_apps_pane_g2_ParamLimits

0xfcc7,	// (0x0002df1c) list_single_hc_apps_pane_g_ParamLimits

0xe1fc,	// (0x0002c451) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe218,	// (0x0002c46d) list_single_hc_apps_pane_t1_ParamLimits

0x9850,	// (0x00027aa5) popup_toolbar2_fixed_window_ParamLimits

0x9850,	// (0x00027aa5) popup_toolbar2_fixed_window

0xa975,	// (0x00028bca) popup_toolbar2_float_window

0x47c9,	// (0x00022a1e) bg_popup_sub_pane_cp27

0x8870,	// (0x00026ac5) grid_toolbar2_float_pane

0x47c9,	// (0x00022a1e) bg_popup_sub_pane_cp26

0x8870,	// (0x00026ac5) grid_toolbar2_fixed_pane

0xc003,	// (0x0002a258) cell_toolbar2_fixed_pane_ParamLimits

0xc003,	// (0x0002a258) cell_toolbar2_fixed_pane

0xc014,	// (0x0002a269) cell_toolbar2_fixed_pane_g1

0x8878,	// (0x00026acd) toolbar2_fixed_button_pane

0x5b9c,	// (0x00023df1) toolbar2_fixed_button_pane_g1

0x5ba4,	// (0x00023df9) toolbar2_fixed_button_pane_g2

0x5bac,	// (0x00023e01) toolbar2_fixed_button_pane_g3

0x5bb4,	// (0x00023e09) toolbar2_fixed_button_pane_g4

0x5bbc,	// (0x00023e11) toolbar2_fixed_button_pane_g5

0x5bc4,	// (0x00023e19) toolbar2_fixed_button_pane_g6

0x5bcc,	// (0x00023e21) toolbar2_fixed_button_pane_g7

0x5bd4,	// (0x00023e29) toolbar2_fixed_button_pane_g8

0x5bdc,	// (0x00023e31) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0002da91) toolbar2_fixed_button_pane_g

0x8880,	// (0x00026ad5) cell_toolbar2_float_pane_ParamLimits

0x8880,	// (0x00026ad5) cell_toolbar2_float_pane

0x8891,	// (0x00026ae6) cell_toolbar2_float_pane_g1

0x8878,	// (0x00026acd) toolbar2_fixed_button_pane_cp

0xb98f,	// (0x00029be4) fep_vkb_accented_list_pane_ParamLimits

0xb98f,	// (0x00029be4) fep_vkb_accented_list_pane

0xbaad,	// (0x00029d02) bg_popup_fep_shadow_pane_g9

0x5810,	// (0x00023a65) bg_popup_fep_shadow_pane_cp3

0x4fa2,	// (0x000231f7) list_accented_list_pane

0x889a,	// (0x00026aef) list_single_accented_list_pane_ParamLimits

0x889a,	// (0x00026aef) list_single_accented_list_pane

0x5810,	// (0x00023a65) list_highlight_pane_cp10

0x88ab,	// (0x00026b00) list_single_accented_list_pane_t1

0xa8db,	// (0x00028b30) popup_slider_window_ParamLimits

0xa8db,	// (0x00028b30) popup_slider_window

0x86d8,	// (0x0002692d) aid_indentation_list_msg

0xc0af,	// (0x0002a304) bg_popup_window_pane_cp19

0x8911,	// (0x00026b66) popup_slider_window_g1

0x892d,	// (0x00026b82) popup_slider_window_g2

0x8949,	// (0x00026b9e) popup_slider_window_g3

0x0005,

0xfccc,	// (0x0002df21) popup_slider_window_g

0x8965,	// (0x00026bba) popup_slider_window_t1

0x89a9,	// (0x00026bfe) small_volume_slider_vertical_pane

0x7966,	// (0x00025bbb) small_volume_slider_vertical_pane_g1

0x7966,	// (0x00025bbb) small_volume_slider_vertical_pane_g2

0x89c5,	// (0x00026c1a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcde,	// (0x0002df33) small_volume_slider_vertical_pane_g

0x96c4,	// (0x00027919) area_side_right_pane_ParamLimits

0x96c4,	// (0x00027919) area_side_right_pane

0xc129,	// (0x0002a37e) aid_size_side_button_ParamLimits

0xc129,	// (0x0002a37e) aid_size_side_button

0xc13d,	// (0x0002a392) grid_sctrl_middle_pane_ParamLimits

0xc13d,	// (0x0002a392) grid_sctrl_middle_pane

0xc159,	// (0x0002a3ae) sctrl_sk_bottom_pane

0xc16a,	// (0x0002a3bf) sctrl_sk_top_pane

0xc17c,	// (0x0002a3d1) aid_touch_sctrl_top

0xc189,	// (0x0002a3de) bg_sctrl_sk_pane_ParamLimits

0xc189,	// (0x0002a3de) bg_sctrl_sk_pane

0xc197,	// (0x0002a3ec) sctrl_sk_top_pane_g1

0xc1a4,	// (0x0002a3f9) sctrl_sk_top_pane_t1

0xc17c,	// (0x0002a3d1) aid_touch_sctrl_bottom

0xc189,	// (0x0002a3de) bg_sctrl_sk_pane_cp_ParamLimits

0xc189,	// (0x0002a3de) bg_sctrl_sk_pane_cp

0xc1bf,	// (0x0002a414) sctrl_sk_bottom_pane_g1

0xc1a4,	// (0x0002a3f9) sctrl_sk_bottom_pane_t1

0xc1c8,	// (0x0002a41d) cell_sctrl_middle_pane_ParamLimits

0xc1c8,	// (0x0002a41d) cell_sctrl_middle_pane

0xc1e3,	// (0x0002a438) aid_touch_sctrl_middle_ParamLimits

0xc1e3,	// (0x0002a438) aid_touch_sctrl_middle

0xc1f4,	// (0x0002a449) bg_sctrl_middle_pane_ParamLimits

0xc1f4,	// (0x0002a449) bg_sctrl_middle_pane

0xbacd,	// (0x00029d22) cell_sctrl_middle_pane_g1_ParamLimits

0xbacd,	// (0x00029d22) cell_sctrl_middle_pane_g1

0xc202,	// (0x0002a457) cell_sctrl_middle_pane_g2_ParamLimits

0xc202,	// (0x0002a457) cell_sctrl_middle_pane_g2

0x0001,

0xfcea,	// (0x0002df3f) cell_sctrl_middle_pane_g_ParamLimits

0xfcea,	// (0x0002df3f) cell_sctrl_middle_pane_g

0x5b9c,	// (0x00023df1) bg_sctrl_middle_pane_g1

0x5bac,	// (0x00023e01) bg_sctrl_middle_pane_g2

0x5ba4,	// (0x00023df9) bg_sctrl_middle_pane_g3

0x5bbc,	// (0x00023e11) bg_sctrl_middle_pane_g4

0x5bb4,	// (0x00023e09) bg_sctrl_middle_pane_g5

0x5bc4,	// (0x00023e19) bg_sctrl_middle_pane_g6

0x5bcc,	// (0x00023e21) bg_sctrl_middle_pane_g7

0x5bdc,	// (0x00023e31) bg_sctrl_middle_pane_g8

0x0007,

0xfcef,	// (0x0002df44) bg_sctrl_middle_pane_g

0x5bd4,	// (0x00023e29) bg_sctrl_middle_pane_g8_copy1

0x5b9c,	// (0x00023df1) bg_sctrl_sk_pane_g1

0x5ba4,	// (0x00023df9) bg_sctrl_sk_pane_g2

0x5bac,	// (0x00023e01) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0002da91) bg_sctrl_sk_pane_g

0x4da1,	// (0x00022ff6) aid_size_touch_scroll_bar

0x5bb4,	// (0x00023e09) bg_sctrl_sk_pane_g4

0x5bbc,	// (0x00023e11) bg_sctrl_sk_pane_g5

0x5bc4,	// (0x00023e19) bg_sctrl_sk_pane_g6

0x5bcc,	// (0x00023e21) bg_sctrl_sk_pane_g7

0x5bd4,	// (0x00023e29) bg_sctrl_sk_pane_g8

0x5bdc,	// (0x00023e31) bg_sctrl_sk_pane_g9

0xa611,	// (0x00028866) popup_fep_china_hwr2_fs_candidate_window

0xa619,	// (0x0002886e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa619,	// (0x0002886e) popup_fep_china_hwr2_fs_control_window

0xbacd,	// (0x00029d22) sctrl_sk_top_pane_g2

0x0001,

0xfce5,	// (0x0002df3a) sctrl_sk_top_pane_g

0xc218,	// (0x0002a46d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc218,	// (0x0002a46d) aid_fep_china_hwr2_fs_cell

0xc229,	// (0x0002a47e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc229,	// (0x0002a47e) bg_popup_fep_shadow_pane_cp4

0xc240,	// (0x0002a495) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc240,	// (0x0002a495) bg_popup_fep_shadow_pane_cp5

0xc252,	// (0x0002a4a7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc252,	// (0x0002a4a7) popup_fep_china_hwr2_fs_control_bar_grid

0xc262,	// (0x0002a4b7) popup_fep_china_hwr2_fs_control_funtion_grid

0x89dc,	// (0x00026c31) aid_fep_china_hwr2_fs_candi_cell

0x47c9,	// (0x00022a1e) bg_popup_fep_shadow_pane_cp6

0x89e6,	// (0x00026c3b) popup_fep_china_hwr2_fs_candidate_grid

0xc26a,	// (0x0002a4bf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc26a,	// (0x0002a4bf) cell_fep_china_hwr2_fs_funtion_grid

0x7966,	// (0x00025bbb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x89ce,	// (0x00026c23) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x89ce,	// (0x00026c23) cell_fep_china_hwr2_fs_funtion_grid_g1

0x89ee,	// (0x00026c43) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x89ee,	// (0x00026c43) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd00,	// (0x0002df55) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd00,	// (0x0002df55) cell_fep_china_hwr2_fs_funtion_grid_g

0xc282,	// (0x0002a4d7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc282,	// (0x0002a4d7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc297,	// (0x0002a4ec) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc297,	// (0x0002a4ec) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd05,	// (0x0002df5a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd05,	// (0x0002df5a) cell_fep_china_hwr2_fs_funtion_grid_t

0x8a04,	// (0x00026c59) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8a0c,	// (0x00026c61) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8a14,	// (0x00026c69) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0a,	// (0x0002df5f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8a1c,	// (0x00026c71) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8a1c,	// (0x00026c71) cell_fep_china_hwr2_fs_candidate_grid

0x8a35,	// (0x00026c8a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8a3d,	// (0x00026c92) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7966,	// (0x00025bbb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7966,	// (0x00025bbb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002dd7a) cell_fep_china_hwr2_fs_candidate_grid_g

0x8a45,	// (0x00026c9a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5a01,	// (0x00023c56) clock_nsta_pane_cp_24_ParamLimits

0x5a01,	// (0x00023c56) clock_nsta_pane_cp_24

0x5a5e,	// (0x00023cb3) indicator_nsta_pane_cp_24_ParamLimits

0x5a5e,	// (0x00023cb3) indicator_nsta_pane_cp_24

0x6780,	// (0x000249d5) heading_pane_g1

0x0001,

0xf8a1,	// (0x0002daf6) heading_pane_g

0xb41e,	// (0x00029673) grid_sct_catagory_button_pane

0x6d4b,	// (0x00024fa0) scroll_pane_cp5_ParamLimits

0x7630,	// (0x00025885) button_value_adjust_pane_cp5_ParamLimits

0x7630,	// (0x00025885) button_value_adjust_pane_cp5

0x76ee,	// (0x00025943) form2_midp_time_pane_ParamLimits

0x8a53,	// (0x00026ca8) cell_sct_catagory_button_pane_ParamLimits

0x8a53,	// (0x00026ca8) cell_sct_catagory_button_pane

0x792b,	// (0x00025b80) bg_button_pane_cp01_ParamLimits

0x792b,	// (0x00025b80) bg_button_pane_cp01

0x7966,	// (0x00025bbb) cell_sct_catagory_button_pane_g1

0xa912,	// (0x00028b67) popup_tb_extension_window

0xc2b3,	// (0x0002a508) aid_size_cell_ext_ParamLimits

0xc2b3,	// (0x0002a508) aid_size_cell_ext

0x49ec,	// (0x00022c41) bg_tb_trans_pane_cp1_ParamLimits

0x49ec,	// (0x00022c41) bg_tb_trans_pane_cp1

0xc2d3,	// (0x0002a528) grid_tb_ext_pane_ParamLimits

0xc2d3,	// (0x0002a528) grid_tb_ext_pane

0xc2f9,	// (0x0002a54e) cell_tb_ext_pane_ParamLimits

0xc2f9,	// (0x0002a54e) cell_tb_ext_pane

0xc30e,	// (0x0002a563) cell_tb_ext_pane_g1_ParamLimits

0xc30e,	// (0x0002a563) cell_tb_ext_pane_g1

0x8a65,	// (0x00026cba) cell_tb_ext_pane_t1

0x49ec,	// (0x00022c41) list_highlight_pane_cp11_ParamLimits

0x49ec,	// (0x00022c41) list_highlight_pane_cp11

0x986f,	// (0x00027ac4) popup_uni_indicator_window_ParamLimits

0x986f,	// (0x00027ac4) popup_uni_indicator_window

0x4e59,	// (0x000230ae) bg_popup_sub_pane_cp14

0x8a80,	// (0x00026cd5) list_uniindi_pane

0x8a8c,	// (0x00026ce1) uniindi_top_pane

0x49ec,	// (0x00022c41) bg_uniindi_top_pane

0x8aab,	// (0x00026d00) uniindi_top_pane_g1

0x8ac1,	// (0x00026d16) uniindi_top_pane_g2

0x0003,

0xfd11,	// (0x0002df66) uniindi_top_pane_g

0x8aeb,	// (0x00026d40) uniindi_top_pane_t1

0x8b15,	// (0x00026d6a) list_single_uniindi_pane_ParamLimits

0x8b15,	// (0x00026d6a) list_single_uniindi_pane

0x7966,	// (0x00025bbb) bg_uniindi_top_pane_g1

0x8b27,	// (0x00026d7c) list_single_uniindi_pane_g1

0x8b3a,	// (0x00026d8f) list_single_uniindi_pane_t1

0x970d,	// (0x00027962) control_bg_pane

0x8b5f,	// (0x00026db4) bg_sctrl_sk_pane_cp1

0x8b68,	// (0x00026dbd) bg_sctrl_sk_pane_cp2

0x8b71,	// (0x00026dc6) control_bg_pane_g1

0x8b7a,	// (0x00026dcf) control_bg_pane_g2

0x0001,

0xfd1a,	// (0x0002df6f) control_bg_pane_g

0x74f1,	// (0x00025746) cell_indicator_nsta_pane_g1_ParamLimits

0xb638,	// (0x0002988d) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002dcde) cell_indicator_nsta_pane_g_ParamLimits

0xde99,	// (0x0002c0ee) form2_midp_time_pane_t1_ParamLimits

0xa587,	// (0x000287dc) main_idle_act4_pane_ParamLimits

0xa587,	// (0x000287dc) main_idle_act4_pane

0xa912,	// (0x00028b67) popup_tb_extension_window_ParamLimits

0xc2ed,	// (0x0002a542) tb_ext_find_pane_ParamLimits

0xc2ed,	// (0x0002a542) tb_ext_find_pane

0x8b83,	// (0x00026dd8) ai_gene_pane_1_cp1

0x58a4,	// (0x00023af9) ai_gene_pane_2_cp1

0x8b8b,	// (0x00026de0) list_single_idle_plugin_calendar_pane

0x8b94,	// (0x00026de9) list_single_idle_plugin_notification_pane

0x8b9d,	// (0x00026df2) list_single_idle_plugin_player_pane

0xc32b,	// (0x0002a580) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc32b,	// (0x0002a580) list_single_idle_plugin_shortcut_pane

0xc34d,	// (0x0002a5a2) main_idle_act4_pane_t1

0xc35f,	// (0x0002a5b4) main_idle_act4_pane_t2

0x0001,

0xfd1f,	// (0x0002df74) main_idle_act4_pane_t

0xc371,	// (0x0002a5c6) middle_sk_idle_act4_pane_ParamLimits

0xc371,	// (0x0002a5c6) middle_sk_idle_act4_pane

0xc387,	// (0x0002a5dc) popup_clock_digital_analogue_window_cp2

0xc3a1,	// (0x0002a5f6) shortcut_wheel_idle_act4_pane_ParamLimits

0xc3a1,	// (0x0002a5f6) shortcut_wheel_idle_act4_pane

0x7966,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g1

0x7966,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g2

0x7966,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g3

0x7966,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g4

0x7966,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g5

0x8ba6,	// (0x00026dfb) shortcut_wheel_idle_act4_pane_g6

0x8bae,	// (0x00026e03) shortcut_wheel_idle_act4_pane_g7

0x8bb6,	// (0x00026e0b) shortcut_wheel_idle_act4_pane_g8

0x8bbe,	// (0x00026e13) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd24,	// (0x0002df79) shortcut_wheel_idle_act4_pane_g

0x7b92,	// (0x00025de7) middle_sk_idle_act4_pane_g1_ParamLimits

0x7b92,	// (0x00025de7) middle_sk_idle_act4_pane_g1

0xc411,	// (0x0002a666) middle_sk_idle_act4_pane_g2_ParamLimits

0xc411,	// (0x0002a666) middle_sk_idle_act4_pane_g2

0x0001,

0xfd47,	// (0x0002df9c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd47,	// (0x0002df9c) middle_sk_idle_act4_pane_g

0xc41d,	// (0x0002a672) middle_sk_idle_act4_pane_t1_ParamLimits

0xc41d,	// (0x0002a672) middle_sk_idle_act4_pane_t1

0xc43a,	// (0x0002a68f) grid_ai_shortcut_pane_ParamLimits

0xc43a,	// (0x0002a68f) grid_ai_shortcut_pane

0xc453,	// (0x0002a6a8) list_highlight_pane_cp16_ParamLimits

0xc453,	// (0x0002a6a8) list_highlight_pane_cp16

0xc460,	// (0x0002a6b5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc460,	// (0x0002a6b5) list_single_idle_plugin_shortcut_pane_g1

0xc46c,	// (0x0002a6c1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc46c,	// (0x0002a6c1) list_single_idle_plugin_shortcut_pane_g2

0xc484,	// (0x0002a6d9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc484,	// (0x0002a6d9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4c,	// (0x0002dfa1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4c,	// (0x0002dfa1) list_single_idle_plugin_shortcut_pane_g

0xc497,	// (0x0002a6ec) cell_ai_shortcut_pane_ParamLimits

0xc497,	// (0x0002a6ec) cell_ai_shortcut_pane

0xc4b8,	// (0x0002a70d) cell_ai_shortcut_pane_g1_ParamLimits

0xc4b8,	// (0x0002a70d) cell_ai_shortcut_pane_g1

0x8b83,	// (0x00026dd8) ai_gene_pane_1_cp2

0xc4da,	// (0x0002a72f) ai_gene_pane_2_cp2

0xc4e2,	// (0x0002a737) list_highlight_pane_cp15

0xc4eb,	// (0x0002a740) list_single_idle_plugin_calendar_pane_g1

0xc4e2,	// (0x0002a737) list_highlight_pane_cp17

0xc4f3,	// (0x0002a748) list_single_idle_plugin_calendar_pane_g1_copy1

0xc4fb,	// (0x0002a750) list_single_idle_plugin_player_pane_g1

0x6fbd,	// (0x00025212) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd53,	// (0x0002dfa8) list_single_idle_plugin_player_pane_g

0xc503,	// (0x0002a758) list_single_idle_plugin_player_pane_t1

0xc511,	// (0x0002a766) list_single_idle_plugin_player_pane_t2

0xc51f,	// (0x0002a774) list_single_idle_plugin_player_pane_t3

0xc52d,	// (0x0002a782) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd58,	// (0x0002dfad) list_single_idle_plugin_player_pane_t

0xc53b,	// (0x0002a790) wait_bar_pane_cp15

0xc543,	// (0x0002a798) grid_ai_notification_pane

0x6fbd,	// (0x00025212) list_single_idle_plugin_notification_pane_g1

0xc54c,	// (0x0002a7a1) cell_ai_notification_pane_ParamLimits

0xc54c,	// (0x0002a7a1) cell_ai_notification_pane

0xc559,	// (0x0002a7ae) cell_ai_notification_pane_g1

0xc561,	// (0x0002a7b6) cell_ai_notification_pane_t1

0xc56f,	// (0x0002a7c4) tb_ext_find_button_pane

0xc577,	// (0x0002a7cc) tb_ext_find_pane_g1

0xc57f,	// (0x0002a7d4) tb_ext_find_pane_t1

0x537e,	// (0x000235d3) tb_ext_find_button_pane_g1

0xc58d,	// (0x0002a7e2) tb_ext_find_button_pane_g2

0x0001,

0xfd61,	// (0x0002dfb6) tb_ext_find_button_pane_g

0xc34d,	// (0x0002a5a2) main_idle_act4_pane_t1_ParamLimits

0xc35f,	// (0x0002a5b4) main_idle_act4_pane_t2_ParamLimits

0xfd1f,	// (0x0002df74) main_idle_act4_pane_t_ParamLimits

0xc387,	// (0x0002a5dc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc395,	// (0x0002a5ea) sat_plugin_idle_act4_pane_ParamLimits

0xc395,	// (0x0002a5ea) sat_plugin_idle_act4_pane

0xc596,	// (0x0002a7eb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc596,	// (0x0002a7eb) sat_plugin_idle_act4_pane_t1

0xc5a9,	// (0x0002a7fe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc5a9,	// (0x0002a7fe) sat_plugin_idle_act4_pane_t2

0xc5bc,	// (0x0002a811) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc5bc,	// (0x0002a811) sat_plugin_idle_act4_pane_t3

0xc5cf,	// (0x0002a824) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc5cf,	// (0x0002a824) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd66,	// (0x0002dfbb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd66,	// (0x0002dfbb) sat_plugin_idle_act4_pane_t

0x97d0,	// (0x00027a25) popup_battery_window_ParamLimits

0x97d0,	// (0x00027a25) popup_battery_window

0x49ec,	// (0x00022c41) bg_popup_sub_pane_cp25_ParamLimits

0x49ec,	// (0x00022c41) bg_popup_sub_pane_cp25

0xc5e2,	// (0x0002a837) popup_battery_window_g1_ParamLimits

0xc5e2,	// (0x0002a837) popup_battery_window_g1

0xc5ee,	// (0x0002a843) popup_battery_window_t1_ParamLimits

0xc5ee,	// (0x0002a843) popup_battery_window_t1

0xc600,	// (0x0002a855) popup_battery_window_t2_ParamLimits

0xc600,	// (0x0002a855) popup_battery_window_t2

0x0001,

0xfd6f,	// (0x0002dfc4) popup_battery_window_t_ParamLimits

0xfd6f,	// (0x0002dfc4) popup_battery_window_t

0xa21b,	// (0x00028470) midp_canvas_pane_ParamLimits

0xa277,	// (0x000284cc) midp_keypad_pane_ParamLimits

0xa277,	// (0x000284cc) midp_keypad_pane

0x4ff2,	// (0x00023247) main_midp_pane_ParamLimits

0x75cc,	// (0x00025821) signal_pane_g2_cp_ParamLimits

0xc61d,	// (0x0002a872) aid_size_cell_midp_keypad_ParamLimits

0xc61d,	// (0x0002a872) aid_size_cell_midp_keypad

0xc637,	// (0x0002a88c) midp_keyp_game_grid_pane_ParamLimits

0xc637,	// (0x0002a88c) midp_keyp_game_grid_pane

0xc651,	// (0x0002a8a6) midp_keyp_rocker_pane_ParamLimits

0xc651,	// (0x0002a8a6) midp_keyp_rocker_pane

0xc67e,	// (0x0002a8d3) midp_keyp_sk_left_pane_ParamLimits

0xc67e,	// (0x0002a8d3) midp_keyp_sk_left_pane

0xc6d6,	// (0x0002a92b) midp_keyp_sk_right_pane_ParamLimits

0xc6d6,	// (0x0002a92b) midp_keyp_sk_right_pane

0x47c9,	// (0x00022a1e) bg_button_pane_cp03

0xc728,	// (0x0002a97d) midp_keyp_sk_left_pane_g1

0x47c9,	// (0x00022a1e) bg_button_pane_cp04

0xc728,	// (0x0002a97d) midp_keyp_sk_right_pane_g1

0x7966,	// (0x00025bbb) midp_keyp_rocker_pane_g1

0xc731,	// (0x0002a986) keyp_game_cell_pane_ParamLimits

0xc731,	// (0x0002a986) keyp_game_cell_pane

0x47c9,	// (0x00022a1e) bg_button_pane_cp02

0xc742,	// (0x0002a997) keyp_game_cell_pane_g1

0x9806,	// (0x00027a5b) popup_fep_vkb2_window_ParamLimits

0x9806,	// (0x00027a5b) popup_fep_vkb2_window

0xc759,	// (0x0002a9ae) aid_size_cell_vkb2_ParamLimits

0xc759,	// (0x0002a9ae) aid_size_cell_vkb2

0xc7ad,	// (0x0002aa02) popup_fep_vkb2_window_g1_ParamLimits

0xc7ad,	// (0x0002aa02) popup_fep_vkb2_window_g1

0xc7f5,	// (0x0002aa4a) vkb2_area_bottom_pane_ParamLimits

0xc7f5,	// (0x0002aa4a) vkb2_area_bottom_pane

0xc82d,	// (0x0002aa82) vkb2_area_keypad_pane_ParamLimits

0xc82d,	// (0x0002aa82) vkb2_area_keypad_pane

0xc865,	// (0x0002aaba) vkb2_area_top_pane_ParamLimits

0xc865,	// (0x0002aaba) vkb2_area_top_pane

0xc8d5,	// (0x0002ab2a) vkb2_top_entry_pane_ParamLimits

0xc8d5,	// (0x0002ab2a) vkb2_top_entry_pane

0xc8ff,	// (0x0002ab54) vkb2_top_grid_left_pane_ParamLimits

0xc8ff,	// (0x0002ab54) vkb2_top_grid_left_pane

0xc91d,	// (0x0002ab72) vkb2_top_grid_right_pane_ParamLimits

0xc91d,	// (0x0002ab72) vkb2_top_grid_right_pane

0xc93b,	// (0x0002ab90) vkb2_cell_keypad_pane_ParamLimits

0xc93b,	// (0x0002ab90) vkb2_cell_keypad_pane

0xc9ec,	// (0x0002ac41) vkb2_area_bottom_grid_pane_ParamLimits

0xc9ec,	// (0x0002ac41) vkb2_area_bottom_grid_pane

0xca10,	// (0x0002ac65) vkb2_area_bottom_pane_g1_ParamLimits

0xca10,	// (0x0002ac65) vkb2_area_bottom_pane_g1

0xca34,	// (0x0002ac89) vkb2_area_bottom_pane_g2_ParamLimits

0xca34,	// (0x0002ac89) vkb2_area_bottom_pane_g2

0xca62,	// (0x0002acb7) vkb2_area_bottom_pane_g3_ParamLimits

0xca62,	// (0x0002acb7) vkb2_area_bottom_pane_g3

0x0002,

0xfd74,	// (0x0002dfc9) vkb2_area_bottom_pane_g_ParamLimits

0xfd74,	// (0x0002dfc9) vkb2_area_bottom_pane_g

0xcab3,	// (0x0002ad08) vkb2_top_cell_left_pane_ParamLimits

0xcab3,	// (0x0002ad08) vkb2_top_cell_left_pane

0xcadb,	// (0x0002ad30) vkb2_top_entry_pane_g1_ParamLimits

0xcadb,	// (0x0002ad30) vkb2_top_entry_pane_g1

0xcae9,	// (0x0002ad3e) vkb2_top_entry_pane_t1_ParamLimits

0xcae9,	// (0x0002ad3e) vkb2_top_entry_pane_t1

0xcb1b,	// (0x0002ad70) vkb2_top_entry_pane_t2_ParamLimits

0xcb1b,	// (0x0002ad70) vkb2_top_entry_pane_t2

0xcb4d,	// (0x0002ada2) vkb2_top_entry_pane_t3_ParamLimits

0xcb4d,	// (0x0002ada2) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x0002dfd0) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x0002dfd0) vkb2_top_entry_pane_t

0xcb90,	// (0x0002ade5) vkb2_top_grid_right_pane_g1_ParamLimits

0xcb90,	// (0x0002ade5) vkb2_top_grid_right_pane_g1

0xcba6,	// (0x0002adfb) vkb2_top_grid_right_pane_g2_ParamLimits

0xcba6,	// (0x0002adfb) vkb2_top_grid_right_pane_g2

0xcbbe,	// (0x0002ae13) vkb2_top_grid_right_pane_g3_ParamLimits

0xcbbe,	// (0x0002ae13) vkb2_top_grid_right_pane_g3

0xcbd6,	// (0x0002ae2b) vkb2_top_grid_right_pane_g4_ParamLimits

0xcbd6,	// (0x0002ae2b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x0002dfd7) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x0002dfd7) vkb2_top_grid_right_pane_g

0xcbec,	// (0x0002ae41) vkb2_top_cell_left_pane_g1

0xcc03,	// (0x0002ae58) vkb2_cell_keypad_pane_g1_ParamLimits

0xcc03,	// (0x0002ae58) vkb2_cell_keypad_pane_g1

0xe246,	// (0x0002c49b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe246,	// (0x0002c49b) vkb2_cell_keypad_pane_t1

0xcc11,	// (0x0002ae66) vkb2_cell_bottom_grid_pane_ParamLimits

0xcc11,	// (0x0002ae66) vkb2_cell_bottom_grid_pane

0xcc4a,	// (0x0002ae9f) vkb2_cell_bottom_grid_pane_g1

0xc3b5,	// (0x0002a60a) aid_call2_pane_cp02

0xc3bd,	// (0x0002a612) aid_call_pane_cp02

0xc3c5,	// (0x0002a61a) clock_digital_number_pane_cp10

0xc3cd,	// (0x0002a622) clock_digital_number_pane_cp11

0xc3d5,	// (0x0002a62a) clock_digital_number_pane_cp12

0xc3dd,	// (0x0002a632) clock_digital_number_pane_cp13

0xc3e5,	// (0x0002a63a) clock_digital_separator_pane_cp10

0x537e,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g1

0x537e,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g2

0xc3ed,	// (0x0002a642) popup_clock_digital_analogue_window_cp2_g3

0x537e,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g4

0xc3ed,	// (0x0002a642) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd37,	// (0x0002df8c) popup_clock_digital_analogue_window_cp2_g

0xc3f5,	// (0x0002a64a) popup_clock_digital_analogue_window_cp2_t1

0xc403,	// (0x0002a658) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd42,	// (0x0002df97) popup_clock_digital_analogue_window_cp2_t

0x7966,	// (0x00025bbb) clock_digital_number_pane_cp10_g1

0x7966,	// (0x00025bbb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002dd7a) clock_digital_number_pane_cp10_g

0x7966,	// (0x00025bbb) clock_digital_separator_pane_cp10_g1

0x7966,	// (0x00025bbb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002dd7a) clock_digital_separator_pane_cp10_g

0x8acd,	// (0x00026d22) uniindi_top_pane_g3

0x8ade,	// (0x00026d33) uniindi_top_pane_g4

0xc9a6,	// (0x0002abfb) vkb2_row_keypad_pane_ParamLimits

0xc9a6,	// (0x0002abfb) vkb2_row_keypad_pane

0xcc66,	// (0x0002aebb) vkb2_cell_t_keypad_pane_ParamLimits

0xcc66,	// (0x0002aebb) vkb2_cell_t_keypad_pane

0xcc73,	// (0x0002aec8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xcc73,	// (0x0002aec8) vkb2_cell_t_keypad_pane_cp08

0xcc83,	// (0x0002aed8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xcc83,	// (0x0002aed8) vkb2_cell_t_keypad_pane_cp09

0xcc94,	// (0x0002aee9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xcc94,	// (0x0002aee9) vkb2_cell_t_keypad_pane_cp01

0xcca4,	// (0x0002aef9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xcca4,	// (0x0002aef9) vkb2_cell_t_keypad_pane_cp02

0xccb4,	// (0x0002af09) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xccb4,	// (0x0002af09) vkb2_cell_t_keypad_pane_cp03

0xccc4,	// (0x0002af19) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xccc4,	// (0x0002af19) vkb2_cell_t_keypad_pane_cp04

0xccd4,	// (0x0002af29) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xccd4,	// (0x0002af29) vkb2_cell_t_keypad_pane_cp05

0xcce4,	// (0x0002af39) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xcce4,	// (0x0002af39) vkb2_cell_t_keypad_pane_cp06

0xccf4,	// (0x0002af49) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xccf4,	// (0x0002af49) vkb2_cell_t_keypad_pane_cp07

0xcd04,	// (0x0002af59) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xcd04,	// (0x0002af59) vkb2_cell_t_keypad_pane_cp10

0xbacd,	// (0x00029d22) vkb2_cell_t_keypad_pane_g1

0xe25d,	// (0x0002c4b2) vkb2_cell_t_keypad_pane_t1

0x970d,	// (0x00027962) popup_grid_graphic2_window

0xee2c,	// (0x0002d081) aid_size_cell_graphic2_ParamLimits

0xee2c,	// (0x0002d081) aid_size_cell_graphic2

0xee64,	// (0x0002d0b9) bg_popup_window_pane_cp21_ParamLimits

0xee64,	// (0x0002d0b9) bg_popup_window_pane_cp21

0xee72,	// (0x0002d0c7) graphic2_pages_pane_ParamLimits

0xee72,	// (0x0002d0c7) graphic2_pages_pane

0xeeac,	// (0x0002d101) grid_graphic2_control_pane_ParamLimits

0xeeac,	// (0x0002d101) grid_graphic2_control_pane

0xeee2,	// (0x0002d137) grid_graphic2_pane_ParamLimits

0xeee2,	// (0x0002d137) grid_graphic2_pane

0xef42,	// (0x0002d197) cell_graphic2_pane

0x970d,	// (0x00027962) main_comp_mode_pane

0x8746,	// (0x0002699b) list_ai3_gene_pane_ParamLimits

0xc0af,	// (0x0002a304) bg_popup_window_pane_cp19_ParamLimits

0x88b9,	// (0x00026b0e) bg_touch_area_indi_pane_ParamLimits

0x88b9,	// (0x00026b0e) bg_touch_area_indi_pane

0x88cf,	// (0x00026b24) bg_touch_area_indi_pane_cp01_ParamLimits

0x88cf,	// (0x00026b24) bg_touch_area_indi_pane_cp01

0x88e5,	// (0x00026b3a) bg_touch_area_indi_pane_cp02_ParamLimits

0x88e5,	// (0x00026b3a) bg_touch_area_indi_pane_cp02

0x88fb,	// (0x00026b50) bg_touch_area_indi_pane_cp03_ParamLimits

0x88fb,	// (0x00026b50) bg_touch_area_indi_pane_cp03

0x8911,	// (0x00026b66) popup_slider_window_g1_ParamLimits

0x892d,	// (0x00026b82) popup_slider_window_g2_ParamLimits

0x8949,	// (0x00026b9e) popup_slider_window_g3_ParamLimits

0xfccc,	// (0x0002df21) popup_slider_window_g_ParamLimits

0x8965,	// (0x00026bba) popup_slider_window_t1_ParamLimits

0x89a9,	// (0x00026bfe) small_volume_slider_vertical_pane_ParamLimits

0xef42,	// (0x0002d197) cell_graphic2_pane_ParamLimits

0xef7e,	// (0x0002d1d3) bg_button_pane_cp10_ParamLimits

0xef7e,	// (0x0002d1d3) bg_button_pane_cp10

0xef8f,	// (0x0002d1e4) bg_button_pane_cp11_ParamLimits

0xef8f,	// (0x0002d1e4) bg_button_pane_cp11

0xefa0,	// (0x0002d1f5) graphic2_pages_pane_g1_ParamLimits

0xefa0,	// (0x0002d1f5) graphic2_pages_pane_g1

0xefb3,	// (0x0002d208) graphic2_pages_pane_g2_ParamLimits

0xefb3,	// (0x0002d208) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x0002dfe5) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x0002dfe5) graphic2_pages_pane_g

0xefc9,	// (0x0002d21e) graphic2_pages_pane_t1_ParamLimits

0xefc9,	// (0x0002d21e) graphic2_pages_pane_t1

0xefdf,	// (0x0002d234) cell_graphic2_control_pane_ParamLimits

0xefdf,	// (0x0002d234) cell_graphic2_control_pane

0xeffe,	// (0x0002d253) cell_graphic2_pane_g1_ParamLimits

0xeffe,	// (0x0002d253) cell_graphic2_pane_g1

0xf00b,	// (0x0002d260) cell_graphic2_pane_g2_ParamLimits

0xf00b,	// (0x0002d260) cell_graphic2_pane_g2

0xf018,	// (0x0002d26d) cell_graphic2_pane_g3_ParamLimits

0xf018,	// (0x0002d26d) cell_graphic2_pane_g3

0xf025,	// (0x0002d27a) cell_graphic2_pane_g4_ParamLimits

0xf025,	// (0x0002d27a) cell_graphic2_pane_g4

0xf032,	// (0x0002d287) cell_graphic2_pane_g5_ParamLimits

0xf032,	// (0x0002d287) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x0002dfea) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x0002dfea) cell_graphic2_pane_g

0xf04b,	// (0x0002d2a0) cell_graphic2_pane_t1_ParamLimits

0xf04b,	// (0x0002d2a0) cell_graphic2_pane_t1

0x5c44,	// (0x00023e99) grid_highlight_pane_cp11_ParamLimits

0x5c44,	// (0x00023e99) grid_highlight_pane_cp11

0x49ec,	// (0x00022c41) bg_button_pane_cp05

0xf073,	// (0x0002d2c8) cell_graphic2_control_pane_g1

0x7966,	// (0x00025bbb) bg_touch_area_indi_pane_g1

0xe26f,	// (0x0002c4c4) aid_cmod_rocker_key_size

0xe279,	// (0x0002c4ce) aid_cmode_itu_key_size

0xe283,	// (0x0002c4d8) main_cmode_video_pane

0xe28b,	// (0x0002c4e0) main_comp_mode_itu_pane

0xe295,	// (0x0002c4ea) main_comp_mode_rocker_pane

0xe29d,	// (0x0002c4f2) cell_cmode_rocker_pane_ParamLimits

0xe29d,	// (0x0002c4f2) cell_cmode_rocker_pane

0xe2af,	// (0x0002c504) cell_cmode_itu_pane_ParamLimits

0xe2af,	// (0x0002c504) cell_cmode_itu_pane

0x4e59,	// (0x000230ae) bg_button_pane_cp06_ParamLimits

0x4e59,	// (0x000230ae) bg_button_pane_cp06

0x7b92,	// (0x00025de7) cell_cmode_rocker_pane_g1_ParamLimits

0x7b92,	// (0x00025de7) cell_cmode_rocker_pane_g1

0x89ce,	// (0x00026c23) cell_cmode_rocker_pane_g2_ParamLimits

0x89ce,	// (0x00026c23) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x0002dffa) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x0002dffa) cell_cmode_rocker_pane_g

0x47c9,	// (0x00022a1e) bg_button_pane_cp07

0xe2c4,	// (0x0002c519) cell_cmode_itu_pane_g1

0xe2cd,	// (0x0002c522) cell_cmode_itu_pane_t1

0xe2db,	// (0x0002c530) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x0002dfff) cell_cmode_itu_pane_t

0x8b4f,	// (0x00026da4) aid_touch_ctrl_left

0x8b57,	// (0x00026dac) aid_touch_ctrl_right

0x47c9,	// (0x00022a1e) compa_mode_pane

0xf09b,	// (0x0002d2f0) aid_cmod_rocker_key_size_cp

0xf0a5,	// (0x0002d2fa) aid_cmode_itu_key_size_cp

0xe2e9,	// (0x0002c53e) compa_mode_pane_g1

0xe2f1,	// (0x0002c546) compa_mode_pane_g2

0xe2f9,	// (0x0002c54e) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x0002e004) compa_mode_pane_g

0xf0af,	// (0x0002d304) main_comp_mode_itu_pane_cp

0xf0b7,	// (0x0002d30c) main_comp_mode_rocker_pane_cp

0xf0bf,	// (0x0002d314) cell_cmode_itu_pane_cp_ParamLimits

0xf0bf,	// (0x0002d314) cell_cmode_itu_pane_cp

0xf0d4,	// (0x0002d329) cell_cmode_rocker_pane_cp_ParamLimits

0xf0d4,	// (0x0002d329) cell_cmode_rocker_pane_cp

0x4e59,	// (0x000230ae) bg_button_pane_cp06_cp_ParamLimits

0x4e59,	// (0x000230ae) bg_button_pane_cp06_cp

0x7b92,	// (0x00025de7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b92,	// (0x00025de7) cell_cmode_rocker_pane_g1_cp

0x7966,	// (0x00025bbb) cell_cmode_rocker_pane_g2_cp

0x47c9,	// (0x00022a1e) bg_button_pane_cp07_cp

0xf0e6,	// (0x0002d33b) cell_cmode_itu_pane_g1_cp

0xf0ef,	// (0x0002d344) cell_cmode_itu_pane_t1_cp

0xf0fd,	// (0x0002d352) cell_cmode_itu_pane_t2_cp

0xb32d,	// (0x00029582) settings_code_pane_cp2

0x48b9,	// (0x00022b0e) bg_popup_window_pane_cp3_ParamLimits

0x4bea,	// (0x00022e3f) heading_pane_cp3_ParamLimits

0x4bf9,	// (0x00022e4e) listscroll_popup_graphic_pane_ParamLimits

0xb7a4,	// (0x000299f9) fep_hwr_aid_pane_ParamLimits

0xc17c,	// (0x0002a3d1) aid_touch_sctrl_top_ParamLimits

0xc197,	// (0x0002a3ec) sctrl_sk_top_pane_g1_ParamLimits

0xbacd,	// (0x00029d22) sctrl_sk_top_pane_g2_ParamLimits

0xfce5,	// (0x0002df3a) sctrl_sk_top_pane_g_ParamLimits

0xc1a4,	// (0x0002a3f9) sctrl_sk_top_pane_t1_ParamLimits

0xc17c,	// (0x0002a3d1) aid_touch_sctrl_bottom_ParamLimits

0xc1a4,	// (0x0002a3f9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8a99,	// (0x00026cee) aid_area_touch_clock

0xc89d,	// (0x0002aaf2) aid_vkb2_area_top_pane_cell_ParamLimits

0xc89d,	// (0x0002aaf2) aid_vkb2_area_top_pane_cell

0xc9c8,	// (0x0002ac1d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc9c8,	// (0x0002ac1d) aid_vkb2_area_bottom_pane_cell

0xcad3,	// (0x0002ad28) popup_char_count_window

0xe301,	// (0x0002c556) popup_char_count_window_g1

0xe30a,	// (0x0002c55f) popup_char_count_window_g2

0xe313,	// (0x0002c568) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x0002e00b) popup_char_count_window_g

0xe31c,	// (0x0002c571) popup_char_count_window_t1

0xc78b,	// (0x0002a9e0) popup_fep_char_preview_window_ParamLimits

0xc78b,	// (0x0002a9e0) popup_fep_char_preview_window

0xc8bb,	// (0x0002ab10) vkb2_top_candi_pane_ParamLimits

0xc8bb,	// (0x0002ab10) vkb2_top_candi_pane

0xf10b,	// (0x0002d360) cell_vkb2_top_candi_pane_ParamLimits

0xf10b,	// (0x0002d360) cell_vkb2_top_candi_pane

0xcd19,	// (0x0002af6e) bg_popup_fep_char_preview_window_ParamLimits

0xcd19,	// (0x0002af6e) bg_popup_fep_char_preview_window

0xcd27,	// (0x0002af7c) popup_fep_char_preview_window_t1_ParamLimits

0xcd27,	// (0x0002af7c) popup_fep_char_preview_window_t1

0xe32a,	// (0x0002c57f) bg_popup_fep_char_preview_window_g1

0xe332,	// (0x0002c587) bg_popup_fep_char_preview_window_g2

0xe33a,	// (0x0002c58f) bg_popup_fep_char_preview_window_g3

0xe342,	// (0x0002c597) bg_popup_fep_char_preview_window_g4

0xe34a,	// (0x0002c59f) bg_popup_fep_char_preview_window_g5

0xe352,	// (0x0002c5a7) bg_popup_fep_char_preview_window_g6

0xe35a,	// (0x0002c5af) bg_popup_fep_char_preview_window_g7

0xe362,	// (0x0002c5b7) bg_popup_fep_char_preview_window_g8

0xe36a,	// (0x0002c5bf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbd,	// (0x0002e012) bg_popup_fep_char_preview_window_g

0xbacd,	// (0x00029d22) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbacd,	// (0x00029d22) cell_vkb2_top_candi_pane_g1

0xbadb,	// (0x00029d30) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbadb,	// (0x00029d30) cell_vkb2_top_candi_pane_g2

0xdeac,	// (0x0002c101) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdeac,	// (0x0002c101) cell_vkb2_top_candi_pane_g3

0xcd69,	// (0x0002afbe) cell_vkb2_top_candi_pane_g4_ParamLimits

0xcd69,	// (0x0002afbe) cell_vkb2_top_candi_pane_g4

0x7de2,	// (0x00026037) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7de2,	// (0x00026037) cell_vkb2_top_candi_pane_g5

0xcd8a,	// (0x0002afdf) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcd8a,	// (0x0002afdf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x0002e027) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x0002e027) cell_vkb2_top_candi_pane_g

0xcd98,	// (0x0002afed) cell_vkb2_top_candi_pane_t1

0xb179,	// (0x000293ce) aid_size_touch_slider_mark_ParamLimits

0xb179,	// (0x000293ce) aid_size_touch_slider_mark

0xeea0,	// (0x0002d0f5) grid_graphic2_catg_pane_ParamLimits

0xeea0,	// (0x0002d0f5) grid_graphic2_catg_pane

0xef1e,	// (0x0002d173) popup_grid_graphic2_window_t1_ParamLimits

0xef1e,	// (0x0002d173) popup_grid_graphic2_window_t1

0xef30,	// (0x0002d185) popup_grid_graphic2_window_t2_ParamLimits

0xef30,	// (0x0002d185) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x0002dfe0) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x0002dfe0) popup_grid_graphic2_window_t

0x49ec,	// (0x00022c41) bg_button_pane_cp05_ParamLimits

0xf073,	// (0x0002d2c8) cell_graphic2_control_pane_g1_ParamLimits

0xf144,	// (0x0002d399) cell_graphic2_catg_pane_ParamLimits

0xf144,	// (0x0002d399) cell_graphic2_catg_pane

0x47c9,	// (0x00022a1e) bg_button_pane_cp12

0xf156,	// (0x0002d3ab) cell_graphic2_catg_pane_g1

0x8a65,	// (0x00026cba) cell_tb_ext_pane_t1_ParamLimits

0xcb63,	// (0x0002adb8) vkb2_top_cell_right_narrow_pane_ParamLimits

0xcb63,	// (0x0002adb8) vkb2_top_cell_right_narrow_pane

0xcb7b,	// (0x0002add0) vkb2_top_cell_right_wide_pane_ParamLimits

0xcb7b,	// (0x0002add0) vkb2_top_cell_right_wide_pane

0xb796,	// (0x000299eb) bg_vkb2_func_pane_ParamLimits

0xb796,	// (0x000299eb) bg_vkb2_func_pane

0xcbec,	// (0x0002ae41) vkb2_top_cell_left_pane_g1_ParamLimits

0xb796,	// (0x000299eb) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb796,	// (0x000299eb) bg_vkb2_fuc_pane_cp03

0xcc4a,	// (0x0002ae9f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5bac,	// (0x00023e01) bg_vkb2_func_pane_g1

0x5ba4,	// (0x00023df9) bg_vkb2_func_pane_g2

0x5bb4,	// (0x00023e09) bg_vkb2_func_pane_g3

0x5bbc,	// (0x00023e11) bg_vkb2_func_pane_g4

0x5bc4,	// (0x00023e19) bg_vkb2_func_pane_g5

0x5bcc,	// (0x00023e21) bg_vkb2_func_pane_g6

0x5bdc,	// (0x00023e31) bg_vkb2_func_pane_g7

0x5bd4,	// (0x00023e29) bg_vkb2_func_pane_g8

0x5b9c,	// (0x00023df1) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x0002e034) bg_vkb2_func_pane_g

0xb796,	// (0x000299eb) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb796,	// (0x000299eb) bg_vkb2_fuc_pane_cp01

0xcbec,	// (0x0002ae41) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xcbec,	// (0x0002ae41) vkb2_top_cell_right_wide_pane_g1

0xb796,	// (0x000299eb) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb796,	// (0x000299eb) bg_vkb2_fuc_pane_cp02

0xcc4a,	// (0x0002ae9f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xcc4a,	// (0x0002ae9f) vkb2_top_cell_right_narrow_pane_g1

0xc041,	// (0x0002a296) aid_touch_area_decrease_ParamLimits

0xc041,	// (0x0002a296) aid_touch_area_decrease

0xc059,	// (0x0002a2ae) aid_touch_area_increase_ParamLimits

0xc059,	// (0x0002a2ae) aid_touch_area_increase

0xc065,	// (0x0002a2ba) aid_touch_area_mute_ParamLimits

0xc065,	// (0x0002a2ba) aid_touch_area_mute

0xc081,	// (0x0002a2d6) aid_touch_area_slider_ParamLimits

0xc081,	// (0x0002a2d6) aid_touch_area_slider

0xc0bb,	// (0x0002a310) popup_slider_window_g4_ParamLimits

0xc0bb,	// (0x0002a310) popup_slider_window_g4

0xc0c7,	// (0x0002a31c) popup_slider_window_g5_ParamLimits

0xc0c7,	// (0x0002a31c) popup_slider_window_g5

0xc0e9,	// (0x0002a33e) popup_slider_window_g6_ParamLimits

0xc0e9,	// (0x0002a33e) popup_slider_window_g6

0x8991,	// (0x00026be6) popup_slider_window_t2_ParamLimits

0x8991,	// (0x00026be6) popup_slider_window_t2

0x0001,

0xfcd9,	// (0x0002df2e) popup_slider_window_t_ParamLimits

0xfcd9,	// (0x0002df2e) popup_slider_window_t

0xc0fb,	// (0x0002a350) slider_pane_ParamLimits

0xc0fb,	// (0x0002a350) slider_pane

0xe372,	// (0x0002c5c7) slider_pane_g1_ParamLimits

0xe372,	// (0x0002c5c7) slider_pane_g1

0xe386,	// (0x0002c5db) slider_pane_g2_ParamLimits

0xe386,	// (0x0002c5db) slider_pane_g2

0xe39c,	// (0x0002c5f1) slider_pane_g3_ParamLimits

0xe39c,	// (0x0002c5f1) slider_pane_g3

0x0003,

0xfdf2,	// (0x0002e047) slider_pane_g_ParamLimits

0xfdf2,	// (0x0002e047) slider_pane_g

0xa962,	// (0x00028bb7) popup_tb_float_extension_window_ParamLimits

0xa962,	// (0x00028bb7) popup_tb_float_extension_window

0xe3c8,	// (0x0002c61d) aid_size_cell_tb_float_ext

0x47c9,	// (0x00022a1e) bg_popup_sub_window_cp28

0xe3d3,	// (0x0002c628) grid_tb_float_ext_pane

0xe3db,	// (0x0002c630) cell_tb_float_ext_pane_ParamLimits

0xe3db,	// (0x0002c630) cell_tb_float_ext_pane

0xe3f3,	// (0x0002c648) cell_tb_float_ext_pane_g1

0xe3fc,	// (0x0002c651) grid_highlight_pane_cp12

0xb8df,	// (0x00029b34) cell_last_hwr_side_pane_ParamLimits

0xb8df,	// (0x00029b34) cell_last_hwr_side_pane

0x7966,	// (0x00025bbb) cell_last_hwr_side_pane_g1

0xe405,	// (0x0002c65a) cell_last_hwr_side_pane_g2

0x0001,

0xfdfb,	// (0x0002e050) cell_last_hwr_side_pane_g

0xca90,	// (0x0002ace5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xca90,	// (0x0002ace5) vkb2_area_bottom_space_btn_pane

0xbacd,	// (0x00029d22) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe25d,	// (0x0002c4b2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xcd98,	// (0x0002afed) cell_vkb2_top_candi_pane_t1_ParamLimits

0xcdae,	// (0x0002b003) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xcdae,	// (0x0002b003) vkb2_area_bottom_space_btn_pane_g1

0xcde4,	// (0x0002b039) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xcde4,	// (0x0002b039) vkb2_area_bottom_space_btn_pane_g2

0xce1a,	// (0x0002b06f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xce1a,	// (0x0002b06f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe00,	// (0x0002e055) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe00,	// (0x0002e055) vkb2_area_bottom_space_btn_pane_g

0xb853,	// (0x00029aa8) cel_fep_hwr_func_pane_ParamLimits

0xb853,	// (0x00029aa8) cel_fep_hwr_func_pane

0xb88f,	// (0x00029ae4) cell_hwr_side_button_pane_ParamLimits

0xb88f,	// (0x00029ae4) cell_hwr_side_button_pane

0x8a99,	// (0x00026cee) aid_area_touch_clock_ParamLimits

0x49ec,	// (0x00022c41) bg_uniindi_top_pane_ParamLimits

0x8aab,	// (0x00026d00) uniindi_top_pane_g1_ParamLimits

0x8ac1,	// (0x00026d16) uniindi_top_pane_g2_ParamLimits

0x8acd,	// (0x00026d22) uniindi_top_pane_g3_ParamLimits

0x8ade,	// (0x00026d33) uniindi_top_pane_g4_ParamLimits

0xfd11,	// (0x0002df66) uniindi_top_pane_g_ParamLimits

0x8aeb,	// (0x00026d40) uniindi_top_pane_t1_ParamLimits

0x49ec,	// (0x00022c41) bg_vkb2_func_pane_cp01_ParamLimits

0x49ec,	// (0x00022c41) bg_vkb2_func_pane_cp01

0xe40e,	// (0x0002c663) cel_fep_hwr_func_pane_g1_ParamLimits

0xe40e,	// (0x0002c663) cel_fep_hwr_func_pane_g1

0x49ec,	// (0x00022c41) bg_vkb2_func_pane_cp02_ParamLimits

0x49ec,	// (0x00022c41) bg_vkb2_func_pane_cp02

0xe40e,	// (0x0002c663) cell_hwr_side_button_pane_g1_ParamLimits

0xe40e,	// (0x0002c663) cell_hwr_side_button_pane_g1

0x5ac0,	// (0x00023d15) status_pane_g4_ParamLimits

0x5ac0,	// (0x00023d15) status_pane_g4

0x5ad8,	// (0x00023d2d) status_pane_t1

0x7756,	// (0x000259ab) form2_midp_gauge_slider_cont_pane

0x775e,	// (0x000259b3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb772,	// (0x000299c7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb784,	// (0x000299d9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002dd2d) form2_midp_gauge_slider_pane_t_ParamLimits

0x7770,	// (0x000259c5) form2_midp_slider_pane_ParamLimits

0xc74b,	// (0x0002a9a0) aid_size_cell_func_vkb2_ParamLimits

0xc74b,	// (0x0002a9a0) aid_size_cell_func_vkb2

0xe3b4,	// (0x0002c609) slider_pane_g4_ParamLimits

0xe3b4,	// (0x0002c609) slider_pane_g4

0xce60,	// (0x0002b0b5) form2_midp_gauge_slider_pane_t2_cp01

0xce6e,	// (0x0002b0c3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce6e,	// (0x0002b0c3) form2_midp_gauge_slider_pane_t3_cp01

0xce8b,	// (0x0002b0e0) form2_midp_slider_pane_cp01

0x47c9,	// (0x00022a1e) navi_smil_pane

0xe43e,	// (0x0002c693) navi_smil_pane_g1

0xe446,	// (0x0002c69b) navi_smil_pane_t1

0xe41c,	// (0x0002c671) form2_midp_slider_pane_g1

0xe425,	// (0x0002c67a) form2_midp_slider_pane_g2

0xe42d,	// (0x0002c682) form2_midp_slider_pane_g3

0xe41c,	// (0x0002c671) form2_midp_slider_pane_g4

0xf15f,	// (0x0002d3b4) form2_midp_slider_pane_g5

0x0004,

0xfe09,	// (0x0002e05e) form2_midp_slider_pane_g

0xce50,	// (0x0002b0a5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xce50,	// (0x0002b0a5) vkb2_area_bottom_space_btn_pane_g4

0xaaf6,	// (0x00028d4b) lc0_navi_pane_ParamLimits

0xaaf6,	// (0x00028d4b) lc0_navi_pane

0xab6c,	// (0x00028dc1) lc0_stat_indi_pane_ParamLimits

0xab6c,	// (0x00028dc1) lc0_stat_indi_pane

0xab83,	// (0x00028dd8) ls0_title_pane_ParamLimits

0xab83,	// (0x00028dd8) ls0_title_pane

0x4e59,	// (0x000230ae) bg_popup_sub_pane_cp14_ParamLimits

0x8a80,	// (0x00026cd5) list_uniindi_pane_ParamLimits

0x8a8c,	// (0x00026ce1) uniindi_top_pane_ParamLimits

0x8b27,	// (0x00026d7c) list_single_uniindi_pane_g1_ParamLimits

0x8b3a,	// (0x00026d8f) list_single_uniindi_pane_t1_ParamLimits

0xce94,	// (0x0002b0e9) lc0_stat_clock_pane_ParamLimits

0xce94,	// (0x0002b0e9) lc0_stat_clock_pane

0xf168,	// (0x0002d3bd) lc0_stat_indi_pane_g1_ParamLimits

0xf168,	// (0x0002d3bd) lc0_stat_indi_pane_g1

0xf175,	// (0x0002d3ca) lc0_stat_indi_pane_g2_ParamLimits

0xf175,	// (0x0002d3ca) lc0_stat_indi_pane_g2

0x0001,

0xfe14,	// (0x0002e069) lc0_stat_indi_pane_g_ParamLimits

0xfe14,	// (0x0002e069) lc0_stat_indi_pane_g

0xcea1,	// (0x0002b0f6) lc0_uni_indicator_pane_ParamLimits

0xcea1,	// (0x0002b0f6) lc0_uni_indicator_pane

0xe454,	// (0x0002c6a9) ls0_title_pane_g1_ParamLimits

0xe454,	// (0x0002c6a9) ls0_title_pane_g1

0xf182,	// (0x0002d3d7) ls0_title_pane_t1_ParamLimits

0xf182,	// (0x0002d3d7) ls0_title_pane_t1

0xceae,	// (0x0002b103) lc0_uni_indicator_pane_g1_ParamLimits

0xceae,	// (0x0002b103) lc0_uni_indicator_pane_g1

0xe468,	// (0x0002c6bd) lc0_stat_clock_pane_t1

0x970d,	// (0x00027962) main_ai5_pane

0xe476,	// (0x0002c6cb) ai5_sk_pane_ParamLimits

0xe476,	// (0x0002c6cb) ai5_sk_pane

0xf1b8,	// (0x0002d40d) cell_ai5_widget_pane_ParamLimits

0xf1b8,	// (0x0002d40d) cell_ai5_widget_pane

0xe483,	// (0x0002c6d8) aid_size_cell_widget_grid

0xe490,	// (0x0002c6e5) bg_ai5_widget_pane_ParamLimits

0xe490,	// (0x0002c6e5) bg_ai5_widget_pane

0xf24b,	// (0x0002d4a0) cell_ai5_widget_pane_g2

0xf25f,	// (0x0002d4b4) cell_ai5_widget_pane_g3

0xf279,	// (0x0002d4ce) cell_ai5_widget_pane_g4

0xf289,	// (0x0002d4de) cell_ai5_widget_pane_g5

0xf299,	// (0x0002d4ee) cell_ai5_widget_pane_g6

0xf2a5,	// (0x0002d4fa) cell_ai5_widget_pane_g7

0xf311,	// (0x0002d566) cell_ai5_widget_pane_t1_ParamLimits

0xf311,	// (0x0002d566) cell_ai5_widget_pane_t1

0xf32e,	// (0x0002d583) cell_ai5_widget_pane_t2_ParamLimits

0xf32e,	// (0x0002d583) cell_ai5_widget_pane_t2

0xf346,	// (0x0002d59b) cell_ai5_widget_pane_t3_ParamLimits

0xf346,	// (0x0002d59b) cell_ai5_widget_pane_t3

0xf35e,	// (0x0002d5b3) cell_ai5_widget_pane_t4_ParamLimits

0xf35e,	// (0x0002d5b3) cell_ai5_widget_pane_t4

0xf384,	// (0x0002d5d9) cell_ai5_widget_pane_t5_ParamLimits

0xf384,	// (0x0002d5d9) cell_ai5_widget_pane_t5

0xe4ca,	// (0x0002c71f) cell_ai5_widget_pane_t6_ParamLimits

0xe4ca,	// (0x0002c71f) cell_ai5_widget_pane_t6

0xe4dc,	// (0x0002c731) cell_ai5_widget_pane_t7_ParamLimits

0xe4dc,	// (0x0002c731) cell_ai5_widget_pane_t7

0xf3a3,	// (0x0002d5f8) cell_ai5_widget_pane_t8_ParamLimits

0xf3a3,	// (0x0002d5f8) cell_ai5_widget_pane_t8

0x000b,

0xfe34,	// (0x0002e089) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x0002e089) cell_ai5_widget_pane_t

0xf426,	// (0x0002d67b) grid_ai5_widget_pane

0x4e59,	// (0x000230ae) highlight_cell_ai5_widget_pane_ParamLimits

0x4e59,	// (0x000230ae) highlight_cell_ai5_widget_pane

0xf432,	// (0x0002d687) ai5_sk_left_pane

0xf43c,	// (0x0002d691) ai5_sk_middle_pane

0xf446,	// (0x0002d69b) ai5_sk_right_pane

0xe4fb,	// (0x0002c750) bg_ai5_widget_pane_g1_ParamLimits

0xe4fb,	// (0x0002c750) bg_ai5_widget_pane_g1

0xe507,	// (0x0002c75c) bg_ai5_widget_pane_g2_ParamLimits

0xe507,	// (0x0002c75c) bg_ai5_widget_pane_g2

0xe513,	// (0x0002c768) bg_ai5_widget_pane_g3_ParamLimits

0xe513,	// (0x0002c768) bg_ai5_widget_pane_g3

0xe51f,	// (0x0002c774) bg_ai5_widget_pane_g4_ParamLimits

0xe51f,	// (0x0002c774) bg_ai5_widget_pane_g4

0xe52b,	// (0x0002c780) bg_ai5_widget_pane_g5_ParamLimits

0xe52b,	// (0x0002c780) bg_ai5_widget_pane_g5

0xe537,	// (0x0002c78c) bg_ai5_widget_pane_g6_ParamLimits

0xe537,	// (0x0002c78c) bg_ai5_widget_pane_g6

0xe543,	// (0x0002c798) bg_ai5_widget_pane_g7_ParamLimits

0xe543,	// (0x0002c798) bg_ai5_widget_pane_g7

0xe54f,	// (0x0002c7a4) bg_ai5_widget_pane_g8_ParamLimits

0xe54f,	// (0x0002c7a4) bg_ai5_widget_pane_g8

0xe55b,	// (0x0002c7b0) bg_ai5_widget_pane_g9_ParamLimits

0xe55b,	// (0x0002c7b0) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x0002e0a2) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0002e0a2) bg_ai5_widget_pane_g

0xe58b,	// (0x0002c7e0) cell_shortcut_ai5_widget_pane_ParamLimits

0xe58b,	// (0x0002c7e0) cell_shortcut_ai5_widget_pane

0xe59c,	// (0x0002c7f1) bg_cell_shortcut_ai5_widget_pane

0x4ba6,	// (0x00022dfb) cell_grid_ai5_widget_pane_g1

0x5810,	// (0x00023a65) highlight_cell_shortcut_ai5_widget_pane

0x5bac,	// (0x00023e01) ai5_sk_left_pane_g1

0xe5a4,	// (0x0002c7f9) ai5_sk_left_pane_g2

0xe5ac,	// (0x0002c801) ai5_sk_left_pane_g3

0xe5b4,	// (0x0002c809) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x0002e0b5) ai5_sk_left_pane_g

0xe5bc,	// (0x0002c811) ai5_sk_left_pane_t1

0x5ba4,	// (0x00023df9) ai5_sk_right_pane_g1

0xe5ca,	// (0x0002c81f) ai5_sk_right_pane_g2

0xe5d2,	// (0x0002c827) ai5_sk_right_pane_g3

0xe5da,	// (0x0002c82f) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x0002e0be) ai5_sk_right_pane_g

0xe5e2,	// (0x0002c837) ai5_sk_right_pane_t1

0x5ba4,	// (0x00023df9) ai5_sk_middle_pane_g1

0x5bac,	// (0x00023e01) ai5_sk_middle_pane_g2

0x5bc4,	// (0x00023e19) ai5_sk_middle_pane_g3

0xe5d2,	// (0x0002c827) ai5_sk_middle_pane_g4

0xe5ac,	// (0x0002c801) ai5_sk_middle_pane_g5

0xe5f0,	// (0x0002c845) ai5_sk_middle_pane_g6

0xf450,	// (0x0002d6a5) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x0002e0c7) ai5_sk_middle_pane_g

0xaa3d,	// (0x00028c92) aid_touch_area_size_lc0_ParamLimits

0xaa3d,	// (0x00028c92) aid_touch_area_size_lc0

0xbafc,	// (0x00029d51) cell_hwr_candidate_pane_t1_ParamLimits

0x59f5,	// (0x00023c4a) aid_touch_navi_pane

0xac55,	// (0x00028eaa) status_dt_navi_pane_ParamLimits

0xac55,	// (0x00028eaa) status_dt_navi_pane

0xac62,	// (0x00028eb7) status_dt_sta_pane_ParamLimits

0xac62,	// (0x00028eb7) status_dt_sta_pane

0xf458,	// (0x0002d6ad) dt_sta_controll_pane

0xf465,	// (0x0002d6ba) dt_sta_indi_pane

0xf476,	// (0x0002d6cb) dt_sta_title_pane

0x49ec,	// (0x00022c41) bg_dt_sta_indi_pane_ParamLimits

0x49ec,	// (0x00022c41) bg_dt_sta_indi_pane

0xf489,	// (0x0002d6de) dt_sta_battery_pane

0xf491,	// (0x0002d6e6) dt_sta_indi_pane_g1

0xf49a,	// (0x0002d6ef) dt_sta_indi_pane_g2

0xf4a3,	// (0x0002d6f8) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x0002e0d6) dt_sta_indi_pane_g

0xf4ac,	// (0x0002d701) dt_sta_signal_pane

0x4e59,	// (0x000230ae) bg_dt_sta_title_pane_ParamLimits

0x4e59,	// (0x000230ae) bg_dt_sta_title_pane

0xf4b5,	// (0x0002d70a) dt_sta_title_pane_g1

0xf4bd,	// (0x0002d712) dt_sta_title_pane_t1_ParamLimits

0xf4bd,	// (0x0002d712) dt_sta_title_pane_t1

0x47c9,	// (0x00022a1e) bg_dt_sta_control_pane

0xf4d2,	// (0x0002d727) dt_sta_controll_pane_g1

0xf4db,	// (0x0002d730) bg_dt_sta_title_pane_g1

0xf4e4,	// (0x0002d739) bg_dt_sta_title_pane_g2

0xf4ed,	// (0x0002d742) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x0002e0dd) bg_dt_sta_title_pane_g

0x7966,	// (0x00025bbb) bg_dt_sta_indi_pane_g1

0xf4f6,	// (0x0002d74b) dt_sta_signal_pane_g1

0xf4fe,	// (0x0002d753) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x0002e0e4) dt_sta_signal_pane_g

0xe5f8,	// (0x0002c84d) dt_sta_battery_pane_g1

0xe601,	// (0x0002c856) dt_sta_battery_pane_t1

0x7966,	// (0x00025bbb) bg_dt_sta_control_pane_g1

0x53e0,	// (0x00023635) fep_china_uni_eep_pane

0x53e8,	// (0x0002363d) fep_china_uni_entry_pane_ParamLimits

0x53f8,	// (0x0002364d) popup_fep_china_uni_window_g1_ParamLimits

0x5408,	// (0x0002365d) popup_fep_china_uni_window_g2_ParamLimits

0x5408,	// (0x0002365d) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002d94d) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002d94d) popup_fep_china_uni_window_g

0xe610,	// (0x0002c865) fep_china_uni_eep_pane_g1

0xe618,	// (0x0002c86d) fep_china_uni_eep_pane_t1

0xe435,	// (0x0002c68a) aid_touch_area_size_smil_player

0x5a93,	// (0x00023ce8) lc0_clock_pane

0x5acc,	// (0x00023d21) status_pane_g5_ParamLimits

0x5acc,	// (0x00023d21) status_pane_g5

0xa6d6,	// (0x0002892b) popup_keymap_window

0x5aac,	// (0x00023d01) status_icon_pane

0xf25f,	// (0x0002d4b4) cell_ai5_widget_pane_g3_ParamLimits

0xf279,	// (0x0002d4ce) cell_ai5_widget_pane_g4_ParamLimits

0xf289,	// (0x0002d4de) cell_ai5_widget_pane_g5_ParamLimits

0xf2b1,	// (0x0002d506) cell_ai5_widget_pane_g8_ParamLimits

0xf2b1,	// (0x0002d506) cell_ai5_widget_pane_g8

0xf2c5,	// (0x0002d51a) cell_ai5_widget_pane_g9_ParamLimits

0xf2c5,	// (0x0002d51a) cell_ai5_widget_pane_g9

0xf2d9,	// (0x0002d52e) cell_ai5_widget_pane_g10_ParamLimits

0xf2d9,	// (0x0002d52e) cell_ai5_widget_pane_g10

0xe627,	// (0x0002c87c) status_icon_pane_g1

0x47c9,	// (0x00022a1e) bg_popup_sub_pane_cp13

0xe62f,	// (0x0002c884) popup_keymap_window_t1

0xa44b,	// (0x000286a0) control_pane_g6_ParamLimits

0xa44b,	// (0x000286a0) control_pane_g6

0xa458,	// (0x000286ad) control_pane_g7_ParamLimits

0xa458,	// (0x000286ad) control_pane_g7

0xa465,	// (0x000286ba) control_pane_g8_ParamLimits

0xa465,	// (0x000286ba) control_pane_g8

0xf458,	// (0x0002d6ad) dt_sta_controll_pane_ParamLimits

0xf465,	// (0x0002d6ba) dt_sta_indi_pane_ParamLimits

0xf476,	// (0x0002d6cb) dt_sta_title_pane_ParamLimits

0x4daa,	// (0x00022fff) aid_size_touch_scroll_bar_cale

0x97e4,	// (0x00027a39) popup_discreet_window_ParamLimits

0x97e4,	// (0x00027a39) popup_discreet_window

0x9848,	// (0x00027a9d) popup_sk_window

0x618c,	// (0x000243e1) bg_popup_sub_pane_cp28_ParamLimits

0x618c,	// (0x000243e1) bg_popup_sub_pane_cp28

0xe63d,	// (0x0002c892) popup_discreet_window_g1_ParamLimits

0xe63d,	// (0x0002c892) popup_discreet_window_g1

0xe65d,	// (0x0002c8b2) popup_discreet_window_t1_ParamLimits

0xe65d,	// (0x0002c8b2) popup_discreet_window_t1

0xe67b,	// (0x0002c8d0) popup_discreet_window_t2_ParamLimits

0xe67b,	// (0x0002c8d0) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x0002e0e9) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x0002e0e9) popup_discreet_window_t

0xcec0,	// (0x0002b115) popup_sk_window_g1

0xcec9,	// (0x0002b11e) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x0002e0f0) popup_sk_window_g

0xced2,	// (0x0002b127) popup_sk_window_t1

0xcee0,	// (0x0002b135) popup_sk_window_t1_copy1

0xf24b,	// (0x0002d4a0) cell_ai5_widget_pane_g2_ParamLimits

0xf3b5,	// (0x0002d60a) cell_ai5_widget_pane_t9_ParamLimits

0xf3b5,	// (0x0002d60a) cell_ai5_widget_pane_t9

0x47c9,	// (0x00022a1e) main_fep_fshwr2_pane

0xceee,	// (0x0002b143) aid_fshwr2_btn_pane

0xcefa,	// (0x0002b14f) aid_fshwr2_syb_pane

0xcf0c,	// (0x0002b161) aid_fshwr2_txt_pane

0xcf18,	// (0x0002b16d) fshwr2_func_candi_pane

0xcf2c,	// (0x0002b181) fshwr2_hwr_syb_pane

0xcf3e,	// (0x0002b193) fshwr2_icf_pane

0x970d,	// (0x00027962) fshwr2_icf_bg_pane

0xcf66,	// (0x0002b1bb) fshwr2_icf_pane_t1_ParamLimits

0xcf66,	// (0x0002b1bb) fshwr2_icf_pane_t1

0x537e,	// (0x000235d3) fshwr2_func_candi_pane_g1

0xf506,	// (0x0002d75b) fshwr2_func_candi_row_pane_ParamLimits

0xf506,	// (0x0002d75b) fshwr2_func_candi_row_pane

0xcf7e,	// (0x0002b1d3) cell_fshwr2_syb_pane_ParamLimits

0xcf7e,	// (0x0002b1d3) cell_fshwr2_syb_pane

0xcf9d,	// (0x0002b1f2) fshwr2_hwr_syb_pane_g1_ParamLimits

0xcf9d,	// (0x0002b1f2) fshwr2_hwr_syb_pane_g1

0x970d,	// (0x00027962) bg_popup_call_pane_cp01

0xcfab,	// (0x0002b200) fshwr2_func_candi_cell_pane_ParamLimits

0xcfab,	// (0x0002b200) fshwr2_func_candi_cell_pane

0x6774,	// (0x000249c9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6774,	// (0x000249c9) fshwr2_func_candi_cell_bg_pane

0xcfea,	// (0x0002b23f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcfea,	// (0x0002b23f) fshwr2_func_candi_cell_pane_g1

0xd00a,	// (0x0002b25f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd00a,	// (0x0002b25f) fshwr2_func_candi_cell_pane_t1

0x970d,	// (0x00027962) bg_button_pane_cp08

0x4ff2,	// (0x00023247) cell_fshwr2_syb_bg_pane

0xd01d,	// (0x0002b272) cell_fshwr2_syb_bg_pane_g1

0xd031,	// (0x0002b286) cell_fshwr2_syb_bg_pane_t1

0x4e59,	// (0x000230ae) main_tmo_pane

0xb0eb,	// (0x00029340) uni_indicator_pane_g1_ParamLimits

0xb0ff,	// (0x00029354) uni_indicator_pane_g2_ParamLimits

0xb114,	// (0x00029369) uni_indicator_pane_g3_ParamLimits

0x6b18,	// (0x00024d6d) uni_indicator_pane_g4_ParamLimits

0x6b18,	// (0x00024d6d) uni_indicator_pane_g4

0x6b2c,	// (0x00024d81) uni_indicator_pane_g5_ParamLimits

0x6b2c,	// (0x00024d81) uni_indicator_pane_g5

0x6b2c,	// (0x00024d81) uni_indicator_pane_g6_ParamLimits

0x6b2c,	// (0x00024d81) uni_indicator_pane_g6

0xf8f7,	// (0x0002db4c) uni_indicator_pane_g_ParamLimits

0xc025,	// (0x0002a27a) popup_tmo_note_window_ParamLimits

0xc025,	// (0x0002a27a) popup_tmo_note_window

0xc1f4,	// (0x0002a449) fshwr2_bg_pane

0xcffb,	// (0x0002b250) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcffb,	// (0x0002b250) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x0002e0f5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x0002e0f5) fshwr2_func_candi_cell_pane_g

0xbab5,	// (0x00029d0a) bg_popup_window_pane_cp01

0xd047,	// (0x0002b29c) bg_popup_window_pane_g1_cp01

0xe6cd,	// (0x0002c922) bg_popup_window_pane_cp22_ParamLimits

0xe6cd,	// (0x0002c922) bg_popup_window_pane_cp22

0xe6db,	// (0x0002c930) listscroll_tmo_link_pane_ParamLimits

0xe6db,	// (0x0002c930) listscroll_tmo_link_pane

0xe71b,	// (0x0002c970) popup_tmo_note_window_g1_ParamLimits

0xe71b,	// (0x0002c970) popup_tmo_note_window_g1

0xe728,	// (0x0002c97d) tmo_note_info_pane_ParamLimits

0xe728,	// (0x0002c97d) tmo_note_info_pane

0x0020,	// (0x0001e275) list_tmo_note_info_pane_g1_ParamLimits

0x0020,	// (0x0001e275) list_tmo_note_info_pane_g1

0xe742,	// (0x0002c997) list_tmo_note_info_pane_g2_ParamLimits

0xe742,	// (0x0002c997) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x0002e0fa) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x0002e0fa) list_tmo_note_info_pane_g

0xe75e,	// (0x0002c9b3) list_tmo_note_info_text_pane_ParamLimits

0xe75e,	// (0x0002c9b3) list_tmo_note_info_text_pane

0xe7a0,	// (0x0002c9f5) list_tmo_link_pane

0xe7ad,	// (0x0002ca02) scroll_pane_cp20

0xe7ba,	// (0x0002ca0f) list_single_tmo_link_pane_ParamLimits

0xe7ba,	// (0x0002ca0f) list_single_tmo_link_pane

0xe7ca,	// (0x0002ca1f) list_single_tmo_link_pane_t1

0xe7d8,	// (0x0002ca2d) list_tmo_note_info_text_pane_t1_ParamLimits

0xe7d8,	// (0x0002ca2d) list_tmo_note_info_text_pane_t1

0x4f18,	// (0x0002316d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4f18,	// (0x0002316d) aid_size_touch_scroll_bar_cp01

0xd852,	// (0x0002baa7) aid_size_touch_slider_marker

0x9834,	// (0x00027a89) popup_settings_window_ParamLimits

0x9834,	// (0x00027a89) popup_settings_window

0xd9f5,	// (0x0002bc4a) popup_candi_list_indi_window

0x59f5,	// (0x00023c4a) aid_touch_navi_pane_ParamLimits

0xc150,	// (0x0002a3a5) rs_clock_indi_pane

0xc159,	// (0x0002a3ae) sctrl_sk_bottom_pane_ParamLimits

0xc16a,	// (0x0002a3bf) sctrl_sk_top_pane_ParamLimits

0xc7a5,	// (0x0002a9fa) popup_fep_tooltip_window

0xe483,	// (0x0002c6d8) aid_size_cell_widget_grid_ParamLimits

0xf237,	// (0x0002d48c) cell_ai5_widget_pane_g1_ParamLimits

0xf237,	// (0x0002d48c) cell_ai5_widget_pane_g1

0xf299,	// (0x0002d4ee) cell_ai5_widget_pane_g6_ParamLimits

0xf2a5,	// (0x0002d4fa) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe19,	// (0x0002e06e) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x0002e06e) cell_ai5_widget_pane_g

0xf3e4,	// (0x0002d639) cell_ai5_widget_pane_t10_ParamLimits

0xf3e4,	// (0x0002d639) cell_ai5_widget_pane_t10

0xf426,	// (0x0002d67b) grid_ai5_widget_pane_ParamLimits

0xe567,	// (0x0002c7bc) cell_contacts_ai5_widget_pane_ParamLimits

0xe567,	// (0x0002c7bc) cell_contacts_ai5_widget_pane

0xe690,	// (0x0002c8e5) popup_discreet_window_t3_ParamLimits

0xe690,	// (0x0002c8e5) popup_discreet_window_t3

0xcf54,	// (0x0002b1a9) popup_fshwr2_char_preview_window_ParamLimits

0xcf54,	// (0x0002b1a9) popup_fshwr2_char_preview_window

0x0037,	// (0x0001e28c) tmo_note_info_pane_t1

0x004c,	// (0x0001e2a1) tmo_note_info_pane_t2

0x0061,	// (0x0001e2b6) tmo_note_info_pane_t3

0xe77c,	// (0x0002c9d1) tmo_note_info_pane_t4

0xe78e,	// (0x0002c9e3) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x0002e0ff) tmo_note_info_pane_t

0xe7a0,	// (0x0002c9f5) list_tmo_link_pane_ParamLimits

0xe7ad,	// (0x0002ca02) scroll_pane_cp20_ParamLimits

0x970d,	// (0x00027962) bg_popup_fep_char_preview_window_cp01

0xe7f1,	// (0x0002ca46) popup_fshwr2_char_preview_window_t1

0xe7ff,	// (0x0002ca54) popup_candi_list_indi_window_g1

0xe808,	// (0x0002ca5d) bg_cell_contacts_ai5_widget_pane

0xe814,	// (0x0002ca69) cell_contacts_ai5_widget_pane_g1

0xe829,	// (0x0002ca7e) cell_contacts_ai5_widget_pane_g2

0xe835,	// (0x0002ca8a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x0002e10a) cell_contacts_ai5_widget_pane_g

0xe841,	// (0x0002ca96) cell_contacts_ai5_widget_pane_t1

0x4e59,	// (0x000230ae) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe8b6,	// (0x0002cb0b) settings_container_pane

0x5810,	// (0x00023a65) listscroll_set_pane_copy1

0x72a4,	// (0x000254f9) scroll_pane_cp121_copy1

0xe8c2,	// (0x0002cb17) set_content_pane_copy1

0xe8ca,	// (0x0002cb1f) aid_height_set_list_copy1_ParamLimits

0xe8ca,	// (0x0002cb1f) aid_height_set_list_copy1

0x6cd1,	// (0x00024f26) aid_size_parent_copy1_ParamLimits

0x6cd1,	// (0x00024f26) aid_size_parent_copy1

0xe8d6,	// (0x0002cb2b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8d6,	// (0x0002cb2b) button_value_adjust_pane_cp6_copy1

0x4ff2,	// (0x00023247) list_highlight_pane_cp2_copy1_ParamLimits

0x4ff2,	// (0x00023247) list_highlight_pane_cp2_copy1

0xe8ea,	// (0x0002cb3f) list_set_pane_copy1_ParamLimits

0xe8ea,	// (0x0002cb3f) list_set_pane_copy1

0xe853,	// (0x0002caa8) main_pane_set_t1_copy1_ParamLimits

0xe853,	// (0x0002caa8) main_pane_set_t1_copy1

0xe88d,	// (0x0002cae2) main_pane_set_t2_copy1_ParamLimits

0xe88d,	// (0x0002cae2) main_pane_set_t2_copy1

0xe978,	// (0x0002cbcd) main_pane_set_t3_copy1

0xe986,	// (0x0002cbdb) main_pane_set_t4_copy1

0xe8aa,	// (0x0002caff) set_content_pane_g1_copy1_ParamLimits

0xe8aa,	// (0x0002caff) set_content_pane_g1_copy1

0xe994,	// (0x0002cbe9) setting_code_pane_copy1

0xe99c,	// (0x0002cbf1) setting_slider_graphic_pane_copy1

0xe99c,	// (0x0002cbf1) setting_slider_pane_copy1

0xe99c,	// (0x0002cbf1) setting_text_pane_copy1

0xe99c,	// (0x0002cbf1) setting_volume_pane_copy1

0xe9a4,	// (0x0002cbf9) settings_code_pane_cp2_copy1

0xe9ac,	// (0x0002cc01) settings_code_pane_cp_copy1_ParamLimits

0xe9ac,	// (0x0002cc01) settings_code_pane_cp_copy1

0xd050,	// (0x0002b2a5) volume_set_pane_copy1

0xe9c0,	// (0x0002cc15) volume_set_pane_g10_copy1

0xe9c8,	// (0x0002cc1d) volume_set_pane_g1_copy1

0xe9d0,	// (0x0002cc25) volume_set_pane_g2_copy1

0xe9d8,	// (0x0002cc2d) volume_set_pane_g3_copy1

0xe9e0,	// (0x0002cc35) volume_set_pane_g4_copy1

0xe9e8,	// (0x0002cc3d) volume_set_pane_g5_copy1

0xe9f0,	// (0x0002cc45) volume_set_pane_g6_copy1

0xe9f8,	// (0x0002cc4d) volume_set_pane_g7_copy1

0xea00,	// (0x0002cc55) volume_set_pane_g8_copy1

0xea08,	// (0x0002cc5d) volume_set_pane_g9_copy1

0x48b9,	// (0x00022b0e) bg_set_opt_pane_cp_copy1_ParamLimits

0x48b9,	// (0x00022b0e) bg_set_opt_pane_cp_copy1

0xd058,	// (0x0002b2ad) setting_slider_pane_t1_copy1_ParamLimits

0xd058,	// (0x0002b2ad) setting_slider_pane_t1_copy1

0xd06f,	// (0x0002b2c4) setting_slider_pane_t2_copy1_ParamLimits

0xd06f,	// (0x0002b2c4) setting_slider_pane_t2_copy1

0xd088,	// (0x0002b2dd) setting_slider_pane_t3_copy1_ParamLimits

0xd088,	// (0x0002b2dd) setting_slider_pane_t3_copy1

0x9a22,	// (0x00027c77) slider_set_pane_copy1_ParamLimits

0x9a22,	// (0x00027c77) slider_set_pane_copy1

0x4eb4,	// (0x00023109) set_opt_bg_pane_g1_copy2

0x4ebc,	// (0x00023111) set_opt_bg_pane_g2_copy2

0xea10,	// (0x0002cc65) set_opt_bg_pane_g3_copy2

0x4ecc,	// (0x00023121) set_opt_bg_pane_g4_copy2

0x4ed4,	// (0x00023129) set_opt_bg_pane_g5_copy2

0x4edc,	// (0x00023131) set_opt_bg_pane_g6_copy2

0xea18,	// (0x0002cc6d) set_opt_bg_pane_g7_copy2

0xea20,	// (0x0002cc75) set_opt_bg_pane_g8_copy2

0xea28,	// (0x0002cc7d) set_opt_bg_pane_g9_copy2

0xb179,	// (0x000293ce) aid_size_touch_slider_mark_copy1_ParamLimits

0xb179,	// (0x000293ce) aid_size_touch_slider_mark_copy1

0x6ce3,	// (0x00024f38) slider_set_pane_g1_copy1

0x6d70,	// (0x00024fc5) slider_set_pane_g2_copy1

0xb199,	// (0x000293ee) slider_set_pane_g3_copy1_ParamLimits

0xb199,	// (0x000293ee) slider_set_pane_g3_copy1

0xb1ad,	// (0x00029402) slider_set_pane_g4_copy1_ParamLimits

0xb1ad,	// (0x00029402) slider_set_pane_g4_copy1

0xb1c5,	// (0x0002941a) slider_set_pane_g5_copy1_ParamLimits

0xb1c5,	// (0x0002941a) slider_set_pane_g5_copy1

0xb199,	// (0x000293ee) slider_set_pane_g6_copy1_ParamLimits

0xb199,	// (0x000293ee) slider_set_pane_g6_copy1

0xd09f,	// (0x0002b2f4) slider_set_pane_g7_copy1_ParamLimits

0xd09f,	// (0x0002b2f4) slider_set_pane_g7_copy1

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp2_copy1

0x48c7,	// (0x00022b1c) setting_slider_graphic_pane_g1_copy1

0xd0b5,	// (0x0002b30a) setting_slider_graphic_pane_t1_copy1

0xd0c4,	// (0x0002b319) setting_slider_graphic_pane_t2_copy1

0xd0d3,	// (0x0002b328) slider_set_pane_cp_copy1

0xea38,	// (0x0002cc8d) input_focus_pane_cp1_copy1

0xea41,	// (0x0002cc96) list_set_text_pane_copy1

0xea49,	// (0x0002cc9e) setting_text_pane_g1_copy1

0xea52,	// (0x0002cca7) set_text_pane_t1_copy1

0xea38,	// (0x0002cc8d) input_focus_pane_cp2_copy1

0xea49,	// (0x0002cc9e) setting_code_pane_g1_copy1

0xea6b,	// (0x0002ccc0) setting_code_pane_t1_copy1

0xea79,	// (0x0002ccce) list_set_graphic_pane_copy1

0x4855,	// (0x00022aaa) bg_set_opt_pane_cp4_copy1

0x5573,	// (0x000237c8) list_set_graphic_pane_g1_copy1_ParamLimits

0x5573,	// (0x000237c8) list_set_graphic_pane_g1_copy1

0xea8e,	// (0x0002cce3) list_set_graphic_pane_g2_copy1

0x558b,	// (0x000237e0) list_set_graphic_pane_t1_copy1_ParamLimits

0x558b,	// (0x000237e0) list_set_graphic_pane_t1_copy1

0x7966,	// (0x00025bbb) rs_clock_indi_pane_g1

0xea96,	// (0x0002cceb) rs_clock_indi_pane_t1

0xeaa4,	// (0x0002ccf9) rs_indi_pane

0xeaac,	// (0x0002cd01) rs_indi_pane_g1

0xeab5,	// (0x0002cd0a) rs_indi_pane_g2

0xe7ff,	// (0x0002ca54) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x0002e111) rs_indi_pane_g

0x5810,	// (0x00023a65) bg_popup_preview_window_pane_cp03

0xeabe,	// (0x0002cd13) popup_fep_tooltip_window_t1

0x8291,	// (0x000264e6) popup_note2_window_g2_ParamLimits

0x8291,	// (0x000264e6) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002dea5) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002dea5) popup_note2_window_g

0x870c,	// (0x00026961) bg_popup_sub_pane_cp11_ParamLimits

0x8719,	// (0x0002696e) cell_ai3_links_pane_g1_ParamLimits

0x8730,	// (0x00026985) cell_ai3_links_pane_t1

0xea52,	// (0x0002cca7) set_text_pane_t1_copy1_ParamLimits

0x5737,	// (0x0002398c) cell_graphic_popup_pane_cp2_ParamLimits

0x5737,	// (0x0002398c) cell_graphic_popup_pane_cp2

0xeacc,	// (0x0002cd21) cell_graphic_popup_pane_g1_cp2

0x4c59,	// (0x00022eae) cell_graphic_popup_pane_g2_cp2

0xead4,	// (0x0002cd29) cell_graphic_popup_pane_g3_cp2

0xeadc,	// (0x0002cd31) cell_graphic_popup_pane_t2_cp2

0x4c6a,	// (0x00022ebf) grid_highlight_pane_cp3_cp2

0x51b7,	// (0x0002340c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4e59,	// (0x000230ae) main_tmo_pane_ParamLimits

0xc01d,	// (0x0002a272) popup_tmo_big_image_note_window

0xe4c2,	// (0x0002c717) cell_ai5_widget_list_pane

0xf22e,	// (0x0002d483) cell_ai5_widget_lrg_icon_pane

0x0037,	// (0x0001e28c) tmo_note_info_pane_t1_ParamLimits

0x004c,	// (0x0001e2a1) tmo_note_info_pane_t2_ParamLimits

0x0061,	// (0x0001e2b6) tmo_note_info_pane_t3_ParamLimits

0xe77c,	// (0x0002c9d1) tmo_note_info_pane_t4_ParamLimits

0xe78e,	// (0x0002c9e3) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x0002e0ff) tmo_note_info_pane_t_ParamLimits

0xe8b6,	// (0x0002cb0b) settings_container_pane_ParamLimits

0xea30,	// (0x0002cc85) indicator_popup_pane_cp5

0xea30,	// (0x0002cc85) indicator_popup_pane_cp6

0xea79,	// (0x0002ccce) list_set_graphic_pane_copy1_ParamLimits

0x47c9,	// (0x00022a1e) bg_popup_window_pane_cp23

0xeaea,	// (0x0002cd3f) popup_tmo_big_image_note_window_g1

0xeaf3,	// (0x0002cd48) popup_tmo_big_image_note_window_t1

0xeb01,	// (0x0002cd56) popup_tmo_big_image_note_window_t2

0xeb0f,	// (0x0002cd64) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x0002e118) popup_tmo_big_image_note_window_t

0x7966,	// (0x00025bbb) cell_ai5_widget_lrg_icon_pane_g1

0xeb1d,	// (0x0002cd72) cell_ai5_widget_lrg_icon_pane_t1

0x0101,	// (0x0001e356) cell_ai5_widget_list_row_pane_ParamLimits

0x0101,	// (0x0001e356) cell_ai5_widget_list_row_pane

0x0118,	// (0x0001e36d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0118,	// (0x0001e36d) cell_ai5_widget_list_row_pane_g1

0x0125,	// (0x0001e37a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0125,	// (0x0001e37a) cell_ai5_widget_list_row_pane_t1

0x0153,	// (0x0001e3a8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0153,	// (0x0001e3a8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeca,	// (0x0002e11f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x0002e11f) cell_ai5_widget_list_row_pane_t

0x970d,	// (0x00027962) main_fep_vtchi_ss_pane

0xeb38,	// (0x0002cd8d) popup_fep_char_pre_window

0xeb40,	// (0x0002cd95) popup_fep_ituss_window

0x01ab,	// (0x0001e400) popup_fep_vkbss_window

0xeb7b,	// (0x0002cdd0) grid_vkbss_keypad_pane_ParamLimits

0xeb7b,	// (0x0002cdd0) grid_vkbss_keypad_pane

0xeb8b,	// (0x0002cde0) ituss_keypad_pane

0xd0e5,	// (0x0002b33a) aid_vkbss_key_offset_ParamLimits

0xd0e5,	// (0x0002b33a) aid_vkbss_key_offset

0xd0f1,	// (0x0002b346) cell_vkbss_key_pane_ParamLimits

0xd0f1,	// (0x0002b346) cell_vkbss_key_pane

0xeb9a,	// (0x0002cdef) bg_cell_vkbss_key_g1_ParamLimits

0xeb9a,	// (0x0002cdef) bg_cell_vkbss_key_g1

0xeba6,	// (0x0002cdfb) cell_vkbss_key_3p_pane_ParamLimits

0xeba6,	// (0x0002cdfb) cell_vkbss_key_3p_pane

0xebdc,	// (0x0002ce31) cell_vkbss_key_g1_ParamLimits

0xebdc,	// (0x0002ce31) cell_vkbss_key_g1

0xec12,	// (0x0002ce67) cell_vkbss_key_t1_ParamLimits

0xec12,	// (0x0002ce67) cell_vkbss_key_t1

0xd125,	// (0x0002b37a) cell_ituss_key_pane_ParamLimits

0xd125,	// (0x0002b37a) cell_ituss_key_pane

0xec82,	// (0x0002ced7) bg_cell_ituss_key_g1_ParamLimits

0xec82,	// (0x0002ced7) bg_cell_ituss_key_g1

0xec8e,	// (0x0002cee3) cell_ituss_key_pane_g1_ParamLimits

0xec8e,	// (0x0002cee3) cell_ituss_key_pane_g1

0xd136,	// (0x0002b38b) cell_ituss_key_pane_g2_ParamLimits

0xd136,	// (0x0002b38b) cell_ituss_key_pane_g2

0x0005,

0xfed1,	// (0x0002e126) cell_ituss_key_pane_g_ParamLimits

0xfed1,	// (0x0002e126) cell_ituss_key_pane_g

0xd1ba,	// (0x0002b40f) cell_ituss_key_t1_ParamLimits

0xd1ba,	// (0x0002b40f) cell_ituss_key_t1

0xd1f0,	// (0x0002b445) cell_ituss_key_t2_ParamLimits

0xd1f0,	// (0x0002b445) cell_ituss_key_t2

0xd221,	// (0x0002b476) cell_ituss_key_t3_ParamLimits

0xd221,	// (0x0002b476) cell_ituss_key_t3

0xd1f0,	// (0x0002b445) cell_ituss_key_t4_ParamLimits

0xd1f0,	// (0x0002b445) cell_ituss_key_t4

0x0004,

0xfede,	// (0x0002e133) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0002e133) cell_ituss_key_t

0xecb4,	// (0x0002cf09) cell_vkbss_key_3p_pane_g1

0xecbc,	// (0x0002cf11) cell_vkbss_key_3p_pane_g2

0xecc4,	// (0x0002cf19) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x0002e13e) cell_vkbss_key_3p_pane_g

0x5810,	// (0x00023a65) bg_popup_fep_char_preview_window_cp02

0xeccc,	// (0x0002cf21) popup_fep_char_pre_window_t1

0xf21b,	// (0x0002d470) main_ai5_sk_pane

0xe808,	// (0x0002ca5d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe814,	// (0x0002ca69) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe829,	// (0x0002ca7e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe835,	// (0x0002ca8a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x0002e10a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe841,	// (0x0002ca96) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4e59,	// (0x000230ae) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0347,	// (0x0001e59c) main_ai5_sk_pane_g1

0x5fd6,	// (0x0002422b) popup_query_code_window_g1

0x0195,	// (0x0001e3ea) popup_fep_vkb_icf_pane

0xeb52,	// (0x0002cda7) popup_fep_vtchi_icf_pane

0x4ff2,	// (0x00023247) bg_icf_pane

0x4ff2,	// (0x00023247) list_vkb_icf_pane

0xecda,	// (0x0002cf2f) bg_icf_pane_cp01

0xeced,	// (0x0002cf42) vtchi_icf_list_pane

0x0390,	// (0x0001e5e5) list_vkb_icf_pane_t1_ParamLimits

0x0390,	// (0x0001e5e5) list_vkb_icf_pane_t1

0xecfd,	// (0x0002cf52) vtchi_icf_list_pane_t1_ParamLimits

0xecfd,	// (0x0002cf52) vtchi_icf_list_pane_t1

0xeb40,	// (0x0002cd95) popup_fep_ituss_window_ParamLimits

0xeb52,	// (0x0002cda7) popup_fep_vtchi_icf_pane_ParamLimits

0xeb8b,	// (0x0002cde0) ituss_keypad_pane_ParamLimits

0xd0db,	// (0x0002b330) ituss_sks_pane

0x4ff2,	// (0x00023247) bg_icf_pane_ParamLimits

0x017b,	// (0x0001e3d0) icf_edit_indi_pane_ParamLimits

0x017b,	// (0x0001e3d0) icf_edit_indi_pane

0x4ff2,	// (0x00023247) list_vkb_icf_pane_ParamLimits

0xecda,	// (0x0002cf2f) bg_icf_pane_cp01_ParamLimits

0xeb2b,	// (0x0002cd80) icf_edit_indi_pane_cp01_ParamLimits

0xeb2b,	// (0x0002cd80) icf_edit_indi_pane_cp01

0xecf5,	// (0x0002cf4a) vtchi_query_pane

0xe40e,	// (0x0002c663) icf_edit_indi_pane_g1_ParamLimits

0xe40e,	// (0x0002c663) icf_edit_indi_pane_g1

0x03bb,	// (0x0001e610) icf_edit_indi_pane_g2_ParamLimits

0x03bb,	// (0x0001e610) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0002e169) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0002e169) icf_edit_indi_pane_g

0x03cf,	// (0x0001e624) icf_edit_indi_pane_t1

0xed15,	// (0x0002cf6a) bg_input_focus_pane_cp042

0xed1e,	// (0x0002cf73) vtchi_button_pane

0xed27,	// (0x0002cf7c) vtchi_query_pane_t1

0xed35,	// (0x0002cf8a) vtchi_query_pane_t2

0xed43,	// (0x0002cf98) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0002e158) vtchi_query_pane_t

0x970d,	// (0x00027962) bg_button_pane_cp13

0xed51,	// (0x0002cfa6) vtchi_button_pane_g1

0xd264,	// (0x0002b4b9) ituss_sks_pane_g1

0xd26d,	// (0x0002b4c2) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x0002e15f) ituss_sks_pane_g

0xed59,	// (0x0002cfae) ituss_sks_pane_t1

0xed67,	// (0x0002cfbc) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0002e164) ituss_sks_pane_t

0x757d,	// (0x000257d2) indicator_nsta_pane_cp_g1

0x7586,	// (0x000257db) indicator_nsta_pane_cp_g2

0x758e,	// (0x000257e3) indicator_nsta_pane_cp_g3

0x7596,	// (0x000257eb) indicator_nsta_pane_cp_g4

0x759e,	// (0x000257f3) indicator_nsta_pane_cp_g5

0x75a6,	// (0x000257fb) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002dce3) indicator_nsta_pane_cp_g

0xf061,	// (0x0002d2b6) cell_graphic2_pane_t2_ParamLimits

0xf061,	// (0x0002d2b6) cell_graphic2_pane_t2

0x0001,

0xfda0,	// (0x0002dff5) cell_graphic2_pane_t_ParamLimits

0xfda0,	// (0x0002dff5) cell_graphic2_pane_t

0xf08d,	// (0x0002d2e2) cell_graphic2_control_pane_t1

0xa001,	// (0x00028256) signal_pane_g3_ParamLimits

0xa001,	// (0x00028256) signal_pane_g3

0xa012,	// (0x00028267) signal_pane_g4_ParamLimits

0xa012,	// (0x00028267) signal_pane_g4

0x0165,	// (0x0001e3ba) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0165,	// (0x0001e3ba) cell_ai5_widget_list_row_pane_t3

0xeca2,	// (0x0002cef7) cell_ituss_key_pane_t1_ParamLimits

0xeca2,	// (0x0002cef7) cell_ituss_key_pane_t1

0x5ca4,	// (0x00023ef9) form_field_data_wide_pane_vc_t2_ParamLimits

0x5ca4,	// (0x00023ef9) form_field_data_wide_pane_vc_t2

0x5cb6,	// (0x00023f0b) form_field_data_wide_pane_vc_t3_ParamLimits

0x5cb6,	// (0x00023f0b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0002da34) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0002da34) form_field_data_wide_pane_vc_t

0x72e9,	// (0x0002553e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x72e9,	// (0x0002553e) form_field_slider_wide_pane_vc_t3

0x73a7,	// (0x000255fc) form_field_popup_wide_pane_vc_t2_ParamLimits

0x73a7,	// (0x000255fc) form_field_popup_wide_pane_vc_t2

0x73bc,	// (0x00025611) form_field_popup_wide_pane_vc_t3_ParamLimits

0x73bc,	// (0x00025611) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002dcd2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002dcd2) form_field_popup_wide_pane_vc_t

0xceee,	// (0x0002b143) aid_fshwr2_btn_pane_ParamLimits

0xcefa,	// (0x0002b14f) aid_fshwr2_syb_pane_ParamLimits

0xcf0c,	// (0x0002b161) aid_fshwr2_txt_pane_ParamLimits

0xc1f4,	// (0x0002a449) fshwr2_bg_pane_ParamLimits

0xcf18,	// (0x0002b16d) fshwr2_func_candi_pane_ParamLimits

0xcf2c,	// (0x0002b181) fshwr2_hwr_syb_pane_ParamLimits

0xcf3e,	// (0x0002b193) fshwr2_icf_pane_ParamLimits

0xde1d,	// (0x0002c072) list_double_graphic_pane_vc_g4_ParamLimits

0xde1d,	// (0x0002c072) list_double_graphic_pane_vc_g4

0xd156,	// (0x0002b3ab) cell_ituss_key_pane_g3_ParamLimits

0xd156,	// (0x0002b3ab) cell_ituss_key_pane_g3

0xd252,	// (0x0002b4a7) cell_ituss_key_t5_ParamLimits

0xd252,	// (0x0002b4a7) cell_ituss_key_t5

0x01ab,	// (0x0001e400) popup_fep_vkbss_window_ParamLimits

0xf225,	// (0x0002d47a) aid_cell_ai5_quarter

0x03cf,	// (0x0001e624) icf_edit_indi_pane_t1_ParamLimits

0x4a94,	// (0x00022ce9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x4a94,	// (0x00022ce9) aid_tch_indicator_popup_pane_cp2

0x4aa7,	// (0x00022cfc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x4aa7,	// (0x00022cfc) aid_tch_query_popup_data_pane_cp2

0x5f7e,	// (0x000241d3) aid_tch_query_popup_pane_ParamLimits

0x5f7e,	// (0x000241d3) aid_tch_query_popup_pane

0x5f7e,	// (0x000241d3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5f7e,	// (0x000241d3) aid_tch_query_popup_data_pane_cp1

0x4ff2,	// (0x00023247) cell_fshwr2_syb_bg_pane_ParamLimits

0xd01d,	// (0x0002b272) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd031,	// (0x0002b286) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x0195,	// (0x0001e3ea) popup_fep_vkb_icf_pane_ParamLimits

0xcd61,	// (0x0002afb6) bg_popup_fep_char_preview_window_g10

0xf2ed,	// (0x0002d542) cell_ai5_widget_pane_g11_ParamLimits

0xf2ed,	// (0x0002d542) cell_ai5_widget_pane_g11

0xf2f9,	// (0x0002d54e) cell_ai5_widget_pane_g12_ParamLimits

0xf2f9,	// (0x0002d54e) cell_ai5_widget_pane_g12

0xf305,	// (0x0002d55a) cell_ai5_widget_pane_g13_ParamLimits

0xf305,	// (0x0002d55a) cell_ai5_widget_pane_g13

0xf402,	// (0x0002d657) cell_ai5_widget_pane_t11_ParamLimits

0xf402,	// (0x0002d657) cell_ai5_widget_pane_t11

0xf414,	// (0x0002d669) cell_ai5_widget_pane_t12_ParamLimits

0xf414,	// (0x0002d669) cell_ai5_widget_pane_t12

0xd162,	// (0x0002b3b7) cell_ituss_key_pane_g4_ParamLimits

0xd162,	// (0x0002b3b7) cell_ituss_key_pane_g4

0xd17e,	// (0x0002b3d3) cell_ituss_key_pane_g5_ParamLimits

0xd17e,	// (0x0002b3d3) cell_ituss_key_pane_g5

0xd19a,	// (0x0002b3ef) cell_ituss_key_pane_g6_ParamLimits

0xd19a,	// (0x0002b3ef) cell_ituss_key_pane_g6

0x5b9c,	// (0x00023df1) bg_icf_pane_g1

0x0350,	// (0x0001e5a5) bg_icf_pane_g2

0x0358,	// (0x0001e5ad) bg_icf_pane_g3

0x0360,	// (0x0001e5b5) bg_icf_pane_g4

0x0368,	// (0x0001e5bd) bg_icf_pane_g5

0x0370,	// (0x0001e5c5) bg_icf_pane_g6

0x0378,	// (0x0001e5cd) bg_icf_pane_g7

0x0380,	// (0x0001e5d5) bg_icf_pane_g8

0x0388,	// (0x0001e5dd) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x0002e145) bg_icf_pane_g

0xeb68,	// (0x0002cdbd) popup_hyb_candi_window_ParamLimits

0xeb68,	// (0x0002cdbd) popup_hyb_candi_window

0x5c44,	// (0x00023e99) bg_popup_sub_pane_cp01_ParamLimits

0x5c44,	// (0x00023e99) bg_popup_sub_pane_cp01

0xed75,	// (0x0002cfca) entry_hyb_candi_pane_ParamLimits

0xed75,	// (0x0002cfca) entry_hyb_candi_pane

0xed84,	// (0x0002cfd9) grid_hyb_candi_pane_ParamLimits

0xed84,	// (0x0002cfd9) grid_hyb_candi_pane

0xed99,	// (0x0002cfee) grid_hyb_phrase_pane_ParamLimits

0xed99,	// (0x0002cfee) grid_hyb_phrase_pane

0xeda8,	// (0x0002cffd) cell_hyb_candi_pane_ParamLimits

0xeda8,	// (0x0002cffd) cell_hyb_candi_pane

0xedc0,	// (0x0002d015) cell_hyb_candi_scroll_pane

0x537e,	// (0x000235d3) cell_hyb_candi_pane_g1

0xedc9,	// (0x0002d01e) cell_hyb_candi_pane_t1

0xedd7,	// (0x0002d02c) cell_hyb_phrase_pane

0x537e,	// (0x000235d3) cell_hyb_phrase_pane_g1

0xede0,	// (0x0002d035) cell_hyb_phrase_pane_t1

0xedee,	// (0x0002d043) entry_hyb_candi_pane_t1

0x5810,	// (0x00023a65) input_focus_pane_cp06

0xedfc,	// (0x0002d051) cell_hyb_candi_scroll_pane_g1

0xee04,	// (0x0002d059) cell_hyb_candi_scroll_pane_g1_aid

0xee0c,	// (0x0002d061) cell_hyb_candi_scroll_pane_g2

0xee14,	// (0x0002d069) cell_hyb_candi_scroll_pane_g2_aid

0xee1c,	// (0x0002d071) cell_hyb_candi_scroll_pane_g3

0xee24,	// (0x0002d079) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
