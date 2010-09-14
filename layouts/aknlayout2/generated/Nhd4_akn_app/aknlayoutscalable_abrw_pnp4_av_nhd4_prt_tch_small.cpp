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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00031bd4 };

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
0x5ce7,	// (0x000378bb) Screen

0x5cf3,	// (0x000378c7) application_window_ParamLimits

0x5cf3,	// (0x000378c7) application_window

0x1fd4,	// (0x00033ba8) screen_g1

0x5d4f,	// (0x00037923) area_bottom_pane_ParamLimits

0x5d4f,	// (0x00037923) area_bottom_pane

0x5e0f,	// (0x000379e3) area_top_pane_ParamLimits

0x5e0f,	// (0x000379e3) area_top_pane

0x5ead,	// (0x00037a81) main_pane_ParamLimits

0x5ead,	// (0x00037a81) main_pane

0x1fde,	// (0x00033bb2) misc_graphics

0x7d74,	// (0x00039948) battery_pane_ParamLimits

0x7d74,	// (0x00039948) battery_pane

0xa287,	// (0x0003be5b) bg_status_flat_pane_g8

0xa28f,	// (0x0003be63) bg_status_flat_pane_g9

0x7e3c,	// (0x00039a10) context_pane_ParamLimits

0x7e3c,	// (0x00039a10) context_pane

0x7f52,	// (0x00039b26) navi_pane_ParamLimits

0x7f52,	// (0x00039b26) navi_pane

0x7fd6,	// (0x00039baa) signal_pane_ParamLimits

0x7fd6,	// (0x00039baa) signal_pane

0x0008,

0xf840,	// (0x00041414) bg_status_flat_pane_g

0x9868,	// (0x0003b43c) status_pane_g1_ParamLimits

0x9868,	// (0x0003b43c) status_pane_g1

0x987c,	// (0x0003b450) status_pane_g2_ParamLimits

0x987c,	// (0x0003b450) status_pane_g2

0x9888,	// (0x0003b45c) status_pane_g3_ParamLimits

0x9888,	// (0x0003b45c) status_pane_g3

0x0004,

0xf76c,	// (0x00041340) status_pane_g_ParamLimits

0xf76c,	// (0x00041340) status_pane_g

0x98bc,	// (0x0003b490) title_pane_ParamLimits

0x98bc,	// (0x0003b490) title_pane

0x98f9,	// (0x0003b4cd) uni_indicator_pane_ParamLimits

0x98f9,	// (0x0003b4cd) uni_indicator_pane

0x2df8,	// (0x000349cc) bg_list_pane_ParamLimits

0x2df8,	// (0x000349cc) bg_list_pane

0x773f,	// (0x00039313) find_pane

0x2532,	// (0x00034106) listscroll_app_pane_ParamLimits

0x2532,	// (0x00034106) listscroll_app_pane

0x2e18,	// (0x000349ec) listscroll_form_pane

0x5c69,	// (0x0003783d) listscroll_gen_pane_ParamLimits

0x5c69,	// (0x0003783d) listscroll_gen_pane

0x7747,	// (0x0003931b) listscroll_set_pane

0x6c21,	// (0x000387f5) main_idle_act_pane

0x2cac,	// (0x00034880) main_idle_trad_pane

0x2cac,	// (0x00034880) main_list_empty_pane

0x2532,	// (0x00034106) main_midp_pane

0x2e32,	// (0x00034a06) main_pane_g1_ParamLimits

0x2e32,	// (0x00034a06) main_pane_g1

0x775d,	// (0x00039331) popup_ai_message_window_ParamLimits

0x775d,	// (0x00039331) popup_ai_message_window

0x7801,	// (0x000393d5) popup_fep_china_uni_window_ParamLimits

0x7801,	// (0x000393d5) popup_fep_china_uni_window

0x785b,	// (0x0003942f) popup_fep_japan_candidate_window_ParamLimits

0x785b,	// (0x0003942f) popup_fep_japan_candidate_window

0x7879,	// (0x0003944d) popup_fep_japan_predictive_window_ParamLimits

0x7879,	// (0x0003944d) popup_fep_japan_predictive_window

0x78a9,	// (0x0003947d) popup_find_window

0x78b6,	// (0x0003948a) popup_grid_graphic_window_ParamLimits

0x78b6,	// (0x0003948a) popup_grid_graphic_window

0x78e0,	// (0x000394b4) popup_large_graphic_colour_window

0x7906,	// (0x000394da) popup_menu_window_ParamLimits

0x7906,	// (0x000394da) popup_menu_window

0x7ac2,	// (0x00039696) popup_note_image_window

0x7aae,	// (0x00039682) popup_note_wait_window_ParamLimits

0x7aae,	// (0x00039682) popup_note_wait_window

0x7aae,	// (0x00039682) popup_note_window_ParamLimits

0x7aae,	// (0x00039682) popup_note_window

0x7b18,	// (0x000396ec) popup_query_code_window_ParamLimits

0x7b18,	// (0x000396ec) popup_query_code_window

0x7b2c,	// (0x00039700) popup_query_data_code_window_ParamLimits

0x7b2c,	// (0x00039700) popup_query_data_code_window

0x7b49,	// (0x0003971d) popup_query_data_window_ParamLimits

0x7b49,	// (0x0003971d) popup_query_data_window

0x7b65,	// (0x00039739) popup_query_sat_info_window_ParamLimits

0x7b65,	// (0x00039739) popup_query_sat_info_window

0x7b9e,	// (0x00039772) popup_snote_single_graphic_window_ParamLimits

0x7b9e,	// (0x00039772) popup_snote_single_graphic_window

0x7b9e,	// (0x00039772) popup_snote_single_text_window_ParamLimits

0x7b9e,	// (0x00039772) popup_snote_single_text_window

0x7bb3,	// (0x00039787) popup_sub_window_general

0x7ce3,	// (0x000398b7) popup_window_general_ParamLimits

0x7ce3,	// (0x000398b7) popup_window_general

0x7cf8,	// (0x000398cc) power_save_pane

0x75a6,	// (0x0003917a) control_pane_g1_ParamLimits

0x75a6,	// (0x0003917a) control_pane_g1

0x75cd,	// (0x000391a1) control_pane_g2_ParamLimits

0x75cd,	// (0x000391a1) control_pane_g2

0x2de2,	// (0x000349b6) control_pane_g3_ParamLimits

0x2de2,	// (0x000349b6) control_pane_g3

0x0007,

0xf754,	// (0x00041328) control_pane_g_ParamLimits

0xf754,	// (0x00041328) control_pane_g

0x763e,	// (0x00039212) control_pane_t1_ParamLimits

0x763e,	// (0x00039212) control_pane_t1

0x7694,	// (0x00039268) control_pane_t2_ParamLimits

0x7694,	// (0x00039268) control_pane_t2

0x0002,

0xf765,	// (0x00041339) control_pane_t_ParamLimits

0xf765,	// (0x00041339) control_pane_t

0x74ff,	// (0x000390d3) navi_navi_volume_pane_cp1

0x7507,	// (0x000390db) status_small_icon_pane

0x2dae,	// (0x00034982) status_small_pane_g1_ParamLimits

0x2dae,	// (0x00034982) status_small_pane_g1

0x750f,	// (0x000390e3) status_small_pane_g2_ParamLimits

0x750f,	// (0x000390e3) status_small_pane_g2

0x751b,	// (0x000390ef) status_small_pane_g3_ParamLimits

0x751b,	// (0x000390ef) status_small_pane_g3

0x7527,	// (0x000390fb) status_small_pane_g4_ParamLimits

0x7527,	// (0x000390fb) status_small_pane_g4

0x7533,	// (0x00039107) status_small_pane_g5_ParamLimits

0x7533,	// (0x00039107) status_small_pane_g5

0x7541,	// (0x00039115) status_small_pane_g6_ParamLimits

0x7541,	// (0x00039115) status_small_pane_g6

0x0007,

0xf743,	// (0x00041317) status_small_pane_g_ParamLimits

0xf743,	// (0x00041317) status_small_pane_g

0x7570,	// (0x00039144) status_small_pane_t1

0x7592,	// (0x00039166) status_small_wait_pane_ParamLimits

0x7592,	// (0x00039166) status_small_wait_pane

0x700a,	// (0x00038bde) aid_levels_signal_ParamLimits

0x700a,	// (0x00038bde) aid_levels_signal

0x701c,	// (0x00038bf0) signal_pane_g1_ParamLimits

0x701c,	// (0x00038bf0) signal_pane_g1

0x7031,	// (0x00038c05) signal_pane_g2_ParamLimits

0x7031,	// (0x00038c05) signal_pane_g2

0x0003,

0xf6d4,	// (0x000412a8) signal_pane_g_ParamLimits

0xf6d4,	// (0x000412a8) signal_pane_g

0x289a,	// (0x0003446e) context_pane_g1

0x60ee,	// (0x00037cc2) title_pane_g1

0x6118,	// (0x00037cec) title_pane_t1

0x1ff4,	// (0x00033bc8) title_pane_t2

0x201a,	// (0x00033bee) title_pane_t3

0x0002,

0xf532,	// (0x00041106) title_pane_t

0x9911,	// (0x0003b4e5) aid_levels_battery_ParamLimits

0x9911,	// (0x0003b4e5) aid_levels_battery

0x9925,	// (0x0003b4f9) battery_pane_g1_ParamLimits

0x9925,	// (0x0003b4f9) battery_pane_g1

0x993b,	// (0x0003b50f) battery_pane_g2_ParamLimits

0x993b,	// (0x0003b50f) battery_pane_g2

0x0001,

0xf777,	// (0x0004134b) battery_pane_g_ParamLimits

0xf777,	// (0x0004134b) battery_pane_g

0xabab,	// (0x0003c77f) uni_indicator_pane_g1

0xabbe,	// (0x0003c792) uni_indicator_pane_g2

0xabd0,	// (0x0003c7a4) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x000414bc) uni_indicator_pane_g

0x2b43,	// (0x00034717) navi_icon_pane_ParamLimits

0x2b43,	// (0x00034717) navi_icon_pane

0x2a8c,	// (0x00034660) navi_midp_pane

0x2b5f,	// (0x00034733) navi_navi_pane

0x2b69,	// (0x0003473d) navi_text_pane_ParamLimits

0x2b69,	// (0x0003473d) navi_text_pane

0x1fd4,	// (0x00033ba8) status_small_wait_pane_g1

0x226b,	// (0x00033e3f) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x000414b7) status_small_wait_pane_g

0xa8d2,	// (0x0003c4a6) navi_navi_icon_text_pane

0xa8da,	// (0x0003c4ae) navi_navi_pane_g1_ParamLimits

0xa8da,	// (0x0003c4ae) navi_navi_pane_g1

0xa8ec,	// (0x0003c4c0) navi_navi_pane_g2_ParamLimits

0xa8ec,	// (0x0003c4c0) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00041485) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00041485) navi_navi_pane_g

0xa8fe,	// (0x0003c4d2) navi_navi_tabs_pane

0xa907,	// (0x0003c4db) navi_navi_text_pane

0xa8d2,	// (0x0003c4a6) navi_navi_volume_pane

0xa8ae,	// (0x0003c482) navi_text_pane_t1

0xa8a2,	// (0x0003c476) navi_icon_pane_g1

0xa7f5,	// (0x0003c3c9) navi_navi_text_pane_t1

0x82f6,	// (0x00039eca) navi_navi_volume_pane_g1

0x82fe,	// (0x00039ed2) volume_small_pane

0xa75b,	// (0x0003c32f) navi_navi_icon_text_pane_g1

0xa763,	// (0x0003c337) navi_navi_icon_text_pane_t1

0x2b5f,	// (0x00034733) navi_tabs_2_long_pane

0x2b5f,	// (0x00034733) navi_tabs_2_pane

0x2b5f,	// (0x00034733) navi_tabs_3_long_pane

0x2b5f,	// (0x00034733) navi_tabs_3_pane

0x2b5f,	// (0x00034733) navi_tabs_4_pane

0x82d6,	// (0x00039eaa) tabs_2_active_pane_ParamLimits

0x82d6,	// (0x00039eaa) tabs_2_active_pane

0x82e6,	// (0x00039eba) tabs_2_passive_pane_ParamLimits

0x82e6,	// (0x00039eba) tabs_2_passive_pane

0x82a4,	// (0x00039e78) tabs_3_active_pane_ParamLimits

0x82a4,	// (0x00039e78) tabs_3_active_pane

0x82b4,	// (0x00039e88) tabs_3_passive_pane_ParamLimits

0x82b4,	// (0x00039e88) tabs_3_passive_pane

0x82c5,	// (0x00039e99) tabs_3_passive_pane_cp_ParamLimits

0x82c5,	// (0x00039e99) tabs_3_passive_pane_cp

0x8260,	// (0x00039e34) tabs_4_active_pane_ParamLimits

0x8260,	// (0x00039e34) tabs_4_active_pane

0x8271,	// (0x00039e45) tabs_4_passive_pane_ParamLimits

0x8271,	// (0x00039e45) tabs_4_passive_pane

0x8282,	// (0x00039e56) tabs_4_passive_pane_cp_ParamLimits

0x8282,	// (0x00039e56) tabs_4_passive_pane_cp

0x8293,	// (0x00039e67) tabs_4_passive_pane_cp2_ParamLimits

0x8293,	// (0x00039e67) tabs_4_passive_pane_cp2

0x823c,	// (0x00039e10) tabs_2_long_active_pane_ParamLimits

0x823c,	// (0x00039e10) tabs_2_long_active_pane

0x824e,	// (0x00039e22) tabs_2_long_passive_pane_ParamLimits

0x824e,	// (0x00039e22) tabs_2_long_passive_pane

0x81f7,	// (0x00039dcb) tabs_3_long_active_pane_ParamLimits

0x81f7,	// (0x00039dcb) tabs_3_long_active_pane

0x8210,	// (0x00039de4) tabs_3_long_passive_pane_ParamLimits

0x8210,	// (0x00039de4) tabs_3_long_passive_pane

0x8223,	// (0x00039df7) tabs_3_long_passive_pane_cp_ParamLimits

0x8223,	// (0x00039df7) tabs_3_long_passive_pane_cp

0x819d,	// (0x00039d71) volume_small_pane_g1

0x81a6,	// (0x00039d7a) volume_small_pane_g2

0x81af,	// (0x00039d83) volume_small_pane_g3

0x81b8,	// (0x00039d8c) volume_small_pane_g4

0x81c1,	// (0x00039d95) volume_small_pane_g5

0x81ca,	// (0x00039d9e) volume_small_pane_g6

0x81d3,	// (0x00039da7) volume_small_pane_g7

0x81dc,	// (0x00039db0) volume_small_pane_g8

0x81e5,	// (0x00039db9) volume_small_pane_g9

0x81ee,	// (0x00039dc2) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00041451) volume_small_pane_g

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp2_ParamLimits

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp2

0x6180,	// (0x00037d54) tabs_3_active_pane_g1

0x6188,	// (0x00037d5c) tabs_3_active_pane_t1

0x203a,	// (0x00033c0e) bg_passive_tab_pane_cp2_ParamLimits

0x203a,	// (0x00033c0e) bg_passive_tab_pane_cp2

0x6180,	// (0x00037d54) tabs_3_passive_pane_g1

0x6188,	// (0x00037d5c) tabs_3_passive_pane_t1

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp3_ParamLimits

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp3

0x619a,	// (0x00037d6e) tabs_4_active_pane_g1

0x61a2,	// (0x00037d76) tabs_4_active_pane_t1

0x203a,	// (0x00033c0e) bg_passive_tab_pane_cp3_ParamLimits

0x203a,	// (0x00033c0e) bg_passive_tab_pane_cp3

0x619a,	// (0x00037d6e) tabs_4_1_passive_pane_g1

0x61a2,	// (0x00037d76) tabs_4_1_passive_pane_t1

0x2532,	// (0x00034106) list_highlight_pane_cp2

0xae13,	// (0x0003c9e7) list_set_pane_ParamLimits

0xae13,	// (0x0003c9e7) list_set_pane

0xaeb5,	// (0x0003ca89) main_pane_set_t1_ParamLimits

0xaeb5,	// (0x0003ca89) main_pane_set_t1

0xaed5,	// (0x0003caa9) main_pane_set_t2_ParamLimits

0xaed5,	// (0x0003caa9) main_pane_set_t2

0xaee9,	// (0x0003cabd) main_pane_set_t3_ParamLimits

0xaee9,	// (0x0003cabd) main_pane_set_t3

0xaefb,	// (0x0003cacf) main_pane_set_t4_ParamLimits

0xaefb,	// (0x0003cacf) main_pane_set_t4

0x0003,

0xf94d,	// (0x00041521) main_pane_set_t_ParamLimits

0xf94d,	// (0x00041521) main_pane_set_t

0xaf0d,	// (0x0003cae1) setting_code_pane

0xaf19,	// (0x0003caed) setting_slider_graphic_pane

0xaf19,	// (0x0003caed) setting_slider_pane

0xaf19,	// (0x0003caed) setting_text_pane

0xaf19,	// (0x0003caed) setting_volume_pane

0x61b4,	// (0x00037d88) volume_set_pane

0x203a,	// (0x00033c0e) bg_set_opt_pane_cp

0x61bc,	// (0x00037d90) setting_slider_pane_t1

0x61d5,	// (0x00037da9) setting_slider_pane_t2

0x61ef,	// (0x00037dc3) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004110d) setting_slider_pane_t

0x6207,	// (0x00037ddb) slider_set_pane

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp2

0x2048,	// (0x00033c1c) setting_slider_graphic_pane_g1

0x621d,	// (0x00037df1) setting_slider_graphic_pane_t1

0x622d,	// (0x00037e01) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00041114) setting_slider_graphic_pane_t

0x623d,	// (0x00037e11) slider_set_pane_cp

0x1fde,	// (0x00033bb2) input_focus_pane_cp1

0xadd2,	// (0x0003c9a6) list_set_text_pane

0x1fd4,	// (0x00033ba8) setting_text_pane_g1

0x1fde,	// (0x00033bb2) input_focus_pane_cp2

0x1fd4,	// (0x00033ba8) setting_code_pane_g1

0x2051,	// (0x00033c25) setting_code_pane_t1

0x4538,	// (0x0003610c) set_text_pane_t1_ParamLimits

0x4538,	// (0x0003610c) set_text_pane_t1

0x2448,	// (0x0003401c) set_opt_bg_pane_g1

0x2450,	// (0x00034024) set_opt_bg_pane_g2

0xadac,	// (0x0003c980) set_opt_bg_pane_g3

0x2460,	// (0x00034034) set_opt_bg_pane_g4

0x2468,	// (0x0003403c) set_opt_bg_pane_g5

0x2470,	// (0x00034044) set_opt_bg_pane_g6

0xadb6,	// (0x0003c98a) set_opt_bg_pane_g7

0xadbe,	// (0x0003c992) set_opt_bg_pane_g8

0xadc8,	// (0x0003c99c) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x0004150e) set_opt_bg_pane_g

0xad9f,	// (0x0003c973) slider_set_pane_g1

0x837d,	// (0x00039f51) slider_set_pane_g2

0x0006,

0xf92b,	// (0x000414ff) slider_set_pane_g

0x8307,	// (0x00039edb) volume_set_pane_g1

0x830f,	// (0x00039ee3) volume_set_pane_g2

0x8317,	// (0x00039eeb) volume_set_pane_g3

0x831f,	// (0x00039ef3) volume_set_pane_g4

0x8327,	// (0x00039efb) volume_set_pane_g5

0x832f,	// (0x00039f03) volume_set_pane_g6

0x8337,	// (0x00039f0b) volume_set_pane_g7

0x833f,	// (0x00039f13) volume_set_pane_g8

0x8347,	// (0x00039f1b) volume_set_pane_g9

0x834f,	// (0x00039f23) volume_set_pane_g10

0x0009,

0xf903,	// (0x000414d7) volume_set_pane_g

0x6245,	// (0x00037e19) indicator_pane_ParamLimits

0x6245,	// (0x00037e19) indicator_pane

0x6251,	// (0x00037e25) main_idle_pane_g2_ParamLimits

0x6251,	// (0x00037e25) main_idle_pane_g2

0x6279,	// (0x00037e4d) main_pane_idle_g1_ParamLimits

0x6279,	// (0x00037e4d) main_pane_idle_g1

0x205f,	// (0x00033c33) popup_clock_digital_analogue_window_ParamLimits

0x205f,	// (0x00033c33) popup_clock_digital_analogue_window

0x6286,	// (0x00037e5a) soft_indicator_pane_ParamLimits

0x6286,	// (0x00037e5a) soft_indicator_pane

0x6292,	// (0x00037e66) wallpaper_pane_ParamLimits

0x6292,	// (0x00037e66) wallpaper_pane

0x1fd4,	// (0x00033ba8) wallpaper_pane_g1

0x629e,	// (0x00037e72) indicator_pane_g1_ParamLimits

0x629e,	// (0x00037e72) indicator_pane_g1

0xb1e5,	// (0x0003cdb9) navi_navi_icon_text_pane_srt_g1

0x208d,	// (0x00033c61) soft_indicator_pane_t1

0x20a7,	// (0x00033c7b) aid_ps_area_pane

0x62aa,	// (0x00037e7e) aid_ps_clock_pane

0x20b8,	// (0x00033c8c) aid_ps_indicator_pane

0x20c4,	// (0x00033c98) indicator_ps_pane_ParamLimits

0x20c4,	// (0x00033c98) indicator_ps_pane

0x20d3,	// (0x00033ca7) power_save_pane_g1_ParamLimits

0x20d3,	// (0x00033ca7) power_save_pane_g1

0x20df,	// (0x00033cb3) power_save_pane_g2_ParamLimits

0x20df,	// (0x00033cb3) power_save_pane_g2

0x5d03,	// (0x000378d7) aid_navinavi_width_pane

0x20a7,	// (0x00033c7b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00041119) power_save_pane_g_ParamLimits

0xf545,	// (0x00041119) power_save_pane_g

0x20ed,	// (0x00033cc1) power_save_pane_t1_ParamLimits

0x20ed,	// (0x00033cc1) power_save_pane_t1

0x62aa,	// (0x00037e7e) aid_ps_clock_pane_ParamLimits

0x20b8,	// (0x00033c8c) aid_ps_indicator_pane_ParamLimits

0x20ff,	// (0x00033cd3) power_save_pane_t4_ParamLimits

0x20ff,	// (0x00033cd3) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004111e) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004111e) power_save_pane_t

0x2129,	// (0x00033cfd) power_save_t3_ParamLimits

0x2129,	// (0x00033cfd) power_save_t3

0x2114,	// (0x00033ce8) power_save_t2_ParamLimits

0x2114,	// (0x00033ce8) power_save_t2

0x213e,	// (0x00033d12) indicator_ps_pane_g1

0x62b8,	// (0x00037e8c) ai_gene_pane_ParamLimits

0x62b8,	// (0x00037e8c) ai_gene_pane

0x62c4,	// (0x00037e98) ai_links_pane_ParamLimits

0x62c4,	// (0x00037e98) ai_links_pane

0x62d0,	// (0x00037ea4) indicator_pane_cp1_ParamLimits

0x62d0,	// (0x00037ea4) indicator_pane_cp1

0x62dc,	// (0x00037eb0) main_pane_idle_g1_cp_ParamLimits

0x62dc,	// (0x00037eb0) main_pane_idle_g1_cp

0x62e8,	// (0x00037ebc) popup_ai_links_title_window

0x62f1,	// (0x00037ec5) soft_indicator_pane_cp1_ParamLimits

0x62f1,	// (0x00037ec5) soft_indicator_pane_cp1

0xab99,	// (0x0003c76d) ai_links_pane_g1

0xaba2,	// (0x0003c776) grid_ai_links_pane

0xab7c,	// (0x0003c750) ai_gene_pane_1

0xab87,	// (0x0003c75b) ai_gene_pane_2

0xab90,	// (0x0003c764) list_highlight_pane_cp4

0xab60,	// (0x0003c734) cell_ai_link_pane_ParamLimits

0xab60,	// (0x0003c734) cell_ai_link_pane

0xab58,	// (0x0003c72c) cell_ai_link_pane_g1

0x226b,	// (0x00033e3f) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x000414b2) cell_ai_link_pane_g

0x1fde,	// (0x00033bb2) grid_highlight_cp2

0x1fde,	// (0x00033bb2) bg_popup_sub_pane_cp1

0x2155,	// (0x00033d29) popup_ai_links_title_window_t1

0xaaa8,	// (0x0003c67c) ai_gene_pane_1_g1_ParamLimits

0xaaa8,	// (0x0003c67c) ai_gene_pane_1_g1

0xaab4,	// (0x0003c688) ai_gene_pane_1_g2_ParamLimits

0xaab4,	// (0x0003c688) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x000414a8) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x000414a8) ai_gene_pane_1_g

0xaac1,	// (0x0003c695) ai_gene_pane_1_t1_ParamLimits

0xaac1,	// (0x0003c695) ai_gene_pane_1_t1

0xaaf5,	// (0x0003c6c9) grid_ai_soft_ind_pane

0xaa93,	// (0x0003c667) ai_gene_pane_2_t1_ParamLimits

0xaa93,	// (0x0003c667) ai_gene_pane_2_t1

0x62fd,	// (0x00037ed1) main_pane_empty_t1_ParamLimits

0x62fd,	// (0x00037ed1) main_pane_empty_t1

0x6315,	// (0x00037ee9) main_pane_empty_t2_ParamLimits

0x6315,	// (0x00037ee9) main_pane_empty_t2

0x632a,	// (0x00037efe) main_pane_empty_t3_ParamLimits

0x632a,	// (0x00037efe) main_pane_empty_t3

0x633c,	// (0x00037f10) main_pane_empty_t4_ParamLimits

0x633c,	// (0x00037f10) main_pane_empty_t4

0x634e,	// (0x00037f22) main_pane_empty_t5_ParamLimits

0x634e,	// (0x00037f22) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00041123) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00041123) main_pane_empty_t

0x24cd,	// (0x000340a1) bg_popup_window_pane_ParamLimits

0x24cd,	// (0x000340a1) bg_popup_window_pane

0xa803,	// (0x0003c3d7) find_popup_pane_cp2_ParamLimits

0xa803,	// (0x0003c3d7) find_popup_pane_cp2

0xa80f,	// (0x0003c3e3) heading_pane_ParamLimits

0xa80f,	// (0x0003c3e3) heading_pane

0x1fde,	// (0x00033bb2) bg_popup_sub_pane

0xa77d,	// (0x0003c351) bg_popup_window_pane_g1_ParamLimits

0xa77d,	// (0x0003c351) bg_popup_window_pane_g1

0xa789,	// (0x0003c35d) bg_popup_window_pane_g2_ParamLimits

0xa789,	// (0x0003c35d) bg_popup_window_pane_g2

0xa795,	// (0x0003c369) bg_popup_window_pane_g3_ParamLimits

0xa795,	// (0x0003c369) bg_popup_window_pane_g3

0xa7a1,	// (0x0003c375) bg_popup_window_pane_g4_ParamLimits

0xa7a1,	// (0x0003c375) bg_popup_window_pane_g4

0xa7ad,	// (0x0003c381) bg_popup_window_pane_g5_ParamLimits

0xa7ad,	// (0x0003c381) bg_popup_window_pane_g5

0xa7b9,	// (0x0003c38d) bg_popup_window_pane_g6_ParamLimits

0xa7b9,	// (0x0003c38d) bg_popup_window_pane_g6

0xa7c5,	// (0x0003c399) bg_popup_window_pane_g7_ParamLimits

0xa7c5,	// (0x0003c399) bg_popup_window_pane_g7

0xa7d1,	// (0x0003c3a5) bg_popup_window_pane_g8_ParamLimits

0xa7d1,	// (0x0003c3a5) bg_popup_window_pane_g8

0xa7dd,	// (0x0003c3b1) bg_popup_window_pane_g9_ParamLimits

0xa7dd,	// (0x0003c3b1) bg_popup_window_pane_g9

0xa7e9,	// (0x0003c3bd) bg_popup_window_pane_g10_ParamLimits

0xa7e9,	// (0x0003c3bd) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00041470) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00041470) bg_popup_window_pane_g

0xa712,	// (0x0003c2e6) bg_popup_heading_pane_ParamLimits

0xa712,	// (0x0003c2e6) bg_popup_heading_pane

0x84ce,	// (0x0003a0a2) tabs_4_passive_pane_cp_srt_ParamLimits

0x84ce,	// (0x0003a0a2) tabs_4_passive_pane_cp_srt

0x84e0,	// (0x0003a0b4) tabs_4_passive_pane_srt_ParamLimits

0xa726,	// (0x0003c2fa) heading_pane_g2

0x84e0,	// (0x0003a0b4) tabs_4_passive_pane_srt

0x2532,	// (0x00034106) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2532,	// (0x00034106) bg_passive_tab_pane_cp3_srt

0xa72e,	// (0x0003c302) heading_pane_t1_ParamLimits

0xa72e,	// (0x0003c302) heading_pane_t1

0xa745,	// (0x0003c319) heading_pane_t2_ParamLimits

0xa745,	// (0x0003c319) heading_pane_t2

0x0001,

0xf897,	// (0x0004146b) heading_pane_t_ParamLimits

0xf897,	// (0x0004146b) heading_pane_t

0xa24f,	// (0x0003be23) bg_popup_heading_pane_g1

0xa2fe,	// (0x0003bed2) bg_popup_heading_pane_g2

0xa308,	// (0x0003bedc) bg_popup_heading_pane_g3

0xa312,	// (0x0003bee6) bg_popup_heading_pane_g4

0xa31c,	// (0x0003bef0) bg_popup_heading_pane_g5

0xa326,	// (0x0003befa) bg_popup_heading_pane_g6

0xa32e,	// (0x0003bf02) bg_popup_heading_pane_g7

0xa336,	// (0x0003bf0a) bg_popup_heading_pane_g8

0xa340,	// (0x0003bf14) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00041427) bg_popup_heading_pane_g

0x9a10,	// (0x0003b5e4) bg_popup_sub_pane_g1

0x9a20,	// (0x0003b5f4) bg_popup_sub_pane_g2

0x9a18,	// (0x0003b5ec) bg_popup_sub_pane_g3

0x9a30,	// (0x0003b604) bg_popup_sub_pane_g4

0x9a28,	// (0x0003b5fc) bg_popup_sub_pane_g5

0x9a38,	// (0x0003b60c) bg_popup_sub_pane_g6

0x9a40,	// (0x0003b614) bg_popup_sub_pane_g7

0x9a50,	// (0x0003b624) bg_popup_sub_pane_g8

0x9a48,	// (0x0003b61c) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00041401) bg_popup_sub_pane_g

0x202c,	// (0x00033c00) bg_popup_window_pane_cp5_ParamLimits

0x202c,	// (0x00033c00) bg_popup_window_pane_cp5

0x2172,	// (0x00033d46) popup_note_window_g1_ParamLimits

0x2172,	// (0x00033d46) popup_note_window_g1

0x217e,	// (0x00033d52) popup_note_window_t1_ParamLimits

0x217e,	// (0x00033d52) popup_note_window_t1

0x2194,	// (0x00033d68) popup_note_window_t2_ParamLimits

0x2194,	// (0x00033d68) popup_note_window_t2

0x21aa,	// (0x00033d7e) popup_note_window_t3_ParamLimits

0x21aa,	// (0x00033d7e) popup_note_window_t3

0x21c0,	// (0x00033d94) popup_note_window_t4_ParamLimits

0x21c0,	// (0x00033d94) popup_note_window_t4

0x21e8,	// (0x00033dbc) popup_note_window_t5_ParamLimits

0x21e8,	// (0x00033dbc) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004112e) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004112e) popup_note_window_t

0x220c,	// (0x00033de0) bg_popup_window_pane_cp6_ParamLimits

0x220c,	// (0x00033de0) bg_popup_window_pane_cp6

0xa1cb,	// (0x0003bd9f) popup_note_image_window_g1_ParamLimits

0xa1cb,	// (0x0003bd9f) popup_note_image_window_g1

0xa1d7,	// (0x0003bdab) popup_note_image_window_g2_ParamLimits

0xa1d7,	// (0x0003bdab) popup_note_image_window_g2

0x0001,

0xf821,	// (0x000413f5) popup_note_image_window_g_ParamLimits

0xf821,	// (0x000413f5) popup_note_image_window_g

0xa1f0,	// (0x0003bdc4) popup_note_image_window_t1_ParamLimits

0xa1f0,	// (0x0003bdc4) popup_note_image_window_t1

0xa209,	// (0x0003bddd) popup_note_image_window_t2_ParamLimits

0xa209,	// (0x0003bddd) popup_note_image_window_t2

0xa222,	// (0x0003bdf6) popup_note_image_window_t3_ParamLimits

0xa222,	// (0x0003bdf6) popup_note_image_window_t3

0x0002,

0xf826,	// (0x000413fa) popup_note_image_window_t_ParamLimits

0xf826,	// (0x000413fa) popup_note_image_window_t

0xa094,	// (0x0003bc68) bg_popup_window_pane_cp7_ParamLimits

0xa094,	// (0x0003bc68) bg_popup_window_pane_cp7

0xa0c4,	// (0x0003bc98) popup_note_wait_window_g1_ParamLimits

0xa0c4,	// (0x0003bc98) popup_note_wait_window_g1

0xa0d0,	// (0x0003bca4) popup_note_wait_window_g2_ParamLimits

0xa0d0,	// (0x0003bca4) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x000413e3) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x000413e3) popup_note_wait_window_g

0xa0e8,	// (0x0003bcbc) popup_note_wait_window_t1_ParamLimits

0xa0e8,	// (0x0003bcbc) popup_note_wait_window_t1

0xa10f,	// (0x0003bce3) popup_note_wait_window_t2_ParamLimits

0xa10f,	// (0x0003bce3) popup_note_wait_window_t2

0xa12c,	// (0x0003bd00) popup_note_wait_window_t3_ParamLimits

0xa12c,	// (0x0003bd00) popup_note_wait_window_t3

0xa13f,	// (0x0003bd13) popup_note_wait_window_t4_ParamLimits

0xa13f,	// (0x0003bd13) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x000413ea) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x000413ea) popup_note_wait_window_t

0xa164,	// (0x0003bd38) wait_bar_pane_ParamLimits

0xa164,	// (0x0003bd38) wait_bar_pane

0x1fde,	// (0x00033bb2) wait_anim_pane

0x1fde,	// (0x00033bb2) wait_border_pane

0x1fd4,	// (0x00033ba8) wait_anim_pane_g1

0x1fd4,	// (0x00033ba8) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x000412a3) wait_anim_pane_g

0xa040,	// (0x0003bc14) wait_border_pane_g1

0xa04b,	// (0x0003bc1f) wait_border_pane_g2

0xa054,	// (0x0003bc28) wait_border_pane_g3

0x0002,

0xf808,	// (0x000413dc) wait_border_pane_g

0x9eab,	// (0x0003ba7f) bg_popup_window_pane_cp16_ParamLimits

0x9eab,	// (0x0003ba7f) bg_popup_window_pane_cp16

0x9fab,	// (0x0003bb7f) indicator_popup_pane_cp4_ParamLimits

0x9fab,	// (0x0003bb7f) indicator_popup_pane_cp4

0x9fbf,	// (0x0003bb93) popup_query_data_window_t1_ParamLimits

0x9fbf,	// (0x0003bb93) popup_query_data_window_t1

0x9fd1,	// (0x0003bba5) popup_query_data_window_t2_ParamLimits

0x9fd1,	// (0x0003bba5) popup_query_data_window_t2

0x9fea,	// (0x0003bbbe) popup_query_data_window_t3_ParamLimits

0x9fea,	// (0x0003bbbe) popup_query_data_window_t3

0x0002,

0xf801,	// (0x000413d5) popup_query_data_window_t_ParamLimits

0xf801,	// (0x000413d5) popup_query_data_window_t

0xa004,	// (0x0003bbd8) query_popup_data_pane_ParamLimits

0xa004,	// (0x0003bbd8) query_popup_data_pane

0xa018,	// (0x0003bbec) query_popup_data_pane_cp1_ParamLimits

0xa018,	// (0x0003bbec) query_popup_data_pane_cp1

0x9eab,	// (0x0003ba7f) bg_popup_window_pane_cp10_ParamLimits

0x9eab,	// (0x0003ba7f) bg_popup_window_pane_cp10

0x9edd,	// (0x0003bab1) indicator_popup_pane_ParamLimits

0x9edd,	// (0x0003bab1) indicator_popup_pane

0x9eff,	// (0x0003bad3) popup_query_code_window_t1_ParamLimits

0x9eff,	// (0x0003bad3) popup_query_code_window_t1

0x9f19,	// (0x0003baed) popup_query_code_window_t2_ParamLimits

0x9f19,	// (0x0003baed) popup_query_code_window_t2

0x9f62,	// (0x0003bb36) popup_query_code_window_t3_ParamLimits

0x9f62,	// (0x0003bb36) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x000413ce) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x000413ce) popup_query_code_window_t

0x9f91,	// (0x0003bb65) query_popup_pane_ParamLimits

0x9f91,	// (0x0003bb65) query_popup_pane

0x220c,	// (0x00033de0) bg_popup_window_pane_cp15_ParamLimits

0x220c,	// (0x00033de0) bg_popup_window_pane_cp15

0x6388,	// (0x00037f5c) indicator_popup_pane_cp1_ParamLimits

0x6388,	// (0x00037f5c) indicator_popup_pane_cp1

0x639b,	// (0x00037f6f) indicator_popup_pane_cp2_ParamLimits

0x639b,	// (0x00037f6f) indicator_popup_pane_cp2

0x63ae,	// (0x00037f82) popup_query_data_code_window_g1_ParamLimits

0x63ae,	// (0x00037f82) popup_query_data_code_window_g1

0x222a,	// (0x00033dfe) popup_query_data_code_window_t1_ParamLimits

0x222a,	// (0x00033dfe) popup_query_data_code_window_t1

0x223c,	// (0x00033e10) popup_query_data_code_window_t2_ParamLimits

0x223c,	// (0x00033e10) popup_query_data_code_window_t2

0x63c1,	// (0x00037f95) popup_query_data_code_window_t3_ParamLimits

0x63c1,	// (0x00037f95) popup_query_data_code_window_t3

0x63d7,	// (0x00037fab) popup_query_data_code_window_t4_ParamLimits

0x63d7,	// (0x00037fab) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00041139) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00041139) popup_query_data_code_window_t

0x807b,	// (0x00039c4f) list_single_midp_graphic_pane_g3

0x63ef,	// (0x00037fc3) query_popup_data_pane_cp2_ParamLimits

0x6402,	// (0x00037fd6) query_popup_pane_cp2_ParamLimits

0x6402,	// (0x00037fd6) query_popup_pane_cp2

0x1fde,	// (0x00033bb2) bg_popup_window_pane_cp11

0x9e8f,	// (0x0003ba63) heading_pane_cp5

0x9e97,	// (0x0003ba6b) listscroll_popup_info_pane

0x1fde,	// (0x00033bb2) input_focus_pane_cp3

0x224e,	// (0x00033e22) query_popup_pane_t1

0x225c,	// (0x00033e30) list_popup_info_pane_ParamLimits

0x225c,	// (0x00033e30) list_popup_info_pane

0x226b,	// (0x00033e3f) listscroll_popup_info_pane_g1

0x2273,	// (0x00033e47) scroll_pane_cp7

0x6415,	// (0x00037fe9) popup_info_list_pane_t1_ParamLimits

0x6415,	// (0x00037fe9) popup_info_list_pane_t1

0x642f,	// (0x00038003) popup_info_list_pane_t2_ParamLimits

0x642f,	// (0x00038003) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00041142) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00041142) popup_info_list_pane_t

0x1fde,	// (0x00033bb2) bg_popup_window_pane_cp12

0xb1ff,	// (0x0003cdd3) find_popup_pane

0x203a,	// (0x00033c0e) bg_popup_window_pane_cp3

0x227d,	// (0x00033e51) heading_pane_cp3

0x228c,	// (0x00033e60) listscroll_popup_graphic_pane

0x1fde,	// (0x00033bb2) bg_popup_window_pane_cp4

0x6499,	// (0x0003806d) heading_pane_cp4

0x229c,	// (0x00033e70) listscroll_popup_colour_pane

0x64a3,	// (0x00038077) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x64a3,	// (0x00038077) cell_large_graphic_colour_none_popup_pane

0x64b7,	// (0x0003808b) grid_large_graphic_colour_popup_pane_ParamLimits

0x64b7,	// (0x0003808b) grid_large_graphic_colour_popup_pane

0x64db,	// (0x000380af) listscroll_popup_colour_pane_g1_ParamLimits

0x64db,	// (0x000380af) listscroll_popup_colour_pane_g1

0x64f2,	// (0x000380c6) listscroll_popup_colour_pane_g2_ParamLimits

0x64f2,	// (0x000380c6) listscroll_popup_colour_pane_g2

0x6509,	// (0x000380dd) listscroll_popup_colour_pane_g3_ParamLimits

0x6509,	// (0x000380dd) listscroll_popup_colour_pane_g3

0x6519,	// (0x000380ed) listscroll_popup_colour_pane_g4_ParamLimits

0x6519,	// (0x000380ed) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00041147) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00041147) listscroll_popup_colour_pane_g

0x22a4,	// (0x00033e78) scroll_pane_cp6_ParamLimits

0x22a4,	// (0x00033e78) scroll_pane_cp6

0x6529,	// (0x000380fd) cell_large_graphic_colour_popup_pane_ParamLimits

0x6529,	// (0x000380fd) cell_large_graphic_colour_popup_pane

0x6548,	// (0x0003811c) cell_large_graphic_colour_none_popup_pane_t1

0x1fde,	// (0x00033bb2) grid_highlight_pane_cp5

0x22b6,	// (0x00033e8a) cell_large_graphic_colour_popup_pane_g1

0x22be,	// (0x00033e92) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00041150) cell_large_graphic_colour_popup_pane_g

0x22c6,	// (0x00033e9a) cell_large_graphic_colour_popup_pane_g2_copy1

0x22cf,	// (0x00033ea3) grid_highlight_pane_cp4

0x22d7,	// (0x00033eab) bg_popup_window_pane_cp8_ParamLimits

0x22d7,	// (0x00033eab) bg_popup_window_pane_cp8

0x6557,	// (0x0003812b) popup_snote_single_text_window_g1_ParamLimits

0x6557,	// (0x0003812b) popup_snote_single_text_window_g1

0x6569,	// (0x0003813d) popup_snote_single_text_window_t1_ParamLimits

0x6569,	// (0x0003813d) popup_snote_single_text_window_t1

0x657c,	// (0x00038150) popup_snote_single_text_window_t2_ParamLimits

0x657c,	// (0x00038150) popup_snote_single_text_window_t2

0x658f,	// (0x00038163) popup_snote_single_text_window_t3_ParamLimits

0x658f,	// (0x00038163) popup_snote_single_text_window_t3

0x65c8,	// (0x0003819c) popup_snote_single_text_window_t4_ParamLimits

0x65c8,	// (0x0003819c) popup_snote_single_text_window_t4

0x65fc,	// (0x000381d0) popup_snote_single_text_window_t5_ParamLimits

0x65fc,	// (0x000381d0) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00041155) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00041155) popup_snote_single_text_window_t

0x22f2,	// (0x00033ec6) bg_popup_window_pane_cp9_ParamLimits

0x22f2,	// (0x00033ec6) bg_popup_window_pane_cp9

0x6557,	// (0x0003812b) popup_snote_single_graphic_window_g1_ParamLimits

0x6557,	// (0x0003812b) popup_snote_single_graphic_window_g1

0x2300,	// (0x00033ed4) popup_snote_single_graphic_window_g2_ParamLimits

0x2300,	// (0x00033ed4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00041160) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00041160) popup_snote_single_graphic_window_g

0x230c,	// (0x00033ee0) popup_snote_single_graphic_window_t1_ParamLimits

0x230c,	// (0x00033ee0) popup_snote_single_graphic_window_t1

0x231f,	// (0x00033ef3) popup_snote_single_graphic_window_t2_ParamLimits

0x231f,	// (0x00033ef3) popup_snote_single_graphic_window_t2

0x662b,	// (0x000381ff) popup_snote_single_graphic_window_t3_ParamLimits

0x662b,	// (0x000381ff) popup_snote_single_graphic_window_t3

0x6664,	// (0x00038238) popup_snote_single_graphic_window_t4_ParamLimits

0x6664,	// (0x00038238) popup_snote_single_graphic_window_t4

0x6698,	// (0x0003826c) popup_snote_single_graphic_window_t5_ParamLimits

0x6698,	// (0x0003826c) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00041165) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00041165) popup_snote_single_graphic_window_t

0xb141,	// (0x0003cd15) grid_graphic_popup_pane_ParamLimits

0xb141,	// (0x0003cd15) grid_graphic_popup_pane

0xb16b,	// (0x0003cd3f) listscroll_popup_graphic_pane_g1_ParamLimits

0xb16b,	// (0x0003cd3f) listscroll_popup_graphic_pane_g1

0xb17f,	// (0x0003cd53) listscroll_popup_graphic_pane_g2_ParamLimits

0xb17f,	// (0x0003cd53) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0004154b) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0004154b) listscroll_popup_graphic_pane_g

0xb193,	// (0x0003cd67) scroll_pane_cp5

0xb0d7,	// (0x0003ccab) cell_graphic_popup_pane_ParamLimits

0xb0d7,	// (0x0003ccab) cell_graphic_popup_pane

0xb0b8,	// (0x0003cc8c) cell_graphic_popup_pane_g1

0xb0c0,	// (0x0003cc94) cell_graphic_popup_pane_g2

0x22c6,	// (0x00033e9a) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00041544) cell_graphic_popup_pane_g

0xb0c9,	// (0x0003cc9d) cell_graphic_popup_pane_t2

0x22cf,	// (0x00033ea3) grid_highlight_pane_cp3

0x2344,	// (0x00033f18) list_gen_pane_ParamLimits

0x2344,	// (0x00033f18) list_gen_pane

0x236c,	// (0x00033f40) scroll_pane

0xb010,	// (0x0003cbe4) bg_list_pane_g1_ParamLimits

0xb010,	// (0x0003cbe4) bg_list_pane_g1

0xb02d,	// (0x0003cc01) bg_list_pane_g2_ParamLimits

0xb02d,	// (0x0003cc01) bg_list_pane_g2

0xb042,	// (0x0003cc16) bg_list_pane_g3_ParamLimits

0xb042,	// (0x0003cc16) bg_list_pane_g3

0xb056,	// (0x0003cc2a) bg_list_pane_g4_ParamLimits

0xb056,	// (0x0003cc2a) bg_list_pane_g4

0xb06a,	// (0x0003cc3e) bg_list_pane_g5_ParamLimits

0xb06a,	// (0x0003cc3e) bg_list_pane_g5

0x0004,

0xf965,	// (0x00041539) bg_list_pane_g_ParamLimits

0xf965,	// (0x00041539) bg_list_pane_g

0x8423,	// (0x00039ff7) list_double2_graphic_large_graphic_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double2_graphic_large_graphic_pane

0x8423,	// (0x00039ff7) list_double2_graphic_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double2_graphic_pane

0x8423,	// (0x00039ff7) list_double2_large_graphic_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double2_large_graphic_pane

0x8423,	// (0x00039ff7) list_double2_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double2_pane

0x8423,	// (0x00039ff7) list_double_graphic_heading_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_graphic_heading_pane

0x8423,	// (0x00039ff7) list_double_graphic_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_graphic_pane

0x8423,	// (0x00039ff7) list_double_heading_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_heading_pane

0x8423,	// (0x00039ff7) list_double_large_graphic_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_large_graphic_pane

0x8423,	// (0x00039ff7) list_double_number_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_number_pane

0x8423,	// (0x00039ff7) list_double_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_pane

0x8423,	// (0x00039ff7) list_double_time_pane_ParamLimits

0x8423,	// (0x00039ff7) list_double_time_pane

0x8423,	// (0x00039ff7) list_setting_number_pane_ParamLimits

0x8423,	// (0x00039ff7) list_setting_number_pane

0x8423,	// (0x00039ff7) list_setting_pane_ParamLimits

0x8423,	// (0x00039ff7) list_setting_pane

0x8464,	// (0x0003a038) list_single_2graphic_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_2graphic_pane

0x8464,	// (0x0003a038) list_single_graphic_heading_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_graphic_heading_pane

0x8464,	// (0x0003a038) list_single_graphic_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_graphic_pane

0x8464,	// (0x0003a038) list_single_heading_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_heading_pane

0xafed,	// (0x0003cbc1) list_single_large_graphic_pane_ParamLimits

0xafed,	// (0x0003cbc1) list_single_large_graphic_pane

0x8464,	// (0x0003a038) list_single_number_heading_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_number_heading_pane

0x8464,	// (0x0003a038) list_single_number_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_number_pane

0x8464,	// (0x0003a038) list_single_pane_ParamLimits

0x8464,	// (0x0003a038) list_single_pane

0x1fde,	// (0x00033bb2) list_highlight_pane_cp1

0x455f,	// (0x00036133) list_single_pane_g1_ParamLimits

0x455f,	// (0x00036133) list_single_pane_g1

0x456b,	// (0x0003613f) list_single_pane_g2_ParamLimits

0x456b,	// (0x0003613f) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00041177) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00041177) list_single_pane_g

0x840d,	// (0x00039fe1) list_single_pane_t1_ParamLimits

0x840d,	// (0x00039fe1) list_single_pane_t1

0x455f,	// (0x00036133) list_single_number_pane_g1_ParamLimits

0x455f,	// (0x00036133) list_single_number_pane_g1

0x456b,	// (0x0003613f) list_single_number_pane_g2_ParamLimits

0x456b,	// (0x0003613f) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00041177) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00041177) list_single_number_pane_g

0x66dd,	// (0x000382b1) list_single_number_pane_t1_ParamLimits

0x66dd,	// (0x000382b1) list_single_number_pane_t1

0x8357,	// (0x00039f2b) list_single_number_pane_t2_ParamLimits

0x8357,	// (0x00039f2b) list_single_number_pane_t2

0x0001,

0xf926,	// (0x000414fa) list_single_number_pane_t_ParamLimits

0xf926,	// (0x000414fa) list_single_number_pane_t

0x66d1,	// (0x000382a5) list_single_graphic_pane_g1_ParamLimits

0x66d1,	// (0x000382a5) list_single_graphic_pane_g1

0x455f,	// (0x00036133) list_single_graphic_pane_g2_ParamLimits

0x455f,	// (0x00036133) list_single_graphic_pane_g2

0x456b,	// (0x0003613f) list_single_graphic_pane_g3_ParamLimits

0x456b,	// (0x0003613f) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00041170) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00041170) list_single_graphic_pane_g

0x66dd,	// (0x000382b1) list_single_graphic_pane_t1_ParamLimits

0x66dd,	// (0x000382b1) list_single_graphic_pane_t1

0x455f,	// (0x00036133) list_single_heading_pane_g1_ParamLimits

0x455f,	// (0x00036133) list_single_heading_pane_g1

0x456b,	// (0x0003613f) list_single_heading_pane_g2_ParamLimits

0x456b,	// (0x0003613f) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00041177) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00041177) list_single_heading_pane_g

0x458d,	// (0x00036161) list_single_heading_pane_t1_ParamLimits

0x458d,	// (0x00036161) list_single_heading_pane_t1

0x45a3,	// (0x00036177) list_single_heading_pane_t2_ParamLimits

0x45a3,	// (0x00036177) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004117c) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004117c) list_single_heading_pane_t

0x455f,	// (0x00036133) list_single_number_heading_pane_g1_ParamLimits

0x455f,	// (0x00036133) list_single_number_heading_pane_g1

0x456b,	// (0x0003613f) list_single_number_heading_pane_g2_ParamLimits

0x456b,	// (0x0003613f) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00041177) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00041177) list_single_number_heading_pane_g

0x458d,	// (0x00036161) list_single_number_heading_pane_t1_ParamLimits

0x458d,	// (0x00036161) list_single_number_heading_pane_t1

0x45b5,	// (0x00036189) list_single_number_heading_pane_t2_ParamLimits

0x45b5,	// (0x00036189) list_single_number_heading_pane_t2

0x45c7,	// (0x0003619b) list_single_number_heading_pane_t3_ParamLimits

0x45c7,	// (0x0003619b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00041181) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00041181) list_single_number_heading_pane_t

0x66f3,	// (0x000382c7) list_single_graphic_heading_pane_g1_ParamLimits

0x66f3,	// (0x000382c7) list_single_graphic_heading_pane_g1

0x66ff,	// (0x000382d3) list_single_graphic_heading_pane_g4_ParamLimits

0x66ff,	// (0x000382d3) list_single_graphic_heading_pane_g4

0x456b,	// (0x0003613f) list_single_graphic_heading_pane_g5_ParamLimits

0x456b,	// (0x0003613f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00041188) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00041188) list_single_graphic_heading_pane_g

0x458d,	// (0x00036161) list_single_graphic_heading_pane_t1_ParamLimits

0x458d,	// (0x00036161) list_single_graphic_heading_pane_t1

0x6710,	// (0x000382e4) list_single_graphic_heading_pane_t2_ParamLimits

0x6710,	// (0x000382e4) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0004118f) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0004118f) list_single_graphic_heading_pane_t

0x6722,	// (0x000382f6) list_single_large_graphic_pane_g1_ParamLimits

0x6722,	// (0x000382f6) list_single_large_graphic_pane_g1

0x672e,	// (0x00038302) list_single_large_graphic_pane_g2_ParamLimits

0x672e,	// (0x00038302) list_single_large_graphic_pane_g2

0x673a,	// (0x0003830e) list_single_large_graphic_pane_g3_ParamLimits

0x673a,	// (0x0003830e) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00041194) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00041194) list_single_large_graphic_pane_g

0xa04b,	// (0x0003bc1f) wait_border_pane_g2_copy1

0x6746,	// (0x0003831a) list_single_large_graphic_pane_g4_cp2

0x674e,	// (0x00038322) list_single_large_graphic_pane_t1_ParamLimits

0x674e,	// (0x00038322) list_single_large_graphic_pane_t1

0x45f1,	// (0x000361c5) list_double_pane_g1_ParamLimits

0x45f1,	// (0x000361c5) list_double_pane_g1

0x45fd,	// (0x000361d1) list_double_pane_g2_ParamLimits

0x45fd,	// (0x000361d1) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0004119b) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0004119b) list_double_pane_g

0x6764,	// (0x00038338) list_double_pane_t1_ParamLimits

0x6764,	// (0x00038338) list_double_pane_t1

0x677a,	// (0x0003834e) list_double_pane_t2_ParamLimits

0x677a,	// (0x0003834e) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000411a0) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000411a0) list_double_pane_t

0x678c,	// (0x00038360) list_double2_pane_g1_ParamLimits

0x678c,	// (0x00038360) list_double2_pane_g1

0x45fd,	// (0x000361d1) list_double2_pane_g2_ParamLimits

0x45fd,	// (0x000361d1) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000411a5) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000411a5) list_double2_pane_g

0x6764,	// (0x00038338) list_double2_pane_t1_ParamLimits

0x6764,	// (0x00038338) list_double2_pane_t1

0x679d,	// (0x00038371) list_double2_pane_t2_ParamLimits

0x679d,	// (0x00038371) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000411aa) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000411aa) list_double2_pane_t

0x45f1,	// (0x000361c5) list_double_number_pane_g1_ParamLimits

0x45f1,	// (0x000361c5) list_double_number_pane_g1

0x45fd,	// (0x000361d1) list_double_number_pane_g2_ParamLimits

0x45fd,	// (0x000361d1) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0004119b) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0004119b) list_double_number_pane_g

0x67af,	// (0x00038383) list_double_number_pane_t1_ParamLimits

0x67af,	// (0x00038383) list_double_number_pane_t1

0x67c1,	// (0x00038395) list_double_number_pane_t2_ParamLimits

0x67c1,	// (0x00038395) list_double_number_pane_t2

0x67d7,	// (0x000383ab) list_double_number_pane_t3_ParamLimits

0x67d7,	// (0x000383ab) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000411af) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000411af) list_double_number_pane_t

0x67e9,	// (0x000383bd) list_double_graphic_pane_g1_ParamLimits

0x67e9,	// (0x000383bd) list_double_graphic_pane_g1

0x4609,	// (0x000361dd) list_double_graphic_pane_g2_ParamLimits

0x4609,	// (0x000361dd) list_double_graphic_pane_g2

0x4618,	// (0x000361ec) list_double_graphic_pane_g3_ParamLimits

0x4618,	// (0x000361ec) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000411b6) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000411b6) list_double_graphic_pane_g

0x67c1,	// (0x00038395) list_double_graphic_pane_t1_ParamLimits

0x67c1,	// (0x00038395) list_double_graphic_pane_t1

0x67d7,	// (0x000383ab) list_double_graphic_pane_t2_ParamLimits

0x67d7,	// (0x000383ab) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000411bf) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000411bf) list_double_graphic_pane_t

0x67e9,	// (0x000383bd) list_double2_graphic_pane_g1_ParamLimits

0x67e9,	// (0x000383bd) list_double2_graphic_pane_g1

0x4624,	// (0x000361f8) list_double2_graphic_pane_g2_ParamLimits

0x4624,	// (0x000361f8) list_double2_graphic_pane_g2

0x4630,	// (0x00036204) list_double2_graphic_pane_g3_ParamLimits

0x4630,	// (0x00036204) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000411c4) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000411c4) list_double2_graphic_pane_g

0x67c1,	// (0x00038395) list_double2_graphic_pane_t1_ParamLimits

0x67c1,	// (0x00038395) list_double2_graphic_pane_t1

0x6801,	// (0x000383d5) list_double2_graphic_pane_t2_ParamLimits

0x6801,	// (0x000383d5) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000411cb) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000411cb) list_double2_graphic_pane_t

0x6813,	// (0x000383e7) list_double_large_graphic_pane_g1_ParamLimits

0x6813,	// (0x000383e7) list_double_large_graphic_pane_g1

0x678c,	// (0x00038360) list_double_large_graphic_pane_g2_ParamLimits

0x678c,	// (0x00038360) list_double_large_graphic_pane_g2

0x45fd,	// (0x000361d1) list_double_large_graphic_pane_g3_ParamLimits

0x45fd,	// (0x000361d1) list_double_large_graphic_pane_g3

0x6826,	// (0x000383fa) list_double_large_graphic_pane_g4_ParamLimits

0x6826,	// (0x000383fa) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000411d0) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000411d0) list_double_large_graphic_pane_g

0x6838,	// (0x0003840c) list_double_large_graphic_pane_t1_ParamLimits

0x6838,	// (0x0003840c) list_double_large_graphic_pane_t1

0x6851,	// (0x00038425) list_double_large_graphic_pane_t2_ParamLimits

0x6851,	// (0x00038425) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000411db) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000411db) list_double_large_graphic_pane_t

0x6863,	// (0x00038437) list_double2_large_graphic_pane_g1_ParamLimits

0x6863,	// (0x00038437) list_double2_large_graphic_pane_g1

0x678c,	// (0x00038360) list_double2_large_graphic_pane_g2_ParamLimits

0x678c,	// (0x00038360) list_double2_large_graphic_pane_g2

0x45fd,	// (0x000361d1) list_double2_large_graphic_pane_g3_ParamLimits

0x45fd,	// (0x000361d1) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000411e0) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000411e0) list_double2_large_graphic_pane_g

0x67c1,	// (0x00038395) list_double2_large_graphic_pane_t1_ParamLimits

0x67c1,	// (0x00038395) list_double2_large_graphic_pane_t1

0x6801,	// (0x000383d5) list_double2_large_graphic_pane_t2_ParamLimits

0x6801,	// (0x000383d5) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000411cb) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000411cb) list_double2_large_graphic_pane_t

0x686f,	// (0x00038443) list_double_heading_pane_g1_ParamLimits

0x686f,	// (0x00038443) list_double_heading_pane_g1

0x4651,	// (0x00036225) list_double_heading_pane_g2_ParamLimits

0x4651,	// (0x00036225) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x000411e7) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x000411e7) list_double_heading_pane_g

0x6880,	// (0x00038454) list_double_heading_pane_t1_ParamLimits

0x6880,	// (0x00038454) list_double_heading_pane_t1

0x6801,	// (0x000383d5) list_double_heading_pane_t2_ParamLimits

0x6801,	// (0x000383d5) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x000411ec) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x000411ec) list_double_heading_pane_t

0x6896,	// (0x0003846a) list_double_graphic_heading_pane_g1_ParamLimits

0x6896,	// (0x0003846a) list_double_graphic_heading_pane_g1

0x686f,	// (0x00038443) list_double_graphic_heading_pane_g2_ParamLimits

0x686f,	// (0x00038443) list_double_graphic_heading_pane_g2

0x4651,	// (0x00036225) list_double_graphic_heading_pane_g3_ParamLimits

0x4651,	// (0x00036225) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x000411f1) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x000411f1) list_double_graphic_heading_pane_g

0x6880,	// (0x00038454) list_double_graphic_heading_pane_t1_ParamLimits

0x6880,	// (0x00038454) list_double_graphic_heading_pane_t1

0x6801,	// (0x000383d5) list_double_graphic_heading_pane_t2_ParamLimits

0x6801,	// (0x000383d5) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x000411ec) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x000411ec) list_double_graphic_heading_pane_t

0x678c,	// (0x00038360) list_double_time_pane_g1_ParamLimits

0x678c,	// (0x00038360) list_double_time_pane_g1

0x45fd,	// (0x000361d1) list_double_time_pane_g2_ParamLimits

0x45fd,	// (0x000361d1) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x000411a5) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x000411a5) list_double_time_pane_g

0x465d,	// (0x00036231) list_double_time_pane_t1_ParamLimits

0x465d,	// (0x00036231) list_double_time_pane_t1

0x4673,	// (0x00036247) list_double_time_pane_t2_ParamLimits

0x4673,	// (0x00036247) list_double_time_pane_t2

0x4685,	// (0x00036259) list_double_time_pane_t3_ParamLimits

0x4685,	// (0x00036259) list_double_time_pane_t3

0x4697,	// (0x0003626b) list_double_time_pane_t4_ParamLimits

0x4697,	// (0x0003626b) list_double_time_pane_t4

0x0003,

0xf624,	// (0x000411f8) list_double_time_pane_t_ParamLimits

0xf624,	// (0x000411f8) list_double_time_pane_t

0x46a9,	// (0x0003627d) list_setting_pane_g1_ParamLimits

0x46a9,	// (0x0003627d) list_setting_pane_g1

0x46b5,	// (0x00036289) list_setting_pane_g2_ParamLimits

0x46b5,	// (0x00036289) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00041201) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00041201) list_setting_pane_g

0x68a2,	// (0x00038476) list_setting_pane_t1_ParamLimits

0x68a2,	// (0x00038476) list_setting_pane_t1

0x68b9,	// (0x0003848d) list_setting_pane_t2_ParamLimits

0x68b9,	// (0x0003848d) list_setting_pane_t2

0x0002,

0xf632,	// (0x00041206) list_setting_pane_t_ParamLimits

0xf632,	// (0x00041206) list_setting_pane_t

0x68f6,	// (0x000384ca) set_value_pane_cp_ParamLimits

0x68f6,	// (0x000384ca) set_value_pane_cp

0x46c1,	// (0x00036295) list_setting_number_pane_g1_ParamLimits

0x46c1,	// (0x00036295) list_setting_number_pane_g1

0x46cd,	// (0x000362a1) list_setting_number_pane_g2_ParamLimits

0x46cd,	// (0x000362a1) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x0004120d) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x0004120d) list_setting_number_pane_g

0x6902,	// (0x000384d6) list_setting_number_pane_t1_ParamLimits

0x6902,	// (0x000384d6) list_setting_number_pane_t1

0x46d9,	// (0x000362ad) list_setting_number_pane_t2_ParamLimits

0x46d9,	// (0x000362ad) list_setting_number_pane_t2

0x6916,	// (0x000384ea) list_setting_number_pane_t3_ParamLimits

0x6916,	// (0x000384ea) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00041212) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00041212) list_setting_number_pane_t

0x68f6,	// (0x000384ca) set_value_pane_ParamLimits

0x68f6,	// (0x000384ca) set_value_pane

0x23a0,	// (0x00033f74) bg_set_opt_pane_ParamLimits

0x23a0,	// (0x00033f74) bg_set_opt_pane

0x692e,	// (0x00038502) set_value_pane_t1

0x23c1,	// (0x00033f95) slider_set_pane_cp3

0x693c,	// (0x00038510) volume_small_pane_cp

0x23ca,	// (0x00033f9e) list_form_gen_pane

0x23d3,	// (0x00033fa7) scroll_pane_cp8

0x6945,	// (0x00038519) form_field_data_pane_ParamLimits

0x6945,	// (0x00038519) form_field_data_pane

0x695d,	// (0x00038531) form_field_data_wide_pane_ParamLimits

0x695d,	// (0x00038531) form_field_data_wide_pane

0x697e,	// (0x00038552) form_field_popup_pane_ParamLimits

0x697e,	// (0x00038552) form_field_popup_pane

0x699c,	// (0x00038570) form_field_popup_wide_pane_ParamLimits

0x699c,	// (0x00038570) form_field_popup_wide_pane

0x472b,	// (0x000362ff) form_field_slider_pane_ParamLimits

0x472b,	// (0x000362ff) form_field_slider_pane

0x69b9,	// (0x0003858d) form_field_slider_wide_pane_ParamLimits

0x69b9,	// (0x0003858d) form_field_slider_wide_pane

0x23e4,	// (0x00033fb8) data_form_pane

0x69d6,	// (0x000385aa) form_field_data_pane_t1

0x23f0,	// (0x00033fc4) input_focus_pane

0x69ee,	// (0x000385c2) data_form_wide_pane

0x6a0b,	// (0x000385df) form_field_data_wide_pane_t1

0x22e4,	// (0x00033eb8) input_focus_pane_cp6

0x6a2d,	// (0x00038601) form_field_popup_pane_t1

0x23f0,	// (0x00033fc4) input_focus_pane_cp7

0x241e,	// (0x00033ff2) list_form_pane

0x6a4d,	// (0x00038621) form_field_popup_wide_pane_t1

0x23f0,	// (0x00033fc4) input_focus_pane_cp8

0x242a,	// (0x00033ffe) list_form_wide_pane

0x6a6a,	// (0x0003863e) form_field_slider_pane_t1_ParamLimits

0x6a6a,	// (0x0003863e) form_field_slider_pane_t1

0x6a80,	// (0x00038654) form_field_slider_pane_t2_ParamLimits

0x6a80,	// (0x00038654) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00041222) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00041222) form_field_slider_pane_t

0x202c,	// (0x00033c00) input_focus_pane_cp9_ParamLimits

0x202c,	// (0x00033c00) input_focus_pane_cp9

0x6a95,	// (0x00038669) slider_cont_pane_ParamLimits

0x6a95,	// (0x00038669) slider_cont_pane

0x2436,	// (0x0003400a) form_field_slider_wide_pane_t1_ParamLimits

0x2436,	// (0x0003400a) form_field_slider_wide_pane_t1

0x6aa9,	// (0x0003867d) form_field_slider_wide_pane_t2_ParamLimits

0x6aa9,	// (0x0003867d) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00041227) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00041227) form_field_slider_wide_pane_t

0x202c,	// (0x00033c00) input_focus_pane_cp10_ParamLimits

0x202c,	// (0x00033c00) input_focus_pane_cp10

0x6abb,	// (0x0003868f) slider_cont_pane_cp1_ParamLimits

0x6abb,	// (0x0003868f) slider_cont_pane_cp1

0x6acf,	// (0x000386a3) slider_form_pane_cp

0x2448,	// (0x0003401c) input_focus_pane_g1

0x2450,	// (0x00034024) input_focus_pane_g2

0x2458,	// (0x0003402c) input_focus_pane_g3

0x2460,	// (0x00034034) input_focus_pane_g4

0x2468,	// (0x0003403c) input_focus_pane_g5

0x2470,	// (0x00034044) input_focus_pane_g6

0x2478,	// (0x0003404c) input_focus_pane_g7

0x2480,	// (0x00034054) input_focus_pane_g8

0x2488,	// (0x0003405c) input_focus_pane_g9

0x1fd4,	// (0x00033ba8) input_focus_pane_g10

0x0009,

0xf658,	// (0x0004122c) input_focus_pane_g

0xa054,	// (0x0003bc28) wait_border_pane_g3_copy1

0x6ad7,	// (0x000386ab) data_form_pane_t1

0x1fd4,	// (0x00033ba8) wait_anim_pane_g1_copy1

0x83e1,	// (0x00039fb5) data_form_wide_pane_t1

0x6af2,	// (0x000386c6) list_form_graphic_pane_cp_ParamLimits

0x6af2,	// (0x000386c6) list_form_graphic_pane_cp

0xaf43,	// (0x0003cb17) slider_form_pane_g1

0xaf4c,	// (0x0003cb20) slider_form_pane_g2

0x0006,

0xf956,	// (0x0004152a) slider_form_pane_g

0x6b06,	// (0x000386da) list_form_graphic_pane_ParamLimits

0x6b06,	// (0x000386da) list_form_graphic_pane

0x6b1d,	// (0x000386f1) list_form_graphic_pane_g1

0x6b25,	// (0x000386f9) list_form_graphic_pane_t1_ParamLimits

0x6b25,	// (0x000386f9) list_form_graphic_pane_t1

0x203a,	// (0x00033c0e) list_highlight_pane_cp5_ParamLimits

0x203a,	// (0x00033c0e) list_highlight_pane_cp5

0x6b3a,	// (0x0003870e) find_pane_g1

0x2490,	// (0x00034064) input_find_pane

0x6b43,	// (0x00038717) input_find_pane_g1_ParamLimits

0x6b43,	// (0x00038717) input_find_pane_g1

0x6b4f,	// (0x00038723) input_find_pane_t1_ParamLimits

0x6b4f,	// (0x00038723) input_find_pane_t1

0x6b64,	// (0x00038738) input_find_pane_t2_ParamLimits

0x6b64,	// (0x00038738) input_find_pane_t2

0x0001,

0xf66d,	// (0x00041241) input_find_pane_t_ParamLimits

0xf66d,	// (0x00041241) input_find_pane_t

0x2499,	// (0x0003406d) input_focus_pane_cp5_ParamLimits

0x2499,	// (0x0003406d) input_focus_pane_cp5

0x24ac,	// (0x00034080) bg_popup_window_pane_cp2_ParamLimits

0x24ac,	// (0x00034080) bg_popup_window_pane_cp2

0x24b9,	// (0x0003408d) listscroll_menu_pane_ParamLimits

0x24b9,	// (0x0003408d) listscroll_menu_pane

0x6b85,	// (0x00038759) popup_submenu_window_ParamLimits

0x6b85,	// (0x00038759) popup_submenu_window

0x24c5,	// (0x00034099) find_popup_pane_g1

0x6bad,	// (0x00038781) input_popup_find_pane_cp

0x24cd,	// (0x000340a1) input_focus_pane_cp4_ParamLimits

0x24cd,	// (0x000340a1) input_focus_pane_cp4

0x24db,	// (0x000340af) input_popup_find_pane_t1_ParamLimits

0x24db,	// (0x000340af) input_popup_find_pane_t1

0x1fde,	// (0x00033bb2) bg_popup_sub_pane_cp

0x2509,	// (0x000340dd) listscroll_popup_sub_pane

0x2511,	// (0x000340e5) list_submenu_pane_ParamLimits

0x2511,	// (0x000340e5) list_submenu_pane

0x2522,	// (0x000340f6) scroll_pane_cp4

0x6bc5,	// (0x00038799) list_single_popup_submenu_pane_ParamLimits

0x6bc5,	// (0x00038799) list_single_popup_submenu_pane

0x2e40,	// (0x00034a14) list_single_popup_submenu_pane_g1

0x6bd9,	// (0x000387ad) list_single_popup_submenu_pane_t1_ParamLimits

0x6bd9,	// (0x000387ad) list_single_popup_submenu_pane_t1

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp1_ParamLimits

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp1

0x252a,	// (0x000340fe) tabs_2_active_pane_g1

0x6bee,	// (0x000387c2) tabs_2_active_pane_t1

0x203a,	// (0x00033c0e) bg_passive_tab_pane_cp1_ParamLimits

0x203a,	// (0x00033c0e) bg_passive_tab_pane_cp1

0x252a,	// (0x000340fe) tabs_2_passive_pane_g1

0x6bee,	// (0x000387c2) tabs_2_passive_pane_t1

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp4

0x6c0e,	// (0x000387e2) tabs_2_long_active_pane_t1

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp4

0x8083,	// (0x00039c57) list_single_midp_graphic_pane_g4_ParamLimits

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp5

0x6c2d,	// (0x00038801) tabs_3_long_active_pane_t1

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp5

0x8083,	// (0x00039c57) list_single_midp_graphic_pane_g4

0x203a,	// (0x00033c0e) bg_popup_window_pane_cp13_ParamLimits

0x203a,	// (0x00033c0e) bg_popup_window_pane_cp13

0x253e,	// (0x00034112) listscroll_popup_fast_pane_ParamLimits

0x253e,	// (0x00034112) listscroll_popup_fast_pane

0x254a,	// (0x0003411e) grid_popup_fast_pane_ParamLimits

0x254a,	// (0x0003411e) grid_popup_fast_pane

0x255c,	// (0x00034130) scroll_pane_cp9_ParamLimits

0x255c,	// (0x00034130) scroll_pane_cp9

0xc8a6,	// (0x0003e47a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8a6,	// (0x0003e47a) list_single_graphic_hl_pane_t1_cp2

0x256f,	// (0x00034143) input_focus_pane_cp20_ParamLimits

0x256f,	// (0x00034143) input_focus_pane_cp20

0x257d,	// (0x00034151) query_popup_data_pane_t1_ParamLimits

0x257d,	// (0x00034151) query_popup_data_pane_t1

0x2590,	// (0x00034164) query_popup_data_pane_t2_ParamLimits

0x2590,	// (0x00034164) query_popup_data_pane_t2

0x25d6,	// (0x000341aa) query_popup_data_pane_t3_ParamLimits

0x25d6,	// (0x000341aa) query_popup_data_pane_t3

0x2617,	// (0x000341eb) query_popup_data_pane_t4_ParamLimits

0x2617,	// (0x000341eb) query_popup_data_pane_t4

0x2653,	// (0x00034227) query_popup_data_pane_t5_ParamLimits

0x2653,	// (0x00034227) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00041246) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00041246) query_popup_data_pane_t

0x2448,	// (0x0003401c) bg_set_opt_pane_g1

0x2450,	// (0x00034024) bg_set_opt_pane_g2

0x2458,	// (0x0003402c) bg_set_opt_pane_g3

0x2460,	// (0x00034034) bg_set_opt_pane_g4

0x2468,	// (0x0003403c) bg_set_opt_pane_g5

0x2470,	// (0x00034044) bg_set_opt_pane_g6

0x2478,	// (0x0003404c) bg_set_opt_pane_g7

0x2480,	// (0x00034054) bg_set_opt_pane_g8

0x2488,	// (0x0003405c) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00041251) bg_set_opt_pane_g

0x7184,	// (0x00038d58) control_top_pane_stacon_ParamLimits

0x7184,	// (0x00038d58) control_top_pane_stacon

0x71d7,	// (0x00038dab) signal_pane_stacon_ParamLimits

0x71d7,	// (0x00038dab) signal_pane_stacon

0x29df,	// (0x000345b3) stacon_top_pane_g1_ParamLimits

0x29df,	// (0x000345b3) stacon_top_pane_g1

0x71fc,	// (0x00038dd0) title_pane_stacon_ParamLimits

0x71fc,	// (0x00038dd0) title_pane_stacon

0x7226,	// (0x00038dfa) uni_indicator_pane_stacon_ParamLimits

0x7226,	// (0x00038dfa) uni_indicator_pane_stacon

0x723b,	// (0x00038e0f) battery_pane_stacon_ParamLimits

0x723b,	// (0x00038e0f) battery_pane_stacon

0x727f,	// (0x00038e53) control_bottom_pane_stacon_ParamLimits

0x727f,	// (0x00038e53) control_bottom_pane_stacon

0x72a2,	// (0x00038e76) navi_pane_stacon_ParamLimits

0x72a2,	// (0x00038e76) navi_pane_stacon

0x2a01,	// (0x000345d5) stacon_bottom_pane_g1_ParamLimits

0x2a01,	// (0x000345d5) stacon_bottom_pane_g1

0x6c59,	// (0x0003882d) aid_levels_signal_lsc_ParamLimits

0x6c59,	// (0x0003882d) aid_levels_signal_lsc

0x6c6f,	// (0x00038843) signal_pane_stacon_g1_ParamLimits

0x6c6f,	// (0x00038843) signal_pane_stacon_g1

0x6c83,	// (0x00038857) signal_pane_stacon_g2_ParamLimits

0x6c83,	// (0x00038857) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00041264) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00041264) signal_pane_stacon_g

0x6cb8,	// (0x0003888c) title_pane_stacon_t1_ParamLimits

0x6cb8,	// (0x0003888c) title_pane_stacon_t1

0x26ab,	// (0x0003427f) uni_indicator_pane_stacon_g1

0x26b5,	// (0x00034289) uni_indicator_pane_stacon_g2

0x2697,	// (0x0003426b) uni_indicator_pane_stacon_g3

0x26a1,	// (0x00034275) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00041270) uni_indicator_pane_stacon_g

0x6cdd,	// (0x000388b1) control_top_pane_stacon_g1

0x6ce5,	// (0x000388b9) control_top_pane_stacon_t1_ParamLimits

0x6ce5,	// (0x000388b9) control_top_pane_stacon_t1

0x6d1c,	// (0x000388f0) aid_levels_battery_lsc_ParamLimits

0x6d1c,	// (0x000388f0) aid_levels_battery_lsc

0x6d33,	// (0x00038907) battery_pane_stacon_g1_ParamLimits

0x6d33,	// (0x00038907) battery_pane_stacon_g1

0x6d46,	// (0x0003891a) battery_pane_stacon_g2_ParamLimits

0x6d46,	// (0x0003891a) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00041279) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00041279) battery_pane_stacon_g

0x6d84,	// (0x00038958) navi_icon_pane_stacon

0x6d98,	// (0x0003896c) navi_navi_pane_stacon

0x6d84,	// (0x00038958) navi_text_pane_stacon

0x6cdd,	// (0x000388b1) control_bottom_pane_stacon_g1

0x6dac,	// (0x00038980) control_bottom_pane_stacon_t1_ParamLimits

0x6dac,	// (0x00038980) control_bottom_pane_stacon_t1

0x6de3,	// (0x000389b7) grid_app_pane_ParamLimits

0x6de3,	// (0x000389b7) grid_app_pane

0x6e05,	// (0x000389d9) scroll_pane_cp15_ParamLimits

0x6e05,	// (0x000389d9) scroll_pane_cp15

0x6e18,	// (0x000389ec) cell_app_pane_ParamLimits

0x6e18,	// (0x000389ec) cell_app_pane

0x6e40,	// (0x00038a14) cell_app_pane_g1_ParamLimits

0x6e40,	// (0x00038a14) cell_app_pane_g1

0x26d9,	// (0x000342ad) cell_app_pane_g2_ParamLimits

0x26d9,	// (0x000342ad) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0004127e) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0004127e) cell_app_pane_g

0x6e64,	// (0x00038a38) cell_app_pane_t1_ParamLimits

0x6e64,	// (0x00038a38) cell_app_pane_t1

0x26e5,	// (0x000342b9) grid_highlight_pane_ParamLimits

0x26e5,	// (0x000342b9) grid_highlight_pane

0x2448,	// (0x0003401c) cell_highlight_pane_g1

0x2450,	// (0x00034024) cell_highlight_pane_g2

0x2458,	// (0x0003402c) cell_highlight_pane_g3

0x2460,	// (0x00034034) cell_highlight_pane_g4

0x2468,	// (0x0003403c) cell_highlight_pane_g5

0x2470,	// (0x00034044) cell_highlight_pane_g6

0x2478,	// (0x0003404c) cell_highlight_pane_g7

0x2480,	// (0x00034054) cell_highlight_pane_g8

0x2488,	// (0x0003405c) cell_highlight_pane_g9

0x1fd4,	// (0x00033ba8) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0004122c) cell_highlight_pane_g

0x26f6,	// (0x000342ca) bg_scroll_pane

0x6e8e,	// (0x00038a62) scroll_handle_pane

0x273d,	// (0x00034311) scroll_bg_pane_g1

0x2752,	// (0x00034326) scroll_bg_pane_g2

0x276a,	// (0x0003433e) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00041283) scroll_bg_pane_g

0x6eb7,	// (0x00038a8b) scroll_handle_focus_pane_ParamLimits

0x6eb7,	// (0x00038a8b) scroll_handle_focus_pane

0x273d,	// (0x00034311) scroll_handle_pane_g1

0x277f,	// (0x00034353) scroll_handle_pane_g2

0x276a,	// (0x0003433e) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0004128a) scroll_handle_pane_g

0x24cd,	// (0x000340a1) bg_popup_sub_pane_cp21_ParamLimits

0x24cd,	// (0x000340a1) bg_popup_sub_pane_cp21

0x6ec4,	// (0x00038a98) popup_fep_japan_predictive_window_t1_ParamLimits

0x6ec4,	// (0x00038a98) popup_fep_japan_predictive_window_t1

0x6ede,	// (0x00038ab2) popup_fep_japan_predictive_window_t2_ParamLimits

0x6ede,	// (0x00038ab2) popup_fep_japan_predictive_window_t2

0x6f11,	// (0x00038ae5) popup_fep_japan_predictive_window_t3_ParamLimits

0x6f11,	// (0x00038ae5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00041291) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00041291) popup_fep_japan_predictive_window_t

0x1fde,	// (0x00033bb2) bg_popup_sub_pane_cp23

0x3375,	// (0x00034f49) listscroll_japin_cand_pane

0x2793,	// (0x00034367) popup_fep_japan_candidate_window_t1

0x27a1,	// (0x00034375) candidate_pane_ParamLimits

0x27a1,	// (0x00034375) candidate_pane

0x6f48,	// (0x00038b1c) scroll_pane_cp30

0x27b3,	// (0x00034387) list_single_popup_jap_candidate_pane_ParamLimits

0x27b3,	// (0x00034387) list_single_popup_jap_candidate_pane

0x1fde,	// (0x00033bb2) list_highlight_pane_cp30

0x27c8,	// (0x0003439c) list_single_popup_jap_candidate_pane_t1

0x27d7,	// (0x000343ab) level_1_signal

0x27e4,	// (0x000343b8) level_2_signal

0x27f1,	// (0x000343c5) level_3_signal

0x27fe,	// (0x000343d2) level_4_signal

0x280b,	// (0x000343df) level_5_signal

0x2818,	// (0x000343ec) level_6_signal

0x2825,	// (0x000343f9) level_7_signal

0x27d7,	// (0x000343ab) level_1_battery

0x27e4,	// (0x000343b8) level_2_battery

0x27f1,	// (0x000343c5) level_3_battery

0x27fe,	// (0x000343d2) level_4_battery

0x280b,	// (0x000343df) level_5_battery

0x2818,	// (0x000343ec) level_6_battery

0x2825,	// (0x000343f9) level_7_battery

0x284a,	// (0x0003441e) list_menu_pane_ParamLimits

0x284a,	// (0x0003441e) list_menu_pane

0x2860,	// (0x00034434) scroll_pane_cp25_ParamLimits

0x2860,	// (0x00034434) scroll_pane_cp25

0x2879,	// (0x0003444d) list_double2_graphic_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double2_graphic_pane_cp2

0x2879,	// (0x0003444d) list_double2_large_graphic_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double2_large_graphic_pane_cp2

0x2879,	// (0x0003444d) list_double2_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double2_pane_cp2

0x2879,	// (0x0003444d) list_double_graphic_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double_graphic_pane_cp2

0x2879,	// (0x0003444d) list_double_large_graphic_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double_large_graphic_pane_cp2

0x2879,	// (0x0003444d) list_double_number_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double_number_pane_cp2

0x2879,	// (0x0003444d) list_double_pane_cp2_ParamLimits

0x2879,	// (0x0003444d) list_double_pane_cp2

0x6f83,	// (0x00038b57) list_single_2graphic_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_2graphic_pane_cp2

0x6f83,	// (0x00038b57) list_single_graphic_heading_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_graphic_heading_pane_cp2

0x6f83,	// (0x00038b57) list_single_graphic_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_graphic_pane_cp2

0x6f83,	// (0x00038b57) list_single_heading_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_heading_pane_cp2

0x2889,	// (0x0003445d) list_single_large_graphic_pane_cp2_ParamLimits

0x2889,	// (0x0003445d) list_single_large_graphic_pane_cp2

0x6f83,	// (0x00038b57) list_single_number_heading_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_number_heading_pane_cp2

0x6f83,	// (0x00038b57) list_single_number_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_number_pane_cp2

0x6f99,	// (0x00038b6d) list_single_pane_cp2_ParamLimits

0x6f99,	// (0x00038b6d) list_single_pane_cp2

0x28a3,	// (0x00034477) bg_popup_sub_pane_cp22

0x7071,	// (0x00038c45) popup_side_volume_key_window_g1

0x7095,	// (0x00038c69) popup_side_volume_key_window_t1

0x70b1,	// (0x00038c85) volume_small_pane_cp1

0x202c,	// (0x00033c00) bg_popup_sub_pane_cp24_ParamLimits

0x202c,	// (0x00033c00) bg_popup_sub_pane_cp24

0x28b9,	// (0x0003448d) fep_china_uni_candidate_pane_ParamLimits

0x28b9,	// (0x0003448d) fep_china_uni_candidate_pane

0x28cd,	// (0x000344a1) fep_china_uni_entry_pane

0x28dd,	// (0x000344b1) popup_fep_china_uni_window_g1

0x70b9,	// (0x00038c8d) fep_china_uni_entry_pane_g1

0x70c1,	// (0x00038c95) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x000412c2) fep_china_uni_entry_pane_g

0x28f9,	// (0x000344cd) fep_entry_item_pane

0x2903,	// (0x000344d7) fep_candidate_item_pane

0x70c9,	// (0x00038c9d) fep_china_uni_candidate_pane_g1

0x290b,	// (0x000344df) fep_china_uni_candidate_pane_g2

0x2913,	// (0x000344e7) fep_china_uni_candidate_pane_g3

0x70d1,	// (0x00038ca5) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x000412c7) fep_china_uni_candidate_pane_g

0x1fd4,	// (0x00033ba8) fep_entry_item_pane_g1

0x291b,	// (0x000344ef) fep_entry_item_pane_t1_ParamLimits

0x291b,	// (0x000344ef) fep_entry_item_pane_t1

0x2931,	// (0x00034505) fep_candidate_item_pane_t1_ParamLimits

0x2931,	// (0x00034505) fep_candidate_item_pane_t1

0x2946,	// (0x0003451a) fep_candidate_item_pane_t2_ParamLimits

0x2946,	// (0x0003451a) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x000412d0) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x000412d0) fep_candidate_item_pane_t

0x203a,	// (0x00033c0e) list_highlight_pane_cp31_ParamLimits

0x203a,	// (0x00033c0e) list_highlight_pane_cp31

0x2958,	// (0x0003452c) level_1_signal_lsc

0x2961,	// (0x00034535) level_2_signal_lsc

0x296a,	// (0x0003453e) level_3_signal_lsc

0x2973,	// (0x00034547) level_4_signal_lsc

0x297c,	// (0x00034550) level_5_signal_lsc

0x2985,	// (0x00034559) level_6_signal_lsc

0x298e,	// (0x00034562) level_7_signal_lsc

0x298e,	// (0x00034562) level_1_battery_lsc

0x2997,	// (0x0003456b) level_2_battery_lsc

0x29a0,	// (0x00034574) level_3_battery_lsc

0x29a9,	// (0x0003457d) level_4_battery_lsc

0x29b2,	// (0x00034586) level_5_battery_lsc

0x29bb,	// (0x0003458f) level_6_battery_lsc

0x2958,	// (0x0003452c) level_7_battery_lsc

0x29c4,	// (0x00034598) scroll_handle_focus_pane_g1

0x29cd,	// (0x000345a1) scroll_handle_focus_pane_g2

0x29d6,	// (0x000345aa) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x000412d5) scroll_handle_focus_pane_g

0x70d9,	// (0x00038cad) list_single_2graphic_pane_g1_ParamLimits

0x70d9,	// (0x00038cad) list_single_2graphic_pane_g1

0x66ff,	// (0x000382d3) list_single_2graphic_pane_g2_ParamLimits

0x66ff,	// (0x000382d3) list_single_2graphic_pane_g2

0x456b,	// (0x0003613f) list_single_2graphic_pane_g3_ParamLimits

0x456b,	// (0x0003613f) list_single_2graphic_pane_g3

0x70e5,	// (0x00038cb9) list_single_2graphic_pane_g4_ParamLimits

0x70e5,	// (0x00038cb9) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x000412dc) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x000412dc) list_single_2graphic_pane_g

0x70f1,	// (0x00038cc5) list_single_2graphic_pane_t1_ParamLimits

0x70f1,	// (0x00038cc5) list_single_2graphic_pane_t1

0x711f,	// (0x00038cf3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x711f,	// (0x00038cf3) list_double2_graphic_large_graphic_pane_g1

0x678c,	// (0x00038360) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x678c,	// (0x00038360) list_double2_graphic_large_graphic_pane_g2

0x45fd,	// (0x000361d1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x45fd,	// (0x000361d1) list_double2_graphic_large_graphic_pane_g3

0x473e,	// (0x00036312) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x473e,	// (0x00036312) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x000412e5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x000412e5) list_double2_graphic_large_graphic_pane_g

0x474a,	// (0x0003631e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x474a,	// (0x0003631e) list_double2_graphic_large_graphic_pane_t1

0x4760,	// (0x00036334) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4760,	// (0x00036334) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x000412ee) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x000412ee) list_double2_graphic_large_graphic_pane_t

0x7301,	// (0x00038ed5) popup_fast_swap_window_ParamLimits

0x7301,	// (0x00038ed5) popup_fast_swap_window

0x731d,	// (0x00038ef1) popup_side_volume_key_window

0x2a8c,	// (0x00034660) stacon_top_pane

0x2a96,	// (0x0003466a) status_pane_ParamLimits

0x2a96,	// (0x0003466a) status_pane

0x7337,	// (0x00038f0b) status_small_pane

0x1fde,	// (0x00033bb2) control_pane

0x1fde,	// (0x00033bb2) stacon_bottom_pane

0x23d3,	// (0x00033fa7) scroll_pane_cp121

0x23ca,	// (0x00033f9e) set_content_pane

0x712f,	// (0x00038d03) bg_active_tab_pane_g1_cp1

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp1

0x7141,	// (0x00038d15) bg_active_tab_pane_g3_cp1

0x712f,	// (0x00038d03) bg_passive_tab_pane_g1_cp1

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp1

0x7141,	// (0x00038d15) bg_passive_tab_pane_g3_cp1

0x714a,	// (0x00038d1e) bg_active_tab_pane_g1_cp2

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp2

0x7153,	// (0x00038d27) bg_active_tab_pane_g3_cp2

0x714a,	// (0x00038d1e) bg_passive_tab_pane_g1_cp2

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp2

0x7153,	// (0x00038d27) bg_passive_tab_pane_g3_cp2

0x715c,	// (0x00038d30) bg_active_tab_pane_g1_cp3

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp3

0x7165,	// (0x00038d39) bg_active_tab_pane_g3_cp3

0x715c,	// (0x00038d30) bg_passive_tab_pane_g1_cp3

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp3

0x7165,	// (0x00038d39) bg_passive_tab_pane_g3_cp3

0x716e,	// (0x00038d42) bg_active_tab_pane_g1_cp4

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp4

0x7179,	// (0x00038d4d) bg_active_tab_pane_g3_cp4

0x716e,	// (0x00038d42) bg_passive_tab_pane_g1_cp4

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp4

0x7179,	// (0x00038d4d) bg_passive_tab_pane_g3_cp4

0x72c5,	// (0x00038e99) bg_active_tab_pane_g1_cp5

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp5

0x72ce,	// (0x00038ea2) bg_active_tab_pane_g3_cp5

0x72c5,	// (0x00038e99) bg_passive_tab_pane_g1_cp5

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp5

0x72ce,	// (0x00038ea2) bg_passive_tab_pane_g3_cp5

0x72d7,	// (0x00038eab) list_set_graphic_pane_ParamLimits

0x72d7,	// (0x00038eab) list_set_graphic_pane

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp4

0x2a1d,	// (0x000345f1) list_set_graphic_pane_g1_ParamLimits

0x2a1d,	// (0x000345f1) list_set_graphic_pane_g1

0x2a29,	// (0x000345fd) list_set_graphic_pane_g2_ParamLimits

0x2a29,	// (0x000345fd) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x000412f3) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x000412f3) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0004168b) volume_small_pane_cp_g

0x72f5,	// (0x00038ec9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x72f5,	// (0x00038ec9) list_double2_large_graphic_pane_g1_cp2

0x2a4b,	// (0x0003461f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a4b,	// (0x0003461f) list_double2_large_graphic_pane_g2_cp2

0x2a5c,	// (0x00034630) list_double2_large_graphic_pane_g3_cp2

0x2a64,	// (0x00034638) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2a64,	// (0x00034638) list_double2_large_graphic_pane_t1_cp2

0x2a7a,	// (0x0003464e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2a7a,	// (0x0003464e) list_double2_large_graphic_pane_t2_cp2

0xab05,	// (0x0003c6d9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab05,	// (0x0003c6d9) list_double_large_graphic_pane_g1_cp2

0xab16,	// (0x0003c6ea) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab16,	// (0x0003c6ea) list_double_large_graphic_pane_g2_cp2

0x2bb2,	// (0x00034786) list_double_large_graphic_pane_g3_cp2

0xab27,	// (0x0003c6fb) list_double_large_graphic_pane_g4_cp

0xab2f,	// (0x0003c703) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab2f,	// (0x0003c703) list_double_large_graphic_pane_t1_cp2

0xab46,	// (0x0003c71a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab46,	// (0x0003c71a) list_double_large_graphic_pane_t2_cp2

0x2aa4,	// (0x00034678) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2aa4,	// (0x00034678) list_double2_graphic_pane_g1_cp2

0x2ab2,	// (0x00034686) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2ab2,	// (0x00034686) list_double2_graphic_pane_g2_cp2

0x2ac3,	// (0x00034697) list_double2_graphic_pane_g3_cp2

0x2acd,	// (0x000346a1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2acd,	// (0x000346a1) list_double2_graphic_pane_t1_cp2

0x2ae3,	// (0x000346b7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2ae3,	// (0x000346b7) list_double2_graphic_pane_t2_cp2

0x2af5,	// (0x000346c9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2af5,	// (0x000346c9) list_single_number_heading_pane_g1_cp2

0x2b01,	// (0x000346d5) list_single_number_heading_pane_g2_cp2

0x2b09,	// (0x000346dd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b09,	// (0x000346dd) list_single_number_heading_pane_t1_cp2

0x2b1f,	// (0x000346f3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b1f,	// (0x000346f3) list_single_number_heading_pane_t2_cp2

0x2b31,	// (0x00034705) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2b31,	// (0x00034705) list_single_number_heading_pane_t3_cp2

0x2af5,	// (0x000346c9) list_single_heading_pane_g1_cp2_ParamLimits

0x2af5,	// (0x000346c9) list_single_heading_pane_g1_cp2

0x2b01,	// (0x000346d5) list_single_heading_pane_g2_cp2

0x2b09,	// (0x000346dd) list_single_heading_pane_t1_cp2_ParamLimits

0x2b09,	// (0x000346dd) list_single_heading_pane_t1_cp2

0xa90f,	// (0x0003c4e3) list_single_heading_pane_t2_cp2_ParamLimits

0xa90f,	// (0x0003c4e3) list_single_heading_pane_t2_cp2

0xa857,	// (0x0003c42b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa857,	// (0x0003c42b) list_double_graphic_pane_g1_cp2

0xa863,	// (0x0003c437) list_double_graphic_pane_g2_cp2_ParamLimits

0xa863,	// (0x0003c437) list_double_graphic_pane_g2_cp2

0xa872,	// (0x0003c446) list_double_graphic_pane_g3_cp2

0xa87a,	// (0x0003c44e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa87a,	// (0x0003c44e) list_double_graphic_pane_t1_cp2

0xa890,	// (0x0003c464) list_double_graphic_pane_t2_cp2_ParamLimits

0xa890,	// (0x0003c464) list_double_graphic_pane_t2_cp2

0x2ba6,	// (0x0003477a) list_double_number_pane_g1_cp2_ParamLimits

0x2ba6,	// (0x0003477a) list_double_number_pane_g1_cp2

0x2bb2,	// (0x00034786) list_double_number_pane_g2_cp2

0xa81b,	// (0x0003c3ef) list_double_number_pane_t1_cp2_ParamLimits

0xa81b,	// (0x0003c3ef) list_double_number_pane_t1_cp2

0xa82f,	// (0x0003c403) list_double_number_pane_t2_cp2_ParamLimits

0xa82f,	// (0x0003c403) list_double_number_pane_t2_cp2

0xa845,	// (0x0003c419) list_double_number_pane_t3_cp2_ParamLimits

0xa845,	// (0x0003c419) list_double_number_pane_t3_cp2

0xa704,	// (0x0003c2d8) list_single_graphic_pane_g1_cp2_ParamLimits

0xa704,	// (0x0003c2d8) list_single_graphic_pane_g1_cp2

0x2c0b,	// (0x000347df) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c0b,	// (0x000347df) list_single_graphic_pane_g2_cp2

0x2c17,	// (0x000347eb) list_single_graphic_pane_g3_cp2

0xa6da,	// (0x0003c2ae) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6da,	// (0x0003c2ae) list_single_graphic_pane_t1_cp2

0x2c0b,	// (0x000347df) list_single_number_pane_g1_cp2_ParamLimits

0x2c0b,	// (0x000347df) list_single_number_pane_g1_cp2

0x2c17,	// (0x000347eb) list_single_number_pane_g2_cp2

0xa6da,	// (0x0003c2ae) list_single_number_pane_t1_cp2_ParamLimits

0xa6da,	// (0x0003c2ae) list_single_number_pane_t1_cp2

0xa6f0,	// (0x0003c2c4) list_single_number_pane_t2_cp2_ParamLimits

0xa6f0,	// (0x0003c2c4) list_single_number_pane_t2_cp2

0x2a4b,	// (0x0003461f) list_double2_pane_g1_cp2_ParamLimits

0x2a4b,	// (0x0003461f) list_double2_pane_g1_cp2

0x2a5c,	// (0x00034630) list_double2_pane_g2_cp2

0x2b7e,	// (0x00034752) list_double2_pane_t1_cp2_ParamLimits

0x2b7e,	// (0x00034752) list_double2_pane_t1_cp2

0x2b94,	// (0x00034768) list_double2_pane_t2_cp2_ParamLimits

0x2b94,	// (0x00034768) list_double2_pane_t2_cp2

0x2ba6,	// (0x0003477a) list_double_pane_g1_cp2_ParamLimits

0x2ba6,	// (0x0003477a) list_double_pane_g1_cp2

0x2bb2,	// (0x00034786) list_double_pane_g2_cp2

0x2bba,	// (0x0003478e) list_double_pane_t1_cp2_ParamLimits

0x2bba,	// (0x0003478e) list_double_pane_t1_cp2

0x2bd0,	// (0x000347a4) list_double_pane_t2_cp2_ParamLimits

0x2bd0,	// (0x000347a4) list_double_pane_t2_cp2

0x7342,	// (0x00038f16) list_single_pane_cp2_g3

0x2c0b,	// (0x000347df) list_single_pane_g1_cp2_ParamLimits

0x2c0b,	// (0x000347df) list_single_pane_g1_cp2

0x2c17,	// (0x000347eb) list_single_pane_g2_cp2

0x2c1f,	// (0x000347f3) list_single_pane_t1_cp2_ParamLimits

0x2c1f,	// (0x000347f3) list_single_pane_t1_cp2

0x734a,	// (0x00038f1e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x734a,	// (0x00038f1e) list_single_large_graphic_pane_g1_cp2

0x2c37,	// (0x0003480b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c37,	// (0x0003480b) list_single_large_graphic_pane_g2_cp2

0x2c43,	// (0x00034817) list_single_large_graphic_pane_g3_cp2

0x7356,	// (0x00038f2a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7356,	// (0x00038f2a) list_single_large_graphic_pane_g4_cp1

0x2c4b,	// (0x0003481f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2c4b,	// (0x0003481f) list_single_large_graphic_pane_t1_cp2

0xa6a6,	// (0x0003c27a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6a6,	// (0x0003c27a) list_single_graphic_heading_pane_g1_cp2

0xa673,	// (0x0003c247) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa673,	// (0x0003c247) list_single_graphic_heading_pane_g4_cp2

0x2c17,	// (0x000347eb) list_single_graphic_heading_pane_g5_cp2

0xa6b2,	// (0x0003c286) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b2,	// (0x0003c286) list_single_graphic_heading_pane_t1_cp2

0xa6c8,	// (0x0003c29c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6c8,	// (0x0003c29c) list_single_graphic_heading_pane_t2_cp2

0xa667,	// (0x0003c23b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa667,	// (0x0003c23b) list_single_2graphic_pane_g1_cp2

0xa673,	// (0x0003c247) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa673,	// (0x0003c247) list_single_2graphic_pane_g2_cp2

0x2c17,	// (0x000347eb) list_single_2graphic_pane_g3_cp2

0xa684,	// (0x0003c258) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa684,	// (0x0003c258) list_single_2graphic_pane_g4_cp2

0xa690,	// (0x0003c264) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa690,	// (0x0003c264) list_single_2graphic_pane_t1_cp2

0x1fd4,	// (0x00033ba8) list_highlight_pane_g10_cp1

0xa24f,	// (0x0003be23) list_highlight_pane_g1_cp1

0xa257,	// (0x0003be2b) list_highlight_pane_g2_cp1

0xa25f,	// (0x0003be33) list_highlight_pane_g3_cp1

0xa267,	// (0x0003be3b) list_highlight_pane_g4_cp1

0xa26f,	// (0x0003be43) list_highlight_pane_g5_cp1

0xa277,	// (0x0003be4b) list_highlight_pane_g6_cp1

0xa27f,	// (0x0003be53) list_highlight_pane_g7_cp1

0xa287,	// (0x0003be5b) list_highlight_pane_g8_cp1

0xa28f,	// (0x0003be63) list_highlight_pane_g9_cp1

0xa177,	// (0x0003bd4b) form_field_slider_pane_t3

0xa185,	// (0x0003bd59) form_field_slider_pane_t4

0xa193,	// (0x0003bd67) slider_form_pane_ParamLimits

0xa193,	// (0x0003bd67) slider_form_pane

0x1fde,	// (0x00033bb2) control_abbreviations

0x1fde,	// (0x00033bb2) control_conventions

0x1fde,	// (0x00033bb2) control_definitions

0x1fde,	// (0x00033bb2) format_table_attribute

0xa959,	// (0x0003c52d) bg_popup_preview_window_pane_g9

0x1fde,	// (0x00033bb2) format_table_data2

0x1fde,	// (0x00033bb2) format_table_data3

0x1fde,	// (0x00033bb2) format_table_data_example

0x0008,

0x1fde,	// (0x00033bb2) intro_purpose

0xf8b6,	// (0x0004148a) bg_popup_preview_window_pane_g

0x1fde,	// (0x00033bb2) texts_category

0x1fde,	// (0x00033bb2) texts_graphics

0x2c61,	// (0x00034835) text_digital

0x2c70,	// (0x00034844) text_primary

0x2c7f,	// (0x00034853) text_primary_small

0x2c8e,	// (0x00034862) text_secondary

0x2c9d,	// (0x00034871) text_title

0xb08c,	// (0x0003cc60) bg_passive_tab_pane_g1_cp3_srt

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp3_srt

0xb095,	// (0x0003cc69) bg_passive_tab_pane_g3_cp3_srt

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp3_srt_ParamLimits

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp3_srt

0xb09e,	// (0x0003cc72) tabs_4_active_pane_srt_g1

0xb0a6,	// (0x0003cc7a) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a6,	// (0x0003cc7a) tabs_4_active_pane_srt_t1

0xb08c,	// (0x0003cc60) bg_active_tab_pane_g1_cp3_copy1

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp3_copy1

0xb095,	// (0x0003cc69) bg_active_tab_pane_g3_cp3_copy1

0x203a,	// (0x00033c0e) tabs_2_long_active_pane_srt_ParamLimits

0x203a,	// (0x00033c0e) tabs_2_long_active_pane_srt

0x203a,	// (0x00033c0e) tabs_2_long_passive_pane_srt_ParamLimits

0x203a,	// (0x00033c0e) tabs_2_long_passive_pane_srt

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp4_srt

0xad7a,	// (0x0003c94e) bg_passive_tab_pane_g1_cp4_srt

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp4_srt

0xad83,	// (0x0003c957) bg_passive_tab_pane_g3_cp4_srt

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp4_srt_ParamLimits

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp4_srt

0xad8c,	// (0x0003c960) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad8c,	// (0x0003c960) tabs_2_long_active_pane_srt_t1

0xad7a,	// (0x0003c94e) bg_active_tab_pane_g1_cp4_srt

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp4_srt

0xad83,	// (0x0003c957) bg_active_tab_pane_g3_cp4_srt

0x202c,	// (0x00033c00) tabs_3_long_active_pane_srt_ParamLimits

0x202c,	// (0x00033c00) tabs_3_long_active_pane_srt

0x202c,	// (0x00033c00) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x202c,	// (0x00033c00) tabs_3_long_passive_pane_cp_srt

0x202c,	// (0x00033c00) tabs_3_long_passive_pane_srt_ParamLimits

0x202c,	// (0x00033c00) tabs_3_long_passive_pane_srt

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp5_srt

0x72c5,	// (0x00038e99) bg_passive_tab_pane_g1_cp5_srt

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp5_srt

0x72ce,	// (0x00038ea2) bg_passive_tab_pane_g3_cp5_srt

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp5_srt_ParamLimits

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp5_srt

0xad68,	// (0x0003c93c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad68,	// (0x0003c93c) tabs_3_long_active_pane_srt_t1

0x72c5,	// (0x00038e99) bg_active_tab_pane_g1_cp5_srt

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp5_srt

0x72ce,	// (0x00038ea2) bg_active_tab_pane_g3_cp5_srt

0xad5a,	// (0x0003c92e) navi_text_pane_srt_t1

0xad52,	// (0x0003c926) navi_icon_pane_srt_g1

0x2d88,	// (0x0003495c) midp_editing_number_pane_srt

0x2cac,	// (0x00034880) midp_ticker_pane_srt

0x2d90,	// (0x00034964) midp_ticker_pane_srt_g1

0x2d98,	// (0x0003496c) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00041312) midp_ticker_pane_srt_g

0x2da0,	// (0x00034974) midp_ticker_pane_srt_t1

0xad43,	// (0x0003c917) midp_editing_number_pane_t1_copy1

0x7370,	// (0x00038f44) listscroll_midp_pane

0x7370,	// (0x00038f44) midp_form_pane

0x73e2,	// (0x00038fb6) midp_info_popup_window_ParamLimits

0x73e2,	// (0x00038fb6) midp_info_popup_window

0x24cd,	// (0x000340a1) bg_popup_sub_pane_cp50_ParamLimits

0x24cd,	// (0x000340a1) bg_popup_sub_pane_cp50

0x9e83,	// (0x0003ba57) listscroll_midp_info_pane_ParamLimits

0x9e83,	// (0x0003ba57) listscroll_midp_info_pane

0x9e63,	// (0x0003ba37) listscroll_form_midp_pane_ParamLimits

0x9e63,	// (0x0003ba37) listscroll_form_midp_pane

0x9e6f,	// (0x0003ba43) scroll_bar_cp050

0x9e43,	// (0x0003ba17) list_midp_pane

0xbaf7,	// (0x0003d6cb) signal_pane_g2_cp

0x9d7d,	// (0x0003b951) listscroll_midp_info_pane_t1_ParamLimits

0x9d7d,	// (0x0003b951) listscroll_midp_info_pane_t1

0x9d95,	// (0x0003b969) listscroll_midp_info_pane_t2_ParamLimits

0x9d95,	// (0x0003b969) listscroll_midp_info_pane_t2

0x9dd3,	// (0x0003b9a7) listscroll_midp_info_pane_t3_ParamLimits

0x9dd3,	// (0x0003b9a7) listscroll_midp_info_pane_t3

0x9e0d,	// (0x0003b9e1) listscroll_midp_info_pane_t4_ParamLimits

0x9e0d,	// (0x0003b9e1) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x000413c5) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x000413c5) listscroll_midp_info_pane_t

0x2522,	// (0x000340f6) scroll_pane_cp21

0x9d1d,	// (0x0003b8f1) form_midp_field_choice_group_pane

0x9d26,	// (0x0003b8fa) form_midp_field_text_pane

0x9d63,	// (0x0003b937) form_midp_field_time_pane

0x9d6b,	// (0x0003b93f) form_midp_gauge_slider_pane

0x9d74,	// (0x0003b948) form_midp_gauge_wait_pane

0x1fde,	// (0x00033bb2) form_midp_image_pane

0x816a,	// (0x00039d3e) list_single_midp_pane_ParamLimits

0x816a,	// (0x00039d3e) list_single_midp_pane

0x9cd2,	// (0x0003b8a6) form_midp_field_text_pane_t1

0x9a9c,	// (0x0003b670) input_focus_pane_cp050

0x9d0c,	// (0x0003b8e0) list_midp_form_text_pane

0x9ca1,	// (0x0003b875) form_midp_field_choice_group_pane_t1

0x9caf,	// (0x0003b883) input_focus_pane_cp051

0x9cc3,	// (0x0003b897) list_midp_choice_pane

0x1fde,	// (0x00033bb2) status_idle_pane

0x9c85,	// (0x0003b859) form_midp_field_time_pane_t1

0x1fd4,	// (0x00033ba8) wait_anim_pane_g2_copy1

0x9c93,	// (0x0003b867) form_midp_field_time_pane_t2

0x0001,

0x2d0c,	// (0x000348e0) aid_navinavi_width_2_pane

0xf7ec,	// (0x000413c0) form_midp_field_time_pane_t

0x1fde,	// (0x00033bb2) input_focus_pane_cp052

0x1fde,	// (0x00033bb2) bg_input_focus_pane_cp040

0x9c45,	// (0x0003b819) form_midp_gauge_slider_pane_t1

0x9c53,	// (0x0003b827) form_midp_gauge_slider_pane_t2

0x9c61,	// (0x0003b835) form_midp_gauge_slider_pane_t3

0x9c6f,	// (0x0003b843) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x000413b7) form_midp_gauge_slider_pane_t

0x9c7d,	// (0x0003b851) form_midp_slider_pane

0x203a,	// (0x00033c0e) bg_input_focus_pane_cp041_ParamLimits

0x203a,	// (0x00033c0e) bg_input_focus_pane_cp041

0x9c12,	// (0x0003b7e6) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c12,	// (0x0003b7e6) form_midp_gauge_wait_pane_t1

0x9c24,	// (0x0003b7f8) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c24,	// (0x0003b7f8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x000413b2) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x000413b2) form_midp_gauge_wait_pane_t

0x9c36,	// (0x0003b80a) form_midp_wait_pane_ParamLimits

0x9c36,	// (0x0003b80a) form_midp_wait_pane

0x9bdc,	// (0x0003b7b0) form_midp_image_pane_g1

0x9be5,	// (0x0003b7b9) form_midp_image_pane_t1

0x9bf4,	// (0x0003b7c8) form_midp_image_pane_t2

0x9c03,	// (0x0003b7d7) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x000413ab) form_midp_image_pane_t

0x9bd3,	// (0x0003b7a7) list_single_midp_pane_g1

0x487e,	// (0x00036452) list_single_midp_pane_t1

0x9baa,	// (0x0003b77e) list_midp_form_item_pane_ParamLimits

0x9baa,	// (0x0003b77e) list_midp_form_item_pane

0x2cb4,	// (0x00034888) list_midp_form_item_pane_t1

0x2cc3,	// (0x00034897) midp_ticker_pane_g1

0x2ccf,	// (0x000348a3) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x000412f8) midp_ticker_pane_g

0x2cdb,	// (0x000348af) midp_ticker_pane_t1

0xaf90,	// (0x0003cb64) midp_editing_number_pane_t1

0xaf6e,	// (0x0003cb42) midp_editing_number_pane

0xaf7d,	// (0x0003cb51) midp_ticker_pane

0xad33,	// (0x0003c907) ai_message_heading_pane

0x1fde,	// (0x00033bb2) bg_popup_window_pane_cp14

0xad3b,	// (0x0003c90f) listscroll_ai_message_pane

0xacbd,	// (0x0003c891) ai_message_heading_pane_g1_ParamLimits

0xacbd,	// (0x0003c891) ai_message_heading_pane_g1

0xacc9,	// (0x0003c89d) ai_message_heading_pane_g2_ParamLimits

0xacc9,	// (0x0003c89d) ai_message_heading_pane_g2

0xacd5,	// (0x0003c8a9) ai_message_heading_pane_g3_ParamLimits

0xacd5,	// (0x0003c8a9) ai_message_heading_pane_g3

0xace1,	// (0x0003c8b5) ai_message_heading_pane_g4_ParamLimits

0xace1,	// (0x0003c8b5) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x000414ec) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x000414ec) ai_message_heading_pane_g

0xaced,	// (0x0003c8c1) ai_message_heading_pane_t1_ParamLimits

0xaced,	// (0x0003c8c1) ai_message_heading_pane_t1

0xad07,	// (0x0003c8db) ai_message_heading_pane_t2_ParamLimits

0xad07,	// (0x0003c8db) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x000414f5) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x000414f5) ai_message_heading_pane_t

0xad19,	// (0x0003c8ed) bg_popup_heading_pane_cp1_ParamLimits

0xad19,	// (0x0003c8ed) bg_popup_heading_pane_cp1

0xacab,	// (0x0003c87f) list_ai_message_pane_ParamLimits

0xacab,	// (0x0003c87f) list_ai_message_pane

0x2522,	// (0x000340f6) scroll_pane_cp10

0xac47,	// (0x0003c81b) list_ai_message_pane_g1

0xac4f,	// (0x0003c823) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x000414c9) list_ai_message_pane_g

0xac57,	// (0x0003c82b) list_ai_message_pane_t1_ParamLimits

0xac57,	// (0x0003c82b) list_ai_message_pane_t1

0xac6c,	// (0x0003c840) list_ai_message_pane_t2_ParamLimits

0xac6c,	// (0x0003c840) list_ai_message_pane_t2

0xac81,	// (0x0003c855) list_ai_message_pane_t3_ParamLimits

0xac81,	// (0x0003c855) list_ai_message_pane_t3

0xac96,	// (0x0003c86a) list_ai_message_pane_t4_ParamLimits

0xac96,	// (0x0003c86a) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x000414ce) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x000414ce) list_ai_message_pane_t

0xac32,	// (0x0003c806) cell_ai_soft_ind_pane_ParamLimits

0xac32,	// (0x0003c806) cell_ai_soft_ind_pane

0x2ced,	// (0x000348c1) cell_ai_soft_ind_pane_g1_ParamLimits

0x2ced,	// (0x000348c1) cell_ai_soft_ind_pane_g1

0x1fde,	// (0x00033bb2) grid_highlight_cp1

0x2cfa,	// (0x000348ce) text_secondary_cp56_ParamLimits

0x2cfa,	// (0x000348ce) text_secondary_cp56

0xac07,	// (0x0003c7db) example_general_pane_ParamLimits

0xac07,	// (0x0003c7db) example_general_pane

0xac13,	// (0x0003c7e7) example_parent_pane_g1_ParamLimits

0xac13,	// (0x0003c7e7) example_parent_pane_g1

0xac1f,	// (0x0003c7f3) example_parent_pane_t1_ParamLimits

0xac1f,	// (0x0003c7f3) example_parent_pane_t1

0x7ad0,	// (0x000396a4) popup_preview_text_window_ParamLimits

0x7ad0,	// (0x000396a4) popup_preview_text_window

0x2c03,	// (0x000347d7) list_single_pane_cp2_g4

0x220c,	// (0x00033de0) bg_popup_preview_window_pane_ParamLimits

0x220c,	// (0x00033de0) bg_popup_preview_window_pane

0xa961,	// (0x0003c535) popup_preview_text_window_t1_ParamLimits

0xa961,	// (0x0003c535) popup_preview_text_window_t1

0xa97f,	// (0x0003c553) popup_preview_text_window_t2_ParamLimits

0xa97f,	// (0x0003c553) popup_preview_text_window_t2

0xa9c8,	// (0x0003c59c) popup_preview_text_window_t3_ParamLimits

0xa9c8,	// (0x0003c59c) popup_preview_text_window_t3

0xaa0d,	// (0x0003c5e1) popup_preview_text_window_t4_ParamLimits

0xaa0d,	// (0x0003c5e1) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x0004149d) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x0004149d) popup_preview_text_window_t

0xaa8b,	// (0x0003c65f) scroll_pane_cp11

0x9a10,	// (0x0003b5e4) bg_popup_preview_window_pane_g1

0xa921,	// (0x0003c4f5) bg_popup_preview_window_pane_g2

0xa929,	// (0x0003c4fd) bg_popup_preview_window_pane_g3

0xa931,	// (0x0003c505) bg_popup_preview_window_pane_g4

0xa939,	// (0x0003c50d) bg_popup_preview_window_pane_g5

0xa941,	// (0x0003c515) bg_popup_preview_window_pane_g6

0xa949,	// (0x0003c51d) bg_popup_preview_window_pane_g7

0xa951,	// (0x0003c525) bg_popup_preview_window_pane_g8

0x5d0f,	// (0x000378e3) aid_popup_width_pane

0x7aae,	// (0x00039682) popup_midp_note_alarm_window_ParamLimits

0x7aae,	// (0x00039682) popup_midp_note_alarm_window

0x23e4,	// (0x00033fb8) data_form_pane_ParamLimits

0x69cc,	// (0x000385a0) form_field_data_pane_g1

0x69d6,	// (0x000385aa) form_field_data_pane_t1_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_ParamLimits

0x69ee,	// (0x000385c2) data_form_wide_pane_ParamLimits

0x69ff,	// (0x000385d3) form_field_data_wide_pane_g1

0x6a0b,	// (0x000385df) form_field_data_wide_pane_t1_ParamLimits

0x22e4,	// (0x00033eb8) input_focus_pane_cp6_ParamLimits

0x6bb7,	// (0x0003878b) input_popup_find_pane_g1_ParamLimits

0x6bb7,	// (0x0003878b) input_popup_find_pane_g1

0x6d57,	// (0x0003892b) aid_navi_side_left_pane

0x6d6c,	// (0x00038940) aid_navi_side_right_pane

0xa34a,	// (0x0003bf1e) bg_popup_window_pane_cp30_ParamLimits

0xa34a,	// (0x0003bf1e) bg_popup_window_pane_cp30

0xa3c4,	// (0x0003bf98) popup_midp_note_alarm_window_g1_ParamLimits

0xa3c4,	// (0x0003bf98) popup_midp_note_alarm_window_g1

0xa3f4,	// (0x0003bfc8) popup_midp_note_alarm_window_t1_ParamLimits

0xa3f4,	// (0x0003bfc8) popup_midp_note_alarm_window_t1

0xa495,	// (0x0003c069) popup_midp_note_alarm_window_t2_ParamLimits

0xa495,	// (0x0003c069) popup_midp_note_alarm_window_t2

0xa543,	// (0x0003c117) popup_midp_note_alarm_window_t3_ParamLimits

0xa543,	// (0x0003c117) popup_midp_note_alarm_window_t3

0xa56b,	// (0x0003c13f) popup_midp_note_alarm_window_t4_ParamLimits

0xa56b,	// (0x0003c13f) popup_midp_note_alarm_window_t4

0xa58b,	// (0x0003c15f) popup_midp_note_alarm_window_t5_ParamLimits

0xa58b,	// (0x0003c15f) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0004143a) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0004143a) popup_midp_note_alarm_window_t

0xa637,	// (0x0003c20b) wait_bar_pane_cp1_ParamLimits

0xa637,	// (0x0003c20b) wait_bar_pane_cp1

0x1fde,	// (0x00033bb2) wait_anim_pane_copy1

0x1fde,	// (0x00033bb2) wait_border_pane_copy1

0xa040,	// (0x0003bc14) wait_border_pane_g1_copy1

0x6a25,	// (0x000385f9) form_field_popup_pane_g1

0x6a2d,	// (0x00038601) form_field_popup_pane_t1_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_cp7_ParamLimits

0x241e,	// (0x00033ff2) list_form_pane_ParamLimits

0x6a45,	// (0x00038619) form_field_popup_wide_pane_g1

0x6a4d,	// (0x00038621) form_field_popup_wide_pane_t1_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_cp8_ParamLimits

0x242a,	// (0x00033ffe) list_form_wide_pane_ParamLimits

0xb129,	// (0x0003ccfd) aid_size_cell_graphic_pane

0x6ad7,	// (0x000386ab) data_form_pane_t1_ParamLimits

0x83e1,	// (0x00039fb5) data_form_wide_pane_t1_ParamLimits

0x7db5,	// (0x00039989) bg_status_flat_pane

0x6118,	// (0x00037cec) title_pane_t1_ParamLimits

0x1ff4,	// (0x00033bc8) title_pane_t2_ParamLimits

0x201a,	// (0x00033bee) title_pane_t3_ParamLimits

0xf532,	// (0x00041106) title_pane_t_ParamLimits

0x27d7,	// (0x000343ab) level_1_signal_ParamLimits

0x27e4,	// (0x000343b8) level_2_signal_ParamLimits

0x27f1,	// (0x000343c5) level_3_signal_ParamLimits

0x27fe,	// (0x000343d2) level_4_signal_ParamLimits

0x280b,	// (0x000343df) level_5_signal_ParamLimits

0x2818,	// (0x000343ec) level_6_signal_ParamLimits

0x2825,	// (0x000343f9) level_7_signal_ParamLimits

0x27d7,	// (0x000343ab) level_1_battery_ParamLimits

0x27e4,	// (0x000343b8) level_2_battery_ParamLimits

0x27f1,	// (0x000343c5) level_3_battery_ParamLimits

0x27fe,	// (0x000343d2) level_4_battery_ParamLimits

0x280b,	// (0x000343df) level_5_battery_ParamLimits

0x2818,	// (0x000343ec) level_6_battery_ParamLimits

0x2825,	// (0x000343f9) level_7_battery_ParamLimits

0xa24f,	// (0x0003be23) bg_status_flat_pane_g1

0xa257,	// (0x0003be2b) bg_status_flat_pane_g2

0xa25f,	// (0x0003be33) bg_status_flat_pane_g3

0xa267,	// (0x0003be3b) bg_status_flat_pane_g4

0xa26f,	// (0x0003be43) bg_status_flat_pane_g5

0xa277,	// (0x0003be4b) bg_status_flat_pane_g6

0xa27f,	// (0x0003be53) bg_status_flat_pane_g7

0x6188,	// (0x00037d5c) tabs_3_active_pane_t1_ParamLimits

0x6188,	// (0x00037d5c) tabs_3_passive_pane_t1_ParamLimits

0x61a2,	// (0x00037d76) tabs_4_active_pane_t1_ParamLimits

0x61a2,	// (0x00037d76) tabs_4_1_passive_pane_t1_ParamLimits

0x6bee,	// (0x000387c2) tabs_2_active_pane_t1_ParamLimits

0x6bee,	// (0x000387c2) tabs_2_passive_pane_t1_ParamLimits

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp4_ParamLimits

0x6c0e,	// (0x000387e2) tabs_2_long_active_pane_t1_ParamLimits

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp4_ParamLimits

0x80b7,	// (0x00039c8b) list_single_midp_graphic_pane_t1_ParamLimits

0x6c00,	// (0x000387d4) bg_active_tab_pane_cp5_ParamLimits

0x6c2d,	// (0x00038801) tabs_3_long_active_pane_t1_ParamLimits

0x6c21,	// (0x000387f5) bg_passive_tab_pane_cp5_ParamLimits

0x80b7,	// (0x00039c8b) list_single_midp_graphic_pane_t1

0x7db5,	// (0x00039989) bg_status_flat_pane_ParamLimits

0x7e7e,	// (0x00039a52) indicator_pane_cp2_ParamLimits

0x7e7e,	// (0x00039a52) indicator_pane_cp2

0x7fa9,	// (0x00039b7d) navi_pane_srt_ParamLimits

0x7fa9,	// (0x00039b7d) navi_pane_srt

0x7fcd,	// (0x00039ba1) popup_clock_digital_analogue_window_cp1

0x207e,	// (0x00033c52) indicator_pane_t1

0x2cac,	// (0x00034880) copy_highlight_pane

0x2cac,	// (0x00034880) cursor_graphics_pane

0x2cac,	// (0x00034880) graphic_within_text_pane

0x2cac,	// (0x00034880) link_highlight_pane

0xaa4e,	// (0x0003c622) popup_preview_text_window_t5_ParamLimits

0xaa4e,	// (0x0003c622) popup_preview_text_window_t5

0x2d14,	// (0x000348e8) cursor_digital_pane

0x2d14,	// (0x000348e8) cursor_primary_pane

0x2d25,	// (0x000348f9) cursor_primary_small_pane

0x2d2d,	// (0x00034901) cursor_secondary_pane

0x2d35,	// (0x00034909) cursor_title_pane

0x2d14,	// (0x000348e8) link_highlight_digital_pane

0x2d1c,	// (0x000348f0) link_highlight_primary_pane

0x2d25,	// (0x000348f9) link_highlight_primary_small_pane

0x2d2d,	// (0x00034901) link_highlight_secondary_pane

0x2d35,	// (0x00034909) link_highlight_title_pane

0x2d14,	// (0x000348e8) copy_highlight_digital_pane

0x2d14,	// (0x000348e8) copy_highlight_primary_pane

0x2d25,	// (0x000348f9) copy_highlight_primary_small_pane

0x2d2d,	// (0x00034901) copy_highlight_secondary_pane

0x2d35,	// (0x00034909) copy_highlight_title_pane

0x2d2d,	// (0x00034901) graphic_text_digital_pane

0xa2ed,	// (0x0003bec1) graphic_text_primary_pane

0xa2f6,	// (0x0003beca) graphic_text_primary_small_pane

0x2d25,	// (0x000348f9) graphic_text_secondary_pane

0x2d14,	// (0x000348e8) graphic_text_title_pane

0x743a,	// (0x0003900e) cursor_primary_pane_g1

0xa2df,	// (0x0003beb3) cursor_text_primary_t1

0xa2c7,	// (0x0003be9b) cursor_primary_small_pane_g1

0xa2d1,	// (0x0003bea5) cursor_text_primary_small_t1

0xa2af,	// (0x0003be83) cursor_primary_small_pane_g1_copy1

0xa2b9,	// (0x0003be8d) cursor_text_primary_small_t1_copy1

0xa297,	// (0x0003be6b) cursor_text_title_t1

0xa2a5,	// (0x0003be79) cursor_title_pane_g1

0x743a,	// (0x0003900e) cursor_digital_pane_g1

0x2d3d,	// (0x00034911) cursor_text_digital_t1

0x2d4b,	// (0x0003491f) link_highlight_primary_pane_g1

0xa240,	// (0x0003be14) link_highlight_primary_pane_t1

0x2d4b,	// (0x0003491f) link_highlight_primary_small_pane_g1

0x2d53,	// (0x00034927) link_highlight_primary_small_pane_t1

0x2d4b,	// (0x0003491f) link_highlight_secondary_pane_g1

0x2d62,	// (0x00034936) link_highlight_secondary_pane_t1

0xa1a5,	// (0x0003bd79) link_highlight_title_pane_g1

0xa1bc,	// (0x0003bd90) link_highlight_title_pane_t1

0xa1a5,	// (0x0003bd79) link_highlight_digital_pane_g1

0xa1ad,	// (0x0003bd81) link_highlight_digital_pane_t1

0xa05f,	// (0x0003bc33) copy_highlight_primary_pane_g1

0xa085,	// (0x0003bc59) copy_highlight_primary_pane_t1

0xa05f,	// (0x0003bc33) copy_highlight_primary_small_pane_g1

0xa076,	// (0x0003bc4a) copy_highlight_primary_small_pane_t1

0x2d71,	// (0x00034945) copy_highlight_secondary_pane_g1

0x2d79,	// (0x0003494d) copy_highlight_secondary_pane_t1

0xa05f,	// (0x0003bc33) copy_highlight_title_pane_g1

0xa067,	// (0x0003bc3b) copy_highlight_title_pane_t1

0xa05f,	// (0x0003bc33) copy_highlight_digital_pane_g1

0xb2f7,	// (0x0003cecb) copy_highlight_digital_pane_t1

0xb24b,	// (0x0003ce1f) graphic_text_primary_pane_g1

0xb2db,	// (0x0003ceaf) graphic_text_primary_pane_t1

0xb2e9,	// (0x0003cebd) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x00041569) graphic_text_primary_pane_t

0xb2b7,	// (0x0003ce8b) graphic_text_primary_small_pane_g1

0xb2bf,	// (0x0003ce93) graphic_text_primary_small_pane_t1

0xb2cd,	// (0x0003cea1) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00041564) graphic_text_primary_small_pane_t

0xb293,	// (0x0003ce67) graphic_text_secondary_pane_g1

0xb29b,	// (0x0003ce6f) graphic_text_secondary_pane_t1

0xb2a9,	// (0x0003ce7d) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x0004155f) graphic_text_secondary_pane_t

0xb26f,	// (0x0003ce43) graphic_text_title_pane_g1

0xb277,	// (0x0003ce4b) graphic_text_title_pane_t1

0xb285,	// (0x0003ce59) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0004155a) graphic_text_title_pane_t

0xb24b,	// (0x0003ce1f) graphic_text_digital_pane_g1

0xb253,	// (0x0003ce27) graphic_text_digital_pane_t1

0xb261,	// (0x0003ce35) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00041555) graphic_text_digital_pane_t

0x203a,	// (0x00033c0e) navi_icon_pane_srt_ParamLimits

0x203a,	// (0x00033c0e) navi_icon_pane_srt

0x1fde,	// (0x00033bb2) navi_midp_pane_srt

0x1fde,	// (0x00033bb2) navi_navi_pane_srt

0x203a,	// (0x00033c0e) navi_text_pane_srt_ParamLimits

0x203a,	// (0x00033c0e) navi_text_pane_srt

0xb216,	// (0x0003cdea) navi_navi_icon_text_pane_srt

0xb21e,	// (0x0003cdf2) navi_navi_pane_srt_g1_ParamLimits

0xb21e,	// (0x0003cdf2) navi_navi_pane_srt_g1

0xb230,	// (0x0003ce04) navi_navi_pane_srt_g2_ParamLimits

0xb230,	// (0x0003ce04) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00041550) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00041550) navi_navi_pane_srt_g

0xb242,	// (0x0003ce16) navi_navi_tabs_pane_srt

0xb216,	// (0x0003cdea) navi_navi_text_pane_srt

0xb216,	// (0x0003cdea) navi_navi_volume_pane_srt

0xb207,	// (0x0003cddb) navi_navi_text_pane_srt_t1

0x8545,	// (0x0003a119) navi_navi_volume_pane_srt_g1

0x854d,	// (0x0003a121) volume_small_pane_srt_ParamLimits

0x854d,	// (0x0003a121) volume_small_pane_srt

0x7444,	// (0x00039018) volume_small_pane_srt_g1_ParamLimits

0x7444,	// (0x00039018) volume_small_pane_srt_g1

0x7454,	// (0x00039028) volume_small_pane_srt_g2_ParamLimits

0x7454,	// (0x00039028) volume_small_pane_srt_g2

0x7465,	// (0x00039039) volume_small_pane_srt_g3_ParamLimits

0x7465,	// (0x00039039) volume_small_pane_srt_g3

0x7476,	// (0x0003904a) volume_small_pane_srt_g4_ParamLimits

0x7476,	// (0x0003904a) volume_small_pane_srt_g4

0x7487,	// (0x0003905b) volume_small_pane_srt_g5_ParamLimits

0x7487,	// (0x0003905b) volume_small_pane_srt_g5

0x7498,	// (0x0003906c) volume_small_pane_srt_g6_ParamLimits

0x7498,	// (0x0003906c) volume_small_pane_srt_g6

0x74a9,	// (0x0003907d) volume_small_pane_srt_g7_ParamLimits

0x74a9,	// (0x0003907d) volume_small_pane_srt_g7

0x74ba,	// (0x0003908e) volume_small_pane_srt_g8_ParamLimits

0x74ba,	// (0x0003908e) volume_small_pane_srt_g8

0x74cb,	// (0x0003909f) volume_small_pane_srt_g9_ParamLimits

0x74cb,	// (0x0003909f) volume_small_pane_srt_g9

0x74dc,	// (0x000390b0) volume_small_pane_srt_g10_ParamLimits

0x74dc,	// (0x000390b0) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x000412fd) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x000412fd) volume_small_pane_srt_g

0x63ef,	// (0x00037fc3) query_popup_data_pane_cp2

0xb1ed,	// (0x0003cdc1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ed,	// (0x0003cdc1) navi_navi_icon_text_pane_srt_t1

0xa2ed,	// (0x0003bec1) navi_tabs_2_long_pane_srt

0xa2ed,	// (0x0003bec1) navi_tabs_2_pane_srt

0xa2ed,	// (0x0003bec1) navi_tabs_3_long_pane_srt

0xa2ed,	// (0x0003bec1) navi_tabs_3_pane_srt

0xa2ed,	// (0x0003bec1) navi_tabs_4_pane_srt

0x8525,	// (0x0003a0f9) tabs_2_active_pane_srt_ParamLimits

0x8525,	// (0x0003a0f9) tabs_2_active_pane_srt

0x8535,	// (0x0003a109) tabs_2_passive_pane_srt_ParamLimits

0x8535,	// (0x0003a109) tabs_2_passive_pane_srt

0x2532,	// (0x00034106) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2532,	// (0x00034106) bg_passive_tab_pane_cp1_srt

0xb1b9,	// (0x0003cd8d) bg_passive_tab_pane_g1_cp1_srt

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp1_srt

0xb1c2,	// (0x0003cd96) bg_passive_tab_pane_g3_cp1_srt

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp1_srt_ParamLimits

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp1_srt

0xb1cb,	// (0x0003cd9f) tabs_2_active_pane_srt_g1

0xb1d3,	// (0x0003cda7) tabs_2_active_pane_srt_t1_ParamLimits

0xb1d3,	// (0x0003cda7) tabs_2_active_pane_srt_t1

0xb1b9,	// (0x0003cd8d) bg_active_tab_pane_g1_cp1_srt

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp1_srt

0xb1c2,	// (0x0003cd96) bg_active_tab_pane_g3_cp1_srt

0x84f2,	// (0x0003a0c6) tabs_3_active_pane_srt_ParamLimits

0x84f2,	// (0x0003a0c6) tabs_3_active_pane_srt

0x8503,	// (0x0003a0d7) tabs_3_passive_pane_cp_srt_ParamLimits

0x8503,	// (0x0003a0d7) tabs_3_passive_pane_cp_srt

0x8514,	// (0x0003a0e8) tabs_3_passive_pane_srt_ParamLimits

0x8514,	// (0x0003a0e8) tabs_3_passive_pane_srt

0x2532,	// (0x00034106) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2532,	// (0x00034106) bg_passive_tab_pane_cp2_srt

0x74ed,	// (0x000390c1) bg_passive_tab_pane_g1_cp2_srt

0x7138,	// (0x00038d0c) bg_passive_tab_pane_g2_cp2_srt

0x74f6,	// (0x000390ca) bg_passive_tab_pane_g3_cp2_srt

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp2_srt_ParamLimits

0x203a,	// (0x00033c0e) bg_active_tab_pane_cp2_srt

0xb19f,	// (0x0003cd73) tabs_3_active_pane_srt_g1

0xb1a7,	// (0x0003cd7b) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a7,	// (0x0003cd7b) tabs_3_active_pane_srt_t1

0x74ed,	// (0x000390c1) bg_active_tab_pane_g1_cp2_srt

0x7138,	// (0x00038d0c) bg_active_tab_pane_g2_cp2_srt

0x74f6,	// (0x000390ca) bg_active_tab_pane_g3_cp2_srt

0x84aa,	// (0x0003a07e) tabs_4_active_pane_srt_ParamLimits

0x84aa,	// (0x0003a07e) tabs_4_active_pane_srt

0x84bc,	// (0x0003a090) tabs_4_passive_pane_cp2_srt_ParamLimits

0x84bc,	// (0x0003a090) tabs_4_passive_pane_cp2_srt

0x772f,	// (0x00039303) aid_size_cell_toolbar

0x6c21,	// (0x000387f5) main_idle_act_pane_ParamLimits

0x78e0,	// (0x000394b4) popup_large_graphic_colour_window_ParamLimits

0x7c4b,	// (0x0003981f) popup_toolbar_window_ParamLimits

0x7c4b,	// (0x0003981f) popup_toolbar_window

0xaf9f,	// (0x0003cb73) list_single_graphic_2heading_pane_ParamLimits

0xaf9f,	// (0x0003cb73) list_single_graphic_2heading_pane

0x26bf,	// (0x00034293) aid_size_cell_apps_grid_lsc_pane

0x26d1,	// (0x000342a5) aid_size_cell_apps_grid_prt_pane

0x2532,	// (0x00034106) bg_wml_button_pane_cp1_ParamLimits

0x2532,	// (0x00034106) bg_wml_button_pane_cp1

0x9cd2,	// (0x0003b8a6) form_midp_field_text_pane_t1_ParamLimits

0x9a9c,	// (0x0003b670) input_focus_pane_cp050_ParamLimits

0x9d0c,	// (0x0003b8e0) list_midp_form_text_pane_ParamLimits

0x9caf,	// (0x0003b883) input_focus_pane_cp051_ParamLimits

0x9cc3,	// (0x0003b897) list_midp_choice_pane_ParamLimits

0x9b52,	// (0x0003b726) list_single_2graphic_pane_cp3_ParamLimits

0x9b52,	// (0x0003b726) list_single_2graphic_pane_cp3

0x9b77,	// (0x0003b74b) list_single_midp_graphic_pane_ParamLimits

0x9b77,	// (0x0003b74b) list_single_midp_graphic_pane

0x5c7d,	// (0x00037851) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c7d,	// (0x00037851) list_single_graphic_2heading_pane_g1

0x5c89,	// (0x0003785d) list_single_graphic_2heading_pane_g4_ParamLimits

0x5c89,	// (0x0003785d) list_single_graphic_2heading_pane_g4

0x5c95,	// (0x00037869) list_single_graphic_2heading_pane_g5_ParamLimits

0x5c95,	// (0x00037869) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00041350) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00041350) list_single_graphic_2heading_pane_g

0x5ca1,	// (0x00037875) list_single_graphic_2heading_pane_t1_ParamLimits

0x5ca1,	// (0x00037875) list_single_graphic_2heading_pane_t1

0x5cb5,	// (0x00037889) list_single_graphic_2heading_pane_t2_ParamLimits

0x5cb5,	// (0x00037889) list_single_graphic_2heading_pane_t2

0x5ccf,	// (0x000378a3) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ccf,	// (0x000378a3) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00041357) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00041357) list_single_graphic_2heading_pane_t

0x994e,	// (0x0003b522) bg_popup_sub_pane_cp2

0x9978,	// (0x0003b54c) grid_toobar_pane

0x8026,	// (0x00039bfa) cell_toolbar_pane_ParamLimits

0x8026,	// (0x00039bfa) cell_toolbar_pane

0x99b4,	// (0x0003b588) cell_toolbar_pane_g1_ParamLimits

0x99b4,	// (0x0003b588) cell_toolbar_pane_g1

0x99c8,	// (0x0003b59c) cell_toolbar_pane_g2_ParamLimits

0x99c8,	// (0x0003b59c) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00041365) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00041365) cell_toolbar_pane_g

0x99ea,	// (0x0003b5be) grid_highlight_pane_cp2_ParamLimits

0x99ea,	// (0x0003b5be) grid_highlight_pane_cp2

0x9a04,	// (0x0003b5d8) toolbar_button_pane

0x9a10,	// (0x0003b5e4) toolbar_button_pane_g1

0x9a18,	// (0x0003b5ec) toolbar_button_pane_g2

0x9a20,	// (0x0003b5f4) toolbar_button_pane_g3

0x9a28,	// (0x0003b5fc) toolbar_button_pane_g4

0x9a30,	// (0x0003b604) toolbar_button_pane_g5

0x9a38,	// (0x0003b60c) toolbar_button_pane_g6

0x9a40,	// (0x0003b614) toolbar_button_pane_g7

0x9a48,	// (0x0003b61c) toolbar_button_pane_g8

0x9a50,	// (0x0003b624) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0004136a) toolbar_button_pane_g

0x805e,	// (0x00039c32) list_single_2graphic_pane_g1_cp3_ParamLimits

0x805e,	// (0x00039c32) list_single_2graphic_pane_g1_cp3

0x806a,	// (0x00039c3e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x806a,	// (0x00039c3e) list_single_2graphic_pane_g2_cp3

0x807b,	// (0x00039c4f) list_single_2graphic_pane_g3_cp3

0x8083,	// (0x00039c57) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8083,	// (0x00039c57) list_single_2graphic_pane_g4_cp3

0x808f,	// (0x00039c63) list_single_2graphic_pane_t1_cp3_ParamLimits

0x808f,	// (0x00039c63) list_single_2graphic_pane_t1_cp3

0x80ab,	// (0x00039c7f) list_single_midp_graphic_pane_g2_ParamLimits

0x80ab,	// (0x00039c7f) list_single_midp_graphic_pane_g2

0x7737,	// (0x0003930b) aid_zoom_text_primary

0x5c61,	// (0x00037835) aid_zoom_text_secondary

0x754d,	// (0x00039121) status_small_pane_g7_ParamLimits

0x754d,	// (0x00039121) status_small_pane_g7

0x7570,	// (0x00039144) status_small_pane_t1_ParamLimits

0x60fb,	// (0x00037ccf) title_pane_g2

0x0003,

0xf529,	// (0x000410fd) title_pane_g

0x6449,	// (0x0003801d) aid_size_cell_colour_1_pane_ParamLimits

0x6449,	// (0x0003801d) aid_size_cell_colour_1_pane

0x645d,	// (0x00038031) aid_size_cell_colour_2_pane_ParamLimits

0x645d,	// (0x00038031) aid_size_cell_colour_2_pane

0x6471,	// (0x00038045) aid_size_cell_colour_3_pane_ParamLimits

0x6471,	// (0x00038045) aid_size_cell_colour_3_pane

0x6485,	// (0x00038059) aid_size_cell_colour_4_pane_ParamLimits

0x6485,	// (0x00038059) aid_size_cell_colour_4_pane

0x6c94,	// (0x00038868) title_pane_stacon_g1_ParamLimits

0x6c94,	// (0x00038868) title_pane_stacon_g1

0xa0dc,	// (0x0003bcb0) popup_note_wait_window_g3_ParamLimits

0xa0dc,	// (0x0003bcb0) popup_note_wait_window_g3

0xa152,	// (0x0003bd26) popup_note_wait_window_t5_ParamLimits

0xa152,	// (0x0003bd26) popup_note_wait_window_t5

0x1fde,	// (0x00033bb2) main_feb_china_hwr_fs_writing_pane

0x77c7,	// (0x0003939b) popup_feb_china_hwr_fs_window_ParamLimits

0x77c7,	// (0x0003939b) popup_feb_china_hwr_fs_window

0x80cd,	// (0x00039ca1) aid_size_cell_hwr_fs_ParamLimits

0x80cd,	// (0x00039ca1) aid_size_cell_hwr_fs

0x9a9c,	// (0x0003b670) bg_popup_sub_pane_cp3_ParamLimits

0x9a9c,	// (0x0003b670) bg_popup_sub_pane_cp3

0x80e2,	// (0x00039cb6) grid_hwr_fs_pane_ParamLimits

0x80e2,	// (0x00039cb6) grid_hwr_fs_pane

0x80fa,	// (0x00039cce) linegrid_hwr_fs_pane_ParamLimits

0x80fa,	// (0x00039cce) linegrid_hwr_fs_pane

0x810a,	// (0x00039cde) cell_hwr_fs_pane_ParamLimits

0x810a,	// (0x00039cde) cell_hwr_fs_pane

0x9aa8,	// (0x0003b67c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aa8,	// (0x0003b67c) linegrid_hwr_fs_pane_g1

0x9ab4,	// (0x0003b688) linegrid_hwr_fs_pane_g2_ParamLimits

0x9ab4,	// (0x0003b688) linegrid_hwr_fs_pane_g2

0x9ac6,	// (0x0003b69a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9ac6,	// (0x0003b69a) linegrid_hwr_fs_pane_g3

0x812c,	// (0x00039d00) linegrid_hwr_fs_pane_g4_ParamLimits

0x812c,	// (0x00039d00) linegrid_hwr_fs_pane_g4

0x8146,	// (0x00039d1a) linegrid_hwr_fs_pane_g5_ParamLimits

0x8146,	// (0x00039d1a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00041390) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00041390) linegrid_hwr_fs_pane_g

0x9ad2,	// (0x0003b6a6) cell_hwr_fs_pane_g1_ParamLimits

0x9ad2,	// (0x0003b6a6) cell_hwr_fs_pane_g1

0x9888,	// (0x0003b45c) cell_hwr_fs_pane_g2_ParamLimits

0x9888,	// (0x0003b45c) cell_hwr_fs_pane_g2

0x9ae8,	// (0x0003b6bc) cell_hwr_fs_pane_g3_ParamLimits

0x9ae8,	// (0x0003b6bc) cell_hwr_fs_pane_g3

0x9af5,	// (0x0003b6c9) cell_hwr_fs_pane_g4_ParamLimits

0x9af5,	// (0x0003b6c9) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0004139b) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0004139b) cell_hwr_fs_pane_g

0x815c,	// (0x00039d30) cell_hwr_fs_pane_t1

0x1fde,	// (0x00033bb2) grid_highlight_pane_cp6

0x1fde,	// (0x00033bb2) main_idle_act2_pane

0x2509,	// (0x000340dd) aid_inside_area_popup_secondary

0xa771,	// (0x0003c345) aid_inside_area_window_primary_ParamLimits

0xa771,	// (0x0003c345) aid_inside_area_window_primary

0xb306,	// (0x0003ceda) ai2_news_ticker_pane

0xb30e,	// (0x0003cee2) aid_size_cell_ai1_link_ParamLimits

0xb30e,	// (0x0003cee2) aid_size_cell_ai1_link

0xb328,	// (0x0003cefc) popup_ai2_data_window_ParamLimits

0xb328,	// (0x0003cefc) popup_ai2_data_window

0xb33e,	// (0x0003cf12) popup_ai2_link_window_ParamLimits

0xb33e,	// (0x0003cf12) popup_ai2_link_window

0x9a9c,	// (0x0003b670) bg_popup_sub_pane_cp4_ParamLimits

0x9a9c,	// (0x0003b670) bg_popup_sub_pane_cp4

0xb352,	// (0x0003cf26) grid_ai2_link_pane_ParamLimits

0xb352,	// (0x0003cf26) grid_ai2_link_pane

0xb369,	// (0x0003cf3d) popup_ai2_link_window_g1_ParamLimits

0xb369,	// (0x0003cf3d) popup_ai2_link_window_g1

0xb375,	// (0x0003cf49) popup_ai2_link_window_g2_ParamLimits

0xb375,	// (0x0003cf49) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x0004156e) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x0004156e) popup_ai2_link_window_g

0xb384,	// (0x0003cf58) ai2_mp_button_pane

0xb38c,	// (0x0003cf60) ai2_mp_volume_pane

0x9caf,	// (0x0003b883) bg_popup_sub_pane_cp5_ParamLimits

0x9caf,	// (0x0003b883) bg_popup_sub_pane_cp5

0xb394,	// (0x0003cf68) heading_ai2_gene_pane_ParamLimits

0xb394,	// (0x0003cf68) heading_ai2_gene_pane

0xb3a0,	// (0x0003cf74) list_ai2_gene_pane_ParamLimits

0xb3a0,	// (0x0003cf74) list_ai2_gene_pane

0xb3e8,	// (0x0003cfbc) cell_ai2_link_pane_ParamLimits

0xb3e8,	// (0x0003cfbc) cell_ai2_link_pane

0xb3fe,	// (0x0003cfd2) cell_ai2_link_pane_g1

0x1fde,	// (0x00033bb2) grid_highlight_pane_cp7

0x8562,	// (0x0003a136) ai2_mp_volume_pane_g1

0xb4ce,	// (0x0003d0a2) ai2_mp_volume_pane_g2

0xb443,	// (0x0003d017) list_ai2_gene_pane_t1

0xb4d6,	// (0x0003d0aa) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x00041587) ai2_mp_volume_pane_g

0x856a,	// (0x0003a13e) volume_small_pane_cp3

0xb4de,	// (0x0003d0b2) aid_size_cell_ai2_button

0xb4e6,	// (0x0003d0ba) grid_ai2_button_pane

0xb4ef,	// (0x0003d0c3) cell_ai2_button_pane_ParamLimits

0xb4ef,	// (0x0003d0c3) cell_ai2_button_pane

0x1fd4,	// (0x00033ba8) cell_ai2_button_pane_g1

0x1fde,	// (0x00033bb2) grid_highlight_pane_cp8

0xb48e,	// (0x0003d062) ai2_gene_pane_t1_ParamLimits

0xb48e,	// (0x0003d062) ai2_gene_pane_t1

0x7725,	// (0x000392f9) aid_height_parent_landscape

0xadda,	// (0x0003c9ae) aid_height_set_list

0xadeb,	// (0x0003c9bf) aid_size_parent

0xb129,	// (0x0003ccfd) aid_size_cell_graphic_pane_ParamLimits

0xb3b0,	// (0x0003cf84) popup_ai2_data_window_g1_ParamLimits

0xb3b0,	// (0x0003cf84) popup_ai2_data_window_g1

0xb3bc,	// (0x0003cf90) ai2_news_ticker_pane_g1

0xb3c4,	// (0x0003cf98) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00041573) ai2_news_ticker_pane_g

0xb3cc,	// (0x0003cfa0) ai2_news_ticker_pane_t1

0xb3da,	// (0x0003cfae) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x00041578) ai2_news_ticker_pane_t

0xb407,	// (0x0003cfdb) heading_ai2_gene_pane_g1

0xb40f,	// (0x0003cfe3) heading_ai2_gene_pane_t1_ParamLimits

0xb40f,	// (0x0003cfe3) heading_ai2_gene_pane_t1

0xb424,	// (0x0003cff8) list_highlight_pane_cp6

0xb42c,	// (0x0003d000) ai2_gene_pane_ParamLimits

0xb42c,	// (0x0003d000) ai2_gene_pane

0xb451,	// (0x0003d025) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x0004157d) list_ai2_gene_pane_t

0xb45f,	// (0x0003d033) list_highlight_pane_cp8_ParamLimits

0xb45f,	// (0x0003d033) list_highlight_pane_cp8

0xb470,	// (0x0003d044) ai2_gene_pane_g1_ParamLimits

0xb470,	// (0x0003d044) ai2_gene_pane_g1

0xb482,	// (0x0003d056) ai2_gene_pane_g2_ParamLimits

0xb482,	// (0x0003d056) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00041582) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00041582) ai2_gene_pane_g

0x238f,	// (0x00033f63) scroll_pane_cp12

0x76e2,	// (0x000392b6) control_pane_t3_ParamLimits

0x76e2,	// (0x000392b6) control_pane_t3

0x7561,	// (0x00039135) status_small_pane_g8_ParamLimits

0x7561,	// (0x00039135) status_small_pane_g8

0x78a9,	// (0x0003947d) popup_find_window_ParamLimits

0x7ac2,	// (0x00039696) popup_note_image_window_ParamLimits

0x4553,	// (0x00036127) list_double2_graphic_pane_vc_g1_ParamLimits

0x4553,	// (0x00036127) list_double2_graphic_pane_vc_g1

0x47d4,	// (0x000363a8) list_double2_graphic_pane_vc_g2_ParamLimits

0x47d4,	// (0x000363a8) list_double2_graphic_pane_vc_g2

0x47e0,	// (0x000363b4) list_double2_graphic_pane_vc_g3_ParamLimits

0x47e0,	// (0x000363b4) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0004135e) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0004135e) list_double2_graphic_pane_vc_g

0x4577,	// (0x0003614b) list_double2_graphic_pane_vc_t1_ParamLimits

0x4577,	// (0x0003614b) list_double2_graphic_pane_vc_t1

0x455f,	// (0x00036133) list_single_heading_pane_vc_g1_ParamLimits

0x455f,	// (0x00036133) list_single_heading_pane_vc_g1

0x456b,	// (0x0003613f) list_single_heading_pane_vc_g2_ParamLimits

0x456b,	// (0x0003613f) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041177) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041177) list_single_heading_pane_vc_g

0x47ec,	// (0x000363c0) list_single_heading_pane_vc_t1_ParamLimits

0x47ec,	// (0x000363c0) list_single_heading_pane_vc_t1

0x4802,	// (0x000363d6) list_single_heading_pane_vc_t2_ParamLimits

0x4802,	// (0x000363d6) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x0004137f) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x0004137f) list_single_heading_pane_vc_t

0x9a58,	// (0x0003b62c) list_setting_number_pane_vc_g1_ParamLimits

0x9a58,	// (0x0003b62c) list_setting_number_pane_vc_g1

0x9a64,	// (0x0003b638) list_setting_number_pane_vc_g2_ParamLimits

0x9a64,	// (0x0003b638) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00041384) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00041384) list_setting_number_pane_vc_g

0x4814,	// (0x000363e8) list_setting_number_pane_vc_t1_ParamLimits

0x4814,	// (0x000363e8) list_setting_number_pane_vc_t1

0x4828,	// (0x000363fc) list_setting_number_pane_vc_t2_ParamLimits

0x4828,	// (0x000363fc) list_setting_number_pane_vc_t2

0x4844,	// (0x00036418) list_setting_number_pane_vc_t3_ParamLimits

0x4844,	// (0x00036418) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00041389) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00041389) list_setting_number_pane_vc_t

0x486e,	// (0x00036442) set_value_pane_vc_ParamLimits

0x486e,	// (0x00036442) set_value_pane_vc

0xaf9f,	// (0x0003cb73) list_double2_graphic_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double2_graphic_pane_vc

0xaf9f,	// (0x0003cb73) list_double2_large_graphic_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double2_large_graphic_pane_vc

0xaf9f,	// (0x0003cb73) list_double2_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double2_pane_vc

0xaf9f,	// (0x0003cb73) list_double_graphic_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double_graphic_heading_pane_vc

0xaf9f,	// (0x0003cb73) list_double_graphic_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double_graphic_pane_vc

0xaf9f,	// (0x0003cb73) list_double_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double_heading_pane_vc

0x488d,	// (0x00036461) list_double_large_graphic_pane_vc_ParamLimits

0x488d,	// (0x00036461) list_double_large_graphic_pane_vc

0xaf9f,	// (0x0003cb73) list_double_number_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double_number_pane_vc

0xaf9f,	// (0x0003cb73) list_double_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double_pane_vc

0xaf9f,	// (0x0003cb73) list_double_time_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_double_time_pane_vc

0xaf9f,	// (0x0003cb73) list_setting_number_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_setting_number_pane_vc

0xaf9f,	// (0x0003cb73) list_setting_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_setting_pane_vc

0xaf9f,	// (0x0003cb73) list_single_graphic_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_single_graphic_heading_pane_vc

0xaf9f,	// (0x0003cb73) list_single_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0003cb73) list_single_heading_pane_vc

0x8442,	// (0x0003a016) list_single_number_heading_pane_vc_ParamLimits

0x8442,	// (0x0003a016) list_single_number_heading_pane_vc

0x45d9,	// (0x000361ad) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x45d9,	// (0x000361ad) list_double_graphic_heading_pane_vc_g1

0x47d4,	// (0x000363a8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x47d4,	// (0x000363a8) list_double_graphic_heading_pane_vc_g2

0x47e0,	// (0x000363b4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x47e0,	// (0x000363b4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x0004158e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x0004158e) list_double_graphic_heading_pane_vc_g

0x48ac,	// (0x00036480) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48ac,	// (0x00036480) list_double_graphic_heading_pane_vc_t1

0x48c0,	// (0x00036494) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x48c0,	// (0x00036494) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00041595) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00041595) list_double_graphic_heading_pane_vc_t

0x9a58,	// (0x0003b62c) list_setting_pane_vc_g1_ParamLimits

0x9a58,	// (0x0003b62c) list_setting_pane_vc_g1

0x9a64,	// (0x0003b638) list_setting_pane_vc_g2_ParamLimits

0x9a64,	// (0x0003b638) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00041384) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00041384) list_setting_pane_vc_g

0x48d8,	// (0x000364ac) list_setting_pane_vc_t1_ParamLimits

0x48d8,	// (0x000364ac) list_setting_pane_vc_t1

0x48f4,	// (0x000364c8) list_setting_pane_vc_t2_ParamLimits

0x48f4,	// (0x000364c8) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x000415d8) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x000415d8) list_setting_pane_vc_t

0x486e,	// (0x00036442) set_value_pane_cp_vc_ParamLimits

0x486e,	// (0x00036442) set_value_pane_cp_vc

0x455f,	// (0x00036133) list_single_number_heading_pane_vc_g1_ParamLimits

0x455f,	// (0x00036133) list_single_number_heading_pane_vc_g1

0x456b,	// (0x0003613f) list_single_number_heading_pane_vc_g2_ParamLimits

0x456b,	// (0x0003613f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041177) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041177) list_single_number_heading_pane_vc_g

0x490e,	// (0x000364e2) list_single_number_heading_pane_vc_t1_ParamLimits

0x490e,	// (0x000364e2) list_single_number_heading_pane_vc_t1

0x4924,	// (0x000364f8) list_single_number_heading_pane_vc_t2_ParamLimits

0x4924,	// (0x000364f8) list_single_number_heading_pane_vc_t2

0x4936,	// (0x0003650a) list_single_number_heading_pane_vc_t3_ParamLimits

0x4936,	// (0x0003650a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x000415dd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x000415dd) list_single_number_heading_pane_vc_t

0x4948,	// (0x0003651c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4948,	// (0x0003651c) list_single_graphic_heading_pane_vc_g1

0x455f,	// (0x00036133) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x455f,	// (0x00036133) list_single_graphic_heading_pane_vc_g4

0x456b,	// (0x0003613f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x456b,	// (0x0003613f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x000415e4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x000415e4) list_single_graphic_heading_pane_vc_g

0x4954,	// (0x00036528) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4954,	// (0x00036528) list_single_graphic_heading_pane_vc_t1

0x496a,	// (0x0003653e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x496a,	// (0x0003653e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x000415eb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x000415eb) list_single_graphic_heading_pane_vc_t

0x455f,	// (0x00036133) list_double2_pane_vc_g1_ParamLimits

0x455f,	// (0x00036133) list_double2_pane_vc_g1

0x456b,	// (0x0003613f) list_double2_pane_vc_g2_ParamLimits

0x456b,	// (0x0003613f) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041177) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041177) list_double2_pane_vc_g

0x497c,	// (0x00036550) list_double2_pane_vc_t1_ParamLimits

0x497c,	// (0x00036550) list_double2_pane_vc_t1

0x45e5,	// (0x000361b9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x45e5,	// (0x000361b9) list_double2_large_graphic_pane_vc_g1

0x455f,	// (0x00036133) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x455f,	// (0x00036133) list_double2_large_graphic_pane_vc_g2

0x456b,	// (0x0003613f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x456b,	// (0x0003613f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x000415f0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x000415f0) list_double2_large_graphic_pane_vc_g

0x4577,	// (0x0003614b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4577,	// (0x0003614b) list_double2_large_graphic_pane_vc_t1

0x4994,	// (0x00036568) list_double_time_pane_vc_g1_ParamLimits

0x4994,	// (0x00036568) list_double_time_pane_vc_g1

0x49a0,	// (0x00036574) list_double_time_pane_vc_g2_ParamLimits

0x49a0,	// (0x00036574) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x000415f7) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x000415f7) list_double_time_pane_vc_g

0x49ac,	// (0x00036580) list_double_time_pane_vc_t1_ParamLimits

0x49ac,	// (0x00036580) list_double_time_pane_vc_t1

0x49d0,	// (0x000365a4) list_double_time_pane_vc_t2_ParamLimits

0x49d0,	// (0x000365a4) list_double_time_pane_vc_t2

0x4a1f,	// (0x000365f3) list_double_time_pane_vc_t3_ParamLimits

0x4a1f,	// (0x000365f3) list_double_time_pane_vc_t3

0x4a31,	// (0x00036605) list_double_time_pane_vc_t4_ParamLimits

0x4a31,	// (0x00036605) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x000415fc) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x000415fc) list_double_time_pane_vc_t

0x455f,	// (0x00036133) list_double_pane_vc_g1_ParamLimits

0x455f,	// (0x00036133) list_double_pane_vc_g1

0x456b,	// (0x0003613f) list_double_pane_vc_g2_ParamLimits

0x456b,	// (0x0003613f) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041177) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041177) list_double_pane_vc_g

0x4a45,	// (0x00036619) list_double_pane_vc_t1_ParamLimits

0x4a45,	// (0x00036619) list_double_pane_vc_t1

0x4a59,	// (0x0003662d) list_double_pane_vc_t2_ParamLimits

0x4a59,	// (0x0003662d) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x00041605) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x00041605) list_double_pane_vc_t

0x455f,	// (0x00036133) list_double_number_pane_vc_g1_ParamLimits

0x455f,	// (0x00036133) list_double_number_pane_vc_g1

0x456b,	// (0x0003613f) list_double_number_pane_vc_g2_ParamLimits

0x456b,	// (0x0003613f) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041177) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041177) list_double_number_pane_vc_g

0x4a71,	// (0x00036645) list_double_number_pane_vc_t1_ParamLimits

0x4a71,	// (0x00036645) list_double_number_pane_vc_t1

0x4a45,	// (0x00036619) list_double_number_pane_vc_t2_ParamLimits

0x4a45,	// (0x00036619) list_double_number_pane_vc_t2

0x4a83,	// (0x00036657) list_double_number_pane_vc_t3_ParamLimits

0x4a83,	// (0x00036657) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x0004160a) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x0004160a) list_double_number_pane_vc_t

0x4a9b,	// (0x0003666f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4a9b,	// (0x0003666f) list_double_large_graphic_pane_vc_g1

0x4ab7,	// (0x0003668b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4ab7,	// (0x0003668b) list_double_large_graphic_pane_vc_g2

0x4acb,	// (0x0003669f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4acb,	// (0x0003669f) list_double_large_graphic_pane_vc_g3

0x4ada,	// (0x000366ae) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4ada,	// (0x000366ae) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x00041611) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00041611) list_double_large_graphic_pane_vc_g

0x4ae6,	// (0x000366ba) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4ae6,	// (0x000366ba) list_double_large_graphic_pane_vc_t1

0x4b02,	// (0x000366d6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4b02,	// (0x000366d6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0004161a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0004161a) list_double_large_graphic_pane_vc_t

0x47d4,	// (0x000363a8) list_double_heading_pane_vc_g1_ParamLimits

0x47d4,	// (0x000363a8) list_double_heading_pane_vc_g1

0x47e0,	// (0x000363b4) list_double_heading_pane_vc_g2_ParamLimits

0x47e0,	// (0x000363b4) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x0004161f) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x0004161f) list_double_heading_pane_vc_g

0x4b24,	// (0x000366f8) list_double_heading_pane_vc_t1_ParamLimits

0x4b24,	// (0x000366f8) list_double_heading_pane_vc_t1

0x4b38,	// (0x0003670c) list_double_heading_pane_vc_t2_ParamLimits

0x4b38,	// (0x0003670c) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00041624) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00041624) list_double_heading_pane_vc_t

0x4b50,	// (0x00036724) list_double_graphic_pane_vc_g1_ParamLimits

0x4b50,	// (0x00036724) list_double_graphic_pane_vc_g1

0x4b63,	// (0x00036737) list_double_graphic_pane_vc_g2_ParamLimits

0x4b63,	// (0x00036737) list_double_graphic_pane_vc_g2

0x455f,	// (0x00036133) list_double_graphic_pane_vc_g3_ParamLimits

0x455f,	// (0x00036133) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x00041629) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x00041629) list_double_graphic_pane_vc_g

0x4b80,	// (0x00036754) list_double_graphic_pane_vc_t1_ParamLimits

0x4b80,	// (0x00036754) list_double_graphic_pane_vc_t1

0x4b9f,	// (0x00036773) list_double_graphic_pane_vc_t2_ParamLimits

0x4b9f,	// (0x00036773) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00041632) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00041632) list_double_graphic_pane_vc_t

0x5d1b,	// (0x000378ef) aid_size_cell_fastswap

0x5d23,	// (0x000378f7) aid_size_cell_touch_ParamLimits

0x5d23,	// (0x000378f7) aid_size_cell_touch

0x5f88,	// (0x00037b5c) popup_fast_swap_wide_window_ParamLimits

0x5f88,	// (0x00037b5c) popup_fast_swap_wide_window

0x608e,	// (0x00037c62) touch_pane_ParamLimits

0x608e,	// (0x00037c62) touch_pane

0x23dc,	// (0x00033fb0) button_value_adjust_pane_cp2

0x471b,	// (0x000362ef) button_value_adjust_pane_cp4

0x4723,	// (0x000362f7) form_field_data_pane_cp2

0x6974,	// (0x00038548) form_field_data_wide_pane_cp2

0x26f6,	// (0x000342ca) bg_scroll_pane_ParamLimits

0x6e8e,	// (0x00038a62) scroll_handle_pane_ParamLimits

0x6ea2,	// (0x00038a76) scroll_sc2_down_pane_ParamLimits

0x6ea2,	// (0x00038a76) scroll_sc2_down_pane

0x2727,	// (0x000342fb) scroll_sc2_up_pane_ParamLimits

0x2727,	// (0x000342fb) scroll_sc2_up_pane

0xbbd0,	// (0x0003d7a4) grid_wheel_folder_pane_g1_ParamLimits

0xbbd0,	// (0x0003d7a4) grid_wheel_folder_pane_g1

0x725d,	// (0x00038e31) clock_nsta_pane_cp2_ParamLimits

0x725d,	// (0x00038e31) clock_nsta_pane_cp2

0x7370,	// (0x00038f44) listscroll_midp_pane_ParamLimits

0x737c,	// (0x00038f50) midp_canvas_pane

0x2df0,	// (0x000349c4) nsta_clock_indic_pane

0x2e18,	// (0x000349ec) listscroll_form_pane_vc

0x2e20,	// (0x000349f4) listscroll_set_pane_vc_ParamLimits

0x2e20,	// (0x000349f4) listscroll_set_pane_vc

0x7dd1,	// (0x000399a5) clock_nsta_pane

0x7e4c,	// (0x00039a20) indicator_nsta_pane

0x994e,	// (0x0003b522) bg_popup_sub_pane_cp2_ParamLimits

0x9962,	// (0x0003b536) find_pane_cp2_ParamLimits

0x9962,	// (0x0003b536) find_pane_cp2

0x9978,	// (0x0003b54c) grid_toobar_pane_ParamLimits

0x9a70,	// (0x0003b644) list_form_gen_pane_vc_ParamLimits

0x9a70,	// (0x0003b644) list_form_gen_pane_vc

0x9a86,	// (0x0003b65a) scroll_pane_cp8_vc_ParamLimits

0x9a86,	// (0x0003b65a) scroll_pane_cp8_vc

0x9b02,	// (0x0003b6d6) data_form_wide_pane_vc_ParamLimits

0x9b02,	// (0x0003b6d6) data_form_wide_pane_vc

0x9b0e,	// (0x0003b6e2) form_field_data_wide_pane_vc_g1

0x9b16,	// (0x0003b6ea) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b16,	// (0x0003b6ea) form_field_data_wide_pane_vc_t1

0x23f0,	// (0x00033fc4) input_focus_pane_cp6_vc_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_cp6_vc

0x9e43,	// (0x0003ba17) list_midp_pane_ParamLimits

0x9e4f,	// (0x0003ba23) scroll_pane_cp16_ParamLimits

0x9e4f,	// (0x0003ba23) scroll_pane_cp16

0x9eb9,	// (0x0003ba8d) button_value_adjust_pane_ParamLimits

0x9eb9,	// (0x0003ba8d) button_value_adjust_pane

0xadfd,	// (0x0003c9d1) button_value_adjust_pane_cp6_ParamLimits

0xadfd,	// (0x0003c9d1) button_value_adjust_pane_cp6

0xaf23,	// (0x0003caf7) settings_code_pane_cp_ParamLimits

0xaf23,	// (0x0003caf7) settings_code_pane_cp

0x1fd4,	// (0x00033ba8) cell_touch_pane_g1

0x1fd4,	// (0x00033ba8) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x000412a3) cell_touch_pane_g

0xb501,	// (0x0003d0d5) cell_touch_pane_cp_ParamLimits

0xb501,	// (0x0003d0d5) cell_touch_pane_cp

0xb511,	// (0x0003d0e5) cell_touch_pane_ParamLimits

0xb511,	// (0x0003d0e5) cell_touch_pane

0x1fd4,	// (0x00033ba8) scroll_sc2_down_pane_g1

0x1fd4,	// (0x00033ba8) scroll_sc2_up_pane_g1

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp4_vc

0xb523,	// (0x0003d0f7) list_set_graphic_pane_vc_g1_ParamLimits

0xb523,	// (0x0003d0f7) list_set_graphic_pane_vc_g1

0xb52f,	// (0x0003d103) list_set_graphic_pane_vc_g2_ParamLimits

0xb52f,	// (0x0003d103) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0004159a) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0004159a) list_set_graphic_pane_vc_g

0xb53b,	// (0x0003d10f) text_primary_small_cp13_vc_ParamLimits

0xb53b,	// (0x0003d10f) text_primary_small_cp13_vc

0xb553,	// (0x0003d127) list_set_graphic_pane_vc_ParamLimits

0xb553,	// (0x0003d127) list_set_graphic_pane_vc

0x1fde,	// (0x00033bb2) input_focus_pane_cp2_vc

0x1fd4,	// (0x00033ba8) setting_code_pane_vc_g1

0x2051,	// (0x00033c25) setting_code_pane_vc_t1

0xb566,	// (0x0003d13a) set_text_pane_vc_t1_ParamLimits

0xb566,	// (0x0003d13a) set_text_pane_vc_t1

0x1fde,	// (0x00033bb2) input_focus_pane_cp1_vc

0xb583,	// (0x0003d157) list_set_text_pane_vc

0x1fd4,	// (0x00033ba8) setting_text_pane_vc_g1

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp2_vc

0x2048,	// (0x00033c1c) setting_slider_graphic_pane_vc_g1

0xb58d,	// (0x0003d161) setting_slider_graphic_pane_vc_t1

0xb59d,	// (0x0003d171) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x0004159f) setting_slider_graphic_pane_vc_t

0xb5ad,	// (0x0003d181) slider_set_pane_cp_vc

0xb5b5,	// (0x0003d189) slider_set_pane_vc_g1

0xb5be,	// (0x0003d192) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x000415a4) slider_set_pane_vc_g

0x2448,	// (0x0003401c) set_opt_bg_pane_g1_copy1

0x2450,	// (0x00034024) set_opt_bg_pane_g2_copy1

0xb5ea,	// (0x0003d1be) set_opt_bg_pane_g3_copy1

0x2460,	// (0x00034034) set_opt_bg_pane_g4_copy1

0x2468,	// (0x0003403c) set_opt_bg_pane_g5_copy1

0x2470,	// (0x00034044) set_opt_bg_pane_g6_copy1

0xb5f2,	// (0x0003d1c6) set_opt_bg_pane_g7_copy1

0xb5fc,	// (0x0003d1d0) set_opt_bg_pane_g8_copy1

0xb604,	// (0x0003d1d8) set_opt_bg_pane_g9_copy1

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp_vc

0xb60c,	// (0x0003d1e0) setting_slider_pane_vc_t1

0xb61b,	// (0x0003d1ef) setting_slider_pane_vc_t2

0xb62b,	// (0x0003d1ff) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x000415b3) setting_slider_pane_vc_t

0xb63b,	// (0x0003d20f) slider_set_pane_vc

0x819d,	// (0x00039d71) volume_set_pane_vc_g1

0x8573,	// (0x0003a147) volume_set_pane_vc_g2

0x857c,	// (0x0003a150) volume_set_pane_vc_g3

0x8585,	// (0x0003a159) volume_set_pane_vc_g4

0x858e,	// (0x0003a162) volume_set_pane_vc_g5

0x8597,	// (0x0003a16b) volume_set_pane_vc_g6

0x85a0,	// (0x0003a174) volume_set_pane_vc_g7

0x85a9,	// (0x0003a17d) volume_set_pane_vc_g8

0x85b2,	// (0x0003a186) volume_set_pane_vc_g9

0x85bb,	// (0x0003a18f) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x000415ba) volume_set_pane_vc_g

0xb643,	// (0x0003d217) volume_set_pane_vc

0xb64d,	// (0x0003d221) button_value_adjust_pane_cp1_vc

0xb657,	// (0x0003d22b) list_highlight_pane_cp2_vc

0xb660,	// (0x0003d234) list_set_pane_vc_ParamLimits

0xb660,	// (0x0003d234) list_set_pane_vc

0xb6be,	// (0x0003d292) main_pane_set_vc_t1_ParamLimits

0xb6be,	// (0x0003d292) main_pane_set_vc_t1

0xb6d3,	// (0x0003d2a7) main_pane_set_vc_t2_ParamLimits

0xb6d3,	// (0x0003d2a7) main_pane_set_vc_t2

0xb6e5,	// (0x0003d2b9) main_pane_set_vc_t3_ParamLimits

0xb6e5,	// (0x0003d2b9) main_pane_set_vc_t3

0xb6f7,	// (0x0003d2cb) main_pane_set_vc_t4_ParamLimits

0xb6f7,	// (0x0003d2cb) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x000415cf) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x000415cf) main_pane_set_vc_t

0xb709,	// (0x0003d2dd) setting_code_pane_vc_ParamLimits

0xb709,	// (0x0003d2dd) setting_code_pane_vc

0xb718,	// (0x0003d2ec) setting_slider_graphic_pane_vc

0xb718,	// (0x0003d2ec) setting_slider_pane_vc

0xb718,	// (0x0003d2ec) setting_text_pane_vc

0xb718,	// (0x0003d2ec) setting_volume_pane_vc

0xb720,	// (0x0003d2f4) scroll_pane_cp121_vc

0x23ca,	// (0x00033f9e) set_content_pane_vc

0xb728,	// (0x0003d2fc) button_value_adjust_pane_g1

0xb731,	// (0x0003d305) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x00041637) button_value_adjust_pane_g

0xb73a,	// (0x0003d30e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73a,	// (0x0003d30e) form_field_slider_wide_pane_vc_t1

0xb74e,	// (0x0003d322) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb74e,	// (0x0003d322) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0004163c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0004163c) form_field_slider_wide_pane_vc_t

0x202c,	// (0x00033c00) input_focus_pane_cp10_vc_ParamLimits

0x202c,	// (0x00033c00) input_focus_pane_cp10_vc

0xb77c,	// (0x0003d350) slider_cont_pane_cp1_vc_ParamLimits

0xb77c,	// (0x0003d350) slider_cont_pane_cp1_vc

0xb78e,	// (0x0003d362) slider_form_pane_g1_cp2

0xb5be,	// (0x0003d192) slider_form_pane_g2_cp2

0xb7bb,	// (0x0003d38f) form_field_slider_pane_vc_t3

0xb7c9,	// (0x0003d39d) form_field_slider_pane_vc_t4

0xb7d7,	// (0x0003d3ab) slider_form_pane_vc_ParamLimits

0xb7d7,	// (0x0003d3ab) slider_form_pane_vc

0xb7e4,	// (0x0003d3b8) form_field_slider_pane_vc_t1_ParamLimits

0xb7e4,	// (0x0003d3b8) form_field_slider_pane_vc_t1

0xb74e,	// (0x0003d322) form_field_slider_pane_vc_t2_ParamLimits

0xb74e,	// (0x0003d322) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0004164e) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0004164e) form_field_slider_pane_vc_t

0x202c,	// (0x00033c00) input_focus_pane_cp9_vc_ParamLimits

0x202c,	// (0x00033c00) input_focus_pane_cp9_vc

0xb800,	// (0x0003d3d4) slider_cont_pane_vc_ParamLimits

0xb800,	// (0x0003d3d4) slider_cont_pane_vc

0xb814,	// (0x0003d3e8) list_form_graphic_pane_cp_vc_ParamLimits

0xb814,	// (0x0003d3e8) list_form_graphic_pane_cp_vc

0x9b0e,	// (0x0003b6e2) form_field_popup_wide_pane_vc_g1

0xb829,	// (0x0003d3fd) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb829,	// (0x0003d3fd) form_field_popup_wide_pane_vc_t1

0x23f0,	// (0x00033fc4) input_focus_pane_cp8_vc_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_cp8_vc

0xb86e,	// (0x0003d442) list_form_wide_pane_vc_ParamLimits

0xb86e,	// (0x0003d442) list_form_wide_pane_vc

0xb87a,	// (0x0003d44e) list_form_graphic_pane_vc_g1

0xb882,	// (0x0003d456) list_form_graphic_pane_vc_t1_ParamLimits

0xb882,	// (0x0003d456) list_form_graphic_pane_vc_t1

0x203a,	// (0x00033c0e) list_highlight_pane_cp5_vc_ParamLimits

0x203a,	// (0x00033c0e) list_highlight_pane_cp5_vc

0xb89e,	// (0x0003d472) list_form_graphic_pane_vc_ParamLimits

0xb89e,	// (0x0003d472) list_form_graphic_pane_vc

0x9b0e,	// (0x0003b6e2) form_field_popup_pane_vc_g1

0xb8b4,	// (0x0003d488) form_field_popup_pane_vc_t1_ParamLimits

0xb8b4,	// (0x0003d488) form_field_popup_pane_vc_t1

0x23f0,	// (0x00033fc4) input_focus_pane_cp7_vc_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_cp7_vc

0xb8cb,	// (0x0003d49f) list_form_pane_vc_ParamLimits

0xb8cb,	// (0x0003d49f) list_form_pane_vc

0xb8d7,	// (0x0003d4ab) data_form_pane_vc_t1_ParamLimits

0xb8d7,	// (0x0003d4ab) data_form_pane_vc_t1

0x2448,	// (0x0003401c) input_focus_pane_vc_g1

0x2450,	// (0x00034024) input_focus_pane_vc_g2

0x2458,	// (0x0003402c) input_focus_pane_vc_g3

0x2460,	// (0x00034034) input_focus_pane_vc_g4

0x2468,	// (0x0003403c) input_focus_pane_vc_g5

0x2470,	// (0x00034044) input_focus_pane_vc_g6

0x2478,	// (0x0003404c) input_focus_pane_vc_g7

0x2480,	// (0x00034054) input_focus_pane_vc_g8

0x2488,	// (0x0003405c) input_focus_pane_vc_g9

0x1fd4,	// (0x00033ba8) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0004122c) input_focus_pane_vc_g

0x9b02,	// (0x0003b6d6) data_form_pane_vc_ParamLimits

0x9b02,	// (0x0003b6d6) data_form_pane_vc

0x9b0e,	// (0x0003b6e2) form_field_data_pane_vc_g1

0xb8f2,	// (0x0003d4c6) form_field_data_pane_vc_t1_ParamLimits

0xb8f2,	// (0x0003d4c6) form_field_data_pane_vc_t1

0x23f0,	// (0x00033fc4) input_focus_pane_vc_ParamLimits

0x23f0,	// (0x00033fc4) input_focus_pane_vc

0xb90c,	// (0x0003d4e0) button_value_adjust_pane_cp3_vc

0xb914,	// (0x0003d4e8) button_value_adjust_pane_cp5_vc

0xb91c,	// (0x0003d4f0) form_field_data_pane_vc_ParamLimits

0xb91c,	// (0x0003d4f0) form_field_data_pane_vc

0xb933,	// (0x0003d507) form_field_data_pane_vc_cp2

0xb93b,	// (0x0003d50f) form_field_data_wide_pane_vc_ParamLimits

0xb93b,	// (0x0003d50f) form_field_data_wide_pane_vc

0xb951,	// (0x0003d525) form_field_data_wide_pane_vc_cp2

0xb959,	// (0x0003d52d) form_field_popup_pane_vc_ParamLimits

0xb959,	// (0x0003d52d) form_field_popup_pane_vc

0xb970,	// (0x0003d544) form_field_popup_wide_pane_vc_ParamLimits

0xb970,	// (0x0003d544) form_field_popup_wide_pane_vc

0xb986,	// (0x0003d55a) form_field_slider_pane_vc_ParamLimits

0xb986,	// (0x0003d55a) form_field_slider_pane_vc

0xb999,	// (0x0003d56d) form_field_slider_wide_pane_vc_ParamLimits

0xb999,	// (0x0003d56d) form_field_slider_wide_pane_vc

0xb9ac,	// (0x0003d580) grid_touch_1_pane_ParamLimits

0xb9ac,	// (0x0003d580) grid_touch_1_pane

0xb9b8,	// (0x0003d58c) grid_touch_2_pane_ParamLimits

0xb9b8,	// (0x0003d58c) grid_touch_2_pane

0x2de2,	// (0x000349b6) touch_pane_g1_ParamLimits

0x2de2,	// (0x000349b6) touch_pane_g1

0xb9d0,	// (0x0003d5a4) cell_app_pane_cp_wide_ParamLimits

0xb9d0,	// (0x0003d5a4) cell_app_pane_cp_wide

0xb9e1,	// (0x0003d5b5) grid_popup_fast_wide_pane_ParamLimits

0xb9e1,	// (0x0003d5b5) grid_popup_fast_wide_pane

0xb9f5,	// (0x0003d5c9) scroll_pane_cp19_ParamLimits

0xb9f5,	// (0x0003d5c9) scroll_pane_cp19

0x1fde,	// (0x00033bb2) bg_popup_window_pane_cp20

0xba09,	// (0x0003d5dd) listscroll_popup_fast_wide_pane

0xba11,	// (0x0003d5e5) grid_indicator_nsta_pane

0xba23,	// (0x0003d5f7) clock_nsta_pane_g1

0xba2c,	// (0x0003d600) clock_nsta_pane_t1

0xba48,	// (0x0003d61c) cell_indicator_nsta_pane_ParamLimits

0xba48,	// (0x0003d61c) cell_indicator_nsta_pane

0xba7d,	// (0x0003d651) cell_indicator_nsta_pane_g1

0xba8b,	// (0x0003d65f) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0004165f) cell_indicator_nsta_pane_g

0xba9d,	// (0x0003d671) clock_nsta_pane_cp

0xbaa6,	// (0x0003d67a) indicator_nsta_pane_cp

0xbab0,	// (0x0003d684) nsta_clock_indic_pane_g1

0x2076,	// (0x00033c4a) grid_indicator_pane

0x6f40,	// (0x00038b14) scroll_pane_cp29

0x71ac,	// (0x00038d80) indicator_nsta_pane_cp2_ParamLimits

0x71ac,	// (0x00038d80) indicator_nsta_pane_cp2

0x203a,	// (0x00033c0e) main_apps_wheel_pane

0x9d26,	// (0x0003b8fa) form_midp_field_text_pane_ParamLimits

0x9e6f,	// (0x0003ba43) scroll_bar_cp050_ParamLimits

0xbb09,	// (0x0003d6dd) cell_indicator_pane_ParamLimits

0xbb09,	// (0x0003d6dd) cell_indicator_pane

0xbb22,	// (0x0003d6f6) cell_indicator_pane_g1

0xbb2c,	// (0x0003d700) grid_wheel_folder_pane_ParamLimits

0xbb2c,	// (0x0003d700) grid_wheel_folder_pane

0xbb42,	// (0x0003d716) list_wheel_apps_pane_ParamLimits

0xbb42,	// (0x0003d716) list_wheel_apps_pane

0xbb53,	// (0x0003d727) main_apps_wheel_pane_g1_ParamLimits

0xbb53,	// (0x0003d727) main_apps_wheel_pane_g1

0xbb67,	// (0x0003d73b) main_apps_wheel_pane_g2_ParamLimits

0xbb67,	// (0x0003d73b) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0004167b) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0004167b) main_apps_wheel_pane_g

0xbb7f,	// (0x0003d753) main_apps_wheel_pane_t1_ParamLimits

0xbb7f,	// (0x0003d753) main_apps_wheel_pane_t1

0xbba2,	// (0x0003d776) list_wheel_apps_pane_g1

0xbbaa,	// (0x0003d77e) list_wheel_apps_pane_g2

0xbbb2,	// (0x0003d786) list_wheel_apps_pane_g3

0xbbbc,	// (0x0003d790) list_wheel_apps_pane_g4

0xbbc6,	// (0x0003d79a) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x00041680) list_wheel_apps_pane_g

0x2b51,	// (0x00034725) navi_icon_text_pane

0x7d00,	// (0x000398d4) aid_fill_nsta

0xbbe9,	// (0x0003d7bd) navi_icon_text_pane_g1

0xbbf5,	// (0x0003d7c9) navi_icon_text_pane_t1

0x2a35,	// (0x00034609) list_set_graphic_pane_t1_ParamLimits

0x2a35,	// (0x00034609) list_set_graphic_pane_t1

0xa5ba,	// (0x0003c18e) popup_midp_note_alarm_window_t6_ParamLimits

0xa5ba,	// (0x0003c18e) popup_midp_note_alarm_window_t6

0xa5cc,	// (0x0003c1a0) popup_midp_note_alarm_window_t7_ParamLimits

0xa5cc,	// (0x0003c1a0) popup_midp_note_alarm_window_t7

0xa5de,	// (0x0003c1b2) popup_midp_note_alarm_window_t8_ParamLimits

0xa5de,	// (0x0003c1b2) popup_midp_note_alarm_window_t8

0xa5f0,	// (0x0003c1c4) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f0,	// (0x0003c1c4) popup_midp_note_alarm_window_t9

0xa602,	// (0x0003c1d6) popup_midp_note_alarm_window_t10_ParamLimits

0xa602,	// (0x0003c1d6) popup_midp_note_alarm_window_t10

0xa614,	// (0x0003c1e8) popup_midp_note_alarm_window_t11_ParamLimits

0xa614,	// (0x0003c1e8) popup_midp_note_alarm_window_t11

0xa626,	// (0x0003c1fa) scroll_pane_cp17_ParamLimits

0xa626,	// (0x0003c1fa) scroll_pane_cp17

0x819d,	// (0x00039d71) volume_small_pane_cp_g1

0x85c4,	// (0x0003a198) volume_small_pane_cp_g2

0x85cd,	// (0x0003a1a1) volume_small_pane_cp_g3

0x85d6,	// (0x0003a1aa) volume_small_pane_cp_g4

0x85df,	// (0x0003a1b3) volume_small_pane_cp_g5

0x858e,	// (0x0003a162) volume_small_pane_cp_g6

0x85e8,	// (0x0003a1bc) volume_small_pane_cp_g7

0x85f1,	// (0x0003a1c5) volume_small_pane_cp_g8

0x85fa,	// (0x0003a1ce) volume_small_pane_cp_g9

0x8603,	// (0x0003a1d7) volume_small_pane_cp_g10

0x2cc3,	// (0x00034897) midp_ticker_pane_g1_ParamLimits

0x2ccf,	// (0x000348a3) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x000412f8) midp_ticker_pane_g_ParamLimits

0x2cdb,	// (0x000348af) midp_ticker_pane_t1_ParamLimits

0x7d16,	// (0x000398ea) aid_fill_nsta_2

0x9e5b,	// (0x0003ba2f) list_form2_midp_pane

0xaf6e,	// (0x0003cb42) midp_editing_number_pane_ParamLimits

0xaf7d,	// (0x0003cb51) midp_ticker_pane_ParamLimits

0xbc07,	// (0x0003d7db) form2_midp_field_pane

0xbc2b,	// (0x0003d7ff) scroll_pane_cp51

0xbc4b,	// (0x0003d81f) form2_midp_button_pane_ParamLimits

0xbc4b,	// (0x0003d81f) form2_midp_button_pane

0xbc5d,	// (0x0003d831) form2_midp_content_pane_ParamLimits

0xbc5d,	// (0x0003d831) form2_midp_content_pane

0xbc77,	// (0x0003d84b) form2_midp_field_choice_group_pane

0xbc7f,	// (0x0003d853) form2_midp_field_pane_g1

0xbc87,	// (0x0003d85b) form2_midp_field_pane_g2

0xbc8f,	// (0x0003d863) form2_midp_field_pane_g3

0xbc97,	// (0x0003d86b) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x000416a5) form2_midp_field_pane_g

0xbc9f,	// (0x0003d873) form2_midp_gauge_slider_pane

0xbca7,	// (0x0003d87b) form2_midp_gauge_wait_pane

0xbcaf,	// (0x0003d883) form2_midp_image_pane_ParamLimits

0xbcaf,	// (0x0003d883) form2_midp_image_pane

0xbcca,	// (0x0003d89e) form2_midp_label_pane_ParamLimits

0xbcca,	// (0x0003d89e) form2_midp_label_pane

0xbce3,	// (0x0003d8b7) form2_midp_label_pane_cp_ParamLimits

0xbce3,	// (0x0003d8b7) form2_midp_label_pane_cp

0xbd04,	// (0x0003d8d8) form2_midp_string_pane_ParamLimits

0xbd04,	// (0x0003d8d8) form2_midp_string_pane

0x4bc9,	// (0x0003679d) form2_midp_text_pane_ParamLimits

0x4bc9,	// (0x0003679d) form2_midp_text_pane

0xbd16,	// (0x0003d8ea) form2_midp_time_pane

0xbd26,	// (0x0003d8fa) input_focus_pane_cp51_ParamLimits

0xbd26,	// (0x0003d8fa) input_focus_pane_cp51

0xbd3e,	// (0x0003d912) form2_midp_label_pane_t1_ParamLimits

0xbd3e,	// (0x0003d912) form2_midp_label_pane_t1

0x4be2,	// (0x000367b6) form2_mdip_text_pane_t1_ParamLimits

0x4be2,	// (0x000367b6) form2_mdip_text_pane_t1

0x4c00,	// (0x000367d4) form2_midp_time_pane_t1

0xbd87,	// (0x0003d95b) form2_midp_gauge_slider_pane_t1

0xbd99,	// (0x0003d96d) form2_midp_gauge_slider_pane_t2

0xbdab,	// (0x0003d97f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x000416ae) form2_midp_gauge_slider_pane_t

0xbdbd,	// (0x0003d991) form2_midp_slider_pane

0xbdc9,	// (0x0003d99d) form2_midp_gauge_wait_pane_t1

0xbdd7,	// (0x0003d9ab) form2_midp_wait_pane_ParamLimits

0xbdd7,	// (0x0003d9ab) form2_midp_wait_pane

0xbe02,	// (0x0003d9d6) list_single_2graphic_pane_cp4_ParamLimits

0xbe02,	// (0x0003d9d6) list_single_2graphic_pane_cp4

0x9b77,	// (0x0003b74b) list_single_midp_graphic_pane_cp_ParamLimits

0x9b77,	// (0x0003b74b) list_single_midp_graphic_pane_cp

0x1fde,	// (0x00033bb2) list_highlight_pane_cp20

0xbe2a,	// (0x0003d9fe) list_single_2graphic_pane_g1_cp4

0xb407,	// (0x0003cfdb) list_single_2graphic_pane_g2_cp4

0xbe32,	// (0x0003da06) list_single_2graphic_pane_t1_cp4

0x203a,	// (0x00033c0e) list_highlight_pane_cp21

0xbe41,	// (0x0003da15) list_single_midp_graphic_pane_g4_cp

0xbe50,	// (0x0003da24) list_single_midp_graphic_pane_t1_cp

0xbe65,	// (0x0003da39) form2_mdip_string_pane_t1_ParamLimits

0xbe65,	// (0x0003da39) form2_mdip_string_pane_t1

0x1fde,	// (0x00033bb2) bg_wml_button_pane_cp2

0x1fd4,	// (0x00033ba8) form2_midp_image_pane_g1

0x463c,	// (0x00036210) list_double_large_graphic_pane_g5_ParamLimits

0x463c,	// (0x00036210) list_double_large_graphic_pane_g5

0x7370,	// (0x00038f44) midp_form_pane_ParamLimits

0x203a,	// (0x00033c0e) main_apps_wheel_pane_ParamLimits

0x7ae8,	// (0x000396bc) popup_preview_window_ParamLimits

0x7ae8,	// (0x000396bc) popup_preview_window

0x7ca3,	// (0x00039877) popup_touch_info_window_ParamLimits

0x7ca3,	// (0x00039877) popup_touch_info_window

0x7cc1,	// (0x00039895) popup_touch_menu_window_ParamLimits

0x7cc1,	// (0x00039895) popup_touch_menu_window

0x1fca,	// (0x00033b9e) bg_popup_sub_pane_cp6

0xbf6c,	// (0x0003db40) list_touch_menu_pane

0xbf74,	// (0x0003db48) list_single_touch_menu_pane_ParamLimits

0xbf74,	// (0x0003db48) list_single_touch_menu_pane

0xbf8a,	// (0x0003db5e) list_single_touch_menu_pane_t1

0x203a,	// (0x00033c0e) bg_popup_sub_pane_cp7_ParamLimits

0x203a,	// (0x00033c0e) bg_popup_sub_pane_cp7

0xbf98,	// (0x0003db6c) heading_sub_pane

0xbfa0,	// (0x0003db74) list_touch_info_pane_ParamLimits

0xbfa0,	// (0x0003db74) list_touch_info_pane

0xbfaf,	// (0x0003db83) list_single_touch_info_pane_ParamLimits

0xbfaf,	// (0x0003db83) list_single_touch_info_pane

0xbfc1,	// (0x0003db95) list_single_touch_info_pane_t1

0xbfcf,	// (0x0003dba3) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x000416bc) list_single_touch_info_pane_t

0x2cac,	// (0x00034880) bg_popup_heading_pane_cp

0xbfdd,	// (0x0003dbb1) heading_sub_pane_t1

0x9a9c,	// (0x0003b670) bg_popup_preview_window_pane_cp_ParamLimits

0x9a9c,	// (0x0003b670) bg_popup_preview_window_pane_cp

0xbf98,	// (0x0003db6c) heading_preview_pane

0xbfa0,	// (0x0003db74) list_preview_pane_ParamLimits

0xbfa0,	// (0x0003db74) list_preview_pane

0xbfeb,	// (0x0003dbbf) popup_preview_window_g1

0xbfaf,	// (0x0003db83) list_single_preview_pane_ParamLimits

0xbfaf,	// (0x0003db83) list_single_preview_pane

0xbff3,	// (0x0003dbc7) list_single_preview_pane_g1

0xbffb,	// (0x0003dbcf) list_single_preview_pane_t1

0xbfc1,	// (0x0003db95) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x000416c1) list_single_preview_pane_t

0xc009,	// (0x0003dbdd) bg_popup_heading_pane_cp2_ParamLimits

0xc009,	// (0x0003dbdd) bg_popup_heading_pane_cp2

0xc01f,	// (0x0003dbf3) heading_preview_pane_g1

0xc027,	// (0x0003dbfb) heading_preview_pane_t1_ParamLimits

0xc027,	// (0x0003dbfb) heading_preview_pane_t1

0x208d,	// (0x00033c61) soft_indicator_pane_t1_ParamLimits

0x236c,	// (0x00033f40) scroll_pane_ParamLimits

0x271e,	// (0x000342f2) scroll_sc2_left_pane

0x2715,	// (0x000342e9) scroll_sc2_right_pane

0x273d,	// (0x00034311) scroll_bg_pane_g1_ParamLimits

0x2752,	// (0x00034326) scroll_bg_pane_g2_ParamLimits

0x276a,	// (0x0003433e) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00041283) scroll_bg_pane_g_ParamLimits

0x273d,	// (0x00034311) scroll_handle_pane_g1_ParamLimits

0x277f,	// (0x00034353) scroll_handle_pane_g2_ParamLimits

0x276a,	// (0x0003433e) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0004128a) scroll_handle_pane_g_ParamLimits

0x776b,	// (0x0003933f) popup_choice_list_window_ParamLimits

0x776b,	// (0x0003933f) popup_choice_list_window

0x995a,	// (0x0003b52e) choice_list_pane

0x99dc,	// (0x0003b5b0) cell_toolbar_pane_t1

0x9a04,	// (0x0003b5d8) toolbar_button_pane_ParamLimits

0xaae0,	// (0x0003c6b4) ai_gene_pane_1_t2_ParamLimits

0xaae0,	// (0x0003c6b4) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x000414ad) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x000414ad) ai_gene_pane_1_t

0xc044,	// (0x0003dc18) scroll_sc2_left_pane_g1

0xc044,	// (0x0003dc18) scroll_sc2_right_pane_g1

0x2532,	// (0x00034106) bg_popup_sub_pane_cp10

0xc04e,	// (0x0003dc22) list_choice_list_pane

0xc067,	// (0x0003dc3b) list_single_choice_list_pane_ParamLimits

0xc067,	// (0x0003dc3b) list_single_choice_list_pane

0xc07a,	// (0x0003dc4e) list_single_choice_list_pane_g1

0x6bd9,	// (0x000387ad) list_single_choice_list_pane_t1_ParamLimits

0x6bd9,	// (0x000387ad) list_single_choice_list_pane_t1

0xc082,	// (0x0003dc56) choice_list_pane_g1

0xc08a,	// (0x0003dc5e) choice_list_pane_t1

0x1fca,	// (0x00033b9e) input_focus_pane_cp11

0x268a,	// (0x0003425e) title_pane_stacon_g2_ParamLimits

0x268a,	// (0x0003425e) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00041269) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00041269) title_pane_stacon_g

0x2cac,	// (0x00034880) cursor_press_pane

0x7813,	// (0x000393e7) popup_fep_hwr_window_ParamLimits

0x7813,	// (0x000393e7) popup_fep_hwr_window

0x788b,	// (0x0003945f) popup_fep_vkb_window_ParamLimits

0x788b,	// (0x0003945f) popup_fep_vkb_window

0xc098,	// (0x0003dc6c) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x000416ea) fep_vkb_side_pane_g_ParamLimits

0x8645,	// (0x0003a219) fep_hwr_candidate_pane_ParamLimits

0x8645,	// (0x0003a219) fep_hwr_candidate_pane

0x866f,	// (0x0003a243) fep_hwr_side_pane_ParamLimits

0x866f,	// (0x0003a243) fep_hwr_side_pane

0x868f,	// (0x0003a263) fep_hwr_top_pane_ParamLimits

0x868f,	// (0x0003a263) fep_hwr_top_pane

0x86a7,	// (0x0003a27b) fep_hwr_write_pane_ParamLimits

0x86a7,	// (0x0003a27b) fep_hwr_write_pane

0xfb16,	// (0x000416ea) fep_vkb_side_pane_g

0xc0a0,	// (0x0003dc74) fep_hwr_top_pane_g1

0xc0b2,	// (0x0003dc86) fep_hwr_top_pane_g2

0x86e1,	// (0x0003a2b5) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x000416c6) fep_hwr_top_pane_g

0x86f6,	// (0x0003a2ca) fep_hwr_top_text_pane

0x2842,	// (0x00034416) fep_hwr_top_text_pane_g1

0xc0e8,	// (0x0003dcbc) fep_hwr_top_text_pane_t1

0x87ec,	// (0x0003a3c0) fep_hwr_candidate_pane_g1

0xc32d,	// (0x0003df01) fep_vkb_keypad_pane_g3_ParamLimits

0xc32d,	// (0x0003df01) fep_vkb_keypad_pane_g3

0xc355,	// (0x0003df29) fep_vkb_keypad_pane_g4_ParamLimits

0xc355,	// (0x0003df29) fep_vkb_keypad_pane_g4

0xc3c4,	// (0x0003df98) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c4,	// (0x0003df98) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x000416f1) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x000416f1) fep_vkb_bottom_pane_g

0xc044,	// (0x0003dc18) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x000416fb) cell_vkb_side_pane_g

0xc44f,	// (0x0003e023) cell_vkb_side_pane_t1

0xc45d,	// (0x0003e031) cell_vkb_side_pane_t1_copy1

0xc044,	// (0x0003dc18) bg_fep_vkb_candidate_pane_g2

0xc589,	// (0x0003e15d) cell_vkb_candidate_pane_ParamLimits

0xc0f6,	// (0x0003dcca) aid_size_cell_vkb_ParamLimits

0xc0f6,	// (0x0003dcca) aid_size_cell_vkb

0xc589,	// (0x0003e15d) cell_vkb_candidate_pane

0x8813,	// (0x0003a3e7) bg_popup_fep_shadow_pane_g1

0xc184,	// (0x0003dd58) fep_vkb_bottom_pane_ParamLimits

0xc184,	// (0x0003dd58) fep_vkb_bottom_pane

0xc1ba,	// (0x0003dd8e) fep_vkb_candidate_pane_ParamLimits

0xc1ba,	// (0x0003dd8e) fep_vkb_candidate_pane

0xc1d6,	// (0x0003ddaa) fep_vkb_keypad_pane_ParamLimits

0xc1d6,	// (0x0003ddaa) fep_vkb_keypad_pane

0xc215,	// (0x0003dde9) fep_vkb_side_pane_ParamLimits

0xc215,	// (0x0003dde9) fep_vkb_side_pane

0xc251,	// (0x0003de25) fep_vkb_top_pane_ParamLimits

0xc251,	// (0x0003de25) fep_vkb_top_pane

0xc286,	// (0x0003de5a) fep_vkb_top_pane_g1_ParamLimits

0xc286,	// (0x0003de5a) fep_vkb_top_pane_g1

0xc295,	// (0x0003de69) fep_vkb_top_pane_g2_ParamLimits

0xc295,	// (0x0003de69) fep_vkb_top_pane_g2

0xc2a4,	// (0x0003de78) fep_vkb_top_pane_g3_ParamLimits

0xc2a4,	// (0x0003de78) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x000416e1) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x000416e1) fep_vkb_top_pane_g

0xc2c2,	// (0x0003de96) fep_vkb_top_text_pane_ParamLimits

0xc2c2,	// (0x0003de96) fep_vkb_top_text_pane

0xc2d3,	// (0x0003dea7) fep_vkb_side_pane_g1_ParamLimits

0xc2d3,	// (0x0003dea7) fep_vkb_side_pane_g1

0xc31c,	// (0x0003def0) grid_vkb_side_pane_ParamLimits

0xc31c,	// (0x0003def0) grid_vkb_side_pane

0x881b,	// (0x0003a3ef) bg_popup_fep_shadow_pane_g2

0x8824,	// (0x0003a3f8) bg_popup_fep_shadow_pane_g3

0x882c,	// (0x0003a400) bg_popup_fep_shadow_pane_g4

0x8835,	// (0x0003a409) bg_popup_fep_shadow_pane_g5

0x883f,	// (0x0003a413) bg_popup_fep_shadow_pane_g6

0x8847,	// (0x0003a41b) bg_popup_fep_shadow_pane_g7

0x2460,	// (0x00034034) bg_popup_fep_shadow_pane_g8

0xc373,	// (0x0003df47) grid_vkb_keypad_number_pane_ParamLimits

0xc373,	// (0x0003df47) grid_vkb_keypad_number_pane

0xc383,	// (0x0003df57) grid_vkb_keypad_pane_ParamLimits

0xc383,	// (0x0003df57) grid_vkb_keypad_pane

0xc3a9,	// (0x0003df7d) fep_vkb_bottom_pane_g1_ParamLimits

0xc3a9,	// (0x0003df7d) fep_vkb_bottom_pane_g1

0xc3d2,	// (0x0003dfa6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d2,	// (0x0003dfa6) grid_vkb_keypad_bottom_left_pane

0xc3e7,	// (0x0003dfbb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e7,	// (0x0003dfbb) grid_vkb_keypad_bottom_right_pane

0xc3fc,	// (0x0003dfd0) fep_vkb_top_text_pane_g1

0xc417,	// (0x0003dfeb) fep_vkb_top_text_pane_t1

0xc42c,	// (0x0003e000) cell_vkb_side_pane_ParamLimits

0xc42c,	// (0x0003e000) cell_vkb_side_pane

0xc044,	// (0x0003dc18) cell_vkb_side_pane_g1

0xc46b,	// (0x0003e03f) cell_vkb_keypad_pane_ParamLimits

0xc46b,	// (0x0003e03f) cell_vkb_keypad_pane

0xc4e0,	// (0x0003e0b4) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0004170e) bg_popup_fep_shadow_pane_g

0x8859,	// (0x0003a42d) cell_hwr_side_pane_g1

0x8859,	// (0x0003a42d) cell_hwr_side_pane_g2

0xc4ea,	// (0x0003e0be) cell_vkb_keypad_pane_t1

0xc4f8,	// (0x0003e0cc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4f8,	// (0x0003e0cc) cell_vkb_keypad_bottom_left_pane

0xc515,	// (0x0003e0e9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc515,	// (0x0003e0e9) cell_vkb_keypad_bottom_right_pane

0xc044,	// (0x0003dc18) cell_vkb_keypad_bottom_left_pane_g1

0xc044,	// (0x0003dc18) cell_vkb_keypad_bottom_right_pane_g1

0xc54e,	// (0x0003e122) cell_vkb_keypad_number_pane_ParamLimits

0xc54e,	// (0x0003e122) cell_vkb_keypad_number_pane

0xc56d,	// (0x0003e141) cell_vkb_keypad_number_pane_g1

0xc577,	// (0x0003e14b) cell_vkb_keypad_number_pane_g2

0xc580,	// (0x0003e154) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x00041700) cell_vkb_keypad_number_pane_g

0xc4ea,	// (0x0003e0be) cell_vkb_keypad_number_pane_t1

0xc5a4,	// (0x0003e178) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x00041721) cell_hwr_side_pane_g

0xc5bd,	// (0x0003e191) cell_hwr_side_pane_t1

0x8863,	// (0x0003a437) cell_hwr_side_pane_t1_copy1

0x8871,	// (0x0003a445) cell_hwr_candidate_pane_g1

0x88a0,	// (0x0003a474) cell_hwr_candidate_pane_t1

0xc044,	// (0x0003dc18) cell_vkb_candidate_pane_g2

0xc622,	// (0x0003e1f6) cell_vkb_candidate_pane_t1

0x860c,	// (0x0003a1e0) bg_popup_fep_shadow_pane_ParamLimits

0x860c,	// (0x0003a1e0) bg_popup_fep_shadow_pane

0x86c1,	// (0x0003a295) bg_fep_hwr_top_pane_g4

0xc0c4,	// (0x0003dc98) bg_hwr_side_pane_g1_ParamLimits

0xc0c4,	// (0x0003dc98) bg_hwr_side_pane_g1

0x8732,	// (0x0003a306) cell_hwr_side_pane_ParamLimits

0x8732,	// (0x0003a306) cell_hwr_side_pane

0x876d,	// (0x0003a341) fep_hwr_write_pane_g1_ParamLimits

0x876d,	// (0x0003a341) fep_hwr_write_pane_g1

0x877a,	// (0x0003a34e) fep_hwr_write_pane_g2_ParamLimits

0x877a,	// (0x0003a34e) fep_hwr_write_pane_g2

0x8787,	// (0x0003a35b) fep_hwr_write_pane_g3_ParamLimits

0x8787,	// (0x0003a35b) fep_hwr_write_pane_g3

0x8795,	// (0x0003a369) fep_hwr_write_pane_g4_ParamLimits

0x8795,	// (0x0003a369) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x000416cd) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x000416cd) fep_hwr_write_pane_g

0x86c1,	// (0x0003a295) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x86c1,	// (0x0003a295) bg_fep_hwr_candidate_pane_g2

0x87aa,	// (0x0003a37e) cell_hwr_candidate_pane_ParamLimits

0x87aa,	// (0x0003a37e) cell_hwr_candidate_pane

0x87ec,	// (0x0003a3c0) fep_hwr_candidate_pane_g1_ParamLimits

0xc124,	// (0x0003dcf8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc124,	// (0x0003dcf8) bg_popup_fep_shadow_pane_cp2

0xc2b4,	// (0x0003de88) fep_vkb_top_pane_g4_ParamLimits

0xc2b4,	// (0x0003de88) fep_vkb_top_pane_g4

0xc2fa,	// (0x0003dece) fep_vkb_side_pane_g2_ParamLimits

0xc2fa,	// (0x0003dece) fep_vkb_side_pane_g2

0x68cb,	// (0x0003849f) list_setting_pane_t4_ParamLimits

0x68cb,	// (0x0003849f) list_setting_pane_t4

0x46f0,	// (0x000362c4) list_setting_number_pane_t5_ParamLimits

0x46f0,	// (0x000362c4) list_setting_number_pane_t5

0x6f6f,	// (0x00038b43) list_double_heading_pane_cp2_ParamLimits

0x6f6f,	// (0x00038b43) list_double_heading_pane_cp2

0x2e70,	// (0x00034a44) list_double_heading_pane_g1_cp2_ParamLimits

0x2e70,	// (0x00034a44) list_double_heading_pane_g1_cp2

0xc630,	// (0x0003e204) list_double_heading_pane_g2_cp2_ParamLimits

0xc630,	// (0x0003e204) list_double_heading_pane_g2_cp2

0xc644,	// (0x0003e218) list_double_heading_pane_t1_cp2_ParamLimits

0xc644,	// (0x0003e218) list_double_heading_pane_t1_cp2

0xc65a,	// (0x0003e22e) list_double_heading_pane_t2_cp2_ParamLimits

0xc65a,	// (0x0003e22e) list_double_heading_pane_t2_cp2

0x1fc2,	// (0x00033b96) aid_value_unit2

0x5fd4,	// (0x00037ba8) popup_preview_fixed_window

0x2164,	// (0x00033d38) bg_popup_preview_window_pane_cp02

0xc66c,	// (0x0003e240) list_preview_fixed_pane

0xc6b2,	// (0x0003e286) list_empty_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_empty_pane_fp

0xc6b2,	// (0x0003e286) list_single_cale_day_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_single_cale_day_pane_fp

0xc6b2,	// (0x0003e286) list_single_graphic_heading_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_single_graphic_heading_pane_fp

0xc6b2,	// (0x0003e286) list_single_graphic_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_single_graphic_pane_fp

0xc6b2,	// (0x0003e286) list_single_heading_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_single_heading_pane_fp

0xc6b2,	// (0x0003e286) list_single_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_single_pane_fp

0xc6c8,	// (0x0003e29c) list_single_pane_fp_g1_ParamLimits

0xc6c8,	// (0x0003e29c) list_single_pane_fp_g1

0x4624,	// (0x000361f8) list_single_pane_fp_g2_ParamLimits

0x4624,	// (0x000361f8) list_single_pane_fp_g2

0x4c13,	// (0x000367e7) list_single_pane_fp_g3_ParamLimits

0x4c13,	// (0x000367e7) list_single_pane_fp_g3

0xc6d4,	// (0x0003e2a8) list_single_pane_fp_g4_ParamLimits

0xc6d4,	// (0x0003e2a8) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x00041734) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x00041734) list_single_pane_fp_g

0x4c27,	// (0x000367fb) list_single_pane_fp_t1_ParamLimits

0x4c27,	// (0x000367fb) list_single_pane_fp_t1

0x4c3e,	// (0x00036812) list_single_graphic_pane_fp_g1_ParamLimits

0x4c3e,	// (0x00036812) list_single_graphic_pane_fp_g1

0xc6c8,	// (0x0003e29c) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c8,	// (0x0003e29c) list_single_graphic_pane_fp_g2

0x4624,	// (0x000361f8) list_single_graphic_pane_fp_g3_ParamLimits

0x4624,	// (0x000361f8) list_single_graphic_pane_fp_g3

0x4c13,	// (0x000367e7) list_single_graphic_pane_fp_g4_ParamLimits

0x4c13,	// (0x000367e7) list_single_graphic_pane_fp_g4

0xc6d4,	// (0x0003e2a8) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d4,	// (0x0003e2a8) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0004173d) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0004173d) list_single_graphic_pane_fp_g

0x4c4a,	// (0x0003681e) list_single_graphic_pane_fp_t1_ParamLimits

0x4c4a,	// (0x0003681e) list_single_graphic_pane_fp_t1

0x4c3e,	// (0x00036812) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c3e,	// (0x00036812) list_single_graphic_heading_pane_fp_g1

0xc6c8,	// (0x0003e29c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c8,	// (0x0003e29c) list_single_graphic_heading_pane_fp_g2

0x4624,	// (0x000361f8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4624,	// (0x000361f8) list_single_graphic_heading_pane_fp_g3

0x4c13,	// (0x000367e7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c13,	// (0x000367e7) list_single_graphic_heading_pane_fp_g4

0xc6d4,	// (0x0003e2a8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d4,	// (0x0003e2a8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0004173d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0004173d) list_single_graphic_heading_pane_fp_g

0x4c60,	// (0x00036834) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c60,	// (0x00036834) list_single_graphic_heading_pane_fp_t1

0x4c76,	// (0x0003684a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c76,	// (0x0003684a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x00041748) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x00041748) list_single_graphic_heading_pane_fp_t

0x4c88,	// (0x0003685c) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c88,	// (0x0003685c) list_single_cale_day_pane_fp_g1

0xc6e0,	// (0x0003e2b4) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6e0,	// (0x0003e2b4) list_single_cale_day_pane_fp_g2

0x4cc0,	// (0x00036894) list_single_cale_day_pane_fp_g3_ParamLimits

0x4cc0,	// (0x00036894) list_single_cale_day_pane_fp_g3

0x4ce8,	// (0x000368bc) list_single_cale_day_pane_fp_g4_ParamLimits

0x4ce8,	// (0x000368bc) list_single_cale_day_pane_fp_g4

0x4d0c,	// (0x000368e0) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d0c,	// (0x000368e0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0004174d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0004174d) list_single_cale_day_pane_fp_g

0x4d30,	// (0x00036904) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d30,	// (0x00036904) list_single_cale_day_pane_fp_t1

0x4d56,	// (0x0003692a) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d56,	// (0x0003692a) list_single_cale_day_pane_fp_t2

0x4d6f,	// (0x00036943) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d6f,	// (0x00036943) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x00041758) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x00041758) list_single_cale_day_pane_fp_t

0xc6c8,	// (0x0003e29c) list_empty_pane_fp_g1_ParamLimits

0xc6c8,	// (0x0003e29c) list_empty_pane_fp_g1

0x4d88,	// (0x0003695c) list_empty_pane_fp_t1

0x4d96,	// (0x0003696a) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0004175f) list_empty_pane_fp_t

0xc6c8,	// (0x0003e29c) list_single_heading_pane_fp_g1_ParamLimits

0xc6c8,	// (0x0003e29c) list_single_heading_pane_fp_g1

0x4624,	// (0x000361f8) list_single_heading_pane_fp_g2_ParamLimits

0x4624,	// (0x000361f8) list_single_heading_pane_fp_g2

0x4c13,	// (0x000367e7) list_single_heading_pane_fp_g3_ParamLimits

0x4c13,	// (0x000367e7) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x00041764) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00041764) list_single_heading_pane_fp_g

0x4da4,	// (0x00036978) list_single_heading_pane_fp_t1_ParamLimits

0x4da4,	// (0x00036978) list_single_heading_pane_fp_t1

0x4db6,	// (0x0003698a) list_single_heading_pane_fp_t2_ParamLimits

0x4db6,	// (0x0003698a) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0004176b) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0004176b) list_single_heading_pane_fp_t

0x6c3f,	// (0x00038813) aid_size_cell_fast

0x2147,	// (0x00033d1b) soft_indicator_pane_cp1_t1

0x6c48,	// (0x0003881c) cell_app_pane_cp2_ParamLimits

0x6c48,	// (0x0003881c) cell_app_pane_cp2

0x862e,	// (0x0003a202) fep_hwr_candidate_drop_down_list_pane

0x8806,	// (0x0003a3da) fep_hwr_candidate_pane_g3_ParamLimits

0x8806,	// (0x0003a3da) fep_hwr_candidate_pane_g3

0x3bd5,	// (0x000357a9) fep_hwr_candidate_pane_g4_ParamLimits

0x3bd5,	// (0x000357a9) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x000416da) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x000416da) fep_hwr_candidate_pane_g

0xc1a9,	// (0x0003dd7d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a9,	// (0x0003dd7d) fep_vkb_candidate_drop_down_list_pane

0xc5ac,	// (0x0003e180) fep_vkb_candidate_pane_g3

0xc5b4,	// (0x0003e188) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x00041707) fep_vkb_candidate_pane_g

0x8871,	// (0x0003a445) cell_hwr_candidate_pane_g1_ParamLimits

0x887f,	// (0x0003a453) cell_hwr_candidate_pane_g3_ParamLimits

0x887f,	// (0x0003a453) cell_hwr_candidate_pane_g3

0xc5cb,	// (0x0003e19f) cell_hwr_candidate_pane_g4_ParamLimits

0xc5cb,	// (0x0003e19f) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x00041726) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x00041726) cell_hwr_candidate_pane_g

0xc5ec,	// (0x0003e1c0) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ec,	// (0x0003e1c0) cell_vkb_candidate_pane_g3

0xc607,	// (0x0003e1db) cell_vkb_candidate_pane_g4_ParamLimits

0xc607,	// (0x0003e1db) cell_vkb_candidate_pane_g4

0xc6ec,	// (0x0003e2c0) cell_app_pane_cp2_g1_ParamLimits

0xc6ec,	// (0x0003e2c0) cell_app_pane_cp2_g1

0xc70a,	// (0x0003e2de) cell_app_pane_cp2_g2_ParamLimits

0xc70a,	// (0x0003e2de) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x00041770) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x00041770) cell_app_pane_cp2_g

0xc716,	// (0x0003e2ea) cell_app_pane_cp2_t1_ParamLimits

0xc716,	// (0x0003e2ea) cell_app_pane_cp2_t1

0x23f0,	// (0x00033fc4) grid_highlight_pane_cp1_ParamLimits

0x23f0,	// (0x00033fc4) grid_highlight_pane_cp1

0x88be,	// (0x0003a492) cell_hwr_candidate_pane_cp1_ParamLimits

0x88be,	// (0x0003a492) cell_hwr_candidate_pane_cp1

0x8871,	// (0x0003a445) fep_hwr_candidate_drop_down_list_pane_g1

0x88dd,	// (0x0003a4b1) fep_hwr_candidate_drop_down_list_pane_g2

0x88ea,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00041775) fep_hwr_candidate_drop_down_list_pane_g

0x88f7,	// (0x0003a4cb) fep_hwr_candidate_drop_down_list_scroll_pane

0x8900,	// (0x0003a4d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8900,	// (0x0003a4d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x890d,	// (0x0003a4e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x890d,	// (0x0003a4e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x891a,	// (0x0003a4ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x891a,	// (0x0003a4ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8927,	// (0x0003a4fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8927,	// (0x0003a4fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8942,	// (0x0003a516) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8942,	// (0x0003a516) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x895d,	// (0x0003a531) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x895d,	// (0x0003a531) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8978,	// (0x0003a54c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8978,	// (0x0003a54c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8993,	// (0x0003a567) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8993,	// (0x0003a567) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0004177c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0004177c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc728,	// (0x0003e2fc) cell_vkb_candidate_pane_cp1_ParamLimits

0xc728,	// (0x0003e2fc) cell_vkb_candidate_pane_cp1

0xc2b4,	// (0x0003de88) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b4,	// (0x0003de88) fep_vkb_candidate_drop_down_list_pane_g1

0xc748,	// (0x0003e31c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc748,	// (0x0003e31c) fep_vkb_candidate_drop_down_list_pane_g2

0xc755,	// (0x0003e329) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc755,	// (0x0003e329) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0004178d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x0004178d) fep_vkb_candidate_drop_down_list_pane_g

0xc762,	// (0x0003e336) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc762,	// (0x0003e336) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76f,	// (0x0003e343) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76f,	// (0x0003e343) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc77c,	// (0x0003e350) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc77c,	// (0x0003e350) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc788,	// (0x0003e35c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc788,	// (0x0003e35c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc794,	// (0x0003e368) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc794,	// (0x0003e368) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7b5,	// (0x0003e389) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7b5,	// (0x0003e389) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7d6,	// (0x0003e3aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7d6,	// (0x0003e3aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7f7,	// (0x0003e3cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7f7,	// (0x0003e3cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc818,	// (0x0003e3ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc818,	// (0x0003e3ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x00041794) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x00041794) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x60ee,	// (0x00037cc2) title_pane_g1_ParamLimits

0x60fb,	// (0x00037ccf) title_pane_g2_ParamLimits

0xf529,	// (0x000410fd) title_pane_g_ParamLimits

0x283a,	// (0x0003440e) aid_call2_pane

0x2832,	// (0x00034406) aid_call_pane

0x2842,	// (0x00034416) popup_clock_analogue_window_g1

0x2842,	// (0x00034416) popup_clock_analogue_window_g2

0x6f50,	// (0x00038b24) popup_clock_analogue_window_g3

0x6f59,	// (0x00038b2d) popup_clock_analogue_window_g4

0x1fd4,	// (0x00033ba8) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00041298) popup_clock_analogue_window_g

0x6f61,	// (0x00038b35) popup_clock_analogue_window_t1

0x6faf,	// (0x00038b83) clock_digital_number_pane_ParamLimits

0x6faf,	// (0x00038b83) clock_digital_number_pane

0x6fbb,	// (0x00038b8f) clock_digital_number_pane_cp02_ParamLimits

0x6fbb,	// (0x00038b8f) clock_digital_number_pane_cp02

0x6fc7,	// (0x00038b9b) clock_digital_number_pane_cp03_ParamLimits

0x6fc7,	// (0x00038b9b) clock_digital_number_pane_cp03

0x6fd3,	// (0x00038ba7) clock_digital_number_pane_cp04_ParamLimits

0x6fd3,	// (0x00038ba7) clock_digital_number_pane_cp04

0x6fdf,	// (0x00038bb3) clock_digital_separator_pane_ParamLimits

0x6fdf,	// (0x00038bb3) clock_digital_separator_pane

0x6feb,	// (0x00038bbf) popup_clock_digital_window_t1_ParamLimits

0x6feb,	// (0x00038bbf) popup_clock_digital_window_t1

0x1fd4,	// (0x00033ba8) clock_digital_number_pane_g1

0x1fd4,	// (0x00033ba8) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x000412a3) clock_digital_number_pane_g

0x1fd4,	// (0x00033ba8) clock_digital_separator_pane_g1

0x1fd4,	// (0x00033ba8) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x000412a3) clock_digital_separator_pane_g

0x7d00,	// (0x000398d4) aid_fill_nsta_ParamLimits

0x7e4c,	// (0x00039a20) indicator_nsta_pane_ParamLimits

0x7fc5,	// (0x00039b99) popup_clock_analogue_window

0x7fc5,	// (0x00039b99) popup_clock_digital_window

0xba11,	// (0x0003d5e5) grid_indicator_nsta_pane_ParamLimits

0xba3a,	// (0x0003d60e) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0004165a) clock_nsta_pane_t

0x6e7b,	// (0x00038a4f) aid_size_max_handle

0x6e85,	// (0x00038a59) aid_size_min_handle

0x2cac,	// (0x00034880) editor_scroll_pane

0xc833,	// (0x0003e407) ex_editor_pane

0x2522,	// (0x000340f6) scroll_pane_cp13

0x2398,	// (0x00033f6c) scroll_pane_cp14

0x2871,	// (0x00034445) scroll_pane_cp36

0x6f83,	// (0x00038b57) list_single_graphic_hl_pane_cp2_ParamLimits

0x6f83,	// (0x00038b57) list_single_graphic_hl_pane_cp2

0xafb2,	// (0x0003cb86) list_single_graphic_hl_pane_ParamLimits

0xafb2,	// (0x0003cb86) list_single_graphic_hl_pane

0xc83b,	// (0x0003e40f) aid_size_min_hl_cp1

0xc844,	// (0x0003e418) list_highlight_pane_cp34_ParamLimits

0xc844,	// (0x0003e418) list_highlight_pane_cp34

0xc855,	// (0x0003e429) list_single_graphic_hl_pane_g1_ParamLimits

0xc855,	// (0x0003e429) list_single_graphic_hl_pane_g1

0x89ae,	// (0x0003a582) list_single_graphic_hl_pane_g2_ParamLimits

0x89ae,	// (0x0003a582) list_single_graphic_hl_pane_g2

0x89ae,	// (0x0003a582) list_single_graphic_hl_pane_g3_ParamLimits

0x89ae,	// (0x0003a582) list_single_graphic_hl_pane_g3

0x47d4,	// (0x000363a8) list_single_graphic_hl_pane_g4_ParamLimits

0x47d4,	// (0x000363a8) list_single_graphic_hl_pane_g4

0x89ba,	// (0x0003a58e) list_single_graphic_hl_pane_g5_ParamLimits

0x89ba,	// (0x0003a58e) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x000417a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x000417a5) list_single_graphic_hl_pane_g

0x89ce,	// (0x0003a5a2) list_single_graphic_hl_pane_t1_ParamLimits

0x89ce,	// (0x0003a5a2) list_single_graphic_hl_pane_t1

0xc862,	// (0x0003e436) aid_size_min_hl_cp2

0xc86b,	// (0x0003e43f) list_highlight_pane_cp34_cp2_ParamLimits

0xc86b,	// (0x0003e43f) list_highlight_pane_cp34_cp2

0xc855,	// (0x0003e429) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc855,	// (0x0003e429) list_single_graphic_hl_pane_g1_cp2

0xc878,	// (0x0003e44c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc878,	// (0x0003e44c) list_single_graphic_hl_pane_g2_cp2

0xc884,	// (0x0003e458) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc884,	// (0x0003e458) list_single_graphic_hl_pane_g3_cp2

0x2c0b,	// (0x000347df) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2c0b,	// (0x000347df) list_single_graphic_hl_pane_g4_cp2

0xc892,	// (0x0003e466) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc892,	// (0x0003e466) list_single_graphic_hl_pane_g5_cp2

0x75f4,	// (0x000391c8) control_pane_g4_ParamLimits

0x75f4,	// (0x000391c8) control_pane_g4

0x2532,	// (0x00034106) bg_popup_sub_pane_cp10_ParamLimits

0xc04e,	// (0x0003dc22) list_choice_list_pane_ParamLimits

0xc05d,	// (0x0003dc31) scroll_pane_cp23

0x2164,	// (0x00033d38) bg_popup_preview_window_pane_cp02_ParamLimits

0xc66c,	// (0x0003e240) list_preview_fixed_pane_ParamLimits

0xc682,	// (0x0003e256) list_preview_fixed_pane_cp_ParamLimits

0xc682,	// (0x0003e256) list_preview_fixed_pane_cp

0xc68e,	// (0x0003e262) popup_preview_fixed_window_g1_ParamLimits

0xc68e,	// (0x0003e262) popup_preview_fixed_window_g1

0xc69a,	// (0x0003e26e) popup_preview_fixed_window_g2_ParamLimits

0xc69a,	// (0x0003e26e) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0004172d) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0004172d) popup_preview_fixed_window_g

0x6d57,	// (0x0003892b) aid_navi_side_left_pane_ParamLimits

0x6d6c,	// (0x00038940) aid_navi_side_right_pane_ParamLimits

0x6d84,	// (0x00038958) navi_icon_pane_stacon_ParamLimits

0x6d98,	// (0x0003896c) navi_navi_pane_stacon_ParamLimits

0x6d84,	// (0x00038958) navi_text_pane_stacon_ParamLimits

0x5ea3,	// (0x00037a77) main_text_info_pane

0xc8bc,	// (0x0003e490) listscroll_text_info_pane

0xc8c4,	// (0x0003e498) list_text_info_pane_ParamLimits

0xc8c4,	// (0x0003e498) list_text_info_pane

0xc8d3,	// (0x0003e4a7) scroll_pane_cp24_ParamLimits

0xc8d3,	// (0x0003e4a7) scroll_pane_cp24

0xc8f1,	// (0x0003e4c5) list_text_info_pane_t1_ParamLimits

0xc8f1,	// (0x0003e4c5) list_text_info_pane_t1

0x7787,	// (0x0003935b) popup_fast_swap2_window_ParamLimits

0x7787,	// (0x0003935b) popup_fast_swap2_window

0xc925,	// (0x0003e4f9) aid_size_cell_fast2

0x1fca,	// (0x00033b9e) bg_popup_window_pane_cp17

0x9e8f,	// (0x0003ba63) heading_pane_cp2

0x9e97,	// (0x0003ba6b) listscroll_fast2_pane

0xc92f,	// (0x0003e503) grid_fast2_pane

0xc939,	// (0x0003e50d) listscroll_fast2_pane_g1

0xc941,	// (0x0003e515) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x000417b0) listscroll_fast2_pane_g

0x2522,	// (0x000340f6) scroll_pane_cp26

0xc94b,	// (0x0003e51f) cell_fast2_pane_ParamLimits

0xc94b,	// (0x0003e51f) cell_fast2_pane

0xc960,	// (0x0003e534) cell_fast2_pane_g1

0xc969,	// (0x0003e53d) cell_fast2_pane_g2

0xc972,	// (0x0003e546) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x000417b5) cell_fast2_pane_g

0x22cf,	// (0x00033ea3) grid_highlight_pane_cp9

0x774f,	// (0x00039323) main_eswt_pane_ParamLimits

0x774f,	// (0x00039323) main_eswt_pane

0xc8e8,	// (0x0003e4bc) list_single_text_info_pane

0xc97a,	// (0x0003e54e) eswt_ctrl_button_pane

0xc97a,	// (0x0003e54e) eswt_ctrl_canvas_pane

0xc982,	// (0x0003e556) eswt_ctrl_combo_pane

0xc97a,	// (0x0003e54e) eswt_ctrl_default_pane

0xc97a,	// (0x0003e54e) eswt_ctrl_label_pane

0xc98a,	// (0x0003e55e) eswt_ctrl_wait_pane

0xc992,	// (0x0003e566) eswt_shell_pane

0x1fca,	// (0x00033b9e) listscroll_eswt_app_pane

0xc9b2,	// (0x0003e586) popup_eswt_tasktip_window_ParamLimits

0xc9b2,	// (0x0003e586) popup_eswt_tasktip_window

0x9a9c,	// (0x0003b670) bg_popup_window_pane_cp18

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_ParamLimits

0xc9c3,	// (0x0003e597) eswt_control_pane_g1

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_ParamLimits

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_ParamLimits

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_ParamLimits

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x000417bc) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x000417bc) eswt_control_pane_g

0x23f0,	// (0x00033fc4) bg_button_pane_ParamLimits

0x23f0,	// (0x00033fc4) bg_button_pane

0x22e4,	// (0x00033eb8) common_borders_pane_copy2_ParamLimits

0x22e4,	// (0x00033eb8) common_borders_pane_copy2

0xc9f7,	// (0x0003e5cb) control_button_pane_g1_ParamLimits

0xc9f7,	// (0x0003e5cb) control_button_pane_g1

0xca03,	// (0x0003e5d7) control_button_pane_g2_ParamLimits

0xca03,	// (0x0003e5d7) control_button_pane_g2

0xca0f,	// (0x0003e5e3) control_button_pane_g3_ParamLimits

0xca0f,	// (0x0003e5e3) control_button_pane_g3

0x0002,

0xfbf1,	// (0x000417c5) control_button_pane_g_ParamLimits

0xfbf1,	// (0x000417c5) control_button_pane_g

0xca23,	// (0x0003e5f7) control_button_pane_t1

0xca31,	// (0x0003e605) control_button_pane_t2

0x0001,

0xfbf8,	// (0x000417cc) control_button_pane_t

0x9a10,	// (0x0003b5e4) bg_button_pane_g1

0x9a20,	// (0x0003b5f4) bg_button_pane_g2

0x9a18,	// (0x0003b5ec) bg_button_pane_g3

0x9a30,	// (0x0003b604) bg_button_pane_g4

0x9a28,	// (0x0003b5fc) bg_button_pane_g5

0x9a38,	// (0x0003b60c) bg_button_pane_g6

0x9a40,	// (0x0003b614) bg_button_pane_g7

0x9a50,	// (0x0003b624) bg_button_pane_g8

0x9a48,	// (0x0003b61c) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00041401) bg_button_pane_g

0xc009,	// (0x0003dbdd) common_borders_pane_ParamLimits

0xc009,	// (0x0003dbdd) common_borders_pane

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy1_ParamLimits

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy1

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy1_ParamLimits

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy1

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy1_ParamLimits

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy1

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy1_ParamLimits

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy1

0xc044,	// (0x0003dc18) bg_eswt_ctrl_canvas_pane_g1

0xc009,	// (0x0003dbdd) common_borders_pane_cp2_ParamLimits

0xc009,	// (0x0003dbdd) common_borders_pane_cp2

0xc009,	// (0x0003dbdd) common_borders_pane_cp3_ParamLimits

0xc009,	// (0x0003dbdd) common_borders_pane_cp3

0xca3f,	// (0x0003e613) separator_horizontal_pane

0xca47,	// (0x0003e61b) separator_vertical_pane

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy2_ParamLimits

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy2

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy2_ParamLimits

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy2

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy2_ParamLimits

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy2

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy2_ParamLimits

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy2

0x1fca,	// (0x00033b9e) common_borders_pane_cp4

0xca50,	// (0x0003e624) separator_horizontal_pane_g1

0xca59,	// (0x0003e62d) separator_horizontal_pane_g2

0xca62,	// (0x0003e636) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x000417d1) separator_horizontal_pane_g

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy3_ParamLimits

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy3

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy3_ParamLimits

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy3

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy3_ParamLimits

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy3

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy3_ParamLimits

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy3

0x1fca,	// (0x00033b9e) common_borders_pane_cp5

0xca6b,	// (0x0003e63f) separator_vertical_pane_g1

0xca74,	// (0x0003e648) separator_vertical_pane_g2

0xca7d,	// (0x0003e651) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x000417d8) separator_vertical_pane_g

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy4_ParamLimits

0xc9c3,	// (0x0003e597) eswt_control_pane_g1_copy4

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy4_ParamLimits

0xc9d0,	// (0x0003e5a4) eswt_control_pane_g2_copy4

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy4_ParamLimits

0xc9dd,	// (0x0003e5b1) eswt_control_pane_g3_copy4

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy4_ParamLimits

0xc9ea,	// (0x0003e5be) eswt_control_pane_g4_copy4

0xca86,	// (0x0003e65a) eswt_ctrl_combo_button_pane

0xca8e,	// (0x0003e662) eswt_ctrl_input_pane

0xca96,	// (0x0003e66a) popup_choice_list_window_cp70

0xca9e,	// (0x0003e672) eswt_ctrl_input_pane_t1

0x1fca,	// (0x00033b9e) input_focus_pane_cp70

0xc009,	// (0x0003dbdd) bg_button_pane_cp70_ParamLimits

0xc009,	// (0x0003dbdd) bg_button_pane_cp70

0xcaac,	// (0x0003e680) eswt_ctrl_combo_button_pane_g1

0xcab4,	// (0x0003e688) wait_bar_pane_cp70

0x9a9c,	// (0x0003b670) bg_popup_window_pane_cp70_ParamLimits

0x9a9c,	// (0x0003b670) bg_popup_window_pane_cp70

0xcabc,	// (0x0003e690) popup_eswt_tasktip_window_t1

0xcad2,	// (0x0003e6a6) wait_bar_pane_cp71_ParamLimits

0xcad2,	// (0x0003e6a6) wait_bar_pane_cp71

0xcade,	// (0x0003e6b2) grid_eswt_app_pane

0x271e,	// (0x000342f2) scroll_pane_cp70

0xcae7,	// (0x0003e6bb) cell_eswt_app_pane_ParamLimits

0xcae7,	// (0x0003e6bb) cell_eswt_app_pane

0xcb17,	// (0x0003e6eb) cell_eswt_app_pane_g1_ParamLimits

0xcb17,	// (0x0003e6eb) cell_eswt_app_pane_g1

0xcb46,	// (0x0003e71a) cell_eswt_app_pane_g2_ParamLimits

0xcb46,	// (0x0003e71a) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x000417df) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x000417df) cell_eswt_app_pane_g

0xcb6a,	// (0x0003e73e) cell_eswt_app_pane_t1_ParamLimits

0xcb6a,	// (0x0003e73e) cell_eswt_app_pane_t1

0xcb9c,	// (0x0003e770) grid_highlight_pane_cp70_ParamLimits

0xcb9c,	// (0x0003e770) grid_highlight_pane_cp70

0x2ba6,	// (0x0003477a) set_content_pane_g1

0x758a,	// (0x0003915e) status_small_volume_pane

0x89e4,	// (0x0003a5b8) status_small_volume_pane_g1

0x89ec,	// (0x0003a5c0) volume_small2_pane

0x89f5,	// (0x0003a5c9) volume_small2_pane_g1

0x89fe,	// (0x0003a5d2) volume_small2_pane_g2

0x8a07,	// (0x0003a5db) volume_small2_pane_g3

0x8a10,	// (0x0003a5e4) volume_small2_pane_g4

0x8a19,	// (0x0003a5ed) volume_small2_pane_g5

0x8a22,	// (0x0003a5f6) volume_small2_pane_g6

0x8a2b,	// (0x0003a5ff) volume_small2_pane_g7

0x8a34,	// (0x0003a608) volume_small2_pane_g8

0x8a3d,	// (0x0003a611) volume_small2_pane_g9

0x8a46,	// (0x0003a61a) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x000417e4) volume_small2_pane_g

0xc3fc,	// (0x0003dfd0) fep_vkb_top_text_pane_g1_ParamLimits

0xc417,	// (0x0003dfeb) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a6,	// (0x0003e27a) popup_preview_fixed_window_g3_ParamLimits

0xc6a6,	// (0x0003e27a) popup_preview_fixed_window_g3

0x7c36,	// (0x0003980a) popup_toolbar_trans_pane

0xadda,	// (0x0003c9ae) aid_height_set_list_ParamLimits

0xadeb,	// (0x0003c9bf) aid_size_parent_ParamLimits

0x2532,	// (0x00034106) list_highlight_pane_cp2_ParamLimits

0x2ba6,	// (0x0003477a) set_content_pane_g1_ParamLimits

0xafd1,	// (0x0003cba5) list_single_image_pane_ParamLimits

0xafd1,	// (0x0003cba5) list_single_image_pane

0xcba8,	// (0x0003e77c) aid_size_cell_image_ParamLimits

0xcba8,	// (0x0003e77c) aid_size_cell_image

0xcbb5,	// (0x0003e789) grid_single_image_pane_ParamLimits

0xcbb5,	// (0x0003e789) grid_single_image_pane

0x2e7c,	// (0x00034a50) list_single_image_pane_g1_ParamLimits

0x2e7c,	// (0x00034a50) list_single_image_pane_g1

0xcbc1,	// (0x0003e795) list_single_image_pane_g2_ParamLimits

0xcbc1,	// (0x0003e795) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x000417f9) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x000417f9) list_single_image_pane_g

0xcbd5,	// (0x0003e7a9) list_single_image_pane_t1_ParamLimits

0xcbd5,	// (0x0003e7a9) list_single_image_pane_t1

0xcbeb,	// (0x0003e7bf) cell_image_list_pane_ParamLimits

0xcbeb,	// (0x0003e7bf) cell_image_list_pane

0xcbff,	// (0x0003e7d3) cell_image_list_pane_g1

0xcc08,	// (0x0003e7dc) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x000417fe) cell_image_list_pane_g

0xcc11,	// (0x0003e7e5) aid_size_cell_tb_trans_pane

0x23f0,	// (0x00033fc4) bg_tb_trans_pane

0xcc23,	// (0x0003e7f7) grid_tb_trans_pane

0x9a10,	// (0x0003b5e4) bg_tb_trans_pane_g1

0x9a20,	// (0x0003b5f4) bg_tb_trans_pane_g2

0x9a18,	// (0x0003b5ec) bg_tb_trans_pane_g3

0x9a30,	// (0x0003b604) bg_tb_trans_pane_g4

0x9a28,	// (0x0003b5fc) bg_tb_trans_pane_g5

0x9a50,	// (0x0003b624) bg_tb_trans_pane_g6

0x9a48,	// (0x0003b61c) bg_tb_trans_pane_g7

0x9a38,	// (0x0003b60c) bg_tb_trans_pane_g8

0x9a40,	// (0x0003b614) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x00041803) bg_tb_trans_pane_g

0xcc37,	// (0x0003e80b) cell_toolbar_trans_pane_ParamLimits

0xcc37,	// (0x0003e80b) cell_toolbar_trans_pane

0xc044,	// (0x0003dc18) cell_toolbar_trans_pane_g1

0xbc0f,	// (0x0003d7e3) list_form2_midp_pane_t1

0xbc1d,	// (0x0003d7f1) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x000416a0) list_form2_midp_pane_t

0xbc2b,	// (0x0003d7ff) scroll_pane_cp51_ParamLimits

0xbde7,	// (0x0003d9bb) form2_midp_wait_pane_g1

0xbdf0,	// (0x0003d9c4) form2_midp_wait_pane_g2

0xbdf9,	// (0x0003d9cd) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x000416b5) form2_midp_wait_pane_g

0x203a,	// (0x00033c0e) list_highlight_pane_cp21_ParamLimits

0xbe41,	// (0x0003da15) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe50,	// (0x0003da24) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8442,	// (0x0003a016) list_single_2graphic_im_pane_ParamLimits

0x8442,	// (0x0003a016) list_single_2graphic_im_pane

0xcc5d,	// (0x0003e831) list_single_2graphic_im_pane_g1_ParamLimits

0xcc5d,	// (0x0003e831) list_single_2graphic_im_pane_g1

0xcc6e,	// (0x0003e842) list_single_2graphic_im_pane_g2_ParamLimits

0xcc6e,	// (0x0003e842) list_single_2graphic_im_pane_g2

0xcc7a,	// (0x0003e84e) list_single_2graphic_im_pane_g3_ParamLimits

0xcc7a,	// (0x0003e84e) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x00041816) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x00041816) list_single_2graphic_im_pane_g

0xcc9a,	// (0x0003e86e) list_single_2graphic_im_pane_t1_ParamLimits

0xcc9a,	// (0x0003e86e) list_single_2graphic_im_pane_t1

0xc6b2,	// (0x0003e286) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6b2,	// (0x0003e286) list_single_graphic_2heading_pane_fp

0x4c3e,	// (0x00036812) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c3e,	// (0x00036812) list_single_graphic_2heading_pane_fp_g1

0xc6c8,	// (0x0003e29c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c8,	// (0x0003e29c) list_single_graphic_2heading_pane_fp_g2

0x4624,	// (0x000361f8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4624,	// (0x000361f8) list_single_graphic_2heading_pane_fp_g3

0x4c13,	// (0x000367e7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c13,	// (0x000367e7) list_single_graphic_2heading_pane_fp_g4

0xc6d4,	// (0x0003e2a8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d4,	// (0x0003e2a8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0004173d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0004173d) list_single_graphic_2heading_pane_fp_g

0x4dcc,	// (0x000369a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4dcc,	// (0x000369a0) list_single_graphic_2heading_pane_fp_t1

0x4c76,	// (0x0003684a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c76,	// (0x0003684a) list_single_graphic_2heading_pane_fp_t2

0x4de2,	// (0x000369b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4de2,	// (0x000369b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x0004181f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x0004181f) list_single_graphic_2heading_pane_fp_t

0xc0d0,	// (0x0003dca4) fep_hwr_write_pane_g5_ParamLimits

0xc0d0,	// (0x0003dca4) fep_hwr_write_pane_g5

0xc0dc,	// (0x0003dcb0) fep_hwr_write_pane_g6_ParamLimits

0xc0dc,	// (0x0003dcb0) fep_hwr_write_pane_g6

0xc992,	// (0x0003e566) eswt_shell_pane_ParamLimits

0x9a9c,	// (0x0003b670) bg_popup_window_pane_cp18_ParamLimits

0xad33,	// (0x0003c907) heading_pane_cp70

0xcabc,	// (0x0003e690) popup_eswt_tasktip_window_t1_ParamLimits

0x7d55,	// (0x00039929) aid_touch_tab_arrow_left

0x7d64,	// (0x00039938) aid_touch_tab_arrow_right

0x610c,	// (0x00037ce0) title_pane_g3_ParamLimits

0x610c,	// (0x00037ce0) title_pane_g3

0x23b8,	// (0x00033f8c) set_value_pane_g1

0x7c36,	// (0x0003980a) popup_toolbar_trans_pane_ParamLimits

0xcc11,	// (0x0003e7e5) aid_size_cell_tb_trans_pane_ParamLimits

0x23f0,	// (0x00033fc4) bg_tb_trans_pane_ParamLimits

0xcc23,	// (0x0003e7f7) grid_tb_trans_pane_ParamLimits

0x2164,	// (0x00033d38) cont_note_pane_ParamLimits

0x2164,	// (0x00033d38) cont_note_pane

0x22e4,	// (0x00033eb8) cont_snote2_single_text_pane_ParamLimits

0x22e4,	// (0x00033eb8) cont_snote2_single_text_pane

0x22e4,	// (0x00033eb8) cont_snote2_single_graphic_pane_ParamLimits

0x22e4,	// (0x00033eb8) cont_snote2_single_graphic_pane

0xa0b6,	// (0x0003bc8a) cont_note_wait_pane_ParamLimits

0xa0b6,	// (0x0003bc8a) cont_note_wait_pane

0xa0b6,	// (0x0003bc8a) cont_note_image_pane_ParamLimits

0xa0b6,	// (0x0003bc8a) cont_note_image_pane

0xcccb,	// (0x0003e89f) popup_note2_window_g1_ParamLimits

0xcccb,	// (0x0003e89f) popup_note2_window_g1

0xccfc,	// (0x0003e8d0) popup_note2_window_t1_ParamLimits

0xccfc,	// (0x0003e8d0) popup_note2_window_t1

0xcd41,	// (0x0003e915) popup_note2_window_t2_ParamLimits

0xcd41,	// (0x0003e915) popup_note2_window_t2

0xcd86,	// (0x0003e95a) popup_note2_window_t3_ParamLimits

0xcd86,	// (0x0003e95a) popup_note2_window_t3

0xcdcb,	// (0x0003e99f) popup_note2_window_t4_ParamLimits

0xcdcb,	// (0x0003e99f) popup_note2_window_t4

0x21e8,	// (0x00033dbc) popup_note2_window_t5_ParamLimits

0x21e8,	// (0x00033dbc) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0004182b) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0004182b) popup_note2_window_t

0xcdfa,	// (0x0003e9ce) popup_note2_image_window_g1_ParamLimits

0xcdfa,	// (0x0003e9ce) popup_note2_image_window_g1

0xce06,	// (0x0003e9da) popup_note2_image_window_g2_ParamLimits

0xce06,	// (0x0003e9da) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x00041836) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x00041836) popup_note2_image_window_g

0xce18,	// (0x0003e9ec) popup_note2_image_window_t1_ParamLimits

0xce18,	// (0x0003e9ec) popup_note2_image_window_t1

0xce30,	// (0x0003ea04) popup_note2_image_window_t2_ParamLimits

0xce30,	// (0x0003ea04) popup_note2_image_window_t2

0xce48,	// (0x0003ea1c) popup_note2_image_window_t3_ParamLimits

0xce48,	// (0x0003ea1c) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0004183b) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0004183b) popup_note2_image_window_t

0xa0c4,	// (0x0003bc98) popup_note2_wait_window_g1_ParamLimits

0xa0c4,	// (0x0003bc98) popup_note2_wait_window_g1

0xa0d0,	// (0x0003bca4) popup_note2_wait_window_g2_ParamLimits

0xa0d0,	// (0x0003bca4) popup_note2_wait_window_g2

0xa0dc,	// (0x0003bcb0) popup_note2_wait_window_g3_ParamLimits

0xa0dc,	// (0x0003bcb0) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x000413e3) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x000413e3) popup_note2_wait_window_g

0xce64,	// (0x0003ea38) popup_note2_wait_window_t1_ParamLimits

0xce64,	// (0x0003ea38) popup_note2_wait_window_t1

0xce82,	// (0x0003ea56) popup_note2_wait_window_t2_ParamLimits

0xce82,	// (0x0003ea56) popup_note2_wait_window_t2

0xcea0,	// (0x0003ea74) popup_note2_wait_window_t3_ParamLimits

0xcea0,	// (0x0003ea74) popup_note2_wait_window_t3

0xceb2,	// (0x0003ea86) popup_note2_wait_window_t4_ParamLimits

0xceb2,	// (0x0003ea86) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x00041842) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x00041842) popup_note2_wait_window_t

0xcec4,	// (0x0003ea98) wait_bar2_pane_ParamLimits

0xcec4,	// (0x0003ea98) wait_bar2_pane

0xcedc,	// (0x0003eab0) popup_snote2_single_text_window_g1_ParamLimits

0xcedc,	// (0x0003eab0) popup_snote2_single_text_window_g1

0xcf04,	// (0x0003ead8) popup_snote2_single_text_window_t1_ParamLimits

0xcf04,	// (0x0003ead8) popup_snote2_single_text_window_t1

0xcf50,	// (0x0003eb24) popup_snote2_single_text_window_t2_ParamLimits

0xcf50,	// (0x0003eb24) popup_snote2_single_text_window_t2

0xcf9c,	// (0x0003eb70) popup_snote2_single_text_window_t3_ParamLimits

0xcf9c,	// (0x0003eb70) popup_snote2_single_text_window_t3

0xcfdd,	// (0x0003ebb1) popup_snote2_single_text_window_t4_ParamLimits

0xcfdd,	// (0x0003ebb1) popup_snote2_single_text_window_t4

0xd013,	// (0x0003ebe7) popup_snote2_single_text_window_t5_ParamLimits

0xd013,	// (0x0003ebe7) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0004184b) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0004184b) popup_snote2_single_text_window_t

0xd03e,	// (0x0003ec12) popup_snote2_single_graphic_window_g1_ParamLimits

0xd03e,	// (0x0003ec12) popup_snote2_single_graphic_window_g1

0xd066,	// (0x0003ec3a) popup_snote2_single_graphic_window_g2_ParamLimits

0xd066,	// (0x0003ec3a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x00041856) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x00041856) popup_snote2_single_graphic_window_g

0xd08e,	// (0x0003ec62) popup_snote2_single_graphic_window_t1_ParamLimits

0xd08e,	// (0x0003ec62) popup_snote2_single_graphic_window_t1

0xd0da,	// (0x0003ecae) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0da,	// (0x0003ecae) popup_snote2_single_graphic_window_t2

0xcf9c,	// (0x0003eb70) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf9c,	// (0x0003eb70) popup_snote2_single_graphic_window_t3

0xcfdd,	// (0x0003ebb1) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfdd,	// (0x0003ebb1) popup_snote2_single_graphic_window_t4

0xd013,	// (0x0003ebe7) popup_snote2_single_graphic_window_t5_ParamLimits

0xd013,	// (0x0003ebe7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0004185b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0004185b) popup_snote2_single_graphic_window_t

0xbae8,	// (0x0003d6bc) clock_nsta_pane_cp2_t1

0xbae8,	// (0x0003d6bc) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x00041676) clock_nsta_pane_cp2_t

0x69ff,	// (0x000385d3) form_field_data_wide_pane_g1_ParamLimits

0x23fe,	// (0x00033fd2) form_field_data_wide_pane_g2_ParamLimits

0x23fe,	// (0x00033fd2) form_field_data_wide_pane_g2

0x240a,	// (0x00033fde) form_field_data_wide_pane_g3_ParamLimits

0x240a,	// (0x00033fde) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0004121b) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0004121b) form_field_data_wide_pane_g

0xb9c4,	// (0x0003d598) grid_touch_3_pane_ParamLimits

0xb9c4,	// (0x0003d598) grid_touch_3_pane

0xd126,	// (0x0003ecfa) cell_touch_3_pane_ParamLimits

0xd126,	// (0x0003ecfa) cell_touch_3_pane

0xc044,	// (0x0003dc18) cell_touch_3_pane_g1

0xc044,	// (0x0003dc18) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x000416fb) cell_touch_3_pane_g

0x221a,	// (0x00033dee) cont_query_data_pane

0x2222,	// (0x00033df6) cont_query_data_pane_cp1

0xd154,	// (0x0003ed28) button_value_adjust_pane_cp7

0xd15c,	// (0x0003ed30) query_popup_pane_cp3

0x28a3,	// (0x00034477) bg_popup_sub_pane_cp22_ParamLimits

0x7065,	// (0x00038c39) navi_navi_volume_pane_cp2

0x707d,	// (0x00038c51) popup_side_volume_key_window_g2

0x7089,	// (0x00038c5d) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x000412b1) popup_side_volume_key_window_g

0x70a3,	// (0x00038c77) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x000412b8) popup_side_volume_key_window_t

0x731d,	// (0x00038ef1) popup_side_volume_key_window_ParamLimits

0x67f5,	// (0x000383c9) list_double_graphic_pane_g4_ParamLimits

0x67f5,	// (0x000383c9) list_double_graphic_pane_g4

0x8487,	// (0x0003a05b) list_single_2heading_msg_pane_ParamLimits

0x8487,	// (0x0003a05b) list_single_2heading_msg_pane

0x8a4f,	// (0x0003a623) list_single_2heading_msg_pane_g1_ParamLimits

0x8a4f,	// (0x0003a623) list_single_2heading_msg_pane_g1

0x455f,	// (0x00036133) list_single_2heading_msg_pane_g2_ParamLimits

0x455f,	// (0x00036133) list_single_2heading_msg_pane_g2

0x4994,	// (0x00036568) list_single_2heading_msg_pane_g3_ParamLimits

0x4994,	// (0x00036568) list_single_2heading_msg_pane_g3

0x4e02,	// (0x000369d6) list_single_2heading_msg_pane_g4_ParamLimits

0x4e02,	// (0x000369d6) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x00041866) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x00041866) list_single_2heading_msg_pane_g

0x8a5b,	// (0x0003a62f) list_single_2heading_msg_pane_t1_ParamLimits

0x8a5b,	// (0x0003a62f) list_single_2heading_msg_pane_t1

0x8a83,	// (0x0003a657) list_single_2heading_msg_pane_t2_ParamLimits

0x8a83,	// (0x0003a657) list_single_2heading_msg_pane_t2

0x8ab7,	// (0x0003a68b) list_single_2heading_msg_pane_t3_ParamLimits

0x8ab7,	// (0x0003a68b) list_single_2heading_msg_pane_t3

0x4e1a,	// (0x000369ee) list_single_2heading_msg_pane_t4_ParamLimits

0x4e1a,	// (0x000369ee) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0004186f) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0004186f) list_single_2heading_msg_pane_t

0x1fe8,	// (0x00033bbc) title_pane_g4_ParamLimits

0x1fe8,	// (0x00033bbc) title_pane_g4

0x6ca8,	// (0x0003887c) title_pane_stacon_g3_ParamLimits

0x6ca8,	// (0x0003887c) title_pane_stacon_g3

0xcc8e,	// (0x0003e862) list_single_2graphic_im_pane_g4_ParamLimits

0xcc8e,	// (0x0003e862) list_single_2graphic_im_pane_g4

0xaafd,	// (0x0003c6d1) popup_side_volume_key_window_cp

0xb31a,	// (0x0003ceee) main_idle_act2_pane_t1

0x8056,	// (0x00039c2a) toolbar_button_pane_g10

0x66c7,	// (0x0003829b) popup_toolbar_window_cp1

0xbad9,	// (0x0003d6ad) clock_nsta_pane_cp_t1

0xbad9,	// (0x0003d6ad) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x00041671) clock_nsta_pane_cp_t

0x7065,	// (0x00038c39) navi_navi_volume_pane_cp2_ParamLimits

0x7071,	// (0x00038c45) popup_side_volume_key_window_g1_ParamLimits

0x707d,	// (0x00038c51) popup_side_volume_key_window_g2_ParamLimits

0x7089,	// (0x00038c5d) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x000412b1) popup_side_volume_key_window_g_ParamLimits

0x861a,	// (0x0003a1ee) fep_hwr_aid_pane

0x86c1,	// (0x0003a295) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0a0,	// (0x0003dc74) fep_hwr_top_pane_g1_ParamLimits

0xc0b2,	// (0x0003dc86) fep_hwr_top_pane_g2_ParamLimits

0x86e1,	// (0x0003a2b5) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x000416c6) fep_hwr_top_pane_g_ParamLimits

0x86f6,	// (0x0003a2ca) fep_hwr_top_text_pane_ParamLimits

0xa8c0,	// (0x0003c494) aid_touch_tab_arrow_arrow_2

0xa8c9,	// (0x0003c49d) aid_touch_tab_arrow_left_2

0x862e,	// (0x0003a202) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8665,	// (0x0003a239) fep_hwr_prediction_pane

0xc20b,	// (0x0003dddf) fep_vkb_prediction_pane

0xc308,	// (0x0003dedc) fep_vkb_side_pane_g3_ParamLimits

0xc308,	// (0x0003dedc) fep_vkb_side_pane_g3

0x8871,	// (0x0003a445) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x88dd,	// (0x0003a4b1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x88ea,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x00041775) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8af0,	// (0x0003a6c4) fep_hwr_prediction_pane_g1

0x8afa,	// (0x0003a6ce) fep_hwr_prediction_pane_g2

0x8b02,	// (0x0003a6d6) fep_hwr_prediction_pane_g3

0x8b0a,	// (0x0003a6de) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x00041878) fep_hwr_prediction_pane_g

0xd181,	// (0x0003ed55) fep_vkb_prediction_pane_g1

0xd18b,	// (0x0003ed5f) fep_vkb_prediction_pane_g2

0xd193,	// (0x0003ed67) fep_vkb_prediction_pane_g3

0xd19b,	// (0x0003ed6f) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x00041881) fep_vkb_prediction_pane_g

0x8389,	// (0x00039f5d) slider_set_pane_g3

0x839d,	// (0x00039f71) slider_set_pane_g4

0x83b5,	// (0x00039f89) slider_set_pane_g5

0x8389,	// (0x00039f5d) slider_set_pane_g6

0x83cb,	// (0x00039f9f) slider_set_pane_g7

0xaf4c,	// (0x0003cb20) slider_form_pane_g3

0xaf55,	// (0x0003cb29) slider_form_pane_g4

0xaf5d,	// (0x0003cb31) slider_form_pane_g5

0xaf4c,	// (0x0003cb20) slider_form_pane_g6

0xaf65,	// (0x0003cb39) slider_form_pane_g7

0xb5c6,	// (0x0003d19a) slider_set_pane_vc_g3

0xb5cf,	// (0x0003d1a3) slider_set_pane_vc_g4

0xb5d8,	// (0x0003d1ac) slider_set_pane_vc_g5

0xb5c6,	// (0x0003d19a) slider_set_pane_vc_g6

0xb5e1,	// (0x0003d1b5) slider_set_pane_vc_g7

0xb797,	// (0x0003d36b) slider_form_pane_vc_g1

0xb7a0,	// (0x0003d374) slider_form_pane_vc_g2

0xb7a9,	// (0x0003d37d) slider_form_pane_vc_g3

0xb797,	// (0x0003d36b) slider_form_pane_vc_g4

0xb7b2,	// (0x0003d386) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x00041643) slider_form_pane_vc_g

0x5ea3,	// (0x00037a77) main_idle_act3_pane

0xd1a3,	// (0x0003ed77) ai3_links_pane

0xd1ac,	// (0x0003ed80) popup_ai3_data_window_ParamLimits

0xd1ac,	// (0x0003ed80) popup_ai3_data_window

0x1fca,	// (0x00033b9e) grid_ai3_links_pane

0xd1c4,	// (0x0003ed98) cell_ai3_links_pane_ParamLimits

0xd1c4,	// (0x0003ed98) cell_ai3_links_pane

0xd1dc,	// (0x0003edb0) bg_popup_sub_pane_cp11

0xd1e9,	// (0x0003edbd) cell_ai3_links_pane_g1

0x1fca,	// (0x00033b9e) bg_popup_sub_pane_cp12

0xd20e,	// (0x0003ede2) heading_ai3_data_pane

0xd216,	// (0x0003edea) list_ai3_gene_pane

0xd222,	// (0x0003edf6) popup_ai3_data_window_g1

0xd22a,	// (0x0003edfe) heading_ai3_data_pane_g1

0xd232,	// (0x0003ee06) heading_ai3_data_pane_t1

0xd240,	// (0x0003ee14) list_double_ai3_gene_pane_ParamLimits

0xd240,	// (0x0003ee14) list_double_ai3_gene_pane

0xd24d,	// (0x0003ee21) list_single_ai3_gene_pane_ParamLimits

0xd24d,	// (0x0003ee21) list_single_ai3_gene_pane

0xc009,	// (0x0003dbdd) list_highlight_pane_cp7_ParamLimits

0xc009,	// (0x0003dbdd) list_highlight_pane_cp7

0xd25a,	// (0x0003ee2e) list_single_a13_gene_pane_t1_ParamLimits

0xd25a,	// (0x0003ee2e) list_single_a13_gene_pane_t1

0xd271,	// (0x0003ee45) list_single_ai3_gene_pane_g1

0xd27a,	// (0x0003ee4e) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0004188a) list_single_ai3_gene_pane_g

0xd282,	// (0x0003ee56) list_double_ai3_gene_pane_g1_ParamLimits

0xd282,	// (0x0003ee56) list_double_ai3_gene_pane_g1

0xd28e,	// (0x0003ee62) list_double_ai3_gene_pane_t1_ParamLimits

0xd28e,	// (0x0003ee62) list_double_ai3_gene_pane_t1

0xd2aa,	// (0x0003ee7e) list_double_ai3_gene_pane_t2_ParamLimits

0xd2aa,	// (0x0003ee7e) list_double_ai3_gene_pane_t2

0xd2bf,	// (0x0003ee93) list_double_ai3_gene_pane_t3_ParamLimits

0xd2bf,	// (0x0003ee93) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x0004188f) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x0004188f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4df8,	// (0x000369cc) aid_size_min_col_2

0xd16d,	// (0x0003ed41) aid_size_min_msg_ParamLimits

0xd16d,	// (0x0003ed41) aid_size_min_msg

0xc408,	// (0x0003dfdc) fep_vkb_top_text_pane_g2_ParamLimits

0xc408,	// (0x0003dfdc) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x000416f6) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x000416f6) fep_vkb_top_text_pane_g

0x5ea3,	// (0x00037a77) main_hc_apps_shell_pane

0xd2dc,	// (0x0003eeb0) grid_hc_apps_pane_ParamLimits

0xd2dc,	// (0x0003eeb0) grid_hc_apps_pane

0xd2ee,	// (0x0003eec2) list_hc_apps_pane

0xd2f6,	// (0x0003eeca) scroll_pane_cp37_ParamLimits

0xd2f6,	// (0x0003eeca) scroll_pane_cp37

0xd302,	// (0x0003eed6) cell_hc_apps_pane_ParamLimits

0xd302,	// (0x0003eed6) cell_hc_apps_pane

0xd3b0,	// (0x0003ef84) cell_hc_apps_pane_g1_ParamLimits

0xd3b0,	// (0x0003ef84) cell_hc_apps_pane_g1

0xd3e0,	// (0x0003efb4) cell_hc_apps_pane_g2_ParamLimits

0xd3e0,	// (0x0003efb4) cell_hc_apps_pane_g2

0xd3fc,	// (0x0003efd0) cell_hc_apps_pane_g3_ParamLimits

0xd3fc,	// (0x0003efd0) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x00041896) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x00041896) cell_hc_apps_pane_g

0xd41e,	// (0x0003eff2) cell_hc_apps_pane_t1_ParamLimits

0xd41e,	// (0x0003eff2) cell_hc_apps_pane_t1

0x2164,	// (0x00033d38) grid_highlight_pane_cp10_ParamLimits

0x2164,	// (0x00033d38) grid_highlight_pane_cp10

0xd45e,	// (0x0003f032) list_single_hc_apps_pane_ParamLimits

0xd45e,	// (0x0003f032) list_single_hc_apps_pane

0xd4c1,	// (0x0003f095) list_single_hc_apps_pane_g1

0x8b12,	// (0x0003a6e6) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0004189d) list_single_hc_apps_pane_g

0x8b2b,	// (0x0003a6ff) list_single_hc_apps_pane_g2_copy1

0x8b47,	// (0x0003a71b) list_single_hc_apps_pane_t1

0x203a,	// (0x00033c0e) bg_set_opt_pane_cp_ParamLimits

0x61bc,	// (0x00037d90) setting_slider_pane_t1_ParamLimits

0x61d5,	// (0x00037da9) setting_slider_pane_t2_ParamLimits

0x61ef,	// (0x00037dc3) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004110d) setting_slider_pane_t_ParamLimits

0x6207,	// (0x00037ddb) slider_set_pane_ParamLimits

0x7608,	// (0x000391dc) control_pane_g5_ParamLimits

0x7608,	// (0x000391dc) control_pane_g5

0xad9f,	// (0x0003c973) slider_set_pane_g1_ParamLimits

0x837d,	// (0x00039f51) slider_set_pane_g2_ParamLimits

0x8389,	// (0x00039f5d) slider_set_pane_g3_ParamLimits

0x839d,	// (0x00039f71) slider_set_pane_g4_ParamLimits

0x83b5,	// (0x00039f89) slider_set_pane_g5_ParamLimits

0x8389,	// (0x00039f5d) slider_set_pane_g6_ParamLimits

0x83cb,	// (0x00039f9f) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x000414ff) slider_set_pane_g_ParamLimits

0x2b51,	// (0x00034725) navi_icon_text_pane_ParamLimits

0x7d16,	// (0x000398ea) aid_fill_nsta_2_ParamLimits

0x7d55,	// (0x00039929) aid_touch_tab_arrow_left_ParamLimits

0x7d64,	// (0x00039938) aid_touch_tab_arrow_right_ParamLimits

0x7dd1,	// (0x000399a5) clock_nsta_pane_ParamLimits

0xa8a2,	// (0x0003c476) navi_icon_pane_g1_ParamLimits

0xa8ae,	// (0x0003c482) navi_text_pane_t1_ParamLimits

0xbbe9,	// (0x0003d7bd) navi_icon_text_pane_g1_ParamLimits

0xbbf5,	// (0x0003d7c9) navi_icon_text_pane_t1_ParamLimits

0xd4c1,	// (0x0003f095) list_single_hc_apps_pane_g1_ParamLimits

0x8b12,	// (0x0003a6e6) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0004189d) list_single_hc_apps_pane_g_ParamLimits

0x8b2b,	// (0x0003a6ff) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8b47,	// (0x0003a71b) list_single_hc_apps_pane_t1_ParamLimits

0x6000,	// (0x00037bd4) popup_toolbar2_fixed_window_ParamLimits

0x6000,	// (0x00037bd4) popup_toolbar2_fixed_window

0x7c2c,	// (0x00039800) popup_toolbar2_float_window

0x1fca,	// (0x00033b9e) bg_popup_sub_pane_cp27

0xd4da,	// (0x0003f0ae) grid_toolbar2_float_pane

0x1fca,	// (0x00033b9e) bg_popup_sub_pane_cp26

0xd4da,	// (0x0003f0ae) grid_toolbar2_fixed_pane

0xd4e2,	// (0x0003f0b6) cell_toolbar2_fixed_pane_ParamLimits

0xd4e2,	// (0x0003f0b6) cell_toolbar2_fixed_pane

0xd4f2,	// (0x0003f0c6) cell_toolbar2_fixed_pane_g1

0x7afe,	// (0x000396d2) toolbar2_fixed_button_pane

0x9a10,	// (0x0003b5e4) toolbar2_fixed_button_pane_g1

0x9a20,	// (0x0003b5f4) toolbar2_fixed_button_pane_g2

0x9a18,	// (0x0003b5ec) toolbar2_fixed_button_pane_g3

0x9a30,	// (0x0003b604) toolbar2_fixed_button_pane_g4

0x9a28,	// (0x0003b5fc) toolbar2_fixed_button_pane_g5

0x9a38,	// (0x0003b60c) toolbar2_fixed_button_pane_g6

0x9a40,	// (0x0003b614) toolbar2_fixed_button_pane_g7

0x9a50,	// (0x0003b624) toolbar2_fixed_button_pane_g8

0x9a48,	// (0x0003b61c) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00041401) toolbar2_fixed_button_pane_g

0xd4fb,	// (0x0003f0cf) cell_toolbar2_float_pane_ParamLimits

0xd4fb,	// (0x0003f0cf) cell_toolbar2_float_pane

0xd50c,	// (0x0003f0e0) cell_toolbar2_float_pane_g1

0x7afe,	// (0x000396d2) toolbar2_fixed_button_pane_cp

0xc172,	// (0x0003dd46) fep_vkb_accented_list_pane_ParamLimits

0xc172,	// (0x0003dd46) fep_vkb_accented_list_pane

0x8851,	// (0x0003a425) bg_popup_fep_shadow_pane_g9

0x2cac,	// (0x00034880) bg_popup_fep_shadow_pane_cp3

0x2509,	// (0x000340dd) list_accented_list_pane

0xd515,	// (0x0003f0e9) list_single_accented_list_pane_ParamLimits

0xd515,	// (0x0003f0e9) list_single_accented_list_pane

0x2cac,	// (0x00034880) list_highlight_pane_cp10

0xd526,	// (0x0003f0fa) list_single_accented_list_pane_t1

0x7b7c,	// (0x00039750) popup_slider_window_ParamLimits

0x7b7c,	// (0x00039750) popup_slider_window

0xd164,	// (0x0003ed38) aid_indentation_list_msg

0xd5e4,	// (0x0003f1b8) bg_popup_window_pane_cp19

0xd64c,	// (0x0003f220) popup_slider_window_g1

0xd668,	// (0x0003f23c) popup_slider_window_g2

0xd684,	// (0x0003f258) popup_slider_window_g3

0x0005,

0xfcce,	// (0x000418a2) popup_slider_window_g

0xd6ea,	// (0x0003f2be) popup_slider_window_t1

0xd75e,	// (0x0003f332) small_volume_slider_vertical_pane

0xc044,	// (0x0003dc18) small_volume_slider_vertical_pane_g1

0xc044,	// (0x0003dc18) small_volume_slider_vertical_pane_g2

0xd77a,	// (0x0003f34e) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x000418b4) small_volume_slider_vertical_pane_g

0x5dc6,	// (0x0003799a) area_side_right_pane_ParamLimits

0x5dc6,	// (0x0003799a) area_side_right_pane

0x8b75,	// (0x0003a749) aid_size_side_button_ParamLimits

0x8b75,	// (0x0003a749) aid_size_side_button

0x8b89,	// (0x0003a75d) grid_sctrl_middle_pane_ParamLimits

0x8b89,	// (0x0003a75d) grid_sctrl_middle_pane

0x8ba8,	// (0x0003a77c) sctrl_sk_bottom_pane

0x8bb9,	// (0x0003a78d) sctrl_sk_top_pane

0x8bcb,	// (0x0003a79f) aid_touch_sctrl_top

0x8bd8,	// (0x0003a7ac) bg_sctrl_sk_pane_ParamLimits

0x8bd8,	// (0x0003a7ac) bg_sctrl_sk_pane

0x8be6,	// (0x0003a7ba) sctrl_sk_top_pane_g1

0x8bf3,	// (0x0003a7c7) sctrl_sk_top_pane_t1

0x8bcb,	// (0x0003a79f) aid_touch_sctrl_bottom

0x8bd8,	// (0x0003a7ac) bg_sctrl_sk_pane_cp_ParamLimits

0x8bd8,	// (0x0003a7ac) bg_sctrl_sk_pane_cp

0x8c0e,	// (0x0003a7e2) sctrl_sk_bottom_pane_g1

0x8bf3,	// (0x0003a7c7) sctrl_sk_bottom_pane_t1

0x8c17,	// (0x0003a7eb) cell_sctrl_middle_pane_ParamLimits

0x8c17,	// (0x0003a7eb) cell_sctrl_middle_pane

0x8c32,	// (0x0003a806) aid_touch_sctrl_middle_ParamLimits

0x8c32,	// (0x0003a806) aid_touch_sctrl_middle

0x8c44,	// (0x0003a818) bg_sctrl_middle_pane_ParamLimits

0x8c44,	// (0x0003a818) bg_sctrl_middle_pane

0x8871,	// (0x0003a445) cell_sctrl_middle_pane_g1_ParamLimits

0x8871,	// (0x0003a445) cell_sctrl_middle_pane_g1

0x8c52,	// (0x0003a826) cell_sctrl_middle_pane_g2_ParamLimits

0x8c52,	// (0x0003a826) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x000418c0) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x000418c0) cell_sctrl_middle_pane_g

0x9a10,	// (0x0003b5e4) bg_sctrl_middle_pane_g1

0x9a18,	// (0x0003b5ec) bg_sctrl_middle_pane_g2

0x9a20,	// (0x0003b5f4) bg_sctrl_middle_pane_g3

0x9a28,	// (0x0003b5fc) bg_sctrl_middle_pane_g4

0x9a30,	// (0x0003b604) bg_sctrl_middle_pane_g5

0x9a38,	// (0x0003b60c) bg_sctrl_middle_pane_g6

0x9a40,	// (0x0003b614) bg_sctrl_middle_pane_g7

0x9a48,	// (0x0003b61c) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x000418c5) bg_sctrl_middle_pane_g

0x9a50,	// (0x0003b624) bg_sctrl_middle_pane_g8_copy1

0x9a10,	// (0x0003b5e4) bg_sctrl_sk_pane_g1

0x9a20,	// (0x0003b5f4) bg_sctrl_sk_pane_g2

0x9a18,	// (0x0003b5ec) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00041401) bg_sctrl_sk_pane_g

0x2332,	// (0x00033f06) aid_size_touch_scroll_bar

0x9a30,	// (0x0003b604) bg_sctrl_sk_pane_g4

0x9a28,	// (0x0003b5fc) bg_sctrl_sk_pane_g5

0x9a38,	// (0x0003b60c) bg_sctrl_sk_pane_g6

0x9a40,	// (0x0003b614) bg_sctrl_sk_pane_g7

0x9a50,	// (0x0003b624) bg_sctrl_sk_pane_g8

0x9a48,	// (0x0003b61c) bg_sctrl_sk_pane_g9

0x77e5,	// (0x000393b9) popup_fep_china_hwr2_fs_candidate_window

0x77ef,	// (0x000393c3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x77ef,	// (0x000393c3) popup_fep_china_hwr2_fs_control_window

0x8871,	// (0x0003a445) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x000418bb) sctrl_sk_top_pane_g

0xd783,	// (0x0003f357) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd783,	// (0x0003f357) aid_fep_china_hwr2_fs_cell

0xd795,	// (0x0003f369) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd795,	// (0x0003f369) bg_popup_fep_shadow_pane_cp4

0xd7ac,	// (0x0003f380) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7ac,	// (0x0003f380) bg_popup_fep_shadow_pane_cp5

0xd7be,	// (0x0003f392) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7be,	// (0x0003f392) popup_fep_china_hwr2_fs_control_bar_grid

0xd7ce,	// (0x0003f3a2) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7d6,	// (0x0003f3aa) aid_fep_china_hwr2_fs_candi_cell

0x1fca,	// (0x00033b9e) bg_popup_fep_shadow_pane_cp6

0xd7e0,	// (0x0003f3b4) popup_fep_china_hwr2_fs_candidate_grid

0xd7ea,	// (0x0003f3be) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7ea,	// (0x0003f3be) cell_fep_china_hwr2_fs_funtion_grid

0xc044,	// (0x0003dc18) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd802,	// (0x0003f3d6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd802,	// (0x0003f3d6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd810,	// (0x0003f3e4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd810,	// (0x0003f3e4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x000418d6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x000418d6) cell_fep_china_hwr2_fs_funtion_grid_g

0xd826,	// (0x0003f3fa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd826,	// (0x0003f3fa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd83b,	// (0x0003f40f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd83b,	// (0x0003f40f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x000418db) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x000418db) cell_fep_china_hwr2_fs_funtion_grid_t

0xd857,	// (0x0003f42b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd85f,	// (0x0003f433) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd867,	// (0x0003f43b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x000418e0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd86f,	// (0x0003f443) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd86f,	// (0x0003f443) cell_fep_china_hwr2_fs_candidate_grid

0xd888,	// (0x0003f45c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd890,	// (0x0003f464) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc044,	// (0x0003dc18) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc044,	// (0x0003dc18) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x000416fb) cell_fep_china_hwr2_fs_candidate_grid_g

0xd898,	// (0x0003f46c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7de4,	// (0x000399b8) clock_nsta_pane_cp_24_ParamLimits

0x7de4,	// (0x000399b8) clock_nsta_pane_cp_24

0x7e62,	// (0x00039a36) indicator_nsta_pane_cp_24_ParamLimits

0x7e62,	// (0x00039a36) indicator_nsta_pane_cp_24

0xa71e,	// (0x0003c2f2) heading_pane_g1

0x0001,

0xf892,	// (0x00041466) heading_pane_g

0xb163,	// (0x0003cd37) grid_sct_catagory_button_pane

0xb193,	// (0x0003cd67) scroll_pane_cp5_ParamLimits

0xbc37,	// (0x0003d80b) button_value_adjust_pane_cp5_ParamLimits

0xbc37,	// (0x0003d80b) button_value_adjust_pane_cp5

0xbd16,	// (0x0003d8ea) form2_midp_time_pane_ParamLimits

0xd8a6,	// (0x0003f47a) cell_sct_catagory_button_pane_ParamLimits

0xd8a6,	// (0x0003f47a) cell_sct_catagory_button_pane

0xc009,	// (0x0003dbdd) bg_button_pane_cp01_ParamLimits

0xc009,	// (0x0003dbdd) bg_button_pane_cp01

0xc044,	// (0x0003dc18) cell_sct_catagory_button_pane_g1

0x7bbb,	// (0x0003978f) popup_tb_extension_window

0xd8b8,	// (0x0003f48c) aid_size_cell_ext_ParamLimits

0xd8b8,	// (0x0003f48c) aid_size_cell_ext

0x2164,	// (0x00033d38) bg_tb_trans_pane_cp1_ParamLimits

0x2164,	// (0x00033d38) bg_tb_trans_pane_cp1

0xd8d8,	// (0x0003f4ac) grid_tb_ext_pane_ParamLimits

0xd8d8,	// (0x0003f4ac) grid_tb_ext_pane

0xd908,	// (0x0003f4dc) cell_tb_ext_pane_ParamLimits

0xd908,	// (0x0003f4dc) cell_tb_ext_pane

0xd91f,	// (0x0003f4f3) cell_tb_ext_pane_g1_ParamLimits

0xd91f,	// (0x0003f4f3) cell_tb_ext_pane_g1

0xd93c,	// (0x0003f510) cell_tb_ext_pane_t1

0x2164,	// (0x00033d38) list_highlight_pane_cp11_ParamLimits

0x2164,	// (0x00033d38) list_highlight_pane_cp11

0x601f,	// (0x00037bf3) popup_uni_indicator_window_ParamLimits

0x601f,	// (0x00037bf3) popup_uni_indicator_window

0x23f0,	// (0x00033fc4) bg_popup_sub_pane_cp14

0xd958,	// (0x0003f52c) list_uniindi_pane

0xd964,	// (0x0003f538) uniindi_top_pane

0x2164,	// (0x00033d38) bg_uniindi_top_pane

0xd983,	// (0x0003f557) uniindi_top_pane_g1

0xd999,	// (0x0003f56d) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x000418e7) uniindi_top_pane_g

0xd9c3,	// (0x0003f597) uniindi_top_pane_t1

0xd9ed,	// (0x0003f5c1) list_single_uniindi_pane_ParamLimits

0xd9ed,	// (0x0003f5c1) list_single_uniindi_pane

0xc044,	// (0x0003dc18) bg_uniindi_top_pane_g1

0xda00,	// (0x0003f5d4) list_single_uniindi_pane_g1

0xda13,	// (0x0003f5e7) list_single_uniindi_pane_t1

0x5ea3,	// (0x00037a77) control_bg_pane

0xda38,	// (0x0003f60c) bg_sctrl_sk_pane_cp1

0xda41,	// (0x0003f615) bg_sctrl_sk_pane_cp2

0xda4a,	// (0x0003f61e) control_bg_pane_g1

0xda53,	// (0x0003f627) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x000418f0) control_bg_pane_g

0xba7d,	// (0x0003d651) cell_indicator_nsta_pane_g1_ParamLimits

0xba8b,	// (0x0003d65f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0004165f) cell_indicator_nsta_pane_g_ParamLimits

0x4c00,	// (0x000367d4) form2_midp_time_pane_t1_ParamLimits

0x774f,	// (0x00039323) main_idle_act4_pane_ParamLimits

0x774f,	// (0x00039323) main_idle_act4_pane

0x7bbb,	// (0x0003978f) popup_tb_extension_window_ParamLimits

0xd8f8,	// (0x0003f4cc) tb_ext_find_pane_ParamLimits

0xd8f8,	// (0x0003f4cc) tb_ext_find_pane

0xda5c,	// (0x0003f630) ai_gene_pane_1_cp1

0x2d2d,	// (0x00034901) ai_gene_pane_2_cp1

0xda64,	// (0x0003f638) list_single_idle_plugin_calendar_pane

0xda6d,	// (0x0003f641) list_single_idle_plugin_notification_pane

0xda76,	// (0x0003f64a) list_single_idle_plugin_player_pane

0xda7f,	// (0x0003f653) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda7f,	// (0x0003f653) list_single_idle_plugin_shortcut_pane

0xdaa1,	// (0x0003f675) main_idle_act4_pane_t1

0xdab3,	// (0x0003f687) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x000418f5) main_idle_act4_pane_t

0xdac5,	// (0x0003f699) middle_sk_idle_act4_pane_ParamLimits

0xdac5,	// (0x0003f699) middle_sk_idle_act4_pane

0xdadb,	// (0x0003f6af) popup_clock_digital_analogue_window_cp2

0xdaf5,	// (0x0003f6c9) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaf5,	// (0x0003f6c9) shortcut_wheel_idle_act4_pane

0xc044,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g1

0xc044,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g2

0xc044,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g3

0xc044,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g4

0xc044,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g5

0xdb09,	// (0x0003f6dd) shortcut_wheel_idle_act4_pane_g6

0xdb11,	// (0x0003f6e5) shortcut_wheel_idle_act4_pane_g7

0xdb19,	// (0x0003f6ed) shortcut_wheel_idle_act4_pane_g8

0xdb21,	// (0x0003f6f5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x000418fa) shortcut_wheel_idle_act4_pane_g

0xc2b4,	// (0x0003de88) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b4,	// (0x0003de88) middle_sk_idle_act4_pane_g1

0xdb85,	// (0x0003f759) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb85,	// (0x0003f759) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0004191d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0004191d) middle_sk_idle_act4_pane_g

0xdb91,	// (0x0003f765) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb91,	// (0x0003f765) middle_sk_idle_act4_pane_t1

0xdbae,	// (0x0003f782) grid_ai_shortcut_pane_ParamLimits

0xdbae,	// (0x0003f782) grid_ai_shortcut_pane

0xdbc7,	// (0x0003f79b) list_highlight_pane_cp16_ParamLimits

0xdbc7,	// (0x0003f79b) list_highlight_pane_cp16

0xdbd4,	// (0x0003f7a8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbd4,	// (0x0003f7a8) list_single_idle_plugin_shortcut_pane_g1

0xdbe0,	// (0x0003f7b4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe0,	// (0x0003f7b4) list_single_idle_plugin_shortcut_pane_g2

0xdbf8,	// (0x0003f7cc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbf8,	// (0x0003f7cc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x00041922) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x00041922) list_single_idle_plugin_shortcut_pane_g

0xdc0b,	// (0x0003f7df) cell_ai_shortcut_pane_ParamLimits

0xdc0b,	// (0x0003f7df) cell_ai_shortcut_pane

0xdc2f,	// (0x0003f803) cell_ai_shortcut_pane_g1_ParamLimits

0xdc2f,	// (0x0003f803) cell_ai_shortcut_pane_g1

0xda5c,	// (0x0003f630) ai_gene_pane_1_cp2

0xdc51,	// (0x0003f825) ai_gene_pane_2_cp2

0xdc59,	// (0x0003f82d) list_highlight_pane_cp15

0xdc62,	// (0x0003f836) list_single_idle_plugin_calendar_pane_g1

0xdc59,	// (0x0003f82d) list_highlight_pane_cp17

0xdc6a,	// (0x0003f83e) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc72,	// (0x0003f846) list_single_idle_plugin_player_pane_g1

0xb3bc,	// (0x0003cf90) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x00041929) list_single_idle_plugin_player_pane_g

0xdc7a,	// (0x0003f84e) list_single_idle_plugin_player_pane_t1

0xdc88,	// (0x0003f85c) list_single_idle_plugin_player_pane_t2

0xdc96,	// (0x0003f86a) list_single_idle_plugin_player_pane_t3

0xdca4,	// (0x0003f878) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x0004192e) list_single_idle_plugin_player_pane_t

0xdcb2,	// (0x0003f886) wait_bar_pane_cp15

0xdcba,	// (0x0003f88e) grid_ai_notification_pane

0xb3bc,	// (0x0003cf90) list_single_idle_plugin_notification_pane_g1

0xdcc3,	// (0x0003f897) cell_ai_notification_pane_ParamLimits

0xdcc3,	// (0x0003f897) cell_ai_notification_pane

0xdcd0,	// (0x0003f8a4) cell_ai_notification_pane_g1

0xdcd8,	// (0x0003f8ac) cell_ai_notification_pane_t1

0xdce6,	// (0x0003f8ba) tb_ext_find_button_pane

0xdcee,	// (0x0003f8c2) tb_ext_find_pane_g1

0xdcf6,	// (0x0003f8ca) tb_ext_find_pane_t1

0x2842,	// (0x00034416) tb_ext_find_button_pane_g1

0xdd04,	// (0x0003f8d8) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x00041937) tb_ext_find_button_pane_g

0xdaa1,	// (0x0003f675) main_idle_act4_pane_t1_ParamLimits

0xdab3,	// (0x0003f687) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x000418f5) main_idle_act4_pane_t_ParamLimits

0xdadb,	// (0x0003f6af) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdae9,	// (0x0003f6bd) sat_plugin_idle_act4_pane_ParamLimits

0xdae9,	// (0x0003f6bd) sat_plugin_idle_act4_pane

0xdd0d,	// (0x0003f8e1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd0d,	// (0x0003f8e1) sat_plugin_idle_act4_pane_t1

0xdd20,	// (0x0003f8f4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd20,	// (0x0003f8f4) sat_plugin_idle_act4_pane_t2

0xdd33,	// (0x0003f907) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd33,	// (0x0003f907) sat_plugin_idle_act4_pane_t3

0xdd46,	// (0x0003f91a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd46,	// (0x0003f91a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x0004193c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x0004193c) sat_plugin_idle_act4_pane_t

0x5f68,	// (0x00037b3c) popup_battery_window_ParamLimits

0x5f68,	// (0x00037b3c) popup_battery_window

0x2164,	// (0x00033d38) bg_popup_sub_pane_cp25_ParamLimits

0x2164,	// (0x00033d38) bg_popup_sub_pane_cp25

0xdd59,	// (0x0003f92d) popup_battery_window_g1_ParamLimits

0xdd59,	// (0x0003f92d) popup_battery_window_g1

0xdd65,	// (0x0003f939) popup_battery_window_t1_ParamLimits

0xdd65,	// (0x0003f939) popup_battery_window_t1

0xdd77,	// (0x0003f94b) popup_battery_window_t2_ParamLimits

0xdd77,	// (0x0003f94b) popup_battery_window_t2

0x0001,

0xfd71,	// (0x00041945) popup_battery_window_t_ParamLimits

0xfd71,	// (0x00041945) popup_battery_window_t

0x737c,	// (0x00038f50) midp_canvas_pane_ParamLimits

0x73f5,	// (0x00038fc9) midp_keypad_pane_ParamLimits

0x73f5,	// (0x00038fc9) midp_keypad_pane

0x2532,	// (0x00034106) main_midp_pane_ParamLimits

0xbaf7,	// (0x0003d6cb) signal_pane_g2_cp_ParamLimits

0xdd94,	// (0x0003f968) aid_size_cell_midp_keypad_ParamLimits

0xdd94,	// (0x0003f968) aid_size_cell_midp_keypad

0xddae,	// (0x0003f982) midp_keyp_game_grid_pane_ParamLimits

0xddae,	// (0x0003f982) midp_keyp_game_grid_pane

0xddce,	// (0x0003f9a2) midp_keyp_rocker_pane_ParamLimits

0xddce,	// (0x0003f9a2) midp_keyp_rocker_pane

0xde07,	// (0x0003f9db) midp_keyp_sk_left_pane_ParamLimits

0xde07,	// (0x0003f9db) midp_keyp_sk_left_pane

0xde61,	// (0x0003fa35) midp_keyp_sk_right_pane_ParamLimits

0xde61,	// (0x0003fa35) midp_keyp_sk_right_pane

0x1fca,	// (0x00033b9e) bg_button_pane_cp03

0xdebb,	// (0x0003fa8f) midp_keyp_sk_left_pane_g1

0x1fca,	// (0x00033b9e) bg_button_pane_cp04

0xdebb,	// (0x0003fa8f) midp_keyp_sk_right_pane_g1

0xc044,	// (0x0003dc18) midp_keyp_rocker_pane_g1

0xdec4,	// (0x0003fa98) keyp_game_cell_pane_ParamLimits

0xdec4,	// (0x0003fa98) keyp_game_cell_pane

0x1fca,	// (0x00033b9e) bg_button_pane_cp02

0xded7,	// (0x0003faab) keyp_game_cell_pane_g1

0x5f9e,	// (0x00037b72) popup_fep_vkb2_window_ParamLimits

0x5f9e,	// (0x00037b72) popup_fep_vkb2_window

0x8c70,	// (0x0003a844) aid_size_cell_vkb2_ParamLimits

0x8c70,	// (0x0003a844) aid_size_cell_vkb2

0x8cbc,	// (0x0003a890) popup_fep_vkb2_window_g1_ParamLimits

0x8cbc,	// (0x0003a890) popup_fep_vkb2_window_g1

0x8d04,	// (0x0003a8d8) vkb2_area_bottom_pane_ParamLimits

0x8d04,	// (0x0003a8d8) vkb2_area_bottom_pane

0x8d50,	// (0x0003a924) vkb2_area_keypad_pane_ParamLimits

0x8d50,	// (0x0003a924) vkb2_area_keypad_pane

0x8d92,	// (0x0003a966) vkb2_area_top_pane_ParamLimits

0x8d92,	// (0x0003a966) vkb2_area_top_pane

0x8e11,	// (0x0003a9e5) vkb2_top_entry_pane_ParamLimits

0x8e11,	// (0x0003a9e5) vkb2_top_entry_pane

0x8e3b,	// (0x0003aa0f) vkb2_top_grid_left_pane_ParamLimits

0x8e3b,	// (0x0003aa0f) vkb2_top_grid_left_pane

0x8e5a,	// (0x0003aa2e) vkb2_top_grid_right_pane_ParamLimits

0x8e5a,	// (0x0003aa2e) vkb2_top_grid_right_pane

0x8e79,	// (0x0003aa4d) vkb2_cell_keypad_pane_ParamLimits

0x8e79,	// (0x0003aa4d) vkb2_cell_keypad_pane

0x8f4a,	// (0x0003ab1e) vkb2_area_bottom_grid_pane_ParamLimits

0x8f4a,	// (0x0003ab1e) vkb2_area_bottom_grid_pane

0x8f70,	// (0x0003ab44) vkb2_area_bottom_pane_g1_ParamLimits

0x8f70,	// (0x0003ab44) vkb2_area_bottom_pane_g1

0x8f94,	// (0x0003ab68) vkb2_area_bottom_pane_g2_ParamLimits

0x8f94,	// (0x0003ab68) vkb2_area_bottom_pane_g2

0x8fc2,	// (0x0003ab96) vkb2_area_bottom_pane_g3_ParamLimits

0x8fc2,	// (0x0003ab96) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0004194a) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0004194a) vkb2_area_bottom_pane_g

0x9023,	// (0x0003abf7) vkb2_top_cell_left_pane_ParamLimits

0x9023,	// (0x0003abf7) vkb2_top_cell_left_pane

0xdee8,	// (0x0003fabc) vkb2_top_entry_pane_g1_ParamLimits

0xdee8,	// (0x0003fabc) vkb2_top_entry_pane_g1

0xdef6,	// (0x0003faca) vkb2_top_entry_pane_t1_ParamLimits

0xdef6,	// (0x0003faca) vkb2_top_entry_pane_t1

0xdf28,	// (0x0003fafc) vkb2_top_entry_pane_t2_ParamLimits

0xdf28,	// (0x0003fafc) vkb2_top_entry_pane_t2

0xdf5a,	// (0x0003fb2e) vkb2_top_entry_pane_t3_ParamLimits

0xdf5a,	// (0x0003fb2e) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x00041951) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x00041951) vkb2_top_entry_pane_t

0x9070,	// (0x0003ac44) vkb2_top_grid_right_pane_g1_ParamLimits

0x9070,	// (0x0003ac44) vkb2_top_grid_right_pane_g1

0x9086,	// (0x0003ac5a) vkb2_top_grid_right_pane_g2_ParamLimits

0x9086,	// (0x0003ac5a) vkb2_top_grid_right_pane_g2

0x909e,	// (0x0003ac72) vkb2_top_grid_right_pane_g3_ParamLimits

0x909e,	// (0x0003ac72) vkb2_top_grid_right_pane_g3

0x90b6,	// (0x0003ac8a) vkb2_top_grid_right_pane_g4_ParamLimits

0x90b6,	// (0x0003ac8a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x00041958) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x00041958) vkb2_top_grid_right_pane_g

0x90cc,	// (0x0003aca0) vkb2_top_cell_left_pane_g1

0x90e3,	// (0x0003acb7) vkb2_cell_keypad_pane_g1_ParamLimits

0x90e3,	// (0x0003acb7) vkb2_cell_keypad_pane_g1

0xdf7e,	// (0x0003fb52) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf7e,	// (0x0003fb52) vkb2_cell_keypad_pane_t1

0x90f1,	// (0x0003acc5) vkb2_cell_bottom_grid_pane_ParamLimits

0x90f1,	// (0x0003acc5) vkb2_cell_bottom_grid_pane

0x912a,	// (0x0003acfe) vkb2_cell_bottom_grid_pane_g1

0xdb29,	// (0x0003f6fd) aid_call2_pane_cp02

0xdb31,	// (0x0003f705) aid_call_pane_cp02

0xdb39,	// (0x0003f70d) clock_digital_number_pane_cp10

0xdb41,	// (0x0003f715) clock_digital_number_pane_cp11

0xdb49,	// (0x0003f71d) clock_digital_number_pane_cp12

0xdb51,	// (0x0003f725) clock_digital_number_pane_cp13

0xdb59,	// (0x0003f72d) clock_digital_separator_pane_cp10

0x2842,	// (0x00034416) popup_clock_digital_analogue_window_cp2_g1

0x2842,	// (0x00034416) popup_clock_digital_analogue_window_cp2_g2

0xdb61,	// (0x0003f735) popup_clock_digital_analogue_window_cp2_g3

0x2842,	// (0x00034416) popup_clock_digital_analogue_window_cp2_g4

0xdb61,	// (0x0003f735) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x0004190d) popup_clock_digital_analogue_window_cp2_g

0xdb69,	// (0x0003f73d) popup_clock_digital_analogue_window_cp2_t1

0xdb77,	// (0x0003f74b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x00041918) popup_clock_digital_analogue_window_cp2_t

0xc044,	// (0x0003dc18) clock_digital_number_pane_cp10_g1

0xc044,	// (0x0003dc18) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x000416fb) clock_digital_number_pane_cp10_g

0xc044,	// (0x0003dc18) clock_digital_separator_pane_cp10_g1

0xc044,	// (0x0003dc18) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x000416fb) clock_digital_separator_pane_cp10_g

0xd9a5,	// (0x0003f579) uniindi_top_pane_g3

0xd9b6,	// (0x0003f58a) uniindi_top_pane_g4

0x8f04,	// (0x0003aad8) vkb2_row_keypad_pane_ParamLimits

0x8f04,	// (0x0003aad8) vkb2_row_keypad_pane

0x914a,	// (0x0003ad1e) vkb2_cell_t_keypad_pane_ParamLimits

0x914a,	// (0x0003ad1e) vkb2_cell_t_keypad_pane

0x915a,	// (0x0003ad2e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x915a,	// (0x0003ad2e) vkb2_cell_t_keypad_pane_cp08

0x916d,	// (0x0003ad41) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x916d,	// (0x0003ad41) vkb2_cell_t_keypad_pane_cp09

0x9181,	// (0x0003ad55) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9181,	// (0x0003ad55) vkb2_cell_t_keypad_pane_cp01

0x9192,	// (0x0003ad66) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9192,	// (0x0003ad66) vkb2_cell_t_keypad_pane_cp02

0x91a3,	// (0x0003ad77) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91a3,	// (0x0003ad77) vkb2_cell_t_keypad_pane_cp03

0x91b4,	// (0x0003ad88) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91b4,	// (0x0003ad88) vkb2_cell_t_keypad_pane_cp04

0x91c5,	// (0x0003ad99) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91c5,	// (0x0003ad99) vkb2_cell_t_keypad_pane_cp05

0x91d6,	// (0x0003adaa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91d6,	// (0x0003adaa) vkb2_cell_t_keypad_pane_cp06

0x91e7,	// (0x0003adbb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91e7,	// (0x0003adbb) vkb2_cell_t_keypad_pane_cp07

0x91f8,	// (0x0003adcc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91f8,	// (0x0003adcc) vkb2_cell_t_keypad_pane_cp10

0x8871,	// (0x0003a445) vkb2_cell_t_keypad_pane_g1

0xdf95,	// (0x0003fb69) vkb2_cell_t_keypad_pane_t1

0x5ea3,	// (0x00037a77) popup_grid_graphic2_window

0xdfa7,	// (0x0003fb7b) aid_size_cell_graphic2_ParamLimits

0xdfa7,	// (0x0003fb7b) aid_size_cell_graphic2

0xdfdf,	// (0x0003fbb3) bg_popup_window_pane_cp21_ParamLimits

0xdfdf,	// (0x0003fbb3) bg_popup_window_pane_cp21

0xdfed,	// (0x0003fbc1) graphic2_pages_pane_ParamLimits

0xdfed,	// (0x0003fbc1) graphic2_pages_pane

0xe033,	// (0x0003fc07) grid_graphic2_control_pane_ParamLimits

0xe033,	// (0x0003fc07) grid_graphic2_control_pane

0xe071,	// (0x0003fc45) grid_graphic2_pane_ParamLimits

0xe071,	// (0x0003fc45) grid_graphic2_pane

0xe0e5,	// (0x0003fcb9) cell_graphic2_pane

0x5ea3,	// (0x00037a77) main_comp_mode_pane

0xd216,	// (0x0003edea) list_ai3_gene_pane_ParamLimits

0xd5e4,	// (0x0003f1b8) bg_popup_window_pane_cp19_ParamLimits

0xd5f0,	// (0x0003f1c4) bg_touch_area_indi_pane_ParamLimits

0xd5f0,	// (0x0003f1c4) bg_touch_area_indi_pane

0xd606,	// (0x0003f1da) bg_touch_area_indi_pane_cp01_ParamLimits

0xd606,	// (0x0003f1da) bg_touch_area_indi_pane_cp01

0xd61c,	// (0x0003f1f0) bg_touch_area_indi_pane_cp02_ParamLimits

0xd61c,	// (0x0003f1f0) bg_touch_area_indi_pane_cp02

0xd632,	// (0x0003f206) bg_touch_area_indi_pane_cp03_ParamLimits

0xd632,	// (0x0003f206) bg_touch_area_indi_pane_cp03

0xd64c,	// (0x0003f220) popup_slider_window_g1_ParamLimits

0xd668,	// (0x0003f23c) popup_slider_window_g2_ParamLimits

0xd684,	// (0x0003f258) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x000418a2) popup_slider_window_g_ParamLimits

0xd6ea,	// (0x0003f2be) popup_slider_window_t1_ParamLimits

0xd75e,	// (0x0003f332) small_volume_slider_vertical_pane_ParamLimits

0xe0e5,	// (0x0003fcb9) cell_graphic2_pane_ParamLimits

0xe134,	// (0x0003fd08) bg_button_pane_cp10_ParamLimits

0xe134,	// (0x0003fd08) bg_button_pane_cp10

0xe147,	// (0x0003fd1b) bg_button_pane_cp11_ParamLimits

0xe147,	// (0x0003fd1b) bg_button_pane_cp11

0xe15a,	// (0x0003fd2e) graphic2_pages_pane_g1_ParamLimits

0xe15a,	// (0x0003fd2e) graphic2_pages_pane_g1

0xe175,	// (0x0003fd49) graphic2_pages_pane_g2_ParamLimits

0xe175,	// (0x0003fd49) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x00041966) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x00041966) graphic2_pages_pane_g

0xe18d,	// (0x0003fd61) graphic2_pages_pane_t1_ParamLimits

0xe18d,	// (0x0003fd61) graphic2_pages_pane_t1

0xe1a5,	// (0x0003fd79) cell_graphic2_control_pane_ParamLimits

0xe1a5,	// (0x0003fd79) cell_graphic2_control_pane

0xe1c3,	// (0x0003fd97) cell_graphic2_pane_g1_ParamLimits

0xe1c3,	// (0x0003fd97) cell_graphic2_pane_g1

0xe1d0,	// (0x0003fda4) cell_graphic2_pane_g2_ParamLimits

0xe1d0,	// (0x0003fda4) cell_graphic2_pane_g2

0xe1dd,	// (0x0003fdb1) cell_graphic2_pane_g3_ParamLimits

0xe1dd,	// (0x0003fdb1) cell_graphic2_pane_g3

0xe1ea,	// (0x0003fdbe) cell_graphic2_pane_g4_ParamLimits

0xe1ea,	// (0x0003fdbe) cell_graphic2_pane_g4

0xe1f7,	// (0x0003fdcb) cell_graphic2_pane_g5_ParamLimits

0xe1f7,	// (0x0003fdcb) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0004196b) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0004196b) cell_graphic2_pane_g

0xe210,	// (0x0003fde4) cell_graphic2_pane_t1_ParamLimits

0xe210,	// (0x0003fde4) cell_graphic2_pane_t1

0x9a9c,	// (0x0003b670) grid_highlight_pane_cp11_ParamLimits

0x9a9c,	// (0x0003b670) grid_highlight_pane_cp11

0x2164,	// (0x00033d38) bg_button_pane_cp05

0xe246,	// (0x0003fe1a) cell_graphic2_control_pane_g1

0xc044,	// (0x0003dc18) bg_touch_area_indi_pane_g1

0xe26e,	// (0x0003fe42) aid_cmod_rocker_key_size

0xe278,	// (0x0003fe4c) aid_cmode_itu_key_size

0xe282,	// (0x0003fe56) main_cmode_video_pane

0xe28c,	// (0x0003fe60) main_comp_mode_itu_pane

0xe298,	// (0x0003fe6c) main_comp_mode_rocker_pane

0xe2a4,	// (0x0003fe78) cell_cmode_rocker_pane_ParamLimits

0xe2a4,	// (0x0003fe78) cell_cmode_rocker_pane

0xe2b6,	// (0x0003fe8a) cell_cmode_itu_pane_ParamLimits

0xe2b6,	// (0x0003fe8a) cell_cmode_itu_pane

0x23f0,	// (0x00033fc4) bg_button_pane_cp06_ParamLimits

0x23f0,	// (0x00033fc4) bg_button_pane_cp06

0xc2b4,	// (0x0003de88) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b4,	// (0x0003de88) cell_cmode_rocker_pane_g1

0xd802,	// (0x0003f3d6) cell_cmode_rocker_pane_g2_ParamLimits

0xd802,	// (0x0003f3d6) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0004197b) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0004197b) cell_cmode_rocker_pane_g

0x1fca,	// (0x00033b9e) bg_button_pane_cp07

0xe2cb,	// (0x0003fe9f) cell_cmode_itu_pane_g1

0xe2d4,	// (0x0003fea8) cell_cmode_itu_pane_t1

0xe2e2,	// (0x0003feb6) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x00041980) cell_cmode_itu_pane_t

0xda28,	// (0x0003f5fc) aid_touch_ctrl_left

0xda30,	// (0x0003f604) aid_touch_ctrl_right

0x1fca,	// (0x00033b9e) compa_mode_pane

0xe2f0,	// (0x0003fec4) aid_cmod_rocker_key_size_cp

0xe2fa,	// (0x0003fece) aid_cmode_itu_key_size_cp

0xe304,	// (0x0003fed8) compa_mode_pane_g1

0xe30c,	// (0x0003fee0) compa_mode_pane_g2

0xe314,	// (0x0003fee8) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x00041985) compa_mode_pane_g

0xe31c,	// (0x0003fef0) main_comp_mode_itu_pane_cp

0xe324,	// (0x0003fef8) main_comp_mode_rocker_pane_cp

0xe32c,	// (0x0003ff00) cell_cmode_itu_pane_cp_ParamLimits

0xe32c,	// (0x0003ff00) cell_cmode_itu_pane_cp

0xe341,	// (0x0003ff15) cell_cmode_rocker_pane_cp_ParamLimits

0xe341,	// (0x0003ff15) cell_cmode_rocker_pane_cp

0x23f0,	// (0x00033fc4) bg_button_pane_cp06_cp_ParamLimits

0x23f0,	// (0x00033fc4) bg_button_pane_cp06_cp

0xc2b4,	// (0x0003de88) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b4,	// (0x0003de88) cell_cmode_rocker_pane_g1_cp

0xc044,	// (0x0003dc18) cell_cmode_rocker_pane_g2_cp

0x1fca,	// (0x00033b9e) bg_button_pane_cp07_cp

0xe353,	// (0x0003ff27) cell_cmode_itu_pane_g1_cp

0xe35c,	// (0x0003ff30) cell_cmode_itu_pane_t1_cp

0xe35c,	// (0x0003ff30) cell_cmode_itu_pane_t2_cp

0xaf39,	// (0x0003cb0d) settings_code_pane_cp2

0x203a,	// (0x00033c0e) bg_popup_window_pane_cp3_ParamLimits

0x227d,	// (0x00033e51) heading_pane_cp3_ParamLimits

0x228c,	// (0x00033e60) listscroll_popup_graphic_pane_ParamLimits

0x861a,	// (0x0003a1ee) fep_hwr_aid_pane_ParamLimits

0x8bcb,	// (0x0003a79f) aid_touch_sctrl_top_ParamLimits

0x8be6,	// (0x0003a7ba) sctrl_sk_top_pane_g1_ParamLimits

0x8871,	// (0x0003a445) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x000418bb) sctrl_sk_top_pane_g_ParamLimits

0x8bf3,	// (0x0003a7c7) sctrl_sk_top_pane_t1_ParamLimits

0x8bcb,	// (0x0003a79f) aid_touch_sctrl_bottom_ParamLimits

0x8bf3,	// (0x0003a7c7) sctrl_sk_bottom_pane_t1_ParamLimits

0xd971,	// (0x0003f545) aid_area_touch_clock

0x8dd8,	// (0x0003a9ac) aid_vkb2_area_top_pane_cell_ParamLimits

0x8dd8,	// (0x0003a9ac) aid_vkb2_area_top_pane_cell

0x8f26,	// (0x0003aafa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f26,	// (0x0003aafa) aid_vkb2_area_bottom_pane_cell

0xdee0,	// (0x0003fab4) popup_char_count_window

0xe36a,	// (0x0003ff3e) popup_char_count_window_g1

0xe373,	// (0x0003ff47) popup_char_count_window_g2

0xe37c,	// (0x0003ff50) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0004198c) popup_char_count_window_g

0xe385,	// (0x0003ff59) popup_char_count_window_t1

0x8c9a,	// (0x0003a86e) popup_fep_char_preview_window_ParamLimits

0x8c9a,	// (0x0003a86e) popup_fep_char_preview_window

0x8df6,	// (0x0003a9ca) vkb2_top_candi_pane_ParamLimits

0x8df6,	// (0x0003a9ca) vkb2_top_candi_pane

0xe393,	// (0x0003ff67) cell_vkb2_top_candi_pane_ParamLimits

0xe393,	// (0x0003ff67) cell_vkb2_top_candi_pane

0x920d,	// (0x0003ade1) bg_popup_fep_char_preview_window_ParamLimits

0x920d,	// (0x0003ade1) bg_popup_fep_char_preview_window

0x921b,	// (0x0003adef) popup_fep_char_preview_window_t1_ParamLimits

0x921b,	// (0x0003adef) popup_fep_char_preview_window_t1

0xe3dd,	// (0x0003ffb1) bg_popup_fep_char_preview_window_g1

0xe3e5,	// (0x0003ffb9) bg_popup_fep_char_preview_window_g2

0xe3ed,	// (0x0003ffc1) bg_popup_fep_char_preview_window_g3

0xe3f5,	// (0x0003ffc9) bg_popup_fep_char_preview_window_g4

0xe3fd,	// (0x0003ffd1) bg_popup_fep_char_preview_window_g5

0xe405,	// (0x0003ffd9) bg_popup_fep_char_preview_window_g6

0xe40d,	// (0x0003ffe1) bg_popup_fep_char_preview_window_g7

0xe415,	// (0x0003ffe9) bg_popup_fep_char_preview_window_g8

0xe41d,	// (0x0003fff1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x00041993) bg_popup_fep_char_preview_window_g

0x8871,	// (0x0003a445) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8871,	// (0x0003a445) cell_vkb2_top_candi_pane_g1

0x887f,	// (0x0003a453) cell_vkb2_top_candi_pane_g2_ParamLimits

0x887f,	// (0x0003a453) cell_vkb2_top_candi_pane_g2

0xc5cb,	// (0x0003e19f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5cb,	// (0x0003e19f) cell_vkb2_top_candi_pane_g3

0x925d,	// (0x0003ae31) cell_vkb2_top_candi_pane_g4_ParamLimits

0x925d,	// (0x0003ae31) cell_vkb2_top_candi_pane_g4

0xc7b5,	// (0x0003e389) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7b5,	// (0x0003e389) cell_vkb2_top_candi_pane_g5

0x927e,	// (0x0003ae52) cell_vkb2_top_candi_pane_g6_ParamLimits

0x927e,	// (0x0003ae52) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x000419a8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x000419a8) cell_vkb2_top_candi_pane_g

0x928c,	// (0x0003ae60) cell_vkb2_top_candi_pane_t1

0x8369,	// (0x00039f3d) aid_size_touch_slider_mark_ParamLimits

0x8369,	// (0x00039f3d) aid_size_touch_slider_mark

0xe023,	// (0x0003fbf7) grid_graphic2_catg_pane_ParamLimits

0xe023,	// (0x0003fbf7) grid_graphic2_catg_pane

0xe0c1,	// (0x0003fc95) popup_grid_graphic2_window_t1_ParamLimits

0xe0c1,	// (0x0003fc95) popup_grid_graphic2_window_t1

0xe0d3,	// (0x0003fca7) popup_grid_graphic2_window_t2_ParamLimits

0xe0d3,	// (0x0003fca7) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x00041961) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x00041961) popup_grid_graphic2_window_t

0x2164,	// (0x00033d38) bg_button_pane_cp05_ParamLimits

0xe246,	// (0x0003fe1a) cell_graphic2_control_pane_g1_ParamLimits

0xe425,	// (0x0003fff9) cell_graphic2_catg_pane_ParamLimits

0xe425,	// (0x0003fff9) cell_graphic2_catg_pane

0x1fca,	// (0x00033b9e) bg_button_pane_cp12

0xe437,	// (0x0004000b) cell_graphic2_catg_pane_g1

0xd93c,	// (0x0003f510) cell_tb_ext_pane_t1_ParamLimits

0x9043,	// (0x0003ac17) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9043,	// (0x0003ac17) vkb2_top_cell_right_narrow_pane

0x905b,	// (0x0003ac2f) vkb2_top_cell_right_wide_pane_ParamLimits

0x905b,	// (0x0003ac2f) vkb2_top_cell_right_wide_pane

0x860c,	// (0x0003a1e0) bg_vkb2_func_pane_ParamLimits

0x860c,	// (0x0003a1e0) bg_vkb2_func_pane

0x90cc,	// (0x0003aca0) vkb2_top_cell_left_pane_g1_ParamLimits

0x860c,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x860c,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp03

0x912a,	// (0x0003acfe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a18,	// (0x0003b5ec) bg_vkb2_func_pane_g1

0x9a20,	// (0x0003b5f4) bg_vkb2_func_pane_g2

0x9a30,	// (0x0003b604) bg_vkb2_func_pane_g3

0x9a28,	// (0x0003b5fc) bg_vkb2_func_pane_g4

0x9a38,	// (0x0003b60c) bg_vkb2_func_pane_g5

0x9a40,	// (0x0003b614) bg_vkb2_func_pane_g6

0x9a48,	// (0x0003b61c) bg_vkb2_func_pane_g7

0x9a50,	// (0x0003b624) bg_vkb2_func_pane_g8

0x9a10,	// (0x0003b5e4) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x000419b5) bg_vkb2_func_pane_g

0x860c,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x860c,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp01

0x90cc,	// (0x0003aca0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90cc,	// (0x0003aca0) vkb2_top_cell_right_wide_pane_g1

0x860c,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x860c,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp02

0x92ab,	// (0x0003ae7f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x92ab,	// (0x0003ae7f) vkb2_top_cell_right_narrow_pane_g1

0xd55e,	// (0x0003f132) aid_touch_area_decrease_ParamLimits

0xd55e,	// (0x0003f132) aid_touch_area_decrease

0xd582,	// (0x0003f156) aid_touch_area_increase_ParamLimits

0xd582,	// (0x0003f156) aid_touch_area_increase

0xd59a,	// (0x0003f16e) aid_touch_area_mute_ParamLimits

0xd59a,	// (0x0003f16e) aid_touch_area_mute

0xd5b6,	// (0x0003f18a) aid_touch_area_slider_ParamLimits

0xd5b6,	// (0x0003f18a) aid_touch_area_slider

0xd6a0,	// (0x0003f274) popup_slider_window_g4_ParamLimits

0xd6a0,	// (0x0003f274) popup_slider_window_g4

0xd6b8,	// (0x0003f28c) popup_slider_window_g5_ParamLimits

0xd6b8,	// (0x0003f28c) popup_slider_window_g5

0xd6da,	// (0x0003f2ae) popup_slider_window_g6_ParamLimits

0xd6da,	// (0x0003f2ae) popup_slider_window_g6

0xd718,	// (0x0003f2ec) popup_slider_window_t2_ParamLimits

0xd718,	// (0x0003f2ec) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x000418af) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x000418af) popup_slider_window_t

0xd730,	// (0x0003f304) slider_pane_ParamLimits

0xd730,	// (0x0003f304) slider_pane

0xe440,	// (0x00040014) slider_pane_g1_ParamLimits

0xe440,	// (0x00040014) slider_pane_g1

0xe454,	// (0x00040028) slider_pane_g2_ParamLimits

0xe454,	// (0x00040028) slider_pane_g2

0xe46a,	// (0x0004003e) slider_pane_g3_ParamLimits

0xe46a,	// (0x0004003e) slider_pane_g3

0x0003,

0xfdf4,	// (0x000419c8) slider_pane_g_ParamLimits

0xfdf4,	// (0x000419c8) slider_pane_g

0x7c17,	// (0x000397eb) popup_tb_float_extension_window_ParamLimits

0x7c17,	// (0x000397eb) popup_tb_float_extension_window

0xe496,	// (0x0004006a) aid_size_cell_tb_float_ext

0x1fca,	// (0x00033b9e) bg_popup_sub_window_cp28

0xe4a2,	// (0x00040076) grid_tb_float_ext_pane

0xe4ac,	// (0x00040080) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x00040080) cell_tb_float_ext_pane

0xe4c6,	// (0x0004009a) cell_tb_float_ext_pane_g1

0xe4cf,	// (0x000400a3) grid_highlight_pane_cp12

0x875b,	// (0x0003a32f) cell_last_hwr_side_pane_ParamLimits

0x875b,	// (0x0003a32f) cell_last_hwr_side_pane

0xc044,	// (0x0003dc18) cell_last_hwr_side_pane_g1

0xe4d8,	// (0x000400ac) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x000419d1) cell_last_hwr_side_pane_g

0x8ff2,	// (0x0003abc6) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ff2,	// (0x0003abc6) vkb2_area_bottom_space_btn_pane

0x8871,	// (0x0003a445) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf95,	// (0x0003fb69) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x928c,	// (0x0003ae60) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92cb,	// (0x0003ae9f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92cb,	// (0x0003ae9f) vkb2_area_bottom_space_btn_pane_g1

0x9305,	// (0x0003aed9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9305,	// (0x0003aed9) vkb2_area_bottom_space_btn_pane_g2

0x933b,	// (0x0003af0f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x933b,	// (0x0003af0f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x000419d6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x000419d6) vkb2_area_bottom_space_btn_pane_g

0x86cf,	// (0x0003a2a3) cel_fep_hwr_func_pane_ParamLimits

0x86cf,	// (0x0003a2a3) cel_fep_hwr_func_pane

0x870b,	// (0x0003a2df) cell_hwr_side_button_pane_ParamLimits

0x870b,	// (0x0003a2df) cell_hwr_side_button_pane

0xd971,	// (0x0003f545) aid_area_touch_clock_ParamLimits

0x2164,	// (0x00033d38) bg_uniindi_top_pane_ParamLimits

0xd983,	// (0x0003f557) uniindi_top_pane_g1_ParamLimits

0xd999,	// (0x0003f56d) uniindi_top_pane_g2_ParamLimits

0xd9a5,	// (0x0003f579) uniindi_top_pane_g3_ParamLimits

0xd9b6,	// (0x0003f58a) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x000418e7) uniindi_top_pane_g_ParamLimits

0xd9c3,	// (0x0003f597) uniindi_top_pane_t1_ParamLimits

0x2164,	// (0x00033d38) bg_vkb2_func_pane_cp01_ParamLimits

0x2164,	// (0x00033d38) bg_vkb2_func_pane_cp01

0xe4e1,	// (0x000400b5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e1,	// (0x000400b5) cel_fep_hwr_func_pane_g1

0x2164,	// (0x00033d38) bg_vkb2_func_pane_cp02_ParamLimits

0x2164,	// (0x00033d38) bg_vkb2_func_pane_cp02

0xe4e1,	// (0x000400b5) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e1,	// (0x000400b5) cell_hwr_side_button_pane_g1

0x9894,	// (0x0003b468) status_pane_g4_ParamLimits

0x9894,	// (0x0003b468) status_pane_g4

0x98ae,	// (0x0003b482) status_pane_t1

0xbd7f,	// (0x0003d953) form2_midp_gauge_slider_cont_pane

0xbd87,	// (0x0003d95b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd99,	// (0x0003d96d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdab,	// (0x0003d97f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x000416ae) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbd,	// (0x0003d991) form2_midp_slider_pane_ParamLimits

0x8c62,	// (0x0003a836) aid_size_cell_func_vkb2_ParamLimits

0x8c62,	// (0x0003a836) aid_size_cell_func_vkb2

0xe482,	// (0x00040056) slider_pane_g4_ParamLimits

0xe482,	// (0x00040056) slider_pane_g4

0x9385,	// (0x0003af59) form2_midp_gauge_slider_pane_t2_cp01

0x9393,	// (0x0003af67) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9393,	// (0x0003af67) form2_midp_gauge_slider_pane_t3_cp01

0x93b0,	// (0x0003af84) form2_midp_slider_pane_cp01

0x1fca,	// (0x00033b9e) navi_smil_pane

0xe51a,	// (0x000400ee) navi_smil_pane_g1

0xe522,	// (0x000400f6) navi_smil_pane_t1

0xe4ef,	// (0x000400c3) form2_midp_slider_pane_g1

0xe4f8,	// (0x000400cc) form2_midp_slider_pane_g2

0xe500,	// (0x000400d4) form2_midp_slider_pane_g3

0xe4ef,	// (0x000400c3) form2_midp_slider_pane_g4

0xe508,	// (0x000400dc) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x000419df) form2_midp_slider_pane_g

0x9375,	// (0x0003af49) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9375,	// (0x0003af49) vkb2_area_bottom_space_btn_pane_g4

0x7e9e,	// (0x00039a72) lc0_navi_pane_ParamLimits

0x7e9e,	// (0x00039a72) lc0_navi_pane

0x7f14,	// (0x00039ae8) lc0_stat_indi_pane_ParamLimits

0x7f14,	// (0x00039ae8) lc0_stat_indi_pane

0x7f2b,	// (0x00039aff) ls0_title_pane_ParamLimits

0x7f2b,	// (0x00039aff) ls0_title_pane

0x23f0,	// (0x00033fc4) bg_popup_sub_pane_cp14_ParamLimits

0xd958,	// (0x0003f52c) list_uniindi_pane_ParamLimits

0xd964,	// (0x0003f538) uniindi_top_pane_ParamLimits

0xda00,	// (0x0003f5d4) list_single_uniindi_pane_g1_ParamLimits

0xda13,	// (0x0003f5e7) list_single_uniindi_pane_t1_ParamLimits

0x93b9,	// (0x0003af8d) lc0_stat_clock_pane_ParamLimits

0x93b9,	// (0x0003af8d) lc0_stat_clock_pane

0xe530,	// (0x00040104) lc0_stat_indi_pane_g1_ParamLimits

0xe530,	// (0x00040104) lc0_stat_indi_pane_g1

0xe53d,	// (0x00040111) lc0_stat_indi_pane_g2_ParamLimits

0xe53d,	// (0x00040111) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x000419ea) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x000419ea) lc0_stat_indi_pane_g

0x93c6,	// (0x0003af9a) lc0_uni_indicator_pane_ParamLimits

0x93c6,	// (0x0003af9a) lc0_uni_indicator_pane

0xe54a,	// (0x0004011e) ls0_title_pane_g1_ParamLimits

0xe54a,	// (0x0004011e) ls0_title_pane_g1

0xe55e,	// (0x00040132) ls0_title_pane_t1_ParamLimits

0xe55e,	// (0x00040132) ls0_title_pane_t1

0x93d3,	// (0x0003afa7) lc0_uni_indicator_pane_g1_ParamLimits

0x93d3,	// (0x0003afa7) lc0_uni_indicator_pane_g1

0xe594,	// (0x00040168) lc0_stat_clock_pane_t1

0x5ea3,	// (0x00037a77) main_ai5_pane

0xe5a2,	// (0x00040176) ai5_sk_pane_ParamLimits

0xe5a2,	// (0x00040176) ai5_sk_pane

0xe5af,	// (0x00040183) cell_ai5_widget_pane_ParamLimits

0xe5af,	// (0x00040183) cell_ai5_widget_pane

0xe66f,	// (0x00040243) aid_size_cell_widget_grid

0xe67d,	// (0x00040251) bg_ai5_widget_pane_ParamLimits

0xe67d,	// (0x00040251) bg_ai5_widget_pane

0xe6f9,	// (0x000402cd) cell_ai5_widget_pane_g2

0xe70d,	// (0x000402e1) cell_ai5_widget_pane_g3

0xe727,	// (0x000402fb) cell_ai5_widget_pane_g4

0xe737,	// (0x0004030b) cell_ai5_widget_pane_g5

0xe747,	// (0x0004031b) cell_ai5_widget_pane_g6

0xe753,	// (0x00040327) cell_ai5_widget_pane_g7

0xe7bf,	// (0x00040393) cell_ai5_widget_pane_t1_ParamLimits

0xe7bf,	// (0x00040393) cell_ai5_widget_pane_t1

0xe7dc,	// (0x000403b0) cell_ai5_widget_pane_t2_ParamLimits

0xe7dc,	// (0x000403b0) cell_ai5_widget_pane_t2

0xe7f4,	// (0x000403c8) cell_ai5_widget_pane_t3_ParamLimits

0xe7f4,	// (0x000403c8) cell_ai5_widget_pane_t3

0xe80c,	// (0x000403e0) cell_ai5_widget_pane_t4_ParamLimits

0xe80c,	// (0x000403e0) cell_ai5_widget_pane_t4

0xe832,	// (0x00040406) cell_ai5_widget_pane_t5_ParamLimits

0xe832,	// (0x00040406) cell_ai5_widget_pane_t5

0xe851,	// (0x00040425) cell_ai5_widget_pane_t6_ParamLimits

0xe851,	// (0x00040425) cell_ai5_widget_pane_t6

0xe863,	// (0x00040437) cell_ai5_widget_pane_t7_ParamLimits

0xe863,	// (0x00040437) cell_ai5_widget_pane_t7

0xe882,	// (0x00040456) cell_ai5_widget_pane_t8_ParamLimits

0xe882,	// (0x00040456) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x00041a0a) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x00041a0a) cell_ai5_widget_pane_t

0xe906,	// (0x000404da) grid_ai5_widget_pane

0x23f0,	// (0x00033fc4) highlight_cell_ai5_widget_pane_ParamLimits

0x23f0,	// (0x00033fc4) highlight_cell_ai5_widget_pane

0xe914,	// (0x000404e8) ai5_sk_left_pane

0xe91e,	// (0x000404f2) ai5_sk_middle_pane

0xe928,	// (0x000404fc) ai5_sk_right_pane

0xe932,	// (0x00040506) bg_ai5_widget_pane_g1_ParamLimits

0xe932,	// (0x00040506) bg_ai5_widget_pane_g1

0xe93e,	// (0x00040512) bg_ai5_widget_pane_g2_ParamLimits

0xe93e,	// (0x00040512) bg_ai5_widget_pane_g2

0xe94a,	// (0x0004051e) bg_ai5_widget_pane_g3_ParamLimits

0xe94a,	// (0x0004051e) bg_ai5_widget_pane_g3

0xe956,	// (0x0004052a) bg_ai5_widget_pane_g4_ParamLimits

0xe956,	// (0x0004052a) bg_ai5_widget_pane_g4

0xe962,	// (0x00040536) bg_ai5_widget_pane_g5_ParamLimits

0xe962,	// (0x00040536) bg_ai5_widget_pane_g5

0xe96e,	// (0x00040542) bg_ai5_widget_pane_g6_ParamLimits

0xe96e,	// (0x00040542) bg_ai5_widget_pane_g6

0xe97a,	// (0x0004054e) bg_ai5_widget_pane_g7_ParamLimits

0xe97a,	// (0x0004054e) bg_ai5_widget_pane_g7

0xe986,	// (0x0004055a) bg_ai5_widget_pane_g8_ParamLimits

0xe986,	// (0x0004055a) bg_ai5_widget_pane_g8

0xe992,	// (0x00040566) bg_ai5_widget_pane_g9_ParamLimits

0xe992,	// (0x00040566) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x00041a23) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x00041a23) bg_ai5_widget_pane_g

0xe9c4,	// (0x00040598) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c4,	// (0x00040598) cell_shortcut_ai5_widget_pane

0x2cac,	// (0x00034880) bg_cell_shortcut_ai5_widget_pane

0xe9d5,	// (0x000405a9) cell_grid_ai5_widget_pane_g1

0x2cac,	// (0x00034880) highlight_cell_shortcut_ai5_widget_pane

0x9a18,	// (0x0003b5ec) ai5_sk_left_pane_g1

0xe9de,	// (0x000405b2) ai5_sk_left_pane_g2

0xe9e6,	// (0x000405ba) ai5_sk_left_pane_g3

0xe9ee,	// (0x000405c2) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x00041a36) ai5_sk_left_pane_g

0xe9f6,	// (0x000405ca) ai5_sk_left_pane_t1

0x9a20,	// (0x0003b5f4) ai5_sk_right_pane_g1

0xea04,	// (0x000405d8) ai5_sk_right_pane_g2

0xea0c,	// (0x000405e0) ai5_sk_right_pane_g3

0xea14,	// (0x000405e8) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x00041a3f) ai5_sk_right_pane_g

0xea1c,	// (0x000405f0) ai5_sk_right_pane_t1

0x9a20,	// (0x0003b5f4) ai5_sk_middle_pane_g1

0x9a18,	// (0x0003b5ec) ai5_sk_middle_pane_g2

0x9a38,	// (0x0003b60c) ai5_sk_middle_pane_g3

0xea0c,	// (0x000405e0) ai5_sk_middle_pane_g4

0xe9e6,	// (0x000405ba) ai5_sk_middle_pane_g5

0xea2a,	// (0x000405fe) ai5_sk_middle_pane_g6

0xea32,	// (0x00040606) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x00041a48) ai5_sk_middle_pane_g

0x7d24,	// (0x000398f8) aid_touch_area_size_lc0_ParamLimits

0x7d24,	// (0x000398f8) aid_touch_area_size_lc0

0x88a0,	// (0x0003a474) cell_hwr_candidate_pane_t1_ParamLimits

0x7d40,	// (0x00039914) aid_touch_navi_pane

0x8019,	// (0x00039bed) status_dt_navi_pane_ParamLimits

0x8019,	// (0x00039bed) status_dt_navi_pane

0x984b,	// (0x0003b41f) status_dt_sta_pane_ParamLimits

0x984b,	// (0x0003b41f) status_dt_sta_pane

0xea3a,	// (0x0004060e) dt_sta_controll_pane

0xea47,	// (0x0004061b) dt_sta_indi_pane

0xea58,	// (0x0004062c) dt_sta_title_pane

0x2164,	// (0x00033d38) bg_dt_sta_indi_pane_ParamLimits

0x2164,	// (0x00033d38) bg_dt_sta_indi_pane

0xea6b,	// (0x0004063f) dt_sta_battery_pane

0xea73,	// (0x00040647) dt_sta_indi_pane_g1

0xea7c,	// (0x00040650) dt_sta_indi_pane_g2

0xea85,	// (0x00040659) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x00041a57) dt_sta_indi_pane_g

0xea8e,	// (0x00040662) dt_sta_signal_pane

0x23f0,	// (0x00033fc4) bg_dt_sta_title_pane_ParamLimits

0x23f0,	// (0x00033fc4) bg_dt_sta_title_pane

0xa872,	// (0x0003c446) dt_sta_title_pane_g1

0xea97,	// (0x0004066b) dt_sta_title_pane_t1_ParamLimits

0xea97,	// (0x0004066b) dt_sta_title_pane_t1

0x1fca,	// (0x00033b9e) bg_dt_sta_control_pane

0xeaac,	// (0x00040680) dt_sta_controll_pane_g1

0xeab5,	// (0x00040689) bg_dt_sta_title_pane_g1

0xeabe,	// (0x00040692) bg_dt_sta_title_pane_g2

0xeac7,	// (0x0004069b) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x00041a5e) bg_dt_sta_title_pane_g

0xc044,	// (0x0003dc18) bg_dt_sta_indi_pane_g1

0xead0,	// (0x000406a4) dt_sta_signal_pane_g1

0xead8,	// (0x000406ac) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x00041a65) dt_sta_signal_pane_g

0xeae0,	// (0x000406b4) dt_sta_battery_pane_g1

0xeae9,	// (0x000406bd) dt_sta_battery_pane_t1

0xc044,	// (0x0003dc18) bg_dt_sta_control_pane_g1

0x28c5,	// (0x00034499) fep_china_uni_eep_pane

0x28cd,	// (0x000344a1) fep_china_uni_entry_pane_ParamLimits

0x28dd,	// (0x000344b1) popup_fep_china_uni_window_g1_ParamLimits

0x28ed,	// (0x000344c1) popup_fep_china_uni_window_g2_ParamLimits

0x28ed,	// (0x000344c1) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x000412bd) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x000412bd) popup_fep_china_uni_window_g

0xeaf8,	// (0x000406cc) fep_china_uni_eep_pane_g1

0xeb00,	// (0x000406d4) fep_china_uni_eep_pane_t1

0xe511,	// (0x000400e5) aid_touch_area_size_smil_player

0x7e96,	// (0x00039a6a) lc0_clock_pane

0x98a2,	// (0x0003b476) status_pane_g5_ParamLimits

0x98a2,	// (0x0003b476) status_pane_g5

0x78d8,	// (0x000394ac) popup_keymap_window

0x9860,	// (0x0003b434) status_icon_pane

0xe70d,	// (0x000402e1) cell_ai5_widget_pane_g3_ParamLimits

0xe727,	// (0x000402fb) cell_ai5_widget_pane_g4_ParamLimits

0xe737,	// (0x0004030b) cell_ai5_widget_pane_g5_ParamLimits

0xe75f,	// (0x00040333) cell_ai5_widget_pane_g8_ParamLimits

0xe75f,	// (0x00040333) cell_ai5_widget_pane_g8

0xe773,	// (0x00040347) cell_ai5_widget_pane_g9_ParamLimits

0xe773,	// (0x00040347) cell_ai5_widget_pane_g9

0xe787,	// (0x0004035b) cell_ai5_widget_pane_g10_ParamLimits

0xe787,	// (0x0004035b) cell_ai5_widget_pane_g10

0xeb0f,	// (0x000406e3) status_icon_pane_g1

0x1fca,	// (0x00033b9e) bg_popup_sub_pane_cp13

0xeb17,	// (0x000406eb) popup_keymap_window_t1

0x7617,	// (0x000391eb) control_pane_g6_ParamLimits

0x7617,	// (0x000391eb) control_pane_g6

0x7624,	// (0x000391f8) control_pane_g7_ParamLimits

0x7624,	// (0x000391f8) control_pane_g7

0x7631,	// (0x00039205) control_pane_g8_ParamLimits

0x7631,	// (0x00039205) control_pane_g8

0xea3a,	// (0x0004060e) dt_sta_controll_pane_ParamLimits

0xea47,	// (0x0004061b) dt_sta_indi_pane_ParamLimits

0xea58,	// (0x0004062c) dt_sta_title_pane_ParamLimits

0x233b,	// (0x00033f0f) aid_size_touch_scroll_bar_cale

0x5f7c,	// (0x00037b50) popup_discreet_window_ParamLimits

0x5f7c,	// (0x00037b50) popup_discreet_window

0x5ff6,	// (0x00037bca) popup_sk_window

0xa0b6,	// (0x0003bc8a) bg_popup_sub_pane_cp28_ParamLimits

0xa0b6,	// (0x0003bc8a) bg_popup_sub_pane_cp28

0xeb25,	// (0x000406f9) popup_discreet_window_g1_ParamLimits

0xeb25,	// (0x000406f9) popup_discreet_window_g1

0xeb45,	// (0x00040719) popup_discreet_window_t1_ParamLimits

0xeb45,	// (0x00040719) popup_discreet_window_t1

0xeb63,	// (0x00040737) popup_discreet_window_t2_ParamLimits

0xeb63,	// (0x00040737) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x00041a6a) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x00041a6a) popup_discreet_window_t

0x93e7,	// (0x0003afbb) popup_sk_window_g1

0x93f1,	// (0x0003afc5) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x00041a71) popup_sk_window_g

0x93f9,	// (0x0003afcd) popup_sk_window_t1

0x9407,	// (0x0003afdb) popup_sk_window_t1_copy1

0xe6f9,	// (0x000402cd) cell_ai5_widget_pane_g2_ParamLimits

0xe894,	// (0x00040468) cell_ai5_widget_pane_t9_ParamLimits

0xe894,	// (0x00040468) cell_ai5_widget_pane_t9

0x1fca,	// (0x00033b9e) main_fep_fshwr2_pane

0x9415,	// (0x0003afe9) aid_fshwr2_btn_pane

0x9429,	// (0x0003affd) aid_fshwr2_syb_pane

0x943d,	// (0x0003b011) aid_fshwr2_txt_pane

0x944d,	// (0x0003b021) fshwr2_func_candi_pane

0x9471,	// (0x0003b045) fshwr2_hwr_syb_pane

0x948b,	// (0x0003b05f) fshwr2_icf_pane

0x5ea3,	// (0x00037a77) fshwr2_icf_bg_pane

0x94b9,	// (0x0003b08d) fshwr2_icf_pane_t1_ParamLimits

0x94b9,	// (0x0003b08d) fshwr2_icf_pane_t1

0x2842,	// (0x00034416) fshwr2_func_candi_pane_g1

0xebb5,	// (0x00040789) fshwr2_func_candi_row_pane_ParamLimits

0xebb5,	// (0x00040789) fshwr2_func_candi_row_pane

0x94d2,	// (0x0003b0a6) cell_fshwr2_syb_pane_ParamLimits

0x94d2,	// (0x0003b0a6) cell_fshwr2_syb_pane

0x94f5,	// (0x0003b0c9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x94f5,	// (0x0003b0c9) fshwr2_hwr_syb_pane_g1

0x5ea3,	// (0x00037a77) bg_popup_call_pane_cp01

0x9503,	// (0x0003b0d7) fshwr2_func_candi_cell_pane_ParamLimits

0x9503,	// (0x0003b0d7) fshwr2_func_candi_cell_pane

0xa712,	// (0x0003c2e6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa712,	// (0x0003c2e6) fshwr2_func_candi_cell_bg_pane

0x954e,	// (0x0003b122) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x954e,	// (0x0003b122) fshwr2_func_candi_cell_pane_g1

0x956e,	// (0x0003b142) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x956e,	// (0x0003b142) fshwr2_func_candi_cell_pane_t1

0x5ea3,	// (0x00037a77) bg_button_pane_cp08

0x2532,	// (0x00034106) cell_fshwr2_syb_bg_pane

0x9581,	// (0x0003b155) cell_fshwr2_syb_bg_pane_g1

0x9595,	// (0x0003b169) cell_fshwr2_syb_bg_pane_t1

0x23f0,	// (0x00033fc4) main_tmo_pane

0xabab,	// (0x0003c77f) uni_indicator_pane_g1_ParamLimits

0xabbe,	// (0x0003c792) uni_indicator_pane_g2_ParamLimits

0xabd0,	// (0x0003c7a4) uni_indicator_pane_g3_ParamLimits

0xabdf,	// (0x0003c7b3) uni_indicator_pane_g4_ParamLimits

0xabdf,	// (0x0003c7b3) uni_indicator_pane_g4

0xabf3,	// (0x0003c7c7) uni_indicator_pane_g5_ParamLimits

0xabf3,	// (0x0003c7c7) uni_indicator_pane_g5

0xabf3,	// (0x0003c7c7) uni_indicator_pane_g6_ParamLimits

0xabf3,	// (0x0003c7c7) uni_indicator_pane_g6

0xf8e8,	// (0x000414bc) uni_indicator_pane_g_ParamLimits

0xd540,	// (0x0003f114) popup_tmo_note_window_ParamLimits

0xd540,	// (0x0003f114) popup_tmo_note_window

0x8c44,	// (0x0003a818) fshwr2_bg_pane

0x955f,	// (0x0003b133) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x955f,	// (0x0003b133) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x00041a76) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x00041a76) fshwr2_func_candi_cell_pane_g

0x8859,	// (0x0003a42d) bg_popup_window_pane_cp01

0x95ab,	// (0x0003b17f) bg_popup_window_pane_g1_cp01

0xebdc,	// (0x000407b0) bg_popup_window_pane_cp22_ParamLimits

0xebdc,	// (0x000407b0) bg_popup_window_pane_cp22

0xebea,	// (0x000407be) listscroll_tmo_link_pane_ParamLimits

0xebea,	// (0x000407be) listscroll_tmo_link_pane

0xec2a,	// (0x000407fe) popup_tmo_note_window_g1_ParamLimits

0xec2a,	// (0x000407fe) popup_tmo_note_window_g1

0xec37,	// (0x0004080b) tmo_note_info_pane_ParamLimits

0xec37,	// (0x0004080b) tmo_note_info_pane

0xec51,	// (0x00040825) list_tmo_note_info_pane_g1_ParamLimits

0xec51,	// (0x00040825) list_tmo_note_info_pane_g1

0xec68,	// (0x0004083c) list_tmo_note_info_pane_g2_ParamLimits

0xec68,	// (0x0004083c) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x00041a7b) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x00041a7b) list_tmo_note_info_pane_g

0xec84,	// (0x00040858) list_tmo_note_info_text_pane_ParamLimits

0xec84,	// (0x00040858) list_tmo_note_info_text_pane

0xed05,	// (0x000408d9) list_tmo_link_pane

0xed12,	// (0x000408e6) scroll_pane_cp20

0xed1f,	// (0x000408f3) list_single_tmo_link_pane_ParamLimits

0xed1f,	// (0x000408f3) list_single_tmo_link_pane

0xed2f,	// (0x00040903) list_single_tmo_link_pane_t1

0xed3d,	// (0x00040911) list_tmo_note_info_text_pane_t1_ParamLimits

0xed3d,	// (0x00040911) list_tmo_note_info_text_pane_t1

0x6b79,	// (0x0003874d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b79,	// (0x0003874d) aid_size_touch_scroll_bar_cp01

0x6a62,	// (0x00038636) aid_size_touch_slider_marker

0x5fde,	// (0x00037bb2) popup_settings_window_ParamLimits

0x5fde,	// (0x00037bb2) popup_settings_window

0x477a,	// (0x0003634e) popup_candi_list_indi_window

0x7d40,	// (0x00039914) aid_touch_navi_pane_ParamLimits

0x8b9f,	// (0x0003a773) rs_clock_indi_pane

0x8ba8,	// (0x0003a77c) sctrl_sk_bottom_pane_ParamLimits

0x8bb9,	// (0x0003a78d) sctrl_sk_top_pane_ParamLimits

0x8cb4,	// (0x0003a888) popup_fep_tooltip_window

0xe66f,	// (0x00040243) aid_size_cell_widget_grid_ParamLimits

0xe6e4,	// (0x000402b8) cell_ai5_widget_pane_g1_ParamLimits

0xe6e4,	// (0x000402b8) cell_ai5_widget_pane_g1

0xe747,	// (0x0004031b) cell_ai5_widget_pane_g6_ParamLimits

0xe753,	// (0x00040327) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x000419ef) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x000419ef) cell_ai5_widget_pane_g

0xe8c3,	// (0x00040497) cell_ai5_widget_pane_t10_ParamLimits

0xe8c3,	// (0x00040497) cell_ai5_widget_pane_t10

0xe906,	// (0x000404da) grid_ai5_widget_pane_ParamLimits

0xe99e,	// (0x00040572) cell_contacts_ai5_widget_pane_ParamLimits

0xe99e,	// (0x00040572) cell_contacts_ai5_widget_pane

0xeb78,	// (0x0004074c) popup_discreet_window_t3_ParamLimits

0xeb78,	// (0x0004074c) popup_discreet_window_t3

0x94a3,	// (0x0003b077) popup_fshwr2_char_preview_window_ParamLimits

0x94a3,	// (0x0003b077) popup_fshwr2_char_preview_window

0xeca2,	// (0x00040876) tmo_note_info_pane_t1

0xecb7,	// (0x0004088b) tmo_note_info_pane_t2

0xeccc,	// (0x000408a0) tmo_note_info_pane_t3

0xece1,	// (0x000408b5) tmo_note_info_pane_t4

0xecf3,	// (0x000408c7) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x00041a80) tmo_note_info_pane_t

0xed05,	// (0x000408d9) list_tmo_link_pane_ParamLimits

0xed12,	// (0x000408e6) scroll_pane_cp20_ParamLimits

0x5ea3,	// (0x00037a77) bg_popup_fep_char_preview_window_cp01

0xed56,	// (0x0004092a) popup_fshwr2_char_preview_window_t1

0xed64,	// (0x00040938) popup_candi_list_indi_window_g1

0xed6d,	// (0x00040941) bg_cell_contacts_ai5_widget_pane

0xed79,	// (0x0004094d) cell_contacts_ai5_widget_pane_g1

0xc70a,	// (0x0003e2de) cell_contacts_ai5_widget_pane_g2

0xed8e,	// (0x00040962) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x00041a8b) cell_contacts_ai5_widget_pane_g

0xed9a,	// (0x0004096e) cell_contacts_ai5_widget_pane_t1

0x23f0,	// (0x00033fc4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee11,	// (0x000409e5) settings_container_pane

0x2cac,	// (0x00034880) listscroll_set_pane_copy1

0xb720,	// (0x0003d2f4) scroll_pane_cp121_copy1

0x9e5b,	// (0x0003ba2f) set_content_pane_copy1

0xee1d,	// (0x000409f1) aid_height_set_list_copy1_ParamLimits

0xee1d,	// (0x000409f1) aid_height_set_list_copy1

0xadeb,	// (0x0003c9bf) aid_size_parent_copy1_ParamLimits

0xadeb,	// (0x0003c9bf) aid_size_parent_copy1

0xee29,	// (0x000409fd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee29,	// (0x000409fd) button_value_adjust_pane_cp6_copy1

0x2532,	// (0x00034106) list_highlight_pane_cp2_copy1_ParamLimits

0x2532,	// (0x00034106) list_highlight_pane_cp2_copy1

0xee3d,	// (0x00040a11) list_set_pane_copy1_ParamLimits

0xee3d,	// (0x00040a11) list_set_pane_copy1

0xedac,	// (0x00040980) main_pane_set_t1_copy1_ParamLimits

0xedac,	// (0x00040980) main_pane_set_t1_copy1

0xede6,	// (0x000409ba) main_pane_set_t2_copy1_ParamLimits

0xede6,	// (0x000409ba) main_pane_set_t2_copy1

0xeeea,	// (0x00040abe) main_pane_set_t3_copy1

0xeef8,	// (0x00040acc) main_pane_set_t4_copy1

0xee05,	// (0x000409d9) set_content_pane_g1_copy1_ParamLimits

0xee05,	// (0x000409d9) set_content_pane_g1_copy1

0xef06,	// (0x00040ada) setting_code_pane_copy1

0xef0e,	// (0x00040ae2) setting_slider_graphic_pane_copy1

0xef0e,	// (0x00040ae2) setting_slider_pane_copy1

0xef16,	// (0x00040aea) setting_text_pane_copy1

0xef16,	// (0x00040aea) setting_volume_pane_copy1

0xef06,	// (0x00040ada) settings_code_pane_cp2_copy1

0xef1e,	// (0x00040af2) settings_code_pane_cp_copy1_ParamLimits

0xef1e,	// (0x00040af2) settings_code_pane_cp_copy1

0x95b4,	// (0x0003b188) volume_set_pane_copy1

0xef32,	// (0x00040b06) volume_set_pane_g10_copy1

0xef3a,	// (0x00040b0e) volume_set_pane_g1_copy1

0xef42,	// (0x00040b16) volume_set_pane_g2_copy1

0xef4a,	// (0x00040b1e) volume_set_pane_g3_copy1

0xef52,	// (0x00040b26) volume_set_pane_g4_copy1

0xef5a,	// (0x00040b2e) volume_set_pane_g5_copy1

0xef62,	// (0x00040b36) volume_set_pane_g6_copy1

0xef6a,	// (0x00040b3e) volume_set_pane_g7_copy1

0xef72,	// (0x00040b46) volume_set_pane_g8_copy1

0xef7a,	// (0x00040b4e) volume_set_pane_g9_copy1

0x203a,	// (0x00033c0e) bg_set_opt_pane_cp_copy1_ParamLimits

0x203a,	// (0x00033c0e) bg_set_opt_pane_cp_copy1

0x95bc,	// (0x0003b190) setting_slider_pane_t1_copy1_ParamLimits

0x95bc,	// (0x0003b190) setting_slider_pane_t1_copy1

0x95db,	// (0x0003b1af) setting_slider_pane_t2_copy1_ParamLimits

0x95db,	// (0x0003b1af) setting_slider_pane_t2_copy1

0x95f5,	// (0x0003b1c9) setting_slider_pane_t3_copy1_ParamLimits

0x95f5,	// (0x0003b1c9) setting_slider_pane_t3_copy1

0x960d,	// (0x0003b1e1) slider_set_pane_copy1_ParamLimits

0x960d,	// (0x0003b1e1) slider_set_pane_copy1

0x2448,	// (0x0003401c) set_opt_bg_pane_g1_copy2

0x2450,	// (0x00034024) set_opt_bg_pane_g2_copy2

0xef82,	// (0x00040b56) set_opt_bg_pane_g3_copy2

0x2460,	// (0x00034034) set_opt_bg_pane_g4_copy2

0x2468,	// (0x0003403c) set_opt_bg_pane_g5_copy2

0x2470,	// (0x00034044) set_opt_bg_pane_g6_copy2

0xef8c,	// (0x00040b60) set_opt_bg_pane_g7_copy2

0xef94,	// (0x00040b68) set_opt_bg_pane_g8_copy2

0xef9e,	// (0x00040b72) set_opt_bg_pane_g9_copy2

0x9623,	// (0x0003b1f7) aid_size_touch_slider_mark_copy1_ParamLimits

0x9623,	// (0x0003b1f7) aid_size_touch_slider_mark_copy1

0xefa8,	// (0x00040b7c) slider_set_pane_g1_copy1

0x9637,	// (0x0003b20b) slider_set_pane_g2_copy1

0x8389,	// (0x00039f5d) slider_set_pane_g3_copy1_ParamLimits

0x8389,	// (0x00039f5d) slider_set_pane_g3_copy1

0x839d,	// (0x00039f71) slider_set_pane_g4_copy1_ParamLimits

0x839d,	// (0x00039f71) slider_set_pane_g4_copy1

0x83b5,	// (0x00039f89) slider_set_pane_g5_copy1_ParamLimits

0x83b5,	// (0x00039f89) slider_set_pane_g5_copy1

0x8389,	// (0x00039f5d) slider_set_pane_g6_copy1_ParamLimits

0x8389,	// (0x00039f5d) slider_set_pane_g6_copy1

0x963f,	// (0x0003b213) slider_set_pane_g7_copy1_ParamLimits

0x963f,	// (0x0003b213) slider_set_pane_g7_copy1

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp2_copy1

0xefb1,	// (0x00040b85) setting_slider_graphic_pane_g1_copy1

0xefba,	// (0x00040b8e) setting_slider_graphic_pane_t1_copy1

0xefca,	// (0x00040b9e) setting_slider_graphic_pane_t2_copy1

0xefda,	// (0x00040bae) slider_set_pane_cp_copy1

0xefea,	// (0x00040bbe) input_focus_pane_cp1_copy1

0xeff3,	// (0x00040bc7) list_set_text_pane_copy1

0xeffb,	// (0x00040bcf) setting_text_pane_g1_copy1

0x4e3f,	// (0x00036a13) set_text_pane_t1_copy1

0xefea,	// (0x00040bbe) input_focus_pane_cp2_copy1

0xeffb,	// (0x00040bcf) setting_code_pane_g1_copy1

0xf004,	// (0x00040bd8) setting_code_pane_t1_copy1

0xf012,	// (0x00040be6) list_set_graphic_pane_copy1

0x1fde,	// (0x00033bb2) bg_set_opt_pane_cp4_copy1

0x2a1d,	// (0x000345f1) list_set_graphic_pane_g1_copy1_ParamLimits

0x2a1d,	// (0x000345f1) list_set_graphic_pane_g1_copy1

0xf026,	// (0x00040bfa) list_set_graphic_pane_g2_copy1

0x2a35,	// (0x00034609) list_set_graphic_pane_t1_copy1_ParamLimits

0x2a35,	// (0x00034609) list_set_graphic_pane_t1_copy1

0xc044,	// (0x0003dc18) rs_clock_indi_pane_g1

0xf02e,	// (0x00040c02) rs_clock_indi_pane_t1

0xf03c,	// (0x00040c10) rs_indi_pane

0xf044,	// (0x00040c18) rs_indi_pane_g1

0xf04d,	// (0x00040c21) rs_indi_pane_g2

0xed64,	// (0x00040938) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x00041a92) rs_indi_pane_g

0x2cac,	// (0x00034880) bg_popup_preview_window_pane_cp03

0xf056,	// (0x00040c2a) popup_fep_tooltip_window_t1

0xccef,	// (0x0003e8c3) popup_note2_window_g2_ParamLimits

0xccef,	// (0x0003e8c3) popup_note2_window_g2

0x0001,

0xfc52,	// (0x00041826) popup_note2_window_g_ParamLimits

0xfc52,	// (0x00041826) popup_note2_window_g

0xd1dc,	// (0x0003edb0) bg_popup_sub_pane_cp11_ParamLimits

0xd1e9,	// (0x0003edbd) cell_ai3_links_pane_g1_ParamLimits

0xd200,	// (0x0003edd4) cell_ai3_links_pane_t1

0x4e3f,	// (0x00036a13) set_text_pane_t1_copy1_ParamLimits

0x2be2,	// (0x000347b6) cell_graphic_popup_pane_cp2_ParamLimits

0x2be2,	// (0x000347b6) cell_graphic_popup_pane_cp2

0xf064,	// (0x00040c38) cell_graphic_popup_pane_g1_cp2

0x22be,	// (0x00033e92) cell_graphic_popup_pane_g2_cp2

0xf06c,	// (0x00040c40) cell_graphic_popup_pane_g3_cp2

0xf074,	// (0x00040c48) cell_graphic_popup_pane_t2_cp2

0x22cf,	// (0x00033ea3) grid_highlight_pane_cp3_cp2

0x26bf,	// (0x00034293) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x23f0,	// (0x00033fc4) main_tmo_pane_ParamLimits

0xd534,	// (0x0003f108) popup_tmo_big_image_note_window

0xe6d3,	// (0x000402a7) cell_ai5_widget_list_pane

0xe6db,	// (0x000402af) cell_ai5_widget_lrg_icon_pane

0xeca2,	// (0x00040876) tmo_note_info_pane_t1_ParamLimits

0xecb7,	// (0x0004088b) tmo_note_info_pane_t2_ParamLimits

0xeccc,	// (0x000408a0) tmo_note_info_pane_t3_ParamLimits

0xece1,	// (0x000408b5) tmo_note_info_pane_t4_ParamLimits

0xecf3,	// (0x000408c7) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x00041a80) tmo_note_info_pane_t_ParamLimits

0xee11,	// (0x000409e5) settings_container_pane_ParamLimits

0xefe2,	// (0x00040bb6) indicator_popup_pane_cp5

0xefe2,	// (0x00040bb6) indicator_popup_pane_cp6

0xf012,	// (0x00040be6) list_set_graphic_pane_copy1_ParamLimits

0x1fca,	// (0x00033b9e) bg_popup_window_pane_cp23

0xf082,	// (0x00040c56) popup_tmo_big_image_note_window_g1

0xf08b,	// (0x00040c5f) popup_tmo_big_image_note_window_t1

0xf09b,	// (0x00040c6f) popup_tmo_big_image_note_window_t2

0xf0ab,	// (0x00040c7f) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x00041a99) popup_tmo_big_image_note_window_t

0xc044,	// (0x0003dc18) cell_ai5_widget_lrg_icon_pane_g1

0xf0bb,	// (0x00040c8f) cell_ai5_widget_lrg_icon_pane_t1

0xf0c9,	// (0x00040c9d) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c9,	// (0x00040c9d) cell_ai5_widget_list_row_pane

0xf0e0,	// (0x00040cb4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e0,	// (0x00040cb4) cell_ai5_widget_list_row_pane_g1

0xf0ed,	// (0x00040cc1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ed,	// (0x00040cc1) cell_ai5_widget_list_row_pane_t1

0xf118,	// (0x00040cec) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf118,	// (0x00040cec) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x00041aa0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x00041aa0) cell_ai5_widget_list_row_pane_t

0x5ea3,	// (0x00037a77) main_fep_vtchi_ss_pane

0xf168,	// (0x00040d3c) popup_fep_char_pre_window

0xf170,	// (0x00040d44) popup_fep_ituss_window

0xf19c,	// (0x00040d70) popup_fep_vkbss_window

0x2532,	// (0x00034106) grid_vkbss_keypad_pane_ParamLimits

0x2532,	// (0x00034106) grid_vkbss_keypad_pane

0xf1dc,	// (0x00040db0) ituss_keypad_pane

0x965f,	// (0x0003b233) aid_vkbss_key_offset_ParamLimits

0x965f,	// (0x0003b233) aid_vkbss_key_offset

0x966b,	// (0x0003b23f) cell_vkbss_key_pane_ParamLimits

0x966b,	// (0x0003b23f) cell_vkbss_key_pane

0xf1ec,	// (0x00040dc0) bg_cell_vkbss_key_g1_ParamLimits

0xf1ec,	// (0x00040dc0) bg_cell_vkbss_key_g1

0xf1f8,	// (0x00040dcc) cell_vkbss_key_3p_pane_ParamLimits

0xf1f8,	// (0x00040dcc) cell_vkbss_key_3p_pane

0xf22e,	// (0x00040e02) cell_vkbss_key_g1_ParamLimits

0xf22e,	// (0x00040e02) cell_vkbss_key_g1

0xf264,	// (0x00040e38) cell_vkbss_key_t1_ParamLimits

0xf264,	// (0x00040e38) cell_vkbss_key_t1

0x96c3,	// (0x0003b297) cell_ituss_key_pane_ParamLimits

0x96c3,	// (0x0003b297) cell_ituss_key_pane

0xf2c0,	// (0x00040e94) bg_cell_ituss_key_g1_ParamLimits

0xf2c0,	// (0x00040e94) bg_cell_ituss_key_g1

0xf2cc,	// (0x00040ea0) cell_ituss_key_pane_g1_ParamLimits

0xf2cc,	// (0x00040ea0) cell_ituss_key_pane_g1

0x96d4,	// (0x0003b2a8) cell_ituss_key_pane_g2_ParamLimits

0x96d4,	// (0x0003b2a8) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x00041aa7) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x00041aa7) cell_ituss_key_pane_g

0x9758,	// (0x0003b32c) cell_ituss_key_t1_ParamLimits

0x9758,	// (0x0003b32c) cell_ituss_key_t1

0x9792,	// (0x0003b366) cell_ituss_key_t2_ParamLimits

0x9792,	// (0x0003b366) cell_ituss_key_t2

0x97c4,	// (0x0003b398) cell_ituss_key_t3_ParamLimits

0x97c4,	// (0x0003b398) cell_ituss_key_t3

0x97f5,	// (0x0003b3c9) cell_ituss_key_t4_ParamLimits

0x97f5,	// (0x0003b3c9) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x00041ab4) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x00041ab4) cell_ituss_key_t

0xf2f2,	// (0x00040ec6) cell_vkbss_key_3p_pane_g1

0xf2fa,	// (0x00040ece) cell_vkbss_key_3p_pane_g2

0xf302,	// (0x00040ed6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x00041abf) cell_vkbss_key_3p_pane_g

0x2cac,	// (0x00034880) bg_popup_fep_char_preview_window_cp02

0xf30a,	// (0x00040ede) popup_fep_char_pre_window_t1

0xe665,	// (0x00040239) main_ai5_sk_pane

0xed6d,	// (0x00040941) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed79,	// (0x0004094d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc70a,	// (0x0003e2de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8e,	// (0x00040962) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x00041a8b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9a,	// (0x0004096e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x23f0,	// (0x00033fc4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf318,	// (0x00040eec) main_ai5_sk_pane_g1

0x9ef7,	// (0x0003bacb) popup_query_code_window_g1

0xf186,	// (0x00040d5a) popup_fep_vkb_icf_pane

0xf1b3,	// (0x00040d87) popup_fep_vtchi_icf_pane

0xf321,	// (0x00040ef5) bg_icf_pane

0xf321,	// (0x00040ef5) list_vkb_icf_pane

0xf32d,	// (0x00040f01) bg_icf_pane_cp01

0xf340,	// (0x00040f14) vtchi_icf_list_pane

0xf3a0,	// (0x00040f74) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x00040f74) list_vkb_icf_pane_t1

0xf3c2,	// (0x00040f96) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x00040f96) vtchi_icf_list_pane_t1

0xf170,	// (0x00040d44) popup_fep_ituss_window_ParamLimits

0xf1b3,	// (0x00040d87) popup_fep_vtchi_icf_pane_ParamLimits

0xf1dc,	// (0x00040db0) ituss_keypad_pane_ParamLimits

0x9655,	// (0x0003b229) ituss_sks_pane

0xf321,	// (0x00040ef5) bg_icf_pane_ParamLimits

0xf140,	// (0x00040d14) icf_edit_indi_pane_ParamLimits

0xf140,	// (0x00040d14) icf_edit_indi_pane

0xf321,	// (0x00040ef5) list_vkb_icf_pane_ParamLimits

0xf32d,	// (0x00040f01) bg_icf_pane_cp01_ParamLimits

0xf15b,	// (0x00040d2f) icf_edit_indi_pane_cp01_ParamLimits

0xf15b,	// (0x00040d2f) icf_edit_indi_pane_cp01

0xf340,	// (0x00040f14) vtchi_query_pane

0xe4e1,	// (0x000400b5) icf_edit_indi_pane_g1_ParamLimits

0xe4e1,	// (0x000400b5) icf_edit_indi_pane_g1

0xf43a,	// (0x0004100e) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0004100e) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x00041aea) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x00041aea) icf_edit_indi_pane_g

0xf44e,	// (0x00041022) icf_edit_indi_pane_t1

0xf3e3,	// (0x00040fb7) bg_input_focus_pane_cp042

0x2332,	// (0x00033f06) vtchi_button_pane

0xf3ec,	// (0x00040fc0) vtchi_query_pane_t1

0xf3fa,	// (0x00040fce) vtchi_query_pane_t2

0xf408,	// (0x00040fdc) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x00041ad9) vtchi_query_pane_t

0x5ea3,	// (0x00037a77) bg_button_pane_cp13

0xf416,	// (0x00040fea) vtchi_button_pane_g1

0x9838,	// (0x0003b40c) ituss_sks_pane_g1

0x9843,	// (0x0003b417) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x00041ae0) ituss_sks_pane_g

0xf41e,	// (0x00040ff2) ituss_sks_pane_t1

0xf42c,	// (0x00041000) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x00041ae5) ituss_sks_pane_t

0xbab8,	// (0x0003d68c) indicator_nsta_pane_cp_g1

0xbac1,	// (0x0003d695) indicator_nsta_pane_cp_g2

0xbac9,	// (0x0003d69d) indicator_nsta_pane_cp_g3

0xbad1,	// (0x0003d6a5) indicator_nsta_pane_cp_g4

0xbac1,	// (0x0003d695) indicator_nsta_pane_cp_g5

0xbac9,	// (0x0003d69d) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x00041664) indicator_nsta_pane_cp_g

0xe234,	// (0x0003fe08) cell_graphic2_pane_t2_ParamLimits

0xe234,	// (0x0003fe08) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x00041976) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x00041976) cell_graphic2_pane_t

0xe260,	// (0x0003fe34) cell_graphic2_control_pane_t1

0x7043,	// (0x00038c17) signal_pane_g3_ParamLimits

0x7043,	// (0x00038c17) signal_pane_g3

0x7055,	// (0x00038c29) signal_pane_g4_ParamLimits

0x7055,	// (0x00038c29) signal_pane_g4

0xf12a,	// (0x00040cfe) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12a,	// (0x00040cfe) cell_ai5_widget_list_row_pane_t3

0xf2e0,	// (0x00040eb4) cell_ituss_key_pane_t1_ParamLimits

0xf2e0,	// (0x00040eb4) cell_ituss_key_pane_t1

0x9b2a,	// (0x0003b6fe) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b2a,	// (0x0003b6fe) form_field_data_wide_pane_vc_t2

0x9b3e,	// (0x0003b712) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b3e,	// (0x0003b712) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x000413a4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x000413a4) form_field_data_wide_pane_vc_t

0xb762,	// (0x0003d336) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb762,	// (0x0003d336) form_field_slider_wide_pane_vc_t3

0xb840,	// (0x0003d414) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb840,	// (0x0003d414) form_field_popup_wide_pane_vc_t2

0xb857,	// (0x0003d42b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb857,	// (0x0003d42b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x00041653) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x00041653) form_field_popup_wide_pane_vc_t

0x9415,	// (0x0003afe9) aid_fshwr2_btn_pane_ParamLimits

0x9429,	// (0x0003affd) aid_fshwr2_syb_pane_ParamLimits

0x943d,	// (0x0003b011) aid_fshwr2_txt_pane_ParamLimits

0x8c44,	// (0x0003a818) fshwr2_bg_pane_ParamLimits

0x944d,	// (0x0003b021) fshwr2_func_candi_pane_ParamLimits

0x9471,	// (0x0003b045) fshwr2_hwr_syb_pane_ParamLimits

0x948b,	// (0x0003b05f) fshwr2_icf_pane_ParamLimits

0x4b74,	// (0x00036748) list_double_graphic_pane_vc_g4_ParamLimits

0x4b74,	// (0x00036748) list_double_graphic_pane_vc_g4

0x96f4,	// (0x0003b2c8) cell_ituss_key_pane_g3_ParamLimits

0x96f4,	// (0x0003b2c8) cell_ituss_key_pane_g3

0x9826,	// (0x0003b3fa) cell_ituss_key_t5_ParamLimits

0x9826,	// (0x0003b3fa) cell_ituss_key_t5

0xf19c,	// (0x00040d70) popup_fep_vkbss_window_ParamLimits

0xc83b,	// (0x0003e40f) aid_cell_ai5_quarter

0xf44e,	// (0x00041022) icf_edit_indi_pane_t1_ParamLimits

0x6362,	// (0x00037f36) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6362,	// (0x00037f36) aid_tch_indicator_popup_pane_cp2

0x6375,	// (0x00037f49) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6375,	// (0x00037f49) aid_tch_query_popup_data_pane_cp2

0x9e9f,	// (0x0003ba73) aid_tch_query_popup_pane_ParamLimits

0x9e9f,	// (0x0003ba73) aid_tch_query_popup_pane

0x9e9f,	// (0x0003ba73) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e9f,	// (0x0003ba73) aid_tch_query_popup_data_pane_cp1

0x2532,	// (0x00034106) cell_fshwr2_syb_bg_pane_ParamLimits

0x9581,	// (0x0003b155) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9595,	// (0x0003b169) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x00040d5a) popup_fep_vkb_icf_pane_ParamLimits

0x9255,	// (0x0003ae29) bg_popup_fep_char_preview_window_g10

0xe79b,	// (0x0004036f) cell_ai5_widget_pane_g11_ParamLimits

0xe79b,	// (0x0004036f) cell_ai5_widget_pane_g11

0xe7a7,	// (0x0004037b) cell_ai5_widget_pane_g12_ParamLimits

0xe7a7,	// (0x0004037b) cell_ai5_widget_pane_g12

0xe7b3,	// (0x00040387) cell_ai5_widget_pane_g13_ParamLimits

0xe7b3,	// (0x00040387) cell_ai5_widget_pane_g13

0xe8e2,	// (0x000404b6) cell_ai5_widget_pane_t11_ParamLimits

0xe8e2,	// (0x000404b6) cell_ai5_widget_pane_t11

0xe8f4,	// (0x000404c8) cell_ai5_widget_pane_t12_ParamLimits

0xe8f4,	// (0x000404c8) cell_ai5_widget_pane_t12

0x9700,	// (0x0003b2d4) cell_ituss_key_pane_g4_ParamLimits

0x9700,	// (0x0003b2d4) cell_ituss_key_pane_g4

0x971c,	// (0x0003b2f0) cell_ituss_key_pane_g5_ParamLimits

0x971c,	// (0x0003b2f0) cell_ituss_key_pane_g5

0x9738,	// (0x0003b30c) cell_ituss_key_pane_g6_ParamLimits

0x9738,	// (0x0003b30c) cell_ituss_key_pane_g6

0x9a10,	// (0x0003b5e4) bg_icf_pane_g1

0xf348,	// (0x00040f1c) bg_icf_pane_g2

0xf354,	// (0x00040f28) bg_icf_pane_g3

0xf35e,	// (0x00040f32) bg_icf_pane_g4

0xf36a,	// (0x00040f3e) bg_icf_pane_g5

0xf374,	// (0x00040f48) bg_icf_pane_g6

0xf380,	// (0x00040f54) bg_icf_pane_g7

0xf38a,	// (0x00040f5e) bg_icf_pane_g8

0xf396,	// (0x00040f6a) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x00041ac6) bg_icf_pane_g

0xf1c9,	// (0x00040d9d) popup_hyb_candi_window_ParamLimits

0xf1c9,	// (0x00040d9d) popup_hyb_candi_window

0x9a9c,	// (0x0003b670) bg_popup_sub_pane_cp01_ParamLimits

0x9a9c,	// (0x0003b670) bg_popup_sub_pane_cp01

0xf467,	// (0x0004103b) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0004103b) entry_hyb_candi_pane

0xf476,	// (0x0004104a) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0004104a) grid_hyb_candi_pane

0xf48b,	// (0x0004105f) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0004105f) grid_hyb_phrase_pane

0xf49a,	// (0x0004106e) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0004106e) cell_hyb_candi_pane

0xf4bd,	// (0x00041091) cell_hyb_candi_scroll_pane

0x2842,	// (0x00034416) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0004109a) cell_hyb_candi_pane_t1

0xf4d4,	// (0x000410a8) cell_hyb_phrase_pane

0x2842,	// (0x00034416) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000410b1) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x000410bf) entry_hyb_candi_pane_t1

0x2cac,	// (0x00034880) input_focus_pane_cp06

0xf4f9,	// (0x000410cd) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x000410d5) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000410dd) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000410e5) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x000410ed) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x000410f5) cell_hyb_candi_scroll_pane_g4
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
