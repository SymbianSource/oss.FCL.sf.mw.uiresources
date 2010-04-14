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
0xb520,	// (0x0000b520) Screen

0xb52c,	// (0x0000b52c) application_window_ParamLimits

0xb52c,	// (0x0000b52c) application_window

0x002e,	// (0x0000002e) screen_g1

0xb564,	// (0x0000b564) area_bottom_pane_ParamLimits

0xb564,	// (0x0000b564) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcca0,	// (0x0000cca0) battery_pane_ParamLimits

0xcca0,	// (0x0000cca0) battery_pane

0x413f,	// (0x0000413f) bg_status_flat_pane_g8

0x4147,	// (0x00004147) bg_status_flat_pane_g9

0x3289,	// (0x00003289) context_pane_ParamLimits

0x3289,	// (0x00003289) context_pane

0xce0b,	// (0x0000ce0b) navi_pane_ParamLimits

0xce0b,	// (0x0000ce0b) navi_pane

0xce89,	// (0x0000ce89) signal_pane_ParamLimits

0xce89,	// (0x0000ce89) signal_pane

0x0008,

0xae8b,	// (0x0000ae8b) bg_status_flat_pane_g

0xcf19,	// (0x0000cf19) status_pane_g1_ParamLimits

0xcf19,	// (0x0000cf19) status_pane_g1

0xcf2f,	// (0x0000cf2f) status_pane_g2_ParamLimits

0xcf2f,	// (0x0000cf2f) status_pane_g2

0x34b0,	// (0x000034b0) status_pane_g3_ParamLimits

0x34b0,	// (0x000034b0) status_pane_g3

0x0004,

0xf53b,	// (0x0000f53b) status_pane_g_ParamLimits

0xf53b,	// (0x0000f53b) status_pane_g

0xcf3b,	// (0x0000cf3b) title_pane_ParamLimits

0xcf3b,	// (0x0000cf3b) title_pane

0xcf9e,	// (0x0000cf9e) uni_indicator_pane_ParamLimits

0xcf9e,	// (0x0000cf9e) uni_indicator_pane

0x2b22,	// (0x00002b22) bg_list_pane_ParamLimits

0x2b22,	// (0x00002b22) bg_list_pane

0xc547,	// (0x0000c547) find_pane

0xc54f,	// (0x0000c54f) listscroll_app_pane_ParamLimits

0xc54f,	// (0x0000c54f) listscroll_app_pane

0x2b56,	// (0x00002b56) listscroll_form_pane

0xc55f,	// (0x0000c55f) listscroll_gen_pane_ParamLimits

0xc55f,	// (0x0000c55f) listscroll_gen_pane

0x2b72,	// (0x00002b72) listscroll_set_pane

0x4f15,	// (0x00004f15) main_idle_act_pane

0x2615,	// (0x00002615) main_idle_trad_pane

0x2615,	// (0x00002615) main_list_empty_pane

0x2b8c,	// (0x00002b8c) main_midp_pane

0x2b98,	// (0x00002b98) main_pane_g1_ParamLimits

0x2b98,	// (0x00002b98) main_pane_g1

0xc573,	// (0x0000c573) popup_ai_message_window_ParamLimits

0xc573,	// (0x0000c573) popup_ai_message_window

0xc604,	// (0x0000c604) popup_fep_china_uni_window_ParamLimits

0xc604,	// (0x0000c604) popup_fep_china_uni_window

0x2cb0,	// (0x00002cb0) popup_fep_japan_candidate_window_ParamLimits

0x2cb0,	// (0x00002cb0) popup_fep_japan_candidate_window

0x2cd0,	// (0x00002cd0) popup_fep_japan_predictive_window_ParamLimits

0x2cd0,	// (0x00002cd0) popup_fep_japan_predictive_window

0xc660,	// (0x0000c660) popup_find_window

0xc67d,	// (0x0000c67d) popup_grid_graphic_window_ParamLimits

0xc67d,	// (0x0000c67d) popup_grid_graphic_window

0x2d37,	// (0x00002d37) popup_large_graphic_colour_window

0xc71b,	// (0x0000c71b) popup_menu_window_ParamLimits

0xc71b,	// (0x0000c71b) popup_menu_window

0xc8ed,	// (0x0000c8ed) popup_note_image_window

0xc8b3,	// (0x0000c8b3) popup_note_wait_window_ParamLimits

0xc8b3,	// (0x0000c8b3) popup_note_wait_window

0xc905,	// (0x0000c905) popup_note_window_ParamLimits

0xc905,	// (0x0000c905) popup_note_window

0xc9ab,	// (0x0000c9ab) popup_query_code_window_ParamLimits

0xc9ab,	// (0x0000c9ab) popup_query_code_window

0x2f7f,	// (0x00002f7f) popup_query_data_code_window_ParamLimits

0x2f7f,	// (0x00002f7f) popup_query_data_code_window

0xc9e5,	// (0x0000c9e5) popup_query_data_window_ParamLimits

0xc9e5,	// (0x0000c9e5) popup_query_data_window

0xca67,	// (0x0000ca67) popup_query_sat_info_window_ParamLimits

0xca67,	// (0x0000ca67) popup_query_sat_info_window

0xcafe,	// (0x0000cafe) popup_snote_single_graphic_window_ParamLimits

0xcafe,	// (0x0000cafe) popup_snote_single_graphic_window

0xcafe,	// (0x0000cafe) popup_snote_single_text_window_ParamLimits

0xcafe,	// (0x0000cafe) popup_snote_single_text_window

0x3006,	// (0x00003006) popup_sub_window_general

0x3136,	// (0x00003136) popup_window_general_ParamLimits

0x3136,	// (0x00003136) popup_window_general

0x314b,	// (0x0000314b) power_save_pane

0xc3af,	// (0x0000c3af) control_pane_g1_ParamLimits

0xc3af,	// (0x0000c3af) control_pane_g1

0xc3d8,	// (0x0000c3d8) control_pane_g2_ParamLimits

0xc3d8,	// (0x0000c3d8) control_pane_g2

0x29c7,	// (0x000029c7) control_pane_g3_ParamLimits

0x29c7,	// (0x000029c7) control_pane_g3

0x0007,

0xf523,	// (0x0000f523) control_pane_g_ParamLimits

0xf523,	// (0x0000f523) control_pane_g

0xc440,	// (0x0000c440) control_pane_t1_ParamLimits

0xc440,	// (0x0000c440) control_pane_t1

0xc49e,	// (0x0000c49e) control_pane_t2_ParamLimits

0xc49e,	// (0x0000c49e) control_pane_t2

0x0002,

0xf534,	// (0x0000f534) control_pane_t_ParamLimits

0xf534,	// (0x0000f534) control_pane_t

0xc308,	// (0x0000c308) navi_navi_volume_pane_cp1

0xc310,	// (0x0000c310) status_small_icon_pane

0x28ae,	// (0x000028ae) status_small_pane_g1_ParamLimits

0x28ae,	// (0x000028ae) status_small_pane_g1

0xc318,	// (0x0000c318) status_small_pane_g2_ParamLimits

0xc318,	// (0x0000c318) status_small_pane_g2

0xc324,	// (0x0000c324) status_small_pane_g3_ParamLimits

0xc324,	// (0x0000c324) status_small_pane_g3

0xc330,	// (0x0000c330) status_small_pane_g4_ParamLimits

0xc330,	// (0x0000c330) status_small_pane_g4

0xc33c,	// (0x0000c33c) status_small_pane_g5_ParamLimits

0xc33c,	// (0x0000c33c) status_small_pane_g5

0xc34a,	// (0x0000c34a) status_small_pane_g6_ParamLimits

0xc34a,	// (0x0000c34a) status_small_pane_g6

0x0007,

0xf512,	// (0x0000f512) status_small_pane_g_ParamLimits

0xf512,	// (0x0000f512) status_small_pane_g

0xc379,	// (0x0000c379) status_small_pane_t1

0xc39b,	// (0x0000c39b) status_small_wait_pane_ParamLimits

0xc39b,	// (0x0000c39b) status_small_wait_pane

0xc11e,	// (0x0000c11e) aid_levels_signal_ParamLimits

0xc11e,	// (0x0000c11e) aid_levels_signal

0xc136,	// (0x0000c136) signal_pane_g1_ParamLimits

0xc136,	// (0x0000c136) signal_pane_g1

0xc151,	// (0x0000c151) signal_pane_g2_ParamLimits

0xc151,	// (0x0000c151) signal_pane_g2

0x0003,

0xf4ed,	// (0x0000f4ed) signal_pane_g_ParamLimits

0xf4ed,	// (0x0000f4ed) signal_pane_g

0x1ebc,	// (0x00001ebc) context_pane_g1

0xb742,	// (0x0000b742) title_pane_g1

0xb779,	// (0x0000b779) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf41a,	// (0x0000f41a) title_pane_t

0xcfc6,	// (0x0000cfc6) aid_levels_battery_ParamLimits

0xcfc6,	// (0x0000cfc6) aid_levels_battery

0xcfe2,	// (0x0000cfe2) battery_pane_g1_ParamLimits

0xcfe2,	// (0x0000cfe2) battery_pane_g1

0xcfff,	// (0x0000cfff) battery_pane_g2_ParamLimits

0xcfff,	// (0x0000cfff) battery_pane_g2

0x0001,

0xf546,	// (0x0000f546) battery_pane_g_ParamLimits

0xf546,	// (0x0000f546) battery_pane_g

0xd257,	// (0x0000d257) uni_indicator_pane_g1

0xd26d,	// (0x0000d26d) uni_indicator_pane_g2

0xd283,	// (0x0000d283) uni_indicator_pane_g3

0x0005,

0xf57d,	// (0x0000f57d) uni_indicator_pane_g

0x2487,	// (0x00002487) navi_icon_pane_ParamLimits

0x2487,	// (0x00002487) navi_icon_pane

0x23c5,	// (0x000023c5) navi_midp_pane

0x24a3,	// (0x000024a3) navi_navi_pane

0x24ad,	// (0x000024ad) navi_text_pane_ParamLimits

0x24ad,	// (0x000024ad) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09cf,	// (0x000009cf) status_small_wait_pane_g2

0x0001,

0xaf2e,	// (0x0000af2e) status_small_wait_pane_g

0x48fe,	// (0x000048fe) navi_navi_icon_text_pane

0x4906,	// (0x00004906) navi_navi_pane_g1_ParamLimits

0x4906,	// (0x00004906) navi_navi_pane_g1

0x4918,	// (0x00004918) navi_navi_pane_g2_ParamLimits

0x4918,	// (0x00004918) navi_navi_pane_g2

0x0001,

0xaefc,	// (0x0000aefc) navi_navi_pane_g_ParamLimits

0xaefc,	// (0x0000aefc) navi_navi_pane_g

0x492a,	// (0x0000492a) navi_navi_tabs_pane

0x4933,	// (0x00004933) navi_navi_text_pane

0x48fe,	// (0x000048fe) navi_navi_volume_pane

0x48da,	// (0x000048da) navi_text_pane_t1

0x48ce,	// (0x000048ce) navi_icon_pane_g1

0x4821,	// (0x00004821) navi_navi_text_pane_t1

0x4810,	// (0x00004810) navi_navi_volume_pane_g1

0x4818,	// (0x00004818) volume_small_pane

0x4776,	// (0x00004776) navi_navi_icon_text_pane_g1

0x477e,	// (0x0000477e) navi_navi_icon_text_pane_t1

0x24a3,	// (0x000024a3) navi_tabs_2_long_pane

0x24a3,	// (0x000024a3) navi_tabs_2_pane

0x24a3,	// (0x000024a3) navi_tabs_3_long_pane

0x24a3,	// (0x000024a3) navi_tabs_3_pane

0x24a3,	// (0x000024a3) navi_tabs_4_pane

0x46d5,	// (0x000046d5) tabs_2_active_pane_ParamLimits

0x46d5,	// (0x000046d5) tabs_2_active_pane

0x46e5,	// (0x000046e5) tabs_2_passive_pane_ParamLimits

0x46e5,	// (0x000046e5) tabs_2_passive_pane

0x46a3,	// (0x000046a3) tabs_3_active_pane_ParamLimits

0x46a3,	// (0x000046a3) tabs_3_active_pane

0x46b3,	// (0x000046b3) tabs_3_passive_pane_ParamLimits

0x46b3,	// (0x000046b3) tabs_3_passive_pane

0x46c4,	// (0x000046c4) tabs_3_passive_pane_cp_ParamLimits

0x46c4,	// (0x000046c4) tabs_3_passive_pane_cp

0x465f,	// (0x0000465f) tabs_4_active_pane_ParamLimits

0x465f,	// (0x0000465f) tabs_4_active_pane

0x4670,	// (0x00004670) tabs_4_passive_pane_ParamLimits

0x4670,	// (0x00004670) tabs_4_passive_pane

0x4681,	// (0x00004681) tabs_4_passive_pane_cp_ParamLimits

0x4681,	// (0x00004681) tabs_4_passive_pane_cp

0x4692,	// (0x00004692) tabs_4_passive_pane_cp2_ParamLimits

0x4692,	// (0x00004692) tabs_4_passive_pane_cp2

0x463b,	// (0x0000463b) tabs_2_long_active_pane_ParamLimits

0x463b,	// (0x0000463b) tabs_2_long_active_pane

0x464d,	// (0x0000464d) tabs_2_long_passive_pane_ParamLimits

0x464d,	// (0x0000464d) tabs_2_long_passive_pane

0x45fc,	// (0x000045fc) tabs_3_long_active_pane_ParamLimits

0x45fc,	// (0x000045fc) tabs_3_long_active_pane

0x460f,	// (0x0000460f) tabs_3_long_passive_pane_ParamLimits

0x460f,	// (0x0000460f) tabs_3_long_passive_pane

0x4628,	// (0x00004628) tabs_3_long_passive_pane_cp_ParamLimits

0x4628,	// (0x00004628) tabs_3_long_passive_pane_cp

0x45a2,	// (0x000045a2) volume_small_pane_g1

0x45ab,	// (0x000045ab) volume_small_pane_g2

0x45b4,	// (0x000045b4) volume_small_pane_g3

0x45bd,	// (0x000045bd) volume_small_pane_g4

0x45c6,	// (0x000045c6) volume_small_pane_g5

0x45cf,	// (0x000045cf) volume_small_pane_g6

0x45d8,	// (0x000045d8) volume_small_pane_g7

0x45e1,	// (0x000045e1) volume_small_pane_g8

0x45ea,	// (0x000045ea) volume_small_pane_g9

0x45f3,	// (0x000045f3) volume_small_pane_g10

0x0009,

0xaec8,	// (0x0000aec8) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb805,	// (0x0000b805) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb805,	// (0x0000b805) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb817,	// (0x0000b817) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb817,	// (0x0000b817) tabs_4_1_passive_pane_t1

0x2b8c,	// (0x00002b8c) list_highlight_pane_cp2

0xd31d,	// (0x0000d31d) list_set_pane_ParamLimits

0xd31d,	// (0x0000d31d) list_set_pane

0xd3b7,	// (0x0000d3b7) main_pane_set_t1_ParamLimits

0xd3b7,	// (0x0000d3b7) main_pane_set_t1

0xd3d7,	// (0x0000d3d7) main_pane_set_t2_ParamLimits

0xd3d7,	// (0x0000d3d7) main_pane_set_t2

0xd3eb,	// (0x0000d3eb) main_pane_set_t3_ParamLimits

0xd3eb,	// (0x0000d3eb) main_pane_set_t3

0xd3fd,	// (0x0000d3fd) main_pane_set_t4_ParamLimits

0xd3fd,	// (0x0000d3fd) main_pane_set_t4

0x0003,

0xf58f,	// (0x0000f58f) main_pane_set_t_ParamLimits

0xf58f,	// (0x0000f58f) main_pane_set_t

0xd40f,	// (0x0000d40f) setting_code_pane

0xd419,	// (0x0000d419) setting_slider_graphic_pane

0xd419,	// (0x0000d419) setting_slider_pane

0xd419,	// (0x0000d419) setting_text_pane

0xd419,	// (0x0000d419) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xab7c,	// (0x0000ab7c) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xab83,	// (0x0000ab83) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4efc,	// (0x00004efc) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g2

0x4ed6,	// (0x00004ed6) set_opt_bg_pane_g3

0x14dd,	// (0x000014dd) set_opt_bg_pane_g4

0x14e5,	// (0x000014e5) set_opt_bg_pane_g5

0x14ed,	// (0x000014ed) set_opt_bg_pane_g6

0x4ee0,	// (0x00004ee0) set_opt_bg_pane_g7

0x4ee8,	// (0x00004ee8) set_opt_bg_pane_g8

0x4ef2,	// (0x00004ef2) set_opt_bg_pane_g9

0x0008,

0xaf85,	// (0x0000af85) set_opt_bg_pane_g

0x4e65,	// (0x00004e65) slider_set_pane_g1

0x4e72,	// (0x00004e72) slider_set_pane_g2

0x0006,

0xaf76,	// (0x0000af76) slider_set_pane_g

0x4ce5,	// (0x00004ce5) volume_set_pane_g1

0x4ced,	// (0x00004ced) volume_set_pane_g2

0x4cf5,	// (0x00004cf5) volume_set_pane_g3

0x4cfd,	// (0x00004cfd) volume_set_pane_g4

0x4d05,	// (0x00004d05) volume_set_pane_g5

0x4d0d,	// (0x00004d0d) volume_set_pane_g6

0x4d15,	// (0x00004d15) volume_set_pane_g7

0x4d1d,	// (0x00004d1d) volume_set_pane_g8

0x4d25,	// (0x00004d25) volume_set_pane_g9

0x4d2d,	// (0x00004d2d) volume_set_pane_g10

0x0009,

0xaf4e,	// (0x0000af4e) volume_set_pane_g

0xb829,	// (0x0000b829) indicator_pane_ParamLimits

0xb829,	// (0x0000b829) indicator_pane

0xb851,	// (0x0000b851) main_idle_pane_g2_ParamLimits

0xb851,	// (0x0000b851) main_idle_pane_g2

0xb889,	// (0x0000b889) main_pane_idle_g1_ParamLimits

0xb889,	// (0x0000b889) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb8b0,	// (0x0000b8b0) soft_indicator_pane_ParamLimits

0xb8b0,	// (0x0000b8b0) soft_indicator_pane

0xb8ca,	// (0x0000b8ca) wallpaper_pane_ParamLimits

0xb8ca,	// (0x0000b8ca) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb8dc,	// (0x0000b8dc) indicator_pane_g1_ParamLimits

0xb8dc,	// (0x0000b8dc) indicator_pane_g1

0x5465,	// (0x00005465) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xb8f2,	// (0x0000b8f2) aid_ps_clock_pane

0x06d7,	// (0x000006d7) aid_ps_indicator_pane

0x06e3,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x06e3,	// (0x000006e3) indicator_ps_pane

0x06f2,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x06f2,	// (0x000006f2) power_save_pane_g1

0x06fe,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06b8,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xab88,	// (0x0000ab88) power_save_pane_g_ParamLimits

0xab88,	// (0x0000ab88) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xb8f2,	// (0x0000b8f2) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xab8d,	// (0x0000ab8d) power_save_pane_t_ParamLimits

0xab8d,	// (0x0000ab8d) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xb900,	// (0x0000b900) ai_gene_pane_ParamLimits

0xb900,	// (0x0000b900) ai_gene_pane

0xb917,	// (0x0000b917) ai_links_pane_ParamLimits

0xb917,	// (0x0000b917) ai_links_pane

0xb92f,	// (0x0000b92f) indicator_pane_cp1_ParamLimits

0xb92f,	// (0x0000b92f) indicator_pane_cp1

0xb93e,	// (0x0000b93e) main_pane_idle_g1_cp_ParamLimits

0xb93e,	// (0x0000b93e) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xb956,	// (0x0000b956) soft_indicator_pane_cp1_ParamLimits

0xb956,	// (0x0000b956) soft_indicator_pane_cp1

0x4bc7,	// (0x00004bc7) ai_links_pane_g1

0x4bd0,	// (0x00004bd0) grid_ai_links_pane

0xd24e,	// (0x0000d24e) ai_gene_pane_1

0x4bb5,	// (0x00004bb5) ai_gene_pane_2

0x4bbe,	// (0x00004bbe) list_highlight_pane_cp4

0xd22a,	// (0x0000d22a) cell_ai_link_pane_ParamLimits

0xd22a,	// (0x0000d22a) cell_ai_link_pane

0x4b86,	// (0x00004b86) cell_ai_link_pane_g1

0x09cf,	// (0x000009cf) cell_ai_link_pane_g2

0x0001,

0xaf29,	// (0x0000af29) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4ad4,	// (0x00004ad4) ai_gene_pane_1_g1_ParamLimits

0x4ad4,	// (0x00004ad4) ai_gene_pane_1_g1

0x4ae0,	// (0x00004ae0) ai_gene_pane_1_g2_ParamLimits

0x4ae0,	// (0x00004ae0) ai_gene_pane_1_g2

0x0001,

0xaf1f,	// (0x0000af1f) ai_gene_pane_1_g_ParamLimits

0xaf1f,	// (0x0000af1f) ai_gene_pane_1_g

0x4aed,	// (0x00004aed) ai_gene_pane_1_t1_ParamLimits

0x4aed,	// (0x00004aed) ai_gene_pane_1_t1

0x4b21,	// (0x00004b21) grid_ai_soft_ind_pane

0x4abf,	// (0x00004abf) ai_gene_pane_2_t1_ParamLimits

0x4abf,	// (0x00004abf) ai_gene_pane_2_t1

0xb96a,	// (0x0000b96a) main_pane_empty_t1_ParamLimits

0xb96a,	// (0x0000b96a) main_pane_empty_t1

0xb982,	// (0x0000b982) main_pane_empty_t2_ParamLimits

0xb982,	// (0x0000b982) main_pane_empty_t2

0xb997,	// (0x0000b997) main_pane_empty_t3_ParamLimits

0xb997,	// (0x0000b997) main_pane_empty_t3

0xb9a9,	// (0x0000b9a9) main_pane_empty_t4_ParamLimits

0xb9a9,	// (0x0000b9a9) main_pane_empty_t4

0xb9bb,	// (0x0000b9bb) main_pane_empty_t5_ParamLimits

0xb9bb,	// (0x0000b9bb) main_pane_empty_t5

0x0004,

0xf421,	// (0x0000f421) main_pane_empty_t_ParamLimits

0xf421,	// (0x0000f421) main_pane_empty_t

0x15c2,	// (0x000015c2) bg_popup_window_pane_ParamLimits

0x15c2,	// (0x000015c2) bg_popup_window_pane

0x482f,	// (0x0000482f) find_popup_pane_cp2_ParamLimits

0x482f,	// (0x0000482f) find_popup_pane_cp2

0x483b,	// (0x0000483b) heading_pane_ParamLimits

0x483b,	// (0x0000483b) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd1ab,	// (0x0000d1ab) bg_popup_window_pane_g1_ParamLimits

0xd1ab,	// (0x0000d1ab) bg_popup_window_pane_g1

0xd1ba,	// (0x0000d1ba) bg_popup_window_pane_g2_ParamLimits

0xd1ba,	// (0x0000d1ba) bg_popup_window_pane_g2

0xd1c6,	// (0x0000d1c6) bg_popup_window_pane_g3_ParamLimits

0xd1c6,	// (0x0000d1c6) bg_popup_window_pane_g3

0xd1d2,	// (0x0000d1d2) bg_popup_window_pane_g4_ParamLimits

0xd1d2,	// (0x0000d1d2) bg_popup_window_pane_g4

0xd1e1,	// (0x0000d1e1) bg_popup_window_pane_g5_ParamLimits

0xd1e1,	// (0x0000d1e1) bg_popup_window_pane_g5

0xd1f1,	// (0x0000d1f1) bg_popup_window_pane_g6_ParamLimits

0xd1f1,	// (0x0000d1f1) bg_popup_window_pane_g6

0xd1fd,	// (0x0000d1fd) bg_popup_window_pane_g7_ParamLimits

0xd1fd,	// (0x0000d1fd) bg_popup_window_pane_g7

0xd20c,	// (0x0000d20c) bg_popup_window_pane_g8_ParamLimits

0xd20c,	// (0x0000d20c) bg_popup_window_pane_g8

0xd21b,	// (0x0000d21b) bg_popup_window_pane_g9_ParamLimits

0xd21b,	// (0x0000d21b) bg_popup_window_pane_g9

0x4804,	// (0x00004804) bg_popup_window_pane_g10_ParamLimits

0x4804,	// (0x00004804) bg_popup_window_pane_g10

0x0009,

0xf568,	// (0x0000f568) bg_popup_window_pane_g_ParamLimits

0xf568,	// (0x0000f568) bg_popup_window_pane_g

0x472d,	// (0x0000472d) bg_popup_heading_pane_ParamLimits

0x472d,	// (0x0000472d) bg_popup_heading_pane

0x53a8,	// (0x000053a8) tabs_4_passive_pane_cp_srt_ParamLimits

0x53a8,	// (0x000053a8) tabs_4_passive_pane_cp_srt

0x53ba,	// (0x000053ba) tabs_4_passive_pane_srt_ParamLimits

0x4741,	// (0x00004741) heading_pane_g2

0x53ba,	// (0x000053ba) tabs_4_passive_pane_srt

0x389b,	// (0x0000389b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x389b,	// (0x0000389b) bg_passive_tab_pane_cp3_srt

0x4749,	// (0x00004749) heading_pane_t1_ParamLimits

0x4749,	// (0x00004749) heading_pane_t1

0x4760,	// (0x00004760) heading_pane_t2_ParamLimits

0x4760,	// (0x00004760) heading_pane_t2

0x0001,

0xaee2,	// (0x0000aee2) heading_pane_t_ParamLimits

0xaee2,	// (0x0000aee2) heading_pane_t

0x4107,	// (0x00004107) bg_popup_heading_pane_g1

0x41b6,	// (0x000041b6) bg_popup_heading_pane_g2

0x41c0,	// (0x000041c0) bg_popup_heading_pane_g3

0x41ca,	// (0x000041ca) bg_popup_heading_pane_g4

0x41d4,	// (0x000041d4) bg_popup_heading_pane_g5

0x41de,	// (0x000041de) bg_popup_heading_pane_g6

0x41e6,	// (0x000041e6) bg_popup_heading_pane_g7

0x41ee,	// (0x000041ee) bg_popup_heading_pane_g8

0x41f8,	// (0x000041f8) bg_popup_heading_pane_g9

0x0008,

0xae9e,	// (0x0000ae9e) bg_popup_heading_pane_g

0x36e1,	// (0x000036e1) bg_popup_sub_pane_g1

0x36e9,	// (0x000036e9) bg_popup_sub_pane_g2

0x36f1,	// (0x000036f1) bg_popup_sub_pane_g3

0x36f9,	// (0x000036f9) bg_popup_sub_pane_g4

0x3701,	// (0x00003701) bg_popup_sub_pane_g5

0x3709,	// (0x00003709) bg_popup_sub_pane_g6

0x3711,	// (0x00003711) bg_popup_sub_pane_g7

0x3719,	// (0x00003719) bg_popup_sub_pane_g8

0x3721,	// (0x00003721) bg_popup_sub_pane_g9

0x0008,

0xae78,	// (0x0000ae78) bg_popup_sub_pane_g

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5

0x0849,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0849,	// (0x00000849) popup_note_window_g1

0x0855,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0855,	// (0x00000855) popup_note_window_t1

0x086b,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t2

0x0881,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0881,	// (0x00000881) popup_note_window_t3

0x0897,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0897,	// (0x00000897) popup_note_window_t4

0x08bf,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note_window_t5

0x0004,

0xab9d,	// (0x0000ab9d) popup_note_window_t_ParamLimits

0xab9d,	// (0x0000ab9d) popup_note_window_t

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6

0x4083,	// (0x00004083) popup_note_image_window_g1_ParamLimits

0x4083,	// (0x00004083) popup_note_image_window_g1

0x408f,	// (0x0000408f) popup_note_image_window_g2_ParamLimits

0x408f,	// (0x0000408f) popup_note_image_window_g2

0x0001,

0xae6c,	// (0x0000ae6c) popup_note_image_window_g_ParamLimits

0xae6c,	// (0x0000ae6c) popup_note_image_window_g

0x40a8,	// (0x000040a8) popup_note_image_window_t1_ParamLimits

0x40a8,	// (0x000040a8) popup_note_image_window_t1

0x40c1,	// (0x000040c1) popup_note_image_window_t2_ParamLimits

0x40c1,	// (0x000040c1) popup_note_image_window_t2

0x40da,	// (0x000040da) popup_note_image_window_t3_ParamLimits

0x40da,	// (0x000040da) popup_note_image_window_t3

0x0002,

0xae71,	// (0x0000ae71) popup_note_image_window_t_ParamLimits

0xae71,	// (0x0000ae71) popup_note_image_window_t

0x3f44,	// (0x00003f44) bg_popup_window_pane_cp7_ParamLimits

0x3f44,	// (0x00003f44) bg_popup_window_pane_cp7

0x3f74,	// (0x00003f74) popup_note_wait_window_g1_ParamLimits

0x3f74,	// (0x00003f74) popup_note_wait_window_g1

0x3f80,	// (0x00003f80) popup_note_wait_window_g2_ParamLimits

0x3f80,	// (0x00003f80) popup_note_wait_window_g2

0x0002,

0xae5a,	// (0x0000ae5a) popup_note_wait_window_g_ParamLimits

0xae5a,	// (0x0000ae5a) popup_note_wait_window_g

0x3f98,	// (0x00003f98) popup_note_wait_window_t1_ParamLimits

0x3f98,	// (0x00003f98) popup_note_wait_window_t1

0x3fbf,	// (0x00003fbf) popup_note_wait_window_t2_ParamLimits

0x3fbf,	// (0x00003fbf) popup_note_wait_window_t2

0x3fdc,	// (0x00003fdc) popup_note_wait_window_t3_ParamLimits

0x3fdc,	// (0x00003fdc) popup_note_wait_window_t3

0x3fef,	// (0x00003fef) popup_note_wait_window_t4_ParamLimits

0x3fef,	// (0x00003fef) popup_note_wait_window_t4

0x0004,

0xae61,	// (0x0000ae61) popup_note_wait_window_t_ParamLimits

0xae61,	// (0x0000ae61) popup_note_wait_window_t

0x4014,	// (0x00004014) wait_bar_pane_ParamLimits

0x4014,	// (0x00004014) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xad1c,	// (0x0000ad1c) wait_anim_pane_g

0x3ee8,	// (0x00003ee8) wait_border_pane_g1

0x3ef3,	// (0x00003ef3) wait_border_pane_g2

0x3efc,	// (0x00003efc) wait_border_pane_g3

0x0002,

0xae53,	// (0x0000ae53) wait_border_pane_g

0x3d53,	// (0x00003d53) bg_popup_window_pane_cp16_ParamLimits

0x3d53,	// (0x00003d53) bg_popup_window_pane_cp16

0x3e53,	// (0x00003e53) indicator_popup_pane_cp4_ParamLimits

0x3e53,	// (0x00003e53) indicator_popup_pane_cp4

0x3e67,	// (0x00003e67) popup_query_data_window_t1_ParamLimits

0x3e67,	// (0x00003e67) popup_query_data_window_t1

0x3e79,	// (0x00003e79) popup_query_data_window_t2_ParamLimits

0x3e79,	// (0x00003e79) popup_query_data_window_t2

0x3e92,	// (0x00003e92) popup_query_data_window_t3_ParamLimits

0x3e92,	// (0x00003e92) popup_query_data_window_t3

0x0002,

0xae4c,	// (0x0000ae4c) popup_query_data_window_t_ParamLimits

0xae4c,	// (0x0000ae4c) popup_query_data_window_t

0x3eac,	// (0x00003eac) query_popup_data_pane_ParamLimits

0x3eac,	// (0x00003eac) query_popup_data_pane

0x3ec0,	// (0x00003ec0) query_popup_data_pane_cp1_ParamLimits

0x3ec0,	// (0x00003ec0) query_popup_data_pane_cp1

0x3d53,	// (0x00003d53) bg_popup_window_pane_cp10_ParamLimits

0x3d53,	// (0x00003d53) bg_popup_window_pane_cp10

0x3d85,	// (0x00003d85) indicator_popup_pane_ParamLimits

0x3d85,	// (0x00003d85) indicator_popup_pane

0x3da7,	// (0x00003da7) popup_query_code_window_t1_ParamLimits

0x3da7,	// (0x00003da7) popup_query_code_window_t1

0x3dc1,	// (0x00003dc1) popup_query_code_window_t2_ParamLimits

0x3dc1,	// (0x00003dc1) popup_query_code_window_t2

0x3e0a,	// (0x00003e0a) popup_query_code_window_t3_ParamLimits

0x3e0a,	// (0x00003e0a) popup_query_code_window_t3

0x0002,

0xae45,	// (0x0000ae45) popup_query_code_window_t_ParamLimits

0xae45,	// (0x0000ae45) popup_query_code_window_t

0x3e39,	// (0x00003e39) query_popup_pane_ParamLimits

0x3e39,	// (0x00003e39) query_popup_pane

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15

0x0901,	// (0x00000901) indicator_popup_pane_cp1_ParamLimits

0x0901,	// (0x00000901) indicator_popup_pane_cp1

0x0914,	// (0x00000914) indicator_popup_pane_cp2_ParamLimits

0x0914,	// (0x00000914) indicator_popup_pane_cp2

0x0927,	// (0x00000927) popup_query_data_code_window_g1_ParamLimits

0x0927,	// (0x00000927) popup_query_data_code_window_g1

0x093a,	// (0x0000093a) popup_query_data_code_window_t1_ParamLimits

0x093a,	// (0x0000093a) popup_query_data_code_window_t1

0x094c,	// (0x0000094c) popup_query_data_code_window_t2_ParamLimits

0x094c,	// (0x0000094c) popup_query_data_code_window_t2

0x095e,	// (0x0000095e) popup_query_data_code_window_t3_ParamLimits

0x095e,	// (0x0000095e) popup_query_data_code_window_t3

0x0974,	// (0x00000974) popup_query_data_code_window_t4_ParamLimits

0x0974,	// (0x00000974) popup_query_data_code_window_t4

0x0003,

0xaba8,	// (0x0000aba8) popup_query_data_code_window_t_ParamLimits

0xaba8,	// (0x0000aba8) popup_query_data_code_window_t

0x374e,	// (0x0000374e) list_single_midp_graphic_pane_g3

0x098c,	// (0x0000098c) query_popup_data_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d4b,	// (0x00003d4b) heading_pane_cp5

0x0a8a,	// (0x00000a8a) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09b2,	// (0x000009b2) query_popup_pane_t1

0x09c0,	// (0x000009c0) list_popup_info_pane_ParamLimits

0x09c0,	// (0x000009c0) list_popup_info_pane

0x09cf,	// (0x000009cf) listscroll_popup_info_pane_g1

0x09d7,	// (0x000009d7) scroll_pane_cp7

0x09e1,	// (0x000009e1) popup_info_list_pane_t1_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t1

0x09fb,	// (0x000009fb) popup_info_list_pane_t2_ParamLimits

0x09fb,	// (0x000009fb) popup_info_list_pane_t2

0x0001,

0xabb1,	// (0x0000abb1) popup_info_list_pane_t_ParamLimits

0xabb1,	// (0x0000abb1) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x549c,	// (0x0000549c) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a15,	// (0x00000a15) heading_pane_cp3

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xba1d,	// (0x0000ba1d) heading_pane_cp4

0x0a8a,	// (0x00000a8a) listscroll_popup_colour_pane

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane

0xba25,	// (0x0000ba25) grid_large_graphic_colour_popup_pane_ParamLimits

0xba25,	// (0x0000ba25) grid_large_graphic_colour_popup_pane

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1_ParamLimits

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2_ParamLimits

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3_ParamLimits

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3

0xba49,	// (0x0000ba49) listscroll_popup_colour_pane_g4_ParamLimits

0xba49,	// (0x0000ba49) listscroll_popup_colour_pane_g4

0x0003,

0xf42c,	// (0x0000f42c) listscroll_popup_colour_pane_g_ParamLimits

0xf42c,	// (0x0000f42c) listscroll_popup_colour_pane_g

0x0b24,	// (0x00000b24) scroll_pane_cp6_ParamLimits

0x0b24,	// (0x00000b24) scroll_pane_cp6

0xba59,	// (0x0000ba59) cell_large_graphic_colour_popup_pane_ParamLimits

0xba59,	// (0x0000ba59) cell_large_graphic_colour_popup_pane

0x0b55,	// (0x00000b55) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b64,	// (0x00000b64) cell_large_graphic_colour_popup_pane_g1

0x0b6c,	// (0x00000b6c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xabbf,	// (0x0000abbf) cell_large_graphic_colour_popup_pane_g

0x0b74,	// (0x00000b74) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp4

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8_ParamLimits

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2_ParamLimits

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3_ParamLimits

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4_ParamLimits

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5_ParamLimits

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5

0x0004,

0xabc4,	// (0x0000abc4) popup_snote_single_text_window_t_ParamLimits

0xabc4,	// (0x0000abc4) popup_snote_single_text_window_t

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9_ParamLimits

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2_ParamLimits

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2

0x0001,

0xabcf,	// (0x0000abcf) popup_snote_single_graphic_window_g_ParamLimits

0xabcf,	// (0x0000abcf) popup_snote_single_graphic_window_g

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1_ParamLimits

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2_ParamLimits

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3_ParamLimits

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4_ParamLimits

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5_ParamLimits

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5

0x0004,

0xabd4,	// (0x0000abd4) popup_snote_single_graphic_window_t_ParamLimits

0xabd4,	// (0x0000abd4) popup_snote_single_graphic_window_t

0xd54f,	// (0x0000d54f) grid_graphic_popup_pane_ParamLimits

0xd54f,	// (0x0000d54f) grid_graphic_popup_pane

0x5350,	// (0x00005350) listscroll_popup_graphic_pane_g1_ParamLimits

0x5350,	// (0x00005350) listscroll_popup_graphic_pane_g1

0xd56e,	// (0x0000d56e) listscroll_popup_graphic_pane_g2_ParamLimits

0xd56e,	// (0x0000d56e) listscroll_popup_graphic_pane_g2

0x0001,

0xf5b2,	// (0x0000f5b2) listscroll_popup_graphic_pane_g_ParamLimits

0xf5b2,	// (0x0000f5b2) listscroll_popup_graphic_pane_g

0x5378,	// (0x00005378) scroll_pane_cp5

0xd50b,	// (0x0000d50b) cell_graphic_popup_pane_ParamLimits

0xd50b,	// (0x0000d50b) cell_graphic_popup_pane

0x52a5,	// (0x000052a5) cell_graphic_popup_pane_g1

0x52ad,	// (0x000052ad) cell_graphic_popup_pane_g2

0x0b74,	// (0x00000b74) cell_graphic_popup_pane_g3

0x0002,

0xafbb,	// (0x0000afbb) cell_graphic_popup_pane_g

0x52b6,	// (0x000052b6) cell_graphic_popup_pane_t2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3

0x0d62,	// (0x00000d62) list_gen_pane_ParamLimits

0x0d62,	// (0x00000d62) list_gen_pane

0x0d94,	// (0x00000d94) scroll_pane

0xd4c2,	// (0x0000d4c2) bg_list_pane_g1_ParamLimits

0xd4c2,	// (0x0000d4c2) bg_list_pane_g1

0x521a,	// (0x0000521a) bg_list_pane_g2_ParamLimits

0x521a,	// (0x0000521a) bg_list_pane_g2

0x522f,	// (0x0000522f) bg_list_pane_g3_ParamLimits

0x522f,	// (0x0000522f) bg_list_pane_g3

0x5243,	// (0x00005243) bg_list_pane_g4_ParamLimits

0x5243,	// (0x00005243) bg_list_pane_g4

0xd4df,	// (0x0000d4df) bg_list_pane_g5_ParamLimits

0xd4df,	// (0x0000d4df) bg_list_pane_g5

0x0004,

0xf5a7,	// (0x0000f5a7) bg_list_pane_g_ParamLimits

0xf5a7,	// (0x0000f5a7) bg_list_pane_g

0xd468,	// (0x0000d468) list_double2_graphic_large_graphic_pane_ParamLimits

0xd468,	// (0x0000d468) list_double2_graphic_large_graphic_pane

0xd468,	// (0x0000d468) list_double2_graphic_pane_ParamLimits

0xd468,	// (0x0000d468) list_double2_graphic_pane

0xd468,	// (0x0000d468) list_double2_large_graphic_pane_ParamLimits

0xd468,	// (0x0000d468) list_double2_large_graphic_pane

0xd468,	// (0x0000d468) list_double2_pane_ParamLimits

0xd468,	// (0x0000d468) list_double2_pane

0xd468,	// (0x0000d468) list_double_graphic_heading_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_graphic_heading_pane

0xd468,	// (0x0000d468) list_double_graphic_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_graphic_pane

0xd468,	// (0x0000d468) list_double_heading_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_heading_pane

0xd468,	// (0x0000d468) list_double_large_graphic_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_large_graphic_pane

0xd468,	// (0x0000d468) list_double_number_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_number_pane

0xd468,	// (0x0000d468) list_double_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_pane

0xd468,	// (0x0000d468) list_double_time_pane_ParamLimits

0xd468,	// (0x0000d468) list_double_time_pane

0xd468,	// (0x0000d468) list_setting_number_pane_ParamLimits

0xd468,	// (0x0000d468) list_setting_number_pane

0xd468,	// (0x0000d468) list_setting_pane_ParamLimits

0xd468,	// (0x0000d468) list_setting_pane

0xd47a,	// (0x0000d47a) list_single_2graphic_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_2graphic_pane

0xd47a,	// (0x0000d47a) list_single_graphic_heading_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_graphic_heading_pane

0xd47a,	// (0x0000d47a) list_single_graphic_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_graphic_pane

0xd47a,	// (0x0000d47a) list_single_heading_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_heading_pane

0xd47a,	// (0x0000d47a) list_single_large_graphic_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_large_graphic_pane

0xd47a,	// (0x0000d47a) list_single_number_heading_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_number_heading_pane

0xd47a,	// (0x0000d47a) list_single_number_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_number_pane

0xd47a,	// (0x0000d47a) list_single_pane_ParamLimits

0xd47a,	// (0x0000d47a) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x254e,	// (0x0000254e) list_single_pane_g1_ParamLimits

0x254e,	// (0x0000254e) list_single_pane_g1

0x3585,	// (0x00003585) list_single_pane_g2_ParamLimits

0x3585,	// (0x00003585) list_single_pane_g2

0x0001,

0xadf1,	// (0x0000adf1) list_single_pane_g_ParamLimits

0xadf1,	// (0x0000adf1) list_single_pane_g

0x5aa3,	// (0x00005aa3) list_single_pane_t1_ParamLimits

0x5aa3,	// (0x00005aa3) list_single_pane_t1

0x254e,	// (0x0000254e) list_single_number_pane_g1_ParamLimits

0x254e,	// (0x0000254e) list_single_number_pane_g1

0x3585,	// (0x00003585) list_single_number_pane_g2_ParamLimits

0x3585,	// (0x00003585) list_single_number_pane_g2

0x0001,

0xadf1,	// (0x0000adf1) list_single_number_pane_g_ParamLimits

0xadf1,	// (0x0000adf1) list_single_number_pane_g

0x366f,	// (0x0000366f) list_single_number_pane_t1_ParamLimits

0x366f,	// (0x0000366f) list_single_number_pane_t1

0xd2b9,	// (0x0000d2b9) list_single_number_pane_t2_ParamLimits

0xd2b9,	// (0x0000d2b9) list_single_number_pane_t2

0x0001,

0xf58a,	// (0x0000f58a) list_single_number_pane_t_ParamLimits

0xf58a,	// (0x0000f58a) list_single_number_pane_t

0xba82,	// (0x0000ba82) list_single_graphic_pane_g1_ParamLimits

0xba82,	// (0x0000ba82) list_single_graphic_pane_g1

0x254e,	// (0x0000254e) list_single_graphic_pane_g2_ParamLimits

0x254e,	// (0x0000254e) list_single_graphic_pane_g2

0x3585,	// (0x00003585) list_single_graphic_pane_g3_ParamLimits

0x3585,	// (0x00003585) list_single_graphic_pane_g3

0x0002,

0xf435,	// (0x0000f435) list_single_graphic_pane_g_ParamLimits

0xf435,	// (0x0000f435) list_single_graphic_pane_g

0xba8e,	// (0x0000ba8e) list_single_graphic_pane_t1_ParamLimits

0xba8e,	// (0x0000ba8e) list_single_graphic_pane_t1

0x254e,	// (0x0000254e) list_single_heading_pane_g1_ParamLimits

0x254e,	// (0x0000254e) list_single_heading_pane_g1

0x3585,	// (0x00003585) list_single_heading_pane_g2_ParamLimits

0x3585,	// (0x00003585) list_single_heading_pane_g2

0x0001,

0xadf1,	// (0x0000adf1) list_single_heading_pane_g_ParamLimits

0xadf1,	// (0x0000adf1) list_single_heading_pane_g

0xbaa4,	// (0x0000baa4) list_single_heading_pane_t1_ParamLimits

0xbaa4,	// (0x0000baa4) list_single_heading_pane_t1

0xbaba,	// (0x0000baba) list_single_heading_pane_t2_ParamLimits

0xbaba,	// (0x0000baba) list_single_heading_pane_t2

0x0001,

0xf43c,	// (0x0000f43c) list_single_heading_pane_t_ParamLimits

0xf43c,	// (0x0000f43c) list_single_heading_pane_t

0x254e,	// (0x0000254e) list_single_number_heading_pane_g1_ParamLimits

0x254e,	// (0x0000254e) list_single_number_heading_pane_g1

0x3585,	// (0x00003585) list_single_number_heading_pane_g2_ParamLimits

0x3585,	// (0x00003585) list_single_number_heading_pane_g2

0x0001,

0xadf1,	// (0x0000adf1) list_single_number_heading_pane_g_ParamLimits

0xadf1,	// (0x0000adf1) list_single_number_heading_pane_g

0xbaa4,	// (0x0000baa4) list_single_number_heading_pane_t1_ParamLimits

0xbaa4,	// (0x0000baa4) list_single_number_heading_pane_t1

0xbacc,	// (0x0000bacc) list_single_number_heading_pane_t2_ParamLimits

0xbacc,	// (0x0000bacc) list_single_number_heading_pane_t2

0x5a7d,	// (0x00005a7d) list_single_number_heading_pane_t3_ParamLimits

0x5a7d,	// (0x00005a7d) list_single_number_heading_pane_t3

0x0002,

0xf441,	// (0x0000f441) list_single_number_heading_pane_t_ParamLimits

0xf441,	// (0x0000f441) list_single_number_heading_pane_t

0x3579,	// (0x00003579) list_single_graphic_heading_pane_g1_ParamLimits

0x3579,	// (0x00003579) list_single_graphic_heading_pane_g1

0xbade,	// (0x0000bade) list_single_graphic_heading_pane_g4_ParamLimits

0xbade,	// (0x0000bade) list_single_graphic_heading_pane_g4

0x3585,	// (0x00003585) list_single_graphic_heading_pane_g5_ParamLimits

0x3585,	// (0x00003585) list_single_graphic_heading_pane_g5

0x0002,

0xf448,	// (0x0000f448) list_single_graphic_heading_pane_g_ParamLimits

0xf448,	// (0x0000f448) list_single_graphic_heading_pane_g

0xbaa4,	// (0x0000baa4) list_single_graphic_heading_pane_t1_ParamLimits

0xbaa4,	// (0x0000baa4) list_single_graphic_heading_pane_t1

0xbaef,	// (0x0000baef) list_single_graphic_heading_pane_t2_ParamLimits

0xbaef,	// (0x0000baef) list_single_graphic_heading_pane_t2

0x0001,

0xf44f,	// (0x0000f44f) list_single_graphic_heading_pane_t_ParamLimits

0xf44f,	// (0x0000f44f) list_single_graphic_heading_pane_t

0x5ab9,	// (0x00005ab9) list_single_large_graphic_pane_g1_ParamLimits

0x5ab9,	// (0x00005ab9) list_single_large_graphic_pane_g1

0x254e,	// (0x0000254e) list_single_large_graphic_pane_g2_ParamLimits

0x254e,	// (0x0000254e) list_single_large_graphic_pane_g2

0x3585,	// (0x00003585) list_single_large_graphic_pane_g3_ParamLimits

0x3585,	// (0x00003585) list_single_large_graphic_pane_g3

0x0002,

0xb04b,	// (0x0000b04b) list_single_large_graphic_pane_g_ParamLimits

0xb04b,	// (0x0000b04b) list_single_large_graphic_pane_g

0x3ef3,	// (0x00003ef3) wait_border_pane_g2_copy1

0xbb01,	// (0x0000bb01) list_single_large_graphic_pane_g4_cp2

0x5ac5,	// (0x00005ac5) list_single_large_graphic_pane_t1_ParamLimits

0x5ac5,	// (0x00005ac5) list_single_large_graphic_pane_t1

0x37b2,	// (0x000037b2) list_double_pane_g1_ParamLimits

0x37b2,	// (0x000037b2) list_double_pane_g1

0xbb09,	// (0x0000bb09) list_double_pane_g2_ParamLimits

0xbb09,	// (0x0000bb09) list_double_pane_g2

0x0001,

0xf454,	// (0x0000f454) list_double_pane_g_ParamLimits

0xf454,	// (0x0000f454) list_double_pane_g

0x775c,	// (0x0000775c) list_double_pane_t1_ParamLimits

0x775c,	// (0x0000775c) list_double_pane_t1

0xbb15,	// (0x0000bb15) list_double_pane_t2_ParamLimits

0xbb15,	// (0x0000bb15) list_double_pane_t2

0x0001,

0xf459,	// (0x0000f459) list_double_pane_t_ParamLimits

0xf459,	// (0x0000f459) list_double_pane_t

0xbb27,	// (0x0000bb27) list_double2_pane_g1_ParamLimits

0xbb27,	// (0x0000bb27) list_double2_pane_g1

0xbb38,	// (0x0000bb38) list_double2_pane_g2_ParamLimits

0xbb38,	// (0x0000bb38) list_double2_pane_g2

0x0001,

0xf45e,	// (0x0000f45e) list_double2_pane_g_ParamLimits

0xf45e,	// (0x0000f45e) list_double2_pane_g

0xbb44,	// (0x0000bb44) list_double2_pane_t1_ParamLimits

0xbb44,	// (0x0000bb44) list_double2_pane_t1

0xbb5a,	// (0x0000bb5a) list_double2_pane_t2_ParamLimits

0xbb5a,	// (0x0000bb5a) list_double2_pane_t2

0x0001,

0xf463,	// (0x0000f463) list_double2_pane_t_ParamLimits

0xf463,	// (0x0000f463) list_double2_pane_t

0x37b2,	// (0x000037b2) list_double_number_pane_g1_ParamLimits

0x37b2,	// (0x000037b2) list_double_number_pane_g1

0xbb09,	// (0x0000bb09) list_double_number_pane_g2_ParamLimits

0xbb09,	// (0x0000bb09) list_double_number_pane_g2

0x0001,

0xf454,	// (0x0000f454) list_double_number_pane_g_ParamLimits

0xf454,	// (0x0000f454) list_double_number_pane_g

0xbb6c,	// (0x0000bb6c) list_double_number_pane_t1_ParamLimits

0xbb6c,	// (0x0000bb6c) list_double_number_pane_t1

0xbb7e,	// (0x0000bb7e) list_double_number_pane_t2_ParamLimits

0xbb7e,	// (0x0000bb7e) list_double_number_pane_t2

0xbb94,	// (0x0000bb94) list_double_number_pane_t3_ParamLimits

0xbb94,	// (0x0000bb94) list_double_number_pane_t3

0x0002,

0xf468,	// (0x0000f468) list_double_number_pane_t_ParamLimits

0xf468,	// (0x0000f468) list_double_number_pane_t

0xbba6,	// (0x0000bba6) list_double_graphic_pane_g1_ParamLimits

0xbba6,	// (0x0000bba6) list_double_graphic_pane_g1

0xbbb2,	// (0x0000bbb2) list_double_graphic_pane_g2_ParamLimits

0xbbb2,	// (0x0000bbb2) list_double_graphic_pane_g2

0xbbc1,	// (0x0000bbc1) list_double_graphic_pane_g3_ParamLimits

0xbbc1,	// (0x0000bbc1) list_double_graphic_pane_g3

0x0003,

0xf46f,	// (0x0000f46f) list_double_graphic_pane_g_ParamLimits

0xf46f,	// (0x0000f46f) list_double_graphic_pane_g

0x37be,	// (0x000037be) list_double_graphic_pane_t1_ParamLimits

0x37be,	// (0x000037be) list_double_graphic_pane_t1

0xbbd9,	// (0x0000bbd9) list_double_graphic_pane_t2_ParamLimits

0xbbd9,	// (0x0000bbd9) list_double_graphic_pane_t2

0x0001,

0xf478,	// (0x0000f478) list_double_graphic_pane_t_ParamLimits

0xf478,	// (0x0000f478) list_double_graphic_pane_t

0xbbeb,	// (0x0000bbeb) list_double2_graphic_pane_g1_ParamLimits

0xbbeb,	// (0x0000bbeb) list_double2_graphic_pane_g1

0x2439,	// (0x00002439) list_double2_graphic_pane_g2_ParamLimits

0x2439,	// (0x00002439) list_double2_graphic_pane_g2

0xbb38,	// (0x0000bb38) list_double2_graphic_pane_g3_ParamLimits

0xbb38,	// (0x0000bb38) list_double2_graphic_pane_g3

0x0002,

0xf47d,	// (0x0000f47d) list_double2_graphic_pane_g_ParamLimits

0xf47d,	// (0x0000f47d) list_double2_graphic_pane_g

0xbbf7,	// (0x0000bbf7) list_double2_graphic_pane_t1_ParamLimits

0xbbf7,	// (0x0000bbf7) list_double2_graphic_pane_t1

0xbc0d,	// (0x0000bc0d) list_double2_graphic_pane_t2_ParamLimits

0xbc0d,	// (0x0000bc0d) list_double2_graphic_pane_t2

0x0001,

0xf484,	// (0x0000f484) list_double2_graphic_pane_t_ParamLimits

0xf484,	// (0x0000f484) list_double2_graphic_pane_t

0xbc1f,	// (0x0000bc1f) list_double_large_graphic_pane_g1_ParamLimits

0xbc1f,	// (0x0000bc1f) list_double_large_graphic_pane_g1

0xbc3e,	// (0x0000bc3e) list_double_large_graphic_pane_g2_ParamLimits

0xbc3e,	// (0x0000bc3e) list_double_large_graphic_pane_g2

0xbb09,	// (0x0000bb09) list_double_large_graphic_pane_g3_ParamLimits

0xbb09,	// (0x0000bb09) list_double_large_graphic_pane_g3

0xbc4f,	// (0x0000bc4f) list_double_large_graphic_pane_g4_ParamLimits

0xbc4f,	// (0x0000bc4f) list_double_large_graphic_pane_g4

0x0004,

0xf489,	// (0x0000f489) list_double_large_graphic_pane_g_ParamLimits

0xf489,	// (0x0000f489) list_double_large_graphic_pane_g

0xbc61,	// (0x0000bc61) list_double_large_graphic_pane_t1_ParamLimits

0xbc61,	// (0x0000bc61) list_double_large_graphic_pane_t1

0xbc7a,	// (0x0000bc7a) list_double_large_graphic_pane_t2_ParamLimits

0xbc7a,	// (0x0000bc7a) list_double_large_graphic_pane_t2

0x0001,

0xf494,	// (0x0000f494) list_double_large_graphic_pane_t_ParamLimits

0xf494,	// (0x0000f494) list_double_large_graphic_pane_t

0xbc8c,	// (0x0000bc8c) list_double2_large_graphic_pane_g1_ParamLimits

0xbc8c,	// (0x0000bc8c) list_double2_large_graphic_pane_g1

0xbb27,	// (0x0000bb27) list_double2_large_graphic_pane_g2_ParamLimits

0xbb27,	// (0x0000bb27) list_double2_large_graphic_pane_g2

0xbb38,	// (0x0000bb38) list_double2_large_graphic_pane_g3_ParamLimits

0xbb38,	// (0x0000bb38) list_double2_large_graphic_pane_g3

0x0002,

0xf499,	// (0x0000f499) list_double2_large_graphic_pane_g_ParamLimits

0xf499,	// (0x0000f499) list_double2_large_graphic_pane_g

0xbc98,	// (0x0000bc98) list_double2_large_graphic_pane_t1_ParamLimits

0xbc98,	// (0x0000bc98) list_double2_large_graphic_pane_t1

0xbcae,	// (0x0000bcae) list_double2_large_graphic_pane_t2_ParamLimits

0xbcae,	// (0x0000bcae) list_double2_large_graphic_pane_t2

0x0001,

0xf4a0,	// (0x0000f4a0) list_double2_large_graphic_pane_t_ParamLimits

0xf4a0,	// (0x0000f4a0) list_double2_large_graphic_pane_t

0xbcc0,	// (0x0000bcc0) list_double_heading_pane_g1_ParamLimits

0xbcc0,	// (0x0000bcc0) list_double_heading_pane_g1

0xbcd1,	// (0x0000bcd1) list_double_heading_pane_g2_ParamLimits

0xbcd1,	// (0x0000bcd1) list_double_heading_pane_g2

0x0001,

0xf4a5,	// (0x0000f4a5) list_double_heading_pane_g_ParamLimits

0xf4a5,	// (0x0000f4a5) list_double_heading_pane_g

0xbcdd,	// (0x0000bcdd) list_double_heading_pane_t1_ParamLimits

0xbcdd,	// (0x0000bcdd) list_double_heading_pane_t1

0xbcf3,	// (0x0000bcf3) list_double_heading_pane_t2_ParamLimits

0xbcf3,	// (0x0000bcf3) list_double_heading_pane_t2

0x0001,

0xf4aa,	// (0x0000f4aa) list_double_heading_pane_t_ParamLimits

0xf4aa,	// (0x0000f4aa) list_double_heading_pane_t

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1_ParamLimits

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1

0xbcc0,	// (0x0000bcc0) list_double_graphic_heading_pane_g2_ParamLimits

0xbcc0,	// (0x0000bcc0) list_double_graphic_heading_pane_g2

0xbcd1,	// (0x0000bcd1) list_double_graphic_heading_pane_g3_ParamLimits

0xbcd1,	// (0x0000bcd1) list_double_graphic_heading_pane_g3

0x0002,

0xf4af,	// (0x0000f4af) list_double_graphic_heading_pane_g_ParamLimits

0xf4af,	// (0x0000f4af) list_double_graphic_heading_pane_g

0xbd05,	// (0x0000bd05) list_double_graphic_heading_pane_t1_ParamLimits

0xbd05,	// (0x0000bd05) list_double_graphic_heading_pane_t1

0xbd1b,	// (0x0000bd1b) list_double_graphic_heading_pane_t2_ParamLimits

0xbd1b,	// (0x0000bd1b) list_double_graphic_heading_pane_t2

0x0001,

0xf4b6,	// (0x0000f4b6) list_double_graphic_heading_pane_t_ParamLimits

0xf4b6,	// (0x0000f4b6) list_double_graphic_heading_pane_t

0xbc3e,	// (0x0000bc3e) list_double_time_pane_g1_ParamLimits

0xbc3e,	// (0x0000bc3e) list_double_time_pane_g1

0xbb09,	// (0x0000bb09) list_double_time_pane_g2_ParamLimits

0xbb09,	// (0x0000bb09) list_double_time_pane_g2

0x0001,

0xf4bb,	// (0x0000f4bb) list_double_time_pane_g_ParamLimits

0xf4bb,	// (0x0000f4bb) list_double_time_pane_g

0xbd2d,	// (0x0000bd2d) list_double_time_pane_t1_ParamLimits

0xbd2d,	// (0x0000bd2d) list_double_time_pane_t1

0xbd43,	// (0x0000bd43) list_double_time_pane_t2_ParamLimits

0xbd43,	// (0x0000bd43) list_double_time_pane_t2

0xbd55,	// (0x0000bd55) list_double_time_pane_t3_ParamLimits

0xbd55,	// (0x0000bd55) list_double_time_pane_t3

0xbd67,	// (0x0000bd67) list_double_time_pane_t4_ParamLimits

0xbd67,	// (0x0000bd67) list_double_time_pane_t4

0x0003,

0xf4c0,	// (0x0000f4c0) list_double_time_pane_t_ParamLimits

0xf4c0,	// (0x0000f4c0) list_double_time_pane_t

0x2439,	// (0x00002439) list_setting_pane_g1_ParamLimits

0x2439,	// (0x00002439) list_setting_pane_g1

0xbb38,	// (0x0000bb38) list_setting_pane_g2_ParamLimits

0xbb38,	// (0x0000bb38) list_setting_pane_g2

0x0001,

0xf4c9,	// (0x0000f4c9) list_setting_pane_g_ParamLimits

0xf4c9,	// (0x0000f4c9) list_setting_pane_g

0xbd79,	// (0x0000bd79) list_setting_pane_t1_ParamLimits

0xbd79,	// (0x0000bd79) list_setting_pane_t1

0xbd90,	// (0x0000bd90) list_setting_pane_t2_ParamLimits

0xbd90,	// (0x0000bd90) list_setting_pane_t2

0x0002,

0xf4ce,	// (0x0000f4ce) list_setting_pane_t_ParamLimits

0xf4ce,	// (0x0000f4ce) list_setting_pane_t

0xbdcf,	// (0x0000bdcf) set_value_pane_cp_ParamLimits

0xbdcf,	// (0x0000bdcf) set_value_pane_cp

0x2439,	// (0x00002439) list_setting_number_pane_g1_ParamLimits

0x2439,	// (0x00002439) list_setting_number_pane_g1

0xbb38,	// (0x0000bb38) list_setting_number_pane_g2_ParamLimits

0xbb38,	// (0x0000bb38) list_setting_number_pane_g2

0x0001,

0xf4c9,	// (0x0000f4c9) list_setting_number_pane_g_ParamLimits

0xf4c9,	// (0x0000f4c9) list_setting_number_pane_g

0xbddb,	// (0x0000bddb) list_setting_number_pane_t1_ParamLimits

0xbddb,	// (0x0000bddb) list_setting_number_pane_t1

0xbdef,	// (0x0000bdef) list_setting_number_pane_t2_ParamLimits

0xbdef,	// (0x0000bdef) list_setting_number_pane_t2

0xbe06,	// (0x0000be06) list_setting_number_pane_t3_ParamLimits

0xbe06,	// (0x0000be06) list_setting_number_pane_t3

0x0003,

0xf4d5,	// (0x0000f4d5) list_setting_number_pane_t_ParamLimits

0xf4d5,	// (0x0000f4d5) list_setting_number_pane_t

0xbdcf,	// (0x0000bdcf) set_value_pane_ParamLimits

0xbdcf,	// (0x0000bdcf) set_value_pane

0x1263,	// (0x00001263) bg_set_opt_pane_ParamLimits

0x1263,	// (0x00001263) bg_set_opt_pane

0x1284,	// (0x00001284) set_value_pane_t1

0x1292,	// (0x00001292) slider_set_pane_cp3

0x129b,	// (0x0000129b) volume_small_pane_cp

0x12a4,	// (0x000012a4) list_form_gen_pane

0x12ad,	// (0x000012ad) scroll_pane_cp8

0xbe49,	// (0x0000be49) form_field_data_pane_ParamLimits

0xbe49,	// (0x0000be49) form_field_data_pane

0xbe60,	// (0x0000be60) form_field_data_wide_pane_ParamLimits

0xbe60,	// (0x0000be60) form_field_data_wide_pane

0xbe80,	// (0x0000be80) form_field_popup_pane_ParamLimits

0xbe80,	// (0x0000be80) form_field_popup_pane

0xbe98,	// (0x0000be98) form_field_popup_wide_pane_ParamLimits

0xbe98,	// (0x0000be98) form_field_popup_wide_pane

0x1348,	// (0x00001348) form_field_slider_pane_ParamLimits

0x1348,	// (0x00001348) form_field_slider_pane

0x135b,	// (0x0000135b) form_field_slider_wide_pane_ParamLimits

0x135b,	// (0x0000135b) form_field_slider_wide_pane

0x136e,	// (0x0000136e) data_form_pane

0xbeb9,	// (0x0000beb9) form_field_data_pane_t1

0x139c,	// (0x0000139c) input_focus_pane

0x13aa,	// (0x000013aa) data_form_wide_pane

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1

0x0b92,	// (0x00000b92) input_focus_pane_cp6

0xbed3,	// (0x0000bed3) form_field_popup_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7

0x140d,	// (0x0000140d) list_form_pane

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8

0x1436,	// (0x00001436) list_form_wide_pane

0xbef5,	// (0x0000bef5) form_field_slider_pane_t1_ParamLimits

0xbef5,	// (0x0000bef5) form_field_slider_pane_t1

0xbf0d,	// (0x0000bf0d) form_field_slider_pane_t2_ParamLimits

0xbf0d,	// (0x0000bf0d) form_field_slider_pane_t2

0x0001,

0xf4de,	// (0x0000f4de) form_field_slider_pane_t_ParamLimits

0xf4de,	// (0x0000f4de) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xbf22,	// (0x0000bf22) slider_cont_pane_ParamLimits

0xbf22,	// (0x0000bf22) slider_cont_pane

0x1485,	// (0x00001485) form_field_slider_wide_pane_t1_ParamLimits

0x1485,	// (0x00001485) form_field_slider_wide_pane_t1

0x1497,	// (0x00001497) form_field_slider_wide_pane_t2_ParamLimits

0x1497,	// (0x00001497) form_field_slider_wide_pane_t2

0x0001,

0xaca0,	// (0x0000aca0) form_field_slider_wide_pane_t_ParamLimits

0xaca0,	// (0x0000aca0) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xbf36,	// (0x0000bf36) slider_cont_pane_cp1_ParamLimits

0xbf36,	// (0x0000bf36) slider_cont_pane_cp1

0xbf4a,	// (0x0000bf4a) slider_form_pane_cp

0x14c5,	// (0x000014c5) input_focus_pane_g1

0x14cd,	// (0x000014cd) input_focus_pane_g2

0x14d5,	// (0x000014d5) input_focus_pane_g3

0x14dd,	// (0x000014dd) input_focus_pane_g4

0x14e5,	// (0x000014e5) input_focus_pane_g5

0x14ed,	// (0x000014ed) input_focus_pane_g6

0x14f5,	// (0x000014f5) input_focus_pane_g7

0x14fd,	// (0x000014fd) input_focus_pane_g8

0x1505,	// (0x00001505) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xaca5,	// (0x0000aca5) input_focus_pane_g

0x3efc,	// (0x00003efc) wait_border_pane_g3_copy1

0xbf52,	// (0x0000bf52) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd44c,	// (0x0000d44c) data_form_wide_pane_t1

0xbf6c,	// (0x0000bf6c) list_form_graphic_pane_cp_ParamLimits

0xbf6c,	// (0x0000bf6c) list_form_graphic_pane_cp

0x5071,	// (0x00005071) slider_form_pane_g1

0x507a,	// (0x0000507a) slider_form_pane_g2

0x0006,

0xf598,	// (0x0000f598) slider_form_pane_g

0xbf6c,	// (0x0000bf6c) list_form_graphic_pane_ParamLimits

0xbf6c,	// (0x0000bf6c) list_form_graphic_pane

0x155d,	// (0x0000155d) list_form_graphic_pane_g1

0x1565,	// (0x00001565) list_form_graphic_pane_t1_ParamLimits

0x1565,	// (0x00001565) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xbf7e,	// (0x0000bf7e) find_pane_g1

0x1583,	// (0x00001583) input_find_pane

0xbf87,	// (0x0000bf87) input_find_pane_g1_ParamLimits

0xbf87,	// (0x0000bf87) input_find_pane_g1

0xbf93,	// (0x0000bf93) input_find_pane_t1_ParamLimits

0xbf93,	// (0x0000bf93) input_find_pane_t1

0xbfa8,	// (0x0000bfa8) input_find_pane_t2_ParamLimits

0xbfa8,	// (0x0000bfa8) input_find_pane_t2

0x0001,

0xf4e3,	// (0x0000f4e3) input_find_pane_t_ParamLimits

0xf4e3,	// (0x0000f4e3) input_find_pane_t

0x15c2,	// (0x000015c2) input_focus_pane_cp5_ParamLimits

0x15c2,	// (0x000015c2) input_focus_pane_cp5

0x15dc,	// (0x000015dc) bg_popup_window_pane_cp2_ParamLimits

0x15dc,	// (0x000015dc) bg_popup_window_pane_cp2

0x15e9,	// (0x000015e9) listscroll_menu_pane_ParamLimits

0x15e9,	// (0x000015e9) listscroll_menu_pane

0xbfc9,	// (0x0000bfc9) popup_submenu_window_ParamLimits

0xbfc9,	// (0x0000bfc9) popup_submenu_window

0x1621,	// (0x00001621) find_popup_pane_g1

0x1629,	// (0x00001629) input_popup_find_pane_cp

0x15c2,	// (0x000015c2) input_focus_pane_cp4_ParamLimits

0x15c2,	// (0x000015c2) input_focus_pane_cp4

0x163f,	// (0x0000163f) input_popup_find_pane_t1_ParamLimits

0x163f,	// (0x0000163f) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x166d,	// (0x0000166d) listscroll_popup_sub_pane

0x1675,	// (0x00001675) list_submenu_pane_ParamLimits

0x1675,	// (0x00001675) list_submenu_pane

0x1686,	// (0x00001686) scroll_pane_cp4

0x168e,	// (0x0000168e) list_single_popup_submenu_pane_ParamLimits

0x168e,	// (0x0000168e) list_single_popup_submenu_pane

0x16a2,	// (0x000016a2) list_single_popup_submenu_pane_g1

0x16aa,	// (0x000016aa) list_single_popup_submenu_pane_t1_ParamLimits

0x16aa,	// (0x000016aa) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16bf,	// (0x000016bf) tabs_2_active_pane_g1

0xc003,	// (0x0000c003) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16bf,	// (0x000016bf) tabs_2_passive_pane_g1

0xc003,	// (0x0000c003) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xc015,	// (0x0000c015) tabs_2_long_active_pane_t1

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp4

0x3756,	// (0x00003756) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xc028,	// (0x0000c028) tabs_3_long_active_pane_t1

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp5

0x3756,	// (0x00003756) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x1721,	// (0x00001721) listscroll_popup_fast_pane_ParamLimits

0x1721,	// (0x00001721) listscroll_popup_fast_pane

0x1730,	// (0x00001730) grid_popup_fast_pane_ParamLimits

0x1730,	// (0x00001730) grid_popup_fast_pane

0x1742,	// (0x00001742) scroll_pane_cp9_ParamLimits

0x1742,	// (0x00001742) scroll_pane_cp9

0x73c0,	// (0x000073c0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x73c0,	// (0x000073c0) list_single_graphic_hl_pane_t1_cp2

0x1766,	// (0x00001766) input_focus_pane_cp20_ParamLimits

0x1766,	// (0x00001766) input_focus_pane_cp20

0x1774,	// (0x00001774) query_popup_data_pane_t1_ParamLimits

0x1774,	// (0x00001774) query_popup_data_pane_t1

0x1787,	// (0x00001787) query_popup_data_pane_t2_ParamLimits

0x1787,	// (0x00001787) query_popup_data_pane_t2

0x17cd,	// (0x000017cd) query_popup_data_pane_t3_ParamLimits

0x17cd,	// (0x000017cd) query_popup_data_pane_t3

0x180e,	// (0x0000180e) query_popup_data_pane_t4_ParamLimits

0x180e,	// (0x0000180e) query_popup_data_pane_t4

0x184a,	// (0x0000184a) query_popup_data_pane_t5_ParamLimits

0x184a,	// (0x0000184a) query_popup_data_pane_t5

0x0004,

0xacbf,	// (0x0000acbf) query_popup_data_pane_t_ParamLimits

0xacbf,	// (0x0000acbf) query_popup_data_pane_t

0x14c5,	// (0x000014c5) bg_set_opt_pane_g1

0x14cd,	// (0x000014cd) bg_set_opt_pane_g2

0x14d5,	// (0x000014d5) bg_set_opt_pane_g3

0x14dd,	// (0x000014dd) bg_set_opt_pane_g4

0x14e5,	// (0x000014e5) bg_set_opt_pane_g5

0x14ed,	// (0x000014ed) bg_set_opt_pane_g6

0x14f5,	// (0x000014f5) bg_set_opt_pane_g7

0x14fd,	// (0x000014fd) bg_set_opt_pane_g8

0x1505,	// (0x00001505) bg_set_opt_pane_g9

0x0008,

0xacca,	// (0x0000acca) bg_set_opt_pane_g

0x2162,	// (0x00002162) control_top_pane_stacon_ParamLimits

0x2162,	// (0x00002162) control_top_pane_stacon

0x21b5,	// (0x000021b5) signal_pane_stacon_ParamLimits

0x21b5,	// (0x000021b5) signal_pane_stacon

0x21da,	// (0x000021da) stacon_top_pane_g1_ParamLimits

0x21da,	// (0x000021da) stacon_top_pane_g1

0x21fc,	// (0x000021fc) title_pane_stacon_ParamLimits

0x21fc,	// (0x000021fc) title_pane_stacon

0x2226,	// (0x00002226) uni_indicator_pane_stacon_ParamLimits

0x2226,	// (0x00002226) uni_indicator_pane_stacon

0x223b,	// (0x0000223b) battery_pane_stacon_ParamLimits

0x223b,	// (0x0000223b) battery_pane_stacon

0x227f,	// (0x0000227f) control_bottom_pane_stacon_ParamLimits

0x227f,	// (0x0000227f) control_bottom_pane_stacon

0x22a2,	// (0x000022a2) navi_pane_stacon_ParamLimits

0x22a2,	// (0x000022a2) navi_pane_stacon

0x22c5,	// (0x000022c5) stacon_bottom_pane_g1_ParamLimits

0x22c5,	// (0x000022c5) stacon_bottom_pane_g1

0x1881,	// (0x00001881) aid_levels_signal_lsc_ParamLimits

0x1881,	// (0x00001881) aid_levels_signal_lsc

0x1897,	// (0x00001897) signal_pane_stacon_g1_ParamLimits

0x1897,	// (0x00001897) signal_pane_stacon_g1

0x18ab,	// (0x000018ab) signal_pane_stacon_g2_ParamLimits

0x18ab,	// (0x000018ab) signal_pane_stacon_g2

0x0001,

0xacdd,	// (0x0000acdd) signal_pane_stacon_g_ParamLimits

0xacdd,	// (0x0000acdd) signal_pane_stacon_g

0x18ed,	// (0x000018ed) title_pane_stacon_t1_ParamLimits

0x18ed,	// (0x000018ed) title_pane_stacon_t1

0x1912,	// (0x00001912) uni_indicator_pane_stacon_g1

0x191c,	// (0x0000191c) uni_indicator_pane_stacon_g2

0x1926,	// (0x00001926) uni_indicator_pane_stacon_g3

0x1930,	// (0x00001930) uni_indicator_pane_stacon_g4

0x0003,

0xace9,	// (0x0000ace9) uni_indicator_pane_stacon_g

0x193a,	// (0x0000193a) control_top_pane_stacon_g1

0x1942,	// (0x00001942) control_top_pane_stacon_t1_ParamLimits

0x1942,	// (0x00001942) control_top_pane_stacon_t1

0x1979,	// (0x00001979) aid_levels_battery_lsc_ParamLimits

0x1979,	// (0x00001979) aid_levels_battery_lsc

0x1990,	// (0x00001990) battery_pane_stacon_g1_ParamLimits

0x1990,	// (0x00001990) battery_pane_stacon_g1

0x19a3,	// (0x000019a3) battery_pane_stacon_g2_ParamLimits

0x19a3,	// (0x000019a3) battery_pane_stacon_g2

0x0001,

0xacf2,	// (0x0000acf2) battery_pane_stacon_g_ParamLimits

0xacf2,	// (0x0000acf2) battery_pane_stacon_g

0x19e1,	// (0x000019e1) navi_icon_pane_stacon

0x19f5,	// (0x000019f5) navi_navi_pane_stacon

0x19e1,	// (0x000019e1) navi_text_pane_stacon

0x193a,	// (0x0000193a) control_bottom_pane_stacon_g1

0x1a09,	// (0x00001a09) control_bottom_pane_stacon_t1_ParamLimits

0x1a09,	// (0x00001a09) control_bottom_pane_stacon_t1

0xc03a,	// (0x0000c03a) grid_app_pane_ParamLimits

0xc03a,	// (0x0000c03a) grid_app_pane

0xc072,	// (0x0000c072) scroll_pane_cp15_ParamLimits

0xc072,	// (0x0000c072) scroll_pane_cp15

0xc087,	// (0x0000c087) cell_app_pane_ParamLimits

0xc087,	// (0x0000c087) cell_app_pane

0xc0cc,	// (0x0000c0cc) cell_app_pane_g1_ParamLimits

0xc0cc,	// (0x0000c0cc) cell_app_pane_g1

0x1ad5,	// (0x00001ad5) cell_app_pane_g2_ParamLimits

0x1ad5,	// (0x00001ad5) cell_app_pane_g2

0x0001,

0xf4e8,	// (0x0000f4e8) cell_app_pane_g_ParamLimits

0xf4e8,	// (0x0000f4e8) cell_app_pane_g

0xc0ec,	// (0x0000c0ec) cell_app_pane_t1_ParamLimits

0xc0ec,	// (0x0000c0ec) cell_app_pane_t1

0x1af8,	// (0x00001af8) grid_highlight_pane_ParamLimits

0x1af8,	// (0x00001af8) grid_highlight_pane

0x14c5,	// (0x000014c5) cell_highlight_pane_g1

0x14cd,	// (0x000014cd) cell_highlight_pane_g2

0x14d5,	// (0x000014d5) cell_highlight_pane_g3

0x14dd,	// (0x000014dd) cell_highlight_pane_g4

0x14e5,	// (0x000014e5) cell_highlight_pane_g5

0x14ed,	// (0x000014ed) cell_highlight_pane_g6

0x14f5,	// (0x000014f5) cell_highlight_pane_g7

0x14fd,	// (0x000014fd) cell_highlight_pane_g8

0x1505,	// (0x00001505) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xaca5,	// (0x0000aca5) cell_highlight_pane_g

0x1b1c,	// (0x00001b1c) bg_scroll_pane

0x1b3b,	// (0x00001b3b) scroll_handle_pane

0x1b8c,	// (0x00001b8c) scroll_bg_pane_g1

0x1ba1,	// (0x00001ba1) scroll_bg_pane_g2

0x1bb9,	// (0x00001bb9) scroll_bg_pane_g3

0x0002,

0xacfc,	// (0x0000acfc) scroll_bg_pane_g

0x1bce,	// (0x00001bce) scroll_handle_focus_pane_ParamLimits

0x1bce,	// (0x00001bce) scroll_handle_focus_pane

0x1b8c,	// (0x00001b8c) scroll_handle_pane_g1

0x1bdb,	// (0x00001bdb) scroll_handle_pane_g2

0x1bb9,	// (0x00001bb9) scroll_handle_pane_g3

0x0002,

0xad03,	// (0x0000ad03) scroll_handle_pane_g

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp21_ParamLimits

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp21

0x1bef,	// (0x00001bef) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bef,	// (0x00001bef) popup_fep_japan_predictive_window_t1

0x1c09,	// (0x00001c09) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c09,	// (0x00001c09) popup_fep_japan_predictive_window_t2

0x1c3c,	// (0x00001c3c) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c3c,	// (0x00001c3c) popup_fep_japan_predictive_window_t3

0x0002,

0xad0a,	// (0x0000ad0a) popup_fep_japan_predictive_window_t_ParamLimits

0xad0a,	// (0x0000ad0a) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c73,	// (0x00001c73) listscroll_japin_cand_pane

0x1c7b,	// (0x00001c7b) popup_fep_japan_candidate_window_t1

0x1c89,	// (0x00001c89) candidate_pane_ParamLimits

0x1c89,	// (0x00001c89) candidate_pane

0x1c9b,	// (0x00001c9b) scroll_pane_cp30

0x1ca3,	// (0x00001ca3) list_single_popup_jap_candidate_pane_ParamLimits

0x1ca3,	// (0x00001ca3) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cb8,	// (0x00001cb8) list_single_popup_jap_candidate_pane_t1

0x1cc7,	// (0x00001cc7) level_1_signal

0x1cd9,	// (0x00001cd9) level_2_signal

0x1cec,	// (0x00001cec) level_3_signal

0x1cff,	// (0x00001cff) level_4_signal

0x1d12,	// (0x00001d12) level_5_signal

0x1d25,	// (0x00001d25) level_6_signal

0x1d38,	// (0x00001d38) level_7_signal

0x1cc7,	// (0x00001cc7) level_1_battery

0x1cd9,	// (0x00001cd9) level_2_battery

0x1cec,	// (0x00001cec) level_3_battery

0x1cff,	// (0x00001cff) level_4_battery

0x1d12,	// (0x00001d12) level_5_battery

0x1d25,	// (0x00001d25) level_6_battery

0x1d38,	// (0x00001d38) level_7_battery

0x1d82,	// (0x00001d82) list_menu_pane_ParamLimits

0x1d82,	// (0x00001d82) list_menu_pane

0x1d98,	// (0x00001d98) scroll_pane_cp25_ParamLimits

0x1d98,	// (0x00001d98) scroll_pane_cp25

0x1db1,	// (0x00001db1) list_double2_graphic_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double2_graphic_pane_cp2

0x1db1,	// (0x00001db1) list_double2_large_graphic_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double2_large_graphic_pane_cp2

0x1db1,	// (0x00001db1) list_double2_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double2_pane_cp2

0x1db1,	// (0x00001db1) list_double_graphic_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double_graphic_pane_cp2

0x1db1,	// (0x00001db1) list_double_large_graphic_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double_large_graphic_pane_cp2

0x1db1,	// (0x00001db1) list_double_number_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double_number_pane_cp2

0x1db1,	// (0x00001db1) list_double_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double_pane_cp2

0xc10c,	// (0x0000c10c) list_single_2graphic_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_2graphic_pane_cp2

0xc10c,	// (0x0000c10c) list_single_graphic_heading_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_graphic_heading_pane_cp2

0xc10c,	// (0x0000c10c) list_single_graphic_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_graphic_pane_cp2

0xc10c,	// (0x0000c10c) list_single_heading_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_heading_pane_cp2

0x1dee,	// (0x00001dee) list_single_large_graphic_pane_cp2_ParamLimits

0x1dee,	// (0x00001dee) list_single_large_graphic_pane_cp2

0xc10c,	// (0x0000c10c) list_single_number_heading_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_number_heading_pane_cp2

0xc10c,	// (0x0000c10c) list_single_number_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_number_pane_cp2

0xc10c,	// (0x0000c10c) list_single_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_pane_cp2

0x1ec5,	// (0x00001ec5) bg_popup_sub_pane_cp22

0x1eea,	// (0x00001eea) popup_side_volume_key_window_g1

0x1f14,	// (0x00001f14) popup_side_volume_key_window_t1

0x1f30,	// (0x00001f30) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f38,	// (0x00001f38) fep_china_uni_candidate_pane_ParamLimits

0x1f38,	// (0x00001f38) fep_china_uni_candidate_pane

0x1f4c,	// (0x00001f4c) fep_china_uni_entry_pane

0x1f5c,	// (0x00001f5c) popup_fep_china_uni_window_g1

0x1f78,	// (0x00001f78) fep_china_uni_entry_pane_g1

0x1f80,	// (0x00001f80) fep_china_uni_entry_pane_g2

0x0001,

0xad3b,	// (0x0000ad3b) fep_china_uni_entry_pane_g

0x1f88,	// (0x00001f88) fep_entry_item_pane

0x1f92,	// (0x00001f92) fep_candidate_item_pane

0x1f9a,	// (0x00001f9a) fep_china_uni_candidate_pane_g1

0x1fa2,	// (0x00001fa2) fep_china_uni_candidate_pane_g2

0x1faa,	// (0x00001faa) fep_china_uni_candidate_pane_g3

0x1fb2,	// (0x00001fb2) fep_china_uni_candidate_pane_g4

0x0003,

0xad40,	// (0x0000ad40) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fba,	// (0x00001fba) fep_entry_item_pane_t1_ParamLimits

0x1fba,	// (0x00001fba) fep_entry_item_pane_t1

0x1fd0,	// (0x00001fd0) fep_candidate_item_pane_t1_ParamLimits

0x1fd0,	// (0x00001fd0) fep_candidate_item_pane_t1

0x1fe5,	// (0x00001fe5) fep_candidate_item_pane_t2_ParamLimits

0x1fe5,	// (0x00001fe5) fep_candidate_item_pane_t2

0x0001,

0xad49,	// (0x0000ad49) fep_candidate_item_pane_t_ParamLimits

0xad49,	// (0x0000ad49) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x1ff7,	// (0x00001ff7) level_1_signal_lsc

0x2000,	// (0x00002000) level_2_signal_lsc

0x2009,	// (0x00002009) level_3_signal_lsc

0x2012,	// (0x00002012) level_4_signal_lsc

0x201b,	// (0x0000201b) level_5_signal_lsc

0x2024,	// (0x00002024) level_6_signal_lsc

0x202d,	// (0x0000202d) level_7_signal_lsc

0x202d,	// (0x0000202d) level_1_battery_lsc

0x2036,	// (0x00002036) level_2_battery_lsc

0x203f,	// (0x0000203f) level_3_battery_lsc

0x2048,	// (0x00002048) level_4_battery_lsc

0x2051,	// (0x00002051) level_5_battery_lsc

0x205a,	// (0x0000205a) level_6_battery_lsc

0x1ff7,	// (0x00001ff7) level_7_battery_lsc

0x2063,	// (0x00002063) scroll_handle_focus_pane_g1

0x206c,	// (0x0000206c) scroll_handle_focus_pane_g2

0x2075,	// (0x00002075) scroll_handle_focus_pane_g3

0x0002,

0xad4e,	// (0x0000ad4e) scroll_handle_focus_pane_g

0xc199,	// (0x0000c199) list_single_2graphic_pane_g1_ParamLimits

0xc199,	// (0x0000c199) list_single_2graphic_pane_g1

0xbade,	// (0x0000bade) list_single_2graphic_pane_g2_ParamLimits

0xbade,	// (0x0000bade) list_single_2graphic_pane_g2

0x3585,	// (0x00003585) list_single_2graphic_pane_g3_ParamLimits

0x3585,	// (0x00003585) list_single_2graphic_pane_g3

0xc1a5,	// (0x0000c1a5) list_single_2graphic_pane_g4_ParamLimits

0xc1a5,	// (0x0000c1a5) list_single_2graphic_pane_g4

0x0003,

0xf4f6,	// (0x0000f4f6) list_single_2graphic_pane_g_ParamLimits

0xf4f6,	// (0x0000f4f6) list_single_2graphic_pane_g

0xc1b6,	// (0x0000c1b6) list_single_2graphic_pane_t1_ParamLimits

0xc1b6,	// (0x0000c1b6) list_single_2graphic_pane_t1

0xc1e4,	// (0x0000c1e4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc1e4,	// (0x0000c1e4) list_double2_graphic_large_graphic_pane_g1

0xbb27,	// (0x0000bb27) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb27,	// (0x0000bb27) list_double2_graphic_large_graphic_pane_g2

0xbb38,	// (0x0000bb38) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbb38,	// (0x0000bb38) list_double2_graphic_large_graphic_pane_g3

0xc1f6,	// (0x0000c1f6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc1f6,	// (0x0000c1f6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf4ff,	// (0x0000f4ff) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf4ff,	// (0x0000f4ff) list_double2_graphic_large_graphic_pane_g

0xc202,	// (0x0000c202) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc202,	// (0x0000c202) list_double2_graphic_large_graphic_pane_t1

0xc218,	// (0x0000c218) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc218,	// (0x0000c218) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf508,	// (0x0000f508) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf508,	// (0x0000f508) list_double2_graphic_large_graphic_pane_t

0x238d,	// (0x0000238d) popup_fast_swap_window_ParamLimits

0x238d,	// (0x0000238d) popup_fast_swap_window

0x23a9,	// (0x000023a9) popup_side_volume_key_window

0x23c5,	// (0x000023c5) stacon_top_pane

0x23cf,	// (0x000023cf) status_pane_ParamLimits

0x23cf,	// (0x000023cf) status_pane

0xc25a,	// (0x0000c25a) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12ad,	// (0x000012ad) scroll_pane_cp121

0x12a4,	// (0x000012a4) set_content_pane

0x210d,	// (0x0000210d) bg_active_tab_pane_g1_cp1

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp1

0x211f,	// (0x0000211f) bg_active_tab_pane_g3_cp1

0x210d,	// (0x0000210d) bg_passive_tab_pane_g1_cp1

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp1

0x211f,	// (0x0000211f) bg_passive_tab_pane_g3_cp1

0x2128,	// (0x00002128) bg_active_tab_pane_g1_cp2

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp2

0x2131,	// (0x00002131) bg_active_tab_pane_g3_cp2

0x2128,	// (0x00002128) bg_passive_tab_pane_g1_cp2

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp2

0x2131,	// (0x00002131) bg_passive_tab_pane_g3_cp2

0x213a,	// (0x0000213a) bg_active_tab_pane_g1_cp3

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp3

0x2143,	// (0x00002143) bg_active_tab_pane_g3_cp3

0x213a,	// (0x0000213a) bg_passive_tab_pane_g1_cp3

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp3

0x2143,	// (0x00002143) bg_passive_tab_pane_g3_cp3

0x214c,	// (0x0000214c) bg_active_tab_pane_g1_cp4

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp4

0x2157,	// (0x00002157) bg_active_tab_pane_g3_cp4

0x214c,	// (0x0000214c) bg_passive_tab_pane_g1_cp4

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp4

0x2157,	// (0x00002157) bg_passive_tab_pane_g3_cp4

0x22e1,	// (0x000022e1) bg_active_tab_pane_g1_cp5

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp5

0x22ea,	// (0x000022ea) bg_active_tab_pane_g3_cp5

0x22e1,	// (0x000022e1) bg_passive_tab_pane_g1_cp5

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp5

0x22ea,	// (0x000022ea) bg_passive_tab_pane_g3_cp5

0x5853,	// (0x00005853) list_set_graphic_pane_ParamLimits

0x5853,	// (0x00005853) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc22a,	// (0x0000c22a) list_set_graphic_pane_g1_ParamLimits

0xc22a,	// (0x0000c22a) list_set_graphic_pane_g1

0xc236,	// (0x0000c236) list_set_graphic_pane_g2_ParamLimits

0xc236,	// (0x0000c236) list_set_graphic_pane_g2

0x0001,

0xf50d,	// (0x0000f50d) list_set_graphic_pane_g_ParamLimits

0xf50d,	// (0x0000f50d) list_set_graphic_pane_g

0x0009,

0xb0e6,	// (0x0000b0e6) volume_small_pane_cp_g

0x2340,	// (0x00002340) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2340,	// (0x00002340) list_double2_large_graphic_pane_g1_cp2

0x234c,	// (0x0000234c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x234c,	// (0x0000234c) list_double2_large_graphic_pane_g2_cp2

0x235d,	// (0x0000235d) list_double2_large_graphic_pane_g3_cp2

0x2365,	// (0x00002365) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2365,	// (0x00002365) list_double2_large_graphic_pane_t1_cp2

0x237b,	// (0x0000237b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x237b,	// (0x0000237b) list_double2_large_graphic_pane_t2_cp2

0x4b33,	// (0x00004b33) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b33,	// (0x00004b33) list_double_large_graphic_pane_g1_cp2

0x4b44,	// (0x00004b44) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b44,	// (0x00004b44) list_double_large_graphic_pane_g2_cp2

0x24f6,	// (0x000024f6) list_double_large_graphic_pane_g3_cp2

0x4b55,	// (0x00004b55) list_double_large_graphic_pane_g4_cp

0x4b5d,	// (0x00004b5d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b5d,	// (0x00004b5d) list_double_large_graphic_pane_t1_cp2

0x4b74,	// (0x00004b74) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b74,	// (0x00004b74) list_double_large_graphic_pane_t2_cp2

0x23e8,	// (0x000023e8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23e8,	// (0x000023e8) list_double2_graphic_pane_g1_cp2

0x23f6,	// (0x000023f6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23f6,	// (0x000023f6) list_double2_graphic_pane_g2_cp2

0x2407,	// (0x00002407) list_double2_graphic_pane_g3_cp2

0x2411,	// (0x00002411) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2411,	// (0x00002411) list_double2_graphic_pane_t1_cp2

0x2427,	// (0x00002427) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2427,	// (0x00002427) list_double2_graphic_pane_t2_cp2

0x2439,	// (0x00002439) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2439,	// (0x00002439) list_single_number_heading_pane_g1_cp2

0x2445,	// (0x00002445) list_single_number_heading_pane_g2_cp2

0x244d,	// (0x0000244d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x244d,	// (0x0000244d) list_single_number_heading_pane_t1_cp2

0x2463,	// (0x00002463) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2463,	// (0x00002463) list_single_number_heading_pane_t2_cp2

0x2475,	// (0x00002475) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2475,	// (0x00002475) list_single_number_heading_pane_t3_cp2

0x2439,	// (0x00002439) list_single_heading_pane_g1_cp2_ParamLimits

0x2439,	// (0x00002439) list_single_heading_pane_g1_cp2

0x2445,	// (0x00002445) list_single_heading_pane_g2_cp2

0x244d,	// (0x0000244d) list_single_heading_pane_t1_cp2_ParamLimits

0x244d,	// (0x0000244d) list_single_heading_pane_t1_cp2

0x493b,	// (0x0000493b) list_single_heading_pane_t2_cp2_ParamLimits

0x493b,	// (0x0000493b) list_single_heading_pane_t2_cp2

0x4883,	// (0x00004883) list_double_graphic_pane_g1_cp2_ParamLimits

0x4883,	// (0x00004883) list_double_graphic_pane_g1_cp2

0x488f,	// (0x0000488f) list_double_graphic_pane_g2_cp2_ParamLimits

0x488f,	// (0x0000488f) list_double_graphic_pane_g2_cp2

0x489e,	// (0x0000489e) list_double_graphic_pane_g3_cp2

0x48a6,	// (0x000048a6) list_double_graphic_pane_t1_cp2_ParamLimits

0x48a6,	// (0x000048a6) list_double_graphic_pane_t1_cp2

0x48bc,	// (0x000048bc) list_double_graphic_pane_t2_cp2_ParamLimits

0x48bc,	// (0x000048bc) list_double_graphic_pane_t2_cp2

0x24ea,	// (0x000024ea) list_double_number_pane_g1_cp2_ParamLimits

0x24ea,	// (0x000024ea) list_double_number_pane_g1_cp2

0x24f6,	// (0x000024f6) list_double_number_pane_g2_cp2

0x4847,	// (0x00004847) list_double_number_pane_t1_cp2_ParamLimits

0x4847,	// (0x00004847) list_double_number_pane_t1_cp2

0x485b,	// (0x0000485b) list_double_number_pane_t2_cp2_ParamLimits

0x485b,	// (0x0000485b) list_double_number_pane_t2_cp2

0x4871,	// (0x00004871) list_double_number_pane_t3_cp2_ParamLimits

0x4871,	// (0x00004871) list_double_number_pane_t3_cp2

0x471f,	// (0x0000471f) list_single_graphic_pane_g1_cp2_ParamLimits

0x471f,	// (0x0000471f) list_single_graphic_pane_g1_cp2

0x254e,	// (0x0000254e) list_single_graphic_pane_g2_cp2_ParamLimits

0x254e,	// (0x0000254e) list_single_graphic_pane_g2_cp2

0x255a,	// (0x0000255a) list_single_graphic_pane_g3_cp2

0x46f5,	// (0x000046f5) list_single_graphic_pane_t1_cp2_ParamLimits

0x46f5,	// (0x000046f5) list_single_graphic_pane_t1_cp2

0x254e,	// (0x0000254e) list_single_number_pane_g1_cp2_ParamLimits

0x254e,	// (0x0000254e) list_single_number_pane_g1_cp2

0x255a,	// (0x0000255a) list_single_number_pane_g2_cp2

0x46f5,	// (0x000046f5) list_single_number_pane_t1_cp2_ParamLimits

0x46f5,	// (0x000046f5) list_single_number_pane_t1_cp2

0x470b,	// (0x0000470b) list_single_number_pane_t2_cp2_ParamLimits

0x470b,	// (0x0000470b) list_single_number_pane_t2_cp2

0x234c,	// (0x0000234c) list_double2_pane_g1_cp2_ParamLimits

0x234c,	// (0x0000234c) list_double2_pane_g1_cp2

0x235d,	// (0x0000235d) list_double2_pane_g2_cp2

0x24c2,	// (0x000024c2) list_double2_pane_t1_cp2_ParamLimits

0x24c2,	// (0x000024c2) list_double2_pane_t1_cp2

0x24d8,	// (0x000024d8) list_double2_pane_t2_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_double2_pane_t2_cp2

0x24ea,	// (0x000024ea) list_double_pane_g1_cp2_ParamLimits

0x24ea,	// (0x000024ea) list_double_pane_g1_cp2

0x24f6,	// (0x000024f6) list_double_pane_g2_cp2

0x24fe,	// (0x000024fe) list_double_pane_t1_cp2_ParamLimits

0x24fe,	// (0x000024fe) list_double_pane_t1_cp2

0x2514,	// (0x00002514) list_double_pane_t2_cp2_ParamLimits

0x2514,	// (0x00002514) list_double_pane_t2_cp2

0x253e,	// (0x0000253e) list_single_pane_cp2_g3

0x254e,	// (0x0000254e) list_single_pane_g1_cp2_ParamLimits

0x254e,	// (0x0000254e) list_single_pane_g1_cp2

0x255a,	// (0x0000255a) list_single_pane_g2_cp2

0x2562,	// (0x00002562) list_single_pane_t1_cp2_ParamLimits

0x2562,	// (0x00002562) list_single_pane_t1_cp2

0x257a,	// (0x0000257a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x257a,	// (0x0000257a) list_single_large_graphic_pane_g1_cp2

0x2586,	// (0x00002586) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2586,	// (0x00002586) list_single_large_graphic_pane_g2_cp2

0x2592,	// (0x00002592) list_single_large_graphic_pane_g3_cp2

0x259a,	// (0x0000259a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x259a,	// (0x0000259a) list_single_large_graphic_pane_g4_cp1

0x25b4,	// (0x000025b4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25b4,	// (0x000025b4) list_single_large_graphic_pane_t1_cp2

0x456e,	// (0x0000456e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x456e,	// (0x0000456e) list_single_graphic_heading_pane_g1_cp2

0x453b,	// (0x0000453b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x453b,	// (0x0000453b) list_single_graphic_heading_pane_g4_cp2

0x255a,	// (0x0000255a) list_single_graphic_heading_pane_g5_cp2

0x457a,	// (0x0000457a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x457a,	// (0x0000457a) list_single_graphic_heading_pane_t1_cp2

0x4590,	// (0x00004590) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4590,	// (0x00004590) list_single_graphic_heading_pane_t2_cp2

0x452f,	// (0x0000452f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x452f,	// (0x0000452f) list_single_2graphic_pane_g1_cp2

0x453b,	// (0x0000453b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x453b,	// (0x0000453b) list_single_2graphic_pane_g2_cp2

0x255a,	// (0x0000255a) list_single_2graphic_pane_g3_cp2

0x454c,	// (0x0000454c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x454c,	// (0x0000454c) list_single_2graphic_pane_g4_cp2

0x4558,	// (0x00004558) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4558,	// (0x00004558) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4107,	// (0x00004107) list_highlight_pane_g1_cp1

0x410f,	// (0x0000410f) list_highlight_pane_g2_cp1

0x4117,	// (0x00004117) list_highlight_pane_g3_cp1

0x411f,	// (0x0000411f) list_highlight_pane_g4_cp1

0x4127,	// (0x00004127) list_highlight_pane_g5_cp1

0x412f,	// (0x0000412f) list_highlight_pane_g6_cp1

0x4137,	// (0x00004137) list_highlight_pane_g7_cp1

0x413f,	// (0x0000413f) list_highlight_pane_g8_cp1

0x4147,	// (0x00004147) list_highlight_pane_g9_cp1

0xd162,	// (0x0000d162) form_field_slider_pane_t3

0xd170,	// (0x0000d170) form_field_slider_pane_t4

0x4043,	// (0x00004043) slider_form_pane_ParamLimits

0x4043,	// (0x00004043) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4985,	// (0x00004985) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xaf01,	// (0x0000af01) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25ca,	// (0x000025ca) text_digital

0x25d9,	// (0x000025d9) text_primary

0x25e8,	// (0x000025e8) text_primary_small

0x25f7,	// (0x000025f7) text_secondary

0x2606,	// (0x00002606) text_title

0x5279,	// (0x00005279) bg_passive_tab_pane_g1_cp3_srt

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp3_srt

0x5282,	// (0x00005282) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x528b,	// (0x0000528b) tabs_4_active_pane_srt_g1

0xd4f5,	// (0x0000d4f5) tabs_4_active_pane_srt_t1_ParamLimits

0xd4f5,	// (0x0000d4f5) tabs_4_active_pane_srt_t1

0x5279,	// (0x00005279) bg_active_tab_pane_g1_cp3_copy1

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp3_copy1

0x5282,	// (0x00005282) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp4_srt

0x4e2c,	// (0x00004e2c) bg_passive_tab_pane_g1_cp4_srt

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp4_srt

0x4e35,	// (0x00004e35) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd2e1,	// (0x0000d2e1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd2e1,	// (0x0000d2e1) tabs_2_long_active_pane_srt_t1

0x4e2c,	// (0x00004e2c) bg_active_tab_pane_g1_cp4_srt

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp4_srt

0x4e35,	// (0x00004e35) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp5_srt

0x22e1,	// (0x000022e1) bg_passive_tab_pane_g1_cp5_srt

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp5_srt

0x22ea,	// (0x000022ea) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd2cb,	// (0x0000d2cb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd2cb,	// (0x0000d2cb) tabs_3_long_active_pane_srt_t1

0x22e1,	// (0x000022e1) bg_active_tab_pane_g1_cp5_srt

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp5_srt

0x22ea,	// (0x000022ea) bg_active_tab_pane_g3_cp5_srt

0x4e0c,	// (0x00004e0c) navi_text_pane_srt_t1

0x4e04,	// (0x00004e04) navi_icon_pane_srt_g1

0x2878,	// (0x00002878) midp_editing_number_pane_srt

0x2615,	// (0x00002615) midp_ticker_pane_srt

0x2880,	// (0x00002880) midp_ticker_pane_srt_g1

0x2888,	// (0x00002888) midp_ticker_pane_srt_g2

0x0001,

0xad8b,	// (0x0000ad8b) midp_ticker_pane_srt_g

0x2890,	// (0x00002890) midp_ticker_pane_srt_t1

0x4df5,	// (0x00004df5) midp_editing_number_pane_t1_copy1

0x2b8c,	// (0x00002b8c) listscroll_midp_pane

0x2b8c,	// (0x00002b8c) midp_form_pane

0x2681,	// (0x00002681) midp_info_popup_window_ParamLimits

0x2681,	// (0x00002681) midp_info_popup_window

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp50_ParamLimits

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp50

0x3d3f,	// (0x00003d3f) listscroll_midp_info_pane_ParamLimits

0x3d3f,	// (0x00003d3f) listscroll_midp_info_pane

0x3d27,	// (0x00003d27) listscroll_form_midp_pane_ParamLimits

0x3d27,	// (0x00003d27) listscroll_form_midp_pane

0x3d33,	// (0x00003d33) scroll_bar_cp050

0xd156,	// (0x0000d156) list_midp_pane

0x60af,	// (0x000060af) signal_pane_g2_cp

0x3c41,	// (0x00003c41) listscroll_midp_info_pane_t1_ParamLimits

0x3c41,	// (0x00003c41) listscroll_midp_info_pane_t1

0x3c59,	// (0x00003c59) listscroll_midp_info_pane_t2_ParamLimits

0x3c59,	// (0x00003c59) listscroll_midp_info_pane_t2

0x3c97,	// (0x00003c97) listscroll_midp_info_pane_t3_ParamLimits

0x3c97,	// (0x00003c97) listscroll_midp_info_pane_t3

0x3cd1,	// (0x00003cd1) listscroll_midp_info_pane_t4_ParamLimits

0x3cd1,	// (0x00003cd1) listscroll_midp_info_pane_t4

0x0003,

0xae3c,	// (0x0000ae3c) listscroll_midp_info_pane_t_ParamLimits

0xae3c,	// (0x0000ae3c) listscroll_midp_info_pane_t

0x1686,	// (0x00001686) scroll_pane_cp21

0x3bdf,	// (0x00003bdf) form_midp_field_choice_group_pane

0x3be8,	// (0x00003be8) form_midp_field_text_pane

0x3c27,	// (0x00003c27) form_midp_field_time_pane

0x3c2f,	// (0x00003c2f) form_midp_gauge_slider_pane

0x3c38,	// (0x00003c38) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd13f,	// (0x0000d13f) list_single_midp_pane_ParamLimits

0xd13f,	// (0x0000d13f) list_single_midp_pane

0xd11d,	// (0x0000d11d) form_midp_field_text_pane_t1

0x389b,	// (0x0000389b) input_focus_pane_cp050

0x3b9f,	// (0x00003b9f) list_midp_form_text_pane

0x3b37,	// (0x00003b37) form_midp_field_choice_group_pane_t1

0x3b45,	// (0x00003b45) input_focus_pane_cp051

0x3b59,	// (0x00003b59) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b1b,	// (0x00003b1b) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b29,	// (0x00003b29) form_midp_field_time_pane_t2

0x0001,

0x272f,	// (0x0000272f) aid_navinavi_width_2_pane

0xae37,	// (0x0000ae37) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3adb,	// (0x00003adb) form_midp_gauge_slider_pane_t1

0x3ae9,	// (0x00003ae9) form_midp_gauge_slider_pane_t2

0xd101,	// (0x0000d101) form_midp_gauge_slider_pane_t3

0xd10f,	// (0x0000d10f) form_midp_gauge_slider_pane_t4

0x0003,

0xf55f,	// (0x0000f55f) form_midp_gauge_slider_pane_t

0x3b13,	// (0x00003b13) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3aa8,	// (0x00003aa8) form_midp_gauge_wait_pane_t1_ParamLimits

0x3aa8,	// (0x00003aa8) form_midp_gauge_wait_pane_t1

0x3aba,	// (0x00003aba) form_midp_gauge_wait_pane_t2_ParamLimits

0x3aba,	// (0x00003aba) form_midp_gauge_wait_pane_t2

0x0001,

0xae29,	// (0x0000ae29) form_midp_gauge_wait_pane_t_ParamLimits

0xae29,	// (0x0000ae29) form_midp_gauge_wait_pane_t

0x3acc,	// (0x00003acc) form_midp_wait_pane_ParamLimits

0x3acc,	// (0x00003acc) form_midp_wait_pane

0x3a72,	// (0x00003a72) form_midp_image_pane_g1

0x3a7b,	// (0x00003a7b) form_midp_image_pane_t1

0x3a8a,	// (0x00003a8a) form_midp_image_pane_t2

0x3a99,	// (0x00003a99) form_midp_image_pane_t3

0x0002,

0xae22,	// (0x0000ae22) form_midp_image_pane_t

0x3a5a,	// (0x00003a5a) list_single_midp_pane_g1

0x3a63,	// (0x00003a63) list_single_midp_pane_t1

0xd0ec,	// (0x0000d0ec) list_midp_form_item_pane_ParamLimits

0xd0ec,	// (0x0000d0ec) list_midp_form_item_pane

0x26d7,	// (0x000026d7) list_midp_form_item_pane_t1

0x26e6,	// (0x000026e6) midp_ticker_pane_g1

0x26f2,	// (0x000026f2) midp_ticker_pane_g2

0x0001,

0xad71,	// (0x0000ad71) midp_ticker_pane_g

0x26fe,	// (0x000026fe) midp_ticker_pane_t1

0x50f1,	// (0x000050f1) midp_editing_number_pane_t1

0x50cf,	// (0x000050cf) midp_editing_number_pane

0x50de,	// (0x000050de) midp_ticker_pane

0x4dbd,	// (0x00004dbd) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dc5,	// (0x00004dc5) listscroll_ai_message_pane

0x4d47,	// (0x00004d47) ai_message_heading_pane_g1_ParamLimits

0x4d47,	// (0x00004d47) ai_message_heading_pane_g1

0x4d53,	// (0x00004d53) ai_message_heading_pane_g2_ParamLimits

0x4d53,	// (0x00004d53) ai_message_heading_pane_g2

0x4d5f,	// (0x00004d5f) ai_message_heading_pane_g3_ParamLimits

0x4d5f,	// (0x00004d5f) ai_message_heading_pane_g3

0x4d6b,	// (0x00004d6b) ai_message_heading_pane_g4_ParamLimits

0x4d6b,	// (0x00004d6b) ai_message_heading_pane_g4

0x0003,

0xaf63,	// (0x0000af63) ai_message_heading_pane_g_ParamLimits

0xaf63,	// (0x0000af63) ai_message_heading_pane_g

0x4d77,	// (0x00004d77) ai_message_heading_pane_t1_ParamLimits

0x4d77,	// (0x00004d77) ai_message_heading_pane_t1

0x4d91,	// (0x00004d91) ai_message_heading_pane_t2_ParamLimits

0x4d91,	// (0x00004d91) ai_message_heading_pane_t2

0x0001,

0xaf6c,	// (0x0000af6c) ai_message_heading_pane_t_ParamLimits

0xaf6c,	// (0x0000af6c) ai_message_heading_pane_t

0x4da3,	// (0x00004da3) bg_popup_heading_pane_cp1_ParamLimits

0x4da3,	// (0x00004da3) bg_popup_heading_pane_cp1

0x4d35,	// (0x00004d35) list_ai_message_pane_ParamLimits

0x4d35,	// (0x00004d35) list_ai_message_pane

0x1686,	// (0x00001686) scroll_pane_cp10

0x4c81,	// (0x00004c81) list_ai_message_pane_g1

0x4c89,	// (0x00004c89) list_ai_message_pane_g2

0x0001,

0xaf40,	// (0x0000af40) list_ai_message_pane_g

0x4c91,	// (0x00004c91) list_ai_message_pane_t1_ParamLimits

0x4c91,	// (0x00004c91) list_ai_message_pane_t1

0x4ca6,	// (0x00004ca6) list_ai_message_pane_t2_ParamLimits

0x4ca6,	// (0x00004ca6) list_ai_message_pane_t2

0x4cbb,	// (0x00004cbb) list_ai_message_pane_t3_ParamLimits

0x4cbb,	// (0x00004cbb) list_ai_message_pane_t3

0x4cd0,	// (0x00004cd0) list_ai_message_pane_t4_ParamLimits

0x4cd0,	// (0x00004cd0) list_ai_message_pane_t4

0x0003,

0xaf45,	// (0x0000af45) list_ai_message_pane_t_ParamLimits

0xaf45,	// (0x0000af45) list_ai_message_pane_t

0xd298,	// (0x0000d298) cell_ai_soft_ind_pane_ParamLimits

0xd298,	// (0x0000d298) cell_ai_soft_ind_pane

0x2710,	// (0x00002710) cell_ai_soft_ind_pane_g1_ParamLimits

0x2710,	// (0x00002710) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x271d,	// (0x0000271d) text_secondary_cp56_ParamLimits

0x271d,	// (0x0000271d) text_secondary_cp56

0x4c41,	// (0x00004c41) example_general_pane_ParamLimits

0x4c41,	// (0x00004c41) example_general_pane

0x4c4d,	// (0x00004c4d) example_parent_pane_g1_ParamLimits

0x4c4d,	// (0x00004c4d) example_parent_pane_g1

0x4c59,	// (0x00004c59) example_parent_pane_t1_ParamLimits

0x4c59,	// (0x00004c59) example_parent_pane_t1

0xc937,	// (0x0000c937) popup_preview_text_window_ParamLimits

0xc937,	// (0x0000c937) popup_preview_text_window

0x2546,	// (0x00002546) list_single_pane_cp2_g4

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane

0x498d,	// (0x0000498d) popup_preview_text_window_t1_ParamLimits

0x498d,	// (0x0000498d) popup_preview_text_window_t1

0x49ab,	// (0x000049ab) popup_preview_text_window_t2_ParamLimits

0x49ab,	// (0x000049ab) popup_preview_text_window_t2

0x49f4,	// (0x000049f4) popup_preview_text_window_t3_ParamLimits

0x49f4,	// (0x000049f4) popup_preview_text_window_t3

0x4a39,	// (0x00004a39) popup_preview_text_window_t4_ParamLimits

0x4a39,	// (0x00004a39) popup_preview_text_window_t4

0x0004,

0xaf14,	// (0x0000af14) popup_preview_text_window_t_ParamLimits

0xaf14,	// (0x0000af14) popup_preview_text_window_t

0x4ab7,	// (0x00004ab7) scroll_pane_cp11

0x36e1,	// (0x000036e1) bg_popup_preview_window_pane_g1

0x494d,	// (0x0000494d) bg_popup_preview_window_pane_g2

0x4955,	// (0x00004955) bg_popup_preview_window_pane_g3

0x495d,	// (0x0000495d) bg_popup_preview_window_pane_g4

0x4965,	// (0x00004965) bg_popup_preview_window_pane_g5

0x496d,	// (0x0000496d) bg_popup_preview_window_pane_g6

0x4975,	// (0x00004975) bg_popup_preview_window_pane_g7

0x497d,	// (0x0000497d) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc8b3,	// (0x0000c8b3) popup_midp_note_alarm_window_ParamLimits

0xc8b3,	// (0x0000c8b3) popup_midp_note_alarm_window

0x136e,	// (0x0000136e) data_form_pane_ParamLimits

0xbeaf,	// (0x0000beaf) form_field_data_pane_g1

0xbeb9,	// (0x0000beb9) form_field_data_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_ParamLimits

0x13aa,	// (0x000013aa) data_form_wide_pane_ParamLimits

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1_ParamLimits

0x0b92,	// (0x00000b92) input_focus_pane_cp6_ParamLimits

0xbff5,	// (0x0000bff5) input_popup_find_pane_g1_ParamLimits

0xbff5,	// (0x0000bff5) input_popup_find_pane_g1

0x19b4,	// (0x000019b4) aid_navi_side_left_pane

0x19c9,	// (0x000019c9) aid_navi_side_right_pane

0x4202,	// (0x00004202) bg_popup_window_pane_cp30_ParamLimits

0x4202,	// (0x00004202) bg_popup_window_pane_cp30

0x427c,	// (0x0000427c) popup_midp_note_alarm_window_g1_ParamLimits

0x427c,	// (0x0000427c) popup_midp_note_alarm_window_g1

0x42ac,	// (0x000042ac) popup_midp_note_alarm_window_t1_ParamLimits

0x42ac,	// (0x000042ac) popup_midp_note_alarm_window_t1

0x434d,	// (0x0000434d) popup_midp_note_alarm_window_t2_ParamLimits

0x434d,	// (0x0000434d) popup_midp_note_alarm_window_t2

0x43fb,	// (0x000043fb) popup_midp_note_alarm_window_t3_ParamLimits

0x43fb,	// (0x000043fb) popup_midp_note_alarm_window_t3

0x442d,	// (0x0000442d) popup_midp_note_alarm_window_t4_ParamLimits

0x442d,	// (0x0000442d) popup_midp_note_alarm_window_t4

0x4453,	// (0x00004453) popup_midp_note_alarm_window_t5_ParamLimits

0x4453,	// (0x00004453) popup_midp_note_alarm_window_t5

0x000a,

0xaeb1,	// (0x0000aeb1) popup_midp_note_alarm_window_t_ParamLimits

0xaeb1,	// (0x0000aeb1) popup_midp_note_alarm_window_t

0x44ff,	// (0x000044ff) wait_bar_pane_cp1_ParamLimits

0x44ff,	// (0x000044ff) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3ee8,	// (0x00003ee8) wait_border_pane_g1_copy1

0x13ed,	// (0x000013ed) form_field_popup_pane_g1

0xbed3,	// (0x0000bed3) form_field_popup_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_ParamLimits

0x140d,	// (0x0000140d) list_form_pane_ParamLimits

0x1419,	// (0x00001419) form_field_popup_wide_pane_g1

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_ParamLimits

0x1436,	// (0x00001436) list_form_wide_pane_ParamLimits

0x5311,	// (0x00005311) aid_size_cell_graphic_pane

0xbf52,	// (0x0000bf52) data_form_pane_t1_ParamLimits

0xd44c,	// (0x0000d44c) data_form_wide_pane_t1_ParamLimits

0xccff,	// (0x0000ccff) bg_status_flat_pane

0xb779,	// (0x0000b779) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf41a,	// (0x0000f41a) title_pane_t_ParamLimits

0x1cc7,	// (0x00001cc7) level_1_signal_ParamLimits

0x1cd9,	// (0x00001cd9) level_2_signal_ParamLimits

0x1cec,	// (0x00001cec) level_3_signal_ParamLimits

0x1cff,	// (0x00001cff) level_4_signal_ParamLimits

0x1d12,	// (0x00001d12) level_5_signal_ParamLimits

0x1d25,	// (0x00001d25) level_6_signal_ParamLimits

0x1d38,	// (0x00001d38) level_7_signal_ParamLimits

0x1cc7,	// (0x00001cc7) level_1_battery_ParamLimits

0x1cd9,	// (0x00001cd9) level_2_battery_ParamLimits

0x1cec,	// (0x00001cec) level_3_battery_ParamLimits

0x1cff,	// (0x00001cff) level_4_battery_ParamLimits

0x1d12,	// (0x00001d12) level_5_battery_ParamLimits

0x1d25,	// (0x00001d25) level_6_battery_ParamLimits

0x1d38,	// (0x00001d38) level_7_battery_ParamLimits

0x4107,	// (0x00004107) bg_status_flat_pane_g1

0x410f,	// (0x0000410f) bg_status_flat_pane_g2

0x4117,	// (0x00004117) bg_status_flat_pane_g3

0x411f,	// (0x0000411f) bg_status_flat_pane_g4

0x4127,	// (0x00004127) bg_status_flat_pane_g5

0x412f,	// (0x0000412f) bg_status_flat_pane_g6

0x4137,	// (0x00004137) bg_status_flat_pane_g7

0xb805,	// (0x0000b805) tabs_3_active_pane_t1_ParamLimits

0xb805,	// (0x0000b805) tabs_3_passive_pane_t1_ParamLimits

0xb817,	// (0x0000b817) tabs_4_active_pane_t1_ParamLimits

0xb817,	// (0x0000b817) tabs_4_1_passive_pane_t1_ParamLimits

0xc003,	// (0x0000c003) tabs_2_active_pane_t1_ParamLimits

0xc003,	// (0x0000c003) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc015,	// (0x0000c015) tabs_2_long_active_pane_t1_ParamLimits

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp4_ParamLimits

0x37be,	// (0x000037be) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc028,	// (0x0000c028) tabs_3_long_active_pane_t1_ParamLimits

0x2b8c,	// (0x00002b8c) bg_passive_tab_pane_cp5_ParamLimits

0x37be,	// (0x000037be) list_single_midp_graphic_pane_t1

0xccff,	// (0x0000ccff) bg_status_flat_pane_ParamLimits

0x32cb,	// (0x000032cb) indicator_pane_cp2_ParamLimits

0x32cb,	// (0x000032cb) indicator_pane_cp2

0xce7d,	// (0x0000ce7d) navi_pane_srt_ParamLimits

0xce7d,	// (0x0000ce7d) navi_pane_srt

0x341a,	// (0x0000341a) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x2615,	// (0x00002615) copy_highlight_pane

0x2615,	// (0x00002615) cursor_graphics_pane

0x2615,	// (0x00002615) graphic_within_text_pane

0x2615,	// (0x00002615) link_highlight_pane

0x4a7a,	// (0x00004a7a) popup_preview_text_window_t5_ParamLimits

0x4a7a,	// (0x00004a7a) popup_preview_text_window_t5

0x2737,	// (0x00002737) cursor_digital_pane

0x2737,	// (0x00002737) cursor_primary_pane

0x2748,	// (0x00002748) cursor_primary_small_pane

0x2750,	// (0x00002750) cursor_secondary_pane

0x2758,	// (0x00002758) cursor_title_pane

0x2737,	// (0x00002737) link_highlight_digital_pane

0x273f,	// (0x0000273f) link_highlight_primary_pane

0x2748,	// (0x00002748) link_highlight_primary_small_pane

0x2750,	// (0x00002750) link_highlight_secondary_pane

0x2758,	// (0x00002758) link_highlight_title_pane

0x2737,	// (0x00002737) copy_highlight_digital_pane

0x2737,	// (0x00002737) copy_highlight_primary_pane

0x2748,	// (0x00002748) copy_highlight_primary_small_pane

0x2750,	// (0x00002750) copy_highlight_secondary_pane

0x2758,	// (0x00002758) copy_highlight_title_pane

0x2750,	// (0x00002750) graphic_text_digital_pane

0x41a5,	// (0x000041a5) graphic_text_primary_pane

0x41ae,	// (0x000041ae) graphic_text_primary_small_pane

0x2748,	// (0x00002748) graphic_text_secondary_pane

0x2737,	// (0x00002737) graphic_text_title_pane

0xc2fe,	// (0x0000c2fe) cursor_primary_pane_g1

0x4197,	// (0x00004197) cursor_text_primary_t1

0xd192,	// (0x0000d192) cursor_primary_small_pane_g1

0x4189,	// (0x00004189) cursor_text_primary_small_t1

0xd188,	// (0x0000d188) cursor_primary_small_pane_g1_copy1

0x4171,	// (0x00004171) cursor_text_primary_small_t1_copy1

0x414f,	// (0x0000414f) cursor_text_title_t1

0xd17e,	// (0x0000d17e) cursor_title_pane_g1

0xc2fe,	// (0x0000c2fe) cursor_digital_pane_g1

0x276a,	// (0x0000276a) cursor_text_digital_t1

0x278f,	// (0x0000278f) link_highlight_primary_pane_g1

0x40f8,	// (0x000040f8) link_highlight_primary_pane_t1

0x2778,	// (0x00002778) link_highlight_primary_small_pane_g1

0x2780,	// (0x00002780) link_highlight_primary_small_pane_t1

0x278f,	// (0x0000278f) link_highlight_secondary_pane_g1

0x2797,	// (0x00002797) link_highlight_secondary_pane_t1

0x406c,	// (0x0000406c) link_highlight_title_pane_g1

0x4074,	// (0x00004074) link_highlight_title_pane_t1

0x4055,	// (0x00004055) link_highlight_digital_pane_g1

0x405d,	// (0x0000405d) link_highlight_digital_pane_t1

0x3f2d,	// (0x00003f2d) copy_highlight_primary_pane_g1

0x3f35,	// (0x00003f35) copy_highlight_primary_pane_t1

0x3f07,	// (0x00003f07) copy_highlight_primary_small_pane_g1

0x3f1e,	// (0x00003f1e) copy_highlight_primary_small_pane_t1

0x27a6,	// (0x000027a6) copy_highlight_secondary_pane_g1

0x27ae,	// (0x000027ae) copy_highlight_secondary_pane_t1

0x3f07,	// (0x00003f07) copy_highlight_title_pane_g1

0x3f0f,	// (0x00003f0f) copy_highlight_title_pane_t1

0x3f2d,	// (0x00003f2d) copy_highlight_digital_pane_g1

0x5594,	// (0x00005594) copy_highlight_digital_pane_t1

0x54e8,	// (0x000054e8) graphic_text_primary_pane_g1

0x5578,	// (0x00005578) graphic_text_primary_pane_t1

0x5586,	// (0x00005586) graphic_text_primary_pane_t2

0x0001,

0xafe0,	// (0x0000afe0) graphic_text_primary_pane_t

0x5554,	// (0x00005554) graphic_text_primary_small_pane_g1

0x555c,	// (0x0000555c) graphic_text_primary_small_pane_t1

0x556a,	// (0x0000556a) graphic_text_primary_small_pane_t2

0x0001,

0xafdb,	// (0x0000afdb) graphic_text_primary_small_pane_t

0x5530,	// (0x00005530) graphic_text_secondary_pane_g1

0x5538,	// (0x00005538) graphic_text_secondary_pane_t1

0x5546,	// (0x00005546) graphic_text_secondary_pane_t2

0x0001,

0xafd6,	// (0x0000afd6) graphic_text_secondary_pane_t

0x550c,	// (0x0000550c) graphic_text_title_pane_g1

0x5514,	// (0x00005514) graphic_text_title_pane_t1

0x5522,	// (0x00005522) graphic_text_title_pane_t2

0x0001,

0xafd1,	// (0x0000afd1) graphic_text_title_pane_t

0x54e8,	// (0x000054e8) graphic_text_digital_pane_g1

0x54f0,	// (0x000054f0) graphic_text_digital_pane_t1

0x54fe,	// (0x000054fe) graphic_text_digital_pane_t2

0x0001,

0xafcc,	// (0x0000afcc) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x54b3,	// (0x000054b3) navi_navi_icon_text_pane_srt

0x54bb,	// (0x000054bb) navi_navi_pane_srt_g1_ParamLimits

0x54bb,	// (0x000054bb) navi_navi_pane_srt_g1

0x54cd,	// (0x000054cd) navi_navi_pane_srt_g2_ParamLimits

0x54cd,	// (0x000054cd) navi_navi_pane_srt_g2

0x0001,

0xafc7,	// (0x0000afc7) navi_navi_pane_srt_g_ParamLimits

0xafc7,	// (0x0000afc7) navi_navi_pane_srt_g

0x54df,	// (0x000054df) navi_navi_tabs_pane_srt

0x54b3,	// (0x000054b3) navi_navi_text_pane_srt

0x54b3,	// (0x000054b3) navi_navi_volume_pane_srt

0x54a4,	// (0x000054a4) navi_navi_text_pane_srt_t1

0x547f,	// (0x0000547f) navi_navi_volume_pane_srt_g1

0x5487,	// (0x00005487) volume_small_pane_srt_ParamLimits

0x5487,	// (0x00005487) volume_small_pane_srt

0x27bd,	// (0x000027bd) volume_small_pane_srt_g1_ParamLimits

0x27bd,	// (0x000027bd) volume_small_pane_srt_g1

0x27cd,	// (0x000027cd) volume_small_pane_srt_g2_ParamLimits

0x27cd,	// (0x000027cd) volume_small_pane_srt_g2

0x27de,	// (0x000027de) volume_small_pane_srt_g3_ParamLimits

0x27de,	// (0x000027de) volume_small_pane_srt_g3

0x27ef,	// (0x000027ef) volume_small_pane_srt_g4_ParamLimits

0x27ef,	// (0x000027ef) volume_small_pane_srt_g4

0x2800,	// (0x00002800) volume_small_pane_srt_g5_ParamLimits

0x2800,	// (0x00002800) volume_small_pane_srt_g5

0x2811,	// (0x00002811) volume_small_pane_srt_g6_ParamLimits

0x2811,	// (0x00002811) volume_small_pane_srt_g6

0x2822,	// (0x00002822) volume_small_pane_srt_g7_ParamLimits

0x2822,	// (0x00002822) volume_small_pane_srt_g7

0x2833,	// (0x00002833) volume_small_pane_srt_g8_ParamLimits

0x2833,	// (0x00002833) volume_small_pane_srt_g8

0x2844,	// (0x00002844) volume_small_pane_srt_g9_ParamLimits

0x2844,	// (0x00002844) volume_small_pane_srt_g9

0x2855,	// (0x00002855) volume_small_pane_srt_g10_ParamLimits

0x2855,	// (0x00002855) volume_small_pane_srt_g10

0x0009,

0xad76,	// (0x0000ad76) volume_small_pane_srt_g_ParamLimits

0xad76,	// (0x0000ad76) volume_small_pane_srt_g

0x098c,	// (0x0000098c) query_popup_data_pane_cp2

0x546d,	// (0x0000546d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x546d,	// (0x0000546d) navi_navi_icon_text_pane_srt_t1

0x41a5,	// (0x000041a5) navi_tabs_2_long_pane_srt

0x41a5,	// (0x000041a5) navi_tabs_2_pane_srt

0x41a5,	// (0x000041a5) navi_tabs_3_long_pane_srt

0x41a5,	// (0x000041a5) navi_tabs_3_pane_srt

0x41a5,	// (0x000041a5) navi_tabs_4_pane_srt

0x5445,	// (0x00005445) tabs_2_active_pane_srt_ParamLimits

0x5445,	// (0x00005445) tabs_2_active_pane_srt

0x5455,	// (0x00005455) tabs_2_passive_pane_srt_ParamLimits

0x5455,	// (0x00005455) tabs_2_passive_pane_srt

0x389b,	// (0x0000389b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x389b,	// (0x0000389b) bg_passive_tab_pane_cp1_srt

0x5419,	// (0x00005419) bg_passive_tab_pane_g1_cp1_srt

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp1_srt

0x5422,	// (0x00005422) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x542b,	// (0x0000542b) tabs_2_active_pane_srt_g1

0xd598,	// (0x0000d598) tabs_2_active_pane_srt_t1_ParamLimits

0xd598,	// (0x0000d598) tabs_2_active_pane_srt_t1

0x5419,	// (0x00005419) bg_active_tab_pane_g1_cp1_srt

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp1_srt

0x5422,	// (0x00005422) bg_active_tab_pane_g3_cp1_srt

0x53e6,	// (0x000053e6) tabs_3_active_pane_srt_ParamLimits

0x53e6,	// (0x000053e6) tabs_3_active_pane_srt

0x53f7,	// (0x000053f7) tabs_3_passive_pane_cp_srt_ParamLimits

0x53f7,	// (0x000053f7) tabs_3_passive_pane_cp_srt

0x5408,	// (0x00005408) tabs_3_passive_pane_srt_ParamLimits

0x5408,	// (0x00005408) tabs_3_passive_pane_srt

0x389b,	// (0x0000389b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x389b,	// (0x0000389b) bg_passive_tab_pane_cp2_srt

0x2866,	// (0x00002866) bg_passive_tab_pane_g1_cp2_srt

0x2116,	// (0x00002116) bg_passive_tab_pane_g2_cp2_srt

0x286f,	// (0x0000286f) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x53cc,	// (0x000053cc) tabs_3_active_pane_srt_g1

0xd582,	// (0x0000d582) tabs_3_active_pane_srt_t1_ParamLimits

0xd582,	// (0x0000d582) tabs_3_active_pane_srt_t1

0x2866,	// (0x00002866) bg_active_tab_pane_g1_cp2_srt

0x2116,	// (0x00002116) bg_active_tab_pane_g2_cp2_srt

0x286f,	// (0x0000286f) bg_active_tab_pane_g3_cp2_srt

0x5384,	// (0x00005384) tabs_4_active_pane_srt_ParamLimits

0x5384,	// (0x00005384) tabs_4_active_pane_srt

0x5396,	// (0x00005396) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5396,	// (0x00005396) tabs_4_passive_pane_cp2_srt

0x2b0a,	// (0x00002b0a) aid_size_cell_toolbar

0x4f15,	// (0x00004f15) main_idle_act_pane_ParamLimits

0x2d37,	// (0x00002d37) popup_large_graphic_colour_window_ParamLimits

0xcbc3,	// (0x0000cbc3) popup_toolbar_window_ParamLimits

0xcbc3,	// (0x0000cbc3) popup_toolbar_window

0x511b,	// (0x0000511b) list_single_graphic_2heading_pane_ParamLimits

0x511b,	// (0x0000511b) list_single_graphic_2heading_pane

0x1a40,	// (0x00001a40) aid_size_cell_apps_grid_lsc_pane

0x1a52,	// (0x00001a52) aid_size_cell_apps_grid_prt_pane

0x2b8c,	// (0x00002b8c) bg_wml_button_pane_cp1_ParamLimits

0x2b8c,	// (0x00002b8c) bg_wml_button_pane_cp1

0xd11d,	// (0x0000d11d) form_midp_field_text_pane_t1_ParamLimits

0x389b,	// (0x0000389b) input_focus_pane_cp050_ParamLimits

0x3b9f,	// (0x00003b9f) list_midp_form_text_pane_ParamLimits

0x3b45,	// (0x00003b45) input_focus_pane_cp051_ParamLimits

0x3b59,	// (0x00003b59) list_midp_choice_pane_ParamLimits

0xd0ba,	// (0x0000d0ba) list_single_2graphic_pane_cp3_ParamLimits

0xd0ba,	// (0x0000d0ba) list_single_2graphic_pane_cp3

0xd0cd,	// (0x0000d0cd) list_single_midp_graphic_pane_ParamLimits

0xd0cd,	// (0x0000d0cd) list_single_midp_graphic_pane

0x3579,	// (0x00003579) list_single_graphic_2heading_pane_g1_ParamLimits

0x3579,	// (0x00003579) list_single_graphic_2heading_pane_g1

0x254e,	// (0x0000254e) list_single_graphic_2heading_pane_g4_ParamLimits

0x254e,	// (0x0000254e) list_single_graphic_2heading_pane_g4

0x3585,	// (0x00003585) list_single_graphic_2heading_pane_g5_ParamLimits

0x3585,	// (0x00003585) list_single_graphic_2heading_pane_g5

0x0002,

0xadc9,	// (0x0000adc9) list_single_graphic_2heading_pane_g_ParamLimits

0xadc9,	// (0x0000adc9) list_single_graphic_2heading_pane_g

0x3591,	// (0x00003591) list_single_graphic_2heading_pane_t1_ParamLimits

0x3591,	// (0x00003591) list_single_graphic_2heading_pane_t1

0x35a5,	// (0x000035a5) list_single_graphic_2heading_pane_t2_ParamLimits

0x35a5,	// (0x000035a5) list_single_graphic_2heading_pane_t2

0x35c1,	// (0x000035c1) list_single_graphic_2heading_pane_t3_ParamLimits

0x35c1,	// (0x000035c1) list_single_graphic_2heading_pane_t3

0x0002,

0xadd0,	// (0x0000add0) list_single_graphic_2heading_pane_t_ParamLimits

0xadd0,	// (0x0000add0) list_single_graphic_2heading_pane_t

0x35d9,	// (0x000035d9) bg_popup_sub_pane_cp2

0x3603,	// (0x00003603) grid_toobar_pane

0x363f,	// (0x0000363f) cell_toolbar_pane_ParamLimits

0x363f,	// (0x0000363f) cell_toolbar_pane

0x3685,	// (0x00003685) cell_toolbar_pane_g1_ParamLimits

0x3685,	// (0x00003685) cell_toolbar_pane_g1

0x3699,	// (0x00003699) cell_toolbar_pane_g2_ParamLimits

0x3699,	// (0x00003699) cell_toolbar_pane_g2

0x0001,

0xadd7,	// (0x0000add7) cell_toolbar_pane_g_ParamLimits

0xadd7,	// (0x0000add7) cell_toolbar_pane_g

0x36bb,	// (0x000036bb) grid_highlight_pane_cp2_ParamLimits

0x36bb,	// (0x000036bb) grid_highlight_pane_cp2

0x36d5,	// (0x000036d5) toolbar_button_pane

0x36e1,	// (0x000036e1) toolbar_button_pane_g1

0x36e9,	// (0x000036e9) toolbar_button_pane_g2

0x36f1,	// (0x000036f1) toolbar_button_pane_g3

0x36f9,	// (0x000036f9) toolbar_button_pane_g4

0x3701,	// (0x00003701) toolbar_button_pane_g5

0x3709,	// (0x00003709) toolbar_button_pane_g6

0x3711,	// (0x00003711) toolbar_button_pane_g7

0x3719,	// (0x00003719) toolbar_button_pane_g8

0x3721,	// (0x00003721) toolbar_button_pane_g9

0x0009,

0xaddc,	// (0x0000addc) toolbar_button_pane_g

0x3731,	// (0x00003731) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3731,	// (0x00003731) list_single_2graphic_pane_g1_cp3

0xd01c,	// (0x0000d01c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd01c,	// (0x0000d01c) list_single_2graphic_pane_g2_cp3

0x374e,	// (0x0000374e) list_single_2graphic_pane_g3_cp3

0x3756,	// (0x00003756) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3756,	// (0x00003756) list_single_2graphic_pane_g4_cp3

0x3762,	// (0x00003762) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3762,	// (0x00003762) list_single_2graphic_pane_t1_cp3

0x37b2,	// (0x000037b2) list_single_midp_graphic_pane_g2_ParamLimits

0x37b2,	// (0x000037b2) list_single_midp_graphic_pane_g2

0x2b12,	// (0x00002b12) aid_zoom_text_primary

0x2b1a,	// (0x00002b1a) aid_zoom_text_secondary

0xc356,	// (0x0000c356) status_small_pane_g7_ParamLimits

0xc356,	// (0x0000c356) status_small_pane_g7

0xc379,	// (0x0000c379) status_small_pane_t1_ParamLimits

0xb755,	// (0x0000b755) title_pane_g2

0x0003,

0xf411,	// (0x0000f411) title_pane_g

0xb9cd,	// (0x0000b9cd) aid_size_cell_colour_1_pane_ParamLimits

0xb9cd,	// (0x0000b9cd) aid_size_cell_colour_1_pane

0xb9e1,	// (0x0000b9e1) aid_size_cell_colour_2_pane_ParamLimits

0xb9e1,	// (0x0000b9e1) aid_size_cell_colour_2_pane

0xb9f5,	// (0x0000b9f5) aid_size_cell_colour_3_pane_ParamLimits

0xb9f5,	// (0x0000b9f5) aid_size_cell_colour_3_pane

0xba09,	// (0x0000ba09) aid_size_cell_colour_4_pane_ParamLimits

0xba09,	// (0x0000ba09) aid_size_cell_colour_4_pane

0x18bc,	// (0x000018bc) title_pane_stacon_g1_ParamLimits

0x18bc,	// (0x000018bc) title_pane_stacon_g1

0x3f8c,	// (0x00003f8c) popup_note_wait_window_g3_ParamLimits

0x3f8c,	// (0x00003f8c) popup_note_wait_window_g3

0x4002,	// (0x00004002) popup_note_wait_window_t5_ParamLimits

0x4002,	// (0x00004002) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc5cb,	// (0x0000c5cb) popup_feb_china_hwr_fs_window_ParamLimits

0xc5cb,	// (0x0000c5cb) popup_feb_china_hwr_fs_window

0xd02d,	// (0x0000d02d) aid_size_cell_hwr_fs_ParamLimits

0xd02d,	// (0x0000d02d) aid_size_cell_hwr_fs

0x389b,	// (0x0000389b) bg_popup_sub_pane_cp3_ParamLimits

0x389b,	// (0x0000389b) bg_popup_sub_pane_cp3

0xd042,	// (0x0000d042) grid_hwr_fs_pane_ParamLimits

0xd042,	// (0x0000d042) grid_hwr_fs_pane

0x38bf,	// (0x000038bf) linegrid_hwr_fs_pane_ParamLimits

0x38bf,	// (0x000038bf) linegrid_hwr_fs_pane

0xd05a,	// (0x0000d05a) cell_hwr_fs_pane_ParamLimits

0xd05a,	// (0x0000d05a) cell_hwr_fs_pane

0x38f1,	// (0x000038f1) linegrid_hwr_fs_pane_g1_ParamLimits

0x38f1,	// (0x000038f1) linegrid_hwr_fs_pane_g1

0xd080,	// (0x0000d080) linegrid_hwr_fs_pane_g2_ParamLimits

0xd080,	// (0x0000d080) linegrid_hwr_fs_pane_g2

0x390f,	// (0x0000390f) linegrid_hwr_fs_pane_g3_ParamLimits

0x390f,	// (0x0000390f) linegrid_hwr_fs_pane_g3

0x391b,	// (0x0000391b) linegrid_hwr_fs_pane_g4_ParamLimits

0x391b,	// (0x0000391b) linegrid_hwr_fs_pane_g4

0x3935,	// (0x00003935) linegrid_hwr_fs_pane_g5_ParamLimits

0x3935,	// (0x00003935) linegrid_hwr_fs_pane_g5

0x0004,

0xf54b,	// (0x0000f54b) linegrid_hwr_fs_pane_g_ParamLimits

0xf54b,	// (0x0000f54b) linegrid_hwr_fs_pane_g

0x394b,	// (0x0000394b) cell_hwr_fs_pane_g1_ParamLimits

0x394b,	// (0x0000394b) cell_hwr_fs_pane_g1

0x34b0,	// (0x000034b0) cell_hwr_fs_pane_g2_ParamLimits

0x34b0,	// (0x000034b0) cell_hwr_fs_pane_g2

0xd092,	// (0x0000d092) cell_hwr_fs_pane_g3_ParamLimits

0xd092,	// (0x0000d092) cell_hwr_fs_pane_g3

0xd09f,	// (0x0000d09f) cell_hwr_fs_pane_g4_ParamLimits

0xd09f,	// (0x0000d09f) cell_hwr_fs_pane_g4

0x0003,

0xf556,	// (0x0000f556) cell_hwr_fs_pane_g_ParamLimits

0xf556,	// (0x0000f556) cell_hwr_fs_pane_g

0xd0ac,	// (0x0000d0ac) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x166d,	// (0x0000166d) aid_inside_area_popup_secondary

0xd19c,	// (0x0000d19c) aid_inside_area_window_primary_ParamLimits

0xd19c,	// (0x0000d19c) aid_inside_area_window_primary

0x55a3,	// (0x000055a3) ai2_news_ticker_pane

0x55ab,	// (0x000055ab) aid_size_cell_ai1_link_ParamLimits

0x55ab,	// (0x000055ab) aid_size_cell_ai1_link

0xd5ae,	// (0x0000d5ae) popup_ai2_data_window_ParamLimits

0xd5ae,	// (0x0000d5ae) popup_ai2_data_window

0x55db,	// (0x000055db) popup_ai2_link_window_ParamLimits

0x55db,	// (0x000055db) popup_ai2_link_window

0x389b,	// (0x0000389b) bg_popup_sub_pane_cp4_ParamLimits

0x389b,	// (0x0000389b) bg_popup_sub_pane_cp4

0x55ef,	// (0x000055ef) grid_ai2_link_pane_ParamLimits

0x55ef,	// (0x000055ef) grid_ai2_link_pane

0x5606,	// (0x00005606) popup_ai2_link_window_g1_ParamLimits

0x5606,	// (0x00005606) popup_ai2_link_window_g1

0x5612,	// (0x00005612) popup_ai2_link_window_g2_ParamLimits

0x5612,	// (0x00005612) popup_ai2_link_window_g2

0x0001,

0xafe5,	// (0x0000afe5) popup_ai2_link_window_g_ParamLimits

0xafe5,	// (0x0000afe5) popup_ai2_link_window_g

0x5621,	// (0x00005621) ai2_mp_button_pane

0x5629,	// (0x00005629) ai2_mp_volume_pane

0x3b45,	// (0x00003b45) bg_popup_sub_pane_cp5_ParamLimits

0x3b45,	// (0x00003b45) bg_popup_sub_pane_cp5

0x5631,	// (0x00005631) heading_ai2_gene_pane_ParamLimits

0x5631,	// (0x00005631) heading_ai2_gene_pane

0x563d,	// (0x0000563d) list_ai2_gene_pane_ParamLimits

0x563d,	// (0x0000563d) list_ai2_gene_pane

0x5685,	// (0x00005685) cell_ai2_link_pane_ParamLimits

0x5685,	// (0x00005685) cell_ai2_link_pane

0x569b,	// (0x0000569b) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x576b,	// (0x0000576b) ai2_mp_volume_pane_g1

0x5773,	// (0x00005773) ai2_mp_volume_pane_g2

0xd5d8,	// (0x0000d5d8) list_ai2_gene_pane_t1

0x577b,	// (0x0000577b) ai2_mp_volume_pane_g3

0x0002,

0xaffe,	// (0x0000affe) ai2_mp_volume_pane_g

0x5783,	// (0x00005783) volume_small_pane_cp3

0x578c,	// (0x0000578c) aid_size_cell_ai2_button

0x5794,	// (0x00005794) grid_ai2_button_pane

0x579d,	// (0x0000579d) cell_ai2_button_pane_ParamLimits

0x579d,	// (0x0000579d) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x572b,	// (0x0000572b) ai2_gene_pane_t1_ParamLimits

0x572b,	// (0x0000572b) ai2_gene_pane_t1

0xc53d,	// (0x0000c53d) aid_height_parent_landscape

0xd2f8,	// (0x0000d2f8) aid_height_set_list

0x4f15,	// (0x00004f15) aid_size_parent

0x5311,	// (0x00005311) aid_size_cell_graphic_pane_ParamLimits

0x564d,	// (0x0000564d) popup_ai2_data_window_g1_ParamLimits

0x564d,	// (0x0000564d) popup_ai2_data_window_g1

0x5659,	// (0x00005659) ai2_news_ticker_pane_g1

0x5661,	// (0x00005661) ai2_news_ticker_pane_g2

0x0001,

0xafea,	// (0x0000afea) ai2_news_ticker_pane_g

0x5669,	// (0x00005669) ai2_news_ticker_pane_t1

0x5677,	// (0x00005677) ai2_news_ticker_pane_t2

0x0001,

0xafef,	// (0x0000afef) ai2_news_ticker_pane_t

0x56a4,	// (0x000056a4) heading_ai2_gene_pane_g1

0x56ac,	// (0x000056ac) heading_ai2_gene_pane_t1_ParamLimits

0x56ac,	// (0x000056ac) heading_ai2_gene_pane_t1

0x56c1,	// (0x000056c1) list_highlight_pane_cp6

0xd5c2,	// (0x0000d5c2) ai2_gene_pane_ParamLimits

0xd5c2,	// (0x0000d5c2) ai2_gene_pane

0xd5e6,	// (0x0000d5e6) list_ai2_gene_pane_t2

0x0001,

0xf5b7,	// (0x0000f5b7) list_ai2_gene_pane_t

0x56fc,	// (0x000056fc) list_highlight_pane_cp8_ParamLimits

0x56fc,	// (0x000056fc) list_highlight_pane_cp8

0x570d,	// (0x0000570d) ai2_gene_pane_g1_ParamLimits

0x570d,	// (0x0000570d) ai2_gene_pane_g1

0x571f,	// (0x0000571f) ai2_gene_pane_g2_ParamLimits

0x571f,	// (0x0000571f) ai2_gene_pane_g2

0x0001,

0xaff9,	// (0x0000aff9) ai2_gene_pane_g_ParamLimits

0xaff9,	// (0x0000aff9) ai2_gene_pane_g

0x0db7,	// (0x00000db7) scroll_pane_cp12

0xc4fc,	// (0x0000c4fc) control_pane_t3_ParamLimits

0xc4fc,	// (0x0000c4fc) control_pane_t3

0xc36a,	// (0x0000c36a) status_small_pane_g8_ParamLimits

0xc36a,	// (0x0000c36a) status_small_pane_g8

0xc660,	// (0x0000c660) popup_find_window_ParamLimits

0xc8ed,	// (0x0000c8ed) popup_note_image_window_ParamLimits

0x3579,	// (0x00003579) list_double2_graphic_pane_vc_g1_ParamLimits

0x3579,	// (0x00003579) list_double2_graphic_pane_vc_g1

0x254e,	// (0x0000254e) list_double2_graphic_pane_vc_g2_ParamLimits

0x254e,	// (0x0000254e) list_double2_graphic_pane_vc_g2

0x3585,	// (0x00003585) list_double2_graphic_pane_vc_g3_ParamLimits

0x3585,	// (0x00003585) list_double2_graphic_pane_vc_g3

0x0002,

0xadc9,	// (0x0000adc9) list_double2_graphic_pane_vc_g_ParamLimits

0xadc9,	// (0x0000adc9) list_double2_graphic_pane_vc_g

0x366f,	// (0x0000366f) list_double2_graphic_pane_vc_t1_ParamLimits

0x366f,	// (0x0000366f) list_double2_graphic_pane_vc_t1

0x254e,	// (0x0000254e) list_single_heading_pane_vc_g1_ParamLimits

0x254e,	// (0x0000254e) list_single_heading_pane_vc_g1

0x3585,	// (0x00003585) list_single_heading_pane_vc_g2_ParamLimits

0x3585,	// (0x00003585) list_single_heading_pane_vc_g2

0x0001,

0xadf1,	// (0x0000adf1) list_single_heading_pane_vc_g_ParamLimits

0xadf1,	// (0x0000adf1) list_single_heading_pane_vc_g

0x377e,	// (0x0000377e) list_single_heading_pane_vc_t1_ParamLimits

0x377e,	// (0x0000377e) list_single_heading_pane_vc_t1

0x3796,	// (0x00003796) list_single_heading_pane_vc_t2_ParamLimits

0x3796,	// (0x00003796) list_single_heading_pane_vc_t2

0x0001,

0xadf6,	// (0x0000adf6) list_single_heading_pane_vc_t_ParamLimits

0xadf6,	// (0x0000adf6) list_single_heading_pane_vc_t

0x37d4,	// (0x000037d4) list_setting_number_pane_vc_g1_ParamLimits

0x37d4,	// (0x000037d4) list_setting_number_pane_vc_g1

0x37e0,	// (0x000037e0) list_setting_number_pane_vc_g2_ParamLimits

0x37e0,	// (0x000037e0) list_setting_number_pane_vc_g2

0x0001,

0xadfb,	// (0x0000adfb) list_setting_number_pane_vc_g_ParamLimits

0xadfb,	// (0x0000adfb) list_setting_number_pane_vc_g

0x37ec,	// (0x000037ec) list_setting_number_pane_vc_t1_ParamLimits

0x37ec,	// (0x000037ec) list_setting_number_pane_vc_t1

0x3800,	// (0x00003800) list_setting_number_pane_vc_t2_ParamLimits

0x3800,	// (0x00003800) list_setting_number_pane_vc_t2

0x381c,	// (0x0000381c) list_setting_number_pane_vc_t3_ParamLimits

0x381c,	// (0x0000381c) list_setting_number_pane_vc_t3

0x0002,

0xae00,	// (0x0000ae00) list_setting_number_pane_vc_t_ParamLimits

0xae00,	// (0x0000ae00) list_setting_number_pane_vc_t

0x384a,	// (0x0000384a) set_value_pane_vc_ParamLimits

0x384a,	// (0x0000384a) set_value_pane_vc

0x511b,	// (0x0000511b) list_double2_graphic_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double2_graphic_pane_vc

0x511b,	// (0x0000511b) list_double2_large_graphic_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double2_large_graphic_pane_vc

0x511b,	// (0x0000511b) list_double2_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double2_pane_vc

0x511b,	// (0x0000511b) list_double_graphic_heading_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double_graphic_heading_pane_vc

0x511b,	// (0x0000511b) list_double_graphic_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double_graphic_pane_vc

0x511b,	// (0x0000511b) list_double_heading_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double_heading_pane_vc

0x512d,	// (0x0000512d) list_double_large_graphic_pane_vc_ParamLimits

0x512d,	// (0x0000512d) list_double_large_graphic_pane_vc

0x511b,	// (0x0000511b) list_double_number_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double_number_pane_vc

0x511b,	// (0x0000511b) list_double_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double_pane_vc

0x511b,	// (0x0000511b) list_double_time_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_double_time_pane_vc

0x511b,	// (0x0000511b) list_setting_number_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_setting_number_pane_vc

0x511b,	// (0x0000511b) list_setting_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_setting_pane_vc

0x511b,	// (0x0000511b) list_single_graphic_heading_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_single_graphic_heading_pane_vc

0x511b,	// (0x0000511b) list_single_heading_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_single_heading_pane_vc

0x511b,	// (0x0000511b) list_single_number_heading_pane_vc_ParamLimits

0x511b,	// (0x0000511b) list_single_number_heading_pane_vc

0x3579,	// (0x00003579) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3579,	// (0x00003579) list_double_graphic_heading_pane_vc_g1

0x57d1,	// (0x000057d1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57d1,	// (0x000057d1) list_double_graphic_heading_pane_vc_g2

0x57dd,	// (0x000057dd) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x57dd,	// (0x000057dd) list_double_graphic_heading_pane_vc_g3

0x0002,

0xb005,	// (0x0000b005) list_double_graphic_heading_pane_vc_g_ParamLimits

0xb005,	// (0x0000b005) list_double_graphic_heading_pane_vc_g

0x57e9,	// (0x000057e9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57e9,	// (0x000057e9) list_double_graphic_heading_pane_vc_t1

0x5805,	// (0x00005805) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5805,	// (0x00005805) list_double_graphic_heading_pane_vc_t2

0x0001,

0xb00c,	// (0x0000b00c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xb00c,	// (0x0000b00c) list_double_graphic_heading_pane_vc_t

0x37d4,	// (0x000037d4) list_setting_pane_vc_g1_ParamLimits

0x37d4,	// (0x000037d4) list_setting_pane_vc_g1

0x37e0,	// (0x000037e0) list_setting_pane_vc_g2_ParamLimits

0x37e0,	// (0x000037e0) list_setting_pane_vc_g2

0x0001,

0xadfb,	// (0x0000adfb) list_setting_pane_vc_g_ParamLimits

0xadfb,	// (0x0000adfb) list_setting_pane_vc_g

0x5a31,	// (0x00005a31) list_setting_pane_vc_t1_ParamLimits

0x5a31,	// (0x00005a31) list_setting_pane_vc_t1

0x5a4d,	// (0x00005a4d) list_setting_pane_vc_t2_ParamLimits

0x5a4d,	// (0x00005a4d) list_setting_pane_vc_t2

0x0001,

0xb03a,	// (0x0000b03a) list_setting_pane_vc_t_ParamLimits

0xb03a,	// (0x0000b03a) list_setting_pane_vc_t

0x384a,	// (0x0000384a) set_value_pane_cp_vc_ParamLimits

0x384a,	// (0x0000384a) set_value_pane_cp_vc

0x254e,	// (0x0000254e) list_single_number_heading_pane_vc_g1_ParamLimits

0x254e,	// (0x0000254e) list_single_number_heading_pane_vc_g1

0x3585,	// (0x00003585) list_single_number_heading_pane_vc_g2_ParamLimits

0x3585,	// (0x00003585) list_single_number_heading_pane_vc_g2

0x0001,

0xadf1,	// (0x0000adf1) list_single_number_heading_pane_vc_g_ParamLimits

0xadf1,	// (0x0000adf1) list_single_number_heading_pane_vc_g

0x377e,	// (0x0000377e) list_single_number_heading_pane_vc_t1_ParamLimits

0x377e,	// (0x0000377e) list_single_number_heading_pane_vc_t1

0x5a69,	// (0x00005a69) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a69,	// (0x00005a69) list_single_number_heading_pane_vc_t2

0x5a7d,	// (0x00005a7d) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a7d,	// (0x00005a7d) list_single_number_heading_pane_vc_t3

0x0002,

0xb03f,	// (0x0000b03f) list_single_number_heading_pane_vc_t_ParamLimits

0xb03f,	// (0x0000b03f) list_single_number_heading_pane_vc_t

0x3579,	// (0x00003579) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3579,	// (0x00003579) list_single_graphic_heading_pane_vc_g1

0x254e,	// (0x0000254e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x254e,	// (0x0000254e) list_single_graphic_heading_pane_vc_g4

0x3585,	// (0x00003585) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3585,	// (0x00003585) list_single_graphic_heading_pane_vc_g5

0x0002,

0xadc9,	// (0x0000adc9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xadc9,	// (0x0000adc9) list_single_graphic_heading_pane_vc_g

0x377e,	// (0x0000377e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x377e,	// (0x0000377e) list_single_graphic_heading_pane_vc_t1

0x5a8f,	// (0x00005a8f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a8f,	// (0x00005a8f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xb046,	// (0x0000b046) list_single_graphic_heading_pane_vc_t_ParamLimits

0xb046,	// (0x0000b046) list_single_graphic_heading_pane_vc_t

0x254e,	// (0x0000254e) list_double2_pane_vc_g1_ParamLimits

0x254e,	// (0x0000254e) list_double2_pane_vc_g1

0x3585,	// (0x00003585) list_double2_pane_vc_g2_ParamLimits

0x3585,	// (0x00003585) list_double2_pane_vc_g2

0x0001,

0xadf1,	// (0x0000adf1) list_double2_pane_vc_g_ParamLimits

0xadf1,	// (0x0000adf1) list_double2_pane_vc_g

0x5aa3,	// (0x00005aa3) list_double2_pane_vc_t1_ParamLimits

0x5aa3,	// (0x00005aa3) list_double2_pane_vc_t1

0x5ab9,	// (0x00005ab9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5ab9,	// (0x00005ab9) list_double2_large_graphic_pane_vc_g1

0x254e,	// (0x0000254e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x254e,	// (0x0000254e) list_double2_large_graphic_pane_vc_g2

0x3585,	// (0x00003585) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3585,	// (0x00003585) list_double2_large_graphic_pane_vc_g3

0x0002,

0xb04b,	// (0x0000b04b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xb04b,	// (0x0000b04b) list_double2_large_graphic_pane_vc_g

0x5ac5,	// (0x00005ac5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ac5,	// (0x00005ac5) list_double2_large_graphic_pane_vc_t1

0x5adb,	// (0x00005adb) list_double_time_pane_vc_g1_ParamLimits

0x5adb,	// (0x00005adb) list_double_time_pane_vc_g1

0x5ae7,	// (0x00005ae7) list_double_time_pane_vc_g2_ParamLimits

0x5ae7,	// (0x00005ae7) list_double_time_pane_vc_g2

0x0001,

0xb052,	// (0x0000b052) list_double_time_pane_vc_g_ParamLimits

0xb052,	// (0x0000b052) list_double_time_pane_vc_g

0x5af3,	// (0x00005af3) list_double_time_pane_vc_t1_ParamLimits

0x5af3,	// (0x00005af3) list_double_time_pane_vc_t1

0x5b17,	// (0x00005b17) list_double_time_pane_vc_t2_ParamLimits

0x5b17,	// (0x00005b17) list_double_time_pane_vc_t2

0x5b46,	// (0x00005b46) list_double_time_pane_vc_t3_ParamLimits

0x5b46,	// (0x00005b46) list_double_time_pane_vc_t3

0x5b58,	// (0x00005b58) list_double_time_pane_vc_t4_ParamLimits

0x5b58,	// (0x00005b58) list_double_time_pane_vc_t4

0x0003,

0xb057,	// (0x0000b057) list_double_time_pane_vc_t_ParamLimits

0xb057,	// (0x0000b057) list_double_time_pane_vc_t

0x254e,	// (0x0000254e) list_double_pane_vc_g1_ParamLimits

0x254e,	// (0x0000254e) list_double_pane_vc_g1

0x3585,	// (0x00003585) list_double_pane_vc_g2_ParamLimits

0x3585,	// (0x00003585) list_double_pane_vc_g2

0x0001,

0xadf1,	// (0x0000adf1) list_double_pane_vc_g_ParamLimits

0xadf1,	// (0x0000adf1) list_double_pane_vc_g

0x5b6c,	// (0x00005b6c) list_double_pane_vc_t1_ParamLimits

0x5b6c,	// (0x00005b6c) list_double_pane_vc_t1

0x5b80,	// (0x00005b80) list_double_pane_vc_t2_ParamLimits

0x5b80,	// (0x00005b80) list_double_pane_vc_t2

0x0001,

0xb060,	// (0x0000b060) list_double_pane_vc_t_ParamLimits

0xb060,	// (0x0000b060) list_double_pane_vc_t

0x254e,	// (0x0000254e) list_double_number_pane_vc_g1_ParamLimits

0x254e,	// (0x0000254e) list_double_number_pane_vc_g1

0x3585,	// (0x00003585) list_double_number_pane_vc_g2_ParamLimits

0x3585,	// (0x00003585) list_double_number_pane_vc_g2

0x0001,

0xadf1,	// (0x0000adf1) list_double_number_pane_vc_g_ParamLimits

0xadf1,	// (0x0000adf1) list_double_number_pane_vc_g

0x5b98,	// (0x00005b98) list_double_number_pane_vc_t1_ParamLimits

0x5b98,	// (0x00005b98) list_double_number_pane_vc_t1

0x5baa,	// (0x00005baa) list_double_number_pane_vc_t2_ParamLimits

0x5baa,	// (0x00005baa) list_double_number_pane_vc_t2

0x5bbe,	// (0x00005bbe) list_double_number_pane_vc_t3_ParamLimits

0x5bbe,	// (0x00005bbe) list_double_number_pane_vc_t3

0x0002,

0xb065,	// (0x0000b065) list_double_number_pane_vc_t_ParamLimits

0xb065,	// (0x0000b065) list_double_number_pane_vc_t

0x5bd6,	// (0x00005bd6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5bd6,	// (0x00005bd6) list_double_large_graphic_pane_vc_g1

0x5bf8,	// (0x00005bf8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5bf8,	// (0x00005bf8) list_double_large_graphic_pane_vc_g2

0x5c0c,	// (0x00005c0c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5c0c,	// (0x00005c0c) list_double_large_graphic_pane_vc_g3

0x5c1b,	// (0x00005c1b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c1b,	// (0x00005c1b) list_double_large_graphic_pane_vc_g4

0x0003,

0xb06c,	// (0x0000b06c) list_double_large_graphic_pane_vc_g_ParamLimits

0xb06c,	// (0x0000b06c) list_double_large_graphic_pane_vc_g

0x5c27,	// (0x00005c27) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c27,	// (0x00005c27) list_double_large_graphic_pane_vc_t1

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_t2

0x0001,

0xb075,	// (0x0000b075) list_double_large_graphic_pane_vc_t_ParamLimits

0xb075,	// (0x0000b075) list_double_large_graphic_pane_vc_t

0x57d1,	// (0x000057d1) list_double_heading_pane_vc_g1_ParamLimits

0x57d1,	// (0x000057d1) list_double_heading_pane_vc_g1

0x57dd,	// (0x000057dd) list_double_heading_pane_vc_g2_ParamLimits

0x57dd,	// (0x000057dd) list_double_heading_pane_vc_g2

0x0001,

0xb07a,	// (0x0000b07a) list_double_heading_pane_vc_g_ParamLimits

0xb07a,	// (0x0000b07a) list_double_heading_pane_vc_g

0x5c65,	// (0x00005c65) list_double_heading_pane_vc_t1_ParamLimits

0x5c65,	// (0x00005c65) list_double_heading_pane_vc_t1

0x377e,	// (0x0000377e) list_double_heading_pane_vc_t2_ParamLimits

0x377e,	// (0x0000377e) list_double_heading_pane_vc_t2

0x0001,

0xb07f,	// (0x0000b07f) list_double_heading_pane_vc_t_ParamLimits

0xb07f,	// (0x0000b07f) list_double_heading_pane_vc_t

0x5c79,	// (0x00005c79) list_double_graphic_pane_vc_g1_ParamLimits

0x5c79,	// (0x00005c79) list_double_graphic_pane_vc_g1

0x5c85,	// (0x00005c85) list_double_graphic_pane_vc_g2_ParamLimits

0x5c85,	// (0x00005c85) list_double_graphic_pane_vc_g2

0x254e,	// (0x0000254e) list_double_graphic_pane_vc_g3_ParamLimits

0x254e,	// (0x0000254e) list_double_graphic_pane_vc_g3

0x0003,

0xb084,	// (0x0000b084) list_double_graphic_pane_vc_g_ParamLimits

0xb084,	// (0x0000b084) list_double_graphic_pane_vc_g

0x5ca2,	// (0x00005ca2) list_double_graphic_pane_vc_t1_ParamLimits

0x5ca2,	// (0x00005ca2) list_double_graphic_pane_vc_t1

0x5ccc,	// (0x00005ccc) list_double_graphic_pane_vc_t2_ParamLimits

0x5ccc,	// (0x00005ccc) list_double_graphic_pane_vc_t2

0x0001,

0xb08d,	// (0x0000b08d) list_double_graphic_pane_vc_t_ParamLimits

0xb08d,	// (0x0000b08d) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb53c,	// (0x0000b53c) aid_size_cell_touch_ParamLimits

0xb53c,	// (0x0000b53c) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb6ec,	// (0x0000b6ec) touch_pane_ParamLimits

0xb6ec,	// (0x0000b6ec) touch_pane

0x12b6,	// (0x000012b6) button_value_adjust_pane_cp2

0x12be,	// (0x000012be) button_value_adjust_pane_cp4

0x12e0,	// (0x000012e0) form_field_data_pane_cp2

0xbe76,	// (0x0000be76) form_field_data_wide_pane_cp2

0x1b1c,	// (0x00001b1c) bg_scroll_pane_ParamLimits

0x1b3b,	// (0x00001b3b) scroll_handle_pane_ParamLimits

0x1b4f,	// (0x00001b4f) scroll_sc2_down_pane_ParamLimits

0x1b4f,	// (0x00001b4f) scroll_sc2_down_pane

0x1b76,	// (0x00001b76) scroll_sc2_up_pane_ParamLimits

0x1b76,	// (0x00001b76) scroll_sc2_up_pane

0xd706,	// (0x0000d706) grid_wheel_folder_pane_g1_ParamLimits

0xd706,	// (0x0000d706) grid_wheel_folder_pane_g1

0x225d,	// (0x0000225d) clock_nsta_pane_cp2_ParamLimits

0x225d,	// (0x0000225d) clock_nsta_pane_cp2

0x2b8c,	// (0x00002b8c) listscroll_midp_pane_ParamLimits

0xc265,	// (0x0000c265) midp_canvas_pane

0x2af8,	// (0x00002af8) nsta_clock_indic_pane

0x2b56,	// (0x00002b56) listscroll_form_pane_vc

0x2b7a,	// (0x00002b7a) listscroll_set_pane_vc_ParamLimits

0x2b7a,	// (0x00002b7a) listscroll_set_pane_vc

0xcd27,	// (0x0000cd27) clock_nsta_pane

0xcd51,	// (0x0000cd51) indicator_nsta_pane

0x35d9,	// (0x000035d9) bg_popup_sub_pane_cp2_ParamLimits

0x35ed,	// (0x000035ed) find_pane_cp2_ParamLimits

0x35ed,	// (0x000035ed) find_pane_cp2

0x3603,	// (0x00003603) grid_toobar_pane_ParamLimits

0x385a,	// (0x0000385a) list_form_gen_pane_vc_ParamLimits

0x385a,	// (0x0000385a) list_form_gen_pane_vc

0x3870,	// (0x00003870) scroll_pane_cp8_vc_ParamLimits

0x3870,	// (0x00003870) scroll_pane_cp8_vc

0x3989,	// (0x00003989) data_form_wide_pane_vc_ParamLimits

0x3989,	// (0x00003989) data_form_wide_pane_vc

0x3995,	// (0x00003995) form_field_data_wide_pane_vc_g1

0x399d,	// (0x0000399d) form_field_data_wide_pane_vc_t1_ParamLimits

0x399d,	// (0x0000399d) form_field_data_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc

0xd156,	// (0x0000d156) list_midp_pane_ParamLimits

0x5378,	// (0x00005378) scroll_pane_cp16_ParamLimits

0x5378,	// (0x00005378) scroll_pane_cp16

0x3d61,	// (0x00003d61) button_value_adjust_pane_ParamLimits

0x3d61,	// (0x00003d61) button_value_adjust_pane

0xd309,	// (0x0000d309) button_value_adjust_pane_cp6_ParamLimits

0xd309,	// (0x0000d309) button_value_adjust_pane_cp6

0xd423,	// (0x0000d423) settings_code_pane_cp_ParamLimits

0xd423,	// (0x0000d423) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xad1c,	// (0x0000ad1c) cell_touch_pane_g

0xd5f4,	// (0x0000d5f4) cell_touch_pane_cp_ParamLimits

0xd5f4,	// (0x0000d5f4) cell_touch_pane_cp

0xd610,	// (0x0000d610) cell_touch_pane_ParamLimits

0xd610,	// (0x0000d610) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5823,	// (0x00005823) list_set_graphic_pane_vc_g1_ParamLimits

0x5823,	// (0x00005823) list_set_graphic_pane_vc_g1

0x582f,	// (0x0000582f) list_set_graphic_pane_vc_g2_ParamLimits

0x582f,	// (0x0000582f) list_set_graphic_pane_vc_g2

0x0001,

0xb011,	// (0x0000b011) list_set_graphic_pane_vc_g_ParamLimits

0xb011,	// (0x0000b011) list_set_graphic_pane_vc_g

0x583b,	// (0x0000583b) text_primary_small_cp13_vc_ParamLimits

0x583b,	// (0x0000583b) text_primary_small_cp13_vc

0x5853,	// (0x00005853) list_set_graphic_pane_vc_ParamLimits

0x5853,	// (0x00005853) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5866,	// (0x00005866) set_text_pane_vc_t1_ParamLimits

0x5866,	// (0x00005866) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5882,	// (0x00005882) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x588c,	// (0x0000588c) setting_slider_graphic_pane_vc_t1

0x589c,	// (0x0000589c) setting_slider_graphic_pane_vc_t2

0x0001,

0xb016,	// (0x0000b016) setting_slider_graphic_pane_vc_t

0x58ac,	// (0x000058ac) slider_set_pane_cp_vc

0x58b4,	// (0x000058b4) slider_set_pane_vc_g1

0x58bd,	// (0x000058bd) slider_set_pane_vc_g2

0x0006,

0xb01b,	// (0x0000b01b) slider_set_pane_vc_g

0x14c5,	// (0x000014c5) set_opt_bg_pane_g1_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g2_copy1

0x58e9,	// (0x000058e9) set_opt_bg_pane_g3_copy1

0x14dd,	// (0x000014dd) set_opt_bg_pane_g4_copy1

0x14e5,	// (0x000014e5) set_opt_bg_pane_g5_copy1

0x14ed,	// (0x000014ed) set_opt_bg_pane_g6_copy1

0x58f3,	// (0x000058f3) set_opt_bg_pane_g7_copy1

0x58fb,	// (0x000058fb) set_opt_bg_pane_g8_copy1

0x5905,	// (0x00005905) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x590f,	// (0x0000590f) setting_slider_pane_vc_t1

0x591e,	// (0x0000591e) setting_slider_pane_vc_t2

0x592e,	// (0x0000592e) setting_slider_pane_vc_t3

0x0002,

0xb02a,	// (0x0000b02a) setting_slider_pane_vc_t

0x593e,	// (0x0000593e) slider_set_pane_vc

0x45a2,	// (0x000045a2) volume_set_pane_vc_g1

0x45ab,	// (0x000045ab) volume_set_pane_vc_g2

0x45b4,	// (0x000045b4) volume_set_pane_vc_g3

0x45bd,	// (0x000045bd) volume_set_pane_vc_g4

0x45c6,	// (0x000045c6) volume_set_pane_vc_g5

0x45cf,	// (0x000045cf) volume_set_pane_vc_g6

0x45d8,	// (0x000045d8) volume_set_pane_vc_g7

0x45e1,	// (0x000045e1) volume_set_pane_vc_g8

0x45ea,	// (0x000045ea) volume_set_pane_vc_g9

0x45f3,	// (0x000045f3) volume_set_pane_vc_g10

0x0009,

0xaec8,	// (0x0000aec8) volume_set_pane_vc_g

0x5946,	// (0x00005946) volume_set_pane_vc

0x594e,	// (0x0000594e) button_value_adjust_pane_cp1_vc

0x5958,	// (0x00005958) list_highlight_pane_cp2_vc

0x5961,	// (0x00005961) list_set_pane_vc_ParamLimits

0x5961,	// (0x00005961) list_set_pane_vc

0x59bf,	// (0x000059bf) main_pane_set_vc_t1_ParamLimits

0x59bf,	// (0x000059bf) main_pane_set_vc_t1

0x59d4,	// (0x000059d4) main_pane_set_vc_t2_ParamLimits

0x59d4,	// (0x000059d4) main_pane_set_vc_t2

0x59e6,	// (0x000059e6) main_pane_set_vc_t3_ParamLimits

0x59e6,	// (0x000059e6) main_pane_set_vc_t3

0x59fa,	// (0x000059fa) main_pane_set_vc_t4_ParamLimits

0x59fa,	// (0x000059fa) main_pane_set_vc_t4

0x0003,

0xb031,	// (0x0000b031) main_pane_set_vc_t_ParamLimits

0xb031,	// (0x0000b031) main_pane_set_vc_t

0x5a0e,	// (0x00005a0e) setting_code_pane_vc_ParamLimits

0x5a0e,	// (0x00005a0e) setting_code_pane_vc

0x5a1f,	// (0x00005a1f) setting_slider_graphic_pane_vc

0x5a1f,	// (0x00005a1f) setting_slider_pane_vc

0x5a1f,	// (0x00005a1f) setting_text_pane_vc

0x5a1f,	// (0x00005a1f) setting_volume_pane_vc

0x5a29,	// (0x00005a29) scroll_pane_cp121_vc

0x12a4,	// (0x000012a4) set_content_pane_vc

0x5cf6,	// (0x00005cf6) button_value_adjust_pane_g1

0x5cff,	// (0x00005cff) button_value_adjust_pane_g2

0x0001,

0xb092,	// (0x0000b092) button_value_adjust_pane_g

0x5d08,	// (0x00005d08) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5d08,	// (0x00005d08) form_field_slider_wide_pane_vc_t1

0x5d1c,	// (0x00005d1c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d1c,	// (0x00005d1c) form_field_slider_wide_pane_vc_t2

0x0002,

0xb097,	// (0x0000b097) form_field_slider_wide_pane_vc_t_ParamLimits

0xb097,	// (0x0000b097) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5d4a,	// (0x00005d4a) slider_cont_pane_cp1_vc_ParamLimits

0x5d4a,	// (0x00005d4a) slider_cont_pane_cp1_vc

0x5d5c,	// (0x00005d5c) slider_form_pane_g1_cp2

0x58bd,	// (0x000058bd) slider_form_pane_g2_cp2

0x5d89,	// (0x00005d89) form_field_slider_pane_vc_t3

0x5d97,	// (0x00005d97) form_field_slider_pane_vc_t4

0x5da5,	// (0x00005da5) slider_form_pane_vc_ParamLimits

0x5da5,	// (0x00005da5) slider_form_pane_vc

0x5db2,	// (0x00005db2) form_field_slider_pane_vc_t1_ParamLimits

0x5db2,	// (0x00005db2) form_field_slider_pane_vc_t1

0x5d1c,	// (0x00005d1c) form_field_slider_pane_vc_t2_ParamLimits

0x5d1c,	// (0x00005d1c) form_field_slider_pane_vc_t2

0x0001,

0xb0a9,	// (0x0000b0a9) form_field_slider_pane_vc_t_ParamLimits

0xb0a9,	// (0x0000b0a9) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5dce,	// (0x00005dce) slider_cont_pane_vc_ParamLimits

0x5dce,	// (0x00005dce) slider_cont_pane_vc

0x5de2,	// (0x00005de2) list_form_graphic_pane_cp_vc_ParamLimits

0x5de2,	// (0x00005de2) list_form_graphic_pane_cp_vc

0x3995,	// (0x00003995) form_field_popup_wide_pane_vc_g1

0x5df7,	// (0x00005df7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5df7,	// (0x00005df7) form_field_popup_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc

0x5e3c,	// (0x00005e3c) list_form_wide_pane_vc_ParamLimits

0x5e3c,	// (0x00005e3c) list_form_wide_pane_vc

0x5e48,	// (0x00005e48) list_form_graphic_pane_vc_g1

0x5e50,	// (0x00005e50) list_form_graphic_pane_vc_t1_ParamLimits

0x5e50,	// (0x00005e50) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5e6c,	// (0x00005e6c) list_form_graphic_pane_vc_ParamLimits

0x5e6c,	// (0x00005e6c) list_form_graphic_pane_vc

0x3995,	// (0x00003995) form_field_popup_pane_vc_g1

0x5e82,	// (0x00005e82) form_field_popup_pane_vc_t1_ParamLimits

0x5e82,	// (0x00005e82) form_field_popup_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc

0x5e99,	// (0x00005e99) list_form_pane_vc_ParamLimits

0x5e99,	// (0x00005e99) list_form_pane_vc

0x5ea5,	// (0x00005ea5) data_form_pane_vc_t1_ParamLimits

0x5ea5,	// (0x00005ea5) data_form_pane_vc_t1

0x14c5,	// (0x000014c5) input_focus_pane_vc_g1

0x14cd,	// (0x000014cd) input_focus_pane_vc_g2

0x14d5,	// (0x000014d5) input_focus_pane_vc_g3

0x14dd,	// (0x000014dd) input_focus_pane_vc_g4

0x14e5,	// (0x000014e5) input_focus_pane_vc_g5

0x14ed,	// (0x000014ed) input_focus_pane_vc_g6

0x14f5,	// (0x000014f5) input_focus_pane_vc_g7

0x14fd,	// (0x000014fd) input_focus_pane_vc_g8

0x1505,	// (0x00001505) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xaca5,	// (0x0000aca5) input_focus_pane_vc_g

0x3989,	// (0x00003989) data_form_pane_vc_ParamLimits

0x3989,	// (0x00003989) data_form_pane_vc

0x3995,	// (0x00003995) form_field_data_pane_vc_g1

0x5ec0,	// (0x00005ec0) form_field_data_pane_vc_t1_ParamLimits

0x5ec0,	// (0x00005ec0) form_field_data_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_vc

0x5eda,	// (0x00005eda) button_value_adjust_pane_cp3_vc

0x5ee2,	// (0x00005ee2) button_value_adjust_pane_cp5_vc

0x5eea,	// (0x00005eea) form_field_data_pane_vc_ParamLimits

0x5eea,	// (0x00005eea) form_field_data_pane_vc

0x5f01,	// (0x00005f01) form_field_data_pane_vc_cp2

0x5f09,	// (0x00005f09) form_field_data_wide_pane_vc_ParamLimits

0x5f09,	// (0x00005f09) form_field_data_wide_pane_vc

0x5f1f,	// (0x00005f1f) form_field_data_wide_pane_vc_cp2

0x5f27,	// (0x00005f27) form_field_popup_pane_vc_ParamLimits

0x5f27,	// (0x00005f27) form_field_popup_pane_vc

0x5f3e,	// (0x00005f3e) form_field_popup_wide_pane_vc_ParamLimits

0x5f3e,	// (0x00005f3e) form_field_popup_wide_pane_vc

0x5f54,	// (0x00005f54) form_field_slider_pane_vc_ParamLimits

0x5f54,	// (0x00005f54) form_field_slider_pane_vc

0x5f67,	// (0x00005f67) form_field_slider_wide_pane_vc_ParamLimits

0x5f67,	// (0x00005f67) form_field_slider_wide_pane_vc

0xd62e,	// (0x0000d62e) grid_touch_1_pane_ParamLimits

0xd62e,	// (0x0000d62e) grid_touch_1_pane

0xd642,	// (0x0000d642) grid_touch_2_pane_ParamLimits

0xd642,	// (0x0000d642) grid_touch_2_pane

0x6035,	// (0x00006035) touch_pane_g1_ParamLimits

0x6035,	// (0x00006035) touch_pane_g1

0x5f9e,	// (0x00005f9e) cell_app_pane_cp_wide_ParamLimits

0x5f9e,	// (0x00005f9e) cell_app_pane_cp_wide

0x5faf,	// (0x00005faf) grid_popup_fast_wide_pane_ParamLimits

0x5faf,	// (0x00005faf) grid_popup_fast_wide_pane

0x5fc3,	// (0x00005fc3) scroll_pane_cp19_ParamLimits

0x5fc3,	// (0x00005fc3) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5fd7,	// (0x00005fd7) listscroll_popup_fast_wide_pane

0x16d9,	// (0x000016d9) grid_indicator_nsta_pane

0x5fdf,	// (0x00005fdf) clock_nsta_pane_g1

0x5fe8,	// (0x00005fe8) clock_nsta_pane_t1

0xd66c,	// (0x0000d66c) cell_indicator_nsta_pane_ParamLimits

0xd66c,	// (0x0000d66c) cell_indicator_nsta_pane

0x6035,	// (0x00006035) cell_indicator_nsta_pane_g1

0xd683,	// (0x0000d683) cell_indicator_nsta_pane_g2

0x0001,

0xf5bc,	// (0x0000f5bc) cell_indicator_nsta_pane_g

0x6050,	// (0x00006050) clock_nsta_pane_cp

0x6058,	// (0x00006058) indicator_nsta_pane_cp

0x6060,	// (0x00006060) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c6b,	// (0x00001c6b) scroll_pane_cp29

0x218a,	// (0x0000218a) indicator_nsta_pane_cp2_ParamLimits

0x218a,	// (0x0000218a) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3be8,	// (0x00003be8) form_midp_field_text_pane_ParamLimits

0x3d33,	// (0x00003d33) scroll_bar_cp050_ParamLimits

0x60c1,	// (0x000060c1) cell_indicator_pane_ParamLimits

0x60c1,	// (0x000060c1) cell_indicator_pane

0x60d8,	// (0x000060d8) cell_indicator_pane_g1

0xd690,	// (0x0000d690) grid_wheel_folder_pane_ParamLimits

0xd690,	// (0x0000d690) grid_wheel_folder_pane

0xd69e,	// (0x0000d69e) list_wheel_apps_pane_ParamLimits

0xd69e,	// (0x0000d69e) list_wheel_apps_pane

0xd6ac,	// (0x0000d6ac) main_apps_wheel_pane_g1_ParamLimits

0xd6ac,	// (0x0000d6ac) main_apps_wheel_pane_g1

0xd6b8,	// (0x0000d6b8) main_apps_wheel_pane_g2_ParamLimits

0xd6b8,	// (0x0000d6b8) main_apps_wheel_pane_g2

0x0001,

0xf5c1,	// (0x0000f5c1) main_apps_wheel_pane_g_ParamLimits

0xf5c1,	// (0x0000f5c1) main_apps_wheel_pane_g

0xd6c6,	// (0x0000d6c6) main_apps_wheel_pane_t1_ParamLimits

0xd6c6,	// (0x0000d6c6) main_apps_wheel_pane_t1

0xd6da,	// (0x0000d6da) list_wheel_apps_pane_g1

0xd6e2,	// (0x0000d6e2) list_wheel_apps_pane_g2

0xd6ea,	// (0x0000d6ea) list_wheel_apps_pane_g3

0xd6f2,	// (0x0000d6f2) list_wheel_apps_pane_g4

0xd6fc,	// (0x0000d6fc) list_wheel_apps_pane_g5

0x0004,

0xf5c6,	// (0x0000f5c6) list_wheel_apps_pane_g

0x2495,	// (0x00002495) navi_icon_text_pane

0xcc1b,	// (0x0000cc1b) aid_fill_nsta

0x619d,	// (0x0000619d) navi_icon_text_pane_g1

0x61a9,	// (0x000061a9) navi_icon_text_pane_t1

0xc242,	// (0x0000c242) list_set_graphic_pane_t1_ParamLimits

0xc242,	// (0x0000c242) list_set_graphic_pane_t1

0x4482,	// (0x00004482) popup_midp_note_alarm_window_t6_ParamLimits

0x4482,	// (0x00004482) popup_midp_note_alarm_window_t6

0x4494,	// (0x00004494) popup_midp_note_alarm_window_t7_ParamLimits

0x4494,	// (0x00004494) popup_midp_note_alarm_window_t7

0x44a6,	// (0x000044a6) popup_midp_note_alarm_window_t8_ParamLimits

0x44a6,	// (0x000044a6) popup_midp_note_alarm_window_t8

0x44b8,	// (0x000044b8) popup_midp_note_alarm_window_t9_ParamLimits

0x44b8,	// (0x000044b8) popup_midp_note_alarm_window_t9

0x44ca,	// (0x000044ca) popup_midp_note_alarm_window_t10_ParamLimits

0x44ca,	// (0x000044ca) popup_midp_note_alarm_window_t10

0x44dc,	// (0x000044dc) popup_midp_note_alarm_window_t11_ParamLimits

0x44dc,	// (0x000044dc) popup_midp_note_alarm_window_t11

0x44ee,	// (0x000044ee) scroll_pane_cp17_ParamLimits

0x44ee,	// (0x000044ee) scroll_pane_cp17

0x45a2,	// (0x000045a2) volume_small_pane_cp_g1

0x61bb,	// (0x000061bb) volume_small_pane_cp_g2

0x61c4,	// (0x000061c4) volume_small_pane_cp_g3

0x61cd,	// (0x000061cd) volume_small_pane_cp_g4

0x61d6,	// (0x000061d6) volume_small_pane_cp_g5

0x61df,	// (0x000061df) volume_small_pane_cp_g6

0x61e8,	// (0x000061e8) volume_small_pane_cp_g7

0x61f1,	// (0x000061f1) volume_small_pane_cp_g8

0x61fa,	// (0x000061fa) volume_small_pane_cp_g9

0x6203,	// (0x00006203) volume_small_pane_cp_g10

0x26e6,	// (0x000026e6) midp_ticker_pane_g1_ParamLimits

0x26f2,	// (0x000026f2) midp_ticker_pane_g2_ParamLimits

0xad71,	// (0x0000ad71) midp_ticker_pane_g_ParamLimits

0x26fe,	// (0x000026fe) midp_ticker_pane_t1_ParamLimits

0xcc3f,	// (0x0000cc3f) aid_fill_nsta_2

0x3d1f,	// (0x00003d1f) list_form2_midp_pane

0x50cf,	// (0x000050cf) midp_editing_number_pane_ParamLimits

0x50de,	// (0x000050de) midp_ticker_pane_ParamLimits

0x620c,	// (0x0000620c) form2_midp_field_pane

0x6230,	// (0x00006230) scroll_pane_cp51

0x6250,	// (0x00006250) form2_midp_button_pane_ParamLimits

0x6250,	// (0x00006250) form2_midp_button_pane

0x6262,	// (0x00006262) form2_midp_content_pane_ParamLimits

0x6262,	// (0x00006262) form2_midp_content_pane

0x627c,	// (0x0000627c) form2_midp_field_choice_group_pane

0x6284,	// (0x00006284) form2_midp_field_pane_g1

0x628c,	// (0x0000628c) form2_midp_field_pane_g2

0x6294,	// (0x00006294) form2_midp_field_pane_g3

0x629c,	// (0x0000629c) form2_midp_field_pane_g4

0x0003,

0xb100,	// (0x0000b100) form2_midp_field_pane_g

0x62a4,	// (0x000062a4) form2_midp_gauge_slider_pane

0x62ac,	// (0x000062ac) form2_midp_gauge_wait_pane

0x62b4,	// (0x000062b4) form2_midp_image_pane_ParamLimits

0x62b4,	// (0x000062b4) form2_midp_image_pane

0x62cf,	// (0x000062cf) form2_midp_label_pane_ParamLimits

0x62cf,	// (0x000062cf) form2_midp_label_pane

0xd72f,	// (0x0000d72f) form2_midp_label_pane_cp_ParamLimits

0xd72f,	// (0x0000d72f) form2_midp_label_pane_cp

0x6309,	// (0x00006309) form2_midp_string_pane_ParamLimits

0x6309,	// (0x00006309) form2_midp_string_pane

0xd74e,	// (0x0000d74e) form2_midp_text_pane_ParamLimits

0xd74e,	// (0x0000d74e) form2_midp_text_pane

0x6338,	// (0x00006338) form2_midp_time_pane

0x6348,	// (0x00006348) input_focus_pane_cp51_ParamLimits

0x6348,	// (0x00006348) input_focus_pane_cp51

0x6360,	// (0x00006360) form2_midp_label_pane_t1_ParamLimits

0x6360,	// (0x00006360) form2_midp_label_pane_t1

0xd767,	// (0x0000d767) form2_mdip_text_pane_t1_ParamLimits

0xd767,	// (0x0000d767) form2_mdip_text_pane_t1

0x63c0,	// (0x000063c0) form2_midp_time_pane_t1

0x63db,	// (0x000063db) form2_midp_gauge_slider_pane_t1

0xd782,	// (0x0000d782) form2_midp_gauge_slider_pane_t2

0xd794,	// (0x0000d794) form2_midp_gauge_slider_pane_t3

0x0002,

0xf5d6,	// (0x0000f5d6) form2_midp_gauge_slider_pane_t

0x6411,	// (0x00006411) form2_midp_slider_pane

0x641d,	// (0x0000641d) form2_midp_gauge_wait_pane_t1

0x642b,	// (0x0000642b) form2_midp_wait_pane_ParamLimits

0x642b,	// (0x0000642b) form2_midp_wait_pane

0xd7a6,	// (0x0000d7a6) list_single_2graphic_pane_cp4_ParamLimits

0xd7a6,	// (0x0000d7a6) list_single_2graphic_pane_cp4

0xd0cd,	// (0x0000d0cd) list_single_midp_graphic_pane_cp_ParamLimits

0xd0cd,	// (0x0000d0cd) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6485,	// (0x00006485) list_single_2graphic_pane_g1_cp4

0x648d,	// (0x0000648d) list_single_2graphic_pane_g2_cp4

0x6495,	// (0x00006495) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x64a4,	// (0x000064a4) list_single_midp_graphic_pane_g4_cp

0x64b3,	// (0x000064b3) list_single_midp_graphic_pane_t1_cp

0xd7ba,	// (0x0000d7ba) form2_mdip_string_pane_t1_ParamLimits

0xd7ba,	// (0x0000d7ba) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5_ParamLimits

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5

0x2b8c,	// (0x00002b8c) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xc96b,	// (0x0000c96b) popup_preview_window_ParamLimits

0xc96b,	// (0x0000c96b) popup_preview_window

0x30f6,	// (0x000030f6) popup_touch_info_window_ParamLimits

0x30f6,	// (0x000030f6) popup_touch_info_window

0x3114,	// (0x00003114) popup_touch_menu_window_ParamLimits

0x3114,	// (0x00003114) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x65c1,	// (0x000065c1) list_touch_menu_pane

0x65c9,	// (0x000065c9) list_single_touch_menu_pane_ParamLimits

0x65c9,	// (0x000065c9) list_single_touch_menu_pane

0x65df,	// (0x000065df) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x65ed,	// (0x000065ed) heading_sub_pane

0x65f5,	// (0x000065f5) list_touch_info_pane_ParamLimits

0x65f5,	// (0x000065f5) list_touch_info_pane

0x6604,	// (0x00006604) list_single_touch_info_pane_ParamLimits

0x6604,	// (0x00006604) list_single_touch_info_pane

0x6616,	// (0x00006616) list_single_touch_info_pane_t1

0x6624,	// (0x00006624) list_single_touch_info_pane_t2

0x0001,

0xb117,	// (0x0000b117) list_single_touch_info_pane_t

0x2615,	// (0x00002615) bg_popup_heading_pane_cp

0x6632,	// (0x00006632) heading_sub_pane_t1

0x389b,	// (0x0000389b) bg_popup_preview_window_pane_cp_ParamLimits

0x389b,	// (0x0000389b) bg_popup_preview_window_pane_cp

0x65ed,	// (0x000065ed) heading_preview_pane

0x65f5,	// (0x000065f5) list_preview_pane_ParamLimits

0x65f5,	// (0x000065f5) list_preview_pane

0x6640,	// (0x00006640) popup_preview_window_g1

0x6604,	// (0x00006604) list_single_preview_pane_ParamLimits

0x6604,	// (0x00006604) list_single_preview_pane

0x6648,	// (0x00006648) list_single_preview_pane_g1

0x6650,	// (0x00006650) list_single_preview_pane_t1

0x6616,	// (0x00006616) list_single_preview_pane_t2

0x0001,

0xb11c,	// (0x0000b11c) list_single_preview_pane_t

0x665e,	// (0x0000665e) bg_popup_heading_pane_cp2_ParamLimits

0x665e,	// (0x0000665e) bg_popup_heading_pane_cp2

0x6674,	// (0x00006674) heading_preview_pane_g1

0x667c,	// (0x0000667c) heading_preview_pane_t1_ParamLimits

0x667c,	// (0x0000667c) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0d94,	// (0x00000d94) scroll_pane_ParamLimits

0x1b64,	// (0x00001b64) scroll_sc2_left_pane

0x1b6d,	// (0x00001b6d) scroll_sc2_right_pane

0x1b8c,	// (0x00001b8c) scroll_bg_pane_g1_ParamLimits

0x1ba1,	// (0x00001ba1) scroll_bg_pane_g2_ParamLimits

0x1bb9,	// (0x00001bb9) scroll_bg_pane_g3_ParamLimits

0xacfc,	// (0x0000acfc) scroll_bg_pane_g_ParamLimits

0x1b8c,	// (0x00001b8c) scroll_handle_pane_g1_ParamLimits

0x1bdb,	// (0x00001bdb) scroll_handle_pane_g2_ParamLimits

0x1bb9,	// (0x00001bb9) scroll_handle_pane_g3_ParamLimits

0xad03,	// (0x0000ad03) scroll_handle_pane_g_ParamLimits

0x2bbc,	// (0x00002bbc) popup_choice_list_window_ParamLimits

0x2bbc,	// (0x00002bbc) popup_choice_list_window

0x35e5,	// (0x000035e5) choice_list_pane

0x36ad,	// (0x000036ad) cell_toolbar_pane_t1

0x36d5,	// (0x000036d5) toolbar_button_pane_ParamLimits

0x4b0c,	// (0x00004b0c) ai_gene_pane_1_t2_ParamLimits

0x4b0c,	// (0x00004b0c) ai_gene_pane_1_t2

0x0001,

0xaf24,	// (0x0000af24) ai_gene_pane_1_t_ParamLimits

0xaf24,	// (0x0000af24) ai_gene_pane_1_t

0x6699,	// (0x00006699) scroll_sc2_left_pane_g1

0x6699,	// (0x00006699) scroll_sc2_right_pane_g1

0x2b8c,	// (0x00002b8c) bg_popup_sub_pane_cp10

0x66a3,	// (0x000066a3) list_choice_list_pane

0x66bc,	// (0x000066bc) list_single_choice_list_pane_ParamLimits

0x66bc,	// (0x000066bc) list_single_choice_list_pane

0x66cf,	// (0x000066cf) list_single_choice_list_pane_g1

0x16aa,	// (0x000016aa) list_single_choice_list_pane_t1_ParamLimits

0x16aa,	// (0x000016aa) list_single_choice_list_pane_t1

0x66d7,	// (0x000066d7) choice_list_pane_g1

0x66df,	// (0x000066df) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18d0,	// (0x000018d0) title_pane_stacon_g2_ParamLimits

0x18d0,	// (0x000018d0) title_pane_stacon_g2

0x0002,

0xace2,	// (0x0000ace2) title_pane_stacon_g_ParamLimits

0xace2,	// (0x0000ace2) title_pane_stacon_g

0x2615,	// (0x00002615) cursor_press_pane

0xc618,	// (0x0000c618) popup_fep_hwr_window_ParamLimits

0xc618,	// (0x0000c618) popup_fep_hwr_window

0x2ce2,	// (0x00002ce2) popup_fep_vkb_window_ParamLimits

0x2ce2,	// (0x00002ce2) popup_fep_vkb_window

0x66ed,	// (0x000066ed) cursor_press_pane_g1

0x0002,

0xf5ea,	// (0x0000f5ea) fep_vkb_side_pane_g_ParamLimits

0x672e,	// (0x0000672e) fep_hwr_candidate_pane_ParamLimits

0x672e,	// (0x0000672e) fep_hwr_candidate_pane

0x6758,	// (0x00006758) fep_hwr_side_pane_ParamLimits

0x6758,	// (0x00006758) fep_hwr_side_pane

0x6778,	// (0x00006778) fep_hwr_top_pane_ParamLimits

0x6778,	// (0x00006778) fep_hwr_top_pane

0x6790,	// (0x00006790) fep_hwr_write_pane_ParamLimits

0x6790,	// (0x00006790) fep_hwr_write_pane

0xf5ea,	// (0x0000f5ea) fep_vkb_side_pane_g

0x67ca,	// (0x000067ca) fep_hwr_top_pane_g1

0x67dc,	// (0x000067dc) fep_hwr_top_pane_g2

0x67ee,	// (0x000067ee) fep_hwr_top_pane_g3

0x0002,

0xb121,	// (0x0000b121) fep_hwr_top_pane_g

0x6803,	// (0x00006803) fep_hwr_top_text_pane

0x1d5b,	// (0x00001d5b) fep_hwr_top_text_pane_g1

0x68db,	// (0x000068db) fep_hwr_top_text_pane_t1

0x692b,	// (0x0000692b) fep_hwr_candidate_pane_g1

0x6ba4,	// (0x00006ba4) fep_vkb_keypad_pane_g3_ParamLimits

0x6ba4,	// (0x00006ba4) fep_vkb_keypad_pane_g3

0x6bcc,	// (0x00006bcc) fep_vkb_keypad_pane_g4_ParamLimits

0x6bcc,	// (0x00006bcc) fep_vkb_keypad_pane_g4

0x6c3b,	// (0x00006c3b) fep_vkb_bottom_pane_g2_ParamLimits

0x6c3b,	// (0x00006c3b) fep_vkb_bottom_pane_g2

0x0001,

0xb14c,	// (0x0000b14c) fep_vkb_bottom_pane_g_ParamLimits

0xb14c,	// (0x0000b14c) fep_vkb_bottom_pane_g

0x6699,	// (0x00006699) cell_vkb_side_pane_g2

0x0001,

0xb156,	// (0x0000b156) cell_vkb_side_pane_g

0x6cc6,	// (0x00006cc6) cell_vkb_side_pane_t1

0x6cd4,	// (0x00006cd4) cell_vkb_side_pane_t1_copy1

0x6699,	// (0x00006699) bg_fep_vkb_candidate_pane_g2

0x6e00,	// (0x00006e00) cell_vkb_candidate_pane_ParamLimits

0x695f,	// (0x0000695f) aid_size_cell_vkb_ParamLimits

0x695f,	// (0x0000695f) aid_size_cell_vkb

0x6e00,	// (0x00006e00) cell_vkb_candidate_pane

0x6e34,	// (0x00006e34) bg_popup_fep_shadow_pane_g1

0xd88b,	// (0x0000d88b) fep_vkb_bottom_pane_ParamLimits

0xd88b,	// (0x0000d88b) fep_vkb_bottom_pane

0x6a23,	// (0x00006a23) fep_vkb_candidate_pane_ParamLimits

0x6a23,	// (0x00006a23) fep_vkb_candidate_pane

0xd8b0,	// (0x0000d8b0) fep_vkb_keypad_pane_ParamLimits

0xd8b0,	// (0x0000d8b0) fep_vkb_keypad_pane

0xd8ec,	// (0x0000d8ec) fep_vkb_side_pane_ParamLimits

0xd8ec,	// (0x0000d8ec) fep_vkb_side_pane

0xd928,	// (0x0000d928) fep_vkb_top_pane_ParamLimits

0xd928,	// (0x0000d928) fep_vkb_top_pane

0x6afd,	// (0x00006afd) fep_vkb_top_pane_g1_ParamLimits

0x6afd,	// (0x00006afd) fep_vkb_top_pane_g1

0x6b0c,	// (0x00006b0c) fep_vkb_top_pane_g2_ParamLimits

0x6b0c,	// (0x00006b0c) fep_vkb_top_pane_g2

0x6b1b,	// (0x00006b1b) fep_vkb_top_pane_g3_ParamLimits

0x6b1b,	// (0x00006b1b) fep_vkb_top_pane_g3

0x0003,

0xb13c,	// (0x0000b13c) fep_vkb_top_pane_g_ParamLimits

0xb13c,	// (0x0000b13c) fep_vkb_top_pane_g

0x6b39,	// (0x00006b39) fep_vkb_top_text_pane_ParamLimits

0x6b39,	// (0x00006b39) fep_vkb_top_text_pane

0xd964,	// (0x0000d964) fep_vkb_side_pane_g1_ParamLimits

0xd964,	// (0x0000d964) fep_vkb_side_pane_g1

0x6b93,	// (0x00006b93) grid_vkb_side_pane_ParamLimits

0x6b93,	// (0x00006b93) grid_vkb_side_pane

0x6e3c,	// (0x00006e3c) bg_popup_fep_shadow_pane_g2

0x6e45,	// (0x00006e45) bg_popup_fep_shadow_pane_g3

0x6e4d,	// (0x00006e4d) bg_popup_fep_shadow_pane_g4

0x6e56,	// (0x00006e56) bg_popup_fep_shadow_pane_g5

0x6e60,	// (0x00006e60) bg_popup_fep_shadow_pane_g6

0x6e68,	// (0x00006e68) bg_popup_fep_shadow_pane_g7

0x14e5,	// (0x000014e5) bg_popup_fep_shadow_pane_g8

0x6bea,	// (0x00006bea) grid_vkb_keypad_number_pane_ParamLimits

0x6bea,	// (0x00006bea) grid_vkb_keypad_number_pane

0x6bfa,	// (0x00006bfa) grid_vkb_keypad_pane_ParamLimits

0x6bfa,	// (0x00006bfa) grid_vkb_keypad_pane

0x6c20,	// (0x00006c20) fep_vkb_bottom_pane_g1_ParamLimits

0x6c20,	// (0x00006c20) fep_vkb_bottom_pane_g1

0x6c49,	// (0x00006c49) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6c49,	// (0x00006c49) grid_vkb_keypad_bottom_left_pane

0x6c5e,	// (0x00006c5e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6c5e,	// (0x00006c5e) grid_vkb_keypad_bottom_right_pane

0x6c73,	// (0x00006c73) fep_vkb_top_text_pane_g1

0xd9ab,	// (0x0000d9ab) fep_vkb_top_text_pane_t1

0xd9bd,	// (0x0000d9bd) cell_vkb_side_pane_ParamLimits

0xd9bd,	// (0x0000d9bd) cell_vkb_side_pane

0x6699,	// (0x00006699) cell_vkb_side_pane_g1

0x6ce2,	// (0x00006ce2) cell_vkb_keypad_pane_ParamLimits

0x6ce2,	// (0x00006ce2) cell_vkb_keypad_pane

0x6d57,	// (0x00006d57) cell_vkb_keypad_pane_g1

0x0008,

0xb169,	// (0x0000b169) bg_popup_fep_shadow_pane_g

0x6699,	// (0x00006699) cell_hwr_side_pane_g1

0x6699,	// (0x00006699) cell_hwr_side_pane_g2

0x6d61,	// (0x00006d61) cell_vkb_keypad_pane_t1

0xd9d3,	// (0x0000d9d3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9d3,	// (0x0000d9d3) cell_vkb_keypad_bottom_left_pane

0xd9e8,	// (0x0000d9e8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd9e8,	// (0x0000d9e8) cell_vkb_keypad_bottom_right_pane

0x6699,	// (0x00006699) cell_vkb_keypad_bottom_left_pane_g1

0x6699,	// (0x00006699) cell_vkb_keypad_bottom_right_pane_g1

0x6dc5,	// (0x00006dc5) cell_vkb_keypad_number_pane_ParamLimits

0x6dc5,	// (0x00006dc5) cell_vkb_keypad_number_pane

0x6de4,	// (0x00006de4) cell_vkb_keypad_number_pane_g1

0x6dee,	// (0x00006dee) cell_vkb_keypad_number_pane_g2

0x6df7,	// (0x00006df7) cell_vkb_keypad_number_pane_g3

0x0002,

0xb15b,	// (0x0000b15b) cell_vkb_keypad_number_pane_g

0x6d61,	// (0x00006d61) cell_vkb_keypad_number_pane_t1

0x6e1b,	// (0x00006e1b) fep_vkb_candidate_pane_g1

0x0001,

0xb156,	// (0x0000b156) cell_hwr_side_pane_g

0x6e7a,	// (0x00006e7a) cell_hwr_side_pane_t1

0x6e88,	// (0x00006e88) cell_hwr_side_pane_t1_copy1

0x6b2b,	// (0x00006b2b) cell_hwr_candidate_pane_g1

0x6ed8,	// (0x00006ed8) cell_hwr_candidate_pane_t1

0x6699,	// (0x00006699) cell_vkb_candidate_pane_g2

0x6f2c,	// (0x00006f2c) cell_vkb_candidate_pane_t1

0x66f5,	// (0x000066f5) bg_popup_fep_shadow_pane_ParamLimits

0x66f5,	// (0x000066f5) bg_popup_fep_shadow_pane

0x67aa,	// (0x000067aa) bg_fep_hwr_top_pane_g4

0x6818,	// (0x00006818) bg_hwr_side_pane_g1_ParamLimits

0x6818,	// (0x00006818) bg_hwr_side_pane_g1

0xd844,	// (0x0000d844) cell_hwr_side_pane_ParamLimits

0xd844,	// (0x0000d844) cell_hwr_side_pane

0x6886,	// (0x00006886) fep_hwr_write_pane_g1_ParamLimits

0x6886,	// (0x00006886) fep_hwr_write_pane_g1

0x6893,	// (0x00006893) fep_hwr_write_pane_g2_ParamLimits

0x6893,	// (0x00006893) fep_hwr_write_pane_g2

0x68a0,	// (0x000068a0) fep_hwr_write_pane_g3_ParamLimits

0x68a0,	// (0x000068a0) fep_hwr_write_pane_g3

0xd864,	// (0x0000d864) fep_hwr_write_pane_g4_ParamLimits

0xd864,	// (0x0000d864) fep_hwr_write_pane_g4

0x0005,

0xf5dd,	// (0x0000f5dd) fep_hwr_write_pane_g_ParamLimits

0xf5dd,	// (0x0000f5dd) fep_hwr_write_pane_g

0x67aa,	// (0x000067aa) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67aa,	// (0x000067aa) bg_fep_hwr_candidate_pane_g2

0x68e9,	// (0x000068e9) cell_hwr_candidate_pane_ParamLimits

0x68e9,	// (0x000068e9) cell_hwr_candidate_pane

0x692b,	// (0x0000692b) fep_hwr_candidate_pane_g1_ParamLimits

0x698d,	// (0x0000698d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x698d,	// (0x0000698d) bg_popup_fep_shadow_pane_cp2

0x6b2b,	// (0x00006b2b) fep_vkb_top_pane_g4_ParamLimits

0x6b2b,	// (0x00006b2b) fep_vkb_top_pane_g4

0x6b71,	// (0x00006b71) fep_vkb_side_pane_g2_ParamLimits

0x6b71,	// (0x00006b71) fep_vkb_side_pane_g2

0xbda4,	// (0x0000bda4) list_setting_pane_t4_ParamLimits

0xbda4,	// (0x0000bda4) list_setting_pane_t4

0xbe1e,	// (0x0000be1e) list_setting_number_pane_t5_ParamLimits

0xbe1e,	// (0x0000be1e) list_setting_number_pane_t5

0x1db1,	// (0x00001db1) list_double_heading_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_double_heading_pane_cp2

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2_ParamLimits

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2_ParamLimits

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2

0x6f3a,	// (0x00006f3a) list_double_heading_pane_t1_cp2_ParamLimits

0x6f3a,	// (0x00006f3a) list_double_heading_pane_t1_cp2

0x6f50,	// (0x00006f50) list_double_heading_pane_t2_cp2_ParamLimits

0x6f50,	// (0x00006f50) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6f62,	// (0x00006f62) list_preview_fixed_pane

0x6fa8,	// (0x00006fa8) list_empty_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_empty_pane_fp

0x6fa8,	// (0x00006fa8) list_single_cale_day_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_cale_day_pane_fp

0x6fa8,	// (0x00006fa8) list_single_graphic_heading_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_graphic_heading_pane_fp

0x6fa8,	// (0x00006fa8) list_single_graphic_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_graphic_pane_fp

0x6fa8,	// (0x00006fa8) list_single_heading_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_heading_pane_fp

0x6fa8,	// (0x00006fa8) list_single_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_pane_fp

0x6fbd,	// (0x00006fbd) list_single_pane_fp_g1_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_pane_fp_g3

0x6fc9,	// (0x00006fc9) list_single_pane_fp_g4_ParamLimits

0x6fc9,	// (0x00006fc9) list_single_pane_fp_g4

0x0003,

0xb18a,	// (0x0000b18a) list_single_pane_fp_g_ParamLimits

0xb18a,	// (0x0000b18a) list_single_pane_fp_g

0x6fd5,	// (0x00006fd5) list_single_pane_fp_t1_ParamLimits

0x6fd5,	// (0x00006fd5) list_single_pane_fp_t1

0x6fec,	// (0x00006fec) list_single_graphic_pane_fp_g1_ParamLimits

0x6fec,	// (0x00006fec) list_single_graphic_pane_fp_g1

0x6fbd,	// (0x00006fbd) list_single_graphic_pane_fp_g2_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_graphic_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4

0x6fc9,	// (0x00006fc9) list_single_graphic_pane_fp_g5_ParamLimits

0x6fc9,	// (0x00006fc9) list_single_graphic_pane_fp_g5

0x0004,

0xb193,	// (0x0000b193) list_single_graphic_pane_fp_g_ParamLimits

0xb193,	// (0x0000b193) list_single_graphic_pane_fp_g

0x6ff8,	// (0x00006ff8) list_single_graphic_pane_fp_t1_ParamLimits

0x6ff8,	// (0x00006ff8) list_single_graphic_pane_fp_t1

0x6fec,	// (0x00006fec) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6fec,	// (0x00006fec) list_single_graphic_heading_pane_fp_g1

0x6fbd,	// (0x00006fbd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_graphic_heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4

0x6fc9,	// (0x00006fc9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6fc9,	// (0x00006fc9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb193,	// (0x0000b193) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb193,	// (0x0000b193) list_single_graphic_heading_pane_fp_g

0x700e,	// (0x0000700e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x700e,	// (0x0000700e) list_single_graphic_heading_pane_fp_t1

0x7024,	// (0x00007024) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7024,	// (0x00007024) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb19e,	// (0x0000b19e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb19e,	// (0x0000b19e) list_single_graphic_heading_pane_fp_t

0x7036,	// (0x00007036) list_single_cale_day_pane_fp_g1_ParamLimits

0x7036,	// (0x00007036) list_single_cale_day_pane_fp_g1

0x706e,	// (0x0000706e) list_single_cale_day_pane_fp_g2_ParamLimits

0x706e,	// (0x0000706e) list_single_cale_day_pane_fp_g2

0x707a,	// (0x0000707a) list_single_cale_day_pane_fp_g3_ParamLimits

0x707a,	// (0x0000707a) list_single_cale_day_pane_fp_g3

0x70a2,	// (0x000070a2) list_single_cale_day_pane_fp_g4_ParamLimits

0x70a2,	// (0x000070a2) list_single_cale_day_pane_fp_g4

0x70c6,	// (0x000070c6) list_single_cale_day_pane_fp_g5_ParamLimits

0x70c6,	// (0x000070c6) list_single_cale_day_pane_fp_g5

0x0004,

0xb1a3,	// (0x0000b1a3) list_single_cale_day_pane_fp_g_ParamLimits

0xb1a3,	// (0x0000b1a3) list_single_cale_day_pane_fp_g

0x70ea,	// (0x000070ea) list_single_cale_day_pane_fp_t1_ParamLimits

0x70ea,	// (0x000070ea) list_single_cale_day_pane_fp_t1

0x7110,	// (0x00007110) list_single_cale_day_pane_fp_t2_ParamLimits

0x7110,	// (0x00007110) list_single_cale_day_pane_fp_t2

0x7129,	// (0x00007129) list_single_cale_day_pane_fp_t3_ParamLimits

0x7129,	// (0x00007129) list_single_cale_day_pane_fp_t3

0x0002,

0xb1ae,	// (0x0000b1ae) list_single_cale_day_pane_fp_t_ParamLimits

0xb1ae,	// (0x0000b1ae) list_single_cale_day_pane_fp_t

0x6fbd,	// (0x00006fbd) list_empty_pane_fp_g1_ParamLimits

0x6fbd,	// (0x00006fbd) list_empty_pane_fp_g1

0x7142,	// (0x00007142) list_empty_pane_fp_t1

0x7150,	// (0x00007150) list_empty_pane_fp_t2

0x0001,

0xb1b5,	// (0x0000b1b5) list_empty_pane_fp_t

0x6fbd,	// (0x00006fbd) list_single_heading_pane_fp_g1_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_heading_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3

0x0002,

0xb1ba,	// (0x0000b1ba) list_single_heading_pane_fp_g_ParamLimits

0xb1ba,	// (0x0000b1ba) list_single_heading_pane_fp_g

0x715e,	// (0x0000715e) list_single_heading_pane_fp_t1_ParamLimits

0x715e,	// (0x0000715e) list_single_heading_pane_fp_t1

0x7170,	// (0x00007170) list_single_heading_pane_fp_t2_ParamLimits

0x7170,	// (0x00007170) list_single_heading_pane_fp_t2

0x0001,

0xb1c1,	// (0x0000b1c1) list_single_heading_pane_fp_t_ParamLimits

0xb1c1,	// (0x0000b1c1) list_single_heading_pane_fp_t

0x1718,	// (0x00001718) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1755,	// (0x00001755) cell_app_pane_cp2_ParamLimits

0x1755,	// (0x00001755) cell_app_pane_cp2

0x6717,	// (0x00006717) fep_hwr_candidate_drop_down_list_pane

0x6945,	// (0x00006945) fep_hwr_candidate_pane_g3_ParamLimits

0x6945,	// (0x00006945) fep_hwr_candidate_pane_g3

0x6952,	// (0x00006952) fep_hwr_candidate_pane_g4_ParamLimits

0x6952,	// (0x00006952) fep_hwr_candidate_pane_g4

0x0002,

0xb135,	// (0x0000b135) fep_hwr_candidate_pane_g_ParamLimits

0xb135,	// (0x0000b135) fep_hwr_candidate_pane_g

0x6a12,	// (0x00006a12) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6a12,	// (0x00006a12) fep_vkb_candidate_drop_down_list_pane

0x6e23,	// (0x00006e23) fep_vkb_candidate_pane_g3

0x6e2b,	// (0x00006e2b) fep_vkb_candidate_pane_g4

0x0002,

0xb162,	// (0x0000b162) fep_vkb_candidate_pane_g

0x6b2b,	// (0x00006b2b) cell_hwr_candidate_pane_g1_ParamLimits

0x6e96,	// (0x00006e96) cell_hwr_candidate_pane_g3_ParamLimits

0x6e96,	// (0x00006e96) cell_hwr_candidate_pane_g3

0x6eb7,	// (0x00006eb7) cell_hwr_candidate_pane_g4_ParamLimits

0x6eb7,	// (0x00006eb7) cell_hwr_candidate_pane_g4

0x0002,

0xb17c,	// (0x0000b17c) cell_hwr_candidate_pane_g_ParamLimits

0xb17c,	// (0x0000b17c) cell_hwr_candidate_pane_g

0x6ef6,	// (0x00006ef6) cell_vkb_candidate_pane_g3_ParamLimits

0x6ef6,	// (0x00006ef6) cell_vkb_candidate_pane_g3

0x6f11,	// (0x00006f11) cell_vkb_candidate_pane_g4_ParamLimits

0x6f11,	// (0x00006f11) cell_vkb_candidate_pane_g4

0x7186,	// (0x00007186) cell_app_pane_cp2_g1_ParamLimits

0x7186,	// (0x00007186) cell_app_pane_cp2_g1

0x71a4,	// (0x000071a4) cell_app_pane_cp2_g2_ParamLimits

0x71a4,	// (0x000071a4) cell_app_pane_cp2_g2

0x0001,

0xb1c6,	// (0x0000b1c6) cell_app_pane_cp2_g_ParamLimits

0xb1c6,	// (0x0000b1c6) cell_app_pane_cp2_g

0x71b0,	// (0x000071b0) cell_app_pane_cp2_t1_ParamLimits

0x71b0,	// (0x000071b0) cell_app_pane_cp2_t1

0x139c,	// (0x0000139c) grid_highlight_pane_cp1_ParamLimits

0x139c,	// (0x0000139c) grid_highlight_pane_cp1

0x71c2,	// (0x000071c2) cell_hwr_candidate_pane_cp1_ParamLimits

0x71c2,	// (0x000071c2) cell_hwr_candidate_pane_cp1

0x6b2b,	// (0x00006b2b) fep_hwr_candidate_drop_down_list_pane_g1

0x71e1,	// (0x000071e1) fep_hwr_candidate_drop_down_list_pane_g2

0x71ee,	// (0x000071ee) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb1cb,	// (0x0000b1cb) fep_hwr_candidate_drop_down_list_pane_g

0x71fb,	// (0x000071fb) fep_hwr_candidate_drop_down_list_scroll_pane

0x7204,	// (0x00007204) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7204,	// (0x00007204) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7211,	// (0x00007211) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7211,	// (0x00007211) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x721e,	// (0x0000721e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x721e,	// (0x0000721e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ef6,	// (0x00006ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ef6,	// (0x00006ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f11,	// (0x00006f11) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f11,	// (0x00006f11) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x722b,	// (0x0000722b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x722b,	// (0x0000722b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7246,	// (0x00007246) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7246,	// (0x00007246) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7261,	// (0x00007261) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7261,	// (0x00007261) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb1d2,	// (0x0000b1d2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb1d2,	// (0x0000b1d2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x727c,	// (0x0000727c) cell_vkb_candidate_pane_cp1_ParamLimits

0x727c,	// (0x0000727c) cell_vkb_candidate_pane_cp1

0x6b2b,	// (0x00006b2b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6b2b,	// (0x00006b2b) fep_vkb_candidate_drop_down_list_pane_g1

0x71e1,	// (0x000071e1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x71e1,	// (0x000071e1) fep_vkb_candidate_drop_down_list_pane_g2

0x71ee,	// (0x000071ee) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x71ee,	// (0x000071ee) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb1cb,	// (0x0000b1cb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb1cb,	// (0x0000b1cb) fep_vkb_candidate_drop_down_list_pane_g

0x729c,	// (0x0000729c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x729c,	// (0x0000729c) fep_vkb_candidate_drop_down_list_scroll_pane

0x72a9,	// (0x000072a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72a9,	// (0x000072a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x72b6,	// (0x000072b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72b6,	// (0x000072b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x72c2,	// (0x000072c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72c2,	// (0x000072c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6e96,	// (0x00006e96) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e96,	// (0x00006e96) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6eb7,	// (0x00006eb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eb7,	// (0x00006eb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x72ce,	// (0x000072ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72ce,	// (0x000072ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x72ef,	// (0x000072ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x72ef,	// (0x000072ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7310,	// (0x00007310) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7310,	// (0x00007310) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb1e3,	// (0x0000b1e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb1e3,	// (0x0000b1e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb742,	// (0x0000b742) title_pane_g1_ParamLimits

0xb755,	// (0x0000b755) title_pane_g2_ParamLimits

0xf411,	// (0x0000f411) title_pane_g_ParamLimits

0x1d4b,	// (0x00001d4b) aid_call2_pane

0x1d53,	// (0x00001d53) aid_call_pane

0x1d5b,	// (0x00001d5b) popup_clock_analogue_window_g1

0x1d5b,	// (0x00001d5b) popup_clock_analogue_window_g2

0x1d63,	// (0x00001d63) popup_clock_analogue_window_g3

0x1d6c,	// (0x00001d6c) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xad11,	// (0x0000ad11) popup_clock_analogue_window_g

0x1d74,	// (0x00001d74) popup_clock_analogue_window_t1

0x1dff,	// (0x00001dff) clock_digital_number_pane_ParamLimits

0x1dff,	// (0x00001dff) clock_digital_number_pane

0x1e0b,	// (0x00001e0b) clock_digital_number_pane_cp02_ParamLimits

0x1e0b,	// (0x00001e0b) clock_digital_number_pane_cp02

0x1e17,	// (0x00001e17) clock_digital_number_pane_cp03_ParamLimits

0x1e17,	// (0x00001e17) clock_digital_number_pane_cp03

0x1e23,	// (0x00001e23) clock_digital_number_pane_cp04_ParamLimits

0x1e23,	// (0x00001e23) clock_digital_number_pane_cp04

0x1e2f,	// (0x00001e2f) clock_digital_separator_pane_ParamLimits

0x1e2f,	// (0x00001e2f) clock_digital_separator_pane

0x1e3b,	// (0x00001e3b) popup_clock_digital_window_t1_ParamLimits

0x1e3b,	// (0x00001e3b) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xad1c,	// (0x0000ad1c) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xad1c,	// (0x0000ad1c) clock_digital_separator_pane_g

0xcc1b,	// (0x0000cc1b) aid_fill_nsta_ParamLimits

0xcd51,	// (0x0000cd51) indicator_nsta_pane_ParamLimits

0x3412,	// (0x00003412) popup_clock_analogue_window

0x3412,	// (0x00003412) popup_clock_digital_window

0x16d9,	// (0x000016d9) grid_indicator_nsta_pane_ParamLimits

0x5ff6,	// (0x00005ff6) clock_nsta_pane_t2

0x0001,

0xb0b5,	// (0x0000b0b5) clock_nsta_pane_t

0x1b09,	// (0x00001b09) aid_size_max_handle

0xc103,	// (0x0000c103) aid_size_min_handle

0x2615,	// (0x00002615) editor_scroll_pane

0x732b,	// (0x0000732b) ex_editor_pane

0x1686,	// (0x00001686) scroll_pane_cp13

0x0dc0,	// (0x00000dc0) scroll_pane_cp14

0x1da9,	// (0x00001da9) scroll_pane_cp36

0xc10c,	// (0x0000c10c) list_single_graphic_hl_pane_cp2_ParamLimits

0xc10c,	// (0x0000c10c) list_single_graphic_hl_pane_cp2

0xd4a0,	// (0x0000d4a0) list_single_graphic_hl_pane_ParamLimits

0xd4a0,	// (0x0000d4a0) list_single_graphic_hl_pane

0x7333,	// (0x00007333) aid_size_min_hl_cp1

0x733c,	// (0x0000733c) list_highlight_pane_cp34_ParamLimits

0x733c,	// (0x0000733c) list_highlight_pane_cp34

0x734d,	// (0x0000734d) list_single_graphic_hl_pane_g1_ParamLimits

0x734d,	// (0x0000734d) list_single_graphic_hl_pane_g1

0xda03,	// (0x0000da03) list_single_graphic_hl_pane_g2_ParamLimits

0xda03,	// (0x0000da03) list_single_graphic_hl_pane_g2

0xda03,	// (0x0000da03) list_single_graphic_hl_pane_g3_ParamLimits

0xda03,	// (0x0000da03) list_single_graphic_hl_pane_g3

0x2586,	// (0x00002586) list_single_graphic_hl_pane_g4_ParamLimits

0x2586,	// (0x00002586) list_single_graphic_hl_pane_g4

0xda0f,	// (0x0000da0f) list_single_graphic_hl_pane_g5_ParamLimits

0xda0f,	// (0x0000da0f) list_single_graphic_hl_pane_g5

0x0004,

0xf5f6,	// (0x0000f5f6) list_single_graphic_hl_pane_g_ParamLimits

0xf5f6,	// (0x0000f5f6) list_single_graphic_hl_pane_g

0xda23,	// (0x0000da23) list_single_graphic_hl_pane_t1_ParamLimits

0xda23,	// (0x0000da23) list_single_graphic_hl_pane_t1

0x7390,	// (0x00007390) aid_size_min_hl_cp2

0x7399,	// (0x00007399) list_highlight_pane_cp34_cp2_ParamLimits

0x7399,	// (0x00007399) list_highlight_pane_cp34_cp2

0x734d,	// (0x0000734d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x734d,	// (0x0000734d) list_single_graphic_hl_pane_g1_cp2

0x73a6,	// (0x000073a6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x73a6,	// (0x000073a6) list_single_graphic_hl_pane_g2_cp2

0x73b2,	// (0x000073b2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x73b2,	// (0x000073b2) list_single_graphic_hl_pane_g3_cp2

0x57d1,	// (0x000057d1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x57d1,	// (0x000057d1) list_single_graphic_hl_pane_g4_cp2

0x7366,	// (0x00007366) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7366,	// (0x00007366) list_single_graphic_hl_pane_g5_cp2

0xc401,	// (0x0000c401) control_pane_g4_ParamLimits

0xc401,	// (0x0000c401) control_pane_g4

0x2b8c,	// (0x00002b8c) bg_popup_sub_pane_cp10_ParamLimits

0x66a3,	// (0x000066a3) list_choice_list_pane_ParamLimits

0x66b2,	// (0x000066b2) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f62,	// (0x00006f62) list_preview_fixed_pane_ParamLimits

0x6f78,	// (0x00006f78) list_preview_fixed_pane_cp_ParamLimits

0x6f78,	// (0x00006f78) list_preview_fixed_pane_cp

0x6f84,	// (0x00006f84) popup_preview_fixed_window_g1_ParamLimits

0x6f84,	// (0x00006f84) popup_preview_fixed_window_g1

0x6f90,	// (0x00006f90) popup_preview_fixed_window_g2_ParamLimits

0x6f90,	// (0x00006f90) popup_preview_fixed_window_g2

0x0002,

0xb183,	// (0x0000b183) popup_preview_fixed_window_g_ParamLimits

0xb183,	// (0x0000b183) popup_preview_fixed_window_g

0x19b4,	// (0x000019b4) aid_navi_side_left_pane_ParamLimits

0x19c9,	// (0x000019c9) aid_navi_side_right_pane_ParamLimits

0x19e1,	// (0x000019e1) navi_icon_pane_stacon_ParamLimits

0x19f5,	// (0x000019f5) navi_navi_pane_stacon_ParamLimits

0x19e1,	// (0x000019e1) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x73d6,	// (0x000073d6) listscroll_text_info_pane

0x73de,	// (0x000073de) list_text_info_pane_ParamLimits

0x73de,	// (0x000073de) list_text_info_pane

0x73ed,	// (0x000073ed) scroll_pane_cp24_ParamLimits

0x73ed,	// (0x000073ed) scroll_pane_cp24

0xda39,	// (0x0000da39) list_text_info_pane_t1_ParamLimits

0xda39,	// (0x0000da39) list_text_info_pane_t1

0xc58b,	// (0x0000c58b) popup_fast_swap2_window_ParamLimits

0xc58b,	// (0x0000c58b) popup_fast_swap2_window

0x743c,	// (0x0000743c) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d4b,	// (0x00003d4b) heading_pane_cp2

0x0a8a,	// (0x00000a8a) listscroll_fast2_pane

0x7446,	// (0x00007446) grid_fast2_pane

0x7450,	// (0x00007450) listscroll_fast2_pane_g1

0x7458,	// (0x00007458) listscroll_fast2_pane_g2

0x0001,

0xb1ff,	// (0x0000b1ff) listscroll_fast2_pane_g

0x1686,	// (0x00001686) scroll_pane_cp26

0x7462,	// (0x00007462) cell_fast2_pane_ParamLimits

0x7462,	// (0x00007462) cell_fast2_pane

0x7477,	// (0x00007477) cell_fast2_pane_g1

0x7480,	// (0x00007480) cell_fast2_pane_g2

0x7489,	// (0x00007489) cell_fast2_pane_g3

0x0002,

0xb204,	// (0x0000b204) cell_fast2_pane_g

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp9

0x0b92,	// (0x00000b92) main_eswt_pane_ParamLimits

0x0b92,	// (0x00000b92) main_eswt_pane

0x7402,	// (0x00007402) list_single_text_info_pane

0x7491,	// (0x00007491) eswt_ctrl_button_pane

0x7491,	// (0x00007491) eswt_ctrl_canvas_pane

0x7499,	// (0x00007499) eswt_ctrl_combo_pane

0x7491,	// (0x00007491) eswt_ctrl_default_pane

0x7491,	// (0x00007491) eswt_ctrl_label_pane

0x74a1,	// (0x000074a1) eswt_ctrl_wait_pane

0x74a9,	// (0x000074a9) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x74c9,	// (0x000074c9) popup_eswt_tasktip_window_ParamLimits

0x74c9,	// (0x000074c9) popup_eswt_tasktip_window

0x389b,	// (0x0000389b) bg_popup_window_pane_cp18

0x74da,	// (0x000074da) eswt_control_pane_g1_ParamLimits

0x74da,	// (0x000074da) eswt_control_pane_g1

0x74e7,	// (0x000074e7) eswt_control_pane_g2_ParamLimits

0x74e7,	// (0x000074e7) eswt_control_pane_g2

0x74f4,	// (0x000074f4) eswt_control_pane_g3_ParamLimits

0x74f4,	// (0x000074f4) eswt_control_pane_g3

0x7501,	// (0x00007501) eswt_control_pane_g4_ParamLimits

0x7501,	// (0x00007501) eswt_control_pane_g4

0x0003,

0xb20b,	// (0x0000b20b) eswt_control_pane_g_ParamLimits

0xb20b,	// (0x0000b20b) eswt_control_pane_g

0x139c,	// (0x0000139c) bg_button_pane_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane

0x0b92,	// (0x00000b92) common_borders_pane_copy2_ParamLimits

0x0b92,	// (0x00000b92) common_borders_pane_copy2

0x750e,	// (0x0000750e) control_button_pane_g1_ParamLimits

0x750e,	// (0x0000750e) control_button_pane_g1

0x751a,	// (0x0000751a) control_button_pane_g2_ParamLimits

0x751a,	// (0x0000751a) control_button_pane_g2

0x7526,	// (0x00007526) control_button_pane_g3_ParamLimits

0x7526,	// (0x00007526) control_button_pane_g3

0x0002,

0xb214,	// (0x0000b214) control_button_pane_g_ParamLimits

0xb214,	// (0x0000b214) control_button_pane_g

0x753a,	// (0x0000753a) control_button_pane_t1

0x7548,	// (0x00007548) control_button_pane_t2

0x0001,

0xb21b,	// (0x0000b21b) control_button_pane_t

0x36e1,	// (0x000036e1) bg_button_pane_g1

0x36e9,	// (0x000036e9) bg_button_pane_g2

0x36f1,	// (0x000036f1) bg_button_pane_g3

0x36f9,	// (0x000036f9) bg_button_pane_g4

0x3701,	// (0x00003701) bg_button_pane_g5

0x3709,	// (0x00003709) bg_button_pane_g6

0x3711,	// (0x00003711) bg_button_pane_g7

0x3719,	// (0x00003719) bg_button_pane_g8

0x3721,	// (0x00003721) bg_button_pane_g9

0x0008,

0xae78,	// (0x0000ae78) bg_button_pane_g

0x665e,	// (0x0000665e) common_borders_pane_ParamLimits

0x665e,	// (0x0000665e) common_borders_pane

0x74da,	// (0x000074da) eswt_control_pane_g1_copy1_ParamLimits

0x74da,	// (0x000074da) eswt_control_pane_g1_copy1

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy1_ParamLimits

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy1

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy1_ParamLimits

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy1

0x7501,	// (0x00007501) eswt_control_pane_g4_copy1_ParamLimits

0x7501,	// (0x00007501) eswt_control_pane_g4_copy1

0x6699,	// (0x00006699) bg_eswt_ctrl_canvas_pane_g1

0x665e,	// (0x0000665e) common_borders_pane_cp2_ParamLimits

0x665e,	// (0x0000665e) common_borders_pane_cp2

0x665e,	// (0x0000665e) common_borders_pane_cp3_ParamLimits

0x665e,	// (0x0000665e) common_borders_pane_cp3

0x7556,	// (0x00007556) separator_horizontal_pane

0x755e,	// (0x0000755e) separator_vertical_pane

0x74da,	// (0x000074da) eswt_control_pane_g1_copy2_ParamLimits

0x74da,	// (0x000074da) eswt_control_pane_g1_copy2

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy2_ParamLimits

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy2

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy2_ParamLimits

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy2

0x7501,	// (0x00007501) eswt_control_pane_g4_copy2_ParamLimits

0x7501,	// (0x00007501) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7567,	// (0x00007567) separator_horizontal_pane_g1

0x7570,	// (0x00007570) separator_horizontal_pane_g2

0x7579,	// (0x00007579) separator_horizontal_pane_g3

0x0002,

0xb220,	// (0x0000b220) separator_horizontal_pane_g

0x74da,	// (0x000074da) eswt_control_pane_g1_copy3_ParamLimits

0x74da,	// (0x000074da) eswt_control_pane_g1_copy3

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy3_ParamLimits

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy3

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy3_ParamLimits

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy3

0x7501,	// (0x00007501) eswt_control_pane_g4_copy3_ParamLimits

0x7501,	// (0x00007501) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7582,	// (0x00007582) separator_vertical_pane_g1

0x758b,	// (0x0000758b) separator_vertical_pane_g2

0x7594,	// (0x00007594) separator_vertical_pane_g3

0x0002,

0xb227,	// (0x0000b227) separator_vertical_pane_g

0x74da,	// (0x000074da) eswt_control_pane_g1_copy4_ParamLimits

0x74da,	// (0x000074da) eswt_control_pane_g1_copy4

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy4_ParamLimits

0x74e7,	// (0x000074e7) eswt_control_pane_g2_copy4

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy4_ParamLimits

0x74f4,	// (0x000074f4) eswt_control_pane_g3_copy4

0x7501,	// (0x00007501) eswt_control_pane_g4_copy4_ParamLimits

0x7501,	// (0x00007501) eswt_control_pane_g4_copy4

0xda54,	// (0x0000da54) eswt_ctrl_combo_button_pane

0xda5c,	// (0x0000da5c) eswt_ctrl_input_pane

0xda64,	// (0x0000da64) popup_choice_list_window_cp70

0xda6c,	// (0x0000da6c) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x665e,	// (0x0000665e) bg_button_pane_cp70_ParamLimits

0x665e,	// (0x0000665e) bg_button_pane_cp70

0xda7a,	// (0x0000da7a) eswt_ctrl_combo_button_pane_g1

0x75cb,	// (0x000075cb) wait_bar_pane_cp70

0x389b,	// (0x0000389b) bg_popup_window_pane_cp70_ParamLimits

0x389b,	// (0x0000389b) bg_popup_window_pane_cp70

0x75d3,	// (0x000075d3) popup_eswt_tasktip_window_t1

0x75e9,	// (0x000075e9) wait_bar_pane_cp71_ParamLimits

0x75e9,	// (0x000075e9) wait_bar_pane_cp71

0x75f5,	// (0x000075f5) grid_eswt_app_pane

0x1b6d,	// (0x00001b6d) scroll_pane_cp70

0xda82,	// (0x0000da82) cell_eswt_app_pane_ParamLimits

0xda82,	// (0x0000da82) cell_eswt_app_pane

0xdaac,	// (0x0000daac) cell_eswt_app_pane_g1_ParamLimits

0xdaac,	// (0x0000daac) cell_eswt_app_pane_g1

0xdadb,	// (0x0000dadb) cell_eswt_app_pane_g2_ParamLimits

0xdadb,	// (0x0000dadb) cell_eswt_app_pane_g2

0x0001,

0xf601,	// (0x0000f601) cell_eswt_app_pane_g_ParamLimits

0xf601,	// (0x0000f601) cell_eswt_app_pane_g

0xdb04,	// (0x0000db04) cell_eswt_app_pane_t1_ParamLimits

0xdb04,	// (0x0000db04) cell_eswt_app_pane_t1

0x76b8,	// (0x000076b8) grid_highlight_pane_cp70_ParamLimits

0x76b8,	// (0x000076b8) grid_highlight_pane_cp70

0x24ea,	// (0x000024ea) set_content_pane_g1

0xc393,	// (0x0000c393) status_small_volume_pane

0x76c4,	// (0x000076c4) status_small_volume_pane_g1

0x76cc,	// (0x000076cc) volume_small2_pane

0x76d5,	// (0x000076d5) volume_small2_pane_g1

0x76de,	// (0x000076de) volume_small2_pane_g2

0x76e7,	// (0x000076e7) volume_small2_pane_g3

0x76f0,	// (0x000076f0) volume_small2_pane_g4

0x76f9,	// (0x000076f9) volume_small2_pane_g5

0x7702,	// (0x00007702) volume_small2_pane_g6

0x770b,	// (0x0000770b) volume_small2_pane_g7

0x7714,	// (0x00007714) volume_small2_pane_g8

0x771d,	// (0x0000771d) volume_small2_pane_g9

0x7726,	// (0x00007726) volume_small2_pane_g10

0x0009,

0xb233,	// (0x0000b233) volume_small2_pane_g

0x6c73,	// (0x00006c73) fep_vkb_top_text_pane_g1_ParamLimits

0xd9ab,	// (0x0000d9ab) fep_vkb_top_text_pane_t1_ParamLimits

0x6f9c,	// (0x00006f9c) popup_preview_fixed_window_g3_ParamLimits

0x6f9c,	// (0x00006f9c) popup_preview_fixed_window_g3

0xcbae,	// (0x0000cbae) popup_toolbar_trans_pane

0xd2f8,	// (0x0000d2f8) aid_height_set_list_ParamLimits

0x4f15,	// (0x00004f15) aid_size_parent_ParamLimits

0x2b8c,	// (0x00002b8c) list_highlight_pane_cp2_ParamLimits

0x24ea,	// (0x000024ea) set_content_pane_g1_ParamLimits

0xd4b1,	// (0x0000d4b1) list_single_image_pane_ParamLimits

0xd4b1,	// (0x0000d4b1) list_single_image_pane

0xdb36,	// (0x0000db36) aid_size_cell_image_ParamLimits

0xdb36,	// (0x0000db36) aid_size_cell_image

0xdb43,	// (0x0000db43) grid_single_image_pane_ParamLimits

0xdb43,	// (0x0000db43) grid_single_image_pane

0x37b2,	// (0x000037b2) list_single_image_pane_g1_ParamLimits

0x37b2,	// (0x000037b2) list_single_image_pane_g1

0x7748,	// (0x00007748) list_single_image_pane_g2_ParamLimits

0x7748,	// (0x00007748) list_single_image_pane_g2

0x0001,

0xb248,	// (0x0000b248) list_single_image_pane_g_ParamLimits

0xb248,	// (0x0000b248) list_single_image_pane_g

0x775c,	// (0x0000775c) list_single_image_pane_t1_ParamLimits

0x775c,	// (0x0000775c) list_single_image_pane_t1

0xdb51,	// (0x0000db51) cell_image_list_pane_ParamLimits

0xdb51,	// (0x0000db51) cell_image_list_pane

0xdb67,	// (0x0000db67) cell_image_list_pane_g1

0xdb70,	// (0x0000db70) cell_image_list_pane_g2

0x0001,

0xf606,	// (0x0000f606) cell_image_list_pane_g

0x7798,	// (0x00007798) aid_size_cell_tb_trans_pane

0x139c,	// (0x0000139c) bg_tb_trans_pane

0x77aa,	// (0x000077aa) grid_tb_trans_pane

0x36e1,	// (0x000036e1) bg_tb_trans_pane_g1

0x36e9,	// (0x000036e9) bg_tb_trans_pane_g2

0x36f1,	// (0x000036f1) bg_tb_trans_pane_g3

0x36f9,	// (0x000036f9) bg_tb_trans_pane_g4

0x3701,	// (0x00003701) bg_tb_trans_pane_g5

0x3719,	// (0x00003719) bg_tb_trans_pane_g6

0x3721,	// (0x00003721) bg_tb_trans_pane_g7

0x3709,	// (0x00003709) bg_tb_trans_pane_g8

0x3711,	// (0x00003711) bg_tb_trans_pane_g9

0x0008,

0xb252,	// (0x0000b252) bg_tb_trans_pane_g

0x77be,	// (0x000077be) cell_toolbar_trans_pane_ParamLimits

0x77be,	// (0x000077be) cell_toolbar_trans_pane

0x6699,	// (0x00006699) cell_toolbar_trans_pane_g1

0xd713,	// (0x0000d713) list_form2_midp_pane_t1

0xd721,	// (0x0000d721) list_form2_midp_pane_t2

0x0001,

0xf5d1,	// (0x0000f5d1) list_form2_midp_pane_t

0x6230,	// (0x00006230) scroll_pane_cp51_ParamLimits

0x643b,	// (0x0000643b) form2_midp_wait_pane_g1

0x6444,	// (0x00006444) form2_midp_wait_pane_g2

0x644d,	// (0x0000644d) form2_midp_wait_pane_g3

0x0002,

0xb110,	// (0x0000b110) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x64a4,	// (0x000064a4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x64b3,	// (0x000064b3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x511b,	// (0x0000511b) list_single_2graphic_im_pane_ParamLimits

0x511b,	// (0x0000511b) list_single_2graphic_im_pane

0xdb79,	// (0x0000db79) list_single_2graphic_im_pane_g1_ParamLimits

0xdb79,	// (0x0000db79) list_single_2graphic_im_pane_g1

0xdb8a,	// (0x0000db8a) list_single_2graphic_im_pane_g2_ParamLimits

0xdb8a,	// (0x0000db8a) list_single_2graphic_im_pane_g2

0xdb96,	// (0x0000db96) list_single_2graphic_im_pane_g3_ParamLimits

0xdb96,	// (0x0000db96) list_single_2graphic_im_pane_g3

0x0003,

0xf60b,	// (0x0000f60b) list_single_2graphic_im_pane_g_ParamLimits

0xf60b,	// (0x0000f60b) list_single_2graphic_im_pane_g

0xdbaa,	// (0x0000dbaa) list_single_2graphic_im_pane_t1_ParamLimits

0xdbaa,	// (0x0000dbaa) list_single_2graphic_im_pane_t1

0x6fa8,	// (0x00006fa8) list_single_graphic_2heading_pane_fp_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_graphic_2heading_pane_fp

0x6fec,	// (0x00006fec) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6fec,	// (0x00006fec) list_single_graphic_2heading_pane_fp_g1

0x6fbd,	// (0x00006fbd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_graphic_2heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4

0x6fc9,	// (0x00006fc9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6fc9,	// (0x00006fc9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb193,	// (0x0000b193) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb193,	// (0x0000b193) list_single_graphic_2heading_pane_fp_g

0x7852,	// (0x00007852) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7852,	// (0x00007852) list_single_graphic_2heading_pane_fp_t1

0x7024,	// (0x00007024) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7024,	// (0x00007024) list_single_graphic_2heading_pane_fp_t2

0x7868,	// (0x00007868) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7868,	// (0x00007868) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb26e,	// (0x0000b26e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb26e,	// (0x0000b26e) list_single_graphic_2heading_pane_fp_t

0x68c3,	// (0x000068c3) fep_hwr_write_pane_g5_ParamLimits

0x68c3,	// (0x000068c3) fep_hwr_write_pane_g5

0x68cf,	// (0x000068cf) fep_hwr_write_pane_g6_ParamLimits

0x68cf,	// (0x000068cf) fep_hwr_write_pane_g6

0x74a9,	// (0x000074a9) eswt_shell_pane_ParamLimits

0x389b,	// (0x0000389b) bg_popup_window_pane_cp18_ParamLimits

0x4dbd,	// (0x00004dbd) heading_pane_cp70

0x75d3,	// (0x000075d3) popup_eswt_tasktip_window_t1_ParamLimits

0xcc76,	// (0x0000cc76) aid_touch_tab_arrow_left

0xcc8c,	// (0x0000cc8c) aid_touch_tab_arrow_right

0xb76d,	// (0x0000b76d) title_pane_g3_ParamLimits

0xb76d,	// (0x0000b76d) title_pane_g3

0x127b,	// (0x0000127b) set_value_pane_g1

0xcbae,	// (0x0000cbae) popup_toolbar_trans_pane_ParamLimits

0x7798,	// (0x00007798) aid_size_cell_tb_trans_pane_ParamLimits

0x139c,	// (0x0000139c) bg_tb_trans_pane_ParamLimits

0x77aa,	// (0x000077aa) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane

0x3f66,	// (0x00003f66) cont_note_wait_pane_ParamLimits

0x3f66,	// (0x00003f66) cont_note_wait_pane

0x3f66,	// (0x00003f66) cont_note_image_pane_ParamLimits

0x3f66,	// (0x00003f66) cont_note_image_pane

0x787e,	// (0x0000787e) popup_note2_window_g1_ParamLimits

0x787e,	// (0x0000787e) popup_note2_window_g1

0x78af,	// (0x000078af) popup_note2_window_t1_ParamLimits

0x78af,	// (0x000078af) popup_note2_window_t1

0x78f4,	// (0x000078f4) popup_note2_window_t2_ParamLimits

0x78f4,	// (0x000078f4) popup_note2_window_t2

0x7939,	// (0x00007939) popup_note2_window_t3_ParamLimits

0x7939,	// (0x00007939) popup_note2_window_t3

0x797e,	// (0x0000797e) popup_note2_window_t4_ParamLimits

0x797e,	// (0x0000797e) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb27a,	// (0x0000b27a) popup_note2_window_t_ParamLimits

0xb27a,	// (0x0000b27a) popup_note2_window_t

0x79ad,	// (0x000079ad) popup_note2_image_window_g1_ParamLimits

0x79ad,	// (0x000079ad) popup_note2_image_window_g1

0x79b9,	// (0x000079b9) popup_note2_image_window_g2_ParamLimits

0x79b9,	// (0x000079b9) popup_note2_image_window_g2

0x0001,

0xb285,	// (0x0000b285) popup_note2_image_window_g_ParamLimits

0xb285,	// (0x0000b285) popup_note2_image_window_g

0x79cb,	// (0x000079cb) popup_note2_image_window_t1_ParamLimits

0x79cb,	// (0x000079cb) popup_note2_image_window_t1

0x79e3,	// (0x000079e3) popup_note2_image_window_t2_ParamLimits

0x79e3,	// (0x000079e3) popup_note2_image_window_t2

0x79fb,	// (0x000079fb) popup_note2_image_window_t3_ParamLimits

0x79fb,	// (0x000079fb) popup_note2_image_window_t3

0x0002,

0xb28a,	// (0x0000b28a) popup_note2_image_window_t_ParamLimits

0xb28a,	// (0x0000b28a) popup_note2_image_window_t

0x3f74,	// (0x00003f74) popup_note2_wait_window_g1_ParamLimits

0x3f74,	// (0x00003f74) popup_note2_wait_window_g1

0x7a17,	// (0x00007a17) popup_note2_wait_window_g2_ParamLimits

0x7a17,	// (0x00007a17) popup_note2_wait_window_g2

0x3f8c,	// (0x00003f8c) popup_note2_wait_window_g3_ParamLimits

0x3f8c,	// (0x00003f8c) popup_note2_wait_window_g3

0x0002,

0xb291,	// (0x0000b291) popup_note2_wait_window_g_ParamLimits

0xb291,	// (0x0000b291) popup_note2_wait_window_g

0x7a23,	// (0x00007a23) popup_note2_wait_window_t1_ParamLimits

0x7a23,	// (0x00007a23) popup_note2_wait_window_t1

0x7a41,	// (0x00007a41) popup_note2_wait_window_t2_ParamLimits

0x7a41,	// (0x00007a41) popup_note2_wait_window_t2

0x7a5f,	// (0x00007a5f) popup_note2_wait_window_t3_ParamLimits

0x7a5f,	// (0x00007a5f) popup_note2_wait_window_t3

0x7a71,	// (0x00007a71) popup_note2_wait_window_t4_ParamLimits

0x7a71,	// (0x00007a71) popup_note2_wait_window_t4

0x0003,

0xb298,	// (0x0000b298) popup_note2_wait_window_t_ParamLimits

0xb298,	// (0x0000b298) popup_note2_wait_window_t

0x7a83,	// (0x00007a83) wait_bar2_pane_ParamLimits

0x7a83,	// (0x00007a83) wait_bar2_pane

0x7a9b,	// (0x00007a9b) popup_snote2_single_text_window_g1_ParamLimits

0x7a9b,	// (0x00007a9b) popup_snote2_single_text_window_g1

0x7ac3,	// (0x00007ac3) popup_snote2_single_text_window_t1_ParamLimits

0x7ac3,	// (0x00007ac3) popup_snote2_single_text_window_t1

0x7b0f,	// (0x00007b0f) popup_snote2_single_text_window_t2_ParamLimits

0x7b0f,	// (0x00007b0f) popup_snote2_single_text_window_t2

0x7b5b,	// (0x00007b5b) popup_snote2_single_text_window_t3_ParamLimits

0x7b5b,	// (0x00007b5b) popup_snote2_single_text_window_t3

0x7b9c,	// (0x00007b9c) popup_snote2_single_text_window_t4_ParamLimits

0x7b9c,	// (0x00007b9c) popup_snote2_single_text_window_t4

0x7bd2,	// (0x00007bd2) popup_snote2_single_text_window_t5_ParamLimits

0x7bd2,	// (0x00007bd2) popup_snote2_single_text_window_t5

0x0004,

0xb2a1,	// (0x0000b2a1) popup_snote2_single_text_window_t_ParamLimits

0xb2a1,	// (0x0000b2a1) popup_snote2_single_text_window_t

0x7bfd,	// (0x00007bfd) popup_snote2_single_graphic_window_g1_ParamLimits

0x7bfd,	// (0x00007bfd) popup_snote2_single_graphic_window_g1

0x7c25,	// (0x00007c25) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c25,	// (0x00007c25) popup_snote2_single_graphic_window_g2

0x0001,

0xb2ac,	// (0x0000b2ac) popup_snote2_single_graphic_window_g_ParamLimits

0xb2ac,	// (0x0000b2ac) popup_snote2_single_graphic_window_g

0x7c4d,	// (0x00007c4d) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c4d,	// (0x00007c4d) popup_snote2_single_graphic_window_t1

0x7c99,	// (0x00007c99) popup_snote2_single_graphic_window_t2_ParamLimits

0x7c99,	// (0x00007c99) popup_snote2_single_graphic_window_t2

0x7b5b,	// (0x00007b5b) popup_snote2_single_graphic_window_t3_ParamLimits

0x7b5b,	// (0x00007b5b) popup_snote2_single_graphic_window_t3

0x7b9c,	// (0x00007b9c) popup_snote2_single_graphic_window_t4_ParamLimits

0x7b9c,	// (0x00007b9c) popup_snote2_single_graphic_window_t4

0x7bd2,	// (0x00007bd2) popup_snote2_single_graphic_window_t5_ParamLimits

0x7bd2,	// (0x00007bd2) popup_snote2_single_graphic_window_t5

0x0004,

0xb2b1,	// (0x0000b2b1) popup_snote2_single_graphic_window_t_ParamLimits

0xb2b1,	// (0x0000b2b1) popup_snote2_single_graphic_window_t

0x60a0,	// (0x000060a0) clock_nsta_pane_cp2_t1

0x60a0,	// (0x000060a0) clock_nsta_pane_cp2_t2

0x0001,

0xb0d1,	// (0x0000b0d1) clock_nsta_pane_cp2_t

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3_ParamLimits

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3

0x0002,

0xac94,	// (0x0000ac94) form_field_data_wide_pane_g_ParamLimits

0xac94,	// (0x0000ac94) form_field_data_wide_pane_g

0xd656,	// (0x0000d656) grid_touch_3_pane_ParamLimits

0xd656,	// (0x0000d656) grid_touch_3_pane

0xdbdb,	// (0x0000dbdb) cell_touch_3_pane_ParamLimits

0xdbdb,	// (0x0000dbdb) cell_touch_3_pane

0x6699,	// (0x00006699) cell_touch_3_pane_g1

0x6699,	// (0x00006699) cell_touch_3_pane_g2

0x0001,

0xb156,	// (0x0000b156) cell_touch_3_pane_g

0x08f1,	// (0x000008f1) cont_query_data_pane

0x08f9,	// (0x000008f9) cont_query_data_pane_cp1

0x7d13,	// (0x00007d13) button_value_adjust_pane_cp7

0x7d1b,	// (0x00007d1b) query_popup_pane_cp3

0x1ec5,	// (0x00001ec5) bg_popup_sub_pane_cp22_ParamLimits

0x1edb,	// (0x00001edb) navi_navi_volume_pane_cp2

0x1ef6,	// (0x00001ef6) popup_side_volume_key_window_g2

0x1f05,	// (0x00001f05) popup_side_volume_key_window_g3

0x0002,

0xad2a,	// (0x0000ad2a) popup_side_volume_key_window_g

0x1f22,	// (0x00001f22) popup_side_volume_key_window_t2

0x0001,

0xad31,	// (0x0000ad31) popup_side_volume_key_window_t

0x23a9,	// (0x000023a9) popup_side_volume_key_window_ParamLimits

0xbbcd,	// (0x0000bbcd) list_double_graphic_pane_g4_ParamLimits

0xbbcd,	// (0x0000bbcd) list_double_graphic_pane_g4

0xd48d,	// (0x0000d48d) list_single_2heading_msg_pane_ParamLimits

0xd48d,	// (0x0000d48d) list_single_2heading_msg_pane

0xdc23,	// (0x0000dc23) list_single_2heading_msg_pane_g1_ParamLimits

0xdc23,	// (0x0000dc23) list_single_2heading_msg_pane_g1

0xdc2f,	// (0x0000dc2f) list_single_2heading_msg_pane_g2_ParamLimits

0xdc2f,	// (0x0000dc2f) list_single_2heading_msg_pane_g2

0xdc42,	// (0x0000dc42) list_single_2heading_msg_pane_g3_ParamLimits

0xdc42,	// (0x0000dc42) list_single_2heading_msg_pane_g3

0xdc4e,	// (0x0000dc4e) list_single_2heading_msg_pane_g4_ParamLimits

0xdc4e,	// (0x0000dc4e) list_single_2heading_msg_pane_g4

0x0003,

0xf614,	// (0x0000f614) list_single_2heading_msg_pane_g_ParamLimits

0xf614,	// (0x0000f614) list_single_2heading_msg_pane_g

0xdc66,	// (0x0000dc66) list_single_2heading_msg_pane_t1_ParamLimits

0xdc66,	// (0x0000dc66) list_single_2heading_msg_pane_t1

0xdc8e,	// (0x0000dc8e) list_single_2heading_msg_pane_t2_ParamLimits

0xdc8e,	// (0x0000dc8e) list_single_2heading_msg_pane_t2

0xdcf9,	// (0x0000dcf9) list_single_2heading_msg_pane_t3_ParamLimits

0xdcf9,	// (0x0000dcf9) list_single_2heading_msg_pane_t3

0x7dfe,	// (0x00007dfe) list_single_2heading_msg_pane_t4_ParamLimits

0x7dfe,	// (0x00007dfe) list_single_2heading_msg_pane_t4

0x0003,

0xf61d,	// (0x0000f61d) list_single_2heading_msg_pane_t_ParamLimits

0xf61d,	// (0x0000f61d) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18dd,	// (0x000018dd) title_pane_stacon_g3_ParamLimits

0x18dd,	// (0x000018dd) title_pane_stacon_g3

0x7815,	// (0x00007815) list_single_2graphic_im_pane_g4_ParamLimits

0x7815,	// (0x00007815) list_single_2graphic_im_pane_g4

0x4b29,	// (0x00004b29) popup_side_volume_key_window_cp

0x55b7,	// (0x000055b7) main_idle_act2_pane_t1

0x3729,	// (0x00003729) toolbar_button_pane_g10

0xba78,	// (0x0000ba78) popup_toolbar_window_cp1

0x6091,	// (0x00006091) clock_nsta_pane_cp_t1

0x6091,	// (0x00006091) clock_nsta_pane_cp_t2

0x0001,

0xb0cc,	// (0x0000b0cc) clock_nsta_pane_cp_t

0x1edb,	// (0x00001edb) navi_navi_volume_pane_cp2_ParamLimits

0x1eea,	// (0x00001eea) popup_side_volume_key_window_g1_ParamLimits

0x1ef6,	// (0x00001ef6) popup_side_volume_key_window_g2_ParamLimits

0x1f05,	// (0x00001f05) popup_side_volume_key_window_g3_ParamLimits

0xad2a,	// (0x0000ad2a) popup_side_volume_key_window_g_ParamLimits

0x6703,	// (0x00006703) fep_hwr_aid_pane

0x67aa,	// (0x000067aa) bg_fep_hwr_top_pane_g4_ParamLimits

0x67ca,	// (0x000067ca) fep_hwr_top_pane_g1_ParamLimits

0x67dc,	// (0x000067dc) fep_hwr_top_pane_g2_ParamLimits

0x67ee,	// (0x000067ee) fep_hwr_top_pane_g3_ParamLimits

0xb121,	// (0x0000b121) fep_hwr_top_pane_g_ParamLimits

0x6803,	// (0x00006803) fep_hwr_top_text_pane_ParamLimits

0x48ec,	// (0x000048ec) aid_touch_tab_arrow_arrow_2

0x48f5,	// (0x000048f5) aid_touch_tab_arrow_left_2

0x6717,	// (0x00006717) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x674e,	// (0x0000674e) fep_hwr_prediction_pane

0x6a7b,	// (0x00006a7b) fep_vkb_prediction_pane

0xd98b,	// (0x0000d98b) fep_vkb_side_pane_g3_ParamLimits

0xd98b,	// (0x0000d98b) fep_vkb_side_pane_g3

0x6b2b,	// (0x00006b2b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x71e1,	// (0x000071e1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x71ee,	// (0x000071ee) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb1cb,	// (0x0000b1cb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e23,	// (0x00007e23) fep_hwr_prediction_pane_g1

0x7e2d,	// (0x00007e2d) fep_hwr_prediction_pane_g2

0x7e35,	// (0x00007e35) fep_hwr_prediction_pane_g3

0x7e3d,	// (0x00007e3d) fep_hwr_prediction_pane_g4

0x0003,

0xb2ce,	// (0x0000b2ce) fep_hwr_prediction_pane_g

0x7e23,	// (0x00007e23) fep_vkb_prediction_pane_g1

0x7e45,	// (0x00007e45) fep_vkb_prediction_pane_g2

0x7e4d,	// (0x00007e4d) fep_vkb_prediction_pane_g3

0x7e55,	// (0x00007e55) fep_vkb_prediction_pane_g4

0x0003,

0xb2d7,	// (0x0000b2d7) fep_vkb_prediction_pane_g

0x4e7e,	// (0x00004e7e) slider_set_pane_g3

0x4e92,	// (0x00004e92) slider_set_pane_g4

0x4eaa,	// (0x00004eaa) slider_set_pane_g5

0x4e7e,	// (0x00004e7e) slider_set_pane_g6

0x4ec0,	// (0x00004ec0) slider_set_pane_g7

0x507a,	// (0x0000507a) slider_form_pane_g3

0x5083,	// (0x00005083) slider_form_pane_g4

0x508b,	// (0x0000508b) slider_form_pane_g5

0x507a,	// (0x0000507a) slider_form_pane_g6

0xd443,	// (0x0000d443) slider_form_pane_g7

0x58c5,	// (0x000058c5) slider_set_pane_vc_g3

0x58ce,	// (0x000058ce) slider_set_pane_vc_g4

0x58d7,	// (0x000058d7) slider_set_pane_vc_g5

0x58c5,	// (0x000058c5) slider_set_pane_vc_g6

0x58e0,	// (0x000058e0) slider_set_pane_vc_g7

0x5d65,	// (0x00005d65) slider_form_pane_vc_g1

0x5d6e,	// (0x00005d6e) slider_form_pane_vc_g2

0x5d77,	// (0x00005d77) slider_form_pane_vc_g3

0x5d65,	// (0x00005d65) slider_form_pane_vc_g4

0x5d80,	// (0x00005d80) slider_form_pane_vc_g5

0x0004,

0xb09e,	// (0x0000b09e) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7e5d,	// (0x00007e5d) ai3_links_pane

0xdd67,	// (0x0000dd67) popup_ai3_data_window_ParamLimits

0xdd67,	// (0x0000dd67) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdd81,	// (0x0000dd81) cell_ai3_links_pane_ParamLimits

0xdd81,	// (0x0000dd81) cell_ai3_links_pane

0x7e98,	// (0x00007e98) bg_popup_sub_pane_cp11

0x7ea5,	// (0x00007ea5) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7eca,	// (0x00007eca) heading_ai3_data_pane

0x7ed2,	// (0x00007ed2) list_ai3_gene_pane

0x7ede,	// (0x00007ede) popup_ai3_data_window_g1

0x7ee6,	// (0x00007ee6) heading_ai3_data_pane_g1

0x7eee,	// (0x00007eee) heading_ai3_data_pane_t1

0x7efc,	// (0x00007efc) list_double_ai3_gene_pane_ParamLimits

0x7efc,	// (0x00007efc) list_double_ai3_gene_pane

0x7f09,	// (0x00007f09) list_single_ai3_gene_pane_ParamLimits

0x7f09,	// (0x00007f09) list_single_ai3_gene_pane

0x665e,	// (0x0000665e) list_highlight_pane_cp7_ParamLimits

0x665e,	// (0x0000665e) list_highlight_pane_cp7

0x7f16,	// (0x00007f16) list_single_a13_gene_pane_t1_ParamLimits

0x7f16,	// (0x00007f16) list_single_a13_gene_pane_t1

0x7f2d,	// (0x00007f2d) list_single_ai3_gene_pane_g1

0x7f36,	// (0x00007f36) list_single_ai3_gene_pane_g2

0x0001,

0xb2e0,	// (0x0000b2e0) list_single_ai3_gene_pane_g

0x7f3e,	// (0x00007f3e) list_double_ai3_gene_pane_g1_ParamLimits

0x7f3e,	// (0x00007f3e) list_double_ai3_gene_pane_g1

0x7f4a,	// (0x00007f4a) list_double_ai3_gene_pane_t1_ParamLimits

0x7f4a,	// (0x00007f4a) list_double_ai3_gene_pane_t1

0x7f66,	// (0x00007f66) list_double_ai3_gene_pane_t2_ParamLimits

0x7f66,	// (0x00007f66) list_double_ai3_gene_pane_t2

0x7f7c,	// (0x00007f7c) list_double_ai3_gene_pane_t3_ParamLimits

0x7f7c,	// (0x00007f7c) list_double_ai3_gene_pane_t3

0x0002,

0xb2e5,	// (0x0000b2e5) list_double_ai3_gene_pane_t_ParamLimits

0xb2e5,	// (0x0000b2e5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d2c,	// (0x00007d2c) aid_size_min_col_2

0xdc0d,	// (0x0000dc0d) aid_size_min_msg_ParamLimits

0xdc0d,	// (0x0000dc0d) aid_size_min_msg

0xd99f,	// (0x0000d99f) fep_vkb_top_text_pane_g2_ParamLimits

0xd99f,	// (0x0000d99f) fep_vkb_top_text_pane_g2

0x0001,

0xf5f1,	// (0x0000f5f1) fep_vkb_top_text_pane_g_ParamLimits

0xf5f1,	// (0x0000f5f1) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7f99,	// (0x00007f99) grid_hc_apps_pane_ParamLimits

0x7f99,	// (0x00007f99) grid_hc_apps_pane

0x7fa8,	// (0x00007fa8) list_hc_apps_pane

0x7fb0,	// (0x00007fb0) scroll_pane_cp37_ParamLimits

0x7fb0,	// (0x00007fb0) scroll_pane_cp37

0xdd9b,	// (0x0000dd9b) cell_hc_apps_pane_ParamLimits

0xdd9b,	// (0x0000dd9b) cell_hc_apps_pane

0xde59,	// (0x0000de59) cell_hc_apps_pane_g1_ParamLimits

0xde59,	// (0x0000de59) cell_hc_apps_pane_g1

0x809b,	// (0x0000809b) cell_hc_apps_pane_g2_ParamLimits

0x809b,	// (0x0000809b) cell_hc_apps_pane_g2

0x80b7,	// (0x000080b7) cell_hc_apps_pane_g3_ParamLimits

0x80b7,	// (0x000080b7) cell_hc_apps_pane_g3

0x0002,

0xf626,	// (0x0000f626) cell_hc_apps_pane_g_ParamLimits

0xf626,	// (0x0000f626) cell_hc_apps_pane_g

0xde86,	// (0x0000de86) cell_hc_apps_pane_t1_ParamLimits

0xde86,	// (0x0000de86) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xdec4,	// (0x0000dec4) list_single_hc_apps_pane_ParamLimits

0xdec4,	// (0x0000dec4) list_single_hc_apps_pane

0xdef1,	// (0x0000def1) list_single_hc_apps_pane_g1

0xdf0a,	// (0x0000df0a) list_single_hc_apps_pane_g2

0x0001,

0xf62d,	// (0x0000f62d) list_single_hc_apps_pane_g

0xdf23,	// (0x0000df23) list_single_hc_apps_pane_g2_copy1

0x81c3,	// (0x000081c3) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xab7c,	// (0x0000ab7c) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x29e9,	// (0x000029e9) control_pane_g5_ParamLimits

0x29e9,	// (0x000029e9) control_pane_g5

0x4e65,	// (0x00004e65) slider_set_pane_g1_ParamLimits

0x4e72,	// (0x00004e72) slider_set_pane_g2_ParamLimits

0x4e7e,	// (0x00004e7e) slider_set_pane_g3_ParamLimits

0x4e92,	// (0x00004e92) slider_set_pane_g4_ParamLimits

0x4eaa,	// (0x00004eaa) slider_set_pane_g5_ParamLimits

0x4e7e,	// (0x00004e7e) slider_set_pane_g6_ParamLimits

0x4ec0,	// (0x00004ec0) slider_set_pane_g7_ParamLimits

0xaf76,	// (0x0000af76) slider_set_pane_g_ParamLimits

0x2495,	// (0x00002495) navi_icon_text_pane_ParamLimits

0xcc3f,	// (0x0000cc3f) aid_fill_nsta_2_ParamLimits

0xcc76,	// (0x0000cc76) aid_touch_tab_arrow_left_ParamLimits

0xcc8c,	// (0x0000cc8c) aid_touch_tab_arrow_right_ParamLimits

0xcd27,	// (0x0000cd27) clock_nsta_pane_ParamLimits

0x48ce,	// (0x000048ce) navi_icon_pane_g1_ParamLimits

0x48da,	// (0x000048da) navi_text_pane_t1_ParamLimits

0x619d,	// (0x0000619d) navi_icon_text_pane_g1_ParamLimits

0x61a9,	// (0x000061a9) navi_icon_text_pane_t1_ParamLimits

0xdef1,	// (0x0000def1) list_single_hc_apps_pane_g1_ParamLimits

0xdf0a,	// (0x0000df0a) list_single_hc_apps_pane_g2_ParamLimits

0xf62d,	// (0x0000f62d) list_single_hc_apps_pane_g_ParamLimits

0xdf23,	// (0x0000df23) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x81c3,	// (0x000081c3) list_single_hc_apps_pane_t1_ParamLimits

0xb672,	// (0x0000b672) popup_toolbar2_fixed_window_ParamLimits

0xb672,	// (0x0000b672) popup_toolbar2_fixed_window

0xcba4,	// (0x0000cba4) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x81f1,	// (0x000081f1) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x81f1,	// (0x000081f1) grid_toolbar2_fixed_pane

0xdf3f,	// (0x0000df3f) cell_toolbar2_fixed_pane_ParamLimits

0xdf3f,	// (0x0000df3f) cell_toolbar2_fixed_pane

0xdf59,	// (0x0000df59) cell_toolbar2_fixed_pane_g1

0x8212,	// (0x00008212) toolbar2_fixed_button_pane

0x36e1,	// (0x000036e1) toolbar2_fixed_button_pane_g1

0x36e9,	// (0x000036e9) toolbar2_fixed_button_pane_g2

0x36f1,	// (0x000036f1) toolbar2_fixed_button_pane_g3

0x36f9,	// (0x000036f9) toolbar2_fixed_button_pane_g4

0x3701,	// (0x00003701) toolbar2_fixed_button_pane_g5

0x3709,	// (0x00003709) toolbar2_fixed_button_pane_g6

0x3711,	// (0x00003711) toolbar2_fixed_button_pane_g7

0x3719,	// (0x00003719) toolbar2_fixed_button_pane_g8

0x3721,	// (0x00003721) toolbar2_fixed_button_pane_g9

0x0008,

0xae78,	// (0x0000ae78) toolbar2_fixed_button_pane_g

0x821a,	// (0x0000821a) cell_toolbar2_float_pane_ParamLimits

0x821a,	// (0x0000821a) cell_toolbar2_float_pane

0x822b,	// (0x0000822b) cell_toolbar2_float_pane_g1

0x8212,	// (0x00008212) toolbar2_fixed_button_pane_cp

0xd879,	// (0x0000d879) fep_vkb_accented_list_pane_ParamLimits

0xd879,	// (0x0000d879) fep_vkb_accented_list_pane

0x6e72,	// (0x00006e72) bg_popup_fep_shadow_pane_g9

0x2615,	// (0x00002615) bg_popup_fep_shadow_pane_cp3

0x166d,	// (0x0000166d) list_accented_list_pane

0x8234,	// (0x00008234) list_single_accented_list_pane_ParamLimits

0x8234,	// (0x00008234) list_single_accented_list_pane

0x2615,	// (0x00002615) list_highlight_pane_cp10

0x8245,	// (0x00008245) list_single_accented_list_pane_t1

0xcace,	// (0x0000cace) popup_slider_window_ParamLimits

0xcace,	// (0x0000cace) popup_slider_window

0x7d23,	// (0x00007d23) aid_indentation_list_msg

0xe052,	// (0x0000e052) bg_popup_window_pane_cp19

0x8369,	// (0x00008369) popup_slider_window_g1

0x8385,	// (0x00008385) popup_slider_window_g2

0x83a1,	// (0x000083a1) popup_slider_window_g3

0x0005,

0xf632,	// (0x0000f632) popup_slider_window_g

0x83fd,	// (0x000083fd) popup_slider_window_t1

0x8471,	// (0x00008471) small_volume_slider_vertical_pane

0x6699,	// (0x00006699) small_volume_slider_vertical_pane_g1

0x6699,	// (0x00006699) small_volume_slider_vertical_pane_g2

0x848d,	// (0x0000848d) small_volume_slider_vertical_pane_g3

0x0002,

0xb30a,	// (0x0000b30a) small_volume_slider_vertical_pane_g

0xb5e0,	// (0x0000b5e0) area_side_right_pane_ParamLimits

0xb5e0,	// (0x0000b5e0) area_side_right_pane

0xe10a,	// (0x0000e10a) aid_size_side_button_ParamLimits

0xe10a,	// (0x0000e10a) aid_size_side_button

0xe123,	// (0x0000e123) grid_sctrl_middle_pane_ParamLimits

0xe123,	// (0x0000e123) grid_sctrl_middle_pane

0x84c9,	// (0x000084c9) sctrl_sk_bottom_pane

0x84da,	// (0x000084da) sctrl_sk_top_pane

0x84ec,	// (0x000084ec) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x84f9,	// (0x000084f9) sctrl_sk_top_pane_g1

0x8506,	// (0x00008506) sctrl_sk_top_pane_t1

0x84ec,	// (0x000084ec) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x8521,	// (0x00008521) sctrl_sk_bottom_pane_g1

0x8506,	// (0x00008506) sctrl_sk_bottom_pane_t1

0xe13d,	// (0x0000e13d) cell_sctrl_middle_pane_ParamLimits

0xe13d,	// (0x0000e13d) cell_sctrl_middle_pane

0xe14e,	// (0x0000e14e) aid_touch_sctrl_middle_ParamLimits

0xe14e,	// (0x0000e14e) aid_touch_sctrl_middle

0xe15b,	// (0x0000e15b) bg_sctrl_middle_pane_ParamLimits

0xe15b,	// (0x0000e15b) bg_sctrl_middle_pane

0x85e6,	// (0x000085e6) cell_sctrl_middle_pane_g1_ParamLimits

0x85e6,	// (0x000085e6) cell_sctrl_middle_pane_g1

0xe169,	// (0x0000e169) cell_sctrl_middle_pane_g2_ParamLimits

0xe169,	// (0x0000e169) cell_sctrl_middle_pane_g2

0x0001,

0xf63f,	// (0x0000f63f) cell_sctrl_middle_pane_g_ParamLimits

0xf63f,	// (0x0000f63f) cell_sctrl_middle_pane_g

0x36e1,	// (0x000036e1) bg_sctrl_middle_pane_g1

0x36e9,	// (0x000036e9) bg_sctrl_middle_pane_g2

0x36f1,	// (0x000036f1) bg_sctrl_middle_pane_g3

0x36f9,	// (0x000036f9) bg_sctrl_middle_pane_g4

0x3701,	// (0x00003701) bg_sctrl_middle_pane_g5

0x3709,	// (0x00003709) bg_sctrl_middle_pane_g6

0x3711,	// (0x00003711) bg_sctrl_middle_pane_g7

0x3719,	// (0x00003719) bg_sctrl_middle_pane_g8

0x0007,

0xb31b,	// (0x0000b31b) bg_sctrl_middle_pane_g

0x3721,	// (0x00003721) bg_sctrl_middle_pane_g8_copy1

0x36e1,	// (0x000036e1) bg_sctrl_sk_pane_g1

0x36e9,	// (0x000036e9) bg_sctrl_sk_pane_g2

0x36f1,	// (0x000036f1) bg_sctrl_sk_pane_g3

0x0008,

0xae78,	// (0x0000ae78) bg_sctrl_sk_pane_g

0x0d50,	// (0x00000d50) aid_size_touch_scroll_bar

0x36f9,	// (0x000036f9) bg_sctrl_sk_pane_g4

0x3701,	// (0x00003701) bg_sctrl_sk_pane_g5

0x3709,	// (0x00003709) bg_sctrl_sk_pane_g6

0x3711,	// (0x00003711) bg_sctrl_sk_pane_g7

0x3719,	// (0x00003719) bg_sctrl_sk_pane_g8

0x3721,	// (0x00003721) bg_sctrl_sk_pane_g9

0x2c38,	// (0x00002c38) popup_fep_china_hwr2_fs_candidate_window

0xc5e8,	// (0x0000c5e8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc5e8,	// (0x0000c5e8) popup_fep_china_hwr2_fs_control_window

0x6b2b,	// (0x00006b2b) sctrl_sk_top_pane_g2

0x0001,

0xb311,	// (0x0000b311) sctrl_sk_top_pane_g

0xe175,	// (0x0000e175) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe175,	// (0x0000e175) aid_fep_china_hwr2_fs_cell

0xe189,	// (0x0000e189) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe189,	// (0x0000e189) bg_popup_fep_shadow_pane_cp4

0xe1a0,	// (0x0000e1a0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1a0,	// (0x0000e1a0) bg_popup_fep_shadow_pane_cp5

0xe1b2,	// (0x0000e1b2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1b2,	// (0x0000e1b2) popup_fep_china_hwr2_fs_control_bar_grid

0xe1c6,	// (0x0000e1c6) popup_fep_china_hwr2_fs_control_funtion_grid

0x85ba,	// (0x000085ba) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x85c4,	// (0x000085c4) popup_fep_china_hwr2_fs_candidate_grid

0xe1ce,	// (0x0000e1ce) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1ce,	// (0x0000e1ce) cell_fep_china_hwr2_fs_funtion_grid

0x6699,	// (0x00006699) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x85e6,	// (0x000085e6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x85e6,	// (0x000085e6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x85f4,	// (0x000085f4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x85f4,	// (0x000085f4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb32c,	// (0x0000b32c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb32c,	// (0x0000b32c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1e6,	// (0x0000e1e6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1e6,	// (0x0000e1e6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe1fb,	// (0x0000e1fb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe1fb,	// (0x0000e1fb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf644,	// (0x0000f644) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf644,	// (0x0000f644) cell_fep_china_hwr2_fs_funtion_grid_t

0x863b,	// (0x0000863b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8643,	// (0x00008643) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x864b,	// (0x0000864b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb336,	// (0x0000b336) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8653,	// (0x00008653) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8653,	// (0x00008653) cell_fep_china_hwr2_fs_candidate_grid

0x866c,	// (0x0000866c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8674,	// (0x00008674) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6699,	// (0x00006699) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6699,	// (0x00006699) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb156,	// (0x0000b156) cell_fep_china_hwr2_fs_candidate_grid_g

0x867c,	// (0x0000867c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3231,	// (0x00003231) clock_nsta_pane_cp_24_ParamLimits

0x3231,	// (0x00003231) clock_nsta_pane_cp_24

0x32af,	// (0x000032af) indicator_nsta_pane_cp_24_ParamLimits

0x32af,	// (0x000032af) indicator_nsta_pane_cp_24

0x4739,	// (0x00004739) heading_pane_g1

0x0001,

0xaedd,	// (0x0000aedd) heading_pane_g

0x5348,	// (0x00005348) grid_sct_catagory_button_pane

0x5378,	// (0x00005378) scroll_pane_cp5_ParamLimits

0x623c,	// (0x0000623c) button_value_adjust_pane_cp5_ParamLimits

0x623c,	// (0x0000623c) button_value_adjust_pane_cp5

0x6338,	// (0x00006338) form2_midp_time_pane_ParamLimits

0x868a,	// (0x0000868a) cell_sct_catagory_button_pane_ParamLimits

0x868a,	// (0x0000868a) cell_sct_catagory_button_pane

0x665e,	// (0x0000665e) bg_button_pane_cp01_ParamLimits

0x665e,	// (0x0000665e) bg_button_pane_cp01

0x6699,	// (0x00006699) cell_sct_catagory_button_pane_g1

0xcb47,	// (0x0000cb47) popup_tb_extension_window

0xe217,	// (0x0000e217) aid_size_cell_ext_ParamLimits

0xe217,	// (0x0000e217) aid_size_cell_ext

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1_ParamLimits

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1

0xe23d,	// (0x0000e23d) grid_tb_ext_pane_ParamLimits

0xe23d,	// (0x0000e23d) grid_tb_ext_pane

0xe278,	// (0x0000e278) cell_tb_ext_pane_ParamLimits

0xe278,	// (0x0000e278) cell_tb_ext_pane

0xe2a0,	// (0x0000e2a0) cell_tb_ext_pane_g1_ParamLimits

0xe2a0,	// (0x0000e2a0) cell_tb_ext_pane_g1

0x871e,	// (0x0000871e) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb687,	// (0x0000b687) popup_uni_indicator_window_ParamLimits

0xb687,	// (0x0000b687) popup_uni_indicator_window

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14

0x8739,	// (0x00008739) list_uniindi_pane

0x8745,	// (0x00008745) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x8764,	// (0x00008764) uniindi_top_pane_g1

0x877a,	// (0x0000877a) uniindi_top_pane_g2

0x0003,

0xb33d,	// (0x0000b33d) uniindi_top_pane_g

0x87a4,	// (0x000087a4) uniindi_top_pane_t1

0x87ce,	// (0x000087ce) list_single_uniindi_pane_ParamLimits

0x87ce,	// (0x000087ce) list_single_uniindi_pane

0x6699,	// (0x00006699) bg_uniindi_top_pane_g1

0x87e1,	// (0x000087e1) list_single_uniindi_pane_g1

0x87f4,	// (0x000087f4) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8819,	// (0x00008819) bg_sctrl_sk_pane_cp1

0x8822,	// (0x00008822) bg_sctrl_sk_pane_cp2

0x882b,	// (0x0000882b) control_bg_pane_g1

0x8834,	// (0x00008834) control_bg_pane_g2

0x0001,

0xb346,	// (0x0000b346) control_bg_pane_g

0x6035,	// (0x00006035) cell_indicator_nsta_pane_g1_ParamLimits

0xd683,	// (0x0000d683) cell_indicator_nsta_pane_g2_ParamLimits

0xf5bc,	// (0x0000f5bc) cell_indicator_nsta_pane_g_ParamLimits

0x63c0,	// (0x000063c0) form2_midp_time_pane_t1_ParamLimits

0x66f5,	// (0x000066f5) main_idle_act4_pane_ParamLimits

0x66f5,	// (0x000066f5) main_idle_act4_pane

0xcb47,	// (0x0000cb47) popup_tb_extension_window_ParamLimits

0xe25f,	// (0x0000e25f) tb_ext_find_pane_ParamLimits

0xe25f,	// (0x0000e25f) tb_ext_find_pane

0x883d,	// (0x0000883d) ai_gene_pane_1_cp1

0x2750,	// (0x00002750) ai_gene_pane_2_cp1

0x8845,	// (0x00008845) list_single_idle_plugin_calendar_pane

0x884e,	// (0x0000884e) list_single_idle_plugin_notification_pane

0x8857,	// (0x00008857) list_single_idle_plugin_player_pane

0xe2bd,	// (0x0000e2bd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2bd,	// (0x0000e2bd) list_single_idle_plugin_shortcut_pane

0xe2e5,	// (0x0000e2e5) main_idle_act4_pane_t1

0xe2fb,	// (0x0000e2fb) main_idle_act4_pane_t2

0x0001,

0xf649,	// (0x0000f649) main_idle_act4_pane_t

0xe311,	// (0x0000e311) middle_sk_idle_act4_pane_ParamLimits

0xe311,	// (0x0000e311) middle_sk_idle_act4_pane

0xe32d,	// (0x0000e32d) popup_clock_digital_analogue_window_cp2

0xe355,	// (0x0000e355) shortcut_wheel_idle_act4_pane_ParamLimits

0xe355,	// (0x0000e355) shortcut_wheel_idle_act4_pane

0x6699,	// (0x00006699) shortcut_wheel_idle_act4_pane_g1

0x6699,	// (0x00006699) shortcut_wheel_idle_act4_pane_g2

0x6699,	// (0x00006699) shortcut_wheel_idle_act4_pane_g3

0x6699,	// (0x00006699) shortcut_wheel_idle_act4_pane_g4

0x6699,	// (0x00006699) shortcut_wheel_idle_act4_pane_g5

0x88ea,	// (0x000088ea) shortcut_wheel_idle_act4_pane_g6

0x88f2,	// (0x000088f2) shortcut_wheel_idle_act4_pane_g7

0x88fa,	// (0x000088fa) shortcut_wheel_idle_act4_pane_g8

0x8902,	// (0x00008902) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb350,	// (0x0000b350) shortcut_wheel_idle_act4_pane_g

0x67aa,	// (0x000067aa) middle_sk_idle_act4_pane_g1_ParamLimits

0x67aa,	// (0x000067aa) middle_sk_idle_act4_pane_g1

0xe3d2,	// (0x0000e3d2) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3d2,	// (0x0000e3d2) middle_sk_idle_act4_pane_g2

0x0001,

0xf65e,	// (0x0000f65e) middle_sk_idle_act4_pane_g_ParamLimits

0xf65e,	// (0x0000f65e) middle_sk_idle_act4_pane_g

0xe3ea,	// (0x0000e3ea) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3ea,	// (0x0000e3ea) middle_sk_idle_act4_pane_t1

0xe419,	// (0x0000e419) grid_ai_shortcut_pane_ParamLimits

0xe419,	// (0x0000e419) grid_ai_shortcut_pane

0xe436,	// (0x0000e436) list_highlight_pane_cp16_ParamLimits

0xe436,	// (0x0000e436) list_highlight_pane_cp16

0xe443,	// (0x0000e443) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe443,	// (0x0000e443) list_single_idle_plugin_shortcut_pane_g1

0xe44f,	// (0x0000e44f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe44f,	// (0x0000e44f) list_single_idle_plugin_shortcut_pane_g2

0xe46b,	// (0x0000e46b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe46b,	// (0x0000e46b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf663,	// (0x0000f663) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf663,	// (0x0000f663) list_single_idle_plugin_shortcut_pane_g

0xe480,	// (0x0000e480) cell_ai_shortcut_pane_ParamLimits

0xe480,	// (0x0000e480) cell_ai_shortcut_pane

0xe496,	// (0x0000e496) cell_ai_shortcut_pane_g1_ParamLimits

0xe496,	// (0x0000e496) cell_ai_shortcut_pane_g1

0x883d,	// (0x0000883d) ai_gene_pane_1_cp2

0x8a32,	// (0x00008a32) ai_gene_pane_2_cp2

0x8a3a,	// (0x00008a3a) list_highlight_pane_cp15

0x8a43,	// (0x00008a43) list_single_idle_plugin_calendar_pane_g1

0x8a3a,	// (0x00008a3a) list_highlight_pane_cp17

0x8a4b,	// (0x00008a4b) list_single_idle_plugin_calendar_pane_g1_copy1

0x8a53,	// (0x00008a53) list_single_idle_plugin_player_pane_g1

0x5659,	// (0x00005659) list_single_idle_plugin_player_pane_g2

0x0001,

0xb37f,	// (0x0000b37f) list_single_idle_plugin_player_pane_g

0x8a5b,	// (0x00008a5b) list_single_idle_plugin_player_pane_t1

0x8a69,	// (0x00008a69) list_single_idle_plugin_player_pane_t2

0x8a77,	// (0x00008a77) list_single_idle_plugin_player_pane_t3

0x8a85,	// (0x00008a85) list_single_idle_plugin_player_pane_t4

0x0003,

0xb384,	// (0x0000b384) list_single_idle_plugin_player_pane_t

0x8a93,	// (0x00008a93) wait_bar_pane_cp15

0x8a9b,	// (0x00008a9b) grid_ai_notification_pane

0x5659,	// (0x00005659) list_single_idle_plugin_notification_pane_g1

0xe4b8,	// (0x0000e4b8) cell_ai_notification_pane_ParamLimits

0xe4b8,	// (0x0000e4b8) cell_ai_notification_pane

0x8ab1,	// (0x00008ab1) cell_ai_notification_pane_g1

0x8ab9,	// (0x00008ab9) cell_ai_notification_pane_t1

0xe4c5,	// (0x0000e4c5) tb_ext_find_button_pane

0xe4cd,	// (0x0000e4cd) tb_ext_find_pane_g1

0xe4d5,	// (0x0000e4d5) tb_ext_find_pane_t1

0x1d5b,	// (0x00001d5b) tb_ext_find_button_pane_g1

0x8ae5,	// (0x00008ae5) tb_ext_find_button_pane_g2

0x0001,

0xb38d,	// (0x0000b38d) tb_ext_find_button_pane_g

0xe2e5,	// (0x0000e2e5) main_idle_act4_pane_t1_ParamLimits

0xe2fb,	// (0x0000e2fb) main_idle_act4_pane_t2_ParamLimits

0xf649,	// (0x0000f649) main_idle_act4_pane_t_ParamLimits

0xe32d,	// (0x0000e32d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe345,	// (0x0000e345) sat_plugin_idle_act4_pane_ParamLimits

0xe345,	// (0x0000e345) sat_plugin_idle_act4_pane

0xe4e3,	// (0x0000e4e3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4e3,	// (0x0000e4e3) sat_plugin_idle_act4_pane_t1

0xe4fb,	// (0x0000e4fb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe4fb,	// (0x0000e4fb) sat_plugin_idle_act4_pane_t2

0xe513,	// (0x0000e513) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe513,	// (0x0000e513) sat_plugin_idle_act4_pane_t3

0xe52b,	// (0x0000e52b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe52b,	// (0x0000e52b) sat_plugin_idle_act4_pane_t4

0x0003,

0xf66a,	// (0x0000f66a) sat_plugin_idle_act4_pane_t_ParamLimits

0xf66a,	// (0x0000f66a) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8b3a,	// (0x00008b3a) popup_battery_window_g1_ParamLimits

0x8b3a,	// (0x00008b3a) popup_battery_window_g1

0x8b46,	// (0x00008b46) popup_battery_window_t1_ParamLimits

0x8b46,	// (0x00008b46) popup_battery_window_t1

0x8b58,	// (0x00008b58) popup_battery_window_t2_ParamLimits

0x8b58,	// (0x00008b58) popup_battery_window_t2

0x0001,

0xb39b,	// (0x0000b39b) popup_battery_window_t_ParamLimits

0xb39b,	// (0x0000b39b) popup_battery_window_t

0xc265,	// (0x0000c265) midp_canvas_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) midp_keypad_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) midp_keypad_pane

0x2b8c,	// (0x00002b8c) main_midp_pane_ParamLimits

0x60af,	// (0x000060af) signal_pane_g2_cp_ParamLimits

0xe543,	// (0x0000e543) aid_size_cell_midp_keypad_ParamLimits

0xe543,	// (0x0000e543) aid_size_cell_midp_keypad

0xe561,	// (0x0000e561) midp_keyp_game_grid_pane_ParamLimits

0xe561,	// (0x0000e561) midp_keyp_game_grid_pane

0xe588,	// (0x0000e588) midp_keyp_rocker_pane_ParamLimits

0xe588,	// (0x0000e588) midp_keyp_rocker_pane

0xe5d9,	// (0x0000e5d9) midp_keyp_sk_left_pane_ParamLimits

0xe5d9,	// (0x0000e5d9) midp_keyp_sk_left_pane

0xe62d,	// (0x0000e62d) midp_keyp_sk_right_pane_ParamLimits

0xe62d,	// (0x0000e62d) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe681,	// (0x0000e681) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe681,	// (0x0000e681) midp_keyp_sk_right_pane_g1

0x6699,	// (0x00006699) midp_keyp_rocker_pane_g1

0xe68a,	// (0x0000e68a) keyp_game_cell_pane_ParamLimits

0xe68a,	// (0x0000e68a) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe6ae,	// (0x0000e6ae) keyp_game_cell_pane_g1

0xb622,	// (0x0000b622) popup_fep_vkb2_window_ParamLimits

0xb622,	// (0x0000b622) popup_fep_vkb2_window

0xe6b7,	// (0x0000e6b7) aid_size_cell_vkb2_ParamLimits

0xe6b7,	// (0x0000e6b7) aid_size_cell_vkb2

0xe6ed,	// (0x0000e6ed) popup_fep_vkb2_window_g1_ParamLimits

0xe6ed,	// (0x0000e6ed) popup_fep_vkb2_window_g1

0xe73d,	// (0x0000e73d) vkb2_area_bottom_pane_ParamLimits

0xe73d,	// (0x0000e73d) vkb2_area_bottom_pane

0xe791,	// (0x0000e791) vkb2_area_keypad_pane_ParamLimits

0xe791,	// (0x0000e791) vkb2_area_keypad_pane

0xe7d9,	// (0x0000e7d9) vkb2_area_top_pane_ParamLimits

0xe7d9,	// (0x0000e7d9) vkb2_area_top_pane

0xe85f,	// (0x0000e85f) vkb2_top_entry_pane_ParamLimits

0xe85f,	// (0x0000e85f) vkb2_top_entry_pane

0xe88c,	// (0x0000e88c) vkb2_top_grid_left_pane_ParamLimits

0xe88c,	// (0x0000e88c) vkb2_top_grid_left_pane

0xe8ac,	// (0x0000e8ac) vkb2_top_grid_right_pane_ParamLimits

0xe8ac,	// (0x0000e8ac) vkb2_top_grid_right_pane

0x8ed9,	// (0x00008ed9) vkb2_cell_keypad_pane_ParamLimits

0x8ed9,	// (0x00008ed9) vkb2_cell_keypad_pane

0xe8f2,	// (0x0000e8f2) vkb2_area_bottom_grid_pane_ParamLimits

0xe8f2,	// (0x0000e8f2) vkb2_area_bottom_grid_pane

0xe91c,	// (0x0000e91c) vkb2_area_bottom_pane_g1_ParamLimits

0xe91c,	// (0x0000e91c) vkb2_area_bottom_pane_g1

0xe942,	// (0x0000e942) vkb2_area_bottom_pane_g2_ParamLimits

0xe942,	// (0x0000e942) vkb2_area_bottom_pane_g2

0xe973,	// (0x0000e973) vkb2_area_bottom_pane_g3_ParamLimits

0xe973,	// (0x0000e973) vkb2_area_bottom_pane_g3

0x0002,

0xf673,	// (0x0000f673) vkb2_area_bottom_pane_g_ParamLimits

0xf673,	// (0x0000f673) vkb2_area_bottom_pane_g

0x9083,	// (0x00009083) vkb2_top_cell_left_pane_ParamLimits

0x9083,	// (0x00009083) vkb2_top_cell_left_pane

0xe9dd,	// (0x0000e9dd) vkb2_top_entry_pane_g1_ParamLimits

0xe9dd,	// (0x0000e9dd) vkb2_top_entry_pane_g1

0xe9eb,	// (0x0000e9eb) vkb2_top_entry_pane_t1_ParamLimits

0xe9eb,	// (0x0000e9eb) vkb2_top_entry_pane_t1

0x90eb,	// (0x000090eb) vkb2_top_entry_pane_t2_ParamLimits

0x90eb,	// (0x000090eb) vkb2_top_entry_pane_t2

0x911d,	// (0x0000911d) vkb2_top_entry_pane_t3_ParamLimits

0x911d,	// (0x0000911d) vkb2_top_entry_pane_t3

0x0002,

0xf67a,	// (0x0000f67a) vkb2_top_entry_pane_t_ParamLimits

0xf67a,	// (0x0000f67a) vkb2_top_entry_pane_t

0xea24,	// (0x0000ea24) vkb2_top_grid_right_pane_g1_ParamLimits

0xea24,	// (0x0000ea24) vkb2_top_grid_right_pane_g1

0x9184,	// (0x00009184) vkb2_top_grid_right_pane_g2_ParamLimits

0x9184,	// (0x00009184) vkb2_top_grid_right_pane_g2

0x919c,	// (0x0000919c) vkb2_top_grid_right_pane_g3_ParamLimits

0x919c,	// (0x0000919c) vkb2_top_grid_right_pane_g3

0xea3a,	// (0x0000ea3a) vkb2_top_grid_right_pane_g4_ParamLimits

0xea3a,	// (0x0000ea3a) vkb2_top_grid_right_pane_g4

0x0003,

0xf681,	// (0x0000f681) vkb2_top_grid_right_pane_g_ParamLimits

0xf681,	// (0x0000f681) vkb2_top_grid_right_pane_g

0x91ca,	// (0x000091ca) vkb2_top_cell_left_pane_g1

0x91e1,	// (0x000091e1) vkb2_cell_keypad_pane_g1_ParamLimits

0x91e1,	// (0x000091e1) vkb2_cell_keypad_pane_g1

0x91ef,	// (0x000091ef) vkb2_cell_keypad_pane_t1_ParamLimits

0x91ef,	// (0x000091ef) vkb2_cell_keypad_pane_t1

0x9206,	// (0x00009206) vkb2_cell_bottom_grid_pane_ParamLimits

0x9206,	// (0x00009206) vkb2_cell_bottom_grid_pane

0x923f,	// (0x0000923f) vkb2_cell_bottom_grid_pane_g1

0xe376,	// (0x0000e376) aid_call2_pane_cp02

0xe37e,	// (0x0000e37e) aid_call_pane_cp02

0xe386,	// (0x0000e386) clock_digital_number_pane_cp10

0xe38e,	// (0x0000e38e) clock_digital_number_pane_cp11

0xe396,	// (0x0000e396) clock_digital_number_pane_cp12

0xe39e,	// (0x0000e39e) clock_digital_number_pane_cp13

0xe3a6,	// (0x0000e3a6) clock_digital_separator_pane_cp10

0x1d5b,	// (0x00001d5b) popup_clock_digital_analogue_window_cp2_g1

0x1d5b,	// (0x00001d5b) popup_clock_digital_analogue_window_cp2_g2

0xe3ae,	// (0x0000e3ae) popup_clock_digital_analogue_window_cp2_g3

0x1d5b,	// (0x00001d5b) popup_clock_digital_analogue_window_cp2_g4

0xe3ae,	// (0x0000e3ae) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf64e,	// (0x0000f64e) popup_clock_digital_analogue_window_cp2_g

0xe3b6,	// (0x0000e3b6) popup_clock_digital_analogue_window_cp2_t1

0xe3c4,	// (0x0000e3c4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf659,	// (0x0000f659) popup_clock_digital_analogue_window_cp2_t

0x6699,	// (0x00006699) clock_digital_number_pane_cp10_g1

0x6699,	// (0x00006699) clock_digital_number_pane_cp10_g2

0x0001,

0xb156,	// (0x0000b156) clock_digital_number_pane_cp10_g

0x6699,	// (0x00006699) clock_digital_separator_pane_cp10_g1

0x6699,	// (0x00006699) clock_digital_separator_pane_cp10_g2

0x0001,

0xb156,	// (0x0000b156) clock_digital_separator_pane_cp10_g

0x8786,	// (0x00008786) uniindi_top_pane_g3

0x8797,	// (0x00008797) uniindi_top_pane_g4

0x8f64,	// (0x00008f64) vkb2_row_keypad_pane_ParamLimits

0x8f64,	// (0x00008f64) vkb2_row_keypad_pane

0x925b,	// (0x0000925b) vkb2_cell_t_keypad_pane_ParamLimits

0x925b,	// (0x0000925b) vkb2_cell_t_keypad_pane

0x926b,	// (0x0000926b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x926b,	// (0x0000926b) vkb2_cell_t_keypad_pane_cp08

0x927e,	// (0x0000927e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x927e,	// (0x0000927e) vkb2_cell_t_keypad_pane_cp09

0x9292,	// (0x00009292) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9292,	// (0x00009292) vkb2_cell_t_keypad_pane_cp01

0x92a3,	// (0x000092a3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x92a3,	// (0x000092a3) vkb2_cell_t_keypad_pane_cp02

0x92b4,	// (0x000092b4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x92b4,	// (0x000092b4) vkb2_cell_t_keypad_pane_cp03

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp04

0x92d6,	// (0x000092d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x92d6,	// (0x000092d6) vkb2_cell_t_keypad_pane_cp05

0x92e7,	// (0x000092e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x92e7,	// (0x000092e7) vkb2_cell_t_keypad_pane_cp06

0x92f8,	// (0x000092f8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x92f8,	// (0x000092f8) vkb2_cell_t_keypad_pane_cp07

0x9309,	// (0x00009309) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9309,	// (0x00009309) vkb2_cell_t_keypad_pane_cp10

0x6b2b,	// (0x00006b2b) vkb2_cell_t_keypad_pane_g1

0x931e,	// (0x0000931e) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xea50,	// (0x0000ea50) aid_size_cell_graphic2_ParamLimits

0xea50,	// (0x0000ea50) aid_size_cell_graphic2

0xea8e,	// (0x0000ea8e) bg_popup_window_pane_cp21_ParamLimits

0xea8e,	// (0x0000ea8e) bg_popup_window_pane_cp21

0xea9c,	// (0x0000ea9c) graphic2_pages_pane_ParamLimits

0xea9c,	// (0x0000ea9c) graphic2_pages_pane

0xeaf2,	// (0x0000eaf2) grid_graphic2_control_pane_ParamLimits

0xeaf2,	// (0x0000eaf2) grid_graphic2_control_pane

0xeb3a,	// (0x0000eb3a) grid_graphic2_pane_ParamLimits

0xeb3a,	// (0x0000eb3a) grid_graphic2_pane

0xebc1,	// (0x0000ebc1) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7ed2,	// (0x00007ed2) list_ai3_gene_pane_ParamLimits

0xe052,	// (0x0000e052) bg_popup_window_pane_cp19_ParamLimits

0x830b,	// (0x0000830b) bg_touch_area_indi_pane_ParamLimits

0x830b,	// (0x0000830b) bg_touch_area_indi_pane

0x8321,	// (0x00008321) bg_touch_area_indi_pane_cp01_ParamLimits

0x8321,	// (0x00008321) bg_touch_area_indi_pane_cp01

0x8337,	// (0x00008337) bg_touch_area_indi_pane_cp02_ParamLimits

0x8337,	// (0x00008337) bg_touch_area_indi_pane_cp02

0x834f,	// (0x0000834f) bg_touch_area_indi_pane_cp03_ParamLimits

0x834f,	// (0x0000834f) bg_touch_area_indi_pane_cp03

0x8369,	// (0x00008369) popup_slider_window_g1_ParamLimits

0x8385,	// (0x00008385) popup_slider_window_g2_ParamLimits

0x83a1,	// (0x000083a1) popup_slider_window_g3_ParamLimits

0xf632,	// (0x0000f632) popup_slider_window_g_ParamLimits

0x83fd,	// (0x000083fd) popup_slider_window_t1_ParamLimits

0x8471,	// (0x00008471) small_volume_slider_vertical_pane_ParamLimits

0xebc1,	// (0x0000ebc1) cell_graphic2_pane_ParamLimits

0xec1e,	// (0x0000ec1e) bg_button_pane_cp10_ParamLimits

0xec1e,	// (0x0000ec1e) bg_button_pane_cp10

0xec31,	// (0x0000ec31) bg_button_pane_cp11_ParamLimits

0xec31,	// (0x0000ec31) bg_button_pane_cp11

0xec44,	// (0x0000ec44) graphic2_pages_pane_g1_ParamLimits

0xec44,	// (0x0000ec44) graphic2_pages_pane_g1

0xec5f,	// (0x0000ec5f) graphic2_pages_pane_g2_ParamLimits

0xec5f,	// (0x0000ec5f) graphic2_pages_pane_g2

0x0001,

0xf68f,	// (0x0000f68f) graphic2_pages_pane_g_ParamLimits

0xf68f,	// (0x0000f68f) graphic2_pages_pane_g

0xec77,	// (0x0000ec77) graphic2_pages_pane_t1_ParamLimits

0xec77,	// (0x0000ec77) graphic2_pages_pane_t1

0xec8f,	// (0x0000ec8f) cell_graphic2_control_pane_ParamLimits

0xec8f,	// (0x0000ec8f) cell_graphic2_control_pane

0xecc1,	// (0x0000ecc1) cell_graphic2_pane_g1_ParamLimits

0xecc1,	// (0x0000ecc1) cell_graphic2_pane_g1

0x6945,	// (0x00006945) cell_graphic2_pane_g2_ParamLimits

0x6945,	// (0x00006945) cell_graphic2_pane_g2

0xecce,	// (0x0000ecce) cell_graphic2_pane_g3_ParamLimits

0xecce,	// (0x0000ecce) cell_graphic2_pane_g3

0x6952,	// (0x00006952) cell_graphic2_pane_g4_ParamLimits

0x6952,	// (0x00006952) cell_graphic2_pane_g4

0xecdb,	// (0x0000ecdb) cell_graphic2_pane_g5_ParamLimits

0xecdb,	// (0x0000ecdb) cell_graphic2_pane_g5

0x0004,

0xf694,	// (0x0000f694) cell_graphic2_pane_g_ParamLimits

0xf694,	// (0x0000f694) cell_graphic2_pane_g

0xecfb,	// (0x0000ecfb) cell_graphic2_pane_t1_ParamLimits

0xecfb,	// (0x0000ecfb) cell_graphic2_pane_t1

0x472d,	// (0x0000472d) grid_highlight_pane_cp11_ParamLimits

0x472d,	// (0x0000472d) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xed30,	// (0x0000ed30) cell_graphic2_control_pane_g1

0x6699,	// (0x00006699) bg_touch_area_indi_pane_g1

0x95ee,	// (0x000095ee) aid_cmod_rocker_key_size

0x95f8,	// (0x000095f8) aid_cmode_itu_key_size

0x9602,	// (0x00009602) main_cmode_video_pane

0x960c,	// (0x0000960c) main_comp_mode_itu_pane

0x9618,	// (0x00009618) main_comp_mode_rocker_pane

0x9624,	// (0x00009624) cell_cmode_rocker_pane_ParamLimits

0x9624,	// (0x00009624) cell_cmode_rocker_pane

0x9636,	// (0x00009636) cell_cmode_itu_pane_ParamLimits

0x9636,	// (0x00009636) cell_cmode_itu_pane

0x139c,	// (0x0000139c) bg_button_pane_cp06_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06

0x6b2b,	// (0x00006b2b) cell_cmode_rocker_pane_g1_ParamLimits

0x6b2b,	// (0x00006b2b) cell_cmode_rocker_pane_g1

0x85e6,	// (0x000085e6) cell_cmode_rocker_pane_g2_ParamLimits

0x85e6,	// (0x000085e6) cell_cmode_rocker_pane_g2

0x0001,

0xb3d1,	// (0x0000b3d1) cell_cmode_rocker_pane_g_ParamLimits

0xb3d1,	// (0x0000b3d1) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x964b,	// (0x0000964b) cell_cmode_itu_pane_g1

0x9654,	// (0x00009654) cell_cmode_itu_pane_t1

0x9662,	// (0x00009662) cell_cmode_itu_pane_t2

0x0001,

0xb3d6,	// (0x0000b3d6) cell_cmode_itu_pane_t

0x8809,	// (0x00008809) aid_touch_ctrl_left

0x8811,	// (0x00008811) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xed56,	// (0x0000ed56) aid_cmod_rocker_key_size_cp

0xed60,	// (0x0000ed60) aid_cmode_itu_key_size_cp

0x9684,	// (0x00009684) compa_mode_pane_g1

0x968c,	// (0x0000968c) compa_mode_pane_g2

0x9694,	// (0x00009694) compa_mode_pane_g3

0x0002,

0xb3db,	// (0x0000b3db) compa_mode_pane_g

0xed6a,	// (0x0000ed6a) main_comp_mode_itu_pane_cp

0xed72,	// (0x0000ed72) main_comp_mode_rocker_pane_cp

0xed7a,	// (0x0000ed7a) cell_cmode_itu_pane_cp_ParamLimits

0xed7a,	// (0x0000ed7a) cell_cmode_itu_pane_cp

0xed8f,	// (0x0000ed8f) cell_cmode_rocker_pane_cp_ParamLimits

0xed8f,	// (0x0000ed8f) cell_cmode_rocker_pane_cp

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp

0x6b2b,	// (0x00006b2b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6b2b,	// (0x00006b2b) cell_cmode_rocker_pane_g1_cp

0x6699,	// (0x00006699) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xeda1,	// (0x0000eda1) cell_cmode_itu_pane_g1_cp

0xedaa,	// (0x0000edaa) cell_cmode_itu_pane_t1_cp

0xedaa,	// (0x0000edaa) cell_cmode_itu_pane_t2_cp

0xd439,	// (0x0000d439) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a15,	// (0x00000a15) heading_pane_cp3_ParamLimits

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane_ParamLimits

0x6703,	// (0x00006703) fep_hwr_aid_pane_ParamLimits

0x84ec,	// (0x000084ec) aid_touch_sctrl_top_ParamLimits

0x84f9,	// (0x000084f9) sctrl_sk_top_pane_g1_ParamLimits

0x6b2b,	// (0x00006b2b) sctrl_sk_top_pane_g2_ParamLimits

0xb311,	// (0x0000b311) sctrl_sk_top_pane_g_ParamLimits

0x8506,	// (0x00008506) sctrl_sk_top_pane_t1_ParamLimits

0x84ec,	// (0x000084ec) aid_touch_sctrl_bottom_ParamLimits

0x8506,	// (0x00008506) sctrl_sk_bottom_pane_t1_ParamLimits

0x8752,	// (0x00008752) aid_area_touch_clock

0xe821,	// (0x0000e821) aid_vkb2_area_top_pane_cell_ParamLimits

0xe821,	// (0x0000e821) aid_vkb2_area_top_pane_cell

0xe8cc,	// (0x0000e8cc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe8cc,	// (0x0000e8cc) aid_vkb2_area_bottom_pane_cell

0x90a3,	// (0x000090a3) popup_char_count_window

0x96e1,	// (0x000096e1) popup_char_count_window_g1

0x96ea,	// (0x000096ea) popup_char_count_window_g2

0x96f3,	// (0x000096f3) popup_char_count_window_g3

0x0002,

0xb3e2,	// (0x0000b3e2) popup_char_count_window_g

0x96fc,	// (0x000096fc) popup_char_count_window_t1

0x8d01,	// (0x00008d01) popup_fep_char_preview_window_ParamLimits

0x8d01,	// (0x00008d01) popup_fep_char_preview_window

0xe841,	// (0x0000e841) vkb2_top_candi_pane_ParamLimits

0xe841,	// (0x0000e841) vkb2_top_candi_pane

0xedb8,	// (0x0000edb8) cell_vkb2_top_candi_pane_ParamLimits

0xedb8,	// (0x0000edb8) cell_vkb2_top_candi_pane

0x3f66,	// (0x00003f66) bg_popup_fep_char_preview_window_ParamLimits

0x3f66,	// (0x00003f66) bg_popup_fep_char_preview_window

0x9757,	// (0x00009757) popup_fep_char_preview_window_t1_ParamLimits

0x9757,	// (0x00009757) popup_fep_char_preview_window_t1

0x9791,	// (0x00009791) bg_popup_fep_char_preview_window_g1

0x9799,	// (0x00009799) bg_popup_fep_char_preview_window_g2

0x97a1,	// (0x000097a1) bg_popup_fep_char_preview_window_g3

0x97a9,	// (0x000097a9) bg_popup_fep_char_preview_window_g4

0x97b1,	// (0x000097b1) bg_popup_fep_char_preview_window_g5

0x97b9,	// (0x000097b9) bg_popup_fep_char_preview_window_g6

0x97c1,	// (0x000097c1) bg_popup_fep_char_preview_window_g7

0x97c9,	// (0x000097c9) bg_popup_fep_char_preview_window_g8

0x97d1,	// (0x000097d1) bg_popup_fep_char_preview_window_g9

0x0008,

0xb3e9,	// (0x0000b3e9) bg_popup_fep_char_preview_window_g

0x6b2b,	// (0x00006b2b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b2b,	// (0x00006b2b) cell_vkb2_top_candi_pane_g1

0x6e96,	// (0x00006e96) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6e96,	// (0x00006e96) cell_vkb2_top_candi_pane_g2

0x6eb7,	// (0x00006eb7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6eb7,	// (0x00006eb7) cell_vkb2_top_candi_pane_g3

0x97d9,	// (0x000097d9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x97d9,	// (0x000097d9) cell_vkb2_top_candi_pane_g4

0x97fa,	// (0x000097fa) cell_vkb2_top_candi_pane_g5_ParamLimits

0x97fa,	// (0x000097fa) cell_vkb2_top_candi_pane_g5

0x85e6,	// (0x000085e6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x85e6,	// (0x000085e6) cell_vkb2_top_candi_pane_g6

0x0005,

0xb3fc,	// (0x0000b3fc) cell_vkb2_top_candi_pane_g_ParamLimits

0xb3fc,	// (0x0000b3fc) cell_vkb2_top_candi_pane_g

0x981b,	// (0x0000981b) cell_vkb2_top_candi_pane_t1

0x4e51,	// (0x00004e51) aid_size_touch_slider_mark_ParamLimits

0x4e51,	// (0x00004e51) aid_size_touch_slider_mark

0xead8,	// (0x0000ead8) grid_graphic2_catg_pane_ParamLimits

0xead8,	// (0x0000ead8) grid_graphic2_catg_pane

0xeb94,	// (0x0000eb94) popup_grid_graphic2_window_t1_ParamLimits

0xeb94,	// (0x0000eb94) popup_grid_graphic2_window_t1

0xebaa,	// (0x0000ebaa) popup_grid_graphic2_window_t2_ParamLimits

0xebaa,	// (0x0000ebaa) popup_grid_graphic2_window_t2

0x0001,

0xf68a,	// (0x0000f68a) popup_grid_graphic2_window_t_ParamLimits

0xf68a,	// (0x0000f68a) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xed30,	// (0x0000ed30) cell_graphic2_control_pane_g1_ParamLimits

0xee1e,	// (0x0000ee1e) cell_graphic2_catg_pane_ParamLimits

0xee1e,	// (0x0000ee1e) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xee30,	// (0x0000ee30) cell_graphic2_catg_pane_g1

0x871e,	// (0x0000871e) cell_tb_ext_pane_t1_ParamLimits

0x9141,	// (0x00009141) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9141,	// (0x00009141) vkb2_top_cell_right_narrow_pane

0x9159,	// (0x00009159) vkb2_top_cell_right_wide_pane_ParamLimits

0x9159,	// (0x00009159) vkb2_top_cell_right_wide_pane

0x66f5,	// (0x000066f5) bg_vkb2_func_pane_ParamLimits

0x66f5,	// (0x000066f5) bg_vkb2_func_pane

0x91ca,	// (0x000091ca) vkb2_top_cell_left_pane_g1_ParamLimits

0x66f5,	// (0x000066f5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66f5,	// (0x000066f5) bg_vkb2_fuc_pane_cp03

0x923f,	// (0x0000923f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x36e9,	// (0x000036e9) bg_vkb2_func_pane_g1

0x36f1,	// (0x000036f1) bg_vkb2_func_pane_g2

0x3701,	// (0x00003701) bg_vkb2_func_pane_g3

0x36f9,	// (0x000036f9) bg_vkb2_func_pane_g4

0x3709,	// (0x00003709) bg_vkb2_func_pane_g5

0x3711,	// (0x00003711) bg_vkb2_func_pane_g6

0x3719,	// (0x00003719) bg_vkb2_func_pane_g7

0x3721,	// (0x00003721) bg_vkb2_func_pane_g8

0x36e1,	// (0x000036e1) bg_vkb2_func_pane_g9

0x0008,

0xb409,	// (0x0000b409) bg_vkb2_func_pane_g

0x66f5,	// (0x000066f5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66f5,	// (0x000066f5) bg_vkb2_fuc_pane_cp01

0x91ca,	// (0x000091ca) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x91ca,	// (0x000091ca) vkb2_top_cell_right_wide_pane_g1

0x66f5,	// (0x000066f5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66f5,	// (0x000066f5) bg_vkb2_fuc_pane_cp02

0x923f,	// (0x0000923f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x923f,	// (0x0000923f) vkb2_top_cell_right_narrow_pane_g1

0xdf92,	// (0x0000df92) aid_touch_area_decrease_ParamLimits

0xdf92,	// (0x0000df92) aid_touch_area_decrease

0xdfc6,	// (0x0000dfc6) aid_touch_area_increase_ParamLimits

0xdfc6,	// (0x0000dfc6) aid_touch_area_increase

0xdfee,	// (0x0000dfee) aid_touch_area_mute_ParamLimits

0xdfee,	// (0x0000dfee) aid_touch_area_mute

0xe01e,	// (0x0000e01e) aid_touch_area_slider_ParamLimits

0xe01e,	// (0x0000e01e) aid_touch_area_slider

0xe05e,	// (0x0000e05e) popup_slider_window_g4_ParamLimits

0xe05e,	// (0x0000e05e) popup_slider_window_g4

0xe086,	// (0x0000e086) popup_slider_window_g5_ParamLimits

0xe086,	// (0x0000e086) popup_slider_window_g5

0xe0ba,	// (0x0000e0ba) popup_slider_window_g6_ParamLimits

0xe0ba,	// (0x0000e0ba) popup_slider_window_g6

0x842b,	// (0x0000842b) popup_slider_window_t2_ParamLimits

0x842b,	// (0x0000842b) popup_slider_window_t2

0x0001,

0xb305,	// (0x0000b305) popup_slider_window_t_ParamLimits

0xb305,	// (0x0000b305) popup_slider_window_t

0xe0d6,	// (0x0000e0d6) slider_pane_ParamLimits

0xe0d6,	// (0x0000e0d6) slider_pane

0x9855,	// (0x00009855) slider_pane_g1_ParamLimits

0x9855,	// (0x00009855) slider_pane_g1

0x9869,	// (0x00009869) slider_pane_g2_ParamLimits

0x9869,	// (0x00009869) slider_pane_g2

0x987f,	// (0x0000987f) slider_pane_g3_ParamLimits

0x987f,	// (0x0000987f) slider_pane_g3

0x0003,

0xb41c,	// (0x0000b41c) slider_pane_g_ParamLimits

0xb41c,	// (0x0000b41c) slider_pane_g

0xcb8f,	// (0x0000cb8f) popup_tb_float_extension_window_ParamLimits

0xcb8f,	// (0x0000cb8f) popup_tb_float_extension_window

0x98ab,	// (0x000098ab) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x98b7,	// (0x000098b7) grid_tb_float_ext_pane

0x98c1,	// (0x000098c1) cell_tb_float_ext_pane_ParamLimits

0x98c1,	// (0x000098c1) cell_tb_float_ext_pane

0x98db,	// (0x000098db) cell_tb_float_ext_pane_g1

0x98e4,	// (0x000098e4) grid_highlight_pane_cp12

0xd857,	// (0x0000d857) cell_last_hwr_side_pane_ParamLimits

0xd857,	// (0x0000d857) cell_last_hwr_side_pane

0x6699,	// (0x00006699) cell_last_hwr_side_pane_g1

0x98ed,	// (0x000098ed) cell_last_hwr_side_pane_g2

0x0001,

0xb425,	// (0x0000b425) cell_last_hwr_side_pane_g

0xe9a8,	// (0x0000e9a8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9a8,	// (0x0000e9a8) vkb2_area_bottom_space_btn_pane

0x6b2b,	// (0x00006b2b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x931e,	// (0x0000931e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x981b,	// (0x0000981b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x98f6,	// (0x000098f6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x98f6,	// (0x000098f6) vkb2_area_bottom_space_btn_pane_g1

0x9930,	// (0x00009930) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9930,	// (0x00009930) vkb2_area_bottom_space_btn_pane_g2

0x9966,	// (0x00009966) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9966,	// (0x00009966) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb42a,	// (0x0000b42a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb42a,	// (0x0000b42a) vkb2_area_bottom_space_btn_pane_g

0x67b8,	// (0x000067b8) cel_fep_hwr_func_pane_ParamLimits

0x67b8,	// (0x000067b8) cel_fep_hwr_func_pane

0xd82c,	// (0x0000d82c) cell_hwr_side_button_pane_ParamLimits

0xd82c,	// (0x0000d82c) cell_hwr_side_button_pane

0x8752,	// (0x00008752) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x8764,	// (0x00008764) uniindi_top_pane_g1_ParamLimits

0x877a,	// (0x0000877a) uniindi_top_pane_g2_ParamLimits

0x8786,	// (0x00008786) uniindi_top_pane_g3_ParamLimits

0x8797,	// (0x00008797) uniindi_top_pane_g4_ParamLimits

0xb33d,	// (0x0000b33d) uniindi_top_pane_g_ParamLimits

0x87a4,	// (0x000087a4) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x99b0,	// (0x000099b0) cel_fep_hwr_func_pane_g1_ParamLimits

0x99b0,	// (0x000099b0) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x99b0,	// (0x000099b0) cell_hwr_side_button_pane_g1_ParamLimits

0x99b0,	// (0x000099b0) cell_hwr_side_button_pane_g1

0x34bc,	// (0x000034bc) status_pane_g4_ParamLimits

0x34bc,	// (0x000034bc) status_pane_g4

0x34d6,	// (0x000034d6) status_pane_t1

0x63d3,	// (0x000063d3) form2_midp_gauge_slider_cont_pane

0x63db,	// (0x000063db) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd782,	// (0x0000d782) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd794,	// (0x0000d794) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf5d6,	// (0x0000f5d6) form2_midp_gauge_slider_pane_t_ParamLimits

0x6411,	// (0x00006411) form2_midp_slider_pane_ParamLimits

0x8cc1,	// (0x00008cc1) aid_size_cell_func_vkb2_ParamLimits

0x8cc1,	// (0x00008cc1) aid_size_cell_func_vkb2

0x9897,	// (0x00009897) slider_pane_g4_ParamLimits

0x9897,	// (0x00009897) slider_pane_g4

0xee39,	// (0x0000ee39) form2_midp_gauge_slider_pane_t2_cp01

0xee47,	// (0x0000ee47) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xee47,	// (0x0000ee47) form2_midp_gauge_slider_pane_t3_cp01

0x99e9,	// (0x000099e9) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9a1d,	// (0x00009a1d) navi_smil_pane_g1

0x9a25,	// (0x00009a25) navi_smil_pane_t1

0x99f2,	// (0x000099f2) form2_midp_slider_pane_g1

0x99fb,	// (0x000099fb) form2_midp_slider_pane_g2

0x9a03,	// (0x00009a03) form2_midp_slider_pane_g3

0x99f2,	// (0x000099f2) form2_midp_slider_pane_g4

0xee64,	// (0x0000ee64) form2_midp_slider_pane_g5

0x0004,

0xf6a4,	// (0x0000f6a4) form2_midp_slider_pane_g

0x99a0,	// (0x000099a0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x99a0,	// (0x000099a0) vkb2_area_bottom_space_btn_pane_g4

0xcd72,	// (0x0000cd72) lc0_navi_pane_ParamLimits

0xcd72,	// (0x0000cd72) lc0_navi_pane

0xcddc,	// (0x0000cddc) lc0_stat_indi_pane_ParamLimits

0xcddc,	// (0x0000cddc) lc0_stat_indi_pane

0xcdf1,	// (0x0000cdf1) ls0_title_pane_ParamLimits

0xcdf1,	// (0x0000cdf1) ls0_title_pane

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14_ParamLimits

0x8739,	// (0x00008739) list_uniindi_pane_ParamLimits

0x8745,	// (0x00008745) uniindi_top_pane_ParamLimits

0x87e1,	// (0x000087e1) list_single_uniindi_pane_g1_ParamLimits

0x87f4,	// (0x000087f4) list_single_uniindi_pane_t1_ParamLimits

0xee6f,	// (0x0000ee6f) lc0_stat_clock_pane_ParamLimits

0xee6f,	// (0x0000ee6f) lc0_stat_clock_pane

0xee7c,	// (0x0000ee7c) lc0_stat_indi_pane_g1_ParamLimits

0xee7c,	// (0x0000ee7c) lc0_stat_indi_pane_g1

0xee89,	// (0x0000ee89) lc0_stat_indi_pane_g2_ParamLimits

0xee89,	// (0x0000ee89) lc0_stat_indi_pane_g2

0x0001,

0xf6af,	// (0x0000f6af) lc0_stat_indi_pane_g_ParamLimits

0xf6af,	// (0x0000f6af) lc0_stat_indi_pane_g

0xee96,	// (0x0000ee96) lc0_uni_indicator_pane_ParamLimits

0xee96,	// (0x0000ee96) lc0_uni_indicator_pane

0xeea3,	// (0x0000eea3) ls0_title_pane_g1_ParamLimits

0xeea3,	// (0x0000eea3) ls0_title_pane_g1

0xeeb7,	// (0x0000eeb7) ls0_title_pane_t1_ParamLimits

0xeeb7,	// (0x0000eeb7) ls0_title_pane_t1

0xeee5,	// (0x0000eee5) lc0_uni_indicator_pane_g1_ParamLimits

0xeee5,	// (0x0000eee5) lc0_uni_indicator_pane_g1

0x9ac5,	// (0x00009ac5) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9ad3,	// (0x00009ad3) ai5_sk_pane_ParamLimits

0x9ad3,	// (0x00009ad3) ai5_sk_pane

0xef0c,	// (0x0000ef0c) cell_ai5_widget_pane_ParamLimits

0xef0c,	// (0x0000ef0c) cell_ai5_widget_pane

0x9b96,	// (0x00009b96) aid_size_cell_widget_grid

0x9bac,	// (0x00009bac) bg_ai5_widget_pane_ParamLimits

0x9bac,	// (0x00009bac) bg_ai5_widget_pane

0x9c20,	// (0x00009c20) cell_ai5_widget_pane_g2

0x9c30,	// (0x00009c30) cell_ai5_widget_pane_g3

0x9c47,	// (0x00009c47) cell_ai5_widget_pane_g4

0x9c53,	// (0x00009c53) cell_ai5_widget_pane_g5

0x9c5f,	// (0x00009c5f) cell_ai5_widget_pane_g6

0x9c6b,	// (0x00009c6b) cell_ai5_widget_pane_g7

0x9cb3,	// (0x00009cb3) cell_ai5_widget_pane_t1_ParamLimits

0x9cb3,	// (0x00009cb3) cell_ai5_widget_pane_t1

0x9cd0,	// (0x00009cd0) cell_ai5_widget_pane_t2_ParamLimits

0x9cd0,	// (0x00009cd0) cell_ai5_widget_pane_t2

0x9ce8,	// (0x00009ce8) cell_ai5_widget_pane_t3_ParamLimits

0x9ce8,	// (0x00009ce8) cell_ai5_widget_pane_t3

0x9d00,	// (0x00009d00) cell_ai5_widget_pane_t4_ParamLimits

0x9d00,	// (0x00009d00) cell_ai5_widget_pane_t4

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_t5_ParamLimits

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_t5

0x9d3c,	// (0x00009d3c) cell_ai5_widget_pane_t6_ParamLimits

0x9d3c,	// (0x00009d3c) cell_ai5_widget_pane_t6

0x9d4e,	// (0x00009d4e) cell_ai5_widget_pane_t7_ParamLimits

0x9d4e,	// (0x00009d4e) cell_ai5_widget_pane_t7

0x9d67,	// (0x00009d67) cell_ai5_widget_pane_t8_ParamLimits

0x9d67,	// (0x00009d67) cell_ai5_widget_pane_t8

0x0009,

0xb458,	// (0x0000b458) cell_ai5_widget_pane_t_ParamLimits

0xb458,	// (0x0000b458) cell_ai5_widget_pane_t

0x9dbb,	// (0x00009dbb) grid_ai5_widget_pane

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane

0xef76,	// (0x0000ef76) ai5_sk_left_pane

0xef80,	// (0x0000ef80) ai5_sk_middle_pane

0xef8a,	// (0x0000ef8a) ai5_sk_right_pane

0x9df0,	// (0x00009df0) bg_ai5_widget_pane_g1_ParamLimits

0x9df0,	// (0x00009df0) bg_ai5_widget_pane_g1

0x9dfc,	// (0x00009dfc) bg_ai5_widget_pane_g2_ParamLimits

0x9dfc,	// (0x00009dfc) bg_ai5_widget_pane_g2

0x9e08,	// (0x00009e08) bg_ai5_widget_pane_g3_ParamLimits

0x9e08,	// (0x00009e08) bg_ai5_widget_pane_g3

0x9e14,	// (0x00009e14) bg_ai5_widget_pane_g4_ParamLimits

0x9e14,	// (0x00009e14) bg_ai5_widget_pane_g4

0x9e20,	// (0x00009e20) bg_ai5_widget_pane_g5_ParamLimits

0x9e20,	// (0x00009e20) bg_ai5_widget_pane_g5

0x9e2c,	// (0x00009e2c) bg_ai5_widget_pane_g6_ParamLimits

0x9e2c,	// (0x00009e2c) bg_ai5_widget_pane_g6

0x9e38,	// (0x00009e38) bg_ai5_widget_pane_g7_ParamLimits

0x9e38,	// (0x00009e38) bg_ai5_widget_pane_g7

0x9e44,	// (0x00009e44) bg_ai5_widget_pane_g8_ParamLimits

0x9e44,	// (0x00009e44) bg_ai5_widget_pane_g8

0x9e50,	// (0x00009e50) bg_ai5_widget_pane_g9_ParamLimits

0x9e50,	// (0x00009e50) bg_ai5_widget_pane_g9

0x0008,

0xb46d,	// (0x0000b46d) bg_ai5_widget_pane_g_ParamLimits

0xb46d,	// (0x0000b46d) bg_ai5_widget_pane_g

0x9e82,	// (0x00009e82) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e82,	// (0x00009e82) cell_shortcut_ai5_widget_pane

0x2615,	// (0x00002615) bg_cell_shortcut_ai5_widget_pane

0x9e93,	// (0x00009e93) cell_grid_ai5_widget_pane_g1

0x2615,	// (0x00002615) highlight_cell_shortcut_ai5_widget_pane

0x36f1,	// (0x000036f1) ai5_sk_left_pane_g1

0x9e9c,	// (0x00009e9c) ai5_sk_left_pane_g2

0x9ea4,	// (0x00009ea4) ai5_sk_left_pane_g3

0x9eac,	// (0x00009eac) ai5_sk_left_pane_g4

0x0003,

0xb480,	// (0x0000b480) ai5_sk_left_pane_g

0x9eb4,	// (0x00009eb4) ai5_sk_left_pane_t1

0x36e9,	// (0x000036e9) ai5_sk_right_pane_g1

0x9ec2,	// (0x00009ec2) ai5_sk_right_pane_g2

0x9eca,	// (0x00009eca) ai5_sk_right_pane_g3

0x9ed2,	// (0x00009ed2) ai5_sk_right_pane_g4

0x0003,

0xb489,	// (0x0000b489) ai5_sk_right_pane_g

0x9eda,	// (0x00009eda) ai5_sk_right_pane_t1

0x36e9,	// (0x000036e9) ai5_sk_middle_pane_g1

0x36f1,	// (0x000036f1) ai5_sk_middle_pane_g2

0x3709,	// (0x00003709) ai5_sk_middle_pane_g3

0x9eca,	// (0x00009eca) ai5_sk_middle_pane_g4

0x9ea4,	// (0x00009ea4) ai5_sk_middle_pane_g5

0x9ee8,	// (0x00009ee8) ai5_sk_middle_pane_g6

0xef94,	// (0x0000ef94) ai5_sk_middle_pane_g7

0x0006,

0xf6b4,	// (0x0000f6b4) ai5_sk_middle_pane_g

0xcc5e,	// (0x0000cc5e) aid_touch_area_size_lc0_ParamLimits

0xcc5e,	// (0x0000cc5e) aid_touch_area_size_lc0

0x6ed8,	// (0x00006ed8) cell_hwr_candidate_pane_t1_ParamLimits

0x3193,	// (0x00003193) aid_touch_navi_pane

0xceea,	// (0x0000ceea) status_dt_navi_pane_ParamLimits

0xceea,	// (0x0000ceea) status_dt_navi_pane

0xcf02,	// (0x0000cf02) status_dt_sta_pane_ParamLimits

0xcf02,	// (0x0000cf02) status_dt_sta_pane

0xef9c,	// (0x0000ef9c) dt_sta_controll_pane

0xefa9,	// (0x0000efa9) dt_sta_indi_pane

0xefb6,	// (0x0000efb6) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xefc8,	// (0x0000efc8) dt_sta_battery_pane

0xefd0,	// (0x0000efd0) dt_sta_indi_pane_g1

0x9f3a,	// (0x00009f3a) dt_sta_indi_pane_g2

0x9f43,	// (0x00009f43) dt_sta_indi_pane_g3

0x0002,

0xf6c3,	// (0x0000f6c3) dt_sta_indi_pane_g

0x9f4c,	// (0x00009f4c) dt_sta_signal_pane

0x139c,	// (0x0000139c) bg_dt_sta_title_pane_ParamLimits

0x139c,	// (0x0000139c) bg_dt_sta_title_pane

0x9f55,	// (0x00009f55) dt_sta_title_pane_g1

0x9f5d,	// (0x00009f5d) dt_sta_title_pane_t1_ParamLimits

0x9f5d,	// (0x00009f5d) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xefd9,	// (0x0000efd9) dt_sta_controll_pane_g1

0x9f7b,	// (0x00009f7b) bg_dt_sta_title_pane_g1

0x9f84,	// (0x00009f84) bg_dt_sta_title_pane_g2

0x9f8d,	// (0x00009f8d) bg_dt_sta_title_pane_g3

0x0002,

0xb4a8,	// (0x0000b4a8) bg_dt_sta_title_pane_g

0x6699,	// (0x00006699) bg_dt_sta_indi_pane_g1

0x9f96,	// (0x00009f96) dt_sta_signal_pane_g1

0x9f9e,	// (0x00009f9e) dt_sta_signal_pane_g2

0x0001,

0xb4af,	// (0x0000b4af) dt_sta_signal_pane_g

0x9fa6,	// (0x00009fa6) dt_sta_battery_pane_g1

0x9faf,	// (0x00009faf) dt_sta_battery_pane_t1

0x6699,	// (0x00006699) bg_dt_sta_control_pane_g1

0x1f44,	// (0x00001f44) fep_china_uni_eep_pane

0x1f4c,	// (0x00001f4c) fep_china_uni_entry_pane_ParamLimits

0x1f5c,	// (0x00001f5c) popup_fep_china_uni_window_g1_ParamLimits

0x1f6c,	// (0x00001f6c) popup_fep_china_uni_window_g2_ParamLimits

0x1f6c,	// (0x00001f6c) popup_fep_china_uni_window_g2

0x0001,

0xad36,	// (0x0000ad36) popup_fep_china_uni_window_g_ParamLimits

0xad36,	// (0x0000ad36) popup_fep_china_uni_window_g

0x9fbe,	// (0x00009fbe) fep_china_uni_eep_pane_g1

0x9fc6,	// (0x00009fc6) fep_china_uni_eep_pane_t1

0x9a14,	// (0x00009a14) aid_touch_area_size_smil_player

0x32e3,	// (0x000032e3) lc0_clock_pane

0x34ca,	// (0x000034ca) status_pane_g5_ParamLimits

0x34ca,	// (0x000034ca) status_pane_g5

0xc711,	// (0x0000c711) popup_keymap_window

0x3488,	// (0x00003488) status_icon_pane

0x9c30,	// (0x00009c30) cell_ai5_widget_pane_g3_ParamLimits

0x9c47,	// (0x00009c47) cell_ai5_widget_pane_g4_ParamLimits

0x9c53,	// (0x00009c53) cell_ai5_widget_pane_g5_ParamLimits

0x9c77,	// (0x00009c77) cell_ai5_widget_pane_g8_ParamLimits

0x9c77,	// (0x00009c77) cell_ai5_widget_pane_g8

0x9c8b,	// (0x00009c8b) cell_ai5_widget_pane_g9_ParamLimits

0x9c8b,	// (0x00009c8b) cell_ai5_widget_pane_g9

0x9c9f,	// (0x00009c9f) cell_ai5_widget_pane_g10_ParamLimits

0x9c9f,	// (0x00009c9f) cell_ai5_widget_pane_g10

0x9fd5,	// (0x00009fd5) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9fdd,	// (0x00009fdd) popup_keymap_window_t1

0xc419,	// (0x0000c419) control_pane_g6_ParamLimits

0xc419,	// (0x0000c419) control_pane_g6

0xc426,	// (0x0000c426) control_pane_g7_ParamLimits

0xc426,	// (0x0000c426) control_pane_g7

0xc433,	// (0x0000c433) control_pane_g8_ParamLimits

0xc433,	// (0x0000c433) control_pane_g8

0xef9c,	// (0x0000ef9c) dt_sta_controll_pane_ParamLimits

0xefa9,	// (0x0000efa9) dt_sta_indi_pane_ParamLimits

0xefb6,	// (0x0000efb6) dt_sta_title_pane_ParamLimits

0x0d59,	// (0x00000d59) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb668,	// (0x0000b668) popup_sk_window

0x3f66,	// (0x00003f66) bg_popup_sub_pane_cp28_ParamLimits

0x3f66,	// (0x00003f66) bg_popup_sub_pane_cp28

0x9feb,	// (0x00009feb) popup_discreet_window_g1_ParamLimits

0x9feb,	// (0x00009feb) popup_discreet_window_g1

0xa00b,	// (0x0000a00b) popup_discreet_window_t1_ParamLimits

0xa00b,	// (0x0000a00b) popup_discreet_window_t1

0xa029,	// (0x0000a029) popup_discreet_window_t2_ParamLimits

0xa029,	// (0x0000a029) popup_discreet_window_t2

0x0002,

0xb4b4,	// (0x0000b4b4) popup_discreet_window_t_ParamLimits

0xb4b4,	// (0x0000b4b4) popup_discreet_window_t

0xa07b,	// (0x0000a07b) popup_sk_window_g1

0xa085,	// (0x0000a085) popup_sk_window_g2

0x0001,

0xb4bb,	// (0x0000b4bb) popup_sk_window_g

0xa08f,	// (0x0000a08f) popup_sk_window_t1

0xa09d,	// (0x0000a09d) popup_sk_window_t1_copy1

0x9c20,	// (0x00009c20) cell_ai5_widget_pane_g2_ParamLimits

0x9d79,	// (0x00009d79) cell_ai5_widget_pane_t9_ParamLimits

0x9d79,	// (0x00009d79) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xefe2,	// (0x0000efe2) aid_fshwr2_btn_pane

0xeff3,	// (0x0000eff3) aid_fshwr2_syb_pane

0xf004,	// (0x0000f004) aid_fshwr2_txt_pane

0xf010,	// (0x0000f010) fshwr2_func_candi_pane

0xf02f,	// (0x0000f02f) fshwr2_hwr_syb_pane

0xf04a,	// (0x0000f04a) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa11d,	// (0x0000a11d) fshwr2_icf_pane_t1_ParamLimits

0xa11d,	// (0x0000a11d) fshwr2_icf_pane_t1

0x1d5b,	// (0x00001d5b) fshwr2_func_candi_pane_g1

0xf076,	// (0x0000f076) fshwr2_func_candi_row_pane_ParamLimits

0xf076,	// (0x0000f076) fshwr2_func_candi_row_pane

0xf08e,	// (0x0000f08e) cell_fshwr2_syb_pane_ParamLimits

0xf08e,	// (0x0000f08e) cell_fshwr2_syb_pane

0x6b2b,	// (0x00006b2b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6b2b,	// (0x00006b2b) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xf0a4,	// (0x0000f0a4) fshwr2_func_candi_cell_pane_ParamLimits

0xf0a4,	// (0x0000f0a4) fshwr2_func_candi_cell_pane

0xf0d9,	// (0x0000f0d9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf0d9,	// (0x0000f0d9) fshwr2_func_candi_cell_bg_pane

0xf0e5,	// (0x0000f0e5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0e5,	// (0x0000f0e5) fshwr2_func_candi_cell_pane_g1

0xf114,	// (0x0000f114) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf114,	// (0x0000f114) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0xa1d7,	// (0x0000a1d7) cell_fshwr2_syb_bg_pane

0xf127,	// (0x0000f127) cell_fshwr2_syb_bg_pane_g1

0xf12f,	// (0x0000f12f) cell_fshwr2_syb_bg_pane_t1

0x139c,	// (0x0000139c) main_tmo_pane

0xd257,	// (0x0000d257) uni_indicator_pane_g1_ParamLimits

0xd26d,	// (0x0000d26d) uni_indicator_pane_g2_ParamLimits

0xd283,	// (0x0000d283) uni_indicator_pane_g3_ParamLimits

0x4c19,	// (0x00004c19) uni_indicator_pane_g4_ParamLimits

0x4c19,	// (0x00004c19) uni_indicator_pane_g4

0x4c2d,	// (0x00004c2d) uni_indicator_pane_g5_ParamLimits

0x4c2d,	// (0x00004c2d) uni_indicator_pane_g5

0x4c2d,	// (0x00004c2d) uni_indicator_pane_g6_ParamLimits

0x4c2d,	// (0x00004c2d) uni_indicator_pane_g6

0xf57d,	// (0x0000f57d) uni_indicator_pane_g_ParamLimits

0xdf6e,	// (0x0000df6e) popup_tmo_note_window_ParamLimits

0xdf6e,	// (0x0000df6e) popup_tmo_note_window

0x139c,	// (0x0000139c) fshwr2_bg_pane

0xf105,	// (0x0000f105) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf105,	// (0x0000f105) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf6ca,	// (0x0000f6ca) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf6ca,	// (0x0000f6ca) fshwr2_func_candi_cell_pane_g

0x6699,	// (0x00006699) bg_popup_window_pane_cp01

0xa1f6,	// (0x0000a1f6) bg_popup_window_pane_g1_cp01

0xa1ff,	// (0x0000a1ff) bg_popup_window_pane_cp22_ParamLimits

0xa1ff,	// (0x0000a1ff) bg_popup_window_pane_cp22

0xa20d,	// (0x0000a20d) listscroll_tmo_link_pane_ParamLimits

0xa20d,	// (0x0000a20d) listscroll_tmo_link_pane

0xa24d,	// (0x0000a24d) popup_tmo_note_window_g1_ParamLimits

0xa24d,	// (0x0000a24d) popup_tmo_note_window_g1

0xa25a,	// (0x0000a25a) tmo_note_info_pane_ParamLimits

0xa25a,	// (0x0000a25a) tmo_note_info_pane

0xf13e,	// (0x0000f13e) list_tmo_note_info_pane_g1_ParamLimits

0xf13e,	// (0x0000f13e) list_tmo_note_info_pane_g1

0xa28b,	// (0x0000a28b) list_tmo_note_info_pane_g2_ParamLimits

0xa28b,	// (0x0000a28b) list_tmo_note_info_pane_g2

0x0001,

0xf6cf,	// (0x0000f6cf) list_tmo_note_info_pane_g_ParamLimits

0xf6cf,	// (0x0000f6cf) list_tmo_note_info_pane_g

0xa2a7,	// (0x0000a2a7) list_tmo_note_info_text_pane_ParamLimits

0xa2a7,	// (0x0000a2a7) list_tmo_note_info_text_pane

0xa328,	// (0x0000a328) list_tmo_link_pane

0xa335,	// (0x0000a335) scroll_pane_cp20

0xa342,	// (0x0000a342) list_single_tmo_link_pane_ParamLimits

0xa342,	// (0x0000a342) list_single_tmo_link_pane

0xa352,	// (0x0000a352) list_single_tmo_link_pane_t1

0xa360,	// (0x0000a360) list_tmo_note_info_text_pane_t1_ParamLimits

0xa360,	// (0x0000a360) list_tmo_note_info_text_pane_t1

0xbfbd,	// (0x0000bfbd) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbfbd,	// (0x0000bfbd) aid_size_touch_scroll_bar_cp01

0xbeed,	// (0x0000beed) aid_size_touch_slider_marker

0xb658,	// (0x0000b658) popup_settings_window_ParamLimits

0xb658,	// (0x0000b658) popup_settings_window

0x2bb4,	// (0x00002bb4) popup_candi_list_indi_window

0x3193,	// (0x00003193) aid_touch_navi_pane_ParamLimits

0x84c0,	// (0x000084c0) rs_clock_indi_pane

0x84c9,	// (0x000084c9) sctrl_sk_bottom_pane_ParamLimits

0x84da,	// (0x000084da) sctrl_sk_top_pane_ParamLimits

0x8d1b,	// (0x00008d1b) popup_fep_tooltip_window

0x9b96,	// (0x00009b96) aid_size_cell_widget_grid_ParamLimits

0x9c0b,	// (0x00009c0b) cell_ai5_widget_pane_g1_ParamLimits

0x9c0b,	// (0x00009c0b) cell_ai5_widget_pane_g1

0x9c5f,	// (0x00009c5f) cell_ai5_widget_pane_g6_ParamLimits

0x9c6b,	// (0x00009c6b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb443,	// (0x0000b443) cell_ai5_widget_pane_g_ParamLimits

0xb443,	// (0x0000b443) cell_ai5_widget_pane_g

0x9d9d,	// (0x00009d9d) cell_ai5_widget_pane_t10_ParamLimits

0x9d9d,	// (0x00009d9d) cell_ai5_widget_pane_t10

0x9dbb,	// (0x00009dbb) grid_ai5_widget_pane_ParamLimits

0x9e5c,	// (0x00009e5c) cell_contacts_ai5_widget_pane_ParamLimits

0x9e5c,	// (0x00009e5c) cell_contacts_ai5_widget_pane

0xa03e,	// (0x0000a03e) popup_discreet_window_t3_ParamLimits

0xa03e,	// (0x0000a03e) popup_discreet_window_t3

0xf062,	// (0x0000f062) popup_fshwr2_char_preview_window_ParamLimits

0xf062,	// (0x0000f062) popup_fshwr2_char_preview_window

0xf155,	// (0x0000f155) tmo_note_info_pane_t1

0xf16a,	// (0x0000f16a) tmo_note_info_pane_t2

0xf181,	// (0x0000f181) tmo_note_info_pane_t3

0xa304,	// (0x0000a304) tmo_note_info_pane_t4

0xa316,	// (0x0000a316) tmo_note_info_pane_t5

0x0004,

0xf6d4,	// (0x0000f6d4) tmo_note_info_pane_t

0xa328,	// (0x0000a328) list_tmo_link_pane_ParamLimits

0xa335,	// (0x0000a335) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa379,	// (0x0000a379) popup_fshwr2_char_preview_window_t1

0xa387,	// (0x0000a387) popup_candi_list_indi_window_g1

0xa390,	// (0x0000a390) bg_cell_contacts_ai5_widget_pane

0xa39c,	// (0x0000a39c) cell_contacts_ai5_widget_pane_g1

0x71a4,	// (0x000071a4) cell_contacts_ai5_widget_pane_g2

0xa3b1,	// (0x0000a3b1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb4d5,	// (0x0000b4d5) cell_contacts_ai5_widget_pane_g

0xa3bd,	// (0x0000a3bd) cell_contacts_ai5_widget_pane_t1

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf1fb,	// (0x0000f1fb) settings_container_pane

0x2615,	// (0x00002615) listscroll_set_pane_copy1

0x5a29,	// (0x00005a29) scroll_pane_cp121_copy1

0xa440,	// (0x0000a440) set_content_pane_copy1

0xf207,	// (0x0000f207) aid_height_set_list_copy1_ParamLimits

0xf207,	// (0x0000f207) aid_height_set_list_copy1

0x4f15,	// (0x00004f15) aid_size_parent_copy1_ParamLimits

0x4f15,	// (0x00004f15) aid_size_parent_copy1

0xf213,	// (0x0000f213) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf213,	// (0x0000f213) button_value_adjust_pane_cp6_copy1

0x2b8c,	// (0x00002b8c) list_highlight_pane_cp2_copy1_ParamLimits

0x2b8c,	// (0x00002b8c) list_highlight_pane_cp2_copy1

0xf227,	// (0x0000f227) list_set_pane_copy1_ParamLimits

0xf227,	// (0x0000f227) list_set_pane_copy1

0xf196,	// (0x0000f196) main_pane_set_t1_copy1_ParamLimits

0xf196,	// (0x0000f196) main_pane_set_t1_copy1

0xf1d0,	// (0x0000f1d0) main_pane_set_t2_copy1_ParamLimits

0xf1d0,	// (0x0000f1d0) main_pane_set_t2_copy1

0xf2d4,	// (0x0000f2d4) main_pane_set_t3_copy1

0xf2e2,	// (0x0000f2e2) main_pane_set_t4_copy1

0xf1ef,	// (0x0000f1ef) set_content_pane_g1_copy1_ParamLimits

0xf1ef,	// (0x0000f1ef) set_content_pane_g1_copy1

0xf2f0,	// (0x0000f2f0) setting_code_pane_copy1

0xa539,	// (0x0000a539) setting_slider_graphic_pane_copy1

0xa539,	// (0x0000a539) setting_slider_pane_copy1

0xa539,	// (0x0000a539) setting_text_pane_copy1

0xa539,	// (0x0000a539) setting_volume_pane_copy1

0xf2f0,	// (0x0000f2f0) settings_code_pane_cp2_copy1

0xf2f8,	// (0x0000f2f8) settings_code_pane_cp_copy1_ParamLimits

0xf2f8,	// (0x0000f2f8) settings_code_pane_cp_copy1

0xf30c,	// (0x0000f30c) volume_set_pane_copy1

0xf314,	// (0x0000f314) volume_set_pane_g10_copy1

0xf31c,	// (0x0000f31c) volume_set_pane_g1_copy1

0xf324,	// (0x0000f324) volume_set_pane_g2_copy1

0xf32c,	// (0x0000f32c) volume_set_pane_g3_copy1

0xf334,	// (0x0000f334) volume_set_pane_g4_copy1

0xf33c,	// (0x0000f33c) volume_set_pane_g5_copy1

0xf344,	// (0x0000f344) volume_set_pane_g6_copy1

0xf34c,	// (0x0000f34c) volume_set_pane_g7_copy1

0xf354,	// (0x0000f354) volume_set_pane_g8_copy1

0xf35c,	// (0x0000f35c) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa5ad,	// (0x0000a5ad) setting_slider_pane_t1_copy1_ParamLimits

0xa5ad,	// (0x0000a5ad) setting_slider_pane_t1_copy1

0xf364,	// (0x0000f364) setting_slider_pane_t2_copy1_ParamLimits

0xf364,	// (0x0000f364) setting_slider_pane_t2_copy1

0xf37e,	// (0x0000f37e) setting_slider_pane_t3_copy1_ParamLimits

0xf37e,	// (0x0000f37e) setting_slider_pane_t3_copy1

0xf396,	// (0x0000f396) slider_set_pane_copy1_ParamLimits

0xf396,	// (0x0000f396) slider_set_pane_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g1_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g2_copy2

0xa613,	// (0x0000a613) set_opt_bg_pane_g3_copy2

0x14dd,	// (0x000014dd) set_opt_bg_pane_g4_copy2

0x14e5,	// (0x000014e5) set_opt_bg_pane_g5_copy2

0x14ed,	// (0x000014ed) set_opt_bg_pane_g6_copy2

0xf3ac,	// (0x0000f3ac) set_opt_bg_pane_g7_copy2

0xa625,	// (0x0000a625) set_opt_bg_pane_g8_copy2

0xa62f,	// (0x0000a62f) set_opt_bg_pane_g9_copy2

0xa639,	// (0x0000a639) aid_size_touch_slider_mark_copy1_ParamLimits

0xa639,	// (0x0000a639) aid_size_touch_slider_mark_copy1

0xa64d,	// (0x0000a64d) slider_set_pane_g1_copy1

0xa656,	// (0x0000a656) slider_set_pane_g2_copy1

0x4e7e,	// (0x00004e7e) slider_set_pane_g3_copy1_ParamLimits

0x4e7e,	// (0x00004e7e) slider_set_pane_g3_copy1

0x4e92,	// (0x00004e92) slider_set_pane_g4_copy1_ParamLimits

0x4e92,	// (0x00004e92) slider_set_pane_g4_copy1

0x4eaa,	// (0x00004eaa) slider_set_pane_g5_copy1_ParamLimits

0x4eaa,	// (0x00004eaa) slider_set_pane_g5_copy1

0x4e7e,	// (0x00004e7e) slider_set_pane_g6_copy1_ParamLimits

0x4e7e,	// (0x00004e7e) slider_set_pane_g6_copy1

0xf3b4,	// (0x0000f3b4) slider_set_pane_g7_copy1_ParamLimits

0xf3b4,	// (0x0000f3b4) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa674,	// (0x0000a674) setting_slider_graphic_pane_g1_copy1

0xf3ca,	// (0x0000f3ca) setting_slider_graphic_pane_t1_copy1

0xf3da,	// (0x0000f3da) setting_slider_graphic_pane_t2_copy1

0xf3ea,	// (0x0000f3ea) slider_set_pane_cp_copy1

0xa6ad,	// (0x0000a6ad) input_focus_pane_cp1_copy1

0xa6b6,	// (0x0000a6b6) list_set_text_pane_copy1

0xa6be,	// (0x0000a6be) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa6ad,	// (0x0000a6ad) input_focus_pane_cp2_copy1

0xa6be,	// (0x0000a6be) setting_code_pane_g1_copy1

0xf3f2,	// (0x0000f3f2) setting_code_pane_t1_copy1

0x5853,	// (0x00005853) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc22a,	// (0x0000c22a) list_set_graphic_pane_g1_copy1_ParamLimits

0xc22a,	// (0x0000c22a) list_set_graphic_pane_g1_copy1

0xf400,	// (0x0000f400) list_set_graphic_pane_g2_copy1

0xc242,	// (0x0000c242) list_set_graphic_pane_t1_copy1_ParamLimits

0xc242,	// (0x0000c242) list_set_graphic_pane_t1_copy1

0x6699,	// (0x00006699) rs_clock_indi_pane_g1

0xa6ef,	// (0x0000a6ef) rs_clock_indi_pane_t1

0xa6fd,	// (0x0000a6fd) rs_indi_pane

0xa705,	// (0x0000a705) rs_indi_pane_g1

0xa70e,	// (0x0000a70e) rs_indi_pane_g2

0xa717,	// (0x0000a717) rs_indi_pane_g3

0x0002,

0xb4dc,	// (0x0000b4dc) rs_indi_pane_g

0x2615,	// (0x00002615) bg_popup_preview_window_pane_cp03

0xa720,	// (0x0000a720) popup_fep_tooltip_window_t1

0x78a2,	// (0x000078a2) popup_note2_window_g2_ParamLimits

0x78a2,	// (0x000078a2) popup_note2_window_g2

0x0001,

0xb275,	// (0x0000b275) popup_note2_window_g_ParamLimits

0xb275,	// (0x0000b275) popup_note2_window_g

0x7e98,	// (0x00007e98) bg_popup_sub_pane_cp11_ParamLimits

0x7ea5,	// (0x00007ea5) cell_ai3_links_pane_g1_ParamLimits

0x7ebc,	// (0x00007ebc) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x2526,	// (0x00002526) cell_graphic_popup_pane_cp2_ParamLimits

0x2526,	// (0x00002526) cell_graphic_popup_pane_cp2

0xa72e,	// (0x0000a72e) cell_graphic_popup_pane_g1_cp2

0x0b6c,	// (0x00000b6c) cell_graphic_popup_pane_g2_cp2

0xa736,	// (0x0000a736) cell_graphic_popup_pane_g3_cp2

0xa73e,	// (0x0000a73e) cell_graphic_popup_pane_t2_cp2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3_cp2

0x1a40,	// (0x00001a40) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x139c,	// (0x0000139c) main_tmo_pane_ParamLimits

0xdf62,	// (0x0000df62) popup_tmo_big_image_note_window

0x9bfa,	// (0x00009bfa) cell_ai5_widget_list_pane

0x9c02,	// (0x00009c02) cell_ai5_widget_lrg_icon_pane

0xf155,	// (0x0000f155) tmo_note_info_pane_t1_ParamLimits

0xf16a,	// (0x0000f16a) tmo_note_info_pane_t2_ParamLimits

0xf181,	// (0x0000f181) tmo_note_info_pane_t3_ParamLimits

0xa304,	// (0x0000a304) tmo_note_info_pane_t4_ParamLimits

0xa316,	// (0x0000a316) tmo_note_info_pane_t5_ParamLimits

0xf6d4,	// (0x0000f6d4) tmo_note_info_pane_t_ParamLimits

0xf1fb,	// (0x0000f1fb) settings_container_pane_ParamLimits

0xa6a5,	// (0x0000a6a5) indicator_popup_pane_cp5

0xa6a5,	// (0x0000a6a5) indicator_popup_pane_cp6

0x5853,	// (0x00005853) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa74c,	// (0x0000a74c) popup_tmo_big_image_note_window_g1

0xa756,	// (0x0000a756) popup_tmo_big_image_note_window_t1

0xa766,	// (0x0000a766) popup_tmo_big_image_note_window_t2

0xa776,	// (0x0000a776) popup_tmo_big_image_note_window_t3

0x0002,

0xb4e3,	// (0x0000b4e3) popup_tmo_big_image_note_window_t

0x6699,	// (0x00006699) cell_ai5_widget_lrg_icon_pane_g1

0xa786,	// (0x0000a786) cell_ai5_widget_lrg_icon_pane_t1

0xa794,	// (0x0000a794) cell_ai5_widget_list_row_pane_ParamLimits

0xa794,	// (0x0000a794) cell_ai5_widget_list_row_pane

0xa7ab,	// (0x0000a7ab) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7ab,	// (0x0000a7ab) cell_ai5_widget_list_row_pane_g1

0xa7b8,	// (0x0000a7b8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7b8,	// (0x0000a7b8) cell_ai5_widget_list_row_pane_t1

0xa7e9,	// (0x0000a7e9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa7e9,	// (0x0000a7e9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb4ea,	// (0x0000b4ea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb4ea,	// (0x0000b4ea) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa82d,	// (0x0000a82d) popup_fep_char_pre_window

0xa835,	// (0x0000a835) popup_fep_ituss_window

0xa856,	// (0x0000a856) popup_fep_vkbss_window

0xa875,	// (0x0000a875) grid_vkbss_keypad_pane_ParamLimits

0xa875,	// (0x0000a875) grid_vkbss_keypad_pane

0xa885,	// (0x0000a885) ituss_keypad_pane

0xa8a0,	// (0x0000a8a0) aid_vkbss_key_offset_ParamLimits

0xa8a0,	// (0x0000a8a0) aid_vkbss_key_offset

0xa8ac,	// (0x0000a8ac) cell_vkbss_key_pane_ParamLimits

0xa8ac,	// (0x0000a8ac) cell_vkbss_key_pane

0xa8c2,	// (0x0000a8c2) bg_cell_vkbss_key_g1_ParamLimits

0xa8c2,	// (0x0000a8c2) bg_cell_vkbss_key_g1

0xa8ce,	// (0x0000a8ce) cell_vkbss_key_3p_pane_ParamLimits

0xa8ce,	// (0x0000a8ce) cell_vkbss_key_3p_pane

0xa8e8,	// (0x0000a8e8) cell_vkbss_key_g1_ParamLimits

0xa8e8,	// (0x0000a8e8) cell_vkbss_key_g1

0xa902,	// (0x0000a902) cell_vkbss_key_t1_ParamLimits

0xa902,	// (0x0000a902) cell_vkbss_key_t1

0xa92d,	// (0x0000a92d) cell_ituss_key_pane_ParamLimits

0xa92d,	// (0x0000a92d) cell_ituss_key_pane

0xa93e,	// (0x0000a93e) bg_cell_ituss_key_g1_ParamLimits

0xa93e,	// (0x0000a93e) bg_cell_ituss_key_g1

0xa94a,	// (0x0000a94a) cell_ituss_key_pane_g1_ParamLimits

0xa94a,	// (0x0000a94a) cell_ituss_key_pane_g1

0xa964,	// (0x0000a964) cell_ituss_key_pane_g2_ParamLimits

0xa964,	// (0x0000a964) cell_ituss_key_pane_g2

0x0002,

0xb4f1,	// (0x0000b4f1) cell_ituss_key_pane_g_ParamLimits

0xb4f1,	// (0x0000b4f1) cell_ituss_key_pane_g

0xa9a2,	// (0x0000a9a2) cell_ituss_key_t1_ParamLimits

0xa9a2,	// (0x0000a9a2) cell_ituss_key_t1

0xa9dc,	// (0x0000a9dc) cell_ituss_key_t2_ParamLimits

0xa9dc,	// (0x0000a9dc) cell_ituss_key_t2

0xaa0d,	// (0x0000aa0d) cell_ituss_key_t3_ParamLimits

0xaa0d,	// (0x0000aa0d) cell_ituss_key_t3

0xa9dc,	// (0x0000a9dc) cell_ituss_key_t4_ParamLimits

0xa9dc,	// (0x0000a9dc) cell_ituss_key_t4

0x0004,

0xb4f8,	// (0x0000b4f8) cell_ituss_key_t_ParamLimits

0xb4f8,	// (0x0000b4f8) cell_ituss_key_t

0xaa50,	// (0x0000aa50) cell_vkbss_key_3p_pane_g1

0xaa58,	// (0x0000aa58) cell_vkbss_key_3p_pane_g2

0xaa60,	// (0x0000aa60) cell_vkbss_key_3p_pane_g3

0x0002,

0xb503,	// (0x0000b503) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xaa68,	// (0x0000aa68) popup_fep_char_pre_window_t1

0xef6c,	// (0x0000ef6c) main_ai5_sk_pane

0xa390,	// (0x0000a390) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa39c,	// (0x0000a39c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x71a4,	// (0x000071a4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3b1,	// (0x0000a3b1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb4d5,	// (0x0000b4d5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3bd,	// (0x0000a3bd) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf408,	// (0x0000f408) main_ai5_sk_pane_g1

0x3d9f,	// (0x00003d9f) popup_query_code_window_g1

0xa84b,	// (0x0000a84b) popup_fep_vkb_icf_pane

0xa85f,	// (0x0000a85f) popup_fep_vtchi_icf_pane

0xaa80,	// (0x0000aa80) bg_icf_pane

0xaa8c,	// (0x0000aa8c) list_vkb_icf_pane

0xaa98,	// (0x0000aa98) bg_icf_pane_cp01

0xaaa4,	// (0x0000aaa4) vtchi_icf_list_pane

0xaab5,	// (0x0000aab5) list_vkb_icf_pane_t1_ParamLimits

0xaab5,	// (0x0000aab5) list_vkb_icf_pane_t1

0xaacb,	// (0x0000aacb) vtchi_icf_list_pane_t1_ParamLimits

0xaacb,	// (0x0000aacb) vtchi_icf_list_pane_t1

0xa835,	// (0x0000a835) popup_fep_ituss_window_ParamLimits

0xa85f,	// (0x0000a85f) popup_fep_vtchi_icf_pane_ParamLimits

0xa885,	// (0x0000a885) ituss_keypad_pane_ParamLimits

0xa894,	// (0x0000a894) ituss_sks_pane

0xaa80,	// (0x0000aa80) bg_icf_pane_ParamLimits

0xa811,	// (0x0000a811) icf_edit_indi_pane_ParamLimits

0xa811,	// (0x0000a811) icf_edit_indi_pane

0xaa8c,	// (0x0000aa8c) list_vkb_icf_pane_ParamLimits

0xaa98,	// (0x0000aa98) bg_icf_pane_cp01_ParamLimits

0xa820,	// (0x0000a820) icf_edit_indi_pane_cp01_ParamLimits

0xa820,	// (0x0000a820) icf_edit_indi_pane_cp01

0xaaac,	// (0x0000aaac) vtchi_query_pane

0x6b2b,	// (0x00006b2b) icf_edit_indi_pane_g1_ParamLimits

0x6b2b,	// (0x00006b2b) icf_edit_indi_pane_g1

0xab4f,	// (0x0000ab4f) icf_edit_indi_pane_g2_ParamLimits

0xab4f,	// (0x0000ab4f) icf_edit_indi_pane_g2

0x0001,

0xb51b,	// (0x0000b51b) icf_edit_indi_pane_g_ParamLimits

0xb51b,	// (0x0000b51b) icf_edit_indi_pane_g

0xab5e,	// (0x0000ab5e) icf_edit_indi_pane_t1

0xaae5,	// (0x0000aae5) bg_input_focus_pane_cp042

0x0d50,	// (0x00000d50) vtchi_button_pane

0xaaee,	// (0x0000aaee) vtchi_query_pane_t1

0xaafc,	// (0x0000aafc) vtchi_query_pane_t2

0xab0a,	// (0x0000ab0a) vtchi_query_pane_t3

0x0002,

0xb50a,	// (0x0000b50a) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xab18,	// (0x0000ab18) vtchi_button_pane_g1

0xab20,	// (0x0000ab20) ituss_sks_pane_g1

0xab2b,	// (0x0000ab2b) ituss_sks_pane_g2

0x0001,

0xb511,	// (0x0000b511) ituss_sks_pane_g

0xab33,	// (0x0000ab33) ituss_sks_pane_t1

0xab41,	// (0x0000ab41) ituss_sks_pane_t2

0x0001,

0xb516,	// (0x0000b516) ituss_sks_pane_t

0x6068,	// (0x00006068) indicator_nsta_pane_cp_g1

0x6071,	// (0x00006071) indicator_nsta_pane_cp_g2

0x6079,	// (0x00006079) indicator_nsta_pane_cp_g3

0x6081,	// (0x00006081) indicator_nsta_pane_cp_g4

0x6089,	// (0x00006089) indicator_nsta_pane_cp_g5

0x6089,	// (0x00006089) indicator_nsta_pane_cp_g6

0x0005,

0xb0bf,	// (0x0000b0bf) indicator_nsta_pane_cp_g

0xed12,	// (0x0000ed12) cell_graphic2_pane_t2_ParamLimits

0xed12,	// (0x0000ed12) cell_graphic2_pane_t2

0x0001,

0xf69f,	// (0x0000f69f) cell_graphic2_pane_t_ParamLimits

0xf69f,	// (0x0000f69f) cell_graphic2_pane_t

0xed48,	// (0x0000ed48) cell_graphic2_control_pane_t1

0xc16d,	// (0x0000c16d) signal_pane_g3_ParamLimits

0xc16d,	// (0x0000c16d) signal_pane_g3

0xc181,	// (0x0000c181) signal_pane_g4_ParamLimits

0xc181,	// (0x0000c181) signal_pane_g4

0xa7fb,	// (0x0000a7fb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa7fb,	// (0x0000a7fb) cell_ai5_widget_list_row_pane_t3

0xa990,	// (0x0000a990) cell_ituss_key_pane_t1_ParamLimits

0xa990,	// (0x0000a990) cell_ituss_key_pane_t1

0x39b4,	// (0x000039b4) form_field_data_wide_pane_vc_t2_ParamLimits

0x39b4,	// (0x000039b4) form_field_data_wide_pane_vc_t2

0x39c8,	// (0x000039c8) form_field_data_wide_pane_vc_t3_ParamLimits

0x39c8,	// (0x000039c8) form_field_data_wide_pane_vc_t3

0x0002,

0xae1b,	// (0x0000ae1b) form_field_data_wide_pane_vc_t_ParamLimits

0xae1b,	// (0x0000ae1b) form_field_data_wide_pane_vc_t

0x5d30,	// (0x00005d30) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5d30,	// (0x00005d30) form_field_slider_wide_pane_vc_t3

0x5e0e,	// (0x00005e0e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5e0e,	// (0x00005e0e) form_field_popup_wide_pane_vc_t2

0x5e25,	// (0x00005e25) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5e25,	// (0x00005e25) form_field_popup_wide_pane_vc_t3

0x0002,

0xb0ae,	// (0x0000b0ae) form_field_popup_wide_pane_vc_t_ParamLimits

0xb0ae,	// (0x0000b0ae) form_field_popup_wide_pane_vc_t

0xefe2,	// (0x0000efe2) aid_fshwr2_btn_pane_ParamLimits

0xeff3,	// (0x0000eff3) aid_fshwr2_syb_pane_ParamLimits

0xf004,	// (0x0000f004) aid_fshwr2_txt_pane_ParamLimits

0x139c,	// (0x0000139c) fshwr2_bg_pane_ParamLimits

0xf010,	// (0x0000f010) fshwr2_func_candi_pane_ParamLimits

0xf02f,	// (0x0000f02f) fshwr2_hwr_syb_pane_ParamLimits

0xf04a,	// (0x0000f04a) fshwr2_icf_pane_ParamLimits

0x5c96,	// (0x00005c96) list_double_graphic_pane_vc_g4_ParamLimits

0x5c96,	// (0x00005c96) list_double_graphic_pane_vc_g4

0xa984,	// (0x0000a984) cell_ituss_key_pane_g3_ParamLimits

0xa984,	// (0x0000a984) cell_ituss_key_pane_g3

0xaa3e,	// (0x0000aa3e) cell_ituss_key_t5_ParamLimits

0xaa3e,	// (0x0000aa3e) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
