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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb46f,	// (0x0000b46f) Screen

0xb47b,	// (0x0000b47b) application_window_ParamLimits

0xb47b,	// (0x0000b47b) application_window

0x002e,	// (0x0000002e) screen_g1

0xb4b3,	// (0x0000b4b3) area_bottom_pane_ParamLimits

0xb4b3,	// (0x0000b4b3) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcbbe,	// (0x0000cbbe) battery_pane_ParamLimits

0xcbbe,	// (0x0000cbbe) battery_pane

0x4111,	// (0x00004111) bg_status_flat_pane_g8

0x4119,	// (0x00004119) bg_status_flat_pane_g9

0x3271,	// (0x00003271) context_pane_ParamLimits

0x3271,	// (0x00003271) context_pane

0xcd29,	// (0x0000cd29) navi_pane_ParamLimits

0xcd29,	// (0x0000cd29) navi_pane

0xcda1,	// (0x0000cda1) signal_pane_ParamLimits

0xcda1,	// (0x0000cda1) signal_pane

0x0008,

0xade0,	// (0x0000ade0) bg_status_flat_pane_g

0xce31,	// (0x0000ce31) status_pane_g1_ParamLimits

0xce31,	// (0x0000ce31) status_pane_g1

0xce47,	// (0x0000ce47) status_pane_g2_ParamLimits

0xce47,	// (0x0000ce47) status_pane_g2

0x348a,	// (0x0000348a) status_pane_g3_ParamLimits

0x348a,	// (0x0000348a) status_pane_g3

0x0004,

0xf5af,	// (0x0000f5af) status_pane_g_ParamLimits

0xf5af,	// (0x0000f5af) status_pane_g

0xce53,	// (0x0000ce53) title_pane_ParamLimits

0xce53,	// (0x0000ce53) title_pane

0xceb6,	// (0x0000ceb6) uni_indicator_pane_ParamLimits

0xceb6,	// (0x0000ceb6) uni_indicator_pane

0x2b18,	// (0x00002b18) bg_list_pane_ParamLimits

0x2b18,	// (0x00002b18) bg_list_pane

0xc46f,	// (0x0000c46f) find_pane

0xc477,	// (0x0000c477) listscroll_app_pane_ParamLimits

0xc477,	// (0x0000c477) listscroll_app_pane

0x2b4c,	// (0x00002b4c) listscroll_form_pane

0xc483,	// (0x0000c483) listscroll_gen_pane_ParamLimits

0xc483,	// (0x0000c483) listscroll_gen_pane

0x2b4c,	// (0x00002b4c) listscroll_set_pane

0x4efc,	// (0x00004efc) main_idle_act_pane

0x2609,	// (0x00002609) main_idle_trad_pane

0x2609,	// (0x00002609) main_list_empty_pane

0x2b7a,	// (0x00002b7a) main_midp_pane

0x2b86,	// (0x00002b86) main_pane_g1_ParamLimits

0x2b86,	// (0x00002b86) main_pane_g1

0xc497,	// (0x0000c497) popup_ai_message_window_ParamLimits

0xc497,	// (0x0000c497) popup_ai_message_window

0xc528,	// (0x0000c528) popup_fep_china_uni_window_ParamLimits

0xc528,	// (0x0000c528) popup_fep_china_uni_window

0x2c9e,	// (0x00002c9e) popup_fep_japan_candidate_window_ParamLimits

0x2c9e,	// (0x00002c9e) popup_fep_japan_candidate_window

0x2cbe,	// (0x00002cbe) popup_fep_japan_predictive_window_ParamLimits

0x2cbe,	// (0x00002cbe) popup_fep_japan_predictive_window

0xc584,	// (0x0000c584) popup_find_window

0xc5a1,	// (0x0000c5a1) popup_grid_graphic_window_ParamLimits

0xc5a1,	// (0x0000c5a1) popup_grid_graphic_window

0x2d23,	// (0x00002d23) popup_large_graphic_colour_window

0xc639,	// (0x0000c639) popup_menu_window_ParamLimits

0xc639,	// (0x0000c639) popup_menu_window

0xc80b,	// (0x0000c80b) popup_note_image_window

0xc7d1,	// (0x0000c7d1) popup_note_wait_window_ParamLimits

0xc7d1,	// (0x0000c7d1) popup_note_wait_window

0xc823,	// (0x0000c823) popup_note_window_ParamLimits

0xc823,	// (0x0000c823) popup_note_window

0xc8c9,	// (0x0000c8c9) popup_query_code_window_ParamLimits

0xc8c9,	// (0x0000c8c9) popup_query_code_window

0x2f6b,	// (0x00002f6b) popup_query_data_code_window_ParamLimits

0x2f6b,	// (0x00002f6b) popup_query_data_code_window

0xc903,	// (0x0000c903) popup_query_data_window_ParamLimits

0xc903,	// (0x0000c903) popup_query_data_window

0xc985,	// (0x0000c985) popup_query_sat_info_window_ParamLimits

0xc985,	// (0x0000c985) popup_query_sat_info_window

0xca1c,	// (0x0000ca1c) popup_snote_single_graphic_window_ParamLimits

0xca1c,	// (0x0000ca1c) popup_snote_single_graphic_window

0xca1c,	// (0x0000ca1c) popup_snote_single_text_window_ParamLimits

0xca1c,	// (0x0000ca1c) popup_snote_single_text_window

0x2ff2,	// (0x00002ff2) popup_sub_window_general

0x3122,	// (0x00003122) popup_window_general_ParamLimits

0x3122,	// (0x00003122) popup_window_general

0x3137,	// (0x00003137) power_save_pane

0xc2d7,	// (0x0000c2d7) control_pane_g1_ParamLimits

0xc2d7,	// (0x0000c2d7) control_pane_g1

0xc300,	// (0x0000c300) control_pane_g2_ParamLimits

0xc300,	// (0x0000c300) control_pane_g2

0x29bd,	// (0x000029bd) control_pane_g3_ParamLimits

0x29bd,	// (0x000029bd) control_pane_g3

0x0007,

0xf597,	// (0x0000f597) control_pane_g_ParamLimits

0xf597,	// (0x0000f597) control_pane_g

0xc368,	// (0x0000c368) control_pane_t1_ParamLimits

0xc368,	// (0x0000c368) control_pane_t1

0xc3c6,	// (0x0000c3c6) control_pane_t2_ParamLimits

0xc3c6,	// (0x0000c3c6) control_pane_t2

0x0002,

0xf5a8,	// (0x0000f5a8) control_pane_t_ParamLimits

0xf5a8,	// (0x0000f5a8) control_pane_t

0x2890,	// (0x00002890) navi_navi_volume_pane_cp1

0x2899,	// (0x00002899) status_small_icon_pane

0x28a1,	// (0x000028a1) status_small_pane_g1_ParamLimits

0x28a1,	// (0x000028a1) status_small_pane_g1

0x28d5,	// (0x000028d5) status_small_pane_g2_ParamLimits

0x28d5,	// (0x000028d5) status_small_pane_g2

0x28e1,	// (0x000028e1) status_small_pane_g3_ParamLimits

0x28e1,	// (0x000028e1) status_small_pane_g3

0x28ed,	// (0x000028ed) status_small_pane_g4_ParamLimits

0x28ed,	// (0x000028ed) status_small_pane_g4

0x28f9,	// (0x000028f9) status_small_pane_g5_ParamLimits

0x28f9,	// (0x000028f9) status_small_pane_g5

0x2908,	// (0x00002908) status_small_pane_g6_ParamLimits

0x2908,	// (0x00002908) status_small_pane_g6

0x0007,

0xace5,	// (0x0000ace5) status_small_pane_g_ParamLimits

0xace5,	// (0x0000ace5) status_small_pane_g

0x2938,	// (0x00002938) status_small_pane_t1

0x295b,	// (0x0000295b) status_small_wait_pane_ParamLimits

0x295b,	// (0x0000295b) status_small_wait_pane

0xc042,	// (0x0000c042) aid_levels_signal_ParamLimits

0xc042,	// (0x0000c042) aid_levels_signal

0xc05a,	// (0x0000c05a) signal_pane_g1_ParamLimits

0xc05a,	// (0x0000c05a) signal_pane_g1

0xc075,	// (0x0000c075) signal_pane_g2_ParamLimits

0xc075,	// (0x0000c075) signal_pane_g2

0x0003,

0xf572,	// (0x0000f572) signal_pane_g_ParamLimits

0xf572,	// (0x0000f572) signal_pane_g

0x1ebb,	// (0x00001ebb) context_pane_g1

0xb62c,	// (0x0000b62c) title_pane_g1

0xb663,	// (0x0000b663) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf49f,	// (0x0000f49f) title_pane_t

0xcede,	// (0x0000cede) aid_levels_battery_ParamLimits

0xcede,	// (0x0000cede) aid_levels_battery

0xcefa,	// (0x0000cefa) battery_pane_g1_ParamLimits

0xcefa,	// (0x0000cefa) battery_pane_g1

0xcf17,	// (0x0000cf17) battery_pane_g2_ParamLimits

0xcf17,	// (0x0000cf17) battery_pane_g2

0x0001,

0xf5ba,	// (0x0000f5ba) battery_pane_g_ParamLimits

0xf5ba,	// (0x0000f5ba) battery_pane_g

0xd397,	// (0x0000d397) uni_indicator_pane_g1

0xd3ac,	// (0x0000d3ac) uni_indicator_pane_g2

0x4bd6,	// (0x00004bd6) uni_indicator_pane_g3

0x0005,

0xf60b,	// (0x0000f60b) uni_indicator_pane_g

0x247b,	// (0x0000247b) navi_icon_pane_ParamLimits

0x247b,	// (0x0000247b) navi_icon_pane

0x23c4,	// (0x000023c4) navi_midp_pane

0x2497,	// (0x00002497) navi_navi_pane

0x24a1,	// (0x000024a1) navi_text_pane_ParamLimits

0x24a1,	// (0x000024a1) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xae83,	// (0x0000ae83) status_small_wait_pane_g

0xd2fe,	// (0x0000d2fe) navi_navi_icon_text_pane

0xd306,	// (0x0000d306) navi_navi_pane_g1_ParamLimits

0xd306,	// (0x0000d306) navi_navi_pane_g1

0xd318,	// (0x0000d318) navi_navi_pane_g2_ParamLimits

0xd318,	// (0x0000d318) navi_navi_pane_g2

0x0001,

0xf606,	// (0x0000f606) navi_navi_pane_g_ParamLimits

0xf606,	// (0x0000f606) navi_navi_pane_g

0x48fc,	// (0x000048fc) navi_navi_tabs_pane

0xd32a,	// (0x0000d32a) navi_navi_text_pane

0xd2fe,	// (0x0000d2fe) navi_navi_volume_pane

0x48ac,	// (0x000048ac) navi_text_pane_t1

0x48a0,	// (0x000048a0) navi_icon_pane_g1

0x47f3,	// (0x000047f3) navi_navi_text_pane_t1

0xd2d9,	// (0x0000d2d9) navi_navi_volume_pane_g1

0xd2e1,	// (0x0000d2e1) volume_small_pane

0xd235,	// (0x0000d235) navi_navi_icon_text_pane_g1

0xd23d,	// (0x0000d23d) navi_navi_icon_text_pane_t1

0x2497,	// (0x00002497) navi_tabs_2_long_pane

0x2497,	// (0x00002497) navi_tabs_2_pane

0x2497,	// (0x00002497) navi_tabs_3_long_pane

0x2497,	// (0x00002497) navi_tabs_3_pane

0x2497,	// (0x00002497) navi_tabs_4_pane

0xd1f3,	// (0x0000d1f3) tabs_2_active_pane_ParamLimits

0xd1f3,	// (0x0000d1f3) tabs_2_active_pane

0xd203,	// (0x0000d203) tabs_2_passive_pane_ParamLimits

0xd203,	// (0x0000d203) tabs_2_passive_pane

0xd1c1,	// (0x0000d1c1) tabs_3_active_pane_ParamLimits

0xd1c1,	// (0x0000d1c1) tabs_3_active_pane

0xd1d1,	// (0x0000d1d1) tabs_3_passive_pane_ParamLimits

0xd1d1,	// (0x0000d1d1) tabs_3_passive_pane

0xd1e2,	// (0x0000d1e2) tabs_3_passive_pane_cp_ParamLimits

0xd1e2,	// (0x0000d1e2) tabs_3_passive_pane_cp

0xd17d,	// (0x0000d17d) tabs_4_active_pane_ParamLimits

0xd17d,	// (0x0000d17d) tabs_4_active_pane

0xd18e,	// (0x0000d18e) tabs_4_passive_pane_ParamLimits

0xd18e,	// (0x0000d18e) tabs_4_passive_pane

0xd19f,	// (0x0000d19f) tabs_4_passive_pane_cp_ParamLimits

0xd19f,	// (0x0000d19f) tabs_4_passive_pane_cp

0xd1b0,	// (0x0000d1b0) tabs_4_passive_pane_cp2_ParamLimits

0xd1b0,	// (0x0000d1b0) tabs_4_passive_pane_cp2

0xd15d,	// (0x0000d15d) tabs_2_long_active_pane_ParamLimits

0xd15d,	// (0x0000d15d) tabs_2_long_active_pane

0xd16d,	// (0x0000d16d) tabs_2_long_passive_pane_ParamLimits

0xd16d,	// (0x0000d16d) tabs_2_long_passive_pane

0xd12a,	// (0x0000d12a) tabs_3_long_active_pane_ParamLimits

0xd12a,	// (0x0000d12a) tabs_3_long_active_pane

0xd13b,	// (0x0000d13b) tabs_3_long_passive_pane_ParamLimits

0xd13b,	// (0x0000d13b) tabs_3_long_passive_pane

0xd14c,	// (0x0000d14c) tabs_3_long_passive_pane_cp_ParamLimits

0xd14c,	// (0x0000d14c) tabs_3_long_passive_pane_cp

0x4574,	// (0x00004574) volume_small_pane_g1

0xd0d9,	// (0x0000d0d9) volume_small_pane_g2

0xd0e2,	// (0x0000d0e2) volume_small_pane_g3

0xd0eb,	// (0x0000d0eb) volume_small_pane_g4

0xd0f4,	// (0x0000d0f4) volume_small_pane_g5

0xd0fd,	// (0x0000d0fd) volume_small_pane_g6

0xd106,	// (0x0000d106) volume_small_pane_g7

0xd10f,	// (0x0000d10f) volume_small_pane_g8

0xd118,	// (0x0000d118) volume_small_pane_g9

0xd121,	// (0x0000d121) volume_small_pane_g10

0x0009,

0xf5dc,	// (0x0000f5dc) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb6ef,	// (0x0000b6ef) tabs_3_active_pane_g1

0xb6f7,	// (0x0000b6f7) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb6ef,	// (0x0000b6ef) tabs_3_passive_pane_g1

0xb6f7,	// (0x0000b6f7) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb709,	// (0x0000b709) tabs_4_active_pane_g1

0xb711,	// (0x0000b711) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb709,	// (0x0000b709) tabs_4_1_passive_pane_g1

0xb711,	// (0x0000b711) tabs_4_1_passive_pane_t1

0x2b7a,	// (0x00002b7a) list_highlight_pane_cp2

0xd447,	// (0x0000d447) list_set_pane_ParamLimits

0xd447,	// (0x0000d447) list_set_pane

0xd4e1,	// (0x0000d4e1) main_pane_set_t1_ParamLimits

0xd4e1,	// (0x0000d4e1) main_pane_set_t1

0xd501,	// (0x0000d501) main_pane_set_t2_ParamLimits

0xd501,	// (0x0000d501) main_pane_set_t2

0xd515,	// (0x0000d515) main_pane_set_t3_ParamLimits

0xd515,	// (0x0000d515) main_pane_set_t3

0xd527,	// (0x0000d527) main_pane_set_t4_ParamLimits

0xd527,	// (0x0000d527) main_pane_set_t4

0x0003,

0xf61d,	// (0x0000f61d) main_pane_set_t_ParamLimits

0xf61d,	// (0x0000f61d) main_pane_set_t

0xd539,	// (0x0000d539) setting_code_pane

0xd543,	// (0x0000d543) setting_slider_graphic_pane

0xd543,	// (0x0000d543) setting_slider_pane

0xd543,	// (0x0000d543) setting_text_pane

0xd543,	// (0x0000d543) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xaad1,	// (0x0000aad1) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xaad8,	// (0x0000aad8) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4ee3,	// (0x00004ee3) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14c2,	// (0x000014c2) set_opt_bg_pane_g1

0x14ca,	// (0x000014ca) set_opt_bg_pane_g2

0x4ebd,	// (0x00004ebd) set_opt_bg_pane_g3

0x14da,	// (0x000014da) set_opt_bg_pane_g4

0x14e2,	// (0x000014e2) set_opt_bg_pane_g5

0x14ea,	// (0x000014ea) set_opt_bg_pane_g6

0x4ec7,	// (0x00004ec7) set_opt_bg_pane_g7

0x4ecf,	// (0x00004ecf) set_opt_bg_pane_g8

0x4ed9,	// (0x00004ed9) set_opt_bg_pane_g9

0x0008,

0xaeda,	// (0x0000aeda) set_opt_bg_pane_g

0x4e4c,	// (0x00004e4c) slider_set_pane_g1

0x4e59,	// (0x00004e59) slider_set_pane_g2

0x0006,

0xaecb,	// (0x0000aecb) slider_set_pane_g

0x4ccc,	// (0x00004ccc) volume_set_pane_g1

0x4cd4,	// (0x00004cd4) volume_set_pane_g2

0x4cdc,	// (0x00004cdc) volume_set_pane_g3

0x4ce4,	// (0x00004ce4) volume_set_pane_g4

0x4cec,	// (0x00004cec) volume_set_pane_g5

0x4cf4,	// (0x00004cf4) volume_set_pane_g6

0x4cfc,	// (0x00004cfc) volume_set_pane_g7

0x4d04,	// (0x00004d04) volume_set_pane_g8

0x4d0c,	// (0x00004d0c) volume_set_pane_g9

0x4d14,	// (0x00004d14) volume_set_pane_g10

0x0009,

0xaea3,	// (0x0000aea3) volume_set_pane_g

0xb723,	// (0x0000b723) indicator_pane_ParamLimits

0xb723,	// (0x0000b723) indicator_pane

0xb74b,	// (0x0000b74b) main_idle_pane_g2_ParamLimits

0xb74b,	// (0x0000b74b) main_idle_pane_g2

0xb783,	// (0x0000b783) main_pane_idle_g1_ParamLimits

0xb783,	// (0x0000b783) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb7aa,	// (0x0000b7aa) soft_indicator_pane_ParamLimits

0xb7aa,	// (0x0000b7aa) soft_indicator_pane

0xb7c4,	// (0x0000b7c4) wallpaper_pane_ParamLimits

0xb7c4,	// (0x0000b7c4) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb7d6,	// (0x0000b7d6) indicator_pane_g1_ParamLimits

0xb7d6,	// (0x0000b7d6) indicator_pane_g1

0x5421,	// (0x00005421) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb7ec,	// (0x0000b7ec) aid_ps_clock_pane

0x06cd,	// (0x000006cd) aid_ps_indicator_pane

0x06d9,	// (0x000006d9) indicator_ps_pane_ParamLimits

0x06d9,	// (0x000006d9) indicator_ps_pane

0x06e8,	// (0x000006e8) power_save_pane_g1_ParamLimits

0x06e8,	// (0x000006e8) power_save_pane_g1

0x06f4,	// (0x000006f4) power_save_pane_g2_ParamLimits

0x06f4,	// (0x000006f4) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06ae,	// (0x000006ae) aid_ps_area_pane_ParamLimits

0x0001,

0xaadd,	// (0x0000aadd) power_save_pane_g_ParamLimits

0xaadd,	// (0x0000aadd) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb7ec,	// (0x0000b7ec) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xaae2,	// (0x0000aae2) power_save_pane_t_ParamLimits

0xaae2,	// (0x0000aae2) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb7fa,	// (0x0000b7fa) ai_gene_pane_ParamLimits

0xb7fa,	// (0x0000b7fa) ai_gene_pane

0xb811,	// (0x0000b811) ai_links_pane_ParamLimits

0xb811,	// (0x0000b811) ai_links_pane

0xb829,	// (0x0000b829) indicator_pane_cp1_ParamLimits

0xb829,	// (0x0000b829) indicator_pane_cp1

0xb838,	// (0x0000b838) main_pane_idle_g1_cp_ParamLimits

0xb838,	// (0x0000b838) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb850,	// (0x0000b850) soft_indicator_pane_cp1_ParamLimits

0xb850,	// (0x0000b850) soft_indicator_pane_cp1

0x4b99,	// (0x00004b99) ai_links_pane_g1

0x4ba2,	// (0x00004ba2) grid_ai_links_pane

0xd38e,	// (0x0000d38e) ai_gene_pane_1

0x4b87,	// (0x00004b87) ai_gene_pane_2

0x4b90,	// (0x00004b90) list_highlight_pane_cp4

0xd36a,	// (0x0000d36a) cell_ai_link_pane_ParamLimits

0xd36a,	// (0x0000d36a) cell_ai_link_pane

0x4b58,	// (0x00004b58) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xae7e,	// (0x0000ae7e) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x4aa6,	// (0x00004aa6) ai_gene_pane_1_g1_ParamLimits

0x4aa6,	// (0x00004aa6) ai_gene_pane_1_g1

0x4ab2,	// (0x00004ab2) ai_gene_pane_1_g2_ParamLimits

0x4ab2,	// (0x00004ab2) ai_gene_pane_1_g2

0x0001,

0xae74,	// (0x0000ae74) ai_gene_pane_1_g_ParamLimits

0xae74,	// (0x0000ae74) ai_gene_pane_1_g

0x4abf,	// (0x00004abf) ai_gene_pane_1_t1_ParamLimits

0x4abf,	// (0x00004abf) ai_gene_pane_1_t1

0x4af3,	// (0x00004af3) grid_ai_soft_ind_pane

0x4a91,	// (0x00004a91) ai_gene_pane_2_t1_ParamLimits

0x4a91,	// (0x00004a91) ai_gene_pane_2_t1

0xb864,	// (0x0000b864) main_pane_empty_t1_ParamLimits

0xb864,	// (0x0000b864) main_pane_empty_t1

0xb87c,	// (0x0000b87c) main_pane_empty_t2_ParamLimits

0xb87c,	// (0x0000b87c) main_pane_empty_t2

0xb891,	// (0x0000b891) main_pane_empty_t3_ParamLimits

0xb891,	// (0x0000b891) main_pane_empty_t3

0xb8a3,	// (0x0000b8a3) main_pane_empty_t4_ParamLimits

0xb8a3,	// (0x0000b8a3) main_pane_empty_t4

0xb8b5,	// (0x0000b8b5) main_pane_empty_t5_ParamLimits

0xb8b5,	// (0x0000b8b5) main_pane_empty_t5

0x0004,

0xf4a6,	// (0x0000f4a6) main_pane_empty_t_ParamLimits

0xf4a6,	// (0x0000f4a6) main_pane_empty_t

0x15bf,	// (0x000015bf) bg_popup_window_pane_ParamLimits

0x15bf,	// (0x000015bf) bg_popup_window_pane

0x4801,	// (0x00004801) find_popup_pane_cp2_ParamLimits

0x4801,	// (0x00004801) find_popup_pane_cp2

0x480d,	// (0x0000480d) heading_pane_ParamLimits

0x480d,	// (0x0000480d) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd25a,	// (0x0000d25a) bg_popup_window_pane_g1_ParamLimits

0xd25a,	// (0x0000d25a) bg_popup_window_pane_g1

0xd269,	// (0x0000d269) bg_popup_window_pane_g2_ParamLimits

0xd269,	// (0x0000d269) bg_popup_window_pane_g2

0xd275,	// (0x0000d275) bg_popup_window_pane_g3_ParamLimits

0xd275,	// (0x0000d275) bg_popup_window_pane_g3

0xd281,	// (0x0000d281) bg_popup_window_pane_g4_ParamLimits

0xd281,	// (0x0000d281) bg_popup_window_pane_g4

0xd290,	// (0x0000d290) bg_popup_window_pane_g5_ParamLimits

0xd290,	// (0x0000d290) bg_popup_window_pane_g5

0xd2a0,	// (0x0000d2a0) bg_popup_window_pane_g6_ParamLimits

0xd2a0,	// (0x0000d2a0) bg_popup_window_pane_g6

0xd2ac,	// (0x0000d2ac) bg_popup_window_pane_g7_ParamLimits

0xd2ac,	// (0x0000d2ac) bg_popup_window_pane_g7

0xd2bb,	// (0x0000d2bb) bg_popup_window_pane_g8_ParamLimits

0xd2bb,	// (0x0000d2bb) bg_popup_window_pane_g8

0xd2ca,	// (0x0000d2ca) bg_popup_window_pane_g9_ParamLimits

0xd2ca,	// (0x0000d2ca) bg_popup_window_pane_g9

0x47d6,	// (0x000047d6) bg_popup_window_pane_g10_ParamLimits

0x47d6,	// (0x000047d6) bg_popup_window_pane_g10

0x0009,

0xf5f1,	// (0x0000f5f1) bg_popup_window_pane_g_ParamLimits

0xf5f1,	// (0x0000f5f1) bg_popup_window_pane_g

0x46ff,	// (0x000046ff) bg_popup_heading_pane_ParamLimits

0x46ff,	// (0x000046ff) bg_popup_heading_pane

0x5364,	// (0x00005364) tabs_4_passive_pane_cp_srt_ParamLimits

0x5364,	// (0x00005364) tabs_4_passive_pane_cp_srt

0x5376,	// (0x00005376) tabs_4_passive_pane_srt_ParamLimits

0x4713,	// (0x00004713) heading_pane_g2

0x5376,	// (0x00005376) tabs_4_passive_pane_srt

0x386d,	// (0x0000386d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x386d,	// (0x0000386d) bg_passive_tab_pane_cp3_srt

0x471b,	// (0x0000471b) heading_pane_t1_ParamLimits

0x471b,	// (0x0000471b) heading_pane_t1

0x4732,	// (0x00004732) heading_pane_t2_ParamLimits

0x4732,	// (0x00004732) heading_pane_t2

0x0001,

0xae37,	// (0x0000ae37) heading_pane_t_ParamLimits

0xae37,	// (0x0000ae37) heading_pane_t

0x40d9,	// (0x000040d9) bg_popup_heading_pane_g1

0x4188,	// (0x00004188) bg_popup_heading_pane_g2

0x4192,	// (0x00004192) bg_popup_heading_pane_g3

0x419c,	// (0x0000419c) bg_popup_heading_pane_g4

0x41a6,	// (0x000041a6) bg_popup_heading_pane_g5

0x41b0,	// (0x000041b0) bg_popup_heading_pane_g6

0x41b8,	// (0x000041b8) bg_popup_heading_pane_g7

0x41c0,	// (0x000041c0) bg_popup_heading_pane_g8

0x41ca,	// (0x000041ca) bg_popup_heading_pane_g9

0x0008,

0xadf3,	// (0x0000adf3) bg_popup_heading_pane_g

0x36bb,	// (0x000036bb) bg_popup_sub_pane_g1

0x36c3,	// (0x000036c3) bg_popup_sub_pane_g2

0x36cb,	// (0x000036cb) bg_popup_sub_pane_g3

0x36d3,	// (0x000036d3) bg_popup_sub_pane_g4

0x36db,	// (0x000036db) bg_popup_sub_pane_g5

0x36e3,	// (0x000036e3) bg_popup_sub_pane_g6

0x36eb,	// (0x000036eb) bg_popup_sub_pane_g7

0x36f3,	// (0x000036f3) bg_popup_sub_pane_g8

0x36fb,	// (0x000036fb) bg_popup_sub_pane_g9

0x0008,

0xadcd,	// (0x0000adcd) bg_popup_sub_pane_g

0x0823,	// (0x00000823) bg_popup_window_pane_cp5_ParamLimits

0x0823,	// (0x00000823) bg_popup_window_pane_cp5

0x083f,	// (0x0000083f) popup_note_window_g1_ParamLimits

0x083f,	// (0x0000083f) popup_note_window_g1

0x084b,	// (0x0000084b) popup_note_window_t1_ParamLimits

0x084b,	// (0x0000084b) popup_note_window_t1

0x0861,	// (0x00000861) popup_note_window_t2_ParamLimits

0x0861,	// (0x00000861) popup_note_window_t2

0x0877,	// (0x00000877) popup_note_window_t3_ParamLimits

0x0877,	// (0x00000877) popup_note_window_t3

0x088d,	// (0x0000088d) popup_note_window_t4_ParamLimits

0x088d,	// (0x0000088d) popup_note_window_t4

0x08b5,	// (0x000008b5) popup_note_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note_window_t5

0x0004,

0xaaf2,	// (0x0000aaf2) popup_note_window_t_ParamLimits

0xaaf2,	// (0x0000aaf2) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x4055,	// (0x00004055) popup_note_image_window_g1_ParamLimits

0x4055,	// (0x00004055) popup_note_image_window_g1

0x4061,	// (0x00004061) popup_note_image_window_g2_ParamLimits

0x4061,	// (0x00004061) popup_note_image_window_g2

0x0001,

0xadc1,	// (0x0000adc1) popup_note_image_window_g_ParamLimits

0xadc1,	// (0x0000adc1) popup_note_image_window_g

0x407a,	// (0x0000407a) popup_note_image_window_t1_ParamLimits

0x407a,	// (0x0000407a) popup_note_image_window_t1

0x4093,	// (0x00004093) popup_note_image_window_t2_ParamLimits

0x4093,	// (0x00004093) popup_note_image_window_t2

0x40ac,	// (0x000040ac) popup_note_image_window_t3_ParamLimits

0x40ac,	// (0x000040ac) popup_note_image_window_t3

0x0002,

0xadc6,	// (0x0000adc6) popup_note_image_window_t_ParamLimits

0xadc6,	// (0x0000adc6) popup_note_image_window_t

0x3f16,	// (0x00003f16) bg_popup_window_pane_cp7_ParamLimits

0x3f16,	// (0x00003f16) bg_popup_window_pane_cp7

0x3f46,	// (0x00003f46) popup_note_wait_window_g1_ParamLimits

0x3f46,	// (0x00003f46) popup_note_wait_window_g1

0x3f52,	// (0x00003f52) popup_note_wait_window_g2_ParamLimits

0x3f52,	// (0x00003f52) popup_note_wait_window_g2

0x0002,

0xadaf,	// (0x0000adaf) popup_note_wait_window_g_ParamLimits

0xadaf,	// (0x0000adaf) popup_note_wait_window_g

0x3f6a,	// (0x00003f6a) popup_note_wait_window_t1_ParamLimits

0x3f6a,	// (0x00003f6a) popup_note_wait_window_t1

0x3f91,	// (0x00003f91) popup_note_wait_window_t2_ParamLimits

0x3f91,	// (0x00003f91) popup_note_wait_window_t2

0x3fae,	// (0x00003fae) popup_note_wait_window_t3_ParamLimits

0x3fae,	// (0x00003fae) popup_note_wait_window_t3

0x3fc1,	// (0x00003fc1) popup_note_wait_window_t4_ParamLimits

0x3fc1,	// (0x00003fc1) popup_note_wait_window_t4

0x0004,

0xadb6,	// (0x0000adb6) popup_note_wait_window_t_ParamLimits

0xadb6,	// (0x0000adb6) popup_note_wait_window_t

0x3fe6,	// (0x00003fe6) wait_bar_pane_ParamLimits

0x3fe6,	// (0x00003fe6) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xac71,	// (0x0000ac71) wait_anim_pane_g

0x3eba,	// (0x00003eba) wait_border_pane_g1

0x3ec5,	// (0x00003ec5) wait_border_pane_g2

0x3ece,	// (0x00003ece) wait_border_pane_g3

0x0002,

0xada8,	// (0x0000ada8) wait_border_pane_g

0x3d25,	// (0x00003d25) bg_popup_window_pane_cp16_ParamLimits

0x3d25,	// (0x00003d25) bg_popup_window_pane_cp16

0x3e25,	// (0x00003e25) indicator_popup_pane_cp4_ParamLimits

0x3e25,	// (0x00003e25) indicator_popup_pane_cp4

0x3e39,	// (0x00003e39) popup_query_data_window_t1_ParamLimits

0x3e39,	// (0x00003e39) popup_query_data_window_t1

0x3e4b,	// (0x00003e4b) popup_query_data_window_t2_ParamLimits

0x3e4b,	// (0x00003e4b) popup_query_data_window_t2

0x3e64,	// (0x00003e64) popup_query_data_window_t3_ParamLimits

0x3e64,	// (0x00003e64) popup_query_data_window_t3

0x0002,

0xada1,	// (0x0000ada1) popup_query_data_window_t_ParamLimits

0xada1,	// (0x0000ada1) popup_query_data_window_t

0x3e7e,	// (0x00003e7e) query_popup_data_pane_ParamLimits

0x3e7e,	// (0x00003e7e) query_popup_data_pane

0x3e92,	// (0x00003e92) query_popup_data_pane_cp1_ParamLimits

0x3e92,	// (0x00003e92) query_popup_data_pane_cp1

0x3d25,	// (0x00003d25) bg_popup_window_pane_cp10_ParamLimits

0x3d25,	// (0x00003d25) bg_popup_window_pane_cp10

0x3d57,	// (0x00003d57) indicator_popup_pane_ParamLimits

0x3d57,	// (0x00003d57) indicator_popup_pane

0x3d79,	// (0x00003d79) popup_query_code_window_t1_ParamLimits

0x3d79,	// (0x00003d79) popup_query_code_window_t1

0x3d93,	// (0x00003d93) popup_query_code_window_t2_ParamLimits

0x3d93,	// (0x00003d93) popup_query_code_window_t2

0x3ddc,	// (0x00003ddc) popup_query_code_window_t3_ParamLimits

0x3ddc,	// (0x00003ddc) popup_query_code_window_t3

0x0002,

0xad9a,	// (0x0000ad9a) popup_query_code_window_t_ParamLimits

0xad9a,	// (0x0000ad9a) popup_query_code_window_t

0x3e0b,	// (0x00003e0b) query_popup_pane_ParamLimits

0x3e0b,	// (0x00003e0b) query_popup_pane

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1_ParamLimits

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1

0x090a,	// (0x0000090a) indicator_popup_pane_cp2_ParamLimits

0x090a,	// (0x0000090a) indicator_popup_pane_cp2

0x091d,	// (0x0000091d) popup_query_data_code_window_g1_ParamLimits

0x091d,	// (0x0000091d) popup_query_data_code_window_g1

0x0930,	// (0x00000930) popup_query_data_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t1

0x0942,	// (0x00000942) popup_query_data_code_window_t2_ParamLimits

0x0942,	// (0x00000942) popup_query_data_code_window_t2

0x0954,	// (0x00000954) popup_query_data_code_window_t3_ParamLimits

0x0954,	// (0x00000954) popup_query_data_code_window_t3

0x096a,	// (0x0000096a) popup_query_data_code_window_t4_ParamLimits

0x096a,	// (0x0000096a) popup_query_data_code_window_t4

0x0003,

0xaafd,	// (0x0000aafd) popup_query_data_code_window_t_ParamLimits

0xaafd,	// (0x0000aafd) popup_query_data_code_window_t

0x3728,	// (0x00003728) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d1d,	// (0x00003d1d) heading_pane_cp5

0x0a7d,	// (0x00000a7d) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09a8,	// (0x000009a8) query_popup_pane_t1

0x09b6,	// (0x000009b6) list_popup_info_pane_ParamLimits

0x09b6,	// (0x000009b6) list_popup_info_pane

0x09c5,	// (0x000009c5) listscroll_popup_info_pane_g1

0x09cd,	// (0x000009cd) scroll_pane_cp7

0x09d7,	// (0x000009d7) popup_info_list_pane_t1_ParamLimits

0x09d7,	// (0x000009d7) popup_info_list_pane_t1

0x09f1,	// (0x000009f1) popup_info_list_pane_t2_ParamLimits

0x09f1,	// (0x000009f1) popup_info_list_pane_t2

0x0001,

0xab06,	// (0x0000ab06) popup_info_list_pane_t_ParamLimits

0xab06,	// (0x0000ab06) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x5458,	// (0x00005458) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb917,	// (0x0000b917) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0x0a85,	// (0x00000a85) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a85,	// (0x00000a85) cell_large_graphic_colour_none_popup_pane

0xb91f,	// (0x0000b91f) grid_large_graphic_colour_popup_pane_ParamLimits

0xb91f,	// (0x0000b91f) grid_large_graphic_colour_popup_pane

0x0ac5,	// (0x00000ac5) listscroll_popup_colour_pane_g1_ParamLimits

0x0ac5,	// (0x00000ac5) listscroll_popup_colour_pane_g1

0x0adc,	// (0x00000adc) listscroll_popup_colour_pane_g2_ParamLimits

0x0adc,	// (0x00000adc) listscroll_popup_colour_pane_g2

0x0af3,	// (0x00000af3) listscroll_popup_colour_pane_g3_ParamLimits

0x0af3,	// (0x00000af3) listscroll_popup_colour_pane_g3

0xb943,	// (0x0000b943) listscroll_popup_colour_pane_g4_ParamLimits

0xb943,	// (0x0000b943) listscroll_popup_colour_pane_g4

0x0003,

0xf4b1,	// (0x0000f4b1) listscroll_popup_colour_pane_g_ParamLimits

0xf4b1,	// (0x0000f4b1) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb953,	// (0x0000b953) cell_large_graphic_colour_popup_pane_ParamLimits

0xb953,	// (0x0000b953) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xab14,	// (0x0000ab14) cell_large_graphic_colour_popup_pane_g

0x0b67,	// (0x00000b67) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b70,	// (0x00000b70) grid_highlight_pane_cp4

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8_ParamLimits

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1_ParamLimits

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2_ParamLimits

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3_ParamLimits

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4_ParamLimits

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5_ParamLimits

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5

0x0004,

0xab19,	// (0x0000ab19) popup_snote_single_text_window_t_ParamLimits

0xab19,	// (0x0000ab19) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xab24,	// (0x0000ab24) popup_snote_single_graphic_window_g_ParamLimits

0xab24,	// (0x0000ab24) popup_snote_single_graphic_window_g

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1_ParamLimits

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2_ParamLimits

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3_ParamLimits

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4_ParamLimits

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5_ParamLimits

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5

0x0004,

0xab29,	// (0x0000ab29) popup_snote_single_graphic_window_t_ParamLimits

0xab29,	// (0x0000ab29) popup_snote_single_graphic_window_t

0x52e4,	// (0x000052e4) grid_graphic_popup_pane_ParamLimits

0x52e4,	// (0x000052e4) grid_graphic_popup_pane

0x530c,	// (0x0000530c) listscroll_popup_graphic_pane_g1_ParamLimits

0x530c,	// (0x0000530c) listscroll_popup_graphic_pane_g1

0xd672,	// (0x0000d672) listscroll_popup_graphic_pane_g2_ParamLimits

0xd672,	// (0x0000d672) listscroll_popup_graphic_pane_g2

0x0001,

0xf640,	// (0x0000f640) listscroll_popup_graphic_pane_g_ParamLimits

0xf640,	// (0x0000f640) listscroll_popup_graphic_pane_g

0x5334,	// (0x00005334) scroll_pane_cp5

0xd635,	// (0x0000d635) cell_graphic_popup_pane_ParamLimits

0xd635,	// (0x0000d635) cell_graphic_popup_pane

0x526e,	// (0x0000526e) cell_graphic_popup_pane_g1

0x5276,	// (0x00005276) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xaf10,	// (0x0000af10) cell_graphic_popup_pane_g

0x527f,	// (0x0000527f) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd5ec,	// (0x0000d5ec) bg_list_pane_g1_ParamLimits

0xd5ec,	// (0x0000d5ec) bg_list_pane_g1

0x51e3,	// (0x000051e3) bg_list_pane_g2_ParamLimits

0x51e3,	// (0x000051e3) bg_list_pane_g2

0x51f8,	// (0x000051f8) bg_list_pane_g3_ParamLimits

0x51f8,	// (0x000051f8) bg_list_pane_g3

0x520c,	// (0x0000520c) bg_list_pane_g4_ParamLimits

0x520c,	// (0x0000520c) bg_list_pane_g4

0xd609,	// (0x0000d609) bg_list_pane_g5_ParamLimits

0xd609,	// (0x0000d609) bg_list_pane_g5

0x0004,

0xf635,	// (0x0000f635) bg_list_pane_g_ParamLimits

0xf635,	// (0x0000f635) bg_list_pane_g

0xd592,	// (0x0000d592) list_double2_graphic_large_graphic_pane_ParamLimits

0xd592,	// (0x0000d592) list_double2_graphic_large_graphic_pane

0xd592,	// (0x0000d592) list_double2_graphic_pane_ParamLimits

0xd592,	// (0x0000d592) list_double2_graphic_pane

0xd592,	// (0x0000d592) list_double2_large_graphic_pane_ParamLimits

0xd592,	// (0x0000d592) list_double2_large_graphic_pane

0xd592,	// (0x0000d592) list_double2_pane_ParamLimits

0xd592,	// (0x0000d592) list_double2_pane

0xd592,	// (0x0000d592) list_double_graphic_heading_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_graphic_heading_pane

0xd592,	// (0x0000d592) list_double_graphic_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_graphic_pane

0xd592,	// (0x0000d592) list_double_heading_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_heading_pane

0xd592,	// (0x0000d592) list_double_large_graphic_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_large_graphic_pane

0xd592,	// (0x0000d592) list_double_number_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_number_pane

0xd592,	// (0x0000d592) list_double_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_pane

0xd592,	// (0x0000d592) list_double_time_pane_ParamLimits

0xd592,	// (0x0000d592) list_double_time_pane

0xd592,	// (0x0000d592) list_setting_number_pane_ParamLimits

0xd592,	// (0x0000d592) list_setting_number_pane

0xd592,	// (0x0000d592) list_setting_pane_ParamLimits

0xd592,	// (0x0000d592) list_setting_pane

0xd5a4,	// (0x0000d5a4) list_single_2graphic_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_2graphic_pane

0xd5a4,	// (0x0000d5a4) list_single_graphic_heading_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_graphic_heading_pane

0xd5a4,	// (0x0000d5a4) list_single_graphic_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_graphic_pane

0xd5a4,	// (0x0000d5a4) list_single_heading_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_heading_pane

0xd5a4,	// (0x0000d5a4) list_single_large_graphic_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_large_graphic_pane

0xd5a4,	// (0x0000d5a4) list_single_number_heading_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_number_heading_pane

0xd5a4,	// (0x0000d5a4) list_single_number_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_number_pane

0xd5a4,	// (0x0000d5a4) list_single_pane_ParamLimits

0xd5a4,	// (0x0000d5a4) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x2542,	// (0x00002542) list_single_pane_g1_ParamLimits

0x2542,	// (0x00002542) list_single_pane_g1

0x355f,	// (0x0000355f) list_single_pane_g2_ParamLimits

0x355f,	// (0x0000355f) list_single_pane_g2

0x0001,

0xad46,	// (0x0000ad46) list_single_pane_g_ParamLimits

0xad46,	// (0x0000ad46) list_single_pane_g

0x5a5e,	// (0x00005a5e) list_single_pane_t1_ParamLimits

0x5a5e,	// (0x00005a5e) list_single_pane_t1

0x2542,	// (0x00002542) list_single_number_pane_g1_ParamLimits

0x2542,	// (0x00002542) list_single_number_pane_g1

0x355f,	// (0x0000355f) list_single_number_pane_g2_ParamLimits

0x355f,	// (0x0000355f) list_single_number_pane_g2

0x0001,

0xad46,	// (0x0000ad46) list_single_number_pane_g_ParamLimits

0xad46,	// (0x0000ad46) list_single_number_pane_g

0x3649,	// (0x00003649) list_single_number_pane_t1_ParamLimits

0x3649,	// (0x00003649) list_single_number_pane_t1

0xd3e3,	// (0x0000d3e3) list_single_number_pane_t2_ParamLimits

0xd3e3,	// (0x0000d3e3) list_single_number_pane_t2

0x0001,

0xf618,	// (0x0000f618) list_single_number_pane_t_ParamLimits

0xf618,	// (0x0000f618) list_single_number_pane_t

0xb97c,	// (0x0000b97c) list_single_graphic_pane_g1_ParamLimits

0xb97c,	// (0x0000b97c) list_single_graphic_pane_g1

0x2542,	// (0x00002542) list_single_graphic_pane_g2_ParamLimits

0x2542,	// (0x00002542) list_single_graphic_pane_g2

0x355f,	// (0x0000355f) list_single_graphic_pane_g3_ParamLimits

0x355f,	// (0x0000355f) list_single_graphic_pane_g3

0x0002,

0xf4ba,	// (0x0000f4ba) list_single_graphic_pane_g_ParamLimits

0xf4ba,	// (0x0000f4ba) list_single_graphic_pane_g

0xb988,	// (0x0000b988) list_single_graphic_pane_t1_ParamLimits

0xb988,	// (0x0000b988) list_single_graphic_pane_t1

0x2542,	// (0x00002542) list_single_heading_pane_g1_ParamLimits

0x2542,	// (0x00002542) list_single_heading_pane_g1

0x355f,	// (0x0000355f) list_single_heading_pane_g2_ParamLimits

0x355f,	// (0x0000355f) list_single_heading_pane_g2

0x0001,

0xad46,	// (0x0000ad46) list_single_heading_pane_g_ParamLimits

0xad46,	// (0x0000ad46) list_single_heading_pane_g

0x5a80,	// (0x00005a80) list_single_heading_pane_t1_ParamLimits

0x5a80,	// (0x00005a80) list_single_heading_pane_t1

0xb99e,	// (0x0000b99e) list_single_heading_pane_t2_ParamLimits

0xb99e,	// (0x0000b99e) list_single_heading_pane_t2

0x0001,

0xf4c1,	// (0x0000f4c1) list_single_heading_pane_t_ParamLimits

0xf4c1,	// (0x0000f4c1) list_single_heading_pane_t

0x2542,	// (0x00002542) list_single_number_heading_pane_g1_ParamLimits

0x2542,	// (0x00002542) list_single_number_heading_pane_g1

0x355f,	// (0x0000355f) list_single_number_heading_pane_g2_ParamLimits

0x355f,	// (0x0000355f) list_single_number_heading_pane_g2

0x0001,

0xad46,	// (0x0000ad46) list_single_number_heading_pane_g_ParamLimits

0xad46,	// (0x0000ad46) list_single_number_heading_pane_g

0x5a80,	// (0x00005a80) list_single_number_heading_pane_t1_ParamLimits

0x5a80,	// (0x00005a80) list_single_number_heading_pane_t1

0xb9b0,	// (0x0000b9b0) list_single_number_heading_pane_t2_ParamLimits

0xb9b0,	// (0x0000b9b0) list_single_number_heading_pane_t2

0x5a38,	// (0x00005a38) list_single_number_heading_pane_t3_ParamLimits

0x5a38,	// (0x00005a38) list_single_number_heading_pane_t3

0x0002,

0xf4c6,	// (0x0000f4c6) list_single_number_heading_pane_t_ParamLimits

0xf4c6,	// (0x0000f4c6) list_single_number_heading_pane_t

0x3553,	// (0x00003553) list_single_graphic_heading_pane_g1_ParamLimits

0x3553,	// (0x00003553) list_single_graphic_heading_pane_g1

0xb9c2,	// (0x0000b9c2) list_single_graphic_heading_pane_g4_ParamLimits

0xb9c2,	// (0x0000b9c2) list_single_graphic_heading_pane_g4

0x355f,	// (0x0000355f) list_single_graphic_heading_pane_g5_ParamLimits

0x355f,	// (0x0000355f) list_single_graphic_heading_pane_g5

0x0002,

0xf4cd,	// (0x0000f4cd) list_single_graphic_heading_pane_g_ParamLimits

0xf4cd,	// (0x0000f4cd) list_single_graphic_heading_pane_g

0x5a80,	// (0x00005a80) list_single_graphic_heading_pane_t1_ParamLimits

0x5a80,	// (0x00005a80) list_single_graphic_heading_pane_t1

0xb9d3,	// (0x0000b9d3) list_single_graphic_heading_pane_t2_ParamLimits

0xb9d3,	// (0x0000b9d3) list_single_graphic_heading_pane_t2

0x0001,

0xf4d4,	// (0x0000f4d4) list_single_graphic_heading_pane_t_ParamLimits

0xf4d4,	// (0x0000f4d4) list_single_graphic_heading_pane_t

0x5a74,	// (0x00005a74) list_single_large_graphic_pane_g1_ParamLimits

0x5a74,	// (0x00005a74) list_single_large_graphic_pane_g1

0x2542,	// (0x00002542) list_single_large_graphic_pane_g2_ParamLimits

0x2542,	// (0x00002542) list_single_large_graphic_pane_g2

0x355f,	// (0x0000355f) list_single_large_graphic_pane_g3_ParamLimits

0x355f,	// (0x0000355f) list_single_large_graphic_pane_g3

0x0002,

0xafa0,	// (0x0000afa0) list_single_large_graphic_pane_g_ParamLimits

0xafa0,	// (0x0000afa0) list_single_large_graphic_pane_g

0x3ec5,	// (0x00003ec5) wait_border_pane_g2_copy1

0xb9e5,	// (0x0000b9e5) list_single_large_graphic_pane_g4_cp2

0x5a80,	// (0x00005a80) list_single_large_graphic_pane_t1_ParamLimits

0x5a80,	// (0x00005a80) list_single_large_graphic_pane_t1

0x3784,	// (0x00003784) list_double_pane_g1_ParamLimits

0x3784,	// (0x00003784) list_double_pane_g1

0xb9ed,	// (0x0000b9ed) list_double_pane_g2_ParamLimits

0xb9ed,	// (0x0000b9ed) list_double_pane_g2

0x0001,

0xf4d9,	// (0x0000f4d9) list_double_pane_g_ParamLimits

0xf4d9,	// (0x0000f4d9) list_double_pane_g

0x76ae,	// (0x000076ae) list_double_pane_t1_ParamLimits

0x76ae,	// (0x000076ae) list_double_pane_t1

0xb9f9,	// (0x0000b9f9) list_double_pane_t2_ParamLimits

0xb9f9,	// (0x0000b9f9) list_double_pane_t2

0x0001,

0xf4de,	// (0x0000f4de) list_double_pane_t_ParamLimits

0xf4de,	// (0x0000f4de) list_double_pane_t

0xba0b,	// (0x0000ba0b) list_double2_pane_g1_ParamLimits

0xba0b,	// (0x0000ba0b) list_double2_pane_g1

0xba1c,	// (0x0000ba1c) list_double2_pane_g2_ParamLimits

0xba1c,	// (0x0000ba1c) list_double2_pane_g2

0x0001,

0xf4e3,	// (0x0000f4e3) list_double2_pane_g_ParamLimits

0xf4e3,	// (0x0000f4e3) list_double2_pane_g

0xba28,	// (0x0000ba28) list_double2_pane_t1_ParamLimits

0xba28,	// (0x0000ba28) list_double2_pane_t1

0xba3e,	// (0x0000ba3e) list_double2_pane_t2_ParamLimits

0xba3e,	// (0x0000ba3e) list_double2_pane_t2

0x0001,

0xf4e8,	// (0x0000f4e8) list_double2_pane_t_ParamLimits

0xf4e8,	// (0x0000f4e8) list_double2_pane_t

0x3784,	// (0x00003784) list_double_number_pane_g1_ParamLimits

0x3784,	// (0x00003784) list_double_number_pane_g1

0xb9ed,	// (0x0000b9ed) list_double_number_pane_g2_ParamLimits

0xb9ed,	// (0x0000b9ed) list_double_number_pane_g2

0x0001,

0xf4d9,	// (0x0000f4d9) list_double_number_pane_g_ParamLimits

0xf4d9,	// (0x0000f4d9) list_double_number_pane_g

0xba50,	// (0x0000ba50) list_double_number_pane_t1_ParamLimits

0xba50,	// (0x0000ba50) list_double_number_pane_t1

0xba62,	// (0x0000ba62) list_double_number_pane_t2_ParamLimits

0xba62,	// (0x0000ba62) list_double_number_pane_t2

0xba78,	// (0x0000ba78) list_double_number_pane_t3_ParamLimits

0xba78,	// (0x0000ba78) list_double_number_pane_t3

0x0002,

0xf4ed,	// (0x0000f4ed) list_double_number_pane_t_ParamLimits

0xf4ed,	// (0x0000f4ed) list_double_number_pane_t

0xba8a,	// (0x0000ba8a) list_double_graphic_pane_g1_ParamLimits

0xba8a,	// (0x0000ba8a) list_double_graphic_pane_g1

0xba96,	// (0x0000ba96) list_double_graphic_pane_g2_ParamLimits

0xba96,	// (0x0000ba96) list_double_graphic_pane_g2

0xbaa5,	// (0x0000baa5) list_double_graphic_pane_g3_ParamLimits

0xbaa5,	// (0x0000baa5) list_double_graphic_pane_g3

0x0003,

0xf4f4,	// (0x0000f4f4) list_double_graphic_pane_g_ParamLimits

0xf4f4,	// (0x0000f4f4) list_double_graphic_pane_g

0xbabd,	// (0x0000babd) list_double_graphic_pane_t1_ParamLimits

0xbabd,	// (0x0000babd) list_double_graphic_pane_t1

0xbad3,	// (0x0000bad3) list_double_graphic_pane_t2_ParamLimits

0xbad3,	// (0x0000bad3) list_double_graphic_pane_t2

0x0001,

0xf4fd,	// (0x0000f4fd) list_double_graphic_pane_t_ParamLimits

0xf4fd,	// (0x0000f4fd) list_double_graphic_pane_t

0xbae5,	// (0x0000bae5) list_double2_graphic_pane_g1_ParamLimits

0xbae5,	// (0x0000bae5) list_double2_graphic_pane_g1

0x242d,	// (0x0000242d) list_double2_graphic_pane_g2_ParamLimits

0x242d,	// (0x0000242d) list_double2_graphic_pane_g2

0xba1c,	// (0x0000ba1c) list_double2_graphic_pane_g3_ParamLimits

0xba1c,	// (0x0000ba1c) list_double2_graphic_pane_g3

0x0002,

0xf502,	// (0x0000f502) list_double2_graphic_pane_g_ParamLimits

0xf502,	// (0x0000f502) list_double2_graphic_pane_g

0xbaf1,	// (0x0000baf1) list_double2_graphic_pane_t1_ParamLimits

0xbaf1,	// (0x0000baf1) list_double2_graphic_pane_t1

0xbb07,	// (0x0000bb07) list_double2_graphic_pane_t2_ParamLimits

0xbb07,	// (0x0000bb07) list_double2_graphic_pane_t2

0x0001,

0xf509,	// (0x0000f509) list_double2_graphic_pane_t_ParamLimits

0xf509,	// (0x0000f509) list_double2_graphic_pane_t

0xbb19,	// (0x0000bb19) list_double_large_graphic_pane_g1_ParamLimits

0xbb19,	// (0x0000bb19) list_double_large_graphic_pane_g1

0xbb44,	// (0x0000bb44) list_double_large_graphic_pane_g2_ParamLimits

0xbb44,	// (0x0000bb44) list_double_large_graphic_pane_g2

0xb9ed,	// (0x0000b9ed) list_double_large_graphic_pane_g3_ParamLimits

0xb9ed,	// (0x0000b9ed) list_double_large_graphic_pane_g3

0xbb55,	// (0x0000bb55) list_double_large_graphic_pane_g4_ParamLimits

0xbb55,	// (0x0000bb55) list_double_large_graphic_pane_g4

0x0004,

0xf50e,	// (0x0000f50e) list_double_large_graphic_pane_g_ParamLimits

0xf50e,	// (0x0000f50e) list_double_large_graphic_pane_g

0xbb67,	// (0x0000bb67) list_double_large_graphic_pane_t1_ParamLimits

0xbb67,	// (0x0000bb67) list_double_large_graphic_pane_t1

0xbb80,	// (0x0000bb80) list_double_large_graphic_pane_t2_ParamLimits

0xbb80,	// (0x0000bb80) list_double_large_graphic_pane_t2

0x0001,

0xf519,	// (0x0000f519) list_double_large_graphic_pane_t_ParamLimits

0xf519,	// (0x0000f519) list_double_large_graphic_pane_t

0xbb92,	// (0x0000bb92) list_double2_large_graphic_pane_g1_ParamLimits

0xbb92,	// (0x0000bb92) list_double2_large_graphic_pane_g1

0xba0b,	// (0x0000ba0b) list_double2_large_graphic_pane_g2_ParamLimits

0xba0b,	// (0x0000ba0b) list_double2_large_graphic_pane_g2

0xba1c,	// (0x0000ba1c) list_double2_large_graphic_pane_g3_ParamLimits

0xba1c,	// (0x0000ba1c) list_double2_large_graphic_pane_g3

0x0002,

0xf51e,	// (0x0000f51e) list_double2_large_graphic_pane_g_ParamLimits

0xf51e,	// (0x0000f51e) list_double2_large_graphic_pane_g

0xbb9e,	// (0x0000bb9e) list_double2_large_graphic_pane_t1_ParamLimits

0xbb9e,	// (0x0000bb9e) list_double2_large_graphic_pane_t1

0xbbb4,	// (0x0000bbb4) list_double2_large_graphic_pane_t2_ParamLimits

0xbbb4,	// (0x0000bbb4) list_double2_large_graphic_pane_t2

0x0001,

0xf525,	// (0x0000f525) list_double2_large_graphic_pane_t_ParamLimits

0xf525,	// (0x0000f525) list_double2_large_graphic_pane_t

0xbbc6,	// (0x0000bbc6) list_double_heading_pane_g1_ParamLimits

0xbbc6,	// (0x0000bbc6) list_double_heading_pane_g1

0xbbd7,	// (0x0000bbd7) list_double_heading_pane_g2_ParamLimits

0xbbd7,	// (0x0000bbd7) list_double_heading_pane_g2

0x0001,

0xf52a,	// (0x0000f52a) list_double_heading_pane_g_ParamLimits

0xf52a,	// (0x0000f52a) list_double_heading_pane_g

0xbbe3,	// (0x0000bbe3) list_double_heading_pane_t1_ParamLimits

0xbbe3,	// (0x0000bbe3) list_double_heading_pane_t1

0xbbf9,	// (0x0000bbf9) list_double_heading_pane_t2_ParamLimits

0xbbf9,	// (0x0000bbf9) list_double_heading_pane_t2

0x0001,

0xf52f,	// (0x0000f52f) list_double_heading_pane_t_ParamLimits

0xf52f,	// (0x0000f52f) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xbbc6,	// (0x0000bbc6) list_double_graphic_heading_pane_g2_ParamLimits

0xbbc6,	// (0x0000bbc6) list_double_graphic_heading_pane_g2

0xbbd7,	// (0x0000bbd7) list_double_graphic_heading_pane_g3_ParamLimits

0xbbd7,	// (0x0000bbd7) list_double_graphic_heading_pane_g3

0x0002,

0xf534,	// (0x0000f534) list_double_graphic_heading_pane_g_ParamLimits

0xf534,	// (0x0000f534) list_double_graphic_heading_pane_g

0xbc0b,	// (0x0000bc0b) list_double_graphic_heading_pane_t1_ParamLimits

0xbc0b,	// (0x0000bc0b) list_double_graphic_heading_pane_t1

0xbc21,	// (0x0000bc21) list_double_graphic_heading_pane_t2_ParamLimits

0xbc21,	// (0x0000bc21) list_double_graphic_heading_pane_t2

0x0001,

0xf53b,	// (0x0000f53b) list_double_graphic_heading_pane_t_ParamLimits

0xf53b,	// (0x0000f53b) list_double_graphic_heading_pane_t

0xbb44,	// (0x0000bb44) list_double_time_pane_g1_ParamLimits

0xbb44,	// (0x0000bb44) list_double_time_pane_g1

0xb9ed,	// (0x0000b9ed) list_double_time_pane_g2_ParamLimits

0xb9ed,	// (0x0000b9ed) list_double_time_pane_g2

0x0001,

0xf540,	// (0x0000f540) list_double_time_pane_g_ParamLimits

0xf540,	// (0x0000f540) list_double_time_pane_g

0xbc33,	// (0x0000bc33) list_double_time_pane_t1_ParamLimits

0xbc33,	// (0x0000bc33) list_double_time_pane_t1

0xbc49,	// (0x0000bc49) list_double_time_pane_t2_ParamLimits

0xbc49,	// (0x0000bc49) list_double_time_pane_t2

0xbc5b,	// (0x0000bc5b) list_double_time_pane_t3_ParamLimits

0xbc5b,	// (0x0000bc5b) list_double_time_pane_t3

0xbc6d,	// (0x0000bc6d) list_double_time_pane_t4_ParamLimits

0xbc6d,	// (0x0000bc6d) list_double_time_pane_t4

0x0003,

0xf545,	// (0x0000f545) list_double_time_pane_t_ParamLimits

0xf545,	// (0x0000f545) list_double_time_pane_t

0x242d,	// (0x0000242d) list_setting_pane_g1_ParamLimits

0x242d,	// (0x0000242d) list_setting_pane_g1

0xba1c,	// (0x0000ba1c) list_setting_pane_g2_ParamLimits

0xba1c,	// (0x0000ba1c) list_setting_pane_g2

0x0001,

0xf54e,	// (0x0000f54e) list_setting_pane_g_ParamLimits

0xf54e,	// (0x0000f54e) list_setting_pane_g

0xbc7f,	// (0x0000bc7f) list_setting_pane_t1_ParamLimits

0xbc7f,	// (0x0000bc7f) list_setting_pane_t1

0xbc96,	// (0x0000bc96) list_setting_pane_t2_ParamLimits

0xbc96,	// (0x0000bc96) list_setting_pane_t2

0x0002,

0xf553,	// (0x0000f553) list_setting_pane_t_ParamLimits

0xf553,	// (0x0000f553) list_setting_pane_t

0xbcd5,	// (0x0000bcd5) set_value_pane_cp_ParamLimits

0xbcd5,	// (0x0000bcd5) set_value_pane_cp

0x242d,	// (0x0000242d) list_setting_number_pane_g1_ParamLimits

0x242d,	// (0x0000242d) list_setting_number_pane_g1

0xba1c,	// (0x0000ba1c) list_setting_number_pane_g2_ParamLimits

0xba1c,	// (0x0000ba1c) list_setting_number_pane_g2

0x0001,

0xf54e,	// (0x0000f54e) list_setting_number_pane_g_ParamLimits

0xf54e,	// (0x0000f54e) list_setting_number_pane_g

0xbce1,	// (0x0000bce1) list_setting_number_pane_t1_ParamLimits

0xbce1,	// (0x0000bce1) list_setting_number_pane_t1

0xbcf5,	// (0x0000bcf5) list_setting_number_pane_t2_ParamLimits

0xbcf5,	// (0x0000bcf5) list_setting_number_pane_t2

0xbd0c,	// (0x0000bd0c) list_setting_number_pane_t3_ParamLimits

0xbd0c,	// (0x0000bd0c) list_setting_number_pane_t3

0x0003,

0xf55a,	// (0x0000f55a) list_setting_number_pane_t_ParamLimits

0xf55a,	// (0x0000f55a) list_setting_number_pane_t

0xbcd5,	// (0x0000bcd5) set_value_pane_ParamLimits

0xbcd5,	// (0x0000bcd5) set_value_pane

0x1260,	// (0x00001260) bg_set_opt_pane_ParamLimits

0x1260,	// (0x00001260) bg_set_opt_pane

0x1281,	// (0x00001281) set_value_pane_t1

0x128f,	// (0x0000128f) slider_set_pane_cp3

0x1298,	// (0x00001298) volume_small_pane_cp

0x12a1,	// (0x000012a1) list_form_gen_pane

0x12aa,	// (0x000012aa) scroll_pane_cp8

0xbd4f,	// (0x0000bd4f) form_field_data_pane_ParamLimits

0xbd4f,	// (0x0000bd4f) form_field_data_pane

0xbd66,	// (0x0000bd66) form_field_data_wide_pane_ParamLimits

0xbd66,	// (0x0000bd66) form_field_data_wide_pane

0xbd86,	// (0x0000bd86) form_field_popup_pane_ParamLimits

0xbd86,	// (0x0000bd86) form_field_popup_pane

0xbd9e,	// (0x0000bd9e) form_field_popup_wide_pane_ParamLimits

0xbd9e,	// (0x0000bd9e) form_field_popup_wide_pane

0x1345,	// (0x00001345) form_field_slider_pane_ParamLimits

0x1345,	// (0x00001345) form_field_slider_pane

0x1358,	// (0x00001358) form_field_slider_wide_pane_ParamLimits

0x1358,	// (0x00001358) form_field_slider_wide_pane

0x136b,	// (0x0000136b) data_form_pane

0xbdbf,	// (0x0000bdbf) form_field_data_pane_t1

0x1399,	// (0x00001399) input_focus_pane

0x13a7,	// (0x000013a7) data_form_wide_pane

0x13d3,	// (0x000013d3) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xbdd9,	// (0x0000bdd9) form_field_popup_pane_t1

0x1399,	// (0x00001399) input_focus_pane_cp7

0x140a,	// (0x0000140a) list_form_pane

0x141e,	// (0x0000141e) form_field_popup_wide_pane_t1

0x1399,	// (0x00001399) input_focus_pane_cp8

0x1433,	// (0x00001433) list_form_wide_pane

0xbdfb,	// (0x0000bdfb) form_field_slider_pane_t1_ParamLimits

0xbdfb,	// (0x0000bdfb) form_field_slider_pane_t1

0xbe13,	// (0x0000be13) form_field_slider_pane_t2_ParamLimits

0xbe13,	// (0x0000be13) form_field_slider_pane_t2

0x0001,

0xf563,	// (0x0000f563) form_field_slider_pane_t_ParamLimits

0xf563,	// (0x0000f563) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xbe28,	// (0x0000be28) slider_cont_pane_ParamLimits

0xbe28,	// (0x0000be28) slider_cont_pane

0x1482,	// (0x00001482) form_field_slider_wide_pane_t1_ParamLimits

0x1482,	// (0x00001482) form_field_slider_wide_pane_t1

0x1494,	// (0x00001494) form_field_slider_wide_pane_t2_ParamLimits

0x1494,	// (0x00001494) form_field_slider_wide_pane_t2

0x0001,

0xabf5,	// (0x0000abf5) form_field_slider_wide_pane_t_ParamLimits

0xabf5,	// (0x0000abf5) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xbe3c,	// (0x0000be3c) slider_cont_pane_cp1_ParamLimits

0xbe3c,	// (0x0000be3c) slider_cont_pane_cp1

0xbe50,	// (0x0000be50) slider_form_pane_cp

0x14c2,	// (0x000014c2) input_focus_pane_g1

0x14ca,	// (0x000014ca) input_focus_pane_g2

0x14d2,	// (0x000014d2) input_focus_pane_g3

0x14da,	// (0x000014da) input_focus_pane_g4

0x14e2,	// (0x000014e2) input_focus_pane_g5

0x14ea,	// (0x000014ea) input_focus_pane_g6

0x14f2,	// (0x000014f2) input_focus_pane_g7

0x14fa,	// (0x000014fa) input_focus_pane_g8

0x1502,	// (0x00001502) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xabfa,	// (0x0000abfa) input_focus_pane_g

0x3ece,	// (0x00003ece) wait_border_pane_g3_copy1

0xbe58,	// (0x0000be58) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd576,	// (0x0000d576) data_form_wide_pane_t1

0xbe72,	// (0x0000be72) list_form_graphic_pane_cp_ParamLimits

0xbe72,	// (0x0000be72) list_form_graphic_pane_cp

0x5058,	// (0x00005058) slider_form_pane_g1

0x5061,	// (0x00005061) slider_form_pane_g2

0x0006,

0xf626,	// (0x0000f626) slider_form_pane_g

0xbe72,	// (0x0000be72) list_form_graphic_pane_ParamLimits

0xbe72,	// (0x0000be72) list_form_graphic_pane

0x155a,	// (0x0000155a) list_form_graphic_pane_g1

0x1562,	// (0x00001562) list_form_graphic_pane_t1_ParamLimits

0x1562,	// (0x00001562) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xbe84,	// (0x0000be84) find_pane_g1

0x1580,	// (0x00001580) input_find_pane

0xbe8d,	// (0x0000be8d) input_find_pane_g1_ParamLimits

0xbe8d,	// (0x0000be8d) input_find_pane_g1

0xbe99,	// (0x0000be99) input_find_pane_t1_ParamLimits

0xbe99,	// (0x0000be99) input_find_pane_t1

0xbeae,	// (0x0000beae) input_find_pane_t2_ParamLimits

0xbeae,	// (0x0000beae) input_find_pane_t2

0x0001,

0xf568,	// (0x0000f568) input_find_pane_t_ParamLimits

0xf568,	// (0x0000f568) input_find_pane_t

0x15bf,	// (0x000015bf) input_focus_pane_cp5_ParamLimits

0x15bf,	// (0x000015bf) input_focus_pane_cp5

0x15d9,	// (0x000015d9) bg_popup_window_pane_cp2_ParamLimits

0x15d9,	// (0x000015d9) bg_popup_window_pane_cp2

0x15e6,	// (0x000015e6) listscroll_menu_pane_ParamLimits

0x15e6,	// (0x000015e6) listscroll_menu_pane

0xbecf,	// (0x0000becf) popup_submenu_window_ParamLimits

0xbecf,	// (0x0000becf) popup_submenu_window

0x161e,	// (0x0000161e) find_popup_pane_g1

0x1626,	// (0x00001626) input_popup_find_pane_cp

0x15bf,	// (0x000015bf) input_focus_pane_cp4_ParamLimits

0x15bf,	// (0x000015bf) input_focus_pane_cp4

0x163c,	// (0x0000163c) input_popup_find_pane_t1_ParamLimits

0x163c,	// (0x0000163c) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x166a,	// (0x0000166a) listscroll_popup_sub_pane

0x1672,	// (0x00001672) list_submenu_pane_ParamLimits

0x1672,	// (0x00001672) list_submenu_pane

0x1683,	// (0x00001683) scroll_pane_cp4

0x168b,	// (0x0000168b) list_single_popup_submenu_pane_ParamLimits

0x168b,	// (0x0000168b) list_single_popup_submenu_pane

0x169f,	// (0x0000169f) list_single_popup_submenu_pane_g1

0x16a7,	// (0x000016a7) list_single_popup_submenu_pane_t1_ParamLimits

0x16a7,	// (0x000016a7) list_single_popup_submenu_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1

0xbf09,	// (0x0000bf09) tabs_2_active_pane_g1

0xbf11,	// (0x0000bf11) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbf09,	// (0x0000bf09) tabs_2_passive_pane_g1

0xbf11,	// (0x0000bf11) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbf23,	// (0x0000bf23) tabs_2_long_active_pane_t1

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp4

0x3730,	// (0x00003730) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbf36,	// (0x0000bf36) tabs_3_long_active_pane_t1

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp5

0x3730,	// (0x00003730) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x171e,	// (0x0000171e) listscroll_popup_fast_pane_ParamLimits

0x171e,	// (0x0000171e) listscroll_popup_fast_pane

0x172d,	// (0x0000172d) grid_popup_fast_pane_ParamLimits

0x172d,	// (0x0000172d) grid_popup_fast_pane

0x173f,	// (0x0000173f) scroll_pane_cp9_ParamLimits

0x173f,	// (0x0000173f) scroll_pane_cp9

0x7312,	// (0x00007312) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7312,	// (0x00007312) list_single_graphic_hl_pane_t1_cp2

0x1763,	// (0x00001763) input_focus_pane_cp20_ParamLimits

0x1763,	// (0x00001763) input_focus_pane_cp20

0x1771,	// (0x00001771) query_popup_data_pane_t1_ParamLimits

0x1771,	// (0x00001771) query_popup_data_pane_t1

0x1784,	// (0x00001784) query_popup_data_pane_t2_ParamLimits

0x1784,	// (0x00001784) query_popup_data_pane_t2

0x17ca,	// (0x000017ca) query_popup_data_pane_t3_ParamLimits

0x17ca,	// (0x000017ca) query_popup_data_pane_t3

0x180b,	// (0x0000180b) query_popup_data_pane_t4_ParamLimits

0x180b,	// (0x0000180b) query_popup_data_pane_t4

0x1847,	// (0x00001847) query_popup_data_pane_t5_ParamLimits

0x1847,	// (0x00001847) query_popup_data_pane_t5

0x0004,

0xac14,	// (0x0000ac14) query_popup_data_pane_t_ParamLimits

0xac14,	// (0x0000ac14) query_popup_data_pane_t

0x14c2,	// (0x000014c2) bg_set_opt_pane_g1

0x14ca,	// (0x000014ca) bg_set_opt_pane_g2

0x14d2,	// (0x000014d2) bg_set_opt_pane_g3

0x14da,	// (0x000014da) bg_set_opt_pane_g4

0x14e2,	// (0x000014e2) bg_set_opt_pane_g5

0x14ea,	// (0x000014ea) bg_set_opt_pane_g6

0x14f2,	// (0x000014f2) bg_set_opt_pane_g7

0x14fa,	// (0x000014fa) bg_set_opt_pane_g8

0x1502,	// (0x00001502) bg_set_opt_pane_g9

0x0008,

0xac1f,	// (0x0000ac1f) bg_set_opt_pane_g

0x2161,	// (0x00002161) control_top_pane_stacon_ParamLimits

0x2161,	// (0x00002161) control_top_pane_stacon

0x21b4,	// (0x000021b4) signal_pane_stacon_ParamLimits

0x21b4,	// (0x000021b4) signal_pane_stacon

0x21d9,	// (0x000021d9) stacon_top_pane_g1_ParamLimits

0x21d9,	// (0x000021d9) stacon_top_pane_g1

0x21fb,	// (0x000021fb) title_pane_stacon_ParamLimits

0x21fb,	// (0x000021fb) title_pane_stacon

0x2225,	// (0x00002225) uni_indicator_pane_stacon_ParamLimits

0x2225,	// (0x00002225) uni_indicator_pane_stacon

0x223a,	// (0x0000223a) battery_pane_stacon_ParamLimits

0x223a,	// (0x0000223a) battery_pane_stacon

0x227e,	// (0x0000227e) control_bottom_pane_stacon_ParamLimits

0x227e,	// (0x0000227e) control_bottom_pane_stacon

0x22a1,	// (0x000022a1) navi_pane_stacon_ParamLimits

0x22a1,	// (0x000022a1) navi_pane_stacon

0x22c4,	// (0x000022c4) stacon_bottom_pane_g1_ParamLimits

0x22c4,	// (0x000022c4) stacon_bottom_pane_g1

0x187e,	// (0x0000187e) aid_levels_signal_lsc_ParamLimits

0x187e,	// (0x0000187e) aid_levels_signal_lsc

0x1894,	// (0x00001894) signal_pane_stacon_g1_ParamLimits

0x1894,	// (0x00001894) signal_pane_stacon_g1

0x18a8,	// (0x000018a8) signal_pane_stacon_g2_ParamLimits

0x18a8,	// (0x000018a8) signal_pane_stacon_g2

0x0001,

0xac32,	// (0x0000ac32) signal_pane_stacon_g_ParamLimits

0xac32,	// (0x0000ac32) signal_pane_stacon_g

0x18ea,	// (0x000018ea) title_pane_stacon_t1_ParamLimits

0x18ea,	// (0x000018ea) title_pane_stacon_t1

0x190f,	// (0x0000190f) uni_indicator_pane_stacon_g1

0x1919,	// (0x00001919) uni_indicator_pane_stacon_g2

0x1923,	// (0x00001923) uni_indicator_pane_stacon_g3

0x192d,	// (0x0000192d) uni_indicator_pane_stacon_g4

0x0003,

0xac3e,	// (0x0000ac3e) uni_indicator_pane_stacon_g

0x1937,	// (0x00001937) control_top_pane_stacon_g1

0x193f,	// (0x0000193f) control_top_pane_stacon_t1_ParamLimits

0x193f,	// (0x0000193f) control_top_pane_stacon_t1

0x1976,	// (0x00001976) aid_levels_battery_lsc_ParamLimits

0x1976,	// (0x00001976) aid_levels_battery_lsc

0x198d,	// (0x0000198d) battery_pane_stacon_g1_ParamLimits

0x198d,	// (0x0000198d) battery_pane_stacon_g1

0x19a0,	// (0x000019a0) battery_pane_stacon_g2_ParamLimits

0x19a0,	// (0x000019a0) battery_pane_stacon_g2

0x0001,

0xac47,	// (0x0000ac47) battery_pane_stacon_g_ParamLimits

0xac47,	// (0x0000ac47) battery_pane_stacon_g

0x19de,	// (0x000019de) navi_icon_pane_stacon

0x19f2,	// (0x000019f2) navi_navi_pane_stacon

0x19de,	// (0x000019de) navi_text_pane_stacon

0x1937,	// (0x00001937) control_bottom_pane_stacon_g1

0x1a06,	// (0x00001a06) control_bottom_pane_stacon_t1_ParamLimits

0x1a06,	// (0x00001a06) control_bottom_pane_stacon_t1

0xbf48,	// (0x0000bf48) grid_app_pane_ParamLimits

0xbf48,	// (0x0000bf48) grid_app_pane

0xbf80,	// (0x0000bf80) scroll_pane_cp15_ParamLimits

0xbf80,	// (0x0000bf80) scroll_pane_cp15

0xbf99,	// (0x0000bf99) cell_app_pane_ParamLimits

0xbf99,	// (0x0000bf99) cell_app_pane

0xbfde,	// (0x0000bfde) cell_app_pane_g1_ParamLimits

0xbfde,	// (0x0000bfde) cell_app_pane_g1

0x1ad4,	// (0x00001ad4) cell_app_pane_g2_ParamLimits

0x1ad4,	// (0x00001ad4) cell_app_pane_g2

0x0001,

0xf56d,	// (0x0000f56d) cell_app_pane_g_ParamLimits

0xf56d,	// (0x0000f56d) cell_app_pane_g

0xbffe,	// (0x0000bffe) cell_app_pane_t1_ParamLimits

0xbffe,	// (0x0000bffe) cell_app_pane_t1

0x1af7,	// (0x00001af7) grid_highlight_pane_ParamLimits

0x1af7,	// (0x00001af7) grid_highlight_pane

0x14c2,	// (0x000014c2) cell_highlight_pane_g1

0x14ca,	// (0x000014ca) cell_highlight_pane_g2

0x14d2,	// (0x000014d2) cell_highlight_pane_g3

0x14da,	// (0x000014da) cell_highlight_pane_g4

0x14e2,	// (0x000014e2) cell_highlight_pane_g5

0x14ea,	// (0x000014ea) cell_highlight_pane_g6

0x14f2,	// (0x000014f2) cell_highlight_pane_g7

0x14fa,	// (0x000014fa) cell_highlight_pane_g8

0x1502,	// (0x00001502) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xabfa,	// (0x0000abfa) cell_highlight_pane_g

0x1b1b,	// (0x00001b1b) bg_scroll_pane

0x1b3a,	// (0x00001b3a) scroll_handle_pane

0x1b8b,	// (0x00001b8b) scroll_bg_pane_g1

0x1ba0,	// (0x00001ba0) scroll_bg_pane_g2

0x1bb8,	// (0x00001bb8) scroll_bg_pane_g3

0x0002,

0xac51,	// (0x0000ac51) scroll_bg_pane_g

0x1bcd,	// (0x00001bcd) scroll_handle_focus_pane_ParamLimits

0x1bcd,	// (0x00001bcd) scroll_handle_focus_pane

0x1b8b,	// (0x00001b8b) scroll_handle_pane_g1

0x1bda,	// (0x00001bda) scroll_handle_pane_g2

0x1bb8,	// (0x00001bb8) scroll_handle_pane_g3

0x0002,

0xac58,	// (0x0000ac58) scroll_handle_pane_g

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp21_ParamLimits

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp21

0x1bee,	// (0x00001bee) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bee,	// (0x00001bee) popup_fep_japan_predictive_window_t1

0x1c08,	// (0x00001c08) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c08,	// (0x00001c08) popup_fep_japan_predictive_window_t2

0x1c3b,	// (0x00001c3b) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c3b,	// (0x00001c3b) popup_fep_japan_predictive_window_t3

0x0002,

0xac5f,	// (0x0000ac5f) popup_fep_japan_predictive_window_t_ParamLimits

0xac5f,	// (0x0000ac5f) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c72,	// (0x00001c72) listscroll_japin_cand_pane

0x1c7a,	// (0x00001c7a) popup_fep_japan_candidate_window_t1

0x1c88,	// (0x00001c88) candidate_pane_ParamLimits

0x1c88,	// (0x00001c88) candidate_pane

0x1c9a,	// (0x00001c9a) scroll_pane_cp30

0x1ca2,	// (0x00001ca2) list_single_popup_jap_candidate_pane_ParamLimits

0x1ca2,	// (0x00001ca2) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cb7,	// (0x00001cb7) list_single_popup_jap_candidate_pane_t1

0x1cc6,	// (0x00001cc6) level_1_signal

0x1cd8,	// (0x00001cd8) level_2_signal

0x1ceb,	// (0x00001ceb) level_3_signal

0x1cfe,	// (0x00001cfe) level_4_signal

0x1d11,	// (0x00001d11) level_5_signal

0x1d24,	// (0x00001d24) level_6_signal

0x1d37,	// (0x00001d37) level_7_signal

0x1cc6,	// (0x00001cc6) level_1_battery

0x1cd8,	// (0x00001cd8) level_2_battery

0x1ceb,	// (0x00001ceb) level_3_battery

0x1cfe,	// (0x00001cfe) level_4_battery

0x1d11,	// (0x00001d11) level_5_battery

0x1d24,	// (0x00001d24) level_6_battery

0x1d37,	// (0x00001d37) level_7_battery

0x1d81,	// (0x00001d81) list_menu_pane_ParamLimits

0x1d81,	// (0x00001d81) list_menu_pane

0x1d97,	// (0x00001d97) scroll_pane_cp25_ParamLimits

0x1d97,	// (0x00001d97) scroll_pane_cp25

0x1db0,	// (0x00001db0) list_double2_graphic_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double2_graphic_pane_cp2

0x1db0,	// (0x00001db0) list_double2_large_graphic_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double2_large_graphic_pane_cp2

0x1db0,	// (0x00001db0) list_double2_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double2_pane_cp2

0x1db0,	// (0x00001db0) list_double_graphic_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double_graphic_pane_cp2

0x1db0,	// (0x00001db0) list_double_large_graphic_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double_large_graphic_pane_cp2

0x1db0,	// (0x00001db0) list_double_number_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double_number_pane_cp2

0x1db0,	// (0x00001db0) list_double_pane_cp2_ParamLimits

0x1db0,	// (0x00001db0) list_double_pane_cp2

0xc02f,	// (0x0000c02f) list_single_2graphic_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_2graphic_pane_cp2

0xc02f,	// (0x0000c02f) list_single_graphic_heading_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_graphic_heading_pane_cp2

0xc02f,	// (0x0000c02f) list_single_graphic_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_graphic_pane_cp2

0xc02f,	// (0x0000c02f) list_single_heading_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_heading_pane_cp2

0x1ded,	// (0x00001ded) list_single_large_graphic_pane_cp2_ParamLimits

0x1ded,	// (0x00001ded) list_single_large_graphic_pane_cp2

0xc02f,	// (0x0000c02f) list_single_number_heading_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_number_heading_pane_cp2

0xc02f,	// (0x0000c02f) list_single_number_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_number_pane_cp2

0xc02f,	// (0x0000c02f) list_single_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_pane_cp2

0x1ec4,	// (0x00001ec4) bg_popup_sub_pane_cp22

0x1ee9,	// (0x00001ee9) popup_side_volume_key_window_g1

0x1f13,	// (0x00001f13) popup_side_volume_key_window_t1

0x1f2f,	// (0x00001f2f) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1f37,	// (0x00001f37) fep_china_uni_candidate_pane_ParamLimits

0x1f37,	// (0x00001f37) fep_china_uni_candidate_pane

0x1f4b,	// (0x00001f4b) fep_china_uni_entry_pane

0x1f5b,	// (0x00001f5b) popup_fep_china_uni_window_g1

0x1f77,	// (0x00001f77) fep_china_uni_entry_pane_g1

0x1f7f,	// (0x00001f7f) fep_china_uni_entry_pane_g2

0x0001,

0xac90,	// (0x0000ac90) fep_china_uni_entry_pane_g

0x1f87,	// (0x00001f87) fep_entry_item_pane

0x1f91,	// (0x00001f91) fep_candidate_item_pane

0x1f99,	// (0x00001f99) fep_china_uni_candidate_pane_g1

0x1fa1,	// (0x00001fa1) fep_china_uni_candidate_pane_g2

0x1fa9,	// (0x00001fa9) fep_china_uni_candidate_pane_g3

0x1fb1,	// (0x00001fb1) fep_china_uni_candidate_pane_g4

0x0003,

0xac95,	// (0x0000ac95) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fb9,	// (0x00001fb9) fep_entry_item_pane_t1_ParamLimits

0x1fb9,	// (0x00001fb9) fep_entry_item_pane_t1

0x1fcf,	// (0x00001fcf) fep_candidate_item_pane_t1_ParamLimits

0x1fcf,	// (0x00001fcf) fep_candidate_item_pane_t1

0x1fe4,	// (0x00001fe4) fep_candidate_item_pane_t2_ParamLimits

0x1fe4,	// (0x00001fe4) fep_candidate_item_pane_t2

0x0001,

0xac9e,	// (0x0000ac9e) fep_candidate_item_pane_t_ParamLimits

0xac9e,	// (0x0000ac9e) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1ff6,	// (0x00001ff6) level_1_signal_lsc

0x1fff,	// (0x00001fff) level_2_signal_lsc

0x2008,	// (0x00002008) level_3_signal_lsc

0x2011,	// (0x00002011) level_4_signal_lsc

0x201a,	// (0x0000201a) level_5_signal_lsc

0x2023,	// (0x00002023) level_6_signal_lsc

0x202c,	// (0x0000202c) level_7_signal_lsc

0x202c,	// (0x0000202c) level_1_battery_lsc

0x2035,	// (0x00002035) level_2_battery_lsc

0x203e,	// (0x0000203e) level_3_battery_lsc

0x2047,	// (0x00002047) level_4_battery_lsc

0x2050,	// (0x00002050) level_5_battery_lsc

0x2059,	// (0x00002059) level_6_battery_lsc

0x1ff6,	// (0x00001ff6) level_7_battery_lsc

0x2062,	// (0x00002062) scroll_handle_focus_pane_g1

0x206b,	// (0x0000206b) scroll_handle_focus_pane_g2

0x2074,	// (0x00002074) scroll_handle_focus_pane_g3

0x0002,

0xaca3,	// (0x0000aca3) scroll_handle_focus_pane_g

0xc0bd,	// (0x0000c0bd) list_single_2graphic_pane_g1_ParamLimits

0xc0bd,	// (0x0000c0bd) list_single_2graphic_pane_g1

0xb9c2,	// (0x0000b9c2) list_single_2graphic_pane_g2_ParamLimits

0xb9c2,	// (0x0000b9c2) list_single_2graphic_pane_g2

0x355f,	// (0x0000355f) list_single_2graphic_pane_g3_ParamLimits

0x355f,	// (0x0000355f) list_single_2graphic_pane_g3

0xc0c9,	// (0x0000c0c9) list_single_2graphic_pane_g4_ParamLimits

0xc0c9,	// (0x0000c0c9) list_single_2graphic_pane_g4

0x0003,

0xf57b,	// (0x0000f57b) list_single_2graphic_pane_g_ParamLimits

0xf57b,	// (0x0000f57b) list_single_2graphic_pane_g

0xc0da,	// (0x0000c0da) list_single_2graphic_pane_t1_ParamLimits

0xc0da,	// (0x0000c0da) list_single_2graphic_pane_t1

0xc108,	// (0x0000c108) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc108,	// (0x0000c108) list_double2_graphic_large_graphic_pane_g1

0xba0b,	// (0x0000ba0b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba0b,	// (0x0000ba0b) list_double2_graphic_large_graphic_pane_g2

0xba1c,	// (0x0000ba1c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba1c,	// (0x0000ba1c) list_double2_graphic_large_graphic_pane_g3

0xc11a,	// (0x0000c11a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc11a,	// (0x0000c11a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf584,	// (0x0000f584) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf584,	// (0x0000f584) list_double2_graphic_large_graphic_pane_g

0xc126,	// (0x0000c126) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc126,	// (0x0000c126) list_double2_graphic_large_graphic_pane_t1

0xc13c,	// (0x0000c13c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc13c,	// (0x0000c13c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf58d,	// (0x0000f58d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf58d,	// (0x0000f58d) list_double2_graphic_large_graphic_pane_t

0x238c,	// (0x0000238c) popup_fast_swap_window_ParamLimits

0x238c,	// (0x0000238c) popup_fast_swap_window

0x23a8,	// (0x000023a8) popup_side_volume_key_window

0x23c4,	// (0x000023c4) stacon_top_pane

0x23ce,	// (0x000023ce) status_pane_ParamLimits

0x23ce,	// (0x000023ce) status_pane

0x23c4,	// (0x000023c4) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12aa,	// (0x000012aa) scroll_pane_cp121

0x12a1,	// (0x000012a1) set_content_pane

0x2127,	// (0x00002127) bg_active_tab_pane_g1_cp1

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp1

0x2130,	// (0x00002130) bg_active_tab_pane_g3_cp1

0x2127,	// (0x00002127) bg_passive_tab_pane_g1_cp1

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp1

0x2130,	// (0x00002130) bg_passive_tab_pane_g3_cp1

0xc14e,	// (0x0000c14e) bg_active_tab_pane_g1_cp2

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp2

0xc157,	// (0x0000c157) bg_active_tab_pane_g3_cp2

0xc14e,	// (0x0000c14e) bg_passive_tab_pane_g1_cp2

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp2

0xc157,	// (0x0000c157) bg_passive_tab_pane_g3_cp2

0xc160,	// (0x0000c160) bg_active_tab_pane_g1_cp3

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp3

0xc169,	// (0x0000c169) bg_active_tab_pane_g3_cp3

0xc160,	// (0x0000c160) bg_passive_tab_pane_g1_cp3

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp3

0xc169,	// (0x0000c169) bg_passive_tab_pane_g3_cp3

0xc172,	// (0x0000c172) bg_active_tab_pane_g1_cp4

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp4

0xc17b,	// (0x0000c17b) bg_active_tab_pane_g3_cp4

0xc172,	// (0x0000c172) bg_passive_tab_pane_g1_cp4

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp4

0xc17b,	// (0x0000c17b) bg_passive_tab_pane_g3_cp4

0x22e0,	// (0x000022e0) bg_active_tab_pane_g1_cp5

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp5

0x22e9,	// (0x000022e9) bg_active_tab_pane_g3_cp5

0x22e0,	// (0x000022e0) bg_passive_tab_pane_g1_cp5

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp5

0x22e9,	// (0x000022e9) bg_passive_tab_pane_g3_cp5

0x580f,	// (0x0000580f) list_set_graphic_pane_ParamLimits

0x580f,	// (0x0000580f) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc184,	// (0x0000c184) list_set_graphic_pane_g1_ParamLimits

0xc184,	// (0x0000c184) list_set_graphic_pane_g1

0xc190,	// (0x0000c190) list_set_graphic_pane_g2_ParamLimits

0xc190,	// (0x0000c190) list_set_graphic_pane_g2

0x0001,

0xf592,	// (0x0000f592) list_set_graphic_pane_g_ParamLimits

0xf592,	// (0x0000f592) list_set_graphic_pane_g

0x0009,

0xb039,	// (0x0000b039) volume_small_pane_cp_g

0xc1b4,	// (0x0000c1b4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc1b4,	// (0x0000c1b4) list_double2_large_graphic_pane_g1_cp2

0xc1c2,	// (0x0000c1c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc1c2,	// (0x0000c1c2) list_double2_large_graphic_pane_g2_cp2

0x235c,	// (0x0000235c) list_double2_large_graphic_pane_g3_cp2

0x2364,	// (0x00002364) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2364,	// (0x00002364) list_double2_large_graphic_pane_t1_cp2

0x237a,	// (0x0000237a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x237a,	// (0x0000237a) list_double2_large_graphic_pane_t2_cp2

0xd346,	// (0x0000d346) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd346,	// (0x0000d346) list_double_large_graphic_pane_g1_cp2

0xd359,	// (0x0000d359) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd359,	// (0x0000d359) list_double_large_graphic_pane_g2_cp2

0x24ea,	// (0x000024ea) list_double_large_graphic_pane_g3_cp2

0x4b27,	// (0x00004b27) list_double_large_graphic_pane_g4_cp

0x4b2f,	// (0x00004b2f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b2f,	// (0x00004b2f) list_double_large_graphic_pane_t1_cp2

0x4b46,	// (0x00004b46) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b46,	// (0x00004b46) list_double_large_graphic_pane_t2_cp2

0xc1d3,	// (0x0000c1d3) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc1d3,	// (0x0000c1d3) list_double2_graphic_pane_g1_cp2

0xc1e1,	// (0x0000c1e1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc1e1,	// (0x0000c1e1) list_double2_graphic_pane_g2_cp2

0xc1f2,	// (0x0000c1f2) list_double2_graphic_pane_g3_cp2

0x2405,	// (0x00002405) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2405,	// (0x00002405) list_double2_graphic_pane_t1_cp2

0x241b,	// (0x0000241b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x241b,	// (0x0000241b) list_double2_graphic_pane_t2_cp2

0x242d,	// (0x0000242d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x242d,	// (0x0000242d) list_single_number_heading_pane_g1_cp2

0x2439,	// (0x00002439) list_single_number_heading_pane_g2_cp2

0x2441,	// (0x00002441) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2441,	// (0x00002441) list_single_number_heading_pane_t1_cp2

0xc1fc,	// (0x0000c1fc) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc1fc,	// (0x0000c1fc) list_single_number_heading_pane_t2_cp2

0x2469,	// (0x00002469) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2469,	// (0x00002469) list_single_number_heading_pane_t3_cp2

0x242d,	// (0x0000242d) list_single_heading_pane_g1_cp2_ParamLimits

0x242d,	// (0x0000242d) list_single_heading_pane_g1_cp2

0x2439,	// (0x00002439) list_single_heading_pane_g2_cp2

0x2441,	// (0x00002441) list_single_heading_pane_t1_cp2_ParamLimits

0x2441,	// (0x00002441) list_single_heading_pane_t1_cp2

0xd332,	// (0x0000d332) list_single_heading_pane_t2_cp2_ParamLimits

0xd332,	// (0x0000d332) list_single_heading_pane_t2_cp2

0x4855,	// (0x00004855) list_double_graphic_pane_g1_cp2_ParamLimits

0x4855,	// (0x00004855) list_double_graphic_pane_g1_cp2

0x4861,	// (0x00004861) list_double_graphic_pane_g2_cp2_ParamLimits

0x4861,	// (0x00004861) list_double_graphic_pane_g2_cp2

0x4870,	// (0x00004870) list_double_graphic_pane_g3_cp2

0x4878,	// (0x00004878) list_double_graphic_pane_t1_cp2_ParamLimits

0x4878,	// (0x00004878) list_double_graphic_pane_t1_cp2

0x488e,	// (0x0000488e) list_double_graphic_pane_t2_cp2_ParamLimits

0x488e,	// (0x0000488e) list_double_graphic_pane_t2_cp2

0x24de,	// (0x000024de) list_double_number_pane_g1_cp2_ParamLimits

0x24de,	// (0x000024de) list_double_number_pane_g1_cp2

0x24ea,	// (0x000024ea) list_double_number_pane_g2_cp2

0xd2ea,	// (0x0000d2ea) list_double_number_pane_t1_cp2_ParamLimits

0xd2ea,	// (0x0000d2ea) list_double_number_pane_t1_cp2

0x482d,	// (0x0000482d) list_double_number_pane_t2_cp2_ParamLimits

0x482d,	// (0x0000482d) list_double_number_pane_t2_cp2

0x4843,	// (0x00004843) list_double_number_pane_t3_cp2_ParamLimits

0x4843,	// (0x00004843) list_double_number_pane_t3_cp2

0xd227,	// (0x0000d227) list_single_graphic_pane_g1_cp2_ParamLimits

0xd227,	// (0x0000d227) list_single_graphic_pane_g1_cp2

0x2542,	// (0x00002542) list_single_graphic_pane_g2_cp2_ParamLimits

0x2542,	// (0x00002542) list_single_graphic_pane_g2_cp2

0x254e,	// (0x0000254e) list_single_graphic_pane_g3_cp2

0x46c7,	// (0x000046c7) list_single_graphic_pane_t1_cp2_ParamLimits

0x46c7,	// (0x000046c7) list_single_graphic_pane_t1_cp2

0x2542,	// (0x00002542) list_single_number_pane_g1_cp2_ParamLimits

0x2542,	// (0x00002542) list_single_number_pane_g1_cp2

0x254e,	// (0x0000254e) list_single_number_pane_g2_cp2

0x46c7,	// (0x000046c7) list_single_number_pane_t1_cp2_ParamLimits

0x46c7,	// (0x000046c7) list_single_number_pane_t1_cp2

0xd213,	// (0x0000d213) list_single_number_pane_t2_cp2_ParamLimits

0xd213,	// (0x0000d213) list_single_number_pane_t2_cp2

0xc1c2,	// (0x0000c1c2) list_double2_pane_g1_cp2_ParamLimits

0xc1c2,	// (0x0000c1c2) list_double2_pane_g1_cp2

0x235c,	// (0x0000235c) list_double2_pane_g2_cp2

0x24b6,	// (0x000024b6) list_double2_pane_t1_cp2_ParamLimits

0x24b6,	// (0x000024b6) list_double2_pane_t1_cp2

0x24cc,	// (0x000024cc) list_double2_pane_t2_cp2_ParamLimits

0x24cc,	// (0x000024cc) list_double2_pane_t2_cp2

0x24de,	// (0x000024de) list_double_pane_g1_cp2_ParamLimits

0x24de,	// (0x000024de) list_double_pane_g1_cp2

0x24ea,	// (0x000024ea) list_double_pane_g2_cp2

0x24f2,	// (0x000024f2) list_double_pane_t1_cp2_ParamLimits

0x24f2,	// (0x000024f2) list_double_pane_t1_cp2

0x2508,	// (0x00002508) list_double_pane_t2_cp2_ParamLimits

0x2508,	// (0x00002508) list_double_pane_t2_cp2

0x2532,	// (0x00002532) list_single_pane_cp2_g3

0x2542,	// (0x00002542) list_single_pane_g1_cp2_ParamLimits

0x2542,	// (0x00002542) list_single_pane_g1_cp2

0x254e,	// (0x0000254e) list_single_pane_g2_cp2

0x2556,	// (0x00002556) list_single_pane_t1_cp2_ParamLimits

0x2556,	// (0x00002556) list_single_pane_t1_cp2

0xc228,	// (0x0000c228) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc228,	// (0x0000c228) list_single_large_graphic_pane_g1_cp2

0x257a,	// (0x0000257a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x257a,	// (0x0000257a) list_single_large_graphic_pane_g2_cp2

0x2586,	// (0x00002586) list_single_large_graphic_pane_g3_cp2

0x258e,	// (0x0000258e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x258e,	// (0x0000258e) list_single_large_graphic_pane_g4_cp1

0x25a8,	// (0x000025a8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25a8,	// (0x000025a8) list_single_large_graphic_pane_t1_cp2

0x4540,	// (0x00004540) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4540,	// (0x00004540) list_single_graphic_heading_pane_g1_cp2

0xd0b4,	// (0x0000d0b4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd0b4,	// (0x0000d0b4) list_single_graphic_heading_pane_g4_cp2

0x254e,	// (0x0000254e) list_single_graphic_heading_pane_g5_cp2

0x454c,	// (0x0000454c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x454c,	// (0x0000454c) list_single_graphic_heading_pane_t1_cp2

0xd0c5,	// (0x0000d0c5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd0c5,	// (0x0000d0c5) list_single_graphic_heading_pane_t2_cp2

0x4501,	// (0x00004501) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4501,	// (0x00004501) list_single_2graphic_pane_g1_cp2

0xd0b4,	// (0x0000d0b4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd0b4,	// (0x0000d0b4) list_single_2graphic_pane_g2_cp2

0x254e,	// (0x0000254e) list_single_2graphic_pane_g3_cp2

0x451e,	// (0x0000451e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x451e,	// (0x0000451e) list_single_2graphic_pane_g4_cp2

0x452a,	// (0x0000452a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x452a,	// (0x0000452a) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x40d9,	// (0x000040d9) list_highlight_pane_g1_cp1

0x40e1,	// (0x000040e1) list_highlight_pane_g2_cp1

0x40e9,	// (0x000040e9) list_highlight_pane_g3_cp1

0x40f1,	// (0x000040f1) list_highlight_pane_g4_cp1

0x40f9,	// (0x000040f9) list_highlight_pane_g5_cp1

0x4101,	// (0x00004101) list_highlight_pane_g6_cp1

0x4109,	// (0x00004109) list_highlight_pane_g7_cp1

0x4111,	// (0x00004111) list_highlight_pane_g8_cp1

0x4119,	// (0x00004119) list_highlight_pane_g9_cp1

0xd07a,	// (0x0000d07a) form_field_slider_pane_t3

0xd088,	// (0x0000d088) form_field_slider_pane_t4

0x4015,	// (0x00004015) slider_form_pane_ParamLimits

0x4015,	// (0x00004015) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4957,	// (0x00004957) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xae56,	// (0x0000ae56) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25be,	// (0x000025be) text_digital

0x25cd,	// (0x000025cd) text_primary

0x25dc,	// (0x000025dc) text_primary_small

0x25eb,	// (0x000025eb) text_secondary

0x25fa,	// (0x000025fa) text_title

0x5242,	// (0x00005242) bg_passive_tab_pane_g1_cp3_srt

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp3_srt

0x524b,	// (0x0000524b) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x5254,	// (0x00005254) tabs_4_active_pane_srt_g1

0xd61f,	// (0x0000d61f) tabs_4_active_pane_srt_t1_ParamLimits

0xd61f,	// (0x0000d61f) tabs_4_active_pane_srt_t1

0x5242,	// (0x00005242) bg_active_tab_pane_g1_cp3_copy1

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp3_copy1

0x524b,	// (0x0000524b) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp4_srt

0x4e13,	// (0x00004e13) bg_passive_tab_pane_g1_cp4_srt

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp4_srt

0x4e1c,	// (0x00004e1c) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xd40b,	// (0x0000d40b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd40b,	// (0x0000d40b) tabs_2_long_active_pane_srt_t1

0x4e13,	// (0x00004e13) bg_active_tab_pane_g1_cp4_srt

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp4_srt

0x4e1c,	// (0x00004e1c) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp5_srt

0x22e0,	// (0x000022e0) bg_passive_tab_pane_g1_cp5_srt

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp5_srt

0x22e9,	// (0x000022e9) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xd3f5,	// (0x0000d3f5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd3f5,	// (0x0000d3f5) tabs_3_long_active_pane_srt_t1

0x22e0,	// (0x000022e0) bg_active_tab_pane_g1_cp5_srt

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp5_srt

0x22e9,	// (0x000022e9) bg_active_tab_pane_g3_cp5_srt

0x4df3,	// (0x00004df3) navi_text_pane_srt_t1

0x4deb,	// (0x00004deb) navi_icon_pane_srt_g1

0x286a,	// (0x0000286a) midp_editing_number_pane_srt

0x2609,	// (0x00002609) midp_ticker_pane_srt

0x2872,	// (0x00002872) midp_ticker_pane_srt_g1

0x287a,	// (0x0000287a) midp_ticker_pane_srt_g2

0x0001,

0xace0,	// (0x0000ace0) midp_ticker_pane_srt_g

0x2882,	// (0x00002882) midp_ticker_pane_srt_t1

0x4ddc,	// (0x00004ddc) midp_editing_number_pane_t1_copy1

0x2b7a,	// (0x00002b7a) listscroll_midp_pane

0x2b7a,	// (0x00002b7a) midp_form_pane

0x2673,	// (0x00002673) midp_info_popup_window_ParamLimits

0x2673,	// (0x00002673) midp_info_popup_window

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp50_ParamLimits

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp50

0x3d11,	// (0x00003d11) listscroll_midp_info_pane_ParamLimits

0x3d11,	// (0x00003d11) listscroll_midp_info_pane

0x3cf9,	// (0x00003cf9) listscroll_form_midp_pane_ParamLimits

0x3cf9,	// (0x00003cf9) listscroll_form_midp_pane

0x3d05,	// (0x00003d05) scroll_bar_cp050

0xd06e,	// (0x0000d06e) list_midp_pane

0x6001,	// (0x00006001) signal_pane_g2_cp

0x3c13,	// (0x00003c13) listscroll_midp_info_pane_t1_ParamLimits

0x3c13,	// (0x00003c13) listscroll_midp_info_pane_t1

0x3c2b,	// (0x00003c2b) listscroll_midp_info_pane_t2_ParamLimits

0x3c2b,	// (0x00003c2b) listscroll_midp_info_pane_t2

0x3c69,	// (0x00003c69) listscroll_midp_info_pane_t3_ParamLimits

0x3c69,	// (0x00003c69) listscroll_midp_info_pane_t3

0x3ca3,	// (0x00003ca3) listscroll_midp_info_pane_t4_ParamLimits

0x3ca3,	// (0x00003ca3) listscroll_midp_info_pane_t4

0x0003,

0xad91,	// (0x0000ad91) listscroll_midp_info_pane_t_ParamLimits

0xad91,	// (0x0000ad91) listscroll_midp_info_pane_t

0x1683,	// (0x00001683) scroll_pane_cp21

0x3bb1,	// (0x00003bb1) form_midp_field_choice_group_pane

0x3bba,	// (0x00003bba) form_midp_field_text_pane

0x3bf9,	// (0x00003bf9) form_midp_field_time_pane

0x3c01,	// (0x00003c01) form_midp_gauge_slider_pane

0x3c0a,	// (0x00003c0a) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd057,	// (0x0000d057) list_single_midp_pane_ParamLimits

0xd057,	// (0x0000d057) list_single_midp_pane

0xd035,	// (0x0000d035) form_midp_field_text_pane_t1

0x386d,	// (0x0000386d) input_focus_pane_cp050

0x3b71,	// (0x00003b71) list_midp_form_text_pane

0x3b09,	// (0x00003b09) form_midp_field_choice_group_pane_t1

0x3b17,	// (0x00003b17) input_focus_pane_cp051

0x3b2b,	// (0x00003b2b) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3aed,	// (0x00003aed) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3afb,	// (0x00003afb) form_midp_field_time_pane_t2

0x0001,

0x2721,	// (0x00002721) aid_navinavi_width_2_pane

0xad8c,	// (0x0000ad8c) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3aad,	// (0x00003aad) form_midp_gauge_slider_pane_t1

0x3abb,	// (0x00003abb) form_midp_gauge_slider_pane_t2

0xd019,	// (0x0000d019) form_midp_gauge_slider_pane_t3

0xd027,	// (0x0000d027) form_midp_gauge_slider_pane_t4

0x0003,

0xf5d3,	// (0x0000f5d3) form_midp_gauge_slider_pane_t

0x3ae5,	// (0x00003ae5) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x3a7a,	// (0x00003a7a) form_midp_gauge_wait_pane_t1_ParamLimits

0x3a7a,	// (0x00003a7a) form_midp_gauge_wait_pane_t1

0x3a8c,	// (0x00003a8c) form_midp_gauge_wait_pane_t2_ParamLimits

0x3a8c,	// (0x00003a8c) form_midp_gauge_wait_pane_t2

0x0001,

0xad7e,	// (0x0000ad7e) form_midp_gauge_wait_pane_t_ParamLimits

0xad7e,	// (0x0000ad7e) form_midp_gauge_wait_pane_t

0x3a9e,	// (0x00003a9e) form_midp_wait_pane_ParamLimits

0x3a9e,	// (0x00003a9e) form_midp_wait_pane

0x3a44,	// (0x00003a44) form_midp_image_pane_g1

0x3a4d,	// (0x00003a4d) form_midp_image_pane_t1

0x3a5c,	// (0x00003a5c) form_midp_image_pane_t2

0x3a6b,	// (0x00003a6b) form_midp_image_pane_t3

0x0002,

0xad77,	// (0x0000ad77) form_midp_image_pane_t

0x3a2c,	// (0x00003a2c) list_single_midp_pane_g1

0x3a35,	// (0x00003a35) list_single_midp_pane_t1

0xd004,	// (0x0000d004) list_midp_form_item_pane_ParamLimits

0xd004,	// (0x0000d004) list_midp_form_item_pane

0x26c9,	// (0x000026c9) list_midp_form_item_pane_t1

0x26d8,	// (0x000026d8) midp_ticker_pane_g1

0x26e4,	// (0x000026e4) midp_ticker_pane_g2

0x0001,

0xacc6,	// (0x0000acc6) midp_ticker_pane_g

0x26f0,	// (0x000026f0) midp_ticker_pane_t1

0x50d8,	// (0x000050d8) midp_editing_number_pane_t1

0x50b6,	// (0x000050b6) midp_editing_number_pane

0x50c5,	// (0x000050c5) midp_ticker_pane

0x4da4,	// (0x00004da4) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dac,	// (0x00004dac) listscroll_ai_message_pane

0x4d2e,	// (0x00004d2e) ai_message_heading_pane_g1_ParamLimits

0x4d2e,	// (0x00004d2e) ai_message_heading_pane_g1

0x4d3a,	// (0x00004d3a) ai_message_heading_pane_g2_ParamLimits

0x4d3a,	// (0x00004d3a) ai_message_heading_pane_g2

0x4d46,	// (0x00004d46) ai_message_heading_pane_g3_ParamLimits

0x4d46,	// (0x00004d46) ai_message_heading_pane_g3

0x4d52,	// (0x00004d52) ai_message_heading_pane_g4_ParamLimits

0x4d52,	// (0x00004d52) ai_message_heading_pane_g4

0x0003,

0xaeb8,	// (0x0000aeb8) ai_message_heading_pane_g_ParamLimits

0xaeb8,	// (0x0000aeb8) ai_message_heading_pane_g

0x4d5e,	// (0x00004d5e) ai_message_heading_pane_t1_ParamLimits

0x4d5e,	// (0x00004d5e) ai_message_heading_pane_t1

0x4d78,	// (0x00004d78) ai_message_heading_pane_t2_ParamLimits

0x4d78,	// (0x00004d78) ai_message_heading_pane_t2

0x0001,

0xaec1,	// (0x0000aec1) ai_message_heading_pane_t_ParamLimits

0xaec1,	// (0x0000aec1) ai_message_heading_pane_t

0x4d8a,	// (0x00004d8a) bg_popup_heading_pane_cp1_ParamLimits

0x4d8a,	// (0x00004d8a) bg_popup_heading_pane_cp1

0x4d1c,	// (0x00004d1c) list_ai_message_pane_ParamLimits

0x4d1c,	// (0x00004d1c) list_ai_message_pane

0x1683,	// (0x00001683) scroll_pane_cp10

0x4c68,	// (0x00004c68) list_ai_message_pane_g1

0x4c70,	// (0x00004c70) list_ai_message_pane_g2

0x0001,

0xae95,	// (0x0000ae95) list_ai_message_pane_g

0x4c78,	// (0x00004c78) list_ai_message_pane_t1_ParamLimits

0x4c78,	// (0x00004c78) list_ai_message_pane_t1

0x4c8d,	// (0x00004c8d) list_ai_message_pane_t2_ParamLimits

0x4c8d,	// (0x00004c8d) list_ai_message_pane_t2

0x4ca2,	// (0x00004ca2) list_ai_message_pane_t3_ParamLimits

0x4ca2,	// (0x00004ca2) list_ai_message_pane_t3

0x4cb7,	// (0x00004cb7) list_ai_message_pane_t4_ParamLimits

0x4cb7,	// (0x00004cb7) list_ai_message_pane_t4

0x0003,

0xae9a,	// (0x0000ae9a) list_ai_message_pane_t_ParamLimits

0xae9a,	// (0x0000ae9a) list_ai_message_pane_t

0xd3c2,	// (0x0000d3c2) cell_ai_soft_ind_pane_ParamLimits

0xd3c2,	// (0x0000d3c2) cell_ai_soft_ind_pane

0x2702,	// (0x00002702) cell_ai_soft_ind_pane_g1_ParamLimits

0x2702,	// (0x00002702) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x270f,	// (0x0000270f) text_secondary_cp56_ParamLimits

0x270f,	// (0x0000270f) text_secondary_cp56

0x4c28,	// (0x00004c28) example_general_pane_ParamLimits

0x4c28,	// (0x00004c28) example_general_pane

0x4c34,	// (0x00004c34) example_parent_pane_g1_ParamLimits

0x4c34,	// (0x00004c34) example_parent_pane_g1

0x4c40,	// (0x00004c40) example_parent_pane_t1_ParamLimits

0x4c40,	// (0x00004c40) example_parent_pane_t1

0xc855,	// (0x0000c855) popup_preview_text_window_ParamLimits

0xc855,	// (0x0000c855) popup_preview_text_window

0x253a,	// (0x0000253a) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x495f,	// (0x0000495f) popup_preview_text_window_t1_ParamLimits

0x495f,	// (0x0000495f) popup_preview_text_window_t1

0x497d,	// (0x0000497d) popup_preview_text_window_t2_ParamLimits

0x497d,	// (0x0000497d) popup_preview_text_window_t2

0x49c6,	// (0x000049c6) popup_preview_text_window_t3_ParamLimits

0x49c6,	// (0x000049c6) popup_preview_text_window_t3

0x4a0b,	// (0x00004a0b) popup_preview_text_window_t4_ParamLimits

0x4a0b,	// (0x00004a0b) popup_preview_text_window_t4

0x0004,

0xae69,	// (0x0000ae69) popup_preview_text_window_t_ParamLimits

0xae69,	// (0x0000ae69) popup_preview_text_window_t

0x4a89,	// (0x00004a89) scroll_pane_cp11

0x36bb,	// (0x000036bb) bg_popup_preview_window_pane_g1

0x491f,	// (0x0000491f) bg_popup_preview_window_pane_g2

0x4927,	// (0x00004927) bg_popup_preview_window_pane_g3

0x492f,	// (0x0000492f) bg_popup_preview_window_pane_g4

0x4937,	// (0x00004937) bg_popup_preview_window_pane_g5

0x493f,	// (0x0000493f) bg_popup_preview_window_pane_g6

0x4947,	// (0x00004947) bg_popup_preview_window_pane_g7

0x494f,	// (0x0000494f) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc7d1,	// (0x0000c7d1) popup_midp_note_alarm_window_ParamLimits

0xc7d1,	// (0x0000c7d1) popup_midp_note_alarm_window

0x136b,	// (0x0000136b) data_form_pane_ParamLimits

0xbdb5,	// (0x0000bdb5) form_field_data_pane_g1

0xbdbf,	// (0x0000bdbf) form_field_data_pane_t1_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_ParamLimits

0x13a7,	// (0x000013a7) data_form_wide_pane_ParamLimits

0x13b3,	// (0x000013b3) form_field_data_wide_pane_g1

0x13d3,	// (0x000013d3) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbefb,	// (0x0000befb) input_popup_find_pane_g1_ParamLimits

0xbefb,	// (0x0000befb) input_popup_find_pane_g1

0x19b1,	// (0x000019b1) aid_navi_side_left_pane

0x19c6,	// (0x000019c6) aid_navi_side_right_pane

0x41d4,	// (0x000041d4) bg_popup_window_pane_cp30_ParamLimits

0x41d4,	// (0x000041d4) bg_popup_window_pane_cp30

0x424e,	// (0x0000424e) popup_midp_note_alarm_window_g1_ParamLimits

0x424e,	// (0x0000424e) popup_midp_note_alarm_window_g1

0x427e,	// (0x0000427e) popup_midp_note_alarm_window_t1_ParamLimits

0x427e,	// (0x0000427e) popup_midp_note_alarm_window_t1

0x431f,	// (0x0000431f) popup_midp_note_alarm_window_t2_ParamLimits

0x431f,	// (0x0000431f) popup_midp_note_alarm_window_t2

0x43cd,	// (0x000043cd) popup_midp_note_alarm_window_t3_ParamLimits

0x43cd,	// (0x000043cd) popup_midp_note_alarm_window_t3

0x43ff,	// (0x000043ff) popup_midp_note_alarm_window_t4_ParamLimits

0x43ff,	// (0x000043ff) popup_midp_note_alarm_window_t4

0x4425,	// (0x00004425) popup_midp_note_alarm_window_t5_ParamLimits

0x4425,	// (0x00004425) popup_midp_note_alarm_window_t5

0x000a,

0xae06,	// (0x0000ae06) popup_midp_note_alarm_window_t_ParamLimits

0xae06,	// (0x0000ae06) popup_midp_note_alarm_window_t

0x44d1,	// (0x000044d1) wait_bar_pane_cp1_ParamLimits

0x44d1,	// (0x000044d1) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3eba,	// (0x00003eba) wait_border_pane_g1_copy1

0x13ea,	// (0x000013ea) form_field_popup_pane_g1

0xbdd9,	// (0x0000bdd9) form_field_popup_pane_t1_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp7_ParamLimits

0x140a,	// (0x0000140a) list_form_pane_ParamLimits

0x1416,	// (0x00001416) form_field_popup_wide_pane_g1

0x141e,	// (0x0000141e) form_field_popup_wide_pane_t1_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp8_ParamLimits

0x1433,	// (0x00001433) list_form_wide_pane_ParamLimits

0x52ce,	// (0x000052ce) aid_size_cell_graphic_pane

0xbe58,	// (0x0000be58) data_form_pane_t1_ParamLimits

0xd576,	// (0x0000d576) data_form_wide_pane_t1_ParamLimits

0xcc1d,	// (0x0000cc1d) bg_status_flat_pane

0xb663,	// (0x0000b663) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf49f,	// (0x0000f49f) title_pane_t_ParamLimits

0x1cc6,	// (0x00001cc6) level_1_signal_ParamLimits

0x1cd8,	// (0x00001cd8) level_2_signal_ParamLimits

0x1ceb,	// (0x00001ceb) level_3_signal_ParamLimits

0x1cfe,	// (0x00001cfe) level_4_signal_ParamLimits

0x1d11,	// (0x00001d11) level_5_signal_ParamLimits

0x1d24,	// (0x00001d24) level_6_signal_ParamLimits

0x1d37,	// (0x00001d37) level_7_signal_ParamLimits

0x1cc6,	// (0x00001cc6) level_1_battery_ParamLimits

0x1cd8,	// (0x00001cd8) level_2_battery_ParamLimits

0x1ceb,	// (0x00001ceb) level_3_battery_ParamLimits

0x1cfe,	// (0x00001cfe) level_4_battery_ParamLimits

0x1d11,	// (0x00001d11) level_5_battery_ParamLimits

0x1d24,	// (0x00001d24) level_6_battery_ParamLimits

0x1d37,	// (0x00001d37) level_7_battery_ParamLimits

0x40d9,	// (0x000040d9) bg_status_flat_pane_g1

0x40e1,	// (0x000040e1) bg_status_flat_pane_g2

0x40e9,	// (0x000040e9) bg_status_flat_pane_g3

0x40f1,	// (0x000040f1) bg_status_flat_pane_g4

0x40f9,	// (0x000040f9) bg_status_flat_pane_g5

0x4101,	// (0x00004101) bg_status_flat_pane_g6

0x4109,	// (0x00004109) bg_status_flat_pane_g7

0xb6f7,	// (0x0000b6f7) tabs_3_active_pane_t1_ParamLimits

0xb6f7,	// (0x0000b6f7) tabs_3_passive_pane_t1_ParamLimits

0xb711,	// (0x0000b711) tabs_4_active_pane_t1_ParamLimits

0xb711,	// (0x0000b711) tabs_4_1_passive_pane_t1_ParamLimits

0xbf11,	// (0x0000bf11) tabs_2_active_pane_t1_ParamLimits

0xbf11,	// (0x0000bf11) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbf23,	// (0x0000bf23) tabs_2_long_active_pane_t1_ParamLimits

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp4_ParamLimits

0x3790,	// (0x00003790) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbf36,	// (0x0000bf36) tabs_3_long_active_pane_t1_ParamLimits

0x2b7a,	// (0x00002b7a) bg_passive_tab_pane_cp5_ParamLimits

0x3790,	// (0x00003790) list_single_midp_graphic_pane_t1

0xcc1d,	// (0x0000cc1d) bg_status_flat_pane_ParamLimits

0x32b3,	// (0x000032b3) indicator_pane_cp2_ParamLimits

0x32b3,	// (0x000032b3) indicator_pane_cp2

0xcd95,	// (0x0000cd95) navi_pane_srt_ParamLimits

0xcd95,	// (0x0000cd95) navi_pane_srt

0x33fc,	// (0x000033fc) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x2609,	// (0x00002609) copy_highlight_pane

0x2609,	// (0x00002609) cursor_graphics_pane

0x2609,	// (0x00002609) graphic_within_text_pane

0x2609,	// (0x00002609) link_highlight_pane

0x4a4c,	// (0x00004a4c) popup_preview_text_window_t5_ParamLimits

0x4a4c,	// (0x00004a4c) popup_preview_text_window_t5

0x2729,	// (0x00002729) cursor_digital_pane

0x2729,	// (0x00002729) cursor_primary_pane

0x273a,	// (0x0000273a) cursor_primary_small_pane

0x2742,	// (0x00002742) cursor_secondary_pane

0x274a,	// (0x0000274a) cursor_title_pane

0x2729,	// (0x00002729) link_highlight_digital_pane

0x2731,	// (0x00002731) link_highlight_primary_pane

0x273a,	// (0x0000273a) link_highlight_primary_small_pane

0x2742,	// (0x00002742) link_highlight_secondary_pane

0x274a,	// (0x0000274a) link_highlight_title_pane

0x2729,	// (0x00002729) copy_highlight_digital_pane

0x2729,	// (0x00002729) copy_highlight_primary_pane

0x273a,	// (0x0000273a) copy_highlight_primary_small_pane

0x2742,	// (0x00002742) copy_highlight_secondary_pane

0x274a,	// (0x0000274a) copy_highlight_title_pane

0x2742,	// (0x00002742) graphic_text_digital_pane

0x4177,	// (0x00004177) graphic_text_primary_pane

0x4180,	// (0x00004180) graphic_text_primary_small_pane

0x273a,	// (0x0000273a) graphic_text_secondary_pane

0x2729,	// (0x00002729) graphic_text_title_pane

0xc2cd,	// (0x0000c2cd) cursor_primary_pane_g1

0x4169,	// (0x00004169) cursor_text_primary_t1

0xd0aa,	// (0x0000d0aa) cursor_primary_small_pane_g1

0x415b,	// (0x0000415b) cursor_text_primary_small_t1

0xd0a0,	// (0x0000d0a0) cursor_primary_small_pane_g1_copy1

0x4143,	// (0x00004143) cursor_text_primary_small_t1_copy1

0x4121,	// (0x00004121) cursor_text_title_t1

0xd096,	// (0x0000d096) cursor_title_pane_g1

0xc2cd,	// (0x0000c2cd) cursor_digital_pane_g1

0x275c,	// (0x0000275c) cursor_text_digital_t1

0x2781,	// (0x00002781) link_highlight_primary_pane_g1

0x40ca,	// (0x000040ca) link_highlight_primary_pane_t1

0x276a,	// (0x0000276a) link_highlight_primary_small_pane_g1

0x2772,	// (0x00002772) link_highlight_primary_small_pane_t1

0x2781,	// (0x00002781) link_highlight_secondary_pane_g1

0x2789,	// (0x00002789) link_highlight_secondary_pane_t1

0x403e,	// (0x0000403e) link_highlight_title_pane_g1

0x4046,	// (0x00004046) link_highlight_title_pane_t1

0x4027,	// (0x00004027) link_highlight_digital_pane_g1

0x402f,	// (0x0000402f) link_highlight_digital_pane_t1

0x3eff,	// (0x00003eff) copy_highlight_primary_pane_g1

0x3f07,	// (0x00003f07) copy_highlight_primary_pane_t1

0x3ed9,	// (0x00003ed9) copy_highlight_primary_small_pane_g1

0x3ef0,	// (0x00003ef0) copy_highlight_primary_small_pane_t1

0x2798,	// (0x00002798) copy_highlight_secondary_pane_g1

0x27a0,	// (0x000027a0) copy_highlight_secondary_pane_t1

0x3ed9,	// (0x00003ed9) copy_highlight_title_pane_g1

0x3ee1,	// (0x00003ee1) copy_highlight_title_pane_t1

0x3eff,	// (0x00003eff) copy_highlight_digital_pane_g1

0x5550,	// (0x00005550) copy_highlight_digital_pane_t1

0x54a4,	// (0x000054a4) graphic_text_primary_pane_g1

0x5534,	// (0x00005534) graphic_text_primary_pane_t1

0x5542,	// (0x00005542) graphic_text_primary_pane_t2

0x0001,

0xaf35,	// (0x0000af35) graphic_text_primary_pane_t

0x5510,	// (0x00005510) graphic_text_primary_small_pane_g1

0x5518,	// (0x00005518) graphic_text_primary_small_pane_t1

0x5526,	// (0x00005526) graphic_text_primary_small_pane_t2

0x0001,

0xaf30,	// (0x0000af30) graphic_text_primary_small_pane_t

0x54ec,	// (0x000054ec) graphic_text_secondary_pane_g1

0x54f4,	// (0x000054f4) graphic_text_secondary_pane_t1

0x5502,	// (0x00005502) graphic_text_secondary_pane_t2

0x0001,

0xaf2b,	// (0x0000af2b) graphic_text_secondary_pane_t

0x54c8,	// (0x000054c8) graphic_text_title_pane_g1

0x54d0,	// (0x000054d0) graphic_text_title_pane_t1

0x54de,	// (0x000054de) graphic_text_title_pane_t2

0x0001,

0xaf26,	// (0x0000af26) graphic_text_title_pane_t

0x54a4,	// (0x000054a4) graphic_text_digital_pane_g1

0x54ac,	// (0x000054ac) graphic_text_digital_pane_t1

0x54ba,	// (0x000054ba) graphic_text_digital_pane_t2

0x0001,

0xaf21,	// (0x0000af21) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x546f,	// (0x0000546f) navi_navi_icon_text_pane_srt

0x5477,	// (0x00005477) navi_navi_pane_srt_g1_ParamLimits

0x5477,	// (0x00005477) navi_navi_pane_srt_g1

0x5489,	// (0x00005489) navi_navi_pane_srt_g2_ParamLimits

0x5489,	// (0x00005489) navi_navi_pane_srt_g2

0x0001,

0xaf1c,	// (0x0000af1c) navi_navi_pane_srt_g_ParamLimits

0xaf1c,	// (0x0000af1c) navi_navi_pane_srt_g

0x549b,	// (0x0000549b) navi_navi_tabs_pane_srt

0x546f,	// (0x0000546f) navi_navi_text_pane_srt

0x546f,	// (0x0000546f) navi_navi_volume_pane_srt

0x5460,	// (0x00005460) navi_navi_text_pane_srt_t1

0x543b,	// (0x0000543b) navi_navi_volume_pane_srt_g1

0x5443,	// (0x00005443) volume_small_pane_srt_ParamLimits

0x5443,	// (0x00005443) volume_small_pane_srt

0x27af,	// (0x000027af) volume_small_pane_srt_g1_ParamLimits

0x27af,	// (0x000027af) volume_small_pane_srt_g1

0x27bf,	// (0x000027bf) volume_small_pane_srt_g2_ParamLimits

0x27bf,	// (0x000027bf) volume_small_pane_srt_g2

0x27d0,	// (0x000027d0) volume_small_pane_srt_g3_ParamLimits

0x27d0,	// (0x000027d0) volume_small_pane_srt_g3

0x27e1,	// (0x000027e1) volume_small_pane_srt_g4_ParamLimits

0x27e1,	// (0x000027e1) volume_small_pane_srt_g4

0x27f2,	// (0x000027f2) volume_small_pane_srt_g5_ParamLimits

0x27f2,	// (0x000027f2) volume_small_pane_srt_g5

0x2803,	// (0x00002803) volume_small_pane_srt_g6_ParamLimits

0x2803,	// (0x00002803) volume_small_pane_srt_g6

0x2814,	// (0x00002814) volume_small_pane_srt_g7_ParamLimits

0x2814,	// (0x00002814) volume_small_pane_srt_g7

0x2825,	// (0x00002825) volume_small_pane_srt_g8_ParamLimits

0x2825,	// (0x00002825) volume_small_pane_srt_g8

0x2836,	// (0x00002836) volume_small_pane_srt_g9_ParamLimits

0x2836,	// (0x00002836) volume_small_pane_srt_g9

0x2847,	// (0x00002847) volume_small_pane_srt_g10_ParamLimits

0x2847,	// (0x00002847) volume_small_pane_srt_g10

0x0009,

0xaccb,	// (0x0000accb) volume_small_pane_srt_g_ParamLimits

0xaccb,	// (0x0000accb) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x5429,	// (0x00005429) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5429,	// (0x00005429) navi_navi_icon_text_pane_srt_t1

0x4177,	// (0x00004177) navi_tabs_2_long_pane_srt

0x4177,	// (0x00004177) navi_tabs_2_pane_srt

0x4177,	// (0x00004177) navi_tabs_3_long_pane_srt

0x4177,	// (0x00004177) navi_tabs_3_pane_srt

0x4177,	// (0x00004177) navi_tabs_4_pane_srt

0x5401,	// (0x00005401) tabs_2_active_pane_srt_ParamLimits

0x5401,	// (0x00005401) tabs_2_active_pane_srt

0x5411,	// (0x00005411) tabs_2_passive_pane_srt_ParamLimits

0x5411,	// (0x00005411) tabs_2_passive_pane_srt

0x386d,	// (0x0000386d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x386d,	// (0x0000386d) bg_passive_tab_pane_cp1_srt

0x53d5,	// (0x000053d5) bg_passive_tab_pane_g1_cp1_srt

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp1_srt

0x53de,	// (0x000053de) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x53e7,	// (0x000053e7) tabs_2_active_pane_srt_g1

0xd69c,	// (0x0000d69c) tabs_2_active_pane_srt_t1_ParamLimits

0xd69c,	// (0x0000d69c) tabs_2_active_pane_srt_t1

0x53d5,	// (0x000053d5) bg_active_tab_pane_g1_cp1_srt

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp1_srt

0x53de,	// (0x000053de) bg_active_tab_pane_g3_cp1_srt

0x53a2,	// (0x000053a2) tabs_3_active_pane_srt_ParamLimits

0x53a2,	// (0x000053a2) tabs_3_active_pane_srt

0x53b3,	// (0x000053b3) tabs_3_passive_pane_cp_srt_ParamLimits

0x53b3,	// (0x000053b3) tabs_3_passive_pane_cp_srt

0x53c4,	// (0x000053c4) tabs_3_passive_pane_srt_ParamLimits

0x53c4,	// (0x000053c4) tabs_3_passive_pane_srt

0x386d,	// (0x0000386d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x386d,	// (0x0000386d) bg_passive_tab_pane_cp2_srt

0x2858,	// (0x00002858) bg_passive_tab_pane_g1_cp2_srt

0x2115,	// (0x00002115) bg_passive_tab_pane_g2_cp2_srt

0x2861,	// (0x00002861) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x5388,	// (0x00005388) tabs_3_active_pane_srt_g1

0xd686,	// (0x0000d686) tabs_3_active_pane_srt_t1_ParamLimits

0xd686,	// (0x0000d686) tabs_3_active_pane_srt_t1

0x2858,	// (0x00002858) bg_active_tab_pane_g1_cp2_srt

0x2115,	// (0x00002115) bg_active_tab_pane_g2_cp2_srt

0x2861,	// (0x00002861) bg_active_tab_pane_g3_cp2_srt

0x5340,	// (0x00005340) tabs_4_active_pane_srt_ParamLimits

0x5340,	// (0x00005340) tabs_4_active_pane_srt

0x5352,	// (0x00005352) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5352,	// (0x00005352) tabs_4_passive_pane_cp2_srt

0x2b00,	// (0x00002b00) aid_size_cell_toolbar

0x4efc,	// (0x00004efc) main_idle_act_pane_ParamLimits

0x2d23,	// (0x00002d23) popup_large_graphic_colour_window_ParamLimits

0xcae1,	// (0x0000cae1) popup_toolbar_window_ParamLimits

0xcae1,	// (0x0000cae1) popup_toolbar_window

0x5102,	// (0x00005102) list_single_graphic_2heading_pane_ParamLimits

0x5102,	// (0x00005102) list_single_graphic_2heading_pane

0x1a3d,	// (0x00001a3d) aid_size_cell_apps_grid_lsc_pane

0x1a4f,	// (0x00001a4f) aid_size_cell_apps_grid_prt_pane

0x2b7a,	// (0x00002b7a) bg_wml_button_pane_cp1_ParamLimits

0x2b7a,	// (0x00002b7a) bg_wml_button_pane_cp1

0xd035,	// (0x0000d035) form_midp_field_text_pane_t1_ParamLimits

0x386d,	// (0x0000386d) input_focus_pane_cp050_ParamLimits

0x3b71,	// (0x00003b71) list_midp_form_text_pane_ParamLimits

0x3b17,	// (0x00003b17) input_focus_pane_cp051_ParamLimits

0x3b2b,	// (0x00003b2b) list_midp_choice_pane_ParamLimits

0xcfd2,	// (0x0000cfd2) list_single_2graphic_pane_cp3_ParamLimits

0xcfd2,	// (0x0000cfd2) list_single_2graphic_pane_cp3

0xcfe5,	// (0x0000cfe5) list_single_midp_graphic_pane_ParamLimits

0xcfe5,	// (0x0000cfe5) list_single_midp_graphic_pane

0x3553,	// (0x00003553) list_single_graphic_2heading_pane_g1_ParamLimits

0x3553,	// (0x00003553) list_single_graphic_2heading_pane_g1

0x2542,	// (0x00002542) list_single_graphic_2heading_pane_g4_ParamLimits

0x2542,	// (0x00002542) list_single_graphic_2heading_pane_g4

0x355f,	// (0x0000355f) list_single_graphic_2heading_pane_g5_ParamLimits

0x355f,	// (0x0000355f) list_single_graphic_2heading_pane_g5

0x0002,

0xad1e,	// (0x0000ad1e) list_single_graphic_2heading_pane_g_ParamLimits

0xad1e,	// (0x0000ad1e) list_single_graphic_2heading_pane_g

0x356b,	// (0x0000356b) list_single_graphic_2heading_pane_t1_ParamLimits

0x356b,	// (0x0000356b) list_single_graphic_2heading_pane_t1

0x357f,	// (0x0000357f) list_single_graphic_2heading_pane_t2_ParamLimits

0x357f,	// (0x0000357f) list_single_graphic_2heading_pane_t2

0x359b,	// (0x0000359b) list_single_graphic_2heading_pane_t3_ParamLimits

0x359b,	// (0x0000359b) list_single_graphic_2heading_pane_t3

0x0002,

0xad25,	// (0x0000ad25) list_single_graphic_2heading_pane_t_ParamLimits

0xad25,	// (0x0000ad25) list_single_graphic_2heading_pane_t

0x35b3,	// (0x000035b3) bg_popup_sub_pane_cp2

0x35dd,	// (0x000035dd) grid_toobar_pane

0x3619,	// (0x00003619) cell_toolbar_pane_ParamLimits

0x3619,	// (0x00003619) cell_toolbar_pane

0x365f,	// (0x0000365f) cell_toolbar_pane_g1_ParamLimits

0x365f,	// (0x0000365f) cell_toolbar_pane_g1

0x3673,	// (0x00003673) cell_toolbar_pane_g2_ParamLimits

0x3673,	// (0x00003673) cell_toolbar_pane_g2

0x0001,

0xad2c,	// (0x0000ad2c) cell_toolbar_pane_g_ParamLimits

0xad2c,	// (0x0000ad2c) cell_toolbar_pane_g

0x3695,	// (0x00003695) grid_highlight_pane_cp2_ParamLimits

0x3695,	// (0x00003695) grid_highlight_pane_cp2

0x36af,	// (0x000036af) toolbar_button_pane

0x36bb,	// (0x000036bb) toolbar_button_pane_g1

0x36c3,	// (0x000036c3) toolbar_button_pane_g2

0x36cb,	// (0x000036cb) toolbar_button_pane_g3

0x36d3,	// (0x000036d3) toolbar_button_pane_g4

0x36db,	// (0x000036db) toolbar_button_pane_g5

0x36e3,	// (0x000036e3) toolbar_button_pane_g6

0x36eb,	// (0x000036eb) toolbar_button_pane_g7

0x36f3,	// (0x000036f3) toolbar_button_pane_g8

0x36fb,	// (0x000036fb) toolbar_button_pane_g9

0x0009,

0xad31,	// (0x0000ad31) toolbar_button_pane_g

0x370b,	// (0x0000370b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x370b,	// (0x0000370b) list_single_2graphic_pane_g1_cp3

0xcf34,	// (0x0000cf34) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcf34,	// (0x0000cf34) list_single_2graphic_pane_g2_cp3

0x3728,	// (0x00003728) list_single_2graphic_pane_g3_cp3

0x3730,	// (0x00003730) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3730,	// (0x00003730) list_single_2graphic_pane_g4_cp3

0x373c,	// (0x0000373c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x373c,	// (0x0000373c) list_single_2graphic_pane_t1_cp3

0x3784,	// (0x00003784) list_single_midp_graphic_pane_g2_ParamLimits

0x3784,	// (0x00003784) list_single_midp_graphic_pane_g2

0x2b08,	// (0x00002b08) aid_zoom_text_primary

0x2b10,	// (0x00002b10) aid_zoom_text_secondary

0x2915,	// (0x00002915) status_small_pane_g7_ParamLimits

0x2915,	// (0x00002915) status_small_pane_g7

0x2938,	// (0x00002938) status_small_pane_t1_ParamLimits

0xb63f,	// (0x0000b63f) title_pane_g2

0x0003,

0xf496,	// (0x0000f496) title_pane_g

0xb8c7,	// (0x0000b8c7) aid_size_cell_colour_1_pane_ParamLimits

0xb8c7,	// (0x0000b8c7) aid_size_cell_colour_1_pane

0xb8db,	// (0x0000b8db) aid_size_cell_colour_2_pane_ParamLimits

0xb8db,	// (0x0000b8db) aid_size_cell_colour_2_pane

0xb8ef,	// (0x0000b8ef) aid_size_cell_colour_3_pane_ParamLimits

0xb8ef,	// (0x0000b8ef) aid_size_cell_colour_3_pane

0xb903,	// (0x0000b903) aid_size_cell_colour_4_pane_ParamLimits

0xb903,	// (0x0000b903) aid_size_cell_colour_4_pane

0x18b9,	// (0x000018b9) title_pane_stacon_g1_ParamLimits

0x18b9,	// (0x000018b9) title_pane_stacon_g1

0x3f5e,	// (0x00003f5e) popup_note_wait_window_g3_ParamLimits

0x3f5e,	// (0x00003f5e) popup_note_wait_window_g3

0x3fd4,	// (0x00003fd4) popup_note_wait_window_t5_ParamLimits

0x3fd4,	// (0x00003fd4) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc4ef,	// (0x0000c4ef) popup_feb_china_hwr_fs_window_ParamLimits

0xc4ef,	// (0x0000c4ef) popup_feb_china_hwr_fs_window

0xcf45,	// (0x0000cf45) aid_size_cell_hwr_fs_ParamLimits

0xcf45,	// (0x0000cf45) aid_size_cell_hwr_fs

0x386d,	// (0x0000386d) bg_popup_sub_pane_cp3_ParamLimits

0x386d,	// (0x0000386d) bg_popup_sub_pane_cp3

0xcf5a,	// (0x0000cf5a) grid_hwr_fs_pane_ParamLimits

0xcf5a,	// (0x0000cf5a) grid_hwr_fs_pane

0x3891,	// (0x00003891) linegrid_hwr_fs_pane_ParamLimits

0x3891,	// (0x00003891) linegrid_hwr_fs_pane

0xcf72,	// (0x0000cf72) cell_hwr_fs_pane_ParamLimits

0xcf72,	// (0x0000cf72) cell_hwr_fs_pane

0x38c3,	// (0x000038c3) linegrid_hwr_fs_pane_g1_ParamLimits

0x38c3,	// (0x000038c3) linegrid_hwr_fs_pane_g1

0xcf98,	// (0x0000cf98) linegrid_hwr_fs_pane_g2_ParamLimits

0xcf98,	// (0x0000cf98) linegrid_hwr_fs_pane_g2

0x38e1,	// (0x000038e1) linegrid_hwr_fs_pane_g3_ParamLimits

0x38e1,	// (0x000038e1) linegrid_hwr_fs_pane_g3

0x38ed,	// (0x000038ed) linegrid_hwr_fs_pane_g4_ParamLimits

0x38ed,	// (0x000038ed) linegrid_hwr_fs_pane_g4

0x3907,	// (0x00003907) linegrid_hwr_fs_pane_g5_ParamLimits

0x3907,	// (0x00003907) linegrid_hwr_fs_pane_g5

0x0004,

0xf5bf,	// (0x0000f5bf) linegrid_hwr_fs_pane_g_ParamLimits

0xf5bf,	// (0x0000f5bf) linegrid_hwr_fs_pane_g

0x391d,	// (0x0000391d) cell_hwr_fs_pane_g1_ParamLimits

0x391d,	// (0x0000391d) cell_hwr_fs_pane_g1

0x348a,	// (0x0000348a) cell_hwr_fs_pane_g2_ParamLimits

0x348a,	// (0x0000348a) cell_hwr_fs_pane_g2

0xcfaa,	// (0x0000cfaa) cell_hwr_fs_pane_g3_ParamLimits

0xcfaa,	// (0x0000cfaa) cell_hwr_fs_pane_g3

0xcfb7,	// (0x0000cfb7) cell_hwr_fs_pane_g4_ParamLimits

0xcfb7,	// (0x0000cfb7) cell_hwr_fs_pane_g4

0x0003,

0xf5ca,	// (0x0000f5ca) cell_hwr_fs_pane_g_ParamLimits

0xf5ca,	// (0x0000f5ca) cell_hwr_fs_pane_g

0xcfc4,	// (0x0000cfc4) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x166a,	// (0x0000166a) aid_inside_area_popup_secondary

0xd24b,	// (0x0000d24b) aid_inside_area_window_primary_ParamLimits

0xd24b,	// (0x0000d24b) aid_inside_area_window_primary

0x555f,	// (0x0000555f) ai2_news_ticker_pane

0x5567,	// (0x00005567) aid_size_cell_ai1_link_ParamLimits

0x5567,	// (0x00005567) aid_size_cell_ai1_link

0xd6b2,	// (0x0000d6b2) popup_ai2_data_window_ParamLimits

0xd6b2,	// (0x0000d6b2) popup_ai2_data_window

0x5597,	// (0x00005597) popup_ai2_link_window_ParamLimits

0x5597,	// (0x00005597) popup_ai2_link_window

0x386d,	// (0x0000386d) bg_popup_sub_pane_cp4_ParamLimits

0x386d,	// (0x0000386d) bg_popup_sub_pane_cp4

0x55ab,	// (0x000055ab) grid_ai2_link_pane_ParamLimits

0x55ab,	// (0x000055ab) grid_ai2_link_pane

0x55c2,	// (0x000055c2) popup_ai2_link_window_g1_ParamLimits

0x55c2,	// (0x000055c2) popup_ai2_link_window_g1

0x55ce,	// (0x000055ce) popup_ai2_link_window_g2_ParamLimits

0x55ce,	// (0x000055ce) popup_ai2_link_window_g2

0x0001,

0xaf3a,	// (0x0000af3a) popup_ai2_link_window_g_ParamLimits

0xaf3a,	// (0x0000af3a) popup_ai2_link_window_g

0x55dd,	// (0x000055dd) ai2_mp_button_pane

0x55e5,	// (0x000055e5) ai2_mp_volume_pane

0x3b17,	// (0x00003b17) bg_popup_sub_pane_cp5_ParamLimits

0x3b17,	// (0x00003b17) bg_popup_sub_pane_cp5

0x55ed,	// (0x000055ed) heading_ai2_gene_pane_ParamLimits

0x55ed,	// (0x000055ed) heading_ai2_gene_pane

0x55f9,	// (0x000055f9) list_ai2_gene_pane_ParamLimits

0x55f9,	// (0x000055f9) list_ai2_gene_pane

0x5641,	// (0x00005641) cell_ai2_link_pane_ParamLimits

0x5641,	// (0x00005641) cell_ai2_link_pane

0x5657,	// (0x00005657) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5727,	// (0x00005727) ai2_mp_volume_pane_g1

0x572f,	// (0x0000572f) ai2_mp_volume_pane_g2

0xd6dc,	// (0x0000d6dc) list_ai2_gene_pane_t1

0x5737,	// (0x00005737) ai2_mp_volume_pane_g3

0x0002,

0xaf53,	// (0x0000af53) ai2_mp_volume_pane_g

0x573f,	// (0x0000573f) volume_small_pane_cp3

0x5748,	// (0x00005748) aid_size_cell_ai2_button

0x5750,	// (0x00005750) grid_ai2_button_pane

0x5759,	// (0x00005759) cell_ai2_button_pane_ParamLimits

0x5759,	// (0x00005759) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x56e7,	// (0x000056e7) ai2_gene_pane_t1_ParamLimits

0x56e7,	// (0x000056e7) ai2_gene_pane_t1

0xc465,	// (0x0000c465) aid_height_parent_landscape

0xd422,	// (0x0000d422) aid_height_set_list

0x4efc,	// (0x00004efc) aid_size_parent

0x52ce,	// (0x000052ce) aid_size_cell_graphic_pane_ParamLimits

0x5609,	// (0x00005609) popup_ai2_data_window_g1_ParamLimits

0x5609,	// (0x00005609) popup_ai2_data_window_g1

0x5615,	// (0x00005615) ai2_news_ticker_pane_g1

0x561d,	// (0x0000561d) ai2_news_ticker_pane_g2

0x0001,

0xaf3f,	// (0x0000af3f) ai2_news_ticker_pane_g

0x5625,	// (0x00005625) ai2_news_ticker_pane_t1

0x5633,	// (0x00005633) ai2_news_ticker_pane_t2

0x0001,

0xaf44,	// (0x0000af44) ai2_news_ticker_pane_t

0x5660,	// (0x00005660) heading_ai2_gene_pane_g1

0x5668,	// (0x00005668) heading_ai2_gene_pane_t1_ParamLimits

0x5668,	// (0x00005668) heading_ai2_gene_pane_t1

0x567d,	// (0x0000567d) list_highlight_pane_cp6

0xd6c6,	// (0x0000d6c6) ai2_gene_pane_ParamLimits

0xd6c6,	// (0x0000d6c6) ai2_gene_pane

0xd6ea,	// (0x0000d6ea) list_ai2_gene_pane_t2

0x0001,

0xf645,	// (0x0000f645) list_ai2_gene_pane_t

0x56b8,	// (0x000056b8) list_highlight_pane_cp8_ParamLimits

0x56b8,	// (0x000056b8) list_highlight_pane_cp8

0x56c9,	// (0x000056c9) ai2_gene_pane_g1_ParamLimits

0x56c9,	// (0x000056c9) ai2_gene_pane_g1

0x56db,	// (0x000056db) ai2_gene_pane_g2_ParamLimits

0x56db,	// (0x000056db) ai2_gene_pane_g2

0x0001,

0xaf4e,	// (0x0000af4e) ai2_gene_pane_g_ParamLimits

0xaf4e,	// (0x0000af4e) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xc424,	// (0x0000c424) control_pane_t3_ParamLimits

0xc424,	// (0x0000c424) control_pane_t3

0x2929,	// (0x00002929) status_small_pane_g8_ParamLimits

0x2929,	// (0x00002929) status_small_pane_g8

0xc584,	// (0x0000c584) popup_find_window_ParamLimits

0xc80b,	// (0x0000c80b) popup_note_image_window_ParamLimits

0x3553,	// (0x00003553) list_double2_graphic_pane_vc_g1_ParamLimits

0x3553,	// (0x00003553) list_double2_graphic_pane_vc_g1

0x2542,	// (0x00002542) list_double2_graphic_pane_vc_g2_ParamLimits

0x2542,	// (0x00002542) list_double2_graphic_pane_vc_g2

0x355f,	// (0x0000355f) list_double2_graphic_pane_vc_g3_ParamLimits

0x355f,	// (0x0000355f) list_double2_graphic_pane_vc_g3

0x0002,

0xad1e,	// (0x0000ad1e) list_double2_graphic_pane_vc_g_ParamLimits

0xad1e,	// (0x0000ad1e) list_double2_graphic_pane_vc_g

0x3649,	// (0x00003649) list_double2_graphic_pane_vc_t1_ParamLimits

0x3649,	// (0x00003649) list_double2_graphic_pane_vc_t1

0x2542,	// (0x00002542) list_single_heading_pane_vc_g1_ParamLimits

0x2542,	// (0x00002542) list_single_heading_pane_vc_g1

0x355f,	// (0x0000355f) list_single_heading_pane_vc_g2_ParamLimits

0x355f,	// (0x0000355f) list_single_heading_pane_vc_g2

0x0001,

0xad46,	// (0x0000ad46) list_single_heading_pane_vc_g_ParamLimits

0xad46,	// (0x0000ad46) list_single_heading_pane_vc_g

0x3758,	// (0x00003758) list_single_heading_pane_vc_t1_ParamLimits

0x3758,	// (0x00003758) list_single_heading_pane_vc_t1

0x3770,	// (0x00003770) list_single_heading_pane_vc_t2_ParamLimits

0x3770,	// (0x00003770) list_single_heading_pane_vc_t2

0x0001,

0xad4b,	// (0x0000ad4b) list_single_heading_pane_vc_t_ParamLimits

0xad4b,	// (0x0000ad4b) list_single_heading_pane_vc_t

0x37a6,	// (0x000037a6) list_setting_number_pane_vc_g1_ParamLimits

0x37a6,	// (0x000037a6) list_setting_number_pane_vc_g1

0x37b2,	// (0x000037b2) list_setting_number_pane_vc_g2_ParamLimits

0x37b2,	// (0x000037b2) list_setting_number_pane_vc_g2

0x0001,

0xad50,	// (0x0000ad50) list_setting_number_pane_vc_g_ParamLimits

0xad50,	// (0x0000ad50) list_setting_number_pane_vc_g

0x37be,	// (0x000037be) list_setting_number_pane_vc_t1_ParamLimits

0x37be,	// (0x000037be) list_setting_number_pane_vc_t1

0x37d2,	// (0x000037d2) list_setting_number_pane_vc_t2_ParamLimits

0x37d2,	// (0x000037d2) list_setting_number_pane_vc_t2

0x37ee,	// (0x000037ee) list_setting_number_pane_vc_t3_ParamLimits

0x37ee,	// (0x000037ee) list_setting_number_pane_vc_t3

0x0002,

0xad55,	// (0x0000ad55) list_setting_number_pane_vc_t_ParamLimits

0xad55,	// (0x0000ad55) list_setting_number_pane_vc_t

0x381c,	// (0x0000381c) set_value_pane_vc_ParamLimits

0x381c,	// (0x0000381c) set_value_pane_vc

0x5102,	// (0x00005102) list_double2_graphic_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double2_graphic_pane_vc

0x5102,	// (0x00005102) list_double2_large_graphic_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double2_large_graphic_pane_vc

0x5102,	// (0x00005102) list_double2_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double2_pane_vc

0x5102,	// (0x00005102) list_double_graphic_heading_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_graphic_heading_pane_vc

0x5102,	// (0x00005102) list_double_graphic_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_graphic_pane_vc

0x5102,	// (0x00005102) list_double_heading_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_heading_pane_vc

0x5102,	// (0x00005102) list_double_large_graphic_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_large_graphic_pane_vc

0x5102,	// (0x00005102) list_double_number_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_number_pane_vc

0x5102,	// (0x00005102) list_double_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_pane_vc

0x5102,	// (0x00005102) list_double_time_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_double_time_pane_vc

0x5102,	// (0x00005102) list_setting_number_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_setting_number_pane_vc

0x5102,	// (0x00005102) list_setting_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_setting_pane_vc

0x5102,	// (0x00005102) list_single_graphic_heading_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_single_graphic_heading_pane_vc

0x5102,	// (0x00005102) list_single_heading_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_single_heading_pane_vc

0x5102,	// (0x00005102) list_single_number_heading_pane_vc_ParamLimits

0x5102,	// (0x00005102) list_single_number_heading_pane_vc

0x3553,	// (0x00003553) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3553,	// (0x00003553) list_double_graphic_heading_pane_vc_g1

0x578d,	// (0x0000578d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x578d,	// (0x0000578d) list_double_graphic_heading_pane_vc_g2

0x5799,	// (0x00005799) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5799,	// (0x00005799) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaf5a,	// (0x0000af5a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaf5a,	// (0x0000af5a) list_double_graphic_heading_pane_vc_g

0x57a5,	// (0x000057a5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57a5,	// (0x000057a5) list_double_graphic_heading_pane_vc_t1

0x57c1,	// (0x000057c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x57c1,	// (0x000057c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaf61,	// (0x0000af61) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaf61,	// (0x0000af61) list_double_graphic_heading_pane_vc_t

0x37a6,	// (0x000037a6) list_setting_pane_vc_g1_ParamLimits

0x37a6,	// (0x000037a6) list_setting_pane_vc_g1

0x37b2,	// (0x000037b2) list_setting_pane_vc_g2_ParamLimits

0x37b2,	// (0x000037b2) list_setting_pane_vc_g2

0x0001,

0xad50,	// (0x0000ad50) list_setting_pane_vc_g_ParamLimits

0xad50,	// (0x0000ad50) list_setting_pane_vc_g

0x59ec,	// (0x000059ec) list_setting_pane_vc_t1_ParamLimits

0x59ec,	// (0x000059ec) list_setting_pane_vc_t1

0x5a08,	// (0x00005a08) list_setting_pane_vc_t2_ParamLimits

0x5a08,	// (0x00005a08) list_setting_pane_vc_t2

0x0001,

0xaf8f,	// (0x0000af8f) list_setting_pane_vc_t_ParamLimits

0xaf8f,	// (0x0000af8f) list_setting_pane_vc_t

0x381c,	// (0x0000381c) set_value_pane_cp_vc_ParamLimits

0x381c,	// (0x0000381c) set_value_pane_cp_vc

0x2542,	// (0x00002542) list_single_number_heading_pane_vc_g1_ParamLimits

0x2542,	// (0x00002542) list_single_number_heading_pane_vc_g1

0x355f,	// (0x0000355f) list_single_number_heading_pane_vc_g2_ParamLimits

0x355f,	// (0x0000355f) list_single_number_heading_pane_vc_g2

0x0001,

0xad46,	// (0x0000ad46) list_single_number_heading_pane_vc_g_ParamLimits

0xad46,	// (0x0000ad46) list_single_number_heading_pane_vc_g

0x3758,	// (0x00003758) list_single_number_heading_pane_vc_t1_ParamLimits

0x3758,	// (0x00003758) list_single_number_heading_pane_vc_t1

0x5a24,	// (0x00005a24) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a24,	// (0x00005a24) list_single_number_heading_pane_vc_t2

0x5a38,	// (0x00005a38) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a38,	// (0x00005a38) list_single_number_heading_pane_vc_t3

0x0002,

0xaf94,	// (0x0000af94) list_single_number_heading_pane_vc_t_ParamLimits

0xaf94,	// (0x0000af94) list_single_number_heading_pane_vc_t

0x3553,	// (0x00003553) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3553,	// (0x00003553) list_single_graphic_heading_pane_vc_g1

0x2542,	// (0x00002542) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2542,	// (0x00002542) list_single_graphic_heading_pane_vc_g4

0x355f,	// (0x0000355f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x355f,	// (0x0000355f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xad1e,	// (0x0000ad1e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xad1e,	// (0x0000ad1e) list_single_graphic_heading_pane_vc_g

0x3758,	// (0x00003758) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3758,	// (0x00003758) list_single_graphic_heading_pane_vc_t1

0x5a4a,	// (0x00005a4a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a4a,	// (0x00005a4a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf9b,	// (0x0000af9b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf9b,	// (0x0000af9b) list_single_graphic_heading_pane_vc_t

0x2542,	// (0x00002542) list_double2_pane_vc_g1_ParamLimits

0x2542,	// (0x00002542) list_double2_pane_vc_g1

0x355f,	// (0x0000355f) list_double2_pane_vc_g2_ParamLimits

0x355f,	// (0x0000355f) list_double2_pane_vc_g2

0x0001,

0xad46,	// (0x0000ad46) list_double2_pane_vc_g_ParamLimits

0xad46,	// (0x0000ad46) list_double2_pane_vc_g

0x5a5e,	// (0x00005a5e) list_double2_pane_vc_t1_ParamLimits

0x5a5e,	// (0x00005a5e) list_double2_pane_vc_t1

0x5a74,	// (0x00005a74) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5a74,	// (0x00005a74) list_double2_large_graphic_pane_vc_g1

0x2542,	// (0x00002542) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2542,	// (0x00002542) list_double2_large_graphic_pane_vc_g2

0x355f,	// (0x0000355f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x355f,	// (0x0000355f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xafa0,	// (0x0000afa0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xafa0,	// (0x0000afa0) list_double2_large_graphic_pane_vc_g

0x5a80,	// (0x00005a80) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a80,	// (0x00005a80) list_double2_large_graphic_pane_vc_t1

0x5a96,	// (0x00005a96) list_double_time_pane_vc_g1_ParamLimits

0x5a96,	// (0x00005a96) list_double_time_pane_vc_g1

0x5aa2,	// (0x00005aa2) list_double_time_pane_vc_g2_ParamLimits

0x5aa2,	// (0x00005aa2) list_double_time_pane_vc_g2

0x0001,

0xafa7,	// (0x0000afa7) list_double_time_pane_vc_g_ParamLimits

0xafa7,	// (0x0000afa7) list_double_time_pane_vc_g

0x5aae,	// (0x00005aae) list_double_time_pane_vc_t1_ParamLimits

0x5aae,	// (0x00005aae) list_double_time_pane_vc_t1

0x5ad2,	// (0x00005ad2) list_double_time_pane_vc_t2_ParamLimits

0x5ad2,	// (0x00005ad2) list_double_time_pane_vc_t2

0x5b01,	// (0x00005b01) list_double_time_pane_vc_t3_ParamLimits

0x5b01,	// (0x00005b01) list_double_time_pane_vc_t3

0x5b13,	// (0x00005b13) list_double_time_pane_vc_t4_ParamLimits

0x5b13,	// (0x00005b13) list_double_time_pane_vc_t4

0x0003,

0xafac,	// (0x0000afac) list_double_time_pane_vc_t_ParamLimits

0xafac,	// (0x0000afac) list_double_time_pane_vc_t

0x2542,	// (0x00002542) list_double_pane_vc_g1_ParamLimits

0x2542,	// (0x00002542) list_double_pane_vc_g1

0x355f,	// (0x0000355f) list_double_pane_vc_g2_ParamLimits

0x355f,	// (0x0000355f) list_double_pane_vc_g2

0x0001,

0xad46,	// (0x0000ad46) list_double_pane_vc_g_ParamLimits

0xad46,	// (0x0000ad46) list_double_pane_vc_g

0x5b27,	// (0x00005b27) list_double_pane_vc_t1_ParamLimits

0x5b27,	// (0x00005b27) list_double_pane_vc_t1

0x5b3b,	// (0x00005b3b) list_double_pane_vc_t2_ParamLimits

0x5b3b,	// (0x00005b3b) list_double_pane_vc_t2

0x0001,

0xafb5,	// (0x0000afb5) list_double_pane_vc_t_ParamLimits

0xafb5,	// (0x0000afb5) list_double_pane_vc_t

0x2542,	// (0x00002542) list_double_number_pane_vc_g1_ParamLimits

0x2542,	// (0x00002542) list_double_number_pane_vc_g1

0x355f,	// (0x0000355f) list_double_number_pane_vc_g2_ParamLimits

0x355f,	// (0x0000355f) list_double_number_pane_vc_g2

0x0001,

0xad46,	// (0x0000ad46) list_double_number_pane_vc_g_ParamLimits

0xad46,	// (0x0000ad46) list_double_number_pane_vc_g

0x5b53,	// (0x00005b53) list_double_number_pane_vc_t1_ParamLimits

0x5b53,	// (0x00005b53) list_double_number_pane_vc_t1

0x5b67,	// (0x00005b67) list_double_number_pane_vc_t2_ParamLimits

0x5b67,	// (0x00005b67) list_double_number_pane_vc_t2

0x5b7b,	// (0x00005b7b) list_double_number_pane_vc_t3_ParamLimits

0x5b7b,	// (0x00005b7b) list_double_number_pane_vc_t3

0x0002,

0xafba,	// (0x0000afba) list_double_number_pane_vc_t_ParamLimits

0xafba,	// (0x0000afba) list_double_number_pane_vc_t

0x5b93,	// (0x00005b93) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b93,	// (0x00005b93) list_double_large_graphic_pane_vc_g1

0x5ba4,	// (0x00005ba4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ba4,	// (0x00005ba4) list_double_large_graphic_pane_vc_g2

0x355f,	// (0x0000355f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x355f,	// (0x0000355f) list_double_large_graphic_pane_vc_g3

0x5bb3,	// (0x00005bb3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bb3,	// (0x00005bb3) list_double_large_graphic_pane_vc_g4

0x0003,

0xafc1,	// (0x0000afc1) list_double_large_graphic_pane_vc_g_ParamLimits

0xafc1,	// (0x0000afc1) list_double_large_graphic_pane_vc_g

0x5bbf,	// (0x00005bbf) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bbf,	// (0x00005bbf) list_double_large_graphic_pane_vc_t1

0x5bd8,	// (0x00005bd8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5bd8,	// (0x00005bd8) list_double_large_graphic_pane_vc_t2

0x0001,

0xafca,	// (0x0000afca) list_double_large_graphic_pane_vc_t_ParamLimits

0xafca,	// (0x0000afca) list_double_large_graphic_pane_vc_t

0x578d,	// (0x0000578d) list_double_heading_pane_vc_g1_ParamLimits

0x578d,	// (0x0000578d) list_double_heading_pane_vc_g1

0x5799,	// (0x00005799) list_double_heading_pane_vc_g2_ParamLimits

0x5799,	// (0x00005799) list_double_heading_pane_vc_g2

0x0001,

0xafcf,	// (0x0000afcf) list_double_heading_pane_vc_g_ParamLimits

0xafcf,	// (0x0000afcf) list_double_heading_pane_vc_g

0x5bf1,	// (0x00005bf1) list_double_heading_pane_vc_t1_ParamLimits

0x5bf1,	// (0x00005bf1) list_double_heading_pane_vc_t1

0x3758,	// (0x00003758) list_double_heading_pane_vc_t2_ParamLimits

0x3758,	// (0x00003758) list_double_heading_pane_vc_t2

0x0001,

0xafd4,	// (0x0000afd4) list_double_heading_pane_vc_t_ParamLimits

0xafd4,	// (0x0000afd4) list_double_heading_pane_vc_t

0x3553,	// (0x00003553) list_double_graphic_pane_vc_g1_ParamLimits

0x3553,	// (0x00003553) list_double_graphic_pane_vc_g1

0x5c05,	// (0x00005c05) list_double_graphic_pane_vc_g2_ParamLimits

0x5c05,	// (0x00005c05) list_double_graphic_pane_vc_g2

0x57eb,	// (0x000057eb) list_double_graphic_pane_vc_g3_ParamLimits

0x57eb,	// (0x000057eb) list_double_graphic_pane_vc_g3

0x0002,

0xafd9,	// (0x0000afd9) list_double_graphic_pane_vc_g_ParamLimits

0xafd9,	// (0x0000afd9) list_double_graphic_pane_vc_g

0x5c14,	// (0x00005c14) list_double_graphic_pane_vc_t1_ParamLimits

0x5c14,	// (0x00005c14) list_double_graphic_pane_vc_t1

0x5c28,	// (0x00005c28) list_double_graphic_pane_vc_t2_ParamLimits

0x5c28,	// (0x00005c28) list_double_graphic_pane_vc_t2

0x0001,

0xafe0,	// (0x0000afe0) list_double_graphic_pane_vc_t_ParamLimits

0xafe0,	// (0x0000afe0) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb48b,	// (0x0000b48b) aid_size_cell_touch_ParamLimits

0xb48b,	// (0x0000b48b) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb5d6,	// (0x0000b5d6) touch_pane_ParamLimits

0xb5d6,	// (0x0000b5d6) touch_pane

0x12b3,	// (0x000012b3) button_value_adjust_pane_cp2

0x12bb,	// (0x000012bb) button_value_adjust_pane_cp4

0x12dd,	// (0x000012dd) form_field_data_pane_cp2

0xbd7c,	// (0x0000bd7c) form_field_data_wide_pane_cp2

0x1b1b,	// (0x00001b1b) bg_scroll_pane_ParamLimits

0x1b3a,	// (0x00001b3a) scroll_handle_pane_ParamLimits

0x1b4e,	// (0x00001b4e) scroll_sc2_down_pane_ParamLimits

0x1b4e,	// (0x00001b4e) scroll_sc2_down_pane

0x1b75,	// (0x00001b75) scroll_sc2_up_pane_ParamLimits

0x1b75,	// (0x00001b75) scroll_sc2_up_pane

0xd814,	// (0x0000d814) grid_wheel_folder_pane_g1_ParamLimits

0xd814,	// (0x0000d814) grid_wheel_folder_pane_g1

0x225c,	// (0x0000225c) clock_nsta_pane_cp2_ParamLimits

0x225c,	// (0x0000225c) clock_nsta_pane_cp2

0x2b7a,	// (0x00002b7a) listscroll_midp_pane_ParamLimits

0xc236,	// (0x0000c236) midp_canvas_pane

0x2aee,	// (0x00002aee) nsta_clock_indic_pane

0x2b4c,	// (0x00002b4c) listscroll_form_pane_vc

0x2b68,	// (0x00002b68) listscroll_set_pane_vc_ParamLimits

0x2b68,	// (0x00002b68) listscroll_set_pane_vc

0xcc45,	// (0x0000cc45) clock_nsta_pane

0xcc6f,	// (0x0000cc6f) indicator_nsta_pane

0x35b3,	// (0x000035b3) bg_popup_sub_pane_cp2_ParamLimits

0x35c7,	// (0x000035c7) find_pane_cp2_ParamLimits

0x35c7,	// (0x000035c7) find_pane_cp2

0x35dd,	// (0x000035dd) grid_toobar_pane_ParamLimits

0x382c,	// (0x0000382c) list_form_gen_pane_vc_ParamLimits

0x382c,	// (0x0000382c) list_form_gen_pane_vc

0x3842,	// (0x00003842) scroll_pane_cp8_vc_ParamLimits

0x3842,	// (0x00003842) scroll_pane_cp8_vc

0x395b,	// (0x0000395b) data_form_wide_pane_vc_ParamLimits

0x395b,	// (0x0000395b) data_form_wide_pane_vc

0x3967,	// (0x00003967) form_field_data_wide_pane_vc_g1

0x396f,	// (0x0000396f) form_field_data_wide_pane_vc_t1_ParamLimits

0x396f,	// (0x0000396f) form_field_data_wide_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_cp6_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp6_vc

0xd06e,	// (0x0000d06e) list_midp_pane_ParamLimits

0x5334,	// (0x00005334) scroll_pane_cp16_ParamLimits

0x5334,	// (0x00005334) scroll_pane_cp16

0x3d33,	// (0x00003d33) button_value_adjust_pane_ParamLimits

0x3d33,	// (0x00003d33) button_value_adjust_pane

0xd433,	// (0x0000d433) button_value_adjust_pane_cp6_ParamLimits

0xd433,	// (0x0000d433) button_value_adjust_pane_cp6

0xd54d,	// (0x0000d54d) settings_code_pane_cp_ParamLimits

0xd54d,	// (0x0000d54d) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xac71,	// (0x0000ac71) cell_touch_pane_g

0xd6f8,	// (0x0000d6f8) cell_touch_pane_cp_ParamLimits

0xd6f8,	// (0x0000d6f8) cell_touch_pane_cp

0xd714,	// (0x0000d714) cell_touch_pane_ParamLimits

0xd714,	// (0x0000d714) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x57df,	// (0x000057df) list_set_graphic_pane_vc_g1_ParamLimits

0x57df,	// (0x000057df) list_set_graphic_pane_vc_g1

0x57eb,	// (0x000057eb) list_set_graphic_pane_vc_g2_ParamLimits

0x57eb,	// (0x000057eb) list_set_graphic_pane_vc_g2

0x0001,

0xaf66,	// (0x0000af66) list_set_graphic_pane_vc_g_ParamLimits

0xaf66,	// (0x0000af66) list_set_graphic_pane_vc_g

0x57f7,	// (0x000057f7) text_primary_small_cp13_vc_ParamLimits

0x57f7,	// (0x000057f7) text_primary_small_cp13_vc

0x580f,	// (0x0000580f) list_set_graphic_pane_vc_ParamLimits

0x580f,	// (0x0000580f) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05d9,	// (0x000005d9) setting_code_pane_vc_t1

0x5821,	// (0x00005821) set_text_pane_vc_t1_ParamLimits

0x5821,	// (0x00005821) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x583d,	// (0x0000583d) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_vc_g1

0x5847,	// (0x00005847) setting_slider_graphic_pane_vc_t1

0x5857,	// (0x00005857) setting_slider_graphic_pane_vc_t2

0x0001,

0xaf6b,	// (0x0000af6b) setting_slider_graphic_pane_vc_t

0x5867,	// (0x00005867) slider_set_pane_cp_vc

0x586f,	// (0x0000586f) slider_set_pane_vc_g1

0x5878,	// (0x00005878) slider_set_pane_vc_g2

0x0006,

0xaf70,	// (0x0000af70) slider_set_pane_vc_g

0x14c2,	// (0x000014c2) set_opt_bg_pane_g1_copy1

0x14ca,	// (0x000014ca) set_opt_bg_pane_g2_copy1

0x58a4,	// (0x000058a4) set_opt_bg_pane_g3_copy1

0x14da,	// (0x000014da) set_opt_bg_pane_g4_copy1

0x14e2,	// (0x000014e2) set_opt_bg_pane_g5_copy1

0x14ea,	// (0x000014ea) set_opt_bg_pane_g6_copy1

0x58ae,	// (0x000058ae) set_opt_bg_pane_g7_copy1

0x58b6,	// (0x000058b6) set_opt_bg_pane_g8_copy1

0x58c0,	// (0x000058c0) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x58ca,	// (0x000058ca) setting_slider_pane_vc_t1

0x58d9,	// (0x000058d9) setting_slider_pane_vc_t2

0x58e9,	// (0x000058e9) setting_slider_pane_vc_t3

0x0002,

0xaf7f,	// (0x0000af7f) setting_slider_pane_vc_t

0x58f9,	// (0x000058f9) slider_set_pane_vc

0x4574,	// (0x00004574) volume_set_pane_vc_g1

0x457d,	// (0x0000457d) volume_set_pane_vc_g2

0x4586,	// (0x00004586) volume_set_pane_vc_g3

0x458f,	// (0x0000458f) volume_set_pane_vc_g4

0x4598,	// (0x00004598) volume_set_pane_vc_g5

0x45a1,	// (0x000045a1) volume_set_pane_vc_g6

0x45aa,	// (0x000045aa) volume_set_pane_vc_g7

0x45b3,	// (0x000045b3) volume_set_pane_vc_g8

0x45bc,	// (0x000045bc) volume_set_pane_vc_g9

0x45c5,	// (0x000045c5) volume_set_pane_vc_g10

0x0009,

0xae1d,	// (0x0000ae1d) volume_set_pane_vc_g

0x5901,	// (0x00005901) volume_set_pane_vc

0x5909,	// (0x00005909) button_value_adjust_pane_cp1_vc

0x5913,	// (0x00005913) list_highlight_pane_cp2_vc

0x591c,	// (0x0000591c) list_set_pane_vc_ParamLimits

0x591c,	// (0x0000591c) list_set_pane_vc

0x597a,	// (0x0000597a) main_pane_set_vc_t1_ParamLimits

0x597a,	// (0x0000597a) main_pane_set_vc_t1

0x598f,	// (0x0000598f) main_pane_set_vc_t2_ParamLimits

0x598f,	// (0x0000598f) main_pane_set_vc_t2

0x59a1,	// (0x000059a1) main_pane_set_vc_t3_ParamLimits

0x59a1,	// (0x000059a1) main_pane_set_vc_t3

0x59b5,	// (0x000059b5) main_pane_set_vc_t4_ParamLimits

0x59b5,	// (0x000059b5) main_pane_set_vc_t4

0x0003,

0xaf86,	// (0x0000af86) main_pane_set_vc_t_ParamLimits

0xaf86,	// (0x0000af86) main_pane_set_vc_t

0x59c9,	// (0x000059c9) setting_code_pane_vc_ParamLimits

0x59c9,	// (0x000059c9) setting_code_pane_vc

0x59da,	// (0x000059da) setting_slider_graphic_pane_vc

0x59da,	// (0x000059da) setting_slider_pane_vc

0x59da,	// (0x000059da) setting_text_pane_vc

0x59da,	// (0x000059da) setting_volume_pane_vc

0x59e4,	// (0x000059e4) scroll_pane_cp121_vc

0x12a1,	// (0x000012a1) set_content_pane_vc

0x5c40,	// (0x00005c40) button_value_adjust_pane_g1

0x5c49,	// (0x00005c49) button_value_adjust_pane_g2

0x0001,

0xafe5,	// (0x0000afe5) button_value_adjust_pane_g

0x5c52,	// (0x00005c52) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c52,	// (0x00005c52) form_field_slider_wide_pane_vc_t1

0x5c66,	// (0x00005c66) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c66,	// (0x00005c66) form_field_slider_wide_pane_vc_t2

0x0002,

0xafea,	// (0x0000afea) form_field_slider_wide_pane_vc_t_ParamLimits

0xafea,	// (0x0000afea) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5c94,	// (0x00005c94) slider_cont_pane_cp1_vc_ParamLimits

0x5c94,	// (0x00005c94) slider_cont_pane_cp1_vc

0x5ca6,	// (0x00005ca6) slider_form_pane_g1_cp2

0x5878,	// (0x00005878) slider_form_pane_g2_cp2

0x5cd3,	// (0x00005cd3) form_field_slider_pane_vc_t3

0x5ce1,	// (0x00005ce1) form_field_slider_pane_vc_t4

0x5cef,	// (0x00005cef) slider_form_pane_vc_ParamLimits

0x5cef,	// (0x00005cef) slider_form_pane_vc

0x5cfc,	// (0x00005cfc) form_field_slider_pane_vc_t1_ParamLimits

0x5cfc,	// (0x00005cfc) form_field_slider_pane_vc_t1

0x5c66,	// (0x00005c66) form_field_slider_pane_vc_t2_ParamLimits

0x5c66,	// (0x00005c66) form_field_slider_pane_vc_t2

0x0001,

0xaffc,	// (0x0000affc) form_field_slider_pane_vc_t_ParamLimits

0xaffc,	// (0x0000affc) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5d18,	// (0x00005d18) slider_cont_pane_vc_ParamLimits

0x5d18,	// (0x00005d18) slider_cont_pane_vc

0x5d2c,	// (0x00005d2c) list_form_graphic_pane_cp_vc_ParamLimits

0x5d2c,	// (0x00005d2c) list_form_graphic_pane_cp_vc

0x3967,	// (0x00003967) form_field_popup_wide_pane_vc_g1

0x5d41,	// (0x00005d41) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5d41,	// (0x00005d41) form_field_popup_wide_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_cp8_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp8_vc

0x5d86,	// (0x00005d86) list_form_wide_pane_vc_ParamLimits

0x5d86,	// (0x00005d86) list_form_wide_pane_vc

0x5d92,	// (0x00005d92) list_form_graphic_pane_vc_g1

0x5d9a,	// (0x00005d9a) list_form_graphic_pane_vc_t1_ParamLimits

0x5d9a,	// (0x00005d9a) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5db6,	// (0x00005db6) list_form_graphic_pane_vc_ParamLimits

0x5db6,	// (0x00005db6) list_form_graphic_pane_vc

0x3967,	// (0x00003967) form_field_popup_pane_vc_g1

0x5dcc,	// (0x00005dcc) form_field_popup_pane_vc_t1_ParamLimits

0x5dcc,	// (0x00005dcc) form_field_popup_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_cp7_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp7_vc

0x5de3,	// (0x00005de3) list_form_pane_vc_ParamLimits

0x5de3,	// (0x00005de3) list_form_pane_vc

0x5def,	// (0x00005def) data_form_pane_vc_t1_ParamLimits

0x5def,	// (0x00005def) data_form_pane_vc_t1

0x14c2,	// (0x000014c2) input_focus_pane_vc_g1

0x14ca,	// (0x000014ca) input_focus_pane_vc_g2

0x14d2,	// (0x000014d2) input_focus_pane_vc_g3

0x14da,	// (0x000014da) input_focus_pane_vc_g4

0x14e2,	// (0x000014e2) input_focus_pane_vc_g5

0x14ea,	// (0x000014ea) input_focus_pane_vc_g6

0x14f2,	// (0x000014f2) input_focus_pane_vc_g7

0x14fa,	// (0x000014fa) input_focus_pane_vc_g8

0x1502,	// (0x00001502) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xabfa,	// (0x0000abfa) input_focus_pane_vc_g

0x395b,	// (0x0000395b) data_form_pane_vc_ParamLimits

0x395b,	// (0x0000395b) data_form_pane_vc

0x3967,	// (0x00003967) form_field_data_pane_vc_g1

0x5e0a,	// (0x00005e0a) form_field_data_pane_vc_t1_ParamLimits

0x5e0a,	// (0x00005e0a) form_field_data_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_vc

0x5e24,	// (0x00005e24) button_value_adjust_pane_cp3_vc

0x5e2c,	// (0x00005e2c) button_value_adjust_pane_cp5_vc

0x5e34,	// (0x00005e34) form_field_data_pane_vc_ParamLimits

0x5e34,	// (0x00005e34) form_field_data_pane_vc

0x5e4b,	// (0x00005e4b) form_field_data_pane_vc_cp2

0x5e53,	// (0x00005e53) form_field_data_wide_pane_vc_ParamLimits

0x5e53,	// (0x00005e53) form_field_data_wide_pane_vc

0x5e69,	// (0x00005e69) form_field_data_wide_pane_vc_cp2

0x5e71,	// (0x00005e71) form_field_popup_pane_vc_ParamLimits

0x5e71,	// (0x00005e71) form_field_popup_pane_vc

0x5e88,	// (0x00005e88) form_field_popup_wide_pane_vc_ParamLimits

0x5e88,	// (0x00005e88) form_field_popup_wide_pane_vc

0x5e9e,	// (0x00005e9e) form_field_slider_pane_vc_ParamLimits

0x5e9e,	// (0x00005e9e) form_field_slider_pane_vc

0x5eb1,	// (0x00005eb1) form_field_slider_wide_pane_vc_ParamLimits

0x5eb1,	// (0x00005eb1) form_field_slider_wide_pane_vc

0xd732,	// (0x0000d732) grid_touch_1_pane_ParamLimits

0xd732,	// (0x0000d732) grid_touch_1_pane

0xd746,	// (0x0000d746) grid_touch_2_pane_ParamLimits

0xd746,	// (0x0000d746) grid_touch_2_pane

0x5f86,	// (0x00005f86) touch_pane_g1_ParamLimits

0x5f86,	// (0x00005f86) touch_pane_g1

0x5ee8,	// (0x00005ee8) cell_app_pane_cp_wide_ParamLimits

0x5ee8,	// (0x00005ee8) cell_app_pane_cp_wide

0x5ef9,	// (0x00005ef9) grid_popup_fast_wide_pane_ParamLimits

0x5ef9,	// (0x00005ef9) grid_popup_fast_wide_pane

0x5f0d,	// (0x00005f0d) scroll_pane_cp19_ParamLimits

0x5f0d,	// (0x00005f0d) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5f21,	// (0x00005f21) listscroll_popup_fast_wide_pane

0x16d6,	// (0x000016d6) grid_indicator_nsta_pane

0x5f29,	// (0x00005f29) clock_nsta_pane_g1

0x5f32,	// (0x00005f32) clock_nsta_pane_t1

0xd770,	// (0x0000d770) cell_indicator_nsta_pane_ParamLimits

0xd770,	// (0x0000d770) cell_indicator_nsta_pane

0x5f86,	// (0x00005f86) cell_indicator_nsta_pane_g1

0xd789,	// (0x0000d789) cell_indicator_nsta_pane_g2

0x0001,

0xf64a,	// (0x0000f64a) cell_indicator_nsta_pane_g

0x5faa,	// (0x00005faa) clock_nsta_pane_cp

0x5fb2,	// (0x00005fb2) indicator_nsta_pane_cp

0x5fba,	// (0x00005fba) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c6a,	// (0x00001c6a) scroll_pane_cp29

0x2189,	// (0x00002189) indicator_nsta_pane_cp2_ParamLimits

0x2189,	// (0x00002189) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3bba,	// (0x00003bba) form_midp_field_text_pane_ParamLimits

0x3d05,	// (0x00003d05) scroll_bar_cp050_ParamLimits

0x6013,	// (0x00006013) cell_indicator_pane_ParamLimits

0x6013,	// (0x00006013) cell_indicator_pane

0x602a,	// (0x0000602a) cell_indicator_pane_g1

0xd79e,	// (0x0000d79e) grid_wheel_folder_pane_ParamLimits

0xd79e,	// (0x0000d79e) grid_wheel_folder_pane

0xd7ac,	// (0x0000d7ac) list_wheel_apps_pane_ParamLimits

0xd7ac,	// (0x0000d7ac) list_wheel_apps_pane

0xd7ba,	// (0x0000d7ba) main_apps_wheel_pane_g1_ParamLimits

0xd7ba,	// (0x0000d7ba) main_apps_wheel_pane_g1

0xd7c6,	// (0x0000d7c6) main_apps_wheel_pane_g2_ParamLimits

0xd7c6,	// (0x0000d7c6) main_apps_wheel_pane_g2

0x0001,

0xf64f,	// (0x0000f64f) main_apps_wheel_pane_g_ParamLimits

0xf64f,	// (0x0000f64f) main_apps_wheel_pane_g

0xd7d4,	// (0x0000d7d4) main_apps_wheel_pane_t1_ParamLimits

0xd7d4,	// (0x0000d7d4) main_apps_wheel_pane_t1

0xd7e8,	// (0x0000d7e8) list_wheel_apps_pane_g1

0xd7f0,	// (0x0000d7f0) list_wheel_apps_pane_g2

0xd7f8,	// (0x0000d7f8) list_wheel_apps_pane_g3

0xd800,	// (0x0000d800) list_wheel_apps_pane_g4

0xd80a,	// (0x0000d80a) list_wheel_apps_pane_g5

0x0004,

0xf654,	// (0x0000f654) list_wheel_apps_pane_g

0x2489,	// (0x00002489) navi_icon_text_pane

0xcb39,	// (0x0000cb39) aid_fill_nsta

0xd821,	// (0x0000d821) navi_icon_text_pane_g1

0x60fb,	// (0x000060fb) navi_icon_text_pane_t1

0xc19c,	// (0x0000c19c) list_set_graphic_pane_t1_ParamLimits

0xc19c,	// (0x0000c19c) list_set_graphic_pane_t1

0x4454,	// (0x00004454) popup_midp_note_alarm_window_t6_ParamLimits

0x4454,	// (0x00004454) popup_midp_note_alarm_window_t6

0x4466,	// (0x00004466) popup_midp_note_alarm_window_t7_ParamLimits

0x4466,	// (0x00004466) popup_midp_note_alarm_window_t7

0x4478,	// (0x00004478) popup_midp_note_alarm_window_t8_ParamLimits

0x4478,	// (0x00004478) popup_midp_note_alarm_window_t8

0x448a,	// (0x0000448a) popup_midp_note_alarm_window_t9_ParamLimits

0x448a,	// (0x0000448a) popup_midp_note_alarm_window_t9

0x449c,	// (0x0000449c) popup_midp_note_alarm_window_t10_ParamLimits

0x449c,	// (0x0000449c) popup_midp_note_alarm_window_t10

0x44ae,	// (0x000044ae) popup_midp_note_alarm_window_t11_ParamLimits

0x44ae,	// (0x000044ae) popup_midp_note_alarm_window_t11

0x44c0,	// (0x000044c0) scroll_pane_cp17_ParamLimits

0x44c0,	// (0x000044c0) scroll_pane_cp17

0x4574,	// (0x00004574) volume_small_pane_cp_g1

0x610d,	// (0x0000610d) volume_small_pane_cp_g2

0x6116,	// (0x00006116) volume_small_pane_cp_g3

0x611f,	// (0x0000611f) volume_small_pane_cp_g4

0x6128,	// (0x00006128) volume_small_pane_cp_g5

0x6131,	// (0x00006131) volume_small_pane_cp_g6

0x613a,	// (0x0000613a) volume_small_pane_cp_g7

0x6143,	// (0x00006143) volume_small_pane_cp_g8

0x614c,	// (0x0000614c) volume_small_pane_cp_g9

0x6155,	// (0x00006155) volume_small_pane_cp_g10

0x26d8,	// (0x000026d8) midp_ticker_pane_g1_ParamLimits

0x26e4,	// (0x000026e4) midp_ticker_pane_g2_ParamLimits

0xacc6,	// (0x0000acc6) midp_ticker_pane_g_ParamLimits

0x26f0,	// (0x000026f0) midp_ticker_pane_t1_ParamLimits

0xcb5d,	// (0x0000cb5d) aid_fill_nsta_2

0x3cf1,	// (0x00003cf1) list_form2_midp_pane

0x50b6,	// (0x000050b6) midp_editing_number_pane_ParamLimits

0x50c5,	// (0x000050c5) midp_ticker_pane_ParamLimits

0x615e,	// (0x0000615e) form2_midp_field_pane

0x6182,	// (0x00006182) scroll_pane_cp51

0x61a2,	// (0x000061a2) form2_midp_button_pane_ParamLimits

0x61a2,	// (0x000061a2) form2_midp_button_pane

0x61b4,	// (0x000061b4) form2_midp_content_pane_ParamLimits

0x61b4,	// (0x000061b4) form2_midp_content_pane

0x61ce,	// (0x000061ce) form2_midp_field_choice_group_pane

0x61d6,	// (0x000061d6) form2_midp_field_pane_g1

0x61de,	// (0x000061de) form2_midp_field_pane_g2

0x61e6,	// (0x000061e6) form2_midp_field_pane_g3

0x61ee,	// (0x000061ee) form2_midp_field_pane_g4

0x0003,

0xb053,	// (0x0000b053) form2_midp_field_pane_g

0x61f6,	// (0x000061f6) form2_midp_gauge_slider_pane

0x61fe,	// (0x000061fe) form2_midp_gauge_wait_pane

0x6206,	// (0x00006206) form2_midp_image_pane_ParamLimits

0x6206,	// (0x00006206) form2_midp_image_pane

0x6221,	// (0x00006221) form2_midp_label_pane_ParamLimits

0x6221,	// (0x00006221) form2_midp_label_pane

0xd849,	// (0x0000d849) form2_midp_label_pane_cp_ParamLimits

0xd849,	// (0x0000d849) form2_midp_label_pane_cp

0x625b,	// (0x0000625b) form2_midp_string_pane_ParamLimits

0x625b,	// (0x0000625b) form2_midp_string_pane

0xd868,	// (0x0000d868) form2_midp_text_pane_ParamLimits

0xd868,	// (0x0000d868) form2_midp_text_pane

0x628a,	// (0x0000628a) form2_midp_time_pane

0x629a,	// (0x0000629a) input_focus_pane_cp51_ParamLimits

0x629a,	// (0x0000629a) input_focus_pane_cp51

0x62b2,	// (0x000062b2) form2_midp_label_pane_t1_ParamLimits

0x62b2,	// (0x000062b2) form2_midp_label_pane_t1

0xd881,	// (0x0000d881) form2_mdip_text_pane_t1_ParamLimits

0xd881,	// (0x0000d881) form2_mdip_text_pane_t1

0x6312,	// (0x00006312) form2_midp_time_pane_t1

0x632d,	// (0x0000632d) form2_midp_gauge_slider_pane_t1

0xd89c,	// (0x0000d89c) form2_midp_gauge_slider_pane_t2

0xd8ae,	// (0x0000d8ae) form2_midp_gauge_slider_pane_t3

0x0002,

0xf664,	// (0x0000f664) form2_midp_gauge_slider_pane_t

0x6363,	// (0x00006363) form2_midp_slider_pane

0x636f,	// (0x0000636f) form2_midp_gauge_wait_pane_t1

0x637d,	// (0x0000637d) form2_midp_wait_pane_ParamLimits

0x637d,	// (0x0000637d) form2_midp_wait_pane

0xd8c0,	// (0x0000d8c0) list_single_2graphic_pane_cp4_ParamLimits

0xd8c0,	// (0x0000d8c0) list_single_2graphic_pane_cp4

0xcfe5,	// (0x0000cfe5) list_single_midp_graphic_pane_cp_ParamLimits

0xcfe5,	// (0x0000cfe5) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x63d7,	// (0x000063d7) list_single_2graphic_pane_g1_cp4

0x63df,	// (0x000063df) list_single_2graphic_pane_g2_cp4

0x63e7,	// (0x000063e7) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x63f6,	// (0x000063f6) list_single_midp_graphic_pane_g4_cp

0x6405,	// (0x00006405) list_single_midp_graphic_pane_t1_cp

0xd8d4,	// (0x0000d8d4) form2_mdip_string_pane_t1_ParamLimits

0xd8d4,	// (0x0000d8d4) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0x2b7a,	// (0x00002b7a) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc889,	// (0x0000c889) popup_preview_window_ParamLimits

0xc889,	// (0x0000c889) popup_preview_window

0x30e2,	// (0x000030e2) popup_touch_info_window_ParamLimits

0x30e2,	// (0x000030e2) popup_touch_info_window

0x3100,	// (0x00003100) popup_touch_menu_window_ParamLimits

0x3100,	// (0x00003100) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6513,	// (0x00006513) list_touch_menu_pane

0x651b,	// (0x0000651b) list_single_touch_menu_pane_ParamLimits

0x651b,	// (0x0000651b) list_single_touch_menu_pane

0x6531,	// (0x00006531) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x653f,	// (0x0000653f) heading_sub_pane

0x6547,	// (0x00006547) list_touch_info_pane_ParamLimits

0x6547,	// (0x00006547) list_touch_info_pane

0x6556,	// (0x00006556) list_single_touch_info_pane_ParamLimits

0x6556,	// (0x00006556) list_single_touch_info_pane

0x6568,	// (0x00006568) list_single_touch_info_pane_t1

0x6576,	// (0x00006576) list_single_touch_info_pane_t2

0x0001,

0xb06a,	// (0x0000b06a) list_single_touch_info_pane_t

0x2609,	// (0x00002609) bg_popup_heading_pane_cp

0x6584,	// (0x00006584) heading_sub_pane_t1

0x386d,	// (0x0000386d) bg_popup_preview_window_pane_cp_ParamLimits

0x386d,	// (0x0000386d) bg_popup_preview_window_pane_cp

0x653f,	// (0x0000653f) heading_preview_pane

0x6547,	// (0x00006547) list_preview_pane_ParamLimits

0x6547,	// (0x00006547) list_preview_pane

0x6592,	// (0x00006592) popup_preview_window_g1

0x6556,	// (0x00006556) list_single_preview_pane_ParamLimits

0x6556,	// (0x00006556) list_single_preview_pane

0x659a,	// (0x0000659a) list_single_preview_pane_g1

0x65a2,	// (0x000065a2) list_single_preview_pane_t1

0x6568,	// (0x00006568) list_single_preview_pane_t2

0x0001,

0xb06f,	// (0x0000b06f) list_single_preview_pane_t

0x65b0,	// (0x000065b0) bg_popup_heading_pane_cp2_ParamLimits

0x65b0,	// (0x000065b0) bg_popup_heading_pane_cp2

0x65c6,	// (0x000065c6) heading_preview_pane_g1

0x65ce,	// (0x000065ce) heading_preview_pane_t1_ParamLimits

0x65ce,	// (0x000065ce) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b63,	// (0x00001b63) scroll_sc2_left_pane

0x1b6c,	// (0x00001b6c) scroll_sc2_right_pane

0x1b8b,	// (0x00001b8b) scroll_bg_pane_g1_ParamLimits

0x1ba0,	// (0x00001ba0) scroll_bg_pane_g2_ParamLimits

0x1bb8,	// (0x00001bb8) scroll_bg_pane_g3_ParamLimits

0xac51,	// (0x0000ac51) scroll_bg_pane_g_ParamLimits

0x1b8b,	// (0x00001b8b) scroll_handle_pane_g1_ParamLimits

0x1bda,	// (0x00001bda) scroll_handle_pane_g2_ParamLimits

0x1bb8,	// (0x00001bb8) scroll_handle_pane_g3_ParamLimits

0xac58,	// (0x0000ac58) scroll_handle_pane_g_ParamLimits

0x2baa,	// (0x00002baa) popup_choice_list_window_ParamLimits

0x2baa,	// (0x00002baa) popup_choice_list_window

0x35bf,	// (0x000035bf) choice_list_pane

0x3687,	// (0x00003687) cell_toolbar_pane_t1

0x36af,	// (0x000036af) toolbar_button_pane_ParamLimits

0x4ade,	// (0x00004ade) ai_gene_pane_1_t2_ParamLimits

0x4ade,	// (0x00004ade) ai_gene_pane_1_t2

0x0001,

0xae79,	// (0x0000ae79) ai_gene_pane_1_t_ParamLimits

0xae79,	// (0x0000ae79) ai_gene_pane_1_t

0x65eb,	// (0x000065eb) scroll_sc2_left_pane_g1

0x65eb,	// (0x000065eb) scroll_sc2_right_pane_g1

0x2b7a,	// (0x00002b7a) bg_popup_sub_pane_cp10

0x65f5,	// (0x000065f5) list_choice_list_pane

0x660e,	// (0x0000660e) list_single_choice_list_pane_ParamLimits

0x660e,	// (0x0000660e) list_single_choice_list_pane

0x6621,	// (0x00006621) list_single_choice_list_pane_g1

0x16a7,	// (0x000016a7) list_single_choice_list_pane_t1_ParamLimits

0x16a7,	// (0x000016a7) list_single_choice_list_pane_t1

0x6629,	// (0x00006629) choice_list_pane_g1

0x6631,	// (0x00006631) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18cd,	// (0x000018cd) title_pane_stacon_g2_ParamLimits

0x18cd,	// (0x000018cd) title_pane_stacon_g2

0x0002,

0xac37,	// (0x0000ac37) title_pane_stacon_g_ParamLimits

0xac37,	// (0x0000ac37) title_pane_stacon_g

0x2609,	// (0x00002609) cursor_press_pane

0xc53c,	// (0x0000c53c) popup_fep_hwr_window_ParamLimits

0xc53c,	// (0x0000c53c) popup_fep_hwr_window

0x2cd0,	// (0x00002cd0) popup_fep_vkb_window_ParamLimits

0x2cd0,	// (0x00002cd0) popup_fep_vkb_window

0x663f,	// (0x0000663f) cursor_press_pane_g1

0x0002,

0xf678,	// (0x0000f678) fep_vkb_side_pane_g_ParamLimits

0x6680,	// (0x00006680) fep_hwr_candidate_pane_ParamLimits

0x6680,	// (0x00006680) fep_hwr_candidate_pane

0x66aa,	// (0x000066aa) fep_hwr_side_pane_ParamLimits

0x66aa,	// (0x000066aa) fep_hwr_side_pane

0x66ca,	// (0x000066ca) fep_hwr_top_pane_ParamLimits

0x66ca,	// (0x000066ca) fep_hwr_top_pane

0x66e2,	// (0x000066e2) fep_hwr_write_pane_ParamLimits

0x66e2,	// (0x000066e2) fep_hwr_write_pane

0xf678,	// (0x0000f678) fep_vkb_side_pane_g

0x671c,	// (0x0000671c) fep_hwr_top_pane_g1

0x672e,	// (0x0000672e) fep_hwr_top_pane_g2

0x6740,	// (0x00006740) fep_hwr_top_pane_g3

0x0002,

0xb074,	// (0x0000b074) fep_hwr_top_pane_g

0x6755,	// (0x00006755) fep_hwr_top_text_pane

0x1d5a,	// (0x00001d5a) fep_hwr_top_text_pane_g1

0x682d,	// (0x0000682d) fep_hwr_top_text_pane_t1

0x687d,	// (0x0000687d) fep_hwr_candidate_pane_g1

0x6af6,	// (0x00006af6) fep_vkb_keypad_pane_g3_ParamLimits

0x6af6,	// (0x00006af6) fep_vkb_keypad_pane_g3

0x6b1e,	// (0x00006b1e) fep_vkb_keypad_pane_g4_ParamLimits

0x6b1e,	// (0x00006b1e) fep_vkb_keypad_pane_g4

0x6b8d,	// (0x00006b8d) fep_vkb_bottom_pane_g2_ParamLimits

0x6b8d,	// (0x00006b8d) fep_vkb_bottom_pane_g2

0x0001,

0xb09f,	// (0x0000b09f) fep_vkb_bottom_pane_g_ParamLimits

0xb09f,	// (0x0000b09f) fep_vkb_bottom_pane_g

0x65eb,	// (0x000065eb) cell_vkb_side_pane_g2

0x0001,

0xb0a9,	// (0x0000b0a9) cell_vkb_side_pane_g

0x6c18,	// (0x00006c18) cell_vkb_side_pane_t1

0x6c26,	// (0x00006c26) cell_vkb_side_pane_t1_copy1

0x65eb,	// (0x000065eb) bg_fep_vkb_candidate_pane_g2

0x6d52,	// (0x00006d52) cell_vkb_candidate_pane_ParamLimits

0x68b1,	// (0x000068b1) aid_size_cell_vkb_ParamLimits

0x68b1,	// (0x000068b1) aid_size_cell_vkb

0x6d52,	// (0x00006d52) cell_vkb_candidate_pane

0x6d86,	// (0x00006d86) bg_popup_fep_shadow_pane_g1

0xd9a5,	// (0x0000d9a5) fep_vkb_bottom_pane_ParamLimits

0xd9a5,	// (0x0000d9a5) fep_vkb_bottom_pane

0x6975,	// (0x00006975) fep_vkb_candidate_pane_ParamLimits

0x6975,	// (0x00006975) fep_vkb_candidate_pane

0xd9ca,	// (0x0000d9ca) fep_vkb_keypad_pane_ParamLimits

0xd9ca,	// (0x0000d9ca) fep_vkb_keypad_pane

0xda06,	// (0x0000da06) fep_vkb_side_pane_ParamLimits

0xda06,	// (0x0000da06) fep_vkb_side_pane

0xda42,	// (0x0000da42) fep_vkb_top_pane_ParamLimits

0xda42,	// (0x0000da42) fep_vkb_top_pane

0x6a4f,	// (0x00006a4f) fep_vkb_top_pane_g1_ParamLimits

0x6a4f,	// (0x00006a4f) fep_vkb_top_pane_g1

0x6a5e,	// (0x00006a5e) fep_vkb_top_pane_g2_ParamLimits

0x6a5e,	// (0x00006a5e) fep_vkb_top_pane_g2

0x6a6d,	// (0x00006a6d) fep_vkb_top_pane_g3_ParamLimits

0x6a6d,	// (0x00006a6d) fep_vkb_top_pane_g3

0x0003,

0xb08f,	// (0x0000b08f) fep_vkb_top_pane_g_ParamLimits

0xb08f,	// (0x0000b08f) fep_vkb_top_pane_g

0x6a8b,	// (0x00006a8b) fep_vkb_top_text_pane_ParamLimits

0x6a8b,	// (0x00006a8b) fep_vkb_top_text_pane

0xda7e,	// (0x0000da7e) fep_vkb_side_pane_g1_ParamLimits

0xda7e,	// (0x0000da7e) fep_vkb_side_pane_g1

0x6ae5,	// (0x00006ae5) grid_vkb_side_pane_ParamLimits

0x6ae5,	// (0x00006ae5) grid_vkb_side_pane

0x6d8e,	// (0x00006d8e) bg_popup_fep_shadow_pane_g2

0x6d97,	// (0x00006d97) bg_popup_fep_shadow_pane_g3

0x6d9f,	// (0x00006d9f) bg_popup_fep_shadow_pane_g4

0x6da8,	// (0x00006da8) bg_popup_fep_shadow_pane_g5

0x6db2,	// (0x00006db2) bg_popup_fep_shadow_pane_g6

0x6dba,	// (0x00006dba) bg_popup_fep_shadow_pane_g7

0x14e2,	// (0x000014e2) bg_popup_fep_shadow_pane_g8

0x6b3c,	// (0x00006b3c) grid_vkb_keypad_number_pane_ParamLimits

0x6b3c,	// (0x00006b3c) grid_vkb_keypad_number_pane

0x6b4c,	// (0x00006b4c) grid_vkb_keypad_pane_ParamLimits

0x6b4c,	// (0x00006b4c) grid_vkb_keypad_pane

0x6b72,	// (0x00006b72) fep_vkb_bottom_pane_g1_ParamLimits

0x6b72,	// (0x00006b72) fep_vkb_bottom_pane_g1

0x6b9b,	// (0x00006b9b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b9b,	// (0x00006b9b) grid_vkb_keypad_bottom_left_pane

0x6bb0,	// (0x00006bb0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6bb0,	// (0x00006bb0) grid_vkb_keypad_bottom_right_pane

0x6bc5,	// (0x00006bc5) fep_vkb_top_text_pane_g1

0xdac5,	// (0x0000dac5) fep_vkb_top_text_pane_t1

0xdad7,	// (0x0000dad7) cell_vkb_side_pane_ParamLimits

0xdad7,	// (0x0000dad7) cell_vkb_side_pane

0x65eb,	// (0x000065eb) cell_vkb_side_pane_g1

0x6c34,	// (0x00006c34) cell_vkb_keypad_pane_ParamLimits

0x6c34,	// (0x00006c34) cell_vkb_keypad_pane

0x6ca9,	// (0x00006ca9) cell_vkb_keypad_pane_g1

0x0008,

0xb0bc,	// (0x0000b0bc) bg_popup_fep_shadow_pane_g

0x65eb,	// (0x000065eb) cell_hwr_side_pane_g1

0x65eb,	// (0x000065eb) cell_hwr_side_pane_g2

0x6cb3,	// (0x00006cb3) cell_vkb_keypad_pane_t1

0xdaed,	// (0x0000daed) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdaed,	// (0x0000daed) cell_vkb_keypad_bottom_left_pane

0xdb02,	// (0x0000db02) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb02,	// (0x0000db02) cell_vkb_keypad_bottom_right_pane

0x65eb,	// (0x000065eb) cell_vkb_keypad_bottom_left_pane_g1

0x65eb,	// (0x000065eb) cell_vkb_keypad_bottom_right_pane_g1

0x6d17,	// (0x00006d17) cell_vkb_keypad_number_pane_ParamLimits

0x6d17,	// (0x00006d17) cell_vkb_keypad_number_pane

0x6d36,	// (0x00006d36) cell_vkb_keypad_number_pane_g1

0x6d40,	// (0x00006d40) cell_vkb_keypad_number_pane_g2

0x6d49,	// (0x00006d49) cell_vkb_keypad_number_pane_g3

0x0002,

0xb0ae,	// (0x0000b0ae) cell_vkb_keypad_number_pane_g

0x6cb3,	// (0x00006cb3) cell_vkb_keypad_number_pane_t1

0x6d6d,	// (0x00006d6d) fep_vkb_candidate_pane_g1

0x0001,

0xb0a9,	// (0x0000b0a9) cell_hwr_side_pane_g

0x6dcc,	// (0x00006dcc) cell_hwr_side_pane_t1

0x6dda,	// (0x00006dda) cell_hwr_side_pane_t1_copy1

0x6a7d,	// (0x00006a7d) cell_hwr_candidate_pane_g1

0x6e2a,	// (0x00006e2a) cell_hwr_candidate_pane_t1

0x65eb,	// (0x000065eb) cell_vkb_candidate_pane_g2

0x6e7e,	// (0x00006e7e) cell_vkb_candidate_pane_t1

0x6647,	// (0x00006647) bg_popup_fep_shadow_pane_ParamLimits

0x6647,	// (0x00006647) bg_popup_fep_shadow_pane

0x66fc,	// (0x000066fc) bg_fep_hwr_top_pane_g4

0x676a,	// (0x0000676a) bg_hwr_side_pane_g1_ParamLimits

0x676a,	// (0x0000676a) bg_hwr_side_pane_g1

0xd95e,	// (0x0000d95e) cell_hwr_side_pane_ParamLimits

0xd95e,	// (0x0000d95e) cell_hwr_side_pane

0x67d8,	// (0x000067d8) fep_hwr_write_pane_g1_ParamLimits

0x67d8,	// (0x000067d8) fep_hwr_write_pane_g1

0x67e5,	// (0x000067e5) fep_hwr_write_pane_g2_ParamLimits

0x67e5,	// (0x000067e5) fep_hwr_write_pane_g2

0x67f2,	// (0x000067f2) fep_hwr_write_pane_g3_ParamLimits

0x67f2,	// (0x000067f2) fep_hwr_write_pane_g3

0xd97e,	// (0x0000d97e) fep_hwr_write_pane_g4_ParamLimits

0xd97e,	// (0x0000d97e) fep_hwr_write_pane_g4

0x0005,

0xf66b,	// (0x0000f66b) fep_hwr_write_pane_g_ParamLimits

0xf66b,	// (0x0000f66b) fep_hwr_write_pane_g

0x66fc,	// (0x000066fc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66fc,	// (0x000066fc) bg_fep_hwr_candidate_pane_g2

0x683b,	// (0x0000683b) cell_hwr_candidate_pane_ParamLimits

0x683b,	// (0x0000683b) cell_hwr_candidate_pane

0x687d,	// (0x0000687d) fep_hwr_candidate_pane_g1_ParamLimits

0x68df,	// (0x000068df) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x68df,	// (0x000068df) bg_popup_fep_shadow_pane_cp2

0x6a7d,	// (0x00006a7d) fep_vkb_top_pane_g4_ParamLimits

0x6a7d,	// (0x00006a7d) fep_vkb_top_pane_g4

0x6ac3,	// (0x00006ac3) fep_vkb_side_pane_g2_ParamLimits

0x6ac3,	// (0x00006ac3) fep_vkb_side_pane_g2

0xbcaa,	// (0x0000bcaa) list_setting_pane_t4_ParamLimits

0xbcaa,	// (0x0000bcaa) list_setting_pane_t4

0xbd24,	// (0x0000bd24) list_setting_number_pane_t5_ParamLimits

0xbd24,	// (0x0000bd24) list_setting_number_pane_t5

0xc01e,	// (0x0000c01e) list_double_heading_pane_cp2_ParamLimits

0xc01e,	// (0x0000c01e) list_double_heading_pane_cp2

0x0fd8,	// (0x00000fd8) list_double_heading_pane_g1_cp2_ParamLimits

0x0fd8,	// (0x00000fd8) list_double_heading_pane_g1_cp2

0x13bf,	// (0x000013bf) list_double_heading_pane_g2_cp2_ParamLimits

0x13bf,	// (0x000013bf) list_double_heading_pane_g2_cp2

0x6e8c,	// (0x00006e8c) list_double_heading_pane_t1_cp2_ParamLimits

0x6e8c,	// (0x00006e8c) list_double_heading_pane_t1_cp2

0x6ea2,	// (0x00006ea2) list_double_heading_pane_t2_cp2_ParamLimits

0x6ea2,	// (0x00006ea2) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6eb4,	// (0x00006eb4) list_preview_fixed_pane

0x6efa,	// (0x00006efa) list_empty_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_empty_pane_fp

0x6efa,	// (0x00006efa) list_single_cale_day_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_single_cale_day_pane_fp

0x6efa,	// (0x00006efa) list_single_graphic_heading_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_single_graphic_heading_pane_fp

0x6efa,	// (0x00006efa) list_single_graphic_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_single_graphic_pane_fp

0x6efa,	// (0x00006efa) list_single_heading_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_single_heading_pane_fp

0x6efa,	// (0x00006efa) list_single_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_single_pane_fp

0x6f0f,	// (0x00006f0f) list_single_pane_fp_g1_ParamLimits

0x6f0f,	// (0x00006f0f) list_single_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2

0x13bf,	// (0x000013bf) list_single_pane_fp_g3_ParamLimits

0x13bf,	// (0x000013bf) list_single_pane_fp_g3

0x6f1b,	// (0x00006f1b) list_single_pane_fp_g4_ParamLimits

0x6f1b,	// (0x00006f1b) list_single_pane_fp_g4

0x0003,

0xb0dd,	// (0x0000b0dd) list_single_pane_fp_g_ParamLimits

0xb0dd,	// (0x0000b0dd) list_single_pane_fp_g

0x6f27,	// (0x00006f27) list_single_pane_fp_t1_ParamLimits

0x6f27,	// (0x00006f27) list_single_pane_fp_t1

0x6f3e,	// (0x00006f3e) list_single_graphic_pane_fp_g1_ParamLimits

0x6f3e,	// (0x00006f3e) list_single_graphic_pane_fp_g1

0x6f0f,	// (0x00006f0f) list_single_graphic_pane_fp_g2_ParamLimits

0x6f0f,	// (0x00006f0f) list_single_graphic_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3

0x13bf,	// (0x000013bf) list_single_graphic_pane_fp_g4_ParamLimits

0x13bf,	// (0x000013bf) list_single_graphic_pane_fp_g4

0x6f1b,	// (0x00006f1b) list_single_graphic_pane_fp_g5_ParamLimits

0x6f1b,	// (0x00006f1b) list_single_graphic_pane_fp_g5

0x0004,

0xb0e6,	// (0x0000b0e6) list_single_graphic_pane_fp_g_ParamLimits

0xb0e6,	// (0x0000b0e6) list_single_graphic_pane_fp_g

0x6f4a,	// (0x00006f4a) list_single_graphic_pane_fp_t1_ParamLimits

0x6f4a,	// (0x00006f4a) list_single_graphic_pane_fp_t1

0x6f3e,	// (0x00006f3e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6f3e,	// (0x00006f3e) list_single_graphic_heading_pane_fp_g1

0x6f0f,	// (0x00006f0f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6f0f,	// (0x00006f0f) list_single_graphic_heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3

0x13bf,	// (0x000013bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13bf,	// (0x000013bf) list_single_graphic_heading_pane_fp_g4

0x6f1b,	// (0x00006f1b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6f1b,	// (0x00006f1b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb0e6,	// (0x0000b0e6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb0e6,	// (0x0000b0e6) list_single_graphic_heading_pane_fp_g

0x6f60,	// (0x00006f60) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f60,	// (0x00006f60) list_single_graphic_heading_pane_fp_t1

0x6f76,	// (0x00006f76) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f76,	// (0x00006f76) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb0f1,	// (0x0000b0f1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb0f1,	// (0x0000b0f1) list_single_graphic_heading_pane_fp_t

0x6f88,	// (0x00006f88) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f88,	// (0x00006f88) list_single_cale_day_pane_fp_g1

0x6fc0,	// (0x00006fc0) list_single_cale_day_pane_fp_g2_ParamLimits

0x6fc0,	// (0x00006fc0) list_single_cale_day_pane_fp_g2

0x6fcc,	// (0x00006fcc) list_single_cale_day_pane_fp_g3_ParamLimits

0x6fcc,	// (0x00006fcc) list_single_cale_day_pane_fp_g3

0x6ff4,	// (0x00006ff4) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ff4,	// (0x00006ff4) list_single_cale_day_pane_fp_g4

0x7018,	// (0x00007018) list_single_cale_day_pane_fp_g5_ParamLimits

0x7018,	// (0x00007018) list_single_cale_day_pane_fp_g5

0x0004,

0xb0f6,	// (0x0000b0f6) list_single_cale_day_pane_fp_g_ParamLimits

0xb0f6,	// (0x0000b0f6) list_single_cale_day_pane_fp_g

0x703c,	// (0x0000703c) list_single_cale_day_pane_fp_t1_ParamLimits

0x703c,	// (0x0000703c) list_single_cale_day_pane_fp_t1

0x7062,	// (0x00007062) list_single_cale_day_pane_fp_t2_ParamLimits

0x7062,	// (0x00007062) list_single_cale_day_pane_fp_t2

0x707b,	// (0x0000707b) list_single_cale_day_pane_fp_t3_ParamLimits

0x707b,	// (0x0000707b) list_single_cale_day_pane_fp_t3

0x0002,

0xb101,	// (0x0000b101) list_single_cale_day_pane_fp_t_ParamLimits

0xb101,	// (0x0000b101) list_single_cale_day_pane_fp_t

0x6f0f,	// (0x00006f0f) list_empty_pane_fp_g1_ParamLimits

0x6f0f,	// (0x00006f0f) list_empty_pane_fp_g1

0x7094,	// (0x00007094) list_empty_pane_fp_t1

0x70a2,	// (0x000070a2) list_empty_pane_fp_t2

0x0001,

0xb108,	// (0x0000b108) list_empty_pane_fp_t

0x6f0f,	// (0x00006f0f) list_single_heading_pane_fp_g1_ParamLimits

0x6f0f,	// (0x00006f0f) list_single_heading_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2

0x13bf,	// (0x000013bf) list_single_heading_pane_fp_g3_ParamLimits

0x13bf,	// (0x000013bf) list_single_heading_pane_fp_g3

0x0002,

0xb10d,	// (0x0000b10d) list_single_heading_pane_fp_g_ParamLimits

0xb10d,	// (0x0000b10d) list_single_heading_pane_fp_g

0x70b0,	// (0x000070b0) list_single_heading_pane_fp_t1_ParamLimits

0x70b0,	// (0x000070b0) list_single_heading_pane_fp_t1

0x70c2,	// (0x000070c2) list_single_heading_pane_fp_t2_ParamLimits

0x70c2,	// (0x000070c2) list_single_heading_pane_fp_t2

0x0001,

0xb114,	// (0x0000b114) list_single_heading_pane_fp_t_ParamLimits

0xb114,	// (0x0000b114) list_single_heading_pane_fp_t

0x1715,	// (0x00001715) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x1752,	// (0x00001752) cell_app_pane_cp2_ParamLimits

0x1752,	// (0x00001752) cell_app_pane_cp2

0x6669,	// (0x00006669) fep_hwr_candidate_drop_down_list_pane

0x6897,	// (0x00006897) fep_hwr_candidate_pane_g3_ParamLimits

0x6897,	// (0x00006897) fep_hwr_candidate_pane_g3

0x68a4,	// (0x000068a4) fep_hwr_candidate_pane_g4_ParamLimits

0x68a4,	// (0x000068a4) fep_hwr_candidate_pane_g4

0x0002,

0xb088,	// (0x0000b088) fep_hwr_candidate_pane_g_ParamLimits

0xb088,	// (0x0000b088) fep_hwr_candidate_pane_g

0x6964,	// (0x00006964) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6964,	// (0x00006964) fep_vkb_candidate_drop_down_list_pane

0x6d75,	// (0x00006d75) fep_vkb_candidate_pane_g3

0x6d7d,	// (0x00006d7d) fep_vkb_candidate_pane_g4

0x0002,

0xb0b5,	// (0x0000b0b5) fep_vkb_candidate_pane_g

0x6a7d,	// (0x00006a7d) cell_hwr_candidate_pane_g1_ParamLimits

0x6de8,	// (0x00006de8) cell_hwr_candidate_pane_g3_ParamLimits

0x6de8,	// (0x00006de8) cell_hwr_candidate_pane_g3

0x6e09,	// (0x00006e09) cell_hwr_candidate_pane_g4_ParamLimits

0x6e09,	// (0x00006e09) cell_hwr_candidate_pane_g4

0x0002,

0xb0cf,	// (0x0000b0cf) cell_hwr_candidate_pane_g_ParamLimits

0xb0cf,	// (0x0000b0cf) cell_hwr_candidate_pane_g

0x6e48,	// (0x00006e48) cell_vkb_candidate_pane_g3_ParamLimits

0x6e48,	// (0x00006e48) cell_vkb_candidate_pane_g3

0x6e63,	// (0x00006e63) cell_vkb_candidate_pane_g4_ParamLimits

0x6e63,	// (0x00006e63) cell_vkb_candidate_pane_g4

0x70d8,	// (0x000070d8) cell_app_pane_cp2_g1_ParamLimits

0x70d8,	// (0x000070d8) cell_app_pane_cp2_g1

0x70f6,	// (0x000070f6) cell_app_pane_cp2_g2_ParamLimits

0x70f6,	// (0x000070f6) cell_app_pane_cp2_g2

0x0001,

0xb119,	// (0x0000b119) cell_app_pane_cp2_g_ParamLimits

0xb119,	// (0x0000b119) cell_app_pane_cp2_g

0x7102,	// (0x00007102) cell_app_pane_cp2_t1_ParamLimits

0x7102,	// (0x00007102) cell_app_pane_cp2_t1

0x1399,	// (0x00001399) grid_highlight_pane_cp1_ParamLimits

0x1399,	// (0x00001399) grid_highlight_pane_cp1

0x7114,	// (0x00007114) cell_hwr_candidate_pane_cp1_ParamLimits

0x7114,	// (0x00007114) cell_hwr_candidate_pane_cp1

0x6a7d,	// (0x00006a7d) fep_hwr_candidate_drop_down_list_pane_g1

0x7133,	// (0x00007133) fep_hwr_candidate_drop_down_list_pane_g2

0x7140,	// (0x00007140) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb11e,	// (0x0000b11e) fep_hwr_candidate_drop_down_list_pane_g

0x714d,	// (0x0000714d) fep_hwr_candidate_drop_down_list_scroll_pane

0x7156,	// (0x00007156) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7156,	// (0x00007156) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7163,	// (0x00007163) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7163,	// (0x00007163) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7170,	// (0x00007170) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7170,	// (0x00007170) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6e48,	// (0x00006e48) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e48,	// (0x00006e48) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e63,	// (0x00006e63) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e63,	// (0x00006e63) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x717d,	// (0x0000717d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x717d,	// (0x0000717d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7198,	// (0x00007198) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7198,	// (0x00007198) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71b3,	// (0x000071b3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71b3,	// (0x000071b3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb125,	// (0x0000b125) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb125,	// (0x0000b125) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x71ce,	// (0x000071ce) cell_vkb_candidate_pane_cp1_ParamLimits

0x71ce,	// (0x000071ce) cell_vkb_candidate_pane_cp1

0x6a7d,	// (0x00006a7d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a7d,	// (0x00006a7d) fep_vkb_candidate_drop_down_list_pane_g1

0x7133,	// (0x00007133) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7133,	// (0x00007133) fep_vkb_candidate_drop_down_list_pane_g2

0x7140,	// (0x00007140) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7140,	// (0x00007140) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb11e,	// (0x0000b11e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb11e,	// (0x0000b11e) fep_vkb_candidate_drop_down_list_pane_g

0x71ee,	// (0x000071ee) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x71ee,	// (0x000071ee) fep_vkb_candidate_drop_down_list_scroll_pane

0x71fb,	// (0x000071fb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71fb,	// (0x000071fb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7208,	// (0x00007208) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7208,	// (0x00007208) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7214,	// (0x00007214) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7214,	// (0x00007214) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6de8,	// (0x00006de8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6de8,	// (0x00006de8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6e09,	// (0x00006e09) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e09,	// (0x00006e09) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7220,	// (0x00007220) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7220,	// (0x00007220) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7241,	// (0x00007241) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7241,	// (0x00007241) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7262,	// (0x00007262) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7262,	// (0x00007262) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb136,	// (0x0000b136) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb136,	// (0x0000b136) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb62c,	// (0x0000b62c) title_pane_g1_ParamLimits

0xb63f,	// (0x0000b63f) title_pane_g2_ParamLimits

0xf496,	// (0x0000f496) title_pane_g_ParamLimits

0x1d4a,	// (0x00001d4a) aid_call2_pane

0x1d52,	// (0x00001d52) aid_call_pane

0x1d5a,	// (0x00001d5a) popup_clock_analogue_window_g1

0x1d5a,	// (0x00001d5a) popup_clock_analogue_window_g2

0x1d62,	// (0x00001d62) popup_clock_analogue_window_g3

0x1d6b,	// (0x00001d6b) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xac66,	// (0x0000ac66) popup_clock_analogue_window_g

0x1d73,	// (0x00001d73) popup_clock_analogue_window_t1

0x1dfe,	// (0x00001dfe) clock_digital_number_pane_ParamLimits

0x1dfe,	// (0x00001dfe) clock_digital_number_pane

0x1e0a,	// (0x00001e0a) clock_digital_number_pane_cp02_ParamLimits

0x1e0a,	// (0x00001e0a) clock_digital_number_pane_cp02

0x1e16,	// (0x00001e16) clock_digital_number_pane_cp03_ParamLimits

0x1e16,	// (0x00001e16) clock_digital_number_pane_cp03

0x1e22,	// (0x00001e22) clock_digital_number_pane_cp04_ParamLimits

0x1e22,	// (0x00001e22) clock_digital_number_pane_cp04

0x1e2e,	// (0x00001e2e) clock_digital_separator_pane_ParamLimits

0x1e2e,	// (0x00001e2e) clock_digital_separator_pane

0x1e3a,	// (0x00001e3a) popup_clock_digital_window_t1_ParamLimits

0x1e3a,	// (0x00001e3a) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xac71,	// (0x0000ac71) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xac71,	// (0x0000ac71) clock_digital_separator_pane_g

0xcb39,	// (0x0000cb39) aid_fill_nsta_ParamLimits

0xcc6f,	// (0x0000cc6f) indicator_nsta_pane_ParamLimits

0x33f4,	// (0x000033f4) popup_clock_analogue_window

0x33f4,	// (0x000033f4) popup_clock_digital_window

0x16d6,	// (0x000016d6) grid_indicator_nsta_pane_ParamLimits

0x5f40,	// (0x00005f40) clock_nsta_pane_t2

0x0001,

0xb008,	// (0x0000b008) clock_nsta_pane_t

0x1b08,	// (0x00001b08) aid_size_max_handle

0xc015,	// (0x0000c015) aid_size_min_handle

0x2609,	// (0x00002609) editor_scroll_pane

0x727d,	// (0x0000727d) ex_editor_pane

0x1683,	// (0x00001683) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1da8,	// (0x00001da8) scroll_pane_cp36

0xc02f,	// (0x0000c02f) list_single_graphic_hl_pane_cp2_ParamLimits

0xc02f,	// (0x0000c02f) list_single_graphic_hl_pane_cp2

0xd5ca,	// (0x0000d5ca) list_single_graphic_hl_pane_ParamLimits

0xd5ca,	// (0x0000d5ca) list_single_graphic_hl_pane

0x7285,	// (0x00007285) aid_size_min_hl_cp1

0x728e,	// (0x0000728e) list_highlight_pane_cp34_ParamLimits

0x728e,	// (0x0000728e) list_highlight_pane_cp34

0x729f,	// (0x0000729f) list_single_graphic_hl_pane_g1_ParamLimits

0x729f,	// (0x0000729f) list_single_graphic_hl_pane_g1

0xdb1d,	// (0x0000db1d) list_single_graphic_hl_pane_g2_ParamLimits

0xdb1d,	// (0x0000db1d) list_single_graphic_hl_pane_g2

0xdb1d,	// (0x0000db1d) list_single_graphic_hl_pane_g3_ParamLimits

0xdb1d,	// (0x0000db1d) list_single_graphic_hl_pane_g3

0x257a,	// (0x0000257a) list_single_graphic_hl_pane_g4_ParamLimits

0x257a,	// (0x0000257a) list_single_graphic_hl_pane_g4

0xdb29,	// (0x0000db29) list_single_graphic_hl_pane_g5_ParamLimits

0xdb29,	// (0x0000db29) list_single_graphic_hl_pane_g5

0x0004,

0xf684,	// (0x0000f684) list_single_graphic_hl_pane_g_ParamLimits

0xf684,	// (0x0000f684) list_single_graphic_hl_pane_g

0xdb3d,	// (0x0000db3d) list_single_graphic_hl_pane_t1_ParamLimits

0xdb3d,	// (0x0000db3d) list_single_graphic_hl_pane_t1

0x72e2,	// (0x000072e2) aid_size_min_hl_cp2

0x72eb,	// (0x000072eb) list_highlight_pane_cp34_cp2_ParamLimits

0x72eb,	// (0x000072eb) list_highlight_pane_cp34_cp2

0x729f,	// (0x0000729f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x729f,	// (0x0000729f) list_single_graphic_hl_pane_g1_cp2

0x72f8,	// (0x000072f8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x72f8,	// (0x000072f8) list_single_graphic_hl_pane_g2_cp2

0xdb53,	// (0x0000db53) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdb53,	// (0x0000db53) list_single_graphic_hl_pane_g3_cp2

0x578d,	// (0x0000578d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x578d,	// (0x0000578d) list_single_graphic_hl_pane_g4_cp2

0x72b8,	// (0x000072b8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72b8,	// (0x000072b8) list_single_graphic_hl_pane_g5_cp2

0xc329,	// (0x0000c329) control_pane_g4_ParamLimits

0xc329,	// (0x0000c329) control_pane_g4

0x2b7a,	// (0x00002b7a) bg_popup_sub_pane_cp10_ParamLimits

0x65f5,	// (0x000065f5) list_choice_list_pane_ParamLimits

0x6604,	// (0x00006604) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6eb4,	// (0x00006eb4) list_preview_fixed_pane_ParamLimits

0x6eca,	// (0x00006eca) list_preview_fixed_pane_cp_ParamLimits

0x6eca,	// (0x00006eca) list_preview_fixed_pane_cp

0x6ed6,	// (0x00006ed6) popup_preview_fixed_window_g1_ParamLimits

0x6ed6,	// (0x00006ed6) popup_preview_fixed_window_g1

0x6ee2,	// (0x00006ee2) popup_preview_fixed_window_g2_ParamLimits

0x6ee2,	// (0x00006ee2) popup_preview_fixed_window_g2

0x0002,

0xb0d6,	// (0x0000b0d6) popup_preview_fixed_window_g_ParamLimits

0xb0d6,	// (0x0000b0d6) popup_preview_fixed_window_g

0x19b1,	// (0x000019b1) aid_navi_side_left_pane_ParamLimits

0x19c6,	// (0x000019c6) aid_navi_side_right_pane_ParamLimits

0x19de,	// (0x000019de) navi_icon_pane_stacon_ParamLimits

0x19f2,	// (0x000019f2) navi_navi_pane_stacon_ParamLimits

0x19de,	// (0x000019de) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x7328,	// (0x00007328) listscroll_text_info_pane

0x7330,	// (0x00007330) list_text_info_pane_ParamLimits

0x7330,	// (0x00007330) list_text_info_pane

0x733f,	// (0x0000733f) scroll_pane_cp24_ParamLimits

0x733f,	// (0x0000733f) scroll_pane_cp24

0xdb61,	// (0x0000db61) list_text_info_pane_t1_ParamLimits

0xdb61,	// (0x0000db61) list_text_info_pane_t1

0xc4af,	// (0x0000c4af) popup_fast_swap2_window_ParamLimits

0xc4af,	// (0x0000c4af) popup_fast_swap2_window

0x738e,	// (0x0000738e) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d1d,	// (0x00003d1d) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x7398,	// (0x00007398) grid_fast2_pane

0x73a2,	// (0x000073a2) listscroll_fast2_pane_g1

0x73aa,	// (0x000073aa) listscroll_fast2_pane_g2

0x0001,

0xb152,	// (0x0000b152) listscroll_fast2_pane_g

0x1683,	// (0x00001683) scroll_pane_cp26

0x73b4,	// (0x000073b4) cell_fast2_pane_ParamLimits

0x73b4,	// (0x000073b4) cell_fast2_pane

0x73c9,	// (0x000073c9) cell_fast2_pane_g1

0x73d2,	// (0x000073d2) cell_fast2_pane_g2

0x73db,	// (0x000073db) cell_fast2_pane_g3

0x0002,

0xb157,	// (0x0000b157) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x7354,	// (0x00007354) list_single_text_info_pane

0x73e3,	// (0x000073e3) eswt_ctrl_button_pane

0x73e3,	// (0x000073e3) eswt_ctrl_canvas_pane

0x73eb,	// (0x000073eb) eswt_ctrl_combo_pane

0x73e3,	// (0x000073e3) eswt_ctrl_default_pane

0x73e3,	// (0x000073e3) eswt_ctrl_label_pane

0x73f3,	// (0x000073f3) eswt_ctrl_wait_pane

0x73fb,	// (0x000073fb) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x741b,	// (0x0000741b) popup_eswt_tasktip_window_ParamLimits

0x741b,	// (0x0000741b) popup_eswt_tasktip_window

0x386d,	// (0x0000386d) bg_popup_window_pane_cp18

0x742c,	// (0x0000742c) eswt_control_pane_g1_ParamLimits

0x742c,	// (0x0000742c) eswt_control_pane_g1

0x7439,	// (0x00007439) eswt_control_pane_g2_ParamLimits

0x7439,	// (0x00007439) eswt_control_pane_g2

0x7446,	// (0x00007446) eswt_control_pane_g3_ParamLimits

0x7446,	// (0x00007446) eswt_control_pane_g3

0x7453,	// (0x00007453) eswt_control_pane_g4_ParamLimits

0x7453,	// (0x00007453) eswt_control_pane_g4

0x0003,

0xb15e,	// (0x0000b15e) eswt_control_pane_g_ParamLimits

0xb15e,	// (0x0000b15e) eswt_control_pane_g

0x1399,	// (0x00001399) bg_button_pane_ParamLimits

0x1399,	// (0x00001399) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x7460,	// (0x00007460) control_button_pane_g1_ParamLimits

0x7460,	// (0x00007460) control_button_pane_g1

0x746c,	// (0x0000746c) control_button_pane_g2_ParamLimits

0x746c,	// (0x0000746c) control_button_pane_g2

0x7478,	// (0x00007478) control_button_pane_g3_ParamLimits

0x7478,	// (0x00007478) control_button_pane_g3

0x0002,

0xb167,	// (0x0000b167) control_button_pane_g_ParamLimits

0xb167,	// (0x0000b167) control_button_pane_g

0x748c,	// (0x0000748c) control_button_pane_t1

0x749a,	// (0x0000749a) control_button_pane_t2

0x0001,

0xb16e,	// (0x0000b16e) control_button_pane_t

0x36bb,	// (0x000036bb) bg_button_pane_g1

0x36c3,	// (0x000036c3) bg_button_pane_g2

0x36cb,	// (0x000036cb) bg_button_pane_g3

0x36d3,	// (0x000036d3) bg_button_pane_g4

0x36db,	// (0x000036db) bg_button_pane_g5

0x36e3,	// (0x000036e3) bg_button_pane_g6

0x36eb,	// (0x000036eb) bg_button_pane_g7

0x36f3,	// (0x000036f3) bg_button_pane_g8

0x36fb,	// (0x000036fb) bg_button_pane_g9

0x0008,

0xadcd,	// (0x0000adcd) bg_button_pane_g

0x65b0,	// (0x000065b0) common_borders_pane_ParamLimits

0x65b0,	// (0x000065b0) common_borders_pane

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy1_ParamLimits

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy1

0x7439,	// (0x00007439) eswt_control_pane_g2_copy1_ParamLimits

0x7439,	// (0x00007439) eswt_control_pane_g2_copy1

0x7446,	// (0x00007446) eswt_control_pane_g3_copy1_ParamLimits

0x7446,	// (0x00007446) eswt_control_pane_g3_copy1

0x7453,	// (0x00007453) eswt_control_pane_g4_copy1_ParamLimits

0x7453,	// (0x00007453) eswt_control_pane_g4_copy1

0x65eb,	// (0x000065eb) bg_eswt_ctrl_canvas_pane_g1

0x65b0,	// (0x000065b0) common_borders_pane_cp2_ParamLimits

0x65b0,	// (0x000065b0) common_borders_pane_cp2

0x65b0,	// (0x000065b0) common_borders_pane_cp3_ParamLimits

0x65b0,	// (0x000065b0) common_borders_pane_cp3

0x74a8,	// (0x000074a8) separator_horizontal_pane

0x74b0,	// (0x000074b0) separator_vertical_pane

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy2_ParamLimits

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy2

0x7439,	// (0x00007439) eswt_control_pane_g2_copy2_ParamLimits

0x7439,	// (0x00007439) eswt_control_pane_g2_copy2

0x7446,	// (0x00007446) eswt_control_pane_g3_copy2_ParamLimits

0x7446,	// (0x00007446) eswt_control_pane_g3_copy2

0x7453,	// (0x00007453) eswt_control_pane_g4_copy2_ParamLimits

0x7453,	// (0x00007453) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x74b9,	// (0x000074b9) separator_horizontal_pane_g1

0x74c2,	// (0x000074c2) separator_horizontal_pane_g2

0x74cb,	// (0x000074cb) separator_horizontal_pane_g3

0x0002,

0xb173,	// (0x0000b173) separator_horizontal_pane_g

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy3_ParamLimits

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy3

0x7439,	// (0x00007439) eswt_control_pane_g2_copy3_ParamLimits

0x7439,	// (0x00007439) eswt_control_pane_g2_copy3

0x7446,	// (0x00007446) eswt_control_pane_g3_copy3_ParamLimits

0x7446,	// (0x00007446) eswt_control_pane_g3_copy3

0x7453,	// (0x00007453) eswt_control_pane_g4_copy3_ParamLimits

0x7453,	// (0x00007453) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x74d4,	// (0x000074d4) separator_vertical_pane_g1

0x74dd,	// (0x000074dd) separator_vertical_pane_g2

0x74e6,	// (0x000074e6) separator_vertical_pane_g3

0x0002,

0xb17a,	// (0x0000b17a) separator_vertical_pane_g

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy4_ParamLimits

0x742c,	// (0x0000742c) eswt_control_pane_g1_copy4

0x7439,	// (0x00007439) eswt_control_pane_g2_copy4_ParamLimits

0x7439,	// (0x00007439) eswt_control_pane_g2_copy4

0x7446,	// (0x00007446) eswt_control_pane_g3_copy4_ParamLimits

0x7446,	// (0x00007446) eswt_control_pane_g3_copy4

0x7453,	// (0x00007453) eswt_control_pane_g4_copy4_ParamLimits

0x7453,	// (0x00007453) eswt_control_pane_g4_copy4

0xdb7c,	// (0x0000db7c) eswt_ctrl_combo_button_pane

0xdb84,	// (0x0000db84) eswt_ctrl_input_pane

0xdb8c,	// (0x0000db8c) popup_choice_list_window_cp70

0xdb94,	// (0x0000db94) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x65b0,	// (0x000065b0) bg_button_pane_cp70_ParamLimits

0x65b0,	// (0x000065b0) bg_button_pane_cp70

0xdba2,	// (0x0000dba2) eswt_ctrl_combo_button_pane_g1

0x751d,	// (0x0000751d) wait_bar_pane_cp70

0x386d,	// (0x0000386d) bg_popup_window_pane_cp70_ParamLimits

0x386d,	// (0x0000386d) bg_popup_window_pane_cp70

0x7525,	// (0x00007525) popup_eswt_tasktip_window_t1

0x753b,	// (0x0000753b) wait_bar_pane_cp71_ParamLimits

0x753b,	// (0x0000753b) wait_bar_pane_cp71

0x7547,	// (0x00007547) grid_eswt_app_pane

0x1b6c,	// (0x00001b6c) scroll_pane_cp70

0xdbaa,	// (0x0000dbaa) cell_eswt_app_pane_ParamLimits

0xdbaa,	// (0x0000dbaa) cell_eswt_app_pane

0xdbd4,	// (0x0000dbd4) cell_eswt_app_pane_g1_ParamLimits

0xdbd4,	// (0x0000dbd4) cell_eswt_app_pane_g1

0xdc03,	// (0x0000dc03) cell_eswt_app_pane_g2_ParamLimits

0xdc03,	// (0x0000dc03) cell_eswt_app_pane_g2

0x0001,

0xf68f,	// (0x0000f68f) cell_eswt_app_pane_g_ParamLimits

0xf68f,	// (0x0000f68f) cell_eswt_app_pane_g

0xdc2c,	// (0x0000dc2c) cell_eswt_app_pane_t1_ParamLimits

0xdc2c,	// (0x0000dc2c) cell_eswt_app_pane_t1

0x760a,	// (0x0000760a) grid_highlight_pane_cp70_ParamLimits

0x760a,	// (0x0000760a) grid_highlight_pane_cp70

0x24de,	// (0x000024de) set_content_pane_g1

0x2952,	// (0x00002952) status_small_volume_pane

0x7616,	// (0x00007616) status_small_volume_pane_g1

0x761e,	// (0x0000761e) volume_small2_pane

0x7627,	// (0x00007627) volume_small2_pane_g1

0x7630,	// (0x00007630) volume_small2_pane_g2

0x7639,	// (0x00007639) volume_small2_pane_g3

0x7642,	// (0x00007642) volume_small2_pane_g4

0x764b,	// (0x0000764b) volume_small2_pane_g5

0x7654,	// (0x00007654) volume_small2_pane_g6

0x765d,	// (0x0000765d) volume_small2_pane_g7

0x7666,	// (0x00007666) volume_small2_pane_g8

0x766f,	// (0x0000766f) volume_small2_pane_g9

0x7678,	// (0x00007678) volume_small2_pane_g10

0x0009,

0xb186,	// (0x0000b186) volume_small2_pane_g

0x6bc5,	// (0x00006bc5) fep_vkb_top_text_pane_g1_ParamLimits

0xdac5,	// (0x0000dac5) fep_vkb_top_text_pane_t1_ParamLimits

0x6eee,	// (0x00006eee) popup_preview_fixed_window_g3_ParamLimits

0x6eee,	// (0x00006eee) popup_preview_fixed_window_g3

0xcacc,	// (0x0000cacc) popup_toolbar_trans_pane

0xd422,	// (0x0000d422) aid_height_set_list_ParamLimits

0x4efc,	// (0x00004efc) aid_size_parent_ParamLimits

0x2b7a,	// (0x00002b7a) list_highlight_pane_cp2_ParamLimits

0x24de,	// (0x000024de) set_content_pane_g1_ParamLimits

0xd5db,	// (0x0000d5db) list_single_image_pane_ParamLimits

0xd5db,	// (0x0000d5db) list_single_image_pane

0xdc5e,	// (0x0000dc5e) aid_size_cell_image_ParamLimits

0xdc5e,	// (0x0000dc5e) aid_size_cell_image

0xdc6b,	// (0x0000dc6b) grid_single_image_pane_ParamLimits

0xdc6b,	// (0x0000dc6b) grid_single_image_pane

0x3784,	// (0x00003784) list_single_image_pane_g1_ParamLimits

0x3784,	// (0x00003784) list_single_image_pane_g1

0x769a,	// (0x0000769a) list_single_image_pane_g2_ParamLimits

0x769a,	// (0x0000769a) list_single_image_pane_g2

0x0001,

0xb19b,	// (0x0000b19b) list_single_image_pane_g_ParamLimits

0xb19b,	// (0x0000b19b) list_single_image_pane_g

0x76ae,	// (0x000076ae) list_single_image_pane_t1_ParamLimits

0x76ae,	// (0x000076ae) list_single_image_pane_t1

0xdc79,	// (0x0000dc79) cell_image_list_pane_ParamLimits

0xdc79,	// (0x0000dc79) cell_image_list_pane

0xdc8f,	// (0x0000dc8f) cell_image_list_pane_g1

0xdc98,	// (0x0000dc98) cell_image_list_pane_g2

0x0001,

0xf694,	// (0x0000f694) cell_image_list_pane_g

0x76ea,	// (0x000076ea) aid_size_cell_tb_trans_pane

0x1399,	// (0x00001399) bg_tb_trans_pane

0x76fc,	// (0x000076fc) grid_tb_trans_pane

0x36bb,	// (0x000036bb) bg_tb_trans_pane_g1

0x36c3,	// (0x000036c3) bg_tb_trans_pane_g2

0x36cb,	// (0x000036cb) bg_tb_trans_pane_g3

0x36d3,	// (0x000036d3) bg_tb_trans_pane_g4

0x36db,	// (0x000036db) bg_tb_trans_pane_g5

0x36f3,	// (0x000036f3) bg_tb_trans_pane_g6

0x36fb,	// (0x000036fb) bg_tb_trans_pane_g7

0x36e3,	// (0x000036e3) bg_tb_trans_pane_g8

0x36eb,	// (0x000036eb) bg_tb_trans_pane_g9

0x0008,

0xb1a5,	// (0x0000b1a5) bg_tb_trans_pane_g

0x7710,	// (0x00007710) cell_toolbar_trans_pane_ParamLimits

0x7710,	// (0x00007710) cell_toolbar_trans_pane

0x65eb,	// (0x000065eb) cell_toolbar_trans_pane_g1

0xd82d,	// (0x0000d82d) list_form2_midp_pane_t1

0xd83b,	// (0x0000d83b) list_form2_midp_pane_t2

0x0001,

0xf65f,	// (0x0000f65f) list_form2_midp_pane_t

0x6182,	// (0x00006182) scroll_pane_cp51_ParamLimits

0x638d,	// (0x0000638d) form2_midp_wait_pane_g1

0x6396,	// (0x00006396) form2_midp_wait_pane_g2

0x639f,	// (0x0000639f) form2_midp_wait_pane_g3

0x0002,

0xb063,	// (0x0000b063) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x63f6,	// (0x000063f6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6405,	// (0x00006405) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5102,	// (0x00005102) list_single_2graphic_im_pane_ParamLimits

0x5102,	// (0x00005102) list_single_2graphic_im_pane

0xdca1,	// (0x0000dca1) list_single_2graphic_im_pane_g1_ParamLimits

0xdca1,	// (0x0000dca1) list_single_2graphic_im_pane_g1

0xdcb2,	// (0x0000dcb2) list_single_2graphic_im_pane_g2_ParamLimits

0xdcb2,	// (0x0000dcb2) list_single_2graphic_im_pane_g2

0xdcbe,	// (0x0000dcbe) list_single_2graphic_im_pane_g3_ParamLimits

0xdcbe,	// (0x0000dcbe) list_single_2graphic_im_pane_g3

0x0003,

0xf699,	// (0x0000f699) list_single_2graphic_im_pane_g_ParamLimits

0xf699,	// (0x0000f699) list_single_2graphic_im_pane_g

0xdcd2,	// (0x0000dcd2) list_single_2graphic_im_pane_t1_ParamLimits

0xdcd2,	// (0x0000dcd2) list_single_2graphic_im_pane_t1

0x6efa,	// (0x00006efa) list_single_graphic_2heading_pane_fp_ParamLimits

0x6efa,	// (0x00006efa) list_single_graphic_2heading_pane_fp

0x6f3e,	// (0x00006f3e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6f3e,	// (0x00006f3e) list_single_graphic_2heading_pane_fp_g1

0x6f0f,	// (0x00006f0f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6f0f,	// (0x00006f0f) list_single_graphic_2heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3

0x13bf,	// (0x000013bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13bf,	// (0x000013bf) list_single_graphic_2heading_pane_fp_g4

0x6f1b,	// (0x00006f1b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6f1b,	// (0x00006f1b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb0e6,	// (0x0000b0e6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb0e6,	// (0x0000b0e6) list_single_graphic_2heading_pane_fp_g

0x77a4,	// (0x000077a4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x77a4,	// (0x000077a4) list_single_graphic_2heading_pane_fp_t1

0x6f76,	// (0x00006f76) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f76,	// (0x00006f76) list_single_graphic_2heading_pane_fp_t2

0x77ba,	// (0x000077ba) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x77ba,	// (0x000077ba) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb1c1,	// (0x0000b1c1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb1c1,	// (0x0000b1c1) list_single_graphic_2heading_pane_fp_t

0x6815,	// (0x00006815) fep_hwr_write_pane_g5_ParamLimits

0x6815,	// (0x00006815) fep_hwr_write_pane_g5

0x6821,	// (0x00006821) fep_hwr_write_pane_g6_ParamLimits

0x6821,	// (0x00006821) fep_hwr_write_pane_g6

0x73fb,	// (0x000073fb) eswt_shell_pane_ParamLimits

0x386d,	// (0x0000386d) bg_popup_window_pane_cp18_ParamLimits

0x4da4,	// (0x00004da4) heading_pane_cp70

0x7525,	// (0x00007525) popup_eswt_tasktip_window_t1_ParamLimits

0xcb94,	// (0x0000cb94) aid_touch_tab_arrow_left

0xcbaa,	// (0x0000cbaa) aid_touch_tab_arrow_right

0xb657,	// (0x0000b657) title_pane_g3_ParamLimits

0xb657,	// (0x0000b657) title_pane_g3

0x1278,	// (0x00001278) set_value_pane_g1

0xcacc,	// (0x0000cacc) popup_toolbar_trans_pane_ParamLimits

0x76ea,	// (0x000076ea) aid_size_cell_tb_trans_pane_ParamLimits

0x1399,	// (0x00001399) bg_tb_trans_pane_ParamLimits

0x76fc,	// (0x000076fc) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3f38,	// (0x00003f38) cont_note_wait_pane_ParamLimits

0x3f38,	// (0x00003f38) cont_note_wait_pane

0x3f38,	// (0x00003f38) cont_note_image_pane_ParamLimits

0x3f38,	// (0x00003f38) cont_note_image_pane

0x77d0,	// (0x000077d0) popup_note2_window_g1_ParamLimits

0x77d0,	// (0x000077d0) popup_note2_window_g1

0x7801,	// (0x00007801) popup_note2_window_t1_ParamLimits

0x7801,	// (0x00007801) popup_note2_window_t1

0x7846,	// (0x00007846) popup_note2_window_t2_ParamLimits

0x7846,	// (0x00007846) popup_note2_window_t2

0x788b,	// (0x0000788b) popup_note2_window_t3_ParamLimits

0x788b,	// (0x0000788b) popup_note2_window_t3

0x78d0,	// (0x000078d0) popup_note2_window_t4_ParamLimits

0x78d0,	// (0x000078d0) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xb1cd,	// (0x0000b1cd) popup_note2_window_t_ParamLimits

0xb1cd,	// (0x0000b1cd) popup_note2_window_t

0x78ff,	// (0x000078ff) popup_note2_image_window_g1_ParamLimits

0x78ff,	// (0x000078ff) popup_note2_image_window_g1

0x790b,	// (0x0000790b) popup_note2_image_window_g2_ParamLimits

0x790b,	// (0x0000790b) popup_note2_image_window_g2

0x0001,

0xb1d8,	// (0x0000b1d8) popup_note2_image_window_g_ParamLimits

0xb1d8,	// (0x0000b1d8) popup_note2_image_window_g

0x791d,	// (0x0000791d) popup_note2_image_window_t1_ParamLimits

0x791d,	// (0x0000791d) popup_note2_image_window_t1

0x7935,	// (0x00007935) popup_note2_image_window_t2_ParamLimits

0x7935,	// (0x00007935) popup_note2_image_window_t2

0x794d,	// (0x0000794d) popup_note2_image_window_t3_ParamLimits

0x794d,	// (0x0000794d) popup_note2_image_window_t3

0x0002,

0xb1dd,	// (0x0000b1dd) popup_note2_image_window_t_ParamLimits

0xb1dd,	// (0x0000b1dd) popup_note2_image_window_t

0x3f46,	// (0x00003f46) popup_note2_wait_window_g1_ParamLimits

0x3f46,	// (0x00003f46) popup_note2_wait_window_g1

0x7969,	// (0x00007969) popup_note2_wait_window_g2_ParamLimits

0x7969,	// (0x00007969) popup_note2_wait_window_g2

0x3f5e,	// (0x00003f5e) popup_note2_wait_window_g3_ParamLimits

0x3f5e,	// (0x00003f5e) popup_note2_wait_window_g3

0x0002,

0xb1e4,	// (0x0000b1e4) popup_note2_wait_window_g_ParamLimits

0xb1e4,	// (0x0000b1e4) popup_note2_wait_window_g

0x7975,	// (0x00007975) popup_note2_wait_window_t1_ParamLimits

0x7975,	// (0x00007975) popup_note2_wait_window_t1

0x7993,	// (0x00007993) popup_note2_wait_window_t2_ParamLimits

0x7993,	// (0x00007993) popup_note2_wait_window_t2

0x79b1,	// (0x000079b1) popup_note2_wait_window_t3_ParamLimits

0x79b1,	// (0x000079b1) popup_note2_wait_window_t3

0x79c3,	// (0x000079c3) popup_note2_wait_window_t4_ParamLimits

0x79c3,	// (0x000079c3) popup_note2_wait_window_t4

0x0003,

0xb1eb,	// (0x0000b1eb) popup_note2_wait_window_t_ParamLimits

0xb1eb,	// (0x0000b1eb) popup_note2_wait_window_t

0x79d5,	// (0x000079d5) wait_bar2_pane_ParamLimits

0x79d5,	// (0x000079d5) wait_bar2_pane

0x79ed,	// (0x000079ed) popup_snote2_single_text_window_g1_ParamLimits

0x79ed,	// (0x000079ed) popup_snote2_single_text_window_g1

0x7a15,	// (0x00007a15) popup_snote2_single_text_window_t1_ParamLimits

0x7a15,	// (0x00007a15) popup_snote2_single_text_window_t1

0x7a61,	// (0x00007a61) popup_snote2_single_text_window_t2_ParamLimits

0x7a61,	// (0x00007a61) popup_snote2_single_text_window_t2

0x7aad,	// (0x00007aad) popup_snote2_single_text_window_t3_ParamLimits

0x7aad,	// (0x00007aad) popup_snote2_single_text_window_t3

0x7aee,	// (0x00007aee) popup_snote2_single_text_window_t4_ParamLimits

0x7aee,	// (0x00007aee) popup_snote2_single_text_window_t4

0x7b24,	// (0x00007b24) popup_snote2_single_text_window_t5_ParamLimits

0x7b24,	// (0x00007b24) popup_snote2_single_text_window_t5

0x0004,

0xb1f4,	// (0x0000b1f4) popup_snote2_single_text_window_t_ParamLimits

0xb1f4,	// (0x0000b1f4) popup_snote2_single_text_window_t

0x7b4f,	// (0x00007b4f) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b4f,	// (0x00007b4f) popup_snote2_single_graphic_window_g1

0x7b77,	// (0x00007b77) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b77,	// (0x00007b77) popup_snote2_single_graphic_window_g2

0x0001,

0xb1ff,	// (0x0000b1ff) popup_snote2_single_graphic_window_g_ParamLimits

0xb1ff,	// (0x0000b1ff) popup_snote2_single_graphic_window_g

0x7b9f,	// (0x00007b9f) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b9f,	// (0x00007b9f) popup_snote2_single_graphic_window_t1

0x7beb,	// (0x00007beb) popup_snote2_single_graphic_window_t2_ParamLimits

0x7beb,	// (0x00007beb) popup_snote2_single_graphic_window_t2

0x7aad,	// (0x00007aad) popup_snote2_single_graphic_window_t3_ParamLimits

0x7aad,	// (0x00007aad) popup_snote2_single_graphic_window_t3

0x7aee,	// (0x00007aee) popup_snote2_single_graphic_window_t4_ParamLimits

0x7aee,	// (0x00007aee) popup_snote2_single_graphic_window_t4

0x7b24,	// (0x00007b24) popup_snote2_single_graphic_window_t5_ParamLimits

0x7b24,	// (0x00007b24) popup_snote2_single_graphic_window_t5

0x0004,

0xb204,	// (0x0000b204) popup_snote2_single_graphic_window_t_ParamLimits

0xb204,	// (0x0000b204) popup_snote2_single_graphic_window_t

0x5ff2,	// (0x00005ff2) clock_nsta_pane_cp2_t1

0x5ff2,	// (0x00005ff2) clock_nsta_pane_cp2_t2

0x0001,

0xb024,	// (0x0000b024) clock_nsta_pane_cp2_t

0x13b3,	// (0x000013b3) form_field_data_wide_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) form_field_data_wide_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) form_field_data_wide_pane_g2

0x13bf,	// (0x000013bf) form_field_data_wide_pane_g3_ParamLimits

0x13bf,	// (0x000013bf) form_field_data_wide_pane_g3

0x0002,

0xabe9,	// (0x0000abe9) form_field_data_wide_pane_g_ParamLimits

0xabe9,	// (0x0000abe9) form_field_data_wide_pane_g

0xd75a,	// (0x0000d75a) grid_touch_3_pane_ParamLimits

0xd75a,	// (0x0000d75a) grid_touch_3_pane

0xdd03,	// (0x0000dd03) cell_touch_3_pane_ParamLimits

0xdd03,	// (0x0000dd03) cell_touch_3_pane

0x65eb,	// (0x000065eb) cell_touch_3_pane_g1

0x65eb,	// (0x000065eb) cell_touch_3_pane_g2

0x0001,

0xb0a9,	// (0x0000b0a9) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7c65,	// (0x00007c65) button_value_adjust_pane_cp7

0x7c6d,	// (0x00007c6d) query_popup_pane_cp3

0x1ec4,	// (0x00001ec4) bg_popup_sub_pane_cp22_ParamLimits

0x1eda,	// (0x00001eda) navi_navi_volume_pane_cp2

0x1ef5,	// (0x00001ef5) popup_side_volume_key_window_g2

0x1f04,	// (0x00001f04) popup_side_volume_key_window_g3

0x0002,

0xac7f,	// (0x0000ac7f) popup_side_volume_key_window_g

0x1f21,	// (0x00001f21) popup_side_volume_key_window_t2

0x0001,

0xac86,	// (0x0000ac86) popup_side_volume_key_window_t

0x23a8,	// (0x000023a8) popup_side_volume_key_window_ParamLimits

0xbab1,	// (0x0000bab1) list_double_graphic_pane_g4_ParamLimits

0xbab1,	// (0x0000bab1) list_double_graphic_pane_g4

0xd5b7,	// (0x0000d5b7) list_single_2heading_msg_pane_ParamLimits

0xd5b7,	// (0x0000d5b7) list_single_2heading_msg_pane

0xdd4b,	// (0x0000dd4b) list_single_2heading_msg_pane_g1_ParamLimits

0xdd4b,	// (0x0000dd4b) list_single_2heading_msg_pane_g1

0xdd57,	// (0x0000dd57) list_single_2heading_msg_pane_g2_ParamLimits

0xdd57,	// (0x0000dd57) list_single_2heading_msg_pane_g2

0xdd6a,	// (0x0000dd6a) list_single_2heading_msg_pane_g3_ParamLimits

0xdd6a,	// (0x0000dd6a) list_single_2heading_msg_pane_g3

0xdd76,	// (0x0000dd76) list_single_2heading_msg_pane_g4_ParamLimits

0xdd76,	// (0x0000dd76) list_single_2heading_msg_pane_g4

0x0003,

0xf6a2,	// (0x0000f6a2) list_single_2heading_msg_pane_g_ParamLimits

0xf6a2,	// (0x0000f6a2) list_single_2heading_msg_pane_g

0xdd8e,	// (0x0000dd8e) list_single_2heading_msg_pane_t1_ParamLimits

0xdd8e,	// (0x0000dd8e) list_single_2heading_msg_pane_t1

0xddb6,	// (0x0000ddb6) list_single_2heading_msg_pane_t2_ParamLimits

0xddb6,	// (0x0000ddb6) list_single_2heading_msg_pane_t2

0xde21,	// (0x0000de21) list_single_2heading_msg_pane_t3_ParamLimits

0xde21,	// (0x0000de21) list_single_2heading_msg_pane_t3

0x7d50,	// (0x00007d50) list_single_2heading_msg_pane_t4_ParamLimits

0x7d50,	// (0x00007d50) list_single_2heading_msg_pane_t4

0x0003,

0xf6ab,	// (0x0000f6ab) list_single_2heading_msg_pane_t_ParamLimits

0xf6ab,	// (0x0000f6ab) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18da,	// (0x000018da) title_pane_stacon_g3_ParamLimits

0x18da,	// (0x000018da) title_pane_stacon_g3

0x7767,	// (0x00007767) list_single_2graphic_im_pane_g4_ParamLimits

0x7767,	// (0x00007767) list_single_2graphic_im_pane_g4

0x4afb,	// (0x00004afb) popup_side_volume_key_window_cp

0x5573,	// (0x00005573) main_idle_act2_pane_t1

0x3703,	// (0x00003703) toolbar_button_pane_g10

0xb972,	// (0x0000b972) popup_toolbar_window_cp1

0x5fe3,	// (0x00005fe3) clock_nsta_pane_cp_t1

0x5fe3,	// (0x00005fe3) clock_nsta_pane_cp_t2

0x0001,

0xb01f,	// (0x0000b01f) clock_nsta_pane_cp_t

0x1eda,	// (0x00001eda) navi_navi_volume_pane_cp2_ParamLimits

0x1ee9,	// (0x00001ee9) popup_side_volume_key_window_g1_ParamLimits

0x1ef5,	// (0x00001ef5) popup_side_volume_key_window_g2_ParamLimits

0x1f04,	// (0x00001f04) popup_side_volume_key_window_g3_ParamLimits

0xac7f,	// (0x0000ac7f) popup_side_volume_key_window_g_ParamLimits

0x6655,	// (0x00006655) fep_hwr_aid_pane

0x66fc,	// (0x000066fc) bg_fep_hwr_top_pane_g4_ParamLimits

0x671c,	// (0x0000671c) fep_hwr_top_pane_g1_ParamLimits

0x672e,	// (0x0000672e) fep_hwr_top_pane_g2_ParamLimits

0x6740,	// (0x00006740) fep_hwr_top_pane_g3_ParamLimits

0xb074,	// (0x0000b074) fep_hwr_top_pane_g_ParamLimits

0x6755,	// (0x00006755) fep_hwr_top_text_pane_ParamLimits

0x48be,	// (0x000048be) aid_touch_tab_arrow_arrow_2

0x48c7,	// (0x000048c7) aid_touch_tab_arrow_left_2

0x6669,	// (0x00006669) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x66a0,	// (0x000066a0) fep_hwr_prediction_pane

0x69cd,	// (0x000069cd) fep_vkb_prediction_pane

0xdaa5,	// (0x0000daa5) fep_vkb_side_pane_g3_ParamLimits

0xdaa5,	// (0x0000daa5) fep_vkb_side_pane_g3

0x6a7d,	// (0x00006a7d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7133,	// (0x00007133) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7140,	// (0x00007140) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb11e,	// (0x0000b11e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d75,	// (0x00007d75) fep_hwr_prediction_pane_g1

0x7d7f,	// (0x00007d7f) fep_hwr_prediction_pane_g2

0x7d87,	// (0x00007d87) fep_hwr_prediction_pane_g3

0x7d8f,	// (0x00007d8f) fep_hwr_prediction_pane_g4

0x0003,

0xb221,	// (0x0000b221) fep_hwr_prediction_pane_g

0x7d75,	// (0x00007d75) fep_vkb_prediction_pane_g1

0x7d97,	// (0x00007d97) fep_vkb_prediction_pane_g2

0x7d9f,	// (0x00007d9f) fep_vkb_prediction_pane_g3

0x7da7,	// (0x00007da7) fep_vkb_prediction_pane_g4

0x0003,

0xb22a,	// (0x0000b22a) fep_vkb_prediction_pane_g

0x4e65,	// (0x00004e65) slider_set_pane_g3

0x4e79,	// (0x00004e79) slider_set_pane_g4

0x4e91,	// (0x00004e91) slider_set_pane_g5

0x4e65,	// (0x00004e65) slider_set_pane_g6

0x4ea7,	// (0x00004ea7) slider_set_pane_g7

0x5061,	// (0x00005061) slider_form_pane_g3

0x506a,	// (0x0000506a) slider_form_pane_g4

0x5072,	// (0x00005072) slider_form_pane_g5

0x5061,	// (0x00005061) slider_form_pane_g6

0xd56d,	// (0x0000d56d) slider_form_pane_g7

0x5880,	// (0x00005880) slider_set_pane_vc_g3

0x5889,	// (0x00005889) slider_set_pane_vc_g4

0x5892,	// (0x00005892) slider_set_pane_vc_g5

0x5880,	// (0x00005880) slider_set_pane_vc_g6

0x589b,	// (0x0000589b) slider_set_pane_vc_g7

0x5caf,	// (0x00005caf) slider_form_pane_vc_g1

0x5cb8,	// (0x00005cb8) slider_form_pane_vc_g2

0x5cc1,	// (0x00005cc1) slider_form_pane_vc_g3

0x5caf,	// (0x00005caf) slider_form_pane_vc_g4

0x5cca,	// (0x00005cca) slider_form_pane_vc_g5

0x0004,

0xaff1,	// (0x0000aff1) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7daf,	// (0x00007daf) ai3_links_pane

0xde8f,	// (0x0000de8f) popup_ai3_data_window_ParamLimits

0xde8f,	// (0x0000de8f) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdea9,	// (0x0000dea9) cell_ai3_links_pane_ParamLimits

0xdea9,	// (0x0000dea9) cell_ai3_links_pane

0x7dea,	// (0x00007dea) bg_popup_sub_pane_cp11

0x7df7,	// (0x00007df7) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7e1c,	// (0x00007e1c) heading_ai3_data_pane

0x7e24,	// (0x00007e24) list_ai3_gene_pane

0x7e30,	// (0x00007e30) popup_ai3_data_window_g1

0x7e38,	// (0x00007e38) heading_ai3_data_pane_g1

0x7e40,	// (0x00007e40) heading_ai3_data_pane_t1

0x7e4e,	// (0x00007e4e) list_double_ai3_gene_pane_ParamLimits

0x7e4e,	// (0x00007e4e) list_double_ai3_gene_pane

0x7e5b,	// (0x00007e5b) list_single_ai3_gene_pane_ParamLimits

0x7e5b,	// (0x00007e5b) list_single_ai3_gene_pane

0x65b0,	// (0x000065b0) list_highlight_pane_cp7_ParamLimits

0x65b0,	// (0x000065b0) list_highlight_pane_cp7

0x7e68,	// (0x00007e68) list_single_a13_gene_pane_t1_ParamLimits

0x7e68,	// (0x00007e68) list_single_a13_gene_pane_t1

0x7e7f,	// (0x00007e7f) list_single_ai3_gene_pane_g1

0x7e88,	// (0x00007e88) list_single_ai3_gene_pane_g2

0x0001,

0xb233,	// (0x0000b233) list_single_ai3_gene_pane_g

0x7e90,	// (0x00007e90) list_double_ai3_gene_pane_g1_ParamLimits

0x7e90,	// (0x00007e90) list_double_ai3_gene_pane_g1

0x7e9c,	// (0x00007e9c) list_double_ai3_gene_pane_t1_ParamLimits

0x7e9c,	// (0x00007e9c) list_double_ai3_gene_pane_t1

0x7eb8,	// (0x00007eb8) list_double_ai3_gene_pane_t2_ParamLimits

0x7eb8,	// (0x00007eb8) list_double_ai3_gene_pane_t2

0x7ece,	// (0x00007ece) list_double_ai3_gene_pane_t3_ParamLimits

0x7ece,	// (0x00007ece) list_double_ai3_gene_pane_t3

0x0002,

0xb238,	// (0x0000b238) list_double_ai3_gene_pane_t_ParamLimits

0xb238,	// (0x0000b238) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c7e,	// (0x00007c7e) aid_size_min_col_2

0xdd35,	// (0x0000dd35) aid_size_min_msg_ParamLimits

0xdd35,	// (0x0000dd35) aid_size_min_msg

0xdab9,	// (0x0000dab9) fep_vkb_top_text_pane_g2_ParamLimits

0xdab9,	// (0x0000dab9) fep_vkb_top_text_pane_g2

0x0001,

0xf67f,	// (0x0000f67f) fep_vkb_top_text_pane_g_ParamLimits

0xf67f,	// (0x0000f67f) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7eeb,	// (0x00007eeb) grid_hc_apps_pane_ParamLimits

0x7eeb,	// (0x00007eeb) grid_hc_apps_pane

0x7efa,	// (0x00007efa) list_hc_apps_pane

0x7f02,	// (0x00007f02) scroll_pane_cp37_ParamLimits

0x7f02,	// (0x00007f02) scroll_pane_cp37

0xdec3,	// (0x0000dec3) cell_hc_apps_pane_ParamLimits

0xdec3,	// (0x0000dec3) cell_hc_apps_pane

0xdf81,	// (0x0000df81) cell_hc_apps_pane_g1_ParamLimits

0xdf81,	// (0x0000df81) cell_hc_apps_pane_g1

0x7fed,	// (0x00007fed) cell_hc_apps_pane_g2_ParamLimits

0x7fed,	// (0x00007fed) cell_hc_apps_pane_g2

0x8009,	// (0x00008009) cell_hc_apps_pane_g3_ParamLimits

0x8009,	// (0x00008009) cell_hc_apps_pane_g3

0x0002,

0xf6b4,	// (0x0000f6b4) cell_hc_apps_pane_g_ParamLimits

0xf6b4,	// (0x0000f6b4) cell_hc_apps_pane_g

0xdfae,	// (0x0000dfae) cell_hc_apps_pane_t1_ParamLimits

0xdfae,	// (0x0000dfae) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xdfec,	// (0x0000dfec) list_single_hc_apps_pane_ParamLimits

0xdfec,	// (0x0000dfec) list_single_hc_apps_pane

0xe019,	// (0x0000e019) list_single_hc_apps_pane_g1

0xe032,	// (0x0000e032) list_single_hc_apps_pane_g2

0x0001,

0xf6bb,	// (0x0000f6bb) list_single_hc_apps_pane_g

0xe04b,	// (0x0000e04b) list_single_hc_apps_pane_g2_copy1

0x8115,	// (0x00008115) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xaad1,	// (0x0000aad1) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x29df,	// (0x000029df) control_pane_g5_ParamLimits

0x29df,	// (0x000029df) control_pane_g5

0x4e4c,	// (0x00004e4c) slider_set_pane_g1_ParamLimits

0x4e59,	// (0x00004e59) slider_set_pane_g2_ParamLimits

0x4e65,	// (0x00004e65) slider_set_pane_g3_ParamLimits

0x4e79,	// (0x00004e79) slider_set_pane_g4_ParamLimits

0x4e91,	// (0x00004e91) slider_set_pane_g5_ParamLimits

0x4e65,	// (0x00004e65) slider_set_pane_g6_ParamLimits

0x4ea7,	// (0x00004ea7) slider_set_pane_g7_ParamLimits

0xaecb,	// (0x0000aecb) slider_set_pane_g_ParamLimits

0x2489,	// (0x00002489) navi_icon_text_pane_ParamLimits

0xcb5d,	// (0x0000cb5d) aid_fill_nsta_2_ParamLimits

0xcb94,	// (0x0000cb94) aid_touch_tab_arrow_left_ParamLimits

0xcbaa,	// (0x0000cbaa) aid_touch_tab_arrow_right_ParamLimits

0xcc45,	// (0x0000cc45) clock_nsta_pane_ParamLimits

0x48a0,	// (0x000048a0) navi_icon_pane_g1_ParamLimits

0x48ac,	// (0x000048ac) navi_text_pane_t1_ParamLimits

0xd821,	// (0x0000d821) navi_icon_text_pane_g1_ParamLimits

0x60fb,	// (0x000060fb) navi_icon_text_pane_t1_ParamLimits

0xe019,	// (0x0000e019) list_single_hc_apps_pane_g1_ParamLimits

0xe032,	// (0x0000e032) list_single_hc_apps_pane_g2_ParamLimits

0xf6bb,	// (0x0000f6bb) list_single_hc_apps_pane_g_ParamLimits

0xe04b,	// (0x0000e04b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8115,	// (0x00008115) list_single_hc_apps_pane_t1_ParamLimits

0xb5c1,	// (0x0000b5c1) popup_toolbar2_fixed_window_ParamLimits

0xb5c1,	// (0x0000b5c1) popup_toolbar2_fixed_window

0xcac2,	// (0x0000cac2) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8143,	// (0x00008143) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8143,	// (0x00008143) grid_toolbar2_fixed_pane

0xe067,	// (0x0000e067) cell_toolbar2_fixed_pane_ParamLimits

0xe067,	// (0x0000e067) cell_toolbar2_fixed_pane

0xe081,	// (0x0000e081) cell_toolbar2_fixed_pane_g1

0x8164,	// (0x00008164) toolbar2_fixed_button_pane

0x36bb,	// (0x000036bb) toolbar2_fixed_button_pane_g1

0x36c3,	// (0x000036c3) toolbar2_fixed_button_pane_g2

0x36cb,	// (0x000036cb) toolbar2_fixed_button_pane_g3

0x36d3,	// (0x000036d3) toolbar2_fixed_button_pane_g4

0x36db,	// (0x000036db) toolbar2_fixed_button_pane_g5

0x36e3,	// (0x000036e3) toolbar2_fixed_button_pane_g6

0x36eb,	// (0x000036eb) toolbar2_fixed_button_pane_g7

0x36f3,	// (0x000036f3) toolbar2_fixed_button_pane_g8

0x36fb,	// (0x000036fb) toolbar2_fixed_button_pane_g9

0x0008,

0xadcd,	// (0x0000adcd) toolbar2_fixed_button_pane_g

0x816c,	// (0x0000816c) cell_toolbar2_float_pane_ParamLimits

0x816c,	// (0x0000816c) cell_toolbar2_float_pane

0x817d,	// (0x0000817d) cell_toolbar2_float_pane_g1

0x8164,	// (0x00008164) toolbar2_fixed_button_pane_cp

0xd993,	// (0x0000d993) fep_vkb_accented_list_pane_ParamLimits

0xd993,	// (0x0000d993) fep_vkb_accented_list_pane

0x6dc4,	// (0x00006dc4) bg_popup_fep_shadow_pane_g9

0x2609,	// (0x00002609) bg_popup_fep_shadow_pane_cp3

0x166a,	// (0x0000166a) list_accented_list_pane

0x8186,	// (0x00008186) list_single_accented_list_pane_ParamLimits

0x8186,	// (0x00008186) list_single_accented_list_pane

0x2609,	// (0x00002609) list_highlight_pane_cp10

0x8197,	// (0x00008197) list_single_accented_list_pane_t1

0xc9ec,	// (0x0000c9ec) popup_slider_window_ParamLimits

0xc9ec,	// (0x0000c9ec) popup_slider_window

0x7c75,	// (0x00007c75) aid_indentation_list_msg

0xe17a,	// (0x0000e17a) bg_popup_window_pane_cp19

0x82bb,	// (0x000082bb) popup_slider_window_g1

0x82d7,	// (0x000082d7) popup_slider_window_g2

0x82f3,	// (0x000082f3) popup_slider_window_g3

0x0005,

0xf6c0,	// (0x0000f6c0) popup_slider_window_g

0x834f,	// (0x0000834f) popup_slider_window_t1

0x83c3,	// (0x000083c3) small_volume_slider_vertical_pane

0x65eb,	// (0x000065eb) small_volume_slider_vertical_pane_g1

0x65eb,	// (0x000065eb) small_volume_slider_vertical_pane_g2

0x83df,	// (0x000083df) small_volume_slider_vertical_pane_g3

0x0002,

0xb25d,	// (0x0000b25d) small_volume_slider_vertical_pane_g

0xb52f,	// (0x0000b52f) area_side_right_pane_ParamLimits

0xb52f,	// (0x0000b52f) area_side_right_pane

0xe232,	// (0x0000e232) aid_size_side_button_ParamLimits

0xe232,	// (0x0000e232) aid_size_side_button

0xe24b,	// (0x0000e24b) grid_sctrl_middle_pane_ParamLimits

0xe24b,	// (0x0000e24b) grid_sctrl_middle_pane

0x841b,	// (0x0000841b) sctrl_sk_bottom_pane

0x842c,	// (0x0000842c) sctrl_sk_top_pane

0x843e,	// (0x0000843e) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x844b,	// (0x0000844b) sctrl_sk_top_pane_g1

0x8458,	// (0x00008458) sctrl_sk_top_pane_t1

0x843e,	// (0x0000843e) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x8473,	// (0x00008473) sctrl_sk_bottom_pane_g1

0x8458,	// (0x00008458) sctrl_sk_bottom_pane_t1

0xe265,	// (0x0000e265) cell_sctrl_middle_pane_ParamLimits

0xe265,	// (0x0000e265) cell_sctrl_middle_pane

0xe276,	// (0x0000e276) aid_touch_sctrl_middle_ParamLimits

0xe276,	// (0x0000e276) aid_touch_sctrl_middle

0xe283,	// (0x0000e283) bg_sctrl_middle_pane_ParamLimits

0xe283,	// (0x0000e283) bg_sctrl_middle_pane

0x8538,	// (0x00008538) cell_sctrl_middle_pane_g1_ParamLimits

0x8538,	// (0x00008538) cell_sctrl_middle_pane_g1

0xe291,	// (0x0000e291) cell_sctrl_middle_pane_g2_ParamLimits

0xe291,	// (0x0000e291) cell_sctrl_middle_pane_g2

0x0001,

0xf6cd,	// (0x0000f6cd) cell_sctrl_middle_pane_g_ParamLimits

0xf6cd,	// (0x0000f6cd) cell_sctrl_middle_pane_g

0x36bb,	// (0x000036bb) bg_sctrl_middle_pane_g1

0x36c3,	// (0x000036c3) bg_sctrl_middle_pane_g2

0x36cb,	// (0x000036cb) bg_sctrl_middle_pane_g3

0x36d3,	// (0x000036d3) bg_sctrl_middle_pane_g4

0x36db,	// (0x000036db) bg_sctrl_middle_pane_g5

0x36e3,	// (0x000036e3) bg_sctrl_middle_pane_g6

0x36eb,	// (0x000036eb) bg_sctrl_middle_pane_g7

0x36f3,	// (0x000036f3) bg_sctrl_middle_pane_g8

0x0007,

0xb26e,	// (0x0000b26e) bg_sctrl_middle_pane_g

0x36fb,	// (0x000036fb) bg_sctrl_middle_pane_g8_copy1

0x36bb,	// (0x000036bb) bg_sctrl_sk_pane_g1

0x36c3,	// (0x000036c3) bg_sctrl_sk_pane_g2

0x36cb,	// (0x000036cb) bg_sctrl_sk_pane_g3

0x0008,

0xadcd,	// (0x0000adcd) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x36d3,	// (0x000036d3) bg_sctrl_sk_pane_g4

0x36db,	// (0x000036db) bg_sctrl_sk_pane_g5

0x36e3,	// (0x000036e3) bg_sctrl_sk_pane_g6

0x36eb,	// (0x000036eb) bg_sctrl_sk_pane_g7

0x36f3,	// (0x000036f3) bg_sctrl_sk_pane_g8

0x36fb,	// (0x000036fb) bg_sctrl_sk_pane_g9

0x2c26,	// (0x00002c26) popup_fep_china_hwr2_fs_candidate_window

0xc50c,	// (0x0000c50c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc50c,	// (0x0000c50c) popup_fep_china_hwr2_fs_control_window

0x6a7d,	// (0x00006a7d) sctrl_sk_top_pane_g2

0x0001,

0xb264,	// (0x0000b264) sctrl_sk_top_pane_g

0xe29d,	// (0x0000e29d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe29d,	// (0x0000e29d) aid_fep_china_hwr2_fs_cell

0xe2b1,	// (0x0000e2b1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe2b1,	// (0x0000e2b1) bg_popup_fep_shadow_pane_cp4

0xe2c8,	// (0x0000e2c8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe2c8,	// (0x0000e2c8) bg_popup_fep_shadow_pane_cp5

0xe2da,	// (0x0000e2da) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe2da,	// (0x0000e2da) popup_fep_china_hwr2_fs_control_bar_grid

0xe2ee,	// (0x0000e2ee) popup_fep_china_hwr2_fs_control_funtion_grid

0x850c,	// (0x0000850c) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x8516,	// (0x00008516) popup_fep_china_hwr2_fs_candidate_grid

0xe2f6,	// (0x0000e2f6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe2f6,	// (0x0000e2f6) cell_fep_china_hwr2_fs_funtion_grid

0x65eb,	// (0x000065eb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8538,	// (0x00008538) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8538,	// (0x00008538) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8546,	// (0x00008546) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8546,	// (0x00008546) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb27f,	// (0x0000b27f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb27f,	// (0x0000b27f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe30e,	// (0x0000e30e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe30e,	// (0x0000e30e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe323,	// (0x0000e323) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe323,	// (0x0000e323) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf6d2,	// (0x0000f6d2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf6d2,	// (0x0000f6d2) cell_fep_china_hwr2_fs_funtion_grid_t

0x858d,	// (0x0000858d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8595,	// (0x00008595) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x859d,	// (0x0000859d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb289,	// (0x0000b289) popup_fep_china_hwr2_fs_control_bar_grid_g

0x85a5,	// (0x000085a5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x85a5,	// (0x000085a5) cell_fep_china_hwr2_fs_candidate_grid

0x85be,	// (0x000085be) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85c6,	// (0x000085c6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x65eb,	// (0x000065eb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x65eb,	// (0x000065eb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb0a9,	// (0x0000b0a9) cell_fep_china_hwr2_fs_candidate_grid_g

0x85ce,	// (0x000085ce) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3219,	// (0x00003219) clock_nsta_pane_cp_24_ParamLimits

0x3219,	// (0x00003219) clock_nsta_pane_cp_24

0x3297,	// (0x00003297) indicator_nsta_pane_cp_24_ParamLimits

0x3297,	// (0x00003297) indicator_nsta_pane_cp_24

0x470b,	// (0x0000470b) heading_pane_g1

0x0001,

0xae32,	// (0x0000ae32) heading_pane_g

0x5304,	// (0x00005304) grid_sct_catagory_button_pane

0x5334,	// (0x00005334) scroll_pane_cp5_ParamLimits

0x618e,	// (0x0000618e) button_value_adjust_pane_cp5_ParamLimits

0x618e,	// (0x0000618e) button_value_adjust_pane_cp5

0x628a,	// (0x0000628a) form2_midp_time_pane_ParamLimits

0x85dc,	// (0x000085dc) cell_sct_catagory_button_pane_ParamLimits

0x85dc,	// (0x000085dc) cell_sct_catagory_button_pane

0x65b0,	// (0x000065b0) bg_button_pane_cp01_ParamLimits

0x65b0,	// (0x000065b0) bg_button_pane_cp01

0x65eb,	// (0x000065eb) cell_sct_catagory_button_pane_g1

0xca65,	// (0x0000ca65) popup_tb_extension_window

0xe33f,	// (0x0000e33f) aid_size_cell_ext_ParamLimits

0xe33f,	// (0x0000e33f) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xe365,	// (0x0000e365) grid_tb_ext_pane_ParamLimits

0xe365,	// (0x0000e365) grid_tb_ext_pane

0xe3a0,	// (0x0000e3a0) cell_tb_ext_pane_ParamLimits

0xe3a0,	// (0x0000e3a0) cell_tb_ext_pane

0xe3c8,	// (0x0000e3c8) cell_tb_ext_pane_g1_ParamLimits

0xe3c8,	// (0x0000e3c8) cell_tb_ext_pane_g1

0x8670,	// (0x00008670) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1399,	// (0x00001399) bg_popup_sub_pane_cp14

0x868b,	// (0x0000868b) list_uniindi_pane

0x8697,	// (0x00008697) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x86b6,	// (0x000086b6) uniindi_top_pane_g1

0x86cc,	// (0x000086cc) uniindi_top_pane_g2

0x0003,

0xb290,	// (0x0000b290) uniindi_top_pane_g

0x86f6,	// (0x000086f6) uniindi_top_pane_t1

0x8720,	// (0x00008720) list_single_uniindi_pane_ParamLimits

0x8720,	// (0x00008720) list_single_uniindi_pane

0x65eb,	// (0x000065eb) bg_uniindi_top_pane_g1

0x8733,	// (0x00008733) list_single_uniindi_pane_g1

0x8746,	// (0x00008746) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x876b,	// (0x0000876b) bg_sctrl_sk_pane_cp1

0x8774,	// (0x00008774) bg_sctrl_sk_pane_cp2

0x877d,	// (0x0000877d) control_bg_pane_g1

0x8786,	// (0x00008786) control_bg_pane_g2

0x0001,

0xb299,	// (0x0000b299) control_bg_pane_g

0x5f86,	// (0x00005f86) cell_indicator_nsta_pane_g1_ParamLimits

0xd789,	// (0x0000d789) cell_indicator_nsta_pane_g2_ParamLimits

0xf64a,	// (0x0000f64a) cell_indicator_nsta_pane_g_ParamLimits

0x6312,	// (0x00006312) form2_midp_time_pane_t1_ParamLimits

0x6647,	// (0x00006647) main_idle_act4_pane_ParamLimits

0x6647,	// (0x00006647) main_idle_act4_pane

0xca65,	// (0x0000ca65) popup_tb_extension_window_ParamLimits

0xe387,	// (0x0000e387) tb_ext_find_pane_ParamLimits

0xe387,	// (0x0000e387) tb_ext_find_pane

0x878f,	// (0x0000878f) ai_gene_pane_1_cp1

0x2742,	// (0x00002742) ai_gene_pane_2_cp1

0x8797,	// (0x00008797) list_single_idle_plugin_calendar_pane

0x87a0,	// (0x000087a0) list_single_idle_plugin_notification_pane

0x87a9,	// (0x000087a9) list_single_idle_plugin_player_pane

0xe3e5,	// (0x0000e3e5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe3e5,	// (0x0000e3e5) list_single_idle_plugin_shortcut_pane

0xe40d,	// (0x0000e40d) main_idle_act4_pane_t1

0xe423,	// (0x0000e423) main_idle_act4_pane_t2

0x0001,

0xf6d7,	// (0x0000f6d7) main_idle_act4_pane_t

0xe439,	// (0x0000e439) middle_sk_idle_act4_pane_ParamLimits

0xe439,	// (0x0000e439) middle_sk_idle_act4_pane

0xe455,	// (0x0000e455) popup_clock_digital_analogue_window_cp2

0xe47d,	// (0x0000e47d) shortcut_wheel_idle_act4_pane_ParamLimits

0xe47d,	// (0x0000e47d) shortcut_wheel_idle_act4_pane

0x65eb,	// (0x000065eb) shortcut_wheel_idle_act4_pane_g1

0x65eb,	// (0x000065eb) shortcut_wheel_idle_act4_pane_g2

0x65eb,	// (0x000065eb) shortcut_wheel_idle_act4_pane_g3

0x65eb,	// (0x000065eb) shortcut_wheel_idle_act4_pane_g4

0x65eb,	// (0x000065eb) shortcut_wheel_idle_act4_pane_g5

0x883c,	// (0x0000883c) shortcut_wheel_idle_act4_pane_g6

0x8844,	// (0x00008844) shortcut_wheel_idle_act4_pane_g7

0x884c,	// (0x0000884c) shortcut_wheel_idle_act4_pane_g8

0x8854,	// (0x00008854) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb2a3,	// (0x0000b2a3) shortcut_wheel_idle_act4_pane_g

0x66fc,	// (0x000066fc) middle_sk_idle_act4_pane_g1_ParamLimits

0x66fc,	// (0x000066fc) middle_sk_idle_act4_pane_g1

0xe4fa,	// (0x0000e4fa) middle_sk_idle_act4_pane_g2_ParamLimits

0xe4fa,	// (0x0000e4fa) middle_sk_idle_act4_pane_g2

0x0001,

0xf6ec,	// (0x0000f6ec) middle_sk_idle_act4_pane_g_ParamLimits

0xf6ec,	// (0x0000f6ec) middle_sk_idle_act4_pane_g

0xe512,	// (0x0000e512) middle_sk_idle_act4_pane_t1_ParamLimits

0xe512,	// (0x0000e512) middle_sk_idle_act4_pane_t1

0xe541,	// (0x0000e541) grid_ai_shortcut_pane_ParamLimits

0xe541,	// (0x0000e541) grid_ai_shortcut_pane

0xe55e,	// (0x0000e55e) list_highlight_pane_cp16_ParamLimits

0xe55e,	// (0x0000e55e) list_highlight_pane_cp16

0xe56b,	// (0x0000e56b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe56b,	// (0x0000e56b) list_single_idle_plugin_shortcut_pane_g1

0xe577,	// (0x0000e577) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe577,	// (0x0000e577) list_single_idle_plugin_shortcut_pane_g2

0xe593,	// (0x0000e593) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe593,	// (0x0000e593) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf6f1,	// (0x0000f6f1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf6f1,	// (0x0000f6f1) list_single_idle_plugin_shortcut_pane_g

0xe5a8,	// (0x0000e5a8) cell_ai_shortcut_pane_ParamLimits

0xe5a8,	// (0x0000e5a8) cell_ai_shortcut_pane

0xe5be,	// (0x0000e5be) cell_ai_shortcut_pane_g1_ParamLimits

0xe5be,	// (0x0000e5be) cell_ai_shortcut_pane_g1

0x878f,	// (0x0000878f) ai_gene_pane_1_cp2

0x8984,	// (0x00008984) ai_gene_pane_2_cp2

0x898c,	// (0x0000898c) list_highlight_pane_cp15

0x8995,	// (0x00008995) list_single_idle_plugin_calendar_pane_g1

0x898c,	// (0x0000898c) list_highlight_pane_cp17

0x899d,	// (0x0000899d) list_single_idle_plugin_calendar_pane_g1_copy1

0x89a5,	// (0x000089a5) list_single_idle_plugin_player_pane_g1

0x5615,	// (0x00005615) list_single_idle_plugin_player_pane_g2

0x0001,

0xb2d2,	// (0x0000b2d2) list_single_idle_plugin_player_pane_g

0x89ad,	// (0x000089ad) list_single_idle_plugin_player_pane_t1

0x89bb,	// (0x000089bb) list_single_idle_plugin_player_pane_t2

0x89c9,	// (0x000089c9) list_single_idle_plugin_player_pane_t3

0x89d7,	// (0x000089d7) list_single_idle_plugin_player_pane_t4

0x0003,

0xb2d7,	// (0x0000b2d7) list_single_idle_plugin_player_pane_t

0x89e5,	// (0x000089e5) wait_bar_pane_cp15

0x89ed,	// (0x000089ed) grid_ai_notification_pane

0x5615,	// (0x00005615) list_single_idle_plugin_notification_pane_g1

0xe5e0,	// (0x0000e5e0) cell_ai_notification_pane_ParamLimits

0xe5e0,	// (0x0000e5e0) cell_ai_notification_pane

0x8a03,	// (0x00008a03) cell_ai_notification_pane_g1

0x8a0b,	// (0x00008a0b) cell_ai_notification_pane_t1

0xe5ed,	// (0x0000e5ed) tb_ext_find_button_pane

0xe5f5,	// (0x0000e5f5) tb_ext_find_pane_g1

0xe5fd,	// (0x0000e5fd) tb_ext_find_pane_t1

0x1d5a,	// (0x00001d5a) tb_ext_find_button_pane_g1

0x8a37,	// (0x00008a37) tb_ext_find_button_pane_g2

0x0001,

0xb2e0,	// (0x0000b2e0) tb_ext_find_button_pane_g

0xe40d,	// (0x0000e40d) main_idle_act4_pane_t1_ParamLimits

0xe423,	// (0x0000e423) main_idle_act4_pane_t2_ParamLimits

0xf6d7,	// (0x0000f6d7) main_idle_act4_pane_t_ParamLimits

0xe455,	// (0x0000e455) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe46d,	// (0x0000e46d) sat_plugin_idle_act4_pane_ParamLimits

0xe46d,	// (0x0000e46d) sat_plugin_idle_act4_pane

0xe60b,	// (0x0000e60b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe60b,	// (0x0000e60b) sat_plugin_idle_act4_pane_t1

0xe623,	// (0x0000e623) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe623,	// (0x0000e623) sat_plugin_idle_act4_pane_t2

0xe63b,	// (0x0000e63b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe63b,	// (0x0000e63b) sat_plugin_idle_act4_pane_t3

0xe653,	// (0x0000e653) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe653,	// (0x0000e653) sat_plugin_idle_act4_pane_t4

0x0003,

0xf6f8,	// (0x0000f6f8) sat_plugin_idle_act4_pane_t_ParamLimits

0xf6f8,	// (0x0000f6f8) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x8a8c,	// (0x00008a8c) popup_battery_window_g1_ParamLimits

0x8a8c,	// (0x00008a8c) popup_battery_window_g1

0x8a98,	// (0x00008a98) popup_battery_window_t1_ParamLimits

0x8a98,	// (0x00008a98) popup_battery_window_t1

0x8aaa,	// (0x00008aaa) popup_battery_window_t2_ParamLimits

0x8aaa,	// (0x00008aaa) popup_battery_window_t2

0x0001,

0xb2ee,	// (0x0000b2ee) popup_battery_window_t_ParamLimits

0xb2ee,	// (0x0000b2ee) popup_battery_window_t

0xc236,	// (0x0000c236) midp_canvas_pane_ParamLimits

0xc291,	// (0x0000c291) midp_keypad_pane_ParamLimits

0xc291,	// (0x0000c291) midp_keypad_pane

0x2b7a,	// (0x00002b7a) main_midp_pane_ParamLimits

0x6001,	// (0x00006001) signal_pane_g2_cp_ParamLimits

0xe66b,	// (0x0000e66b) aid_size_cell_midp_keypad_ParamLimits

0xe66b,	// (0x0000e66b) aid_size_cell_midp_keypad

0xe689,	// (0x0000e689) midp_keyp_game_grid_pane_ParamLimits

0xe689,	// (0x0000e689) midp_keyp_game_grid_pane

0xe6b0,	// (0x0000e6b0) midp_keyp_rocker_pane_ParamLimits

0xe6b0,	// (0x0000e6b0) midp_keyp_rocker_pane

0xe6f9,	// (0x0000e6f9) midp_keyp_sk_left_pane_ParamLimits

0xe6f9,	// (0x0000e6f9) midp_keyp_sk_left_pane

0xe74b,	// (0x0000e74b) midp_keyp_sk_right_pane_ParamLimits

0xe74b,	// (0x0000e74b) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe79d,	// (0x0000e79d) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe79d,	// (0x0000e79d) midp_keyp_sk_right_pane_g1

0x65eb,	// (0x000065eb) midp_keyp_rocker_pane_g1

0xe7a6,	// (0x0000e7a6) keyp_game_cell_pane_ParamLimits

0xe7a6,	// (0x0000e7a6) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe7ca,	// (0x0000e7ca) keyp_game_cell_pane_g1

0xb571,	// (0x0000b571) popup_fep_vkb2_window_ParamLimits

0xb571,	// (0x0000b571) popup_fep_vkb2_window

0xe7d3,	// (0x0000e7d3) aid_size_cell_vkb2_ParamLimits

0xe7d3,	// (0x0000e7d3) aid_size_cell_vkb2

0xe809,	// (0x0000e809) popup_fep_vkb2_window_g1_ParamLimits

0xe809,	// (0x0000e809) popup_fep_vkb2_window_g1

0xe859,	// (0x0000e859) vkb2_area_bottom_pane_ParamLimits

0xe859,	// (0x0000e859) vkb2_area_bottom_pane

0xe8ad,	// (0x0000e8ad) vkb2_area_keypad_pane_ParamLimits

0xe8ad,	// (0x0000e8ad) vkb2_area_keypad_pane

0xe8f5,	// (0x0000e8f5) vkb2_area_top_pane_ParamLimits

0xe8f5,	// (0x0000e8f5) vkb2_area_top_pane

0xe97b,	// (0x0000e97b) vkb2_top_entry_pane_ParamLimits

0xe97b,	// (0x0000e97b) vkb2_top_entry_pane

0xe9a8,	// (0x0000e9a8) vkb2_top_grid_left_pane_ParamLimits

0xe9a8,	// (0x0000e9a8) vkb2_top_grid_left_pane

0xe9c8,	// (0x0000e9c8) vkb2_top_grid_right_pane_ParamLimits

0xe9c8,	// (0x0000e9c8) vkb2_top_grid_right_pane

0x8e23,	// (0x00008e23) vkb2_cell_keypad_pane_ParamLimits

0x8e23,	// (0x00008e23) vkb2_cell_keypad_pane

0xea0e,	// (0x0000ea0e) vkb2_area_bottom_grid_pane_ParamLimits

0xea0e,	// (0x0000ea0e) vkb2_area_bottom_grid_pane

0xea38,	// (0x0000ea38) vkb2_area_bottom_pane_g1_ParamLimits

0xea38,	// (0x0000ea38) vkb2_area_bottom_pane_g1

0xea5e,	// (0x0000ea5e) vkb2_area_bottom_pane_g2_ParamLimits

0xea5e,	// (0x0000ea5e) vkb2_area_bottom_pane_g2

0xea8f,	// (0x0000ea8f) vkb2_area_bottom_pane_g3_ParamLimits

0xea8f,	// (0x0000ea8f) vkb2_area_bottom_pane_g3

0x0002,

0xf701,	// (0x0000f701) vkb2_area_bottom_pane_g_ParamLimits

0xf701,	// (0x0000f701) vkb2_area_bottom_pane_g

0x8fcd,	// (0x00008fcd) vkb2_top_cell_left_pane_ParamLimits

0x8fcd,	// (0x00008fcd) vkb2_top_cell_left_pane

0xeaf9,	// (0x0000eaf9) vkb2_top_entry_pane_g1_ParamLimits

0xeaf9,	// (0x0000eaf9) vkb2_top_entry_pane_g1

0xeb07,	// (0x0000eb07) vkb2_top_entry_pane_t1_ParamLimits

0xeb07,	// (0x0000eb07) vkb2_top_entry_pane_t1

0x9035,	// (0x00009035) vkb2_top_entry_pane_t2_ParamLimits

0x9035,	// (0x00009035) vkb2_top_entry_pane_t2

0x9067,	// (0x00009067) vkb2_top_entry_pane_t3_ParamLimits

0x9067,	// (0x00009067) vkb2_top_entry_pane_t3

0x0002,

0xf708,	// (0x0000f708) vkb2_top_entry_pane_t_ParamLimits

0xf708,	// (0x0000f708) vkb2_top_entry_pane_t

0xeb40,	// (0x0000eb40) vkb2_top_grid_right_pane_g1_ParamLimits

0xeb40,	// (0x0000eb40) vkb2_top_grid_right_pane_g1

0x90ce,	// (0x000090ce) vkb2_top_grid_right_pane_g2_ParamLimits

0x90ce,	// (0x000090ce) vkb2_top_grid_right_pane_g2

0x90e6,	// (0x000090e6) vkb2_top_grid_right_pane_g3_ParamLimits

0x90e6,	// (0x000090e6) vkb2_top_grid_right_pane_g3

0xeb56,	// (0x0000eb56) vkb2_top_grid_right_pane_g4_ParamLimits

0xeb56,	// (0x0000eb56) vkb2_top_grid_right_pane_g4

0x0003,

0xf70f,	// (0x0000f70f) vkb2_top_grid_right_pane_g_ParamLimits

0xf70f,	// (0x0000f70f) vkb2_top_grid_right_pane_g

0x9114,	// (0x00009114) vkb2_top_cell_left_pane_g1

0x912b,	// (0x0000912b) vkb2_cell_keypad_pane_g1_ParamLimits

0x912b,	// (0x0000912b) vkb2_cell_keypad_pane_g1

0x9139,	// (0x00009139) vkb2_cell_keypad_pane_t1_ParamLimits

0x9139,	// (0x00009139) vkb2_cell_keypad_pane_t1

0x9150,	// (0x00009150) vkb2_cell_bottom_grid_pane_ParamLimits

0x9150,	// (0x00009150) vkb2_cell_bottom_grid_pane

0x9189,	// (0x00009189) vkb2_cell_bottom_grid_pane_g1

0xe49e,	// (0x0000e49e) aid_call2_pane_cp02

0xe4a6,	// (0x0000e4a6) aid_call_pane_cp02

0xe4ae,	// (0x0000e4ae) clock_digital_number_pane_cp10

0xe4b6,	// (0x0000e4b6) clock_digital_number_pane_cp11

0xe4be,	// (0x0000e4be) clock_digital_number_pane_cp12

0xe4c6,	// (0x0000e4c6) clock_digital_number_pane_cp13

0xe4ce,	// (0x0000e4ce) clock_digital_separator_pane_cp10

0x1d5a,	// (0x00001d5a) popup_clock_digital_analogue_window_cp2_g1

0x1d5a,	// (0x00001d5a) popup_clock_digital_analogue_window_cp2_g2

0xe4d6,	// (0x0000e4d6) popup_clock_digital_analogue_window_cp2_g3

0x1d5a,	// (0x00001d5a) popup_clock_digital_analogue_window_cp2_g4

0xe4d6,	// (0x0000e4d6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf6dc,	// (0x0000f6dc) popup_clock_digital_analogue_window_cp2_g

0xe4de,	// (0x0000e4de) popup_clock_digital_analogue_window_cp2_t1

0xe4ec,	// (0x0000e4ec) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf6e7,	// (0x0000f6e7) popup_clock_digital_analogue_window_cp2_t

0x65eb,	// (0x000065eb) clock_digital_number_pane_cp10_g1

0x65eb,	// (0x000065eb) clock_digital_number_pane_cp10_g2

0x0001,

0xb0a9,	// (0x0000b0a9) clock_digital_number_pane_cp10_g

0x65eb,	// (0x000065eb) clock_digital_separator_pane_cp10_g1

0x65eb,	// (0x000065eb) clock_digital_separator_pane_cp10_g2

0x0001,

0xb0a9,	// (0x0000b0a9) clock_digital_separator_pane_cp10_g

0x86d8,	// (0x000086d8) uniindi_top_pane_g3

0x86e9,	// (0x000086e9) uniindi_top_pane_g4

0x8eae,	// (0x00008eae) vkb2_row_keypad_pane_ParamLimits

0x8eae,	// (0x00008eae) vkb2_row_keypad_pane

0x91a5,	// (0x000091a5) vkb2_cell_t_keypad_pane_ParamLimits

0x91a5,	// (0x000091a5) vkb2_cell_t_keypad_pane

0x91b5,	// (0x000091b5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91b5,	// (0x000091b5) vkb2_cell_t_keypad_pane_cp08

0x91c8,	// (0x000091c8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91c8,	// (0x000091c8) vkb2_cell_t_keypad_pane_cp09

0x91dc,	// (0x000091dc) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91dc,	// (0x000091dc) vkb2_cell_t_keypad_pane_cp01

0x91ed,	// (0x000091ed) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91ed,	// (0x000091ed) vkb2_cell_t_keypad_pane_cp02

0x91fe,	// (0x000091fe) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91fe,	// (0x000091fe) vkb2_cell_t_keypad_pane_cp03

0x920f,	// (0x0000920f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x920f,	// (0x0000920f) vkb2_cell_t_keypad_pane_cp04

0x9220,	// (0x00009220) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9220,	// (0x00009220) vkb2_cell_t_keypad_pane_cp05

0x9231,	// (0x00009231) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9231,	// (0x00009231) vkb2_cell_t_keypad_pane_cp06

0x9242,	// (0x00009242) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9242,	// (0x00009242) vkb2_cell_t_keypad_pane_cp07

0x9253,	// (0x00009253) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9253,	// (0x00009253) vkb2_cell_t_keypad_pane_cp10

0x6a7d,	// (0x00006a7d) vkb2_cell_t_keypad_pane_g1

0x9268,	// (0x00009268) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xeb6c,	// (0x0000eb6c) aid_size_cell_graphic2_ParamLimits

0xeb6c,	// (0x0000eb6c) aid_size_cell_graphic2

0xebaa,	// (0x0000ebaa) bg_popup_window_pane_cp21_ParamLimits

0xebaa,	// (0x0000ebaa) bg_popup_window_pane_cp21

0xebb8,	// (0x0000ebb8) graphic2_pages_pane_ParamLimits

0xebb8,	// (0x0000ebb8) graphic2_pages_pane

0xec0e,	// (0x0000ec0e) grid_graphic2_control_pane_ParamLimits

0xec0e,	// (0x0000ec0e) grid_graphic2_control_pane

0xec56,	// (0x0000ec56) grid_graphic2_pane_ParamLimits

0xec56,	// (0x0000ec56) grid_graphic2_pane

0xecdd,	// (0x0000ecdd) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7e24,	// (0x00007e24) list_ai3_gene_pane_ParamLimits

0xe17a,	// (0x0000e17a) bg_popup_window_pane_cp19_ParamLimits

0x825d,	// (0x0000825d) bg_touch_area_indi_pane_ParamLimits

0x825d,	// (0x0000825d) bg_touch_area_indi_pane

0x8273,	// (0x00008273) bg_touch_area_indi_pane_cp01_ParamLimits

0x8273,	// (0x00008273) bg_touch_area_indi_pane_cp01

0x8289,	// (0x00008289) bg_touch_area_indi_pane_cp02_ParamLimits

0x8289,	// (0x00008289) bg_touch_area_indi_pane_cp02

0x82a1,	// (0x000082a1) bg_touch_area_indi_pane_cp03_ParamLimits

0x82a1,	// (0x000082a1) bg_touch_area_indi_pane_cp03

0x82bb,	// (0x000082bb) popup_slider_window_g1_ParamLimits

0x82d7,	// (0x000082d7) popup_slider_window_g2_ParamLimits

0x82f3,	// (0x000082f3) popup_slider_window_g3_ParamLimits

0xf6c0,	// (0x0000f6c0) popup_slider_window_g_ParamLimits

0x834f,	// (0x0000834f) popup_slider_window_t1_ParamLimits

0x83c3,	// (0x000083c3) small_volume_slider_vertical_pane_ParamLimits

0xecdd,	// (0x0000ecdd) cell_graphic2_pane_ParamLimits

0xed3a,	// (0x0000ed3a) bg_button_pane_cp10_ParamLimits

0xed3a,	// (0x0000ed3a) bg_button_pane_cp10

0xed4d,	// (0x0000ed4d) bg_button_pane_cp11_ParamLimits

0xed4d,	// (0x0000ed4d) bg_button_pane_cp11

0xed60,	// (0x0000ed60) graphic2_pages_pane_g1_ParamLimits

0xed60,	// (0x0000ed60) graphic2_pages_pane_g1

0xed7b,	// (0x0000ed7b) graphic2_pages_pane_g2_ParamLimits

0xed7b,	// (0x0000ed7b) graphic2_pages_pane_g2

0x0001,

0xf71d,	// (0x0000f71d) graphic2_pages_pane_g_ParamLimits

0xf71d,	// (0x0000f71d) graphic2_pages_pane_g

0xed93,	// (0x0000ed93) graphic2_pages_pane_t1_ParamLimits

0xed93,	// (0x0000ed93) graphic2_pages_pane_t1

0xedab,	// (0x0000edab) cell_graphic2_control_pane_ParamLimits

0xedab,	// (0x0000edab) cell_graphic2_control_pane

0xeddd,	// (0x0000eddd) cell_graphic2_pane_g1_ParamLimits

0xeddd,	// (0x0000eddd) cell_graphic2_pane_g1

0x6897,	// (0x00006897) cell_graphic2_pane_g2_ParamLimits

0x6897,	// (0x00006897) cell_graphic2_pane_g2

0xedea,	// (0x0000edea) cell_graphic2_pane_g3_ParamLimits

0xedea,	// (0x0000edea) cell_graphic2_pane_g3

0x68a4,	// (0x000068a4) cell_graphic2_pane_g4_ParamLimits

0x68a4,	// (0x000068a4) cell_graphic2_pane_g4

0xedf7,	// (0x0000edf7) cell_graphic2_pane_g5_ParamLimits

0xedf7,	// (0x0000edf7) cell_graphic2_pane_g5

0x0004,

0xf722,	// (0x0000f722) cell_graphic2_pane_g_ParamLimits

0xf722,	// (0x0000f722) cell_graphic2_pane_g

0xee17,	// (0x0000ee17) cell_graphic2_pane_t1_ParamLimits

0xee17,	// (0x0000ee17) cell_graphic2_pane_t1

0x46ff,	// (0x000046ff) grid_highlight_pane_cp11_ParamLimits

0x46ff,	// (0x000046ff) grid_highlight_pane_cp11

0x0831,	// (0x00000831) bg_button_pane_cp05

0xee4c,	// (0x0000ee4c) cell_graphic2_control_pane_g1

0x65eb,	// (0x000065eb) bg_touch_area_indi_pane_g1

0x9538,	// (0x00009538) aid_cmod_rocker_key_size

0x9542,	// (0x00009542) aid_cmode_itu_key_size

0x954c,	// (0x0000954c) main_cmode_video_pane

0x9556,	// (0x00009556) main_comp_mode_itu_pane

0x9562,	// (0x00009562) main_comp_mode_rocker_pane

0x956e,	// (0x0000956e) cell_cmode_rocker_pane_ParamLimits

0x956e,	// (0x0000956e) cell_cmode_rocker_pane

0x9580,	// (0x00009580) cell_cmode_itu_pane_ParamLimits

0x9580,	// (0x00009580) cell_cmode_itu_pane

0x1399,	// (0x00001399) bg_button_pane_cp06_ParamLimits

0x1399,	// (0x00001399) bg_button_pane_cp06

0x6a7d,	// (0x00006a7d) cell_cmode_rocker_pane_g1_ParamLimits

0x6a7d,	// (0x00006a7d) cell_cmode_rocker_pane_g1

0x8538,	// (0x00008538) cell_cmode_rocker_pane_g2_ParamLimits

0x8538,	// (0x00008538) cell_cmode_rocker_pane_g2

0x0001,

0xb324,	// (0x0000b324) cell_cmode_rocker_pane_g_ParamLimits

0xb324,	// (0x0000b324) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9595,	// (0x00009595) cell_cmode_itu_pane_g1

0x959e,	// (0x0000959e) cell_cmode_itu_pane_t1

0x95ac,	// (0x000095ac) cell_cmode_itu_pane_t2

0x0001,

0xb329,	// (0x0000b329) cell_cmode_itu_pane_t

0x875b,	// (0x0000875b) aid_touch_ctrl_left

0x8763,	// (0x00008763) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xee72,	// (0x0000ee72) aid_cmod_rocker_key_size_cp

0xee7c,	// (0x0000ee7c) aid_cmode_itu_key_size_cp

0x95ce,	// (0x000095ce) compa_mode_pane_g1

0x95d6,	// (0x000095d6) compa_mode_pane_g2

0x95de,	// (0x000095de) compa_mode_pane_g3

0x0002,

0xb32e,	// (0x0000b32e) compa_mode_pane_g

0xee86,	// (0x0000ee86) main_comp_mode_itu_pane_cp

0xee8e,	// (0x0000ee8e) main_comp_mode_rocker_pane_cp

0xee96,	// (0x0000ee96) cell_cmode_itu_pane_cp_ParamLimits

0xee96,	// (0x0000ee96) cell_cmode_itu_pane_cp

0xeeab,	// (0x0000eeab) cell_cmode_rocker_pane_cp_ParamLimits

0xeeab,	// (0x0000eeab) cell_cmode_rocker_pane_cp

0x1399,	// (0x00001399) bg_button_pane_cp06_cp_ParamLimits

0x1399,	// (0x00001399) bg_button_pane_cp06_cp

0x6a7d,	// (0x00006a7d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a7d,	// (0x00006a7d) cell_cmode_rocker_pane_g1_cp

0x65eb,	// (0x000065eb) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xeebd,	// (0x0000eebd) cell_cmode_itu_pane_g1_cp

0xeec6,	// (0x0000eec6) cell_cmode_itu_pane_t1_cp

0xeec6,	// (0x0000eec6) cell_cmode_itu_pane_t2_cp

0xd563,	// (0x0000d563) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x6655,	// (0x00006655) fep_hwr_aid_pane_ParamLimits

0x843e,	// (0x0000843e) aid_touch_sctrl_top_ParamLimits

0x844b,	// (0x0000844b) sctrl_sk_top_pane_g1_ParamLimits

0x6a7d,	// (0x00006a7d) sctrl_sk_top_pane_g2_ParamLimits

0xb264,	// (0x0000b264) sctrl_sk_top_pane_g_ParamLimits

0x8458,	// (0x00008458) sctrl_sk_top_pane_t1_ParamLimits

0x843e,	// (0x0000843e) aid_touch_sctrl_bottom_ParamLimits

0x8458,	// (0x00008458) sctrl_sk_bottom_pane_t1_ParamLimits

0x86a4,	// (0x000086a4) aid_area_touch_clock

0xe93d,	// (0x0000e93d) aid_vkb2_area_top_pane_cell_ParamLimits

0xe93d,	// (0x0000e93d) aid_vkb2_area_top_pane_cell

0xe9e8,	// (0x0000e9e8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe9e8,	// (0x0000e9e8) aid_vkb2_area_bottom_pane_cell

0x8fed,	// (0x00008fed) popup_char_count_window

0x962b,	// (0x0000962b) popup_char_count_window_g1

0x9634,	// (0x00009634) popup_char_count_window_g2

0x963d,	// (0x0000963d) popup_char_count_window_g3

0x0002,

0xb335,	// (0x0000b335) popup_char_count_window_g

0x9646,	// (0x00009646) popup_char_count_window_t1

0x8c4b,	// (0x00008c4b) popup_fep_char_preview_window_ParamLimits

0x8c4b,	// (0x00008c4b) popup_fep_char_preview_window

0xe95d,	// (0x0000e95d) vkb2_top_candi_pane_ParamLimits

0xe95d,	// (0x0000e95d) vkb2_top_candi_pane

0xeed4,	// (0x0000eed4) cell_vkb2_top_candi_pane_ParamLimits

0xeed4,	// (0x0000eed4) cell_vkb2_top_candi_pane

0x3f38,	// (0x00003f38) bg_popup_fep_char_preview_window_ParamLimits

0x3f38,	// (0x00003f38) bg_popup_fep_char_preview_window

0x96a1,	// (0x000096a1) popup_fep_char_preview_window_t1_ParamLimits

0x96a1,	// (0x000096a1) popup_fep_char_preview_window_t1

0x96db,	// (0x000096db) bg_popup_fep_char_preview_window_g1

0x96e3,	// (0x000096e3) bg_popup_fep_char_preview_window_g2

0x96eb,	// (0x000096eb) bg_popup_fep_char_preview_window_g3

0x96f3,	// (0x000096f3) bg_popup_fep_char_preview_window_g4

0x96fb,	// (0x000096fb) bg_popup_fep_char_preview_window_g5

0x9703,	// (0x00009703) bg_popup_fep_char_preview_window_g6

0x970b,	// (0x0000970b) bg_popup_fep_char_preview_window_g7

0x9713,	// (0x00009713) bg_popup_fep_char_preview_window_g8

0x971b,	// (0x0000971b) bg_popup_fep_char_preview_window_g9

0x0008,

0xb33c,	// (0x0000b33c) bg_popup_fep_char_preview_window_g

0x6a7d,	// (0x00006a7d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a7d,	// (0x00006a7d) cell_vkb2_top_candi_pane_g1

0x6de8,	// (0x00006de8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6de8,	// (0x00006de8) cell_vkb2_top_candi_pane_g2

0x6e09,	// (0x00006e09) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6e09,	// (0x00006e09) cell_vkb2_top_candi_pane_g3

0x9723,	// (0x00009723) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9723,	// (0x00009723) cell_vkb2_top_candi_pane_g4

0x9744,	// (0x00009744) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9744,	// (0x00009744) cell_vkb2_top_candi_pane_g5

0x8538,	// (0x00008538) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8538,	// (0x00008538) cell_vkb2_top_candi_pane_g6

0x0005,

0xb34f,	// (0x0000b34f) cell_vkb2_top_candi_pane_g_ParamLimits

0xb34f,	// (0x0000b34f) cell_vkb2_top_candi_pane_g

0x9765,	// (0x00009765) cell_vkb2_top_candi_pane_t1

0x4e38,	// (0x00004e38) aid_size_touch_slider_mark_ParamLimits

0x4e38,	// (0x00004e38) aid_size_touch_slider_mark

0xebf4,	// (0x0000ebf4) grid_graphic2_catg_pane_ParamLimits

0xebf4,	// (0x0000ebf4) grid_graphic2_catg_pane

0xecb0,	// (0x0000ecb0) popup_grid_graphic2_window_t1_ParamLimits

0xecb0,	// (0x0000ecb0) popup_grid_graphic2_window_t1

0xecc6,	// (0x0000ecc6) popup_grid_graphic2_window_t2_ParamLimits

0xecc6,	// (0x0000ecc6) popup_grid_graphic2_window_t2

0x0001,

0xf718,	// (0x0000f718) popup_grid_graphic2_window_t_ParamLimits

0xf718,	// (0x0000f718) popup_grid_graphic2_window_t

0x0831,	// (0x00000831) bg_button_pane_cp05_ParamLimits

0xee4c,	// (0x0000ee4c) cell_graphic2_control_pane_g1_ParamLimits

0xef3a,	// (0x0000ef3a) cell_graphic2_catg_pane_ParamLimits

0xef3a,	// (0x0000ef3a) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xef4c,	// (0x0000ef4c) cell_graphic2_catg_pane_g1

0x8670,	// (0x00008670) cell_tb_ext_pane_t1_ParamLimits

0x908b,	// (0x0000908b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x908b,	// (0x0000908b) vkb2_top_cell_right_narrow_pane

0x90a3,	// (0x000090a3) vkb2_top_cell_right_wide_pane_ParamLimits

0x90a3,	// (0x000090a3) vkb2_top_cell_right_wide_pane

0x6647,	// (0x00006647) bg_vkb2_func_pane_ParamLimits

0x6647,	// (0x00006647) bg_vkb2_func_pane

0x9114,	// (0x00009114) vkb2_top_cell_left_pane_g1_ParamLimits

0x6647,	// (0x00006647) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6647,	// (0x00006647) bg_vkb2_fuc_pane_cp03

0x9189,	// (0x00009189) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x36c3,	// (0x000036c3) bg_vkb2_func_pane_g1

0x36cb,	// (0x000036cb) bg_vkb2_func_pane_g2

0x36db,	// (0x000036db) bg_vkb2_func_pane_g3

0x36d3,	// (0x000036d3) bg_vkb2_func_pane_g4

0x36e3,	// (0x000036e3) bg_vkb2_func_pane_g5

0x36eb,	// (0x000036eb) bg_vkb2_func_pane_g6

0x36f3,	// (0x000036f3) bg_vkb2_func_pane_g7

0x36fb,	// (0x000036fb) bg_vkb2_func_pane_g8

0x36bb,	// (0x000036bb) bg_vkb2_func_pane_g9

0x0008,

0xb35c,	// (0x0000b35c) bg_vkb2_func_pane_g

0x6647,	// (0x00006647) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6647,	// (0x00006647) bg_vkb2_fuc_pane_cp01

0x9114,	// (0x00009114) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9114,	// (0x00009114) vkb2_top_cell_right_wide_pane_g1

0x6647,	// (0x00006647) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6647,	// (0x00006647) bg_vkb2_fuc_pane_cp02

0x9189,	// (0x00009189) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9189,	// (0x00009189) vkb2_top_cell_right_narrow_pane_g1

0xe0ba,	// (0x0000e0ba) aid_touch_area_decrease_ParamLimits

0xe0ba,	// (0x0000e0ba) aid_touch_area_decrease

0xe0ee,	// (0x0000e0ee) aid_touch_area_increase_ParamLimits

0xe0ee,	// (0x0000e0ee) aid_touch_area_increase

0xe116,	// (0x0000e116) aid_touch_area_mute_ParamLimits

0xe116,	// (0x0000e116) aid_touch_area_mute

0xe146,	// (0x0000e146) aid_touch_area_slider_ParamLimits

0xe146,	// (0x0000e146) aid_touch_area_slider

0xe186,	// (0x0000e186) popup_slider_window_g4_ParamLimits

0xe186,	// (0x0000e186) popup_slider_window_g4

0xe1ae,	// (0x0000e1ae) popup_slider_window_g5_ParamLimits

0xe1ae,	// (0x0000e1ae) popup_slider_window_g5

0xe1e2,	// (0x0000e1e2) popup_slider_window_g6_ParamLimits

0xe1e2,	// (0x0000e1e2) popup_slider_window_g6

0x837d,	// (0x0000837d) popup_slider_window_t2_ParamLimits

0x837d,	// (0x0000837d) popup_slider_window_t2

0x0001,

0xb258,	// (0x0000b258) popup_slider_window_t_ParamLimits

0xb258,	// (0x0000b258) popup_slider_window_t

0xe1fe,	// (0x0000e1fe) slider_pane_ParamLimits

0xe1fe,	// (0x0000e1fe) slider_pane

0x979f,	// (0x0000979f) slider_pane_g1_ParamLimits

0x979f,	// (0x0000979f) slider_pane_g1

0x97b3,	// (0x000097b3) slider_pane_g2_ParamLimits

0x97b3,	// (0x000097b3) slider_pane_g2

0x97c9,	// (0x000097c9) slider_pane_g3_ParamLimits

0x97c9,	// (0x000097c9) slider_pane_g3

0x0003,

0xb36f,	// (0x0000b36f) slider_pane_g_ParamLimits

0xb36f,	// (0x0000b36f) slider_pane_g

0xcaad,	// (0x0000caad) popup_tb_float_extension_window_ParamLimits

0xcaad,	// (0x0000caad) popup_tb_float_extension_window

0x97f5,	// (0x000097f5) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9801,	// (0x00009801) grid_tb_float_ext_pane

0x980b,	// (0x0000980b) cell_tb_float_ext_pane_ParamLimits

0x980b,	// (0x0000980b) cell_tb_float_ext_pane

0x9825,	// (0x00009825) cell_tb_float_ext_pane_g1

0x982e,	// (0x0000982e) grid_highlight_pane_cp12

0xd971,	// (0x0000d971) cell_last_hwr_side_pane_ParamLimits

0xd971,	// (0x0000d971) cell_last_hwr_side_pane

0x65eb,	// (0x000065eb) cell_last_hwr_side_pane_g1

0x9837,	// (0x00009837) cell_last_hwr_side_pane_g2

0x0001,

0xb378,	// (0x0000b378) cell_last_hwr_side_pane_g

0xeac4,	// (0x0000eac4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xeac4,	// (0x0000eac4) vkb2_area_bottom_space_btn_pane

0x6a7d,	// (0x00006a7d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9268,	// (0x00009268) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9765,	// (0x00009765) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9840,	// (0x00009840) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9840,	// (0x00009840) vkb2_area_bottom_space_btn_pane_g1

0x987a,	// (0x0000987a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x987a,	// (0x0000987a) vkb2_area_bottom_space_btn_pane_g2

0x98b0,	// (0x000098b0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x98b0,	// (0x000098b0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb37d,	// (0x0000b37d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb37d,	// (0x0000b37d) vkb2_area_bottom_space_btn_pane_g

0x670a,	// (0x0000670a) cel_fep_hwr_func_pane_ParamLimits

0x670a,	// (0x0000670a) cel_fep_hwr_func_pane

0xd946,	// (0x0000d946) cell_hwr_side_button_pane_ParamLimits

0xd946,	// (0x0000d946) cell_hwr_side_button_pane

0x86a4,	// (0x000086a4) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x86b6,	// (0x000086b6) uniindi_top_pane_g1_ParamLimits

0x86cc,	// (0x000086cc) uniindi_top_pane_g2_ParamLimits

0x86d8,	// (0x000086d8) uniindi_top_pane_g3_ParamLimits

0x86e9,	// (0x000086e9) uniindi_top_pane_g4_ParamLimits

0xb290,	// (0x0000b290) uniindi_top_pane_g_ParamLimits

0x86f6,	// (0x000086f6) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x98fa,	// (0x000098fa) cel_fep_hwr_func_pane_g1_ParamLimits

0x98fa,	// (0x000098fa) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x98fa,	// (0x000098fa) cell_hwr_side_button_pane_g1_ParamLimits

0x98fa,	// (0x000098fa) cell_hwr_side_button_pane_g1

0x3496,	// (0x00003496) status_pane_g4_ParamLimits

0x3496,	// (0x00003496) status_pane_g4

0x34b0,	// (0x000034b0) status_pane_t1

0x6325,	// (0x00006325) form2_midp_gauge_slider_cont_pane

0x632d,	// (0x0000632d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd89c,	// (0x0000d89c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd8ae,	// (0x0000d8ae) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf664,	// (0x0000f664) form2_midp_gauge_slider_pane_t_ParamLimits

0x6363,	// (0x00006363) form2_midp_slider_pane_ParamLimits

0x8c0b,	// (0x00008c0b) aid_size_cell_func_vkb2_ParamLimits

0x8c0b,	// (0x00008c0b) aid_size_cell_func_vkb2

0x97e1,	// (0x000097e1) slider_pane_g4_ParamLimits

0x97e1,	// (0x000097e1) slider_pane_g4

0xef55,	// (0x0000ef55) form2_midp_gauge_slider_pane_t2_cp01

0xef63,	// (0x0000ef63) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef63,	// (0x0000ef63) form2_midp_gauge_slider_pane_t3_cp01

0x9933,	// (0x00009933) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9967,	// (0x00009967) navi_smil_pane_g1

0x996f,	// (0x0000996f) navi_smil_pane_t1

0x993c,	// (0x0000993c) form2_midp_slider_pane_g1

0x9945,	// (0x00009945) form2_midp_slider_pane_g2

0x994d,	// (0x0000994d) form2_midp_slider_pane_g3

0x993c,	// (0x0000993c) form2_midp_slider_pane_g4

0xef80,	// (0x0000ef80) form2_midp_slider_pane_g5

0x0004,

0xf732,	// (0x0000f732) form2_midp_slider_pane_g

0x98ea,	// (0x000098ea) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x98ea,	// (0x000098ea) vkb2_area_bottom_space_btn_pane_g4

0xcc90,	// (0x0000cc90) lc0_navi_pane_ParamLimits

0xcc90,	// (0x0000cc90) lc0_navi_pane

0xccfa,	// (0x0000ccfa) lc0_stat_indi_pane_ParamLimits

0xccfa,	// (0x0000ccfa) lc0_stat_indi_pane

0xcd0f,	// (0x0000cd0f) ls0_title_pane_ParamLimits

0xcd0f,	// (0x0000cd0f) ls0_title_pane

0x1399,	// (0x00001399) bg_popup_sub_pane_cp14_ParamLimits

0x868b,	// (0x0000868b) list_uniindi_pane_ParamLimits

0x8697,	// (0x00008697) uniindi_top_pane_ParamLimits

0x8733,	// (0x00008733) list_single_uniindi_pane_g1_ParamLimits

0x8746,	// (0x00008746) list_single_uniindi_pane_t1_ParamLimits

0xef8b,	// (0x0000ef8b) lc0_stat_clock_pane_ParamLimits

0xef8b,	// (0x0000ef8b) lc0_stat_clock_pane

0xef98,	// (0x0000ef98) lc0_stat_indi_pane_g1_ParamLimits

0xef98,	// (0x0000ef98) lc0_stat_indi_pane_g1

0xefa5,	// (0x0000efa5) lc0_stat_indi_pane_g2_ParamLimits

0xefa5,	// (0x0000efa5) lc0_stat_indi_pane_g2

0x0001,

0xf73d,	// (0x0000f73d) lc0_stat_indi_pane_g_ParamLimits

0xf73d,	// (0x0000f73d) lc0_stat_indi_pane_g

0xefb2,	// (0x0000efb2) lc0_uni_indicator_pane_ParamLimits

0xefb2,	// (0x0000efb2) lc0_uni_indicator_pane

0xefbf,	// (0x0000efbf) ls0_title_pane_g1_ParamLimits

0xefbf,	// (0x0000efbf) ls0_title_pane_g1

0xefd3,	// (0x0000efd3) ls0_title_pane_t1_ParamLimits

0xefd3,	// (0x0000efd3) ls0_title_pane_t1

0xf001,	// (0x0000f001) lc0_uni_indicator_pane_g1_ParamLimits

0xf001,	// (0x0000f001) lc0_uni_indicator_pane_g1

0x9a0f,	// (0x00009a0f) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9a1d,	// (0x00009a1d) ai5_sk_pane_ParamLimits

0x9a1d,	// (0x00009a1d) ai5_sk_pane

0xf028,	// (0x0000f028) cell_ai5_widget_pane_ParamLimits

0xf028,	// (0x0000f028) cell_ai5_widget_pane

0x9ae0,	// (0x00009ae0) aid_size_cell_widget_grid

0x9af6,	// (0x00009af6) bg_ai5_widget_pane_ParamLimits

0x9af6,	// (0x00009af6) bg_ai5_widget_pane

0x9b60,	// (0x00009b60) cell_ai5_widget_pane_g2

0x9b70,	// (0x00009b70) cell_ai5_widget_pane_g3

0x9b8f,	// (0x00009b8f) cell_ai5_widget_pane_g4

0x9b9b,	// (0x00009b9b) cell_ai5_widget_pane_g5

0x9ba7,	// (0x00009ba7) cell_ai5_widget_pane_g6

0x9bb3,	// (0x00009bb3) cell_ai5_widget_pane_g7

0x9bfb,	// (0x00009bfb) cell_ai5_widget_pane_t1_ParamLimits

0x9bfb,	// (0x00009bfb) cell_ai5_widget_pane_t1

0x9c18,	// (0x00009c18) cell_ai5_widget_pane_t2_ParamLimits

0x9c18,	// (0x00009c18) cell_ai5_widget_pane_t2

0x9c30,	// (0x00009c30) cell_ai5_widget_pane_t3_ParamLimits

0x9c30,	// (0x00009c30) cell_ai5_widget_pane_t3

0x9c48,	// (0x00009c48) cell_ai5_widget_pane_t4_ParamLimits

0x9c48,	// (0x00009c48) cell_ai5_widget_pane_t4

0x9c62,	// (0x00009c62) cell_ai5_widget_pane_t5_ParamLimits

0x9c62,	// (0x00009c62) cell_ai5_widget_pane_t5

0x9c81,	// (0x00009c81) cell_ai5_widget_pane_t6_ParamLimits

0x9c81,	// (0x00009c81) cell_ai5_widget_pane_t6

0x9c93,	// (0x00009c93) cell_ai5_widget_pane_t7_ParamLimits

0x9c93,	// (0x00009c93) cell_ai5_widget_pane_t7

0x9cac,	// (0x00009cac) cell_ai5_widget_pane_t8_ParamLimits

0x9cac,	// (0x00009cac) cell_ai5_widget_pane_t8

0x0009,

0xb3ab,	// (0x0000b3ab) cell_ai5_widget_pane_t_ParamLimits

0xb3ab,	// (0x0000b3ab) cell_ai5_widget_pane_t

0x9cf8,	// (0x00009cf8) grid_ai5_widget_pane

0x1399,	// (0x00001399) highlight_cell_ai5_widget_pane_ParamLimits

0x1399,	// (0x00001399) highlight_cell_ai5_widget_pane

0xf092,	// (0x0000f092) ai5_sk_left_pane

0xf09c,	// (0x0000f09c) ai5_sk_middle_pane

0xf0a6,	// (0x0000f0a6) ai5_sk_right_pane

0x9d2e,	// (0x00009d2e) bg_ai5_widget_pane_g1_ParamLimits

0x9d2e,	// (0x00009d2e) bg_ai5_widget_pane_g1

0x9d3a,	// (0x00009d3a) bg_ai5_widget_pane_g2_ParamLimits

0x9d3a,	// (0x00009d3a) bg_ai5_widget_pane_g2

0x9d46,	// (0x00009d46) bg_ai5_widget_pane_g3_ParamLimits

0x9d46,	// (0x00009d46) bg_ai5_widget_pane_g3

0x9d52,	// (0x00009d52) bg_ai5_widget_pane_g4_ParamLimits

0x9d52,	// (0x00009d52) bg_ai5_widget_pane_g4

0x9d5e,	// (0x00009d5e) bg_ai5_widget_pane_g5_ParamLimits

0x9d5e,	// (0x00009d5e) bg_ai5_widget_pane_g5

0x9d6a,	// (0x00009d6a) bg_ai5_widget_pane_g6_ParamLimits

0x9d6a,	// (0x00009d6a) bg_ai5_widget_pane_g6

0x9d76,	// (0x00009d76) bg_ai5_widget_pane_g7_ParamLimits

0x9d76,	// (0x00009d76) bg_ai5_widget_pane_g7

0x9d82,	// (0x00009d82) bg_ai5_widget_pane_g8_ParamLimits

0x9d82,	// (0x00009d82) bg_ai5_widget_pane_g8

0x9d8e,	// (0x00009d8e) bg_ai5_widget_pane_g9_ParamLimits

0x9d8e,	// (0x00009d8e) bg_ai5_widget_pane_g9

0x0008,

0xb3c0,	// (0x0000b3c0) bg_ai5_widget_pane_g_ParamLimits

0xb3c0,	// (0x0000b3c0) bg_ai5_widget_pane_g

0x9dc1,	// (0x00009dc1) cell_shortcut_ai5_widget_pane_ParamLimits

0x9dc1,	// (0x00009dc1) cell_shortcut_ai5_widget_pane

0x2609,	// (0x00002609) bg_cell_shortcut_ai5_widget_pane

0x9dd2,	// (0x00009dd2) cell_grid_ai5_widget_pane_g1

0x9ddb,	// (0x00009ddb) highlight_cell_shortcut_ai5_widget_pane

0x36cb,	// (0x000036cb) ai5_sk_left_pane_g1

0x9de3,	// (0x00009de3) ai5_sk_left_pane_g2

0x9deb,	// (0x00009deb) ai5_sk_left_pane_g3

0x9df3,	// (0x00009df3) ai5_sk_left_pane_g4

0x0003,

0xb3d3,	// (0x0000b3d3) ai5_sk_left_pane_g

0x9dfb,	// (0x00009dfb) ai5_sk_left_pane_t1

0x36c3,	// (0x000036c3) ai5_sk_right_pane_g1

0x9e09,	// (0x00009e09) ai5_sk_right_pane_g2

0x9e11,	// (0x00009e11) ai5_sk_right_pane_g3

0x9e19,	// (0x00009e19) ai5_sk_right_pane_g4

0x0003,

0xb3dc,	// (0x0000b3dc) ai5_sk_right_pane_g

0x9e21,	// (0x00009e21) ai5_sk_right_pane_t1

0x36c3,	// (0x000036c3) ai5_sk_middle_pane_g1

0x36cb,	// (0x000036cb) ai5_sk_middle_pane_g2

0x36e3,	// (0x000036e3) ai5_sk_middle_pane_g3

0x9e11,	// (0x00009e11) ai5_sk_middle_pane_g4

0x9deb,	// (0x00009deb) ai5_sk_middle_pane_g5

0x9e2f,	// (0x00009e2f) ai5_sk_middle_pane_g6

0xf0b0,	// (0x0000f0b0) ai5_sk_middle_pane_g7

0x0006,

0xf742,	// (0x0000f742) ai5_sk_middle_pane_g

0xcb7c,	// (0x0000cb7c) aid_touch_area_size_lc0_ParamLimits

0xcb7c,	// (0x0000cb7c) aid_touch_area_size_lc0

0x6e2a,	// (0x00006e2a) cell_hwr_candidate_pane_t1_ParamLimits

0x317f,	// (0x0000317f) aid_touch_navi_pane

0xce02,	// (0x0000ce02) status_dt_navi_pane_ParamLimits

0xce02,	// (0x0000ce02) status_dt_navi_pane

0xce1a,	// (0x0000ce1a) status_dt_sta_pane_ParamLimits

0xce1a,	// (0x0000ce1a) status_dt_sta_pane

0xf0b8,	// (0x0000f0b8) dt_sta_controll_pane

0xf0c5,	// (0x0000f0c5) dt_sta_indi_pane

0xf0d2,	// (0x0000f0d2) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0xf0e4,	// (0x0000f0e4) dt_sta_battery_pane

0xf0ec,	// (0x0000f0ec) dt_sta_indi_pane_g1

0x9e81,	// (0x00009e81) dt_sta_indi_pane_g2

0x9e8a,	// (0x00009e8a) dt_sta_indi_pane_g3

0x0002,

0xf751,	// (0x0000f751) dt_sta_indi_pane_g

0x9e93,	// (0x00009e93) dt_sta_signal_pane

0x1399,	// (0x00001399) bg_dt_sta_title_pane_ParamLimits

0x1399,	// (0x00001399) bg_dt_sta_title_pane

0x9e9c,	// (0x00009e9c) dt_sta_title_pane_g1

0x9ea4,	// (0x00009ea4) dt_sta_title_pane_t1_ParamLimits

0x9ea4,	// (0x00009ea4) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xf0f5,	// (0x0000f0f5) dt_sta_controll_pane_g1

0x9ec2,	// (0x00009ec2) bg_dt_sta_title_pane_g1

0x9ecb,	// (0x00009ecb) bg_dt_sta_title_pane_g2

0x9ed4,	// (0x00009ed4) bg_dt_sta_title_pane_g3

0x0002,

0xb3fb,	// (0x0000b3fb) bg_dt_sta_title_pane_g

0x65eb,	// (0x000065eb) bg_dt_sta_indi_pane_g1

0x9edd,	// (0x00009edd) dt_sta_signal_pane_g1

0x9ee5,	// (0x00009ee5) dt_sta_signal_pane_g2

0x0001,

0xb402,	// (0x0000b402) dt_sta_signal_pane_g

0x9eed,	// (0x00009eed) dt_sta_battery_pane_g1

0x9ef6,	// (0x00009ef6) dt_sta_battery_pane_t1

0x65eb,	// (0x000065eb) bg_dt_sta_control_pane_g1

0x1f43,	// (0x00001f43) fep_china_uni_eep_pane

0x1f4b,	// (0x00001f4b) fep_china_uni_entry_pane_ParamLimits

0x1f5b,	// (0x00001f5b) popup_fep_china_uni_window_g1_ParamLimits

0x1f6b,	// (0x00001f6b) popup_fep_china_uni_window_g2_ParamLimits

0x1f6b,	// (0x00001f6b) popup_fep_china_uni_window_g2

0x0001,

0xac8b,	// (0x0000ac8b) popup_fep_china_uni_window_g_ParamLimits

0xac8b,	// (0x0000ac8b) popup_fep_china_uni_window_g

0x9f05,	// (0x00009f05) fep_china_uni_eep_pane_g1

0x9f0d,	// (0x00009f0d) fep_china_uni_eep_pane_t1

0x995e,	// (0x0000995e) aid_touch_area_size_smil_player

0x32cb,	// (0x000032cb) lc0_clock_pane

0x34a4,	// (0x000034a4) status_pane_g5_ParamLimits

0x34a4,	// (0x000034a4) status_pane_g5

0xc62f,	// (0x0000c62f) popup_keymap_window

0x346a,	// (0x0000346a) status_icon_pane

0x9b70,	// (0x00009b70) cell_ai5_widget_pane_g3_ParamLimits

0x9b8f,	// (0x00009b8f) cell_ai5_widget_pane_g4_ParamLimits

0x9b9b,	// (0x00009b9b) cell_ai5_widget_pane_g5_ParamLimits

0x9bbf,	// (0x00009bbf) cell_ai5_widget_pane_g8_ParamLimits

0x9bbf,	// (0x00009bbf) cell_ai5_widget_pane_g8

0x9bd3,	// (0x00009bd3) cell_ai5_widget_pane_g9_ParamLimits

0x9bd3,	// (0x00009bd3) cell_ai5_widget_pane_g9

0x9be7,	// (0x00009be7) cell_ai5_widget_pane_g10_ParamLimits

0x9be7,	// (0x00009be7) cell_ai5_widget_pane_g10

0x9f1c,	// (0x00009f1c) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9f24,	// (0x00009f24) popup_keymap_window_t1

0xc341,	// (0x0000c341) control_pane_g6_ParamLimits

0xc341,	// (0x0000c341) control_pane_g6

0xc34e,	// (0x0000c34e) control_pane_g7_ParamLimits

0xc34e,	// (0x0000c34e) control_pane_g7

0xc35b,	// (0x0000c35b) control_pane_g8_ParamLimits

0xc35b,	// (0x0000c35b) control_pane_g8

0xf0b8,	// (0x0000f0b8) dt_sta_controll_pane_ParamLimits

0xf0c5,	// (0x0000f0c5) dt_sta_indi_pane_ParamLimits

0xf0d2,	// (0x0000f0d2) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb5b7,	// (0x0000b5b7) popup_sk_window

0x3f38,	// (0x00003f38) bg_popup_sub_pane_cp28_ParamLimits

0x3f38,	// (0x00003f38) bg_popup_sub_pane_cp28

0x9f32,	// (0x00009f32) popup_discreet_window_g1_ParamLimits

0x9f32,	// (0x00009f32) popup_discreet_window_g1

0x9f52,	// (0x00009f52) popup_discreet_window_t1_ParamLimits

0x9f52,	// (0x00009f52) popup_discreet_window_t1

0x9f70,	// (0x00009f70) popup_discreet_window_t2_ParamLimits

0x9f70,	// (0x00009f70) popup_discreet_window_t2

0x0002,

0xb407,	// (0x0000b407) popup_discreet_window_t_ParamLimits

0xb407,	// (0x0000b407) popup_discreet_window_t

0x9fc2,	// (0x00009fc2) popup_sk_window_g1

0x9fcc,	// (0x00009fcc) popup_sk_window_g2

0x0001,

0xb40e,	// (0x0000b40e) popup_sk_window_g

0x9fd6,	// (0x00009fd6) popup_sk_window_t1

0x9fe4,	// (0x00009fe4) popup_sk_window_t1_copy1

0x9b60,	// (0x00009b60) cell_ai5_widget_pane_g2_ParamLimits

0x9cbe,	// (0x00009cbe) cell_ai5_widget_pane_t9_ParamLimits

0x9cbe,	// (0x00009cbe) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xf0fe,	// (0x0000f0fe) aid_fshwr2_btn_pane

0xf10d,	// (0x0000f10d) aid_fshwr2_syb_pane

0xf11f,	// (0x0000f11f) aid_fshwr2_txt_pane

0xf12e,	// (0x0000f12e) fshwr2_func_candi_pane

0xf13f,	// (0x0000f13f) fshwr2_hwr_syb_pane

0xf15a,	// (0x0000f15a) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xf172,	// (0x0000f172) fshwr2_icf_pane_t1_ParamLimits

0xf172,	// (0x0000f172) fshwr2_icf_pane_t1

0x65eb,	// (0x000065eb) fshwr2_func_candi_pane_g1

0xa087,	// (0x0000a087) fshwr2_func_candi_row_pane_ParamLimits

0xa087,	// (0x0000a087) fshwr2_func_candi_row_pane

0xf18a,	// (0x0000f18a) cell_fshwr2_syb_pane_ParamLimits

0xf18a,	// (0x0000f18a) cell_fshwr2_syb_pane

0x6a7d,	// (0x00006a7d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a7d,	// (0x00006a7d) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xa0b2,	// (0x0000a0b2) fshwr2_func_candi_cell_pane_ParamLimits

0xa0b2,	// (0x0000a0b2) fshwr2_func_candi_cell_pane

0xa0e3,	// (0x0000a0e3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa0e3,	// (0x0000a0e3) fshwr2_func_candi_cell_bg_pane

0xa0fd,	// (0x0000a0fd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa0fd,	// (0x0000a0fd) fshwr2_func_candi_cell_pane_g1

0xa125,	// (0x0000a125) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa125,	// (0x0000a125) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x2609,	// (0x00002609) cell_fshwr2_syb_bg_pane

0xf1a4,	// (0x0000f1a4) cell_fshwr2_syb_bg_pane_g1

0xf1ac,	// (0x0000f1ac) cell_fshwr2_syb_bg_pane_t1

0x1399,	// (0x00001399) main_tmo_pane

0xd397,	// (0x0000d397) uni_indicator_pane_g1_ParamLimits

0xd3ac,	// (0x0000d3ac) uni_indicator_pane_g2_ParamLimits

0x4bd6,	// (0x00004bd6) uni_indicator_pane_g3_ParamLimits

0x4bec,	// (0x00004bec) uni_indicator_pane_g4_ParamLimits

0x4bec,	// (0x00004bec) uni_indicator_pane_g4

0x4c00,	// (0x00004c00) uni_indicator_pane_g5_ParamLimits

0x4c00,	// (0x00004c00) uni_indicator_pane_g5

0x4c14,	// (0x00004c14) uni_indicator_pane_g6_ParamLimits

0x4c14,	// (0x00004c14) uni_indicator_pane_g6

0xf60b,	// (0x0000f60b) uni_indicator_pane_g_ParamLimits

0xe096,	// (0x0000e096) popup_tmo_note_window_ParamLimits

0xe096,	// (0x0000e096) popup_tmo_note_window

0x1399,	// (0x00001399) fshwr2_bg_pane

0xa116,	// (0x0000a116) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa116,	// (0x0000a116) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb413,	// (0x0000b413) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb413,	// (0x0000b413) fshwr2_func_candi_cell_pane_g

0x65eb,	// (0x000065eb) bg_popup_window_pane_cp01

0xa14f,	// (0x0000a14f) bg_popup_window_pane_g1_cp01

0xa158,	// (0x0000a158) bg_popup_window_pane_cp22_ParamLimits

0xa158,	// (0x0000a158) bg_popup_window_pane_cp22

0xa166,	// (0x0000a166) listscroll_tmo_link_pane_ParamLimits

0xa166,	// (0x0000a166) listscroll_tmo_link_pane

0xa1a6,	// (0x0000a1a6) popup_tmo_note_window_g1_ParamLimits

0xa1a6,	// (0x0000a1a6) popup_tmo_note_window_g1

0xa1b3,	// (0x0000a1b3) tmo_note_info_pane_ParamLimits

0xa1b3,	// (0x0000a1b3) tmo_note_info_pane

0xf1bb,	// (0x0000f1bb) list_tmo_note_info_pane_g1_ParamLimits

0xf1bb,	// (0x0000f1bb) list_tmo_note_info_pane_g1

0xa1e4,	// (0x0000a1e4) list_tmo_note_info_pane_g2_ParamLimits

0xa1e4,	// (0x0000a1e4) list_tmo_note_info_pane_g2

0x0001,

0xf758,	// (0x0000f758) list_tmo_note_info_pane_g_ParamLimits

0xf758,	// (0x0000f758) list_tmo_note_info_pane_g

0xa200,	// (0x0000a200) list_tmo_note_info_text_pane_ParamLimits

0xa200,	// (0x0000a200) list_tmo_note_info_text_pane

0xa281,	// (0x0000a281) list_tmo_link_pane

0xa28e,	// (0x0000a28e) scroll_pane_cp20

0xa29b,	// (0x0000a29b) list_single_tmo_link_pane_ParamLimits

0xa29b,	// (0x0000a29b) list_single_tmo_link_pane

0xa2ab,	// (0x0000a2ab) list_single_tmo_link_pane_t1

0xa2b9,	// (0x0000a2b9) list_tmo_note_info_text_pane_t1_ParamLimits

0xa2b9,	// (0x0000a2b9) list_tmo_note_info_text_pane_t1

0xbec3,	// (0x0000bec3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbec3,	// (0x0000bec3) aid_size_touch_scroll_bar_cp01

0xbdf3,	// (0x0000bdf3) aid_size_touch_slider_marker

0xb5a7,	// (0x0000b5a7) popup_settings_window_ParamLimits

0xb5a7,	// (0x0000b5a7) popup_settings_window

0x2ba2,	// (0x00002ba2) popup_candi_list_indi_window

0x317f,	// (0x0000317f) aid_touch_navi_pane_ParamLimits

0x8412,	// (0x00008412) rs_clock_indi_pane

0x841b,	// (0x0000841b) sctrl_sk_bottom_pane_ParamLimits

0x842c,	// (0x0000842c) sctrl_sk_top_pane_ParamLimits

0x8c65,	// (0x00008c65) popup_fep_tooltip_window

0x9ae0,	// (0x00009ae0) aid_size_cell_widget_grid_ParamLimits

0x9b54,	// (0x00009b54) cell_ai5_widget_pane_g1_ParamLimits

0x9b54,	// (0x00009b54) cell_ai5_widget_pane_g1

0x9ba7,	// (0x00009ba7) cell_ai5_widget_pane_g6_ParamLimits

0x9bb3,	// (0x00009bb3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb396,	// (0x0000b396) cell_ai5_widget_pane_g_ParamLimits

0xb396,	// (0x0000b396) cell_ai5_widget_pane_g

0x9ce2,	// (0x00009ce2) cell_ai5_widget_pane_t10_ParamLimits

0x9ce2,	// (0x00009ce2) cell_ai5_widget_pane_t10

0x9cf8,	// (0x00009cf8) grid_ai5_widget_pane_ParamLimits

0x9d9a,	// (0x00009d9a) cell_contacts_ai5_widget_pane_ParamLimits

0x9d9a,	// (0x00009d9a) cell_contacts_ai5_widget_pane

0x9f85,	// (0x00009f85) popup_discreet_window_t3_ParamLimits

0x9f85,	// (0x00009f85) popup_discreet_window_t3

0xa05c,	// (0x0000a05c) popup_fshwr2_char_preview_window_ParamLimits

0xa05c,	// (0x0000a05c) popup_fshwr2_char_preview_window

0xf1d2,	// (0x0000f1d2) tmo_note_info_pane_t1

0xf1e7,	// (0x0000f1e7) tmo_note_info_pane_t2

0xf1fe,	// (0x0000f1fe) tmo_note_info_pane_t3

0xa25d,	// (0x0000a25d) tmo_note_info_pane_t4

0xa26f,	// (0x0000a26f) tmo_note_info_pane_t5

0x0004,

0xf75d,	// (0x0000f75d) tmo_note_info_pane_t

0xa281,	// (0x0000a281) list_tmo_link_pane_ParamLimits

0xa28e,	// (0x0000a28e) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa2d2,	// (0x0000a2d2) popup_fshwr2_char_preview_window_t1

0xa2e0,	// (0x0000a2e0) popup_candi_list_indi_window_g1

0xa2e9,	// (0x0000a2e9) bg_cell_contacts_ai5_widget_pane

0xa2f5,	// (0x0000a2f5) cell_contacts_ai5_widget_pane_g1

0xa309,	// (0x0000a309) cell_contacts_ai5_widget_pane_g2

0xa315,	// (0x0000a315) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb428,	// (0x0000b428) cell_contacts_ai5_widget_pane_g

0xa328,	// (0x0000a328) cell_contacts_ai5_widget_pane_t1

0x1399,	// (0x00001399) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf278,	// (0x0000f278) settings_container_pane

0x2609,	// (0x00002609) listscroll_set_pane_copy1

0x59e4,	// (0x000059e4) scroll_pane_cp121_copy1

0xa3ab,	// (0x0000a3ab) set_content_pane_copy1

0xf284,	// (0x0000f284) aid_height_set_list_copy1_ParamLimits

0xf284,	// (0x0000f284) aid_height_set_list_copy1

0x4efc,	// (0x00004efc) aid_size_parent_copy1_ParamLimits

0x4efc,	// (0x00004efc) aid_size_parent_copy1

0xf290,	// (0x0000f290) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf290,	// (0x0000f290) button_value_adjust_pane_cp6_copy1

0x2b7a,	// (0x00002b7a) list_highlight_pane_cp2_copy1_ParamLimits

0x2b7a,	// (0x00002b7a) list_highlight_pane_cp2_copy1

0xf2a4,	// (0x0000f2a4) list_set_pane_copy1_ParamLimits

0xf2a4,	// (0x0000f2a4) list_set_pane_copy1

0xf213,	// (0x0000f213) main_pane_set_t1_copy1_ParamLimits

0xf213,	// (0x0000f213) main_pane_set_t1_copy1

0xf24d,	// (0x0000f24d) main_pane_set_t2_copy1_ParamLimits

0xf24d,	// (0x0000f24d) main_pane_set_t2_copy1

0xf351,	// (0x0000f351) main_pane_set_t3_copy1

0xf35f,	// (0x0000f35f) main_pane_set_t4_copy1

0xf26c,	// (0x0000f26c) set_content_pane_g1_copy1_ParamLimits

0xf26c,	// (0x0000f26c) set_content_pane_g1_copy1

0xf36d,	// (0x0000f36d) setting_code_pane_copy1

0xa4a4,	// (0x0000a4a4) setting_slider_graphic_pane_copy1

0xa4a4,	// (0x0000a4a4) setting_slider_pane_copy1

0xa4a4,	// (0x0000a4a4) setting_text_pane_copy1

0xa4a4,	// (0x0000a4a4) setting_volume_pane_copy1

0xf36d,	// (0x0000f36d) settings_code_pane_cp2_copy1

0xf375,	// (0x0000f375) settings_code_pane_cp_copy1_ParamLimits

0xf375,	// (0x0000f375) settings_code_pane_cp_copy1

0xf389,	// (0x0000f389) volume_set_pane_copy1

0xf391,	// (0x0000f391) volume_set_pane_g10_copy1

0xf399,	// (0x0000f399) volume_set_pane_g1_copy1

0xf3a1,	// (0x0000f3a1) volume_set_pane_g2_copy1

0xf3a9,	// (0x0000f3a9) volume_set_pane_g3_copy1

0xf3b1,	// (0x0000f3b1) volume_set_pane_g4_copy1

0xf3b9,	// (0x0000f3b9) volume_set_pane_g5_copy1

0xf3c1,	// (0x0000f3c1) volume_set_pane_g6_copy1

0xf3c9,	// (0x0000f3c9) volume_set_pane_g7_copy1

0xf3d1,	// (0x0000f3d1) volume_set_pane_g8_copy1

0xf3d9,	// (0x0000f3d9) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa518,	// (0x0000a518) setting_slider_pane_t1_copy1_ParamLimits

0xa518,	// (0x0000a518) setting_slider_pane_t1_copy1

0xf3e1,	// (0x0000f3e1) setting_slider_pane_t2_copy1_ParamLimits

0xf3e1,	// (0x0000f3e1) setting_slider_pane_t2_copy1

0xf3fb,	// (0x0000f3fb) setting_slider_pane_t3_copy1_ParamLimits

0xf3fb,	// (0x0000f3fb) setting_slider_pane_t3_copy1

0xf413,	// (0x0000f413) slider_set_pane_copy1_ParamLimits

0xf413,	// (0x0000f413) slider_set_pane_copy1

0x14c2,	// (0x000014c2) set_opt_bg_pane_g1_copy2

0x14ca,	// (0x000014ca) set_opt_bg_pane_g2_copy2

0xa57e,	// (0x0000a57e) set_opt_bg_pane_g3_copy2

0x14da,	// (0x000014da) set_opt_bg_pane_g4_copy2

0x14e2,	// (0x000014e2) set_opt_bg_pane_g5_copy2

0x14ea,	// (0x000014ea) set_opt_bg_pane_g6_copy2

0xf429,	// (0x0000f429) set_opt_bg_pane_g7_copy2

0xa590,	// (0x0000a590) set_opt_bg_pane_g8_copy2

0xa59a,	// (0x0000a59a) set_opt_bg_pane_g9_copy2

0xa5a4,	// (0x0000a5a4) aid_size_touch_slider_mark_copy1_ParamLimits

0xa5a4,	// (0x0000a5a4) aid_size_touch_slider_mark_copy1

0xa5b8,	// (0x0000a5b8) slider_set_pane_g1_copy1

0xa5c1,	// (0x0000a5c1) slider_set_pane_g2_copy1

0x4e65,	// (0x00004e65) slider_set_pane_g3_copy1_ParamLimits

0x4e65,	// (0x00004e65) slider_set_pane_g3_copy1

0x4e79,	// (0x00004e79) slider_set_pane_g4_copy1_ParamLimits

0x4e79,	// (0x00004e79) slider_set_pane_g4_copy1

0x4e91,	// (0x00004e91) slider_set_pane_g5_copy1_ParamLimits

0x4e91,	// (0x00004e91) slider_set_pane_g5_copy1

0x4e65,	// (0x00004e65) slider_set_pane_g6_copy1_ParamLimits

0x4e65,	// (0x00004e65) slider_set_pane_g6_copy1

0xf431,	// (0x0000f431) slider_set_pane_g7_copy1_ParamLimits

0xf431,	// (0x0000f431) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa5df,	// (0x0000a5df) setting_slider_graphic_pane_g1_copy1

0xf447,	// (0x0000f447) setting_slider_graphic_pane_t1_copy1

0xf457,	// (0x0000f457) setting_slider_graphic_pane_t2_copy1

0xf467,	// (0x0000f467) slider_set_pane_cp_copy1

0xa618,	// (0x0000a618) input_focus_pane_cp1_copy1

0xa621,	// (0x0000a621) list_set_text_pane_copy1

0xa629,	// (0x0000a629) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa618,	// (0x0000a618) input_focus_pane_cp2_copy1

0xa629,	// (0x0000a629) setting_code_pane_g1_copy1

0xf46f,	// (0x0000f46f) setting_code_pane_t1_copy1

0x580f,	// (0x0000580f) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc184,	// (0x0000c184) list_set_graphic_pane_g1_copy1_ParamLimits

0xc184,	// (0x0000c184) list_set_graphic_pane_g1_copy1

0xf47d,	// (0x0000f47d) list_set_graphic_pane_g2_copy1

0xc19c,	// (0x0000c19c) list_set_graphic_pane_t1_copy1_ParamLimits

0xc19c,	// (0x0000c19c) list_set_graphic_pane_t1_copy1

0x65eb,	// (0x000065eb) rs_clock_indi_pane_g1

0xa65a,	// (0x0000a65a) rs_clock_indi_pane_t1

0xa668,	// (0x0000a668) rs_indi_pane

0xa670,	// (0x0000a670) rs_indi_pane_g1

0xa679,	// (0x0000a679) rs_indi_pane_g2

0xa682,	// (0x0000a682) rs_indi_pane_g3

0x0002,

0xb42f,	// (0x0000b42f) rs_indi_pane_g

0x2609,	// (0x00002609) bg_popup_preview_window_pane_cp03

0xa68b,	// (0x0000a68b) popup_fep_tooltip_window_t1

0x77f4,	// (0x000077f4) popup_note2_window_g2_ParamLimits

0x77f4,	// (0x000077f4) popup_note2_window_g2

0x0001,

0xb1c8,	// (0x0000b1c8) popup_note2_window_g_ParamLimits

0xb1c8,	// (0x0000b1c8) popup_note2_window_g

0x7dea,	// (0x00007dea) bg_popup_sub_pane_cp11_ParamLimits

0x7df7,	// (0x00007df7) cell_ai3_links_pane_g1_ParamLimits

0x7e0e,	// (0x00007e0e) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0xc210,	// (0x0000c210) cell_graphic_popup_pane_cp2_ParamLimits

0xc210,	// (0x0000c210) cell_graphic_popup_pane_cp2

0xf485,	// (0x0000f485) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa6a1,	// (0x0000a6a1) cell_graphic_popup_pane_g3_cp2

0xa6a9,	// (0x0000a6a9) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a3d,	// (0x00001a3d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1399,	// (0x00001399) main_tmo_pane_ParamLimits

0xe08a,	// (0x0000e08a) popup_tmo_big_image_note_window

0x9b44,	// (0x00009b44) cell_ai5_widget_list_pane

0x9b4c,	// (0x00009b4c) cell_ai5_widget_lrg_icon_pane

0xf1d2,	// (0x0000f1d2) tmo_note_info_pane_t1_ParamLimits

0xf1e7,	// (0x0000f1e7) tmo_note_info_pane_t2_ParamLimits

0xf1fe,	// (0x0000f1fe) tmo_note_info_pane_t3_ParamLimits

0xa25d,	// (0x0000a25d) tmo_note_info_pane_t4_ParamLimits

0xa26f,	// (0x0000a26f) tmo_note_info_pane_t5_ParamLimits

0xf75d,	// (0x0000f75d) tmo_note_info_pane_t_ParamLimits

0xf278,	// (0x0000f278) settings_container_pane_ParamLimits

0xa610,	// (0x0000a610) indicator_popup_pane_cp5

0xa610,	// (0x0000a610) indicator_popup_pane_cp6

0x580f,	// (0x0000580f) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa6b7,	// (0x0000a6b7) popup_tmo_big_image_note_window_g1

0xa6c1,	// (0x0000a6c1) popup_tmo_big_image_note_window_t1

0xa6d1,	// (0x0000a6d1) popup_tmo_big_image_note_window_t2

0xa6e1,	// (0x0000a6e1) popup_tmo_big_image_note_window_t3

0x0002,

0xb436,	// (0x0000b436) popup_tmo_big_image_note_window_t

0xa6f1,	// (0x0000a6f1) cell_ai5_widget_lrg_icon_pane_g1

0xa6f9,	// (0x0000a6f9) cell_ai5_widget_lrg_icon_pane_t1

0xa707,	// (0x0000a707) cell_ai5_widget_list_row_pane_ParamLimits

0xa707,	// (0x0000a707) cell_ai5_widget_list_row_pane

0xa71f,	// (0x0000a71f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa71f,	// (0x0000a71f) cell_ai5_widget_list_row_pane_g1

0xa72c,	// (0x0000a72c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa72c,	// (0x0000a72c) cell_ai5_widget_list_row_pane_t1

0xa744,	// (0x0000a744) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa744,	// (0x0000a744) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb43d,	// (0x0000b43d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb43d,	// (0x0000b43d) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa77b,	// (0x0000a77b) popup_fep_char_pre_window

0xa783,	// (0x0000a783) popup_fep_ituss_window

0xa7a4,	// (0x0000a7a4) popup_fep_vkbss_window

0xa7c3,	// (0x0000a7c3) grid_vkbss_keypad_pane_ParamLimits

0xa7c3,	// (0x0000a7c3) grid_vkbss_keypad_pane

0xa7d3,	// (0x0000a7d3) ituss_keypad_pane

0xa7ef,	// (0x0000a7ef) aid_vkbss_key_offset_ParamLimits

0xa7ef,	// (0x0000a7ef) aid_vkbss_key_offset

0xa7fb,	// (0x0000a7fb) cell_vkbss_key_pane_ParamLimits

0xa7fb,	// (0x0000a7fb) cell_vkbss_key_pane

0xa811,	// (0x0000a811) bg_cell_vkbss_key_g1_ParamLimits

0xa811,	// (0x0000a811) bg_cell_vkbss_key_g1

0xa81d,	// (0x0000a81d) cell_vkbss_key_3p_pane_ParamLimits

0xa81d,	// (0x0000a81d) cell_vkbss_key_3p_pane

0xa837,	// (0x0000a837) cell_vkbss_key_g1_ParamLimits

0xa837,	// (0x0000a837) cell_vkbss_key_g1

0xa851,	// (0x0000a851) cell_vkbss_key_t1_ParamLimits

0xa851,	// (0x0000a851) cell_vkbss_key_t1

0xa87c,	// (0x0000a87c) cell_ituss_key_pane_ParamLimits

0xa87c,	// (0x0000a87c) cell_ituss_key_pane

0xa88d,	// (0x0000a88d) bg_cell_ituss_key_g1_ParamLimits

0xa88d,	// (0x0000a88d) bg_cell_ituss_key_g1

0xa899,	// (0x0000a899) cell_ituss_key_pane_g1_ParamLimits

0xa899,	// (0x0000a899) cell_ituss_key_pane_g1

0xa8b3,	// (0x0000a8b3) cell_ituss_key_pane_g2_ParamLimits

0xa8b3,	// (0x0000a8b3) cell_ituss_key_pane_g2

0x0001,

0xb444,	// (0x0000b444) cell_ituss_key_pane_g_ParamLimits

0xb444,	// (0x0000b444) cell_ituss_key_pane_g

0xa8e1,	// (0x0000a8e1) cell_ituss_key_t1_ParamLimits

0xa8e1,	// (0x0000a8e1) cell_ituss_key_t1

0xa917,	// (0x0000a917) cell_ituss_key_t2_ParamLimits

0xa917,	// (0x0000a917) cell_ituss_key_t2

0xa948,	// (0x0000a948) cell_ituss_key_t3_ParamLimits

0xa948,	// (0x0000a948) cell_ituss_key_t3

0xa982,	// (0x0000a982) cell_ituss_key_t4_ParamLimits

0xa982,	// (0x0000a982) cell_ituss_key_t4

0x0003,

0xb449,	// (0x0000b449) cell_ituss_key_t_ParamLimits

0xb449,	// (0x0000b449) cell_ituss_key_t

0xa9bc,	// (0x0000a9bc) cell_vkbss_key_3p_pane_g1

0xa9c4,	// (0x0000a9c4) cell_vkbss_key_3p_pane_g2

0xa9cc,	// (0x0000a9cc) cell_vkbss_key_3p_pane_g3

0x0002,

0xb452,	// (0x0000b452) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa9d4,	// (0x0000a9d4) popup_fep_char_pre_window_t1

0xf088,	// (0x0000f088) main_ai5_sk_pane

0xa2e9,	// (0x0000a2e9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa2f5,	// (0x0000a2f5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa309,	// (0x0000a309) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa315,	// (0x0000a315) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb428,	// (0x0000b428) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa328,	// (0x0000a328) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1399,	// (0x00001399) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48d,	// (0x0000f48d) main_ai5_sk_pane_g1

0x3d71,	// (0x00003d71) popup_query_code_window_g1

0xa799,	// (0x0000a799) popup_fep_vkb_icf_pane

0xa7ad,	// (0x0000a7ad) popup_fep_vtchi_icf_pane

0x1399,	// (0x00001399) bg_icf_pane

0xa9ec,	// (0x0000a9ec) list_vkb_icf_pane

0x1399,	// (0x00001399) bg_icf_pane_cp01

0xa9f8,	// (0x0000a9f8) vtchi_icf_list_pane

0xaa09,	// (0x0000aa09) list_vkb_icf_pane_t1_ParamLimits

0xaa09,	// (0x0000aa09) list_vkb_icf_pane_t1

0xaa1f,	// (0x0000aa1f) vtchi_icf_list_pane_t1_ParamLimits

0xaa1f,	// (0x0000aa1f) vtchi_icf_list_pane_t1

0xa783,	// (0x0000a783) popup_fep_ituss_window_ParamLimits

0xa7ad,	// (0x0000a7ad) popup_fep_vtchi_icf_pane_ParamLimits

0xa7d3,	// (0x0000a7d3) ituss_keypad_pane_ParamLimits

0xa7e3,	// (0x0000a7e3) ituss_sks_pane

0x1399,	// (0x00001399) bg_icf_pane_ParamLimits

0xa76c,	// (0x0000a76c) icf_edit_indi_pane_ParamLimits

0xa76c,	// (0x0000a76c) icf_edit_indi_pane

0xa9ec,	// (0x0000a9ec) list_vkb_icf_pane_ParamLimits

0x1399,	// (0x00001399) bg_icf_pane_cp01_ParamLimits

0xa76c,	// (0x0000a76c) icf_edit_indi_pane_cp01_ParamLimits

0xa76c,	// (0x0000a76c) icf_edit_indi_pane_cp01

0xaa00,	// (0x0000aa00) vtchi_query_pane

0x6a7d,	// (0x00006a7d) icf_edit_indi_pane_g1_ParamLimits

0x6a7d,	// (0x00006a7d) icf_edit_indi_pane_g1

0xaaa4,	// (0x0000aaa4) icf_edit_indi_pane_g2_ParamLimits

0xaaa4,	// (0x0000aaa4) icf_edit_indi_pane_g2

0x0001,

0xb46a,	// (0x0000b46a) icf_edit_indi_pane_g_ParamLimits

0xb46a,	// (0x0000b46a) icf_edit_indi_pane_g

0xaab3,	// (0x0000aab3) icf_edit_indi_pane_t1

0xaa3a,	// (0x0000aa3a) bg_input_focus_pane_cp042

0x0d43,	// (0x00000d43) vtchi_button_pane

0xaa43,	// (0x0000aa43) vtchi_query_pane_t1

0xaa51,	// (0x0000aa51) vtchi_query_pane_t2

0xaa5f,	// (0x0000aa5f) vtchi_query_pane_t3

0x0002,

0xb459,	// (0x0000b459) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xaa6d,	// (0x0000aa6d) vtchi_button_pane_g1

0xaa75,	// (0x0000aa75) ituss_sks_pane_g1

0xaa80,	// (0x0000aa80) ituss_sks_pane_g2

0x0001,

0xb460,	// (0x0000b460) ituss_sks_pane_g

0xaa88,	// (0x0000aa88) ituss_sks_pane_t1

0xaa96,	// (0x0000aa96) ituss_sks_pane_t2

0x0001,

0xb465,	// (0x0000b465) ituss_sks_pane_t

0x5fc2,	// (0x00005fc2) indicator_nsta_pane_cp_g1

0x5fcb,	// (0x00005fcb) indicator_nsta_pane_cp_g2

0x5fd3,	// (0x00005fd3) indicator_nsta_pane_cp_g3

0x5fdb,	// (0x00005fdb) indicator_nsta_pane_cp_g4

0x5fdb,	// (0x00005fdb) indicator_nsta_pane_cp_g5

0x5fdb,	// (0x00005fdb) indicator_nsta_pane_cp_g6

0x0005,

0xb012,	// (0x0000b012) indicator_nsta_pane_cp_g

0xee2e,	// (0x0000ee2e) cell_graphic2_pane_t2_ParamLimits

0xee2e,	// (0x0000ee2e) cell_graphic2_pane_t2

0x0001,

0xf72d,	// (0x0000f72d) cell_graphic2_pane_t_ParamLimits

0xf72d,	// (0x0000f72d) cell_graphic2_pane_t

0xee64,	// (0x0000ee64) cell_graphic2_control_pane_t1

0xc091,	// (0x0000c091) signal_pane_g3_ParamLimits

0xc091,	// (0x0000c091) signal_pane_g3

0xc0a5,	// (0x0000c0a5) signal_pane_g4_ParamLimits

0xc0a5,	// (0x0000c0a5) signal_pane_g4

0xa756,	// (0x0000a756) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa756,	// (0x0000a756) cell_ai5_widget_list_row_pane_t3

0xa8cf,	// (0x0000a8cf) cell_ituss_key_pane_t1_ParamLimits

0xa8cf,	// (0x0000a8cf) cell_ituss_key_pane_t1

0x3986,	// (0x00003986) form_field_data_wide_pane_vc_t2_ParamLimits

0x3986,	// (0x00003986) form_field_data_wide_pane_vc_t2

0x399a,	// (0x0000399a) form_field_data_wide_pane_vc_t3_ParamLimits

0x399a,	// (0x0000399a) form_field_data_wide_pane_vc_t3

0x0002,

0xad70,	// (0x0000ad70) form_field_data_wide_pane_vc_t_ParamLimits

0xad70,	// (0x0000ad70) form_field_data_wide_pane_vc_t

0x5c7a,	// (0x00005c7a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c7a,	// (0x00005c7a) form_field_slider_wide_pane_vc_t3

0x5d58,	// (0x00005d58) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d58,	// (0x00005d58) form_field_popup_wide_pane_vc_t2

0x5d6f,	// (0x00005d6f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d6f,	// (0x00005d6f) form_field_popup_wide_pane_vc_t3

0x0002,

0xb001,	// (0x0000b001) form_field_popup_wide_pane_vc_t_ParamLimits

0xb001,	// (0x0000b001) form_field_popup_wide_pane_vc_t

0xf0fe,	// (0x0000f0fe) aid_fshwr2_btn_pane_ParamLimits

0xf10d,	// (0x0000f10d) aid_fshwr2_syb_pane_ParamLimits

0xf11f,	// (0x0000f11f) aid_fshwr2_txt_pane_ParamLimits

0x1399,	// (0x00001399) fshwr2_bg_pane_ParamLimits

0xf12e,	// (0x0000f12e) fshwr2_func_candi_pane_ParamLimits

0xf13f,	// (0x0000f13f) fshwr2_hwr_syb_pane_ParamLimits

0xf15a,	// (0x0000f15a) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
