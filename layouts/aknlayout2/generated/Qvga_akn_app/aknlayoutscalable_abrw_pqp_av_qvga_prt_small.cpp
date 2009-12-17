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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00019015 };

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
0x8fff,	// (0x00022014) Screen

0x9009,	// (0x0002201e) application_window_ParamLimits

0x9009,	// (0x0002201e) application_window

0x6d14,	// (0x0001fd29) screen_g1

0x9052,	// (0x00022067) area_bottom_pane_ParamLimits

0x9052,	// (0x00022067) area_bottom_pane

0x6d1e,	// (0x0001fd33) area_top_pane_ParamLimits

0x6d1e,	// (0x0001fd33) area_top_pane

0x910a,	// (0x0002211f) main_pane_ParamLimits

0x910a,	// (0x0002211f) main_pane

0x6d96,	// (0x0001fdab) misc_graphics

0xdcce,	// (0x00026ce3) battery_pane_ParamLimits

0xdcce,	// (0x00026ce3) battery_pane

0xb93a,	// (0x0002494f) bg_status_flat_pane_g8

0xb942,	// (0x00024957) bg_status_flat_pane_g9

0xb0d7,	// (0x000240ec) context_pane_ParamLimits

0xb0d7,	// (0x000240ec) context_pane

0xde00,	// (0x00026e15) navi_pane_ParamLimits

0xde00,	// (0x00026e15) navi_pane

0xe045,	// (0x0002705a) signal_pane_ParamLimits

0xe045,	// (0x0002705a) signal_pane

0x0008,

0xf8ad,	// (0x000288c2) bg_status_flat_pane_g

0xe0a6,	// (0x000270bb) status_pane_g1_ParamLimits

0xe0a6,	// (0x000270bb) status_pane_g1

0xe0b2,	// (0x000270c7) status_pane_g2_ParamLimits

0xe0b2,	// (0x000270c7) status_pane_g2

0xb13d,	// (0x00024152) status_pane_g3_ParamLimits

0xb13d,	// (0x00024152) status_pane_g3

0x0004,

0xf7db,	// (0x000287f0) status_pane_g_ParamLimits

0xf7db,	// (0x000287f0) status_pane_g

0xe0be,	// (0x000270d3) title_pane_ParamLimits

0xe0be,	// (0x000270d3) title_pane

0xe0fb,	// (0x00027110) uni_indicator_pane_ParamLimits

0xe0fb,	// (0x00027110) uni_indicator_pane

0xaf2d,	// (0x00023f42) bg_list_pane_ParamLimits

0xaf2d,	// (0x00023f42) bg_list_pane

0xd078,	// (0x0002608d) find_pane

0xd8da,	// (0x000268ef) listscroll_app_pane_ParamLimits

0xd8da,	// (0x000268ef) listscroll_app_pane

0xaf4d,	// (0x00023f62) listscroll_form_pane

0xd080,	// (0x00026095) listscroll_gen_pane_ParamLimits

0xd080,	// (0x00026095) listscroll_gen_pane

0xaf4d,	// (0x00023f62) listscroll_set_pane

0x968e,	// (0x000226a3) main_idle_act_pane

0x8410,	// (0x00021425) main_idle_trad_pane

0x8410,	// (0x00021425) main_list_empty_pane

0xaf67,	// (0x00023f7c) main_midp_pane

0xaf73,	// (0x00023f88) main_pane_g1_ParamLimits

0xaf73,	// (0x00023f88) main_pane_g1

0xd8e6,	// (0x000268fb) popup_ai_message_window_ParamLimits

0xd8e6,	// (0x000268fb) popup_ai_message_window

0xd95a,	// (0x0002696f) popup_fep_china_uni_window_ParamLimits

0xd95a,	// (0x0002696f) popup_fep_china_uni_window

0xafa3,	// (0x00023fb8) popup_fep_japan_candidate_window_ParamLimits

0xafa3,	// (0x00023fb8) popup_fep_japan_candidate_window

0xafc1,	// (0x00023fd6) popup_fep_japan_predictive_window_ParamLimits

0xafc1,	// (0x00023fd6) popup_fep_japan_predictive_window

0xd998,	// (0x000269ad) popup_find_window

0xd9a5,	// (0x000269ba) popup_grid_graphic_window_ParamLimits

0xd9a5,	// (0x000269ba) popup_grid_graphic_window

0xafed,	// (0x00024002) popup_large_graphic_colour_window

0xd9c3,	// (0x000269d8) popup_menu_window_ParamLimits

0xd9c3,	// (0x000269d8) popup_menu_window

0xdafb,	// (0x00026b10) popup_note_image_window

0xdae9,	// (0x00026afe) popup_note_wait_window_ParamLimits

0xdae9,	// (0x00026afe) popup_note_wait_window

0xdae9,	// (0x00026afe) popup_note_window_ParamLimits

0xdae9,	// (0x00026afe) popup_note_window

0xdb4f,	// (0x00026b64) popup_query_code_window_ParamLimits

0xdb4f,	// (0x00026b64) popup_query_code_window

0xb00c,	// (0x00024021) popup_query_data_code_window_ParamLimits

0xb00c,	// (0x00024021) popup_query_data_code_window

0xdb61,	// (0x00026b76) popup_query_data_window_ParamLimits

0xdb61,	// (0x00026b76) popup_query_data_window

0xdb77,	// (0x00026b8c) popup_query_sat_info_window_ParamLimits

0xdb77,	// (0x00026b8c) popup_query_sat_info_window

0xdba8,	// (0x00026bbd) popup_snote_single_graphic_window_ParamLimits

0xdba8,	// (0x00026bbd) popup_snote_single_graphic_window

0xdba8,	// (0x00026bbd) popup_snote_single_text_window_ParamLimits

0xdba8,	// (0x00026bbd) popup_snote_single_text_window

0xb021,	// (0x00024036) popup_sub_window_general

0xb063,	// (0x00024078) popup_window_general_ParamLimits

0xb063,	// (0x00024078) popup_window_general

0xb076,	// (0x0002408b) power_save_pane

0x9d04,	// (0x00022d19) control_pane_g1_ParamLimits

0x9d04,	// (0x00022d19) control_pane_g1

0x9d25,	// (0x00022d3a) control_pane_g2_ParamLimits

0x9d25,	// (0x00022d3a) control_pane_g2

0x861c,	// (0x00021631) control_pane_g3_ParamLimits

0x861c,	// (0x00021631) control_pane_g3

0x0007,

0xf7c3,	// (0x000287d8) control_pane_g_ParamLimits

0xf7c3,	// (0x000287d8) control_pane_g

0x9d86,	// (0x00022d9b) control_pane_t1_ParamLimits

0x9d86,	// (0x00022d9b) control_pane_t1

0x9dd8,	// (0x00022ded) control_pane_t2_ParamLimits

0x9dd8,	// (0x00022ded) control_pane_t2

0x0002,

0xf7d4,	// (0x000287e9) control_pane_t_ParamLimits

0xf7d4,	// (0x000287e9) control_pane_t

0x853f,	// (0x00021554) navi_navi_volume_pane_cp1

0x8548,	// (0x0002155d) status_small_icon_pane

0x8550,	// (0x00021565) status_small_pane_g1_ParamLimits

0x8550,	// (0x00021565) status_small_pane_g1

0x8584,	// (0x00021599) status_small_pane_g2_ParamLimits

0x8584,	// (0x00021599) status_small_pane_g2

0x8590,	// (0x000215a5) status_small_pane_g3_ParamLimits

0x8590,	// (0x000215a5) status_small_pane_g3

0x859c,	// (0x000215b1) status_small_pane_g4_ParamLimits

0x859c,	// (0x000215b1) status_small_pane_g4

0x85a8,	// (0x000215bd) status_small_pane_g5_ParamLimits

0x85a8,	// (0x000215bd) status_small_pane_g5

0x85b5,	// (0x000215ca) status_small_pane_g6_ParamLimits

0x85b5,	// (0x000215ca) status_small_pane_g6

0x0007,

0xf7b2,	// (0x000287c7) status_small_pane_g_ParamLimits

0xf7b2,	// (0x000287c7) status_small_pane_g

0x85e5,	// (0x000215fa) status_small_pane_t1

0x8608,	// (0x0002161d) status_small_wait_pane_ParamLimits

0x8608,	// (0x0002161d) status_small_wait_pane

0x9992,	// (0x000229a7) aid_levels_signal_ParamLimits

0x9992,	// (0x000229a7) aid_levels_signal

0x99a3,	// (0x000229b8) signal_pane_g1_ParamLimits

0x99a3,	// (0x000229b8) signal_pane_g1

0x99b9,	// (0x000229ce) signal_pane_g2_ParamLimits

0x99b9,	// (0x000229ce) signal_pane_g2

0x0001,

0xf747,	// (0x0002875c) signal_pane_g_ParamLimits

0xf747,	// (0x0002875c) signal_pane_g

0x7f97,	// (0x00020fac) context_pane_g1

0x9309,	// (0x0002231e) title_pane_g1

0x9333,	// (0x00022348) title_pane_t1

0x6dac,	// (0x0001fdc1) title_pane_t2

0x6dd2,	// (0x0001fde7) title_pane_t3

0x0002,

0xf59b,	// (0x000285b0) title_pane_t

0xe111,	// (0x00027126) aid_levels_battery_ParamLimits

0xe111,	// (0x00027126) aid_levels_battery

0xe124,	// (0x00027139) battery_pane_g1_ParamLimits

0xe124,	// (0x00027139) battery_pane_g1

0xe139,	// (0x0002714e) battery_pane_g2_ParamLimits

0xe139,	// (0x0002714e) battery_pane_g2

0x0001,

0xf7e6,	// (0x000287fb) battery_pane_g_ParamLimits

0xf7e6,	// (0x000287fb) battery_pane_g

0xe302,	// (0x00027317) uni_indicator_pane_g1

0xe317,	// (0x0002732c) uni_indicator_pane_g2

0xe32d,	// (0x00027342) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x0002896a) uni_indicator_pane_g

0x7b0b,	// (0x00020b20) navi_icon_pane_ParamLimits

0x7b0b,	// (0x00020b20) navi_icon_pane

0x6d96,	// (0x0001fdab) navi_midp_pane

0x6d96,	// (0x0001fdab) navi_navi_pane

0x7b0b,	// (0x00020b20) navi_text_pane_ParamLimits

0x7b0b,	// (0x00020b20) navi_text_pane

0x6d14,	// (0x0001fd29) status_small_wait_pane_g1

0x70ed,	// (0x00020102) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x00028965) status_small_wait_pane_g

0xbeb0,	// (0x00024ec5) navi_navi_icon_text_pane

0xbeb8,	// (0x00024ecd) navi_navi_pane_g1_ParamLimits

0xbeb8,	// (0x00024ecd) navi_navi_pane_g1

0xbeca,	// (0x00024edf) navi_navi_pane_g2_ParamLimits

0xbeca,	// (0x00024edf) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x00028933) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x00028933) navi_navi_pane_g

0xbedc,	// (0x00024ef1) navi_navi_tabs_pane

0xbeb0,	// (0x00024ec5) navi_navi_text_pane

0xbeb0,	// (0x00024ec5) navi_navi_volume_pane

0xbe8c,	// (0x00024ea1) navi_text_pane_t1

0xbe80,	// (0x00024e95) navi_icon_pane_g1

0xbdd4,	// (0x00024de9) navi_navi_text_pane_t1

0xa0e1,	// (0x000230f6) navi_navi_volume_pane_g1

0xa0e9,	// (0x000230fe) volume_small_pane

0xe24f,	// (0x00027264) navi_navi_icon_text_pane_g1

0xe257,	// (0x0002726c) navi_navi_icon_text_pane_t1

0xb982,	// (0x00024997) navi_tabs_2_long_pane

0xb982,	// (0x00024997) navi_tabs_2_pane

0xb982,	// (0x00024997) navi_tabs_3_long_pane

0xb982,	// (0x00024997) navi_tabs_3_pane

0xb982,	// (0x00024997) navi_tabs_4_pane

0xa0c1,	// (0x000230d6) tabs_2_active_pane_ParamLimits

0xa0c1,	// (0x000230d6) tabs_2_active_pane

0xa0d1,	// (0x000230e6) tabs_2_passive_pane_ParamLimits

0xa0d1,	// (0x000230e6) tabs_2_passive_pane

0xa08f,	// (0x000230a4) tabs_3_active_pane_ParamLimits

0xa08f,	// (0x000230a4) tabs_3_active_pane

0xa09f,	// (0x000230b4) tabs_3_passive_pane_ParamLimits

0xa09f,	// (0x000230b4) tabs_3_passive_pane

0xa0b0,	// (0x000230c5) tabs_3_passive_pane_cp_ParamLimits

0xa0b0,	// (0x000230c5) tabs_3_passive_pane_cp

0xa04b,	// (0x00023060) tabs_4_active_pane_ParamLimits

0xa04b,	// (0x00023060) tabs_4_active_pane

0xa05c,	// (0x00023071) tabs_4_passive_pane_ParamLimits

0xa05c,	// (0x00023071) tabs_4_passive_pane

0xa06d,	// (0x00023082) tabs_4_passive_pane_cp_ParamLimits

0xa06d,	// (0x00023082) tabs_4_passive_pane_cp

0xa07e,	// (0x00023093) tabs_4_passive_pane_cp2_ParamLimits

0xa07e,	// (0x00023093) tabs_4_passive_pane_cp2

0xa02b,	// (0x00023040) tabs_2_long_active_pane_ParamLimits

0xa02b,	// (0x00023040) tabs_2_long_active_pane

0xa03b,	// (0x00023050) tabs_2_long_passive_pane_ParamLimits

0xa03b,	// (0x00023050) tabs_2_long_passive_pane

0x9ff6,	// (0x0002300b) tabs_3_long_active_pane_ParamLimits

0x9ff6,	// (0x0002300b) tabs_3_long_active_pane

0xa007,	// (0x0002301c) tabs_3_long_passive_pane_ParamLimits

0xa007,	// (0x0002301c) tabs_3_long_passive_pane

0xa01a,	// (0x0002302f) tabs_3_long_passive_pane_cp_ParamLimits

0xa01a,	// (0x0002302f) tabs_3_long_passive_pane_cp

0x9f9c,	// (0x00022fb1) volume_small_pane_g1

0x9fa5,	// (0x00022fba) volume_small_pane_g2

0x9fae,	// (0x00022fc3) volume_small_pane_g3

0x9fb7,	// (0x00022fcc) volume_small_pane_g4

0x9fc0,	// (0x00022fd5) volume_small_pane_g5

0x9fc9,	// (0x00022fde) volume_small_pane_g6

0x9fd2,	// (0x00022fe7) volume_small_pane_g7

0x9fdb,	// (0x00022ff0) volume_small_pane_g8

0x9fe4,	// (0x00022ff9) volume_small_pane_g9

0x9fed,	// (0x00023002) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x000288ff) volume_small_pane_g

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp2_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp2

0x6df2,	// (0x0001fe07) tabs_3_active_pane_g1

0x939b,	// (0x000223b0) tabs_3_active_pane_t1

0x6dfa,	// (0x0001fe0f) bg_passive_tab_pane_cp2_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_passive_tab_pane_cp2

0x6df2,	// (0x0001fe07) tabs_3_passive_pane_g1

0x939b,	// (0x000223b0) tabs_3_passive_pane_t1

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp3_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp3

0x93ad,	// (0x000223c2) tabs_4_active_pane_g1

0x93b5,	// (0x000223ca) tabs_4_active_pane_t1

0x6dfa,	// (0x0001fe0f) bg_passive_tab_pane_cp3_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_passive_tab_pane_cp3

0x93ad,	// (0x000223c2) tabs_4_1_passive_pane_g1

0x93b5,	// (0x000223ca) tabs_4_1_passive_pane_t1

0xaf67,	// (0x00023f7c) list_highlight_pane_cp2

0xe383,	// (0x00027398) list_set_pane_ParamLimits

0xe383,	// (0x00027398) list_set_pane

0xe411,	// (0x00027426) main_pane_set_t1_ParamLimits

0xe411,	// (0x00027426) main_pane_set_t1

0xe431,	// (0x00027446) main_pane_set_t2_ParamLimits

0xe431,	// (0x00027446) main_pane_set_t2

0xe443,	// (0x00027458) main_pane_set_t3_ParamLimits

0xe443,	// (0x00027458) main_pane_set_t3

0xe455,	// (0x0002746a) main_pane_set_t4_ParamLimits

0xe455,	// (0x0002746a) main_pane_set_t4

0x0003,

0xf9ba,	// (0x000289cf) main_pane_set_t_ParamLimits

0xf9ba,	// (0x000289cf) main_pane_set_t

0xe467,	// (0x0002747c) setting_code_pane

0xe46f,	// (0x00027484) setting_slider_graphic_pane

0xe46f,	// (0x00027484) setting_slider_pane

0xe46f,	// (0x00027484) setting_text_pane

0xe46f,	// (0x00027484) setting_volume_pane

0x93c7,	// (0x000223dc) volume_set_pane

0x6dfa,	// (0x0001fe0f) bg_set_opt_pane_cp

0x93cf,	// (0x000223e4) setting_slider_pane_t1

0x93e5,	// (0x000223fa) setting_slider_pane_t2

0x93fe,	// (0x00022413) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000285b7) setting_slider_pane_t

0x9415,	// (0x0002242a) slider_set_pane

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp2

0x6e34,	// (0x0001fe49) setting_slider_graphic_pane_g1

0x942b,	// (0x00022440) setting_slider_graphic_pane_t1

0x943a,	// (0x0002244f) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000285be) setting_slider_graphic_pane_t

0x9449,	// (0x0002245e) slider_set_pane_cp

0x6d96,	// (0x0001fdab) input_focus_pane_cp1

0xc311,	// (0x00025326) list_set_text_pane

0x6d14,	// (0x0001fd29) setting_text_pane_g1

0x6d96,	// (0x0001fdab) input_focus_pane_cp2

0x6d14,	// (0x0001fd29) setting_code_pane_g1

0x6e3d,	// (0x0001fe52) setting_code_pane_t1

0xc94e,	// (0x00025963) set_text_pane_t1_ParamLimits

0xc94e,	// (0x00025963) set_text_pane_t1

0x7aa6,	// (0x00020abb) set_opt_bg_pane_g1

0x7aae,	// (0x00020ac3) set_opt_bg_pane_g2

0xe343,	// (0x00027358) set_opt_bg_pane_g3

0x7abe,	// (0x00020ad3) set_opt_bg_pane_g4

0x7ac6,	// (0x00020adb) set_opt_bg_pane_g5

0x7ace,	// (0x00020ae3) set_opt_bg_pane_g6

0xe34b,	// (0x00027360) set_opt_bg_pane_g7

0xe353,	// (0x00027368) set_opt_bg_pane_g8

0xe35b,	// (0x00027370) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x000289bc) set_opt_bg_pane_g

0xc304,	// (0x00025319) slider_set_pane_g1

0xa156,	// (0x0002316b) slider_set_pane_g2

0x0006,

0xf998,	// (0x000289ad) slider_set_pane_g

0xa0f2,	// (0x00023107) volume_set_pane_g1

0xa0fa,	// (0x0002310f) volume_set_pane_g2

0xa102,	// (0x00023117) volume_set_pane_g3

0xa10a,	// (0x0002311f) volume_set_pane_g4

0xa112,	// (0x00023127) volume_set_pane_g5

0xa11a,	// (0x0002312f) volume_set_pane_g6

0xa122,	// (0x00023137) volume_set_pane_g7

0xa12a,	// (0x0002313f) volume_set_pane_g8

0xa132,	// (0x00023147) volume_set_pane_g9

0xa13a,	// (0x0002314f) volume_set_pane_g10

0x0009,

0xf970,	// (0x00028985) volume_set_pane_g

0x9451,	// (0x00022466) indicator_pane_ParamLimits

0x9451,	// (0x00022466) indicator_pane

0x945d,	// (0x00022472) main_idle_pane_g2_ParamLimits

0x945d,	// (0x00022472) main_idle_pane_g2

0x9481,	// (0x00022496) main_pane_idle_g1_ParamLimits

0x9481,	// (0x00022496) main_pane_idle_g1

0x6e4b,	// (0x0001fe60) popup_clock_digital_analogue_window_ParamLimits

0x6e4b,	// (0x0001fe60) popup_clock_digital_analogue_window

0x948e,	// (0x000224a3) soft_indicator_pane_ParamLimits

0x948e,	// (0x000224a3) soft_indicator_pane

0x949a,	// (0x000224af) wallpaper_pane_ParamLimits

0x949a,	// (0x000224af) wallpaper_pane

0x6d14,	// (0x0001fd29) wallpaper_pane_g1

0x94a6,	// (0x000224bb) indicator_pane_g1_ParamLimits

0x94a6,	// (0x000224bb) indicator_pane_g1

0xc439,	// (0x0002544e) navi_navi_icon_text_pane_srt_g1

0x6e79,	// (0x0001fe8e) soft_indicator_pane_t1

0x6e93,	// (0x0001fea8) aid_ps_area_pane

0x94b2,	// (0x000224c7) aid_ps_clock_pane

0x6ea4,	// (0x0001feb9) aid_ps_indicator_pane

0x6eb0,	// (0x0001fec5) indicator_ps_pane_ParamLimits

0x6eb0,	// (0x0001fec5) indicator_ps_pane

0x6ebf,	// (0x0001fed4) power_save_pane_g1_ParamLimits

0x6ebf,	// (0x0001fed4) power_save_pane_g1

0x6ecb,	// (0x0001fee0) power_save_pane_g2_ParamLimits

0x6ecb,	// (0x0001fee0) power_save_pane_g2

0x9017,	// (0x0002202c) aid_navinavi_width_pane

0x6e93,	// (0x0001fea8) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x000285c3) power_save_pane_g_ParamLimits

0xf5ae,	// (0x000285c3) power_save_pane_g

0x6ed9,	// (0x0001feee) power_save_pane_t1_ParamLimits

0x6ed9,	// (0x0001feee) power_save_pane_t1

0x94b2,	// (0x000224c7) aid_ps_clock_pane_ParamLimits

0x6ea4,	// (0x0001feb9) aid_ps_indicator_pane_ParamLimits

0x6eeb,	// (0x0001ff00) power_save_pane_t4_ParamLimits

0x6eeb,	// (0x0001ff00) power_save_pane_t4

0x0001,

0xf5b3,	// (0x000285c8) power_save_pane_t_ParamLimits

0xf5b3,	// (0x000285c8) power_save_pane_t

0x6f15,	// (0x0001ff2a) power_save_t3_ParamLimits

0x6f15,	// (0x0001ff2a) power_save_t3

0x6f00,	// (0x0001ff15) power_save_t2_ParamLimits

0x6f00,	// (0x0001ff15) power_save_t2

0x6f2a,	// (0x0001ff3f) indicator_ps_pane_g1

0x94be,	// (0x000224d3) ai_gene_pane_ParamLimits

0x94be,	// (0x000224d3) ai_gene_pane

0x94ca,	// (0x000224df) ai_links_pane_ParamLimits

0x94ca,	// (0x000224df) ai_links_pane

0x94d6,	// (0x000224eb) indicator_pane_cp1_ParamLimits

0x94d6,	// (0x000224eb) indicator_pane_cp1

0x94e2,	// (0x000224f7) main_pane_idle_g1_cp_ParamLimits

0x94e2,	// (0x000224f7) main_pane_idle_g1_cp

0x6f33,	// (0x0001ff48) popup_ai_links_title_window

0x94ee,	// (0x00022503) soft_indicator_pane_cp1_ParamLimits

0x94ee,	// (0x00022503) soft_indicator_pane_cp1

0xc146,	// (0x0002515b) ai_links_pane_g1

0xc14f,	// (0x00025164) grid_ai_links_pane

0xe2f9,	// (0x0002730e) ai_gene_pane_1

0xc134,	// (0x00025149) ai_gene_pane_2

0xc13d,	// (0x00025152) list_highlight_pane_cp4

0xe2dd,	// (0x000272f2) cell_ai_link_pane_ParamLimits

0xe2dd,	// (0x000272f2) cell_ai_link_pane

0xc12c,	// (0x00025141) cell_ai_link_pane_g1

0x70ed,	// (0x00020102) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00028960) cell_ai_link_pane_g

0x6d96,	// (0x0001fdab) grid_highlight_cp2

0x6d96,	// (0x0001fdab) bg_popup_sub_pane_cp1

0x6f4a,	// (0x0001ff5f) popup_ai_links_title_window_t1

0xc07e,	// (0x00025093) ai_gene_pane_1_g1_ParamLimits

0xc07e,	// (0x00025093) ai_gene_pane_1_g1

0xc08a,	// (0x0002509f) ai_gene_pane_1_g2_ParamLimits

0xc08a,	// (0x0002509f) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x00028956) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x00028956) ai_gene_pane_1_g

0xc097,	// (0x000250ac) ai_gene_pane_1_t1_ParamLimits

0xc097,	// (0x000250ac) ai_gene_pane_1_t1

0xc0cb,	// (0x000250e0) grid_ai_soft_ind_pane

0xc069,	// (0x0002507e) ai_gene_pane_2_t1_ParamLimits

0xc069,	// (0x0002507e) ai_gene_pane_2_t1

0x94fa,	// (0x0002250f) main_pane_empty_t1_ParamLimits

0x94fa,	// (0x0002250f) main_pane_empty_t1

0x9517,	// (0x0002252c) main_pane_empty_t2_ParamLimits

0x9517,	// (0x0002252c) main_pane_empty_t2

0x952f,	// (0x00022544) main_pane_empty_t3_ParamLimits

0x952f,	// (0x00022544) main_pane_empty_t3

0x9542,	// (0x00022557) main_pane_empty_t4_ParamLimits

0x9542,	// (0x00022557) main_pane_empty_t4

0x9555,	// (0x0002256a) main_pane_empty_t5_ParamLimits

0x9555,	// (0x0002256a) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x000285cd) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x000285cd) main_pane_empty_t

0x7b0b,	// (0x00020b20) bg_popup_window_pane_ParamLimits

0x7b0b,	// (0x00020b20) bg_popup_window_pane

0xbde3,	// (0x00024df8) find_popup_pane_cp2_ParamLimits

0xbde3,	// (0x00024df8) find_popup_pane_cp2

0xbdef,	// (0x00024e04) heading_pane_ParamLimits

0xbdef,	// (0x00024e04) heading_pane

0x6d96,	// (0x0001fdab) bg_popup_sub_pane

0xe271,	// (0x00027286) bg_popup_window_pane_g1_ParamLimits

0xe271,	// (0x00027286) bg_popup_window_pane_g1

0xe27d,	// (0x00027292) bg_popup_window_pane_g2_ParamLimits

0xe27d,	// (0x00027292) bg_popup_window_pane_g2

0xe289,	// (0x0002729e) bg_popup_window_pane_g3_ParamLimits

0xe289,	// (0x0002729e) bg_popup_window_pane_g3

0xe295,	// (0x000272aa) bg_popup_window_pane_g4_ParamLimits

0xe295,	// (0x000272aa) bg_popup_window_pane_g4

0xe2a1,	// (0x000272b6) bg_popup_window_pane_g5_ParamLimits

0xe2a1,	// (0x000272b6) bg_popup_window_pane_g5

0xe2ad,	// (0x000272c2) bg_popup_window_pane_g6_ParamLimits

0xe2ad,	// (0x000272c2) bg_popup_window_pane_g6

0xe2b9,	// (0x000272ce) bg_popup_window_pane_g7_ParamLimits

0xe2b9,	// (0x000272ce) bg_popup_window_pane_g7

0xe2c5,	// (0x000272da) bg_popup_window_pane_g8_ParamLimits

0xe2c5,	// (0x000272da) bg_popup_window_pane_g8

0xe2d1,	// (0x000272e6) bg_popup_window_pane_g9_ParamLimits

0xe2d1,	// (0x000272e6) bg_popup_window_pane_g9

0xbdc8,	// (0x00024ddd) bg_popup_window_pane_g10_ParamLimits

0xbdc8,	// (0x00024ddd) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x0002891e) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x0002891e) bg_popup_window_pane_g

0xbd7f,	// (0x00024d94) bg_popup_heading_pane_ParamLimits

0xbd7f,	// (0x00024d94) bg_popup_heading_pane

0xa1de,	// (0x000231f3) tabs_4_passive_pane_cp_srt_ParamLimits

0xa1de,	// (0x000231f3) tabs_4_passive_pane_cp_srt

0xa1f0,	// (0x00023205) tabs_4_passive_pane_srt_ParamLimits

0xbd93,	// (0x00024da8) heading_pane_g2

0xa1f0,	// (0x00023205) tabs_4_passive_pane_srt

0xaf67,	// (0x00023f7c) bg_passive_tab_pane_cp3_srt_ParamLimits

0xaf67,	// (0x00023f7c) bg_passive_tab_pane_cp3_srt

0xbd9b,	// (0x00024db0) heading_pane_t1_ParamLimits

0xbd9b,	// (0x00024db0) heading_pane_t1

0xbdb2,	// (0x00024dc7) heading_pane_t2_ParamLimits

0xbdb2,	// (0x00024dc7) heading_pane_t2

0x0001,

0xf904,	// (0x00028919) heading_pane_t_ParamLimits

0xf904,	// (0x00028919) heading_pane_t

0xb902,	// (0x00024917) bg_popup_heading_pane_g1

0xb993,	// (0x000249a8) bg_popup_heading_pane_g2

0xb99b,	// (0x000249b0) bg_popup_heading_pane_g3

0xb9a3,	// (0x000249b8) bg_popup_heading_pane_g4

0xb9ab,	// (0x000249c0) bg_popup_heading_pane_g5

0xb9b3,	// (0x000249c8) bg_popup_heading_pane_g6

0xb9bb,	// (0x000249d0) bg_popup_heading_pane_g7

0xb9c3,	// (0x000249d8) bg_popup_heading_pane_g8

0xb9cb,	// (0x000249e0) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x000288d5) bg_popup_heading_pane_g

0xb225,	// (0x0002423a) bg_popup_sub_pane_g1

0xb235,	// (0x0002424a) bg_popup_sub_pane_g2

0xb22d,	// (0x00024242) bg_popup_sub_pane_g3

0xb245,	// (0x0002425a) bg_popup_sub_pane_g4

0xb23d,	// (0x00024252) bg_popup_sub_pane_g5

0xb24d,	// (0x00024262) bg_popup_sub_pane_g6

0xb255,	// (0x0002426a) bg_popup_sub_pane_g7

0xb265,	// (0x0002427a) bg_popup_sub_pane_g8

0xb25d,	// (0x00024272) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x000288af) bg_popup_sub_pane_g

0x6de4,	// (0x0001fdf9) bg_popup_window_pane_cp5_ParamLimits

0x6de4,	// (0x0001fdf9) bg_popup_window_pane_cp5

0x6f67,	// (0x0001ff7c) popup_note_window_g1_ParamLimits

0x6f67,	// (0x0001ff7c) popup_note_window_g1

0x6f73,	// (0x0001ff88) popup_note_window_t1_ParamLimits

0x6f73,	// (0x0001ff88) popup_note_window_t1

0x6f89,	// (0x0001ff9e) popup_note_window_t2_ParamLimits

0x6f89,	// (0x0001ff9e) popup_note_window_t2

0x6f9f,	// (0x0001ffb4) popup_note_window_t3_ParamLimits

0x6f9f,	// (0x0001ffb4) popup_note_window_t3

0x6fb5,	// (0x0001ffca) popup_note_window_t4_ParamLimits

0x6fb5,	// (0x0001ffca) popup_note_window_t4

0x6fdd,	// (0x0001fff2) popup_note_window_t5_ParamLimits

0x6fdd,	// (0x0001fff2) popup_note_window_t5

0x0004,

0xf5c3,	// (0x000285d8) popup_note_window_t_ParamLimits

0xf5c3,	// (0x000285d8) popup_note_window_t

0x7001,	// (0x00020016) bg_popup_window_pane_cp6_ParamLimits

0x7001,	// (0x00020016) bg_popup_window_pane_cp6

0xb87e,	// (0x00024893) popup_note_image_window_g1_ParamLimits

0xb87e,	// (0x00024893) popup_note_image_window_g1

0xb88a,	// (0x0002489f) popup_note_image_window_g2_ParamLimits

0xb88a,	// (0x0002489f) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x000288a3) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x000288a3) popup_note_image_window_g

0xb8a3,	// (0x000248b8) popup_note_image_window_t1_ParamLimits

0xb8a3,	// (0x000248b8) popup_note_image_window_t1

0xb8bc,	// (0x000248d1) popup_note_image_window_t2_ParamLimits

0xb8bc,	// (0x000248d1) popup_note_image_window_t2

0xb8d5,	// (0x000248ea) popup_note_image_window_t3_ParamLimits

0xb8d5,	// (0x000248ea) popup_note_image_window_t3

0x0002,

0xf893,	// (0x000288a8) popup_note_image_window_t_ParamLimits

0xf893,	// (0x000288a8) popup_note_image_window_t

0xb769,	// (0x0002477e) bg_popup_window_pane_cp7_ParamLimits

0xb769,	// (0x0002477e) bg_popup_window_pane_cp7

0xb799,	// (0x000247ae) popup_note_wait_window_g1_ParamLimits

0xb799,	// (0x000247ae) popup_note_wait_window_g1

0xb7a5,	// (0x000247ba) popup_note_wait_window_g2_ParamLimits

0xb7a5,	// (0x000247ba) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x00028891) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x00028891) popup_note_wait_window_g

0xb7bd,	// (0x000247d2) popup_note_wait_window_t1_ParamLimits

0xb7bd,	// (0x000247d2) popup_note_wait_window_t1

0xb7e4,	// (0x000247f9) popup_note_wait_window_t2_ParamLimits

0xb7e4,	// (0x000247f9) popup_note_wait_window_t2

0xb801,	// (0x00024816) popup_note_wait_window_t3_ParamLimits

0xb801,	// (0x00024816) popup_note_wait_window_t3

0xb814,	// (0x00024829) popup_note_wait_window_t4_ParamLimits

0xb814,	// (0x00024829) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x00028898) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x00028898) popup_note_wait_window_t

0xb839,	// (0x0002484e) wait_bar_pane_ParamLimits

0xb839,	// (0x0002484e) wait_bar_pane

0x6d96,	// (0x0001fdab) wait_anim_pane

0x6d96,	// (0x0001fdab) wait_border_pane

0x6d14,	// (0x0001fd29) wait_anim_pane_g1

0x6d14,	// (0x0001fd29) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00028757) wait_anim_pane_g

0xb719,	// (0x0002472e) wait_border_pane_g1

0xb722,	// (0x00024737) wait_border_pane_g2

0xb72b,	// (0x00024740) wait_border_pane_g3

0x0002,

0xf875,	// (0x0002888a) wait_border_pane_g

0xb67b,	// (0x00024690) bg_popup_window_pane_cp16_ParamLimits

0xb67b,	// (0x00024690) bg_popup_window_pane_cp16

0xb689,	// (0x0002469e) indicator_popup_pane_cp4_ParamLimits

0xb689,	// (0x0002469e) indicator_popup_pane_cp4

0xb69d,	// (0x000246b2) popup_query_data_window_t1_ParamLimits

0xb69d,	// (0x000246b2) popup_query_data_window_t1

0xb6af,	// (0x000246c4) popup_query_data_window_t2_ParamLimits

0xb6af,	// (0x000246c4) popup_query_data_window_t2

0xb6c8,	// (0x000246dd) popup_query_data_window_t3_ParamLimits

0xb6c8,	// (0x000246dd) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x00028883) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x00028883) popup_query_data_window_t

0xb6e2,	// (0x000246f7) query_popup_data_pane_ParamLimits

0xb6e2,	// (0x000246f7) query_popup_data_pane

0xb6f6,	// (0x0002470b) query_popup_data_pane_cp1_ParamLimits

0xb6f6,	// (0x0002470b) query_popup_data_pane_cp1

0x7001,	// (0x00020016) bg_popup_window_pane_cp10_ParamLimits

0x7001,	// (0x00020016) bg_popup_window_pane_cp10

0xb5de,	// (0x000245f3) indicator_popup_pane_ParamLimits

0xb5de,	// (0x000245f3) indicator_popup_pane

0x7058,	// (0x0002006d) popup_query_code_window_t1_ParamLimits

0x7058,	// (0x0002006d) popup_query_code_window_t1

0xb5f6,	// (0x0002460b) popup_query_code_window_t2_ParamLimits

0xb5f6,	// (0x0002460b) popup_query_code_window_t2

0xb634,	// (0x00024649) popup_query_code_window_t3_ParamLimits

0xb634,	// (0x00024649) popup_query_code_window_t3

0x0002,

0xf867,	// (0x0002887c) popup_query_code_window_t_ParamLimits

0xf867,	// (0x0002887c) popup_query_code_window_t

0xb663,	// (0x00024678) query_popup_pane_ParamLimits

0xb663,	// (0x00024678) query_popup_pane

0x7001,	// (0x00020016) bg_popup_window_pane_cp15_ParamLimits

0x7001,	// (0x00020016) bg_popup_window_pane_cp15

0x701f,	// (0x00020034) indicator_popup_pane_cp1_ParamLimits

0x701f,	// (0x00020034) indicator_popup_pane_cp1

0x7032,	// (0x00020047) indicator_popup_pane_cp2_ParamLimits

0x7032,	// (0x00020047) indicator_popup_pane_cp2

0x7045,	// (0x0002005a) popup_query_data_code_window_g1_ParamLimits

0x7045,	// (0x0002005a) popup_query_data_code_window_g1

0x7058,	// (0x0002006d) popup_query_data_code_window_t1_ParamLimits

0x7058,	// (0x0002006d) popup_query_data_code_window_t1

0x706a,	// (0x0002007f) popup_query_data_code_window_t2_ParamLimits

0x706a,	// (0x0002007f) popup_query_data_code_window_t2

0x707c,	// (0x00020091) popup_query_data_code_window_t3_ParamLimits

0x707c,	// (0x00020091) popup_query_data_code_window_t3

0x7092,	// (0x000200a7) popup_query_data_code_window_t4_ParamLimits

0x7092,	// (0x000200a7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x000285e3) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x000285e3) popup_query_data_code_window_t

0x9eb7,	// (0x00022ecc) list_single_midp_graphic_pane_g3

0x70aa,	// (0x000200bf) query_popup_data_pane_cp2_ParamLimits

0x70bd,	// (0x000200d2) query_popup_pane_cp2_ParamLimits

0x70bd,	// (0x000200d2) query_popup_pane_cp2

0x6d96,	// (0x0001fdab) bg_popup_window_pane_cp11

0xb5b2,	// (0x000245c7) heading_pane_cp5

0x7149,	// (0x0002015e) listscroll_popup_info_pane

0x6d96,	// (0x0001fdab) input_focus_pane_cp3

0x70d0,	// (0x000200e5) query_popup_pane_t1

0x70de,	// (0x000200f3) list_popup_info_pane_ParamLimits

0x70de,	// (0x000200f3) list_popup_info_pane

0x70ed,	// (0x00020102) listscroll_popup_info_pane_g1

0x70f5,	// (0x0002010a) scroll_pane_cp7

0x70fd,	// (0x00020112) popup_info_list_pane_t1_ParamLimits

0x70fd,	// (0x00020112) popup_info_list_pane_t1

0x7117,	// (0x0002012c) popup_info_list_pane_t2_ParamLimits

0x7117,	// (0x0002012c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x000285ec) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x000285ec) popup_info_list_pane_t

0x6d96,	// (0x0001fdab) bg_popup_window_pane_cp12

0xc453,	// (0x00025468) find_popup_pane

0x6dfa,	// (0x0001fe0f) bg_popup_window_pane_cp3

0x7131,	// (0x00020146) heading_pane_cp3

0x713d,	// (0x00020152) listscroll_popup_graphic_pane

0x6d96,	// (0x0001fdab) bg_popup_window_pane_cp4

0x95b8,	// (0x000225cd) heading_pane_cp4

0x7149,	// (0x0002015e) listscroll_popup_colour_pane

0x7151,	// (0x00020166) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7151,	// (0x00020166) cell_large_graphic_colour_none_popup_pane

0x95c0,	// (0x000225d5) grid_large_graphic_colour_popup_pane_ParamLimits

0x95c0,	// (0x000225d5) grid_large_graphic_colour_popup_pane

0x95dc,	// (0x000225f1) listscroll_popup_colour_pane_g1_ParamLimits

0x95dc,	// (0x000225f1) listscroll_popup_colour_pane_g1

0x95f3,	// (0x00022608) listscroll_popup_colour_pane_g2_ParamLimits

0x95f3,	// (0x00022608) listscroll_popup_colour_pane_g2

0x7161,	// (0x00020176) listscroll_popup_colour_pane_g3_ParamLimits

0x7161,	// (0x00020176) listscroll_popup_colour_pane_g3

0x9607,	// (0x0002261c) listscroll_popup_colour_pane_g4_ParamLimits

0x9607,	// (0x0002261c) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x000285f1) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x000285f1) listscroll_popup_colour_pane_g

0x7171,	// (0x00020186) scroll_pane_cp6_ParamLimits

0x7171,	// (0x00020186) scroll_pane_cp6

0x9616,	// (0x0002262b) cell_large_graphic_colour_popup_pane_ParamLimits

0x9616,	// (0x0002262b) cell_large_graphic_colour_popup_pane

0x7183,	// (0x00020198) cell_large_graphic_colour_none_popup_pane_t1

0x6d96,	// (0x0001fdab) grid_highlight_pane_cp5

0x7192,	// (0x000201a7) cell_large_graphic_colour_popup_pane_g1

0x719a,	// (0x000201af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x000285fa) cell_large_graphic_colour_popup_pane_g

0x71a2,	// (0x000201b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x71ab,	// (0x000201c0) grid_highlight_pane_cp4

0x71b3,	// (0x000201c8) bg_popup_window_pane_cp8_ParamLimits

0x71b3,	// (0x000201c8) bg_popup_window_pane_cp8

0x71ce,	// (0x000201e3) popup_snote_single_text_window_g1_ParamLimits

0x71ce,	// (0x000201e3) popup_snote_single_text_window_g1

0x71e0,	// (0x000201f5) popup_snote_single_text_window_t1_ParamLimits

0x71e0,	// (0x000201f5) popup_snote_single_text_window_t1

0x71f3,	// (0x00020208) popup_snote_single_text_window_t2_ParamLimits

0x71f3,	// (0x00020208) popup_snote_single_text_window_t2

0x7206,	// (0x0002021b) popup_snote_single_text_window_t3_ParamLimits

0x7206,	// (0x0002021b) popup_snote_single_text_window_t3

0x723f,	// (0x00020254) popup_snote_single_text_window_t4_ParamLimits

0x723f,	// (0x00020254) popup_snote_single_text_window_t4

0x7273,	// (0x00020288) popup_snote_single_text_window_t5_ParamLimits

0x7273,	// (0x00020288) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x000285ff) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x000285ff) popup_snote_single_text_window_t

0x72a2,	// (0x000202b7) bg_popup_window_pane_cp9_ParamLimits

0x72a2,	// (0x000202b7) bg_popup_window_pane_cp9

0x71ce,	// (0x000201e3) popup_snote_single_graphic_window_g1_ParamLimits

0x71ce,	// (0x000201e3) popup_snote_single_graphic_window_g1

0x72b0,	// (0x000202c5) popup_snote_single_graphic_window_g2_ParamLimits

0x72b0,	// (0x000202c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002860a) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002860a) popup_snote_single_graphic_window_g

0x72bc,	// (0x000202d1) popup_snote_single_graphic_window_t1_ParamLimits

0x72bc,	// (0x000202d1) popup_snote_single_graphic_window_t1

0x72cf,	// (0x000202e4) popup_snote_single_graphic_window_t2_ParamLimits

0x72cf,	// (0x000202e4) popup_snote_single_graphic_window_t2

0x7206,	// (0x0002021b) popup_snote_single_graphic_window_t3_ParamLimits

0x7206,	// (0x0002021b) popup_snote_single_graphic_window_t3

0x723f,	// (0x00020254) popup_snote_single_graphic_window_t4_ParamLimits

0x723f,	// (0x00020254) popup_snote_single_graphic_window_t4

0x7273,	// (0x00020288) popup_snote_single_graphic_window_t5_ParamLimits

0x7273,	// (0x00020288) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002860f) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002860f) popup_snote_single_graphic_window_t

0xe562,	// (0x00027577) grid_graphic_popup_pane_ParamLimits

0xe562,	// (0x00027577) grid_graphic_popup_pane

0xe585,	// (0x0002759a) listscroll_popup_graphic_pane_g1_ParamLimits

0xe585,	// (0x0002759a) listscroll_popup_graphic_pane_g1

0xe599,	// (0x000275ae) listscroll_popup_graphic_pane_g2_ParamLimits

0xe599,	// (0x000275ae) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x000289f9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x000289f9) listscroll_popup_graphic_pane_g

0xc40b,	// (0x00025420) scroll_pane_cp5

0xe51b,	// (0x00027530) cell_graphic_popup_pane_ParamLimits

0xe51b,	// (0x00027530) cell_graphic_popup_pane

0xc3d6,	// (0x000253eb) cell_graphic_popup_pane_g1

0xc3de,	// (0x000253f3) cell_graphic_popup_pane_g2

0x71a2,	// (0x000201b7) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x000289f2) cell_graphic_popup_pane_g

0xc3e7,	// (0x000253fc) cell_graphic_popup_pane_t2

0x71ab,	// (0x000201c0) grid_highlight_pane_cp3

0x72f4,	// (0x00020309) list_gen_pane_ParamLimits

0x72f4,	// (0x00020309) list_gen_pane

0x731d,	// (0x00020332) scroll_pane

0xe4ec,	// (0x00027501) bg_list_pane_g1_ParamLimits

0xe4ec,	// (0x00027501) bg_list_pane_g1

0xc385,	// (0x0002539a) bg_list_pane_g2_ParamLimits

0xc385,	// (0x0002539a) bg_list_pane_g2

0xc398,	// (0x000253ad) bg_list_pane_g3_ParamLimits

0xc398,	// (0x000253ad) bg_list_pane_g3

0xc3aa,	// (0x000253bf) bg_list_pane_g4_ParamLimits

0xc3aa,	// (0x000253bf) bg_list_pane_g4

0xe503,	// (0x00027518) bg_list_pane_g5_ParamLimits

0xe503,	// (0x00027518) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x000289e7) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x000289e7) bg_list_pane_g

0xe49c,	// (0x000274b1) list_double2_graphic_large_graphic_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double2_graphic_large_graphic_pane

0xe49c,	// (0x000274b1) list_double2_graphic_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double2_graphic_pane

0xe49c,	// (0x000274b1) list_double2_large_graphic_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double2_large_graphic_pane

0xe49c,	// (0x000274b1) list_double2_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double2_pane

0xe49c,	// (0x000274b1) list_double_graphic_heading_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_graphic_heading_pane

0xe49c,	// (0x000274b1) list_double_graphic_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_graphic_pane

0xe49c,	// (0x000274b1) list_double_heading_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_heading_pane

0xe49c,	// (0x000274b1) list_double_large_graphic_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_large_graphic_pane

0xe49c,	// (0x000274b1) list_double_number_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_number_pane

0xe49c,	// (0x000274b1) list_double_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_pane

0xe49c,	// (0x000274b1) list_double_time_pane_ParamLimits

0xe49c,	// (0x000274b1) list_double_time_pane

0xe49c,	// (0x000274b1) list_setting_number_pane_ParamLimits

0xe49c,	// (0x000274b1) list_setting_number_pane

0xe49c,	// (0x000274b1) list_setting_pane_ParamLimits

0xe49c,	// (0x000274b1) list_setting_pane

0xd19a,	// (0x000261af) list_single_2graphic_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_2graphic_pane

0xd19a,	// (0x000261af) list_single_graphic_heading_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_graphic_heading_pane

0xd19a,	// (0x000261af) list_single_graphic_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_graphic_pane

0xd19a,	// (0x000261af) list_single_heading_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_heading_pane

0xd1b1,	// (0x000261c6) list_single_large_graphic_pane_ParamLimits

0xd1b1,	// (0x000261c6) list_single_large_graphic_pane

0xd19a,	// (0x000261af) list_single_number_heading_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_number_heading_pane

0xd19a,	// (0x000261af) list_single_number_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_number_pane

0xd19a,	// (0x000261af) list_single_pane_ParamLimits

0xd19a,	// (0x000261af) list_single_pane

0x6d96,	// (0x0001fdab) list_highlight_pane_cp1

0xc976,	// (0x0002598b) list_single_pane_g1_ParamLimits

0xc976,	// (0x0002598b) list_single_pane_g1

0xc982,	// (0x00025997) list_single_pane_g2_ParamLimits

0xc982,	// (0x00025997) list_single_pane_g2

0x0001,

0xf60c,	// (0x00028621) list_single_pane_g_ParamLimits

0xf60c,	// (0x00028621) list_single_pane_g

0xd15a,	// (0x0002616f) list_single_pane_t1_ParamLimits

0xd15a,	// (0x0002616f) list_single_pane_t1

0xc976,	// (0x0002598b) list_single_number_pane_g1_ParamLimits

0xc976,	// (0x0002598b) list_single_number_pane_g1

0xc982,	// (0x00025997) list_single_number_pane_g2_ParamLimits

0xc982,	// (0x00025997) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00028621) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00028621) list_single_number_pane_g

0xc98e,	// (0x000259a3) list_single_number_pane_t1_ParamLimits

0xc98e,	// (0x000259a3) list_single_number_pane_t1

0xd11b,	// (0x00026130) list_single_number_pane_t2_ParamLimits

0xd11b,	// (0x00026130) list_single_number_pane_t2

0x0001,

0xf993,	// (0x000289a8) list_single_number_pane_t_ParamLimits

0xf993,	// (0x000289a8) list_single_number_pane_t

0xc96a,	// (0x0002597f) list_single_graphic_pane_g1_ParamLimits

0xc96a,	// (0x0002597f) list_single_graphic_pane_g1

0xc976,	// (0x0002598b) list_single_graphic_pane_g2_ParamLimits

0xc976,	// (0x0002598b) list_single_graphic_pane_g2

0xc982,	// (0x00025997) list_single_graphic_pane_g3_ParamLimits

0xc982,	// (0x00025997) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002861a) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002861a) list_single_graphic_pane_g

0xc98e,	// (0x000259a3) list_single_graphic_pane_t1_ParamLimits

0xc98e,	// (0x000259a3) list_single_graphic_pane_t1

0xc976,	// (0x0002598b) list_single_heading_pane_g1_ParamLimits

0xc976,	// (0x0002598b) list_single_heading_pane_g1

0xc982,	// (0x00025997) list_single_heading_pane_g2_ParamLimits

0xc982,	// (0x00025997) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00028621) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00028621) list_single_heading_pane_g

0xc9a4,	// (0x000259b9) list_single_heading_pane_t1_ParamLimits

0xc9a4,	// (0x000259b9) list_single_heading_pane_t1

0xc9ba,	// (0x000259cf) list_single_heading_pane_t2_ParamLimits

0xc9ba,	// (0x000259cf) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00028626) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00028626) list_single_heading_pane_t

0xc976,	// (0x0002598b) list_single_number_heading_pane_g1_ParamLimits

0xc976,	// (0x0002598b) list_single_number_heading_pane_g1

0xc982,	// (0x00025997) list_single_number_heading_pane_g2_ParamLimits

0xc982,	// (0x00025997) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00028621) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00028621) list_single_number_heading_pane_g

0xc9a4,	// (0x000259b9) list_single_number_heading_pane_t1_ParamLimits

0xc9a4,	// (0x000259b9) list_single_number_heading_pane_t1

0xc9cc,	// (0x000259e1) list_single_number_heading_pane_t2_ParamLimits

0xc9cc,	// (0x000259e1) list_single_number_heading_pane_t2

0xc9de,	// (0x000259f3) list_single_number_heading_pane_t3_ParamLimits

0xc9de,	// (0x000259f3) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002862b) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002862b) list_single_number_heading_pane_t

0xc96a,	// (0x0002597f) list_single_graphic_heading_pane_g1_ParamLimits

0xc96a,	// (0x0002597f) list_single_graphic_heading_pane_g1

0xc9f0,	// (0x00025a05) list_single_graphic_heading_pane_g4_ParamLimits

0xc9f0,	// (0x00025a05) list_single_graphic_heading_pane_g4

0xc982,	// (0x00025997) list_single_graphic_heading_pane_g5_ParamLimits

0xc982,	// (0x00025997) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00028632) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00028632) list_single_graphic_heading_pane_g

0xc9a4,	// (0x000259b9) list_single_graphic_heading_pane_t1_ParamLimits

0xc9a4,	// (0x000259b9) list_single_graphic_heading_pane_t1

0xc9ff,	// (0x00025a14) list_single_graphic_heading_pane_t2_ParamLimits

0xc9ff,	// (0x00025a14) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00028639) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00028639) list_single_graphic_heading_pane_t

0xca11,	// (0x00025a26) list_single_large_graphic_pane_g1_ParamLimits

0xca11,	// (0x00025a26) list_single_large_graphic_pane_g1

0xca1d,	// (0x00025a32) list_single_large_graphic_pane_g2_ParamLimits

0xca1d,	// (0x00025a32) list_single_large_graphic_pane_g2

0xca29,	// (0x00025a3e) list_single_large_graphic_pane_g3_ParamLimits

0xca29,	// (0x00025a3e) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002863e) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002863e) list_single_large_graphic_pane_g

0xb722,	// (0x00024737) wait_border_pane_g2_copy1

0xca35,	// (0x00025a4a) list_single_large_graphic_pane_g4_cp2

0xca3d,	// (0x00025a52) list_single_large_graphic_pane_t1_ParamLimits

0xca3d,	// (0x00025a52) list_single_large_graphic_pane_t1

0xca53,	// (0x00025a68) list_double_pane_g1_ParamLimits

0xca53,	// (0x00025a68) list_double_pane_g1

0xca5f,	// (0x00025a74) list_double_pane_g2_ParamLimits

0xca5f,	// (0x00025a74) list_double_pane_g2

0x0001,

0xf630,	// (0x00028645) list_double_pane_g_ParamLimits

0xf630,	// (0x00028645) list_double_pane_g

0xca6b,	// (0x00025a80) list_double_pane_t1_ParamLimits

0xca6b,	// (0x00025a80) list_double_pane_t1

0xca81,	// (0x00025a96) list_double_pane_t2_ParamLimits

0xca81,	// (0x00025a96) list_double_pane_t2

0x0001,

0xf635,	// (0x0002864a) list_double_pane_t_ParamLimits

0xf635,	// (0x0002864a) list_double_pane_t

0xca93,	// (0x00025aa8) list_double2_pane_g1_ParamLimits

0xca93,	// (0x00025aa8) list_double2_pane_g1

0xca5f,	// (0x00025a74) list_double2_pane_g2_ParamLimits

0xca5f,	// (0x00025a74) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002864f) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002864f) list_double2_pane_g

0xca6b,	// (0x00025a80) list_double2_pane_t1_ParamLimits

0xca6b,	// (0x00025a80) list_double2_pane_t1

0xcaa2,	// (0x00025ab7) list_double2_pane_t2_ParamLimits

0xcaa2,	// (0x00025ab7) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00028654) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00028654) list_double2_pane_t

0xca53,	// (0x00025a68) list_double_number_pane_g1_ParamLimits

0xca53,	// (0x00025a68) list_double_number_pane_g1

0xca5f,	// (0x00025a74) list_double_number_pane_g2_ParamLimits

0xca5f,	// (0x00025a74) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00028645) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00028645) list_double_number_pane_g

0xcab4,	// (0x00025ac9) list_double_number_pane_t1_ParamLimits

0xcab4,	// (0x00025ac9) list_double_number_pane_t1

0xcac6,	// (0x00025adb) list_double_number_pane_t2_ParamLimits

0xcac6,	// (0x00025adb) list_double_number_pane_t2

0xcadc,	// (0x00025af1) list_double_number_pane_t3_ParamLimits

0xcadc,	// (0x00025af1) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00028659) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00028659) list_double_number_pane_t

0xcaee,	// (0x00025b03) list_double_graphic_pane_g1_ParamLimits

0xcaee,	// (0x00025b03) list_double_graphic_pane_g1

0xcafa,	// (0x00025b0f) list_double_graphic_pane_g2_ParamLimits

0xcafa,	// (0x00025b0f) list_double_graphic_pane_g2

0xcb09,	// (0x00025b1e) list_double_graphic_pane_g3_ParamLimits

0xcb09,	// (0x00025b1e) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00028660) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00028660) list_double_graphic_pane_g

0xcb21,	// (0x00025b36) list_double_graphic_pane_t1_ParamLimits

0xcb21,	// (0x00025b36) list_double_graphic_pane_t1

0xcb37,	// (0x00025b4c) list_double_graphic_pane_t2_ParamLimits

0xcb37,	// (0x00025b4c) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00028669) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00028669) list_double_graphic_pane_t

0xcaee,	// (0x00025b03) list_double2_graphic_pane_g1_ParamLimits

0xcaee,	// (0x00025b03) list_double2_graphic_pane_g1

0xcb49,	// (0x00025b5e) list_double2_graphic_pane_g2_ParamLimits

0xcb49,	// (0x00025b5e) list_double2_graphic_pane_g2

0xcb55,	// (0x00025b6a) list_double2_graphic_pane_g3_ParamLimits

0xcb55,	// (0x00025b6a) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002866e) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002866e) list_double2_graphic_pane_g

0xcac6,	// (0x00025adb) list_double2_graphic_pane_t1_ParamLimits

0xcac6,	// (0x00025adb) list_double2_graphic_pane_t1

0xcb61,	// (0x00025b76) list_double2_graphic_pane_t2_ParamLimits

0xcb61,	// (0x00025b76) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00028675) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00028675) list_double2_graphic_pane_t

0xcb73,	// (0x00025b88) list_double_large_graphic_pane_g1_ParamLimits

0xcb73,	// (0x00025b88) list_double_large_graphic_pane_g1

0xca93,	// (0x00025aa8) list_double_large_graphic_pane_g2_ParamLimits

0xca93,	// (0x00025aa8) list_double_large_graphic_pane_g2

0xca5f,	// (0x00025a74) list_double_large_graphic_pane_g3_ParamLimits

0xca5f,	// (0x00025a74) list_double_large_graphic_pane_g3

0xcb9c,	// (0x00025bb1) list_double_large_graphic_pane_g4_ParamLimits

0xcb9c,	// (0x00025bb1) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002867a) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002867a) list_double_large_graphic_pane_g

0xcbc2,	// (0x00025bd7) list_double_large_graphic_pane_t1_ParamLimits

0xcbc2,	// (0x00025bd7) list_double_large_graphic_pane_t1

0xcbdb,	// (0x00025bf0) list_double_large_graphic_pane_t2_ParamLimits

0xcbdb,	// (0x00025bf0) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00028685) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00028685) list_double_large_graphic_pane_t

0xcbed,	// (0x00025c02) list_double2_large_graphic_pane_g1_ParamLimits

0xcbed,	// (0x00025c02) list_double2_large_graphic_pane_g1

0xca93,	// (0x00025aa8) list_double2_large_graphic_pane_g2_ParamLimits

0xca93,	// (0x00025aa8) list_double2_large_graphic_pane_g2

0xca5f,	// (0x00025a74) list_double2_large_graphic_pane_g3_ParamLimits

0xca5f,	// (0x00025a74) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002868a) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002868a) list_double2_large_graphic_pane_g

0xcbf9,	// (0x00025c0e) list_double2_large_graphic_pane_t1_ParamLimits

0xcbf9,	// (0x00025c0e) list_double2_large_graphic_pane_t1

0xcc0f,	// (0x00025c24) list_double2_large_graphic_pane_t2_ParamLimits

0xcc0f,	// (0x00025c24) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00028691) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00028691) list_double2_large_graphic_pane_t

0xcc21,	// (0x00025c36) list_double_heading_pane_g1_ParamLimits

0xcc21,	// (0x00025c36) list_double_heading_pane_g1

0xcc30,	// (0x00025c45) list_double_heading_pane_g2_ParamLimits

0xcc30,	// (0x00025c45) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00028696) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00028696) list_double_heading_pane_g

0xcc3c,	// (0x00025c51) list_double_heading_pane_t1_ParamLimits

0xcc3c,	// (0x00025c51) list_double_heading_pane_t1

0xcc52,	// (0x00025c67) list_double_heading_pane_t2_ParamLimits

0xcc52,	// (0x00025c67) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002869b) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002869b) list_double_heading_pane_t

0xcc64,	// (0x00025c79) list_double_graphic_heading_pane_g1_ParamLimits

0xcc64,	// (0x00025c79) list_double_graphic_heading_pane_g1

0xcc21,	// (0x00025c36) list_double_graphic_heading_pane_g2_ParamLimits

0xcc21,	// (0x00025c36) list_double_graphic_heading_pane_g2

0xcc30,	// (0x00025c45) list_double_graphic_heading_pane_g3_ParamLimits

0xcc30,	// (0x00025c45) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000286a0) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000286a0) list_double_graphic_heading_pane_g

0xcc70,	// (0x00025c85) list_double_graphic_heading_pane_t1_ParamLimits

0xcc70,	// (0x00025c85) list_double_graphic_heading_pane_t1

0xcc86,	// (0x00025c9b) list_double_graphic_heading_pane_t2_ParamLimits

0xcc86,	// (0x00025c9b) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000286a7) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000286a7) list_double_graphic_heading_pane_t

0xca93,	// (0x00025aa8) list_double_time_pane_g1_ParamLimits

0xca93,	// (0x00025aa8) list_double_time_pane_g1

0xca5f,	// (0x00025a74) list_double_time_pane_g2_ParamLimits

0xca5f,	// (0x00025a74) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0002864f) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0002864f) list_double_time_pane_g

0xcbf9,	// (0x00025c0e) list_double_time_pane_t1_ParamLimits

0xcbf9,	// (0x00025c0e) list_double_time_pane_t1

0xcc98,	// (0x00025cad) list_double_time_pane_t2_ParamLimits

0xcc98,	// (0x00025cad) list_double_time_pane_t2

0xccaa,	// (0x00025cbf) list_double_time_pane_t3_ParamLimits

0xccaa,	// (0x00025cbf) list_double_time_pane_t3

0xccbc,	// (0x00025cd1) list_double_time_pane_t4_ParamLimits

0xccbc,	// (0x00025cd1) list_double_time_pane_t4

0x0003,

0xf697,	// (0x000286ac) list_double_time_pane_t_ParamLimits

0xf697,	// (0x000286ac) list_double_time_pane_t

0xccce,	// (0x00025ce3) list_setting_pane_g1_ParamLimits

0xccce,	// (0x00025ce3) list_setting_pane_g1

0xccda,	// (0x00025cef) list_setting_pane_g2_ParamLimits

0xccda,	// (0x00025cef) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x000286b5) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x000286b5) list_setting_pane_g

0xcce6,	// (0x00025cfb) list_setting_pane_t1_ParamLimits

0xcce6,	// (0x00025cfb) list_setting_pane_t1

0xccfd,	// (0x00025d12) list_setting_pane_t2_ParamLimits

0xccfd,	// (0x00025d12) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x000286ba) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x000286ba) list_setting_pane_t

0xcd3a,	// (0x00025d4f) set_value_pane_cp_ParamLimits

0xcd3a,	// (0x00025d4f) set_value_pane_cp

0xcd46,	// (0x00025d5b) list_setting_number_pane_g1_ParamLimits

0xcd46,	// (0x00025d5b) list_setting_number_pane_g1

0xcd52,	// (0x00025d67) list_setting_number_pane_g2_ParamLimits

0xcd52,	// (0x00025d67) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x000286c1) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x000286c1) list_setting_number_pane_g

0xcd5e,	// (0x00025d73) list_setting_number_pane_t1_ParamLimits

0xcd5e,	// (0x00025d73) list_setting_number_pane_t1

0xcd70,	// (0x00025d85) list_setting_number_pane_t2_ParamLimits

0xcd70,	// (0x00025d85) list_setting_number_pane_t2

0xcd87,	// (0x00025d9c) list_setting_number_pane_t3_ParamLimits

0xcd87,	// (0x00025d9c) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x000286c6) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x000286c6) list_setting_number_pane_t

0xcd3a,	// (0x00025d4f) set_value_pane_ParamLimits

0xcd3a,	// (0x00025d4f) set_value_pane

0x7a0f,	// (0x00020a24) bg_set_opt_pane_ParamLimits

0x7a0f,	// (0x00020a24) bg_set_opt_pane

0xcdc8,	// (0x00025ddd) set_value_pane_t1

0x7a30,	// (0x00020a45) slider_set_pane_cp3

0x7a39,	// (0x00020a4e) volume_small_pane_cp

0x7a42,	// (0x00020a57) list_form_gen_pane

0x7341,	// (0x00020356) scroll_pane_cp8

0xcde6,	// (0x00025dfb) form_field_data_pane_ParamLimits

0xcde6,	// (0x00025dfb) form_field_data_pane

0xce06,	// (0x00025e1b) form_field_data_wide_pane_ParamLimits

0xce06,	// (0x00025e1b) form_field_data_wide_pane

0xce25,	// (0x00025e3a) form_field_popup_pane_ParamLimits

0xce25,	// (0x00025e3a) form_field_popup_pane

0xce3d,	// (0x00025e52) form_field_popup_wide_pane_ParamLimits

0xce3d,	// (0x00025e52) form_field_popup_wide_pane

0xce54,	// (0x00025e69) form_field_slider_pane_ParamLimits

0xce54,	// (0x00025e69) form_field_slider_pane

0xce67,	// (0x00025e7c) form_field_slider_wide_pane_ParamLimits

0xce67,	// (0x00025e7c) form_field_slider_wide_pane

0x7a4b,	// (0x00020a60) data_form_pane

0x963d,	// (0x00022652) form_field_data_pane_t1

0x7a57,	// (0x00020a6c) input_focus_pane

0x7a65,	// (0x00020a7a) data_form_wide_pane

0xce8e,	// (0x00025ea3) form_field_data_wide_pane_t1

0x71c0,	// (0x000201d5) input_focus_pane_cp6

0xceb0,	// (0x00025ec5) form_field_popup_pane_t1

0x7a57,	// (0x00020a6c) input_focus_pane_cp7

0x7a4b,	// (0x00020a60) list_form_pane

0xced0,	// (0x00025ee5) form_field_popup_wide_pane_t1

0x7a57,	// (0x00020a6c) input_focus_pane_cp8

0x7a85,	// (0x00020a9a) list_form_wide_pane

0xceed,	// (0x00025f02) form_field_slider_pane_t1_ParamLimits

0xceed,	// (0x00025f02) form_field_slider_pane_t1

0xceff,	// (0x00025f14) form_field_slider_pane_t2_ParamLimits

0xceff,	// (0x00025f14) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x000286d6) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x000286d6) form_field_slider_pane_t

0x6de4,	// (0x0001fdf9) input_focus_pane_cp9_ParamLimits

0x6de4,	// (0x0001fdf9) input_focus_pane_cp9

0xcf11,	// (0x00025f26) slider_cont_pane_ParamLimits

0xcf11,	// (0x00025f26) slider_cont_pane

0x7a94,	// (0x00020aa9) form_field_slider_wide_pane_t1_ParamLimits

0x7a94,	// (0x00020aa9) form_field_slider_wide_pane_t1

0xcf25,	// (0x00025f3a) form_field_slider_wide_pane_t2_ParamLimits

0xcf25,	// (0x00025f3a) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x000286db) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x000286db) form_field_slider_wide_pane_t

0x6de4,	// (0x0001fdf9) input_focus_pane_cp10_ParamLimits

0x6de4,	// (0x0001fdf9) input_focus_pane_cp10

0xcf37,	// (0x00025f4c) slider_cont_pane_cp1_ParamLimits

0xcf37,	// (0x00025f4c) slider_cont_pane_cp1

0xcf4d,	// (0x00025f62) slider_form_pane_cp

0x7aa6,	// (0x00020abb) input_focus_pane_g1

0x7aae,	// (0x00020ac3) input_focus_pane_g2

0x7ab6,	// (0x00020acb) input_focus_pane_g3

0x7abe,	// (0x00020ad3) input_focus_pane_g4

0x7ac6,	// (0x00020adb) input_focus_pane_g5

0x7ace,	// (0x00020ae3) input_focus_pane_g6

0x7ad6,	// (0x00020aeb) input_focus_pane_g7

0x7ade,	// (0x00020af3) input_focus_pane_g8

0x7ae6,	// (0x00020afb) input_focus_pane_g9

0x6d14,	// (0x0001fd29) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x000286e0) input_focus_pane_g

0xb72b,	// (0x00024740) wait_border_pane_g3_copy1

0xcf55,	// (0x00025f6a) data_form_pane_t1

0x6d14,	// (0x0001fd29) wait_anim_pane_g1_copy1

0xd12d,	// (0x00026142) data_form_wide_pane_t1

0xcf6f,	// (0x00025f84) list_form_graphic_pane_cp_ParamLimits

0xcf6f,	// (0x00025f84) list_form_graphic_pane_cp

0xc32b,	// (0x00025340) slider_form_pane_g1

0xc334,	// (0x00025349) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x000289d8) slider_form_pane_g

0xcf6f,	// (0x00025f84) list_form_graphic_pane_ParamLimits

0xcf6f,	// (0x00025f84) list_form_graphic_pane

0xcf85,	// (0x00025f9a) list_form_graphic_pane_g1

0xcf8d,	// (0x00025fa2) list_form_graphic_pane_t1_ParamLimits

0xcf8d,	// (0x00025fa2) list_form_graphic_pane_t1

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp5_ParamLimits

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp5

0xcfa2,	// (0x00025fb7) find_pane_g1

0x7b02,	// (0x00020b17) input_find_pane

0xcfab,	// (0x00025fc0) input_find_pane_g1_ParamLimits

0xcfab,	// (0x00025fc0) input_find_pane_g1

0xcfb7,	// (0x00025fcc) input_find_pane_t1_ParamLimits

0xcfb7,	// (0x00025fcc) input_find_pane_t1

0xcfcc,	// (0x00025fe1) input_find_pane_t2_ParamLimits

0xcfcc,	// (0x00025fe1) input_find_pane_t2

0x0001,

0xf6e0,	// (0x000286f5) input_find_pane_t_ParamLimits

0xf6e0,	// (0x000286f5) input_find_pane_t

0x7b0b,	// (0x00020b20) input_focus_pane_cp5_ParamLimits

0x7b0b,	// (0x00020b20) input_focus_pane_cp5

0x6de4,	// (0x0001fdf9) bg_popup_window_pane_cp2_ParamLimits

0x6de4,	// (0x0001fdf9) bg_popup_window_pane_cp2

0x7b25,	// (0x00020b3a) listscroll_menu_pane_ParamLimits

0x7b25,	// (0x00020b3a) listscroll_menu_pane

0x7b31,	// (0x00020b46) popup_submenu_window_ParamLimits

0x7b31,	// (0x00020b46) popup_submenu_window

0x7b55,	// (0x00020b6a) find_popup_pane_g1

0x7b5d,	// (0x00020b72) input_popup_find_pane_cp

0x7b0b,	// (0x00020b20) input_focus_pane_cp4_ParamLimits

0x7b0b,	// (0x00020b20) input_focus_pane_cp4

0x7b67,	// (0x00020b7c) input_popup_find_pane_t1_ParamLimits

0x7b67,	// (0x00020b7c) input_popup_find_pane_t1

0x6d96,	// (0x0001fdab) bg_popup_sub_pane_cp

0x7b95,	// (0x00020baa) listscroll_popup_sub_pane

0x7b9d,	// (0x00020bb2) list_submenu_pane_ParamLimits

0x7b9d,	// (0x00020bb2) list_submenu_pane

0x7bae,	// (0x00020bc3) scroll_pane_cp4

0x7aee,	// (0x00020b03) list_single_popup_submenu_pane_ParamLimits

0x7aee,	// (0x00020b03) list_single_popup_submenu_pane

0x7bb6,	// (0x00020bcb) list_single_popup_submenu_pane_g1

0x7bbe,	// (0x00020bd3) list_single_popup_submenu_pane_t1_ParamLimits

0x7bbe,	// (0x00020bd3) list_single_popup_submenu_pane_t1

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp1_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp1

0x9661,	// (0x00022676) tabs_2_active_pane_g1

0x9669,	// (0x0002267e) tabs_2_active_pane_t1

0x6dfa,	// (0x0001fe0f) bg_passive_tab_pane_cp1_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_passive_tab_pane_cp1

0x9661,	// (0x00022676) tabs_2_passive_pane_g1

0x9669,	// (0x0002267e) tabs_2_passive_pane_t1

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp4

0x967b,	// (0x00022690) tabs_2_long_active_pane_t1

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp4

0x9ebf,	// (0x00022ed4) list_single_midp_graphic_pane_g4_ParamLimits

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp5

0x969a,	// (0x000226af) tabs_3_long_active_pane_t1

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp5

0x9ebf,	// (0x00022ed4) list_single_midp_graphic_pane_g4

0x6dfa,	// (0x0001fe0f) bg_popup_window_pane_cp13_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_popup_window_pane_cp13

0x7bdc,	// (0x00020bf1) listscroll_popup_fast_pane_ParamLimits

0x7bdc,	// (0x00020bf1) listscroll_popup_fast_pane

0x7beb,	// (0x00020c00) grid_popup_fast_pane_ParamLimits

0x7beb,	// (0x00020c00) grid_popup_fast_pane

0x7bfd,	// (0x00020c12) scroll_pane_cp9_ParamLimits

0x7bfd,	// (0x00020c12) scroll_pane_cp9

0xf2ba,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf2ba,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2

0x7c21,	// (0x00020c36) input_focus_pane_cp20_ParamLimits

0x7c21,	// (0x00020c36) input_focus_pane_cp20

0x7c2f,	// (0x00020c44) query_popup_data_pane_t1_ParamLimits

0x7c2f,	// (0x00020c44) query_popup_data_pane_t1

0x7c42,	// (0x00020c57) query_popup_data_pane_t2_ParamLimits

0x7c42,	// (0x00020c57) query_popup_data_pane_t2

0x7c88,	// (0x00020c9d) query_popup_data_pane_t3_ParamLimits

0x7c88,	// (0x00020c9d) query_popup_data_pane_t3

0x7cc9,	// (0x00020cde) query_popup_data_pane_t4_ParamLimits

0x7cc9,	// (0x00020cde) query_popup_data_pane_t4

0x7d05,	// (0x00020d1a) query_popup_data_pane_t5_ParamLimits

0x7d05,	// (0x00020d1a) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x000286fa) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x000286fa) query_popup_data_pane_t

0x7aa6,	// (0x00020abb) bg_set_opt_pane_g1

0x7aae,	// (0x00020ac3) bg_set_opt_pane_g2

0x7ab6,	// (0x00020acb) bg_set_opt_pane_g3

0x7abe,	// (0x00020ad3) bg_set_opt_pane_g4

0x7ac6,	// (0x00020adb) bg_set_opt_pane_g5

0x7ace,	// (0x00020ae3) bg_set_opt_pane_g6

0x7ad6,	// (0x00020aeb) bg_set_opt_pane_g7

0x7ade,	// (0x00020af3) bg_set_opt_pane_g8

0x7ae6,	// (0x00020afb) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00028705) bg_set_opt_pane_g

0x9a6b,	// (0x00022a80) control_top_pane_stacon_ParamLimits

0x9a6b,	// (0x00022a80) control_top_pane_stacon

0x9abe,	// (0x00022ad3) signal_pane_stacon_ParamLimits

0x9abe,	// (0x00022ad3) signal_pane_stacon

0x8123,	// (0x00021138) stacon_top_pane_g1_ParamLimits

0x8123,	// (0x00021138) stacon_top_pane_g1

0x9ae3,	// (0x00022af8) title_pane_stacon_ParamLimits

0x9ae3,	// (0x00022af8) title_pane_stacon

0x9b05,	// (0x00022b1a) uni_indicator_pane_stacon_ParamLimits

0x9b05,	// (0x00022b1a) uni_indicator_pane_stacon

0x9b1a,	// (0x00022b2f) battery_pane_stacon_ParamLimits

0x9b1a,	// (0x00022b2f) battery_pane_stacon

0x9b5a,	// (0x00022b6f) control_bottom_pane_stacon_ParamLimits

0x9b5a,	// (0x00022b6f) control_bottom_pane_stacon

0x9b79,	// (0x00022b8e) navi_pane_stacon_ParamLimits

0x9b79,	// (0x00022b8e) navi_pane_stacon

0x8145,	// (0x0002115a) stacon_bottom_pane_g1_ParamLimits

0x8145,	// (0x0002115a) stacon_bottom_pane_g1

0x7d3c,	// (0x00020d51) aid_levels_signal_lsc_ParamLimits

0x7d3c,	// (0x00020d51) aid_levels_signal_lsc

0x96ac,	// (0x000226c1) signal_pane_stacon_g1_ParamLimits

0x96ac,	// (0x000226c1) signal_pane_stacon_g1

0x96b8,	// (0x000226cd) signal_pane_stacon_g2_ParamLimits

0x96b8,	// (0x000226cd) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00028718) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00028718) signal_pane_stacon_g

0x96ec,	// (0x00022701) title_pane_stacon_t1_ParamLimits

0x96ec,	// (0x00022701) title_pane_stacon_t1

0x7d6a,	// (0x00020d7f) uni_indicator_pane_stacon_g1

0x7d74,	// (0x00020d89) uni_indicator_pane_stacon_g2

0x7d56,	// (0x00020d6b) uni_indicator_pane_stacon_g3

0x7d60,	// (0x00020d75) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00028724) uni_indicator_pane_stacon_g

0x9711,	// (0x00022726) control_top_pane_stacon_g1

0x9719,	// (0x0002272e) control_top_pane_stacon_t1_ParamLimits

0x9719,	// (0x0002272e) control_top_pane_stacon_t1

0x7d7e,	// (0x00020d93) aid_levels_battery_lsc_ParamLimits

0x7d7e,	// (0x00020d93) aid_levels_battery_lsc

0x974a,	// (0x0002275f) battery_pane_stacon_g1_ParamLimits

0x974a,	// (0x0002275f) battery_pane_stacon_g1

0x9756,	// (0x0002276b) battery_pane_stacon_g2_ParamLimits

0x9756,	// (0x0002276b) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0002872d) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0002872d) battery_pane_stacon_g

0x9785,	// (0x0002279a) navi_icon_pane_stacon

0x9795,	// (0x000227aa) navi_navi_pane_stacon

0x9785,	// (0x0002279a) navi_text_pane_stacon

0x9711,	// (0x00022726) control_bottom_pane_stacon_g1

0x97a5,	// (0x000227ba) control_bottom_pane_stacon_t1_ParamLimits

0x97a5,	// (0x000227ba) control_bottom_pane_stacon_t1

0x97d6,	// (0x000227eb) grid_app_pane_ParamLimits

0x97d6,	// (0x000227eb) grid_app_pane

0x97f2,	// (0x00022807) scroll_pane_cp15_ParamLimits

0x97f2,	// (0x00022807) scroll_pane_cp15

0x9805,	// (0x0002281a) cell_app_pane_ParamLimits

0x9805,	// (0x0002281a) cell_app_pane

0x9827,	// (0x0002283c) cell_app_pane_g1_ParamLimits

0x9827,	// (0x0002283c) cell_app_pane_g1

0x7da6,	// (0x00020dbb) cell_app_pane_g2_ParamLimits

0x7da6,	// (0x00020dbb) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00028732) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00028732) cell_app_pane_g

0x7db2,	// (0x00020dc7) cell_app_pane_t1_ParamLimits

0x7db2,	// (0x00020dc7) cell_app_pane_t1

0x7dc4,	// (0x00020dd9) grid_highlight_pane_ParamLimits

0x7dc4,	// (0x00020dd9) grid_highlight_pane

0x7aa6,	// (0x00020abb) cell_highlight_pane_g1

0x7aae,	// (0x00020ac3) cell_highlight_pane_g2

0x7ab6,	// (0x00020acb) cell_highlight_pane_g3

0x7abe,	// (0x00020ad3) cell_highlight_pane_g4

0x7ac6,	// (0x00020adb) cell_highlight_pane_g5

0x7ace,	// (0x00020ae3) cell_highlight_pane_g6

0x7ad6,	// (0x00020aeb) cell_highlight_pane_g7

0x7ade,	// (0x00020af3) cell_highlight_pane_g8

0x7ae6,	// (0x00020afb) cell_highlight_pane_g9

0x6d14,	// (0x0001fd29) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x000286e0) cell_highlight_pane_g

0x7dd5,	// (0x00020dea) bg_scroll_pane

0x985e,	// (0x00022873) scroll_handle_pane

0x7e1c,	// (0x00020e31) scroll_bg_pane_g1

0x7e31,	// (0x00020e46) scroll_bg_pane_g2

0x7e49,	// (0x00020e5e) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00028737) scroll_bg_pane_g

0x7e5e,	// (0x00020e73) scroll_handle_focus_pane_ParamLimits

0x7e5e,	// (0x00020e73) scroll_handle_focus_pane

0x7e1c,	// (0x00020e31) scroll_handle_pane_g1

0x7e6b,	// (0x00020e80) scroll_handle_pane_g2

0x7e49,	// (0x00020e5e) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0002873e) scroll_handle_pane_g

0x7b0b,	// (0x00020b20) bg_popup_sub_pane_cp21_ParamLimits

0x7b0b,	// (0x00020b20) bg_popup_sub_pane_cp21

0x7e7f,	// (0x00020e94) popup_fep_japan_predictive_window_t1_ParamLimits

0x7e7f,	// (0x00020e94) popup_fep_japan_predictive_window_t1

0x7e96,	// (0x00020eab) popup_fep_japan_predictive_window_t2_ParamLimits

0x7e96,	// (0x00020eab) popup_fep_japan_predictive_window_t2

0x7ec9,	// (0x00020ede) popup_fep_japan_predictive_window_t3_ParamLimits

0x7ec9,	// (0x00020ede) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00028745) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00028745) popup_fep_japan_predictive_window_t

0x6d96,	// (0x0001fdab) bg_popup_sub_pane_cp23

0x7f00,	// (0x00020f15) listscroll_japin_cand_pane

0x7f08,	// (0x00020f1d) popup_fep_japan_candidate_window_t1

0x7f16,	// (0x00020f2b) candidate_pane_ParamLimits

0x7f16,	// (0x00020f2b) candidate_pane

0x7f29,	// (0x00020f3e) scroll_pane_cp30

0x7f31,	// (0x00020f46) list_single_popup_jap_candidate_pane_ParamLimits

0x7f31,	// (0x00020f46) list_single_popup_jap_candidate_pane

0x6d96,	// (0x0001fdab) list_highlight_pane_cp30

0x7f46,	// (0x00020f5b) list_single_popup_jap_candidate_pane_t1

0x9887,	// (0x0002289c) level_1_signal

0x9894,	// (0x000228a9) level_2_signal

0x98a1,	// (0x000228b6) level_3_signal

0x98ae,	// (0x000228c3) level_4_signal

0x98bb,	// (0x000228d0) level_5_signal

0x98c8,	// (0x000228dd) level_6_signal

0x98d5,	// (0x000228ea) level_7_signal

0x9887,	// (0x0002289c) level_1_battery

0x9894,	// (0x000228a9) level_2_battery

0x98a1,	// (0x000228b6) level_3_battery

0x98ae,	// (0x000228c3) level_4_battery

0x98bb,	// (0x000228d0) level_5_battery

0x98c8,	// (0x000228dd) level_6_battery

0x98d5,	// (0x000228ea) level_7_battery

0x7f6d,	// (0x00020f82) list_menu_pane_ParamLimits

0x7f6d,	// (0x00020f82) list_menu_pane

0x7f7e,	// (0x00020f93) scroll_pane_cp25_ParamLimits

0x7f7e,	// (0x00020f93) scroll_pane_cp25

0x9901,	// (0x00022916) list_double2_graphic_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double2_graphic_pane_cp2

0x9901,	// (0x00022916) list_double2_large_graphic_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double2_large_graphic_pane_cp2

0x9901,	// (0x00022916) list_double2_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double2_pane_cp2

0x9901,	// (0x00022916) list_double_graphic_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double_graphic_pane_cp2

0x9901,	// (0x00022916) list_double_large_graphic_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double_large_graphic_pane_cp2

0x9901,	// (0x00022916) list_double_number_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double_number_pane_cp2

0x9901,	// (0x00022916) list_double_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double_pane_cp2

0x9911,	// (0x00022926) list_single_2graphic_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_2graphic_pane_cp2

0x9911,	// (0x00022926) list_single_graphic_heading_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_graphic_heading_pane_cp2

0x9911,	// (0x00022926) list_single_graphic_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_graphic_pane_cp2

0x9911,	// (0x00022926) list_single_heading_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_heading_pane_cp2

0x9926,	// (0x0002293b) list_single_large_graphic_pane_cp2_ParamLimits

0x9926,	// (0x0002293b) list_single_large_graphic_pane_cp2

0x9911,	// (0x00022926) list_single_number_heading_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_number_heading_pane_cp2

0x9911,	// (0x00022926) list_single_number_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_number_pane_cp2

0x9911,	// (0x00022926) list_single_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_pane_cp2

0x7fa0,	// (0x00020fb5) bg_popup_sub_pane_cp22

0x99db,	// (0x000229f0) popup_side_volume_key_window_g1

0x99ff,	// (0x00022a14) popup_side_volume_key_window_t1

0x9a1b,	// (0x00022a30) volume_small_pane_cp1

0x6de4,	// (0x0001fdf9) bg_popup_sub_pane_cp24_ParamLimits

0x6de4,	// (0x0001fdf9) bg_popup_sub_pane_cp24

0x7fd4,	// (0x00020fe9) fep_china_uni_candidate_pane_ParamLimits

0x7fd4,	// (0x00020fe9) fep_china_uni_candidate_pane

0x7fe8,	// (0x00020ffd) fep_china_uni_entry_pane

0x7ff8,	// (0x0002100d) popup_fep_china_uni_window_g1

0x8014,	// (0x00021029) fep_china_uni_entry_pane_g1

0x801c,	// (0x00021031) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00028772) fep_china_uni_entry_pane_g

0x8024,	// (0x00021039) fep_entry_item_pane

0x802e,	// (0x00021043) fep_candidate_item_pane

0x8036,	// (0x0002104b) fep_china_uni_candidate_pane_g1

0x803e,	// (0x00021053) fep_china_uni_candidate_pane_g2

0x8046,	// (0x0002105b) fep_china_uni_candidate_pane_g3

0x804e,	// (0x00021063) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00028777) fep_china_uni_candidate_pane_g

0x6d14,	// (0x0001fd29) fep_entry_item_pane_g1

0x8056,	// (0x0002106b) fep_entry_item_pane_t1_ParamLimits

0x8056,	// (0x0002106b) fep_entry_item_pane_t1

0x806c,	// (0x00021081) fep_candidate_item_pane_t1_ParamLimits

0x806c,	// (0x00021081) fep_candidate_item_pane_t1

0x8081,	// (0x00021096) fep_candidate_item_pane_t2_ParamLimits

0x8081,	// (0x00021096) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00028780) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00028780) fep_candidate_item_pane_t

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp31_ParamLimits

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp31

0x8093,	// (0x000210a8) level_1_signal_lsc

0x809c,	// (0x000210b1) level_2_signal_lsc

0x80a5,	// (0x000210ba) level_3_signal_lsc

0x80ae,	// (0x000210c3) level_4_signal_lsc

0x80b7,	// (0x000210cc) level_5_signal_lsc

0x80c0,	// (0x000210d5) level_6_signal_lsc

0x80c9,	// (0x000210de) level_7_signal_lsc

0x80c9,	// (0x000210de) level_1_battery_lsc

0x80d2,	// (0x000210e7) level_2_battery_lsc

0x80db,	// (0x000210f0) level_3_battery_lsc

0x80e4,	// (0x000210f9) level_4_battery_lsc

0x80ed,	// (0x00021102) level_5_battery_lsc

0x80f6,	// (0x0002110b) level_6_battery_lsc

0x8093,	// (0x000210a8) level_7_battery_lsc

0x80ff,	// (0x00021114) scroll_handle_focus_pane_g1

0x8108,	// (0x0002111d) scroll_handle_focus_pane_g2

0x8111,	// (0x00021126) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00028785) scroll_handle_focus_pane_g

0xcfe1,	// (0x00025ff6) list_single_2graphic_pane_g1_ParamLimits

0xcfe1,	// (0x00025ff6) list_single_2graphic_pane_g1

0xc9f0,	// (0x00025a05) list_single_2graphic_pane_g2_ParamLimits

0xc9f0,	// (0x00025a05) list_single_2graphic_pane_g2

0xc982,	// (0x00025997) list_single_2graphic_pane_g3_ParamLimits

0xc982,	// (0x00025997) list_single_2graphic_pane_g3

0xcfed,	// (0x00026002) list_single_2graphic_pane_g4_ParamLimits

0xcfed,	// (0x00026002) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0002878c) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0002878c) list_single_2graphic_pane_g

0xcffe,	// (0x00026013) list_single_2graphic_pane_t1_ParamLimits

0xcffe,	// (0x00026013) list_single_2graphic_pane_t1

0xd02c,	// (0x00026041) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd02c,	// (0x00026041) list_double2_graphic_large_graphic_pane_g1

0xca93,	// (0x00025aa8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xca93,	// (0x00025aa8) list_double2_graphic_large_graphic_pane_g2

0xca5f,	// (0x00025a74) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xca5f,	// (0x00025a74) list_double2_graphic_large_graphic_pane_g3

0xd03c,	// (0x00026051) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd03c,	// (0x00026051) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00028795) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00028795) list_double2_graphic_large_graphic_pane_g

0xd048,	// (0x0002605d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd048,	// (0x0002605d) list_double2_graphic_large_graphic_pane_t1

0xd05e,	// (0x00026073) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd05e,	// (0x00026073) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0002879e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0002879e) list_double2_graphic_large_graphic_pane_t

0x81ec,	// (0x00021201) popup_fast_swap_window_ParamLimits

0x81ec,	// (0x00021201) popup_fast_swap_window

0x8208,	// (0x0002121d) popup_side_volume_key_window

0x8222,	// (0x00021237) stacon_top_pane

0x822c,	// (0x00021241) status_pane_ParamLimits

0x822c,	// (0x00021241) status_pane

0x8222,	// (0x00021237) status_small_pane

0x6d96,	// (0x0001fdab) control_pane

0x6d96,	// (0x0001fdab) stacon_bottom_pane

0x7341,	// (0x00020356) scroll_pane_cp121

0x7a42,	// (0x00020a57) set_content_pane

0x9a23,	// (0x00022a38) bg_active_tab_pane_g1_cp1

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp1

0x9a2c,	// (0x00022a41) bg_active_tab_pane_g3_cp1

0x9a23,	// (0x00022a38) bg_passive_tab_pane_g1_cp1

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp1

0x9a2c,	// (0x00022a41) bg_passive_tab_pane_g3_cp1

0x9a35,	// (0x00022a4a) bg_active_tab_pane_g1_cp2

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp2

0x9a3e,	// (0x00022a53) bg_active_tab_pane_g3_cp2

0x9a35,	// (0x00022a4a) bg_passive_tab_pane_g1_cp2

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp2

0x9a3e,	// (0x00022a53) bg_passive_tab_pane_g3_cp2

0x9a47,	// (0x00022a5c) bg_active_tab_pane_g1_cp3

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp3

0x9a50,	// (0x00022a65) bg_active_tab_pane_g3_cp3

0x9a47,	// (0x00022a5c) bg_passive_tab_pane_g1_cp3

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp3

0x9a50,	// (0x00022a65) bg_passive_tab_pane_g3_cp3

0x9a59,	// (0x00022a6e) bg_active_tab_pane_g1_cp4

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp4

0x9a62,	// (0x00022a77) bg_active_tab_pane_g3_cp4

0x9a59,	// (0x00022a6e) bg_passive_tab_pane_g1_cp4

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp4

0x9a62,	// (0x00022a77) bg_passive_tab_pane_g3_cp4

0x816a,	// (0x0002117f) bg_active_tab_pane_g1_cp5

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp5

0x8161,	// (0x00021176) bg_active_tab_pane_g3_cp5

0x816a,	// (0x0002117f) bg_passive_tab_pane_g1_cp5

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp5

0x8161,	// (0x00021176) bg_passive_tab_pane_g3_cp5

0x9b98,	// (0x00022bad) list_set_graphic_pane_ParamLimits

0x9b98,	// (0x00022bad) list_set_graphic_pane

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp4

0x8173,	// (0x00021188) list_set_graphic_pane_g1_ParamLimits

0x8173,	// (0x00021188) list_set_graphic_pane_g1

0x817f,	// (0x00021194) list_set_graphic_pane_g2_ParamLimits

0x817f,	// (0x00021194) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x000287a3) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x000287a3) list_set_graphic_pane_g

0x0009,

0xfafb,	// (0x00028b10) volume_small_pane_cp_g

0x81a1,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x81a1,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2

0x81ad,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x81ad,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2

0x81bc,	// (0x000211d1) list_double2_large_graphic_pane_g3_cp2

0x81c4,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x81c4,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2

0x81da,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x81da,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2

0xc0db,	// (0x000250f0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc0db,	// (0x000250f0) list_double_large_graphic_pane_g1_cp2

0xc0ec,	// (0x00025101) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc0ec,	// (0x00025101) list_double_large_graphic_pane_g2_cp2

0x8307,	// (0x0002131c) list_double_large_graphic_pane_g3_cp2

0xc0fb,	// (0x00025110) list_double_large_graphic_pane_g4_cp

0xc103,	// (0x00025118) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xc103,	// (0x00025118) list_double_large_graphic_pane_t1_cp2

0xc11a,	// (0x0002512f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xc11a,	// (0x0002512f) list_double_large_graphic_pane_t2_cp2

0x823a,	// (0x0002124f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x823a,	// (0x0002124f) list_double2_graphic_pane_g1_cp2

0x8246,	// (0x0002125b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8246,	// (0x0002125b) list_double2_graphic_pane_g2_cp2

0x8255,	// (0x0002126a) list_double2_graphic_pane_g3_cp2

0x825d,	// (0x00021272) list_double2_graphic_pane_t1_cp2_ParamLimits

0x825d,	// (0x00021272) list_double2_graphic_pane_t1_cp2

0x8273,	// (0x00021288) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8273,	// (0x00021288) list_double2_graphic_pane_t2_cp2

0x8285,	// (0x0002129a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8285,	// (0x0002129a) list_single_number_heading_pane_g1_cp2

0x8291,	// (0x000212a6) list_single_number_heading_pane_g2_cp2

0x8299,	// (0x000212ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8299,	// (0x000212ae) list_single_number_heading_pane_t1_cp2

0x82af,	// (0x000212c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x82af,	// (0x000212c4) list_single_number_heading_pane_t2_cp2

0x82c1,	// (0x000212d6) list_single_number_heading_pane_t3_cp2_ParamLimits

0x82c1,	// (0x000212d6) list_single_number_heading_pane_t3_cp2

0x8285,	// (0x0002129a) list_single_heading_pane_g1_cp2_ParamLimits

0x8285,	// (0x0002129a) list_single_heading_pane_g1_cp2

0x8291,	// (0x000212a6) list_single_heading_pane_g2_cp2

0x8299,	// (0x000212ae) list_single_heading_pane_t1_cp2_ParamLimits

0x8299,	// (0x000212ae) list_single_heading_pane_t1_cp2

0xbee5,	// (0x00024efa) list_single_heading_pane_t2_cp2_ParamLimits

0xbee5,	// (0x00024efa) list_single_heading_pane_t2_cp2

0xbe35,	// (0x00024e4a) list_double_graphic_pane_g1_cp2_ParamLimits

0xbe35,	// (0x00024e4a) list_double_graphic_pane_g1_cp2

0xbe41,	// (0x00024e56) list_double_graphic_pane_g2_cp2_ParamLimits

0xbe41,	// (0x00024e56) list_double_graphic_pane_g2_cp2

0xbe50,	// (0x00024e65) list_double_graphic_pane_g3_cp2

0xbe58,	// (0x00024e6d) list_double_graphic_pane_t1_cp2_ParamLimits

0xbe58,	// (0x00024e6d) list_double_graphic_pane_t1_cp2

0xbe6e,	// (0x00024e83) list_double_graphic_pane_t2_cp2_ParamLimits

0xbe6e,	// (0x00024e83) list_double_graphic_pane_t2_cp2

0x82fb,	// (0x00021310) list_double_number_pane_g1_cp2_ParamLimits

0x82fb,	// (0x00021310) list_double_number_pane_g1_cp2

0x8307,	// (0x0002131c) list_double_number_pane_g2_cp2

0xbdfb,	// (0x00024e10) list_double_number_pane_t1_cp2_ParamLimits

0xbdfb,	// (0x00024e10) list_double_number_pane_t1_cp2

0xbe0d,	// (0x00024e22) list_double_number_pane_t2_cp2_ParamLimits

0xbe0d,	// (0x00024e22) list_double_number_pane_t2_cp2

0xbe23,	// (0x00024e38) list_double_number_pane_t3_cp2_ParamLimits

0xbe23,	// (0x00024e38) list_double_number_pane_t3_cp2

0xbd73,	// (0x00024d88) list_single_graphic_pane_g1_cp2_ParamLimits

0xbd73,	// (0x00024d88) list_single_graphic_pane_g1_cp2

0x8285,	// (0x0002129a) list_single_graphic_pane_g2_cp2_ParamLimits

0x8285,	// (0x0002129a) list_single_graphic_pane_g2_cp2

0x8291,	// (0x000212a6) list_single_graphic_pane_g3_cp2

0xbd4b,	// (0x00024d60) list_single_graphic_pane_t1_cp2_ParamLimits

0xbd4b,	// (0x00024d60) list_single_graphic_pane_t1_cp2

0x8285,	// (0x0002129a) list_single_number_pane_g1_cp2_ParamLimits

0x8285,	// (0x0002129a) list_single_number_pane_g1_cp2

0x8291,	// (0x000212a6) list_single_number_pane_g2_cp2

0xbd4b,	// (0x00024d60) list_single_number_pane_t1_cp2_ParamLimits

0xbd4b,	// (0x00024d60) list_single_number_pane_t1_cp2

0xbd61,	// (0x00024d76) list_single_number_pane_t2_cp2_ParamLimits

0xbd61,	// (0x00024d76) list_single_number_pane_t2_cp2

0x81ad,	// (0x000211c2) list_double2_pane_g1_cp2_ParamLimits

0x81ad,	// (0x000211c2) list_double2_pane_g1_cp2

0x81bc,	// (0x000211d1) list_double2_pane_g2_cp2

0x82d3,	// (0x000212e8) list_double2_pane_t1_cp2_ParamLimits

0x82d3,	// (0x000212e8) list_double2_pane_t1_cp2

0x82e9,	// (0x000212fe) list_double2_pane_t2_cp2_ParamLimits

0x82e9,	// (0x000212fe) list_double2_pane_t2_cp2

0x82fb,	// (0x00021310) list_double_pane_g1_cp2_ParamLimits

0x82fb,	// (0x00021310) list_double_pane_g1_cp2

0x8307,	// (0x0002131c) list_double_pane_g2_cp2

0x830f,	// (0x00021324) list_double_pane_t1_cp2_ParamLimits

0x830f,	// (0x00021324) list_double_pane_t1_cp2

0x8325,	// (0x0002133a) list_double_pane_t2_cp2_ParamLimits

0x8325,	// (0x0002133a) list_double_pane_t2_cp2

0x834d,	// (0x00021362) list_single_pane_cp2_g3

0x8285,	// (0x0002129a) list_single_pane_g1_cp2_ParamLimits

0x8285,	// (0x0002129a) list_single_pane_g1_cp2

0x8291,	// (0x000212a6) list_single_pane_g2_cp2

0x835d,	// (0x00021372) list_single_pane_t1_cp2_ParamLimits

0x835d,	// (0x00021372) list_single_pane_t1_cp2

0x8375,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8375,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2

0x8381,	// (0x00021396) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8381,	// (0x00021396) list_single_large_graphic_pane_g2_cp2

0x838d,	// (0x000213a2) list_single_large_graphic_pane_g3_cp2

0x8395,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8395,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1

0x83af,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x83af,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2

0xbd2d,	// (0x00024d42) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xbd2d,	// (0x00024d42) list_single_graphic_heading_pane_g1_cp2

0xbcfc,	// (0x00024d11) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbcfc,	// (0x00024d11) list_single_graphic_heading_pane_g4_cp2

0x8291,	// (0x000212a6) list_single_graphic_heading_pane_g5_cp2

0x8299,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x8299,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2

0xbd39,	// (0x00024d4e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbd39,	// (0x00024d4e) list_single_graphic_heading_pane_t2_cp2

0xbcf0,	// (0x00024d05) list_single_2graphic_pane_g1_cp2_ParamLimits

0xbcf0,	// (0x00024d05) list_single_2graphic_pane_g1_cp2

0xbcfc,	// (0x00024d11) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbcfc,	// (0x00024d11) list_single_2graphic_pane_g2_cp2

0x8291,	// (0x000212a6) list_single_2graphic_pane_g3_cp2

0xbd0b,	// (0x00024d20) list_single_2graphic_pane_g4_cp2_ParamLimits

0xbd0b,	// (0x00024d20) list_single_2graphic_pane_g4_cp2

0xbd17,	// (0x00024d2c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xbd17,	// (0x00024d2c) list_single_2graphic_pane_t1_cp2

0x6d14,	// (0x0001fd29) list_highlight_pane_g10_cp1

0xb902,	// (0x00024917) list_highlight_pane_g1_cp1

0xb90a,	// (0x0002491f) list_highlight_pane_g2_cp1

0xb912,	// (0x00024927) list_highlight_pane_g3_cp1

0xb91a,	// (0x0002492f) list_highlight_pane_g4_cp1

0xb922,	// (0x00024937) list_highlight_pane_g5_cp1

0xb92a,	// (0x0002493f) list_highlight_pane_g6_cp1

0xb932,	// (0x00024947) list_highlight_pane_g7_cp1

0xb93a,	// (0x0002494f) list_highlight_pane_g8_cp1

0xb942,	// (0x00024957) list_highlight_pane_g9_cp1

0xe21b,	// (0x00027230) form_field_slider_pane_t3

0xe229,	// (0x0002723e) form_field_slider_pane_t4

0xb84c,	// (0x00024861) slider_form_pane_ParamLimits

0xb84c,	// (0x00024861) slider_form_pane

0x6d96,	// (0x0001fdab) control_abbreviations

0x6d96,	// (0x0001fdab) control_conventions

0x6d96,	// (0x0001fdab) control_definitions

0x6d96,	// (0x0001fdab) format_table_attribute

0xbf2f,	// (0x00024f44) bg_popup_preview_window_pane_g9

0x6d96,	// (0x0001fdab) format_table_data2

0x6d96,	// (0x0001fdab) format_table_data3

0x6d96,	// (0x0001fdab) format_table_data_example

0x0008,

0x6d96,	// (0x0001fdab) intro_purpose

0xf923,	// (0x00028938) bg_popup_preview_window_pane_g

0x6d96,	// (0x0001fdab) texts_category

0x6d96,	// (0x0001fdab) texts_graphics

0x83c5,	// (0x000213da) text_digital

0x83d4,	// (0x000213e9) text_primary

0x83e3,	// (0x000213f8) text_primary_small

0x83f2,	// (0x00021407) text_secondary

0x8401,	// (0x00021416) text_title

0xc3bc,	// (0x000253d1) bg_passive_tab_pane_g1_cp3_srt

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp3_srt

0xc3c5,	// (0x000253da) bg_passive_tab_pane_g3_cp3_srt

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp3_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp3_srt

0xc3ce,	// (0x000253e3) tabs_4_active_pane_srt_g1

0x93b5,	// (0x000223ca) tabs_4_active_pane_srt_t1_ParamLimits

0x93b5,	// (0x000223ca) tabs_4_active_pane_srt_t1

0xc3bc,	// (0x000253d1) bg_active_tab_pane_g1_cp3_copy1

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp3_copy1

0xc3c5,	// (0x000253da) bg_active_tab_pane_g3_cp3_copy1

0x6dfa,	// (0x0001fe0f) tabs_2_long_active_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) tabs_2_long_active_pane_srt

0x6dfa,	// (0x0001fe0f) tabs_2_long_passive_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) tabs_2_long_passive_pane_srt

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp4_srt

0xc2f2,	// (0x00025307) bg_passive_tab_pane_g1_cp4_srt

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp4_srt

0xc2fb,	// (0x00025310) bg_passive_tab_pane_g3_cp4_srt

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp4_srt_ParamLimits

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp4_srt

0x967b,	// (0x00022690) tabs_2_long_active_pane_srt_t1_ParamLimits

0x967b,	// (0x00022690) tabs_2_long_active_pane_srt_t1

0xc2f2,	// (0x00025307) bg_active_tab_pane_g1_cp4_srt

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp4_srt

0xc2fb,	// (0x00025310) bg_active_tab_pane_g3_cp4_srt

0x6de4,	// (0x0001fdf9) tabs_3_long_active_pane_srt_ParamLimits

0x6de4,	// (0x0001fdf9) tabs_3_long_active_pane_srt

0x6de4,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6de4,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt

0x6de4,	// (0x0001fdf9) tabs_3_long_passive_pane_srt_ParamLimits

0x6de4,	// (0x0001fdf9) tabs_3_long_passive_pane_srt

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp5_srt

0x816a,	// (0x0002117f) bg_passive_tab_pane_g1_cp5_srt

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp5_srt

0x8161,	// (0x00021176) bg_passive_tab_pane_g3_cp5_srt

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp5_srt_ParamLimits

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp5_srt

0x969a,	// (0x000226af) tabs_3_long_active_pane_srt_t1_ParamLimits

0x969a,	// (0x000226af) tabs_3_long_active_pane_srt_t1

0x816a,	// (0x0002117f) bg_active_tab_pane_g1_cp5_srt

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp5_srt

0x8161,	// (0x00021176) bg_active_tab_pane_g3_cp5_srt

0xc2e4,	// (0x000252f9) navi_text_pane_srt_t1

0xc2dc,	// (0x000252f1) navi_icon_pane_srt_g1

0x8519,	// (0x0002152e) midp_editing_number_pane_srt

0x8410,	// (0x00021425) midp_ticker_pane_srt

0x8521,	// (0x00021536) midp_ticker_pane_srt_g1

0x8529,	// (0x0002153e) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x000287c2) midp_ticker_pane_srt_g

0x8531,	// (0x00021546) midp_ticker_pane_srt_t1

0xc2cd,	// (0x000252e2) midp_editing_number_pane_t1_copy1

0x9bae,	// (0x00022bc3) listscroll_midp_pane

0x9bae,	// (0x00022bc3) midp_form_pane

0x8418,	// (0x0002142d) midp_info_popup_window_ParamLimits

0x8418,	// (0x0002142d) midp_info_popup_window

0x7b0b,	// (0x00020b20) bg_popup_sub_pane_cp50_ParamLimits

0x7b0b,	// (0x00020b20) bg_popup_sub_pane_cp50

0xb5a6,	// (0x000245bb) listscroll_midp_info_pane_ParamLimits

0xb5a6,	// (0x000245bb) listscroll_midp_info_pane

0xb58e,	// (0x000245a3) listscroll_form_midp_pane_ParamLimits

0xb58e,	// (0x000245a3) listscroll_form_midp_pane

0xb59a,	// (0x000245af) scroll_bar_cp050

0xe203,	// (0x00027218) list_midp_pane

0xd69c,	// (0x000266b1) signal_pane_g2_cp

0xb4c0,	// (0x000244d5) listscroll_midp_info_pane_t1_ParamLimits

0xb4c0,	// (0x000244d5) listscroll_midp_info_pane_t1

0xb4d8,	// (0x000244ed) listscroll_midp_info_pane_t2_ParamLimits

0xb4d8,	// (0x000244ed) listscroll_midp_info_pane_t2

0xb516,	// (0x0002452b) listscroll_midp_info_pane_t3_ParamLimits

0xb516,	// (0x0002452b) listscroll_midp_info_pane_t3

0xb550,	// (0x00024565) listscroll_midp_info_pane_t4_ParamLimits

0xb550,	// (0x00024565) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x00028873) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x00028873) listscroll_midp_info_pane_t

0x7bae,	// (0x00020bc3) scroll_pane_cp21

0xb464,	// (0x00024479) form_midp_field_choice_group_pane

0xb46d,	// (0x00024482) form_midp_field_text_pane

0xb4a6,	// (0x000244bb) form_midp_field_time_pane

0xb4ae,	// (0x000244c3) form_midp_gauge_slider_pane

0xb4b7,	// (0x000244cc) form_midp_gauge_wait_pane

0x6d96,	// (0x0001fdab) form_midp_image_pane

0xd102,	// (0x00026117) list_single_midp_pane_ParamLimits

0xd102,	// (0x00026117) list_single_midp_pane

0xe1e0,	// (0x000271f5) form_midp_field_text_pane_t1

0xb313,	// (0x00024328) input_focus_pane_cp050

0xb453,	// (0x00024468) list_midp_form_text_pane

0xb422,	// (0x00024437) form_midp_field_choice_group_pane_t1

0xb430,	// (0x00024445) input_focus_pane_cp051

0xb444,	// (0x00024459) list_midp_choice_pane

0x6d96,	// (0x0001fdab) status_idle_pane

0xb406,	// (0x0002441b) form_midp_field_time_pane_t1

0x6d14,	// (0x0001fd29) wait_anim_pane_g2_copy1

0xb414,	// (0x00024429) form_midp_field_time_pane_t2

0x0001,

0x8483,	// (0x00021498) aid_navinavi_width_2_pane

0xf859,	// (0x0002886e) form_midp_field_time_pane_t

0x6d96,	// (0x0001fdab) input_focus_pane_cp052

0x6d96,	// (0x0001fdab) bg_input_focus_pane_cp040

0xb3e2,	// (0x000243f7) form_midp_gauge_slider_pane_t1

0xb3f0,	// (0x00024405) form_midp_gauge_slider_pane_t2

0xe1c4,	// (0x000271d9) form_midp_gauge_slider_pane_t3

0xe1d2,	// (0x000271e7) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x00028865) form_midp_gauge_slider_pane_t

0xb3fe,	// (0x00024413) form_midp_slider_pane

0x6dfa,	// (0x0001fe0f) bg_input_focus_pane_cp041_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_input_focus_pane_cp041

0xb3b2,	// (0x000243c7) form_midp_gauge_wait_pane_t1_ParamLimits

0xb3b2,	// (0x000243c7) form_midp_gauge_wait_pane_t1

0xb3c4,	// (0x000243d9) form_midp_gauge_wait_pane_t2_ParamLimits

0xb3c4,	// (0x000243d9) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00028860) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00028860) form_midp_gauge_wait_pane_t

0xb3d6,	// (0x000243eb) form_midp_wait_pane_ParamLimits

0xb3d6,	// (0x000243eb) form_midp_wait_pane

0xb37c,	// (0x00024391) form_midp_image_pane_g1

0xb385,	// (0x0002439a) form_midp_image_pane_t1

0xb394,	// (0x000243a9) form_midp_image_pane_t2

0xb3a3,	// (0x000243b8) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00028859) form_midp_image_pane_t

0xb373,	// (0x00024388) list_single_midp_pane_g1

0xd0f3,	// (0x00026108) list_single_midp_pane_t1

0xe1ae,	// (0x000271c3) list_midp_form_item_pane_ParamLimits

0xe1ae,	// (0x000271c3) list_midp_form_item_pane

0x842b,	// (0x00021440) list_midp_form_item_pane_t1

0x843a,	// (0x0002144f) midp_ticker_pane_g1

0x8446,	// (0x0002145b) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x000287a8) midp_ticker_pane_g

0x8452,	// (0x00021467) midp_ticker_pane_t1

0xc2cd,	// (0x000252e2) midp_editing_number_pane_t1

0xc355,	// (0x0002536a) midp_editing_number_pane

0xc361,	// (0x00025376) midp_ticker_pane

0xc2bd,	// (0x000252d2) ai_message_heading_pane

0x6d96,	// (0x0001fdab) bg_popup_window_pane_cp14

0xc2c5,	// (0x000252da) listscroll_ai_message_pane

0xc247,	// (0x0002525c) ai_message_heading_pane_g1_ParamLimits

0xc247,	// (0x0002525c) ai_message_heading_pane_g1

0xc253,	// (0x00025268) ai_message_heading_pane_g2_ParamLimits

0xc253,	// (0x00025268) ai_message_heading_pane_g2

0xc25f,	// (0x00025274) ai_message_heading_pane_g3_ParamLimits

0xc25f,	// (0x00025274) ai_message_heading_pane_g3

0xc26b,	// (0x00025280) ai_message_heading_pane_g4_ParamLimits

0xc26b,	// (0x00025280) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x0002899a) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x0002899a) ai_message_heading_pane_g

0xc277,	// (0x0002528c) ai_message_heading_pane_t1_ParamLimits

0xc277,	// (0x0002528c) ai_message_heading_pane_t1

0xc291,	// (0x000252a6) ai_message_heading_pane_t2_ParamLimits

0xc291,	// (0x000252a6) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x000289a3) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x000289a3) ai_message_heading_pane_t

0xc2a3,	// (0x000252b8) bg_popup_heading_pane_cp1_ParamLimits

0xc2a3,	// (0x000252b8) bg_popup_heading_pane_cp1

0xc235,	// (0x0002524a) list_ai_message_pane_ParamLimits

0xc235,	// (0x0002524a) list_ai_message_pane

0x7bae,	// (0x00020bc3) scroll_pane_cp10

0xc1d1,	// (0x000251e6) list_ai_message_pane_g1

0xc1d9,	// (0x000251ee) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x00028977) list_ai_message_pane_g

0xc1e1,	// (0x000251f6) list_ai_message_pane_t1_ParamLimits

0xc1e1,	// (0x000251f6) list_ai_message_pane_t1

0xc1f6,	// (0x0002520b) list_ai_message_pane_t2_ParamLimits

0xc1f6,	// (0x0002520b) list_ai_message_pane_t2

0xc20b,	// (0x00025220) list_ai_message_pane_t3_ParamLimits

0xc20b,	// (0x00025220) list_ai_message_pane_t3

0xc220,	// (0x00025235) list_ai_message_pane_t4_ParamLimits

0xc220,	// (0x00025235) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x0002897c) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x0002897c) list_ai_message_pane_t

0xc1bf,	// (0x000251d4) cell_ai_soft_ind_pane_ParamLimits

0xc1bf,	// (0x000251d4) cell_ai_soft_ind_pane

0x8464,	// (0x00021479) cell_ai_soft_ind_pane_g1_ParamLimits

0x8464,	// (0x00021479) cell_ai_soft_ind_pane_g1

0x6d96,	// (0x0001fdab) grid_highlight_cp1

0x8471,	// (0x00021486) text_secondary_cp56_ParamLimits

0x8471,	// (0x00021486) text_secondary_cp56

0xc194,	// (0x000251a9) example_general_pane_ParamLimits

0xc194,	// (0x000251a9) example_general_pane

0xc1a0,	// (0x000251b5) example_parent_pane_g1_ParamLimits

0xc1a0,	// (0x000251b5) example_parent_pane_g1

0xc1ac,	// (0x000251c1) example_parent_pane_t1_ParamLimits

0xc1ac,	// (0x000251c1) example_parent_pane_t1

0xdb07,	// (0x00026b1c) popup_preview_text_window_ParamLimits

0xdb07,	// (0x00026b1c) popup_preview_text_window

0x8355,	// (0x0002136a) list_single_pane_cp2_g4

0x7001,	// (0x00020016) bg_popup_preview_window_pane_ParamLimits

0x7001,	// (0x00020016) bg_popup_preview_window_pane

0xbf37,	// (0x00024f4c) popup_preview_text_window_t1_ParamLimits

0xbf37,	// (0x00024f4c) popup_preview_text_window_t1

0xbf55,	// (0x00024f6a) popup_preview_text_window_t2_ParamLimits

0xbf55,	// (0x00024f6a) popup_preview_text_window_t2

0xbf9e,	// (0x00024fb3) popup_preview_text_window_t3_ParamLimits

0xbf9e,	// (0x00024fb3) popup_preview_text_window_t3

0xbfe3,	// (0x00024ff8) popup_preview_text_window_t4_ParamLimits

0xbfe3,	// (0x00024ff8) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x0002894b) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x0002894b) popup_preview_text_window_t

0xc061,	// (0x00025076) scroll_pane_cp11

0xb225,	// (0x0002423a) bg_popup_preview_window_pane_g1

0xbef7,	// (0x00024f0c) bg_popup_preview_window_pane_g2

0xbeff,	// (0x00024f14) bg_popup_preview_window_pane_g3

0xbf07,	// (0x00024f1c) bg_popup_preview_window_pane_g4

0xbf0f,	// (0x00024f24) bg_popup_preview_window_pane_g5

0xbf17,	// (0x00024f2c) bg_popup_preview_window_pane_g6

0xbf1f,	// (0x00024f34) bg_popup_preview_window_pane_g7

0xbf27,	// (0x00024f3c) bg_popup_preview_window_pane_g8

0x901f,	// (0x00022034) aid_popup_width_pane

0xdae9,	// (0x00026afe) popup_midp_note_alarm_window_ParamLimits

0xdae9,	// (0x00026afe) popup_midp_note_alarm_window

0x7a4b,	// (0x00020a60) data_form_pane_ParamLimits

0xce7a,	// (0x00025e8f) form_field_data_pane_g1

0x963d,	// (0x00022652) form_field_data_pane_t1_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_ParamLimits

0x7a65,	// (0x00020a7a) data_form_wide_pane_ParamLimits

0xce82,	// (0x00025e97) form_field_data_wide_pane_g1

0xce8e,	// (0x00025ea3) form_field_data_wide_pane_t1_ParamLimits

0x71c0,	// (0x000201d5) input_focus_pane_cp6_ParamLimits

0x9655,	// (0x0002266a) input_popup_find_pane_g1_ParamLimits

0x9655,	// (0x0002266a) input_popup_find_pane_g1

0x9766,	// (0x0002277b) aid_navi_side_left_pane

0x9776,	// (0x0002278b) aid_navi_side_right_pane

0xb9d3,	// (0x000249e8) bg_popup_window_pane_cp30_ParamLimits

0xb9d3,	// (0x000249e8) bg_popup_window_pane_cp30

0xba4d,	// (0x00024a62) popup_midp_note_alarm_window_g1_ParamLimits

0xba4d,	// (0x00024a62) popup_midp_note_alarm_window_g1

0xba7d,	// (0x00024a92) popup_midp_note_alarm_window_t1_ParamLimits

0xba7d,	// (0x00024a92) popup_midp_note_alarm_window_t1

0xbb1e,	// (0x00024b33) popup_midp_note_alarm_window_t2_ParamLimits

0xbb1e,	// (0x00024b33) popup_midp_note_alarm_window_t2

0xbbcc,	// (0x00024be1) popup_midp_note_alarm_window_t3_ParamLimits

0xbbcc,	// (0x00024be1) popup_midp_note_alarm_window_t3

0xbbf4,	// (0x00024c09) popup_midp_note_alarm_window_t4_ParamLimits

0xbbf4,	// (0x00024c09) popup_midp_note_alarm_window_t4

0xbc14,	// (0x00024c29) popup_midp_note_alarm_window_t5_ParamLimits

0xbc14,	// (0x00024c29) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x000288e8) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x000288e8) popup_midp_note_alarm_window_t

0xbcc0,	// (0x00024cd5) wait_bar_pane_cp1_ParamLimits

0xbcc0,	// (0x00024cd5) wait_bar_pane_cp1

0x6d96,	// (0x0001fdab) wait_anim_pane_copy1

0x6d96,	// (0x0001fdab) wait_border_pane_copy1

0xb719,	// (0x0002472e) wait_border_pane_g1_copy1

0xcea8,	// (0x00025ebd) form_field_popup_pane_g1

0xceb0,	// (0x00025ec5) form_field_popup_pane_t1_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_cp7_ParamLimits

0x7a4b,	// (0x00020a60) list_form_pane_ParamLimits

0xcec8,	// (0x00025edd) form_field_popup_wide_pane_g1

0xced0,	// (0x00025ee5) form_field_popup_wide_pane_t1_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_cp8_ParamLimits

0x7a85,	// (0x00020a9a) list_form_wide_pane_ParamLimits

0xc3f5,	// (0x0002540a) aid_size_cell_graphic_pane

0xcf55,	// (0x00025f6a) data_form_pane_t1_ParamLimits

0xd12d,	// (0x00026142) data_form_wide_pane_t1_ParamLimits

0xdd0d,	// (0x00026d22) bg_status_flat_pane

0x9333,	// (0x00022348) title_pane_t1_ParamLimits

0x6dac,	// (0x0001fdc1) title_pane_t2_ParamLimits

0x6dd2,	// (0x0001fde7) title_pane_t3_ParamLimits

0xf59b,	// (0x000285b0) title_pane_t_ParamLimits

0x9887,	// (0x0002289c) level_1_signal_ParamLimits

0x9894,	// (0x000228a9) level_2_signal_ParamLimits

0x98a1,	// (0x000228b6) level_3_signal_ParamLimits

0x98ae,	// (0x000228c3) level_4_signal_ParamLimits

0x98bb,	// (0x000228d0) level_5_signal_ParamLimits

0x98c8,	// (0x000228dd) level_6_signal_ParamLimits

0x98d5,	// (0x000228ea) level_7_signal_ParamLimits

0x9887,	// (0x0002289c) level_1_battery_ParamLimits

0x9894,	// (0x000228a9) level_2_battery_ParamLimits

0x98a1,	// (0x000228b6) level_3_battery_ParamLimits

0x98ae,	// (0x000228c3) level_4_battery_ParamLimits

0x98bb,	// (0x000228d0) level_5_battery_ParamLimits

0x98c8,	// (0x000228dd) level_6_battery_ParamLimits

0x98d5,	// (0x000228ea) level_7_battery_ParamLimits

0xb902,	// (0x00024917) bg_status_flat_pane_g1

0xb90a,	// (0x0002491f) bg_status_flat_pane_g2

0xb912,	// (0x00024927) bg_status_flat_pane_g3

0xb91a,	// (0x0002492f) bg_status_flat_pane_g4

0xb922,	// (0x00024937) bg_status_flat_pane_g5

0xb92a,	// (0x0002493f) bg_status_flat_pane_g6

0xb932,	// (0x00024947) bg_status_flat_pane_g7

0x939b,	// (0x000223b0) tabs_3_active_pane_t1_ParamLimits

0x939b,	// (0x000223b0) tabs_3_passive_pane_t1_ParamLimits

0x93b5,	// (0x000223ca) tabs_4_active_pane_t1_ParamLimits

0x93b5,	// (0x000223ca) tabs_4_1_passive_pane_t1_ParamLimits

0x9669,	// (0x0002267e) tabs_2_active_pane_t1_ParamLimits

0x9669,	// (0x0002267e) tabs_2_passive_pane_t1_ParamLimits

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp4_ParamLimits

0x967b,	// (0x00022690) tabs_2_long_active_pane_t1_ParamLimits

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp4_ParamLimits

0x9ef1,	// (0x00022f06) list_single_midp_graphic_pane_t1_ParamLimits

0x7fc6,	// (0x00020fdb) bg_active_tab_pane_cp5_ParamLimits

0x969a,	// (0x000226af) tabs_3_long_active_pane_t1_ParamLimits

0x968e,	// (0x000226a3) bg_passive_tab_pane_cp5_ParamLimits

0x9ef1,	// (0x00022f06) list_single_midp_graphic_pane_t1

0xdd0d,	// (0x00026d22) bg_status_flat_pane_ParamLimits

0xb104,	// (0x00024119) indicator_pane_cp2_ParamLimits

0xb104,	// (0x00024119) indicator_pane_cp2

0xe029,	// (0x0002703e) navi_pane_srt_ParamLimits

0xe029,	// (0x0002703e) navi_pane_srt

0xb12c,	// (0x00024141) popup_clock_digital_analogue_window_cp1

0x6e6a,	// (0x0001fe7f) indicator_pane_t1

0x8410,	// (0x00021425) copy_highlight_pane

0x8410,	// (0x00021425) cursor_graphics_pane

0x8410,	// (0x00021425) graphic_within_text_pane

0x8410,	// (0x00021425) link_highlight_pane

0xc024,	// (0x00025039) popup_preview_text_window_t5_ParamLimits

0xc024,	// (0x00025039) popup_preview_text_window_t5

0x848b,	// (0x000214a0) cursor_digital_pane

0x848b,	// (0x000214a0) cursor_primary_pane

0x849c,	// (0x000214b1) cursor_primary_small_pane

0x84a4,	// (0x000214b9) cursor_secondary_pane

0x84ac,	// (0x000214c1) cursor_title_pane

0x848b,	// (0x000214a0) link_highlight_digital_pane

0x8493,	// (0x000214a8) link_highlight_primary_pane

0x849c,	// (0x000214b1) link_highlight_primary_small_pane

0x84a4,	// (0x000214b9) link_highlight_secondary_pane

0x84ac,	// (0x000214c1) link_highlight_title_pane

0x848b,	// (0x000214a0) copy_highlight_digital_pane

0x848b,	// (0x000214a0) copy_highlight_primary_pane

0x849c,	// (0x000214b1) copy_highlight_primary_small_pane

0x84a4,	// (0x000214b9) copy_highlight_secondary_pane

0x84ac,	// (0x000214c1) copy_highlight_title_pane

0x84a4,	// (0x000214b9) graphic_text_digital_pane

0xb982,	// (0x00024997) graphic_text_primary_pane

0xb98b,	// (0x000249a0) graphic_text_primary_small_pane

0x849c,	// (0x000214b1) graphic_text_secondary_pane

0x848b,	// (0x000214a0) graphic_text_title_pane

0x9c53,	// (0x00022c68) cursor_primary_pane_g1

0xb974,	// (0x00024989) cursor_text_primary_t1

0xe247,	// (0x0002725c) cursor_primary_small_pane_g1

0xb966,	// (0x0002497b) cursor_text_primary_small_t1

0xe23f,	// (0x00027254) cursor_primary_small_pane_g1_copy1

0xb958,	// (0x0002496d) cursor_text_primary_small_t1_copy1

0xb94a,	// (0x0002495f) cursor_text_title_t1

0xe237,	// (0x0002724c) cursor_title_pane_g1

0x9c53,	// (0x00022c68) cursor_digital_pane_g1

0x84b4,	// (0x000214c9) cursor_text_digital_t1

0x84c2,	// (0x000214d7) link_highlight_primary_pane_g1

0xb8f3,	// (0x00024908) link_highlight_primary_pane_t1

0x84c2,	// (0x000214d7) link_highlight_primary_small_pane_g1

0x84ca,	// (0x000214df) link_highlight_primary_small_pane_t1

0x84d9,	// (0x000214ee) link_highlight_secondary_pane_g1

0x84e1,	// (0x000214f6) link_highlight_secondary_pane_t1

0xb858,	// (0x0002486d) link_highlight_title_pane_g1

0xb86f,	// (0x00024884) link_highlight_title_pane_t1

0xb858,	// (0x0002486d) link_highlight_digital_pane_g1

0xb860,	// (0x00024875) link_highlight_digital_pane_t1

0xb734,	// (0x00024749) copy_highlight_primary_pane_g1

0xb75a,	// (0x0002476f) copy_highlight_primary_pane_t1

0xb734,	// (0x00024749) copy_highlight_primary_small_pane_g1

0xb74b,	// (0x00024760) copy_highlight_primary_small_pane_t1

0x84f0,	// (0x00021505) copy_highlight_secondary_pane_g1

0x84f8,	// (0x0002150d) copy_highlight_secondary_pane_t1

0xb734,	// (0x00024749) copy_highlight_title_pane_g1

0xb73c,	// (0x00024751) copy_highlight_title_pane_t1

0xb734,	// (0x00024749) copy_highlight_digital_pane_g1

0xc516,	// (0x0002552b) copy_highlight_digital_pane_t1

0xc46a,	// (0x0002547f) graphic_text_primary_pane_g1

0xc4fa,	// (0x0002550f) graphic_text_primary_pane_t1

0xc508,	// (0x0002551d) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x00028a12) graphic_text_primary_pane_t

0xc4d6,	// (0x000254eb) graphic_text_primary_small_pane_g1

0xc4de,	// (0x000254f3) graphic_text_primary_small_pane_t1

0xc4ec,	// (0x00025501) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x00028a0d) graphic_text_primary_small_pane_t

0xc4b2,	// (0x000254c7) graphic_text_secondary_pane_g1

0xc4ba,	// (0x000254cf) graphic_text_secondary_pane_t1

0xc4c8,	// (0x000254dd) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x00028a08) graphic_text_secondary_pane_t

0xc48e,	// (0x000254a3) graphic_text_title_pane_g1

0xc496,	// (0x000254ab) graphic_text_title_pane_t1

0xc4a4,	// (0x000254b9) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x00028a03) graphic_text_title_pane_t

0xc46a,	// (0x0002547f) graphic_text_digital_pane_g1

0xc472,	// (0x00025487) graphic_text_digital_pane_t1

0xc480,	// (0x00025495) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x000289fe) graphic_text_digital_pane_t

0x6dfa,	// (0x0001fe0f) navi_icon_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) navi_icon_pane_srt

0x6d96,	// (0x0001fdab) navi_midp_pane_srt

0x6d96,	// (0x0001fdab) navi_navi_pane_srt

0x6dfa,	// (0x0001fe0f) navi_text_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) navi_text_pane_srt

0xbeb0,	// (0x00024ec5) navi_navi_icon_text_pane_srt

0xbeb8,	// (0x00024ecd) navi_navi_pane_srt_g1_ParamLimits

0xbeb8,	// (0x00024ecd) navi_navi_pane_srt_g1

0xbeca,	// (0x00024edf) navi_navi_pane_srt_g2_ParamLimits

0xbeca,	// (0x00024edf) navi_navi_pane_srt_g2

0x0001,

0xf91e,	// (0x00028933) navi_navi_pane_srt_g_ParamLimits

0xf91e,	// (0x00028933) navi_navi_pane_srt_g

0xbedc,	// (0x00024ef1) navi_navi_tabs_pane_srt

0xbeb0,	// (0x00024ec5) navi_navi_text_pane_srt

0xbeb0,	// (0x00024ec5) navi_navi_volume_pane_srt

0xc45b,	// (0x00025470) navi_navi_text_pane_srt_t1

0xa255,	// (0x0002326a) navi_navi_volume_pane_srt_g1

0xa25d,	// (0x00023272) volume_small_pane_srt_ParamLimits

0xa25d,	// (0x00023272) volume_small_pane_srt

0x9c5b,	// (0x00022c70) volume_small_pane_srt_g1_ParamLimits

0x9c5b,	// (0x00022c70) volume_small_pane_srt_g1

0x9c6b,	// (0x00022c80) volume_small_pane_srt_g2_ParamLimits

0x9c6b,	// (0x00022c80) volume_small_pane_srt_g2

0x9c7c,	// (0x00022c91) volume_small_pane_srt_g3_ParamLimits

0x9c7c,	// (0x00022c91) volume_small_pane_srt_g3

0x9c8d,	// (0x00022ca2) volume_small_pane_srt_g4_ParamLimits

0x9c8d,	// (0x00022ca2) volume_small_pane_srt_g4

0x9c9e,	// (0x00022cb3) volume_small_pane_srt_g5_ParamLimits

0x9c9e,	// (0x00022cb3) volume_small_pane_srt_g5

0x9caf,	// (0x00022cc4) volume_small_pane_srt_g6_ParamLimits

0x9caf,	// (0x00022cc4) volume_small_pane_srt_g6

0x9cc0,	// (0x00022cd5) volume_small_pane_srt_g7_ParamLimits

0x9cc0,	// (0x00022cd5) volume_small_pane_srt_g7

0x9cd1,	// (0x00022ce6) volume_small_pane_srt_g8_ParamLimits

0x9cd1,	// (0x00022ce6) volume_small_pane_srt_g8

0x9ce2,	// (0x00022cf7) volume_small_pane_srt_g9_ParamLimits

0x9ce2,	// (0x00022cf7) volume_small_pane_srt_g9

0x9cf3,	// (0x00022d08) volume_small_pane_srt_g10_ParamLimits

0x9cf3,	// (0x00022d08) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x000287ad) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x000287ad) volume_small_pane_srt_g

0x70aa,	// (0x000200bf) query_popup_data_pane_cp2

0xc441,	// (0x00025456) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc441,	// (0x00025456) navi_navi_icon_text_pane_srt_t1

0xb982,	// (0x00024997) navi_tabs_2_long_pane_srt

0xb982,	// (0x00024997) navi_tabs_2_pane_srt

0xb982,	// (0x00024997) navi_tabs_3_long_pane_srt

0xb982,	// (0x00024997) navi_tabs_3_pane_srt

0xb982,	// (0x00024997) navi_tabs_4_pane_srt

0xa235,	// (0x0002324a) tabs_2_active_pane_srt_ParamLimits

0xa235,	// (0x0002324a) tabs_2_active_pane_srt

0xa245,	// (0x0002325a) tabs_2_passive_pane_srt_ParamLimits

0xa245,	// (0x0002325a) tabs_2_passive_pane_srt

0xaf67,	// (0x00023f7c) bg_passive_tab_pane_cp1_srt_ParamLimits

0xaf67,	// (0x00023f7c) bg_passive_tab_pane_cp1_srt

0xc41f,	// (0x00025434) bg_passive_tab_pane_g1_cp1_srt

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp1_srt

0xc428,	// (0x0002543d) bg_passive_tab_pane_g3_cp1_srt

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp1_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp1_srt

0xc431,	// (0x00025446) tabs_2_active_pane_srt_g1

0x9669,	// (0x0002267e) tabs_2_active_pane_srt_t1_ParamLimits

0x9669,	// (0x0002267e) tabs_2_active_pane_srt_t1

0xc41f,	// (0x00025434) bg_active_tab_pane_g1_cp1_srt

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp1_srt

0xc428,	// (0x0002543d) bg_active_tab_pane_g3_cp1_srt

0xa202,	// (0x00023217) tabs_3_active_pane_srt_ParamLimits

0xa202,	// (0x00023217) tabs_3_active_pane_srt

0xa213,	// (0x00023228) tabs_3_passive_pane_cp_srt_ParamLimits

0xa213,	// (0x00023228) tabs_3_passive_pane_cp_srt

0xa224,	// (0x00023239) tabs_3_passive_pane_srt_ParamLimits

0xa224,	// (0x00023239) tabs_3_passive_pane_srt

0xaf67,	// (0x00023f7c) bg_passive_tab_pane_cp2_srt_ParamLimits

0xaf67,	// (0x00023f7c) bg_passive_tab_pane_cp2_srt

0x8510,	// (0x00021525) bg_passive_tab_pane_g1_cp2_srt

0x811a,	// (0x0002112f) bg_passive_tab_pane_g2_cp2_srt

0x8507,	// (0x0002151c) bg_passive_tab_pane_g3_cp2_srt

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp2_srt_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_active_tab_pane_cp2_srt

0xc417,	// (0x0002542c) tabs_3_active_pane_srt_g1

0x939b,	// (0x000223b0) tabs_3_active_pane_srt_t1_ParamLimits

0x939b,	// (0x000223b0) tabs_3_active_pane_srt_t1

0x8510,	// (0x00021525) bg_active_tab_pane_g1_cp2_srt

0x811a,	// (0x0002112f) bg_active_tab_pane_g2_cp2_srt

0x8507,	// (0x0002151c) bg_active_tab_pane_g3_cp2_srt

0xa1ba,	// (0x000231cf) tabs_4_active_pane_srt_ParamLimits

0xa1ba,	// (0x000231cf) tabs_4_active_pane_srt

0xa1cc,	// (0x000231e1) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa1cc,	// (0x000231e1) tabs_4_passive_pane_cp2_srt

0xaf1d,	// (0x00023f32) aid_size_cell_toolbar

0x968e,	// (0x000226a3) main_idle_act_pane_ParamLimits

0xafed,	// (0x00024002) popup_large_graphic_colour_window_ParamLimits

0xdc3b,	// (0x00026c50) popup_toolbar_window_ParamLimits

0xdc3b,	// (0x00026c50) popup_toolbar_window

0xd170,	// (0x00026185) list_single_graphic_2heading_pane_ParamLimits

0xd170,	// (0x00026185) list_single_graphic_2heading_pane

0x7d8c,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane

0x7d9e,	// (0x00020db3) aid_size_cell_apps_grid_prt_pane

0xaf67,	// (0x00023f7c) bg_wml_button_pane_cp1_ParamLimits

0xaf67,	// (0x00023f7c) bg_wml_button_pane_cp1

0xe1e0,	// (0x000271f5) form_midp_field_text_pane_t1_ParamLimits

0xb313,	// (0x00024328) input_focus_pane_cp050_ParamLimits

0xb453,	// (0x00024468) list_midp_form_text_pane_ParamLimits

0xb430,	// (0x00024445) input_focus_pane_cp051_ParamLimits

0xb444,	// (0x00024459) list_midp_choice_pane_ParamLimits

0xe17a,	// (0x0002718f) list_single_2graphic_pane_cp3_ParamLimits

0xe17a,	// (0x0002718f) list_single_2graphic_pane_cp3

0xe18e,	// (0x000271a3) list_single_midp_graphic_pane_ParamLimits

0xe18e,	// (0x000271a3) list_single_midp_graphic_pane

0x8f95,	// (0x00021faa) list_single_graphic_2heading_pane_g1_ParamLimits

0x8f95,	// (0x00021faa) list_single_graphic_2heading_pane_g1

0x8fa1,	// (0x00021fb6) list_single_graphic_2heading_pane_g4_ParamLimits

0x8fa1,	// (0x00021fb6) list_single_graphic_2heading_pane_g4

0x8fad,	// (0x00021fc2) list_single_graphic_2heading_pane_g5_ParamLimits

0x8fad,	// (0x00021fc2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00028800) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00028800) list_single_graphic_2heading_pane_g

0x8fb9,	// (0x00021fce) list_single_graphic_2heading_pane_t1_ParamLimits

0x8fb9,	// (0x00021fce) list_single_graphic_2heading_pane_t1

0x8fcd,	// (0x00021fe2) list_single_graphic_2heading_pane_t2_ParamLimits

0x8fcd,	// (0x00021fe2) list_single_graphic_2heading_pane_t2

0x8fe7,	// (0x00021ffc) list_single_graphic_2heading_pane_t3_ParamLimits

0x8fe7,	// (0x00021ffc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00028807) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00028807) list_single_graphic_2heading_pane_t

0xb16f,	// (0x00024184) bg_popup_sub_pane_cp2

0xb195,	// (0x000241aa) grid_toobar_pane

0x9e6d,	// (0x00022e82) cell_toolbar_pane_ParamLimits

0x9e6d,	// (0x00022e82) cell_toolbar_pane

0xb1cb,	// (0x000241e0) cell_toolbar_pane_g1_ParamLimits

0xb1cb,	// (0x000241e0) cell_toolbar_pane_g1

0xb1dd,	// (0x000241f2) cell_toolbar_pane_g2_ParamLimits

0xb1dd,	// (0x000241f2) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x00028815) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x00028815) cell_toolbar_pane_g

0xb1ff,	// (0x00024214) grid_highlight_pane_cp2_ParamLimits

0xb1ff,	// (0x00024214) grid_highlight_pane_cp2

0xb219,	// (0x0002422e) toolbar_button_pane

0xb225,	// (0x0002423a) toolbar_button_pane_g1

0xb22d,	// (0x00024242) toolbar_button_pane_g2

0xb235,	// (0x0002424a) toolbar_button_pane_g3

0xb23d,	// (0x00024252) toolbar_button_pane_g4

0xb245,	// (0x0002425a) toolbar_button_pane_g5

0xb24d,	// (0x00024262) toolbar_button_pane_g6

0xb255,	// (0x0002426a) toolbar_button_pane_g7

0xb25d,	// (0x00024272) toolbar_button_pane_g8

0xb265,	// (0x0002427a) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0002881a) toolbar_button_pane_g

0x9e9c,	// (0x00022eb1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9e9c,	// (0x00022eb1) list_single_2graphic_pane_g1_cp3

0x9ea8,	// (0x00022ebd) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9ea8,	// (0x00022ebd) list_single_2graphic_pane_g2_cp3

0x9eb7,	// (0x00022ecc) list_single_2graphic_pane_g3_cp3

0x9ebf,	// (0x00022ed4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9ebf,	// (0x00022ed4) list_single_2graphic_pane_g4_cp3

0x9ecb,	// (0x00022ee0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9ecb,	// (0x00022ee0) list_single_2graphic_pane_t1_cp3

0x9ee5,	// (0x00022efa) list_single_midp_graphic_pane_g2_ParamLimits

0x9ee5,	// (0x00022efa) list_single_midp_graphic_pane_g2

0xaf25,	// (0x00023f3a) aid_zoom_text_primary

0xd070,	// (0x00026085) aid_zoom_text_secondary

0x85c2,	// (0x000215d7) status_small_pane_g7_ParamLimits

0x85c2,	// (0x000215d7) status_small_pane_g7

0x85e5,	// (0x000215fa) status_small_pane_t1_ParamLimits

0x9316,	// (0x0002232b) title_pane_g2

0x0003,

0xf592,	// (0x000285a7) title_pane_g

0x9568,	// (0x0002257d) aid_size_cell_colour_1_pane_ParamLimits

0x9568,	// (0x0002257d) aid_size_cell_colour_1_pane

0x957c,	// (0x00022591) aid_size_cell_colour_2_pane_ParamLimits

0x957c,	// (0x00022591) aid_size_cell_colour_2_pane

0x9590,	// (0x000225a5) aid_size_cell_colour_3_pane_ParamLimits

0x9590,	// (0x000225a5) aid_size_cell_colour_3_pane

0x95a4,	// (0x000225b9) aid_size_cell_colour_4_pane_ParamLimits

0x95a4,	// (0x000225b9) aid_size_cell_colour_4_pane

0x96c8,	// (0x000226dd) title_pane_stacon_g1_ParamLimits

0x96c8,	// (0x000226dd) title_pane_stacon_g1

0xb7b1,	// (0x000247c6) popup_note_wait_window_g3_ParamLimits

0xb7b1,	// (0x000247c6) popup_note_wait_window_g3

0xb827,	// (0x0002483c) popup_note_wait_window_t5_ParamLimits

0xb827,	// (0x0002483c) popup_note_wait_window_t5

0x6d96,	// (0x0001fdab) main_feb_china_hwr_fs_writing_pane

0xd92a,	// (0x0002693f) popup_feb_china_hwr_fs_window_ParamLimits

0xd92a,	// (0x0002693f) popup_feb_china_hwr_fs_window

0x9f07,	// (0x00022f1c) aid_size_cell_hwr_fs_ParamLimits

0x9f07,	// (0x00022f1c) aid_size_cell_hwr_fs

0xb313,	// (0x00024328) bg_popup_sub_pane_cp3_ParamLimits

0xb313,	// (0x00024328) bg_popup_sub_pane_cp3

0x9f1c,	// (0x00022f31) grid_hwr_fs_pane_ParamLimits

0x9f1c,	// (0x00022f31) grid_hwr_fs_pane

0x9f30,	// (0x00022f45) linegrid_hwr_fs_pane_ParamLimits

0x9f30,	// (0x00022f45) linegrid_hwr_fs_pane

0x9f40,	// (0x00022f55) cell_hwr_fs_pane_ParamLimits

0x9f40,	// (0x00022f55) cell_hwr_fs_pane

0xb31f,	// (0x00024334) linegrid_hwr_fs_pane_g1_ParamLimits

0xb31f,	// (0x00024334) linegrid_hwr_fs_pane_g1

0xe14e,	// (0x00027163) linegrid_hwr_fs_pane_g2_ParamLimits

0xe14e,	// (0x00027163) linegrid_hwr_fs_pane_g2

0xb32b,	// (0x00024340) linegrid_hwr_fs_pane_g3_ParamLimits

0xb32b,	// (0x00024340) linegrid_hwr_fs_pane_g3

0x9f5e,	// (0x00022f73) linegrid_hwr_fs_pane_g4_ParamLimits

0x9f5e,	// (0x00022f73) linegrid_hwr_fs_pane_g4

0x9f78,	// (0x00022f8d) linegrid_hwr_fs_pane_g5_ParamLimits

0x9f78,	// (0x00022f8d) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x00028845) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x00028845) linegrid_hwr_fs_pane_g

0xb337,	// (0x0002434c) cell_hwr_fs_pane_g1_ParamLimits

0xb337,	// (0x0002434c) cell_hwr_fs_pane_g1

0xb13d,	// (0x00024152) cell_hwr_fs_pane_g2_ParamLimits

0xb13d,	// (0x00024152) cell_hwr_fs_pane_g2

0xe160,	// (0x00027175) cell_hwr_fs_pane_g3_ParamLimits

0xe160,	// (0x00027175) cell_hwr_fs_pane_g3

0xe16d,	// (0x00027182) cell_hwr_fs_pane_g4_ParamLimits

0xe16d,	// (0x00027182) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00028850) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00028850) cell_hwr_fs_pane_g

0x9f8e,	// (0x00022fa3) cell_hwr_fs_pane_t1

0x6d96,	// (0x0001fdab) grid_highlight_pane_cp6

0x6d96,	// (0x0001fdab) main_idle_act2_pane

0x7b95,	// (0x00020baa) aid_inside_area_popup_secondary

0xe265,	// (0x0002727a) aid_inside_area_window_primary_ParamLimits

0xe265,	// (0x0002727a) aid_inside_area_window_primary

0xc525,	// (0x0002553a) ai2_news_ticker_pane

0xc52d,	// (0x00025542) aid_size_cell_ai1_link_ParamLimits

0xc52d,	// (0x00025542) aid_size_cell_ai1_link

0xe5ad,	// (0x000275c2) popup_ai2_data_window_ParamLimits

0xe5ad,	// (0x000275c2) popup_ai2_data_window

0xc547,	// (0x0002555c) popup_ai2_link_window_ParamLimits

0xc547,	// (0x0002555c) popup_ai2_link_window

0xb313,	// (0x00024328) bg_popup_sub_pane_cp4_ParamLimits

0xb313,	// (0x00024328) bg_popup_sub_pane_cp4

0xc55b,	// (0x00025570) grid_ai2_link_pane_ParamLimits

0xc55b,	// (0x00025570) grid_ai2_link_pane

0xc572,	// (0x00025587) popup_ai2_link_window_g1_ParamLimits

0xc572,	// (0x00025587) popup_ai2_link_window_g1

0xc57e,	// (0x00025593) popup_ai2_link_window_g2_ParamLimits

0xc57e,	// (0x00025593) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x00028a17) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x00028a17) popup_ai2_link_window_g

0xc58d,	// (0x000255a2) ai2_mp_button_pane

0xc595,	// (0x000255aa) ai2_mp_volume_pane

0xb430,	// (0x00024445) bg_popup_sub_pane_cp5_ParamLimits

0xb430,	// (0x00024445) bg_popup_sub_pane_cp5

0xc59d,	// (0x000255b2) heading_ai2_gene_pane_ParamLimits

0xc59d,	// (0x000255b2) heading_ai2_gene_pane

0xc5a9,	// (0x000255be) list_ai2_gene_pane_ParamLimits

0xc5a9,	// (0x000255be) list_ai2_gene_pane

0xc5f1,	// (0x00025606) cell_ai2_link_pane_ParamLimits

0xc5f1,	// (0x00025606) cell_ai2_link_pane

0xc607,	// (0x0002561c) cell_ai2_link_pane_g1

0x6d96,	// (0x0001fdab) grid_highlight_pane_cp7

0xa272,	// (0x00023287) ai2_mp_volume_pane_g1

0xc69c,	// (0x000256b1) ai2_mp_volume_pane_g2

0xe5d8,	// (0x000275ed) list_ai2_gene_pane_t1

0xc6a4,	// (0x000256b9) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x00028a30) ai2_mp_volume_pane_g

0xa27a,	// (0x0002328f) volume_small_pane_cp3

0xc6ac,	// (0x000256c1) aid_size_cell_ai2_button

0xc6b4,	// (0x000256c9) grid_ai2_button_pane

0xc6bd,	// (0x000256d2) cell_ai2_button_pane_ParamLimits

0xc6bd,	// (0x000256d2) cell_ai2_button_pane

0x6d14,	// (0x0001fd29) cell_ai2_button_pane_g1

0x6d96,	// (0x0001fdab) grid_highlight_pane_cp8

0xc65c,	// (0x00025671) ai2_gene_pane_t1_ParamLimits

0xc65c,	// (0x00025671) ai2_gene_pane_t1

0xd8d0,	// (0x000268e5) aid_height_parent_landscape

0xe363,	// (0x00027378) aid_height_set_list

0xc319,	// (0x0002532e) aid_size_parent

0xc3f5,	// (0x0002540a) aid_size_cell_graphic_pane_ParamLimits

0xc5b9,	// (0x000255ce) popup_ai2_data_window_g1_ParamLimits

0xc5b9,	// (0x000255ce) popup_ai2_data_window_g1

0xc5c5,	// (0x000255da) ai2_news_ticker_pane_g1

0xc5cd,	// (0x000255e2) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x00028a1c) ai2_news_ticker_pane_g

0xc5d5,	// (0x000255ea) ai2_news_ticker_pane_t1

0xc5e3,	// (0x000255f8) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x00028a21) ai2_news_ticker_pane_t

0xc3d6,	// (0x000253eb) heading_ai2_gene_pane_g1

0xc610,	// (0x00025625) heading_ai2_gene_pane_t1_ParamLimits

0xc610,	// (0x00025625) heading_ai2_gene_pane_t1

0xc625,	// (0x0002563a) list_highlight_pane_cp6

0xe5c1,	// (0x000275d6) ai2_gene_pane_ParamLimits

0xe5c1,	// (0x000275d6) ai2_gene_pane

0xe5e6,	// (0x000275fb) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x00028a26) list_ai2_gene_pane_t

0xc62d,	// (0x00025642) list_highlight_pane_cp8_ParamLimits

0xc62d,	// (0x00025642) list_highlight_pane_cp8

0xc63e,	// (0x00025653) ai2_gene_pane_g1_ParamLimits

0xc63e,	// (0x00025653) ai2_gene_pane_g1

0xc650,	// (0x00025665) ai2_gene_pane_g2_ParamLimits

0xc650,	// (0x00025665) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x00028a2b) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x00028a2b) ai2_gene_pane_g

0x7341,	// (0x00020356) scroll_pane_cp12

0x9e24,	// (0x00022e39) control_pane_t3_ParamLimits

0x9e24,	// (0x00022e39) control_pane_t3

0x85d6,	// (0x000215eb) status_small_pane_g8_ParamLimits

0x85d6,	// (0x000215eb) status_small_pane_g8

0xd998,	// (0x000269ad) popup_find_window_ParamLimits

0xdafb,	// (0x00026b10) popup_note_image_window_ParamLimits

0xc96a,	// (0x0002597f) list_double2_graphic_pane_vc_g1_ParamLimits

0xc96a,	// (0x0002597f) list_double2_graphic_pane_vc_g1

0xd09d,	// (0x000260b2) list_double2_graphic_pane_vc_g2_ParamLimits

0xd09d,	// (0x000260b2) list_double2_graphic_pane_vc_g2

0xd0a9,	// (0x000260be) list_double2_graphic_pane_vc_g3_ParamLimits

0xd0a9,	// (0x000260be) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002880e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002880e) list_double2_graphic_pane_vc_g

0xd0b5,	// (0x000260ca) list_double2_graphic_pane_vc_t1_ParamLimits

0xd0b5,	// (0x000260ca) list_double2_graphic_pane_vc_t1

0xd09d,	// (0x000260b2) list_single_heading_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260b2) list_single_heading_pane_vc_g1

0xd0a9,	// (0x000260be) list_single_heading_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260be) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0002882f) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0002882f) list_single_heading_pane_vc_g

0xd0cb,	// (0x000260e0) list_single_heading_pane_vc_t1_ParamLimits

0xd0cb,	// (0x000260e0) list_single_heading_pane_vc_t1

0xd0e1,	// (0x000260f6) list_single_heading_pane_vc_t2_ParamLimits

0xd0e1,	// (0x000260f6) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00028834) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00028834) list_single_heading_pane_vc_t

0xb26d,	// (0x00024282) list_setting_number_pane_vc_g1_ParamLimits

0xb26d,	// (0x00024282) list_setting_number_pane_vc_g1

0xb279,	// (0x0002428e) list_setting_number_pane_vc_g2_ParamLimits

0xb279,	// (0x0002428e) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00028839) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00028839) list_setting_number_pane_vc_g

0xb285,	// (0x0002429a) list_setting_number_pane_vc_t1_ParamLimits

0xb285,	// (0x0002429a) list_setting_number_pane_vc_t1

0xb299,	// (0x000242ae) list_setting_number_pane_vc_t2_ParamLimits

0xb299,	// (0x000242ae) list_setting_number_pane_vc_t2

0xb2b5,	// (0x000242ca) list_setting_number_pane_vc_t3_ParamLimits

0xb2b5,	// (0x000242ca) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x0002883e) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x0002883e) list_setting_number_pane_vc_t

0xb2db,	// (0x000242f0) set_value_pane_vc_ParamLimits

0xb2db,	// (0x000242f0) set_value_pane_vc

0xd170,	// (0x00026185) list_double2_graphic_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double2_graphic_pane_vc

0xc374,	// (0x00025389) list_double2_large_graphic_pane_vc_ParamLimits

0xc374,	// (0x00025389) list_double2_large_graphic_pane_vc

0xd170,	// (0x00026185) list_double2_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double2_pane_vc

0xd170,	// (0x00026185) list_double_graphic_heading_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double_graphic_heading_pane_vc

0xd170,	// (0x00026185) list_double_graphic_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double_graphic_pane_vc

0xd170,	// (0x00026185) list_double_heading_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double_heading_pane_vc

0xc374,	// (0x00025389) list_double_large_graphic_pane_vc_ParamLimits

0xc374,	// (0x00025389) list_double_large_graphic_pane_vc

0xd170,	// (0x00026185) list_double_number_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double_number_pane_vc

0xd170,	// (0x00026185) list_double_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double_pane_vc

0xd170,	// (0x00026185) list_double_time_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_double_time_pane_vc

0xd170,	// (0x00026185) list_setting_number_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_setting_number_pane_vc

0xd170,	// (0x00026185) list_setting_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_setting_pane_vc

0xd170,	// (0x00026185) list_single_graphic_heading_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_single_graphic_heading_pane_vc

0xd170,	// (0x00026185) list_single_heading_pane_vc_ParamLimits

0xd170,	// (0x00026185) list_single_heading_pane_vc

0xd184,	// (0x00026199) list_single_number_heading_pane_vc_ParamLimits

0xd184,	// (0x00026199) list_single_number_heading_pane_vc

0xd1c8,	// (0x000261dd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd1c8,	// (0x000261dd) list_double_graphic_heading_pane_vc_g1

0xd09d,	// (0x000260b2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd09d,	// (0x000260b2) list_double_graphic_heading_pane_vc_g2

0xd0a9,	// (0x000260be) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd0a9,	// (0x000260be) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x00028a37) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x00028a37) list_double_graphic_heading_pane_vc_g

0xd1d4,	// (0x000261e9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd1d4,	// (0x000261e9) list_double_graphic_heading_pane_vc_t1

0xd0cb,	// (0x000260e0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd0cb,	// (0x000260e0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x00028a3e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x00028a3e) list_double_graphic_heading_pane_vc_t

0xb26d,	// (0x00024282) list_setting_pane_vc_g1_ParamLimits

0xb26d,	// (0x00024282) list_setting_pane_vc_g1

0xb279,	// (0x0002428e) list_setting_pane_vc_g2_ParamLimits

0xb279,	// (0x0002428e) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00028839) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00028839) list_setting_pane_vc_g

0xc8ac,	// (0x000258c1) list_setting_pane_vc_t1_ParamLimits

0xc8ac,	// (0x000258c1) list_setting_pane_vc_t1

0xc8c0,	// (0x000258d5) list_setting_pane_vc_t2_ParamLimits

0xc8c0,	// (0x000258d5) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x00028a81) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x00028a81) list_setting_pane_vc_t

0xb2db,	// (0x000242f0) set_value_pane_cp_vc_ParamLimits

0xb2db,	// (0x000242f0) set_value_pane_cp_vc

0xd09d,	// (0x000260b2) list_single_number_heading_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260b2) list_single_number_heading_pane_vc_g1

0xd0a9,	// (0x000260be) list_single_number_heading_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260be) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0002882f) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0002882f) list_single_number_heading_pane_vc_g

0xd0cb,	// (0x000260e0) list_single_number_heading_pane_vc_t1_ParamLimits

0xd0cb,	// (0x000260e0) list_single_number_heading_pane_vc_t1

0xd1e6,	// (0x000261fb) list_single_number_heading_pane_vc_t2_ParamLimits

0xd1e6,	// (0x000261fb) list_single_number_heading_pane_vc_t2

0xd1f8,	// (0x0002620d) list_single_number_heading_pane_vc_t3_ParamLimits

0xd1f8,	// (0x0002620d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x00028a86) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00028a86) list_single_number_heading_pane_vc_t

0xc96a,	// (0x0002597f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc96a,	// (0x0002597f) list_single_graphic_heading_pane_vc_g1

0xd09d,	// (0x000260b2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd09d,	// (0x000260b2) list_single_graphic_heading_pane_vc_g4

0xd0a9,	// (0x000260be) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd0a9,	// (0x000260be) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0002880e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002880e) list_single_graphic_heading_pane_vc_g

0xd0cb,	// (0x000260e0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd0cb,	// (0x000260e0) list_single_graphic_heading_pane_vc_t1

0xd20a,	// (0x0002621f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd20a,	// (0x0002621f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x00028a8d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x00028a8d) list_single_graphic_heading_pane_vc_t

0xd09d,	// (0x000260b2) list_double2_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260b2) list_double2_pane_vc_g1

0xd0a9,	// (0x000260be) list_double2_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260be) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x0002882f) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x0002882f) list_double2_pane_vc_g

0xd21c,	// (0x00026231) list_double2_pane_vc_t1_ParamLimits

0xd21c,	// (0x00026231) list_double2_pane_vc_t1

0xd232,	// (0x00026247) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd232,	// (0x00026247) list_double2_large_graphic_pane_vc_g1

0xd23e,	// (0x00026253) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd23e,	// (0x00026253) list_double2_large_graphic_pane_vc_g2

0xd24a,	// (0x0002625f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd24a,	// (0x0002625f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x00028a92) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x00028a92) list_double2_large_graphic_pane_vc_g

0xd256,	// (0x0002626b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd256,	// (0x0002626b) list_double2_large_graphic_pane_vc_t1

0xd26c,	// (0x00026281) list_double_time_pane_vc_g1_ParamLimits

0xd26c,	// (0x00026281) list_double_time_pane_vc_g1

0xd278,	// (0x0002628d) list_double_time_pane_vc_g2_ParamLimits

0xd278,	// (0x0002628d) list_double_time_pane_vc_g2

0x0001,

0xfa84,	// (0x00028a99) list_double_time_pane_vc_g_ParamLimits

0xfa84,	// (0x00028a99) list_double_time_pane_vc_g

0xd284,	// (0x00026299) list_double_time_pane_vc_t1_ParamLimits

0xd284,	// (0x00026299) list_double_time_pane_vc_t1

0xd29d,	// (0x000262b2) list_double_time_pane_vc_t2_ParamLimits

0xd29d,	// (0x000262b2) list_double_time_pane_vc_t2

0xd2d6,	// (0x000262eb) list_double_time_pane_vc_t3_ParamLimits

0xd2d6,	// (0x000262eb) list_double_time_pane_vc_t3

0xd2ee,	// (0x00026303) list_double_time_pane_vc_t4_ParamLimits

0xd2ee,	// (0x00026303) list_double_time_pane_vc_t4

0x0003,

0xfa89,	// (0x00028a9e) list_double_time_pane_vc_t_ParamLimits

0xfa89,	// (0x00028a9e) list_double_time_pane_vc_t

0xd09d,	// (0x000260b2) list_double_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260b2) list_double_pane_vc_g1

0xd0a9,	// (0x000260be) list_double_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260be) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x0002882f) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x0002882f) list_double_pane_vc_g

0xd300,	// (0x00026315) list_double_pane_vc_t1_ParamLimits

0xd300,	// (0x00026315) list_double_pane_vc_t1

0xd312,	// (0x00026327) list_double_pane_vc_t2_ParamLimits

0xd312,	// (0x00026327) list_double_pane_vc_t2

0x0001,

0xfa92,	// (0x00028aa7) list_double_pane_vc_t_ParamLimits

0xfa92,	// (0x00028aa7) list_double_pane_vc_t

0xd09d,	// (0x000260b2) list_double_number_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260b2) list_double_number_pane_vc_g1

0xd0a9,	// (0x000260be) list_double_number_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260be) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x0002882f) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x0002882f) list_double_number_pane_vc_g

0xd328,	// (0x0002633d) list_double_number_pane_vc_t1_ParamLimits

0xd328,	// (0x0002633d) list_double_number_pane_vc_t1

0xd33c,	// (0x00026351) list_double_number_pane_vc_t2_ParamLimits

0xd33c,	// (0x00026351) list_double_number_pane_vc_t2

0xd312,	// (0x00026327) list_double_number_pane_vc_t3_ParamLimits

0xd312,	// (0x00026327) list_double_number_pane_vc_t3

0x0002,

0xfa97,	// (0x00028aac) list_double_number_pane_vc_t_ParamLimits

0xfa97,	// (0x00028aac) list_double_number_pane_vc_t

0xd34e,	// (0x00026363) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd34e,	// (0x00026363) list_double_large_graphic_pane_vc_g1

0xd35a,	// (0x0002636f) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd35a,	// (0x0002636f) list_double_large_graphic_pane_vc_g2

0xd24a,	// (0x0002625f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd24a,	// (0x0002625f) list_double_large_graphic_pane_vc_g3

0xd369,	// (0x0002637e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd369,	// (0x0002637e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9e,	// (0x00028ab3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9e,	// (0x00028ab3) list_double_large_graphic_pane_vc_g

0xd375,	// (0x0002638a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd375,	// (0x0002638a) list_double_large_graphic_pane_vc_t1

0xd387,	// (0x0002639c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd387,	// (0x0002639c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa7,	// (0x00028abc) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa7,	// (0x00028abc) list_double_large_graphic_pane_vc_t

0xd09d,	// (0x000260b2) list_double_heading_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260b2) list_double_heading_pane_vc_g1

0xd0a9,	// (0x000260be) list_double_heading_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260be) list_double_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0002882f) list_double_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0002882f) list_double_heading_pane_vc_g

0xd39e,	// (0x000263b3) list_double_heading_pane_vc_t1_ParamLimits

0xd39e,	// (0x000263b3) list_double_heading_pane_vc_t1

0xd0cb,	// (0x000260e0) list_double_heading_pane_vc_t2_ParamLimits

0xd0cb,	// (0x000260e0) list_double_heading_pane_vc_t2

0x0001,

0xfaac,	// (0x00028ac1) list_double_heading_pane_vc_t_ParamLimits

0xfaac,	// (0x00028ac1) list_double_heading_pane_vc_t

0xd3b0,	// (0x000263c5) list_double_graphic_pane_vc_g1_ParamLimits

0xd3b0,	// (0x000263c5) list_double_graphic_pane_vc_g1

0xd3c0,	// (0x000263d5) list_double_graphic_pane_vc_g2_ParamLimits

0xd3c0,	// (0x000263d5) list_double_graphic_pane_vc_g2

0xd3cf,	// (0x000263e4) list_double_graphic_pane_vc_g3_ParamLimits

0xd3cf,	// (0x000263e4) list_double_graphic_pane_vc_g3

0x0002,

0xfab1,	// (0x00028ac6) list_double_graphic_pane_vc_g_ParamLimits

0xfab1,	// (0x00028ac6) list_double_graphic_pane_vc_g

0xd3db,	// (0x000263f0) list_double_graphic_pane_vc_t1_ParamLimits

0xd3db,	// (0x000263f0) list_double_graphic_pane_vc_t1

0xd312,	// (0x00026327) list_double_graphic_pane_vc_t2_ParamLimits

0xd312,	// (0x00026327) list_double_graphic_pane_vc_t2

0x0001,

0xfab8,	// (0x00028acd) list_double_graphic_pane_vc_t_ParamLimits

0xfab8,	// (0x00028acd) list_double_graphic_pane_vc_t

0x9027,	// (0x0002203c) aid_size_cell_fastswap

0x902f,	// (0x00022044) aid_size_cell_touch_ParamLimits

0x902f,	// (0x00022044) aid_size_cell_touch

0x91e3,	// (0x000221f8) popup_fast_swap_wide_window_ParamLimits

0x91e3,	// (0x000221f8) popup_fast_swap_wide_window

0x92a9,	// (0x000222be) touch_pane_ParamLimits

0x92a9,	// (0x000222be) touch_pane

0xcdd6,	// (0x00025deb) button_value_adjust_pane_cp2

0xcdde,	// (0x00025df3) button_value_adjust_pane_cp4

0xcdfe,	// (0x00025e13) form_field_data_pane_cp2

0xce1d,	// (0x00025e32) form_field_data_wide_pane_cp2

0x7dd5,	// (0x00020dea) bg_scroll_pane_ParamLimits

0x985e,	// (0x00022873) scroll_handle_pane_ParamLimits

0x9872,	// (0x00022887) scroll_sc2_down_pane_ParamLimits

0x9872,	// (0x00022887) scroll_sc2_down_pane

0x7e06,	// (0x00020e1b) scroll_sc2_up_pane_ParamLimits

0x7e06,	// (0x00020e1b) scroll_sc2_up_pane

0xe717,	// (0x0002772c) grid_wheel_folder_pane_g1_ParamLimits

0xe717,	// (0x0002772c) grid_wheel_folder_pane_g1

0x9b3c,	// (0x00022b51) clock_nsta_pane_cp2_ParamLimits

0x9b3c,	// (0x00022b51) clock_nsta_pane_cp2

0x9bae,	// (0x00022bc3) listscroll_midp_pane_ParamLimits

0x9bba,	// (0x00022bcf) midp_canvas_pane

0x9e65,	// (0x00022e7a) nsta_clock_indic_pane

0xaf4d,	// (0x00023f62) listscroll_form_pane_vc

0xaf55,	// (0x00023f6a) listscroll_set_pane_vc_ParamLimits

0xaf55,	// (0x00023f6a) listscroll_set_pane_vc

0xdd29,	// (0x00026d3e) clock_nsta_pane

0xdd36,	// (0x00026d4b) indicator_nsta_pane

0xb16f,	// (0x00024184) bg_popup_sub_pane_cp2_ParamLimits

0xb183,	// (0x00024198) find_pane_cp2_ParamLimits

0xb183,	// (0x00024198) find_pane_cp2

0xb195,	// (0x000241aa) grid_toobar_pane_ParamLimits

0xb2e7,	// (0x000242fc) list_form_gen_pane_vc_ParamLimits

0xb2e7,	// (0x000242fc) list_form_gen_pane_vc

0xb2fd,	// (0x00024312) scroll_pane_cp8_vc_ParamLimits

0xb2fd,	// (0x00024312) scroll_pane_cp8_vc

0xb34d,	// (0x00024362) data_form_wide_pane_vc_ParamLimits

0xb34d,	// (0x00024362) data_form_wide_pane_vc

0xb359,	// (0x0002436e) form_field_data_wide_pane_vc_g1

0xb361,	// (0x00024376) form_field_data_wide_pane_vc_t1_ParamLimits

0xb361,	// (0x00024376) form_field_data_wide_pane_vc_t1

0x7a57,	// (0x00020a6c) input_focus_pane_cp6_vc_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_cp6_vc

0xe203,	// (0x00027218) list_midp_pane_ParamLimits

0xe20f,	// (0x00027224) scroll_pane_cp16_ParamLimits

0xe20f,	// (0x00027224) scroll_pane_cp16

0xb5ba,	// (0x000245cf) button_value_adjust_pane_ParamLimits

0xb5ba,	// (0x000245cf) button_value_adjust_pane

0xe36f,	// (0x00027384) button_value_adjust_pane_cp6_ParamLimits

0xe36f,	// (0x00027384) button_value_adjust_pane_cp6

0xe477,	// (0x0002748c) settings_code_pane_cp_ParamLimits

0xe477,	// (0x0002748c) settings_code_pane_cp

0x6d14,	// (0x0001fd29) cell_touch_pane_g1

0x6d14,	// (0x0001fd29) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00028757) cell_touch_pane_g

0xe5f4,	// (0x00027609) cell_touch_pane_cp_ParamLimits

0xe5f4,	// (0x00027609) cell_touch_pane_cp

0xe604,	// (0x00027619) cell_touch_pane_ParamLimits

0xe604,	// (0x00027619) cell_touch_pane

0x6d14,	// (0x0001fd29) scroll_sc2_down_pane_g1

0x6d14,	// (0x0001fd29) scroll_sc2_up_pane_g1

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp4_vc

0xc6cf,	// (0x000256e4) list_set_graphic_pane_vc_g1_ParamLimits

0xc6cf,	// (0x000256e4) list_set_graphic_pane_vc_g1

0xc6db,	// (0x000256f0) list_set_graphic_pane_vc_g2_ParamLimits

0xc6db,	// (0x000256f0) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x00028a43) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x00028a43) list_set_graphic_pane_vc_g

0xc6e7,	// (0x000256fc) text_primary_small_cp13_vc_ParamLimits

0xc6e7,	// (0x000256fc) text_primary_small_cp13_vc

0xc6ff,	// (0x00025714) list_set_graphic_pane_vc_ParamLimits

0xc6ff,	// (0x00025714) list_set_graphic_pane_vc

0x6d96,	// (0x0001fdab) input_focus_pane_cp2_vc

0x6d14,	// (0x0001fd29) setting_code_pane_vc_g1

0xc712,	// (0x00025727) setting_code_pane_vc_t1

0xc720,	// (0x00025735) set_text_pane_vc_t1_ParamLimits

0xc720,	// (0x00025735) set_text_pane_vc_t1

0x6d96,	// (0x0001fdab) input_focus_pane_cp1_vc

0xc73b,	// (0x00025750) list_set_text_pane_vc

0x6d14,	// (0x0001fd29) setting_text_pane_vc_g1

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp2_vc

0xc745,	// (0x0002575a) setting_slider_graphic_pane_vc_g1

0xc74d,	// (0x00025762) setting_slider_graphic_pane_vc_t1

0xc75b,	// (0x00025770) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00028a48) setting_slider_graphic_pane_vc_t

0xc769,	// (0x0002577e) slider_set_pane_cp_vc

0xc771,	// (0x00025786) slider_set_pane_vc_g1

0xc77a,	// (0x0002578f) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x00028a4d) slider_set_pane_vc_g

0x7aa6,	// (0x00020abb) set_opt_bg_pane_g1_copy1

0x7aae,	// (0x00020ac3) set_opt_bg_pane_g2_copy1

0xc7a6,	// (0x000257bb) set_opt_bg_pane_g3_copy1

0x7abe,	// (0x00020ad3) set_opt_bg_pane_g4_copy1

0x7ac6,	// (0x00020adb) set_opt_bg_pane_g5_copy1

0x7ace,	// (0x00020ae3) set_opt_bg_pane_g6_copy1

0xc7ae,	// (0x000257c3) set_opt_bg_pane_g7_copy1

0xc7b6,	// (0x000257cb) set_opt_bg_pane_g8_copy1

0xc7be,	// (0x000257d3) set_opt_bg_pane_g9_copy1

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp_vc

0xc7c6,	// (0x000257db) setting_slider_pane_vc_t1

0xc74d,	// (0x00025762) setting_slider_pane_vc_t2

0xc75b,	// (0x00025770) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x00028a5c) setting_slider_pane_vc_t

0xc769,	// (0x0002577e) slider_set_pane_vc

0x9f9c,	// (0x00022fb1) volume_set_pane_vc_g1

0xa283,	// (0x00023298) volume_set_pane_vc_g2

0xa28c,	// (0x000232a1) volume_set_pane_vc_g3

0xa295,	// (0x000232aa) volume_set_pane_vc_g4

0xa29e,	// (0x000232b3) volume_set_pane_vc_g5

0xa2a7,	// (0x000232bc) volume_set_pane_vc_g6

0xa2b0,	// (0x000232c5) volume_set_pane_vc_g7

0xa2b9,	// (0x000232ce) volume_set_pane_vc_g8

0xa2c2,	// (0x000232d7) volume_set_pane_vc_g9

0xa2cb,	// (0x000232e0) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x00028a63) volume_set_pane_vc_g

0xc7d5,	// (0x000257ea) volume_set_pane_vc

0xc7dd,	// (0x000257f2) button_value_adjust_pane_cp1_vc

0xc7e7,	// (0x000257fc) list_highlight_pane_cp2_vc

0xc7f0,	// (0x00025805) list_set_pane_vc_ParamLimits

0xc7f0,	// (0x00025805) list_set_pane_vc

0xc842,	// (0x00025857) main_pane_set_vc_t1_ParamLimits

0xc842,	// (0x00025857) main_pane_set_vc_t1

0xc857,	// (0x0002586c) main_pane_set_vc_t2_ParamLimits

0xc857,	// (0x0002586c) main_pane_set_vc_t2

0xc869,	// (0x0002587e) main_pane_set_vc_t3_ParamLimits

0xc869,	// (0x0002587e) main_pane_set_vc_t3

0xc87b,	// (0x00025890) main_pane_set_vc_t4_ParamLimits

0xc87b,	// (0x00025890) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x00028a78) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x00028a78) main_pane_set_vc_t

0xc88d,	// (0x000258a2) setting_code_pane_vc_ParamLimits

0xc88d,	// (0x000258a2) setting_code_pane_vc

0xc89c,	// (0x000258b1) setting_slider_graphic_pane_vc

0xc89c,	// (0x000258b1) setting_slider_pane_vc

0xc89c,	// (0x000258b1) setting_text_pane_vc

0xc89c,	// (0x000258b1) setting_volume_pane_vc

0xc8a4,	// (0x000258b9) scroll_pane_cp121_vc

0x7a42,	// (0x00020a57) set_content_pane_vc

0xd3ed,	// (0x00026402) button_value_adjust_pane_g1

0xd3f6,	// (0x0002640b) button_value_adjust_pane_g2

0x0001,

0xfabd,	// (0x00028ad2) button_value_adjust_pane_g

0xd3ff,	// (0x00026414) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd3ff,	// (0x00026414) form_field_slider_wide_pane_vc_t1

0xd415,	// (0x0002642a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd415,	// (0x0002642a) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac2,	// (0x00028ad7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac2,	// (0x00028ad7) form_field_slider_wide_pane_vc_t

0x6de4,	// (0x0001fdf9) input_focus_pane_cp10_vc_ParamLimits

0x6de4,	// (0x0001fdf9) input_focus_pane_cp10_vc

0xd42a,	// (0x0002643f) slider_cont_pane_cp1_vc_ParamLimits

0xd42a,	// (0x0002643f) slider_cont_pane_cp1_vc

0xc771,	// (0x00025786) slider_form_pane_g1_cp2

0xc77a,	// (0x0002578f) slider_form_pane_g2_cp2

0xd445,	// (0x0002645a) form_field_slider_pane_vc_t3

0xd453,	// (0x00026468) form_field_slider_pane_vc_t4

0xd461,	// (0x00026476) slider_form_pane_vc_ParamLimits

0xd461,	// (0x00026476) slider_form_pane_vc

0xd46e,	// (0x00026483) form_field_slider_pane_vc_t1_ParamLimits

0xd46e,	// (0x00026483) form_field_slider_pane_vc_t1

0xd484,	// (0x00026499) form_field_slider_pane_vc_t2_ParamLimits

0xd484,	// (0x00026499) form_field_slider_pane_vc_t2

0x0001,

0xfad2,	// (0x00028ae7) form_field_slider_pane_vc_t_ParamLimits

0xfad2,	// (0x00028ae7) form_field_slider_pane_vc_t

0x6de4,	// (0x0001fdf9) input_focus_pane_cp9_vc_ParamLimits

0x6de4,	// (0x0001fdf9) input_focus_pane_cp9_vc

0xd496,	// (0x000264ab) slider_cont_pane_vc_ParamLimits

0xd496,	// (0x000264ab) slider_cont_pane_vc

0xd4a8,	// (0x000264bd) list_form_graphic_pane_cp_vc_ParamLimits

0xd4a8,	// (0x000264bd) list_form_graphic_pane_cp_vc

0xb359,	// (0x0002436e) form_field_popup_wide_pane_vc_g1

0xd4bd,	// (0x000264d2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xd4bd,	// (0x000264d2) form_field_popup_wide_pane_vc_t1

0x7a57,	// (0x00020a6c) input_focus_pane_cp8_vc_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_cp8_vc

0xd4d2,	// (0x000264e7) list_form_wide_pane_vc_ParamLimits

0xd4d2,	// (0x000264e7) list_form_wide_pane_vc

0xd4de,	// (0x000264f3) list_form_graphic_pane_vc_g1

0xd4e6,	// (0x000264fb) list_form_graphic_pane_vc_t1_ParamLimits

0xd4e6,	// (0x000264fb) list_form_graphic_pane_vc_t1

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp5_vc_ParamLimits

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp5_vc

0xd502,	// (0x00026517) list_form_graphic_pane_vc_ParamLimits

0xd502,	// (0x00026517) list_form_graphic_pane_vc

0xb359,	// (0x0002436e) form_field_popup_pane_vc_g1

0xd518,	// (0x0002652d) form_field_popup_pane_vc_t1_ParamLimits

0xd518,	// (0x0002652d) form_field_popup_pane_vc_t1

0x7a57,	// (0x00020a6c) input_focus_pane_cp7_vc_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_cp7_vc

0xd52d,	// (0x00026542) list_form_pane_vc_ParamLimits

0xd52d,	// (0x00026542) list_form_pane_vc

0xd539,	// (0x0002654e) data_form_pane_vc_t1_ParamLimits

0xd539,	// (0x0002654e) data_form_pane_vc_t1

0x7aa6,	// (0x00020abb) input_focus_pane_vc_g1

0x7aae,	// (0x00020ac3) input_focus_pane_vc_g2

0x7ab6,	// (0x00020acb) input_focus_pane_vc_g3

0x7abe,	// (0x00020ad3) input_focus_pane_vc_g4

0x7ac6,	// (0x00020adb) input_focus_pane_vc_g5

0x7ace,	// (0x00020ae3) input_focus_pane_vc_g6

0x7ad6,	// (0x00020aeb) input_focus_pane_vc_g7

0x7ade,	// (0x00020af3) input_focus_pane_vc_g8

0x7ae6,	// (0x00020afb) input_focus_pane_vc_g9

0x6d14,	// (0x0001fd29) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x000286e0) input_focus_pane_vc_g

0xb34d,	// (0x00024362) data_form_pane_vc_ParamLimits

0xb34d,	// (0x00024362) data_form_pane_vc

0xb359,	// (0x0002436e) form_field_data_pane_vc_g1

0xd554,	// (0x00026569) form_field_data_pane_vc_t1_ParamLimits

0xd554,	// (0x00026569) form_field_data_pane_vc_t1

0x7a57,	// (0x00020a6c) input_focus_pane_vc_ParamLimits

0x7a57,	// (0x00020a6c) input_focus_pane_vc

0x7fb6,	// (0x00020fcb) button_value_adjust_pane_cp3_vc

0xcdde,	// (0x00025df3) button_value_adjust_pane_cp5_vc

0xd56a,	// (0x0002657f) form_field_data_pane_vc_ParamLimits

0xd56a,	// (0x0002657f) form_field_data_pane_vc

0x7fbe,	// (0x00020fd3) form_field_data_pane_vc_cp2

0xd581,	// (0x00026596) form_field_data_wide_pane_vc_ParamLimits

0xd581,	// (0x00026596) form_field_data_wide_pane_vc

0xd597,	// (0x000265ac) form_field_data_wide_pane_vc_cp2

0xd59f,	// (0x000265b4) form_field_popup_pane_vc_ParamLimits

0xd59f,	// (0x000265b4) form_field_popup_pane_vc

0xd5b6,	// (0x000265cb) form_field_popup_wide_pane_vc_ParamLimits

0xd5b6,	// (0x000265cb) form_field_popup_wide_pane_vc

0xd5cc,	// (0x000265e1) form_field_slider_pane_vc_ParamLimits

0xd5cc,	// (0x000265e1) form_field_slider_pane_vc

0xd5df,	// (0x000265f4) form_field_slider_wide_pane_vc_ParamLimits

0xd5df,	// (0x000265f4) form_field_slider_wide_pane_vc

0xe616,	// (0x0002762b) grid_touch_1_pane_ParamLimits

0xe616,	// (0x0002762b) grid_touch_1_pane

0xe622,	// (0x00027637) grid_touch_2_pane_ParamLimits

0xe622,	// (0x00027637) grid_touch_2_pane

0x861c,	// (0x00021631) touch_pane_g1_ParamLimits

0x861c,	// (0x00021631) touch_pane_g1

0xd5f2,	// (0x00026607) cell_app_pane_cp_wide_ParamLimits

0xd5f2,	// (0x00026607) cell_app_pane_cp_wide

0xd602,	// (0x00026617) grid_popup_fast_wide_pane_ParamLimits

0xd602,	// (0x00026617) grid_popup_fast_wide_pane

0xd616,	// (0x0002662b) scroll_pane_cp19_ParamLimits

0xd616,	// (0x0002662b) scroll_pane_cp19

0x6d96,	// (0x0001fdab) bg_popup_window_pane_cp20

0xd62a,	// (0x0002663f) listscroll_popup_fast_wide_pane

0x6dfa,	// (0x0001fe0f) grid_indicator_nsta_pane

0xd632,	// (0x00026647) clock_nsta_pane_g1

0xd63b,	// (0x00026650) clock_nsta_pane_t1

0xe63a,	// (0x0002764f) cell_indicator_nsta_pane_ParamLimits

0xe63a,	// (0x0002764f) cell_indicator_nsta_pane

0xd657,	// (0x0002666c) cell_indicator_nsta_pane_g1

0xe672,	// (0x00027687) cell_indicator_nsta_pane_g2

0x0001,

0xfadc,	// (0x00028af1) cell_indicator_nsta_pane_g

0xd665,	// (0x0002667a) clock_nsta_pane_cp

0xd66d,	// (0x00026682) indicator_nsta_pane_cp

0xd676,	// (0x0002668b) nsta_clock_indic_pane_g1

0x6e62,	// (0x0001fe77) grid_indicator_pane

0x7ef8,	// (0x00020f0d) scroll_pane_cp29

0x9a93,	// (0x00022aa8) indicator_nsta_pane_cp2_ParamLimits

0x9a93,	// (0x00022aa8) indicator_nsta_pane_cp2

0x6dfa,	// (0x0001fe0f) main_apps_wheel_pane

0xb46d,	// (0x00024482) form_midp_field_text_pane_ParamLimits

0xb59a,	// (0x000245af) scroll_bar_cp050_ParamLimits

0xd6ae,	// (0x000266c3) cell_indicator_pane_ParamLimits

0xd6ae,	// (0x000266c3) cell_indicator_pane

0xd6c4,	// (0x000266d9) cell_indicator_pane_g1

0xe687,	// (0x0002769c) grid_wheel_folder_pane_ParamLimits

0xe687,	// (0x0002769c) grid_wheel_folder_pane

0xe699,	// (0x000276ae) list_wheel_apps_pane_ParamLimits

0xe699,	// (0x000276ae) list_wheel_apps_pane

0xe6a8,	// (0x000276bd) main_apps_wheel_pane_g1_ParamLimits

0xe6a8,	// (0x000276bd) main_apps_wheel_pane_g1

0xe6bc,	// (0x000276d1) main_apps_wheel_pane_g2_ParamLimits

0xe6bc,	// (0x000276d1) main_apps_wheel_pane_g2

0x0001,

0xfaeb,	// (0x00028b00) main_apps_wheel_pane_g_ParamLimits

0xfaeb,	// (0x00028b00) main_apps_wheel_pane_g

0xe6d0,	// (0x000276e5) main_apps_wheel_pane_t1_ParamLimits

0xe6d0,	// (0x000276e5) main_apps_wheel_pane_t1

0xe6ef,	// (0x00027704) list_wheel_apps_pane_g1

0xe6f7,	// (0x0002770c) list_wheel_apps_pane_g2

0xe6ff,	// (0x00027714) list_wheel_apps_pane_g3

0xe707,	// (0x0002771c) list_wheel_apps_pane_g4

0xe70f,	// (0x00027724) list_wheel_apps_pane_g5

0x0004,

0xfaf0,	// (0x00028b05) list_wheel_apps_pane_g

0x6dfa,	// (0x0001fe0f) navi_icon_text_pane

0xdc7d,	// (0x00026c92) aid_fill_nsta

0xe72e,	// (0x00027743) navi_icon_text_pane_g1

0xe73a,	// (0x0002774f) navi_icon_text_pane_t1

0x818b,	// (0x000211a0) list_set_graphic_pane_t1_ParamLimits

0x818b,	// (0x000211a0) list_set_graphic_pane_t1

0xbc43,	// (0x00024c58) popup_midp_note_alarm_window_t6_ParamLimits

0xbc43,	// (0x00024c58) popup_midp_note_alarm_window_t6

0xbc55,	// (0x00024c6a) popup_midp_note_alarm_window_t7_ParamLimits

0xbc55,	// (0x00024c6a) popup_midp_note_alarm_window_t7

0xbc67,	// (0x00024c7c) popup_midp_note_alarm_window_t8_ParamLimits

0xbc67,	// (0x00024c7c) popup_midp_note_alarm_window_t8

0xbc79,	// (0x00024c8e) popup_midp_note_alarm_window_t9_ParamLimits

0xbc79,	// (0x00024c8e) popup_midp_note_alarm_window_t9

0xbc8b,	// (0x00024ca0) popup_midp_note_alarm_window_t10_ParamLimits

0xbc8b,	// (0x00024ca0) popup_midp_note_alarm_window_t10

0xbc9d,	// (0x00024cb2) popup_midp_note_alarm_window_t11_ParamLimits

0xbc9d,	// (0x00024cb2) popup_midp_note_alarm_window_t11

0xbcaf,	// (0x00024cc4) scroll_pane_cp17_ParamLimits

0xbcaf,	// (0x00024cc4) scroll_pane_cp17

0x9f9c,	// (0x00022fb1) volume_small_pane_cp_g1

0xa2d4,	// (0x000232e9) volume_small_pane_cp_g2

0xa2dd,	// (0x000232f2) volume_small_pane_cp_g3

0xa2e6,	// (0x000232fb) volume_small_pane_cp_g4

0x9fc9,	// (0x00022fde) volume_small_pane_cp_g5

0xa2ef,	// (0x00023304) volume_small_pane_cp_g6

0xa2f8,	// (0x0002330d) volume_small_pane_cp_g7

0xa301,	// (0x00023316) volume_small_pane_cp_g8

0xa30a,	// (0x0002331f) volume_small_pane_cp_g9

0xa313,	// (0x00023328) volume_small_pane_cp_g10

0x843a,	// (0x0002144f) midp_ticker_pane_g1_ParamLimits

0x8446,	// (0x0002145b) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x000287a8) midp_ticker_pane_g_ParamLimits

0x8452,	// (0x00021467) midp_ticker_pane_t1_ParamLimits

0xdc8d,	// (0x00026ca2) aid_fill_nsta_2

0xb586,	// (0x0002459b) list_form2_midp_pane

0xc355,	// (0x0002536a) midp_editing_number_pane_ParamLimits

0xc361,	// (0x00025376) midp_ticker_pane_ParamLimits

0xe74c,	// (0x00027761) form2_midp_field_pane

0xe770,	// (0x00027785) scroll_pane_cp51

0xe790,	// (0x000277a5) form2_midp_button_pane_ParamLimits

0xe790,	// (0x000277a5) form2_midp_button_pane

0xe7a2,	// (0x000277b7) form2_midp_content_pane_ParamLimits

0xe7a2,	// (0x000277b7) form2_midp_content_pane

0xe7bc,	// (0x000277d1) form2_midp_field_choice_group_pane

0xe7c4,	// (0x000277d9) form2_midp_field_pane_g1

0xe7cc,	// (0x000277e1) form2_midp_field_pane_g2

0xe7d4,	// (0x000277e9) form2_midp_field_pane_g3

0xe7dc,	// (0x000277f1) form2_midp_field_pane_g4

0x0003,

0xfb15,	// (0x00028b2a) form2_midp_field_pane_g

0xe7e4,	// (0x000277f9) form2_midp_gauge_slider_pane

0xe7ec,	// (0x00027801) form2_midp_gauge_wait_pane

0xe7f4,	// (0x00027809) form2_midp_image_pane_ParamLimits

0xe7f4,	// (0x00027809) form2_midp_image_pane

0xe80f,	// (0x00027824) form2_midp_label_pane_ParamLimits

0xe80f,	// (0x00027824) form2_midp_label_pane

0xe828,	// (0x0002783d) form2_midp_label_pane_cp_ParamLimits

0xe828,	// (0x0002783d) form2_midp_label_pane_cp

0xe847,	// (0x0002785c) form2_midp_string_pane_ParamLimits

0xe847,	// (0x0002785c) form2_midp_string_pane

0xd6ce,	// (0x000266e3) form2_midp_text_pane_ParamLimits

0xd6ce,	// (0x000266e3) form2_midp_text_pane

0xe859,	// (0x0002786e) form2_midp_time_pane

0xe869,	// (0x0002787e) input_focus_pane_cp51_ParamLimits

0xe869,	// (0x0002787e) input_focus_pane_cp51

0xe881,	// (0x00027896) form2_midp_label_pane_t1_ParamLimits

0xe881,	// (0x00027896) form2_midp_label_pane_t1

0xd6e7,	// (0x000266fc) form2_mdip_text_pane_t1_ParamLimits

0xd6e7,	// (0x000266fc) form2_mdip_text_pane_t1

0xd704,	// (0x00026719) form2_midp_time_pane_t1

0xe8c9,	// (0x000278de) form2_midp_gauge_slider_pane_t1

0xe8db,	// (0x000278f0) form2_midp_gauge_slider_pane_t2

0xe8ed,	// (0x00027902) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1e,	// (0x00028b33) form2_midp_gauge_slider_pane_t

0xe8ff,	// (0x00027914) form2_midp_slider_pane

0xe90b,	// (0x00027920) form2_midp_gauge_wait_pane_t1

0xe919,	// (0x0002792e) form2_midp_wait_pane_ParamLimits

0xe919,	// (0x0002792e) form2_midp_wait_pane

0x9911,	// (0x00022926) list_single_2graphic_pane_cp4_ParamLimits

0x9911,	// (0x00022926) list_single_2graphic_pane_cp4

0xe18e,	// (0x000271a3) list_single_midp_graphic_pane_cp_ParamLimits

0xe18e,	// (0x000271a3) list_single_midp_graphic_pane_cp

0x6d96,	// (0x0001fdab) list_highlight_pane_cp20

0xe944,	// (0x00027959) list_single_2graphic_pane_g1_cp4

0xc3d6,	// (0x000253eb) list_single_2graphic_pane_g2_cp4

0xe94c,	// (0x00027961) list_single_2graphic_pane_t1_cp4

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp21

0xe95b,	// (0x00027970) list_single_midp_graphic_pane_g4_cp

0xe96a,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp

0xe97f,	// (0x00027994) form2_mdip_string_pane_t1_ParamLimits

0xe97f,	// (0x00027994) form2_mdip_string_pane_t1

0x6d96,	// (0x0001fdab) bg_wml_button_pane_cp2

0x6d14,	// (0x0001fd29) form2_midp_image_pane_g1

0xcbad,	// (0x00025bc2) list_double_large_graphic_pane_g5_ParamLimits

0xcbad,	// (0x00025bc2) list_double_large_graphic_pane_g5

0x9bae,	// (0x00022bc3) midp_form_pane_ParamLimits

0x6dfa,	// (0x0001fe0f) main_apps_wheel_pane_ParamLimits

0xdb1f,	// (0x00026b34) popup_preview_window_ParamLimits

0xdb1f,	// (0x00026b34) popup_preview_window

0xb029,	// (0x0002403e) popup_touch_info_window_ParamLimits

0xb029,	// (0x0002403e) popup_touch_info_window

0xb047,	// (0x0002405c) popup_touch_menu_window_ParamLimits

0xb047,	// (0x0002405c) popup_touch_menu_window

0x6d0a,	// (0x0001fd1f) bg_popup_sub_pane_cp6

0xe9f7,	// (0x00027a0c) list_touch_menu_pane

0xe9ff,	// (0x00027a14) list_single_touch_menu_pane_ParamLimits

0xe9ff,	// (0x00027a14) list_single_touch_menu_pane

0xea16,	// (0x00027a2b) list_single_touch_menu_pane_t1

0x6dfa,	// (0x0001fe0f) bg_popup_sub_pane_cp7_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_popup_sub_pane_cp7

0xea24,	// (0x00027a39) heading_sub_pane

0xea2c,	// (0x00027a41) list_touch_info_pane_ParamLimits

0xea2c,	// (0x00027a41) list_touch_info_pane

0xea3b,	// (0x00027a50) list_single_touch_info_pane_ParamLimits

0xea3b,	// (0x00027a50) list_single_touch_info_pane

0xea4c,	// (0x00027a61) list_single_touch_info_pane_t1

0xea5a,	// (0x00027a6f) list_single_touch_info_pane_t2

0x0001,

0xfb2c,	// (0x00028b41) list_single_touch_info_pane_t

0x8410,	// (0x00021425) bg_popup_heading_pane_cp

0xea68,	// (0x00027a7d) heading_sub_pane_t1

0xb313,	// (0x00024328) bg_popup_preview_window_pane_cp_ParamLimits

0xb313,	// (0x00024328) bg_popup_preview_window_pane_cp

0xea24,	// (0x00027a39) heading_preview_pane

0xea2c,	// (0x00027a41) list_preview_pane_ParamLimits

0xea2c,	// (0x00027a41) list_preview_pane

0xea76,	// (0x00027a8b) popup_preview_window_g1

0xea3b,	// (0x00027a50) list_single_preview_pane_ParamLimits

0xea3b,	// (0x00027a50) list_single_preview_pane

0xea7e,	// (0x00027a93) list_single_preview_pane_g1

0xea86,	// (0x00027a9b) list_single_preview_pane_t1

0xea4c,	// (0x00027a61) list_single_preview_pane_t2

0x0001,

0xfb31,	// (0x00028b46) list_single_preview_pane_t

0xea94,	// (0x00027aa9) bg_popup_heading_pane_cp2_ParamLimits

0xea94,	// (0x00027aa9) bg_popup_heading_pane_cp2

0xeaaa,	// (0x00027abf) heading_preview_pane_g1

0xeab2,	// (0x00027ac7) heading_preview_pane_t1_ParamLimits

0xeab2,	// (0x00027ac7) heading_preview_pane_t1

0x6e79,	// (0x0001fe8e) soft_indicator_pane_t1_ParamLimits

0x731d,	// (0x00020332) scroll_pane_ParamLimits

0x7dfd,	// (0x00020e12) scroll_sc2_left_pane

0x7df4,	// (0x00020e09) scroll_sc2_right_pane

0x7e1c,	// (0x00020e31) scroll_bg_pane_g1_ParamLimits

0x7e31,	// (0x00020e46) scroll_bg_pane_g2_ParamLimits

0x7e49,	// (0x00020e5e) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00028737) scroll_bg_pane_g_ParamLimits

0x7e1c,	// (0x00020e31) scroll_handle_pane_g1_ParamLimits

0x7e6b,	// (0x00020e80) scroll_handle_pane_g2_ParamLimits

0x7e49,	// (0x00020e5e) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0002873e) scroll_handle_pane_g_ParamLimits

0xaf81,	// (0x00023f96) popup_choice_list_window_ParamLimits

0xaf81,	// (0x00023f96) popup_choice_list_window

0xb17b,	// (0x00024190) choice_list_pane

0xb1f1,	// (0x00024206) cell_toolbar_pane_t1

0xb219,	// (0x0002422e) toolbar_button_pane_ParamLimits

0xc0b6,	// (0x000250cb) ai_gene_pane_1_t2_ParamLimits

0xc0b6,	// (0x000250cb) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x0002895b) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x0002895b) ai_gene_pane_1_t

0xeacf,	// (0x00027ae4) scroll_sc2_left_pane_g1

0xeacf,	// (0x00027ae4) scroll_sc2_right_pane_g1

0xaf67,	// (0x00023f7c) bg_popup_sub_pane_cp10

0xead9,	// (0x00027aee) list_choice_list_pane

0xeaf0,	// (0x00027b05) list_single_choice_list_pane_ParamLimits

0xeaf0,	// (0x00027b05) list_single_choice_list_pane

0xeb04,	// (0x00027b19) list_single_choice_list_pane_g1

0x7bbe,	// (0x00020bd3) list_single_choice_list_pane_t1_ParamLimits

0x7bbe,	// (0x00020bd3) list_single_choice_list_pane_t1

0xeb0c,	// (0x00027b21) choice_list_pane_g1

0xeb14,	// (0x00027b29) choice_list_pane_t1

0x6d0a,	// (0x0001fd1f) input_focus_pane_cp11

0x7d49,	// (0x00020d5e) title_pane_stacon_g2_ParamLimits

0x7d49,	// (0x00020d5e) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0002871d) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0002871d) title_pane_stacon_g

0x8410,	// (0x00021425) cursor_press_pane

0xd96c,	// (0x00026981) popup_fep_hwr_window_ParamLimits

0xd96c,	// (0x00026981) popup_fep_hwr_window

0xafd3,	// (0x00023fe8) popup_fep_vkb_window_ParamLimits

0xafd3,	// (0x00023fe8) popup_fep_vkb_window

0xeb22,	// (0x00027b37) cursor_press_pane_g1

0x0002,

0xfb5a,	// (0x00028b6f) fep_vkb_side_pane_g_ParamLimits

0xa351,	// (0x00023366) fep_hwr_candidate_pane_ParamLimits

0xa351,	// (0x00023366) fep_hwr_candidate_pane

0xa379,	// (0x0002338e) fep_hwr_side_pane_ParamLimits

0xa379,	// (0x0002338e) fep_hwr_side_pane

0xa399,	// (0x000233ae) fep_hwr_top_pane_ParamLimits

0xa399,	// (0x000233ae) fep_hwr_top_pane

0xa3b1,	// (0x000233c6) fep_hwr_write_pane_ParamLimits

0xa3b1,	// (0x000233c6) fep_hwr_write_pane

0xfb5a,	// (0x00028b6f) fep_vkb_side_pane_g

0xeb2a,	// (0x00027b3f) fep_hwr_top_pane_g1

0xeb3c,	// (0x00027b51) fep_hwr_top_pane_g2

0xa3eb,	// (0x00023400) fep_hwr_top_pane_g3

0x0002,

0xfb36,	// (0x00028b4b) fep_hwr_top_pane_g

0xa400,	// (0x00023415) fep_hwr_top_text_pane

0x7f65,	// (0x00020f7a) fep_hwr_top_text_pane_g1

0xeb72,	// (0x00027b87) fep_hwr_top_text_pane_t1

0xa4ee,	// (0x00023503) fep_hwr_candidate_pane_g1

0xed90,	// (0x00027da5) fep_vkb_keypad_pane_g3_ParamLimits

0xed90,	// (0x00027da5) fep_vkb_keypad_pane_g3

0xedb2,	// (0x00027dc7) fep_vkb_keypad_pane_g4_ParamLimits

0xedb2,	// (0x00027dc7) fep_vkb_keypad_pane_g4

0xee21,	// (0x00027e36) fep_vkb_bottom_pane_g2_ParamLimits

0xee21,	// (0x00027e36) fep_vkb_bottom_pane_g2

0x0001,

0xfb61,	// (0x00028b76) fep_vkb_bottom_pane_g_ParamLimits

0xfb61,	// (0x00028b76) fep_vkb_bottom_pane_g

0xeacf,	// (0x00027ae4) cell_vkb_side_pane_g2

0x0001,

0xfb6b,	// (0x00028b80) cell_vkb_side_pane_g

0xeeac,	// (0x00027ec1) cell_vkb_side_pane_t1

0xeeba,	// (0x00027ecf) cell_vkb_side_pane_t1_copy1

0xeacf,	// (0x00027ae4) bg_fep_vkb_candidate_pane_g2

0xefde,	// (0x00027ff3) cell_vkb_candidate_pane_ParamLimits

0xeb80,	// (0x00027b95) aid_size_cell_vkb_ParamLimits

0xeb80,	// (0x00027b95) aid_size_cell_vkb

0xefde,	// (0x00027ff3) cell_vkb_candidate_pane

0xa515,	// (0x0002352a) bg_popup_fep_shadow_pane_g1

0xebf6,	// (0x00027c0b) fep_vkb_bottom_pane_ParamLimits

0xebf6,	// (0x00027c0b) fep_vkb_bottom_pane

0xec41,	// (0x00027c56) fep_vkb_candidate_pane_ParamLimits

0xec41,	// (0x00027c56) fep_vkb_candidate_pane

0xec5d,	// (0x00027c72) fep_vkb_keypad_pane_ParamLimits

0xec5d,	// (0x00027c72) fep_vkb_keypad_pane

0xec91,	// (0x00027ca6) fep_vkb_side_pane_ParamLimits

0xec91,	// (0x00027ca6) fep_vkb_side_pane

0xecbd,	// (0x00027cd2) fep_vkb_top_pane_ParamLimits

0xecbd,	// (0x00027cd2) fep_vkb_top_pane

0xece9,	// (0x00027cfe) fep_vkb_top_pane_g1_ParamLimits

0xece9,	// (0x00027cfe) fep_vkb_top_pane_g1

0xecf8,	// (0x00027d0d) fep_vkb_top_pane_g2_ParamLimits

0xecf8,	// (0x00027d0d) fep_vkb_top_pane_g2

0xed07,	// (0x00027d1c) fep_vkb_top_pane_g3_ParamLimits

0xed07,	// (0x00027d1c) fep_vkb_top_pane_g3

0x0003,

0xfb51,	// (0x00028b66) fep_vkb_top_pane_g_ParamLimits

0xfb51,	// (0x00028b66) fep_vkb_top_pane_g

0xed25,	// (0x00027d3a) fep_vkb_top_text_pane_ParamLimits

0xed25,	// (0x00027d3a) fep_vkb_top_text_pane

0xed36,	// (0x00027d4b) fep_vkb_side_pane_g1_ParamLimits

0xed36,	// (0x00027d4b) fep_vkb_side_pane_g1

0xed7f,	// (0x00027d94) grid_vkb_side_pane_ParamLimits

0xed7f,	// (0x00027d94) grid_vkb_side_pane

0xa51d,	// (0x00023532) bg_popup_fep_shadow_pane_g2

0xa526,	// (0x0002353b) bg_popup_fep_shadow_pane_g3

0xa52e,	// (0x00023543) bg_popup_fep_shadow_pane_g4

0xa537,	// (0x0002354c) bg_popup_fep_shadow_pane_g5

0xa53f,	// (0x00023554) bg_popup_fep_shadow_pane_g6

0xa547,	// (0x0002355c) bg_popup_fep_shadow_pane_g7

0x7abe,	// (0x00020ad3) bg_popup_fep_shadow_pane_g8

0xedd0,	// (0x00027de5) grid_vkb_keypad_number_pane_ParamLimits

0xedd0,	// (0x00027de5) grid_vkb_keypad_number_pane

0xede0,	// (0x00027df5) grid_vkb_keypad_pane_ParamLimits

0xede0,	// (0x00027df5) grid_vkb_keypad_pane

0xee06,	// (0x00027e1b) fep_vkb_bottom_pane_g1_ParamLimits

0xee06,	// (0x00027e1b) fep_vkb_bottom_pane_g1

0xee2f,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xee2f,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane

0xee44,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xee44,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane

0xee59,	// (0x00027e6e) fep_vkb_top_text_pane_g1

0xee74,	// (0x00027e89) fep_vkb_top_text_pane_t1

0xee89,	// (0x00027e9e) cell_vkb_side_pane_ParamLimits

0xee89,	// (0x00027e9e) cell_vkb_side_pane

0xeacf,	// (0x00027ae4) cell_vkb_side_pane_g1

0xeec8,	// (0x00027edd) cell_vkb_keypad_pane_ParamLimits

0xeec8,	// (0x00027edd) cell_vkb_keypad_pane

0xef35,	// (0x00027f4a) cell_vkb_keypad_pane_g1

0x0008,

0xfb7e,	// (0x00028b93) bg_popup_fep_shadow_pane_g

0xa557,	// (0x0002356c) cell_hwr_side_pane_g1

0xa557,	// (0x0002356c) cell_hwr_side_pane_g2

0xef3f,	// (0x00027f54) cell_vkb_keypad_pane_t1

0xef4d,	// (0x00027f62) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xef4d,	// (0x00027f62) cell_vkb_keypad_bottom_left_pane

0xef6a,	// (0x00027f7f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xef6a,	// (0x00027f7f) cell_vkb_keypad_bottom_right_pane

0xeacf,	// (0x00027ae4) cell_vkb_keypad_bottom_left_pane_g1

0xeacf,	// (0x00027ae4) cell_vkb_keypad_bottom_right_pane_g1

0xefa3,	// (0x00027fb8) cell_vkb_keypad_number_pane_ParamLimits

0xefa3,	// (0x00027fb8) cell_vkb_keypad_number_pane

0xefc2,	// (0x00027fd7) cell_vkb_keypad_number_pane_g1

0xefcc,	// (0x00027fe1) cell_vkb_keypad_number_pane_g2

0xefd5,	// (0x00027fea) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb70,	// (0x00028b85) cell_vkb_keypad_number_pane_g

0xef3f,	// (0x00027f54) cell_vkb_keypad_number_pane_t1

0xeff7,	// (0x0002800c) fep_vkb_candidate_pane_g1

0x0001,

0xfb91,	// (0x00028ba6) cell_hwr_side_pane_g

0xf010,	// (0x00028025) cell_hwr_side_pane_t1

0xa561,	// (0x00023576) cell_hwr_side_pane_t1_copy1

0xa56f,	// (0x00023584) cell_hwr_candidate_pane_g1

0xa59e,	// (0x000235b3) cell_hwr_candidate_pane_t1

0xeacf,	// (0x00027ae4) cell_vkb_candidate_pane_g2

0xf096,	// (0x000280ab) cell_vkb_candidate_pane_t1

0xa31c,	// (0x00023331) bg_popup_fep_shadow_pane_ParamLimits

0xa31c,	// (0x00023331) bg_popup_fep_shadow_pane

0xa3cb,	// (0x000233e0) bg_fep_hwr_top_pane_g4

0xeb4e,	// (0x00027b63) bg_hwr_side_pane_g1_ParamLimits

0xeb4e,	// (0x00027b63) bg_hwr_side_pane_g1

0xa43c,	// (0x00023451) cell_hwr_side_pane_ParamLimits

0xa43c,	// (0x00023451) cell_hwr_side_pane

0xa477,	// (0x0002348c) fep_hwr_write_pane_g1_ParamLimits

0xa477,	// (0x0002348c) fep_hwr_write_pane_g1

0xa484,	// (0x00023499) fep_hwr_write_pane_g2_ParamLimits

0xa484,	// (0x00023499) fep_hwr_write_pane_g2

0xa491,	// (0x000234a6) fep_hwr_write_pane_g3_ParamLimits

0xa491,	// (0x000234a6) fep_hwr_write_pane_g3

0xa49f,	// (0x000234b4) fep_hwr_write_pane_g4_ParamLimits

0xa49f,	// (0x000234b4) fep_hwr_write_pane_g4

0x0005,

0xfb3d,	// (0x00028b52) fep_hwr_write_pane_g_ParamLimits

0xfb3d,	// (0x00028b52) fep_hwr_write_pane_g

0xa3cb,	// (0x000233e0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa3cb,	// (0x000233e0) bg_fep_hwr_candidate_pane_g2

0xa4b4,	// (0x000234c9) cell_hwr_candidate_pane_ParamLimits

0xa4b4,	// (0x000234c9) cell_hwr_candidate_pane

0xa4ee,	// (0x00023503) fep_hwr_candidate_pane_g1_ParamLimits

0xebae,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xebae,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2

0xed17,	// (0x00027d2c) fep_vkb_top_pane_g4_ParamLimits

0xed17,	// (0x00027d2c) fep_vkb_top_pane_g4

0xed5d,	// (0x00027d72) fep_vkb_side_pane_g2_ParamLimits

0xed5d,	// (0x00027d72) fep_vkb_side_pane_g2

0xcd0f,	// (0x00025d24) list_setting_pane_t4_ParamLimits

0xcd0f,	// (0x00025d24) list_setting_pane_t4

0xcd9d,	// (0x00025db2) list_setting_number_pane_t5_ParamLimits

0xcd9d,	// (0x00025db2) list_setting_number_pane_t5

0x9901,	// (0x00022916) list_double_heading_pane_cp2_ParamLimits

0x9901,	// (0x00022916) list_double_heading_pane_cp2

0x8285,	// (0x0002129a) list_double_heading_pane_g1_cp2_ParamLimits

0x8285,	// (0x0002129a) list_double_heading_pane_g1_cp2

0xf0a4,	// (0x000280b9) list_double_heading_pane_g2_cp2_ParamLimits

0xf0a4,	// (0x000280b9) list_double_heading_pane_g2_cp2

0xf0b8,	// (0x000280cd) list_double_heading_pane_t1_cp2_ParamLimits

0xf0b8,	// (0x000280cd) list_double_heading_pane_t1_cp2

0xf0ce,	// (0x000280e3) list_double_heading_pane_t2_cp2_ParamLimits

0xf0ce,	// (0x000280e3) list_double_heading_pane_t2_cp2

0x6d02,	// (0x0001fd17) aid_value_unit2

0x921f,	// (0x00022234) popup_preview_fixed_window

0x6f59,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02

0xf0e0,	// (0x000280f5) list_preview_fixed_pane

0xf126,	// (0x0002813b) list_empty_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_empty_pane_fp

0xf126,	// (0x0002813b) list_single_cale_day_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_single_cale_day_pane_fp

0xf126,	// (0x0002813b) list_single_graphic_heading_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_single_graphic_heading_pane_fp

0xf126,	// (0x0002813b) list_single_graphic_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_single_graphic_pane_fp

0xf126,	// (0x0002813b) list_single_heading_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_single_heading_pane_fp

0xf126,	// (0x0002813b) list_single_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_single_pane_fp

0xf13a,	// (0x0002814f) list_single_pane_fp_g1_ParamLimits

0xf13a,	// (0x0002814f) list_single_pane_fp_g1

0xccce,	// (0x00025ce3) list_single_pane_fp_g2_ParamLimits

0xccce,	// (0x00025ce3) list_single_pane_fp_g2

0xd717,	// (0x0002672c) list_single_pane_fp_g3_ParamLimits

0xd717,	// (0x0002672c) list_single_pane_fp_g3

0xf146,	// (0x0002815b) list_single_pane_fp_g4_ParamLimits

0xf146,	// (0x0002815b) list_single_pane_fp_g4

0x0003,

0xfba4,	// (0x00028bb9) list_single_pane_fp_g_ParamLimits

0xfba4,	// (0x00028bb9) list_single_pane_fp_g

0xd72b,	// (0x00026740) list_single_pane_fp_t1_ParamLimits

0xd72b,	// (0x00026740) list_single_pane_fp_t1

0xd742,	// (0x00026757) list_single_graphic_pane_fp_g1_ParamLimits

0xd742,	// (0x00026757) list_single_graphic_pane_fp_g1

0xf13a,	// (0x0002814f) list_single_graphic_pane_fp_g2_ParamLimits

0xf13a,	// (0x0002814f) list_single_graphic_pane_fp_g2

0xccce,	// (0x00025ce3) list_single_graphic_pane_fp_g3_ParamLimits

0xccce,	// (0x00025ce3) list_single_graphic_pane_fp_g3

0xd717,	// (0x0002672c) list_single_graphic_pane_fp_g4_ParamLimits

0xd717,	// (0x0002672c) list_single_graphic_pane_fp_g4

0xf146,	// (0x0002815b) list_single_graphic_pane_fp_g5_ParamLimits

0xf146,	// (0x0002815b) list_single_graphic_pane_fp_g5

0x0004,

0xfbad,	// (0x00028bc2) list_single_graphic_pane_fp_g_ParamLimits

0xfbad,	// (0x00028bc2) list_single_graphic_pane_fp_g

0xd74e,	// (0x00026763) list_single_graphic_pane_fp_t1_ParamLimits

0xd74e,	// (0x00026763) list_single_graphic_pane_fp_t1

0xd742,	// (0x00026757) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd742,	// (0x00026757) list_single_graphic_heading_pane_fp_g1

0xf13a,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf13a,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2

0xccce,	// (0x00025ce3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xccce,	// (0x00025ce3) list_single_graphic_heading_pane_fp_g3

0xd717,	// (0x0002672c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd717,	// (0x0002672c) list_single_graphic_heading_pane_fp_g4

0xf146,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf146,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbad,	// (0x00028bc2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00028bc2) list_single_graphic_heading_pane_fp_g

0xd764,	// (0x00026779) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd764,	// (0x00026779) list_single_graphic_heading_pane_fp_t1

0xd77a,	// (0x0002678f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd77a,	// (0x0002678f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00028bcd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00028bcd) list_single_graphic_heading_pane_fp_t

0xd78c,	// (0x000267a1) list_single_cale_day_pane_fp_g1_ParamLimits

0xd78c,	// (0x000267a1) list_single_cale_day_pane_fp_g1

0xf152,	// (0x00028167) list_single_cale_day_pane_fp_g2_ParamLimits

0xf152,	// (0x00028167) list_single_cale_day_pane_fp_g2

0xd7c4,	// (0x000267d9) list_single_cale_day_pane_fp_g3_ParamLimits

0xd7c4,	// (0x000267d9) list_single_cale_day_pane_fp_g3

0xd7ec,	// (0x00026801) list_single_cale_day_pane_fp_g4_ParamLimits

0xd7ec,	// (0x00026801) list_single_cale_day_pane_fp_g4

0xd810,	// (0x00026825) list_single_cale_day_pane_fp_g5_ParamLimits

0xd810,	// (0x00026825) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbd,	// (0x00028bd2) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbd,	// (0x00028bd2) list_single_cale_day_pane_fp_g

0xd834,	// (0x00026849) list_single_cale_day_pane_fp_t1_ParamLimits

0xd834,	// (0x00026849) list_single_cale_day_pane_fp_t1

0xd85a,	// (0x0002686f) list_single_cale_day_pane_fp_t2_ParamLimits

0xd85a,	// (0x0002686f) list_single_cale_day_pane_fp_t2

0xd873,	// (0x00026888) list_single_cale_day_pane_fp_t3_ParamLimits

0xd873,	// (0x00026888) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc8,	// (0x00028bdd) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc8,	// (0x00028bdd) list_single_cale_day_pane_fp_t

0xf13a,	// (0x0002814f) list_empty_pane_fp_g1_ParamLimits

0xf13a,	// (0x0002814f) list_empty_pane_fp_g1

0xd88c,	// (0x000268a1) list_empty_pane_fp_t1

0xd89a,	// (0x000268af) list_empty_pane_fp_t2

0x0001,

0xfbcf,	// (0x00028be4) list_empty_pane_fp_t

0xf13a,	// (0x0002814f) list_single_heading_pane_fp_g1_ParamLimits

0xf13a,	// (0x0002814f) list_single_heading_pane_fp_g1

0xccce,	// (0x00025ce3) list_single_heading_pane_fp_g2_ParamLimits

0xccce,	// (0x00025ce3) list_single_heading_pane_fp_g2

0xd717,	// (0x0002672c) list_single_heading_pane_fp_g3_ParamLimits

0xd717,	// (0x0002672c) list_single_heading_pane_fp_g3

0x0002,

0xfbd4,	// (0x00028be9) list_single_heading_pane_fp_g_ParamLimits

0xfbd4,	// (0x00028be9) list_single_heading_pane_fp_g

0xd8a8,	// (0x000268bd) list_single_heading_pane_fp_t1_ParamLimits

0xd8a8,	// (0x000268bd) list_single_heading_pane_fp_t1

0xd8ba,	// (0x000268cf) list_single_heading_pane_fp_t2_ParamLimits

0xd8ba,	// (0x000268cf) list_single_heading_pane_fp_t2

0x0001,

0xfbdb,	// (0x00028bf0) list_single_heading_pane_fp_t_ParamLimits

0xfbdb,	// (0x00028bf0) list_single_heading_pane_fp_t

0x7bd3,	// (0x00020be8) aid_size_cell_fast

0x6f3c,	// (0x0001ff51) soft_indicator_pane_cp1_t1

0x7c10,	// (0x00020c25) cell_app_pane_cp2_ParamLimits

0x7c10,	// (0x00020c25) cell_app_pane_cp2

0xa33e,	// (0x00023353) fep_hwr_candidate_drop_down_list_pane

0xa508,	// (0x0002351d) fep_hwr_candidate_pane_g3_ParamLimits

0xa508,	// (0x0002351d) fep_hwr_candidate_pane_g3

0x6bf3,	// (0x0001fc08) fep_hwr_candidate_pane_g4_ParamLimits

0x6bf3,	// (0x0001fc08) fep_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x00028b5f) fep_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x00028b5f) fep_hwr_candidate_pane_g

0xec30,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xec30,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane

0xefff,	// (0x00028014) fep_vkb_candidate_pane_g3

0xf007,	// (0x0002801c) fep_vkb_candidate_pane_g4

0x0002,

0xfb77,	// (0x00028b8c) fep_vkb_candidate_pane_g

0xa56f,	// (0x00023584) cell_hwr_candidate_pane_g1_ParamLimits

0xa57d,	// (0x00023592) cell_hwr_candidate_pane_g3_ParamLimits

0xa57d,	// (0x00023592) cell_hwr_candidate_pane_g3

0x1da0,	// (0x0001adb5) cell_hwr_candidate_pane_g4_ParamLimits

0x1da0,	// (0x0001adb5) cell_hwr_candidate_pane_g4

0x0002,

0xfb96,	// (0x00028bab) cell_hwr_candidate_pane_g_ParamLimits

0xfb96,	// (0x00028bab) cell_hwr_candidate_pane_g

0xf01e,	// (0x00028033) cell_vkb_candidate_pane_g3_ParamLimits

0xf01e,	// (0x00028033) cell_vkb_candidate_pane_g3

0xf07b,	// (0x00028090) cell_vkb_candidate_pane_g4_ParamLimits

0xf07b,	// (0x00028090) cell_vkb_candidate_pane_g4

0xf15e,	// (0x00028173) cell_app_pane_cp2_g1_ParamLimits

0xf15e,	// (0x00028173) cell_app_pane_cp2_g1

0xf17c,	// (0x00028191) cell_app_pane_cp2_g2_ParamLimits

0xf17c,	// (0x00028191) cell_app_pane_cp2_g2

0x0001,

0xfbe0,	// (0x00028bf5) cell_app_pane_cp2_g_ParamLimits

0xfbe0,	// (0x00028bf5) cell_app_pane_cp2_g

0xf188,	// (0x0002819d) cell_app_pane_cp2_t1_ParamLimits

0xf188,	// (0x0002819d) cell_app_pane_cp2_t1

0x7a57,	// (0x00020a6c) grid_highlight_pane_cp1_ParamLimits

0x7a57,	// (0x00020a6c) grid_highlight_pane_cp1

0xa5bb,	// (0x000235d0) cell_hwr_candidate_pane_cp1_ParamLimits

0xa5bb,	// (0x000235d0) cell_hwr_candidate_pane_cp1

0xa56f,	// (0x00023584) fep_hwr_candidate_drop_down_list_pane_g1

0xa5d9,	// (0x000235ee) fep_hwr_candidate_drop_down_list_pane_g2

0xa5e6,	// (0x000235fb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe5,	// (0x00028bfa) fep_hwr_candidate_drop_down_list_pane_g

0xa5f3,	// (0x00023608) fep_hwr_candidate_drop_down_list_scroll_pane

0xa5fc,	// (0x00023611) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa5fc,	// (0x00023611) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa609,	// (0x0002361e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa609,	// (0x0002361e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa616,	// (0x0002362b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa616,	// (0x0002362b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa623,	// (0x00023638) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa623,	// (0x00023638) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa63e,	// (0x00023653) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa63e,	// (0x00023653) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa659,	// (0x0002366e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa659,	// (0x0002366e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa674,	// (0x00023689) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa674,	// (0x00023689) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa68f,	// (0x000236a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa68f,	// (0x000236a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbec,	// (0x00028c01) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbec,	// (0x00028c01) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf1b4,	// (0x000281c9) cell_vkb_candidate_pane_cp1_ParamLimits

0xf1b4,	// (0x000281c9) cell_vkb_candidate_pane_cp1

0xed17,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xed17,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1

0xf19a,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf19a,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2

0xf1a7,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf1a7,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfd,	// (0x00028c12) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfd,	// (0x00028c12) fep_vkb_candidate_drop_down_list_pane_g

0xf1d7,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf1d7,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane

0xf1e4,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf1e4,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf1f1,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf1f1,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf1fd,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf1fd,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf039,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf039,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf05a,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf05a,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf209,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf209,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf22a,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf22a,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf24b,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf24b,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc04,	// (0x00028c19) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc04,	// (0x00028c19) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9309,	// (0x0002231e) title_pane_g1_ParamLimits

0x9316,	// (0x0002232b) title_pane_g2_ParamLimits

0xf592,	// (0x000285a7) title_pane_g_ParamLimits

0x7f5d,	// (0x00020f72) aid_call2_pane

0x7f55,	// (0x00020f6a) aid_call_pane

0x7f65,	// (0x00020f7a) popup_clock_analogue_window_g1

0x7f65,	// (0x00020f7a) popup_clock_analogue_window_g2

0x98e2,	// (0x000228f7) popup_clock_analogue_window_g3

0x98eb,	// (0x00022900) popup_clock_analogue_window_g4

0x6d14,	// (0x0001fd29) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0002874c) popup_clock_analogue_window_g

0x98f3,	// (0x00022908) popup_clock_analogue_window_t1

0x9937,	// (0x0002294c) clock_digital_number_pane_ParamLimits

0x9937,	// (0x0002294c) clock_digital_number_pane

0x9943,	// (0x00022958) clock_digital_number_pane_cp02_ParamLimits

0x9943,	// (0x00022958) clock_digital_number_pane_cp02

0x994f,	// (0x00022964) clock_digital_number_pane_cp03_ParamLimits

0x994f,	// (0x00022964) clock_digital_number_pane_cp03

0x995b,	// (0x00022970) clock_digital_number_pane_cp04_ParamLimits

0x995b,	// (0x00022970) clock_digital_number_pane_cp04

0x9967,	// (0x0002297c) clock_digital_separator_pane_ParamLimits

0x9967,	// (0x0002297c) clock_digital_separator_pane

0x9973,	// (0x00022988) popup_clock_digital_window_t1_ParamLimits

0x9973,	// (0x00022988) popup_clock_digital_window_t1

0x6d14,	// (0x0001fd29) clock_digital_number_pane_g1

0x6d14,	// (0x0001fd29) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00028757) clock_digital_number_pane_g

0x6d14,	// (0x0001fd29) clock_digital_separator_pane_g1

0x6d14,	// (0x0001fd29) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00028757) clock_digital_separator_pane_g

0xdc7d,	// (0x00026c92) aid_fill_nsta_ParamLimits

0xdd36,	// (0x00026d4b) indicator_nsta_pane_ParamLimits

0xb124,	// (0x00024139) popup_clock_analogue_window

0xb124,	// (0x00024139) popup_clock_digital_window

0x6dfa,	// (0x0001fe0f) grid_indicator_nsta_pane_ParamLimits

0xd649,	// (0x0002665e) clock_nsta_pane_t2

0x0001,

0xfad7,	// (0x00028aec) clock_nsta_pane_t

0x984b,	// (0x00022860) aid_size_max_handle

0x9855,	// (0x0002286a) aid_size_min_handle

0x8410,	// (0x00021425) editor_scroll_pane

0xf266,	// (0x0002827b) ex_editor_pane

0x7bae,	// (0x00020bc3) scroll_pane_cp13

0x734a,	// (0x0002035f) scroll_pane_cp14

0x7f8f,	// (0x00020fa4) scroll_pane_cp36

0x9911,	// (0x00022926) list_single_graphic_hl_pane_cp2_ParamLimits

0x9911,	// (0x00022926) list_single_graphic_hl_pane_cp2

0xe4c5,	// (0x000274da) list_single_graphic_hl_pane_ParamLimits

0xe4c5,	// (0x000274da) list_single_graphic_hl_pane

0xde50,	// (0x00026e65) aid_size_min_hl_cp1

0xf26e,	// (0x00028283) list_highlight_pane_cp34_ParamLimits

0xf26e,	// (0x00028283) list_highlight_pane_cp34

0xf27f,	// (0x00028294) list_single_graphic_hl_pane_g1_ParamLimits

0xf27f,	// (0x00028294) list_single_graphic_hl_pane_g1

0xde59,	// (0x00026e6e) list_single_graphic_hl_pane_g2_ParamLimits

0xde59,	// (0x00026e6e) list_single_graphic_hl_pane_g2

0xde59,	// (0x00026e6e) list_single_graphic_hl_pane_g3_ParamLimits

0xde59,	// (0x00026e6e) list_single_graphic_hl_pane_g3

0xd09d,	// (0x000260b2) list_single_graphic_hl_pane_g4_ParamLimits

0xd09d,	// (0x000260b2) list_single_graphic_hl_pane_g4

0xde65,	// (0x00026e7a) list_single_graphic_hl_pane_g5_ParamLimits

0xde65,	// (0x00026e7a) list_single_graphic_hl_pane_g5

0x0004,

0xfc15,	// (0x00028c2a) list_single_graphic_hl_pane_g_ParamLimits

0xfc15,	// (0x00028c2a) list_single_graphic_hl_pane_g

0xde79,	// (0x00026e8e) list_single_graphic_hl_pane_t1_ParamLimits

0xde79,	// (0x00026e8e) list_single_graphic_hl_pane_t1

0xf28c,	// (0x000282a1) aid_size_min_hl_cp2

0xf295,	// (0x000282aa) list_highlight_pane_cp34_cp2_ParamLimits

0xf295,	// (0x000282aa) list_highlight_pane_cp34_cp2

0xf27f,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf27f,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2

0xf2a2,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf2a2,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2

0xf2ae,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf2ae,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2

0x8285,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8285,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2

0xf0a4,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf0a4,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2

0x9d46,	// (0x00022d5b) control_pane_g4_ParamLimits

0x9d46,	// (0x00022d5b) control_pane_g4

0xaf67,	// (0x00023f7c) bg_popup_sub_pane_cp10_ParamLimits

0xead9,	// (0x00027aee) list_choice_list_pane_ParamLimits

0xeae8,	// (0x00027afd) scroll_pane_cp23

0x6f59,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02_ParamLimits

0xf0e0,	// (0x000280f5) list_preview_fixed_pane_ParamLimits

0xf0f6,	// (0x0002810b) list_preview_fixed_pane_cp_ParamLimits

0xf0f6,	// (0x0002810b) list_preview_fixed_pane_cp

0xf102,	// (0x00028117) popup_preview_fixed_window_g1_ParamLimits

0xf102,	// (0x00028117) popup_preview_fixed_window_g1

0xf10e,	// (0x00028123) popup_preview_fixed_window_g2_ParamLimits

0xf10e,	// (0x00028123) popup_preview_fixed_window_g2

0x0002,

0xfb9d,	// (0x00028bb2) popup_preview_fixed_window_g_ParamLimits

0xfb9d,	// (0x00028bb2) popup_preview_fixed_window_g

0x9766,	// (0x0002277b) aid_navi_side_left_pane_ParamLimits

0x9776,	// (0x0002278b) aid_navi_side_right_pane_ParamLimits

0x9785,	// (0x0002279a) navi_icon_pane_stacon_ParamLimits

0x9795,	// (0x000227aa) navi_navi_pane_stacon_ParamLimits

0x9785,	// (0x0002279a) navi_text_pane_stacon_ParamLimits

0x6d0a,	// (0x0001fd1f) main_text_info_pane

0xf2d0,	// (0x000282e5) listscroll_text_info_pane

0xf2d8,	// (0x000282ed) list_text_info_pane_ParamLimits

0xf2d8,	// (0x000282ed) list_text_info_pane

0xf2e7,	// (0x000282fc) scroll_pane_cp24_ParamLimits

0xf2e7,	// (0x000282fc) scroll_pane_cp24

0xf305,	// (0x0002831a) list_text_info_pane_t1_ParamLimits

0xf305,	// (0x0002831a) list_text_info_pane_t1

0xd8f2,	// (0x00026907) popup_fast_swap2_window_ParamLimits

0xd8f2,	// (0x00026907) popup_fast_swap2_window

0xf322,	// (0x00028337) aid_size_cell_fast2

0x6d0a,	// (0x0001fd1f) bg_popup_window_pane_cp17

0xb5b2,	// (0x000245c7) heading_pane_cp2

0x7149,	// (0x0002015e) listscroll_fast2_pane

0xf32c,	// (0x00028341) grid_fast2_pane

0xf334,	// (0x00028349) listscroll_fast2_pane_g1

0xf33c,	// (0x00028351) listscroll_fast2_pane_g2

0x0001,

0xfc20,	// (0x00028c35) listscroll_fast2_pane_g

0x7bae,	// (0x00020bc3) scroll_pane_cp26

0xf344,	// (0x00028359) cell_fast2_pane_ParamLimits

0xf344,	// (0x00028359) cell_fast2_pane

0xf35a,	// (0x0002836f) cell_fast2_pane_g1

0xf363,	// (0x00028378) cell_fast2_pane_g2

0xf36c,	// (0x00028381) cell_fast2_pane_g3

0x0002,

0xfc25,	// (0x00028c3a) cell_fast2_pane_g

0x71ab,	// (0x000201c0) grid_highlight_pane_cp9

0x71c0,	// (0x000201d5) main_eswt_pane_ParamLimits

0x71c0,	// (0x000201d5) main_eswt_pane

0xf2fc,	// (0x00028311) list_single_text_info_pane

0xf374,	// (0x00028389) eswt_ctrl_button_pane

0xf374,	// (0x00028389) eswt_ctrl_canvas_pane

0xf37c,	// (0x00028391) eswt_ctrl_combo_pane

0xf374,	// (0x00028389) eswt_ctrl_default_pane

0xf374,	// (0x00028389) eswt_ctrl_label_pane

0xf384,	// (0x00028399) eswt_ctrl_wait_pane

0xf38c,	// (0x000283a1) eswt_shell_pane

0x6d0a,	// (0x0001fd1f) listscroll_eswt_app_pane

0xf3a8,	// (0x000283bd) popup_eswt_tasktip_window_ParamLimits

0xf3a8,	// (0x000283bd) popup_eswt_tasktip_window

0xb313,	// (0x00024328) bg_popup_window_pane_cp18

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_ParamLimits

0xf3b9,	// (0x000283ce) eswt_control_pane_g1

0xf3c6,	// (0x000283db) eswt_control_pane_g2_ParamLimits

0xf3c6,	// (0x000283db) eswt_control_pane_g2

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_ParamLimits

0xf3d3,	// (0x000283e8) eswt_control_pane_g3

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_ParamLimits

0xf3e0,	// (0x000283f5) eswt_control_pane_g4

0x0003,

0xfc2c,	// (0x00028c41) eswt_control_pane_g_ParamLimits

0xfc2c,	// (0x00028c41) eswt_control_pane_g

0x7a57,	// (0x00020a6c) bg_button_pane_ParamLimits

0x7a57,	// (0x00020a6c) bg_button_pane

0x71c0,	// (0x000201d5) common_borders_pane_copy2_ParamLimits

0x71c0,	// (0x000201d5) common_borders_pane_copy2

0xf3ed,	// (0x00028402) control_button_pane_g1_ParamLimits

0xf3ed,	// (0x00028402) control_button_pane_g1

0xf3f9,	// (0x0002840e) control_button_pane_g2_ParamLimits

0xf3f9,	// (0x0002840e) control_button_pane_g2

0xf405,	// (0x0002841a) control_button_pane_g3_ParamLimits

0xf405,	// (0x0002841a) control_button_pane_g3

0x0002,

0xfc35,	// (0x00028c4a) control_button_pane_g_ParamLimits

0xfc35,	// (0x00028c4a) control_button_pane_g

0xf419,	// (0x0002842e) control_button_pane_t1

0xf427,	// (0x0002843c) control_button_pane_t2

0x0001,

0xfc3c,	// (0x00028c51) control_button_pane_t

0xb225,	// (0x0002423a) bg_button_pane_g1

0xb235,	// (0x0002424a) bg_button_pane_g2

0xb22d,	// (0x00024242) bg_button_pane_g3

0xb245,	// (0x0002425a) bg_button_pane_g4

0xb23d,	// (0x00024252) bg_button_pane_g5

0xb24d,	// (0x00024262) bg_button_pane_g6

0xb255,	// (0x0002426a) bg_button_pane_g7

0xb265,	// (0x0002427a) bg_button_pane_g8

0xb25d,	// (0x00024272) bg_button_pane_g9

0x0008,

0xf89a,	// (0x000288af) bg_button_pane_g

0xea94,	// (0x00027aa9) common_borders_pane_ParamLimits

0xea94,	// (0x00027aa9) common_borders_pane

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy1_ParamLimits

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy1

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy1_ParamLimits

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy1

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy1_ParamLimits

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy1

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy1_ParamLimits

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy1

0xeacf,	// (0x00027ae4) bg_eswt_ctrl_canvas_pane_g1

0xea94,	// (0x00027aa9) common_borders_pane_cp2_ParamLimits

0xea94,	// (0x00027aa9) common_borders_pane_cp2

0xea94,	// (0x00027aa9) common_borders_pane_cp3_ParamLimits

0xea94,	// (0x00027aa9) common_borders_pane_cp3

0xf435,	// (0x0002844a) separator_horizontal_pane

0x7df4,	// (0x00020e09) separator_vertical_pane

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy2_ParamLimits

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy2

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy2_ParamLimits

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy2

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy2_ParamLimits

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy2

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy2_ParamLimits

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy2

0x6d0a,	// (0x0001fd1f) common_borders_pane_cp4

0xf43d,	// (0x00028452) separator_horizontal_pane_g1

0xf446,	// (0x0002845b) separator_horizontal_pane_g2

0xf44f,	// (0x00028464) separator_horizontal_pane_g3

0x0002,

0xfc41,	// (0x00028c56) separator_horizontal_pane_g

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy3_ParamLimits

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy3

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy3_ParamLimits

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy3

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy3_ParamLimits

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy3

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy3_ParamLimits

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy3

0x6d0a,	// (0x0001fd1f) common_borders_pane_cp5

0xf458,	// (0x0002846d) separator_vertical_pane_g1

0xf461,	// (0x00028476) separator_vertical_pane_g2

0xf46a,	// (0x0002847f) separator_vertical_pane_g3

0x0002,

0xfc48,	// (0x00028c5d) separator_vertical_pane_g

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy4_ParamLimits

0xf3b9,	// (0x000283ce) eswt_control_pane_g1_copy4

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy4_ParamLimits

0xf3c6,	// (0x000283db) eswt_control_pane_g2_copy4

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy4_ParamLimits

0xf3d3,	// (0x000283e8) eswt_control_pane_g3_copy4

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy4_ParamLimits

0xf3e0,	// (0x000283f5) eswt_control_pane_g4_copy4

0xf473,	// (0x00028488) eswt_ctrl_combo_button_pane

0xf47b,	// (0x00028490) eswt_ctrl_input_pane

0xf483,	// (0x00028498) popup_choice_list_window_cp70

0xf48b,	// (0x000284a0) eswt_ctrl_input_pane_t1

0x6d0a,	// (0x0001fd1f) input_focus_pane_cp70

0xea94,	// (0x00027aa9) bg_button_pane_cp70_ParamLimits

0xea94,	// (0x00027aa9) bg_button_pane_cp70

0xf499,	// (0x000284ae) eswt_ctrl_combo_button_pane_g1

0xf4a1,	// (0x000284b6) wait_bar_pane_cp70

0xb313,	// (0x00024328) bg_popup_window_pane_cp70_ParamLimits

0xb313,	// (0x00024328) bg_popup_window_pane_cp70

0xf4a9,	// (0x000284be) popup_eswt_tasktip_window_t1

0xf4bf,	// (0x000284d4) wait_bar_pane_cp71_ParamLimits

0xf4bf,	// (0x000284d4) wait_bar_pane_cp71

0xf4cb,	// (0x000284e0) grid_eswt_app_pane

0x7dfd,	// (0x00020e12) scroll_pane_cp70

0xf4d4,	// (0x000284e9) cell_eswt_app_pane_ParamLimits

0xf4d4,	// (0x000284e9) cell_eswt_app_pane

0xf4fc,	// (0x00028511) cell_eswt_app_pane_g1_ParamLimits

0xf4fc,	// (0x00028511) cell_eswt_app_pane_g1

0xf52b,	// (0x00028540) cell_eswt_app_pane_g2_ParamLimits

0xf52b,	// (0x00028540) cell_eswt_app_pane_g2

0x0001,

0xfc4f,	// (0x00028c64) cell_eswt_app_pane_g_ParamLimits

0xfc4f,	// (0x00028c64) cell_eswt_app_pane_g

0xf554,	// (0x00028569) cell_eswt_app_pane_t1_ParamLimits

0xf554,	// (0x00028569) cell_eswt_app_pane_t1

0xf586,	// (0x0002859b) grid_highlight_pane_cp70_ParamLimits

0xf586,	// (0x0002859b) grid_highlight_pane_cp70

0x7352,	// (0x00020367) set_content_pane_g1

0x85ff,	// (0x00021614) status_small_volume_pane

0xa6aa,	// (0x000236bf) status_small_volume_pane_g1

0xa6b2,	// (0x000236c7) volume_small2_pane

0xa6bb,	// (0x000236d0) volume_small2_pane_g1

0xa6c4,	// (0x000236d9) volume_small2_pane_g2

0xa6cd,	// (0x000236e2) volume_small2_pane_g3

0xa6d6,	// (0x000236eb) volume_small2_pane_g4

0xa6df,	// (0x000236f4) volume_small2_pane_g5

0xa6e8,	// (0x000236fd) volume_small2_pane_g6

0xa6f1,	// (0x00023706) volume_small2_pane_g7

0xa6fa,	// (0x0002370f) volume_small2_pane_g8

0xa703,	// (0x00023718) volume_small2_pane_g9

0xa70c,	// (0x00023721) volume_small2_pane_g10

0x0009,

0xfc54,	// (0x00028c69) volume_small2_pane_g

0xee59,	// (0x00027e6e) fep_vkb_top_text_pane_g1_ParamLimits

0xee74,	// (0x00027e89) fep_vkb_top_text_pane_t1_ParamLimits

0xf11a,	// (0x0002812f) popup_preview_fixed_window_g3_ParamLimits

0xf11a,	// (0x0002812f) popup_preview_fixed_window_g3

0xdc26,	// (0x00026c3b) popup_toolbar_trans_pane

0xe363,	// (0x00027378) aid_height_set_list_ParamLimits

0xc319,	// (0x0002532e) aid_size_parent_ParamLimits

0xaf67,	// (0x00023f7c) list_highlight_pane_cp2_ParamLimits

0x7352,	// (0x00020367) set_content_pane_g1_ParamLimits

0xe4da,	// (0x000274ef) list_single_image_pane_ParamLimits

0xe4da,	// (0x000274ef) list_single_image_pane

0x0059,	// (0x0001906e) aid_size_cell_image_ParamLimits

0x0059,	// (0x0001906e) aid_size_cell_image

0x0066,	// (0x0001907b) grid_single_image_pane_ParamLimits

0x0066,	// (0x0001907b) grid_single_image_pane

0x7352,	// (0x00020367) list_single_image_pane_g1_ParamLimits

0x7352,	// (0x00020367) list_single_image_pane_g1

0x7a71,	// (0x00020a86) list_single_image_pane_g2_ParamLimits

0x7a71,	// (0x00020a86) list_single_image_pane_g2

0x0001,

0xfc69,	// (0x00028c7e) list_single_image_pane_g_ParamLimits

0xfc69,	// (0x00028c7e) list_single_image_pane_g

0xc8e2,	// (0x000258f7) list_single_image_pane_t1_ParamLimits

0xc8e2,	// (0x000258f7) list_single_image_pane_t1

0x0072,	// (0x00019087) cell_image_list_pane_ParamLimits

0x0072,	// (0x00019087) cell_image_list_pane

0x0085,	// (0x0001909a) cell_image_list_pane_g1

0x008e,	// (0x000190a3) cell_image_list_pane_g2

0x0001,

0xfc6e,	// (0x00028c83) cell_image_list_pane_g

0x0097,	// (0x000190ac) aid_size_cell_tb_trans_pane

0x7a57,	// (0x00020a6c) bg_tb_trans_pane

0x00a9,	// (0x000190be) grid_tb_trans_pane

0xb225,	// (0x0002423a) bg_tb_trans_pane_g1

0xb235,	// (0x0002424a) bg_tb_trans_pane_g2

0xb22d,	// (0x00024242) bg_tb_trans_pane_g3

0xb245,	// (0x0002425a) bg_tb_trans_pane_g4

0xb23d,	// (0x00024252) bg_tb_trans_pane_g5

0xb265,	// (0x0002427a) bg_tb_trans_pane_g6

0xb25d,	// (0x00024272) bg_tb_trans_pane_g7

0xb24d,	// (0x00024262) bg_tb_trans_pane_g8

0xb255,	// (0x0002426a) bg_tb_trans_pane_g9

0x0008,

0xfc73,	// (0x00028c88) bg_tb_trans_pane_g

0x00bd,	// (0x000190d2) cell_toolbar_trans_pane_ParamLimits

0x00bd,	// (0x000190d2) cell_toolbar_trans_pane

0xeacf,	// (0x00027ae4) cell_toolbar_trans_pane_g1

0xe754,	// (0x00027769) list_form2_midp_pane_t1

0xe762,	// (0x00027777) list_form2_midp_pane_t2

0x0001,

0xfb10,	// (0x00028b25) list_form2_midp_pane_t

0xe770,	// (0x00027785) scroll_pane_cp51_ParamLimits

0xe929,	// (0x0002793e) form2_midp_wait_pane_g1

0xe932,	// (0x00027947) form2_midp_wait_pane_g2

0xe93b,	// (0x00027950) form2_midp_wait_pane_g3

0x0002,

0xfb25,	// (0x00028b3a) form2_midp_wait_pane_g

0x6dfa,	// (0x0001fe0f) list_highlight_pane_cp21_ParamLimits

0xe95b,	// (0x00027970) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe96a,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd184,	// (0x00026199) list_single_2graphic_im_pane_ParamLimits

0xd184,	// (0x00026199) list_single_2graphic_im_pane

0x00e3,	// (0x000190f8) list_single_2graphic_im_pane_g1_ParamLimits

0x00e3,	// (0x000190f8) list_single_2graphic_im_pane_g1

0x00f4,	// (0x00019109) list_single_2graphic_im_pane_g2_ParamLimits

0x00f4,	// (0x00019109) list_single_2graphic_im_pane_g2

0x0100,	// (0x00019115) list_single_2graphic_im_pane_g3_ParamLimits

0x0100,	// (0x00019115) list_single_2graphic_im_pane_g3

0x0003,

0xfc86,	// (0x00028c9b) list_single_2graphic_im_pane_g_ParamLimits

0xfc86,	// (0x00028c9b) list_single_2graphic_im_pane_g

0x0120,	// (0x00019135) list_single_2graphic_im_pane_t1_ParamLimits

0x0120,	// (0x00019135) list_single_2graphic_im_pane_t1

0xf126,	// (0x0002813b) list_single_graphic_2heading_pane_fp_ParamLimits

0xf126,	// (0x0002813b) list_single_graphic_2heading_pane_fp

0xd742,	// (0x00026757) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd742,	// (0x00026757) list_single_graphic_2heading_pane_fp_g1

0xf13a,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf13a,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2

0xccce,	// (0x00025ce3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xccce,	// (0x00025ce3) list_single_graphic_2heading_pane_fp_g3

0xd717,	// (0x0002672c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd717,	// (0x0002672c) list_single_graphic_2heading_pane_fp_g4

0xf146,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf146,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbad,	// (0x00028bc2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00028bc2) list_single_graphic_2heading_pane_fp_g

0xde8f,	// (0x00026ea4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xde8f,	// (0x00026ea4) list_single_graphic_2heading_pane_fp_t1

0xd77a,	// (0x0002678f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd77a,	// (0x0002678f) list_single_graphic_2heading_pane_fp_t2

0xdea5,	// (0x00026eba) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdea5,	// (0x00026eba) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8f,	// (0x00028ca4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8f,	// (0x00028ca4) list_single_graphic_2heading_pane_fp_t

0xeb5a,	// (0x00027b6f) fep_hwr_write_pane_g5_ParamLimits

0xeb5a,	// (0x00027b6f) fep_hwr_write_pane_g5

0xeb66,	// (0x00027b7b) fep_hwr_write_pane_g6_ParamLimits

0xeb66,	// (0x00027b7b) fep_hwr_write_pane_g6

0xf38c,	// (0x000283a1) eswt_shell_pane_ParamLimits

0xb313,	// (0x00024328) bg_popup_window_pane_cp18_ParamLimits

0xc2bd,	// (0x000252d2) heading_pane_cp70

0xf4a9,	// (0x000284be) popup_eswt_tasktip_window_t1_ParamLimits

0xdcb3,	// (0x00026cc8) aid_touch_tab_arrow_left

0xdcbf,	// (0x00026cd4) aid_touch_tab_arrow_right

0x9327,	// (0x0002233c) title_pane_g3_ParamLimits

0x9327,	// (0x0002233c) title_pane_g3

0x7a27,	// (0x00020a3c) set_value_pane_g1

0xdc26,	// (0x00026c3b) popup_toolbar_trans_pane_ParamLimits

0x0097,	// (0x000190ac) aid_size_cell_tb_trans_pane_ParamLimits

0x7a57,	// (0x00020a6c) bg_tb_trans_pane_ParamLimits

0x00a9,	// (0x000190be) grid_tb_trans_pane_ParamLimits

0x6f59,	// (0x0001ff6e) cont_note_pane_ParamLimits

0x6f59,	// (0x0001ff6e) cont_note_pane

0x71c0,	// (0x000201d5) cont_snote2_single_text_pane_ParamLimits

0x71c0,	// (0x000201d5) cont_snote2_single_text_pane

0x71c0,	// (0x000201d5) cont_snote2_single_graphic_pane_ParamLimits

0x71c0,	// (0x000201d5) cont_snote2_single_graphic_pane

0xb78b,	// (0x000247a0) cont_note_wait_pane_ParamLimits

0xb78b,	// (0x000247a0) cont_note_wait_pane

0xb78b,	// (0x000247a0) cont_note_image_pane_ParamLimits

0xb78b,	// (0x000247a0) cont_note_image_pane

0x0151,	// (0x00019166) popup_note2_window_g1_ParamLimits

0x0151,	// (0x00019166) popup_note2_window_g1

0x0182,	// (0x00019197) popup_note2_window_t1_ParamLimits

0x0182,	// (0x00019197) popup_note2_window_t1

0x01c7,	// (0x000191dc) popup_note2_window_t2_ParamLimits

0x01c7,	// (0x000191dc) popup_note2_window_t2

0x020c,	// (0x00019221) popup_note2_window_t3_ParamLimits

0x020c,	// (0x00019221) popup_note2_window_t3

0x0251,	// (0x00019266) popup_note2_window_t4_ParamLimits

0x0251,	// (0x00019266) popup_note2_window_t4

0x6fdd,	// (0x0001fff2) popup_note2_window_t5_ParamLimits

0x6fdd,	// (0x0001fff2) popup_note2_window_t5

0x0004,

0xfc9b,	// (0x00028cb0) popup_note2_window_t_ParamLimits

0xfc9b,	// (0x00028cb0) popup_note2_window_t

0x0280,	// (0x00019295) popup_note2_image_window_g1_ParamLimits

0x0280,	// (0x00019295) popup_note2_image_window_g1

0x028c,	// (0x000192a1) popup_note2_image_window_g2_ParamLimits

0x028c,	// (0x000192a1) popup_note2_image_window_g2

0x0001,

0xfca6,	// (0x00028cbb) popup_note2_image_window_g_ParamLimits

0xfca6,	// (0x00028cbb) popup_note2_image_window_g

0x029e,	// (0x000192b3) popup_note2_image_window_t1_ParamLimits

0x029e,	// (0x000192b3) popup_note2_image_window_t1

0x02b6,	// (0x000192cb) popup_note2_image_window_t2_ParamLimits

0x02b6,	// (0x000192cb) popup_note2_image_window_t2

0x02ce,	// (0x000192e3) popup_note2_image_window_t3_ParamLimits

0x02ce,	// (0x000192e3) popup_note2_image_window_t3

0x0002,

0xfcab,	// (0x00028cc0) popup_note2_image_window_t_ParamLimits

0xfcab,	// (0x00028cc0) popup_note2_image_window_t

0xb799,	// (0x000247ae) popup_note2_wait_window_g1_ParamLimits

0xb799,	// (0x000247ae) popup_note2_wait_window_g1

0xb7a5,	// (0x000247ba) popup_note2_wait_window_g2_ParamLimits

0xb7a5,	// (0x000247ba) popup_note2_wait_window_g2

0xb7b1,	// (0x000247c6) popup_note2_wait_window_g3_ParamLimits

0xb7b1,	// (0x000247c6) popup_note2_wait_window_g3

0x0002,

0xf87c,	// (0x00028891) popup_note2_wait_window_g_ParamLimits

0xf87c,	// (0x00028891) popup_note2_wait_window_g

0x02ea,	// (0x000192ff) popup_note2_wait_window_t1_ParamLimits

0x02ea,	// (0x000192ff) popup_note2_wait_window_t1

0x0308,	// (0x0001931d) popup_note2_wait_window_t2_ParamLimits

0x0308,	// (0x0001931d) popup_note2_wait_window_t2

0x0326,	// (0x0001933b) popup_note2_wait_window_t3_ParamLimits

0x0326,	// (0x0001933b) popup_note2_wait_window_t3

0x0338,	// (0x0001934d) popup_note2_wait_window_t4_ParamLimits

0x0338,	// (0x0001934d) popup_note2_wait_window_t4

0x0003,

0xfcb2,	// (0x00028cc7) popup_note2_wait_window_t_ParamLimits

0xfcb2,	// (0x00028cc7) popup_note2_wait_window_t

0x034a,	// (0x0001935f) wait_bar2_pane_ParamLimits

0x034a,	// (0x0001935f) wait_bar2_pane

0x0362,	// (0x00019377) popup_snote2_single_text_window_g1_ParamLimits

0x0362,	// (0x00019377) popup_snote2_single_text_window_g1

0x038a,	// (0x0001939f) popup_snote2_single_text_window_t1_ParamLimits

0x038a,	// (0x0001939f) popup_snote2_single_text_window_t1

0x03d6,	// (0x000193eb) popup_snote2_single_text_window_t2_ParamLimits

0x03d6,	// (0x000193eb) popup_snote2_single_text_window_t2

0x0422,	// (0x00019437) popup_snote2_single_text_window_t3_ParamLimits

0x0422,	// (0x00019437) popup_snote2_single_text_window_t3

0x0463,	// (0x00019478) popup_snote2_single_text_window_t4_ParamLimits

0x0463,	// (0x00019478) popup_snote2_single_text_window_t4

0x0499,	// (0x000194ae) popup_snote2_single_text_window_t5_ParamLimits

0x0499,	// (0x000194ae) popup_snote2_single_text_window_t5

0x0004,

0xfcbb,	// (0x00028cd0) popup_snote2_single_text_window_t_ParamLimits

0xfcbb,	// (0x00028cd0) popup_snote2_single_text_window_t

0x04c4,	// (0x000194d9) popup_snote2_single_graphic_window_g1_ParamLimits

0x04c4,	// (0x000194d9) popup_snote2_single_graphic_window_g1

0x04ec,	// (0x00019501) popup_snote2_single_graphic_window_g2_ParamLimits

0x04ec,	// (0x00019501) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc6,	// (0x00028cdb) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc6,	// (0x00028cdb) popup_snote2_single_graphic_window_g

0x0514,	// (0x00019529) popup_snote2_single_graphic_window_t1_ParamLimits

0x0514,	// (0x00019529) popup_snote2_single_graphic_window_t1

0x0560,	// (0x00019575) popup_snote2_single_graphic_window_t2_ParamLimits

0x0560,	// (0x00019575) popup_snote2_single_graphic_window_t2

0x0422,	// (0x00019437) popup_snote2_single_graphic_window_t3_ParamLimits

0x0422,	// (0x00019437) popup_snote2_single_graphic_window_t3

0x0463,	// (0x00019478) popup_snote2_single_graphic_window_t4_ParamLimits

0x0463,	// (0x00019478) popup_snote2_single_graphic_window_t4

0x0499,	// (0x000194ae) popup_snote2_single_graphic_window_t5_ParamLimits

0x0499,	// (0x000194ae) popup_snote2_single_graphic_window_t5

0x0004,

0xfccb,	// (0x00028ce0) popup_snote2_single_graphic_window_t_ParamLimits

0xfccb,	// (0x00028ce0) popup_snote2_single_graphic_window_t

0xd68d,	// (0x000266a2) clock_nsta_pane_cp2_t1

0xd68d,	// (0x000266a2) clock_nsta_pane_cp2_t2

0x0001,

0xfae6,	// (0x00028afb) clock_nsta_pane_cp2_t

0xce82,	// (0x00025e97) form_field_data_wide_pane_g1_ParamLimits

0x7352,	// (0x00020367) form_field_data_wide_pane_g2_ParamLimits

0x7352,	// (0x00020367) form_field_data_wide_pane_g2

0x7a71,	// (0x00020a86) form_field_data_wide_pane_g3_ParamLimits

0x7a71,	// (0x00020a86) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x000286cf) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x000286cf) form_field_data_wide_pane_g

0xe62e,	// (0x00027643) grid_touch_3_pane_ParamLimits

0xe62e,	// (0x00027643) grid_touch_3_pane

0x05ac,	// (0x000195c1) cell_touch_3_pane_ParamLimits

0x05ac,	// (0x000195c1) cell_touch_3_pane

0xeacf,	// (0x00027ae4) cell_touch_3_pane_g1

0xeacf,	// (0x00027ae4) cell_touch_3_pane_g2

0x0001,

0xfb6b,	// (0x00028b80) cell_touch_3_pane_g

0x700f,	// (0x00020024) cont_query_data_pane

0x7017,	// (0x0002002c) cont_query_data_pane_cp1

0x05d9,	// (0x000195ee) button_value_adjust_pane_cp7

0x05e1,	// (0x000195f6) query_popup_pane_cp3

0x7fa0,	// (0x00020fb5) bg_popup_sub_pane_cp22_ParamLimits

0x99cf,	// (0x000229e4) navi_navi_volume_pane_cp2

0x99e7,	// (0x000229fc) popup_side_volume_key_window_g2

0x99f3,	// (0x00022a08) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00028761) popup_side_volume_key_window_g

0x9a0d,	// (0x00022a22) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00028768) popup_side_volume_key_window_t

0x8208,	// (0x0002121d) popup_side_volume_key_window_ParamLimits

0xcb15,	// (0x00025b2a) list_double_graphic_pane_g4_ParamLimits

0xcb15,	// (0x00025b2a) list_double_graphic_pane_g4

0xe4ae,	// (0x000274c3) list_single_2heading_msg_pane_ParamLimits

0xe4ae,	// (0x000274c3) list_single_2heading_msg_pane

0xdec3,	// (0x00026ed8) list_single_2heading_msg_pane_g1_ParamLimits

0xdec3,	// (0x00026ed8) list_single_2heading_msg_pane_g1

0xc976,	// (0x0002598b) list_single_2heading_msg_pane_g2_ParamLimits

0xc976,	// (0x0002598b) list_single_2heading_msg_pane_g2

0xdecf,	// (0x00026ee4) list_single_2heading_msg_pane_g3_ParamLimits

0xdecf,	// (0x00026ee4) list_single_2heading_msg_pane_g3

0xdedb,	// (0x00026ef0) list_single_2heading_msg_pane_g4_ParamLimits

0xdedb,	// (0x00026ef0) list_single_2heading_msg_pane_g4

0x0003,

0xfcd6,	// (0x00028ceb) list_single_2heading_msg_pane_g_ParamLimits

0xfcd6,	// (0x00028ceb) list_single_2heading_msg_pane_g

0xdef3,	// (0x00026f08) list_single_2heading_msg_pane_t1_ParamLimits

0xdef3,	// (0x00026f08) list_single_2heading_msg_pane_t1

0xdf1b,	// (0x00026f30) list_single_2heading_msg_pane_t2_ParamLimits

0xdf1b,	// (0x00026f30) list_single_2heading_msg_pane_t2

0xdf4f,	// (0x00026f64) list_single_2heading_msg_pane_t3_ParamLimits

0xdf4f,	// (0x00026f64) list_single_2heading_msg_pane_t3

0xdf88,	// (0x00026f9d) list_single_2heading_msg_pane_t4_ParamLimits

0xdf88,	// (0x00026f9d) list_single_2heading_msg_pane_t4

0x0003,

0xfcdf,	// (0x00028cf4) list_single_2heading_msg_pane_t_ParamLimits

0xfcdf,	// (0x00028cf4) list_single_2heading_msg_pane_t

0x6da0,	// (0x0001fdb5) title_pane_g4_ParamLimits

0x6da0,	// (0x0001fdb5) title_pane_g4

0x96dc,	// (0x000226f1) title_pane_stacon_g3_ParamLimits

0x96dc,	// (0x000226f1) title_pane_stacon_g3

0x0114,	// (0x00019129) list_single_2graphic_im_pane_g4_ParamLimits

0x0114,	// (0x00019129) list_single_2graphic_im_pane_g4

0xc0d3,	// (0x000250e8) popup_side_volume_key_window_cp

0xc539,	// (0x0002554e) main_idle_act2_pane_t1

0x9e94,	// (0x00022ea9) toolbar_button_pane_g10

0x9635,	// (0x0002264a) popup_toolbar_window_cp1

0xd67e,	// (0x00026693) clock_nsta_pane_cp_t1

0xd67e,	// (0x00026693) clock_nsta_pane_cp_t2

0x0001,

0xfae1,	// (0x00028af6) clock_nsta_pane_cp_t

0x99cf,	// (0x000229e4) navi_navi_volume_pane_cp2_ParamLimits

0x99db,	// (0x000229f0) popup_side_volume_key_window_g1_ParamLimits

0x99e7,	// (0x000229fc) popup_side_volume_key_window_g2_ParamLimits

0x99f3,	// (0x00022a08) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00028761) popup_side_volume_key_window_g_ParamLimits

0xa32a,	// (0x0002333f) fep_hwr_aid_pane

0xa3cb,	// (0x000233e0) bg_fep_hwr_top_pane_g4_ParamLimits

0xeb2a,	// (0x00027b3f) fep_hwr_top_pane_g1_ParamLimits

0xeb3c,	// (0x00027b51) fep_hwr_top_pane_g2_ParamLimits

0xa3eb,	// (0x00023400) fep_hwr_top_pane_g3_ParamLimits

0xfb36,	// (0x00028b4b) fep_hwr_top_pane_g_ParamLimits

0xa400,	// (0x00023415) fep_hwr_top_text_pane_ParamLimits

0xbe9e,	// (0x00024eb3) aid_touch_tab_arrow_arrow_2

0xbea7,	// (0x00024ebc) aid_touch_tab_arrow_left_2

0xa33e,	// (0x00023353) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa371,	// (0x00023386) fep_hwr_prediction_pane

0xec89,	// (0x00027c9e) fep_vkb_prediction_pane

0xed6b,	// (0x00027d80) fep_vkb_side_pane_g3_ParamLimits

0xed6b,	// (0x00027d80) fep_vkb_side_pane_g3

0xa56f,	// (0x00023584) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa5d9,	// (0x000235ee) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa5e6,	// (0x000235fb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe5,	// (0x00028bfa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa715,	// (0x0002372a) fep_hwr_prediction_pane_g1

0xa71f,	// (0x00023734) fep_hwr_prediction_pane_g2

0xa727,	// (0x0002373c) fep_hwr_prediction_pane_g3

0xa72f,	// (0x00023744) fep_hwr_prediction_pane_g4

0x0003,

0xfce8,	// (0x00028cfd) fep_hwr_prediction_pane_g

0x0606,	// (0x0001961b) fep_vkb_prediction_pane_g1

0x0628,	// (0x0001963d) fep_vkb_prediction_pane_g2

0x0630,	// (0x00019645) fep_vkb_prediction_pane_g3

0x0638,	// (0x0001964d) fep_vkb_prediction_pane_g4

0x0003,

0xfcf1,	// (0x00028d06) fep_vkb_prediction_pane_g

0xa162,	// (0x00023177) slider_set_pane_g3

0xa176,	// (0x0002318b) slider_set_pane_g4

0xa18e,	// (0x000231a3) slider_set_pane_g5

0xa162,	// (0x00023177) slider_set_pane_g6

0xa1a4,	// (0x000231b9) slider_set_pane_g7

0xc33c,	// (0x00025351) slider_form_pane_g3

0xc345,	// (0x0002535a) slider_form_pane_g4

0xc34d,	// (0x00025362) slider_form_pane_g5

0xc33c,	// (0x00025351) slider_form_pane_g6

0xe493,	// (0x000274a8) slider_form_pane_g7

0xc782,	// (0x00025797) slider_set_pane_vc_g3

0xc78b,	// (0x000257a0) slider_set_pane_vc_g4

0xc794,	// (0x000257a9) slider_set_pane_vc_g5

0xc782,	// (0x00025797) slider_set_pane_vc_g6

0xc79d,	// (0x000257b2) slider_set_pane_vc_g7

0xc782,	// (0x00025797) slider_form_pane_vc_g1

0xc78b,	// (0x000257a0) slider_form_pane_vc_g2

0xc794,	// (0x000257a9) slider_form_pane_vc_g3

0xc782,	// (0x00025797) slider_form_pane_vc_g4

0xd43c,	// (0x00026451) slider_form_pane_vc_g5

0x0004,

0xfac7,	// (0x00028adc) slider_form_pane_vc_g

0x6d0a,	// (0x0001fd1f) main_idle_act3_pane

0x0640,	// (0x00019655) ai3_links_pane

0x0649,	// (0x0001965e) popup_ai3_data_window_ParamLimits

0x0649,	// (0x0001965e) popup_ai3_data_window

0x6d0a,	// (0x0001fd1f) grid_ai3_links_pane

0x0661,	// (0x00019676) cell_ai3_links_pane_ParamLimits

0x0661,	// (0x00019676) cell_ai3_links_pane

0x0675,	// (0x0001968a) bg_popup_sub_pane_cp11

0x0682,	// (0x00019697) cell_ai3_links_pane_g1

0x6d0a,	// (0x0001fd1f) bg_popup_sub_pane_cp12

0x06a7,	// (0x000196bc) heading_ai3_data_pane

0x06af,	// (0x000196c4) list_ai3_gene_pane

0x06bb,	// (0x000196d0) popup_ai3_data_window_g1

0x06c3,	// (0x000196d8) heading_ai3_data_pane_g1

0x06cb,	// (0x000196e0) heading_ai3_data_pane_t1

0x06d9,	// (0x000196ee) list_double_ai3_gene_pane_ParamLimits

0x06d9,	// (0x000196ee) list_double_ai3_gene_pane

0x06e6,	// (0x000196fb) list_single_ai3_gene_pane_ParamLimits

0x06e6,	// (0x000196fb) list_single_ai3_gene_pane

0xea94,	// (0x00027aa9) list_highlight_pane_cp7_ParamLimits

0xea94,	// (0x00027aa9) list_highlight_pane_cp7

0x06f3,	// (0x00019708) list_single_a13_gene_pane_t1_ParamLimits

0x06f3,	// (0x00019708) list_single_a13_gene_pane_t1

0x070a,	// (0x0001971f) list_single_ai3_gene_pane_g1

0x0713,	// (0x00019728) list_single_ai3_gene_pane_g2

0x0001,

0xfcfa,	// (0x00028d0f) list_single_ai3_gene_pane_g

0x071b,	// (0x00019730) list_double_ai3_gene_pane_g1_ParamLimits

0x071b,	// (0x00019730) list_double_ai3_gene_pane_g1

0x0727,	// (0x0001973c) list_double_ai3_gene_pane_t1_ParamLimits

0x0727,	// (0x0001973c) list_double_ai3_gene_pane_t1

0x0743,	// (0x00019758) list_double_ai3_gene_pane_t2_ParamLimits

0x0743,	// (0x00019758) list_double_ai3_gene_pane_t2

0x0758,	// (0x0001976d) list_double_ai3_gene_pane_t3_ParamLimits

0x0758,	// (0x0001976d) list_double_ai3_gene_pane_t3

0x0002,

0xfcff,	// (0x00028d14) list_double_ai3_gene_pane_t_ParamLimits

0xfcff,	// (0x00028d14) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdebb,	// (0x00026ed0) aid_size_min_col_2

0x05f2,	// (0x00019607) aid_size_min_msg_ParamLimits

0x05f2,	// (0x00019607) aid_size_min_msg

0xee65,	// (0x00027e7a) fep_vkb_top_text_pane_g2_ParamLimits

0xee65,	// (0x00027e7a) fep_vkb_top_text_pane_g2

0x0001,

0xfb66,	// (0x00028b7b) fep_vkb_top_text_pane_g_ParamLimits

0xfb66,	// (0x00028b7b) fep_vkb_top_text_pane_g

0x6d0a,	// (0x0001fd1f) main_hc_apps_shell_pane

0x0775,	// (0x0001978a) grid_hc_apps_pane_ParamLimits

0x0775,	// (0x0001978a) grid_hc_apps_pane

0x0784,	// (0x00019799) list_hc_apps_pane

0x078c,	// (0x000197a1) scroll_pane_cp37_ParamLimits

0x078c,	// (0x000197a1) scroll_pane_cp37

0x0798,	// (0x000197ad) cell_hc_apps_pane_ParamLimits

0x0798,	// (0x000197ad) cell_hc_apps_pane

0x0826,	// (0x0001983b) cell_hc_apps_pane_g1_ParamLimits

0x0826,	// (0x0001983b) cell_hc_apps_pane_g1

0x0853,	// (0x00019868) cell_hc_apps_pane_g2_ParamLimits

0x0853,	// (0x00019868) cell_hc_apps_pane_g2

0x086f,	// (0x00019884) cell_hc_apps_pane_g3_ParamLimits

0x086f,	// (0x00019884) cell_hc_apps_pane_g3

0x0002,

0xfd06,	// (0x00028d1b) cell_hc_apps_pane_g_ParamLimits

0xfd06,	// (0x00028d1b) cell_hc_apps_pane_g

0x0891,	// (0x000198a6) cell_hc_apps_pane_t1_ParamLimits

0x0891,	// (0x000198a6) cell_hc_apps_pane_t1

0x6f59,	// (0x0001ff6e) grid_highlight_pane_cp10_ParamLimits

0x6f59,	// (0x0001ff6e) grid_highlight_pane_cp10

0x08cf,	// (0x000198e4) list_single_hc_apps_pane_ParamLimits

0x08cf,	// (0x000198e4) list_single_hc_apps_pane

0x08ff,	// (0x00019914) list_single_hc_apps_pane_g1

0xdfad,	// (0x00026fc2) list_single_hc_apps_pane_g2

0x0001,

0xfd0d,	// (0x00028d22) list_single_hc_apps_pane_g

0xdfc6,	// (0x00026fdb) list_single_hc_apps_pane_g2_copy1

0xdfe2,	// (0x00026ff7) list_single_hc_apps_pane_t1

0x6dfa,	// (0x0001fe0f) bg_set_opt_pane_cp_ParamLimits

0x93cf,	// (0x000223e4) setting_slider_pane_t1_ParamLimits

0x93e5,	// (0x000223fa) setting_slider_pane_t2_ParamLimits

0x93fe,	// (0x00022413) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000285b7) setting_slider_pane_t_ParamLimits

0x9415,	// (0x0002242a) slider_set_pane_ParamLimits

0x9d52,	// (0x00022d67) control_pane_g5_ParamLimits

0x9d52,	// (0x00022d67) control_pane_g5

0xc304,	// (0x00025319) slider_set_pane_g1_ParamLimits

0xa156,	// (0x0002316b) slider_set_pane_g2_ParamLimits

0xa162,	// (0x00023177) slider_set_pane_g3_ParamLimits

0xa176,	// (0x0002318b) slider_set_pane_g4_ParamLimits

0xa18e,	// (0x000231a3) slider_set_pane_g5_ParamLimits

0xa162,	// (0x00023177) slider_set_pane_g6_ParamLimits

0xa1a4,	// (0x000231b9) slider_set_pane_g7_ParamLimits

0xf998,	// (0x000289ad) slider_set_pane_g_ParamLimits

0x6dfa,	// (0x0001fe0f) navi_icon_text_pane_ParamLimits

0xdc8d,	// (0x00026ca2) aid_fill_nsta_2_ParamLimits

0xdcb3,	// (0x00026cc8) aid_touch_tab_arrow_left_ParamLimits

0xdcbf,	// (0x00026cd4) aid_touch_tab_arrow_right_ParamLimits

0xdd29,	// (0x00026d3e) clock_nsta_pane_ParamLimits

0xbe80,	// (0x00024e95) navi_icon_pane_g1_ParamLimits

0xbe8c,	// (0x00024ea1) navi_text_pane_t1_ParamLimits

0xe72e,	// (0x00027743) navi_icon_text_pane_g1_ParamLimits

0xe73a,	// (0x0002774f) navi_icon_text_pane_t1_ParamLimits

0x08ff,	// (0x00019914) list_single_hc_apps_pane_g1_ParamLimits

0xdfad,	// (0x00026fc2) list_single_hc_apps_pane_g2_ParamLimits

0xfd0d,	// (0x00028d22) list_single_hc_apps_pane_g_ParamLimits

0xdfc6,	// (0x00026fdb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdfe2,	// (0x00026ff7) list_single_hc_apps_pane_t1_ParamLimits

0x9243,	// (0x00022258) popup_toolbar2_fixed_window_ParamLimits

0x9243,	// (0x00022258) popup_toolbar2_fixed_window

0xdc1e,	// (0x00026c33) popup_toolbar2_float_window

0x6d0a,	// (0x0001fd1f) bg_popup_sub_pane_cp27

0x0918,	// (0x0001992d) grid_toolbar2_float_pane

0x6d0a,	// (0x0001fd1f) bg_popup_sub_pane_cp26

0x0918,	// (0x0001992d) grid_toolbar2_fixed_pane

0x0920,	// (0x00019935) cell_toolbar2_fixed_pane_ParamLimits

0x0920,	// (0x00019935) cell_toolbar2_fixed_pane

0x0931,	// (0x00019946) cell_toolbar2_fixed_pane_g1

0x093a,	// (0x0001994f) toolbar2_fixed_button_pane

0xb225,	// (0x0002423a) toolbar2_fixed_button_pane_g1

0xb235,	// (0x0002424a) toolbar2_fixed_button_pane_g2

0xb22d,	// (0x00024242) toolbar2_fixed_button_pane_g3

0xb245,	// (0x0002425a) toolbar2_fixed_button_pane_g4

0xb23d,	// (0x00024252) toolbar2_fixed_button_pane_g5

0xb24d,	// (0x00024262) toolbar2_fixed_button_pane_g6

0xb255,	// (0x0002426a) toolbar2_fixed_button_pane_g7

0xb265,	// (0x0002427a) toolbar2_fixed_button_pane_g8

0xb25d,	// (0x00024272) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x000288af) toolbar2_fixed_button_pane_g

0x0942,	// (0x00019957) cell_toolbar2_float_pane_ParamLimits

0x0942,	// (0x00019957) cell_toolbar2_float_pane

0x0953,	// (0x00019968) cell_toolbar2_float_pane_g1

0x093a,	// (0x0001994f) toolbar2_fixed_button_pane_cp

0xebea,	// (0x00027bff) fep_vkb_accented_list_pane_ParamLimits

0xebea,	// (0x00027bff) fep_vkb_accented_list_pane

0xa54f,	// (0x00023564) bg_popup_fep_shadow_pane_g9

0x8410,	// (0x00021425) bg_popup_fep_shadow_pane_cp3

0x7b95,	// (0x00020baa) list_accented_list_pane

0x095c,	// (0x00019971) list_single_accented_list_pane_ParamLimits

0x095c,	// (0x00019971) list_single_accented_list_pane

0x8410,	// (0x00021425) list_highlight_pane_cp10

0x096d,	// (0x00019982) list_single_accented_list_pane_t1

0xdb8c,	// (0x00026ba1) popup_slider_window_ParamLimits

0xdb8c,	// (0x00026ba1) popup_slider_window

0x05e9,	// (0x000195fe) aid_indentation_list_msg

0x0a0d,	// (0x00019a22) bg_popup_window_pane_cp19

0x0a71,	// (0x00019a86) popup_slider_window_g1

0x0a8d,	// (0x00019aa2) popup_slider_window_g2

0x0aa9,	// (0x00019abe) popup_slider_window_g3

0x0005,

0xfd12,	// (0x00028d27) popup_slider_window_g

0x0b05,	// (0x00019b1a) popup_slider_window_t1

0x0b77,	// (0x00019b8c) small_volume_slider_vertical_pane

0xeacf,	// (0x00027ae4) small_volume_slider_vertical_pane_g1

0xeacf,	// (0x00027ae4) small_volume_slider_vertical_pane_g2

0x0b93,	// (0x00019ba8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd24,	// (0x00028d39) small_volume_slider_vertical_pane_g

0x90b7,	// (0x000220cc) area_side_right_pane_ParamLimits

0x90b7,	// (0x000220cc) area_side_right_pane

0xa737,	// (0x0002374c) aid_size_side_button_ParamLimits

0xa737,	// (0x0002374c) aid_size_side_button

0xa74b,	// (0x00023760) grid_sctrl_middle_pane_ParamLimits

0xa74b,	// (0x00023760) grid_sctrl_middle_pane

0xa767,	// (0x0002377c) sctrl_sk_bottom_pane

0xa778,	// (0x0002378d) sctrl_sk_top_pane

0xa78a,	// (0x0002379f) aid_touch_sctrl_top

0xa797,	// (0x000237ac) bg_sctrl_sk_pane_ParamLimits

0xa797,	// (0x000237ac) bg_sctrl_sk_pane

0xa7a5,	// (0x000237ba) sctrl_sk_top_pane_g1

0xa7b2,	// (0x000237c7) sctrl_sk_top_pane_t1

0xa78a,	// (0x0002379f) aid_touch_sctrl_bottom

0xa797,	// (0x000237ac) bg_sctrl_sk_pane_cp_ParamLimits

0xa797,	// (0x000237ac) bg_sctrl_sk_pane_cp

0xa7cd,	// (0x000237e2) sctrl_sk_bottom_pane_g1

0xa7b2,	// (0x000237c7) sctrl_sk_bottom_pane_t1

0xa7d6,	// (0x000237eb) cell_sctrl_middle_pane_ParamLimits

0xa7d6,	// (0x000237eb) cell_sctrl_middle_pane

0xa7f1,	// (0x00023806) aid_touch_sctrl_middle_ParamLimits

0xa7f1,	// (0x00023806) aid_touch_sctrl_middle

0xa802,	// (0x00023817) bg_sctrl_middle_pane_ParamLimits

0xa802,	// (0x00023817) bg_sctrl_middle_pane

0xa56f,	// (0x00023584) cell_sctrl_middle_pane_g1_ParamLimits

0xa56f,	// (0x00023584) cell_sctrl_middle_pane_g1

0xa810,	// (0x00023825) cell_sctrl_middle_pane_g2_ParamLimits

0xa810,	// (0x00023825) cell_sctrl_middle_pane_g2

0x0001,

0xfd30,	// (0x00028d45) cell_sctrl_middle_pane_g_ParamLimits

0xfd30,	// (0x00028d45) cell_sctrl_middle_pane_g

0xb225,	// (0x0002423a) bg_sctrl_middle_pane_g1

0xb22d,	// (0x00024242) bg_sctrl_middle_pane_g2

0xb235,	// (0x0002424a) bg_sctrl_middle_pane_g3

0xb23d,	// (0x00024252) bg_sctrl_middle_pane_g4

0xb245,	// (0x0002425a) bg_sctrl_middle_pane_g5

0xb24d,	// (0x00024262) bg_sctrl_middle_pane_g6

0xb255,	// (0x0002426a) bg_sctrl_middle_pane_g7

0xb25d,	// (0x00024272) bg_sctrl_middle_pane_g8

0x0007,

0xfd35,	// (0x00028d4a) bg_sctrl_middle_pane_g

0xb265,	// (0x0002427a) bg_sctrl_middle_pane_g8_copy1

0xb225,	// (0x0002423a) bg_sctrl_sk_pane_g1

0xb235,	// (0x0002424a) bg_sctrl_sk_pane_g2

0xb22d,	// (0x00024242) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x000288af) bg_sctrl_sk_pane_g

0x72e2,	// (0x000202f7) aid_size_touch_scroll_bar

0xb245,	// (0x0002425a) bg_sctrl_sk_pane_g4

0xb23d,	// (0x00024252) bg_sctrl_sk_pane_g5

0xb24d,	// (0x00024262) bg_sctrl_sk_pane_g6

0xb255,	// (0x0002426a) bg_sctrl_sk_pane_g7

0xb265,	// (0x0002427a) bg_sctrl_sk_pane_g8

0xb25d,	// (0x00024272) bg_sctrl_sk_pane_g9

0xaf9b,	// (0x00023fb0) popup_fep_china_hwr2_fs_candidate_window

0xd948,	// (0x0002695d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd948,	// (0x0002695d) popup_fep_china_hwr2_fs_control_window

0xa56f,	// (0x00023584) sctrl_sk_top_pane_g2

0x0001,

0xfd2b,	// (0x00028d40) sctrl_sk_top_pane_g

0x0c6f,	// (0x00019c84) aid_fep_china_hwr2_fs_cell_ParamLimits

0x0c6f,	// (0x00019c84) aid_fep_china_hwr2_fs_cell

0x0c80,	// (0x00019c95) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x0c80,	// (0x00019c95) bg_popup_fep_shadow_pane_cp4

0x0c97,	// (0x00019cac) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0c97,	// (0x00019cac) bg_popup_fep_shadow_pane_cp5

0x0ca9,	// (0x00019cbe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0ca9,	// (0x00019cbe) popup_fep_china_hwr2_fs_control_bar_grid

0x0cb9,	// (0x00019cce) popup_fep_china_hwr2_fs_control_funtion_grid

0x0cc1,	// (0x00019cd6) aid_fep_china_hwr2_fs_candi_cell

0x6d0a,	// (0x0001fd1f) bg_popup_fep_shadow_pane_cp6

0x0ccb,	// (0x00019ce0) popup_fep_china_hwr2_fs_candidate_grid

0x0cd3,	// (0x00019ce8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0cd3,	// (0x00019ce8) cell_fep_china_hwr2_fs_funtion_grid

0xeacf,	// (0x00027ae4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0ceb,	// (0x00019d00) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0ceb,	// (0x00019d00) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0cf9,	// (0x00019d0e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0cf9,	// (0x00019d0e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd46,	// (0x00028d5b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd46,	// (0x00028d5b) cell_fep_china_hwr2_fs_funtion_grid_g

0x0d0f,	// (0x00019d24) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x0d0f,	// (0x00019d24) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0d24,	// (0x00019d39) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0d24,	// (0x00019d39) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4b,	// (0x00028d60) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4b,	// (0x00028d60) cell_fep_china_hwr2_fs_funtion_grid_t

0x0d40,	// (0x00019d55) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0d48,	// (0x00019d5d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0d50,	// (0x00019d65) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd50,	// (0x00028d65) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0d58,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0d58,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid

0x0d71,	// (0x00019d86) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0d79,	// (0x00019d8e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xeacf,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xeacf,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6b,	// (0x00028b80) cell_fep_china_hwr2_fs_candidate_grid_g

0x0d81,	// (0x00019d96) cell_fep_china_hwr2_fs_candidate_grid_t1

0xb08a,	// (0x0002409f) clock_nsta_pane_cp_24_ParamLimits

0xb08a,	// (0x0002409f) clock_nsta_pane_cp_24

0xb0e7,	// (0x000240fc) indicator_nsta_pane_cp_24_ParamLimits

0xb0e7,	// (0x000240fc) indicator_nsta_pane_cp_24

0xbd8b,	// (0x00024da0) heading_pane_g1

0x0001,

0xf8ff,	// (0x00028914) heading_pane_g

0xe57d,	// (0x00027592) grid_sct_catagory_button_pane

0xc40b,	// (0x00025420) scroll_pane_cp5_ParamLimits

0xe77c,	// (0x00027791) button_value_adjust_pane_cp5_ParamLimits

0xe77c,	// (0x00027791) button_value_adjust_pane_cp5

0xe859,	// (0x0002786e) form2_midp_time_pane_ParamLimits

0x0d8f,	// (0x00019da4) cell_sct_catagory_button_pane_ParamLimits

0x0d8f,	// (0x00019da4) cell_sct_catagory_button_pane

0xea94,	// (0x00027aa9) bg_button_pane_cp01_ParamLimits

0xea94,	// (0x00027aa9) bg_button_pane_cp01

0xeacf,	// (0x00027ae4) cell_sct_catagory_button_pane_g1

0xdbbb,	// (0x00026bd0) popup_tb_extension_window

0x0da1,	// (0x00019db6) aid_size_cell_ext_ParamLimits

0x0da1,	// (0x00019db6) aid_size_cell_ext

0x6f59,	// (0x0001ff6e) bg_tb_trans_pane_cp1_ParamLimits

0x6f59,	// (0x0001ff6e) bg_tb_trans_pane_cp1

0x0dc1,	// (0x00019dd6) grid_tb_ext_pane_ParamLimits

0x0dc1,	// (0x00019dd6) grid_tb_ext_pane

0x0de7,	// (0x00019dfc) cell_tb_ext_pane_ParamLimits

0x0de7,	// (0x00019dfc) cell_tb_ext_pane

0x0dfc,	// (0x00019e11) cell_tb_ext_pane_g1_ParamLimits

0x0dfc,	// (0x00019e11) cell_tb_ext_pane_g1

0x0e19,	// (0x00019e2e) cell_tb_ext_pane_t1

0x6f59,	// (0x0001ff6e) list_highlight_pane_cp11_ParamLimits

0x6f59,	// (0x0001ff6e) list_highlight_pane_cp11

0x9262,	// (0x00022277) popup_uni_indicator_window_ParamLimits

0x9262,	// (0x00022277) popup_uni_indicator_window

0x7a57,	// (0x00020a6c) bg_popup_sub_pane_cp14

0x0e34,	// (0x00019e49) list_uniindi_pane

0x0e40,	// (0x00019e55) uniindi_top_pane

0x6f59,	// (0x0001ff6e) bg_uniindi_top_pane

0x0e5f,	// (0x00019e74) uniindi_top_pane_g1

0x0e75,	// (0x00019e8a) uniindi_top_pane_g2

0x0003,

0xfd57,	// (0x00028d6c) uniindi_top_pane_g

0x0e9f,	// (0x00019eb4) uniindi_top_pane_t1

0x0ec9,	// (0x00019ede) list_single_uniindi_pane_ParamLimits

0x0ec9,	// (0x00019ede) list_single_uniindi_pane

0xeacf,	// (0x00027ae4) bg_uniindi_top_pane_g1

0x0edb,	// (0x00019ef0) list_single_uniindi_pane_g1

0x0eee,	// (0x00019f03) list_single_uniindi_pane_t1

0x9100,	// (0x00022115) control_bg_pane

0x0f13,	// (0x00019f28) bg_sctrl_sk_pane_cp1

0x0f1c,	// (0x00019f31) bg_sctrl_sk_pane_cp2

0x0f25,	// (0x00019f3a) control_bg_pane_g1

0x0f2e,	// (0x00019f43) control_bg_pane_g2

0x0001,

0xfd60,	// (0x00028d75) control_bg_pane_g

0xd657,	// (0x0002666c) cell_indicator_nsta_pane_g1_ParamLimits

0xe672,	// (0x00027687) cell_indicator_nsta_pane_g2_ParamLimits

0xfadc,	// (0x00028af1) cell_indicator_nsta_pane_g_ParamLimits

0xd704,	// (0x00026719) form2_midp_time_pane_t1_ParamLimits

0x71c0,	// (0x000201d5) main_idle_act4_pane_ParamLimits

0x71c0,	// (0x000201d5) main_idle_act4_pane

0xdbbb,	// (0x00026bd0) popup_tb_extension_window_ParamLimits

0x0ddb,	// (0x00019df0) tb_ext_find_pane_ParamLimits

0x0ddb,	// (0x00019df0) tb_ext_find_pane

0x0f37,	// (0x00019f4c) ai_gene_pane_1_cp1

0x84a4,	// (0x000214b9) ai_gene_pane_2_cp1

0x0f3f,	// (0x00019f54) list_single_idle_plugin_calendar_pane

0x0f48,	// (0x00019f5d) list_single_idle_plugin_notification_pane

0x0f51,	// (0x00019f66) list_single_idle_plugin_player_pane

0x0f5a,	// (0x00019f6f) list_single_idle_plugin_shortcut_pane_ParamLimits

0x0f5a,	// (0x00019f6f) list_single_idle_plugin_shortcut_pane

0x0f7c,	// (0x00019f91) main_idle_act4_pane_t1

0x0f8e,	// (0x00019fa3) main_idle_act4_pane_t2

0x0001,

0xfd65,	// (0x00028d7a) main_idle_act4_pane_t

0x0fa0,	// (0x00019fb5) middle_sk_idle_act4_pane_ParamLimits

0x0fa0,	// (0x00019fb5) middle_sk_idle_act4_pane

0x0fb6,	// (0x00019fcb) popup_clock_digital_analogue_window_cp2

0x0fd0,	// (0x00019fe5) shortcut_wheel_idle_act4_pane_ParamLimits

0x0fd0,	// (0x00019fe5) shortcut_wheel_idle_act4_pane

0xeacf,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g1

0xeacf,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g2

0xeacf,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g3

0xeacf,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g4

0xeacf,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g5

0x0fe4,	// (0x00019ff9) shortcut_wheel_idle_act4_pane_g6

0x0fec,	// (0x0001a001) shortcut_wheel_idle_act4_pane_g7

0x0ff4,	// (0x0001a009) shortcut_wheel_idle_act4_pane_g8

0x0ffc,	// (0x0001a011) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6a,	// (0x00028d7f) shortcut_wheel_idle_act4_pane_g

0xed17,	// (0x00027d2c) middle_sk_idle_act4_pane_g1_ParamLimits

0xed17,	// (0x00027d2c) middle_sk_idle_act4_pane_g1

0x1060,	// (0x0001a075) middle_sk_idle_act4_pane_g2_ParamLimits

0x1060,	// (0x0001a075) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8d,	// (0x00028da2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8d,	// (0x00028da2) middle_sk_idle_act4_pane_g

0x106c,	// (0x0001a081) middle_sk_idle_act4_pane_t1_ParamLimits

0x106c,	// (0x0001a081) middle_sk_idle_act4_pane_t1

0x1089,	// (0x0001a09e) grid_ai_shortcut_pane_ParamLimits

0x1089,	// (0x0001a09e) grid_ai_shortcut_pane

0x10a2,	// (0x0001a0b7) list_highlight_pane_cp16_ParamLimits

0x10a2,	// (0x0001a0b7) list_highlight_pane_cp16

0x10af,	// (0x0001a0c4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x10af,	// (0x0001a0c4) list_single_idle_plugin_shortcut_pane_g1

0x10bb,	// (0x0001a0d0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x10bb,	// (0x0001a0d0) list_single_idle_plugin_shortcut_pane_g2

0x10d3,	// (0x0001a0e8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x10d3,	// (0x0001a0e8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd92,	// (0x00028da7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd92,	// (0x00028da7) list_single_idle_plugin_shortcut_pane_g

0x10e6,	// (0x0001a0fb) cell_ai_shortcut_pane_ParamLimits

0x10e6,	// (0x0001a0fb) cell_ai_shortcut_pane

0x1107,	// (0x0001a11c) cell_ai_shortcut_pane_g1_ParamLimits

0x1107,	// (0x0001a11c) cell_ai_shortcut_pane_g1

0x0f37,	// (0x00019f4c) ai_gene_pane_1_cp2

0x1129,	// (0x0001a13e) ai_gene_pane_2_cp2

0x1131,	// (0x0001a146) list_highlight_pane_cp15

0x113a,	// (0x0001a14f) list_single_idle_plugin_calendar_pane_g1

0x1131,	// (0x0001a146) list_highlight_pane_cp17

0x1142,	// (0x0001a157) list_single_idle_plugin_calendar_pane_g1_copy1

0x114a,	// (0x0001a15f) list_single_idle_plugin_player_pane_g1

0xc5c5,	// (0x000255da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd99,	// (0x00028dae) list_single_idle_plugin_player_pane_g

0x1152,	// (0x0001a167) list_single_idle_plugin_player_pane_t1

0x1160,	// (0x0001a175) list_single_idle_plugin_player_pane_t2

0x116e,	// (0x0001a183) list_single_idle_plugin_player_pane_t3

0x117c,	// (0x0001a191) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9e,	// (0x00028db3) list_single_idle_plugin_player_pane_t

0x118a,	// (0x0001a19f) wait_bar_pane_cp15

0x1192,	// (0x0001a1a7) grid_ai_notification_pane

0xc5c5,	// (0x000255da) list_single_idle_plugin_notification_pane_g1

0x119b,	// (0x0001a1b0) cell_ai_notification_pane_ParamLimits

0x119b,	// (0x0001a1b0) cell_ai_notification_pane

0x11a8,	// (0x0001a1bd) cell_ai_notification_pane_g1

0x11b0,	// (0x0001a1c5) cell_ai_notification_pane_t1

0x11be,	// (0x0001a1d3) tb_ext_find_button_pane

0x11c6,	// (0x0001a1db) tb_ext_find_pane_g1

0x11ce,	// (0x0001a1e3) tb_ext_find_pane_t1

0x7f65,	// (0x00020f7a) tb_ext_find_button_pane_g1

0x11dc,	// (0x0001a1f1) tb_ext_find_button_pane_g2

0x0001,

0xfda7,	// (0x00028dbc) tb_ext_find_button_pane_g

0x0f7c,	// (0x00019f91) main_idle_act4_pane_t1_ParamLimits

0x0f8e,	// (0x00019fa3) main_idle_act4_pane_t2_ParamLimits

0xfd65,	// (0x00028d7a) main_idle_act4_pane_t_ParamLimits

0x0fb6,	// (0x00019fcb) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0fc4,	// (0x00019fd9) sat_plugin_idle_act4_pane_ParamLimits

0x0fc4,	// (0x00019fd9) sat_plugin_idle_act4_pane

0x11e5,	// (0x0001a1fa) sat_plugin_idle_act4_pane_t1_ParamLimits

0x11e5,	// (0x0001a1fa) sat_plugin_idle_act4_pane_t1

0x11f8,	// (0x0001a20d) sat_plugin_idle_act4_pane_t2_ParamLimits

0x11f8,	// (0x0001a20d) sat_plugin_idle_act4_pane_t2

0x120b,	// (0x0001a220) sat_plugin_idle_act4_pane_t3_ParamLimits

0x120b,	// (0x0001a220) sat_plugin_idle_act4_pane_t3

0x121e,	// (0x0001a233) sat_plugin_idle_act4_pane_t4_ParamLimits

0x121e,	// (0x0001a233) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdac,	// (0x00028dc1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdac,	// (0x00028dc1) sat_plugin_idle_act4_pane_t

0x91c3,	// (0x000221d8) popup_battery_window_ParamLimits

0x91c3,	// (0x000221d8) popup_battery_window

0x6f59,	// (0x0001ff6e) bg_popup_sub_pane_cp25_ParamLimits

0x6f59,	// (0x0001ff6e) bg_popup_sub_pane_cp25

0x1231,	// (0x0001a246) popup_battery_window_g1_ParamLimits

0x1231,	// (0x0001a246) popup_battery_window_g1

0x123d,	// (0x0001a252) popup_battery_window_t1_ParamLimits

0x123d,	// (0x0001a252) popup_battery_window_t1

0x124f,	// (0x0001a264) popup_battery_window_t2_ParamLimits

0x124f,	// (0x0001a264) popup_battery_window_t2

0x0001,

0xfdb5,	// (0x00028dca) popup_battery_window_t_ParamLimits

0xfdb5,	// (0x00028dca) popup_battery_window_t

0x9bba,	// (0x00022bcf) midp_canvas_pane_ParamLimits

0x9c16,	// (0x00022c2b) midp_keypad_pane_ParamLimits

0x9c16,	// (0x00022c2b) midp_keypad_pane

0xaf67,	// (0x00023f7c) main_midp_pane_ParamLimits

0xd69c,	// (0x000266b1) signal_pane_g2_cp_ParamLimits

0x126c,	// (0x0001a281) aid_size_cell_midp_keypad_ParamLimits

0x126c,	// (0x0001a281) aid_size_cell_midp_keypad

0x1286,	// (0x0001a29b) midp_keyp_game_grid_pane_ParamLimits

0x1286,	// (0x0001a29b) midp_keyp_game_grid_pane

0x12a0,	// (0x0001a2b5) midp_keyp_rocker_pane_ParamLimits

0x12a0,	// (0x0001a2b5) midp_keyp_rocker_pane

0x12cd,	// (0x0001a2e2) midp_keyp_sk_left_pane_ParamLimits

0x12cd,	// (0x0001a2e2) midp_keyp_sk_left_pane

0x1325,	// (0x0001a33a) midp_keyp_sk_right_pane_ParamLimits

0x1325,	// (0x0001a33a) midp_keyp_sk_right_pane

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp03

0x1377,	// (0x0001a38c) midp_keyp_sk_left_pane_g1

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp04

0x1377,	// (0x0001a38c) midp_keyp_sk_right_pane_g1

0xeacf,	// (0x00027ae4) midp_keyp_rocker_pane_g1

0x1380,	// (0x0001a395) keyp_game_cell_pane_ParamLimits

0x1380,	// (0x0001a395) keyp_game_cell_pane

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp02

0x1391,	// (0x0001a3a6) keyp_game_cell_pane_g1

0x91f9,	// (0x0002220e) popup_fep_vkb2_window_ParamLimits

0x91f9,	// (0x0002220e) popup_fep_vkb2_window

0xa834,	// (0x00023849) aid_size_cell_vkb2_ParamLimits

0xa834,	// (0x00023849) aid_size_cell_vkb2

0xa888,	// (0x0002389d) popup_fep_vkb2_window_g1_ParamLimits

0xa888,	// (0x0002389d) popup_fep_vkb2_window_g1

0xa8d0,	// (0x000238e5) vkb2_area_bottom_pane_ParamLimits

0xa8d0,	// (0x000238e5) vkb2_area_bottom_pane

0xa908,	// (0x0002391d) vkb2_area_keypad_pane_ParamLimits

0xa908,	// (0x0002391d) vkb2_area_keypad_pane

0xa940,	// (0x00023955) vkb2_area_top_pane_ParamLimits

0xa940,	// (0x00023955) vkb2_area_top_pane

0xa9b0,	// (0x000239c5) vkb2_top_entry_pane_ParamLimits

0xa9b0,	// (0x000239c5) vkb2_top_entry_pane

0xa9da,	// (0x000239ef) vkb2_top_grid_left_pane_ParamLimits

0xa9da,	// (0x000239ef) vkb2_top_grid_left_pane

0xa9f8,	// (0x00023a0d) vkb2_top_grid_right_pane_ParamLimits

0xa9f8,	// (0x00023a0d) vkb2_top_grid_right_pane

0xaa16,	// (0x00023a2b) vkb2_cell_keypad_pane_ParamLimits

0xaa16,	// (0x00023a2b) vkb2_cell_keypad_pane

0xaac7,	// (0x00023adc) vkb2_area_bottom_grid_pane_ParamLimits

0xaac7,	// (0x00023adc) vkb2_area_bottom_grid_pane

0xaaeb,	// (0x00023b00) vkb2_area_bottom_pane_g1_ParamLimits

0xaaeb,	// (0x00023b00) vkb2_area_bottom_pane_g1

0xab0f,	// (0x00023b24) vkb2_area_bottom_pane_g2_ParamLimits

0xab0f,	// (0x00023b24) vkb2_area_bottom_pane_g2

0xab3d,	// (0x00023b52) vkb2_area_bottom_pane_g3_ParamLimits

0xab3d,	// (0x00023b52) vkb2_area_bottom_pane_g3

0x0002,

0xfdba,	// (0x00028dcf) vkb2_area_bottom_pane_g_ParamLimits

0xfdba,	// (0x00028dcf) vkb2_area_bottom_pane_g

0xab8e,	// (0x00023ba3) vkb2_top_cell_left_pane_ParamLimits

0xab8e,	// (0x00023ba3) vkb2_top_cell_left_pane

0x172a,	// (0x0001a73f) vkb2_top_entry_pane_g1_ParamLimits

0x172a,	// (0x0001a73f) vkb2_top_entry_pane_g1

0x1738,	// (0x0001a74d) vkb2_top_entry_pane_t1_ParamLimits

0x1738,	// (0x0001a74d) vkb2_top_entry_pane_t1

0x176a,	// (0x0001a77f) vkb2_top_entry_pane_t2_ParamLimits

0x176a,	// (0x0001a77f) vkb2_top_entry_pane_t2

0x179c,	// (0x0001a7b1) vkb2_top_entry_pane_t3_ParamLimits

0x179c,	// (0x0001a7b1) vkb2_top_entry_pane_t3

0x0002,

0xfdc1,	// (0x00028dd6) vkb2_top_entry_pane_t_ParamLimits

0xfdc1,	// (0x00028dd6) vkb2_top_entry_pane_t

0xabdb,	// (0x00023bf0) vkb2_top_grid_right_pane_g1_ParamLimits

0xabdb,	// (0x00023bf0) vkb2_top_grid_right_pane_g1

0xabf1,	// (0x00023c06) vkb2_top_grid_right_pane_g2_ParamLimits

0xabf1,	// (0x00023c06) vkb2_top_grid_right_pane_g2

0xac09,	// (0x00023c1e) vkb2_top_grid_right_pane_g3_ParamLimits

0xac09,	// (0x00023c1e) vkb2_top_grid_right_pane_g3

0xac21,	// (0x00023c36) vkb2_top_grid_right_pane_g4_ParamLimits

0xac21,	// (0x00023c36) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc8,	// (0x00028ddd) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc8,	// (0x00028ddd) vkb2_top_grid_right_pane_g

0xac37,	// (0x00023c4c) vkb2_top_cell_left_pane_g1

0xac4e,	// (0x00023c63) vkb2_cell_keypad_pane_g1_ParamLimits

0xac4e,	// (0x00023c63) vkb2_cell_keypad_pane_g1

0x1860,	// (0x0001a875) vkb2_cell_keypad_pane_t1_ParamLimits

0x1860,	// (0x0001a875) vkb2_cell_keypad_pane_t1

0xac5c,	// (0x00023c71) vkb2_cell_bottom_grid_pane_ParamLimits

0xac5c,	// (0x00023c71) vkb2_cell_bottom_grid_pane

0xac95,	// (0x00023caa) vkb2_cell_bottom_grid_pane_g1

0x1004,	// (0x0001a019) aid_call2_pane_cp02

0x100c,	// (0x0001a021) aid_call_pane_cp02

0x1014,	// (0x0001a029) clock_digital_number_pane_cp10

0x101c,	// (0x0001a031) clock_digital_number_pane_cp11

0x1024,	// (0x0001a039) clock_digital_number_pane_cp12

0x102c,	// (0x0001a041) clock_digital_number_pane_cp13

0x1034,	// (0x0001a049) clock_digital_separator_pane_cp10

0x7f65,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g1

0x7f65,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g2

0x103c,	// (0x0001a051) popup_clock_digital_analogue_window_cp2_g3

0x7f65,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g4

0x103c,	// (0x0001a051) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7d,	// (0x00028d92) popup_clock_digital_analogue_window_cp2_g

0x1044,	// (0x0001a059) popup_clock_digital_analogue_window_cp2_t1

0x1052,	// (0x0001a067) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd88,	// (0x00028d9d) popup_clock_digital_analogue_window_cp2_t

0xeacf,	// (0x00027ae4) clock_digital_number_pane_cp10_g1

0xeacf,	// (0x00027ae4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6b,	// (0x00028b80) clock_digital_number_pane_cp10_g

0xeacf,	// (0x00027ae4) clock_digital_separator_pane_cp10_g1

0xeacf,	// (0x00027ae4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6b,	// (0x00028b80) clock_digital_separator_pane_cp10_g

0x0e81,	// (0x00019e96) uniindi_top_pane_g3

0x0e92,	// (0x00019ea7) uniindi_top_pane_g4

0xaa81,	// (0x00023a96) vkb2_row_keypad_pane_ParamLimits

0xaa81,	// (0x00023a96) vkb2_row_keypad_pane

0xacb1,	// (0x00023cc6) vkb2_cell_t_keypad_pane_ParamLimits

0xacb1,	// (0x00023cc6) vkb2_cell_t_keypad_pane

0xacbe,	// (0x00023cd3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xacbe,	// (0x00023cd3) vkb2_cell_t_keypad_pane_cp08

0xacce,	// (0x00023ce3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xacce,	// (0x00023ce3) vkb2_cell_t_keypad_pane_cp09

0xacdf,	// (0x00023cf4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xacdf,	// (0x00023cf4) vkb2_cell_t_keypad_pane_cp01

0xacef,	// (0x00023d04) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xacef,	// (0x00023d04) vkb2_cell_t_keypad_pane_cp02

0xacff,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xacff,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp03

0xad0f,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xad0f,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp04

0xad1f,	// (0x00023d34) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xad1f,	// (0x00023d34) vkb2_cell_t_keypad_pane_cp05

0xad2f,	// (0x00023d44) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xad2f,	// (0x00023d44) vkb2_cell_t_keypad_pane_cp06

0xad3f,	// (0x00023d54) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xad3f,	// (0x00023d54) vkb2_cell_t_keypad_pane_cp07

0xad4f,	// (0x00023d64) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xad4f,	// (0x00023d64) vkb2_cell_t_keypad_pane_cp10

0xa56f,	// (0x00023584) vkb2_cell_t_keypad_pane_g1

0x197f,	// (0x0001a994) vkb2_cell_t_keypad_pane_t1

0x9100,	// (0x00022115) popup_grid_graphic2_window

0x1991,	// (0x0001a9a6) aid_size_cell_graphic2_ParamLimits

0x1991,	// (0x0001a9a6) aid_size_cell_graphic2

0xec22,	// (0x00027c37) bg_popup_window_pane_cp21_ParamLimits

0xec22,	// (0x00027c37) bg_popup_window_pane_cp21

0x19bd,	// (0x0001a9d2) graphic2_pages_pane_ParamLimits

0x19bd,	// (0x0001a9d2) graphic2_pages_pane

0x19f7,	// (0x0001aa0c) grid_graphic2_control_pane_ParamLimits

0x19f7,	// (0x0001aa0c) grid_graphic2_control_pane

0x1a1f,	// (0x0001aa34) grid_graphic2_pane_ParamLimits

0x1a1f,	// (0x0001aa34) grid_graphic2_pane

0x1a6f,	// (0x0001aa84) cell_graphic2_pane

0x6d0a,	// (0x0001fd1f) main_comp_mode_pane

0x06af,	// (0x000196c4) list_ai3_gene_pane_ParamLimits

0x0a0d,	// (0x00019a22) bg_popup_window_pane_cp19_ParamLimits

0x0a19,	// (0x00019a2e) bg_touch_area_indi_pane_ParamLimits

0x0a19,	// (0x00019a2e) bg_touch_area_indi_pane

0x0a2f,	// (0x00019a44) bg_touch_area_indi_pane_cp01_ParamLimits

0x0a2f,	// (0x00019a44) bg_touch_area_indi_pane_cp01

0x0a45,	// (0x00019a5a) bg_touch_area_indi_pane_cp02_ParamLimits

0x0a45,	// (0x00019a5a) bg_touch_area_indi_pane_cp02

0x0a5b,	// (0x00019a70) bg_touch_area_indi_pane_cp03_ParamLimits

0x0a5b,	// (0x00019a70) bg_touch_area_indi_pane_cp03

0x0a71,	// (0x00019a86) popup_slider_window_g1_ParamLimits

0x0a8d,	// (0x00019aa2) popup_slider_window_g2_ParamLimits

0x0aa9,	// (0x00019abe) popup_slider_window_g3_ParamLimits

0xfd12,	// (0x00028d27) popup_slider_window_g_ParamLimits

0x0b05,	// (0x00019b1a) popup_slider_window_t1_ParamLimits

0x0b77,	// (0x00019b8c) small_volume_slider_vertical_pane_ParamLimits

0x1a6f,	// (0x0001aa84) cell_graphic2_pane_ParamLimits

0x1aac,	// (0x0001aac1) bg_button_pane_cp10_ParamLimits

0x1aac,	// (0x0001aac1) bg_button_pane_cp10

0x1abd,	// (0x0001aad2) bg_button_pane_cp11_ParamLimits

0x1abd,	// (0x0001aad2) bg_button_pane_cp11

0x1ace,	// (0x0001aae3) graphic2_pages_pane_g1_ParamLimits

0x1ace,	// (0x0001aae3) graphic2_pages_pane_g1

0x1ae1,	// (0x0001aaf6) graphic2_pages_pane_g2_ParamLimits

0x1ae1,	// (0x0001aaf6) graphic2_pages_pane_g2

0x0001,

0xfdd6,	// (0x00028deb) graphic2_pages_pane_g_ParamLimits

0xfdd6,	// (0x00028deb) graphic2_pages_pane_g

0x1af7,	// (0x0001ab0c) graphic2_pages_pane_t1_ParamLimits

0x1af7,	// (0x0001ab0c) graphic2_pages_pane_t1

0x1b0d,	// (0x0001ab22) cell_graphic2_control_pane_ParamLimits

0x1b0d,	// (0x0001ab22) cell_graphic2_control_pane

0x1b27,	// (0x0001ab3c) cell_graphic2_pane_g1_ParamLimits

0x1b27,	// (0x0001ab3c) cell_graphic2_pane_g1

0x1b34,	// (0x0001ab49) cell_graphic2_pane_g2_ParamLimits

0x1b34,	// (0x0001ab49) cell_graphic2_pane_g2

0x1b41,	// (0x0001ab56) cell_graphic2_pane_g3_ParamLimits

0x1b41,	// (0x0001ab56) cell_graphic2_pane_g3

0x1b4e,	// (0x0001ab63) cell_graphic2_pane_g4_ParamLimits

0x1b4e,	// (0x0001ab63) cell_graphic2_pane_g4

0x1b5b,	// (0x0001ab70) cell_graphic2_pane_g5_ParamLimits

0x1b5b,	// (0x0001ab70) cell_graphic2_pane_g5

0x0004,

0xfddb,	// (0x00028df0) cell_graphic2_pane_g_ParamLimits

0xfddb,	// (0x00028df0) cell_graphic2_pane_g

0x1b76,	// (0x0001ab8b) cell_graphic2_pane_t1_ParamLimits

0x1b76,	// (0x0001ab8b) cell_graphic2_pane_t1

0xb313,	// (0x00024328) grid_highlight_pane_cp11_ParamLimits

0xb313,	// (0x00024328) grid_highlight_pane_cp11

0x7a57,	// (0x00020a6c) bg_button_pane_cp05

0x1b8c,	// (0x0001aba1) cell_graphic2_control_pane_g1

0xeacf,	// (0x00027ae4) bg_touch_area_indi_pane_g1

0x1b99,	// (0x0001abae) aid_cmod_rocker_key_size

0x1ba3,	// (0x0001abb8) aid_cmode_itu_key_size

0x1bad,	// (0x0001abc2) main_cmode_video_pane

0x1bb5,	// (0x0001abca) main_comp_mode_itu_pane

0x1bbf,	// (0x0001abd4) main_comp_mode_rocker_pane

0x1bc7,	// (0x0001abdc) cell_cmode_rocker_pane_ParamLimits

0x1bc7,	// (0x0001abdc) cell_cmode_rocker_pane

0x1bd9,	// (0x0001abee) cell_cmode_itu_pane_ParamLimits

0x1bd9,	// (0x0001abee) cell_cmode_itu_pane

0x7a57,	// (0x00020a6c) bg_button_pane_cp06_ParamLimits

0x7a57,	// (0x00020a6c) bg_button_pane_cp06

0xed17,	// (0x00027d2c) cell_cmode_rocker_pane_g1_ParamLimits

0xed17,	// (0x00027d2c) cell_cmode_rocker_pane_g1

0x0ceb,	// (0x00019d00) cell_cmode_rocker_pane_g2_ParamLimits

0x0ceb,	// (0x00019d00) cell_cmode_rocker_pane_g2

0x0001,

0xfde6,	// (0x00028dfb) cell_cmode_rocker_pane_g_ParamLimits

0xfde6,	// (0x00028dfb) cell_cmode_rocker_pane_g

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp07

0x1bee,	// (0x0001ac03) cell_cmode_itu_pane_g1

0x1bf7,	// (0x0001ac0c) cell_cmode_itu_pane_t1

0x1c05,	// (0x0001ac1a) cell_cmode_itu_pane_t2

0x0001,

0xfdeb,	// (0x00028e00) cell_cmode_itu_pane_t

0x0f03,	// (0x00019f18) aid_touch_ctrl_left

0x0f0b,	// (0x00019f20) aid_touch_ctrl_right

0x6d0a,	// (0x0001fd1f) compa_mode_pane

0x1c13,	// (0x0001ac28) aid_cmod_rocker_key_size_cp

0x1c1d,	// (0x0001ac32) aid_cmode_itu_key_size_cp

0x1c27,	// (0x0001ac3c) compa_mode_pane_g1

0x1c2f,	// (0x0001ac44) compa_mode_pane_g2

0x1c37,	// (0x0001ac4c) compa_mode_pane_g3

0x0002,

0xfdf0,	// (0x00028e05) compa_mode_pane_g

0x1c3f,	// (0x0001ac54) main_comp_mode_itu_pane_cp

0x1c47,	// (0x0001ac5c) main_comp_mode_rocker_pane_cp

0x1c4f,	// (0x0001ac64) cell_cmode_itu_pane_cp_ParamLimits

0x1c4f,	// (0x0001ac64) cell_cmode_itu_pane_cp

0x1c64,	// (0x0001ac79) cell_cmode_rocker_pane_cp_ParamLimits

0x1c64,	// (0x0001ac79) cell_cmode_rocker_pane_cp

0x7a57,	// (0x00020a6c) bg_button_pane_cp06_cp_ParamLimits

0x7a57,	// (0x00020a6c) bg_button_pane_cp06_cp

0xed17,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xed17,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp

0xeacf,	// (0x00027ae4) cell_cmode_rocker_pane_g2_cp

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp07_cp

0x1c76,	// (0x0001ac8b) cell_cmode_itu_pane_g1_cp

0x1c7f,	// (0x0001ac94) cell_cmode_itu_pane_t1_cp

0x1c8d,	// (0x0001aca2) cell_cmode_itu_pane_t2_cp

0xe48b,	// (0x000274a0) settings_code_pane_cp2

0x6dfa,	// (0x0001fe0f) bg_popup_window_pane_cp3_ParamLimits

0x7131,	// (0x00020146) heading_pane_cp3_ParamLimits

0x713d,	// (0x00020152) listscroll_popup_graphic_pane_ParamLimits

0xa32a,	// (0x0002333f) fep_hwr_aid_pane_ParamLimits

0xa78a,	// (0x0002379f) aid_touch_sctrl_top_ParamLimits

0xa7a5,	// (0x000237ba) sctrl_sk_top_pane_g1_ParamLimits

0xa56f,	// (0x00023584) sctrl_sk_top_pane_g2_ParamLimits

0xfd2b,	// (0x00028d40) sctrl_sk_top_pane_g_ParamLimits

0xa7b2,	// (0x000237c7) sctrl_sk_top_pane_t1_ParamLimits

0xa78a,	// (0x0002379f) aid_touch_sctrl_bottom_ParamLimits

0xa7b2,	// (0x000237c7) sctrl_sk_bottom_pane_t1_ParamLimits

0x0e4d,	// (0x00019e62) aid_area_touch_clock

0xa978,	// (0x0002398d) aid_vkb2_area_top_pane_cell_ParamLimits

0xa978,	// (0x0002398d) aid_vkb2_area_top_pane_cell

0xaaa3,	// (0x00023ab8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaaa3,	// (0x00023ab8) aid_vkb2_area_bottom_pane_cell

0x1722,	// (0x0001a737) popup_char_count_window

0x1c9b,	// (0x0001acb0) popup_char_count_window_g1

0x1ca4,	// (0x0001acb9) popup_char_count_window_g2

0x1cad,	// (0x0001acc2) popup_char_count_window_g3

0x0002,

0xfdf7,	// (0x00028e0c) popup_char_count_window_g

0x1cb6,	// (0x0001accb) popup_char_count_window_t1

0xa866,	// (0x0002387b) popup_fep_char_preview_window_ParamLimits

0xa866,	// (0x0002387b) popup_fep_char_preview_window

0xa996,	// (0x000239ab) vkb2_top_candi_pane_ParamLimits

0xa996,	// (0x000239ab) vkb2_top_candi_pane

0x1cc4,	// (0x0001acd9) cell_vkb2_top_candi_pane_ParamLimits

0x1cc4,	// (0x0001acd9) cell_vkb2_top_candi_pane

0xad64,	// (0x00023d79) bg_popup_fep_char_preview_window_ParamLimits

0xad64,	// (0x00023d79) bg_popup_fep_char_preview_window

0xad72,	// (0x00023d87) popup_fep_char_preview_window_t1_ParamLimits

0xad72,	// (0x00023d87) popup_fep_char_preview_window_t1

0x1d47,	// (0x0001ad5c) bg_popup_fep_char_preview_window_g1

0x1d3f,	// (0x0001ad54) bg_popup_fep_char_preview_window_g2

0x1d37,	// (0x0001ad4c) bg_popup_fep_char_preview_window_g3

0x1d6f,	// (0x0001ad84) bg_popup_fep_char_preview_window_g4

0x1d67,	// (0x0001ad7c) bg_popup_fep_char_preview_window_g5

0xadac,	// (0x00023dc1) bg_popup_fep_char_preview_window_g6

0x1d57,	// (0x0001ad6c) bg_popup_fep_char_preview_window_g7

0x1d4f,	// (0x0001ad64) bg_popup_fep_char_preview_window_g8

0x1d77,	// (0x0001ad8c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfe,	// (0x00028e13) bg_popup_fep_char_preview_window_g

0xa56f,	// (0x00023584) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa56f,	// (0x00023584) cell_vkb2_top_candi_pane_g1

0xa57d,	// (0x00023592) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa57d,	// (0x00023592) cell_vkb2_top_candi_pane_g2

0x1da0,	// (0x0001adb5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1da0,	// (0x0001adb5) cell_vkb2_top_candi_pane_g3

0xadb4,	// (0x00023dc9) cell_vkb2_top_candi_pane_g4_ParamLimits

0xadb4,	// (0x00023dc9) cell_vkb2_top_candi_pane_g4

0xf05a,	// (0x0002806f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf05a,	// (0x0002806f) cell_vkb2_top_candi_pane_g5

0xadd5,	// (0x00023dea) cell_vkb2_top_candi_pane_g6_ParamLimits

0xadd5,	// (0x00023dea) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe11,	// (0x00028e26) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe11,	// (0x00028e26) cell_vkb2_top_candi_pane_g

0xade3,	// (0x00023df8) cell_vkb2_top_candi_pane_t1

0xa142,	// (0x00023157) aid_size_touch_slider_mark_ParamLimits

0xa142,	// (0x00023157) aid_size_touch_slider_mark

0x19eb,	// (0x0001aa00) grid_graphic2_catg_pane_ParamLimits

0x19eb,	// (0x0001aa00) grid_graphic2_catg_pane

0x1a4b,	// (0x0001aa60) popup_grid_graphic2_window_t1_ParamLimits

0x1a4b,	// (0x0001aa60) popup_grid_graphic2_window_t1

0x1a5d,	// (0x0001aa72) popup_grid_graphic2_window_t2_ParamLimits

0x1a5d,	// (0x0001aa72) popup_grid_graphic2_window_t2

0x0001,

0xfdd1,	// (0x00028de6) popup_grid_graphic2_window_t_ParamLimits

0xfdd1,	// (0x00028de6) popup_grid_graphic2_window_t

0x7a57,	// (0x00020a6c) bg_button_pane_cp05_ParamLimits

0x1b8c,	// (0x0001aba1) cell_graphic2_control_pane_g1_ParamLimits

0x1dd7,	// (0x0001adec) cell_graphic2_catg_pane_ParamLimits

0x1dd7,	// (0x0001adec) cell_graphic2_catg_pane

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp12

0x1de9,	// (0x0001adfe) cell_graphic2_catg_pane_g1

0x0e19,	// (0x00019e2e) cell_tb_ext_pane_t1_ParamLimits

0xabae,	// (0x00023bc3) vkb2_top_cell_right_narrow_pane_ParamLimits

0xabae,	// (0x00023bc3) vkb2_top_cell_right_narrow_pane

0xabc6,	// (0x00023bdb) vkb2_top_cell_right_wide_pane_ParamLimits

0xabc6,	// (0x00023bdb) vkb2_top_cell_right_wide_pane

0xa31c,	// (0x00023331) bg_vkb2_func_pane_ParamLimits

0xa31c,	// (0x00023331) bg_vkb2_func_pane

0xac37,	// (0x00023c4c) vkb2_top_cell_left_pane_g1_ParamLimits

0xa31c,	// (0x00023331) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa31c,	// (0x00023331) bg_vkb2_fuc_pane_cp03

0xac95,	// (0x00023caa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xb22d,	// (0x00024242) bg_vkb2_func_pane_g1

0xb235,	// (0x0002424a) bg_vkb2_func_pane_g2

0xb245,	// (0x0002425a) bg_vkb2_func_pane_g3

0xb23d,	// (0x00024252) bg_vkb2_func_pane_g4

0xb24d,	// (0x00024262) bg_vkb2_func_pane_g5

0xb255,	// (0x0002426a) bg_vkb2_func_pane_g6

0xb25d,	// (0x00024272) bg_vkb2_func_pane_g7

0xb265,	// (0x0002427a) bg_vkb2_func_pane_g8

0xb225,	// (0x0002423a) bg_vkb2_func_pane_g9

0x0008,

0xfe1e,	// (0x00028e33) bg_vkb2_func_pane_g

0xa31c,	// (0x00023331) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa31c,	// (0x00023331) bg_vkb2_fuc_pane_cp01

0xac37,	// (0x00023c4c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xac37,	// (0x00023c4c) vkb2_top_cell_right_wide_pane_g1

0xa31c,	// (0x00023331) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa31c,	// (0x00023331) bg_vkb2_fuc_pane_cp02

0xac95,	// (0x00023caa) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xac95,	// (0x00023caa) vkb2_top_cell_right_narrow_pane_g1

0x099f,	// (0x000199b4) aid_touch_area_decrease_ParamLimits

0x099f,	// (0x000199b4) aid_touch_area_decrease

0x09b7,	// (0x000199cc) aid_touch_area_increase_ParamLimits

0x09b7,	// (0x000199cc) aid_touch_area_increase

0x09c3,	// (0x000199d8) aid_touch_area_mute_ParamLimits

0x09c3,	// (0x000199d8) aid_touch_area_mute

0x09df,	// (0x000199f4) aid_touch_area_slider_ParamLimits

0x09df,	// (0x000199f4) aid_touch_area_slider

0x0ac5,	// (0x00019ada) popup_slider_window_g4_ParamLimits

0x0ac5,	// (0x00019ada) popup_slider_window_g4

0x0ad1,	// (0x00019ae6) popup_slider_window_g5_ParamLimits

0x0ad1,	// (0x00019ae6) popup_slider_window_g5

0x0af3,	// (0x00019b08) popup_slider_window_g6_ParamLimits

0x0af3,	// (0x00019b08) popup_slider_window_g6

0x0b31,	// (0x00019b46) popup_slider_window_t2_ParamLimits

0x0b31,	// (0x00019b46) popup_slider_window_t2

0x0001,

0xfd1f,	// (0x00028d34) popup_slider_window_t_ParamLimits

0xfd1f,	// (0x00028d34) popup_slider_window_t

0x0b49,	// (0x00019b5e) slider_pane_ParamLimits

0x0b49,	// (0x00019b5e) slider_pane

0x1df2,	// (0x0001ae07) slider_pane_g1_ParamLimits

0x1df2,	// (0x0001ae07) slider_pane_g1

0x1e06,	// (0x0001ae1b) slider_pane_g2_ParamLimits

0x1e06,	// (0x0001ae1b) slider_pane_g2

0x1e1c,	// (0x0001ae31) slider_pane_g3_ParamLimits

0x1e1c,	// (0x0001ae31) slider_pane_g3

0x0003,

0xfe31,	// (0x00028e46) slider_pane_g_ParamLimits

0xfe31,	// (0x00028e46) slider_pane_g

0xdc0b,	// (0x00026c20) popup_tb_float_extension_window_ParamLimits

0xdc0b,	// (0x00026c20) popup_tb_float_extension_window

0x1e48,	// (0x0001ae5d) aid_size_cell_tb_float_ext

0x6d0a,	// (0x0001fd1f) bg_popup_sub_window_cp28

0x1e53,	// (0x0001ae68) grid_tb_float_ext_pane

0x1e5b,	// (0x0001ae70) cell_tb_float_ext_pane_ParamLimits

0x1e5b,	// (0x0001ae70) cell_tb_float_ext_pane

0x1e73,	// (0x0001ae88) cell_tb_float_ext_pane_g1

0x1e7c,	// (0x0001ae91) grid_highlight_pane_cp12

0xa465,	// (0x0002347a) cell_last_hwr_side_pane_ParamLimits

0xa465,	// (0x0002347a) cell_last_hwr_side_pane

0xeacf,	// (0x00027ae4) cell_last_hwr_side_pane_g1

0x1e85,	// (0x0001ae9a) cell_last_hwr_side_pane_g2

0x0001,

0xfe3a,	// (0x00028e4f) cell_last_hwr_side_pane_g

0xab6b,	// (0x00023b80) vkb2_area_bottom_space_btn_pane_ParamLimits

0xab6b,	// (0x00023b80) vkb2_area_bottom_space_btn_pane

0xa56f,	// (0x00023584) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x197f,	// (0x0001a994) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xade3,	// (0x00023df8) cell_vkb2_top_candi_pane_t1_ParamLimits

0xadf9,	// (0x00023e0e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xadf9,	// (0x00023e0e) vkb2_area_bottom_space_btn_pane_g1

0xae2f,	// (0x00023e44) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xae2f,	// (0x00023e44) vkb2_area_bottom_space_btn_pane_g2

0xae65,	// (0x00023e7a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xae65,	// (0x00023e7a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3f,	// (0x00028e54) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3f,	// (0x00028e54) vkb2_area_bottom_space_btn_pane_g

0xa3d9,	// (0x000233ee) cel_fep_hwr_func_pane_ParamLimits

0xa3d9,	// (0x000233ee) cel_fep_hwr_func_pane

0xa415,	// (0x0002342a) cell_hwr_side_button_pane_ParamLimits

0xa415,	// (0x0002342a) cell_hwr_side_button_pane

0x0e4d,	// (0x00019e62) aid_area_touch_clock_ParamLimits

0x6f59,	// (0x0001ff6e) bg_uniindi_top_pane_ParamLimits

0x0e5f,	// (0x00019e74) uniindi_top_pane_g1_ParamLimits

0x0e75,	// (0x00019e8a) uniindi_top_pane_g2_ParamLimits

0x0e81,	// (0x00019e96) uniindi_top_pane_g3_ParamLimits

0x0e92,	// (0x00019ea7) uniindi_top_pane_g4_ParamLimits

0xfd57,	// (0x00028d6c) uniindi_top_pane_g_ParamLimits

0x0e9f,	// (0x00019eb4) uniindi_top_pane_t1_ParamLimits

0x6f59,	// (0x0001ff6e) bg_vkb2_func_pane_cp01_ParamLimits

0x6f59,	// (0x0001ff6e) bg_vkb2_func_pane_cp01

0x1f40,	// (0x0001af55) cel_fep_hwr_func_pane_g1_ParamLimits

0x1f40,	// (0x0001af55) cel_fep_hwr_func_pane_g1

0x6f59,	// (0x0001ff6e) bg_vkb2_func_pane_cp02_ParamLimits

0x6f59,	// (0x0001ff6e) bg_vkb2_func_pane_cp02

0x1f40,	// (0x0001af55) cell_hwr_side_button_pane_g1_ParamLimits

0x1f40,	// (0x0001af55) cell_hwr_side_button_pane_g1

0xb149,	// (0x0002415e) status_pane_g4_ParamLimits

0xb149,	// (0x0002415e) status_pane_g4

0xb161,	// (0x00024176) status_pane_t1

0xe8c1,	// (0x000278d6) form2_midp_gauge_slider_cont_pane

0xe8c9,	// (0x000278de) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe8db,	// (0x000278f0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe8ed,	// (0x00027902) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1e,	// (0x00028b33) form2_midp_gauge_slider_pane_t_ParamLimits

0xe8ff,	// (0x00027914) form2_midp_slider_pane_ParamLimits

0xa826,	// (0x0002383b) aid_size_cell_func_vkb2_ParamLimits

0xa826,	// (0x0002383b) aid_size_cell_func_vkb2

0x1e34,	// (0x0001ae49) slider_pane_g4_ParamLimits

0x1e34,	// (0x0001ae49) slider_pane_g4

0xaeab,	// (0x00023ec0) form2_midp_gauge_slider_pane_t2_cp01

0xaeb9,	// (0x00023ece) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaeb9,	// (0x00023ece) form2_midp_gauge_slider_pane_t3_cp01

0xaed6,	// (0x00023eeb) form2_midp_slider_pane_cp01

0x6d0a,	// (0x0001fd1f) navi_smil_pane

0x1fad,	// (0x0001afc2) navi_smil_pane_g1

0x1fb5,	// (0x0001afca) navi_smil_pane_t1

0x1f82,	// (0x0001af97) form2_midp_slider_pane_g1

0x1f8b,	// (0x0001afa0) form2_midp_slider_pane_g2

0x1f93,	// (0x0001afa8) form2_midp_slider_pane_g3

0x1f82,	// (0x0001af97) form2_midp_slider_pane_g4

0x1f9b,	// (0x0001afb0) form2_midp_slider_pane_g5

0x0004,

0xfe48,	// (0x00028e5d) form2_midp_slider_pane_g

0xae9b,	// (0x00023eb0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xae9b,	// (0x00023eb0) vkb2_area_bottom_space_btn_pane_g4

0xdd4c,	// (0x00026d61) lc0_navi_pane_ParamLimits

0xdd4c,	// (0x00026d61) lc0_navi_pane

0xddc2,	// (0x00026dd7) lc0_stat_indi_pane_ParamLimits

0xddc2,	// (0x00026dd7) lc0_stat_indi_pane

0xddd9,	// (0x00026dee) ls0_title_pane_ParamLimits

0xddd9,	// (0x00026dee) ls0_title_pane

0x7a57,	// (0x00020a6c) bg_popup_sub_pane_cp14_ParamLimits

0x0e34,	// (0x00019e49) list_uniindi_pane_ParamLimits

0x0e40,	// (0x00019e55) uniindi_top_pane_ParamLimits

0x0edb,	// (0x00019ef0) list_single_uniindi_pane_g1_ParamLimits

0x0eee,	// (0x00019f03) list_single_uniindi_pane_t1_ParamLimits

0xaedf,	// (0x00023ef4) lc0_stat_clock_pane_ParamLimits

0xaedf,	// (0x00023ef4) lc0_stat_clock_pane

0x1fdd,	// (0x0001aff2) lc0_stat_indi_pane_g1_ParamLimits

0x1fdd,	// (0x0001aff2) lc0_stat_indi_pane_g1

0x1fd0,	// (0x0001afe5) lc0_stat_indi_pane_g2_ParamLimits

0x1fd0,	// (0x0001afe5) lc0_stat_indi_pane_g2

0x0001,

0xfe53,	// (0x00028e68) lc0_stat_indi_pane_g_ParamLimits

0xfe53,	// (0x00028e68) lc0_stat_indi_pane_g

0xaeec,	// (0x00023f01) lc0_uni_indicator_pane_ParamLimits

0xaeec,	// (0x00023f01) lc0_uni_indicator_pane

0x1ff7,	// (0x0001b00c) ls0_title_pane_g1_ParamLimits

0x1ff7,	// (0x0001b00c) ls0_title_pane_g1

0x200b,	// (0x0001b020) ls0_title_pane_t1_ParamLimits

0x200b,	// (0x0001b020) ls0_title_pane_t1

0xaef9,	// (0x00023f0e) lc0_uni_indicator_pane_g1_ParamLimits

0xaef9,	// (0x00023f0e) lc0_uni_indicator_pane_g1

0x2053,	// (0x0001b068) lc0_stat_clock_pane_t1

0x6d0a,	// (0x0001fd1f) main_ai5_pane

0x2061,	// (0x0001b076) ai5_sk_pane_ParamLimits

0x2061,	// (0x0001b076) ai5_sk_pane

0x206e,	// (0x0001b083) cell_ai5_widget_pane_ParamLimits

0x206e,	// (0x0001b083) cell_ai5_widget_pane

0x20c9,	// (0x0001b0de) aid_size_cell_widget_grid

0x20db,	// (0x0001b0f0) bg_ai5_widget_pane_ParamLimits

0x20db,	// (0x0001b0f0) bg_ai5_widget_pane

0x2103,	// (0x0001b118) cell_ai5_widget_pane_g2

0x2113,	// (0x0001b128) cell_ai5_widget_pane_g3

0x2127,	// (0x0001b13c) cell_ai5_widget_pane_g4

0x2133,	// (0x0001b148) cell_ai5_widget_pane_g5

0x213f,	// (0x0001b154) cell_ai5_widget_pane_g6

0x214b,	// (0x0001b160) cell_ai5_widget_pane_g7

0x2193,	// (0x0001b1a8) cell_ai5_widget_pane_t1_ParamLimits

0x2193,	// (0x0001b1a8) cell_ai5_widget_pane_t1

0x21b0,	// (0x0001b1c5) cell_ai5_widget_pane_t2_ParamLimits

0x21b0,	// (0x0001b1c5) cell_ai5_widget_pane_t2

0x21c8,	// (0x0001b1dd) cell_ai5_widget_pane_t3_ParamLimits

0x21c8,	// (0x0001b1dd) cell_ai5_widget_pane_t3

0x21e0,	// (0x0001b1f5) cell_ai5_widget_pane_t4_ParamLimits

0x21e0,	// (0x0001b1f5) cell_ai5_widget_pane_t4

0x21fa,	// (0x0001b20f) cell_ai5_widget_pane_t5_ParamLimits

0x21fa,	// (0x0001b20f) cell_ai5_widget_pane_t5

0x2219,	// (0x0001b22e) cell_ai5_widget_pane_t6_ParamLimits

0x2219,	// (0x0001b22e) cell_ai5_widget_pane_t6

0x222b,	// (0x0001b240) cell_ai5_widget_pane_t7_ParamLimits

0x222b,	// (0x0001b240) cell_ai5_widget_pane_t7

0x2244,	// (0x0001b259) cell_ai5_widget_pane_t8_ParamLimits

0x2244,	// (0x0001b259) cell_ai5_widget_pane_t8

0x0009,

0xfe6d,	// (0x00028e82) cell_ai5_widget_pane_t_ParamLimits

0xfe6d,	// (0x00028e82) cell_ai5_widget_pane_t

0x228c,	// (0x0001b2a1) grid_ai5_widget_pane

0x7a57,	// (0x00020a6c) highlight_cell_ai5_widget_pane_ParamLimits

0x7a57,	// (0x00020a6c) highlight_cell_ai5_widget_pane

0x22a2,	// (0x0001b2b7) ai5_sk_left_pane

0x22ac,	// (0x0001b2c1) ai5_sk_middle_pane

0x22b6,	// (0x0001b2cb) ai5_sk_right_pane

0x22c0,	// (0x0001b2d5) bg_ai5_widget_pane_g1_ParamLimits

0x22c0,	// (0x0001b2d5) bg_ai5_widget_pane_g1

0x22cc,	// (0x0001b2e1) bg_ai5_widget_pane_g2_ParamLimits

0x22cc,	// (0x0001b2e1) bg_ai5_widget_pane_g2

0x22d8,	// (0x0001b2ed) bg_ai5_widget_pane_g3_ParamLimits

0x22d8,	// (0x0001b2ed) bg_ai5_widget_pane_g3

0x22e4,	// (0x0001b2f9) bg_ai5_widget_pane_g4_ParamLimits

0x22e4,	// (0x0001b2f9) bg_ai5_widget_pane_g4

0x22f0,	// (0x0001b305) bg_ai5_widget_pane_g5_ParamLimits

0x22f0,	// (0x0001b305) bg_ai5_widget_pane_g5

0x22fc,	// (0x0001b311) bg_ai5_widget_pane_g6_ParamLimits

0x22fc,	// (0x0001b311) bg_ai5_widget_pane_g6

0x2308,	// (0x0001b31d) bg_ai5_widget_pane_g7_ParamLimits

0x2308,	// (0x0001b31d) bg_ai5_widget_pane_g7

0x2314,	// (0x0001b329) bg_ai5_widget_pane_g8_ParamLimits

0x2314,	// (0x0001b329) bg_ai5_widget_pane_g8

0x2320,	// (0x0001b335) bg_ai5_widget_pane_g9_ParamLimits

0x2320,	// (0x0001b335) bg_ai5_widget_pane_g9

0x0008,

0xfe82,	// (0x00028e97) bg_ai5_widget_pane_g_ParamLimits

0xfe82,	// (0x00028e97) bg_ai5_widget_pane_g

0x2348,	// (0x0001b35d) cell_shortcut_ai5_widget_pane_ParamLimits

0x2348,	// (0x0001b35d) cell_shortcut_ai5_widget_pane

0x6e62,	// (0x0001fe77) bg_cell_shortcut_ai5_widget_pane

0x235a,	// (0x0001b36f) cell_grid_ai5_widget_pane_g1

0x2363,	// (0x0001b378) highlight_cell_shortcut_ai5_widget_pane

0xb22d,	// (0x00024242) ai5_sk_left_pane_g1

0x236b,	// (0x0001b380) ai5_sk_left_pane_g2

0x2373,	// (0x0001b388) ai5_sk_left_pane_g3

0x237b,	// (0x0001b390) ai5_sk_left_pane_g4

0x0003,

0xfe95,	// (0x00028eaa) ai5_sk_left_pane_g

0x2383,	// (0x0001b398) ai5_sk_left_pane_t1

0xb235,	// (0x0002424a) ai5_sk_right_pane_g1

0x2391,	// (0x0001b3a6) ai5_sk_right_pane_g2

0x2399,	// (0x0001b3ae) ai5_sk_right_pane_g3

0x23a1,	// (0x0001b3b6) ai5_sk_right_pane_g4

0x0003,

0xfe9e,	// (0x00028eb3) ai5_sk_right_pane_g

0x23a9,	// (0x0001b3be) ai5_sk_right_pane_t1

0xb235,	// (0x0002424a) ai5_sk_middle_pane_g1

0xb22d,	// (0x00024242) ai5_sk_middle_pane_g2

0xb24d,	// (0x00024262) ai5_sk_middle_pane_g3

0x2399,	// (0x0001b3ae) ai5_sk_middle_pane_g4

0x2373,	// (0x0001b388) ai5_sk_middle_pane_g5

0x23b7,	// (0x0001b3cc) ai5_sk_middle_pane_g6

0x23bf,	// (0x0001b3d4) ai5_sk_middle_pane_g7

0x0006,

0xfea7,	// (0x00028ebc) ai5_sk_middle_pane_g

0xdc99,	// (0x00026cae) aid_touch_area_size_lc0_ParamLimits

0xdc99,	// (0x00026cae) aid_touch_area_size_lc0

0xa59e,	// (0x000235b3) cell_hwr_candidate_pane_t1_ParamLimits

0xb07e,	// (0x00024093) aid_touch_navi_pane

0xe084,	// (0x00027099) status_dt_navi_pane_ParamLimits

0xe084,	// (0x00027099) status_dt_navi_pane

0xe091,	// (0x000270a6) status_dt_sta_pane_ParamLimits

0xe091,	// (0x000270a6) status_dt_sta_pane

0x23c7,	// (0x0001b3dc) dt_sta_controll_pane

0x23d4,	// (0x0001b3e9) dt_sta_indi_pane

0x23e5,	// (0x0001b3fa) dt_sta_title_pane

0x6f59,	// (0x0001ff6e) bg_dt_sta_indi_pane_ParamLimits

0x6f59,	// (0x0001ff6e) bg_dt_sta_indi_pane

0x23f8,	// (0x0001b40d) dt_sta_battery_pane

0x2400,	// (0x0001b415) dt_sta_indi_pane_g1

0x2409,	// (0x0001b41e) dt_sta_indi_pane_g2

0x2412,	// (0x0001b427) dt_sta_indi_pane_g3

0x0002,

0xfeb6,	// (0x00028ecb) dt_sta_indi_pane_g

0x241b,	// (0x0001b430) dt_sta_signal_pane

0x7a57,	// (0x00020a6c) bg_dt_sta_title_pane_ParamLimits

0x7a57,	// (0x00020a6c) bg_dt_sta_title_pane

0x2424,	// (0x0001b439) dt_sta_title_pane_g1

0x242c,	// (0x0001b441) dt_sta_title_pane_t1_ParamLimits

0x242c,	// (0x0001b441) dt_sta_title_pane_t1

0x6d0a,	// (0x0001fd1f) bg_dt_sta_control_pane

0x2441,	// (0x0001b456) dt_sta_controll_pane_g1

0x244a,	// (0x0001b45f) bg_dt_sta_title_pane_g1

0x2453,	// (0x0001b468) bg_dt_sta_title_pane_g2

0x245c,	// (0x0001b471) bg_dt_sta_title_pane_g3

0x0002,

0xfebd,	// (0x00028ed2) bg_dt_sta_title_pane_g

0xeacf,	// (0x00027ae4) bg_dt_sta_indi_pane_g1

0x2465,	// (0x0001b47a) dt_sta_signal_pane_g1

0x246d,	// (0x0001b482) dt_sta_signal_pane_g2

0x0001,

0xfec4,	// (0x00028ed9) dt_sta_signal_pane_g

0x2475,	// (0x0001b48a) dt_sta_battery_pane_g1

0x247e,	// (0x0001b493) dt_sta_battery_pane_t1

0xeacf,	// (0x00027ae4) bg_dt_sta_control_pane_g1

0x7fe0,	// (0x00020ff5) fep_china_uni_eep_pane

0x7fe8,	// (0x00020ffd) fep_china_uni_entry_pane_ParamLimits

0x7ff8,	// (0x0002100d) popup_fep_china_uni_window_g1_ParamLimits

0x8008,	// (0x0002101d) popup_fep_china_uni_window_g2_ParamLimits

0x8008,	// (0x0002101d) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0002876d) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0002876d) popup_fep_china_uni_window_g

0x248d,	// (0x0001b4a2) fep_china_uni_eep_pane_g1

0x2495,	// (0x0001b4aa) fep_china_uni_eep_pane_t1

0x1fa4,	// (0x0001afb9) aid_touch_area_size_smil_player

0xb11c,	// (0x00024131) lc0_clock_pane

0xb155,	// (0x0002416a) status_pane_g5_ParamLimits

0xb155,	// (0x0002416a) status_pane_g5

0xd9bb,	// (0x000269d0) popup_keymap_window

0xb135,	// (0x0002414a) status_icon_pane

0x2113,	// (0x0001b128) cell_ai5_widget_pane_g3_ParamLimits

0x2127,	// (0x0001b13c) cell_ai5_widget_pane_g4_ParamLimits

0x2133,	// (0x0001b148) cell_ai5_widget_pane_g5_ParamLimits

0x2157,	// (0x0001b16c) cell_ai5_widget_pane_g8_ParamLimits

0x2157,	// (0x0001b16c) cell_ai5_widget_pane_g8

0x216b,	// (0x0001b180) cell_ai5_widget_pane_g9_ParamLimits

0x216b,	// (0x0001b180) cell_ai5_widget_pane_g9

0x217f,	// (0x0001b194) cell_ai5_widget_pane_g10_ParamLimits

0x217f,	// (0x0001b194) cell_ai5_widget_pane_g10

0x24a4,	// (0x0001b4b9) status_icon_pane_g1

0x6d0a,	// (0x0001fd1f) bg_popup_sub_pane_cp13

0x24ac,	// (0x0001b4c1) popup_keymap_window_t1

0x9d5f,	// (0x00022d74) control_pane_g6_ParamLimits

0x9d5f,	// (0x00022d74) control_pane_g6

0x9d6c,	// (0x00022d81) control_pane_g7_ParamLimits

0x9d6c,	// (0x00022d81) control_pane_g7

0x9d79,	// (0x00022d8e) control_pane_g8_ParamLimits

0x9d79,	// (0x00022d8e) control_pane_g8

0x23c7,	// (0x0001b3dc) dt_sta_controll_pane_ParamLimits

0x23d4,	// (0x0001b3e9) dt_sta_indi_pane_ParamLimits

0x23e5,	// (0x0001b3fa) dt_sta_title_pane_ParamLimits

0x72eb,	// (0x00020300) aid_size_touch_scroll_bar_cale

0x91d7,	// (0x000221ec) popup_discreet_window_ParamLimits

0x91d7,	// (0x000221ec) popup_discreet_window

0x923b,	// (0x00022250) popup_sk_window

0xb78b,	// (0x000247a0) bg_popup_sub_pane_cp28_ParamLimits

0xb78b,	// (0x000247a0) bg_popup_sub_pane_cp28

0x24ba,	// (0x0001b4cf) popup_discreet_window_g1_ParamLimits

0x24ba,	// (0x0001b4cf) popup_discreet_window_g1

0x24da,	// (0x0001b4ef) popup_discreet_window_t1_ParamLimits

0x24da,	// (0x0001b4ef) popup_discreet_window_t1

0x24f8,	// (0x0001b50d) popup_discreet_window_t2_ParamLimits

0x24f8,	// (0x0001b50d) popup_discreet_window_t2

0x0002,

0xfec9,	// (0x00028ede) popup_discreet_window_t_ParamLimits

0xfec9,	// (0x00028ede) popup_discreet_window_t

0xaf0b,	// (0x00023f20) popup_sk_window_g1

0xaf14,	// (0x00023f29) popup_sk_window_g2

0x0001,

0xfed0,	// (0x00028ee5) popup_sk_window_g

0x256a,	// (0x0001b57f) popup_sk_window_t1

0x255c,	// (0x0001b571) popup_sk_window_t1_copy1

0x2103,	// (0x0001b118) cell_ai5_widget_pane_g2_ParamLimits

0x2256,	// (0x0001b26b) cell_ai5_widget_pane_t9_ParamLimits

0x2256,	// (0x0001b26b) cell_ai5_widget_pane_t9

0x6d0a,	// (0x0001fd1f) main_fep_fshwr2_pane

0x2578,	// (0x0001b58d) aid_fshwr2_btn_pane

0x2580,	// (0x0001b595) aid_fshwr2_syb_pane

0x2588,	// (0x0001b59d) aid_fshwr2_txt_pane

0x2590,	// (0x0001b5a5) fshwr2_func_candi_pane

0x2598,	// (0x0001b5ad) fshwr2_hwr_syb_pane

0x25a0,	// (0x0001b5b5) fshwr2_icf_pane

0x6d0a,	// (0x0001fd1f) fshwr2_icf_bg_pane

0x25ba,	// (0x0001b5cf) fshwr2_icf_pane_t1_ParamLimits

0x25ba,	// (0x0001b5cf) fshwr2_icf_pane_t1

0xeacf,	// (0x00027ae4) fshwr2_func_candi_pane_g1

0x25d1,	// (0x0001b5e6) fshwr2_func_candi_row_pane_ParamLimits

0x25d1,	// (0x0001b5e6) fshwr2_func_candi_row_pane

0x25e2,	// (0x0001b5f7) cell_fshwr2_syb_pane_ParamLimits

0x25e2,	// (0x0001b5f7) cell_fshwr2_syb_pane

0xed17,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed17,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1

0x6d0a,	// (0x0001fd1f) bg_popup_call_pane_cp01

0x25f9,	// (0x0001b60e) fshwr2_func_candi_cell_pane_ParamLimits

0x25f9,	// (0x0001b60e) fshwr2_func_candi_cell_pane

0x2624,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2624,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane

0x263e,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x263e,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1

0x265e,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x265e,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1

0x6d0a,	// (0x0001fd1f) bg_button_pane_cp08

0x8410,	// (0x00021425) cell_fshwr2_syb_bg_pane

0x2671,	// (0x0001b686) cell_fshwr2_syb_bg_pane_g1

0x2679,	// (0x0001b68e) cell_fshwr2_syb_bg_pane_t1

0x7a57,	// (0x00020a6c) main_tmo_pane

0xe302,	// (0x00027317) uni_indicator_pane_g1_ParamLimits

0xe317,	// (0x0002732c) uni_indicator_pane_g2_ParamLimits

0xe32d,	// (0x00027342) uni_indicator_pane_g3_ParamLimits

0xc158,	// (0x0002516d) uni_indicator_pane_g4_ParamLimits

0xc158,	// (0x0002516d) uni_indicator_pane_g4

0xc16c,	// (0x00025181) uni_indicator_pane_g5_ParamLimits

0xc16c,	// (0x00025181) uni_indicator_pane_g5

0xc180,	// (0x00025195) uni_indicator_pane_g6_ParamLimits

0xc180,	// (0x00025195) uni_indicator_pane_g6

0xf955,	// (0x0002896a) uni_indicator_pane_g_ParamLimits

0x0983,	// (0x00019998) popup_tmo_note_window_ParamLimits

0x0983,	// (0x00019998) popup_tmo_note_window

0x6d0a,	// (0x0001fd1f) fshwr2_bg_pane

0x264f,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x264f,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed5,	// (0x00028eea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed5,	// (0x00028eea) fshwr2_func_candi_cell_pane_g

0xeacf,	// (0x00027ae4) bg_popup_window_pane_cp01

0x2688,	// (0x0001b69d) bg_popup_window_pane_g1_cp01

0x2691,	// (0x0001b6a6) bg_popup_window_pane_cp22_ParamLimits

0x2691,	// (0x0001b6a6) bg_popup_window_pane_cp22

0x269f,	// (0x0001b6b4) listscroll_tmo_link_pane_ParamLimits

0x269f,	// (0x0001b6b4) listscroll_tmo_link_pane

0x26df,	// (0x0001b6f4) popup_tmo_note_window_g1_ParamLimits

0x26df,	// (0x0001b6f4) popup_tmo_note_window_g1

0x26ec,	// (0x0001b701) tmo_note_info_pane_ParamLimits

0x26ec,	// (0x0001b701) tmo_note_info_pane

0x2706,	// (0x0001b71b) list_tmo_note_info_pane_g1_ParamLimits

0x2706,	// (0x0001b71b) list_tmo_note_info_pane_g1

0x271d,	// (0x0001b732) list_tmo_note_info_pane_g2_ParamLimits

0x271d,	// (0x0001b732) list_tmo_note_info_pane_g2

0x0001,

0xfeda,	// (0x00028eef) list_tmo_note_info_pane_g_ParamLimits

0xfeda,	// (0x00028eef) list_tmo_note_info_pane_g

0x2739,	// (0x0001b74e) list_tmo_note_info_text_pane_ParamLimits

0x2739,	// (0x0001b74e) list_tmo_note_info_text_pane

0x27ba,	// (0x0001b7cf) list_tmo_link_pane

0x27c7,	// (0x0001b7dc) scroll_pane_cp20

0x27d4,	// (0x0001b7e9) list_single_tmo_link_pane_ParamLimits

0x27d4,	// (0x0001b7e9) list_single_tmo_link_pane

0x27e4,	// (0x0001b7f9) list_single_tmo_link_pane_t1

0x27f2,	// (0x0001b807) list_tmo_note_info_text_pane_t1_ParamLimits

0x27f2,	// (0x0001b807) list_tmo_note_info_text_pane_t1

0x7b19,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7b19,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01

0xcee5,	// (0x00025efa) aid_size_touch_slider_marker

0x9227,	// (0x0002223c) popup_settings_window_ParamLimits

0x9227,	// (0x0002223c) popup_settings_window

0xd095,	// (0x000260aa) popup_candi_list_indi_window

0xb07e,	// (0x00024093) aid_touch_navi_pane_ParamLimits

0xa75e,	// (0x00023773) rs_clock_indi_pane

0xa767,	// (0x0002377c) sctrl_sk_bottom_pane_ParamLimits

0xa778,	// (0x0002378d) sctrl_sk_top_pane_ParamLimits

0xa880,	// (0x00023895) popup_fep_tooltip_window

0x20c9,	// (0x0001b0de) aid_size_cell_widget_grid_ParamLimits

0x20f7,	// (0x0001b10c) cell_ai5_widget_pane_g1_ParamLimits

0x20f7,	// (0x0001b10c) cell_ai5_widget_pane_g1

0x213f,	// (0x0001b154) cell_ai5_widget_pane_g6_ParamLimits

0x214b,	// (0x0001b160) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe58,	// (0x00028e6d) cell_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00028e6d) cell_ai5_widget_pane_g

0x227a,	// (0x0001b28f) cell_ai5_widget_pane_t10_ParamLimits

0x227a,	// (0x0001b28f) cell_ai5_widget_pane_t10

0x228c,	// (0x0001b2a1) grid_ai5_widget_pane_ParamLimits

0x232c,	// (0x0001b341) cell_contacts_ai5_widget_pane_ParamLimits

0x232c,	// (0x0001b341) cell_contacts_ai5_widget_pane

0x250d,	// (0x0001b522) popup_discreet_window_t3_ParamLimits

0x250d,	// (0x0001b522) popup_discreet_window_t3

0x25a8,	// (0x0001b5bd) popup_fshwr2_char_preview_window_ParamLimits

0x25a8,	// (0x0001b5bd) popup_fshwr2_char_preview_window

0x2757,	// (0x0001b76c) tmo_note_info_pane_t1

0x276c,	// (0x0001b781) tmo_note_info_pane_t2

0x2781,	// (0x0001b796) tmo_note_info_pane_t3

0x2796,	// (0x0001b7ab) tmo_note_info_pane_t4

0x27a8,	// (0x0001b7bd) tmo_note_info_pane_t5

0x0004,

0xfedf,	// (0x00028ef4) tmo_note_info_pane_t

0x27ba,	// (0x0001b7cf) list_tmo_link_pane_ParamLimits

0x27c7,	// (0x0001b7dc) scroll_pane_cp20_ParamLimits

0x6d0a,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp01

0x280b,	// (0x0001b820) popup_fshwr2_char_preview_window_t1

0x2819,	// (0x0001b82e) popup_candi_list_indi_window_g1

0x2822,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane

0x282e,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1

0x2842,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2

0x2851,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeea,	// (0x00028eff) cell_contacts_ai5_widget_pane_g

0x2864,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1

0x7a57,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01

0x28dc,	// (0x0001b8f1) settings_container_pane

0x8410,	// (0x00021425) listscroll_set_pane_copy1

0xc8a4,	// (0x000258b9) scroll_pane_cp121_copy1

0x28e8,	// (0x0001b8fd) set_content_pane_copy1

0x28f0,	// (0x0001b905) aid_height_set_list_copy1_ParamLimits

0x28f0,	// (0x0001b905) aid_height_set_list_copy1

0xc319,	// (0x0002532e) aid_size_parent_copy1_ParamLimits

0xc319,	// (0x0002532e) aid_size_parent_copy1

0x28fc,	// (0x0001b911) button_value_adjust_pane_cp6_copy1_ParamLimits

0x28fc,	// (0x0001b911) button_value_adjust_pane_cp6_copy1

0xaf67,	// (0x00023f7c) list_highlight_pane_cp2_copy1_ParamLimits

0xaf67,	// (0x00023f7c) list_highlight_pane_cp2_copy1

0x2910,	// (0x0001b925) list_set_pane_copy1_ParamLimits

0x2910,	// (0x0001b925) list_set_pane_copy1

0x2879,	// (0x0001b88e) main_pane_set_t1_copy1_ParamLimits

0x2879,	// (0x0001b88e) main_pane_set_t1_copy1

0x28b3,	// (0x0001b8c8) main_pane_set_t2_copy1_ParamLimits

0x28b3,	// (0x0001b8c8) main_pane_set_t2_copy1

0x299e,	// (0x0001b9b3) main_pane_set_t3_copy1

0x29ac,	// (0x0001b9c1) main_pane_set_t4_copy1

0x28d0,	// (0x0001b8e5) set_content_pane_g1_copy1_ParamLimits

0x28d0,	// (0x0001b8e5) set_content_pane_g1_copy1

0x29ba,	// (0x0001b9cf) setting_code_pane_copy1

0x29c2,	// (0x0001b9d7) setting_slider_graphic_pane_copy1

0x29c2,	// (0x0001b9d7) setting_slider_pane_copy1

0x29ca,	// (0x0001b9df) setting_text_pane_copy1

0x29c2,	// (0x0001b9d7) setting_volume_pane_copy1

0x29d2,	// (0x0001b9e7) settings_code_pane_cp2_copy1

0x29da,	// (0x0001b9ef) settings_code_pane_cp_copy1_ParamLimits

0x29da,	// (0x0001b9ef) settings_code_pane_cp_copy1

0x29ee,	// (0x0001ba03) volume_set_pane_copy1

0x29f6,	// (0x0001ba0b) volume_set_pane_g10_copy1

0x29fe,	// (0x0001ba13) volume_set_pane_g1_copy1

0x2a06,	// (0x0001ba1b) volume_set_pane_g2_copy1

0x2a0e,	// (0x0001ba23) volume_set_pane_g3_copy1

0x2a16,	// (0x0001ba2b) volume_set_pane_g4_copy1

0x2a1e,	// (0x0001ba33) volume_set_pane_g5_copy1

0x2a26,	// (0x0001ba3b) volume_set_pane_g6_copy1

0x2a2e,	// (0x0001ba43) volume_set_pane_g7_copy1

0x2a36,	// (0x0001ba4b) volume_set_pane_g8_copy1

0x2a3e,	// (0x0001ba53) volume_set_pane_g9_copy1

0x6dfa,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1_ParamLimits

0x6dfa,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1

0x6e08,	// (0x0001fe1d) setting_slider_pane_t1_copy1_ParamLimits

0x6e08,	// (0x0001fe1d) setting_slider_pane_t1_copy1

0x2a46,	// (0x0001ba5b) setting_slider_pane_t2_copy1_ParamLimits

0x2a46,	// (0x0001ba5b) setting_slider_pane_t2_copy1

0x2a5f,	// (0x0001ba74) setting_slider_pane_t3_copy1_ParamLimits

0x2a5f,	// (0x0001ba74) setting_slider_pane_t3_copy1

0x6e1e,	// (0x0001fe33) slider_set_pane_copy1_ParamLimits

0x6e1e,	// (0x0001fe33) slider_set_pane_copy1

0x7aa6,	// (0x00020abb) set_opt_bg_pane_g1_copy2

0x7aae,	// (0x00020ac3) set_opt_bg_pane_g2_copy2

0x2a76,	// (0x0001ba8b) set_opt_bg_pane_g3_copy2

0x7abe,	// (0x00020ad3) set_opt_bg_pane_g4_copy2

0x7ac6,	// (0x00020adb) set_opt_bg_pane_g5_copy2

0x7ace,	// (0x00020ae3) set_opt_bg_pane_g6_copy2

0x2a7e,	// (0x0001ba93) set_opt_bg_pane_g7_copy2

0x2a86,	// (0x0001ba9b) set_opt_bg_pane_g8_copy2

0x2a8e,	// (0x0001baa3) set_opt_bg_pane_g9_copy2

0xc8f8,	// (0x0002590d) aid_size_touch_slider_mark_copy1_ParamLimits

0xc8f8,	// (0x0002590d) aid_size_touch_slider_mark_copy1

0xc32b,	// (0x00025340) slider_set_pane_g1_copy1

0xc334,	// (0x00025349) slider_set_pane_g2_copy1

0xc90c,	// (0x00025921) slider_set_pane_g3_copy1_ParamLimits

0xc90c,	// (0x00025921) slider_set_pane_g3_copy1

0xc920,	// (0x00025935) slider_set_pane_g4_copy1_ParamLimits

0xc920,	// (0x00025935) slider_set_pane_g4_copy1

0xc938,	// (0x0002594d) slider_set_pane_g5_copy1_ParamLimits

0xc938,	// (0x0002594d) slider_set_pane_g5_copy1

0xc90c,	// (0x00025921) slider_set_pane_g6_copy1_ParamLimits

0xc90c,	// (0x00025921) slider_set_pane_g6_copy1

0x2a96,	// (0x0001baab) slider_set_pane_g7_copy1_ParamLimits

0x2a96,	// (0x0001baab) slider_set_pane_g7_copy1

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp2_copy1

0x6e34,	// (0x0001fe49) setting_slider_graphic_pane_g1_copy1

0x2aac,	// (0x0001bac1) setting_slider_graphic_pane_t1_copy1

0x2abb,	// (0x0001bad0) setting_slider_graphic_pane_t2_copy1

0x2aca,	// (0x0001badf) slider_set_pane_cp_copy1

0x2ada,	// (0x0001baef) input_focus_pane_cp1_copy1

0x2ae3,	// (0x0001baf8) list_set_text_pane_copy1

0x2aeb,	// (0x0001bb00) setting_text_pane_g1_copy1

0xe010,	// (0x00027025) set_text_pane_t1_copy1

0x2ada,	// (0x0001baef) input_focus_pane_cp2_copy1

0x2aeb,	// (0x0001bb00) setting_code_pane_g1_copy1

0x2af4,	// (0x0001bb09) setting_code_pane_t1_copy1

0x2b02,	// (0x0001bb17) list_set_graphic_pane_copy1

0x6d96,	// (0x0001fdab) bg_set_opt_pane_cp4_copy1

0x2b16,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x2b16,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1

0x2b22,	// (0x0001bb37) list_set_graphic_pane_g2_copy1

0x818b,	// (0x000211a0) list_set_graphic_pane_t1_copy1_ParamLimits

0x818b,	// (0x000211a0) list_set_graphic_pane_t1_copy1

0xeacf,	// (0x00027ae4) rs_clock_indi_pane_g1

0x2b2a,	// (0x0001bb3f) rs_clock_indi_pane_t1

0x2b38,	// (0x0001bb4d) rs_indi_pane

0x2b40,	// (0x0001bb55) rs_indi_pane_g1

0x2b49,	// (0x0001bb5e) rs_indi_pane_g2

0x2819,	// (0x0001b82e) rs_indi_pane_g3

0x0002,

0xfef1,	// (0x00028f06) rs_indi_pane_g

0x8410,	// (0x00021425) bg_popup_preview_window_pane_cp03

0x2b52,	// (0x0001bb67) popup_fep_tooltip_window_t1

0x0175,	// (0x0001918a) popup_note2_window_g2_ParamLimits

0x0175,	// (0x0001918a) popup_note2_window_g2

0x0001,

0xfc96,	// (0x00028cab) popup_note2_window_g_ParamLimits

0xfc96,	// (0x00028cab) popup_note2_window_g

0x0675,	// (0x0001968a) bg_popup_sub_pane_cp11_ParamLimits

0x0682,	// (0x00019697) cell_ai3_links_pane_g1_ParamLimits

0x0699,	// (0x000196ae) cell_ai3_links_pane_t1

0xe010,	// (0x00027025) set_text_pane_t1_copy1_ParamLimits

0x8337,	// (0x0002134c) cell_graphic_popup_pane_cp2_ParamLimits

0x8337,	// (0x0002134c) cell_graphic_popup_pane_cp2

0x2b60,	// (0x0001bb75) cell_graphic_popup_pane_g1_cp2

0x719a,	// (0x000201af) cell_graphic_popup_pane_g2_cp2

0x2b68,	// (0x0001bb7d) cell_graphic_popup_pane_g3_cp2

0x2b70,	// (0x0001bb85) cell_graphic_popup_pane_t2_cp2

0x71ab,	// (0x000201c0) grid_highlight_pane_cp3_cp2

0x7d8c,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7a57,	// (0x00020a6c) main_tmo_pane_ParamLimits

0x097b,	// (0x00019990) popup_tmo_big_image_note_window

0x20e7,	// (0x0001b0fc) cell_ai5_widget_list_pane

0x20ef,	// (0x0001b104) cell_ai5_widget_lrg_icon_pane

0x2757,	// (0x0001b76c) tmo_note_info_pane_t1_ParamLimits

0x276c,	// (0x0001b781) tmo_note_info_pane_t2_ParamLimits

0x2781,	// (0x0001b796) tmo_note_info_pane_t3_ParamLimits

0x2796,	// (0x0001b7ab) tmo_note_info_pane_t4_ParamLimits

0x27a8,	// (0x0001b7bd) tmo_note_info_pane_t5_ParamLimits

0xfedf,	// (0x00028ef4) tmo_note_info_pane_t_ParamLimits

0x28dc,	// (0x0001b8f1) settings_container_pane_ParamLimits

0x2ad2,	// (0x0001bae7) indicator_popup_pane_cp5

0x2ad2,	// (0x0001bae7) indicator_popup_pane_cp6

0x2b02,	// (0x0001bb17) list_set_graphic_pane_copy1_ParamLimits

0x6d0a,	// (0x0001fd1f) bg_popup_window_pane_cp23

0x2b7e,	// (0x0001bb93) popup_tmo_big_image_note_window_g1

0x2b87,	// (0x0001bb9c) popup_tmo_big_image_note_window_t1

0x2b95,	// (0x0001bbaa) popup_tmo_big_image_note_window_t2

0x2ba3,	// (0x0001bbb8) popup_tmo_big_image_note_window_t3

0x0002,

0xfef8,	// (0x00028f0d) popup_tmo_big_image_note_window_t

0x2bb1,	// (0x0001bbc6) cell_ai5_widget_lrg_icon_pane_g1

0x2bb9,	// (0x0001bbce) cell_ai5_widget_lrg_icon_pane_t1

0x2bc7,	// (0x0001bbdc) cell_ai5_widget_list_row_pane_ParamLimits

0x2bc7,	// (0x0001bbdc) cell_ai5_widget_list_row_pane

0x2be0,	// (0x0001bbf5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2be0,	// (0x0001bbf5) cell_ai5_widget_list_row_pane_g1

0x2bed,	// (0x0001bc02) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2bed,	// (0x0001bc02) cell_ai5_widget_list_row_pane_t1

0x2c05,	// (0x0001bc1a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2c05,	// (0x0001bc1a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeff,	// (0x00028f14) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeff,	// (0x00028f14) cell_ai5_widget_list_row_pane_t

0x9100,	// (0x00022115) main_fep_vtchi_ss_pane

0x2c17,	// (0x0001bc2c) popup_fep_char_pre_window

0x2c1f,	// (0x0001bc34) popup_fep_ituss_window

0x2c28,	// (0x0001bc3d) popup_fep_vkbss_window

0x2c31,	// (0x0001bc46) grid_vkbss_keypad_pane_ParamLimits

0x2c31,	// (0x0001bc46) grid_vkbss_keypad_pane

0x2c41,	// (0x0001bc56) ituss_keypad_pane

0x2c49,	// (0x0001bc5e) aid_vkbss_key_offset_ParamLimits

0x2c49,	// (0x0001bc5e) aid_vkbss_key_offset

0x2c58,	// (0x0001bc6d) cell_vkbss_key_pane_ParamLimits

0x2c58,	// (0x0001bc6d) cell_vkbss_key_pane

0x2c6e,	// (0x0001bc83) bg_cell_vkbss_key_g1_ParamLimits

0x2c6e,	// (0x0001bc83) bg_cell_vkbss_key_g1

0x2c7a,	// (0x0001bc8f) cell_vkbss_key_3p_pane_ParamLimits

0x2c7a,	// (0x0001bc8f) cell_vkbss_key_3p_pane

0x2c8e,	// (0x0001bca3) cell_vkbss_key_g1_ParamLimits

0x2c8e,	// (0x0001bca3) cell_vkbss_key_g1

0x2ca2,	// (0x0001bcb7) cell_vkbss_key_t1_ParamLimits

0x2ca2,	// (0x0001bcb7) cell_vkbss_key_t1

0x2ccd,	// (0x0001bce2) cell_ituss_key_pane_ParamLimits

0x2ccd,	// (0x0001bce2) cell_ituss_key_pane

0x2cdc,	// (0x0001bcf1) bg_cell_ituss_key_g1_ParamLimits

0x2cdc,	// (0x0001bcf1) bg_cell_ituss_key_g1

0x2ce8,	// (0x0001bcfd) cell_ituss_key_pane_g1_ParamLimits

0x2ce8,	// (0x0001bcfd) cell_ituss_key_pane_g1

0x2cf4,	// (0x0001bd09) cell_ituss_key_pane_g2_ParamLimits

0x2cf4,	// (0x0001bd09) cell_ituss_key_pane_g2

0x0001,

0xff04,	// (0x00028f19) cell_ituss_key_pane_g_ParamLimits

0xff04,	// (0x00028f19) cell_ituss_key_pane_g

0x2d07,	// (0x0001bd1c) cell_ituss_key_t1_ParamLimits

0x2d07,	// (0x0001bd1c) cell_ituss_key_t1

0x2d25,	// (0x0001bd3a) cell_ituss_key_t2_ParamLimits

0x2d25,	// (0x0001bd3a) cell_ituss_key_t2

0x2d44,	// (0x0001bd59) cell_ituss_key_t3_ParamLimits

0x2d44,	// (0x0001bd59) cell_ituss_key_t3

0x2d63,	// (0x0001bd78) cell_ituss_key_t4_ParamLimits

0x2d63,	// (0x0001bd78) cell_ituss_key_t4

0x0003,

0xff09,	// (0x00028f1e) cell_ituss_key_t_ParamLimits

0xff09,	// (0x00028f1e) cell_ituss_key_t

0x2d82,	// (0x0001bd97) cell_vkbss_key_3p_pane_g1

0x2d8a,	// (0x0001bd9f) cell_vkbss_key_3p_pane_g2

0x2d92,	// (0x0001bda7) cell_vkbss_key_3p_pane_g3

0x0002,

0xff12,	// (0x00028f27) cell_vkbss_key_3p_pane_g

0x6d0a,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp02

0x2d9a,	// (0x0001bdaf) popup_fep_char_pre_window_t1

0x20bf,	// (0x0001b0d4) main_ai5_sk_pane

0x2822,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x282e,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x2842,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x2851,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeea,	// (0x00028eff) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2864,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7a57,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x2da9,	// (0x0001bdbe) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
