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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001aee3 };

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
0x2071,	// (0x0001cf54) Screen

0x207b,	// (0x0001cf5e) application_window_ParamLimits

0x207b,	// (0x0001cf5e) application_window

0x4e46,	// (0x0001fd29) screen_g1

0x20a9,	// (0x0001cf8c) area_bottom_pane_ParamLimits

0x20a9,	// (0x0001cf8c) area_bottom_pane

0x4e50,	// (0x0001fd33) area_top_pane_ParamLimits

0x4e50,	// (0x0001fd33) area_top_pane

0x723c,	// (0x0002211f) main_pane_ParamLimits

0x723c,	// (0x0002211f) main_pane

0x4ec8,	// (0x0001fdab) misc_graphics

0x3042,	// (0x0001df25) battery_pane_ParamLimits

0x3042,	// (0x0001df25) battery_pane

0x9a6c,	// (0x0002494f) bg_status_flat_pane_g8

0x9a74,	// (0x00024957) bg_status_flat_pane_g9

0x9209,	// (0x000240ec) context_pane_ParamLimits

0x9209,	// (0x000240ec) context_pane

0x319c,	// (0x0001e07f) navi_pane_ParamLimits

0x319c,	// (0x0001e07f) navi_pane

0x3211,	// (0x0001e0f4) signal_pane_ParamLimits

0x3211,	// (0x0001e0f4) signal_pane

0x0008,

0xf8a6,	// (0x0002a789) bg_status_flat_pane_g

0x329d,	// (0x0001e180) status_pane_g1_ParamLimits

0x329d,	// (0x0001e180) status_pane_g1

0x32a9,	// (0x0001e18c) status_pane_g2_ParamLimits

0x32a9,	// (0x0001e18c) status_pane_g2

0x926f,	// (0x00024152) status_pane_g3_ParamLimits

0x926f,	// (0x00024152) status_pane_g3

0x0004,

0xf7e0,	// (0x0002a6c3) status_pane_g_ParamLimits

0xf7e0,	// (0x0002a6c3) status_pane_g

0x32b5,	// (0x0001e198) title_pane_ParamLimits

0x32b5,	// (0x0001e198) title_pane

0x3310,	// (0x0001e1f3) uni_indicator_pane_ParamLimits

0x3310,	// (0x0001e1f3) uni_indicator_pane

0x905f,	// (0x00023f42) bg_list_pane_ParamLimits

0x905f,	// (0x00023f42) bg_list_pane

0x1dcf,	// (0x0001ccb2) find_pane

0x2a27,	// (0x0001d90a) listscroll_app_pane_ParamLimits

0x2a27,	// (0x0001d90a) listscroll_app_pane

0x907f,	// (0x00023f62) listscroll_form_pane

0x1dd7,	// (0x0001ccba) listscroll_gen_pane_ParamLimits

0x1dd7,	// (0x0001ccba) listscroll_gen_pane

0x907f,	// (0x00023f62) listscroll_set_pane

0x2a33,	// (0x0001d916) main_idle_act_pane

0x6542,	// (0x00021425) main_idle_trad_pane

0x6542,	// (0x00021425) main_list_empty_pane

0x9099,	// (0x00023f7c) main_midp_pane

0x90a5,	// (0x00023f88) main_pane_g1_ParamLimits

0x90a5,	// (0x00023f88) main_pane_g1

0x2a46,	// (0x0001d929) popup_ai_message_window_ParamLimits

0x2a46,	// (0x0001d929) popup_ai_message_window

0x2aca,	// (0x0001d9ad) popup_fep_china_uni_window_ParamLimits

0x2aca,	// (0x0001d9ad) popup_fep_china_uni_window

0x90d5,	// (0x00023fb8) popup_fep_japan_candidate_window_ParamLimits

0x90d5,	// (0x00023fb8) popup_fep_japan_candidate_window

0x90f3,	// (0x00023fd6) popup_fep_japan_predictive_window_ParamLimits

0x90f3,	// (0x00023fd6) popup_fep_japan_predictive_window

0x2b08,	// (0x0001d9eb) popup_find_window

0x2b21,	// (0x0001da04) popup_grid_graphic_window_ParamLimits

0x2b21,	// (0x0001da04) popup_grid_graphic_window

0x911f,	// (0x00024002) popup_large_graphic_colour_window

0x2b9d,	// (0x0001da80) popup_menu_window_ParamLimits

0x2b9d,	// (0x0001da80) popup_menu_window

0x2cfb,	// (0x0001dbde) popup_note_image_window

0x2cc3,	// (0x0001dba6) popup_note_wait_window_ParamLimits

0x2cc3,	// (0x0001dba6) popup_note_wait_window

0x2d11,	// (0x0001dbf4) popup_note_window_ParamLimits

0x2d11,	// (0x0001dbf4) popup_note_window

0x2da5,	// (0x0001dc88) popup_query_code_window_ParamLimits

0x2da5,	// (0x0001dc88) popup_query_code_window

0x913e,	// (0x00024021) popup_query_data_code_window_ParamLimits

0x913e,	// (0x00024021) popup_query_data_code_window

0x2ddd,	// (0x0001dcc0) popup_query_data_window_ParamLimits

0x2ddd,	// (0x0001dcc0) popup_query_data_window

0x2e51,	// (0x0001dd34) popup_query_sat_info_window_ParamLimits

0x2e51,	// (0x0001dd34) popup_query_sat_info_window

0x2ede,	// (0x0001ddc1) popup_snote_single_graphic_window_ParamLimits

0x2ede,	// (0x0001ddc1) popup_snote_single_graphic_window

0x2ede,	// (0x0001ddc1) popup_snote_single_text_window_ParamLimits

0x2ede,	// (0x0001ddc1) popup_snote_single_text_window

0x9153,	// (0x00024036) popup_sub_window_general

0x9195,	// (0x00024078) popup_window_general_ParamLimits

0x9195,	// (0x00024078) popup_window_general

0x91a8,	// (0x0002408b) power_save_pane

0xe1b9,	// (0x0002909c) control_pane_g1_ParamLimits

0xe1b9,	// (0x0002909c) control_pane_g1

0x7e57,	// (0x00022d3a) control_pane_g2_ParamLimits

0x7e57,	// (0x00022d3a) control_pane_g2

0x674e,	// (0x00021631) control_pane_g3_ParamLimits

0x674e,	// (0x00021631) control_pane_g3

0x0007,

0xf7c8,	// (0x0002a6ab) control_pane_g_ParamLimits

0xf7c8,	// (0x0002a6ab) control_pane_g

0xe1e6,	// (0x000290c9) control_pane_t1_ParamLimits

0xe1e6,	// (0x000290c9) control_pane_t1

0xe242,	// (0x00029125) control_pane_t2_ParamLimits

0xe242,	// (0x00029125) control_pane_t2

0x0002,

0xf7d9,	// (0x0002a6bc) control_pane_t_ParamLimits

0xf7d9,	// (0x0002a6bc) control_pane_t

0x6671,	// (0x00021554) navi_navi_volume_pane_cp1

0x667a,	// (0x0002155d) status_small_icon_pane

0x6682,	// (0x00021565) status_small_pane_g1_ParamLimits

0x6682,	// (0x00021565) status_small_pane_g1

0x66b6,	// (0x00021599) status_small_pane_g2_ParamLimits

0x66b6,	// (0x00021599) status_small_pane_g2

0x66c2,	// (0x000215a5) status_small_pane_g3_ParamLimits

0x66c2,	// (0x000215a5) status_small_pane_g3

0x66ce,	// (0x000215b1) status_small_pane_g4_ParamLimits

0x66ce,	// (0x000215b1) status_small_pane_g4

0x66da,	// (0x000215bd) status_small_pane_g5_ParamLimits

0x66da,	// (0x000215bd) status_small_pane_g5

0x66e7,	// (0x000215ca) status_small_pane_g6_ParamLimits

0x66e7,	// (0x000215ca) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002a69a) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002a69a) status_small_pane_g

0x6717,	// (0x000215fa) status_small_pane_t1

0x673a,	// (0x0002161d) status_small_wait_pane_ParamLimits

0x673a,	// (0x0002161d) status_small_wait_pane

0x279f,	// (0x0001d682) aid_levels_signal_ParamLimits

0x279f,	// (0x0001d682) aid_levels_signal

0x27b3,	// (0x0001d696) signal_pane_g1_ParamLimits

0x27b3,	// (0x0001d696) signal_pane_g1

0x27cd,	// (0x0001d6b0) signal_pane_g2_ParamLimits

0x27cd,	// (0x0001d6b0) signal_pane_g2

0x0001,

0xf74c,	// (0x0002a62f) signal_pane_g_ParamLimits

0xf74c,	// (0x0002a62f) signal_pane_g

0x60c9,	// (0x00020fac) context_pane_g1

0x21f9,	// (0x0001d0dc) title_pane_g1

0x223b,	// (0x0001d11e) title_pane_t1

0x4ede,	// (0x0001fdc1) title_pane_t2

0x4f04,	// (0x0001fde7) title_pane_t3

0x0002,

0xf59b,	// (0x0002a47e) title_pane_t

0x3336,	// (0x0001e219) aid_levels_battery_ParamLimits

0x3336,	// (0x0001e219) aid_levels_battery

0x334e,	// (0x0001e231) battery_pane_g1_ParamLimits

0x334e,	// (0x0001e231) battery_pane_g1

0x3369,	// (0x0001e24c) battery_pane_g2_ParamLimits

0x3369,	// (0x0001e24c) battery_pane_g2

0x0001,

0xf7eb,	// (0x0002a6ce) battery_pane_g_ParamLimits

0xf7eb,	// (0x0002a6ce) battery_pane_g

0x36d8,	// (0x0001e5bb) uni_indicator_pane_g1

0x36ed,	// (0x0001e5d0) uni_indicator_pane_g2

0x3703,	// (0x0001e5e6) uni_indicator_pane_g3

0x0005,

0xf94e,	// (0x0002a831) uni_indicator_pane_g

0x5c3d,	// (0x00020b20) navi_icon_pane_ParamLimits

0x5c3d,	// (0x00020b20) navi_icon_pane

0x4ec8,	// (0x0001fdab) navi_midp_pane

0x4ec8,	// (0x0001fdab) navi_navi_pane

0x5c3d,	// (0x00020b20) navi_text_pane_ParamLimits

0x5c3d,	// (0x00020b20) navi_text_pane

0x4e46,	// (0x0001fd29) status_small_wait_pane_g1

0x521f,	// (0x00020102) status_small_wait_pane_g2

0x0001,

0xf949,	// (0x0002a82c) status_small_wait_pane_g

0x367e,	// (0x0001e561) navi_navi_icon_text_pane

0x3698,	// (0x0001e57b) navi_navi_pane_g1_ParamLimits

0x3698,	// (0x0001e57b) navi_navi_pane_g1

0x3686,	// (0x0001e569) navi_navi_pane_g2_ParamLimits

0x3686,	// (0x0001e569) navi_navi_pane_g2

0x0001,

0xf917,	// (0x0002a7fa) navi_navi_pane_g_ParamLimits

0xf917,	// (0x0002a7fa) navi_navi_pane_g

0x36aa,	// (0x0001e58d) navi_navi_tabs_pane

0x367e,	// (0x0001e561) navi_navi_text_pane

0x367e,	// (0x0001e561) navi_navi_volume_pane

0x9fbe,	// (0x00024ea1) navi_text_pane_t1

0x9fb2,	// (0x00024e95) navi_icon_pane_g1

0x9f06,	// (0x00024de9) navi_navi_text_pane_t1

0x8213,	// (0x000230f6) navi_navi_volume_pane_g1

0xe431,	// (0x00029314) volume_small_pane

0x35d1,	// (0x0001e4b4) navi_navi_icon_text_pane_g1

0x35d9,	// (0x0001e4bc) navi_navi_icon_text_pane_t1

0x9ab4,	// (0x00024997) navi_tabs_2_long_pane

0x9ab4,	// (0x00024997) navi_tabs_2_pane

0x9ab4,	// (0x00024997) navi_tabs_3_long_pane

0x9ab4,	// (0x00024997) navi_tabs_3_pane

0x9ab4,	// (0x00024997) navi_tabs_4_pane

0xe411,	// (0x000292f4) tabs_2_active_pane_ParamLimits

0xe411,	// (0x000292f4) tabs_2_active_pane

0xe421,	// (0x00029304) tabs_2_passive_pane_ParamLimits

0xe421,	// (0x00029304) tabs_2_passive_pane

0xe3df,	// (0x000292c2) tabs_3_active_pane_ParamLimits

0xe3df,	// (0x000292c2) tabs_3_active_pane

0xe3ef,	// (0x000292d2) tabs_3_passive_pane_ParamLimits

0xe3ef,	// (0x000292d2) tabs_3_passive_pane

0xe400,	// (0x000292e3) tabs_3_passive_pane_cp_ParamLimits

0xe400,	// (0x000292e3) tabs_3_passive_pane_cp

0xe39b,	// (0x0002927e) tabs_4_active_pane_ParamLimits

0xe39b,	// (0x0002927e) tabs_4_active_pane

0xe3ac,	// (0x0002928f) tabs_4_passive_pane_ParamLimits

0xe3ac,	// (0x0002928f) tabs_4_passive_pane

0xe3bd,	// (0x000292a0) tabs_4_passive_pane_cp_ParamLimits

0xe3bd,	// (0x000292a0) tabs_4_passive_pane_cp

0xe3ce,	// (0x000292b1) tabs_4_passive_pane_cp2_ParamLimits

0xe3ce,	// (0x000292b1) tabs_4_passive_pane_cp2

0xe37b,	// (0x0002925e) tabs_2_long_active_pane_ParamLimits

0xe37b,	// (0x0002925e) tabs_2_long_active_pane

0xe38b,	// (0x0002926e) tabs_2_long_passive_pane_ParamLimits

0xe38b,	// (0x0002926e) tabs_2_long_passive_pane

0xe344,	// (0x00029227) tabs_3_long_active_pane_ParamLimits

0xe344,	// (0x00029227) tabs_3_long_active_pane

0xe357,	// (0x0002923a) tabs_3_long_passive_pane_ParamLimits

0xe357,	// (0x0002923a) tabs_3_long_passive_pane

0xe368,	// (0x0002924b) tabs_3_long_passive_pane_cp_ParamLimits

0xe368,	// (0x0002924b) tabs_3_long_passive_pane_cp

0x80ce,	// (0x00022fb1) volume_small_pane_g1

0x80d7,	// (0x00022fba) volume_small_pane_g2

0x80e0,	// (0x00022fc3) volume_small_pane_g3

0x80e9,	// (0x00022fcc) volume_small_pane_g4

0x80f2,	// (0x00022fd5) volume_small_pane_g5

0x80fb,	// (0x00022fde) volume_small_pane_g6

0x8104,	// (0x00022fe7) volume_small_pane_g7

0x810d,	// (0x00022ff0) volume_small_pane_g8

0x8116,	// (0x00022ff9) volume_small_pane_g9

0x811f,	// (0x00023002) volume_small_pane_g10

0x0009,

0xf8e3,	// (0x0002a7c6) volume_small_pane_g

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp2_ParamLimits

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp2

0x4f24,	// (0x0001fe07) tabs_3_active_pane_g1

0x22c8,	// (0x0001d1ab) tabs_3_active_pane_t1

0x4f16,	// (0x0001fdf9) bg_passive_tab_pane_cp2_ParamLimits

0x4f16,	// (0x0001fdf9) bg_passive_tab_pane_cp2

0x4f24,	// (0x0001fe07) tabs_3_passive_pane_g1

0x22c8,	// (0x0001d1ab) tabs_3_passive_pane_t1

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp3_ParamLimits

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp3

0xa500,	// (0x000253e3) tabs_4_active_pane_g1

0x22de,	// (0x0001d1c1) tabs_4_active_pane_t1

0x4f16,	// (0x0001fdf9) bg_passive_tab_pane_cp3_ParamLimits

0x4f16,	// (0x0001fdf9) bg_passive_tab_pane_cp3

0xa500,	// (0x000253e3) tabs_4_1_passive_pane_g1

0x22de,	// (0x0001d1c1) tabs_4_1_passive_pane_t1

0x9099,	// (0x00023f7c) list_highlight_pane_cp2

0x37bf,	// (0x0001e6a2) list_set_pane_ParamLimits

0x37bf,	// (0x0001e6a2) list_set_pane

0x384d,	// (0x0001e730) main_pane_set_t1_ParamLimits

0x384d,	// (0x0001e730) main_pane_set_t1

0x386d,	// (0x0001e750) main_pane_set_t2_ParamLimits

0x386d,	// (0x0001e750) main_pane_set_t2

0x3881,	// (0x0001e764) main_pane_set_t3_ParamLimits

0x3881,	// (0x0001e764) main_pane_set_t3

0x3893,	// (0x0001e776) main_pane_set_t4_ParamLimits

0x3893,	// (0x0001e776) main_pane_set_t4

0x0003,

0xf9b3,	// (0x0002a896) main_pane_set_t_ParamLimits

0xf9b3,	// (0x0002a896) main_pane_set_t

0x38a5,	// (0x0001e788) setting_code_pane

0x38ad,	// (0x0001e790) setting_slider_graphic_pane

0x38ad,	// (0x0001e790) setting_slider_pane

0x38ad,	// (0x0001e790) setting_text_pane

0x38ad,	// (0x0001e790) setting_volume_pane

0xe152,	// (0x00029035) volume_set_pane

0x4f2c,	// (0x0001fe0f) bg_set_opt_pane_cp

0x7501,	// (0x000223e4) setting_slider_pane_t1

0xe15a,	// (0x0002903d) setting_slider_pane_t2

0xe173,	// (0x00029056) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002a485) setting_slider_pane_t

0x7547,	// (0x0002242a) slider_set_pane

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp2

0x4f66,	// (0x0001fe49) setting_slider_graphic_pane_g1

0xe18a,	// (0x0002906d) setting_slider_graphic_pane_t1

0xe199,	// (0x0002907c) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002a48c) setting_slider_graphic_pane_t

0xe1a8,	// (0x0002908b) slider_set_pane_cp

0x4ec8,	// (0x0001fdab) input_focus_pane_cp1

0xa443,	// (0x00025326) list_set_text_pane

0x4e46,	// (0x0001fd29) setting_text_pane_g1

0x4ec8,	// (0x0001fdab) input_focus_pane_cp2

0x4e46,	// (0x0001fd29) setting_code_pane_g1

0x4f6f,	// (0x0001fe52) setting_code_pane_t1

0x1858,	// (0x0001c73b) set_text_pane_t1_ParamLimits

0x1858,	// (0x0001c73b) set_text_pane_t1

0x5bd8,	// (0x00020abb) set_opt_bg_pane_g1

0x5be0,	// (0x00020ac3) set_opt_bg_pane_g2

0x377f,	// (0x0001e662) set_opt_bg_pane_g3

0x5bf0,	// (0x00020ad3) set_opt_bg_pane_g4

0x5bf8,	// (0x00020adb) set_opt_bg_pane_g5

0x5c00,	// (0x00020ae3) set_opt_bg_pane_g6

0x3787,	// (0x0001e66a) set_opt_bg_pane_g7

0x378f,	// (0x0001e672) set_opt_bg_pane_g8

0x3797,	// (0x0001e67a) set_opt_bg_pane_g9

0x0008,

0xf9a0,	// (0x0002a883) set_opt_bg_pane_g

0xa436,	// (0x00025319) slider_set_pane_g1

0x8288,	// (0x0002316b) slider_set_pane_g2

0x0006,

0xf991,	// (0x0002a874) slider_set_pane_g

0xe43a,	// (0x0002931d) volume_set_pane_g1

0xe442,	// (0x00029325) volume_set_pane_g2

0xe44a,	// (0x0002932d) volume_set_pane_g3

0xe452,	// (0x00029335) volume_set_pane_g4

0xe45a,	// (0x0002933d) volume_set_pane_g5

0xe462,	// (0x00029345) volume_set_pane_g6

0xe46a,	// (0x0002934d) volume_set_pane_g7

0xe472,	// (0x00029355) volume_set_pane_g8

0xe47a,	// (0x0002935d) volume_set_pane_g9

0xe482,	// (0x00029365) volume_set_pane_g10

0x0009,

0xf969,	// (0x0002a84c) volume_set_pane_g

0x2352,	// (0x0001d235) indicator_pane_ParamLimits

0x2352,	// (0x0001d235) indicator_pane

0x237a,	// (0x0001d25d) main_idle_pane_g2_ParamLimits

0x237a,	// (0x0001d25d) main_idle_pane_g2

0x23aa,	// (0x0001d28d) main_pane_idle_g1_ParamLimits

0x23aa,	// (0x0001d28d) main_pane_idle_g1

0x4f7d,	// (0x0001fe60) popup_clock_digital_analogue_window_ParamLimits

0x4f7d,	// (0x0001fe60) popup_clock_digital_analogue_window

0x23cf,	// (0x0001d2b2) soft_indicator_pane_ParamLimits

0x23cf,	// (0x0001d2b2) soft_indicator_pane

0x23e9,	// (0x0001d2cc) wallpaper_pane_ParamLimits

0x23e9,	// (0x0001d2cc) wallpaper_pane

0x4e46,	// (0x0001fd29) wallpaper_pane_g1

0x23fb,	// (0x0001d2de) indicator_pane_g1_ParamLimits

0x23fb,	// (0x0001d2de) indicator_pane_g1

0xa56b,	// (0x0002544e) navi_navi_icon_text_pane_srt_g1

0x4fab,	// (0x0001fe8e) soft_indicator_pane_t1

0x4fc5,	// (0x0001fea8) aid_ps_area_pane

0x2414,	// (0x0001d2f7) aid_ps_clock_pane

0x4fd6,	// (0x0001feb9) aid_ps_indicator_pane

0x4fe2,	// (0x0001fec5) indicator_ps_pane_ParamLimits

0x4fe2,	// (0x0001fec5) indicator_ps_pane

0x4ff1,	// (0x0001fed4) power_save_pane_g1_ParamLimits

0x4ff1,	// (0x0001fed4) power_save_pane_g1

0x4ffd,	// (0x0001fee0) power_save_pane_g2_ParamLimits

0x4ffd,	// (0x0001fee0) power_save_pane_g2

0x7149,	// (0x0002202c) aid_navinavi_width_pane

0x4fc5,	// (0x0001fea8) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002a491) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002a491) power_save_pane_g

0x500b,	// (0x0001feee) power_save_pane_t1_ParamLimits

0x500b,	// (0x0001feee) power_save_pane_t1

0x2414,	// (0x0001d2f7) aid_ps_clock_pane_ParamLimits

0x4fd6,	// (0x0001feb9) aid_ps_indicator_pane_ParamLimits

0x501d,	// (0x0001ff00) power_save_pane_t4_ParamLimits

0x501d,	// (0x0001ff00) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002a496) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002a496) power_save_pane_t

0x5047,	// (0x0001ff2a) power_save_t3_ParamLimits

0x5047,	// (0x0001ff2a) power_save_t3

0x5032,	// (0x0001ff15) power_save_t2_ParamLimits

0x5032,	// (0x0001ff15) power_save_t2

0x505c,	// (0x0001ff3f) indicator_ps_pane_g1

0x2420,	// (0x0001d303) ai_gene_pane_ParamLimits

0x2420,	// (0x0001d303) ai_gene_pane

0x2437,	// (0x0001d31a) ai_links_pane_ParamLimits

0x2437,	// (0x0001d31a) ai_links_pane

0x2449,	// (0x0001d32c) indicator_pane_cp1_ParamLimits

0x2449,	// (0x0001d32c) indicator_pane_cp1

0x2458,	// (0x0001d33b) main_pane_idle_g1_cp_ParamLimits

0x2458,	// (0x0001d33b) main_pane_idle_g1_cp

0x5065,	// (0x0001ff48) popup_ai_links_title_window

0x2470,	// (0x0001d353) soft_indicator_pane_cp1_ParamLimits

0x2470,	// (0x0001d353) soft_indicator_pane_cp1

0xa278,	// (0x0002515b) ai_links_pane_g1

0xa281,	// (0x00025164) grid_ai_links_pane

0x36cf,	// (0x0001e5b2) ai_gene_pane_1

0xa266,	// (0x00025149) ai_gene_pane_2

0xa26f,	// (0x00025152) list_highlight_pane_cp4

0x36b3,	// (0x0001e596) cell_ai_link_pane_ParamLimits

0x36b3,	// (0x0001e596) cell_ai_link_pane

0xa25e,	// (0x00025141) cell_ai_link_pane_g1

0x521f,	// (0x00020102) cell_ai_link_pane_g2

0x0001,

0xf944,	// (0x0002a827) cell_ai_link_pane_g

0x4ec8,	// (0x0001fdab) grid_highlight_cp2

0x4ec8,	// (0x0001fdab) bg_popup_sub_pane_cp1

0x507c,	// (0x0001ff5f) popup_ai_links_title_window_t1

0xa1b0,	// (0x00025093) ai_gene_pane_1_g1_ParamLimits

0xa1b0,	// (0x00025093) ai_gene_pane_1_g1

0xa1bc,	// (0x0002509f) ai_gene_pane_1_g2_ParamLimits

0xa1bc,	// (0x0002509f) ai_gene_pane_1_g2

0x0001,

0xf93a,	// (0x0002a81d) ai_gene_pane_1_g_ParamLimits

0xf93a,	// (0x0002a81d) ai_gene_pane_1_g

0xa1c9,	// (0x000250ac) ai_gene_pane_1_t1_ParamLimits

0xa1c9,	// (0x000250ac) ai_gene_pane_1_t1

0xa1fd,	// (0x000250e0) grid_ai_soft_ind_pane

0xa19b,	// (0x0002507e) ai_gene_pane_2_t1_ParamLimits

0xa19b,	// (0x0002507e) ai_gene_pane_2_t1

0x2484,	// (0x0001d367) main_pane_empty_t1_ParamLimits

0x2484,	// (0x0001d367) main_pane_empty_t1

0x24a1,	// (0x0001d384) main_pane_empty_t2_ParamLimits

0x24a1,	// (0x0001d384) main_pane_empty_t2

0x24b9,	// (0x0001d39c) main_pane_empty_t3_ParamLimits

0x24b9,	// (0x0001d39c) main_pane_empty_t3

0x24cc,	// (0x0001d3af) main_pane_empty_t4_ParamLimits

0x24cc,	// (0x0001d3af) main_pane_empty_t4

0x24df,	// (0x0001d3c2) main_pane_empty_t5_ParamLimits

0x24df,	// (0x0001d3c2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002a49b) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002a49b) main_pane_empty_t

0x5c3d,	// (0x00020b20) bg_popup_window_pane_ParamLimits

0x5c3d,	// (0x00020b20) bg_popup_window_pane

0x9f15,	// (0x00024df8) find_popup_pane_cp2_ParamLimits

0x9f15,	// (0x00024df8) find_popup_pane_cp2

0x9f21,	// (0x00024e04) heading_pane_ParamLimits

0x9f21,	// (0x00024e04) heading_pane

0x4ec8,	// (0x0001fdab) bg_popup_sub_pane

0x35f6,	// (0x0001e4d9) bg_popup_window_pane_g1_ParamLimits

0x35f6,	// (0x0001e4d9) bg_popup_window_pane_g1

0x3605,	// (0x0001e4e8) bg_popup_window_pane_g2_ParamLimits

0x3605,	// (0x0001e4e8) bg_popup_window_pane_g2

0x3611,	// (0x0001e4f4) bg_popup_window_pane_g3_ParamLimits

0x3611,	// (0x0001e4f4) bg_popup_window_pane_g3

0x361d,	// (0x0001e500) bg_popup_window_pane_g4_ParamLimits

0x361d,	// (0x0001e500) bg_popup_window_pane_g4

0x362c,	// (0x0001e50f) bg_popup_window_pane_g5_ParamLimits

0x362c,	// (0x0001e50f) bg_popup_window_pane_g5

0x363c,	// (0x0001e51f) bg_popup_window_pane_g6_ParamLimits

0x363c,	// (0x0001e51f) bg_popup_window_pane_g6

0x3648,	// (0x0001e52b) bg_popup_window_pane_g7_ParamLimits

0x3648,	// (0x0001e52b) bg_popup_window_pane_g7

0x3657,	// (0x0001e53a) bg_popup_window_pane_g8_ParamLimits

0x3657,	// (0x0001e53a) bg_popup_window_pane_g8

0x3666,	// (0x0001e549) bg_popup_window_pane_g9_ParamLimits

0x3666,	// (0x0001e549) bg_popup_window_pane_g9

0x9efa,	// (0x00024ddd) bg_popup_window_pane_g10_ParamLimits

0x9efa,	// (0x00024ddd) bg_popup_window_pane_g10

0x0009,

0xf902,	// (0x0002a7e5) bg_popup_window_pane_g_ParamLimits

0xf902,	// (0x0002a7e5) bg_popup_window_pane_g

0x9eb1,	// (0x00024d94) bg_popup_heading_pane_ParamLimits

0x9eb1,	// (0x00024d94) bg_popup_heading_pane

0x8310,	// (0x000231f3) tabs_4_passive_pane_cp_srt_ParamLimits

0x8310,	// (0x000231f3) tabs_4_passive_pane_cp_srt

0x8322,	// (0x00023205) tabs_4_passive_pane_srt_ParamLimits

0x9ec5,	// (0x00024da8) heading_pane_g2

0x8322,	// (0x00023205) tabs_4_passive_pane_srt

0x9445,	// (0x00024328) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9445,	// (0x00024328) bg_passive_tab_pane_cp3_srt

0x9ecd,	// (0x00024db0) heading_pane_t1_ParamLimits

0x9ecd,	// (0x00024db0) heading_pane_t1

0x9ee4,	// (0x00024dc7) heading_pane_t2_ParamLimits

0x9ee4,	// (0x00024dc7) heading_pane_t2

0x0001,

0xf8fd,	// (0x0002a7e0) heading_pane_t_ParamLimits

0xf8fd,	// (0x0002a7e0) heading_pane_t

0x9a34,	// (0x00024917) bg_popup_heading_pane_g1

0x9ac5,	// (0x000249a8) bg_popup_heading_pane_g2

0x9acd,	// (0x000249b0) bg_popup_heading_pane_g3

0x9ad5,	// (0x000249b8) bg_popup_heading_pane_g4

0x9add,	// (0x000249c0) bg_popup_heading_pane_g5

0x9ae5,	// (0x000249c8) bg_popup_heading_pane_g6

0x9aed,	// (0x000249d0) bg_popup_heading_pane_g7

0x9af5,	// (0x000249d8) bg_popup_heading_pane_g8

0x9afd,	// (0x000249e0) bg_popup_heading_pane_g9

0x0008,

0xf8b9,	// (0x0002a79c) bg_popup_heading_pane_g

0x9357,	// (0x0002423a) bg_popup_sub_pane_g1

0x9367,	// (0x0002424a) bg_popup_sub_pane_g2

0x935f,	// (0x00024242) bg_popup_sub_pane_g3

0x9377,	// (0x0002425a) bg_popup_sub_pane_g4

0x936f,	// (0x00024252) bg_popup_sub_pane_g5

0x937f,	// (0x00024262) bg_popup_sub_pane_g6

0x9387,	// (0x0002426a) bg_popup_sub_pane_g7

0x9397,	// (0x0002427a) bg_popup_sub_pane_g8

0x938f,	// (0x00024272) bg_popup_sub_pane_g9

0x0008,

0xf893,	// (0x0002a776) bg_popup_sub_pane_g

0x4f16,	// (0x0001fdf9) bg_popup_window_pane_cp5_ParamLimits

0x4f16,	// (0x0001fdf9) bg_popup_window_pane_cp5

0x5099,	// (0x0001ff7c) popup_note_window_g1_ParamLimits

0x5099,	// (0x0001ff7c) popup_note_window_g1

0x50a5,	// (0x0001ff88) popup_note_window_t1_ParamLimits

0x50a5,	// (0x0001ff88) popup_note_window_t1

0x50bb,	// (0x0001ff9e) popup_note_window_t2_ParamLimits

0x50bb,	// (0x0001ff9e) popup_note_window_t2

0x50d1,	// (0x0001ffb4) popup_note_window_t3_ParamLimits

0x50d1,	// (0x0001ffb4) popup_note_window_t3

0x50e7,	// (0x0001ffca) popup_note_window_t4_ParamLimits

0x50e7,	// (0x0001ffca) popup_note_window_t4

0x510f,	// (0x0001fff2) popup_note_window_t5_ParamLimits

0x510f,	// (0x0001fff2) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002a4a6) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002a4a6) popup_note_window_t

0x5133,	// (0x00020016) bg_popup_window_pane_cp6_ParamLimits

0x5133,	// (0x00020016) bg_popup_window_pane_cp6

0x99b0,	// (0x00024893) popup_note_image_window_g1_ParamLimits

0x99b0,	// (0x00024893) popup_note_image_window_g1

0x99bc,	// (0x0002489f) popup_note_image_window_g2_ParamLimits

0x99bc,	// (0x0002489f) popup_note_image_window_g2

0x0001,

0xf887,	// (0x0002a76a) popup_note_image_window_g_ParamLimits

0xf887,	// (0x0002a76a) popup_note_image_window_g

0x99d5,	// (0x000248b8) popup_note_image_window_t1_ParamLimits

0x99d5,	// (0x000248b8) popup_note_image_window_t1

0x99ee,	// (0x000248d1) popup_note_image_window_t2_ParamLimits

0x99ee,	// (0x000248d1) popup_note_image_window_t2

0x9a07,	// (0x000248ea) popup_note_image_window_t3_ParamLimits

0x9a07,	// (0x000248ea) popup_note_image_window_t3

0x0002,

0xf88c,	// (0x0002a76f) popup_note_image_window_t_ParamLimits

0xf88c,	// (0x0002a76f) popup_note_image_window_t

0x989b,	// (0x0002477e) bg_popup_window_pane_cp7_ParamLimits

0x989b,	// (0x0002477e) bg_popup_window_pane_cp7

0x98cb,	// (0x000247ae) popup_note_wait_window_g1_ParamLimits

0x98cb,	// (0x000247ae) popup_note_wait_window_g1

0x98d7,	// (0x000247ba) popup_note_wait_window_g2_ParamLimits

0x98d7,	// (0x000247ba) popup_note_wait_window_g2

0x0002,

0xf875,	// (0x0002a758) popup_note_wait_window_g_ParamLimits

0xf875,	// (0x0002a758) popup_note_wait_window_g

0x98ef,	// (0x000247d2) popup_note_wait_window_t1_ParamLimits

0x98ef,	// (0x000247d2) popup_note_wait_window_t1

0x9916,	// (0x000247f9) popup_note_wait_window_t2_ParamLimits

0x9916,	// (0x000247f9) popup_note_wait_window_t2

0x9933,	// (0x00024816) popup_note_wait_window_t3_ParamLimits

0x9933,	// (0x00024816) popup_note_wait_window_t3

0x9946,	// (0x00024829) popup_note_wait_window_t4_ParamLimits

0x9946,	// (0x00024829) popup_note_wait_window_t4

0x0004,

0xf87c,	// (0x0002a75f) popup_note_wait_window_t_ParamLimits

0xf87c,	// (0x0002a75f) popup_note_wait_window_t

0x996b,	// (0x0002484e) wait_bar_pane_ParamLimits

0x996b,	// (0x0002484e) wait_bar_pane

0x4ec8,	// (0x0001fdab) wait_anim_pane

0x4ec8,	// (0x0001fdab) wait_border_pane

0x4e46,	// (0x0001fd29) wait_anim_pane_g1

0x4e46,	// (0x0001fd29) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002a62a) wait_anim_pane_g

0x984b,	// (0x0002472e) wait_border_pane_g1

0x9854,	// (0x00024737) wait_border_pane_g2

0x985d,	// (0x00024740) wait_border_pane_g3

0x0002,

0xf86e,	// (0x0002a751) wait_border_pane_g

0x97ad,	// (0x00024690) bg_popup_window_pane_cp16_ParamLimits

0x97ad,	// (0x00024690) bg_popup_window_pane_cp16

0x97bb,	// (0x0002469e) indicator_popup_pane_cp4_ParamLimits

0x97bb,	// (0x0002469e) indicator_popup_pane_cp4

0x97cf,	// (0x000246b2) popup_query_data_window_t1_ParamLimits

0x97cf,	// (0x000246b2) popup_query_data_window_t1

0x97e1,	// (0x000246c4) popup_query_data_window_t2_ParamLimits

0x97e1,	// (0x000246c4) popup_query_data_window_t2

0x97fa,	// (0x000246dd) popup_query_data_window_t3_ParamLimits

0x97fa,	// (0x000246dd) popup_query_data_window_t3

0x0002,

0xf867,	// (0x0002a74a) popup_query_data_window_t_ParamLimits

0xf867,	// (0x0002a74a) popup_query_data_window_t

0x9814,	// (0x000246f7) query_popup_data_pane_ParamLimits

0x9814,	// (0x000246f7) query_popup_data_pane

0x9828,	// (0x0002470b) query_popup_data_pane_cp1_ParamLimits

0x9828,	// (0x0002470b) query_popup_data_pane_cp1

0x5133,	// (0x00020016) bg_popup_window_pane_cp10_ParamLimits

0x5133,	// (0x00020016) bg_popup_window_pane_cp10

0x9710,	// (0x000245f3) indicator_popup_pane_ParamLimits

0x9710,	// (0x000245f3) indicator_popup_pane

0x518a,	// (0x0002006d) popup_query_code_window_t1_ParamLimits

0x518a,	// (0x0002006d) popup_query_code_window_t1

0x9728,	// (0x0002460b) popup_query_code_window_t2_ParamLimits

0x9728,	// (0x0002460b) popup_query_code_window_t2

0x9766,	// (0x00024649) popup_query_code_window_t3_ParamLimits

0x9766,	// (0x00024649) popup_query_code_window_t3

0x0002,

0xf860,	// (0x0002a743) popup_query_code_window_t_ParamLimits

0xf860,	// (0x0002a743) popup_query_code_window_t

0x9795,	// (0x00024678) query_popup_pane_ParamLimits

0x9795,	// (0x00024678) query_popup_pane

0x5133,	// (0x00020016) bg_popup_window_pane_cp15_ParamLimits

0x5133,	// (0x00020016) bg_popup_window_pane_cp15

0x5151,	// (0x00020034) indicator_popup_pane_cp1_ParamLimits

0x5151,	// (0x00020034) indicator_popup_pane_cp1

0x5164,	// (0x00020047) indicator_popup_pane_cp2_ParamLimits

0x5164,	// (0x00020047) indicator_popup_pane_cp2

0x5177,	// (0x0002005a) popup_query_data_code_window_g1_ParamLimits

0x5177,	// (0x0002005a) popup_query_data_code_window_g1

0x518a,	// (0x0002006d) popup_query_data_code_window_t1_ParamLimits

0x518a,	// (0x0002006d) popup_query_data_code_window_t1

0x519c,	// (0x0002007f) popup_query_data_code_window_t2_ParamLimits

0x519c,	// (0x0002007f) popup_query_data_code_window_t2

0x51ae,	// (0x00020091) popup_query_data_code_window_t3_ParamLimits

0x51ae,	// (0x00020091) popup_query_data_code_window_t3

0x51c4,	// (0x000200a7) popup_query_data_code_window_t4_ParamLimits

0x51c4,	// (0x000200a7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002a4b1) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002a4b1) popup_query_data_code_window_t

0x7fe9,	// (0x00022ecc) list_single_midp_graphic_pane_g3

0x51dc,	// (0x000200bf) query_popup_data_pane_cp2_ParamLimits

0x51ef,	// (0x000200d2) query_popup_pane_cp2_ParamLimits

0x51ef,	// (0x000200d2) query_popup_pane_cp2

0x4ec8,	// (0x0001fdab) bg_popup_window_pane_cp11

0x96e4,	// (0x000245c7) heading_pane_cp5

0x527b,	// (0x0002015e) listscroll_popup_info_pane

0x4ec8,	// (0x0001fdab) input_focus_pane_cp3

0x5202,	// (0x000200e5) query_popup_pane_t1

0x5210,	// (0x000200f3) list_popup_info_pane_ParamLimits

0x5210,	// (0x000200f3) list_popup_info_pane

0x521f,	// (0x00020102) listscroll_popup_info_pane_g1

0x5227,	// (0x0002010a) scroll_pane_cp7

0x522f,	// (0x00020112) popup_info_list_pane_t1_ParamLimits

0x522f,	// (0x00020112) popup_info_list_pane_t1

0x5249,	// (0x0002012c) popup_info_list_pane_t2_ParamLimits

0x5249,	// (0x0002012c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002a4ba) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002a4ba) popup_info_list_pane_t

0x4ec8,	// (0x0001fdab) bg_popup_window_pane_cp12

0xa585,	// (0x00025468) find_popup_pane

0x4f2c,	// (0x0001fe0f) bg_popup_window_pane_cp3

0x5263,	// (0x00020146) heading_pane_cp3

0x526f,	// (0x00020152) listscroll_popup_graphic_pane

0x4ec8,	// (0x0001fdab) bg_popup_window_pane_cp4

0x2542,	// (0x0001d425) heading_pane_cp4

0x527b,	// (0x0002015e) listscroll_popup_colour_pane

0x5283,	// (0x00020166) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5283,	// (0x00020166) cell_large_graphic_colour_none_popup_pane

0x254a,	// (0x0001d42d) grid_large_graphic_colour_popup_pane_ParamLimits

0x254a,	// (0x0001d42d) grid_large_graphic_colour_popup_pane

0x2566,	// (0x0001d449) listscroll_popup_colour_pane_g1_ParamLimits

0x2566,	// (0x0001d449) listscroll_popup_colour_pane_g1

0x257d,	// (0x0001d460) listscroll_popup_colour_pane_g2_ParamLimits

0x257d,	// (0x0001d460) listscroll_popup_colour_pane_g2

0x5293,	// (0x00020176) listscroll_popup_colour_pane_g3_ParamLimits

0x5293,	// (0x00020176) listscroll_popup_colour_pane_g3

0x2591,	// (0x0001d474) listscroll_popup_colour_pane_g4_ParamLimits

0x2591,	// (0x0001d474) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002a4bf) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002a4bf) listscroll_popup_colour_pane_g

0x52a3,	// (0x00020186) scroll_pane_cp6_ParamLimits

0x52a3,	// (0x00020186) scroll_pane_cp6

0x25a0,	// (0x0001d483) cell_large_graphic_colour_popup_pane_ParamLimits

0x25a0,	// (0x0001d483) cell_large_graphic_colour_popup_pane

0x52b5,	// (0x00020198) cell_large_graphic_colour_none_popup_pane_t1

0x4ec8,	// (0x0001fdab) grid_highlight_pane_cp5

0x52c4,	// (0x000201a7) cell_large_graphic_colour_popup_pane_g1

0x52cc,	// (0x000201af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002a4c8) cell_large_graphic_colour_popup_pane_g

0x52d4,	// (0x000201b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x52dd,	// (0x000201c0) grid_highlight_pane_cp4

0x52e5,	// (0x000201c8) bg_popup_window_pane_cp8_ParamLimits

0x52e5,	// (0x000201c8) bg_popup_window_pane_cp8

0x5300,	// (0x000201e3) popup_snote_single_text_window_g1_ParamLimits

0x5300,	// (0x000201e3) popup_snote_single_text_window_g1

0x5312,	// (0x000201f5) popup_snote_single_text_window_t1_ParamLimits

0x5312,	// (0x000201f5) popup_snote_single_text_window_t1

0x5325,	// (0x00020208) popup_snote_single_text_window_t2_ParamLimits

0x5325,	// (0x00020208) popup_snote_single_text_window_t2

0x5338,	// (0x0002021b) popup_snote_single_text_window_t3_ParamLimits

0x5338,	// (0x0002021b) popup_snote_single_text_window_t3

0x5371,	// (0x00020254) popup_snote_single_text_window_t4_ParamLimits

0x5371,	// (0x00020254) popup_snote_single_text_window_t4

0x53a5,	// (0x00020288) popup_snote_single_text_window_t5_ParamLimits

0x53a5,	// (0x00020288) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002a4cd) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002a4cd) popup_snote_single_text_window_t

0x53d4,	// (0x000202b7) bg_popup_window_pane_cp9_ParamLimits

0x53d4,	// (0x000202b7) bg_popup_window_pane_cp9

0x5300,	// (0x000201e3) popup_snote_single_graphic_window_g1_ParamLimits

0x5300,	// (0x000201e3) popup_snote_single_graphic_window_g1

0x53e2,	// (0x000202c5) popup_snote_single_graphic_window_g2_ParamLimits

0x53e2,	// (0x000202c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002a4d8) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002a4d8) popup_snote_single_graphic_window_g

0x53ee,	// (0x000202d1) popup_snote_single_graphic_window_t1_ParamLimits

0x53ee,	// (0x000202d1) popup_snote_single_graphic_window_t1

0x5401,	// (0x000202e4) popup_snote_single_graphic_window_t2_ParamLimits

0x5401,	// (0x000202e4) popup_snote_single_graphic_window_t2

0x5338,	// (0x0002021b) popup_snote_single_graphic_window_t3_ParamLimits

0x5338,	// (0x0002021b) popup_snote_single_graphic_window_t3

0x5371,	// (0x00020254) popup_snote_single_graphic_window_t4_ParamLimits

0x5371,	// (0x00020254) popup_snote_single_graphic_window_t4

0x53a5,	// (0x00020288) popup_snote_single_graphic_window_t5_ParamLimits

0x53a5,	// (0x00020288) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002a4dd) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002a4dd) popup_snote_single_graphic_window_t

0x39a8,	// (0x0001e88b) grid_graphic_popup_pane_ParamLimits

0x39a8,	// (0x0001e88b) grid_graphic_popup_pane

0x39cb,	// (0x0001e8ae) listscroll_popup_graphic_pane_g1_ParamLimits

0x39cb,	// (0x0001e8ae) listscroll_popup_graphic_pane_g1

0x39df,	// (0x0001e8c2) listscroll_popup_graphic_pane_g2_ParamLimits

0x39df,	// (0x0001e8c2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9dd,	// (0x0002a8c0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9dd,	// (0x0002a8c0) listscroll_popup_graphic_pane_g

0xa53d,	// (0x00025420) scroll_pane_cp5

0x3963,	// (0x0001e846) cell_graphic_popup_pane_ParamLimits

0x3963,	// (0x0001e846) cell_graphic_popup_pane

0xa508,	// (0x000253eb) cell_graphic_popup_pane_g1

0xa510,	// (0x000253f3) cell_graphic_popup_pane_g2

0x52d4,	// (0x000201b7) cell_graphic_popup_pane_g3

0x0002,

0xf9d6,	// (0x0002a8b9) cell_graphic_popup_pane_g

0xa519,	// (0x000253fc) cell_graphic_popup_pane_t2

0x52dd,	// (0x000201c0) grid_highlight_pane_cp3

0x5426,	// (0x00020309) list_gen_pane_ParamLimits

0x5426,	// (0x00020309) list_gen_pane

0x544f,	// (0x00020332) scroll_pane

0x3936,	// (0x0001e819) bg_list_pane_g1_ParamLimits

0x3936,	// (0x0001e819) bg_list_pane_g1

0xa4b7,	// (0x0002539a) bg_list_pane_g2_ParamLimits

0xa4b7,	// (0x0002539a) bg_list_pane_g2

0xa4ca,	// (0x000253ad) bg_list_pane_g3_ParamLimits

0xa4ca,	// (0x000253ad) bg_list_pane_g3

0xa4dc,	// (0x000253bf) bg_list_pane_g4_ParamLimits

0xa4dc,	// (0x000253bf) bg_list_pane_g4

0x3951,	// (0x0001e834) bg_list_pane_g5_ParamLimits

0x3951,	// (0x0001e834) bg_list_pane_g5

0x0004,

0xf9cb,	// (0x0002a8ae) bg_list_pane_g_ParamLimits

0xf9cb,	// (0x0002a8ae) bg_list_pane_g

0x38da,	// (0x0001e7bd) list_double2_graphic_large_graphic_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double2_graphic_large_graphic_pane

0x38da,	// (0x0001e7bd) list_double2_graphic_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double2_graphic_pane

0x38da,	// (0x0001e7bd) list_double2_large_graphic_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double2_large_graphic_pane

0x38ec,	// (0x0001e7cf) list_double2_pane_ParamLimits

0x38ec,	// (0x0001e7cf) list_double2_pane

0x38da,	// (0x0001e7bd) list_double_graphic_heading_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_graphic_heading_pane

0x38da,	// (0x0001e7bd) list_double_graphic_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_graphic_pane

0x38da,	// (0x0001e7bd) list_double_heading_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_heading_pane

0x38da,	// (0x0001e7bd) list_double_large_graphic_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_large_graphic_pane

0x38da,	// (0x0001e7bd) list_double_number_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_number_pane

0x38da,	// (0x0001e7bd) list_double_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_pane

0x38da,	// (0x0001e7bd) list_double_time_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_double_time_pane

0x38da,	// (0x0001e7bd) list_setting_number_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_setting_number_pane

0x38da,	// (0x0001e7bd) list_setting_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_setting_pane

0x1e3f,	// (0x0001cd22) list_single_2graphic_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_2graphic_pane

0x1e3f,	// (0x0001cd22) list_single_graphic_heading_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_graphic_heading_pane

0x1e3f,	// (0x0001cd22) list_single_graphic_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_graphic_pane

0x1e3f,	// (0x0001cd22) list_single_heading_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_heading_pane

0x38da,	// (0x0001e7bd) list_single_large_graphic_pane_ParamLimits

0x38da,	// (0x0001e7bd) list_single_large_graphic_pane

0x1e3f,	// (0x0001cd22) list_single_number_heading_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_number_heading_pane

0x1e3f,	// (0x0001cd22) list_single_number_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_number_pane

0x1e3f,	// (0x0001cd22) list_single_pane_ParamLimits

0x1e3f,	// (0x0001cd22) list_single_pane

0x4ec8,	// (0x0001fdab) list_highlight_pane_cp1

0xb1cf,	// (0x000260b2) list_single_pane_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_single_pane_g1

0xb1db,	// (0x000260be) list_single_pane_g2_ParamLimits

0xb1db,	// (0x000260be) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_single_pane_g

0xb34e,	// (0x00026231) list_single_pane_t1_ParamLimits

0xb34e,	// (0x00026231) list_single_pane_t1

0xb1cf,	// (0x000260b2) list_single_number_pane_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_single_number_pane_g1

0xb1db,	// (0x000260be) list_single_number_pane_g2_ParamLimits

0xb1db,	// (0x000260be) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_single_number_pane_g

0xb1e7,	// (0x000260ca) list_single_number_pane_t1_ParamLimits

0xb1e7,	// (0x000260ca) list_single_number_pane_t1

0x1e02,	// (0x0001cce5) list_single_number_pane_t2_ParamLimits

0x1e02,	// (0x0001cce5) list_single_number_pane_t2

0x0001,

0xf98c,	// (0x0002a86f) list_single_number_pane_t_ParamLimits

0xf98c,	// (0x0002a86f) list_single_number_pane_t

0xaa9c,	// (0x0002597f) list_single_graphic_pane_g1_ParamLimits

0xaa9c,	// (0x0002597f) list_single_graphic_pane_g1

0xb1cf,	// (0x000260b2) list_single_graphic_pane_g2_ParamLimits

0xb1cf,	// (0x000260b2) list_single_graphic_pane_g2

0xb1db,	// (0x000260be) list_single_graphic_pane_g3_ParamLimits

0xb1db,	// (0x000260be) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002a4e8) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002a4e8) list_single_graphic_pane_g

0xb1e7,	// (0x000260ca) list_single_graphic_pane_t1_ParamLimits

0xb1e7,	// (0x000260ca) list_single_graphic_pane_t1

0xb1cf,	// (0x000260b2) list_single_heading_pane_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_single_heading_pane_g1

0xb1db,	// (0x000260be) list_single_heading_pane_g2_ParamLimits

0xb1db,	// (0x000260be) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_single_heading_pane_g

0x1872,	// (0x0001c755) list_single_heading_pane_t1_ParamLimits

0x1872,	// (0x0001c755) list_single_heading_pane_t1

0x1888,	// (0x0001c76b) list_single_heading_pane_t2_ParamLimits

0x1888,	// (0x0001c76b) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002a4f4) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002a4f4) list_single_heading_pane_t

0xb1cf,	// (0x000260b2) list_single_number_heading_pane_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_single_number_heading_pane_g1

0xb1db,	// (0x000260be) list_single_number_heading_pane_g2_ParamLimits

0xb1db,	// (0x000260be) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_single_number_heading_pane_g

0x1872,	// (0x0001c755) list_single_number_heading_pane_t1_ParamLimits

0x1872,	// (0x0001c755) list_single_number_heading_pane_t1

0x189a,	// (0x0001c77d) list_single_number_heading_pane_t2_ParamLimits

0x189a,	// (0x0001c77d) list_single_number_heading_pane_t2

0xb32a,	// (0x0002620d) list_single_number_heading_pane_t3_ParamLimits

0xb32a,	// (0x0002620d) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002a4f9) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002a4f9) list_single_number_heading_pane_t

0xaa9c,	// (0x0002597f) list_single_graphic_heading_pane_g1_ParamLimits

0xaa9c,	// (0x0002597f) list_single_graphic_heading_pane_g1

0x18ac,	// (0x0001c78f) list_single_graphic_heading_pane_g4_ParamLimits

0x18ac,	// (0x0001c78f) list_single_graphic_heading_pane_g4

0xb1db,	// (0x000260be) list_single_graphic_heading_pane_g5_ParamLimits

0xb1db,	// (0x000260be) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002a500) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002a500) list_single_graphic_heading_pane_g

0x1872,	// (0x0001c755) list_single_graphic_heading_pane_t1_ParamLimits

0x1872,	// (0x0001c755) list_single_graphic_heading_pane_t1

0x18bd,	// (0x0001c7a0) list_single_graphic_heading_pane_t2_ParamLimits

0x18bd,	// (0x0001c7a0) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002a507) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002a507) list_single_graphic_heading_pane_t

0xb364,	// (0x00026247) list_single_large_graphic_pane_g1_ParamLimits

0xb364,	// (0x00026247) list_single_large_graphic_pane_g1

0xb370,	// (0x00026253) list_single_large_graphic_pane_g2_ParamLimits

0xb370,	// (0x00026253) list_single_large_graphic_pane_g2

0xb37c,	// (0x0002625f) list_single_large_graphic_pane_g3_ParamLimits

0xb37c,	// (0x0002625f) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002a50c) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002a50c) list_single_large_graphic_pane_g

0x9854,	// (0x00024737) wait_border_pane_g2_copy1

0x18cf,	// (0x0001c7b2) list_single_large_graphic_pane_g4_cp2

0xb388,	// (0x0002626b) list_single_large_graphic_pane_t1_ParamLimits

0xb388,	// (0x0002626b) list_single_large_graphic_pane_t1

0xaaa8,	// (0x0002598b) list_double_pane_g1_ParamLimits

0xaaa8,	// (0x0002598b) list_double_pane_g1

0xaab4,	// (0x00025997) list_double_pane_g2_ParamLimits

0xaab4,	// (0x00025997) list_double_pane_g2

0x0001,

0xf630,	// (0x0002a513) list_double_pane_g_ParamLimits

0xf630,	// (0x0002a513) list_double_pane_g

0xb28c,	// (0x0002616f) list_double_pane_t1_ParamLimits

0xb28c,	// (0x0002616f) list_double_pane_t1

0x18d7,	// (0x0001c7ba) list_double_pane_t2_ParamLimits

0x18d7,	// (0x0001c7ba) list_double_pane_t2

0x0001,

0xf635,	// (0x0002a518) list_double_pane_t_ParamLimits

0xf635,	// (0x0002a518) list_double_pane_t

0x18e9,	// (0x0001c7cc) list_double2_pane_g1_ParamLimits

0x18e9,	// (0x0001c7cc) list_double2_pane_g1

0xac87,	// (0x00025b6a) list_double2_pane_g2_ParamLimits

0xac87,	// (0x00025b6a) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002a51d) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002a51d) list_double2_pane_g

0x18fa,	// (0x0001c7dd) list_double2_pane_t1_ParamLimits

0x18fa,	// (0x0001c7dd) list_double2_pane_t1

0x1910,	// (0x0001c7f3) list_double2_pane_t2_ParamLimits

0x1910,	// (0x0001c7f3) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002a522) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002a522) list_double2_pane_t

0xaaa8,	// (0x0002598b) list_double_number_pane_g1_ParamLimits

0xaaa8,	// (0x0002598b) list_double_number_pane_g1

0xaab4,	// (0x00025997) list_double_number_pane_g2_ParamLimits

0xaab4,	// (0x00025997) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002a513) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002a513) list_double_number_pane_g

0x1922,	// (0x0001c805) list_double_number_pane_t1_ParamLimits

0x1922,	// (0x0001c805) list_double_number_pane_t1

0xaac0,	// (0x000259a3) list_double_number_pane_t2_ParamLimits

0xaac0,	// (0x000259a3) list_double_number_pane_t2

0x1934,	// (0x0001c817) list_double_number_pane_t3_ParamLimits

0x1934,	// (0x0001c817) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002a527) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002a527) list_double_number_pane_t

0xaa9c,	// (0x0002597f) list_double_graphic_pane_g1_ParamLimits

0xaa9c,	// (0x0002597f) list_double_graphic_pane_g1

0x1946,	// (0x0001c829) list_double_graphic_pane_g2_ParamLimits

0x1946,	// (0x0001c829) list_double_graphic_pane_g2

0x1955,	// (0x0001c838) list_double_graphic_pane_g3_ParamLimits

0x1955,	// (0x0001c838) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002a52e) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002a52e) list_double_graphic_pane_g

0x196d,	// (0x0001c850) list_double_graphic_pane_t1_ParamLimits

0x196d,	// (0x0001c850) list_double_graphic_pane_t1

0x1983,	// (0x0001c866) list_double_graphic_pane_t2_ParamLimits

0x1983,	// (0x0001c866) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002a537) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002a537) list_double_graphic_pane_t

0x1995,	// (0x0001c878) list_double2_graphic_pane_g1_ParamLimits

0x1995,	// (0x0001c878) list_double2_graphic_pane_g1

0xaaa8,	// (0x0002598b) list_double2_graphic_pane_g2_ParamLimits

0xaaa8,	// (0x0002598b) list_double2_graphic_pane_g2

0xaab4,	// (0x00025997) list_double2_graphic_pane_g3_ParamLimits

0xaab4,	// (0x00025997) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002a53c) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002a53c) list_double2_graphic_pane_g

0x19a1,	// (0x0001c884) list_double2_graphic_pane_t1_ParamLimits

0x19a1,	// (0x0001c884) list_double2_graphic_pane_t1

0x19b7,	// (0x0001c89a) list_double2_graphic_pane_t2_ParamLimits

0x19b7,	// (0x0001c89a) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002a543) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002a543) list_double2_graphic_pane_t

0x19c9,	// (0x0001c8ac) list_double_large_graphic_pane_g1_ParamLimits

0x19c9,	// (0x0001c8ac) list_double_large_graphic_pane_g1

0x19f2,	// (0x0001c8d5) list_double_large_graphic_pane_g2_ParamLimits

0x19f2,	// (0x0001c8d5) list_double_large_graphic_pane_g2

0xaab4,	// (0x00025997) list_double_large_graphic_pane_g3_ParamLimits

0xaab4,	// (0x00025997) list_double_large_graphic_pane_g3

0x1a03,	// (0x0001c8e6) list_double_large_graphic_pane_g4_ParamLimits

0x1a03,	// (0x0001c8e6) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002a548) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002a548) list_double_large_graphic_pane_g

0x1a14,	// (0x0001c8f7) list_double_large_graphic_pane_t1_ParamLimits

0x1a14,	// (0x0001c8f7) list_double_large_graphic_pane_t1

0x1a2d,	// (0x0001c910) list_double_large_graphic_pane_t2_ParamLimits

0x1a2d,	// (0x0001c910) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002a553) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002a553) list_double_large_graphic_pane_t

0x1a3f,	// (0x0001c922) list_double2_large_graphic_pane_g1_ParamLimits

0x1a3f,	// (0x0001c922) list_double2_large_graphic_pane_g1

0x1a4b,	// (0x0001c92e) list_double2_large_graphic_pane_g2_ParamLimits

0x1a4b,	// (0x0001c92e) list_double2_large_graphic_pane_g2

0x1a5c,	// (0x0001c93f) list_double2_large_graphic_pane_g3_ParamLimits

0x1a5c,	// (0x0001c93f) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002a558) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002a558) list_double2_large_graphic_pane_g

0x1a68,	// (0x0001c94b) list_double2_large_graphic_pane_t1_ParamLimits

0x1a68,	// (0x0001c94b) list_double2_large_graphic_pane_t1

0x1a7e,	// (0x0001c961) list_double2_large_graphic_pane_t2_ParamLimits

0x1a7e,	// (0x0001c961) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002a55f) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002a55f) list_double2_large_graphic_pane_t

0x1a90,	// (0x0001c973) list_double_heading_pane_g1_ParamLimits

0x1a90,	// (0x0001c973) list_double_heading_pane_g1

0x1aa1,	// (0x0001c984) list_double_heading_pane_g2_ParamLimits

0x1aa1,	// (0x0001c984) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002a564) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002a564) list_double_heading_pane_g

0x1aad,	// (0x0001c990) list_double_heading_pane_t1_ParamLimits

0x1aad,	// (0x0001c990) list_double_heading_pane_t1

0x1ac3,	// (0x0001c9a6) list_double_heading_pane_t2_ParamLimits

0x1ac3,	// (0x0001c9a6) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002a569) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002a569) list_double_heading_pane_t

0x1ad5,	// (0x0001c9b8) list_double_graphic_heading_pane_g1_ParamLimits

0x1ad5,	// (0x0001c9b8) list_double_graphic_heading_pane_g1

0x1a90,	// (0x0001c973) list_double_graphic_heading_pane_g2_ParamLimits

0x1a90,	// (0x0001c973) list_double_graphic_heading_pane_g2

0x1aa1,	// (0x0001c984) list_double_graphic_heading_pane_g3_ParamLimits

0x1aa1,	// (0x0001c984) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002a56e) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002a56e) list_double_graphic_heading_pane_g

0x1ae1,	// (0x0001c9c4) list_double_graphic_heading_pane_t1_ParamLimits

0x1ae1,	// (0x0001c9c4) list_double_graphic_heading_pane_t1

0x19b7,	// (0x0001c89a) list_double_graphic_heading_pane_t2_ParamLimits

0x19b7,	// (0x0001c89a) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002a575) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002a575) list_double_graphic_heading_pane_t

0x19f2,	// (0x0001c8d5) list_double_time_pane_g1_ParamLimits

0x19f2,	// (0x0001c8d5) list_double_time_pane_g1

0xaab4,	// (0x00025997) list_double_time_pane_g2_ParamLimits

0xaab4,	// (0x00025997) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002a57a) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002a57a) list_double_time_pane_g

0xaad6,	// (0x000259b9) list_double_time_pane_t1_ParamLimits

0xaad6,	// (0x000259b9) list_double_time_pane_t1

0x1af7,	// (0x0001c9da) list_double_time_pane_t2_ParamLimits

0x1af7,	// (0x0001c9da) list_double_time_pane_t2

0x1b09,	// (0x0001c9ec) list_double_time_pane_t3_ParamLimits

0x1b09,	// (0x0001c9ec) list_double_time_pane_t3

0x1b1b,	// (0x0001c9fe) list_double_time_pane_t4_ParamLimits

0x1b1b,	// (0x0001c9fe) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0002a57f) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0002a57f) list_double_time_pane_t

0x1b2d,	// (0x0001ca10) list_setting_pane_g1_ParamLimits

0x1b2d,	// (0x0001ca10) list_setting_pane_g1

0x1aa1,	// (0x0001c984) list_setting_pane_g2_ParamLimits

0x1aa1,	// (0x0001c984) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002a588) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002a588) list_setting_pane_g

0x1b39,	// (0x0001ca1c) list_setting_pane_t1_ParamLimits

0x1b39,	// (0x0001ca1c) list_setting_pane_t1

0x1b50,	// (0x0001ca33) list_setting_pane_t2_ParamLimits

0x1b50,	// (0x0001ca33) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002a58d) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002a58d) list_setting_pane_t

0x1b8d,	// (0x0001ca70) set_value_pane_cp_ParamLimits

0x1b8d,	// (0x0001ca70) set_value_pane_cp

0x1b99,	// (0x0001ca7c) list_setting_number_pane_g1_ParamLimits

0x1b99,	// (0x0001ca7c) list_setting_number_pane_g1

0x1ba5,	// (0x0001ca88) list_setting_number_pane_g2_ParamLimits

0x1ba5,	// (0x0001ca88) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002a594) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002a594) list_setting_number_pane_g

0x1bb1,	// (0x0001ca94) list_setting_number_pane_t1_ParamLimits

0x1bb1,	// (0x0001ca94) list_setting_number_pane_t1

0x1bc5,	// (0x0001caa8) list_setting_number_pane_t2_ParamLimits

0x1bc5,	// (0x0001caa8) list_setting_number_pane_t2

0x1bdc,	// (0x0001cabf) list_setting_number_pane_t3_ParamLimits

0x1bdc,	// (0x0001cabf) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002a599) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002a599) list_setting_number_pane_t

0x1b8d,	// (0x0001ca70) set_value_pane_ParamLimits

0x1b8d,	// (0x0001ca70) set_value_pane

0x5b41,	// (0x00020a24) bg_set_opt_pane_ParamLimits

0x5b41,	// (0x00020a24) bg_set_opt_pane

0xaefa,	// (0x00025ddd) set_value_pane_t1

0x5b62,	// (0x00020a45) slider_set_pane_cp3

0x5b6b,	// (0x00020a4e) volume_small_pane_cp

0x5b74,	// (0x00020a57) list_form_gen_pane

0x5473,	// (0x00020356) scroll_pane_cp8

0x1c1f,	// (0x0001cb02) form_field_data_pane_ParamLimits

0x1c1f,	// (0x0001cb02) form_field_data_pane

0x1c36,	// (0x0001cb19) form_field_data_wide_pane_ParamLimits

0x1c36,	// (0x0001cb19) form_field_data_wide_pane

0x1c56,	// (0x0001cb39) form_field_popup_pane_ParamLimits

0x1c56,	// (0x0001cb39) form_field_popup_pane

0x1c6e,	// (0x0001cb51) form_field_popup_wide_pane_ParamLimits

0x1c6e,	// (0x0001cb51) form_field_popup_wide_pane

0xaf86,	// (0x00025e69) form_field_slider_pane_ParamLimits

0xaf86,	// (0x00025e69) form_field_slider_pane

0xaf99,	// (0x00025e7c) form_field_slider_wide_pane_ParamLimits

0xaf99,	// (0x00025e7c) form_field_slider_wide_pane

0x5b7d,	// (0x00020a60) data_form_pane

0x25c7,	// (0x0001d4aa) form_field_data_pane_t1

0x5b89,	// (0x00020a6c) input_focus_pane

0x5b97,	// (0x00020a7a) data_form_wide_pane

0xafc0,	// (0x00025ea3) form_field_data_wide_pane_t1

0x52f2,	// (0x000201d5) input_focus_pane_cp6

0x1c8f,	// (0x0001cb72) form_field_popup_pane_t1

0x5b89,	// (0x00020a6c) input_focus_pane_cp7

0x5b7d,	// (0x00020a60) list_form_pane

0xb002,	// (0x00025ee5) form_field_popup_wide_pane_t1

0x5b89,	// (0x00020a6c) input_focus_pane_cp8

0x5bb7,	// (0x00020a9a) list_form_wide_pane

0x1caf,	// (0x0001cb92) form_field_slider_pane_t1_ParamLimits

0x1caf,	// (0x0001cb92) form_field_slider_pane_t1

0x1cc5,	// (0x0001cba8) form_field_slider_pane_t2_ParamLimits

0x1cc5,	// (0x0001cba8) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002a5a9) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002a5a9) form_field_slider_pane_t

0x4f16,	// (0x0001fdf9) input_focus_pane_cp9_ParamLimits

0x4f16,	// (0x0001fdf9) input_focus_pane_cp9

0x1cda,	// (0x0001cbbd) slider_cont_pane_ParamLimits

0x1cda,	// (0x0001cbbd) slider_cont_pane

0x5bc6,	// (0x00020aa9) form_field_slider_wide_pane_t1_ParamLimits

0x5bc6,	// (0x00020aa9) form_field_slider_wide_pane_t1

0xb057,	// (0x00025f3a) form_field_slider_wide_pane_t2_ParamLimits

0xb057,	// (0x00025f3a) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0002a5ae) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0002a5ae) form_field_slider_wide_pane_t

0x4f16,	// (0x0001fdf9) input_focus_pane_cp10_ParamLimits

0x4f16,	// (0x0001fdf9) input_focus_pane_cp10

0x1cee,	// (0x0001cbd1) slider_cont_pane_cp1_ParamLimits

0x1cee,	// (0x0001cbd1) slider_cont_pane_cp1

0x1d04,	// (0x0001cbe7) slider_form_pane_cp

0x5bd8,	// (0x00020abb) input_focus_pane_g1

0x5be0,	// (0x00020ac3) input_focus_pane_g2

0x5be8,	// (0x00020acb) input_focus_pane_g3

0x5bf0,	// (0x00020ad3) input_focus_pane_g4

0x5bf8,	// (0x00020adb) input_focus_pane_g5

0x5c00,	// (0x00020ae3) input_focus_pane_g6

0x5c08,	// (0x00020aeb) input_focus_pane_g7

0x5c10,	// (0x00020af3) input_focus_pane_g8

0x5c18,	// (0x00020afb) input_focus_pane_g9

0x4e46,	// (0x0001fd29) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002a5b3) input_focus_pane_g

0x985d,	// (0x00024740) wait_border_pane_g3_copy1

0x1d0c,	// (0x0001cbef) data_form_pane_t1

0x4e46,	// (0x0001fd29) wait_anim_pane_g1_copy1

0x1e14,	// (0x0001ccf7) data_form_wide_pane_t1

0x5c20,	// (0x00020b03) list_form_graphic_pane_cp_ParamLimits

0x5c20,	// (0x00020b03) list_form_graphic_pane_cp

0xa45d,	// (0x00025340) slider_form_pane_g1

0xa466,	// (0x00025349) slider_form_pane_g2

0x0006,

0xf9bc,	// (0x0002a89f) slider_form_pane_g

0x1d25,	// (0x0001cc08) list_form_graphic_pane_ParamLimits

0x1d25,	// (0x0001cc08) list_form_graphic_pane

0xb0b7,	// (0x00025f9a) list_form_graphic_pane_g1

0xb0bf,	// (0x00025fa2) list_form_graphic_pane_t1_ParamLimits

0xb0bf,	// (0x00025fa2) list_form_graphic_pane_t1

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp5_ParamLimits

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp5

0x1d3a,	// (0x0001cc1d) find_pane_g1

0x5c34,	// (0x00020b17) input_find_pane

0x1d45,	// (0x0001cc28) input_find_pane_g1_ParamLimits

0x1d45,	// (0x0001cc28) input_find_pane_g1

0xb0e9,	// (0x00025fcc) input_find_pane_t1_ParamLimits

0xb0e9,	// (0x00025fcc) input_find_pane_t1

0xb0fe,	// (0x00025fe1) input_find_pane_t2_ParamLimits

0xb0fe,	// (0x00025fe1) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0002a5c8) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0002a5c8) input_find_pane_t

0x5c3d,	// (0x00020b20) input_focus_pane_cp5_ParamLimits

0x5c3d,	// (0x00020b20) input_focus_pane_cp5

0x4f16,	// (0x0001fdf9) bg_popup_window_pane_cp2_ParamLimits

0x4f16,	// (0x0001fdf9) bg_popup_window_pane_cp2

0x5c57,	// (0x00020b3a) listscroll_menu_pane_ParamLimits

0x5c57,	// (0x00020b3a) listscroll_menu_pane

0x5c63,	// (0x00020b46) popup_submenu_window_ParamLimits

0x5c63,	// (0x00020b46) popup_submenu_window

0x5c87,	// (0x00020b6a) find_popup_pane_g1

0x5c8f,	// (0x00020b72) input_popup_find_pane_cp

0x5c3d,	// (0x00020b20) input_focus_pane_cp4_ParamLimits

0x5c3d,	// (0x00020b20) input_focus_pane_cp4

0x5c99,	// (0x00020b7c) input_popup_find_pane_t1_ParamLimits

0x5c99,	// (0x00020b7c) input_popup_find_pane_t1

0x4ec8,	// (0x0001fdab) bg_popup_sub_pane_cp

0x5cc7,	// (0x00020baa) listscroll_popup_sub_pane

0x5ccf,	// (0x00020bb2) list_submenu_pane_ParamLimits

0x5ccf,	// (0x00020bb2) list_submenu_pane

0x5ce0,	// (0x00020bc3) scroll_pane_cp4

0x5c20,	// (0x00020b03) list_single_popup_submenu_pane_ParamLimits

0x5c20,	// (0x00020b03) list_single_popup_submenu_pane

0x5ce8,	// (0x00020bcb) list_single_popup_submenu_pane_g1

0x5cf0,	// (0x00020bd3) list_single_popup_submenu_pane_t1_ParamLimits

0x5cf0,	// (0x00020bd3) list_single_popup_submenu_pane_t1

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp1_ParamLimits

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp1

0xa563,	// (0x00025446) tabs_2_active_pane_g1

0x25eb,	// (0x0001d4ce) tabs_2_active_pane_t1

0x4f16,	// (0x0001fdf9) bg_passive_tab_pane_cp1_ParamLimits

0x4f16,	// (0x0001fdf9) bg_passive_tab_pane_cp1

0xa563,	// (0x00025446) tabs_2_passive_pane_g1

0x25eb,	// (0x0001d4ce) tabs_2_passive_pane_t1

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp4

0x2601,	// (0x0001d4e4) tabs_2_long_active_pane_t1

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp4

0x7ff1,	// (0x00022ed4) list_single_midp_graphic_pane_g4_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp5

0x2618,	// (0x0001d4fb) tabs_3_long_active_pane_t1

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp5

0x7ff1,	// (0x00022ed4) list_single_midp_graphic_pane_g4

0x4f2c,	// (0x0001fe0f) bg_popup_window_pane_cp13_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_popup_window_pane_cp13

0x5d0e,	// (0x00020bf1) listscroll_popup_fast_pane_ParamLimits

0x5d0e,	// (0x00020bf1) listscroll_popup_fast_pane

0x5d1d,	// (0x00020c00) grid_popup_fast_pane_ParamLimits

0x5d1d,	// (0x00020c00) grid_popup_fast_pane

0x5d2f,	// (0x00020c12) scroll_pane_cp9_ParamLimits

0x5d2f,	// (0x00020c12) scroll_pane_cp9

0xd3ec,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd3ec,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2

0x5d53,	// (0x00020c36) input_focus_pane_cp20_ParamLimits

0x5d53,	// (0x00020c36) input_focus_pane_cp20

0x5d61,	// (0x00020c44) query_popup_data_pane_t1_ParamLimits

0x5d61,	// (0x00020c44) query_popup_data_pane_t1

0x5d74,	// (0x00020c57) query_popup_data_pane_t2_ParamLimits

0x5d74,	// (0x00020c57) query_popup_data_pane_t2

0x5dba,	// (0x00020c9d) query_popup_data_pane_t3_ParamLimits

0x5dba,	// (0x00020c9d) query_popup_data_pane_t3

0x5dfb,	// (0x00020cde) query_popup_data_pane_t4_ParamLimits

0x5dfb,	// (0x00020cde) query_popup_data_pane_t4

0x5e37,	// (0x00020d1a) query_popup_data_pane_t5_ParamLimits

0x5e37,	// (0x00020d1a) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0002a5cd) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0002a5cd) query_popup_data_pane_t

0x5bd8,	// (0x00020abb) bg_set_opt_pane_g1

0x5be0,	// (0x00020ac3) bg_set_opt_pane_g2

0x5be8,	// (0x00020acb) bg_set_opt_pane_g3

0x5bf0,	// (0x00020ad3) bg_set_opt_pane_g4

0x5bf8,	// (0x00020adb) bg_set_opt_pane_g5

0x5c00,	// (0x00020ae3) bg_set_opt_pane_g6

0x5c08,	// (0x00020aeb) bg_set_opt_pane_g7

0x5c10,	// (0x00020af3) bg_set_opt_pane_g8

0x5c18,	// (0x00020afb) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0002a5d8) bg_set_opt_pane_g

0x7b9d,	// (0x00022a80) control_top_pane_stacon_ParamLimits

0x7b9d,	// (0x00022a80) control_top_pane_stacon

0x7bf0,	// (0x00022ad3) signal_pane_stacon_ParamLimits

0x7bf0,	// (0x00022ad3) signal_pane_stacon

0x6255,	// (0x00021138) stacon_top_pane_g1_ParamLimits

0x6255,	// (0x00021138) stacon_top_pane_g1

0x7c15,	// (0x00022af8) title_pane_stacon_ParamLimits

0x7c15,	// (0x00022af8) title_pane_stacon

0x7c37,	// (0x00022b1a) uni_indicator_pane_stacon_ParamLimits

0x7c37,	// (0x00022b1a) uni_indicator_pane_stacon

0x7c4c,	// (0x00022b2f) battery_pane_stacon_ParamLimits

0x7c4c,	// (0x00022b2f) battery_pane_stacon

0x7c8c,	// (0x00022b6f) control_bottom_pane_stacon_ParamLimits

0x7c8c,	// (0x00022b6f) control_bottom_pane_stacon

0x7cab,	// (0x00022b8e) navi_pane_stacon_ParamLimits

0x7cab,	// (0x00022b8e) navi_pane_stacon

0x6277,	// (0x0002115a) stacon_bottom_pane_g1_ParamLimits

0x6277,	// (0x0002115a) stacon_bottom_pane_g1

0x5e6e,	// (0x00020d51) aid_levels_signal_lsc_ParamLimits

0x5e6e,	// (0x00020d51) aid_levels_signal_lsc

0x77de,	// (0x000226c1) signal_pane_stacon_g1_ParamLimits

0x77de,	// (0x000226c1) signal_pane_stacon_g1

0x77ea,	// (0x000226cd) signal_pane_stacon_g2_ParamLimits

0x77ea,	// (0x000226cd) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0002a5eb) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0002a5eb) signal_pane_stacon_g

0x781e,	// (0x00022701) title_pane_stacon_t1_ParamLimits

0x781e,	// (0x00022701) title_pane_stacon_t1

0x5e9c,	// (0x00020d7f) uni_indicator_pane_stacon_g1

0x5ea6,	// (0x00020d89) uni_indicator_pane_stacon_g2

0x5e88,	// (0x00020d6b) uni_indicator_pane_stacon_g3

0x5e92,	// (0x00020d75) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0002a5f7) uni_indicator_pane_stacon_g

0x7843,	// (0x00022726) control_top_pane_stacon_g1

0x784b,	// (0x0002272e) control_top_pane_stacon_t1_ParamLimits

0x784b,	// (0x0002272e) control_top_pane_stacon_t1

0x5eb0,	// (0x00020d93) aid_levels_battery_lsc_ParamLimits

0x5eb0,	// (0x00020d93) aid_levels_battery_lsc

0x787c,	// (0x0002275f) battery_pane_stacon_g1_ParamLimits

0x787c,	// (0x0002275f) battery_pane_stacon_g1

0x7888,	// (0x0002276b) battery_pane_stacon_g2_ParamLimits

0x7888,	// (0x0002276b) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0002a600) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0002a600) battery_pane_stacon_g

0x78b7,	// (0x0002279a) navi_icon_pane_stacon

0x78c7,	// (0x000227aa) navi_navi_pane_stacon

0x78b7,	// (0x0002279a) navi_text_pane_stacon

0x7843,	// (0x00022726) control_bottom_pane_stacon_g1

0x78d7,	// (0x000227ba) control_bottom_pane_stacon_t1_ParamLimits

0x78d7,	// (0x000227ba) control_bottom_pane_stacon_t1

0x262e,	// (0x0001d511) grid_app_pane_ParamLimits

0x262e,	// (0x0001d511) grid_app_pane

0x265c,	// (0x0001d53f) scroll_pane_cp15_ParamLimits

0x265c,	// (0x0001d53f) scroll_pane_cp15

0x2673,	// (0x0001d556) cell_app_pane_ParamLimits

0x2673,	// (0x0001d556) cell_app_pane

0x26b2,	// (0x0001d595) cell_app_pane_g1_ParamLimits

0x26b2,	// (0x0001d595) cell_app_pane_g1

0x5ed8,	// (0x00020dbb) cell_app_pane_g2_ParamLimits

0x5ed8,	// (0x00020dbb) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002a605) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002a605) cell_app_pane_g

0x5ee4,	// (0x00020dc7) cell_app_pane_t1_ParamLimits

0x5ee4,	// (0x00020dc7) cell_app_pane_t1

0x5ef6,	// (0x00020dd9) grid_highlight_pane_ParamLimits

0x5ef6,	// (0x00020dd9) grid_highlight_pane

0x5bd8,	// (0x00020abb) cell_highlight_pane_g1

0x5be0,	// (0x00020ac3) cell_highlight_pane_g2

0x5be8,	// (0x00020acb) cell_highlight_pane_g3

0x5bf0,	// (0x00020ad3) cell_highlight_pane_g4

0x5bf8,	// (0x00020adb) cell_highlight_pane_g5

0x5c00,	// (0x00020ae3) cell_highlight_pane_g6

0x5c08,	// (0x00020aeb) cell_highlight_pane_g7

0x5c10,	// (0x00020af3) cell_highlight_pane_g8

0x5c18,	// (0x00020afb) cell_highlight_pane_g9

0x4e46,	// (0x0001fd29) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002a5b3) cell_highlight_pane_g

0x5f07,	// (0x00020dea) bg_scroll_pane

0x7990,	// (0x00022873) scroll_handle_pane

0x5f4e,	// (0x00020e31) scroll_bg_pane_g1

0x5f63,	// (0x00020e46) scroll_bg_pane_g2

0x5f7b,	// (0x00020e5e) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002a60a) scroll_bg_pane_g

0x5f90,	// (0x00020e73) scroll_handle_focus_pane_ParamLimits

0x5f90,	// (0x00020e73) scroll_handle_focus_pane

0x5f4e,	// (0x00020e31) scroll_handle_pane_g1

0x5f9d,	// (0x00020e80) scroll_handle_pane_g2

0x5f7b,	// (0x00020e5e) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002a611) scroll_handle_pane_g

0x5c3d,	// (0x00020b20) bg_popup_sub_pane_cp21_ParamLimits

0x5c3d,	// (0x00020b20) bg_popup_sub_pane_cp21

0x5fb1,	// (0x00020e94) popup_fep_japan_predictive_window_t1_ParamLimits

0x5fb1,	// (0x00020e94) popup_fep_japan_predictive_window_t1

0x5fc8,	// (0x00020eab) popup_fep_japan_predictive_window_t2_ParamLimits

0x5fc8,	// (0x00020eab) popup_fep_japan_predictive_window_t2

0x5ffb,	// (0x00020ede) popup_fep_japan_predictive_window_t3_ParamLimits

0x5ffb,	// (0x00020ede) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002a618) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002a618) popup_fep_japan_predictive_window_t

0x4ec8,	// (0x0001fdab) bg_popup_sub_pane_cp23

0x6032,	// (0x00020f15) listscroll_japin_cand_pane

0x603a,	// (0x00020f1d) popup_fep_japan_candidate_window_t1

0x6048,	// (0x00020f2b) candidate_pane_ParamLimits

0x6048,	// (0x00020f2b) candidate_pane

0x605b,	// (0x00020f3e) scroll_pane_cp30

0x6063,	// (0x00020f46) list_single_popup_jap_candidate_pane_ParamLimits

0x6063,	// (0x00020f46) list_single_popup_jap_candidate_pane

0x4ec8,	// (0x0001fdab) list_highlight_pane_cp30

0x6078,	// (0x00020f5b) list_single_popup_jap_candidate_pane_t1

0x26df,	// (0x0001d5c2) level_1_signal

0x26f1,	// (0x0001d5d4) level_2_signal

0x2704,	// (0x0001d5e7) level_3_signal

0x2717,	// (0x0001d5fa) level_4_signal

0x272a,	// (0x0001d60d) level_5_signal

0x273d,	// (0x0001d620) level_6_signal

0x2750,	// (0x0001d633) level_7_signal

0x26df,	// (0x0001d5c2) level_1_battery

0x26f1,	// (0x0001d5d4) level_2_battery

0x2704,	// (0x0001d5e7) level_3_battery

0x2717,	// (0x0001d5fa) level_4_battery

0x272a,	// (0x0001d60d) level_5_battery

0x273d,	// (0x0001d620) level_6_battery

0x2750,	// (0x0001d633) level_7_battery

0x609f,	// (0x00020f82) list_menu_pane_ParamLimits

0x609f,	// (0x00020f82) list_menu_pane

0x60b0,	// (0x00020f93) scroll_pane_cp25_ParamLimits

0x60b0,	// (0x00020f93) scroll_pane_cp25

0x2763,	// (0x0001d646) list_double2_graphic_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double2_graphic_pane_cp2

0x2763,	// (0x0001d646) list_double2_large_graphic_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double2_large_graphic_pane_cp2

0x2763,	// (0x0001d646) list_double2_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double2_pane_cp2

0x2763,	// (0x0001d646) list_double_graphic_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double_graphic_pane_cp2

0x2763,	// (0x0001d646) list_double_large_graphic_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double_large_graphic_pane_cp2

0x2763,	// (0x0001d646) list_double_number_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double_number_pane_cp2

0x2763,	// (0x0001d646) list_double_pane_cp2_ParamLimits

0x2763,	// (0x0001d646) list_double_pane_cp2

0x277e,	// (0x0001d661) list_single_2graphic_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_2graphic_pane_cp2

0x277e,	// (0x0001d661) list_single_graphic_heading_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_graphic_heading_pane_cp2

0x277e,	// (0x0001d661) list_single_graphic_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_graphic_pane_cp2

0x277e,	// (0x0001d661) list_single_heading_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_heading_pane_cp2

0x278f,	// (0x0001d672) list_single_large_graphic_pane_cp2_ParamLimits

0x278f,	// (0x0001d672) list_single_large_graphic_pane_cp2

0x277e,	// (0x0001d661) list_single_number_heading_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_number_heading_pane_cp2

0x277e,	// (0x0001d661) list_single_number_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_number_pane_cp2

0x277e,	// (0x0001d661) list_single_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_pane_cp2

0x60d2,	// (0x00020fb5) bg_popup_sub_pane_cp22

0x7b0d,	// (0x000229f0) popup_side_volume_key_window_g1

0x7b31,	// (0x00022a14) popup_side_volume_key_window_t1

0x7b4d,	// (0x00022a30) volume_small_pane_cp1

0x4f16,	// (0x0001fdf9) bg_popup_sub_pane_cp24_ParamLimits

0x4f16,	// (0x0001fdf9) bg_popup_sub_pane_cp24

0x6106,	// (0x00020fe9) fep_china_uni_candidate_pane_ParamLimits

0x6106,	// (0x00020fe9) fep_china_uni_candidate_pane

0x611a,	// (0x00020ffd) fep_china_uni_entry_pane

0x612a,	// (0x0002100d) popup_fep_china_uni_window_g1

0x6146,	// (0x00021029) fep_china_uni_entry_pane_g1

0x614e,	// (0x00021031) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002a645) fep_china_uni_entry_pane_g

0x6156,	// (0x00021039) fep_entry_item_pane

0x6160,	// (0x00021043) fep_candidate_item_pane

0x6168,	// (0x0002104b) fep_china_uni_candidate_pane_g1

0x6170,	// (0x00021053) fep_china_uni_candidate_pane_g2

0x6178,	// (0x0002105b) fep_china_uni_candidate_pane_g3

0x6180,	// (0x00021063) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002a64a) fep_china_uni_candidate_pane_g

0x4e46,	// (0x0001fd29) fep_entry_item_pane_g1

0x6188,	// (0x0002106b) fep_entry_item_pane_t1_ParamLimits

0x6188,	// (0x0002106b) fep_entry_item_pane_t1

0x619e,	// (0x00021081) fep_candidate_item_pane_t1_ParamLimits

0x619e,	// (0x00021081) fep_candidate_item_pane_t1

0x61b3,	// (0x00021096) fep_candidate_item_pane_t2_ParamLimits

0x61b3,	// (0x00021096) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002a653) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002a653) fep_candidate_item_pane_t

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp31_ParamLimits

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp31

0x61c5,	// (0x000210a8) level_1_signal_lsc

0x61ce,	// (0x000210b1) level_2_signal_lsc

0x61d7,	// (0x000210ba) level_3_signal_lsc

0x61e0,	// (0x000210c3) level_4_signal_lsc

0x61e9,	// (0x000210cc) level_5_signal_lsc

0x61f2,	// (0x000210d5) level_6_signal_lsc

0x61fb,	// (0x000210de) level_7_signal_lsc

0x61fb,	// (0x000210de) level_1_battery_lsc

0x6204,	// (0x000210e7) level_2_battery_lsc

0x620d,	// (0x000210f0) level_3_battery_lsc

0x6216,	// (0x000210f9) level_4_battery_lsc

0x621f,	// (0x00021102) level_5_battery_lsc

0x6228,	// (0x0002110b) level_6_battery_lsc

0x61c5,	// (0x000210a8) level_7_battery_lsc

0x6231,	// (0x00021114) scroll_handle_focus_pane_g1

0x623a,	// (0x0002111d) scroll_handle_focus_pane_g2

0x6243,	// (0x00021126) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002a658) scroll_handle_focus_pane_g

0xb113,	// (0x00025ff6) list_single_2graphic_pane_g1_ParamLimits

0xb113,	// (0x00025ff6) list_single_2graphic_pane_g1

0x18ac,	// (0x0001c78f) list_single_2graphic_pane_g2_ParamLimits

0x18ac,	// (0x0001c78f) list_single_2graphic_pane_g2

0xb1db,	// (0x000260be) list_single_2graphic_pane_g3_ParamLimits

0xb1db,	// (0x000260be) list_single_2graphic_pane_g3

0x1d51,	// (0x0001cc34) list_single_2graphic_pane_g4_ParamLimits

0x1d51,	// (0x0001cc34) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0002a65f) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0002a65f) list_single_2graphic_pane_g

0x1d5d,	// (0x0001cc40) list_single_2graphic_pane_t1_ParamLimits

0x1d5d,	// (0x0001cc40) list_single_2graphic_pane_t1

0x1d8b,	// (0x0001cc6e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1d8b,	// (0x0001cc6e) list_double2_graphic_large_graphic_pane_g1

0x1a4b,	// (0x0001c92e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x1a4b,	// (0x0001c92e) list_double2_graphic_large_graphic_pane_g2

0x1a5c,	// (0x0001c93f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x1a5c,	// (0x0001c93f) list_double2_graphic_large_graphic_pane_g3

0x1d9b,	// (0x0001cc7e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1d9b,	// (0x0001cc7e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002a668) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002a668) list_double2_graphic_large_graphic_pane_g

0x1da7,	// (0x0001cc8a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x1da7,	// (0x0001cc8a) list_double2_graphic_large_graphic_pane_t1

0x1dbd,	// (0x0001cca0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1dbd,	// (0x0001cca0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002a671) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002a671) list_double2_graphic_large_graphic_pane_t

0x631e,	// (0x00021201) popup_fast_swap_window_ParamLimits

0x631e,	// (0x00021201) popup_fast_swap_window

0x633a,	// (0x0002121d) popup_side_volume_key_window

0x6354,	// (0x00021237) stacon_top_pane

0x635e,	// (0x00021241) status_pane_ParamLimits

0x635e,	// (0x00021241) status_pane

0x6354,	// (0x00021237) status_small_pane

0x4ec8,	// (0x0001fdab) control_pane

0x4ec8,	// (0x0001fdab) stacon_bottom_pane

0x5473,	// (0x00020356) scroll_pane_cp121

0x5b74,	// (0x00020a57) set_content_pane

0xa551,	// (0x00025434) bg_active_tab_pane_g1_cp1

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp1

0xa55a,	// (0x0002543d) bg_active_tab_pane_g3_cp1

0xa551,	// (0x00025434) bg_passive_tab_pane_g1_cp1

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp1

0xa55a,	// (0x0002543d) bg_passive_tab_pane_g3_cp1

0x27f1,	// (0x0001d6d4) bg_active_tab_pane_g1_cp2

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp2

0x27e8,	// (0x0001d6cb) bg_active_tab_pane_g3_cp2

0x27f1,	// (0x0001d6d4) bg_passive_tab_pane_g1_cp2

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp2

0x27e8,	// (0x0001d6cb) bg_passive_tab_pane_g3_cp2

0x2803,	// (0x0001d6e6) bg_active_tab_pane_g1_cp3

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp3

0x27fa,	// (0x0001d6dd) bg_active_tab_pane_g3_cp3

0x2803,	// (0x0001d6e6) bg_passive_tab_pane_g1_cp3

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp3

0x27fa,	// (0x0001d6dd) bg_passive_tab_pane_g3_cp3

0x2815,	// (0x0001d6f8) bg_active_tab_pane_g1_cp4

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp4

0x280c,	// (0x0001d6ef) bg_active_tab_pane_g3_cp4

0x2815,	// (0x0001d6f8) bg_passive_tab_pane_g1_cp4

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp4

0x280c,	// (0x0001d6ef) bg_passive_tab_pane_g3_cp4

0x629c,	// (0x0002117f) bg_active_tab_pane_g1_cp5

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp5

0x6293,	// (0x00021176) bg_active_tab_pane_g3_cp5

0x629c,	// (0x0002117f) bg_passive_tab_pane_g1_cp5

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp5

0x6293,	// (0x00021176) bg_passive_tab_pane_g3_cp5

0x281e,	// (0x0001d701) list_set_graphic_pane_ParamLimits

0x281e,	// (0x0001d701) list_set_graphic_pane

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp4

0x62a5,	// (0x00021188) list_set_graphic_pane_g1_ParamLimits

0x62a5,	// (0x00021188) list_set_graphic_pane_g1

0x62b1,	// (0x00021194) list_set_graphic_pane_g2_ParamLimits

0x62b1,	// (0x00021194) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002a676) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002a676) list_set_graphic_pane_g

0x0009,

0xfaf2,	// (0x0002a9d5) volume_small_pane_cp_g

0x62d3,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x62d3,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2

0x62df,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x62df,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2

0x62ee,	// (0x000211d1) list_double2_large_graphic_pane_g3_cp2

0x62f6,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x62f6,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2

0x630c,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x630c,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2

0xa20d,	// (0x000250f0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa20d,	// (0x000250f0) list_double_large_graphic_pane_g1_cp2

0xa21e,	// (0x00025101) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa21e,	// (0x00025101) list_double_large_graphic_pane_g2_cp2

0x6439,	// (0x0002131c) list_double_large_graphic_pane_g3_cp2

0xa22d,	// (0x00025110) list_double_large_graphic_pane_g4_cp

0xa235,	// (0x00025118) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa235,	// (0x00025118) list_double_large_graphic_pane_t1_cp2

0xa24c,	// (0x0002512f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa24c,	// (0x0002512f) list_double_large_graphic_pane_t2_cp2

0x636c,	// (0x0002124f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x636c,	// (0x0002124f) list_double2_graphic_pane_g1_cp2

0x6378,	// (0x0002125b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6378,	// (0x0002125b) list_double2_graphic_pane_g2_cp2

0x6387,	// (0x0002126a) list_double2_graphic_pane_g3_cp2

0x638f,	// (0x00021272) list_double2_graphic_pane_t1_cp2_ParamLimits

0x638f,	// (0x00021272) list_double2_graphic_pane_t1_cp2

0x63a5,	// (0x00021288) list_double2_graphic_pane_t2_cp2_ParamLimits

0x63a5,	// (0x00021288) list_double2_graphic_pane_t2_cp2

0x63b7,	// (0x0002129a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_single_number_heading_pane_g1_cp2

0x63c3,	// (0x000212a6) list_single_number_heading_pane_g2_cp2

0x63cb,	// (0x000212ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x63cb,	// (0x000212ae) list_single_number_heading_pane_t1_cp2

0x63e1,	// (0x000212c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x63e1,	// (0x000212c4) list_single_number_heading_pane_t2_cp2

0x63f3,	// (0x000212d6) list_single_number_heading_pane_t3_cp2_ParamLimits

0x63f3,	// (0x000212d6) list_single_number_heading_pane_t3_cp2

0x63b7,	// (0x0002129a) list_single_heading_pane_g1_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_single_heading_pane_g1_cp2

0x63c3,	// (0x000212a6) list_single_heading_pane_g2_cp2

0x63cb,	// (0x000212ae) list_single_heading_pane_t1_cp2_ParamLimits

0x63cb,	// (0x000212ae) list_single_heading_pane_t1_cp2

0xa017,	// (0x00024efa) list_single_heading_pane_t2_cp2_ParamLimits

0xa017,	// (0x00024efa) list_single_heading_pane_t2_cp2

0x9f67,	// (0x00024e4a) list_double_graphic_pane_g1_cp2_ParamLimits

0x9f67,	// (0x00024e4a) list_double_graphic_pane_g1_cp2

0x9f73,	// (0x00024e56) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f73,	// (0x00024e56) list_double_graphic_pane_g2_cp2

0x9f82,	// (0x00024e65) list_double_graphic_pane_g3_cp2

0x9f8a,	// (0x00024e6d) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f8a,	// (0x00024e6d) list_double_graphic_pane_t1_cp2

0x9fa0,	// (0x00024e83) list_double_graphic_pane_t2_cp2_ParamLimits

0x9fa0,	// (0x00024e83) list_double_graphic_pane_t2_cp2

0x642d,	// (0x00021310) list_double_number_pane_g1_cp2_ParamLimits

0x642d,	// (0x00021310) list_double_number_pane_g1_cp2

0x6439,	// (0x0002131c) list_double_number_pane_g2_cp2

0x9f2d,	// (0x00024e10) list_double_number_pane_t1_cp2_ParamLimits

0x9f2d,	// (0x00024e10) list_double_number_pane_t1_cp2

0x9f3f,	// (0x00024e22) list_double_number_pane_t2_cp2_ParamLimits

0x9f3f,	// (0x00024e22) list_double_number_pane_t2_cp2

0x9f55,	// (0x00024e38) list_double_number_pane_t3_cp2_ParamLimits

0x9f55,	// (0x00024e38) list_double_number_pane_t3_cp2

0x9ea5,	// (0x00024d88) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ea5,	// (0x00024d88) list_single_graphic_pane_g1_cp2

0x63b7,	// (0x0002129a) list_single_graphic_pane_g2_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_single_graphic_pane_g2_cp2

0x63c3,	// (0x000212a6) list_single_graphic_pane_g3_cp2

0x9e7d,	// (0x00024d60) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e7d,	// (0x00024d60) list_single_graphic_pane_t1_cp2

0x63b7,	// (0x0002129a) list_single_number_pane_g1_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_single_number_pane_g1_cp2

0x63c3,	// (0x000212a6) list_single_number_pane_g2_cp2

0x9e7d,	// (0x00024d60) list_single_number_pane_t1_cp2_ParamLimits

0x9e7d,	// (0x00024d60) list_single_number_pane_t1_cp2

0x9e93,	// (0x00024d76) list_single_number_pane_t2_cp2_ParamLimits

0x9e93,	// (0x00024d76) list_single_number_pane_t2_cp2

0x62df,	// (0x000211c2) list_double2_pane_g1_cp2_ParamLimits

0x62df,	// (0x000211c2) list_double2_pane_g1_cp2

0x62ee,	// (0x000211d1) list_double2_pane_g2_cp2

0x6405,	// (0x000212e8) list_double2_pane_t1_cp2_ParamLimits

0x6405,	// (0x000212e8) list_double2_pane_t1_cp2

0x641b,	// (0x000212fe) list_double2_pane_t2_cp2_ParamLimits

0x641b,	// (0x000212fe) list_double2_pane_t2_cp2

0x642d,	// (0x00021310) list_double_pane_g1_cp2_ParamLimits

0x642d,	// (0x00021310) list_double_pane_g1_cp2

0x6439,	// (0x0002131c) list_double_pane_g2_cp2

0x6441,	// (0x00021324) list_double_pane_t1_cp2_ParamLimits

0x6441,	// (0x00021324) list_double_pane_t1_cp2

0x6457,	// (0x0002133a) list_double_pane_t2_cp2_ParamLimits

0x6457,	// (0x0002133a) list_double_pane_t2_cp2

0x647f,	// (0x00021362) list_single_pane_cp2_g3

0x63b7,	// (0x0002129a) list_single_pane_g1_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_single_pane_g1_cp2

0x63c3,	// (0x000212a6) list_single_pane_g2_cp2

0x648f,	// (0x00021372) list_single_pane_t1_cp2_ParamLimits

0x648f,	// (0x00021372) list_single_pane_t1_cp2

0x64a7,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x64a7,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2

0x64b3,	// (0x00021396) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x64b3,	// (0x00021396) list_single_large_graphic_pane_g2_cp2

0x64bf,	// (0x000213a2) list_single_large_graphic_pane_g3_cp2

0x64c7,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x64c7,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1

0x64e1,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x64e1,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2

0x9e5f,	// (0x00024d42) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e5f,	// (0x00024d42) list_single_graphic_heading_pane_g1_cp2

0x9e2e,	// (0x00024d11) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e2e,	// (0x00024d11) list_single_graphic_heading_pane_g4_cp2

0x63c3,	// (0x000212a6) list_single_graphic_heading_pane_g5_cp2

0x63cb,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x63cb,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2

0x9e6b,	// (0x00024d4e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e6b,	// (0x00024d4e) list_single_graphic_heading_pane_t2_cp2

0x9e22,	// (0x00024d05) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e22,	// (0x00024d05) list_single_2graphic_pane_g1_cp2

0x9e2e,	// (0x00024d11) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e2e,	// (0x00024d11) list_single_2graphic_pane_g2_cp2

0x63c3,	// (0x000212a6) list_single_2graphic_pane_g3_cp2

0x9e3d,	// (0x00024d20) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e3d,	// (0x00024d20) list_single_2graphic_pane_g4_cp2

0x9e49,	// (0x00024d2c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e49,	// (0x00024d2c) list_single_2graphic_pane_t1_cp2

0x4e46,	// (0x0001fd29) list_highlight_pane_g10_cp1

0x9a34,	// (0x00024917) list_highlight_pane_g1_cp1

0x9a3c,	// (0x0002491f) list_highlight_pane_g2_cp1

0x9a44,	// (0x00024927) list_highlight_pane_g3_cp1

0x9a4c,	// (0x0002492f) list_highlight_pane_g4_cp1

0x9a54,	// (0x00024937) list_highlight_pane_g5_cp1

0x9a5c,	// (0x0002493f) list_highlight_pane_g6_cp1

0x9a64,	// (0x00024947) list_highlight_pane_g7_cp1

0x9a6c,	// (0x0002494f) list_highlight_pane_g8_cp1

0x9a74,	// (0x00024957) list_highlight_pane_g9_cp1

0x34aa,	// (0x0001e38d) form_field_slider_pane_t3

0x34b8,	// (0x0001e39b) form_field_slider_pane_t4

0x997e,	// (0x00024861) slider_form_pane_ParamLimits

0x997e,	// (0x00024861) slider_form_pane

0x4ec8,	// (0x0001fdab) control_abbreviations

0x4ec8,	// (0x0001fdab) control_conventions

0x4ec8,	// (0x0001fdab) control_definitions

0x4ec8,	// (0x0001fdab) format_table_attribute

0xa061,	// (0x00024f44) bg_popup_preview_window_pane_g9

0x4ec8,	// (0x0001fdab) format_table_data2

0x4ec8,	// (0x0001fdab) format_table_data3

0x4ec8,	// (0x0001fdab) format_table_data_example

0x0008,

0x4ec8,	// (0x0001fdab) intro_purpose

0xf91c,	// (0x0002a7ff) bg_popup_preview_window_pane_g

0x4ec8,	// (0x0001fdab) texts_category

0x4ec8,	// (0x0001fdab) texts_graphics

0x64f7,	// (0x000213da) text_digital

0x6506,	// (0x000213e9) text_primary

0x6515,	// (0x000213f8) text_primary_small

0x6524,	// (0x00021407) text_secondary

0x6533,	// (0x00021416) text_title

0xa4ee,	// (0x000253d1) bg_passive_tab_pane_g1_cp3_srt

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp3_srt

0xa4f7,	// (0x000253da) bg_passive_tab_pane_g3_cp3_srt

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp3_srt_ParamLimits

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp3_srt

0xa500,	// (0x000253e3) tabs_4_active_pane_srt_g1

0x22de,	// (0x0001d1c1) tabs_4_active_pane_srt_t1_ParamLimits

0x22de,	// (0x0001d1c1) tabs_4_active_pane_srt_t1

0xa4ee,	// (0x000253d1) bg_active_tab_pane_g1_cp3_copy1

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp3_copy1

0xa4f7,	// (0x000253da) bg_active_tab_pane_g3_cp3_copy1

0x4f2c,	// (0x0001fe0f) tabs_2_long_active_pane_srt_ParamLimits

0x4f2c,	// (0x0001fe0f) tabs_2_long_active_pane_srt

0x4f2c,	// (0x0001fe0f) tabs_2_long_passive_pane_srt_ParamLimits

0x4f2c,	// (0x0001fe0f) tabs_2_long_passive_pane_srt

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp4_srt

0xa424,	// (0x00025307) bg_passive_tab_pane_g1_cp4_srt

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp4_srt

0xa42d,	// (0x00025310) bg_passive_tab_pane_g3_cp4_srt

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp4_srt_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp4_srt

0x2601,	// (0x0001d4e4) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2601,	// (0x0001d4e4) tabs_2_long_active_pane_srt_t1

0xa424,	// (0x00025307) bg_active_tab_pane_g1_cp4_srt

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp4_srt

0xa42d,	// (0x00025310) bg_active_tab_pane_g3_cp4_srt

0x4f16,	// (0x0001fdf9) tabs_3_long_active_pane_srt_ParamLimits

0x4f16,	// (0x0001fdf9) tabs_3_long_active_pane_srt

0x4f16,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4f16,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt

0x4f16,	// (0x0001fdf9) tabs_3_long_passive_pane_srt_ParamLimits

0x4f16,	// (0x0001fdf9) tabs_3_long_passive_pane_srt

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp5_srt

0x629c,	// (0x0002117f) bg_passive_tab_pane_g1_cp5_srt

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp5_srt

0x6293,	// (0x00021176) bg_passive_tab_pane_g3_cp5_srt

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp5_srt_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp5_srt

0x2618,	// (0x0001d4fb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2618,	// (0x0001d4fb) tabs_3_long_active_pane_srt_t1

0x629c,	// (0x0002117f) bg_active_tab_pane_g1_cp5_srt

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp5_srt

0x6293,	// (0x00021176) bg_active_tab_pane_g3_cp5_srt

0xa416,	// (0x000252f9) navi_text_pane_srt_t1

0xa40e,	// (0x000252f1) navi_icon_pane_srt_g1

0x664b,	// (0x0002152e) midp_editing_number_pane_srt

0x6542,	// (0x00021425) midp_ticker_pane_srt

0x6653,	// (0x00021536) midp_ticker_pane_srt_g1

0x665b,	// (0x0002153e) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002a695) midp_ticker_pane_srt_g

0x6663,	// (0x00021546) midp_ticker_pane_srt_t1

0xa3ff,	// (0x000252e2) midp_editing_number_pane_t1_copy1

0x2832,	// (0x0001d715) listscroll_midp_pane

0x2832,	// (0x0001d715) midp_form_pane

0x654a,	// (0x0002142d) midp_info_popup_window_ParamLimits

0x654a,	// (0x0002142d) midp_info_popup_window

0x5c3d,	// (0x00020b20) bg_popup_sub_pane_cp50_ParamLimits

0x5c3d,	// (0x00020b20) bg_popup_sub_pane_cp50

0x96d8,	// (0x000245bb) listscroll_midp_info_pane_ParamLimits

0x96d8,	// (0x000245bb) listscroll_midp_info_pane

0x96c0,	// (0x000245a3) listscroll_form_midp_pane_ParamLimits

0x96c0,	// (0x000245a3) listscroll_form_midp_pane

0x96cc,	// (0x000245af) scroll_bar_cp050

0x349e,	// (0x0001e381) list_midp_pane

0xb7ce,	// (0x000266b1) signal_pane_g2_cp

0x95f2,	// (0x000244d5) listscroll_midp_info_pane_t1_ParamLimits

0x95f2,	// (0x000244d5) listscroll_midp_info_pane_t1

0x960a,	// (0x000244ed) listscroll_midp_info_pane_t2_ParamLimits

0x960a,	// (0x000244ed) listscroll_midp_info_pane_t2

0x9648,	// (0x0002452b) listscroll_midp_info_pane_t3_ParamLimits

0x9648,	// (0x0002452b) listscroll_midp_info_pane_t3

0x9682,	// (0x00024565) listscroll_midp_info_pane_t4_ParamLimits

0x9682,	// (0x00024565) listscroll_midp_info_pane_t4

0x0003,

0xf857,	// (0x0002a73a) listscroll_midp_info_pane_t_ParamLimits

0xf857,	// (0x0002a73a) listscroll_midp_info_pane_t

0x5ce0,	// (0x00020bc3) scroll_pane_cp21

0x9596,	// (0x00024479) form_midp_field_choice_group_pane

0x959f,	// (0x00024482) form_midp_field_text_pane

0x95d8,	// (0x000244bb) form_midp_field_time_pane

0x95e0,	// (0x000244c3) form_midp_gauge_slider_pane

0x95e9,	// (0x000244cc) form_midp_gauge_wait_pane

0x4ec8,	// (0x0001fdab) form_midp_image_pane

0x1dec,	// (0x0001cccf) list_single_midp_pane_ParamLimits

0x1dec,	// (0x0001cccf) list_single_midp_pane

0x347d,	// (0x0001e360) form_midp_field_text_pane_t1

0x9445,	// (0x00024328) input_focus_pane_cp050

0x9585,	// (0x00024468) list_midp_form_text_pane

0x9554,	// (0x00024437) form_midp_field_choice_group_pane_t1

0x9562,	// (0x00024445) input_focus_pane_cp051

0x9576,	// (0x00024459) list_midp_choice_pane

0x4ec8,	// (0x0001fdab) status_idle_pane

0x9538,	// (0x0002441b) form_midp_field_time_pane_t1

0x4e46,	// (0x0001fd29) wait_anim_pane_g2_copy1

0x9546,	// (0x00024429) form_midp_field_time_pane_t2

0x0001,

0x65b5,	// (0x00021498) aid_navinavi_width_2_pane

0xf852,	// (0x0002a735) form_midp_field_time_pane_t

0x4ec8,	// (0x0001fdab) input_focus_pane_cp052

0x4ec8,	// (0x0001fdab) bg_input_focus_pane_cp040

0x9514,	// (0x000243f7) form_midp_gauge_slider_pane_t1

0x9522,	// (0x00024405) form_midp_gauge_slider_pane_t2

0x3461,	// (0x0001e344) form_midp_gauge_slider_pane_t3

0x346f,	// (0x0001e352) form_midp_gauge_slider_pane_t4

0x0003,

0xf849,	// (0x0002a72c) form_midp_gauge_slider_pane_t

0x9530,	// (0x00024413) form_midp_slider_pane

0x4f2c,	// (0x0001fe0f) bg_input_focus_pane_cp041_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_input_focus_pane_cp041

0x94e4,	// (0x000243c7) form_midp_gauge_wait_pane_t1_ParamLimits

0x94e4,	// (0x000243c7) form_midp_gauge_wait_pane_t1

0x94f6,	// (0x000243d9) form_midp_gauge_wait_pane_t2_ParamLimits

0x94f6,	// (0x000243d9) form_midp_gauge_wait_pane_t2

0x0001,

0xf844,	// (0x0002a727) form_midp_gauge_wait_pane_t_ParamLimits

0xf844,	// (0x0002a727) form_midp_gauge_wait_pane_t

0x9508,	// (0x000243eb) form_midp_wait_pane_ParamLimits

0x9508,	// (0x000243eb) form_midp_wait_pane

0x94ae,	// (0x00024391) form_midp_image_pane_g1

0x94b7,	// (0x0002439a) form_midp_image_pane_t1

0x94c6,	// (0x000243a9) form_midp_image_pane_t2

0x94d5,	// (0x000243b8) form_midp_image_pane_t3

0x0002,

0xf83d,	// (0x0002a720) form_midp_image_pane_t

0x94a5,	// (0x00024388) list_single_midp_pane_g1

0xb225,	// (0x00026108) list_single_midp_pane_t1

0x344d,	// (0x0001e330) list_midp_form_item_pane_ParamLimits

0x344d,	// (0x0001e330) list_midp_form_item_pane

0x655d,	// (0x00021440) list_midp_form_item_pane_t1

0x656c,	// (0x0002144f) midp_ticker_pane_g1

0x6578,	// (0x0002145b) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002a67b) midp_ticker_pane_g

0x6584,	// (0x00021467) midp_ticker_pane_t1

0xa3ff,	// (0x000252e2) midp_editing_number_pane_t1

0xa487,	// (0x0002536a) midp_editing_number_pane

0xa493,	// (0x00025376) midp_ticker_pane

0xa3ef,	// (0x000252d2) ai_message_heading_pane

0x4ec8,	// (0x0001fdab) bg_popup_window_pane_cp14

0xa3f7,	// (0x000252da) listscroll_ai_message_pane

0xa379,	// (0x0002525c) ai_message_heading_pane_g1_ParamLimits

0xa379,	// (0x0002525c) ai_message_heading_pane_g1

0xa385,	// (0x00025268) ai_message_heading_pane_g2_ParamLimits

0xa385,	// (0x00025268) ai_message_heading_pane_g2

0xa391,	// (0x00025274) ai_message_heading_pane_g3_ParamLimits

0xa391,	// (0x00025274) ai_message_heading_pane_g3

0xa39d,	// (0x00025280) ai_message_heading_pane_g4_ParamLimits

0xa39d,	// (0x00025280) ai_message_heading_pane_g4

0x0003,

0xf97e,	// (0x0002a861) ai_message_heading_pane_g_ParamLimits

0xf97e,	// (0x0002a861) ai_message_heading_pane_g

0xa3a9,	// (0x0002528c) ai_message_heading_pane_t1_ParamLimits

0xa3a9,	// (0x0002528c) ai_message_heading_pane_t1

0xa3c3,	// (0x000252a6) ai_message_heading_pane_t2_ParamLimits

0xa3c3,	// (0x000252a6) ai_message_heading_pane_t2

0x0001,

0xf987,	// (0x0002a86a) ai_message_heading_pane_t_ParamLimits

0xf987,	// (0x0002a86a) ai_message_heading_pane_t

0xa3d5,	// (0x000252b8) bg_popup_heading_pane_cp1_ParamLimits

0xa3d5,	// (0x000252b8) bg_popup_heading_pane_cp1

0xa367,	// (0x0002524a) list_ai_message_pane_ParamLimits

0xa367,	// (0x0002524a) list_ai_message_pane

0x5ce0,	// (0x00020bc3) scroll_pane_cp10

0xa303,	// (0x000251e6) list_ai_message_pane_g1

0xa30b,	// (0x000251ee) list_ai_message_pane_g2

0x0001,

0xf95b,	// (0x0002a83e) list_ai_message_pane_g

0xa313,	// (0x000251f6) list_ai_message_pane_t1_ParamLimits

0xa313,	// (0x000251f6) list_ai_message_pane_t1

0xa328,	// (0x0002520b) list_ai_message_pane_t2_ParamLimits

0xa328,	// (0x0002520b) list_ai_message_pane_t2

0xa33d,	// (0x00025220) list_ai_message_pane_t3_ParamLimits

0xa33d,	// (0x00025220) list_ai_message_pane_t3

0xa352,	// (0x00025235) list_ai_message_pane_t4_ParamLimits

0xa352,	// (0x00025235) list_ai_message_pane_t4

0x0003,

0xf960,	// (0x0002a843) list_ai_message_pane_t_ParamLimits

0xf960,	// (0x0002a843) list_ai_message_pane_t

0xa2f1,	// (0x000251d4) cell_ai_soft_ind_pane_ParamLimits

0xa2f1,	// (0x000251d4) cell_ai_soft_ind_pane

0x6596,	// (0x00021479) cell_ai_soft_ind_pane_g1_ParamLimits

0x6596,	// (0x00021479) cell_ai_soft_ind_pane_g1

0x4ec8,	// (0x0001fdab) grid_highlight_cp1

0x65a3,	// (0x00021486) text_secondary_cp56_ParamLimits

0x65a3,	// (0x00021486) text_secondary_cp56

0xa2c6,	// (0x000251a9) example_general_pane_ParamLimits

0xa2c6,	// (0x000251a9) example_general_pane

0xa2d2,	// (0x000251b5) example_parent_pane_g1_ParamLimits

0xa2d2,	// (0x000251b5) example_parent_pane_g1

0xa2de,	// (0x000251c1) example_parent_pane_t1_ParamLimits

0xa2de,	// (0x000251c1) example_parent_pane_t1

0x2d41,	// (0x0001dc24) popup_preview_text_window_ParamLimits

0x2d41,	// (0x0001dc24) popup_preview_text_window

0x6487,	// (0x0002136a) list_single_pane_cp2_g4

0x5133,	// (0x00020016) bg_popup_preview_window_pane_ParamLimits

0x5133,	// (0x00020016) bg_popup_preview_window_pane

0xa069,	// (0x00024f4c) popup_preview_text_window_t1_ParamLimits

0xa069,	// (0x00024f4c) popup_preview_text_window_t1

0xa087,	// (0x00024f6a) popup_preview_text_window_t2_ParamLimits

0xa087,	// (0x00024f6a) popup_preview_text_window_t2

0xa0d0,	// (0x00024fb3) popup_preview_text_window_t3_ParamLimits

0xa0d0,	// (0x00024fb3) popup_preview_text_window_t3

0xa115,	// (0x00024ff8) popup_preview_text_window_t4_ParamLimits

0xa115,	// (0x00024ff8) popup_preview_text_window_t4

0x0004,

0xf92f,	// (0x0002a812) popup_preview_text_window_t_ParamLimits

0xf92f,	// (0x0002a812) popup_preview_text_window_t

0xa193,	// (0x00025076) scroll_pane_cp11

0x9357,	// (0x0002423a) bg_popup_preview_window_pane_g1

0xa029,	// (0x00024f0c) bg_popup_preview_window_pane_g2

0xa031,	// (0x00024f14) bg_popup_preview_window_pane_g3

0xa039,	// (0x00024f1c) bg_popup_preview_window_pane_g4

0xa041,	// (0x00024f24) bg_popup_preview_window_pane_g5

0xa049,	// (0x00024f2c) bg_popup_preview_window_pane_g6

0xa051,	// (0x00024f34) bg_popup_preview_window_pane_g7

0xa059,	// (0x00024f3c) bg_popup_preview_window_pane_g8

0x7151,	// (0x00022034) aid_popup_width_pane

0x2cc3,	// (0x0001dba6) popup_midp_note_alarm_window_ParamLimits

0x2cc3,	// (0x0001dba6) popup_midp_note_alarm_window

0x5b7d,	// (0x00020a60) data_form_pane_ParamLimits

0x1c85,	// (0x0001cb68) form_field_data_pane_g1

0x25c7,	// (0x0001d4aa) form_field_data_pane_t1_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_ParamLimits

0x5b97,	// (0x00020a7a) data_form_wide_pane_ParamLimits

0xafb4,	// (0x00025e97) form_field_data_wide_pane_g1

0xafc0,	// (0x00025ea3) form_field_data_wide_pane_t1_ParamLimits

0x52f2,	// (0x000201d5) input_focus_pane_cp6_ParamLimits

0x25df,	// (0x0001d4c2) input_popup_find_pane_g1_ParamLimits

0x25df,	// (0x0001d4c2) input_popup_find_pane_g1

0x7898,	// (0x0002277b) aid_navi_side_left_pane

0x78a8,	// (0x0002278b) aid_navi_side_right_pane

0x9b05,	// (0x000249e8) bg_popup_window_pane_cp30_ParamLimits

0x9b05,	// (0x000249e8) bg_popup_window_pane_cp30

0x9b7f,	// (0x00024a62) popup_midp_note_alarm_window_g1_ParamLimits

0x9b7f,	// (0x00024a62) popup_midp_note_alarm_window_g1

0x9baf,	// (0x00024a92) popup_midp_note_alarm_window_t1_ParamLimits

0x9baf,	// (0x00024a92) popup_midp_note_alarm_window_t1

0x9c50,	// (0x00024b33) popup_midp_note_alarm_window_t2_ParamLimits

0x9c50,	// (0x00024b33) popup_midp_note_alarm_window_t2

0x9cfe,	// (0x00024be1) popup_midp_note_alarm_window_t3_ParamLimits

0x9cfe,	// (0x00024be1) popup_midp_note_alarm_window_t3

0x9d26,	// (0x00024c09) popup_midp_note_alarm_window_t4_ParamLimits

0x9d26,	// (0x00024c09) popup_midp_note_alarm_window_t4

0x9d46,	// (0x00024c29) popup_midp_note_alarm_window_t5_ParamLimits

0x9d46,	// (0x00024c29) popup_midp_note_alarm_window_t5

0x000a,

0xf8cc,	// (0x0002a7af) popup_midp_note_alarm_window_t_ParamLimits

0xf8cc,	// (0x0002a7af) popup_midp_note_alarm_window_t

0x9df2,	// (0x00024cd5) wait_bar_pane_cp1_ParamLimits

0x9df2,	// (0x00024cd5) wait_bar_pane_cp1

0x4ec8,	// (0x0001fdab) wait_anim_pane_copy1

0x4ec8,	// (0x0001fdab) wait_border_pane_copy1

0x984b,	// (0x0002472e) wait_border_pane_g1_copy1

0xafda,	// (0x00025ebd) form_field_popup_pane_g1

0x1c8f,	// (0x0001cb72) form_field_popup_pane_t1_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_cp7_ParamLimits

0x5b7d,	// (0x00020a60) list_form_pane_ParamLimits

0xaffa,	// (0x00025edd) form_field_popup_wide_pane_g1

0xb002,	// (0x00025ee5) form_field_popup_wide_pane_t1_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_cp8_ParamLimits

0x5bb7,	// (0x00020a9a) list_form_wide_pane_ParamLimits

0xa527,	// (0x0002540a) aid_size_cell_graphic_pane

0x1d0c,	// (0x0001cbef) data_form_pane_t1_ParamLimits

0x1e14,	// (0x0001ccf7) data_form_wide_pane_t1_ParamLimits

0x309f,	// (0x0001df82) bg_status_flat_pane

0x223b,	// (0x0001d11e) title_pane_t1_ParamLimits

0x4ede,	// (0x0001fdc1) title_pane_t2_ParamLimits

0x4f04,	// (0x0001fde7) title_pane_t3_ParamLimits

0xf59b,	// (0x0002a47e) title_pane_t_ParamLimits

0x26df,	// (0x0001d5c2) level_1_signal_ParamLimits

0x26f1,	// (0x0001d5d4) level_2_signal_ParamLimits

0x2704,	// (0x0001d5e7) level_3_signal_ParamLimits

0x2717,	// (0x0001d5fa) level_4_signal_ParamLimits

0x272a,	// (0x0001d60d) level_5_signal_ParamLimits

0x273d,	// (0x0001d620) level_6_signal_ParamLimits

0x2750,	// (0x0001d633) level_7_signal_ParamLimits

0x26df,	// (0x0001d5c2) level_1_battery_ParamLimits

0x26f1,	// (0x0001d5d4) level_2_battery_ParamLimits

0x2704,	// (0x0001d5e7) level_3_battery_ParamLimits

0x2717,	// (0x0001d5fa) level_4_battery_ParamLimits

0x272a,	// (0x0001d60d) level_5_battery_ParamLimits

0x273d,	// (0x0001d620) level_6_battery_ParamLimits

0x2750,	// (0x0001d633) level_7_battery_ParamLimits

0x9a34,	// (0x00024917) bg_status_flat_pane_g1

0x9a3c,	// (0x0002491f) bg_status_flat_pane_g2

0x9a44,	// (0x00024927) bg_status_flat_pane_g3

0x9a4c,	// (0x0002492f) bg_status_flat_pane_g4

0x9a54,	// (0x00024937) bg_status_flat_pane_g5

0x9a5c,	// (0x0002493f) bg_status_flat_pane_g6

0x9a64,	// (0x00024947) bg_status_flat_pane_g7

0x22c8,	// (0x0001d1ab) tabs_3_active_pane_t1_ParamLimits

0x22c8,	// (0x0001d1ab) tabs_3_passive_pane_t1_ParamLimits

0x22de,	// (0x0001d1c1) tabs_4_active_pane_t1_ParamLimits

0x22de,	// (0x0001d1c1) tabs_4_1_passive_pane_t1_ParamLimits

0x25eb,	// (0x0001d4ce) tabs_2_active_pane_t1_ParamLimits

0x25eb,	// (0x0001d4ce) tabs_2_passive_pane_t1_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp4_ParamLimits

0x2601,	// (0x0001d4e4) tabs_2_long_active_pane_t1_ParamLimits

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp4_ParamLimits

0x8023,	// (0x00022f06) list_single_midp_graphic_pane_t1_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_active_tab_pane_cp5_ParamLimits

0x2618,	// (0x0001d4fb) tabs_3_long_active_pane_t1_ParamLimits

0x9099,	// (0x00023f7c) bg_passive_tab_pane_cp5_ParamLimits

0x8023,	// (0x00022f06) list_single_midp_graphic_pane_t1

0x309f,	// (0x0001df82) bg_status_flat_pane_ParamLimits

0x9236,	// (0x00024119) indicator_pane_cp2_ParamLimits

0x9236,	// (0x00024119) indicator_pane_cp2

0x3205,	// (0x0001e0e8) navi_pane_srt_ParamLimits

0x3205,	// (0x0001e0e8) navi_pane_srt

0x925e,	// (0x00024141) popup_clock_digital_analogue_window_cp1

0x4f9c,	// (0x0001fe7f) indicator_pane_t1

0x6542,	// (0x00021425) copy_highlight_pane

0x6542,	// (0x00021425) cursor_graphics_pane

0x6542,	// (0x00021425) graphic_within_text_pane

0x6542,	// (0x00021425) link_highlight_pane

0xa156,	// (0x00025039) popup_preview_text_window_t5_ParamLimits

0xa156,	// (0x00025039) popup_preview_text_window_t5

0x65bd,	// (0x000214a0) cursor_digital_pane

0x65bd,	// (0x000214a0) cursor_primary_pane

0x65ce,	// (0x000214b1) cursor_primary_small_pane

0x65d6,	// (0x000214b9) cursor_secondary_pane

0x65de,	// (0x000214c1) cursor_title_pane

0x65bd,	// (0x000214a0) link_highlight_digital_pane

0x65c5,	// (0x000214a8) link_highlight_primary_pane

0x65ce,	// (0x000214b1) link_highlight_primary_small_pane

0x65d6,	// (0x000214b9) link_highlight_secondary_pane

0x65de,	// (0x000214c1) link_highlight_title_pane

0x65bd,	// (0x000214a0) copy_highlight_digital_pane

0x65bd,	// (0x000214a0) copy_highlight_primary_pane

0x65ce,	// (0x000214b1) copy_highlight_primary_small_pane

0x65d6,	// (0x000214b9) copy_highlight_secondary_pane

0x65de,	// (0x000214c1) copy_highlight_title_pane

0x65d6,	// (0x000214b9) graphic_text_digital_pane

0x9ab4,	// (0x00024997) graphic_text_primary_pane

0x9abd,	// (0x000249a0) graphic_text_primary_small_pane

0x65ce,	// (0x000214b1) graphic_text_secondary_pane

0x65bd,	// (0x000214a0) graphic_text_title_pane

0x28cf,	// (0x0001d7b2) cursor_primary_pane_g1

0x9aa6,	// (0x00024989) cursor_text_primary_t1

0x34da,	// (0x0001e3bd) cursor_primary_small_pane_g1

0x9a98,	// (0x0002497b) cursor_text_primary_small_t1

0x34d0,	// (0x0001e3b3) cursor_primary_small_pane_g1_copy1

0x9a8a,	// (0x0002496d) cursor_text_primary_small_t1_copy1

0x9a7c,	// (0x0002495f) cursor_text_title_t1

0x34c6,	// (0x0001e3a9) cursor_title_pane_g1

0x28cf,	// (0x0001d7b2) cursor_digital_pane_g1

0x65e6,	// (0x000214c9) cursor_text_digital_t1

0x65f4,	// (0x000214d7) link_highlight_primary_pane_g1

0x9a25,	// (0x00024908) link_highlight_primary_pane_t1

0x65f4,	// (0x000214d7) link_highlight_primary_small_pane_g1

0x65fc,	// (0x000214df) link_highlight_primary_small_pane_t1

0x660b,	// (0x000214ee) link_highlight_secondary_pane_g1

0x6613,	// (0x000214f6) link_highlight_secondary_pane_t1

0x998a,	// (0x0002486d) link_highlight_title_pane_g1

0x99a1,	// (0x00024884) link_highlight_title_pane_t1

0x998a,	// (0x0002486d) link_highlight_digital_pane_g1

0x9992,	// (0x00024875) link_highlight_digital_pane_t1

0x9866,	// (0x00024749) copy_highlight_primary_pane_g1

0x988c,	// (0x0002476f) copy_highlight_primary_pane_t1

0x9866,	// (0x00024749) copy_highlight_primary_small_pane_g1

0x987d,	// (0x00024760) copy_highlight_primary_small_pane_t1

0x6622,	// (0x00021505) copy_highlight_secondary_pane_g1

0x662a,	// (0x0002150d) copy_highlight_secondary_pane_t1

0x9866,	// (0x00024749) copy_highlight_title_pane_g1

0x986e,	// (0x00024751) copy_highlight_title_pane_t1

0x9866,	// (0x00024749) copy_highlight_digital_pane_g1

0xa648,	// (0x0002552b) copy_highlight_digital_pane_t1

0xa59c,	// (0x0002547f) graphic_text_primary_pane_g1

0xa62c,	// (0x0002550f) graphic_text_primary_pane_t1

0xa63a,	// (0x0002551d) graphic_text_primary_pane_t2

0x0001,

0xf9fb,	// (0x0002a8de) graphic_text_primary_pane_t

0xa608,	// (0x000254eb) graphic_text_primary_small_pane_g1

0xa610,	// (0x000254f3) graphic_text_primary_small_pane_t1

0xa61e,	// (0x00025501) graphic_text_primary_small_pane_t2

0x0001,

0xf9f6,	// (0x0002a8d9) graphic_text_primary_small_pane_t

0xa5e4,	// (0x000254c7) graphic_text_secondary_pane_g1

0xa5ec,	// (0x000254cf) graphic_text_secondary_pane_t1

0xa5fa,	// (0x000254dd) graphic_text_secondary_pane_t2

0x0001,

0xf9f1,	// (0x0002a8d4) graphic_text_secondary_pane_t

0xa5c0,	// (0x000254a3) graphic_text_title_pane_g1

0xa5c8,	// (0x000254ab) graphic_text_title_pane_t1

0xa5d6,	// (0x000254b9) graphic_text_title_pane_t2

0x0001,

0xf9ec,	// (0x0002a8cf) graphic_text_title_pane_t

0xa59c,	// (0x0002547f) graphic_text_digital_pane_g1

0xa5a4,	// (0x00025487) graphic_text_digital_pane_t1

0xa5b2,	// (0x00025495) graphic_text_digital_pane_t2

0x0001,

0xf9e7,	// (0x0002a8ca) graphic_text_digital_pane_t

0x4f2c,	// (0x0001fe0f) navi_icon_pane_srt_ParamLimits

0x4f2c,	// (0x0001fe0f) navi_icon_pane_srt

0x4ec8,	// (0x0001fdab) navi_midp_pane_srt

0x4ec8,	// (0x0001fdab) navi_navi_pane_srt

0x4f2c,	// (0x0001fe0f) navi_text_pane_srt_ParamLimits

0x4f2c,	// (0x0001fe0f) navi_text_pane_srt

0x9fe2,	// (0x00024ec5) navi_navi_icon_text_pane_srt

0x9fea,	// (0x00024ecd) navi_navi_pane_srt_g1_ParamLimits

0x9fea,	// (0x00024ecd) navi_navi_pane_srt_g1

0x9ffc,	// (0x00024edf) navi_navi_pane_srt_g2_ParamLimits

0x9ffc,	// (0x00024edf) navi_navi_pane_srt_g2

0x0001,

0xf9e2,	// (0x0002a8c5) navi_navi_pane_srt_g_ParamLimits

0xf9e2,	// (0x0002a8c5) navi_navi_pane_srt_g

0xa00e,	// (0x00024ef1) navi_navi_tabs_pane_srt

0x9fe2,	// (0x00024ec5) navi_navi_text_pane_srt

0x9fe2,	// (0x00024ec5) navi_navi_volume_pane_srt

0xa58d,	// (0x00025470) navi_navi_text_pane_srt_t1

0x8387,	// (0x0002326a) navi_navi_volume_pane_srt_g1

0x838f,	// (0x00023272) volume_small_pane_srt_ParamLimits

0x838f,	// (0x00023272) volume_small_pane_srt

0x7d8d,	// (0x00022c70) volume_small_pane_srt_g1_ParamLimits

0x7d8d,	// (0x00022c70) volume_small_pane_srt_g1

0x7d9d,	// (0x00022c80) volume_small_pane_srt_g2_ParamLimits

0x7d9d,	// (0x00022c80) volume_small_pane_srt_g2

0x7dae,	// (0x00022c91) volume_small_pane_srt_g3_ParamLimits

0x7dae,	// (0x00022c91) volume_small_pane_srt_g3

0x7dbf,	// (0x00022ca2) volume_small_pane_srt_g4_ParamLimits

0x7dbf,	// (0x00022ca2) volume_small_pane_srt_g4

0x7dd0,	// (0x00022cb3) volume_small_pane_srt_g5_ParamLimits

0x7dd0,	// (0x00022cb3) volume_small_pane_srt_g5

0x7de1,	// (0x00022cc4) volume_small_pane_srt_g6_ParamLimits

0x7de1,	// (0x00022cc4) volume_small_pane_srt_g6

0x7df2,	// (0x00022cd5) volume_small_pane_srt_g7_ParamLimits

0x7df2,	// (0x00022cd5) volume_small_pane_srt_g7

0x7e03,	// (0x00022ce6) volume_small_pane_srt_g8_ParamLimits

0x7e03,	// (0x00022ce6) volume_small_pane_srt_g8

0x7e14,	// (0x00022cf7) volume_small_pane_srt_g9_ParamLimits

0x7e14,	// (0x00022cf7) volume_small_pane_srt_g9

0x7e25,	// (0x00022d08) volume_small_pane_srt_g10_ParamLimits

0x7e25,	// (0x00022d08) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002a680) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002a680) volume_small_pane_srt_g

0x51dc,	// (0x000200bf) query_popup_data_pane_cp2

0xa573,	// (0x00025456) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa573,	// (0x00025456) navi_navi_icon_text_pane_srt_t1

0x9ab4,	// (0x00024997) navi_tabs_2_long_pane_srt

0x9ab4,	// (0x00024997) navi_tabs_2_pane_srt

0x9ab4,	// (0x00024997) navi_tabs_3_long_pane_srt

0x9ab4,	// (0x00024997) navi_tabs_3_pane_srt

0x9ab4,	// (0x00024997) navi_tabs_4_pane_srt

0x8367,	// (0x0002324a) tabs_2_active_pane_srt_ParamLimits

0x8367,	// (0x0002324a) tabs_2_active_pane_srt

0x8377,	// (0x0002325a) tabs_2_passive_pane_srt_ParamLimits

0x8377,	// (0x0002325a) tabs_2_passive_pane_srt

0x9445,	// (0x00024328) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9445,	// (0x00024328) bg_passive_tab_pane_cp1_srt

0xa551,	// (0x00025434) bg_passive_tab_pane_g1_cp1_srt

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp1_srt

0xa55a,	// (0x0002543d) bg_passive_tab_pane_g3_cp1_srt

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp1_srt_ParamLimits

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp1_srt

0xa563,	// (0x00025446) tabs_2_active_pane_srt_g1

0x25eb,	// (0x0001d4ce) tabs_2_active_pane_srt_t1_ParamLimits

0x25eb,	// (0x0001d4ce) tabs_2_active_pane_srt_t1

0xa551,	// (0x00025434) bg_active_tab_pane_g1_cp1_srt

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp1_srt

0xa55a,	// (0x0002543d) bg_active_tab_pane_g3_cp1_srt

0x8334,	// (0x00023217) tabs_3_active_pane_srt_ParamLimits

0x8334,	// (0x00023217) tabs_3_active_pane_srt

0x8345,	// (0x00023228) tabs_3_passive_pane_cp_srt_ParamLimits

0x8345,	// (0x00023228) tabs_3_passive_pane_cp_srt

0x8356,	// (0x00023239) tabs_3_passive_pane_srt_ParamLimits

0x8356,	// (0x00023239) tabs_3_passive_pane_srt

0x9445,	// (0x00024328) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9445,	// (0x00024328) bg_passive_tab_pane_cp2_srt

0x6642,	// (0x00021525) bg_passive_tab_pane_g1_cp2_srt

0x624c,	// (0x0002112f) bg_passive_tab_pane_g2_cp2_srt

0x6639,	// (0x0002151c) bg_passive_tab_pane_g3_cp2_srt

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp2_srt_ParamLimits

0x4f16,	// (0x0001fdf9) bg_active_tab_pane_cp2_srt

0xa549,	// (0x0002542c) tabs_3_active_pane_srt_g1

0x22c8,	// (0x0001d1ab) tabs_3_active_pane_srt_t1_ParamLimits

0x22c8,	// (0x0001d1ab) tabs_3_active_pane_srt_t1

0x6642,	// (0x00021525) bg_active_tab_pane_g1_cp2_srt

0x624c,	// (0x0002112f) bg_active_tab_pane_g2_cp2_srt

0x6639,	// (0x0002151c) bg_active_tab_pane_g3_cp2_srt

0x82ec,	// (0x000231cf) tabs_4_active_pane_srt_ParamLimits

0x82ec,	// (0x000231cf) tabs_4_active_pane_srt

0x82fe,	// (0x000231e1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x82fe,	// (0x000231e1) tabs_4_passive_pane_cp2_srt

0x904f,	// (0x00023f32) aid_size_cell_toolbar

0x2a33,	// (0x0001d916) main_idle_act_pane_ParamLimits

0x911f,	// (0x00024002) popup_large_graphic_colour_window_ParamLimits

0x2f91,	// (0x0001de74) popup_toolbar_window_ParamLimits

0x2f91,	// (0x0001de74) popup_toolbar_window

0xb2a2,	// (0x00026185) list_single_graphic_2heading_pane_ParamLimits

0xb2a2,	// (0x00026185) list_single_graphic_2heading_pane

0x5ebe,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane

0x5ed0,	// (0x00020db3) aid_size_cell_apps_grid_prt_pane

0x9099,	// (0x00023f7c) bg_wml_button_pane_cp1_ParamLimits

0x9099,	// (0x00023f7c) bg_wml_button_pane_cp1

0x347d,	// (0x0001e360) form_midp_field_text_pane_t1_ParamLimits

0x9445,	// (0x00024328) input_focus_pane_cp050_ParamLimits

0x9585,	// (0x00024468) list_midp_form_text_pane_ParamLimits

0x9562,	// (0x00024445) input_focus_pane_cp051_ParamLimits

0x9576,	// (0x00024459) list_midp_choice_pane_ParamLimits

0x341b,	// (0x0001e2fe) list_single_2graphic_pane_cp3_ParamLimits

0x341b,	// (0x0001e2fe) list_single_2graphic_pane_cp3

0x342e,	// (0x0001e311) list_single_midp_graphic_pane_ParamLimits

0x342e,	// (0x0001e311) list_single_midp_graphic_pane

0x70c7,	// (0x00021faa) list_single_graphic_2heading_pane_g1_ParamLimits

0x70c7,	// (0x00021faa) list_single_graphic_2heading_pane_g1

0x70d3,	// (0x00021fb6) list_single_graphic_2heading_pane_g4_ParamLimits

0x70d3,	// (0x00021fb6) list_single_graphic_2heading_pane_g4

0x70df,	// (0x00021fc2) list_single_graphic_2heading_pane_g5_ParamLimits

0x70df,	// (0x00021fc2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002a6d3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002a6d3) list_single_graphic_2heading_pane_g

0x70eb,	// (0x00021fce) list_single_graphic_2heading_pane_t1_ParamLimits

0x70eb,	// (0x00021fce) list_single_graphic_2heading_pane_t1

0x70ff,	// (0x00021fe2) list_single_graphic_2heading_pane_t2_ParamLimits

0x70ff,	// (0x00021fe2) list_single_graphic_2heading_pane_t2

0x7119,	// (0x00021ffc) list_single_graphic_2heading_pane_t3_ParamLimits

0x7119,	// (0x00021ffc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0002a6da) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0002a6da) list_single_graphic_2heading_pane_t

0x92a1,	// (0x00024184) bg_popup_sub_pane_cp2

0x92c7,	// (0x000241aa) grid_toobar_pane

0x7f9f,	// (0x00022e82) cell_toolbar_pane_ParamLimits

0x7f9f,	// (0x00022e82) cell_toolbar_pane

0x92fd,	// (0x000241e0) cell_toolbar_pane_g1_ParamLimits

0x92fd,	// (0x000241e0) cell_toolbar_pane_g1

0x930f,	// (0x000241f2) cell_toolbar_pane_g2_ParamLimits

0x930f,	// (0x000241f2) cell_toolbar_pane_g2

0x0001,

0xf7fe,	// (0x0002a6e1) cell_toolbar_pane_g_ParamLimits

0xf7fe,	// (0x0002a6e1) cell_toolbar_pane_g

0x9331,	// (0x00024214) grid_highlight_pane_cp2_ParamLimits

0x9331,	// (0x00024214) grid_highlight_pane_cp2

0x934b,	// (0x0002422e) toolbar_button_pane

0x9357,	// (0x0002423a) toolbar_button_pane_g1

0x935f,	// (0x00024242) toolbar_button_pane_g2

0x9367,	// (0x0002424a) toolbar_button_pane_g3

0x936f,	// (0x00024252) toolbar_button_pane_g4

0x9377,	// (0x0002425a) toolbar_button_pane_g5

0x937f,	// (0x00024262) toolbar_button_pane_g6

0x9387,	// (0x0002426a) toolbar_button_pane_g7

0x938f,	// (0x00024272) toolbar_button_pane_g8

0x9397,	// (0x0002427a) toolbar_button_pane_g9

0x0009,

0xf803,	// (0x0002a6e6) toolbar_button_pane_g

0x7fce,	// (0x00022eb1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7fce,	// (0x00022eb1) list_single_2graphic_pane_g1_cp3

0xe2d8,	// (0x000291bb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe2d8,	// (0x000291bb) list_single_2graphic_pane_g2_cp3

0x7fe9,	// (0x00022ecc) list_single_2graphic_pane_g3_cp3

0x7ff1,	// (0x00022ed4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7ff1,	// (0x00022ed4) list_single_2graphic_pane_g4_cp3

0x7ffd,	// (0x00022ee0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7ffd,	// (0x00022ee0) list_single_2graphic_pane_t1_cp3

0x8017,	// (0x00022efa) list_single_midp_graphic_pane_g2_ParamLimits

0x8017,	// (0x00022efa) list_single_midp_graphic_pane_g2

0x9057,	// (0x00023f3a) aid_zoom_text_primary

0xb1a2,	// (0x00026085) aid_zoom_text_secondary

0x66f4,	// (0x000215d7) status_small_pane_g7_ParamLimits

0x66f4,	// (0x000215d7) status_small_pane_g7

0x6717,	// (0x000215fa) status_small_pane_t1_ParamLimits

0x2210,	// (0x0001d0f3) title_pane_g2

0x0003,

0xf592,	// (0x0002a475) title_pane_g

0x24f2,	// (0x0001d3d5) aid_size_cell_colour_1_pane_ParamLimits

0x24f2,	// (0x0001d3d5) aid_size_cell_colour_1_pane

0x2506,	// (0x0001d3e9) aid_size_cell_colour_2_pane_ParamLimits

0x2506,	// (0x0001d3e9) aid_size_cell_colour_2_pane

0x251a,	// (0x0001d3fd) aid_size_cell_colour_3_pane_ParamLimits

0x251a,	// (0x0001d3fd) aid_size_cell_colour_3_pane

0x252e,	// (0x0001d411) aid_size_cell_colour_4_pane_ParamLimits

0x252e,	// (0x0001d411) aid_size_cell_colour_4_pane

0x77fa,	// (0x000226dd) title_pane_stacon_g1_ParamLimits

0x77fa,	// (0x000226dd) title_pane_stacon_g1

0x98e3,	// (0x000247c6) popup_note_wait_window_g3_ParamLimits

0x98e3,	// (0x000247c6) popup_note_wait_window_g3

0x9959,	// (0x0002483c) popup_note_wait_window_t5_ParamLimits

0x9959,	// (0x0002483c) popup_note_wait_window_t5

0x4ec8,	// (0x0001fdab) main_feb_china_hwr_fs_writing_pane

0x2a94,	// (0x0001d977) popup_feb_china_hwr_fs_window_ParamLimits

0x2a94,	// (0x0001d977) popup_feb_china_hwr_fs_window

0xe2e9,	// (0x000291cc) aid_size_cell_hwr_fs_ParamLimits

0xe2e9,	// (0x000291cc) aid_size_cell_hwr_fs

0x9445,	// (0x00024328) bg_popup_sub_pane_cp3_ParamLimits

0x9445,	// (0x00024328) bg_popup_sub_pane_cp3

0xe2fe,	// (0x000291e1) grid_hwr_fs_pane_ParamLimits

0xe2fe,	// (0x000291e1) grid_hwr_fs_pane

0x8062,	// (0x00022f45) linegrid_hwr_fs_pane_ParamLimits

0x8062,	// (0x00022f45) linegrid_hwr_fs_pane

0xe316,	// (0x000291f9) cell_hwr_fs_pane_ParamLimits

0xe316,	// (0x000291f9) cell_hwr_fs_pane

0x9451,	// (0x00024334) linegrid_hwr_fs_pane_g1_ParamLimits

0x9451,	// (0x00024334) linegrid_hwr_fs_pane_g1

0x33e1,	// (0x0001e2c4) linegrid_hwr_fs_pane_g2_ParamLimits

0x33e1,	// (0x0001e2c4) linegrid_hwr_fs_pane_g2

0x945d,	// (0x00024340) linegrid_hwr_fs_pane_g3_ParamLimits

0x945d,	// (0x00024340) linegrid_hwr_fs_pane_g3

0x8090,	// (0x00022f73) linegrid_hwr_fs_pane_g4_ParamLimits

0x8090,	// (0x00022f73) linegrid_hwr_fs_pane_g4

0x80aa,	// (0x00022f8d) linegrid_hwr_fs_pane_g5_ParamLimits

0x80aa,	// (0x00022f8d) linegrid_hwr_fs_pane_g5

0x0004,

0xf829,	// (0x0002a70c) linegrid_hwr_fs_pane_g_ParamLimits

0xf829,	// (0x0002a70c) linegrid_hwr_fs_pane_g

0x9469,	// (0x0002434c) cell_hwr_fs_pane_g1_ParamLimits

0x9469,	// (0x0002434c) cell_hwr_fs_pane_g1

0x926f,	// (0x00024152) cell_hwr_fs_pane_g2_ParamLimits

0x926f,	// (0x00024152) cell_hwr_fs_pane_g2

0x33f3,	// (0x0001e2d6) cell_hwr_fs_pane_g3_ParamLimits

0x33f3,	// (0x0001e2d6) cell_hwr_fs_pane_g3

0x3400,	// (0x0001e2e3) cell_hwr_fs_pane_g4_ParamLimits

0x3400,	// (0x0001e2e3) cell_hwr_fs_pane_g4

0x0003,

0xf834,	// (0x0002a717) cell_hwr_fs_pane_g_ParamLimits

0xf834,	// (0x0002a717) cell_hwr_fs_pane_g

0xe336,	// (0x00029219) cell_hwr_fs_pane_t1

0x4ec8,	// (0x0001fdab) grid_highlight_pane_cp6

0x4ec8,	// (0x0001fdab) main_idle_act2_pane

0x5cc7,	// (0x00020baa) aid_inside_area_popup_secondary

0x35e7,	// (0x0001e4ca) aid_inside_area_window_primary_ParamLimits

0x35e7,	// (0x0001e4ca) aid_inside_area_window_primary

0xa657,	// (0x0002553a) ai2_news_ticker_pane

0xa65f,	// (0x00025542) aid_size_cell_ai1_link_ParamLimits

0xa65f,	// (0x00025542) aid_size_cell_ai1_link

0x39f3,	// (0x0001e8d6) popup_ai2_data_window_ParamLimits

0x39f3,	// (0x0001e8d6) popup_ai2_data_window

0xa679,	// (0x0002555c) popup_ai2_link_window_ParamLimits

0xa679,	// (0x0002555c) popup_ai2_link_window

0x9445,	// (0x00024328) bg_popup_sub_pane_cp4_ParamLimits

0x9445,	// (0x00024328) bg_popup_sub_pane_cp4

0xa68d,	// (0x00025570) grid_ai2_link_pane_ParamLimits

0xa68d,	// (0x00025570) grid_ai2_link_pane

0xa6a4,	// (0x00025587) popup_ai2_link_window_g1_ParamLimits

0xa6a4,	// (0x00025587) popup_ai2_link_window_g1

0xa6b0,	// (0x00025593) popup_ai2_link_window_g2_ParamLimits

0xa6b0,	// (0x00025593) popup_ai2_link_window_g2

0x0001,

0xfa00,	// (0x0002a8e3) popup_ai2_link_window_g_ParamLimits

0xfa00,	// (0x0002a8e3) popup_ai2_link_window_g

0xa6bf,	// (0x000255a2) ai2_mp_button_pane

0xa6c7,	// (0x000255aa) ai2_mp_volume_pane

0x9562,	// (0x00024445) bg_popup_sub_pane_cp5_ParamLimits

0x9562,	// (0x00024445) bg_popup_sub_pane_cp5

0xa6cf,	// (0x000255b2) heading_ai2_gene_pane_ParamLimits

0xa6cf,	// (0x000255b2) heading_ai2_gene_pane

0xa6db,	// (0x000255be) list_ai2_gene_pane_ParamLimits

0xa6db,	// (0x000255be) list_ai2_gene_pane

0xa723,	// (0x00025606) cell_ai2_link_pane_ParamLimits

0xa723,	// (0x00025606) cell_ai2_link_pane

0xa739,	// (0x0002561c) cell_ai2_link_pane_g1

0x4ec8,	// (0x0001fdab) grid_highlight_pane_cp7

0x83a4,	// (0x00023287) ai2_mp_volume_pane_g1

0xa7ce,	// (0x000256b1) ai2_mp_volume_pane_g2

0x3a1d,	// (0x0001e900) list_ai2_gene_pane_t1

0xa7d6,	// (0x000256b9) ai2_mp_volume_pane_g3

0x0002,

0xfa19,	// (0x0002a8fc) ai2_mp_volume_pane_g

0x83ac,	// (0x0002328f) volume_small_pane_cp3

0xa7de,	// (0x000256c1) aid_size_cell_ai2_button

0xa7e6,	// (0x000256c9) grid_ai2_button_pane

0xa7ef,	// (0x000256d2) cell_ai2_button_pane_ParamLimits

0xa7ef,	// (0x000256d2) cell_ai2_button_pane

0x4e46,	// (0x0001fd29) cell_ai2_button_pane_g1

0x4ec8,	// (0x0001fdab) grid_highlight_pane_cp8

0xa78e,	// (0x00025671) ai2_gene_pane_t1_ParamLimits

0xa78e,	// (0x00025671) ai2_gene_pane_t1

0x2a1f,	// (0x0001d902) aid_height_parent_landscape

0x379f,	// (0x0001e682) aid_height_set_list

0xa44b,	// (0x0002532e) aid_size_parent

0xa527,	// (0x0002540a) aid_size_cell_graphic_pane_ParamLimits

0xa6eb,	// (0x000255ce) popup_ai2_data_window_g1_ParamLimits

0xa6eb,	// (0x000255ce) popup_ai2_data_window_g1

0xa6f7,	// (0x000255da) ai2_news_ticker_pane_g1

0xa6ff,	// (0x000255e2) ai2_news_ticker_pane_g2

0x0001,

0xfa05,	// (0x0002a8e8) ai2_news_ticker_pane_g

0xa707,	// (0x000255ea) ai2_news_ticker_pane_t1

0xa715,	// (0x000255f8) ai2_news_ticker_pane_t2

0x0001,

0xfa0a,	// (0x0002a8ed) ai2_news_ticker_pane_t

0xa508,	// (0x000253eb) heading_ai2_gene_pane_g1

0xa742,	// (0x00025625) heading_ai2_gene_pane_t1_ParamLimits

0xa742,	// (0x00025625) heading_ai2_gene_pane_t1

0xa757,	// (0x0002563a) list_highlight_pane_cp6

0x3a07,	// (0x0001e8ea) ai2_gene_pane_ParamLimits

0x3a07,	// (0x0001e8ea) ai2_gene_pane

0x3a2b,	// (0x0001e90e) list_ai2_gene_pane_t2

0x0001,

0xfa0f,	// (0x0002a8f2) list_ai2_gene_pane_t

0xa75f,	// (0x00025642) list_highlight_pane_cp8_ParamLimits

0xa75f,	// (0x00025642) list_highlight_pane_cp8

0xa770,	// (0x00025653) ai2_gene_pane_g1_ParamLimits

0xa770,	// (0x00025653) ai2_gene_pane_g1

0xa782,	// (0x00025665) ai2_gene_pane_g2_ParamLimits

0xa782,	// (0x00025665) ai2_gene_pane_g2

0x0001,

0xfa14,	// (0x0002a8f7) ai2_gene_pane_g_ParamLimits

0xfa14,	// (0x0002a8f7) ai2_gene_pane_g

0x5473,	// (0x00020356) scroll_pane_cp12

0xe297,	// (0x0002917a) control_pane_t3_ParamLimits

0xe297,	// (0x0002917a) control_pane_t3

0x6708,	// (0x000215eb) status_small_pane_g8_ParamLimits

0x6708,	// (0x000215eb) status_small_pane_g8

0x2b08,	// (0x0001d9eb) popup_find_window_ParamLimits

0x2cfb,	// (0x0001dbde) popup_note_image_window_ParamLimits

0xaa9c,	// (0x0002597f) list_double2_graphic_pane_vc_g1_ParamLimits

0xaa9c,	// (0x0002597f) list_double2_graphic_pane_vc_g1

0xb1cf,	// (0x000260b2) list_double2_graphic_pane_vc_g2_ParamLimits

0xb1cf,	// (0x000260b2) list_double2_graphic_pane_vc_g2

0xb1db,	// (0x000260be) list_double2_graphic_pane_vc_g3_ParamLimits

0xb1db,	// (0x000260be) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x0002a4e8) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x0002a4e8) list_double2_graphic_pane_vc_g

0xb1e7,	// (0x000260ca) list_double2_graphic_pane_vc_t1_ParamLimits

0xb1e7,	// (0x000260ca) list_double2_graphic_pane_vc_t1

0xb1cf,	// (0x000260b2) list_single_heading_pane_vc_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_single_heading_pane_vc_g1

0xb1db,	// (0x000260be) list_single_heading_pane_vc_g2_ParamLimits

0xb1db,	// (0x000260be) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_single_heading_pane_vc_g

0xb1fd,	// (0x000260e0) list_single_heading_pane_vc_t1_ParamLimits

0xb1fd,	// (0x000260e0) list_single_heading_pane_vc_t1

0xb213,	// (0x000260f6) list_single_heading_pane_vc_t2_ParamLimits

0xb213,	// (0x000260f6) list_single_heading_pane_vc_t2

0x0001,

0xf818,	// (0x0002a6fb) list_single_heading_pane_vc_t_ParamLimits

0xf818,	// (0x0002a6fb) list_single_heading_pane_vc_t

0x939f,	// (0x00024282) list_setting_number_pane_vc_g1_ParamLimits

0x939f,	// (0x00024282) list_setting_number_pane_vc_g1

0x93ab,	// (0x0002428e) list_setting_number_pane_vc_g2_ParamLimits

0x93ab,	// (0x0002428e) list_setting_number_pane_vc_g2

0x0001,

0xf81d,	// (0x0002a700) list_setting_number_pane_vc_g_ParamLimits

0xf81d,	// (0x0002a700) list_setting_number_pane_vc_g

0x93b7,	// (0x0002429a) list_setting_number_pane_vc_t1_ParamLimits

0x93b7,	// (0x0002429a) list_setting_number_pane_vc_t1

0x93cb,	// (0x000242ae) list_setting_number_pane_vc_t2_ParamLimits

0x93cb,	// (0x000242ae) list_setting_number_pane_vc_t2

0x93e7,	// (0x000242ca) list_setting_number_pane_vc_t3_ParamLimits

0x93e7,	// (0x000242ca) list_setting_number_pane_vc_t3

0x0002,

0xf822,	// (0x0002a705) list_setting_number_pane_vc_t_ParamLimits

0xf822,	// (0x0002a705) list_setting_number_pane_vc_t

0x940d,	// (0x000242f0) set_value_pane_vc_ParamLimits

0x940d,	// (0x000242f0) set_value_pane_vc

0xb2a2,	// (0x00026185) list_double2_graphic_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double2_graphic_pane_vc

0xa4a6,	// (0x00025389) list_double2_large_graphic_pane_vc_ParamLimits

0xa4a6,	// (0x00025389) list_double2_large_graphic_pane_vc

0xb2a2,	// (0x00026185) list_double2_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double2_pane_vc

0xb2a2,	// (0x00026185) list_double_graphic_heading_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double_graphic_heading_pane_vc

0xb2a2,	// (0x00026185) list_double_graphic_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double_graphic_pane_vc

0xb2a2,	// (0x00026185) list_double_heading_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double_heading_pane_vc

0xa4a6,	// (0x00025389) list_double_large_graphic_pane_vc_ParamLimits

0xa4a6,	// (0x00025389) list_double_large_graphic_pane_vc

0xb2a2,	// (0x00026185) list_double_number_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double_number_pane_vc

0xb2a2,	// (0x00026185) list_double_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double_pane_vc

0xb2a2,	// (0x00026185) list_double_time_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_double_time_pane_vc

0xb2a2,	// (0x00026185) list_setting_number_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_setting_number_pane_vc

0xb2a2,	// (0x00026185) list_setting_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_setting_pane_vc

0xb2a2,	// (0x00026185) list_single_graphic_heading_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_single_graphic_heading_pane_vc

0xb2a2,	// (0x00026185) list_single_heading_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_single_heading_pane_vc

0xb2a2,	// (0x00026185) list_single_number_heading_pane_vc_ParamLimits

0xb2a2,	// (0x00026185) list_single_number_heading_pane_vc

0xb2fa,	// (0x000261dd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb2fa,	// (0x000261dd) list_double_graphic_heading_pane_vc_g1

0xb1cf,	// (0x000260b2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb1cf,	// (0x000260b2) list_double_graphic_heading_pane_vc_g2

0xb1db,	// (0x000260be) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb1db,	// (0x000260be) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa20,	// (0x0002a903) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa20,	// (0x0002a903) list_double_graphic_heading_pane_vc_g

0xb306,	// (0x000261e9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb306,	// (0x000261e9) list_double_graphic_heading_pane_vc_t1

0xb1fd,	// (0x000260e0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb1fd,	// (0x000260e0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0002a90a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0002a90a) list_double_graphic_heading_pane_vc_t

0x939f,	// (0x00024282) list_setting_pane_vc_g1_ParamLimits

0x939f,	// (0x00024282) list_setting_pane_vc_g1

0x93ab,	// (0x0002428e) list_setting_pane_vc_g2_ParamLimits

0x93ab,	// (0x0002428e) list_setting_pane_vc_g2

0x0001,

0xf81d,	// (0x0002a700) list_setting_pane_vc_g_ParamLimits

0xf81d,	// (0x0002a700) list_setting_pane_vc_g

0xa9de,	// (0x000258c1) list_setting_pane_vc_t1_ParamLimits

0xa9de,	// (0x000258c1) list_setting_pane_vc_t1

0xa9f2,	// (0x000258d5) list_setting_pane_vc_t2_ParamLimits

0xa9f2,	// (0x000258d5) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002a94d) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002a94d) list_setting_pane_vc_t

0x940d,	// (0x000242f0) set_value_pane_cp_vc_ParamLimits

0x940d,	// (0x000242f0) set_value_pane_cp_vc

0xb1cf,	// (0x000260b2) list_single_number_heading_pane_vc_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_single_number_heading_pane_vc_g1

0xb1db,	// (0x000260be) list_single_number_heading_pane_vc_g2_ParamLimits

0xb1db,	// (0x000260be) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_single_number_heading_pane_vc_g

0xb1fd,	// (0x000260e0) list_single_number_heading_pane_vc_t1_ParamLimits

0xb1fd,	// (0x000260e0) list_single_number_heading_pane_vc_t1

0xb318,	// (0x000261fb) list_single_number_heading_pane_vc_t2_ParamLimits

0xb318,	// (0x000261fb) list_single_number_heading_pane_vc_t2

0xb32a,	// (0x0002620d) list_single_number_heading_pane_vc_t3_ParamLimits

0xb32a,	// (0x0002620d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x0002a952) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0002a952) list_single_number_heading_pane_vc_t

0xaa9c,	// (0x0002597f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xaa9c,	// (0x0002597f) list_single_graphic_heading_pane_vc_g1

0xb1cf,	// (0x000260b2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb1cf,	// (0x000260b2) list_single_graphic_heading_pane_vc_g4

0xb1db,	// (0x000260be) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb1db,	// (0x000260be) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x0002a4e8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0002a4e8) list_single_graphic_heading_pane_vc_g

0xb1fd,	// (0x000260e0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb1fd,	// (0x000260e0) list_single_graphic_heading_pane_vc_t1

0xb33c,	// (0x0002621f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb33c,	// (0x0002621f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0002a959) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0002a959) list_single_graphic_heading_pane_vc_t

0xb1cf,	// (0x000260b2) list_double2_pane_vc_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_double2_pane_vc_g1

0xb1db,	// (0x000260be) list_double2_pane_vc_g2_ParamLimits

0xb1db,	// (0x000260be) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_double2_pane_vc_g

0xb34e,	// (0x00026231) list_double2_pane_vc_t1_ParamLimits

0xb34e,	// (0x00026231) list_double2_pane_vc_t1

0xb364,	// (0x00026247) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb364,	// (0x00026247) list_double2_large_graphic_pane_vc_g1

0xb370,	// (0x00026253) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb370,	// (0x00026253) list_double2_large_graphic_pane_vc_g2

0xb37c,	// (0x0002625f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb37c,	// (0x0002625f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0002a50c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0002a50c) list_double2_large_graphic_pane_vc_g

0xb388,	// (0x0002626b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb388,	// (0x0002626b) list_double2_large_graphic_pane_vc_t1

0xb39e,	// (0x00026281) list_double_time_pane_vc_g1_ParamLimits

0xb39e,	// (0x00026281) list_double_time_pane_vc_g1

0xb3aa,	// (0x0002628d) list_double_time_pane_vc_g2_ParamLimits

0xb3aa,	// (0x0002628d) list_double_time_pane_vc_g2

0x0001,

0xfa7b,	// (0x0002a95e) list_double_time_pane_vc_g_ParamLimits

0xfa7b,	// (0x0002a95e) list_double_time_pane_vc_g

0xb3b6,	// (0x00026299) list_double_time_pane_vc_t1_ParamLimits

0xb3b6,	// (0x00026299) list_double_time_pane_vc_t1

0xb3cf,	// (0x000262b2) list_double_time_pane_vc_t2_ParamLimits

0xb3cf,	// (0x000262b2) list_double_time_pane_vc_t2

0xb408,	// (0x000262eb) list_double_time_pane_vc_t3_ParamLimits

0xb408,	// (0x000262eb) list_double_time_pane_vc_t3

0xb420,	// (0x00026303) list_double_time_pane_vc_t4_ParamLimits

0xb420,	// (0x00026303) list_double_time_pane_vc_t4

0x0003,

0xfa80,	// (0x0002a963) list_double_time_pane_vc_t_ParamLimits

0xfa80,	// (0x0002a963) list_double_time_pane_vc_t

0xb1cf,	// (0x000260b2) list_double_pane_vc_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_double_pane_vc_g1

0xb1db,	// (0x000260be) list_double_pane_vc_g2_ParamLimits

0xb1db,	// (0x000260be) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_double_pane_vc_g

0xb432,	// (0x00026315) list_double_pane_vc_t1_ParamLimits

0xb432,	// (0x00026315) list_double_pane_vc_t1

0xb444,	// (0x00026327) list_double_pane_vc_t2_ParamLimits

0xb444,	// (0x00026327) list_double_pane_vc_t2

0x0001,

0xfa89,	// (0x0002a96c) list_double_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a96c) list_double_pane_vc_t

0xb1cf,	// (0x000260b2) list_double_number_pane_vc_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_double_number_pane_vc_g1

0xb1db,	// (0x000260be) list_double_number_pane_vc_g2_ParamLimits

0xb1db,	// (0x000260be) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_double_number_pane_vc_g

0xb45a,	// (0x0002633d) list_double_number_pane_vc_t1_ParamLimits

0xb45a,	// (0x0002633d) list_double_number_pane_vc_t1

0xb46e,	// (0x00026351) list_double_number_pane_vc_t2_ParamLimits

0xb46e,	// (0x00026351) list_double_number_pane_vc_t2

0xb444,	// (0x00026327) list_double_number_pane_vc_t3_ParamLimits

0xb444,	// (0x00026327) list_double_number_pane_vc_t3

0x0002,

0xfa8e,	// (0x0002a971) list_double_number_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002a971) list_double_number_pane_vc_t

0xb480,	// (0x00026363) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb480,	// (0x00026363) list_double_large_graphic_pane_vc_g1

0xb48c,	// (0x0002636f) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb48c,	// (0x0002636f) list_double_large_graphic_pane_vc_g2

0xb37c,	// (0x0002625f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb37c,	// (0x0002625f) list_double_large_graphic_pane_vc_g3

0xb49b,	// (0x0002637e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb49b,	// (0x0002637e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa95,	// (0x0002a978) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa95,	// (0x0002a978) list_double_large_graphic_pane_vc_g

0xb4a7,	// (0x0002638a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb4a7,	// (0x0002638a) list_double_large_graphic_pane_vc_t1

0xb4b9,	// (0x0002639c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb4b9,	// (0x0002639c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x0002a981) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x0002a981) list_double_large_graphic_pane_vc_t

0xb1cf,	// (0x000260b2) list_double_heading_pane_vc_g1_ParamLimits

0xb1cf,	// (0x000260b2) list_double_heading_pane_vc_g1

0xb1db,	// (0x000260be) list_double_heading_pane_vc_g2_ParamLimits

0xb1db,	// (0x000260be) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a4ef) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a4ef) list_double_heading_pane_vc_g

0xb4d0,	// (0x000263b3) list_double_heading_pane_vc_t1_ParamLimits

0xb4d0,	// (0x000263b3) list_double_heading_pane_vc_t1

0xb1fd,	// (0x000260e0) list_double_heading_pane_vc_t2_ParamLimits

0xb1fd,	// (0x000260e0) list_double_heading_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002a986) list_double_heading_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002a986) list_double_heading_pane_vc_t

0xb4e2,	// (0x000263c5) list_double_graphic_pane_vc_g1_ParamLimits

0xb4e2,	// (0x000263c5) list_double_graphic_pane_vc_g1

0xb4f2,	// (0x000263d5) list_double_graphic_pane_vc_g2_ParamLimits

0xb4f2,	// (0x000263d5) list_double_graphic_pane_vc_g2

0xb501,	// (0x000263e4) list_double_graphic_pane_vc_g3_ParamLimits

0xb501,	// (0x000263e4) list_double_graphic_pane_vc_g3

0x0002,

0xfaa8,	// (0x0002a98b) list_double_graphic_pane_vc_g_ParamLimits

0xfaa8,	// (0x0002a98b) list_double_graphic_pane_vc_g

0xb50d,	// (0x000263f0) list_double_graphic_pane_vc_t1_ParamLimits

0xb50d,	// (0x000263f0) list_double_graphic_pane_vc_t1

0xb444,	// (0x00026327) list_double_graphic_pane_vc_t2_ParamLimits

0xb444,	// (0x00026327) list_double_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0002a992) list_double_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0002a992) list_double_graphic_pane_vc_t

0x7159,	// (0x0002203c) aid_size_cell_fastswap

0xe04b,	// (0x00028f2e) aid_size_cell_touch_ParamLimits

0xe04b,	// (0x00028f2e) aid_size_cell_touch

0x7315,	// (0x000221f8) popup_fast_swap_wide_window_ParamLimits

0x7315,	// (0x000221f8) popup_fast_swap_wide_window

0xe0fc,	// (0x00028fdf) touch_pane_ParamLimits

0xe0fc,	// (0x00028fdf) touch_pane

0xaf08,	// (0x00025deb) button_value_adjust_pane_cp2

0xaf10,	// (0x00025df3) button_value_adjust_pane_cp4

0xaf30,	// (0x00025e13) form_field_data_pane_cp2

0x1c4c,	// (0x0001cb2f) form_field_data_wide_pane_cp2

0x5f07,	// (0x00020dea) bg_scroll_pane_ParamLimits

0x7990,	// (0x00022873) scroll_handle_pane_ParamLimits

0x79a4,	// (0x00022887) scroll_sc2_down_pane_ParamLimits

0x79a4,	// (0x00022887) scroll_sc2_down_pane

0x5f38,	// (0x00020e1b) scroll_sc2_up_pane_ParamLimits

0x5f38,	// (0x00020e1b) scroll_sc2_up_pane

0x3b4f,	// (0x0001ea32) grid_wheel_folder_pane_g1_ParamLimits

0x3b4f,	// (0x0001ea32) grid_wheel_folder_pane_g1

0x7c6e,	// (0x00022b51) clock_nsta_pane_cp2_ParamLimits

0x7c6e,	// (0x00022b51) clock_nsta_pane_cp2

0x2832,	// (0x0001d715) listscroll_midp_pane_ParamLimits

0x2842,	// (0x0001d725) midp_canvas_pane

0x7f97,	// (0x00022e7a) nsta_clock_indic_pane

0x907f,	// (0x00023f62) listscroll_form_pane_vc

0x9087,	// (0x00023f6a) listscroll_set_pane_vc_ParamLimits

0x9087,	// (0x00023f6a) listscroll_set_pane_vc

0x30c7,	// (0x0001dfaa) clock_nsta_pane

0x30ea,	// (0x0001dfcd) indicator_nsta_pane

0x92a1,	// (0x00024184) bg_popup_sub_pane_cp2_ParamLimits

0x92b5,	// (0x00024198) find_pane_cp2_ParamLimits

0x92b5,	// (0x00024198) find_pane_cp2

0x92c7,	// (0x000241aa) grid_toobar_pane_ParamLimits

0x9419,	// (0x000242fc) list_form_gen_pane_vc_ParamLimits

0x9419,	// (0x000242fc) list_form_gen_pane_vc

0x942f,	// (0x00024312) scroll_pane_cp8_vc_ParamLimits

0x942f,	// (0x00024312) scroll_pane_cp8_vc

0x947f,	// (0x00024362) data_form_wide_pane_vc_ParamLimits

0x947f,	// (0x00024362) data_form_wide_pane_vc

0x948b,	// (0x0002436e) form_field_data_wide_pane_vc_g1

0x9493,	// (0x00024376) form_field_data_wide_pane_vc_t1_ParamLimits

0x9493,	// (0x00024376) form_field_data_wide_pane_vc_t1

0x5b89,	// (0x00020a6c) input_focus_pane_cp6_vc_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_cp6_vc

0x349e,	// (0x0001e381) list_midp_pane_ParamLimits

0xa53d,	// (0x00025420) scroll_pane_cp16_ParamLimits

0xa53d,	// (0x00025420) scroll_pane_cp16

0x96ec,	// (0x000245cf) button_value_adjust_pane_ParamLimits

0x96ec,	// (0x000245cf) button_value_adjust_pane

0x37ab,	// (0x0001e68e) button_value_adjust_pane_cp6_ParamLimits

0x37ab,	// (0x0001e68e) button_value_adjust_pane_cp6

0x38b5,	// (0x0001e798) settings_code_pane_cp_ParamLimits

0x38b5,	// (0x0001e798) settings_code_pane_cp

0x4e46,	// (0x0001fd29) cell_touch_pane_g1

0x4e46,	// (0x0001fd29) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002a62a) cell_touch_pane_g

0x3a39,	// (0x0001e91c) cell_touch_pane_cp_ParamLimits

0x3a39,	// (0x0001e91c) cell_touch_pane_cp

0x3a55,	// (0x0001e938) cell_touch_pane_ParamLimits

0x3a55,	// (0x0001e938) cell_touch_pane

0x4e46,	// (0x0001fd29) scroll_sc2_down_pane_g1

0x4e46,	// (0x0001fd29) scroll_sc2_up_pane_g1

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp4_vc

0xa801,	// (0x000256e4) list_set_graphic_pane_vc_g1_ParamLimits

0xa801,	// (0x000256e4) list_set_graphic_pane_vc_g1

0xa80d,	// (0x000256f0) list_set_graphic_pane_vc_g2_ParamLimits

0xa80d,	// (0x000256f0) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x0002a90f) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002a90f) list_set_graphic_pane_vc_g

0xa819,	// (0x000256fc) text_primary_small_cp13_vc_ParamLimits

0xa819,	// (0x000256fc) text_primary_small_cp13_vc

0xa831,	// (0x00025714) list_set_graphic_pane_vc_ParamLimits

0xa831,	// (0x00025714) list_set_graphic_pane_vc

0x4ec8,	// (0x0001fdab) input_focus_pane_cp2_vc

0x4e46,	// (0x0001fd29) setting_code_pane_vc_g1

0xa844,	// (0x00025727) setting_code_pane_vc_t1

0xa852,	// (0x00025735) set_text_pane_vc_t1_ParamLimits

0xa852,	// (0x00025735) set_text_pane_vc_t1

0x4ec8,	// (0x0001fdab) input_focus_pane_cp1_vc

0xa86d,	// (0x00025750) list_set_text_pane_vc

0x4e46,	// (0x0001fd29) setting_text_pane_vc_g1

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp2_vc

0xa877,	// (0x0002575a) setting_slider_graphic_pane_vc_g1

0xa87f,	// (0x00025762) setting_slider_graphic_pane_vc_t1

0xa88d,	// (0x00025770) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0002a914) setting_slider_graphic_pane_vc_t

0xa89b,	// (0x0002577e) slider_set_pane_cp_vc

0xa8a3,	// (0x00025786) slider_set_pane_vc_g1

0xa8ac,	// (0x0002578f) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x0002a919) slider_set_pane_vc_g

0x5bd8,	// (0x00020abb) set_opt_bg_pane_g1_copy1

0x5be0,	// (0x00020ac3) set_opt_bg_pane_g2_copy1

0xa8d8,	// (0x000257bb) set_opt_bg_pane_g3_copy1

0x5bf0,	// (0x00020ad3) set_opt_bg_pane_g4_copy1

0x5bf8,	// (0x00020adb) set_opt_bg_pane_g5_copy1

0x5c00,	// (0x00020ae3) set_opt_bg_pane_g6_copy1

0xa8e0,	// (0x000257c3) set_opt_bg_pane_g7_copy1

0xa8e8,	// (0x000257cb) set_opt_bg_pane_g8_copy1

0xa8f0,	// (0x000257d3) set_opt_bg_pane_g9_copy1

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp_vc

0xa8f8,	// (0x000257db) setting_slider_pane_vc_t1

0xa87f,	// (0x00025762) setting_slider_pane_vc_t2

0xa88d,	// (0x00025770) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a928) setting_slider_pane_vc_t

0xa89b,	// (0x0002577e) slider_set_pane_vc

0x80ce,	// (0x00022fb1) volume_set_pane_vc_g1

0x83b5,	// (0x00023298) volume_set_pane_vc_g2

0x83be,	// (0x000232a1) volume_set_pane_vc_g3

0x83c7,	// (0x000232aa) volume_set_pane_vc_g4

0x83d0,	// (0x000232b3) volume_set_pane_vc_g5

0x83d9,	// (0x000232bc) volume_set_pane_vc_g6

0x83e2,	// (0x000232c5) volume_set_pane_vc_g7

0x83eb,	// (0x000232ce) volume_set_pane_vc_g8

0x83f4,	// (0x000232d7) volume_set_pane_vc_g9

0x83fd,	// (0x000232e0) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x0002a92f) volume_set_pane_vc_g

0xa907,	// (0x000257ea) volume_set_pane_vc

0xa90f,	// (0x000257f2) button_value_adjust_pane_cp1_vc

0xa919,	// (0x000257fc) list_highlight_pane_cp2_vc

0xa922,	// (0x00025805) list_set_pane_vc_ParamLimits

0xa922,	// (0x00025805) list_set_pane_vc

0xa974,	// (0x00025857) main_pane_set_vc_t1_ParamLimits

0xa974,	// (0x00025857) main_pane_set_vc_t1

0xa989,	// (0x0002586c) main_pane_set_vc_t2_ParamLimits

0xa989,	// (0x0002586c) main_pane_set_vc_t2

0xa99b,	// (0x0002587e) main_pane_set_vc_t3_ParamLimits

0xa99b,	// (0x0002587e) main_pane_set_vc_t3

0xa9ad,	// (0x00025890) main_pane_set_vc_t4_ParamLimits

0xa9ad,	// (0x00025890) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x0002a944) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x0002a944) main_pane_set_vc_t

0xa9bf,	// (0x000258a2) setting_code_pane_vc_ParamLimits

0xa9bf,	// (0x000258a2) setting_code_pane_vc

0xa9ce,	// (0x000258b1) setting_slider_graphic_pane_vc

0xa9ce,	// (0x000258b1) setting_slider_pane_vc

0xa9ce,	// (0x000258b1) setting_text_pane_vc

0xa9ce,	// (0x000258b1) setting_volume_pane_vc

0xa9d6,	// (0x000258b9) scroll_pane_cp121_vc

0x5b74,	// (0x00020a57) set_content_pane_vc

0xb51f,	// (0x00026402) button_value_adjust_pane_g1

0xb528,	// (0x0002640b) button_value_adjust_pane_g2

0x0001,

0xfab4,	// (0x0002a997) button_value_adjust_pane_g

0xb531,	// (0x00026414) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb531,	// (0x00026414) form_field_slider_wide_pane_vc_t1

0xb547,	// (0x0002642a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb547,	// (0x0002642a) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab9,	// (0x0002a99c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab9,	// (0x0002a99c) form_field_slider_wide_pane_vc_t

0x4f16,	// (0x0001fdf9) input_focus_pane_cp10_vc_ParamLimits

0x4f16,	// (0x0001fdf9) input_focus_pane_cp10_vc

0xb55c,	// (0x0002643f) slider_cont_pane_cp1_vc_ParamLimits

0xb55c,	// (0x0002643f) slider_cont_pane_cp1_vc

0xa8a3,	// (0x00025786) slider_form_pane_g1_cp2

0xa8ac,	// (0x0002578f) slider_form_pane_g2_cp2

0xb577,	// (0x0002645a) form_field_slider_pane_vc_t3

0xb585,	// (0x00026468) form_field_slider_pane_vc_t4

0xb593,	// (0x00026476) slider_form_pane_vc_ParamLimits

0xb593,	// (0x00026476) slider_form_pane_vc

0xb5a0,	// (0x00026483) form_field_slider_pane_vc_t1_ParamLimits

0xb5a0,	// (0x00026483) form_field_slider_pane_vc_t1

0xb5b6,	// (0x00026499) form_field_slider_pane_vc_t2_ParamLimits

0xb5b6,	// (0x00026499) form_field_slider_pane_vc_t2

0x0001,

0xfac9,	// (0x0002a9ac) form_field_slider_pane_vc_t_ParamLimits

0xfac9,	// (0x0002a9ac) form_field_slider_pane_vc_t

0x4f16,	// (0x0001fdf9) input_focus_pane_cp9_vc_ParamLimits

0x4f16,	// (0x0001fdf9) input_focus_pane_cp9_vc

0xb5c8,	// (0x000264ab) slider_cont_pane_vc_ParamLimits

0xb5c8,	// (0x000264ab) slider_cont_pane_vc

0xb5da,	// (0x000264bd) list_form_graphic_pane_cp_vc_ParamLimits

0xb5da,	// (0x000264bd) list_form_graphic_pane_cp_vc

0x948b,	// (0x0002436e) form_field_popup_wide_pane_vc_g1

0xb5ef,	// (0x000264d2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb5ef,	// (0x000264d2) form_field_popup_wide_pane_vc_t1

0x5b89,	// (0x00020a6c) input_focus_pane_cp8_vc_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_cp8_vc

0xb604,	// (0x000264e7) list_form_wide_pane_vc_ParamLimits

0xb604,	// (0x000264e7) list_form_wide_pane_vc

0xb610,	// (0x000264f3) list_form_graphic_pane_vc_g1

0xb618,	// (0x000264fb) list_form_graphic_pane_vc_t1_ParamLimits

0xb618,	// (0x000264fb) list_form_graphic_pane_vc_t1

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp5_vc_ParamLimits

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp5_vc

0xb634,	// (0x00026517) list_form_graphic_pane_vc_ParamLimits

0xb634,	// (0x00026517) list_form_graphic_pane_vc

0x948b,	// (0x0002436e) form_field_popup_pane_vc_g1

0xb64a,	// (0x0002652d) form_field_popup_pane_vc_t1_ParamLimits

0xb64a,	// (0x0002652d) form_field_popup_pane_vc_t1

0x5b89,	// (0x00020a6c) input_focus_pane_cp7_vc_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_cp7_vc

0xb65f,	// (0x00026542) list_form_pane_vc_ParamLimits

0xb65f,	// (0x00026542) list_form_pane_vc

0xb66b,	// (0x0002654e) data_form_pane_vc_t1_ParamLimits

0xb66b,	// (0x0002654e) data_form_pane_vc_t1

0x5bd8,	// (0x00020abb) input_focus_pane_vc_g1

0x5be0,	// (0x00020ac3) input_focus_pane_vc_g2

0x5be8,	// (0x00020acb) input_focus_pane_vc_g3

0x5bf0,	// (0x00020ad3) input_focus_pane_vc_g4

0x5bf8,	// (0x00020adb) input_focus_pane_vc_g5

0x5c00,	// (0x00020ae3) input_focus_pane_vc_g6

0x5c08,	// (0x00020aeb) input_focus_pane_vc_g7

0x5c10,	// (0x00020af3) input_focus_pane_vc_g8

0x5c18,	// (0x00020afb) input_focus_pane_vc_g9

0x4e46,	// (0x0001fd29) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002a5b3) input_focus_pane_vc_g

0x947f,	// (0x00024362) data_form_pane_vc_ParamLimits

0x947f,	// (0x00024362) data_form_pane_vc

0x948b,	// (0x0002436e) form_field_data_pane_vc_g1

0xb686,	// (0x00026569) form_field_data_pane_vc_t1_ParamLimits

0xb686,	// (0x00026569) form_field_data_pane_vc_t1

0x5b89,	// (0x00020a6c) input_focus_pane_vc_ParamLimits

0x5b89,	// (0x00020a6c) input_focus_pane_vc

0x60e8,	// (0x00020fcb) button_value_adjust_pane_cp3_vc

0xaf10,	// (0x00025df3) button_value_adjust_pane_cp5_vc

0xb69c,	// (0x0002657f) form_field_data_pane_vc_ParamLimits

0xb69c,	// (0x0002657f) form_field_data_pane_vc

0x60f0,	// (0x00020fd3) form_field_data_pane_vc_cp2

0xb6b3,	// (0x00026596) form_field_data_wide_pane_vc_ParamLimits

0xb6b3,	// (0x00026596) form_field_data_wide_pane_vc

0xb6c9,	// (0x000265ac) form_field_data_wide_pane_vc_cp2

0xb6d1,	// (0x000265b4) form_field_popup_pane_vc_ParamLimits

0xb6d1,	// (0x000265b4) form_field_popup_pane_vc

0xb6e8,	// (0x000265cb) form_field_popup_wide_pane_vc_ParamLimits

0xb6e8,	// (0x000265cb) form_field_popup_wide_pane_vc

0xb6fe,	// (0x000265e1) form_field_slider_pane_vc_ParamLimits

0xb6fe,	// (0x000265e1) form_field_slider_pane_vc

0xb711,	// (0x000265f4) form_field_slider_wide_pane_vc_ParamLimits

0xb711,	// (0x000265f4) form_field_slider_wide_pane_vc

0x3a73,	// (0x0001e956) grid_touch_1_pane_ParamLimits

0x3a73,	// (0x0001e956) grid_touch_1_pane

0x3a87,	// (0x0001e96a) grid_touch_2_pane_ParamLimits

0x3a87,	// (0x0001e96a) grid_touch_2_pane

0xb789,	// (0x0002666c) touch_pane_g1_ParamLimits

0xb789,	// (0x0002666c) touch_pane_g1

0xb724,	// (0x00026607) cell_app_pane_cp_wide_ParamLimits

0xb724,	// (0x00026607) cell_app_pane_cp_wide

0xb734,	// (0x00026617) grid_popup_fast_wide_pane_ParamLimits

0xb734,	// (0x00026617) grid_popup_fast_wide_pane

0xb748,	// (0x0002662b) scroll_pane_cp19_ParamLimits

0xb748,	// (0x0002662b) scroll_pane_cp19

0x4ec8,	// (0x0001fdab) bg_popup_window_pane_cp20

0xb75c,	// (0x0002663f) listscroll_popup_fast_wide_pane

0x60f8,	// (0x00020fdb) grid_indicator_nsta_pane

0xb764,	// (0x00026647) clock_nsta_pane_g1

0xb76d,	// (0x00026650) clock_nsta_pane_t1

0x3ab1,	// (0x0001e994) cell_indicator_nsta_pane_ParamLimits

0x3ab1,	// (0x0001e994) cell_indicator_nsta_pane

0xb789,	// (0x0002666c) cell_indicator_nsta_pane_g1

0x3ace,	// (0x0001e9b1) cell_indicator_nsta_pane_g2

0x0001,

0xfad3,	// (0x0002a9b6) cell_indicator_nsta_pane_g

0xb797,	// (0x0002667a) clock_nsta_pane_cp

0xb79f,	// (0x00026682) indicator_nsta_pane_cp

0xb7a8,	// (0x0002668b) nsta_clock_indic_pane_g1

0x4f94,	// (0x0001fe77) grid_indicator_pane

0x602a,	// (0x00020f0d) scroll_pane_cp29

0x7bc5,	// (0x00022aa8) indicator_nsta_pane_cp2_ParamLimits

0x7bc5,	// (0x00022aa8) indicator_nsta_pane_cp2

0x4f2c,	// (0x0001fe0f) main_apps_wheel_pane

0x959f,	// (0x00024482) form_midp_field_text_pane_ParamLimits

0x96cc,	// (0x000245af) scroll_bar_cp050_ParamLimits

0xb7e0,	// (0x000266c3) cell_indicator_pane_ParamLimits

0xb7e0,	// (0x000266c3) cell_indicator_pane

0xb7f6,	// (0x000266d9) cell_indicator_pane_g1

0x3ae3,	// (0x0001e9c6) grid_wheel_folder_pane_ParamLimits

0x3ae3,	// (0x0001e9c6) grid_wheel_folder_pane

0x3af1,	// (0x0001e9d4) list_wheel_apps_pane_ParamLimits

0x3af1,	// (0x0001e9d4) list_wheel_apps_pane

0x3afd,	// (0x0001e9e0) main_apps_wheel_pane_g1_ParamLimits

0x3afd,	// (0x0001e9e0) main_apps_wheel_pane_g1

0x3b09,	// (0x0001e9ec) main_apps_wheel_pane_g2_ParamLimits

0x3b09,	// (0x0001e9ec) main_apps_wheel_pane_g2

0x0001,

0xfae2,	// (0x0002a9c5) main_apps_wheel_pane_g_ParamLimits

0xfae2,	// (0x0002a9c5) main_apps_wheel_pane_g

0x3b15,	// (0x0001e9f8) main_apps_wheel_pane_t1_ParamLimits

0x3b15,	// (0x0001e9f8) main_apps_wheel_pane_t1

0x3b27,	// (0x0001ea0a) list_wheel_apps_pane_g1

0x3b2f,	// (0x0001ea12) list_wheel_apps_pane_g2

0x3b37,	// (0x0001ea1a) list_wheel_apps_pane_g3

0x3b3f,	// (0x0001ea22) list_wheel_apps_pane_g4

0x3b47,	// (0x0001ea2a) list_wheel_apps_pane_g5

0x0004,

0xfae7,	// (0x0002a9ca) list_wheel_apps_pane_g

0x4f2c,	// (0x0001fe0f) navi_icon_text_pane

0x2fd3,	// (0x0001deb6) aid_fill_nsta

0xc860,	// (0x00027743) navi_icon_text_pane_g1

0xc86c,	// (0x0002774f) navi_icon_text_pane_t1

0x62bd,	// (0x000211a0) list_set_graphic_pane_t1_ParamLimits

0x62bd,	// (0x000211a0) list_set_graphic_pane_t1

0x9d75,	// (0x00024c58) popup_midp_note_alarm_window_t6_ParamLimits

0x9d75,	// (0x00024c58) popup_midp_note_alarm_window_t6

0x9d87,	// (0x00024c6a) popup_midp_note_alarm_window_t7_ParamLimits

0x9d87,	// (0x00024c6a) popup_midp_note_alarm_window_t7

0x9d99,	// (0x00024c7c) popup_midp_note_alarm_window_t8_ParamLimits

0x9d99,	// (0x00024c7c) popup_midp_note_alarm_window_t8

0x9dab,	// (0x00024c8e) popup_midp_note_alarm_window_t9_ParamLimits

0x9dab,	// (0x00024c8e) popup_midp_note_alarm_window_t9

0x9dbd,	// (0x00024ca0) popup_midp_note_alarm_window_t10_ParamLimits

0x9dbd,	// (0x00024ca0) popup_midp_note_alarm_window_t10

0x9dcf,	// (0x00024cb2) popup_midp_note_alarm_window_t11_ParamLimits

0x9dcf,	// (0x00024cb2) popup_midp_note_alarm_window_t11

0x9de1,	// (0x00024cc4) scroll_pane_cp17_ParamLimits

0x9de1,	// (0x00024cc4) scroll_pane_cp17

0x80ce,	// (0x00022fb1) volume_small_pane_cp_g1

0x8406,	// (0x000232e9) volume_small_pane_cp_g2

0x840f,	// (0x000232f2) volume_small_pane_cp_g3

0x8418,	// (0x000232fb) volume_small_pane_cp_g4

0x80fb,	// (0x00022fde) volume_small_pane_cp_g5

0x8421,	// (0x00023304) volume_small_pane_cp_g6

0x842a,	// (0x0002330d) volume_small_pane_cp_g7

0x8433,	// (0x00023316) volume_small_pane_cp_g8

0x843c,	// (0x0002331f) volume_small_pane_cp_g9

0x8445,	// (0x00023328) volume_small_pane_cp_g10

0x656c,	// (0x0002144f) midp_ticker_pane_g1_ParamLimits

0x6578,	// (0x0002145b) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002a67b) midp_ticker_pane_g_ParamLimits

0x6584,	// (0x00021467) midp_ticker_pane_t1_ParamLimits

0x2fe9,	// (0x0001decc) aid_fill_nsta_2

0x96b8,	// (0x0002459b) list_form2_midp_pane

0xa487,	// (0x0002536a) midp_editing_number_pane_ParamLimits

0xa493,	// (0x00025376) midp_ticker_pane_ParamLimits

0xc87e,	// (0x00027761) form2_midp_field_pane

0xc8a2,	// (0x00027785) scroll_pane_cp51

0xc8c2,	// (0x000277a5) form2_midp_button_pane_ParamLimits

0xc8c2,	// (0x000277a5) form2_midp_button_pane

0xc8d4,	// (0x000277b7) form2_midp_content_pane_ParamLimits

0xc8d4,	// (0x000277b7) form2_midp_content_pane

0xc8ee,	// (0x000277d1) form2_midp_field_choice_group_pane

0xc8f6,	// (0x000277d9) form2_midp_field_pane_g1

0xc8fe,	// (0x000277e1) form2_midp_field_pane_g2

0xc906,	// (0x000277e9) form2_midp_field_pane_g3

0xc90e,	// (0x000277f1) form2_midp_field_pane_g4

0x0003,

0xfb0c,	// (0x0002a9ef) form2_midp_field_pane_g

0xc916,	// (0x000277f9) form2_midp_gauge_slider_pane

0xc91e,	// (0x00027801) form2_midp_gauge_wait_pane

0xc926,	// (0x00027809) form2_midp_image_pane_ParamLimits

0xc926,	// (0x00027809) form2_midp_image_pane

0xc941,	// (0x00027824) form2_midp_label_pane_ParamLimits

0xc941,	// (0x00027824) form2_midp_label_pane

0x3b7c,	// (0x0001ea5f) form2_midp_label_pane_cp_ParamLimits

0x3b7c,	// (0x0001ea5f) form2_midp_label_pane_cp

0xc979,	// (0x0002785c) form2_midp_string_pane_ParamLimits

0xc979,	// (0x0002785c) form2_midp_string_pane

0x1e54,	// (0x0001cd37) form2_midp_text_pane_ParamLimits

0x1e54,	// (0x0001cd37) form2_midp_text_pane

0xc98b,	// (0x0002786e) form2_midp_time_pane

0xc99b,	// (0x0002787e) input_focus_pane_cp51_ParamLimits

0xc99b,	// (0x0002787e) input_focus_pane_cp51

0xc9b3,	// (0x00027896) form2_midp_label_pane_t1_ParamLimits

0xc9b3,	// (0x00027896) form2_midp_label_pane_t1

0x1e6d,	// (0x0001cd50) form2_mdip_text_pane_t1_ParamLimits

0x1e6d,	// (0x0001cd50) form2_mdip_text_pane_t1

0xb836,	// (0x00026719) form2_midp_time_pane_t1

0xc9fb,	// (0x000278de) form2_midp_gauge_slider_pane_t1

0x3b9b,	// (0x0001ea7e) form2_midp_gauge_slider_pane_t2

0x3bad,	// (0x0001ea90) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb15,	// (0x0002a9f8) form2_midp_gauge_slider_pane_t

0xca31,	// (0x00027914) form2_midp_slider_pane

0xca3d,	// (0x00027920) form2_midp_gauge_wait_pane_t1

0xca4b,	// (0x0002792e) form2_midp_wait_pane_ParamLimits

0xca4b,	// (0x0002792e) form2_midp_wait_pane

0x341b,	// (0x0001e2fe) list_single_2graphic_pane_cp4_ParamLimits

0x341b,	// (0x0001e2fe) list_single_2graphic_pane_cp4

0x3bbf,	// (0x0001eaa2) list_single_midp_graphic_pane_cp_ParamLimits

0x3bbf,	// (0x0001eaa2) list_single_midp_graphic_pane_cp

0x4ec8,	// (0x0001fdab) list_highlight_pane_cp20

0xca76,	// (0x00027959) list_single_2graphic_pane_g1_cp4

0xa508,	// (0x000253eb) list_single_2graphic_pane_g2_cp4

0xca7e,	// (0x00027961) list_single_2graphic_pane_t1_cp4

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp21

0xca8d,	// (0x00027970) list_single_midp_graphic_pane_g4_cp

0xca9c,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp

0x3bdd,	// (0x0001eac0) form2_mdip_string_pane_t1_ParamLimits

0x3bdd,	// (0x0001eac0) form2_mdip_string_pane_t1

0x4ec8,	// (0x0001fdab) bg_wml_button_pane_cp2

0x4e46,	// (0x0001fd29) form2_midp_image_pane_g1

0xacdf,	// (0x00025bc2) list_double_large_graphic_pane_g5_ParamLimits

0xacdf,	// (0x00025bc2) list_double_large_graphic_pane_g5

0x2832,	// (0x0001d715) midp_form_pane_ParamLimits

0x4f2c,	// (0x0001fe0f) main_apps_wheel_pane_ParamLimits

0x2d75,	// (0x0001dc58) popup_preview_window_ParamLimits

0x2d75,	// (0x0001dc58) popup_preview_window

0x915b,	// (0x0002403e) popup_touch_info_window_ParamLimits

0x915b,	// (0x0002403e) popup_touch_info_window

0x9179,	// (0x0002405c) popup_touch_menu_window_ParamLimits

0x9179,	// (0x0002405c) popup_touch_menu_window

0x4e3c,	// (0x0001fd1f) bg_popup_sub_pane_cp6

0xcb29,	// (0x00027a0c) list_touch_menu_pane

0xcb31,	// (0x00027a14) list_single_touch_menu_pane_ParamLimits

0xcb31,	// (0x00027a14) list_single_touch_menu_pane

0xcb48,	// (0x00027a2b) list_single_touch_menu_pane_t1

0x4f2c,	// (0x0001fe0f) bg_popup_sub_pane_cp7_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_popup_sub_pane_cp7

0xcb56,	// (0x00027a39) heading_sub_pane

0xcb5e,	// (0x00027a41) list_touch_info_pane_ParamLimits

0xcb5e,	// (0x00027a41) list_touch_info_pane

0xcb6d,	// (0x00027a50) list_single_touch_info_pane_ParamLimits

0xcb6d,	// (0x00027a50) list_single_touch_info_pane

0xcb7e,	// (0x00027a61) list_single_touch_info_pane_t1

0xcb8c,	// (0x00027a6f) list_single_touch_info_pane_t2

0x0001,

0xfb23,	// (0x0002aa06) list_single_touch_info_pane_t

0x6542,	// (0x00021425) bg_popup_heading_pane_cp

0xcb9a,	// (0x00027a7d) heading_sub_pane_t1

0x9445,	// (0x00024328) bg_popup_preview_window_pane_cp_ParamLimits

0x9445,	// (0x00024328) bg_popup_preview_window_pane_cp

0xcb56,	// (0x00027a39) heading_preview_pane

0xcb5e,	// (0x00027a41) list_preview_pane_ParamLimits

0xcb5e,	// (0x00027a41) list_preview_pane

0xcba8,	// (0x00027a8b) popup_preview_window_g1

0xcb6d,	// (0x00027a50) list_single_preview_pane_ParamLimits

0xcb6d,	// (0x00027a50) list_single_preview_pane

0xcbb0,	// (0x00027a93) list_single_preview_pane_g1

0xcbb8,	// (0x00027a9b) list_single_preview_pane_t1

0xcb7e,	// (0x00027a61) list_single_preview_pane_t2

0x0001,

0xfb28,	// (0x0002aa0b) list_single_preview_pane_t

0xcbc6,	// (0x00027aa9) bg_popup_heading_pane_cp2_ParamLimits

0xcbc6,	// (0x00027aa9) bg_popup_heading_pane_cp2

0xcbdc,	// (0x00027abf) heading_preview_pane_g1

0xcbe4,	// (0x00027ac7) heading_preview_pane_t1_ParamLimits

0xcbe4,	// (0x00027ac7) heading_preview_pane_t1

0x4fab,	// (0x0001fe8e) soft_indicator_pane_t1_ParamLimits

0x544f,	// (0x00020332) scroll_pane_ParamLimits

0x5f2f,	// (0x00020e12) scroll_sc2_left_pane

0x5f26,	// (0x00020e09) scroll_sc2_right_pane

0x5f4e,	// (0x00020e31) scroll_bg_pane_g1_ParamLimits

0x5f63,	// (0x00020e46) scroll_bg_pane_g2_ParamLimits

0x5f7b,	// (0x00020e5e) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002a60a) scroll_bg_pane_g_ParamLimits

0x5f4e,	// (0x00020e31) scroll_handle_pane_g1_ParamLimits

0x5f9d,	// (0x00020e80) scroll_handle_pane_g2_ParamLimits

0x5f7b,	// (0x00020e5e) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002a611) scroll_handle_pane_g_ParamLimits

0x90b3,	// (0x00023f96) popup_choice_list_window_ParamLimits

0x90b3,	// (0x00023f96) popup_choice_list_window

0x92ad,	// (0x00024190) choice_list_pane

0x9323,	// (0x00024206) cell_toolbar_pane_t1

0x934b,	// (0x0002422e) toolbar_button_pane_ParamLimits

0xa1e8,	// (0x000250cb) ai_gene_pane_1_t2_ParamLimits

0xa1e8,	// (0x000250cb) ai_gene_pane_1_t2

0x0001,

0xf93f,	// (0x0002a822) ai_gene_pane_1_t_ParamLimits

0xf93f,	// (0x0002a822) ai_gene_pane_1_t

0xcc01,	// (0x00027ae4) scroll_sc2_left_pane_g1

0xcc01,	// (0x00027ae4) scroll_sc2_right_pane_g1

0x9099,	// (0x00023f7c) bg_popup_sub_pane_cp10

0xcc0b,	// (0x00027aee) list_choice_list_pane

0xcc22,	// (0x00027b05) list_single_choice_list_pane_ParamLimits

0xcc22,	// (0x00027b05) list_single_choice_list_pane

0xcc36,	// (0x00027b19) list_single_choice_list_pane_g1

0x5cf0,	// (0x00020bd3) list_single_choice_list_pane_t1_ParamLimits

0x5cf0,	// (0x00020bd3) list_single_choice_list_pane_t1

0xcc3e,	// (0x00027b21) choice_list_pane_g1

0xcc46,	// (0x00027b29) choice_list_pane_t1

0x4e3c,	// (0x0001fd1f) input_focus_pane_cp11

0x5e7b,	// (0x00020d5e) title_pane_stacon_g2_ParamLimits

0x5e7b,	// (0x00020d5e) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0002a5f0) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002a5f0) title_pane_stacon_g

0x6542,	// (0x00021425) cursor_press_pane

0x2adc,	// (0x0001d9bf) popup_fep_hwr_window_ParamLimits

0x2adc,	// (0x0001d9bf) popup_fep_hwr_window

0x9105,	// (0x00023fe8) popup_fep_vkb_window_ParamLimits

0x9105,	// (0x00023fe8) popup_fep_vkb_window

0xcc54,	// (0x00027b37) cursor_press_pane_g1

0x0002,

0xfb51,	// (0x0002aa34) fep_vkb_side_pane_g_ParamLimits

0x8483,	// (0x00023366) fep_hwr_candidate_pane_ParamLimits

0x8483,	// (0x00023366) fep_hwr_candidate_pane

0x84ab,	// (0x0002338e) fep_hwr_side_pane_ParamLimits

0x84ab,	// (0x0002338e) fep_hwr_side_pane

0x84cb,	// (0x000233ae) fep_hwr_top_pane_ParamLimits

0x84cb,	// (0x000233ae) fep_hwr_top_pane

0x84e3,	// (0x000233c6) fep_hwr_write_pane_ParamLimits

0x84e3,	// (0x000233c6) fep_hwr_write_pane

0xfb51,	// (0x0002aa34) fep_vkb_side_pane_g

0xcc5c,	// (0x00027b3f) fep_hwr_top_pane_g1

0xcc6e,	// (0x00027b51) fep_hwr_top_pane_g2

0x851d,	// (0x00023400) fep_hwr_top_pane_g3

0x0002,

0xfb2d,	// (0x0002aa10) fep_hwr_top_pane_g

0x8532,	// (0x00023415) fep_hwr_top_text_pane

0x6097,	// (0x00020f7a) fep_hwr_top_text_pane_g1

0xcca4,	// (0x00027b87) fep_hwr_top_text_pane_t1

0x8620,	// (0x00023503) fep_hwr_candidate_pane_g1

0xcec2,	// (0x00027da5) fep_vkb_keypad_pane_g3_ParamLimits

0xcec2,	// (0x00027da5) fep_vkb_keypad_pane_g3

0xcee4,	// (0x00027dc7) fep_vkb_keypad_pane_g4_ParamLimits

0xcee4,	// (0x00027dc7) fep_vkb_keypad_pane_g4

0xcf53,	// (0x00027e36) fep_vkb_bottom_pane_g2_ParamLimits

0xcf53,	// (0x00027e36) fep_vkb_bottom_pane_g2

0x0001,

0xfb58,	// (0x0002aa3b) fep_vkb_bottom_pane_g_ParamLimits

0xfb58,	// (0x0002aa3b) fep_vkb_bottom_pane_g

0xcc01,	// (0x00027ae4) cell_vkb_side_pane_g2

0x0001,

0xfb62,	// (0x0002aa45) cell_vkb_side_pane_g

0xcfde,	// (0x00027ec1) cell_vkb_side_pane_t1

0xcfec,	// (0x00027ecf) cell_vkb_side_pane_t1_copy1

0xcc01,	// (0x00027ae4) bg_fep_vkb_candidate_pane_g2

0xd110,	// (0x00027ff3) cell_vkb_candidate_pane_ParamLimits

0xccb2,	// (0x00027b95) aid_size_cell_vkb_ParamLimits

0xccb2,	// (0x00027b95) aid_size_cell_vkb

0xd110,	// (0x00027ff3) cell_vkb_candidate_pane

0x8647,	// (0x0002352a) bg_popup_fep_shadow_pane_g1

0xcd28,	// (0x00027c0b) fep_vkb_bottom_pane_ParamLimits

0xcd28,	// (0x00027c0b) fep_vkb_bottom_pane

0xcd73,	// (0x00027c56) fep_vkb_candidate_pane_ParamLimits

0xcd73,	// (0x00027c56) fep_vkb_candidate_pane

0xcd8f,	// (0x00027c72) fep_vkb_keypad_pane_ParamLimits

0xcd8f,	// (0x00027c72) fep_vkb_keypad_pane

0xcdc3,	// (0x00027ca6) fep_vkb_side_pane_ParamLimits

0xcdc3,	// (0x00027ca6) fep_vkb_side_pane

0xcdef,	// (0x00027cd2) fep_vkb_top_pane_ParamLimits

0xcdef,	// (0x00027cd2) fep_vkb_top_pane

0xce1b,	// (0x00027cfe) fep_vkb_top_pane_g1_ParamLimits

0xce1b,	// (0x00027cfe) fep_vkb_top_pane_g1

0xce2a,	// (0x00027d0d) fep_vkb_top_pane_g2_ParamLimits

0xce2a,	// (0x00027d0d) fep_vkb_top_pane_g2

0xce39,	// (0x00027d1c) fep_vkb_top_pane_g3_ParamLimits

0xce39,	// (0x00027d1c) fep_vkb_top_pane_g3

0x0003,

0xfb48,	// (0x0002aa2b) fep_vkb_top_pane_g_ParamLimits

0xfb48,	// (0x0002aa2b) fep_vkb_top_pane_g

0xce57,	// (0x00027d3a) fep_vkb_top_text_pane_ParamLimits

0xce57,	// (0x00027d3a) fep_vkb_top_text_pane

0x3ca4,	// (0x0001eb87) fep_vkb_side_pane_g1_ParamLimits

0x3ca4,	// (0x0001eb87) fep_vkb_side_pane_g1

0xceb1,	// (0x00027d94) grid_vkb_side_pane_ParamLimits

0xceb1,	// (0x00027d94) grid_vkb_side_pane

0x864f,	// (0x00023532) bg_popup_fep_shadow_pane_g2

0x8658,	// (0x0002353b) bg_popup_fep_shadow_pane_g3

0x8660,	// (0x00023543) bg_popup_fep_shadow_pane_g4

0x8669,	// (0x0002354c) bg_popup_fep_shadow_pane_g5

0x8671,	// (0x00023554) bg_popup_fep_shadow_pane_g6

0x8679,	// (0x0002355c) bg_popup_fep_shadow_pane_g7

0x5bf0,	// (0x00020ad3) bg_popup_fep_shadow_pane_g8

0xcf02,	// (0x00027de5) grid_vkb_keypad_number_pane_ParamLimits

0xcf02,	// (0x00027de5) grid_vkb_keypad_number_pane

0xcf12,	// (0x00027df5) grid_vkb_keypad_pane_ParamLimits

0xcf12,	// (0x00027df5) grid_vkb_keypad_pane

0xcf38,	// (0x00027e1b) fep_vkb_bottom_pane_g1_ParamLimits

0xcf38,	// (0x00027e1b) fep_vkb_bottom_pane_g1

0xcf61,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xcf61,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane

0xcf76,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xcf76,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane

0xcf8b,	// (0x00027e6e) fep_vkb_top_text_pane_g1

0x3ceb,	// (0x0001ebce) fep_vkb_top_text_pane_t1

0x3cfd,	// (0x0001ebe0) cell_vkb_side_pane_ParamLimits

0x3cfd,	// (0x0001ebe0) cell_vkb_side_pane

0xcc01,	// (0x00027ae4) cell_vkb_side_pane_g1

0xcffa,	// (0x00027edd) cell_vkb_keypad_pane_ParamLimits

0xcffa,	// (0x00027edd) cell_vkb_keypad_pane

0xd067,	// (0x00027f4a) cell_vkb_keypad_pane_g1

0x0008,

0xfb75,	// (0x0002aa58) bg_popup_fep_shadow_pane_g

0x8689,	// (0x0002356c) cell_hwr_side_pane_g1

0x8689,	// (0x0002356c) cell_hwr_side_pane_g2

0xd071,	// (0x00027f54) cell_vkb_keypad_pane_t1

0x3d13,	// (0x0001ebf6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x3d13,	// (0x0001ebf6) cell_vkb_keypad_bottom_left_pane

0x3d28,	// (0x0001ec0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x3d28,	// (0x0001ec0b) cell_vkb_keypad_bottom_right_pane

0xcc01,	// (0x00027ae4) cell_vkb_keypad_bottom_left_pane_g1

0xcc01,	// (0x00027ae4) cell_vkb_keypad_bottom_right_pane_g1

0xd0d5,	// (0x00027fb8) cell_vkb_keypad_number_pane_ParamLimits

0xd0d5,	// (0x00027fb8) cell_vkb_keypad_number_pane

0xd0f4,	// (0x00027fd7) cell_vkb_keypad_number_pane_g1

0xd0fe,	// (0x00027fe1) cell_vkb_keypad_number_pane_g2

0xd107,	// (0x00027fea) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb67,	// (0x0002aa4a) cell_vkb_keypad_number_pane_g

0xd071,	// (0x00027f54) cell_vkb_keypad_number_pane_t1

0xd129,	// (0x0002800c) fep_vkb_candidate_pane_g1

0x0001,

0xfb88,	// (0x0002aa6b) cell_hwr_side_pane_g

0xd142,	// (0x00028025) cell_hwr_side_pane_t1

0x8693,	// (0x00023576) cell_hwr_side_pane_t1_copy1

0x86a1,	// (0x00023584) cell_hwr_candidate_pane_g1

0x86d0,	// (0x000235b3) cell_hwr_candidate_pane_t1

0xcc01,	// (0x00027ae4) cell_vkb_candidate_pane_g2

0xd1c8,	// (0x000280ab) cell_vkb_candidate_pane_t1

0x844e,	// (0x00023331) bg_popup_fep_shadow_pane_ParamLimits

0x844e,	// (0x00023331) bg_popup_fep_shadow_pane

0x84fd,	// (0x000233e0) bg_fep_hwr_top_pane_g4

0xcc80,	// (0x00027b63) bg_hwr_side_pane_g1_ParamLimits

0xcc80,	// (0x00027b63) bg_hwr_side_pane_g1

0xe4b8,	// (0x0002939b) cell_hwr_side_pane_ParamLimits

0xe4b8,	// (0x0002939b) cell_hwr_side_pane

0x85a9,	// (0x0002348c) fep_hwr_write_pane_g1_ParamLimits

0x85a9,	// (0x0002348c) fep_hwr_write_pane_g1

0x85b6,	// (0x00023499) fep_hwr_write_pane_g2_ParamLimits

0x85b6,	// (0x00023499) fep_hwr_write_pane_g2

0x85c3,	// (0x000234a6) fep_hwr_write_pane_g3_ParamLimits

0x85c3,	// (0x000234a6) fep_hwr_write_pane_g3

0xe4d8,	// (0x000293bb) fep_hwr_write_pane_g4_ParamLimits

0xe4d8,	// (0x000293bb) fep_hwr_write_pane_g4

0x0005,

0xfb34,	// (0x0002aa17) fep_hwr_write_pane_g_ParamLimits

0xfb34,	// (0x0002aa17) fep_hwr_write_pane_g

0x84fd,	// (0x000233e0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x84fd,	// (0x000233e0) bg_fep_hwr_candidate_pane_g2

0x85e6,	// (0x000234c9) cell_hwr_candidate_pane_ParamLimits

0x85e6,	// (0x000234c9) cell_hwr_candidate_pane

0x8620,	// (0x00023503) fep_hwr_candidate_pane_g1_ParamLimits

0xcce0,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcce0,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2

0xce49,	// (0x00027d2c) fep_vkb_top_pane_g4_ParamLimits

0xce49,	// (0x00027d2c) fep_vkb_top_pane_g4

0xce8f,	// (0x00027d72) fep_vkb_side_pane_g2_ParamLimits

0xce8f,	// (0x00027d72) fep_vkb_side_pane_g2

0x1b62,	// (0x0001ca45) list_setting_pane_t4_ParamLimits

0x1b62,	// (0x0001ca45) list_setting_pane_t4

0x1bf4,	// (0x0001cad7) list_setting_number_pane_t5_ParamLimits

0x1bf4,	// (0x0001cad7) list_setting_number_pane_t5

0x2772,	// (0x0001d655) list_double_heading_pane_cp2_ParamLimits

0x2772,	// (0x0001d655) list_double_heading_pane_cp2

0x63b7,	// (0x0002129a) list_double_heading_pane_g1_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_double_heading_pane_g1_cp2

0xd1d6,	// (0x000280b9) list_double_heading_pane_g2_cp2_ParamLimits

0xd1d6,	// (0x000280b9) list_double_heading_pane_g2_cp2

0xd1ea,	// (0x000280cd) list_double_heading_pane_t1_cp2_ParamLimits

0xd1ea,	// (0x000280cd) list_double_heading_pane_t1_cp2

0xd200,	// (0x000280e3) list_double_heading_pane_t2_cp2_ParamLimits

0xd200,	// (0x000280e3) list_double_heading_pane_t2_cp2

0x4e34,	// (0x0001fd17) aid_value_unit2

0x7351,	// (0x00022234) popup_preview_fixed_window

0x508b,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02

0xd212,	// (0x000280f5) list_preview_fixed_pane

0xd258,	// (0x0002813b) list_empty_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_empty_pane_fp

0xd258,	// (0x0002813b) list_single_cale_day_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_single_cale_day_pane_fp

0xd258,	// (0x0002813b) list_single_graphic_heading_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_single_graphic_heading_pane_fp

0xd258,	// (0x0002813b) list_single_graphic_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_single_graphic_pane_fp

0xd258,	// (0x0002813b) list_single_heading_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_single_heading_pane_fp

0xd258,	// (0x0002813b) list_single_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_single_pane_fp

0xd26c,	// (0x0002814f) list_single_pane_fp_g1_ParamLimits

0xd26c,	// (0x0002814f) list_single_pane_fp_g1

0xae00,	// (0x00025ce3) list_single_pane_fp_g2_ParamLimits

0xae00,	// (0x00025ce3) list_single_pane_fp_g2

0xb849,	// (0x0002672c) list_single_pane_fp_g3_ParamLimits

0xb849,	// (0x0002672c) list_single_pane_fp_g3

0xd278,	// (0x0002815b) list_single_pane_fp_g4_ParamLimits

0xd278,	// (0x0002815b) list_single_pane_fp_g4

0x0003,

0xfb9b,	// (0x0002aa7e) list_single_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002aa7e) list_single_pane_fp_g

0xb85d,	// (0x00026740) list_single_pane_fp_t1_ParamLimits

0xb85d,	// (0x00026740) list_single_pane_fp_t1

0xb874,	// (0x00026757) list_single_graphic_pane_fp_g1_ParamLimits

0xb874,	// (0x00026757) list_single_graphic_pane_fp_g1

0xd26c,	// (0x0002814f) list_single_graphic_pane_fp_g2_ParamLimits

0xd26c,	// (0x0002814f) list_single_graphic_pane_fp_g2

0xae00,	// (0x00025ce3) list_single_graphic_pane_fp_g3_ParamLimits

0xae00,	// (0x00025ce3) list_single_graphic_pane_fp_g3

0xb849,	// (0x0002672c) list_single_graphic_pane_fp_g4_ParamLimits

0xb849,	// (0x0002672c) list_single_graphic_pane_fp_g4

0xd278,	// (0x0002815b) list_single_graphic_pane_fp_g5_ParamLimits

0xd278,	// (0x0002815b) list_single_graphic_pane_fp_g5

0x0004,

0xfba4,	// (0x0002aa87) list_single_graphic_pane_fp_g_ParamLimits

0xfba4,	// (0x0002aa87) list_single_graphic_pane_fp_g

0xb880,	// (0x00026763) list_single_graphic_pane_fp_t1_ParamLimits

0xb880,	// (0x00026763) list_single_graphic_pane_fp_t1

0xb874,	// (0x00026757) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb874,	// (0x00026757) list_single_graphic_heading_pane_fp_g1

0xd26c,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd26c,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2

0xae00,	// (0x00025ce3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xae00,	// (0x00025ce3) list_single_graphic_heading_pane_fp_g3

0xb849,	// (0x0002672c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb849,	// (0x0002672c) list_single_graphic_heading_pane_fp_g4

0xd278,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd278,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0002aa87) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0002aa87) list_single_graphic_heading_pane_fp_g

0xb896,	// (0x00026779) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb896,	// (0x00026779) list_single_graphic_heading_pane_fp_t1

0xb8ac,	// (0x0002678f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb8ac,	// (0x0002678f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0002aa92) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0002aa92) list_single_graphic_heading_pane_fp_t

0xb8be,	// (0x000267a1) list_single_cale_day_pane_fp_g1_ParamLimits

0xb8be,	// (0x000267a1) list_single_cale_day_pane_fp_g1

0xd284,	// (0x00028167) list_single_cale_day_pane_fp_g2_ParamLimits

0xd284,	// (0x00028167) list_single_cale_day_pane_fp_g2

0xb8f6,	// (0x000267d9) list_single_cale_day_pane_fp_g3_ParamLimits

0xb8f6,	// (0x000267d9) list_single_cale_day_pane_fp_g3

0xb91e,	// (0x00026801) list_single_cale_day_pane_fp_g4_ParamLimits

0xb91e,	// (0x00026801) list_single_cale_day_pane_fp_g4

0xb942,	// (0x00026825) list_single_cale_day_pane_fp_g5_ParamLimits

0xb942,	// (0x00026825) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb4,	// (0x0002aa97) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb4,	// (0x0002aa97) list_single_cale_day_pane_fp_g

0xb966,	// (0x00026849) list_single_cale_day_pane_fp_t1_ParamLimits

0xb966,	// (0x00026849) list_single_cale_day_pane_fp_t1

0xb98c,	// (0x0002686f) list_single_cale_day_pane_fp_t2_ParamLimits

0xb98c,	// (0x0002686f) list_single_cale_day_pane_fp_t2

0xb9a5,	// (0x00026888) list_single_cale_day_pane_fp_t3_ParamLimits

0xb9a5,	// (0x00026888) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbf,	// (0x0002aaa2) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbf,	// (0x0002aaa2) list_single_cale_day_pane_fp_t

0xd26c,	// (0x0002814f) list_empty_pane_fp_g1_ParamLimits

0xd26c,	// (0x0002814f) list_empty_pane_fp_g1

0xb9be,	// (0x000268a1) list_empty_pane_fp_t1

0xb9cc,	// (0x000268af) list_empty_pane_fp_t2

0x0001,

0xfbc6,	// (0x0002aaa9) list_empty_pane_fp_t

0xd26c,	// (0x0002814f) list_single_heading_pane_fp_g1_ParamLimits

0xd26c,	// (0x0002814f) list_single_heading_pane_fp_g1

0xae00,	// (0x00025ce3) list_single_heading_pane_fp_g2_ParamLimits

0xae00,	// (0x00025ce3) list_single_heading_pane_fp_g2

0xb849,	// (0x0002672c) list_single_heading_pane_fp_g3_ParamLimits

0xb849,	// (0x0002672c) list_single_heading_pane_fp_g3

0x0002,

0xfbcb,	// (0x0002aaae) list_single_heading_pane_fp_g_ParamLimits

0xfbcb,	// (0x0002aaae) list_single_heading_pane_fp_g

0xb9da,	// (0x000268bd) list_single_heading_pane_fp_t1_ParamLimits

0xb9da,	// (0x000268bd) list_single_heading_pane_fp_t1

0xb9ec,	// (0x000268cf) list_single_heading_pane_fp_t2_ParamLimits

0xb9ec,	// (0x000268cf) list_single_heading_pane_fp_t2

0x0001,

0xfbd2,	// (0x0002aab5) list_single_heading_pane_fp_t_ParamLimits

0xfbd2,	// (0x0002aab5) list_single_heading_pane_fp_t

0x5d05,	// (0x00020be8) aid_size_cell_fast

0x506e,	// (0x0001ff51) soft_indicator_pane_cp1_t1

0x5d42,	// (0x00020c25) cell_app_pane_cp2_ParamLimits

0x5d42,	// (0x00020c25) cell_app_pane_cp2

0x8470,	// (0x00023353) fep_hwr_candidate_drop_down_list_pane

0x863a,	// (0x0002351d) fep_hwr_candidate_pane_g3_ParamLimits

0x863a,	// (0x0002351d) fep_hwr_candidate_pane_g3

0x4d25,	// (0x0001fc08) fep_hwr_candidate_pane_g4_ParamLimits

0x4d25,	// (0x0001fc08) fep_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x0002aa24) fep_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x0002aa24) fep_hwr_candidate_pane_g

0xcd62,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcd62,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane

0xd131,	// (0x00028014) fep_vkb_candidate_pane_g3

0xd139,	// (0x0002801c) fep_vkb_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0002aa51) fep_vkb_candidate_pane_g

0x86a1,	// (0x00023584) cell_hwr_candidate_pane_g1_ParamLimits

0x86af,	// (0x00023592) cell_hwr_candidate_pane_g3_ParamLimits

0x86af,	// (0x00023592) cell_hwr_candidate_pane_g3

0xf495,	// (0x0002a378) cell_hwr_candidate_pane_g4_ParamLimits

0xf495,	// (0x0002a378) cell_hwr_candidate_pane_g4

0x0002,

0xfb8d,	// (0x0002aa70) cell_hwr_candidate_pane_g_ParamLimits

0xfb8d,	// (0x0002aa70) cell_hwr_candidate_pane_g

0xd150,	// (0x00028033) cell_vkb_candidate_pane_g3_ParamLimits

0xd150,	// (0x00028033) cell_vkb_candidate_pane_g3

0xd1ad,	// (0x00028090) cell_vkb_candidate_pane_g4_ParamLimits

0xd1ad,	// (0x00028090) cell_vkb_candidate_pane_g4

0xd290,	// (0x00028173) cell_app_pane_cp2_g1_ParamLimits

0xd290,	// (0x00028173) cell_app_pane_cp2_g1

0xd2ae,	// (0x00028191) cell_app_pane_cp2_g2_ParamLimits

0xd2ae,	// (0x00028191) cell_app_pane_cp2_g2

0x0001,

0xfbd7,	// (0x0002aaba) cell_app_pane_cp2_g_ParamLimits

0xfbd7,	// (0x0002aaba) cell_app_pane_cp2_g

0xd2ba,	// (0x0002819d) cell_app_pane_cp2_t1_ParamLimits

0xd2ba,	// (0x0002819d) cell_app_pane_cp2_t1

0x5b89,	// (0x00020a6c) grid_highlight_pane_cp1_ParamLimits

0x5b89,	// (0x00020a6c) grid_highlight_pane_cp1

0x86ed,	// (0x000235d0) cell_hwr_candidate_pane_cp1_ParamLimits

0x86ed,	// (0x000235d0) cell_hwr_candidate_pane_cp1

0x86a1,	// (0x00023584) fep_hwr_candidate_drop_down_list_pane_g1

0x870b,	// (0x000235ee) fep_hwr_candidate_drop_down_list_pane_g2

0x8718,	// (0x000235fb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0002aabf) fep_hwr_candidate_drop_down_list_pane_g

0x8725,	// (0x00023608) fep_hwr_candidate_drop_down_list_scroll_pane

0x872e,	// (0x00023611) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x872e,	// (0x00023611) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x873b,	// (0x0002361e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x873b,	// (0x0002361e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8748,	// (0x0002362b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8748,	// (0x0002362b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8755,	// (0x00023638) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8755,	// (0x00023638) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8770,	// (0x00023653) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8770,	// (0x00023653) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x878b,	// (0x0002366e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x878b,	// (0x0002366e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x87a6,	// (0x00023689) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x87a6,	// (0x00023689) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x87c1,	// (0x000236a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x87c1,	// (0x000236a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0002aac6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0002aac6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x3d43,	// (0x0001ec26) cell_vkb_candidate_pane_cp1_ParamLimits

0x3d43,	// (0x0001ec26) cell_vkb_candidate_pane_cp1

0xce49,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xce49,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1

0xd2cc,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd2cc,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2

0xd2d9,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd2d9,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf4,	// (0x0002aad7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf4,	// (0x0002aad7) fep_vkb_candidate_drop_down_list_pane_g

0xd309,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd309,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane

0xd316,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd316,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd323,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd323,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd32f,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd32f,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd16b,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd16b,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd18c,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd18c,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd33b,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd33b,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd35c,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd35c,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd37d,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd37d,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfb,	// (0x0002aade) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfb,	// (0x0002aade) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x21f9,	// (0x0001d0dc) title_pane_g1_ParamLimits

0x2210,	// (0x0001d0f3) title_pane_g2_ParamLimits

0xf592,	// (0x0002a475) title_pane_g_ParamLimits

0x608f,	// (0x00020f72) aid_call2_pane

0x6087,	// (0x00020f6a) aid_call_pane

0x6097,	// (0x00020f7a) popup_clock_analogue_window_g1

0x6097,	// (0x00020f7a) popup_clock_analogue_window_g2

0x7a14,	// (0x000228f7) popup_clock_analogue_window_g3

0x7a1d,	// (0x00022900) popup_clock_analogue_window_g4

0x4e46,	// (0x0001fd29) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0002a61f) popup_clock_analogue_window_g

0x7a25,	// (0x00022908) popup_clock_analogue_window_t1

0x7a69,	// (0x0002294c) clock_digital_number_pane_ParamLimits

0x7a69,	// (0x0002294c) clock_digital_number_pane

0x7a75,	// (0x00022958) clock_digital_number_pane_cp02_ParamLimits

0x7a75,	// (0x00022958) clock_digital_number_pane_cp02

0x7a81,	// (0x00022964) clock_digital_number_pane_cp03_ParamLimits

0x7a81,	// (0x00022964) clock_digital_number_pane_cp03

0x7a8d,	// (0x00022970) clock_digital_number_pane_cp04_ParamLimits

0x7a8d,	// (0x00022970) clock_digital_number_pane_cp04

0x7a99,	// (0x0002297c) clock_digital_separator_pane_ParamLimits

0x7a99,	// (0x0002297c) clock_digital_separator_pane

0x7aa5,	// (0x00022988) popup_clock_digital_window_t1_ParamLimits

0x7aa5,	// (0x00022988) popup_clock_digital_window_t1

0x4e46,	// (0x0001fd29) clock_digital_number_pane_g1

0x4e46,	// (0x0001fd29) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002a62a) clock_digital_number_pane_g

0x4e46,	// (0x0001fd29) clock_digital_separator_pane_g1

0x4e46,	// (0x0001fd29) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002a62a) clock_digital_separator_pane_g

0x2fd3,	// (0x0001deb6) aid_fill_nsta_ParamLimits

0x30ea,	// (0x0001dfcd) indicator_nsta_pane_ParamLimits

0x9256,	// (0x00024139) popup_clock_analogue_window

0x9256,	// (0x00024139) popup_clock_digital_window

0x60f8,	// (0x00020fdb) grid_indicator_nsta_pane_ParamLimits

0xb77b,	// (0x0002665e) clock_nsta_pane_t2

0x0001,

0xface,	// (0x0002a9b1) clock_nsta_pane_t

0x797d,	// (0x00022860) aid_size_max_handle

0xe1b0,	// (0x00029093) aid_size_min_handle

0x6542,	// (0x00021425) editor_scroll_pane

0xd398,	// (0x0002827b) ex_editor_pane

0x5ce0,	// (0x00020bc3) scroll_pane_cp13

0x547c,	// (0x0002035f) scroll_pane_cp14

0x60c1,	// (0x00020fa4) scroll_pane_cp36

0x277e,	// (0x0001d661) list_single_graphic_hl_pane_cp2_ParamLimits

0x277e,	// (0x0001d661) list_single_graphic_hl_pane_cp2

0x3912,	// (0x0001e7f5) list_single_graphic_hl_pane_ParamLimits

0x3912,	// (0x0001e7f5) list_single_graphic_hl_pane

0xbf82,	// (0x00026e65) aid_size_min_hl_cp1

0xd3a0,	// (0x00028283) list_highlight_pane_cp34_ParamLimits

0xd3a0,	// (0x00028283) list_highlight_pane_cp34

0xd3b1,	// (0x00028294) list_single_graphic_hl_pane_g1_ParamLimits

0xd3b1,	// (0x00028294) list_single_graphic_hl_pane_g1

0x1e88,	// (0x0001cd6b) list_single_graphic_hl_pane_g2_ParamLimits

0x1e88,	// (0x0001cd6b) list_single_graphic_hl_pane_g2

0x1e88,	// (0x0001cd6b) list_single_graphic_hl_pane_g3_ParamLimits

0x1e88,	// (0x0001cd6b) list_single_graphic_hl_pane_g3

0x1e94,	// (0x0001cd77) list_single_graphic_hl_pane_g4_ParamLimits

0x1e94,	// (0x0001cd77) list_single_graphic_hl_pane_g4

0x1ea0,	// (0x0001cd83) list_single_graphic_hl_pane_g5_ParamLimits

0x1ea0,	// (0x0001cd83) list_single_graphic_hl_pane_g5

0x0004,

0xfc0c,	// (0x0002aaef) list_single_graphic_hl_pane_g_ParamLimits

0xfc0c,	// (0x0002aaef) list_single_graphic_hl_pane_g

0x1eb4,	// (0x0001cd97) list_single_graphic_hl_pane_t1_ParamLimits

0x1eb4,	// (0x0001cd97) list_single_graphic_hl_pane_t1

0xd3be,	// (0x000282a1) aid_size_min_hl_cp2

0xd3c7,	// (0x000282aa) list_highlight_pane_cp34_cp2_ParamLimits

0xd3c7,	// (0x000282aa) list_highlight_pane_cp34_cp2

0xd3b1,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd3b1,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2

0xd3d4,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd3d4,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2

0xd3e0,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd3e0,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2

0x63b7,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x63b7,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2

0xd1d6,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd1d6,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2

0xe1da,	// (0x000290bd) control_pane_g4_ParamLimits

0xe1da,	// (0x000290bd) control_pane_g4

0x9099,	// (0x00023f7c) bg_popup_sub_pane_cp10_ParamLimits

0xcc0b,	// (0x00027aee) list_choice_list_pane_ParamLimits

0xcc1a,	// (0x00027afd) scroll_pane_cp23

0x508b,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02_ParamLimits

0xd212,	// (0x000280f5) list_preview_fixed_pane_ParamLimits

0xd228,	// (0x0002810b) list_preview_fixed_pane_cp_ParamLimits

0xd228,	// (0x0002810b) list_preview_fixed_pane_cp

0xd234,	// (0x00028117) popup_preview_fixed_window_g1_ParamLimits

0xd234,	// (0x00028117) popup_preview_fixed_window_g1

0xd240,	// (0x00028123) popup_preview_fixed_window_g2_ParamLimits

0xd240,	// (0x00028123) popup_preview_fixed_window_g2

0x0002,

0xfb94,	// (0x0002aa77) popup_preview_fixed_window_g_ParamLimits

0xfb94,	// (0x0002aa77) popup_preview_fixed_window_g

0x7898,	// (0x0002277b) aid_navi_side_left_pane_ParamLimits

0x78a8,	// (0x0002278b) aid_navi_side_right_pane_ParamLimits

0x78b7,	// (0x0002279a) navi_icon_pane_stacon_ParamLimits

0x78c7,	// (0x000227aa) navi_navi_pane_stacon_ParamLimits

0x78b7,	// (0x0002279a) navi_text_pane_stacon_ParamLimits

0x4e3c,	// (0x0001fd1f) main_text_info_pane

0xd402,	// (0x000282e5) listscroll_text_info_pane

0xd40a,	// (0x000282ed) list_text_info_pane_ParamLimits

0xd40a,	// (0x000282ed) list_text_info_pane

0xd419,	// (0x000282fc) scroll_pane_cp24_ParamLimits

0xd419,	// (0x000282fc) scroll_pane_cp24

0x3d63,	// (0x0001ec46) list_text_info_pane_t1_ParamLimits

0x3d63,	// (0x0001ec46) list_text_info_pane_t1

0x2a5c,	// (0x0001d93f) popup_fast_swap2_window_ParamLimits

0x2a5c,	// (0x0001d93f) popup_fast_swap2_window

0xd454,	// (0x00028337) aid_size_cell_fast2

0x4e3c,	// (0x0001fd1f) bg_popup_window_pane_cp17

0x96e4,	// (0x000245c7) heading_pane_cp2

0x527b,	// (0x0002015e) listscroll_fast2_pane

0xd45e,	// (0x00028341) grid_fast2_pane

0xd466,	// (0x00028349) listscroll_fast2_pane_g1

0xd46e,	// (0x00028351) listscroll_fast2_pane_g2

0x0001,

0xfc17,	// (0x0002aafa) listscroll_fast2_pane_g

0x5ce0,	// (0x00020bc3) scroll_pane_cp26

0xd476,	// (0x00028359) cell_fast2_pane_ParamLimits

0xd476,	// (0x00028359) cell_fast2_pane

0xd48c,	// (0x0002836f) cell_fast2_pane_g1

0xd495,	// (0x00028378) cell_fast2_pane_g2

0xd49e,	// (0x00028381) cell_fast2_pane_g3

0x0002,

0xfc1c,	// (0x0002aaff) cell_fast2_pane_g

0x52dd,	// (0x000201c0) grid_highlight_pane_cp9

0x52f2,	// (0x000201d5) main_eswt_pane_ParamLimits

0x52f2,	// (0x000201d5) main_eswt_pane

0xd42e,	// (0x00028311) list_single_text_info_pane

0xd4a6,	// (0x00028389) eswt_ctrl_button_pane

0xd4a6,	// (0x00028389) eswt_ctrl_canvas_pane

0xd4ae,	// (0x00028391) eswt_ctrl_combo_pane

0xd4a6,	// (0x00028389) eswt_ctrl_default_pane

0xd4a6,	// (0x00028389) eswt_ctrl_label_pane

0xd4b6,	// (0x00028399) eswt_ctrl_wait_pane

0xd4be,	// (0x000283a1) eswt_shell_pane

0x4e3c,	// (0x0001fd1f) listscroll_eswt_app_pane

0xd4da,	// (0x000283bd) popup_eswt_tasktip_window_ParamLimits

0xd4da,	// (0x000283bd) popup_eswt_tasktip_window

0x9445,	// (0x00024328) bg_popup_window_pane_cp18

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_ParamLimits

0xd4eb,	// (0x000283ce) eswt_control_pane_g1

0xd4f8,	// (0x000283db) eswt_control_pane_g2_ParamLimits

0xd4f8,	// (0x000283db) eswt_control_pane_g2

0xd505,	// (0x000283e8) eswt_control_pane_g3_ParamLimits

0xd505,	// (0x000283e8) eswt_control_pane_g3

0xd512,	// (0x000283f5) eswt_control_pane_g4_ParamLimits

0xd512,	// (0x000283f5) eswt_control_pane_g4

0x0003,

0xfc23,	// (0x0002ab06) eswt_control_pane_g_ParamLimits

0xfc23,	// (0x0002ab06) eswt_control_pane_g

0x5b89,	// (0x00020a6c) bg_button_pane_ParamLimits

0x5b89,	// (0x00020a6c) bg_button_pane

0x52f2,	// (0x000201d5) common_borders_pane_copy2_ParamLimits

0x52f2,	// (0x000201d5) common_borders_pane_copy2

0xd51f,	// (0x00028402) control_button_pane_g1_ParamLimits

0xd51f,	// (0x00028402) control_button_pane_g1

0xd52b,	// (0x0002840e) control_button_pane_g2_ParamLimits

0xd52b,	// (0x0002840e) control_button_pane_g2

0xd537,	// (0x0002841a) control_button_pane_g3_ParamLimits

0xd537,	// (0x0002841a) control_button_pane_g3

0x0002,

0xfc2c,	// (0x0002ab0f) control_button_pane_g_ParamLimits

0xfc2c,	// (0x0002ab0f) control_button_pane_g

0xd54b,	// (0x0002842e) control_button_pane_t1

0xd559,	// (0x0002843c) control_button_pane_t2

0x0001,

0xfc33,	// (0x0002ab16) control_button_pane_t

0x9357,	// (0x0002423a) bg_button_pane_g1

0x9367,	// (0x0002424a) bg_button_pane_g2

0x935f,	// (0x00024242) bg_button_pane_g3

0x9377,	// (0x0002425a) bg_button_pane_g4

0x936f,	// (0x00024252) bg_button_pane_g5

0x937f,	// (0x00024262) bg_button_pane_g6

0x9387,	// (0x0002426a) bg_button_pane_g7

0x9397,	// (0x0002427a) bg_button_pane_g8

0x938f,	// (0x00024272) bg_button_pane_g9

0x0008,

0xf893,	// (0x0002a776) bg_button_pane_g

0xcbc6,	// (0x00027aa9) common_borders_pane_ParamLimits

0xcbc6,	// (0x00027aa9) common_borders_pane

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy1_ParamLimits

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy1

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy1_ParamLimits

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy1

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy1_ParamLimits

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy1

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy1_ParamLimits

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy1

0xcc01,	// (0x00027ae4) bg_eswt_ctrl_canvas_pane_g1

0xcbc6,	// (0x00027aa9) common_borders_pane_cp2_ParamLimits

0xcbc6,	// (0x00027aa9) common_borders_pane_cp2

0xcbc6,	// (0x00027aa9) common_borders_pane_cp3_ParamLimits

0xcbc6,	// (0x00027aa9) common_borders_pane_cp3

0xd567,	// (0x0002844a) separator_horizontal_pane

0x5f26,	// (0x00020e09) separator_vertical_pane

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy2_ParamLimits

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy2

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy2_ParamLimits

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy2

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy2_ParamLimits

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy2

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy2_ParamLimits

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy2

0x4e3c,	// (0x0001fd1f) common_borders_pane_cp4

0xd56f,	// (0x00028452) separator_horizontal_pane_g1

0xd578,	// (0x0002845b) separator_horizontal_pane_g2

0xd581,	// (0x00028464) separator_horizontal_pane_g3

0x0002,

0xfc38,	// (0x0002ab1b) separator_horizontal_pane_g

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy3_ParamLimits

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy3

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy3_ParamLimits

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy3

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy3_ParamLimits

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy3

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy3_ParamLimits

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy3

0x4e3c,	// (0x0001fd1f) common_borders_pane_cp5

0xd58a,	// (0x0002846d) separator_vertical_pane_g1

0xd593,	// (0x00028476) separator_vertical_pane_g2

0xd59c,	// (0x0002847f) separator_vertical_pane_g3

0x0002,

0xfc3f,	// (0x0002ab22) separator_vertical_pane_g

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy4_ParamLimits

0xd4eb,	// (0x000283ce) eswt_control_pane_g1_copy4

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy4_ParamLimits

0xd4f8,	// (0x000283db) eswt_control_pane_g2_copy4

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy4_ParamLimits

0xd505,	// (0x000283e8) eswt_control_pane_g3_copy4

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy4_ParamLimits

0xd512,	// (0x000283f5) eswt_control_pane_g4_copy4

0x3d7e,	// (0x0001ec61) eswt_ctrl_combo_button_pane

0x3d86,	// (0x0001ec69) eswt_ctrl_input_pane

0x3d8e,	// (0x0001ec71) popup_choice_list_window_cp70

0x3d96,	// (0x0001ec79) eswt_ctrl_input_pane_t1

0x4e3c,	// (0x0001fd1f) input_focus_pane_cp70

0xcbc6,	// (0x00027aa9) bg_button_pane_cp70_ParamLimits

0xcbc6,	// (0x00027aa9) bg_button_pane_cp70

0x3da4,	// (0x0001ec87) eswt_ctrl_combo_button_pane_g1

0xd5d3,	// (0x000284b6) wait_bar_pane_cp70

0x9445,	// (0x00024328) bg_popup_window_pane_cp70_ParamLimits

0x9445,	// (0x00024328) bg_popup_window_pane_cp70

0xd5db,	// (0x000284be) popup_eswt_tasktip_window_t1

0xd5f1,	// (0x000284d4) wait_bar_pane_cp71_ParamLimits

0xd5f1,	// (0x000284d4) wait_bar_pane_cp71

0xd5fd,	// (0x000284e0) grid_eswt_app_pane

0x5f2f,	// (0x00020e12) scroll_pane_cp70

0x3dac,	// (0x0001ec8f) cell_eswt_app_pane_ParamLimits

0x3dac,	// (0x0001ec8f) cell_eswt_app_pane

0x3dd4,	// (0x0001ecb7) cell_eswt_app_pane_g1_ParamLimits

0x3dd4,	// (0x0001ecb7) cell_eswt_app_pane_g1

0x3e03,	// (0x0001ece6) cell_eswt_app_pane_g2_ParamLimits

0x3e03,	// (0x0001ece6) cell_eswt_app_pane_g2

0x0001,

0xfc46,	// (0x0002ab29) cell_eswt_app_pane_g_ParamLimits

0xfc46,	// (0x0002ab29) cell_eswt_app_pane_g

0x3e2c,	// (0x0001ed0f) cell_eswt_app_pane_t1_ParamLimits

0x3e2c,	// (0x0001ed0f) cell_eswt_app_pane_t1

0xd6b8,	// (0x0002859b) grid_highlight_pane_cp70_ParamLimits

0xd6b8,	// (0x0002859b) grid_highlight_pane_cp70

0x5484,	// (0x00020367) set_content_pane_g1

0x6731,	// (0x00021614) status_small_volume_pane

0x87dc,	// (0x000236bf) status_small_volume_pane_g1

0x87e4,	// (0x000236c7) volume_small2_pane

0x87ed,	// (0x000236d0) volume_small2_pane_g1

0x87f6,	// (0x000236d9) volume_small2_pane_g2

0x87ff,	// (0x000236e2) volume_small2_pane_g3

0x8808,	// (0x000236eb) volume_small2_pane_g4

0x8811,	// (0x000236f4) volume_small2_pane_g5

0x881a,	// (0x000236fd) volume_small2_pane_g6

0x8823,	// (0x00023706) volume_small2_pane_g7

0x882c,	// (0x0002370f) volume_small2_pane_g8

0x8835,	// (0x00023718) volume_small2_pane_g9

0x883e,	// (0x00023721) volume_small2_pane_g10

0x0009,

0xfc4b,	// (0x0002ab2e) volume_small2_pane_g

0xcf8b,	// (0x00027e6e) fep_vkb_top_text_pane_g1_ParamLimits

0x3ceb,	// (0x0001ebce) fep_vkb_top_text_pane_t1_ParamLimits

0xd24c,	// (0x0002812f) popup_preview_fixed_window_g3_ParamLimits

0xd24c,	// (0x0002812f) popup_preview_fixed_window_g3

0x2f7c,	// (0x0001de5f) popup_toolbar_trans_pane

0x379f,	// (0x0001e682) aid_height_set_list_ParamLimits

0xa44b,	// (0x0002532e) aid_size_parent_ParamLimits

0x9099,	// (0x00023f7c) list_highlight_pane_cp2_ParamLimits

0x5484,	// (0x00020367) set_content_pane_g1_ParamLimits

0x3925,	// (0x0001e808) list_single_image_pane_ParamLimits

0x3925,	// (0x0001e808) list_single_image_pane

0x3e5e,	// (0x0001ed41) aid_size_cell_image_ParamLimits

0x3e5e,	// (0x0001ed41) aid_size_cell_image

0x3e6b,	// (0x0001ed4e) grid_single_image_pane_ParamLimits

0x3e6b,	// (0x0001ed4e) grid_single_image_pane

0x5484,	// (0x00020367) list_single_image_pane_g1_ParamLimits

0x5484,	// (0x00020367) list_single_image_pane_g1

0x5ba3,	// (0x00020a86) list_single_image_pane_g2_ParamLimits

0x5ba3,	// (0x00020a86) list_single_image_pane_g2

0x0001,

0xfc60,	// (0x0002ab43) list_single_image_pane_g_ParamLimits

0xfc60,	// (0x0002ab43) list_single_image_pane_g

0xaa14,	// (0x000258f7) list_single_image_pane_t1_ParamLimits

0xaa14,	// (0x000258f7) list_single_image_pane_t1

0x3e77,	// (0x0001ed5a) cell_image_list_pane_ParamLimits

0x3e77,	// (0x0001ed5a) cell_image_list_pane

0x3e8b,	// (0x0001ed6e) cell_image_list_pane_g1

0x3e94,	// (0x0001ed77) cell_image_list_pane_g2

0x0001,

0xfc65,	// (0x0002ab48) cell_image_list_pane_g

0xe4ed,	// (0x000293d0) aid_size_cell_tb_trans_pane

0x5b89,	// (0x00020a6c) bg_tb_trans_pane

0xe4ff,	// (0x000293e2) grid_tb_trans_pane

0x9357,	// (0x0002423a) bg_tb_trans_pane_g1

0x9367,	// (0x0002424a) bg_tb_trans_pane_g2

0x935f,	// (0x00024242) bg_tb_trans_pane_g3

0x9377,	// (0x0002425a) bg_tb_trans_pane_g4

0x936f,	// (0x00024252) bg_tb_trans_pane_g5

0x9397,	// (0x0002427a) bg_tb_trans_pane_g6

0x938f,	// (0x00024272) bg_tb_trans_pane_g7

0x937f,	// (0x00024262) bg_tb_trans_pane_g8

0x9387,	// (0x0002426a) bg_tb_trans_pane_g9

0x0008,

0xfc6a,	// (0x0002ab4d) bg_tb_trans_pane_g

0xe513,	// (0x000293f6) cell_toolbar_trans_pane_ParamLimits

0xe513,	// (0x000293f6) cell_toolbar_trans_pane

0xcc01,	// (0x00027ae4) cell_toolbar_trans_pane_g1

0x3b60,	// (0x0001ea43) list_form2_midp_pane_t1

0x3b6e,	// (0x0001ea51) list_form2_midp_pane_t2

0x0001,

0xfb07,	// (0x0002a9ea) list_form2_midp_pane_t

0xc8a2,	// (0x00027785) scroll_pane_cp51_ParamLimits

0xca5b,	// (0x0002793e) form2_midp_wait_pane_g1

0xca64,	// (0x00027947) form2_midp_wait_pane_g2

0xca6d,	// (0x00027950) form2_midp_wait_pane_g3

0x0002,

0xfb1c,	// (0x0002a9ff) form2_midp_wait_pane_g

0x4f2c,	// (0x0001fe0f) list_highlight_pane_cp21_ParamLimits

0xca8d,	// (0x00027970) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xca9c,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb2a2,	// (0x00026185) list_single_2graphic_im_pane_ParamLimits

0xb2a2,	// (0x00026185) list_single_2graphic_im_pane

0x3e9d,	// (0x0001ed80) list_single_2graphic_im_pane_g1_ParamLimits

0x3e9d,	// (0x0001ed80) list_single_2graphic_im_pane_g1

0x3eae,	// (0x0001ed91) list_single_2graphic_im_pane_g2_ParamLimits

0x3eae,	// (0x0001ed91) list_single_2graphic_im_pane_g2

0x3eba,	// (0x0001ed9d) list_single_2graphic_im_pane_g3_ParamLimits

0x3eba,	// (0x0001ed9d) list_single_2graphic_im_pane_g3

0x0003,

0xfc7d,	// (0x0002ab60) list_single_2graphic_im_pane_g_ParamLimits

0xfc7d,	// (0x0002ab60) list_single_2graphic_im_pane_g

0x3ece,	// (0x0001edb1) list_single_2graphic_im_pane_t1_ParamLimits

0x3ece,	// (0x0001edb1) list_single_2graphic_im_pane_t1

0xd258,	// (0x0002813b) list_single_graphic_2heading_pane_fp_ParamLimits

0xd258,	// (0x0002813b) list_single_graphic_2heading_pane_fp

0xb874,	// (0x00026757) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb874,	// (0x00026757) list_single_graphic_2heading_pane_fp_g1

0xd26c,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd26c,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2

0xae00,	// (0x00025ce3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xae00,	// (0x00025ce3) list_single_graphic_2heading_pane_fp_g3

0xb849,	// (0x0002672c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb849,	// (0x0002672c) list_single_graphic_2heading_pane_fp_g4

0xd278,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd278,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0002aa87) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0002aa87) list_single_graphic_2heading_pane_fp_g

0xbfc1,	// (0x00026ea4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbfc1,	// (0x00026ea4) list_single_graphic_2heading_pane_fp_t1

0xb8ac,	// (0x0002678f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb8ac,	// (0x0002678f) list_single_graphic_2heading_pane_fp_t2

0xbfd7,	// (0x00026eba) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbfd7,	// (0x00026eba) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc86,	// (0x0002ab69) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc86,	// (0x0002ab69) list_single_graphic_2heading_pane_fp_t

0xcc8c,	// (0x00027b6f) fep_hwr_write_pane_g5_ParamLimits

0xcc8c,	// (0x00027b6f) fep_hwr_write_pane_g5

0xcc98,	// (0x00027b7b) fep_hwr_write_pane_g6_ParamLimits

0xcc98,	// (0x00027b7b) fep_hwr_write_pane_g6

0xd4be,	// (0x000283a1) eswt_shell_pane_ParamLimits

0x9445,	// (0x00024328) bg_popup_window_pane_cp18_ParamLimits

0xa3ef,	// (0x000252d2) heading_pane_cp70

0xd5db,	// (0x000284be) popup_eswt_tasktip_window_t1_ParamLimits

0x3017,	// (0x0001defa) aid_touch_tab_arrow_left

0x302b,	// (0x0001df0e) aid_touch_tab_arrow_right

0x222f,	// (0x0001d112) title_pane_g3_ParamLimits

0x222f,	// (0x0001d112) title_pane_g3

0x5b59,	// (0x00020a3c) set_value_pane_g1

0x2f7c,	// (0x0001de5f) popup_toolbar_trans_pane_ParamLimits

0xe4ed,	// (0x000293d0) aid_size_cell_tb_trans_pane_ParamLimits

0x5b89,	// (0x00020a6c) bg_tb_trans_pane_ParamLimits

0xe4ff,	// (0x000293e2) grid_tb_trans_pane_ParamLimits

0x508b,	// (0x0001ff6e) cont_note_pane_ParamLimits

0x508b,	// (0x0001ff6e) cont_note_pane

0x52f2,	// (0x000201d5) cont_snote2_single_text_pane_ParamLimits

0x52f2,	// (0x000201d5) cont_snote2_single_text_pane

0x52f2,	// (0x000201d5) cont_snote2_single_graphic_pane_ParamLimits

0x52f2,	// (0x000201d5) cont_snote2_single_graphic_pane

0x98bd,	// (0x000247a0) cont_note_wait_pane_ParamLimits

0x98bd,	// (0x000247a0) cont_note_wait_pane

0x98bd,	// (0x000247a0) cont_note_image_pane_ParamLimits

0x98bd,	// (0x000247a0) cont_note_image_pane

0xe545,	// (0x00029428) popup_note2_window_g1_ParamLimits

0xe545,	// (0x00029428) popup_note2_window_g1

0xe576,	// (0x00029459) popup_note2_window_t1_ParamLimits

0xe576,	// (0x00029459) popup_note2_window_t1

0xe5bb,	// (0x0002949e) popup_note2_window_t2_ParamLimits

0xe5bb,	// (0x0002949e) popup_note2_window_t2

0xe600,	// (0x000294e3) popup_note2_window_t3_ParamLimits

0xe600,	// (0x000294e3) popup_note2_window_t3

0xe645,	// (0x00029528) popup_note2_window_t4_ParamLimits

0xe645,	// (0x00029528) popup_note2_window_t4

0x510f,	// (0x0001fff2) popup_note2_window_t5_ParamLimits

0x510f,	// (0x0001fff2) popup_note2_window_t5

0x0004,

0xfc92,	// (0x0002ab75) popup_note2_window_t_ParamLimits

0xfc92,	// (0x0002ab75) popup_note2_window_t

0xe674,	// (0x00029557) popup_note2_image_window_g1_ParamLimits

0xe674,	// (0x00029557) popup_note2_image_window_g1

0xe680,	// (0x00029563) popup_note2_image_window_g2_ParamLimits

0xe680,	// (0x00029563) popup_note2_image_window_g2

0x0001,

0xfc9d,	// (0x0002ab80) popup_note2_image_window_g_ParamLimits

0xfc9d,	// (0x0002ab80) popup_note2_image_window_g

0xe692,	// (0x00029575) popup_note2_image_window_t1_ParamLimits

0xe692,	// (0x00029575) popup_note2_image_window_t1

0xe6aa,	// (0x0002958d) popup_note2_image_window_t2_ParamLimits

0xe6aa,	// (0x0002958d) popup_note2_image_window_t2

0xe6c2,	// (0x000295a5) popup_note2_image_window_t3_ParamLimits

0xe6c2,	// (0x000295a5) popup_note2_image_window_t3

0x0002,

0xfca2,	// (0x0002ab85) popup_note2_image_window_t_ParamLimits

0xfca2,	// (0x0002ab85) popup_note2_image_window_t

0x98cb,	// (0x000247ae) popup_note2_wait_window_g1_ParamLimits

0x98cb,	// (0x000247ae) popup_note2_wait_window_g1

0x98d7,	// (0x000247ba) popup_note2_wait_window_g2_ParamLimits

0x98d7,	// (0x000247ba) popup_note2_wait_window_g2

0x98e3,	// (0x000247c6) popup_note2_wait_window_g3_ParamLimits

0x98e3,	// (0x000247c6) popup_note2_wait_window_g3

0x0002,

0xf875,	// (0x0002a758) popup_note2_wait_window_g_ParamLimits

0xf875,	// (0x0002a758) popup_note2_wait_window_g

0xe6de,	// (0x000295c1) popup_note2_wait_window_t1_ParamLimits

0xe6de,	// (0x000295c1) popup_note2_wait_window_t1

0xe6fc,	// (0x000295df) popup_note2_wait_window_t2_ParamLimits

0xe6fc,	// (0x000295df) popup_note2_wait_window_t2

0xe71a,	// (0x000295fd) popup_note2_wait_window_t3_ParamLimits

0xe71a,	// (0x000295fd) popup_note2_wait_window_t3

0xe72c,	// (0x0002960f) popup_note2_wait_window_t4_ParamLimits

0xe72c,	// (0x0002960f) popup_note2_wait_window_t4

0x0003,

0xfca9,	// (0x0002ab8c) popup_note2_wait_window_t_ParamLimits

0xfca9,	// (0x0002ab8c) popup_note2_wait_window_t

0xe73e,	// (0x00029621) wait_bar2_pane_ParamLimits

0xe73e,	// (0x00029621) wait_bar2_pane

0xe756,	// (0x00029639) popup_snote2_single_text_window_g1_ParamLimits

0xe756,	// (0x00029639) popup_snote2_single_text_window_g1

0xe77e,	// (0x00029661) popup_snote2_single_text_window_t1_ParamLimits

0xe77e,	// (0x00029661) popup_snote2_single_text_window_t1

0xe7ca,	// (0x000296ad) popup_snote2_single_text_window_t2_ParamLimits

0xe7ca,	// (0x000296ad) popup_snote2_single_text_window_t2

0xe816,	// (0x000296f9) popup_snote2_single_text_window_t3_ParamLimits

0xe816,	// (0x000296f9) popup_snote2_single_text_window_t3

0xe857,	// (0x0002973a) popup_snote2_single_text_window_t4_ParamLimits

0xe857,	// (0x0002973a) popup_snote2_single_text_window_t4

0xe88d,	// (0x00029770) popup_snote2_single_text_window_t5_ParamLimits

0xe88d,	// (0x00029770) popup_snote2_single_text_window_t5

0x0004,

0xfcb2,	// (0x0002ab95) popup_snote2_single_text_window_t_ParamLimits

0xfcb2,	// (0x0002ab95) popup_snote2_single_text_window_t

0xe8b8,	// (0x0002979b) popup_snote2_single_graphic_window_g1_ParamLimits

0xe8b8,	// (0x0002979b) popup_snote2_single_graphic_window_g1

0xe8e0,	// (0x000297c3) popup_snote2_single_graphic_window_g2_ParamLimits

0xe8e0,	// (0x000297c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbd,	// (0x0002aba0) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbd,	// (0x0002aba0) popup_snote2_single_graphic_window_g

0xe908,	// (0x000297eb) popup_snote2_single_graphic_window_t1_ParamLimits

0xe908,	// (0x000297eb) popup_snote2_single_graphic_window_t1

0xe954,	// (0x00029837) popup_snote2_single_graphic_window_t2_ParamLimits

0xe954,	// (0x00029837) popup_snote2_single_graphic_window_t2

0xe816,	// (0x000296f9) popup_snote2_single_graphic_window_t3_ParamLimits

0xe816,	// (0x000296f9) popup_snote2_single_graphic_window_t3

0xe857,	// (0x0002973a) popup_snote2_single_graphic_window_t4_ParamLimits

0xe857,	// (0x0002973a) popup_snote2_single_graphic_window_t4

0xe88d,	// (0x00029770) popup_snote2_single_graphic_window_t5_ParamLimits

0xe88d,	// (0x00029770) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc2,	// (0x0002aba5) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc2,	// (0x0002aba5) popup_snote2_single_graphic_window_t

0xb7bf,	// (0x000266a2) clock_nsta_pane_cp2_t1

0xb7bf,	// (0x000266a2) clock_nsta_pane_cp2_t2

0x0001,

0xfadd,	// (0x0002a9c0) clock_nsta_pane_cp2_t

0xafb4,	// (0x00025e97) form_field_data_wide_pane_g1_ParamLimits

0x5484,	// (0x00020367) form_field_data_wide_pane_g2_ParamLimits

0x5484,	// (0x00020367) form_field_data_wide_pane_g2

0x5ba3,	// (0x00020a86) form_field_data_wide_pane_g3_ParamLimits

0x5ba3,	// (0x00020a86) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002a5a2) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002a5a2) form_field_data_wide_pane_g

0x3a9b,	// (0x0001e97e) grid_touch_3_pane_ParamLimits

0x3a9b,	// (0x0001e97e) grid_touch_3_pane

0x3eff,	// (0x0001ede2) cell_touch_3_pane_ParamLimits

0x3eff,	// (0x0001ede2) cell_touch_3_pane

0xcc01,	// (0x00027ae4) cell_touch_3_pane_g1

0xcc01,	// (0x00027ae4) cell_touch_3_pane_g2

0x0001,

0xfb62,	// (0x0002aa45) cell_touch_3_pane_g

0x5141,	// (0x00020024) cont_query_data_pane

0x5149,	// (0x0002002c) cont_query_data_pane_cp1

0xe9a0,	// (0x00029883) button_value_adjust_pane_cp7

0xe9a8,	// (0x0002988b) query_popup_pane_cp3

0x60d2,	// (0x00020fb5) bg_popup_sub_pane_cp22_ParamLimits

0x7b01,	// (0x000229e4) navi_navi_volume_pane_cp2

0x7b19,	// (0x000229fc) popup_side_volume_key_window_g2

0x7b25,	// (0x00022a08) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002a634) popup_side_volume_key_window_g

0x7b3f,	// (0x00022a22) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002a63b) popup_side_volume_key_window_t

0x633a,	// (0x0002121d) popup_side_volume_key_window_ParamLimits

0x1961,	// (0x0001c844) list_double_graphic_pane_g4_ParamLimits

0x1961,	// (0x0001c844) list_double_graphic_pane_g4

0x38fd,	// (0x0001e7e0) list_single_2heading_msg_pane_ParamLimits

0x38fd,	// (0x0001e7e0) list_single_2heading_msg_pane

0x1eca,	// (0x0001cdad) list_single_2heading_msg_pane_g1_ParamLimits

0x1eca,	// (0x0001cdad) list_single_2heading_msg_pane_g1

0x1ed6,	// (0x0001cdb9) list_single_2heading_msg_pane_g2_ParamLimits

0x1ed6,	// (0x0001cdb9) list_single_2heading_msg_pane_g2

0x1ee9,	// (0x0001cdcc) list_single_2heading_msg_pane_g3_ParamLimits

0x1ee9,	// (0x0001cdcc) list_single_2heading_msg_pane_g3

0x1ef5,	// (0x0001cdd8) list_single_2heading_msg_pane_g4_ParamLimits

0x1ef5,	// (0x0001cdd8) list_single_2heading_msg_pane_g4

0x0003,

0xfccd,	// (0x0002abb0) list_single_2heading_msg_pane_g_ParamLimits

0xfccd,	// (0x0002abb0) list_single_2heading_msg_pane_g

0x1f0d,	// (0x0001cdf0) list_single_2heading_msg_pane_t1_ParamLimits

0x1f0d,	// (0x0001cdf0) list_single_2heading_msg_pane_t1

0x1f35,	// (0x0001ce18) list_single_2heading_msg_pane_t2_ParamLimits

0x1f35,	// (0x0001ce18) list_single_2heading_msg_pane_t2

0x1fa0,	// (0x0001ce83) list_single_2heading_msg_pane_t3_ParamLimits

0x1fa0,	// (0x0001ce83) list_single_2heading_msg_pane_t3

0xc0ba,	// (0x00026f9d) list_single_2heading_msg_pane_t4_ParamLimits

0xc0ba,	// (0x00026f9d) list_single_2heading_msg_pane_t4

0x0003,

0xfcd6,	// (0x0002abb9) list_single_2heading_msg_pane_t_ParamLimits

0xfcd6,	// (0x0002abb9) list_single_2heading_msg_pane_t

0x4ed2,	// (0x0001fdb5) title_pane_g4_ParamLimits

0x4ed2,	// (0x0001fdb5) title_pane_g4

0x780e,	// (0x000226f1) title_pane_stacon_g3_ParamLimits

0x780e,	// (0x000226f1) title_pane_stacon_g3

0xe539,	// (0x0002941c) list_single_2graphic_im_pane_g4_ParamLimits

0xe539,	// (0x0002941c) list_single_2graphic_im_pane_g4

0xa205,	// (0x000250e8) popup_side_volume_key_window_cp

0xa66b,	// (0x0002554e) main_idle_act2_pane_t1

0x7fc6,	// (0x00022ea9) toolbar_button_pane_g10

0x25bf,	// (0x0001d4a2) popup_toolbar_window_cp1

0xb7b0,	// (0x00026693) clock_nsta_pane_cp_t1

0xb7b0,	// (0x00026693) clock_nsta_pane_cp_t2

0x0001,

0xfad8,	// (0x0002a9bb) clock_nsta_pane_cp_t

0x7b01,	// (0x000229e4) navi_navi_volume_pane_cp2_ParamLimits

0x7b0d,	// (0x000229f0) popup_side_volume_key_window_g1_ParamLimits

0x7b19,	// (0x000229fc) popup_side_volume_key_window_g2_ParamLimits

0x7b25,	// (0x00022a08) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002a634) popup_side_volume_key_window_g_ParamLimits

0x845c,	// (0x0002333f) fep_hwr_aid_pane

0x84fd,	// (0x000233e0) bg_fep_hwr_top_pane_g4_ParamLimits

0xcc5c,	// (0x00027b3f) fep_hwr_top_pane_g1_ParamLimits

0xcc6e,	// (0x00027b51) fep_hwr_top_pane_g2_ParamLimits

0x851d,	// (0x00023400) fep_hwr_top_pane_g3_ParamLimits

0xfb2d,	// (0x0002aa10) fep_hwr_top_pane_g_ParamLimits

0x8532,	// (0x00023415) fep_hwr_top_text_pane_ParamLimits

0x9fd0,	// (0x00024eb3) aid_touch_tab_arrow_arrow_2

0x9fd9,	// (0x00024ebc) aid_touch_tab_arrow_left_2

0x8470,	// (0x00023353) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x84a3,	// (0x00023386) fep_hwr_prediction_pane

0xcdbb,	// (0x00027c9e) fep_vkb_prediction_pane

0x3ccb,	// (0x0001ebae) fep_vkb_side_pane_g3_ParamLimits

0x3ccb,	// (0x0001ebae) fep_vkb_side_pane_g3

0x86a1,	// (0x00023584) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x870b,	// (0x000235ee) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8718,	// (0x000235fb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdc,	// (0x0002aabf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8847,	// (0x0002372a) fep_hwr_prediction_pane_g1

0x8851,	// (0x00023734) fep_hwr_prediction_pane_g2

0x8859,	// (0x0002373c) fep_hwr_prediction_pane_g3

0x8861,	// (0x00023744) fep_hwr_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0002abc2) fep_hwr_prediction_pane_g

0xe9b9,	// (0x0002989c) fep_vkb_prediction_pane_g1

0xe9c3,	// (0x000298a6) fep_vkb_prediction_pane_g2

0xe9cb,	// (0x000298ae) fep_vkb_prediction_pane_g3

0xe9d3,	// (0x000298b6) fep_vkb_prediction_pane_g4

0x0003,

0xfce8,	// (0x0002abcb) fep_vkb_prediction_pane_g

0x8294,	// (0x00023177) slider_set_pane_g3

0x82a8,	// (0x0002318b) slider_set_pane_g4

0x82c0,	// (0x000231a3) slider_set_pane_g5

0x8294,	// (0x00023177) slider_set_pane_g6

0xe48a,	// (0x0002936d) slider_set_pane_g7

0xa46e,	// (0x00025351) slider_form_pane_g3

0xa477,	// (0x0002535a) slider_form_pane_g4

0xa47f,	// (0x00025362) slider_form_pane_g5

0xa46e,	// (0x00025351) slider_form_pane_g6

0x38d1,	// (0x0001e7b4) slider_form_pane_g7

0xa8b4,	// (0x00025797) slider_set_pane_vc_g3

0xa8bd,	// (0x000257a0) slider_set_pane_vc_g4

0xa8c6,	// (0x000257a9) slider_set_pane_vc_g5

0xa8b4,	// (0x00025797) slider_set_pane_vc_g6

0xa8cf,	// (0x000257b2) slider_set_pane_vc_g7

0xa8b4,	// (0x00025797) slider_form_pane_vc_g1

0xa8bd,	// (0x000257a0) slider_form_pane_vc_g2

0xa8c6,	// (0x000257a9) slider_form_pane_vc_g3

0xa8b4,	// (0x00025797) slider_form_pane_vc_g4

0xb56e,	// (0x00026451) slider_form_pane_vc_g5

0x0004,

0xfabe,	// (0x0002a9a1) slider_form_pane_vc_g

0x4e3c,	// (0x0001fd1f) main_idle_act3_pane

0xe9db,	// (0x000298be) ai3_links_pane

0x3f46,	// (0x0001ee29) popup_ai3_data_window_ParamLimits

0x3f46,	// (0x0001ee29) popup_ai3_data_window

0x4e3c,	// (0x0001fd1f) grid_ai3_links_pane

0x3f5e,	// (0x0001ee41) cell_ai3_links_pane_ParamLimits

0x3f5e,	// (0x0001ee41) cell_ai3_links_pane

0xe9e4,	// (0x000298c7) bg_popup_sub_pane_cp11

0xe9f1,	// (0x000298d4) cell_ai3_links_pane_g1

0x4e3c,	// (0x0001fd1f) bg_popup_sub_pane_cp12

0xea16,	// (0x000298f9) heading_ai3_data_pane

0xea1e,	// (0x00029901) list_ai3_gene_pane

0xea2a,	// (0x0002990d) popup_ai3_data_window_g1

0xea32,	// (0x00029915) heading_ai3_data_pane_g1

0xea3a,	// (0x0002991d) heading_ai3_data_pane_t1

0xea48,	// (0x0002992b) list_double_ai3_gene_pane_ParamLimits

0xea48,	// (0x0002992b) list_double_ai3_gene_pane

0xea55,	// (0x00029938) list_single_ai3_gene_pane_ParamLimits

0xea55,	// (0x00029938) list_single_ai3_gene_pane

0xcbc6,	// (0x00027aa9) list_highlight_pane_cp7_ParamLimits

0xcbc6,	// (0x00027aa9) list_highlight_pane_cp7

0xea62,	// (0x00029945) list_single_a13_gene_pane_t1_ParamLimits

0xea62,	// (0x00029945) list_single_a13_gene_pane_t1

0xea79,	// (0x0002995c) list_single_ai3_gene_pane_g1

0xea82,	// (0x00029965) list_single_ai3_gene_pane_g2

0x0001,

0xfcf1,	// (0x0002abd4) list_single_ai3_gene_pane_g

0xea8a,	// (0x0002996d) list_double_ai3_gene_pane_g1_ParamLimits

0xea8a,	// (0x0002996d) list_double_ai3_gene_pane_g1

0xea96,	// (0x00029979) list_double_ai3_gene_pane_t1_ParamLimits

0xea96,	// (0x00029979) list_double_ai3_gene_pane_t1

0xeab2,	// (0x00029995) list_double_ai3_gene_pane_t2_ParamLimits

0xeab2,	// (0x00029995) list_double_ai3_gene_pane_t2

0xeac7,	// (0x000299aa) list_double_ai3_gene_pane_t3_ParamLimits

0xeac7,	// (0x000299aa) list_double_ai3_gene_pane_t3

0x0002,

0xfcf6,	// (0x0002abd9) list_double_ai3_gene_pane_t_ParamLimits

0xfcf6,	// (0x0002abd9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbfed,	// (0x00026ed0) aid_size_min_col_2

0x3f32,	// (0x0001ee15) aid_size_min_msg_ParamLimits

0x3f32,	// (0x0001ee15) aid_size_min_msg

0x3cdf,	// (0x0001ebc2) fep_vkb_top_text_pane_g2_ParamLimits

0x3cdf,	// (0x0001ebc2) fep_vkb_top_text_pane_g2

0x0001,

0xfb5d,	// (0x0002aa40) fep_vkb_top_text_pane_g_ParamLimits

0xfb5d,	// (0x0002aa40) fep_vkb_top_text_pane_g

0x4e3c,	// (0x0001fd1f) main_hc_apps_shell_pane

0xeae4,	// (0x000299c7) grid_hc_apps_pane_ParamLimits

0xeae4,	// (0x000299c7) grid_hc_apps_pane

0xeaf3,	// (0x000299d6) list_hc_apps_pane

0xeafb,	// (0x000299de) scroll_pane_cp37_ParamLimits

0xeafb,	// (0x000299de) scroll_pane_cp37

0x3f74,	// (0x0001ee57) cell_hc_apps_pane_ParamLimits

0x3f74,	// (0x0001ee57) cell_hc_apps_pane

0x400e,	// (0x0001eef1) cell_hc_apps_pane_g1_ParamLimits

0x400e,	// (0x0001eef1) cell_hc_apps_pane_g1

0xeb07,	// (0x000299ea) cell_hc_apps_pane_g2_ParamLimits

0xeb07,	// (0x000299ea) cell_hc_apps_pane_g2

0xeb23,	// (0x00029a06) cell_hc_apps_pane_g3_ParamLimits

0xeb23,	// (0x00029a06) cell_hc_apps_pane_g3

0x0002,

0xfcfd,	// (0x0002abe0) cell_hc_apps_pane_g_ParamLimits

0xfcfd,	// (0x0002abe0) cell_hc_apps_pane_g

0x403b,	// (0x0001ef1e) cell_hc_apps_pane_t1_ParamLimits

0x403b,	// (0x0001ef1e) cell_hc_apps_pane_t1

0x508b,	// (0x0001ff6e) grid_highlight_pane_cp10_ParamLimits

0x508b,	// (0x0001ff6e) grid_highlight_pane_cp10

0x4079,	// (0x0001ef5c) list_single_hc_apps_pane_ParamLimits

0x4079,	// (0x0001ef5c) list_single_hc_apps_pane

0x40a5,	// (0x0001ef88) list_single_hc_apps_pane_g1

0x200e,	// (0x0001cef1) list_single_hc_apps_pane_g2

0x0001,

0xfd04,	// (0x0002abe7) list_single_hc_apps_pane_g

0x2027,	// (0x0001cf0a) list_single_hc_apps_pane_g2_copy1

0x2043,	// (0x0001cf26) list_single_hc_apps_pane_t1

0x4f2c,	// (0x0001fe0f) bg_set_opt_pane_cp_ParamLimits

0x7501,	// (0x000223e4) setting_slider_pane_t1_ParamLimits

0xe15a,	// (0x0002903d) setting_slider_pane_t2_ParamLimits

0xe173,	// (0x00029056) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002a485) setting_slider_pane_t_ParamLimits

0x7547,	// (0x0002242a) slider_set_pane_ParamLimits

0x7e84,	// (0x00022d67) control_pane_g5_ParamLimits

0x7e84,	// (0x00022d67) control_pane_g5

0xa436,	// (0x00025319) slider_set_pane_g1_ParamLimits

0x8288,	// (0x0002316b) slider_set_pane_g2_ParamLimits

0x8294,	// (0x00023177) slider_set_pane_g3_ParamLimits

0x82a8,	// (0x0002318b) slider_set_pane_g4_ParamLimits

0x82c0,	// (0x000231a3) slider_set_pane_g5_ParamLimits

0x8294,	// (0x00023177) slider_set_pane_g6_ParamLimits

0xe48a,	// (0x0002936d) slider_set_pane_g7_ParamLimits

0xf991,	// (0x0002a874) slider_set_pane_g_ParamLimits

0x4f2c,	// (0x0001fe0f) navi_icon_text_pane_ParamLimits

0x2fe9,	// (0x0001decc) aid_fill_nsta_2_ParamLimits

0x3017,	// (0x0001defa) aid_touch_tab_arrow_left_ParamLimits

0x302b,	// (0x0001df0e) aid_touch_tab_arrow_right_ParamLimits

0x30c7,	// (0x0001dfaa) clock_nsta_pane_ParamLimits

0x9fb2,	// (0x00024e95) navi_icon_pane_g1_ParamLimits

0x9fbe,	// (0x00024ea1) navi_text_pane_t1_ParamLimits

0xc860,	// (0x00027743) navi_icon_text_pane_g1_ParamLimits

0xc86c,	// (0x0002774f) navi_icon_text_pane_t1_ParamLimits

0x40a5,	// (0x0001ef88) list_single_hc_apps_pane_g1_ParamLimits

0x200e,	// (0x0001cef1) list_single_hc_apps_pane_g2_ParamLimits

0xfd04,	// (0x0002abe7) list_single_hc_apps_pane_g_ParamLimits

0x2027,	// (0x0001cf0a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x2043,	// (0x0001cf26) list_single_hc_apps_pane_t1_ParamLimits

0xe0e7,	// (0x00028fca) popup_toolbar2_fixed_window_ParamLimits

0xe0e7,	// (0x00028fca) popup_toolbar2_fixed_window

0x2f74,	// (0x0001de57) popup_toolbar2_float_window

0x4e3c,	// (0x0001fd1f) bg_popup_sub_pane_cp27

0xeb45,	// (0x00029a28) grid_toolbar2_float_pane

0x4e3c,	// (0x0001fd1f) bg_popup_sub_pane_cp26

0xeb45,	// (0x00029a28) grid_toolbar2_fixed_pane

0x40be,	// (0x0001efa1) cell_toolbar2_fixed_pane_ParamLimits

0x40be,	// (0x0001efa1) cell_toolbar2_fixed_pane

0x40d9,	// (0x0001efbc) cell_toolbar2_fixed_pane_g1

0xeb4d,	// (0x00029a30) toolbar2_fixed_button_pane

0x9357,	// (0x0002423a) toolbar2_fixed_button_pane_g1

0x9367,	// (0x0002424a) toolbar2_fixed_button_pane_g2

0x935f,	// (0x00024242) toolbar2_fixed_button_pane_g3

0x9377,	// (0x0002425a) toolbar2_fixed_button_pane_g4

0x936f,	// (0x00024252) toolbar2_fixed_button_pane_g5

0x937f,	// (0x00024262) toolbar2_fixed_button_pane_g6

0x9387,	// (0x0002426a) toolbar2_fixed_button_pane_g7

0x9397,	// (0x0002427a) toolbar2_fixed_button_pane_g8

0x938f,	// (0x00024272) toolbar2_fixed_button_pane_g9

0x0008,

0xf893,	// (0x0002a776) toolbar2_fixed_button_pane_g

0xeb55,	// (0x00029a38) cell_toolbar2_float_pane_ParamLimits

0xeb55,	// (0x00029a38) cell_toolbar2_float_pane

0xeb66,	// (0x00029a49) cell_toolbar2_float_pane_g1

0xeb4d,	// (0x00029a30) toolbar2_fixed_button_pane_cp

0x3c94,	// (0x0001eb77) fep_vkb_accented_list_pane_ParamLimits

0x3c94,	// (0x0001eb77) fep_vkb_accented_list_pane

0x8681,	// (0x00023564) bg_popup_fep_shadow_pane_g9

0x6542,	// (0x00021425) bg_popup_fep_shadow_pane_cp3

0x5cc7,	// (0x00020baa) list_accented_list_pane

0xeb6f,	// (0x00029a52) list_single_accented_list_pane_ParamLimits

0xeb6f,	// (0x00029a52) list_single_accented_list_pane

0x6542,	// (0x00021425) list_highlight_pane_cp10

0xeb80,	// (0x00029a63) list_single_accented_list_pane_t1

0x2eb6,	// (0x0001dd99) popup_slider_window_ParamLimits

0x2eb6,	// (0x0001dd99) popup_slider_window

0xe9b0,	// (0x00029893) aid_indentation_list_msg

0x41b8,	// (0x0001f09b) bg_popup_window_pane_cp19

0xefe0,	// (0x00029ec3) popup_slider_window_g1

0xeffc,	// (0x00029edf) popup_slider_window_g2

0xf018,	// (0x00029efb) popup_slider_window_g3

0x0005,

0xfd09,	// (0x0002abec) popup_slider_window_g

0xf034,	// (0x00029f17) popup_slider_window_t1

0xf078,	// (0x00029f5b) small_volume_slider_vertical_pane

0xcc01,	// (0x00027ae4) small_volume_slider_vertical_pane_g1

0xcc01,	// (0x00027ae4) small_volume_slider_vertical_pane_g2

0xf094,	// (0x00029f77) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1b,	// (0x0002abfe) small_volume_slider_vertical_pane_g

0xe06b,	// (0x00028f4e) area_side_right_pane_ParamLimits

0xe06b,	// (0x00028f4e) area_side_right_pane

0xeb8e,	// (0x00029a71) aid_size_side_button_ParamLimits

0xeb8e,	// (0x00029a71) aid_size_side_button

0xeba7,	// (0x00029a8a) grid_sctrl_middle_pane_ParamLimits

0xeba7,	// (0x00029a8a) grid_sctrl_middle_pane

0x8899,	// (0x0002377c) sctrl_sk_bottom_pane

0x88aa,	// (0x0002378d) sctrl_sk_top_pane

0x88bc,	// (0x0002379f) aid_touch_sctrl_top

0x88c9,	// (0x000237ac) bg_sctrl_sk_pane_ParamLimits

0x88c9,	// (0x000237ac) bg_sctrl_sk_pane

0x88d7,	// (0x000237ba) sctrl_sk_top_pane_g1

0x88e4,	// (0x000237c7) sctrl_sk_top_pane_t1

0x88bc,	// (0x0002379f) aid_touch_sctrl_bottom

0x88c9,	// (0x000237ac) bg_sctrl_sk_pane_cp_ParamLimits

0x88c9,	// (0x000237ac) bg_sctrl_sk_pane_cp

0x88ff,	// (0x000237e2) sctrl_sk_bottom_pane_g1

0x88e4,	// (0x000237c7) sctrl_sk_bottom_pane_t1

0xebbd,	// (0x00029aa0) cell_sctrl_middle_pane_ParamLimits

0xebbd,	// (0x00029aa0) cell_sctrl_middle_pane

0xebce,	// (0x00029ab1) aid_touch_sctrl_middle_ParamLimits

0xebce,	// (0x00029ab1) aid_touch_sctrl_middle

0xebdb,	// (0x00029abe) bg_sctrl_middle_pane_ParamLimits

0xebdb,	// (0x00029abe) bg_sctrl_middle_pane

0x8f07,	// (0x00023dea) cell_sctrl_middle_pane_g1_ParamLimits

0x8f07,	// (0x00023dea) cell_sctrl_middle_pane_g1

0xebe9,	// (0x00029acc) cell_sctrl_middle_pane_g2_ParamLimits

0xebe9,	// (0x00029acc) cell_sctrl_middle_pane_g2

0x0001,

0xfd27,	// (0x0002ac0a) cell_sctrl_middle_pane_g_ParamLimits

0xfd27,	// (0x0002ac0a) cell_sctrl_middle_pane_g

0x9357,	// (0x0002423a) bg_sctrl_middle_pane_g1

0x935f,	// (0x00024242) bg_sctrl_middle_pane_g2

0x9367,	// (0x0002424a) bg_sctrl_middle_pane_g3

0x936f,	// (0x00024252) bg_sctrl_middle_pane_g4

0x9377,	// (0x0002425a) bg_sctrl_middle_pane_g5

0x937f,	// (0x00024262) bg_sctrl_middle_pane_g6

0x9387,	// (0x0002426a) bg_sctrl_middle_pane_g7

0x938f,	// (0x00024272) bg_sctrl_middle_pane_g8

0x0007,

0xfd2c,	// (0x0002ac0f) bg_sctrl_middle_pane_g

0x9397,	// (0x0002427a) bg_sctrl_middle_pane_g8_copy1

0x9357,	// (0x0002423a) bg_sctrl_sk_pane_g1

0x9367,	// (0x0002424a) bg_sctrl_sk_pane_g2

0x935f,	// (0x00024242) bg_sctrl_sk_pane_g3

0x0008,

0xf893,	// (0x0002a776) bg_sctrl_sk_pane_g

0x5414,	// (0x000202f7) aid_size_touch_scroll_bar

0x9377,	// (0x0002425a) bg_sctrl_sk_pane_g4

0x936f,	// (0x00024252) bg_sctrl_sk_pane_g5

0x937f,	// (0x00024262) bg_sctrl_sk_pane_g6

0x9387,	// (0x0002426a) bg_sctrl_sk_pane_g7

0x9397,	// (0x0002427a) bg_sctrl_sk_pane_g8

0x938f,	// (0x00024272) bg_sctrl_sk_pane_g9

0x90cd,	// (0x00023fb0) popup_fep_china_hwr2_fs_candidate_window

0x2ab1,	// (0x0001d994) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x2ab1,	// (0x0001d994) popup_fep_china_hwr2_fs_control_window

0x86a1,	// (0x00023584) sctrl_sk_top_pane_g2

0x0001,

0xfd22,	// (0x0002ac05) sctrl_sk_top_pane_g

0x42d8,	// (0x0001f1bb) aid_fep_china_hwr2_fs_cell_ParamLimits

0x42d8,	// (0x0001f1bb) aid_fep_china_hwr2_fs_cell

0x42ec,	// (0x0001f1cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x42ec,	// (0x0001f1cf) bg_popup_fep_shadow_pane_cp4

0x4303,	// (0x0001f1e6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x4303,	// (0x0001f1e6) bg_popup_fep_shadow_pane_cp5

0x4315,	// (0x0001f1f8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x4315,	// (0x0001f1f8) popup_fep_china_hwr2_fs_control_bar_grid

0x4329,	// (0x0001f20c) popup_fep_china_hwr2_fs_control_funtion_grid

0xf09d,	// (0x00029f80) aid_fep_china_hwr2_fs_candi_cell

0x4e3c,	// (0x0001fd1f) bg_popup_fep_shadow_pane_cp6

0xf0a7,	// (0x00029f8a) popup_fep_china_hwr2_fs_candidate_grid

0x4331,	// (0x0001f214) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x4331,	// (0x0001f214) cell_fep_china_hwr2_fs_funtion_grid

0xcc01,	// (0x00027ae4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf0af,	// (0x00029f92) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf0af,	// (0x00029f92) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf0bd,	// (0x00029fa0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf0bd,	// (0x00029fa0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3d,	// (0x0002ac20) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3d,	// (0x0002ac20) cell_fep_china_hwr2_fs_funtion_grid_g

0x4349,	// (0x0001f22c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x4349,	// (0x0001f22c) cell_fep_china_hwr2_fs_funtion_grid_t1

0x435e,	// (0x0001f241) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x435e,	// (0x0001f241) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd42,	// (0x0002ac25) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd42,	// (0x0002ac25) cell_fep_china_hwr2_fs_funtion_grid_t

0xf0d3,	// (0x00029fb6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf0db,	// (0x00029fbe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf0e3,	// (0x00029fc6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd47,	// (0x0002ac2a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf0eb,	// (0x00029fce) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf0eb,	// (0x00029fce) cell_fep_china_hwr2_fs_candidate_grid

0xf104,	// (0x00029fe7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf10c,	// (0x00029fef) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcc01,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcc01,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb62,	// (0x0002aa45) cell_fep_china_hwr2_fs_candidate_grid_g

0xf114,	// (0x00029ff7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x91bc,	// (0x0002409f) clock_nsta_pane_cp_24_ParamLimits

0x91bc,	// (0x0002409f) clock_nsta_pane_cp_24

0x9219,	// (0x000240fc) indicator_nsta_pane_cp_24_ParamLimits

0x9219,	// (0x000240fc) indicator_nsta_pane_cp_24

0x9ebd,	// (0x00024da0) heading_pane_g1

0x0001,

0xf8f8,	// (0x0002a7db) heading_pane_g

0x39c3,	// (0x0001e8a6) grid_sct_catagory_button_pane

0xa53d,	// (0x00025420) scroll_pane_cp5_ParamLimits

0xc8ae,	// (0x00027791) button_value_adjust_pane_cp5_ParamLimits

0xc8ae,	// (0x00027791) button_value_adjust_pane_cp5

0xc98b,	// (0x0002786e) form2_midp_time_pane_ParamLimits

0xf122,	// (0x0002a005) cell_sct_catagory_button_pane_ParamLimits

0xf122,	// (0x0002a005) cell_sct_catagory_button_pane

0xcbc6,	// (0x00027aa9) bg_button_pane_cp01_ParamLimits

0xcbc6,	// (0x00027aa9) bg_button_pane_cp01

0xcc01,	// (0x00027ae4) cell_sct_catagory_button_pane_g1

0x2f25,	// (0x0001de08) popup_tb_extension_window

0x437a,	// (0x0001f25d) aid_size_cell_ext_ParamLimits

0x437a,	// (0x0001f25d) aid_size_cell_ext

0x52f2,	// (0x000201d5) bg_tb_trans_pane_cp1_ParamLimits

0x52f2,	// (0x000201d5) bg_tb_trans_pane_cp1

0x43a0,	// (0x0001f283) grid_tb_ext_pane_ParamLimits

0x43a0,	// (0x0001f283) grid_tb_ext_pane

0x43d6,	// (0x0001f2b9) cell_tb_ext_pane_ParamLimits

0x43d6,	// (0x0001f2b9) cell_tb_ext_pane

0x43fa,	// (0x0001f2dd) cell_tb_ext_pane_g1_ParamLimits

0x43fa,	// (0x0001f2dd) cell_tb_ext_pane_g1

0xf134,	// (0x0002a017) cell_tb_ext_pane_t1

0x508b,	// (0x0001ff6e) list_highlight_pane_cp11_ParamLimits

0x508b,	// (0x0001ff6e) list_highlight_pane_cp11

0x7394,	// (0x00022277) popup_uni_indicator_window_ParamLimits

0x7394,	// (0x00022277) popup_uni_indicator_window

0x5b89,	// (0x00020a6c) bg_popup_sub_pane_cp14

0xf14f,	// (0x0002a032) list_uniindi_pane

0xf15b,	// (0x0002a03e) uniindi_top_pane

0x508b,	// (0x0001ff6e) bg_uniindi_top_pane

0xf17a,	// (0x0002a05d) uniindi_top_pane_g1

0xf190,	// (0x0002a073) uniindi_top_pane_g2

0x0003,

0xfd4e,	// (0x0002ac31) uniindi_top_pane_g

0xf1ba,	// (0x0002a09d) uniindi_top_pane_t1

0xf1e4,	// (0x0002a0c7) list_single_uniindi_pane_ParamLimits

0xf1e4,	// (0x0002a0c7) list_single_uniindi_pane

0xcc01,	// (0x00027ae4) bg_uniindi_top_pane_g1

0xf1f6,	// (0x0002a0d9) list_single_uniindi_pane_g1

0xf209,	// (0x0002a0ec) list_single_uniindi_pane_t1

0x7232,	// (0x00022115) control_bg_pane

0xf22e,	// (0x0002a111) bg_sctrl_sk_pane_cp1

0xf237,	// (0x0002a11a) bg_sctrl_sk_pane_cp2

0xf240,	// (0x0002a123) control_bg_pane_g1

0xf249,	// (0x0002a12c) control_bg_pane_g2

0x0001,

0xfd57,	// (0x0002ac3a) control_bg_pane_g

0xb789,	// (0x0002666c) cell_indicator_nsta_pane_g1_ParamLimits

0x3ace,	// (0x0001e9b1) cell_indicator_nsta_pane_g2_ParamLimits

0xfad3,	// (0x0002a9b6) cell_indicator_nsta_pane_g_ParamLimits

0xb836,	// (0x00026719) form2_midp_time_pane_t1_ParamLimits

0xcd54,	// (0x00027c37) main_idle_act4_pane_ParamLimits

0xcd54,	// (0x00027c37) main_idle_act4_pane

0x2f25,	// (0x0001de08) popup_tb_extension_window_ParamLimits

0x43c0,	// (0x0001f2a3) tb_ext_find_pane_ParamLimits

0x43c0,	// (0x0001f2a3) tb_ext_find_pane

0xf252,	// (0x0002a135) ai_gene_pane_1_cp1

0x65d6,	// (0x000214b9) ai_gene_pane_2_cp1

0xf25a,	// (0x0002a13d) list_single_idle_plugin_calendar_pane

0xf263,	// (0x0002a146) list_single_idle_plugin_notification_pane

0xf26c,	// (0x0002a14f) list_single_idle_plugin_player_pane

0x4417,	// (0x0001f2fa) list_single_idle_plugin_shortcut_pane_ParamLimits

0x4417,	// (0x0001f2fa) list_single_idle_plugin_shortcut_pane

0x443f,	// (0x0001f322) main_idle_act4_pane_t1

0x4455,	// (0x0001f338) main_idle_act4_pane_t2

0x0001,

0xfd5c,	// (0x0002ac3f) main_idle_act4_pane_t

0x446b,	// (0x0001f34e) middle_sk_idle_act4_pane_ParamLimits

0x446b,	// (0x0001f34e) middle_sk_idle_act4_pane

0x4487,	// (0x0001f36a) popup_clock_digital_analogue_window_cp2

0x44ad,	// (0x0001f390) shortcut_wheel_idle_act4_pane_ParamLimits

0x44ad,	// (0x0001f390) shortcut_wheel_idle_act4_pane

0xcc01,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g1

0xcc01,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g2

0xcc01,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g3

0xcc01,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g4

0xcc01,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g5

0xf275,	// (0x0002a158) shortcut_wheel_idle_act4_pane_g6

0xf27d,	// (0x0002a160) shortcut_wheel_idle_act4_pane_g7

0xf285,	// (0x0002a168) shortcut_wheel_idle_act4_pane_g8

0xf28d,	// (0x0002a170) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd61,	// (0x0002ac44) shortcut_wheel_idle_act4_pane_g

0xebf6,	// (0x00029ad9) middle_sk_idle_act4_pane_g1_ParamLimits

0xebf6,	// (0x00029ad9) middle_sk_idle_act4_pane_g1

0x4528,	// (0x0001f40b) middle_sk_idle_act4_pane_g2_ParamLimits

0x4528,	// (0x0001f40b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd84,	// (0x0002ac67) middle_sk_idle_act4_pane_g_ParamLimits

0xfd84,	// (0x0002ac67) middle_sk_idle_act4_pane_g

0x4540,	// (0x0001f423) middle_sk_idle_act4_pane_t1_ParamLimits

0x4540,	// (0x0001f423) middle_sk_idle_act4_pane_t1

0x456f,	// (0x0001f452) grid_ai_shortcut_pane_ParamLimits

0x456f,	// (0x0001f452) grid_ai_shortcut_pane

0x458c,	// (0x0001f46f) list_highlight_pane_cp16_ParamLimits

0x458c,	// (0x0001f46f) list_highlight_pane_cp16

0x4599,	// (0x0001f47c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x4599,	// (0x0001f47c) list_single_idle_plugin_shortcut_pane_g1

0x45a5,	// (0x0001f488) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x45a5,	// (0x0001f488) list_single_idle_plugin_shortcut_pane_g2

0x45c1,	// (0x0001f4a4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x45c1,	// (0x0001f4a4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd89,	// (0x0002ac6c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd89,	// (0x0002ac6c) list_single_idle_plugin_shortcut_pane_g

0x45d6,	// (0x0001f4b9) cell_ai_shortcut_pane_ParamLimits

0x45d6,	// (0x0001f4b9) cell_ai_shortcut_pane

0x45ec,	// (0x0001f4cf) cell_ai_shortcut_pane_g1_ParamLimits

0x45ec,	// (0x0001f4cf) cell_ai_shortcut_pane_g1

0xf252,	// (0x0002a135) ai_gene_pane_1_cp2

0xf295,	// (0x0002a178) ai_gene_pane_2_cp2

0xf29d,	// (0x0002a180) list_highlight_pane_cp15

0xf2a6,	// (0x0002a189) list_single_idle_plugin_calendar_pane_g1

0xf29d,	// (0x0002a180) list_highlight_pane_cp17

0xf2ae,	// (0x0002a191) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2b6,	// (0x0002a199) list_single_idle_plugin_player_pane_g1

0xa6f7,	// (0x000255da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd90,	// (0x0002ac73) list_single_idle_plugin_player_pane_g

0xf2be,	// (0x0002a1a1) list_single_idle_plugin_player_pane_t1

0xf2cc,	// (0x0002a1af) list_single_idle_plugin_player_pane_t2

0xf2da,	// (0x0002a1bd) list_single_idle_plugin_player_pane_t3

0xf2e8,	// (0x0002a1cb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd95,	// (0x0002ac78) list_single_idle_plugin_player_pane_t

0xf2f6,	// (0x0002a1d9) wait_bar_pane_cp15

0xf2fe,	// (0x0002a1e1) grid_ai_notification_pane

0xa6f7,	// (0x000255da) list_single_idle_plugin_notification_pane_g1

0x460e,	// (0x0001f4f1) cell_ai_notification_pane_ParamLimits

0x460e,	// (0x0001f4f1) cell_ai_notification_pane

0xf307,	// (0x0002a1ea) cell_ai_notification_pane_g1

0xf30f,	// (0x0002a1f2) cell_ai_notification_pane_t1

0x461b,	// (0x0001f4fe) tb_ext_find_button_pane

0x4623,	// (0x0001f506) tb_ext_find_pane_g1

0x462b,	// (0x0001f50e) tb_ext_find_pane_t1

0x6097,	// (0x00020f7a) tb_ext_find_button_pane_g1

0xf31d,	// (0x0002a200) tb_ext_find_button_pane_g2

0x0001,

0xfd9e,	// (0x0002ac81) tb_ext_find_button_pane_g

0x443f,	// (0x0001f322) main_idle_act4_pane_t1_ParamLimits

0x4455,	// (0x0001f338) main_idle_act4_pane_t2_ParamLimits

0xfd5c,	// (0x0002ac3f) main_idle_act4_pane_t_ParamLimits

0x4487,	// (0x0001f36a) popup_clock_digital_analogue_window_cp2_ParamLimits

0x449d,	// (0x0001f380) sat_plugin_idle_act4_pane_ParamLimits

0x449d,	// (0x0001f380) sat_plugin_idle_act4_pane

0x4639,	// (0x0001f51c) sat_plugin_idle_act4_pane_t1_ParamLimits

0x4639,	// (0x0001f51c) sat_plugin_idle_act4_pane_t1

0x4651,	// (0x0001f534) sat_plugin_idle_act4_pane_t2_ParamLimits

0x4651,	// (0x0001f534) sat_plugin_idle_act4_pane_t2

0x4669,	// (0x0001f54c) sat_plugin_idle_act4_pane_t3_ParamLimits

0x4669,	// (0x0001f54c) sat_plugin_idle_act4_pane_t3

0x4681,	// (0x0001f564) sat_plugin_idle_act4_pane_t4_ParamLimits

0x4681,	// (0x0001f564) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda3,	// (0x0002ac86) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda3,	// (0x0002ac86) sat_plugin_idle_act4_pane_t

0x72f5,	// (0x000221d8) popup_battery_window_ParamLimits

0x72f5,	// (0x000221d8) popup_battery_window

0x508b,	// (0x0001ff6e) bg_popup_sub_pane_cp25_ParamLimits

0x508b,	// (0x0001ff6e) bg_popup_sub_pane_cp25

0xf326,	// (0x0002a209) popup_battery_window_g1_ParamLimits

0xf326,	// (0x0002a209) popup_battery_window_g1

0xf332,	// (0x0002a215) popup_battery_window_t1_ParamLimits

0xf332,	// (0x0002a215) popup_battery_window_t1

0xf344,	// (0x0002a227) popup_battery_window_t2_ParamLimits

0xf344,	// (0x0002a227) popup_battery_window_t2

0x0001,

0xfdac,	// (0x0002ac8f) popup_battery_window_t_ParamLimits

0xfdac,	// (0x0002ac8f) popup_battery_window_t

0x2842,	// (0x0001d725) midp_canvas_pane_ParamLimits

0x2897,	// (0x0001d77a) midp_keypad_pane_ParamLimits

0x2897,	// (0x0001d77a) midp_keypad_pane

0x9099,	// (0x00023f7c) main_midp_pane_ParamLimits

0xb7ce,	// (0x000266b1) signal_pane_g2_cp_ParamLimits

0x4699,	// (0x0001f57c) aid_size_cell_midp_keypad_ParamLimits

0x4699,	// (0x0001f57c) aid_size_cell_midp_keypad

0x46b7,	// (0x0001f59a) midp_keyp_game_grid_pane_ParamLimits

0x46b7,	// (0x0001f59a) midp_keyp_game_grid_pane

0x46d6,	// (0x0001f5b9) midp_keyp_rocker_pane_ParamLimits

0x46d6,	// (0x0001f5b9) midp_keyp_rocker_pane

0x4717,	// (0x0001f5fa) midp_keyp_sk_left_pane_ParamLimits

0x4717,	// (0x0001f5fa) midp_keyp_sk_left_pane

0x4769,	// (0x0001f64c) midp_keyp_sk_right_pane_ParamLimits

0x4769,	// (0x0001f64c) midp_keyp_sk_right_pane

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp03

0x47b5,	// (0x0001f698) midp_keyp_sk_left_pane_g1

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp04

0x47b5,	// (0x0001f698) midp_keyp_sk_right_pane_g1

0xcc01,	// (0x00027ae4) midp_keyp_rocker_pane_g1

0x47be,	// (0x0001f6a1) keyp_game_cell_pane_ParamLimits

0x47be,	// (0x0001f6a1) keyp_game_cell_pane

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp02

0x47e0,	// (0x0001f6c3) keyp_game_cell_pane_g1

0xe0ad,	// (0x00028f90) popup_fep_vkb2_window_ParamLimits

0xe0ad,	// (0x00028f90) popup_fep_vkb2_window

0xec04,	// (0x00029ae7) aid_size_cell_vkb2_ParamLimits

0xec04,	// (0x00029ae7) aid_size_cell_vkb2

0xec3a,	// (0x00029b1d) popup_fep_vkb2_window_g1_ParamLimits

0xec3a,	// (0x00029b1d) popup_fep_vkb2_window_g1

0xec8a,	// (0x00029b6d) vkb2_area_bottom_pane_ParamLimits

0xec8a,	// (0x00029b6d) vkb2_area_bottom_pane

0xecc8,	// (0x00029bab) vkb2_area_keypad_pane_ParamLimits

0xecc8,	// (0x00029bab) vkb2_area_keypad_pane

0xed06,	// (0x00029be9) vkb2_area_top_pane_ParamLimits

0xed06,	// (0x00029be9) vkb2_area_top_pane

0xed82,	// (0x00029c65) vkb2_top_entry_pane_ParamLimits

0xed82,	// (0x00029c65) vkb2_top_entry_pane

0xedaf,	// (0x00029c92) vkb2_top_grid_left_pane_ParamLimits

0xedaf,	// (0x00029c92) vkb2_top_grid_left_pane

0xedcf,	// (0x00029cb2) vkb2_top_grid_right_pane_ParamLimits

0xedcf,	// (0x00029cb2) vkb2_top_grid_right_pane

0x8b48,	// (0x00023a2b) vkb2_cell_keypad_pane_ParamLimits

0x8b48,	// (0x00023a2b) vkb2_cell_keypad_pane

0xee15,	// (0x00029cf8) vkb2_area_bottom_grid_pane_ParamLimits

0xee15,	// (0x00029cf8) vkb2_area_bottom_grid_pane

0xee3b,	// (0x00029d1e) vkb2_area_bottom_pane_g1_ParamLimits

0xee3b,	// (0x00029d1e) vkb2_area_bottom_pane_g1

0xee61,	// (0x00029d44) vkb2_area_bottom_pane_g2_ParamLimits

0xee61,	// (0x00029d44) vkb2_area_bottom_pane_g2

0xee92,	// (0x00029d75) vkb2_area_bottom_pane_g3_ParamLimits

0xee92,	// (0x00029d75) vkb2_area_bottom_pane_g3

0x0002,

0xfdb1,	// (0x0002ac94) vkb2_area_bottom_pane_g_ParamLimits

0xfdb1,	// (0x0002ac94) vkb2_area_bottom_pane_g

0x8cc0,	// (0x00023ba3) vkb2_top_cell_left_pane_ParamLimits

0x8cc0,	// (0x00023ba3) vkb2_top_cell_left_pane

0x4acd,	// (0x0001f9b0) vkb2_top_entry_pane_g1_ParamLimits

0x4acd,	// (0x0001f9b0) vkb2_top_entry_pane_g1

0x4adb,	// (0x0001f9be) vkb2_top_entry_pane_t1_ParamLimits

0x4adb,	// (0x0001f9be) vkb2_top_entry_pane_t1

0xf369,	// (0x0002a24c) vkb2_top_entry_pane_t2_ParamLimits

0xf369,	// (0x0002a24c) vkb2_top_entry_pane_t2

0xf39b,	// (0x0002a27e) vkb2_top_entry_pane_t3_ParamLimits

0xf39b,	// (0x0002a27e) vkb2_top_entry_pane_t3

0x0002,

0xfdb8,	// (0x0002ac9b) vkb2_top_entry_pane_t_ParamLimits

0xfdb8,	// (0x0002ac9b) vkb2_top_entry_pane_t

0xeee8,	// (0x00029dcb) vkb2_top_grid_right_pane_g1_ParamLimits

0xeee8,	// (0x00029dcb) vkb2_top_grid_right_pane_g1

0x8d23,	// (0x00023c06) vkb2_top_grid_right_pane_g2_ParamLimits

0x8d23,	// (0x00023c06) vkb2_top_grid_right_pane_g2

0x8d3b,	// (0x00023c1e) vkb2_top_grid_right_pane_g3_ParamLimits

0x8d3b,	// (0x00023c1e) vkb2_top_grid_right_pane_g3

0xeefe,	// (0x00029de1) vkb2_top_grid_right_pane_g4_ParamLimits

0xeefe,	// (0x00029de1) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbf,	// (0x0002aca2) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbf,	// (0x0002aca2) vkb2_top_grid_right_pane_g

0x8d69,	// (0x00023c4c) vkb2_top_cell_left_pane_g1

0x8d80,	// (0x00023c63) vkb2_cell_keypad_pane_g1_ParamLimits

0x8d80,	// (0x00023c63) vkb2_cell_keypad_pane_g1

0xf3b1,	// (0x0002a294) vkb2_cell_keypad_pane_t1_ParamLimits

0xf3b1,	// (0x0002a294) vkb2_cell_keypad_pane_t1

0x8d8e,	// (0x00023c71) vkb2_cell_bottom_grid_pane_ParamLimits

0x8d8e,	// (0x00023c71) vkb2_cell_bottom_grid_pane

0x8dc7,	// (0x00023caa) vkb2_cell_bottom_grid_pane_g1

0x44cc,	// (0x0001f3af) aid_call2_pane_cp02

0x44d4,	// (0x0001f3b7) aid_call_pane_cp02

0x44dc,	// (0x0001f3bf) clock_digital_number_pane_cp10

0x44e4,	// (0x0001f3c7) clock_digital_number_pane_cp11

0x44ec,	// (0x0001f3cf) clock_digital_number_pane_cp12

0x44f4,	// (0x0001f3d7) clock_digital_number_pane_cp13

0x44fc,	// (0x0001f3df) clock_digital_separator_pane_cp10

0x6097,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g1

0x6097,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g2

0x4504,	// (0x0001f3e7) popup_clock_digital_analogue_window_cp2_g3

0x6097,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g4

0x4504,	// (0x0001f3e7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd74,	// (0x0002ac57) popup_clock_digital_analogue_window_cp2_g

0x450c,	// (0x0001f3ef) popup_clock_digital_analogue_window_cp2_t1

0x451a,	// (0x0001f3fd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7f,	// (0x0002ac62) popup_clock_digital_analogue_window_cp2_t

0xcc01,	// (0x00027ae4) clock_digital_number_pane_cp10_g1

0xcc01,	// (0x00027ae4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002aa45) clock_digital_number_pane_cp10_g

0xcc01,	// (0x00027ae4) clock_digital_separator_pane_cp10_g1

0xcc01,	// (0x00027ae4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002aa45) clock_digital_separator_pane_cp10_g

0xf19c,	// (0x0002a07f) uniindi_top_pane_g3

0xf1ad,	// (0x0002a090) uniindi_top_pane_g4

0x8bb3,	// (0x00023a96) vkb2_row_keypad_pane_ParamLimits

0x8bb3,	// (0x00023a96) vkb2_row_keypad_pane

0x8de3,	// (0x00023cc6) vkb2_cell_t_keypad_pane_ParamLimits

0x8de3,	// (0x00023cc6) vkb2_cell_t_keypad_pane

0x8df0,	// (0x00023cd3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8df0,	// (0x00023cd3) vkb2_cell_t_keypad_pane_cp08

0x8e00,	// (0x00023ce3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e00,	// (0x00023ce3) vkb2_cell_t_keypad_pane_cp09

0x8e11,	// (0x00023cf4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8e11,	// (0x00023cf4) vkb2_cell_t_keypad_pane_cp01

0x8e21,	// (0x00023d04) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8e21,	// (0x00023d04) vkb2_cell_t_keypad_pane_cp02

0x8e31,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8e31,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp03

0x8e41,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8e41,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp04

0x8e51,	// (0x00023d34) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8e51,	// (0x00023d34) vkb2_cell_t_keypad_pane_cp05

0x8e61,	// (0x00023d44) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8e61,	// (0x00023d44) vkb2_cell_t_keypad_pane_cp06

0x8e71,	// (0x00023d54) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8e71,	// (0x00023d54) vkb2_cell_t_keypad_pane_cp07

0x8e81,	// (0x00023d64) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8e81,	// (0x00023d64) vkb2_cell_t_keypad_pane_cp10

0x86a1,	// (0x00023584) vkb2_cell_t_keypad_pane_g1

0xf3c8,	// (0x0002a2ab) vkb2_cell_t_keypad_pane_t1

0x7232,	// (0x00022115) popup_grid_graphic2_window

0x4b40,	// (0x0001fa23) aid_size_cell_graphic2_ParamLimits

0x4b40,	// (0x0001fa23) aid_size_cell_graphic2

0x98bd,	// (0x000247a0) bg_popup_window_pane_cp21_ParamLimits

0x98bd,	// (0x000247a0) bg_popup_window_pane_cp21

0x4b72,	// (0x0001fa55) graphic2_pages_pane_ParamLimits

0x4b72,	// (0x0001fa55) graphic2_pages_pane

0x4bbb,	// (0x0001fa9e) grid_graphic2_control_pane_ParamLimits

0x4bbb,	// (0x0001fa9e) grid_graphic2_control_pane

0x4be9,	// (0x0001facc) grid_graphic2_pane_ParamLimits

0x4be9,	// (0x0001facc) grid_graphic2_pane

0x4c48,	// (0x0001fb2b) cell_graphic2_pane

0x4e3c,	// (0x0001fd1f) main_comp_mode_pane

0xea1e,	// (0x00029901) list_ai3_gene_pane_ParamLimits

0x41b8,	// (0x0001f09b) bg_popup_window_pane_cp19_ParamLimits

0xef88,	// (0x00029e6b) bg_touch_area_indi_pane_ParamLimits

0xef88,	// (0x00029e6b) bg_touch_area_indi_pane

0xef9e,	// (0x00029e81) bg_touch_area_indi_pane_cp01_ParamLimits

0xef9e,	// (0x00029e81) bg_touch_area_indi_pane_cp01

0xefb4,	// (0x00029e97) bg_touch_area_indi_pane_cp02_ParamLimits

0xefb4,	// (0x00029e97) bg_touch_area_indi_pane_cp02

0xefca,	// (0x00029ead) bg_touch_area_indi_pane_cp03_ParamLimits

0xefca,	// (0x00029ead) bg_touch_area_indi_pane_cp03

0xefe0,	// (0x00029ec3) popup_slider_window_g1_ParamLimits

0xeffc,	// (0x00029edf) popup_slider_window_g2_ParamLimits

0xf018,	// (0x00029efb) popup_slider_window_g3_ParamLimits

0xfd09,	// (0x0002abec) popup_slider_window_g_ParamLimits

0xf034,	// (0x00029f17) popup_slider_window_t1_ParamLimits

0xf078,	// (0x00029f5b) small_volume_slider_vertical_pane_ParamLimits

0x4c48,	// (0x0001fb2b) cell_graphic2_pane_ParamLimits

0x4c91,	// (0x0001fb74) bg_button_pane_cp10_ParamLimits

0x4c91,	// (0x0001fb74) bg_button_pane_cp10

0x4ca2,	// (0x0001fb85) bg_button_pane_cp11_ParamLimits

0x4ca2,	// (0x0001fb85) bg_button_pane_cp11

0x4cb3,	// (0x0001fb96) graphic2_pages_pane_g1_ParamLimits

0x4cb3,	// (0x0001fb96) graphic2_pages_pane_g1

0x4cce,	// (0x0001fbb1) graphic2_pages_pane_g2_ParamLimits

0x4cce,	// (0x0001fbb1) graphic2_pages_pane_g2

0x0001,

0xfdcd,	// (0x0002acb0) graphic2_pages_pane_g_ParamLimits

0xfdcd,	// (0x0002acb0) graphic2_pages_pane_g

0x4ce6,	// (0x0001fbc9) graphic2_pages_pane_t1_ParamLimits

0x4ce6,	// (0x0001fbc9) graphic2_pages_pane_t1

0x4cfe,	// (0x0001fbe1) cell_graphic2_control_pane_ParamLimits

0x4cfe,	// (0x0001fbe1) cell_graphic2_control_pane

0x4d18,	// (0x0001fbfb) cell_graphic2_pane_g1_ParamLimits

0x4d18,	// (0x0001fbfb) cell_graphic2_pane_g1

0xef14,	// (0x00029df7) cell_graphic2_pane_g2_ParamLimits

0xef14,	// (0x00029df7) cell_graphic2_pane_g2

0x4d25,	// (0x0001fc08) cell_graphic2_pane_g3_ParamLimits

0x4d25,	// (0x0001fc08) cell_graphic2_pane_g3

0xef21,	// (0x00029e04) cell_graphic2_pane_g4_ParamLimits

0xef21,	// (0x00029e04) cell_graphic2_pane_g4

0x4d32,	// (0x0001fc15) cell_graphic2_pane_g5_ParamLimits

0x4d32,	// (0x0001fc15) cell_graphic2_pane_g5

0x0004,

0xfdd2,	// (0x0002acb5) cell_graphic2_pane_g_ParamLimits

0xfdd2,	// (0x0002acb5) cell_graphic2_pane_g

0x4d52,	// (0x0001fc35) cell_graphic2_pane_t1_ParamLimits

0x4d52,	// (0x0001fc35) cell_graphic2_pane_t1

0x9eb1,	// (0x00024d94) grid_highlight_pane_cp11_ParamLimits

0x9eb1,	// (0x00024d94) grid_highlight_pane_cp11

0x5b89,	// (0x00020a6c) bg_button_pane_cp05

0x4d69,	// (0x0001fc4c) cell_graphic2_control_pane_g1

0xcc01,	// (0x00027ae4) bg_touch_area_indi_pane_g1

0xf3da,	// (0x0002a2bd) aid_cmod_rocker_key_size

0xf3e4,	// (0x0002a2c7) aid_cmode_itu_key_size

0xf3ee,	// (0x0002a2d1) main_cmode_video_pane

0xf3f6,	// (0x0002a2d9) main_comp_mode_itu_pane

0xf400,	// (0x0002a2e3) main_comp_mode_rocker_pane

0xf408,	// (0x0002a2eb) cell_cmode_rocker_pane_ParamLimits

0xf408,	// (0x0002a2eb) cell_cmode_rocker_pane

0xf41a,	// (0x0002a2fd) cell_cmode_itu_pane_ParamLimits

0xf41a,	// (0x0002a2fd) cell_cmode_itu_pane

0x5b89,	// (0x00020a6c) bg_button_pane_cp06_ParamLimits

0x5b89,	// (0x00020a6c) bg_button_pane_cp06

0xce49,	// (0x00027d2c) cell_cmode_rocker_pane_g1_ParamLimits

0xce49,	// (0x00027d2c) cell_cmode_rocker_pane_g1

0xf0af,	// (0x00029f92) cell_cmode_rocker_pane_g2_ParamLimits

0xf0af,	// (0x00029f92) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x0002acc0) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x0002acc0) cell_cmode_rocker_pane_g

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp07

0xf42f,	// (0x0002a312) cell_cmode_itu_pane_g1

0xf438,	// (0x0002a31b) cell_cmode_itu_pane_t1

0xf446,	// (0x0002a329) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x0002acc5) cell_cmode_itu_pane_t

0xf21e,	// (0x0002a101) aid_touch_ctrl_left

0xf226,	// (0x0002a109) aid_touch_ctrl_right

0x4e3c,	// (0x0001fd1f) compa_mode_pane

0x4d76,	// (0x0001fc59) aid_cmod_rocker_key_size_cp

0x4d80,	// (0x0001fc63) aid_cmode_itu_key_size_cp

0xf454,	// (0x0002a337) compa_mode_pane_g1

0xf45c,	// (0x0002a33f) compa_mode_pane_g2

0xf464,	// (0x0002a347) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x0002acca) compa_mode_pane_g

0x4d8a,	// (0x0001fc6d) main_comp_mode_itu_pane_cp

0x4d94,	// (0x0001fc77) main_comp_mode_rocker_pane_cp

0x4d9e,	// (0x0001fc81) cell_cmode_itu_pane_cp_ParamLimits

0x4d9e,	// (0x0001fc81) cell_cmode_itu_pane_cp

0x4db3,	// (0x0001fc96) cell_cmode_rocker_pane_cp_ParamLimits

0x4db3,	// (0x0001fc96) cell_cmode_rocker_pane_cp

0x5b89,	// (0x00020a6c) bg_button_pane_cp06_cp_ParamLimits

0x5b89,	// (0x00020a6c) bg_button_pane_cp06_cp

0xce49,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xce49,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp

0xcc01,	// (0x00027ae4) cell_cmode_rocker_pane_g2_cp

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp07_cp

0x4dc5,	// (0x0001fca8) cell_cmode_itu_pane_g1_cp

0x4dce,	// (0x0001fcb1) cell_cmode_itu_pane_t1_cp

0x4ddc,	// (0x0001fcbf) cell_cmode_itu_pane_t2_cp

0x38c9,	// (0x0001e7ac) settings_code_pane_cp2

0x4f2c,	// (0x0001fe0f) bg_popup_window_pane_cp3_ParamLimits

0x5263,	// (0x00020146) heading_pane_cp3_ParamLimits

0x526f,	// (0x00020152) listscroll_popup_graphic_pane_ParamLimits

0x845c,	// (0x0002333f) fep_hwr_aid_pane_ParamLimits

0x88bc,	// (0x0002379f) aid_touch_sctrl_top_ParamLimits

0x88d7,	// (0x000237ba) sctrl_sk_top_pane_g1_ParamLimits

0x86a1,	// (0x00023584) sctrl_sk_top_pane_g2_ParamLimits

0xfd22,	// (0x0002ac05) sctrl_sk_top_pane_g_ParamLimits

0x88e4,	// (0x000237c7) sctrl_sk_top_pane_t1_ParamLimits

0x88bc,	// (0x0002379f) aid_touch_sctrl_bottom_ParamLimits

0x88e4,	// (0x000237c7) sctrl_sk_bottom_pane_t1_ParamLimits

0xf168,	// (0x0002a04b) aid_area_touch_clock

0xed44,	// (0x00029c27) aid_vkb2_area_top_pane_cell_ParamLimits

0xed44,	// (0x00029c27) aid_vkb2_area_top_pane_cell

0xedef,	// (0x00029cd2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xedef,	// (0x00029cd2) aid_vkb2_area_bottom_pane_cell

0xf361,	// (0x0002a244) popup_char_count_window

0xf46c,	// (0x0002a34f) popup_char_count_window_g1

0xf475,	// (0x0002a358) popup_char_count_window_g2

0xf47e,	// (0x0002a361) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x0002acd1) popup_char_count_window_g

0xf487,	// (0x0002a36a) popup_char_count_window_t1

0x8998,	// (0x0002387b) popup_fep_char_preview_window_ParamLimits

0x8998,	// (0x0002387b) popup_fep_char_preview_window

0xed64,	// (0x00029c47) vkb2_top_candi_pane_ParamLimits

0xed64,	// (0x00029c47) vkb2_top_candi_pane

0x4dea,	// (0x0001fccd) cell_vkb2_top_candi_pane_ParamLimits

0x4dea,	// (0x0001fccd) cell_vkb2_top_candi_pane

0x8e96,	// (0x00023d79) bg_popup_fep_char_preview_window_ParamLimits

0x8e96,	// (0x00023d79) bg_popup_fep_char_preview_window

0x8ea4,	// (0x00023d87) popup_fep_char_preview_window_t1_ParamLimits

0x8ea4,	// (0x00023d87) popup_fep_char_preview_window_t1

0xf4b6,	// (0x0002a399) bg_popup_fep_char_preview_window_g1

0xf4be,	// (0x0002a3a1) bg_popup_fep_char_preview_window_g2

0xf4c6,	// (0x0002a3a9) bg_popup_fep_char_preview_window_g3

0xf4ce,	// (0x0002a3b1) bg_popup_fep_char_preview_window_g4

0xf4d6,	// (0x0002a3b9) bg_popup_fep_char_preview_window_g5

0x8ede,	// (0x00023dc1) bg_popup_fep_char_preview_window_g6

0xf4de,	// (0x0002a3c1) bg_popup_fep_char_preview_window_g7

0xf4e6,	// (0x0002a3c9) bg_popup_fep_char_preview_window_g8

0xf4ee,	// (0x0002a3d1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x0002acd8) bg_popup_fep_char_preview_window_g

0x86a1,	// (0x00023584) cell_vkb2_top_candi_pane_g1_ParamLimits

0x86a1,	// (0x00023584) cell_vkb2_top_candi_pane_g1

0x86af,	// (0x00023592) cell_vkb2_top_candi_pane_g2_ParamLimits

0x86af,	// (0x00023592) cell_vkb2_top_candi_pane_g2

0xf495,	// (0x0002a378) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf495,	// (0x0002a378) cell_vkb2_top_candi_pane_g3

0x8ee6,	// (0x00023dc9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8ee6,	// (0x00023dc9) cell_vkb2_top_candi_pane_g4

0xd18c,	// (0x0002806f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd18c,	// (0x0002806f) cell_vkb2_top_candi_pane_g5

0x8f07,	// (0x00023dea) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f07,	// (0x00023dea) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x0002aceb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x0002aceb) cell_vkb2_top_candi_pane_g

0x8f15,	// (0x00023df8) cell_vkb2_top_candi_pane_t1

0x8274,	// (0x00023157) aid_size_touch_slider_mark_ParamLimits

0x8274,	// (0x00023157) aid_size_touch_slider_mark

0x4ba6,	// (0x0001fa89) grid_graphic2_catg_pane_ParamLimits

0x4ba6,	// (0x0001fa89) grid_graphic2_catg_pane

0x4c1d,	// (0x0001fb00) popup_grid_graphic2_window_t1_ParamLimits

0x4c1d,	// (0x0001fb00) popup_grid_graphic2_window_t1

0x4c32,	// (0x0001fb15) popup_grid_graphic2_window_t2_ParamLimits

0x4c32,	// (0x0001fb15) popup_grid_graphic2_window_t2

0x0001,

0xfdc8,	// (0x0002acab) popup_grid_graphic2_window_t_ParamLimits

0xfdc8,	// (0x0002acab) popup_grid_graphic2_window_t

0x5b89,	// (0x00020a6c) bg_button_pane_cp05_ParamLimits

0x4d69,	// (0x0001fc4c) cell_graphic2_control_pane_g1_ParamLimits

0xf1e4,	// (0x0002a0c7) cell_graphic2_catg_pane_ParamLimits

0xf1e4,	// (0x0002a0c7) cell_graphic2_catg_pane

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp12

0x5490,	// (0x00020373) cell_graphic2_catg_pane_g1

0xf134,	// (0x0002a017) cell_tb_ext_pane_t1_ParamLimits

0x8ce0,	// (0x00023bc3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ce0,	// (0x00023bc3) vkb2_top_cell_right_narrow_pane

0x8cf8,	// (0x00023bdb) vkb2_top_cell_right_wide_pane_ParamLimits

0x8cf8,	// (0x00023bdb) vkb2_top_cell_right_wide_pane

0x844e,	// (0x00023331) bg_vkb2_func_pane_ParamLimits

0x844e,	// (0x00023331) bg_vkb2_func_pane

0x8d69,	// (0x00023c4c) vkb2_top_cell_left_pane_g1_ParamLimits

0x844e,	// (0x00023331) bg_vkb2_fuc_pane_cp03_ParamLimits

0x844e,	// (0x00023331) bg_vkb2_fuc_pane_cp03

0x8dc7,	// (0x00023caa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x935f,	// (0x00024242) bg_vkb2_func_pane_g1

0x9367,	// (0x0002424a) bg_vkb2_func_pane_g2

0x9377,	// (0x0002425a) bg_vkb2_func_pane_g3

0x936f,	// (0x00024252) bg_vkb2_func_pane_g4

0x937f,	// (0x00024262) bg_vkb2_func_pane_g5

0x9387,	// (0x0002426a) bg_vkb2_func_pane_g6

0x938f,	// (0x00024272) bg_vkb2_func_pane_g7

0x9397,	// (0x0002427a) bg_vkb2_func_pane_g8

0x9357,	// (0x0002423a) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x0002acf8) bg_vkb2_func_pane_g

0x844e,	// (0x00023331) bg_vkb2_fuc_pane_cp01_ParamLimits

0x844e,	// (0x00023331) bg_vkb2_fuc_pane_cp01

0x8d69,	// (0x00023c4c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8d69,	// (0x00023c4c) vkb2_top_cell_right_wide_pane_g1

0x844e,	// (0x00023331) bg_vkb2_fuc_pane_cp02_ParamLimits

0x844e,	// (0x00023331) bg_vkb2_fuc_pane_cp02

0x8dc7,	// (0x00023caa) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8dc7,	// (0x00023caa) vkb2_top_cell_right_narrow_pane_g1

0x4106,	// (0x0001efe9) aid_touch_area_decrease_ParamLimits

0x4106,	// (0x0001efe9) aid_touch_area_decrease

0x4134,	// (0x0001f017) aid_touch_area_increase_ParamLimits

0x4134,	// (0x0001f017) aid_touch_area_increase

0x415c,	// (0x0001f03f) aid_touch_area_mute_ParamLimits

0x415c,	// (0x0001f03f) aid_touch_area_mute

0x4184,	// (0x0001f067) aid_touch_area_slider_ParamLimits

0x4184,	// (0x0001f067) aid_touch_area_slider

0x41c4,	// (0x0001f0a7) popup_slider_window_g4_ParamLimits

0x41c4,	// (0x0001f0a7) popup_slider_window_g4

0x41ec,	// (0x0001f0cf) popup_slider_window_g5_ParamLimits

0x41ec,	// (0x0001f0cf) popup_slider_window_g5

0x4220,	// (0x0001f103) popup_slider_window_g6_ParamLimits

0x4220,	// (0x0001f103) popup_slider_window_g6

0xf060,	// (0x00029f43) popup_slider_window_t2_ParamLimits

0xf060,	// (0x00029f43) popup_slider_window_t2

0x0001,

0xfd16,	// (0x0002abf9) popup_slider_window_t_ParamLimits

0xfd16,	// (0x0002abf9) popup_slider_window_t

0x423c,	// (0x0001f11f) slider_pane_ParamLimits

0x423c,	// (0x0001f11f) slider_pane

0xf4f6,	// (0x0002a3d9) slider_pane_g1_ParamLimits

0xf4f6,	// (0x0002a3d9) slider_pane_g1

0xf50a,	// (0x0002a3ed) slider_pane_g2_ParamLimits

0xf50a,	// (0x0002a3ed) slider_pane_g2

0xf520,	// (0x0002a403) slider_pane_g3_ParamLimits

0xf520,	// (0x0002a403) slider_pane_g3

0x0003,

0xfe28,	// (0x0002ad0b) slider_pane_g_ParamLimits

0xfe28,	// (0x0002ad0b) slider_pane_g

0x2f61,	// (0x0001de44) popup_tb_float_extension_window_ParamLimits

0x2f61,	// (0x0001de44) popup_tb_float_extension_window

0xf54c,	// (0x0002a42f) aid_size_cell_tb_float_ext

0x4e3c,	// (0x0001fd1f) bg_popup_sub_window_cp28

0xf557,	// (0x0002a43a) grid_tb_float_ext_pane

0xf55f,	// (0x0002a442) cell_tb_float_ext_pane_ParamLimits

0xf55f,	// (0x0002a442) cell_tb_float_ext_pane

0xf577,	// (0x0002a45a) cell_tb_float_ext_pane_g1

0xf580,	// (0x0002a463) grid_highlight_pane_cp12

0xe4cb,	// (0x000293ae) cell_last_hwr_side_pane_ParamLimits

0xe4cb,	// (0x000293ae) cell_last_hwr_side_pane

0xcc01,	// (0x00027ae4) cell_last_hwr_side_pane_g1

0xf589,	// (0x0002a46c) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x0002ad14) cell_last_hwr_side_pane_g

0xeec3,	// (0x00029da6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xeec3,	// (0x00029da6) vkb2_area_bottom_space_btn_pane

0x86a1,	// (0x00023584) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf3c8,	// (0x0002a2ab) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f15,	// (0x00023df8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8f2b,	// (0x00023e0e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8f2b,	// (0x00023e0e) vkb2_area_bottom_space_btn_pane_g1

0x8f61,	// (0x00023e44) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8f61,	// (0x00023e44) vkb2_area_bottom_space_btn_pane_g2

0x8f97,	// (0x00023e7a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8f97,	// (0x00023e7a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x0002ad19) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x0002ad19) vkb2_area_bottom_space_btn_pane_g

0x850b,	// (0x000233ee) cel_fep_hwr_func_pane_ParamLimits

0x850b,	// (0x000233ee) cel_fep_hwr_func_pane

0xe4a0,	// (0x00029383) cell_hwr_side_button_pane_ParamLimits

0xe4a0,	// (0x00029383) cell_hwr_side_button_pane

0xf168,	// (0x0002a04b) aid_area_touch_clock_ParamLimits

0x508b,	// (0x0001ff6e) bg_uniindi_top_pane_ParamLimits

0xf17a,	// (0x0002a05d) uniindi_top_pane_g1_ParamLimits

0xf190,	// (0x0002a073) uniindi_top_pane_g2_ParamLimits

0xf19c,	// (0x0002a07f) uniindi_top_pane_g3_ParamLimits

0xf1ad,	// (0x0002a090) uniindi_top_pane_g4_ParamLimits

0xfd4e,	// (0x0002ac31) uniindi_top_pane_g_ParamLimits

0xf1ba,	// (0x0002a09d) uniindi_top_pane_t1_ParamLimits

0x508b,	// (0x0001ff6e) bg_vkb2_func_pane_cp01_ParamLimits

0x508b,	// (0x0001ff6e) bg_vkb2_func_pane_cp01

0x0072,	// (0x0001af55) cel_fep_hwr_func_pane_g1_ParamLimits

0x0072,	// (0x0001af55) cel_fep_hwr_func_pane_g1

0x508b,	// (0x0001ff6e) bg_vkb2_func_pane_cp02_ParamLimits

0x508b,	// (0x0001ff6e) bg_vkb2_func_pane_cp02

0x0072,	// (0x0001af55) cell_hwr_side_button_pane_g1_ParamLimits

0x0072,	// (0x0001af55) cell_hwr_side_button_pane_g1

0x927b,	// (0x0002415e) status_pane_g4_ParamLimits

0x927b,	// (0x0002415e) status_pane_g4

0x9293,	// (0x00024176) status_pane_t1

0xc9f3,	// (0x000278d6) form2_midp_gauge_slider_cont_pane

0xc9fb,	// (0x000278de) form2_midp_gauge_slider_pane_t1_ParamLimits

0x3b9b,	// (0x0001ea7e) form2_midp_gauge_slider_pane_t2_ParamLimits

0x3bad,	// (0x0001ea90) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb15,	// (0x0002a9f8) form2_midp_gauge_slider_pane_t_ParamLimits

0xca31,	// (0x00027914) form2_midp_slider_pane_ParamLimits

0x8958,	// (0x0002383b) aid_size_cell_func_vkb2_ParamLimits

0x8958,	// (0x0002383b) aid_size_cell_func_vkb2

0xf538,	// (0x0002a41b) slider_pane_g4_ParamLimits

0xf538,	// (0x0002a41b) slider_pane_g4

0xef2e,	// (0x00029e11) form2_midp_gauge_slider_pane_t2_cp01

0xef3c,	// (0x00029e1f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef3c,	// (0x00029e1f) form2_midp_gauge_slider_pane_t3_cp01

0x9008,	// (0x00023eeb) form2_midp_slider_pane_cp01

0x4e3c,	// (0x0001fd1f) navi_smil_pane

0x00df,	// (0x0001afc2) navi_smil_pane_g1

0x00e7,	// (0x0001afca) navi_smil_pane_t1

0x00b4,	// (0x0001af97) form2_midp_slider_pane_g1

0x00bd,	// (0x0001afa0) form2_midp_slider_pane_g2

0x00c5,	// (0x0001afa8) form2_midp_slider_pane_g3

0x00b4,	// (0x0001af97) form2_midp_slider_pane_g4

0x54c4,	// (0x000203a7) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x0002ad22) form2_midp_slider_pane_g

0x8fcd,	// (0x00023eb0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8fcd,	// (0x00023eb0) vkb2_area_bottom_space_btn_pane_g4

0x3103,	// (0x0001dfe6) lc0_navi_pane_ParamLimits

0x3103,	// (0x0001dfe6) lc0_navi_pane

0x316d,	// (0x0001e050) lc0_stat_indi_pane_ParamLimits

0x316d,	// (0x0001e050) lc0_stat_indi_pane

0x3182,	// (0x0001e065) ls0_title_pane_ParamLimits

0x3182,	// (0x0001e065) ls0_title_pane

0x5b89,	// (0x00020a6c) bg_popup_sub_pane_cp14_ParamLimits

0xf14f,	// (0x0002a032) list_uniindi_pane_ParamLimits

0xf15b,	// (0x0002a03e) uniindi_top_pane_ParamLimits

0xf1f6,	// (0x0002a0d9) list_single_uniindi_pane_g1_ParamLimits

0xf209,	// (0x0002a0ec) list_single_uniindi_pane_t1_ParamLimits

0xef59,	// (0x00029e3c) lc0_stat_clock_pane_ParamLimits

0xef59,	// (0x00029e3c) lc0_stat_clock_pane

0x54e7,	// (0x000203ca) lc0_stat_indi_pane_g1_ParamLimits

0x54e7,	// (0x000203ca) lc0_stat_indi_pane_g1

0x54da,	// (0x000203bd) lc0_stat_indi_pane_g2_ParamLimits

0x54da,	// (0x000203bd) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x0002ad2d) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x0002ad2d) lc0_stat_indi_pane_g

0xef66,	// (0x00029e49) lc0_uni_indicator_pane_ParamLimits

0xef66,	// (0x00029e49) lc0_uni_indicator_pane

0x0129,	// (0x0001b00c) ls0_title_pane_g1_ParamLimits

0x0129,	// (0x0001b00c) ls0_title_pane_g1

0x5501,	// (0x000203e4) ls0_title_pane_t1_ParamLimits

0x5501,	// (0x000203e4) ls0_title_pane_t1

0xef73,	// (0x00029e56) lc0_uni_indicator_pane_g1_ParamLimits

0xef73,	// (0x00029e56) lc0_uni_indicator_pane_g1

0x0185,	// (0x0001b068) lc0_stat_clock_pane_t1

0x4e3c,	// (0x0001fd1f) main_ai5_pane

0x0193,	// (0x0001b076) ai5_sk_pane_ParamLimits

0x0193,	// (0x0001b076) ai5_sk_pane

0x5544,	// (0x00020427) cell_ai5_widget_pane_ParamLimits

0x5544,	// (0x00020427) cell_ai5_widget_pane

0x55ab,	// (0x0002048e) aid_size_cell_widget_grid

0x020d,	// (0x0001b0f0) bg_ai5_widget_pane_ParamLimits

0x020d,	// (0x0001b0f0) bg_ai5_widget_pane

0x55d9,	// (0x000204bc) cell_ai5_widget_pane_g2

0x55e9,	// (0x000204cc) cell_ai5_widget_pane_g3

0x55fd,	// (0x000204e0) cell_ai5_widget_pane_g4

0x5609,	// (0x000204ec) cell_ai5_widget_pane_g5

0x5615,	// (0x000204f8) cell_ai5_widget_pane_g6

0x5621,	// (0x00020504) cell_ai5_widget_pane_g7

0x5669,	// (0x0002054c) cell_ai5_widget_pane_t1_ParamLimits

0x5669,	// (0x0002054c) cell_ai5_widget_pane_t1

0x5686,	// (0x00020569) cell_ai5_widget_pane_t2_ParamLimits

0x5686,	// (0x00020569) cell_ai5_widget_pane_t2

0x569e,	// (0x00020581) cell_ai5_widget_pane_t3_ParamLimits

0x569e,	// (0x00020581) cell_ai5_widget_pane_t3

0x56b6,	// (0x00020599) cell_ai5_widget_pane_t4_ParamLimits

0x56b6,	// (0x00020599) cell_ai5_widget_pane_t4

0x56d0,	// (0x000205b3) cell_ai5_widget_pane_t5_ParamLimits

0x56d0,	// (0x000205b3) cell_ai5_widget_pane_t5

0x034b,	// (0x0001b22e) cell_ai5_widget_pane_t6_ParamLimits

0x034b,	// (0x0001b22e) cell_ai5_widget_pane_t6

0x035d,	// (0x0001b240) cell_ai5_widget_pane_t7_ParamLimits

0x035d,	// (0x0001b240) cell_ai5_widget_pane_t7

0x56ef,	// (0x000205d2) cell_ai5_widget_pane_t8_ParamLimits

0x56ef,	// (0x000205d2) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x0002ad47) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x0002ad47) cell_ai5_widget_pane_t

0x5737,	// (0x0002061a) grid_ai5_widget_pane

0x5b89,	// (0x00020a6c) highlight_cell_ai5_widget_pane_ParamLimits

0x5b89,	// (0x00020a6c) highlight_cell_ai5_widget_pane

0x574b,	// (0x0002062e) ai5_sk_left_pane

0x5755,	// (0x00020638) ai5_sk_middle_pane

0x575f,	// (0x00020642) ai5_sk_right_pane

0x03f2,	// (0x0001b2d5) bg_ai5_widget_pane_g1_ParamLimits

0x03f2,	// (0x0001b2d5) bg_ai5_widget_pane_g1

0x03fe,	// (0x0001b2e1) bg_ai5_widget_pane_g2_ParamLimits

0x03fe,	// (0x0001b2e1) bg_ai5_widget_pane_g2

0x040a,	// (0x0001b2ed) bg_ai5_widget_pane_g3_ParamLimits

0x040a,	// (0x0001b2ed) bg_ai5_widget_pane_g3

0x0416,	// (0x0001b2f9) bg_ai5_widget_pane_g4_ParamLimits

0x0416,	// (0x0001b2f9) bg_ai5_widget_pane_g4

0x0422,	// (0x0001b305) bg_ai5_widget_pane_g5_ParamLimits

0x0422,	// (0x0001b305) bg_ai5_widget_pane_g5

0x042e,	// (0x0001b311) bg_ai5_widget_pane_g6_ParamLimits

0x042e,	// (0x0001b311) bg_ai5_widget_pane_g6

0x043a,	// (0x0001b31d) bg_ai5_widget_pane_g7_ParamLimits

0x043a,	// (0x0001b31d) bg_ai5_widget_pane_g7

0x0446,	// (0x0001b329) bg_ai5_widget_pane_g8_ParamLimits

0x0446,	// (0x0001b329) bg_ai5_widget_pane_g8

0x0452,	// (0x0001b335) bg_ai5_widget_pane_g9_ParamLimits

0x0452,	// (0x0001b335) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x0002ad5c) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x0002ad5c) bg_ai5_widget_pane_g

0x5769,	// (0x0002064c) cell_shortcut_ai5_widget_pane_ParamLimits

0x5769,	// (0x0002064c) cell_shortcut_ai5_widget_pane

0x4f94,	// (0x0001fe77) bg_cell_shortcut_ai5_widget_pane

0x577b,	// (0x0002065e) cell_grid_ai5_widget_pane_g1

0x0495,	// (0x0001b378) highlight_cell_shortcut_ai5_widget_pane

0x935f,	// (0x00024242) ai5_sk_left_pane_g1

0x049d,	// (0x0001b380) ai5_sk_left_pane_g2

0x04a5,	// (0x0001b388) ai5_sk_left_pane_g3

0x04ad,	// (0x0001b390) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x0002ad6f) ai5_sk_left_pane_g

0x04b5,	// (0x0001b398) ai5_sk_left_pane_t1

0x9367,	// (0x0002424a) ai5_sk_right_pane_g1

0x04c3,	// (0x0001b3a6) ai5_sk_right_pane_g2

0x04cb,	// (0x0001b3ae) ai5_sk_right_pane_g3

0x04d3,	// (0x0001b3b6) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x0002ad78) ai5_sk_right_pane_g

0x04db,	// (0x0001b3be) ai5_sk_right_pane_t1

0x9367,	// (0x0002424a) ai5_sk_middle_pane_g1

0x935f,	// (0x00024242) ai5_sk_middle_pane_g2

0x937f,	// (0x00024262) ai5_sk_middle_pane_g3

0x04cb,	// (0x0001b3ae) ai5_sk_middle_pane_g4

0x04a5,	// (0x0001b388) ai5_sk_middle_pane_g5

0x04e9,	// (0x0001b3cc) ai5_sk_middle_pane_g6

0x5784,	// (0x00020667) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0002ad81) ai5_sk_middle_pane_g

0x3001,	// (0x0001dee4) aid_touch_area_size_lc0_ParamLimits

0x3001,	// (0x0001dee4) aid_touch_area_size_lc0

0x86d0,	// (0x000235b3) cell_hwr_candidate_pane_t1_ParamLimits

0x91b0,	// (0x00024093) aid_touch_navi_pane

0x326e,	// (0x0001e151) status_dt_navi_pane_ParamLimits

0x326e,	// (0x0001e151) status_dt_navi_pane

0x3286,	// (0x0001e169) status_dt_sta_pane_ParamLimits

0x3286,	// (0x0001e169) status_dt_sta_pane

0x578c,	// (0x0002066f) dt_sta_controll_pane

0x5799,	// (0x0002067c) dt_sta_indi_pane

0x57a6,	// (0x00020689) dt_sta_title_pane

0x508b,	// (0x0001ff6e) bg_dt_sta_indi_pane_ParamLimits

0x508b,	// (0x0001ff6e) bg_dt_sta_indi_pane

0x57b8,	// (0x0002069b) dt_sta_battery_pane

0x57c0,	// (0x000206a3) dt_sta_indi_pane_g1

0x57c9,	// (0x000206ac) dt_sta_indi_pane_g2

0x57d2,	// (0x000206b5) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x0002ad90) dt_sta_indi_pane_g

0x57db,	// (0x000206be) dt_sta_signal_pane

0x5b89,	// (0x00020a6c) bg_dt_sta_title_pane_ParamLimits

0x5b89,	// (0x00020a6c) bg_dt_sta_title_pane

0x57e4,	// (0x000206c7) dt_sta_title_pane_g1

0x57ec,	// (0x000206cf) dt_sta_title_pane_t1_ParamLimits

0x57ec,	// (0x000206cf) dt_sta_title_pane_t1

0x4e3c,	// (0x0001fd1f) bg_dt_sta_control_pane

0x5801,	// (0x000206e4) dt_sta_controll_pane_g1

0x580a,	// (0x000206ed) bg_dt_sta_title_pane_g1

0x5813,	// (0x000206f6) bg_dt_sta_title_pane_g2

0x581c,	// (0x000206ff) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x0002ad97) bg_dt_sta_title_pane_g

0xcc01,	// (0x00027ae4) bg_dt_sta_indi_pane_g1

0x5825,	// (0x00020708) dt_sta_signal_pane_g1

0x582d,	// (0x00020710) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x0002ad9e) dt_sta_signal_pane_g

0x05a7,	// (0x0001b48a) dt_sta_battery_pane_g1

0x05b0,	// (0x0001b493) dt_sta_battery_pane_t1

0xcc01,	// (0x00027ae4) bg_dt_sta_control_pane_g1

0x6112,	// (0x00020ff5) fep_china_uni_eep_pane

0x611a,	// (0x00020ffd) fep_china_uni_entry_pane_ParamLimits

0x612a,	// (0x0002100d) popup_fep_china_uni_window_g1_ParamLimits

0x613a,	// (0x0002101d) popup_fep_china_uni_window_g2_ParamLimits

0x613a,	// (0x0002101d) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002a640) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002a640) popup_fep_china_uni_window_g

0x05bf,	// (0x0001b4a2) fep_china_uni_eep_pane_g1

0x05c7,	// (0x0001b4aa) fep_china_uni_eep_pane_t1

0x00d6,	// (0x0001afb9) aid_touch_area_size_smil_player

0x924e,	// (0x00024131) lc0_clock_pane

0x9287,	// (0x0002416a) status_pane_g5_ParamLimits

0x9287,	// (0x0002416a) status_pane_g5

0x2b95,	// (0x0001da78) popup_keymap_window

0x9267,	// (0x0002414a) status_icon_pane

0x55e9,	// (0x000204cc) cell_ai5_widget_pane_g3_ParamLimits

0x55fd,	// (0x000204e0) cell_ai5_widget_pane_g4_ParamLimits

0x5609,	// (0x000204ec) cell_ai5_widget_pane_g5_ParamLimits

0x562d,	// (0x00020510) cell_ai5_widget_pane_g8_ParamLimits

0x562d,	// (0x00020510) cell_ai5_widget_pane_g8

0x5641,	// (0x00020524) cell_ai5_widget_pane_g9_ParamLimits

0x5641,	// (0x00020524) cell_ai5_widget_pane_g9

0x5655,	// (0x00020538) cell_ai5_widget_pane_g10_ParamLimits

0x5655,	// (0x00020538) cell_ai5_widget_pane_g10

0x05d6,	// (0x0001b4b9) status_icon_pane_g1

0x4e3c,	// (0x0001fd1f) bg_popup_sub_pane_cp13

0x05de,	// (0x0001b4c1) popup_keymap_window_t1

0x2920,	// (0x0001d803) control_pane_g6_ParamLimits

0x2920,	// (0x0001d803) control_pane_g6

0x2913,	// (0x0001d7f6) control_pane_g7_ParamLimits

0x2913,	// (0x0001d7f6) control_pane_g7

0x2906,	// (0x0001d7e9) control_pane_g8_ParamLimits

0x2906,	// (0x0001d7e9) control_pane_g8

0x578c,	// (0x0002066f) dt_sta_controll_pane_ParamLimits

0x5799,	// (0x0002067c) dt_sta_indi_pane_ParamLimits

0x57a6,	// (0x00020689) dt_sta_title_pane_ParamLimits

0x541d,	// (0x00020300) aid_size_touch_scroll_bar_cale

0x7309,	// (0x000221ec) popup_discreet_window_ParamLimits

0x7309,	// (0x000221ec) popup_discreet_window

0xe0df,	// (0x00028fc2) popup_sk_window

0x98bd,	// (0x000247a0) bg_popup_sub_pane_cp28_ParamLimits

0x98bd,	// (0x000247a0) bg_popup_sub_pane_cp28

0x05ec,	// (0x0001b4cf) popup_discreet_window_g1_ParamLimits

0x05ec,	// (0x0001b4cf) popup_discreet_window_g1

0x060c,	// (0x0001b4ef) popup_discreet_window_t1_ParamLimits

0x060c,	// (0x0001b4ef) popup_discreet_window_t1

0x062a,	// (0x0001b50d) popup_discreet_window_t2_ParamLimits

0x062a,	// (0x0001b50d) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0002ada3) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0002ada3) popup_discreet_window_t

0x903d,	// (0x00023f20) popup_sk_window_g1

0x9046,	// (0x00023f29) popup_sk_window_g2

0x0001,

0xfec7,	// (0x0002adaa) popup_sk_window_g

0x069c,	// (0x0001b57f) popup_sk_window_t1

0x068e,	// (0x0001b571) popup_sk_window_t1_copy1

0x55d9,	// (0x000204bc) cell_ai5_widget_pane_g2_ParamLimits

0x5701,	// (0x000205e4) cell_ai5_widget_pane_t9_ParamLimits

0x5701,	// (0x000205e4) cell_ai5_widget_pane_t9

0x4e3c,	// (0x0001fd1f) main_fep_fshwr2_pane

0x5835,	// (0x00020718) aid_fshwr2_btn_pane

0x583d,	// (0x00020720) aid_fshwr2_syb_pane

0x5845,	// (0x00020728) aid_fshwr2_txt_pane

0x584d,	// (0x00020730) fshwr2_func_candi_pane

0x5855,	// (0x00020738) fshwr2_hwr_syb_pane

0x585d,	// (0x00020740) fshwr2_icf_pane

0x4e3c,	// (0x0001fd1f) fshwr2_icf_bg_pane

0x5865,	// (0x00020748) fshwr2_icf_pane_t1_ParamLimits

0x5865,	// (0x00020748) fshwr2_icf_pane_t1

0xcc01,	// (0x00027ae4) fshwr2_func_candi_pane_g1

0x0703,	// (0x0001b5e6) fshwr2_func_candi_row_pane_ParamLimits

0x0703,	// (0x0001b5e6) fshwr2_func_candi_row_pane

0x587d,	// (0x00020760) cell_fshwr2_syb_pane_ParamLimits

0x587d,	// (0x00020760) cell_fshwr2_syb_pane

0xce49,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xce49,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1

0x4e3c,	// (0x0001fd1f) bg_popup_call_pane_cp01

0x072b,	// (0x0001b60e) fshwr2_func_candi_cell_pane_ParamLimits

0x072b,	// (0x0001b60e) fshwr2_func_candi_cell_pane

0x0756,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x0756,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane

0x0770,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0770,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1

0x0790,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0790,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1

0x4e3c,	// (0x0001fd1f) bg_button_pane_cp08

0x6542,	// (0x00021425) cell_fshwr2_syb_bg_pane

0x5894,	// (0x00020777) cell_fshwr2_syb_bg_pane_g1

0x589c,	// (0x0002077f) cell_fshwr2_syb_bg_pane_t1

0x5b89,	// (0x00020a6c) main_tmo_pane

0x36d8,	// (0x0001e5bb) uni_indicator_pane_g1_ParamLimits

0x36ed,	// (0x0001e5d0) uni_indicator_pane_g2_ParamLimits

0x3703,	// (0x0001e5e6) uni_indicator_pane_g3_ParamLimits

0xa28a,	// (0x0002516d) uni_indicator_pane_g4_ParamLimits

0xa28a,	// (0x0002516d) uni_indicator_pane_g4

0xa29e,	// (0x00025181) uni_indicator_pane_g5_ParamLimits

0xa29e,	// (0x00025181) uni_indicator_pane_g5

0xa2b2,	// (0x00025195) uni_indicator_pane_g6_ParamLimits

0xa2b2,	// (0x00025195) uni_indicator_pane_g6

0xf94e,	// (0x0002a831) uni_indicator_pane_g_ParamLimits

0x40ea,	// (0x0001efcd) popup_tmo_note_window_ParamLimits

0x40ea,	// (0x0001efcd) popup_tmo_note_window

0x4e3c,	// (0x0001fd1f) fshwr2_bg_pane

0x0781,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0781,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x0002adaf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x0002adaf) fshwr2_func_candi_cell_pane_g

0xcc01,	// (0x00027ae4) bg_popup_window_pane_cp01

0x07ba,	// (0x0001b69d) bg_popup_window_pane_g1_cp01

0x07c3,	// (0x0001b6a6) bg_popup_window_pane_cp22_ParamLimits

0x07c3,	// (0x0001b6a6) bg_popup_window_pane_cp22

0x07d1,	// (0x0001b6b4) listscroll_tmo_link_pane_ParamLimits

0x07d1,	// (0x0001b6b4) listscroll_tmo_link_pane

0x0811,	// (0x0001b6f4) popup_tmo_note_window_g1_ParamLimits

0x0811,	// (0x0001b6f4) popup_tmo_note_window_g1

0x081e,	// (0x0001b701) tmo_note_info_pane_ParamLimits

0x081e,	// (0x0001b701) tmo_note_info_pane

0x58ab,	// (0x0002078e) list_tmo_note_info_pane_g1_ParamLimits

0x58ab,	// (0x0002078e) list_tmo_note_info_pane_g1

0x084f,	// (0x0001b732) list_tmo_note_info_pane_g2_ParamLimits

0x084f,	// (0x0001b732) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x0002adb4) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x0002adb4) list_tmo_note_info_pane_g

0x086b,	// (0x0001b74e) list_tmo_note_info_text_pane_ParamLimits

0x086b,	// (0x0001b74e) list_tmo_note_info_text_pane

0x08ec,	// (0x0001b7cf) list_tmo_link_pane

0x08f9,	// (0x0001b7dc) scroll_pane_cp20

0x0906,	// (0x0001b7e9) list_single_tmo_link_pane_ParamLimits

0x0906,	// (0x0001b7e9) list_single_tmo_link_pane

0x0916,	// (0x0001b7f9) list_single_tmo_link_pane_t1

0x0924,	// (0x0001b807) list_tmo_note_info_text_pane_t1_ParamLimits

0x0924,	// (0x0001b807) list_tmo_note_info_text_pane_t1

0x5c4b,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5c4b,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01

0x1ca7,	// (0x0001cb8a) aid_size_touch_slider_marker

0xe0d3,	// (0x00028fb6) popup_settings_window_ParamLimits

0xe0d3,	// (0x00028fb6) popup_settings_window

0xb1c7,	// (0x000260aa) popup_candi_list_indi_window

0x91b0,	// (0x00024093) aid_touch_navi_pane_ParamLimits

0x8890,	// (0x00023773) rs_clock_indi_pane

0x8899,	// (0x0002377c) sctrl_sk_bottom_pane_ParamLimits

0x88aa,	// (0x0002378d) sctrl_sk_top_pane_ParamLimits

0x89b2,	// (0x00023895) popup_fep_tooltip_window

0x55ab,	// (0x0002048e) aid_size_cell_widget_grid_ParamLimits

0x55cd,	// (0x000204b0) cell_ai5_widget_pane_g1_ParamLimits

0x55cd,	// (0x000204b0) cell_ai5_widget_pane_g1

0x5615,	// (0x000204f8) cell_ai5_widget_pane_g6_ParamLimits

0x5621,	// (0x00020504) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x0002ad32) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0002ad32) cell_ai5_widget_pane_g

0x5725,	// (0x00020608) cell_ai5_widget_pane_t10_ParamLimits

0x5725,	// (0x00020608) cell_ai5_widget_pane_t10

0x5737,	// (0x0002061a) grid_ai5_widget_pane_ParamLimits

0x045e,	// (0x0001b341) cell_contacts_ai5_widget_pane_ParamLimits

0x045e,	// (0x0001b341) cell_contacts_ai5_widget_pane

0x063f,	// (0x0001b522) popup_discreet_window_t3_ParamLimits

0x063f,	// (0x0001b522) popup_discreet_window_t3

0x06da,	// (0x0001b5bd) popup_fshwr2_char_preview_window_ParamLimits

0x06da,	// (0x0001b5bd) popup_fshwr2_char_preview_window

0x58c2,	// (0x000207a5) tmo_note_info_pane_t1

0x58d7,	// (0x000207ba) tmo_note_info_pane_t2

0x58ec,	// (0x000207cf) tmo_note_info_pane_t3

0x08c8,	// (0x0001b7ab) tmo_note_info_pane_t4

0x08da,	// (0x0001b7bd) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x0002adb9) tmo_note_info_pane_t

0x08ec,	// (0x0001b7cf) list_tmo_link_pane_ParamLimits

0x08f9,	// (0x0001b7dc) scroll_pane_cp20_ParamLimits

0x4e3c,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp01

0x093d,	// (0x0001b820) popup_fshwr2_char_preview_window_t1

0x094b,	// (0x0001b82e) popup_candi_list_indi_window_g1

0x0954,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane

0x0960,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1

0x0974,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2

0x0983,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x0002adc4) cell_contacts_ai5_widget_pane_g

0x0996,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1

0x5b89,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5964,	// (0x00020847) settings_container_pane

0x6542,	// (0x00021425) listscroll_set_pane_copy1

0xa9d6,	// (0x000258b9) scroll_pane_cp121_copy1

0x0a1a,	// (0x0001b8fd) set_content_pane_copy1

0x0a22,	// (0x0001b905) aid_height_set_list_copy1_ParamLimits

0x0a22,	// (0x0001b905) aid_height_set_list_copy1

0xa44b,	// (0x0002532e) aid_size_parent_copy1_ParamLimits

0xa44b,	// (0x0002532e) aid_size_parent_copy1

0x5970,	// (0x00020853) button_value_adjust_pane_cp6_copy1_ParamLimits

0x5970,	// (0x00020853) button_value_adjust_pane_cp6_copy1

0x9099,	// (0x00023f7c) list_highlight_pane_cp2_copy1_ParamLimits

0x9099,	// (0x00023f7c) list_highlight_pane_cp2_copy1

0x5984,	// (0x00020867) list_set_pane_copy1_ParamLimits

0x5984,	// (0x00020867) list_set_pane_copy1

0x5901,	// (0x000207e4) main_pane_set_t1_copy1_ParamLimits

0x5901,	// (0x000207e4) main_pane_set_t1_copy1

0x593b,	// (0x0002081e) main_pane_set_t2_copy1_ParamLimits

0x593b,	// (0x0002081e) main_pane_set_t2_copy1

0x0ad0,	// (0x0001b9b3) main_pane_set_t3_copy1

0x0ade,	// (0x0001b9c1) main_pane_set_t4_copy1

0x5958,	// (0x0002083b) set_content_pane_g1_copy1_ParamLimits

0x5958,	// (0x0002083b) set_content_pane_g1_copy1

0x5a12,	// (0x000208f5) setting_code_pane_copy1

0x0af4,	// (0x0001b9d7) setting_slider_graphic_pane_copy1

0x0af4,	// (0x0001b9d7) setting_slider_pane_copy1

0x0afc,	// (0x0001b9df) setting_text_pane_copy1

0x0af4,	// (0x0001b9d7) setting_volume_pane_copy1

0x5a1a,	// (0x000208fd) settings_code_pane_cp2_copy1

0x5a22,	// (0x00020905) settings_code_pane_cp_copy1_ParamLimits

0x5a22,	// (0x00020905) settings_code_pane_cp_copy1

0x5a36,	// (0x00020919) volume_set_pane_copy1

0x5a3e,	// (0x00020921) volume_set_pane_g10_copy1

0x5a46,	// (0x00020929) volume_set_pane_g1_copy1

0x5a4e,	// (0x00020931) volume_set_pane_g2_copy1

0x5a56,	// (0x00020939) volume_set_pane_g3_copy1

0x5a5e,	// (0x00020941) volume_set_pane_g4_copy1

0x5a66,	// (0x00020949) volume_set_pane_g5_copy1

0x5a6e,	// (0x00020951) volume_set_pane_g6_copy1

0x5a76,	// (0x00020959) volume_set_pane_g7_copy1

0x5a7e,	// (0x00020961) volume_set_pane_g8_copy1

0x5a86,	// (0x00020969) volume_set_pane_g9_copy1

0x4f2c,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1_ParamLimits

0x4f2c,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1

0x4f3a,	// (0x0001fe1d) setting_slider_pane_t1_copy1_ParamLimits

0x4f3a,	// (0x0001fe1d) setting_slider_pane_t1_copy1

0x0b78,	// (0x0001ba5b) setting_slider_pane_t2_copy1_ParamLimits

0x0b78,	// (0x0001ba5b) setting_slider_pane_t2_copy1

0x0b91,	// (0x0001ba74) setting_slider_pane_t3_copy1_ParamLimits

0x0b91,	// (0x0001ba74) setting_slider_pane_t3_copy1

0x4f50,	// (0x0001fe33) slider_set_pane_copy1_ParamLimits

0x4f50,	// (0x0001fe33) slider_set_pane_copy1

0x5bd8,	// (0x00020abb) set_opt_bg_pane_g1_copy2

0x5be0,	// (0x00020ac3) set_opt_bg_pane_g2_copy2

0x0ba8,	// (0x0001ba8b) set_opt_bg_pane_g3_copy2

0x5bf0,	// (0x00020ad3) set_opt_bg_pane_g4_copy2

0x5bf8,	// (0x00020adb) set_opt_bg_pane_g5_copy2

0x5c00,	// (0x00020ae3) set_opt_bg_pane_g6_copy2

0x5a8e,	// (0x00020971) set_opt_bg_pane_g7_copy2

0x0bb8,	// (0x0001ba9b) set_opt_bg_pane_g8_copy2

0x0bc0,	// (0x0001baa3) set_opt_bg_pane_g9_copy2

0xaa2a,	// (0x0002590d) aid_size_touch_slider_mark_copy1_ParamLimits

0xaa2a,	// (0x0002590d) aid_size_touch_slider_mark_copy1

0xa45d,	// (0x00025340) slider_set_pane_g1_copy1

0xa466,	// (0x00025349) slider_set_pane_g2_copy1

0xaa3e,	// (0x00025921) slider_set_pane_g3_copy1_ParamLimits

0xaa3e,	// (0x00025921) slider_set_pane_g3_copy1

0xaa52,	// (0x00025935) slider_set_pane_g4_copy1_ParamLimits

0xaa52,	// (0x00025935) slider_set_pane_g4_copy1

0xaa6a,	// (0x0002594d) slider_set_pane_g5_copy1_ParamLimits

0xaa6a,	// (0x0002594d) slider_set_pane_g5_copy1

0xaa3e,	// (0x00025921) slider_set_pane_g6_copy1_ParamLimits

0xaa3e,	// (0x00025921) slider_set_pane_g6_copy1

0x5a96,	// (0x00020979) slider_set_pane_g7_copy1_ParamLimits

0x5a96,	// (0x00020979) slider_set_pane_g7_copy1

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp2_copy1

0x4f66,	// (0x0001fe49) setting_slider_graphic_pane_g1_copy1

0x5aac,	// (0x0002098f) setting_slider_graphic_pane_t1_copy1

0x5abb,	// (0x0002099e) setting_slider_graphic_pane_t2_copy1

0x5aca,	// (0x000209ad) slider_set_pane_cp_copy1

0x0c0c,	// (0x0001baef) input_focus_pane_cp1_copy1

0x0c15,	// (0x0001baf8) list_set_text_pane_copy1

0x0c1d,	// (0x0001bb00) setting_text_pane_g1_copy1

0xc142,	// (0x00027025) set_text_pane_t1_copy1

0x0c0c,	// (0x0001baef) input_focus_pane_cp2_copy1

0x0c1d,	// (0x0001bb00) setting_code_pane_g1_copy1

0x0c26,	// (0x0001bb09) setting_code_pane_t1_copy1

0x281e,	// (0x0001d701) list_set_graphic_pane_copy1

0x4ec8,	// (0x0001fdab) bg_set_opt_pane_cp4_copy1

0x0c48,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x0c48,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1

0x0c54,	// (0x0001bb37) list_set_graphic_pane_g2_copy1

0x62bd,	// (0x000211a0) list_set_graphic_pane_t1_copy1_ParamLimits

0x62bd,	// (0x000211a0) list_set_graphic_pane_t1_copy1

0xcc01,	// (0x00027ae4) rs_clock_indi_pane_g1

0x0c5c,	// (0x0001bb3f) rs_clock_indi_pane_t1

0x0c6a,	// (0x0001bb4d) rs_indi_pane

0x0c72,	// (0x0001bb55) rs_indi_pane_g1

0x0c7b,	// (0x0001bb5e) rs_indi_pane_g2

0x094b,	// (0x0001b82e) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x0002adcb) rs_indi_pane_g

0x6542,	// (0x00021425) bg_popup_preview_window_pane_cp03

0x0c84,	// (0x0001bb67) popup_fep_tooltip_window_t1

0xe569,	// (0x0002944c) popup_note2_window_g2_ParamLimits

0xe569,	// (0x0002944c) popup_note2_window_g2

0x0001,

0xfc8d,	// (0x0002ab70) popup_note2_window_g_ParamLimits

0xfc8d,	// (0x0002ab70) popup_note2_window_g

0xe9e4,	// (0x000298c7) bg_popup_sub_pane_cp11_ParamLimits

0xe9f1,	// (0x000298d4) cell_ai3_links_pane_g1_ParamLimits

0xea08,	// (0x000298eb) cell_ai3_links_pane_t1

0xc142,	// (0x00027025) set_text_pane_t1_copy1_ParamLimits

0x6469,	// (0x0002134c) cell_graphic_popup_pane_cp2_ParamLimits

0x6469,	// (0x0002134c) cell_graphic_popup_pane_cp2

0x0c92,	// (0x0001bb75) cell_graphic_popup_pane_g1_cp2

0x52cc,	// (0x000201af) cell_graphic_popup_pane_g2_cp2

0x0c9a,	// (0x0001bb7d) cell_graphic_popup_pane_g3_cp2

0x0ca2,	// (0x0001bb85) cell_graphic_popup_pane_t2_cp2

0x52dd,	// (0x000201c0) grid_highlight_pane_cp3_cp2

0x5ebe,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x5b89,	// (0x00020a6c) main_tmo_pane_ParamLimits

0x40e2,	// (0x0001efc5) popup_tmo_big_image_note_window

0x55bd,	// (0x000204a0) cell_ai5_widget_list_pane

0x55c5,	// (0x000204a8) cell_ai5_widget_lrg_icon_pane

0x58c2,	// (0x000207a5) tmo_note_info_pane_t1_ParamLimits

0x58d7,	// (0x000207ba) tmo_note_info_pane_t2_ParamLimits

0x58ec,	// (0x000207cf) tmo_note_info_pane_t3_ParamLimits

0x08c8,	// (0x0001b7ab) tmo_note_info_pane_t4_ParamLimits

0x08da,	// (0x0001b7bd) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x0002adb9) tmo_note_info_pane_t_ParamLimits

0x5964,	// (0x00020847) settings_container_pane_ParamLimits

0x0c04,	// (0x0001bae7) indicator_popup_pane_cp5

0x0c04,	// (0x0001bae7) indicator_popup_pane_cp6

0x281e,	// (0x0001d701) list_set_graphic_pane_copy1_ParamLimits

0x4e3c,	// (0x0001fd1f) bg_popup_window_pane_cp23

0x0cb0,	// (0x0001bb93) popup_tmo_big_image_note_window_g1

0x0cb9,	// (0x0001bb9c) popup_tmo_big_image_note_window_t1

0x0cc7,	// (0x0001bbaa) popup_tmo_big_image_note_window_t2

0x0cd5,	// (0x0001bbb8) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0002add2) popup_tmo_big_image_note_window_t

0x5ad2,	// (0x000209b5) cell_ai5_widget_lrg_icon_pane_g1

0x5ada,	// (0x000209bd) cell_ai5_widget_lrg_icon_pane_t1

0x5ae8,	// (0x000209cb) cell_ai5_widget_list_row_pane_ParamLimits

0x5ae8,	// (0x000209cb) cell_ai5_widget_list_row_pane

0x5b01,	// (0x000209e4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x5b01,	// (0x000209e4) cell_ai5_widget_list_row_pane_g1

0x5b0e,	// (0x000209f1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x5b0e,	// (0x000209f1) cell_ai5_widget_list_row_pane_t1

0x5b26,	// (0x00020a09) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x5b26,	// (0x00020a09) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef6,	// (0x0002add9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x0002add9) cell_ai5_widget_list_row_pane_t

0x7232,	// (0x00022115) main_fep_vtchi_ss_pane

0x0d49,	// (0x0001bc2c) popup_fep_char_pre_window

0x0d51,	// (0x0001bc34) popup_fep_ituss_window

0x0d5a,	// (0x0001bc3d) popup_fep_vkbss_window

0x0d63,	// (0x0001bc46) grid_vkbss_keypad_pane_ParamLimits

0x0d63,	// (0x0001bc46) grid_vkbss_keypad_pane

0x0d73,	// (0x0001bc56) ituss_keypad_pane

0x0d7b,	// (0x0001bc5e) aid_vkbss_key_offset_ParamLimits

0x0d7b,	// (0x0001bc5e) aid_vkbss_key_offset

0x0d8a,	// (0x0001bc6d) cell_vkbss_key_pane_ParamLimits

0x0d8a,	// (0x0001bc6d) cell_vkbss_key_pane

0x0da0,	// (0x0001bc83) bg_cell_vkbss_key_g1_ParamLimits

0x0da0,	// (0x0001bc83) bg_cell_vkbss_key_g1

0x0dac,	// (0x0001bc8f) cell_vkbss_key_3p_pane_ParamLimits

0x0dac,	// (0x0001bc8f) cell_vkbss_key_3p_pane

0x0dc0,	// (0x0001bca3) cell_vkbss_key_g1_ParamLimits

0x0dc0,	// (0x0001bca3) cell_vkbss_key_g1

0x0dd4,	// (0x0001bcb7) cell_vkbss_key_t1_ParamLimits

0x0dd4,	// (0x0001bcb7) cell_vkbss_key_t1

0x0dff,	// (0x0001bce2) cell_ituss_key_pane_ParamLimits

0x0dff,	// (0x0001bce2) cell_ituss_key_pane

0x0e0e,	// (0x0001bcf1) bg_cell_ituss_key_g1_ParamLimits

0x0e0e,	// (0x0001bcf1) bg_cell_ituss_key_g1

0x0e1a,	// (0x0001bcfd) cell_ituss_key_pane_g1_ParamLimits

0x0e1a,	// (0x0001bcfd) cell_ituss_key_pane_g1

0x0e26,	// (0x0001bd09) cell_ituss_key_pane_g2_ParamLimits

0x0e26,	// (0x0001bd09) cell_ituss_key_pane_g2

0x0001,

0xfefb,	// (0x0002adde) cell_ituss_key_pane_g_ParamLimits

0xfefb,	// (0x0002adde) cell_ituss_key_pane_g

0x0e39,	// (0x0001bd1c) cell_ituss_key_t1_ParamLimits

0x0e39,	// (0x0001bd1c) cell_ituss_key_t1

0x0e57,	// (0x0001bd3a) cell_ituss_key_t2_ParamLimits

0x0e57,	// (0x0001bd3a) cell_ituss_key_t2

0x0e76,	// (0x0001bd59) cell_ituss_key_t3_ParamLimits

0x0e76,	// (0x0001bd59) cell_ituss_key_t3

0x0e95,	// (0x0001bd78) cell_ituss_key_t4_ParamLimits

0x0e95,	// (0x0001bd78) cell_ituss_key_t4

0x0003,

0xff00,	// (0x0002ade3) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0002ade3) cell_ituss_key_t

0x0eb4,	// (0x0001bd97) cell_vkbss_key_3p_pane_g1

0x0ebc,	// (0x0001bd9f) cell_vkbss_key_3p_pane_g2

0x0ec4,	// (0x0001bda7) cell_vkbss_key_3p_pane_g3

0x0002,

0xff09,	// (0x0002adec) cell_vkbss_key_3p_pane_g

0x4e3c,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp02

0x0ecc,	// (0x0001bdaf) popup_fep_char_pre_window_t1

0x55a1,	// (0x00020484) main_ai5_sk_pane

0x0954,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0960,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0974,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0983,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x0002adc4) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0996,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x5b89,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x5b38,	// (0x00020a1b) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
