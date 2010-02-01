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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003ce69 };

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
0x751f,	// (0x00044388) Screen

0x752b,	// (0x00044394) application_window_ParamLimits

0x752b,	// (0x00044394) application_window

0x2c1c,	// (0x0003fa85) screen_g1

0x5876,	// (0x000426df) area_bottom_pane_ParamLimits

0x5876,	// (0x000426df) area_bottom_pane

0x5936,	// (0x0004279f) area_top_pane_ParamLimits

0x5936,	// (0x0004279f) area_top_pane

0x59ca,	// (0x00042833) main_pane_ParamLimits

0x59ca,	// (0x00042833) main_pane

0x2c26,	// (0x0003fa8f) misc_graphics

0x951d,	// (0x00046386) battery_pane_ParamLimits

0x951d,	// (0x00046386) battery_pane

0xa230,	// (0x00047099) bg_status_flat_pane_g8

0xa238,	// (0x000470a1) bg_status_flat_pane_g9

0x95e5,	// (0x0004644e) context_pane_ParamLimits

0x95e5,	// (0x0004644e) context_pane

0x9709,	// (0x00046572) navi_pane_ParamLimits

0x9709,	// (0x00046572) navi_pane

0x9798,	// (0x00046601) signal_pane_ParamLimits

0x9798,	// (0x00046601) signal_pane

0x0008,

0xf88f,	// (0x0004c6f8) bg_status_flat_pane_g

0x9805,	// (0x0004666e) status_pane_g1_ParamLimits

0x9805,	// (0x0004666e) status_pane_g1

0x9819,	// (0x00046682) status_pane_g2_ParamLimits

0x9819,	// (0x00046682) status_pane_g2

0x9825,	// (0x0004668e) status_pane_g3_ParamLimits

0x9825,	// (0x0004668e) status_pane_g3

0x0004,

0xf7bd,	// (0x0004c626) status_pane_g_ParamLimits

0xf7bd,	// (0x0004c626) status_pane_g

0x9859,	// (0x000466c2) title_pane_ParamLimits

0x9859,	// (0x000466c2) title_pane

0x9896,	// (0x000466ff) uni_indicator_pane_ParamLimits

0x9896,	// (0x000466ff) uni_indicator_pane

0x8e12,	// (0x00045c7b) bg_list_pane_ParamLimits

0x8e12,	// (0x00045c7b) bg_list_pane

0x8e32,	// (0x00045c9b) find_pane

0x8e3a,	// (0x00045ca3) listscroll_app_pane_ParamLimits

0x8e3a,	// (0x00045ca3) listscroll_app_pane

0x8e46,	// (0x00045caf) listscroll_form_pane

0x8e4e,	// (0x00045cb7) listscroll_gen_pane_ParamLimits

0x8e4e,	// (0x00045cb7) listscroll_gen_pane

0x8e46,	// (0x00045caf) listscroll_set_pane

0x808f,	// (0x00044ef8) main_idle_act_pane

0x8af6,	// (0x0004595f) main_idle_trad_pane

0x8af6,	// (0x0004595f) main_list_empty_pane

0x8e74,	// (0x00045cdd) main_midp_pane

0x8e80,	// (0x00045ce9) main_pane_g1_ParamLimits

0x8e80,	// (0x00045ce9) main_pane_g1

0x8e8e,	// (0x00045cf7) popup_ai_message_window_ParamLimits

0x8e8e,	// (0x00045cf7) popup_ai_message_window

0x8f3e,	// (0x00045da7) popup_fep_china_uni_window_ParamLimits

0x8f3e,	// (0x00045da7) popup_fep_china_uni_window

0x8f9e,	// (0x00045e07) popup_fep_japan_candidate_window_ParamLimits

0x8f9e,	// (0x00045e07) popup_fep_japan_candidate_window

0x8fc8,	// (0x00045e31) popup_fep_japan_predictive_window_ParamLimits

0x8fc8,	// (0x00045e31) popup_fep_japan_predictive_window

0x8ffe,	// (0x00045e67) popup_find_window

0x900b,	// (0x00045e74) popup_grid_graphic_window_ParamLimits

0x900b,	// (0x00045e74) popup_grid_graphic_window

0x9039,	// (0x00045ea2) popup_large_graphic_colour_window

0x905f,	// (0x00045ec8) popup_menu_window_ParamLimits

0x905f,	// (0x00045ec8) popup_menu_window

0x9229,	// (0x00046092) popup_note_image_window

0x9213,	// (0x0004607c) popup_note_wait_window_ParamLimits

0x9213,	// (0x0004607c) popup_note_wait_window

0x9213,	// (0x0004607c) popup_note_window_ParamLimits

0x9213,	// (0x0004607c) popup_note_window

0x928f,	// (0x000460f8) popup_query_code_window_ParamLimits

0x928f,	// (0x000460f8) popup_query_code_window

0x92a5,	// (0x0004610e) popup_query_data_code_window_ParamLimits

0x92a5,	// (0x0004610e) popup_query_data_code_window

0x92c8,	// (0x00046131) popup_query_data_window_ParamLimits

0x92c8,	// (0x00046131) popup_query_data_window

0x92ea,	// (0x00046153) popup_query_sat_info_window_ParamLimits

0x92ea,	// (0x00046153) popup_query_sat_info_window

0x9329,	// (0x00046192) popup_snote_single_graphic_window_ParamLimits

0x9329,	// (0x00046192) popup_snote_single_graphic_window

0x9329,	// (0x00046192) popup_snote_single_text_window_ParamLimits

0x9329,	// (0x00046192) popup_snote_single_text_window

0x9340,	// (0x000461a9) popup_sub_window_general

0x9486,	// (0x000462ef) popup_window_general_ParamLimits

0x9486,	// (0x000462ef) popup_window_general

0x949f,	// (0x00046308) power_save_pane

0x6208,	// (0x00043071) control_pane_g1_ParamLimits

0x6208,	// (0x00043071) control_pane_g1

0x6231,	// (0x0004309a) control_pane_g2_ParamLimits

0x6231,	// (0x0004309a) control_pane_g2

0x8dc3,	// (0x00045c2c) control_pane_g3_ParamLimits

0x8dc3,	// (0x00045c2c) control_pane_g3

0x0007,

0xf7a5,	// (0x0004c60e) control_pane_g_ParamLimits

0xf7a5,	// (0x0004c60e) control_pane_g

0x6279,	// (0x000430e2) control_pane_t1_ParamLimits

0x6279,	// (0x000430e2) control_pane_t1

0x62cb,	// (0x00043134) control_pane_t2_ParamLimits

0x62cb,	// (0x00043134) control_pane_t2

0x0002,

0xf7b6,	// (0x0004c61f) control_pane_t_ParamLimits

0xf7b6,	// (0x0004c61f) control_pane_t

0x8ce4,	// (0x00045b4d) navi_navi_volume_pane_cp1

0x8ced,	// (0x00045b56) status_small_icon_pane

0x8cf5,	// (0x00045b5e) status_small_pane_g1_ParamLimits

0x8cf5,	// (0x00045b5e) status_small_pane_g1

0x8d29,	// (0x00045b92) status_small_pane_g2_ParamLimits

0x8d29,	// (0x00045b92) status_small_pane_g2

0x8d35,	// (0x00045b9e) status_small_pane_g3_ParamLimits

0x8d35,	// (0x00045b9e) status_small_pane_g3

0x8d41,	// (0x00045baa) status_small_pane_g4_ParamLimits

0x8d41,	// (0x00045baa) status_small_pane_g4

0x8d4d,	// (0x00045bb6) status_small_pane_g5_ParamLimits

0x8d4d,	// (0x00045bb6) status_small_pane_g5

0x8d5c,	// (0x00045bc5) status_small_pane_g6_ParamLimits

0x8d5c,	// (0x00045bc5) status_small_pane_g6

0x0007,

0xf794,	// (0x0004c5fd) status_small_pane_g_ParamLimits

0xf794,	// (0x0004c5fd) status_small_pane_g

0x8d8c,	// (0x00045bf5) status_small_pane_t1

0x8daf,	// (0x00045c18) status_small_wait_pane_ParamLimits

0x8daf,	// (0x00045c18) status_small_wait_pane

0x858d,	// (0x000453f6) aid_levels_signal_ParamLimits

0x858d,	// (0x000453f6) aid_levels_signal

0x859f,	// (0x00045408) signal_pane_g1_ParamLimits

0x859f,	// (0x00045408) signal_pane_g1

0x85b4,	// (0x0004541d) signal_pane_g2_ParamLimits

0x85b4,	// (0x0004541d) signal_pane_g2

0x0001,

0xf729,	// (0x0004c592) signal_pane_g_ParamLimits

0xf729,	// (0x0004c592) signal_pane_g

0x85c9,	// (0x00045432) context_pane_g1

0x753b,	// (0x000443a4) title_pane_g1

0x7565,	// (0x000443ce) title_pane_t1

0x75cd,	// (0x00044436) title_pane_t2

0x75f3,	// (0x0004445c) title_pane_t3

0x0002,

0xf573,	// (0x0004c3dc) title_pane_t

0x98ae,	// (0x00046717) aid_levels_battery_ParamLimits

0x98ae,	// (0x00046717) aid_levels_battery

0x98c2,	// (0x0004672b) battery_pane_g1_ParamLimits

0x98c2,	// (0x0004672b) battery_pane_g1

0x98d8,	// (0x00046741) battery_pane_g2_ParamLimits

0x98d8,	// (0x00046741) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004c631) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004c631) battery_pane_g

0xab80,	// (0x000479e9) uni_indicator_pane_g1

0xab95,	// (0x000479fe) uni_indicator_pane_g2

0xabab,	// (0x00047a14) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004c7a0) uni_indicator_pane_g

0x8964,	// (0x000457cd) navi_icon_pane_ParamLimits

0x8964,	// (0x000457cd) navi_icon_pane

0x88ab,	// (0x00045714) navi_midp_pane

0x8980,	// (0x000457e9) navi_navi_pane

0x898a,	// (0x000457f3) navi_text_pane_ParamLimits

0x898a,	// (0x000457f3) navi_text_pane

0x2c1c,	// (0x0003fa85) status_small_wait_pane_g1

0x7a37,	// (0x000448a0) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004c79b) status_small_wait_pane_g

0xa893,	// (0x000476fc) navi_navi_icon_text_pane

0xa89b,	// (0x00047704) navi_navi_pane_g1_ParamLimits

0xa89b,	// (0x00047704) navi_navi_pane_g1

0xa8ad,	// (0x00047716) navi_navi_pane_g2_ParamLimits

0xa8ad,	// (0x00047716) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004c769) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004c769) navi_navi_pane_g

0xa8bf,	// (0x00047728) navi_navi_tabs_pane

0xa8c8,	// (0x00047731) navi_navi_text_pane

0xa893,	// (0x000476fc) navi_navi_volume_pane

0xa86c,	// (0x000476d5) navi_text_pane_t1

0xa85d,	// (0x000476c6) navi_icon_pane_g1

0xa7b0,	// (0x00047619) navi_navi_text_pane_t1

0x65fa,	// (0x00043463) navi_navi_volume_pane_g1

0x6602,	// (0x0004346b) volume_small_pane

0xa716,	// (0x0004757f) navi_navi_icon_text_pane_g1

0xa71e,	// (0x00047587) navi_navi_icon_text_pane_t1

0x8980,	// (0x000457e9) navi_tabs_2_long_pane

0x8980,	// (0x000457e9) navi_tabs_2_pane

0x8980,	// (0x000457e9) navi_tabs_3_long_pane

0x8980,	// (0x000457e9) navi_tabs_3_pane

0x8980,	// (0x000457e9) navi_tabs_4_pane

0x65da,	// (0x00043443) tabs_2_active_pane_ParamLimits

0x65da,	// (0x00043443) tabs_2_active_pane

0x65ea,	// (0x00043453) tabs_2_passive_pane_ParamLimits

0x65ea,	// (0x00043453) tabs_2_passive_pane

0x65a8,	// (0x00043411) tabs_3_active_pane_ParamLimits

0x65a8,	// (0x00043411) tabs_3_active_pane

0x65b8,	// (0x00043421) tabs_3_passive_pane_ParamLimits

0x65b8,	// (0x00043421) tabs_3_passive_pane

0x65c9,	// (0x00043432) tabs_3_passive_pane_cp_ParamLimits

0x65c9,	// (0x00043432) tabs_3_passive_pane_cp

0x655c,	// (0x000433c5) tabs_4_active_pane_ParamLimits

0x655c,	// (0x000433c5) tabs_4_active_pane

0x656f,	// (0x000433d8) tabs_4_passive_pane_ParamLimits

0x656f,	// (0x000433d8) tabs_4_passive_pane

0x6580,	// (0x000433e9) tabs_4_passive_pane_cp_ParamLimits

0x6580,	// (0x000433e9) tabs_4_passive_pane_cp

0x6591,	// (0x000433fa) tabs_4_passive_pane_cp2_ParamLimits

0x6591,	// (0x000433fa) tabs_4_passive_pane_cp2

0x6538,	// (0x000433a1) tabs_2_long_active_pane_ParamLimits

0x6538,	// (0x000433a1) tabs_2_long_active_pane

0x654a,	// (0x000433b3) tabs_2_long_passive_pane_ParamLimits

0x654a,	// (0x000433b3) tabs_2_long_passive_pane

0x64f9,	// (0x00043362) tabs_3_long_active_pane_ParamLimits

0x64f9,	// (0x00043362) tabs_3_long_active_pane

0x650c,	// (0x00043375) tabs_3_long_passive_pane_ParamLimits

0x650c,	// (0x00043375) tabs_3_long_passive_pane

0x6525,	// (0x0004338e) tabs_3_long_passive_pane_cp_ParamLimits

0x6525,	// (0x0004338e) tabs_3_long_passive_pane_cp

0x649f,	// (0x00043308) volume_small_pane_g1

0x64a8,	// (0x00043311) volume_small_pane_g2

0x64b1,	// (0x0004331a) volume_small_pane_g3

0x64ba,	// (0x00043323) volume_small_pane_g4

0x64c3,	// (0x0004332c) volume_small_pane_g5

0x64cc,	// (0x00043335) volume_small_pane_g6

0x64d5,	// (0x0004333e) volume_small_pane_g7

0x64de,	// (0x00043347) volume_small_pane_g8

0x64e7,	// (0x00043350) volume_small_pane_g9

0x64f0,	// (0x00043359) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004c735) volume_small_pane_g

0x7605,	// (0x0004446e) bg_active_tab_pane_cp2_ParamLimits

0x7605,	// (0x0004446e) bg_active_tab_pane_cp2

0x7613,	// (0x0004447c) tabs_3_active_pane_g1

0x761b,	// (0x00044484) tabs_3_active_pane_t1

0x7605,	// (0x0004446e) bg_passive_tab_pane_cp2_ParamLimits

0x7605,	// (0x0004446e) bg_passive_tab_pane_cp2

0x7613,	// (0x0004447c) tabs_3_passive_pane_g1

0x761b,	// (0x00044484) tabs_3_passive_pane_t1

0x7605,	// (0x0004446e) bg_active_tab_pane_cp3_ParamLimits

0x7605,	// (0x0004446e) bg_active_tab_pane_cp3

0x762d,	// (0x00044496) tabs_4_active_pane_g1

0x7635,	// (0x0004449e) tabs_4_active_pane_t1

0x7605,	// (0x0004446e) bg_passive_tab_pane_cp3_ParamLimits

0x7605,	// (0x0004446e) bg_passive_tab_pane_cp3

0x762d,	// (0x00044496) tabs_4_1_passive_pane_g1

0x7635,	// (0x0004449e) tabs_4_1_passive_pane_t1

0x8e74,	// (0x00045cdd) list_highlight_pane_cp2

0xae0f,	// (0x00047c78) list_set_pane_ParamLimits

0xae0f,	// (0x00047c78) list_set_pane

0xaed7,	// (0x00047d40) main_pane_set_t1_ParamLimits

0xaed7,	// (0x00047d40) main_pane_set_t1

0xaef7,	// (0x00047d60) main_pane_set_t2_ParamLimits

0xaef7,	// (0x00047d60) main_pane_set_t2

0xaf0b,	// (0x00047d74) main_pane_set_t3_ParamLimits

0xaf0b,	// (0x00047d74) main_pane_set_t3

0xaf1f,	// (0x00047d88) main_pane_set_t4_ParamLimits

0xaf1f,	// (0x00047d88) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004c805) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004c805) main_pane_set_t

0xaf3f,	// (0x00047da8) setting_code_pane

0xaf49,	// (0x00047db2) setting_slider_graphic_pane

0xaf49,	// (0x00047db2) setting_slider_pane

0xaf49,	// (0x00047db2) setting_text_pane

0xaf49,	// (0x00047db2) setting_volume_pane

0x5c21,	// (0x00042a8a) volume_set_pane

0x7605,	// (0x0004446e) bg_set_opt_pane_cp

0x5c2b,	// (0x00042a94) setting_slider_pane_t1

0x5c41,	// (0x00042aaa) setting_slider_pane_t2

0x5c5b,	// (0x00042ac4) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004c3e3) setting_slider_pane_t

0x5c73,	// (0x00042adc) slider_set_pane

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp2

0x7647,	// (0x000444b0) setting_slider_graphic_pane_g1

0x5c89,	// (0x00042af2) setting_slider_graphic_pane_t1

0x5c99,	// (0x00042b02) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004c3ea) setting_slider_graphic_pane_t

0x5ca9,	// (0x00042b12) slider_set_pane_cp

0x2c26,	// (0x0003fa8f) input_focus_pane_cp1

0xadd0,	// (0x00047c39) list_set_text_pane

0x2c1c,	// (0x0003fa85) setting_text_pane_g1

0x2c26,	// (0x0003fa8f) input_focus_pane_cp2

0x2c1c,	// (0x0003fa85) setting_code_pane_g1

0x7650,	// (0x000444b9) setting_code_pane_t1

0x4ab1,	// (0x0004191a) set_text_pane_t1_ParamLimits

0x4ab1,	// (0x0004191a) set_text_pane_t1

0x7eff,	// (0x00044d68) set_opt_bg_pane_g1

0x7f07,	// (0x00044d70) set_opt_bg_pane_g2

0xada8,	// (0x00047c11) set_opt_bg_pane_g3

0x7f17,	// (0x00044d80) set_opt_bg_pane_g4

0x7f1f,	// (0x00044d88) set_opt_bg_pane_g5

0x7f27,	// (0x00044d90) set_opt_bg_pane_g6

0xadb2,	// (0x00047c1b) set_opt_bg_pane_g7

0xadbc,	// (0x00047c25) set_opt_bg_pane_g8

0xadc6,	// (0x00047c2f) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004c7f2) set_opt_bg_pane_g

0xad9b,	// (0x00047c04) slider_set_pane_g1

0x6683,	// (0x000434ec) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004c7e3) slider_set_pane_g

0x660b,	// (0x00043474) volume_set_pane_g1

0x6615,	// (0x0004347e) volume_set_pane_g2

0x661f,	// (0x00043488) volume_set_pane_g3

0x6629,	// (0x00043492) volume_set_pane_g4

0x6633,	// (0x0004349c) volume_set_pane_g5

0x663d,	// (0x000434a6) volume_set_pane_g6

0x6647,	// (0x000434b0) volume_set_pane_g7

0x6651,	// (0x000434ba) volume_set_pane_g8

0x665b,	// (0x000434c4) volume_set_pane_g9

0x6665,	// (0x000434ce) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004c7bb) volume_set_pane_g

0x765e,	// (0x000444c7) indicator_pane_ParamLimits

0x765e,	// (0x000444c7) indicator_pane

0x766a,	// (0x000444d3) main_idle_pane_g2_ParamLimits

0x766a,	// (0x000444d3) main_idle_pane_g2

0x7692,	// (0x000444fb) main_pane_idle_g1_ParamLimits

0x7692,	// (0x000444fb) main_pane_idle_g1

0x76a0,	// (0x00044509) popup_clock_digital_analogue_window_ParamLimits

0x76a0,	// (0x00044509) popup_clock_digital_analogue_window

0x76b7,	// (0x00044520) soft_indicator_pane_ParamLimits

0x76b7,	// (0x00044520) soft_indicator_pane

0x76c5,	// (0x0004452e) wallpaper_pane_ParamLimits

0x76c5,	// (0x0004452e) wallpaper_pane

0x2c1c,	// (0x0003fa85) wallpaper_pane_g1

0x76d9,	// (0x00044542) indicator_pane_g1_ParamLimits

0x76d9,	// (0x00044542) indicator_pane_g1

0xb20d,	// (0x00048076) navi_navi_icon_text_pane_srt_g1

0x76f4,	// (0x0004455d) soft_indicator_pane_t1

0x770e,	// (0x00044577) aid_ps_area_pane

0x771f,	// (0x00044588) aid_ps_clock_pane

0x772d,	// (0x00044596) aid_ps_indicator_pane

0x7739,	// (0x000445a2) indicator_ps_pane_ParamLimits

0x7739,	// (0x000445a2) indicator_ps_pane

0x7748,	// (0x000445b1) power_save_pane_g1_ParamLimits

0x7748,	// (0x000445b1) power_save_pane_g1

0x7754,	// (0x000445bd) power_save_pane_g2_ParamLimits

0x7754,	// (0x000445bd) power_save_pane_g2

0x582a,	// (0x00042693) aid_navinavi_width_pane

0x770e,	// (0x00044577) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0004c3ef) power_save_pane_g_ParamLimits

0xf586,	// (0x0004c3ef) power_save_pane_g

0x7762,	// (0x000445cb) power_save_pane_t1_ParamLimits

0x7762,	// (0x000445cb) power_save_pane_t1

0x771f,	// (0x00044588) aid_ps_clock_pane_ParamLimits

0x772d,	// (0x00044596) aid_ps_indicator_pane_ParamLimits

0x7774,	// (0x000445dd) power_save_pane_t4_ParamLimits

0x7774,	// (0x000445dd) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004c3f4) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004c3f4) power_save_pane_t

0x779e,	// (0x00044607) power_save_t3_ParamLimits

0x779e,	// (0x00044607) power_save_t3

0x7789,	// (0x000445f2) power_save_t2_ParamLimits

0x7789,	// (0x000445f2) power_save_t2

0x77b3,	// (0x0004461c) indicator_ps_pane_g1

0x77bc,	// (0x00044625) ai_gene_pane_ParamLimits

0x77bc,	// (0x00044625) ai_gene_pane

0x77c8,	// (0x00044631) ai_links_pane_ParamLimits

0x77c8,	// (0x00044631) ai_links_pane

0x77d4,	// (0x0004463d) indicator_pane_cp1_ParamLimits

0x77d4,	// (0x0004463d) indicator_pane_cp1

0x77e0,	// (0x00044649) main_pane_idle_g1_cp_ParamLimits

0x77e0,	// (0x00044649) main_pane_idle_g1_cp

0x77ec,	// (0x00044655) popup_ai_links_title_window

0x77f5,	// (0x0004465e) soft_indicator_pane_cp1_ParamLimits

0x77f5,	// (0x0004465e) soft_indicator_pane_cp1

0xab6e,	// (0x000479d7) ai_links_pane_g1

0xab77,	// (0x000479e0) grid_ai_links_pane

0xab53,	// (0x000479bc) ai_gene_pane_1

0xab5c,	// (0x000479c5) ai_gene_pane_2

0xab65,	// (0x000479ce) list_highlight_pane_cp4

0xab33,	// (0x0004799c) cell_ai_link_pane_ParamLimits

0xab33,	// (0x0004799c) cell_ai_link_pane

0xab2b,	// (0x00047994) cell_ai_link_pane_g1

0x7a37,	// (0x000448a0) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004c796) cell_ai_link_pane_g

0x2c26,	// (0x0003fa8f) grid_highlight_cp2

0x2c26,	// (0x0003fa8f) bg_popup_sub_pane_cp1

0x780f,	// (0x00044678) popup_ai_links_title_window_t1

0xaa77,	// (0x000478e0) ai_gene_pane_1_g1_ParamLimits

0xaa77,	// (0x000478e0) ai_gene_pane_1_g1

0xaa83,	// (0x000478ec) ai_gene_pane_1_g2_ParamLimits

0xaa83,	// (0x000478ec) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004c78c) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004c78c) ai_gene_pane_1_g

0xaa90,	// (0x000478f9) ai_gene_pane_1_t1_ParamLimits

0xaa90,	// (0x000478f9) ai_gene_pane_1_t1

0xaac4,	// (0x0004792d) grid_ai_soft_ind_pane

0xaa62,	// (0x000478cb) ai_gene_pane_2_t1_ParamLimits

0xaa62,	// (0x000478cb) ai_gene_pane_2_t1

0x781e,	// (0x00044687) main_pane_empty_t1_ParamLimits

0x781e,	// (0x00044687) main_pane_empty_t1

0x7836,	// (0x0004469f) main_pane_empty_t2_ParamLimits

0x7836,	// (0x0004469f) main_pane_empty_t2

0x784b,	// (0x000446b4) main_pane_empty_t3_ParamLimits

0x784b,	// (0x000446b4) main_pane_empty_t3

0x785d,	// (0x000446c6) main_pane_empty_t4_ParamLimits

0x785d,	// (0x000446c6) main_pane_empty_t4

0x786f,	// (0x000446d8) main_pane_empty_t5_ParamLimits

0x786f,	// (0x000446d8) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004c3f9) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004c3f9) main_pane_empty_t

0x7f50,	// (0x00044db9) bg_popup_window_pane_ParamLimits

0x7f50,	// (0x00044db9) bg_popup_window_pane

0xa7be,	// (0x00047627) find_popup_pane_cp2_ParamLimits

0xa7be,	// (0x00047627) find_popup_pane_cp2

0xa7ca,	// (0x00047633) heading_pane_ParamLimits

0xa7ca,	// (0x00047633) heading_pane

0x2c26,	// (0x0003fa8f) bg_popup_sub_pane

0xa738,	// (0x000475a1) bg_popup_window_pane_g1_ParamLimits

0xa738,	// (0x000475a1) bg_popup_window_pane_g1

0xa744,	// (0x000475ad) bg_popup_window_pane_g2_ParamLimits

0xa744,	// (0x000475ad) bg_popup_window_pane_g2

0xa750,	// (0x000475b9) bg_popup_window_pane_g3_ParamLimits

0xa750,	// (0x000475b9) bg_popup_window_pane_g3

0xa75c,	// (0x000475c5) bg_popup_window_pane_g4_ParamLimits

0xa75c,	// (0x000475c5) bg_popup_window_pane_g4

0xa768,	// (0x000475d1) bg_popup_window_pane_g5_ParamLimits

0xa768,	// (0x000475d1) bg_popup_window_pane_g5

0xa774,	// (0x000475dd) bg_popup_window_pane_g6_ParamLimits

0xa774,	// (0x000475dd) bg_popup_window_pane_g6

0xa780,	// (0x000475e9) bg_popup_window_pane_g7_ParamLimits

0xa780,	// (0x000475e9) bg_popup_window_pane_g7

0xa78c,	// (0x000475f5) bg_popup_window_pane_g8_ParamLimits

0xa78c,	// (0x000475f5) bg_popup_window_pane_g8

0xa798,	// (0x00047601) bg_popup_window_pane_g9_ParamLimits

0xa798,	// (0x00047601) bg_popup_window_pane_g9

0xa7a4,	// (0x0004760d) bg_popup_window_pane_g10_ParamLimits

0xa7a4,	// (0x0004760d) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004c754) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004c754) bg_popup_window_pane_g

0xa6cd,	// (0x00047536) bg_popup_heading_pane_ParamLimits

0xa6cd,	// (0x00047536) bg_popup_heading_pane

0x66f5,	// (0x0004355e) tabs_4_passive_pane_cp_srt_ParamLimits

0x66f5,	// (0x0004355e) tabs_4_passive_pane_cp_srt

0x6707,	// (0x00043570) tabs_4_passive_pane_srt_ParamLimits

0xa6e1,	// (0x0004754a) heading_pane_g2

0x6707,	// (0x00043570) tabs_4_passive_pane_srt

0x8e74,	// (0x00045cdd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e74,	// (0x00045cdd) bg_passive_tab_pane_cp3_srt

0xa6e9,	// (0x00047552) heading_pane_t1_ParamLimits

0xa6e9,	// (0x00047552) heading_pane_t1

0xa700,	// (0x00047569) heading_pane_t2_ParamLimits

0xa700,	// (0x00047569) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004c74f) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004c74f) heading_pane_t

0xa1f8,	// (0x00047061) bg_popup_heading_pane_g1

0xa2a7,	// (0x00047110) bg_popup_heading_pane_g2

0xa2b1,	// (0x0004711a) bg_popup_heading_pane_g3

0xa2bb,	// (0x00047124) bg_popup_heading_pane_g4

0xa2c5,	// (0x0004712e) bg_popup_heading_pane_g5

0xa2cf,	// (0x00047138) bg_popup_heading_pane_g6

0xa2d7,	// (0x00047140) bg_popup_heading_pane_g7

0xa2df,	// (0x00047148) bg_popup_heading_pane_g8

0xa2e9,	// (0x00047152) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004c70b) bg_popup_heading_pane_g

0x99b0,	// (0x00046819) bg_popup_sub_pane_g1

0x99b8,	// (0x00046821) bg_popup_sub_pane_g2

0x99c0,	// (0x00046829) bg_popup_sub_pane_g3

0x99c8,	// (0x00046831) bg_popup_sub_pane_g4

0x99d0,	// (0x00046839) bg_popup_sub_pane_g5

0x99d8,	// (0x00046841) bg_popup_sub_pane_g6

0x99e0,	// (0x00046849) bg_popup_sub_pane_g7

0x99e8,	// (0x00046851) bg_popup_sub_pane_g8

0x99f0,	// (0x00046859) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004c6e5) bg_popup_sub_pane_g

0x7881,	// (0x000446ea) bg_popup_window_pane_cp5_ParamLimits

0x7881,	// (0x000446ea) bg_popup_window_pane_cp5

0x789d,	// (0x00044706) popup_note_window_g1_ParamLimits

0x789d,	// (0x00044706) popup_note_window_g1

0x78a9,	// (0x00044712) popup_note_window_t1_ParamLimits

0x78a9,	// (0x00044712) popup_note_window_t1

0x78bf,	// (0x00044728) popup_note_window_t2_ParamLimits

0x78bf,	// (0x00044728) popup_note_window_t2

0x78d5,	// (0x0004473e) popup_note_window_t3_ParamLimits

0x78d5,	// (0x0004473e) popup_note_window_t3

0x78eb,	// (0x00044754) popup_note_window_t4_ParamLimits

0x78eb,	// (0x00044754) popup_note_window_t4

0x7913,	// (0x0004477c) popup_note_window_t5_ParamLimits

0x7913,	// (0x0004477c) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004c404) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004c404) popup_note_window_t

0x7937,	// (0x000447a0) bg_popup_window_pane_cp6_ParamLimits

0x7937,	// (0x000447a0) bg_popup_window_pane_cp6

0xa174,	// (0x00046fdd) popup_note_image_window_g1_ParamLimits

0xa174,	// (0x00046fdd) popup_note_image_window_g1

0xa180,	// (0x00046fe9) popup_note_image_window_g2_ParamLimits

0xa180,	// (0x00046fe9) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004c6d9) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004c6d9) popup_note_image_window_g

0xa199,	// (0x00047002) popup_note_image_window_t1_ParamLimits

0xa199,	// (0x00047002) popup_note_image_window_t1

0xa1b2,	// (0x0004701b) popup_note_image_window_t2_ParamLimits

0xa1b2,	// (0x0004701b) popup_note_image_window_t2

0xa1cb,	// (0x00047034) popup_note_image_window_t3_ParamLimits

0xa1cb,	// (0x00047034) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004c6de) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004c6de) popup_note_image_window_t

0xa034,	// (0x00046e9d) bg_popup_window_pane_cp7_ParamLimits

0xa034,	// (0x00046e9d) bg_popup_window_pane_cp7

0xa064,	// (0x00046ecd) popup_note_wait_window_g1_ParamLimits

0xa064,	// (0x00046ecd) popup_note_wait_window_g1

0xa070,	// (0x00046ed9) popup_note_wait_window_g2_ParamLimits

0xa070,	// (0x00046ed9) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004c6c7) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004c6c7) popup_note_wait_window_g

0xa088,	// (0x00046ef1) popup_note_wait_window_t1_ParamLimits

0xa088,	// (0x00046ef1) popup_note_wait_window_t1

0xa0af,	// (0x00046f18) popup_note_wait_window_t2_ParamLimits

0xa0af,	// (0x00046f18) popup_note_wait_window_t2

0xa0cd,	// (0x00046f36) popup_note_wait_window_t3_ParamLimits

0xa0cd,	// (0x00046f36) popup_note_wait_window_t3

0xa0e0,	// (0x00046f49) popup_note_wait_window_t4_ParamLimits

0xa0e0,	// (0x00046f49) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004c6ce) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004c6ce) popup_note_wait_window_t

0xa105,	// (0x00046f6e) wait_bar_pane_ParamLimits

0xa105,	// (0x00046f6e) wait_bar_pane

0x2c26,	// (0x0003fa8f) wait_anim_pane

0x2c26,	// (0x0003fa8f) wait_border_pane

0x2c1c,	// (0x0003fa85) wait_anim_pane_g1

0x2c1c,	// (0x0003fa85) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0004c58d) wait_anim_pane_g

0x9fd8,	// (0x00046e41) wait_border_pane_g1

0x9fe3,	// (0x00046e4c) wait_border_pane_g2

0x9fec,	// (0x00046e55) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004c6c0) wait_border_pane_g

0x9e42,	// (0x00046cab) bg_popup_window_pane_cp16_ParamLimits

0x9e42,	// (0x00046cab) bg_popup_window_pane_cp16

0x9f42,	// (0x00046dab) indicator_popup_pane_cp4_ParamLimits

0x9f42,	// (0x00046dab) indicator_popup_pane_cp4

0x9f56,	// (0x00046dbf) popup_query_data_window_t1_ParamLimits

0x9f56,	// (0x00046dbf) popup_query_data_window_t1

0x9f68,	// (0x00046dd1) popup_query_data_window_t2_ParamLimits

0x9f68,	// (0x00046dd1) popup_query_data_window_t2

0x9f81,	// (0x00046dea) popup_query_data_window_t3_ParamLimits

0x9f81,	// (0x00046dea) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004c6b9) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004c6b9) popup_query_data_window_t

0x9f9b,	// (0x00046e04) query_popup_data_pane_ParamLimits

0x9f9b,	// (0x00046e04) query_popup_data_pane

0x9faf,	// (0x00046e18) query_popup_data_pane_cp1_ParamLimits

0x9faf,	// (0x00046e18) query_popup_data_pane_cp1

0x9e42,	// (0x00046cab) bg_popup_window_pane_cp10_ParamLimits

0x9e42,	// (0x00046cab) bg_popup_window_pane_cp10

0x9e74,	// (0x00046cdd) indicator_popup_pane_ParamLimits

0x9e74,	// (0x00046cdd) indicator_popup_pane

0x9e96,	// (0x00046cff) popup_query_code_window_t1_ParamLimits

0x9e96,	// (0x00046cff) popup_query_code_window_t1

0x9eb0,	// (0x00046d19) popup_query_code_window_t2_ParamLimits

0x9eb0,	// (0x00046d19) popup_query_code_window_t2

0x9ef9,	// (0x00046d62) popup_query_code_window_t3_ParamLimits

0x9ef9,	// (0x00046d62) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004c6b2) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004c6b2) popup_query_code_window_t

0x9f28,	// (0x00046d91) query_popup_pane_ParamLimits

0x9f28,	// (0x00046d91) query_popup_pane

0x7937,	// (0x000447a0) bg_popup_window_pane_cp15_ParamLimits

0x7937,	// (0x000447a0) bg_popup_window_pane_cp15

0x7957,	// (0x000447c0) indicator_popup_pane_cp1_ParamLimits

0x7957,	// (0x000447c0) indicator_popup_pane_cp1

0x796a,	// (0x000447d3) indicator_popup_pane_cp2_ParamLimits

0x796a,	// (0x000447d3) indicator_popup_pane_cp2

0x7985,	// (0x000447ee) popup_query_data_code_window_g1_ParamLimits

0x7985,	// (0x000447ee) popup_query_data_code_window_g1

0x7998,	// (0x00044801) popup_query_data_code_window_t1_ParamLimits

0x7998,	// (0x00044801) popup_query_data_code_window_t1

0x79aa,	// (0x00044813) popup_query_data_code_window_t2_ParamLimits

0x79aa,	// (0x00044813) popup_query_data_code_window_t2

0x79bc,	// (0x00044825) popup_query_data_code_window_t3_ParamLimits

0x79bc,	// (0x00044825) popup_query_data_code_window_t3

0x79d2,	// (0x0004483b) popup_query_data_code_window_t4_ParamLimits

0x79d2,	// (0x0004483b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0004c40f) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0004c40f) popup_query_data_code_window_t

0x8920,	// (0x00045789) list_single_midp_graphic_pane_g3

0x79ec,	// (0x00044855) query_popup_data_pane_cp2_ParamLimits

0x79ff,	// (0x00044868) query_popup_pane_cp2_ParamLimits

0x79ff,	// (0x00044868) query_popup_pane_cp2

0x2c26,	// (0x0003fa8f) bg_popup_window_pane_cp11

0x9e3a,	// (0x00046ca3) heading_pane_cp5

0x7aef,	// (0x00044958) listscroll_popup_info_pane

0x2c26,	// (0x0003fa8f) input_focus_pane_cp3

0x7a1a,	// (0x00044883) query_popup_pane_t1

0x7a28,	// (0x00044891) list_popup_info_pane_ParamLimits

0x7a28,	// (0x00044891) list_popup_info_pane

0x7a37,	// (0x000448a0) listscroll_popup_info_pane_g1

0x7a3f,	// (0x000448a8) scroll_pane_cp7

0x7a49,	// (0x000448b2) popup_info_list_pane_t1_ParamLimits

0x7a49,	// (0x000448b2) popup_info_list_pane_t1

0x7a63,	// (0x000448cc) popup_info_list_pane_t2_ParamLimits

0x7a63,	// (0x000448cc) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004c418) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004c418) popup_info_list_pane_t

0x2c26,	// (0x0003fa8f) bg_popup_window_pane_cp12

0xb227,	// (0x00048090) find_popup_pane

0x7605,	// (0x0004446e) bg_popup_window_pane_cp3

0x7a7d,	// (0x000448e6) heading_pane_cp3

0x7a89,	// (0x000448f2) listscroll_popup_graphic_pane

0x2c26,	// (0x0003fa8f) bg_popup_window_pane_cp4

0x7ae5,	// (0x0004494e) heading_pane_cp4

0x7aef,	// (0x00044958) listscroll_popup_colour_pane

0x7af7,	// (0x00044960) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7af7,	// (0x00044960) cell_large_graphic_colour_none_popup_pane

0x7b0b,	// (0x00044974) grid_large_graphic_colour_popup_pane_ParamLimits

0x7b0b,	// (0x00044974) grid_large_graphic_colour_popup_pane

0x7b37,	// (0x000449a0) listscroll_popup_colour_pane_g1_ParamLimits

0x7b37,	// (0x000449a0) listscroll_popup_colour_pane_g1

0x7b4e,	// (0x000449b7) listscroll_popup_colour_pane_g2_ParamLimits

0x7b4e,	// (0x000449b7) listscroll_popup_colour_pane_g2

0x7b65,	// (0x000449ce) listscroll_popup_colour_pane_g3_ParamLimits

0x7b65,	// (0x000449ce) listscroll_popup_colour_pane_g3

0x7b75,	// (0x000449de) listscroll_popup_colour_pane_g4_ParamLimits

0x7b75,	// (0x000449de) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004c41d) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004c41d) listscroll_popup_colour_pane_g

0x7b89,	// (0x000449f2) scroll_pane_cp6_ParamLimits

0x7b89,	// (0x000449f2) scroll_pane_cp6

0x7b9b,	// (0x00044a04) cell_large_graphic_colour_popup_pane_ParamLimits

0x7b9b,	// (0x00044a04) cell_large_graphic_colour_popup_pane

0x7bc0,	// (0x00044a29) cell_large_graphic_colour_none_popup_pane_t1

0x2c26,	// (0x0003fa8f) grid_highlight_pane_cp5

0x7bcf,	// (0x00044a38) cell_large_graphic_colour_popup_pane_g1

0x7bd7,	// (0x00044a40) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004c426) cell_large_graphic_colour_popup_pane_g

0x7bdf,	// (0x00044a48) cell_large_graphic_colour_popup_pane_g2_copy1

0x7be8,	// (0x00044a51) grid_highlight_pane_cp4

0x7bf0,	// (0x00044a59) bg_popup_window_pane_cp8_ParamLimits

0x7bf0,	// (0x00044a59) bg_popup_window_pane_cp8

0x7c0b,	// (0x00044a74) popup_snote_single_text_window_g1_ParamLimits

0x7c0b,	// (0x00044a74) popup_snote_single_text_window_g1

0x7c1d,	// (0x00044a86) popup_snote_single_text_window_t1_ParamLimits

0x7c1d,	// (0x00044a86) popup_snote_single_text_window_t1

0x7c30,	// (0x00044a99) popup_snote_single_text_window_t2_ParamLimits

0x7c30,	// (0x00044a99) popup_snote_single_text_window_t2

0x7c43,	// (0x00044aac) popup_snote_single_text_window_t3_ParamLimits

0x7c43,	// (0x00044aac) popup_snote_single_text_window_t3

0x7c7c,	// (0x00044ae5) popup_snote_single_text_window_t4_ParamLimits

0x7c7c,	// (0x00044ae5) popup_snote_single_text_window_t4

0x7cb0,	// (0x00044b19) popup_snote_single_text_window_t5_ParamLimits

0x7cb0,	// (0x00044b19) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004c42b) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004c42b) popup_snote_single_text_window_t

0x7cdf,	// (0x00044b48) bg_popup_window_pane_cp9_ParamLimits

0x7cdf,	// (0x00044b48) bg_popup_window_pane_cp9

0x7c0b,	// (0x00044a74) popup_snote_single_graphic_window_g1_ParamLimits

0x7c0b,	// (0x00044a74) popup_snote_single_graphic_window_g1

0x7ced,	// (0x00044b56) popup_snote_single_graphic_window_g2_ParamLimits

0x7ced,	// (0x00044b56) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004c436) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004c436) popup_snote_single_graphic_window_g

0x7cf9,	// (0x00044b62) popup_snote_single_graphic_window_t1_ParamLimits

0x7cf9,	// (0x00044b62) popup_snote_single_graphic_window_t1

0x7d0c,	// (0x00044b75) popup_snote_single_graphic_window_t2_ParamLimits

0x7d0c,	// (0x00044b75) popup_snote_single_graphic_window_t2

0x7d1f,	// (0x00044b88) popup_snote_single_graphic_window_t3_ParamLimits

0x7d1f,	// (0x00044b88) popup_snote_single_graphic_window_t3

0x7d58,	// (0x00044bc1) popup_snote_single_graphic_window_t4_ParamLimits

0x7d58,	// (0x00044bc1) popup_snote_single_graphic_window_t4

0x7d8c,	// (0x00044bf5) popup_snote_single_graphic_window_t5_ParamLimits

0x7d8c,	// (0x00044bf5) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004c43b) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004c43b) popup_snote_single_graphic_window_t

0xb165,	// (0x00047fce) grid_graphic_popup_pane_ParamLimits

0xb165,	// (0x00047fce) grid_graphic_popup_pane

0xb193,	// (0x00047ffc) listscroll_popup_graphic_pane_g1_ParamLimits

0xb193,	// (0x00047ffc) listscroll_popup_graphic_pane_g1

0xb1a7,	// (0x00048010) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1a7,	// (0x00048010) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004c82f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004c82f) listscroll_popup_graphic_pane_g

0xb1bb,	// (0x00048024) scroll_pane_cp5

0xb10d,	// (0x00047f76) cell_graphic_popup_pane_ParamLimits

0xb10d,	// (0x00047f76) cell_graphic_popup_pane

0xb0ee,	// (0x00047f57) cell_graphic_popup_pane_g1

0xb0f6,	// (0x00047f5f) cell_graphic_popup_pane_g2

0x7bdf,	// (0x00044a48) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004c828) cell_graphic_popup_pane_g

0xb0ff,	// (0x00047f68) cell_graphic_popup_pane_t2

0x7be8,	// (0x00044a51) grid_highlight_pane_cp3

0x7dcd,	// (0x00044c36) list_gen_pane_ParamLimits

0x7dcd,	// (0x00044c36) list_gen_pane

0x7dff,	// (0x00044c68) scroll_pane

0xb050,	// (0x00047eb9) bg_list_pane_g1_ParamLimits

0xb050,	// (0x00047eb9) bg_list_pane_g1

0xb06b,	// (0x00047ed4) bg_list_pane_g2_ParamLimits

0xb06b,	// (0x00047ed4) bg_list_pane_g2

0xb07e,	// (0x00047ee7) bg_list_pane_g3_ParamLimits

0xb07e,	// (0x00047ee7) bg_list_pane_g3

0xb090,	// (0x00047ef9) bg_list_pane_g4_ParamLimits

0xb090,	// (0x00047ef9) bg_list_pane_g4

0xb0a2,	// (0x00047f0b) bg_list_pane_g5_ParamLimits

0xb0a2,	// (0x00047f0b) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004c81d) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004c81d) bg_list_pane_g

0xafcd,	// (0x00047e36) list_double2_graphic_large_graphic_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double2_graphic_large_graphic_pane

0xafcd,	// (0x00047e36) list_double2_graphic_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double2_graphic_pane

0xafcd,	// (0x00047e36) list_double2_large_graphic_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double2_large_graphic_pane

0xafcd,	// (0x00047e36) list_double2_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double2_pane

0xafcd,	// (0x00047e36) list_double_graphic_heading_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_graphic_heading_pane

0xafcd,	// (0x00047e36) list_double_graphic_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_graphic_pane

0xafcd,	// (0x00047e36) list_double_heading_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_heading_pane

0xafcd,	// (0x00047e36) list_double_large_graphic_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_large_graphic_pane

0xafcd,	// (0x00047e36) list_double_number_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_number_pane

0xafcd,	// (0x00047e36) list_double_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_pane

0xafcd,	// (0x00047e36) list_double_time_pane_ParamLimits

0xafcd,	// (0x00047e36) list_double_time_pane

0xafcd,	// (0x00047e36) list_setting_number_pane_ParamLimits

0xafcd,	// (0x00047e36) list_setting_number_pane

0xafcd,	// (0x00047e36) list_setting_pane_ParamLimits

0xafcd,	// (0x00047e36) list_setting_pane

0xb00c,	// (0x00047e75) list_single_2graphic_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_2graphic_pane

0xb00c,	// (0x00047e75) list_single_graphic_heading_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_graphic_heading_pane

0xb00c,	// (0x00047e75) list_single_graphic_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_graphic_pane

0xb00c,	// (0x00047e75) list_single_heading_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_heading_pane

0x66b9,	// (0x00043522) list_single_large_graphic_pane_ParamLimits

0x66b9,	// (0x00043522) list_single_large_graphic_pane

0xb00c,	// (0x00047e75) list_single_number_heading_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_number_heading_pane

0xb00c,	// (0x00047e75) list_single_number_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_number_pane

0xb00c,	// (0x00047e75) list_single_pane_ParamLimits

0xb00c,	// (0x00047e75) list_single_pane

0x2c26,	// (0x0003fa8f) list_highlight_pane_cp1

0x7e33,	// (0x00044c9c) list_single_pane_g1_ParamLimits

0x7e33,	// (0x00044c9c) list_single_pane_g1

0x5cb1,	// (0x00042b1a) list_single_pane_g2_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0004c457) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0004c457) list_single_pane_g

0x539a,	// (0x00042203) list_single_pane_t1_ParamLimits

0x539a,	// (0x00042203) list_single_pane_t1

0x7e33,	// (0x00044c9c) list_single_number_pane_g1_ParamLimits

0x7e33,	// (0x00044c9c) list_single_number_pane_g1

0x5cb1,	// (0x00042b1a) list_single_number_pane_g2_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0004c457) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0004c457) list_single_number_pane_g

0x533c,	// (0x000421a5) list_single_number_pane_t1_ParamLimits

0x533c,	// (0x000421a5) list_single_number_pane_t1

0x5352,	// (0x000421bb) list_single_number_pane_t2_ParamLimits

0x5352,	// (0x000421bb) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004c7de) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004c7de) list_single_number_pane_t

0x4aca,	// (0x00041933) list_single_graphic_pane_g1_ParamLimits

0x4aca,	// (0x00041933) list_single_graphic_pane_g1

0x7e33,	// (0x00044c9c) list_single_graphic_pane_g2_ParamLimits

0x7e33,	// (0x00044c9c) list_single_graphic_pane_g2

0x5cb1,	// (0x00042b1a) list_single_graphic_pane_g3_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004c446) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004c446) list_single_graphic_pane_g

0x4ad6,	// (0x0004193f) list_single_graphic_pane_t1_ParamLimits

0x4ad6,	// (0x0004193f) list_single_graphic_pane_t1

0x4aec,	// (0x00041955) list_single_heading_pane_g1_ParamLimits

0x4aec,	// (0x00041955) list_single_heading_pane_g1

0x5cb1,	// (0x00042b1a) list_single_heading_pane_g2_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004c44d) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004c44d) list_single_heading_pane_g

0x4aff,	// (0x00041968) list_single_heading_pane_t1_ParamLimits

0x4aff,	// (0x00041968) list_single_heading_pane_t1

0x5cbd,	// (0x00042b26) list_single_heading_pane_t2_ParamLimits

0x5cbd,	// (0x00042b26) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0004c452) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0004c452) list_single_heading_pane_t

0x7e33,	// (0x00044c9c) list_single_number_heading_pane_g1_ParamLimits

0x7e33,	// (0x00044c9c) list_single_number_heading_pane_g1

0x5cb1,	// (0x00042b1a) list_single_number_heading_pane_g2_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0004c457) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0004c457) list_single_number_heading_pane_g

0x4b15,	// (0x0004197e) list_single_number_heading_pane_t1_ParamLimits

0x4b15,	// (0x0004197e) list_single_number_heading_pane_t1

0x4b2b,	// (0x00041994) list_single_number_heading_pane_t2_ParamLimits

0x4b2b,	// (0x00041994) list_single_number_heading_pane_t2

0x4b3d,	// (0x000419a6) list_single_number_heading_pane_t3_ParamLimits

0x4b3d,	// (0x000419a6) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004c45c) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004c45c) list_single_number_heading_pane_t

0x4b4f,	// (0x000419b8) list_single_graphic_heading_pane_g1_ParamLimits

0x4b4f,	// (0x000419b8) list_single_graphic_heading_pane_g1

0x5ccf,	// (0x00042b38) list_single_graphic_heading_pane_g4_ParamLimits

0x5ccf,	// (0x00042b38) list_single_graphic_heading_pane_g4

0x5cb1,	// (0x00042b1a) list_single_graphic_heading_pane_g5_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0004c463) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0004c463) list_single_graphic_heading_pane_g

0x4b15,	// (0x0004197e) list_single_graphic_heading_pane_t1_ParamLimits

0x4b15,	// (0x0004197e) list_single_graphic_heading_pane_t1

0x4b67,	// (0x000419d0) list_single_graphic_heading_pane_t2_ParamLimits

0x4b67,	// (0x000419d0) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0004c46a) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0004c46a) list_single_graphic_heading_pane_t

0x5ce0,	// (0x00042b49) list_single_large_graphic_pane_g1_ParamLimits

0x5ce0,	// (0x00042b49) list_single_large_graphic_pane_g1

0x5cec,	// (0x00042b55) list_single_large_graphic_pane_g2_ParamLimits

0x5cec,	// (0x00042b55) list_single_large_graphic_pane_g2

0x5cf8,	// (0x00042b61) list_single_large_graphic_pane_g3_ParamLimits

0x5cf8,	// (0x00042b61) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0004c46f) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0004c46f) list_single_large_graphic_pane_g

0x9fe3,	// (0x00046e4c) wait_border_pane_g2_copy1

0x5d04,	// (0x00042b6d) list_single_large_graphic_pane_g4_cp2

0x4b7f,	// (0x000419e8) list_single_large_graphic_pane_t1_ParamLimits

0x4b7f,	// (0x000419e8) list_single_large_graphic_pane_t1

0x5d0c,	// (0x00042b75) list_double_pane_g1_ParamLimits

0x5d0c,	// (0x00042b75) list_double_pane_g1

0x5d18,	// (0x00042b81) list_double_pane_g2_ParamLimits

0x5d18,	// (0x00042b81) list_double_pane_g2

0x0001,

0xf60d,	// (0x0004c476) list_double_pane_g_ParamLimits

0xf60d,	// (0x0004c476) list_double_pane_g

0x4b95,	// (0x000419fe) list_double_pane_t1_ParamLimits

0x4b95,	// (0x000419fe) list_double_pane_t1

0x4bab,	// (0x00041a14) list_double_pane_t2_ParamLimits

0x4bab,	// (0x00041a14) list_double_pane_t2

0x0001,

0xf612,	// (0x0004c47b) list_double_pane_t_ParamLimits

0xf612,	// (0x0004c47b) list_double_pane_t

0x4bbd,	// (0x00041a26) list_double2_pane_g1_ParamLimits

0x4bbd,	// (0x00041a26) list_double2_pane_g1

0x4bce,	// (0x00041a37) list_double2_pane_g2_ParamLimits

0x4bce,	// (0x00041a37) list_double2_pane_g2

0x0001,

0xf617,	// (0x0004c480) list_double2_pane_g_ParamLimits

0xf617,	// (0x0004c480) list_double2_pane_g

0x4bda,	// (0x00041a43) list_double2_pane_t1_ParamLimits

0x4bda,	// (0x00041a43) list_double2_pane_t1

0x4bf0,	// (0x00041a59) list_double2_pane_t2_ParamLimits

0x4bf0,	// (0x00041a59) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0004c485) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0004c485) list_double2_pane_t

0x5d0c,	// (0x00042b75) list_double_number_pane_g1_ParamLimits

0x5d0c,	// (0x00042b75) list_double_number_pane_g1

0x5d18,	// (0x00042b81) list_double_number_pane_g2_ParamLimits

0x5d18,	// (0x00042b81) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0004c476) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0004c476) list_double_number_pane_g

0x4c02,	// (0x00041a6b) list_double_number_pane_t1_ParamLimits

0x4c02,	// (0x00041a6b) list_double_number_pane_t1

0x4c14,	// (0x00041a7d) list_double_number_pane_t2_ParamLimits

0x4c14,	// (0x00041a7d) list_double_number_pane_t2

0x4c2a,	// (0x00041a93) list_double_number_pane_t3_ParamLimits

0x4c2a,	// (0x00041a93) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0004c48a) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0004c48a) list_double_number_pane_t

0x4c3c,	// (0x00041aa5) list_double_graphic_pane_g1_ParamLimits

0x4c3c,	// (0x00041aa5) list_double_graphic_pane_g1

0x4c48,	// (0x00041ab1) list_double_graphic_pane_g2_ParamLimits

0x4c48,	// (0x00041ab1) list_double_graphic_pane_g2

0x4c57,	// (0x00041ac0) list_double_graphic_pane_g3_ParamLimits

0x4c57,	// (0x00041ac0) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0004c491) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0004c491) list_double_graphic_pane_g

0x4c6f,	// (0x00041ad8) list_double_graphic_pane_t1_ParamLimits

0x4c6f,	// (0x00041ad8) list_double_graphic_pane_t1

0x4c85,	// (0x00041aee) list_double_graphic_pane_t2_ParamLimits

0x4c85,	// (0x00041aee) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0004c49a) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0004c49a) list_double_graphic_pane_t

0x4c97,	// (0x00041b00) list_double2_graphic_pane_g1_ParamLimits

0x4c97,	// (0x00041b00) list_double2_graphic_pane_g1

0x5d24,	// (0x00042b8d) list_double2_graphic_pane_g2_ParamLimits

0x5d24,	// (0x00042b8d) list_double2_graphic_pane_g2

0x4ca3,	// (0x00041b0c) list_double2_graphic_pane_g3_ParamLimits

0x4ca3,	// (0x00041b0c) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0004c49f) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0004c49f) list_double2_graphic_pane_g

0x4caf,	// (0x00041b18) list_double2_graphic_pane_t1_ParamLimits

0x4caf,	// (0x00041b18) list_double2_graphic_pane_t1

0x4cc5,	// (0x00041b2e) list_double2_graphic_pane_t2_ParamLimits

0x4cc5,	// (0x00041b2e) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004c4a6) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004c4a6) list_double2_graphic_pane_t

0x4cd7,	// (0x00041b40) list_double_large_graphic_pane_g1_ParamLimits

0x4cd7,	// (0x00041b40) list_double_large_graphic_pane_g1

0x4d02,	// (0x00041b6b) list_double_large_graphic_pane_g2_ParamLimits

0x4d02,	// (0x00041b6b) list_double_large_graphic_pane_g2

0x5d18,	// (0x00042b81) list_double_large_graphic_pane_g3_ParamLimits

0x5d18,	// (0x00042b81) list_double_large_graphic_pane_g3

0x4d18,	// (0x00041b81) list_double_large_graphic_pane_g4_ParamLimits

0x4d18,	// (0x00041b81) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0004c4ab) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0004c4ab) list_double_large_graphic_pane_g

0x4d2b,	// (0x00041b94) list_double_large_graphic_pane_t1_ParamLimits

0x4d2b,	// (0x00041b94) list_double_large_graphic_pane_t1

0x4d44,	// (0x00041bad) list_double_large_graphic_pane_t2_ParamLimits

0x4d44,	// (0x00041bad) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0004c4b6) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0004c4b6) list_double_large_graphic_pane_t

0x5d45,	// (0x00042bae) list_double2_large_graphic_pane_g1_ParamLimits

0x5d45,	// (0x00042bae) list_double2_large_graphic_pane_g1

0x4d56,	// (0x00041bbf) list_double2_large_graphic_pane_g2_ParamLimits

0x4d56,	// (0x00041bbf) list_double2_large_graphic_pane_g2

0x4ca3,	// (0x00041b0c) list_double2_large_graphic_pane_g3_ParamLimits

0x4ca3,	// (0x00041b0c) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0004c4bb) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0004c4bb) list_double2_large_graphic_pane_g

0x4d67,	// (0x00041bd0) list_double2_large_graphic_pane_t1_ParamLimits

0x4d67,	// (0x00041bd0) list_double2_large_graphic_pane_t1

0x4d7d,	// (0x00041be6) list_double2_large_graphic_pane_t2_ParamLimits

0x4d7d,	// (0x00041be6) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0004c4c2) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0004c4c2) list_double2_large_graphic_pane_t

0x4d8f,	// (0x00041bf8) list_double_heading_pane_g1_ParamLimits

0x4d8f,	// (0x00041bf8) list_double_heading_pane_g1

0x4da0,	// (0x00041c09) list_double_heading_pane_g2_ParamLimits

0x4da0,	// (0x00041c09) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0004c4c7) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0004c4c7) list_double_heading_pane_g

0x4dac,	// (0x00041c15) list_double_heading_pane_t1_ParamLimits

0x4dac,	// (0x00041c15) list_double_heading_pane_t1

0x4dc2,	// (0x00041c2b) list_double_heading_pane_t2_ParamLimits

0x4dc2,	// (0x00041c2b) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0004c4cc) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0004c4cc) list_double_heading_pane_t

0x4dd4,	// (0x00041c3d) list_double_graphic_heading_pane_g1_ParamLimits

0x4dd4,	// (0x00041c3d) list_double_graphic_heading_pane_g1

0x4d8f,	// (0x00041bf8) list_double_graphic_heading_pane_g2_ParamLimits

0x4d8f,	// (0x00041bf8) list_double_graphic_heading_pane_g2

0x4da0,	// (0x00041c09) list_double_graphic_heading_pane_g3_ParamLimits

0x4da0,	// (0x00041c09) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0004c4d1) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0004c4d1) list_double_graphic_heading_pane_g

0x4de0,	// (0x00041c49) list_double_graphic_heading_pane_t1_ParamLimits

0x4de0,	// (0x00041c49) list_double_graphic_heading_pane_t1

0x4df6,	// (0x00041c5f) list_double_graphic_heading_pane_t2_ParamLimits

0x4df6,	// (0x00041c5f) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004c4d8) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004c4d8) list_double_graphic_heading_pane_t

0x4e08,	// (0x00041c71) list_double_time_pane_g1_ParamLimits

0x4e08,	// (0x00041c71) list_double_time_pane_g1

0x4e19,	// (0x00041c82) list_double_time_pane_g2_ParamLimits

0x4e19,	// (0x00041c82) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0004c4dd) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0004c4dd) list_double_time_pane_g

0x4e25,	// (0x00041c8e) list_double_time_pane_t1_ParamLimits

0x4e25,	// (0x00041c8e) list_double_time_pane_t1

0x4e3b,	// (0x00041ca4) list_double_time_pane_t2_ParamLimits

0x4e3b,	// (0x00041ca4) list_double_time_pane_t2

0x4e4d,	// (0x00041cb6) list_double_time_pane_t3_ParamLimits

0x4e4d,	// (0x00041cb6) list_double_time_pane_t3

0x4e5f,	// (0x00041cc8) list_double_time_pane_t4_ParamLimits

0x4e5f,	// (0x00041cc8) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0004c4e2) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0004c4e2) list_double_time_pane_t

0x4e71,	// (0x00041cda) list_setting_pane_g1_ParamLimits

0x4e71,	// (0x00041cda) list_setting_pane_g1

0x4e7d,	// (0x00041ce6) list_setting_pane_g2_ParamLimits

0x4e7d,	// (0x00041ce6) list_setting_pane_g2

0x0001,

0xf682,	// (0x0004c4eb) list_setting_pane_g_ParamLimits

0xf682,	// (0x0004c4eb) list_setting_pane_g

0x4e89,	// (0x00041cf2) list_setting_pane_t1_ParamLimits

0x4e89,	// (0x00041cf2) list_setting_pane_t1

0x4ea3,	// (0x00041d0c) list_setting_pane_t2_ParamLimits

0x4ea3,	// (0x00041d0c) list_setting_pane_t2

0x0002,

0xf687,	// (0x0004c4f0) list_setting_pane_t_ParamLimits

0xf687,	// (0x0004c4f0) list_setting_pane_t

0x4ee2,	// (0x00041d4b) set_value_pane_cp_ParamLimits

0x4ee2,	// (0x00041d4b) set_value_pane_cp

0x4ef0,	// (0x00041d59) list_setting_number_pane_g1_ParamLimits

0x4ef0,	// (0x00041d59) list_setting_number_pane_g1

0x4efc,	// (0x00041d65) list_setting_number_pane_g2_ParamLimits

0x4efc,	// (0x00041d65) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0004c4f7) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0004c4f7) list_setting_number_pane_g

0x4f08,	// (0x00041d71) list_setting_number_pane_t1_ParamLimits

0x4f08,	// (0x00041d71) list_setting_number_pane_t1

0x4f21,	// (0x00041d8a) list_setting_number_pane_t2_ParamLimits

0x4f21,	// (0x00041d8a) list_setting_number_pane_t2

0x4f3b,	// (0x00041da4) list_setting_number_pane_t3_ParamLimits

0x4f3b,	// (0x00041da4) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0004c4fc) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0004c4fc) list_setting_number_pane_t

0x4ee2,	// (0x00041d4b) set_value_pane_ParamLimits

0x4ee2,	// (0x00041d4b) set_value_pane

0x7e3f,	// (0x00044ca8) bg_set_opt_pane_ParamLimits

0x7e3f,	// (0x00044ca8) bg_set_opt_pane

0x4f7e,	// (0x00041de7) set_value_pane_t1

0x7e60,	// (0x00044cc9) slider_set_pane_cp3

0x7e69,	// (0x00044cd2) volume_small_pane_cp

0x7e72,	// (0x00044cdb) list_form_gen_pane

0x7e7b,	// (0x00044ce4) scroll_pane_cp8

0x4f94,	// (0x00041dfd) form_field_data_pane_ParamLimits

0x4f94,	// (0x00041dfd) form_field_data_pane

0x4fbc,	// (0x00041e25) form_field_data_wide_pane_ParamLimits

0x4fbc,	// (0x00041e25) form_field_data_wide_pane

0x4fe3,	// (0x00041e4c) form_field_popup_pane_ParamLimits

0x4fe3,	// (0x00041e4c) form_field_popup_pane

0x5005,	// (0x00041e6e) form_field_popup_wide_pane_ParamLimits

0x5005,	// (0x00041e6e) form_field_popup_wide_pane

0x5026,	// (0x00041e8f) form_field_slider_pane_ParamLimits

0x5026,	// (0x00041e8f) form_field_slider_pane

0x5039,	// (0x00041ea2) form_field_slider_wide_pane_ParamLimits

0x5039,	// (0x00041ea2) form_field_slider_wide_pane

0x7e8c,	// (0x00044cf5) data_form_pane

0x5056,	// (0x00041ebf) form_field_data_pane_t1

0x7e98,	// (0x00044d01) input_focus_pane

0x7ea6,	// (0x00044d0f) data_form_wide_pane

0x507c,	// (0x00041ee5) form_field_data_wide_pane_t1

0x7bfd,	// (0x00044a66) input_focus_pane_cp6

0x509e,	// (0x00041f07) form_field_popup_pane_t1

0x7e98,	// (0x00044d01) input_focus_pane_cp7

0x7ed2,	// (0x00044d3b) list_form_pane

0x50c0,	// (0x00041f29) form_field_popup_wide_pane_t1

0x7e98,	// (0x00044d01) input_focus_pane_cp8

0x7ede,	// (0x00044d47) list_form_wide_pane

0x50dd,	// (0x00041f46) form_field_slider_pane_t1_ParamLimits

0x50dd,	// (0x00041f46) form_field_slider_pane_t1

0x50f5,	// (0x00041f5e) form_field_slider_pane_t2_ParamLimits

0x50f5,	// (0x00041f5e) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0004c50c) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0004c50c) form_field_slider_pane_t

0x7881,	// (0x000446ea) input_focus_pane_cp9_ParamLimits

0x7881,	// (0x000446ea) input_focus_pane_cp9

0x510a,	// (0x00041f73) slider_cont_pane_ParamLimits

0x510a,	// (0x00041f73) slider_cont_pane

0x7eed,	// (0x00044d56) form_field_slider_wide_pane_t1_ParamLimits

0x7eed,	// (0x00044d56) form_field_slider_wide_pane_t1

0x511e,	// (0x00041f87) form_field_slider_wide_pane_t2_ParamLimits

0x511e,	// (0x00041f87) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0004c511) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0004c511) form_field_slider_wide_pane_t

0x7881,	// (0x000446ea) input_focus_pane_cp10_ParamLimits

0x7881,	// (0x000446ea) input_focus_pane_cp10

0x5130,	// (0x00041f99) slider_cont_pane_cp1_ParamLimits

0x5130,	// (0x00041f99) slider_cont_pane_cp1

0x5144,	// (0x00041fad) slider_form_pane_cp

0x7eff,	// (0x00044d68) input_focus_pane_g1

0x7f07,	// (0x00044d70) input_focus_pane_g2

0x7f0f,	// (0x00044d78) input_focus_pane_g3

0x7f17,	// (0x00044d80) input_focus_pane_g4

0x7f1f,	// (0x00044d88) input_focus_pane_g5

0x7f27,	// (0x00044d90) input_focus_pane_g6

0x7f2f,	// (0x00044d98) input_focus_pane_g7

0x7f37,	// (0x00044da0) input_focus_pane_g8

0x7f3f,	// (0x00044da8) input_focus_pane_g9

0x2c1c,	// (0x0003fa85) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0004c516) input_focus_pane_g

0x9fec,	// (0x00046e55) wait_border_pane_g3_copy1

0x514c,	// (0x00041fb5) data_form_pane_t1

0x2c1c,	// (0x0003fa85) wait_anim_pane_g1_copy1

0x5364,	// (0x000421cd) data_form_wide_pane_t1

0x516b,	// (0x00041fd4) list_form_graphic_pane_cp_ParamLimits

0x516b,	// (0x00041fd4) list_form_graphic_pane_cp

0xaf71,	// (0x00047dda) slider_form_pane_g1

0xaf7a,	// (0x00047de3) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004c80e) slider_form_pane_g

0x516b,	// (0x00041fd4) list_form_graphic_pane_ParamLimits

0x516b,	// (0x00041fd4) list_form_graphic_pane

0x517d,	// (0x00041fe6) list_form_graphic_pane_g1

0x5185,	// (0x00041fee) list_form_graphic_pane_t1_ParamLimits

0x5185,	// (0x00041fee) list_form_graphic_pane_t1

0x7605,	// (0x0004446e) list_highlight_pane_cp5_ParamLimits

0x7605,	// (0x0004446e) list_highlight_pane_cp5

0x5d51,	// (0x00042bba) find_pane_g1

0x7f47,	// (0x00044db0) input_find_pane

0x519a,	// (0x00042003) input_find_pane_g1_ParamLimits

0x519a,	// (0x00042003) input_find_pane_g1

0x51a6,	// (0x0004200f) input_find_pane_t1_ParamLimits

0x51a6,	// (0x0004200f) input_find_pane_t1

0x51bb,	// (0x00042024) input_find_pane_t2_ParamLimits

0x51bb,	// (0x00042024) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0004c52b) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0004c52b) input_find_pane_t

0x7f50,	// (0x00044db9) input_focus_pane_cp5_ParamLimits

0x7f50,	// (0x00044db9) input_focus_pane_cp5

0x7f6a,	// (0x00044dd3) bg_popup_window_pane_cp2_ParamLimits

0x7f6a,	// (0x00044dd3) bg_popup_window_pane_cp2

0x7f77,	// (0x00044de0) listscroll_menu_pane_ParamLimits

0x7f77,	// (0x00044de0) listscroll_menu_pane

0x7f83,	// (0x00044dec) popup_submenu_window_ParamLimits

0x7f83,	// (0x00044dec) popup_submenu_window

0x7fb3,	// (0x00044e1c) find_popup_pane_g1

0x7fbb,	// (0x00044e24) input_popup_find_pane_cp

0x7f50,	// (0x00044db9) input_focus_pane_cp4_ParamLimits

0x7f50,	// (0x00044db9) input_focus_pane_cp4

0x7fd3,	// (0x00044e3c) input_popup_find_pane_t1_ParamLimits

0x7fd3,	// (0x00044e3c) input_popup_find_pane_t1

0x2c26,	// (0x0003fa8f) bg_popup_sub_pane_cp

0x8001,	// (0x00044e6a) listscroll_popup_sub_pane

0x8009,	// (0x00044e72) list_submenu_pane_ParamLimits

0x8009,	// (0x00044e72) list_submenu_pane

0x801a,	// (0x00044e83) scroll_pane_cp4

0x8022,	// (0x00044e8b) list_single_popup_submenu_pane_ParamLimits

0x8022,	// (0x00044e8b) list_single_popup_submenu_pane

0x8037,	// (0x00044ea0) list_single_popup_submenu_pane_g1

0x803f,	// (0x00044ea8) list_single_popup_submenu_pane_t1_ParamLimits

0x803f,	// (0x00044ea8) list_single_popup_submenu_pane_t1

0x7605,	// (0x0004446e) bg_active_tab_pane_cp1_ParamLimits

0x7605,	// (0x0004446e) bg_active_tab_pane_cp1

0x8054,	// (0x00044ebd) tabs_2_active_pane_g1

0x805c,	// (0x00044ec5) tabs_2_active_pane_t1

0x7605,	// (0x0004446e) bg_passive_tab_pane_cp1_ParamLimits

0x7605,	// (0x0004446e) bg_passive_tab_pane_cp1

0x8054,	// (0x00044ebd) tabs_2_passive_pane_g1

0x805c,	// (0x00044ec5) tabs_2_passive_pane_t1

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp4

0x807c,	// (0x00044ee5) tabs_2_long_active_pane_t1

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp4

0x63bf,	// (0x00043228) list_single_midp_graphic_pane_g4_ParamLimits

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp5

0x809b,	// (0x00044f04) tabs_3_long_active_pane_t1

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp5

0x63bf,	// (0x00043228) list_single_midp_graphic_pane_g4

0x7605,	// (0x0004446e) bg_popup_window_pane_cp13_ParamLimits

0x7605,	// (0x0004446e) bg_popup_window_pane_cp13

0x80b6,	// (0x00044f1f) listscroll_popup_fast_pane_ParamLimits

0x80b6,	// (0x00044f1f) listscroll_popup_fast_pane

0x80c5,	// (0x00044f2e) grid_popup_fast_pane_ParamLimits

0x80c5,	// (0x00044f2e) grid_popup_fast_pane

0x80d7,	// (0x00044f40) scroll_pane_cp9_ParamLimits

0x80d7,	// (0x00044f40) scroll_pane_cp9

0xc8c7,	// (0x00049730) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8c7,	// (0x00049730) list_single_graphic_hl_pane_t1_cp2

0x80fb,	// (0x00044f64) input_focus_pane_cp20_ParamLimits

0x80fb,	// (0x00044f64) input_focus_pane_cp20

0x8109,	// (0x00044f72) query_popup_data_pane_t1_ParamLimits

0x8109,	// (0x00044f72) query_popup_data_pane_t1

0x811c,	// (0x00044f85) query_popup_data_pane_t2_ParamLimits

0x811c,	// (0x00044f85) query_popup_data_pane_t2

0x8162,	// (0x00044fcb) query_popup_data_pane_t3_ParamLimits

0x8162,	// (0x00044fcb) query_popup_data_pane_t3

0x81a3,	// (0x0004500c) query_popup_data_pane_t4_ParamLimits

0x81a3,	// (0x0004500c) query_popup_data_pane_t4

0x81df,	// (0x00045048) query_popup_data_pane_t5_ParamLimits

0x81df,	// (0x00045048) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0004c530) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0004c530) query_popup_data_pane_t

0x7eff,	// (0x00044d68) bg_set_opt_pane_g1

0x7f07,	// (0x00044d70) bg_set_opt_pane_g2

0x7f0f,	// (0x00044d78) bg_set_opt_pane_g3

0x7f17,	// (0x00044d80) bg_set_opt_pane_g4

0x7f1f,	// (0x00044d88) bg_set_opt_pane_g5

0x7f27,	// (0x00044d90) bg_set_opt_pane_g6

0x7f2f,	// (0x00044d98) bg_set_opt_pane_g7

0x7f37,	// (0x00044da0) bg_set_opt_pane_g8

0x7f3f,	// (0x00044da8) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0004c53b) bg_set_opt_pane_g

0x601b,	// (0x00042e84) control_top_pane_stacon_ParamLimits

0x601b,	// (0x00042e84) control_top_pane_stacon

0x606e,	// (0x00042ed7) signal_pane_stacon_ParamLimits

0x606e,	// (0x00042ed7) signal_pane_stacon

0x878b,	// (0x000455f4) stacon_top_pane_g1_ParamLimits

0x878b,	// (0x000455f4) stacon_top_pane_g1

0x6093,	// (0x00042efc) title_pane_stacon_ParamLimits

0x6093,	// (0x00042efc) title_pane_stacon

0x60bd,	// (0x00042f26) uni_indicator_pane_stacon_ParamLimits

0x60bd,	// (0x00042f26) uni_indicator_pane_stacon

0x60d5,	// (0x00042f3e) battery_pane_stacon_ParamLimits

0x60d5,	// (0x00042f3e) battery_pane_stacon

0x6119,	// (0x00042f82) control_bottom_pane_stacon_ParamLimits

0x6119,	// (0x00042f82) control_bottom_pane_stacon

0x613c,	// (0x00042fa5) navi_pane_stacon_ParamLimits

0x613c,	// (0x00042fa5) navi_pane_stacon

0x87ad,	// (0x00045616) stacon_bottom_pane_g1_ParamLimits

0x87ad,	// (0x00045616) stacon_bottom_pane_g1

0x5d5a,	// (0x00042bc3) aid_levels_signal_lsc_ParamLimits

0x5d5a,	// (0x00042bc3) aid_levels_signal_lsc

0x5d71,	// (0x00042bda) signal_pane_stacon_g1_ParamLimits

0x5d71,	// (0x00042bda) signal_pane_stacon_g1

0x5d85,	// (0x00042bee) signal_pane_stacon_g2_ParamLimits

0x5d85,	// (0x00042bee) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0004c54e) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0004c54e) signal_pane_stacon_g

0x5dba,	// (0x00042c23) title_pane_stacon_t1_ParamLimits

0x5dba,	// (0x00042c23) title_pane_stacon_t1

0x8223,	// (0x0004508c) uni_indicator_pane_stacon_g1

0x822d,	// (0x00045096) uni_indicator_pane_stacon_g2

0x8237,	// (0x000450a0) uni_indicator_pane_stacon_g3

0x8241,	// (0x000450aa) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0004c55a) uni_indicator_pane_stacon_g

0x5ddf,	// (0x00042c48) control_top_pane_stacon_g1

0x5de7,	// (0x00042c50) control_top_pane_stacon_t1_ParamLimits

0x5de7,	// (0x00042c50) control_top_pane_stacon_t1

0x5e1e,	// (0x00042c87) aid_levels_battery_lsc_ParamLimits

0x5e1e,	// (0x00042c87) aid_levels_battery_lsc

0x5e36,	// (0x00042c9f) battery_pane_stacon_g1_ParamLimits

0x5e36,	// (0x00042c9f) battery_pane_stacon_g1

0x5e49,	// (0x00042cb2) battery_pane_stacon_g2_ParamLimits

0x5e49,	// (0x00042cb2) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0004c563) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0004c563) battery_pane_stacon_g

0x5e87,	// (0x00042cf0) navi_icon_pane_stacon

0x5e9b,	// (0x00042d04) navi_navi_pane_stacon

0x5e87,	// (0x00042cf0) navi_text_pane_stacon

0x5ddf,	// (0x00042c48) control_bottom_pane_stacon_g1

0x5eb1,	// (0x00042d1a) control_bottom_pane_stacon_t1_ParamLimits

0x5eb1,	// (0x00042d1a) control_bottom_pane_stacon_t1

0x8265,	// (0x000450ce) grid_app_pane_ParamLimits

0x8265,	// (0x000450ce) grid_app_pane

0x8289,	// (0x000450f2) scroll_pane_cp15_ParamLimits

0x8289,	// (0x000450f2) scroll_pane_cp15

0x829e,	// (0x00045107) cell_app_pane_ParamLimits

0x829e,	// (0x00045107) cell_app_pane

0x82ca,	// (0x00045133) cell_app_pane_g1_ParamLimits

0x82ca,	// (0x00045133) cell_app_pane_g1

0x82ee,	// (0x00045157) cell_app_pane_g2_ParamLimits

0x82ee,	// (0x00045157) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0004c568) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0004c568) cell_app_pane_g

0x82fa,	// (0x00045163) cell_app_pane_t1_ParamLimits

0x82fa,	// (0x00045163) cell_app_pane_t1

0x830c,	// (0x00045175) grid_highlight_pane_ParamLimits

0x830c,	// (0x00045175) grid_highlight_pane

0x7eff,	// (0x00044d68) cell_highlight_pane_g1

0x7f07,	// (0x00044d70) cell_highlight_pane_g2

0x7f0f,	// (0x00044d78) cell_highlight_pane_g3

0x7f17,	// (0x00044d80) cell_highlight_pane_g4

0x7f1f,	// (0x00044d88) cell_highlight_pane_g5

0x7f27,	// (0x00044d90) cell_highlight_pane_g6

0x7f2f,	// (0x00044d98) cell_highlight_pane_g7

0x7f37,	// (0x00044da0) cell_highlight_pane_g8

0x7f3f,	// (0x00044da8) cell_highlight_pane_g9

0x2c1c,	// (0x0003fa85) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0004c516) cell_highlight_pane_g

0x831d,	// (0x00045186) bg_scroll_pane

0x5efb,	// (0x00042d64) scroll_handle_pane

0x8364,	// (0x000451cd) scroll_bg_pane_g1

0x8379,	// (0x000451e2) scroll_bg_pane_g2

0x8391,	// (0x000451fa) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0004c56d) scroll_bg_pane_g

0x83a6,	// (0x0004520f) scroll_handle_focus_pane_ParamLimits

0x83a6,	// (0x0004520f) scroll_handle_focus_pane

0x8364,	// (0x000451cd) scroll_handle_pane_g1

0x83b3,	// (0x0004521c) scroll_handle_pane_g2

0x8391,	// (0x000451fa) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0004c574) scroll_handle_pane_g

0x7f50,	// (0x00044db9) bg_popup_sub_pane_cp21_ParamLimits

0x7f50,	// (0x00044db9) bg_popup_sub_pane_cp21

0x83c7,	// (0x00045230) popup_fep_japan_predictive_window_t1_ParamLimits

0x83c7,	// (0x00045230) popup_fep_japan_predictive_window_t1

0x83de,	// (0x00045247) popup_fep_japan_predictive_window_t2_ParamLimits

0x83de,	// (0x00045247) popup_fep_japan_predictive_window_t2

0x8411,	// (0x0004527a) popup_fep_japan_predictive_window_t3_ParamLimits

0x8411,	// (0x0004527a) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0004c57b) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0004c57b) popup_fep_japan_predictive_window_t

0x2c26,	// (0x0003fa8f) bg_popup_sub_pane_cp23

0x8448,	// (0x000452b1) listscroll_japin_cand_pane

0x8450,	// (0x000452b9) popup_fep_japan_candidate_window_t1

0x845e,	// (0x000452c7) candidate_pane_ParamLimits

0x845e,	// (0x000452c7) candidate_pane

0x8470,	// (0x000452d9) scroll_pane_cp30

0x847a,	// (0x000452e3) list_single_popup_jap_candidate_pane_ParamLimits

0x847a,	// (0x000452e3) list_single_popup_jap_candidate_pane

0x2c26,	// (0x0003fa8f) list_highlight_pane_cp30

0x848e,	// (0x000452f7) list_single_popup_jap_candidate_pane_t1

0x849d,	// (0x00045306) level_1_signal

0x84aa,	// (0x00045313) level_2_signal

0x84b7,	// (0x00045320) level_3_signal

0x84c4,	// (0x0004532d) level_4_signal

0x84d1,	// (0x0004533a) level_5_signal

0x84de,	// (0x00045347) level_6_signal

0x84eb,	// (0x00045354) level_7_signal

0x849d,	// (0x00045306) level_1_battery

0x84aa,	// (0x00045313) level_2_battery

0x84b7,	// (0x00045320) level_3_battery

0x84c4,	// (0x0004532d) level_4_battery

0x84d1,	// (0x0004533a) level_5_battery

0x84de,	// (0x00045347) level_6_battery

0x84eb,	// (0x00045354) level_7_battery

0x8510,	// (0x00045379) list_menu_pane_ParamLimits

0x8510,	// (0x00045379) list_menu_pane

0x8521,	// (0x0004538a) scroll_pane_cp25_ParamLimits

0x8521,	// (0x0004538a) scroll_pane_cp25

0x853a,	// (0x000453a3) list_double2_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double2_graphic_pane_cp2

0x853a,	// (0x000453a3) list_double2_large_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double2_large_graphic_pane_cp2

0x853a,	// (0x000453a3) list_double2_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double2_pane_cp2

0x853a,	// (0x000453a3) list_double_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double_graphic_pane_cp2

0x853a,	// (0x000453a3) list_double_large_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double_large_graphic_pane_cp2

0x853a,	// (0x000453a3) list_double_number_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double_number_pane_cp2

0x853a,	// (0x000453a3) list_double_pane_cp2_ParamLimits

0x853a,	// (0x000453a3) list_double_pane_cp2

0x8560,	// (0x000453c9) list_single_2graphic_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_2graphic_pane_cp2

0x8560,	// (0x000453c9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_graphic_heading_pane_cp2

0x8560,	// (0x000453c9) list_single_graphic_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_graphic_pane_cp2

0x8560,	// (0x000453c9) list_single_heading_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_heading_pane_cp2

0x857d,	// (0x000453e6) list_single_large_graphic_pane_cp2_ParamLimits

0x857d,	// (0x000453e6) list_single_large_graphic_pane_cp2

0x8560,	// (0x000453c9) list_single_number_heading_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_number_heading_pane_cp2

0x8560,	// (0x000453c9) list_single_number_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_number_pane_cp2

0x8560,	// (0x000453c9) list_single_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_pane_cp2

0x85d2,	// (0x0004543b) bg_popup_sub_pane_cp22

0x5fad,	// (0x00042e16) popup_side_volume_key_window_g1

0x5fd7,	// (0x00042e40) popup_side_volume_key_window_t1

0x5ff5,	// (0x00042e5e) volume_small_pane_cp1

0x7881,	// (0x000446ea) bg_popup_sub_pane_cp24_ParamLimits

0x7881,	// (0x000446ea) bg_popup_sub_pane_cp24

0x85e8,	// (0x00045451) fep_china_uni_candidate_pane_ParamLimits

0x85e8,	// (0x00045451) fep_china_uni_candidate_pane

0x85fc,	// (0x00045465) fep_china_uni_entry_pane

0x860c,	// (0x00045475) popup_fep_china_uni_window_g1

0x8628,	// (0x00045491) fep_china_uni_entry_pane_g1

0x8632,	// (0x0004549b) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004c5a8) fep_china_uni_entry_pane_g

0x863c,	// (0x000454a5) fep_entry_item_pane

0x8646,	// (0x000454af) fep_candidate_item_pane

0x864e,	// (0x000454b7) fep_china_uni_candidate_pane_g1

0x8658,	// (0x000454c1) fep_china_uni_candidate_pane_g2

0x8660,	// (0x000454c9) fep_china_uni_candidate_pane_g3

0x8668,	// (0x000454d1) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004c5ad) fep_china_uni_candidate_pane_g

0x2c1c,	// (0x0003fa85) fep_entry_item_pane_g1

0x8672,	// (0x000454db) fep_entry_item_pane_t1_ParamLimits

0x8672,	// (0x000454db) fep_entry_item_pane_t1

0x8688,	// (0x000454f1) fep_candidate_item_pane_t1_ParamLimits

0x8688,	// (0x000454f1) fep_candidate_item_pane_t1

0x869d,	// (0x00045506) fep_candidate_item_pane_t2_ParamLimits

0x869d,	// (0x00045506) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004c5b6) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004c5b6) fep_candidate_item_pane_t

0x7605,	// (0x0004446e) list_highlight_pane_cp31_ParamLimits

0x7605,	// (0x0004446e) list_highlight_pane_cp31

0x86af,	// (0x00045518) level_1_signal_lsc

0x86b8,	// (0x00045521) level_2_signal_lsc

0x86c1,	// (0x0004552a) level_3_signal_lsc

0x86ca,	// (0x00045533) level_4_signal_lsc

0x86d3,	// (0x0004553c) level_5_signal_lsc

0x86dc,	// (0x00045545) level_6_signal_lsc

0x86e5,	// (0x0004554e) level_7_signal_lsc

0x86e5,	// (0x0004554e) level_1_battery_lsc

0x86ee,	// (0x00045557) level_2_battery_lsc

0x86f7,	// (0x00045560) level_3_battery_lsc

0x8700,	// (0x00045569) level_4_battery_lsc

0x8709,	// (0x00045572) level_5_battery_lsc

0x8712,	// (0x0004557b) level_6_battery_lsc

0x86af,	// (0x00045518) level_7_battery_lsc

0x871b,	// (0x00045584) scroll_handle_focus_pane_g1

0x8724,	// (0x0004558d) scroll_handle_focus_pane_g2

0x872d,	// (0x00045596) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004c5bb) scroll_handle_focus_pane_g

0x51d0,	// (0x00042039) list_single_2graphic_pane_g1_ParamLimits

0x51d0,	// (0x00042039) list_single_2graphic_pane_g1

0x5ccf,	// (0x00042b38) list_single_2graphic_pane_g2_ParamLimits

0x5ccf,	// (0x00042b38) list_single_2graphic_pane_g2

0x5cb1,	// (0x00042b1a) list_single_2graphic_pane_g3_ParamLimits

0x5cb1,	// (0x00042b1a) list_single_2graphic_pane_g3

0x5ffd,	// (0x00042e66) list_single_2graphic_pane_g4_ParamLimits

0x5ffd,	// (0x00042e66) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004c5c2) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004c5c2) list_single_2graphic_pane_g

0x51dc,	// (0x00042045) list_single_2graphic_pane_t1_ParamLimits

0x51dc,	// (0x00042045) list_single_2graphic_pane_t1

0x6009,	// (0x00042e72) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6009,	// (0x00042e72) list_double2_graphic_large_graphic_pane_g1

0x4d56,	// (0x00041bbf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4d56,	// (0x00041bbf) list_double2_graphic_large_graphic_pane_g2

0x4ca3,	// (0x00041b0c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ca3,	// (0x00041b0c) list_double2_graphic_large_graphic_pane_g3

0x520a,	// (0x00042073) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x520a,	// (0x00042073) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004c5cb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004c5cb) list_double2_graphic_large_graphic_pane_g

0x5216,	// (0x0004207f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5216,	// (0x0004207f) list_double2_graphic_large_graphic_pane_t1

0x522c,	// (0x00042095) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x522c,	// (0x00042095) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004c5d4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004c5d4) list_double2_graphic_large_graphic_pane_t

0x886f,	// (0x000456d8) popup_fast_swap_window_ParamLimits

0x886f,	// (0x000456d8) popup_fast_swap_window

0x888d,	// (0x000456f6) popup_side_volume_key_window

0x88ab,	// (0x00045714) stacon_top_pane

0x88b5,	// (0x0004571e) status_pane_ParamLimits

0x88b5,	// (0x0004571e) status_pane

0x88ab,	// (0x00045714) status_small_pane

0x2c26,	// (0x0003fa8f) control_pane

0x2c26,	// (0x0003fa8f) stacon_bottom_pane

0x7e7b,	// (0x00044ce4) scroll_pane_cp121

0x7e72,	// (0x00044cdb) set_content_pane

0x8736,	// (0x0004559f) bg_active_tab_pane_g1_cp1

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp1

0x8748,	// (0x000455b1) bg_active_tab_pane_g3_cp1

0x8736,	// (0x0004559f) bg_passive_tab_pane_g1_cp1

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp1

0x8748,	// (0x000455b1) bg_passive_tab_pane_g3_cp1

0x8751,	// (0x000455ba) bg_active_tab_pane_g1_cp2

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp2

0x875a,	// (0x000455c3) bg_active_tab_pane_g3_cp2

0x8751,	// (0x000455ba) bg_passive_tab_pane_g1_cp2

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp2

0x875a,	// (0x000455c3) bg_passive_tab_pane_g3_cp2

0x8763,	// (0x000455cc) bg_active_tab_pane_g1_cp3

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp3

0x876c,	// (0x000455d5) bg_active_tab_pane_g3_cp3

0x8763,	// (0x000455cc) bg_passive_tab_pane_g1_cp3

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp3

0x876c,	// (0x000455d5) bg_passive_tab_pane_g3_cp3

0x8775,	// (0x000455de) bg_active_tab_pane_g1_cp4

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp4

0x8780,	// (0x000455e9) bg_active_tab_pane_g3_cp4

0x8775,	// (0x000455de) bg_passive_tab_pane_g1_cp4

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp4

0x8780,	// (0x000455e9) bg_passive_tab_pane_g3_cp4

0x87c9,	// (0x00045632) bg_active_tab_pane_g1_cp5

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp5

0x87d2,	// (0x0004563b) bg_active_tab_pane_g3_cp5

0x87c9,	// (0x00045632) bg_passive_tab_pane_g1_cp5

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp5

0x87d2,	// (0x0004563b) bg_passive_tab_pane_g3_cp5

0x87db,	// (0x00045644) list_set_graphic_pane_ParamLimits

0x87db,	// (0x00045644) list_set_graphic_pane

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp4

0x87f0,	// (0x00045659) list_set_graphic_pane_g1_ParamLimits

0x87f0,	// (0x00045659) list_set_graphic_pane_g1

0x87fc,	// (0x00045665) list_set_graphic_pane_g2_ParamLimits

0x87fc,	// (0x00045665) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004c5d9) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004c5d9) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0004c948) volume_small_pane_cp_g

0x8820,	// (0x00045689) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8820,	// (0x00045689) list_double2_large_graphic_pane_g1_cp2

0x882e,	// (0x00045697) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x882e,	// (0x00045697) list_double2_large_graphic_pane_g2_cp2

0x883f,	// (0x000456a8) list_double2_large_graphic_pane_g3_cp2

0x8847,	// (0x000456b0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8847,	// (0x000456b0) list_double2_large_graphic_pane_t1_cp2

0x885d,	// (0x000456c6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x885d,	// (0x000456c6) list_double2_large_graphic_pane_t2_cp2

0xaad6,	// (0x0004793f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad6,	// (0x0004793f) list_double_large_graphic_pane_g1_cp2

0xaae9,	// (0x00047952) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae9,	// (0x00047952) list_double_large_graphic_pane_g2_cp2

0x89d3,	// (0x0004583c) list_double_large_graphic_pane_g3_cp2

0xaafa,	// (0x00047963) list_double_large_graphic_pane_g4_cp

0xab02,	// (0x0004796b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab02,	// (0x0004796b) list_double_large_graphic_pane_t1_cp2

0xab19,	// (0x00047982) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab19,	// (0x00047982) list_double_large_graphic_pane_t2_cp2

0x88c3,	// (0x0004572c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88c3,	// (0x0004572c) list_double2_graphic_pane_g1_cp2

0x88d1,	// (0x0004573a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x88d1,	// (0x0004573a) list_double2_graphic_pane_g2_cp2

0x88e2,	// (0x0004574b) list_double2_graphic_pane_g3_cp2

0x88ec,	// (0x00045755) list_double2_graphic_pane_t1_cp2_ParamLimits

0x88ec,	// (0x00045755) list_double2_graphic_pane_t1_cp2

0x8902,	// (0x0004576b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8902,	// (0x0004576b) list_double2_graphic_pane_t2_cp2

0x8914,	// (0x0004577d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8914,	// (0x0004577d) list_single_number_heading_pane_g1_cp2

0x8920,	// (0x00045789) list_single_number_heading_pane_g2_cp2

0x8928,	// (0x00045791) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8928,	// (0x00045791) list_single_number_heading_pane_t1_cp2

0x893e,	// (0x000457a7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x893e,	// (0x000457a7) list_single_number_heading_pane_t2_cp2

0x8952,	// (0x000457bb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8952,	// (0x000457bb) list_single_number_heading_pane_t3_cp2

0x8914,	// (0x0004577d) list_single_heading_pane_g1_cp2_ParamLimits

0x8914,	// (0x0004577d) list_single_heading_pane_g1_cp2

0x8920,	// (0x00045789) list_single_heading_pane_g2_cp2

0x8928,	// (0x00045791) list_single_heading_pane_t1_cp2_ParamLimits

0x8928,	// (0x00045791) list_single_heading_pane_t1_cp2

0xa8d0,	// (0x00047739) list_single_heading_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x00047739) list_single_heading_pane_t2_cp2

0xa812,	// (0x0004767b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa812,	// (0x0004767b) list_double_graphic_pane_g1_cp2

0xa81e,	// (0x00047687) list_double_graphic_pane_g2_cp2_ParamLimits

0xa81e,	// (0x00047687) list_double_graphic_pane_g2_cp2

0xa82d,	// (0x00047696) list_double_graphic_pane_g3_cp2

0xa835,	// (0x0004769e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa835,	// (0x0004769e) list_double_graphic_pane_t1_cp2

0xa84b,	// (0x000476b4) list_double_graphic_pane_t2_cp2_ParamLimits

0xa84b,	// (0x000476b4) list_double_graphic_pane_t2_cp2

0x89c7,	// (0x00045830) list_double_number_pane_g1_cp2_ParamLimits

0x89c7,	// (0x00045830) list_double_number_pane_g1_cp2

0x89d3,	// (0x0004583c) list_double_number_pane_g2_cp2

0xa7d6,	// (0x0004763f) list_double_number_pane_t1_cp2_ParamLimits

0xa7d6,	// (0x0004763f) list_double_number_pane_t1_cp2

0xa7ea,	// (0x00047653) list_double_number_pane_t2_cp2_ParamLimits

0xa7ea,	// (0x00047653) list_double_number_pane_t2_cp2

0xa800,	// (0x00047669) list_double_number_pane_t3_cp2_ParamLimits

0xa800,	// (0x00047669) list_double_number_pane_t3_cp2

0xa6bf,	// (0x00047528) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6bf,	// (0x00047528) list_single_graphic_pane_g1_cp2

0x8a2d,	// (0x00045896) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a2d,	// (0x00045896) list_single_graphic_pane_g2_cp2

0x8a39,	// (0x000458a2) list_single_graphic_pane_g3_cp2

0xa695,	// (0x000474fe) list_single_graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x000474fe) list_single_graphic_pane_t1_cp2

0x8a2d,	// (0x00045896) list_single_number_pane_g1_cp2_ParamLimits

0x8a2d,	// (0x00045896) list_single_number_pane_g1_cp2

0x8a39,	// (0x000458a2) list_single_number_pane_g2_cp2

0xa695,	// (0x000474fe) list_single_number_pane_t1_cp2_ParamLimits

0xa695,	// (0x000474fe) list_single_number_pane_t1_cp2

0xa6ab,	// (0x00047514) list_single_number_pane_t2_cp2_ParamLimits

0xa6ab,	// (0x00047514) list_single_number_pane_t2_cp2

0x882e,	// (0x00045697) list_double2_pane_g1_cp2_ParamLimits

0x882e,	// (0x00045697) list_double2_pane_g1_cp2

0x883f,	// (0x000456a8) list_double2_pane_g2_cp2

0x899f,	// (0x00045808) list_double2_pane_t1_cp2_ParamLimits

0x899f,	// (0x00045808) list_double2_pane_t1_cp2

0x89b5,	// (0x0004581e) list_double2_pane_t2_cp2_ParamLimits

0x89b5,	// (0x0004581e) list_double2_pane_t2_cp2

0x89c7,	// (0x00045830) list_double_pane_g1_cp2_ParamLimits

0x89c7,	// (0x00045830) list_double_pane_g1_cp2

0x89d3,	// (0x0004583c) list_double_pane_g2_cp2

0x89db,	// (0x00045844) list_double_pane_t1_cp2_ParamLimits

0x89db,	// (0x00045844) list_double_pane_t1_cp2

0x89f1,	// (0x0004585a) list_double_pane_t2_cp2_ParamLimits

0x89f1,	// (0x0004585a) list_double_pane_t2_cp2

0x8a1d,	// (0x00045886) list_single_pane_cp2_g3

0x8a2d,	// (0x00045896) list_single_pane_g1_cp2_ParamLimits

0x8a2d,	// (0x00045896) list_single_pane_g1_cp2

0x8a39,	// (0x000458a2) list_single_pane_g2_cp2

0x8a41,	// (0x000458aa) list_single_pane_t1_cp2_ParamLimits

0x8a41,	// (0x000458aa) list_single_pane_t1_cp2

0x8a59,	// (0x000458c2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a59,	// (0x000458c2) list_single_large_graphic_pane_g1_cp2

0x8a67,	// (0x000458d0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a67,	// (0x000458d0) list_single_large_graphic_pane_g2_cp2

0x8a73,	// (0x000458dc) list_single_large_graphic_pane_g3_cp2

0x8a7b,	// (0x000458e4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a7b,	// (0x000458e4) list_single_large_graphic_pane_g4_cp1

0x8a95,	// (0x000458fe) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a95,	// (0x000458fe) list_single_large_graphic_pane_t1_cp2

0xa65f,	// (0x000474c8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa65f,	// (0x000474c8) list_single_graphic_heading_pane_g1_cp2

0xa62c,	// (0x00047495) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa62c,	// (0x00047495) list_single_graphic_heading_pane_g4_cp2

0x8a39,	// (0x000458a2) list_single_graphic_heading_pane_g5_cp2

0xa66b,	// (0x000474d4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa66b,	// (0x000474d4) list_single_graphic_heading_pane_t1_cp2

0xa681,	// (0x000474ea) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa681,	// (0x000474ea) list_single_graphic_heading_pane_t2_cp2

0xa620,	// (0x00047489) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa620,	// (0x00047489) list_single_2graphic_pane_g1_cp2

0xa62c,	// (0x00047495) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa62c,	// (0x00047495) list_single_2graphic_pane_g2_cp2

0x8a39,	// (0x000458a2) list_single_2graphic_pane_g3_cp2

0xa63d,	// (0x000474a6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa63d,	// (0x000474a6) list_single_2graphic_pane_g4_cp2

0xa649,	// (0x000474b2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa649,	// (0x000474b2) list_single_2graphic_pane_t1_cp2

0x2c1c,	// (0x0003fa85) list_highlight_pane_g10_cp1

0xa1f8,	// (0x00047061) list_highlight_pane_g1_cp1

0xa200,	// (0x00047069) list_highlight_pane_g2_cp1

0xa208,	// (0x00047071) list_highlight_pane_g3_cp1

0xa210,	// (0x00047079) list_highlight_pane_g4_cp1

0xa218,	// (0x00047081) list_highlight_pane_g5_cp1

0xa220,	// (0x00047089) list_highlight_pane_g6_cp1

0xa228,	// (0x00047091) list_highlight_pane_g7_cp1

0xa230,	// (0x00047099) list_highlight_pane_g8_cp1

0xa238,	// (0x000470a1) list_highlight_pane_g9_cp1

0xa118,	// (0x00046f81) form_field_slider_pane_t3

0xa126,	// (0x00046f8f) form_field_slider_pane_t4

0xa134,	// (0x00046f9d) slider_form_pane_ParamLimits

0xa134,	// (0x00046f9d) slider_form_pane

0x2c26,	// (0x0003fa8f) control_abbreviations

0x2c26,	// (0x0003fa8f) control_conventions

0x2c26,	// (0x0003fa8f) control_definitions

0x2c26,	// (0x0003fa8f) format_table_attribute

0xa926,	// (0x0004778f) bg_popup_preview_window_pane_g9

0x2c26,	// (0x0003fa8f) format_table_data2

0x2c26,	// (0x0003fa8f) format_table_data3

0x2c26,	// (0x0003fa8f) format_table_data_example

0x0008,

0x2c26,	// (0x0003fa8f) intro_purpose

0xf905,	// (0x0004c76e) bg_popup_preview_window_pane_g

0x2c26,	// (0x0003fa8f) texts_category

0x2c26,	// (0x0003fa8f) texts_graphics

0x8aab,	// (0x00045914) text_digital

0x8aba,	// (0x00045923) text_primary

0x8ac9,	// (0x00045932) text_primary_small

0x8ad8,	// (0x00045941) text_secondary

0x8ae7,	// (0x00045950) text_title

0xb0c2,	// (0x00047f2b) bg_passive_tab_pane_g1_cp3_srt

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp3_srt

0xb0cb,	// (0x00047f34) bg_passive_tab_pane_g3_cp3_srt

0x7605,	// (0x0004446e) bg_active_tab_pane_cp3_srt_ParamLimits

0x7605,	// (0x0004446e) bg_active_tab_pane_cp3_srt

0xb0d4,	// (0x00047f3d) tabs_4_active_pane_srt_g1

0xb0dc,	// (0x00047f45) tabs_4_active_pane_srt_t1_ParamLimits

0xb0dc,	// (0x00047f45) tabs_4_active_pane_srt_t1

0xb0c2,	// (0x00047f2b) bg_active_tab_pane_g1_cp3_copy1

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp3_copy1

0xb0cb,	// (0x00047f34) bg_active_tab_pane_g3_cp3_copy1

0x7605,	// (0x0004446e) tabs_2_long_active_pane_srt_ParamLimits

0x7605,	// (0x0004446e) tabs_2_long_active_pane_srt

0x7605,	// (0x0004446e) tabs_2_long_passive_pane_srt_ParamLimits

0x7605,	// (0x0004446e) tabs_2_long_passive_pane_srt

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp4_srt

0xad76,	// (0x00047bdf) bg_passive_tab_pane_g1_cp4_srt

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp4_srt

0xad7f,	// (0x00047be8) bg_passive_tab_pane_g3_cp4_srt

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp4_srt_ParamLimits

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp4_srt

0xad88,	// (0x00047bf1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad88,	// (0x00047bf1) tabs_2_long_active_pane_srt_t1

0xad76,	// (0x00047bdf) bg_active_tab_pane_g1_cp4_srt

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp4_srt

0xad7f,	// (0x00047be8) bg_active_tab_pane_g3_cp4_srt

0x7881,	// (0x000446ea) tabs_3_long_active_pane_srt_ParamLimits

0x7881,	// (0x000446ea) tabs_3_long_active_pane_srt

0x7881,	// (0x000446ea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7881,	// (0x000446ea) tabs_3_long_passive_pane_cp_srt

0x7881,	// (0x000446ea) tabs_3_long_passive_pane_srt_ParamLimits

0x7881,	// (0x000446ea) tabs_3_long_passive_pane_srt

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp5_srt

0x87c9,	// (0x00045632) bg_passive_tab_pane_g1_cp5_srt

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp5_srt

0x87d2,	// (0x0004563b) bg_passive_tab_pane_g3_cp5_srt

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp5_srt_ParamLimits

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp5_srt

0xad64,	// (0x00047bcd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad64,	// (0x00047bcd) tabs_3_long_active_pane_srt_t1

0x87c9,	// (0x00045632) bg_active_tab_pane_g1_cp5_srt

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp5_srt

0x87d2,	// (0x0004563b) bg_active_tab_pane_g3_cp5_srt

0xad56,	// (0x00047bbf) navi_text_pane_srt_t1

0xad4e,	// (0x00047bb7) navi_icon_pane_srt_g1

0x8cbe,	// (0x00045b27) midp_editing_number_pane_srt

0x8af6,	// (0x0004595f) midp_ticker_pane_srt

0x8cc6,	// (0x00045b2f) midp_ticker_pane_srt_g1

0x8cce,	// (0x00045b37) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004c5f8) midp_ticker_pane_srt_g

0x8cd6,	// (0x00045b3f) midp_ticker_pane_srt_t1

0xad3f,	// (0x00047ba8) midp_editing_number_pane_t1_copy1

0x8afe,	// (0x00045967) listscroll_midp_pane

0x8afe,	// (0x00045967) midp_form_pane

0x8b6c,	// (0x000459d5) midp_info_popup_window_ParamLimits

0x8b6c,	// (0x000459d5) midp_info_popup_window

0x7f50,	// (0x00044db9) bg_popup_sub_pane_cp50_ParamLimits

0x7f50,	// (0x00044db9) bg_popup_sub_pane_cp50

0x9e2e,	// (0x00046c97) listscroll_midp_info_pane_ParamLimits

0x9e2e,	// (0x00046c97) listscroll_midp_info_pane

0x9e16,	// (0x00046c7f) listscroll_form_midp_pane_ParamLimits

0x9e16,	// (0x00046c7f) listscroll_form_midp_pane

0x9e22,	// (0x00046c8b) scroll_bar_cp050

0x9df6,	// (0x00046c5f) list_midp_pane

0xbb4c,	// (0x000489b5) signal_pane_g2_cp

0x9d30,	// (0x00046b99) listscroll_midp_info_pane_t1_ParamLimits

0x9d30,	// (0x00046b99) listscroll_midp_info_pane_t1

0x9d48,	// (0x00046bb1) listscroll_midp_info_pane_t2_ParamLimits

0x9d48,	// (0x00046bb1) listscroll_midp_info_pane_t2

0x9d86,	// (0x00046bef) listscroll_midp_info_pane_t3_ParamLimits

0x9d86,	// (0x00046bef) listscroll_midp_info_pane_t3

0x9dc0,	// (0x00046c29) listscroll_midp_info_pane_t4_ParamLimits

0x9dc0,	// (0x00046c29) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004c6a9) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004c6a9) listscroll_midp_info_pane_t

0x801a,	// (0x00044e83) scroll_pane_cp21

0x9cca,	// (0x00046b33) form_midp_field_choice_group_pane

0x9cd3,	// (0x00046b3c) form_midp_field_text_pane

0x9d16,	// (0x00046b7f) form_midp_field_time_pane

0x9d1e,	// (0x00046b87) form_midp_gauge_slider_pane

0x9d27,	// (0x00046b90) form_midp_gauge_wait_pane

0x2c26,	// (0x0003fa8f) form_midp_image_pane

0x531d,	// (0x00042186) list_single_midp_pane_ParamLimits

0x531d,	// (0x00042186) list_single_midp_pane

0x9c8e,	// (0x00046af7) form_midp_field_text_pane_t1

0x9aa2,	// (0x0004690b) input_focus_pane_cp050

0x9cb9,	// (0x00046b22) list_midp_form_text_pane

0x9c5d,	// (0x00046ac6) form_midp_field_choice_group_pane_t1

0x9c6b,	// (0x00046ad4) input_focus_pane_cp051

0x9c7f,	// (0x00046ae8) list_midp_choice_pane

0x2c26,	// (0x0003fa8f) status_idle_pane

0x9c41,	// (0x00046aaa) form_midp_field_time_pane_t1

0x2c1c,	// (0x0003fa85) wait_anim_pane_g2_copy1

0x9c4f,	// (0x00046ab8) form_midp_field_time_pane_t2

0x0001,

0x8c1c,	// (0x00045a85) aid_navinavi_width_2_pane

0xf83b,	// (0x0004c6a4) form_midp_field_time_pane_t

0x2c26,	// (0x0003fa8f) input_focus_pane_cp052

0x2c26,	// (0x0003fa8f) bg_input_focus_pane_cp040

0x9c01,	// (0x00046a6a) form_midp_gauge_slider_pane_t1

0x9c0f,	// (0x00046a78) form_midp_gauge_slider_pane_t2

0x9c1d,	// (0x00046a86) form_midp_gauge_slider_pane_t3

0x9c2b,	// (0x00046a94) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004c69b) form_midp_gauge_slider_pane_t

0x9c39,	// (0x00046aa2) form_midp_slider_pane

0x7605,	// (0x0004446e) bg_input_focus_pane_cp041_ParamLimits

0x7605,	// (0x0004446e) bg_input_focus_pane_cp041

0x9bce,	// (0x00046a37) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bce,	// (0x00046a37) form_midp_gauge_wait_pane_t1

0x9be0,	// (0x00046a49) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be0,	// (0x00046a49) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004c696) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004c696) form_midp_gauge_wait_pane_t

0x9bf2,	// (0x00046a5b) form_midp_wait_pane_ParamLimits

0x9bf2,	// (0x00046a5b) form_midp_wait_pane

0x9b96,	// (0x000469ff) form_midp_image_pane_g1

0x9b9f,	// (0x00046a08) form_midp_image_pane_t1

0x9bae,	// (0x00046a17) form_midp_image_pane_t2

0x9bbd,	// (0x00046a26) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004c68f) form_midp_image_pane_t

0x9b8d,	// (0x000469f6) list_single_midp_pane_g1

0x530e,	// (0x00042177) list_single_midp_pane_t1

0x9b73,	// (0x000469dc) list_midp_form_item_pane_ParamLimits

0x9b73,	// (0x000469dc) list_midp_form_item_pane

0x8bc4,	// (0x00045a2d) list_midp_form_item_pane_t1

0x8bd3,	// (0x00045a3c) midp_ticker_pane_g1

0x8bdf,	// (0x00045a48) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004c5de) midp_ticker_pane_g

0x8beb,	// (0x00045a54) midp_ticker_pane_t1

0xafbe,	// (0x00047e27) midp_editing_number_pane_t1

0xaf9c,	// (0x00047e05) midp_editing_number_pane

0xafab,	// (0x00047e14) midp_ticker_pane

0xad2f,	// (0x00047b98) ai_message_heading_pane

0x2c26,	// (0x0003fa8f) bg_popup_window_pane_cp14

0xad37,	// (0x00047ba0) listscroll_ai_message_pane

0xacb5,	// (0x00047b1e) ai_message_heading_pane_g1_ParamLimits

0xacb5,	// (0x00047b1e) ai_message_heading_pane_g1

0xacc1,	// (0x00047b2a) ai_message_heading_pane_g2_ParamLimits

0xacc1,	// (0x00047b2a) ai_message_heading_pane_g2

0xaccf,	// (0x00047b38) ai_message_heading_pane_g3_ParamLimits

0xaccf,	// (0x00047b38) ai_message_heading_pane_g3

0xacdb,	// (0x00047b44) ai_message_heading_pane_g4_ParamLimits

0xacdb,	// (0x00047b44) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004c7d0) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004c7d0) ai_message_heading_pane_g

0xace7,	// (0x00047b50) ai_message_heading_pane_t1_ParamLimits

0xace7,	// (0x00047b50) ai_message_heading_pane_t1

0xad01,	// (0x00047b6a) ai_message_heading_pane_t2_ParamLimits

0xad01,	// (0x00047b6a) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004c7d9) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004c7d9) ai_message_heading_pane_t

0xad15,	// (0x00047b7e) bg_popup_heading_pane_cp1_ParamLimits

0xad15,	// (0x00047b7e) bg_popup_heading_pane_cp1

0xaca3,	// (0x00047b0c) list_ai_message_pane_ParamLimits

0xaca3,	// (0x00047b0c) list_ai_message_pane

0x801a,	// (0x00044e83) scroll_pane_cp10

0xac3f,	// (0x00047aa8) list_ai_message_pane_g1

0xac47,	// (0x00047ab0) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004c7ad) list_ai_message_pane_g

0xac4f,	// (0x00047ab8) list_ai_message_pane_t1_ParamLimits

0xac4f,	// (0x00047ab8) list_ai_message_pane_t1

0xac64,	// (0x00047acd) list_ai_message_pane_t2_ParamLimits

0xac64,	// (0x00047acd) list_ai_message_pane_t2

0xac79,	// (0x00047ae2) list_ai_message_pane_t3_ParamLimits

0xac79,	// (0x00047ae2) list_ai_message_pane_t3

0xac8e,	// (0x00047af7) list_ai_message_pane_t4_ParamLimits

0xac8e,	// (0x00047af7) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004c7b2) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004c7b2) list_ai_message_pane_t

0xac28,	// (0x00047a91) cell_ai_soft_ind_pane_ParamLimits

0xac28,	// (0x00047a91) cell_ai_soft_ind_pane

0x8bfd,	// (0x00045a66) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bfd,	// (0x00045a66) cell_ai_soft_ind_pane_g1

0x2c26,	// (0x0003fa8f) grid_highlight_cp1

0x8c0a,	// (0x00045a73) text_secondary_cp56_ParamLimits

0x8c0a,	// (0x00045a73) text_secondary_cp56

0xabfd,	// (0x00047a66) example_general_pane_ParamLimits

0xabfd,	// (0x00047a66) example_general_pane

0xac09,	// (0x00047a72) example_parent_pane_g1_ParamLimits

0xac09,	// (0x00047a72) example_parent_pane_g1

0xac15,	// (0x00047a7e) example_parent_pane_t1_ParamLimits

0xac15,	// (0x00047a7e) example_parent_pane_t1

0x9237,	// (0x000460a0) popup_preview_text_window_ParamLimits

0x9237,	// (0x000460a0) popup_preview_text_window

0x8a25,	// (0x0004588e) list_single_pane_cp2_g4

0x7937,	// (0x000447a0) bg_popup_preview_window_pane_ParamLimits

0x7937,	// (0x000447a0) bg_popup_preview_window_pane

0xa930,	// (0x00047799) popup_preview_text_window_t1_ParamLimits

0xa930,	// (0x00047799) popup_preview_text_window_t1

0xa94e,	// (0x000477b7) popup_preview_text_window_t2_ParamLimits

0xa94e,	// (0x000477b7) popup_preview_text_window_t2

0xa997,	// (0x00047800) popup_preview_text_window_t3_ParamLimits

0xa997,	// (0x00047800) popup_preview_text_window_t3

0xa9dc,	// (0x00047845) popup_preview_text_window_t4_ParamLimits

0xa9dc,	// (0x00047845) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004c781) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004c781) popup_preview_text_window_t

0xaa5a,	// (0x000478c3) scroll_pane_cp11

0x99b0,	// (0x00046819) bg_popup_preview_window_pane_g1

0xa8e4,	// (0x0004774d) bg_popup_preview_window_pane_g2

0xa8ee,	// (0x00047757) bg_popup_preview_window_pane_g3

0xa8f8,	// (0x00047761) bg_popup_preview_window_pane_g4

0xa902,	// (0x0004776b) bg_popup_preview_window_pane_g5

0xa90c,	// (0x00047775) bg_popup_preview_window_pane_g6

0xa914,	// (0x0004777d) bg_popup_preview_window_pane_g7

0xa91c,	// (0x00047785) bg_popup_preview_window_pane_g8

0x5836,	// (0x0004269f) aid_popup_width_pane

0x9213,	// (0x0004607c) popup_midp_note_alarm_window_ParamLimits

0x9213,	// (0x0004607c) popup_midp_note_alarm_window

0x7e8c,	// (0x00044cf5) data_form_pane_ParamLimits

0x504c,	// (0x00041eb5) form_field_data_pane_g1

0x5056,	// (0x00041ebf) form_field_data_pane_t1_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_ParamLimits

0x7ea6,	// (0x00044d0f) data_form_wide_pane_ParamLimits

0x5070,	// (0x00041ed9) form_field_data_wide_pane_g1

0x507c,	// (0x00041ee5) form_field_data_wide_pane_t1_ParamLimits

0x7bfd,	// (0x00044a66) input_focus_pane_cp6_ParamLimits

0x7fc5,	// (0x00044e2e) input_popup_find_pane_g1_ParamLimits

0x7fc5,	// (0x00044e2e) input_popup_find_pane_g1

0x5e5a,	// (0x00042cc3) aid_navi_side_left_pane

0x5e6f,	// (0x00042cd8) aid_navi_side_right_pane

0xa2f3,	// (0x0004715c) bg_popup_window_pane_cp30_ParamLimits

0xa2f3,	// (0x0004715c) bg_popup_window_pane_cp30

0xa36d,	// (0x000471d6) popup_midp_note_alarm_window_g1_ParamLimits

0xa36d,	// (0x000471d6) popup_midp_note_alarm_window_g1

0xa39d,	// (0x00047206) popup_midp_note_alarm_window_t1_ParamLimits

0xa39d,	// (0x00047206) popup_midp_note_alarm_window_t1

0xa43e,	// (0x000472a7) popup_midp_note_alarm_window_t2_ParamLimits

0xa43e,	// (0x000472a7) popup_midp_note_alarm_window_t2

0xa4ec,	// (0x00047355) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ec,	// (0x00047355) popup_midp_note_alarm_window_t3

0xa51e,	// (0x00047387) popup_midp_note_alarm_window_t4_ParamLimits

0xa51e,	// (0x00047387) popup_midp_note_alarm_window_t4

0xa544,	// (0x000473ad) popup_midp_note_alarm_window_t5_ParamLimits

0xa544,	// (0x000473ad) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004c71e) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004c71e) popup_midp_note_alarm_window_t

0xa5f0,	// (0x00047459) wait_bar_pane_cp1_ParamLimits

0xa5f0,	// (0x00047459) wait_bar_pane_cp1

0x2c26,	// (0x0003fa8f) wait_anim_pane_copy1

0x2c26,	// (0x0003fa8f) wait_border_pane_copy1

0x9fd8,	// (0x00046e41) wait_border_pane_g1_copy1

0x5096,	// (0x00041eff) form_field_popup_pane_g1

0x509e,	// (0x00041f07) form_field_popup_pane_t1_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_cp7_ParamLimits

0x7ed2,	// (0x00044d3b) list_form_pane_ParamLimits

0x50b8,	// (0x00041f21) form_field_popup_wide_pane_g1

0x50c0,	// (0x00041f29) form_field_popup_wide_pane_t1_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_cp8_ParamLimits

0x7ede,	// (0x00044d47) list_form_wide_pane_ParamLimits

0xb14f,	// (0x00047fb8) aid_size_cell_graphic_pane

0x514c,	// (0x00041fb5) data_form_pane_t1_ParamLimits

0x5364,	// (0x000421cd) data_form_wide_pane_t1_ParamLimits

0x955e,	// (0x000463c7) bg_status_flat_pane

0x7565,	// (0x000443ce) title_pane_t1_ParamLimits

0x75cd,	// (0x00044436) title_pane_t2_ParamLimits

0x75f3,	// (0x0004445c) title_pane_t3_ParamLimits

0xf573,	// (0x0004c3dc) title_pane_t_ParamLimits

0x849d,	// (0x00045306) level_1_signal_ParamLimits

0x84aa,	// (0x00045313) level_2_signal_ParamLimits

0x84b7,	// (0x00045320) level_3_signal_ParamLimits

0x84c4,	// (0x0004532d) level_4_signal_ParamLimits

0x84d1,	// (0x0004533a) level_5_signal_ParamLimits

0x84de,	// (0x00045347) level_6_signal_ParamLimits

0x84eb,	// (0x00045354) level_7_signal_ParamLimits

0x849d,	// (0x00045306) level_1_battery_ParamLimits

0x84aa,	// (0x00045313) level_2_battery_ParamLimits

0x84b7,	// (0x00045320) level_3_battery_ParamLimits

0x84c4,	// (0x0004532d) level_4_battery_ParamLimits

0x84d1,	// (0x0004533a) level_5_battery_ParamLimits

0x84de,	// (0x00045347) level_6_battery_ParamLimits

0x84eb,	// (0x00045354) level_7_battery_ParamLimits

0xa1f8,	// (0x00047061) bg_status_flat_pane_g1

0xa200,	// (0x00047069) bg_status_flat_pane_g2

0xa208,	// (0x00047071) bg_status_flat_pane_g3

0xa210,	// (0x00047079) bg_status_flat_pane_g4

0xa218,	// (0x00047081) bg_status_flat_pane_g5

0xa220,	// (0x00047089) bg_status_flat_pane_g6

0xa228,	// (0x00047091) bg_status_flat_pane_g7

0x761b,	// (0x00044484) tabs_3_active_pane_t1_ParamLimits

0x761b,	// (0x00044484) tabs_3_passive_pane_t1_ParamLimits

0x7635,	// (0x0004449e) tabs_4_active_pane_t1_ParamLimits

0x7635,	// (0x0004449e) tabs_4_1_passive_pane_t1_ParamLimits

0x805c,	// (0x00044ec5) tabs_2_active_pane_t1_ParamLimits

0x805c,	// (0x00044ec5) tabs_2_passive_pane_t1_ParamLimits

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp4_ParamLimits

0x807c,	// (0x00044ee5) tabs_2_long_active_pane_t1_ParamLimits

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp4_ParamLimits

0x63e6,	// (0x0004324f) list_single_midp_graphic_pane_t1_ParamLimits

0x806e,	// (0x00044ed7) bg_active_tab_pane_cp5_ParamLimits

0x809b,	// (0x00044f04) tabs_3_long_active_pane_t1_ParamLimits

0x808f,	// (0x00044ef8) bg_passive_tab_pane_cp5_ParamLimits

0x63e6,	// (0x0004324f) list_single_midp_graphic_pane_t1

0x955e,	// (0x000463c7) bg_status_flat_pane_ParamLimits

0x9629,	// (0x00046492) indicator_pane_cp2_ParamLimits

0x9629,	// (0x00046492) indicator_pane_cp2

0x976b,	// (0x000465d4) navi_pane_srt_ParamLimits

0x976b,	// (0x000465d4) navi_pane_srt

0x978f,	// (0x000465f8) popup_clock_digital_analogue_window_cp1

0x76e5,	// (0x0004454e) indicator_pane_t1

0x8af6,	// (0x0004595f) copy_highlight_pane

0x8af6,	// (0x0004595f) cursor_graphics_pane

0x8af6,	// (0x0004595f) graphic_within_text_pane

0x8af6,	// (0x0004595f) link_highlight_pane

0xaa1d,	// (0x00047886) popup_preview_text_window_t5_ParamLimits

0xaa1d,	// (0x00047886) popup_preview_text_window_t5

0x8c26,	// (0x00045a8f) cursor_digital_pane

0x8c26,	// (0x00045a8f) cursor_primary_pane

0x8c37,	// (0x00045aa0) cursor_primary_small_pane

0x8c3f,	// (0x00045aa8) cursor_secondary_pane

0x8c47,	// (0x00045ab0) cursor_title_pane

0x8c26,	// (0x00045a8f) link_highlight_digital_pane

0x8c2e,	// (0x00045a97) link_highlight_primary_pane

0x8c37,	// (0x00045aa0) link_highlight_primary_small_pane

0x8c3f,	// (0x00045aa8) link_highlight_secondary_pane

0x8c47,	// (0x00045ab0) link_highlight_title_pane

0x8c26,	// (0x00045a8f) copy_highlight_digital_pane

0x8c26,	// (0x00045a8f) copy_highlight_primary_pane

0x8c37,	// (0x00045aa0) copy_highlight_primary_small_pane

0x8c3f,	// (0x00045aa8) copy_highlight_secondary_pane

0x8c47,	// (0x00045ab0) copy_highlight_title_pane

0x8c3f,	// (0x00045aa8) graphic_text_digital_pane

0xa296,	// (0x000470ff) graphic_text_primary_pane

0xa29f,	// (0x00047108) graphic_text_primary_small_pane

0x8c37,	// (0x00045aa0) graphic_text_secondary_pane

0x8c26,	// (0x00045a8f) graphic_text_title_pane

0x8c4f,	// (0x00045ab8) cursor_primary_pane_g1

0xa288,	// (0x000470f1) cursor_text_primary_t1

0xa270,	// (0x000470d9) cursor_primary_small_pane_g1

0xa27a,	// (0x000470e3) cursor_text_primary_small_t1

0xa258,	// (0x000470c1) cursor_primary_small_pane_g1_copy1

0xa262,	// (0x000470cb) cursor_text_primary_small_t1_copy1

0xa240,	// (0x000470a9) cursor_text_title_t1

0xa24e,	// (0x000470b7) cursor_title_pane_g1

0x8c4f,	// (0x00045ab8) cursor_digital_pane_g1

0x8c59,	// (0x00045ac2) cursor_text_digital_t1

0x8c67,	// (0x00045ad0) link_highlight_primary_pane_g1

0xa1e9,	// (0x00047052) link_highlight_primary_pane_t1

0x8c67,	// (0x00045ad0) link_highlight_primary_small_pane_g1

0x8c6f,	// (0x00045ad8) link_highlight_primary_small_pane_t1

0x8c7e,	// (0x00045ae7) link_highlight_secondary_pane_g1

0x8c86,	// (0x00045aef) link_highlight_secondary_pane_t1

0xa15d,	// (0x00046fc6) link_highlight_title_pane_g1

0xa165,	// (0x00046fce) link_highlight_title_pane_t1

0xa146,	// (0x00046faf) link_highlight_digital_pane_g1

0xa14e,	// (0x00046fb7) link_highlight_digital_pane_t1

0xa00e,	// (0x00046e77) copy_highlight_primary_pane_g1

0xa025,	// (0x00046e8e) copy_highlight_primary_pane_t1

0xa00e,	// (0x00046e77) copy_highlight_primary_small_pane_g1

0xa016,	// (0x00046e7f) copy_highlight_primary_small_pane_t1

0x8c95,	// (0x00045afe) copy_highlight_secondary_pane_g1

0x8c9d,	// (0x00045b06) copy_highlight_secondary_pane_t1

0x9ff7,	// (0x00046e60) copy_highlight_title_pane_g1

0x9fff,	// (0x00046e68) copy_highlight_title_pane_t1

0xa00e,	// (0x00046e77) copy_highlight_digital_pane_g1

0xb31f,	// (0x00048188) copy_highlight_digital_pane_t1

0xb273,	// (0x000480dc) graphic_text_primary_pane_g1

0xb303,	// (0x0004816c) graphic_text_primary_pane_t1

0xb311,	// (0x0004817a) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004c84d) graphic_text_primary_pane_t

0xb2df,	// (0x00048148) graphic_text_primary_small_pane_g1

0xb2e7,	// (0x00048150) graphic_text_primary_small_pane_t1

0xb2f5,	// (0x0004815e) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004c848) graphic_text_primary_small_pane_t

0xb2bb,	// (0x00048124) graphic_text_secondary_pane_g1

0xb2c3,	// (0x0004812c) graphic_text_secondary_pane_t1

0xb2d1,	// (0x0004813a) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004c843) graphic_text_secondary_pane_t

0xb297,	// (0x00048100) graphic_text_title_pane_g1

0xb29f,	// (0x00048108) graphic_text_title_pane_t1

0xb2ad,	// (0x00048116) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004c83e) graphic_text_title_pane_t

0xb273,	// (0x000480dc) graphic_text_digital_pane_g1

0xb27b,	// (0x000480e4) graphic_text_digital_pane_t1

0xb289,	// (0x000480f2) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004c839) graphic_text_digital_pane_t

0x7605,	// (0x0004446e) navi_icon_pane_srt_ParamLimits

0x7605,	// (0x0004446e) navi_icon_pane_srt

0x2c26,	// (0x0003fa8f) navi_midp_pane_srt

0x2c26,	// (0x0003fa8f) navi_navi_pane_srt

0x7605,	// (0x0004446e) navi_text_pane_srt_ParamLimits

0x7605,	// (0x0004446e) navi_text_pane_srt

0xb23e,	// (0x000480a7) navi_navi_icon_text_pane_srt

0xb246,	// (0x000480af) navi_navi_pane_srt_g1_ParamLimits

0xb246,	// (0x000480af) navi_navi_pane_srt_g1

0xb258,	// (0x000480c1) navi_navi_pane_srt_g2_ParamLimits

0xb258,	// (0x000480c1) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004c834) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004c834) navi_navi_pane_srt_g

0xb26a,	// (0x000480d3) navi_navi_tabs_pane_srt

0xb23e,	// (0x000480a7) navi_navi_text_pane_srt

0xb23e,	// (0x000480a7) navi_navi_volume_pane_srt

0xb22f,	// (0x00048098) navi_navi_text_pane_srt_t1

0x676c,	// (0x000435d5) navi_navi_volume_pane_srt_g1

0x6774,	// (0x000435dd) volume_small_pane_srt_ParamLimits

0x6774,	// (0x000435dd) volume_small_pane_srt

0x615f,	// (0x00042fc8) volume_small_pane_srt_g1_ParamLimits

0x615f,	// (0x00042fc8) volume_small_pane_srt_g1

0x616f,	// (0x00042fd8) volume_small_pane_srt_g2_ParamLimits

0x616f,	// (0x00042fd8) volume_small_pane_srt_g2

0x6180,	// (0x00042fe9) volume_small_pane_srt_g3_ParamLimits

0x6180,	// (0x00042fe9) volume_small_pane_srt_g3

0x6191,	// (0x00042ffa) volume_small_pane_srt_g4_ParamLimits

0x6191,	// (0x00042ffa) volume_small_pane_srt_g4

0x61a2,	// (0x0004300b) volume_small_pane_srt_g5_ParamLimits

0x61a2,	// (0x0004300b) volume_small_pane_srt_g5

0x61b3,	// (0x0004301c) volume_small_pane_srt_g6_ParamLimits

0x61b3,	// (0x0004301c) volume_small_pane_srt_g6

0x61c4,	// (0x0004302d) volume_small_pane_srt_g7_ParamLimits

0x61c4,	// (0x0004302d) volume_small_pane_srt_g7

0x61d5,	// (0x0004303e) volume_small_pane_srt_g8_ParamLimits

0x61d5,	// (0x0004303e) volume_small_pane_srt_g8

0x61e6,	// (0x0004304f) volume_small_pane_srt_g9_ParamLimits

0x61e6,	// (0x0004304f) volume_small_pane_srt_g9

0x61f7,	// (0x00043060) volume_small_pane_srt_g10_ParamLimits

0x61f7,	// (0x00043060) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004c5e3) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004c5e3) volume_small_pane_srt_g

0x79ec,	// (0x00044855) query_popup_data_pane_cp2

0xb215,	// (0x0004807e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb215,	// (0x0004807e) navi_navi_icon_text_pane_srt_t1

0xa296,	// (0x000470ff) navi_tabs_2_long_pane_srt

0xa296,	// (0x000470ff) navi_tabs_2_pane_srt

0xa296,	// (0x000470ff) navi_tabs_3_long_pane_srt

0xa296,	// (0x000470ff) navi_tabs_3_pane_srt

0xa296,	// (0x000470ff) navi_tabs_4_pane_srt

0x674c,	// (0x000435b5) tabs_2_active_pane_srt_ParamLimits

0x674c,	// (0x000435b5) tabs_2_active_pane_srt

0x675c,	// (0x000435c5) tabs_2_passive_pane_srt_ParamLimits

0x675c,	// (0x000435c5) tabs_2_passive_pane_srt

0x8e74,	// (0x00045cdd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e74,	// (0x00045cdd) bg_passive_tab_pane_cp1_srt

0xb1e1,	// (0x0004804a) bg_passive_tab_pane_g1_cp1_srt

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp1_srt

0xb1ea,	// (0x00048053) bg_passive_tab_pane_g3_cp1_srt

0x7605,	// (0x0004446e) bg_active_tab_pane_cp1_srt_ParamLimits

0x7605,	// (0x0004446e) bg_active_tab_pane_cp1_srt

0xb1f3,	// (0x0004805c) tabs_2_active_pane_srt_g1

0xb1fb,	// (0x00048064) tabs_2_active_pane_srt_t1_ParamLimits

0xb1fb,	// (0x00048064) tabs_2_active_pane_srt_t1

0xb1e1,	// (0x0004804a) bg_active_tab_pane_g1_cp1_srt

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp1_srt

0xb1ea,	// (0x00048053) bg_active_tab_pane_g3_cp1_srt

0x6719,	// (0x00043582) tabs_3_active_pane_srt_ParamLimits

0x6719,	// (0x00043582) tabs_3_active_pane_srt

0x672a,	// (0x00043593) tabs_3_passive_pane_cp_srt_ParamLimits

0x672a,	// (0x00043593) tabs_3_passive_pane_cp_srt

0x673b,	// (0x000435a4) tabs_3_passive_pane_srt_ParamLimits

0x673b,	// (0x000435a4) tabs_3_passive_pane_srt

0x8e74,	// (0x00045cdd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e74,	// (0x00045cdd) bg_passive_tab_pane_cp2_srt

0x8cac,	// (0x00045b15) bg_passive_tab_pane_g1_cp2_srt

0x873f,	// (0x000455a8) bg_passive_tab_pane_g2_cp2_srt

0x8cb5,	// (0x00045b1e) bg_passive_tab_pane_g3_cp2_srt

0x7605,	// (0x0004446e) bg_active_tab_pane_cp2_srt_ParamLimits

0x7605,	// (0x0004446e) bg_active_tab_pane_cp2_srt

0xb1c7,	// (0x00048030) tabs_3_active_pane_srt_g1

0xb1cf,	// (0x00048038) tabs_3_active_pane_srt_t1_ParamLimits

0xb1cf,	// (0x00048038) tabs_3_active_pane_srt_t1

0x8cac,	// (0x00045b15) bg_active_tab_pane_g1_cp2_srt

0x873f,	// (0x000455a8) bg_active_tab_pane_g2_cp2_srt

0x8cb5,	// (0x00045b1e) bg_active_tab_pane_g3_cp2_srt

0x66d1,	// (0x0004353a) tabs_4_active_pane_srt_ParamLimits

0x66d1,	// (0x0004353a) tabs_4_active_pane_srt

0x66e3,	// (0x0004354c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x66e3,	// (0x0004354c) tabs_4_passive_pane_cp2_srt

0x8e0a,	// (0x00045c73) aid_size_cell_toolbar

0x808f,	// (0x00044ef8) main_idle_act_pane_ParamLimits

0x9039,	// (0x00045ea2) popup_large_graphic_colour_window_ParamLimits

0x93e0,	// (0x00046249) popup_toolbar_window_ParamLimits

0x93e0,	// (0x00046249) popup_toolbar_window

0xafe1,	// (0x00047e4a) list_single_graphic_2heading_pane_ParamLimits

0xafe1,	// (0x00047e4a) list_single_graphic_2heading_pane

0x824b,	// (0x000450b4) aid_size_cell_apps_grid_lsc_pane

0x825d,	// (0x000450c6) aid_size_cell_apps_grid_prt_pane

0x8e74,	// (0x00045cdd) bg_wml_button_pane_cp1_ParamLimits

0x8e74,	// (0x00045cdd) bg_wml_button_pane_cp1

0x9c8e,	// (0x00046af7) form_midp_field_text_pane_t1_ParamLimits

0x9aa2,	// (0x0004690b) input_focus_pane_cp050_ParamLimits

0x9cb9,	// (0x00046b22) list_midp_form_text_pane_ParamLimits

0x9c6b,	// (0x00046ad4) input_focus_pane_cp051_ParamLimits

0x9c7f,	// (0x00046ae8) list_midp_choice_pane_ParamLimits

0x9b33,	// (0x0004699c) list_single_2graphic_pane_cp3_ParamLimits

0x9b33,	// (0x0004699c) list_single_2graphic_pane_cp3

0x9b4c,	// (0x000469b5) list_single_midp_graphic_pane_ParamLimits

0x9b4c,	// (0x000469b5) list_single_midp_graphic_pane

0x5256,	// (0x000420bf) list_single_graphic_2heading_pane_g1_ParamLimits

0x5256,	// (0x000420bf) list_single_graphic_2heading_pane_g1

0x5262,	// (0x000420cb) list_single_graphic_2heading_pane_g4_ParamLimits

0x5262,	// (0x000420cb) list_single_graphic_2heading_pane_g4

0x526e,	// (0x000420d7) list_single_graphic_2heading_pane_g5_ParamLimits

0x526e,	// (0x000420d7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004c636) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004c636) list_single_graphic_2heading_pane_g

0x527a,	// (0x000420e3) list_single_graphic_2heading_pane_t1_ParamLimits

0x527a,	// (0x000420e3) list_single_graphic_2heading_pane_t1

0x528e,	// (0x000420f7) list_single_graphic_2heading_pane_t2_ParamLimits

0x528e,	// (0x000420f7) list_single_graphic_2heading_pane_t2

0x52aa,	// (0x00042113) list_single_graphic_2heading_pane_t3_ParamLimits

0x52aa,	// (0x00042113) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004c63d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004c63d) list_single_graphic_2heading_pane_t

0x98ee,	// (0x00046757) bg_popup_sub_pane_cp2

0x9918,	// (0x00046781) grid_toobar_pane

0x635e,	// (0x000431c7) cell_toolbar_pane_ParamLimits

0x635e,	// (0x000431c7) cell_toolbar_pane

0x9954,	// (0x000467bd) cell_toolbar_pane_g1_ParamLimits

0x9954,	// (0x000467bd) cell_toolbar_pane_g1

0x9968,	// (0x000467d1) cell_toolbar_pane_g2_ParamLimits

0x9968,	// (0x000467d1) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004c64b) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004c64b) cell_toolbar_pane_g

0x998a,	// (0x000467f3) grid_highlight_pane_cp2_ParamLimits

0x998a,	// (0x000467f3) grid_highlight_pane_cp2

0x99a4,	// (0x0004680d) toolbar_button_pane

0x99b0,	// (0x00046819) toolbar_button_pane_g1

0x99b8,	// (0x00046821) toolbar_button_pane_g2

0x99c0,	// (0x00046829) toolbar_button_pane_g3

0x99c8,	// (0x00046831) toolbar_button_pane_g4

0x99d0,	// (0x00046839) toolbar_button_pane_g5

0x99d8,	// (0x00046841) toolbar_button_pane_g6

0x99e0,	// (0x00046849) toolbar_button_pane_g7

0x99e8,	// (0x00046851) toolbar_button_pane_g8

0x99f0,	// (0x00046859) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004c650) toolbar_button_pane_g

0x63a2,	// (0x0004320b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x63a2,	// (0x0004320b) list_single_2graphic_pane_g1_cp3

0x63ae,	// (0x00043217) list_single_2graphic_pane_g2_cp3_ParamLimits

0x63ae,	// (0x00043217) list_single_2graphic_pane_g2_cp3

0x8920,	// (0x00045789) list_single_2graphic_pane_g3_cp3

0x63bf,	// (0x00043228) list_single_2graphic_pane_g4_cp3_ParamLimits

0x63bf,	// (0x00043228) list_single_2graphic_pane_g4_cp3

0x63cb,	// (0x00043234) list_single_2graphic_pane_t1_cp3_ParamLimits

0x63cb,	// (0x00043234) list_single_2graphic_pane_t1_cp3

0x8914,	// (0x0004577d) list_single_midp_graphic_pane_g2_ParamLimits

0x8914,	// (0x0004577d) list_single_midp_graphic_pane_g2

0x523e,	// (0x000420a7) aid_zoom_text_primary

0x5246,	// (0x000420af) aid_zoom_text_secondary

0x8d69,	// (0x00045bd2) status_small_pane_g7_ParamLimits

0x8d69,	// (0x00045bd2) status_small_pane_g7

0x8d8c,	// (0x00045bf5) status_small_pane_t1_ParamLimits

0x7548,	// (0x000443b1) title_pane_g2

0x0003,

0xf56a,	// (0x0004c3d3) title_pane_g

0x7a95,	// (0x000448fe) aid_size_cell_colour_1_pane_ParamLimits

0x7a95,	// (0x000448fe) aid_size_cell_colour_1_pane

0x7aa9,	// (0x00044912) aid_size_cell_colour_2_pane_ParamLimits

0x7aa9,	// (0x00044912) aid_size_cell_colour_2_pane

0x7abd,	// (0x00044926) aid_size_cell_colour_3_pane_ParamLimits

0x7abd,	// (0x00044926) aid_size_cell_colour_3_pane

0x7ad1,	// (0x0004493a) aid_size_cell_colour_4_pane_ParamLimits

0x7ad1,	// (0x0004493a) aid_size_cell_colour_4_pane

0x5d96,	// (0x00042bff) title_pane_stacon_g1_ParamLimits

0x5d96,	// (0x00042bff) title_pane_stacon_g1

0xa07c,	// (0x00046ee5) popup_note_wait_window_g3_ParamLimits

0xa07c,	// (0x00046ee5) popup_note_wait_window_g3

0xa0f3,	// (0x00046f5c) popup_note_wait_window_t5_ParamLimits

0xa0f3,	// (0x00046f5c) popup_note_wait_window_t5

0x2c26,	// (0x0003fa8f) main_feb_china_hwr_fs_writing_pane

0x8f00,	// (0x00045d69) popup_feb_china_hwr_fs_window_ParamLimits

0x8f00,	// (0x00045d69) popup_feb_china_hwr_fs_window

0x63fc,	// (0x00043265) aid_size_cell_hwr_fs_ParamLimits

0x63fc,	// (0x00043265) aid_size_cell_hwr_fs

0x9aa2,	// (0x0004690b) bg_popup_sub_pane_cp3_ParamLimits

0x9aa2,	// (0x0004690b) bg_popup_sub_pane_cp3

0x6411,	// (0x0004327a) grid_hwr_fs_pane_ParamLimits

0x6411,	// (0x0004327a) grid_hwr_fs_pane

0x6429,	// (0x00043292) linegrid_hwr_fs_pane_ParamLimits

0x6429,	// (0x00043292) linegrid_hwr_fs_pane

0x6439,	// (0x000432a2) cell_hwr_fs_pane_ParamLimits

0x6439,	// (0x000432a2) cell_hwr_fs_pane

0x9aae,	// (0x00046917) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aae,	// (0x00046917) linegrid_hwr_fs_pane_g1

0x9aba,	// (0x00046923) linegrid_hwr_fs_pane_g2_ParamLimits

0x9aba,	// (0x00046923) linegrid_hwr_fs_pane_g2

0x9acc,	// (0x00046935) linegrid_hwr_fs_pane_g3_ParamLimits

0x9acc,	// (0x00046935) linegrid_hwr_fs_pane_g3

0x645d,	// (0x000432c6) linegrid_hwr_fs_pane_g4_ParamLimits

0x645d,	// (0x000432c6) linegrid_hwr_fs_pane_g4

0x647b,	// (0x000432e4) linegrid_hwr_fs_pane_g5_ParamLimits

0x647b,	// (0x000432e4) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004c67b) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004c67b) linegrid_hwr_fs_pane_g

0x9ad8,	// (0x00046941) cell_hwr_fs_pane_g1_ParamLimits

0x9ad8,	// (0x00046941) cell_hwr_fs_pane_g1

0x9825,	// (0x0004668e) cell_hwr_fs_pane_g2_ParamLimits

0x9825,	// (0x0004668e) cell_hwr_fs_pane_g2

0x9aee,	// (0x00046957) cell_hwr_fs_pane_g3_ParamLimits

0x9aee,	// (0x00046957) cell_hwr_fs_pane_g3

0x9afb,	// (0x00046964) cell_hwr_fs_pane_g4_ParamLimits

0x9afb,	// (0x00046964) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004c686) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004c686) cell_hwr_fs_pane_g

0x6491,	// (0x000432fa) cell_hwr_fs_pane_t1

0x2c26,	// (0x0003fa8f) grid_highlight_pane_cp6

0x2c26,	// (0x0003fa8f) main_idle_act2_pane

0x8001,	// (0x00044e6a) aid_inside_area_popup_secondary

0xa72c,	// (0x00047595) aid_inside_area_window_primary_ParamLimits

0xa72c,	// (0x00047595) aid_inside_area_window_primary

0xb32e,	// (0x00048197) ai2_news_ticker_pane

0xb336,	// (0x0004819f) aid_size_cell_ai1_link_ParamLimits

0xb336,	// (0x0004819f) aid_size_cell_ai1_link

0xb350,	// (0x000481b9) popup_ai2_data_window_ParamLimits

0xb350,	// (0x000481b9) popup_ai2_data_window

0xb36e,	// (0x000481d7) popup_ai2_link_window_ParamLimits

0xb36e,	// (0x000481d7) popup_ai2_link_window

0x9aa2,	// (0x0004690b) bg_popup_sub_pane_cp4_ParamLimits

0x9aa2,	// (0x0004690b) bg_popup_sub_pane_cp4

0xb384,	// (0x000481ed) grid_ai2_link_pane_ParamLimits

0xb384,	// (0x000481ed) grid_ai2_link_pane

0xb39b,	// (0x00048204) popup_ai2_link_window_g1_ParamLimits

0xb39b,	// (0x00048204) popup_ai2_link_window_g1

0xb3a7,	// (0x00048210) popup_ai2_link_window_g2_ParamLimits

0xb3a7,	// (0x00048210) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004c852) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004c852) popup_ai2_link_window_g

0xb3b8,	// (0x00048221) ai2_mp_button_pane

0xb3c0,	// (0x00048229) ai2_mp_volume_pane

0x9c6b,	// (0x00046ad4) bg_popup_sub_pane_cp5_ParamLimits

0x9c6b,	// (0x00046ad4) bg_popup_sub_pane_cp5

0xb3c8,	// (0x00048231) heading_ai2_gene_pane_ParamLimits

0xb3c8,	// (0x00048231) heading_ai2_gene_pane

0xb3d4,	// (0x0004823d) list_ai2_gene_pane_ParamLimits

0xb3d4,	// (0x0004823d) list_ai2_gene_pane

0xb41c,	// (0x00048285) cell_ai2_link_pane_ParamLimits

0xb41c,	// (0x00048285) cell_ai2_link_pane

0xb432,	// (0x0004829b) cell_ai2_link_pane_g1

0x2c26,	// (0x0003fa8f) grid_highlight_pane_cp7

0x6789,	// (0x000435f2) ai2_mp_volume_pane_g1

0xb505,	// (0x0004836e) ai2_mp_volume_pane_g2

0xb47a,	// (0x000482e3) list_ai2_gene_pane_t1

0xb50d,	// (0x00048376) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004c86b) ai2_mp_volume_pane_g

0x6791,	// (0x000435fa) volume_small_pane_cp3

0xb515,	// (0x0004837e) aid_size_cell_ai2_button

0xb51d,	// (0x00048386) grid_ai2_button_pane

0xb526,	// (0x0004838f) cell_ai2_button_pane_ParamLimits

0xb526,	// (0x0004838f) cell_ai2_button_pane

0x2c1c,	// (0x0003fa85) cell_ai2_button_pane_g1

0x2c26,	// (0x0003fa8f) grid_highlight_pane_cp8

0xb4c5,	// (0x0004832e) ai2_gene_pane_t1_ParamLimits

0xb4c5,	// (0x0004832e) ai2_gene_pane_t1

0x8e00,	// (0x00045c69) aid_height_parent_landscape

0xadd8,	// (0x00047c41) aid_height_set_list

0xade9,	// (0x00047c52) aid_size_parent

0xb14f,	// (0x00047fb8) aid_size_cell_graphic_pane_ParamLimits

0xb3e4,	// (0x0004824d) popup_ai2_data_window_g1_ParamLimits

0xb3e4,	// (0x0004824d) popup_ai2_data_window_g1

0xb3f0,	// (0x00048259) ai2_news_ticker_pane_g1

0xb3f8,	// (0x00048261) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004c857) ai2_news_ticker_pane_g

0xb400,	// (0x00048269) ai2_news_ticker_pane_t1

0xb40e,	// (0x00048277) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004c85c) ai2_news_ticker_pane_t

0xb43b,	// (0x000482a4) heading_ai2_gene_pane_g1

0xb443,	// (0x000482ac) heading_ai2_gene_pane_t1_ParamLimits

0xb443,	// (0x000482ac) heading_ai2_gene_pane_t1

0xb458,	// (0x000482c1) list_highlight_pane_cp6

0xb460,	// (0x000482c9) ai2_gene_pane_ParamLimits

0xb460,	// (0x000482c9) ai2_gene_pane

0xb488,	// (0x000482f1) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004c861) list_ai2_gene_pane_t

0xb496,	// (0x000482ff) list_highlight_pane_cp8_ParamLimits

0xb496,	// (0x000482ff) list_highlight_pane_cp8

0xb4a7,	// (0x00048310) ai2_gene_pane_g1_ParamLimits

0xb4a7,	// (0x00048310) ai2_gene_pane_g1

0xb4b9,	// (0x00048322) ai2_gene_pane_g2_ParamLimits

0xb4b9,	// (0x00048322) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004c866) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004c866) ai2_gene_pane_g

0x7e22,	// (0x00044c8b) scroll_pane_cp12

0x631d,	// (0x00043186) control_pane_t3_ParamLimits

0x631d,	// (0x00043186) control_pane_t3

0x8d7d,	// (0x00045be6) status_small_pane_g8_ParamLimits

0x8d7d,	// (0x00045be6) status_small_pane_g8

0x8ffe,	// (0x00045e67) popup_find_window_ParamLimits

0x9229,	// (0x00046092) popup_note_image_window_ParamLimits

0x52c2,	// (0x0004212b) list_double2_graphic_pane_vc_g1_ParamLimits

0x52c2,	// (0x0004212b) list_double2_graphic_pane_vc_g1

0x8a67,	// (0x000458d0) list_double2_graphic_pane_vc_g2_ParamLimits

0x8a67,	// (0x000458d0) list_double2_graphic_pane_vc_g2

0x638e,	// (0x000431f7) list_double2_graphic_pane_vc_g3_ParamLimits

0x638e,	// (0x000431f7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004c644) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004c644) list_double2_graphic_pane_vc_g

0x52ce,	// (0x00042137) list_double2_graphic_pane_vc_t1_ParamLimits

0x52ce,	// (0x00042137) list_double2_graphic_pane_vc_t1

0x8a67,	// (0x000458d0) list_single_heading_pane_vc_g1_ParamLimits

0x8a67,	// (0x000458d0) list_single_heading_pane_vc_g1

0x638e,	// (0x000431f7) list_single_heading_pane_vc_g2_ParamLimits

0x638e,	// (0x000431f7) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c665) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c665) list_single_heading_pane_vc_g

0x52e4,	// (0x0004214d) list_single_heading_pane_vc_t1_ParamLimits

0x52e4,	// (0x0004214d) list_single_heading_pane_vc_t1

0x52fa,	// (0x00042163) list_single_heading_pane_vc_t2_ParamLimits

0x52fa,	// (0x00042163) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004c66a) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004c66a) list_single_heading_pane_vc_t

0x99f8,	// (0x00046861) list_setting_number_pane_vc_g1_ParamLimits

0x99f8,	// (0x00046861) list_setting_number_pane_vc_g1

0x9a04,	// (0x0004686d) list_setting_number_pane_vc_g2_ParamLimits

0x9a04,	// (0x0004686d) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004c66f) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004c66f) list_setting_number_pane_vc_g

0x9a10,	// (0x00046879) list_setting_number_pane_vc_t1_ParamLimits

0x9a10,	// (0x00046879) list_setting_number_pane_vc_t1

0x9a24,	// (0x0004688d) list_setting_number_pane_vc_t2_ParamLimits

0x9a24,	// (0x0004688d) list_setting_number_pane_vc_t2

0x9a40,	// (0x000468a9) list_setting_number_pane_vc_t3_ParamLimits

0x9a40,	// (0x000468a9) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004c674) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004c674) list_setting_number_pane_vc_t

0x9a68,	// (0x000468d1) set_value_pane_vc_ParamLimits

0x9a68,	// (0x000468d1) set_value_pane_vc

0xafe1,	// (0x00047e4a) list_double2_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double2_graphic_pane_vc

0xafe1,	// (0x00047e4a) list_double2_large_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double2_large_graphic_pane_vc

0xafe1,	// (0x00047e4a) list_double2_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double2_pane_vc

0xafe1,	// (0x00047e4a) list_double_graphic_heading_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_graphic_heading_pane_vc

0xafe1,	// (0x00047e4a) list_double_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_graphic_pane_vc

0xafe1,	// (0x00047e4a) list_double_heading_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_heading_pane_vc

0xafe1,	// (0x00047e4a) list_double_large_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_large_graphic_pane_vc

0xafe1,	// (0x00047e4a) list_double_number_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_number_pane_vc

0xafe1,	// (0x00047e4a) list_double_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_pane_vc

0xafe1,	// (0x00047e4a) list_double_time_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_double_time_pane_vc

0xafe1,	// (0x00047e4a) list_setting_number_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_setting_number_pane_vc

0xafe1,	// (0x00047e4a) list_setting_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_setting_pane_vc

0xafe1,	// (0x00047e4a) list_single_graphic_heading_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_single_graphic_heading_pane_vc

0xafe1,	// (0x00047e4a) list_single_heading_pane_vc_ParamLimits

0xafe1,	// (0x00047e4a) list_single_heading_pane_vc

0xaff5,	// (0x00047e5e) list_single_number_heading_pane_vc_ParamLimits

0xaff5,	// (0x00047e5e) list_single_number_heading_pane_vc

0x52c2,	// (0x0004212b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x52c2,	// (0x0004212b) list_double_graphic_heading_pane_vc_g1

0x679a,	// (0x00043603) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x679a,	// (0x00043603) list_double_graphic_heading_pane_vc_g2

0x67a6,	// (0x0004360f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x67a6,	// (0x0004360f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa09,	// (0x0004c872) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0004c872) list_double_graphic_heading_pane_vc_g

0x53b0,	// (0x00042219) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53b0,	// (0x00042219) list_double_graphic_heading_pane_vc_t1

0x52e4,	// (0x0004214d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52e4,	// (0x0004214d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0004c879) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0004c879) list_double_graphic_heading_pane_vc_t

0x99f8,	// (0x00046861) list_setting_pane_vc_g1_ParamLimits

0x99f8,	// (0x00046861) list_setting_pane_vc_g1

0x9a04,	// (0x0004686d) list_setting_pane_vc_g2_ParamLimits

0x9a04,	// (0x0004686d) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004c66f) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004c66f) list_setting_pane_vc_g

0xb7a4,	// (0x0004860d) list_setting_pane_vc_t1_ParamLimits

0xb7a4,	// (0x0004860d) list_setting_pane_vc_t1

0xb7b8,	// (0x00048621) list_setting_pane_vc_t2_ParamLimits

0xb7b8,	// (0x00048621) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0004c8a7) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0004c8a7) list_setting_pane_vc_t

0x9a68,	// (0x000468d1) set_value_pane_cp_vc_ParamLimits

0x9a68,	// (0x000468d1) set_value_pane_cp_vc

0x8a67,	// (0x000458d0) list_single_number_heading_pane_vc_g1_ParamLimits

0x8a67,	// (0x000458d0) list_single_number_heading_pane_vc_g1

0x638e,	// (0x000431f7) list_single_number_heading_pane_vc_g2_ParamLimits

0x638e,	// (0x000431f7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c665) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c665) list_single_number_heading_pane_vc_g

0x52e4,	// (0x0004214d) list_single_number_heading_pane_vc_t1_ParamLimits

0x52e4,	// (0x0004214d) list_single_number_heading_pane_vc_t1

0x53c4,	// (0x0004222d) list_single_number_heading_pane_vc_t2_ParamLimits

0x53c4,	// (0x0004222d) list_single_number_heading_pane_vc_t2

0x53d8,	// (0x00042241) list_single_number_heading_pane_vc_t3_ParamLimits

0x53d8,	// (0x00042241) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0004c8ac) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004c8ac) list_single_number_heading_pane_vc_t

0x52c2,	// (0x0004212b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x52c2,	// (0x0004212b) list_single_graphic_heading_pane_vc_g1

0x8a67,	// (0x000458d0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8a67,	// (0x000458d0) list_single_graphic_heading_pane_vc_g4

0x638e,	// (0x000431f7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x638e,	// (0x000431f7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004c644) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004c644) list_single_graphic_heading_pane_vc_g

0x52e4,	// (0x0004214d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x52e4,	// (0x0004214d) list_single_graphic_heading_pane_vc_t1

0x53ea,	// (0x00042253) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53ea,	// (0x00042253) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0004c8b3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0004c8b3) list_single_graphic_heading_pane_vc_t

0x8a67,	// (0x000458d0) list_double2_pane_vc_g1_ParamLimits

0x8a67,	// (0x000458d0) list_double2_pane_vc_g1

0x638e,	// (0x000431f7) list_double2_pane_vc_g2_ParamLimits

0x638e,	// (0x000431f7) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c665) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c665) list_double2_pane_vc_g

0x53fe,	// (0x00042267) list_double2_pane_vc_t1_ParamLimits

0x53fe,	// (0x00042267) list_double2_pane_vc_t1

0x67b2,	// (0x0004361b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x67b2,	// (0x0004361b) list_double2_large_graphic_pane_vc_g1

0x8a67,	// (0x000458d0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8a67,	// (0x000458d0) list_double2_large_graphic_pane_vc_g2

0x638e,	// (0x000431f7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x638e,	// (0x000431f7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x0004c8b8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0004c8b8) list_double2_large_graphic_pane_vc_g

0x5414,	// (0x0004227d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5414,	// (0x0004227d) list_double2_large_graphic_pane_vc_t1

0x67be,	// (0x00043627) list_double_time_pane_vc_g1_ParamLimits

0x67be,	// (0x00043627) list_double_time_pane_vc_g1

0x67ca,	// (0x00043633) list_double_time_pane_vc_g2_ParamLimits

0x67ca,	// (0x00043633) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0004c8bf) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0004c8bf) list_double_time_pane_vc_g

0x542a,	// (0x00042293) list_double_time_pane_vc_t1_ParamLimits

0x542a,	// (0x00042293) list_double_time_pane_vc_t1

0x5443,	// (0x000422ac) list_double_time_pane_vc_t2_ParamLimits

0x5443,	// (0x000422ac) list_double_time_pane_vc_t2

0x5483,	// (0x000422ec) list_double_time_pane_vc_t3_ParamLimits

0x5483,	// (0x000422ec) list_double_time_pane_vc_t3

0x549b,	// (0x00042304) list_double_time_pane_vc_t4_ParamLimits

0x549b,	// (0x00042304) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0004c8c4) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004c8c4) list_double_time_pane_vc_t

0x8a67,	// (0x000458d0) list_double_pane_vc_g1_ParamLimits

0x8a67,	// (0x000458d0) list_double_pane_vc_g1

0x638e,	// (0x000431f7) list_double_pane_vc_g2_ParamLimits

0x638e,	// (0x000431f7) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c665) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c665) list_double_pane_vc_g

0x54af,	// (0x00042318) list_double_pane_vc_t1_ParamLimits

0x54af,	// (0x00042318) list_double_pane_vc_t1

0x54c1,	// (0x0004232a) list_double_pane_vc_t2_ParamLimits

0x54c1,	// (0x0004232a) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0004c8cd) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0004c8cd) list_double_pane_vc_t

0x8a67,	// (0x000458d0) list_double_number_pane_vc_g1_ParamLimits

0x8a67,	// (0x000458d0) list_double_number_pane_vc_g1

0x638e,	// (0x000431f7) list_double_number_pane_vc_g2_ParamLimits

0x638e,	// (0x000431f7) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c665) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c665) list_double_number_pane_vc_g

0x54d9,	// (0x00042342) list_double_number_pane_vc_t1_ParamLimits

0x54d9,	// (0x00042342) list_double_number_pane_vc_t1

0x54ed,	// (0x00042356) list_double_number_pane_vc_t2_ParamLimits

0x54ed,	// (0x00042356) list_double_number_pane_vc_t2

0x54c1,	// (0x0004232a) list_double_number_pane_vc_t3_ParamLimits

0x54c1,	// (0x0004232a) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0004c8d2) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0004c8d2) list_double_number_pane_vc_t

0x67d6,	// (0x0004363f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x67d6,	// (0x0004363f) list_double_large_graphic_pane_vc_g1

0x67e2,	// (0x0004364b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x67e2,	// (0x0004364b) list_double_large_graphic_pane_vc_g2

0x638e,	// (0x000431f7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x638e,	// (0x000431f7) list_double_large_graphic_pane_vc_g3

0x54ff,	// (0x00042368) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54ff,	// (0x00042368) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0004c8d9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0004c8d9) list_double_large_graphic_pane_vc_g

0x550b,	// (0x00042374) list_double_large_graphic_pane_vc_t1_ParamLimits

0x550b,	// (0x00042374) list_double_large_graphic_pane_vc_t1

0x551d,	// (0x00042386) list_double_large_graphic_pane_vc_t2_ParamLimits

0x551d,	// (0x00042386) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0004c8e2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0004c8e2) list_double_large_graphic_pane_vc_t

0x679a,	// (0x00043603) list_double_heading_pane_vc_g1_ParamLimits

0x679a,	// (0x00043603) list_double_heading_pane_vc_g1

0x67a6,	// (0x0004360f) list_double_heading_pane_vc_g2_ParamLimits

0x67a6,	// (0x0004360f) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0004c8e7) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004c8e7) list_double_heading_pane_vc_g

0x5536,	// (0x0004239f) list_double_heading_pane_vc_t1_ParamLimits

0x5536,	// (0x0004239f) list_double_heading_pane_vc_t1

0x52e4,	// (0x0004214d) list_double_heading_pane_vc_t2_ParamLimits

0x52e4,	// (0x0004214d) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0004c8ec) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0004c8ec) list_double_heading_pane_vc_t

0x52c2,	// (0x0004212b) list_double_graphic_pane_vc_g1_ParamLimits

0x52c2,	// (0x0004212b) list_double_graphic_pane_vc_g1

0x67f1,	// (0x0004365a) list_double_graphic_pane_vc_g2_ParamLimits

0x67f1,	// (0x0004365a) list_double_graphic_pane_vc_g2

0x6800,	// (0x00043669) list_double_graphic_pane_vc_g3_ParamLimits

0x6800,	// (0x00043669) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0004c8f1) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0004c8f1) list_double_graphic_pane_vc_g

0x554a,	// (0x000423b3) list_double_graphic_pane_vc_t1_ParamLimits

0x554a,	// (0x000423b3) list_double_graphic_pane_vc_t1

0x54c1,	// (0x0004232a) list_double_graphic_pane_vc_t2_ParamLimits

0x54c1,	// (0x0004232a) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0004c8f8) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0004c8f8) list_double_graphic_pane_vc_t

0x5842,	// (0x000426ab) aid_size_cell_fastswap

0x584a,	// (0x000426b3) aid_size_cell_touch_ParamLimits

0x584a,	// (0x000426b3) aid_size_cell_touch

0x5aab,	// (0x00042914) popup_fast_swap_wide_window_ParamLimits

0x5aab,	// (0x00042914) popup_fast_swap_wide_window

0x5bc1,	// (0x00042a2a) touch_pane_ParamLimits

0x5bc1,	// (0x00042a2a) touch_pane

0x7e84,	// (0x00044ced) button_value_adjust_pane_cp2

0x4f8c,	// (0x00041df5) button_value_adjust_pane_cp4

0x4fb4,	// (0x00041e1d) form_field_data_pane_cp2

0x4fd9,	// (0x00041e42) form_field_data_wide_pane_cp2

0x831d,	// (0x00045186) bg_scroll_pane_ParamLimits

0x5efb,	// (0x00042d64) scroll_handle_pane_ParamLimits

0x5f0f,	// (0x00042d78) scroll_sc2_down_pane_ParamLimits

0x5f0f,	// (0x00042d78) scroll_sc2_down_pane

0x834e,	// (0x000451b7) scroll_sc2_up_pane_ParamLimits

0x834e,	// (0x000451b7) scroll_sc2_up_pane

0xbc34,	// (0x00048a9d) grid_wheel_folder_pane_g1_ParamLimits

0xbc34,	// (0x00048a9d) grid_wheel_folder_pane_g1

0x60f7,	// (0x00042f60) clock_nsta_pane_cp2_ParamLimits

0x60f7,	// (0x00042f60) clock_nsta_pane_cp2

0x8afe,	// (0x00045967) listscroll_midp_pane_ParamLimits

0x8b0a,	// (0x00045973) midp_canvas_pane

0x8df8,	// (0x00045c61) nsta_clock_indic_pane

0x8e46,	// (0x00045caf) listscroll_form_pane_vc

0x8e62,	// (0x00045ccb) listscroll_set_pane_vc_ParamLimits

0x8e62,	// (0x00045ccb) listscroll_set_pane_vc

0x957a,	// (0x000463e3) clock_nsta_pane

0x95f7,	// (0x00046460) indicator_nsta_pane

0x98ee,	// (0x00046757) bg_popup_sub_pane_cp2_ParamLimits

0x9902,	// (0x0004676b) find_pane_cp2_ParamLimits

0x9902,	// (0x0004676b) find_pane_cp2

0x9918,	// (0x00046781) grid_toobar_pane_ParamLimits

0x9a76,	// (0x000468df) list_form_gen_pane_vc_ParamLimits

0x9a76,	// (0x000468df) list_form_gen_pane_vc

0x9a8c,	// (0x000468f5) scroll_pane_cp8_vc_ParamLimits

0x9a8c,	// (0x000468f5) scroll_pane_cp8_vc

0x9b08,	// (0x00046971) data_form_wide_pane_vc_ParamLimits

0x9b08,	// (0x00046971) data_form_wide_pane_vc

0x9b14,	// (0x0004697d) form_field_data_wide_pane_vc_g1

0x9b1c,	// (0x00046985) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b1c,	// (0x00046985) form_field_data_wide_pane_vc_t1

0x7e98,	// (0x00044d01) input_focus_pane_cp6_vc_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_cp6_vc

0x9df6,	// (0x00046c5f) list_midp_pane_ParamLimits

0x9e02,	// (0x00046c6b) scroll_pane_cp16_ParamLimits

0x9e02,	// (0x00046c6b) scroll_pane_cp16

0x9e50,	// (0x00046cb9) button_value_adjust_pane_ParamLimits

0x9e50,	// (0x00046cb9) button_value_adjust_pane

0xadfb,	// (0x00047c64) button_value_adjust_pane_cp6_ParamLimits

0xadfb,	// (0x00047c64) button_value_adjust_pane_cp6

0xaf55,	// (0x00047dbe) settings_code_pane_cp_ParamLimits

0xaf55,	// (0x00047dbe) settings_code_pane_cp

0x2c1c,	// (0x0003fa85) cell_touch_pane_g1

0x2c1c,	// (0x0003fa85) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0004c58d) cell_touch_pane_g

0xb538,	// (0x000483a1) cell_touch_pane_cp_ParamLimits

0xb538,	// (0x000483a1) cell_touch_pane_cp

0xb548,	// (0x000483b1) cell_touch_pane_ParamLimits

0xb548,	// (0x000483b1) cell_touch_pane

0x2c1c,	// (0x0003fa85) scroll_sc2_down_pane_g1

0x2c1c,	// (0x0003fa85) scroll_sc2_up_pane_g1

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp4_vc

0xb559,	// (0x000483c2) list_set_graphic_pane_vc_g1_ParamLimits

0xb559,	// (0x000483c2) list_set_graphic_pane_vc_g1

0xb565,	// (0x000483ce) list_set_graphic_pane_vc_g2_ParamLimits

0xb565,	// (0x000483ce) list_set_graphic_pane_vc_g2

0x0001,

0xfa15,	// (0x0004c87e) list_set_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0004c87e) list_set_graphic_pane_vc_g

0xb571,	// (0x000483da) text_primary_small_cp13_vc_ParamLimits

0xb571,	// (0x000483da) text_primary_small_cp13_vc

0xb589,	// (0x000483f2) list_set_graphic_pane_vc_ParamLimits

0xb589,	// (0x000483f2) list_set_graphic_pane_vc

0x2c26,	// (0x0003fa8f) input_focus_pane_cp2_vc

0x2c1c,	// (0x0003fa85) setting_code_pane_vc_g1

0xb59d,	// (0x00048406) setting_code_pane_vc_t1

0xb5ab,	// (0x00048414) set_text_pane_vc_t1_ParamLimits

0xb5ab,	// (0x00048414) set_text_pane_vc_t1

0x2c26,	// (0x0003fa8f) input_focus_pane_cp1_vc

0xb5c9,	// (0x00048432) list_set_text_pane_vc

0x2c1c,	// (0x0003fa85) setting_text_pane_vc_g1

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp2_vc

0xb5d3,	// (0x0004843c) setting_slider_graphic_pane_vc_g1

0xb5db,	// (0x00048444) setting_slider_graphic_pane_vc_t1

0xb5e9,	// (0x00048452) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1a,	// (0x0004c883) setting_slider_graphic_pane_vc_t

0xb5f7,	// (0x00048460) slider_set_pane_cp_vc

0xb5ff,	// (0x00048468) slider_set_pane_vc_g1

0xb608,	// (0x00048471) slider_set_pane_vc_g2

0x0006,

0xfa1f,	// (0x0004c888) slider_set_pane_vc_g

0x7eff,	// (0x00044d68) set_opt_bg_pane_g1_copy1

0x7f07,	// (0x00044d70) set_opt_bg_pane_g2_copy1

0xb634,	// (0x0004849d) set_opt_bg_pane_g3_copy1

0x7f17,	// (0x00044d80) set_opt_bg_pane_g4_copy1

0x7f1f,	// (0x00044d88) set_opt_bg_pane_g5_copy1

0x7f27,	// (0x00044d90) set_opt_bg_pane_g6_copy1

0xb63e,	// (0x000484a7) set_opt_bg_pane_g7_copy1

0xb648,	// (0x000484b1) set_opt_bg_pane_g8_copy1

0xb652,	// (0x000484bb) set_opt_bg_pane_g9_copy1

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp_vc

0xb65c,	// (0x000484c5) setting_slider_pane_vc_t1

0xb5db,	// (0x00048444) setting_slider_pane_vc_t2

0xb5e9,	// (0x00048452) setting_slider_pane_vc_t3

0x0002,

0xfa2e,	// (0x0004c897) setting_slider_pane_vc_t

0xb5f7,	// (0x00048460) slider_set_pane_vc

0x649f,	// (0x00043308) volume_set_pane_vc_g1

0x64a8,	// (0x00043311) volume_set_pane_vc_g2

0x64b1,	// (0x0004331a) volume_set_pane_vc_g3

0x64ba,	// (0x00043323) volume_set_pane_vc_g4

0x64c3,	// (0x0004332c) volume_set_pane_vc_g5

0x64cc,	// (0x00043335) volume_set_pane_vc_g6

0x64d5,	// (0x0004333e) volume_set_pane_vc_g7

0x64de,	// (0x00043347) volume_set_pane_vc_g8

0x64e7,	// (0x00043350) volume_set_pane_vc_g9

0x64f0,	// (0x00043359) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0004c735) volume_set_pane_vc_g

0xb66b,	// (0x000484d4) volume_set_pane_vc

0xb673,	// (0x000484dc) button_value_adjust_pane_cp1_vc

0xb67d,	// (0x000484e6) list_highlight_pane_cp2_vc

0xb686,	// (0x000484ef) list_set_pane_vc_ParamLimits

0xb686,	// (0x000484ef) list_set_pane_vc

0xb732,	// (0x0004859b) main_pane_set_vc_t1_ParamLimits

0xb732,	// (0x0004859b) main_pane_set_vc_t1

0xb747,	// (0x000485b0) main_pane_set_vc_t2_ParamLimits

0xb747,	// (0x000485b0) main_pane_set_vc_t2

0xb759,	// (0x000485c2) main_pane_set_vc_t3_ParamLimits

0xb759,	// (0x000485c2) main_pane_set_vc_t3

0xb76d,	// (0x000485d6) main_pane_set_vc_t4_ParamLimits

0xb76d,	// (0x000485d6) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0004c89e) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0004c89e) main_pane_set_vc_t

0xb781,	// (0x000485ea) setting_code_pane_vc_ParamLimits

0xb781,	// (0x000485ea) setting_code_pane_vc

0xb792,	// (0x000485fb) setting_slider_graphic_pane_vc

0xb792,	// (0x000485fb) setting_slider_pane_vc

0xb792,	// (0x000485fb) setting_text_pane_vc

0xb792,	// (0x000485fb) setting_volume_pane_vc

0xb79c,	// (0x00048605) scroll_pane_cp121_vc

0x7e72,	// (0x00044cdb) set_content_pane_vc

0xb7da,	// (0x00048643) button_value_adjust_pane_g1

0xb7e3,	// (0x0004864c) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0004c8fd) button_value_adjust_pane_g

0xb7ec,	// (0x00048655) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb7ec,	// (0x00048655) form_field_slider_wide_pane_vc_t1

0xb800,	// (0x00048669) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb800,	// (0x00048669) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa99,	// (0x0004c902) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004c902) form_field_slider_wide_pane_vc_t

0x7881,	// (0x000446ea) input_focus_pane_cp10_vc_ParamLimits

0x7881,	// (0x000446ea) input_focus_pane_cp10_vc

0xb812,	// (0x0004867b) slider_cont_pane_cp1_vc_ParamLimits

0xb812,	// (0x0004867b) slider_cont_pane_cp1_vc

0xb5ff,	// (0x00048468) slider_form_pane_g1_cp2

0xb608,	// (0x00048471) slider_form_pane_g2_cp2

0xb82b,	// (0x00048694) form_field_slider_pane_vc_t3

0xb839,	// (0x000486a2) form_field_slider_pane_vc_t4

0xb847,	// (0x000486b0) slider_form_pane_vc_ParamLimits

0xb847,	// (0x000486b0) slider_form_pane_vc

0xb854,	// (0x000486bd) form_field_slider_pane_vc_t1_ParamLimits

0xb854,	// (0x000486bd) form_field_slider_pane_vc_t1

0xb800,	// (0x00048669) form_field_slider_pane_vc_t2_ParamLimits

0xb800,	// (0x00048669) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0004c912) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0004c912) form_field_slider_pane_vc_t

0x7881,	// (0x000446ea) input_focus_pane_cp9_vc_ParamLimits

0x7881,	// (0x000446ea) input_focus_pane_cp9_vc

0xb870,	// (0x000486d9) slider_cont_pane_vc_ParamLimits

0xb870,	// (0x000486d9) slider_cont_pane_vc

0xb882,	// (0x000486eb) list_form_graphic_pane_cp_vc_ParamLimits

0xb882,	// (0x000486eb) list_form_graphic_pane_cp_vc

0x9b14,	// (0x0004697d) form_field_popup_wide_pane_vc_g1

0xb897,	// (0x00048700) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb897,	// (0x00048700) form_field_popup_wide_pane_vc_t1

0x7e98,	// (0x00044d01) input_focus_pane_cp8_vc_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_cp8_vc

0xb8ae,	// (0x00048717) list_form_wide_pane_vc_ParamLimits

0xb8ae,	// (0x00048717) list_form_wide_pane_vc

0xb8ba,	// (0x00048723) list_form_graphic_pane_vc_g1

0xb8c2,	// (0x0004872b) list_form_graphic_pane_vc_t1_ParamLimits

0xb8c2,	// (0x0004872b) list_form_graphic_pane_vc_t1

0x7605,	// (0x0004446e) list_highlight_pane_cp5_vc_ParamLimits

0x7605,	// (0x0004446e) list_highlight_pane_cp5_vc

0xb8de,	// (0x00048747) list_form_graphic_pane_vc_ParamLimits

0xb8de,	// (0x00048747) list_form_graphic_pane_vc

0x9b14,	// (0x0004697d) form_field_popup_pane_vc_g1

0xb8f4,	// (0x0004875d) form_field_popup_pane_vc_t1_ParamLimits

0xb8f4,	// (0x0004875d) form_field_popup_pane_vc_t1

0x7e98,	// (0x00044d01) input_focus_pane_cp7_vc_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_cp7_vc

0xb90b,	// (0x00048774) list_form_pane_vc_ParamLimits

0xb90b,	// (0x00048774) list_form_pane_vc

0xb917,	// (0x00048780) data_form_pane_vc_t1_ParamLimits

0xb917,	// (0x00048780) data_form_pane_vc_t1

0x7eff,	// (0x00044d68) input_focus_pane_vc_g1

0x7f07,	// (0x00044d70) input_focus_pane_vc_g2

0x7f0f,	// (0x00044d78) input_focus_pane_vc_g3

0x7f17,	// (0x00044d80) input_focus_pane_vc_g4

0x7f1f,	// (0x00044d88) input_focus_pane_vc_g5

0x7f27,	// (0x00044d90) input_focus_pane_vc_g6

0x7f2f,	// (0x00044d98) input_focus_pane_vc_g7

0x7f37,	// (0x00044da0) input_focus_pane_vc_g8

0x7f3f,	// (0x00044da8) input_focus_pane_vc_g9

0x2c1c,	// (0x0003fa85) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0004c516) input_focus_pane_vc_g

0x9b08,	// (0x00046971) data_form_pane_vc_ParamLimits

0x9b08,	// (0x00046971) data_form_pane_vc

0x9b14,	// (0x0004697d) form_field_data_pane_vc_g1

0xb934,	// (0x0004879d) form_field_data_pane_vc_t1_ParamLimits

0xb934,	// (0x0004879d) form_field_data_pane_vc_t1

0x7e98,	// (0x00044d01) input_focus_pane_vc_ParamLimits

0x7e98,	// (0x00044d01) input_focus_pane_vc

0xb94e,	// (0x000487b7) button_value_adjust_pane_cp3_vc

0xb956,	// (0x000487bf) button_value_adjust_pane_cp5_vc

0xb95e,	// (0x000487c7) form_field_data_pane_vc_ParamLimits

0xb95e,	// (0x000487c7) form_field_data_pane_vc

0xb979,	// (0x000487e2) form_field_data_pane_vc_cp2

0xb981,	// (0x000487ea) form_field_data_wide_pane_vc_ParamLimits

0xb981,	// (0x000487ea) form_field_data_wide_pane_vc

0xb99b,	// (0x00048804) form_field_data_wide_pane_vc_cp2

0xb9a3,	// (0x0004880c) form_field_popup_pane_vc_ParamLimits

0xb9a3,	// (0x0004880c) form_field_popup_pane_vc

0xb9be,	// (0x00048827) form_field_popup_wide_pane_vc_ParamLimits

0xb9be,	// (0x00048827) form_field_popup_wide_pane_vc

0xb9d8,	// (0x00048841) form_field_slider_pane_vc_ParamLimits

0xb9d8,	// (0x00048841) form_field_slider_pane_vc

0xb9eb,	// (0x00048854) form_field_slider_wide_pane_vc_ParamLimits

0xb9eb,	// (0x00048854) form_field_slider_wide_pane_vc

0xb9fe,	// (0x00048867) grid_touch_1_pane_ParamLimits

0xb9fe,	// (0x00048867) grid_touch_1_pane

0xba0a,	// (0x00048873) grid_touch_2_pane_ParamLimits

0xba0a,	// (0x00048873) grid_touch_2_pane

0x8dc3,	// (0x00045c2c) touch_pane_g1_ParamLimits

0x8dc3,	// (0x00045c2c) touch_pane_g1

0xba24,	// (0x0004888d) cell_app_pane_cp_wide_ParamLimits

0xba24,	// (0x0004888d) cell_app_pane_cp_wide

0xba35,	// (0x0004889e) grid_popup_fast_wide_pane_ParamLimits

0xba35,	// (0x0004889e) grid_popup_fast_wide_pane

0xba49,	// (0x000488b2) scroll_pane_cp19_ParamLimits

0xba49,	// (0x000488b2) scroll_pane_cp19

0x2c26,	// (0x0003fa8f) bg_popup_window_pane_cp20

0xba5d,	// (0x000488c6) listscroll_popup_fast_wide_pane

0x7605,	// (0x0004446e) grid_indicator_nsta_pane

0xba65,	// (0x000488ce) clock_nsta_pane_g1

0xba6e,	// (0x000488d7) clock_nsta_pane_t1

0xba8a,	// (0x000488f3) cell_indicator_nsta_pane_ParamLimits

0xba8a,	// (0x000488f3) cell_indicator_nsta_pane

0xbac2,	// (0x0004892b) cell_indicator_nsta_pane_g1

0xbad0,	// (0x00048939) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0004c91c) cell_indicator_nsta_pane_g

0xbae5,	// (0x0004894e) clock_nsta_pane_cp

0xbaed,	// (0x00048956) indicator_nsta_pane_cp

0xbaf5,	// (0x0004895e) nsta_clock_indic_pane_g1

0x76d1,	// (0x0004453a) grid_indicator_pane

0x8440,	// (0x000452a9) scroll_pane_cp29

0x6043,	// (0x00042eac) indicator_nsta_pane_cp2_ParamLimits

0x6043,	// (0x00042eac) indicator_nsta_pane_cp2

0x7605,	// (0x0004446e) main_apps_wheel_pane

0x9cd3,	// (0x00046b3c) form_midp_field_text_pane_ParamLimits

0x9e22,	// (0x00046c8b) scroll_bar_cp050_ParamLimits

0xbb5e,	// (0x000489c7) cell_indicator_pane_ParamLimits

0xbb5e,	// (0x000489c7) cell_indicator_pane

0xbb76,	// (0x000489df) cell_indicator_pane_g1

0xbb80,	// (0x000489e9) grid_wheel_folder_pane_ParamLimits

0xbb80,	// (0x000489e9) grid_wheel_folder_pane

0xbb94,	// (0x000489fd) list_wheel_apps_pane_ParamLimits

0xbb94,	// (0x000489fd) list_wheel_apps_pane

0xbba7,	// (0x00048a10) main_apps_wheel_pane_g1_ParamLimits

0xbba7,	// (0x00048a10) main_apps_wheel_pane_g1

0xbbc3,	// (0x00048a2c) main_apps_wheel_pane_g2_ParamLimits

0xbbc3,	// (0x00048a2c) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0004c938) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0004c938) main_apps_wheel_pane_g

0xbbdf,	// (0x00048a48) main_apps_wheel_pane_t1_ParamLimits

0xbbdf,	// (0x00048a48) main_apps_wheel_pane_t1

0xbc08,	// (0x00048a71) list_wheel_apps_pane_g1

0xbc10,	// (0x00048a79) list_wheel_apps_pane_g2

0xbc18,	// (0x00048a81) list_wheel_apps_pane_g3

0xbc20,	// (0x00048a89) list_wheel_apps_pane_g4

0xbc2a,	// (0x00048a93) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0004c93d) list_wheel_apps_pane_g

0x8972,	// (0x000457db) navi_icon_text_pane

0x94a7,	// (0x00046310) aid_fill_nsta

0xbc4b,	// (0x00048ab4) navi_icon_text_pane_g1

0xbc5a,	// (0x00048ac3) navi_icon_text_pane_t1

0x8808,	// (0x00045671) list_set_graphic_pane_t1_ParamLimits

0x8808,	// (0x00045671) list_set_graphic_pane_t1

0xa573,	// (0x000473dc) popup_midp_note_alarm_window_t6_ParamLimits

0xa573,	// (0x000473dc) popup_midp_note_alarm_window_t6

0xa585,	// (0x000473ee) popup_midp_note_alarm_window_t7_ParamLimits

0xa585,	// (0x000473ee) popup_midp_note_alarm_window_t7

0xa597,	// (0x00047400) popup_midp_note_alarm_window_t8_ParamLimits

0xa597,	// (0x00047400) popup_midp_note_alarm_window_t8

0xa5a9,	// (0x00047412) popup_midp_note_alarm_window_t9_ParamLimits

0xa5a9,	// (0x00047412) popup_midp_note_alarm_window_t9

0xa5bb,	// (0x00047424) popup_midp_note_alarm_window_t10_ParamLimits

0xa5bb,	// (0x00047424) popup_midp_note_alarm_window_t10

0xa5cd,	// (0x00047436) popup_midp_note_alarm_window_t11_ParamLimits

0xa5cd,	// (0x00047436) popup_midp_note_alarm_window_t11

0xa5df,	// (0x00047448) scroll_pane_cp17_ParamLimits

0xa5df,	// (0x00047448) scroll_pane_cp17

0x649f,	// (0x00043308) volume_small_pane_cp_g1

0x680c,	// (0x00043675) volume_small_pane_cp_g2

0x6815,	// (0x0004367e) volume_small_pane_cp_g3

0x681e,	// (0x00043687) volume_small_pane_cp_g4

0x6827,	// (0x00043690) volume_small_pane_cp_g5

0x6830,	// (0x00043699) volume_small_pane_cp_g6

0x6839,	// (0x000436a2) volume_small_pane_cp_g7

0x6842,	// (0x000436ab) volume_small_pane_cp_g8

0x684b,	// (0x000436b4) volume_small_pane_cp_g9

0x6854,	// (0x000436bd) volume_small_pane_cp_g10

0x8bd3,	// (0x00045a3c) midp_ticker_pane_g1_ParamLimits

0x8bdf,	// (0x00045a48) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004c5de) midp_ticker_pane_g_ParamLimits

0x8beb,	// (0x00045a54) midp_ticker_pane_t1_ParamLimits

0x94bd,	// (0x00046326) aid_fill_nsta_2

0x9e0e,	// (0x00046c77) list_form2_midp_pane

0xaf9c,	// (0x00047e05) midp_editing_number_pane_ParamLimits

0xafab,	// (0x00047e14) midp_ticker_pane_ParamLimits

0xbc6f,	// (0x00048ad8) form2_midp_field_pane

0xbc93,	// (0x00048afc) scroll_pane_cp51

0xbcb3,	// (0x00048b1c) form2_midp_button_pane_ParamLimits

0xbcb3,	// (0x00048b1c) form2_midp_button_pane

0xbcc5,	// (0x00048b2e) form2_midp_content_pane_ParamLimits

0xbcc5,	// (0x00048b2e) form2_midp_content_pane

0xbcdf,	// (0x00048b48) form2_midp_field_choice_group_pane

0xbce7,	// (0x00048b50) form2_midp_field_pane_g1

0xbcef,	// (0x00048b58) form2_midp_field_pane_g2

0xbcf7,	// (0x00048b60) form2_midp_field_pane_g3

0xbcff,	// (0x00048b68) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0004c962) form2_midp_field_pane_g

0xbd07,	// (0x00048b70) form2_midp_gauge_slider_pane

0xbd0f,	// (0x00048b78) form2_midp_gauge_wait_pane

0xbd17,	// (0x00048b80) form2_midp_image_pane_ParamLimits

0xbd17,	// (0x00048b80) form2_midp_image_pane

0xbd32,	// (0x00048b9b) form2_midp_label_pane_ParamLimits

0xbd32,	// (0x00048b9b) form2_midp_label_pane

0xbd51,	// (0x00048bba) form2_midp_label_pane_cp_ParamLimits

0xbd51,	// (0x00048bba) form2_midp_label_pane_cp

0xbd72,	// (0x00048bdb) form2_midp_string_pane_ParamLimits

0xbd72,	// (0x00048bdb) form2_midp_string_pane

0x555c,	// (0x000423c5) form2_midp_text_pane_ParamLimits

0x555c,	// (0x000423c5) form2_midp_text_pane

0xbd84,	// (0x00048bed) form2_midp_time_pane

0xbd94,	// (0x00048bfd) input_focus_pane_cp51_ParamLimits

0xbd94,	// (0x00048bfd) input_focus_pane_cp51

0xbdac,	// (0x00048c15) form2_midp_label_pane_t1_ParamLimits

0xbdac,	// (0x00048c15) form2_midp_label_pane_t1

0x557f,	// (0x000423e8) form2_mdip_text_pane_t1_ParamLimits

0x557f,	// (0x000423e8) form2_mdip_text_pane_t1

0x559e,	// (0x00042407) form2_midp_time_pane_t1

0xbdfa,	// (0x00048c63) form2_midp_gauge_slider_pane_t1

0xbe0c,	// (0x00048c75) form2_midp_gauge_slider_pane_t2

0xbe1e,	// (0x00048c87) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0004c96b) form2_midp_gauge_slider_pane_t

0xbe30,	// (0x00048c99) form2_midp_slider_pane

0xbe3c,	// (0x00048ca5) form2_midp_gauge_wait_pane_t1

0xbe4a,	// (0x00048cb3) form2_midp_wait_pane_ParamLimits

0xbe4a,	// (0x00048cb3) form2_midp_wait_pane

0x9b33,	// (0x0004699c) list_single_2graphic_pane_cp4_ParamLimits

0x9b33,	// (0x0004699c) list_single_2graphic_pane_cp4

0xbe75,	// (0x00048cde) list_single_midp_graphic_pane_cp_ParamLimits

0xbe75,	// (0x00048cde) list_single_midp_graphic_pane_cp

0x2c26,	// (0x0003fa8f) list_highlight_pane_cp20

0xbe99,	// (0x00048d02) list_single_2graphic_pane_g1_cp4

0xb43b,	// (0x000482a4) list_single_2graphic_pane_g2_cp4

0xbea1,	// (0x00048d0a) list_single_2graphic_pane_t1_cp4

0x7605,	// (0x0004446e) list_highlight_pane_cp21

0xbeb0,	// (0x00048d19) list_single_midp_graphic_pane_g4_cp

0xbebf,	// (0x00048d28) list_single_midp_graphic_pane_t1_cp

0xbed4,	// (0x00048d3d) form2_mdip_string_pane_t1_ParamLimits

0xbed4,	// (0x00048d3d) form2_mdip_string_pane_t1

0x2c26,	// (0x0003fa8f) bg_wml_button_pane_cp2

0x2c1c,	// (0x0003fa85) form2_midp_image_pane_g1

0x5d30,	// (0x00042b99) list_double_large_graphic_pane_g5_ParamLimits

0x5d30,	// (0x00042b99) list_double_large_graphic_pane_g5

0x8afe,	// (0x00045967) midp_form_pane_ParamLimits

0x7605,	// (0x0004446e) main_apps_wheel_pane_ParamLimits

0x9251,	// (0x000460ba) popup_preview_window_ParamLimits

0x9251,	// (0x000460ba) popup_preview_window

0x9438,	// (0x000462a1) popup_touch_info_window_ParamLimits

0x9438,	// (0x000462a1) popup_touch_info_window

0x945a,	// (0x000462c3) popup_touch_menu_window_ParamLimits

0x945a,	// (0x000462c3) popup_touch_menu_window

0x2c12,	// (0x0003fa7b) bg_popup_sub_pane_cp6

0xbf79,	// (0x00048de2) list_touch_menu_pane

0xbf81,	// (0x00048dea) list_single_touch_menu_pane_ParamLimits

0xbf81,	// (0x00048dea) list_single_touch_menu_pane

0xbf9c,	// (0x00048e05) list_single_touch_menu_pane_t1

0x7605,	// (0x0004446e) bg_popup_sub_pane_cp7_ParamLimits

0x7605,	// (0x0004446e) bg_popup_sub_pane_cp7

0xbfaa,	// (0x00048e13) heading_sub_pane

0xbfb2,	// (0x00048e1b) list_touch_info_pane_ParamLimits

0xbfb2,	// (0x00048e1b) list_touch_info_pane

0xbfc1,	// (0x00048e2a) list_single_touch_info_pane_ParamLimits

0xbfc1,	// (0x00048e2a) list_single_touch_info_pane

0xbfd3,	// (0x00048e3c) list_single_touch_info_pane_t1

0xbfe1,	// (0x00048e4a) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0004c979) list_single_touch_info_pane_t

0x8af6,	// (0x0004595f) bg_popup_heading_pane_cp

0xbfef,	// (0x00048e58) heading_sub_pane_t1

0x9aa2,	// (0x0004690b) bg_popup_preview_window_pane_cp_ParamLimits

0x9aa2,	// (0x0004690b) bg_popup_preview_window_pane_cp

0xbfaa,	// (0x00048e13) heading_preview_pane

0xbfb2,	// (0x00048e1b) list_preview_pane_ParamLimits

0xbfb2,	// (0x00048e1b) list_preview_pane

0xbffd,	// (0x00048e66) popup_preview_window_g1

0xbfc1,	// (0x00048e2a) list_single_preview_pane_ParamLimits

0xbfc1,	// (0x00048e2a) list_single_preview_pane

0xc005,	// (0x00048e6e) list_single_preview_pane_g1

0xc00d,	// (0x00048e76) list_single_preview_pane_t1

0xbfd3,	// (0x00048e3c) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0004c97e) list_single_preview_pane_t

0xc01b,	// (0x00048e84) bg_popup_heading_pane_cp2_ParamLimits

0xc01b,	// (0x00048e84) bg_popup_heading_pane_cp2

0xc031,	// (0x00048e9a) heading_preview_pane_g1

0xc039,	// (0x00048ea2) heading_preview_pane_t1_ParamLimits

0xc039,	// (0x00048ea2) heading_preview_pane_t1

0x76f4,	// (0x0004455d) soft_indicator_pane_t1_ParamLimits

0x7dff,	// (0x00044c68) scroll_pane_ParamLimits

0x833c,	// (0x000451a5) scroll_sc2_left_pane

0x8345,	// (0x000451ae) scroll_sc2_right_pane

0x8364,	// (0x000451cd) scroll_bg_pane_g1_ParamLimits

0x8379,	// (0x000451e2) scroll_bg_pane_g2_ParamLimits

0x8391,	// (0x000451fa) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0004c56d) scroll_bg_pane_g_ParamLimits

0x8364,	// (0x000451cd) scroll_handle_pane_g1_ParamLimits

0x83b3,	// (0x0004521c) scroll_handle_pane_g2_ParamLimits

0x8391,	// (0x000451fa) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0004c574) scroll_handle_pane_g_ParamLimits

0x8e9c,	// (0x00045d05) popup_choice_list_window_ParamLimits

0x8e9c,	// (0x00045d05) popup_choice_list_window

0x98fa,	// (0x00046763) choice_list_pane

0x997c,	// (0x000467e5) cell_toolbar_pane_t1

0x99a4,	// (0x0004680d) toolbar_button_pane_ParamLimits

0xaaaf,	// (0x00047918) ai_gene_pane_1_t2_ParamLimits

0xaaaf,	// (0x00047918) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004c791) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004c791) ai_gene_pane_1_t

0xc056,	// (0x00048ebf) scroll_sc2_left_pane_g1

0xc056,	// (0x00048ebf) scroll_sc2_right_pane_g1

0x8e74,	// (0x00045cdd) bg_popup_sub_pane_cp10

0xc060,	// (0x00048ec9) list_choice_list_pane

0xc077,	// (0x00048ee0) list_single_choice_list_pane_ParamLimits

0xc077,	// (0x00048ee0) list_single_choice_list_pane

0xc08b,	// (0x00048ef4) list_single_choice_list_pane_g1

0xc093,	// (0x00048efc) list_single_choice_list_pane_t1_ParamLimits

0xc093,	// (0x00048efc) list_single_choice_list_pane_t1

0xc0a8,	// (0x00048f11) choice_list_pane_g1

0xc0b0,	// (0x00048f19) choice_list_pane_t1

0x2c12,	// (0x0003fa7b) input_focus_pane_cp11

0x8216,	// (0x0004507f) title_pane_stacon_g2_ParamLimits

0x8216,	// (0x0004507f) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0004c553) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0004c553) title_pane_stacon_g

0x8af6,	// (0x0004595f) cursor_press_pane

0x8f52,	// (0x00045dbb) popup_fep_hwr_window_ParamLimits

0x8f52,	// (0x00045dbb) popup_fep_hwr_window

0x8fdc,	// (0x00045e45) popup_fep_vkb_window_ParamLimits

0x8fdc,	// (0x00045e45) popup_fep_vkb_window

0xc0be,	// (0x00048f27) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0004c9a7) fep_vkb_side_pane_g_ParamLimits

0x6888,	// (0x000436f1) fep_hwr_candidate_pane_ParamLimits

0x6888,	// (0x000436f1) fep_hwr_candidate_pane

0x68b2,	// (0x0004371b) fep_hwr_side_pane_ParamLimits

0x68b2,	// (0x0004371b) fep_hwr_side_pane

0x68d4,	// (0x0004373d) fep_hwr_top_pane_ParamLimits

0x68d4,	// (0x0004373d) fep_hwr_top_pane

0x68ec,	// (0x00043755) fep_hwr_write_pane_ParamLimits

0x68ec,	// (0x00043755) fep_hwr_write_pane

0xfb3e,	// (0x0004c9a7) fep_vkb_side_pane_g

0xc0c6,	// (0x00048f2f) fep_hwr_top_pane_g1

0xc0d8,	// (0x00048f41) fep_hwr_top_pane_g2

0x6918,	// (0x00043781) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0004c983) fep_hwr_top_pane_g

0x692d,	// (0x00043796) fep_hwr_top_text_pane

0x8508,	// (0x00045371) fep_hwr_top_text_pane_g1

0xc10e,	// (0x00048f77) fep_hwr_top_text_pane_t1

0x6a37,	// (0x000438a0) fep_hwr_candidate_pane_g1

0xc359,	// (0x000491c2) fep_vkb_keypad_pane_g3_ParamLimits

0xc359,	// (0x000491c2) fep_vkb_keypad_pane_g3

0xc385,	// (0x000491ee) fep_vkb_keypad_pane_g4_ParamLimits

0xc385,	// (0x000491ee) fep_vkb_keypad_pane_g4

0xc3fc,	// (0x00049265) fep_vkb_bottom_pane_g2_ParamLimits

0xc3fc,	// (0x00049265) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0004c9ae) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0004c9ae) fep_vkb_bottom_pane_g

0xc056,	// (0x00048ebf) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0004c9b8) cell_vkb_side_pane_g

0xc487,	// (0x000492f0) cell_vkb_side_pane_t1

0xc495,	// (0x000492fe) cell_vkb_side_pane_t1_copy1

0xc056,	// (0x00048ebf) bg_fep_vkb_candidate_pane_g2

0xc5d9,	// (0x00049442) cell_vkb_candidate_pane_ParamLimits

0xc11c,	// (0x00048f85) aid_size_cell_vkb_ParamLimits

0xc11c,	// (0x00048f85) aid_size_cell_vkb

0xc5d9,	// (0x00049442) cell_vkb_candidate_pane

0x6a51,	// (0x000438ba) bg_popup_fep_shadow_pane_g1

0xc1ae,	// (0x00049017) fep_vkb_bottom_pane_ParamLimits

0xc1ae,	// (0x00049017) fep_vkb_bottom_pane

0xc1eb,	// (0x00049054) fep_vkb_candidate_pane_ParamLimits

0xc1eb,	// (0x00049054) fep_vkb_candidate_pane

0xc207,	// (0x00049070) fep_vkb_keypad_pane_ParamLimits

0xc207,	// (0x00049070) fep_vkb_keypad_pane

0xc23a,	// (0x000490a3) fep_vkb_side_pane_ParamLimits

0xc23a,	// (0x000490a3) fep_vkb_side_pane

0xc276,	// (0x000490df) fep_vkb_top_pane_ParamLimits

0xc276,	// (0x000490df) fep_vkb_top_pane

0xc2b2,	// (0x0004911b) fep_vkb_top_pane_g1_ParamLimits

0xc2b2,	// (0x0004911b) fep_vkb_top_pane_g1

0xc2c1,	// (0x0004912a) fep_vkb_top_pane_g2_ParamLimits

0xc2c1,	// (0x0004912a) fep_vkb_top_pane_g2

0xc2d0,	// (0x00049139) fep_vkb_top_pane_g3_ParamLimits

0xc2d0,	// (0x00049139) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0004c99e) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0004c99e) fep_vkb_top_pane_g

0xc2ee,	// (0x00049157) fep_vkb_top_text_pane_ParamLimits

0xc2ee,	// (0x00049157) fep_vkb_top_text_pane

0xc2ff,	// (0x00049168) fep_vkb_side_pane_g1_ParamLimits

0xc2ff,	// (0x00049168) fep_vkb_side_pane_g1

0xc348,	// (0x000491b1) grid_vkb_side_pane_ParamLimits

0xc348,	// (0x000491b1) grid_vkb_side_pane

0x6a59,	// (0x000438c2) bg_popup_fep_shadow_pane_g2

0x6a62,	// (0x000438cb) bg_popup_fep_shadow_pane_g3

0x6a6a,	// (0x000438d3) bg_popup_fep_shadow_pane_g4

0x6a73,	// (0x000438dc) bg_popup_fep_shadow_pane_g5

0x6a7d,	// (0x000438e6) bg_popup_fep_shadow_pane_g6

0x6a85,	// (0x000438ee) bg_popup_fep_shadow_pane_g7

0x7f1f,	// (0x00044d88) bg_popup_fep_shadow_pane_g8

0xc3a7,	// (0x00049210) grid_vkb_keypad_number_pane_ParamLimits

0xc3a7,	// (0x00049210) grid_vkb_keypad_number_pane

0xc3bb,	// (0x00049224) grid_vkb_keypad_pane_ParamLimits

0xc3bb,	// (0x00049224) grid_vkb_keypad_pane

0xc3e1,	// (0x0004924a) fep_vkb_bottom_pane_g1_ParamLimits

0xc3e1,	// (0x0004924a) fep_vkb_bottom_pane_g1

0xc40a,	// (0x00049273) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc40a,	// (0x00049273) grid_vkb_keypad_bottom_left_pane

0xc41f,	// (0x00049288) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc41f,	// (0x00049288) grid_vkb_keypad_bottom_right_pane

0xc434,	// (0x0004929d) fep_vkb_top_text_pane_g1

0xc44f,	// (0x000492b8) fep_vkb_top_text_pane_t1

0xc464,	// (0x000492cd) cell_vkb_side_pane_ParamLimits

0xc464,	// (0x000492cd) cell_vkb_side_pane

0xc056,	// (0x00048ebf) cell_vkb_side_pane_g1

0xc4a3,	// (0x0004930c) cell_vkb_keypad_pane_ParamLimits

0xc4a3,	// (0x0004930c) cell_vkb_keypad_pane

0xc530,	// (0x00049399) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0004c9cb) bg_popup_fep_shadow_pane_g

0xc056,	// (0x00048ebf) cell_hwr_side_pane_g1

0xc056,	// (0x00048ebf) cell_hwr_side_pane_g2

0xc53a,	// (0x000493a3) cell_vkb_keypad_pane_t1

0xc548,	// (0x000493b1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc548,	// (0x000493b1) cell_vkb_keypad_bottom_left_pane

0xc565,	// (0x000493ce) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc565,	// (0x000493ce) cell_vkb_keypad_bottom_right_pane

0xc056,	// (0x00048ebf) cell_vkb_keypad_bottom_left_pane_g1

0xc056,	// (0x00048ebf) cell_vkb_keypad_bottom_right_pane_g1

0xc59e,	// (0x00049407) cell_vkb_keypad_number_pane_ParamLimits

0xc59e,	// (0x00049407) cell_vkb_keypad_number_pane

0xc5bd,	// (0x00049426) cell_vkb_keypad_number_pane_g1

0xc5c7,	// (0x00049430) cell_vkb_keypad_number_pane_g2

0xc5d0,	// (0x00049439) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0004c9bd) cell_vkb_keypad_number_pane_g

0xc53a,	// (0x000493a3) cell_vkb_keypad_number_pane_t1

0xc5fa,	// (0x00049463) fep_vkb_candidate_pane_g1

0x0001,

0xfb4f,	// (0x0004c9b8) cell_hwr_side_pane_g

0xc613,	// (0x0004947c) cell_hwr_side_pane_t1

0x6a97,	// (0x00043900) cell_hwr_side_pane_t1_copy1

0xc2e0,	// (0x00049149) cell_hwr_candidate_pane_g1

0x6aa5,	// (0x0004390e) cell_hwr_candidate_pane_t1

0xc056,	// (0x00048ebf) cell_vkb_candidate_pane_g2

0xc657,	// (0x000494c0) cell_vkb_candidate_pane_t1

0x128d,	// (0x0003e0f6) bg_popup_fep_shadow_pane_ParamLimits

0x128d,	// (0x0003e0f6) bg_popup_fep_shadow_pane

0x2be2,	// (0x0003fa4b) bg_fep_hwr_top_pane_g4

0xc0ea,	// (0x00048f53) bg_hwr_side_pane_g1_ParamLimits

0xc0ea,	// (0x00048f53) bg_hwr_side_pane_g1

0x696b,	// (0x000437d4) cell_hwr_side_pane_ParamLimits

0x696b,	// (0x000437d4) cell_hwr_side_pane

0x69a8,	// (0x00043811) fep_hwr_write_pane_g1_ParamLimits

0x69a8,	// (0x00043811) fep_hwr_write_pane_g1

0x69b5,	// (0x0004381e) fep_hwr_write_pane_g2_ParamLimits

0x69b5,	// (0x0004381e) fep_hwr_write_pane_g2

0x69c2,	// (0x0004382b) fep_hwr_write_pane_g3_ParamLimits

0x69c2,	// (0x0004382b) fep_hwr_write_pane_g3

0x69d0,	// (0x00043839) fep_hwr_write_pane_g4_ParamLimits

0x69d0,	// (0x00043839) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0004c98a) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0004c98a) fep_hwr_write_pane_g

0x2be2,	// (0x0003fa4b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2be2,	// (0x0003fa4b) bg_fep_hwr_candidate_pane_g2

0x69e5,	// (0x0004384e) cell_hwr_candidate_pane_ParamLimits

0x69e5,	// (0x0004384e) cell_hwr_candidate_pane

0x6a37,	// (0x000438a0) fep_hwr_candidate_pane_g1_ParamLimits

0xc14a,	// (0x00048fb3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc14a,	// (0x00048fb3) bg_popup_fep_shadow_pane_cp2

0xc2e0,	// (0x00049149) fep_vkb_top_pane_g4_ParamLimits

0xc2e0,	// (0x00049149) fep_vkb_top_pane_g4

0xc326,	// (0x0004918f) fep_vkb_side_pane_g2_ParamLimits

0xc326,	// (0x0004918f) fep_vkb_side_pane_g2

0x4eb7,	// (0x00041d20) list_setting_pane_t4_ParamLimits

0x4eb7,	// (0x00041d20) list_setting_pane_t4

0x4f53,	// (0x00041dbc) list_setting_number_pane_t5_ParamLimits

0x4f53,	// (0x00041dbc) list_setting_number_pane_t5

0x854a,	// (0x000453b3) list_double_heading_pane_cp2_ParamLimits

0x854a,	// (0x000453b3) list_double_heading_pane_cp2

0x7eb2,	// (0x00044d1b) list_double_heading_pane_g1_cp2_ParamLimits

0x7eb2,	// (0x00044d1b) list_double_heading_pane_g1_cp2

0x7ebe,	// (0x00044d27) list_double_heading_pane_g2_cp2_ParamLimits

0x7ebe,	// (0x00044d27) list_double_heading_pane_g2_cp2

0xc665,	// (0x000494ce) list_double_heading_pane_t1_cp2_ParamLimits

0xc665,	// (0x000494ce) list_double_heading_pane_t1_cp2

0xc67b,	// (0x000494e4) list_double_heading_pane_t2_cp2_ParamLimits

0xc67b,	// (0x000494e4) list_double_heading_pane_t2_cp2

0x2c0a,	// (0x0003fa73) aid_value_unit2

0x5b09,	// (0x00042972) popup_preview_fixed_window

0x788f,	// (0x000446f8) bg_popup_preview_window_pane_cp02

0xc68d,	// (0x000494f6) list_preview_fixed_pane

0xc6d3,	// (0x0004953c) list_empty_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_empty_pane_fp

0xc6d3,	// (0x0004953c) list_single_cale_day_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_single_cale_day_pane_fp

0xc6d3,	// (0x0004953c) list_single_graphic_heading_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_single_graphic_heading_pane_fp

0xc6d3,	// (0x0004953c) list_single_graphic_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_single_graphic_pane_fp

0xc6d3,	// (0x0004953c) list_single_heading_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_single_heading_pane_fp

0xc6d3,	// (0x0004953c) list_single_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_single_pane_fp

0xc6ec,	// (0x00049555) list_single_pane_fp_g1_ParamLimits

0xc6ec,	// (0x00049555) list_single_pane_fp_g1

0x5d24,	// (0x00042b8d) list_single_pane_fp_g2_ParamLimits

0x5d24,	// (0x00042b8d) list_single_pane_fp_g2

0x6ac3,	// (0x0004392c) list_single_pane_fp_g3_ParamLimits

0x6ac3,	// (0x0004392c) list_single_pane_fp_g3

0xc6f8,	// (0x00049561) list_single_pane_fp_g4_ParamLimits

0xc6f8,	// (0x00049561) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x0004c9ec) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x0004c9ec) list_single_pane_fp_g

0x55b1,	// (0x0004241a) list_single_pane_fp_t1_ParamLimits

0x55b1,	// (0x0004241a) list_single_pane_fp_t1

0x55c8,	// (0x00042431) list_single_graphic_pane_fp_g1_ParamLimits

0x55c8,	// (0x00042431) list_single_graphic_pane_fp_g1

0xc6ec,	// (0x00049555) list_single_graphic_pane_fp_g2_ParamLimits

0xc6ec,	// (0x00049555) list_single_graphic_pane_fp_g2

0x5d24,	// (0x00042b8d) list_single_graphic_pane_fp_g3_ParamLimits

0x5d24,	// (0x00042b8d) list_single_graphic_pane_fp_g3

0x6ac3,	// (0x0004392c) list_single_graphic_pane_fp_g4_ParamLimits

0x6ac3,	// (0x0004392c) list_single_graphic_pane_fp_g4

0xc6f8,	// (0x00049561) list_single_graphic_pane_fp_g5_ParamLimits

0xc6f8,	// (0x00049561) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004c9f5) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004c9f5) list_single_graphic_pane_fp_g

0x55d4,	// (0x0004243d) list_single_graphic_pane_fp_t1_ParamLimits

0x55d4,	// (0x0004243d) list_single_graphic_pane_fp_t1

0x55c8,	// (0x00042431) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x55c8,	// (0x00042431) list_single_graphic_heading_pane_fp_g1

0xc6ec,	// (0x00049555) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6ec,	// (0x00049555) list_single_graphic_heading_pane_fp_g2

0x5d24,	// (0x00042b8d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5d24,	// (0x00042b8d) list_single_graphic_heading_pane_fp_g3

0x6ac3,	// (0x0004392c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6ac3,	// (0x0004392c) list_single_graphic_heading_pane_fp_g4

0xc6f8,	// (0x00049561) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6f8,	// (0x00049561) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004c9f5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004c9f5) list_single_graphic_heading_pane_fp_g

0x55ea,	// (0x00042453) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x55ea,	// (0x00042453) list_single_graphic_heading_pane_fp_t1

0x5600,	// (0x00042469) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5600,	// (0x00042469) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0004ca00) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0004ca00) list_single_graphic_heading_pane_fp_t

0x5612,	// (0x0004247b) list_single_cale_day_pane_fp_g1_ParamLimits

0x5612,	// (0x0004247b) list_single_cale_day_pane_fp_g1

0xc704,	// (0x0004956d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc704,	// (0x0004956d) list_single_cale_day_pane_fp_g2

0x6ad7,	// (0x00043940) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ad7,	// (0x00043940) list_single_cale_day_pane_fp_g3

0x6aff,	// (0x00043968) list_single_cale_day_pane_fp_g4_ParamLimits

0x6aff,	// (0x00043968) list_single_cale_day_pane_fp_g4

0x6b23,	// (0x0004398c) list_single_cale_day_pane_fp_g5_ParamLimits

0x6b23,	// (0x0004398c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0004ca05) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0004ca05) list_single_cale_day_pane_fp_g

0x564a,	// (0x000424b3) list_single_cale_day_pane_fp_t1_ParamLimits

0x564a,	// (0x000424b3) list_single_cale_day_pane_fp_t1

0x5670,	// (0x000424d9) list_single_cale_day_pane_fp_t2_ParamLimits

0x5670,	// (0x000424d9) list_single_cale_day_pane_fp_t2

0x5689,	// (0x000424f2) list_single_cale_day_pane_fp_t3_ParamLimits

0x5689,	// (0x000424f2) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x0004ca10) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x0004ca10) list_single_cale_day_pane_fp_t

0xc6ec,	// (0x00049555) list_empty_pane_fp_g1_ParamLimits

0xc6ec,	// (0x00049555) list_empty_pane_fp_g1

0x56a2,	// (0x0004250b) list_empty_pane_fp_t1

0x56b0,	// (0x00042519) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x0004ca17) list_empty_pane_fp_t

0xc6ec,	// (0x00049555) list_single_heading_pane_fp_g1_ParamLimits

0xc6ec,	// (0x00049555) list_single_heading_pane_fp_g1

0x5d24,	// (0x00042b8d) list_single_heading_pane_fp_g2_ParamLimits

0x5d24,	// (0x00042b8d) list_single_heading_pane_fp_g2

0x6ac3,	// (0x0004392c) list_single_heading_pane_fp_g3_ParamLimits

0x6ac3,	// (0x0004392c) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x0004ca1c) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x0004ca1c) list_single_heading_pane_fp_g

0x56be,	// (0x00042527) list_single_heading_pane_fp_t1_ParamLimits

0x56be,	// (0x00042527) list_single_heading_pane_fp_t1

0x56d0,	// (0x00042539) list_single_heading_pane_fp_t2_ParamLimits

0x56d0,	// (0x00042539) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x0004ca23) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x0004ca23) list_single_heading_pane_fp_t

0x80ad,	// (0x00044f16) aid_size_cell_fast

0x7801,	// (0x0004466a) soft_indicator_pane_cp1_t1

0x80ea,	// (0x00044f53) cell_app_pane_cp2_ParamLimits

0x80ea,	// (0x00044f53) cell_app_pane_cp2

0x6871,	// (0x000436da) fep_hwr_candidate_drop_down_list_pane

0x2bf0,	// (0x0003fa59) fep_hwr_candidate_pane_g3_ParamLimits

0x2bf0,	// (0x0003fa59) fep_hwr_candidate_pane_g3

0x2bfd,	// (0x0003fa66) fep_hwr_candidate_pane_g4_ParamLimits

0x2bfd,	// (0x0003fa66) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0004c997) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0004c997) fep_hwr_candidate_pane_g

0xc1da,	// (0x00049043) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1da,	// (0x00049043) fep_vkb_candidate_drop_down_list_pane

0xc602,	// (0x0004946b) fep_vkb_candidate_pane_g3

0xc60a,	// (0x00049473) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0004c9c4) fep_vkb_candidate_pane_g

0xc2e0,	// (0x00049149) cell_hwr_candidate_pane_g1_ParamLimits

0xc772,	// (0x000495db) cell_hwr_candidate_pane_g3_ParamLimits

0xc772,	// (0x000495db) cell_hwr_candidate_pane_g3

0xc793,	// (0x000495fc) cell_hwr_candidate_pane_g4_ParamLimits

0xc793,	// (0x000495fc) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x0004c9de) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x0004c9de) cell_hwr_candidate_pane_g

0xc621,	// (0x0004948a) cell_vkb_candidate_pane_g3_ParamLimits

0xc621,	// (0x0004948a) cell_vkb_candidate_pane_g3

0xc63c,	// (0x000494a5) cell_vkb_candidate_pane_g4_ParamLimits

0xc63c,	// (0x000494a5) cell_vkb_candidate_pane_g4

0xc710,	// (0x00049579) cell_app_pane_cp2_g1_ParamLimits

0xc710,	// (0x00049579) cell_app_pane_cp2_g1

0xc72e,	// (0x00049597) cell_app_pane_cp2_g2_ParamLimits

0xc72e,	// (0x00049597) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x0004ca28) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x0004ca28) cell_app_pane_cp2_g

0xc73a,	// (0x000495a3) cell_app_pane_cp2_t1_ParamLimits

0xc73a,	// (0x000495a3) cell_app_pane_cp2_t1

0x7e98,	// (0x00044d01) grid_highlight_pane_cp1_ParamLimits

0x7e98,	// (0x00044d01) grid_highlight_pane_cp1

0x6b47,	// (0x000439b0) cell_hwr_candidate_pane_cp1_ParamLimits

0x6b47,	// (0x000439b0) cell_hwr_candidate_pane_cp1

0xc2e0,	// (0x00049149) fep_hwr_candidate_drop_down_list_pane_g1

0xc7b4,	// (0x0004961d) fep_hwr_candidate_drop_down_list_pane_g2

0xc7c1,	// (0x0004962a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0004ca2d) fep_hwr_candidate_drop_down_list_pane_g

0x6b6b,	// (0x000439d4) fep_hwr_candidate_drop_down_list_scroll_pane

0x6b74,	// (0x000439dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6b74,	// (0x000439dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6b81,	// (0x000439ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6b81,	// (0x000439ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6b8e,	// (0x000439f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6b8e,	// (0x000439f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc621,	// (0x0004948a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc621,	// (0x0004948a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc63c,	// (0x000494a5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc63c,	// (0x000494a5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b9b,	// (0x00043a04) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b9b,	// (0x00043a04) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6bb6,	// (0x00043a1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6bb6,	// (0x00043a1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6bd1,	// (0x00043a3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6bd1,	// (0x00043a3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0004ca34) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0004ca34) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc74c,	// (0x000495b5) cell_vkb_candidate_pane_cp1_ParamLimits

0xc74c,	// (0x000495b5) cell_vkb_candidate_pane_cp1

0xc2e0,	// (0x00049149) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) fep_vkb_candidate_drop_down_list_pane_g1

0xc7b4,	// (0x0004961d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7b4,	// (0x0004961d) fep_vkb_candidate_drop_down_list_pane_g2

0xc7c1,	// (0x0004962a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7c1,	// (0x0004962a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0004ca2d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc4,	// (0x0004ca2d) fep_vkb_candidate_drop_down_list_pane_g

0xc7ce,	// (0x00049637) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7ce,	// (0x00049637) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7db,	// (0x00049644) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7db,	// (0x00049644) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7e8,	// (0x00049651) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7e8,	// (0x00049651) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7f4,	// (0x0004965d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7f4,	// (0x0004965d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc772,	// (0x000495db) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc772,	// (0x000495db) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc793,	// (0x000495fc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc793,	// (0x000495fc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc800,	// (0x00049669) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc800,	// (0x00049669) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc821,	// (0x0004968a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc821,	// (0x0004968a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc842,	// (0x000496ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc842,	// (0x000496ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0004ca45) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0004ca45) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x753b,	// (0x000443a4) title_pane_g1_ParamLimits

0x7548,	// (0x000443b1) title_pane_g2_ParamLimits

0xf56a,	// (0x0004c3d3) title_pane_g_ParamLimits

0x84f8,	// (0x00045361) aid_call2_pane

0x8500,	// (0x00045369) aid_call_pane

0x8508,	// (0x00045371) popup_clock_analogue_window_g1

0x8508,	// (0x00045371) popup_clock_analogue_window_g2

0x5f24,	// (0x00042d8d) popup_clock_analogue_window_g3

0x5f2d,	// (0x00042d96) popup_clock_analogue_window_g4

0x2c1c,	// (0x0003fa85) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0004c582) popup_clock_analogue_window_g

0x5f35,	// (0x00042d9e) popup_clock_analogue_window_t1

0x5f43,	// (0x00042dac) clock_digital_number_pane_ParamLimits

0x5f43,	// (0x00042dac) clock_digital_number_pane

0x5f4f,	// (0x00042db8) clock_digital_number_pane_cp02_ParamLimits

0x5f4f,	// (0x00042db8) clock_digital_number_pane_cp02

0x5f5b,	// (0x00042dc4) clock_digital_number_pane_cp03_ParamLimits

0x5f5b,	// (0x00042dc4) clock_digital_number_pane_cp03

0x5f67,	// (0x00042dd0) clock_digital_number_pane_cp04_ParamLimits

0x5f67,	// (0x00042dd0) clock_digital_number_pane_cp04

0x5f73,	// (0x00042ddc) clock_digital_separator_pane_ParamLimits

0x5f73,	// (0x00042ddc) clock_digital_separator_pane

0x5f7f,	// (0x00042de8) popup_clock_digital_window_t1_ParamLimits

0x5f7f,	// (0x00042de8) popup_clock_digital_window_t1

0x2c1c,	// (0x0003fa85) clock_digital_number_pane_g1

0x2c1c,	// (0x0003fa85) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0004c58d) clock_digital_number_pane_g

0x2c1c,	// (0x0003fa85) clock_digital_separator_pane_g1

0x2c1c,	// (0x0003fa85) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0004c58d) clock_digital_separator_pane_g

0x94a7,	// (0x00046310) aid_fill_nsta_ParamLimits

0x95f7,	// (0x00046460) indicator_nsta_pane_ParamLimits

0x9787,	// (0x000465f0) popup_clock_analogue_window

0x9787,	// (0x000465f0) popup_clock_digital_window

0x7605,	// (0x0004446e) grid_indicator_nsta_pane_ParamLimits

0xba7c,	// (0x000488e5) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0004c917) clock_nsta_pane_t

0x5ee8,	// (0x00042d51) aid_size_max_handle

0x5ef2,	// (0x00042d5b) aid_size_min_handle

0x8af6,	// (0x0004595f) editor_scroll_pane

0xc85d,	// (0x000496c6) ex_editor_pane

0x801a,	// (0x00044e83) scroll_pane_cp13

0x7e2b,	// (0x00044c94) scroll_pane_cp14

0x8532,	// (0x0004539b) scroll_pane_cp36

0x8560,	// (0x000453c9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8560,	// (0x000453c9) list_single_graphic_hl_pane_cp2

0x66a5,	// (0x0004350e) list_single_graphic_hl_pane_ParamLimits

0x66a5,	// (0x0004350e) list_single_graphic_hl_pane

0x56e6,	// (0x0004254f) aid_size_min_hl_cp1

0xc865,	// (0x000496ce) list_highlight_pane_cp34_ParamLimits

0xc865,	// (0x000496ce) list_highlight_pane_cp34

0xc876,	// (0x000496df) list_single_graphic_hl_pane_g1_ParamLimits

0xc876,	// (0x000496df) list_single_graphic_hl_pane_g1

0x56ef,	// (0x00042558) list_single_graphic_hl_pane_g2_ParamLimits

0x56ef,	// (0x00042558) list_single_graphic_hl_pane_g2

0x56ef,	// (0x00042558) list_single_graphic_hl_pane_g3_ParamLimits

0x56ef,	// (0x00042558) list_single_graphic_hl_pane_g3

0x679a,	// (0x00043603) list_single_graphic_hl_pane_g4_ParamLimits

0x679a,	// (0x00043603) list_single_graphic_hl_pane_g4

0x6bec,	// (0x00043a55) list_single_graphic_hl_pane_g5_ParamLimits

0x6bec,	// (0x00043a55) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0004ca56) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0004ca56) list_single_graphic_hl_pane_g

0x56fb,	// (0x00042564) list_single_graphic_hl_pane_t1_ParamLimits

0x56fb,	// (0x00042564) list_single_graphic_hl_pane_t1

0xc883,	// (0x000496ec) aid_size_min_hl_cp2

0xc88c,	// (0x000496f5) list_highlight_pane_cp34_cp2_ParamLimits

0xc88c,	// (0x000496f5) list_highlight_pane_cp34_cp2

0xc876,	// (0x000496df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc876,	// (0x000496df) list_single_graphic_hl_pane_g1_cp2

0xc899,	// (0x00049702) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc899,	// (0x00049702) list_single_graphic_hl_pane_g2_cp2

0xc8a5,	// (0x0004970e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8a5,	// (0x0004970e) list_single_graphic_hl_pane_g3_cp2

0x7e33,	// (0x00044c9c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e33,	// (0x00044c9c) list_single_graphic_hl_pane_g4_cp2

0xc8b3,	// (0x0004971c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8b3,	// (0x0004971c) list_single_graphic_hl_pane_g5_cp2

0x6256,	// (0x000430bf) control_pane_g4_ParamLimits

0x6256,	// (0x000430bf) control_pane_g4

0x8e74,	// (0x00045cdd) bg_popup_sub_pane_cp10_ParamLimits

0xc060,	// (0x00048ec9) list_choice_list_pane_ParamLimits

0xc06f,	// (0x00048ed8) scroll_pane_cp23

0x788f,	// (0x000446f8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc68d,	// (0x000494f6) list_preview_fixed_pane_ParamLimits

0xc6a3,	// (0x0004950c) list_preview_fixed_pane_cp_ParamLimits

0xc6a3,	// (0x0004950c) list_preview_fixed_pane_cp

0xc6af,	// (0x00049518) popup_preview_fixed_window_g1_ParamLimits

0xc6af,	// (0x00049518) popup_preview_fixed_window_g1

0xc6bb,	// (0x00049524) popup_preview_fixed_window_g2_ParamLimits

0xc6bb,	// (0x00049524) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0004c9e5) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0004c9e5) popup_preview_fixed_window_g

0x5e5a,	// (0x00042cc3) aid_navi_side_left_pane_ParamLimits

0x5e6f,	// (0x00042cd8) aid_navi_side_right_pane_ParamLimits

0x5e87,	// (0x00042cf0) navi_icon_pane_stacon_ParamLimits

0x5e9b,	// (0x00042d04) navi_navi_pane_stacon_ParamLimits

0x5e87,	// (0x00042cf0) navi_text_pane_stacon_ParamLimits

0x2c12,	// (0x0003fa7b) main_text_info_pane

0xc8dd,	// (0x00049746) listscroll_text_info_pane

0xc8e5,	// (0x0004974e) list_text_info_pane_ParamLimits

0xc8e5,	// (0x0004974e) list_text_info_pane

0xc8f4,	// (0x0004975d) scroll_pane_cp24_ParamLimits

0xc8f4,	// (0x0004975d) scroll_pane_cp24

0xc912,	// (0x0004977b) list_text_info_pane_t1_ParamLimits

0xc912,	// (0x0004977b) list_text_info_pane_t1

0x8eba,	// (0x00045d23) popup_fast_swap2_window_ParamLimits

0x8eba,	// (0x00045d23) popup_fast_swap2_window

0xc937,	// (0x000497a0) aid_size_cell_fast2

0x2c12,	// (0x0003fa7b) bg_popup_window_pane_cp17

0x9e3a,	// (0x00046ca3) heading_pane_cp2

0x7aef,	// (0x00044958) listscroll_fast2_pane

0xc941,	// (0x000497aa) grid_fast2_pane

0xc94b,	// (0x000497b4) listscroll_fast2_pane_g1

0xc955,	// (0x000497be) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0004ca61) listscroll_fast2_pane_g

0x801a,	// (0x00044e83) scroll_pane_cp26

0xc95f,	// (0x000497c8) cell_fast2_pane_ParamLimits

0xc95f,	// (0x000497c8) cell_fast2_pane

0xc976,	// (0x000497df) cell_fast2_pane_g1

0xc97f,	// (0x000497e8) cell_fast2_pane_g2

0xc988,	// (0x000497f1) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0004ca66) cell_fast2_pane_g

0x7be8,	// (0x00044a51) grid_highlight_pane_cp9

0x7bfd,	// (0x00044a66) main_eswt_pane_ParamLimits

0x7bfd,	// (0x00044a66) main_eswt_pane

0xc909,	// (0x00049772) list_single_text_info_pane

0xc990,	// (0x000497f9) eswt_ctrl_button_pane

0xc990,	// (0x000497f9) eswt_ctrl_canvas_pane

0xc998,	// (0x00049801) eswt_ctrl_combo_pane

0xc990,	// (0x000497f9) eswt_ctrl_default_pane

0xc990,	// (0x000497f9) eswt_ctrl_label_pane

0xc9a0,	// (0x00049809) eswt_ctrl_wait_pane

0xc9a8,	// (0x00049811) eswt_shell_pane

0x2c12,	// (0x0003fa7b) listscroll_eswt_app_pane

0xc9c8,	// (0x00049831) popup_eswt_tasktip_window_ParamLimits

0xc9c8,	// (0x00049831) popup_eswt_tasktip_window

0x9aa2,	// (0x0004690b) bg_popup_window_pane_cp18

0xc9d9,	// (0x00049842) eswt_control_pane_g1_ParamLimits

0xc9d9,	// (0x00049842) eswt_control_pane_g1

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_ParamLimits

0xc9e6,	// (0x0004984f) eswt_control_pane_g2

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_ParamLimits

0xc9f3,	// (0x0004985c) eswt_control_pane_g3

0xca00,	// (0x00049869) eswt_control_pane_g4_ParamLimits

0xca00,	// (0x00049869) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0004ca6d) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0004ca6d) eswt_control_pane_g

0x7e98,	// (0x00044d01) bg_button_pane_ParamLimits

0x7e98,	// (0x00044d01) bg_button_pane

0x7bfd,	// (0x00044a66) common_borders_pane_copy2_ParamLimits

0x7bfd,	// (0x00044a66) common_borders_pane_copy2

0xca0d,	// (0x00049876) control_button_pane_g1_ParamLimits

0xca0d,	// (0x00049876) control_button_pane_g1

0xca19,	// (0x00049882) control_button_pane_g2_ParamLimits

0xca19,	// (0x00049882) control_button_pane_g2

0xca25,	// (0x0004988e) control_button_pane_g3_ParamLimits

0xca25,	// (0x0004988e) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0004ca76) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0004ca76) control_button_pane_g

0xca39,	// (0x000498a2) control_button_pane_t1

0xca47,	// (0x000498b0) control_button_pane_t2

0x0001,

0xfc14,	// (0x0004ca7d) control_button_pane_t

0x99b0,	// (0x00046819) bg_button_pane_g1

0x99b8,	// (0x00046821) bg_button_pane_g2

0x99c0,	// (0x00046829) bg_button_pane_g3

0x99c8,	// (0x00046831) bg_button_pane_g4

0x99d0,	// (0x00046839) bg_button_pane_g5

0x99d8,	// (0x00046841) bg_button_pane_g6

0x99e0,	// (0x00046849) bg_button_pane_g7

0x99e8,	// (0x00046851) bg_button_pane_g8

0x99f0,	// (0x00046859) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004c6e5) bg_button_pane_g

0xc01b,	// (0x00048e84) common_borders_pane_ParamLimits

0xc01b,	// (0x00048e84) common_borders_pane

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy1_ParamLimits

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy1

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy1_ParamLimits

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy1

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy1_ParamLimits

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy1

0xca00,	// (0x00049869) eswt_control_pane_g4_copy1_ParamLimits

0xca00,	// (0x00049869) eswt_control_pane_g4_copy1

0xc056,	// (0x00048ebf) bg_eswt_ctrl_canvas_pane_g1

0xc01b,	// (0x00048e84) common_borders_pane_cp2_ParamLimits

0xc01b,	// (0x00048e84) common_borders_pane_cp2

0xc01b,	// (0x00048e84) common_borders_pane_cp3_ParamLimits

0xc01b,	// (0x00048e84) common_borders_pane_cp3

0xca55,	// (0x000498be) separator_horizontal_pane

0xca5d,	// (0x000498c6) separator_vertical_pane

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy2_ParamLimits

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy2

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy2_ParamLimits

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy2

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy2_ParamLimits

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy2

0xca00,	// (0x00049869) eswt_control_pane_g4_copy2_ParamLimits

0xca00,	// (0x00049869) eswt_control_pane_g4_copy2

0x2c12,	// (0x0003fa7b) common_borders_pane_cp4

0xca66,	// (0x000498cf) separator_horizontal_pane_g1

0xca6f,	// (0x000498d8) separator_horizontal_pane_g2

0xca78,	// (0x000498e1) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0004ca82) separator_horizontal_pane_g

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy3_ParamLimits

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy3

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy3_ParamLimits

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy3

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy3_ParamLimits

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy3

0xca00,	// (0x00049869) eswt_control_pane_g4_copy3_ParamLimits

0xca00,	// (0x00049869) eswt_control_pane_g4_copy3

0x2c12,	// (0x0003fa7b) common_borders_pane_cp5

0xca81,	// (0x000498ea) separator_vertical_pane_g1

0xca8a,	// (0x000498f3) separator_vertical_pane_g2

0xca93,	// (0x000498fc) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0004ca89) separator_vertical_pane_g

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy4_ParamLimits

0xc9d9,	// (0x00049842) eswt_control_pane_g1_copy4

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy4_ParamLimits

0xc9e6,	// (0x0004984f) eswt_control_pane_g2_copy4

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy4_ParamLimits

0xc9f3,	// (0x0004985c) eswt_control_pane_g3_copy4

0xca00,	// (0x00049869) eswt_control_pane_g4_copy4_ParamLimits

0xca00,	// (0x00049869) eswt_control_pane_g4_copy4

0xca9c,	// (0x00049905) eswt_ctrl_combo_button_pane

0xcaa4,	// (0x0004990d) eswt_ctrl_input_pane

0xcaac,	// (0x00049915) popup_choice_list_window_cp70

0xcab4,	// (0x0004991d) eswt_ctrl_input_pane_t1

0x2c12,	// (0x0003fa7b) input_focus_pane_cp70

0xc01b,	// (0x00048e84) bg_button_pane_cp70_ParamLimits

0xc01b,	// (0x00048e84) bg_button_pane_cp70

0xcac2,	// (0x0004992b) eswt_ctrl_combo_button_pane_g1

0xcaca,	// (0x00049933) wait_bar_pane_cp70

0x9aa2,	// (0x0004690b) bg_popup_window_pane_cp70_ParamLimits

0x9aa2,	// (0x0004690b) bg_popup_window_pane_cp70

0xcad2,	// (0x0004993b) popup_eswt_tasktip_window_t1

0xcae8,	// (0x00049951) wait_bar_pane_cp71_ParamLimits

0xcae8,	// (0x00049951) wait_bar_pane_cp71

0xcaf4,	// (0x0004995d) grid_eswt_app_pane

0x8345,	// (0x000451ae) scroll_pane_cp70

0xcafd,	// (0x00049966) cell_eswt_app_pane_ParamLimits

0xcafd,	// (0x00049966) cell_eswt_app_pane

0xcb2f,	// (0x00049998) cell_eswt_app_pane_g1_ParamLimits

0xcb2f,	// (0x00049998) cell_eswt_app_pane_g1

0xcb5e,	// (0x000499c7) cell_eswt_app_pane_g2_ParamLimits

0xcb5e,	// (0x000499c7) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0004ca90) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0004ca90) cell_eswt_app_pane_g

0xcb87,	// (0x000499f0) cell_eswt_app_pane_t1_ParamLimits

0xcb87,	// (0x000499f0) cell_eswt_app_pane_t1

0xcbb9,	// (0x00049a22) grid_highlight_pane_cp70_ParamLimits

0xcbb9,	// (0x00049a22) grid_highlight_pane_cp70

0xaf33,	// (0x00047d9c) set_content_pane_g1

0x8da6,	// (0x00045c0f) status_small_volume_pane

0x6c00,	// (0x00043a69) status_small_volume_pane_g1

0x6c08,	// (0x00043a71) volume_small2_pane

0x6c11,	// (0x00043a7a) volume_small2_pane_g1

0x6c1a,	// (0x00043a83) volume_small2_pane_g2

0x6c23,	// (0x00043a8c) volume_small2_pane_g3

0x6c2c,	// (0x00043a95) volume_small2_pane_g4

0x6c35,	// (0x00043a9e) volume_small2_pane_g5

0x6c3e,	// (0x00043aa7) volume_small2_pane_g6

0x6c47,	// (0x00043ab0) volume_small2_pane_g7

0x6c50,	// (0x00043ab9) volume_small2_pane_g8

0x6c59,	// (0x00043ac2) volume_small2_pane_g9

0x6c62,	// (0x00043acb) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0004ca95) volume_small2_pane_g

0xc434,	// (0x0004929d) fep_vkb_top_text_pane_g1_ParamLimits

0xc44f,	// (0x000492b8) fep_vkb_top_text_pane_t1_ParamLimits

0xc6c7,	// (0x00049530) popup_preview_fixed_window_g3_ParamLimits

0xc6c7,	// (0x00049530) popup_preview_fixed_window_g3

0x93cb,	// (0x00046234) popup_toolbar_trans_pane

0xadd8,	// (0x00047c41) aid_height_set_list_ParamLimits

0xade9,	// (0x00047c52) aid_size_parent_ParamLimits

0x8e74,	// (0x00045cdd) list_highlight_pane_cp2_ParamLimits

0xaf33,	// (0x00047d9c) set_content_pane_g1_ParamLimits

0xb03c,	// (0x00047ea5) list_single_image_pane_ParamLimits

0xb03c,	// (0x00047ea5) list_single_image_pane

0xcbc5,	// (0x00049a2e) aid_size_cell_image_ParamLimits

0xcbc5,	// (0x00049a2e) aid_size_cell_image

0xcbd2,	// (0x00049a3b) grid_single_image_pane_ParamLimits

0xcbd2,	// (0x00049a3b) grid_single_image_pane

0x7eb2,	// (0x00044d1b) list_single_image_pane_g1_ParamLimits

0x7eb2,	// (0x00044d1b) list_single_image_pane_g1

0x7ebe,	// (0x00044d27) list_single_image_pane_g2_ParamLimits

0x7ebe,	// (0x00044d27) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0004caaa) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0004caaa) list_single_image_pane_g

0xcbe0,	// (0x00049a49) list_single_image_pane_t1_ParamLimits

0xcbe0,	// (0x00049a49) list_single_image_pane_t1

0xcbf6,	// (0x00049a5f) cell_image_list_pane_ParamLimits

0xcbf6,	// (0x00049a5f) cell_image_list_pane

0xcc0c,	// (0x00049a75) cell_image_list_pane_g1

0xcc15,	// (0x00049a7e) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0004caaf) cell_image_list_pane_g

0xcc1e,	// (0x00049a87) aid_size_cell_tb_trans_pane

0x7e98,	// (0x00044d01) bg_tb_trans_pane

0xcc30,	// (0x00049a99) grid_tb_trans_pane

0x99b0,	// (0x00046819) bg_tb_trans_pane_g1

0x99b8,	// (0x00046821) bg_tb_trans_pane_g2

0x99c0,	// (0x00046829) bg_tb_trans_pane_g3

0x99c8,	// (0x00046831) bg_tb_trans_pane_g4

0x99d0,	// (0x00046839) bg_tb_trans_pane_g5

0x99e8,	// (0x00046851) bg_tb_trans_pane_g6

0x99f0,	// (0x00046859) bg_tb_trans_pane_g7

0x99d8,	// (0x00046841) bg_tb_trans_pane_g8

0x99e0,	// (0x00046849) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0004cab4) bg_tb_trans_pane_g

0xcc44,	// (0x00049aad) cell_toolbar_trans_pane_ParamLimits

0xcc44,	// (0x00049aad) cell_toolbar_trans_pane

0xc056,	// (0x00048ebf) cell_toolbar_trans_pane_g1

0xbc77,	// (0x00048ae0) list_form2_midp_pane_t1

0xbc85,	// (0x00048aee) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0004c95d) list_form2_midp_pane_t

0xbc93,	// (0x00048afc) scroll_pane_cp51_ParamLimits

0xbe5a,	// (0x00048cc3) form2_midp_wait_pane_g1

0xbe63,	// (0x00048ccc) form2_midp_wait_pane_g2

0xbe6c,	// (0x00048cd5) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0004c972) form2_midp_wait_pane_g

0x7605,	// (0x0004446e) list_highlight_pane_cp21_ParamLimits

0xbeb0,	// (0x00048d19) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbebf,	// (0x00048d28) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaff5,	// (0x00047e5e) list_single_2graphic_im_pane_ParamLimits

0xaff5,	// (0x00047e5e) list_single_2graphic_im_pane

0xcc6a,	// (0x00049ad3) list_single_2graphic_im_pane_g1_ParamLimits

0xcc6a,	// (0x00049ad3) list_single_2graphic_im_pane_g1

0xcc7b,	// (0x00049ae4) list_single_2graphic_im_pane_g2_ParamLimits

0xcc7b,	// (0x00049ae4) list_single_2graphic_im_pane_g2

0xcc87,	// (0x00049af0) list_single_2graphic_im_pane_g3_ParamLimits

0xcc87,	// (0x00049af0) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0004cac7) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0004cac7) list_single_2graphic_im_pane_g

0xcca7,	// (0x00049b10) list_single_2graphic_im_pane_t1_ParamLimits

0xcca7,	// (0x00049b10) list_single_2graphic_im_pane_t1

0xc6d3,	// (0x0004953c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6d3,	// (0x0004953c) list_single_graphic_2heading_pane_fp

0x55c8,	// (0x00042431) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x55c8,	// (0x00042431) list_single_graphic_2heading_pane_fp_g1

0xc6ec,	// (0x00049555) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6ec,	// (0x00049555) list_single_graphic_2heading_pane_fp_g2

0x5d24,	// (0x00042b8d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5d24,	// (0x00042b8d) list_single_graphic_2heading_pane_fp_g3

0x6ac3,	// (0x0004392c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6ac3,	// (0x0004392c) list_single_graphic_2heading_pane_fp_g4

0xc6f8,	// (0x00049561) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6f8,	// (0x00049561) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004c9f5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004c9f5) list_single_graphic_2heading_pane_fp_g

0x5711,	// (0x0004257a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5711,	// (0x0004257a) list_single_graphic_2heading_pane_fp_t1

0x5600,	// (0x00042469) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5600,	// (0x00042469) list_single_graphic_2heading_pane_fp_t2

0x5727,	// (0x00042590) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5727,	// (0x00042590) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0004cad0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0004cad0) list_single_graphic_2heading_pane_fp_t

0xc0f6,	// (0x00048f5f) fep_hwr_write_pane_g5_ParamLimits

0xc0f6,	// (0x00048f5f) fep_hwr_write_pane_g5

0xc102,	// (0x00048f6b) fep_hwr_write_pane_g6_ParamLimits

0xc102,	// (0x00048f6b) fep_hwr_write_pane_g6

0xc9a8,	// (0x00049811) eswt_shell_pane_ParamLimits

0x9aa2,	// (0x0004690b) bg_popup_window_pane_cp18_ParamLimits

0xad2f,	// (0x00047b98) heading_pane_cp70

0xcad2,	// (0x0004993b) popup_eswt_tasktip_window_t1_ParamLimits

0x94fe,	// (0x00046367) aid_touch_tab_arrow_left

0x950d,	// (0x00046376) aid_touch_tab_arrow_right

0x7559,	// (0x000443c2) title_pane_g3_ParamLimits

0x7559,	// (0x000443c2) title_pane_g3

0x7e57,	// (0x00044cc0) set_value_pane_g1

0x93cb,	// (0x00046234) popup_toolbar_trans_pane_ParamLimits

0xcc1e,	// (0x00049a87) aid_size_cell_tb_trans_pane_ParamLimits

0x7e98,	// (0x00044d01) bg_tb_trans_pane_ParamLimits

0xcc30,	// (0x00049a99) grid_tb_trans_pane_ParamLimits

0x788f,	// (0x000446f8) cont_note_pane_ParamLimits

0x788f,	// (0x000446f8) cont_note_pane

0x7bfd,	// (0x00044a66) cont_snote2_single_text_pane_ParamLimits

0x7bfd,	// (0x00044a66) cont_snote2_single_text_pane

0x7bfd,	// (0x00044a66) cont_snote2_single_graphic_pane_ParamLimits

0x7bfd,	// (0x00044a66) cont_snote2_single_graphic_pane

0xa056,	// (0x00046ebf) cont_note_wait_pane_ParamLimits

0xa056,	// (0x00046ebf) cont_note_wait_pane

0xa056,	// (0x00046ebf) cont_note_image_pane_ParamLimits

0xa056,	// (0x00046ebf) cont_note_image_pane

0xccd8,	// (0x00049b41) popup_note2_window_g1_ParamLimits

0xccd8,	// (0x00049b41) popup_note2_window_g1

0xcd09,	// (0x00049b72) popup_note2_window_t1_ParamLimits

0xcd09,	// (0x00049b72) popup_note2_window_t1

0xcd4e,	// (0x00049bb7) popup_note2_window_t2_ParamLimits

0xcd4e,	// (0x00049bb7) popup_note2_window_t2

0xcd93,	// (0x00049bfc) popup_note2_window_t3_ParamLimits

0xcd93,	// (0x00049bfc) popup_note2_window_t3

0xcdd8,	// (0x00049c41) popup_note2_window_t4_ParamLimits

0xcdd8,	// (0x00049c41) popup_note2_window_t4

0x7913,	// (0x0004477c) popup_note2_window_t5_ParamLimits

0x7913,	// (0x0004477c) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0004cadc) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0004cadc) popup_note2_window_t

0xce07,	// (0x00049c70) popup_note2_image_window_g1_ParamLimits

0xce07,	// (0x00049c70) popup_note2_image_window_g1

0xce13,	// (0x00049c7c) popup_note2_image_window_g2_ParamLimits

0xce13,	// (0x00049c7c) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0004cae7) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0004cae7) popup_note2_image_window_g

0xce25,	// (0x00049c8e) popup_note2_image_window_t1_ParamLimits

0xce25,	// (0x00049c8e) popup_note2_image_window_t1

0xce3d,	// (0x00049ca6) popup_note2_image_window_t2_ParamLimits

0xce3d,	// (0x00049ca6) popup_note2_image_window_t2

0xce55,	// (0x00049cbe) popup_note2_image_window_t3_ParamLimits

0xce55,	// (0x00049cbe) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0004caec) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0004caec) popup_note2_image_window_t

0xa064,	// (0x00046ecd) popup_note2_wait_window_g1_ParamLimits

0xa064,	// (0x00046ecd) popup_note2_wait_window_g1

0xce71,	// (0x00049cda) popup_note2_wait_window_g2_ParamLimits

0xce71,	// (0x00049cda) popup_note2_wait_window_g2

0xa07c,	// (0x00046ee5) popup_note2_wait_window_g3_ParamLimits

0xa07c,	// (0x00046ee5) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0004caf3) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0004caf3) popup_note2_wait_window_g

0xce7d,	// (0x00049ce6) popup_note2_wait_window_t1_ParamLimits

0xce7d,	// (0x00049ce6) popup_note2_wait_window_t1

0xce9b,	// (0x00049d04) popup_note2_wait_window_t2_ParamLimits

0xce9b,	// (0x00049d04) popup_note2_wait_window_t2

0xceb9,	// (0x00049d22) popup_note2_wait_window_t3_ParamLimits

0xceb9,	// (0x00049d22) popup_note2_wait_window_t3

0xcecb,	// (0x00049d34) popup_note2_wait_window_t4_ParamLimits

0xcecb,	// (0x00049d34) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0004cafa) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0004cafa) popup_note2_wait_window_t

0xcedd,	// (0x00049d46) wait_bar2_pane_ParamLimits

0xcedd,	// (0x00049d46) wait_bar2_pane

0xcef5,	// (0x00049d5e) popup_snote2_single_text_window_g1_ParamLimits

0xcef5,	// (0x00049d5e) popup_snote2_single_text_window_g1

0xcf1d,	// (0x00049d86) popup_snote2_single_text_window_t1_ParamLimits

0xcf1d,	// (0x00049d86) popup_snote2_single_text_window_t1

0xcf69,	// (0x00049dd2) popup_snote2_single_text_window_t2_ParamLimits

0xcf69,	// (0x00049dd2) popup_snote2_single_text_window_t2

0xcfb5,	// (0x00049e1e) popup_snote2_single_text_window_t3_ParamLimits

0xcfb5,	// (0x00049e1e) popup_snote2_single_text_window_t3

0xcff6,	// (0x00049e5f) popup_snote2_single_text_window_t4_ParamLimits

0xcff6,	// (0x00049e5f) popup_snote2_single_text_window_t4

0xd02c,	// (0x00049e95) popup_snote2_single_text_window_t5_ParamLimits

0xd02c,	// (0x00049e95) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0004cb03) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0004cb03) popup_snote2_single_text_window_t

0xd057,	// (0x00049ec0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd057,	// (0x00049ec0) popup_snote2_single_graphic_window_g1

0xd07f,	// (0x00049ee8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd07f,	// (0x00049ee8) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0004cb0e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0004cb0e) popup_snote2_single_graphic_window_g

0xd0a7,	// (0x00049f10) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0a7,	// (0x00049f10) popup_snote2_single_graphic_window_t1

0xd0f3,	// (0x00049f5c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0f3,	// (0x00049f5c) popup_snote2_single_graphic_window_t2

0xcfb5,	// (0x00049e1e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfb5,	// (0x00049e1e) popup_snote2_single_graphic_window_t3

0xcff6,	// (0x00049e5f) popup_snote2_single_graphic_window_t4_ParamLimits

0xcff6,	// (0x00049e5f) popup_snote2_single_graphic_window_t4

0xd02c,	// (0x00049e95) popup_snote2_single_graphic_window_t5_ParamLimits

0xd02c,	// (0x00049e95) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0004cb13) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0004cb13) popup_snote2_single_graphic_window_t

0xbb3d,	// (0x000489a6) clock_nsta_pane_cp2_t1

0xbb3d,	// (0x000489a6) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0004c933) clock_nsta_pane_cp2_t

0x5070,	// (0x00041ed9) form_field_data_wide_pane_g1_ParamLimits

0x7eb2,	// (0x00044d1b) form_field_data_wide_pane_g2_ParamLimits

0x7eb2,	// (0x00044d1b) form_field_data_wide_pane_g2

0x7ebe,	// (0x00044d27) form_field_data_wide_pane_g3_ParamLimits

0x7ebe,	// (0x00044d27) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0004c505) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0004c505) form_field_data_wide_pane_g

0xba18,	// (0x00048881) grid_touch_3_pane_ParamLimits

0xba18,	// (0x00048881) grid_touch_3_pane

0xd13f,	// (0x00049fa8) cell_touch_3_pane_ParamLimits

0xd13f,	// (0x00049fa8) cell_touch_3_pane

0xc056,	// (0x00048ebf) cell_touch_3_pane_g1

0xc056,	// (0x00048ebf) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0004c9b8) cell_touch_3_pane_g

0x7945,	// (0x000447ae) cont_query_data_pane

0x794d,	// (0x000447b6) cont_query_data_pane_cp1

0xd172,	// (0x00049fdb) button_value_adjust_pane_cp7

0xd17a,	// (0x00049fe3) query_popup_pane_cp3

0x85d2,	// (0x0004543b) bg_popup_sub_pane_cp22_ParamLimits

0x5f9e,	// (0x00042e07) navi_navi_volume_pane_cp2

0x5fb9,	// (0x00042e22) popup_side_volume_key_window_g2

0x5fc8,	// (0x00042e31) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004c597) popup_side_volume_key_window_g

0x5fe5,	// (0x00042e4e) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004c59e) popup_side_volume_key_window_t

0x888d,	// (0x000456f6) popup_side_volume_key_window_ParamLimits

0x4c63,	// (0x00041acc) list_double_graphic_pane_g4_ParamLimits

0x4c63,	// (0x00041acc) list_double_graphic_pane_g4

0xb024,	// (0x00047e8d) list_single_2heading_msg_pane_ParamLimits

0xb024,	// (0x00047e8d) list_single_2heading_msg_pane

0x6c6b,	// (0x00043ad4) list_single_2heading_msg_pane_g1_ParamLimits

0x6c6b,	// (0x00043ad4) list_single_2heading_msg_pane_g1

0x7e33,	// (0x00044c9c) list_single_2heading_msg_pane_g2_ParamLimits

0x7e33,	// (0x00044c9c) list_single_2heading_msg_pane_g2

0x6c77,	// (0x00043ae0) list_single_2heading_msg_pane_g3_ParamLimits

0x6c77,	// (0x00043ae0) list_single_2heading_msg_pane_g3

0x6c83,	// (0x00043aec) list_single_2heading_msg_pane_g4_ParamLimits

0x6c83,	// (0x00043aec) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0004cb1e) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0004cb1e) list_single_2heading_msg_pane_g

0x5747,	// (0x000425b0) list_single_2heading_msg_pane_t1_ParamLimits

0x5747,	// (0x000425b0) list_single_2heading_msg_pane_t1

0x576f,	// (0x000425d8) list_single_2heading_msg_pane_t2_ParamLimits

0x576f,	// (0x000425d8) list_single_2heading_msg_pane_t2

0x579e,	// (0x00042607) list_single_2heading_msg_pane_t3_ParamLimits

0x579e,	// (0x00042607) list_single_2heading_msg_pane_t3

0x57d7,	// (0x00042640) list_single_2heading_msg_pane_t4_ParamLimits

0x57d7,	// (0x00042640) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0004cb27) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0004cb27) list_single_2heading_msg_pane_t

0x2c30,	// (0x0003fa99) title_pane_g4_ParamLimits

0x2c30,	// (0x0003fa99) title_pane_g4

0x5daa,	// (0x00042c13) title_pane_stacon_g3_ParamLimits

0x5daa,	// (0x00042c13) title_pane_stacon_g3

0xcc9b,	// (0x00049b04) list_single_2graphic_im_pane_g4_ParamLimits

0xcc9b,	// (0x00049b04) list_single_2graphic_im_pane_g4

0xaacc,	// (0x00047935) popup_side_volume_key_window_cp

0xb342,	// (0x000481ab) main_idle_act2_pane_t1

0x639a,	// (0x00043203) toolbar_button_pane_g10

0x7df5,	// (0x00044c5e) popup_toolbar_window_cp1

0xbb2e,	// (0x00048997) clock_nsta_pane_cp_t1

0xbb2e,	// (0x00048997) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0004c92e) clock_nsta_pane_cp_t

0x5f9e,	// (0x00042e07) navi_navi_volume_pane_cp2_ParamLimits

0x5fad,	// (0x00042e16) popup_side_volume_key_window_g1_ParamLimits

0x5fb9,	// (0x00042e22) popup_side_volume_key_window_g2_ParamLimits

0x5fc8,	// (0x00042e31) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004c597) popup_side_volume_key_window_g_ParamLimits

0x685d,	// (0x000436c6) fep_hwr_aid_pane

0x2be2,	// (0x0003fa4b) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c6,	// (0x00048f2f) fep_hwr_top_pane_g1_ParamLimits

0xc0d8,	// (0x00048f41) fep_hwr_top_pane_g2_ParamLimits

0x6918,	// (0x00043781) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0004c983) fep_hwr_top_pane_g_ParamLimits

0x692d,	// (0x00043796) fep_hwr_top_text_pane_ParamLimits

0xa881,	// (0x000476ea) aid_touch_tab_arrow_arrow_2

0xa88a,	// (0x000476f3) aid_touch_tab_arrow_left_2

0x6871,	// (0x000436da) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x68a8,	// (0x00043711) fep_hwr_prediction_pane

0xc22e,	// (0x00049097) fep_vkb_prediction_pane

0xc334,	// (0x0004919d) fep_vkb_side_pane_g3_ParamLimits

0xc334,	// (0x0004919d) fep_vkb_side_pane_g3

0xc2e0,	// (0x00049149) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7b4,	// (0x0004961d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7c1,	// (0x0004962a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x0004ca2d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1a1,	// (0x0004a00a) fep_hwr_prediction_pane_g1

0x6c9b,	// (0x00043b04) fep_hwr_prediction_pane_g2

0x6ca3,	// (0x00043b0c) fep_hwr_prediction_pane_g3

0x6cab,	// (0x00043b14) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0004cb30) fep_hwr_prediction_pane_g

0xd1a1,	// (0x0004a00a) fep_vkb_prediction_pane_g1

0xd1ab,	// (0x0004a014) fep_vkb_prediction_pane_g2

0xd1b3,	// (0x0004a01c) fep_vkb_prediction_pane_g3

0xd1bb,	// (0x0004a024) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0004cb39) fep_vkb_prediction_pane_g

0xb6f0,	// (0x00048559) slider_set_pane_g3

0xb704,	// (0x0004856d) slider_set_pane_g4

0xb71c,	// (0x00048585) slider_set_pane_g5

0xb6f0,	// (0x00048559) slider_set_pane_g6

0x668f,	// (0x000434f8) slider_set_pane_g7

0xaf7a,	// (0x00047de3) slider_form_pane_g3

0xaf83,	// (0x00047dec) slider_form_pane_g4

0xaf8b,	// (0x00047df4) slider_form_pane_g5

0xaf7a,	// (0x00047de3) slider_form_pane_g6

0xaf93,	// (0x00047dfc) slider_form_pane_g7

0xb610,	// (0x00048479) slider_set_pane_vc_g3

0xb619,	// (0x00048482) slider_set_pane_vc_g4

0xb622,	// (0x0004848b) slider_set_pane_vc_g5

0xb610,	// (0x00048479) slider_set_pane_vc_g6

0xb62b,	// (0x00048494) slider_set_pane_vc_g7

0xb610,	// (0x00048479) slider_form_pane_vc_g1

0xb619,	// (0x00048482) slider_form_pane_vc_g2

0xb622,	// (0x0004848b) slider_form_pane_vc_g3

0xb610,	// (0x00048479) slider_form_pane_vc_g4

0xb822,	// (0x0004868b) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0004c907) slider_form_pane_vc_g

0x2c12,	// (0x0003fa7b) main_idle_act3_pane

0xd1c3,	// (0x0004a02c) ai3_links_pane

0xd1cc,	// (0x0004a035) popup_ai3_data_window_ParamLimits

0xd1cc,	// (0x0004a035) popup_ai3_data_window

0x2c12,	// (0x0003fa7b) grid_ai3_links_pane

0xd1ea,	// (0x0004a053) cell_ai3_links_pane_ParamLimits

0xd1ea,	// (0x0004a053) cell_ai3_links_pane

0xd204,	// (0x0004a06d) bg_popup_sub_pane_cp11

0xd211,	// (0x0004a07a) cell_ai3_links_pane_g1

0x2c12,	// (0x0003fa7b) bg_popup_sub_pane_cp12

0xd236,	// (0x0004a09f) heading_ai3_data_pane

0xd23e,	// (0x0004a0a7) list_ai3_gene_pane

0xd24a,	// (0x0004a0b3) popup_ai3_data_window_g1

0xd252,	// (0x0004a0bb) heading_ai3_data_pane_g1

0xd25a,	// (0x0004a0c3) heading_ai3_data_pane_t1

0xd268,	// (0x0004a0d1) list_double_ai3_gene_pane_ParamLimits

0xd268,	// (0x0004a0d1) list_double_ai3_gene_pane

0xd275,	// (0x0004a0de) list_single_ai3_gene_pane_ParamLimits

0xd275,	// (0x0004a0de) list_single_ai3_gene_pane

0xc01b,	// (0x00048e84) list_highlight_pane_cp7_ParamLimits

0xc01b,	// (0x00048e84) list_highlight_pane_cp7

0xd282,	// (0x0004a0eb) list_single_a13_gene_pane_t1_ParamLimits

0xd282,	// (0x0004a0eb) list_single_a13_gene_pane_t1

0xd299,	// (0x0004a102) list_single_ai3_gene_pane_g1

0xd2a2,	// (0x0004a10b) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0004cb42) list_single_ai3_gene_pane_g

0xd2aa,	// (0x0004a113) list_double_ai3_gene_pane_g1_ParamLimits

0xd2aa,	// (0x0004a113) list_double_ai3_gene_pane_g1

0xd2b6,	// (0x0004a11f) list_double_ai3_gene_pane_t1_ParamLimits

0xd2b6,	// (0x0004a11f) list_double_ai3_gene_pane_t1

0xd2d2,	// (0x0004a13b) list_double_ai3_gene_pane_t2_ParamLimits

0xd2d2,	// (0x0004a13b) list_double_ai3_gene_pane_t2

0xd2e7,	// (0x0004a150) list_double_ai3_gene_pane_t3_ParamLimits

0xd2e7,	// (0x0004a150) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0004cb47) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0004cb47) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x573d,	// (0x000425a6) aid_size_min_col_2

0xd18b,	// (0x00049ff4) aid_size_min_msg_ParamLimits

0xd18b,	// (0x00049ff4) aid_size_min_msg

0xc440,	// (0x000492a9) fep_vkb_top_text_pane_g2_ParamLimits

0xc440,	// (0x000492a9) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0004c9b3) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0004c9b3) fep_vkb_top_text_pane_g

0x2c12,	// (0x0003fa7b) main_hc_apps_shell_pane

0xd304,	// (0x0004a16d) grid_hc_apps_pane_ParamLimits

0xd304,	// (0x0004a16d) grid_hc_apps_pane

0xd313,	// (0x0004a17c) list_hc_apps_pane

0xd31b,	// (0x0004a184) scroll_pane_cp37_ParamLimits

0xd31b,	// (0x0004a184) scroll_pane_cp37

0xd327,	// (0x0004a190) cell_hc_apps_pane_ParamLimits

0xd327,	// (0x0004a190) cell_hc_apps_pane

0xd3df,	// (0x0004a248) cell_hc_apps_pane_g1_ParamLimits

0xd3df,	// (0x0004a248) cell_hc_apps_pane_g1

0xd410,	// (0x0004a279) cell_hc_apps_pane_g2_ParamLimits

0xd410,	// (0x0004a279) cell_hc_apps_pane_g2

0xd42c,	// (0x0004a295) cell_hc_apps_pane_g3_ParamLimits

0xd42c,	// (0x0004a295) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0004cb4e) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0004cb4e) cell_hc_apps_pane_g

0xd44e,	// (0x0004a2b7) cell_hc_apps_pane_t1_ParamLimits

0xd44e,	// (0x0004a2b7) cell_hc_apps_pane_t1

0x788f,	// (0x000446f8) grid_highlight_pane_cp10_ParamLimits

0x788f,	// (0x000446f8) grid_highlight_pane_cp10

0xd48e,	// (0x0004a2f7) list_single_hc_apps_pane_ParamLimits

0xd48e,	// (0x0004a2f7) list_single_hc_apps_pane

0xd4cd,	// (0x0004a336) list_single_hc_apps_pane_g1

0x6cb3,	// (0x00043b1c) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0004cb55) list_single_hc_apps_pane_g

0x6ccc,	// (0x00043b35) list_single_hc_apps_pane_g2_copy1

0x57fc,	// (0x00042665) list_single_hc_apps_pane_t1

0x7605,	// (0x0004446e) bg_set_opt_pane_cp_ParamLimits

0x5c2b,	// (0x00042a94) setting_slider_pane_t1_ParamLimits

0x5c41,	// (0x00042aaa) setting_slider_pane_t2_ParamLimits

0x5c5b,	// (0x00042ac4) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004c3e3) setting_slider_pane_t_ParamLimits

0x5c73,	// (0x00042adc) slider_set_pane_ParamLimits

0x626a,	// (0x000430d3) control_pane_g5_ParamLimits

0x626a,	// (0x000430d3) control_pane_g5

0xad9b,	// (0x00047c04) slider_set_pane_g1_ParamLimits

0x6683,	// (0x000434ec) slider_set_pane_g2_ParamLimits

0xb6f0,	// (0x00048559) slider_set_pane_g3_ParamLimits

0xb704,	// (0x0004856d) slider_set_pane_g4_ParamLimits

0xb71c,	// (0x00048585) slider_set_pane_g5_ParamLimits

0xb6f0,	// (0x00048559) slider_set_pane_g6_ParamLimits

0x668f,	// (0x000434f8) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004c7e3) slider_set_pane_g_ParamLimits

0x8972,	// (0x000457db) navi_icon_text_pane_ParamLimits

0x94bd,	// (0x00046326) aid_fill_nsta_2_ParamLimits

0x94fe,	// (0x00046367) aid_touch_tab_arrow_left_ParamLimits

0x950d,	// (0x00046376) aid_touch_tab_arrow_right_ParamLimits

0x957a,	// (0x000463e3) clock_nsta_pane_ParamLimits

0xa85d,	// (0x000476c6) navi_icon_pane_g1_ParamLimits

0xa86c,	// (0x000476d5) navi_text_pane_t1_ParamLimits

0xbc4b,	// (0x00048ab4) navi_icon_text_pane_g1_ParamLimits

0xbc5a,	// (0x00048ac3) navi_icon_text_pane_t1_ParamLimits

0xd4cd,	// (0x0004a336) list_single_hc_apps_pane_g1_ParamLimits

0x6cb3,	// (0x00043b1c) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0004cb55) list_single_hc_apps_pane_g_ParamLimits

0x6ccc,	// (0x00043b35) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x57fc,	// (0x00042665) list_single_hc_apps_pane_t1_ParamLimits

0x5b35,	// (0x0004299e) popup_toolbar2_fixed_window_ParamLimits

0x5b35,	// (0x0004299e) popup_toolbar2_fixed_window

0x93c1,	// (0x0004622a) popup_toolbar2_float_window

0x2c12,	// (0x0003fa7b) bg_popup_sub_pane_cp27

0xd4e6,	// (0x0004a34f) grid_toolbar2_float_pane

0x2c12,	// (0x0003fa7b) bg_popup_sub_pane_cp26

0xd4e6,	// (0x0004a34f) grid_toolbar2_fixed_pane

0xd4ee,	// (0x0004a357) cell_toolbar2_fixed_pane_ParamLimits

0xd4ee,	// (0x0004a357) cell_toolbar2_fixed_pane

0xd4fe,	// (0x0004a367) cell_toolbar2_fixed_pane_g1

0xd507,	// (0x0004a370) toolbar2_fixed_button_pane

0x99b0,	// (0x00046819) toolbar2_fixed_button_pane_g1

0x99b8,	// (0x00046821) toolbar2_fixed_button_pane_g2

0x99c0,	// (0x00046829) toolbar2_fixed_button_pane_g3

0x99c8,	// (0x00046831) toolbar2_fixed_button_pane_g4

0x99d0,	// (0x00046839) toolbar2_fixed_button_pane_g5

0x99d8,	// (0x00046841) toolbar2_fixed_button_pane_g6

0x99e0,	// (0x00046849) toolbar2_fixed_button_pane_g7

0x99e8,	// (0x00046851) toolbar2_fixed_button_pane_g8

0x99f0,	// (0x00046859) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004c6e5) toolbar2_fixed_button_pane_g

0xd50f,	// (0x0004a378) cell_toolbar2_float_pane_ParamLimits

0xd50f,	// (0x0004a378) cell_toolbar2_float_pane

0xd520,	// (0x0004a389) cell_toolbar2_float_pane_g1

0xd507,	// (0x0004a370) toolbar2_fixed_button_pane_cp

0xc19c,	// (0x00049005) fep_vkb_accented_list_pane_ParamLimits

0xc19c,	// (0x00049005) fep_vkb_accented_list_pane

0x6a8f,	// (0x000438f8) bg_popup_fep_shadow_pane_g9

0x8af6,	// (0x0004595f) bg_popup_fep_shadow_pane_cp3

0x8001,	// (0x00044e6a) list_accented_list_pane

0xd529,	// (0x0004a392) list_single_accented_list_pane_ParamLimits

0xd529,	// (0x0004a392) list_single_accented_list_pane

0x8af6,	// (0x0004595f) list_highlight_pane_cp10

0xd53a,	// (0x0004a3a3) list_single_accented_list_pane_t1

0x9307,	// (0x00046170) popup_slider_window_ParamLimits

0x9307,	// (0x00046170) popup_slider_window

0xd182,	// (0x00049feb) aid_indentation_list_msg

0xd606,	// (0x0004a46f) bg_popup_window_pane_cp19

0xd674,	// (0x0004a4dd) popup_slider_window_g1

0xd690,	// (0x0004a4f9) popup_slider_window_g2

0xd6ac,	// (0x0004a515) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0004cb5a) popup_slider_window_g

0xd708,	// (0x0004a571) popup_slider_window_t1

0xd77c,	// (0x0004a5e5) small_volume_slider_vertical_pane

0xc056,	// (0x00048ebf) small_volume_slider_vertical_pane_g1

0xc056,	// (0x00048ebf) small_volume_slider_vertical_pane_g2

0xd798,	// (0x0004a601) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0004cb6c) small_volume_slider_vertical_pane_g

0x58ed,	// (0x00042756) area_side_right_pane_ParamLimits

0x58ed,	// (0x00042756) area_side_right_pane

0x6ce8,	// (0x00043b51) aid_size_side_button_ParamLimits

0x6ce8,	// (0x00043b51) aid_size_side_button

0x6cfc,	// (0x00043b65) grid_sctrl_middle_pane_ParamLimits

0x6cfc,	// (0x00043b65) grid_sctrl_middle_pane

0x6d1c,	// (0x00043b85) sctrl_sk_bottom_pane

0x6d2d,	// (0x00043b96) sctrl_sk_top_pane

0x6d3f,	// (0x00043ba8) aid_touch_sctrl_top

0x788f,	// (0x000446f8) bg_sctrl_sk_pane_ParamLimits

0x788f,	// (0x000446f8) bg_sctrl_sk_pane

0x6d4c,	// (0x00043bb5) sctrl_sk_top_pane_g1

0x6d59,	// (0x00043bc2) sctrl_sk_top_pane_t1

0x6d3f,	// (0x00043ba8) aid_touch_sctrl_bottom

0x788f,	// (0x000446f8) bg_sctrl_sk_pane_cp_ParamLimits

0x788f,	// (0x000446f8) bg_sctrl_sk_pane_cp

0x6d74,	// (0x00043bdd) sctrl_sk_bottom_pane_g1

0x6d59,	// (0x00043bc2) sctrl_sk_bottom_pane_t1

0x6d7d,	// (0x00043be6) cell_sctrl_middle_pane_ParamLimits

0x6d7d,	// (0x00043be6) cell_sctrl_middle_pane

0x6d9a,	// (0x00043c03) aid_touch_sctrl_middle_ParamLimits

0x6d9a,	// (0x00043c03) aid_touch_sctrl_middle

0x7e98,	// (0x00044d01) bg_sctrl_middle_pane_ParamLimits

0x7e98,	// (0x00044d01) bg_sctrl_middle_pane

0xc2e0,	// (0x00049149) cell_sctrl_middle_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) cell_sctrl_middle_pane_g1

0x6dac,	// (0x00043c15) cell_sctrl_middle_pane_g2_ParamLimits

0x6dac,	// (0x00043c15) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0004cb78) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0004cb78) cell_sctrl_middle_pane_g

0x99b0,	// (0x00046819) bg_sctrl_middle_pane_g1

0x99b8,	// (0x00046821) bg_sctrl_middle_pane_g2

0x99c0,	// (0x00046829) bg_sctrl_middle_pane_g3

0x99c8,	// (0x00046831) bg_sctrl_middle_pane_g4

0x99d0,	// (0x00046839) bg_sctrl_middle_pane_g5

0x99d8,	// (0x00046841) bg_sctrl_middle_pane_g6

0x99e0,	// (0x00046849) bg_sctrl_middle_pane_g7

0x99e8,	// (0x00046851) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0004cb7d) bg_sctrl_middle_pane_g

0x99f0,	// (0x00046859) bg_sctrl_middle_pane_g8_copy1

0x99b0,	// (0x00046819) bg_sctrl_sk_pane_g1

0x99b8,	// (0x00046821) bg_sctrl_sk_pane_g2

0x99c0,	// (0x00046829) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004c6e5) bg_sctrl_sk_pane_g

0x7dbb,	// (0x00044c24) aid_size_touch_scroll_bar

0x99c8,	// (0x00046831) bg_sctrl_sk_pane_g4

0x99d0,	// (0x00046839) bg_sctrl_sk_pane_g5

0x99d8,	// (0x00046841) bg_sctrl_sk_pane_g6

0x99e0,	// (0x00046849) bg_sctrl_sk_pane_g7

0x99e8,	// (0x00046851) bg_sctrl_sk_pane_g8

0x99f0,	// (0x00046859) bg_sctrl_sk_pane_g9

0x8f1e,	// (0x00045d87) popup_fep_china_hwr2_fs_candidate_window

0x8f28,	// (0x00045d91) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f28,	// (0x00045d91) popup_fep_china_hwr2_fs_control_window

0xc2e0,	// (0x00049149) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0004cb73) sctrl_sk_top_pane_g

0xd7a1,	// (0x0004a60a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7a1,	// (0x0004a60a) aid_fep_china_hwr2_fs_cell

0xd7b4,	// (0x0004a61d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7b4,	// (0x0004a61d) bg_popup_fep_shadow_pane_cp4

0xd7ee,	// (0x0004a657) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7ee,	// (0x0004a657) bg_popup_fep_shadow_pane_cp5

0xd800,	// (0x0004a669) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd800,	// (0x0004a669) popup_fep_china_hwr2_fs_control_bar_grid

0xd810,	// (0x0004a679) popup_fep_china_hwr2_fs_control_funtion_grid

0xd818,	// (0x0004a681) aid_fep_china_hwr2_fs_candi_cell

0x2c12,	// (0x0003fa7b) bg_popup_fep_shadow_pane_cp6

0xd822,	// (0x0004a68b) popup_fep_china_hwr2_fs_candidate_grid

0xd82c,	// (0x0004a695) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd82c,	// (0x0004a695) cell_fep_china_hwr2_fs_funtion_grid

0xc056,	// (0x00048ebf) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd844,	// (0x0004a6ad) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd844,	// (0x0004a6ad) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd852,	// (0x0004a6bb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd852,	// (0x0004a6bb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0004cb8e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0004cb8e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd868,	// (0x0004a6d1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd868,	// (0x0004a6d1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd87d,	// (0x0004a6e6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd87d,	// (0x0004a6e6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0004cb93) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0004cb93) cell_fep_china_hwr2_fs_funtion_grid_t

0xd899,	// (0x0004a702) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8a1,	// (0x0004a70a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8a9,	// (0x0004a712) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0004cb98) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8b1,	// (0x0004a71a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8b1,	// (0x0004a71a) cell_fep_china_hwr2_fs_candidate_grid

0xd8d0,	// (0x0004a739) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8d8,	// (0x0004a741) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc056,	// (0x00048ebf) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc056,	// (0x00048ebf) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0004c9b8) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e0,	// (0x0004a749) cell_fep_china_hwr2_fs_candidate_grid_t1

0x958d,	// (0x000463f6) clock_nsta_pane_cp_24_ParamLimits

0x958d,	// (0x000463f6) clock_nsta_pane_cp_24

0x960d,	// (0x00046476) indicator_nsta_pane_cp_24_ParamLimits

0x960d,	// (0x00046476) indicator_nsta_pane_cp_24

0xa6d9,	// (0x00047542) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004c74a) heading_pane_g

0xb189,	// (0x00047ff2) grid_sct_catagory_button_pane

0xb1bb,	// (0x00048024) scroll_pane_cp5_ParamLimits

0xbc9f,	// (0x00048b08) button_value_adjust_pane_cp5_ParamLimits

0xbc9f,	// (0x00048b08) button_value_adjust_pane_cp5

0xbd84,	// (0x00048bed) form2_midp_time_pane_ParamLimits

0xd8ee,	// (0x0004a757) cell_sct_catagory_button_pane_ParamLimits

0xd8ee,	// (0x0004a757) cell_sct_catagory_button_pane

0xc01b,	// (0x00048e84) bg_button_pane_cp01_ParamLimits

0xc01b,	// (0x00048e84) bg_button_pane_cp01

0xc056,	// (0x00048ebf) cell_sct_catagory_button_pane_g1

0x9348,	// (0x000461b1) popup_tb_extension_window

0xd900,	// (0x0004a769) aid_size_cell_ext_ParamLimits

0xd900,	// (0x0004a769) aid_size_cell_ext

0x788f,	// (0x000446f8) bg_tb_trans_pane_cp1_ParamLimits

0x788f,	// (0x000446f8) bg_tb_trans_pane_cp1

0xd920,	// (0x0004a789) grid_tb_ext_pane_ParamLimits

0xd920,	// (0x0004a789) grid_tb_ext_pane

0xd950,	// (0x0004a7b9) cell_tb_ext_pane_ParamLimits

0xd950,	// (0x0004a7b9) cell_tb_ext_pane

0xd967,	// (0x0004a7d0) cell_tb_ext_pane_g1_ParamLimits

0xd967,	// (0x0004a7d0) cell_tb_ext_pane_g1

0xd984,	// (0x0004a7ed) cell_tb_ext_pane_t1

0x788f,	// (0x000446f8) list_highlight_pane_cp11_ParamLimits

0x788f,	// (0x000446f8) list_highlight_pane_cp11

0x5b54,	// (0x000429bd) popup_uni_indicator_window_ParamLimits

0x5b54,	// (0x000429bd) popup_uni_indicator_window

0x7e98,	// (0x00044d01) bg_popup_sub_pane_cp14

0xd99f,	// (0x0004a808) list_uniindi_pane

0xd9ab,	// (0x0004a814) uniindi_top_pane

0x788f,	// (0x000446f8) bg_uniindi_top_pane

0xd9cc,	// (0x0004a835) uniindi_top_pane_g1

0xd9e2,	// (0x0004a84b) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0004cb9f) uniindi_top_pane_g

0xda0c,	// (0x0004a875) uniindi_top_pane_t1

0xda38,	// (0x0004a8a1) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x0004a8a1) list_single_uniindi_pane

0xc056,	// (0x00048ebf) bg_uniindi_top_pane_g1

0xda4a,	// (0x0004a8b3) list_single_uniindi_pane_g1

0xda5d,	// (0x0004a8c6) list_single_uniindi_pane_t1

0x2c12,	// (0x0003fa7b) control_bg_pane

0xda82,	// (0x0004a8eb) bg_sctrl_sk_pane_cp1

0xda8b,	// (0x0004a8f4) bg_sctrl_sk_pane_cp2

0xda94,	// (0x0004a8fd) control_bg_pane_g1

0xda9d,	// (0x0004a906) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0004cba8) control_bg_pane_g

0xbac2,	// (0x0004892b) cell_indicator_nsta_pane_g1_ParamLimits

0xbad0,	// (0x00048939) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0004c91c) cell_indicator_nsta_pane_g_ParamLimits

0x559e,	// (0x00042407) form2_midp_time_pane_t1_ParamLimits

0x7bfd,	// (0x00044a66) main_idle_act4_pane_ParamLimits

0x7bfd,	// (0x00044a66) main_idle_act4_pane

0x9348,	// (0x000461b1) popup_tb_extension_window_ParamLimits

0xd942,	// (0x0004a7ab) tb_ext_find_pane_ParamLimits

0xd942,	// (0x0004a7ab) tb_ext_find_pane

0xdaa6,	// (0x0004a90f) ai_gene_pane_1_cp1

0x8c3f,	// (0x00045aa8) ai_gene_pane_2_cp1

0xdaae,	// (0x0004a917) list_single_idle_plugin_calendar_pane

0xdab7,	// (0x0004a920) list_single_idle_plugin_notification_pane

0xdac0,	// (0x0004a929) list_single_idle_plugin_player_pane

0xdac9,	// (0x0004a932) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdac9,	// (0x0004a932) list_single_idle_plugin_shortcut_pane

0xdaeb,	// (0x0004a954) main_idle_act4_pane_t1

0xdafd,	// (0x0004a966) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0004cbad) main_idle_act4_pane_t

0xdb0f,	// (0x0004a978) middle_sk_idle_act4_pane_ParamLimits

0xdb0f,	// (0x0004a978) middle_sk_idle_act4_pane

0xdb25,	// (0x0004a98e) popup_clock_digital_analogue_window_cp2

0xdb3f,	// (0x0004a9a8) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb3f,	// (0x0004a9a8) shortcut_wheel_idle_act4_pane

0xc056,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g1

0xc056,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g2

0xc056,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g3

0xc056,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g4

0xc056,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g5

0xdb53,	// (0x0004a9bc) shortcut_wheel_idle_act4_pane_g6

0xdb5b,	// (0x0004a9c4) shortcut_wheel_idle_act4_pane_g7

0xdb63,	// (0x0004a9cc) shortcut_wheel_idle_act4_pane_g8

0xdb6b,	// (0x0004a9d4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0004cbb2) shortcut_wheel_idle_act4_pane_g

0xc2e0,	// (0x00049149) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) middle_sk_idle_act4_pane_g1

0xdbcf,	// (0x0004aa38) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbcf,	// (0x0004aa38) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0004cbd5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0004cbd5) middle_sk_idle_act4_pane_g

0xdbdb,	// (0x0004aa44) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdb,	// (0x0004aa44) middle_sk_idle_act4_pane_t1

0xdbf8,	// (0x0004aa61) grid_ai_shortcut_pane_ParamLimits

0xdbf8,	// (0x0004aa61) grid_ai_shortcut_pane

0xdc11,	// (0x0004aa7a) list_highlight_pane_cp16_ParamLimits

0xdc11,	// (0x0004aa7a) list_highlight_pane_cp16

0xdc1e,	// (0x0004aa87) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1e,	// (0x0004aa87) list_single_idle_plugin_shortcut_pane_g1

0xdc2a,	// (0x0004aa93) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2a,	// (0x0004aa93) list_single_idle_plugin_shortcut_pane_g2

0xdc44,	// (0x0004aaad) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc44,	// (0x0004aaad) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0004cbda) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0004cbda) list_single_idle_plugin_shortcut_pane_g

0xdc57,	// (0x0004aac0) cell_ai_shortcut_pane_ParamLimits

0xdc57,	// (0x0004aac0) cell_ai_shortcut_pane

0xdc7a,	// (0x0004aae3) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x0004aae3) cell_ai_shortcut_pane_g1

0xdaa6,	// (0x0004a90f) ai_gene_pane_1_cp2

0xdc9c,	// (0x0004ab05) ai_gene_pane_2_cp2

0xdca4,	// (0x0004ab0d) list_highlight_pane_cp15

0xdcad,	// (0x0004ab16) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x0004ab0d) list_highlight_pane_cp17

0xdcb5,	// (0x0004ab1e) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x0004ab26) list_single_idle_plugin_player_pane_g1

0xb3f0,	// (0x00048259) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0004cbe1) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x0004ab2e) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x0004ab3c) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x0004ab4a) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x0004ab58) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0004cbe6) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0004ab66) wait_bar_pane_cp15

0xdd05,	// (0x0004ab6e) grid_ai_notification_pane

0xb3f0,	// (0x00048259) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x0004ab77) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x0004ab77) cell_ai_notification_pane

0xdd1b,	// (0x0004ab84) cell_ai_notification_pane_g1

0xdd23,	// (0x0004ab8c) cell_ai_notification_pane_t1

0xdd31,	// (0x0004ab9a) tb_ext_find_button_pane

0xdd39,	// (0x0004aba2) tb_ext_find_pane_g1

0xdd41,	// (0x0004abaa) tb_ext_find_pane_t1

0x8508,	// (0x00045371) tb_ext_find_button_pane_g1

0xdd4f,	// (0x0004abb8) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0004cbef) tb_ext_find_button_pane_g

0xdaeb,	// (0x0004a954) main_idle_act4_pane_t1_ParamLimits

0xdafd,	// (0x0004a966) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0004cbad) main_idle_act4_pane_t_ParamLimits

0xdb25,	// (0x0004a98e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb33,	// (0x0004a99c) sat_plugin_idle_act4_pane_ParamLimits

0xdb33,	// (0x0004a99c) sat_plugin_idle_act4_pane

0xdd58,	// (0x0004abc1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x0004abc1) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x0004abd4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x0004abd4) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x0004abe7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x0004abe7) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x0004abfa) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x0004abfa) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0004cbf4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0004cbf4) sat_plugin_idle_act4_pane_t

0x5a85,	// (0x000428ee) popup_battery_window_ParamLimits

0x5a85,	// (0x000428ee) popup_battery_window

0x788f,	// (0x000446f8) bg_popup_sub_pane_cp25_ParamLimits

0x788f,	// (0x000446f8) bg_popup_sub_pane_cp25

0xdda4,	// (0x0004ac0d) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x0004ac0d) popup_battery_window_g1

0xddb0,	// (0x0004ac19) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x0004ac19) popup_battery_window_t1

0xddc2,	// (0x0004ac2b) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x0004ac2b) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0004cbfd) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0004cbfd) popup_battery_window_t

0x8b0a,	// (0x00045973) midp_canvas_pane_ParamLimits

0x8b81,	// (0x000459ea) midp_keypad_pane_ParamLimits

0x8b81,	// (0x000459ea) midp_keypad_pane

0x8e74,	// (0x00045cdd) main_midp_pane_ParamLimits

0xbb4c,	// (0x000489b5) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x0004ac48) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x0004ac48) aid_size_cell_midp_keypad

0xddf9,	// (0x0004ac62) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x0004ac62) midp_keyp_game_grid_pane

0xde19,	// (0x0004ac82) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x0004ac82) midp_keyp_rocker_pane

0xde48,	// (0x0004acb1) midp_keyp_sk_left_pane_ParamLimits

0xde48,	// (0x0004acb1) midp_keyp_sk_left_pane

0xdea2,	// (0x0004ad0b) midp_keyp_sk_right_pane_ParamLimits

0xdea2,	// (0x0004ad0b) midp_keyp_sk_right_pane

0x2c12,	// (0x0003fa7b) bg_button_pane_cp03

0xdefc,	// (0x0004ad65) midp_keyp_sk_left_pane_g1

0x2c12,	// (0x0003fa7b) bg_button_pane_cp04

0xdefc,	// (0x0004ad65) midp_keyp_sk_right_pane_g1

0xc056,	// (0x00048ebf) midp_keyp_rocker_pane_g1

0xdf05,	// (0x0004ad6e) keyp_game_cell_pane_ParamLimits

0xdf05,	// (0x0004ad6e) keyp_game_cell_pane

0x2c12,	// (0x0003fa7b) bg_button_pane_cp02

0xdf18,	// (0x0004ad81) keyp_game_cell_pane_g1

0x5acf,	// (0x00042938) popup_fep_vkb2_window_ParamLimits

0x5acf,	// (0x00042938) popup_fep_vkb2_window

0x6dce,	// (0x00043c37) aid_size_cell_vkb2_ParamLimits

0x6dce,	// (0x00043c37) aid_size_cell_vkb2

0x6e1a,	// (0x00043c83) popup_fep_vkb2_window_g1_ParamLimits

0x6e1a,	// (0x00043c83) popup_fep_vkb2_window_g1

0x6e62,	// (0x00043ccb) vkb2_area_bottom_pane_ParamLimits

0x6e62,	// (0x00043ccb) vkb2_area_bottom_pane

0x6eb6,	// (0x00043d1f) vkb2_area_keypad_pane_ParamLimits

0x6eb6,	// (0x00043d1f) vkb2_area_keypad_pane

0x6efc,	// (0x00043d65) vkb2_area_top_pane_ParamLimits

0x6efc,	// (0x00043d65) vkb2_area_top_pane

0x6f76,	// (0x00043ddf) vkb2_top_entry_pane_ParamLimits

0x6f76,	// (0x00043ddf) vkb2_top_entry_pane

0x6fa0,	// (0x00043e09) vkb2_top_grid_left_pane_ParamLimits

0x6fa0,	// (0x00043e09) vkb2_top_grid_left_pane

0x6fbe,	// (0x00043e27) vkb2_top_grid_right_pane_ParamLimits

0x6fbe,	// (0x00043e27) vkb2_top_grid_right_pane

0x6fdc,	// (0x00043e45) vkb2_cell_keypad_pane_ParamLimits

0x6fdc,	// (0x00043e45) vkb2_cell_keypad_pane

0x7092,	// (0x00043efb) vkb2_area_bottom_grid_pane_ParamLimits

0x7092,	// (0x00043efb) vkb2_area_bottom_grid_pane

0x70b8,	// (0x00043f21) vkb2_area_bottom_pane_g1_ParamLimits

0x70b8,	// (0x00043f21) vkb2_area_bottom_pane_g1

0x70dc,	// (0x00043f45) vkb2_area_bottom_pane_g2_ParamLimits

0x70dc,	// (0x00043f45) vkb2_area_bottom_pane_g2

0x710a,	// (0x00043f73) vkb2_area_bottom_pane_g3_ParamLimits

0x710a,	// (0x00043f73) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0004cc02) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0004cc02) vkb2_area_bottom_pane_g

0x716b,	// (0x00043fd4) vkb2_top_cell_left_pane_ParamLimits

0x716b,	// (0x00043fd4) vkb2_top_cell_left_pane

0xdf29,	// (0x0004ad92) vkb2_top_entry_pane_g1_ParamLimits

0xdf29,	// (0x0004ad92) vkb2_top_entry_pane_g1

0xdf37,	// (0x0004ada0) vkb2_top_entry_pane_t1_ParamLimits

0xdf37,	// (0x0004ada0) vkb2_top_entry_pane_t1

0xdf4f,	// (0x0004adb8) vkb2_top_entry_pane_t2_ParamLimits

0xdf4f,	// (0x0004adb8) vkb2_top_entry_pane_t2

0xdf67,	// (0x0004add0) vkb2_top_entry_pane_t3_ParamLimits

0xdf67,	// (0x0004add0) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0004cc09) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0004cc09) vkb2_top_entry_pane_t

0x71b8,	// (0x00044021) vkb2_top_grid_right_pane_g1_ParamLimits

0x71b8,	// (0x00044021) vkb2_top_grid_right_pane_g1

0x71ce,	// (0x00044037) vkb2_top_grid_right_pane_g2_ParamLimits

0x71ce,	// (0x00044037) vkb2_top_grid_right_pane_g2

0x71e6,	// (0x0004404f) vkb2_top_grid_right_pane_g3_ParamLimits

0x71e6,	// (0x0004404f) vkb2_top_grid_right_pane_g3

0x71fe,	// (0x00044067) vkb2_top_grid_right_pane_g4_ParamLimits

0x71fe,	// (0x00044067) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0004cc10) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0004cc10) vkb2_top_grid_right_pane_g

0x7214,	// (0x0004407d) vkb2_top_cell_left_pane_g1

0x722b,	// (0x00044094) vkb2_cell_keypad_pane_g1_ParamLimits

0x722b,	// (0x00044094) vkb2_cell_keypad_pane_g1

0xdf7d,	// (0x0004ade6) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf7d,	// (0x0004ade6) vkb2_cell_keypad_pane_t1

0x724f,	// (0x000440b8) vkb2_cell_bottom_grid_pane_ParamLimits

0x724f,	// (0x000440b8) vkb2_cell_bottom_grid_pane

0x7288,	// (0x000440f1) vkb2_cell_bottom_grid_pane_g1

0xdb73,	// (0x0004a9dc) aid_call2_pane_cp02

0xdb7b,	// (0x0004a9e4) aid_call_pane_cp02

0xdb83,	// (0x0004a9ec) clock_digital_number_pane_cp10

0xdb8b,	// (0x0004a9f4) clock_digital_number_pane_cp11

0xdb93,	// (0x0004a9fc) clock_digital_number_pane_cp12

0xdb9b,	// (0x0004aa04) clock_digital_number_pane_cp13

0xdba3,	// (0x0004aa0c) clock_digital_separator_pane_cp10

0x8508,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g1

0x8508,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g2

0xdbab,	// (0x0004aa14) popup_clock_digital_analogue_window_cp2_g3

0x8508,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g4

0xdbab,	// (0x0004aa14) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0004cbc5) popup_clock_digital_analogue_window_cp2_g

0xdbb3,	// (0x0004aa1c) popup_clock_digital_analogue_window_cp2_t1

0xdbc1,	// (0x0004aa2a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0004cbd0) popup_clock_digital_analogue_window_cp2_t

0xc056,	// (0x00048ebf) clock_digital_number_pane_cp10_g1

0xc056,	// (0x00048ebf) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0004c9b8) clock_digital_number_pane_cp10_g

0xc056,	// (0x00048ebf) clock_digital_separator_pane_cp10_g1

0xc056,	// (0x00048ebf) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0004c9b8) clock_digital_separator_pane_cp10_g

0xd9ee,	// (0x0004a857) uniindi_top_pane_g3

0xd9ff,	// (0x0004a868) uniindi_top_pane_g4

0x704c,	// (0x00043eb5) vkb2_row_keypad_pane_ParamLimits

0x704c,	// (0x00043eb5) vkb2_row_keypad_pane

0x72a4,	// (0x0004410d) vkb2_cell_t_keypad_pane_ParamLimits

0x72a4,	// (0x0004410d) vkb2_cell_t_keypad_pane

0x72b4,	// (0x0004411d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x72b4,	// (0x0004411d) vkb2_cell_t_keypad_pane_cp08

0x72c9,	// (0x00044132) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x72c9,	// (0x00044132) vkb2_cell_t_keypad_pane_cp09

0x72dd,	// (0x00044146) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x72dd,	// (0x00044146) vkb2_cell_t_keypad_pane_cp01

0x72ee,	// (0x00044157) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x72ee,	// (0x00044157) vkb2_cell_t_keypad_pane_cp02

0x72ff,	// (0x00044168) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x72ff,	// (0x00044168) vkb2_cell_t_keypad_pane_cp03

0x7310,	// (0x00044179) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7310,	// (0x00044179) vkb2_cell_t_keypad_pane_cp04

0x7321,	// (0x0004418a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7321,	// (0x0004418a) vkb2_cell_t_keypad_pane_cp05

0x7332,	// (0x0004419b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7332,	// (0x0004419b) vkb2_cell_t_keypad_pane_cp06

0x7345,	// (0x000441ae) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7345,	// (0x000441ae) vkb2_cell_t_keypad_pane_cp07

0x735a,	// (0x000441c3) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x735a,	// (0x000441c3) vkb2_cell_t_keypad_pane_cp10

0xc2e0,	// (0x00049149) vkb2_cell_t_keypad_pane_g1

0xdf94,	// (0x0004adfd) vkb2_cell_t_keypad_pane_t1

0x2c12,	// (0x0003fa7b) popup_grid_graphic2_window

0xdfa6,	// (0x0004ae0f) aid_size_cell_graphic2_ParamLimits

0xdfa6,	// (0x0004ae0f) aid_size_cell_graphic2

0xdfde,	// (0x0004ae47) bg_popup_window_pane_cp21_ParamLimits

0xdfde,	// (0x0004ae47) bg_popup_window_pane_cp21

0xdfec,	// (0x0004ae55) graphic2_pages_pane_ParamLimits

0xdfec,	// (0x0004ae55) graphic2_pages_pane

0xe032,	// (0x0004ae9b) grid_graphic2_control_pane_ParamLimits

0xe032,	// (0x0004ae9b) grid_graphic2_control_pane

0xe070,	// (0x0004aed9) grid_graphic2_pane_ParamLimits

0xe070,	// (0x0004aed9) grid_graphic2_pane

0xe0e6,	// (0x0004af4f) cell_graphic2_pane

0x2c12,	// (0x0003fa7b) main_comp_mode_pane

0xd23e,	// (0x0004a0a7) list_ai3_gene_pane_ParamLimits

0xd606,	// (0x0004a46f) bg_popup_window_pane_cp19_ParamLimits

0xd612,	// (0x0004a47b) bg_touch_area_indi_pane_ParamLimits

0xd612,	// (0x0004a47b) bg_touch_area_indi_pane

0xd628,	// (0x0004a491) bg_touch_area_indi_pane_cp01_ParamLimits

0xd628,	// (0x0004a491) bg_touch_area_indi_pane_cp01

0xd640,	// (0x0004a4a9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd640,	// (0x0004a4a9) bg_touch_area_indi_pane_cp02

0xd65a,	// (0x0004a4c3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd65a,	// (0x0004a4c3) bg_touch_area_indi_pane_cp03

0xd674,	// (0x0004a4dd) popup_slider_window_g1_ParamLimits

0xd690,	// (0x0004a4f9) popup_slider_window_g2_ParamLimits

0xd6ac,	// (0x0004a515) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0004cb5a) popup_slider_window_g_ParamLimits

0xd708,	// (0x0004a571) popup_slider_window_t1_ParamLimits

0xd77c,	// (0x0004a5e5) small_volume_slider_vertical_pane_ParamLimits

0xe0e6,	// (0x0004af4f) cell_graphic2_pane_ParamLimits

0xe138,	// (0x0004afa1) bg_button_pane_cp10_ParamLimits

0xe138,	// (0x0004afa1) bg_button_pane_cp10

0xe14d,	// (0x0004afb6) bg_button_pane_cp11_ParamLimits

0xe14d,	// (0x0004afb6) bg_button_pane_cp11

0xe162,	// (0x0004afcb) graphic2_pages_pane_g1_ParamLimits

0xe162,	// (0x0004afcb) graphic2_pages_pane_g1

0xe17d,	// (0x0004afe6) graphic2_pages_pane_g2_ParamLimits

0xe17d,	// (0x0004afe6) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0004cc1e) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0004cc1e) graphic2_pages_pane_g

0xe195,	// (0x0004affe) graphic2_pages_pane_t1_ParamLimits

0xe195,	// (0x0004affe) graphic2_pages_pane_t1

0xe1ab,	// (0x0004b014) cell_graphic2_control_pane_ParamLimits

0xe1ab,	// (0x0004b014) cell_graphic2_control_pane

0xe1c5,	// (0x0004b02e) cell_graphic2_pane_g1_ParamLimits

0xe1c5,	// (0x0004b02e) cell_graphic2_pane_g1

0xe1d2,	// (0x0004b03b) cell_graphic2_pane_g2_ParamLimits

0xe1d2,	// (0x0004b03b) cell_graphic2_pane_g2

0xe1df,	// (0x0004b048) cell_graphic2_pane_g3_ParamLimits

0xe1df,	// (0x0004b048) cell_graphic2_pane_g3

0xe1ec,	// (0x0004b055) cell_graphic2_pane_g4_ParamLimits

0xe1ec,	// (0x0004b055) cell_graphic2_pane_g4

0xe1f9,	// (0x0004b062) cell_graphic2_pane_g5_ParamLimits

0xe1f9,	// (0x0004b062) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0004cc23) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0004cc23) cell_graphic2_pane_g

0xe214,	// (0x0004b07d) cell_graphic2_pane_t1_ParamLimits

0xe214,	// (0x0004b07d) cell_graphic2_pane_t1

0x9aa2,	// (0x0004690b) grid_highlight_pane_cp11_ParamLimits

0x9aa2,	// (0x0004690b) grid_highlight_pane_cp11

0x788f,	// (0x000446f8) bg_button_pane_cp05

0xe23d,	// (0x0004b0a6) cell_graphic2_control_pane_g1

0xc056,	// (0x00048ebf) bg_touch_area_indi_pane_g1

0xe265,	// (0x0004b0ce) aid_cmod_rocker_key_size

0xe26f,	// (0x0004b0d8) aid_cmode_itu_key_size

0xe279,	// (0x0004b0e2) main_cmode_video_pane

0xe283,	// (0x0004b0ec) main_comp_mode_itu_pane

0xe28f,	// (0x0004b0f8) main_comp_mode_rocker_pane

0xe29b,	// (0x0004b104) cell_cmode_rocker_pane_ParamLimits

0xe29b,	// (0x0004b104) cell_cmode_rocker_pane

0xe2af,	// (0x0004b118) cell_cmode_itu_pane_ParamLimits

0xe2af,	// (0x0004b118) cell_cmode_itu_pane

0x7e98,	// (0x00044d01) bg_button_pane_cp06_ParamLimits

0x7e98,	// (0x00044d01) bg_button_pane_cp06

0xc2e0,	// (0x00049149) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) cell_cmode_rocker_pane_g1

0xd844,	// (0x0004a6ad) cell_cmode_rocker_pane_g2_ParamLimits

0xd844,	// (0x0004a6ad) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0004cc33) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0004cc33) cell_cmode_rocker_pane_g

0x2c12,	// (0x0003fa7b) bg_button_pane_cp07

0xe2c6,	// (0x0004b12f) cell_cmode_itu_pane_g1

0xe2cf,	// (0x0004b138) cell_cmode_itu_pane_t1

0xe2dd,	// (0x0004b146) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0004cc38) cell_cmode_itu_pane_t

0xda72,	// (0x0004a8db) aid_touch_ctrl_left

0xda7a,	// (0x0004a8e3) aid_touch_ctrl_right

0x2c12,	// (0x0003fa7b) compa_mode_pane

0xe2eb,	// (0x0004b154) aid_cmod_rocker_key_size_cp

0xe2f5,	// (0x0004b15e) aid_cmode_itu_key_size_cp

0xe2ff,	// (0x0004b168) compa_mode_pane_g1

0xe307,	// (0x0004b170) compa_mode_pane_g2

0xe30f,	// (0x0004b178) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0004cc3d) compa_mode_pane_g

0xe317,	// (0x0004b180) main_comp_mode_itu_pane_cp

0xe31f,	// (0x0004b188) main_comp_mode_rocker_pane_cp

0xe327,	// (0x0004b190) cell_cmode_itu_pane_cp_ParamLimits

0xe327,	// (0x0004b190) cell_cmode_itu_pane_cp

0xe33c,	// (0x0004b1a5) cell_cmode_rocker_pane_cp_ParamLimits

0xe33c,	// (0x0004b1a5) cell_cmode_rocker_pane_cp

0x7e98,	// (0x00044d01) bg_button_pane_cp06_cp_ParamLimits

0x7e98,	// (0x00044d01) bg_button_pane_cp06_cp

0xc2e0,	// (0x00049149) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e0,	// (0x00049149) cell_cmode_rocker_pane_g1_cp

0xc056,	// (0x00048ebf) cell_cmode_rocker_pane_g2_cp

0x2c12,	// (0x0003fa7b) bg_button_pane_cp07_cp

0xe34e,	// (0x0004b1b7) cell_cmode_itu_pane_g1_cp

0xe357,	// (0x0004b1c0) cell_cmode_itu_pane_t1_cp

0xe357,	// (0x0004b1c0) cell_cmode_itu_pane_t2_cp

0xaf69,	// (0x00047dd2) settings_code_pane_cp2

0x7605,	// (0x0004446e) bg_popup_window_pane_cp3_ParamLimits

0x7a7d,	// (0x000448e6) heading_pane_cp3_ParamLimits

0x7a89,	// (0x000448f2) listscroll_popup_graphic_pane_ParamLimits

0x685d,	// (0x000436c6) fep_hwr_aid_pane_ParamLimits

0x6d3f,	// (0x00043ba8) aid_touch_sctrl_top_ParamLimits

0x6d4c,	// (0x00043bb5) sctrl_sk_top_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0004cb73) sctrl_sk_top_pane_g_ParamLimits

0x6d59,	// (0x00043bc2) sctrl_sk_top_pane_t1_ParamLimits

0x6d3f,	// (0x00043ba8) aid_touch_sctrl_bottom_ParamLimits

0x6d59,	// (0x00043bc2) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9b8,	// (0x0004a821) aid_area_touch_clock

0x6f3e,	// (0x00043da7) aid_vkb2_area_top_pane_cell_ParamLimits

0x6f3e,	// (0x00043da7) aid_vkb2_area_top_pane_cell

0x706e,	// (0x00043ed7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x706e,	// (0x00043ed7) aid_vkb2_area_bottom_pane_cell

0xdf21,	// (0x0004ad8a) popup_char_count_window

0xe365,	// (0x0004b1ce) popup_char_count_window_g1

0xe36e,	// (0x0004b1d7) popup_char_count_window_g2

0xe377,	// (0x0004b1e0) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0004cc44) popup_char_count_window_g

0xe380,	// (0x0004b1e9) popup_char_count_window_t1

0x6df8,	// (0x00043c61) popup_fep_char_preview_window_ParamLimits

0x6df8,	// (0x00043c61) popup_fep_char_preview_window

0x6f5c,	// (0x00043dc5) vkb2_top_candi_pane_ParamLimits

0x6f5c,	// (0x00043dc5) vkb2_top_candi_pane

0xe38e,	// (0x0004b1f7) cell_vkb2_top_candi_pane_ParamLimits

0xe38e,	// (0x0004b1f7) cell_vkb2_top_candi_pane

0xa056,	// (0x00046ebf) bg_popup_fep_char_preview_window_ParamLimits

0xa056,	// (0x00046ebf) bg_popup_fep_char_preview_window

0x736f,	// (0x000441d8) popup_fep_char_preview_window_t1_ParamLimits

0x736f,	// (0x000441d8) popup_fep_char_preview_window_t1

0xe3df,	// (0x0004b248) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0004b250) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0004b258) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0004b260) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0004b268) bg_popup_fep_char_preview_window_g5

0x73a9,	// (0x00044212) bg_popup_fep_char_preview_window_g6

0xe407,	// (0x0004b270) bg_popup_fep_char_preview_window_g7

0xe40f,	// (0x0004b278) bg_popup_fep_char_preview_window_g8

0xe417,	// (0x0004b280) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0004cc4b) bg_popup_fep_char_preview_window_g

0xc2e0,	// (0x00049149) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) cell_vkb2_top_candi_pane_g1

0xc772,	// (0x000495db) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc772,	// (0x000495db) cell_vkb2_top_candi_pane_g2

0xc793,	// (0x000495fc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc793,	// (0x000495fc) cell_vkb2_top_candi_pane_g3

0x73b1,	// (0x0004421a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x73b1,	// (0x0004421a) cell_vkb2_top_candi_pane_g4

0xd7cd,	// (0x0004a636) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd7cd,	// (0x0004a636) cell_vkb2_top_candi_pane_g5

0xd844,	// (0x0004a6ad) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd844,	// (0x0004a6ad) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0004cc5e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0004cc5e) cell_vkb2_top_candi_pane_g

0x73d2,	// (0x0004423b) cell_vkb2_top_candi_pane_t1

0x666f,	// (0x000434d8) aid_size_touch_slider_mark_ParamLimits

0x666f,	// (0x000434d8) aid_size_touch_slider_mark

0xe022,	// (0x0004ae8b) grid_graphic2_catg_pane_ParamLimits

0xe022,	// (0x0004ae8b) grid_graphic2_catg_pane

0xe0c0,	// (0x0004af29) popup_grid_graphic2_window_t1_ParamLimits

0xe0c0,	// (0x0004af29) popup_grid_graphic2_window_t1

0xe0d2,	// (0x0004af3b) popup_grid_graphic2_window_t2_ParamLimits

0xe0d2,	// (0x0004af3b) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0004cc19) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0004cc19) popup_grid_graphic2_window_t

0x788f,	// (0x000446f8) bg_button_pane_cp05_ParamLimits

0xe23d,	// (0x0004b0a6) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0004b288) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0004b288) cell_graphic2_catg_pane

0x2c12,	// (0x0003fa7b) bg_button_pane_cp12

0xe431,	// (0x0004b29a) cell_graphic2_catg_pane_g1

0xd984,	// (0x0004a7ed) cell_tb_ext_pane_t1_ParamLimits

0x718b,	// (0x00043ff4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x718b,	// (0x00043ff4) vkb2_top_cell_right_narrow_pane

0x71a3,	// (0x0004400c) vkb2_top_cell_right_wide_pane_ParamLimits

0x71a3,	// (0x0004400c) vkb2_top_cell_right_wide_pane

0x128d,	// (0x0003e0f6) bg_vkb2_func_pane_ParamLimits

0x128d,	// (0x0003e0f6) bg_vkb2_func_pane

0x7214,	// (0x0004407d) vkb2_top_cell_left_pane_g1_ParamLimits

0x128d,	// (0x0003e0f6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x128d,	// (0x0003e0f6) bg_vkb2_fuc_pane_cp03

0x7288,	// (0x000440f1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99b8,	// (0x00046821) bg_vkb2_func_pane_g1

0x99c0,	// (0x00046829) bg_vkb2_func_pane_g2

0x99d0,	// (0x00046839) bg_vkb2_func_pane_g3

0x99c8,	// (0x00046831) bg_vkb2_func_pane_g4

0x99d8,	// (0x00046841) bg_vkb2_func_pane_g5

0x99e0,	// (0x00046849) bg_vkb2_func_pane_g6

0x99e8,	// (0x00046851) bg_vkb2_func_pane_g7

0x99f0,	// (0x00046859) bg_vkb2_func_pane_g8

0x99b0,	// (0x00046819) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0004cc6b) bg_vkb2_func_pane_g

0x128d,	// (0x0003e0f6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x128d,	// (0x0003e0f6) bg_vkb2_fuc_pane_cp01

0x7214,	// (0x0004407d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7214,	// (0x0004407d) vkb2_top_cell_right_wide_pane_g1

0x128d,	// (0x0003e0f6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x128d,	// (0x0003e0f6) bg_vkb2_fuc_pane_cp02

0x7288,	// (0x000440f1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7288,	// (0x000440f1) vkb2_top_cell_right_narrow_pane_g1

0xd584,	// (0x0004a3ed) aid_touch_area_decrease_ParamLimits

0xd584,	// (0x0004a3ed) aid_touch_area_decrease

0xd5a8,	// (0x0004a411) aid_touch_area_increase_ParamLimits

0xd5a8,	// (0x0004a411) aid_touch_area_increase

0xd5b4,	// (0x0004a41d) aid_touch_area_mute_ParamLimits

0xd5b4,	// (0x0004a41d) aid_touch_area_mute

0xd5d8,	// (0x0004a441) aid_touch_area_slider_ParamLimits

0xd5d8,	// (0x0004a441) aid_touch_area_slider

0xd6c8,	// (0x0004a531) popup_slider_window_g4_ParamLimits

0xd6c8,	// (0x0004a531) popup_slider_window_g4

0xd6d4,	// (0x0004a53d) popup_slider_window_g5_ParamLimits

0xd6d4,	// (0x0004a53d) popup_slider_window_g5

0xd6f6,	// (0x0004a55f) popup_slider_window_g6_ParamLimits

0xd6f6,	// (0x0004a55f) popup_slider_window_g6

0xd736,	// (0x0004a59f) popup_slider_window_t2_ParamLimits

0xd736,	// (0x0004a59f) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0004cb67) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0004cb67) popup_slider_window_t

0xd74e,	// (0x0004a5b7) slider_pane_ParamLimits

0xd74e,	// (0x0004a5b7) slider_pane

0xe43a,	// (0x0004b2a3) slider_pane_g1_ParamLimits

0xe43a,	// (0x0004b2a3) slider_pane_g1

0xe44e,	// (0x0004b2b7) slider_pane_g2_ParamLimits

0xe44e,	// (0x0004b2b7) slider_pane_g2

0xe464,	// (0x0004b2cd) slider_pane_g3_ParamLimits

0xe464,	// (0x0004b2cd) slider_pane_g3

0x0003,

0xfe15,	// (0x0004cc7e) slider_pane_g_ParamLimits

0xfe15,	// (0x0004cc7e) slider_pane_g

0x93aa,	// (0x00046213) popup_tb_float_extension_window_ParamLimits

0x93aa,	// (0x00046213) popup_tb_float_extension_window

0xe490,	// (0x0004b2f9) aid_size_cell_tb_float_ext

0x2c12,	// (0x0003fa7b) bg_popup_sub_window_cp28

0xe49c,	// (0x0004b305) grid_tb_float_ext_pane

0xe4a8,	// (0x0004b311) cell_tb_float_ext_pane_ParamLimits

0xe4a8,	// (0x0004b311) cell_tb_float_ext_pane

0xe4c4,	// (0x0004b32d) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0004b336) grid_highlight_pane_cp12

0x6996,	// (0x000437ff) cell_last_hwr_side_pane_ParamLimits

0x6996,	// (0x000437ff) cell_last_hwr_side_pane

0xc056,	// (0x00048ebf) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0004b33f) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0004cc87) cell_last_hwr_side_pane_g

0x713a,	// (0x00043fa3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x713a,	// (0x00043fa3) vkb2_area_bottom_space_btn_pane

0xc2e0,	// (0x00049149) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf94,	// (0x0004adfd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x73d2,	// (0x0004423b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x73f0,	// (0x00044259) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x73f0,	// (0x00044259) vkb2_area_bottom_space_btn_pane_g1

0x742a,	// (0x00044293) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x742a,	// (0x00044293) vkb2_area_bottom_space_btn_pane_g2

0x7460,	// (0x000442c9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7460,	// (0x000442c9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0004cc8c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0004cc8c) vkb2_area_bottom_space_btn_pane_g

0x6906,	// (0x0004376f) cel_fep_hwr_func_pane_ParamLimits

0x6906,	// (0x0004376f) cel_fep_hwr_func_pane

0x6942,	// (0x000437ab) cell_hwr_side_button_pane_ParamLimits

0x6942,	// (0x000437ab) cell_hwr_side_button_pane

0xd9b8,	// (0x0004a821) aid_area_touch_clock_ParamLimits

0x788f,	// (0x000446f8) bg_uniindi_top_pane_ParamLimits

0xd9cc,	// (0x0004a835) uniindi_top_pane_g1_ParamLimits

0xd9e2,	// (0x0004a84b) uniindi_top_pane_g2_ParamLimits

0xd9ee,	// (0x0004a857) uniindi_top_pane_g3_ParamLimits

0xd9ff,	// (0x0004a868) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0004cb9f) uniindi_top_pane_g_ParamLimits

0xda0c,	// (0x0004a875) uniindi_top_pane_t1_ParamLimits

0x788f,	// (0x000446f8) bg_vkb2_func_pane_cp01_ParamLimits

0x788f,	// (0x000446f8) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0004b348) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0004b348) cel_fep_hwr_func_pane_g1

0x788f,	// (0x000446f8) bg_vkb2_func_pane_cp02_ParamLimits

0x788f,	// (0x000446f8) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0004b348) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0004b348) cell_hwr_side_button_pane_g1

0x9831,	// (0x0004669a) status_pane_g4_ParamLimits

0x9831,	// (0x0004669a) status_pane_g4

0x984b,	// (0x000466b4) status_pane_t1

0xbdf2,	// (0x00048c5b) form2_midp_gauge_slider_cont_pane

0xbdfa,	// (0x00048c63) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe0c,	// (0x00048c75) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe1e,	// (0x00048c87) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0004c96b) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe30,	// (0x00048c99) form2_midp_slider_pane_ParamLimits

0x6dc0,	// (0x00043c29) aid_size_cell_func_vkb2_ParamLimits

0x6dc0,	// (0x00043c29) aid_size_cell_func_vkb2

0xe47c,	// (0x0004b2e5) slider_pane_g4_ParamLimits

0xe47c,	// (0x0004b2e5) slider_pane_g4

0x74aa,	// (0x00044313) form2_midp_gauge_slider_pane_t2_cp01

0x74b8,	// (0x00044321) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x74b8,	// (0x00044321) form2_midp_gauge_slider_pane_t3_cp01

0x74d5,	// (0x0004433e) form2_midp_slider_pane_cp01

0x2c12,	// (0x0003fa7b) navi_smil_pane

0xe518,	// (0x0004b381) navi_smil_pane_g1

0xe520,	// (0x0004b389) navi_smil_pane_t1

0xe4ed,	// (0x0004b356) form2_midp_slider_pane_g1

0xe4f6,	// (0x0004b35f) form2_midp_slider_pane_g2

0xe4fe,	// (0x0004b367) form2_midp_slider_pane_g3

0xe4ed,	// (0x0004b356) form2_midp_slider_pane_g4

0xe506,	// (0x0004b36f) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0004cc95) form2_midp_slider_pane_g

0x749a,	// (0x00044303) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x749a,	// (0x00044303) vkb2_area_bottom_space_btn_pane_g4

0x9649,	// (0x000464b2) lc0_navi_pane_ParamLimits

0x9649,	// (0x000464b2) lc0_navi_pane

0x96c5,	// (0x0004652e) lc0_stat_indi_pane_ParamLimits

0x96c5,	// (0x0004652e) lc0_stat_indi_pane

0x96dc,	// (0x00046545) ls0_title_pane_ParamLimits

0x96dc,	// (0x00046545) ls0_title_pane

0x7e98,	// (0x00044d01) bg_popup_sub_pane_cp14_ParamLimits

0xd99f,	// (0x0004a808) list_uniindi_pane_ParamLimits

0xd9ab,	// (0x0004a814) uniindi_top_pane_ParamLimits

0xda4a,	// (0x0004a8b3) list_single_uniindi_pane_g1_ParamLimits

0xda5d,	// (0x0004a8c6) list_single_uniindi_pane_t1_ParamLimits

0x74de,	// (0x00044347) lc0_stat_clock_pane_ParamLimits

0x74de,	// (0x00044347) lc0_stat_clock_pane

0xe52e,	// (0x0004b397) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0004b397) lc0_stat_indi_pane_g1

0xe53b,	// (0x0004b3a4) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0004b3a4) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0004cca0) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0004cca0) lc0_stat_indi_pane_g

0x74eb,	// (0x00044354) lc0_uni_indicator_pane_ParamLimits

0x74eb,	// (0x00044354) lc0_uni_indicator_pane

0xe548,	// (0x0004b3b1) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0004b3b1) ls0_title_pane_g1

0xe55c,	// (0x0004b3c5) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0004b3c5) ls0_title_pane_t1

0x74f8,	// (0x00044361) lc0_uni_indicator_pane_g1_ParamLimits

0x74f8,	// (0x00044361) lc0_uni_indicator_pane_g1

0xe592,	// (0x0004b3fb) lc0_stat_clock_pane_t1

0x2c12,	// (0x0003fa7b) main_ai5_pane

0xe5a0,	// (0x0004b409) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0004b409) ai5_sk_pane

0xe5ad,	// (0x0004b416) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0004b416) cell_ai5_widget_pane

0xe623,	// (0x0004b48c) aid_size_cell_widget_grid

0xe637,	// (0x0004b4a0) bg_ai5_widget_pane_ParamLimits

0xe637,	// (0x0004b4a0) bg_ai5_widget_pane

0xe65f,	// (0x0004b4c8) cell_ai5_widget_pane_g2

0xe66f,	// (0x0004b4d8) cell_ai5_widget_pane_g3

0xe68e,	// (0x0004b4f7) cell_ai5_widget_pane_g4

0xe69a,	// (0x0004b503) cell_ai5_widget_pane_g5

0xe6a6,	// (0x0004b50f) cell_ai5_widget_pane_g6

0xe6b4,	// (0x0004b51d) cell_ai5_widget_pane_g7

0xe6fc,	// (0x0004b565) cell_ai5_widget_pane_t1_ParamLimits

0xe6fc,	// (0x0004b565) cell_ai5_widget_pane_t1

0xe719,	// (0x0004b582) cell_ai5_widget_pane_t2_ParamLimits

0xe719,	// (0x0004b582) cell_ai5_widget_pane_t2

0xe731,	// (0x0004b59a) cell_ai5_widget_pane_t3_ParamLimits

0xe731,	// (0x0004b59a) cell_ai5_widget_pane_t3

0xe749,	// (0x0004b5b2) cell_ai5_widget_pane_t4_ParamLimits

0xe749,	// (0x0004b5b2) cell_ai5_widget_pane_t4

0xe763,	// (0x0004b5cc) cell_ai5_widget_pane_t5_ParamLimits

0xe763,	// (0x0004b5cc) cell_ai5_widget_pane_t5

0xe782,	// (0x0004b5eb) cell_ai5_widget_pane_t6_ParamLimits

0xe782,	// (0x0004b5eb) cell_ai5_widget_pane_t6

0xe794,	// (0x0004b5fd) cell_ai5_widget_pane_t7_ParamLimits

0xe794,	// (0x0004b5fd) cell_ai5_widget_pane_t7

0xe7ad,	// (0x0004b616) cell_ai5_widget_pane_t8_ParamLimits

0xe7ad,	// (0x0004b616) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0004ccba) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0004ccba) cell_ai5_widget_pane_t

0xe7f9,	// (0x0004b662) grid_ai5_widget_pane

0x7e98,	// (0x00044d01) highlight_cell_ai5_widget_pane_ParamLimits

0x7e98,	// (0x00044d01) highlight_cell_ai5_widget_pane

0xe810,	// (0x0004b679) ai5_sk_left_pane

0xe81a,	// (0x0004b683) ai5_sk_middle_pane

0xe824,	// (0x0004b68d) ai5_sk_right_pane

0xe82e,	// (0x0004b697) bg_ai5_widget_pane_g1_ParamLimits

0xe82e,	// (0x0004b697) bg_ai5_widget_pane_g1

0xe83a,	// (0x0004b6a3) bg_ai5_widget_pane_g2_ParamLimits

0xe83a,	// (0x0004b6a3) bg_ai5_widget_pane_g2

0xe846,	// (0x0004b6af) bg_ai5_widget_pane_g3_ParamLimits

0xe846,	// (0x0004b6af) bg_ai5_widget_pane_g3

0xe852,	// (0x0004b6bb) bg_ai5_widget_pane_g4_ParamLimits

0xe852,	// (0x0004b6bb) bg_ai5_widget_pane_g4

0xe85e,	// (0x0004b6c7) bg_ai5_widget_pane_g5_ParamLimits

0xe85e,	// (0x0004b6c7) bg_ai5_widget_pane_g5

0xe86a,	// (0x0004b6d3) bg_ai5_widget_pane_g6_ParamLimits

0xe86a,	// (0x0004b6d3) bg_ai5_widget_pane_g6

0xe876,	// (0x0004b6df) bg_ai5_widget_pane_g7_ParamLimits

0xe876,	// (0x0004b6df) bg_ai5_widget_pane_g7

0xe882,	// (0x0004b6eb) bg_ai5_widget_pane_g8_ParamLimits

0xe882,	// (0x0004b6eb) bg_ai5_widget_pane_g8

0xe88e,	// (0x0004b6f7) bg_ai5_widget_pane_g9_ParamLimits

0xe88e,	// (0x0004b6f7) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0004cccf) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0004cccf) bg_ai5_widget_pane_g

0xe8b5,	// (0x0004b71e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b5,	// (0x0004b71e) cell_shortcut_ai5_widget_pane

0x76d1,	// (0x0004453a) bg_cell_shortcut_ai5_widget_pane

0xe8c7,	// (0x0004b730) cell_grid_ai5_widget_pane_g1

0xe8d0,	// (0x0004b739) highlight_cell_shortcut_ai5_widget_pane

0x99c0,	// (0x00046829) ai5_sk_left_pane_g1

0xe8d8,	// (0x0004b741) ai5_sk_left_pane_g2

0xe8e0,	// (0x0004b749) ai5_sk_left_pane_g3

0xe8e8,	// (0x0004b751) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0004cce2) ai5_sk_left_pane_g

0xe8f0,	// (0x0004b759) ai5_sk_left_pane_t1

0x99b8,	// (0x00046821) ai5_sk_right_pane_g1

0xe8fe,	// (0x0004b767) ai5_sk_right_pane_g2

0xe906,	// (0x0004b76f) ai5_sk_right_pane_g3

0xe90e,	// (0x0004b777) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0004cceb) ai5_sk_right_pane_g

0xe916,	// (0x0004b77f) ai5_sk_right_pane_t1

0x99b8,	// (0x00046821) ai5_sk_middle_pane_g1

0x99c0,	// (0x00046829) ai5_sk_middle_pane_g2

0x99d8,	// (0x00046841) ai5_sk_middle_pane_g3

0xe906,	// (0x0004b76f) ai5_sk_middle_pane_g4

0xe8e0,	// (0x0004b749) ai5_sk_middle_pane_g5

0xe924,	// (0x0004b78d) ai5_sk_middle_pane_g6

0xe92c,	// (0x0004b795) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0004ccf4) ai5_sk_middle_pane_g

0x94cb,	// (0x00046334) aid_touch_area_size_lc0_ParamLimits

0x94cb,	// (0x00046334) aid_touch_area_size_lc0

0x6aa5,	// (0x0004390e) cell_hwr_candidate_pane_t1_ParamLimits

0x94e9,	// (0x00046352) aid_touch_navi_pane

0x97db,	// (0x00046644) status_dt_navi_pane_ParamLimits

0x97db,	// (0x00046644) status_dt_navi_pane

0x97e8,	// (0x00046651) status_dt_sta_pane_ParamLimits

0x97e8,	// (0x00046651) status_dt_sta_pane

0xe934,	// (0x0004b79d) dt_sta_controll_pane

0xe941,	// (0x0004b7aa) dt_sta_indi_pane

0xe952,	// (0x0004b7bb) dt_sta_title_pane

0x788f,	// (0x000446f8) bg_dt_sta_indi_pane_ParamLimits

0x788f,	// (0x000446f8) bg_dt_sta_indi_pane

0xe965,	// (0x0004b7ce) dt_sta_battery_pane

0xe96d,	// (0x0004b7d6) dt_sta_indi_pane_g1

0xe976,	// (0x0004b7df) dt_sta_indi_pane_g2

0xe97f,	// (0x0004b7e8) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0004cd03) dt_sta_indi_pane_g

0xe988,	// (0x0004b7f1) dt_sta_signal_pane

0x7e98,	// (0x00044d01) bg_dt_sta_title_pane_ParamLimits

0x7e98,	// (0x00044d01) bg_dt_sta_title_pane

0xe991,	// (0x0004b7fa) dt_sta_title_pane_g1

0xe999,	// (0x0004b802) dt_sta_title_pane_t1_ParamLimits

0xe999,	// (0x0004b802) dt_sta_title_pane_t1

0x2c12,	// (0x0003fa7b) bg_dt_sta_control_pane

0xe9ae,	// (0x0004b817) dt_sta_controll_pane_g1

0xe9b7,	// (0x0004b820) bg_dt_sta_title_pane_g1

0xe9c0,	// (0x0004b829) bg_dt_sta_title_pane_g2

0xe9c9,	// (0x0004b832) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0004cd0a) bg_dt_sta_title_pane_g

0xc056,	// (0x00048ebf) bg_dt_sta_indi_pane_g1

0xe9d2,	// (0x0004b83b) dt_sta_signal_pane_g1

0xe9da,	// (0x0004b843) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0004cd11) dt_sta_signal_pane_g

0xe9e2,	// (0x0004b84b) dt_sta_battery_pane_g1

0xe9eb,	// (0x0004b854) dt_sta_battery_pane_t1

0xc056,	// (0x00048ebf) bg_dt_sta_control_pane_g1

0x85f4,	// (0x0004545d) fep_china_uni_eep_pane

0x85fc,	// (0x00045465) fep_china_uni_entry_pane_ParamLimits

0x860c,	// (0x00045475) popup_fep_china_uni_window_g1_ParamLimits

0x861c,	// (0x00045485) popup_fep_china_uni_window_g2_ParamLimits

0x861c,	// (0x00045485) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004c5a3) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004c5a3) popup_fep_china_uni_window_g

0xe9fa,	// (0x0004b863) fep_china_uni_eep_pane_g1

0xea02,	// (0x0004b86b) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0004b378) aid_touch_area_size_smil_player

0x9641,	// (0x000464aa) lc0_clock_pane

0x983f,	// (0x000466a8) status_pane_g5_ParamLimits

0x983f,	// (0x000466a8) status_pane_g5

0x902f,	// (0x00045e98) popup_keymap_window

0x97fd,	// (0x00046666) status_icon_pane

0xe66f,	// (0x0004b4d8) cell_ai5_widget_pane_g3_ParamLimits

0xe68e,	// (0x0004b4f7) cell_ai5_widget_pane_g4_ParamLimits

0xe69a,	// (0x0004b503) cell_ai5_widget_pane_g5_ParamLimits

0xe6c0,	// (0x0004b529) cell_ai5_widget_pane_g8_ParamLimits

0xe6c0,	// (0x0004b529) cell_ai5_widget_pane_g8

0xe6d4,	// (0x0004b53d) cell_ai5_widget_pane_g9_ParamLimits

0xe6d4,	// (0x0004b53d) cell_ai5_widget_pane_g9

0xe6e8,	// (0x0004b551) cell_ai5_widget_pane_g10_ParamLimits

0xe6e8,	// (0x0004b551) cell_ai5_widget_pane_g10

0xea11,	// (0x0004b87a) status_icon_pane_g1

0x2c12,	// (0x0003fa7b) bg_popup_sub_pane_cp13

0xea19,	// (0x0004b882) popup_keymap_window_t1

0x8dd1,	// (0x00045c3a) control_pane_g6_ParamLimits

0x8dd1,	// (0x00045c3a) control_pane_g6

0x8dde,	// (0x00045c47) control_pane_g7_ParamLimits

0x8dde,	// (0x00045c47) control_pane_g7

0x8deb,	// (0x00045c54) control_pane_g8_ParamLimits

0x8deb,	// (0x00045c54) control_pane_g8

0xe934,	// (0x0004b79d) dt_sta_controll_pane_ParamLimits

0xe941,	// (0x0004b7aa) dt_sta_indi_pane_ParamLimits

0xe952,	// (0x0004b7bb) dt_sta_title_pane_ParamLimits

0x7dc4,	// (0x00044c2d) aid_size_touch_scroll_bar_cale

0x5a9d,	// (0x00042906) popup_discreet_window_ParamLimits

0x5a9d,	// (0x00042906) popup_discreet_window

0x5b2b,	// (0x00042994) popup_sk_window

0xa056,	// (0x00046ebf) bg_popup_sub_pane_cp28_ParamLimits

0xa056,	// (0x00046ebf) bg_popup_sub_pane_cp28

0xea27,	// (0x0004b890) popup_discreet_window_g1_ParamLimits

0xea27,	// (0x0004b890) popup_discreet_window_g1

0xea47,	// (0x0004b8b0) popup_discreet_window_t1_ParamLimits

0xea47,	// (0x0004b8b0) popup_discreet_window_t1

0xea65,	// (0x0004b8ce) popup_discreet_window_t2_ParamLimits

0xea65,	// (0x0004b8ce) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0004cd16) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0004cd16) popup_discreet_window_t

0x750b,	// (0x00044374) popup_sk_window_g1

0x7515,	// (0x0004437e) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0004cd1d) popup_sk_window_g

0xeab7,	// (0x0004b920) popup_sk_window_t1

0xeac5,	// (0x0004b92e) popup_sk_window_t1_copy1

0xe65f,	// (0x0004b4c8) cell_ai5_widget_pane_g2_ParamLimits

0xe7bf,	// (0x0004b628) cell_ai5_widget_pane_t9_ParamLimits

0xe7bf,	// (0x0004b628) cell_ai5_widget_pane_t9

0x2c12,	// (0x0003fa7b) main_fep_fshwr2_pane

0xead3,	// (0x0004b93c) aid_fshwr2_btn_pane

0xeadb,	// (0x0004b944) aid_fshwr2_syb_pane

0xeae3,	// (0x0004b94c) aid_fshwr2_txt_pane

0xeaeb,	// (0x0004b954) fshwr2_func_candi_pane

0xeaf5,	// (0x0004b95e) fshwr2_hwr_syb_pane

0xeaff,	// (0x0004b968) fshwr2_icf_pane

0x2c12,	// (0x0003fa7b) fshwr2_icf_bg_pane

0xeb21,	// (0x0004b98a) fshwr2_icf_pane_t1_ParamLimits

0xeb21,	// (0x0004b98a) fshwr2_icf_pane_t1

0xc056,	// (0x00048ebf) fshwr2_func_candi_pane_g1

0xeb38,	// (0x0004b9a1) fshwr2_func_candi_row_pane_ParamLimits

0xeb38,	// (0x0004b9a1) fshwr2_func_candi_row_pane

0xeb49,	// (0x0004b9b2) cell_fshwr2_syb_pane_ParamLimits

0xeb49,	// (0x0004b9b2) cell_fshwr2_syb_pane

0xc2e0,	// (0x00049149) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) fshwr2_hwr_syb_pane_g1

0x2c12,	// (0x0003fa7b) bg_popup_call_pane_cp01

0xeb63,	// (0x0004b9cc) fshwr2_func_candi_cell_pane_ParamLimits

0xeb63,	// (0x0004b9cc) fshwr2_func_candi_cell_pane

0xeb95,	// (0x0004b9fe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb95,	// (0x0004b9fe) fshwr2_func_candi_cell_bg_pane

0xebaf,	// (0x0004ba18) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaf,	// (0x0004ba18) fshwr2_func_candi_cell_pane_g1

0xebcf,	// (0x0004ba38) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebcf,	// (0x0004ba38) fshwr2_func_candi_cell_pane_t1

0x2c12,	// (0x0003fa7b) bg_button_pane_cp08

0x8af6,	// (0x0004595f) cell_fshwr2_syb_bg_pane

0xebe2,	// (0x0004ba4b) cell_fshwr2_syb_bg_pane_g1

0xebea,	// (0x0004ba53) cell_fshwr2_syb_bg_pane_t1

0x7e98,	// (0x00044d01) main_tmo_pane

0xab80,	// (0x000479e9) uni_indicator_pane_g1_ParamLimits

0xab95,	// (0x000479fe) uni_indicator_pane_g2_ParamLimits

0xabab,	// (0x00047a14) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x00047a2a) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x00047a2a) uni_indicator_pane_g4

0xabd5,	// (0x00047a3e) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x00047a3e) uni_indicator_pane_g5

0xabe9,	// (0x00047a52) uni_indicator_pane_g6_ParamLimits

0xabe9,	// (0x00047a52) uni_indicator_pane_g6

0xf937,	// (0x0004c7a0) uni_indicator_pane_g_ParamLimits

0xd554,	// (0x0004a3bd) popup_tmo_note_window_ParamLimits

0xd554,	// (0x0004a3bd) popup_tmo_note_window

0x2c12,	// (0x0003fa7b) fshwr2_bg_pane

0xebc0,	// (0x0004ba29) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc0,	// (0x0004ba29) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0004cd22) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0004cd22) fshwr2_func_candi_cell_pane_g

0xc056,	// (0x00048ebf) bg_popup_window_pane_cp01

0xebf9,	// (0x0004ba62) bg_popup_window_pane_g1_cp01

0xec02,	// (0x0004ba6b) bg_popup_window_pane_cp22_ParamLimits

0xec02,	// (0x0004ba6b) bg_popup_window_pane_cp22

0xec10,	// (0x0004ba79) listscroll_tmo_link_pane_ParamLimits

0xec10,	// (0x0004ba79) listscroll_tmo_link_pane

0xec50,	// (0x0004bab9) popup_tmo_note_window_g1_ParamLimits

0xec50,	// (0x0004bab9) popup_tmo_note_window_g1

0xec5d,	// (0x0004bac6) tmo_note_info_pane_ParamLimits

0xec5d,	// (0x0004bac6) tmo_note_info_pane

0xec77,	// (0x0004bae0) list_tmo_note_info_pane_g1_ParamLimits

0xec77,	// (0x0004bae0) list_tmo_note_info_pane_g1

0xec8e,	// (0x0004baf7) list_tmo_note_info_pane_g2_ParamLimits

0xec8e,	// (0x0004baf7) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0004cd27) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0004cd27) list_tmo_note_info_pane_g

0xecaa,	// (0x0004bb13) list_tmo_note_info_text_pane_ParamLimits

0xecaa,	// (0x0004bb13) list_tmo_note_info_text_pane

0xed2f,	// (0x0004bb98) list_tmo_link_pane

0xed3c,	// (0x0004bba5) scroll_pane_cp20

0xed49,	// (0x0004bbb2) list_single_tmo_link_pane_ParamLimits

0xed49,	// (0x0004bbb2) list_single_tmo_link_pane

0xed59,	// (0x0004bbc2) list_single_tmo_link_pane_t1

0xed67,	// (0x0004bbd0) list_tmo_note_info_text_pane_t1_ParamLimits

0xed67,	// (0x0004bbd0) list_tmo_note_info_text_pane_t1

0x7f5e,	// (0x00044dc7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f5e,	// (0x00044dc7) aid_size_touch_scroll_bar_cp01

0x50d5,	// (0x00041f3e) aid_size_touch_slider_marker

0x5b13,	// (0x0004297c) popup_settings_window_ParamLimits

0x5b13,	// (0x0004297c) popup_settings_window

0x524e,	// (0x000420b7) popup_candi_list_indi_window

0x94e9,	// (0x00046352) aid_touch_navi_pane_ParamLimits

0x6d13,	// (0x00043b7c) rs_clock_indi_pane

0x6d1c,	// (0x00043b85) sctrl_sk_bottom_pane_ParamLimits

0x6d2d,	// (0x00043b96) sctrl_sk_top_pane_ParamLimits

0x6e12,	// (0x00043c7b) popup_fep_tooltip_window

0xe623,	// (0x0004b48c) aid_size_cell_widget_grid_ParamLimits

0xe653,	// (0x0004b4bc) cell_ai5_widget_pane_g1_ParamLimits

0xe653,	// (0x0004b4bc) cell_ai5_widget_pane_g1

0xe6a6,	// (0x0004b50f) cell_ai5_widget_pane_g6_ParamLimits

0xe6b4,	// (0x0004b51d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0004cca5) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0004cca5) cell_ai5_widget_pane_g

0xe7e3,	// (0x0004b64c) cell_ai5_widget_pane_t10_ParamLimits

0xe7e3,	// (0x0004b64c) cell_ai5_widget_pane_t10

0xe7f9,	// (0x0004b662) grid_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0004b703) cell_contacts_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0004b703) cell_contacts_ai5_widget_pane

0xea7a,	// (0x0004b8e3) popup_discreet_window_t3_ParamLimits

0xea7a,	// (0x0004b8e3) popup_discreet_window_t3

0xeb09,	// (0x0004b972) popup_fshwr2_char_preview_window_ParamLimits

0xeb09,	// (0x0004b972) popup_fshwr2_char_preview_window

0xecc8,	// (0x0004bb31) tmo_note_info_pane_t1

0xecdd,	// (0x0004bb46) tmo_note_info_pane_t2

0xecf6,	// (0x0004bb5f) tmo_note_info_pane_t3

0xed0b,	// (0x0004bb74) tmo_note_info_pane_t4

0xed1d,	// (0x0004bb86) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0004cd2c) tmo_note_info_pane_t

0xed2f,	// (0x0004bb98) list_tmo_link_pane_ParamLimits

0xed3c,	// (0x0004bba5) scroll_pane_cp20_ParamLimits

0x2c12,	// (0x0003fa7b) bg_popup_fep_char_preview_window_cp01

0xed80,	// (0x0004bbe9) popup_fshwr2_char_preview_window_t1

0xed8e,	// (0x0004bbf7) popup_candi_list_indi_window_g1

0xed97,	// (0x0004bc00) bg_cell_contacts_ai5_widget_pane

0xeda3,	// (0x0004bc0c) cell_contacts_ai5_widget_pane_g1

0xedb7,	// (0x0004bc20) cell_contacts_ai5_widget_pane_g2

0xedc6,	// (0x0004bc2f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0004cd37) cell_contacts_ai5_widget_pane_g

0xedd9,	// (0x0004bc42) cell_contacts_ai5_widget_pane_t1

0x7e98,	// (0x00044d01) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee53,	// (0x0004bcbc) settings_container_pane

0x8af6,	// (0x0004595f) listscroll_set_pane_copy1

0xb79c,	// (0x00048605) scroll_pane_cp121_copy1

0xee5f,	// (0x0004bcc8) set_content_pane_copy1

0xee67,	// (0x0004bcd0) aid_height_set_list_copy1_ParamLimits

0xee67,	// (0x0004bcd0) aid_height_set_list_copy1

0xade9,	// (0x00047c52) aid_size_parent_copy1_ParamLimits

0xade9,	// (0x00047c52) aid_size_parent_copy1

0xee73,	// (0x0004bcdc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee73,	// (0x0004bcdc) button_value_adjust_pane_cp6_copy1

0x8e74,	// (0x00045cdd) list_highlight_pane_cp2_copy1_ParamLimits

0x8e74,	// (0x00045cdd) list_highlight_pane_cp2_copy1

0xee87,	// (0x0004bcf0) list_set_pane_copy1_ParamLimits

0xee87,	// (0x0004bcf0) list_set_pane_copy1

0xedee,	// (0x0004bc57) main_pane_set_t1_copy1_ParamLimits

0xedee,	// (0x0004bc57) main_pane_set_t1_copy1

0xee28,	// (0x0004bc91) main_pane_set_t2_copy1_ParamLimits

0xee28,	// (0x0004bc91) main_pane_set_t2_copy1

0xef4e,	// (0x0004bdb7) main_pane_set_t3_copy1

0xef5c,	// (0x0004bdc5) main_pane_set_t4_copy1

0xee47,	// (0x0004bcb0) set_content_pane_g1_copy1_ParamLimits

0xee47,	// (0x0004bcb0) set_content_pane_g1_copy1

0xef6a,	// (0x0004bdd3) setting_code_pane_copy1

0xef74,	// (0x0004bddd) setting_slider_graphic_pane_copy1

0xef74,	// (0x0004bddd) setting_slider_pane_copy1

0xef74,	// (0x0004bddd) setting_text_pane_copy1

0xef7e,	// (0x0004bde7) setting_volume_pane_copy1

0xef87,	// (0x0004bdf0) settings_code_pane_cp2_copy1

0xef8f,	// (0x0004bdf8) settings_code_pane_cp_copy1_ParamLimits

0xef8f,	// (0x0004bdf8) settings_code_pane_cp_copy1

0xefa3,	// (0x0004be0c) volume_set_pane_copy1

0xefaf,	// (0x0004be18) volume_set_pane_g10_copy1

0xefbb,	// (0x0004be24) volume_set_pane_g1_copy1

0xefc5,	// (0x0004be2e) volume_set_pane_g2_copy1

0xefcf,	// (0x0004be38) volume_set_pane_g3_copy1

0xefd9,	// (0x0004be42) volume_set_pane_g4_copy1

0xefe3,	// (0x0004be4c) volume_set_pane_g5_copy1

0xefed,	// (0x0004be56) volume_set_pane_g6_copy1

0xeff7,	// (0x0004be60) volume_set_pane_g7_copy1

0xf001,	// (0x0004be6a) volume_set_pane_g8_copy1

0xf00b,	// (0x0004be74) volume_set_pane_g9_copy1

0x7605,	// (0x0004446e) bg_set_opt_pane_cp_copy1_ParamLimits

0x7605,	// (0x0004446e) bg_set_opt_pane_cp_copy1

0xf015,	// (0x0004be7e) setting_slider_pane_t1_copy1_ParamLimits

0xf015,	// (0x0004be7e) setting_slider_pane_t1_copy1

0xf033,	// (0x0004be9c) setting_slider_pane_t2_copy1_ParamLimits

0xf033,	// (0x0004be9c) setting_slider_pane_t2_copy1

0xf04d,	// (0x0004beb6) setting_slider_pane_t3_copy1_ParamLimits

0xf04d,	// (0x0004beb6) setting_slider_pane_t3_copy1

0xf065,	// (0x0004bece) slider_set_pane_copy1_ParamLimits

0xf065,	// (0x0004bece) slider_set_pane_copy1

0x7eff,	// (0x00044d68) set_opt_bg_pane_g1_copy2

0x7f07,	// (0x00044d70) set_opt_bg_pane_g2_copy2

0xf07b,	// (0x0004bee4) set_opt_bg_pane_g3_copy2

0x7f17,	// (0x00044d80) set_opt_bg_pane_g4_copy2

0x7f1f,	// (0x00044d88) set_opt_bg_pane_g5_copy2

0x7f27,	// (0x00044d90) set_opt_bg_pane_g6_copy2

0xf085,	// (0x0004beee) set_opt_bg_pane_g7_copy2

0xf08f,	// (0x0004bef8) set_opt_bg_pane_g8_copy2

0xf099,	// (0x0004bf02) set_opt_bg_pane_g9_copy2

0xf0a3,	// (0x0004bf0c) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a3,	// (0x0004bf0c) aid_size_touch_slider_mark_copy1

0xf0b7,	// (0x0004bf20) slider_set_pane_g1_copy1

0xf0c0,	// (0x0004bf29) slider_set_pane_g2_copy1

0xb6f0,	// (0x00048559) slider_set_pane_g3_copy1_ParamLimits

0xb6f0,	// (0x00048559) slider_set_pane_g3_copy1

0xb704,	// (0x0004856d) slider_set_pane_g4_copy1_ParamLimits

0xb704,	// (0x0004856d) slider_set_pane_g4_copy1

0xb71c,	// (0x00048585) slider_set_pane_g5_copy1_ParamLimits

0xb71c,	// (0x00048585) slider_set_pane_g5_copy1

0xb6f0,	// (0x00048559) slider_set_pane_g6_copy1_ParamLimits

0xb6f0,	// (0x00048559) slider_set_pane_g6_copy1

0xf0c8,	// (0x0004bf31) slider_set_pane_g7_copy1_ParamLimits

0xf0c8,	// (0x0004bf31) slider_set_pane_g7_copy1

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp2_copy1

0xf0de,	// (0x0004bf47) setting_slider_graphic_pane_g1_copy1

0xf0e7,	// (0x0004bf50) setting_slider_graphic_pane_t1_copy1

0xf0f7,	// (0x0004bf60) setting_slider_graphic_pane_t2_copy1

0xf107,	// (0x0004bf70) slider_set_pane_cp_copy1

0xf117,	// (0x0004bf80) input_focus_pane_cp1_copy1

0xf120,	// (0x0004bf89) list_set_text_pane_copy1

0xf128,	// (0x0004bf91) setting_text_pane_g1_copy1

0x4ab1,	// (0x0004191a) set_text_pane_t1_copy1

0xf117,	// (0x0004bf80) input_focus_pane_cp2_copy1

0xf128,	// (0x0004bf91) setting_code_pane_g1_copy1

0xf131,	// (0x0004bf9a) setting_code_pane_t1_copy1

0xf13f,	// (0x0004bfa8) list_set_graphic_pane_copy1

0x2c26,	// (0x0003fa8f) bg_set_opt_pane_cp4_copy1

0x87f0,	// (0x00045659) list_set_graphic_pane_g1_copy1_ParamLimits

0x87f0,	// (0x00045659) list_set_graphic_pane_g1_copy1

0xf151,	// (0x0004bfba) list_set_graphic_pane_g2_copy1

0x8808,	// (0x00045671) list_set_graphic_pane_t1_copy1_ParamLimits

0x8808,	// (0x00045671) list_set_graphic_pane_t1_copy1

0xc056,	// (0x00048ebf) rs_clock_indi_pane_g1

0xf159,	// (0x0004bfc2) rs_clock_indi_pane_t1

0xf167,	// (0x0004bfd0) rs_indi_pane

0xf16f,	// (0x0004bfd8) rs_indi_pane_g1

0xf178,	// (0x0004bfe1) rs_indi_pane_g2

0xf181,	// (0x0004bfea) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0004cd3e) rs_indi_pane_g

0x8af6,	// (0x0004595f) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0004bff3) popup_fep_tooltip_window_t1

0xccfc,	// (0x00049b65) popup_note2_window_g2_ParamLimits

0xccfc,	// (0x00049b65) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0004cad7) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0004cad7) popup_note2_window_g

0xd204,	// (0x0004a06d) bg_popup_sub_pane_cp11_ParamLimits

0xd211,	// (0x0004a07a) cell_ai3_links_pane_g1_ParamLimits

0xd228,	// (0x0004a091) cell_ai3_links_pane_t1

0x4ab1,	// (0x0004191a) set_text_pane_t1_copy1_ParamLimits

0x8a03,	// (0x0004586c) cell_graphic_popup_pane_cp2_ParamLimits

0x8a03,	// (0x0004586c) cell_graphic_popup_pane_cp2

0xf198,	// (0x0004c001) cell_graphic_popup_pane_g1_cp2

0x7bd7,	// (0x00044a40) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x0004c009) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0004c011) cell_graphic_popup_pane_t2_cp2

0x7be8,	// (0x00044a51) grid_highlight_pane_cp3_cp2

0x824b,	// (0x000450b4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7e98,	// (0x00044d01) main_tmo_pane_ParamLimits

0xd548,	// (0x0004a3b1) popup_tmo_big_image_note_window

0xe643,	// (0x0004b4ac) cell_ai5_widget_list_pane

0xe64b,	// (0x0004b4b4) cell_ai5_widget_lrg_icon_pane

0xecc8,	// (0x0004bb31) tmo_note_info_pane_t1_ParamLimits

0xecdd,	// (0x0004bb46) tmo_note_info_pane_t2_ParamLimits

0xecf6,	// (0x0004bb5f) tmo_note_info_pane_t3_ParamLimits

0xed0b,	// (0x0004bb74) tmo_note_info_pane_t4_ParamLimits

0xed1d,	// (0x0004bb86) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0004cd2c) tmo_note_info_pane_t_ParamLimits

0xee53,	// (0x0004bcbc) settings_container_pane_ParamLimits

0xf10f,	// (0x0004bf78) indicator_popup_pane_cp5

0xf10f,	// (0x0004bf78) indicator_popup_pane_cp6

0xf13f,	// (0x0004bfa8) list_set_graphic_pane_copy1_ParamLimits

0x2c12,	// (0x0003fa7b) bg_popup_window_pane_cp23

0xf1b6,	// (0x0004c01f) popup_tmo_big_image_note_window_g1

0xf1c2,	// (0x0004c02b) popup_tmo_big_image_note_window_t1

0xf1d2,	// (0x0004c03b) popup_tmo_big_image_note_window_t2

0xf1e2,	// (0x0004c04b) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0004cd45) popup_tmo_big_image_note_window_t

0xf1f2,	// (0x0004c05b) cell_ai5_widget_lrg_icon_pane_g1

0xf1fa,	// (0x0004c063) cell_ai5_widget_lrg_icon_pane_t1

0xf208,	// (0x0004c071) cell_ai5_widget_list_row_pane_ParamLimits

0xf208,	// (0x0004c071) cell_ai5_widget_list_row_pane

0xf221,	// (0x0004c08a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf221,	// (0x0004c08a) cell_ai5_widget_list_row_pane_g1

0xf22e,	// (0x0004c097) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22e,	// (0x0004c097) cell_ai5_widget_list_row_pane_t1

0xf246,	// (0x0004c0af) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf246,	// (0x0004c0af) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x0004cd4c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0004cd4c) cell_ai5_widget_list_row_pane_t

0x2c12,	// (0x0003fa7b) main_fep_vtchi_ss_pane

0xf258,	// (0x0004c0c1) popup_fep_char_pre_window

0xf260,	// (0x0004c0c9) popup_fep_ituss_window

0xf281,	// (0x0004c0ea) popup_fep_vkbss_window

0xf2a2,	// (0x0004c10b) grid_vkbss_keypad_pane_ParamLimits

0xf2a2,	// (0x0004c10b) grid_vkbss_keypad_pane

0xf2b2,	// (0x0004c11b) ituss_keypad_pane

0xf2ca,	// (0x0004c133) aid_vkbss_key_offset_ParamLimits

0xf2ca,	// (0x0004c133) aid_vkbss_key_offset

0xf2d6,	// (0x0004c13f) cell_vkbss_key_pane_ParamLimits

0xf2d6,	// (0x0004c13f) cell_vkbss_key_pane

0xf2ec,	// (0x0004c155) bg_cell_vkbss_key_g1_ParamLimits

0xf2ec,	// (0x0004c155) bg_cell_vkbss_key_g1

0xf2f8,	// (0x0004c161) cell_vkbss_key_3p_pane_ParamLimits

0xf2f8,	// (0x0004c161) cell_vkbss_key_3p_pane

0xf312,	// (0x0004c17b) cell_vkbss_key_g1_ParamLimits

0xf312,	// (0x0004c17b) cell_vkbss_key_g1

0xf32c,	// (0x0004c195) cell_vkbss_key_t1_ParamLimits

0xf32c,	// (0x0004c195) cell_vkbss_key_t1

0xf357,	// (0x0004c1c0) cell_ituss_key_pane_ParamLimits

0xf357,	// (0x0004c1c0) cell_ituss_key_pane

0xf367,	// (0x0004c1d0) bg_cell_ituss_key_g1_ParamLimits

0xf367,	// (0x0004c1d0) bg_cell_ituss_key_g1

0xf373,	// (0x0004c1dc) cell_ituss_key_pane_g1_ParamLimits

0xf373,	// (0x0004c1dc) cell_ituss_key_pane_g1

0xf37f,	// (0x0004c1e8) cell_ituss_key_pane_g2_ParamLimits

0xf37f,	// (0x0004c1e8) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0004cd51) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0004cd51) cell_ituss_key_pane_g

0xf398,	// (0x0004c201) cell_ituss_key_t1_ParamLimits

0xf398,	// (0x0004c201) cell_ituss_key_t1

0xf3c6,	// (0x0004c22f) cell_ituss_key_t2_ParamLimits

0xf3c6,	// (0x0004c22f) cell_ituss_key_t2

0xf3f7,	// (0x0004c260) cell_ituss_key_t3_ParamLimits

0xf3f7,	// (0x0004c260) cell_ituss_key_t3

0xf428,	// (0x0004c291) cell_ituss_key_t4_ParamLimits

0xf428,	// (0x0004c291) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0004cd56) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0004cd56) cell_ituss_key_t

0xf459,	// (0x0004c2c2) cell_vkbss_key_3p_pane_g1

0xf461,	// (0x0004c2ca) cell_vkbss_key_3p_pane_g2

0xf469,	// (0x0004c2d2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0004cd5f) cell_vkbss_key_3p_pane_g

0x2c12,	// (0x0003fa7b) bg_popup_fep_char_preview_window_cp02

0xf471,	// (0x0004c2da) popup_fep_char_pre_window_t1

0xe619,	// (0x0004b482) main_ai5_sk_pane

0xed97,	// (0x0004bc00) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda3,	// (0x0004bc0c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb7,	// (0x0004bc20) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc6,	// (0x0004bc2f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0004cd37) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd9,	// (0x0004bc42) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7e98,	// (0x00044d01) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf480,	// (0x0004c2e9) main_ai5_sk_pane_g1

0x9e8e,	// (0x00046cf7) popup_query_code_window_g1

0xf276,	// (0x0004c0df) popup_fep_vkb_icf_pane

0xf28c,	// (0x0004c0f5) popup_fep_vtchi_icf_pane

0x7e98,	// (0x00044d01) bg_icf_pane

0xf498,	// (0x0004c301) list_vkb_icf_pane

0x7e98,	// (0x00044d01) bg_icf_pane_cp01

0xf4b0,	// (0x0004c319) vtchi_icf_list_pane

0xf4c0,	// (0x0004c329) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0004c329) list_vkb_icf_pane_t1

0xf4d7,	// (0x0004c340) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0004c340) vtchi_icf_list_pane_t1

0xf260,	// (0x0004c0c9) popup_fep_ituss_window_ParamLimits

0xf28c,	// (0x0004c0f5) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b2,	// (0x0004c11b) ituss_keypad_pane_ParamLimits

0xf2c1,	// (0x0004c12a) ituss_sks_pane

0x7e98,	// (0x00044d01) bg_icf_pane_ParamLimits

0xf489,	// (0x0004c2f2) icf_edit_indi_pane_ParamLimits

0xf489,	// (0x0004c2f2) icf_edit_indi_pane

0xf498,	// (0x0004c301) list_vkb_icf_pane_ParamLimits

0x7e98,	// (0x00044d01) bg_icf_pane_cp01_ParamLimits

0xf4a4,	// (0x0004c30d) icf_edit_indi_pane_cp01_ParamLimits

0xf4a4,	// (0x0004c30d) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0004c321) vtchi_query_pane

0xc2e0,	// (0x00049149) icf_edit_indi_pane_g1_ParamLimits

0xc2e0,	// (0x00049149) icf_edit_indi_pane_g1

0xf4f0,	// (0x0004c359) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0004c359) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0004cd66) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0004cd66) icf_edit_indi_pane_g

0xf4fc,	// (0x0004c365) icf_edit_indi_pane_t1

0xf50a,	// (0x0004c373) bg_input_focus_pane_cp042

0x7dbb,	// (0x00044c24) vtchi_button_pane

0xf513,	// (0x0004c37c) vtchi_query_pane_t1

0xf521,	// (0x0004c38a) vtchi_query_pane_t2

0xf52f,	// (0x0004c398) vtchi_query_pane_t3

0x0002,

0xff02,	// (0x0004cd6b) vtchi_query_pane_t

0x2c12,	// (0x0003fa7b) bg_button_pane_cp13

0xf53d,	// (0x0004c3a6) vtchi_button_pane_g1

0xda94,	// (0x0004a8fd) ituss_sks_pane_g1

0xf545,	// (0x0004c3ae) ituss_sks_pane_g2

0x0001,

0xff09,	// (0x0004cd72) ituss_sks_pane_g

0xf54e,	// (0x0004c3b7) ituss_sks_pane_t1

0xf55c,	// (0x0004c3c5) ituss_sks_pane_t2

0x0001,

0xff0e,	// (0x0004cd77) ituss_sks_pane_t

0xbafd,	// (0x00048966) indicator_nsta_pane_cp_g1

0xbb06,	// (0x0004896f) indicator_nsta_pane_cp_g2

0xbb0e,	// (0x00048977) indicator_nsta_pane_cp_g3

0xbb16,	// (0x0004897f) indicator_nsta_pane_cp_g4

0xbb1e,	// (0x00048987) indicator_nsta_pane_cp_g5

0xbb26,	// (0x0004898f) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0004c921) indicator_nsta_pane_cp_g

0xe22a,	// (0x0004b093) cell_graphic2_pane_t2_ParamLimits

0xe22a,	// (0x0004b093) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0004cc2e) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0004cc2e) cell_graphic2_pane_t

0xe257,	// (0x0004b0c0) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
