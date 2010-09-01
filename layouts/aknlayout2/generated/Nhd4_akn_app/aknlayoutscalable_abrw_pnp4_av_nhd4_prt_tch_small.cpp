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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000318c6 };

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
0x5d72,	// (0x00037638) Screen

0x5d7e,	// (0x00037644) application_window_ParamLimits

0x5d7e,	// (0x00037644) application_window

0x1f8c,	// (0x00033852) screen_g1

0x5dda,	// (0x000376a0) area_bottom_pane_ParamLimits

0x5dda,	// (0x000376a0) area_bottom_pane

0x5e9a,	// (0x00037760) area_top_pane_ParamLimits

0x5e9a,	// (0x00037760) area_top_pane

0x5f38,	// (0x000377fe) main_pane_ParamLimits

0x5f38,	// (0x000377fe) main_pane

0x1f96,	// (0x0003385c) misc_graphics

0x7dfd,	// (0x000396c3) battery_pane_ParamLimits

0x7dfd,	// (0x000396c3) battery_pane

0xa289,	// (0x0003bb4f) bg_status_flat_pane_g8

0xa291,	// (0x0003bb57) bg_status_flat_pane_g9

0x7ec5,	// (0x0003978b) context_pane_ParamLimits

0x7ec5,	// (0x0003978b) context_pane

0x7fdb,	// (0x000398a1) navi_pane_ParamLimits

0x7fdb,	// (0x000398a1) navi_pane

0x97fd,	// (0x0003b0c3) signal_pane_ParamLimits

0x97fd,	// (0x0003b0c3) signal_pane

0x0008,

0xf840,	// (0x00041106) bg_status_flat_pane_g

0x986a,	// (0x0003b130) status_pane_g1_ParamLimits

0x986a,	// (0x0003b130) status_pane_g1

0x987e,	// (0x0003b144) status_pane_g2_ParamLimits

0x987e,	// (0x0003b144) status_pane_g2

0x988a,	// (0x0003b150) status_pane_g3_ParamLimits

0x988a,	// (0x0003b150) status_pane_g3

0x0004,

0xf76c,	// (0x00041032) status_pane_g_ParamLimits

0xf76c,	// (0x00041032) status_pane_g

0x98be,	// (0x0003b184) title_pane_ParamLimits

0x98be,	// (0x0003b184) title_pane

0x98fb,	// (0x0003b1c1) uni_indicator_pane_ParamLimits

0x98fb,	// (0x0003b1c1) uni_indicator_pane

0x2d8f,	// (0x00034655) bg_list_pane_ParamLimits

0x2d8f,	// (0x00034655) bg_list_pane

0x77c8,	// (0x0003908e) find_pane

0x24ea,	// (0x00033db0) listscroll_app_pane_ParamLimits

0x24ea,	// (0x00033db0) listscroll_app_pane

0x2daf,	// (0x00034675) listscroll_form_pane

0x5cf4,	// (0x000375ba) listscroll_gen_pane_ParamLimits

0x5cf4,	// (0x000375ba) listscroll_gen_pane

0x77d0,	// (0x00039096) listscroll_set_pane

0x6cac,	// (0x00038572) main_idle_act_pane

0x2c43,	// (0x00034509) main_idle_trad_pane

0x2c43,	// (0x00034509) main_list_empty_pane

0x24ea,	// (0x00033db0) main_midp_pane

0x2dc9,	// (0x0003468f) main_pane_g1_ParamLimits

0x2dc9,	// (0x0003468f) main_pane_g1

0x77e6,	// (0x000390ac) popup_ai_message_window_ParamLimits

0x77e6,	// (0x000390ac) popup_ai_message_window

0x788a,	// (0x00039150) popup_fep_china_uni_window_ParamLimits

0x788a,	// (0x00039150) popup_fep_china_uni_window

0x78e4,	// (0x000391aa) popup_fep_japan_candidate_window_ParamLimits

0x78e4,	// (0x000391aa) popup_fep_japan_candidate_window

0x7902,	// (0x000391c8) popup_fep_japan_predictive_window_ParamLimits

0x7902,	// (0x000391c8) popup_fep_japan_predictive_window

0x7932,	// (0x000391f8) popup_find_window

0x793f,	// (0x00039205) popup_grid_graphic_window_ParamLimits

0x793f,	// (0x00039205) popup_grid_graphic_window

0x7969,	// (0x0003922f) popup_large_graphic_colour_window

0x798f,	// (0x00039255) popup_menu_window_ParamLimits

0x798f,	// (0x00039255) popup_menu_window

0x7b4b,	// (0x00039411) popup_note_image_window

0x7b37,	// (0x000393fd) popup_note_wait_window_ParamLimits

0x7b37,	// (0x000393fd) popup_note_wait_window

0x7b37,	// (0x000393fd) popup_note_window_ParamLimits

0x7b37,	// (0x000393fd) popup_note_window

0x7ba1,	// (0x00039467) popup_query_code_window_ParamLimits

0x7ba1,	// (0x00039467) popup_query_code_window

0x7bb5,	// (0x0003947b) popup_query_data_code_window_ParamLimits

0x7bb5,	// (0x0003947b) popup_query_data_code_window

0x7bd2,	// (0x00039498) popup_query_data_window_ParamLimits

0x7bd2,	// (0x00039498) popup_query_data_window

0x7bee,	// (0x000394b4) popup_query_sat_info_window_ParamLimits

0x7bee,	// (0x000394b4) popup_query_sat_info_window

0x7c27,	// (0x000394ed) popup_snote_single_graphic_window_ParamLimits

0x7c27,	// (0x000394ed) popup_snote_single_graphic_window

0x7c27,	// (0x000394ed) popup_snote_single_text_window_ParamLimits

0x7c27,	// (0x000394ed) popup_snote_single_text_window

0x7c3c,	// (0x00039502) popup_sub_window_general

0x7d6c,	// (0x00039632) popup_window_general_ParamLimits

0x7d6c,	// (0x00039632) popup_window_general

0x7d81,	// (0x00039647) power_save_pane

0x7633,	// (0x00038ef9) control_pane_g1_ParamLimits

0x7633,	// (0x00038ef9) control_pane_g1

0x765a,	// (0x00038f20) control_pane_g2_ParamLimits

0x765a,	// (0x00038f20) control_pane_g2

0x2d79,	// (0x0003463f) control_pane_g3_ParamLimits

0x2d79,	// (0x0003463f) control_pane_g3

0x0007,

0xf754,	// (0x0004101a) control_pane_g_ParamLimits

0xf754,	// (0x0004101a) control_pane_g

0x76cb,	// (0x00038f91) control_pane_t1_ParamLimits

0x76cb,	// (0x00038f91) control_pane_t1

0x771f,	// (0x00038fe5) control_pane_t2_ParamLimits

0x771f,	// (0x00038fe5) control_pane_t2

0x0002,

0xf765,	// (0x0004102b) control_pane_t_ParamLimits

0xf765,	// (0x0004102b) control_pane_t

0x758c,	// (0x00038e52) navi_navi_volume_pane_cp1

0x7594,	// (0x00038e5a) status_small_icon_pane

0x2d45,	// (0x0003460b) status_small_pane_g1_ParamLimits

0x2d45,	// (0x0003460b) status_small_pane_g1

0x759c,	// (0x00038e62) status_small_pane_g2_ParamLimits

0x759c,	// (0x00038e62) status_small_pane_g2

0x75a8,	// (0x00038e6e) status_small_pane_g3_ParamLimits

0x75a8,	// (0x00038e6e) status_small_pane_g3

0x75b4,	// (0x00038e7a) status_small_pane_g4_ParamLimits

0x75b4,	// (0x00038e7a) status_small_pane_g4

0x75c0,	// (0x00038e86) status_small_pane_g5_ParamLimits

0x75c0,	// (0x00038e86) status_small_pane_g5

0x75ce,	// (0x00038e94) status_small_pane_g6_ParamLimits

0x75ce,	// (0x00038e94) status_small_pane_g6

0x0007,

0xf743,	// (0x00041009) status_small_pane_g_ParamLimits

0xf743,	// (0x00041009) status_small_pane_g

0x75fd,	// (0x00038ec3) status_small_pane_t1

0x761f,	// (0x00038ee5) status_small_wait_pane_ParamLimits

0x761f,	// (0x00038ee5) status_small_wait_pane

0x707f,	// (0x00038945) aid_levels_signal_ParamLimits

0x707f,	// (0x00038945) aid_levels_signal

0x7091,	// (0x00038957) signal_pane_g1_ParamLimits

0x7091,	// (0x00038957) signal_pane_g1

0x70a6,	// (0x0003896c) signal_pane_g2_ParamLimits

0x70a6,	// (0x0003896c) signal_pane_g2

0x0003,

0xf6d4,	// (0x00040f9a) signal_pane_g_ParamLimits

0xf6d4,	// (0x00040f9a) signal_pane_g

0x2852,	// (0x00034118) context_pane_g1

0x6179,	// (0x00037a3f) title_pane_g1

0x61a3,	// (0x00037a69) title_pane_t1

0x1fac,	// (0x00033872) title_pane_t2

0x1fd2,	// (0x00033898) title_pane_t3

0x0002,

0xf532,	// (0x00040df8) title_pane_t

0x9913,	// (0x0003b1d9) aid_levels_battery_ParamLimits

0x9913,	// (0x0003b1d9) aid_levels_battery

0x9927,	// (0x0003b1ed) battery_pane_g1_ParamLimits

0x9927,	// (0x0003b1ed) battery_pane_g1

0x993d,	// (0x0003b203) battery_pane_g2_ParamLimits

0x993d,	// (0x0003b203) battery_pane_g2

0x0001,

0xf777,	// (0x0004103d) battery_pane_g_ParamLimits

0xf777,	// (0x0004103d) battery_pane_g

0xabad,	// (0x0003c473) uni_indicator_pane_g1

0xabc0,	// (0x0003c486) uni_indicator_pane_g2

0xabd2,	// (0x0003c498) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x000411ae) uni_indicator_pane_g

0x2afb,	// (0x000343c1) navi_icon_pane_ParamLimits

0x2afb,	// (0x000343c1) navi_icon_pane

0x2a44,	// (0x0003430a) navi_midp_pane

0x2b17,	// (0x000343dd) navi_navi_pane

0x2b21,	// (0x000343e7) navi_text_pane_ParamLimits

0x2b21,	// (0x000343e7) navi_text_pane

0x1f8c,	// (0x00033852) status_small_wait_pane_g1

0x2223,	// (0x00033ae9) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x000411a9) status_small_wait_pane_g

0xa8d4,	// (0x0003c19a) navi_navi_icon_text_pane

0xa8dc,	// (0x0003c1a2) navi_navi_pane_g1_ParamLimits

0xa8dc,	// (0x0003c1a2) navi_navi_pane_g1

0xa8ee,	// (0x0003c1b4) navi_navi_pane_g2_ParamLimits

0xa8ee,	// (0x0003c1b4) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00041177) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00041177) navi_navi_pane_g

0xa900,	// (0x0003c1c6) navi_navi_tabs_pane

0xa909,	// (0x0003c1cf) navi_navi_text_pane

0xa8d4,	// (0x0003c19a) navi_navi_volume_pane

0xa8b0,	// (0x0003c176) navi_text_pane_t1

0xa8a4,	// (0x0003c16a) navi_icon_pane_g1

0xa7f7,	// (0x0003c0bd) navi_navi_text_pane_t1

0x8302,	// (0x00039bc8) navi_navi_volume_pane_g1

0x830a,	// (0x00039bd0) volume_small_pane

0xa75d,	// (0x0003c023) navi_navi_icon_text_pane_g1

0xa765,	// (0x0003c02b) navi_navi_icon_text_pane_t1

0x2b17,	// (0x000343dd) navi_tabs_2_long_pane

0x2b17,	// (0x000343dd) navi_tabs_2_pane

0x2b17,	// (0x000343dd) navi_tabs_3_long_pane

0x2b17,	// (0x000343dd) navi_tabs_3_pane

0x2b17,	// (0x000343dd) navi_tabs_4_pane

0x82e2,	// (0x00039ba8) tabs_2_active_pane_ParamLimits

0x82e2,	// (0x00039ba8) tabs_2_active_pane

0x82f2,	// (0x00039bb8) tabs_2_passive_pane_ParamLimits

0x82f2,	// (0x00039bb8) tabs_2_passive_pane

0x82b0,	// (0x00039b76) tabs_3_active_pane_ParamLimits

0x82b0,	// (0x00039b76) tabs_3_active_pane

0x82c0,	// (0x00039b86) tabs_3_passive_pane_ParamLimits

0x82c0,	// (0x00039b86) tabs_3_passive_pane

0x82d1,	// (0x00039b97) tabs_3_passive_pane_cp_ParamLimits

0x82d1,	// (0x00039b97) tabs_3_passive_pane_cp

0x826c,	// (0x00039b32) tabs_4_active_pane_ParamLimits

0x826c,	// (0x00039b32) tabs_4_active_pane

0x827d,	// (0x00039b43) tabs_4_passive_pane_ParamLimits

0x827d,	// (0x00039b43) tabs_4_passive_pane

0x828e,	// (0x00039b54) tabs_4_passive_pane_cp_ParamLimits

0x828e,	// (0x00039b54) tabs_4_passive_pane_cp

0x829f,	// (0x00039b65) tabs_4_passive_pane_cp2_ParamLimits

0x829f,	// (0x00039b65) tabs_4_passive_pane_cp2

0x8248,	// (0x00039b0e) tabs_2_long_active_pane_ParamLimits

0x8248,	// (0x00039b0e) tabs_2_long_active_pane

0x825a,	// (0x00039b20) tabs_2_long_passive_pane_ParamLimits

0x825a,	// (0x00039b20) tabs_2_long_passive_pane

0x8203,	// (0x00039ac9) tabs_3_long_active_pane_ParamLimits

0x8203,	// (0x00039ac9) tabs_3_long_active_pane

0x821c,	// (0x00039ae2) tabs_3_long_passive_pane_ParamLimits

0x821c,	// (0x00039ae2) tabs_3_long_passive_pane

0x822f,	// (0x00039af5) tabs_3_long_passive_pane_cp_ParamLimits

0x822f,	// (0x00039af5) tabs_3_long_passive_pane_cp

0x81a9,	// (0x00039a6f) volume_small_pane_g1

0x81b2,	// (0x00039a78) volume_small_pane_g2

0x81bb,	// (0x00039a81) volume_small_pane_g3

0x81c4,	// (0x00039a8a) volume_small_pane_g4

0x81cd,	// (0x00039a93) volume_small_pane_g5

0x81d6,	// (0x00039a9c) volume_small_pane_g6

0x81df,	// (0x00039aa5) volume_small_pane_g7

0x81e8,	// (0x00039aae) volume_small_pane_g8

0x81f1,	// (0x00039ab7) volume_small_pane_g9

0x81fa,	// (0x00039ac0) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00041143) volume_small_pane_g

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp2_ParamLimits

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp2

0x620b,	// (0x00037ad1) tabs_3_active_pane_g1

0x6213,	// (0x00037ad9) tabs_3_active_pane_t1

0x1ff2,	// (0x000338b8) bg_passive_tab_pane_cp2_ParamLimits

0x1ff2,	// (0x000338b8) bg_passive_tab_pane_cp2

0x620b,	// (0x00037ad1) tabs_3_passive_pane_g1

0x6213,	// (0x00037ad9) tabs_3_passive_pane_t1

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp3_ParamLimits

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp3

0x6225,	// (0x00037aeb) tabs_4_active_pane_g1

0x622d,	// (0x00037af3) tabs_4_active_pane_t1

0x1ff2,	// (0x000338b8) bg_passive_tab_pane_cp3_ParamLimits

0x1ff2,	// (0x000338b8) bg_passive_tab_pane_cp3

0x6225,	// (0x00037aeb) tabs_4_1_passive_pane_g1

0x622d,	// (0x00037af3) tabs_4_1_passive_pane_t1

0x24ea,	// (0x00033db0) list_highlight_pane_cp2

0xae15,	// (0x0003c6db) list_set_pane_ParamLimits

0xae15,	// (0x0003c6db) list_set_pane

0xaeb7,	// (0x0003c77d) main_pane_set_t1_ParamLimits

0xaeb7,	// (0x0003c77d) main_pane_set_t1

0xaed7,	// (0x0003c79d) main_pane_set_t2_ParamLimits

0xaed7,	// (0x0003c79d) main_pane_set_t2

0xaeeb,	// (0x0003c7b1) main_pane_set_t3_ParamLimits

0xaeeb,	// (0x0003c7b1) main_pane_set_t3

0xaefd,	// (0x0003c7c3) main_pane_set_t4_ParamLimits

0xaefd,	// (0x0003c7c3) main_pane_set_t4

0x0003,

0xf94d,	// (0x00041213) main_pane_set_t_ParamLimits

0xf94d,	// (0x00041213) main_pane_set_t

0xaf0f,	// (0x0003c7d5) setting_code_pane

0xaf1b,	// (0x0003c7e1) setting_slider_graphic_pane

0xaf1b,	// (0x0003c7e1) setting_slider_pane

0xaf1b,	// (0x0003c7e1) setting_text_pane

0xaf1b,	// (0x0003c7e1) setting_volume_pane

0x623f,	// (0x00037b05) volume_set_pane

0x1ff2,	// (0x000338b8) bg_set_opt_pane_cp

0x6247,	// (0x00037b0d) setting_slider_pane_t1

0x6260,	// (0x00037b26) setting_slider_pane_t2

0x627a,	// (0x00037b40) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00040dff) setting_slider_pane_t

0x6292,	// (0x00037b58) slider_set_pane

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp2

0x2000,	// (0x000338c6) setting_slider_graphic_pane_g1

0x62a8,	// (0x00037b6e) setting_slider_graphic_pane_t1

0x62b8,	// (0x00037b7e) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00040e06) setting_slider_graphic_pane_t

0x62c8,	// (0x00037b8e) slider_set_pane_cp

0x1f96,	// (0x0003385c) input_focus_pane_cp1

0xadd4,	// (0x0003c69a) list_set_text_pane

0x1f8c,	// (0x00033852) setting_text_pane_g1

0x1f96,	// (0x0003385c) input_focus_pane_cp2

0x1f8c,	// (0x00033852) setting_code_pane_g1

0x2009,	// (0x000338cf) setting_code_pane_t1

0x45c3,	// (0x00035e89) set_text_pane_t1_ParamLimits

0x45c3,	// (0x00035e89) set_text_pane_t1

0x2400,	// (0x00033cc6) set_opt_bg_pane_g1

0x2408,	// (0x00033cce) set_opt_bg_pane_g2

0xadae,	// (0x0003c674) set_opt_bg_pane_g3

0x2418,	// (0x00033cde) set_opt_bg_pane_g4

0x2420,	// (0x00033ce6) set_opt_bg_pane_g5

0x2428,	// (0x00033cee) set_opt_bg_pane_g6

0xadb8,	// (0x0003c67e) set_opt_bg_pane_g7

0xadc0,	// (0x0003c686) set_opt_bg_pane_g8

0xadca,	// (0x0003c690) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00041200) set_opt_bg_pane_g

0xada1,	// (0x0003c667) slider_set_pane_g1

0x8389,	// (0x00039c4f) slider_set_pane_g2

0x0006,

0xf92b,	// (0x000411f1) slider_set_pane_g

0x8313,	// (0x00039bd9) volume_set_pane_g1

0x831b,	// (0x00039be1) volume_set_pane_g2

0x8323,	// (0x00039be9) volume_set_pane_g3

0x832b,	// (0x00039bf1) volume_set_pane_g4

0x8333,	// (0x00039bf9) volume_set_pane_g5

0x833b,	// (0x00039c01) volume_set_pane_g6

0x8343,	// (0x00039c09) volume_set_pane_g7

0x834b,	// (0x00039c11) volume_set_pane_g8

0x8353,	// (0x00039c19) volume_set_pane_g9

0x835b,	// (0x00039c21) volume_set_pane_g10

0x0009,

0xf903,	// (0x000411c9) volume_set_pane_g

0x62d0,	// (0x00037b96) indicator_pane_ParamLimits

0x62d0,	// (0x00037b96) indicator_pane

0x62dc,	// (0x00037ba2) main_idle_pane_g2_ParamLimits

0x62dc,	// (0x00037ba2) main_idle_pane_g2

0x6304,	// (0x00037bca) main_pane_idle_g1_ParamLimits

0x6304,	// (0x00037bca) main_pane_idle_g1

0x2017,	// (0x000338dd) popup_clock_digital_analogue_window_ParamLimits

0x2017,	// (0x000338dd) popup_clock_digital_analogue_window

0x6311,	// (0x00037bd7) soft_indicator_pane_ParamLimits

0x6311,	// (0x00037bd7) soft_indicator_pane

0x631d,	// (0x00037be3) wallpaper_pane_ParamLimits

0x631d,	// (0x00037be3) wallpaper_pane

0x1f8c,	// (0x00033852) wallpaper_pane_g1

0x6329,	// (0x00037bef) indicator_pane_g1_ParamLimits

0x6329,	// (0x00037bef) indicator_pane_g1

0xb1e7,	// (0x0003caad) navi_navi_icon_text_pane_srt_g1

0x2045,	// (0x0003390b) soft_indicator_pane_t1

0x205f,	// (0x00033925) aid_ps_area_pane

0x6335,	// (0x00037bfb) aid_ps_clock_pane

0x2070,	// (0x00033936) aid_ps_indicator_pane

0x207c,	// (0x00033942) indicator_ps_pane_ParamLimits

0x207c,	// (0x00033942) indicator_ps_pane

0x208b,	// (0x00033951) power_save_pane_g1_ParamLimits

0x208b,	// (0x00033951) power_save_pane_g1

0x2097,	// (0x0003395d) power_save_pane_g2_ParamLimits

0x2097,	// (0x0003395d) power_save_pane_g2

0x5d8e,	// (0x00037654) aid_navinavi_width_pane

0x205f,	// (0x00033925) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00040e0b) power_save_pane_g_ParamLimits

0xf545,	// (0x00040e0b) power_save_pane_g

0x20a5,	// (0x0003396b) power_save_pane_t1_ParamLimits

0x20a5,	// (0x0003396b) power_save_pane_t1

0x6335,	// (0x00037bfb) aid_ps_clock_pane_ParamLimits

0x2070,	// (0x00033936) aid_ps_indicator_pane_ParamLimits

0x20b7,	// (0x0003397d) power_save_pane_t4_ParamLimits

0x20b7,	// (0x0003397d) power_save_pane_t4

0x0001,

0xf54a,	// (0x00040e10) power_save_pane_t_ParamLimits

0xf54a,	// (0x00040e10) power_save_pane_t

0x20e1,	// (0x000339a7) power_save_t3_ParamLimits

0x20e1,	// (0x000339a7) power_save_t3

0x20cc,	// (0x00033992) power_save_t2_ParamLimits

0x20cc,	// (0x00033992) power_save_t2

0x20f6,	// (0x000339bc) indicator_ps_pane_g1

0x6343,	// (0x00037c09) ai_gene_pane_ParamLimits

0x6343,	// (0x00037c09) ai_gene_pane

0x634f,	// (0x00037c15) ai_links_pane_ParamLimits

0x634f,	// (0x00037c15) ai_links_pane

0x635b,	// (0x00037c21) indicator_pane_cp1_ParamLimits

0x635b,	// (0x00037c21) indicator_pane_cp1

0x6367,	// (0x00037c2d) main_pane_idle_g1_cp_ParamLimits

0x6367,	// (0x00037c2d) main_pane_idle_g1_cp

0x6373,	// (0x00037c39) popup_ai_links_title_window

0x637c,	// (0x00037c42) soft_indicator_pane_cp1_ParamLimits

0x637c,	// (0x00037c42) soft_indicator_pane_cp1

0xab9b,	// (0x0003c461) ai_links_pane_g1

0xaba4,	// (0x0003c46a) grid_ai_links_pane

0xab7e,	// (0x0003c444) ai_gene_pane_1

0xab89,	// (0x0003c44f) ai_gene_pane_2

0xab92,	// (0x0003c458) list_highlight_pane_cp4

0xab62,	// (0x0003c428) cell_ai_link_pane_ParamLimits

0xab62,	// (0x0003c428) cell_ai_link_pane

0xab5a,	// (0x0003c420) cell_ai_link_pane_g1

0x2223,	// (0x00033ae9) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x000411a4) cell_ai_link_pane_g

0x1f96,	// (0x0003385c) grid_highlight_cp2

0x1f96,	// (0x0003385c) bg_popup_sub_pane_cp1

0x210d,	// (0x000339d3) popup_ai_links_title_window_t1

0xaaaa,	// (0x0003c370) ai_gene_pane_1_g1_ParamLimits

0xaaaa,	// (0x0003c370) ai_gene_pane_1_g1

0xaab6,	// (0x0003c37c) ai_gene_pane_1_g2_ParamLimits

0xaab6,	// (0x0003c37c) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0004119a) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0004119a) ai_gene_pane_1_g

0xaac3,	// (0x0003c389) ai_gene_pane_1_t1_ParamLimits

0xaac3,	// (0x0003c389) ai_gene_pane_1_t1

0xaaf7,	// (0x0003c3bd) grid_ai_soft_ind_pane

0xaa95,	// (0x0003c35b) ai_gene_pane_2_t1_ParamLimits

0xaa95,	// (0x0003c35b) ai_gene_pane_2_t1

0x6388,	// (0x00037c4e) main_pane_empty_t1_ParamLimits

0x6388,	// (0x00037c4e) main_pane_empty_t1

0x63a0,	// (0x00037c66) main_pane_empty_t2_ParamLimits

0x63a0,	// (0x00037c66) main_pane_empty_t2

0x63b5,	// (0x00037c7b) main_pane_empty_t3_ParamLimits

0x63b5,	// (0x00037c7b) main_pane_empty_t3

0x63c7,	// (0x00037c8d) main_pane_empty_t4_ParamLimits

0x63c7,	// (0x00037c8d) main_pane_empty_t4

0x63d9,	// (0x00037c9f) main_pane_empty_t5_ParamLimits

0x63d9,	// (0x00037c9f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00040e15) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00040e15) main_pane_empty_t

0x2485,	// (0x00033d4b) bg_popup_window_pane_ParamLimits

0x2485,	// (0x00033d4b) bg_popup_window_pane

0xa805,	// (0x0003c0cb) find_popup_pane_cp2_ParamLimits

0xa805,	// (0x0003c0cb) find_popup_pane_cp2

0xa811,	// (0x0003c0d7) heading_pane_ParamLimits

0xa811,	// (0x0003c0d7) heading_pane

0x1f96,	// (0x0003385c) bg_popup_sub_pane

0xa77f,	// (0x0003c045) bg_popup_window_pane_g1_ParamLimits

0xa77f,	// (0x0003c045) bg_popup_window_pane_g1

0xa78b,	// (0x0003c051) bg_popup_window_pane_g2_ParamLimits

0xa78b,	// (0x0003c051) bg_popup_window_pane_g2

0xa797,	// (0x0003c05d) bg_popup_window_pane_g3_ParamLimits

0xa797,	// (0x0003c05d) bg_popup_window_pane_g3

0xa7a3,	// (0x0003c069) bg_popup_window_pane_g4_ParamLimits

0xa7a3,	// (0x0003c069) bg_popup_window_pane_g4

0xa7af,	// (0x0003c075) bg_popup_window_pane_g5_ParamLimits

0xa7af,	// (0x0003c075) bg_popup_window_pane_g5

0xa7bb,	// (0x0003c081) bg_popup_window_pane_g6_ParamLimits

0xa7bb,	// (0x0003c081) bg_popup_window_pane_g6

0xa7c7,	// (0x0003c08d) bg_popup_window_pane_g7_ParamLimits

0xa7c7,	// (0x0003c08d) bg_popup_window_pane_g7

0xa7d3,	// (0x0003c099) bg_popup_window_pane_g8_ParamLimits

0xa7d3,	// (0x0003c099) bg_popup_window_pane_g8

0xa7df,	// (0x0003c0a5) bg_popup_window_pane_g9_ParamLimits

0xa7df,	// (0x0003c0a5) bg_popup_window_pane_g9

0xa7eb,	// (0x0003c0b1) bg_popup_window_pane_g10_ParamLimits

0xa7eb,	// (0x0003c0b1) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00041162) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00041162) bg_popup_window_pane_g

0xa714,	// (0x0003bfda) bg_popup_heading_pane_ParamLimits

0xa714,	// (0x0003bfda) bg_popup_heading_pane

0x84da,	// (0x00039da0) tabs_4_passive_pane_cp_srt_ParamLimits

0x84da,	// (0x00039da0) tabs_4_passive_pane_cp_srt

0x84ec,	// (0x00039db2) tabs_4_passive_pane_srt_ParamLimits

0xa728,	// (0x0003bfee) heading_pane_g2

0x84ec,	// (0x00039db2) tabs_4_passive_pane_srt

0x24ea,	// (0x00033db0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x24ea,	// (0x00033db0) bg_passive_tab_pane_cp3_srt

0xa730,	// (0x0003bff6) heading_pane_t1_ParamLimits

0xa730,	// (0x0003bff6) heading_pane_t1

0xa747,	// (0x0003c00d) heading_pane_t2_ParamLimits

0xa747,	// (0x0003c00d) heading_pane_t2

0x0001,

0xf897,	// (0x0004115d) heading_pane_t_ParamLimits

0xf897,	// (0x0004115d) heading_pane_t

0xa251,	// (0x0003bb17) bg_popup_heading_pane_g1

0xa300,	// (0x0003bbc6) bg_popup_heading_pane_g2

0xa30a,	// (0x0003bbd0) bg_popup_heading_pane_g3

0xa314,	// (0x0003bbda) bg_popup_heading_pane_g4

0xa31e,	// (0x0003bbe4) bg_popup_heading_pane_g5

0xa328,	// (0x0003bbee) bg_popup_heading_pane_g6

0xa330,	// (0x0003bbf6) bg_popup_heading_pane_g7

0xa338,	// (0x0003bbfe) bg_popup_heading_pane_g8

0xa342,	// (0x0003bc08) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00041119) bg_popup_heading_pane_g

0x9a12,	// (0x0003b2d8) bg_popup_sub_pane_g1

0x9a22,	// (0x0003b2e8) bg_popup_sub_pane_g2

0x9a1a,	// (0x0003b2e0) bg_popup_sub_pane_g3

0x9a32,	// (0x0003b2f8) bg_popup_sub_pane_g4

0x9a2a,	// (0x0003b2f0) bg_popup_sub_pane_g5

0x9a3a,	// (0x0003b300) bg_popup_sub_pane_g6

0x9a42,	// (0x0003b308) bg_popup_sub_pane_g7

0x9a52,	// (0x0003b318) bg_popup_sub_pane_g8

0x9a4a,	// (0x0003b310) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x000410f3) bg_popup_sub_pane_g

0x1fe4,	// (0x000338aa) bg_popup_window_pane_cp5_ParamLimits

0x1fe4,	// (0x000338aa) bg_popup_window_pane_cp5

0x212a,	// (0x000339f0) popup_note_window_g1_ParamLimits

0x212a,	// (0x000339f0) popup_note_window_g1

0x2136,	// (0x000339fc) popup_note_window_t1_ParamLimits

0x2136,	// (0x000339fc) popup_note_window_t1

0x214c,	// (0x00033a12) popup_note_window_t2_ParamLimits

0x214c,	// (0x00033a12) popup_note_window_t2

0x2162,	// (0x00033a28) popup_note_window_t3_ParamLimits

0x2162,	// (0x00033a28) popup_note_window_t3

0x2178,	// (0x00033a3e) popup_note_window_t4_ParamLimits

0x2178,	// (0x00033a3e) popup_note_window_t4

0x21a0,	// (0x00033a66) popup_note_window_t5_ParamLimits

0x21a0,	// (0x00033a66) popup_note_window_t5

0x0004,

0xf55a,	// (0x00040e20) popup_note_window_t_ParamLimits

0xf55a,	// (0x00040e20) popup_note_window_t

0x21c4,	// (0x00033a8a) bg_popup_window_pane_cp6_ParamLimits

0x21c4,	// (0x00033a8a) bg_popup_window_pane_cp6

0xa1cd,	// (0x0003ba93) popup_note_image_window_g1_ParamLimits

0xa1cd,	// (0x0003ba93) popup_note_image_window_g1

0xa1d9,	// (0x0003ba9f) popup_note_image_window_g2_ParamLimits

0xa1d9,	// (0x0003ba9f) popup_note_image_window_g2

0x0001,

0xf821,	// (0x000410e7) popup_note_image_window_g_ParamLimits

0xf821,	// (0x000410e7) popup_note_image_window_g

0xa1f2,	// (0x0003bab8) popup_note_image_window_t1_ParamLimits

0xa1f2,	// (0x0003bab8) popup_note_image_window_t1

0xa20b,	// (0x0003bad1) popup_note_image_window_t2_ParamLimits

0xa20b,	// (0x0003bad1) popup_note_image_window_t2

0xa224,	// (0x0003baea) popup_note_image_window_t3_ParamLimits

0xa224,	// (0x0003baea) popup_note_image_window_t3

0x0002,

0xf826,	// (0x000410ec) popup_note_image_window_t_ParamLimits

0xf826,	// (0x000410ec) popup_note_image_window_t

0xa096,	// (0x0003b95c) bg_popup_window_pane_cp7_ParamLimits

0xa096,	// (0x0003b95c) bg_popup_window_pane_cp7

0xa0c6,	// (0x0003b98c) popup_note_wait_window_g1_ParamLimits

0xa0c6,	// (0x0003b98c) popup_note_wait_window_g1

0xa0d2,	// (0x0003b998) popup_note_wait_window_g2_ParamLimits

0xa0d2,	// (0x0003b998) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x000410d5) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x000410d5) popup_note_wait_window_g

0xa0ea,	// (0x0003b9b0) popup_note_wait_window_t1_ParamLimits

0xa0ea,	// (0x0003b9b0) popup_note_wait_window_t1

0xa111,	// (0x0003b9d7) popup_note_wait_window_t2_ParamLimits

0xa111,	// (0x0003b9d7) popup_note_wait_window_t2

0xa12e,	// (0x0003b9f4) popup_note_wait_window_t3_ParamLimits

0xa12e,	// (0x0003b9f4) popup_note_wait_window_t3

0xa141,	// (0x0003ba07) popup_note_wait_window_t4_ParamLimits

0xa141,	// (0x0003ba07) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x000410dc) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x000410dc) popup_note_wait_window_t

0xa166,	// (0x0003ba2c) wait_bar_pane_ParamLimits

0xa166,	// (0x0003ba2c) wait_bar_pane

0x1f96,	// (0x0003385c) wait_anim_pane

0x1f96,	// (0x0003385c) wait_border_pane

0x1f8c,	// (0x00033852) wait_anim_pane_g1

0x1f8c,	// (0x00033852) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00040f95) wait_anim_pane_g

0xa042,	// (0x0003b908) wait_border_pane_g1

0xa04d,	// (0x0003b913) wait_border_pane_g2

0xa056,	// (0x0003b91c) wait_border_pane_g3

0x0002,

0xf808,	// (0x000410ce) wait_border_pane_g

0x9ead,	// (0x0003b773) bg_popup_window_pane_cp16_ParamLimits

0x9ead,	// (0x0003b773) bg_popup_window_pane_cp16

0x9fad,	// (0x0003b873) indicator_popup_pane_cp4_ParamLimits

0x9fad,	// (0x0003b873) indicator_popup_pane_cp4

0x9fc1,	// (0x0003b887) popup_query_data_window_t1_ParamLimits

0x9fc1,	// (0x0003b887) popup_query_data_window_t1

0x9fd3,	// (0x0003b899) popup_query_data_window_t2_ParamLimits

0x9fd3,	// (0x0003b899) popup_query_data_window_t2

0x9fec,	// (0x0003b8b2) popup_query_data_window_t3_ParamLimits

0x9fec,	// (0x0003b8b2) popup_query_data_window_t3

0x0002,

0xf801,	// (0x000410c7) popup_query_data_window_t_ParamLimits

0xf801,	// (0x000410c7) popup_query_data_window_t

0xa006,	// (0x0003b8cc) query_popup_data_pane_ParamLimits

0xa006,	// (0x0003b8cc) query_popup_data_pane

0xa01a,	// (0x0003b8e0) query_popup_data_pane_cp1_ParamLimits

0xa01a,	// (0x0003b8e0) query_popup_data_pane_cp1

0x9ead,	// (0x0003b773) bg_popup_window_pane_cp10_ParamLimits

0x9ead,	// (0x0003b773) bg_popup_window_pane_cp10

0x9edf,	// (0x0003b7a5) indicator_popup_pane_ParamLimits

0x9edf,	// (0x0003b7a5) indicator_popup_pane

0x9f01,	// (0x0003b7c7) popup_query_code_window_t1_ParamLimits

0x9f01,	// (0x0003b7c7) popup_query_code_window_t1

0x9f1b,	// (0x0003b7e1) popup_query_code_window_t2_ParamLimits

0x9f1b,	// (0x0003b7e1) popup_query_code_window_t2

0x9f64,	// (0x0003b82a) popup_query_code_window_t3_ParamLimits

0x9f64,	// (0x0003b82a) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x000410c0) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x000410c0) popup_query_code_window_t

0x9f93,	// (0x0003b859) query_popup_pane_ParamLimits

0x9f93,	// (0x0003b859) query_popup_pane

0x21c4,	// (0x00033a8a) bg_popup_window_pane_cp15_ParamLimits

0x21c4,	// (0x00033a8a) bg_popup_window_pane_cp15

0x6413,	// (0x00037cd9) indicator_popup_pane_cp1_ParamLimits

0x6413,	// (0x00037cd9) indicator_popup_pane_cp1

0x6426,	// (0x00037cec) indicator_popup_pane_cp2_ParamLimits

0x6426,	// (0x00037cec) indicator_popup_pane_cp2

0x6439,	// (0x00037cff) popup_query_data_code_window_g1_ParamLimits

0x6439,	// (0x00037cff) popup_query_data_code_window_g1

0x21e2,	// (0x00033aa8) popup_query_data_code_window_t1_ParamLimits

0x21e2,	// (0x00033aa8) popup_query_data_code_window_t1

0x21f4,	// (0x00033aba) popup_query_data_code_window_t2_ParamLimits

0x21f4,	// (0x00033aba) popup_query_data_code_window_t2

0x644c,	// (0x00037d12) popup_query_data_code_window_t3_ParamLimits

0x644c,	// (0x00037d12) popup_query_data_code_window_t3

0x6462,	// (0x00037d28) popup_query_data_code_window_t4_ParamLimits

0x6462,	// (0x00037d28) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00040e2b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00040e2b) popup_query_data_code_window_t

0x8087,	// (0x0003994d) list_single_midp_graphic_pane_g3

0x647a,	// (0x00037d40) query_popup_data_pane_cp2_ParamLimits

0x648d,	// (0x00037d53) query_popup_pane_cp2_ParamLimits

0x648d,	// (0x00037d53) query_popup_pane_cp2

0x1f96,	// (0x0003385c) bg_popup_window_pane_cp11

0x9e91,	// (0x0003b757) heading_pane_cp5

0x9e99,	// (0x0003b75f) listscroll_popup_info_pane

0x1f96,	// (0x0003385c) input_focus_pane_cp3

0x2206,	// (0x00033acc) query_popup_pane_t1

0x2214,	// (0x00033ada) list_popup_info_pane_ParamLimits

0x2214,	// (0x00033ada) list_popup_info_pane

0x2223,	// (0x00033ae9) listscroll_popup_info_pane_g1

0x222b,	// (0x00033af1) scroll_pane_cp7

0x64a0,	// (0x00037d66) popup_info_list_pane_t1_ParamLimits

0x64a0,	// (0x00037d66) popup_info_list_pane_t1

0x64ba,	// (0x00037d80) popup_info_list_pane_t2_ParamLimits

0x64ba,	// (0x00037d80) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00040e34) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00040e34) popup_info_list_pane_t

0x1f96,	// (0x0003385c) bg_popup_window_pane_cp12

0xb201,	// (0x0003cac7) find_popup_pane

0x1ff2,	// (0x000338b8) bg_popup_window_pane_cp3

0x2235,	// (0x00033afb) heading_pane_cp3

0x2244,	// (0x00033b0a) listscroll_popup_graphic_pane

0x1f96,	// (0x0003385c) bg_popup_window_pane_cp4

0x6524,	// (0x00037dea) heading_pane_cp4

0x2254,	// (0x00033b1a) listscroll_popup_colour_pane

0x652e,	// (0x00037df4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x652e,	// (0x00037df4) cell_large_graphic_colour_none_popup_pane

0x6542,	// (0x00037e08) grid_large_graphic_colour_popup_pane_ParamLimits

0x6542,	// (0x00037e08) grid_large_graphic_colour_popup_pane

0x6566,	// (0x00037e2c) listscroll_popup_colour_pane_g1_ParamLimits

0x6566,	// (0x00037e2c) listscroll_popup_colour_pane_g1

0x657d,	// (0x00037e43) listscroll_popup_colour_pane_g2_ParamLimits

0x657d,	// (0x00037e43) listscroll_popup_colour_pane_g2

0x6594,	// (0x00037e5a) listscroll_popup_colour_pane_g3_ParamLimits

0x6594,	// (0x00037e5a) listscroll_popup_colour_pane_g3

0x65a4,	// (0x00037e6a) listscroll_popup_colour_pane_g4_ParamLimits

0x65a4,	// (0x00037e6a) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00040e39) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00040e39) listscroll_popup_colour_pane_g

0x225c,	// (0x00033b22) scroll_pane_cp6_ParamLimits

0x225c,	// (0x00033b22) scroll_pane_cp6

0x65b4,	// (0x00037e7a) cell_large_graphic_colour_popup_pane_ParamLimits

0x65b4,	// (0x00037e7a) cell_large_graphic_colour_popup_pane

0x65d3,	// (0x00037e99) cell_large_graphic_colour_none_popup_pane_t1

0x1f96,	// (0x0003385c) grid_highlight_pane_cp5

0x226e,	// (0x00033b34) cell_large_graphic_colour_popup_pane_g1

0x2276,	// (0x00033b3c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00040e42) cell_large_graphic_colour_popup_pane_g

0x227e,	// (0x00033b44) cell_large_graphic_colour_popup_pane_g2_copy1

0x2287,	// (0x00033b4d) grid_highlight_pane_cp4

0x228f,	// (0x00033b55) bg_popup_window_pane_cp8_ParamLimits

0x228f,	// (0x00033b55) bg_popup_window_pane_cp8

0x65e2,	// (0x00037ea8) popup_snote_single_text_window_g1_ParamLimits

0x65e2,	// (0x00037ea8) popup_snote_single_text_window_g1

0x65f4,	// (0x00037eba) popup_snote_single_text_window_t1_ParamLimits

0x65f4,	// (0x00037eba) popup_snote_single_text_window_t1

0x6607,	// (0x00037ecd) popup_snote_single_text_window_t2_ParamLimits

0x6607,	// (0x00037ecd) popup_snote_single_text_window_t2

0x661a,	// (0x00037ee0) popup_snote_single_text_window_t3_ParamLimits

0x661a,	// (0x00037ee0) popup_snote_single_text_window_t3

0x6653,	// (0x00037f19) popup_snote_single_text_window_t4_ParamLimits

0x6653,	// (0x00037f19) popup_snote_single_text_window_t4

0x6687,	// (0x00037f4d) popup_snote_single_text_window_t5_ParamLimits

0x6687,	// (0x00037f4d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00040e47) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00040e47) popup_snote_single_text_window_t

0x22aa,	// (0x00033b70) bg_popup_window_pane_cp9_ParamLimits

0x22aa,	// (0x00033b70) bg_popup_window_pane_cp9

0x65e2,	// (0x00037ea8) popup_snote_single_graphic_window_g1_ParamLimits

0x65e2,	// (0x00037ea8) popup_snote_single_graphic_window_g1

0x22b8,	// (0x00033b7e) popup_snote_single_graphic_window_g2_ParamLimits

0x22b8,	// (0x00033b7e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00040e52) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00040e52) popup_snote_single_graphic_window_g

0x22c4,	// (0x00033b8a) popup_snote_single_graphic_window_t1_ParamLimits

0x22c4,	// (0x00033b8a) popup_snote_single_graphic_window_t1

0x22d7,	// (0x00033b9d) popup_snote_single_graphic_window_t2_ParamLimits

0x22d7,	// (0x00033b9d) popup_snote_single_graphic_window_t2

0x66b6,	// (0x00037f7c) popup_snote_single_graphic_window_t3_ParamLimits

0x66b6,	// (0x00037f7c) popup_snote_single_graphic_window_t3

0x66ef,	// (0x00037fb5) popup_snote_single_graphic_window_t4_ParamLimits

0x66ef,	// (0x00037fb5) popup_snote_single_graphic_window_t4

0x6723,	// (0x00037fe9) popup_snote_single_graphic_window_t5_ParamLimits

0x6723,	// (0x00037fe9) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00040e57) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00040e57) popup_snote_single_graphic_window_t

0xb143,	// (0x0003ca09) grid_graphic_popup_pane_ParamLimits

0xb143,	// (0x0003ca09) grid_graphic_popup_pane

0xb16d,	// (0x0003ca33) listscroll_popup_graphic_pane_g1_ParamLimits

0xb16d,	// (0x0003ca33) listscroll_popup_graphic_pane_g1

0xb181,	// (0x0003ca47) listscroll_popup_graphic_pane_g2_ParamLimits

0xb181,	// (0x0003ca47) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0004123d) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0004123d) listscroll_popup_graphic_pane_g

0xb195,	// (0x0003ca5b) scroll_pane_cp5

0xb0d9,	// (0x0003c99f) cell_graphic_popup_pane_ParamLimits

0xb0d9,	// (0x0003c99f) cell_graphic_popup_pane

0xb0ba,	// (0x0003c980) cell_graphic_popup_pane_g1

0xb0c2,	// (0x0003c988) cell_graphic_popup_pane_g2

0x227e,	// (0x00033b44) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00041236) cell_graphic_popup_pane_g

0xb0cb,	// (0x0003c991) cell_graphic_popup_pane_t2

0x2287,	// (0x00033b4d) grid_highlight_pane_cp3

0x22fc,	// (0x00033bc2) list_gen_pane_ParamLimits

0x22fc,	// (0x00033bc2) list_gen_pane

0x2324,	// (0x00033bea) scroll_pane

0xb012,	// (0x0003c8d8) bg_list_pane_g1_ParamLimits

0xb012,	// (0x0003c8d8) bg_list_pane_g1

0xb02f,	// (0x0003c8f5) bg_list_pane_g2_ParamLimits

0xb02f,	// (0x0003c8f5) bg_list_pane_g2

0xb044,	// (0x0003c90a) bg_list_pane_g3_ParamLimits

0xb044,	// (0x0003c90a) bg_list_pane_g3

0xb058,	// (0x0003c91e) bg_list_pane_g4_ParamLimits

0xb058,	// (0x0003c91e) bg_list_pane_g4

0xb06c,	// (0x0003c932) bg_list_pane_g5_ParamLimits

0xb06c,	// (0x0003c932) bg_list_pane_g5

0x0004,

0xf965,	// (0x0004122b) bg_list_pane_g_ParamLimits

0xf965,	// (0x0004122b) bg_list_pane_g

0x842f,	// (0x00039cf5) list_double2_graphic_large_graphic_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double2_graphic_large_graphic_pane

0x842f,	// (0x00039cf5) list_double2_graphic_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double2_graphic_pane

0x842f,	// (0x00039cf5) list_double2_large_graphic_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double2_large_graphic_pane

0x842f,	// (0x00039cf5) list_double2_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double2_pane

0x842f,	// (0x00039cf5) list_double_graphic_heading_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_graphic_heading_pane

0x842f,	// (0x00039cf5) list_double_graphic_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_graphic_pane

0x842f,	// (0x00039cf5) list_double_heading_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_heading_pane

0x842f,	// (0x00039cf5) list_double_large_graphic_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_large_graphic_pane

0x842f,	// (0x00039cf5) list_double_number_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_number_pane

0x842f,	// (0x00039cf5) list_double_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_pane

0x842f,	// (0x00039cf5) list_double_time_pane_ParamLimits

0x842f,	// (0x00039cf5) list_double_time_pane

0x842f,	// (0x00039cf5) list_setting_number_pane_ParamLimits

0x842f,	// (0x00039cf5) list_setting_number_pane

0x842f,	// (0x00039cf5) list_setting_pane_ParamLimits

0x842f,	// (0x00039cf5) list_setting_pane

0x8470,	// (0x00039d36) list_single_2graphic_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_2graphic_pane

0x8470,	// (0x00039d36) list_single_graphic_heading_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_graphic_heading_pane

0x8470,	// (0x00039d36) list_single_graphic_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_graphic_pane

0x8470,	// (0x00039d36) list_single_heading_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_heading_pane

0xafef,	// (0x0003c8b5) list_single_large_graphic_pane_ParamLimits

0xafef,	// (0x0003c8b5) list_single_large_graphic_pane

0x8470,	// (0x00039d36) list_single_number_heading_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_number_heading_pane

0x8470,	// (0x00039d36) list_single_number_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_number_pane

0x8470,	// (0x00039d36) list_single_pane_ParamLimits

0x8470,	// (0x00039d36) list_single_pane

0x1f96,	// (0x0003385c) list_highlight_pane_cp1

0x45ea,	// (0x00035eb0) list_single_pane_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_single_pane_g1

0x45f6,	// (0x00035ebc) list_single_pane_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00040e69) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00040e69) list_single_pane_g

0x8419,	// (0x00039cdf) list_single_pane_t1_ParamLimits

0x8419,	// (0x00039cdf) list_single_pane_t1

0x45ea,	// (0x00035eb0) list_single_number_pane_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_single_number_pane_g1

0x45f6,	// (0x00035ebc) list_single_number_pane_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00040e69) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00040e69) list_single_number_pane_g

0x6768,	// (0x0003802e) list_single_number_pane_t1_ParamLimits

0x6768,	// (0x0003802e) list_single_number_pane_t1

0x8363,	// (0x00039c29) list_single_number_pane_t2_ParamLimits

0x8363,	// (0x00039c29) list_single_number_pane_t2

0x0001,

0xf926,	// (0x000411ec) list_single_number_pane_t_ParamLimits

0xf926,	// (0x000411ec) list_single_number_pane_t

0x675c,	// (0x00038022) list_single_graphic_pane_g1_ParamLimits

0x675c,	// (0x00038022) list_single_graphic_pane_g1

0x45ea,	// (0x00035eb0) list_single_graphic_pane_g2_ParamLimits

0x45ea,	// (0x00035eb0) list_single_graphic_pane_g2

0x45f6,	// (0x00035ebc) list_single_graphic_pane_g3_ParamLimits

0x45f6,	// (0x00035ebc) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00040e62) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00040e62) list_single_graphic_pane_g

0x6768,	// (0x0003802e) list_single_graphic_pane_t1_ParamLimits

0x6768,	// (0x0003802e) list_single_graphic_pane_t1

0x45ea,	// (0x00035eb0) list_single_heading_pane_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_single_heading_pane_g1

0x45f6,	// (0x00035ebc) list_single_heading_pane_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00040e69) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00040e69) list_single_heading_pane_g

0x4618,	// (0x00035ede) list_single_heading_pane_t1_ParamLimits

0x4618,	// (0x00035ede) list_single_heading_pane_t1

0x462e,	// (0x00035ef4) list_single_heading_pane_t2_ParamLimits

0x462e,	// (0x00035ef4) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00040e6e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00040e6e) list_single_heading_pane_t

0x45ea,	// (0x00035eb0) list_single_number_heading_pane_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_single_number_heading_pane_g1

0x45f6,	// (0x00035ebc) list_single_number_heading_pane_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00040e69) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00040e69) list_single_number_heading_pane_g

0x4618,	// (0x00035ede) list_single_number_heading_pane_t1_ParamLimits

0x4618,	// (0x00035ede) list_single_number_heading_pane_t1

0x4640,	// (0x00035f06) list_single_number_heading_pane_t2_ParamLimits

0x4640,	// (0x00035f06) list_single_number_heading_pane_t2

0x4652,	// (0x00035f18) list_single_number_heading_pane_t3_ParamLimits

0x4652,	// (0x00035f18) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00040e73) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00040e73) list_single_number_heading_pane_t

0x677e,	// (0x00038044) list_single_graphic_heading_pane_g1_ParamLimits

0x677e,	// (0x00038044) list_single_graphic_heading_pane_g1

0x678a,	// (0x00038050) list_single_graphic_heading_pane_g4_ParamLimits

0x678a,	// (0x00038050) list_single_graphic_heading_pane_g4

0x45f6,	// (0x00035ebc) list_single_graphic_heading_pane_g5_ParamLimits

0x45f6,	// (0x00035ebc) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00040e7a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00040e7a) list_single_graphic_heading_pane_g

0x4618,	// (0x00035ede) list_single_graphic_heading_pane_t1_ParamLimits

0x4618,	// (0x00035ede) list_single_graphic_heading_pane_t1

0x679b,	// (0x00038061) list_single_graphic_heading_pane_t2_ParamLimits

0x679b,	// (0x00038061) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00040e81) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00040e81) list_single_graphic_heading_pane_t

0x67ad,	// (0x00038073) list_single_large_graphic_pane_g1_ParamLimits

0x67ad,	// (0x00038073) list_single_large_graphic_pane_g1

0x67b9,	// (0x0003807f) list_single_large_graphic_pane_g2_ParamLimits

0x67b9,	// (0x0003807f) list_single_large_graphic_pane_g2

0x67c5,	// (0x0003808b) list_single_large_graphic_pane_g3_ParamLimits

0x67c5,	// (0x0003808b) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00040e86) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00040e86) list_single_large_graphic_pane_g

0xa04d,	// (0x0003b913) wait_border_pane_g2_copy1

0x67d1,	// (0x00038097) list_single_large_graphic_pane_g4_cp2

0x67d9,	// (0x0003809f) list_single_large_graphic_pane_t1_ParamLimits

0x67d9,	// (0x0003809f) list_single_large_graphic_pane_t1

0x467c,	// (0x00035f42) list_double_pane_g1_ParamLimits

0x467c,	// (0x00035f42) list_double_pane_g1

0x4688,	// (0x00035f4e) list_double_pane_g2_ParamLimits

0x4688,	// (0x00035f4e) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00040e8d) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00040e8d) list_double_pane_g

0x67ef,	// (0x000380b5) list_double_pane_t1_ParamLimits

0x67ef,	// (0x000380b5) list_double_pane_t1

0x6805,	// (0x000380cb) list_double_pane_t2_ParamLimits

0x6805,	// (0x000380cb) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00040e92) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00040e92) list_double_pane_t

0x6817,	// (0x000380dd) list_double2_pane_g1_ParamLimits

0x6817,	// (0x000380dd) list_double2_pane_g1

0x4688,	// (0x00035f4e) list_double2_pane_g2_ParamLimits

0x4688,	// (0x00035f4e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00040e97) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00040e97) list_double2_pane_g

0x67ef,	// (0x000380b5) list_double2_pane_t1_ParamLimits

0x67ef,	// (0x000380b5) list_double2_pane_t1

0x6828,	// (0x000380ee) list_double2_pane_t2_ParamLimits

0x6828,	// (0x000380ee) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00040e9c) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00040e9c) list_double2_pane_t

0x467c,	// (0x00035f42) list_double_number_pane_g1_ParamLimits

0x467c,	// (0x00035f42) list_double_number_pane_g1

0x4688,	// (0x00035f4e) list_double_number_pane_g2_ParamLimits

0x4688,	// (0x00035f4e) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00040e8d) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00040e8d) list_double_number_pane_g

0x683a,	// (0x00038100) list_double_number_pane_t1_ParamLimits

0x683a,	// (0x00038100) list_double_number_pane_t1

0x684c,	// (0x00038112) list_double_number_pane_t2_ParamLimits

0x684c,	// (0x00038112) list_double_number_pane_t2

0x6862,	// (0x00038128) list_double_number_pane_t3_ParamLimits

0x6862,	// (0x00038128) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00040ea1) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00040ea1) list_double_number_pane_t

0x6874,	// (0x0003813a) list_double_graphic_pane_g1_ParamLimits

0x6874,	// (0x0003813a) list_double_graphic_pane_g1

0x4694,	// (0x00035f5a) list_double_graphic_pane_g2_ParamLimits

0x4694,	// (0x00035f5a) list_double_graphic_pane_g2

0x46a3,	// (0x00035f69) list_double_graphic_pane_g3_ParamLimits

0x46a3,	// (0x00035f69) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00040ea8) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00040ea8) list_double_graphic_pane_g

0x684c,	// (0x00038112) list_double_graphic_pane_t1_ParamLimits

0x684c,	// (0x00038112) list_double_graphic_pane_t1

0x6862,	// (0x00038128) list_double_graphic_pane_t2_ParamLimits

0x6862,	// (0x00038128) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00040eb1) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00040eb1) list_double_graphic_pane_t

0x6874,	// (0x0003813a) list_double2_graphic_pane_g1_ParamLimits

0x6874,	// (0x0003813a) list_double2_graphic_pane_g1

0x46af,	// (0x00035f75) list_double2_graphic_pane_g2_ParamLimits

0x46af,	// (0x00035f75) list_double2_graphic_pane_g2

0x46bb,	// (0x00035f81) list_double2_graphic_pane_g3_ParamLimits

0x46bb,	// (0x00035f81) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00040eb6) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00040eb6) list_double2_graphic_pane_g

0x684c,	// (0x00038112) list_double2_graphic_pane_t1_ParamLimits

0x684c,	// (0x00038112) list_double2_graphic_pane_t1

0x688c,	// (0x00038152) list_double2_graphic_pane_t2_ParamLimits

0x688c,	// (0x00038152) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00040ebd) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00040ebd) list_double2_graphic_pane_t

0x689e,	// (0x00038164) list_double_large_graphic_pane_g1_ParamLimits

0x689e,	// (0x00038164) list_double_large_graphic_pane_g1

0x6817,	// (0x000380dd) list_double_large_graphic_pane_g2_ParamLimits

0x6817,	// (0x000380dd) list_double_large_graphic_pane_g2

0x4688,	// (0x00035f4e) list_double_large_graphic_pane_g3_ParamLimits

0x4688,	// (0x00035f4e) list_double_large_graphic_pane_g3

0x68b1,	// (0x00038177) list_double_large_graphic_pane_g4_ParamLimits

0x68b1,	// (0x00038177) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00040ec2) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00040ec2) list_double_large_graphic_pane_g

0x68c3,	// (0x00038189) list_double_large_graphic_pane_t1_ParamLimits

0x68c3,	// (0x00038189) list_double_large_graphic_pane_t1

0x68dc,	// (0x000381a2) list_double_large_graphic_pane_t2_ParamLimits

0x68dc,	// (0x000381a2) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00040ecd) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00040ecd) list_double_large_graphic_pane_t

0x68ee,	// (0x000381b4) list_double2_large_graphic_pane_g1_ParamLimits

0x68ee,	// (0x000381b4) list_double2_large_graphic_pane_g1

0x6817,	// (0x000380dd) list_double2_large_graphic_pane_g2_ParamLimits

0x6817,	// (0x000380dd) list_double2_large_graphic_pane_g2

0x4688,	// (0x00035f4e) list_double2_large_graphic_pane_g3_ParamLimits

0x4688,	// (0x00035f4e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00040ed2) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00040ed2) list_double2_large_graphic_pane_g

0x684c,	// (0x00038112) list_double2_large_graphic_pane_t1_ParamLimits

0x684c,	// (0x00038112) list_double2_large_graphic_pane_t1

0x688c,	// (0x00038152) list_double2_large_graphic_pane_t2_ParamLimits

0x688c,	// (0x00038152) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00040ebd) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00040ebd) list_double2_large_graphic_pane_t

0x68fa,	// (0x000381c0) list_double_heading_pane_g1_ParamLimits

0x68fa,	// (0x000381c0) list_double_heading_pane_g1

0x46dc,	// (0x00035fa2) list_double_heading_pane_g2_ParamLimits

0x46dc,	// (0x00035fa2) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00040ed9) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00040ed9) list_double_heading_pane_g

0x690b,	// (0x000381d1) list_double_heading_pane_t1_ParamLimits

0x690b,	// (0x000381d1) list_double_heading_pane_t1

0x688c,	// (0x00038152) list_double_heading_pane_t2_ParamLimits

0x688c,	// (0x00038152) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00040ede) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00040ede) list_double_heading_pane_t

0x6921,	// (0x000381e7) list_double_graphic_heading_pane_g1_ParamLimits

0x6921,	// (0x000381e7) list_double_graphic_heading_pane_g1

0x68fa,	// (0x000381c0) list_double_graphic_heading_pane_g2_ParamLimits

0x68fa,	// (0x000381c0) list_double_graphic_heading_pane_g2

0x46dc,	// (0x00035fa2) list_double_graphic_heading_pane_g3_ParamLimits

0x46dc,	// (0x00035fa2) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00040ee3) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00040ee3) list_double_graphic_heading_pane_g

0x690b,	// (0x000381d1) list_double_graphic_heading_pane_t1_ParamLimits

0x690b,	// (0x000381d1) list_double_graphic_heading_pane_t1

0x688c,	// (0x00038152) list_double_graphic_heading_pane_t2_ParamLimits

0x688c,	// (0x00038152) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00040ede) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00040ede) list_double_graphic_heading_pane_t

0x6817,	// (0x000380dd) list_double_time_pane_g1_ParamLimits

0x6817,	// (0x000380dd) list_double_time_pane_g1

0x4688,	// (0x00035f4e) list_double_time_pane_g2_ParamLimits

0x4688,	// (0x00035f4e) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00040e97) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00040e97) list_double_time_pane_g

0x46e8,	// (0x00035fae) list_double_time_pane_t1_ParamLimits

0x46e8,	// (0x00035fae) list_double_time_pane_t1

0x46fe,	// (0x00035fc4) list_double_time_pane_t2_ParamLimits

0x46fe,	// (0x00035fc4) list_double_time_pane_t2

0x4710,	// (0x00035fd6) list_double_time_pane_t3_ParamLimits

0x4710,	// (0x00035fd6) list_double_time_pane_t3

0x4722,	// (0x00035fe8) list_double_time_pane_t4_ParamLimits

0x4722,	// (0x00035fe8) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00040eea) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00040eea) list_double_time_pane_t

0x4734,	// (0x00035ffa) list_setting_pane_g1_ParamLimits

0x4734,	// (0x00035ffa) list_setting_pane_g1

0x4740,	// (0x00036006) list_setting_pane_g2_ParamLimits

0x4740,	// (0x00036006) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00040ef3) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00040ef3) list_setting_pane_g

0x692d,	// (0x000381f3) list_setting_pane_t1_ParamLimits

0x692d,	// (0x000381f3) list_setting_pane_t1

0x6944,	// (0x0003820a) list_setting_pane_t2_ParamLimits

0x6944,	// (0x0003820a) list_setting_pane_t2

0x0002,

0xf632,	// (0x00040ef8) list_setting_pane_t_ParamLimits

0xf632,	// (0x00040ef8) list_setting_pane_t

0x6981,	// (0x00038247) set_value_pane_cp_ParamLimits

0x6981,	// (0x00038247) set_value_pane_cp

0x474c,	// (0x00036012) list_setting_number_pane_g1_ParamLimits

0x474c,	// (0x00036012) list_setting_number_pane_g1

0x4758,	// (0x0003601e) list_setting_number_pane_g2_ParamLimits

0x4758,	// (0x0003601e) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00040eff) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00040eff) list_setting_number_pane_g

0x698d,	// (0x00038253) list_setting_number_pane_t1_ParamLimits

0x698d,	// (0x00038253) list_setting_number_pane_t1

0x4764,	// (0x0003602a) list_setting_number_pane_t2_ParamLimits

0x4764,	// (0x0003602a) list_setting_number_pane_t2

0x69a1,	// (0x00038267) list_setting_number_pane_t3_ParamLimits

0x69a1,	// (0x00038267) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00040f04) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00040f04) list_setting_number_pane_t

0x6981,	// (0x00038247) set_value_pane_ParamLimits

0x6981,	// (0x00038247) set_value_pane

0x2358,	// (0x00033c1e) bg_set_opt_pane_ParamLimits

0x2358,	// (0x00033c1e) bg_set_opt_pane

0x69b9,	// (0x0003827f) set_value_pane_t1

0x2379,	// (0x00033c3f) slider_set_pane_cp3

0x69c7,	// (0x0003828d) volume_small_pane_cp

0x2382,	// (0x00033c48) list_form_gen_pane

0x238b,	// (0x00033c51) scroll_pane_cp8

0x69d0,	// (0x00038296) form_field_data_pane_ParamLimits

0x69d0,	// (0x00038296) form_field_data_pane

0x69e8,	// (0x000382ae) form_field_data_wide_pane_ParamLimits

0x69e8,	// (0x000382ae) form_field_data_wide_pane

0x6a09,	// (0x000382cf) form_field_popup_pane_ParamLimits

0x6a09,	// (0x000382cf) form_field_popup_pane

0x6a27,	// (0x000382ed) form_field_popup_wide_pane_ParamLimits

0x6a27,	// (0x000382ed) form_field_popup_wide_pane

0x47b6,	// (0x0003607c) form_field_slider_pane_ParamLimits

0x47b6,	// (0x0003607c) form_field_slider_pane

0x6a44,	// (0x0003830a) form_field_slider_wide_pane_ParamLimits

0x6a44,	// (0x0003830a) form_field_slider_wide_pane

0x239c,	// (0x00033c62) data_form_pane

0x6a61,	// (0x00038327) form_field_data_pane_t1

0x23a8,	// (0x00033c6e) input_focus_pane

0x6a79,	// (0x0003833f) data_form_wide_pane

0x6a96,	// (0x0003835c) form_field_data_wide_pane_t1

0x229c,	// (0x00033b62) input_focus_pane_cp6

0x6ab8,	// (0x0003837e) form_field_popup_pane_t1

0x23a8,	// (0x00033c6e) input_focus_pane_cp7

0x23d6,	// (0x00033c9c) list_form_pane

0x6ad8,	// (0x0003839e) form_field_popup_wide_pane_t1

0x23a8,	// (0x00033c6e) input_focus_pane_cp8

0x23e2,	// (0x00033ca8) list_form_wide_pane

0x6af5,	// (0x000383bb) form_field_slider_pane_t1_ParamLimits

0x6af5,	// (0x000383bb) form_field_slider_pane_t1

0x6b0b,	// (0x000383d1) form_field_slider_pane_t2_ParamLimits

0x6b0b,	// (0x000383d1) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00040f14) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00040f14) form_field_slider_pane_t

0x1fe4,	// (0x000338aa) input_focus_pane_cp9_ParamLimits

0x1fe4,	// (0x000338aa) input_focus_pane_cp9

0x6b20,	// (0x000383e6) slider_cont_pane_ParamLimits

0x6b20,	// (0x000383e6) slider_cont_pane

0x23ee,	// (0x00033cb4) form_field_slider_wide_pane_t1_ParamLimits

0x23ee,	// (0x00033cb4) form_field_slider_wide_pane_t1

0x6b34,	// (0x000383fa) form_field_slider_wide_pane_t2_ParamLimits

0x6b34,	// (0x000383fa) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00040f19) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00040f19) form_field_slider_wide_pane_t

0x1fe4,	// (0x000338aa) input_focus_pane_cp10_ParamLimits

0x1fe4,	// (0x000338aa) input_focus_pane_cp10

0x6b46,	// (0x0003840c) slider_cont_pane_cp1_ParamLimits

0x6b46,	// (0x0003840c) slider_cont_pane_cp1

0x6b5a,	// (0x00038420) slider_form_pane_cp

0x2400,	// (0x00033cc6) input_focus_pane_g1

0x2408,	// (0x00033cce) input_focus_pane_g2

0x2410,	// (0x00033cd6) input_focus_pane_g3

0x2418,	// (0x00033cde) input_focus_pane_g4

0x2420,	// (0x00033ce6) input_focus_pane_g5

0x2428,	// (0x00033cee) input_focus_pane_g6

0x2430,	// (0x00033cf6) input_focus_pane_g7

0x2438,	// (0x00033cfe) input_focus_pane_g8

0x2440,	// (0x00033d06) input_focus_pane_g9

0x1f8c,	// (0x00033852) input_focus_pane_g10

0x0009,

0xf658,	// (0x00040f1e) input_focus_pane_g

0xa056,	// (0x0003b91c) wait_border_pane_g3_copy1

0x6b62,	// (0x00038428) data_form_pane_t1

0x1f8c,	// (0x00033852) wait_anim_pane_g1_copy1

0x83ed,	// (0x00039cb3) data_form_wide_pane_t1

0x6b7d,	// (0x00038443) list_form_graphic_pane_cp_ParamLimits

0x6b7d,	// (0x00038443) list_form_graphic_pane_cp

0xaf45,	// (0x0003c80b) slider_form_pane_g1

0xaf4e,	// (0x0003c814) slider_form_pane_g2

0x0006,

0xf956,	// (0x0004121c) slider_form_pane_g

0x6b91,	// (0x00038457) list_form_graphic_pane_ParamLimits

0x6b91,	// (0x00038457) list_form_graphic_pane

0x6ba8,	// (0x0003846e) list_form_graphic_pane_g1

0x6bb0,	// (0x00038476) list_form_graphic_pane_t1_ParamLimits

0x6bb0,	// (0x00038476) list_form_graphic_pane_t1

0x1ff2,	// (0x000338b8) list_highlight_pane_cp5_ParamLimits

0x1ff2,	// (0x000338b8) list_highlight_pane_cp5

0x6bc5,	// (0x0003848b) find_pane_g1

0x2448,	// (0x00033d0e) input_find_pane

0x6bce,	// (0x00038494) input_find_pane_g1_ParamLimits

0x6bce,	// (0x00038494) input_find_pane_g1

0x6bda,	// (0x000384a0) input_find_pane_t1_ParamLimits

0x6bda,	// (0x000384a0) input_find_pane_t1

0x6bef,	// (0x000384b5) input_find_pane_t2_ParamLimits

0x6bef,	// (0x000384b5) input_find_pane_t2

0x0001,

0xf66d,	// (0x00040f33) input_find_pane_t_ParamLimits

0xf66d,	// (0x00040f33) input_find_pane_t

0x2451,	// (0x00033d17) input_focus_pane_cp5_ParamLimits

0x2451,	// (0x00033d17) input_focus_pane_cp5

0x2464,	// (0x00033d2a) bg_popup_window_pane_cp2_ParamLimits

0x2464,	// (0x00033d2a) bg_popup_window_pane_cp2

0x2471,	// (0x00033d37) listscroll_menu_pane_ParamLimits

0x2471,	// (0x00033d37) listscroll_menu_pane

0x6c10,	// (0x000384d6) popup_submenu_window_ParamLimits

0x6c10,	// (0x000384d6) popup_submenu_window

0x247d,	// (0x00033d43) find_popup_pane_g1

0x6c38,	// (0x000384fe) input_popup_find_pane_cp

0x2485,	// (0x00033d4b) input_focus_pane_cp4_ParamLimits

0x2485,	// (0x00033d4b) input_focus_pane_cp4

0x2493,	// (0x00033d59) input_popup_find_pane_t1_ParamLimits

0x2493,	// (0x00033d59) input_popup_find_pane_t1

0x1f96,	// (0x0003385c) bg_popup_sub_pane_cp

0x24c1,	// (0x00033d87) listscroll_popup_sub_pane

0x24c9,	// (0x00033d8f) list_submenu_pane_ParamLimits

0x24c9,	// (0x00033d8f) list_submenu_pane

0x24da,	// (0x00033da0) scroll_pane_cp4

0x6c50,	// (0x00038516) list_single_popup_submenu_pane_ParamLimits

0x6c50,	// (0x00038516) list_single_popup_submenu_pane

0x2dd7,	// (0x0003469d) list_single_popup_submenu_pane_g1

0x6c64,	// (0x0003852a) list_single_popup_submenu_pane_t1_ParamLimits

0x6c64,	// (0x0003852a) list_single_popup_submenu_pane_t1

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp1_ParamLimits

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp1

0x24e2,	// (0x00033da8) tabs_2_active_pane_g1

0x6c79,	// (0x0003853f) tabs_2_active_pane_t1

0x1ff2,	// (0x000338b8) bg_passive_tab_pane_cp1_ParamLimits

0x1ff2,	// (0x000338b8) bg_passive_tab_pane_cp1

0x24e2,	// (0x00033da8) tabs_2_passive_pane_g1

0x6c79,	// (0x0003853f) tabs_2_passive_pane_t1

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp4

0x6c99,	// (0x0003855f) tabs_2_long_active_pane_t1

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp4

0x808f,	// (0x00039955) list_single_midp_graphic_pane_g4_ParamLimits

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp5

0x6cb8,	// (0x0003857e) tabs_3_long_active_pane_t1

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp5

0x808f,	// (0x00039955) list_single_midp_graphic_pane_g4

0x1ff2,	// (0x000338b8) bg_popup_window_pane_cp13_ParamLimits

0x1ff2,	// (0x000338b8) bg_popup_window_pane_cp13

0x24f6,	// (0x00033dbc) listscroll_popup_fast_pane_ParamLimits

0x24f6,	// (0x00033dbc) listscroll_popup_fast_pane

0x2502,	// (0x00033dc8) grid_popup_fast_pane_ParamLimits

0x2502,	// (0x00033dc8) grid_popup_fast_pane

0x2514,	// (0x00033dda) scroll_pane_cp9_ParamLimits

0x2514,	// (0x00033dda) scroll_pane_cp9

0xc887,	// (0x0003e14d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc887,	// (0x0003e14d) list_single_graphic_hl_pane_t1_cp2

0x2527,	// (0x00033ded) input_focus_pane_cp20_ParamLimits

0x2527,	// (0x00033ded) input_focus_pane_cp20

0x2535,	// (0x00033dfb) query_popup_data_pane_t1_ParamLimits

0x2535,	// (0x00033dfb) query_popup_data_pane_t1

0x2548,	// (0x00033e0e) query_popup_data_pane_t2_ParamLimits

0x2548,	// (0x00033e0e) query_popup_data_pane_t2

0x258e,	// (0x00033e54) query_popup_data_pane_t3_ParamLimits

0x258e,	// (0x00033e54) query_popup_data_pane_t3

0x25cf,	// (0x00033e95) query_popup_data_pane_t4_ParamLimits

0x25cf,	// (0x00033e95) query_popup_data_pane_t4

0x260b,	// (0x00033ed1) query_popup_data_pane_t5_ParamLimits

0x260b,	// (0x00033ed1) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00040f38) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00040f38) query_popup_data_pane_t

0x2400,	// (0x00033cc6) bg_set_opt_pane_g1

0x2408,	// (0x00033cce) bg_set_opt_pane_g2

0x2410,	// (0x00033cd6) bg_set_opt_pane_g3

0x2418,	// (0x00033cde) bg_set_opt_pane_g4

0x2420,	// (0x00033ce6) bg_set_opt_pane_g5

0x2428,	// (0x00033cee) bg_set_opt_pane_g6

0x2430,	// (0x00033cf6) bg_set_opt_pane_g7

0x2438,	// (0x00033cfe) bg_set_opt_pane_g8

0x2440,	// (0x00033d06) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00040f43) bg_set_opt_pane_g

0x71f9,	// (0x00038abf) control_top_pane_stacon_ParamLimits

0x71f9,	// (0x00038abf) control_top_pane_stacon

0x724c,	// (0x00038b12) signal_pane_stacon_ParamLimits

0x724c,	// (0x00038b12) signal_pane_stacon

0x2997,	// (0x0003425d) stacon_top_pane_g1_ParamLimits

0x2997,	// (0x0003425d) stacon_top_pane_g1

0x7271,	// (0x00038b37) title_pane_stacon_ParamLimits

0x7271,	// (0x00038b37) title_pane_stacon

0x729b,	// (0x00038b61) uni_indicator_pane_stacon_ParamLimits

0x729b,	// (0x00038b61) uni_indicator_pane_stacon

0x72b0,	// (0x00038b76) battery_pane_stacon_ParamLimits

0x72b0,	// (0x00038b76) battery_pane_stacon

0x72f4,	// (0x00038bba) control_bottom_pane_stacon_ParamLimits

0x72f4,	// (0x00038bba) control_bottom_pane_stacon

0x7317,	// (0x00038bdd) navi_pane_stacon_ParamLimits

0x7317,	// (0x00038bdd) navi_pane_stacon

0x29b9,	// (0x0003427f) stacon_bottom_pane_g1_ParamLimits

0x29b9,	// (0x0003427f) stacon_bottom_pane_g1

0x6ce4,	// (0x000385aa) aid_levels_signal_lsc_ParamLimits

0x6ce4,	// (0x000385aa) aid_levels_signal_lsc

0x6cfa,	// (0x000385c0) signal_pane_stacon_g1_ParamLimits

0x6cfa,	// (0x000385c0) signal_pane_stacon_g1

0x6d0e,	// (0x000385d4) signal_pane_stacon_g2_ParamLimits

0x6d0e,	// (0x000385d4) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00040f56) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00040f56) signal_pane_stacon_g

0x6d43,	// (0x00038609) title_pane_stacon_t1_ParamLimits

0x6d43,	// (0x00038609) title_pane_stacon_t1

0x2663,	// (0x00033f29) uni_indicator_pane_stacon_g1

0x266d,	// (0x00033f33) uni_indicator_pane_stacon_g2

0x264f,	// (0x00033f15) uni_indicator_pane_stacon_g3

0x2659,	// (0x00033f1f) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00040f62) uni_indicator_pane_stacon_g

0x6d68,	// (0x0003862e) control_top_pane_stacon_g1

0x6d70,	// (0x00038636) control_top_pane_stacon_t1_ParamLimits

0x6d70,	// (0x00038636) control_top_pane_stacon_t1

0x6da7,	// (0x0003866d) aid_levels_battery_lsc_ParamLimits

0x6da7,	// (0x0003866d) aid_levels_battery_lsc

0x6dbe,	// (0x00038684) battery_pane_stacon_g1_ParamLimits

0x6dbe,	// (0x00038684) battery_pane_stacon_g1

0x6dd1,	// (0x00038697) battery_pane_stacon_g2_ParamLimits

0x6dd1,	// (0x00038697) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00040f6b) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00040f6b) battery_pane_stacon_g

0x6e0f,	// (0x000386d5) navi_icon_pane_stacon

0x6e23,	// (0x000386e9) navi_navi_pane_stacon

0x6e0f,	// (0x000386d5) navi_text_pane_stacon

0x6d68,	// (0x0003862e) control_bottom_pane_stacon_g1

0x6e37,	// (0x000386fd) control_bottom_pane_stacon_t1_ParamLimits

0x6e37,	// (0x000386fd) control_bottom_pane_stacon_t1

0x6e6e,	// (0x00038734) grid_app_pane_ParamLimits

0x6e6e,	// (0x00038734) grid_app_pane

0x6e90,	// (0x00038756) scroll_pane_cp15_ParamLimits

0x6e90,	// (0x00038756) scroll_pane_cp15

0x6ea3,	// (0x00038769) cell_app_pane_ParamLimits

0x6ea3,	// (0x00038769) cell_app_pane

0x6ecb,	// (0x00038791) cell_app_pane_g1_ParamLimits

0x6ecb,	// (0x00038791) cell_app_pane_g1

0x2691,	// (0x00033f57) cell_app_pane_g2_ParamLimits

0x2691,	// (0x00033f57) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00040f70) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00040f70) cell_app_pane_g

0x6eef,	// (0x000387b5) cell_app_pane_t1_ParamLimits

0x6eef,	// (0x000387b5) cell_app_pane_t1

0x269d,	// (0x00033f63) grid_highlight_pane_ParamLimits

0x269d,	// (0x00033f63) grid_highlight_pane

0x2400,	// (0x00033cc6) cell_highlight_pane_g1

0x2408,	// (0x00033cce) cell_highlight_pane_g2

0x2410,	// (0x00033cd6) cell_highlight_pane_g3

0x2418,	// (0x00033cde) cell_highlight_pane_g4

0x2420,	// (0x00033ce6) cell_highlight_pane_g5

0x2428,	// (0x00033cee) cell_highlight_pane_g6

0x2430,	// (0x00033cf6) cell_highlight_pane_g7

0x2438,	// (0x00033cfe) cell_highlight_pane_g8

0x2440,	// (0x00033d06) cell_highlight_pane_g9

0x1f8c,	// (0x00033852) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00040f1e) cell_highlight_pane_g

0x26ae,	// (0x00033f74) bg_scroll_pane

0x6f19,	// (0x000387df) scroll_handle_pane

0x26f5,	// (0x00033fbb) scroll_bg_pane_g1

0x270a,	// (0x00033fd0) scroll_bg_pane_g2

0x2722,	// (0x00033fe8) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00040f75) scroll_bg_pane_g

0x6f42,	// (0x00038808) scroll_handle_focus_pane_ParamLimits

0x6f42,	// (0x00038808) scroll_handle_focus_pane

0x26f5,	// (0x00033fbb) scroll_handle_pane_g1

0x2737,	// (0x00033ffd) scroll_handle_pane_g2

0x2722,	// (0x00033fe8) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00040f7c) scroll_handle_pane_g

0x2485,	// (0x00033d4b) bg_popup_sub_pane_cp21_ParamLimits

0x2485,	// (0x00033d4b) bg_popup_sub_pane_cp21

0x6f4f,	// (0x00038815) popup_fep_japan_predictive_window_t1_ParamLimits

0x6f4f,	// (0x00038815) popup_fep_japan_predictive_window_t1

0x6f69,	// (0x0003882f) popup_fep_japan_predictive_window_t2_ParamLimits

0x6f69,	// (0x0003882f) popup_fep_japan_predictive_window_t2

0x6f9c,	// (0x00038862) popup_fep_japan_predictive_window_t3_ParamLimits

0x6f9c,	// (0x00038862) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00040f83) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00040f83) popup_fep_japan_predictive_window_t

0x1f96,	// (0x0003385c) bg_popup_sub_pane_cp23

0x33fa,	// (0x00034cc0) listscroll_japin_cand_pane

0x274b,	// (0x00034011) popup_fep_japan_candidate_window_t1

0x2759,	// (0x0003401f) candidate_pane_ParamLimits

0x2759,	// (0x0003401f) candidate_pane

0x6fd3,	// (0x00038899) scroll_pane_cp30

0x276b,	// (0x00034031) list_single_popup_jap_candidate_pane_ParamLimits

0x276b,	// (0x00034031) list_single_popup_jap_candidate_pane

0x1f96,	// (0x0003385c) list_highlight_pane_cp30

0x2780,	// (0x00034046) list_single_popup_jap_candidate_pane_t1

0x278f,	// (0x00034055) level_1_signal

0x279c,	// (0x00034062) level_2_signal

0x27a9,	// (0x0003406f) level_3_signal

0x27b6,	// (0x0003407c) level_4_signal

0x27c3,	// (0x00034089) level_5_signal

0x27d0,	// (0x00034096) level_6_signal

0x27dd,	// (0x000340a3) level_7_signal

0x278f,	// (0x00034055) level_1_battery

0x279c,	// (0x00034062) level_2_battery

0x27a9,	// (0x0003406f) level_3_battery

0x27b6,	// (0x0003407c) level_4_battery

0x27c3,	// (0x00034089) level_5_battery

0x27d0,	// (0x00034096) level_6_battery

0x27dd,	// (0x000340a3) level_7_battery

0x2802,	// (0x000340c8) list_menu_pane_ParamLimits

0x2802,	// (0x000340c8) list_menu_pane

0x2818,	// (0x000340de) scroll_pane_cp25_ParamLimits

0x2818,	// (0x000340de) scroll_pane_cp25

0x2831,	// (0x000340f7) list_double2_graphic_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double2_graphic_pane_cp2

0x2831,	// (0x000340f7) list_double2_large_graphic_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double2_large_graphic_pane_cp2

0x2831,	// (0x000340f7) list_double2_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double2_pane_cp2

0x2831,	// (0x000340f7) list_double_graphic_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double_graphic_pane_cp2

0x2831,	// (0x000340f7) list_double_large_graphic_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double_large_graphic_pane_cp2

0x2831,	// (0x000340f7) list_double_number_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double_number_pane_cp2

0x2831,	// (0x000340f7) list_double_pane_cp2_ParamLimits

0x2831,	// (0x000340f7) list_double_pane_cp2

0x700e,	// (0x000388d4) list_single_2graphic_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_2graphic_pane_cp2

0x700e,	// (0x000388d4) list_single_graphic_heading_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_graphic_heading_pane_cp2

0x700e,	// (0x000388d4) list_single_graphic_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_graphic_pane_cp2

0x700e,	// (0x000388d4) list_single_heading_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_heading_pane_cp2

0x2841,	// (0x00034107) list_single_large_graphic_pane_cp2_ParamLimits

0x2841,	// (0x00034107) list_single_large_graphic_pane_cp2

0x700e,	// (0x000388d4) list_single_number_heading_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_number_heading_pane_cp2

0x700e,	// (0x000388d4) list_single_number_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_number_pane_cp2

0x700e,	// (0x000388d4) list_single_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_pane_cp2

0x285b,	// (0x00034121) bg_popup_sub_pane_cp22

0x70e6,	// (0x000389ac) popup_side_volume_key_window_g1

0x710a,	// (0x000389d0) popup_side_volume_key_window_t1

0x7126,	// (0x000389ec) volume_small_pane_cp1

0x1fe4,	// (0x000338aa) bg_popup_sub_pane_cp24_ParamLimits

0x1fe4,	// (0x000338aa) bg_popup_sub_pane_cp24

0x2871,	// (0x00034137) fep_china_uni_candidate_pane_ParamLimits

0x2871,	// (0x00034137) fep_china_uni_candidate_pane

0x2885,	// (0x0003414b) fep_china_uni_entry_pane

0x2895,	// (0x0003415b) popup_fep_china_uni_window_g1

0x712e,	// (0x000389f4) fep_china_uni_entry_pane_g1

0x7136,	// (0x000389fc) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00040fb4) fep_china_uni_entry_pane_g

0x28b1,	// (0x00034177) fep_entry_item_pane

0x28bb,	// (0x00034181) fep_candidate_item_pane

0x713e,	// (0x00038a04) fep_china_uni_candidate_pane_g1

0x28c3,	// (0x00034189) fep_china_uni_candidate_pane_g2

0x28cb,	// (0x00034191) fep_china_uni_candidate_pane_g3

0x7146,	// (0x00038a0c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00040fb9) fep_china_uni_candidate_pane_g

0x1f8c,	// (0x00033852) fep_entry_item_pane_g1

0x28d3,	// (0x00034199) fep_entry_item_pane_t1_ParamLimits

0x28d3,	// (0x00034199) fep_entry_item_pane_t1

0x28e9,	// (0x000341af) fep_candidate_item_pane_t1_ParamLimits

0x28e9,	// (0x000341af) fep_candidate_item_pane_t1

0x28fe,	// (0x000341c4) fep_candidate_item_pane_t2_ParamLimits

0x28fe,	// (0x000341c4) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00040fc2) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00040fc2) fep_candidate_item_pane_t

0x1ff2,	// (0x000338b8) list_highlight_pane_cp31_ParamLimits

0x1ff2,	// (0x000338b8) list_highlight_pane_cp31

0x2910,	// (0x000341d6) level_1_signal_lsc

0x2919,	// (0x000341df) level_2_signal_lsc

0x2922,	// (0x000341e8) level_3_signal_lsc

0x292b,	// (0x000341f1) level_4_signal_lsc

0x2934,	// (0x000341fa) level_5_signal_lsc

0x293d,	// (0x00034203) level_6_signal_lsc

0x2946,	// (0x0003420c) level_7_signal_lsc

0x2946,	// (0x0003420c) level_1_battery_lsc

0x294f,	// (0x00034215) level_2_battery_lsc

0x2958,	// (0x0003421e) level_3_battery_lsc

0x2961,	// (0x00034227) level_4_battery_lsc

0x296a,	// (0x00034230) level_5_battery_lsc

0x2973,	// (0x00034239) level_6_battery_lsc

0x2910,	// (0x000341d6) level_7_battery_lsc

0x297c,	// (0x00034242) scroll_handle_focus_pane_g1

0x2985,	// (0x0003424b) scroll_handle_focus_pane_g2

0x298e,	// (0x00034254) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00040fc7) scroll_handle_focus_pane_g

0x714e,	// (0x00038a14) list_single_2graphic_pane_g1_ParamLimits

0x714e,	// (0x00038a14) list_single_2graphic_pane_g1

0x678a,	// (0x00038050) list_single_2graphic_pane_g2_ParamLimits

0x678a,	// (0x00038050) list_single_2graphic_pane_g2

0x45f6,	// (0x00035ebc) list_single_2graphic_pane_g3_ParamLimits

0x45f6,	// (0x00035ebc) list_single_2graphic_pane_g3

0x715a,	// (0x00038a20) list_single_2graphic_pane_g4_ParamLimits

0x715a,	// (0x00038a20) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00040fce) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00040fce) list_single_2graphic_pane_g

0x7166,	// (0x00038a2c) list_single_2graphic_pane_t1_ParamLimits

0x7166,	// (0x00038a2c) list_single_2graphic_pane_t1

0x7194,	// (0x00038a5a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7194,	// (0x00038a5a) list_double2_graphic_large_graphic_pane_g1

0x6817,	// (0x000380dd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6817,	// (0x000380dd) list_double2_graphic_large_graphic_pane_g2

0x4688,	// (0x00035f4e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4688,	// (0x00035f4e) list_double2_graphic_large_graphic_pane_g3

0x47c9,	// (0x0003608f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x47c9,	// (0x0003608f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00040fd7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00040fd7) list_double2_graphic_large_graphic_pane_g

0x47d5,	// (0x0003609b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x47d5,	// (0x0003609b) list_double2_graphic_large_graphic_pane_t1

0x47eb,	// (0x000360b1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x47eb,	// (0x000360b1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00040fe0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00040fe0) list_double2_graphic_large_graphic_pane_t

0x7376,	// (0x00038c3c) popup_fast_swap_window_ParamLimits

0x7376,	// (0x00038c3c) popup_fast_swap_window

0x7392,	// (0x00038c58) popup_side_volume_key_window

0x2a44,	// (0x0003430a) stacon_top_pane

0x2a4e,	// (0x00034314) status_pane_ParamLimits

0x2a4e,	// (0x00034314) status_pane

0x73ac,	// (0x00038c72) status_small_pane

0x1f96,	// (0x0003385c) control_pane

0x1f96,	// (0x0003385c) stacon_bottom_pane

0x238b,	// (0x00033c51) scroll_pane_cp121

0x2382,	// (0x00033c48) set_content_pane

0x71a4,	// (0x00038a6a) bg_active_tab_pane_g1_cp1

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp1

0x71b6,	// (0x00038a7c) bg_active_tab_pane_g3_cp1

0x71a4,	// (0x00038a6a) bg_passive_tab_pane_g1_cp1

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp1

0x71b6,	// (0x00038a7c) bg_passive_tab_pane_g3_cp1

0x71bf,	// (0x00038a85) bg_active_tab_pane_g1_cp2

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp2

0x71c8,	// (0x00038a8e) bg_active_tab_pane_g3_cp2

0x71bf,	// (0x00038a85) bg_passive_tab_pane_g1_cp2

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp2

0x71c8,	// (0x00038a8e) bg_passive_tab_pane_g3_cp2

0x71d1,	// (0x00038a97) bg_active_tab_pane_g1_cp3

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp3

0x71da,	// (0x00038aa0) bg_active_tab_pane_g3_cp3

0x71d1,	// (0x00038a97) bg_passive_tab_pane_g1_cp3

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp3

0x71da,	// (0x00038aa0) bg_passive_tab_pane_g3_cp3

0x71e3,	// (0x00038aa9) bg_active_tab_pane_g1_cp4

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp4

0x71ee,	// (0x00038ab4) bg_active_tab_pane_g3_cp4

0x71e3,	// (0x00038aa9) bg_passive_tab_pane_g1_cp4

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp4

0x71ee,	// (0x00038ab4) bg_passive_tab_pane_g3_cp4

0x733a,	// (0x00038c00) bg_active_tab_pane_g1_cp5

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp5

0x7343,	// (0x00038c09) bg_active_tab_pane_g3_cp5

0x733a,	// (0x00038c00) bg_passive_tab_pane_g1_cp5

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp5

0x7343,	// (0x00038c09) bg_passive_tab_pane_g3_cp5

0x734c,	// (0x00038c12) list_set_graphic_pane_ParamLimits

0x734c,	// (0x00038c12) list_set_graphic_pane

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp4

0x29d5,	// (0x0003429b) list_set_graphic_pane_g1_ParamLimits

0x29d5,	// (0x0003429b) list_set_graphic_pane_g1

0x29e1,	// (0x000342a7) list_set_graphic_pane_g2_ParamLimits

0x29e1,	// (0x000342a7) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00040fe5) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00040fe5) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0004137d) volume_small_pane_cp_g

0x736a,	// (0x00038c30) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x736a,	// (0x00038c30) list_double2_large_graphic_pane_g1_cp2

0x2a03,	// (0x000342c9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a03,	// (0x000342c9) list_double2_large_graphic_pane_g2_cp2

0x2a14,	// (0x000342da) list_double2_large_graphic_pane_g3_cp2

0x2a1c,	// (0x000342e2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2a1c,	// (0x000342e2) list_double2_large_graphic_pane_t1_cp2

0x2a32,	// (0x000342f8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2a32,	// (0x000342f8) list_double2_large_graphic_pane_t2_cp2

0xab07,	// (0x0003c3cd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab07,	// (0x0003c3cd) list_double_large_graphic_pane_g1_cp2

0xab18,	// (0x0003c3de) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab18,	// (0x0003c3de) list_double_large_graphic_pane_g2_cp2

0x2b6a,	// (0x00034430) list_double_large_graphic_pane_g3_cp2

0xab29,	// (0x0003c3ef) list_double_large_graphic_pane_g4_cp

0xab31,	// (0x0003c3f7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab31,	// (0x0003c3f7) list_double_large_graphic_pane_t1_cp2

0xab48,	// (0x0003c40e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab48,	// (0x0003c40e) list_double_large_graphic_pane_t2_cp2

0x2a5c,	// (0x00034322) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2a5c,	// (0x00034322) list_double2_graphic_pane_g1_cp2

0x2a6a,	// (0x00034330) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2a6a,	// (0x00034330) list_double2_graphic_pane_g2_cp2

0x2a7b,	// (0x00034341) list_double2_graphic_pane_g3_cp2

0x2a85,	// (0x0003434b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2a85,	// (0x0003434b) list_double2_graphic_pane_t1_cp2

0x2a9b,	// (0x00034361) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2a9b,	// (0x00034361) list_double2_graphic_pane_t2_cp2

0x2aad,	// (0x00034373) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2aad,	// (0x00034373) list_single_number_heading_pane_g1_cp2

0x2ab9,	// (0x0003437f) list_single_number_heading_pane_g2_cp2

0x2ac1,	// (0x00034387) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2ac1,	// (0x00034387) list_single_number_heading_pane_t1_cp2

0x2ad7,	// (0x0003439d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2ad7,	// (0x0003439d) list_single_number_heading_pane_t2_cp2

0x2ae9,	// (0x000343af) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2ae9,	// (0x000343af) list_single_number_heading_pane_t3_cp2

0x2aad,	// (0x00034373) list_single_heading_pane_g1_cp2_ParamLimits

0x2aad,	// (0x00034373) list_single_heading_pane_g1_cp2

0x2ab9,	// (0x0003437f) list_single_heading_pane_g2_cp2

0x2ac1,	// (0x00034387) list_single_heading_pane_t1_cp2_ParamLimits

0x2ac1,	// (0x00034387) list_single_heading_pane_t1_cp2

0xa911,	// (0x0003c1d7) list_single_heading_pane_t2_cp2_ParamLimits

0xa911,	// (0x0003c1d7) list_single_heading_pane_t2_cp2

0xa859,	// (0x0003c11f) list_double_graphic_pane_g1_cp2_ParamLimits

0xa859,	// (0x0003c11f) list_double_graphic_pane_g1_cp2

0xa865,	// (0x0003c12b) list_double_graphic_pane_g2_cp2_ParamLimits

0xa865,	// (0x0003c12b) list_double_graphic_pane_g2_cp2

0xa874,	// (0x0003c13a) list_double_graphic_pane_g3_cp2

0xa87c,	// (0x0003c142) list_double_graphic_pane_t1_cp2_ParamLimits

0xa87c,	// (0x0003c142) list_double_graphic_pane_t1_cp2

0xa892,	// (0x0003c158) list_double_graphic_pane_t2_cp2_ParamLimits

0xa892,	// (0x0003c158) list_double_graphic_pane_t2_cp2

0x2b5e,	// (0x00034424) list_double_number_pane_g1_cp2_ParamLimits

0x2b5e,	// (0x00034424) list_double_number_pane_g1_cp2

0x2b6a,	// (0x00034430) list_double_number_pane_g2_cp2

0xa81d,	// (0x0003c0e3) list_double_number_pane_t1_cp2_ParamLimits

0xa81d,	// (0x0003c0e3) list_double_number_pane_t1_cp2

0xa831,	// (0x0003c0f7) list_double_number_pane_t2_cp2_ParamLimits

0xa831,	// (0x0003c0f7) list_double_number_pane_t2_cp2

0xa847,	// (0x0003c10d) list_double_number_pane_t3_cp2_ParamLimits

0xa847,	// (0x0003c10d) list_double_number_pane_t3_cp2

0xa706,	// (0x0003bfcc) list_single_graphic_pane_g1_cp2_ParamLimits

0xa706,	// (0x0003bfcc) list_single_graphic_pane_g1_cp2

0x2ba2,	// (0x00034468) list_single_graphic_pane_g2_cp2_ParamLimits

0x2ba2,	// (0x00034468) list_single_graphic_pane_g2_cp2

0x2bae,	// (0x00034474) list_single_graphic_pane_g3_cp2

0xa6dc,	// (0x0003bfa2) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6dc,	// (0x0003bfa2) list_single_graphic_pane_t1_cp2

0x2ba2,	// (0x00034468) list_single_number_pane_g1_cp2_ParamLimits

0x2ba2,	// (0x00034468) list_single_number_pane_g1_cp2

0x2bae,	// (0x00034474) list_single_number_pane_g2_cp2

0xa6dc,	// (0x0003bfa2) list_single_number_pane_t1_cp2_ParamLimits

0xa6dc,	// (0x0003bfa2) list_single_number_pane_t1_cp2

0xa6f2,	// (0x0003bfb8) list_single_number_pane_t2_cp2_ParamLimits

0xa6f2,	// (0x0003bfb8) list_single_number_pane_t2_cp2

0x2a03,	// (0x000342c9) list_double2_pane_g1_cp2_ParamLimits

0x2a03,	// (0x000342c9) list_double2_pane_g1_cp2

0x2a14,	// (0x000342da) list_double2_pane_g2_cp2

0x2b36,	// (0x000343fc) list_double2_pane_t1_cp2_ParamLimits

0x2b36,	// (0x000343fc) list_double2_pane_t1_cp2

0x2b4c,	// (0x00034412) list_double2_pane_t2_cp2_ParamLimits

0x2b4c,	// (0x00034412) list_double2_pane_t2_cp2

0x2b5e,	// (0x00034424) list_double_pane_g1_cp2_ParamLimits

0x2b5e,	// (0x00034424) list_double_pane_g1_cp2

0x2b6a,	// (0x00034430) list_double_pane_g2_cp2

0x2b72,	// (0x00034438) list_double_pane_t1_cp2_ParamLimits

0x2b72,	// (0x00034438) list_double_pane_t1_cp2

0x2b88,	// (0x0003444e) list_double_pane_t2_cp2_ParamLimits

0x2b88,	// (0x0003444e) list_double_pane_t2_cp2

0x73cf,	// (0x00038c95) list_single_pane_cp2_g3

0x2ba2,	// (0x00034468) list_single_pane_g1_cp2_ParamLimits

0x2ba2,	// (0x00034468) list_single_pane_g1_cp2

0x2bae,	// (0x00034474) list_single_pane_g2_cp2

0x2bb6,	// (0x0003447c) list_single_pane_t1_cp2_ParamLimits

0x2bb6,	// (0x0003447c) list_single_pane_t1_cp2

0x73d7,	// (0x00038c9d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x73d7,	// (0x00038c9d) list_single_large_graphic_pane_g1_cp2

0x2bce,	// (0x00034494) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2bce,	// (0x00034494) list_single_large_graphic_pane_g2_cp2

0x2bda,	// (0x000344a0) list_single_large_graphic_pane_g3_cp2

0x73e3,	// (0x00038ca9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x73e3,	// (0x00038ca9) list_single_large_graphic_pane_g4_cp1

0x2be2,	// (0x000344a8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2be2,	// (0x000344a8) list_single_large_graphic_pane_t1_cp2

0xa6a8,	// (0x0003bf6e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6a8,	// (0x0003bf6e) list_single_graphic_heading_pane_g1_cp2

0xa675,	// (0x0003bf3b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa675,	// (0x0003bf3b) list_single_graphic_heading_pane_g4_cp2

0x2bae,	// (0x00034474) list_single_graphic_heading_pane_g5_cp2

0xa6b4,	// (0x0003bf7a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b4,	// (0x0003bf7a) list_single_graphic_heading_pane_t1_cp2

0xa6ca,	// (0x0003bf90) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ca,	// (0x0003bf90) list_single_graphic_heading_pane_t2_cp2

0xa669,	// (0x0003bf2f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa669,	// (0x0003bf2f) list_single_2graphic_pane_g1_cp2

0xa675,	// (0x0003bf3b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa675,	// (0x0003bf3b) list_single_2graphic_pane_g2_cp2

0x2bae,	// (0x00034474) list_single_2graphic_pane_g3_cp2

0xa686,	// (0x0003bf4c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa686,	// (0x0003bf4c) list_single_2graphic_pane_g4_cp2

0xa692,	// (0x0003bf58) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa692,	// (0x0003bf58) list_single_2graphic_pane_t1_cp2

0x1f8c,	// (0x00033852) list_highlight_pane_g10_cp1

0xa251,	// (0x0003bb17) list_highlight_pane_g1_cp1

0xa259,	// (0x0003bb1f) list_highlight_pane_g2_cp1

0xa261,	// (0x0003bb27) list_highlight_pane_g3_cp1

0xa269,	// (0x0003bb2f) list_highlight_pane_g4_cp1

0xa271,	// (0x0003bb37) list_highlight_pane_g5_cp1

0xa279,	// (0x0003bb3f) list_highlight_pane_g6_cp1

0xa281,	// (0x0003bb47) list_highlight_pane_g7_cp1

0xa289,	// (0x0003bb4f) list_highlight_pane_g8_cp1

0xa291,	// (0x0003bb57) list_highlight_pane_g9_cp1

0xa179,	// (0x0003ba3f) form_field_slider_pane_t3

0xa187,	// (0x0003ba4d) form_field_slider_pane_t4

0xa195,	// (0x0003ba5b) slider_form_pane_ParamLimits

0xa195,	// (0x0003ba5b) slider_form_pane

0x1f96,	// (0x0003385c) control_abbreviations

0x1f96,	// (0x0003385c) control_conventions

0x1f96,	// (0x0003385c) control_definitions

0x1f96,	// (0x0003385c) format_table_attribute

0xa95b,	// (0x0003c221) bg_popup_preview_window_pane_g9

0x1f96,	// (0x0003385c) format_table_data2

0x1f96,	// (0x0003385c) format_table_data3

0x1f96,	// (0x0003385c) format_table_data_example

0x0008,

0x1f96,	// (0x0003385c) intro_purpose

0xf8b6,	// (0x0004117c) bg_popup_preview_window_pane_g

0x1f96,	// (0x0003385c) texts_category

0x1f96,	// (0x0003385c) texts_graphics

0x2bf8,	// (0x000344be) text_digital

0x2c07,	// (0x000344cd) text_primary

0x2c16,	// (0x000344dc) text_primary_small

0x2c25,	// (0x000344eb) text_secondary

0x2c34,	// (0x000344fa) text_title

0xb08e,	// (0x0003c954) bg_passive_tab_pane_g1_cp3_srt

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp3_srt

0xb097,	// (0x0003c95d) bg_passive_tab_pane_g3_cp3_srt

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp3_srt_ParamLimits

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp3_srt

0xb0a0,	// (0x0003c966) tabs_4_active_pane_srt_g1

0xb0a8,	// (0x0003c96e) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a8,	// (0x0003c96e) tabs_4_active_pane_srt_t1

0xb08e,	// (0x0003c954) bg_active_tab_pane_g1_cp3_copy1

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp3_copy1

0xb097,	// (0x0003c95d) bg_active_tab_pane_g3_cp3_copy1

0x1ff2,	// (0x000338b8) tabs_2_long_active_pane_srt_ParamLimits

0x1ff2,	// (0x000338b8) tabs_2_long_active_pane_srt

0x1ff2,	// (0x000338b8) tabs_2_long_passive_pane_srt_ParamLimits

0x1ff2,	// (0x000338b8) tabs_2_long_passive_pane_srt

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp4_srt

0xad7c,	// (0x0003c642) bg_passive_tab_pane_g1_cp4_srt

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp4_srt

0xad85,	// (0x0003c64b) bg_passive_tab_pane_g3_cp4_srt

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp4_srt_ParamLimits

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp4_srt

0xad8e,	// (0x0003c654) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad8e,	// (0x0003c654) tabs_2_long_active_pane_srt_t1

0xad7c,	// (0x0003c642) bg_active_tab_pane_g1_cp4_srt

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp4_srt

0xad85,	// (0x0003c64b) bg_active_tab_pane_g3_cp4_srt

0x1fe4,	// (0x000338aa) tabs_3_long_active_pane_srt_ParamLimits

0x1fe4,	// (0x000338aa) tabs_3_long_active_pane_srt

0x1fe4,	// (0x000338aa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1fe4,	// (0x000338aa) tabs_3_long_passive_pane_cp_srt

0x1fe4,	// (0x000338aa) tabs_3_long_passive_pane_srt_ParamLimits

0x1fe4,	// (0x000338aa) tabs_3_long_passive_pane_srt

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp5_srt

0x733a,	// (0x00038c00) bg_passive_tab_pane_g1_cp5_srt

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp5_srt

0x7343,	// (0x00038c09) bg_passive_tab_pane_g3_cp5_srt

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp5_srt_ParamLimits

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp5_srt

0xad6a,	// (0x0003c630) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad6a,	// (0x0003c630) tabs_3_long_active_pane_srt_t1

0x733a,	// (0x00038c00) bg_active_tab_pane_g1_cp5_srt

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp5_srt

0x7343,	// (0x00038c09) bg_active_tab_pane_g3_cp5_srt

0xad5c,	// (0x0003c622) navi_text_pane_srt_t1

0xad54,	// (0x0003c61a) navi_icon_pane_srt_g1

0x2d1f,	// (0x000345e5) midp_editing_number_pane_srt

0x2c43,	// (0x00034509) midp_ticker_pane_srt

0x2d27,	// (0x000345ed) midp_ticker_pane_srt_g1

0x2d2f,	// (0x000345f5) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00041004) midp_ticker_pane_srt_g

0x2d37,	// (0x000345fd) midp_ticker_pane_srt_t1

0xad45,	// (0x0003c60b) midp_editing_number_pane_t1_copy1

0x73fd,	// (0x00038cc3) listscroll_midp_pane

0x73fd,	// (0x00038cc3) midp_form_pane

0x746f,	// (0x00038d35) midp_info_popup_window_ParamLimits

0x746f,	// (0x00038d35) midp_info_popup_window

0x2485,	// (0x00033d4b) bg_popup_sub_pane_cp50_ParamLimits

0x2485,	// (0x00033d4b) bg_popup_sub_pane_cp50

0x9e85,	// (0x0003b74b) listscroll_midp_info_pane_ParamLimits

0x9e85,	// (0x0003b74b) listscroll_midp_info_pane

0x9e65,	// (0x0003b72b) listscroll_form_midp_pane_ParamLimits

0x9e65,	// (0x0003b72b) listscroll_form_midp_pane

0x9e71,	// (0x0003b737) scroll_bar_cp050

0x9e45,	// (0x0003b70b) list_midp_pane

0xbaf9,	// (0x0003d3bf) signal_pane_g2_cp

0x9d7f,	// (0x0003b645) listscroll_midp_info_pane_t1_ParamLimits

0x9d7f,	// (0x0003b645) listscroll_midp_info_pane_t1

0x9d97,	// (0x0003b65d) listscroll_midp_info_pane_t2_ParamLimits

0x9d97,	// (0x0003b65d) listscroll_midp_info_pane_t2

0x9dd5,	// (0x0003b69b) listscroll_midp_info_pane_t3_ParamLimits

0x9dd5,	// (0x0003b69b) listscroll_midp_info_pane_t3

0x9e0f,	// (0x0003b6d5) listscroll_midp_info_pane_t4_ParamLimits

0x9e0f,	// (0x0003b6d5) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x000410b7) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x000410b7) listscroll_midp_info_pane_t

0x24da,	// (0x00033da0) scroll_pane_cp21

0x9d1f,	// (0x0003b5e5) form_midp_field_choice_group_pane

0x9d28,	// (0x0003b5ee) form_midp_field_text_pane

0x9d65,	// (0x0003b62b) form_midp_field_time_pane

0x9d6d,	// (0x0003b633) form_midp_gauge_slider_pane

0x9d76,	// (0x0003b63c) form_midp_gauge_wait_pane

0x1f96,	// (0x0003385c) form_midp_image_pane

0x8176,	// (0x00039a3c) list_single_midp_pane_ParamLimits

0x8176,	// (0x00039a3c) list_single_midp_pane

0x9cd4,	// (0x0003b59a) form_midp_field_text_pane_t1

0x9a9e,	// (0x0003b364) input_focus_pane_cp050

0x9d0e,	// (0x0003b5d4) list_midp_form_text_pane

0x9ca3,	// (0x0003b569) form_midp_field_choice_group_pane_t1

0x9cb1,	// (0x0003b577) input_focus_pane_cp051

0x9cc5,	// (0x0003b58b) list_midp_choice_pane

0x1f96,	// (0x0003385c) status_idle_pane

0x9c87,	// (0x0003b54d) form_midp_field_time_pane_t1

0x1f8c,	// (0x00033852) wait_anim_pane_g2_copy1

0x9c95,	// (0x0003b55b) form_midp_field_time_pane_t2

0x0001,

0x2ca3,	// (0x00034569) aid_navinavi_width_2_pane

0xf7ec,	// (0x000410b2) form_midp_field_time_pane_t

0x1f96,	// (0x0003385c) input_focus_pane_cp052

0x1f96,	// (0x0003385c) bg_input_focus_pane_cp040

0x9c47,	// (0x0003b50d) form_midp_gauge_slider_pane_t1

0x9c55,	// (0x0003b51b) form_midp_gauge_slider_pane_t2

0x9c63,	// (0x0003b529) form_midp_gauge_slider_pane_t3

0x9c71,	// (0x0003b537) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x000410a9) form_midp_gauge_slider_pane_t

0x9c7f,	// (0x0003b545) form_midp_slider_pane

0x1ff2,	// (0x000338b8) bg_input_focus_pane_cp041_ParamLimits

0x1ff2,	// (0x000338b8) bg_input_focus_pane_cp041

0x9c14,	// (0x0003b4da) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c14,	// (0x0003b4da) form_midp_gauge_wait_pane_t1

0x9c26,	// (0x0003b4ec) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c26,	// (0x0003b4ec) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x000410a4) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x000410a4) form_midp_gauge_wait_pane_t

0x9c38,	// (0x0003b4fe) form_midp_wait_pane_ParamLimits

0x9c38,	// (0x0003b4fe) form_midp_wait_pane

0x9bde,	// (0x0003b4a4) form_midp_image_pane_g1

0x9be7,	// (0x0003b4ad) form_midp_image_pane_t1

0x9bf6,	// (0x0003b4bc) form_midp_image_pane_t2

0x9c05,	// (0x0003b4cb) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0004109d) form_midp_image_pane_t

0x9bd5,	// (0x0003b49b) list_single_midp_pane_g1

0x4909,	// (0x000361cf) list_single_midp_pane_t1

0x9bac,	// (0x0003b472) list_midp_form_item_pane_ParamLimits

0x9bac,	// (0x0003b472) list_midp_form_item_pane

0x2c4b,	// (0x00034511) list_midp_form_item_pane_t1

0x2c5a,	// (0x00034520) midp_ticker_pane_g1

0x2c66,	// (0x0003452c) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00040fea) midp_ticker_pane_g

0x2c72,	// (0x00034538) midp_ticker_pane_t1

0xaf92,	// (0x0003c858) midp_editing_number_pane_t1

0xaf70,	// (0x0003c836) midp_editing_number_pane

0xaf7f,	// (0x0003c845) midp_ticker_pane

0xad35,	// (0x0003c5fb) ai_message_heading_pane

0x1f96,	// (0x0003385c) bg_popup_window_pane_cp14

0xad3d,	// (0x0003c603) listscroll_ai_message_pane

0xacbf,	// (0x0003c585) ai_message_heading_pane_g1_ParamLimits

0xacbf,	// (0x0003c585) ai_message_heading_pane_g1

0xaccb,	// (0x0003c591) ai_message_heading_pane_g2_ParamLimits

0xaccb,	// (0x0003c591) ai_message_heading_pane_g2

0xacd7,	// (0x0003c59d) ai_message_heading_pane_g3_ParamLimits

0xacd7,	// (0x0003c59d) ai_message_heading_pane_g3

0xace3,	// (0x0003c5a9) ai_message_heading_pane_g4_ParamLimits

0xace3,	// (0x0003c5a9) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x000411de) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x000411de) ai_message_heading_pane_g

0xacef,	// (0x0003c5b5) ai_message_heading_pane_t1_ParamLimits

0xacef,	// (0x0003c5b5) ai_message_heading_pane_t1

0xad09,	// (0x0003c5cf) ai_message_heading_pane_t2_ParamLimits

0xad09,	// (0x0003c5cf) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x000411e7) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x000411e7) ai_message_heading_pane_t

0xad1b,	// (0x0003c5e1) bg_popup_heading_pane_cp1_ParamLimits

0xad1b,	// (0x0003c5e1) bg_popup_heading_pane_cp1

0xacad,	// (0x0003c573) list_ai_message_pane_ParamLimits

0xacad,	// (0x0003c573) list_ai_message_pane

0x24da,	// (0x00033da0) scroll_pane_cp10

0xac49,	// (0x0003c50f) list_ai_message_pane_g1

0xac51,	// (0x0003c517) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x000411bb) list_ai_message_pane_g

0xac59,	// (0x0003c51f) list_ai_message_pane_t1_ParamLimits

0xac59,	// (0x0003c51f) list_ai_message_pane_t1

0xac6e,	// (0x0003c534) list_ai_message_pane_t2_ParamLimits

0xac6e,	// (0x0003c534) list_ai_message_pane_t2

0xac83,	// (0x0003c549) list_ai_message_pane_t3_ParamLimits

0xac83,	// (0x0003c549) list_ai_message_pane_t3

0xac98,	// (0x0003c55e) list_ai_message_pane_t4_ParamLimits

0xac98,	// (0x0003c55e) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x000411c0) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x000411c0) list_ai_message_pane_t

0xac34,	// (0x0003c4fa) cell_ai_soft_ind_pane_ParamLimits

0xac34,	// (0x0003c4fa) cell_ai_soft_ind_pane

0x2c84,	// (0x0003454a) cell_ai_soft_ind_pane_g1_ParamLimits

0x2c84,	// (0x0003454a) cell_ai_soft_ind_pane_g1

0x1f96,	// (0x0003385c) grid_highlight_cp1

0x2c91,	// (0x00034557) text_secondary_cp56_ParamLimits

0x2c91,	// (0x00034557) text_secondary_cp56

0xac09,	// (0x0003c4cf) example_general_pane_ParamLimits

0xac09,	// (0x0003c4cf) example_general_pane

0xac15,	// (0x0003c4db) example_parent_pane_g1_ParamLimits

0xac15,	// (0x0003c4db) example_parent_pane_g1

0xac21,	// (0x0003c4e7) example_parent_pane_t1_ParamLimits

0xac21,	// (0x0003c4e7) example_parent_pane_t1

0x7b59,	// (0x0003941f) popup_preview_text_window_ParamLimits

0x7b59,	// (0x0003941f) popup_preview_text_window

0x2b9a,	// (0x00034460) list_single_pane_cp2_g4

0x21c4,	// (0x00033a8a) bg_popup_preview_window_pane_ParamLimits

0x21c4,	// (0x00033a8a) bg_popup_preview_window_pane

0xa963,	// (0x0003c229) popup_preview_text_window_t1_ParamLimits

0xa963,	// (0x0003c229) popup_preview_text_window_t1

0xa981,	// (0x0003c247) popup_preview_text_window_t2_ParamLimits

0xa981,	// (0x0003c247) popup_preview_text_window_t2

0xa9ca,	// (0x0003c290) popup_preview_text_window_t3_ParamLimits

0xa9ca,	// (0x0003c290) popup_preview_text_window_t3

0xaa0f,	// (0x0003c2d5) popup_preview_text_window_t4_ParamLimits

0xaa0f,	// (0x0003c2d5) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x0004118f) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x0004118f) popup_preview_text_window_t

0xaa8d,	// (0x0003c353) scroll_pane_cp11

0x9a12,	// (0x0003b2d8) bg_popup_preview_window_pane_g1

0xa923,	// (0x0003c1e9) bg_popup_preview_window_pane_g2

0xa92b,	// (0x0003c1f1) bg_popup_preview_window_pane_g3

0xa933,	// (0x0003c1f9) bg_popup_preview_window_pane_g4

0xa93b,	// (0x0003c201) bg_popup_preview_window_pane_g5

0xa943,	// (0x0003c209) bg_popup_preview_window_pane_g6

0xa94b,	// (0x0003c211) bg_popup_preview_window_pane_g7

0xa953,	// (0x0003c219) bg_popup_preview_window_pane_g8

0x5d9a,	// (0x00037660) aid_popup_width_pane

0x7b37,	// (0x000393fd) popup_midp_note_alarm_window_ParamLimits

0x7b37,	// (0x000393fd) popup_midp_note_alarm_window

0x239c,	// (0x00033c62) data_form_pane_ParamLimits

0x6a57,	// (0x0003831d) form_field_data_pane_g1

0x6a61,	// (0x00038327) form_field_data_pane_t1_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_ParamLimits

0x6a79,	// (0x0003833f) data_form_wide_pane_ParamLimits

0x6a8a,	// (0x00038350) form_field_data_wide_pane_g1

0x6a96,	// (0x0003835c) form_field_data_wide_pane_t1_ParamLimits

0x229c,	// (0x00033b62) input_focus_pane_cp6_ParamLimits

0x6c42,	// (0x00038508) input_popup_find_pane_g1_ParamLimits

0x6c42,	// (0x00038508) input_popup_find_pane_g1

0x6de2,	// (0x000386a8) aid_navi_side_left_pane

0x6df7,	// (0x000386bd) aid_navi_side_right_pane

0xa34c,	// (0x0003bc12) bg_popup_window_pane_cp30_ParamLimits

0xa34c,	// (0x0003bc12) bg_popup_window_pane_cp30

0xa3c6,	// (0x0003bc8c) popup_midp_note_alarm_window_g1_ParamLimits

0xa3c6,	// (0x0003bc8c) popup_midp_note_alarm_window_g1

0xa3f6,	// (0x0003bcbc) popup_midp_note_alarm_window_t1_ParamLimits

0xa3f6,	// (0x0003bcbc) popup_midp_note_alarm_window_t1

0xa497,	// (0x0003bd5d) popup_midp_note_alarm_window_t2_ParamLimits

0xa497,	// (0x0003bd5d) popup_midp_note_alarm_window_t2

0xa545,	// (0x0003be0b) popup_midp_note_alarm_window_t3_ParamLimits

0xa545,	// (0x0003be0b) popup_midp_note_alarm_window_t3

0xa56d,	// (0x0003be33) popup_midp_note_alarm_window_t4_ParamLimits

0xa56d,	// (0x0003be33) popup_midp_note_alarm_window_t4

0xa58d,	// (0x0003be53) popup_midp_note_alarm_window_t5_ParamLimits

0xa58d,	// (0x0003be53) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0004112c) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0004112c) popup_midp_note_alarm_window_t

0xa639,	// (0x0003beff) wait_bar_pane_cp1_ParamLimits

0xa639,	// (0x0003beff) wait_bar_pane_cp1

0x1f96,	// (0x0003385c) wait_anim_pane_copy1

0x1f96,	// (0x0003385c) wait_border_pane_copy1

0xa042,	// (0x0003b908) wait_border_pane_g1_copy1

0x6ab0,	// (0x00038376) form_field_popup_pane_g1

0x6ab8,	// (0x0003837e) form_field_popup_pane_t1_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_cp7_ParamLimits

0x23d6,	// (0x00033c9c) list_form_pane_ParamLimits

0x6ad0,	// (0x00038396) form_field_popup_wide_pane_g1

0x6ad8,	// (0x0003839e) form_field_popup_wide_pane_t1_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_cp8_ParamLimits

0x23e2,	// (0x00033ca8) list_form_wide_pane_ParamLimits

0xb12b,	// (0x0003c9f1) aid_size_cell_graphic_pane

0x6b62,	// (0x00038428) data_form_pane_t1_ParamLimits

0x83ed,	// (0x00039cb3) data_form_wide_pane_t1_ParamLimits

0x7e3e,	// (0x00039704) bg_status_flat_pane

0x61a3,	// (0x00037a69) title_pane_t1_ParamLimits

0x1fac,	// (0x00033872) title_pane_t2_ParamLimits

0x1fd2,	// (0x00033898) title_pane_t3_ParamLimits

0xf532,	// (0x00040df8) title_pane_t_ParamLimits

0x278f,	// (0x00034055) level_1_signal_ParamLimits

0x279c,	// (0x00034062) level_2_signal_ParamLimits

0x27a9,	// (0x0003406f) level_3_signal_ParamLimits

0x27b6,	// (0x0003407c) level_4_signal_ParamLimits

0x27c3,	// (0x00034089) level_5_signal_ParamLimits

0x27d0,	// (0x00034096) level_6_signal_ParamLimits

0x27dd,	// (0x000340a3) level_7_signal_ParamLimits

0x278f,	// (0x00034055) level_1_battery_ParamLimits

0x279c,	// (0x00034062) level_2_battery_ParamLimits

0x27a9,	// (0x0003406f) level_3_battery_ParamLimits

0x27b6,	// (0x0003407c) level_4_battery_ParamLimits

0x27c3,	// (0x00034089) level_5_battery_ParamLimits

0x27d0,	// (0x00034096) level_6_battery_ParamLimits

0x27dd,	// (0x000340a3) level_7_battery_ParamLimits

0xa251,	// (0x0003bb17) bg_status_flat_pane_g1

0xa259,	// (0x0003bb1f) bg_status_flat_pane_g2

0xa261,	// (0x0003bb27) bg_status_flat_pane_g3

0xa269,	// (0x0003bb2f) bg_status_flat_pane_g4

0xa271,	// (0x0003bb37) bg_status_flat_pane_g5

0xa279,	// (0x0003bb3f) bg_status_flat_pane_g6

0xa281,	// (0x0003bb47) bg_status_flat_pane_g7

0x6213,	// (0x00037ad9) tabs_3_active_pane_t1_ParamLimits

0x6213,	// (0x00037ad9) tabs_3_passive_pane_t1_ParamLimits

0x622d,	// (0x00037af3) tabs_4_active_pane_t1_ParamLimits

0x622d,	// (0x00037af3) tabs_4_1_passive_pane_t1_ParamLimits

0x6c79,	// (0x0003853f) tabs_2_active_pane_t1_ParamLimits

0x6c79,	// (0x0003853f) tabs_2_passive_pane_t1_ParamLimits

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp4_ParamLimits

0x6c99,	// (0x0003855f) tabs_2_long_active_pane_t1_ParamLimits

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp4_ParamLimits

0x80c3,	// (0x00039989) list_single_midp_graphic_pane_t1_ParamLimits

0x6c8b,	// (0x00038551) bg_active_tab_pane_cp5_ParamLimits

0x6cb8,	// (0x0003857e) tabs_3_long_active_pane_t1_ParamLimits

0x6cac,	// (0x00038572) bg_passive_tab_pane_cp5_ParamLimits

0x80c3,	// (0x00039989) list_single_midp_graphic_pane_t1

0x7e3e,	// (0x00039704) bg_status_flat_pane_ParamLimits

0x7f07,	// (0x000397cd) indicator_pane_cp2_ParamLimits

0x7f07,	// (0x000397cd) indicator_pane_cp2

0x97d0,	// (0x0003b096) navi_pane_srt_ParamLimits

0x97d0,	// (0x0003b096) navi_pane_srt

0x97f4,	// (0x0003b0ba) popup_clock_digital_analogue_window_cp1

0x2036,	// (0x000338fc) indicator_pane_t1

0x2c43,	// (0x00034509) copy_highlight_pane

0x2c43,	// (0x00034509) cursor_graphics_pane

0x2c43,	// (0x00034509) graphic_within_text_pane

0x2c43,	// (0x00034509) link_highlight_pane

0xaa50,	// (0x0003c316) popup_preview_text_window_t5_ParamLimits

0xaa50,	// (0x0003c316) popup_preview_text_window_t5

0x2cab,	// (0x00034571) cursor_digital_pane

0x2cab,	// (0x00034571) cursor_primary_pane

0x2cbc,	// (0x00034582) cursor_primary_small_pane

0x2cc4,	// (0x0003458a) cursor_secondary_pane

0x2ccc,	// (0x00034592) cursor_title_pane

0x2cab,	// (0x00034571) link_highlight_digital_pane

0x2cb3,	// (0x00034579) link_highlight_primary_pane

0x2cbc,	// (0x00034582) link_highlight_primary_small_pane

0x2cc4,	// (0x0003458a) link_highlight_secondary_pane

0x2ccc,	// (0x00034592) link_highlight_title_pane

0x2cab,	// (0x00034571) copy_highlight_digital_pane

0x2cab,	// (0x00034571) copy_highlight_primary_pane

0x2cbc,	// (0x00034582) copy_highlight_primary_small_pane

0x2cc4,	// (0x0003458a) copy_highlight_secondary_pane

0x2ccc,	// (0x00034592) copy_highlight_title_pane

0x2cc4,	// (0x0003458a) graphic_text_digital_pane

0xa2ef,	// (0x0003bbb5) graphic_text_primary_pane

0xa2f8,	// (0x0003bbbe) graphic_text_primary_small_pane

0x2cbc,	// (0x00034582) graphic_text_secondary_pane

0x2cab,	// (0x00034571) graphic_text_title_pane

0x74c7,	// (0x00038d8d) cursor_primary_pane_g1

0xa2e1,	// (0x0003bba7) cursor_text_primary_t1

0xa2c9,	// (0x0003bb8f) cursor_primary_small_pane_g1

0xa2d3,	// (0x0003bb99) cursor_text_primary_small_t1

0xa2b1,	// (0x0003bb77) cursor_primary_small_pane_g1_copy1

0xa2bb,	// (0x0003bb81) cursor_text_primary_small_t1_copy1

0xa299,	// (0x0003bb5f) cursor_text_title_t1

0xa2a7,	// (0x0003bb6d) cursor_title_pane_g1

0x74c7,	// (0x00038d8d) cursor_digital_pane_g1

0x2cd4,	// (0x0003459a) cursor_text_digital_t1

0x2ce2,	// (0x000345a8) link_highlight_primary_pane_g1

0xa242,	// (0x0003bb08) link_highlight_primary_pane_t1

0x2ce2,	// (0x000345a8) link_highlight_primary_small_pane_g1

0x2cea,	// (0x000345b0) link_highlight_primary_small_pane_t1

0x2ce2,	// (0x000345a8) link_highlight_secondary_pane_g1

0x2cf9,	// (0x000345bf) link_highlight_secondary_pane_t1

0xa1a7,	// (0x0003ba6d) link_highlight_title_pane_g1

0xa1be,	// (0x0003ba84) link_highlight_title_pane_t1

0xa1a7,	// (0x0003ba6d) link_highlight_digital_pane_g1

0xa1af,	// (0x0003ba75) link_highlight_digital_pane_t1

0xa061,	// (0x0003b927) copy_highlight_primary_pane_g1

0xa087,	// (0x0003b94d) copy_highlight_primary_pane_t1

0xa061,	// (0x0003b927) copy_highlight_primary_small_pane_g1

0xa078,	// (0x0003b93e) copy_highlight_primary_small_pane_t1

0x2d08,	// (0x000345ce) copy_highlight_secondary_pane_g1

0x2d10,	// (0x000345d6) copy_highlight_secondary_pane_t1

0xa061,	// (0x0003b927) copy_highlight_title_pane_g1

0xa069,	// (0x0003b92f) copy_highlight_title_pane_t1

0xa061,	// (0x0003b927) copy_highlight_digital_pane_g1

0xb2f9,	// (0x0003cbbf) copy_highlight_digital_pane_t1

0xb24d,	// (0x0003cb13) graphic_text_primary_pane_g1

0xb2dd,	// (0x0003cba3) graphic_text_primary_pane_t1

0xb2eb,	// (0x0003cbb1) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0004125b) graphic_text_primary_pane_t

0xb2b9,	// (0x0003cb7f) graphic_text_primary_small_pane_g1

0xb2c1,	// (0x0003cb87) graphic_text_primary_small_pane_t1

0xb2cf,	// (0x0003cb95) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00041256) graphic_text_primary_small_pane_t

0xb295,	// (0x0003cb5b) graphic_text_secondary_pane_g1

0xb29d,	// (0x0003cb63) graphic_text_secondary_pane_t1

0xb2ab,	// (0x0003cb71) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00041251) graphic_text_secondary_pane_t

0xb271,	// (0x0003cb37) graphic_text_title_pane_g1

0xb279,	// (0x0003cb3f) graphic_text_title_pane_t1

0xb287,	// (0x0003cb4d) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0004124c) graphic_text_title_pane_t

0xb24d,	// (0x0003cb13) graphic_text_digital_pane_g1

0xb255,	// (0x0003cb1b) graphic_text_digital_pane_t1

0xb263,	// (0x0003cb29) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00041247) graphic_text_digital_pane_t

0x1ff2,	// (0x000338b8) navi_icon_pane_srt_ParamLimits

0x1ff2,	// (0x000338b8) navi_icon_pane_srt

0x1f96,	// (0x0003385c) navi_midp_pane_srt

0x1f96,	// (0x0003385c) navi_navi_pane_srt

0x1ff2,	// (0x000338b8) navi_text_pane_srt_ParamLimits

0x1ff2,	// (0x000338b8) navi_text_pane_srt

0xb218,	// (0x0003cade) navi_navi_icon_text_pane_srt

0xb220,	// (0x0003cae6) navi_navi_pane_srt_g1_ParamLimits

0xb220,	// (0x0003cae6) navi_navi_pane_srt_g1

0xb232,	// (0x0003caf8) navi_navi_pane_srt_g2_ParamLimits

0xb232,	// (0x0003caf8) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00041242) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00041242) navi_navi_pane_srt_g

0xb244,	// (0x0003cb0a) navi_navi_tabs_pane_srt

0xb218,	// (0x0003cade) navi_navi_text_pane_srt

0xb218,	// (0x0003cade) navi_navi_volume_pane_srt

0xb209,	// (0x0003cacf) navi_navi_text_pane_srt_t1

0x8551,	// (0x00039e17) navi_navi_volume_pane_srt_g1

0x8559,	// (0x00039e1f) volume_small_pane_srt_ParamLimits

0x8559,	// (0x00039e1f) volume_small_pane_srt

0x74d1,	// (0x00038d97) volume_small_pane_srt_g1_ParamLimits

0x74d1,	// (0x00038d97) volume_small_pane_srt_g1

0x74e1,	// (0x00038da7) volume_small_pane_srt_g2_ParamLimits

0x74e1,	// (0x00038da7) volume_small_pane_srt_g2

0x74f2,	// (0x00038db8) volume_small_pane_srt_g3_ParamLimits

0x74f2,	// (0x00038db8) volume_small_pane_srt_g3

0x7503,	// (0x00038dc9) volume_small_pane_srt_g4_ParamLimits

0x7503,	// (0x00038dc9) volume_small_pane_srt_g4

0x7514,	// (0x00038dda) volume_small_pane_srt_g5_ParamLimits

0x7514,	// (0x00038dda) volume_small_pane_srt_g5

0x7525,	// (0x00038deb) volume_small_pane_srt_g6_ParamLimits

0x7525,	// (0x00038deb) volume_small_pane_srt_g6

0x7536,	// (0x00038dfc) volume_small_pane_srt_g7_ParamLimits

0x7536,	// (0x00038dfc) volume_small_pane_srt_g7

0x7547,	// (0x00038e0d) volume_small_pane_srt_g8_ParamLimits

0x7547,	// (0x00038e0d) volume_small_pane_srt_g8

0x7558,	// (0x00038e1e) volume_small_pane_srt_g9_ParamLimits

0x7558,	// (0x00038e1e) volume_small_pane_srt_g9

0x7569,	// (0x00038e2f) volume_small_pane_srt_g10_ParamLimits

0x7569,	// (0x00038e2f) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00040fef) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00040fef) volume_small_pane_srt_g

0x647a,	// (0x00037d40) query_popup_data_pane_cp2

0xb1ef,	// (0x0003cab5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ef,	// (0x0003cab5) navi_navi_icon_text_pane_srt_t1

0xa2ef,	// (0x0003bbb5) navi_tabs_2_long_pane_srt

0xa2ef,	// (0x0003bbb5) navi_tabs_2_pane_srt

0xa2ef,	// (0x0003bbb5) navi_tabs_3_long_pane_srt

0xa2ef,	// (0x0003bbb5) navi_tabs_3_pane_srt

0xa2ef,	// (0x0003bbb5) navi_tabs_4_pane_srt

0x8531,	// (0x00039df7) tabs_2_active_pane_srt_ParamLimits

0x8531,	// (0x00039df7) tabs_2_active_pane_srt

0x8541,	// (0x00039e07) tabs_2_passive_pane_srt_ParamLimits

0x8541,	// (0x00039e07) tabs_2_passive_pane_srt

0x24ea,	// (0x00033db0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x24ea,	// (0x00033db0) bg_passive_tab_pane_cp1_srt

0xb1bb,	// (0x0003ca81) bg_passive_tab_pane_g1_cp1_srt

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp1_srt

0xb1c4,	// (0x0003ca8a) bg_passive_tab_pane_g3_cp1_srt

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp1_srt_ParamLimits

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp1_srt

0xb1cd,	// (0x0003ca93) tabs_2_active_pane_srt_g1

0xb1d5,	// (0x0003ca9b) tabs_2_active_pane_srt_t1_ParamLimits

0xb1d5,	// (0x0003ca9b) tabs_2_active_pane_srt_t1

0xb1bb,	// (0x0003ca81) bg_active_tab_pane_g1_cp1_srt

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp1_srt

0xb1c4,	// (0x0003ca8a) bg_active_tab_pane_g3_cp1_srt

0x84fe,	// (0x00039dc4) tabs_3_active_pane_srt_ParamLimits

0x84fe,	// (0x00039dc4) tabs_3_active_pane_srt

0x850f,	// (0x00039dd5) tabs_3_passive_pane_cp_srt_ParamLimits

0x850f,	// (0x00039dd5) tabs_3_passive_pane_cp_srt

0x8520,	// (0x00039de6) tabs_3_passive_pane_srt_ParamLimits

0x8520,	// (0x00039de6) tabs_3_passive_pane_srt

0x24ea,	// (0x00033db0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x24ea,	// (0x00033db0) bg_passive_tab_pane_cp2_srt

0x757a,	// (0x00038e40) bg_passive_tab_pane_g1_cp2_srt

0x71ad,	// (0x00038a73) bg_passive_tab_pane_g2_cp2_srt

0x7583,	// (0x00038e49) bg_passive_tab_pane_g3_cp2_srt

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp2_srt_ParamLimits

0x1ff2,	// (0x000338b8) bg_active_tab_pane_cp2_srt

0xb1a1,	// (0x0003ca67) tabs_3_active_pane_srt_g1

0xb1a9,	// (0x0003ca6f) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a9,	// (0x0003ca6f) tabs_3_active_pane_srt_t1

0x757a,	// (0x00038e40) bg_active_tab_pane_g1_cp2_srt

0x71ad,	// (0x00038a73) bg_active_tab_pane_g2_cp2_srt

0x7583,	// (0x00038e49) bg_active_tab_pane_g3_cp2_srt

0x84b6,	// (0x00039d7c) tabs_4_active_pane_srt_ParamLimits

0x84b6,	// (0x00039d7c) tabs_4_active_pane_srt

0x84c8,	// (0x00039d8e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x84c8,	// (0x00039d8e) tabs_4_passive_pane_cp2_srt

0x77b8,	// (0x0003907e) aid_size_cell_toolbar

0x6cac,	// (0x00038572) main_idle_act_pane_ParamLimits

0x7969,	// (0x0003922f) popup_large_graphic_colour_window_ParamLimits

0x7cd4,	// (0x0003959a) popup_toolbar_window_ParamLimits

0x7cd4,	// (0x0003959a) popup_toolbar_window

0xafa1,	// (0x0003c867) list_single_graphic_2heading_pane_ParamLimits

0xafa1,	// (0x0003c867) list_single_graphic_2heading_pane

0x2677,	// (0x00033f3d) aid_size_cell_apps_grid_lsc_pane

0x2689,	// (0x00033f4f) aid_size_cell_apps_grid_prt_pane

0x24ea,	// (0x00033db0) bg_wml_button_pane_cp1_ParamLimits

0x24ea,	// (0x00033db0) bg_wml_button_pane_cp1

0x9cd4,	// (0x0003b59a) form_midp_field_text_pane_t1_ParamLimits

0x9a9e,	// (0x0003b364) input_focus_pane_cp050_ParamLimits

0x9d0e,	// (0x0003b5d4) list_midp_form_text_pane_ParamLimits

0x9cb1,	// (0x0003b577) input_focus_pane_cp051_ParamLimits

0x9cc5,	// (0x0003b58b) list_midp_choice_pane_ParamLimits

0x9b54,	// (0x0003b41a) list_single_2graphic_pane_cp3_ParamLimits

0x9b54,	// (0x0003b41a) list_single_2graphic_pane_cp3

0x9b79,	// (0x0003b43f) list_single_midp_graphic_pane_ParamLimits

0x9b79,	// (0x0003b43f) list_single_midp_graphic_pane

0x5d08,	// (0x000375ce) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d08,	// (0x000375ce) list_single_graphic_2heading_pane_g1

0x5d14,	// (0x000375da) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d14,	// (0x000375da) list_single_graphic_2heading_pane_g4

0x5d20,	// (0x000375e6) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d20,	// (0x000375e6) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00041042) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00041042) list_single_graphic_2heading_pane_g

0x5d2c,	// (0x000375f2) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d2c,	// (0x000375f2) list_single_graphic_2heading_pane_t1

0x5d40,	// (0x00037606) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d40,	// (0x00037606) list_single_graphic_2heading_pane_t2

0x5d5a,	// (0x00037620) list_single_graphic_2heading_pane_t3_ParamLimits

0x5d5a,	// (0x00037620) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00041049) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00041049) list_single_graphic_2heading_pane_t

0x9950,	// (0x0003b216) bg_popup_sub_pane_cp2

0x997a,	// (0x0003b240) grid_toobar_pane

0x8032,	// (0x000398f8) cell_toolbar_pane_ParamLimits

0x8032,	// (0x000398f8) cell_toolbar_pane

0x99b6,	// (0x0003b27c) cell_toolbar_pane_g1_ParamLimits

0x99b6,	// (0x0003b27c) cell_toolbar_pane_g1

0x99ca,	// (0x0003b290) cell_toolbar_pane_g2_ParamLimits

0x99ca,	// (0x0003b290) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00041057) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00041057) cell_toolbar_pane_g

0x99ec,	// (0x0003b2b2) grid_highlight_pane_cp2_ParamLimits

0x99ec,	// (0x0003b2b2) grid_highlight_pane_cp2

0x9a06,	// (0x0003b2cc) toolbar_button_pane

0x9a12,	// (0x0003b2d8) toolbar_button_pane_g1

0x9a1a,	// (0x0003b2e0) toolbar_button_pane_g2

0x9a22,	// (0x0003b2e8) toolbar_button_pane_g3

0x9a2a,	// (0x0003b2f0) toolbar_button_pane_g4

0x9a32,	// (0x0003b2f8) toolbar_button_pane_g5

0x9a3a,	// (0x0003b300) toolbar_button_pane_g6

0x9a42,	// (0x0003b308) toolbar_button_pane_g7

0x9a4a,	// (0x0003b310) toolbar_button_pane_g8

0x9a52,	// (0x0003b318) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0004105c) toolbar_button_pane_g

0x806a,	// (0x00039930) list_single_2graphic_pane_g1_cp3_ParamLimits

0x806a,	// (0x00039930) list_single_2graphic_pane_g1_cp3

0x8076,	// (0x0003993c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8076,	// (0x0003993c) list_single_2graphic_pane_g2_cp3

0x8087,	// (0x0003994d) list_single_2graphic_pane_g3_cp3

0x808f,	// (0x00039955) list_single_2graphic_pane_g4_cp3_ParamLimits

0x808f,	// (0x00039955) list_single_2graphic_pane_g4_cp3

0x809b,	// (0x00039961) list_single_2graphic_pane_t1_cp3_ParamLimits

0x809b,	// (0x00039961) list_single_2graphic_pane_t1_cp3

0x80b7,	// (0x0003997d) list_single_midp_graphic_pane_g2_ParamLimits

0x80b7,	// (0x0003997d) list_single_midp_graphic_pane_g2

0x77c0,	// (0x00039086) aid_zoom_text_primary

0x5cec,	// (0x000375b2) aid_zoom_text_secondary

0x75da,	// (0x00038ea0) status_small_pane_g7_ParamLimits

0x75da,	// (0x00038ea0) status_small_pane_g7

0x75fd,	// (0x00038ec3) status_small_pane_t1_ParamLimits

0x6186,	// (0x00037a4c) title_pane_g2

0x0003,

0xf529,	// (0x00040def) title_pane_g

0x64d4,	// (0x00037d9a) aid_size_cell_colour_1_pane_ParamLimits

0x64d4,	// (0x00037d9a) aid_size_cell_colour_1_pane

0x64e8,	// (0x00037dae) aid_size_cell_colour_2_pane_ParamLimits

0x64e8,	// (0x00037dae) aid_size_cell_colour_2_pane

0x64fc,	// (0x00037dc2) aid_size_cell_colour_3_pane_ParamLimits

0x64fc,	// (0x00037dc2) aid_size_cell_colour_3_pane

0x6510,	// (0x00037dd6) aid_size_cell_colour_4_pane_ParamLimits

0x6510,	// (0x00037dd6) aid_size_cell_colour_4_pane

0x6d1f,	// (0x000385e5) title_pane_stacon_g1_ParamLimits

0x6d1f,	// (0x000385e5) title_pane_stacon_g1

0xa0de,	// (0x0003b9a4) popup_note_wait_window_g3_ParamLimits

0xa0de,	// (0x0003b9a4) popup_note_wait_window_g3

0xa154,	// (0x0003ba1a) popup_note_wait_window_t5_ParamLimits

0xa154,	// (0x0003ba1a) popup_note_wait_window_t5

0x1f96,	// (0x0003385c) main_feb_china_hwr_fs_writing_pane

0x7850,	// (0x00039116) popup_feb_china_hwr_fs_window_ParamLimits

0x7850,	// (0x00039116) popup_feb_china_hwr_fs_window

0x80d9,	// (0x0003999f) aid_size_cell_hwr_fs_ParamLimits

0x80d9,	// (0x0003999f) aid_size_cell_hwr_fs

0x9a9e,	// (0x0003b364) bg_popup_sub_pane_cp3_ParamLimits

0x9a9e,	// (0x0003b364) bg_popup_sub_pane_cp3

0x80ee,	// (0x000399b4) grid_hwr_fs_pane_ParamLimits

0x80ee,	// (0x000399b4) grid_hwr_fs_pane

0x8106,	// (0x000399cc) linegrid_hwr_fs_pane_ParamLimits

0x8106,	// (0x000399cc) linegrid_hwr_fs_pane

0x8116,	// (0x000399dc) cell_hwr_fs_pane_ParamLimits

0x8116,	// (0x000399dc) cell_hwr_fs_pane

0x9aaa,	// (0x0003b370) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aaa,	// (0x0003b370) linegrid_hwr_fs_pane_g1

0x9ab6,	// (0x0003b37c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9ab6,	// (0x0003b37c) linegrid_hwr_fs_pane_g2

0x9ac8,	// (0x0003b38e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9ac8,	// (0x0003b38e) linegrid_hwr_fs_pane_g3

0x8138,	// (0x000399fe) linegrid_hwr_fs_pane_g4_ParamLimits

0x8138,	// (0x000399fe) linegrid_hwr_fs_pane_g4

0x8152,	// (0x00039a18) linegrid_hwr_fs_pane_g5_ParamLimits

0x8152,	// (0x00039a18) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00041082) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00041082) linegrid_hwr_fs_pane_g

0x9ad4,	// (0x0003b39a) cell_hwr_fs_pane_g1_ParamLimits

0x9ad4,	// (0x0003b39a) cell_hwr_fs_pane_g1

0x988a,	// (0x0003b150) cell_hwr_fs_pane_g2_ParamLimits

0x988a,	// (0x0003b150) cell_hwr_fs_pane_g2

0x9aea,	// (0x0003b3b0) cell_hwr_fs_pane_g3_ParamLimits

0x9aea,	// (0x0003b3b0) cell_hwr_fs_pane_g3

0x9af7,	// (0x0003b3bd) cell_hwr_fs_pane_g4_ParamLimits

0x9af7,	// (0x0003b3bd) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0004108d) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0004108d) cell_hwr_fs_pane_g

0x8168,	// (0x00039a2e) cell_hwr_fs_pane_t1

0x1f96,	// (0x0003385c) grid_highlight_pane_cp6

0x1f96,	// (0x0003385c) main_idle_act2_pane

0x24c1,	// (0x00033d87) aid_inside_area_popup_secondary

0xa773,	// (0x0003c039) aid_inside_area_window_primary_ParamLimits

0xa773,	// (0x0003c039) aid_inside_area_window_primary

0xb308,	// (0x0003cbce) ai2_news_ticker_pane

0xb310,	// (0x0003cbd6) aid_size_cell_ai1_link_ParamLimits

0xb310,	// (0x0003cbd6) aid_size_cell_ai1_link

0xb32a,	// (0x0003cbf0) popup_ai2_data_window_ParamLimits

0xb32a,	// (0x0003cbf0) popup_ai2_data_window

0xb340,	// (0x0003cc06) popup_ai2_link_window_ParamLimits

0xb340,	// (0x0003cc06) popup_ai2_link_window

0x9a9e,	// (0x0003b364) bg_popup_sub_pane_cp4_ParamLimits

0x9a9e,	// (0x0003b364) bg_popup_sub_pane_cp4

0xb354,	// (0x0003cc1a) grid_ai2_link_pane_ParamLimits

0xb354,	// (0x0003cc1a) grid_ai2_link_pane

0xb36b,	// (0x0003cc31) popup_ai2_link_window_g1_ParamLimits

0xb36b,	// (0x0003cc31) popup_ai2_link_window_g1

0xb377,	// (0x0003cc3d) popup_ai2_link_window_g2_ParamLimits

0xb377,	// (0x0003cc3d) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00041260) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00041260) popup_ai2_link_window_g

0xb386,	// (0x0003cc4c) ai2_mp_button_pane

0xb38e,	// (0x0003cc54) ai2_mp_volume_pane

0x9cb1,	// (0x0003b577) bg_popup_sub_pane_cp5_ParamLimits

0x9cb1,	// (0x0003b577) bg_popup_sub_pane_cp5

0xb396,	// (0x0003cc5c) heading_ai2_gene_pane_ParamLimits

0xb396,	// (0x0003cc5c) heading_ai2_gene_pane

0xb3a2,	// (0x0003cc68) list_ai2_gene_pane_ParamLimits

0xb3a2,	// (0x0003cc68) list_ai2_gene_pane

0xb3ea,	// (0x0003ccb0) cell_ai2_link_pane_ParamLimits

0xb3ea,	// (0x0003ccb0) cell_ai2_link_pane

0xb400,	// (0x0003ccc6) cell_ai2_link_pane_g1

0x1f96,	// (0x0003385c) grid_highlight_pane_cp7

0x856e,	// (0x00039e34) ai2_mp_volume_pane_g1

0xb4d0,	// (0x0003cd96) ai2_mp_volume_pane_g2

0xb445,	// (0x0003cd0b) list_ai2_gene_pane_t1

0xb4d8,	// (0x0003cd9e) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x00041279) ai2_mp_volume_pane_g

0x8576,	// (0x00039e3c) volume_small_pane_cp3

0xb4e0,	// (0x0003cda6) aid_size_cell_ai2_button

0xb4e8,	// (0x0003cdae) grid_ai2_button_pane

0xb4f1,	// (0x0003cdb7) cell_ai2_button_pane_ParamLimits

0xb4f1,	// (0x0003cdb7) cell_ai2_button_pane

0x1f8c,	// (0x00033852) cell_ai2_button_pane_g1

0x1f96,	// (0x0003385c) grid_highlight_pane_cp8

0xb490,	// (0x0003cd56) ai2_gene_pane_t1_ParamLimits

0xb490,	// (0x0003cd56) ai2_gene_pane_t1

0x77ae,	// (0x00039074) aid_height_parent_landscape

0xaddc,	// (0x0003c6a2) aid_height_set_list

0xaded,	// (0x0003c6b3) aid_size_parent

0xb12b,	// (0x0003c9f1) aid_size_cell_graphic_pane_ParamLimits

0xb3b2,	// (0x0003cc78) popup_ai2_data_window_g1_ParamLimits

0xb3b2,	// (0x0003cc78) popup_ai2_data_window_g1

0xb3be,	// (0x0003cc84) ai2_news_ticker_pane_g1

0xb3c6,	// (0x0003cc8c) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00041265) ai2_news_ticker_pane_g

0xb3ce,	// (0x0003cc94) ai2_news_ticker_pane_t1

0xb3dc,	// (0x0003cca2) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0004126a) ai2_news_ticker_pane_t

0xb409,	// (0x0003cccf) heading_ai2_gene_pane_g1

0xb411,	// (0x0003ccd7) heading_ai2_gene_pane_t1_ParamLimits

0xb411,	// (0x0003ccd7) heading_ai2_gene_pane_t1

0xb426,	// (0x0003ccec) list_highlight_pane_cp6

0xb42e,	// (0x0003ccf4) ai2_gene_pane_ParamLimits

0xb42e,	// (0x0003ccf4) ai2_gene_pane

0xb453,	// (0x0003cd19) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x0004126f) list_ai2_gene_pane_t

0xb461,	// (0x0003cd27) list_highlight_pane_cp8_ParamLimits

0xb461,	// (0x0003cd27) list_highlight_pane_cp8

0xb472,	// (0x0003cd38) ai2_gene_pane_g1_ParamLimits

0xb472,	// (0x0003cd38) ai2_gene_pane_g1

0xb484,	// (0x0003cd4a) ai2_gene_pane_g2_ParamLimits

0xb484,	// (0x0003cd4a) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00041274) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00041274) ai2_gene_pane_g

0x2347,	// (0x00033c0d) scroll_pane_cp12

0x776b,	// (0x00039031) control_pane_t3_ParamLimits

0x776b,	// (0x00039031) control_pane_t3

0x75ee,	// (0x00038eb4) status_small_pane_g8_ParamLimits

0x75ee,	// (0x00038eb4) status_small_pane_g8

0x7932,	// (0x000391f8) popup_find_window_ParamLimits

0x7b4b,	// (0x00039411) popup_note_image_window_ParamLimits

0x45de,	// (0x00035ea4) list_double2_graphic_pane_vc_g1_ParamLimits

0x45de,	// (0x00035ea4) list_double2_graphic_pane_vc_g1

0x485f,	// (0x00036125) list_double2_graphic_pane_vc_g2_ParamLimits

0x485f,	// (0x00036125) list_double2_graphic_pane_vc_g2

0x486b,	// (0x00036131) list_double2_graphic_pane_vc_g3_ParamLimits

0x486b,	// (0x00036131) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00041050) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00041050) list_double2_graphic_pane_vc_g

0x4602,	// (0x00035ec8) list_double2_graphic_pane_vc_t1_ParamLimits

0x4602,	// (0x00035ec8) list_double2_graphic_pane_vc_t1

0x45ea,	// (0x00035eb0) list_single_heading_pane_vc_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_single_heading_pane_vc_g1

0x45f6,	// (0x00035ebc) list_single_heading_pane_vc_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040e69) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040e69) list_single_heading_pane_vc_g

0x4877,	// (0x0003613d) list_single_heading_pane_vc_t1_ParamLimits

0x4877,	// (0x0003613d) list_single_heading_pane_vc_t1

0x488d,	// (0x00036153) list_single_heading_pane_vc_t2_ParamLimits

0x488d,	// (0x00036153) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00041071) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00041071) list_single_heading_pane_vc_t

0x9a5a,	// (0x0003b320) list_setting_number_pane_vc_g1_ParamLimits

0x9a5a,	// (0x0003b320) list_setting_number_pane_vc_g1

0x9a66,	// (0x0003b32c) list_setting_number_pane_vc_g2_ParamLimits

0x9a66,	// (0x0003b32c) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00041076) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00041076) list_setting_number_pane_vc_g

0x489f,	// (0x00036165) list_setting_number_pane_vc_t1_ParamLimits

0x489f,	// (0x00036165) list_setting_number_pane_vc_t1

0x48b3,	// (0x00036179) list_setting_number_pane_vc_t2_ParamLimits

0x48b3,	// (0x00036179) list_setting_number_pane_vc_t2

0x48cf,	// (0x00036195) list_setting_number_pane_vc_t3_ParamLimits

0x48cf,	// (0x00036195) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0004107b) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0004107b) list_setting_number_pane_vc_t

0x48f9,	// (0x000361bf) set_value_pane_vc_ParamLimits

0x48f9,	// (0x000361bf) set_value_pane_vc

0xafa1,	// (0x0003c867) list_double2_graphic_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double2_graphic_pane_vc

0xafa1,	// (0x0003c867) list_double2_large_graphic_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double2_large_graphic_pane_vc

0xafa1,	// (0x0003c867) list_double2_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double2_pane_vc

0xafa1,	// (0x0003c867) list_double_graphic_heading_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double_graphic_heading_pane_vc

0xafa1,	// (0x0003c867) list_double_graphic_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double_graphic_pane_vc

0xafa1,	// (0x0003c867) list_double_heading_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double_heading_pane_vc

0x4918,	// (0x000361de) list_double_large_graphic_pane_vc_ParamLimits

0x4918,	// (0x000361de) list_double_large_graphic_pane_vc

0xafa1,	// (0x0003c867) list_double_number_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double_number_pane_vc

0xafa1,	// (0x0003c867) list_double_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double_pane_vc

0xafa1,	// (0x0003c867) list_double_time_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_double_time_pane_vc

0xafa1,	// (0x0003c867) list_setting_number_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_setting_number_pane_vc

0xafa1,	// (0x0003c867) list_setting_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_setting_pane_vc

0xafa1,	// (0x0003c867) list_single_graphic_heading_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_single_graphic_heading_pane_vc

0xafa1,	// (0x0003c867) list_single_heading_pane_vc_ParamLimits

0xafa1,	// (0x0003c867) list_single_heading_pane_vc

0x844e,	// (0x00039d14) list_single_number_heading_pane_vc_ParamLimits

0x844e,	// (0x00039d14) list_single_number_heading_pane_vc

0x4664,	// (0x00035f2a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4664,	// (0x00035f2a) list_double_graphic_heading_pane_vc_g1

0x485f,	// (0x00036125) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x485f,	// (0x00036125) list_double_graphic_heading_pane_vc_g2

0x486b,	// (0x00036131) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x486b,	// (0x00036131) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00041280) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00041280) list_double_graphic_heading_pane_vc_g

0x4937,	// (0x000361fd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4937,	// (0x000361fd) list_double_graphic_heading_pane_vc_t1

0x494b,	// (0x00036211) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x494b,	// (0x00036211) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00041287) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00041287) list_double_graphic_heading_pane_vc_t

0x9a5a,	// (0x0003b320) list_setting_pane_vc_g1_ParamLimits

0x9a5a,	// (0x0003b320) list_setting_pane_vc_g1

0x9a66,	// (0x0003b32c) list_setting_pane_vc_g2_ParamLimits

0x9a66,	// (0x0003b32c) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00041076) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00041076) list_setting_pane_vc_g

0x4963,	// (0x00036229) list_setting_pane_vc_t1_ParamLimits

0x4963,	// (0x00036229) list_setting_pane_vc_t1

0x497f,	// (0x00036245) list_setting_pane_vc_t2_ParamLimits

0x497f,	// (0x00036245) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x000412ca) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x000412ca) list_setting_pane_vc_t

0x48f9,	// (0x000361bf) set_value_pane_cp_vc_ParamLimits

0x48f9,	// (0x000361bf) set_value_pane_cp_vc

0x45ea,	// (0x00035eb0) list_single_number_heading_pane_vc_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_single_number_heading_pane_vc_g1

0x45f6,	// (0x00035ebc) list_single_number_heading_pane_vc_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040e69) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040e69) list_single_number_heading_pane_vc_g

0x4999,	// (0x0003625f) list_single_number_heading_pane_vc_t1_ParamLimits

0x4999,	// (0x0003625f) list_single_number_heading_pane_vc_t1

0x49af,	// (0x00036275) list_single_number_heading_pane_vc_t2_ParamLimits

0x49af,	// (0x00036275) list_single_number_heading_pane_vc_t2

0x49c1,	// (0x00036287) list_single_number_heading_pane_vc_t3_ParamLimits

0x49c1,	// (0x00036287) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x000412cf) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x000412cf) list_single_number_heading_pane_vc_t

0x49d3,	// (0x00036299) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x49d3,	// (0x00036299) list_single_graphic_heading_pane_vc_g1

0x45ea,	// (0x00035eb0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x45ea,	// (0x00035eb0) list_single_graphic_heading_pane_vc_g4

0x45f6,	// (0x00035ebc) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x45f6,	// (0x00035ebc) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x000412d6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x000412d6) list_single_graphic_heading_pane_vc_g

0x49df,	// (0x000362a5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x49df,	// (0x000362a5) list_single_graphic_heading_pane_vc_t1

0x49f5,	// (0x000362bb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x49f5,	// (0x000362bb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x000412dd) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x000412dd) list_single_graphic_heading_pane_vc_t

0x45ea,	// (0x00035eb0) list_double2_pane_vc_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_double2_pane_vc_g1

0x45f6,	// (0x00035ebc) list_double2_pane_vc_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040e69) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040e69) list_double2_pane_vc_g

0x4a07,	// (0x000362cd) list_double2_pane_vc_t1_ParamLimits

0x4a07,	// (0x000362cd) list_double2_pane_vc_t1

0x4670,	// (0x00035f36) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4670,	// (0x00035f36) list_double2_large_graphic_pane_vc_g1

0x45ea,	// (0x00035eb0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x45ea,	// (0x00035eb0) list_double2_large_graphic_pane_vc_g2

0x45f6,	// (0x00035ebc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x45f6,	// (0x00035ebc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x000412e2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x000412e2) list_double2_large_graphic_pane_vc_g

0x4602,	// (0x00035ec8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4602,	// (0x00035ec8) list_double2_large_graphic_pane_vc_t1

0x4a1f,	// (0x000362e5) list_double_time_pane_vc_g1_ParamLimits

0x4a1f,	// (0x000362e5) list_double_time_pane_vc_g1

0x4a2b,	// (0x000362f1) list_double_time_pane_vc_g2_ParamLimits

0x4a2b,	// (0x000362f1) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x000412e9) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x000412e9) list_double_time_pane_vc_g

0x4a37,	// (0x000362fd) list_double_time_pane_vc_t1_ParamLimits

0x4a37,	// (0x000362fd) list_double_time_pane_vc_t1

0x4a5b,	// (0x00036321) list_double_time_pane_vc_t2_ParamLimits

0x4a5b,	// (0x00036321) list_double_time_pane_vc_t2

0x4aaa,	// (0x00036370) list_double_time_pane_vc_t3_ParamLimits

0x4aaa,	// (0x00036370) list_double_time_pane_vc_t3

0x4abc,	// (0x00036382) list_double_time_pane_vc_t4_ParamLimits

0x4abc,	// (0x00036382) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x000412ee) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x000412ee) list_double_time_pane_vc_t

0x45ea,	// (0x00035eb0) list_double_pane_vc_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_double_pane_vc_g1

0x45f6,	// (0x00035ebc) list_double_pane_vc_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040e69) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040e69) list_double_pane_vc_g

0x4ad0,	// (0x00036396) list_double_pane_vc_t1_ParamLimits

0x4ad0,	// (0x00036396) list_double_pane_vc_t1

0x4ae4,	// (0x000363aa) list_double_pane_vc_t2_ParamLimits

0x4ae4,	// (0x000363aa) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x000412f7) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x000412f7) list_double_pane_vc_t

0x45ea,	// (0x00035eb0) list_double_number_pane_vc_g1_ParamLimits

0x45ea,	// (0x00035eb0) list_double_number_pane_vc_g1

0x45f6,	// (0x00035ebc) list_double_number_pane_vc_g2_ParamLimits

0x45f6,	// (0x00035ebc) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040e69) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040e69) list_double_number_pane_vc_g

0x4afc,	// (0x000363c2) list_double_number_pane_vc_t1_ParamLimits

0x4afc,	// (0x000363c2) list_double_number_pane_vc_t1

0x4ad0,	// (0x00036396) list_double_number_pane_vc_t2_ParamLimits

0x4ad0,	// (0x00036396) list_double_number_pane_vc_t2

0x4b0e,	// (0x000363d4) list_double_number_pane_vc_t3_ParamLimits

0x4b0e,	// (0x000363d4) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x000412fc) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x000412fc) list_double_number_pane_vc_t

0x4b26,	// (0x000363ec) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4b26,	// (0x000363ec) list_double_large_graphic_pane_vc_g1

0x4b42,	// (0x00036408) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4b42,	// (0x00036408) list_double_large_graphic_pane_vc_g2

0x4b56,	// (0x0003641c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4b56,	// (0x0003641c) list_double_large_graphic_pane_vc_g3

0x4b65,	// (0x0003642b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4b65,	// (0x0003642b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x00041303) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00041303) list_double_large_graphic_pane_vc_g

0x4b71,	// (0x00036437) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4b71,	// (0x00036437) list_double_large_graphic_pane_vc_t1

0x4b8d,	// (0x00036453) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4b8d,	// (0x00036453) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0004130c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0004130c) list_double_large_graphic_pane_vc_t

0x485f,	// (0x00036125) list_double_heading_pane_vc_g1_ParamLimits

0x485f,	// (0x00036125) list_double_heading_pane_vc_g1

0x486b,	// (0x00036131) list_double_heading_pane_vc_g2_ParamLimits

0x486b,	// (0x00036131) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x00041311) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x00041311) list_double_heading_pane_vc_g

0x4baf,	// (0x00036475) list_double_heading_pane_vc_t1_ParamLimits

0x4baf,	// (0x00036475) list_double_heading_pane_vc_t1

0x4bc3,	// (0x00036489) list_double_heading_pane_vc_t2_ParamLimits

0x4bc3,	// (0x00036489) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00041316) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00041316) list_double_heading_pane_vc_t

0x4bdb,	// (0x000364a1) list_double_graphic_pane_vc_g1_ParamLimits

0x4bdb,	// (0x000364a1) list_double_graphic_pane_vc_g1

0x4bee,	// (0x000364b4) list_double_graphic_pane_vc_g2_ParamLimits

0x4bee,	// (0x000364b4) list_double_graphic_pane_vc_g2

0x45ea,	// (0x00035eb0) list_double_graphic_pane_vc_g3_ParamLimits

0x45ea,	// (0x00035eb0) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0004131b) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0004131b) list_double_graphic_pane_vc_g

0x4c0b,	// (0x000364d1) list_double_graphic_pane_vc_t1_ParamLimits

0x4c0b,	// (0x000364d1) list_double_graphic_pane_vc_t1

0x4c2a,	// (0x000364f0) list_double_graphic_pane_vc_t2_ParamLimits

0x4c2a,	// (0x000364f0) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00041324) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00041324) list_double_graphic_pane_vc_t

0x5da6,	// (0x0003766c) aid_size_cell_fastswap

0x5dae,	// (0x00037674) aid_size_cell_touch_ParamLimits

0x5dae,	// (0x00037674) aid_size_cell_touch

0x6013,	// (0x000378d9) popup_fast_swap_wide_window_ParamLimits

0x6013,	// (0x000378d9) popup_fast_swap_wide_window

0x6119,	// (0x000379df) touch_pane_ParamLimits

0x6119,	// (0x000379df) touch_pane

0x2394,	// (0x00033c5a) button_value_adjust_pane_cp2

0x47a6,	// (0x0003606c) button_value_adjust_pane_cp4

0x47ae,	// (0x00036074) form_field_data_pane_cp2

0x69ff,	// (0x000382c5) form_field_data_wide_pane_cp2

0x26ae,	// (0x00033f74) bg_scroll_pane_ParamLimits

0x6f19,	// (0x000387df) scroll_handle_pane_ParamLimits

0x6f2d,	// (0x000387f3) scroll_sc2_down_pane_ParamLimits

0x6f2d,	// (0x000387f3) scroll_sc2_down_pane

0x26df,	// (0x00033fa5) scroll_sc2_up_pane_ParamLimits

0x26df,	// (0x00033fa5) scroll_sc2_up_pane

0xbbd2,	// (0x0003d498) grid_wheel_folder_pane_g1_ParamLimits

0xbbd2,	// (0x0003d498) grid_wheel_folder_pane_g1

0x72d2,	// (0x00038b98) clock_nsta_pane_cp2_ParamLimits

0x72d2,	// (0x00038b98) clock_nsta_pane_cp2

0x73fd,	// (0x00038cc3) listscroll_midp_pane_ParamLimits

0x7409,	// (0x00038ccf) midp_canvas_pane

0x2d87,	// (0x0003464d) nsta_clock_indic_pane

0x2daf,	// (0x00034675) listscroll_form_pane_vc

0x2db7,	// (0x0003467d) listscroll_set_pane_vc_ParamLimits

0x2db7,	// (0x0003467d) listscroll_set_pane_vc

0x7e5a,	// (0x00039720) clock_nsta_pane

0x7ed5,	// (0x0003979b) indicator_nsta_pane

0x9950,	// (0x0003b216) bg_popup_sub_pane_cp2_ParamLimits

0x9964,	// (0x0003b22a) find_pane_cp2_ParamLimits

0x9964,	// (0x0003b22a) find_pane_cp2

0x997a,	// (0x0003b240) grid_toobar_pane_ParamLimits

0x9a72,	// (0x0003b338) list_form_gen_pane_vc_ParamLimits

0x9a72,	// (0x0003b338) list_form_gen_pane_vc

0x9a88,	// (0x0003b34e) scroll_pane_cp8_vc_ParamLimits

0x9a88,	// (0x0003b34e) scroll_pane_cp8_vc

0x9b04,	// (0x0003b3ca) data_form_wide_pane_vc_ParamLimits

0x9b04,	// (0x0003b3ca) data_form_wide_pane_vc

0x9b10,	// (0x0003b3d6) form_field_data_wide_pane_vc_g1

0x9b18,	// (0x0003b3de) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b18,	// (0x0003b3de) form_field_data_wide_pane_vc_t1

0x23a8,	// (0x00033c6e) input_focus_pane_cp6_vc_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_cp6_vc

0x9e45,	// (0x0003b70b) list_midp_pane_ParamLimits

0x9e51,	// (0x0003b717) scroll_pane_cp16_ParamLimits

0x9e51,	// (0x0003b717) scroll_pane_cp16

0x9ebb,	// (0x0003b781) button_value_adjust_pane_ParamLimits

0x9ebb,	// (0x0003b781) button_value_adjust_pane

0xadff,	// (0x0003c6c5) button_value_adjust_pane_cp6_ParamLimits

0xadff,	// (0x0003c6c5) button_value_adjust_pane_cp6

0xaf25,	// (0x0003c7eb) settings_code_pane_cp_ParamLimits

0xaf25,	// (0x0003c7eb) settings_code_pane_cp

0x1f8c,	// (0x00033852) cell_touch_pane_g1

0x1f8c,	// (0x00033852) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00040f95) cell_touch_pane_g

0xb503,	// (0x0003cdc9) cell_touch_pane_cp_ParamLimits

0xb503,	// (0x0003cdc9) cell_touch_pane_cp

0xb513,	// (0x0003cdd9) cell_touch_pane_ParamLimits

0xb513,	// (0x0003cdd9) cell_touch_pane

0x1f8c,	// (0x00033852) scroll_sc2_down_pane_g1

0x1f8c,	// (0x00033852) scroll_sc2_up_pane_g1

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp4_vc

0xb525,	// (0x0003cdeb) list_set_graphic_pane_vc_g1_ParamLimits

0xb525,	// (0x0003cdeb) list_set_graphic_pane_vc_g1

0xb531,	// (0x0003cdf7) list_set_graphic_pane_vc_g2_ParamLimits

0xb531,	// (0x0003cdf7) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0004128c) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0004128c) list_set_graphic_pane_vc_g

0xb53d,	// (0x0003ce03) text_primary_small_cp13_vc_ParamLimits

0xb53d,	// (0x0003ce03) text_primary_small_cp13_vc

0xb555,	// (0x0003ce1b) list_set_graphic_pane_vc_ParamLimits

0xb555,	// (0x0003ce1b) list_set_graphic_pane_vc

0x1f96,	// (0x0003385c) input_focus_pane_cp2_vc

0x1f8c,	// (0x00033852) setting_code_pane_vc_g1

0x2009,	// (0x000338cf) setting_code_pane_vc_t1

0xb568,	// (0x0003ce2e) set_text_pane_vc_t1_ParamLimits

0xb568,	// (0x0003ce2e) set_text_pane_vc_t1

0x1f96,	// (0x0003385c) input_focus_pane_cp1_vc

0xb585,	// (0x0003ce4b) list_set_text_pane_vc

0x1f8c,	// (0x00033852) setting_text_pane_vc_g1

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp2_vc

0x2000,	// (0x000338c6) setting_slider_graphic_pane_vc_g1

0xb58f,	// (0x0003ce55) setting_slider_graphic_pane_vc_t1

0xb59f,	// (0x0003ce65) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00041291) setting_slider_graphic_pane_vc_t

0xb5af,	// (0x0003ce75) slider_set_pane_cp_vc

0xb5b7,	// (0x0003ce7d) slider_set_pane_vc_g1

0xb5c0,	// (0x0003ce86) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00041296) slider_set_pane_vc_g

0x2400,	// (0x00033cc6) set_opt_bg_pane_g1_copy1

0x2408,	// (0x00033cce) set_opt_bg_pane_g2_copy1

0xb5ec,	// (0x0003ceb2) set_opt_bg_pane_g3_copy1

0x2418,	// (0x00033cde) set_opt_bg_pane_g4_copy1

0x2420,	// (0x00033ce6) set_opt_bg_pane_g5_copy1

0x2428,	// (0x00033cee) set_opt_bg_pane_g6_copy1

0xb5f4,	// (0x0003ceba) set_opt_bg_pane_g7_copy1

0xb5fe,	// (0x0003cec4) set_opt_bg_pane_g8_copy1

0xb606,	// (0x0003cecc) set_opt_bg_pane_g9_copy1

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp_vc

0xb60e,	// (0x0003ced4) setting_slider_pane_vc_t1

0xb61d,	// (0x0003cee3) setting_slider_pane_vc_t2

0xb62d,	// (0x0003cef3) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x000412a5) setting_slider_pane_vc_t

0xb63d,	// (0x0003cf03) slider_set_pane_vc

0x81a9,	// (0x00039a6f) volume_set_pane_vc_g1

0x857f,	// (0x00039e45) volume_set_pane_vc_g2

0x8588,	// (0x00039e4e) volume_set_pane_vc_g3

0x8591,	// (0x00039e57) volume_set_pane_vc_g4

0x859a,	// (0x00039e60) volume_set_pane_vc_g5

0x85a3,	// (0x00039e69) volume_set_pane_vc_g6

0x85ac,	// (0x00039e72) volume_set_pane_vc_g7

0x85b5,	// (0x00039e7b) volume_set_pane_vc_g8

0x85be,	// (0x00039e84) volume_set_pane_vc_g9

0x85c7,	// (0x00039e8d) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x000412ac) volume_set_pane_vc_g

0xb645,	// (0x0003cf0b) volume_set_pane_vc

0xb64f,	// (0x0003cf15) button_value_adjust_pane_cp1_vc

0xb659,	// (0x0003cf1f) list_highlight_pane_cp2_vc

0xb662,	// (0x0003cf28) list_set_pane_vc_ParamLimits

0xb662,	// (0x0003cf28) list_set_pane_vc

0xb6c0,	// (0x0003cf86) main_pane_set_vc_t1_ParamLimits

0xb6c0,	// (0x0003cf86) main_pane_set_vc_t1

0xb6d5,	// (0x0003cf9b) main_pane_set_vc_t2_ParamLimits

0xb6d5,	// (0x0003cf9b) main_pane_set_vc_t2

0xb6e7,	// (0x0003cfad) main_pane_set_vc_t3_ParamLimits

0xb6e7,	// (0x0003cfad) main_pane_set_vc_t3

0xb6f9,	// (0x0003cfbf) main_pane_set_vc_t4_ParamLimits

0xb6f9,	// (0x0003cfbf) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x000412c1) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x000412c1) main_pane_set_vc_t

0xb70b,	// (0x0003cfd1) setting_code_pane_vc_ParamLimits

0xb70b,	// (0x0003cfd1) setting_code_pane_vc

0xb71a,	// (0x0003cfe0) setting_slider_graphic_pane_vc

0xb71a,	// (0x0003cfe0) setting_slider_pane_vc

0xb71a,	// (0x0003cfe0) setting_text_pane_vc

0xb71a,	// (0x0003cfe0) setting_volume_pane_vc

0xb722,	// (0x0003cfe8) scroll_pane_cp121_vc

0x2382,	// (0x00033c48) set_content_pane_vc

0xb72a,	// (0x0003cff0) button_value_adjust_pane_g1

0xb733,	// (0x0003cff9) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x00041329) button_value_adjust_pane_g

0xb73c,	// (0x0003d002) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73c,	// (0x0003d002) form_field_slider_wide_pane_vc_t1

0xb750,	// (0x0003d016) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb750,	// (0x0003d016) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0004132e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0004132e) form_field_slider_wide_pane_vc_t

0x1fe4,	// (0x000338aa) input_focus_pane_cp10_vc_ParamLimits

0x1fe4,	// (0x000338aa) input_focus_pane_cp10_vc

0xb77e,	// (0x0003d044) slider_cont_pane_cp1_vc_ParamLimits

0xb77e,	// (0x0003d044) slider_cont_pane_cp1_vc

0xb790,	// (0x0003d056) slider_form_pane_g1_cp2

0xb5c0,	// (0x0003ce86) slider_form_pane_g2_cp2

0xb7bd,	// (0x0003d083) form_field_slider_pane_vc_t3

0xb7cb,	// (0x0003d091) form_field_slider_pane_vc_t4

0xb7d9,	// (0x0003d09f) slider_form_pane_vc_ParamLimits

0xb7d9,	// (0x0003d09f) slider_form_pane_vc

0xb7e6,	// (0x0003d0ac) form_field_slider_pane_vc_t1_ParamLimits

0xb7e6,	// (0x0003d0ac) form_field_slider_pane_vc_t1

0xb750,	// (0x0003d016) form_field_slider_pane_vc_t2_ParamLimits

0xb750,	// (0x0003d016) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x00041340) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x00041340) form_field_slider_pane_vc_t

0x1fe4,	// (0x000338aa) input_focus_pane_cp9_vc_ParamLimits

0x1fe4,	// (0x000338aa) input_focus_pane_cp9_vc

0xb802,	// (0x0003d0c8) slider_cont_pane_vc_ParamLimits

0xb802,	// (0x0003d0c8) slider_cont_pane_vc

0xb816,	// (0x0003d0dc) list_form_graphic_pane_cp_vc_ParamLimits

0xb816,	// (0x0003d0dc) list_form_graphic_pane_cp_vc

0x9b10,	// (0x0003b3d6) form_field_popup_wide_pane_vc_g1

0xb82b,	// (0x0003d0f1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82b,	// (0x0003d0f1) form_field_popup_wide_pane_vc_t1

0x23a8,	// (0x00033c6e) input_focus_pane_cp8_vc_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_cp8_vc

0xb870,	// (0x0003d136) list_form_wide_pane_vc_ParamLimits

0xb870,	// (0x0003d136) list_form_wide_pane_vc

0xb87c,	// (0x0003d142) list_form_graphic_pane_vc_g1

0xb884,	// (0x0003d14a) list_form_graphic_pane_vc_t1_ParamLimits

0xb884,	// (0x0003d14a) list_form_graphic_pane_vc_t1

0x1ff2,	// (0x000338b8) list_highlight_pane_cp5_vc_ParamLimits

0x1ff2,	// (0x000338b8) list_highlight_pane_cp5_vc

0xb8a0,	// (0x0003d166) list_form_graphic_pane_vc_ParamLimits

0xb8a0,	// (0x0003d166) list_form_graphic_pane_vc

0x9b10,	// (0x0003b3d6) form_field_popup_pane_vc_g1

0xb8b6,	// (0x0003d17c) form_field_popup_pane_vc_t1_ParamLimits

0xb8b6,	// (0x0003d17c) form_field_popup_pane_vc_t1

0x23a8,	// (0x00033c6e) input_focus_pane_cp7_vc_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_cp7_vc

0xb8cd,	// (0x0003d193) list_form_pane_vc_ParamLimits

0xb8cd,	// (0x0003d193) list_form_pane_vc

0xb8d9,	// (0x0003d19f) data_form_pane_vc_t1_ParamLimits

0xb8d9,	// (0x0003d19f) data_form_pane_vc_t1

0x2400,	// (0x00033cc6) input_focus_pane_vc_g1

0x2408,	// (0x00033cce) input_focus_pane_vc_g2

0x2410,	// (0x00033cd6) input_focus_pane_vc_g3

0x2418,	// (0x00033cde) input_focus_pane_vc_g4

0x2420,	// (0x00033ce6) input_focus_pane_vc_g5

0x2428,	// (0x00033cee) input_focus_pane_vc_g6

0x2430,	// (0x00033cf6) input_focus_pane_vc_g7

0x2438,	// (0x00033cfe) input_focus_pane_vc_g8

0x2440,	// (0x00033d06) input_focus_pane_vc_g9

0x1f8c,	// (0x00033852) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00040f1e) input_focus_pane_vc_g

0x9b04,	// (0x0003b3ca) data_form_pane_vc_ParamLimits

0x9b04,	// (0x0003b3ca) data_form_pane_vc

0x9b10,	// (0x0003b3d6) form_field_data_pane_vc_g1

0xb8f4,	// (0x0003d1ba) form_field_data_pane_vc_t1_ParamLimits

0xb8f4,	// (0x0003d1ba) form_field_data_pane_vc_t1

0x23a8,	// (0x00033c6e) input_focus_pane_vc_ParamLimits

0x23a8,	// (0x00033c6e) input_focus_pane_vc

0xb90e,	// (0x0003d1d4) button_value_adjust_pane_cp3_vc

0xb916,	// (0x0003d1dc) button_value_adjust_pane_cp5_vc

0xb91e,	// (0x0003d1e4) form_field_data_pane_vc_ParamLimits

0xb91e,	// (0x0003d1e4) form_field_data_pane_vc

0xb935,	// (0x0003d1fb) form_field_data_pane_vc_cp2

0xb93d,	// (0x0003d203) form_field_data_wide_pane_vc_ParamLimits

0xb93d,	// (0x0003d203) form_field_data_wide_pane_vc

0xb953,	// (0x0003d219) form_field_data_wide_pane_vc_cp2

0xb95b,	// (0x0003d221) form_field_popup_pane_vc_ParamLimits

0xb95b,	// (0x0003d221) form_field_popup_pane_vc

0xb972,	// (0x0003d238) form_field_popup_wide_pane_vc_ParamLimits

0xb972,	// (0x0003d238) form_field_popup_wide_pane_vc

0xb988,	// (0x0003d24e) form_field_slider_pane_vc_ParamLimits

0xb988,	// (0x0003d24e) form_field_slider_pane_vc

0xb99b,	// (0x0003d261) form_field_slider_wide_pane_vc_ParamLimits

0xb99b,	// (0x0003d261) form_field_slider_wide_pane_vc

0xb9ae,	// (0x0003d274) grid_touch_1_pane_ParamLimits

0xb9ae,	// (0x0003d274) grid_touch_1_pane

0xb9ba,	// (0x0003d280) grid_touch_2_pane_ParamLimits

0xb9ba,	// (0x0003d280) grid_touch_2_pane

0x2d79,	// (0x0003463f) touch_pane_g1_ParamLimits

0x2d79,	// (0x0003463f) touch_pane_g1

0xb9d2,	// (0x0003d298) cell_app_pane_cp_wide_ParamLimits

0xb9d2,	// (0x0003d298) cell_app_pane_cp_wide

0xb9e3,	// (0x0003d2a9) grid_popup_fast_wide_pane_ParamLimits

0xb9e3,	// (0x0003d2a9) grid_popup_fast_wide_pane

0xb9f7,	// (0x0003d2bd) scroll_pane_cp19_ParamLimits

0xb9f7,	// (0x0003d2bd) scroll_pane_cp19

0x1f96,	// (0x0003385c) bg_popup_window_pane_cp20

0xba0b,	// (0x0003d2d1) listscroll_popup_fast_wide_pane

0xba13,	// (0x0003d2d9) grid_indicator_nsta_pane

0xba25,	// (0x0003d2eb) clock_nsta_pane_g1

0xba2e,	// (0x0003d2f4) clock_nsta_pane_t1

0xba4a,	// (0x0003d310) cell_indicator_nsta_pane_ParamLimits

0xba4a,	// (0x0003d310) cell_indicator_nsta_pane

0xba7f,	// (0x0003d345) cell_indicator_nsta_pane_g1

0xba8d,	// (0x0003d353) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x00041351) cell_indicator_nsta_pane_g

0xba9f,	// (0x0003d365) clock_nsta_pane_cp

0xbaa8,	// (0x0003d36e) indicator_nsta_pane_cp

0xbab2,	// (0x0003d378) nsta_clock_indic_pane_g1

0x202e,	// (0x000338f4) grid_indicator_pane

0x6fcb,	// (0x00038891) scroll_pane_cp29

0x7221,	// (0x00038ae7) indicator_nsta_pane_cp2_ParamLimits

0x7221,	// (0x00038ae7) indicator_nsta_pane_cp2

0x1ff2,	// (0x000338b8) main_apps_wheel_pane

0x9d28,	// (0x0003b5ee) form_midp_field_text_pane_ParamLimits

0x9e71,	// (0x0003b737) scroll_bar_cp050_ParamLimits

0xbb0b,	// (0x0003d3d1) cell_indicator_pane_ParamLimits

0xbb0b,	// (0x0003d3d1) cell_indicator_pane

0xbb24,	// (0x0003d3ea) cell_indicator_pane_g1

0xbb2e,	// (0x0003d3f4) grid_wheel_folder_pane_ParamLimits

0xbb2e,	// (0x0003d3f4) grid_wheel_folder_pane

0xbb44,	// (0x0003d40a) list_wheel_apps_pane_ParamLimits

0xbb44,	// (0x0003d40a) list_wheel_apps_pane

0xbb55,	// (0x0003d41b) main_apps_wheel_pane_g1_ParamLimits

0xbb55,	// (0x0003d41b) main_apps_wheel_pane_g1

0xbb69,	// (0x0003d42f) main_apps_wheel_pane_g2_ParamLimits

0xbb69,	// (0x0003d42f) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0004136d) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0004136d) main_apps_wheel_pane_g

0xbb81,	// (0x0003d447) main_apps_wheel_pane_t1_ParamLimits

0xbb81,	// (0x0003d447) main_apps_wheel_pane_t1

0xbba4,	// (0x0003d46a) list_wheel_apps_pane_g1

0xbbac,	// (0x0003d472) list_wheel_apps_pane_g2

0xbbb4,	// (0x0003d47a) list_wheel_apps_pane_g3

0xbbbe,	// (0x0003d484) list_wheel_apps_pane_g4

0xbbc8,	// (0x0003d48e) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x00041372) list_wheel_apps_pane_g

0x2b09,	// (0x000343cf) navi_icon_text_pane

0x7d89,	// (0x0003964f) aid_fill_nsta

0xbbeb,	// (0x0003d4b1) navi_icon_text_pane_g1

0xbbf7,	// (0x0003d4bd) navi_icon_text_pane_t1

0x29ed,	// (0x000342b3) list_set_graphic_pane_t1_ParamLimits

0x29ed,	// (0x000342b3) list_set_graphic_pane_t1

0xa5bc,	// (0x0003be82) popup_midp_note_alarm_window_t6_ParamLimits

0xa5bc,	// (0x0003be82) popup_midp_note_alarm_window_t6

0xa5ce,	// (0x0003be94) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ce,	// (0x0003be94) popup_midp_note_alarm_window_t7

0xa5e0,	// (0x0003bea6) popup_midp_note_alarm_window_t8_ParamLimits

0xa5e0,	// (0x0003bea6) popup_midp_note_alarm_window_t8

0xa5f2,	// (0x0003beb8) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f2,	// (0x0003beb8) popup_midp_note_alarm_window_t9

0xa604,	// (0x0003beca) popup_midp_note_alarm_window_t10_ParamLimits

0xa604,	// (0x0003beca) popup_midp_note_alarm_window_t10

0xa616,	// (0x0003bedc) popup_midp_note_alarm_window_t11_ParamLimits

0xa616,	// (0x0003bedc) popup_midp_note_alarm_window_t11

0xa628,	// (0x0003beee) scroll_pane_cp17_ParamLimits

0xa628,	// (0x0003beee) scroll_pane_cp17

0x81a9,	// (0x00039a6f) volume_small_pane_cp_g1

0x85d0,	// (0x00039e96) volume_small_pane_cp_g2

0x85d9,	// (0x00039e9f) volume_small_pane_cp_g3

0x85e2,	// (0x00039ea8) volume_small_pane_cp_g4

0x85eb,	// (0x00039eb1) volume_small_pane_cp_g5

0x859a,	// (0x00039e60) volume_small_pane_cp_g6

0x85f4,	// (0x00039eba) volume_small_pane_cp_g7

0x85fd,	// (0x00039ec3) volume_small_pane_cp_g8

0x8606,	// (0x00039ecc) volume_small_pane_cp_g9

0x860f,	// (0x00039ed5) volume_small_pane_cp_g10

0x2c5a,	// (0x00034520) midp_ticker_pane_g1_ParamLimits

0x2c66,	// (0x0003452c) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00040fea) midp_ticker_pane_g_ParamLimits

0x2c72,	// (0x00034538) midp_ticker_pane_t1_ParamLimits

0x7d9f,	// (0x00039665) aid_fill_nsta_2

0x9e5d,	// (0x0003b723) list_form2_midp_pane

0xaf70,	// (0x0003c836) midp_editing_number_pane_ParamLimits

0xaf7f,	// (0x0003c845) midp_ticker_pane_ParamLimits

0xbc09,	// (0x0003d4cf) form2_midp_field_pane

0xbc2d,	// (0x0003d4f3) scroll_pane_cp51

0xbc4d,	// (0x0003d513) form2_midp_button_pane_ParamLimits

0xbc4d,	// (0x0003d513) form2_midp_button_pane

0xbc5f,	// (0x0003d525) form2_midp_content_pane_ParamLimits

0xbc5f,	// (0x0003d525) form2_midp_content_pane

0xbc79,	// (0x0003d53f) form2_midp_field_choice_group_pane

0xbc81,	// (0x0003d547) form2_midp_field_pane_g1

0xbc89,	// (0x0003d54f) form2_midp_field_pane_g2

0xbc91,	// (0x0003d557) form2_midp_field_pane_g3

0xbc99,	// (0x0003d55f) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x00041397) form2_midp_field_pane_g

0xbca1,	// (0x0003d567) form2_midp_gauge_slider_pane

0xbca9,	// (0x0003d56f) form2_midp_gauge_wait_pane

0xbcb1,	// (0x0003d577) form2_midp_image_pane_ParamLimits

0xbcb1,	// (0x0003d577) form2_midp_image_pane

0xbccc,	// (0x0003d592) form2_midp_label_pane_ParamLimits

0xbccc,	// (0x0003d592) form2_midp_label_pane

0xbce5,	// (0x0003d5ab) form2_midp_label_pane_cp_ParamLimits

0xbce5,	// (0x0003d5ab) form2_midp_label_pane_cp

0xbd06,	// (0x0003d5cc) form2_midp_string_pane_ParamLimits

0xbd06,	// (0x0003d5cc) form2_midp_string_pane

0x4c54,	// (0x0003651a) form2_midp_text_pane_ParamLimits

0x4c54,	// (0x0003651a) form2_midp_text_pane

0xbd18,	// (0x0003d5de) form2_midp_time_pane

0xbd28,	// (0x0003d5ee) input_focus_pane_cp51_ParamLimits

0xbd28,	// (0x0003d5ee) input_focus_pane_cp51

0xbd40,	// (0x0003d606) form2_midp_label_pane_t1_ParamLimits

0xbd40,	// (0x0003d606) form2_midp_label_pane_t1

0x4c6d,	// (0x00036533) form2_mdip_text_pane_t1_ParamLimits

0x4c6d,	// (0x00036533) form2_mdip_text_pane_t1

0x4c8b,	// (0x00036551) form2_midp_time_pane_t1

0xbd89,	// (0x0003d64f) form2_midp_gauge_slider_pane_t1

0xbd9b,	// (0x0003d661) form2_midp_gauge_slider_pane_t2

0xbdad,	// (0x0003d673) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x000413a0) form2_midp_gauge_slider_pane_t

0xbdbf,	// (0x0003d685) form2_midp_slider_pane

0xbdcb,	// (0x0003d691) form2_midp_gauge_wait_pane_t1

0xbdd9,	// (0x0003d69f) form2_midp_wait_pane_ParamLimits

0xbdd9,	// (0x0003d69f) form2_midp_wait_pane

0xbe04,	// (0x0003d6ca) list_single_2graphic_pane_cp4_ParamLimits

0xbe04,	// (0x0003d6ca) list_single_2graphic_pane_cp4

0x9b79,	// (0x0003b43f) list_single_midp_graphic_pane_cp_ParamLimits

0x9b79,	// (0x0003b43f) list_single_midp_graphic_pane_cp

0x1f96,	// (0x0003385c) list_highlight_pane_cp20

0xbe2c,	// (0x0003d6f2) list_single_2graphic_pane_g1_cp4

0xb409,	// (0x0003cccf) list_single_2graphic_pane_g2_cp4

0xbe34,	// (0x0003d6fa) list_single_2graphic_pane_t1_cp4

0x1ff2,	// (0x000338b8) list_highlight_pane_cp21

0xbe43,	// (0x0003d709) list_single_midp_graphic_pane_g4_cp

0xbe52,	// (0x0003d718) list_single_midp_graphic_pane_t1_cp

0xbe67,	// (0x0003d72d) form2_mdip_string_pane_t1_ParamLimits

0xbe67,	// (0x0003d72d) form2_mdip_string_pane_t1

0x1f96,	// (0x0003385c) bg_wml_button_pane_cp2

0x1f8c,	// (0x00033852) form2_midp_image_pane_g1

0x46c7,	// (0x00035f8d) list_double_large_graphic_pane_g5_ParamLimits

0x46c7,	// (0x00035f8d) list_double_large_graphic_pane_g5

0x73fd,	// (0x00038cc3) midp_form_pane_ParamLimits

0x1ff2,	// (0x000338b8) main_apps_wheel_pane_ParamLimits

0x7b71,	// (0x00039437) popup_preview_window_ParamLimits

0x7b71,	// (0x00039437) popup_preview_window

0x7d2c,	// (0x000395f2) popup_touch_info_window_ParamLimits

0x7d2c,	// (0x000395f2) popup_touch_info_window

0x7d4a,	// (0x00039610) popup_touch_menu_window_ParamLimits

0x7d4a,	// (0x00039610) popup_touch_menu_window

0x1f82,	// (0x00033848) bg_popup_sub_pane_cp6

0xbf6e,	// (0x0003d834) list_touch_menu_pane

0xbf76,	// (0x0003d83c) list_single_touch_menu_pane_ParamLimits

0xbf76,	// (0x0003d83c) list_single_touch_menu_pane

0xbf8c,	// (0x0003d852) list_single_touch_menu_pane_t1

0x1ff2,	// (0x000338b8) bg_popup_sub_pane_cp7_ParamLimits

0x1ff2,	// (0x000338b8) bg_popup_sub_pane_cp7

0xbf9a,	// (0x0003d860) heading_sub_pane

0xbfa2,	// (0x0003d868) list_touch_info_pane_ParamLimits

0xbfa2,	// (0x0003d868) list_touch_info_pane

0xbfb1,	// (0x0003d877) list_single_touch_info_pane_ParamLimits

0xbfb1,	// (0x0003d877) list_single_touch_info_pane

0xbfc3,	// (0x0003d889) list_single_touch_info_pane_t1

0xbfd1,	// (0x0003d897) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x000413ae) list_single_touch_info_pane_t

0x2c43,	// (0x00034509) bg_popup_heading_pane_cp

0xbfdf,	// (0x0003d8a5) heading_sub_pane_t1

0x9a9e,	// (0x0003b364) bg_popup_preview_window_pane_cp_ParamLimits

0x9a9e,	// (0x0003b364) bg_popup_preview_window_pane_cp

0xbf9a,	// (0x0003d860) heading_preview_pane

0xbfa2,	// (0x0003d868) list_preview_pane_ParamLimits

0xbfa2,	// (0x0003d868) list_preview_pane

0xbfed,	// (0x0003d8b3) popup_preview_window_g1

0xbfb1,	// (0x0003d877) list_single_preview_pane_ParamLimits

0xbfb1,	// (0x0003d877) list_single_preview_pane

0xbff5,	// (0x0003d8bb) list_single_preview_pane_g1

0xbffd,	// (0x0003d8c3) list_single_preview_pane_t1

0xbfc3,	// (0x0003d889) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x000413b3) list_single_preview_pane_t

0xc00b,	// (0x0003d8d1) bg_popup_heading_pane_cp2_ParamLimits

0xc00b,	// (0x0003d8d1) bg_popup_heading_pane_cp2

0xc021,	// (0x0003d8e7) heading_preview_pane_g1

0xc029,	// (0x0003d8ef) heading_preview_pane_t1_ParamLimits

0xc029,	// (0x0003d8ef) heading_preview_pane_t1

0x2045,	// (0x0003390b) soft_indicator_pane_t1_ParamLimits

0x2324,	// (0x00033bea) scroll_pane_ParamLimits

0x26d6,	// (0x00033f9c) scroll_sc2_left_pane

0x26cd,	// (0x00033f93) scroll_sc2_right_pane

0x26f5,	// (0x00033fbb) scroll_bg_pane_g1_ParamLimits

0x270a,	// (0x00033fd0) scroll_bg_pane_g2_ParamLimits

0x2722,	// (0x00033fe8) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00040f75) scroll_bg_pane_g_ParamLimits

0x26f5,	// (0x00033fbb) scroll_handle_pane_g1_ParamLimits

0x2737,	// (0x00033ffd) scroll_handle_pane_g2_ParamLimits

0x2722,	// (0x00033fe8) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00040f7c) scroll_handle_pane_g_ParamLimits

0x77f4,	// (0x000390ba) popup_choice_list_window_ParamLimits

0x77f4,	// (0x000390ba) popup_choice_list_window

0x995c,	// (0x0003b222) choice_list_pane

0x99de,	// (0x0003b2a4) cell_toolbar_pane_t1

0x9a06,	// (0x0003b2cc) toolbar_button_pane_ParamLimits

0xaae2,	// (0x0003c3a8) ai_gene_pane_1_t2_ParamLimits

0xaae2,	// (0x0003c3a8) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x0004119f) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x0004119f) ai_gene_pane_1_t

0xc046,	// (0x0003d90c) scroll_sc2_left_pane_g1

0xc046,	// (0x0003d90c) scroll_sc2_right_pane_g1

0x24ea,	// (0x00033db0) bg_popup_sub_pane_cp10

0xc050,	// (0x0003d916) list_choice_list_pane

0xc069,	// (0x0003d92f) list_single_choice_list_pane_ParamLimits

0xc069,	// (0x0003d92f) list_single_choice_list_pane

0xc07c,	// (0x0003d942) list_single_choice_list_pane_g1

0x6c64,	// (0x0003852a) list_single_choice_list_pane_t1_ParamLimits

0x6c64,	// (0x0003852a) list_single_choice_list_pane_t1

0xc084,	// (0x0003d94a) choice_list_pane_g1

0xc08c,	// (0x0003d952) choice_list_pane_t1

0x1f82,	// (0x00033848) input_focus_pane_cp11

0x2642,	// (0x00033f08) title_pane_stacon_g2_ParamLimits

0x2642,	// (0x00033f08) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00040f5b) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00040f5b) title_pane_stacon_g

0x2c43,	// (0x00034509) cursor_press_pane

0x789c,	// (0x00039162) popup_fep_hwr_window_ParamLimits

0x789c,	// (0x00039162) popup_fep_hwr_window

0x7914,	// (0x000391da) popup_fep_vkb_window_ParamLimits

0x7914,	// (0x000391da) popup_fep_vkb_window

0xc09a,	// (0x0003d960) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x000413dc) fep_vkb_side_pane_g_ParamLimits

0x8651,	// (0x00039f17) fep_hwr_candidate_pane_ParamLimits

0x8651,	// (0x00039f17) fep_hwr_candidate_pane

0x867b,	// (0x00039f41) fep_hwr_side_pane_ParamLimits

0x867b,	// (0x00039f41) fep_hwr_side_pane

0x869b,	// (0x00039f61) fep_hwr_top_pane_ParamLimits

0x869b,	// (0x00039f61) fep_hwr_top_pane

0x86b3,	// (0x00039f79) fep_hwr_write_pane_ParamLimits

0x86b3,	// (0x00039f79) fep_hwr_write_pane

0xfb16,	// (0x000413dc) fep_vkb_side_pane_g

0xc0a2,	// (0x0003d968) fep_hwr_top_pane_g1

0xc0b4,	// (0x0003d97a) fep_hwr_top_pane_g2

0x86ed,	// (0x00039fb3) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x000413b8) fep_hwr_top_pane_g

0x8702,	// (0x00039fc8) fep_hwr_top_text_pane

0x27fa,	// (0x000340c0) fep_hwr_top_text_pane_g1

0xc0ea,	// (0x0003d9b0) fep_hwr_top_text_pane_t1

0x87f8,	// (0x0003a0be) fep_hwr_candidate_pane_g1

0xc32f,	// (0x0003dbf5) fep_vkb_keypad_pane_g3_ParamLimits

0xc32f,	// (0x0003dbf5) fep_vkb_keypad_pane_g3

0xc357,	// (0x0003dc1d) fep_vkb_keypad_pane_g4_ParamLimits

0xc357,	// (0x0003dc1d) fep_vkb_keypad_pane_g4

0xc3c6,	// (0x0003dc8c) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c6,	// (0x0003dc8c) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x000413e3) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x000413e3) fep_vkb_bottom_pane_g

0xc046,	// (0x0003d90c) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x000413ed) cell_vkb_side_pane_g

0xc451,	// (0x0003dd17) cell_vkb_side_pane_t1

0xc45f,	// (0x0003dd25) cell_vkb_side_pane_t1_copy1

0xc046,	// (0x0003d90c) bg_fep_vkb_candidate_pane_g2

0xc58b,	// (0x0003de51) cell_vkb_candidate_pane_ParamLimits

0xc0f8,	// (0x0003d9be) aid_size_cell_vkb_ParamLimits

0xc0f8,	// (0x0003d9be) aid_size_cell_vkb

0xc58b,	// (0x0003de51) cell_vkb_candidate_pane

0x881f,	// (0x0003a0e5) bg_popup_fep_shadow_pane_g1

0xc186,	// (0x0003da4c) fep_vkb_bottom_pane_ParamLimits

0xc186,	// (0x0003da4c) fep_vkb_bottom_pane

0xc1bc,	// (0x0003da82) fep_vkb_candidate_pane_ParamLimits

0xc1bc,	// (0x0003da82) fep_vkb_candidate_pane

0xc1d8,	// (0x0003da9e) fep_vkb_keypad_pane_ParamLimits

0xc1d8,	// (0x0003da9e) fep_vkb_keypad_pane

0xc217,	// (0x0003dadd) fep_vkb_side_pane_ParamLimits

0xc217,	// (0x0003dadd) fep_vkb_side_pane

0xc253,	// (0x0003db19) fep_vkb_top_pane_ParamLimits

0xc253,	// (0x0003db19) fep_vkb_top_pane

0xc288,	// (0x0003db4e) fep_vkb_top_pane_g1_ParamLimits

0xc288,	// (0x0003db4e) fep_vkb_top_pane_g1

0xc297,	// (0x0003db5d) fep_vkb_top_pane_g2_ParamLimits

0xc297,	// (0x0003db5d) fep_vkb_top_pane_g2

0xc2a6,	// (0x0003db6c) fep_vkb_top_pane_g3_ParamLimits

0xc2a6,	// (0x0003db6c) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x000413d3) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x000413d3) fep_vkb_top_pane_g

0xc2c4,	// (0x0003db8a) fep_vkb_top_text_pane_ParamLimits

0xc2c4,	// (0x0003db8a) fep_vkb_top_text_pane

0xc2d5,	// (0x0003db9b) fep_vkb_side_pane_g1_ParamLimits

0xc2d5,	// (0x0003db9b) fep_vkb_side_pane_g1

0xc31e,	// (0x0003dbe4) grid_vkb_side_pane_ParamLimits

0xc31e,	// (0x0003dbe4) grid_vkb_side_pane

0x8827,	// (0x0003a0ed) bg_popup_fep_shadow_pane_g2

0x8830,	// (0x0003a0f6) bg_popup_fep_shadow_pane_g3

0x8838,	// (0x0003a0fe) bg_popup_fep_shadow_pane_g4

0x8841,	// (0x0003a107) bg_popup_fep_shadow_pane_g5

0x884b,	// (0x0003a111) bg_popup_fep_shadow_pane_g6

0x8853,	// (0x0003a119) bg_popup_fep_shadow_pane_g7

0x2418,	// (0x00033cde) bg_popup_fep_shadow_pane_g8

0xc375,	// (0x0003dc3b) grid_vkb_keypad_number_pane_ParamLimits

0xc375,	// (0x0003dc3b) grid_vkb_keypad_number_pane

0xc385,	// (0x0003dc4b) grid_vkb_keypad_pane_ParamLimits

0xc385,	// (0x0003dc4b) grid_vkb_keypad_pane

0xc3ab,	// (0x0003dc71) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ab,	// (0x0003dc71) fep_vkb_bottom_pane_g1

0xc3d4,	// (0x0003dc9a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d4,	// (0x0003dc9a) grid_vkb_keypad_bottom_left_pane

0xc3e9,	// (0x0003dcaf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e9,	// (0x0003dcaf) grid_vkb_keypad_bottom_right_pane

0xc3fe,	// (0x0003dcc4) fep_vkb_top_text_pane_g1

0xc419,	// (0x0003dcdf) fep_vkb_top_text_pane_t1

0xc42e,	// (0x0003dcf4) cell_vkb_side_pane_ParamLimits

0xc42e,	// (0x0003dcf4) cell_vkb_side_pane

0xc046,	// (0x0003d90c) cell_vkb_side_pane_g1

0xc46d,	// (0x0003dd33) cell_vkb_keypad_pane_ParamLimits

0xc46d,	// (0x0003dd33) cell_vkb_keypad_pane

0xc4e2,	// (0x0003dda8) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x00041400) bg_popup_fep_shadow_pane_g

0x8865,	// (0x0003a12b) cell_hwr_side_pane_g1

0x8865,	// (0x0003a12b) cell_hwr_side_pane_g2

0xc4ec,	// (0x0003ddb2) cell_vkb_keypad_pane_t1

0xc4fa,	// (0x0003ddc0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fa,	// (0x0003ddc0) cell_vkb_keypad_bottom_left_pane

0xc517,	// (0x0003dddd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc517,	// (0x0003dddd) cell_vkb_keypad_bottom_right_pane

0xc046,	// (0x0003d90c) cell_vkb_keypad_bottom_left_pane_g1

0xc046,	// (0x0003d90c) cell_vkb_keypad_bottom_right_pane_g1

0xc550,	// (0x0003de16) cell_vkb_keypad_number_pane_ParamLimits

0xc550,	// (0x0003de16) cell_vkb_keypad_number_pane

0xc56f,	// (0x0003de35) cell_vkb_keypad_number_pane_g1

0xc579,	// (0x0003de3f) cell_vkb_keypad_number_pane_g2

0xc582,	// (0x0003de48) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x000413f2) cell_vkb_keypad_number_pane_g

0xc4ec,	// (0x0003ddb2) cell_vkb_keypad_number_pane_t1

0xc5a6,	// (0x0003de6c) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x00041413) cell_hwr_side_pane_g

0xc5bf,	// (0x0003de85) cell_hwr_side_pane_t1

0x886f,	// (0x0003a135) cell_hwr_side_pane_t1_copy1

0x887d,	// (0x0003a143) cell_hwr_candidate_pane_g1

0x88ac,	// (0x0003a172) cell_hwr_candidate_pane_t1

0xc046,	// (0x0003d90c) cell_vkb_candidate_pane_g2

0xc603,	// (0x0003dec9) cell_vkb_candidate_pane_t1

0x8618,	// (0x00039ede) bg_popup_fep_shadow_pane_ParamLimits

0x8618,	// (0x00039ede) bg_popup_fep_shadow_pane

0x86cd,	// (0x00039f93) bg_fep_hwr_top_pane_g4

0xc0c6,	// (0x0003d98c) bg_hwr_side_pane_g1_ParamLimits

0xc0c6,	// (0x0003d98c) bg_hwr_side_pane_g1

0x873e,	// (0x0003a004) cell_hwr_side_pane_ParamLimits

0x873e,	// (0x0003a004) cell_hwr_side_pane

0x8779,	// (0x0003a03f) fep_hwr_write_pane_g1_ParamLimits

0x8779,	// (0x0003a03f) fep_hwr_write_pane_g1

0x8786,	// (0x0003a04c) fep_hwr_write_pane_g2_ParamLimits

0x8786,	// (0x0003a04c) fep_hwr_write_pane_g2

0x8793,	// (0x0003a059) fep_hwr_write_pane_g3_ParamLimits

0x8793,	// (0x0003a059) fep_hwr_write_pane_g3

0x87a1,	// (0x0003a067) fep_hwr_write_pane_g4_ParamLimits

0x87a1,	// (0x0003a067) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x000413bf) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x000413bf) fep_hwr_write_pane_g

0x86cd,	// (0x00039f93) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x86cd,	// (0x00039f93) bg_fep_hwr_candidate_pane_g2

0x87b6,	// (0x0003a07c) cell_hwr_candidate_pane_ParamLimits

0x87b6,	// (0x0003a07c) cell_hwr_candidate_pane

0x87f8,	// (0x0003a0be) fep_hwr_candidate_pane_g1_ParamLimits

0xc126,	// (0x0003d9ec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc126,	// (0x0003d9ec) bg_popup_fep_shadow_pane_cp2

0xc2b6,	// (0x0003db7c) fep_vkb_top_pane_g4_ParamLimits

0xc2b6,	// (0x0003db7c) fep_vkb_top_pane_g4

0xc2fc,	// (0x0003dbc2) fep_vkb_side_pane_g2_ParamLimits

0xc2fc,	// (0x0003dbc2) fep_vkb_side_pane_g2

0x6956,	// (0x0003821c) list_setting_pane_t4_ParamLimits

0x6956,	// (0x0003821c) list_setting_pane_t4

0x477b,	// (0x00036041) list_setting_number_pane_t5_ParamLimits

0x477b,	// (0x00036041) list_setting_number_pane_t5

0x6ffa,	// (0x000388c0) list_double_heading_pane_cp2_ParamLimits

0x6ffa,	// (0x000388c0) list_double_heading_pane_cp2

0x2e07,	// (0x000346cd) list_double_heading_pane_g1_cp2_ParamLimits

0x2e07,	// (0x000346cd) list_double_heading_pane_g1_cp2

0xc611,	// (0x0003ded7) list_double_heading_pane_g2_cp2_ParamLimits

0xc611,	// (0x0003ded7) list_double_heading_pane_g2_cp2

0xc625,	// (0x0003deeb) list_double_heading_pane_t1_cp2_ParamLimits

0xc625,	// (0x0003deeb) list_double_heading_pane_t1_cp2

0xc63b,	// (0x0003df01) list_double_heading_pane_t2_cp2_ParamLimits

0xc63b,	// (0x0003df01) list_double_heading_pane_t2_cp2

0x1f7a,	// (0x00033840) aid_value_unit2

0x605f,	// (0x00037925) popup_preview_fixed_window

0x211c,	// (0x000339e2) bg_popup_preview_window_pane_cp02

0xc64d,	// (0x0003df13) list_preview_fixed_pane

0xc693,	// (0x0003df59) list_empty_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_empty_pane_fp

0xc693,	// (0x0003df59) list_single_cale_day_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_single_cale_day_pane_fp

0xc693,	// (0x0003df59) list_single_graphic_heading_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_single_graphic_heading_pane_fp

0xc693,	// (0x0003df59) list_single_graphic_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_single_graphic_pane_fp

0xc693,	// (0x0003df59) list_single_heading_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_single_heading_pane_fp

0xc693,	// (0x0003df59) list_single_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_single_pane_fp

0xc6a9,	// (0x0003df6f) list_single_pane_fp_g1_ParamLimits

0xc6a9,	// (0x0003df6f) list_single_pane_fp_g1

0x46af,	// (0x00035f75) list_single_pane_fp_g2_ParamLimits

0x46af,	// (0x00035f75) list_single_pane_fp_g2

0x4c9e,	// (0x00036564) list_single_pane_fp_g3_ParamLimits

0x4c9e,	// (0x00036564) list_single_pane_fp_g3

0xc6b5,	// (0x0003df7b) list_single_pane_fp_g4_ParamLimits

0xc6b5,	// (0x0003df7b) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x00041426) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x00041426) list_single_pane_fp_g

0x4cb2,	// (0x00036578) list_single_pane_fp_t1_ParamLimits

0x4cb2,	// (0x00036578) list_single_pane_fp_t1

0x4cc9,	// (0x0003658f) list_single_graphic_pane_fp_g1_ParamLimits

0x4cc9,	// (0x0003658f) list_single_graphic_pane_fp_g1

0xc6a9,	// (0x0003df6f) list_single_graphic_pane_fp_g2_ParamLimits

0xc6a9,	// (0x0003df6f) list_single_graphic_pane_fp_g2

0x46af,	// (0x00035f75) list_single_graphic_pane_fp_g3_ParamLimits

0x46af,	// (0x00035f75) list_single_graphic_pane_fp_g3

0x4c9e,	// (0x00036564) list_single_graphic_pane_fp_g4_ParamLimits

0x4c9e,	// (0x00036564) list_single_graphic_pane_fp_g4

0xc6b5,	// (0x0003df7b) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b5,	// (0x0003df7b) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0004142f) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0004142f) list_single_graphic_pane_fp_g

0x4cd5,	// (0x0003659b) list_single_graphic_pane_fp_t1_ParamLimits

0x4cd5,	// (0x0003659b) list_single_graphic_pane_fp_t1

0x4cc9,	// (0x0003658f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4cc9,	// (0x0003658f) list_single_graphic_heading_pane_fp_g1

0xc6a9,	// (0x0003df6f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6a9,	// (0x0003df6f) list_single_graphic_heading_pane_fp_g2

0x46af,	// (0x00035f75) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x46af,	// (0x00035f75) list_single_graphic_heading_pane_fp_g3

0x4c9e,	// (0x00036564) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c9e,	// (0x00036564) list_single_graphic_heading_pane_fp_g4

0xc6b5,	// (0x0003df7b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b5,	// (0x0003df7b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0004142f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0004142f) list_single_graphic_heading_pane_fp_g

0x4ceb,	// (0x000365b1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4ceb,	// (0x000365b1) list_single_graphic_heading_pane_fp_t1

0x4d01,	// (0x000365c7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4d01,	// (0x000365c7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0004143a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0004143a) list_single_graphic_heading_pane_fp_t

0x4d13,	// (0x000365d9) list_single_cale_day_pane_fp_g1_ParamLimits

0x4d13,	// (0x000365d9) list_single_cale_day_pane_fp_g1

0xc6c1,	// (0x0003df87) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c1,	// (0x0003df87) list_single_cale_day_pane_fp_g2

0x4d4b,	// (0x00036611) list_single_cale_day_pane_fp_g3_ParamLimits

0x4d4b,	// (0x00036611) list_single_cale_day_pane_fp_g3

0x4d73,	// (0x00036639) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d73,	// (0x00036639) list_single_cale_day_pane_fp_g4

0x4d97,	// (0x0003665d) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d97,	// (0x0003665d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0004143f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0004143f) list_single_cale_day_pane_fp_g

0x4dbb,	// (0x00036681) list_single_cale_day_pane_fp_t1_ParamLimits

0x4dbb,	// (0x00036681) list_single_cale_day_pane_fp_t1

0x4de1,	// (0x000366a7) list_single_cale_day_pane_fp_t2_ParamLimits

0x4de1,	// (0x000366a7) list_single_cale_day_pane_fp_t2

0x4dfa,	// (0x000366c0) list_single_cale_day_pane_fp_t3_ParamLimits

0x4dfa,	// (0x000366c0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0004144a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0004144a) list_single_cale_day_pane_fp_t

0xc6a9,	// (0x0003df6f) list_empty_pane_fp_g1_ParamLimits

0xc6a9,	// (0x0003df6f) list_empty_pane_fp_g1

0x4e13,	// (0x000366d9) list_empty_pane_fp_t1

0x4e21,	// (0x000366e7) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x00041451) list_empty_pane_fp_t

0xc6a9,	// (0x0003df6f) list_single_heading_pane_fp_g1_ParamLimits

0xc6a9,	// (0x0003df6f) list_single_heading_pane_fp_g1

0x46af,	// (0x00035f75) list_single_heading_pane_fp_g2_ParamLimits

0x46af,	// (0x00035f75) list_single_heading_pane_fp_g2

0x4c9e,	// (0x00036564) list_single_heading_pane_fp_g3_ParamLimits

0x4c9e,	// (0x00036564) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x00041456) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00041456) list_single_heading_pane_fp_g

0x4e2f,	// (0x000366f5) list_single_heading_pane_fp_t1_ParamLimits

0x4e2f,	// (0x000366f5) list_single_heading_pane_fp_t1

0x4e41,	// (0x00036707) list_single_heading_pane_fp_t2_ParamLimits

0x4e41,	// (0x00036707) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0004145d) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0004145d) list_single_heading_pane_fp_t

0x6cca,	// (0x00038590) aid_size_cell_fast

0x20ff,	// (0x000339c5) soft_indicator_pane_cp1_t1

0x6cd3,	// (0x00038599) cell_app_pane_cp2_ParamLimits

0x6cd3,	// (0x00038599) cell_app_pane_cp2

0x863a,	// (0x00039f00) fep_hwr_candidate_drop_down_list_pane

0x8812,	// (0x0003a0d8) fep_hwr_candidate_pane_g3_ParamLimits

0x8812,	// (0x0003a0d8) fep_hwr_candidate_pane_g3

0x3c5a,	// (0x00035520) fep_hwr_candidate_pane_g4_ParamLimits

0x3c5a,	// (0x00035520) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x000413cc) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x000413cc) fep_hwr_candidate_pane_g

0xc1ab,	// (0x0003da71) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1ab,	// (0x0003da71) fep_vkb_candidate_drop_down_list_pane

0xc5ae,	// (0x0003de74) fep_vkb_candidate_pane_g3

0xc5b6,	// (0x0003de7c) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x000413f9) fep_vkb_candidate_pane_g

0x887d,	// (0x0003a143) cell_hwr_candidate_pane_g1_ParamLimits

0x888b,	// (0x0003a151) cell_hwr_candidate_pane_g3_ParamLimits

0x888b,	// (0x0003a151) cell_hwr_candidate_pane_g3

0xe3c1,	// (0x0003fc87) cell_hwr_candidate_pane_g4_ParamLimits

0xe3c1,	// (0x0003fc87) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x00041418) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x00041418) cell_hwr_candidate_pane_g

0xc5cd,	// (0x0003de93) cell_vkb_candidate_pane_g3_ParamLimits

0xc5cd,	// (0x0003de93) cell_vkb_candidate_pane_g3

0xc5e8,	// (0x0003deae) cell_vkb_candidate_pane_g4_ParamLimits

0xc5e8,	// (0x0003deae) cell_vkb_candidate_pane_g4

0xc6cd,	// (0x0003df93) cell_app_pane_cp2_g1_ParamLimits

0xc6cd,	// (0x0003df93) cell_app_pane_cp2_g1

0xc6eb,	// (0x0003dfb1) cell_app_pane_cp2_g2_ParamLimits

0xc6eb,	// (0x0003dfb1) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x00041462) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x00041462) cell_app_pane_cp2_g

0xc6f7,	// (0x0003dfbd) cell_app_pane_cp2_t1_ParamLimits

0xc6f7,	// (0x0003dfbd) cell_app_pane_cp2_t1

0x23a8,	// (0x00033c6e) grid_highlight_pane_cp1_ParamLimits

0x23a8,	// (0x00033c6e) grid_highlight_pane_cp1

0x88ca,	// (0x0003a190) cell_hwr_candidate_pane_cp1_ParamLimits

0x88ca,	// (0x0003a190) cell_hwr_candidate_pane_cp1

0x887d,	// (0x0003a143) fep_hwr_candidate_drop_down_list_pane_g1

0x88e9,	// (0x0003a1af) fep_hwr_candidate_drop_down_list_pane_g2

0x88f6,	// (0x0003a1bc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00041467) fep_hwr_candidate_drop_down_list_pane_g

0x8903,	// (0x0003a1c9) fep_hwr_candidate_drop_down_list_scroll_pane

0x890c,	// (0x0003a1d2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x890c,	// (0x0003a1d2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8919,	// (0x0003a1df) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8919,	// (0x0003a1df) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8926,	// (0x0003a1ec) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8926,	// (0x0003a1ec) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8933,	// (0x0003a1f9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8933,	// (0x0003a1f9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x894e,	// (0x0003a214) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x894e,	// (0x0003a214) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8969,	// (0x0003a22f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8969,	// (0x0003a22f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8984,	// (0x0003a24a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8984,	// (0x0003a24a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x899f,	// (0x0003a265) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x899f,	// (0x0003a265) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0004146e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0004146e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc709,	// (0x0003dfcf) cell_vkb_candidate_pane_cp1_ParamLimits

0xc709,	// (0x0003dfcf) cell_vkb_candidate_pane_cp1

0xc2b6,	// (0x0003db7c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b6,	// (0x0003db7c) fep_vkb_candidate_drop_down_list_pane_g1

0xc729,	// (0x0003dfef) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc729,	// (0x0003dfef) fep_vkb_candidate_drop_down_list_pane_g2

0xc736,	// (0x0003dffc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc736,	// (0x0003dffc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0004147f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x0004147f) fep_vkb_candidate_drop_down_list_pane_g

0xc743,	// (0x0003e009) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc743,	// (0x0003e009) fep_vkb_candidate_drop_down_list_scroll_pane

0xc750,	// (0x0003e016) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc750,	// (0x0003e016) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc75d,	// (0x0003e023) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc75d,	// (0x0003e023) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc769,	// (0x0003e02f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc769,	// (0x0003e02f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc775,	// (0x0003e03b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc775,	// (0x0003e03b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc796,	// (0x0003e05c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc796,	// (0x0003e05c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7b7,	// (0x0003e07d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7b7,	// (0x0003e07d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7d8,	// (0x0003e09e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7d8,	// (0x0003e09e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7f9,	// (0x0003e0bf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7f9,	// (0x0003e0bf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x00041486) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x00041486) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6179,	// (0x00037a3f) title_pane_g1_ParamLimits

0x6186,	// (0x00037a4c) title_pane_g2_ParamLimits

0xf529,	// (0x00040def) title_pane_g_ParamLimits

0x27f2,	// (0x000340b8) aid_call2_pane

0x27ea,	// (0x000340b0) aid_call_pane

0x27fa,	// (0x000340c0) popup_clock_analogue_window_g1

0x27fa,	// (0x000340c0) popup_clock_analogue_window_g2

0x6fdb,	// (0x000388a1) popup_clock_analogue_window_g3

0x6fe4,	// (0x000388aa) popup_clock_analogue_window_g4

0x1f8c,	// (0x00033852) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00040f8a) popup_clock_analogue_window_g

0x6fec,	// (0x000388b2) popup_clock_analogue_window_t1

0x7024,	// (0x000388ea) clock_digital_number_pane_ParamLimits

0x7024,	// (0x000388ea) clock_digital_number_pane

0x7030,	// (0x000388f6) clock_digital_number_pane_cp02_ParamLimits

0x7030,	// (0x000388f6) clock_digital_number_pane_cp02

0x703c,	// (0x00038902) clock_digital_number_pane_cp03_ParamLimits

0x703c,	// (0x00038902) clock_digital_number_pane_cp03

0x7048,	// (0x0003890e) clock_digital_number_pane_cp04_ParamLimits

0x7048,	// (0x0003890e) clock_digital_number_pane_cp04

0x7054,	// (0x0003891a) clock_digital_separator_pane_ParamLimits

0x7054,	// (0x0003891a) clock_digital_separator_pane

0x7060,	// (0x00038926) popup_clock_digital_window_t1_ParamLimits

0x7060,	// (0x00038926) popup_clock_digital_window_t1

0x1f8c,	// (0x00033852) clock_digital_number_pane_g1

0x1f8c,	// (0x00033852) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00040f95) clock_digital_number_pane_g

0x1f8c,	// (0x00033852) clock_digital_separator_pane_g1

0x1f8c,	// (0x00033852) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00040f95) clock_digital_separator_pane_g

0x7d89,	// (0x0003964f) aid_fill_nsta_ParamLimits

0x7ed5,	// (0x0003979b) indicator_nsta_pane_ParamLimits

0x97ec,	// (0x0003b0b2) popup_clock_analogue_window

0x97ec,	// (0x0003b0b2) popup_clock_digital_window

0xba13,	// (0x0003d2d9) grid_indicator_nsta_pane_ParamLimits

0xba3c,	// (0x0003d302) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0004134c) clock_nsta_pane_t

0x6f06,	// (0x000387cc) aid_size_max_handle

0x6f10,	// (0x000387d6) aid_size_min_handle

0x2c43,	// (0x00034509) editor_scroll_pane

0xc814,	// (0x0003e0da) ex_editor_pane

0x24da,	// (0x00033da0) scroll_pane_cp13

0x2350,	// (0x00033c16) scroll_pane_cp14

0x2829,	// (0x000340ef) scroll_pane_cp36

0x700e,	// (0x000388d4) list_single_graphic_hl_pane_cp2_ParamLimits

0x700e,	// (0x000388d4) list_single_graphic_hl_pane_cp2

0xafb4,	// (0x0003c87a) list_single_graphic_hl_pane_ParamLimits

0xafb4,	// (0x0003c87a) list_single_graphic_hl_pane

0xc81c,	// (0x0003e0e2) aid_size_min_hl_cp1

0xc825,	// (0x0003e0eb) list_highlight_pane_cp34_ParamLimits

0xc825,	// (0x0003e0eb) list_highlight_pane_cp34

0xc836,	// (0x0003e0fc) list_single_graphic_hl_pane_g1_ParamLimits

0xc836,	// (0x0003e0fc) list_single_graphic_hl_pane_g1

0x89ba,	// (0x0003a280) list_single_graphic_hl_pane_g2_ParamLimits

0x89ba,	// (0x0003a280) list_single_graphic_hl_pane_g2

0x89ba,	// (0x0003a280) list_single_graphic_hl_pane_g3_ParamLimits

0x89ba,	// (0x0003a280) list_single_graphic_hl_pane_g3

0x485f,	// (0x00036125) list_single_graphic_hl_pane_g4_ParamLimits

0x485f,	// (0x00036125) list_single_graphic_hl_pane_g4

0x89c6,	// (0x0003a28c) list_single_graphic_hl_pane_g5_ParamLimits

0x89c6,	// (0x0003a28c) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x00041497) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x00041497) list_single_graphic_hl_pane_g

0x89da,	// (0x0003a2a0) list_single_graphic_hl_pane_t1_ParamLimits

0x89da,	// (0x0003a2a0) list_single_graphic_hl_pane_t1

0xc843,	// (0x0003e109) aid_size_min_hl_cp2

0xc84c,	// (0x0003e112) list_highlight_pane_cp34_cp2_ParamLimits

0xc84c,	// (0x0003e112) list_highlight_pane_cp34_cp2

0xc836,	// (0x0003e0fc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc836,	// (0x0003e0fc) list_single_graphic_hl_pane_g1_cp2

0xc859,	// (0x0003e11f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc859,	// (0x0003e11f) list_single_graphic_hl_pane_g2_cp2

0xc865,	// (0x0003e12b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc865,	// (0x0003e12b) list_single_graphic_hl_pane_g3_cp2

0x2ba2,	// (0x00034468) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2ba2,	// (0x00034468) list_single_graphic_hl_pane_g4_cp2

0xc873,	// (0x0003e139) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc873,	// (0x0003e139) list_single_graphic_hl_pane_g5_cp2

0x7681,	// (0x00038f47) control_pane_g4_ParamLimits

0x7681,	// (0x00038f47) control_pane_g4

0x24ea,	// (0x00033db0) bg_popup_sub_pane_cp10_ParamLimits

0xc050,	// (0x0003d916) list_choice_list_pane_ParamLimits

0xc05f,	// (0x0003d925) scroll_pane_cp23

0x211c,	// (0x000339e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64d,	// (0x0003df13) list_preview_fixed_pane_ParamLimits

0xc663,	// (0x0003df29) list_preview_fixed_pane_cp_ParamLimits

0xc663,	// (0x0003df29) list_preview_fixed_pane_cp

0xc66f,	// (0x0003df35) popup_preview_fixed_window_g1_ParamLimits

0xc66f,	// (0x0003df35) popup_preview_fixed_window_g1

0xc67b,	// (0x0003df41) popup_preview_fixed_window_g2_ParamLimits

0xc67b,	// (0x0003df41) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0004141f) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0004141f) popup_preview_fixed_window_g

0x6de2,	// (0x000386a8) aid_navi_side_left_pane_ParamLimits

0x6df7,	// (0x000386bd) aid_navi_side_right_pane_ParamLimits

0x6e0f,	// (0x000386d5) navi_icon_pane_stacon_ParamLimits

0x6e23,	// (0x000386e9) navi_navi_pane_stacon_ParamLimits

0x6e0f,	// (0x000386d5) navi_text_pane_stacon_ParamLimits

0x5f2e,	// (0x000377f4) main_text_info_pane

0xc89d,	// (0x0003e163) listscroll_text_info_pane

0xc8a5,	// (0x0003e16b) list_text_info_pane_ParamLimits

0xc8a5,	// (0x0003e16b) list_text_info_pane

0xc8b4,	// (0x0003e17a) scroll_pane_cp24_ParamLimits

0xc8b4,	// (0x0003e17a) scroll_pane_cp24

0xc8d2,	// (0x0003e198) list_text_info_pane_t1_ParamLimits

0xc8d2,	// (0x0003e198) list_text_info_pane_t1

0x7810,	// (0x000390d6) popup_fast_swap2_window_ParamLimits

0x7810,	// (0x000390d6) popup_fast_swap2_window

0xc906,	// (0x0003e1cc) aid_size_cell_fast2

0x1f82,	// (0x00033848) bg_popup_window_pane_cp17

0x9e91,	// (0x0003b757) heading_pane_cp2

0x9e99,	// (0x0003b75f) listscroll_fast2_pane

0xc910,	// (0x0003e1d6) grid_fast2_pane

0xc91a,	// (0x0003e1e0) listscroll_fast2_pane_g1

0xc922,	// (0x0003e1e8) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x000414a2) listscroll_fast2_pane_g

0x24da,	// (0x00033da0) scroll_pane_cp26

0xc92c,	// (0x0003e1f2) cell_fast2_pane_ParamLimits

0xc92c,	// (0x0003e1f2) cell_fast2_pane

0xc941,	// (0x0003e207) cell_fast2_pane_g1

0xc94a,	// (0x0003e210) cell_fast2_pane_g2

0xc953,	// (0x0003e219) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x000414a7) cell_fast2_pane_g

0x2287,	// (0x00033b4d) grid_highlight_pane_cp9

0x77d8,	// (0x0003909e) main_eswt_pane_ParamLimits

0x77d8,	// (0x0003909e) main_eswt_pane

0xc8c9,	// (0x0003e18f) list_single_text_info_pane

0xc95b,	// (0x0003e221) eswt_ctrl_button_pane

0xc95b,	// (0x0003e221) eswt_ctrl_canvas_pane

0xc963,	// (0x0003e229) eswt_ctrl_combo_pane

0xc95b,	// (0x0003e221) eswt_ctrl_default_pane

0xc95b,	// (0x0003e221) eswt_ctrl_label_pane

0xc96b,	// (0x0003e231) eswt_ctrl_wait_pane

0xc973,	// (0x0003e239) eswt_shell_pane

0x1f82,	// (0x00033848) listscroll_eswt_app_pane

0xc993,	// (0x0003e259) popup_eswt_tasktip_window_ParamLimits

0xc993,	// (0x0003e259) popup_eswt_tasktip_window

0x9a9e,	// (0x0003b364) bg_popup_window_pane_cp18

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_ParamLimits

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_ParamLimits

0xc9b1,	// (0x0003e277) eswt_control_pane_g2

0xc9be,	// (0x0003e284) eswt_control_pane_g3_ParamLimits

0xc9be,	// (0x0003e284) eswt_control_pane_g3

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_ParamLimits

0xc9cb,	// (0x0003e291) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x000414ae) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x000414ae) eswt_control_pane_g

0x23a8,	// (0x00033c6e) bg_button_pane_ParamLimits

0x23a8,	// (0x00033c6e) bg_button_pane

0x229c,	// (0x00033b62) common_borders_pane_copy2_ParamLimits

0x229c,	// (0x00033b62) common_borders_pane_copy2

0xc9d8,	// (0x0003e29e) control_button_pane_g1_ParamLimits

0xc9d8,	// (0x0003e29e) control_button_pane_g1

0xc9e4,	// (0x0003e2aa) control_button_pane_g2_ParamLimits

0xc9e4,	// (0x0003e2aa) control_button_pane_g2

0xc9f0,	// (0x0003e2b6) control_button_pane_g3_ParamLimits

0xc9f0,	// (0x0003e2b6) control_button_pane_g3

0x0002,

0xfbf1,	// (0x000414b7) control_button_pane_g_ParamLimits

0xfbf1,	// (0x000414b7) control_button_pane_g

0xca04,	// (0x0003e2ca) control_button_pane_t1

0xca12,	// (0x0003e2d8) control_button_pane_t2

0x0001,

0xfbf8,	// (0x000414be) control_button_pane_t

0x9a12,	// (0x0003b2d8) bg_button_pane_g1

0x9a22,	// (0x0003b2e8) bg_button_pane_g2

0x9a1a,	// (0x0003b2e0) bg_button_pane_g3

0x9a32,	// (0x0003b2f8) bg_button_pane_g4

0x9a2a,	// (0x0003b2f0) bg_button_pane_g5

0x9a3a,	// (0x0003b300) bg_button_pane_g6

0x9a42,	// (0x0003b308) bg_button_pane_g7

0x9a52,	// (0x0003b318) bg_button_pane_g8

0x9a4a,	// (0x0003b310) bg_button_pane_g9

0x0008,

0xf82d,	// (0x000410f3) bg_button_pane_g

0xc00b,	// (0x0003d8d1) common_borders_pane_ParamLimits

0xc00b,	// (0x0003d8d1) common_borders_pane

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy1_ParamLimits

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy1

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy1_ParamLimits

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy1

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy1_ParamLimits

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy1

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy1_ParamLimits

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy1

0xc046,	// (0x0003d90c) bg_eswt_ctrl_canvas_pane_g1

0xc00b,	// (0x0003d8d1) common_borders_pane_cp2_ParamLimits

0xc00b,	// (0x0003d8d1) common_borders_pane_cp2

0xc00b,	// (0x0003d8d1) common_borders_pane_cp3_ParamLimits

0xc00b,	// (0x0003d8d1) common_borders_pane_cp3

0xca20,	// (0x0003e2e6) separator_horizontal_pane

0xca28,	// (0x0003e2ee) separator_vertical_pane

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy2_ParamLimits

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy2

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy2_ParamLimits

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy2

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy2_ParamLimits

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy2

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy2_ParamLimits

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy2

0x1f82,	// (0x00033848) common_borders_pane_cp4

0xca31,	// (0x0003e2f7) separator_horizontal_pane_g1

0xca3a,	// (0x0003e300) separator_horizontal_pane_g2

0xca43,	// (0x0003e309) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x000414c3) separator_horizontal_pane_g

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy3_ParamLimits

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy3

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy3_ParamLimits

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy3

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy3_ParamLimits

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy3

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy3_ParamLimits

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy3

0x1f82,	// (0x00033848) common_borders_pane_cp5

0xca4c,	// (0x0003e312) separator_vertical_pane_g1

0xca55,	// (0x0003e31b) separator_vertical_pane_g2

0xca5e,	// (0x0003e324) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x000414ca) separator_vertical_pane_g

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy4_ParamLimits

0xc9a4,	// (0x0003e26a) eswt_control_pane_g1_copy4

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy4_ParamLimits

0xc9b1,	// (0x0003e277) eswt_control_pane_g2_copy4

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy4_ParamLimits

0xc9be,	// (0x0003e284) eswt_control_pane_g3_copy4

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy4_ParamLimits

0xc9cb,	// (0x0003e291) eswt_control_pane_g4_copy4

0xca67,	// (0x0003e32d) eswt_ctrl_combo_button_pane

0xca6f,	// (0x0003e335) eswt_ctrl_input_pane

0xca77,	// (0x0003e33d) popup_choice_list_window_cp70

0xca7f,	// (0x0003e345) eswt_ctrl_input_pane_t1

0x1f82,	// (0x00033848) input_focus_pane_cp70

0xc00b,	// (0x0003d8d1) bg_button_pane_cp70_ParamLimits

0xc00b,	// (0x0003d8d1) bg_button_pane_cp70

0xca8d,	// (0x0003e353) eswt_ctrl_combo_button_pane_g1

0xca95,	// (0x0003e35b) wait_bar_pane_cp70

0x9a9e,	// (0x0003b364) bg_popup_window_pane_cp70_ParamLimits

0x9a9e,	// (0x0003b364) bg_popup_window_pane_cp70

0xca9d,	// (0x0003e363) popup_eswt_tasktip_window_t1

0xcab3,	// (0x0003e379) wait_bar_pane_cp71_ParamLimits

0xcab3,	// (0x0003e379) wait_bar_pane_cp71

0xcabf,	// (0x0003e385) grid_eswt_app_pane

0x26d6,	// (0x00033f9c) scroll_pane_cp70

0xcac8,	// (0x0003e38e) cell_eswt_app_pane_ParamLimits

0xcac8,	// (0x0003e38e) cell_eswt_app_pane

0xcaf8,	// (0x0003e3be) cell_eswt_app_pane_g1_ParamLimits

0xcaf8,	// (0x0003e3be) cell_eswt_app_pane_g1

0xcb27,	// (0x0003e3ed) cell_eswt_app_pane_g2_ParamLimits

0xcb27,	// (0x0003e3ed) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x000414d1) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x000414d1) cell_eswt_app_pane_g

0xcb4b,	// (0x0003e411) cell_eswt_app_pane_t1_ParamLimits

0xcb4b,	// (0x0003e411) cell_eswt_app_pane_t1

0xcb7d,	// (0x0003e443) grid_highlight_pane_cp70_ParamLimits

0xcb7d,	// (0x0003e443) grid_highlight_pane_cp70

0x2b5e,	// (0x00034424) set_content_pane_g1

0x7617,	// (0x00038edd) status_small_volume_pane

0x89f0,	// (0x0003a2b6) status_small_volume_pane_g1

0x89f8,	// (0x0003a2be) volume_small2_pane

0x8a01,	// (0x0003a2c7) volume_small2_pane_g1

0x8a0a,	// (0x0003a2d0) volume_small2_pane_g2

0x8a13,	// (0x0003a2d9) volume_small2_pane_g3

0x8a1c,	// (0x0003a2e2) volume_small2_pane_g4

0x8a25,	// (0x0003a2eb) volume_small2_pane_g5

0x8a2e,	// (0x0003a2f4) volume_small2_pane_g6

0x8a37,	// (0x0003a2fd) volume_small2_pane_g7

0x8a40,	// (0x0003a306) volume_small2_pane_g8

0x8a49,	// (0x0003a30f) volume_small2_pane_g9

0x8a52,	// (0x0003a318) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x000414d6) volume_small2_pane_g

0xc3fe,	// (0x0003dcc4) fep_vkb_top_text_pane_g1_ParamLimits

0xc419,	// (0x0003dcdf) fep_vkb_top_text_pane_t1_ParamLimits

0xc687,	// (0x0003df4d) popup_preview_fixed_window_g3_ParamLimits

0xc687,	// (0x0003df4d) popup_preview_fixed_window_g3

0x7cbf,	// (0x00039585) popup_toolbar_trans_pane

0xaddc,	// (0x0003c6a2) aid_height_set_list_ParamLimits

0xaded,	// (0x0003c6b3) aid_size_parent_ParamLimits

0x24ea,	// (0x00033db0) list_highlight_pane_cp2_ParamLimits

0x2b5e,	// (0x00034424) set_content_pane_g1_ParamLimits

0xafd3,	// (0x0003c899) list_single_image_pane_ParamLimits

0xafd3,	// (0x0003c899) list_single_image_pane

0xcb89,	// (0x0003e44f) aid_size_cell_image_ParamLimits

0xcb89,	// (0x0003e44f) aid_size_cell_image

0xcb96,	// (0x0003e45c) grid_single_image_pane_ParamLimits

0xcb96,	// (0x0003e45c) grid_single_image_pane

0x2e13,	// (0x000346d9) list_single_image_pane_g1_ParamLimits

0x2e13,	// (0x000346d9) list_single_image_pane_g1

0xcba2,	// (0x0003e468) list_single_image_pane_g2_ParamLimits

0xcba2,	// (0x0003e468) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x000414eb) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x000414eb) list_single_image_pane_g

0xcbb6,	// (0x0003e47c) list_single_image_pane_t1_ParamLimits

0xcbb6,	// (0x0003e47c) list_single_image_pane_t1

0xcbcc,	// (0x0003e492) cell_image_list_pane_ParamLimits

0xcbcc,	// (0x0003e492) cell_image_list_pane

0xcbe0,	// (0x0003e4a6) cell_image_list_pane_g1

0xcbe9,	// (0x0003e4af) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x000414f0) cell_image_list_pane_g

0xcbf2,	// (0x0003e4b8) aid_size_cell_tb_trans_pane

0x23a8,	// (0x00033c6e) bg_tb_trans_pane

0xcc04,	// (0x0003e4ca) grid_tb_trans_pane

0x9a12,	// (0x0003b2d8) bg_tb_trans_pane_g1

0x9a22,	// (0x0003b2e8) bg_tb_trans_pane_g2

0x9a1a,	// (0x0003b2e0) bg_tb_trans_pane_g3

0x9a32,	// (0x0003b2f8) bg_tb_trans_pane_g4

0x9a2a,	// (0x0003b2f0) bg_tb_trans_pane_g5

0x9a52,	// (0x0003b318) bg_tb_trans_pane_g6

0x9a4a,	// (0x0003b310) bg_tb_trans_pane_g7

0x9a3a,	// (0x0003b300) bg_tb_trans_pane_g8

0x9a42,	// (0x0003b308) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x000414f5) bg_tb_trans_pane_g

0xcc18,	// (0x0003e4de) cell_toolbar_trans_pane_ParamLimits

0xcc18,	// (0x0003e4de) cell_toolbar_trans_pane

0xc046,	// (0x0003d90c) cell_toolbar_trans_pane_g1

0xbc11,	// (0x0003d4d7) list_form2_midp_pane_t1

0xbc1f,	// (0x0003d4e5) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x00041392) list_form2_midp_pane_t

0xbc2d,	// (0x0003d4f3) scroll_pane_cp51_ParamLimits

0xbde9,	// (0x0003d6af) form2_midp_wait_pane_g1

0xbdf2,	// (0x0003d6b8) form2_midp_wait_pane_g2

0xbdfb,	// (0x0003d6c1) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x000413a7) form2_midp_wait_pane_g

0x1ff2,	// (0x000338b8) list_highlight_pane_cp21_ParamLimits

0xbe43,	// (0x0003d709) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe52,	// (0x0003d718) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x844e,	// (0x00039d14) list_single_2graphic_im_pane_ParamLimits

0x844e,	// (0x00039d14) list_single_2graphic_im_pane

0xcc3e,	// (0x0003e504) list_single_2graphic_im_pane_g1_ParamLimits

0xcc3e,	// (0x0003e504) list_single_2graphic_im_pane_g1

0xcc4f,	// (0x0003e515) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4f,	// (0x0003e515) list_single_2graphic_im_pane_g2

0xcc5b,	// (0x0003e521) list_single_2graphic_im_pane_g3_ParamLimits

0xcc5b,	// (0x0003e521) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x00041508) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x00041508) list_single_2graphic_im_pane_g

0xcc7b,	// (0x0003e541) list_single_2graphic_im_pane_t1_ParamLimits

0xcc7b,	// (0x0003e541) list_single_2graphic_im_pane_t1

0xc693,	// (0x0003df59) list_single_graphic_2heading_pane_fp_ParamLimits

0xc693,	// (0x0003df59) list_single_graphic_2heading_pane_fp

0x4cc9,	// (0x0003658f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4cc9,	// (0x0003658f) list_single_graphic_2heading_pane_fp_g1

0xc6a9,	// (0x0003df6f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6a9,	// (0x0003df6f) list_single_graphic_2heading_pane_fp_g2

0x46af,	// (0x00035f75) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x46af,	// (0x00035f75) list_single_graphic_2heading_pane_fp_g3

0x4c9e,	// (0x00036564) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c9e,	// (0x00036564) list_single_graphic_2heading_pane_fp_g4

0xc6b5,	// (0x0003df7b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b5,	// (0x0003df7b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0004142f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0004142f) list_single_graphic_2heading_pane_fp_g

0x4e57,	// (0x0003671d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4e57,	// (0x0003671d) list_single_graphic_2heading_pane_fp_t1

0x4d01,	// (0x000365c7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4d01,	// (0x000365c7) list_single_graphic_2heading_pane_fp_t2

0x4e6d,	// (0x00036733) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4e6d,	// (0x00036733) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x00041511) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x00041511) list_single_graphic_2heading_pane_fp_t

0xc0d2,	// (0x0003d998) fep_hwr_write_pane_g5_ParamLimits

0xc0d2,	// (0x0003d998) fep_hwr_write_pane_g5

0xc0de,	// (0x0003d9a4) fep_hwr_write_pane_g6_ParamLimits

0xc0de,	// (0x0003d9a4) fep_hwr_write_pane_g6

0xc973,	// (0x0003e239) eswt_shell_pane_ParamLimits

0x9a9e,	// (0x0003b364) bg_popup_window_pane_cp18_ParamLimits

0xad35,	// (0x0003c5fb) heading_pane_cp70

0xca9d,	// (0x0003e363) popup_eswt_tasktip_window_t1_ParamLimits

0x7dde,	// (0x000396a4) aid_touch_tab_arrow_left

0x7ded,	// (0x000396b3) aid_touch_tab_arrow_right

0x6197,	// (0x00037a5d) title_pane_g3_ParamLimits

0x6197,	// (0x00037a5d) title_pane_g3

0x2370,	// (0x00033c36) set_value_pane_g1

0x7cbf,	// (0x00039585) popup_toolbar_trans_pane_ParamLimits

0xcbf2,	// (0x0003e4b8) aid_size_cell_tb_trans_pane_ParamLimits

0x23a8,	// (0x00033c6e) bg_tb_trans_pane_ParamLimits

0xcc04,	// (0x0003e4ca) grid_tb_trans_pane_ParamLimits

0x211c,	// (0x000339e2) cont_note_pane_ParamLimits

0x211c,	// (0x000339e2) cont_note_pane

0x229c,	// (0x00033b62) cont_snote2_single_text_pane_ParamLimits

0x229c,	// (0x00033b62) cont_snote2_single_text_pane

0x229c,	// (0x00033b62) cont_snote2_single_graphic_pane_ParamLimits

0x229c,	// (0x00033b62) cont_snote2_single_graphic_pane

0xa0b8,	// (0x0003b97e) cont_note_wait_pane_ParamLimits

0xa0b8,	// (0x0003b97e) cont_note_wait_pane

0xa0b8,	// (0x0003b97e) cont_note_image_pane_ParamLimits

0xa0b8,	// (0x0003b97e) cont_note_image_pane

0xccac,	// (0x0003e572) popup_note2_window_g1_ParamLimits

0xccac,	// (0x0003e572) popup_note2_window_g1

0xccdd,	// (0x0003e5a3) popup_note2_window_t1_ParamLimits

0xccdd,	// (0x0003e5a3) popup_note2_window_t1

0xcd22,	// (0x0003e5e8) popup_note2_window_t2_ParamLimits

0xcd22,	// (0x0003e5e8) popup_note2_window_t2

0xcd67,	// (0x0003e62d) popup_note2_window_t3_ParamLimits

0xcd67,	// (0x0003e62d) popup_note2_window_t3

0xcdac,	// (0x0003e672) popup_note2_window_t4_ParamLimits

0xcdac,	// (0x0003e672) popup_note2_window_t4

0x21a0,	// (0x00033a66) popup_note2_window_t5_ParamLimits

0x21a0,	// (0x00033a66) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0004151d) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0004151d) popup_note2_window_t

0xcddb,	// (0x0003e6a1) popup_note2_image_window_g1_ParamLimits

0xcddb,	// (0x0003e6a1) popup_note2_image_window_g1

0xcde7,	// (0x0003e6ad) popup_note2_image_window_g2_ParamLimits

0xcde7,	// (0x0003e6ad) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x00041528) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x00041528) popup_note2_image_window_g

0xcdf9,	// (0x0003e6bf) popup_note2_image_window_t1_ParamLimits

0xcdf9,	// (0x0003e6bf) popup_note2_image_window_t1

0xce11,	// (0x0003e6d7) popup_note2_image_window_t2_ParamLimits

0xce11,	// (0x0003e6d7) popup_note2_image_window_t2

0xce29,	// (0x0003e6ef) popup_note2_image_window_t3_ParamLimits

0xce29,	// (0x0003e6ef) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0004152d) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0004152d) popup_note2_image_window_t

0xa0c6,	// (0x0003b98c) popup_note2_wait_window_g1_ParamLimits

0xa0c6,	// (0x0003b98c) popup_note2_wait_window_g1

0xa0d2,	// (0x0003b998) popup_note2_wait_window_g2_ParamLimits

0xa0d2,	// (0x0003b998) popup_note2_wait_window_g2

0xa0de,	// (0x0003b9a4) popup_note2_wait_window_g3_ParamLimits

0xa0de,	// (0x0003b9a4) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x000410d5) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x000410d5) popup_note2_wait_window_g

0xce45,	// (0x0003e70b) popup_note2_wait_window_t1_ParamLimits

0xce45,	// (0x0003e70b) popup_note2_wait_window_t1

0xce63,	// (0x0003e729) popup_note2_wait_window_t2_ParamLimits

0xce63,	// (0x0003e729) popup_note2_wait_window_t2

0xce81,	// (0x0003e747) popup_note2_wait_window_t3_ParamLimits

0xce81,	// (0x0003e747) popup_note2_wait_window_t3

0xce93,	// (0x0003e759) popup_note2_wait_window_t4_ParamLimits

0xce93,	// (0x0003e759) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x00041534) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x00041534) popup_note2_wait_window_t

0xcea5,	// (0x0003e76b) wait_bar2_pane_ParamLimits

0xcea5,	// (0x0003e76b) wait_bar2_pane

0xcebd,	// (0x0003e783) popup_snote2_single_text_window_g1_ParamLimits

0xcebd,	// (0x0003e783) popup_snote2_single_text_window_g1

0xcee5,	// (0x0003e7ab) popup_snote2_single_text_window_t1_ParamLimits

0xcee5,	// (0x0003e7ab) popup_snote2_single_text_window_t1

0xcf31,	// (0x0003e7f7) popup_snote2_single_text_window_t2_ParamLimits

0xcf31,	// (0x0003e7f7) popup_snote2_single_text_window_t2

0xcf7d,	// (0x0003e843) popup_snote2_single_text_window_t3_ParamLimits

0xcf7d,	// (0x0003e843) popup_snote2_single_text_window_t3

0xcfbe,	// (0x0003e884) popup_snote2_single_text_window_t4_ParamLimits

0xcfbe,	// (0x0003e884) popup_snote2_single_text_window_t4

0xcff4,	// (0x0003e8ba) popup_snote2_single_text_window_t5_ParamLimits

0xcff4,	// (0x0003e8ba) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0004153d) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0004153d) popup_snote2_single_text_window_t

0xd01f,	// (0x0003e8e5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01f,	// (0x0003e8e5) popup_snote2_single_graphic_window_g1

0xd047,	// (0x0003e90d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd047,	// (0x0003e90d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x00041548) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x00041548) popup_snote2_single_graphic_window_g

0xd06f,	// (0x0003e935) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06f,	// (0x0003e935) popup_snote2_single_graphic_window_t1

0xd0bb,	// (0x0003e981) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0bb,	// (0x0003e981) popup_snote2_single_graphic_window_t2

0xcf7d,	// (0x0003e843) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7d,	// (0x0003e843) popup_snote2_single_graphic_window_t3

0xcfbe,	// (0x0003e884) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbe,	// (0x0003e884) popup_snote2_single_graphic_window_t4

0xcff4,	// (0x0003e8ba) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff4,	// (0x0003e8ba) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0004154d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0004154d) popup_snote2_single_graphic_window_t

0xbaea,	// (0x0003d3b0) clock_nsta_pane_cp2_t1

0xbaea,	// (0x0003d3b0) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x00041368) clock_nsta_pane_cp2_t

0x6a8a,	// (0x00038350) form_field_data_wide_pane_g1_ParamLimits

0x23b6,	// (0x00033c7c) form_field_data_wide_pane_g2_ParamLimits

0x23b6,	// (0x00033c7c) form_field_data_wide_pane_g2

0x23c2,	// (0x00033c88) form_field_data_wide_pane_g3_ParamLimits

0x23c2,	// (0x00033c88) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00040f0d) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00040f0d) form_field_data_wide_pane_g

0xb9c6,	// (0x0003d28c) grid_touch_3_pane_ParamLimits

0xb9c6,	// (0x0003d28c) grid_touch_3_pane

0xd107,	// (0x0003e9cd) cell_touch_3_pane_ParamLimits

0xd107,	// (0x0003e9cd) cell_touch_3_pane

0xc046,	// (0x0003d90c) cell_touch_3_pane_g1

0xc046,	// (0x0003d90c) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x000413ed) cell_touch_3_pane_g

0x21d2,	// (0x00033a98) cont_query_data_pane

0x21da,	// (0x00033aa0) cont_query_data_pane_cp1

0xd135,	// (0x0003e9fb) button_value_adjust_pane_cp7

0xd13d,	// (0x0003ea03) query_popup_pane_cp3

0x285b,	// (0x00034121) bg_popup_sub_pane_cp22_ParamLimits

0x70da,	// (0x000389a0) navi_navi_volume_pane_cp2

0x70f2,	// (0x000389b8) popup_side_volume_key_window_g2

0x70fe,	// (0x000389c4) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00040fa3) popup_side_volume_key_window_g

0x7118,	// (0x000389de) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00040faa) popup_side_volume_key_window_t

0x7392,	// (0x00038c58) popup_side_volume_key_window_ParamLimits

0x6880,	// (0x00038146) list_double_graphic_pane_g4_ParamLimits

0x6880,	// (0x00038146) list_double_graphic_pane_g4

0x8493,	// (0x00039d59) list_single_2heading_msg_pane_ParamLimits

0x8493,	// (0x00039d59) list_single_2heading_msg_pane

0x8a5b,	// (0x0003a321) list_single_2heading_msg_pane_g1_ParamLimits

0x8a5b,	// (0x0003a321) list_single_2heading_msg_pane_g1

0x45ea,	// (0x00035eb0) list_single_2heading_msg_pane_g2_ParamLimits

0x45ea,	// (0x00035eb0) list_single_2heading_msg_pane_g2

0x4a1f,	// (0x000362e5) list_single_2heading_msg_pane_g3_ParamLimits

0x4a1f,	// (0x000362e5) list_single_2heading_msg_pane_g3

0x4e8d,	// (0x00036753) list_single_2heading_msg_pane_g4_ParamLimits

0x4e8d,	// (0x00036753) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x00041558) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x00041558) list_single_2heading_msg_pane_g

0x8a67,	// (0x0003a32d) list_single_2heading_msg_pane_t1_ParamLimits

0x8a67,	// (0x0003a32d) list_single_2heading_msg_pane_t1

0x8a8f,	// (0x0003a355) list_single_2heading_msg_pane_t2_ParamLimits

0x8a8f,	// (0x0003a355) list_single_2heading_msg_pane_t2

0x8ac3,	// (0x0003a389) list_single_2heading_msg_pane_t3_ParamLimits

0x8ac3,	// (0x0003a389) list_single_2heading_msg_pane_t3

0x4ea5,	// (0x0003676b) list_single_2heading_msg_pane_t4_ParamLimits

0x4ea5,	// (0x0003676b) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x00041561) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x00041561) list_single_2heading_msg_pane_t

0x1fa0,	// (0x00033866) title_pane_g4_ParamLimits

0x1fa0,	// (0x00033866) title_pane_g4

0x6d33,	// (0x000385f9) title_pane_stacon_g3_ParamLimits

0x6d33,	// (0x000385f9) title_pane_stacon_g3

0xcc6f,	// (0x0003e535) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6f,	// (0x0003e535) list_single_2graphic_im_pane_g4

0xaaff,	// (0x0003c3c5) popup_side_volume_key_window_cp

0xb31c,	// (0x0003cbe2) main_idle_act2_pane_t1

0x8062,	// (0x00039928) toolbar_button_pane_g10

0x6752,	// (0x00038018) popup_toolbar_window_cp1

0xbadb,	// (0x0003d3a1) clock_nsta_pane_cp_t1

0xbadb,	// (0x0003d3a1) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x00041363) clock_nsta_pane_cp_t

0x70da,	// (0x000389a0) navi_navi_volume_pane_cp2_ParamLimits

0x70e6,	// (0x000389ac) popup_side_volume_key_window_g1_ParamLimits

0x70f2,	// (0x000389b8) popup_side_volume_key_window_g2_ParamLimits

0x70fe,	// (0x000389c4) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00040fa3) popup_side_volume_key_window_g_ParamLimits

0x8626,	// (0x00039eec) fep_hwr_aid_pane

0x86cd,	// (0x00039f93) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0a2,	// (0x0003d968) fep_hwr_top_pane_g1_ParamLimits

0xc0b4,	// (0x0003d97a) fep_hwr_top_pane_g2_ParamLimits

0x86ed,	// (0x00039fb3) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x000413b8) fep_hwr_top_pane_g_ParamLimits

0x8702,	// (0x00039fc8) fep_hwr_top_text_pane_ParamLimits

0xa8c2,	// (0x0003c188) aid_touch_tab_arrow_arrow_2

0xa8cb,	// (0x0003c191) aid_touch_tab_arrow_left_2

0x863a,	// (0x00039f00) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8671,	// (0x00039f37) fep_hwr_prediction_pane

0xc20d,	// (0x0003dad3) fep_vkb_prediction_pane

0xc30a,	// (0x0003dbd0) fep_vkb_side_pane_g3_ParamLimits

0xc30a,	// (0x0003dbd0) fep_vkb_side_pane_g3

0x887d,	// (0x0003a143) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x88e9,	// (0x0003a1af) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x88f6,	// (0x0003a1bc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x00041467) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8afc,	// (0x0003a3c2) fep_hwr_prediction_pane_g1

0x8b06,	// (0x0003a3cc) fep_hwr_prediction_pane_g2

0x8b0e,	// (0x0003a3d4) fep_hwr_prediction_pane_g3

0x8b16,	// (0x0003a3dc) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0004156a) fep_hwr_prediction_pane_g

0xd162,	// (0x0003ea28) fep_vkb_prediction_pane_g1

0xd16c,	// (0x0003ea32) fep_vkb_prediction_pane_g2

0xd174,	// (0x0003ea3a) fep_vkb_prediction_pane_g3

0xd17c,	// (0x0003ea42) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x00041573) fep_vkb_prediction_pane_g

0x8395,	// (0x00039c5b) slider_set_pane_g3

0x83a9,	// (0x00039c6f) slider_set_pane_g4

0x83c1,	// (0x00039c87) slider_set_pane_g5

0x8395,	// (0x00039c5b) slider_set_pane_g6

0x83d7,	// (0x00039c9d) slider_set_pane_g7

0xaf4e,	// (0x0003c814) slider_form_pane_g3

0xaf57,	// (0x0003c81d) slider_form_pane_g4

0xaf5f,	// (0x0003c825) slider_form_pane_g5

0xaf4e,	// (0x0003c814) slider_form_pane_g6

0xaf67,	// (0x0003c82d) slider_form_pane_g7

0xb5c8,	// (0x0003ce8e) slider_set_pane_vc_g3

0xb5d1,	// (0x0003ce97) slider_set_pane_vc_g4

0xb5da,	// (0x0003cea0) slider_set_pane_vc_g5

0xb5c8,	// (0x0003ce8e) slider_set_pane_vc_g6

0xb5e3,	// (0x0003cea9) slider_set_pane_vc_g7

0xb799,	// (0x0003d05f) slider_form_pane_vc_g1

0xb7a2,	// (0x0003d068) slider_form_pane_vc_g2

0xb7ab,	// (0x0003d071) slider_form_pane_vc_g3

0xb799,	// (0x0003d05f) slider_form_pane_vc_g4

0xb7b4,	// (0x0003d07a) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x00041335) slider_form_pane_vc_g

0x5f2e,	// (0x000377f4) main_idle_act3_pane

0xd184,	// (0x0003ea4a) ai3_links_pane

0xd18d,	// (0x0003ea53) popup_ai3_data_window_ParamLimits

0xd18d,	// (0x0003ea53) popup_ai3_data_window

0x1f82,	// (0x00033848) grid_ai3_links_pane

0xd1a5,	// (0x0003ea6b) cell_ai3_links_pane_ParamLimits

0xd1a5,	// (0x0003ea6b) cell_ai3_links_pane

0xd1bd,	// (0x0003ea83) bg_popup_sub_pane_cp11

0xd1ca,	// (0x0003ea90) cell_ai3_links_pane_g1

0x1f82,	// (0x00033848) bg_popup_sub_pane_cp12

0xd1ef,	// (0x0003eab5) heading_ai3_data_pane

0xd1f7,	// (0x0003eabd) list_ai3_gene_pane

0xd203,	// (0x0003eac9) popup_ai3_data_window_g1

0xd20b,	// (0x0003ead1) heading_ai3_data_pane_g1

0xd213,	// (0x0003ead9) heading_ai3_data_pane_t1

0xd221,	// (0x0003eae7) list_double_ai3_gene_pane_ParamLimits

0xd221,	// (0x0003eae7) list_double_ai3_gene_pane

0xd22e,	// (0x0003eaf4) list_single_ai3_gene_pane_ParamLimits

0xd22e,	// (0x0003eaf4) list_single_ai3_gene_pane

0xc00b,	// (0x0003d8d1) list_highlight_pane_cp7_ParamLimits

0xc00b,	// (0x0003d8d1) list_highlight_pane_cp7

0xd23b,	// (0x0003eb01) list_single_a13_gene_pane_t1_ParamLimits

0xd23b,	// (0x0003eb01) list_single_a13_gene_pane_t1

0xd252,	// (0x0003eb18) list_single_ai3_gene_pane_g1

0xd25b,	// (0x0003eb21) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0004157c) list_single_ai3_gene_pane_g

0xd263,	// (0x0003eb29) list_double_ai3_gene_pane_g1_ParamLimits

0xd263,	// (0x0003eb29) list_double_ai3_gene_pane_g1

0xd26f,	// (0x0003eb35) list_double_ai3_gene_pane_t1_ParamLimits

0xd26f,	// (0x0003eb35) list_double_ai3_gene_pane_t1

0xd28b,	// (0x0003eb51) list_double_ai3_gene_pane_t2_ParamLimits

0xd28b,	// (0x0003eb51) list_double_ai3_gene_pane_t2

0xd2a0,	// (0x0003eb66) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a0,	// (0x0003eb66) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x00041581) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x00041581) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e83,	// (0x00036749) aid_size_min_col_2

0xd14e,	// (0x0003ea14) aid_size_min_msg_ParamLimits

0xd14e,	// (0x0003ea14) aid_size_min_msg

0xc40a,	// (0x0003dcd0) fep_vkb_top_text_pane_g2_ParamLimits

0xc40a,	// (0x0003dcd0) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x000413e8) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x000413e8) fep_vkb_top_text_pane_g

0x5f2e,	// (0x000377f4) main_hc_apps_shell_pane

0xd2bd,	// (0x0003eb83) grid_hc_apps_pane_ParamLimits

0xd2bd,	// (0x0003eb83) grid_hc_apps_pane

0xd2cf,	// (0x0003eb95) list_hc_apps_pane

0xd2d7,	// (0x0003eb9d) scroll_pane_cp37_ParamLimits

0xd2d7,	// (0x0003eb9d) scroll_pane_cp37

0xd2e3,	// (0x0003eba9) cell_hc_apps_pane_ParamLimits

0xd2e3,	// (0x0003eba9) cell_hc_apps_pane

0xd391,	// (0x0003ec57) cell_hc_apps_pane_g1_ParamLimits

0xd391,	// (0x0003ec57) cell_hc_apps_pane_g1

0xd3c1,	// (0x0003ec87) cell_hc_apps_pane_g2_ParamLimits

0xd3c1,	// (0x0003ec87) cell_hc_apps_pane_g2

0xd3dd,	// (0x0003eca3) cell_hc_apps_pane_g3_ParamLimits

0xd3dd,	// (0x0003eca3) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x00041588) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x00041588) cell_hc_apps_pane_g

0xd3ff,	// (0x0003ecc5) cell_hc_apps_pane_t1_ParamLimits

0xd3ff,	// (0x0003ecc5) cell_hc_apps_pane_t1

0x211c,	// (0x000339e2) grid_highlight_pane_cp10_ParamLimits

0x211c,	// (0x000339e2) grid_highlight_pane_cp10

0xd43f,	// (0x0003ed05) list_single_hc_apps_pane_ParamLimits

0xd43f,	// (0x0003ed05) list_single_hc_apps_pane

0xd4a2,	// (0x0003ed68) list_single_hc_apps_pane_g1

0x8b1e,	// (0x0003a3e4) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0004158f) list_single_hc_apps_pane_g

0x8b37,	// (0x0003a3fd) list_single_hc_apps_pane_g2_copy1

0x8b53,	// (0x0003a419) list_single_hc_apps_pane_t1

0x1ff2,	// (0x000338b8) bg_set_opt_pane_cp_ParamLimits

0x6247,	// (0x00037b0d) setting_slider_pane_t1_ParamLimits

0x6260,	// (0x00037b26) setting_slider_pane_t2_ParamLimits

0x627a,	// (0x00037b40) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00040dff) setting_slider_pane_t_ParamLimits

0x6292,	// (0x00037b58) slider_set_pane_ParamLimits

0x7695,	// (0x00038f5b) control_pane_g5_ParamLimits

0x7695,	// (0x00038f5b) control_pane_g5

0xada1,	// (0x0003c667) slider_set_pane_g1_ParamLimits

0x8389,	// (0x00039c4f) slider_set_pane_g2_ParamLimits

0x8395,	// (0x00039c5b) slider_set_pane_g3_ParamLimits

0x83a9,	// (0x00039c6f) slider_set_pane_g4_ParamLimits

0x83c1,	// (0x00039c87) slider_set_pane_g5_ParamLimits

0x8395,	// (0x00039c5b) slider_set_pane_g6_ParamLimits

0x83d7,	// (0x00039c9d) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x000411f1) slider_set_pane_g_ParamLimits

0x2b09,	// (0x000343cf) navi_icon_text_pane_ParamLimits

0x7d9f,	// (0x00039665) aid_fill_nsta_2_ParamLimits

0x7dde,	// (0x000396a4) aid_touch_tab_arrow_left_ParamLimits

0x7ded,	// (0x000396b3) aid_touch_tab_arrow_right_ParamLimits

0x7e5a,	// (0x00039720) clock_nsta_pane_ParamLimits

0xa8a4,	// (0x0003c16a) navi_icon_pane_g1_ParamLimits

0xa8b0,	// (0x0003c176) navi_text_pane_t1_ParamLimits

0xbbeb,	// (0x0003d4b1) navi_icon_text_pane_g1_ParamLimits

0xbbf7,	// (0x0003d4bd) navi_icon_text_pane_t1_ParamLimits

0xd4a2,	// (0x0003ed68) list_single_hc_apps_pane_g1_ParamLimits

0x8b1e,	// (0x0003a3e4) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0004158f) list_single_hc_apps_pane_g_ParamLimits

0x8b37,	// (0x0003a3fd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8b53,	// (0x0003a419) list_single_hc_apps_pane_t1_ParamLimits

0x608b,	// (0x00037951) popup_toolbar2_fixed_window_ParamLimits

0x608b,	// (0x00037951) popup_toolbar2_fixed_window

0x7cb5,	// (0x0003957b) popup_toolbar2_float_window

0x1f82,	// (0x00033848) bg_popup_sub_pane_cp27

0xd4bb,	// (0x0003ed81) grid_toolbar2_float_pane

0x1f82,	// (0x00033848) bg_popup_sub_pane_cp26

0xd4bb,	// (0x0003ed81) grid_toolbar2_fixed_pane

0xd4c3,	// (0x0003ed89) cell_toolbar2_fixed_pane_ParamLimits

0xd4c3,	// (0x0003ed89) cell_toolbar2_fixed_pane

0xd4d3,	// (0x0003ed99) cell_toolbar2_fixed_pane_g1

0x7b87,	// (0x0003944d) toolbar2_fixed_button_pane

0x9a12,	// (0x0003b2d8) toolbar2_fixed_button_pane_g1

0x9a22,	// (0x0003b2e8) toolbar2_fixed_button_pane_g2

0x9a1a,	// (0x0003b2e0) toolbar2_fixed_button_pane_g3

0x9a32,	// (0x0003b2f8) toolbar2_fixed_button_pane_g4

0x9a2a,	// (0x0003b2f0) toolbar2_fixed_button_pane_g5

0x9a3a,	// (0x0003b300) toolbar2_fixed_button_pane_g6

0x9a42,	// (0x0003b308) toolbar2_fixed_button_pane_g7

0x9a52,	// (0x0003b318) toolbar2_fixed_button_pane_g8

0x9a4a,	// (0x0003b310) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x000410f3) toolbar2_fixed_button_pane_g

0xd4dc,	// (0x0003eda2) cell_toolbar2_float_pane_ParamLimits

0xd4dc,	// (0x0003eda2) cell_toolbar2_float_pane

0xd4ed,	// (0x0003edb3) cell_toolbar2_float_pane_g1

0x7b87,	// (0x0003944d) toolbar2_fixed_button_pane_cp

0xc174,	// (0x0003da3a) fep_vkb_accented_list_pane_ParamLimits

0xc174,	// (0x0003da3a) fep_vkb_accented_list_pane

0x885d,	// (0x0003a123) bg_popup_fep_shadow_pane_g9

0x2c43,	// (0x00034509) bg_popup_fep_shadow_pane_cp3

0x24c1,	// (0x00033d87) list_accented_list_pane

0xd4f6,	// (0x0003edbc) list_single_accented_list_pane_ParamLimits

0xd4f6,	// (0x0003edbc) list_single_accented_list_pane

0x2c43,	// (0x00034509) list_highlight_pane_cp10

0xd507,	// (0x0003edcd) list_single_accented_list_pane_t1

0x7c05,	// (0x000394cb) popup_slider_window_ParamLimits

0x7c05,	// (0x000394cb) popup_slider_window

0xd145,	// (0x0003ea0b) aid_indentation_list_msg

0xd5c5,	// (0x0003ee8b) bg_popup_window_pane_cp19

0xd62d,	// (0x0003eef3) popup_slider_window_g1

0xd649,	// (0x0003ef0f) popup_slider_window_g2

0xd665,	// (0x0003ef2b) popup_slider_window_g3

0x0005,

0xfcce,	// (0x00041594) popup_slider_window_g

0xd6cb,	// (0x0003ef91) popup_slider_window_t1

0xd73f,	// (0x0003f005) small_volume_slider_vertical_pane

0xc046,	// (0x0003d90c) small_volume_slider_vertical_pane_g1

0xc046,	// (0x0003d90c) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x0003f021) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x000415a6) small_volume_slider_vertical_pane_g

0x5e51,	// (0x00037717) area_side_right_pane_ParamLimits

0x5e51,	// (0x00037717) area_side_right_pane

0x8b81,	// (0x0003a447) aid_size_side_button_ParamLimits

0x8b81,	// (0x0003a447) aid_size_side_button

0x8b95,	// (0x0003a45b) grid_sctrl_middle_pane_ParamLimits

0x8b95,	// (0x0003a45b) grid_sctrl_middle_pane

0x8bb4,	// (0x0003a47a) sctrl_sk_bottom_pane

0x8bc5,	// (0x0003a48b) sctrl_sk_top_pane

0x8bd7,	// (0x0003a49d) aid_touch_sctrl_top

0x8be4,	// (0x0003a4aa) bg_sctrl_sk_pane_ParamLimits

0x8be4,	// (0x0003a4aa) bg_sctrl_sk_pane

0x8bf2,	// (0x0003a4b8) sctrl_sk_top_pane_g1

0x8bff,	// (0x0003a4c5) sctrl_sk_top_pane_t1

0x8bd7,	// (0x0003a49d) aid_touch_sctrl_bottom

0x8be4,	// (0x0003a4aa) bg_sctrl_sk_pane_cp_ParamLimits

0x8be4,	// (0x0003a4aa) bg_sctrl_sk_pane_cp

0x8c1a,	// (0x0003a4e0) sctrl_sk_bottom_pane_g1

0x8bff,	// (0x0003a4c5) sctrl_sk_bottom_pane_t1

0x8c23,	// (0x0003a4e9) cell_sctrl_middle_pane_ParamLimits

0x8c23,	// (0x0003a4e9) cell_sctrl_middle_pane

0x8c3e,	// (0x0003a504) aid_touch_sctrl_middle_ParamLimits

0x8c3e,	// (0x0003a504) aid_touch_sctrl_middle

0x8c50,	// (0x0003a516) bg_sctrl_middle_pane_ParamLimits

0x8c50,	// (0x0003a516) bg_sctrl_middle_pane

0x887d,	// (0x0003a143) cell_sctrl_middle_pane_g1_ParamLimits

0x887d,	// (0x0003a143) cell_sctrl_middle_pane_g1

0x8c5e,	// (0x0003a524) cell_sctrl_middle_pane_g2_ParamLimits

0x8c5e,	// (0x0003a524) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x000415b2) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x000415b2) cell_sctrl_middle_pane_g

0x9a12,	// (0x0003b2d8) bg_sctrl_middle_pane_g1

0x9a1a,	// (0x0003b2e0) bg_sctrl_middle_pane_g2

0x9a22,	// (0x0003b2e8) bg_sctrl_middle_pane_g3

0x9a2a,	// (0x0003b2f0) bg_sctrl_middle_pane_g4

0x9a32,	// (0x0003b2f8) bg_sctrl_middle_pane_g5

0x9a3a,	// (0x0003b300) bg_sctrl_middle_pane_g6

0x9a42,	// (0x0003b308) bg_sctrl_middle_pane_g7

0x9a4a,	// (0x0003b310) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x000415b7) bg_sctrl_middle_pane_g

0x9a52,	// (0x0003b318) bg_sctrl_middle_pane_g8_copy1

0x9a12,	// (0x0003b2d8) bg_sctrl_sk_pane_g1

0x9a22,	// (0x0003b2e8) bg_sctrl_sk_pane_g2

0x9a1a,	// (0x0003b2e0) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x000410f3) bg_sctrl_sk_pane_g

0x22ea,	// (0x00033bb0) aid_size_touch_scroll_bar

0x9a32,	// (0x0003b2f8) bg_sctrl_sk_pane_g4

0x9a2a,	// (0x0003b2f0) bg_sctrl_sk_pane_g5

0x9a3a,	// (0x0003b300) bg_sctrl_sk_pane_g6

0x9a42,	// (0x0003b308) bg_sctrl_sk_pane_g7

0x9a52,	// (0x0003b318) bg_sctrl_sk_pane_g8

0x9a4a,	// (0x0003b310) bg_sctrl_sk_pane_g9

0x786e,	// (0x00039134) popup_fep_china_hwr2_fs_candidate_window

0x7878,	// (0x0003913e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7878,	// (0x0003913e) popup_fep_china_hwr2_fs_control_window

0x887d,	// (0x0003a143) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x000415ad) sctrl_sk_top_pane_g

0xd764,	// (0x0003f02a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x0003f02a) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x0003f03c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x0003f03c) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x0003f053) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x0003f053) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x0003f065) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x0003f065) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x0003f075) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x0003f07d) aid_fep_china_hwr2_fs_candi_cell

0x1f82,	// (0x00033848) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x0003f087) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x0003f091) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x0003f091) cell_fep_china_hwr2_fs_funtion_grid

0xc046,	// (0x0003d90c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x0003f0a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x0003f0a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x0003f0b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x0003f0b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x000415c8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x000415c8) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x0003f0cd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x0003f0cd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x0003f0e2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x0003f0e2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x000415cd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x000415cd) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x0003f0fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x0003f106) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x0003f10e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x000415d2) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x0003f116) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x0003f116) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x0003f12f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x0003f137) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc046,	// (0x0003d90c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc046,	// (0x0003d90c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x000413ed) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x0003f13f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7e6d,	// (0x00039733) clock_nsta_pane_cp_24_ParamLimits

0x7e6d,	// (0x00039733) clock_nsta_pane_cp_24

0x7eeb,	// (0x000397b1) indicator_nsta_pane_cp_24_ParamLimits

0x7eeb,	// (0x000397b1) indicator_nsta_pane_cp_24

0xa720,	// (0x0003bfe6) heading_pane_g1

0x0001,

0xf892,	// (0x00041158) heading_pane_g

0xb165,	// (0x0003ca2b) grid_sct_catagory_button_pane

0xb195,	// (0x0003ca5b) scroll_pane_cp5_ParamLimits

0xbc39,	// (0x0003d4ff) button_value_adjust_pane_cp5_ParamLimits

0xbc39,	// (0x0003d4ff) button_value_adjust_pane_cp5

0xbd18,	// (0x0003d5de) form2_midp_time_pane_ParamLimits

0xd887,	// (0x0003f14d) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x0003f14d) cell_sct_catagory_button_pane

0xc00b,	// (0x0003d8d1) bg_button_pane_cp01_ParamLimits

0xc00b,	// (0x0003d8d1) bg_button_pane_cp01

0xc046,	// (0x0003d90c) cell_sct_catagory_button_pane_g1

0x7c44,	// (0x0003950a) popup_tb_extension_window

0xd899,	// (0x0003f15f) aid_size_cell_ext_ParamLimits

0xd899,	// (0x0003f15f) aid_size_cell_ext

0x211c,	// (0x000339e2) bg_tb_trans_pane_cp1_ParamLimits

0x211c,	// (0x000339e2) bg_tb_trans_pane_cp1

0xd8b9,	// (0x0003f17f) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x0003f17f) grid_tb_ext_pane

0xd8e9,	// (0x0003f1af) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x0003f1af) cell_tb_ext_pane

0xd900,	// (0x0003f1c6) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x0003f1c6) cell_tb_ext_pane_g1

0xd91d,	// (0x0003f1e3) cell_tb_ext_pane_t1

0x211c,	// (0x000339e2) list_highlight_pane_cp11_ParamLimits

0x211c,	// (0x000339e2) list_highlight_pane_cp11

0x60aa,	// (0x00037970) popup_uni_indicator_window_ParamLimits

0x60aa,	// (0x00037970) popup_uni_indicator_window

0x23a8,	// (0x00033c6e) bg_popup_sub_pane_cp14

0xd939,	// (0x0003f1ff) list_uniindi_pane

0xd945,	// (0x0003f20b) uniindi_top_pane

0x211c,	// (0x000339e2) bg_uniindi_top_pane

0xd964,	// (0x0003f22a) uniindi_top_pane_g1

0xd97a,	// (0x0003f240) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x000415d9) uniindi_top_pane_g

0xd9a4,	// (0x0003f26a) uniindi_top_pane_t1

0xd9ce,	// (0x0003f294) list_single_uniindi_pane_ParamLimits

0xd9ce,	// (0x0003f294) list_single_uniindi_pane

0xc046,	// (0x0003d90c) bg_uniindi_top_pane_g1

0xd9e1,	// (0x0003f2a7) list_single_uniindi_pane_g1

0xd9f4,	// (0x0003f2ba) list_single_uniindi_pane_t1

0x5f2e,	// (0x000377f4) control_bg_pane

0xda19,	// (0x0003f2df) bg_sctrl_sk_pane_cp1

0xda22,	// (0x0003f2e8) bg_sctrl_sk_pane_cp2

0xda2b,	// (0x0003f2f1) control_bg_pane_g1

0xda34,	// (0x0003f2fa) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x000415e2) control_bg_pane_g

0xba7f,	// (0x0003d345) cell_indicator_nsta_pane_g1_ParamLimits

0xba8d,	// (0x0003d353) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x00041351) cell_indicator_nsta_pane_g_ParamLimits

0x4c8b,	// (0x00036551) form2_midp_time_pane_t1_ParamLimits

0x77d8,	// (0x0003909e) main_idle_act4_pane_ParamLimits

0x77d8,	// (0x0003909e) main_idle_act4_pane

0x7c44,	// (0x0003950a) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x0003f19f) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x0003f19f) tb_ext_find_pane

0xda3d,	// (0x0003f303) ai_gene_pane_1_cp1

0x2cc4,	// (0x0003458a) ai_gene_pane_2_cp1

0xda45,	// (0x0003f30b) list_single_idle_plugin_calendar_pane

0xda4e,	// (0x0003f314) list_single_idle_plugin_notification_pane

0xda57,	// (0x0003f31d) list_single_idle_plugin_player_pane

0xda60,	// (0x0003f326) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda60,	// (0x0003f326) list_single_idle_plugin_shortcut_pane

0xda82,	// (0x0003f348) main_idle_act4_pane_t1

0xda94,	// (0x0003f35a) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x000415e7) main_idle_act4_pane_t

0xdaa6,	// (0x0003f36c) middle_sk_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0003f36c) middle_sk_idle_act4_pane

0xdabc,	// (0x0003f382) popup_clock_digital_analogue_window_cp2

0xdad6,	// (0x0003f39c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad6,	// (0x0003f39c) shortcut_wheel_idle_act4_pane

0xc046,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g1

0xc046,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g2

0xc046,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g3

0xc046,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g4

0xc046,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g5

0xdaea,	// (0x0003f3b0) shortcut_wheel_idle_act4_pane_g6

0xdaf2,	// (0x0003f3b8) shortcut_wheel_idle_act4_pane_g7

0xdafa,	// (0x0003f3c0) shortcut_wheel_idle_act4_pane_g8

0xdb02,	// (0x0003f3c8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x000415ec) shortcut_wheel_idle_act4_pane_g

0xc2b6,	// (0x0003db7c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b6,	// (0x0003db7c) middle_sk_idle_act4_pane_g1

0xdb66,	// (0x0003f42c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb66,	// (0x0003f42c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0004160f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0004160f) middle_sk_idle_act4_pane_g

0xdb72,	// (0x0003f438) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x0003f438) middle_sk_idle_act4_pane_t1

0xdb8f,	// (0x0003f455) grid_ai_shortcut_pane_ParamLimits

0xdb8f,	// (0x0003f455) grid_ai_shortcut_pane

0xdba8,	// (0x0003f46e) list_highlight_pane_cp16_ParamLimits

0xdba8,	// (0x0003f46e) list_highlight_pane_cp16

0xdbb5,	// (0x0003f47b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb5,	// (0x0003f47b) list_single_idle_plugin_shortcut_pane_g1

0xdbc1,	// (0x0003f487) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc1,	// (0x0003f487) list_single_idle_plugin_shortcut_pane_g2

0xdbd9,	// (0x0003f49f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd9,	// (0x0003f49f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x00041614) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x00041614) list_single_idle_plugin_shortcut_pane_g

0xdbec,	// (0x0003f4b2) cell_ai_shortcut_pane_ParamLimits

0xdbec,	// (0x0003f4b2) cell_ai_shortcut_pane

0xdc10,	// (0x0003f4d6) cell_ai_shortcut_pane_g1_ParamLimits

0xdc10,	// (0x0003f4d6) cell_ai_shortcut_pane_g1

0xda3d,	// (0x0003f303) ai_gene_pane_1_cp2

0xdc32,	// (0x0003f4f8) ai_gene_pane_2_cp2

0xdc3a,	// (0x0003f500) list_highlight_pane_cp15

0xdc43,	// (0x0003f509) list_single_idle_plugin_calendar_pane_g1

0xdc3a,	// (0x0003f500) list_highlight_pane_cp17

0xdc4b,	// (0x0003f511) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc53,	// (0x0003f519) list_single_idle_plugin_player_pane_g1

0xb3be,	// (0x0003cc84) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x0004161b) list_single_idle_plugin_player_pane_g

0xdc5b,	// (0x0003f521) list_single_idle_plugin_player_pane_t1

0xdc69,	// (0x0003f52f) list_single_idle_plugin_player_pane_t2

0xdc77,	// (0x0003f53d) list_single_idle_plugin_player_pane_t3

0xdc85,	// (0x0003f54b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x00041620) list_single_idle_plugin_player_pane_t

0xdc93,	// (0x0003f559) wait_bar_pane_cp15

0xdc9b,	// (0x0003f561) grid_ai_notification_pane

0xb3be,	// (0x0003cc84) list_single_idle_plugin_notification_pane_g1

0xdca4,	// (0x0003f56a) cell_ai_notification_pane_ParamLimits

0xdca4,	// (0x0003f56a) cell_ai_notification_pane

0xdcb1,	// (0x0003f577) cell_ai_notification_pane_g1

0xdcb9,	// (0x0003f57f) cell_ai_notification_pane_t1

0xdcc7,	// (0x0003f58d) tb_ext_find_button_pane

0xdccf,	// (0x0003f595) tb_ext_find_pane_g1

0xdcd7,	// (0x0003f59d) tb_ext_find_pane_t1

0x27fa,	// (0x000340c0) tb_ext_find_button_pane_g1

0xdce5,	// (0x0003f5ab) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x00041629) tb_ext_find_button_pane_g

0xda82,	// (0x0003f348) main_idle_act4_pane_t1_ParamLimits

0xda94,	// (0x0003f35a) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x000415e7) main_idle_act4_pane_t_ParamLimits

0xdabc,	// (0x0003f382) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaca,	// (0x0003f390) sat_plugin_idle_act4_pane_ParamLimits

0xdaca,	// (0x0003f390) sat_plugin_idle_act4_pane

0xdcee,	// (0x0003f5b4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x0003f5b4) sat_plugin_idle_act4_pane_t1

0xdd01,	// (0x0003f5c7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd01,	// (0x0003f5c7) sat_plugin_idle_act4_pane_t2

0xdd14,	// (0x0003f5da) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd14,	// (0x0003f5da) sat_plugin_idle_act4_pane_t3

0xdd27,	// (0x0003f5ed) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd27,	// (0x0003f5ed) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x0004162e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x0004162e) sat_plugin_idle_act4_pane_t

0x5ff3,	// (0x000378b9) popup_battery_window_ParamLimits

0x5ff3,	// (0x000378b9) popup_battery_window

0x211c,	// (0x000339e2) bg_popup_sub_pane_cp25_ParamLimits

0x211c,	// (0x000339e2) bg_popup_sub_pane_cp25

0xdd3a,	// (0x0003f600) popup_battery_window_g1_ParamLimits

0xdd3a,	// (0x0003f600) popup_battery_window_g1

0xdd46,	// (0x0003f60c) popup_battery_window_t1_ParamLimits

0xdd46,	// (0x0003f60c) popup_battery_window_t1

0xdd58,	// (0x0003f61e) popup_battery_window_t2_ParamLimits

0xdd58,	// (0x0003f61e) popup_battery_window_t2

0x0001,

0xfd71,	// (0x00041637) popup_battery_window_t_ParamLimits

0xfd71,	// (0x00041637) popup_battery_window_t

0x7409,	// (0x00038ccf) midp_canvas_pane_ParamLimits

0x7482,	// (0x00038d48) midp_keypad_pane_ParamLimits

0x7482,	// (0x00038d48) midp_keypad_pane

0x24ea,	// (0x00033db0) main_midp_pane_ParamLimits

0xbaf9,	// (0x0003d3bf) signal_pane_g2_cp_ParamLimits

0xdd75,	// (0x0003f63b) aid_size_cell_midp_keypad_ParamLimits

0xdd75,	// (0x0003f63b) aid_size_cell_midp_keypad

0xdd8f,	// (0x0003f655) midp_keyp_game_grid_pane_ParamLimits

0xdd8f,	// (0x0003f655) midp_keyp_game_grid_pane

0xddaf,	// (0x0003f675) midp_keyp_rocker_pane_ParamLimits

0xddaf,	// (0x0003f675) midp_keyp_rocker_pane

0xdde8,	// (0x0003f6ae) midp_keyp_sk_left_pane_ParamLimits

0xdde8,	// (0x0003f6ae) midp_keyp_sk_left_pane

0xde42,	// (0x0003f708) midp_keyp_sk_right_pane_ParamLimits

0xde42,	// (0x0003f708) midp_keyp_sk_right_pane

0x1f82,	// (0x00033848) bg_button_pane_cp03

0xde9c,	// (0x0003f762) midp_keyp_sk_left_pane_g1

0x1f82,	// (0x00033848) bg_button_pane_cp04

0xde9c,	// (0x0003f762) midp_keyp_sk_right_pane_g1

0xc046,	// (0x0003d90c) midp_keyp_rocker_pane_g1

0xdea5,	// (0x0003f76b) keyp_game_cell_pane_ParamLimits

0xdea5,	// (0x0003f76b) keyp_game_cell_pane

0x1f82,	// (0x00033848) bg_button_pane_cp02

0xdeb8,	// (0x0003f77e) keyp_game_cell_pane_g1

0x6029,	// (0x000378ef) popup_fep_vkb2_window_ParamLimits

0x6029,	// (0x000378ef) popup_fep_vkb2_window

0x8c7c,	// (0x0003a542) aid_size_cell_vkb2_ParamLimits

0x8c7c,	// (0x0003a542) aid_size_cell_vkb2

0x8cd0,	// (0x0003a596) popup_fep_vkb2_window_g1_ParamLimits

0x8cd0,	// (0x0003a596) popup_fep_vkb2_window_g1

0x8d18,	// (0x0003a5de) vkb2_area_bottom_pane_ParamLimits

0x8d18,	// (0x0003a5de) vkb2_area_bottom_pane

0x8d64,	// (0x0003a62a) vkb2_area_keypad_pane_ParamLimits

0x8d64,	// (0x0003a62a) vkb2_area_keypad_pane

0x8da6,	// (0x0003a66c) vkb2_area_top_pane_ParamLimits

0x8da6,	// (0x0003a66c) vkb2_area_top_pane

0x8e20,	// (0x0003a6e6) vkb2_top_entry_pane_ParamLimits

0x8e20,	// (0x0003a6e6) vkb2_top_entry_pane

0x8e4a,	// (0x0003a710) vkb2_top_grid_left_pane_ParamLimits

0x8e4a,	// (0x0003a710) vkb2_top_grid_left_pane

0x8e68,	// (0x0003a72e) vkb2_top_grid_right_pane_ParamLimits

0x8e68,	// (0x0003a72e) vkb2_top_grid_right_pane

0x8e86,	// (0x0003a74c) vkb2_cell_keypad_pane_ParamLimits

0x8e86,	// (0x0003a74c) vkb2_cell_keypad_pane

0x8f57,	// (0x0003a81d) vkb2_area_bottom_grid_pane_ParamLimits

0x8f57,	// (0x0003a81d) vkb2_area_bottom_grid_pane

0x8f7d,	// (0x0003a843) vkb2_area_bottom_pane_g1_ParamLimits

0x8f7d,	// (0x0003a843) vkb2_area_bottom_pane_g1

0x8fa1,	// (0x0003a867) vkb2_area_bottom_pane_g2_ParamLimits

0x8fa1,	// (0x0003a867) vkb2_area_bottom_pane_g2

0x8fcf,	// (0x0003a895) vkb2_area_bottom_pane_g3_ParamLimits

0x8fcf,	// (0x0003a895) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0004163c) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0004163c) vkb2_area_bottom_pane_g

0x9030,	// (0x0003a8f6) vkb2_top_cell_left_pane_ParamLimits

0x9030,	// (0x0003a8f6) vkb2_top_cell_left_pane

0xdec9,	// (0x0003f78f) vkb2_top_entry_pane_g1_ParamLimits

0xdec9,	// (0x0003f78f) vkb2_top_entry_pane_g1

0xded7,	// (0x0003f79d) vkb2_top_entry_pane_t1_ParamLimits

0xded7,	// (0x0003f79d) vkb2_top_entry_pane_t1

0xdf09,	// (0x0003f7cf) vkb2_top_entry_pane_t2_ParamLimits

0xdf09,	// (0x0003f7cf) vkb2_top_entry_pane_t2

0xdf3b,	// (0x0003f801) vkb2_top_entry_pane_t3_ParamLimits

0xdf3b,	// (0x0003f801) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x00041643) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x00041643) vkb2_top_entry_pane_t

0x907d,	// (0x0003a943) vkb2_top_grid_right_pane_g1_ParamLimits

0x907d,	// (0x0003a943) vkb2_top_grid_right_pane_g1

0x9093,	// (0x0003a959) vkb2_top_grid_right_pane_g2_ParamLimits

0x9093,	// (0x0003a959) vkb2_top_grid_right_pane_g2

0x90ab,	// (0x0003a971) vkb2_top_grid_right_pane_g3_ParamLimits

0x90ab,	// (0x0003a971) vkb2_top_grid_right_pane_g3

0x90c3,	// (0x0003a989) vkb2_top_grid_right_pane_g4_ParamLimits

0x90c3,	// (0x0003a989) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0004164a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0004164a) vkb2_top_grid_right_pane_g

0x90d9,	// (0x0003a99f) vkb2_top_cell_left_pane_g1

0x90f0,	// (0x0003a9b6) vkb2_cell_keypad_pane_g1_ParamLimits

0x90f0,	// (0x0003a9b6) vkb2_cell_keypad_pane_g1

0xdf5f,	// (0x0003f825) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5f,	// (0x0003f825) vkb2_cell_keypad_pane_t1

0x90fe,	// (0x0003a9c4) vkb2_cell_bottom_grid_pane_ParamLimits

0x90fe,	// (0x0003a9c4) vkb2_cell_bottom_grid_pane

0x9137,	// (0x0003a9fd) vkb2_cell_bottom_grid_pane_g1

0xdb0a,	// (0x0003f3d0) aid_call2_pane_cp02

0xdb12,	// (0x0003f3d8) aid_call_pane_cp02

0xdb1a,	// (0x0003f3e0) clock_digital_number_pane_cp10

0xdb22,	// (0x0003f3e8) clock_digital_number_pane_cp11

0xdb2a,	// (0x0003f3f0) clock_digital_number_pane_cp12

0xdb32,	// (0x0003f3f8) clock_digital_number_pane_cp13

0xdb3a,	// (0x0003f400) clock_digital_separator_pane_cp10

0x27fa,	// (0x000340c0) popup_clock_digital_analogue_window_cp2_g1

0x27fa,	// (0x000340c0) popup_clock_digital_analogue_window_cp2_g2

0xdb42,	// (0x0003f408) popup_clock_digital_analogue_window_cp2_g3

0x27fa,	// (0x000340c0) popup_clock_digital_analogue_window_cp2_g4

0xdb42,	// (0x0003f408) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x000415ff) popup_clock_digital_analogue_window_cp2_g

0xdb4a,	// (0x0003f410) popup_clock_digital_analogue_window_cp2_t1

0xdb58,	// (0x0003f41e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x0004160a) popup_clock_digital_analogue_window_cp2_t

0xc046,	// (0x0003d90c) clock_digital_number_pane_cp10_g1

0xc046,	// (0x0003d90c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x000413ed) clock_digital_number_pane_cp10_g

0xc046,	// (0x0003d90c) clock_digital_separator_pane_cp10_g1

0xc046,	// (0x0003d90c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x000413ed) clock_digital_separator_pane_cp10_g

0xd986,	// (0x0003f24c) uniindi_top_pane_g3

0xd997,	// (0x0003f25d) uniindi_top_pane_g4

0x8f11,	// (0x0003a7d7) vkb2_row_keypad_pane_ParamLimits

0x8f11,	// (0x0003a7d7) vkb2_row_keypad_pane

0x9153,	// (0x0003aa19) vkb2_cell_t_keypad_pane_ParamLimits

0x9153,	// (0x0003aa19) vkb2_cell_t_keypad_pane

0x9163,	// (0x0003aa29) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9163,	// (0x0003aa29) vkb2_cell_t_keypad_pane_cp08

0x9176,	// (0x0003aa3c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9176,	// (0x0003aa3c) vkb2_cell_t_keypad_pane_cp09

0x918a,	// (0x0003aa50) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x918a,	// (0x0003aa50) vkb2_cell_t_keypad_pane_cp01

0x919b,	// (0x0003aa61) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x919b,	// (0x0003aa61) vkb2_cell_t_keypad_pane_cp02

0x91ac,	// (0x0003aa72) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91ac,	// (0x0003aa72) vkb2_cell_t_keypad_pane_cp03

0x91bd,	// (0x0003aa83) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91bd,	// (0x0003aa83) vkb2_cell_t_keypad_pane_cp04

0x91ce,	// (0x0003aa94) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91ce,	// (0x0003aa94) vkb2_cell_t_keypad_pane_cp05

0x91df,	// (0x0003aaa5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91df,	// (0x0003aaa5) vkb2_cell_t_keypad_pane_cp06

0x91f0,	// (0x0003aab6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91f0,	// (0x0003aab6) vkb2_cell_t_keypad_pane_cp07

0x9201,	// (0x0003aac7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9201,	// (0x0003aac7) vkb2_cell_t_keypad_pane_cp10

0x887d,	// (0x0003a143) vkb2_cell_t_keypad_pane_g1

0xdf76,	// (0x0003f83c) vkb2_cell_t_keypad_pane_t1

0x5f2e,	// (0x000377f4) popup_grid_graphic2_window

0xdf88,	// (0x0003f84e) aid_size_cell_graphic2_ParamLimits

0xdf88,	// (0x0003f84e) aid_size_cell_graphic2

0xdfc0,	// (0x0003f886) bg_popup_window_pane_cp21_ParamLimits

0xdfc0,	// (0x0003f886) bg_popup_window_pane_cp21

0xdfce,	// (0x0003f894) graphic2_pages_pane_ParamLimits

0xdfce,	// (0x0003f894) graphic2_pages_pane

0xe014,	// (0x0003f8da) grid_graphic2_control_pane_ParamLimits

0xe014,	// (0x0003f8da) grid_graphic2_control_pane

0xe052,	// (0x0003f918) grid_graphic2_pane_ParamLimits

0xe052,	// (0x0003f918) grid_graphic2_pane

0xe0c6,	// (0x0003f98c) cell_graphic2_pane

0x5f2e,	// (0x000377f4) main_comp_mode_pane

0xd1f7,	// (0x0003eabd) list_ai3_gene_pane_ParamLimits

0xd5c5,	// (0x0003ee8b) bg_popup_window_pane_cp19_ParamLimits

0xd5d1,	// (0x0003ee97) bg_touch_area_indi_pane_ParamLimits

0xd5d1,	// (0x0003ee97) bg_touch_area_indi_pane

0xd5e7,	// (0x0003eead) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5e7,	// (0x0003eead) bg_touch_area_indi_pane_cp01

0xd5fd,	// (0x0003eec3) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5fd,	// (0x0003eec3) bg_touch_area_indi_pane_cp02

0xd613,	// (0x0003eed9) bg_touch_area_indi_pane_cp03_ParamLimits

0xd613,	// (0x0003eed9) bg_touch_area_indi_pane_cp03

0xd62d,	// (0x0003eef3) popup_slider_window_g1_ParamLimits

0xd649,	// (0x0003ef0f) popup_slider_window_g2_ParamLimits

0xd665,	// (0x0003ef2b) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x00041594) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x0003ef91) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x0003f005) small_volume_slider_vertical_pane_ParamLimits

0xe0c6,	// (0x0003f98c) cell_graphic2_pane_ParamLimits

0xe115,	// (0x0003f9db) bg_button_pane_cp10_ParamLimits

0xe115,	// (0x0003f9db) bg_button_pane_cp10

0xe128,	// (0x0003f9ee) bg_button_pane_cp11_ParamLimits

0xe128,	// (0x0003f9ee) bg_button_pane_cp11

0xe13b,	// (0x0003fa01) graphic2_pages_pane_g1_ParamLimits

0xe13b,	// (0x0003fa01) graphic2_pages_pane_g1

0xe156,	// (0x0003fa1c) graphic2_pages_pane_g2_ParamLimits

0xe156,	// (0x0003fa1c) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x00041658) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x00041658) graphic2_pages_pane_g

0xe16e,	// (0x0003fa34) graphic2_pages_pane_t1_ParamLimits

0xe16e,	// (0x0003fa34) graphic2_pages_pane_t1

0xe186,	// (0x0003fa4c) cell_graphic2_control_pane_ParamLimits

0xe186,	// (0x0003fa4c) cell_graphic2_control_pane

0xe1a4,	// (0x0003fa6a) cell_graphic2_pane_g1_ParamLimits

0xe1a4,	// (0x0003fa6a) cell_graphic2_pane_g1

0xe1b1,	// (0x0003fa77) cell_graphic2_pane_g2_ParamLimits

0xe1b1,	// (0x0003fa77) cell_graphic2_pane_g2

0xe1be,	// (0x0003fa84) cell_graphic2_pane_g3_ParamLimits

0xe1be,	// (0x0003fa84) cell_graphic2_pane_g3

0xe1cb,	// (0x0003fa91) cell_graphic2_pane_g4_ParamLimits

0xe1cb,	// (0x0003fa91) cell_graphic2_pane_g4

0xe1d8,	// (0x0003fa9e) cell_graphic2_pane_g5_ParamLimits

0xe1d8,	// (0x0003fa9e) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0004165d) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0004165d) cell_graphic2_pane_g

0xe1f1,	// (0x0003fab7) cell_graphic2_pane_t1_ParamLimits

0xe1f1,	// (0x0003fab7) cell_graphic2_pane_t1

0x9a9e,	// (0x0003b364) grid_highlight_pane_cp11_ParamLimits

0x9a9e,	// (0x0003b364) grid_highlight_pane_cp11

0x211c,	// (0x000339e2) bg_button_pane_cp05

0xe227,	// (0x0003faed) cell_graphic2_control_pane_g1

0xc046,	// (0x0003d90c) bg_touch_area_indi_pane_g1

0xe24f,	// (0x0003fb15) aid_cmod_rocker_key_size

0xe259,	// (0x0003fb1f) aid_cmode_itu_key_size

0xe263,	// (0x0003fb29) main_cmode_video_pane

0xe26d,	// (0x0003fb33) main_comp_mode_itu_pane

0xe279,	// (0x0003fb3f) main_comp_mode_rocker_pane

0xe285,	// (0x0003fb4b) cell_cmode_rocker_pane_ParamLimits

0xe285,	// (0x0003fb4b) cell_cmode_rocker_pane

0xe297,	// (0x0003fb5d) cell_cmode_itu_pane_ParamLimits

0xe297,	// (0x0003fb5d) cell_cmode_itu_pane

0x23a8,	// (0x00033c6e) bg_button_pane_cp06_ParamLimits

0x23a8,	// (0x00033c6e) bg_button_pane_cp06

0xc2b6,	// (0x0003db7c) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b6,	// (0x0003db7c) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x0003f0a9) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x0003f0a9) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0004166d) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0004166d) cell_cmode_rocker_pane_g

0x1f82,	// (0x00033848) bg_button_pane_cp07

0xe2ac,	// (0x0003fb72) cell_cmode_itu_pane_g1

0xe2b5,	// (0x0003fb7b) cell_cmode_itu_pane_t1

0xe2c3,	// (0x0003fb89) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x00041672) cell_cmode_itu_pane_t

0xda09,	// (0x0003f2cf) aid_touch_ctrl_left

0xda11,	// (0x0003f2d7) aid_touch_ctrl_right

0x1f82,	// (0x00033848) compa_mode_pane

0xe2d1,	// (0x0003fb97) aid_cmod_rocker_key_size_cp

0xe2db,	// (0x0003fba1) aid_cmode_itu_key_size_cp

0xe2e5,	// (0x0003fbab) compa_mode_pane_g1

0xe2ed,	// (0x0003fbb3) compa_mode_pane_g2

0xe2f5,	// (0x0003fbbb) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x00041677) compa_mode_pane_g

0xe2fd,	// (0x0003fbc3) main_comp_mode_itu_pane_cp

0xe305,	// (0x0003fbcb) main_comp_mode_rocker_pane_cp

0xe30d,	// (0x0003fbd3) cell_cmode_itu_pane_cp_ParamLimits

0xe30d,	// (0x0003fbd3) cell_cmode_itu_pane_cp

0xe322,	// (0x0003fbe8) cell_cmode_rocker_pane_cp_ParamLimits

0xe322,	// (0x0003fbe8) cell_cmode_rocker_pane_cp

0x23a8,	// (0x00033c6e) bg_button_pane_cp06_cp_ParamLimits

0x23a8,	// (0x00033c6e) bg_button_pane_cp06_cp

0xc2b6,	// (0x0003db7c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b6,	// (0x0003db7c) cell_cmode_rocker_pane_g1_cp

0xc046,	// (0x0003d90c) cell_cmode_rocker_pane_g2_cp

0x1f82,	// (0x00033848) bg_button_pane_cp07_cp

0xe334,	// (0x0003fbfa) cell_cmode_itu_pane_g1_cp

0xe33d,	// (0x0003fc03) cell_cmode_itu_pane_t1_cp

0xe33d,	// (0x0003fc03) cell_cmode_itu_pane_t2_cp

0xaf3b,	// (0x0003c801) settings_code_pane_cp2

0x1ff2,	// (0x000338b8) bg_popup_window_pane_cp3_ParamLimits

0x2235,	// (0x00033afb) heading_pane_cp3_ParamLimits

0x2244,	// (0x00033b0a) listscroll_popup_graphic_pane_ParamLimits

0x8626,	// (0x00039eec) fep_hwr_aid_pane_ParamLimits

0x8bd7,	// (0x0003a49d) aid_touch_sctrl_top_ParamLimits

0x8bf2,	// (0x0003a4b8) sctrl_sk_top_pane_g1_ParamLimits

0x887d,	// (0x0003a143) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x000415ad) sctrl_sk_top_pane_g_ParamLimits

0x8bff,	// (0x0003a4c5) sctrl_sk_top_pane_t1_ParamLimits

0x8bd7,	// (0x0003a49d) aid_touch_sctrl_bottom_ParamLimits

0x8bff,	// (0x0003a4c5) sctrl_sk_bottom_pane_t1_ParamLimits

0xd952,	// (0x0003f218) aid_area_touch_clock

0x8de8,	// (0x0003a6ae) aid_vkb2_area_top_pane_cell_ParamLimits

0x8de8,	// (0x0003a6ae) aid_vkb2_area_top_pane_cell

0x8f33,	// (0x0003a7f9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f33,	// (0x0003a7f9) aid_vkb2_area_bottom_pane_cell

0xdec1,	// (0x0003f787) popup_char_count_window

0xe34b,	// (0x0003fc11) popup_char_count_window_g1

0xe354,	// (0x0003fc1a) popup_char_count_window_g2

0xe35d,	// (0x0003fc23) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0004167e) popup_char_count_window_g

0xe366,	// (0x0003fc2c) popup_char_count_window_t1

0x8cae,	// (0x0003a574) popup_fep_char_preview_window_ParamLimits

0x8cae,	// (0x0003a574) popup_fep_char_preview_window

0x8e06,	// (0x0003a6cc) vkb2_top_candi_pane_ParamLimits

0x8e06,	// (0x0003a6cc) vkb2_top_candi_pane

0xe374,	// (0x0003fc3a) cell_vkb2_top_candi_pane_ParamLimits

0xe374,	// (0x0003fc3a) cell_vkb2_top_candi_pane

0x9216,	// (0x0003aadc) bg_popup_fep_char_preview_window_ParamLimits

0x9216,	// (0x0003aadc) bg_popup_fep_char_preview_window

0x9224,	// (0x0003aaea) popup_fep_char_preview_window_t1_ParamLimits

0x9224,	// (0x0003aaea) popup_fep_char_preview_window_t1

0xe3e2,	// (0x0003fca8) bg_popup_fep_char_preview_window_g1

0xe3ea,	// (0x0003fcb0) bg_popup_fep_char_preview_window_g2

0xe3f2,	// (0x0003fcb8) bg_popup_fep_char_preview_window_g3

0xe3fa,	// (0x0003fcc0) bg_popup_fep_char_preview_window_g4

0xe402,	// (0x0003fcc8) bg_popup_fep_char_preview_window_g5

0xe40a,	// (0x0003fcd0) bg_popup_fep_char_preview_window_g6

0xe412,	// (0x0003fcd8) bg_popup_fep_char_preview_window_g7

0xe41a,	// (0x0003fce0) bg_popup_fep_char_preview_window_g8

0xe422,	// (0x0003fce8) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x00041685) bg_popup_fep_char_preview_window_g

0x887d,	// (0x0003a143) cell_vkb2_top_candi_pane_g1_ParamLimits

0x887d,	// (0x0003a143) cell_vkb2_top_candi_pane_g1

0x888b,	// (0x0003a151) cell_vkb2_top_candi_pane_g2_ParamLimits

0x888b,	// (0x0003a151) cell_vkb2_top_candi_pane_g2

0xe3c1,	// (0x0003fc87) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3c1,	// (0x0003fc87) cell_vkb2_top_candi_pane_g3

0x9266,	// (0x0003ab2c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9266,	// (0x0003ab2c) cell_vkb2_top_candi_pane_g4

0xc796,	// (0x0003e05c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc796,	// (0x0003e05c) cell_vkb2_top_candi_pane_g5

0x9287,	// (0x0003ab4d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9287,	// (0x0003ab4d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x0004169a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x0004169a) cell_vkb2_top_candi_pane_g

0x9295,	// (0x0003ab5b) cell_vkb2_top_candi_pane_t1

0x8375,	// (0x00039c3b) aid_size_touch_slider_mark_ParamLimits

0x8375,	// (0x00039c3b) aid_size_touch_slider_mark

0xe004,	// (0x0003f8ca) grid_graphic2_catg_pane_ParamLimits

0xe004,	// (0x0003f8ca) grid_graphic2_catg_pane

0xe0a2,	// (0x0003f968) popup_grid_graphic2_window_t1_ParamLimits

0xe0a2,	// (0x0003f968) popup_grid_graphic2_window_t1

0xe0b4,	// (0x0003f97a) popup_grid_graphic2_window_t2_ParamLimits

0xe0b4,	// (0x0003f97a) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x00041653) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x00041653) popup_grid_graphic2_window_t

0x211c,	// (0x000339e2) bg_button_pane_cp05_ParamLimits

0xe227,	// (0x0003faed) cell_graphic2_control_pane_g1_ParamLimits

0xe42a,	// (0x0003fcf0) cell_graphic2_catg_pane_ParamLimits

0xe42a,	// (0x0003fcf0) cell_graphic2_catg_pane

0x1f82,	// (0x00033848) bg_button_pane_cp12

0xe43c,	// (0x0003fd02) cell_graphic2_catg_pane_g1

0xd91d,	// (0x0003f1e3) cell_tb_ext_pane_t1_ParamLimits

0x9050,	// (0x0003a916) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9050,	// (0x0003a916) vkb2_top_cell_right_narrow_pane

0x9068,	// (0x0003a92e) vkb2_top_cell_right_wide_pane_ParamLimits

0x9068,	// (0x0003a92e) vkb2_top_cell_right_wide_pane

0x8618,	// (0x00039ede) bg_vkb2_func_pane_ParamLimits

0x8618,	// (0x00039ede) bg_vkb2_func_pane

0x90d9,	// (0x0003a99f) vkb2_top_cell_left_pane_g1_ParamLimits

0x8618,	// (0x00039ede) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8618,	// (0x00039ede) bg_vkb2_fuc_pane_cp03

0x9137,	// (0x0003a9fd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a1a,	// (0x0003b2e0) bg_vkb2_func_pane_g1

0x9a22,	// (0x0003b2e8) bg_vkb2_func_pane_g2

0x9a32,	// (0x0003b2f8) bg_vkb2_func_pane_g3

0x9a2a,	// (0x0003b2f0) bg_vkb2_func_pane_g4

0x9a3a,	// (0x0003b300) bg_vkb2_func_pane_g5

0x9a42,	// (0x0003b308) bg_vkb2_func_pane_g6

0x9a4a,	// (0x0003b310) bg_vkb2_func_pane_g7

0x9a52,	// (0x0003b318) bg_vkb2_func_pane_g8

0x9a12,	// (0x0003b2d8) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x000416a7) bg_vkb2_func_pane_g

0x8618,	// (0x00039ede) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8618,	// (0x00039ede) bg_vkb2_fuc_pane_cp01

0x90d9,	// (0x0003a99f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90d9,	// (0x0003a99f) vkb2_top_cell_right_wide_pane_g1

0x8618,	// (0x00039ede) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8618,	// (0x00039ede) bg_vkb2_fuc_pane_cp02

0x9137,	// (0x0003a9fd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9137,	// (0x0003a9fd) vkb2_top_cell_right_narrow_pane_g1

0xd53f,	// (0x0003ee05) aid_touch_area_decrease_ParamLimits

0xd53f,	// (0x0003ee05) aid_touch_area_decrease

0xd563,	// (0x0003ee29) aid_touch_area_increase_ParamLimits

0xd563,	// (0x0003ee29) aid_touch_area_increase

0xd57b,	// (0x0003ee41) aid_touch_area_mute_ParamLimits

0xd57b,	// (0x0003ee41) aid_touch_area_mute

0xd597,	// (0x0003ee5d) aid_touch_area_slider_ParamLimits

0xd597,	// (0x0003ee5d) aid_touch_area_slider

0xd681,	// (0x0003ef47) popup_slider_window_g4_ParamLimits

0xd681,	// (0x0003ef47) popup_slider_window_g4

0xd699,	// (0x0003ef5f) popup_slider_window_g5_ParamLimits

0xd699,	// (0x0003ef5f) popup_slider_window_g5

0xd6bb,	// (0x0003ef81) popup_slider_window_g6_ParamLimits

0xd6bb,	// (0x0003ef81) popup_slider_window_g6

0xd6f9,	// (0x0003efbf) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x0003efbf) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x000415a1) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x000415a1) popup_slider_window_t

0xd711,	// (0x0003efd7) slider_pane_ParamLimits

0xd711,	// (0x0003efd7) slider_pane

0xe445,	// (0x0003fd0b) slider_pane_g1_ParamLimits

0xe445,	// (0x0003fd0b) slider_pane_g1

0xe459,	// (0x0003fd1f) slider_pane_g2_ParamLimits

0xe459,	// (0x0003fd1f) slider_pane_g2

0xe46f,	// (0x0003fd35) slider_pane_g3_ParamLimits

0xe46f,	// (0x0003fd35) slider_pane_g3

0x0003,

0xfdf4,	// (0x000416ba) slider_pane_g_ParamLimits

0xfdf4,	// (0x000416ba) slider_pane_g

0x7ca0,	// (0x00039566) popup_tb_float_extension_window_ParamLimits

0x7ca0,	// (0x00039566) popup_tb_float_extension_window

0xe49b,	// (0x0003fd61) aid_size_cell_tb_float_ext

0x1f82,	// (0x00033848) bg_popup_sub_window_cp28

0xe4a7,	// (0x0003fd6d) grid_tb_float_ext_pane

0xe4b1,	// (0x0003fd77) cell_tb_float_ext_pane_ParamLimits

0xe4b1,	// (0x0003fd77) cell_tb_float_ext_pane

0xe4cb,	// (0x0003fd91) cell_tb_float_ext_pane_g1

0xe4d4,	// (0x0003fd9a) grid_highlight_pane_cp12

0x8767,	// (0x0003a02d) cell_last_hwr_side_pane_ParamLimits

0x8767,	// (0x0003a02d) cell_last_hwr_side_pane

0xc046,	// (0x0003d90c) cell_last_hwr_side_pane_g1

0xe4dd,	// (0x0003fda3) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x000416c3) cell_last_hwr_side_pane_g

0x8fff,	// (0x0003a8c5) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8fff,	// (0x0003a8c5) vkb2_area_bottom_space_btn_pane

0x887d,	// (0x0003a143) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf76,	// (0x0003f83c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9295,	// (0x0003ab5b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92b4,	// (0x0003ab7a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92b4,	// (0x0003ab7a) vkb2_area_bottom_space_btn_pane_g1

0x92ee,	// (0x0003abb4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x92ee,	// (0x0003abb4) vkb2_area_bottom_space_btn_pane_g2

0x9324,	// (0x0003abea) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9324,	// (0x0003abea) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x000416c8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x000416c8) vkb2_area_bottom_space_btn_pane_g

0x86db,	// (0x00039fa1) cel_fep_hwr_func_pane_ParamLimits

0x86db,	// (0x00039fa1) cel_fep_hwr_func_pane

0x8717,	// (0x00039fdd) cell_hwr_side_button_pane_ParamLimits

0x8717,	// (0x00039fdd) cell_hwr_side_button_pane

0xd952,	// (0x0003f218) aid_area_touch_clock_ParamLimits

0x211c,	// (0x000339e2) bg_uniindi_top_pane_ParamLimits

0xd964,	// (0x0003f22a) uniindi_top_pane_g1_ParamLimits

0xd97a,	// (0x0003f240) uniindi_top_pane_g2_ParamLimits

0xd986,	// (0x0003f24c) uniindi_top_pane_g3_ParamLimits

0xd997,	// (0x0003f25d) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x000415d9) uniindi_top_pane_g_ParamLimits

0xd9a4,	// (0x0003f26a) uniindi_top_pane_t1_ParamLimits

0x211c,	// (0x000339e2) bg_vkb2_func_pane_cp01_ParamLimits

0x211c,	// (0x000339e2) bg_vkb2_func_pane_cp01

0xe4e6,	// (0x0003fdac) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e6,	// (0x0003fdac) cel_fep_hwr_func_pane_g1

0x211c,	// (0x000339e2) bg_vkb2_func_pane_cp02_ParamLimits

0x211c,	// (0x000339e2) bg_vkb2_func_pane_cp02

0xe4e6,	// (0x0003fdac) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e6,	// (0x0003fdac) cell_hwr_side_button_pane_g1

0x9896,	// (0x0003b15c) status_pane_g4_ParamLimits

0x9896,	// (0x0003b15c) status_pane_g4

0x98b0,	// (0x0003b176) status_pane_t1

0xbd81,	// (0x0003d647) form2_midp_gauge_slider_cont_pane

0xbd89,	// (0x0003d64f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9b,	// (0x0003d661) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdad,	// (0x0003d673) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x000413a0) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbf,	// (0x0003d685) form2_midp_slider_pane_ParamLimits

0x8c6e,	// (0x0003a534) aid_size_cell_func_vkb2_ParamLimits

0x8c6e,	// (0x0003a534) aid_size_cell_func_vkb2

0xe487,	// (0x0003fd4d) slider_pane_g4_ParamLimits

0xe487,	// (0x0003fd4d) slider_pane_g4

0x936e,	// (0x0003ac34) form2_midp_gauge_slider_pane_t2_cp01

0x937c,	// (0x0003ac42) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x937c,	// (0x0003ac42) form2_midp_gauge_slider_pane_t3_cp01

0x9399,	// (0x0003ac5f) form2_midp_slider_pane_cp01

0x1f82,	// (0x00033848) navi_smil_pane

0xe51f,	// (0x0003fde5) navi_smil_pane_g1

0xe527,	// (0x0003fded) navi_smil_pane_t1

0xe4f4,	// (0x0003fdba) form2_midp_slider_pane_g1

0xe4fd,	// (0x0003fdc3) form2_midp_slider_pane_g2

0xe505,	// (0x0003fdcb) form2_midp_slider_pane_g3

0xe4f4,	// (0x0003fdba) form2_midp_slider_pane_g4

0xe50d,	// (0x0003fdd3) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x000416d1) form2_midp_slider_pane_g

0x935e,	// (0x0003ac24) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x935e,	// (0x0003ac24) vkb2_area_bottom_space_btn_pane_g4

0x7f27,	// (0x000397ed) lc0_navi_pane_ParamLimits

0x7f27,	// (0x000397ed) lc0_navi_pane

0x7f9d,	// (0x00039863) lc0_stat_indi_pane_ParamLimits

0x7f9d,	// (0x00039863) lc0_stat_indi_pane

0x7fb4,	// (0x0003987a) ls0_title_pane_ParamLimits

0x7fb4,	// (0x0003987a) ls0_title_pane

0x23a8,	// (0x00033c6e) bg_popup_sub_pane_cp14_ParamLimits

0xd939,	// (0x0003f1ff) list_uniindi_pane_ParamLimits

0xd945,	// (0x0003f20b) uniindi_top_pane_ParamLimits

0xd9e1,	// (0x0003f2a7) list_single_uniindi_pane_g1_ParamLimits

0xd9f4,	// (0x0003f2ba) list_single_uniindi_pane_t1_ParamLimits

0x93a2,	// (0x0003ac68) lc0_stat_clock_pane_ParamLimits

0x93a2,	// (0x0003ac68) lc0_stat_clock_pane

0xe535,	// (0x0003fdfb) lc0_stat_indi_pane_g1_ParamLimits

0xe535,	// (0x0003fdfb) lc0_stat_indi_pane_g1

0xe542,	// (0x0003fe08) lc0_stat_indi_pane_g2_ParamLimits

0xe542,	// (0x0003fe08) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x000416dc) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x000416dc) lc0_stat_indi_pane_g

0x93af,	// (0x0003ac75) lc0_uni_indicator_pane_ParamLimits

0x93af,	// (0x0003ac75) lc0_uni_indicator_pane

0xe54f,	// (0x0003fe15) ls0_title_pane_g1_ParamLimits

0xe54f,	// (0x0003fe15) ls0_title_pane_g1

0xe563,	// (0x0003fe29) ls0_title_pane_t1_ParamLimits

0xe563,	// (0x0003fe29) ls0_title_pane_t1

0x93bc,	// (0x0003ac82) lc0_uni_indicator_pane_g1_ParamLimits

0x93bc,	// (0x0003ac82) lc0_uni_indicator_pane_g1

0xe599,	// (0x0003fe5f) lc0_stat_clock_pane_t1

0x5f2e,	// (0x000377f4) main_ai5_pane

0xe5a7,	// (0x0003fe6d) ai5_sk_pane_ParamLimits

0xe5a7,	// (0x0003fe6d) ai5_sk_pane

0xe5b4,	// (0x0003fe7a) cell_ai5_widget_pane_ParamLimits

0xe5b4,	// (0x0003fe7a) cell_ai5_widget_pane

0xe674,	// (0x0003ff3a) aid_size_cell_widget_grid

0xe682,	// (0x0003ff48) bg_ai5_widget_pane_ParamLimits

0xe682,	// (0x0003ff48) bg_ai5_widget_pane

0xe6fe,	// (0x0003ffc4) cell_ai5_widget_pane_g2

0xe712,	// (0x0003ffd8) cell_ai5_widget_pane_g3

0xe72c,	// (0x0003fff2) cell_ai5_widget_pane_g4

0xe73c,	// (0x00040002) cell_ai5_widget_pane_g5

0xe74c,	// (0x00040012) cell_ai5_widget_pane_g6

0xe758,	// (0x0004001e) cell_ai5_widget_pane_g7

0xe7c4,	// (0x0004008a) cell_ai5_widget_pane_t1_ParamLimits

0xe7c4,	// (0x0004008a) cell_ai5_widget_pane_t1

0xe7e1,	// (0x000400a7) cell_ai5_widget_pane_t2_ParamLimits

0xe7e1,	// (0x000400a7) cell_ai5_widget_pane_t2

0xe7f9,	// (0x000400bf) cell_ai5_widget_pane_t3_ParamLimits

0xe7f9,	// (0x000400bf) cell_ai5_widget_pane_t3

0xe811,	// (0x000400d7) cell_ai5_widget_pane_t4_ParamLimits

0xe811,	// (0x000400d7) cell_ai5_widget_pane_t4

0xe837,	// (0x000400fd) cell_ai5_widget_pane_t5_ParamLimits

0xe837,	// (0x000400fd) cell_ai5_widget_pane_t5

0xe856,	// (0x0004011c) cell_ai5_widget_pane_t6_ParamLimits

0xe856,	// (0x0004011c) cell_ai5_widget_pane_t6

0xe868,	// (0x0004012e) cell_ai5_widget_pane_t7_ParamLimits

0xe868,	// (0x0004012e) cell_ai5_widget_pane_t7

0xe887,	// (0x0004014d) cell_ai5_widget_pane_t8_ParamLimits

0xe887,	// (0x0004014d) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x000416fc) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x000416fc) cell_ai5_widget_pane_t

0xe90b,	// (0x000401d1) grid_ai5_widget_pane

0x23a8,	// (0x00033c6e) highlight_cell_ai5_widget_pane_ParamLimits

0x23a8,	// (0x00033c6e) highlight_cell_ai5_widget_pane

0xe919,	// (0x000401df) ai5_sk_left_pane

0xe923,	// (0x000401e9) ai5_sk_middle_pane

0xe92d,	// (0x000401f3) ai5_sk_right_pane

0xe937,	// (0x000401fd) bg_ai5_widget_pane_g1_ParamLimits

0xe937,	// (0x000401fd) bg_ai5_widget_pane_g1

0xe943,	// (0x00040209) bg_ai5_widget_pane_g2_ParamLimits

0xe943,	// (0x00040209) bg_ai5_widget_pane_g2

0xe94f,	// (0x00040215) bg_ai5_widget_pane_g3_ParamLimits

0xe94f,	// (0x00040215) bg_ai5_widget_pane_g3

0xe95b,	// (0x00040221) bg_ai5_widget_pane_g4_ParamLimits

0xe95b,	// (0x00040221) bg_ai5_widget_pane_g4

0xe967,	// (0x0004022d) bg_ai5_widget_pane_g5_ParamLimits

0xe967,	// (0x0004022d) bg_ai5_widget_pane_g5

0xe973,	// (0x00040239) bg_ai5_widget_pane_g6_ParamLimits

0xe973,	// (0x00040239) bg_ai5_widget_pane_g6

0xe97f,	// (0x00040245) bg_ai5_widget_pane_g7_ParamLimits

0xe97f,	// (0x00040245) bg_ai5_widget_pane_g7

0xe98b,	// (0x00040251) bg_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x00040251) bg_ai5_widget_pane_g8

0xe997,	// (0x0004025d) bg_ai5_widget_pane_g9_ParamLimits

0xe997,	// (0x0004025d) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x00041715) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x00041715) bg_ai5_widget_pane_g

0xe9c9,	// (0x0004028f) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c9,	// (0x0004028f) cell_shortcut_ai5_widget_pane

0x2c43,	// (0x00034509) bg_cell_shortcut_ai5_widget_pane

0xe9da,	// (0x000402a0) cell_grid_ai5_widget_pane_g1

0x2c43,	// (0x00034509) highlight_cell_shortcut_ai5_widget_pane

0x9a1a,	// (0x0003b2e0) ai5_sk_left_pane_g1

0xe9e3,	// (0x000402a9) ai5_sk_left_pane_g2

0xe9eb,	// (0x000402b1) ai5_sk_left_pane_g3

0xe9f3,	// (0x000402b9) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x00041728) ai5_sk_left_pane_g

0xe9fb,	// (0x000402c1) ai5_sk_left_pane_t1

0x9a22,	// (0x0003b2e8) ai5_sk_right_pane_g1

0xea09,	// (0x000402cf) ai5_sk_right_pane_g2

0xea11,	// (0x000402d7) ai5_sk_right_pane_g3

0xea19,	// (0x000402df) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x00041731) ai5_sk_right_pane_g

0xea21,	// (0x000402e7) ai5_sk_right_pane_t1

0x9a22,	// (0x0003b2e8) ai5_sk_middle_pane_g1

0x9a1a,	// (0x0003b2e0) ai5_sk_middle_pane_g2

0x9a3a,	// (0x0003b300) ai5_sk_middle_pane_g3

0xea11,	// (0x000402d7) ai5_sk_middle_pane_g4

0xe9eb,	// (0x000402b1) ai5_sk_middle_pane_g5

0xea2f,	// (0x000402f5) ai5_sk_middle_pane_g6

0xea37,	// (0x000402fd) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0004173a) ai5_sk_middle_pane_g

0x7dad,	// (0x00039673) aid_touch_area_size_lc0_ParamLimits

0x7dad,	// (0x00039673) aid_touch_area_size_lc0

0x88ac,	// (0x0003a172) cell_hwr_candidate_pane_t1_ParamLimits

0x7dc9,	// (0x0003968f) aid_touch_navi_pane

0x9840,	// (0x0003b106) status_dt_navi_pane_ParamLimits

0x9840,	// (0x0003b106) status_dt_navi_pane

0x984d,	// (0x0003b113) status_dt_sta_pane_ParamLimits

0x984d,	// (0x0003b113) status_dt_sta_pane

0xea3f,	// (0x00040305) dt_sta_controll_pane

0xea4c,	// (0x00040312) dt_sta_indi_pane

0xea5d,	// (0x00040323) dt_sta_title_pane

0x211c,	// (0x000339e2) bg_dt_sta_indi_pane_ParamLimits

0x211c,	// (0x000339e2) bg_dt_sta_indi_pane

0xea70,	// (0x00040336) dt_sta_battery_pane

0xea78,	// (0x0004033e) dt_sta_indi_pane_g1

0xea81,	// (0x00040347) dt_sta_indi_pane_g2

0xea8a,	// (0x00040350) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x00041749) dt_sta_indi_pane_g

0xea93,	// (0x00040359) dt_sta_signal_pane

0x23a8,	// (0x00033c6e) bg_dt_sta_title_pane_ParamLimits

0x23a8,	// (0x00033c6e) bg_dt_sta_title_pane

0xa874,	// (0x0003c13a) dt_sta_title_pane_g1

0xea9c,	// (0x00040362) dt_sta_title_pane_t1_ParamLimits

0xea9c,	// (0x00040362) dt_sta_title_pane_t1

0x1f82,	// (0x00033848) bg_dt_sta_control_pane

0xeab1,	// (0x00040377) dt_sta_controll_pane_g1

0xeaba,	// (0x00040380) bg_dt_sta_title_pane_g1

0xeac3,	// (0x00040389) bg_dt_sta_title_pane_g2

0xeacc,	// (0x00040392) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x00041750) bg_dt_sta_title_pane_g

0xc046,	// (0x0003d90c) bg_dt_sta_indi_pane_g1

0xead5,	// (0x0004039b) dt_sta_signal_pane_g1

0xeadd,	// (0x000403a3) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x00041757) dt_sta_signal_pane_g

0xeae5,	// (0x000403ab) dt_sta_battery_pane_g1

0xeaee,	// (0x000403b4) dt_sta_battery_pane_t1

0xc046,	// (0x0003d90c) bg_dt_sta_control_pane_g1

0x287d,	// (0x00034143) fep_china_uni_eep_pane

0x2885,	// (0x0003414b) fep_china_uni_entry_pane_ParamLimits

0x2895,	// (0x0003415b) popup_fep_china_uni_window_g1_ParamLimits

0x28a5,	// (0x0003416b) popup_fep_china_uni_window_g2_ParamLimits

0x28a5,	// (0x0003416b) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00040faf) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00040faf) popup_fep_china_uni_window_g

0xeafd,	// (0x000403c3) fep_china_uni_eep_pane_g1

0xeb05,	// (0x000403cb) fep_china_uni_eep_pane_t1

0xe516,	// (0x0003fddc) aid_touch_area_size_smil_player

0x7f1f,	// (0x000397e5) lc0_clock_pane

0x98a4,	// (0x0003b16a) status_pane_g5_ParamLimits

0x98a4,	// (0x0003b16a) status_pane_g5

0x7961,	// (0x00039227) popup_keymap_window

0x9862,	// (0x0003b128) status_icon_pane

0xe712,	// (0x0003ffd8) cell_ai5_widget_pane_g3_ParamLimits

0xe72c,	// (0x0003fff2) cell_ai5_widget_pane_g4_ParamLimits

0xe73c,	// (0x00040002) cell_ai5_widget_pane_g5_ParamLimits

0xe764,	// (0x0004002a) cell_ai5_widget_pane_g8_ParamLimits

0xe764,	// (0x0004002a) cell_ai5_widget_pane_g8

0xe778,	// (0x0004003e) cell_ai5_widget_pane_g9_ParamLimits

0xe778,	// (0x0004003e) cell_ai5_widget_pane_g9

0xe78c,	// (0x00040052) cell_ai5_widget_pane_g10_ParamLimits

0xe78c,	// (0x00040052) cell_ai5_widget_pane_g10

0xeb14,	// (0x000403da) status_icon_pane_g1

0x1f82,	// (0x00033848) bg_popup_sub_pane_cp13

0xeb1c,	// (0x000403e2) popup_keymap_window_t1

0x76a4,	// (0x00038f6a) control_pane_g6_ParamLimits

0x76a4,	// (0x00038f6a) control_pane_g6

0x76b1,	// (0x00038f77) control_pane_g7_ParamLimits

0x76b1,	// (0x00038f77) control_pane_g7

0x76be,	// (0x00038f84) control_pane_g8_ParamLimits

0x76be,	// (0x00038f84) control_pane_g8

0xea3f,	// (0x00040305) dt_sta_controll_pane_ParamLimits

0xea4c,	// (0x00040312) dt_sta_indi_pane_ParamLimits

0xea5d,	// (0x00040323) dt_sta_title_pane_ParamLimits

0x22f3,	// (0x00033bb9) aid_size_touch_scroll_bar_cale

0x6007,	// (0x000378cd) popup_discreet_window_ParamLimits

0x6007,	// (0x000378cd) popup_discreet_window

0x6081,	// (0x00037947) popup_sk_window

0xa0b8,	// (0x0003b97e) bg_popup_sub_pane_cp28_ParamLimits

0xa0b8,	// (0x0003b97e) bg_popup_sub_pane_cp28

0xeb2a,	// (0x000403f0) popup_discreet_window_g1_ParamLimits

0xeb2a,	// (0x000403f0) popup_discreet_window_g1

0xeb4a,	// (0x00040410) popup_discreet_window_t1_ParamLimits

0xeb4a,	// (0x00040410) popup_discreet_window_t1

0xeb68,	// (0x0004042e) popup_discreet_window_t2_ParamLimits

0xeb68,	// (0x0004042e) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0004175c) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0004175c) popup_discreet_window_t

0x93d0,	// (0x0003ac96) popup_sk_window_g1

0x93da,	// (0x0003aca0) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x00041763) popup_sk_window_g

0x93e2,	// (0x0003aca8) popup_sk_window_t1

0x93f0,	// (0x0003acb6) popup_sk_window_t1_copy1

0xe6fe,	// (0x0003ffc4) cell_ai5_widget_pane_g2_ParamLimits

0xe899,	// (0x0004015f) cell_ai5_widget_pane_t9_ParamLimits

0xe899,	// (0x0004015f) cell_ai5_widget_pane_t9

0x1f82,	// (0x00033848) main_fep_fshwr2_pane

0x93fe,	// (0x0003acc4) aid_fshwr2_btn_pane

0x9410,	// (0x0003acd6) aid_fshwr2_syb_pane

0x9422,	// (0x0003ace8) aid_fshwr2_txt_pane

0x942e,	// (0x0003acf4) fshwr2_func_candi_pane

0x944a,	// (0x0003ad10) fshwr2_hwr_syb_pane

0x9464,	// (0x0003ad2a) fshwr2_icf_pane

0x5f2e,	// (0x000377f4) fshwr2_icf_bg_pane

0x9492,	// (0x0003ad58) fshwr2_icf_pane_t1_ParamLimits

0x9492,	// (0x0003ad58) fshwr2_icf_pane_t1

0x27fa,	// (0x000340c0) fshwr2_func_candi_pane_g1

0xebba,	// (0x00040480) fshwr2_func_candi_row_pane_ParamLimits

0xebba,	// (0x00040480) fshwr2_func_candi_row_pane

0x94ab,	// (0x0003ad71) cell_fshwr2_syb_pane_ParamLimits

0x94ab,	// (0x0003ad71) cell_fshwr2_syb_pane

0x94ce,	// (0x0003ad94) fshwr2_hwr_syb_pane_g1_ParamLimits

0x94ce,	// (0x0003ad94) fshwr2_hwr_syb_pane_g1

0x5f2e,	// (0x000377f4) bg_popup_call_pane_cp01

0x94dc,	// (0x0003ada2) fshwr2_func_candi_cell_pane_ParamLimits

0x94dc,	// (0x0003ada2) fshwr2_func_candi_cell_pane

0xa714,	// (0x0003bfda) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa714,	// (0x0003bfda) fshwr2_func_candi_cell_bg_pane

0x9527,	// (0x0003aded) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9527,	// (0x0003aded) fshwr2_func_candi_cell_pane_g1

0x9547,	// (0x0003ae0d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9547,	// (0x0003ae0d) fshwr2_func_candi_cell_pane_t1

0x5f2e,	// (0x000377f4) bg_button_pane_cp08

0x24ea,	// (0x00033db0) cell_fshwr2_syb_bg_pane

0x955a,	// (0x0003ae20) cell_fshwr2_syb_bg_pane_g1

0x956e,	// (0x0003ae34) cell_fshwr2_syb_bg_pane_t1

0x23a8,	// (0x00033c6e) main_tmo_pane

0xabad,	// (0x0003c473) uni_indicator_pane_g1_ParamLimits

0xabc0,	// (0x0003c486) uni_indicator_pane_g2_ParamLimits

0xabd2,	// (0x0003c498) uni_indicator_pane_g3_ParamLimits

0xabe1,	// (0x0003c4a7) uni_indicator_pane_g4_ParamLimits

0xabe1,	// (0x0003c4a7) uni_indicator_pane_g4

0xabf5,	// (0x0003c4bb) uni_indicator_pane_g5_ParamLimits

0xabf5,	// (0x0003c4bb) uni_indicator_pane_g5

0xabf5,	// (0x0003c4bb) uni_indicator_pane_g6_ParamLimits

0xabf5,	// (0x0003c4bb) uni_indicator_pane_g6

0xf8e8,	// (0x000411ae) uni_indicator_pane_g_ParamLimits

0xd521,	// (0x0003ede7) popup_tmo_note_window_ParamLimits

0xd521,	// (0x0003ede7) popup_tmo_note_window

0x8c50,	// (0x0003a516) fshwr2_bg_pane

0x9538,	// (0x0003adfe) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9538,	// (0x0003adfe) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x00041768) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x00041768) fshwr2_func_candi_cell_pane_g

0x8865,	// (0x0003a12b) bg_popup_window_pane_cp01

0x9584,	// (0x0003ae4a) bg_popup_window_pane_g1_cp01

0xebe1,	// (0x000404a7) bg_popup_window_pane_cp22_ParamLimits

0xebe1,	// (0x000404a7) bg_popup_window_pane_cp22

0xebef,	// (0x000404b5) listscroll_tmo_link_pane_ParamLimits

0xebef,	// (0x000404b5) listscroll_tmo_link_pane

0xec2f,	// (0x000404f5) popup_tmo_note_window_g1_ParamLimits

0xec2f,	// (0x000404f5) popup_tmo_note_window_g1

0xec3c,	// (0x00040502) tmo_note_info_pane_ParamLimits

0xec3c,	// (0x00040502) tmo_note_info_pane

0xec56,	// (0x0004051c) list_tmo_note_info_pane_g1_ParamLimits

0xec56,	// (0x0004051c) list_tmo_note_info_pane_g1

0xec6d,	// (0x00040533) list_tmo_note_info_pane_g2_ParamLimits

0xec6d,	// (0x00040533) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0004176d) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0004176d) list_tmo_note_info_pane_g

0xec89,	// (0x0004054f) list_tmo_note_info_text_pane_ParamLimits

0xec89,	// (0x0004054f) list_tmo_note_info_text_pane

0xed0a,	// (0x000405d0) list_tmo_link_pane

0xed17,	// (0x000405dd) scroll_pane_cp20

0xed24,	// (0x000405ea) list_single_tmo_link_pane_ParamLimits

0xed24,	// (0x000405ea) list_single_tmo_link_pane

0xed34,	// (0x000405fa) list_single_tmo_link_pane_t1

0xed42,	// (0x00040608) list_tmo_note_info_text_pane_t1_ParamLimits

0xed42,	// (0x00040608) list_tmo_note_info_text_pane_t1

0x6c04,	// (0x000384ca) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6c04,	// (0x000384ca) aid_size_touch_scroll_bar_cp01

0x6aed,	// (0x000383b3) aid_size_touch_slider_marker

0x6069,	// (0x0003792f) popup_settings_window_ParamLimits

0x6069,	// (0x0003792f) popup_settings_window

0x4805,	// (0x000360cb) popup_candi_list_indi_window

0x7dc9,	// (0x0003968f) aid_touch_navi_pane_ParamLimits

0x8bab,	// (0x0003a471) rs_clock_indi_pane

0x8bb4,	// (0x0003a47a) sctrl_sk_bottom_pane_ParamLimits

0x8bc5,	// (0x0003a48b) sctrl_sk_top_pane_ParamLimits

0x8cc8,	// (0x0003a58e) popup_fep_tooltip_window

0xe674,	// (0x0003ff3a) aid_size_cell_widget_grid_ParamLimits

0xe6e9,	// (0x0003ffaf) cell_ai5_widget_pane_g1_ParamLimits

0xe6e9,	// (0x0003ffaf) cell_ai5_widget_pane_g1

0xe74c,	// (0x00040012) cell_ai5_widget_pane_g6_ParamLimits

0xe758,	// (0x0004001e) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x000416e1) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x000416e1) cell_ai5_widget_pane_g

0xe8c8,	// (0x0004018e) cell_ai5_widget_pane_t10_ParamLimits

0xe8c8,	// (0x0004018e) cell_ai5_widget_pane_t10

0xe90b,	// (0x000401d1) grid_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x00040269) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x00040269) cell_contacts_ai5_widget_pane

0xeb7d,	// (0x00040443) popup_discreet_window_t3_ParamLimits

0xeb7d,	// (0x00040443) popup_discreet_window_t3

0x947c,	// (0x0003ad42) popup_fshwr2_char_preview_window_ParamLimits

0x947c,	// (0x0003ad42) popup_fshwr2_char_preview_window

0xeca7,	// (0x0004056d) tmo_note_info_pane_t1

0xecbc,	// (0x00040582) tmo_note_info_pane_t2

0xecd1,	// (0x00040597) tmo_note_info_pane_t3

0xece6,	// (0x000405ac) tmo_note_info_pane_t4

0xecf8,	// (0x000405be) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x00041772) tmo_note_info_pane_t

0xed0a,	// (0x000405d0) list_tmo_link_pane_ParamLimits

0xed17,	// (0x000405dd) scroll_pane_cp20_ParamLimits

0x5f2e,	// (0x000377f4) bg_popup_fep_char_preview_window_cp01

0xed5b,	// (0x00040621) popup_fshwr2_char_preview_window_t1

0xed69,	// (0x0004062f) popup_candi_list_indi_window_g1

0xed72,	// (0x00040638) bg_cell_contacts_ai5_widget_pane

0xed7e,	// (0x00040644) cell_contacts_ai5_widget_pane_g1

0xc6eb,	// (0x0003dfb1) cell_contacts_ai5_widget_pane_g2

0xed93,	// (0x00040659) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0004177d) cell_contacts_ai5_widget_pane_g

0xed9f,	// (0x00040665) cell_contacts_ai5_widget_pane_t1

0x23a8,	// (0x00033c6e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee16,	// (0x000406dc) settings_container_pane

0x2c43,	// (0x00034509) listscroll_set_pane_copy1

0xb722,	// (0x0003cfe8) scroll_pane_cp121_copy1

0x9e5d,	// (0x0003b723) set_content_pane_copy1

0xee22,	// (0x000406e8) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x000406e8) aid_height_set_list_copy1

0xaded,	// (0x0003c6b3) aid_size_parent_copy1_ParamLimits

0xaded,	// (0x0003c6b3) aid_size_parent_copy1

0xee2e,	// (0x000406f4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x000406f4) button_value_adjust_pane_cp6_copy1

0x24ea,	// (0x00033db0) list_highlight_pane_cp2_copy1_ParamLimits

0x24ea,	// (0x00033db0) list_highlight_pane_cp2_copy1

0xee42,	// (0x00040708) list_set_pane_copy1_ParamLimits

0xee42,	// (0x00040708) list_set_pane_copy1

0xedb1,	// (0x00040677) main_pane_set_t1_copy1_ParamLimits

0xedb1,	// (0x00040677) main_pane_set_t1_copy1

0xedeb,	// (0x000406b1) main_pane_set_t2_copy1_ParamLimits

0xedeb,	// (0x000406b1) main_pane_set_t2_copy1

0xeeef,	// (0x000407b5) main_pane_set_t3_copy1

0xeefd,	// (0x000407c3) main_pane_set_t4_copy1

0xee0a,	// (0x000406d0) set_content_pane_g1_copy1_ParamLimits

0xee0a,	// (0x000406d0) set_content_pane_g1_copy1

0xef0b,	// (0x000407d1) setting_code_pane_copy1

0xef13,	// (0x000407d9) setting_slider_graphic_pane_copy1

0xef13,	// (0x000407d9) setting_slider_pane_copy1

0xef1b,	// (0x000407e1) setting_text_pane_copy1

0xef1b,	// (0x000407e1) setting_volume_pane_copy1

0xef0b,	// (0x000407d1) settings_code_pane_cp2_copy1

0xef23,	// (0x000407e9) settings_code_pane_cp_copy1_ParamLimits

0xef23,	// (0x000407e9) settings_code_pane_cp_copy1

0x958d,	// (0x0003ae53) volume_set_pane_copy1

0xef37,	// (0x000407fd) volume_set_pane_g10_copy1

0xef3f,	// (0x00040805) volume_set_pane_g1_copy1

0xef47,	// (0x0004080d) volume_set_pane_g2_copy1

0xef4f,	// (0x00040815) volume_set_pane_g3_copy1

0xef57,	// (0x0004081d) volume_set_pane_g4_copy1

0xef5f,	// (0x00040825) volume_set_pane_g5_copy1

0xef67,	// (0x0004082d) volume_set_pane_g6_copy1

0xef6f,	// (0x00040835) volume_set_pane_g7_copy1

0xef77,	// (0x0004083d) volume_set_pane_g8_copy1

0xef7f,	// (0x00040845) volume_set_pane_g9_copy1

0x1ff2,	// (0x000338b8) bg_set_opt_pane_cp_copy1_ParamLimits

0x1ff2,	// (0x000338b8) bg_set_opt_pane_cp_copy1

0x9595,	// (0x0003ae5b) setting_slider_pane_t1_copy1_ParamLimits

0x9595,	// (0x0003ae5b) setting_slider_pane_t1_copy1

0x95b4,	// (0x0003ae7a) setting_slider_pane_t2_copy1_ParamLimits

0x95b4,	// (0x0003ae7a) setting_slider_pane_t2_copy1

0x95ce,	// (0x0003ae94) setting_slider_pane_t3_copy1_ParamLimits

0x95ce,	// (0x0003ae94) setting_slider_pane_t3_copy1

0x95e6,	// (0x0003aeac) slider_set_pane_copy1_ParamLimits

0x95e6,	// (0x0003aeac) slider_set_pane_copy1

0x2400,	// (0x00033cc6) set_opt_bg_pane_g1_copy2

0x2408,	// (0x00033cce) set_opt_bg_pane_g2_copy2

0xef87,	// (0x0004084d) set_opt_bg_pane_g3_copy2

0x2418,	// (0x00033cde) set_opt_bg_pane_g4_copy2

0x2420,	// (0x00033ce6) set_opt_bg_pane_g5_copy2

0x2428,	// (0x00033cee) set_opt_bg_pane_g6_copy2

0xef91,	// (0x00040857) set_opt_bg_pane_g7_copy2

0xef99,	// (0x0004085f) set_opt_bg_pane_g8_copy2

0xefa3,	// (0x00040869) set_opt_bg_pane_g9_copy2

0x95fc,	// (0x0003aec2) aid_size_touch_slider_mark_copy1_ParamLimits

0x95fc,	// (0x0003aec2) aid_size_touch_slider_mark_copy1

0xefad,	// (0x00040873) slider_set_pane_g1_copy1

0x9610,	// (0x0003aed6) slider_set_pane_g2_copy1

0x8395,	// (0x00039c5b) slider_set_pane_g3_copy1_ParamLimits

0x8395,	// (0x00039c5b) slider_set_pane_g3_copy1

0x83a9,	// (0x00039c6f) slider_set_pane_g4_copy1_ParamLimits

0x83a9,	// (0x00039c6f) slider_set_pane_g4_copy1

0x83c1,	// (0x00039c87) slider_set_pane_g5_copy1_ParamLimits

0x83c1,	// (0x00039c87) slider_set_pane_g5_copy1

0x8395,	// (0x00039c5b) slider_set_pane_g6_copy1_ParamLimits

0x8395,	// (0x00039c5b) slider_set_pane_g6_copy1

0x9618,	// (0x0003aede) slider_set_pane_g7_copy1_ParamLimits

0x9618,	// (0x0003aede) slider_set_pane_g7_copy1

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp2_copy1

0xefb6,	// (0x0004087c) setting_slider_graphic_pane_g1_copy1

0xefbf,	// (0x00040885) setting_slider_graphic_pane_t1_copy1

0xefcf,	// (0x00040895) setting_slider_graphic_pane_t2_copy1

0xefdf,	// (0x000408a5) slider_set_pane_cp_copy1

0xefef,	// (0x000408b5) input_focus_pane_cp1_copy1

0xeff8,	// (0x000408be) list_set_text_pane_copy1

0xf000,	// (0x000408c6) setting_text_pane_g1_copy1

0x4eca,	// (0x00036790) set_text_pane_t1_copy1

0xefef,	// (0x000408b5) input_focus_pane_cp2_copy1

0xf000,	// (0x000408c6) setting_code_pane_g1_copy1

0xf009,	// (0x000408cf) setting_code_pane_t1_copy1

0xf017,	// (0x000408dd) list_set_graphic_pane_copy1

0x1f96,	// (0x0003385c) bg_set_opt_pane_cp4_copy1

0x29d5,	// (0x0003429b) list_set_graphic_pane_g1_copy1_ParamLimits

0x29d5,	// (0x0003429b) list_set_graphic_pane_g1_copy1

0xf02b,	// (0x000408f1) list_set_graphic_pane_g2_copy1

0x29ed,	// (0x000342b3) list_set_graphic_pane_t1_copy1_ParamLimits

0x29ed,	// (0x000342b3) list_set_graphic_pane_t1_copy1

0xc046,	// (0x0003d90c) rs_clock_indi_pane_g1

0xf033,	// (0x000408f9) rs_clock_indi_pane_t1

0xf041,	// (0x00040907) rs_indi_pane

0xf049,	// (0x0004090f) rs_indi_pane_g1

0xf052,	// (0x00040918) rs_indi_pane_g2

0xed69,	// (0x0004062f) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x00041784) rs_indi_pane_g

0x2c43,	// (0x00034509) bg_popup_preview_window_pane_cp03

0xf05b,	// (0x00040921) popup_fep_tooltip_window_t1

0xccd0,	// (0x0003e596) popup_note2_window_g2_ParamLimits

0xccd0,	// (0x0003e596) popup_note2_window_g2

0x0001,

0xfc52,	// (0x00041518) popup_note2_window_g_ParamLimits

0xfc52,	// (0x00041518) popup_note2_window_g

0xd1bd,	// (0x0003ea83) bg_popup_sub_pane_cp11_ParamLimits

0xd1ca,	// (0x0003ea90) cell_ai3_links_pane_g1_ParamLimits

0xd1e1,	// (0x0003eaa7) cell_ai3_links_pane_t1

0x4eca,	// (0x00036790) set_text_pane_t1_copy1_ParamLimits

0x73b7,	// (0x00038c7d) cell_graphic_popup_pane_cp2_ParamLimits

0x73b7,	// (0x00038c7d) cell_graphic_popup_pane_cp2

0xf069,	// (0x0004092f) cell_graphic_popup_pane_g1_cp2

0x2276,	// (0x00033b3c) cell_graphic_popup_pane_g2_cp2

0xf071,	// (0x00040937) cell_graphic_popup_pane_g3_cp2

0xf079,	// (0x0004093f) cell_graphic_popup_pane_t2_cp2

0x2287,	// (0x00033b4d) grid_highlight_pane_cp3_cp2

0x2677,	// (0x00033f3d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x23a8,	// (0x00033c6e) main_tmo_pane_ParamLimits

0xd515,	// (0x0003eddb) popup_tmo_big_image_note_window

0xe6d8,	// (0x0003ff9e) cell_ai5_widget_list_pane

0xe6e0,	// (0x0003ffa6) cell_ai5_widget_lrg_icon_pane

0xeca7,	// (0x0004056d) tmo_note_info_pane_t1_ParamLimits

0xecbc,	// (0x00040582) tmo_note_info_pane_t2_ParamLimits

0xecd1,	// (0x00040597) tmo_note_info_pane_t3_ParamLimits

0xece6,	// (0x000405ac) tmo_note_info_pane_t4_ParamLimits

0xecf8,	// (0x000405be) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x00041772) tmo_note_info_pane_t_ParamLimits

0xee16,	// (0x000406dc) settings_container_pane_ParamLimits

0xefe7,	// (0x000408ad) indicator_popup_pane_cp5

0xefe7,	// (0x000408ad) indicator_popup_pane_cp6

0xf017,	// (0x000408dd) list_set_graphic_pane_copy1_ParamLimits

0x1f82,	// (0x00033848) bg_popup_window_pane_cp23

0xf087,	// (0x0004094d) popup_tmo_big_image_note_window_g1

0xf090,	// (0x00040956) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x00040966) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x00040976) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0004178b) popup_tmo_big_image_note_window_t

0xc046,	// (0x0003d90c) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x00040986) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x00040994) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x00040994) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x000409ab) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x000409ab) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x000409b8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x000409b8) cell_ai5_widget_list_row_pane_t1

0xf11d,	// (0x000409e3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf11d,	// (0x000409e3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x00041792) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x00041792) cell_ai5_widget_list_row_pane_t

0x5f2e,	// (0x000377f4) main_fep_vtchi_ss_pane

0xf16d,	// (0x00040a33) popup_fep_char_pre_window

0xf175,	// (0x00040a3b) popup_fep_ituss_window

0xf1a1,	// (0x00040a67) popup_fep_vkbss_window

0x24ea,	// (0x00033db0) grid_vkbss_keypad_pane_ParamLimits

0x24ea,	// (0x00033db0) grid_vkbss_keypad_pane

0xf1e1,	// (0x00040aa7) ituss_keypad_pane

0x963a,	// (0x0003af00) aid_vkbss_key_offset_ParamLimits

0x963a,	// (0x0003af00) aid_vkbss_key_offset

0x9646,	// (0x0003af0c) cell_vkbss_key_pane_ParamLimits

0x9646,	// (0x0003af0c) cell_vkbss_key_pane

0xf1f0,	// (0x00040ab6) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x00040ab6) bg_cell_vkbss_key_g1

0xf1fc,	// (0x00040ac2) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x00040ac2) cell_vkbss_key_3p_pane

0xf232,	// (0x00040af8) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x00040af8) cell_vkbss_key_g1

0xf268,	// (0x00040b2e) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x00040b2e) cell_vkbss_key_t1

0x967a,	// (0x0003af40) cell_ituss_key_pane_ParamLimits

0x967a,	// (0x0003af40) cell_ituss_key_pane

0xf2c4,	// (0x00040b8a) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x00040b8a) bg_cell_ituss_key_g1

0xf2d0,	// (0x00040b96) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x00040b96) cell_ituss_key_pane_g1

0x968b,	// (0x0003af51) cell_ituss_key_pane_g2_ParamLimits

0x968b,	// (0x0003af51) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x00041799) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x00041799) cell_ituss_key_pane_g

0x970f,	// (0x0003afd5) cell_ituss_key_t1_ParamLimits

0x970f,	// (0x0003afd5) cell_ituss_key_t1

0x9749,	// (0x0003b00f) cell_ituss_key_t2_ParamLimits

0x9749,	// (0x0003b00f) cell_ituss_key_t2

0x977a,	// (0x0003b040) cell_ituss_key_t3_ParamLimits

0x977a,	// (0x0003b040) cell_ituss_key_t3

0x9749,	// (0x0003b00f) cell_ituss_key_t4_ParamLimits

0x9749,	// (0x0003b00f) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x000417a6) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x000417a6) cell_ituss_key_t

0xf2f6,	// (0x00040bbc) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x00040bc4) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x00040bcc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x000417b1) cell_vkbss_key_3p_pane_g

0x2c43,	// (0x00034509) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x00040bd4) popup_fep_char_pre_window_t1

0xe66a,	// (0x0003ff30) main_ai5_sk_pane

0xed72,	// (0x00040638) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed7e,	// (0x00040644) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6eb,	// (0x0003dfb1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed93,	// (0x00040659) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0004177d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9f,	// (0x00040665) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x23a8,	// (0x00033c6e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x00040be2) main_ai5_sk_pane_g1

0x9ef9,	// (0x0003b7bf) popup_query_code_window_g1

0xf18b,	// (0x00040a51) popup_fep_vkb_icf_pane

0xf1b8,	// (0x00040a7e) popup_fep_vtchi_icf_pane

0x24ea,	// (0x00033db0) bg_icf_pane

0x24ea,	// (0x00033db0) list_vkb_icf_pane

0xf325,	// (0x00040beb) bg_icf_pane_cp01

0xf338,	// (0x00040bfe) vtchi_icf_list_pane

0xf3a0,	// (0x00040c66) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x00040c66) list_vkb_icf_pane_t1

0xf3c2,	// (0x00040c88) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x00040c88) vtchi_icf_list_pane_t1

0xf175,	// (0x00040a3b) popup_fep_ituss_window_ParamLimits

0xf1b8,	// (0x00040a7e) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e1,	// (0x00040aa7) ituss_keypad_pane_ParamLimits

0x962e,	// (0x0003aef4) ituss_sks_pane

0x24ea,	// (0x00033db0) bg_icf_pane_ParamLimits

0xf145,	// (0x00040a0b) icf_edit_indi_pane_ParamLimits

0xf145,	// (0x00040a0b) icf_edit_indi_pane

0x24ea,	// (0x00033db0) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x00040beb) bg_icf_pane_cp01_ParamLimits

0xf160,	// (0x00040a26) icf_edit_indi_pane_cp01_ParamLimits

0xf160,	// (0x00040a26) icf_edit_indi_pane_cp01

0xf340,	// (0x00040c06) vtchi_query_pane

0xe4e6,	// (0x0003fdac) icf_edit_indi_pane_g1_ParamLimits

0xe4e6,	// (0x0003fdac) icf_edit_indi_pane_g1

0xf43a,	// (0x00040d00) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x00040d00) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x000417dc) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x000417dc) icf_edit_indi_pane_g

0xf44e,	// (0x00040d14) icf_edit_indi_pane_t1

0xf3e3,	// (0x00040ca9) bg_input_focus_pane_cp042

0x22ea,	// (0x00033bb0) vtchi_button_pane

0xf3ec,	// (0x00040cb2) vtchi_query_pane_t1

0xf3fa,	// (0x00040cc0) vtchi_query_pane_t2

0xf408,	// (0x00040cce) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x000417cb) vtchi_query_pane_t

0x5f2e,	// (0x000377f4) bg_button_pane_cp13

0xf416,	// (0x00040cdc) vtchi_button_pane_g1

0x97bd,	// (0x0003b083) ituss_sks_pane_g1

0x97c8,	// (0x0003b08e) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x000417d2) ituss_sks_pane_g

0xf41e,	// (0x00040ce4) ituss_sks_pane_t1

0xf42c,	// (0x00040cf2) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x000417d7) ituss_sks_pane_t

0xbaba,	// (0x0003d380) indicator_nsta_pane_cp_g1

0xbac3,	// (0x0003d389) indicator_nsta_pane_cp_g2

0xbacb,	// (0x0003d391) indicator_nsta_pane_cp_g3

0xbad3,	// (0x0003d399) indicator_nsta_pane_cp_g4

0xbac3,	// (0x0003d389) indicator_nsta_pane_cp_g5

0xbacb,	// (0x0003d391) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x00041356) indicator_nsta_pane_cp_g

0xe215,	// (0x0003fadb) cell_graphic2_pane_t2_ParamLimits

0xe215,	// (0x0003fadb) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x00041668) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x00041668) cell_graphic2_pane_t

0xe241,	// (0x0003fb07) cell_graphic2_control_pane_t1

0x70b8,	// (0x0003897e) signal_pane_g3_ParamLimits

0x70b8,	// (0x0003897e) signal_pane_g3

0x70ca,	// (0x00038990) signal_pane_g4_ParamLimits

0x70ca,	// (0x00038990) signal_pane_g4

0xf12f,	// (0x000409f5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12f,	// (0x000409f5) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x00040baa) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x00040baa) cell_ituss_key_pane_t1

0x9b2c,	// (0x0003b3f2) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b2c,	// (0x0003b3f2) form_field_data_wide_pane_vc_t2

0x9b40,	// (0x0003b406) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b40,	// (0x0003b406) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00041096) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00041096) form_field_data_wide_pane_vc_t

0xb764,	// (0x0003d02a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb764,	// (0x0003d02a) form_field_slider_wide_pane_vc_t3

0xb842,	// (0x0003d108) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb842,	// (0x0003d108) form_field_popup_wide_pane_vc_t2

0xb859,	// (0x0003d11f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb859,	// (0x0003d11f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x00041345) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x00041345) form_field_popup_wide_pane_vc_t

0x93fe,	// (0x0003acc4) aid_fshwr2_btn_pane_ParamLimits

0x9410,	// (0x0003acd6) aid_fshwr2_syb_pane_ParamLimits

0x9422,	// (0x0003ace8) aid_fshwr2_txt_pane_ParamLimits

0x8c50,	// (0x0003a516) fshwr2_bg_pane_ParamLimits

0x942e,	// (0x0003acf4) fshwr2_func_candi_pane_ParamLimits

0x944a,	// (0x0003ad10) fshwr2_hwr_syb_pane_ParamLimits

0x9464,	// (0x0003ad2a) fshwr2_icf_pane_ParamLimits

0x4bff,	// (0x000364c5) list_double_graphic_pane_vc_g4_ParamLimits

0x4bff,	// (0x000364c5) list_double_graphic_pane_vc_g4

0x96ab,	// (0x0003af71) cell_ituss_key_pane_g3_ParamLimits

0x96ab,	// (0x0003af71) cell_ituss_key_pane_g3

0x97ab,	// (0x0003b071) cell_ituss_key_t5_ParamLimits

0x97ab,	// (0x0003b071) cell_ituss_key_t5

0xf1a1,	// (0x00040a67) popup_fep_vkbss_window_ParamLimits

0xc81c,	// (0x0003e0e2) aid_cell_ai5_quarter

0xf44e,	// (0x00040d14) icf_edit_indi_pane_t1_ParamLimits

0x63ed,	// (0x00037cb3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x63ed,	// (0x00037cb3) aid_tch_indicator_popup_pane_cp2

0x6400,	// (0x00037cc6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6400,	// (0x00037cc6) aid_tch_query_popup_data_pane_cp2

0x9ea1,	// (0x0003b767) aid_tch_query_popup_pane_ParamLimits

0x9ea1,	// (0x0003b767) aid_tch_query_popup_pane

0x9ea1,	// (0x0003b767) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9ea1,	// (0x0003b767) aid_tch_query_popup_data_pane_cp1

0x24ea,	// (0x00033db0) cell_fshwr2_syb_bg_pane_ParamLimits

0x955a,	// (0x0003ae20) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x956e,	// (0x0003ae34) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18b,	// (0x00040a51) popup_fep_vkb_icf_pane_ParamLimits

0x925e,	// (0x0003ab24) bg_popup_fep_char_preview_window_g10

0xe7a0,	// (0x00040066) cell_ai5_widget_pane_g11_ParamLimits

0xe7a0,	// (0x00040066) cell_ai5_widget_pane_g11

0xe7ac,	// (0x00040072) cell_ai5_widget_pane_g12_ParamLimits

0xe7ac,	// (0x00040072) cell_ai5_widget_pane_g12

0xe7b8,	// (0x0004007e) cell_ai5_widget_pane_g13_ParamLimits

0xe7b8,	// (0x0004007e) cell_ai5_widget_pane_g13

0xe8e7,	// (0x000401ad) cell_ai5_widget_pane_t11_ParamLimits

0xe8e7,	// (0x000401ad) cell_ai5_widget_pane_t11

0xe8f9,	// (0x000401bf) cell_ai5_widget_pane_t12_ParamLimits

0xe8f9,	// (0x000401bf) cell_ai5_widget_pane_t12

0x96b7,	// (0x0003af7d) cell_ituss_key_pane_g4_ParamLimits

0x96b7,	// (0x0003af7d) cell_ituss_key_pane_g4

0x96d3,	// (0x0003af99) cell_ituss_key_pane_g5_ParamLimits

0x96d3,	// (0x0003af99) cell_ituss_key_pane_g5

0x96ef,	// (0x0003afb5) cell_ituss_key_pane_g6_ParamLimits

0x96ef,	// (0x0003afb5) cell_ituss_key_pane_g6

0x9a12,	// (0x0003b2d8) bg_icf_pane_g1

0xf348,	// (0x00040c0e) bg_icf_pane_g2

0xf354,	// (0x00040c1a) bg_icf_pane_g3

0xf35e,	// (0x00040c24) bg_icf_pane_g4

0xf36a,	// (0x00040c30) bg_icf_pane_g5

0xf374,	// (0x00040c3a) bg_icf_pane_g6

0xf380,	// (0x00040c46) bg_icf_pane_g7

0xf38a,	// (0x00040c50) bg_icf_pane_g8

0xf396,	// (0x00040c5c) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x000417b8) bg_icf_pane_g

0xf1ce,	// (0x00040a94) popup_hyb_candi_window_ParamLimits

0xf1ce,	// (0x00040a94) popup_hyb_candi_window

0x9a9e,	// (0x0003b364) bg_popup_sub_pane_cp01_ParamLimits

0x9a9e,	// (0x0003b364) bg_popup_sub_pane_cp01

0xf467,	// (0x00040d2d) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x00040d2d) entry_hyb_candi_pane

0xf476,	// (0x00040d3c) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x00040d3c) grid_hyb_candi_pane

0xf48b,	// (0x00040d51) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x00040d51) grid_hyb_phrase_pane

0xf49a,	// (0x00040d60) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x00040d60) cell_hyb_candi_pane

0xf4bd,	// (0x00040d83) cell_hyb_candi_scroll_pane

0x27fa,	// (0x000340c0) cell_hyb_candi_pane_g1

0xf4c6,	// (0x00040d8c) cell_hyb_candi_pane_t1

0xf4d4,	// (0x00040d9a) cell_hyb_phrase_pane

0x27fa,	// (0x000340c0) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x00040da3) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x00040db1) entry_hyb_candi_pane_t1

0x2c43,	// (0x00034509) input_focus_pane_cp06

0xf4f9,	// (0x00040dbf) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x00040dc7) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x00040dcf) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x00040dd7) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x00040ddf) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00040de7) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
