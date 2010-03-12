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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00013ec0 };

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
0x9e35,	// (0x0001dcf5) Screen

0x9e41,	// (0x0001dd01) application_window_ParamLimits

0x9e41,	// (0x0001dd01) application_window

0xbf59,	// (0x0001fe19) screen_g1

0x8d48,	// (0x0001cc08) area_bottom_pane_ParamLimits

0x8d48,	// (0x0001cc08) area_bottom_pane

0xd8a7,	// (0x00021767) area_top_pane_ParamLimits

0xd8a7,	// (0x00021767) area_top_pane

0xd945,	// (0x00021805) main_pane_ParamLimits

0xd945,	// (0x00021805) main_pane

0xbf63,	// (0x0001fe23) misc_graphics

0xacbf,	// (0x0001eb7f) battery_pane_ParamLimits

0xacbf,	// (0x0001eb7f) battery_pane

0x23a1,	// (0x00016261) bg_status_flat_pane_g8

0x23a9,	// (0x00016269) bg_status_flat_pane_g9

0x169c,	// (0x0001555c) context_pane_ParamLimits

0x169c,	// (0x0001555c) context_pane

0xae36,	// (0x0001ecf6) navi_pane_ParamLimits

0xae36,	// (0x0001ecf6) navi_pane

0xaec0,	// (0x0001ed80) signal_pane_ParamLimits

0xaec0,	// (0x0001ed80) signal_pane

0x0008,

0xf875,	// (0x00023735) bg_status_flat_pane_g

0xaf50,	// (0x0001ee10) status_pane_g1_ParamLimits

0xaf50,	// (0x0001ee10) status_pane_g1

0xaf66,	// (0x0001ee26) status_pane_g2_ParamLimits

0xaf66,	// (0x0001ee26) status_pane_g2

0x18dd,	// (0x0001579d) status_pane_g3_ParamLimits

0x18dd,	// (0x0001579d) status_pane_g3

0x0004,

0xf7a1,	// (0x00023661) status_pane_g_ParamLimits

0xf7a1,	// (0x00023661) status_pane_g

0xaf72,	// (0x0001ee32) title_pane_ParamLimits

0xaf72,	// (0x0001ee32) title_pane

0xafd5,	// (0x0001ee95) uni_indicator_pane_ParamLimits

0xafd5,	// (0x0001ee95) uni_indicator_pane

0x14e6,	// (0x000153a6) bg_list_pane_ParamLimits

0x14e6,	// (0x000153a6) bg_list_pane

0xac26,	// (0x0001eae6) find_pane

0xac2e,	// (0x0001eaee) listscroll_app_pane_ParamLimits

0xac2e,	// (0x0001eaee) listscroll_app_pane

0x151a,	// (0x000153da) listscroll_form_pane

0x9039,	// (0x0001cef9) listscroll_gen_pane_ParamLimits

0x9039,	// (0x0001cef9) listscroll_gen_pane

0x151a,	// (0x000153da) listscroll_set_pane

0x2f82,	// (0x00016e42) main_idle_act_pane

0x11e8,	// (0x000150a8) main_idle_trad_pane

0x11e8,	// (0x000150a8) main_list_empty_pane

0x1534,	// (0x000153f4) main_midp_pane

0x1540,	// (0x00015400) main_pane_g1_ParamLimits

0x1540,	// (0x00015400) main_pane_g1

0x904d,	// (0x0001cf0d) popup_ai_message_window_ParamLimits

0x904d,	// (0x0001cf0d) popup_ai_message_window

0x90ed,	// (0x0001cfad) popup_fep_china_uni_window_ParamLimits

0x90ed,	// (0x0001cfad) popup_fep_china_uni_window

0xe853,	// (0x00022713) popup_fep_japan_candidate_window_ParamLimits

0xe853,	// (0x00022713) popup_fep_japan_candidate_window

0xe87d,	// (0x0002273d) popup_fep_japan_predictive_window_ParamLimits

0xe87d,	// (0x0002273d) popup_fep_japan_predictive_window

0x914d,	// (0x0001d00d) popup_find_window

0x916a,	// (0x0001d02a) popup_grid_graphic_window_ParamLimits

0x916a,	// (0x0001d02a) popup_grid_graphic_window

0xe8b3,	// (0x00022773) popup_large_graphic_colour_window

0x920e,	// (0x0001d0ce) popup_menu_window_ParamLimits

0x920e,	// (0x0001d0ce) popup_menu_window

0x93fe,	// (0x0001d2be) popup_note_image_window

0x93be,	// (0x0001d27e) popup_note_wait_window_ParamLimits

0x93be,	// (0x0001d27e) popup_note_wait_window

0x9416,	// (0x0001d2d6) popup_note_window_ParamLimits

0x9416,	// (0x0001d2d6) popup_note_window

0x94c4,	// (0x0001d384) popup_query_code_window_ParamLimits

0x94c4,	// (0x0001d384) popup_query_code_window

0xe8d9,	// (0x00022799) popup_query_data_code_window_ParamLimits

0xe8d9,	// (0x00022799) popup_query_data_code_window

0x9504,	// (0x0001d3c4) popup_query_data_window_ParamLimits

0x9504,	// (0x0001d3c4) popup_query_data_window

0x9598,	// (0x0001d458) popup_query_sat_info_window_ParamLimits

0x9598,	// (0x0001d458) popup_query_sat_info_window

0x9643,	// (0x0001d503) popup_snote_single_graphic_window_ParamLimits

0x9643,	// (0x0001d503) popup_snote_single_graphic_window

0x9643,	// (0x0001d503) popup_snote_single_text_window_ParamLimits

0x9643,	// (0x0001d503) popup_snote_single_text_window

0xe8fc,	// (0x000227bc) popup_sub_window_general

0xe952,	// (0x00022812) popup_window_general_ParamLimits

0xe952,	// (0x00022812) popup_window_general

0x1556,	// (0x00015416) power_save_pane

0x8ece,	// (0x0001cd8e) control_pane_g1_ParamLimits

0x8ece,	// (0x0001cd8e) control_pane_g1

0x8ef7,	// (0x0001cdb7) control_pane_g2_ParamLimits

0x8ef7,	// (0x0001cdb7) control_pane_g2

0x14a9,	// (0x00015369) control_pane_g3_ParamLimits

0x14a9,	// (0x00015369) control_pane_g3

0x0007,

0xf789,	// (0x00023649) control_pane_g_ParamLimits

0xf789,	// (0x00023649) control_pane_g

0x8f32,	// (0x0001cdf2) control_pane_t1_ParamLimits

0x8f32,	// (0x0001cdf2) control_pane_t1

0x8f90,	// (0x0001ce50) control_pane_t2_ParamLimits

0x8f90,	// (0x0001ce50) control_pane_t2

0x0002,

0xf79a,	// (0x0002365a) control_pane_t_ParamLimits

0xf79a,	// (0x0002365a) control_pane_t

0x13ca,	// (0x0001528a) navi_navi_volume_pane_cp1

0x13d3,	// (0x00015293) status_small_icon_pane

0x13db,	// (0x0001529b) status_small_pane_g1_ParamLimits

0x13db,	// (0x0001529b) status_small_pane_g1

0x140f,	// (0x000152cf) status_small_pane_g2_ParamLimits

0x140f,	// (0x000152cf) status_small_pane_g2

0x141b,	// (0x000152db) status_small_pane_g3_ParamLimits

0x141b,	// (0x000152db) status_small_pane_g3

0x1427,	// (0x000152e7) status_small_pane_g4_ParamLimits

0x1427,	// (0x000152e7) status_small_pane_g4

0x1433,	// (0x000152f3) status_small_pane_g5_ParamLimits

0x1433,	// (0x000152f3) status_small_pane_g5

0x1442,	// (0x00015302) status_small_pane_g6_ParamLimits

0x1442,	// (0x00015302) status_small_pane_g6

0x0007,

0xf778,	// (0x00023638) status_small_pane_g_ParamLimits

0xf778,	// (0x00023638) status_small_pane_g

0x1472,	// (0x00015332) status_small_pane_t1

0x1495,	// (0x00015355) status_small_wait_pane_ParamLimits

0x1495,	// (0x00015355) status_small_wait_pane

0xa944,	// (0x0001e804) aid_levels_signal_ParamLimits

0xa944,	// (0x0001e804) aid_levels_signal

0xa95c,	// (0x0001e81c) signal_pane_g1_ParamLimits

0xa95c,	// (0x0001e81c) signal_pane_g1

0xa977,	// (0x0001e837) signal_pane_g2_ParamLimits

0xa977,	// (0x0001e837) signal_pane_g2

0x0003,

0xf709,	// (0x000235c9) signal_pane_g_ParamLimits

0xf709,	// (0x000235c9) signal_pane_g

0x0c2f,	// (0x00014aef) context_pane_g1

0x9e51,	// (0x0001dd11) title_pane_g1

0x9e88,	// (0x0001dd48) title_pane_t1

0xbf79,	// (0x0001fe39) title_pane_t2

0xbf9f,	// (0x0001fe5f) title_pane_t3

0x0002,

0xf55d,	// (0x0002341d) title_pane_t

0xaffd,	// (0x0001eebd) aid_levels_battery_ParamLimits

0xaffd,	// (0x0001eebd) aid_levels_battery

0xb019,	// (0x0001eed9) battery_pane_g1_ParamLimits

0xb019,	// (0x0001eed9) battery_pane_g1

0xb036,	// (0x0001eef6) battery_pane_g2_ParamLimits

0xb036,	// (0x0001eef6) battery_pane_g2

0x0001,

0xf7ac,	// (0x0002366c) battery_pane_g_ParamLimits

0xf7ac,	// (0x0002366c) battery_pane_g

0xb309,	// (0x0001f1c9) uni_indicator_pane_g1

0xb31e,	// (0x0001f1de) uni_indicator_pane_g2

0xb333,	// (0x0001f1f3) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x000237dd) uni_indicator_pane_g

0x1056,	// (0x00014f16) navi_icon_pane_ParamLimits

0x1056,	// (0x00014f16) navi_icon_pane

0x0f9d,	// (0x00014e5d) navi_midp_pane

0x1072,	// (0x00014f32) navi_navi_pane

0x107c,	// (0x00014f3c) navi_text_pane_ParamLimits

0x107c,	// (0x00014f3c) navi_text_pane

0xbf59,	// (0x0001fe19) status_small_wait_pane_g1

0xc2b4,	// (0x00020174) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x000237d8) status_small_wait_pane_g

0xb270,	// (0x0001f130) navi_navi_icon_text_pane

0xb278,	// (0x0001f138) navi_navi_pane_g1_ParamLimits

0xb278,	// (0x0001f138) navi_navi_pane_g1

0xb28a,	// (0x0001f14a) navi_navi_pane_g2_ParamLimits

0xb28a,	// (0x0001f14a) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x000237a6) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x000237a6) navi_navi_pane_g

0x2a30,	// (0x000168f0) navi_navi_tabs_pane

0xb29c,	// (0x0001f15c) navi_navi_text_pane

0xb270,	// (0x0001f130) navi_navi_volume_pane

0xb25e,	// (0x0001f11e) navi_text_pane_t1

0xb252,	// (0x0001f112) navi_icon_pane_g1

0x2921,	// (0x000167e1) navi_navi_text_pane_t1

0x9934,	// (0x0001d7f4) navi_navi_volume_pane_g1

0x993c,	// (0x0001d7fc) volume_small_pane

0xb19a,	// (0x0001f05a) navi_navi_icon_text_pane_g1

0xb1a2,	// (0x0001f062) navi_navi_icon_text_pane_t1

0x1072,	// (0x00014f32) navi_tabs_2_long_pane

0x1072,	// (0x00014f32) navi_tabs_2_pane

0x1072,	// (0x00014f32) navi_tabs_3_long_pane

0x1072,	// (0x00014f32) navi_tabs_3_pane

0x1072,	// (0x00014f32) navi_tabs_4_pane

0x9914,	// (0x0001d7d4) tabs_2_active_pane_ParamLimits

0x9914,	// (0x0001d7d4) tabs_2_active_pane

0x9924,	// (0x0001d7e4) tabs_2_passive_pane_ParamLimits

0x9924,	// (0x0001d7e4) tabs_2_passive_pane

0x98e2,	// (0x0001d7a2) tabs_3_active_pane_ParamLimits

0x98e2,	// (0x0001d7a2) tabs_3_active_pane

0x98f2,	// (0x0001d7b2) tabs_3_passive_pane_ParamLimits

0x98f2,	// (0x0001d7b2) tabs_3_passive_pane

0x9903,	// (0x0001d7c3) tabs_3_passive_pane_cp_ParamLimits

0x9903,	// (0x0001d7c3) tabs_3_passive_pane_cp

0x989e,	// (0x0001d75e) tabs_4_active_pane_ParamLimits

0x989e,	// (0x0001d75e) tabs_4_active_pane

0x98af,	// (0x0001d76f) tabs_4_passive_pane_ParamLimits

0x98af,	// (0x0001d76f) tabs_4_passive_pane

0x98c0,	// (0x0001d780) tabs_4_passive_pane_cp_ParamLimits

0x98c0,	// (0x0001d780) tabs_4_passive_pane_cp

0x98d1,	// (0x0001d791) tabs_4_passive_pane_cp2_ParamLimits

0x98d1,	// (0x0001d791) tabs_4_passive_pane_cp2

0x987a,	// (0x0001d73a) tabs_2_long_active_pane_ParamLimits

0x987a,	// (0x0001d73a) tabs_2_long_active_pane

0x988c,	// (0x0001d74c) tabs_2_long_passive_pane_ParamLimits

0x988c,	// (0x0001d74c) tabs_2_long_passive_pane

0x982f,	// (0x0001d6ef) tabs_3_long_active_pane_ParamLimits

0x982f,	// (0x0001d6ef) tabs_3_long_active_pane

0x9848,	// (0x0001d708) tabs_3_long_passive_pane_ParamLimits

0x9848,	// (0x0001d708) tabs_3_long_passive_pane

0x9861,	// (0x0001d721) tabs_3_long_passive_pane_cp_ParamLimits

0x9861,	// (0x0001d721) tabs_3_long_passive_pane_cp

0xeabe,	// (0x0002297e) volume_small_pane_g1

0x97de,	// (0x0001d69e) volume_small_pane_g2

0x97e7,	// (0x0001d6a7) volume_small_pane_g3

0x97f0,	// (0x0001d6b0) volume_small_pane_g4

0x97f9,	// (0x0001d6b9) volume_small_pane_g5

0x9802,	// (0x0001d6c2) volume_small_pane_g6

0x980b,	// (0x0001d6cb) volume_small_pane_g7

0x9814,	// (0x0001d6d4) volume_small_pane_g8

0x981d,	// (0x0001d6dd) volume_small_pane_g9

0x9826,	// (0x0001d6e6) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x00023772) volume_small_pane_g

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp2_ParamLimits

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp2

0x9f14,	// (0x0001ddd4) tabs_3_active_pane_g1

0x9f1c,	// (0x0001dddc) tabs_3_active_pane_t1

0xbfb1,	// (0x0001fe71) bg_passive_tab_pane_cp2_ParamLimits

0xbfb1,	// (0x0001fe71) bg_passive_tab_pane_cp2

0x9f14,	// (0x0001ddd4) tabs_3_passive_pane_g1

0x9f1c,	// (0x0001dddc) tabs_3_passive_pane_t1

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp3_ParamLimits

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp3

0x9f2e,	// (0x0001ddee) tabs_4_active_pane_g1

0x9f36,	// (0x0001ddf6) tabs_4_active_pane_t1

0xbfb1,	// (0x0001fe71) bg_passive_tab_pane_cp3_ParamLimits

0xbfb1,	// (0x0001fe71) bg_passive_tab_pane_cp3

0x9f2e,	// (0x0001ddee) tabs_4_1_passive_pane_g1

0x9f36,	// (0x0001ddf6) tabs_4_1_passive_pane_t1

0x1534,	// (0x000153f4) list_highlight_pane_cp2

0xb403,	// (0x0001f2c3) list_set_pane_ParamLimits

0xb403,	// (0x0001f2c3) list_set_pane

0xb4cb,	// (0x0001f38b) main_pane_set_t1_ParamLimits

0xb4cb,	// (0x0001f38b) main_pane_set_t1

0xb4eb,	// (0x0001f3ab) main_pane_set_t2_ParamLimits

0xb4eb,	// (0x0001f3ab) main_pane_set_t2

0xb4ff,	// (0x0001f3bf) main_pane_set_t3_ParamLimits

0xb4ff,	// (0x0001f3bf) main_pane_set_t3

0xb513,	// (0x0001f3d3) main_pane_set_t4_ParamLimits

0xb513,	// (0x0001f3d3) main_pane_set_t4

0x0003,

0xf982,	// (0x00023842) main_pane_set_t_ParamLimits

0xf982,	// (0x00023842) main_pane_set_t

0xb527,	// (0x0001f3e7) setting_code_pane

0x30d6,	// (0x00016f96) setting_slider_graphic_pane

0x30d6,	// (0x00016f96) setting_slider_pane

0x30d6,	// (0x00016f96) setting_text_pane

0x30d6,	// (0x00016f96) setting_volume_pane

0xdac1,	// (0x00021981) volume_set_pane

0xbfbf,	// (0x0001fe7f) bg_set_opt_pane_cp

0xdacb,	// (0x0002198b) setting_slider_pane_t1

0xdae4,	// (0x000219a4) setting_slider_pane_t2

0xdafe,	// (0x000219be) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00023424) setting_slider_pane_t

0xdb16,	// (0x000219d6) slider_set_pane

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp2

0xbfcd,	// (0x0001fe8d) setting_slider_graphic_pane_g1

0xdb2c,	// (0x000219ec) setting_slider_graphic_pane_t1

0xdb3c,	// (0x000219fc) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002342b) setting_slider_graphic_pane_t

0xdb4c,	// (0x00021a0c) slider_set_pane_cp

0xbf63,	// (0x0001fe23) input_focus_pane_cp1

0x2f69,	// (0x00016e29) list_set_text_pane

0xbf59,	// (0x0001fe19) setting_text_pane_g1

0xbf63,	// (0x0001fe23) input_focus_pane_cp2

0xbf59,	// (0x0001fe19) setting_code_pane_g1

0xbfd6,	// (0x0001fe96) setting_code_pane_t1

0xbfe4,	// (0x0001fea4) set_text_pane_t1_ParamLimits

0xbfe4,	// (0x0001fea4) set_text_pane_t1

0xdea4,	// (0x00021d64) set_opt_bg_pane_g1

0xdeac,	// (0x00021d6c) set_opt_bg_pane_g2

0x2f41,	// (0x00016e01) set_opt_bg_pane_g3

0xdebc,	// (0x00021d7c) set_opt_bg_pane_g4

0xdec4,	// (0x00021d84) set_opt_bg_pane_g5

0xdecc,	// (0x00021d8c) set_opt_bg_pane_g6

0x2f4b,	// (0x00016e0b) set_opt_bg_pane_g7

0x2f55,	// (0x00016e15) set_opt_bg_pane_g8

0x2f5f,	// (0x00016e1f) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0002382f) set_opt_bg_pane_g

0x2f34,	// (0x00016df4) slider_set_pane_g1

0xeb3f,	// (0x000229ff) slider_set_pane_g2

0x0006,

0xf960,	// (0x00023820) slider_set_pane_g

0xeac7,	// (0x00022987) volume_set_pane_g1

0xead1,	// (0x00022991) volume_set_pane_g2

0xeadb,	// (0x0002299b) volume_set_pane_g3

0xeae5,	// (0x000229a5) volume_set_pane_g4

0xeaef,	// (0x000229af) volume_set_pane_g5

0xeaf9,	// (0x000229b9) volume_set_pane_g6

0xeb03,	// (0x000229c3) volume_set_pane_g7

0xeb0d,	// (0x000229cd) volume_set_pane_g8

0xeb17,	// (0x000229d7) volume_set_pane_g9

0xeb21,	// (0x000229e1) volume_set_pane_g10

0x0009,

0xf938,	// (0x000237f8) volume_set_pane_g

0x9f48,	// (0x0001de08) indicator_pane_ParamLimits

0x9f48,	// (0x0001de08) indicator_pane

0x9f74,	// (0x0001de34) main_idle_pane_g2_ParamLimits

0x9f74,	// (0x0001de34) main_idle_pane_g2

0x9fac,	// (0x0001de6c) main_pane_idle_g1_ParamLimits

0x9fac,	// (0x0001de6c) main_pane_idle_g1

0xbffe,	// (0x0001febe) popup_clock_digital_analogue_window_ParamLimits

0xbffe,	// (0x0001febe) popup_clock_digital_analogue_window

0x9fda,	// (0x0001de9a) soft_indicator_pane_ParamLimits

0x9fda,	// (0x0001de9a) soft_indicator_pane

0x9ff6,	// (0x0001deb6) wallpaper_pane_ParamLimits

0x9ff6,	// (0x0001deb6) wallpaper_pane

0xbf59,	// (0x0001fe19) wallpaper_pane_g1

0xa008,	// (0x0001dec8) indicator_pane_g1_ParamLimits

0xa008,	// (0x0001dec8) indicator_pane_g1

0x33fb,	// (0x000172bb) navi_navi_icon_text_pane_srt_g1

0xc02c,	// (0x0001feec) soft_indicator_pane_t1

0xc046,	// (0x0001ff06) aid_ps_area_pane

0xa021,	// (0x0001dee1) aid_ps_clock_pane

0xc057,	// (0x0001ff17) aid_ps_indicator_pane

0xc063,	// (0x0001ff23) indicator_ps_pane_ParamLimits

0xc063,	// (0x0001ff23) indicator_ps_pane

0xc072,	// (0x0001ff32) power_save_pane_g1_ParamLimits

0xc072,	// (0x0001ff32) power_save_pane_g1

0xc07e,	// (0x0001ff3e) power_save_pane_g2_ParamLimits

0xc07e,	// (0x0001ff3e) power_save_pane_g2

0xd887,	// (0x00021747) aid_navinavi_width_pane

0xc046,	// (0x0001ff06) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00023430) power_save_pane_g_ParamLimits

0xf570,	// (0x00023430) power_save_pane_g

0xc08c,	// (0x0001ff4c) power_save_pane_t1_ParamLimits

0xc08c,	// (0x0001ff4c) power_save_pane_t1

0xa021,	// (0x0001dee1) aid_ps_clock_pane_ParamLimits

0xc057,	// (0x0001ff17) aid_ps_indicator_pane_ParamLimits

0xc09e,	// (0x0001ff5e) power_save_pane_t4_ParamLimits

0xc09e,	// (0x0001ff5e) power_save_pane_t4

0x0001,

0xf575,	// (0x00023435) power_save_pane_t_ParamLimits

0xf575,	// (0x00023435) power_save_pane_t

0xc0c8,	// (0x0001ff88) power_save_t3_ParamLimits

0xc0c8,	// (0x0001ff88) power_save_t3

0xc0b3,	// (0x0001ff73) power_save_t2_ParamLimits

0xc0b3,	// (0x0001ff73) power_save_t2

0xc0dd,	// (0x0001ff9d) indicator_ps_pane_g1

0xa02f,	// (0x0001deef) ai_gene_pane_ParamLimits

0xa02f,	// (0x0001deef) ai_gene_pane

0xa046,	// (0x0001df06) ai_links_pane_ParamLimits

0xa046,	// (0x0001df06) ai_links_pane

0xa05e,	// (0x0001df1e) indicator_pane_cp1_ParamLimits

0xa05e,	// (0x0001df1e) indicator_pane_cp1

0xa06d,	// (0x0001df2d) main_pane_idle_g1_cp_ParamLimits

0xa06d,	// (0x0001df2d) main_pane_idle_g1_cp

0xc0e6,	// (0x0001ffa6) popup_ai_links_title_window

0xa085,	// (0x0001df45) soft_indicator_pane_cp1_ParamLimits

0xa085,	// (0x0001df45) soft_indicator_pane_cp1

0x2cdf,	// (0x00016b9f) ai_links_pane_g1

0x2ce8,	// (0x00016ba8) grid_ai_links_pane

0xb300,	// (0x0001f1c0) ai_gene_pane_1

0x2ccd,	// (0x00016b8d) ai_gene_pane_2

0x2cd6,	// (0x00016b96) list_highlight_pane_cp4

0xb2dc,	// (0x0001f19c) cell_ai_link_pane_ParamLimits

0xb2dc,	// (0x0001f19c) cell_ai_link_pane

0x2c9c,	// (0x00016b5c) cell_ai_link_pane_g1

0xc2b4,	// (0x00020174) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x000237d3) cell_ai_link_pane_g

0xbf63,	// (0x0001fe23) grid_highlight_cp2

0xbf63,	// (0x0001fe23) bg_popup_sub_pane_cp1

0xc0fd,	// (0x0001ffbd) popup_ai_links_title_window_t1

0x2be8,	// (0x00016aa8) ai_gene_pane_1_g1_ParamLimits

0x2be8,	// (0x00016aa8) ai_gene_pane_1_g1

0x2bf4,	// (0x00016ab4) ai_gene_pane_1_g2_ParamLimits

0x2bf4,	// (0x00016ab4) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x000237c9) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x000237c9) ai_gene_pane_1_g

0x2c01,	// (0x00016ac1) ai_gene_pane_1_t1_ParamLimits

0x2c01,	// (0x00016ac1) ai_gene_pane_1_t1

0x2c35,	// (0x00016af5) grid_ai_soft_ind_pane

0x2bd3,	// (0x00016a93) ai_gene_pane_2_t1_ParamLimits

0x2bd3,	// (0x00016a93) ai_gene_pane_2_t1

0xa099,	// (0x0001df59) main_pane_empty_t1_ParamLimits

0xa099,	// (0x0001df59) main_pane_empty_t1

0xa0b1,	// (0x0001df71) main_pane_empty_t2_ParamLimits

0xa0b1,	// (0x0001df71) main_pane_empty_t2

0xa0c6,	// (0x0001df86) main_pane_empty_t3_ParamLimits

0xa0c6,	// (0x0001df86) main_pane_empty_t3

0xa0d8,	// (0x0001df98) main_pane_empty_t4_ParamLimits

0xa0d8,	// (0x0001df98) main_pane_empty_t4

0xa0ea,	// (0x0001dfaa) main_pane_empty_t5_ParamLimits

0xa0ea,	// (0x0001dfaa) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002343a) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002343a) main_pane_empty_t

0xdf24,	// (0x00021de4) bg_popup_window_pane_ParamLimits

0xdf24,	// (0x00021de4) bg_popup_window_pane

0x292f,	// (0x000167ef) find_popup_pane_cp2_ParamLimits

0x292f,	// (0x000167ef) find_popup_pane_cp2

0x293b,	// (0x000167fb) heading_pane_ParamLimits

0x293b,	// (0x000167fb) heading_pane

0xbf63,	// (0x0001fe23) bg_popup_sub_pane

0xb1bf,	// (0x0001f07f) bg_popup_window_pane_g1_ParamLimits

0xb1bf,	// (0x0001f07f) bg_popup_window_pane_g1

0xb1ce,	// (0x0001f08e) bg_popup_window_pane_g2_ParamLimits

0xb1ce,	// (0x0001f08e) bg_popup_window_pane_g2

0xb1da,	// (0x0001f09a) bg_popup_window_pane_g3_ParamLimits

0xb1da,	// (0x0001f09a) bg_popup_window_pane_g3

0xb1e6,	// (0x0001f0a6) bg_popup_window_pane_g4_ParamLimits

0xb1e6,	// (0x0001f0a6) bg_popup_window_pane_g4

0xb1f5,	// (0x0001f0b5) bg_popup_window_pane_g5_ParamLimits

0xb1f5,	// (0x0001f0b5) bg_popup_window_pane_g5

0xb205,	// (0x0001f0c5) bg_popup_window_pane_g6_ParamLimits

0xb205,	// (0x0001f0c5) bg_popup_window_pane_g6

0xb211,	// (0x0001f0d1) bg_popup_window_pane_g7_ParamLimits

0xb211,	// (0x0001f0d1) bg_popup_window_pane_g7

0xb220,	// (0x0001f0e0) bg_popup_window_pane_g8_ParamLimits

0xb220,	// (0x0001f0e0) bg_popup_window_pane_g8

0xb22f,	// (0x0001f0ef) bg_popup_window_pane_g9_ParamLimits

0xb22f,	// (0x0001f0ef) bg_popup_window_pane_g9

0x2915,	// (0x000167d5) bg_popup_window_pane_g10_ParamLimits

0x2915,	// (0x000167d5) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x00023791) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x00023791) bg_popup_window_pane_g

0x283e,	// (0x000166fe) bg_popup_heading_pane_ParamLimits

0x283e,	// (0x000166fe) bg_popup_heading_pane

0xebc7,	// (0x00022a87) tabs_4_passive_pane_cp_srt_ParamLimits

0xebc7,	// (0x00022a87) tabs_4_passive_pane_cp_srt

0xebd9,	// (0x00022a99) tabs_4_passive_pane_srt_ParamLimits

0x2852,	// (0x00016712) heading_pane_g2

0xebd9,	// (0x00022a99) tabs_4_passive_pane_srt

0x1bbc,	// (0x00015a7c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1bbc,	// (0x00015a7c) bg_passive_tab_pane_cp3_srt

0x285a,	// (0x0001671a) heading_pane_t1_ParamLimits

0x285a,	// (0x0001671a) heading_pane_t1

0x2871,	// (0x00016731) heading_pane_t2_ParamLimits

0x2871,	// (0x00016731) heading_pane_t2

0x0001,

0xf8cc,	// (0x0002378c) heading_pane_t_ParamLimits

0xf8cc,	// (0x0002378c) heading_pane_t

0x2369,	// (0x00016229) bg_popup_heading_pane_g1

0x2418,	// (0x000162d8) bg_popup_heading_pane_g2

0x2422,	// (0x000162e2) bg_popup_heading_pane_g3

0x242c,	// (0x000162ec) bg_popup_heading_pane_g4

0x2436,	// (0x000162f6) bg_popup_heading_pane_g5

0x2440,	// (0x00016300) bg_popup_heading_pane_g6

0x2448,	// (0x00016308) bg_popup_heading_pane_g7

0x2450,	// (0x00016310) bg_popup_heading_pane_g8

0x245a,	// (0x0001631a) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x00023748) bg_popup_heading_pane_g

0x1a96,	// (0x00015956) bg_popup_sub_pane_g1

0x1aa6,	// (0x00015966) bg_popup_sub_pane_g2

0x1a9e,	// (0x0001595e) bg_popup_sub_pane_g3

0x1ab6,	// (0x00015976) bg_popup_sub_pane_g4

0x1aae,	// (0x0001596e) bg_popup_sub_pane_g5

0x1abe,	// (0x0001597e) bg_popup_sub_pane_g6

0x1ac6,	// (0x00015986) bg_popup_sub_pane_g7

0x1ad6,	// (0x00015996) bg_popup_sub_pane_g8

0x1ace,	// (0x0001598e) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x00023722) bg_popup_sub_pane_g

0xbfb1,	// (0x0001fe71) bg_popup_window_pane_cp5_ParamLimits

0xbfb1,	// (0x0001fe71) bg_popup_window_pane_cp5

0xc11a,	// (0x0001ffda) popup_note_window_g1_ParamLimits

0xc11a,	// (0x0001ffda) popup_note_window_g1

0xc126,	// (0x0001ffe6) popup_note_window_t1_ParamLimits

0xc126,	// (0x0001ffe6) popup_note_window_t1

0xc13c,	// (0x0001fffc) popup_note_window_t2_ParamLimits

0xc13c,	// (0x0001fffc) popup_note_window_t2

0xc152,	// (0x00020012) popup_note_window_t3_ParamLimits

0xc152,	// (0x00020012) popup_note_window_t3

0xc168,	// (0x00020028) popup_note_window_t4_ParamLimits

0xc168,	// (0x00020028) popup_note_window_t4

0xc190,	// (0x00020050) popup_note_window_t5_ParamLimits

0xc190,	// (0x00020050) popup_note_window_t5

0x0004,

0xf585,	// (0x00023445) popup_note_window_t_ParamLimits

0xf585,	// (0x00023445) popup_note_window_t

0xc1b4,	// (0x00020074) bg_popup_window_pane_cp6_ParamLimits

0xc1b4,	// (0x00020074) bg_popup_window_pane_cp6

0x22e5,	// (0x000161a5) popup_note_image_window_g1_ParamLimits

0x22e5,	// (0x000161a5) popup_note_image_window_g1

0x22f1,	// (0x000161b1) popup_note_image_window_g2_ParamLimits

0x22f1,	// (0x000161b1) popup_note_image_window_g2

0x0001,

0xf856,	// (0x00023716) popup_note_image_window_g_ParamLimits

0xf856,	// (0x00023716) popup_note_image_window_g

0x230a,	// (0x000161ca) popup_note_image_window_t1_ParamLimits

0x230a,	// (0x000161ca) popup_note_image_window_t1

0x2323,	// (0x000161e3) popup_note_image_window_t2_ParamLimits

0x2323,	// (0x000161e3) popup_note_image_window_t2

0x233c,	// (0x000161fc) popup_note_image_window_t3_ParamLimits

0x233c,	// (0x000161fc) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0002371b) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0002371b) popup_note_image_window_t

0x21a5,	// (0x00016065) bg_popup_window_pane_cp7_ParamLimits

0x21a5,	// (0x00016065) bg_popup_window_pane_cp7

0x21d5,	// (0x00016095) popup_note_wait_window_g1_ParamLimits

0x21d5,	// (0x00016095) popup_note_wait_window_g1

0x21e1,	// (0x000160a1) popup_note_wait_window_g2_ParamLimits

0x21e1,	// (0x000160a1) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x00023704) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x00023704) popup_note_wait_window_g

0x21f9,	// (0x000160b9) popup_note_wait_window_t1_ParamLimits

0x21f9,	// (0x000160b9) popup_note_wait_window_t1

0x2220,	// (0x000160e0) popup_note_wait_window_t2_ParamLimits

0x2220,	// (0x000160e0) popup_note_wait_window_t2

0x223e,	// (0x000160fe) popup_note_wait_window_t3_ParamLimits

0x223e,	// (0x000160fe) popup_note_wait_window_t3

0x2251,	// (0x00016111) popup_note_wait_window_t4_ParamLimits

0x2251,	// (0x00016111) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0002370b) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0002370b) popup_note_wait_window_t

0x2276,	// (0x00016136) wait_bar_pane_ParamLimits

0x2276,	// (0x00016136) wait_bar_pane

0xbf63,	// (0x0001fe23) wait_anim_pane

0xbf63,	// (0x0001fe23) wait_border_pane

0xbf59,	// (0x0001fe19) wait_anim_pane_g1

0xbf59,	// (0x0001fe19) wait_anim_pane_g2

0x0001,

0xf704,	// (0x000235c4) wait_anim_pane_g

0x2149,	// (0x00016009) wait_border_pane_g1

0x2154,	// (0x00016014) wait_border_pane_g2

0x215d,	// (0x0001601d) wait_border_pane_g3

0x0002,

0xf83d,	// (0x000236fd) wait_border_pane_g

0x1fb3,	// (0x00015e73) bg_popup_window_pane_cp16_ParamLimits

0x1fb3,	// (0x00015e73) bg_popup_window_pane_cp16

0x20b3,	// (0x00015f73) indicator_popup_pane_cp4_ParamLimits

0x20b3,	// (0x00015f73) indicator_popup_pane_cp4

0x20c7,	// (0x00015f87) popup_query_data_window_t1_ParamLimits

0x20c7,	// (0x00015f87) popup_query_data_window_t1

0x20d9,	// (0x00015f99) popup_query_data_window_t2_ParamLimits

0x20d9,	// (0x00015f99) popup_query_data_window_t2

0x20f2,	// (0x00015fb2) popup_query_data_window_t3_ParamLimits

0x20f2,	// (0x00015fb2) popup_query_data_window_t3

0x0002,

0xf836,	// (0x000236f6) popup_query_data_window_t_ParamLimits

0xf836,	// (0x000236f6) popup_query_data_window_t

0x210c,	// (0x00015fcc) query_popup_data_pane_ParamLimits

0x210c,	// (0x00015fcc) query_popup_data_pane

0x2120,	// (0x00015fe0) query_popup_data_pane_cp1_ParamLimits

0x2120,	// (0x00015fe0) query_popup_data_pane_cp1

0x1fb3,	// (0x00015e73) bg_popup_window_pane_cp10_ParamLimits

0x1fb3,	// (0x00015e73) bg_popup_window_pane_cp10

0x1fe5,	// (0x00015ea5) indicator_popup_pane_ParamLimits

0x1fe5,	// (0x00015ea5) indicator_popup_pane

0x2007,	// (0x00015ec7) popup_query_code_window_t1_ParamLimits

0x2007,	// (0x00015ec7) popup_query_code_window_t1

0x2021,	// (0x00015ee1) popup_query_code_window_t2_ParamLimits

0x2021,	// (0x00015ee1) popup_query_code_window_t2

0x206a,	// (0x00015f2a) popup_query_code_window_t3_ParamLimits

0x206a,	// (0x00015f2a) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x000236ef) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x000236ef) popup_query_code_window_t

0x2099,	// (0x00015f59) query_popup_pane_ParamLimits

0x2099,	// (0x00015f59) query_popup_pane

0xc1b4,	// (0x00020074) bg_popup_window_pane_cp15_ParamLimits

0xc1b4,	// (0x00020074) bg_popup_window_pane_cp15

0xc1d4,	// (0x00020094) indicator_popup_pane_cp1_ParamLimits

0xc1d4,	// (0x00020094) indicator_popup_pane_cp1

0xc1e7,	// (0x000200a7) indicator_popup_pane_cp2_ParamLimits

0xc1e7,	// (0x000200a7) indicator_popup_pane_cp2

0xc202,	// (0x000200c2) popup_query_data_code_window_g1_ParamLimits

0xc202,	// (0x000200c2) popup_query_data_code_window_g1

0xc215,	// (0x000200d5) popup_query_data_code_window_t1_ParamLimits

0xc215,	// (0x000200d5) popup_query_data_code_window_t1

0xc227,	// (0x000200e7) popup_query_data_code_window_t2_ParamLimits

0xc227,	// (0x000200e7) popup_query_data_code_window_t2

0xc239,	// (0x000200f9) popup_query_data_code_window_t3_ParamLimits

0xc239,	// (0x000200f9) popup_query_data_code_window_t3

0xc24f,	// (0x0002010f) popup_query_data_code_window_t4_ParamLimits

0xc24f,	// (0x0002010f) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00023450) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00023450) popup_query_data_code_window_t

0xea1b,	// (0x000228db) list_single_midp_graphic_pane_g3

0xc269,	// (0x00020129) query_popup_data_pane_cp2_ParamLimits

0xc27c,	// (0x0002013c) query_popup_pane_cp2_ParamLimits

0xc27c,	// (0x0002013c) query_popup_pane_cp2

0xbf63,	// (0x0001fe23) bg_popup_window_pane_cp11

0x1fab,	// (0x00015e6b) heading_pane_cp5

0xc312,	// (0x000201d2) listscroll_popup_info_pane

0xbf63,	// (0x0001fe23) input_focus_pane_cp3

0xc297,	// (0x00020157) query_popup_pane_t1

0xc2a5,	// (0x00020165) list_popup_info_pane_ParamLimits

0xc2a5,	// (0x00020165) list_popup_info_pane

0xc2b4,	// (0x00020174) listscroll_popup_info_pane_g1

0xc2bc,	// (0x0002017c) scroll_pane_cp7

0xc2c6,	// (0x00020186) popup_info_list_pane_t1_ParamLimits

0xc2c6,	// (0x00020186) popup_info_list_pane_t1

0xc2e0,	// (0x000201a0) popup_info_list_pane_t2_ParamLimits

0xc2e0,	// (0x000201a0) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00023459) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00023459) popup_info_list_pane_t

0xbf63,	// (0x0001fe23) bg_popup_window_pane_cp12

0x3415,	// (0x000172d5) find_popup_pane

0xbfbf,	// (0x0001fe7f) bg_popup_window_pane_cp3

0xc2fa,	// (0x000201ba) heading_pane_cp3

0xc306,	// (0x000201c6) listscroll_popup_graphic_pane

0xbf63,	// (0x0001fe23) bg_popup_window_pane_cp4

0xa14c,	// (0x0001e00c) heading_pane_cp4

0xc312,	// (0x000201d2) listscroll_popup_colour_pane

0xa156,	// (0x0001e016) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa156,	// (0x0001e016) cell_large_graphic_colour_none_popup_pane

0xa16a,	// (0x0001e02a) grid_large_graphic_colour_popup_pane_ParamLimits

0xa16a,	// (0x0001e02a) grid_large_graphic_colour_popup_pane

0xa18e,	// (0x0001e04e) listscroll_popup_colour_pane_g1_ParamLimits

0xa18e,	// (0x0001e04e) listscroll_popup_colour_pane_g1

0xa1a5,	// (0x0001e065) listscroll_popup_colour_pane_g2_ParamLimits

0xa1a5,	// (0x0001e065) listscroll_popup_colour_pane_g2

0xa1bc,	// (0x0001e07c) listscroll_popup_colour_pane_g3_ParamLimits

0xa1bc,	// (0x0001e07c) listscroll_popup_colour_pane_g3

0xa1cc,	// (0x0001e08c) listscroll_popup_colour_pane_g4_ParamLimits

0xa1cc,	// (0x0001e08c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002345e) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002345e) listscroll_popup_colour_pane_g

0xc31a,	// (0x000201da) scroll_pane_cp6_ParamLimits

0xc31a,	// (0x000201da) scroll_pane_cp6

0xa1dc,	// (0x0001e09c) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1dc,	// (0x0001e09c) cell_large_graphic_colour_popup_pane

0xc32c,	// (0x000201ec) cell_large_graphic_colour_none_popup_pane_t1

0xbf63,	// (0x0001fe23) grid_highlight_pane_cp5

0xc33b,	// (0x000201fb) cell_large_graphic_colour_popup_pane_g1

0xc343,	// (0x00020203) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00023467) cell_large_graphic_colour_popup_pane_g

0xc34b,	// (0x0002020b) cell_large_graphic_colour_popup_pane_g2_copy1

0xc354,	// (0x00020214) grid_highlight_pane_cp4

0xc35c,	// (0x0002021c) bg_popup_window_pane_cp8_ParamLimits

0xc35c,	// (0x0002021c) bg_popup_window_pane_cp8

0xc377,	// (0x00020237) popup_snote_single_text_window_g1_ParamLimits

0xc377,	// (0x00020237) popup_snote_single_text_window_g1

0xc389,	// (0x00020249) popup_snote_single_text_window_t1_ParamLimits

0xc389,	// (0x00020249) popup_snote_single_text_window_t1

0xc39c,	// (0x0002025c) popup_snote_single_text_window_t2_ParamLimits

0xc39c,	// (0x0002025c) popup_snote_single_text_window_t2

0xc3af,	// (0x0002026f) popup_snote_single_text_window_t3_ParamLimits

0xc3af,	// (0x0002026f) popup_snote_single_text_window_t3

0xdb54,	// (0x00021a14) popup_snote_single_text_window_t4_ParamLimits

0xdb54,	// (0x00021a14) popup_snote_single_text_window_t4

0xdb88,	// (0x00021a48) popup_snote_single_text_window_t5_ParamLimits

0xdb88,	// (0x00021a48) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002346c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002346c) popup_snote_single_text_window_t

0xdbb7,	// (0x00021a77) bg_popup_window_pane_cp9_ParamLimits

0xdbb7,	// (0x00021a77) bg_popup_window_pane_cp9

0xc377,	// (0x00020237) popup_snote_single_graphic_window_g1_ParamLimits

0xc377,	// (0x00020237) popup_snote_single_graphic_window_g1

0xdbc5,	// (0x00021a85) popup_snote_single_graphic_window_g2_ParamLimits

0xdbc5,	// (0x00021a85) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00023477) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00023477) popup_snote_single_graphic_window_g

0xdbd1,	// (0x00021a91) popup_snote_single_graphic_window_t1_ParamLimits

0xdbd1,	// (0x00021a91) popup_snote_single_graphic_window_t1

0xdbe4,	// (0x00021aa4) popup_snote_single_graphic_window_t2_ParamLimits

0xdbe4,	// (0x00021aa4) popup_snote_single_graphic_window_t2

0xdbf7,	// (0x00021ab7) popup_snote_single_graphic_window_t3_ParamLimits

0xdbf7,	// (0x00021ab7) popup_snote_single_graphic_window_t3

0xdc30,	// (0x00021af0) popup_snote_single_graphic_window_t4_ParamLimits

0xdc30,	// (0x00021af0) popup_snote_single_graphic_window_t4

0xdc64,	// (0x00021b24) popup_snote_single_graphic_window_t5_ParamLimits

0xdc64,	// (0x00021b24) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002347c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002347c) popup_snote_single_graphic_window_t

0x3353,	// (0x00017213) grid_graphic_popup_pane_ParamLimits

0x3353,	// (0x00017213) grid_graphic_popup_pane

0x3381,	// (0x00017241) listscroll_popup_graphic_pane_g1_ParamLimits

0x3381,	// (0x00017241) listscroll_popup_graphic_pane_g1

0xb66d,	// (0x0001f52d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb66d,	// (0x0001f52d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0002386c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0002386c) listscroll_popup_graphic_pane_g

0x33a9,	// (0x00017269) scroll_pane_cp5

0xb62c,	// (0x0001f4ec) cell_graphic_popup_pane_ParamLimits

0xb62c,	// (0x0001f4ec) cell_graphic_popup_pane

0x32dc,	// (0x0001719c) cell_graphic_popup_pane_g1

0x32e4,	// (0x000171a4) cell_graphic_popup_pane_g2

0xc34b,	// (0x0002020b) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x00023865) cell_graphic_popup_pane_g

0x32ed,	// (0x000171ad) cell_graphic_popup_pane_t2

0xc354,	// (0x00020214) grid_highlight_pane_cp3

0xdca5,	// (0x00021b65) list_gen_pane_ParamLimits

0xdca5,	// (0x00021b65) list_gen_pane

0xdccd,	// (0x00021b8d) scroll_pane

0xb5e7,	// (0x0001f4a7) bg_list_pane_g1_ParamLimits

0xb5e7,	// (0x0001f4a7) bg_list_pane_g1

0x3259,	// (0x00017119) bg_list_pane_g2_ParamLimits

0x3259,	// (0x00017119) bg_list_pane_g2

0x326c,	// (0x0001712c) bg_list_pane_g3_ParamLimits

0x326c,	// (0x0001712c) bg_list_pane_g3

0x327e,	// (0x0001713e) bg_list_pane_g4_ParamLimits

0x327e,	// (0x0001713e) bg_list_pane_g4

0xb602,	// (0x0001f4c2) bg_list_pane_g5_ParamLimits

0xb602,	// (0x0001f4c2) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0002385a) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0002385a) bg_list_pane_g

0xb581,	// (0x0001f441) list_double2_graphic_large_graphic_pane_ParamLimits

0xb581,	// (0x0001f441) list_double2_graphic_large_graphic_pane

0xb581,	// (0x0001f441) list_double2_graphic_pane_ParamLimits

0xb581,	// (0x0001f441) list_double2_graphic_pane

0xb581,	// (0x0001f441) list_double2_large_graphic_pane_ParamLimits

0xb581,	// (0x0001f441) list_double2_large_graphic_pane

0xb581,	// (0x0001f441) list_double2_pane_ParamLimits

0xb581,	// (0x0001f441) list_double2_pane

0xb581,	// (0x0001f441) list_double_graphic_heading_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_graphic_heading_pane

0xb581,	// (0x0001f441) list_double_graphic_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_graphic_pane

0xb581,	// (0x0001f441) list_double_heading_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_heading_pane

0xb581,	// (0x0001f441) list_double_large_graphic_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_large_graphic_pane

0xb581,	// (0x0001f441) list_double_number_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_number_pane

0xb581,	// (0x0001f441) list_double_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_pane

0xb581,	// (0x0001f441) list_double_time_pane_ParamLimits

0xb581,	// (0x0001f441) list_double_time_pane

0xb581,	// (0x0001f441) list_setting_number_pane_ParamLimits

0xb581,	// (0x0001f441) list_setting_number_pane

0xb581,	// (0x0001f441) list_setting_pane_ParamLimits

0xb581,	// (0x0001f441) list_setting_pane

0xb595,	// (0x0001f455) list_single_2graphic_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_2graphic_pane

0xb595,	// (0x0001f455) list_single_graphic_heading_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_graphic_heading_pane

0xb595,	// (0x0001f455) list_single_graphic_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_graphic_pane

0xb595,	// (0x0001f455) list_single_heading_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_heading_pane

0xb595,	// (0x0001f455) list_single_large_graphic_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_large_graphic_pane

0xb595,	// (0x0001f455) list_single_number_heading_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_number_heading_pane

0xb595,	// (0x0001f455) list_single_number_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_number_pane

0xb595,	// (0x0001f455) list_single_pane_ParamLimits

0xb595,	// (0x0001f455) list_single_pane

0xbf63,	// (0x0001fe23) list_highlight_pane_cp1

0x1159,	// (0x00015019) list_single_pane_g1_ParamLimits

0x1159,	// (0x00015019) list_single_pane_g1

0x1a18,	// (0x000158d8) list_single_pane_g2_ParamLimits

0x1a18,	// (0x000158d8) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002348e) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002348e) list_single_pane_g

0x3a13,	// (0x000178d3) list_single_pane_t1_ParamLimits

0x3a13,	// (0x000178d3) list_single_pane_t1

0x1159,	// (0x00015019) list_single_number_pane_g1_ParamLimits

0x1159,	// (0x00015019) list_single_number_pane_g1

0x1a18,	// (0x000158d8) list_single_number_pane_g2_ParamLimits

0x1a18,	// (0x000158d8) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002348e) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002348e) list_single_number_pane_g

0x1a24,	// (0x000158e4) list_single_number_pane_t1_ParamLimits

0x1a24,	// (0x000158e4) list_single_number_pane_t1

0xb39f,	// (0x0001f25f) list_single_number_pane_t2_ParamLimits

0xb39f,	// (0x0001f25f) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0002381b) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0002381b) list_single_number_pane_t

0x4f0d,	// (0x00018dcd) list_single_graphic_pane_g1_ParamLimits

0x4f0d,	// (0x00018dcd) list_single_graphic_pane_g1

0x1159,	// (0x00015019) list_single_graphic_pane_g2_ParamLimits

0x1159,	// (0x00015019) list_single_graphic_pane_g2

0x1a18,	// (0x000158d8) list_single_graphic_pane_g3_ParamLimits

0x1a18,	// (0x000158d8) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00023487) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00023487) list_single_graphic_pane_g

0xa207,	// (0x0001e0c7) list_single_graphic_pane_t1_ParamLimits

0xa207,	// (0x0001e0c7) list_single_graphic_pane_t1

0x1159,	// (0x00015019) list_single_heading_pane_g1_ParamLimits

0x1159,	// (0x00015019) list_single_heading_pane_g1

0x1a18,	// (0x000158d8) list_single_heading_pane_g2_ParamLimits

0x1a18,	// (0x000158d8) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002348e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002348e) list_single_heading_pane_g

0x3a35,	// (0x000178f5) list_single_heading_pane_t1_ParamLimits

0x3a35,	// (0x000178f5) list_single_heading_pane_t1

0xa21d,	// (0x0001e0dd) list_single_heading_pane_t2_ParamLimits

0xa21d,	// (0x0001e0dd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00023493) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00023493) list_single_heading_pane_t

0x1159,	// (0x00015019) list_single_number_heading_pane_g1_ParamLimits

0x1159,	// (0x00015019) list_single_number_heading_pane_g1

0x1a18,	// (0x000158d8) list_single_number_heading_pane_g2_ParamLimits

0x1a18,	// (0x000158d8) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002348e) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002348e) list_single_number_heading_pane_g

0x3a35,	// (0x000178f5) list_single_number_heading_pane_t1_ParamLimits

0x3a35,	// (0x000178f5) list_single_number_heading_pane_t1

0xa22f,	// (0x0001e0ef) list_single_number_heading_pane_t2_ParamLimits

0xa22f,	// (0x0001e0ef) list_single_number_heading_pane_t2

0x39ef,	// (0x000178af) list_single_number_heading_pane_t3_ParamLimits

0x39ef,	// (0x000178af) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00023498) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00023498) list_single_number_heading_pane_t

0x1a0c,	// (0x000158cc) list_single_graphic_heading_pane_g1_ParamLimits

0x1a0c,	// (0x000158cc) list_single_graphic_heading_pane_g1

0xa241,	// (0x0001e101) list_single_graphic_heading_pane_g4_ParamLimits

0xa241,	// (0x0001e101) list_single_graphic_heading_pane_g4

0x1a18,	// (0x000158d8) list_single_graphic_heading_pane_g5_ParamLimits

0x1a18,	// (0x000158d8) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002349f) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002349f) list_single_graphic_heading_pane_g

0x3a35,	// (0x000178f5) list_single_graphic_heading_pane_t1_ParamLimits

0x3a35,	// (0x000178f5) list_single_graphic_heading_pane_t1

0xa252,	// (0x0001e112) list_single_graphic_heading_pane_t2_ParamLimits

0xa252,	// (0x0001e112) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000234a6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000234a6) list_single_graphic_heading_pane_t

0x3a29,	// (0x000178e9) list_single_large_graphic_pane_g1_ParamLimits

0x3a29,	// (0x000178e9) list_single_large_graphic_pane_g1

0x1159,	// (0x00015019) list_single_large_graphic_pane_g2_ParamLimits

0x1159,	// (0x00015019) list_single_large_graphic_pane_g2

0x1a18,	// (0x000158d8) list_single_large_graphic_pane_g3_ParamLimits

0x1a18,	// (0x000158d8) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000234ab) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000234ab) list_single_large_graphic_pane_g

0x2154,	// (0x00016014) wait_border_pane_g2_copy1

0xa264,	// (0x0001e124) list_single_large_graphic_pane_g4_cp2

0x3a35,	// (0x000178f5) list_single_large_graphic_pane_t1_ParamLimits

0x3a35,	// (0x000178f5) list_single_large_graphic_pane_t1

0xa26c,	// (0x0001e12c) list_double_pane_g1_ParamLimits

0xa26c,	// (0x0001e12c) list_double_pane_g1

0xa278,	// (0x0001e138) list_double_pane_g2_ParamLimits

0xa278,	// (0x0001e138) list_double_pane_g2

0x0001,

0xf5f2,	// (0x000234b2) list_double_pane_g_ParamLimits

0xf5f2,	// (0x000234b2) list_double_pane_g

0xa284,	// (0x0001e144) list_double_pane_t1_ParamLimits

0xa284,	// (0x0001e144) list_double_pane_t1

0xa29a,	// (0x0001e15a) list_double_pane_t2_ParamLimits

0xa29a,	// (0x0001e15a) list_double_pane_t2

0x0001,

0xf5f7,	// (0x000234b7) list_double_pane_t_ParamLimits

0xf5f7,	// (0x000234b7) list_double_pane_t

0xa2ac,	// (0x0001e16c) list_double2_pane_g1_ParamLimits

0xa2ac,	// (0x0001e16c) list_double2_pane_g1

0xa2bd,	// (0x0001e17d) list_double2_pane_g2_ParamLimits

0xa2bd,	// (0x0001e17d) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x000234bc) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x000234bc) list_double2_pane_g

0xa2c9,	// (0x0001e189) list_double2_pane_t1_ParamLimits

0xa2c9,	// (0x0001e189) list_double2_pane_t1

0xa2df,	// (0x0001e19f) list_double2_pane_t2_ParamLimits

0xa2df,	// (0x0001e19f) list_double2_pane_t2

0x0001,

0xf601,	// (0x000234c1) list_double2_pane_t_ParamLimits

0xf601,	// (0x000234c1) list_double2_pane_t

0xa26c,	// (0x0001e12c) list_double_number_pane_g1_ParamLimits

0xa26c,	// (0x0001e12c) list_double_number_pane_g1

0xa278,	// (0x0001e138) list_double_number_pane_g2_ParamLimits

0xa278,	// (0x0001e138) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x000234b2) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x000234b2) list_double_number_pane_g

0xa2f1,	// (0x0001e1b1) list_double_number_pane_t1_ParamLimits

0xa2f1,	// (0x0001e1b1) list_double_number_pane_t1

0xa303,	// (0x0001e1c3) list_double_number_pane_t2_ParamLimits

0xa303,	// (0x0001e1c3) list_double_number_pane_t2

0xa319,	// (0x0001e1d9) list_double_number_pane_t3_ParamLimits

0xa319,	// (0x0001e1d9) list_double_number_pane_t3

0x0002,

0xf606,	// (0x000234c6) list_double_number_pane_t_ParamLimits

0xf606,	// (0x000234c6) list_double_number_pane_t

0xa32b,	// (0x0001e1eb) list_double_graphic_pane_g1_ParamLimits

0xa32b,	// (0x0001e1eb) list_double_graphic_pane_g1

0xa337,	// (0x0001e1f7) list_double_graphic_pane_g2_ParamLimits

0xa337,	// (0x0001e1f7) list_double_graphic_pane_g2

0xa346,	// (0x0001e206) list_double_graphic_pane_g3_ParamLimits

0xa346,	// (0x0001e206) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x000234cd) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x000234cd) list_double_graphic_pane_g

0xa35e,	// (0x0001e21e) list_double_graphic_pane_t1_ParamLimits

0xa35e,	// (0x0001e21e) list_double_graphic_pane_t1

0xa374,	// (0x0001e234) list_double_graphic_pane_t2_ParamLimits

0xa374,	// (0x0001e234) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x000234d6) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x000234d6) list_double_graphic_pane_t

0x27d0,	// (0x00016690) list_double2_graphic_pane_g1_ParamLimits

0x27d0,	// (0x00016690) list_double2_graphic_pane_g1

0x1006,	// (0x00014ec6) list_double2_graphic_pane_g2_ParamLimits

0x1006,	// (0x00014ec6) list_double2_graphic_pane_g2

0xa2bd,	// (0x0001e17d) list_double2_graphic_pane_g3_ParamLimits

0xa2bd,	// (0x0001e17d) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x000234db) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x000234db) list_double2_graphic_pane_g

0xa386,	// (0x0001e246) list_double2_graphic_pane_t1_ParamLimits

0xa386,	// (0x0001e246) list_double2_graphic_pane_t1

0xa39c,	// (0x0001e25c) list_double2_graphic_pane_t2_ParamLimits

0xa39c,	// (0x0001e25c) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x000234e2) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x000234e2) list_double2_graphic_pane_t

0xa3ae,	// (0x0001e26e) list_double_large_graphic_pane_g1_ParamLimits

0xa3ae,	// (0x0001e26e) list_double_large_graphic_pane_g1

0xa3d9,	// (0x0001e299) list_double_large_graphic_pane_g2_ParamLimits

0xa3d9,	// (0x0001e299) list_double_large_graphic_pane_g2

0xa278,	// (0x0001e138) list_double_large_graphic_pane_g3_ParamLimits

0xa278,	// (0x0001e138) list_double_large_graphic_pane_g3

0xa3ea,	// (0x0001e2aa) list_double_large_graphic_pane_g4_ParamLimits

0xa3ea,	// (0x0001e2aa) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x000234e7) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x000234e7) list_double_large_graphic_pane_g

0xa3fd,	// (0x0001e2bd) list_double_large_graphic_pane_t1_ParamLimits

0xa3fd,	// (0x0001e2bd) list_double_large_graphic_pane_t1

0xa416,	// (0x0001e2d6) list_double_large_graphic_pane_t2_ParamLimits

0xa416,	// (0x0001e2d6) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x000234f2) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x000234f2) list_double_large_graphic_pane_t

0xa428,	// (0x0001e2e8) list_double2_large_graphic_pane_g1_ParamLimits

0xa428,	// (0x0001e2e8) list_double2_large_graphic_pane_g1

0xa2ac,	// (0x0001e16c) list_double2_large_graphic_pane_g2_ParamLimits

0xa2ac,	// (0x0001e16c) list_double2_large_graphic_pane_g2

0xa2bd,	// (0x0001e17d) list_double2_large_graphic_pane_g3_ParamLimits

0xa2bd,	// (0x0001e17d) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x000234f7) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x000234f7) list_double2_large_graphic_pane_g

0xa434,	// (0x0001e2f4) list_double2_large_graphic_pane_t1_ParamLimits

0xa434,	// (0x0001e2f4) list_double2_large_graphic_pane_t1

0xa44a,	// (0x0001e30a) list_double2_large_graphic_pane_t2_ParamLimits

0xa44a,	// (0x0001e30a) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x000234fe) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x000234fe) list_double2_large_graphic_pane_t

0xa45c,	// (0x0001e31c) list_double_heading_pane_g1_ParamLimits

0xa45c,	// (0x0001e31c) list_double_heading_pane_g1

0xa46d,	// (0x0001e32d) list_double_heading_pane_g2_ParamLimits

0xa46d,	// (0x0001e32d) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00023503) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00023503) list_double_heading_pane_g

0xa479,	// (0x0001e339) list_double_heading_pane_t1_ParamLimits

0xa479,	// (0x0001e339) list_double_heading_pane_t1

0xa48f,	// (0x0001e34f) list_double_heading_pane_t2_ParamLimits

0xa48f,	// (0x0001e34f) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00023508) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00023508) list_double_heading_pane_t

0xdd16,	// (0x00021bd6) list_double_graphic_heading_pane_g1_ParamLimits

0xdd16,	// (0x00021bd6) list_double_graphic_heading_pane_g1

0xa45c,	// (0x0001e31c) list_double_graphic_heading_pane_g2_ParamLimits

0xa45c,	// (0x0001e31c) list_double_graphic_heading_pane_g2

0xa46d,	// (0x0001e32d) list_double_graphic_heading_pane_g3_ParamLimits

0xa46d,	// (0x0001e32d) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002350d) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002350d) list_double_graphic_heading_pane_g

0xa4a1,	// (0x0001e361) list_double_graphic_heading_pane_t1_ParamLimits

0xa4a1,	// (0x0001e361) list_double_graphic_heading_pane_t1

0xa4b7,	// (0x0001e377) list_double_graphic_heading_pane_t2_ParamLimits

0xa4b7,	// (0x0001e377) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00023514) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00023514) list_double_graphic_heading_pane_t

0xa3d9,	// (0x0001e299) list_double_time_pane_g1_ParamLimits

0xa3d9,	// (0x0001e299) list_double_time_pane_g1

0xa278,	// (0x0001e138) list_double_time_pane_g2_ParamLimits

0xa278,	// (0x0001e138) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00023519) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00023519) list_double_time_pane_g

0xa4c9,	// (0x0001e389) list_double_time_pane_t1_ParamLimits

0xa4c9,	// (0x0001e389) list_double_time_pane_t1

0xa4df,	// (0x0001e39f) list_double_time_pane_t2_ParamLimits

0xa4df,	// (0x0001e39f) list_double_time_pane_t2

0xa4f1,	// (0x0001e3b1) list_double_time_pane_t3_ParamLimits

0xa4f1,	// (0x0001e3b1) list_double_time_pane_t3

0xa503,	// (0x0001e3c3) list_double_time_pane_t4_ParamLimits

0xa503,	// (0x0001e3c3) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002351e) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002351e) list_double_time_pane_t

0x1006,	// (0x00014ec6) list_setting_pane_g1_ParamLimits

0x1006,	// (0x00014ec6) list_setting_pane_g1

0xa2bd,	// (0x0001e17d) list_setting_pane_g2_ParamLimits

0xa2bd,	// (0x0001e17d) list_setting_pane_g2

0x0001,

0xf667,	// (0x00023527) list_setting_pane_g_ParamLimits

0xf667,	// (0x00023527) list_setting_pane_g

0xa515,	// (0x0001e3d5) list_setting_pane_t1_ParamLimits

0xa515,	// (0x0001e3d5) list_setting_pane_t1

0xa52c,	// (0x0001e3ec) list_setting_pane_t2_ParamLimits

0xa52c,	// (0x0001e3ec) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002352c) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002352c) list_setting_pane_t

0xa56b,	// (0x0001e42b) set_value_pane_cp_ParamLimits

0xa56b,	// (0x0001e42b) set_value_pane_cp

0x1006,	// (0x00014ec6) list_setting_number_pane_g1_ParamLimits

0x1006,	// (0x00014ec6) list_setting_number_pane_g1

0xa2bd,	// (0x0001e17d) list_setting_number_pane_g2_ParamLimits

0xa2bd,	// (0x0001e17d) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x00023527) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x00023527) list_setting_number_pane_g

0xa579,	// (0x0001e439) list_setting_number_pane_t1_ParamLimits

0xa579,	// (0x0001e439) list_setting_number_pane_t1

0xa58d,	// (0x0001e44d) list_setting_number_pane_t2_ParamLimits

0xa58d,	// (0x0001e44d) list_setting_number_pane_t2

0xa5a4,	// (0x0001e464) list_setting_number_pane_t3_ParamLimits

0xa5a4,	// (0x0001e464) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x00023533) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x00023533) list_setting_number_pane_t

0xa56b,	// (0x0001e42b) set_value_pane_ParamLimits

0xa56b,	// (0x0001e42b) set_value_pane

0xdd22,	// (0x00021be2) bg_set_opt_pane_ParamLimits

0xdd22,	// (0x00021be2) bg_set_opt_pane

0xdd43,	// (0x00021c03) set_value_pane_t1

0xdd51,	// (0x00021c11) slider_set_pane_cp3

0xdd5a,	// (0x00021c1a) volume_small_pane_cp

0xdd63,	// (0x00021c23) list_form_gen_pane

0xdd6c,	// (0x00021c2c) scroll_pane_cp8

0xa5e7,	// (0x0001e4a7) form_field_data_pane_ParamLimits

0xa5e7,	// (0x0001e4a7) form_field_data_pane

0xa602,	// (0x0001e4c2) form_field_data_wide_pane_ParamLimits

0xa602,	// (0x0001e4c2) form_field_data_wide_pane

0xa626,	// (0x0001e4e6) form_field_popup_pane_ParamLimits

0xa626,	// (0x0001e4e6) form_field_popup_pane

0xdd8d,	// (0x00021c4d) form_field_popup_wide_pane_ParamLimits

0xdd8d,	// (0x00021c4d) form_field_popup_wide_pane

0xddae,	// (0x00021c6e) form_field_slider_pane_ParamLimits

0xddae,	// (0x00021c6e) form_field_slider_pane

0xddc1,	// (0x00021c81) form_field_slider_wide_pane_ParamLimits

0xddc1,	// (0x00021c81) form_field_slider_wide_pane

0xddd4,	// (0x00021c94) data_form_pane

0xa652,	// (0x0001e512) form_field_data_pane_t1

0xdde0,	// (0x00021ca0) input_focus_pane

0xddee,	// (0x00021cae) data_form_wide_pane

0xde26,	// (0x00021ce6) form_field_data_wide_pane_t1

0xc369,	// (0x00020229) input_focus_pane_cp6

0xa66c,	// (0x0001e52c) form_field_popup_pane_t1

0xdde0,	// (0x00021ca0) input_focus_pane_cp7

0xde48,	// (0x00021d08) list_form_pane

0xde5c,	// (0x00021d1c) form_field_popup_wide_pane_t1

0xdde0,	// (0x00021ca0) input_focus_pane_cp8

0xde71,	// (0x00021d31) list_form_wide_pane

0xa68e,	// (0x0001e54e) form_field_slider_pane_t1_ParamLimits

0xa68e,	// (0x0001e54e) form_field_slider_pane_t1

0xa6a6,	// (0x0001e566) form_field_slider_pane_t2_ParamLimits

0xa6a6,	// (0x0001e566) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x00023543) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x00023543) form_field_slider_pane_t

0xbfb1,	// (0x0001fe71) input_focus_pane_cp9_ParamLimits

0xbfb1,	// (0x0001fe71) input_focus_pane_cp9

0xa6bb,	// (0x0001e57b) slider_cont_pane_ParamLimits

0xa6bb,	// (0x0001e57b) slider_cont_pane

0xde80,	// (0x00021d40) form_field_slider_wide_pane_t1_ParamLimits

0xde80,	// (0x00021d40) form_field_slider_wide_pane_t1

0xde92,	// (0x00021d52) form_field_slider_wide_pane_t2_ParamLimits

0xde92,	// (0x00021d52) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00023548) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00023548) form_field_slider_wide_pane_t

0xbfb1,	// (0x0001fe71) input_focus_pane_cp10_ParamLimits

0xbfb1,	// (0x0001fe71) input_focus_pane_cp10

0xa6cf,	// (0x0001e58f) slider_cont_pane_cp1_ParamLimits

0xa6cf,	// (0x0001e58f) slider_cont_pane_cp1

0xa6e3,	// (0x0001e5a3) slider_form_pane_cp

0xdea4,	// (0x00021d64) input_focus_pane_g1

0xdeac,	// (0x00021d6c) input_focus_pane_g2

0xdeb4,	// (0x00021d74) input_focus_pane_g3

0xdebc,	// (0x00021d7c) input_focus_pane_g4

0xdec4,	// (0x00021d84) input_focus_pane_g5

0xdecc,	// (0x00021d8c) input_focus_pane_g6

0xded4,	// (0x00021d94) input_focus_pane_g7

0xdedc,	// (0x00021d9c) input_focus_pane_g8

0xdee4,	// (0x00021da4) input_focus_pane_g9

0xbf59,	// (0x0001fe19) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0002354d) input_focus_pane_g

0x215d,	// (0x0001601d) wait_border_pane_g3_copy1

0xa6eb,	// (0x0001e5ab) data_form_pane_t1

0xbf59,	// (0x0001fe19) wait_anim_pane_g1_copy1

0xb556,	// (0x0001f416) data_form_wide_pane_t1

0xdeec,	// (0x00021dac) list_form_graphic_pane_cp_ParamLimits

0xdeec,	// (0x00021dac) list_form_graphic_pane_cp

0x30fe,	// (0x00016fbe) slider_form_pane_g1

0x3107,	// (0x00016fc7) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0002384b) slider_form_pane_g

0xa707,	// (0x0001e5c7) list_form_graphic_pane_ParamLimits

0xa707,	// (0x0001e5c7) list_form_graphic_pane

0xdefe,	// (0x00021dbe) list_form_graphic_pane_g1

0xdf06,	// (0x00021dc6) list_form_graphic_pane_t1_ParamLimits

0xdf06,	// (0x00021dc6) list_form_graphic_pane_t1

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp5_ParamLimits

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp5

0xa718,	// (0x0001e5d8) find_pane_g1

0xdf1b,	// (0x00021ddb) input_find_pane

0xa721,	// (0x0001e5e1) input_find_pane_g1_ParamLimits

0xa721,	// (0x0001e5e1) input_find_pane_g1

0xa72d,	// (0x0001e5ed) input_find_pane_t1_ParamLimits

0xa72d,	// (0x0001e5ed) input_find_pane_t1

0xa742,	// (0x0001e602) input_find_pane_t2_ParamLimits

0xa742,	// (0x0001e602) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00023562) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00023562) input_find_pane_t

0xdf24,	// (0x00021de4) input_focus_pane_cp5_ParamLimits

0xdf24,	// (0x00021de4) input_focus_pane_cp5

0xdf32,	// (0x00021df2) bg_popup_window_pane_cp2_ParamLimits

0xdf32,	// (0x00021df2) bg_popup_window_pane_cp2

0xdf3f,	// (0x00021dff) listscroll_menu_pane_ParamLimits

0xdf3f,	// (0x00021dff) listscroll_menu_pane

0xa763,	// (0x0001e623) popup_submenu_window_ParamLimits

0xa763,	// (0x0001e623) popup_submenu_window

0xdf4b,	// (0x00021e0b) find_popup_pane_g1

0xdf53,	// (0x00021e13) input_popup_find_pane_cp

0xdf24,	// (0x00021de4) input_focus_pane_cp4_ParamLimits

0xdf24,	// (0x00021de4) input_focus_pane_cp4

0xdf5d,	// (0x00021e1d) input_popup_find_pane_t1_ParamLimits

0xdf5d,	// (0x00021e1d) input_popup_find_pane_t1

0xbf63,	// (0x0001fe23) bg_popup_sub_pane_cp

0xdf8b,	// (0x00021e4b) listscroll_popup_sub_pane

0xdf93,	// (0x00021e53) list_submenu_pane_ParamLimits

0xdf93,	// (0x00021e53) list_submenu_pane

0xdfa4,	// (0x00021e64) scroll_pane_cp4

0xdfac,	// (0x00021e6c) list_single_popup_submenu_pane_ParamLimits

0xdfac,	// (0x00021e6c) list_single_popup_submenu_pane

0xdfc1,	// (0x00021e81) list_single_popup_submenu_pane_g1

0xdfc9,	// (0x00021e89) list_single_popup_submenu_pane_t1_ParamLimits

0xdfc9,	// (0x00021e89) list_single_popup_submenu_pane_t1

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp1_ParamLimits

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp1

0xa7a1,	// (0x0001e661) tabs_2_active_pane_g1

0xa7a9,	// (0x0001e669) tabs_2_active_pane_t1

0xbfb1,	// (0x0001fe71) bg_passive_tab_pane_cp1_ParamLimits

0xbfb1,	// (0x0001fe71) bg_passive_tab_pane_cp1

0xa7a1,	// (0x0001e661) tabs_2_passive_pane_g1

0xa7a9,	// (0x0001e669) tabs_2_passive_pane_t1

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp4

0xa7bb,	// (0x0001e67b) tabs_2_long_active_pane_t1

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp4

0xea31,	// (0x000228f1) list_single_midp_graphic_pane_g4_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp5

0xa7ce,	// (0x0001e68e) tabs_3_long_active_pane_t1

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp5

0xea31,	// (0x000228f1) list_single_midp_graphic_pane_g4

0xbfbf,	// (0x0001fe7f) bg_popup_window_pane_cp13_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_popup_window_pane_cp13

0xdfe7,	// (0x00021ea7) listscroll_popup_fast_pane_ParamLimits

0xdfe7,	// (0x00021ea7) listscroll_popup_fast_pane

0xdff6,	// (0x00021eb6) grid_popup_fast_pane_ParamLimits

0xdff6,	// (0x00021eb6) grid_popup_fast_pane

0xe008,	// (0x00021ec8) scroll_pane_cp9_ParamLimits

0xe008,	// (0x00021ec8) scroll_pane_cp9

0x4f87,	// (0x00018e47) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f87,	// (0x00018e47) list_single_graphic_hl_pane_t1_cp2

0xe02c,	// (0x00021eec) input_focus_pane_cp20_ParamLimits

0xe02c,	// (0x00021eec) input_focus_pane_cp20

0xe03a,	// (0x00021efa) query_popup_data_pane_t1_ParamLimits

0xe03a,	// (0x00021efa) query_popup_data_pane_t1

0xe04d,	// (0x00021f0d) query_popup_data_pane_t2_ParamLimits

0xe04d,	// (0x00021f0d) query_popup_data_pane_t2

0xe093,	// (0x00021f53) query_popup_data_pane_t3_ParamLimits

0xe093,	// (0x00021f53) query_popup_data_pane_t3

0xe0d4,	// (0x00021f94) query_popup_data_pane_t4_ParamLimits

0xe0d4,	// (0x00021f94) query_popup_data_pane_t4

0xe110,	// (0x00021fd0) query_popup_data_pane_t5_ParamLimits

0xe110,	// (0x00021fd0) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00023567) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00023567) query_popup_data_pane_t

0xdea4,	// (0x00021d64) bg_set_opt_pane_g1

0xdeac,	// (0x00021d6c) bg_set_opt_pane_g2

0xdeb4,	// (0x00021d74) bg_set_opt_pane_g3

0xdebc,	// (0x00021d7c) bg_set_opt_pane_g4

0xdec4,	// (0x00021d84) bg_set_opt_pane_g5

0xdecc,	// (0x00021d8c) bg_set_opt_pane_g6

0xded4,	// (0x00021d94) bg_set_opt_pane_g7

0xdedc,	// (0x00021d9c) bg_set_opt_pane_g8

0xdee4,	// (0x00021da4) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00023572) bg_set_opt_pane_g

0xe605,	// (0x000224c5) control_top_pane_stacon_ParamLimits

0xe605,	// (0x000224c5) control_top_pane_stacon

0xe658,	// (0x00022518) signal_pane_stacon_ParamLimits

0xe658,	// (0x00022518) signal_pane_stacon

0x0e7d,	// (0x00014d3d) stacon_top_pane_g1_ParamLimits

0x0e7d,	// (0x00014d3d) stacon_top_pane_g1

0xe67d,	// (0x0002253d) title_pane_stacon_ParamLimits

0xe67d,	// (0x0002253d) title_pane_stacon

0xe6a7,	// (0x00022567) uni_indicator_pane_stacon_ParamLimits

0xe6a7,	// (0x00022567) uni_indicator_pane_stacon

0xe6bf,	// (0x0002257f) battery_pane_stacon_ParamLimits

0xe6bf,	// (0x0002257f) battery_pane_stacon

0xe703,	// (0x000225c3) control_bottom_pane_stacon_ParamLimits

0xe703,	// (0x000225c3) control_bottom_pane_stacon

0xe726,	// (0x000225e6) navi_pane_stacon_ParamLimits

0xe726,	// (0x000225e6) navi_pane_stacon

0x0e9f,	// (0x00014d5f) stacon_bottom_pane_g1_ParamLimits

0x0e9f,	// (0x00014d5f) stacon_bottom_pane_g1

0xe147,	// (0x00022007) aid_levels_signal_lsc_ParamLimits

0xe147,	// (0x00022007) aid_levels_signal_lsc

0xe15e,	// (0x0002201e) signal_pane_stacon_g1_ParamLimits

0xe15e,	// (0x0002201e) signal_pane_stacon_g1

0xe172,	// (0x00022032) signal_pane_stacon_g2_ParamLimits

0xe172,	// (0x00022032) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00023585) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00023585) signal_pane_stacon_g

0xe1b4,	// (0x00022074) title_pane_stacon_t1_ParamLimits

0xe1b4,	// (0x00022074) title_pane_stacon_t1

0xe1d9,	// (0x00022099) uni_indicator_pane_stacon_g1

0xe1e3,	// (0x000220a3) uni_indicator_pane_stacon_g2

0xe1ed,	// (0x000220ad) uni_indicator_pane_stacon_g3

0xe1f7,	// (0x000220b7) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00023591) uni_indicator_pane_stacon_g

0xe201,	// (0x000220c1) control_top_pane_stacon_g1

0xe209,	// (0x000220c9) control_top_pane_stacon_t1_ParamLimits

0xe209,	// (0x000220c9) control_top_pane_stacon_t1

0xe240,	// (0x00022100) aid_levels_battery_lsc_ParamLimits

0xe240,	// (0x00022100) aid_levels_battery_lsc

0xe258,	// (0x00022118) battery_pane_stacon_g1_ParamLimits

0xe258,	// (0x00022118) battery_pane_stacon_g1

0xe26b,	// (0x0002212b) battery_pane_stacon_g2_ParamLimits

0xe26b,	// (0x0002212b) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0002359a) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0002359a) battery_pane_stacon_g

0xe498,	// (0x00022358) navi_icon_pane_stacon

0xe4ac,	// (0x0002236c) navi_navi_pane_stacon

0xe498,	// (0x00022358) navi_text_pane_stacon

0xe201,	// (0x000220c1) control_bottom_pane_stacon_g1

0xe4c2,	// (0x00022382) control_bottom_pane_stacon_t1_ParamLimits

0xe4c2,	// (0x00022382) control_bottom_pane_stacon_t1

0xa7e0,	// (0x0001e6a0) grid_app_pane_ParamLimits

0xa7e0,	// (0x0001e6a0) grid_app_pane

0xa818,	// (0x0001e6d8) scroll_pane_cp15_ParamLimits

0xa818,	// (0x0001e6d8) scroll_pane_cp15

0xa831,	// (0x0001e6f1) cell_app_pane_ParamLimits

0xa831,	// (0x0001e6f1) cell_app_pane

0xa872,	// (0x0001e732) cell_app_pane_g1_ParamLimits

0xa872,	// (0x0001e732) cell_app_pane_g1

0xe2ab,	// (0x0002216b) cell_app_pane_g2_ParamLimits

0xe2ab,	// (0x0002216b) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0002359f) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0002359f) cell_app_pane_g

0xe2b7,	// (0x00022177) cell_app_pane_t1_ParamLimits

0xe2b7,	// (0x00022177) cell_app_pane_t1

0xe2c9,	// (0x00022189) grid_highlight_pane_ParamLimits

0xe2c9,	// (0x00022189) grid_highlight_pane

0xdea4,	// (0x00021d64) cell_highlight_pane_g1

0xdeac,	// (0x00021d6c) cell_highlight_pane_g2

0xdeb4,	// (0x00021d74) cell_highlight_pane_g3

0xdebc,	// (0x00021d7c) cell_highlight_pane_g4

0xdec4,	// (0x00021d84) cell_highlight_pane_g5

0xdecc,	// (0x00021d8c) cell_highlight_pane_g6

0xded4,	// (0x00021d94) cell_highlight_pane_g7

0xdedc,	// (0x00021d9c) cell_highlight_pane_g8

0xdee4,	// (0x00021da4) cell_highlight_pane_g9

0xbf59,	// (0x0001fe19) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0002354d) cell_highlight_pane_g

0xe2da,	// (0x0002219a) bg_scroll_pane

0xe503,	// (0x000223c3) scroll_handle_pane

0xe321,	// (0x000221e1) scroll_bg_pane_g1

0xe336,	// (0x000221f6) scroll_bg_pane_g2

0xe34e,	// (0x0002220e) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x000235a4) scroll_bg_pane_g

0xe363,	// (0x00022223) scroll_handle_focus_pane_ParamLimits

0xe363,	// (0x00022223) scroll_handle_focus_pane

0xe321,	// (0x000221e1) scroll_handle_pane_g1

0xe370,	// (0x00022230) scroll_handle_pane_g2

0xe34e,	// (0x0002220e) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x000235ab) scroll_handle_pane_g

0xdf24,	// (0x00021de4) bg_popup_sub_pane_cp21_ParamLimits

0xdf24,	// (0x00021de4) bg_popup_sub_pane_cp21

0xe384,	// (0x00022244) popup_fep_japan_predictive_window_t1_ParamLimits

0xe384,	// (0x00022244) popup_fep_japan_predictive_window_t1

0xe39b,	// (0x0002225b) popup_fep_japan_predictive_window_t2_ParamLimits

0xe39b,	// (0x0002225b) popup_fep_japan_predictive_window_t2

0xe3ce,	// (0x0002228e) popup_fep_japan_predictive_window_t3_ParamLimits

0xe3ce,	// (0x0002228e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x000235b2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x000235b2) popup_fep_japan_predictive_window_t

0xbf63,	// (0x0001fe23) bg_popup_sub_pane_cp23

0xe405,	// (0x000222c5) listscroll_japin_cand_pane

0xe40d,	// (0x000222cd) popup_fep_japan_candidate_window_t1

0xe41b,	// (0x000222db) candidate_pane_ParamLimits

0xe41b,	// (0x000222db) candidate_pane

0xe42d,	// (0x000222ed) scroll_pane_cp30

0xe437,	// (0x000222f7) list_single_popup_jap_candidate_pane_ParamLimits

0xe437,	// (0x000222f7) list_single_popup_jap_candidate_pane

0xbf63,	// (0x0001fe23) list_highlight_pane_cp30

0xe44b,	// (0x0002230b) list_single_popup_jap_candidate_pane_t1

0xa896,	// (0x0001e756) level_1_signal

0xa8a8,	// (0x0001e768) level_2_signal

0xa8bb,	// (0x0001e77b) level_3_signal

0xa8ce,	// (0x0001e78e) level_4_signal

0xa8e1,	// (0x0001e7a1) level_5_signal

0xa8f4,	// (0x0001e7b4) level_6_signal

0xa907,	// (0x0001e7c7) level_7_signal

0xa896,	// (0x0001e756) level_1_battery

0xa8a8,	// (0x0001e768) level_2_battery

0xa8bb,	// (0x0001e77b) level_3_battery

0xa8ce,	// (0x0001e78e) level_4_battery

0xa8e1,	// (0x0001e7a1) level_5_battery

0xa8f4,	// (0x0001e7b4) level_6_battery

0xa907,	// (0x0001e7c7) level_7_battery

0x0b4b,	// (0x00014a0b) list_menu_pane_ParamLimits

0x0b4b,	// (0x00014a0b) list_menu_pane

0x0b61,	// (0x00014a21) scroll_pane_cp25_ParamLimits

0x0b61,	// (0x00014a21) scroll_pane_cp25

0x0b7a,	// (0x00014a3a) list_double2_graphic_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double2_graphic_pane_cp2

0x0b7a,	// (0x00014a3a) list_double2_large_graphic_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double2_large_graphic_pane_cp2

0x0b7a,	// (0x00014a3a) list_double2_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double2_pane_cp2

0x0b7a,	// (0x00014a3a) list_double_graphic_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double_graphic_pane_cp2

0x0b7a,	// (0x00014a3a) list_double_large_graphic_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double_large_graphic_pane_cp2

0x0b7a,	// (0x00014a3a) list_double_number_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double_number_pane_cp2

0x0b7a,	// (0x00014a3a) list_double_pane_cp2_ParamLimits

0x0b7a,	// (0x00014a3a) list_double_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_2graphic_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_2graphic_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_graphic_heading_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_graphic_heading_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_graphic_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_graphic_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_heading_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_heading_pane_cp2

0x0bbd,	// (0x00014a7d) list_single_large_graphic_pane_cp2_ParamLimits

0x0bbd,	// (0x00014a7d) list_single_large_graphic_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_number_heading_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_number_heading_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_number_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_number_pane_cp2

0xa92d,	// (0x0001e7ed) list_single_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_pane_cp2

0x0c38,	// (0x00014af8) bg_popup_sub_pane_cp22

0xe5b5,	// (0x00022475) popup_side_volume_key_window_g1

0xe5df,	// (0x0002249f) popup_side_volume_key_window_t1

0xe5fd,	// (0x000224bd) volume_small_pane_cp1

0xbfb1,	// (0x0001fe71) bg_popup_sub_pane_cp24_ParamLimits

0xbfb1,	// (0x0001fe71) bg_popup_sub_pane_cp24

0x0c4e,	// (0x00014b0e) fep_china_uni_candidate_pane_ParamLimits

0x0c4e,	// (0x00014b0e) fep_china_uni_candidate_pane

0x0c62,	// (0x00014b22) fep_china_uni_entry_pane

0x0c72,	// (0x00014b32) popup_fep_china_uni_window_g1

0x0c8e,	// (0x00014b4e) fep_china_uni_entry_pane_g1

0x0c98,	// (0x00014b58) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x000235e3) fep_china_uni_entry_pane_g

0x0ca2,	// (0x00014b62) fep_entry_item_pane

0x0cac,	// (0x00014b6c) fep_candidate_item_pane

0x0cb4,	// (0x00014b74) fep_china_uni_candidate_pane_g1

0x0cbe,	// (0x00014b7e) fep_china_uni_candidate_pane_g2

0x0cc6,	// (0x00014b86) fep_china_uni_candidate_pane_g3

0x0cce,	// (0x00014b8e) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x000235e8) fep_china_uni_candidate_pane_g

0xbf59,	// (0x0001fe19) fep_entry_item_pane_g1

0x0cd8,	// (0x00014b98) fep_entry_item_pane_t1_ParamLimits

0x0cd8,	// (0x00014b98) fep_entry_item_pane_t1

0x0cee,	// (0x00014bae) fep_candidate_item_pane_t1_ParamLimits

0x0cee,	// (0x00014bae) fep_candidate_item_pane_t1

0x0d03,	// (0x00014bc3) fep_candidate_item_pane_t2_ParamLimits

0x0d03,	// (0x00014bc3) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x000235f1) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x000235f1) fep_candidate_item_pane_t

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp31_ParamLimits

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp31

0x0d15,	// (0x00014bd5) level_1_signal_lsc

0x0d1e,	// (0x00014bde) level_2_signal_lsc

0x0d27,	// (0x00014be7) level_3_signal_lsc

0x0d30,	// (0x00014bf0) level_4_signal_lsc

0x0d39,	// (0x00014bf9) level_5_signal_lsc

0x0d42,	// (0x00014c02) level_6_signal_lsc

0x0d4b,	// (0x00014c0b) level_7_signal_lsc

0x0d4b,	// (0x00014c0b) level_1_battery_lsc

0x0d54,	// (0x00014c14) level_2_battery_lsc

0x0d5d,	// (0x00014c1d) level_3_battery_lsc

0x0d66,	// (0x00014c26) level_4_battery_lsc

0x0d6f,	// (0x00014c2f) level_5_battery_lsc

0x0d78,	// (0x00014c38) level_6_battery_lsc

0x0d15,	// (0x00014bd5) level_7_battery_lsc

0x0d81,	// (0x00014c41) scroll_handle_focus_pane_g1

0x0d8a,	// (0x00014c4a) scroll_handle_focus_pane_g2

0x0d93,	// (0x00014c53) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x000235f6) scroll_handle_focus_pane_g

0xa9bf,	// (0x0001e87f) list_single_2graphic_pane_g1_ParamLimits

0xa9bf,	// (0x0001e87f) list_single_2graphic_pane_g1

0xa241,	// (0x0001e101) list_single_2graphic_pane_g2_ParamLimits

0xa241,	// (0x0001e101) list_single_2graphic_pane_g2

0x1a18,	// (0x000158d8) list_single_2graphic_pane_g3_ParamLimits

0x1a18,	// (0x000158d8) list_single_2graphic_pane_g3

0xa9cb,	// (0x0001e88b) list_single_2graphic_pane_g4_ParamLimits

0xa9cb,	// (0x0001e88b) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x000235fd) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x000235fd) list_single_2graphic_pane_g

0xa9dc,	// (0x0001e89c) list_single_2graphic_pane_t1_ParamLimits

0xa9dc,	// (0x0001e89c) list_single_2graphic_pane_t1

0xaa0a,	// (0x0001e8ca) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa0a,	// (0x0001e8ca) list_double2_graphic_large_graphic_pane_g1

0xa2ac,	// (0x0001e16c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa2ac,	// (0x0001e16c) list_double2_graphic_large_graphic_pane_g2

0xa2bd,	// (0x0001e17d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa2bd,	// (0x0001e17d) list_double2_graphic_large_graphic_pane_g3

0xaa1c,	// (0x0001e8dc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaa1c,	// (0x0001e8dc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00023606) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00023606) list_double2_graphic_large_graphic_pane_g

0xaa28,	// (0x0001e8e8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaa28,	// (0x0001e8e8) list_double2_graphic_large_graphic_pane_t1

0xaa3e,	// (0x0001e8fe) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaa3e,	// (0x0001e8fe) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0002360f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0002360f) list_double2_graphic_large_graphic_pane_t

0x0f61,	// (0x00014e21) popup_fast_swap_window_ParamLimits

0x0f61,	// (0x00014e21) popup_fast_swap_window

0x0f7f,	// (0x00014e3f) popup_side_volume_key_window

0x0f9d,	// (0x00014e5d) stacon_top_pane

0x0fa7,	// (0x00014e67) status_pane_ParamLimits

0x0fa7,	// (0x00014e67) status_pane

0x0f9d,	// (0x00014e5d) status_small_pane

0xbf63,	// (0x0001fe23) control_pane

0xbf63,	// (0x0001fe23) stacon_bottom_pane

0xdd6c,	// (0x00021c2c) scroll_pane_cp121

0xdd63,	// (0x00021c23) set_content_pane

0xaa50,	// (0x0001e910) bg_active_tab_pane_g1_cp1

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp1

0xaa59,	// (0x0001e919) bg_active_tab_pane_g3_cp1

0xaa50,	// (0x0001e910) bg_passive_tab_pane_g1_cp1

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp1

0xaa59,	// (0x0001e919) bg_passive_tab_pane_g3_cp1

0xaa62,	// (0x0001e922) bg_active_tab_pane_g1_cp2

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp2

0xaa6b,	// (0x0001e92b) bg_active_tab_pane_g3_cp2

0xaa62,	// (0x0001e922) bg_passive_tab_pane_g1_cp2

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp2

0xaa6b,	// (0x0001e92b) bg_passive_tab_pane_g3_cp2

0xaa74,	// (0x0001e934) bg_active_tab_pane_g1_cp3

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp3

0xaa7d,	// (0x0001e93d) bg_active_tab_pane_g3_cp3

0xaa74,	// (0x0001e934) bg_passive_tab_pane_g1_cp3

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp3

0xaa7d,	// (0x0001e93d) bg_passive_tab_pane_g3_cp3

0xaa86,	// (0x0001e946) bg_active_tab_pane_g1_cp4

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp4

0xaa8f,	// (0x0001e94f) bg_active_tab_pane_g3_cp4

0xaa86,	// (0x0001e946) bg_passive_tab_pane_g1_cp4

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp4

0xaa8f,	// (0x0001e94f) bg_passive_tab_pane_g3_cp4

0x0ebb,	// (0x00014d7b) bg_active_tab_pane_g1_cp5

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp5

0x0ec4,	// (0x00014d84) bg_active_tab_pane_g3_cp5

0x0ebb,	// (0x00014d7b) bg_passive_tab_pane_g1_cp5

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp5

0x0ec4,	// (0x00014d84) bg_passive_tab_pane_g3_cp5

0x37a1,	// (0x00017661) list_set_graphic_pane_ParamLimits

0x37a1,	// (0x00017661) list_set_graphic_pane

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp4

0xaa98,	// (0x0001e958) list_set_graphic_pane_g1_ParamLimits

0xaa98,	// (0x0001e958) list_set_graphic_pane_g1

0xaaa4,	// (0x0001e964) list_set_graphic_pane_g2_ParamLimits

0xaaa4,	// (0x0001e964) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x00023614) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x00023614) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002399c) volume_small_pane_cp_g

0xaac8,	// (0x0001e988) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaac8,	// (0x0001e988) list_double2_large_graphic_pane_g1_cp2

0xaad6,	// (0x0001e996) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xaad6,	// (0x0001e996) list_double2_large_graphic_pane_g2_cp2

0x0f31,	// (0x00014df1) list_double2_large_graphic_pane_g3_cp2

0x0f39,	// (0x00014df9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0f39,	// (0x00014df9) list_double2_large_graphic_pane_t1_cp2

0x0f4f,	// (0x00014e0f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f4f,	// (0x00014e0f) list_double2_large_graphic_pane_t2_cp2

0xb2b8,	// (0x0001f178) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb2b8,	// (0x0001f178) list_double_large_graphic_pane_g1_cp2

0xb2cb,	// (0x0001f18b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb2cb,	// (0x0001f18b) list_double_large_graphic_pane_g2_cp2

0x10c5,	// (0x00014f85) list_double_large_graphic_pane_g3_cp2

0x2c6b,	// (0x00016b2b) list_double_large_graphic_pane_g4_cp

0x2c73,	// (0x00016b33) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2c73,	// (0x00016b33) list_double_large_graphic_pane_t1_cp2

0x2c8a,	// (0x00016b4a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2c8a,	// (0x00016b4a) list_double_large_graphic_pane_t2_cp2

0xaae7,	// (0x0001e9a7) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaae7,	// (0x0001e9a7) list_double2_graphic_pane_g1_cp2

0xaaf5,	// (0x0001e9b5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xaaf5,	// (0x0001e9b5) list_double2_graphic_pane_g2_cp2

0xab06,	// (0x0001e9c6) list_double2_graphic_pane_g3_cp2

0x0fde,	// (0x00014e9e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0fde,	// (0x00014e9e) list_double2_graphic_pane_t1_cp2

0x0ff4,	// (0x00014eb4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0ff4,	// (0x00014eb4) list_double2_graphic_pane_t2_cp2

0x1006,	// (0x00014ec6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1006,	// (0x00014ec6) list_single_number_heading_pane_g1_cp2

0x1012,	// (0x00014ed2) list_single_number_heading_pane_g2_cp2

0x101a,	// (0x00014eda) list_single_number_heading_pane_t1_cp2_ParamLimits

0x101a,	// (0x00014eda) list_single_number_heading_pane_t1_cp2

0xab10,	// (0x0001e9d0) list_single_number_heading_pane_t2_cp2_ParamLimits

0xab10,	// (0x0001e9d0) list_single_number_heading_pane_t2_cp2

0x1044,	// (0x00014f04) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1044,	// (0x00014f04) list_single_number_heading_pane_t3_cp2

0x1006,	// (0x00014ec6) list_single_heading_pane_g1_cp2_ParamLimits

0x1006,	// (0x00014ec6) list_single_heading_pane_g1_cp2

0x1012,	// (0x00014ed2) list_single_heading_pane_g2_cp2

0x101a,	// (0x00014eda) list_single_heading_pane_t1_cp2_ParamLimits

0x101a,	// (0x00014eda) list_single_heading_pane_t1_cp2

0xb2a4,	// (0x0001f164) list_single_heading_pane_t2_cp2_ParamLimits

0xb2a4,	// (0x0001f164) list_single_heading_pane_t2_cp2

0x2983,	// (0x00016843) list_double_graphic_pane_g1_cp2_ParamLimits

0x2983,	// (0x00016843) list_double_graphic_pane_g1_cp2

0x298f,	// (0x0001684f) list_double_graphic_pane_g2_cp2_ParamLimits

0x298f,	// (0x0001684f) list_double_graphic_pane_g2_cp2

0x299e,	// (0x0001685e) list_double_graphic_pane_g3_cp2

0x29a6,	// (0x00016866) list_double_graphic_pane_t1_cp2_ParamLimits

0x29a6,	// (0x00016866) list_double_graphic_pane_t1_cp2

0x29bc,	// (0x0001687c) list_double_graphic_pane_t2_cp2_ParamLimits

0x29bc,	// (0x0001687c) list_double_graphic_pane_t2_cp2

0x10b9,	// (0x00014f79) list_double_number_pane_g1_cp2_ParamLimits

0x10b9,	// (0x00014f79) list_double_number_pane_g1_cp2

0x10c5,	// (0x00014f85) list_double_number_pane_g2_cp2

0xb23e,	// (0x0001f0fe) list_double_number_pane_t1_cp2_ParamLimits

0xb23e,	// (0x0001f0fe) list_double_number_pane_t1_cp2

0x295b,	// (0x0001681b) list_double_number_pane_t2_cp2_ParamLimits

0x295b,	// (0x0001681b) list_double_number_pane_t2_cp2

0x2971,	// (0x00016831) list_double_number_pane_t3_cp2_ParamLimits

0x2971,	// (0x00016831) list_double_number_pane_t3_cp2

0xb18c,	// (0x0001f04c) list_single_graphic_pane_g1_cp2_ParamLimits

0xb18c,	// (0x0001f04c) list_single_graphic_pane_g1_cp2

0x111f,	// (0x00014fdf) list_single_graphic_pane_g2_cp2_ParamLimits

0x111f,	// (0x00014fdf) list_single_graphic_pane_g2_cp2

0x112b,	// (0x00014feb) list_single_graphic_pane_g3_cp2

0x2806,	// (0x000166c6) list_single_graphic_pane_t1_cp2_ParamLimits

0x2806,	// (0x000166c6) list_single_graphic_pane_t1_cp2

0x111f,	// (0x00014fdf) list_single_number_pane_g1_cp2_ParamLimits

0x111f,	// (0x00014fdf) list_single_number_pane_g1_cp2

0x112b,	// (0x00014feb) list_single_number_pane_g2_cp2

0x2806,	// (0x000166c6) list_single_number_pane_t1_cp2_ParamLimits

0x2806,	// (0x000166c6) list_single_number_pane_t1_cp2

0xb178,	// (0x0001f038) list_single_number_pane_t2_cp2_ParamLimits

0xb178,	// (0x0001f038) list_single_number_pane_t2_cp2

0xaad6,	// (0x0001e996) list_double2_pane_g1_cp2_ParamLimits

0xaad6,	// (0x0001e996) list_double2_pane_g1_cp2

0x0f31,	// (0x00014df1) list_double2_pane_g2_cp2

0x1091,	// (0x00014f51) list_double2_pane_t1_cp2_ParamLimits

0x1091,	// (0x00014f51) list_double2_pane_t1_cp2

0x10a7,	// (0x00014f67) list_double2_pane_t2_cp2_ParamLimits

0x10a7,	// (0x00014f67) list_double2_pane_t2_cp2

0x10b9,	// (0x00014f79) list_double_pane_g1_cp2_ParamLimits

0x10b9,	// (0x00014f79) list_double_pane_g1_cp2

0x10c5,	// (0x00014f85) list_double_pane_g2_cp2

0x10cd,	// (0x00014f8d) list_double_pane_t1_cp2_ParamLimits

0x10cd,	// (0x00014f8d) list_double_pane_t1_cp2

0x10e3,	// (0x00014fa3) list_double_pane_t2_cp2_ParamLimits

0x10e3,	// (0x00014fa3) list_double_pane_t2_cp2

0x110f,	// (0x00014fcf) list_single_pane_cp2_g3

0x111f,	// (0x00014fdf) list_single_pane_g1_cp2_ParamLimits

0x111f,	// (0x00014fdf) list_single_pane_g1_cp2

0x112b,	// (0x00014feb) list_single_pane_g2_cp2

0x1133,	// (0x00014ff3) list_single_pane_t1_cp2_ParamLimits

0x1133,	// (0x00014ff3) list_single_pane_t1_cp2

0xab3e,	// (0x0001e9fe) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xab3e,	// (0x0001e9fe) list_single_large_graphic_pane_g1_cp2

0x1159,	// (0x00015019) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1159,	// (0x00015019) list_single_large_graphic_pane_g2_cp2

0x1165,	// (0x00015025) list_single_large_graphic_pane_g3_cp2

0x116d,	// (0x0001502d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x116d,	// (0x0001502d) list_single_large_graphic_pane_g4_cp1

0x1187,	// (0x00015047) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1187,	// (0x00015047) list_single_large_graphic_pane_t1_cp2

0x27d0,	// (0x00016690) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x27d0,	// (0x00016690) list_single_graphic_heading_pane_g1_cp2

0xb153,	// (0x0001f013) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb153,	// (0x0001f013) list_single_graphic_heading_pane_g4_cp2

0x112b,	// (0x00014feb) list_single_graphic_heading_pane_g5_cp2

0x27dc,	// (0x0001669c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x27dc,	// (0x0001669c) list_single_graphic_heading_pane_t1_cp2

0xb164,	// (0x0001f024) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb164,	// (0x0001f024) list_single_graphic_heading_pane_t2_cp2

0x2791,	// (0x00016651) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2791,	// (0x00016651) list_single_2graphic_pane_g1_cp2

0xb153,	// (0x0001f013) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb153,	// (0x0001f013) list_single_2graphic_pane_g2_cp2

0x112b,	// (0x00014feb) list_single_2graphic_pane_g3_cp2

0x27ae,	// (0x0001666e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x27ae,	// (0x0001666e) list_single_2graphic_pane_g4_cp2

0x27ba,	// (0x0001667a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x27ba,	// (0x0001667a) list_single_2graphic_pane_t1_cp2

0xbf59,	// (0x0001fe19) list_highlight_pane_g10_cp1

0x2369,	// (0x00016229) list_highlight_pane_g1_cp1

0x2371,	// (0x00016231) list_highlight_pane_g2_cp1

0x2379,	// (0x00016239) list_highlight_pane_g3_cp1

0x2381,	// (0x00016241) list_highlight_pane_g4_cp1

0x2389,	// (0x00016249) list_highlight_pane_g5_cp1

0x2391,	// (0x00016251) list_highlight_pane_g6_cp1

0x2399,	// (0x00016259) list_highlight_pane_g7_cp1

0x23a1,	// (0x00016261) list_highlight_pane_g8_cp1

0x23a9,	// (0x00016269) list_highlight_pane_g9_cp1

0xb119,	// (0x0001efd9) form_field_slider_pane_t3

0xb127,	// (0x0001efe7) form_field_slider_pane_t4

0x22a5,	// (0x00016165) slider_form_pane_ParamLimits

0x22a5,	// (0x00016165) slider_form_pane

0xbf63,	// (0x0001fe23) control_abbreviations

0xbf63,	// (0x0001fe23) control_conventions

0xbf63,	// (0x0001fe23) control_definitions

0xbf63,	// (0x0001fe23) format_table_attribute

0x2a97,	// (0x00016957) bg_popup_preview_window_pane_g9

0xbf63,	// (0x0001fe23) format_table_data2

0xbf63,	// (0x0001fe23) format_table_data3

0xbf63,	// (0x0001fe23) format_table_data_example

0x0008,

0xbf63,	// (0x0001fe23) intro_purpose

0xf8eb,	// (0x000237ab) bg_popup_preview_window_pane_g

0xbf63,	// (0x0001fe23) texts_category

0xbf63,	// (0x0001fe23) texts_graphics

0x119d,	// (0x0001505d) text_digital

0x11ac,	// (0x0001506c) text_primary

0x11bb,	// (0x0001507b) text_primary_small

0x11ca,	// (0x0001508a) text_secondary

0x11d9,	// (0x00015099) text_title

0x32b0,	// (0x00017170) bg_passive_tab_pane_g1_cp3_srt

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp3_srt

0x32b9,	// (0x00017179) bg_passive_tab_pane_g3_cp3_srt

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp3_srt_ParamLimits

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp3_srt

0x32c2,	// (0x00017182) tabs_4_active_pane_srt_g1

0xb616,	// (0x0001f4d6) tabs_4_active_pane_srt_t1_ParamLimits

0xb616,	// (0x0001f4d6) tabs_4_active_pane_srt_t1

0x32b0,	// (0x00017170) bg_active_tab_pane_g1_cp3_copy1

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp3_copy1

0x32b9,	// (0x00017179) bg_active_tab_pane_g3_cp3_copy1

0xbfbf,	// (0x0001fe7f) tabs_2_long_active_pane_srt_ParamLimits

0xbfbf,	// (0x0001fe7f) tabs_2_long_active_pane_srt

0xbfbf,	// (0x0001fe7f) tabs_2_long_passive_pane_srt_ParamLimits

0xbfbf,	// (0x0001fe7f) tabs_2_long_passive_pane_srt

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp4_srt

0x2f0f,	// (0x00016dcf) bg_passive_tab_pane_g1_cp4_srt

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp4_srt

0x2f18,	// (0x00016dd8) bg_passive_tab_pane_g3_cp4_srt

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp4_srt_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp4_srt

0xb3c7,	// (0x0001f287) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb3c7,	// (0x0001f287) tabs_2_long_active_pane_srt_t1

0x2f0f,	// (0x00016dcf) bg_active_tab_pane_g1_cp4_srt

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp4_srt

0x2f18,	// (0x00016dd8) bg_active_tab_pane_g3_cp4_srt

0xbfb1,	// (0x0001fe71) tabs_3_long_active_pane_srt_ParamLimits

0xbfb1,	// (0x0001fe71) tabs_3_long_active_pane_srt

0xbfb1,	// (0x0001fe71) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xbfb1,	// (0x0001fe71) tabs_3_long_passive_pane_cp_srt

0xbfb1,	// (0x0001fe71) tabs_3_long_passive_pane_srt_ParamLimits

0xbfb1,	// (0x0001fe71) tabs_3_long_passive_pane_srt

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp5_srt

0x0ebb,	// (0x00014d7b) bg_passive_tab_pane_g1_cp5_srt

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp5_srt

0x0ec4,	// (0x00014d84) bg_passive_tab_pane_g3_cp5_srt

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp5_srt_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp5_srt

0xb3b1,	// (0x0001f271) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb3b1,	// (0x0001f271) tabs_3_long_active_pane_srt_t1

0x0ebb,	// (0x00014d7b) bg_active_tab_pane_g1_cp5_srt

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp5_srt

0x0ec4,	// (0x00014d84) bg_active_tab_pane_g3_cp5_srt

0x2eef,	// (0x00016daf) navi_text_pane_srt_t1

0x2ee7,	// (0x00016da7) navi_icon_pane_srt_g1

0x13a4,	// (0x00015264) midp_editing_number_pane_srt

0x11e8,	// (0x000150a8) midp_ticker_pane_srt

0x13ac,	// (0x0001526c) midp_ticker_pane_srt_g1

0x13b4,	// (0x00015274) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x00023633) midp_ticker_pane_srt_g

0x13bc,	// (0x0001527c) midp_ticker_pane_srt_t1

0x2ed8,	// (0x00016d98) midp_editing_number_pane_t1_copy1

0x1534,	// (0x000153f4) listscroll_midp_pane

0x1534,	// (0x000153f4) midp_form_pane

0x1252,	// (0x00015112) midp_info_popup_window_ParamLimits

0x1252,	// (0x00015112) midp_info_popup_window

0xdf24,	// (0x00021de4) bg_popup_sub_pane_cp50_ParamLimits

0xdf24,	// (0x00021de4) bg_popup_sub_pane_cp50

0x1f9f,	// (0x00015e5f) listscroll_midp_info_pane_ParamLimits

0x1f9f,	// (0x00015e5f) listscroll_midp_info_pane

0x1f87,	// (0x00015e47) listscroll_form_midp_pane_ParamLimits

0x1f87,	// (0x00015e47) listscroll_form_midp_pane

0x1f93,	// (0x00015e53) scroll_bar_cp050

0xb10d,	// (0x0001efcd) list_midp_pane

0x3fc4,	// (0x00017e84) signal_pane_g2_cp

0x1ea1,	// (0x00015d61) listscroll_midp_info_pane_t1_ParamLimits

0x1ea1,	// (0x00015d61) listscroll_midp_info_pane_t1

0x1eb9,	// (0x00015d79) listscroll_midp_info_pane_t2_ParamLimits

0x1eb9,	// (0x00015d79) listscroll_midp_info_pane_t2

0x1ef7,	// (0x00015db7) listscroll_midp_info_pane_t3_ParamLimits

0x1ef7,	// (0x00015db7) listscroll_midp_info_pane_t3

0x1f31,	// (0x00015df1) listscroll_midp_info_pane_t4_ParamLimits

0x1f31,	// (0x00015df1) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x000236e6) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x000236e6) listscroll_midp_info_pane_t

0xdfa4,	// (0x00021e64) scroll_pane_cp21

0x1e3b,	// (0x00015cfb) form_midp_field_choice_group_pane

0x1e44,	// (0x00015d04) form_midp_field_text_pane

0x1e87,	// (0x00015d47) form_midp_field_time_pane

0x1e8f,	// (0x00015d4f) form_midp_gauge_slider_pane

0x1e98,	// (0x00015d58) form_midp_gauge_wait_pane

0xbf63,	// (0x0001fe23) form_midp_image_pane

0xb0f0,	// (0x0001efb0) list_single_midp_pane_ParamLimits

0xb0f0,	// (0x0001efb0) list_single_midp_pane

0xb0c8,	// (0x0001ef88) form_midp_field_text_pane_t1

0x1bbc,	// (0x00015a7c) input_focus_pane_cp050

0x1e0a,	// (0x00015cca) list_midp_form_text_pane

0x1dae,	// (0x00015c6e) form_midp_field_choice_group_pane_t1

0x1dbc,	// (0x00015c7c) input_focus_pane_cp051

0x1dd0,	// (0x00015c90) list_midp_choice_pane

0xbf63,	// (0x0001fe23) status_idle_pane

0x1d92,	// (0x00015c52) form_midp_field_time_pane_t1

0xbf59,	// (0x0001fe19) wait_anim_pane_g2_copy1

0x1da0,	// (0x00015c60) form_midp_field_time_pane_t2

0x0001,

0x1302,	// (0x000151c2) aid_navinavi_width_2_pane

0xf821,	// (0x000236e1) form_midp_field_time_pane_t

0xbf63,	// (0x0001fe23) input_focus_pane_cp052

0xbf63,	// (0x0001fe23) bg_input_focus_pane_cp040

0x1d52,	// (0x00015c12) form_midp_gauge_slider_pane_t1

0x1d60,	// (0x00015c20) form_midp_gauge_slider_pane_t2

0xb0ac,	// (0x0001ef6c) form_midp_gauge_slider_pane_t3

0xb0ba,	// (0x0001ef7a) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x000236d8) form_midp_gauge_slider_pane_t

0x1d8a,	// (0x00015c4a) form_midp_slider_pane

0xbfbf,	// (0x0001fe7f) bg_input_focus_pane_cp041_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_input_focus_pane_cp041

0x1d1f,	// (0x00015bdf) form_midp_gauge_wait_pane_t1_ParamLimits

0x1d1f,	// (0x00015bdf) form_midp_gauge_wait_pane_t1

0x1d31,	// (0x00015bf1) form_midp_gauge_wait_pane_t2_ParamLimits

0x1d31,	// (0x00015bf1) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x000236d3) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x000236d3) form_midp_gauge_wait_pane_t

0x1d43,	// (0x00015c03) form_midp_wait_pane_ParamLimits

0x1d43,	// (0x00015c03) form_midp_wait_pane

0x1ce7,	// (0x00015ba7) form_midp_image_pane_g1

0x1cf0,	// (0x00015bb0) form_midp_image_pane_t1

0x1cff,	// (0x00015bbf) form_midp_image_pane_t2

0x1d0e,	// (0x00015bce) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x000236cc) form_midp_image_pane_t

0x1ccf,	// (0x00015b8f) list_single_midp_pane_g1

0x1cd8,	// (0x00015b98) list_single_midp_pane_t1

0xb095,	// (0x0001ef55) list_midp_form_item_pane_ParamLimits

0xb095,	// (0x0001ef55) list_midp_form_item_pane

0x12aa,	// (0x0001516a) list_midp_form_item_pane_t1

0x12b9,	// (0x00015179) midp_ticker_pane_g1

0x12c5,	// (0x00015185) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x00023619) midp_ticker_pane_g

0xabe3,	// (0x0001eaa3) midp_ticker_pane_t1

0xb572,	// (0x0001f432) midp_editing_number_pane_t1

0x315e,	// (0x0001701e) midp_editing_number_pane

0x316d,	// (0x0001702d) midp_ticker_pane

0x2ea0,	// (0x00016d60) ai_message_heading_pane

0xbf63,	// (0x0001fe23) bg_popup_window_pane_cp14

0x2ea8,	// (0x00016d68) listscroll_ai_message_pane

0x2e26,	// (0x00016ce6) ai_message_heading_pane_g1_ParamLimits

0x2e26,	// (0x00016ce6) ai_message_heading_pane_g1

0x2e32,	// (0x00016cf2) ai_message_heading_pane_g2_ParamLimits

0x2e32,	// (0x00016cf2) ai_message_heading_pane_g2

0x2e40,	// (0x00016d00) ai_message_heading_pane_g3_ParamLimits

0x2e40,	// (0x00016d00) ai_message_heading_pane_g3

0x2e4c,	// (0x00016d0c) ai_message_heading_pane_g4_ParamLimits

0x2e4c,	// (0x00016d0c) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0002380d) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0002380d) ai_message_heading_pane_g

0x2e58,	// (0x00016d18) ai_message_heading_pane_t1_ParamLimits

0x2e58,	// (0x00016d18) ai_message_heading_pane_t1

0x2e72,	// (0x00016d32) ai_message_heading_pane_t2_ParamLimits

0x2e72,	// (0x00016d32) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x00023816) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x00023816) ai_message_heading_pane_t

0x2e86,	// (0x00016d46) bg_popup_heading_pane_cp1_ParamLimits

0x2e86,	// (0x00016d46) bg_popup_heading_pane_cp1

0x2e14,	// (0x00016cd4) list_ai_message_pane_ParamLimits

0x2e14,	// (0x00016cd4) list_ai_message_pane

0xdfa4,	// (0x00021e64) scroll_pane_cp10

0x2db0,	// (0x00016c70) list_ai_message_pane_g1

0x2db8,	// (0x00016c78) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x000237ea) list_ai_message_pane_g

0x2dc0,	// (0x00016c80) list_ai_message_pane_t1_ParamLimits

0x2dc0,	// (0x00016c80) list_ai_message_pane_t1

0x2dd5,	// (0x00016c95) list_ai_message_pane_t2_ParamLimits

0x2dd5,	// (0x00016c95) list_ai_message_pane_t2

0x2dea,	// (0x00016caa) list_ai_message_pane_t3_ParamLimits

0x2dea,	// (0x00016caa) list_ai_message_pane_t3

0x2dff,	// (0x00016cbf) list_ai_message_pane_t4_ParamLimits

0x2dff,	// (0x00016cbf) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x000237ef) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x000237ef) list_ai_message_pane_t

0xb385,	// (0x0001f245) cell_ai_soft_ind_pane_ParamLimits

0xb385,	// (0x0001f245) cell_ai_soft_ind_pane

0x12e3,	// (0x000151a3) cell_ai_soft_ind_pane_g1_ParamLimits

0x12e3,	// (0x000151a3) cell_ai_soft_ind_pane_g1

0xbf63,	// (0x0001fe23) grid_highlight_cp1

0x12f0,	// (0x000151b0) text_secondary_cp56_ParamLimits

0x12f0,	// (0x000151b0) text_secondary_cp56

0x2d6e,	// (0x00016c2e) example_general_pane_ParamLimits

0x2d6e,	// (0x00016c2e) example_general_pane

0x2d7a,	// (0x00016c3a) example_parent_pane_g1_ParamLimits

0x2d7a,	// (0x00016c3a) example_parent_pane_g1

0x2d86,	// (0x00016c46) example_parent_pane_t1_ParamLimits

0x2d86,	// (0x00016c46) example_parent_pane_t1

0x944e,	// (0x0001d30e) popup_preview_text_window_ParamLimits

0x944e,	// (0x0001d30e) popup_preview_text_window

0x1117,	// (0x00014fd7) list_single_pane_cp2_g4

0xc1b4,	// (0x00020074) bg_popup_preview_window_pane_ParamLimits

0xc1b4,	// (0x00020074) bg_popup_preview_window_pane

0x2aa1,	// (0x00016961) popup_preview_text_window_t1_ParamLimits

0x2aa1,	// (0x00016961) popup_preview_text_window_t1

0x2abf,	// (0x0001697f) popup_preview_text_window_t2_ParamLimits

0x2abf,	// (0x0001697f) popup_preview_text_window_t2

0x2b08,	// (0x000169c8) popup_preview_text_window_t3_ParamLimits

0x2b08,	// (0x000169c8) popup_preview_text_window_t3

0x2b4d,	// (0x00016a0d) popup_preview_text_window_t4_ParamLimits

0x2b4d,	// (0x00016a0d) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x000237be) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x000237be) popup_preview_text_window_t

0x2bcb,	// (0x00016a8b) scroll_pane_cp11

0x1a96,	// (0x00015956) bg_popup_preview_window_pane_g1

0x2a55,	// (0x00016915) bg_popup_preview_window_pane_g2

0x2a5f,	// (0x0001691f) bg_popup_preview_window_pane_g3

0x2a69,	// (0x00016929) bg_popup_preview_window_pane_g4

0x2a73,	// (0x00016933) bg_popup_preview_window_pane_g5

0x2a7d,	// (0x0001693d) bg_popup_preview_window_pane_g6

0x2a85,	// (0x00016945) bg_popup_preview_window_pane_g7

0x2a8d,	// (0x0001694d) bg_popup_preview_window_pane_g8

0xd893,	// (0x00021753) aid_popup_width_pane

0x93be,	// (0x0001d27e) popup_midp_note_alarm_window_ParamLimits

0x93be,	// (0x0001d27e) popup_midp_note_alarm_window

0xddd4,	// (0x00021c94) data_form_pane_ParamLimits

0xa648,	// (0x0001e508) form_field_data_pane_g1

0xa652,	// (0x0001e512) form_field_data_pane_t1_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_ParamLimits

0xddee,	// (0x00021cae) data_form_wide_pane_ParamLimits

0xddfa,	// (0x00021cba) form_field_data_wide_pane_g1

0xde26,	// (0x00021ce6) form_field_data_wide_pane_t1_ParamLimits

0xc369,	// (0x00020229) input_focus_pane_cp6_ParamLimits

0xa793,	// (0x0001e653) input_popup_find_pane_g1_ParamLimits

0xa793,	// (0x0001e653) input_popup_find_pane_g1

0xe27c,	// (0x0002213c) aid_navi_side_left_pane

0xe480,	// (0x00022340) aid_navi_side_right_pane

0x2464,	// (0x00016324) bg_popup_window_pane_cp30_ParamLimits

0x2464,	// (0x00016324) bg_popup_window_pane_cp30

0x24de,	// (0x0001639e) popup_midp_note_alarm_window_g1_ParamLimits

0x24de,	// (0x0001639e) popup_midp_note_alarm_window_g1

0x250e,	// (0x000163ce) popup_midp_note_alarm_window_t1_ParamLimits

0x250e,	// (0x000163ce) popup_midp_note_alarm_window_t1

0x25af,	// (0x0001646f) popup_midp_note_alarm_window_t2_ParamLimits

0x25af,	// (0x0001646f) popup_midp_note_alarm_window_t2

0x265d,	// (0x0001651d) popup_midp_note_alarm_window_t3_ParamLimits

0x265d,	// (0x0001651d) popup_midp_note_alarm_window_t3

0x268f,	// (0x0001654f) popup_midp_note_alarm_window_t4_ParamLimits

0x268f,	// (0x0001654f) popup_midp_note_alarm_window_t4

0x26b5,	// (0x00016575) popup_midp_note_alarm_window_t5_ParamLimits

0x26b5,	// (0x00016575) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0002375b) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0002375b) popup_midp_note_alarm_window_t

0x2761,	// (0x00016621) wait_bar_pane_cp1_ParamLimits

0x2761,	// (0x00016621) wait_bar_pane_cp1

0xbf63,	// (0x0001fe23) wait_anim_pane_copy1

0xbf63,	// (0x0001fe23) wait_border_pane_copy1

0x2149,	// (0x00016009) wait_border_pane_g1_copy1

0xde40,	// (0x00021d00) form_field_popup_pane_g1

0xa66c,	// (0x0001e52c) form_field_popup_pane_t1_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_cp7_ParamLimits

0xde48,	// (0x00021d08) list_form_pane_ParamLimits

0xde54,	// (0x00021d14) form_field_popup_wide_pane_g1

0xde5c,	// (0x00021d1c) form_field_popup_wide_pane_t1_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_cp8_ParamLimits

0xde71,	// (0x00021d31) list_form_wide_pane_ParamLimits

0x333d,	// (0x000171fd) aid_size_cell_graphic_pane

0xa6eb,	// (0x0001e5ab) data_form_pane_t1_ParamLimits

0xb556,	// (0x0001f416) data_form_wide_pane_t1_ParamLimits

0xad1e,	// (0x0001ebde) bg_status_flat_pane

0x9e88,	// (0x0001dd48) title_pane_t1_ParamLimits

0xbf79,	// (0x0001fe39) title_pane_t2_ParamLimits

0xbf9f,	// (0x0001fe5f) title_pane_t3_ParamLimits

0xf55d,	// (0x0002341d) title_pane_t_ParamLimits

0xa896,	// (0x0001e756) level_1_signal_ParamLimits

0xa8a8,	// (0x0001e768) level_2_signal_ParamLimits

0xa8bb,	// (0x0001e77b) level_3_signal_ParamLimits

0xa8ce,	// (0x0001e78e) level_4_signal_ParamLimits

0xa8e1,	// (0x0001e7a1) level_5_signal_ParamLimits

0xa8f4,	// (0x0001e7b4) level_6_signal_ParamLimits

0xa907,	// (0x0001e7c7) level_7_signal_ParamLimits

0xa896,	// (0x0001e756) level_1_battery_ParamLimits

0xa8a8,	// (0x0001e768) level_2_battery_ParamLimits

0xa8bb,	// (0x0001e77b) level_3_battery_ParamLimits

0xa8ce,	// (0x0001e78e) level_4_battery_ParamLimits

0xa8e1,	// (0x0001e7a1) level_5_battery_ParamLimits

0xa8f4,	// (0x0001e7b4) level_6_battery_ParamLimits

0xa907,	// (0x0001e7c7) level_7_battery_ParamLimits

0x2369,	// (0x00016229) bg_status_flat_pane_g1

0x2371,	// (0x00016231) bg_status_flat_pane_g2

0x2379,	// (0x00016239) bg_status_flat_pane_g3

0x2381,	// (0x00016241) bg_status_flat_pane_g4

0x2389,	// (0x00016249) bg_status_flat_pane_g5

0x2391,	// (0x00016251) bg_status_flat_pane_g6

0x2399,	// (0x00016259) bg_status_flat_pane_g7

0x9f1c,	// (0x0001dddc) tabs_3_active_pane_t1_ParamLimits

0x9f1c,	// (0x0001dddc) tabs_3_passive_pane_t1_ParamLimits

0x9f36,	// (0x0001ddf6) tabs_4_active_pane_t1_ParamLimits

0x9f36,	// (0x0001ddf6) tabs_4_1_passive_pane_t1_ParamLimits

0xa7a9,	// (0x0001e669) tabs_2_active_pane_t1_ParamLimits

0xa7a9,	// (0x0001e669) tabs_2_passive_pane_t1_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp4_ParamLimits

0xa7bb,	// (0x0001e67b) tabs_2_long_active_pane_t1_ParamLimits

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp4_ParamLimits

0xea64,	// (0x00022924) list_single_midp_graphic_pane_t1_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_active_tab_pane_cp5_ParamLimits

0xa7ce,	// (0x0001e68e) tabs_3_long_active_pane_t1_ParamLimits

0x1534,	// (0x000153f4) bg_passive_tab_pane_cp5_ParamLimits

0xea64,	// (0x00022924) list_single_midp_graphic_pane_t1

0xad1e,	// (0x0001ebde) bg_status_flat_pane_ParamLimits

0x16e0,	// (0x000155a0) indicator_pane_cp2_ParamLimits

0x16e0,	// (0x000155a0) indicator_pane_cp2

0xaeb4,	// (0x0001ed74) navi_pane_srt_ParamLimits

0xaeb4,	// (0x0001ed74) navi_pane_srt

0x1847,	// (0x00015707) popup_clock_digital_analogue_window_cp1

0xc01d,	// (0x0001fedd) indicator_pane_t1

0x11e8,	// (0x000150a8) copy_highlight_pane

0x11e8,	// (0x000150a8) cursor_graphics_pane

0x11e8,	// (0x000150a8) graphic_within_text_pane

0x11e8,	// (0x000150a8) link_highlight_pane

0x2b8e,	// (0x00016a4e) popup_preview_text_window_t5_ParamLimits

0x2b8e,	// (0x00016a4e) popup_preview_text_window_t5

0x130c,	// (0x000151cc) cursor_digital_pane

0x130c,	// (0x000151cc) cursor_primary_pane

0x131d,	// (0x000151dd) cursor_primary_small_pane

0x1325,	// (0x000151e5) cursor_secondary_pane

0x132d,	// (0x000151ed) cursor_title_pane

0x130c,	// (0x000151cc) link_highlight_digital_pane

0x1314,	// (0x000151d4) link_highlight_primary_pane

0x131d,	// (0x000151dd) link_highlight_primary_small_pane

0x1325,	// (0x000151e5) link_highlight_secondary_pane

0x132d,	// (0x000151ed) link_highlight_title_pane

0x130c,	// (0x000151cc) copy_highlight_digital_pane

0x130c,	// (0x000151cc) copy_highlight_primary_pane

0x131d,	// (0x000151dd) copy_highlight_primary_small_pane

0x1325,	// (0x000151e5) copy_highlight_secondary_pane

0x132d,	// (0x000151ed) copy_highlight_title_pane

0x1325,	// (0x000151e5) graphic_text_digital_pane

0x2407,	// (0x000162c7) graphic_text_primary_pane

0x2410,	// (0x000162d0) graphic_text_primary_small_pane

0x131d,	// (0x000151dd) graphic_text_secondary_pane

0x130c,	// (0x000151cc) graphic_text_title_pane

0xabf5,	// (0x0001eab5) cursor_primary_pane_g1

0x23f9,	// (0x000162b9) cursor_text_primary_t1

0xb149,	// (0x0001f009) cursor_primary_small_pane_g1

0x23eb,	// (0x000162ab) cursor_text_primary_small_t1

0xb13f,	// (0x0001efff) cursor_primary_small_pane_g1_copy1

0x23d3,	// (0x00016293) cursor_text_primary_small_t1_copy1

0x23b1,	// (0x00016271) cursor_text_title_t1

0xb135,	// (0x0001eff5) cursor_title_pane_g1

0xabf5,	// (0x0001eab5) cursor_digital_pane_g1

0x133f,	// (0x000151ff) cursor_text_digital_t1

0x134d,	// (0x0001520d) link_highlight_primary_pane_g1

0x235a,	// (0x0001621a) link_highlight_primary_pane_t1

0x134d,	// (0x0001520d) link_highlight_primary_small_pane_g1

0x1355,	// (0x00015215) link_highlight_primary_small_pane_t1

0x1364,	// (0x00015224) link_highlight_secondary_pane_g1

0x136c,	// (0x0001522c) link_highlight_secondary_pane_t1

0x22ce,	// (0x0001618e) link_highlight_title_pane_g1

0x22d6,	// (0x00016196) link_highlight_title_pane_t1

0x22b7,	// (0x00016177) link_highlight_digital_pane_g1

0x22bf,	// (0x0001617f) link_highlight_digital_pane_t1

0x217f,	// (0x0001603f) copy_highlight_primary_pane_g1

0x2196,	// (0x00016056) copy_highlight_primary_pane_t1

0x217f,	// (0x0001603f) copy_highlight_primary_small_pane_g1

0x2187,	// (0x00016047) copy_highlight_primary_small_pane_t1

0x137b,	// (0x0001523b) copy_highlight_secondary_pane_g1

0x1383,	// (0x00015243) copy_highlight_secondary_pane_t1

0x2168,	// (0x00016028) copy_highlight_title_pane_g1

0x2170,	// (0x00016030) copy_highlight_title_pane_t1

0x217f,	// (0x0001603f) copy_highlight_digital_pane_g1

0x350d,	// (0x000173cd) copy_highlight_digital_pane_t1

0x3461,	// (0x00017321) graphic_text_primary_pane_g1

0x34f1,	// (0x000173b1) graphic_text_primary_pane_t1

0x34ff,	// (0x000173bf) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0002388a) graphic_text_primary_pane_t

0x34cd,	// (0x0001738d) graphic_text_primary_small_pane_g1

0x34d5,	// (0x00017395) graphic_text_primary_small_pane_t1

0x34e3,	// (0x000173a3) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x00023885) graphic_text_primary_small_pane_t

0x34a9,	// (0x00017369) graphic_text_secondary_pane_g1

0x34b1,	// (0x00017371) graphic_text_secondary_pane_t1

0x34bf,	// (0x0001737f) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x00023880) graphic_text_secondary_pane_t

0x3485,	// (0x00017345) graphic_text_title_pane_g1

0x348d,	// (0x0001734d) graphic_text_title_pane_t1

0x349b,	// (0x0001735b) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0002387b) graphic_text_title_pane_t

0x3461,	// (0x00017321) graphic_text_digital_pane_g1

0x3469,	// (0x00017329) graphic_text_digital_pane_t1

0x3477,	// (0x00017337) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x00023876) graphic_text_digital_pane_t

0xbfbf,	// (0x0001fe7f) navi_icon_pane_srt_ParamLimits

0xbfbf,	// (0x0001fe7f) navi_icon_pane_srt

0xbf63,	// (0x0001fe23) navi_midp_pane_srt

0xbf63,	// (0x0001fe23) navi_navi_pane_srt

0xbfbf,	// (0x0001fe7f) navi_text_pane_srt_ParamLimits

0xbfbf,	// (0x0001fe7f) navi_text_pane_srt

0x342c,	// (0x000172ec) navi_navi_icon_text_pane_srt

0x3434,	// (0x000172f4) navi_navi_pane_srt_g1_ParamLimits

0x3434,	// (0x000172f4) navi_navi_pane_srt_g1

0x3446,	// (0x00017306) navi_navi_pane_srt_g2_ParamLimits

0x3446,	// (0x00017306) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x00023871) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x00023871) navi_navi_pane_srt_g

0x3458,	// (0x00017318) navi_navi_tabs_pane_srt

0x342c,	// (0x000172ec) navi_navi_text_pane_srt

0x342c,	// (0x000172ec) navi_navi_volume_pane_srt

0x341d,	// (0x000172dd) navi_navi_text_pane_srt_t1

0xec3e,	// (0x00022afe) navi_navi_volume_pane_srt_g1

0xec46,	// (0x00022b06) volume_small_pane_srt_ParamLimits

0xec46,	// (0x00022b06) volume_small_pane_srt

0xe749,	// (0x00022609) volume_small_pane_srt_g1_ParamLimits

0xe749,	// (0x00022609) volume_small_pane_srt_g1

0xe759,	// (0x00022619) volume_small_pane_srt_g2_ParamLimits

0xe759,	// (0x00022619) volume_small_pane_srt_g2

0xe76a,	// (0x0002262a) volume_small_pane_srt_g3_ParamLimits

0xe76a,	// (0x0002262a) volume_small_pane_srt_g3

0xe77b,	// (0x0002263b) volume_small_pane_srt_g4_ParamLimits

0xe77b,	// (0x0002263b) volume_small_pane_srt_g4

0xe78c,	// (0x0002264c) volume_small_pane_srt_g5_ParamLimits

0xe78c,	// (0x0002264c) volume_small_pane_srt_g5

0xe79d,	// (0x0002265d) volume_small_pane_srt_g6_ParamLimits

0xe79d,	// (0x0002265d) volume_small_pane_srt_g6

0xe7ae,	// (0x0002266e) volume_small_pane_srt_g7_ParamLimits

0xe7ae,	// (0x0002266e) volume_small_pane_srt_g7

0xe7bf,	// (0x0002267f) volume_small_pane_srt_g8_ParamLimits

0xe7bf,	// (0x0002267f) volume_small_pane_srt_g8

0xe7d0,	// (0x00022690) volume_small_pane_srt_g9_ParamLimits

0xe7d0,	// (0x00022690) volume_small_pane_srt_g9

0xe7e1,	// (0x000226a1) volume_small_pane_srt_g10_ParamLimits

0xe7e1,	// (0x000226a1) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0002361e) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0002361e) volume_small_pane_srt_g

0xc269,	// (0x00020129) query_popup_data_pane_cp2

0x3403,	// (0x000172c3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3403,	// (0x000172c3) navi_navi_icon_text_pane_srt_t1

0x2407,	// (0x000162c7) navi_tabs_2_long_pane_srt

0x2407,	// (0x000162c7) navi_tabs_2_pane_srt

0x2407,	// (0x000162c7) navi_tabs_3_long_pane_srt

0x2407,	// (0x000162c7) navi_tabs_3_pane_srt

0x2407,	// (0x000162c7) navi_tabs_4_pane_srt

0xec1e,	// (0x00022ade) tabs_2_active_pane_srt_ParamLimits

0xec1e,	// (0x00022ade) tabs_2_active_pane_srt

0xec2e,	// (0x00022aee) tabs_2_passive_pane_srt_ParamLimits

0xec2e,	// (0x00022aee) tabs_2_passive_pane_srt

0x1bbc,	// (0x00015a7c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1bbc,	// (0x00015a7c) bg_passive_tab_pane_cp1_srt

0x33cf,	// (0x0001728f) bg_passive_tab_pane_g1_cp1_srt

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp1_srt

0x33d8,	// (0x00017298) bg_passive_tab_pane_g3_cp1_srt

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp1_srt_ParamLimits

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp1_srt

0x33e1,	// (0x000172a1) tabs_2_active_pane_srt_g1

0xb697,	// (0x0001f557) tabs_2_active_pane_srt_t1_ParamLimits

0xb697,	// (0x0001f557) tabs_2_active_pane_srt_t1

0x33cf,	// (0x0001728f) bg_active_tab_pane_g1_cp1_srt

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp1_srt

0x33d8,	// (0x00017298) bg_active_tab_pane_g3_cp1_srt

0xebeb,	// (0x00022aab) tabs_3_active_pane_srt_ParamLimits

0xebeb,	// (0x00022aab) tabs_3_active_pane_srt

0xebfc,	// (0x00022abc) tabs_3_passive_pane_cp_srt_ParamLimits

0xebfc,	// (0x00022abc) tabs_3_passive_pane_cp_srt

0xec0d,	// (0x00022acd) tabs_3_passive_pane_srt_ParamLimits

0xec0d,	// (0x00022acd) tabs_3_passive_pane_srt

0x1bbc,	// (0x00015a7c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1bbc,	// (0x00015a7c) bg_passive_tab_pane_cp2_srt

0x1392,	// (0x00015252) bg_passive_tab_pane_g1_cp2_srt

0x0e31,	// (0x00014cf1) bg_passive_tab_pane_g2_cp2_srt

0x139b,	// (0x0001525b) bg_passive_tab_pane_g3_cp2_srt

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp2_srt_ParamLimits

0xbfb1,	// (0x0001fe71) bg_active_tab_pane_cp2_srt

0x33b5,	// (0x00017275) tabs_3_active_pane_srt_g1

0xb681,	// (0x0001f541) tabs_3_active_pane_srt_t1_ParamLimits

0xb681,	// (0x0001f541) tabs_3_active_pane_srt_t1

0x1392,	// (0x00015252) bg_active_tab_pane_g1_cp2_srt

0x0e31,	// (0x00014cf1) bg_active_tab_pane_g2_cp2_srt

0x139b,	// (0x0001525b) bg_active_tab_pane_g3_cp2_srt

0xeba3,	// (0x00022a63) tabs_4_active_pane_srt_ParamLimits

0xeba3,	// (0x00022a63) tabs_4_active_pane_srt

0xebb5,	// (0x00022a75) tabs_4_passive_pane_cp2_srt_ParamLimits

0xebb5,	// (0x00022a75) tabs_4_passive_pane_cp2_srt

0xe801,	// (0x000226c1) aid_size_cell_toolbar

0x2f82,	// (0x00016e42) main_idle_act_pane_ParamLimits

0xe8b3,	// (0x00022773) popup_large_graphic_colour_window_ParamLimits

0x9714,	// (0x0001d5d4) popup_toolbar_window_ParamLimits

0x9714,	// (0x0001d5d4) popup_toolbar_window

0x31a3,	// (0x00017063) list_single_graphic_2heading_pane_ParamLimits

0x31a3,	// (0x00017063) list_single_graphic_2heading_pane

0xe291,	// (0x00022151) aid_size_cell_apps_grid_lsc_pane

0xe2a3,	// (0x00022163) aid_size_cell_apps_grid_prt_pane

0x1534,	// (0x000153f4) bg_wml_button_pane_cp1_ParamLimits

0x1534,	// (0x000153f4) bg_wml_button_pane_cp1

0xb0c8,	// (0x0001ef88) form_midp_field_text_pane_t1_ParamLimits

0x1bbc,	// (0x00015a7c) input_focus_pane_cp050_ParamLimits

0x1e0a,	// (0x00015cca) list_midp_form_text_pane_ParamLimits

0x1dbc,	// (0x00015c7c) input_focus_pane_cp051_ParamLimits

0x1dd0,	// (0x00015c90) list_midp_choice_pane_ParamLimits

0xb07f,	// (0x0001ef3f) list_single_2graphic_pane_cp3_ParamLimits

0xb07f,	// (0x0001ef3f) list_single_2graphic_pane_cp3

0x4343,	// (0x00018203) list_single_midp_graphic_pane_ParamLimits

0x4343,	// (0x00018203) list_single_midp_graphic_pane

0xe96b,	// (0x0002282b) list_single_graphic_2heading_pane_g1_ParamLimits

0xe96b,	// (0x0002282b) list_single_graphic_2heading_pane_g1

0xe977,	// (0x00022837) list_single_graphic_2heading_pane_g4_ParamLimits

0xe977,	// (0x00022837) list_single_graphic_2heading_pane_g4

0xe983,	// (0x00022843) list_single_graphic_2heading_pane_g5_ParamLimits

0xe983,	// (0x00022843) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x00023671) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x00023671) list_single_graphic_2heading_pane_g

0xe98f,	// (0x0002284f) list_single_graphic_2heading_pane_t1_ParamLimits

0xe98f,	// (0x0002284f) list_single_graphic_2heading_pane_t1

0xe9a3,	// (0x00022863) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9a3,	// (0x00022863) list_single_graphic_2heading_pane_t2

0xe9bf,	// (0x0002287f) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9bf,	// (0x0002287f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00023678) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00023678) list_single_graphic_2heading_pane_t

0x19a6,	// (0x00015866) bg_popup_sub_pane_cp2

0x19d0,	// (0x00015890) grid_toobar_pane

0xe9d7,	// (0x00022897) cell_toolbar_pane_ParamLimits

0xe9d7,	// (0x00022897) cell_toolbar_pane

0x1a3a,	// (0x000158fa) cell_toolbar_pane_g1_ParamLimits

0x1a3a,	// (0x000158fa) cell_toolbar_pane_g1

0x1a4e,	// (0x0001590e) cell_toolbar_pane_g2_ParamLimits

0x1a4e,	// (0x0001590e) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x00023686) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x00023686) cell_toolbar_pane_g

0x1a70,	// (0x00015930) grid_highlight_pane_cp2_ParamLimits

0x1a70,	// (0x00015930) grid_highlight_pane_cp2

0x1a8a,	// (0x0001594a) toolbar_button_pane

0x1a96,	// (0x00015956) toolbar_button_pane_g1

0x1a9e,	// (0x0001595e) toolbar_button_pane_g2

0x1aa6,	// (0x00015966) toolbar_button_pane_g3

0x1aae,	// (0x0001596e) toolbar_button_pane_g4

0x1ab6,	// (0x00015976) toolbar_button_pane_g5

0x1abe,	// (0x0001597e) toolbar_button_pane_g6

0x1ac6,	// (0x00015986) toolbar_button_pane_g7

0x1ace,	// (0x0001598e) toolbar_button_pane_g8

0x1ad6,	// (0x00015996) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0002368b) toolbar_button_pane_g

0xea0f,	// (0x000228cf) list_single_2graphic_pane_g1_cp3_ParamLimits

0xea0f,	// (0x000228cf) list_single_2graphic_pane_g1_cp3

0x976c,	// (0x0001d62c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x976c,	// (0x0001d62c) list_single_2graphic_pane_g2_cp3

0xea1b,	// (0x000228db) list_single_2graphic_pane_g3_cp3

0xea31,	// (0x000228f1) list_single_2graphic_pane_g4_cp3_ParamLimits

0xea31,	// (0x000228f1) list_single_2graphic_pane_g4_cp3

0xea3d,	// (0x000228fd) list_single_2graphic_pane_t1_cp3_ParamLimits

0xea3d,	// (0x000228fd) list_single_2graphic_pane_t1_cp3

0xea58,	// (0x00022918) list_single_midp_graphic_pane_g2_ParamLimits

0xea58,	// (0x00022918) list_single_midp_graphic_pane_g2

0xe809,	// (0x000226c9) aid_zoom_text_primary

0xe811,	// (0x000226d1) aid_zoom_text_secondary

0x144f,	// (0x0001530f) status_small_pane_g7_ParamLimits

0x144f,	// (0x0001530f) status_small_pane_g7

0x1472,	// (0x00015332) status_small_pane_t1_ParamLimits

0x9e64,	// (0x0001dd24) title_pane_g2

0x0003,

0xf554,	// (0x00023414) title_pane_g

0xa0fc,	// (0x0001dfbc) aid_size_cell_colour_1_pane_ParamLimits

0xa0fc,	// (0x0001dfbc) aid_size_cell_colour_1_pane

0xa110,	// (0x0001dfd0) aid_size_cell_colour_2_pane_ParamLimits

0xa110,	// (0x0001dfd0) aid_size_cell_colour_2_pane

0xa124,	// (0x0001dfe4) aid_size_cell_colour_3_pane_ParamLimits

0xa124,	// (0x0001dfe4) aid_size_cell_colour_3_pane

0xa138,	// (0x0001dff8) aid_size_cell_colour_4_pane_ParamLimits

0xa138,	// (0x0001dff8) aid_size_cell_colour_4_pane

0xe183,	// (0x00022043) title_pane_stacon_g1_ParamLimits

0xe183,	// (0x00022043) title_pane_stacon_g1

0x21ed,	// (0x000160ad) popup_note_wait_window_g3_ParamLimits

0x21ed,	// (0x000160ad) popup_note_wait_window_g3

0x2264,	// (0x00016124) popup_note_wait_window_t5_ParamLimits

0x2264,	// (0x00016124) popup_note_wait_window_t5

0xbf63,	// (0x0001fe23) main_feb_china_hwr_fs_writing_pane

0x90ab,	// (0x0001cf6b) popup_feb_china_hwr_fs_window_ParamLimits

0x90ab,	// (0x0001cf6b) popup_feb_china_hwr_fs_window

0x977d,	// (0x0001d63d) aid_size_cell_hwr_fs_ParamLimits

0x977d,	// (0x0001d63d) aid_size_cell_hwr_fs

0x1bbc,	// (0x00015a7c) bg_popup_sub_pane_cp3_ParamLimits

0x1bbc,	// (0x00015a7c) bg_popup_sub_pane_cp3

0x9792,	// (0x0001d652) grid_hwr_fs_pane_ParamLimits

0x9792,	// (0x0001d652) grid_hwr_fs_pane

0xea7a,	// (0x0002293a) linegrid_hwr_fs_pane_ParamLimits

0xea7a,	// (0x0002293a) linegrid_hwr_fs_pane

0x97aa,	// (0x0001d66a) cell_hwr_fs_pane_ParamLimits

0x97aa,	// (0x0001d66a) cell_hwr_fs_pane

0x1bc8,	// (0x00015a88) linegrid_hwr_fs_pane_g1_ParamLimits

0x1bc8,	// (0x00015a88) linegrid_hwr_fs_pane_g1

0xb053,	// (0x0001ef13) linegrid_hwr_fs_pane_g2_ParamLimits

0xb053,	// (0x0001ef13) linegrid_hwr_fs_pane_g2

0x1be6,	// (0x00015aa6) linegrid_hwr_fs_pane_g3_ParamLimits

0x1be6,	// (0x00015aa6) linegrid_hwr_fs_pane_g3

0xea8a,	// (0x0002294a) linegrid_hwr_fs_pane_g4_ParamLimits

0xea8a,	// (0x0002294a) linegrid_hwr_fs_pane_g4

0xeaa8,	// (0x00022968) linegrid_hwr_fs_pane_g5_ParamLimits

0xeaa8,	// (0x00022968) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x000236b1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x000236b1) linegrid_hwr_fs_pane_g

0x1bf2,	// (0x00015ab2) cell_hwr_fs_pane_g1_ParamLimits

0x1bf2,	// (0x00015ab2) cell_hwr_fs_pane_g1

0x18dd,	// (0x0001579d) cell_hwr_fs_pane_g2_ParamLimits

0x18dd,	// (0x0001579d) cell_hwr_fs_pane_g2

0xb065,	// (0x0001ef25) cell_hwr_fs_pane_g3_ParamLimits

0xb065,	// (0x0001ef25) cell_hwr_fs_pane_g3

0xb072,	// (0x0001ef32) cell_hwr_fs_pane_g4_ParamLimits

0xb072,	// (0x0001ef32) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x000236bc) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x000236bc) cell_hwr_fs_pane_g

0x97d0,	// (0x0001d690) cell_hwr_fs_pane_t1

0xbf63,	// (0x0001fe23) grid_highlight_pane_cp6

0xbf63,	// (0x0001fe23) main_idle_act2_pane

0xdf8b,	// (0x00021e4b) aid_inside_area_popup_secondary

0xb1b0,	// (0x0001f070) aid_inside_area_window_primary_ParamLimits

0xb1b0,	// (0x0001f070) aid_inside_area_window_primary

0x351c,	// (0x000173dc) ai2_news_ticker_pane

0x3524,	// (0x000173e4) aid_size_cell_ai1_link_ParamLimits

0x3524,	// (0x000173e4) aid_size_cell_ai1_link

0x353e,	// (0x000173fe) popup_ai2_data_window_ParamLimits

0x353e,	// (0x000173fe) popup_ai2_data_window

0x355c,	// (0x0001741c) popup_ai2_link_window_ParamLimits

0x355c,	// (0x0001741c) popup_ai2_link_window

0x1bbc,	// (0x00015a7c) bg_popup_sub_pane_cp4_ParamLimits

0x1bbc,	// (0x00015a7c) bg_popup_sub_pane_cp4

0x3572,	// (0x00017432) grid_ai2_link_pane_ParamLimits

0x3572,	// (0x00017432) grid_ai2_link_pane

0x3589,	// (0x00017449) popup_ai2_link_window_g1_ParamLimits

0x3589,	// (0x00017449) popup_ai2_link_window_g1

0x3595,	// (0x00017455) popup_ai2_link_window_g2_ParamLimits

0x3595,	// (0x00017455) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0002388f) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0002388f) popup_ai2_link_window_g

0x35a6,	// (0x00017466) ai2_mp_button_pane

0x35ae,	// (0x0001746e) ai2_mp_volume_pane

0x1dbc,	// (0x00015c7c) bg_popup_sub_pane_cp5_ParamLimits

0x1dbc,	// (0x00015c7c) bg_popup_sub_pane_cp5

0x35b6,	// (0x00017476) heading_ai2_gene_pane_ParamLimits

0x35b6,	// (0x00017476) heading_ai2_gene_pane

0x35c2,	// (0x00017482) list_ai2_gene_pane_ParamLimits

0x35c2,	// (0x00017482) list_ai2_gene_pane

0x360a,	// (0x000174ca) cell_ai2_link_pane_ParamLimits

0x360a,	// (0x000174ca) cell_ai2_link_pane

0x3620,	// (0x000174e0) cell_ai2_link_pane_g1

0xbf63,	// (0x0001fe23) grid_highlight_pane_cp7

0xec5b,	// (0x00022b1b) ai2_mp_volume_pane_g1

0x36f3,	// (0x000175b3) ai2_mp_volume_pane_g2

0x3668,	// (0x00017528) list_ai2_gene_pane_t1

0x36fb,	// (0x000175bb) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x000238a8) ai2_mp_volume_pane_g

0xec63,	// (0x00022b23) volume_small_pane_cp3

0x3703,	// (0x000175c3) aid_size_cell_ai2_button

0x370b,	// (0x000175cb) grid_ai2_button_pane

0x3714,	// (0x000175d4) cell_ai2_button_pane_ParamLimits

0x3714,	// (0x000175d4) cell_ai2_button_pane

0xbf59,	// (0x0001fe19) cell_ai2_button_pane_g1

0xbf63,	// (0x0001fe23) grid_highlight_pane_cp8

0x36b3,	// (0x00017573) ai2_gene_pane_t1_ParamLimits

0x36b3,	// (0x00017573) ai2_gene_pane_t1

0x902f,	// (0x0001ceef) aid_height_parent_landscape

0xb3de,	// (0x0001f29e) aid_height_set_list

0x2f82,	// (0x00016e42) aid_size_parent

0x333d,	// (0x000171fd) aid_size_cell_graphic_pane_ParamLimits

0x35d2,	// (0x00017492) popup_ai2_data_window_g1_ParamLimits

0x35d2,	// (0x00017492) popup_ai2_data_window_g1

0x35de,	// (0x0001749e) ai2_news_ticker_pane_g1

0x35e6,	// (0x000174a6) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x00023894) ai2_news_ticker_pane_g

0x35ee,	// (0x000174ae) ai2_news_ticker_pane_t1

0x35fc,	// (0x000174bc) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x00023899) ai2_news_ticker_pane_t

0x3629,	// (0x000174e9) heading_ai2_gene_pane_g1

0x3631,	// (0x000174f1) heading_ai2_gene_pane_t1_ParamLimits

0x3631,	// (0x000174f1) heading_ai2_gene_pane_t1

0x3646,	// (0x00017506) list_highlight_pane_cp6

0x364e,	// (0x0001750e) ai2_gene_pane_ParamLimits

0x364e,	// (0x0001750e) ai2_gene_pane

0x3676,	// (0x00017536) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0002389e) list_ai2_gene_pane_t

0x3684,	// (0x00017544) list_highlight_pane_cp8_ParamLimits

0x3684,	// (0x00017544) list_highlight_pane_cp8

0x3695,	// (0x00017555) ai2_gene_pane_g1_ParamLimits

0x3695,	// (0x00017555) ai2_gene_pane_g1

0x36a7,	// (0x00017567) ai2_gene_pane_g2_ParamLimits

0x36a7,	// (0x00017567) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x000238a3) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x000238a3) ai2_gene_pane_g

0xdcf0,	// (0x00021bb0) scroll_pane_cp12

0x8fee,	// (0x0001ceae) control_pane_t3_ParamLimits

0x8fee,	// (0x0001ceae) control_pane_t3

0x1463,	// (0x00015323) status_small_pane_g8_ParamLimits

0x1463,	// (0x00015323) status_small_pane_g8

0x914d,	// (0x0001d00d) popup_find_window_ParamLimits

0x93fe,	// (0x0001d2be) popup_note_image_window_ParamLimits

0x1a0c,	// (0x000158cc) list_double2_graphic_pane_vc_g1_ParamLimits

0x1a0c,	// (0x000158cc) list_double2_graphic_pane_vc_g1

0x1159,	// (0x00015019) list_double2_graphic_pane_vc_g2_ParamLimits

0x1159,	// (0x00015019) list_double2_graphic_pane_vc_g2

0x1a18,	// (0x000158d8) list_double2_graphic_pane_vc_g3_ParamLimits

0x1a18,	// (0x000158d8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0002367f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002367f) list_double2_graphic_pane_vc_g

0x1a24,	// (0x000158e4) list_double2_graphic_pane_vc_t1_ParamLimits

0x1a24,	// (0x000158e4) list_double2_graphic_pane_vc_t1

0x1159,	// (0x00015019) list_single_heading_pane_vc_g1_ParamLimits

0x1159,	// (0x00015019) list_single_heading_pane_vc_g1

0x1a18,	// (0x000158d8) list_single_heading_pane_vc_g2_ParamLimits

0x1a18,	// (0x000158d8) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002348e) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002348e) list_single_heading_pane_vc_g

0x1ade,	// (0x0001599e) list_single_heading_pane_vc_t1_ParamLimits

0x1ade,	// (0x0001599e) list_single_heading_pane_vc_t1

0x1af6,	// (0x000159b6) list_single_heading_pane_vc_t2_ParamLimits

0x1af6,	// (0x000159b6) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x000236a0) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x000236a0) list_single_heading_pane_vc_t

0x1b08,	// (0x000159c8) list_setting_number_pane_vc_g1_ParamLimits

0x1b08,	// (0x000159c8) list_setting_number_pane_vc_g1

0x1b14,	// (0x000159d4) list_setting_number_pane_vc_g2_ParamLimits

0x1b14,	// (0x000159d4) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x000236a5) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x000236a5) list_setting_number_pane_vc_g

0x1b20,	// (0x000159e0) list_setting_number_pane_vc_t1_ParamLimits

0x1b20,	// (0x000159e0) list_setting_number_pane_vc_t1

0x1b34,	// (0x000159f4) list_setting_number_pane_vc_t2_ParamLimits

0x1b34,	// (0x000159f4) list_setting_number_pane_vc_t2

0x1b50,	// (0x00015a10) list_setting_number_pane_vc_t3_ParamLimits

0x1b50,	// (0x00015a10) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x000236aa) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x000236aa) list_setting_number_pane_vc_t

0x1b7e,	// (0x00015a3e) set_value_pane_vc_ParamLimits

0x1b7e,	// (0x00015a3e) set_value_pane_vc

0x31a3,	// (0x00017063) list_double2_graphic_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double2_graphic_pane_vc

0x31a3,	// (0x00017063) list_double2_large_graphic_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double2_large_graphic_pane_vc

0x31a3,	// (0x00017063) list_double2_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double2_pane_vc

0x31a3,	// (0x00017063) list_double_graphic_heading_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_graphic_heading_pane_vc

0x31a3,	// (0x00017063) list_double_graphic_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_graphic_pane_vc

0x31a3,	// (0x00017063) list_double_heading_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_heading_pane_vc

0x31a3,	// (0x00017063) list_double_large_graphic_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_large_graphic_pane_vc

0x31a3,	// (0x00017063) list_double_number_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_number_pane_vc

0x31a3,	// (0x00017063) list_double_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_pane_vc

0x31a3,	// (0x00017063) list_double_time_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_double_time_pane_vc

0x31a3,	// (0x00017063) list_setting_number_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_setting_number_pane_vc

0x31a3,	// (0x00017063) list_setting_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_setting_pane_vc

0x31a3,	// (0x00017063) list_single_graphic_heading_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_single_graphic_heading_pane_vc

0x31a3,	// (0x00017063) list_single_heading_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_single_heading_pane_vc

0x31a3,	// (0x00017063) list_single_number_heading_pane_vc_ParamLimits

0x31a3,	// (0x00017063) list_single_number_heading_pane_vc

0x1a0c,	// (0x000158cc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1a0c,	// (0x000158cc) list_double_graphic_heading_pane_vc_g1

0x3747,	// (0x00017607) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3747,	// (0x00017607) list_double_graphic_heading_pane_vc_g2

0x3753,	// (0x00017613) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3753,	// (0x00017613) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x000238af) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x000238af) list_double_graphic_heading_pane_vc_g

0x375f,	// (0x0001761f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x375f,	// (0x0001761f) list_double_graphic_heading_pane_vc_t1

0x1ade,	// (0x0001599e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1ade,	// (0x0001599e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x000238b6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x000238b6) list_double_graphic_heading_pane_vc_t

0x1b08,	// (0x000159c8) list_setting_pane_vc_g1_ParamLimits

0x1b08,	// (0x000159c8) list_setting_pane_vc_g1

0x1b14,	// (0x000159d4) list_setting_pane_vc_g2_ParamLimits

0x1b14,	// (0x000159d4) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x000236a5) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x000236a5) list_setting_pane_vc_g

0x39a5,	// (0x00017865) list_setting_pane_vc_t1_ParamLimits

0x39a5,	// (0x00017865) list_setting_pane_vc_t1

0x39c1,	// (0x00017881) list_setting_pane_vc_t2_ParamLimits

0x39c1,	// (0x00017881) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x000238f9) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x000238f9) list_setting_pane_vc_t

0x1b7e,	// (0x00015a3e) set_value_pane_cp_vc_ParamLimits

0x1b7e,	// (0x00015a3e) set_value_pane_cp_vc

0x1159,	// (0x00015019) list_single_number_heading_pane_vc_g1_ParamLimits

0x1159,	// (0x00015019) list_single_number_heading_pane_vc_g1

0x1a18,	// (0x000158d8) list_single_number_heading_pane_vc_g2_ParamLimits

0x1a18,	// (0x000158d8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002348e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002348e) list_single_number_heading_pane_vc_g

0x1ade,	// (0x0001599e) list_single_number_heading_pane_vc_t1_ParamLimits

0x1ade,	// (0x0001599e) list_single_number_heading_pane_vc_t1

0x39dd,	// (0x0001789d) list_single_number_heading_pane_vc_t2_ParamLimits

0x39dd,	// (0x0001789d) list_single_number_heading_pane_vc_t2

0x39ef,	// (0x000178af) list_single_number_heading_pane_vc_t3_ParamLimits

0x39ef,	// (0x000178af) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x000238fe) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x000238fe) list_single_number_heading_pane_vc_t

0x1a0c,	// (0x000158cc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1a0c,	// (0x000158cc) list_single_graphic_heading_pane_vc_g1

0x1159,	// (0x00015019) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1159,	// (0x00015019) list_single_graphic_heading_pane_vc_g4

0x1a18,	// (0x000158d8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1a18,	// (0x000158d8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0002367f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002367f) list_single_graphic_heading_pane_vc_g

0x1ade,	// (0x0001599e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1ade,	// (0x0001599e) list_single_graphic_heading_pane_vc_t1

0x3a01,	// (0x000178c1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3a01,	// (0x000178c1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00023905) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00023905) list_single_graphic_heading_pane_vc_t

0x1159,	// (0x00015019) list_double2_pane_vc_g1_ParamLimits

0x1159,	// (0x00015019) list_double2_pane_vc_g1

0x1a18,	// (0x000158d8) list_double2_pane_vc_g2_ParamLimits

0x1a18,	// (0x000158d8) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002348e) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002348e) list_double2_pane_vc_g

0x3a13,	// (0x000178d3) list_double2_pane_vc_t1_ParamLimits

0x3a13,	// (0x000178d3) list_double2_pane_vc_t1

0x3a29,	// (0x000178e9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3a29,	// (0x000178e9) list_double2_large_graphic_pane_vc_g1

0x1159,	// (0x00015019) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1159,	// (0x00015019) list_double2_large_graphic_pane_vc_g2

0x1a18,	// (0x000158d8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1a18,	// (0x000158d8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x000234ab) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x000234ab) list_double2_large_graphic_pane_vc_g

0x3a35,	// (0x000178f5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a35,	// (0x000178f5) list_double2_large_graphic_pane_vc_t1

0x3a4b,	// (0x0001790b) list_double_time_pane_vc_g1_ParamLimits

0x3a4b,	// (0x0001790b) list_double_time_pane_vc_g1

0x3a57,	// (0x00017917) list_double_time_pane_vc_g2_ParamLimits

0x3a57,	// (0x00017917) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x0002390a) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002390a) list_double_time_pane_vc_g

0x3a63,	// (0x00017923) list_double_time_pane_vc_t1_ParamLimits

0x3a63,	// (0x00017923) list_double_time_pane_vc_t1

0x3a93,	// (0x00017953) list_double_time_pane_vc_t2_ParamLimits

0x3a93,	// (0x00017953) list_double_time_pane_vc_t2

0x3abc,	// (0x0001797c) list_double_time_pane_vc_t3_ParamLimits

0x3abc,	// (0x0001797c) list_double_time_pane_vc_t3

0x3ace,	// (0x0001798e) list_double_time_pane_vc_t4_ParamLimits

0x3ace,	// (0x0001798e) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x0002390f) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002390f) list_double_time_pane_vc_t

0x1159,	// (0x00015019) list_double_pane_vc_g1_ParamLimits

0x1159,	// (0x00015019) list_double_pane_vc_g1

0x1a18,	// (0x000158d8) list_double_pane_vc_g2_ParamLimits

0x1a18,	// (0x000158d8) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002348e) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002348e) list_double_pane_vc_g

0x3af3,	// (0x000179b3) list_double_pane_vc_t1_ParamLimits

0x3af3,	// (0x000179b3) list_double_pane_vc_t1

0x3b07,	// (0x000179c7) list_double_pane_vc_t2_ParamLimits

0x3b07,	// (0x000179c7) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x00023918) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x00023918) list_double_pane_vc_t

0x1159,	// (0x00015019) list_double_number_pane_vc_g1_ParamLimits

0x1159,	// (0x00015019) list_double_number_pane_vc_g1

0x1a18,	// (0x000158d8) list_double_number_pane_vc_g2_ParamLimits

0x1a18,	// (0x000158d8) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002348e) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002348e) list_double_number_pane_vc_g

0x3b1d,	// (0x000179dd) list_double_number_pane_vc_t1_ParamLimits

0x3b1d,	// (0x000179dd) list_double_number_pane_vc_t1

0x3b31,	// (0x000179f1) list_double_number_pane_vc_t2_ParamLimits

0x3b31,	// (0x000179f1) list_double_number_pane_vc_t2

0x3b07,	// (0x000179c7) list_double_number_pane_vc_t3_ParamLimits

0x3b07,	// (0x000179c7) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x0002391d) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x0002391d) list_double_number_pane_vc_t

0x3b45,	// (0x00017a05) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3b45,	// (0x00017a05) list_double_large_graphic_pane_vc_g1

0x3b56,	// (0x00017a16) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b56,	// (0x00017a16) list_double_large_graphic_pane_vc_g2

0x1a18,	// (0x000158d8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1a18,	// (0x000158d8) list_double_large_graphic_pane_vc_g3

0x3b65,	// (0x00017a25) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3b65,	// (0x00017a25) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x00023924) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x00023924) list_double_large_graphic_pane_vc_g

0x3b71,	// (0x00017a31) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3b71,	// (0x00017a31) list_double_large_graphic_pane_vc_t1

0x3b8a,	// (0x00017a4a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3b8a,	// (0x00017a4a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002392d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002392d) list_double_large_graphic_pane_vc_t

0x3747,	// (0x00017607) list_double_heading_pane_vc_g1_ParamLimits

0x3747,	// (0x00017607) list_double_heading_pane_vc_g1

0x3753,	// (0x00017613) list_double_heading_pane_vc_g2_ParamLimits

0x3753,	// (0x00017613) list_double_heading_pane_vc_g2

0x0001,

0xfa72,	// (0x00023932) list_double_heading_pane_vc_g_ParamLimits

0xfa72,	// (0x00023932) list_double_heading_pane_vc_g

0x3ba1,	// (0x00017a61) list_double_heading_pane_vc_t1_ParamLimits

0x3ba1,	// (0x00017a61) list_double_heading_pane_vc_t1

0x1ade,	// (0x0001599e) list_double_heading_pane_vc_t2_ParamLimits

0x1ade,	// (0x0001599e) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00023937) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00023937) list_double_heading_pane_vc_t

0x1a0c,	// (0x000158cc) list_double_graphic_pane_vc_g1_ParamLimits

0x1a0c,	// (0x000158cc) list_double_graphic_pane_vc_g1

0x3bb3,	// (0x00017a73) list_double_graphic_pane_vc_g2_ParamLimits

0x3bb3,	// (0x00017a73) list_double_graphic_pane_vc_g2

0x3bc2,	// (0x00017a82) list_double_graphic_pane_vc_g3_ParamLimits

0x3bc2,	// (0x00017a82) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0002393c) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0002393c) list_double_graphic_pane_vc_g

0x3bce,	// (0x00017a8e) list_double_graphic_pane_vc_t1_ParamLimits

0x3bce,	// (0x00017a8e) list_double_graphic_pane_vc_t1

0x3b07,	// (0x000179c7) list_double_graphic_pane_vc_t2_ParamLimits

0x3b07,	// (0x000179c7) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00023943) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00023943) list_double_graphic_pane_vc_t

0xd89f,	// (0x0002175f) aid_size_cell_fastswap

0x8d20,	// (0x0001cbe0) aid_size_cell_touch_ParamLimits

0x8d20,	// (0x0001cbe0) aid_size_cell_touch

0xda26,	// (0x000218e6) popup_fast_swap_wide_window_ParamLimits

0xda26,	// (0x000218e6) popup_fast_swap_wide_window

0x8e6f,	// (0x0001cd2f) touch_pane_ParamLimits

0x8e6f,	// (0x0001cd2f) touch_pane

0xdd75,	// (0x00021c35) button_value_adjust_pane_cp2

0xdd7d,	// (0x00021c3d) button_value_adjust_pane_cp4

0xdd85,	// (0x00021c45) form_field_data_pane_cp2

0xa61c,	// (0x0001e4dc) form_field_data_wide_pane_cp2

0xe2da,	// (0x0002219a) bg_scroll_pane_ParamLimits

0xe503,	// (0x000223c3) scroll_handle_pane_ParamLimits

0xe517,	// (0x000223d7) scroll_sc2_down_pane_ParamLimits

0xe517,	// (0x000223d7) scroll_sc2_down_pane

0xe30b,	// (0x000221cb) scroll_sc2_up_pane_ParamLimits

0xe30b,	// (0x000221cb) scroll_sc2_up_pane

0xb7d8,	// (0x0001f698) grid_wheel_folder_pane_g1_ParamLimits

0xb7d8,	// (0x0001f698) grid_wheel_folder_pane_g1

0xe6e1,	// (0x000225a1) clock_nsta_pane_cp2_ParamLimits

0xe6e1,	// (0x000225a1) clock_nsta_pane_cp2

0x1534,	// (0x000153f4) listscroll_midp_pane_ParamLimits

0xab4c,	// (0x0001ea0c) midp_canvas_pane

0x14de,	// (0x0001539e) nsta_clock_indic_pane

0x151a,	// (0x000153da) listscroll_form_pane_vc

0x1522,	// (0x000153e2) listscroll_set_pane_vc_ParamLimits

0x1522,	// (0x000153e2) listscroll_set_pane_vc

0xad46,	// (0x0001ec06) clock_nsta_pane

0xad70,	// (0x0001ec30) indicator_nsta_pane

0x19a6,	// (0x00015866) bg_popup_sub_pane_cp2_ParamLimits

0x19ba,	// (0x0001587a) find_pane_cp2_ParamLimits

0x19ba,	// (0x0001587a) find_pane_cp2

0x19d0,	// (0x00015890) grid_toobar_pane_ParamLimits

0x1b90,	// (0x00015a50) list_form_gen_pane_vc_ParamLimits

0x1b90,	// (0x00015a50) list_form_gen_pane_vc

0x1ba6,	// (0x00015a66) scroll_pane_cp8_vc_ParamLimits

0x1ba6,	// (0x00015a66) scroll_pane_cp8_vc

0x1c22,	// (0x00015ae2) data_form_wide_pane_vc_ParamLimits

0x1c22,	// (0x00015ae2) data_form_wide_pane_vc

0x1c2e,	// (0x00015aee) form_field_data_wide_pane_vc_g1

0x1c36,	// (0x00015af6) form_field_data_wide_pane_vc_t1_ParamLimits

0x1c36,	// (0x00015af6) form_field_data_wide_pane_vc_t1

0xdde0,	// (0x00021ca0) input_focus_pane_cp6_vc_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_cp6_vc

0xb10d,	// (0x0001efcd) list_midp_pane_ParamLimits

0x33a9,	// (0x00017269) scroll_pane_cp16_ParamLimits

0x33a9,	// (0x00017269) scroll_pane_cp16

0x1fc1,	// (0x00015e81) button_value_adjust_pane_ParamLimits

0x1fc1,	// (0x00015e81) button_value_adjust_pane

0xb3ef,	// (0x0001f2af) button_value_adjust_pane_cp6_ParamLimits

0xb3ef,	// (0x0001f2af) button_value_adjust_pane_cp6

0xb531,	// (0x0001f3f1) settings_code_pane_cp_ParamLimits

0xb531,	// (0x0001f3f1) settings_code_pane_cp

0xbf59,	// (0x0001fe19) cell_touch_pane_g1

0xbf59,	// (0x0001fe19) cell_touch_pane_g2

0x0001,

0xf704,	// (0x000235c4) cell_touch_pane_g

0xb6ad,	// (0x0001f56d) cell_touch_pane_cp_ParamLimits

0xb6ad,	// (0x0001f56d) cell_touch_pane_cp

0xb6c9,	// (0x0001f589) cell_touch_pane_ParamLimits

0xb6c9,	// (0x0001f589) cell_touch_pane

0xbf59,	// (0x0001fe19) scroll_sc2_down_pane_g1

0xbf59,	// (0x0001fe19) scroll_sc2_up_pane_g1

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp4_vc

0x3771,	// (0x00017631) list_set_graphic_pane_vc_g1_ParamLimits

0x3771,	// (0x00017631) list_set_graphic_pane_vc_g1

0x377d,	// (0x0001763d) list_set_graphic_pane_vc_g2_ParamLimits

0x377d,	// (0x0001763d) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x000238bb) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x000238bb) list_set_graphic_pane_vc_g

0x3789,	// (0x00017649) text_primary_small_cp13_vc_ParamLimits

0x3789,	// (0x00017649) text_primary_small_cp13_vc

0x37a1,	// (0x00017661) list_set_graphic_pane_vc_ParamLimits

0x37a1,	// (0x00017661) list_set_graphic_pane_vc

0xbf63,	// (0x0001fe23) input_focus_pane_cp2_vc

0xbf59,	// (0x0001fe19) setting_code_pane_vc_g1

0xbfd6,	// (0x0001fe96) setting_code_pane_vc_t1

0x37b6,	// (0x00017676) set_text_pane_vc_t1_ParamLimits

0x37b6,	// (0x00017676) set_text_pane_vc_t1

0xbf63,	// (0x0001fe23) input_focus_pane_cp1_vc

0x37d4,	// (0x00017694) list_set_text_pane_vc

0xbf59,	// (0x0001fe19) setting_text_pane_vc_g1

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp2_vc

0xbfcd,	// (0x0001fe8d) setting_slider_graphic_pane_vc_g1

0x37de,	// (0x0001769e) setting_slider_graphic_pane_vc_t1

0x37f0,	// (0x000176b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x000238c0) setting_slider_graphic_pane_vc_t

0x3802,	// (0x000176c2) slider_set_pane_cp_vc

0x380c,	// (0x000176cc) slider_set_pane_vc_g1

0x3815,	// (0x000176d5) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x000238c5) slider_set_pane_vc_g

0xdea4,	// (0x00021d64) set_opt_bg_pane_g1_copy1

0xdeac,	// (0x00021d6c) set_opt_bg_pane_g2_copy1

0x3841,	// (0x00017701) set_opt_bg_pane_g3_copy1

0xdebc,	// (0x00021d7c) set_opt_bg_pane_g4_copy1

0xdec4,	// (0x00021d84) set_opt_bg_pane_g5_copy1

0xdecc,	// (0x00021d8c) set_opt_bg_pane_g6_copy1

0x384b,	// (0x0001770b) set_opt_bg_pane_g7_copy1

0x3855,	// (0x00017715) set_opt_bg_pane_g8_copy1

0x385f,	// (0x0001771f) set_opt_bg_pane_g9_copy1

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp_vc

0x3869,	// (0x00017729) setting_slider_pane_vc_t1

0x3878,	// (0x00017738) setting_slider_pane_vc_t2

0x388a,	// (0x0001774a) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x000238d4) setting_slider_pane_vc_t

0x389c,	// (0x0001775c) slider_set_pane_vc

0xeabe,	// (0x0002297e) volume_set_pane_vc_g1

0xec6c,	// (0x00022b2c) volume_set_pane_vc_g2

0xec75,	// (0x00022b35) volume_set_pane_vc_g3

0xec7e,	// (0x00022b3e) volume_set_pane_vc_g4

0xec87,	// (0x00022b47) volume_set_pane_vc_g5

0xec90,	// (0x00022b50) volume_set_pane_vc_g6

0xec99,	// (0x00022b59) volume_set_pane_vc_g7

0xeca2,	// (0x00022b62) volume_set_pane_vc_g8

0xecab,	// (0x00022b6b) volume_set_pane_vc_g9

0xecb4,	// (0x00022b74) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x000238db) volume_set_pane_vc_g

0x38a6,	// (0x00017766) volume_set_pane_vc

0x38b0,	// (0x00017770) button_value_adjust_pane_cp1_vc

0x38ba,	// (0x0001777a) list_highlight_pane_cp2_vc

0x38c3,	// (0x00017783) list_set_pane_vc_ParamLimits

0x38c3,	// (0x00017783) list_set_pane_vc

0x3933,	// (0x000177f3) main_pane_set_vc_t1_ParamLimits

0x3933,	// (0x000177f3) main_pane_set_vc_t1

0x3948,	// (0x00017808) main_pane_set_vc_t2_ParamLimits

0x3948,	// (0x00017808) main_pane_set_vc_t2

0x395a,	// (0x0001781a) main_pane_set_vc_t3_ParamLimits

0x395a,	// (0x0001781a) main_pane_set_vc_t3

0x396e,	// (0x0001782e) main_pane_set_vc_t4_ParamLimits

0x396e,	// (0x0001782e) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x000238f0) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x000238f0) main_pane_set_vc_t

0x3982,	// (0x00017842) setting_code_pane_vc_ParamLimits

0x3982,	// (0x00017842) setting_code_pane_vc

0x3993,	// (0x00017853) setting_slider_graphic_pane_vc

0x3993,	// (0x00017853) setting_slider_pane_vc

0x3993,	// (0x00017853) setting_text_pane_vc

0x3993,	// (0x00017853) setting_volume_pane_vc

0x399d,	// (0x0001785d) scroll_pane_cp121_vc

0xdd63,	// (0x00021c23) set_content_pane_vc

0x3be2,	// (0x00017aa2) button_value_adjust_pane_g1

0x3beb,	// (0x00017aab) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00023948) button_value_adjust_pane_g

0x3bf4,	// (0x00017ab4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3bf4,	// (0x00017ab4) form_field_slider_wide_pane_vc_t1

0x3c08,	// (0x00017ac8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3c08,	// (0x00017ac8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0002394d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002394d) form_field_slider_wide_pane_vc_t

0xbfb1,	// (0x0001fe71) input_focus_pane_cp10_vc_ParamLimits

0xbfb1,	// (0x0001fe71) input_focus_pane_cp10_vc

0x3c36,	// (0x00017af6) slider_cont_pane_cp1_vc_ParamLimits

0x3c36,	// (0x00017af6) slider_cont_pane_cp1_vc

0x3c46,	// (0x00017b06) slider_form_pane_g1_cp2

0x3815,	// (0x000176d5) slider_form_pane_g2_cp2

0x3c73,	// (0x00017b33) form_field_slider_pane_vc_t3

0x3c81,	// (0x00017b41) form_field_slider_pane_vc_t4

0x3c8f,	// (0x00017b4f) slider_form_pane_vc_ParamLimits

0x3c8f,	// (0x00017b4f) slider_form_pane_vc

0x3c9c,	// (0x00017b5c) form_field_slider_pane_vc_t1_ParamLimits

0x3c9c,	// (0x00017b5c) form_field_slider_pane_vc_t1

0x3c08,	// (0x00017ac8) form_field_slider_pane_vc_t2_ParamLimits

0x3c08,	// (0x00017ac8) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002395f) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002395f) form_field_slider_pane_vc_t

0xbfb1,	// (0x0001fe71) input_focus_pane_cp9_vc_ParamLimits

0xbfb1,	// (0x0001fe71) input_focus_pane_cp9_vc

0x3cb8,	// (0x00017b78) slider_cont_pane_vc_ParamLimits

0x3cb8,	// (0x00017b78) slider_cont_pane_vc

0x3cca,	// (0x00017b8a) list_form_graphic_pane_cp_vc_ParamLimits

0x3cca,	// (0x00017b8a) list_form_graphic_pane_cp_vc

0x1c2e,	// (0x00015aee) form_field_popup_wide_pane_vc_g1

0x3cdf,	// (0x00017b9f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3cdf,	// (0x00017b9f) form_field_popup_wide_pane_vc_t1

0xdde0,	// (0x00021ca0) input_focus_pane_cp8_vc_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_cp8_vc

0x3d24,	// (0x00017be4) list_form_wide_pane_vc_ParamLimits

0x3d24,	// (0x00017be4) list_form_wide_pane_vc

0x3d30,	// (0x00017bf0) list_form_graphic_pane_vc_g1

0x3d38,	// (0x00017bf8) list_form_graphic_pane_vc_t1_ParamLimits

0x3d38,	// (0x00017bf8) list_form_graphic_pane_vc_t1

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp5_vc_ParamLimits

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp5_vc

0x3d54,	// (0x00017c14) list_form_graphic_pane_vc_ParamLimits

0x3d54,	// (0x00017c14) list_form_graphic_pane_vc

0x1c2e,	// (0x00015aee) form_field_popup_pane_vc_g1

0x3d6a,	// (0x00017c2a) form_field_popup_pane_vc_t1_ParamLimits

0x3d6a,	// (0x00017c2a) form_field_popup_pane_vc_t1

0xdde0,	// (0x00021ca0) input_focus_pane_cp7_vc_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_cp7_vc

0x3d81,	// (0x00017c41) list_form_pane_vc_ParamLimits

0x3d81,	// (0x00017c41) list_form_pane_vc

0x3d8d,	// (0x00017c4d) data_form_pane_vc_t1_ParamLimits

0x3d8d,	// (0x00017c4d) data_form_pane_vc_t1

0xdea4,	// (0x00021d64) input_focus_pane_vc_g1

0xdeac,	// (0x00021d6c) input_focus_pane_vc_g2

0xdeb4,	// (0x00021d74) input_focus_pane_vc_g3

0xdebc,	// (0x00021d7c) input_focus_pane_vc_g4

0xdec4,	// (0x00021d84) input_focus_pane_vc_g5

0xdecc,	// (0x00021d8c) input_focus_pane_vc_g6

0xded4,	// (0x00021d94) input_focus_pane_vc_g7

0xdedc,	// (0x00021d9c) input_focus_pane_vc_g8

0xdee4,	// (0x00021da4) input_focus_pane_vc_g9

0xbf59,	// (0x0001fe19) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0002354d) input_focus_pane_vc_g

0x1c22,	// (0x00015ae2) data_form_pane_vc_ParamLimits

0x1c22,	// (0x00015ae2) data_form_pane_vc

0x1c2e,	// (0x00015aee) form_field_data_pane_vc_g1

0x3daa,	// (0x00017c6a) form_field_data_pane_vc_t1_ParamLimits

0x3daa,	// (0x00017c6a) form_field_data_pane_vc_t1

0xdde0,	// (0x00021ca0) input_focus_pane_vc_ParamLimits

0xdde0,	// (0x00021ca0) input_focus_pane_vc

0x3dc4,	// (0x00017c84) button_value_adjust_pane_cp3_vc

0x3dcc,	// (0x00017c8c) button_value_adjust_pane_cp5_vc

0x3dd4,	// (0x00017c94) form_field_data_pane_vc_ParamLimits

0x3dd4,	// (0x00017c94) form_field_data_pane_vc

0x3def,	// (0x00017caf) form_field_data_pane_vc_cp2

0x3df7,	// (0x00017cb7) form_field_data_wide_pane_vc_ParamLimits

0x3df7,	// (0x00017cb7) form_field_data_wide_pane_vc

0x3e11,	// (0x00017cd1) form_field_data_wide_pane_vc_cp2

0x3e19,	// (0x00017cd9) form_field_popup_pane_vc_ParamLimits

0x3e19,	// (0x00017cd9) form_field_popup_pane_vc

0x3e34,	// (0x00017cf4) form_field_popup_wide_pane_vc_ParamLimits

0x3e34,	// (0x00017cf4) form_field_popup_wide_pane_vc

0x3e4e,	// (0x00017d0e) form_field_slider_pane_vc_ParamLimits

0x3e4e,	// (0x00017d0e) form_field_slider_pane_vc

0x3e61,	// (0x00017d21) form_field_slider_wide_pane_vc_ParamLimits

0x3e61,	// (0x00017d21) form_field_slider_wide_pane_vc

0xb6e7,	// (0x0001f5a7) grid_touch_1_pane_ParamLimits

0xb6e7,	// (0x0001f5a7) grid_touch_1_pane

0xb6fb,	// (0x0001f5bb) grid_touch_2_pane_ParamLimits

0xb6fb,	// (0x0001f5bb) grid_touch_2_pane

0x3f38,	// (0x00017df8) touch_pane_g1_ParamLimits

0x3f38,	// (0x00017df8) touch_pane_g1

0x3e9a,	// (0x00017d5a) cell_app_pane_cp_wide_ParamLimits

0x3e9a,	// (0x00017d5a) cell_app_pane_cp_wide

0x3eab,	// (0x00017d6b) grid_popup_fast_wide_pane_ParamLimits

0x3eab,	// (0x00017d6b) grid_popup_fast_wide_pane

0x3ebf,	// (0x00017d7f) scroll_pane_cp19_ParamLimits

0x3ebf,	// (0x00017d7f) scroll_pane_cp19

0xbf63,	// (0x0001fe23) bg_popup_window_pane_cp20

0x3ed3,	// (0x00017d93) listscroll_popup_fast_wide_pane

0xe45a,	// (0x0002231a) grid_indicator_nsta_pane

0x3edb,	// (0x00017d9b) clock_nsta_pane_g1

0x3ee4,	// (0x00017da4) clock_nsta_pane_t1

0xb727,	// (0x0001f5e7) cell_indicator_nsta_pane_ParamLimits

0xb727,	// (0x0001f5e7) cell_indicator_nsta_pane

0x3f38,	// (0x00017df8) cell_indicator_nsta_pane_g1

0xb744,	// (0x0001f604) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00023970) cell_indicator_nsta_pane_g

0x3f5c,	// (0x00017e1c) clock_nsta_pane_cp

0x3f64,	// (0x00017e24) indicator_nsta_pane_cp

0x3f6d,	// (0x00017e2d) nsta_clock_indic_pane_g1

0xc015,	// (0x0001fed5) grid_indicator_pane

0xe3fd,	// (0x000222bd) scroll_pane_cp29

0xe62d,	// (0x000224ed) indicator_nsta_pane_cp2_ParamLimits

0xe62d,	// (0x000224ed) indicator_nsta_pane_cp2

0xbfbf,	// (0x0001fe7f) main_apps_wheel_pane

0x1e44,	// (0x00015d04) form_midp_field_text_pane_ParamLimits

0x1f93,	// (0x00015e53) scroll_bar_cp050_ParamLimits

0x3fd6,	// (0x00017e96) cell_indicator_pane_ParamLimits

0x3fd6,	// (0x00017e96) cell_indicator_pane

0x3fee,	// (0x00017eae) cell_indicator_pane_g1

0xb75a,	// (0x0001f61a) grid_wheel_folder_pane_ParamLimits

0xb75a,	// (0x0001f61a) grid_wheel_folder_pane

0xb768,	// (0x0001f628) list_wheel_apps_pane_ParamLimits

0xb768,	// (0x0001f628) list_wheel_apps_pane

0xb776,	// (0x0001f636) main_apps_wheel_pane_g1_ParamLimits

0xb776,	// (0x0001f636) main_apps_wheel_pane_g1

0xb786,	// (0x0001f646) main_apps_wheel_pane_g2_ParamLimits

0xb786,	// (0x0001f646) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002398c) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002398c) main_apps_wheel_pane_g

0xb796,	// (0x0001f656) main_apps_wheel_pane_t1_ParamLimits

0xb796,	// (0x0001f656) main_apps_wheel_pane_t1

0xb7ae,	// (0x0001f66e) list_wheel_apps_pane_g1

0xb7b6,	// (0x0001f676) list_wheel_apps_pane_g2

0xb7be,	// (0x0001f67e) list_wheel_apps_pane_g3

0xb7c6,	// (0x0001f686) list_wheel_apps_pane_g4

0xb7ce,	// (0x0001f68e) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00023991) list_wheel_apps_pane_g

0x1064,	// (0x00014f24) navi_icon_text_pane

0xac3a,	// (0x0001eafa) aid_fill_nsta

0xb7eb,	// (0x0001f6ab) navi_icon_text_pane_g1

0xb7f7,	// (0x0001f6b7) navi_icon_text_pane_t1

0xaab0,	// (0x0001e970) list_set_graphic_pane_t1_ParamLimits

0xaab0,	// (0x0001e970) list_set_graphic_pane_t1

0x26e4,	// (0x000165a4) popup_midp_note_alarm_window_t6_ParamLimits

0x26e4,	// (0x000165a4) popup_midp_note_alarm_window_t6

0x26f6,	// (0x000165b6) popup_midp_note_alarm_window_t7_ParamLimits

0x26f6,	// (0x000165b6) popup_midp_note_alarm_window_t7

0x2708,	// (0x000165c8) popup_midp_note_alarm_window_t8_ParamLimits

0x2708,	// (0x000165c8) popup_midp_note_alarm_window_t8

0x271a,	// (0x000165da) popup_midp_note_alarm_window_t9_ParamLimits

0x271a,	// (0x000165da) popup_midp_note_alarm_window_t9

0x272c,	// (0x000165ec) popup_midp_note_alarm_window_t10_ParamLimits

0x272c,	// (0x000165ec) popup_midp_note_alarm_window_t10

0x273e,	// (0x000165fe) popup_midp_note_alarm_window_t11_ParamLimits

0x273e,	// (0x000165fe) popup_midp_note_alarm_window_t11

0x2750,	// (0x00016610) scroll_pane_cp17_ParamLimits

0x2750,	// (0x00016610) scroll_pane_cp17

0xeabe,	// (0x0002297e) volume_small_pane_cp_g1

0xecbd,	// (0x00022b7d) volume_small_pane_cp_g2

0xecc6,	// (0x00022b86) volume_small_pane_cp_g3

0xeccf,	// (0x00022b8f) volume_small_pane_cp_g4

0xecd8,	// (0x00022b98) volume_small_pane_cp_g5

0xece1,	// (0x00022ba1) volume_small_pane_cp_g6

0xecea,	// (0x00022baa) volume_small_pane_cp_g7

0xecf3,	// (0x00022bb3) volume_small_pane_cp_g8

0xecfc,	// (0x00022bbc) volume_small_pane_cp_g9

0xed05,	// (0x00022bc5) volume_small_pane_cp_g10

0x12b9,	// (0x00015179) midp_ticker_pane_g1_ParamLimits

0x12c5,	// (0x00015185) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x00023619) midp_ticker_pane_g_ParamLimits

0xabe3,	// (0x0001eaa3) midp_ticker_pane_t1_ParamLimits

0xac5e,	// (0x0001eb1e) aid_fill_nsta_2

0x1f7f,	// (0x00015e3f) list_form2_midp_pane

0x315e,	// (0x0001701e) midp_editing_number_pane_ParamLimits

0x316d,	// (0x0001702d) midp_ticker_pane_ParamLimits

0x40e7,	// (0x00017fa7) form2_midp_field_pane

0x410b,	// (0x00017fcb) scroll_pane_cp51

0x412b,	// (0x00017feb) form2_midp_button_pane_ParamLimits

0x412b,	// (0x00017feb) form2_midp_button_pane

0x413d,	// (0x00017ffd) form2_midp_content_pane_ParamLimits

0x413d,	// (0x00017ffd) form2_midp_content_pane

0x4157,	// (0x00018017) form2_midp_field_choice_group_pane

0x415f,	// (0x0001801f) form2_midp_field_pane_g1

0x4167,	// (0x00018027) form2_midp_field_pane_g2

0x416f,	// (0x0001802f) form2_midp_field_pane_g3

0x4177,	// (0x00018037) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x000239b6) form2_midp_field_pane_g

0x417f,	// (0x0001803f) form2_midp_gauge_slider_pane

0x4187,	// (0x00018047) form2_midp_gauge_wait_pane

0x418f,	// (0x0001804f) form2_midp_image_pane_ParamLimits

0x418f,	// (0x0001804f) form2_midp_image_pane

0x41aa,	// (0x0001806a) form2_midp_label_pane_ParamLimits

0x41aa,	// (0x0001806a) form2_midp_label_pane

0xb825,	// (0x0001f6e5) form2_midp_label_pane_cp_ParamLimits

0xb825,	// (0x0001f6e5) form2_midp_label_pane_cp

0x41ea,	// (0x000180aa) form2_midp_string_pane_ParamLimits

0x41ea,	// (0x000180aa) form2_midp_string_pane

0xb846,	// (0x0001f706) form2_midp_text_pane_ParamLimits

0xb846,	// (0x0001f706) form2_midp_text_pane

0x421d,	// (0x000180dd) form2_midp_time_pane

0x422d,	// (0x000180ed) input_focus_pane_cp51_ParamLimits

0x422d,	// (0x000180ed) input_focus_pane_cp51

0x4245,	// (0x00018105) form2_midp_label_pane_t1_ParamLimits

0x4245,	// (0x00018105) form2_midp_label_pane_t1

0xb867,	// (0x0001f727) form2_mdip_text_pane_t1_ParamLimits

0xb867,	// (0x0001f727) form2_mdip_text_pane_t1

0x42ad,	// (0x0001816d) form2_midp_time_pane_t1

0x42c8,	// (0x00018188) form2_midp_gauge_slider_pane_t1

0xb886,	// (0x0001f746) form2_midp_gauge_slider_pane_t2

0xb898,	// (0x0001f758) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x000239bf) form2_midp_gauge_slider_pane_t

0x42fe,	// (0x000181be) form2_midp_slider_pane

0x430a,	// (0x000181ca) form2_midp_gauge_wait_pane_t1

0x4318,	// (0x000181d8) form2_midp_wait_pane_ParamLimits

0x4318,	// (0x000181d8) form2_midp_wait_pane

0x1c75,	// (0x00015b35) list_single_2graphic_pane_cp4_ParamLimits

0x1c75,	// (0x00015b35) list_single_2graphic_pane_cp4

0x4343,	// (0x00018203) list_single_midp_graphic_pane_cp_ParamLimits

0x4343,	// (0x00018203) list_single_midp_graphic_pane_cp

0xbf63,	// (0x0001fe23) list_highlight_pane_cp20

0x4367,	// (0x00018227) list_single_2graphic_pane_g1_cp4

0x3629,	// (0x000174e9) list_single_2graphic_pane_g2_cp4

0x436f,	// (0x0001822f) list_single_2graphic_pane_t1_cp4

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp21

0x437e,	// (0x0001823e) list_single_midp_graphic_pane_g4_cp

0x438d,	// (0x0001824d) list_single_midp_graphic_pane_t1_cp

0xb8aa,	// (0x0001f76a) form2_mdip_string_pane_t1_ParamLimits

0xb8aa,	// (0x0001f76a) form2_mdip_string_pane_t1

0xbf63,	// (0x0001fe23) bg_wml_button_pane_cp2

0xbf59,	// (0x0001fe19) form2_midp_image_pane_g1

0xdd01,	// (0x00021bc1) list_double_large_graphic_pane_g5_ParamLimits

0xdd01,	// (0x00021bc1) list_double_large_graphic_pane_g5

0x1534,	// (0x000153f4) midp_form_pane_ParamLimits

0xbfbf,	// (0x0001fe7f) main_apps_wheel_pane_ParamLimits

0x9484,	// (0x0001d344) popup_preview_window_ParamLimits

0x9484,	// (0x0001d344) popup_preview_window

0xe904,	// (0x000227c4) popup_touch_info_window_ParamLimits

0xe904,	// (0x000227c4) popup_touch_info_window

0xe926,	// (0x000227e6) popup_touch_menu_window_ParamLimits

0xe926,	// (0x000227e6) popup_touch_menu_window

0xbf4f,	// (0x0001fe0f) bg_popup_sub_pane_cp6

0x4447,	// (0x00018307) list_touch_menu_pane

0x444f,	// (0x0001830f) list_single_touch_menu_pane_ParamLimits

0x444f,	// (0x0001830f) list_single_touch_menu_pane

0x4467,	// (0x00018327) list_single_touch_menu_pane_t1

0xbfbf,	// (0x0001fe7f) bg_popup_sub_pane_cp7_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_popup_sub_pane_cp7

0x4475,	// (0x00018335) heading_sub_pane

0x447d,	// (0x0001833d) list_touch_info_pane_ParamLimits

0x447d,	// (0x0001833d) list_touch_info_pane

0x448c,	// (0x0001834c) list_single_touch_info_pane_ParamLimits

0x448c,	// (0x0001834c) list_single_touch_info_pane

0x449e,	// (0x0001835e) list_single_touch_info_pane_t1

0x44ac,	// (0x0001836c) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x000239cd) list_single_touch_info_pane_t

0x11e8,	// (0x000150a8) bg_popup_heading_pane_cp

0x44ba,	// (0x0001837a) heading_sub_pane_t1

0x1bbc,	// (0x00015a7c) bg_popup_preview_window_pane_cp_ParamLimits

0x1bbc,	// (0x00015a7c) bg_popup_preview_window_pane_cp

0x4475,	// (0x00018335) heading_preview_pane

0x447d,	// (0x0001833d) list_preview_pane_ParamLimits

0x447d,	// (0x0001833d) list_preview_pane

0x44c8,	// (0x00018388) popup_preview_window_g1

0x448c,	// (0x0001834c) list_single_preview_pane_ParamLimits

0x448c,	// (0x0001834c) list_single_preview_pane

0x44d0,	// (0x00018390) list_single_preview_pane_g1

0x44d8,	// (0x00018398) list_single_preview_pane_t1

0x449e,	// (0x0001835e) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x000239d2) list_single_preview_pane_t

0x44e6,	// (0x000183a6) bg_popup_heading_pane_cp2_ParamLimits

0x44e6,	// (0x000183a6) bg_popup_heading_pane_cp2

0x44fc,	// (0x000183bc) heading_preview_pane_g1

0x4504,	// (0x000183c4) heading_preview_pane_t1_ParamLimits

0x4504,	// (0x000183c4) heading_preview_pane_t1

0xc02c,	// (0x0001feec) soft_indicator_pane_t1_ParamLimits

0xdccd,	// (0x00021b8d) scroll_pane_ParamLimits

0xe2f9,	// (0x000221b9) scroll_sc2_left_pane

0xe302,	// (0x000221c2) scroll_sc2_right_pane

0xe321,	// (0x000221e1) scroll_bg_pane_g1_ParamLimits

0xe336,	// (0x000221f6) scroll_bg_pane_g2_ParamLimits

0xe34e,	// (0x0002220e) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x000235a4) scroll_bg_pane_g_ParamLimits

0xe321,	// (0x000221e1) scroll_handle_pane_g1_ParamLimits

0xe370,	// (0x00022230) scroll_handle_pane_g2_ParamLimits

0xe34e,	// (0x0002220e) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x000235ab) scroll_handle_pane_g_ParamLimits

0xe827,	// (0x000226e7) popup_choice_list_window_ParamLimits

0xe827,	// (0x000226e7) popup_choice_list_window

0x19b2,	// (0x00015872) choice_list_pane

0x1a62,	// (0x00015922) cell_toolbar_pane_t1

0x1a8a,	// (0x0001594a) toolbar_button_pane_ParamLimits

0x2c20,	// (0x00016ae0) ai_gene_pane_1_t2_ParamLimits

0x2c20,	// (0x00016ae0) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x000237ce) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x000237ce) ai_gene_pane_1_t

0x4521,	// (0x000183e1) scroll_sc2_left_pane_g1

0x4521,	// (0x000183e1) scroll_sc2_right_pane_g1

0x1534,	// (0x000153f4) bg_popup_sub_pane_cp10

0x452b,	// (0x000183eb) list_choice_list_pane

0x4544,	// (0x00018404) list_single_choice_list_pane_ParamLimits

0x4544,	// (0x00018404) list_single_choice_list_pane

0x455c,	// (0x0001841c) list_single_choice_list_pane_g1

0xdfc9,	// (0x00021e89) list_single_choice_list_pane_t1_ParamLimits

0xdfc9,	// (0x00021e89) list_single_choice_list_pane_t1

0x4564,	// (0x00018424) choice_list_pane_g1

0x456c,	// (0x0001842c) choice_list_pane_t1

0xbf4f,	// (0x0001fe0f) input_focus_pane_cp11

0xe197,	// (0x00022057) title_pane_stacon_g2_ParamLimits

0xe197,	// (0x00022057) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0002358a) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002358a) title_pane_stacon_g

0x11e8,	// (0x000150a8) cursor_press_pane

0x9101,	// (0x0001cfc1) popup_fep_hwr_window_ParamLimits

0x9101,	// (0x0001cfc1) popup_fep_hwr_window

0xe891,	// (0x00022751) popup_fep_vkb_window_ParamLimits

0xe891,	// (0x00022751) popup_fep_vkb_window

0x457a,	// (0x0001843a) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x000239fb) fep_vkb_side_pane_g_ParamLimits

0xed39,	// (0x00022bf9) fep_hwr_candidate_pane_ParamLimits

0xed39,	// (0x00022bf9) fep_hwr_candidate_pane

0xed63,	// (0x00022c23) fep_hwr_side_pane_ParamLimits

0xed63,	// (0x00022c23) fep_hwr_side_pane

0xed85,	// (0x00022c45) fep_hwr_top_pane_ParamLimits

0xed85,	// (0x00022c45) fep_hwr_top_pane

0xed9d,	// (0x00022c5d) fep_hwr_write_pane_ParamLimits

0xed9d,	// (0x00022c5d) fep_hwr_write_pane

0xfb3b,	// (0x000239fb) fep_vkb_side_pane_g

0x4582,	// (0x00018442) fep_hwr_top_pane_g1

0x4594,	// (0x00018454) fep_hwr_top_pane_g2

0xedd7,	// (0x00022c97) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x000239d7) fep_hwr_top_pane_g

0xedec,	// (0x00022cac) fep_hwr_top_text_pane

0x0b43,	// (0x00014a03) fep_hwr_top_text_pane_g1

0x45ca,	// (0x0001848a) fep_hwr_top_text_pane_t1

0xee7b,	// (0x00022d3b) fep_hwr_candidate_pane_g1

0x4815,	// (0x000186d5) fep_vkb_keypad_pane_g3_ParamLimits

0x4815,	// (0x000186d5) fep_vkb_keypad_pane_g3

0x4841,	// (0x00018701) fep_vkb_keypad_pane_g4_ParamLimits

0x4841,	// (0x00018701) fep_vkb_keypad_pane_g4

0x48b8,	// (0x00018778) fep_vkb_bottom_pane_g2_ParamLimits

0x48b8,	// (0x00018778) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00023a02) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00023a02) fep_vkb_bottom_pane_g

0x4521,	// (0x000183e1) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00023a0c) cell_vkb_side_pane_g

0x4943,	// (0x00018803) cell_vkb_side_pane_t1

0x4951,	// (0x00018811) cell_vkb_side_pane_t1_copy1

0x4521,	// (0x000183e1) bg_fep_vkb_candidate_pane_g2

0x4a95,	// (0x00018955) cell_vkb_candidate_pane_ParamLimits

0x45d8,	// (0x00018498) aid_size_cell_vkb_ParamLimits

0x45d8,	// (0x00018498) aid_size_cell_vkb

0x4a95,	// (0x00018955) cell_vkb_candidate_pane

0xeea2,	// (0x00022d62) bg_popup_fep_shadow_pane_g1

0xb952,	// (0x0001f812) fep_vkb_bottom_pane_ParamLimits

0xb952,	// (0x0001f812) fep_vkb_bottom_pane

0x46a7,	// (0x00018567) fep_vkb_candidate_pane_ParamLimits

0x46a7,	// (0x00018567) fep_vkb_candidate_pane

0xb97e,	// (0x0001f83e) fep_vkb_keypad_pane_ParamLimits

0xb97e,	// (0x0001f83e) fep_vkb_keypad_pane

0xb9a5,	// (0x0001f865) fep_vkb_side_pane_ParamLimits

0xb9a5,	// (0x0001f865) fep_vkb_side_pane

0xb9e1,	// (0x0001f8a1) fep_vkb_top_pane_ParamLimits

0xb9e1,	// (0x0001f8a1) fep_vkb_top_pane

0x476e,	// (0x0001862e) fep_vkb_top_pane_g1_ParamLimits

0x476e,	// (0x0001862e) fep_vkb_top_pane_g1

0x477d,	// (0x0001863d) fep_vkb_top_pane_g2_ParamLimits

0x477d,	// (0x0001863d) fep_vkb_top_pane_g2

0x478c,	// (0x0001864c) fep_vkb_top_pane_g3_ParamLimits

0x478c,	// (0x0001864c) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x000239f2) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x000239f2) fep_vkb_top_pane_g

0x47aa,	// (0x0001866a) fep_vkb_top_text_pane_ParamLimits

0x47aa,	// (0x0001866a) fep_vkb_top_text_pane

0xba1d,	// (0x0001f8dd) fep_vkb_side_pane_g1_ParamLimits

0xba1d,	// (0x0001f8dd) fep_vkb_side_pane_g1

0x4804,	// (0x000186c4) grid_vkb_side_pane_ParamLimits

0x4804,	// (0x000186c4) grid_vkb_side_pane

0xeeaa,	// (0x00022d6a) bg_popup_fep_shadow_pane_g2

0xeeb3,	// (0x00022d73) bg_popup_fep_shadow_pane_g3

0xeebb,	// (0x00022d7b) bg_popup_fep_shadow_pane_g4

0xeec4,	// (0x00022d84) bg_popup_fep_shadow_pane_g5

0xeece,	// (0x00022d8e) bg_popup_fep_shadow_pane_g6

0xeed6,	// (0x00022d96) bg_popup_fep_shadow_pane_g7

0xdebc,	// (0x00021d7c) bg_popup_fep_shadow_pane_g8

0x4863,	// (0x00018723) grid_vkb_keypad_number_pane_ParamLimits

0x4863,	// (0x00018723) grid_vkb_keypad_number_pane

0x4877,	// (0x00018737) grid_vkb_keypad_pane_ParamLimits

0x4877,	// (0x00018737) grid_vkb_keypad_pane

0x489d,	// (0x0001875d) fep_vkb_bottom_pane_g1_ParamLimits

0x489d,	// (0x0001875d) fep_vkb_bottom_pane_g1

0x48c6,	// (0x00018786) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x48c6,	// (0x00018786) grid_vkb_keypad_bottom_left_pane

0x48db,	// (0x0001879b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x48db,	// (0x0001879b) grid_vkb_keypad_bottom_right_pane

0x48f0,	// (0x000187b0) fep_vkb_top_text_pane_g1

0xba64,	// (0x0001f924) fep_vkb_top_text_pane_t1

0xba76,	// (0x0001f936) cell_vkb_side_pane_ParamLimits

0xba76,	// (0x0001f936) cell_vkb_side_pane

0x4521,	// (0x000183e1) cell_vkb_side_pane_g1

0x495f,	// (0x0001881f) cell_vkb_keypad_pane_ParamLimits

0x495f,	// (0x0001881f) cell_vkb_keypad_pane

0x49ec,	// (0x000188ac) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00023a1f) bg_popup_fep_shadow_pane_g

0xeee8,	// (0x00022da8) cell_hwr_side_pane_g1

0xeee8,	// (0x00022da8) cell_hwr_side_pane_g2

0x49f6,	// (0x000188b6) cell_vkb_keypad_pane_t1

0xba8c,	// (0x0001f94c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xba8c,	// (0x0001f94c) cell_vkb_keypad_bottom_left_pane

0xbaa1,	// (0x0001f961) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbaa1,	// (0x0001f961) cell_vkb_keypad_bottom_right_pane

0x4521,	// (0x000183e1) cell_vkb_keypad_bottom_left_pane_g1

0x4521,	// (0x000183e1) cell_vkb_keypad_bottom_right_pane_g1

0x4a5a,	// (0x0001891a) cell_vkb_keypad_number_pane_ParamLimits

0x4a5a,	// (0x0001891a) cell_vkb_keypad_number_pane

0x4a79,	// (0x00018939) cell_vkb_keypad_number_pane_g1

0x4a83,	// (0x00018943) cell_vkb_keypad_number_pane_g2

0x4a8c,	// (0x0001894c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00023a11) cell_vkb_keypad_number_pane_g

0x49f6,	// (0x000188b6) cell_vkb_keypad_number_pane_t1

0x4ab6,	// (0x00018976) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00023a32) cell_hwr_side_pane_g

0x4acf,	// (0x0001898f) cell_hwr_side_pane_t1

0xeef2,	// (0x00022db2) cell_hwr_side_pane_t1_copy1

0xef00,	// (0x00022dc0) cell_hwr_candidate_pane_g1

0xef2f,	// (0x00022def) cell_hwr_candidate_pane_t1

0x4521,	// (0x000183e1) cell_vkb_candidate_pane_g2

0x4b13,	// (0x000189d3) cell_vkb_candidate_pane_t1

0xea23,	// (0x000228e3) bg_popup_fep_shadow_pane_ParamLimits

0xea23,	// (0x000228e3) bg_popup_fep_shadow_pane

0xedb7,	// (0x00022c77) bg_fep_hwr_top_pane_g4

0x45a6,	// (0x00018466) bg_hwr_side_pane_g1_ParamLimits

0x45a6,	// (0x00018466) bg_hwr_side_pane_g1

0x995d,	// (0x0001d81d) cell_hwr_side_pane_ParamLimits

0x995d,	// (0x0001d81d) cell_hwr_side_pane

0xee01,	// (0x00022cc1) fep_hwr_write_pane_g1_ParamLimits

0xee01,	// (0x00022cc1) fep_hwr_write_pane_g1

0xee0e,	// (0x00022cce) fep_hwr_write_pane_g2_ParamLimits

0xee0e,	// (0x00022cce) fep_hwr_write_pane_g2

0xee1b,	// (0x00022cdb) fep_hwr_write_pane_g3_ParamLimits

0xee1b,	// (0x00022cdb) fep_hwr_write_pane_g3

0x997d,	// (0x0001d83d) fep_hwr_write_pane_g4_ParamLimits

0x997d,	// (0x0001d83d) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x000239de) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x000239de) fep_hwr_write_pane_g

0xedb7,	// (0x00022c77) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xedb7,	// (0x00022c77) bg_fep_hwr_candidate_pane_g2

0xee29,	// (0x00022ce9) cell_hwr_candidate_pane_ParamLimits

0xee29,	// (0x00022ce9) cell_hwr_candidate_pane

0xee7b,	// (0x00022d3b) fep_hwr_candidate_pane_g1_ParamLimits

0x4606,	// (0x000184c6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4606,	// (0x000184c6) bg_popup_fep_shadow_pane_cp2

0x479c,	// (0x0001865c) fep_vkb_top_pane_g4_ParamLimits

0x479c,	// (0x0001865c) fep_vkb_top_pane_g4

0x47e2,	// (0x000186a2) fep_vkb_side_pane_g2_ParamLimits

0x47e2,	// (0x000186a2) fep_vkb_side_pane_g2

0xa540,	// (0x0001e400) list_setting_pane_t4_ParamLimits

0xa540,	// (0x0001e400) list_setting_pane_t4

0xa5bc,	// (0x0001e47c) list_setting_number_pane_t5_ParamLimits

0xa5bc,	// (0x0001e47c) list_setting_number_pane_t5

0xa91a,	// (0x0001e7da) list_double_heading_pane_cp2_ParamLimits

0xa91a,	// (0x0001e7da) list_double_heading_pane_cp2

0xde06,	// (0x00021cc6) list_double_heading_pane_g1_cp2_ParamLimits

0xde06,	// (0x00021cc6) list_double_heading_pane_g1_cp2

0xde12,	// (0x00021cd2) list_double_heading_pane_g2_cp2_ParamLimits

0xde12,	// (0x00021cd2) list_double_heading_pane_g2_cp2

0x4b21,	// (0x000189e1) list_double_heading_pane_t1_cp2_ParamLimits

0x4b21,	// (0x000189e1) list_double_heading_pane_t1_cp2

0x4b37,	// (0x000189f7) list_double_heading_pane_t2_cp2_ParamLimits

0x4b37,	// (0x000189f7) list_double_heading_pane_t2_cp2

0xbf47,	// (0x0001fe07) aid_value_unit2

0xda4a,	// (0x0002190a) popup_preview_fixed_window

0xc10c,	// (0x0001ffcc) bg_popup_preview_window_pane_cp02

0x4b49,	// (0x00018a09) list_preview_fixed_pane

0x4b8f,	// (0x00018a4f) list_empty_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_empty_pane_fp

0x4b8f,	// (0x00018a4f) list_single_cale_day_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_single_cale_day_pane_fp

0x4b8f,	// (0x00018a4f) list_single_graphic_heading_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_single_graphic_heading_pane_fp

0x4b8f,	// (0x00018a4f) list_single_graphic_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_single_graphic_pane_fp

0x4b8f,	// (0x00018a4f) list_single_heading_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_single_heading_pane_fp

0x4b8f,	// (0x00018a4f) list_single_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_single_pane_fp

0x4ba8,	// (0x00018a68) list_single_pane_fp_g1_ParamLimits

0x4ba8,	// (0x00018a68) list_single_pane_fp_g1

0x4bb4,	// (0x00018a74) list_single_pane_fp_g2_ParamLimits

0x4bb4,	// (0x00018a74) list_single_pane_fp_g2

0x4bc0,	// (0x00018a80) list_single_pane_fp_g3_ParamLimits

0x4bc0,	// (0x00018a80) list_single_pane_fp_g3

0x4bd4,	// (0x00018a94) list_single_pane_fp_g4_ParamLimits

0x4bd4,	// (0x00018a94) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00023a45) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00023a45) list_single_pane_fp_g

0x4be0,	// (0x00018aa0) list_single_pane_fp_t1_ParamLimits

0x4be0,	// (0x00018aa0) list_single_pane_fp_t1

0x4bf7,	// (0x00018ab7) list_single_graphic_pane_fp_g1_ParamLimits

0x4bf7,	// (0x00018ab7) list_single_graphic_pane_fp_g1

0x4ba8,	// (0x00018a68) list_single_graphic_pane_fp_g2_ParamLimits

0x4ba8,	// (0x00018a68) list_single_graphic_pane_fp_g2

0x4bb4,	// (0x00018a74) list_single_graphic_pane_fp_g3_ParamLimits

0x4bb4,	// (0x00018a74) list_single_graphic_pane_fp_g3

0x4bc0,	// (0x00018a80) list_single_graphic_pane_fp_g4_ParamLimits

0x4bc0,	// (0x00018a80) list_single_graphic_pane_fp_g4

0x4bd4,	// (0x00018a94) list_single_graphic_pane_fp_g5_ParamLimits

0x4bd4,	// (0x00018a94) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023a4e) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023a4e) list_single_graphic_pane_fp_g

0x4c03,	// (0x00018ac3) list_single_graphic_pane_fp_t1_ParamLimits

0x4c03,	// (0x00018ac3) list_single_graphic_pane_fp_t1

0x4bf7,	// (0x00018ab7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4bf7,	// (0x00018ab7) list_single_graphic_heading_pane_fp_g1

0x4ba8,	// (0x00018a68) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4ba8,	// (0x00018a68) list_single_graphic_heading_pane_fp_g2

0x4bb4,	// (0x00018a74) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4bb4,	// (0x00018a74) list_single_graphic_heading_pane_fp_g3

0x4bc0,	// (0x00018a80) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4bc0,	// (0x00018a80) list_single_graphic_heading_pane_fp_g4

0x4bd4,	// (0x00018a94) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4bd4,	// (0x00018a94) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023a4e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023a4e) list_single_graphic_heading_pane_fp_g

0x4c19,	// (0x00018ad9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c19,	// (0x00018ad9) list_single_graphic_heading_pane_fp_t1

0x4c2f,	// (0x00018aef) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c2f,	// (0x00018aef) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00023a59) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00023a59) list_single_graphic_heading_pane_fp_t

0x4c41,	// (0x00018b01) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c41,	// (0x00018b01) list_single_cale_day_pane_fp_g1

0x4c79,	// (0x00018b39) list_single_cale_day_pane_fp_g2_ParamLimits

0x4c79,	// (0x00018b39) list_single_cale_day_pane_fp_g2

0x4c85,	// (0x00018b45) list_single_cale_day_pane_fp_g3_ParamLimits

0x4c85,	// (0x00018b45) list_single_cale_day_pane_fp_g3

0x4cad,	// (0x00018b6d) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cad,	// (0x00018b6d) list_single_cale_day_pane_fp_g4

0x4cd1,	// (0x00018b91) list_single_cale_day_pane_fp_g5_ParamLimits

0x4cd1,	// (0x00018b91) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00023a5e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00023a5e) list_single_cale_day_pane_fp_g

0x4cf5,	// (0x00018bb5) list_single_cale_day_pane_fp_t1_ParamLimits

0x4cf5,	// (0x00018bb5) list_single_cale_day_pane_fp_t1

0x4d1b,	// (0x00018bdb) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d1b,	// (0x00018bdb) list_single_cale_day_pane_fp_t2

0x4d34,	// (0x00018bf4) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d34,	// (0x00018bf4) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00023a69) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00023a69) list_single_cale_day_pane_fp_t

0x4ba8,	// (0x00018a68) list_empty_pane_fp_g1_ParamLimits

0x4ba8,	// (0x00018a68) list_empty_pane_fp_g1

0x4d4d,	// (0x00018c0d) list_empty_pane_fp_t1

0x4d5b,	// (0x00018c1b) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00023a70) list_empty_pane_fp_t

0x4ba8,	// (0x00018a68) list_single_heading_pane_fp_g1_ParamLimits

0x4ba8,	// (0x00018a68) list_single_heading_pane_fp_g1

0x4bb4,	// (0x00018a74) list_single_heading_pane_fp_g2_ParamLimits

0x4bb4,	// (0x00018a74) list_single_heading_pane_fp_g2

0x4bc0,	// (0x00018a80) list_single_heading_pane_fp_g3_ParamLimits

0x4bc0,	// (0x00018a80) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00023a75) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00023a75) list_single_heading_pane_fp_g

0x4d69,	// (0x00018c29) list_single_heading_pane_fp_t1_ParamLimits

0x4d69,	// (0x00018c29) list_single_heading_pane_fp_t1

0x4d7b,	// (0x00018c3b) list_single_heading_pane_fp_t2_ParamLimits

0x4d7b,	// (0x00018c3b) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00023a7c) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00023a7c) list_single_heading_pane_fp_t

0xdfde,	// (0x00021e9e) aid_size_cell_fast

0xc0ef,	// (0x0001ffaf) soft_indicator_pane_cp1_t1

0xe01b,	// (0x00021edb) cell_app_pane_cp2_ParamLimits

0xe01b,	// (0x00021edb) cell_app_pane_cp2

0xed22,	// (0x00022be2) fep_hwr_candidate_drop_down_list_pane

0xee95,	// (0x00022d55) fep_hwr_candidate_pane_g3_ParamLimits

0xee95,	// (0x00022d55) fep_hwr_candidate_pane_g3

0xc3e8,	// (0x000202a8) fep_hwr_candidate_pane_g4_ParamLimits

0xc3e8,	// (0x000202a8) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000239eb) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x000239eb) fep_hwr_candidate_pane_g

0x4696,	// (0x00018556) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4696,	// (0x00018556) fep_vkb_candidate_drop_down_list_pane

0x4abe,	// (0x0001897e) fep_vkb_candidate_pane_g3

0x4ac6,	// (0x00018986) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00023a18) fep_vkb_candidate_pane_g

0xef00,	// (0x00022dc0) cell_hwr_candidate_pane_g1_ParamLimits

0xef0e,	// (0x00022dce) cell_hwr_candidate_pane_g3_ParamLimits

0xef0e,	// (0x00022dce) cell_hwr_candidate_pane_g3

0x500b,	// (0x00018ecb) cell_hwr_candidate_pane_g4_ParamLimits

0x500b,	// (0x00018ecb) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00023a37) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00023a37) cell_hwr_candidate_pane_g

0x4add,	// (0x0001899d) cell_vkb_candidate_pane_g3_ParamLimits

0x4add,	// (0x0001899d) cell_vkb_candidate_pane_g3

0x4af8,	// (0x000189b8) cell_vkb_candidate_pane_g4_ParamLimits

0x4af8,	// (0x000189b8) cell_vkb_candidate_pane_g4

0x4d91,	// (0x00018c51) cell_app_pane_cp2_g1_ParamLimits

0x4d91,	// (0x00018c51) cell_app_pane_cp2_g1

0x4daf,	// (0x00018c6f) cell_app_pane_cp2_g2_ParamLimits

0x4daf,	// (0x00018c6f) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00023a81) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00023a81) cell_app_pane_cp2_g

0x4dbb,	// (0x00018c7b) cell_app_pane_cp2_t1_ParamLimits

0x4dbb,	// (0x00018c7b) cell_app_pane_cp2_t1

0xdde0,	// (0x00021ca0) grid_highlight_pane_cp1_ParamLimits

0xdde0,	// (0x00021ca0) grid_highlight_pane_cp1

0xef4d,	// (0x00022e0d) cell_hwr_candidate_pane_cp1_ParamLimits

0xef4d,	// (0x00022e0d) cell_hwr_candidate_pane_cp1

0xef00,	// (0x00022dc0) fep_hwr_candidate_drop_down_list_pane_g1

0xef71,	// (0x00022e31) fep_hwr_candidate_drop_down_list_pane_g2

0xef7e,	// (0x00022e3e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00023a86) fep_hwr_candidate_drop_down_list_pane_g

0xef8b,	// (0x00022e4b) fep_hwr_candidate_drop_down_list_scroll_pane

0xef94,	// (0x00022e54) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xef94,	// (0x00022e54) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xefa1,	// (0x00022e61) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xefa1,	// (0x00022e61) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xefae,	// (0x00022e6e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xefae,	// (0x00022e6e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xefbb,	// (0x00022e7b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xefbb,	// (0x00022e7b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xefd6,	// (0x00022e96) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xefd6,	// (0x00022e96) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xeff1,	// (0x00022eb1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xeff1,	// (0x00022eb1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf00c,	// (0x00022ecc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf00c,	// (0x00022ecc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf027,	// (0x00022ee7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf027,	// (0x00022ee7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00023a8d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00023a8d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4dcd,	// (0x00018c8d) cell_vkb_candidate_pane_cp1_ParamLimits

0x4dcd,	// (0x00018c8d) cell_vkb_candidate_pane_cp1

0x479c,	// (0x0001865c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x479c,	// (0x0001865c) fep_vkb_candidate_drop_down_list_pane_g1

0x4df3,	// (0x00018cb3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4df3,	// (0x00018cb3) fep_vkb_candidate_drop_down_list_pane_g2

0x4e00,	// (0x00018cc0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e00,	// (0x00018cc0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00023a9e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00023a9e) fep_vkb_candidate_drop_down_list_pane_g

0x4e0d,	// (0x00018ccd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e0d,	// (0x00018ccd) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e1a,	// (0x00018cda) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e1a,	// (0x00018cda) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e27,	// (0x00018ce7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e27,	// (0x00018ce7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e33,	// (0x00018cf3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e33,	// (0x00018cf3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e3f,	// (0x00018cff) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e3f,	// (0x00018cff) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e60,	// (0x00018d20) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e60,	// (0x00018d20) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e81,	// (0x00018d41) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e81,	// (0x00018d41) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4ea2,	// (0x00018d62) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ea2,	// (0x00018d62) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4ec3,	// (0x00018d83) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4ec3,	// (0x00018d83) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00023aa5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00023aa5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e51,	// (0x0001dd11) title_pane_g1_ParamLimits

0x9e64,	// (0x0001dd24) title_pane_g2_ParamLimits

0xf554,	// (0x00023414) title_pane_g_ParamLimits

0x0b33,	// (0x000149f3) aid_call2_pane

0x0b3b,	// (0x000149fb) aid_call_pane

0x0b43,	// (0x00014a03) popup_clock_analogue_window_g1

0x0b43,	// (0x00014a03) popup_clock_analogue_window_g2

0xe52c,	// (0x000223ec) popup_clock_analogue_window_g3

0xe535,	// (0x000223f5) popup_clock_analogue_window_g4

0xbf59,	// (0x0001fe19) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x000235b9) popup_clock_analogue_window_g

0xe53d,	// (0x000223fd) popup_clock_analogue_window_t1

0xe54b,	// (0x0002240b) clock_digital_number_pane_ParamLimits

0xe54b,	// (0x0002240b) clock_digital_number_pane

0xe557,	// (0x00022417) clock_digital_number_pane_cp02_ParamLimits

0xe557,	// (0x00022417) clock_digital_number_pane_cp02

0xe563,	// (0x00022423) clock_digital_number_pane_cp03_ParamLimits

0xe563,	// (0x00022423) clock_digital_number_pane_cp03

0xe56f,	// (0x0002242f) clock_digital_number_pane_cp04_ParamLimits

0xe56f,	// (0x0002242f) clock_digital_number_pane_cp04

0xe57b,	// (0x0002243b) clock_digital_separator_pane_ParamLimits

0xe57b,	// (0x0002243b) clock_digital_separator_pane

0xe587,	// (0x00022447) popup_clock_digital_window_t1_ParamLimits

0xe587,	// (0x00022447) popup_clock_digital_window_t1

0xbf59,	// (0x0001fe19) clock_digital_number_pane_g1

0xbf59,	// (0x0001fe19) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x000235c4) clock_digital_number_pane_g

0xbf59,	// (0x0001fe19) clock_digital_separator_pane_g1

0xbf59,	// (0x0001fe19) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x000235c4) clock_digital_separator_pane_g

0xac3a,	// (0x0001eafa) aid_fill_nsta_ParamLimits

0xad70,	// (0x0001ec30) indicator_nsta_pane_ParamLimits

0x183f,	// (0x000156ff) popup_clock_analogue_window

0x183f,	// (0x000156ff) popup_clock_digital_window

0xe45a,	// (0x0002231a) grid_indicator_nsta_pane_ParamLimits

0x3ef2,	// (0x00017db2) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002396b) clock_nsta_pane_t

0xe4f9,	// (0x000223b9) aid_size_max_handle

0x8ec5,	// (0x0001cd85) aid_size_min_handle

0x11e8,	// (0x000150a8) editor_scroll_pane

0x4ede,	// (0x00018d9e) ex_editor_pane

0xdfa4,	// (0x00021e64) scroll_pane_cp13

0xdcf9,	// (0x00021bb9) scroll_pane_cp14

0x0b72,	// (0x00014a32) scroll_pane_cp36

0xa92d,	// (0x0001e7ed) list_single_graphic_hl_pane_cp2_ParamLimits

0xa92d,	// (0x0001e7ed) list_single_graphic_hl_pane_cp2

0xb5bf,	// (0x0001f47f) list_single_graphic_hl_pane_ParamLimits

0xb5bf,	// (0x0001f47f) list_single_graphic_hl_pane

0x4ee6,	// (0x00018da6) aid_size_min_hl_cp1

0x4eef,	// (0x00018daf) list_highlight_pane_cp34_ParamLimits

0x4eef,	// (0x00018daf) list_highlight_pane_cp34

0x4f00,	// (0x00018dc0) list_single_graphic_hl_pane_g1_ParamLimits

0x4f00,	// (0x00018dc0) list_single_graphic_hl_pane_g1

0xe468,	// (0x00022328) list_single_graphic_hl_pane_g2_ParamLimits

0xe468,	// (0x00022328) list_single_graphic_hl_pane_g2

0xe468,	// (0x00022328) list_single_graphic_hl_pane_g3_ParamLimits

0xe468,	// (0x00022328) list_single_graphic_hl_pane_g3

0xe474,	// (0x00022334) list_single_graphic_hl_pane_g4_ParamLimits

0xe474,	// (0x00022334) list_single_graphic_hl_pane_g4

0x4f73,	// (0x00018e33) list_single_graphic_hl_pane_g5_ParamLimits

0x4f73,	// (0x00018e33) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00023ab6) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00023ab6) list_single_graphic_hl_pane_g

0xbabc,	// (0x0001f97c) list_single_graphic_hl_pane_t1_ParamLimits

0xbabc,	// (0x0001f97c) list_single_graphic_hl_pane_t1

0x4f43,	// (0x00018e03) aid_size_min_hl_cp2

0x4f4c,	// (0x00018e0c) list_highlight_pane_cp34_cp2_ParamLimits

0x4f4c,	// (0x00018e0c) list_highlight_pane_cp34_cp2

0x4f00,	// (0x00018dc0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f00,	// (0x00018dc0) list_single_graphic_hl_pane_g1_cp2

0x4f59,	// (0x00018e19) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f59,	// (0x00018e19) list_single_graphic_hl_pane_g2_cp2

0xbad2,	// (0x0001f992) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbad2,	// (0x0001f992) list_single_graphic_hl_pane_g3_cp2

0xe474,	// (0x00022334) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe474,	// (0x00022334) list_single_graphic_hl_pane_g4_cp2

0x4f73,	// (0x00018e33) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f73,	// (0x00018e33) list_single_graphic_hl_pane_g5_cp2

0x8f1c,	// (0x0001cddc) control_pane_g4_ParamLimits

0x8f1c,	// (0x0001cddc) control_pane_g4

0x1534,	// (0x000153f4) bg_popup_sub_pane_cp10_ParamLimits

0x452b,	// (0x000183eb) list_choice_list_pane_ParamLimits

0x453a,	// (0x000183fa) scroll_pane_cp23

0xc10c,	// (0x0001ffcc) bg_popup_preview_window_pane_cp02_ParamLimits

0x4b49,	// (0x00018a09) list_preview_fixed_pane_ParamLimits

0x4b5f,	// (0x00018a1f) list_preview_fixed_pane_cp_ParamLimits

0x4b5f,	// (0x00018a1f) list_preview_fixed_pane_cp

0x4b6b,	// (0x00018a2b) popup_preview_fixed_window_g1_ParamLimits

0x4b6b,	// (0x00018a2b) popup_preview_fixed_window_g1

0x4b77,	// (0x00018a37) popup_preview_fixed_window_g2_ParamLimits

0x4b77,	// (0x00018a37) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00023a3e) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00023a3e) popup_preview_fixed_window_g

0xe27c,	// (0x0002213c) aid_navi_side_left_pane_ParamLimits

0xe480,	// (0x00022340) aid_navi_side_right_pane_ParamLimits

0xe498,	// (0x00022358) navi_icon_pane_stacon_ParamLimits

0xe4ac,	// (0x0002236c) navi_navi_pane_stacon_ParamLimits

0xe498,	// (0x00022358) navi_text_pane_stacon_ParamLimits

0xd93b,	// (0x000217fb) main_text_info_pane

0x4f9d,	// (0x00018e5d) listscroll_text_info_pane

0x4fa5,	// (0x00018e65) list_text_info_pane_ParamLimits

0x4fa5,	// (0x00018e65) list_text_info_pane

0x4fb4,	// (0x00018e74) scroll_pane_cp24_ParamLimits

0x4fb4,	// (0x00018e74) scroll_pane_cp24

0xbae0,	// (0x0001f9a0) list_text_info_pane_t1_ParamLimits

0xbae0,	// (0x0001f9a0) list_text_info_pane_t1

0x9065,	// (0x0001cf25) popup_fast_swap2_window_ParamLimits

0x9065,	// (0x0001cf25) popup_fast_swap2_window

0x505a,	// (0x00018f1a) aid_size_cell_fast2

0xbf4f,	// (0x0001fe0f) bg_popup_window_pane_cp17

0x1fab,	// (0x00015e6b) heading_pane_cp2

0xc312,	// (0x000201d2) listscroll_fast2_pane

0x5064,	// (0x00018f24) grid_fast2_pane

0x506e,	// (0x00018f2e) listscroll_fast2_pane_g1

0x5078,	// (0x00018f38) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00023ac1) listscroll_fast2_pane_g

0xdfa4,	// (0x00021e64) scroll_pane_cp26

0x5082,	// (0x00018f42) cell_fast2_pane_ParamLimits

0x5082,	// (0x00018f42) cell_fast2_pane

0x5099,	// (0x00018f59) cell_fast2_pane_g1

0x50a2,	// (0x00018f62) cell_fast2_pane_g2

0x50ab,	// (0x00018f6b) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00023ac6) cell_fast2_pane_g

0xc354,	// (0x00020214) grid_highlight_pane_cp9

0xe819,	// (0x000226d9) main_eswt_pane_ParamLimits

0xe819,	// (0x000226d9) main_eswt_pane

0x502c,	// (0x00018eec) list_single_text_info_pane

0x50b3,	// (0x00018f73) eswt_ctrl_button_pane

0x50b3,	// (0x00018f73) eswt_ctrl_canvas_pane

0x50bb,	// (0x00018f7b) eswt_ctrl_combo_pane

0x50b3,	// (0x00018f73) eswt_ctrl_default_pane

0x50b3,	// (0x00018f73) eswt_ctrl_label_pane

0x50c3,	// (0x00018f83) eswt_ctrl_wait_pane

0x50cb,	// (0x00018f8b) eswt_shell_pane

0xbf4f,	// (0x0001fe0f) listscroll_eswt_app_pane

0x50eb,	// (0x00018fab) popup_eswt_tasktip_window_ParamLimits

0x50eb,	// (0x00018fab) popup_eswt_tasktip_window

0x1bbc,	// (0x00015a7c) bg_popup_window_pane_cp18

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_ParamLimits

0x50fc,	// (0x00018fbc) eswt_control_pane_g1

0x5109,	// (0x00018fc9) eswt_control_pane_g2_ParamLimits

0x5109,	// (0x00018fc9) eswt_control_pane_g2

0x5116,	// (0x00018fd6) eswt_control_pane_g3_ParamLimits

0x5116,	// (0x00018fd6) eswt_control_pane_g3

0x5123,	// (0x00018fe3) eswt_control_pane_g4_ParamLimits

0x5123,	// (0x00018fe3) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00023acd) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00023acd) eswt_control_pane_g

0xdde0,	// (0x00021ca0) bg_button_pane_ParamLimits

0xdde0,	// (0x00021ca0) bg_button_pane

0xc369,	// (0x00020229) common_borders_pane_copy2_ParamLimits

0xc369,	// (0x00020229) common_borders_pane_copy2

0x5130,	// (0x00018ff0) control_button_pane_g1_ParamLimits

0x5130,	// (0x00018ff0) control_button_pane_g1

0x513c,	// (0x00018ffc) control_button_pane_g2_ParamLimits

0x513c,	// (0x00018ffc) control_button_pane_g2

0x5148,	// (0x00019008) control_button_pane_g3_ParamLimits

0x5148,	// (0x00019008) control_button_pane_g3

0x0002,

0xfc16,	// (0x00023ad6) control_button_pane_g_ParamLimits

0xfc16,	// (0x00023ad6) control_button_pane_g

0x515c,	// (0x0001901c) control_button_pane_t1

0x516a,	// (0x0001902a) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00023add) control_button_pane_t

0x1a96,	// (0x00015956) bg_button_pane_g1

0x1aa6,	// (0x00015966) bg_button_pane_g2

0x1a9e,	// (0x0001595e) bg_button_pane_g3

0x1ab6,	// (0x00015976) bg_button_pane_g4

0x1aae,	// (0x0001596e) bg_button_pane_g5

0x1abe,	// (0x0001597e) bg_button_pane_g6

0x1ac6,	// (0x00015986) bg_button_pane_g7

0x1ad6,	// (0x00015996) bg_button_pane_g8

0x1ace,	// (0x0001598e) bg_button_pane_g9

0x0008,

0xf862,	// (0x00023722) bg_button_pane_g

0x44e6,	// (0x000183a6) common_borders_pane_ParamLimits

0x44e6,	// (0x000183a6) common_borders_pane

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy1_ParamLimits

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy1

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy1_ParamLimits

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy1

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy1_ParamLimits

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy1

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy1_ParamLimits

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy1

0x4521,	// (0x000183e1) bg_eswt_ctrl_canvas_pane_g1

0x44e6,	// (0x000183a6) common_borders_pane_cp2_ParamLimits

0x44e6,	// (0x000183a6) common_borders_pane_cp2

0x44e6,	// (0x000183a6) common_borders_pane_cp3_ParamLimits

0x44e6,	// (0x000183a6) common_borders_pane_cp3

0x5178,	// (0x00019038) separator_horizontal_pane

0x5180,	// (0x00019040) separator_vertical_pane

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy2_ParamLimits

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy2

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy2_ParamLimits

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy2

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy2_ParamLimits

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy2

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy2_ParamLimits

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy2

0xbf4f,	// (0x0001fe0f) common_borders_pane_cp4

0x5189,	// (0x00019049) separator_horizontal_pane_g1

0x5192,	// (0x00019052) separator_horizontal_pane_g2

0x519b,	// (0x0001905b) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00023ae2) separator_horizontal_pane_g

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy3_ParamLimits

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy3

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy3_ParamLimits

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy3

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy3_ParamLimits

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy3

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy3_ParamLimits

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy3

0xbf4f,	// (0x0001fe0f) common_borders_pane_cp5

0x51a4,	// (0x00019064) separator_vertical_pane_g1

0x51ad,	// (0x0001906d) separator_vertical_pane_g2

0x51b6,	// (0x00019076) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00023ae9) separator_vertical_pane_g

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy4_ParamLimits

0x50fc,	// (0x00018fbc) eswt_control_pane_g1_copy4

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy4_ParamLimits

0x5109,	// (0x00018fc9) eswt_control_pane_g2_copy4

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy4_ParamLimits

0x5116,	// (0x00018fd6) eswt_control_pane_g3_copy4

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy4_ParamLimits

0x5123,	// (0x00018fe3) eswt_control_pane_g4_copy4

0xbb02,	// (0x0001f9c2) eswt_ctrl_combo_button_pane

0xbb0a,	// (0x0001f9ca) eswt_ctrl_input_pane

0xbb12,	// (0x0001f9d2) popup_choice_list_window_cp70

0xbb1a,	// (0x0001f9da) eswt_ctrl_input_pane_t1

0xbf4f,	// (0x0001fe0f) input_focus_pane_cp70

0x44e6,	// (0x000183a6) bg_button_pane_cp70_ParamLimits

0x44e6,	// (0x000183a6) bg_button_pane_cp70

0xbb28,	// (0x0001f9e8) eswt_ctrl_combo_button_pane_g1

0x51ed,	// (0x000190ad) wait_bar_pane_cp70

0x1bbc,	// (0x00015a7c) bg_popup_window_pane_cp70_ParamLimits

0x1bbc,	// (0x00015a7c) bg_popup_window_pane_cp70

0x51f5,	// (0x000190b5) popup_eswt_tasktip_window_t1

0x520b,	// (0x000190cb) wait_bar_pane_cp71_ParamLimits

0x520b,	// (0x000190cb) wait_bar_pane_cp71

0x5217,	// (0x000190d7) grid_eswt_app_pane

0xe2f9,	// (0x000221b9) scroll_pane_cp70

0xbb30,	// (0x0001f9f0) cell_eswt_app_pane_ParamLimits

0xbb30,	// (0x0001f9f0) cell_eswt_app_pane

0xbb62,	// (0x0001fa22) cell_eswt_app_pane_g1_ParamLimits

0xbb62,	// (0x0001fa22) cell_eswt_app_pane_g1

0xbb91,	// (0x0001fa51) cell_eswt_app_pane_g2_ParamLimits

0xbb91,	// (0x0001fa51) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00023af0) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00023af0) cell_eswt_app_pane_g

0xbbba,	// (0x0001fa7a) cell_eswt_app_pane_t1_ParamLimits

0xbbba,	// (0x0001fa7a) cell_eswt_app_pane_t1

0x52dc,	// (0x0001919c) grid_highlight_pane_cp70_ParamLimits

0x52dc,	// (0x0001919c) grid_highlight_pane_cp70

0x10b9,	// (0x00014f79) set_content_pane_g1

0x148c,	// (0x0001534c) status_small_volume_pane

0xf042,	// (0x00022f02) status_small_volume_pane_g1

0xf04a,	// (0x00022f0a) volume_small2_pane

0xf053,	// (0x00022f13) volume_small2_pane_g1

0xf05c,	// (0x00022f1c) volume_small2_pane_g2

0xf065,	// (0x00022f25) volume_small2_pane_g3

0xf06e,	// (0x00022f2e) volume_small2_pane_g4

0xf077,	// (0x00022f37) volume_small2_pane_g5

0xf080,	// (0x00022f40) volume_small2_pane_g6

0xf089,	// (0x00022f49) volume_small2_pane_g7

0xf092,	// (0x00022f52) volume_small2_pane_g8

0xf09b,	// (0x00022f5b) volume_small2_pane_g9

0xf0a4,	// (0x00022f64) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00023af5) volume_small2_pane_g

0x48f0,	// (0x000187b0) fep_vkb_top_text_pane_g1_ParamLimits

0xba64,	// (0x0001f924) fep_vkb_top_text_pane_t1_ParamLimits

0x4b83,	// (0x00018a43) popup_preview_fixed_window_g3_ParamLimits

0x4b83,	// (0x00018a43) popup_preview_fixed_window_g3

0x96ff,	// (0x0001d5bf) popup_toolbar_trans_pane

0xb3de,	// (0x0001f29e) aid_height_set_list_ParamLimits

0x2f82,	// (0x00016e42) aid_size_parent_ParamLimits

0x1534,	// (0x000153f4) list_highlight_pane_cp2_ParamLimits

0x10b9,	// (0x00014f79) set_content_pane_g1_ParamLimits

0xb5d3,	// (0x0001f493) list_single_image_pane_ParamLimits

0xb5d3,	// (0x0001f493) list_single_image_pane

0xbbec,	// (0x0001faac) aid_size_cell_image_ParamLimits

0xbbec,	// (0x0001faac) aid_size_cell_image

0xbbf9,	// (0x0001fab9) grid_single_image_pane_ParamLimits

0xbbf9,	// (0x0001fab9) grid_single_image_pane

0xde06,	// (0x00021cc6) list_single_image_pane_g1_ParamLimits

0xde06,	// (0x00021cc6) list_single_image_pane_g1

0xde12,	// (0x00021cd2) list_single_image_pane_g2_ParamLimits

0xde12,	// (0x00021cd2) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00023b0a) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00023b0a) list_single_image_pane_g

0x5303,	// (0x000191c3) list_single_image_pane_t1_ParamLimits

0x5303,	// (0x000191c3) list_single_image_pane_t1

0xbc07,	// (0x0001fac7) cell_image_list_pane_ParamLimits

0xbc07,	// (0x0001fac7) cell_image_list_pane

0xbc1b,	// (0x0001fadb) cell_image_list_pane_g1

0xbc24,	// (0x0001fae4) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00023b0f) cell_image_list_pane_g

0x5341,	// (0x00019201) aid_size_cell_tb_trans_pane

0xdde0,	// (0x00021ca0) bg_tb_trans_pane

0x5353,	// (0x00019213) grid_tb_trans_pane

0x1a96,	// (0x00015956) bg_tb_trans_pane_g1

0x1aa6,	// (0x00015966) bg_tb_trans_pane_g2

0x1a9e,	// (0x0001595e) bg_tb_trans_pane_g3

0x1ab6,	// (0x00015976) bg_tb_trans_pane_g4

0x1aae,	// (0x0001596e) bg_tb_trans_pane_g5

0x1ad6,	// (0x00015996) bg_tb_trans_pane_g6

0x1ace,	// (0x0001598e) bg_tb_trans_pane_g7

0x1abe,	// (0x0001597e) bg_tb_trans_pane_g8

0x1ac6,	// (0x00015986) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00023b14) bg_tb_trans_pane_g

0x5367,	// (0x00019227) cell_toolbar_trans_pane_ParamLimits

0x5367,	// (0x00019227) cell_toolbar_trans_pane

0x4521,	// (0x000183e1) cell_toolbar_trans_pane_g1

0xb809,	// (0x0001f6c9) list_form2_midp_pane_t1

0xb817,	// (0x0001f6d7) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x000239b1) list_form2_midp_pane_t

0x410b,	// (0x00017fcb) scroll_pane_cp51_ParamLimits

0x4328,	// (0x000181e8) form2_midp_wait_pane_g1

0x4331,	// (0x000181f1) form2_midp_wait_pane_g2

0x433a,	// (0x000181fa) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x000239c6) form2_midp_wait_pane_g

0xbfbf,	// (0x0001fe7f) list_highlight_pane_cp21_ParamLimits

0x437e,	// (0x0001823e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x438d,	// (0x0001824d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x31a3,	// (0x00017063) list_single_2graphic_im_pane_ParamLimits

0x31a3,	// (0x00017063) list_single_2graphic_im_pane

0xbc2d,	// (0x0001faed) list_single_2graphic_im_pane_g1_ParamLimits

0xbc2d,	// (0x0001faed) list_single_2graphic_im_pane_g1

0xbc3e,	// (0x0001fafe) list_single_2graphic_im_pane_g2_ParamLimits

0xbc3e,	// (0x0001fafe) list_single_2graphic_im_pane_g2

0xbc4a,	// (0x0001fb0a) list_single_2graphic_im_pane_g3_ParamLimits

0xbc4a,	// (0x0001fb0a) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00023b27) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00023b27) list_single_2graphic_im_pane_g

0xbc5e,	// (0x0001fb1e) list_single_2graphic_im_pane_t1_ParamLimits

0xbc5e,	// (0x0001fb1e) list_single_2graphic_im_pane_t1

0x4b8f,	// (0x00018a4f) list_single_graphic_2heading_pane_fp_ParamLimits

0x4b8f,	// (0x00018a4f) list_single_graphic_2heading_pane_fp

0x4bf7,	// (0x00018ab7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4bf7,	// (0x00018ab7) list_single_graphic_2heading_pane_fp_g1

0x4ba8,	// (0x00018a68) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4ba8,	// (0x00018a68) list_single_graphic_2heading_pane_fp_g2

0x4bb4,	// (0x00018a74) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4bb4,	// (0x00018a74) list_single_graphic_2heading_pane_fp_g3

0x4bc0,	// (0x00018a80) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4bc0,	// (0x00018a80) list_single_graphic_2heading_pane_fp_g4

0x4bd4,	// (0x00018a94) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4bd4,	// (0x00018a94) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023a4e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023a4e) list_single_graphic_2heading_pane_fp_g

0x53fb,	// (0x000192bb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x53fb,	// (0x000192bb) list_single_graphic_2heading_pane_fp_t1

0x4c2f,	// (0x00018aef) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c2f,	// (0x00018aef) list_single_graphic_2heading_pane_fp_t2

0x5411,	// (0x000192d1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5411,	// (0x000192d1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00023b30) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00023b30) list_single_graphic_2heading_pane_fp_t

0x45b2,	// (0x00018472) fep_hwr_write_pane_g5_ParamLimits

0x45b2,	// (0x00018472) fep_hwr_write_pane_g5

0x45be,	// (0x0001847e) fep_hwr_write_pane_g6_ParamLimits

0x45be,	// (0x0001847e) fep_hwr_write_pane_g6

0x50cb,	// (0x00018f8b) eswt_shell_pane_ParamLimits

0x1bbc,	// (0x00015a7c) bg_popup_window_pane_cp18_ParamLimits

0x2ea0,	// (0x00016d60) heading_pane_cp70

0x51f5,	// (0x000190b5) popup_eswt_tasktip_window_t1_ParamLimits

0xac97,	// (0x0001eb57) aid_touch_tab_arrow_left

0xacab,	// (0x0001eb6b) aid_touch_tab_arrow_right

0x9e7c,	// (0x0001dd3c) title_pane_g3_ParamLimits

0x9e7c,	// (0x0001dd3c) title_pane_g3

0xdd3a,	// (0x00021bfa) set_value_pane_g1

0x96ff,	// (0x0001d5bf) popup_toolbar_trans_pane_ParamLimits

0x5341,	// (0x00019201) aid_size_cell_tb_trans_pane_ParamLimits

0xdde0,	// (0x00021ca0) bg_tb_trans_pane_ParamLimits

0x5353,	// (0x00019213) grid_tb_trans_pane_ParamLimits

0xc10c,	// (0x0001ffcc) cont_note_pane_ParamLimits

0xc10c,	// (0x0001ffcc) cont_note_pane

0xc369,	// (0x00020229) cont_snote2_single_text_pane_ParamLimits

0xc369,	// (0x00020229) cont_snote2_single_text_pane

0xc369,	// (0x00020229) cont_snote2_single_graphic_pane_ParamLimits

0xc369,	// (0x00020229) cont_snote2_single_graphic_pane

0x21c7,	// (0x00016087) cont_note_wait_pane_ParamLimits

0x21c7,	// (0x00016087) cont_note_wait_pane

0x21c7,	// (0x00016087) cont_note_image_pane_ParamLimits

0x21c7,	// (0x00016087) cont_note_image_pane

0x5427,	// (0x000192e7) popup_note2_window_g1_ParamLimits

0x5427,	// (0x000192e7) popup_note2_window_g1

0x5458,	// (0x00019318) popup_note2_window_t1_ParamLimits

0x5458,	// (0x00019318) popup_note2_window_t1

0x549d,	// (0x0001935d) popup_note2_window_t2_ParamLimits

0x549d,	// (0x0001935d) popup_note2_window_t2

0x54e2,	// (0x000193a2) popup_note2_window_t3_ParamLimits

0x54e2,	// (0x000193a2) popup_note2_window_t3

0x5527,	// (0x000193e7) popup_note2_window_t4_ParamLimits

0x5527,	// (0x000193e7) popup_note2_window_t4

0xc190,	// (0x00020050) popup_note2_window_t5_ParamLimits

0xc190,	// (0x00020050) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00023b3c) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00023b3c) popup_note2_window_t

0x5556,	// (0x00019416) popup_note2_image_window_g1_ParamLimits

0x5556,	// (0x00019416) popup_note2_image_window_g1

0x5562,	// (0x00019422) popup_note2_image_window_g2_ParamLimits

0x5562,	// (0x00019422) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00023b47) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00023b47) popup_note2_image_window_g

0x5574,	// (0x00019434) popup_note2_image_window_t1_ParamLimits

0x5574,	// (0x00019434) popup_note2_image_window_t1

0x558c,	// (0x0001944c) popup_note2_image_window_t2_ParamLimits

0x558c,	// (0x0001944c) popup_note2_image_window_t2

0x55a4,	// (0x00019464) popup_note2_image_window_t3_ParamLimits

0x55a4,	// (0x00019464) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00023b4c) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00023b4c) popup_note2_image_window_t

0x21d5,	// (0x00016095) popup_note2_wait_window_g1_ParamLimits

0x21d5,	// (0x00016095) popup_note2_wait_window_g1

0x55c0,	// (0x00019480) popup_note2_wait_window_g2_ParamLimits

0x55c0,	// (0x00019480) popup_note2_wait_window_g2

0x21ed,	// (0x000160ad) popup_note2_wait_window_g3_ParamLimits

0x21ed,	// (0x000160ad) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00023b53) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00023b53) popup_note2_wait_window_g

0x55cc,	// (0x0001948c) popup_note2_wait_window_t1_ParamLimits

0x55cc,	// (0x0001948c) popup_note2_wait_window_t1

0x55ea,	// (0x000194aa) popup_note2_wait_window_t2_ParamLimits

0x55ea,	// (0x000194aa) popup_note2_wait_window_t2

0x5608,	// (0x000194c8) popup_note2_wait_window_t3_ParamLimits

0x5608,	// (0x000194c8) popup_note2_wait_window_t3

0x561a,	// (0x000194da) popup_note2_wait_window_t4_ParamLimits

0x561a,	// (0x000194da) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00023b5a) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00023b5a) popup_note2_wait_window_t

0x562c,	// (0x000194ec) wait_bar2_pane_ParamLimits

0x562c,	// (0x000194ec) wait_bar2_pane

0x5644,	// (0x00019504) popup_snote2_single_text_window_g1_ParamLimits

0x5644,	// (0x00019504) popup_snote2_single_text_window_g1

0x566c,	// (0x0001952c) popup_snote2_single_text_window_t1_ParamLimits

0x566c,	// (0x0001952c) popup_snote2_single_text_window_t1

0x56b8,	// (0x00019578) popup_snote2_single_text_window_t2_ParamLimits

0x56b8,	// (0x00019578) popup_snote2_single_text_window_t2

0x5704,	// (0x000195c4) popup_snote2_single_text_window_t3_ParamLimits

0x5704,	// (0x000195c4) popup_snote2_single_text_window_t3

0x5745,	// (0x00019605) popup_snote2_single_text_window_t4_ParamLimits

0x5745,	// (0x00019605) popup_snote2_single_text_window_t4

0x577b,	// (0x0001963b) popup_snote2_single_text_window_t5_ParamLimits

0x577b,	// (0x0001963b) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00023b63) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00023b63) popup_snote2_single_text_window_t

0x57a6,	// (0x00019666) popup_snote2_single_graphic_window_g1_ParamLimits

0x57a6,	// (0x00019666) popup_snote2_single_graphic_window_g1

0x57ce,	// (0x0001968e) popup_snote2_single_graphic_window_g2_ParamLimits

0x57ce,	// (0x0001968e) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00023b6e) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00023b6e) popup_snote2_single_graphic_window_g

0x57f6,	// (0x000196b6) popup_snote2_single_graphic_window_t1_ParamLimits

0x57f6,	// (0x000196b6) popup_snote2_single_graphic_window_t1

0x5842,	// (0x00019702) popup_snote2_single_graphic_window_t2_ParamLimits

0x5842,	// (0x00019702) popup_snote2_single_graphic_window_t2

0x5704,	// (0x000195c4) popup_snote2_single_graphic_window_t3_ParamLimits

0x5704,	// (0x000195c4) popup_snote2_single_graphic_window_t3

0x5745,	// (0x00019605) popup_snote2_single_graphic_window_t4_ParamLimits

0x5745,	// (0x00019605) popup_snote2_single_graphic_window_t4

0x577b,	// (0x0001963b) popup_snote2_single_graphic_window_t5_ParamLimits

0x577b,	// (0x0001963b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00023b73) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00023b73) popup_snote2_single_graphic_window_t

0x3fb5,	// (0x00017e75) clock_nsta_pane_cp2_t1

0x3fb5,	// (0x00017e75) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00023987) clock_nsta_pane_cp2_t

0xddfa,	// (0x00021cba) form_field_data_wide_pane_g1_ParamLimits

0xde06,	// (0x00021cc6) form_field_data_wide_pane_g2_ParamLimits

0xde06,	// (0x00021cc6) form_field_data_wide_pane_g2

0xde12,	// (0x00021cd2) form_field_data_wide_pane_g3_ParamLimits

0xde12,	// (0x00021cd2) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0002353c) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0002353c) form_field_data_wide_pane_g

0xb711,	// (0x0001f5d1) grid_touch_3_pane_ParamLimits

0xb711,	// (0x0001f5d1) grid_touch_3_pane

0xbc8f,	// (0x0001fb4f) cell_touch_3_pane_ParamLimits

0xbc8f,	// (0x0001fb4f) cell_touch_3_pane

0x4521,	// (0x000183e1) cell_touch_3_pane_g1

0x4521,	// (0x000183e1) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00023a0c) cell_touch_3_pane_g

0xc1c2,	// (0x00020082) cont_query_data_pane

0xc1ca,	// (0x0002008a) cont_query_data_pane_cp1

0x58c1,	// (0x00019781) button_value_adjust_pane_cp7

0x58c9,	// (0x00019789) query_popup_pane_cp3

0x0c38,	// (0x00014af8) bg_popup_sub_pane_cp22_ParamLimits

0xe5a6,	// (0x00022466) navi_navi_volume_pane_cp2

0xe5c1,	// (0x00022481) popup_side_volume_key_window_g2

0xe5d0,	// (0x00022490) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x000235d2) popup_side_volume_key_window_g

0xe5ed,	// (0x000224ad) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x000235d9) popup_side_volume_key_window_t

0x0f7f,	// (0x00014e3f) popup_side_volume_key_window_ParamLimits

0xa352,	// (0x0001e212) list_double_graphic_pane_g4_ParamLimits

0xa352,	// (0x0001e212) list_double_graphic_pane_g4

0xb5aa,	// (0x0001f46a) list_single_2heading_msg_pane_ParamLimits

0xb5aa,	// (0x0001f46a) list_single_2heading_msg_pane

0xbcd9,	// (0x0001fb99) list_single_2heading_msg_pane_g1_ParamLimits

0xbcd9,	// (0x0001fb99) list_single_2heading_msg_pane_g1

0xbce5,	// (0x0001fba5) list_single_2heading_msg_pane_g2_ParamLimits

0xbce5,	// (0x0001fba5) list_single_2heading_msg_pane_g2

0xbcf8,	// (0x0001fbb8) list_single_2heading_msg_pane_g3_ParamLimits

0xbcf8,	// (0x0001fbb8) list_single_2heading_msg_pane_g3

0xbd04,	// (0x0001fbc4) list_single_2heading_msg_pane_g4_ParamLimits

0xbd04,	// (0x0001fbc4) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00023b7e) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00023b7e) list_single_2heading_msg_pane_g

0xbd1c,	// (0x0001fbdc) list_single_2heading_msg_pane_t1_ParamLimits

0xbd1c,	// (0x0001fbdc) list_single_2heading_msg_pane_t1

0xbd44,	// (0x0001fc04) list_single_2heading_msg_pane_t2_ParamLimits

0xbd44,	// (0x0001fc04) list_single_2heading_msg_pane_t2

0xbdaf,	// (0x0001fc6f) list_single_2heading_msg_pane_t3_ParamLimits

0xbdaf,	// (0x0001fc6f) list_single_2heading_msg_pane_t3

0x59ba,	// (0x0001987a) list_single_2heading_msg_pane_t4_ParamLimits

0x59ba,	// (0x0001987a) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00023b87) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00023b87) list_single_2heading_msg_pane_t

0xbf6d,	// (0x0001fe2d) title_pane_g4_ParamLimits

0xbf6d,	// (0x0001fe2d) title_pane_g4

0xe1a4,	// (0x00022064) title_pane_stacon_g3_ParamLimits

0xe1a4,	// (0x00022064) title_pane_stacon_g3

0x53be,	// (0x0001927e) list_single_2graphic_im_pane_g4_ParamLimits

0x53be,	// (0x0001927e) list_single_2graphic_im_pane_g4

0x2c3d,	// (0x00016afd) popup_side_volume_key_window_cp

0x3530,	// (0x000173f0) main_idle_act2_pane_t1

0xea07,	// (0x000228c7) toolbar_button_pane_g10

0xa1fd,	// (0x0001e0bd) popup_toolbar_window_cp1

0x3fa6,	// (0x00017e66) clock_nsta_pane_cp_t1

0x3fa6,	// (0x00017e66) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00023982) clock_nsta_pane_cp_t

0xe5a6,	// (0x00022466) navi_navi_volume_pane_cp2_ParamLimits

0xe5b5,	// (0x00022475) popup_side_volume_key_window_g1_ParamLimits

0xe5c1,	// (0x00022481) popup_side_volume_key_window_g2_ParamLimits

0xe5d0,	// (0x00022490) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x000235d2) popup_side_volume_key_window_g_ParamLimits

0xed0e,	// (0x00022bce) fep_hwr_aid_pane

0xedb7,	// (0x00022c77) bg_fep_hwr_top_pane_g4_ParamLimits

0x4582,	// (0x00018442) fep_hwr_top_pane_g1_ParamLimits

0x4594,	// (0x00018454) fep_hwr_top_pane_g2_ParamLimits

0xedd7,	// (0x00022c97) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x000239d7) fep_hwr_top_pane_g_ParamLimits

0xedec,	// (0x00022cac) fep_hwr_top_text_pane_ParamLimits

0x29f2,	// (0x000168b2) aid_touch_tab_arrow_arrow_2

0x29fb,	// (0x000168bb) aid_touch_tab_arrow_left_2

0xed22,	// (0x00022be2) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xed59,	// (0x00022c19) fep_hwr_prediction_pane

0x46ea,	// (0x000185aa) fep_vkb_prediction_pane

0xba44,	// (0x0001f904) fep_vkb_side_pane_g3_ParamLimits

0xba44,	// (0x0001f904) fep_vkb_side_pane_g3

0xef00,	// (0x00022dc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xef71,	// (0x00022e31) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xef7e,	// (0x00022e3e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00023a86) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf0ad,	// (0x00022f6d) fep_hwr_prediction_pane_g1

0xf0b7,	// (0x00022f77) fep_hwr_prediction_pane_g2

0xf0bf,	// (0x00022f7f) fep_hwr_prediction_pane_g3

0xf0c7,	// (0x00022f87) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00023b90) fep_hwr_prediction_pane_g

0x59df,	// (0x0001989f) fep_vkb_prediction_pane_g1

0x59e9,	// (0x000198a9) fep_vkb_prediction_pane_g2

0x59f1,	// (0x000198b1) fep_vkb_prediction_pane_g3

0x59f9,	// (0x000198b9) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00023b99) fep_vkb_prediction_pane_g

0xeb4b,	// (0x00022a0b) slider_set_pane_g3

0xeb5f,	// (0x00022a1f) slider_set_pane_g4

0xeb77,	// (0x00022a37) slider_set_pane_g5

0xeb4b,	// (0x00022a0b) slider_set_pane_g6

0xeb8d,	// (0x00022a4d) slider_set_pane_g7

0x3107,	// (0x00016fc7) slider_form_pane_g3

0x3110,	// (0x00016fd0) slider_form_pane_g4

0x3118,	// (0x00016fd8) slider_form_pane_g5

0x3107,	// (0x00016fc7) slider_form_pane_g6

0xb54d,	// (0x0001f40d) slider_form_pane_g7

0x381d,	// (0x000176dd) slider_set_pane_vc_g3

0x3826,	// (0x000176e6) slider_set_pane_vc_g4

0x382f,	// (0x000176ef) slider_set_pane_vc_g5

0x381d,	// (0x000176dd) slider_set_pane_vc_g6

0x3838,	// (0x000176f8) slider_set_pane_vc_g7

0x3c4f,	// (0x00017b0f) slider_form_pane_vc_g1

0x3c58,	// (0x00017b18) slider_form_pane_vc_g2

0x3c61,	// (0x00017b21) slider_form_pane_vc_g3

0x3c4f,	// (0x00017b0f) slider_form_pane_vc_g4

0x3c6a,	// (0x00017b2a) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00023954) slider_form_pane_vc_g

0xd93b,	// (0x000217fb) main_idle_act3_pane

0x5a01,	// (0x000198c1) ai3_links_pane

0xbe1d,	// (0x0001fcdd) popup_ai3_data_window_ParamLimits

0xbe1d,	// (0x0001fcdd) popup_ai3_data_window

0xbf4f,	// (0x0001fe0f) grid_ai3_links_pane

0xbe3b,	// (0x0001fcfb) cell_ai3_links_pane_ParamLimits

0xbe3b,	// (0x0001fcfb) cell_ai3_links_pane

0x5a42,	// (0x00019902) bg_popup_sub_pane_cp11

0x5a4f,	// (0x0001990f) cell_ai3_links_pane_g1

0xbf4f,	// (0x0001fe0f) bg_popup_sub_pane_cp12

0x5a74,	// (0x00019934) heading_ai3_data_pane

0x5a7c,	// (0x0001993c) list_ai3_gene_pane

0x5a88,	// (0x00019948) popup_ai3_data_window_g1

0x5a90,	// (0x00019950) heading_ai3_data_pane_g1

0x5a98,	// (0x00019958) heading_ai3_data_pane_t1

0x5aa6,	// (0x00019966) list_double_ai3_gene_pane_ParamLimits

0x5aa6,	// (0x00019966) list_double_ai3_gene_pane

0x5ab3,	// (0x00019973) list_single_ai3_gene_pane_ParamLimits

0x5ab3,	// (0x00019973) list_single_ai3_gene_pane

0x44e6,	// (0x000183a6) list_highlight_pane_cp7_ParamLimits

0x44e6,	// (0x000183a6) list_highlight_pane_cp7

0x5ac0,	// (0x00019980) list_single_a13_gene_pane_t1_ParamLimits

0x5ac0,	// (0x00019980) list_single_a13_gene_pane_t1

0x5ad7,	// (0x00019997) list_single_ai3_gene_pane_g1

0x5ae0,	// (0x000199a0) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x00023ba2) list_single_ai3_gene_pane_g

0x5ae8,	// (0x000199a8) list_double_ai3_gene_pane_g1_ParamLimits

0x5ae8,	// (0x000199a8) list_double_ai3_gene_pane_g1

0x5af4,	// (0x000199b4) list_double_ai3_gene_pane_t1_ParamLimits

0x5af4,	// (0x000199b4) list_double_ai3_gene_pane_t1

0x5b10,	// (0x000199d0) list_double_ai3_gene_pane_t2_ParamLimits

0x5b10,	// (0x000199d0) list_double_ai3_gene_pane_t2

0x5b25,	// (0x000199e5) list_double_ai3_gene_pane_t3_ParamLimits

0x5b25,	// (0x000199e5) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00023ba7) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00023ba7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58da,	// (0x0001979a) aid_size_min_col_2

0xbcc3,	// (0x0001fb83) aid_size_min_msg_ParamLimits

0xbcc3,	// (0x0001fb83) aid_size_min_msg

0xba58,	// (0x0001f918) fep_vkb_top_text_pane_g2_ParamLimits

0xba58,	// (0x0001f918) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00023a07) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00023a07) fep_vkb_top_text_pane_g

0xd93b,	// (0x000217fb) main_hc_apps_shell_pane

0x5b42,	// (0x00019a02) grid_hc_apps_pane_ParamLimits

0x5b42,	// (0x00019a02) grid_hc_apps_pane

0x5b51,	// (0x00019a11) list_hc_apps_pane

0x5b59,	// (0x00019a19) scroll_pane_cp37_ParamLimits

0x5b59,	// (0x00019a19) scroll_pane_cp37

0xbe55,	// (0x0001fd15) cell_hc_apps_pane_ParamLimits

0xbe55,	// (0x0001fd15) cell_hc_apps_pane

0xc3f5,	// (0x000202b5) cell_hc_apps_pane_g1_ParamLimits

0xc3f5,	// (0x000202b5) cell_hc_apps_pane_g1

0x5c4e,	// (0x00019b0e) cell_hc_apps_pane_g2_ParamLimits

0x5c4e,	// (0x00019b0e) cell_hc_apps_pane_g2

0x5c6a,	// (0x00019b2a) cell_hc_apps_pane_g3_ParamLimits

0x5c6a,	// (0x00019b2a) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x00023bae) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x00023bae) cell_hc_apps_pane_g

0xc422,	// (0x000202e2) cell_hc_apps_pane_t1_ParamLimits

0xc422,	// (0x000202e2) cell_hc_apps_pane_t1

0xc10c,	// (0x0001ffcc) grid_highlight_pane_cp10_ParamLimits

0xc10c,	// (0x0001ffcc) grid_highlight_pane_cp10

0xc462,	// (0x00020322) list_single_hc_apps_pane_ParamLimits

0xc462,	// (0x00020322) list_single_hc_apps_pane

0xc49c,	// (0x0002035c) list_single_hc_apps_pane_g1

0xc4b5,	// (0x00020375) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00023bb5) list_single_hc_apps_pane_g

0xc4ce,	// (0x0002038e) list_single_hc_apps_pane_g2_copy1

0xc4ea,	// (0x000203aa) list_single_hc_apps_pane_t1

0xbfbf,	// (0x0001fe7f) bg_set_opt_pane_cp_ParamLimits

0xdacb,	// (0x0002198b) setting_slider_pane_t1_ParamLimits

0xdae4,	// (0x000219a4) setting_slider_pane_t2_ParamLimits

0xdafe,	// (0x000219be) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00023424) setting_slider_pane_t_ParamLimits

0xdb16,	// (0x000219d6) slider_set_pane_ParamLimits

0xe7f2,	// (0x000226b2) control_pane_g5_ParamLimits

0xe7f2,	// (0x000226b2) control_pane_g5

0x2f34,	// (0x00016df4) slider_set_pane_g1_ParamLimits

0xeb3f,	// (0x000229ff) slider_set_pane_g2_ParamLimits

0xeb4b,	// (0x00022a0b) slider_set_pane_g3_ParamLimits

0xeb5f,	// (0x00022a1f) slider_set_pane_g4_ParamLimits

0xeb77,	// (0x00022a37) slider_set_pane_g5_ParamLimits

0xeb4b,	// (0x00022a0b) slider_set_pane_g6_ParamLimits

0xeb8d,	// (0x00022a4d) slider_set_pane_g7_ParamLimits

0xf960,	// (0x00023820) slider_set_pane_g_ParamLimits

0x1064,	// (0x00014f24) navi_icon_text_pane_ParamLimits

0xac5e,	// (0x0001eb1e) aid_fill_nsta_2_ParamLimits

0xac97,	// (0x0001eb57) aid_touch_tab_arrow_left_ParamLimits

0xacab,	// (0x0001eb6b) aid_touch_tab_arrow_right_ParamLimits

0xad46,	// (0x0001ec06) clock_nsta_pane_ParamLimits

0xb252,	// (0x0001f112) navi_icon_pane_g1_ParamLimits

0xb25e,	// (0x0001f11e) navi_text_pane_t1_ParamLimits

0xb7eb,	// (0x0001f6ab) navi_icon_text_pane_g1_ParamLimits

0xb7f7,	// (0x0001f6b7) navi_icon_text_pane_t1_ParamLimits

0xc49c,	// (0x0002035c) list_single_hc_apps_pane_g1_ParamLimits

0xc4b5,	// (0x00020375) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00023bb5) list_single_hc_apps_pane_g_ParamLimits

0xc4ce,	// (0x0002038e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc4ea,	// (0x000203aa) list_single_hc_apps_pane_t1_ParamLimits

0x8e5a,	// (0x0001cd1a) popup_toolbar2_fixed_window_ParamLimits

0x8e5a,	// (0x0001cd1a) popup_toolbar2_fixed_window

0x96f5,	// (0x0001d5b5) popup_toolbar2_float_window

0xbf4f,	// (0x0001fe0f) bg_popup_sub_pane_cp27

0x5d87,	// (0x00019c47) grid_toolbar2_float_pane

0xbf4f,	// (0x0001fe0f) bg_popup_sub_pane_cp26

0x5d87,	// (0x00019c47) grid_toolbar2_fixed_pane

0xc518,	// (0x000203d8) cell_toolbar2_fixed_pane_ParamLimits

0xc518,	// (0x000203d8) cell_toolbar2_fixed_pane

0xc535,	// (0x000203f5) cell_toolbar2_fixed_pane_g1

0x5da8,	// (0x00019c68) toolbar2_fixed_button_pane

0x1a96,	// (0x00015956) toolbar2_fixed_button_pane_g1

0x1aa6,	// (0x00015966) toolbar2_fixed_button_pane_g2

0x1a9e,	// (0x0001595e) toolbar2_fixed_button_pane_g3

0x1ab6,	// (0x00015976) toolbar2_fixed_button_pane_g4

0x1aae,	// (0x0001596e) toolbar2_fixed_button_pane_g5

0x1abe,	// (0x0001597e) toolbar2_fixed_button_pane_g6

0x1ac6,	// (0x00015986) toolbar2_fixed_button_pane_g7

0x1ad6,	// (0x00015996) toolbar2_fixed_button_pane_g8

0x1ace,	// (0x0001598e) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x00023722) toolbar2_fixed_button_pane_g

0x5db0,	// (0x00019c70) cell_toolbar2_float_pane_ParamLimits

0x5db0,	// (0x00019c70) cell_toolbar2_float_pane

0x5dc1,	// (0x00019c81) cell_toolbar2_float_pane_g1

0x5da8,	// (0x00019c68) toolbar2_fixed_button_pane_cp

0xb940,	// (0x0001f800) fep_vkb_accented_list_pane_ParamLimits

0xb940,	// (0x0001f800) fep_vkb_accented_list_pane

0xeee0,	// (0x00022da0) bg_popup_fep_shadow_pane_g9

0x11e8,	// (0x000150a8) bg_popup_fep_shadow_pane_cp3

0xdf8b,	// (0x00021e4b) list_accented_list_pane

0x5dca,	// (0x00019c8a) list_single_accented_list_pane_ParamLimits

0x5dca,	// (0x00019c8a) list_single_accented_list_pane

0x11e8,	// (0x000150a8) list_highlight_pane_cp10

0x5ddb,	// (0x00019c9b) list_single_accented_list_pane_t1

0x9611,	// (0x0001d4d1) popup_slider_window_ParamLimits

0x9611,	// (0x0001d4d1) popup_slider_window

0x58d1,	// (0x00019791) aid_indentation_list_msg

0xc640,	// (0x00020500) bg_popup_window_pane_cp19

0x5f15,	// (0x00019dd5) popup_slider_window_g1

0x5f31,	// (0x00019df1) popup_slider_window_g2

0x5f4d,	// (0x00019e0d) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00023bba) popup_slider_window_g

0x5fa9,	// (0x00019e69) popup_slider_window_t1

0x601d,	// (0x00019edd) small_volume_slider_vertical_pane

0x4521,	// (0x000183e1) small_volume_slider_vertical_pane_g1

0x4521,	// (0x000183e1) small_volume_slider_vertical_pane_g2

0x6039,	// (0x00019ef9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00023bcc) small_volume_slider_vertical_pane_g

0x8dc4,	// (0x0001cc84) area_side_right_pane_ParamLimits

0x8dc4,	// (0x0001cc84) area_side_right_pane

0x9992,	// (0x0001d852) aid_size_side_button_ParamLimits

0x9992,	// (0x0001d852) aid_size_side_button

0x99ab,	// (0x0001d86b) grid_sctrl_middle_pane_ParamLimits

0x99ab,	// (0x0001d86b) grid_sctrl_middle_pane

0xf0d8,	// (0x00022f98) sctrl_sk_bottom_pane

0xf0e9,	// (0x00022fa9) sctrl_sk_top_pane

0xf0fb,	// (0x00022fbb) aid_touch_sctrl_top

0xf108,	// (0x00022fc8) bg_sctrl_sk_pane_ParamLimits

0xf108,	// (0x00022fc8) bg_sctrl_sk_pane

0xf116,	// (0x00022fd6) sctrl_sk_top_pane_g1

0xf123,	// (0x00022fe3) sctrl_sk_top_pane_t1

0xf0fb,	// (0x00022fbb) aid_touch_sctrl_bottom

0xf108,	// (0x00022fc8) bg_sctrl_sk_pane_cp_ParamLimits

0xf108,	// (0x00022fc8) bg_sctrl_sk_pane_cp

0xf13e,	// (0x00022ffe) sctrl_sk_bottom_pane_g1

0xf123,	// (0x00022fe3) sctrl_sk_bottom_pane_t1

0x99c5,	// (0x0001d885) cell_sctrl_middle_pane_ParamLimits

0x99c5,	// (0x0001d885) cell_sctrl_middle_pane

0x99d8,	// (0x0001d898) aid_touch_sctrl_middle_ParamLimits

0x99d8,	// (0x0001d898) aid_touch_sctrl_middle

0x99e5,	// (0x0001d8a5) bg_sctrl_middle_pane_ParamLimits

0x99e5,	// (0x0001d8a5) bg_sctrl_middle_pane

0xf43c,	// (0x000232fc) cell_sctrl_middle_pane_g1_ParamLimits

0xf43c,	// (0x000232fc) cell_sctrl_middle_pane_g1

0x99f3,	// (0x0001d8b3) cell_sctrl_middle_pane_g2_ParamLimits

0x99f3,	// (0x0001d8b3) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00023bd8) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00023bd8) cell_sctrl_middle_pane_g

0x1a96,	// (0x00015956) bg_sctrl_middle_pane_g1

0x1a9e,	// (0x0001595e) bg_sctrl_middle_pane_g2

0x1aa6,	// (0x00015966) bg_sctrl_middle_pane_g3

0x1aae,	// (0x0001596e) bg_sctrl_middle_pane_g4

0x1ab6,	// (0x00015976) bg_sctrl_middle_pane_g5

0x1abe,	// (0x0001597e) bg_sctrl_middle_pane_g6

0x1ac6,	// (0x00015986) bg_sctrl_middle_pane_g7

0x1ace,	// (0x0001598e) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00023bdd) bg_sctrl_middle_pane_g

0x1ad6,	// (0x00015996) bg_sctrl_middle_pane_g8_copy1

0x1a96,	// (0x00015956) bg_sctrl_sk_pane_g1

0x1aa6,	// (0x00015966) bg_sctrl_sk_pane_g2

0x1a9e,	// (0x0001595e) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x00023722) bg_sctrl_sk_pane_g

0xdc93,	// (0x00021b53) aid_size_touch_scroll_bar

0x1ab6,	// (0x00015976) bg_sctrl_sk_pane_g4

0x1aae,	// (0x0001596e) bg_sctrl_sk_pane_g5

0x1abe,	// (0x0001597e) bg_sctrl_sk_pane_g6

0x1ac6,	// (0x00015986) bg_sctrl_sk_pane_g7

0x1ad6,	// (0x00015996) bg_sctrl_sk_pane_g8

0x1ace,	// (0x0001598e) bg_sctrl_sk_pane_g9

0xe849,	// (0x00022709) popup_fep_china_hwr2_fs_candidate_window

0x90c9,	// (0x0001cf89) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x90c9,	// (0x0001cf89) popup_fep_china_hwr2_fs_control_window

0xef00,	// (0x00022dc0) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x00023bd3) sctrl_sk_top_pane_g

0xc6f8,	// (0x000205b8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc6f8,	// (0x000205b8) aid_fep_china_hwr2_fs_cell

0xc70e,	// (0x000205ce) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc70e,	// (0x000205ce) bg_popup_fep_shadow_pane_cp4

0xc725,	// (0x000205e5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc725,	// (0x000205e5) bg_popup_fep_shadow_pane_cp5

0xc737,	// (0x000205f7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc737,	// (0x000205f7) popup_fep_china_hwr2_fs_control_bar_grid

0xc74b,	// (0x0002060b) popup_fep_china_hwr2_fs_control_funtion_grid

0x6098,	// (0x00019f58) aid_fep_china_hwr2_fs_candi_cell

0xbf4f,	// (0x0001fe0f) bg_popup_fep_shadow_pane_cp6

0x60a2,	// (0x00019f62) popup_fep_china_hwr2_fs_candidate_grid

0xc753,	// (0x00020613) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc753,	// (0x00020613) cell_fep_china_hwr2_fs_funtion_grid

0x4521,	// (0x000183e1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x60c4,	// (0x00019f84) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x60c4,	// (0x00019f84) cell_fep_china_hwr2_fs_funtion_grid_g1

0x60d2,	// (0x00019f92) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x60d2,	// (0x00019f92) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x00023bee) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x00023bee) cell_fep_china_hwr2_fs_funtion_grid_g

0xc76b,	// (0x0002062b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc76b,	// (0x0002062b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc780,	// (0x00020640) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc780,	// (0x00020640) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x00023bf3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x00023bf3) cell_fep_china_hwr2_fs_funtion_grid_t

0x6119,	// (0x00019fd9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6121,	// (0x00019fe1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6129,	// (0x00019fe9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00023bf8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6131,	// (0x00019ff1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6131,	// (0x00019ff1) cell_fep_china_hwr2_fs_candidate_grid

0x6150,	// (0x0001a010) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6158,	// (0x0001a018) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4521,	// (0x000183e1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4521,	// (0x000183e1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00023a0c) cell_fep_china_hwr2_fs_candidate_grid_g

0x6160,	// (0x0001a020) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1644,	// (0x00015504) clock_nsta_pane_cp_24_ParamLimits

0x1644,	// (0x00015504) clock_nsta_pane_cp_24

0x16c4,	// (0x00015584) indicator_nsta_pane_cp_24_ParamLimits

0x16c4,	// (0x00015584) indicator_nsta_pane_cp_24

0x284a,	// (0x0001670a) heading_pane_g1

0x0001,

0xf8c7,	// (0x00023787) heading_pane_g

0x3377,	// (0x00017237) grid_sct_catagory_button_pane

0x33a9,	// (0x00017269) scroll_pane_cp5_ParamLimits

0x4117,	// (0x00017fd7) button_value_adjust_pane_cp5_ParamLimits

0x4117,	// (0x00017fd7) button_value_adjust_pane_cp5

0x421d,	// (0x000180dd) form2_midp_time_pane_ParamLimits

0x616e,	// (0x0001a02e) cell_sct_catagory_button_pane_ParamLimits

0x616e,	// (0x0001a02e) cell_sct_catagory_button_pane

0x44e6,	// (0x000183a6) bg_button_pane_cp01_ParamLimits

0x44e6,	// (0x000183a6) bg_button_pane_cp01

0x4521,	// (0x000183e1) cell_sct_catagory_button_pane_g1

0x9692,	// (0x0001d552) popup_tb_extension_window

0xc79c,	// (0x0002065c) aid_size_cell_ext_ParamLimits

0xc79c,	// (0x0002065c) aid_size_cell_ext

0xc369,	// (0x00020229) bg_tb_trans_pane_cp1_ParamLimits

0xc369,	// (0x00020229) bg_tb_trans_pane_cp1

0xc7c2,	// (0x00020682) grid_tb_ext_pane_ParamLimits

0xc7c2,	// (0x00020682) grid_tb_ext_pane

0xc802,	// (0x000206c2) cell_tb_ext_pane_ParamLimits

0xc802,	// (0x000206c2) cell_tb_ext_pane

0xc82a,	// (0x000206ea) cell_tb_ext_pane_g1_ParamLimits

0xc82a,	// (0x000206ea) cell_tb_ext_pane_g1

0x6204,	// (0x0001a0c4) cell_tb_ext_pane_t1

0xc10c,	// (0x0001ffcc) list_highlight_pane_cp11_ParamLimits

0xc10c,	// (0x0001ffcc) list_highlight_pane_cp11

0xda54,	// (0x00021914) popup_uni_indicator_window_ParamLimits

0xda54,	// (0x00021914) popup_uni_indicator_window

0xdde0,	// (0x00021ca0) bg_popup_sub_pane_cp14

0x621f,	// (0x0001a0df) list_uniindi_pane

0x622b,	// (0x0001a0eb) uniindi_top_pane

0xc10c,	// (0x0001ffcc) bg_uniindi_top_pane

0x624c,	// (0x0001a10c) uniindi_top_pane_g1

0x6262,	// (0x0001a122) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00023bff) uniindi_top_pane_g

0x628c,	// (0x0001a14c) uniindi_top_pane_t1

0x62b8,	// (0x0001a178) list_single_uniindi_pane_ParamLimits

0x62b8,	// (0x0001a178) list_single_uniindi_pane

0x4521,	// (0x000183e1) bg_uniindi_top_pane_g1

0x62ca,	// (0x0001a18a) list_single_uniindi_pane_g1

0x62dd,	// (0x0001a19d) list_single_uniindi_pane_t1

0xd93b,	// (0x000217fb) control_bg_pane

0x6302,	// (0x0001a1c2) bg_sctrl_sk_pane_cp1

0x630b,	// (0x0001a1cb) bg_sctrl_sk_pane_cp2

0x6314,	// (0x0001a1d4) control_bg_pane_g1

0x631d,	// (0x0001a1dd) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00023c08) control_bg_pane_g

0x3f38,	// (0x00017df8) cell_indicator_nsta_pane_g1_ParamLimits

0xb744,	// (0x0001f604) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00023970) cell_indicator_nsta_pane_g_ParamLimits

0x42ad,	// (0x0001816d) form2_midp_time_pane_t1_ParamLimits

0xea23,	// (0x000228e3) main_idle_act4_pane_ParamLimits

0xea23,	// (0x000228e3) main_idle_act4_pane

0x9692,	// (0x0001d552) popup_tb_extension_window_ParamLimits

0xc7ea,	// (0x000206aa) tb_ext_find_pane_ParamLimits

0xc7ea,	// (0x000206aa) tb_ext_find_pane

0x6326,	// (0x0001a1e6) ai_gene_pane_1_cp1

0x1325,	// (0x000151e5) ai_gene_pane_2_cp1

0x632e,	// (0x0001a1ee) list_single_idle_plugin_calendar_pane

0x6337,	// (0x0001a1f7) list_single_idle_plugin_notification_pane

0x6340,	// (0x0001a200) list_single_idle_plugin_player_pane

0xc847,	// (0x00020707) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc847,	// (0x00020707) list_single_idle_plugin_shortcut_pane

0xc86f,	// (0x0002072f) main_idle_act4_pane_t1

0xc887,	// (0x00020747) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00023c0d) main_idle_act4_pane_t

0xc89f,	// (0x0002075f) middle_sk_idle_act4_pane_ParamLimits

0xc89f,	// (0x0002075f) middle_sk_idle_act4_pane

0xc8bb,	// (0x0002077b) popup_clock_digital_analogue_window_cp2

0xc8e2,	// (0x000207a2) shortcut_wheel_idle_act4_pane_ParamLimits

0xc8e2,	// (0x000207a2) shortcut_wheel_idle_act4_pane

0x4521,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g1

0x4521,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g2

0x4521,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g3

0x4521,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g4

0x4521,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g5

0x63d3,	// (0x0001a293) shortcut_wheel_idle_act4_pane_g6

0x63db,	// (0x0001a29b) shortcut_wheel_idle_act4_pane_g7

0x63e3,	// (0x0001a2a3) shortcut_wheel_idle_act4_pane_g8

0x63eb,	// (0x0001a2ab) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00023c12) shortcut_wheel_idle_act4_pane_g

0xbf1f,	// (0x0001fddf) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf1f,	// (0x0001fddf) middle_sk_idle_act4_pane_g1

0xc95f,	// (0x0002081f) middle_sk_idle_act4_pane_g2_ParamLimits

0xc95f,	// (0x0002081f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00023c35) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00023c35) middle_sk_idle_act4_pane_g

0xc977,	// (0x00020837) middle_sk_idle_act4_pane_t1_ParamLimits

0xc977,	// (0x00020837) middle_sk_idle_act4_pane_t1

0xc9a6,	// (0x00020866) grid_ai_shortcut_pane_ParamLimits

0xc9a6,	// (0x00020866) grid_ai_shortcut_pane

0xc9c3,	// (0x00020883) list_highlight_pane_cp16_ParamLimits

0xc9c3,	// (0x00020883) list_highlight_pane_cp16

0xc9d0,	// (0x00020890) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc9d0,	// (0x00020890) list_single_idle_plugin_shortcut_pane_g1

0xc9dc,	// (0x0002089c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc9dc,	// (0x0002089c) list_single_idle_plugin_shortcut_pane_g2

0xc9fa,	// (0x000208ba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc9fa,	// (0x000208ba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00023c3a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00023c3a) list_single_idle_plugin_shortcut_pane_g

0xca0f,	// (0x000208cf) cell_ai_shortcut_pane_ParamLimits

0xca0f,	// (0x000208cf) cell_ai_shortcut_pane

0xca25,	// (0x000208e5) cell_ai_shortcut_pane_g1_ParamLimits

0xca25,	// (0x000208e5) cell_ai_shortcut_pane_g1

0x6326,	// (0x0001a1e6) ai_gene_pane_1_cp2

0x651c,	// (0x0001a3dc) ai_gene_pane_2_cp2

0x6524,	// (0x0001a3e4) list_highlight_pane_cp15

0x652d,	// (0x0001a3ed) list_single_idle_plugin_calendar_pane_g1

0x6524,	// (0x0001a3e4) list_highlight_pane_cp17

0x6535,	// (0x0001a3f5) list_single_idle_plugin_calendar_pane_g1_copy1

0x653d,	// (0x0001a3fd) list_single_idle_plugin_player_pane_g1

0x35de,	// (0x0001749e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00023c41) list_single_idle_plugin_player_pane_g

0x6545,	// (0x0001a405) list_single_idle_plugin_player_pane_t1

0x6553,	// (0x0001a413) list_single_idle_plugin_player_pane_t2

0x6561,	// (0x0001a421) list_single_idle_plugin_player_pane_t3

0x656f,	// (0x0001a42f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00023c46) list_single_idle_plugin_player_pane_t

0x657d,	// (0x0001a43d) wait_bar_pane_cp15

0x6585,	// (0x0001a445) grid_ai_notification_pane

0x35de,	// (0x0001749e) list_single_idle_plugin_notification_pane_g1

0xca47,	// (0x00020907) cell_ai_notification_pane_ParamLimits

0xca47,	// (0x00020907) cell_ai_notification_pane

0x659b,	// (0x0001a45b) cell_ai_notification_pane_g1

0x65a3,	// (0x0001a463) cell_ai_notification_pane_t1

0xca54,	// (0x00020914) tb_ext_find_button_pane

0xca5c,	// (0x0002091c) tb_ext_find_pane_g1

0xca64,	// (0x00020924) tb_ext_find_pane_t1

0x0b43,	// (0x00014a03) tb_ext_find_button_pane_g1

0x65cf,	// (0x0001a48f) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00023c4f) tb_ext_find_button_pane_g

0xc86f,	// (0x0002072f) main_idle_act4_pane_t1_ParamLimits

0xc887,	// (0x00020747) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00023c0d) main_idle_act4_pane_t_ParamLimits

0xc8bb,	// (0x0002077b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc8d2,	// (0x00020792) sat_plugin_idle_act4_pane_ParamLimits

0xc8d2,	// (0x00020792) sat_plugin_idle_act4_pane

0xca72,	// (0x00020932) sat_plugin_idle_act4_pane_t1_ParamLimits

0xca72,	// (0x00020932) sat_plugin_idle_act4_pane_t1

0xca8a,	// (0x0002094a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xca8a,	// (0x0002094a) sat_plugin_idle_act4_pane_t2

0xcaa2,	// (0x00020962) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcaa2,	// (0x00020962) sat_plugin_idle_act4_pane_t3

0xcaba,	// (0x0002097a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcaba,	// (0x0002097a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00023c54) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00023c54) sat_plugin_idle_act4_pane_t

0xda00,	// (0x000218c0) popup_battery_window_ParamLimits

0xda00,	// (0x000218c0) popup_battery_window

0xc10c,	// (0x0001ffcc) bg_popup_sub_pane_cp25_ParamLimits

0xc10c,	// (0x0001ffcc) bg_popup_sub_pane_cp25

0x6624,	// (0x0001a4e4) popup_battery_window_g1_ParamLimits

0x6624,	// (0x0001a4e4) popup_battery_window_g1

0x6630,	// (0x0001a4f0) popup_battery_window_t1_ParamLimits

0x6630,	// (0x0001a4f0) popup_battery_window_t1

0x6642,	// (0x0001a502) popup_battery_window_t2_ParamLimits

0x6642,	// (0x0001a502) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00023c5d) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00023c5d) popup_battery_window_t

0xab4c,	// (0x0001ea0c) midp_canvas_pane_ParamLimits

0xaba7,	// (0x0001ea67) midp_keypad_pane_ParamLimits

0xaba7,	// (0x0001ea67) midp_keypad_pane

0x1534,	// (0x000153f4) main_midp_pane_ParamLimits

0x3fc4,	// (0x00017e84) signal_pane_g2_cp_ParamLimits

0xcad2,	// (0x00020992) aid_size_cell_midp_keypad_ParamLimits

0xcad2,	// (0x00020992) aid_size_cell_midp_keypad

0xcaf0,	// (0x000209b0) midp_keyp_game_grid_pane_ParamLimits

0xcaf0,	// (0x000209b0) midp_keyp_game_grid_pane

0xcb17,	// (0x000209d7) midp_keyp_rocker_pane_ParamLimits

0xcb17,	// (0x000209d7) midp_keyp_rocker_pane

0xcb56,	// (0x00020a16) midp_keyp_sk_left_pane_ParamLimits

0xcb56,	// (0x00020a16) midp_keyp_sk_left_pane

0xcbaa,	// (0x00020a6a) midp_keyp_sk_right_pane_ParamLimits

0xcbaa,	// (0x00020a6a) midp_keyp_sk_right_pane

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp03

0xcbfe,	// (0x00020abe) midp_keyp_sk_left_pane_g1

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp04

0xcbfe,	// (0x00020abe) midp_keyp_sk_right_pane_g1

0x4521,	// (0x000183e1) midp_keyp_rocker_pane_g1

0xcc07,	// (0x00020ac7) keyp_game_cell_pane_ParamLimits

0xcc07,	// (0x00020ac7) keyp_game_cell_pane

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp02

0xcc2d,	// (0x00020aed) keyp_game_cell_pane_g1

0x8e06,	// (0x0001ccc6) popup_fep_vkb2_window_ParamLimits

0x8e06,	// (0x0001ccc6) popup_fep_vkb2_window

0x99ff,	// (0x0001d8bf) aid_size_cell_vkb2_ParamLimits

0x99ff,	// (0x0001d8bf) aid_size_cell_vkb2

0x9a35,	// (0x0001d8f5) popup_fep_vkb2_window_g1_ParamLimits

0x9a35,	// (0x0001d8f5) popup_fep_vkb2_window_g1

0x9a85,	// (0x0001d945) vkb2_area_bottom_pane_ParamLimits

0x9a85,	// (0x0001d945) vkb2_area_bottom_pane

0x9ae1,	// (0x0001d9a1) vkb2_area_keypad_pane_ParamLimits

0x9ae1,	// (0x0001d9a1) vkb2_area_keypad_pane

0x9b2f,	// (0x0001d9ef) vkb2_area_top_pane_ParamLimits

0x9b2f,	// (0x0001d9ef) vkb2_area_top_pane

0x9bb5,	// (0x0001da75) vkb2_top_entry_pane_ParamLimits

0x9bb5,	// (0x0001da75) vkb2_top_entry_pane

0x9be2,	// (0x0001daa2) vkb2_top_grid_left_pane_ParamLimits

0x9be2,	// (0x0001daa2) vkb2_top_grid_left_pane

0x9c02,	// (0x0001dac2) vkb2_top_grid_right_pane_ParamLimits

0x9c02,	// (0x0001dac2) vkb2_top_grid_right_pane

0xf185,	// (0x00023045) vkb2_cell_keypad_pane_ParamLimits

0xf185,	// (0x00023045) vkb2_cell_keypad_pane

0x9c48,	// (0x0001db08) vkb2_area_bottom_grid_pane_ParamLimits

0x9c48,	// (0x0001db08) vkb2_area_bottom_grid_pane

0x9c72,	// (0x0001db32) vkb2_area_bottom_pane_g1_ParamLimits

0x9c72,	// (0x0001db32) vkb2_area_bottom_pane_g1

0x9c98,	// (0x0001db58) vkb2_area_bottom_pane_g2_ParamLimits

0x9c98,	// (0x0001db58) vkb2_area_bottom_pane_g2

0x9cc9,	// (0x0001db89) vkb2_area_bottom_pane_g3_ParamLimits

0x9cc9,	// (0x0001db89) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00023c62) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00023c62) vkb2_area_bottom_pane_g

0xf232,	// (0x000230f2) vkb2_top_cell_left_pane_ParamLimits

0xf232,	// (0x000230f2) vkb2_top_cell_left_pane

0xcc36,	// (0x00020af6) vkb2_top_entry_pane_g1_ParamLimits

0xcc36,	// (0x00020af6) vkb2_top_entry_pane_g1

0xcc44,	// (0x00020b04) vkb2_top_entry_pane_t1_ParamLimits

0xcc44,	// (0x00020b04) vkb2_top_entry_pane_t1

0x67e5,	// (0x0001a6a5) vkb2_top_entry_pane_t2_ParamLimits

0x67e5,	// (0x0001a6a5) vkb2_top_entry_pane_t2

0x6817,	// (0x0001a6d7) vkb2_top_entry_pane_t3_ParamLimits

0x6817,	// (0x0001a6d7) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x00023c69) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x00023c69) vkb2_top_entry_pane_t

0x9d33,	// (0x0001dbf3) vkb2_top_grid_right_pane_g1_ParamLimits

0x9d33,	// (0x0001dbf3) vkb2_top_grid_right_pane_g1

0xf27f,	// (0x0002313f) vkb2_top_grid_right_pane_g2_ParamLimits

0xf27f,	// (0x0002313f) vkb2_top_grid_right_pane_g2

0xf297,	// (0x00023157) vkb2_top_grid_right_pane_g3_ParamLimits

0xf297,	// (0x00023157) vkb2_top_grid_right_pane_g3

0x9d49,	// (0x0001dc09) vkb2_top_grid_right_pane_g4_ParamLimits

0x9d49,	// (0x0001dc09) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00023c70) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00023c70) vkb2_top_grid_right_pane_g

0xf2af,	// (0x0002316f) vkb2_top_cell_left_pane_g1

0xf2c6,	// (0x00023186) vkb2_cell_keypad_pane_g1_ParamLimits

0xf2c6,	// (0x00023186) vkb2_cell_keypad_pane_g1

0x683b,	// (0x0001a6fb) vkb2_cell_keypad_pane_t1_ParamLimits

0x683b,	// (0x0001a6fb) vkb2_cell_keypad_pane_t1

0xf2d4,	// (0x00023194) vkb2_cell_bottom_grid_pane_ParamLimits

0xf2d4,	// (0x00023194) vkb2_cell_bottom_grid_pane

0xf30d,	// (0x000231cd) vkb2_cell_bottom_grid_pane_g1

0xc903,	// (0x000207c3) aid_call2_pane_cp02

0xc90b,	// (0x000207cb) aid_call_pane_cp02

0xc913,	// (0x000207d3) clock_digital_number_pane_cp10

0xc91b,	// (0x000207db) clock_digital_number_pane_cp11

0xc923,	// (0x000207e3) clock_digital_number_pane_cp12

0xc92b,	// (0x000207eb) clock_digital_number_pane_cp13

0xc933,	// (0x000207f3) clock_digital_separator_pane_cp10

0x0b43,	// (0x00014a03) popup_clock_digital_analogue_window_cp2_g1

0x0b43,	// (0x00014a03) popup_clock_digital_analogue_window_cp2_g2

0xc93b,	// (0x000207fb) popup_clock_digital_analogue_window_cp2_g3

0x0b43,	// (0x00014a03) popup_clock_digital_analogue_window_cp2_g4

0xc93b,	// (0x000207fb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00023c25) popup_clock_digital_analogue_window_cp2_g

0xc943,	// (0x00020803) popup_clock_digital_analogue_window_cp2_t1

0xc951,	// (0x00020811) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00023c30) popup_clock_digital_analogue_window_cp2_t

0x4521,	// (0x000183e1) clock_digital_number_pane_cp10_g1

0x4521,	// (0x000183e1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00023a0c) clock_digital_number_pane_cp10_g

0x4521,	// (0x000183e1) clock_digital_separator_pane_cp10_g1

0x4521,	// (0x000183e1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00023a0c) clock_digital_separator_pane_cp10_g

0x626e,	// (0x0001a12e) uniindi_top_pane_g3

0x627f,	// (0x0001a13f) uniindi_top_pane_g4

0xf210,	// (0x000230d0) vkb2_row_keypad_pane_ParamLimits

0xf210,	// (0x000230d0) vkb2_row_keypad_pane

0xf329,	// (0x000231e9) vkb2_cell_t_keypad_pane_ParamLimits

0xf329,	// (0x000231e9) vkb2_cell_t_keypad_pane

0xf339,	// (0x000231f9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf339,	// (0x000231f9) vkb2_cell_t_keypad_pane_cp08

0xf34e,	// (0x0002320e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf34e,	// (0x0002320e) vkb2_cell_t_keypad_pane_cp09

0xf362,	// (0x00023222) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf362,	// (0x00023222) vkb2_cell_t_keypad_pane_cp01

0xf373,	// (0x00023233) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf373,	// (0x00023233) vkb2_cell_t_keypad_pane_cp02

0xf384,	// (0x00023244) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf384,	// (0x00023244) vkb2_cell_t_keypad_pane_cp03

0xf395,	// (0x00023255) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf395,	// (0x00023255) vkb2_cell_t_keypad_pane_cp04

0xf3a6,	// (0x00023266) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf3a6,	// (0x00023266) vkb2_cell_t_keypad_pane_cp05

0xf3b7,	// (0x00023277) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf3b7,	// (0x00023277) vkb2_cell_t_keypad_pane_cp06

0xf3ca,	// (0x0002328a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf3ca,	// (0x0002328a) vkb2_cell_t_keypad_pane_cp07

0xf3df,	// (0x0002329f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf3df,	// (0x0002329f) vkb2_cell_t_keypad_pane_cp10

0xef00,	// (0x00022dc0) vkb2_cell_t_keypad_pane_g1

0x6852,	// (0x0001a712) vkb2_cell_t_keypad_pane_t1

0xd93b,	// (0x000217fb) popup_grid_graphic2_window

0xcc7d,	// (0x00020b3d) aid_size_cell_graphic2_ParamLimits

0xcc7d,	// (0x00020b3d) aid_size_cell_graphic2

0xccbb,	// (0x00020b7b) bg_popup_window_pane_cp21_ParamLimits

0xccbb,	// (0x00020b7b) bg_popup_window_pane_cp21

0xccc9,	// (0x00020b89) graphic2_pages_pane_ParamLimits

0xccc9,	// (0x00020b89) graphic2_pages_pane

0xcd21,	// (0x00020be1) grid_graphic2_control_pane_ParamLimits

0xcd21,	// (0x00020be1) grid_graphic2_control_pane

0xcd69,	// (0x00020c29) grid_graphic2_pane_ParamLimits

0xcd69,	// (0x00020c29) grid_graphic2_pane

0xcdf4,	// (0x00020cb4) cell_graphic2_pane

0xd93b,	// (0x000217fb) main_comp_mode_pane

0x5a7c,	// (0x0001993c) list_ai3_gene_pane_ParamLimits

0xc640,	// (0x00020500) bg_popup_window_pane_cp19_ParamLimits

0x5eb3,	// (0x00019d73) bg_touch_area_indi_pane_ParamLimits

0x5eb3,	// (0x00019d73) bg_touch_area_indi_pane

0x5ec9,	// (0x00019d89) bg_touch_area_indi_pane_cp01_ParamLimits

0x5ec9,	// (0x00019d89) bg_touch_area_indi_pane_cp01

0x5ee1,	// (0x00019da1) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ee1,	// (0x00019da1) bg_touch_area_indi_pane_cp02

0x5efb,	// (0x00019dbb) bg_touch_area_indi_pane_cp03_ParamLimits

0x5efb,	// (0x00019dbb) bg_touch_area_indi_pane_cp03

0x5f15,	// (0x00019dd5) popup_slider_window_g1_ParamLimits

0x5f31,	// (0x00019df1) popup_slider_window_g2_ParamLimits

0x5f4d,	// (0x00019e0d) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00023bba) popup_slider_window_g_ParamLimits

0x5fa9,	// (0x00019e69) popup_slider_window_t1_ParamLimits

0x601d,	// (0x00019edd) small_volume_slider_vertical_pane_ParamLimits

0xcdf4,	// (0x00020cb4) cell_graphic2_pane_ParamLimits

0xce57,	// (0x00020d17) bg_button_pane_cp10_ParamLimits

0xce57,	// (0x00020d17) bg_button_pane_cp10

0xce6a,	// (0x00020d2a) bg_button_pane_cp11_ParamLimits

0xce6a,	// (0x00020d2a) bg_button_pane_cp11

0xce7d,	// (0x00020d3d) graphic2_pages_pane_g1_ParamLimits

0xce7d,	// (0x00020d3d) graphic2_pages_pane_g1

0xce98,	// (0x00020d58) graphic2_pages_pane_g2_ParamLimits

0xce98,	// (0x00020d58) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x00023c7e) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x00023c7e) graphic2_pages_pane_g

0xceb0,	// (0x00020d70) graphic2_pages_pane_t1_ParamLimits

0xceb0,	// (0x00020d70) graphic2_pages_pane_t1

0xcec8,	// (0x00020d88) cell_graphic2_control_pane_ParamLimits

0xcec8,	// (0x00020d88) cell_graphic2_control_pane

0xcefc,	// (0x00020dbc) cell_graphic2_pane_g1_ParamLimits

0xcefc,	// (0x00020dbc) cell_graphic2_pane_g1

0xbf2d,	// (0x0001fded) cell_graphic2_pane_g2_ParamLimits

0xbf2d,	// (0x0001fded) cell_graphic2_pane_g2

0xc3e8,	// (0x000202a8) cell_graphic2_pane_g3_ParamLimits

0xc3e8,	// (0x000202a8) cell_graphic2_pane_g3

0xbf3a,	// (0x0001fdfa) cell_graphic2_pane_g4_ParamLimits

0xbf3a,	// (0x0001fdfa) cell_graphic2_pane_g4

0xcf09,	// (0x00020dc9) cell_graphic2_pane_g5_ParamLimits

0xcf09,	// (0x00020dc9) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00023c83) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00023c83) cell_graphic2_pane_g

0xcf29,	// (0x00020de9) cell_graphic2_pane_t1_ParamLimits

0xcf29,	// (0x00020de9) cell_graphic2_pane_t1

0x283e,	// (0x000166fe) grid_highlight_pane_cp11_ParamLimits

0x283e,	// (0x000166fe) grid_highlight_pane_cp11

0xc10c,	// (0x0001ffcc) bg_button_pane_cp05

0xcf5e,	// (0x00020e1e) cell_graphic2_control_pane_g1

0x4521,	// (0x000183e1) bg_touch_area_indi_pane_g1

0x6b2c,	// (0x0001a9ec) aid_cmod_rocker_key_size

0x6b36,	// (0x0001a9f6) aid_cmode_itu_key_size

0x6b40,	// (0x0001aa00) main_cmode_video_pane

0x6b4a,	// (0x0001aa0a) main_comp_mode_itu_pane

0x6b56,	// (0x0001aa16) main_comp_mode_rocker_pane

0x6b62,	// (0x0001aa22) cell_cmode_rocker_pane_ParamLimits

0x6b62,	// (0x0001aa22) cell_cmode_rocker_pane

0x6b76,	// (0x0001aa36) cell_cmode_itu_pane_ParamLimits

0x6b76,	// (0x0001aa36) cell_cmode_itu_pane

0xdde0,	// (0x00021ca0) bg_button_pane_cp06_ParamLimits

0xdde0,	// (0x00021ca0) bg_button_pane_cp06

0x479c,	// (0x0001865c) cell_cmode_rocker_pane_g1_ParamLimits

0x479c,	// (0x0001865c) cell_cmode_rocker_pane_g1

0x60c4,	// (0x00019f84) cell_cmode_rocker_pane_g2_ParamLimits

0x60c4,	// (0x00019f84) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00023c93) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00023c93) cell_cmode_rocker_pane_g

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp07

0x6b8d,	// (0x0001aa4d) cell_cmode_itu_pane_g1

0x6b96,	// (0x0001aa56) cell_cmode_itu_pane_t1

0x6ba4,	// (0x0001aa64) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00023c98) cell_cmode_itu_pane_t

0x62f2,	// (0x0001a1b2) aid_touch_ctrl_left

0x62fa,	// (0x0001a1ba) aid_touch_ctrl_right

0xbf4f,	// (0x0001fe0f) compa_mode_pane

0xcf84,	// (0x00020e44) aid_cmod_rocker_key_size_cp

0xcf8e,	// (0x00020e4e) aid_cmode_itu_key_size_cp

0x6bc6,	// (0x0001aa86) compa_mode_pane_g1

0x6bce,	// (0x0001aa8e) compa_mode_pane_g2

0x6bd6,	// (0x0001aa96) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x00023c9d) compa_mode_pane_g

0xcf98,	// (0x00020e58) main_comp_mode_itu_pane_cp

0xcfa0,	// (0x00020e60) main_comp_mode_rocker_pane_cp

0xcfa8,	// (0x00020e68) cell_cmode_itu_pane_cp_ParamLimits

0xcfa8,	// (0x00020e68) cell_cmode_itu_pane_cp

0xcfbd,	// (0x00020e7d) cell_cmode_rocker_pane_cp_ParamLimits

0xcfbd,	// (0x00020e7d) cell_cmode_rocker_pane_cp

0xdde0,	// (0x00021ca0) bg_button_pane_cp06_cp_ParamLimits

0xdde0,	// (0x00021ca0) bg_button_pane_cp06_cp

0x479c,	// (0x0001865c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x479c,	// (0x0001865c) cell_cmode_rocker_pane_g1_cp

0x4521,	// (0x000183e1) cell_cmode_rocker_pane_g2_cp

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp07_cp

0xcfcf,	// (0x00020e8f) cell_cmode_itu_pane_g1_cp

0xcfd8,	// (0x00020e98) cell_cmode_itu_pane_t1_cp

0xcfd8,	// (0x00020e98) cell_cmode_itu_pane_t2_cp

0xb545,	// (0x0001f405) settings_code_pane_cp2

0xbfbf,	// (0x0001fe7f) bg_popup_window_pane_cp3_ParamLimits

0xc2fa,	// (0x000201ba) heading_pane_cp3_ParamLimits

0xc306,	// (0x000201c6) listscroll_popup_graphic_pane_ParamLimits

0xed0e,	// (0x00022bce) fep_hwr_aid_pane_ParamLimits

0xf0fb,	// (0x00022fbb) aid_touch_sctrl_top_ParamLimits

0xf116,	// (0x00022fd6) sctrl_sk_top_pane_g1_ParamLimits

0xef00,	// (0x00022dc0) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x00023bd3) sctrl_sk_top_pane_g_ParamLimits

0xf123,	// (0x00022fe3) sctrl_sk_top_pane_t1_ParamLimits

0xf0fb,	// (0x00022fbb) aid_touch_sctrl_bottom_ParamLimits

0xf123,	// (0x00022fe3) sctrl_sk_bottom_pane_t1_ParamLimits

0x6238,	// (0x0001a0f8) aid_area_touch_clock

0x9b77,	// (0x0001da37) aid_vkb2_area_top_pane_cell_ParamLimits

0x9b77,	// (0x0001da37) aid_vkb2_area_top_pane_cell

0x9c22,	// (0x0001dae2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9c22,	// (0x0001dae2) aid_vkb2_area_bottom_pane_cell

0x679d,	// (0x0001a65d) popup_char_count_window

0x6c2c,	// (0x0001aaec) popup_char_count_window_g1

0x6c35,	// (0x0001aaf5) popup_char_count_window_g2

0x6c3e,	// (0x0001aafe) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00023ca4) popup_char_count_window_g

0x6c47,	// (0x0001ab07) popup_char_count_window_t1

0xf163,	// (0x00023023) popup_fep_char_preview_window_ParamLimits

0xf163,	// (0x00023023) popup_fep_char_preview_window

0x9b97,	// (0x0001da57) vkb2_top_candi_pane_ParamLimits

0x9b97,	// (0x0001da57) vkb2_top_candi_pane

0xcfe6,	// (0x00020ea6) cell_vkb2_top_candi_pane_ParamLimits

0xcfe6,	// (0x00020ea6) cell_vkb2_top_candi_pane

0xf3f4,	// (0x000232b4) bg_popup_fep_char_preview_window_ParamLimits

0xf3f4,	// (0x000232b4) bg_popup_fep_char_preview_window

0xf402,	// (0x000232c2) popup_fep_char_preview_window_t1_ParamLimits

0xf402,	// (0x000232c2) popup_fep_char_preview_window_t1

0x6ca6,	// (0x0001ab66) bg_popup_fep_char_preview_window_g1

0x6cae,	// (0x0001ab6e) bg_popup_fep_char_preview_window_g2

0x6cb6,	// (0x0001ab76) bg_popup_fep_char_preview_window_g3

0x6cbe,	// (0x0001ab7e) bg_popup_fep_char_preview_window_g4

0x6cc6,	// (0x0001ab86) bg_popup_fep_char_preview_window_g5

0xf44a,	// (0x0002330a) bg_popup_fep_char_preview_window_g6

0x6cce,	// (0x0001ab8e) bg_popup_fep_char_preview_window_g7

0x6cd6,	// (0x0001ab96) bg_popup_fep_char_preview_window_g8

0x6cde,	// (0x0001ab9e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00023cab) bg_popup_fep_char_preview_window_g

0xef00,	// (0x00022dc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xef00,	// (0x00022dc0) cell_vkb2_top_candi_pane_g1

0xef0e,	// (0x00022dce) cell_vkb2_top_candi_pane_g2_ParamLimits

0xef0e,	// (0x00022dce) cell_vkb2_top_candi_pane_g2

0x500b,	// (0x00018ecb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x500b,	// (0x00018ecb) cell_vkb2_top_candi_pane_g3

0xf452,	// (0x00023312) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf452,	// (0x00023312) cell_vkb2_top_candi_pane_g4

0x4e60,	// (0x00018d20) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e60,	// (0x00018d20) cell_vkb2_top_candi_pane_g5

0xf43c,	// (0x000232fc) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf43c,	// (0x000232fc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x00023cbe) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x00023cbe) cell_vkb2_top_candi_pane_g

0xf473,	// (0x00023333) cell_vkb2_top_candi_pane_t1

0xeb2b,	// (0x000229eb) aid_size_touch_slider_mark_ParamLimits

0xeb2b,	// (0x000229eb) aid_size_touch_slider_mark

0xcd05,	// (0x00020bc5) grid_graphic2_catg_pane_ParamLimits

0xcd05,	// (0x00020bc5) grid_graphic2_catg_pane

0xcdc3,	// (0x00020c83) popup_grid_graphic2_window_t1_ParamLimits

0xcdc3,	// (0x00020c83) popup_grid_graphic2_window_t1

0xcdd9,	// (0x00020c99) popup_grid_graphic2_window_t2_ParamLimits

0xcdd9,	// (0x00020c99) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x00023c79) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x00023c79) popup_grid_graphic2_window_t

0xc10c,	// (0x0001ffcc) bg_button_pane_cp05_ParamLimits

0xcf5e,	// (0x00020e1e) cell_graphic2_control_pane_g1_ParamLimits

0xd050,	// (0x00020f10) cell_graphic2_catg_pane_ParamLimits

0xd050,	// (0x00020f10) cell_graphic2_catg_pane

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp12

0xd062,	// (0x00020f22) cell_graphic2_catg_pane_g1

0x6204,	// (0x0001a0c4) cell_tb_ext_pane_t1_ParamLimits

0xf252,	// (0x00023112) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf252,	// (0x00023112) vkb2_top_cell_right_narrow_pane

0xf26a,	// (0x0002312a) vkb2_top_cell_right_wide_pane_ParamLimits

0xf26a,	// (0x0002312a) vkb2_top_cell_right_wide_pane

0xea23,	// (0x000228e3) bg_vkb2_func_pane_ParamLimits

0xea23,	// (0x000228e3) bg_vkb2_func_pane

0xf2af,	// (0x0002316f) vkb2_top_cell_left_pane_g1_ParamLimits

0xea23,	// (0x000228e3) bg_vkb2_fuc_pane_cp03_ParamLimits

0xea23,	// (0x000228e3) bg_vkb2_fuc_pane_cp03

0xf30d,	// (0x000231cd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a9e,	// (0x0001595e) bg_vkb2_func_pane_g1

0x1aa6,	// (0x00015966) bg_vkb2_func_pane_g2

0x1ab6,	// (0x00015976) bg_vkb2_func_pane_g3

0x1aae,	// (0x0001596e) bg_vkb2_func_pane_g4

0x1abe,	// (0x0001597e) bg_vkb2_func_pane_g5

0x1ac6,	// (0x00015986) bg_vkb2_func_pane_g6

0x1ace,	// (0x0001598e) bg_vkb2_func_pane_g7

0x1ad6,	// (0x00015996) bg_vkb2_func_pane_g8

0x1a96,	// (0x00015956) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x00023ccb) bg_vkb2_func_pane_g

0xea23,	// (0x000228e3) bg_vkb2_fuc_pane_cp01_ParamLimits

0xea23,	// (0x000228e3) bg_vkb2_fuc_pane_cp01

0xf2af,	// (0x0002316f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf2af,	// (0x0002316f) vkb2_top_cell_right_wide_pane_g1

0xea23,	// (0x000228e3) bg_vkb2_fuc_pane_cp02_ParamLimits

0xea23,	// (0x000228e3) bg_vkb2_fuc_pane_cp02

0xf30d,	// (0x000231cd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf30d,	// (0x000231cd) vkb2_top_cell_right_narrow_pane_g1

0xc57a,	// (0x0002043a) aid_touch_area_decrease_ParamLimits

0xc57a,	// (0x0002043a) aid_touch_area_decrease

0xc5b4,	// (0x00020474) aid_touch_area_increase_ParamLimits

0xc5b4,	// (0x00020474) aid_touch_area_increase

0xc5dc,	// (0x0002049c) aid_touch_area_mute_ParamLimits

0xc5dc,	// (0x0002049c) aid_touch_area_mute

0xc60c,	// (0x000204cc) aid_touch_area_slider_ParamLimits

0xc60c,	// (0x000204cc) aid_touch_area_slider

0xc64c,	// (0x0002050c) popup_slider_window_g4_ParamLimits

0xc64c,	// (0x0002050c) popup_slider_window_g4

0xc674,	// (0x00020534) popup_slider_window_g5_ParamLimits

0xc674,	// (0x00020534) popup_slider_window_g5

0xc6a8,	// (0x00020568) popup_slider_window_g6_ParamLimits

0xc6a8,	// (0x00020568) popup_slider_window_g6

0x5fd7,	// (0x00019e97) popup_slider_window_t2_ParamLimits

0x5fd7,	// (0x00019e97) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00023bc7) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00023bc7) popup_slider_window_t

0xc6c4,	// (0x00020584) slider_pane_ParamLimits

0xc6c4,	// (0x00020584) slider_pane

0x6d01,	// (0x0001abc1) slider_pane_g1_ParamLimits

0x6d01,	// (0x0001abc1) slider_pane_g1

0x6d15,	// (0x0001abd5) slider_pane_g2_ParamLimits

0x6d15,	// (0x0001abd5) slider_pane_g2

0x6d2b,	// (0x0001abeb) slider_pane_g3_ParamLimits

0x6d2b,	// (0x0001abeb) slider_pane_g3

0x0003,

0xfe1e,	// (0x00023cde) slider_pane_g_ParamLimits

0xfe1e,	// (0x00023cde) slider_pane_g

0x96de,	// (0x0001d59e) popup_tb_float_extension_window_ParamLimits

0x96de,	// (0x0001d59e) popup_tb_float_extension_window

0x6d57,	// (0x0001ac17) aid_size_cell_tb_float_ext

0xbf4f,	// (0x0001fe0f) bg_popup_sub_window_cp28

0x6d63,	// (0x0001ac23) grid_tb_float_ext_pane

0x6d6f,	// (0x0001ac2f) cell_tb_float_ext_pane_ParamLimits

0x6d6f,	// (0x0001ac2f) cell_tb_float_ext_pane

0x6d8b,	// (0x0001ac4b) cell_tb_float_ext_pane_g1

0x6d94,	// (0x0001ac54) grid_highlight_pane_cp12

0x9970,	// (0x0001d830) cell_last_hwr_side_pane_ParamLimits

0x9970,	// (0x0001d830) cell_last_hwr_side_pane

0x4521,	// (0x000183e1) cell_last_hwr_side_pane_g1

0x6d9d,	// (0x0001ac5d) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00023ce7) cell_last_hwr_side_pane_g

0x9cfe,	// (0x0001dbbe) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9cfe,	// (0x0001dbbe) vkb2_area_bottom_space_btn_pane

0xef00,	// (0x00022dc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6852,	// (0x0001a712) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf473,	// (0x00023333) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf491,	// (0x00023351) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf491,	// (0x00023351) vkb2_area_bottom_space_btn_pane_g1

0xf4cb,	// (0x0002338b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf4cb,	// (0x0002338b) vkb2_area_bottom_space_btn_pane_g2

0xf501,	// (0x000233c1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf501,	// (0x000233c1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x00023cec) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x00023cec) vkb2_area_bottom_space_btn_pane_g

0xedc5,	// (0x00022c85) cel_fep_hwr_func_pane_ParamLimits

0xedc5,	// (0x00022c85) cel_fep_hwr_func_pane

0x9945,	// (0x0001d805) cell_hwr_side_button_pane_ParamLimits

0x9945,	// (0x0001d805) cell_hwr_side_button_pane

0x6238,	// (0x0001a0f8) aid_area_touch_clock_ParamLimits

0xc10c,	// (0x0001ffcc) bg_uniindi_top_pane_ParamLimits

0x624c,	// (0x0001a10c) uniindi_top_pane_g1_ParamLimits

0x6262,	// (0x0001a122) uniindi_top_pane_g2_ParamLimits

0x626e,	// (0x0001a12e) uniindi_top_pane_g3_ParamLimits

0x627f,	// (0x0001a13f) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00023bff) uniindi_top_pane_g_ParamLimits

0x628c,	// (0x0001a14c) uniindi_top_pane_t1_ParamLimits

0xc10c,	// (0x0001ffcc) bg_vkb2_func_pane_cp01_ParamLimits

0xc10c,	// (0x0001ffcc) bg_vkb2_func_pane_cp01

0x6da6,	// (0x0001ac66) cel_fep_hwr_func_pane_g1_ParamLimits

0x6da6,	// (0x0001ac66) cel_fep_hwr_func_pane_g1

0xc10c,	// (0x0001ffcc) bg_vkb2_func_pane_cp02_ParamLimits

0xc10c,	// (0x0001ffcc) bg_vkb2_func_pane_cp02

0x6da6,	// (0x0001ac66) cell_hwr_side_button_pane_g1_ParamLimits

0x6da6,	// (0x0001ac66) cell_hwr_side_button_pane_g1

0x18e9,	// (0x000157a9) status_pane_g4_ParamLimits

0x18e9,	// (0x000157a9) status_pane_g4

0x1903,	// (0x000157c3) status_pane_t1

0x42c0,	// (0x00018180) form2_midp_gauge_slider_cont_pane

0x42c8,	// (0x00018188) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb886,	// (0x0001f746) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb898,	// (0x0001f758) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x000239bf) form2_midp_gauge_slider_pane_t_ParamLimits

0x42fe,	// (0x000181be) form2_midp_slider_pane_ParamLimits

0xf155,	// (0x00023015) aid_size_cell_func_vkb2_ParamLimits

0xf155,	// (0x00023015) aid_size_cell_func_vkb2

0x6d43,	// (0x0001ac03) slider_pane_g4_ParamLimits

0x6d43,	// (0x0001ac03) slider_pane_g4

0x9d5f,	// (0x0001dc1f) form2_midp_gauge_slider_pane_t2_cp01

0x9d6d,	// (0x0001dc2d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d6d,	// (0x0001dc2d) form2_midp_gauge_slider_pane_t3_cp01

0xf54b,	// (0x0002340b) form2_midp_slider_pane_cp01

0xbf4f,	// (0x0001fe0f) navi_smil_pane

0x6ddf,	// (0x0001ac9f) navi_smil_pane_g1

0x6de7,	// (0x0001aca7) navi_smil_pane_t1

0x6db4,	// (0x0001ac74) form2_midp_slider_pane_g1

0x6dbd,	// (0x0001ac7d) form2_midp_slider_pane_g2

0x6dc5,	// (0x0001ac85) form2_midp_slider_pane_g3

0x6db4,	// (0x0001ac74) form2_midp_slider_pane_g4

0xd06b,	// (0x00020f2b) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00023cf5) form2_midp_slider_pane_g

0xf53b,	// (0x000233fb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf53b,	// (0x000233fb) vkb2_area_bottom_space_btn_pane_g4

0xad91,	// (0x0001ec51) lc0_navi_pane_ParamLimits

0xad91,	// (0x0001ec51) lc0_navi_pane

0xae01,	// (0x0001ecc1) lc0_stat_indi_pane_ParamLimits

0xae01,	// (0x0001ecc1) lc0_stat_indi_pane

0xae16,	// (0x0001ecd6) ls0_title_pane_ParamLimits

0xae16,	// (0x0001ecd6) ls0_title_pane

0xdde0,	// (0x00021ca0) bg_popup_sub_pane_cp14_ParamLimits

0x621f,	// (0x0001a0df) list_uniindi_pane_ParamLimits

0x622b,	// (0x0001a0eb) uniindi_top_pane_ParamLimits

0x62ca,	// (0x0001a18a) list_single_uniindi_pane_g1_ParamLimits

0x62dd,	// (0x0001a19d) list_single_uniindi_pane_t1_ParamLimits

0x9d8a,	// (0x0001dc4a) lc0_stat_clock_pane_ParamLimits

0x9d8a,	// (0x0001dc4a) lc0_stat_clock_pane

0xd074,	// (0x00020f34) lc0_stat_indi_pane_g1_ParamLimits

0xd074,	// (0x00020f34) lc0_stat_indi_pane_g1

0xd081,	// (0x00020f41) lc0_stat_indi_pane_g2_ParamLimits

0xd081,	// (0x00020f41) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x00023d00) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x00023d00) lc0_stat_indi_pane_g

0x9d97,	// (0x0001dc57) lc0_uni_indicator_pane_ParamLimits

0x9d97,	// (0x0001dc57) lc0_uni_indicator_pane

0xd08e,	// (0x00020f4e) ls0_title_pane_g1_ParamLimits

0xd08e,	// (0x00020f4e) ls0_title_pane_g1

0xd0a2,	// (0x00020f62) ls0_title_pane_t1_ParamLimits

0xd0a2,	// (0x00020f62) ls0_title_pane_t1

0x9da4,	// (0x0001dc64) lc0_uni_indicator_pane_g1_ParamLimits

0x9da4,	// (0x0001dc64) lc0_uni_indicator_pane_g1

0x6e59,	// (0x0001ad19) lc0_stat_clock_pane_t1

0xd93b,	// (0x000217fb) main_ai5_pane

0x6e67,	// (0x0001ad27) ai5_sk_pane_ParamLimits

0x6e67,	// (0x0001ad27) ai5_sk_pane

0xd0d0,	// (0x00020f90) cell_ai5_widget_pane_ParamLimits

0xd0d0,	// (0x00020f90) cell_ai5_widget_pane

0x7410,	// (0x0001b2d0) aid_size_cell_widget_grid

0x7426,	// (0x0001b2e6) bg_ai5_widget_pane_ParamLimits

0x7426,	// (0x0001b2e6) bg_ai5_widget_pane

0x7490,	// (0x0001b350) cell_ai5_widget_pane_g2

0x74a0,	// (0x0001b360) cell_ai5_widget_pane_g3

0x74bf,	// (0x0001b37f) cell_ai5_widget_pane_g4

0x74cb,	// (0x0001b38b) cell_ai5_widget_pane_g5

0xd427,	// (0x000212e7) cell_ai5_widget_pane_g6

0xd433,	// (0x000212f3) cell_ai5_widget_pane_g7

0x752b,	// (0x0001b3eb) cell_ai5_widget_pane_t1_ParamLimits

0x752b,	// (0x0001b3eb) cell_ai5_widget_pane_t1

0x7548,	// (0x0001b408) cell_ai5_widget_pane_t2_ParamLimits

0x7548,	// (0x0001b408) cell_ai5_widget_pane_t2

0x7560,	// (0x0001b420) cell_ai5_widget_pane_t3_ParamLimits

0x7560,	// (0x0001b420) cell_ai5_widget_pane_t3

0x7578,	// (0x0001b438) cell_ai5_widget_pane_t4_ParamLimits

0x7578,	// (0x0001b438) cell_ai5_widget_pane_t4

0x7592,	// (0x0001b452) cell_ai5_widget_pane_t5_ParamLimits

0x7592,	// (0x0001b452) cell_ai5_widget_pane_t5

0x75b1,	// (0x0001b471) cell_ai5_widget_pane_t6_ParamLimits

0x75b1,	// (0x0001b471) cell_ai5_widget_pane_t6

0x75c3,	// (0x0001b483) cell_ai5_widget_pane_t7_ParamLimits

0x75c3,	// (0x0001b483) cell_ai5_widget_pane_t7

0x75dc,	// (0x0001b49c) cell_ai5_widget_pane_t8_ParamLimits

0x75dc,	// (0x0001b49c) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00023d1a) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00023d1a) cell_ai5_widget_pane_t

0x7628,	// (0x0001b4e8) grid_ai5_widget_pane

0xdde0,	// (0x00021ca0) highlight_cell_ai5_widget_pane_ParamLimits

0xdde0,	// (0x00021ca0) highlight_cell_ai5_widget_pane

0xd43f,	// (0x000212ff) ai5_sk_left_pane

0xd449,	// (0x00021309) ai5_sk_middle_pane

0xd453,	// (0x00021313) ai5_sk_right_pane

0x765e,	// (0x0001b51e) bg_ai5_widget_pane_g1_ParamLimits

0x765e,	// (0x0001b51e) bg_ai5_widget_pane_g1

0x766a,	// (0x0001b52a) bg_ai5_widget_pane_g2_ParamLimits

0x766a,	// (0x0001b52a) bg_ai5_widget_pane_g2

0x7676,	// (0x0001b536) bg_ai5_widget_pane_g3_ParamLimits

0x7676,	// (0x0001b536) bg_ai5_widget_pane_g3

0x7682,	// (0x0001b542) bg_ai5_widget_pane_g4_ParamLimits

0x7682,	// (0x0001b542) bg_ai5_widget_pane_g4

0x768e,	// (0x0001b54e) bg_ai5_widget_pane_g5_ParamLimits

0x768e,	// (0x0001b54e) bg_ai5_widget_pane_g5

0x769a,	// (0x0001b55a) bg_ai5_widget_pane_g6_ParamLimits

0x769a,	// (0x0001b55a) bg_ai5_widget_pane_g6

0x76a6,	// (0x0001b566) bg_ai5_widget_pane_g7_ParamLimits

0x76a6,	// (0x0001b566) bg_ai5_widget_pane_g7

0x76b2,	// (0x0001b572) bg_ai5_widget_pane_g8_ParamLimits

0x76b2,	// (0x0001b572) bg_ai5_widget_pane_g8

0x76be,	// (0x0001b57e) bg_ai5_widget_pane_g9_ParamLimits

0x76be,	// (0x0001b57e) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x00023d2f) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x00023d2f) bg_ai5_widget_pane_g

0x76e6,	// (0x0001b5a6) cell_shortcut_ai5_widget_pane_ParamLimits

0x76e6,	// (0x0001b5a6) cell_shortcut_ai5_widget_pane

0xc015,	// (0x0001fed5) bg_cell_shortcut_ai5_widget_pane

0x76f9,	// (0x0001b5b9) cell_grid_ai5_widget_pane_g1

0x7702,	// (0x0001b5c2) highlight_cell_shortcut_ai5_widget_pane

0x1a9e,	// (0x0001595e) ai5_sk_left_pane_g1

0x770a,	// (0x0001b5ca) ai5_sk_left_pane_g2

0x7712,	// (0x0001b5d2) ai5_sk_left_pane_g3

0x771a,	// (0x0001b5da) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x00023d42) ai5_sk_left_pane_g

0x7722,	// (0x0001b5e2) ai5_sk_left_pane_t1

0x1aa6,	// (0x00015966) ai5_sk_right_pane_g1

0x7730,	// (0x0001b5f0) ai5_sk_right_pane_g2

0x7738,	// (0x0001b5f8) ai5_sk_right_pane_g3

0x7740,	// (0x0001b600) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00023d4b) ai5_sk_right_pane_g

0x7748,	// (0x0001b608) ai5_sk_right_pane_t1

0x1aa6,	// (0x00015966) ai5_sk_middle_pane_g1

0x1a9e,	// (0x0001595e) ai5_sk_middle_pane_g2

0x1abe,	// (0x0001597e) ai5_sk_middle_pane_g3

0x7738,	// (0x0001b5f8) ai5_sk_middle_pane_g4

0x7712,	// (0x0001b5d2) ai5_sk_middle_pane_g5

0x7756,	// (0x0001b616) ai5_sk_middle_pane_g6

0xd479,	// (0x00021339) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00023d54) ai5_sk_middle_pane_g

0xac7d,	// (0x0001eb3d) aid_touch_area_size_lc0_ParamLimits

0xac7d,	// (0x0001eb3d) aid_touch_area_size_lc0

0xef2f,	// (0x00022def) cell_hwr_candidate_pane_t1_ParamLimits

0x15a0,	// (0x00015460) aid_touch_navi_pane

0xaf21,	// (0x0001ede1) status_dt_navi_pane_ParamLimits

0xaf21,	// (0x0001ede1) status_dt_navi_pane

0xaf39,	// (0x0001edf9) status_dt_sta_pane_ParamLimits

0xaf39,	// (0x0001edf9) status_dt_sta_pane

0xd481,	// (0x00021341) dt_sta_controll_pane

0xd48e,	// (0x0002134e) dt_sta_indi_pane

0xd49b,	// (0x0002135b) dt_sta_title_pane

0xc10c,	// (0x0001ffcc) bg_dt_sta_indi_pane_ParamLimits

0xc10c,	// (0x0001ffcc) bg_dt_sta_indi_pane

0xd4ad,	// (0x0002136d) dt_sta_battery_pane

0xd4b5,	// (0x00021375) dt_sta_indi_pane_g1

0xd4be,	// (0x0002137e) dt_sta_indi_pane_g2

0xd4c7,	// (0x00021387) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00023d63) dt_sta_indi_pane_g

0xd4d0,	// (0x00021390) dt_sta_signal_pane

0xdde0,	// (0x00021ca0) bg_dt_sta_title_pane_ParamLimits

0xdde0,	// (0x00021ca0) bg_dt_sta_title_pane

0xd4d9,	// (0x00021399) dt_sta_title_pane_g1

0xd4e1,	// (0x000213a1) dt_sta_title_pane_t1_ParamLimits

0xd4e1,	// (0x000213a1) dt_sta_title_pane_t1

0xbf4f,	// (0x0001fe0f) bg_dt_sta_control_pane

0xd4f6,	// (0x000213b6) dt_sta_controll_pane_g1

0xd4ff,	// (0x000213bf) bg_dt_sta_title_pane_g1

0xd508,	// (0x000213c8) bg_dt_sta_title_pane_g2

0xd511,	// (0x000213d1) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00023d6a) bg_dt_sta_title_pane_g

0x4521,	// (0x000183e1) bg_dt_sta_indi_pane_g1

0x7804,	// (0x0001b6c4) dt_sta_signal_pane_g1

0x780c,	// (0x0001b6cc) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00023d71) dt_sta_signal_pane_g

0x7814,	// (0x0001b6d4) dt_sta_battery_pane_g1

0x781d,	// (0x0001b6dd) dt_sta_battery_pane_t1

0x4521,	// (0x000183e1) bg_dt_sta_control_pane_g1

0x0c5a,	// (0x00014b1a) fep_china_uni_eep_pane

0x0c62,	// (0x00014b22) fep_china_uni_entry_pane_ParamLimits

0x0c72,	// (0x00014b32) popup_fep_china_uni_window_g1_ParamLimits

0x0c82,	// (0x00014b42) popup_fep_china_uni_window_g2_ParamLimits

0x0c82,	// (0x00014b42) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x000235de) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x000235de) popup_fep_china_uni_window_g

0x782c,	// (0x0001b6ec) fep_china_uni_eep_pane_g1

0x7834,	// (0x0001b6f4) fep_china_uni_eep_pane_t1

0x6dd6,	// (0x0001ac96) aid_touch_area_size_smil_player

0x16f8,	// (0x000155b8) lc0_clock_pane

0x18f7,	// (0x000157b7) status_pane_g5_ParamLimits

0x18f7,	// (0x000157b7) status_pane_g5

0x9204,	// (0x0001d0c4) popup_keymap_window

0x18b5,	// (0x00015775) status_icon_pane

0x74a0,	// (0x0001b360) cell_ai5_widget_pane_g3_ParamLimits

0x74bf,	// (0x0001b37f) cell_ai5_widget_pane_g4_ParamLimits

0x74cb,	// (0x0001b38b) cell_ai5_widget_pane_g5_ParamLimits

0x74ef,	// (0x0001b3af) cell_ai5_widget_pane_g8_ParamLimits

0x74ef,	// (0x0001b3af) cell_ai5_widget_pane_g8

0x7503,	// (0x0001b3c3) cell_ai5_widget_pane_g9_ParamLimits

0x7503,	// (0x0001b3c3) cell_ai5_widget_pane_g9

0x7517,	// (0x0001b3d7) cell_ai5_widget_pane_g10_ParamLimits

0x7517,	// (0x0001b3d7) cell_ai5_widget_pane_g10

0x7843,	// (0x0001b703) status_icon_pane_g1

0xbf4f,	// (0x0001fe0f) bg_popup_sub_pane_cp13

0x784b,	// (0x0001b70b) popup_keymap_window_t1

0xabff,	// (0x0001eabf) control_pane_g6_ParamLimits

0xabff,	// (0x0001eabf) control_pane_g6

0xac0c,	// (0x0001eacc) control_pane_g7_ParamLimits

0xac0c,	// (0x0001eacc) control_pane_g7

0xac19,	// (0x0001ead9) control_pane_g8_ParamLimits

0xac19,	// (0x0001ead9) control_pane_g8

0xd481,	// (0x00021341) dt_sta_controll_pane_ParamLimits

0xd48e,	// (0x0002134e) dt_sta_indi_pane_ParamLimits

0xd49b,	// (0x0002135b) dt_sta_title_pane_ParamLimits

0xdc9c,	// (0x00021b5c) aid_size_touch_scroll_bar_cale

0xda18,	// (0x000218d8) popup_discreet_window_ParamLimits

0xda18,	// (0x000218d8) popup_discreet_window

0x8e50,	// (0x0001cd10) popup_sk_window

0x21c7,	// (0x00016087) bg_popup_sub_pane_cp28_ParamLimits

0x21c7,	// (0x00016087) bg_popup_sub_pane_cp28

0x7859,	// (0x0001b719) popup_discreet_window_g1_ParamLimits

0x7859,	// (0x0001b719) popup_discreet_window_g1

0x7879,	// (0x0001b739) popup_discreet_window_t1_ParamLimits

0x7879,	// (0x0001b739) popup_discreet_window_t1

0x7897,	// (0x0001b757) popup_discreet_window_t2_ParamLimits

0x7897,	// (0x0001b757) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00023d76) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00023d76) popup_discreet_window_t

0x0029,	// (0x00013ee9) popup_sk_window_g1

0x0033,	// (0x00013ef3) popup_sk_window_g2

0x0001,

0xfebd,	// (0x00023d7d) popup_sk_window_g

0x003d,	// (0x00013efd) popup_sk_window_t1

0x004d,	// (0x00013f0d) popup_sk_window_t1_copy1

0x7490,	// (0x0001b350) cell_ai5_widget_pane_g2_ParamLimits

0x75ee,	// (0x0001b4ae) cell_ai5_widget_pane_t9_ParamLimits

0x75ee,	// (0x0001b4ae) cell_ai5_widget_pane_t9

0xbf4f,	// (0x0001fe0f) main_fep_fshwr2_pane

0x9dc3,	// (0x0001dc83) aid_fshwr2_btn_pane

0x9dd2,	// (0x0001dc92) aid_fshwr2_syb_pane

0x9de4,	// (0x0001dca4) aid_fshwr2_txt_pane

0x9df3,	// (0x0001dcb3) fshwr2_func_candi_pane

0x9e04,	// (0x0001dcc4) fshwr2_hwr_syb_pane

0x9e1f,	// (0x0001dcdf) fshwr2_icf_pane

0xbf4f,	// (0x0001fe0f) fshwr2_icf_bg_pane

0xd51a,	// (0x000213da) fshwr2_icf_pane_t1_ParamLimits

0xd51a,	// (0x000213da) fshwr2_icf_pane_t1

0x4521,	// (0x000183e1) fshwr2_func_candi_pane_g1

0x7900,	// (0x0001b7c0) fshwr2_func_candi_row_pane_ParamLimits

0x7900,	// (0x0001b7c0) fshwr2_func_candi_row_pane

0xd532,	// (0x000213f2) cell_fshwr2_syb_pane_ParamLimits

0xd532,	// (0x000213f2) cell_fshwr2_syb_pane

0x479c,	// (0x0001865c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x479c,	// (0x0001865c) fshwr2_hwr_syb_pane_g1

0xbf4f,	// (0x0001fe0f) bg_popup_call_pane_cp01

0x792b,	// (0x0001b7eb) fshwr2_func_candi_cell_pane_ParamLimits

0x792b,	// (0x0001b7eb) fshwr2_func_candi_cell_pane

0x795d,	// (0x0001b81d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x795d,	// (0x0001b81d) fshwr2_func_candi_cell_bg_pane

0x7977,	// (0x0001b837) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7977,	// (0x0001b837) fshwr2_func_candi_cell_pane_g1

0x7997,	// (0x0001b857) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7997,	// (0x0001b857) fshwr2_func_candi_cell_pane_t1

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp08

0x11e8,	// (0x000150a8) cell_fshwr2_syb_bg_pane

0xd54b,	// (0x0002140b) cell_fshwr2_syb_bg_pane_g1

0xd553,	// (0x00021413) cell_fshwr2_syb_bg_pane_t1

0xdde0,	// (0x00021ca0) main_tmo_pane

0xb309,	// (0x0001f1c9) uni_indicator_pane_g1_ParamLimits

0xb31e,	// (0x0001f1de) uni_indicator_pane_g2_ParamLimits

0xb333,	// (0x0001f1f3) uni_indicator_pane_g3_ParamLimits

0xb349,	// (0x0001f209) uni_indicator_pane_g4_ParamLimits

0xb349,	// (0x0001f209) uni_indicator_pane_g4

0xb35d,	// (0x0001f21d) uni_indicator_pane_g5_ParamLimits

0xb35d,	// (0x0001f21d) uni_indicator_pane_g5

0xb371,	// (0x0001f231) uni_indicator_pane_g6_ParamLimits

0xb371,	// (0x0001f231) uni_indicator_pane_g6

0xf91d,	// (0x000237dd) uni_indicator_pane_g_ParamLimits

0xc54a,	// (0x0002040a) popup_tmo_note_window_ParamLimits

0xc54a,	// (0x0002040a) popup_tmo_note_window

0xf147,	// (0x00023007) fshwr2_bg_pane

0x7988,	// (0x0001b848) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7988,	// (0x0001b848) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00023d82) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00023d82) fshwr2_func_candi_cell_pane_g

0x4521,	// (0x000183e1) bg_popup_window_pane_cp01

0x79c1,	// (0x0001b881) bg_popup_window_pane_g1_cp01

0x79ca,	// (0x0001b88a) bg_popup_window_pane_cp22_ParamLimits

0x79ca,	// (0x0001b88a) bg_popup_window_pane_cp22

0x79d8,	// (0x0001b898) listscroll_tmo_link_pane_ParamLimits

0x79d8,	// (0x0001b898) listscroll_tmo_link_pane

0x7a18,	// (0x0001b8d8) popup_tmo_note_window_g1_ParamLimits

0x7a18,	// (0x0001b8d8) popup_tmo_note_window_g1

0x7a25,	// (0x0001b8e5) tmo_note_info_pane_ParamLimits

0x7a25,	// (0x0001b8e5) tmo_note_info_pane

0xd562,	// (0x00021422) list_tmo_note_info_pane_g1_ParamLimits

0xd562,	// (0x00021422) list_tmo_note_info_pane_g1

0x7a56,	// (0x0001b916) list_tmo_note_info_pane_g2_ParamLimits

0x7a56,	// (0x0001b916) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00023d87) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00023d87) list_tmo_note_info_pane_g

0x7a72,	// (0x0001b932) list_tmo_note_info_text_pane_ParamLimits

0x7a72,	// (0x0001b932) list_tmo_note_info_text_pane

0x7af7,	// (0x0001b9b7) list_tmo_link_pane

0x7b04,	// (0x0001b9c4) scroll_pane_cp20

0x7b11,	// (0x0001b9d1) list_single_tmo_link_pane_ParamLimits

0x7b11,	// (0x0001b9d1) list_single_tmo_link_pane

0x7b21,	// (0x0001b9e1) list_single_tmo_link_pane_t1

0x7b2f,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1_ParamLimits

0x7b2f,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1

0xa757,	// (0x0001e617) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa757,	// (0x0001e617) aid_size_touch_scroll_bar_cp01

0xa686,	// (0x0001e546) aid_size_touch_slider_marker

0x8e40,	// (0x0001cd00) popup_settings_window_ParamLimits

0x8e40,	// (0x0001cd00) popup_settings_window

0x154e,	// (0x0001540e) popup_candi_list_indi_window

0x15a0,	// (0x00015460) aid_touch_navi_pane_ParamLimits

0xf0cf,	// (0x00022f8f) rs_clock_indi_pane

0xf0d8,	// (0x00022f98) sctrl_sk_bottom_pane_ParamLimits

0xf0e9,	// (0x00022fa9) sctrl_sk_top_pane_ParamLimits

0xf17d,	// (0x0002303d) popup_fep_tooltip_window

0x7410,	// (0x0001b2d0) aid_size_cell_widget_grid_ParamLimits

0x7484,	// (0x0001b344) cell_ai5_widget_pane_g1_ParamLimits

0x7484,	// (0x0001b344) cell_ai5_widget_pane_g1

0xd427,	// (0x000212e7) cell_ai5_widget_pane_g6_ParamLimits

0xd433,	// (0x000212f3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00023d05) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00023d05) cell_ai5_widget_pane_g

0x7612,	// (0x0001b4d2) cell_ai5_widget_pane_t10_ParamLimits

0x7612,	// (0x0001b4d2) cell_ai5_widget_pane_t10

0x7628,	// (0x0001b4e8) grid_ai5_widget_pane_ParamLimits

0xd45d,	// (0x0002131d) cell_contacts_ai5_widget_pane_ParamLimits

0xd45d,	// (0x0002131d) cell_contacts_ai5_widget_pane

0x78ac,	// (0x0001b76c) popup_discreet_window_t3_ParamLimits

0x78ac,	// (0x0001b76c) popup_discreet_window_t3

0x00bd,	// (0x00013f7d) popup_fshwr2_char_preview_window_ParamLimits

0x00bd,	// (0x00013f7d) popup_fshwr2_char_preview_window

0xd579,	// (0x00021439) tmo_note_info_pane_t1

0xd58e,	// (0x0002144e) tmo_note_info_pane_t2

0xd5a7,	// (0x00021467) tmo_note_info_pane_t3

0x7ad3,	// (0x0001b993) tmo_note_info_pane_t4

0x7ae5,	// (0x0001b9a5) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00023d8c) tmo_note_info_pane_t

0x7af7,	// (0x0001b9b7) list_tmo_link_pane_ParamLimits

0x7b04,	// (0x0001b9c4) scroll_pane_cp20_ParamLimits

0xbf4f,	// (0x0001fe0f) bg_popup_fep_char_preview_window_cp01

0x7b48,	// (0x0001ba08) popup_fshwr2_char_preview_window_t1

0x7b56,	// (0x0001ba16) popup_candi_list_indi_window_g1

0x7b5f,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane

0x7b6b,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1

0x7b7b,	// (0x0001ba3b) cell_contacts_ai5_widget_pane_g2

0x7b87,	// (0x0001ba47) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00023d97) cell_contacts_ai5_widget_pane_g

0x7b93,	// (0x0001ba53) cell_contacts_ai5_widget_pane_t1

0xdde0,	// (0x00021ca0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd621,	// (0x000214e1) settings_container_pane

0x11e8,	// (0x000150a8) listscroll_set_pane_copy1

0x399d,	// (0x0001785d) scroll_pane_cp121_copy1

0x7c19,	// (0x0001bad9) set_content_pane_copy1

0xd62d,	// (0x000214ed) aid_height_set_list_copy1_ParamLimits

0xd62d,	// (0x000214ed) aid_height_set_list_copy1

0x2f82,	// (0x00016e42) aid_size_parent_copy1_ParamLimits

0x2f82,	// (0x00016e42) aid_size_parent_copy1

0xd639,	// (0x000214f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd639,	// (0x000214f9) button_value_adjust_pane_cp6_copy1

0x1534,	// (0x000153f4) list_highlight_pane_cp2_copy1_ParamLimits

0x1534,	// (0x000153f4) list_highlight_pane_cp2_copy1

0xd64d,	// (0x0002150d) list_set_pane_copy1_ParamLimits

0xd64d,	// (0x0002150d) list_set_pane_copy1

0xd5bc,	// (0x0002147c) main_pane_set_t1_copy1_ParamLimits

0xd5bc,	// (0x0002147c) main_pane_set_t1_copy1

0xd5f6,	// (0x000214b6) main_pane_set_t2_copy1_ParamLimits

0xd5f6,	// (0x000214b6) main_pane_set_t2_copy1

0xd714,	// (0x000215d4) main_pane_set_t3_copy1

0xd722,	// (0x000215e2) main_pane_set_t4_copy1

0xd615,	// (0x000214d5) set_content_pane_g1_copy1_ParamLimits

0xd615,	// (0x000214d5) set_content_pane_g1_copy1

0xd730,	// (0x000215f0) setting_code_pane_copy1

0x7d2c,	// (0x0001bbec) setting_slider_graphic_pane_copy1

0x7d2c,	// (0x0001bbec) setting_slider_pane_copy1

0x7d2c,	// (0x0001bbec) setting_text_pane_copy1

0x7d2c,	// (0x0001bbec) setting_volume_pane_copy1

0xd730,	// (0x000215f0) settings_code_pane_cp2_copy1

0xd738,	// (0x000215f8) settings_code_pane_cp_copy1_ParamLimits

0xd738,	// (0x000215f8) settings_code_pane_cp_copy1

0xd74c,	// (0x0002160c) volume_set_pane_copy1

0xd758,	// (0x00021618) volume_set_pane_g10_copy1

0xd764,	// (0x00021624) volume_set_pane_g1_copy1

0xd76e,	// (0x0002162e) volume_set_pane_g2_copy1

0xd778,	// (0x00021638) volume_set_pane_g3_copy1

0xd782,	// (0x00021642) volume_set_pane_g4_copy1

0xd78c,	// (0x0002164c) volume_set_pane_g5_copy1

0xd796,	// (0x00021656) volume_set_pane_g6_copy1

0xd7a0,	// (0x00021660) volume_set_pane_g7_copy1

0xd7aa,	// (0x0002166a) volume_set_pane_g8_copy1

0xd7b4,	// (0x00021674) volume_set_pane_g9_copy1

0xbfbf,	// (0x0001fe7f) bg_set_opt_pane_cp_copy1_ParamLimits

0xbfbf,	// (0x0001fe7f) bg_set_opt_pane_cp_copy1

0x7dba,	// (0x0001bc7a) setting_slider_pane_t1_copy1_ParamLimits

0x7dba,	// (0x0001bc7a) setting_slider_pane_t1_copy1

0xd7be,	// (0x0002167e) setting_slider_pane_t2_copy1_ParamLimits

0xd7be,	// (0x0002167e) setting_slider_pane_t2_copy1

0xd7d8,	// (0x00021698) setting_slider_pane_t3_copy1_ParamLimits

0xd7d8,	// (0x00021698) setting_slider_pane_t3_copy1

0xd7f0,	// (0x000216b0) slider_set_pane_copy1_ParamLimits

0xd7f0,	// (0x000216b0) slider_set_pane_copy1

0xdea4,	// (0x00021d64) set_opt_bg_pane_g1_copy2

0xdeac,	// (0x00021d6c) set_opt_bg_pane_g2_copy2

0x7e20,	// (0x0001bce0) set_opt_bg_pane_g3_copy2

0xdebc,	// (0x00021d7c) set_opt_bg_pane_g4_copy2

0xdec4,	// (0x00021d84) set_opt_bg_pane_g5_copy2

0xdecc,	// (0x00021d8c) set_opt_bg_pane_g6_copy2

0xd806,	// (0x000216c6) set_opt_bg_pane_g7_copy2

0x7e34,	// (0x0001bcf4) set_opt_bg_pane_g8_copy2

0x7e3e,	// (0x0001bcfe) set_opt_bg_pane_g9_copy2

0x7e48,	// (0x0001bd08) aid_size_touch_slider_mark_copy1_ParamLimits

0x7e48,	// (0x0001bd08) aid_size_touch_slider_mark_copy1

0x7e5c,	// (0x0001bd1c) slider_set_pane_g1_copy1

0x7e65,	// (0x0001bd25) slider_set_pane_g2_copy1

0x4fc9,	// (0x00018e89) slider_set_pane_g3_copy1_ParamLimits

0x4fc9,	// (0x00018e89) slider_set_pane_g3_copy1

0x4fdd,	// (0x00018e9d) slider_set_pane_g4_copy1_ParamLimits

0x4fdd,	// (0x00018e9d) slider_set_pane_g4_copy1

0x4ff5,	// (0x00018eb5) slider_set_pane_g5_copy1_ParamLimits

0x4ff5,	// (0x00018eb5) slider_set_pane_g5_copy1

0x4fc9,	// (0x00018e89) slider_set_pane_g6_copy1_ParamLimits

0x4fc9,	// (0x00018e89) slider_set_pane_g6_copy1

0xd810,	// (0x000216d0) slider_set_pane_g7_copy1_ParamLimits

0xd810,	// (0x000216d0) slider_set_pane_g7_copy1

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp2_copy1

0x7e83,	// (0x0001bd43) setting_slider_graphic_pane_g1_copy1

0xd826,	// (0x000216e6) setting_slider_graphic_pane_t1_copy1

0xd836,	// (0x000216f6) setting_slider_graphic_pane_t2_copy1

0xd846,	// (0x00021706) slider_set_pane_cp_copy1

0x7ebc,	// (0x0001bd7c) input_focus_pane_cp1_copy1

0x7ec5,	// (0x0001bd85) list_set_text_pane_copy1

0x7ecd,	// (0x0001bd8d) setting_text_pane_g1_copy1

0xbfe4,	// (0x0001fea4) set_text_pane_t1_copy1

0x7ebc,	// (0x0001bd7c) input_focus_pane_cp2_copy1

0x7ecd,	// (0x0001bd8d) setting_code_pane_g1_copy1

0xd84e,	// (0x0002170e) setting_code_pane_t1_copy1

0xd85c,	// (0x0002171c) list_set_graphic_pane_copy1

0xbf63,	// (0x0001fe23) bg_set_opt_pane_cp4_copy1

0xaa98,	// (0x0001e958) list_set_graphic_pane_g1_copy1_ParamLimits

0xaa98,	// (0x0001e958) list_set_graphic_pane_g1_copy1

0xd86e,	// (0x0002172e) list_set_graphic_pane_g2_copy1

0xaab0,	// (0x0001e970) list_set_graphic_pane_t1_copy1_ParamLimits

0xaab0,	// (0x0001e970) list_set_graphic_pane_t1_copy1

0x4521,	// (0x000183e1) rs_clock_indi_pane_g1

0x7f17,	// (0x0001bdd7) rs_clock_indi_pane_t1

0x7f25,	// (0x0001bde5) rs_indi_pane

0x7f2d,	// (0x0001bded) rs_indi_pane_g1

0x7f36,	// (0x0001bdf6) rs_indi_pane_g2

0x7f3f,	// (0x0001bdff) rs_indi_pane_g3

0x0002,

0xfede,	// (0x00023d9e) rs_indi_pane_g

0x11e8,	// (0x000150a8) bg_popup_preview_window_pane_cp03

0x7f48,	// (0x0001be08) popup_fep_tooltip_window_t1

0x544b,	// (0x0001930b) popup_note2_window_g2_ParamLimits

0x544b,	// (0x0001930b) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00023b37) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00023b37) popup_note2_window_g

0x5a42,	// (0x00019902) bg_popup_sub_pane_cp11_ParamLimits

0x5a4f,	// (0x0001990f) cell_ai3_links_pane_g1_ParamLimits

0x5a66,	// (0x00019926) cell_ai3_links_pane_t1

0xbfe4,	// (0x0001fea4) set_text_pane_t1_copy1_ParamLimits

0xab24,	// (0x0001e9e4) cell_graphic_popup_pane_cp2_ParamLimits

0xab24,	// (0x0001e9e4) cell_graphic_popup_pane_cp2

0xd876,	// (0x00021736) cell_graphic_popup_pane_g1_cp2

0xc343,	// (0x00020203) cell_graphic_popup_pane_g2_cp2

0x7f5e,	// (0x0001be1e) cell_graphic_popup_pane_g3_cp2

0x7f66,	// (0x0001be26) cell_graphic_popup_pane_t2_cp2

0xc354,	// (0x00020214) grid_highlight_pane_cp3_cp2

0xe291,	// (0x00022151) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xdde0,	// (0x00021ca0) main_tmo_pane_ParamLimits

0xc53e,	// (0x000203fe) popup_tmo_big_image_note_window

0x7474,	// (0x0001b334) cell_ai5_widget_list_pane

0x747c,	// (0x0001b33c) cell_ai5_widget_lrg_icon_pane

0xd579,	// (0x00021439) tmo_note_info_pane_t1_ParamLimits

0xd58e,	// (0x0002144e) tmo_note_info_pane_t2_ParamLimits

0xd5a7,	// (0x00021467) tmo_note_info_pane_t3_ParamLimits

0x7ad3,	// (0x0001b993) tmo_note_info_pane_t4_ParamLimits

0x7ae5,	// (0x0001b9a5) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00023d8c) tmo_note_info_pane_t_ParamLimits

0xd621,	// (0x000214e1) settings_container_pane_ParamLimits

0x7eb4,	// (0x0001bd74) indicator_popup_pane_cp5

0x7eb4,	// (0x0001bd74) indicator_popup_pane_cp6

0xd85c,	// (0x0002171c) list_set_graphic_pane_copy1_ParamLimits

0xbf4f,	// (0x0001fe0f) bg_popup_window_pane_cp23

0x7f74,	// (0x0001be34) popup_tmo_big_image_note_window_g1

0x7f80,	// (0x0001be40) popup_tmo_big_image_note_window_t1

0x7f90,	// (0x0001be50) popup_tmo_big_image_note_window_t2

0x7fa0,	// (0x0001be60) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00023da5) popup_tmo_big_image_note_window_t

0x7fb0,	// (0x0001be70) cell_ai5_widget_lrg_icon_pane_g1

0x7fb8,	// (0x0001be78) cell_ai5_widget_lrg_icon_pane_t1

0x7fc6,	// (0x0001be86) cell_ai5_widget_list_row_pane_ParamLimits

0x7fc6,	// (0x0001be86) cell_ai5_widget_list_row_pane

0x7fdf,	// (0x0001be9f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7fdf,	// (0x0001be9f) cell_ai5_widget_list_row_pane_g1

0x7fec,	// (0x0001beac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7fec,	// (0x0001beac) cell_ai5_widget_list_row_pane_t1

0x8004,	// (0x0001bec4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8004,	// (0x0001bec4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x00023dac) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00023dac) cell_ai5_widget_list_row_pane_t

0xd93b,	// (0x000217fb) main_fep_vtchi_ss_pane

0x803b,	// (0x0001befb) popup_fep_char_pre_window

0x8043,	// (0x0001bf03) popup_fep_ituss_window

0x8064,	// (0x0001bf24) popup_fep_vkbss_window

0x8085,	// (0x0001bf45) grid_vkbss_keypad_pane_ParamLimits

0x8085,	// (0x0001bf45) grid_vkbss_keypad_pane

0x8095,	// (0x0001bf55) ituss_keypad_pane

0x80b1,	// (0x0001bf71) aid_vkbss_key_offset_ParamLimits

0x80b1,	// (0x0001bf71) aid_vkbss_key_offset

0x80bd,	// (0x0001bf7d) cell_vkbss_key_pane_ParamLimits

0x80bd,	// (0x0001bf7d) cell_vkbss_key_pane

0x80d3,	// (0x0001bf93) bg_cell_vkbss_key_g1_ParamLimits

0x80d3,	// (0x0001bf93) bg_cell_vkbss_key_g1

0x80df,	// (0x0001bf9f) cell_vkbss_key_3p_pane_ParamLimits

0x80df,	// (0x0001bf9f) cell_vkbss_key_3p_pane

0x80f9,	// (0x0001bfb9) cell_vkbss_key_g1_ParamLimits

0x80f9,	// (0x0001bfb9) cell_vkbss_key_g1

0x8113,	// (0x0001bfd3) cell_vkbss_key_t1_ParamLimits

0x8113,	// (0x0001bfd3) cell_vkbss_key_t1

0x813e,	// (0x0001bffe) cell_ituss_key_pane_ParamLimits

0x813e,	// (0x0001bffe) cell_ituss_key_pane

0x814f,	// (0x0001c00f) bg_cell_ituss_key_g1_ParamLimits

0x814f,	// (0x0001c00f) bg_cell_ituss_key_g1

0x815b,	// (0x0001c01b) cell_ituss_key_pane_g1_ParamLimits

0x815b,	// (0x0001c01b) cell_ituss_key_pane_g1

0x816f,	// (0x0001c02f) cell_ituss_key_pane_g2_ParamLimits

0x816f,	// (0x0001c02f) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00023db3) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00023db3) cell_ituss_key_pane_g

0x819a,	// (0x0001c05a) cell_ituss_key_t1_ParamLimits

0x819a,	// (0x0001c05a) cell_ituss_key_t1

0x81c8,	// (0x0001c088) cell_ituss_key_t2_ParamLimits

0x81c8,	// (0x0001c088) cell_ituss_key_t2

0x81f9,	// (0x0001c0b9) cell_ituss_key_t3_ParamLimits

0x81f9,	// (0x0001c0b9) cell_ituss_key_t3

0x822a,	// (0x0001c0ea) cell_ituss_key_t4_ParamLimits

0x822a,	// (0x0001c0ea) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00023db8) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00023db8) cell_ituss_key_t

0x825b,	// (0x0001c11b) cell_vkbss_key_3p_pane_g1

0x8263,	// (0x0001c123) cell_vkbss_key_3p_pane_g2

0x826b,	// (0x0001c12b) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00023dc1) cell_vkbss_key_3p_pane_g

0xbf4f,	// (0x0001fe0f) bg_popup_fep_char_preview_window_cp02

0x8273,	// (0x0001c133) popup_fep_char_pre_window_t1

0xd41d,	// (0x000212dd) main_ai5_sk_pane

0x7b5f,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7b6b,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7b7b,	// (0x0001ba3b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7b87,	// (0x0001ba47) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00023d97) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7b93,	// (0x0001ba53) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xdde0,	// (0x00021ca0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd87e,	// (0x0002173e) main_ai5_sk_pane_g1

0x1fff,	// (0x00015ebf) popup_query_code_window_g1

0x8059,	// (0x0001bf19) popup_fep_vkb_icf_pane

0x806f,	// (0x0001bf2f) popup_fep_vtchi_icf_pane

0xdde0,	// (0x00021ca0) bg_icf_pane

0x828b,	// (0x0001c14b) list_vkb_icf_pane

0xdde0,	// (0x00021ca0) bg_icf_pane_cp01

0x8297,	// (0x0001c157) vtchi_icf_list_pane

0x82a8,	// (0x0001c168) list_vkb_icf_pane_t1_ParamLimits

0x82a8,	// (0x0001c168) list_vkb_icf_pane_t1

0x82bf,	// (0x0001c17f) vtchi_icf_list_pane_t1_ParamLimits

0x82bf,	// (0x0001c17f) vtchi_icf_list_pane_t1

0x8043,	// (0x0001bf03) popup_fep_ituss_window_ParamLimits

0x806f,	// (0x0001bf2f) popup_fep_vtchi_icf_pane_ParamLimits

0x8095,	// (0x0001bf55) ituss_keypad_pane_ParamLimits

0x80a5,	// (0x0001bf65) ituss_sks_pane

0xdde0,	// (0x00021ca0) bg_icf_pane_ParamLimits

0x802c,	// (0x0001beec) icf_edit_indi_pane_ParamLimits

0x802c,	// (0x0001beec) icf_edit_indi_pane

0x828b,	// (0x0001c14b) list_vkb_icf_pane_ParamLimits

0xdde0,	// (0x00021ca0) bg_icf_pane_cp01_ParamLimits

0x802c,	// (0x0001beec) icf_edit_indi_pane_cp01_ParamLimits

0x802c,	// (0x0001beec) icf_edit_indi_pane_cp01

0x829f,	// (0x0001c15f) vtchi_query_pane

0x479c,	// (0x0001865c) icf_edit_indi_pane_g1_ParamLimits

0x479c,	// (0x0001865c) icf_edit_indi_pane_g1

0x8342,	// (0x0001c202) icf_edit_indi_pane_g2_ParamLimits

0x8342,	// (0x0001c202) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00023dd9) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00023dd9) icf_edit_indi_pane_g

0x8351,	// (0x0001c211) icf_edit_indi_pane_t1

0x82d8,	// (0x0001c198) bg_input_focus_pane_cp042

0xdc93,	// (0x00021b53) vtchi_button_pane

0x82e1,	// (0x0001c1a1) vtchi_query_pane_t1

0x82ef,	// (0x0001c1af) vtchi_query_pane_t2

0x82fd,	// (0x0001c1bd) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00023dc8) vtchi_query_pane_t

0xbf4f,	// (0x0001fe0f) bg_button_pane_cp13

0x830b,	// (0x0001c1cb) vtchi_button_pane_g1

0x8313,	// (0x0001c1d3) ituss_sks_pane_g1

0x831e,	// (0x0001c1de) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00023dcf) ituss_sks_pane_g

0x8326,	// (0x0001c1e6) ituss_sks_pane_t1

0x8334,	// (0x0001c1f4) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00023dd4) ituss_sks_pane_t

0x3f75,	// (0x00017e35) indicator_nsta_pane_cp_g1

0x3f7e,	// (0x00017e3e) indicator_nsta_pane_cp_g2

0x3f86,	// (0x00017e46) indicator_nsta_pane_cp_g3

0x3f8e,	// (0x00017e4e) indicator_nsta_pane_cp_g4

0x3f96,	// (0x00017e56) indicator_nsta_pane_cp_g5

0x3f9e,	// (0x00017e5e) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00023975) indicator_nsta_pane_cp_g

0xcf40,	// (0x00020e00) cell_graphic2_pane_t2_ParamLimits

0xcf40,	// (0x00020e00) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x00023c8e) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x00023c8e) cell_graphic2_pane_t

0xcf76,	// (0x00020e36) cell_graphic2_control_pane_t1

0xa993,	// (0x0001e853) signal_pane_g3_ParamLimits

0xa993,	// (0x0001e853) signal_pane_g3

0xa9a7,	// (0x0001e867) signal_pane_g4_ParamLimits

0xa9a7,	// (0x0001e867) signal_pane_g4

0x8016,	// (0x0001bed6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8016,	// (0x0001bed6) cell_ai5_widget_list_row_pane_t3

0x8188,	// (0x0001c048) cell_ituss_key_pane_t1_ParamLimits

0x8188,	// (0x0001c048) cell_ituss_key_pane_t1

0x1c4d,	// (0x00015b0d) form_field_data_wide_pane_vc_t2_ParamLimits

0x1c4d,	// (0x00015b0d) form_field_data_wide_pane_vc_t2

0x1c61,	// (0x00015b21) form_field_data_wide_pane_vc_t3_ParamLimits

0x1c61,	// (0x00015b21) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x000236c5) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x000236c5) form_field_data_wide_pane_vc_t

0x3c1a,	// (0x00017ada) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3c1a,	// (0x00017ada) form_field_slider_wide_pane_vc_t3

0x3cf6,	// (0x00017bb6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3cf6,	// (0x00017bb6) form_field_popup_wide_pane_vc_t2

0x3d0d,	// (0x00017bcd) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3d0d,	// (0x00017bcd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00023964) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00023964) form_field_popup_wide_pane_vc_t

0x9dc3,	// (0x0001dc83) aid_fshwr2_btn_pane_ParamLimits

0x9dd2,	// (0x0001dc92) aid_fshwr2_syb_pane_ParamLimits

0x9de4,	// (0x0001dca4) aid_fshwr2_txt_pane_ParamLimits

0xf147,	// (0x00023007) fshwr2_bg_pane_ParamLimits

0x9df3,	// (0x0001dcb3) fshwr2_func_candi_pane_ParamLimits

0x9e04,	// (0x0001dcc4) fshwr2_hwr_syb_pane_ParamLimits

0x9e1f,	// (0x0001dcdf) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
