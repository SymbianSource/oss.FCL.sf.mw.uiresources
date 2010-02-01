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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003a762 };

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
0x76d2,	// (0x00041e34) Screen

0x76e6,	// (0x00041e48) application_window_ParamLimits

0x76e6,	// (0x00041e48) application_window

0x7700,	// (0x00041e62) screen_g1

0x59df,	// (0x00040141) area_bottom_pane_ParamLimits

0x59df,	// (0x00040141) area_bottom_pane

0x5a9f,	// (0x00040201) area_top_pane_ParamLimits

0x5a9f,	// (0x00040201) area_top_pane

0x5b33,	// (0x00040295) main_pane_ParamLimits

0x5b33,	// (0x00040295) main_pane

0x770a,	// (0x00041e6c) misc_graphics

0x9642,	// (0x00043da4) battery_pane_ParamLimits

0x9642,	// (0x00043da4) battery_pane

0xa361,	// (0x00044ac3) bg_status_flat_pane_g8

0xa369,	// (0x00044acb) bg_status_flat_pane_g9

0x9704,	// (0x00043e66) context_pane_ParamLimits

0x9704,	// (0x00043e66) context_pane

0x981a,	// (0x00043f7c) navi_pane_ParamLimits

0x981a,	// (0x00043f7c) navi_pane

0x9897,	// (0x00043ff9) signal_pane_ParamLimits

0x9897,	// (0x00043ff9) signal_pane

0x0008,

0xf88f,	// (0x00049ff1) bg_status_flat_pane_g

0x9904,	// (0x00044066) status_pane_g1_ParamLimits

0x9904,	// (0x00044066) status_pane_g1

0x9918,	// (0x0004407a) status_pane_g2_ParamLimits

0x9918,	// (0x0004407a) status_pane_g2

0x9924,	// (0x00044086) status_pane_g3_ParamLimits

0x9924,	// (0x00044086) status_pane_g3

0x0004,

0xf7bd,	// (0x00049f1f) status_pane_g_ParamLimits

0xf7bd,	// (0x00049f1f) status_pane_g

0x9958,	// (0x000440ba) title_pane_ParamLimits

0x9958,	// (0x000440ba) title_pane

0x9995,	// (0x000440f7) uni_indicator_pane_ParamLimits

0x9995,	// (0x000440f7) uni_indicator_pane

0x8fb1,	// (0x00043713) bg_list_pane_ParamLimits

0x8fb1,	// (0x00043713) bg_list_pane

0x645c,	// (0x00040bbe) find_pane

0x8fd1,	// (0x00043733) listscroll_app_pane_ParamLimits

0x8fd1,	// (0x00043733) listscroll_app_pane

0x8fdd,	// (0x0004373f) listscroll_form_pane

0x6464,	// (0x00040bc6) listscroll_gen_pane_ParamLimits

0x6464,	// (0x00040bc6) listscroll_gen_pane

0x8fdd,	// (0x0004373f) listscroll_set_pane

0x8244,	// (0x000429a6) main_idle_act_pane

0x8c99,	// (0x000433fb) main_idle_trad_pane

0x8c99,	// (0x000433fb) main_list_empty_pane

0x8ff7,	// (0x00043759) main_midp_pane

0x9003,	// (0x00043765) main_pane_g1_ParamLimits

0x9003,	// (0x00043765) main_pane_g1

0x9011,	// (0x00043773) popup_ai_message_window_ParamLimits

0x9011,	// (0x00043773) popup_ai_message_window

0x90b3,	// (0x00043815) popup_fep_china_uni_window_ParamLimits

0x90b3,	// (0x00043815) popup_fep_china_uni_window

0x910f,	// (0x00043871) popup_fep_japan_candidate_window_ParamLimits

0x910f,	// (0x00043871) popup_fep_japan_candidate_window

0x912f,	// (0x00043891) popup_fep_japan_predictive_window_ParamLimits

0x912f,	// (0x00043891) popup_fep_japan_predictive_window

0x915f,	// (0x000438c1) popup_find_window

0x916c,	// (0x000438ce) popup_grid_graphic_window_ParamLimits

0x916c,	// (0x000438ce) popup_grid_graphic_window

0x9194,	// (0x000438f6) popup_large_graphic_colour_window

0x91ba,	// (0x0004391c) popup_menu_window_ParamLimits

0x91ba,	// (0x0004391c) popup_menu_window

0x9372,	// (0x00043ad4) popup_note_image_window

0x935e,	// (0x00043ac0) popup_note_wait_window_ParamLimits

0x935e,	// (0x00043ac0) popup_note_wait_window

0x935e,	// (0x00043ac0) popup_note_window_ParamLimits

0x935e,	// (0x00043ac0) popup_note_window

0x93c8,	// (0x00043b2a) popup_query_code_window_ParamLimits

0x93c8,	// (0x00043b2a) popup_query_code_window

0x93dc,	// (0x00043b3e) popup_query_data_code_window_ParamLimits

0x93dc,	// (0x00043b3e) popup_query_data_code_window

0x93f9,	// (0x00043b5b) popup_query_data_window_ParamLimits

0x93f9,	// (0x00043b5b) popup_query_data_window

0x9415,	// (0x00043b77) popup_query_sat_info_window_ParamLimits

0x9415,	// (0x00043b77) popup_query_sat_info_window

0x944e,	// (0x00043bb0) popup_snote_single_graphic_window_ParamLimits

0x944e,	// (0x00043bb0) popup_snote_single_graphic_window

0x944e,	// (0x00043bb0) popup_snote_single_text_window_ParamLimits

0x944e,	// (0x00043bb0) popup_snote_single_text_window

0x9463,	// (0x00043bc5) popup_sub_window_general

0x95b5,	// (0x00043d17) popup_window_general_ParamLimits

0x95b5,	// (0x00043d17) popup_window_general

0x95ca,	// (0x00043d2c) power_save_pane

0x630e,	// (0x00040a70) control_pane_g1_ParamLimits

0x630e,	// (0x00040a70) control_pane_g1

0x6335,	// (0x00040a97) control_pane_g2_ParamLimits

0x6335,	// (0x00040a97) control_pane_g2

0x8f62,	// (0x000436c4) control_pane_g3_ParamLimits

0x8f62,	// (0x000436c4) control_pane_g3

0x0007,

0xf7a5,	// (0x00049f07) control_pane_g_ParamLimits

0xf7a5,	// (0x00049f07) control_pane_g

0x637b,	// (0x00040add) control_pane_t1_ParamLimits

0x637b,	// (0x00040add) control_pane_t1

0x63c7,	// (0x00040b29) control_pane_t2_ParamLimits

0x63c7,	// (0x00040b29) control_pane_t2

0x0002,

0xf7b6,	// (0x00049f18) control_pane_t_ParamLimits

0xf7b6,	// (0x00049f18) control_pane_t

0x8e83,	// (0x000435e5) navi_navi_volume_pane_cp1

0x8e8c,	// (0x000435ee) status_small_icon_pane

0x8e94,	// (0x000435f6) status_small_pane_g1_ParamLimits

0x8e94,	// (0x000435f6) status_small_pane_g1

0x8ec8,	// (0x0004362a) status_small_pane_g2_ParamLimits

0x8ec8,	// (0x0004362a) status_small_pane_g2

0x8ed4,	// (0x00043636) status_small_pane_g3_ParamLimits

0x8ed4,	// (0x00043636) status_small_pane_g3

0x8ee0,	// (0x00043642) status_small_pane_g4_ParamLimits

0x8ee0,	// (0x00043642) status_small_pane_g4

0x8eec,	// (0x0004364e) status_small_pane_g5_ParamLimits

0x8eec,	// (0x0004364e) status_small_pane_g5

0x8efb,	// (0x0004365d) status_small_pane_g6_ParamLimits

0x8efb,	// (0x0004365d) status_small_pane_g6

0x0007,

0xf794,	// (0x00049ef6) status_small_pane_g_ParamLimits

0xf794,	// (0x00049ef6) status_small_pane_g

0x8f2b,	// (0x0004368d) status_small_pane_t1

0x8f4e,	// (0x000436b0) status_small_wait_pane_ParamLimits

0x8f4e,	// (0x000436b0) status_small_wait_pane

0x873c,	// (0x00042e9e) aid_levels_signal_ParamLimits

0x873c,	// (0x00042e9e) aid_levels_signal

0x874e,	// (0x00042eb0) signal_pane_g1_ParamLimits

0x874e,	// (0x00042eb0) signal_pane_g1

0x8763,	// (0x00042ec5) signal_pane_g2_ParamLimits

0x8763,	// (0x00042ec5) signal_pane_g2

0x0001,

0xf729,	// (0x00049e8b) signal_pane_g_ParamLimits

0xf729,	// (0x00049e8b) signal_pane_g

0x8778,	// (0x00042eda) context_pane_g1

0x7714,	// (0x00041e76) title_pane_g1

0x774a,	// (0x00041eac) title_pane_t1

0x77b2,	// (0x00041f14) title_pane_t2

0x77d8,	// (0x00041f3a) title_pane_t3

0x0002,

0xf573,	// (0x00049cd5) title_pane_t

0x99ad,	// (0x0004410f) aid_levels_battery_ParamLimits

0x99ad,	// (0x0004410f) aid_levels_battery

0x99c1,	// (0x00044123) battery_pane_g1_ParamLimits

0x99c1,	// (0x00044123) battery_pane_g1

0x99d7,	// (0x00044139) battery_pane_g2_ParamLimits

0x99d7,	// (0x00044139) battery_pane_g2

0x0001,

0xf7c8,	// (0x00049f2a) battery_pane_g_ParamLimits

0xf7c8,	// (0x00049f2a) battery_pane_g

0xac9d,	// (0x000453ff) uni_indicator_pane_g1

0xacb2,	// (0x00045414) uni_indicator_pane_g2

0xacc8,	// (0x0004542a) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004a099) uni_indicator_pane_g

0x8b17,	// (0x00043279) navi_icon_pane_ParamLimits

0x8b17,	// (0x00043279) navi_icon_pane

0x8a54,	// (0x000431b6) navi_midp_pane

0x8b33,	// (0x00043295) navi_navi_pane

0x8b3d,	// (0x0004329f) navi_text_pane_ParamLimits

0x8b3d,	// (0x0004329f) navi_text_pane

0x7700,	// (0x00041e62) status_small_wait_pane_g1

0x7c07,	// (0x00042369) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004a094) status_small_wait_pane_g

0xa9c2,	// (0x00045124) navi_navi_icon_text_pane

0xa9ca,	// (0x0004512c) navi_navi_pane_g1_ParamLimits

0xa9ca,	// (0x0004512c) navi_navi_pane_g1

0xa9dc,	// (0x0004513e) navi_navi_pane_g2_ParamLimits

0xa9dc,	// (0x0004513e) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004a062) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004a062) navi_navi_pane_g

0xa9ee,	// (0x00045150) navi_navi_tabs_pane

0xa9f7,	// (0x00045159) navi_navi_text_pane

0xa9c2,	// (0x00045124) navi_navi_volume_pane

0xa99b,	// (0x000450fd) navi_text_pane_t1

0xa98c,	// (0x000450ee) navi_icon_pane_g1

0xa8df,	// (0x00045041) navi_navi_text_pane_t1

0x670f,	// (0x00040e71) navi_navi_volume_pane_g1

0x6717,	// (0x00040e79) volume_small_pane

0xa845,	// (0x00044fa7) navi_navi_icon_text_pane_g1

0xa84d,	// (0x00044faf) navi_navi_icon_text_pane_t1

0x8b33,	// (0x00043295) navi_tabs_2_long_pane

0x8b33,	// (0x00043295) navi_tabs_2_pane

0x8b33,	// (0x00043295) navi_tabs_3_long_pane

0x8b33,	// (0x00043295) navi_tabs_3_pane

0x8b33,	// (0x00043295) navi_tabs_4_pane

0x66ef,	// (0x00040e51) tabs_2_active_pane_ParamLimits

0x66ef,	// (0x00040e51) tabs_2_active_pane

0x66ff,	// (0x00040e61) tabs_2_passive_pane_ParamLimits

0x66ff,	// (0x00040e61) tabs_2_passive_pane

0x66bd,	// (0x00040e1f) tabs_3_active_pane_ParamLimits

0x66bd,	// (0x00040e1f) tabs_3_active_pane

0x66cd,	// (0x00040e2f) tabs_3_passive_pane_ParamLimits

0x66cd,	// (0x00040e2f) tabs_3_passive_pane

0x66de,	// (0x00040e40) tabs_3_passive_pane_cp_ParamLimits

0x66de,	// (0x00040e40) tabs_3_passive_pane_cp

0x6679,	// (0x00040ddb) tabs_4_active_pane_ParamLimits

0x6679,	// (0x00040ddb) tabs_4_active_pane

0x668a,	// (0x00040dec) tabs_4_passive_pane_ParamLimits

0x668a,	// (0x00040dec) tabs_4_passive_pane

0x669b,	// (0x00040dfd) tabs_4_passive_pane_cp_ParamLimits

0x669b,	// (0x00040dfd) tabs_4_passive_pane_cp

0x66ac,	// (0x00040e0e) tabs_4_passive_pane_cp2_ParamLimits

0x66ac,	// (0x00040e0e) tabs_4_passive_pane_cp2

0x6655,	// (0x00040db7) tabs_2_long_active_pane_ParamLimits

0x6655,	// (0x00040db7) tabs_2_long_active_pane

0x6667,	// (0x00040dc9) tabs_2_long_passive_pane_ParamLimits

0x6667,	// (0x00040dc9) tabs_2_long_passive_pane

0x6616,	// (0x00040d78) tabs_3_long_active_pane_ParamLimits

0x6616,	// (0x00040d78) tabs_3_long_active_pane

0x6629,	// (0x00040d8b) tabs_3_long_passive_pane_ParamLimits

0x6629,	// (0x00040d8b) tabs_3_long_passive_pane

0x6642,	// (0x00040da4) tabs_3_long_passive_pane_cp_ParamLimits

0x6642,	// (0x00040da4) tabs_3_long_passive_pane_cp

0x65bc,	// (0x00040d1e) volume_small_pane_g1

0x65c5,	// (0x00040d27) volume_small_pane_g2

0x65ce,	// (0x00040d30) volume_small_pane_g3

0x65d7,	// (0x00040d39) volume_small_pane_g4

0x65e0,	// (0x00040d42) volume_small_pane_g5

0x65e9,	// (0x00040d4b) volume_small_pane_g6

0x65f2,	// (0x00040d54) volume_small_pane_g7

0x65fb,	// (0x00040d5d) volume_small_pane_g8

0x6604,	// (0x00040d66) volume_small_pane_g9

0x660d,	// (0x00040d6f) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004a02e) volume_small_pane_g

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp2_ParamLimits

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp2

0x77f8,	// (0x00041f5a) tabs_3_active_pane_g1

0x7800,	// (0x00041f62) tabs_3_active_pane_t1

0x77ea,	// (0x00041f4c) bg_passive_tab_pane_cp2_ParamLimits

0x77ea,	// (0x00041f4c) bg_passive_tab_pane_cp2

0x77f8,	// (0x00041f5a) tabs_3_passive_pane_g1

0x7800,	// (0x00041f62) tabs_3_passive_pane_t1

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp3_ParamLimits

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp3

0x7812,	// (0x00041f74) tabs_4_active_pane_g1

0x781a,	// (0x00041f7c) tabs_4_active_pane_t1

0x77ea,	// (0x00041f4c) bg_passive_tab_pane_cp3_ParamLimits

0x77ea,	// (0x00041f4c) bg_passive_tab_pane_cp3

0x7812,	// (0x00041f74) tabs_4_1_passive_pane_g1

0x781a,	// (0x00041f7c) tabs_4_1_passive_pane_t1

0x8ff7,	// (0x00043759) list_highlight_pane_cp2

0xaf26,	// (0x00045688) list_set_pane_ParamLimits

0xaf26,	// (0x00045688) list_set_pane

0xafcc,	// (0x0004572e) main_pane_set_t1_ParamLimits

0xafcc,	// (0x0004572e) main_pane_set_t1

0xafec,	// (0x0004574e) main_pane_set_t2_ParamLimits

0xafec,	// (0x0004574e) main_pane_set_t2

0xb000,	// (0x00045762) main_pane_set_t3_ParamLimits

0xb000,	// (0x00045762) main_pane_set_t3

0xb012,	// (0x00045774) main_pane_set_t4_ParamLimits

0xb012,	// (0x00045774) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004a0fe) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004a0fe) main_pane_set_t

0xb024,	// (0x00045786) setting_code_pane

0xb030,	// (0x00045792) setting_slider_graphic_pane

0xb030,	// (0x00045792) setting_slider_pane

0xb030,	// (0x00045792) setting_text_pane

0xb030,	// (0x00045792) setting_volume_pane

0x5d78,	// (0x000404da) volume_set_pane

0x77ea,	// (0x00041f4c) bg_set_opt_pane_cp

0x5d80,	// (0x000404e2) setting_slider_pane_t1

0x5d99,	// (0x000404fb) setting_slider_pane_t2

0x5db3,	// (0x00040515) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00049cdc) setting_slider_pane_t

0x5dcb,	// (0x0004052d) slider_set_pane

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp2

0x782c,	// (0x00041f8e) setting_slider_graphic_pane_g1

0x5de1,	// (0x00040543) setting_slider_graphic_pane_t1

0x5df1,	// (0x00040553) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00049ce3) setting_slider_graphic_pane_t

0x5e01,	// (0x00040563) slider_set_pane_cp

0x770a,	// (0x00041e6c) input_focus_pane_cp1

0xaee5,	// (0x00045647) list_set_text_pane

0x7700,	// (0x00041e62) setting_text_pane_g1

0x770a,	// (0x00041e6c) input_focus_pane_cp2

0x7700,	// (0x00041e62) setting_code_pane_g1

0x7835,	// (0x00041f97) setting_code_pane_t1

0x4bc8,	// (0x0003f32a) set_text_pane_t1_ParamLimits

0x4bc8,	// (0x0003f32a) set_text_pane_t1

0x80bd,	// (0x0004281f) set_opt_bg_pane_g1

0x80c5,	// (0x00042827) set_opt_bg_pane_g2

0xaebf,	// (0x00045621) set_opt_bg_pane_g3

0x80d5,	// (0x00042837) set_opt_bg_pane_g4

0x80dd,	// (0x0004283f) set_opt_bg_pane_g5

0x80e5,	// (0x00042847) set_opt_bg_pane_g6

0xaec9,	// (0x0004562b) set_opt_bg_pane_g7

0xaed1,	// (0x00045633) set_opt_bg_pane_g8

0xaedb,	// (0x0004563d) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004a0eb) set_opt_bg_pane_g

0xaeb2,	// (0x00045614) slider_set_pane_g1

0x6784,	// (0x00040ee6) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004a0dc) slider_set_pane_g

0x6720,	// (0x00040e82) volume_set_pane_g1

0x6728,	// (0x00040e8a) volume_set_pane_g2

0x6730,	// (0x00040e92) volume_set_pane_g3

0x6738,	// (0x00040e9a) volume_set_pane_g4

0x6740,	// (0x00040ea2) volume_set_pane_g5

0x6748,	// (0x00040eaa) volume_set_pane_g6

0x6750,	// (0x00040eb2) volume_set_pane_g7

0x6758,	// (0x00040eba) volume_set_pane_g8

0x6760,	// (0x00040ec2) volume_set_pane_g9

0x6768,	// (0x00040eca) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004a0b4) volume_set_pane_g

0x7843,	// (0x00041fa5) indicator_pane_ParamLimits

0x7843,	// (0x00041fa5) indicator_pane

0x784f,	// (0x00041fb1) main_idle_pane_g2_ParamLimits

0x784f,	// (0x00041fb1) main_idle_pane_g2

0x7877,	// (0x00041fd9) main_pane_idle_g1_ParamLimits

0x7877,	// (0x00041fd9) main_pane_idle_g1

0x7884,	// (0x00041fe6) popup_clock_digital_analogue_window_ParamLimits

0x7884,	// (0x00041fe6) popup_clock_digital_analogue_window

0x789b,	// (0x00041ffd) soft_indicator_pane_ParamLimits

0x789b,	// (0x00041ffd) soft_indicator_pane

0x78a7,	// (0x00042009) wallpaper_pane_ParamLimits

0x78a7,	// (0x00042009) wallpaper_pane

0x7700,	// (0x00041e62) wallpaper_pane_g1

0x78bb,	// (0x0004201d) indicator_pane_g1_ParamLimits

0x78bb,	// (0x0004201d) indicator_pane_g1

0xb299,	// (0x000459fb) navi_navi_icon_text_pane_srt_g1

0x78d6,	// (0x00042038) soft_indicator_pane_t1

0x78f0,	// (0x00042052) aid_ps_area_pane

0x7901,	// (0x00042063) aid_ps_clock_pane

0x790f,	// (0x00042071) aid_ps_indicator_pane

0x791b,	// (0x0004207d) indicator_ps_pane_ParamLimits

0x791b,	// (0x0004207d) indicator_ps_pane

0x792a,	// (0x0004208c) power_save_pane_g1_ParamLimits

0x792a,	// (0x0004208c) power_save_pane_g1

0x7936,	// (0x00042098) power_save_pane_g2_ParamLimits

0x7936,	// (0x00042098) power_save_pane_g2

0x5993,	// (0x000400f5) aid_navinavi_width_pane

0x78f0,	// (0x00042052) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00049ce8) power_save_pane_g_ParamLimits

0xf586,	// (0x00049ce8) power_save_pane_g

0x7944,	// (0x000420a6) power_save_pane_t1_ParamLimits

0x7944,	// (0x000420a6) power_save_pane_t1

0x7901,	// (0x00042063) aid_ps_clock_pane_ParamLimits

0x790f,	// (0x00042071) aid_ps_indicator_pane_ParamLimits

0x7956,	// (0x000420b8) power_save_pane_t4_ParamLimits

0x7956,	// (0x000420b8) power_save_pane_t4

0x0001,

0xf58b,	// (0x00049ced) power_save_pane_t_ParamLimits

0xf58b,	// (0x00049ced) power_save_pane_t

0x7980,	// (0x000420e2) power_save_t3_ParamLimits

0x7980,	// (0x000420e2) power_save_t3

0x796b,	// (0x000420cd) power_save_t2_ParamLimits

0x796b,	// (0x000420cd) power_save_t2

0x7995,	// (0x000420f7) indicator_ps_pane_g1

0x799e,	// (0x00042100) ai_gene_pane_ParamLimits

0x799e,	// (0x00042100) ai_gene_pane

0x79aa,	// (0x0004210c) ai_links_pane_ParamLimits

0x79aa,	// (0x0004210c) ai_links_pane

0x79b6,	// (0x00042118) indicator_pane_cp1_ParamLimits

0x79b6,	// (0x00042118) indicator_pane_cp1

0x79c2,	// (0x00042124) main_pane_idle_g1_cp_ParamLimits

0x79c2,	// (0x00042124) main_pane_idle_g1_cp

0x79ce,	// (0x00042130) popup_ai_links_title_window

0x79d7,	// (0x00042139) soft_indicator_pane_cp1_ParamLimits

0x79d7,	// (0x00042139) soft_indicator_pane_cp1

0xac8b,	// (0x000453ed) ai_links_pane_g1

0xac94,	// (0x000453f6) grid_ai_links_pane

0xac6e,	// (0x000453d0) ai_gene_pane_1

0xac79,	// (0x000453db) ai_gene_pane_2

0xac82,	// (0x000453e4) list_highlight_pane_cp4

0xac52,	// (0x000453b4) cell_ai_link_pane_ParamLimits

0xac52,	// (0x000453b4) cell_ai_link_pane

0xac4a,	// (0x000453ac) cell_ai_link_pane_g1

0x7c07,	// (0x00042369) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004a08f) cell_ai_link_pane_g

0x770a,	// (0x00041e6c) grid_highlight_cp2

0x770a,	// (0x00041e6c) bg_popup_sub_pane_cp1

0x79f1,	// (0x00042153) popup_ai_links_title_window_t1

0xab98,	// (0x000452fa) ai_gene_pane_1_g1_ParamLimits

0xab98,	// (0x000452fa) ai_gene_pane_1_g1

0xaba4,	// (0x00045306) ai_gene_pane_1_g2_ParamLimits

0xaba4,	// (0x00045306) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004a085) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004a085) ai_gene_pane_1_g

0xabb1,	// (0x00045313) ai_gene_pane_1_t1_ParamLimits

0xabb1,	// (0x00045313) ai_gene_pane_1_t1

0xabe5,	// (0x00045347) grid_ai_soft_ind_pane

0xab83,	// (0x000452e5) ai_gene_pane_2_t1_ParamLimits

0xab83,	// (0x000452e5) ai_gene_pane_2_t1

0x7a00,	// (0x00042162) main_pane_empty_t1_ParamLimits

0x7a00,	// (0x00042162) main_pane_empty_t1

0x7a18,	// (0x0004217a) main_pane_empty_t2_ParamLimits

0x7a18,	// (0x0004217a) main_pane_empty_t2

0x7a2d,	// (0x0004218f) main_pane_empty_t3_ParamLimits

0x7a2d,	// (0x0004218f) main_pane_empty_t3

0x7a3f,	// (0x000421a1) main_pane_empty_t4_ParamLimits

0x7a3f,	// (0x000421a1) main_pane_empty_t4

0x7a51,	// (0x000421b3) main_pane_empty_t5_ParamLimits

0x7a51,	// (0x000421b3) main_pane_empty_t5

0x0004,

0xf590,	// (0x00049cf2) main_pane_empty_t_ParamLimits

0xf590,	// (0x00049cf2) main_pane_empty_t

0x810e,	// (0x00042870) bg_popup_window_pane_ParamLimits

0x810e,	// (0x00042870) bg_popup_window_pane

0xa8ed,	// (0x0004504f) find_popup_pane_cp2_ParamLimits

0xa8ed,	// (0x0004504f) find_popup_pane_cp2

0xa8f9,	// (0x0004505b) heading_pane_ParamLimits

0xa8f9,	// (0x0004505b) heading_pane

0x770a,	// (0x00041e6c) bg_popup_sub_pane

0xa867,	// (0x00044fc9) bg_popup_window_pane_g1_ParamLimits

0xa867,	// (0x00044fc9) bg_popup_window_pane_g1

0xa873,	// (0x00044fd5) bg_popup_window_pane_g2_ParamLimits

0xa873,	// (0x00044fd5) bg_popup_window_pane_g2

0xa87f,	// (0x00044fe1) bg_popup_window_pane_g3_ParamLimits

0xa87f,	// (0x00044fe1) bg_popup_window_pane_g3

0xa88b,	// (0x00044fed) bg_popup_window_pane_g4_ParamLimits

0xa88b,	// (0x00044fed) bg_popup_window_pane_g4

0xa897,	// (0x00044ff9) bg_popup_window_pane_g5_ParamLimits

0xa897,	// (0x00044ff9) bg_popup_window_pane_g5

0xa8a3,	// (0x00045005) bg_popup_window_pane_g6_ParamLimits

0xa8a3,	// (0x00045005) bg_popup_window_pane_g6

0xa8af,	// (0x00045011) bg_popup_window_pane_g7_ParamLimits

0xa8af,	// (0x00045011) bg_popup_window_pane_g7

0xa8bb,	// (0x0004501d) bg_popup_window_pane_g8_ParamLimits

0xa8bb,	// (0x0004501d) bg_popup_window_pane_g8

0xa8c7,	// (0x00045029) bg_popup_window_pane_g9_ParamLimits

0xa8c7,	// (0x00045029) bg_popup_window_pane_g9

0xa8d3,	// (0x00045035) bg_popup_window_pane_g10_ParamLimits

0xa8d3,	// (0x00045035) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004a04d) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004a04d) bg_popup_window_pane_g

0xa7fc,	// (0x00044f5e) bg_popup_heading_pane_ParamLimits

0xa7fc,	// (0x00044f5e) bg_popup_heading_pane

0x68b0,	// (0x00041012) tabs_4_passive_pane_cp_srt_ParamLimits

0x68b0,	// (0x00041012) tabs_4_passive_pane_cp_srt

0x68c2,	// (0x00041024) tabs_4_passive_pane_srt_ParamLimits

0xa810,	// (0x00044f72) heading_pane_g2

0x68c2,	// (0x00041024) tabs_4_passive_pane_srt

0x8ff7,	// (0x00043759) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ff7,	// (0x00043759) bg_passive_tab_pane_cp3_srt

0xa818,	// (0x00044f7a) heading_pane_t1_ParamLimits

0xa818,	// (0x00044f7a) heading_pane_t1

0xa82f,	// (0x00044f91) heading_pane_t2_ParamLimits

0xa82f,	// (0x00044f91) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004a048) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004a048) heading_pane_t

0xa329,	// (0x00044a8b) bg_popup_heading_pane_g1

0xa3d8,	// (0x00044b3a) bg_popup_heading_pane_g2

0xa3e2,	// (0x00044b44) bg_popup_heading_pane_g3

0xa3ec,	// (0x00044b4e) bg_popup_heading_pane_g4

0xa3f6,	// (0x00044b58) bg_popup_heading_pane_g5

0xa400,	// (0x00044b62) bg_popup_heading_pane_g6

0xa408,	// (0x00044b6a) bg_popup_heading_pane_g7

0xa410,	// (0x00044b72) bg_popup_heading_pane_g8

0xa41a,	// (0x00044b7c) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004a004) bg_popup_heading_pane_g

0x9aaf,	// (0x00044211) bg_popup_sub_pane_g1

0x9ab7,	// (0x00044219) bg_popup_sub_pane_g2

0x9abf,	// (0x00044221) bg_popup_sub_pane_g3

0x9ac7,	// (0x00044229) bg_popup_sub_pane_g4

0x9acf,	// (0x00044231) bg_popup_sub_pane_g5

0x9ad7,	// (0x00044239) bg_popup_sub_pane_g6

0x9adf,	// (0x00044241) bg_popup_sub_pane_g7

0x9ae7,	// (0x00044249) bg_popup_sub_pane_g8

0x9aef,	// (0x00044251) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x00049fde) bg_popup_sub_pane_g

0x7a65,	// (0x000421c7) bg_popup_window_pane_cp5_ParamLimits

0x7a65,	// (0x000421c7) bg_popup_window_pane_cp5

0x7a81,	// (0x000421e3) popup_note_window_g1_ParamLimits

0x7a81,	// (0x000421e3) popup_note_window_g1

0x7a8d,	// (0x000421ef) popup_note_window_t1_ParamLimits

0x7a8d,	// (0x000421ef) popup_note_window_t1

0x7aa3,	// (0x00042205) popup_note_window_t2_ParamLimits

0x7aa3,	// (0x00042205) popup_note_window_t2

0x7ab9,	// (0x0004221b) popup_note_window_t3_ParamLimits

0x7ab9,	// (0x0004221b) popup_note_window_t3

0x7acf,	// (0x00042231) popup_note_window_t4_ParamLimits

0x7acf,	// (0x00042231) popup_note_window_t4

0x7af7,	// (0x00042259) popup_note_window_t5_ParamLimits

0x7af7,	// (0x00042259) popup_note_window_t5

0x0004,

0xf59b,	// (0x00049cfd) popup_note_window_t_ParamLimits

0xf59b,	// (0x00049cfd) popup_note_window_t

0x7b1b,	// (0x0004227d) bg_popup_window_pane_cp6_ParamLimits

0x7b1b,	// (0x0004227d) bg_popup_window_pane_cp6

0xa2a5,	// (0x00044a07) popup_note_image_window_g1_ParamLimits

0xa2a5,	// (0x00044a07) popup_note_image_window_g1

0xa2b1,	// (0x00044a13) popup_note_image_window_g2_ParamLimits

0xa2b1,	// (0x00044a13) popup_note_image_window_g2

0x0001,

0xf870,	// (0x00049fd2) popup_note_image_window_g_ParamLimits

0xf870,	// (0x00049fd2) popup_note_image_window_g

0xa2ca,	// (0x00044a2c) popup_note_image_window_t1_ParamLimits

0xa2ca,	// (0x00044a2c) popup_note_image_window_t1

0xa2e3,	// (0x00044a45) popup_note_image_window_t2_ParamLimits

0xa2e3,	// (0x00044a45) popup_note_image_window_t2

0xa2fc,	// (0x00044a5e) popup_note_image_window_t3_ParamLimits

0xa2fc,	// (0x00044a5e) popup_note_image_window_t3

0x0002,

0xf875,	// (0x00049fd7) popup_note_image_window_t_ParamLimits

0xf875,	// (0x00049fd7) popup_note_image_window_t

0xa166,	// (0x000448c8) bg_popup_window_pane_cp7_ParamLimits

0xa166,	// (0x000448c8) bg_popup_window_pane_cp7

0xa196,	// (0x000448f8) popup_note_wait_window_g1_ParamLimits

0xa196,	// (0x000448f8) popup_note_wait_window_g1

0xa1a2,	// (0x00044904) popup_note_wait_window_g2_ParamLimits

0xa1a2,	// (0x00044904) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x00049fc0) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x00049fc0) popup_note_wait_window_g

0xa1ba,	// (0x0004491c) popup_note_wait_window_t1_ParamLimits

0xa1ba,	// (0x0004491c) popup_note_wait_window_t1

0xa1e1,	// (0x00044943) popup_note_wait_window_t2_ParamLimits

0xa1e1,	// (0x00044943) popup_note_wait_window_t2

0xa1fe,	// (0x00044960) popup_note_wait_window_t3_ParamLimits

0xa1fe,	// (0x00044960) popup_note_wait_window_t3

0xa211,	// (0x00044973) popup_note_wait_window_t4_ParamLimits

0xa211,	// (0x00044973) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x00049fc7) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x00049fc7) popup_note_wait_window_t

0xa236,	// (0x00044998) wait_bar_pane_ParamLimits

0xa236,	// (0x00044998) wait_bar_pane

0x770a,	// (0x00041e6c) wait_anim_pane

0x770a,	// (0x00041e6c) wait_border_pane

0x7700,	// (0x00041e62) wait_anim_pane_g1

0x7700,	// (0x00041e62) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00049e86) wait_anim_pane_g

0xa10a,	// (0x0004486c) wait_border_pane_g1

0xa115,	// (0x00044877) wait_border_pane_g2

0xa11e,	// (0x00044880) wait_border_pane_g3

0x0002,

0xf857,	// (0x00049fb9) wait_border_pane_g

0x9f75,	// (0x000446d7) bg_popup_window_pane_cp16_ParamLimits

0x9f75,	// (0x000446d7) bg_popup_window_pane_cp16

0xa075,	// (0x000447d7) indicator_popup_pane_cp4_ParamLimits

0xa075,	// (0x000447d7) indicator_popup_pane_cp4

0xa089,	// (0x000447eb) popup_query_data_window_t1_ParamLimits

0xa089,	// (0x000447eb) popup_query_data_window_t1

0xa09b,	// (0x000447fd) popup_query_data_window_t2_ParamLimits

0xa09b,	// (0x000447fd) popup_query_data_window_t2

0xa0b4,	// (0x00044816) popup_query_data_window_t3_ParamLimits

0xa0b4,	// (0x00044816) popup_query_data_window_t3

0x0002,

0xf850,	// (0x00049fb2) popup_query_data_window_t_ParamLimits

0xf850,	// (0x00049fb2) popup_query_data_window_t

0xa0ce,	// (0x00044830) query_popup_data_pane_ParamLimits

0xa0ce,	// (0x00044830) query_popup_data_pane

0xa0e2,	// (0x00044844) query_popup_data_pane_cp1_ParamLimits

0xa0e2,	// (0x00044844) query_popup_data_pane_cp1

0x9f75,	// (0x000446d7) bg_popup_window_pane_cp10_ParamLimits

0x9f75,	// (0x000446d7) bg_popup_window_pane_cp10

0x9fa7,	// (0x00044709) indicator_popup_pane_ParamLimits

0x9fa7,	// (0x00044709) indicator_popup_pane

0x9fc9,	// (0x0004472b) popup_query_code_window_t1_ParamLimits

0x9fc9,	// (0x0004472b) popup_query_code_window_t1

0x9fe3,	// (0x00044745) popup_query_code_window_t2_ParamLimits

0x9fe3,	// (0x00044745) popup_query_code_window_t2

0xa02c,	// (0x0004478e) popup_query_code_window_t3_ParamLimits

0xa02c,	// (0x0004478e) popup_query_code_window_t3

0x0002,

0xf849,	// (0x00049fab) popup_query_code_window_t_ParamLimits

0xf849,	// (0x00049fab) popup_query_code_window_t

0xa05b,	// (0x000447bd) query_popup_pane_ParamLimits

0xa05b,	// (0x000447bd) query_popup_pane

0x7b1b,	// (0x0004227d) bg_popup_window_pane_cp15_ParamLimits

0x7b1b,	// (0x0004227d) bg_popup_window_pane_cp15

0x7b39,	// (0x0004229b) indicator_popup_pane_cp1_ParamLimits

0x7b39,	// (0x0004229b) indicator_popup_pane_cp1

0x7b4c,	// (0x000422ae) indicator_popup_pane_cp2_ParamLimits

0x7b4c,	// (0x000422ae) indicator_popup_pane_cp2

0x7b5f,	// (0x000422c1) popup_query_data_code_window_g1_ParamLimits

0x7b5f,	// (0x000422c1) popup_query_data_code_window_g1

0x7b72,	// (0x000422d4) popup_query_data_code_window_t1_ParamLimits

0x7b72,	// (0x000422d4) popup_query_data_code_window_t1

0x7b84,	// (0x000422e6) popup_query_data_code_window_t2_ParamLimits

0x7b84,	// (0x000422e6) popup_query_data_code_window_t2

0x7b96,	// (0x000422f8) popup_query_data_code_window_t3_ParamLimits

0x7b96,	// (0x000422f8) popup_query_data_code_window_t3

0x7bac,	// (0x0004230e) popup_query_data_code_window_t4_ParamLimits

0x7bac,	// (0x0004230e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00049d08) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00049d08) popup_query_data_code_window_t

0x64d9,	// (0x00040c3b) list_single_midp_graphic_pane_g3

0x7bc4,	// (0x00042326) query_popup_data_pane_cp2_ParamLimits

0x7bd7,	// (0x00042339) query_popup_pane_cp2_ParamLimits

0x7bd7,	// (0x00042339) query_popup_pane_cp2

0x770a,	// (0x00041e6c) bg_popup_window_pane_cp11

0x9f6d,	// (0x000446cf) heading_pane_cp5

0x7cbf,	// (0x00042421) listscroll_popup_info_pane

0x770a,	// (0x00041e6c) input_focus_pane_cp3

0x7bea,	// (0x0004234c) query_popup_pane_t1

0x7bf8,	// (0x0004235a) list_popup_info_pane_ParamLimits

0x7bf8,	// (0x0004235a) list_popup_info_pane

0x7c07,	// (0x00042369) listscroll_popup_info_pane_g1

0x7c0f,	// (0x00042371) scroll_pane_cp7

0x7c19,	// (0x0004237b) popup_info_list_pane_t1_ParamLimits

0x7c19,	// (0x0004237b) popup_info_list_pane_t1

0x7c33,	// (0x00042395) popup_info_list_pane_t2_ParamLimits

0x7c33,	// (0x00042395) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00049d11) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00049d11) popup_info_list_pane_t

0x770a,	// (0x00041e6c) bg_popup_window_pane_cp12

0xb2b3,	// (0x00045a15) find_popup_pane

0x77ea,	// (0x00041f4c) bg_popup_window_pane_cp3

0x7c4d,	// (0x000423af) heading_pane_cp3

0x7c59,	// (0x000423bb) listscroll_popup_graphic_pane

0x770a,	// (0x00041e6c) bg_popup_window_pane_cp4

0x7cb5,	// (0x00042417) heading_pane_cp4

0x7cbf,	// (0x00042421) listscroll_popup_colour_pane

0x7cc7,	// (0x00042429) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7cc7,	// (0x00042429) cell_large_graphic_colour_none_popup_pane

0x7cdb,	// (0x0004243d) grid_large_graphic_colour_popup_pane_ParamLimits

0x7cdb,	// (0x0004243d) grid_large_graphic_colour_popup_pane

0x7d07,	// (0x00042469) listscroll_popup_colour_pane_g1_ParamLimits

0x7d07,	// (0x00042469) listscroll_popup_colour_pane_g1

0x7d1e,	// (0x00042480) listscroll_popup_colour_pane_g2_ParamLimits

0x7d1e,	// (0x00042480) listscroll_popup_colour_pane_g2

0x7d35,	// (0x00042497) listscroll_popup_colour_pane_g3_ParamLimits

0x7d35,	// (0x00042497) listscroll_popup_colour_pane_g3

0x7d45,	// (0x000424a7) listscroll_popup_colour_pane_g4_ParamLimits

0x7d45,	// (0x000424a7) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00049d16) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00049d16) listscroll_popup_colour_pane_g

0x7d59,	// (0x000424bb) scroll_pane_cp6_ParamLimits

0x7d59,	// (0x000424bb) scroll_pane_cp6

0x7d6b,	// (0x000424cd) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d6b,	// (0x000424cd) cell_large_graphic_colour_popup_pane

0x7d8a,	// (0x000424ec) cell_large_graphic_colour_none_popup_pane_t1

0x770a,	// (0x00041e6c) grid_highlight_pane_cp5

0x7d99,	// (0x000424fb) cell_large_graphic_colour_popup_pane_g1

0x7da1,	// (0x00042503) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00049d1f) cell_large_graphic_colour_popup_pane_g

0x7da9,	// (0x0004250b) cell_large_graphic_colour_popup_pane_g2_copy1

0x7db2,	// (0x00042514) grid_highlight_pane_cp4

0x7dba,	// (0x0004251c) bg_popup_window_pane_cp8_ParamLimits

0x7dba,	// (0x0004251c) bg_popup_window_pane_cp8

0x7dd5,	// (0x00042537) popup_snote_single_text_window_g1_ParamLimits

0x7dd5,	// (0x00042537) popup_snote_single_text_window_g1

0x7de7,	// (0x00042549) popup_snote_single_text_window_t1_ParamLimits

0x7de7,	// (0x00042549) popup_snote_single_text_window_t1

0x7dfa,	// (0x0004255c) popup_snote_single_text_window_t2_ParamLimits

0x7dfa,	// (0x0004255c) popup_snote_single_text_window_t2

0x7e0d,	// (0x0004256f) popup_snote_single_text_window_t3_ParamLimits

0x7e0d,	// (0x0004256f) popup_snote_single_text_window_t3

0x7e46,	// (0x000425a8) popup_snote_single_text_window_t4_ParamLimits

0x7e46,	// (0x000425a8) popup_snote_single_text_window_t4

0x7e7a,	// (0x000425dc) popup_snote_single_text_window_t5_ParamLimits

0x7e7a,	// (0x000425dc) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00049d24) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00049d24) popup_snote_single_text_window_t

0x7ea9,	// (0x0004260b) bg_popup_window_pane_cp9_ParamLimits

0x7ea9,	// (0x0004260b) bg_popup_window_pane_cp9

0x7dd5,	// (0x00042537) popup_snote_single_graphic_window_g1_ParamLimits

0x7dd5,	// (0x00042537) popup_snote_single_graphic_window_g1

0x7eb7,	// (0x00042619) popup_snote_single_graphic_window_g2_ParamLimits

0x7eb7,	// (0x00042619) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00049d2f) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00049d2f) popup_snote_single_graphic_window_g

0x7ec3,	// (0x00042625) popup_snote_single_graphic_window_t1_ParamLimits

0x7ec3,	// (0x00042625) popup_snote_single_graphic_window_t1

0x7ed6,	// (0x00042638) popup_snote_single_graphic_window_t2_ParamLimits

0x7ed6,	// (0x00042638) popup_snote_single_graphic_window_t2

0x7ee9,	// (0x0004264b) popup_snote_single_graphic_window_t3_ParamLimits

0x7ee9,	// (0x0004264b) popup_snote_single_graphic_window_t3

0x7f22,	// (0x00042684) popup_snote_single_graphic_window_t4_ParamLimits

0x7f22,	// (0x00042684) popup_snote_single_graphic_window_t4

0x7f56,	// (0x000426b8) popup_snote_single_graphic_window_t5_ParamLimits

0x7f56,	// (0x000426b8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00049d34) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00049d34) popup_snote_single_graphic_window_t

0xb1f7,	// (0x00045959) grid_graphic_popup_pane_ParamLimits

0xb1f7,	// (0x00045959) grid_graphic_popup_pane

0xb21f,	// (0x00045981) listscroll_popup_graphic_pane_g1_ParamLimits

0xb21f,	// (0x00045981) listscroll_popup_graphic_pane_g1

0xb233,	// (0x00045995) listscroll_popup_graphic_pane_g2_ParamLimits

0xb233,	// (0x00045995) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004a128) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004a128) listscroll_popup_graphic_pane_g

0xb247,	// (0x000459a9) scroll_pane_cp5

0xb1a0,	// (0x00045902) cell_graphic_popup_pane_ParamLimits

0xb1a0,	// (0x00045902) cell_graphic_popup_pane

0xb181,	// (0x000458e3) cell_graphic_popup_pane_g1

0xb189,	// (0x000458eb) cell_graphic_popup_pane_g2

0x7da9,	// (0x0004250b) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004a121) cell_graphic_popup_pane_g

0xb192,	// (0x000458f4) cell_graphic_popup_pane_t2

0x7db2,	// (0x00042514) grid_highlight_pane_cp3

0x7f97,	// (0x000426f9) list_gen_pane_ParamLimits

0x7f97,	// (0x000426f9) list_gen_pane

0x7fc9,	// (0x0004272b) scroll_pane

0xb0e3,	// (0x00045845) bg_list_pane_g1_ParamLimits

0xb0e3,	// (0x00045845) bg_list_pane_g1

0xb0fe,	// (0x00045860) bg_list_pane_g2_ParamLimits

0xb0fe,	// (0x00045860) bg_list_pane_g2

0xb111,	// (0x00045873) bg_list_pane_g3_ParamLimits

0xb111,	// (0x00045873) bg_list_pane_g3

0xb123,	// (0x00045885) bg_list_pane_g4_ParamLimits

0xb123,	// (0x00045885) bg_list_pane_g4

0xb135,	// (0x00045897) bg_list_pane_g5_ParamLimits

0xb135,	// (0x00045897) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004a116) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004a116) bg_list_pane_g

0x54e6,	// (0x0003fc48) list_double2_graphic_large_graphic_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double2_graphic_large_graphic_pane

0x54e6,	// (0x0003fc48) list_double2_graphic_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double2_graphic_pane

0x54e6,	// (0x0003fc48) list_double2_large_graphic_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double2_large_graphic_pane

0xb0c8,	// (0x0004582a) list_double2_pane_ParamLimits

0xb0c8,	// (0x0004582a) list_double2_pane

0x54e6,	// (0x0003fc48) list_double_graphic_heading_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_graphic_heading_pane

0x54e6,	// (0x0003fc48) list_double_graphic_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_graphic_pane

0x54e6,	// (0x0003fc48) list_double_heading_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_heading_pane

0x54e6,	// (0x0003fc48) list_double_large_graphic_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_large_graphic_pane

0x54e6,	// (0x0003fc48) list_double_number_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_number_pane

0x54e6,	// (0x0003fc48) list_double_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_pane

0x54e6,	// (0x0003fc48) list_double_time_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_double_time_pane

0x54e6,	// (0x0003fc48) list_setting_number_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_setting_number_pane

0x54e6,	// (0x0003fc48) list_setting_pane_ParamLimits

0x54e6,	// (0x0003fc48) list_setting_pane

0x6817,	// (0x00040f79) list_single_2graphic_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_2graphic_pane

0x6817,	// (0x00040f79) list_single_graphic_heading_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_graphic_heading_pane

0x6817,	// (0x00040f79) list_single_graphic_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_graphic_pane

0x6817,	// (0x00040f79) list_single_heading_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_heading_pane

0x686d,	// (0x00040fcf) list_single_large_graphic_pane_ParamLimits

0x686d,	// (0x00040fcf) list_single_large_graphic_pane

0x6817,	// (0x00040f79) list_single_number_heading_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_number_heading_pane

0x6817,	// (0x00040f79) list_single_number_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_number_pane

0x6817,	// (0x00040f79) list_single_pane_ParamLimits

0x6817,	// (0x00040f79) list_single_pane

0x770a,	// (0x00041e6c) list_highlight_pane_cp1

0x5e09,	// (0x0004056b) list_single_pane_g1_ParamLimits

0x5e09,	// (0x0004056b) list_single_pane_g1

0x5e15,	// (0x00040577) list_single_pane_g2_ParamLimits

0x5e15,	// (0x00040577) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00049d50) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00049d50) list_single_pane_g

0x54d0,	// (0x0003fc32) list_single_pane_t1_ParamLimits

0x54d0,	// (0x0003fc32) list_single_pane_t1

0x5e09,	// (0x0004056b) list_single_number_pane_g1_ParamLimits

0x5e09,	// (0x0004056b) list_single_number_pane_g1

0x5e15,	// (0x00040577) list_single_number_pane_g2_ParamLimits

0x5e15,	// (0x00040577) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00049d50) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00049d50) list_single_number_pane_g

0x5478,	// (0x0003fbda) list_single_number_pane_t1_ParamLimits

0x5478,	// (0x0003fbda) list_single_number_pane_t1

0x548e,	// (0x0003fbf0) list_single_number_pane_t2_ParamLimits

0x548e,	// (0x0003fbf0) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004a0d7) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004a0d7) list_single_number_pane_t

0x4be1,	// (0x0003f343) list_single_graphic_pane_g1_ParamLimits

0x4be1,	// (0x0003f343) list_single_graphic_pane_g1

0x5e09,	// (0x0004056b) list_single_graphic_pane_g2_ParamLimits

0x5e09,	// (0x0004056b) list_single_graphic_pane_g2

0x5e15,	// (0x00040577) list_single_graphic_pane_g3_ParamLimits

0x5e15,	// (0x00040577) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00049d3f) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00049d3f) list_single_graphic_pane_g

0x4bed,	// (0x0003f34f) list_single_graphic_pane_t1_ParamLimits

0x4bed,	// (0x0003f34f) list_single_graphic_pane_t1

0x4c03,	// (0x0003f365) list_single_heading_pane_g1_ParamLimits

0x4c03,	// (0x0003f365) list_single_heading_pane_g1

0x5e15,	// (0x00040577) list_single_heading_pane_g2_ParamLimits

0x5e15,	// (0x00040577) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00049d46) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00049d46) list_single_heading_pane_g

0x4c16,	// (0x0003f378) list_single_heading_pane_t1_ParamLimits

0x4c16,	// (0x0003f378) list_single_heading_pane_t1

0x5e21,	// (0x00040583) list_single_heading_pane_t2_ParamLimits

0x5e21,	// (0x00040583) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00049d4b) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00049d4b) list_single_heading_pane_t

0x5e09,	// (0x0004056b) list_single_number_heading_pane_g1_ParamLimits

0x5e09,	// (0x0004056b) list_single_number_heading_pane_g1

0x5e15,	// (0x00040577) list_single_number_heading_pane_g2_ParamLimits

0x5e15,	// (0x00040577) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00049d50) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00049d50) list_single_number_heading_pane_g

0x4c2c,	// (0x0003f38e) list_single_number_heading_pane_t1_ParamLimits

0x4c2c,	// (0x0003f38e) list_single_number_heading_pane_t1

0x4c42,	// (0x0003f3a4) list_single_number_heading_pane_t2_ParamLimits

0x4c42,	// (0x0003f3a4) list_single_number_heading_pane_t2

0x4c54,	// (0x0003f3b6) list_single_number_heading_pane_t3_ParamLimits

0x4c54,	// (0x0003f3b6) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00049d55) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00049d55) list_single_number_heading_pane_t

0x4c66,	// (0x0003f3c8) list_single_graphic_heading_pane_g1_ParamLimits

0x4c66,	// (0x0003f3c8) list_single_graphic_heading_pane_g1

0x5e33,	// (0x00040595) list_single_graphic_heading_pane_g4_ParamLimits

0x5e33,	// (0x00040595) list_single_graphic_heading_pane_g4

0x5e15,	// (0x00040577) list_single_graphic_heading_pane_g5_ParamLimits

0x5e15,	// (0x00040577) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00049d5c) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00049d5c) list_single_graphic_heading_pane_g

0x4c2c,	// (0x0003f38e) list_single_graphic_heading_pane_t1_ParamLimits

0x4c2c,	// (0x0003f38e) list_single_graphic_heading_pane_t1

0x4c7e,	// (0x0003f3e0) list_single_graphic_heading_pane_t2_ParamLimits

0x4c7e,	// (0x0003f3e0) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x00049d63) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x00049d63) list_single_graphic_heading_pane_t

0x5e44,	// (0x000405a6) list_single_large_graphic_pane_g1_ParamLimits

0x5e44,	// (0x000405a6) list_single_large_graphic_pane_g1

0x5e50,	// (0x000405b2) list_single_large_graphic_pane_g2_ParamLimits

0x5e50,	// (0x000405b2) list_single_large_graphic_pane_g2

0x5e5c,	// (0x000405be) list_single_large_graphic_pane_g3_ParamLimits

0x5e5c,	// (0x000405be) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00049d68) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00049d68) list_single_large_graphic_pane_g

0xa115,	// (0x00044877) wait_border_pane_g2_copy1

0x5e68,	// (0x000405ca) list_single_large_graphic_pane_g4_cp2

0x4c94,	// (0x0003f3f6) list_single_large_graphic_pane_t1_ParamLimits

0x4c94,	// (0x0003f3f6) list_single_large_graphic_pane_t1

0x8af9,	// (0x0004325b) list_double_pane_g1_ParamLimits

0x8af9,	// (0x0004325b) list_double_pane_g1

0x4caa,	// (0x0003f40c) list_double_pane_g2_ParamLimits

0x4caa,	// (0x0003f40c) list_double_pane_g2

0x0001,

0xf60d,	// (0x00049d6f) list_double_pane_g_ParamLimits

0xf60d,	// (0x00049d6f) list_double_pane_g

0x4cb6,	// (0x0003f418) list_double_pane_t1_ParamLimits

0x4cb6,	// (0x0003f418) list_double_pane_t1

0x4ccc,	// (0x0003f42e) list_double_pane_t2_ParamLimits

0x4ccc,	// (0x0003f42e) list_double_pane_t2

0x0001,

0xf612,	// (0x00049d74) list_double_pane_t_ParamLimits

0xf612,	// (0x00049d74) list_double_pane_t

0x4cde,	// (0x0003f440) list_double2_pane_g1_ParamLimits

0x4cde,	// (0x0003f440) list_double2_pane_g1

0x4cef,	// (0x0003f451) list_double2_pane_g2_ParamLimits

0x4cef,	// (0x0003f451) list_double2_pane_g2

0x0001,

0xf617,	// (0x00049d79) list_double2_pane_g_ParamLimits

0xf617,	// (0x00049d79) list_double2_pane_g

0x4cfb,	// (0x0003f45d) list_double2_pane_t1_ParamLimits

0x4cfb,	// (0x0003f45d) list_double2_pane_t1

0x4d11,	// (0x0003f473) list_double2_pane_t2_ParamLimits

0x4d11,	// (0x0003f473) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00049d7e) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00049d7e) list_double2_pane_t

0x8af9,	// (0x0004325b) list_double_number_pane_g1_ParamLimits

0x8af9,	// (0x0004325b) list_double_number_pane_g1

0x4caa,	// (0x0003f40c) list_double_number_pane_g2_ParamLimits

0x4caa,	// (0x0003f40c) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00049d6f) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00049d6f) list_double_number_pane_g

0x4d23,	// (0x0003f485) list_double_number_pane_t1_ParamLimits

0x4d23,	// (0x0003f485) list_double_number_pane_t1

0x4d35,	// (0x0003f497) list_double_number_pane_t2_ParamLimits

0x4d35,	// (0x0003f497) list_double_number_pane_t2

0x4d4b,	// (0x0003f4ad) list_double_number_pane_t3_ParamLimits

0x4d4b,	// (0x0003f4ad) list_double_number_pane_t3

0x0002,

0xf621,	// (0x00049d83) list_double_number_pane_t_ParamLimits

0xf621,	// (0x00049d83) list_double_number_pane_t

0x4d5d,	// (0x0003f4bf) list_double_graphic_pane_g1_ParamLimits

0x4d5d,	// (0x0003f4bf) list_double_graphic_pane_g1

0xa92f,	// (0x00045091) list_double_graphic_pane_g2_ParamLimits

0xa92f,	// (0x00045091) list_double_graphic_pane_g2

0x4d69,	// (0x0003f4cb) list_double_graphic_pane_g3_ParamLimits

0x4d69,	// (0x0003f4cb) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00049d8a) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00049d8a) list_double_graphic_pane_g

0x4d81,	// (0x0003f4e3) list_double_graphic_pane_t1_ParamLimits

0x4d81,	// (0x0003f4e3) list_double_graphic_pane_t1

0x4d97,	// (0x0003f4f9) list_double_graphic_pane_t2_ParamLimits

0x4d97,	// (0x0003f4f9) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x00049d93) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x00049d93) list_double_graphic_pane_t

0x4da9,	// (0x0003f50b) list_double2_graphic_pane_g1_ParamLimits

0x4da9,	// (0x0003f50b) list_double2_graphic_pane_g1

0x4db5,	// (0x0003f517) list_double2_graphic_pane_g2_ParamLimits

0x4db5,	// (0x0003f517) list_double2_graphic_pane_g2

0x4dc1,	// (0x0003f523) list_double2_graphic_pane_g3_ParamLimits

0x4dc1,	// (0x0003f523) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00049d98) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00049d98) list_double2_graphic_pane_g

0x4dcd,	// (0x0003f52f) list_double2_graphic_pane_t1_ParamLimits

0x4dcd,	// (0x0003f52f) list_double2_graphic_pane_t1

0x4de3,	// (0x0003f545) list_double2_graphic_pane_t2_ParamLimits

0x4de3,	// (0x0003f545) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049d9f) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049d9f) list_double2_graphic_pane_t

0x4df5,	// (0x0003f557) list_double_large_graphic_pane_g1_ParamLimits

0x4df5,	// (0x0003f557) list_double_large_graphic_pane_g1

0x4e1e,	// (0x0003f580) list_double_large_graphic_pane_g2_ParamLimits

0x4e1e,	// (0x0003f580) list_double_large_graphic_pane_g2

0x4caa,	// (0x0003f40c) list_double_large_graphic_pane_g3_ParamLimits

0x4caa,	// (0x0003f40c) list_double_large_graphic_pane_g3

0x4e34,	// (0x0003f596) list_double_large_graphic_pane_g4_ParamLimits

0x4e34,	// (0x0003f596) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00049da4) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00049da4) list_double_large_graphic_pane_g

0x4e45,	// (0x0003f5a7) list_double_large_graphic_pane_t1_ParamLimits

0x4e45,	// (0x0003f5a7) list_double_large_graphic_pane_t1

0x4e5e,	// (0x0003f5c0) list_double_large_graphic_pane_t2_ParamLimits

0x4e5e,	// (0x0003f5c0) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00049daf) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00049daf) list_double_large_graphic_pane_t

0x4e70,	// (0x0003f5d2) list_double2_large_graphic_pane_g1_ParamLimits

0x4e70,	// (0x0003f5d2) list_double2_large_graphic_pane_g1

0x4e7c,	// (0x0003f5de) list_double2_large_graphic_pane_g2_ParamLimits

0x4e7c,	// (0x0003f5de) list_double2_large_graphic_pane_g2

0x4dc1,	// (0x0003f523) list_double2_large_graphic_pane_g3_ParamLimits

0x4dc1,	// (0x0003f523) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00049db4) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00049db4) list_double2_large_graphic_pane_g

0x4e8d,	// (0x0003f5ef) list_double2_large_graphic_pane_t1_ParamLimits

0x4e8d,	// (0x0003f5ef) list_double2_large_graphic_pane_t1

0x4ea3,	// (0x0003f605) list_double2_large_graphic_pane_t2_ParamLimits

0x4ea3,	// (0x0003f605) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00049dbb) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00049dbb) list_double2_large_graphic_pane_t

0x4eb5,	// (0x0003f617) list_double_heading_pane_g1_ParamLimits

0x4eb5,	// (0x0003f617) list_double_heading_pane_g1

0x4ec6,	// (0x0003f628) list_double_heading_pane_g2_ParamLimits

0x4ec6,	// (0x0003f628) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00049dc0) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00049dc0) list_double_heading_pane_g

0x4ed2,	// (0x0003f634) list_double_heading_pane_t1_ParamLimits

0x4ed2,	// (0x0003f634) list_double_heading_pane_t1

0x4ee8,	// (0x0003f64a) list_double_heading_pane_t2_ParamLimits

0x4ee8,	// (0x0003f64a) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00049dc5) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00049dc5) list_double_heading_pane_t

0x4da9,	// (0x0003f50b) list_double_graphic_heading_pane_g1_ParamLimits

0x4da9,	// (0x0003f50b) list_double_graphic_heading_pane_g1

0x4eb5,	// (0x0003f617) list_double_graphic_heading_pane_g2_ParamLimits

0x4eb5,	// (0x0003f617) list_double_graphic_heading_pane_g2

0x4ec6,	// (0x0003f628) list_double_graphic_heading_pane_g3_ParamLimits

0x4ec6,	// (0x0003f628) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00049dca) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00049dca) list_double_graphic_heading_pane_g

0x4efa,	// (0x0003f65c) list_double_graphic_heading_pane_t1_ParamLimits

0x4efa,	// (0x0003f65c) list_double_graphic_heading_pane_t1

0x4de3,	// (0x0003f545) list_double_graphic_heading_pane_t2_ParamLimits

0x4de3,	// (0x0003f545) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00049dd1) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00049dd1) list_double_graphic_heading_pane_t

0x4f10,	// (0x0003f672) list_double_time_pane_g1_ParamLimits

0x4f10,	// (0x0003f672) list_double_time_pane_g1

0x4f21,	// (0x0003f683) list_double_time_pane_g2_ParamLimits

0x4f21,	// (0x0003f683) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00049dd6) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00049dd6) list_double_time_pane_g

0x4f2d,	// (0x0003f68f) list_double_time_pane_t1_ParamLimits

0x4f2d,	// (0x0003f68f) list_double_time_pane_t1

0x4f43,	// (0x0003f6a5) list_double_time_pane_t2_ParamLimits

0x4f43,	// (0x0003f6a5) list_double_time_pane_t2

0x4f55,	// (0x0003f6b7) list_double_time_pane_t3_ParamLimits

0x4f55,	// (0x0003f6b7) list_double_time_pane_t3

0x4f67,	// (0x0003f6c9) list_double_time_pane_t4_ParamLimits

0x4f67,	// (0x0003f6c9) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00049ddb) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00049ddb) list_double_time_pane_t

0x4f79,	// (0x0003f6db) list_setting_pane_g1_ParamLimits

0x4f79,	// (0x0003f6db) list_setting_pane_g1

0x4f85,	// (0x0003f6e7) list_setting_pane_g2_ParamLimits

0x4f85,	// (0x0003f6e7) list_setting_pane_g2

0x0001,

0xf682,	// (0x00049de4) list_setting_pane_g_ParamLimits

0xf682,	// (0x00049de4) list_setting_pane_g

0x4f91,	// (0x0003f6f3) list_setting_pane_t1_ParamLimits

0x4f91,	// (0x0003f6f3) list_setting_pane_t1

0x4fab,	// (0x0003f70d) list_setting_pane_t2_ParamLimits

0x4fab,	// (0x0003f70d) list_setting_pane_t2

0x0002,

0xf687,	// (0x00049de9) list_setting_pane_t_ParamLimits

0xf687,	// (0x00049de9) list_setting_pane_t

0x4fea,	// (0x0003f74c) set_value_pane_cp_ParamLimits

0x4fea,	// (0x0003f74c) set_value_pane_cp

0x4ff6,	// (0x0003f758) list_setting_number_pane_g1_ParamLimits

0x4ff6,	// (0x0003f758) list_setting_number_pane_g1

0x5002,	// (0x0003f764) list_setting_number_pane_g2_ParamLimits

0x5002,	// (0x0003f764) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00049df0) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00049df0) list_setting_number_pane_g

0x500e,	// (0x0003f770) list_setting_number_pane_t1_ParamLimits

0x500e,	// (0x0003f770) list_setting_number_pane_t1

0x5027,	// (0x0003f789) list_setting_number_pane_t2_ParamLimits

0x5027,	// (0x0003f789) list_setting_number_pane_t2

0x5041,	// (0x0003f7a3) list_setting_number_pane_t3_ParamLimits

0x5041,	// (0x0003f7a3) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00049df5) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00049df5) list_setting_number_pane_t

0x4fea,	// (0x0003f74c) set_value_pane_ParamLimits

0x4fea,	// (0x0003f74c) set_value_pane

0x7ffd,	// (0x0004275f) bg_set_opt_pane_ParamLimits

0x7ffd,	// (0x0004275f) bg_set_opt_pane

0x5084,	// (0x0003f7e6) set_value_pane_t1

0x801e,	// (0x00042780) slider_set_pane_cp3

0x8027,	// (0x00042789) volume_small_pane_cp

0x8030,	// (0x00042792) list_form_gen_pane

0x8039,	// (0x0004279b) scroll_pane_cp8

0x509a,	// (0x0003f7fc) form_field_data_pane_ParamLimits

0x509a,	// (0x0003f7fc) form_field_data_pane

0x50be,	// (0x0003f820) form_field_data_wide_pane_ParamLimits

0x50be,	// (0x0003f820) form_field_data_wide_pane

0x50e1,	// (0x0003f843) form_field_popup_pane_ParamLimits

0x50e1,	// (0x0003f843) form_field_popup_pane

0x5101,	// (0x0003f863) form_field_popup_wide_pane_ParamLimits

0x5101,	// (0x0003f863) form_field_popup_wide_pane

0x5120,	// (0x0003f882) form_field_slider_pane_ParamLimits

0x5120,	// (0x0003f882) form_field_slider_pane

0x5133,	// (0x0003f895) form_field_slider_wide_pane_ParamLimits

0x5133,	// (0x0003f895) form_field_slider_wide_pane

0x804a,	// (0x000427ac) data_form_pane

0x5150,	// (0x0003f8b2) form_field_data_pane_t1

0x8056,	// (0x000427b8) input_focus_pane

0x8064,	// (0x000427c6) data_form_wide_pane

0x5174,	// (0x0003f8d6) form_field_data_wide_pane_t1

0x7dc7,	// (0x00042529) input_focus_pane_cp6

0x5196,	// (0x0003f8f8) form_field_popup_pane_t1

0x8056,	// (0x000427b8) input_focus_pane_cp7

0x8090,	// (0x000427f2) list_form_pane

0x51b6,	// (0x0003f918) form_field_popup_wide_pane_t1

0x8056,	// (0x000427b8) input_focus_pane_cp8

0x809c,	// (0x000427fe) list_form_wide_pane

0x51d3,	// (0x0003f935) form_field_slider_pane_t1_ParamLimits

0x51d3,	// (0x0003f935) form_field_slider_pane_t1

0x51e9,	// (0x0003f94b) form_field_slider_pane_t2_ParamLimits

0x51e9,	// (0x0003f94b) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00049e05) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00049e05) form_field_slider_pane_t

0x7a65,	// (0x000421c7) input_focus_pane_cp9_ParamLimits

0x7a65,	// (0x000421c7) input_focus_pane_cp9

0x51fe,	// (0x0003f960) slider_cont_pane_ParamLimits

0x51fe,	// (0x0003f960) slider_cont_pane

0x80ab,	// (0x0004280d) form_field_slider_wide_pane_t1_ParamLimits

0x80ab,	// (0x0004280d) form_field_slider_wide_pane_t1

0x5212,	// (0x0003f974) form_field_slider_wide_pane_t2_ParamLimits

0x5212,	// (0x0003f974) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00049e0a) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00049e0a) form_field_slider_wide_pane_t

0x7a65,	// (0x000421c7) input_focus_pane_cp10_ParamLimits

0x7a65,	// (0x000421c7) input_focus_pane_cp10

0x5224,	// (0x0003f986) slider_cont_pane_cp1_ParamLimits

0x5224,	// (0x0003f986) slider_cont_pane_cp1

0x5238,	// (0x0003f99a) slider_form_pane_cp

0x80bd,	// (0x0004281f) input_focus_pane_g1

0x80c5,	// (0x00042827) input_focus_pane_g2

0x80cd,	// (0x0004282f) input_focus_pane_g3

0x80d5,	// (0x00042837) input_focus_pane_g4

0x80dd,	// (0x0004283f) input_focus_pane_g5

0x80e5,	// (0x00042847) input_focus_pane_g6

0x80ed,	// (0x0004284f) input_focus_pane_g7

0x80f5,	// (0x00042857) input_focus_pane_g8

0x80fd,	// (0x0004285f) input_focus_pane_g9

0x7700,	// (0x00041e62) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00049e0f) input_focus_pane_g

0xa11e,	// (0x00044880) wait_border_pane_g3_copy1

0x5240,	// (0x0003f9a2) data_form_pane_t1

0x7700,	// (0x00041e62) wait_anim_pane_g1_copy1

0x54a0,	// (0x0003fc02) data_form_wide_pane_t1

0x525b,	// (0x0003f9bd) list_form_graphic_pane_cp_ParamLimits

0x525b,	// (0x0003f9bd) list_form_graphic_pane_cp

0xb05a,	// (0x000457bc) slider_form_pane_g1

0xb063,	// (0x000457c5) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004a107) slider_form_pane_g

0x5274,	// (0x0003f9d6) list_form_graphic_pane_ParamLimits

0x5274,	// (0x0003f9d6) list_form_graphic_pane

0x5290,	// (0x0003f9f2) list_form_graphic_pane_g1

0x5298,	// (0x0003f9fa) list_form_graphic_pane_t1_ParamLimits

0x5298,	// (0x0003f9fa) list_form_graphic_pane_t1

0x77ea,	// (0x00041f4c) list_highlight_pane_cp5_ParamLimits

0x77ea,	// (0x00041f4c) list_highlight_pane_cp5

0x52ad,	// (0x0003fa0f) find_pane_g1

0x8105,	// (0x00042867) input_find_pane

0x52b6,	// (0x0003fa18) input_find_pane_g1_ParamLimits

0x52b6,	// (0x0003fa18) input_find_pane_g1

0x52c2,	// (0x0003fa24) input_find_pane_t1_ParamLimits

0x52c2,	// (0x0003fa24) input_find_pane_t1

0x52d7,	// (0x0003fa39) input_find_pane_t2_ParamLimits

0x52d7,	// (0x0003fa39) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00049e24) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00049e24) input_find_pane_t

0x810e,	// (0x00042870) input_focus_pane_cp5_ParamLimits

0x810e,	// (0x00042870) input_focus_pane_cp5

0x8128,	// (0x0004288a) bg_popup_window_pane_cp2_ParamLimits

0x8128,	// (0x0004288a) bg_popup_window_pane_cp2

0x8135,	// (0x00042897) listscroll_menu_pane_ParamLimits

0x8135,	// (0x00042897) listscroll_menu_pane

0x8141,	// (0x000428a3) popup_submenu_window_ParamLimits

0x8141,	// (0x000428a3) popup_submenu_window

0x816b,	// (0x000428cd) find_popup_pane_g1

0x8173,	// (0x000428d5) input_popup_find_pane_cp

0x810e,	// (0x00042870) input_focus_pane_cp4_ParamLimits

0x810e,	// (0x00042870) input_focus_pane_cp4

0x8189,	// (0x000428eb) input_popup_find_pane_t1_ParamLimits

0x8189,	// (0x000428eb) input_popup_find_pane_t1

0x770a,	// (0x00041e6c) bg_popup_sub_pane_cp

0x81b7,	// (0x00042919) listscroll_popup_sub_pane

0x81bf,	// (0x00042921) list_submenu_pane_ParamLimits

0x81bf,	// (0x00042921) list_submenu_pane

0x81d0,	// (0x00042932) scroll_pane_cp4

0x81d8,	// (0x0004293a) list_single_popup_submenu_pane_ParamLimits

0x81d8,	// (0x0004293a) list_single_popup_submenu_pane

0x81ec,	// (0x0004294e) list_single_popup_submenu_pane_g1

0x81f4,	// (0x00042956) list_single_popup_submenu_pane_t1_ParamLimits

0x81f4,	// (0x00042956) list_single_popup_submenu_pane_t1

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp1_ParamLimits

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp1

0x8209,	// (0x0004296b) tabs_2_active_pane_g1

0x8211,	// (0x00042973) tabs_2_active_pane_t1

0x77ea,	// (0x00041f4c) bg_passive_tab_pane_cp1_ParamLimits

0x77ea,	// (0x00041f4c) bg_passive_tab_pane_cp1

0x8209,	// (0x0004296b) tabs_2_passive_pane_g1

0x8211,	// (0x00042973) tabs_2_passive_pane_t1

0x8223,	// (0x00042985) bg_active_tab_pane_cp4

0x8231,	// (0x00042993) tabs_2_long_active_pane_t1

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp4

0x64e1,	// (0x00040c43) list_single_midp_graphic_pane_g4_ParamLimits

0x8223,	// (0x00042985) bg_active_tab_pane_cp5

0x8250,	// (0x000429b2) tabs_3_long_active_pane_t1

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp5

0x64e1,	// (0x00040c43) list_single_midp_graphic_pane_g4

0x77ea,	// (0x00041f4c) bg_popup_window_pane_cp13_ParamLimits

0x77ea,	// (0x00041f4c) bg_popup_window_pane_cp13

0x826b,	// (0x000429cd) listscroll_popup_fast_pane_ParamLimits

0x826b,	// (0x000429cd) listscroll_popup_fast_pane

0x827a,	// (0x000429dc) grid_popup_fast_pane_ParamLimits

0x827a,	// (0x000429dc) grid_popup_fast_pane

0x828c,	// (0x000429ee) scroll_pane_cp9_ParamLimits

0x828c,	// (0x000429ee) scroll_pane_cp9

0xc919,	// (0x0004707b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc919,	// (0x0004707b) list_single_graphic_hl_pane_t1_cp2

0x82b0,	// (0x00042a12) input_focus_pane_cp20_ParamLimits

0x82b0,	// (0x00042a12) input_focus_pane_cp20

0x82be,	// (0x00042a20) query_popup_data_pane_t1_ParamLimits

0x82be,	// (0x00042a20) query_popup_data_pane_t1

0x82d1,	// (0x00042a33) query_popup_data_pane_t2_ParamLimits

0x82d1,	// (0x00042a33) query_popup_data_pane_t2

0x8317,	// (0x00042a79) query_popup_data_pane_t3_ParamLimits

0x8317,	// (0x00042a79) query_popup_data_pane_t3

0x8358,	// (0x00042aba) query_popup_data_pane_t4_ParamLimits

0x8358,	// (0x00042aba) query_popup_data_pane_t4

0x8394,	// (0x00042af6) query_popup_data_pane_t5_ParamLimits

0x8394,	// (0x00042af6) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00049e29) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00049e29) query_popup_data_pane_t

0x80bd,	// (0x0004281f) bg_set_opt_pane_g1

0x80c5,	// (0x00042827) bg_set_opt_pane_g2

0x80cd,	// (0x0004282f) bg_set_opt_pane_g3

0x80d5,	// (0x00042837) bg_set_opt_pane_g4

0x80dd,	// (0x0004283f) bg_set_opt_pane_g5

0x80e5,	// (0x00042847) bg_set_opt_pane_g6

0x80ed,	// (0x0004284f) bg_set_opt_pane_g7

0x80f5,	// (0x00042857) bg_set_opt_pane_g8

0x80fd,	// (0x0004285f) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00049e34) bg_set_opt_pane_g

0x6124,	// (0x00040886) control_top_pane_stacon_ParamLimits

0x6124,	// (0x00040886) control_top_pane_stacon

0x6177,	// (0x000408d9) signal_pane_stacon_ParamLimits

0x6177,	// (0x000408d9) signal_pane_stacon

0x8932,	// (0x00043094) stacon_top_pane_g1_ParamLimits

0x8932,	// (0x00043094) stacon_top_pane_g1

0x619c,	// (0x000408fe) title_pane_stacon_ParamLimits

0x619c,	// (0x000408fe) title_pane_stacon

0x61c6,	// (0x00040928) uni_indicator_pane_stacon_ParamLimits

0x61c6,	// (0x00040928) uni_indicator_pane_stacon

0x61db,	// (0x0004093d) battery_pane_stacon_ParamLimits

0x61db,	// (0x0004093d) battery_pane_stacon

0x621f,	// (0x00040981) control_bottom_pane_stacon_ParamLimits

0x621f,	// (0x00040981) control_bottom_pane_stacon

0x6242,	// (0x000409a4) navi_pane_stacon_ParamLimits

0x6242,	// (0x000409a4) navi_pane_stacon

0x8954,	// (0x000430b6) stacon_bottom_pane_g1_ParamLimits

0x8954,	// (0x000430b6) stacon_bottom_pane_g1

0x5e85,	// (0x000405e7) aid_levels_signal_lsc_ParamLimits

0x5e85,	// (0x000405e7) aid_levels_signal_lsc

0x5e9c,	// (0x000405fe) signal_pane_stacon_g1_ParamLimits

0x5e9c,	// (0x000405fe) signal_pane_stacon_g1

0x5eb0,	// (0x00040612) signal_pane_stacon_g2_ParamLimits

0x5eb0,	// (0x00040612) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00049e47) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00049e47) signal_pane_stacon_g

0x5ee5,	// (0x00040647) title_pane_stacon_t1_ParamLimits

0x5ee5,	// (0x00040647) title_pane_stacon_t1

0x83d8,	// (0x00042b3a) uni_indicator_pane_stacon_g1

0x83e2,	// (0x00042b44) uni_indicator_pane_stacon_g2

0x83ec,	// (0x00042b4e) uni_indicator_pane_stacon_g3

0x83f6,	// (0x00042b58) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00049e53) uni_indicator_pane_stacon_g

0x5f0a,	// (0x0004066c) control_top_pane_stacon_g1

0x5f12,	// (0x00040674) control_top_pane_stacon_t1_ParamLimits

0x5f12,	// (0x00040674) control_top_pane_stacon_t1

0x5f49,	// (0x000406ab) aid_levels_battery_lsc_ParamLimits

0x5f49,	// (0x000406ab) aid_levels_battery_lsc

0x5f61,	// (0x000406c3) battery_pane_stacon_g1_ParamLimits

0x5f61,	// (0x000406c3) battery_pane_stacon_g1

0x5f74,	// (0x000406d6) battery_pane_stacon_g2_ParamLimits

0x5f74,	// (0x000406d6) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00049e5c) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00049e5c) battery_pane_stacon_g

0x5fb2,	// (0x00040714) navi_icon_pane_stacon

0x5fc6,	// (0x00040728) navi_navi_pane_stacon

0x5fb2,	// (0x00040714) navi_text_pane_stacon

0x5f0a,	// (0x0004066c) control_bottom_pane_stacon_g1

0x5fda,	// (0x0004073c) control_bottom_pane_stacon_t1_ParamLimits

0x5fda,	// (0x0004073c) control_bottom_pane_stacon_t1

0x841a,	// (0x00042b7c) grid_app_pane_ParamLimits

0x841a,	// (0x00042b7c) grid_app_pane

0x843e,	// (0x00042ba0) scroll_pane_cp15_ParamLimits

0x843e,	// (0x00042ba0) scroll_pane_cp15

0x8453,	// (0x00042bb5) cell_app_pane_ParamLimits

0x8453,	// (0x00042bb5) cell_app_pane

0x8477,	// (0x00042bd9) cell_app_pane_g1_ParamLimits

0x8477,	// (0x00042bd9) cell_app_pane_g1

0x849b,	// (0x00042bfd) cell_app_pane_g2_ParamLimits

0x849b,	// (0x00042bfd) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00049e61) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00049e61) cell_app_pane_g

0x84a7,	// (0x00042c09) cell_app_pane_t1_ParamLimits

0x84a7,	// (0x00042c09) cell_app_pane_t1

0x84be,	// (0x00042c20) grid_highlight_pane_ParamLimits

0x84be,	// (0x00042c20) grid_highlight_pane

0x80bd,	// (0x0004281f) cell_highlight_pane_g1

0x80c5,	// (0x00042827) cell_highlight_pane_g2

0x80cd,	// (0x0004282f) cell_highlight_pane_g3

0x80d5,	// (0x00042837) cell_highlight_pane_g4

0x80dd,	// (0x0004283f) cell_highlight_pane_g5

0x80e5,	// (0x00042847) cell_highlight_pane_g6

0x80ed,	// (0x0004284f) cell_highlight_pane_g7

0x80f5,	// (0x00042857) cell_highlight_pane_g8

0x80fd,	// (0x0004285f) cell_highlight_pane_g9

0x7700,	// (0x00041e62) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00049e0f) cell_highlight_pane_g

0x84cf,	// (0x00042c31) bg_scroll_pane

0x6024,	// (0x00040786) scroll_handle_pane

0x8516,	// (0x00042c78) scroll_bg_pane_g1

0x852b,	// (0x00042c8d) scroll_bg_pane_g2

0x8543,	// (0x00042ca5) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00049e66) scroll_bg_pane_g

0x8558,	// (0x00042cba) scroll_handle_focus_pane_ParamLimits

0x8558,	// (0x00042cba) scroll_handle_focus_pane

0x8516,	// (0x00042c78) scroll_handle_pane_g1

0x8565,	// (0x00042cc7) scroll_handle_pane_g2

0x8543,	// (0x00042ca5) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00049e6d) scroll_handle_pane_g

0x810e,	// (0x00042870) bg_popup_sub_pane_cp21_ParamLimits

0x810e,	// (0x00042870) bg_popup_sub_pane_cp21

0x8579,	// (0x00042cdb) popup_fep_japan_predictive_window_t1_ParamLimits

0x8579,	// (0x00042cdb) popup_fep_japan_predictive_window_t1

0x8593,	// (0x00042cf5) popup_fep_japan_predictive_window_t2_ParamLimits

0x8593,	// (0x00042cf5) popup_fep_japan_predictive_window_t2

0x85c6,	// (0x00042d28) popup_fep_japan_predictive_window_t3_ParamLimits

0x85c6,	// (0x00042d28) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00049e74) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00049e74) popup_fep_japan_predictive_window_t

0x770a,	// (0x00041e6c) bg_popup_sub_pane_cp23

0x85fd,	// (0x00042d5f) listscroll_japin_cand_pane

0x8605,	// (0x00042d67) popup_fep_japan_candidate_window_t1

0x8613,	// (0x00042d75) candidate_pane_ParamLimits

0x8613,	// (0x00042d75) candidate_pane

0x8625,	// (0x00042d87) scroll_pane_cp30

0x862d,	// (0x00042d8f) list_single_popup_jap_candidate_pane_ParamLimits

0x862d,	// (0x00042d8f) list_single_popup_jap_candidate_pane

0x770a,	// (0x00041e6c) list_highlight_pane_cp30

0x8642,	// (0x00042da4) list_single_popup_jap_candidate_pane_t1

0x8651,	// (0x00042db3) level_1_signal

0x865e,	// (0x00042dc0) level_2_signal

0x866b,	// (0x00042dcd) level_3_signal

0x8678,	// (0x00042dda) level_4_signal

0x8685,	// (0x00042de7) level_5_signal

0x8692,	// (0x00042df4) level_6_signal

0x869f,	// (0x00042e01) level_7_signal

0x8651,	// (0x00042db3) level_1_battery

0x865e,	// (0x00042dc0) level_2_battery

0x866b,	// (0x00042dcd) level_3_battery

0x8678,	// (0x00042dda) level_4_battery

0x8685,	// (0x00042de7) level_5_battery

0x8692,	// (0x00042df4) level_6_battery

0x869f,	// (0x00042e01) level_7_battery

0x86c4,	// (0x00042e26) list_menu_pane_ParamLimits

0x86c4,	// (0x00042e26) list_menu_pane

0x86d5,	// (0x00042e37) scroll_pane_cp25_ParamLimits

0x86d5,	// (0x00042e37) scroll_pane_cp25

0x86ee,	// (0x00042e50) list_double2_graphic_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double2_graphic_pane_cp2

0x86ee,	// (0x00042e50) list_double2_large_graphic_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double2_large_graphic_pane_cp2

0x86ee,	// (0x00042e50) list_double2_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double2_pane_cp2

0x86ee,	// (0x00042e50) list_double_graphic_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double_graphic_pane_cp2

0x86ee,	// (0x00042e50) list_double_large_graphic_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double_large_graphic_pane_cp2

0x86ee,	// (0x00042e50) list_double_number_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double_number_pane_cp2

0x86ee,	// (0x00042e50) list_double_pane_cp2_ParamLimits

0x86ee,	// (0x00042e50) list_double_pane_cp2

0x8712,	// (0x00042e74) list_single_2graphic_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_2graphic_pane_cp2

0x8712,	// (0x00042e74) list_single_graphic_heading_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_graphic_heading_pane_cp2

0x8712,	// (0x00042e74) list_single_graphic_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_graphic_pane_cp2

0x8712,	// (0x00042e74) list_single_heading_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_heading_pane_cp2

0x872b,	// (0x00042e8d) list_single_large_graphic_pane_cp2_ParamLimits

0x872b,	// (0x00042e8d) list_single_large_graphic_pane_cp2

0x8712,	// (0x00042e74) list_single_number_heading_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_number_heading_pane_cp2

0x8712,	// (0x00042e74) list_single_number_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_number_pane_cp2

0x8712,	// (0x00042e74) list_single_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_pane_cp2

0x8781,	// (0x00042ee3) bg_popup_sub_pane_cp22

0x60d6,	// (0x00040838) popup_side_volume_key_window_g1

0x6100,	// (0x00040862) popup_side_volume_key_window_t1

0x611c,	// (0x0004087e) volume_small_pane_cp1

0x7a65,	// (0x000421c7) bg_popup_sub_pane_cp24_ParamLimits

0x7a65,	// (0x000421c7) bg_popup_sub_pane_cp24

0x8797,	// (0x00042ef9) fep_china_uni_candidate_pane_ParamLimits

0x8797,	// (0x00042ef9) fep_china_uni_candidate_pane

0x87ab,	// (0x00042f0d) fep_china_uni_entry_pane

0x87bb,	// (0x00042f1d) popup_fep_china_uni_window_g1

0x87d7,	// (0x00042f39) fep_china_uni_entry_pane_g1

0x87df,	// (0x00042f41) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00049ea1) fep_china_uni_entry_pane_g

0x87e7,	// (0x00042f49) fep_entry_item_pane

0x87f1,	// (0x00042f53) fep_candidate_item_pane

0x87f9,	// (0x00042f5b) fep_china_uni_candidate_pane_g1

0x8801,	// (0x00042f63) fep_china_uni_candidate_pane_g2

0x8809,	// (0x00042f6b) fep_china_uni_candidate_pane_g3

0x8811,	// (0x00042f73) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00049ea6) fep_china_uni_candidate_pane_g

0x7700,	// (0x00041e62) fep_entry_item_pane_g1

0x8819,	// (0x00042f7b) fep_entry_item_pane_t1_ParamLimits

0x8819,	// (0x00042f7b) fep_entry_item_pane_t1

0x882f,	// (0x00042f91) fep_candidate_item_pane_t1_ParamLimits

0x882f,	// (0x00042f91) fep_candidate_item_pane_t1

0x8844,	// (0x00042fa6) fep_candidate_item_pane_t2_ParamLimits

0x8844,	// (0x00042fa6) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00049eaf) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00049eaf) fep_candidate_item_pane_t

0x77ea,	// (0x00041f4c) list_highlight_pane_cp31_ParamLimits

0x77ea,	// (0x00041f4c) list_highlight_pane_cp31

0x8856,	// (0x00042fb8) level_1_signal_lsc

0x885f,	// (0x00042fc1) level_2_signal_lsc

0x8868,	// (0x00042fca) level_3_signal_lsc

0x8871,	// (0x00042fd3) level_4_signal_lsc

0x887a,	// (0x00042fdc) level_5_signal_lsc

0x8883,	// (0x00042fe5) level_6_signal_lsc

0x888c,	// (0x00042fee) level_7_signal_lsc

0x888c,	// (0x00042fee) level_1_battery_lsc

0x8895,	// (0x00042ff7) level_2_battery_lsc

0x889e,	// (0x00043000) level_3_battery_lsc

0x88a7,	// (0x00043009) level_4_battery_lsc

0x88b0,	// (0x00043012) level_5_battery_lsc

0x88b9,	// (0x0004301b) level_6_battery_lsc

0x8856,	// (0x00042fb8) level_7_battery_lsc

0x88c2,	// (0x00043024) scroll_handle_focus_pane_g1

0x88cb,	// (0x0004302d) scroll_handle_focus_pane_g2

0x88d4,	// (0x00043036) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00049eb4) scroll_handle_focus_pane_g

0x52ec,	// (0x0003fa4e) list_single_2graphic_pane_g1_ParamLimits

0x52ec,	// (0x0003fa4e) list_single_2graphic_pane_g1

0x5e33,	// (0x00040595) list_single_2graphic_pane_g2_ParamLimits

0x5e33,	// (0x00040595) list_single_2graphic_pane_g2

0x5e15,	// (0x00040577) list_single_2graphic_pane_g3_ParamLimits

0x5e15,	// (0x00040577) list_single_2graphic_pane_g3

0x52f8,	// (0x0003fa5a) list_single_2graphic_pane_g4_ParamLimits

0x52f8,	// (0x0003fa5a) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00049ebb) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00049ebb) list_single_2graphic_pane_g

0x5304,	// (0x0003fa66) list_single_2graphic_pane_t1_ParamLimits

0x5304,	// (0x0003fa66) list_single_2graphic_pane_t1

0x5332,	// (0x0003fa94) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5332,	// (0x0003fa94) list_double2_graphic_large_graphic_pane_g1

0x4e7c,	// (0x0003f5de) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4e7c,	// (0x0003f5de) list_double2_graphic_large_graphic_pane_g2

0x4dc1,	// (0x0003f523) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4dc1,	// (0x0003f523) list_double2_graphic_large_graphic_pane_g3

0x5342,	// (0x0003faa4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5342,	// (0x0003faa4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00049ec4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00049ec4) list_double2_graphic_large_graphic_pane_g

0x534e,	// (0x0003fab0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x534e,	// (0x0003fab0) list_double2_graphic_large_graphic_pane_t1

0x5364,	// (0x0003fac6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5364,	// (0x0003fac6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00049ecd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00049ecd) list_double2_graphic_large_graphic_pane_t

0x8a1c,	// (0x0004317e) popup_fast_swap_window_ParamLimits

0x8a1c,	// (0x0004317e) popup_fast_swap_window

0x8a38,	// (0x0004319a) popup_side_volume_key_window

0x8a54,	// (0x000431b6) stacon_top_pane

0x8a5e,	// (0x000431c0) status_pane_ParamLimits

0x8a5e,	// (0x000431c0) status_pane

0x8a54,	// (0x000431b6) status_small_pane

0x770a,	// (0x00041e6c) control_pane

0x770a,	// (0x00041e6c) stacon_bottom_pane

0x8039,	// (0x0004279b) scroll_pane_cp121

0x8030,	// (0x00042792) set_content_pane

0x88dd,	// (0x0004303f) bg_active_tab_pane_g1_cp1

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp1

0x88ef,	// (0x00043051) bg_active_tab_pane_g3_cp1

0x88dd,	// (0x0004303f) bg_passive_tab_pane_g1_cp1

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp1

0x88ef,	// (0x00043051) bg_passive_tab_pane_g3_cp1

0x88f8,	// (0x0004305a) bg_active_tab_pane_g1_cp2

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp2

0x8901,	// (0x00043063) bg_active_tab_pane_g3_cp2

0x88f8,	// (0x0004305a) bg_passive_tab_pane_g1_cp2

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp2

0x8901,	// (0x00043063) bg_passive_tab_pane_g3_cp2

0x890a,	// (0x0004306c) bg_active_tab_pane_g1_cp3

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp3

0x8913,	// (0x00043075) bg_active_tab_pane_g3_cp3

0x890a,	// (0x0004306c) bg_passive_tab_pane_g1_cp3

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp3

0x8913,	// (0x00043075) bg_passive_tab_pane_g3_cp3

0x891c,	// (0x0004307e) bg_active_tab_pane_g1_cp4

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp4

0x8927,	// (0x00043089) bg_active_tab_pane_g3_cp4

0x891c,	// (0x0004307e) bg_passive_tab_pane_g1_cp4

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp4

0x8927,	// (0x00043089) bg_passive_tab_pane_g3_cp4

0x8970,	// (0x000430d2) bg_active_tab_pane_g1_cp5

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp5

0x8979,	// (0x000430db) bg_active_tab_pane_g3_cp5

0x8970,	// (0x000430d2) bg_passive_tab_pane_g1_cp5

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp5

0x8979,	// (0x000430db) bg_passive_tab_pane_g3_cp5

0x8982,	// (0x000430e4) list_set_graphic_pane_ParamLimits

0x8982,	// (0x000430e4) list_set_graphic_pane

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp4

0x899f,	// (0x00043101) list_set_graphic_pane_g1_ParamLimits

0x899f,	// (0x00043101) list_set_graphic_pane_g1

0x89ab,	// (0x0004310d) list_set_graphic_pane_g2_ParamLimits

0x89ab,	// (0x0004310d) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00049ed2) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00049ed2) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0004a235) volume_small_pane_cp_g

0x89cf,	// (0x00043131) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x89cf,	// (0x00043131) list_double2_large_graphic_pane_g1_cp2

0x89db,	// (0x0004313d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x89db,	// (0x0004313d) list_double2_large_graphic_pane_g2_cp2

0x89ec,	// (0x0004314e) list_double2_large_graphic_pane_g3_cp2

0x89f4,	// (0x00043156) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x89f4,	// (0x00043156) list_double2_large_graphic_pane_t1_cp2

0x8a0a,	// (0x0004316c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a0a,	// (0x0004316c) list_double2_large_graphic_pane_t2_cp2

0xabf7,	// (0x00045359) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabf7,	// (0x00045359) list_double_large_graphic_pane_g1_cp2

0xac08,	// (0x0004536a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac08,	// (0x0004536a) list_double_large_graphic_pane_g2_cp2

0x8b7a,	// (0x000432dc) list_double_large_graphic_pane_g3_cp2

0xac19,	// (0x0004537b) list_double_large_graphic_pane_g4_cp

0xac21,	// (0x00045383) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac21,	// (0x00045383) list_double_large_graphic_pane_t1_cp2

0xac38,	// (0x0004539a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac38,	// (0x0004539a) list_double_large_graphic_pane_t2_cp2

0x8a6c,	// (0x000431ce) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a6c,	// (0x000431ce) list_double2_graphic_pane_g1_cp2

0x8a7a,	// (0x000431dc) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a7a,	// (0x000431dc) list_double2_graphic_pane_g2_cp2

0x8a8b,	// (0x000431ed) list_double2_graphic_pane_g3_cp2

0x8a95,	// (0x000431f7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8a95,	// (0x000431f7) list_double2_graphic_pane_t1_cp2

0x8aab,	// (0x0004320d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8aab,	// (0x0004320d) list_double2_graphic_pane_t2_cp2

0x8abd,	// (0x0004321f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8abd,	// (0x0004321f) list_single_number_heading_pane_g1_cp2

0x8ac9,	// (0x0004322b) list_single_number_heading_pane_g2_cp2

0x8ad1,	// (0x00043233) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8ad1,	// (0x00043233) list_single_number_heading_pane_t1_cp2

0x8ae7,	// (0x00043249) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ae7,	// (0x00043249) list_single_number_heading_pane_t2_cp2

0x8b05,	// (0x00043267) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b05,	// (0x00043267) list_single_number_heading_pane_t3_cp2

0x8abd,	// (0x0004321f) list_single_heading_pane_g1_cp2_ParamLimits

0x8abd,	// (0x0004321f) list_single_heading_pane_g1_cp2

0x8ac9,	// (0x0004322b) list_single_heading_pane_g2_cp2

0x8ad1,	// (0x00043233) list_single_heading_pane_t1_cp2_ParamLimits

0x8ad1,	// (0x00043233) list_single_heading_pane_t1_cp2

0xa9ff,	// (0x00045161) list_single_heading_pane_t2_cp2_ParamLimits

0xa9ff,	// (0x00045161) list_single_heading_pane_t2_cp2

0xa950,	// (0x000450b2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa950,	// (0x000450b2) list_double_graphic_pane_g1_cp2

0xa92f,	// (0x00045091) list_double_graphic_pane_g2_cp2_ParamLimits

0xa92f,	// (0x00045091) list_double_graphic_pane_g2_cp2

0xa95c,	// (0x000450be) list_double_graphic_pane_g3_cp2

0xa964,	// (0x000450c6) list_double_graphic_pane_t1_cp2_ParamLimits

0xa964,	// (0x000450c6) list_double_graphic_pane_t1_cp2

0xa97a,	// (0x000450dc) list_double_graphic_pane_t2_cp2_ParamLimits

0xa97a,	// (0x000450dc) list_double_graphic_pane_t2_cp2

0x8af9,	// (0x0004325b) list_double_number_pane_g1_cp2_ParamLimits

0x8af9,	// (0x0004325b) list_double_number_pane_g1_cp2

0x8b7a,	// (0x000432dc) list_double_number_pane_g2_cp2

0xa905,	// (0x00045067) list_double_number_pane_t1_cp2_ParamLimits

0xa905,	// (0x00045067) list_double_number_pane_t1_cp2

0xa919,	// (0x0004507b) list_double_number_pane_t2_cp2_ParamLimits

0xa919,	// (0x0004507b) list_double_number_pane_t2_cp2

0xa93e,	// (0x000450a0) list_double_number_pane_t3_cp2_ParamLimits

0xa93e,	// (0x000450a0) list_double_number_pane_t3_cp2

0xa7ee,	// (0x00044f50) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7ee,	// (0x00044f50) list_single_graphic_pane_g1_cp2

0x8bd2,	// (0x00043334) list_single_graphic_pane_g2_cp2_ParamLimits

0x8bd2,	// (0x00043334) list_single_graphic_pane_g2_cp2

0x8bde,	// (0x00043340) list_single_graphic_pane_g3_cp2

0xa7c4,	// (0x00044f26) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7c4,	// (0x00044f26) list_single_graphic_pane_t1_cp2

0x8bd2,	// (0x00043334) list_single_number_pane_g1_cp2_ParamLimits

0x8bd2,	// (0x00043334) list_single_number_pane_g1_cp2

0x8bde,	// (0x00043340) list_single_number_pane_g2_cp2

0xa7c4,	// (0x00044f26) list_single_number_pane_t1_cp2_ParamLimits

0xa7c4,	// (0x00044f26) list_single_number_pane_t1_cp2

0xa7da,	// (0x00044f3c) list_single_number_pane_t2_cp2_ParamLimits

0xa7da,	// (0x00044f3c) list_single_number_pane_t2_cp2

0x89db,	// (0x0004313d) list_double2_pane_g1_cp2_ParamLimits

0x89db,	// (0x0004313d) list_double2_pane_g1_cp2

0x89ec,	// (0x0004314e) list_double2_pane_g2_cp2

0x8b52,	// (0x000432b4) list_double2_pane_t1_cp2_ParamLimits

0x8b52,	// (0x000432b4) list_double2_pane_t1_cp2

0x8b68,	// (0x000432ca) list_double2_pane_t2_cp2_ParamLimits

0x8b68,	// (0x000432ca) list_double2_pane_t2_cp2

0x8af9,	// (0x0004325b) list_double_pane_g1_cp2_ParamLimits

0x8af9,	// (0x0004325b) list_double_pane_g1_cp2

0x8b7a,	// (0x000432dc) list_double_pane_g2_cp2

0x8b82,	// (0x000432e4) list_double_pane_t1_cp2_ParamLimits

0x8b82,	// (0x000432e4) list_double_pane_t1_cp2

0x8b98,	// (0x000432fa) list_double_pane_t2_cp2_ParamLimits

0x8b98,	// (0x000432fa) list_double_pane_t2_cp2

0x8bc2,	// (0x00043324) list_single_pane_cp2_g3

0x8bd2,	// (0x00043334) list_single_pane_g1_cp2_ParamLimits

0x8bd2,	// (0x00043334) list_single_pane_g1_cp2

0x8bde,	// (0x00043340) list_single_pane_g2_cp2

0x8be6,	// (0x00043348) list_single_pane_t1_cp2_ParamLimits

0x8be6,	// (0x00043348) list_single_pane_t1_cp2

0x8bfe,	// (0x00043360) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8bfe,	// (0x00043360) list_single_large_graphic_pane_g1_cp2

0x8c0a,	// (0x0004336c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8c0a,	// (0x0004336c) list_single_large_graphic_pane_g2_cp2

0x8c16,	// (0x00043378) list_single_large_graphic_pane_g3_cp2

0x8c1e,	// (0x00043380) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c1e,	// (0x00043380) list_single_large_graphic_pane_g4_cp1

0x8c38,	// (0x0004339a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c38,	// (0x0004339a) list_single_large_graphic_pane_t1_cp2

0xa790,	// (0x00044ef2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa790,	// (0x00044ef2) list_single_graphic_heading_pane_g1_cp2

0xa75d,	// (0x00044ebf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa75d,	// (0x00044ebf) list_single_graphic_heading_pane_g4_cp2

0x8bde,	// (0x00043340) list_single_graphic_heading_pane_g5_cp2

0xa79c,	// (0x00044efe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa79c,	// (0x00044efe) list_single_graphic_heading_pane_t1_cp2

0xa7b2,	// (0x00044f14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7b2,	// (0x00044f14) list_single_graphic_heading_pane_t2_cp2

0xa751,	// (0x00044eb3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa751,	// (0x00044eb3) list_single_2graphic_pane_g1_cp2

0xa75d,	// (0x00044ebf) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa75d,	// (0x00044ebf) list_single_2graphic_pane_g2_cp2

0x8bde,	// (0x00043340) list_single_2graphic_pane_g3_cp2

0xa76e,	// (0x00044ed0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa76e,	// (0x00044ed0) list_single_2graphic_pane_g4_cp2

0xa77a,	// (0x00044edc) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00044edc) list_single_2graphic_pane_t1_cp2

0x7700,	// (0x00041e62) list_highlight_pane_g10_cp1

0xa329,	// (0x00044a8b) list_highlight_pane_g1_cp1

0xa331,	// (0x00044a93) list_highlight_pane_g2_cp1

0xa339,	// (0x00044a9b) list_highlight_pane_g3_cp1

0xa341,	// (0x00044aa3) list_highlight_pane_g4_cp1

0xa349,	// (0x00044aab) list_highlight_pane_g5_cp1

0xa351,	// (0x00044ab3) list_highlight_pane_g6_cp1

0xa359,	// (0x00044abb) list_highlight_pane_g7_cp1

0xa361,	// (0x00044ac3) list_highlight_pane_g8_cp1

0xa369,	// (0x00044acb) list_highlight_pane_g9_cp1

0xa249,	// (0x000449ab) form_field_slider_pane_t3

0xa257,	// (0x000449b9) form_field_slider_pane_t4

0xa265,	// (0x000449c7) slider_form_pane_ParamLimits

0xa265,	// (0x000449c7) slider_form_pane

0x770a,	// (0x00041e6c) control_abbreviations

0x770a,	// (0x00041e6c) control_conventions

0x770a,	// (0x00041e6c) control_definitions

0x770a,	// (0x00041e6c) format_table_attribute

0xaa49,	// (0x000451ab) bg_popup_preview_window_pane_g9

0x770a,	// (0x00041e6c) format_table_data2

0x770a,	// (0x00041e6c) format_table_data3

0x770a,	// (0x00041e6c) format_table_data_example

0x0008,

0x770a,	// (0x00041e6c) intro_purpose

0xf905,	// (0x0004a067) bg_popup_preview_window_pane_g

0x770a,	// (0x00041e6c) texts_category

0x770a,	// (0x00041e6c) texts_graphics

0x8c4e,	// (0x000433b0) text_digital

0x8c5d,	// (0x000433bf) text_primary

0x8c6c,	// (0x000433ce) text_primary_small

0x8c7b,	// (0x000433dd) text_secondary

0x8c8a,	// (0x000433ec) text_title

0xb155,	// (0x000458b7) bg_passive_tab_pane_g1_cp3_srt

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp3_srt

0xb15e,	// (0x000458c0) bg_passive_tab_pane_g3_cp3_srt

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp3_srt_ParamLimits

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp3_srt

0xb167,	// (0x000458c9) tabs_4_active_pane_srt_g1

0xb16f,	// (0x000458d1) tabs_4_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x000458d1) tabs_4_active_pane_srt_t1

0xb155,	// (0x000458b7) bg_active_tab_pane_g1_cp3_copy1

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp3_copy1

0xb15e,	// (0x000458c0) bg_active_tab_pane_g3_cp3_copy1

0x77ea,	// (0x00041f4c) tabs_2_long_active_pane_srt_ParamLimits

0x77ea,	// (0x00041f4c) tabs_2_long_active_pane_srt

0x77ea,	// (0x00041f4c) tabs_2_long_passive_pane_srt_ParamLimits

0x77ea,	// (0x00041f4c) tabs_2_long_passive_pane_srt

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp4_srt

0xae8d,	// (0x000455ef) bg_passive_tab_pane_g1_cp4_srt

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp4_srt

0xae96,	// (0x000455f8) bg_passive_tab_pane_g3_cp4_srt

0x8223,	// (0x00042985) bg_active_tab_pane_cp4_srt_ParamLimits

0x8223,	// (0x00042985) bg_active_tab_pane_cp4_srt

0xae9f,	// (0x00045601) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae9f,	// (0x00045601) tabs_2_long_active_pane_srt_t1

0xae8d,	// (0x000455ef) bg_active_tab_pane_g1_cp4_srt

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp4_srt

0xae96,	// (0x000455f8) bg_active_tab_pane_g3_cp4_srt

0x7a65,	// (0x000421c7) tabs_3_long_active_pane_srt_ParamLimits

0x7a65,	// (0x000421c7) tabs_3_long_active_pane_srt

0x7a65,	// (0x000421c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a65,	// (0x000421c7) tabs_3_long_passive_pane_cp_srt

0x7a65,	// (0x000421c7) tabs_3_long_passive_pane_srt_ParamLimits

0x7a65,	// (0x000421c7) tabs_3_long_passive_pane_srt

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp5_srt

0x8970,	// (0x000430d2) bg_passive_tab_pane_g1_cp5_srt

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp5_srt

0x8979,	// (0x000430db) bg_passive_tab_pane_g3_cp5_srt

0x8223,	// (0x00042985) bg_active_tab_pane_cp5_srt_ParamLimits

0x8223,	// (0x00042985) bg_active_tab_pane_cp5_srt

0xae7b,	// (0x000455dd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae7b,	// (0x000455dd) tabs_3_long_active_pane_srt_t1

0x8970,	// (0x000430d2) bg_active_tab_pane_g1_cp5_srt

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp5_srt

0x8979,	// (0x000430db) bg_active_tab_pane_g3_cp5_srt

0xae6d,	// (0x000455cf) navi_text_pane_srt_t1

0xae65,	// (0x000455c7) navi_icon_pane_srt_g1

0x8e5d,	// (0x000435bf) midp_editing_number_pane_srt

0x8c99,	// (0x000433fb) midp_ticker_pane_srt

0x8e65,	// (0x000435c7) midp_ticker_pane_srt_g1

0x8e6d,	// (0x000435cf) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00049ef1) midp_ticker_pane_srt_g

0x8e75,	// (0x000435d7) midp_ticker_pane_srt_t1

0xae56,	// (0x000455b8) midp_editing_number_pane_t1_copy1

0x8ca1,	// (0x00043403) listscroll_midp_pane

0x8ca1,	// (0x00043403) midp_form_pane

0x8d0f,	// (0x00043471) midp_info_popup_window_ParamLimits

0x8d0f,	// (0x00043471) midp_info_popup_window

0x810e,	// (0x00042870) bg_popup_sub_pane_cp50_ParamLimits

0x810e,	// (0x00042870) bg_popup_sub_pane_cp50

0x9f61,	// (0x000446c3) listscroll_midp_info_pane_ParamLimits

0x9f61,	// (0x000446c3) listscroll_midp_info_pane

0x9f49,	// (0x000446ab) listscroll_form_midp_pane_ParamLimits

0x9f49,	// (0x000446ab) listscroll_form_midp_pane

0x9f55,	// (0x000446b7) scroll_bar_cp050

0x9f29,	// (0x0004468b) list_midp_pane

0xbb71,	// (0x000462d3) signal_pane_g2_cp

0x9e57,	// (0x000445b9) listscroll_midp_info_pane_t1_ParamLimits

0x9e57,	// (0x000445b9) listscroll_midp_info_pane_t1

0x9e6f,	// (0x000445d1) listscroll_midp_info_pane_t2_ParamLimits

0x9e6f,	// (0x000445d1) listscroll_midp_info_pane_t2

0x9ead,	// (0x0004460f) listscroll_midp_info_pane_t3_ParamLimits

0x9ead,	// (0x0004460f) listscroll_midp_info_pane_t3

0x9ee7,	// (0x00044649) listscroll_midp_info_pane_t4_ParamLimits

0x9ee7,	// (0x00044649) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x00049fa2) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x00049fa2) listscroll_midp_info_pane_t

0x81d0,	// (0x00042932) scroll_pane_cp21

0x9df5,	// (0x00044557) form_midp_field_choice_group_pane

0x9dfe,	// (0x00044560) form_midp_field_text_pane

0x9e3d,	// (0x0004459f) form_midp_field_time_pane

0x9e45,	// (0x000445a7) form_midp_gauge_slider_pane

0x9e4e,	// (0x000445b0) form_midp_gauge_wait_pane

0x770a,	// (0x00041e6c) form_midp_image_pane

0x544d,	// (0x0003fbaf) list_single_midp_pane_ParamLimits

0x544d,	// (0x0003fbaf) list_single_midp_pane

0x9dad,	// (0x0004450f) form_midp_field_text_pane_t1

0x9b9f,	// (0x00044301) input_focus_pane_cp050

0x9de4,	// (0x00044546) list_midp_form_text_pane

0x9d7c,	// (0x000444de) form_midp_field_choice_group_pane_t1

0x9d8a,	// (0x000444ec) input_focus_pane_cp051

0x9d9e,	// (0x00044500) list_midp_choice_pane

0x770a,	// (0x00041e6c) status_idle_pane

0x9d60,	// (0x000444c2) form_midp_field_time_pane_t1

0x7700,	// (0x00041e62) wait_anim_pane_g2_copy1

0x9d6e,	// (0x000444d0) form_midp_field_time_pane_t2

0x0001,

0x8dbd,	// (0x0004351f) aid_navinavi_width_2_pane

0xf83b,	// (0x00049f9d) form_midp_field_time_pane_t

0x770a,	// (0x00041e6c) input_focus_pane_cp052

0x770a,	// (0x00041e6c) bg_input_focus_pane_cp040

0x9d20,	// (0x00044482) form_midp_gauge_slider_pane_t1

0x9d2e,	// (0x00044490) form_midp_gauge_slider_pane_t2

0x9d3c,	// (0x0004449e) form_midp_gauge_slider_pane_t3

0x9d4a,	// (0x000444ac) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x00049f94) form_midp_gauge_slider_pane_t

0x9d58,	// (0x000444ba) form_midp_slider_pane

0x77ea,	// (0x00041f4c) bg_input_focus_pane_cp041_ParamLimits

0x77ea,	// (0x00041f4c) bg_input_focus_pane_cp041

0x9ced,	// (0x0004444f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ced,	// (0x0004444f) form_midp_gauge_wait_pane_t1

0x9cff,	// (0x00044461) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cff,	// (0x00044461) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x00049f8f) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x00049f8f) form_midp_gauge_wait_pane_t

0x9d11,	// (0x00044473) form_midp_wait_pane_ParamLimits

0x9d11,	// (0x00044473) form_midp_wait_pane

0x9cb7,	// (0x00044419) form_midp_image_pane_g1

0x9cc0,	// (0x00044422) form_midp_image_pane_t1

0x9ccf,	// (0x00044431) form_midp_image_pane_t2

0x9cde,	// (0x00044440) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x00049f88) form_midp_image_pane_t

0x9cae,	// (0x00044410) list_single_midp_pane_g1

0x543e,	// (0x0003fba0) list_single_midp_pane_t1

0x9c86,	// (0x000443e8) list_midp_form_item_pane_ParamLimits

0x9c86,	// (0x000443e8) list_midp_form_item_pane

0x8d65,	// (0x000434c7) list_midp_form_item_pane_t1

0x8d74,	// (0x000434d6) midp_ticker_pane_g1

0x8d80,	// (0x000434e2) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00049ed7) midp_ticker_pane_g

0x8d8c,	// (0x000434ee) midp_ticker_pane_t1

0xb0a7,	// (0x00045809) midp_editing_number_pane_t1

0xb085,	// (0x000457e7) midp_editing_number_pane

0xb094,	// (0x000457f6) midp_ticker_pane

0xae46,	// (0x000455a8) ai_message_heading_pane

0x770a,	// (0x00041e6c) bg_popup_window_pane_cp14

0xae4e,	// (0x000455b0) listscroll_ai_message_pane

0xadd0,	// (0x00045532) ai_message_heading_pane_g1_ParamLimits

0xadd0,	// (0x00045532) ai_message_heading_pane_g1

0xaddc,	// (0x0004553e) ai_message_heading_pane_g2_ParamLimits

0xaddc,	// (0x0004553e) ai_message_heading_pane_g2

0xade8,	// (0x0004554a) ai_message_heading_pane_g3_ParamLimits

0xade8,	// (0x0004554a) ai_message_heading_pane_g3

0xadf4,	// (0x00045556) ai_message_heading_pane_g4_ParamLimits

0xadf4,	// (0x00045556) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004a0c9) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004a0c9) ai_message_heading_pane_g

0xae00,	// (0x00045562) ai_message_heading_pane_t1_ParamLimits

0xae00,	// (0x00045562) ai_message_heading_pane_t1

0xae1a,	// (0x0004557c) ai_message_heading_pane_t2_ParamLimits

0xae1a,	// (0x0004557c) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004a0d2) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004a0d2) ai_message_heading_pane_t

0xae2c,	// (0x0004558e) bg_popup_heading_pane_cp1_ParamLimits

0xae2c,	// (0x0004558e) bg_popup_heading_pane_cp1

0xadbe,	// (0x00045520) list_ai_message_pane_ParamLimits

0xadbe,	// (0x00045520) list_ai_message_pane

0x81d0,	// (0x00042932) scroll_pane_cp10

0xad5a,	// (0x000454bc) list_ai_message_pane_g1

0xad62,	// (0x000454c4) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004a0a6) list_ai_message_pane_g

0xad6a,	// (0x000454cc) list_ai_message_pane_t1_ParamLimits

0xad6a,	// (0x000454cc) list_ai_message_pane_t1

0xad7f,	// (0x000454e1) list_ai_message_pane_t2_ParamLimits

0xad7f,	// (0x000454e1) list_ai_message_pane_t2

0xad94,	// (0x000454f6) list_ai_message_pane_t3_ParamLimits

0xad94,	// (0x000454f6) list_ai_message_pane_t3

0xada9,	// (0x0004550b) list_ai_message_pane_t4_ParamLimits

0xada9,	// (0x0004550b) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004a0ab) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004a0ab) list_ai_message_pane_t

0xad45,	// (0x000454a7) cell_ai_soft_ind_pane_ParamLimits

0xad45,	// (0x000454a7) cell_ai_soft_ind_pane

0x8d9e,	// (0x00043500) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d9e,	// (0x00043500) cell_ai_soft_ind_pane_g1

0x770a,	// (0x00041e6c) grid_highlight_cp1

0x8dab,	// (0x0004350d) text_secondary_cp56_ParamLimits

0x8dab,	// (0x0004350d) text_secondary_cp56

0xad1a,	// (0x0004547c) example_general_pane_ParamLimits

0xad1a,	// (0x0004547c) example_general_pane

0xad26,	// (0x00045488) example_parent_pane_g1_ParamLimits

0xad26,	// (0x00045488) example_parent_pane_g1

0xad32,	// (0x00045494) example_parent_pane_t1_ParamLimits

0xad32,	// (0x00045494) example_parent_pane_t1

0x9380,	// (0x00043ae2) popup_preview_text_window_ParamLimits

0x9380,	// (0x00043ae2) popup_preview_text_window

0x8bca,	// (0x0004332c) list_single_pane_cp2_g4

0x7b1b,	// (0x0004227d) bg_popup_preview_window_pane_ParamLimits

0x7b1b,	// (0x0004227d) bg_popup_preview_window_pane

0xaa51,	// (0x000451b3) popup_preview_text_window_t1_ParamLimits

0xaa51,	// (0x000451b3) popup_preview_text_window_t1

0xaa6f,	// (0x000451d1) popup_preview_text_window_t2_ParamLimits

0xaa6f,	// (0x000451d1) popup_preview_text_window_t2

0xaab8,	// (0x0004521a) popup_preview_text_window_t3_ParamLimits

0xaab8,	// (0x0004521a) popup_preview_text_window_t3

0xaafd,	// (0x0004525f) popup_preview_text_window_t4_ParamLimits

0xaafd,	// (0x0004525f) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004a07a) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004a07a) popup_preview_text_window_t

0xab7b,	// (0x000452dd) scroll_pane_cp11

0x9aaf,	// (0x00044211) bg_popup_preview_window_pane_g1

0xaa11,	// (0x00045173) bg_popup_preview_window_pane_g2

0xaa19,	// (0x0004517b) bg_popup_preview_window_pane_g3

0xaa21,	// (0x00045183) bg_popup_preview_window_pane_g4

0xaa29,	// (0x0004518b) bg_popup_preview_window_pane_g5

0xaa31,	// (0x00045193) bg_popup_preview_window_pane_g6

0xaa39,	// (0x0004519b) bg_popup_preview_window_pane_g7

0xaa41,	// (0x000451a3) bg_popup_preview_window_pane_g8

0x599f,	// (0x00040101) aid_popup_width_pane

0x935e,	// (0x00043ac0) popup_midp_note_alarm_window_ParamLimits

0x935e,	// (0x00043ac0) popup_midp_note_alarm_window

0x804a,	// (0x000427ac) data_form_pane_ParamLimits

0x5146,	// (0x0003f8a8) form_field_data_pane_g1

0x5150,	// (0x0003f8b2) form_field_data_pane_t1_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_ParamLimits

0x8064,	// (0x000427c6) data_form_wide_pane_ParamLimits

0x5168,	// (0x0003f8ca) form_field_data_wide_pane_g1

0x5174,	// (0x0003f8d6) form_field_data_wide_pane_t1_ParamLimits

0x7dc7,	// (0x00042529) input_focus_pane_cp6_ParamLimits

0x817d,	// (0x000428df) input_popup_find_pane_g1_ParamLimits

0x817d,	// (0x000428df) input_popup_find_pane_g1

0x5f85,	// (0x000406e7) aid_navi_side_left_pane

0x5f9a,	// (0x000406fc) aid_navi_side_right_pane

0xa424,	// (0x00044b86) bg_popup_window_pane_cp30_ParamLimits

0xa424,	// (0x00044b86) bg_popup_window_pane_cp30

0xa49e,	// (0x00044c00) popup_midp_note_alarm_window_g1_ParamLimits

0xa49e,	// (0x00044c00) popup_midp_note_alarm_window_g1

0xa4ce,	// (0x00044c30) popup_midp_note_alarm_window_t1_ParamLimits

0xa4ce,	// (0x00044c30) popup_midp_note_alarm_window_t1

0xa56f,	// (0x00044cd1) popup_midp_note_alarm_window_t2_ParamLimits

0xa56f,	// (0x00044cd1) popup_midp_note_alarm_window_t2

0xa61d,	// (0x00044d7f) popup_midp_note_alarm_window_t3_ParamLimits

0xa61d,	// (0x00044d7f) popup_midp_note_alarm_window_t3

0xa64f,	// (0x00044db1) popup_midp_note_alarm_window_t4_ParamLimits

0xa64f,	// (0x00044db1) popup_midp_note_alarm_window_t4

0xa675,	// (0x00044dd7) popup_midp_note_alarm_window_t5_ParamLimits

0xa675,	// (0x00044dd7) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004a017) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004a017) popup_midp_note_alarm_window_t

0xa721,	// (0x00044e83) wait_bar_pane_cp1_ParamLimits

0xa721,	// (0x00044e83) wait_bar_pane_cp1

0x770a,	// (0x00041e6c) wait_anim_pane_copy1

0x770a,	// (0x00041e6c) wait_border_pane_copy1

0xa10a,	// (0x0004486c) wait_border_pane_g1_copy1

0x518e,	// (0x0003f8f0) form_field_popup_pane_g1

0x5196,	// (0x0003f8f8) form_field_popup_pane_t1_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_cp7_ParamLimits

0x8090,	// (0x000427f2) list_form_pane_ParamLimits

0x51ae,	// (0x0003f910) form_field_popup_wide_pane_g1

0x51b6,	// (0x0003f918) form_field_popup_wide_pane_t1_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_cp8_ParamLimits

0x809c,	// (0x000427fe) list_form_wide_pane_ParamLimits

0xb1e1,	// (0x00045943) aid_size_cell_graphic_pane

0x5240,	// (0x0003f9a2) data_form_pane_t1_ParamLimits

0x54a0,	// (0x0003fc02) data_form_wide_pane_t1_ParamLimits

0x9683,	// (0x00043de5) bg_status_flat_pane

0x774a,	// (0x00041eac) title_pane_t1_ParamLimits

0x77b2,	// (0x00041f14) title_pane_t2_ParamLimits

0x77d8,	// (0x00041f3a) title_pane_t3_ParamLimits

0xf573,	// (0x00049cd5) title_pane_t_ParamLimits

0x8651,	// (0x00042db3) level_1_signal_ParamLimits

0x865e,	// (0x00042dc0) level_2_signal_ParamLimits

0x866b,	// (0x00042dcd) level_3_signal_ParamLimits

0x8678,	// (0x00042dda) level_4_signal_ParamLimits

0x8685,	// (0x00042de7) level_5_signal_ParamLimits

0x8692,	// (0x00042df4) level_6_signal_ParamLimits

0x869f,	// (0x00042e01) level_7_signal_ParamLimits

0x8651,	// (0x00042db3) level_1_battery_ParamLimits

0x865e,	// (0x00042dc0) level_2_battery_ParamLimits

0x866b,	// (0x00042dcd) level_3_battery_ParamLimits

0x8678,	// (0x00042dda) level_4_battery_ParamLimits

0x8685,	// (0x00042de7) level_5_battery_ParamLimits

0x8692,	// (0x00042df4) level_6_battery_ParamLimits

0x869f,	// (0x00042e01) level_7_battery_ParamLimits

0xa329,	// (0x00044a8b) bg_status_flat_pane_g1

0xa331,	// (0x00044a93) bg_status_flat_pane_g2

0xa339,	// (0x00044a9b) bg_status_flat_pane_g3

0xa341,	// (0x00044aa3) bg_status_flat_pane_g4

0xa349,	// (0x00044aab) bg_status_flat_pane_g5

0xa351,	// (0x00044ab3) bg_status_flat_pane_g6

0xa359,	// (0x00044abb) bg_status_flat_pane_g7

0x7800,	// (0x00041f62) tabs_3_active_pane_t1_ParamLimits

0x7800,	// (0x00041f62) tabs_3_passive_pane_t1_ParamLimits

0x781a,	// (0x00041f7c) tabs_4_active_pane_t1_ParamLimits

0x781a,	// (0x00041f7c) tabs_4_1_passive_pane_t1_ParamLimits

0x8211,	// (0x00042973) tabs_2_active_pane_t1_ParamLimits

0x8211,	// (0x00042973) tabs_2_passive_pane_t1_ParamLimits

0x8223,	// (0x00042985) bg_active_tab_pane_cp4_ParamLimits

0x8231,	// (0x00042993) tabs_2_long_active_pane_t1_ParamLimits

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp4_ParamLimits

0x6509,	// (0x00040c6b) list_single_midp_graphic_pane_t1_ParamLimits

0x8223,	// (0x00042985) bg_active_tab_pane_cp5_ParamLimits

0x8250,	// (0x000429b2) tabs_3_long_active_pane_t1_ParamLimits

0x8244,	// (0x000429a6) bg_passive_tab_pane_cp5_ParamLimits

0x6509,	// (0x00040c6b) list_single_midp_graphic_pane_t1

0x9683,	// (0x00043de5) bg_status_flat_pane_ParamLimits

0x9746,	// (0x00043ea8) indicator_pane_cp2_ParamLimits

0x9746,	// (0x00043ea8) indicator_pane_cp2

0x986a,	// (0x00043fcc) navi_pane_srt_ParamLimits

0x986a,	// (0x00043fcc) navi_pane_srt

0x988e,	// (0x00043ff0) popup_clock_digital_analogue_window_cp1

0x78c7,	// (0x00042029) indicator_pane_t1

0x8c99,	// (0x000433fb) copy_highlight_pane

0x8c99,	// (0x000433fb) cursor_graphics_pane

0x8c99,	// (0x000433fb) graphic_within_text_pane

0x8c99,	// (0x000433fb) link_highlight_pane

0xab3e,	// (0x000452a0) popup_preview_text_window_t5_ParamLimits

0xab3e,	// (0x000452a0) popup_preview_text_window_t5

0x8dc5,	// (0x00043527) cursor_digital_pane

0x8dc5,	// (0x00043527) cursor_primary_pane

0x8dd6,	// (0x00043538) cursor_primary_small_pane

0x8dde,	// (0x00043540) cursor_secondary_pane

0x8de6,	// (0x00043548) cursor_title_pane

0x8dc5,	// (0x00043527) link_highlight_digital_pane

0x8dcd,	// (0x0004352f) link_highlight_primary_pane

0x8dd6,	// (0x00043538) link_highlight_primary_small_pane

0x8dde,	// (0x00043540) link_highlight_secondary_pane

0x8de6,	// (0x00043548) link_highlight_title_pane

0x8dc5,	// (0x00043527) copy_highlight_digital_pane

0x8dc5,	// (0x00043527) copy_highlight_primary_pane

0x8dd6,	// (0x00043538) copy_highlight_primary_small_pane

0x8dde,	// (0x00043540) copy_highlight_secondary_pane

0x8de6,	// (0x00043548) copy_highlight_title_pane

0x8dde,	// (0x00043540) graphic_text_digital_pane

0xa3c7,	// (0x00044b29) graphic_text_primary_pane

0xa3d0,	// (0x00044b32) graphic_text_primary_small_pane

0x8dd6,	// (0x00043538) graphic_text_secondary_pane

0x8dc5,	// (0x00043527) graphic_text_title_pane

0x8dee,	// (0x00043550) cursor_primary_pane_g1

0xa3b9,	// (0x00044b1b) cursor_text_primary_t1

0xa3a1,	// (0x00044b03) cursor_primary_small_pane_g1

0xa3ab,	// (0x00044b0d) cursor_text_primary_small_t1

0xa389,	// (0x00044aeb) cursor_primary_small_pane_g1_copy1

0xa393,	// (0x00044af5) cursor_text_primary_small_t1_copy1

0xa371,	// (0x00044ad3) cursor_text_title_t1

0xa37f,	// (0x00044ae1) cursor_title_pane_g1

0x8dee,	// (0x00043550) cursor_digital_pane_g1

0x8df8,	// (0x0004355a) cursor_text_digital_t1

0x8e1d,	// (0x0004357f) link_highlight_primary_pane_g1

0xa31a,	// (0x00044a7c) link_highlight_primary_pane_t1

0x8e06,	// (0x00043568) link_highlight_primary_small_pane_g1

0x8e0e,	// (0x00043570) link_highlight_primary_small_pane_t1

0x8e1d,	// (0x0004357f) link_highlight_secondary_pane_g1

0x8e25,	// (0x00043587) link_highlight_secondary_pane_t1

0xa28e,	// (0x000449f0) link_highlight_title_pane_g1

0xa296,	// (0x000449f8) link_highlight_title_pane_t1

0xa277,	// (0x000449d9) link_highlight_digital_pane_g1

0xa27f,	// (0x000449e1) link_highlight_digital_pane_t1

0xa14f,	// (0x000448b1) copy_highlight_primary_pane_g1

0xa157,	// (0x000448b9) copy_highlight_primary_pane_t1

0xa129,	// (0x0004488b) copy_highlight_primary_small_pane_g1

0xa140,	// (0x000448a2) copy_highlight_primary_small_pane_t1

0x8e34,	// (0x00043596) copy_highlight_secondary_pane_g1

0x8e3c,	// (0x0004359e) copy_highlight_secondary_pane_t1

0xa129,	// (0x0004488b) copy_highlight_title_pane_g1

0xa131,	// (0x00044893) copy_highlight_title_pane_t1

0xa14f,	// (0x000448b1) copy_highlight_digital_pane_g1

0xb3ab,	// (0x00045b0d) copy_highlight_digital_pane_t1

0xb2ff,	// (0x00045a61) graphic_text_primary_pane_g1

0xb38f,	// (0x00045af1) graphic_text_primary_pane_t1

0xb39d,	// (0x00045aff) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004a146) graphic_text_primary_pane_t

0xb36b,	// (0x00045acd) graphic_text_primary_small_pane_g1

0xb373,	// (0x00045ad5) graphic_text_primary_small_pane_t1

0xb381,	// (0x00045ae3) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004a141) graphic_text_primary_small_pane_t

0xb347,	// (0x00045aa9) graphic_text_secondary_pane_g1

0xb34f,	// (0x00045ab1) graphic_text_secondary_pane_t1

0xb35d,	// (0x00045abf) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004a13c) graphic_text_secondary_pane_t

0xb323,	// (0x00045a85) graphic_text_title_pane_g1

0xb32b,	// (0x00045a8d) graphic_text_title_pane_t1

0xb339,	// (0x00045a9b) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004a137) graphic_text_title_pane_t

0xb2ff,	// (0x00045a61) graphic_text_digital_pane_g1

0xb307,	// (0x00045a69) graphic_text_digital_pane_t1

0xb315,	// (0x00045a77) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004a132) graphic_text_digital_pane_t

0x77ea,	// (0x00041f4c) navi_icon_pane_srt_ParamLimits

0x77ea,	// (0x00041f4c) navi_icon_pane_srt

0x770a,	// (0x00041e6c) navi_midp_pane_srt

0x770a,	// (0x00041e6c) navi_navi_pane_srt

0x77ea,	// (0x00041f4c) navi_text_pane_srt_ParamLimits

0x77ea,	// (0x00041f4c) navi_text_pane_srt

0xb2ca,	// (0x00045a2c) navi_navi_icon_text_pane_srt

0xb2d2,	// (0x00045a34) navi_navi_pane_srt_g1_ParamLimits

0xb2d2,	// (0x00045a34) navi_navi_pane_srt_g1

0xb2e4,	// (0x00045a46) navi_navi_pane_srt_g2_ParamLimits

0xb2e4,	// (0x00045a46) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004a12d) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004a12d) navi_navi_pane_srt_g

0xb2f6,	// (0x00045a58) navi_navi_tabs_pane_srt

0xb2ca,	// (0x00045a2c) navi_navi_text_pane_srt

0xb2ca,	// (0x00045a2c) navi_navi_volume_pane_srt

0xb2bb,	// (0x00045a1d) navi_navi_text_pane_srt_t1

0x6927,	// (0x00041089) navi_navi_volume_pane_srt_g1

0x692f,	// (0x00041091) volume_small_pane_srt_ParamLimits

0x692f,	// (0x00041091) volume_small_pane_srt

0x6265,	// (0x000409c7) volume_small_pane_srt_g1_ParamLimits

0x6265,	// (0x000409c7) volume_small_pane_srt_g1

0x6275,	// (0x000409d7) volume_small_pane_srt_g2_ParamLimits

0x6275,	// (0x000409d7) volume_small_pane_srt_g2

0x6286,	// (0x000409e8) volume_small_pane_srt_g3_ParamLimits

0x6286,	// (0x000409e8) volume_small_pane_srt_g3

0x6297,	// (0x000409f9) volume_small_pane_srt_g4_ParamLimits

0x6297,	// (0x000409f9) volume_small_pane_srt_g4

0x62a8,	// (0x00040a0a) volume_small_pane_srt_g5_ParamLimits

0x62a8,	// (0x00040a0a) volume_small_pane_srt_g5

0x62b9,	// (0x00040a1b) volume_small_pane_srt_g6_ParamLimits

0x62b9,	// (0x00040a1b) volume_small_pane_srt_g6

0x62ca,	// (0x00040a2c) volume_small_pane_srt_g7_ParamLimits

0x62ca,	// (0x00040a2c) volume_small_pane_srt_g7

0x62db,	// (0x00040a3d) volume_small_pane_srt_g8_ParamLimits

0x62db,	// (0x00040a3d) volume_small_pane_srt_g8

0x62ec,	// (0x00040a4e) volume_small_pane_srt_g9_ParamLimits

0x62ec,	// (0x00040a4e) volume_small_pane_srt_g9

0x62fd,	// (0x00040a5f) volume_small_pane_srt_g10_ParamLimits

0x62fd,	// (0x00040a5f) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00049edc) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00049edc) volume_small_pane_srt_g

0x7bc4,	// (0x00042326) query_popup_data_pane_cp2

0xb2a1,	// (0x00045a03) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2a1,	// (0x00045a03) navi_navi_icon_text_pane_srt_t1

0xa3c7,	// (0x00044b29) navi_tabs_2_long_pane_srt

0xa3c7,	// (0x00044b29) navi_tabs_2_pane_srt

0xa3c7,	// (0x00044b29) navi_tabs_3_long_pane_srt

0xa3c7,	// (0x00044b29) navi_tabs_3_pane_srt

0xa3c7,	// (0x00044b29) navi_tabs_4_pane_srt

0x6907,	// (0x00041069) tabs_2_active_pane_srt_ParamLimits

0x6907,	// (0x00041069) tabs_2_active_pane_srt

0x6917,	// (0x00041079) tabs_2_passive_pane_srt_ParamLimits

0x6917,	// (0x00041079) tabs_2_passive_pane_srt

0x8ff7,	// (0x00043759) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ff7,	// (0x00043759) bg_passive_tab_pane_cp1_srt

0xb26d,	// (0x000459cf) bg_passive_tab_pane_g1_cp1_srt

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp1_srt

0xb276,	// (0x000459d8) bg_passive_tab_pane_g3_cp1_srt

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp1_srt_ParamLimits

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp1_srt

0xb27f,	// (0x000459e1) tabs_2_active_pane_srt_g1

0xb287,	// (0x000459e9) tabs_2_active_pane_srt_t1_ParamLimits

0xb287,	// (0x000459e9) tabs_2_active_pane_srt_t1

0xb26d,	// (0x000459cf) bg_active_tab_pane_g1_cp1_srt

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp1_srt

0xb276,	// (0x000459d8) bg_active_tab_pane_g3_cp1_srt

0x68d4,	// (0x00041036) tabs_3_active_pane_srt_ParamLimits

0x68d4,	// (0x00041036) tabs_3_active_pane_srt

0x68e5,	// (0x00041047) tabs_3_passive_pane_cp_srt_ParamLimits

0x68e5,	// (0x00041047) tabs_3_passive_pane_cp_srt

0x68f6,	// (0x00041058) tabs_3_passive_pane_srt_ParamLimits

0x68f6,	// (0x00041058) tabs_3_passive_pane_srt

0x8ff7,	// (0x00043759) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ff7,	// (0x00043759) bg_passive_tab_pane_cp2_srt

0x8e4b,	// (0x000435ad) bg_passive_tab_pane_g1_cp2_srt

0x88e6,	// (0x00043048) bg_passive_tab_pane_g2_cp2_srt

0x8e54,	// (0x000435b6) bg_passive_tab_pane_g3_cp2_srt

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp2_srt_ParamLimits

0x77ea,	// (0x00041f4c) bg_active_tab_pane_cp2_srt

0xb253,	// (0x000459b5) tabs_3_active_pane_srt_g1

0xb25b,	// (0x000459bd) tabs_3_active_pane_srt_t1_ParamLimits

0xb25b,	// (0x000459bd) tabs_3_active_pane_srt_t1

0x8e4b,	// (0x000435ad) bg_active_tab_pane_g1_cp2_srt

0x88e6,	// (0x00043048) bg_active_tab_pane_g2_cp2_srt

0x8e54,	// (0x000435b6) bg_active_tab_pane_g3_cp2_srt

0x688c,	// (0x00040fee) tabs_4_active_pane_srt_ParamLimits

0x688c,	// (0x00040fee) tabs_4_active_pane_srt

0x689e,	// (0x00041000) tabs_4_passive_pane_cp2_srt_ParamLimits

0x689e,	// (0x00041000) tabs_4_passive_pane_cp2_srt

0x8fa9,	// (0x0004370b) aid_size_cell_toolbar

0x8244,	// (0x000429a6) main_idle_act_pane_ParamLimits

0x9194,	// (0x000438f6) popup_large_graphic_colour_window_ParamLimits

0x951d,	// (0x00043c7f) popup_toolbar_window_ParamLimits

0x951d,	// (0x00043c7f) popup_toolbar_window

0xb0b6,	// (0x00045818) list_single_graphic_2heading_pane_ParamLimits

0xb0b6,	// (0x00045818) list_single_graphic_2heading_pane

0x8400,	// (0x00042b62) aid_size_cell_apps_grid_lsc_pane

0x8412,	// (0x00042b74) aid_size_cell_apps_grid_prt_pane

0x8ff7,	// (0x00043759) bg_wml_button_pane_cp1_ParamLimits

0x8ff7,	// (0x00043759) bg_wml_button_pane_cp1

0x9dad,	// (0x0004450f) form_midp_field_text_pane_t1_ParamLimits

0x9b9f,	// (0x00044301) input_focus_pane_cp050_ParamLimits

0x9de4,	// (0x00044546) list_midp_form_text_pane_ParamLimits

0x9d8a,	// (0x000444ec) input_focus_pane_cp051_ParamLimits

0x9d9e,	// (0x00044500) list_midp_choice_pane_ParamLimits

0x9c30,	// (0x00044392) list_single_2graphic_pane_cp3_ParamLimits

0x9c30,	// (0x00044392) list_single_2graphic_pane_cp3

0x9c54,	// (0x000443b6) list_single_midp_graphic_pane_ParamLimits

0x9c54,	// (0x000443b6) list_single_midp_graphic_pane

0x5386,	// (0x0003fae8) list_single_graphic_2heading_pane_g1_ParamLimits

0x5386,	// (0x0003fae8) list_single_graphic_2heading_pane_g1

0x5392,	// (0x0003faf4) list_single_graphic_2heading_pane_g4_ParamLimits

0x5392,	// (0x0003faf4) list_single_graphic_2heading_pane_g4

0x539e,	// (0x0003fb00) list_single_graphic_2heading_pane_g5_ParamLimits

0x539e,	// (0x0003fb00) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00049f2f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00049f2f) list_single_graphic_2heading_pane_g

0x53aa,	// (0x0003fb0c) list_single_graphic_2heading_pane_t1_ParamLimits

0x53aa,	// (0x0003fb0c) list_single_graphic_2heading_pane_t1

0x53be,	// (0x0003fb20) list_single_graphic_2heading_pane_t2_ParamLimits

0x53be,	// (0x0003fb20) list_single_graphic_2heading_pane_t2

0x53da,	// (0x0003fb3c) list_single_graphic_2heading_pane_t3_ParamLimits

0x53da,	// (0x0003fb3c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00049f36) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00049f36) list_single_graphic_2heading_pane_t

0x99ed,	// (0x0004414f) bg_popup_sub_pane_cp2

0x9a17,	// (0x00044179) grid_toobar_pane

0x6478,	// (0x00040bda) cell_toolbar_pane_ParamLimits

0x6478,	// (0x00040bda) cell_toolbar_pane

0x9a53,	// (0x000441b5) cell_toolbar_pane_g1_ParamLimits

0x9a53,	// (0x000441b5) cell_toolbar_pane_g1

0x9a67,	// (0x000441c9) cell_toolbar_pane_g2_ParamLimits

0x9a67,	// (0x000441c9) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00049f44) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00049f44) cell_toolbar_pane_g

0x9a89,	// (0x000441eb) grid_highlight_pane_cp2_ParamLimits

0x9a89,	// (0x000441eb) grid_highlight_pane_cp2

0x9aa3,	// (0x00044205) toolbar_button_pane

0x9aaf,	// (0x00044211) toolbar_button_pane_g1

0x9ab7,	// (0x00044219) toolbar_button_pane_g2

0x9abf,	// (0x00044221) toolbar_button_pane_g3

0x9ac7,	// (0x00044229) toolbar_button_pane_g4

0x9acf,	// (0x00044231) toolbar_button_pane_g5

0x9ad7,	// (0x00044239) toolbar_button_pane_g6

0x9adf,	// (0x00044241) toolbar_button_pane_g7

0x9ae7,	// (0x00044249) toolbar_button_pane_g8

0x9aef,	// (0x00044251) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00049f49) toolbar_button_pane_g

0x64bc,	// (0x00040c1e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64bc,	// (0x00040c1e) list_single_2graphic_pane_g1_cp3

0x64c8,	// (0x00040c2a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x64c8,	// (0x00040c2a) list_single_2graphic_pane_g2_cp3

0x64d9,	// (0x00040c3b) list_single_2graphic_pane_g3_cp3

0x64e1,	// (0x00040c43) list_single_2graphic_pane_g4_cp3_ParamLimits

0x64e1,	// (0x00040c43) list_single_2graphic_pane_g4_cp3

0x64ed,	// (0x00040c4f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x64ed,	// (0x00040c4f) list_single_2graphic_pane_t1_cp3

0x94dc,	// (0x00043c3e) list_single_midp_graphic_pane_g2_ParamLimits

0x94dc,	// (0x00043c3e) list_single_midp_graphic_pane_g2

0x5376,	// (0x0003fad8) aid_zoom_text_primary

0x6454,	// (0x00040bb6) aid_zoom_text_secondary

0x8f08,	// (0x0004366a) status_small_pane_g7_ParamLimits

0x8f08,	// (0x0004366a) status_small_pane_g7

0x8f2b,	// (0x0004368d) status_small_pane_t1_ParamLimits

0x7721,	// (0x00041e83) title_pane_g2

0x0003,

0xf56a,	// (0x00049ccc) title_pane_g

0x7c65,	// (0x000423c7) aid_size_cell_colour_1_pane_ParamLimits

0x7c65,	// (0x000423c7) aid_size_cell_colour_1_pane

0x7c79,	// (0x000423db) aid_size_cell_colour_2_pane_ParamLimits

0x7c79,	// (0x000423db) aid_size_cell_colour_2_pane

0x7c8d,	// (0x000423ef) aid_size_cell_colour_3_pane_ParamLimits

0x7c8d,	// (0x000423ef) aid_size_cell_colour_3_pane

0x7ca1,	// (0x00042403) aid_size_cell_colour_4_pane_ParamLimits

0x7ca1,	// (0x00042403) aid_size_cell_colour_4_pane

0x5ec1,	// (0x00040623) title_pane_stacon_g1_ParamLimits

0x5ec1,	// (0x00040623) title_pane_stacon_g1

0xa1ae,	// (0x00044910) popup_note_wait_window_g3_ParamLimits

0xa1ae,	// (0x00044910) popup_note_wait_window_g3

0xa224,	// (0x00044986) popup_note_wait_window_t5_ParamLimits

0xa224,	// (0x00044986) popup_note_wait_window_t5

0x770a,	// (0x00041e6c) main_feb_china_hwr_fs_writing_pane

0x9079,	// (0x000437db) popup_feb_china_hwr_fs_window_ParamLimits

0x9079,	// (0x000437db) popup_feb_china_hwr_fs_window

0x651f,	// (0x00040c81) aid_size_cell_hwr_fs_ParamLimits

0x651f,	// (0x00040c81) aid_size_cell_hwr_fs

0x9b9f,	// (0x00044301) bg_popup_sub_pane_cp3_ParamLimits

0x9b9f,	// (0x00044301) bg_popup_sub_pane_cp3

0x6534,	// (0x00040c96) grid_hwr_fs_pane_ParamLimits

0x6534,	// (0x00040c96) grid_hwr_fs_pane

0x654c,	// (0x00040cae) linegrid_hwr_fs_pane_ParamLimits

0x654c,	// (0x00040cae) linegrid_hwr_fs_pane

0x655c,	// (0x00040cbe) cell_hwr_fs_pane_ParamLimits

0x655c,	// (0x00040cbe) cell_hwr_fs_pane

0x9bab,	// (0x0004430d) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bab,	// (0x0004430d) linegrid_hwr_fs_pane_g1

0x9bb7,	// (0x00044319) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bb7,	// (0x00044319) linegrid_hwr_fs_pane_g2

0x9bc9,	// (0x0004432b) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bc9,	// (0x0004432b) linegrid_hwr_fs_pane_g3

0x657e,	// (0x00040ce0) linegrid_hwr_fs_pane_g4_ParamLimits

0x657e,	// (0x00040ce0) linegrid_hwr_fs_pane_g4

0x6598,	// (0x00040cfa) linegrid_hwr_fs_pane_g5_ParamLimits

0x6598,	// (0x00040cfa) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x00049f74) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x00049f74) linegrid_hwr_fs_pane_g

0x9bd5,	// (0x00044337) cell_hwr_fs_pane_g1_ParamLimits

0x9bd5,	// (0x00044337) cell_hwr_fs_pane_g1

0x9924,	// (0x00044086) cell_hwr_fs_pane_g2_ParamLimits

0x9924,	// (0x00044086) cell_hwr_fs_pane_g2

0x9beb,	// (0x0004434d) cell_hwr_fs_pane_g3_ParamLimits

0x9beb,	// (0x0004434d) cell_hwr_fs_pane_g3

0x9bf8,	// (0x0004435a) cell_hwr_fs_pane_g4_ParamLimits

0x9bf8,	// (0x0004435a) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x00049f7f) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x00049f7f) cell_hwr_fs_pane_g

0x65ae,	// (0x00040d10) cell_hwr_fs_pane_t1

0x770a,	// (0x00041e6c) grid_highlight_pane_cp6

0x770a,	// (0x00041e6c) main_idle_act2_pane

0x81b7,	// (0x00042919) aid_inside_area_popup_secondary

0xa85b,	// (0x00044fbd) aid_inside_area_window_primary_ParamLimits

0xa85b,	// (0x00044fbd) aid_inside_area_window_primary

0xb3ba,	// (0x00045b1c) ai2_news_ticker_pane

0xb3c2,	// (0x00045b24) aid_size_cell_ai1_link_ParamLimits

0xb3c2,	// (0x00045b24) aid_size_cell_ai1_link

0xb3dc,	// (0x00045b3e) popup_ai2_data_window_ParamLimits

0xb3dc,	// (0x00045b3e) popup_ai2_data_window

0xb3f2,	// (0x00045b54) popup_ai2_link_window_ParamLimits

0xb3f2,	// (0x00045b54) popup_ai2_link_window

0x9b9f,	// (0x00044301) bg_popup_sub_pane_cp4_ParamLimits

0x9b9f,	// (0x00044301) bg_popup_sub_pane_cp4

0xb406,	// (0x00045b68) grid_ai2_link_pane_ParamLimits

0xb406,	// (0x00045b68) grid_ai2_link_pane

0xb41d,	// (0x00045b7f) popup_ai2_link_window_g1_ParamLimits

0xb41d,	// (0x00045b7f) popup_ai2_link_window_g1

0xb429,	// (0x00045b8b) popup_ai2_link_window_g2_ParamLimits

0xb429,	// (0x00045b8b) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004a14b) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004a14b) popup_ai2_link_window_g

0xb438,	// (0x00045b9a) ai2_mp_button_pane

0xb440,	// (0x00045ba2) ai2_mp_volume_pane

0x9d8a,	// (0x000444ec) bg_popup_sub_pane_cp5_ParamLimits

0x9d8a,	// (0x000444ec) bg_popup_sub_pane_cp5

0xb448,	// (0x00045baa) heading_ai2_gene_pane_ParamLimits

0xb448,	// (0x00045baa) heading_ai2_gene_pane

0xb454,	// (0x00045bb6) list_ai2_gene_pane_ParamLimits

0xb454,	// (0x00045bb6) list_ai2_gene_pane

0xb49c,	// (0x00045bfe) cell_ai2_link_pane_ParamLimits

0xb49c,	// (0x00045bfe) cell_ai2_link_pane

0xb4b2,	// (0x00045c14) cell_ai2_link_pane_g1

0x770a,	// (0x00041e6c) grid_highlight_pane_cp7

0x6944,	// (0x000410a6) ai2_mp_volume_pane_g1

0xb582,	// (0x00045ce4) ai2_mp_volume_pane_g2

0xb4f7,	// (0x00045c59) list_ai2_gene_pane_t1

0xb58a,	// (0x00045cec) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004a164) ai2_mp_volume_pane_g

0x694c,	// (0x000410ae) volume_small_pane_cp3

0xb592,	// (0x00045cf4) aid_size_cell_ai2_button

0xb59a,	// (0x00045cfc) grid_ai2_button_pane

0xb5a3,	// (0x00045d05) cell_ai2_button_pane_ParamLimits

0xb5a3,	// (0x00045d05) cell_ai2_button_pane

0x7700,	// (0x00041e62) cell_ai2_button_pane_g1

0x770a,	// (0x00041e6c) grid_highlight_pane_cp8

0xb542,	// (0x00045ca4) ai2_gene_pane_t1_ParamLimits

0xb542,	// (0x00045ca4) ai2_gene_pane_t1

0x8f9f,	// (0x00043701) aid_height_parent_landscape

0xaeed,	// (0x0004564f) aid_height_set_list

0xaefe,	// (0x00045660) aid_size_parent

0xb1e1,	// (0x00045943) aid_size_cell_graphic_pane_ParamLimits

0xb464,	// (0x00045bc6) popup_ai2_data_window_g1_ParamLimits

0xb464,	// (0x00045bc6) popup_ai2_data_window_g1

0xb470,	// (0x00045bd2) ai2_news_ticker_pane_g1

0xb478,	// (0x00045bda) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004a150) ai2_news_ticker_pane_g

0xb480,	// (0x00045be2) ai2_news_ticker_pane_t1

0xb48e,	// (0x00045bf0) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004a155) ai2_news_ticker_pane_t

0xb4bb,	// (0x00045c1d) heading_ai2_gene_pane_g1

0xb4c3,	// (0x00045c25) heading_ai2_gene_pane_t1_ParamLimits

0xb4c3,	// (0x00045c25) heading_ai2_gene_pane_t1

0xb4d8,	// (0x00045c3a) list_highlight_pane_cp6

0xb4e0,	// (0x00045c42) ai2_gene_pane_ParamLimits

0xb4e0,	// (0x00045c42) ai2_gene_pane

0xb505,	// (0x00045c67) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004a15a) list_ai2_gene_pane_t

0xb513,	// (0x00045c75) list_highlight_pane_cp8_ParamLimits

0xb513,	// (0x00045c75) list_highlight_pane_cp8

0xb524,	// (0x00045c86) ai2_gene_pane_g1_ParamLimits

0xb524,	// (0x00045c86) ai2_gene_pane_g1

0xb536,	// (0x00045c98) ai2_gene_pane_g2_ParamLimits

0xb536,	// (0x00045c98) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004a15f) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004a15f) ai2_gene_pane_g

0x7fec,	// (0x0004274e) scroll_pane_cp12

0x6413,	// (0x00040b75) control_pane_t3_ParamLimits

0x6413,	// (0x00040b75) control_pane_t3

0x8f1c,	// (0x0004367e) status_small_pane_g8_ParamLimits

0x8f1c,	// (0x0004367e) status_small_pane_g8

0x915f,	// (0x000438c1) popup_find_window_ParamLimits

0x9372,	// (0x00043ad4) popup_note_image_window_ParamLimits

0x53f2,	// (0x0003fb54) list_double2_graphic_pane_vc_g1_ParamLimits

0x53f2,	// (0x0003fb54) list_double2_graphic_pane_vc_g1

0x9f1d,	// (0x0004467f) list_double2_graphic_pane_vc_g2_ParamLimits

0x9f1d,	// (0x0004467f) list_double2_graphic_pane_vc_g2

0x64a8,	// (0x00040c0a) list_double2_graphic_pane_vc_g3_ParamLimits

0x64a8,	// (0x00040c0a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00049f3d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00049f3d) list_double2_graphic_pane_vc_g

0x53fe,	// (0x0003fb60) list_double2_graphic_pane_vc_t1_ParamLimits

0x53fe,	// (0x0003fb60) list_double2_graphic_pane_vc_t1

0x9f1d,	// (0x0004467f) list_single_heading_pane_vc_g1_ParamLimits

0x9f1d,	// (0x0004467f) list_single_heading_pane_vc_g1

0x64a8,	// (0x00040c0a) list_single_heading_pane_vc_g2_ParamLimits

0x64a8,	// (0x00040c0a) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00049f5e) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00049f5e) list_single_heading_pane_vc_g

0x5414,	// (0x0003fb76) list_single_heading_pane_vc_t1_ParamLimits

0x5414,	// (0x0003fb76) list_single_heading_pane_vc_t1

0x542a,	// (0x0003fb8c) list_single_heading_pane_vc_t2_ParamLimits

0x542a,	// (0x0003fb8c) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x00049f63) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x00049f63) list_single_heading_pane_vc_t

0x9af7,	// (0x00044259) list_setting_number_pane_vc_g1_ParamLimits

0x9af7,	// (0x00044259) list_setting_number_pane_vc_g1

0x9b03,	// (0x00044265) list_setting_number_pane_vc_g2_ParamLimits

0x9b03,	// (0x00044265) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x00049f68) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x00049f68) list_setting_number_pane_vc_g

0x9b0f,	// (0x00044271) list_setting_number_pane_vc_t1_ParamLimits

0x9b0f,	// (0x00044271) list_setting_number_pane_vc_t1

0x9b23,	// (0x00044285) list_setting_number_pane_vc_t2_ParamLimits

0x9b23,	// (0x00044285) list_setting_number_pane_vc_t2

0x9b3f,	// (0x000442a1) list_setting_number_pane_vc_t3_ParamLimits

0x9b3f,	// (0x000442a1) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x00049f6d) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x00049f6d) list_setting_number_pane_vc_t

0x9b65,	// (0x000442c7) set_value_pane_vc_ParamLimits

0x9b65,	// (0x000442c7) set_value_pane_vc

0xb0b6,	// (0x00045818) list_double2_graphic_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double2_graphic_pane_vc

0x67e8,	// (0x00040f4a) list_double2_large_graphic_pane_vc_ParamLimits

0x67e8,	// (0x00040f4a) list_double2_large_graphic_pane_vc

0xb0b6,	// (0x00045818) list_double2_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double2_pane_vc

0xb0b6,	// (0x00045818) list_double_graphic_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double_graphic_heading_pane_vc

0xb0b6,	// (0x00045818) list_double_graphic_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double_graphic_pane_vc

0xb0b6,	// (0x00045818) list_double_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double_heading_pane_vc

0x67e8,	// (0x00040f4a) list_double_large_graphic_pane_vc_ParamLimits

0x67e8,	// (0x00040f4a) list_double_large_graphic_pane_vc

0xb0b6,	// (0x00045818) list_double_number_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double_number_pane_vc

0xb0b6,	// (0x00045818) list_double_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double_pane_vc

0xb0b6,	// (0x00045818) list_double_time_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_double_time_pane_vc

0xb0b6,	// (0x00045818) list_setting_number_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_setting_number_pane_vc

0xb0b6,	// (0x00045818) list_setting_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_setting_pane_vc

0xb0b6,	// (0x00045818) list_single_graphic_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_single_graphic_heading_pane_vc

0xb0b6,	// (0x00045818) list_single_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00045818) list_single_heading_pane_vc

0x67f9,	// (0x00040f5b) list_single_number_heading_pane_vc_ParamLimits

0x67f9,	// (0x00040f5b) list_single_number_heading_pane_vc

0x53f2,	// (0x0003fb54) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x53f2,	// (0x0003fb54) list_double_graphic_heading_pane_vc_g1

0x9f1d,	// (0x0004467f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9f1d,	// (0x0004467f) list_double_graphic_heading_pane_vc_g2

0x64a8,	// (0x00040c0a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x64a8,	// (0x00040c0a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00049f3d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00049f3d) list_double_graphic_heading_pane_vc_g

0x5519,	// (0x0003fc7b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5519,	// (0x0003fc7b) list_double_graphic_heading_pane_vc_t1

0x5414,	// (0x0003fb76) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5414,	// (0x0003fb76) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0004a16b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0004a16b) list_double_graphic_heading_pane_vc_t

0x9af7,	// (0x00044259) list_setting_pane_vc_g1_ParamLimits

0x9af7,	// (0x00044259) list_setting_pane_vc_g1

0x9b03,	// (0x00044265) list_setting_pane_vc_g2_ParamLimits

0x9b03,	// (0x00044265) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x00049f68) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x00049f68) list_setting_pane_vc_g

0xb7db,	// (0x00045f3d) list_setting_pane_vc_t1_ParamLimits

0xb7db,	// (0x00045f3d) list_setting_pane_vc_t1

0xb7ef,	// (0x00045f51) list_setting_pane_vc_t2_ParamLimits

0xb7ef,	// (0x00045f51) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0004a199) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0004a199) list_setting_pane_vc_t

0x9b65,	// (0x000442c7) set_value_pane_cp_vc_ParamLimits

0x9b65,	// (0x000442c7) set_value_pane_cp_vc

0x9f1d,	// (0x0004467f) list_single_number_heading_pane_vc_g1_ParamLimits

0x9f1d,	// (0x0004467f) list_single_number_heading_pane_vc_g1

0x64a8,	// (0x00040c0a) list_single_number_heading_pane_vc_g2_ParamLimits

0x64a8,	// (0x00040c0a) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00049f5e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00049f5e) list_single_number_heading_pane_vc_g

0x5414,	// (0x0003fb76) list_single_number_heading_pane_vc_t1_ParamLimits

0x5414,	// (0x0003fb76) list_single_number_heading_pane_vc_t1

0x552d,	// (0x0003fc8f) list_single_number_heading_pane_vc_t2_ParamLimits

0x552d,	// (0x0003fc8f) list_single_number_heading_pane_vc_t2

0x5541,	// (0x0003fca3) list_single_number_heading_pane_vc_t3_ParamLimits

0x5541,	// (0x0003fca3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x0004a19e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004a19e) list_single_number_heading_pane_vc_t

0x53f2,	// (0x0003fb54) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x53f2,	// (0x0003fb54) list_single_graphic_heading_pane_vc_g1

0x9f1d,	// (0x0004467f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9f1d,	// (0x0004467f) list_single_graphic_heading_pane_vc_g4

0x64a8,	// (0x00040c0a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x64a8,	// (0x00040c0a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00049f3d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00049f3d) list_single_graphic_heading_pane_vc_g

0x5414,	// (0x0003fb76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5414,	// (0x0003fb76) list_single_graphic_heading_pane_vc_t1

0x5553,	// (0x0003fcb5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5553,	// (0x0003fcb5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0004a1a5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a1a5) list_single_graphic_heading_pane_vc_t

0x9f1d,	// (0x0004467f) list_double2_pane_vc_g1_ParamLimits

0x9f1d,	// (0x0004467f) list_double2_pane_vc_g1

0x64a8,	// (0x00040c0a) list_double2_pane_vc_g2_ParamLimits

0x64a8,	// (0x00040c0a) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x00049f5e) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x00049f5e) list_double2_pane_vc_g

0x5567,	// (0x0003fcc9) list_double2_pane_vc_t1_ParamLimits

0x5567,	// (0x0003fcc9) list_double2_pane_vc_t1

0x6955,	// (0x000410b7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6955,	// (0x000410b7) list_double2_large_graphic_pane_vc_g1

0x6961,	// (0x000410c3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6961,	// (0x000410c3) list_double2_large_graphic_pane_vc_g2

0x696d,	// (0x000410cf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x696d,	// (0x000410cf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa48,	// (0x0004a1aa) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0004a1aa) list_double2_large_graphic_pane_vc_g

0x557d,	// (0x0003fcdf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x557d,	// (0x0003fcdf) list_double2_large_graphic_pane_vc_t1

0x6979,	// (0x000410db) list_double_time_pane_vc_g1_ParamLimits

0x6979,	// (0x000410db) list_double_time_pane_vc_g1

0x6985,	// (0x000410e7) list_double_time_pane_vc_g2_ParamLimits

0x6985,	// (0x000410e7) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x0004a1b1) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x0004a1b1) list_double_time_pane_vc_g

0x5593,	// (0x0003fcf5) list_double_time_pane_vc_t1_ParamLimits

0x5593,	// (0x0003fcf5) list_double_time_pane_vc_t1

0x55ac,	// (0x0003fd0e) list_double_time_pane_vc_t2_ParamLimits

0x55ac,	// (0x0003fd0e) list_double_time_pane_vc_t2

0x55ec,	// (0x0003fd4e) list_double_time_pane_vc_t3_ParamLimits

0x55ec,	// (0x0003fd4e) list_double_time_pane_vc_t3

0x5604,	// (0x0003fd66) list_double_time_pane_vc_t4_ParamLimits

0x5604,	// (0x0003fd66) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0004a1b6) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0004a1b6) list_double_time_pane_vc_t

0x9f1d,	// (0x0004467f) list_double_pane_vc_g1_ParamLimits

0x9f1d,	// (0x0004467f) list_double_pane_vc_g1

0x64a8,	// (0x00040c0a) list_double_pane_vc_g2_ParamLimits

0x64a8,	// (0x00040c0a) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x00049f5e) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x00049f5e) list_double_pane_vc_g

0x5618,	// (0x0003fd7a) list_double_pane_vc_t1_ParamLimits

0x5618,	// (0x0003fd7a) list_double_pane_vc_t1

0x562a,	// (0x0003fd8c) list_double_pane_vc_t2_ParamLimits

0x562a,	// (0x0003fd8c) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x0004a1bf) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x0004a1bf) list_double_pane_vc_t

0x9f1d,	// (0x0004467f) list_double_number_pane_vc_g1_ParamLimits

0x9f1d,	// (0x0004467f) list_double_number_pane_vc_g1

0x64a8,	// (0x00040c0a) list_double_number_pane_vc_g2_ParamLimits

0x64a8,	// (0x00040c0a) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00049f5e) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00049f5e) list_double_number_pane_vc_g

0x5642,	// (0x0003fda4) list_double_number_pane_vc_t1_ParamLimits

0x5642,	// (0x0003fda4) list_double_number_pane_vc_t1

0x5656,	// (0x0003fdb8) list_double_number_pane_vc_t2_ParamLimits

0x5656,	// (0x0003fdb8) list_double_number_pane_vc_t2

0x562a,	// (0x0003fd8c) list_double_number_pane_vc_t3_ParamLimits

0x562a,	// (0x0003fd8c) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x0004a1c4) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x0004a1c4) list_double_number_pane_vc_t

0x6991,	// (0x000410f3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6991,	// (0x000410f3) list_double_large_graphic_pane_vc_g1

0x699d,	// (0x000410ff) list_double_large_graphic_pane_vc_g2_ParamLimits

0x699d,	// (0x000410ff) list_double_large_graphic_pane_vc_g2

0x696d,	// (0x000410cf) list_double_large_graphic_pane_vc_g3_ParamLimits

0x696d,	// (0x000410cf) list_double_large_graphic_pane_vc_g3

0x5668,	// (0x0003fdca) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5668,	// (0x0003fdca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0004a1cb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0004a1cb) list_double_large_graphic_pane_vc_g

0x5674,	// (0x0003fdd6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5674,	// (0x0003fdd6) list_double_large_graphic_pane_vc_t1

0x5686,	// (0x0003fde8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5686,	// (0x0003fde8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x0004a1d4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x0004a1d4) list_double_large_graphic_pane_vc_t

0x9f1d,	// (0x0004467f) list_double_heading_pane_vc_g1_ParamLimits

0x9f1d,	// (0x0004467f) list_double_heading_pane_vc_g1

0x64a8,	// (0x00040c0a) list_double_heading_pane_vc_g2_ParamLimits

0x64a8,	// (0x00040c0a) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00049f5e) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00049f5e) list_double_heading_pane_vc_g

0x569f,	// (0x0003fe01) list_double_heading_pane_vc_t1_ParamLimits

0x569f,	// (0x0003fe01) list_double_heading_pane_vc_t1

0x5414,	// (0x0003fb76) list_double_heading_pane_vc_t2_ParamLimits

0x5414,	// (0x0003fb76) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0004a1d9) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0004a1d9) list_double_heading_pane_vc_t

0x53f2,	// (0x0003fb54) list_double_graphic_pane_vc_g1_ParamLimits

0x53f2,	// (0x0003fb54) list_double_graphic_pane_vc_g1

0x69ac,	// (0x0004110e) list_double_graphic_pane_vc_g2_ParamLimits

0x69ac,	// (0x0004110e) list_double_graphic_pane_vc_g2

0x69bb,	// (0x0004111d) list_double_graphic_pane_vc_g3_ParamLimits

0x69bb,	// (0x0004111d) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0004a1de) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0004a1de) list_double_graphic_pane_vc_g

0x56b3,	// (0x0003fe15) list_double_graphic_pane_vc_t1_ParamLimits

0x56b3,	// (0x0003fe15) list_double_graphic_pane_vc_t1

0x562a,	// (0x0003fd8c) list_double_graphic_pane_vc_t2_ParamLimits

0x562a,	// (0x0003fd8c) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0004a1e5) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0004a1e5) list_double_graphic_pane_vc_t

0x59ab,	// (0x0004010d) aid_size_cell_fastswap

0x59b3,	// (0x00040115) aid_size_cell_touch_ParamLimits

0x59b3,	// (0x00040115) aid_size_cell_touch

0x5c0e,	// (0x00040370) popup_fast_swap_wide_window_ParamLimits

0x5c0e,	// (0x00040370) popup_fast_swap_wide_window

0x5d18,	// (0x0004047a) touch_pane_ParamLimits

0x5d18,	// (0x0004047a) touch_pane

0x8042,	// (0x000427a4) button_value_adjust_pane_cp2

0x5092,	// (0x0003f7f4) button_value_adjust_pane_cp4

0x50b6,	// (0x0003f818) form_field_data_pane_cp2

0x50d7,	// (0x0003f839) form_field_data_wide_pane_cp2

0x84cf,	// (0x00042c31) bg_scroll_pane_ParamLimits

0x6024,	// (0x00040786) scroll_handle_pane_ParamLimits

0x6038,	// (0x0004079a) scroll_sc2_down_pane_ParamLimits

0x6038,	// (0x0004079a) scroll_sc2_down_pane

0x8500,	// (0x00042c62) scroll_sc2_up_pane_ParamLimits

0x8500,	// (0x00042c62) scroll_sc2_up_pane

0xbc44,	// (0x000463a6) grid_wheel_folder_pane_g1_ParamLimits

0xbc44,	// (0x000463a6) grid_wheel_folder_pane_g1

0x61fd,	// (0x0004095f) clock_nsta_pane_cp2_ParamLimits

0x61fd,	// (0x0004095f) clock_nsta_pane_cp2

0x8ca1,	// (0x00043403) listscroll_midp_pane_ParamLimits

0x8cad,	// (0x0004340f) midp_canvas_pane

0x8f97,	// (0x000436f9) nsta_clock_indic_pane

0x8fdd,	// (0x0004373f) listscroll_form_pane_vc

0x8fe5,	// (0x00043747) listscroll_set_pane_vc_ParamLimits

0x8fe5,	// (0x00043747) listscroll_set_pane_vc

0x969f,	// (0x00043e01) clock_nsta_pane

0x9714,	// (0x00043e76) indicator_nsta_pane

0x99ed,	// (0x0004414f) bg_popup_sub_pane_cp2_ParamLimits

0x9a01,	// (0x00044163) find_pane_cp2_ParamLimits

0x9a01,	// (0x00044163) find_pane_cp2

0x9a17,	// (0x00044179) grid_toobar_pane_ParamLimits

0x9b73,	// (0x000442d5) list_form_gen_pane_vc_ParamLimits

0x9b73,	// (0x000442d5) list_form_gen_pane_vc

0x9b89,	// (0x000442eb) scroll_pane_cp8_vc_ParamLimits

0x9b89,	// (0x000442eb) scroll_pane_cp8_vc

0x9c05,	// (0x00044367) data_form_wide_pane_vc_ParamLimits

0x9c05,	// (0x00044367) data_form_wide_pane_vc

0x9c11,	// (0x00044373) form_field_data_wide_pane_vc_g1

0x9c19,	// (0x0004437b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c19,	// (0x0004437b) form_field_data_wide_pane_vc_t1

0x8056,	// (0x000427b8) input_focus_pane_cp6_vc_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_cp6_vc

0x9f29,	// (0x0004468b) list_midp_pane_ParamLimits

0x9f35,	// (0x00044697) scroll_pane_cp16_ParamLimits

0x9f35,	// (0x00044697) scroll_pane_cp16

0x9f83,	// (0x000446e5) button_value_adjust_pane_ParamLimits

0x9f83,	// (0x000446e5) button_value_adjust_pane

0xaf10,	// (0x00045672) button_value_adjust_pane_cp6_ParamLimits

0xaf10,	// (0x00045672) button_value_adjust_pane_cp6

0xb03a,	// (0x0004579c) settings_code_pane_cp_ParamLimits

0xb03a,	// (0x0004579c) settings_code_pane_cp

0x7700,	// (0x00041e62) cell_touch_pane_g1

0x7700,	// (0x00041e62) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00049e86) cell_touch_pane_g

0xb5b5,	// (0x00045d17) cell_touch_pane_cp_ParamLimits

0xb5b5,	// (0x00045d17) cell_touch_pane_cp

0xb5c5,	// (0x00045d27) cell_touch_pane_ParamLimits

0xb5c5,	// (0x00045d27) cell_touch_pane

0x7700,	// (0x00041e62) scroll_sc2_down_pane_g1

0x7700,	// (0x00041e62) scroll_sc2_up_pane_g1

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp4_vc

0xb5d7,	// (0x00045d39) list_set_graphic_pane_vc_g1_ParamLimits

0xb5d7,	// (0x00045d39) list_set_graphic_pane_vc_g1

0xb5e3,	// (0x00045d45) list_set_graphic_pane_vc_g2_ParamLimits

0xb5e3,	// (0x00045d45) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0004a170) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0004a170) list_set_graphic_pane_vc_g

0xb5ef,	// (0x00045d51) text_primary_small_cp13_vc_ParamLimits

0xb5ef,	// (0x00045d51) text_primary_small_cp13_vc

0xb607,	// (0x00045d69) list_set_graphic_pane_vc_ParamLimits

0xb607,	// (0x00045d69) list_set_graphic_pane_vc

0x770a,	// (0x00041e6c) input_focus_pane_cp2_vc

0x7700,	// (0x00041e62) setting_code_pane_vc_g1

0xb61b,	// (0x00045d7d) setting_code_pane_vc_t1

0xb629,	// (0x00045d8b) set_text_pane_vc_t1_ParamLimits

0xb629,	// (0x00045d8b) set_text_pane_vc_t1

0x770a,	// (0x00041e6c) input_focus_pane_cp1_vc

0xb644,	// (0x00045da6) list_set_text_pane_vc

0x7700,	// (0x00041e62) setting_text_pane_vc_g1

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp2_vc

0xb64e,	// (0x00045db0) setting_slider_graphic_pane_vc_g1

0xb656,	// (0x00045db8) setting_slider_graphic_pane_vc_t1

0xb664,	// (0x00045dc6) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0004a175) setting_slider_graphic_pane_vc_t

0xb672,	// (0x00045dd4) slider_set_pane_cp_vc

0xb67a,	// (0x00045ddc) slider_set_pane_vc_g1

0xb683,	// (0x00045de5) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0004a17a) slider_set_pane_vc_g

0x80bd,	// (0x0004281f) set_opt_bg_pane_g1_copy1

0x80c5,	// (0x00042827) set_opt_bg_pane_g2_copy1

0xb6af,	// (0x00045e11) set_opt_bg_pane_g3_copy1

0x80d5,	// (0x00042837) set_opt_bg_pane_g4_copy1

0x80dd,	// (0x0004283f) set_opt_bg_pane_g5_copy1

0x80e5,	// (0x00042847) set_opt_bg_pane_g6_copy1

0xb6b9,	// (0x00045e1b) set_opt_bg_pane_g7_copy1

0xb6c1,	// (0x00045e23) set_opt_bg_pane_g8_copy1

0xb6cb,	// (0x00045e2d) set_opt_bg_pane_g9_copy1

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp_vc

0xb6d5,	// (0x00045e37) setting_slider_pane_vc_t1

0xb656,	// (0x00045db8) setting_slider_pane_vc_t2

0xb664,	// (0x00045dc6) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0004a189) setting_slider_pane_vc_t

0xb672,	// (0x00045dd4) slider_set_pane_vc

0x65bc,	// (0x00040d1e) volume_set_pane_vc_g1

0x65c5,	// (0x00040d27) volume_set_pane_vc_g2

0x65ce,	// (0x00040d30) volume_set_pane_vc_g3

0x65d7,	// (0x00040d39) volume_set_pane_vc_g4

0x65e0,	// (0x00040d42) volume_set_pane_vc_g5

0x65e9,	// (0x00040d4b) volume_set_pane_vc_g6

0x65f2,	// (0x00040d54) volume_set_pane_vc_g7

0x65fb,	// (0x00040d5d) volume_set_pane_vc_g8

0x6604,	// (0x00040d66) volume_set_pane_vc_g9

0x660d,	// (0x00040d6f) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0004a02e) volume_set_pane_vc_g

0xb6e4,	// (0x00045e46) volume_set_pane_vc

0xb6ec,	// (0x00045e4e) button_value_adjust_pane_cp1_vc

0xb6f6,	// (0x00045e58) list_highlight_pane_cp2_vc

0xb6ff,	// (0x00045e61) list_set_pane_vc_ParamLimits

0xb6ff,	// (0x00045e61) list_set_pane_vc

0xb769,	// (0x00045ecb) main_pane_set_vc_t1_ParamLimits

0xb769,	// (0x00045ecb) main_pane_set_vc_t1

0xb77e,	// (0x00045ee0) main_pane_set_vc_t2_ParamLimits

0xb77e,	// (0x00045ee0) main_pane_set_vc_t2

0xb790,	// (0x00045ef2) main_pane_set_vc_t3_ParamLimits

0xb790,	// (0x00045ef2) main_pane_set_vc_t3

0xb7a4,	// (0x00045f06) main_pane_set_vc_t4_ParamLimits

0xb7a4,	// (0x00045f06) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x0004a190) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x0004a190) main_pane_set_vc_t

0xb7b8,	// (0x00045f1a) setting_code_pane_vc_ParamLimits

0xb7b8,	// (0x00045f1a) setting_code_pane_vc

0xb7c9,	// (0x00045f2b) setting_slider_graphic_pane_vc

0xb7c9,	// (0x00045f2b) setting_slider_pane_vc

0xb7c9,	// (0x00045f2b) setting_text_pane_vc

0xb7c9,	// (0x00045f2b) setting_volume_pane_vc

0xb7d3,	// (0x00045f35) scroll_pane_cp121_vc

0x8030,	// (0x00042792) set_content_pane_vc

0xb811,	// (0x00045f73) button_value_adjust_pane_g1

0xb81a,	// (0x00045f7c) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0004a1ea) button_value_adjust_pane_g

0xb823,	// (0x00045f85) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb823,	// (0x00045f85) form_field_slider_wide_pane_vc_t1

0xb837,	// (0x00045f99) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb837,	// (0x00045f99) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8d,	// (0x0004a1ef) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0004a1ef) form_field_slider_wide_pane_vc_t

0x7a65,	// (0x000421c7) input_focus_pane_cp10_vc_ParamLimits

0x7a65,	// (0x000421c7) input_focus_pane_cp10_vc

0xb849,	// (0x00045fab) slider_cont_pane_cp1_vc_ParamLimits

0xb849,	// (0x00045fab) slider_cont_pane_cp1_vc

0xb67a,	// (0x00045ddc) slider_form_pane_g1_cp2

0xb683,	// (0x00045de5) slider_form_pane_g2_cp2

0xb862,	// (0x00045fc4) form_field_slider_pane_vc_t3

0xb870,	// (0x00045fd2) form_field_slider_pane_vc_t4

0xb87e,	// (0x00045fe0) slider_form_pane_vc_ParamLimits

0xb87e,	// (0x00045fe0) slider_form_pane_vc

0xb88b,	// (0x00045fed) form_field_slider_pane_vc_t1_ParamLimits

0xb88b,	// (0x00045fed) form_field_slider_pane_vc_t1

0xb837,	// (0x00045f99) form_field_slider_pane_vc_t2_ParamLimits

0xb837,	// (0x00045f99) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0004a1ff) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0004a1ff) form_field_slider_pane_vc_t

0x7a65,	// (0x000421c7) input_focus_pane_cp9_vc_ParamLimits

0x7a65,	// (0x000421c7) input_focus_pane_cp9_vc

0xb8a7,	// (0x00046009) slider_cont_pane_vc_ParamLimits

0xb8a7,	// (0x00046009) slider_cont_pane_vc

0xb8b9,	// (0x0004601b) list_form_graphic_pane_cp_vc_ParamLimits

0xb8b9,	// (0x0004601b) list_form_graphic_pane_cp_vc

0x9c11,	// (0x00044373) form_field_popup_wide_pane_vc_g1

0xb8ce,	// (0x00046030) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8ce,	// (0x00046030) form_field_popup_wide_pane_vc_t1

0x8056,	// (0x000427b8) input_focus_pane_cp8_vc_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_cp8_vc

0xb8e5,	// (0x00046047) list_form_wide_pane_vc_ParamLimits

0xb8e5,	// (0x00046047) list_form_wide_pane_vc

0xb8f1,	// (0x00046053) list_form_graphic_pane_vc_g1

0xb8f9,	// (0x0004605b) list_form_graphic_pane_vc_t1_ParamLimits

0xb8f9,	// (0x0004605b) list_form_graphic_pane_vc_t1

0x77ea,	// (0x00041f4c) list_highlight_pane_cp5_vc_ParamLimits

0x77ea,	// (0x00041f4c) list_highlight_pane_cp5_vc

0xb915,	// (0x00046077) list_form_graphic_pane_vc_ParamLimits

0xb915,	// (0x00046077) list_form_graphic_pane_vc

0x9c11,	// (0x00044373) form_field_popup_pane_vc_g1

0xb92b,	// (0x0004608d) form_field_popup_pane_vc_t1_ParamLimits

0xb92b,	// (0x0004608d) form_field_popup_pane_vc_t1

0x8056,	// (0x000427b8) input_focus_pane_cp7_vc_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_cp7_vc

0xb942,	// (0x000460a4) list_form_pane_vc_ParamLimits

0xb942,	// (0x000460a4) list_form_pane_vc

0xb94e,	// (0x000460b0) data_form_pane_vc_t1_ParamLimits

0xb94e,	// (0x000460b0) data_form_pane_vc_t1

0x80bd,	// (0x0004281f) input_focus_pane_vc_g1

0x80c5,	// (0x00042827) input_focus_pane_vc_g2

0x80cd,	// (0x0004282f) input_focus_pane_vc_g3

0x80d5,	// (0x00042837) input_focus_pane_vc_g4

0x80dd,	// (0x0004283f) input_focus_pane_vc_g5

0x80e5,	// (0x00042847) input_focus_pane_vc_g6

0x80ed,	// (0x0004284f) input_focus_pane_vc_g7

0x80f5,	// (0x00042857) input_focus_pane_vc_g8

0x80fd,	// (0x0004285f) input_focus_pane_vc_g9

0x7700,	// (0x00041e62) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00049e0f) input_focus_pane_vc_g

0x9c05,	// (0x00044367) data_form_pane_vc_ParamLimits

0x9c05,	// (0x00044367) data_form_pane_vc

0x9c11,	// (0x00044373) form_field_data_pane_vc_g1

0xb969,	// (0x000460cb) form_field_data_pane_vc_t1_ParamLimits

0xb969,	// (0x000460cb) form_field_data_pane_vc_t1

0x8056,	// (0x000427b8) input_focus_pane_vc_ParamLimits

0x8056,	// (0x000427b8) input_focus_pane_vc

0xb983,	// (0x000460e5) button_value_adjust_pane_cp3_vc

0xb98b,	// (0x000460ed) button_value_adjust_pane_cp5_vc

0xb993,	// (0x000460f5) form_field_data_pane_vc_ParamLimits

0xb993,	// (0x000460f5) form_field_data_pane_vc

0xb9aa,	// (0x0004610c) form_field_data_pane_vc_cp2

0xb9b2,	// (0x00046114) form_field_data_wide_pane_vc_ParamLimits

0xb9b2,	// (0x00046114) form_field_data_wide_pane_vc

0xb9c8,	// (0x0004612a) form_field_data_wide_pane_vc_cp2

0xb9d0,	// (0x00046132) form_field_popup_pane_vc_ParamLimits

0xb9d0,	// (0x00046132) form_field_popup_pane_vc

0xb9e7,	// (0x00046149) form_field_popup_wide_pane_vc_ParamLimits

0xb9e7,	// (0x00046149) form_field_popup_wide_pane_vc

0xb9fd,	// (0x0004615f) form_field_slider_pane_vc_ParamLimits

0xb9fd,	// (0x0004615f) form_field_slider_pane_vc

0xba10,	// (0x00046172) form_field_slider_wide_pane_vc_ParamLimits

0xba10,	// (0x00046172) form_field_slider_wide_pane_vc

0xba23,	// (0x00046185) grid_touch_1_pane_ParamLimits

0xba23,	// (0x00046185) grid_touch_1_pane

0xba2f,	// (0x00046191) grid_touch_2_pane_ParamLimits

0xba2f,	// (0x00046191) grid_touch_2_pane

0x8f62,	// (0x000436c4) touch_pane_g1_ParamLimits

0x8f62,	// (0x000436c4) touch_pane_g1

0xba47,	// (0x000461a9) cell_app_pane_cp_wide_ParamLimits

0xba47,	// (0x000461a9) cell_app_pane_cp_wide

0xba58,	// (0x000461ba) grid_popup_fast_wide_pane_ParamLimits

0xba58,	// (0x000461ba) grid_popup_fast_wide_pane

0xba6c,	// (0x000461ce) scroll_pane_cp19_ParamLimits

0xba6c,	// (0x000461ce) scroll_pane_cp19

0x770a,	// (0x00041e6c) bg_popup_window_pane_cp20

0xba80,	// (0x000461e2) listscroll_popup_fast_wide_pane

0x77ea,	// (0x00041f4c) grid_indicator_nsta_pane

0xba88,	// (0x000461ea) clock_nsta_pane_g1

0xba91,	// (0x000461f3) clock_nsta_pane_t1

0xbaad,	// (0x0004620f) cell_indicator_nsta_pane_ParamLimits

0xbaad,	// (0x0004620f) cell_indicator_nsta_pane

0xbae5,	// (0x00046247) cell_indicator_nsta_pane_g1

0xbaf3,	// (0x00046255) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0004a209) cell_indicator_nsta_pane_g

0xbb09,	// (0x0004626b) clock_nsta_pane_cp

0xbb11,	// (0x00046273) indicator_nsta_pane_cp

0xbb1a,	// (0x0004627c) nsta_clock_indic_pane_g1

0x78b3,	// (0x00042015) grid_indicator_pane

0x85f5,	// (0x00042d57) scroll_pane_cp29

0x614c,	// (0x000408ae) indicator_nsta_pane_cp2_ParamLimits

0x614c,	// (0x000408ae) indicator_nsta_pane_cp2

0x77ea,	// (0x00041f4c) main_apps_wheel_pane

0x9dfe,	// (0x00044560) form_midp_field_text_pane_ParamLimits

0x9f55,	// (0x000446b7) scroll_bar_cp050_ParamLimits

0xbb83,	// (0x000462e5) cell_indicator_pane_ParamLimits

0xbb83,	// (0x000462e5) cell_indicator_pane

0xbb9a,	// (0x000462fc) cell_indicator_pane_g1

0xbba4,	// (0x00046306) grid_wheel_folder_pane_ParamLimits

0xbba4,	// (0x00046306) grid_wheel_folder_pane

0xbbb8,	// (0x0004631a) list_wheel_apps_pane_ParamLimits

0xbbb8,	// (0x0004631a) list_wheel_apps_pane

0xbbc9,	// (0x0004632b) main_apps_wheel_pane_g1_ParamLimits

0xbbc9,	// (0x0004632b) main_apps_wheel_pane_g1

0xbbdd,	// (0x0004633f) main_apps_wheel_pane_g2_ParamLimits

0xbbdd,	// (0x0004633f) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0004a225) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0004a225) main_apps_wheel_pane_g

0xbbf5,	// (0x00046357) main_apps_wheel_pane_t1_ParamLimits

0xbbf5,	// (0x00046357) main_apps_wheel_pane_t1

0xbc18,	// (0x0004637a) list_wheel_apps_pane_g1

0xbc20,	// (0x00046382) list_wheel_apps_pane_g2

0xbc28,	// (0x0004638a) list_wheel_apps_pane_g3

0xbc30,	// (0x00046392) list_wheel_apps_pane_g4

0xbc3a,	// (0x0004639c) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0004a22a) list_wheel_apps_pane_g

0x8b25,	// (0x00043287) navi_icon_text_pane

0x95d2,	// (0x00043d34) aid_fill_nsta

0xbc5d,	// (0x000463bf) navi_icon_text_pane_g1

0xbc6c,	// (0x000463ce) navi_icon_text_pane_t1

0x89b7,	// (0x00043119) list_set_graphic_pane_t1_ParamLimits

0x89b7,	// (0x00043119) list_set_graphic_pane_t1

0xa6a4,	// (0x00044e06) popup_midp_note_alarm_window_t6_ParamLimits

0xa6a4,	// (0x00044e06) popup_midp_note_alarm_window_t6

0xa6b6,	// (0x00044e18) popup_midp_note_alarm_window_t7_ParamLimits

0xa6b6,	// (0x00044e18) popup_midp_note_alarm_window_t7

0xa6c8,	// (0x00044e2a) popup_midp_note_alarm_window_t8_ParamLimits

0xa6c8,	// (0x00044e2a) popup_midp_note_alarm_window_t8

0xa6da,	// (0x00044e3c) popup_midp_note_alarm_window_t9_ParamLimits

0xa6da,	// (0x00044e3c) popup_midp_note_alarm_window_t9

0xa6ec,	// (0x00044e4e) popup_midp_note_alarm_window_t10_ParamLimits

0xa6ec,	// (0x00044e4e) popup_midp_note_alarm_window_t10

0xa6fe,	// (0x00044e60) popup_midp_note_alarm_window_t11_ParamLimits

0xa6fe,	// (0x00044e60) popup_midp_note_alarm_window_t11

0xa710,	// (0x00044e72) scroll_pane_cp17_ParamLimits

0xa710,	// (0x00044e72) scroll_pane_cp17

0x65bc,	// (0x00040d1e) volume_small_pane_cp_g1

0x69c7,	// (0x00041129) volume_small_pane_cp_g2

0x69d0,	// (0x00041132) volume_small_pane_cp_g3

0x69d9,	// (0x0004113b) volume_small_pane_cp_g4

0x69e2,	// (0x00041144) volume_small_pane_cp_g5

0x69eb,	// (0x0004114d) volume_small_pane_cp_g6

0x69f4,	// (0x00041156) volume_small_pane_cp_g7

0x69fd,	// (0x0004115f) volume_small_pane_cp_g8

0x6a06,	// (0x00041168) volume_small_pane_cp_g9

0x6a0f,	// (0x00041171) volume_small_pane_cp_g10

0x8d74,	// (0x000434d6) midp_ticker_pane_g1_ParamLimits

0x8d80,	// (0x000434e2) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00049ed7) midp_ticker_pane_g_ParamLimits

0x8d8c,	// (0x000434ee) midp_ticker_pane_t1_ParamLimits

0x95e8,	// (0x00043d4a) aid_fill_nsta_2

0x9f41,	// (0x000446a3) list_form2_midp_pane

0xb085,	// (0x000457e7) midp_editing_number_pane_ParamLimits

0xb094,	// (0x000457f6) midp_ticker_pane_ParamLimits

0xbc81,	// (0x000463e3) form2_midp_field_pane

0xbca5,	// (0x00046407) scroll_pane_cp51

0xbcc5,	// (0x00046427) form2_midp_button_pane_ParamLimits

0xbcc5,	// (0x00046427) form2_midp_button_pane

0xbcd7,	// (0x00046439) form2_midp_content_pane_ParamLimits

0xbcd7,	// (0x00046439) form2_midp_content_pane

0xbcf1,	// (0x00046453) form2_midp_field_choice_group_pane

0xbcf9,	// (0x0004645b) form2_midp_field_pane_g1

0xbd01,	// (0x00046463) form2_midp_field_pane_g2

0xbd09,	// (0x0004646b) form2_midp_field_pane_g3

0xbd11,	// (0x00046473) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0004a24f) form2_midp_field_pane_g

0xbd19,	// (0x0004647b) form2_midp_gauge_slider_pane

0xbd21,	// (0x00046483) form2_midp_gauge_wait_pane

0xbd29,	// (0x0004648b) form2_midp_image_pane_ParamLimits

0xbd29,	// (0x0004648b) form2_midp_image_pane

0xbd44,	// (0x000464a6) form2_midp_label_pane_ParamLimits

0xbd44,	// (0x000464a6) form2_midp_label_pane

0xbd5d,	// (0x000464bf) form2_midp_label_pane_cp_ParamLimits

0xbd5d,	// (0x000464bf) form2_midp_label_pane_cp

0xbd7e,	// (0x000464e0) form2_midp_string_pane_ParamLimits

0xbd7e,	// (0x000464e0) form2_midp_string_pane

0x56c5,	// (0x0003fe27) form2_midp_text_pane_ParamLimits

0x56c5,	// (0x0003fe27) form2_midp_text_pane

0xbd90,	// (0x000464f2) form2_midp_time_pane

0xbda0,	// (0x00046502) input_focus_pane_cp51_ParamLimits

0xbda0,	// (0x00046502) input_focus_pane_cp51

0xbdb8,	// (0x0004651a) form2_midp_label_pane_t1_ParamLimits

0xbdb8,	// (0x0004651a) form2_midp_label_pane_t1

0x56e4,	// (0x0003fe46) form2_mdip_text_pane_t1_ParamLimits

0x56e4,	// (0x0003fe46) form2_mdip_text_pane_t1

0x5702,	// (0x0003fe64) form2_midp_time_pane_t1

0xbe01,	// (0x00046563) form2_midp_gauge_slider_pane_t1

0xbe13,	// (0x00046575) form2_midp_gauge_slider_pane_t2

0xbe25,	// (0x00046587) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0004a258) form2_midp_gauge_slider_pane_t

0xbe37,	// (0x00046599) form2_midp_slider_pane

0xbe43,	// (0x000465a5) form2_midp_gauge_wait_pane_t1

0xbe51,	// (0x000465b3) form2_midp_wait_pane_ParamLimits

0xbe51,	// (0x000465b3) form2_midp_wait_pane

0x9c30,	// (0x00044392) list_single_2graphic_pane_cp4_ParamLimits

0x9c30,	// (0x00044392) list_single_2graphic_pane_cp4

0xbe7c,	// (0x000465de) list_single_midp_graphic_pane_cp_ParamLimits

0xbe7c,	// (0x000465de) list_single_midp_graphic_pane_cp

0x770a,	// (0x00041e6c) list_highlight_pane_cp20

0xbeab,	// (0x0004660d) list_single_2graphic_pane_g1_cp4

0xbeb3,	// (0x00046615) list_single_2graphic_pane_g2_cp4

0xbebb,	// (0x0004661d) list_single_2graphic_pane_t1_cp4

0x77ea,	// (0x00041f4c) list_highlight_pane_cp21

0xbeca,	// (0x0004662c) list_single_midp_graphic_pane_g4_cp

0xbed9,	// (0x0004663b) list_single_midp_graphic_pane_t1_cp

0xbeee,	// (0x00046650) form2_mdip_string_pane_t1_ParamLimits

0xbeee,	// (0x00046650) form2_mdip_string_pane_t1

0x770a,	// (0x00041e6c) bg_wml_button_pane_cp2

0x7700,	// (0x00041e62) form2_midp_image_pane_g1

0x5e70,	// (0x000405d2) list_double_large_graphic_pane_g5_ParamLimits

0x5e70,	// (0x000405d2) list_double_large_graphic_pane_g5

0x8ca1,	// (0x00043403) midp_form_pane_ParamLimits

0x77ea,	// (0x00041f4c) main_apps_wheel_pane_ParamLimits

0x9398,	// (0x00043afa) popup_preview_window_ParamLimits

0x9398,	// (0x00043afa) popup_preview_window

0x9575,	// (0x00043cd7) popup_touch_info_window_ParamLimits

0x9575,	// (0x00043cd7) popup_touch_info_window

0x9593,	// (0x00043cf5) popup_touch_menu_window_ParamLimits

0x9593,	// (0x00043cf5) popup_touch_menu_window

0x76f6,	// (0x00041e58) bg_popup_sub_pane_cp6

0xbfe7,	// (0x00046749) list_touch_menu_pane

0xbfef,	// (0x00046751) list_single_touch_menu_pane_ParamLimits

0xbfef,	// (0x00046751) list_single_touch_menu_pane

0xc006,	// (0x00046768) list_single_touch_menu_pane_t1

0x77ea,	// (0x00041f4c) bg_popup_sub_pane_cp7_ParamLimits

0x77ea,	// (0x00041f4c) bg_popup_sub_pane_cp7

0xc014,	// (0x00046776) heading_sub_pane

0xc01c,	// (0x0004677e) list_touch_info_pane_ParamLimits

0xc01c,	// (0x0004677e) list_touch_info_pane

0xc02b,	// (0x0004678d) list_single_touch_info_pane_ParamLimits

0xc02b,	// (0x0004678d) list_single_touch_info_pane

0xc03d,	// (0x0004679f) list_single_touch_info_pane_t1

0xc04b,	// (0x000467ad) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0004a266) list_single_touch_info_pane_t

0x8c99,	// (0x000433fb) bg_popup_heading_pane_cp

0xc059,	// (0x000467bb) heading_sub_pane_t1

0x9b9f,	// (0x00044301) bg_popup_preview_window_pane_cp_ParamLimits

0x9b9f,	// (0x00044301) bg_popup_preview_window_pane_cp

0xc014,	// (0x00046776) heading_preview_pane

0xc01c,	// (0x0004677e) list_preview_pane_ParamLimits

0xc01c,	// (0x0004677e) list_preview_pane

0xc067,	// (0x000467c9) popup_preview_window_g1

0xc02b,	// (0x0004678d) list_single_preview_pane_ParamLimits

0xc02b,	// (0x0004678d) list_single_preview_pane

0xc06f,	// (0x000467d1) list_single_preview_pane_g1

0xc077,	// (0x000467d9) list_single_preview_pane_t1

0xc03d,	// (0x0004679f) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0004a26b) list_single_preview_pane_t

0xc085,	// (0x000467e7) bg_popup_heading_pane_cp2_ParamLimits

0xc085,	// (0x000467e7) bg_popup_heading_pane_cp2

0xc09b,	// (0x000467fd) heading_preview_pane_g1

0xc0a3,	// (0x00046805) heading_preview_pane_t1_ParamLimits

0xc0a3,	// (0x00046805) heading_preview_pane_t1

0x78d6,	// (0x00042038) soft_indicator_pane_t1_ParamLimits

0x7fc9,	// (0x0004272b) scroll_pane_ParamLimits

0x84ee,	// (0x00042c50) scroll_sc2_left_pane

0x84f7,	// (0x00042c59) scroll_sc2_right_pane

0x8516,	// (0x00042c78) scroll_bg_pane_g1_ParamLimits

0x852b,	// (0x00042c8d) scroll_bg_pane_g2_ParamLimits

0x8543,	// (0x00042ca5) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00049e66) scroll_bg_pane_g_ParamLimits

0x8516,	// (0x00042c78) scroll_handle_pane_g1_ParamLimits

0x8565,	// (0x00042cc7) scroll_handle_pane_g2_ParamLimits

0x8543,	// (0x00042ca5) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00049e6d) scroll_handle_pane_g_ParamLimits

0x901f,	// (0x00043781) popup_choice_list_window_ParamLimits

0x901f,	// (0x00043781) popup_choice_list_window

0x99f9,	// (0x0004415b) choice_list_pane

0x9a7b,	// (0x000441dd) cell_toolbar_pane_t1

0x9aa3,	// (0x00044205) toolbar_button_pane_ParamLimits

0xabd0,	// (0x00045332) ai_gene_pane_1_t2_ParamLimits

0xabd0,	// (0x00045332) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004a08a) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004a08a) ai_gene_pane_1_t

0xc0c0,	// (0x00046822) scroll_sc2_left_pane_g1

0xc0c0,	// (0x00046822) scroll_sc2_right_pane_g1

0x8ff7,	// (0x00043759) bg_popup_sub_pane_cp10

0xc0ca,	// (0x0004682c) list_choice_list_pane

0xc0e1,	// (0x00046843) list_single_choice_list_pane_ParamLimits

0xc0e1,	// (0x00046843) list_single_choice_list_pane

0xc0f5,	// (0x00046857) list_single_choice_list_pane_g1

0xc0fd,	// (0x0004685f) list_single_choice_list_pane_t1_ParamLimits

0xc0fd,	// (0x0004685f) list_single_choice_list_pane_t1

0xc112,	// (0x00046874) choice_list_pane_g1

0xc11a,	// (0x0004687c) choice_list_pane_t1

0x76f6,	// (0x00041e58) input_focus_pane_cp11

0x83cb,	// (0x00042b2d) title_pane_stacon_g2_ParamLimits

0x83cb,	// (0x00042b2d) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00049e4c) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00049e4c) title_pane_stacon_g

0x8c99,	// (0x000433fb) cursor_press_pane

0x90c7,	// (0x00043829) popup_fep_hwr_window_ParamLimits

0x90c7,	// (0x00043829) popup_fep_hwr_window

0x9141,	// (0x000438a3) popup_fep_vkb_window_ParamLimits

0x9141,	// (0x000438a3) popup_fep_vkb_window

0xc128,	// (0x0004688a) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0004a294) fep_vkb_side_pane_g_ParamLimits

0x6a43,	// (0x000411a5) fep_hwr_candidate_pane_ParamLimits

0x6a43,	// (0x000411a5) fep_hwr_candidate_pane

0x6a6d,	// (0x000411cf) fep_hwr_side_pane_ParamLimits

0x6a6d,	// (0x000411cf) fep_hwr_side_pane

0x6a8d,	// (0x000411ef) fep_hwr_top_pane_ParamLimits

0x6a8d,	// (0x000411ef) fep_hwr_top_pane

0x6aa5,	// (0x00041207) fep_hwr_write_pane_ParamLimits

0x6aa5,	// (0x00041207) fep_hwr_write_pane

0xfb32,	// (0x0004a294) fep_vkb_side_pane_g

0xc130,	// (0x00046892) fep_hwr_top_pane_g1

0xc142,	// (0x000468a4) fep_hwr_top_pane_g2

0x6ad1,	// (0x00041233) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0004a270) fep_hwr_top_pane_g

0x6ae6,	// (0x00041248) fep_hwr_top_text_pane

0x86bc,	// (0x00042e1e) fep_hwr_top_text_pane_g1

0xc178,	// (0x000468da) fep_hwr_top_text_pane_t1

0x6bdc,	// (0x0004133e) fep_hwr_candidate_pane_g1

0xc3cb,	// (0x00046b2d) fep_vkb_keypad_pane_g3_ParamLimits

0xc3cb,	// (0x00046b2d) fep_vkb_keypad_pane_g3

0xc3f3,	// (0x00046b55) fep_vkb_keypad_pane_g4_ParamLimits

0xc3f3,	// (0x00046b55) fep_vkb_keypad_pane_g4

0xc462,	// (0x00046bc4) fep_vkb_bottom_pane_g2_ParamLimits

0xc462,	// (0x00046bc4) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0004a29b) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0004a29b) fep_vkb_bottom_pane_g

0xc0c0,	// (0x00046822) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0004a2a5) cell_vkb_side_pane_g

0xc4ed,	// (0x00046c4f) cell_vkb_side_pane_t1

0xc4fb,	// (0x00046c5d) cell_vkb_side_pane_t1_copy1

0xc0c0,	// (0x00046822) bg_fep_vkb_candidate_pane_g2

0xc627,	// (0x00046d89) cell_vkb_candidate_pane_ParamLimits

0xc186,	// (0x000468e8) aid_size_cell_vkb_ParamLimits

0xc186,	// (0x000468e8) aid_size_cell_vkb

0xc627,	// (0x00046d89) cell_vkb_candidate_pane

0x6bf6,	// (0x00041358) bg_popup_fep_shadow_pane_g1

0xc214,	// (0x00046976) fep_vkb_bottom_pane_ParamLimits

0xc214,	// (0x00046976) fep_vkb_bottom_pane

0xc24a,	// (0x000469ac) fep_vkb_candidate_pane_ParamLimits

0xc24a,	// (0x000469ac) fep_vkb_candidate_pane

0xc266,	// (0x000469c8) fep_vkb_keypad_pane_ParamLimits

0xc266,	// (0x000469c8) fep_vkb_keypad_pane

0xc2ac,	// (0x00046a0e) fep_vkb_side_pane_ParamLimits

0xc2ac,	// (0x00046a0e) fep_vkb_side_pane

0xc2e8,	// (0x00046a4a) fep_vkb_top_pane_ParamLimits

0xc2e8,	// (0x00046a4a) fep_vkb_top_pane

0xc324,	// (0x00046a86) fep_vkb_top_pane_g1_ParamLimits

0xc324,	// (0x00046a86) fep_vkb_top_pane_g1

0xc333,	// (0x00046a95) fep_vkb_top_pane_g2_ParamLimits

0xc333,	// (0x00046a95) fep_vkb_top_pane_g2

0xc342,	// (0x00046aa4) fep_vkb_top_pane_g3_ParamLimits

0xc342,	// (0x00046aa4) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0004a28b) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0004a28b) fep_vkb_top_pane_g

0xc360,	// (0x00046ac2) fep_vkb_top_text_pane_ParamLimits

0xc360,	// (0x00046ac2) fep_vkb_top_text_pane

0xc371,	// (0x00046ad3) fep_vkb_side_pane_g1_ParamLimits

0xc371,	// (0x00046ad3) fep_vkb_side_pane_g1

0xc3ba,	// (0x00046b1c) grid_vkb_side_pane_ParamLimits

0xc3ba,	// (0x00046b1c) grid_vkb_side_pane

0x6bfe,	// (0x00041360) bg_popup_fep_shadow_pane_g2

0x6c07,	// (0x00041369) bg_popup_fep_shadow_pane_g3

0x6c0f,	// (0x00041371) bg_popup_fep_shadow_pane_g4

0x6c18,	// (0x0004137a) bg_popup_fep_shadow_pane_g5

0x6c22,	// (0x00041384) bg_popup_fep_shadow_pane_g6

0x6c2a,	// (0x0004138c) bg_popup_fep_shadow_pane_g7

0x80dd,	// (0x0004283f) bg_popup_fep_shadow_pane_g8

0xc411,	// (0x00046b73) grid_vkb_keypad_number_pane_ParamLimits

0xc411,	// (0x00046b73) grid_vkb_keypad_number_pane

0xc421,	// (0x00046b83) grid_vkb_keypad_pane_ParamLimits

0xc421,	// (0x00046b83) grid_vkb_keypad_pane

0xc447,	// (0x00046ba9) fep_vkb_bottom_pane_g1_ParamLimits

0xc447,	// (0x00046ba9) fep_vkb_bottom_pane_g1

0xc470,	// (0x00046bd2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc470,	// (0x00046bd2) grid_vkb_keypad_bottom_left_pane

0xc485,	// (0x00046be7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc485,	// (0x00046be7) grid_vkb_keypad_bottom_right_pane

0xc49a,	// (0x00046bfc) fep_vkb_top_text_pane_g1

0xc4b5,	// (0x00046c17) fep_vkb_top_text_pane_t1

0xc4ca,	// (0x00046c2c) cell_vkb_side_pane_ParamLimits

0xc4ca,	// (0x00046c2c) cell_vkb_side_pane

0xc0c0,	// (0x00046822) cell_vkb_side_pane_g1

0xc509,	// (0x00046c6b) cell_vkb_keypad_pane_ParamLimits

0xc509,	// (0x00046c6b) cell_vkb_keypad_pane

0xc57e,	// (0x00046ce0) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0004a2b8) bg_popup_fep_shadow_pane_g

0xc0c0,	// (0x00046822) cell_hwr_side_pane_g1

0xc0c0,	// (0x00046822) cell_hwr_side_pane_g2

0xc588,	// (0x00046cea) cell_vkb_keypad_pane_t1

0xc596,	// (0x00046cf8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc596,	// (0x00046cf8) cell_vkb_keypad_bottom_left_pane

0xc5b3,	// (0x00046d15) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b3,	// (0x00046d15) cell_vkb_keypad_bottom_right_pane

0xc0c0,	// (0x00046822) cell_vkb_keypad_bottom_left_pane_g1

0xc0c0,	// (0x00046822) cell_vkb_keypad_bottom_right_pane_g1

0xc5ec,	// (0x00046d4e) cell_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00046d4e) cell_vkb_keypad_number_pane

0xc60b,	// (0x00046d6d) cell_vkb_keypad_number_pane_g1

0xc615,	// (0x00046d77) cell_vkb_keypad_number_pane_g2

0xc61e,	// (0x00046d80) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0004a2aa) cell_vkb_keypad_number_pane_g

0xc588,	// (0x00046cea) cell_vkb_keypad_number_pane_t1

0xc642,	// (0x00046da4) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0004a2a5) cell_hwr_side_pane_g

0xc65b,	// (0x00046dbd) cell_hwr_side_pane_t1

0x6c3c,	// (0x0004139e) cell_hwr_side_pane_t1_copy1

0xc352,	// (0x00046ab4) cell_hwr_candidate_pane_g1

0x6c4a,	// (0x000413ac) cell_hwr_candidate_pane_t1

0xc0c0,	// (0x00046822) cell_vkb_candidate_pane_g2

0xc69f,	// (0x00046e01) cell_vkb_candidate_pane_t1

0x187c,	// (0x0003bfde) bg_popup_fep_shadow_pane_ParamLimits

0x187c,	// (0x0003bfde) bg_popup_fep_shadow_pane

0x2594,	// (0x0003ccf6) bg_fep_hwr_top_pane_g4

0xc154,	// (0x000468b6) bg_hwr_side_pane_g1_ParamLimits

0xc154,	// (0x000468b6) bg_hwr_side_pane_g1

0x6b22,	// (0x00041284) cell_hwr_side_pane_ParamLimits

0x6b22,	// (0x00041284) cell_hwr_side_pane

0x6b5d,	// (0x000412bf) fep_hwr_write_pane_g1_ParamLimits

0x6b5d,	// (0x000412bf) fep_hwr_write_pane_g1

0x6b6a,	// (0x000412cc) fep_hwr_write_pane_g2_ParamLimits

0x6b6a,	// (0x000412cc) fep_hwr_write_pane_g2

0x6b77,	// (0x000412d9) fep_hwr_write_pane_g3_ParamLimits

0x6b77,	// (0x000412d9) fep_hwr_write_pane_g3

0x6b85,	// (0x000412e7) fep_hwr_write_pane_g4_ParamLimits

0x6b85,	// (0x000412e7) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0004a277) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0004a277) fep_hwr_write_pane_g

0x2594,	// (0x0003ccf6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2594,	// (0x0003ccf6) bg_fep_hwr_candidate_pane_g2

0x6b9a,	// (0x000412fc) cell_hwr_candidate_pane_ParamLimits

0x6b9a,	// (0x000412fc) cell_hwr_candidate_pane

0x6bdc,	// (0x0004133e) fep_hwr_candidate_pane_g1_ParamLimits

0xc1b4,	// (0x00046916) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc1b4,	// (0x00046916) bg_popup_fep_shadow_pane_cp2

0xc352,	// (0x00046ab4) fep_vkb_top_pane_g4_ParamLimits

0xc352,	// (0x00046ab4) fep_vkb_top_pane_g4

0xc398,	// (0x00046afa) fep_vkb_side_pane_g2_ParamLimits

0xc398,	// (0x00046afa) fep_vkb_side_pane_g2

0x4fbf,	// (0x0003f721) list_setting_pane_t4_ParamLimits

0x4fbf,	// (0x0003f721) list_setting_pane_t4

0x5059,	// (0x0003f7bb) list_setting_number_pane_t5_ParamLimits

0x5059,	// (0x0003f7bb) list_setting_number_pane_t5

0x86fe,	// (0x00042e60) list_double_heading_pane_cp2_ParamLimits

0x86fe,	// (0x00042e60) list_double_heading_pane_cp2

0x8070,	// (0x000427d2) list_double_heading_pane_g1_cp2_ParamLimits

0x8070,	// (0x000427d2) list_double_heading_pane_g1_cp2

0x807c,	// (0x000427de) list_double_heading_pane_g2_cp2_ParamLimits

0x807c,	// (0x000427de) list_double_heading_pane_g2_cp2

0xc6ad,	// (0x00046e0f) list_double_heading_pane_t1_cp2_ParamLimits

0xc6ad,	// (0x00046e0f) list_double_heading_pane_t1_cp2

0xc6c3,	// (0x00046e25) list_double_heading_pane_t2_cp2_ParamLimits

0xc6c3,	// (0x00046e25) list_double_heading_pane_t2_cp2

0x76de,	// (0x00041e40) aid_value_unit2

0x5c68,	// (0x000403ca) popup_preview_fixed_window

0x7a73,	// (0x000421d5) bg_popup_preview_window_pane_cp02

0xc6d5,	// (0x00046e37) list_preview_fixed_pane

0xc75d,	// (0x00046ebf) list_empty_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_empty_pane_fp

0xc75d,	// (0x00046ebf) list_single_cale_day_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_single_cale_day_pane_fp

0xc75d,	// (0x00046ebf) list_single_graphic_heading_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_single_graphic_heading_pane_fp

0xc75d,	// (0x00046ebf) list_single_graphic_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_single_graphic_pane_fp

0xc75d,	// (0x00046ebf) list_single_heading_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_single_heading_pane_fp

0xc75d,	// (0x00046ebf) list_single_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_single_pane_fp

0xc772,	// (0x00046ed4) list_single_pane_fp_g1_ParamLimits

0xc772,	// (0x00046ed4) list_single_pane_fp_g1

0x94dc,	// (0x00043c3e) list_single_pane_fp_g2_ParamLimits

0x94dc,	// (0x00043c3e) list_single_pane_fp_g2

0xc77e,	// (0x00046ee0) list_single_pane_fp_g3_ParamLimits

0xc77e,	// (0x00046ee0) list_single_pane_fp_g3

0xc792,	// (0x00046ef4) list_single_pane_fp_g4_ParamLimits

0xc792,	// (0x00046ef4) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0004a2d9) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0004a2d9) list_single_pane_fp_g

0x5715,	// (0x0003fe77) list_single_pane_fp_t1_ParamLimits

0x5715,	// (0x0003fe77) list_single_pane_fp_t1

0x572c,	// (0x0003fe8e) list_single_graphic_pane_fp_g1_ParamLimits

0x572c,	// (0x0003fe8e) list_single_graphic_pane_fp_g1

0xc772,	// (0x00046ed4) list_single_graphic_pane_fp_g2_ParamLimits

0xc772,	// (0x00046ed4) list_single_graphic_pane_fp_g2

0x94dc,	// (0x00043c3e) list_single_graphic_pane_fp_g3_ParamLimits

0x94dc,	// (0x00043c3e) list_single_graphic_pane_fp_g3

0xc77e,	// (0x00046ee0) list_single_graphic_pane_fp_g4_ParamLimits

0xc77e,	// (0x00046ee0) list_single_graphic_pane_fp_g4

0xc792,	// (0x00046ef4) list_single_graphic_pane_fp_g5_ParamLimits

0xc792,	// (0x00046ef4) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0004a2e2) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0004a2e2) list_single_graphic_pane_fp_g

0x5738,	// (0x0003fe9a) list_single_graphic_pane_fp_t1_ParamLimits

0x5738,	// (0x0003fe9a) list_single_graphic_pane_fp_t1

0x572c,	// (0x0003fe8e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x572c,	// (0x0003fe8e) list_single_graphic_heading_pane_fp_g1

0xc772,	// (0x00046ed4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc772,	// (0x00046ed4) list_single_graphic_heading_pane_fp_g2

0x94dc,	// (0x00043c3e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x94dc,	// (0x00043c3e) list_single_graphic_heading_pane_fp_g3

0xc77e,	// (0x00046ee0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc77e,	// (0x00046ee0) list_single_graphic_heading_pane_fp_g4

0xc792,	// (0x00046ef4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc792,	// (0x00046ef4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0004a2e2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0004a2e2) list_single_graphic_heading_pane_fp_g

0x574e,	// (0x0003feb0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x574e,	// (0x0003feb0) list_single_graphic_heading_pane_fp_t1

0x5764,	// (0x0003fec6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5764,	// (0x0003fec6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0004a2ed) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0004a2ed) list_single_graphic_heading_pane_fp_t

0x5776,	// (0x0003fed8) list_single_cale_day_pane_fp_g1_ParamLimits

0x5776,	// (0x0003fed8) list_single_cale_day_pane_fp_g1

0xc79e,	// (0x00046f00) list_single_cale_day_pane_fp_g2_ParamLimits

0xc79e,	// (0x00046f00) list_single_cale_day_pane_fp_g2

0x6c68,	// (0x000413ca) list_single_cale_day_pane_fp_g3_ParamLimits

0x6c68,	// (0x000413ca) list_single_cale_day_pane_fp_g3

0x6c90,	// (0x000413f2) list_single_cale_day_pane_fp_g4_ParamLimits

0x6c90,	// (0x000413f2) list_single_cale_day_pane_fp_g4

0x6cb4,	// (0x00041416) list_single_cale_day_pane_fp_g5_ParamLimits

0x6cb4,	// (0x00041416) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0004a2f2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0004a2f2) list_single_cale_day_pane_fp_g

0x57ae,	// (0x0003ff10) list_single_cale_day_pane_fp_t1_ParamLimits

0x57ae,	// (0x0003ff10) list_single_cale_day_pane_fp_t1

0x57d4,	// (0x0003ff36) list_single_cale_day_pane_fp_t2_ParamLimits

0x57d4,	// (0x0003ff36) list_single_cale_day_pane_fp_t2

0x57ed,	// (0x0003ff4f) list_single_cale_day_pane_fp_t3_ParamLimits

0x57ed,	// (0x0003ff4f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0004a2fd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0004a2fd) list_single_cale_day_pane_fp_t

0xc772,	// (0x00046ed4) list_empty_pane_fp_g1_ParamLimits

0xc772,	// (0x00046ed4) list_empty_pane_fp_g1

0x5806,	// (0x0003ff68) list_empty_pane_fp_t1

0x5814,	// (0x0003ff76) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0004a304) list_empty_pane_fp_t

0xc772,	// (0x00046ed4) list_single_heading_pane_fp_g1_ParamLimits

0xc772,	// (0x00046ed4) list_single_heading_pane_fp_g1

0x94dc,	// (0x00043c3e) list_single_heading_pane_fp_g2_ParamLimits

0x94dc,	// (0x00043c3e) list_single_heading_pane_fp_g2

0xc77e,	// (0x00046ee0) list_single_heading_pane_fp_g3_ParamLimits

0xc77e,	// (0x00046ee0) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0004a309) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a309) list_single_heading_pane_fp_g

0x5822,	// (0x0003ff84) list_single_heading_pane_fp_t1_ParamLimits

0x5822,	// (0x0003ff84) list_single_heading_pane_fp_t1

0x5834,	// (0x0003ff96) list_single_heading_pane_fp_t2_ParamLimits

0x5834,	// (0x0003ff96) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0004a310) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0004a310) list_single_heading_pane_fp_t

0x8262,	// (0x000429c4) aid_size_cell_fast

0x79e3,	// (0x00042145) soft_indicator_pane_cp1_t1

0x829f,	// (0x00042a01) cell_app_pane_cp2_ParamLimits

0x829f,	// (0x00042a01) cell_app_pane_cp2

0x6a2c,	// (0x0004118e) fep_hwr_candidate_drop_down_list_pane

0x25a2,	// (0x0003cd04) fep_hwr_candidate_pane_g3_ParamLimits

0x25a2,	// (0x0003cd04) fep_hwr_candidate_pane_g3

0x25af,	// (0x0003cd11) fep_hwr_candidate_pane_g4_ParamLimits

0x25af,	// (0x0003cd11) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0004a284) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0004a284) fep_hwr_candidate_pane_g

0xc239,	// (0x0004699b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc239,	// (0x0004699b) fep_vkb_candidate_drop_down_list_pane

0xc64a,	// (0x00046dac) fep_vkb_candidate_pane_g3

0xc652,	// (0x00046db4) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0004a2b1) fep_vkb_candidate_pane_g

0xc352,	// (0x00046ab4) cell_hwr_candidate_pane_g1_ParamLimits

0xc703,	// (0x00046e65) cell_hwr_candidate_pane_g3_ParamLimits

0xc703,	// (0x00046e65) cell_hwr_candidate_pane_g3

0xc724,	// (0x00046e86) cell_hwr_candidate_pane_g4_ParamLimits

0xc724,	// (0x00046e86) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0004a2cb) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0004a2cb) cell_hwr_candidate_pane_g

0xc669,	// (0x00046dcb) cell_vkb_candidate_pane_g3_ParamLimits

0xc669,	// (0x00046dcb) cell_vkb_candidate_pane_g3

0xc684,	// (0x00046de6) cell_vkb_candidate_pane_g4_ParamLimits

0xc684,	// (0x00046de6) cell_vkb_candidate_pane_g4

0xc7aa,	// (0x00046f0c) cell_app_pane_cp2_g1_ParamLimits

0xc7aa,	// (0x00046f0c) cell_app_pane_cp2_g1

0xc7c8,	// (0x00046f2a) cell_app_pane_cp2_g2_ParamLimits

0xc7c8,	// (0x00046f2a) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0004a315) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0004a315) cell_app_pane_cp2_g

0xc7d4,	// (0x00046f36) cell_app_pane_cp2_t1_ParamLimits

0xc7d4,	// (0x00046f36) cell_app_pane_cp2_t1

0x8056,	// (0x000427b8) grid_highlight_pane_cp1_ParamLimits

0x8056,	// (0x000427b8) grid_highlight_pane_cp1

0x6cd8,	// (0x0004143a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6cd8,	// (0x0004143a) cell_hwr_candidate_pane_cp1

0xc352,	// (0x00046ab4) fep_hwr_candidate_drop_down_list_pane_g1

0xc7e6,	// (0x00046f48) fep_hwr_candidate_drop_down_list_pane_g2

0xc7f3,	// (0x00046f55) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0004a31a) fep_hwr_candidate_drop_down_list_pane_g

0x6cf7,	// (0x00041459) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d00,	// (0x00041462) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d00,	// (0x00041462) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d0d,	// (0x0004146f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d0d,	// (0x0004146f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d1a,	// (0x0004147c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d1a,	// (0x0004147c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc669,	// (0x00046dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc669,	// (0x00046dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc684,	// (0x00046de6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc684,	// (0x00046de6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d27,	// (0x00041489) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d27,	// (0x00041489) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d42,	// (0x000414a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d42,	// (0x000414a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d5d,	// (0x000414bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d5d,	// (0x000414bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0004a321) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0004a321) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc800,	// (0x00046f62) cell_vkb_candidate_pane_cp1_ParamLimits

0xc800,	// (0x00046f62) cell_vkb_candidate_pane_cp1

0xc352,	// (0x00046ab4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) fep_vkb_candidate_drop_down_list_pane_g1

0xc7e6,	// (0x00046f48) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7e6,	// (0x00046f48) fep_vkb_candidate_drop_down_list_pane_g2

0xc7f3,	// (0x00046f55) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7f3,	// (0x00046f55) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0004a31a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0004a31a) fep_vkb_candidate_drop_down_list_pane_g

0xc820,	// (0x00046f82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc820,	// (0x00046f82) fep_vkb_candidate_drop_down_list_scroll_pane

0xc82d,	// (0x00046f8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc82d,	// (0x00046f8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc83a,	// (0x00046f9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc83a,	// (0x00046f9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc846,	// (0x00046fa8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc846,	// (0x00046fa8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc703,	// (0x00046e65) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc703,	// (0x00046e65) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc724,	// (0x00046e86) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc724,	// (0x00046e86) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc852,	// (0x00046fb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc852,	// (0x00046fb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc873,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc873,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc894,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc894,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0004a332) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0004a332) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7714,	// (0x00041e76) title_pane_g1_ParamLimits

0x7721,	// (0x00041e83) title_pane_g2_ParamLimits

0xf56a,	// (0x00049ccc) title_pane_g_ParamLimits

0x86ac,	// (0x00042e0e) aid_call2_pane

0x86b4,	// (0x00042e16) aid_call_pane

0x86bc,	// (0x00042e1e) popup_clock_analogue_window_g1

0x86bc,	// (0x00042e1e) popup_clock_analogue_window_g2

0x604d,	// (0x000407af) popup_clock_analogue_window_g3

0x6056,	// (0x000407b8) popup_clock_analogue_window_g4

0x7700,	// (0x00041e62) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00049e7b) popup_clock_analogue_window_g

0x605e,	// (0x000407c0) popup_clock_analogue_window_t1

0x606c,	// (0x000407ce) clock_digital_number_pane_ParamLimits

0x606c,	// (0x000407ce) clock_digital_number_pane

0x6078,	// (0x000407da) clock_digital_number_pane_cp02_ParamLimits

0x6078,	// (0x000407da) clock_digital_number_pane_cp02

0x6084,	// (0x000407e6) clock_digital_number_pane_cp03_ParamLimits

0x6084,	// (0x000407e6) clock_digital_number_pane_cp03

0x6090,	// (0x000407f2) clock_digital_number_pane_cp04_ParamLimits

0x6090,	// (0x000407f2) clock_digital_number_pane_cp04

0x609c,	// (0x000407fe) clock_digital_separator_pane_ParamLimits

0x609c,	// (0x000407fe) clock_digital_separator_pane

0x60a8,	// (0x0004080a) popup_clock_digital_window_t1_ParamLimits

0x60a8,	// (0x0004080a) popup_clock_digital_window_t1

0x7700,	// (0x00041e62) clock_digital_number_pane_g1

0x7700,	// (0x00041e62) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00049e86) clock_digital_number_pane_g

0x7700,	// (0x00041e62) clock_digital_separator_pane_g1

0x7700,	// (0x00041e62) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00049e86) clock_digital_separator_pane_g

0x95d2,	// (0x00043d34) aid_fill_nsta_ParamLimits

0x9714,	// (0x00043e76) indicator_nsta_pane_ParamLimits

0x9886,	// (0x00043fe8) popup_clock_analogue_window

0x9886,	// (0x00043fe8) popup_clock_digital_window

0x77ea,	// (0x00041f4c) grid_indicator_nsta_pane_ParamLimits

0xba9f,	// (0x00046201) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0004a204) clock_nsta_pane_t

0x6011,	// (0x00040773) aid_size_max_handle

0x601b,	// (0x0004077d) aid_size_min_handle

0x8c99,	// (0x000433fb) editor_scroll_pane

0xc8af,	// (0x00047011) ex_editor_pane

0x81d0,	// (0x00042932) scroll_pane_cp13

0x7ff5,	// (0x00042757) scroll_pane_cp14

0x86e6,	// (0x00042e48) scroll_pane_cp36

0x8712,	// (0x00042e74) list_single_graphic_hl_pane_cp2_ParamLimits

0x8712,	// (0x00042e74) list_single_graphic_hl_pane_cp2

0x54fe,	// (0x0003fc60) list_single_graphic_hl_pane_ParamLimits

0x54fe,	// (0x0003fc60) list_single_graphic_hl_pane

0x584a,	// (0x0003ffac) aid_size_min_hl_cp1

0xc8b7,	// (0x00047019) list_highlight_pane_cp34_ParamLimits

0xc8b7,	// (0x00047019) list_highlight_pane_cp34

0xc8c8,	// (0x0004702a) list_single_graphic_hl_pane_g1_ParamLimits

0xc8c8,	// (0x0004702a) list_single_graphic_hl_pane_g1

0x5853,	// (0x0003ffb5) list_single_graphic_hl_pane_g2_ParamLimits

0x5853,	// (0x0003ffb5) list_single_graphic_hl_pane_g2

0x5853,	// (0x0003ffb5) list_single_graphic_hl_pane_g3_ParamLimits

0x5853,	// (0x0003ffb5) list_single_graphic_hl_pane_g3

0x8c0a,	// (0x0004336c) list_single_graphic_hl_pane_g4_ParamLimits

0x8c0a,	// (0x0004336c) list_single_graphic_hl_pane_g4

0x6d78,	// (0x000414da) list_single_graphic_hl_pane_g5_ParamLimits

0x6d78,	// (0x000414da) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0004a343) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0004a343) list_single_graphic_hl_pane_g

0x585f,	// (0x0003ffc1) list_single_graphic_hl_pane_t1_ParamLimits

0x585f,	// (0x0003ffc1) list_single_graphic_hl_pane_t1

0xc8d5,	// (0x00047037) aid_size_min_hl_cp2

0xc8de,	// (0x00047040) list_highlight_pane_cp34_cp2_ParamLimits

0xc8de,	// (0x00047040) list_highlight_pane_cp34_cp2

0xc8c8,	// (0x0004702a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8c8,	// (0x0004702a) list_single_graphic_hl_pane_g1_cp2

0xc8eb,	// (0x0004704d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8eb,	// (0x0004704d) list_single_graphic_hl_pane_g2_cp2

0xc8f7,	// (0x00047059) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8f7,	// (0x00047059) list_single_graphic_hl_pane_g3_cp2

0x9f1d,	// (0x0004467f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9f1d,	// (0x0004467f) list_single_graphic_hl_pane_g4_cp2

0xc905,	// (0x00047067) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc905,	// (0x00047067) list_single_graphic_hl_pane_g5_cp2

0x6358,	// (0x00040aba) control_pane_g4_ParamLimits

0x6358,	// (0x00040aba) control_pane_g4

0x8ff7,	// (0x00043759) bg_popup_sub_pane_cp10_ParamLimits

0xc0ca,	// (0x0004682c) list_choice_list_pane_ParamLimits

0xc0d9,	// (0x0004683b) scroll_pane_cp23

0x7a73,	// (0x000421d5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6d5,	// (0x00046e37) list_preview_fixed_pane_ParamLimits

0xc6eb,	// (0x00046e4d) list_preview_fixed_pane_cp_ParamLimits

0xc6eb,	// (0x00046e4d) list_preview_fixed_pane_cp

0xc6f7,	// (0x00046e59) popup_preview_fixed_window_g1_ParamLimits

0xc6f7,	// (0x00046e59) popup_preview_fixed_window_g1

0xc745,	// (0x00046ea7) popup_preview_fixed_window_g2_ParamLimits

0xc745,	// (0x00046ea7) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0004a2d2) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0004a2d2) popup_preview_fixed_window_g

0x5f85,	// (0x000406e7) aid_navi_side_left_pane_ParamLimits

0x5f9a,	// (0x000406fc) aid_navi_side_right_pane_ParamLimits

0x5fb2,	// (0x00040714) navi_icon_pane_stacon_ParamLimits

0x5fc6,	// (0x00040728) navi_navi_pane_stacon_ParamLimits

0x5fb2,	// (0x00040714) navi_text_pane_stacon_ParamLimits

0x76f6,	// (0x00041e58) main_text_info_pane

0xc92f,	// (0x00047091) listscroll_text_info_pane

0xc937,	// (0x00047099) list_text_info_pane_ParamLimits

0xc937,	// (0x00047099) list_text_info_pane

0xc946,	// (0x000470a8) scroll_pane_cp24_ParamLimits

0xc946,	// (0x000470a8) scroll_pane_cp24

0xc964,	// (0x000470c6) list_text_info_pane_t1_ParamLimits

0xc964,	// (0x000470c6) list_text_info_pane_t1

0x9039,	// (0x0004379b) popup_fast_swap2_window_ParamLimits

0x9039,	// (0x0004379b) popup_fast_swap2_window

0xc995,	// (0x000470f7) aid_size_cell_fast2

0x76f6,	// (0x00041e58) bg_popup_window_pane_cp17

0x9f6d,	// (0x000446cf) heading_pane_cp2

0x7cbf,	// (0x00042421) listscroll_fast2_pane

0xc99f,	// (0x00047101) grid_fast2_pane

0xc9a9,	// (0x0004710b) listscroll_fast2_pane_g1

0xc9b1,	// (0x00047113) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0004a34e) listscroll_fast2_pane_g

0x81d0,	// (0x00042932) scroll_pane_cp26

0xc9bb,	// (0x0004711d) cell_fast2_pane_ParamLimits

0xc9bb,	// (0x0004711d) cell_fast2_pane

0xc9d0,	// (0x00047132) cell_fast2_pane_g1

0xc9d9,	// (0x0004713b) cell_fast2_pane_g2

0xc9e2,	// (0x00047144) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0004a353) cell_fast2_pane_g

0x7db2,	// (0x00042514) grid_highlight_pane_cp9

0x7dc7,	// (0x00042529) main_eswt_pane_ParamLimits

0x7dc7,	// (0x00042529) main_eswt_pane

0xc95b,	// (0x000470bd) list_single_text_info_pane

0xc9ea,	// (0x0004714c) eswt_ctrl_button_pane

0xc9ea,	// (0x0004714c) eswt_ctrl_canvas_pane

0xc9f2,	// (0x00047154) eswt_ctrl_combo_pane

0xc9ea,	// (0x0004714c) eswt_ctrl_default_pane

0xc9ea,	// (0x0004714c) eswt_ctrl_label_pane

0xc9fa,	// (0x0004715c) eswt_ctrl_wait_pane

0xca02,	// (0x00047164) eswt_shell_pane

0x76f6,	// (0x00041e58) listscroll_eswt_app_pane

0xca22,	// (0x00047184) popup_eswt_tasktip_window_ParamLimits

0xca22,	// (0x00047184) popup_eswt_tasktip_window

0x9b9f,	// (0x00044301) bg_popup_window_pane_cp18

0xca33,	// (0x00047195) eswt_control_pane_g1_ParamLimits

0xca33,	// (0x00047195) eswt_control_pane_g1

0xca40,	// (0x000471a2) eswt_control_pane_g2_ParamLimits

0xca40,	// (0x000471a2) eswt_control_pane_g2

0xca4d,	// (0x000471af) eswt_control_pane_g3_ParamLimits

0xca4d,	// (0x000471af) eswt_control_pane_g3

0xca5a,	// (0x000471bc) eswt_control_pane_g4_ParamLimits

0xca5a,	// (0x000471bc) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0004a35a) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0004a35a) eswt_control_pane_g

0x8056,	// (0x000427b8) bg_button_pane_ParamLimits

0x8056,	// (0x000427b8) bg_button_pane

0x7dc7,	// (0x00042529) common_borders_pane_copy2_ParamLimits

0x7dc7,	// (0x00042529) common_borders_pane_copy2

0xca67,	// (0x000471c9) control_button_pane_g1_ParamLimits

0xca67,	// (0x000471c9) control_button_pane_g1

0xca73,	// (0x000471d5) control_button_pane_g2_ParamLimits

0xca73,	// (0x000471d5) control_button_pane_g2

0xca7f,	// (0x000471e1) control_button_pane_g3_ParamLimits

0xca7f,	// (0x000471e1) control_button_pane_g3

0x0002,

0xfc01,	// (0x0004a363) control_button_pane_g_ParamLimits

0xfc01,	// (0x0004a363) control_button_pane_g

0xca93,	// (0x000471f5) control_button_pane_t1

0xcaa1,	// (0x00047203) control_button_pane_t2

0x0001,

0xfc08,	// (0x0004a36a) control_button_pane_t

0x9aaf,	// (0x00044211) bg_button_pane_g1

0x9ab7,	// (0x00044219) bg_button_pane_g2

0x9abf,	// (0x00044221) bg_button_pane_g3

0x9ac7,	// (0x00044229) bg_button_pane_g4

0x9acf,	// (0x00044231) bg_button_pane_g5

0x9ad7,	// (0x00044239) bg_button_pane_g6

0x9adf,	// (0x00044241) bg_button_pane_g7

0x9ae7,	// (0x00044249) bg_button_pane_g8

0x9aef,	// (0x00044251) bg_button_pane_g9

0x0008,

0xf87c,	// (0x00049fde) bg_button_pane_g

0xc085,	// (0x000467e7) common_borders_pane_ParamLimits

0xc085,	// (0x000467e7) common_borders_pane

0xca33,	// (0x00047195) eswt_control_pane_g1_copy1_ParamLimits

0xca33,	// (0x00047195) eswt_control_pane_g1_copy1

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy1_ParamLimits

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy1

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy1_ParamLimits

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy1

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy1_ParamLimits

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy1

0xc0c0,	// (0x00046822) bg_eswt_ctrl_canvas_pane_g1

0xc085,	// (0x000467e7) common_borders_pane_cp2_ParamLimits

0xc085,	// (0x000467e7) common_borders_pane_cp2

0xc085,	// (0x000467e7) common_borders_pane_cp3_ParamLimits

0xc085,	// (0x000467e7) common_borders_pane_cp3

0xcaaf,	// (0x00047211) separator_horizontal_pane

0xcab7,	// (0x00047219) separator_vertical_pane

0xca33,	// (0x00047195) eswt_control_pane_g1_copy2_ParamLimits

0xca33,	// (0x00047195) eswt_control_pane_g1_copy2

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy2_ParamLimits

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy2

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy2_ParamLimits

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy2

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy2_ParamLimits

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy2

0x76f6,	// (0x00041e58) common_borders_pane_cp4

0xcac0,	// (0x00047222) separator_horizontal_pane_g1

0xcac9,	// (0x0004722b) separator_horizontal_pane_g2

0xcad2,	// (0x00047234) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0004a36f) separator_horizontal_pane_g

0xca33,	// (0x00047195) eswt_control_pane_g1_copy3_ParamLimits

0xca33,	// (0x00047195) eswt_control_pane_g1_copy3

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy3_ParamLimits

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy3

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy3_ParamLimits

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy3

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy3_ParamLimits

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy3

0x76f6,	// (0x00041e58) common_borders_pane_cp5

0xcadb,	// (0x0004723d) separator_vertical_pane_g1

0xcae4,	// (0x00047246) separator_vertical_pane_g2

0xcaed,	// (0x0004724f) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0004a376) separator_vertical_pane_g

0xca33,	// (0x00047195) eswt_control_pane_g1_copy4_ParamLimits

0xca33,	// (0x00047195) eswt_control_pane_g1_copy4

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy4_ParamLimits

0xca40,	// (0x000471a2) eswt_control_pane_g2_copy4

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy4_ParamLimits

0xca4d,	// (0x000471af) eswt_control_pane_g3_copy4

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy4_ParamLimits

0xca5a,	// (0x000471bc) eswt_control_pane_g4_copy4

0xcaf6,	// (0x00047258) eswt_ctrl_combo_button_pane

0xcafe,	// (0x00047260) eswt_ctrl_input_pane

0xcb06,	// (0x00047268) popup_choice_list_window_cp70

0xcb0e,	// (0x00047270) eswt_ctrl_input_pane_t1

0x76f6,	// (0x00041e58) input_focus_pane_cp70

0xc085,	// (0x000467e7) bg_button_pane_cp70_ParamLimits

0xc085,	// (0x000467e7) bg_button_pane_cp70

0xcb1c,	// (0x0004727e) eswt_ctrl_combo_button_pane_g1

0xcb24,	// (0x00047286) wait_bar_pane_cp70

0x9b9f,	// (0x00044301) bg_popup_window_pane_cp70_ParamLimits

0x9b9f,	// (0x00044301) bg_popup_window_pane_cp70

0xcb2c,	// (0x0004728e) popup_eswt_tasktip_window_t1

0xcb42,	// (0x000472a4) wait_bar_pane_cp71_ParamLimits

0xcb42,	// (0x000472a4) wait_bar_pane_cp71

0xcb4e,	// (0x000472b0) grid_eswt_app_pane

0x84f7,	// (0x00042c59) scroll_pane_cp70

0xcb57,	// (0x000472b9) cell_eswt_app_pane_ParamLimits

0xcb57,	// (0x000472b9) cell_eswt_app_pane

0xcb87,	// (0x000472e9) cell_eswt_app_pane_g1_ParamLimits

0xcb87,	// (0x000472e9) cell_eswt_app_pane_g1

0xcbb6,	// (0x00047318) cell_eswt_app_pane_g2_ParamLimits

0xcbb6,	// (0x00047318) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0004a37d) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0004a37d) cell_eswt_app_pane_g

0xcbdf,	// (0x00047341) cell_eswt_app_pane_t1_ParamLimits

0xcbdf,	// (0x00047341) cell_eswt_app_pane_t1

0xcc11,	// (0x00047373) grid_highlight_pane_cp70_ParamLimits

0xcc11,	// (0x00047373) grid_highlight_pane_cp70

0x8af9,	// (0x0004325b) set_content_pane_g1

0x8f45,	// (0x000436a7) status_small_volume_pane

0x6d8c,	// (0x000414ee) status_small_volume_pane_g1

0x6d94,	// (0x000414f6) volume_small2_pane

0x6d9d,	// (0x000414ff) volume_small2_pane_g1

0x6da6,	// (0x00041508) volume_small2_pane_g2

0x6daf,	// (0x00041511) volume_small2_pane_g3

0x6db8,	// (0x0004151a) volume_small2_pane_g4

0x6dc1,	// (0x00041523) volume_small2_pane_g5

0x6dca,	// (0x0004152c) volume_small2_pane_g6

0x6dd3,	// (0x00041535) volume_small2_pane_g7

0x6ddc,	// (0x0004153e) volume_small2_pane_g8

0x6de5,	// (0x00041547) volume_small2_pane_g9

0x6dee,	// (0x00041550) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0004a382) volume_small2_pane_g

0xc49a,	// (0x00046bfc) fep_vkb_top_text_pane_g1_ParamLimits

0xc4b5,	// (0x00046c17) fep_vkb_top_text_pane_t1_ParamLimits

0xc751,	// (0x00046eb3) popup_preview_fixed_window_g3_ParamLimits

0xc751,	// (0x00046eb3) popup_preview_fixed_window_g3

0x9508,	// (0x00043c6a) popup_toolbar_trans_pane

0xaeed,	// (0x0004564f) aid_height_set_list_ParamLimits

0xaefe,	// (0x00045660) aid_size_parent_ParamLimits

0x8ff7,	// (0x00043759) list_highlight_pane_cp2_ParamLimits

0x8af9,	// (0x0004325b) set_content_pane_g1_ParamLimits

0x6855,	// (0x00040fb7) list_single_image_pane_ParamLimits

0x6855,	// (0x00040fb7) list_single_image_pane

0xcc1d,	// (0x0004737f) aid_size_cell_image_ParamLimits

0xcc1d,	// (0x0004737f) aid_size_cell_image

0xcc2a,	// (0x0004738c) grid_single_image_pane_ParamLimits

0xcc2a,	// (0x0004738c) grid_single_image_pane

0x94dc,	// (0x00043c3e) list_single_image_pane_g1_ParamLimits

0x94dc,	// (0x00043c3e) list_single_image_pane_g1

0xc77e,	// (0x00046ee0) list_single_image_pane_g2_ParamLimits

0xc77e,	// (0x00046ee0) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0004a397) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0004a397) list_single_image_pane_g

0x94e8,	// (0x00043c4a) list_single_image_pane_t1_ParamLimits

0x94e8,	// (0x00043c4a) list_single_image_pane_t1

0xcc38,	// (0x0004739a) cell_image_list_pane_ParamLimits

0xcc38,	// (0x0004739a) cell_image_list_pane

0xcc4b,	// (0x000473ad) cell_image_list_pane_g1

0xcc54,	// (0x000473b6) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0004a39c) cell_image_list_pane_g

0xcc5d,	// (0x000473bf) aid_size_cell_tb_trans_pane

0x8056,	// (0x000427b8) bg_tb_trans_pane

0xcc6f,	// (0x000473d1) grid_tb_trans_pane

0x9aaf,	// (0x00044211) bg_tb_trans_pane_g1

0x9ab7,	// (0x00044219) bg_tb_trans_pane_g2

0x9abf,	// (0x00044221) bg_tb_trans_pane_g3

0x9ac7,	// (0x00044229) bg_tb_trans_pane_g4

0x9acf,	// (0x00044231) bg_tb_trans_pane_g5

0x9ae7,	// (0x00044249) bg_tb_trans_pane_g6

0x9aef,	// (0x00044251) bg_tb_trans_pane_g7

0x9ad7,	// (0x00044239) bg_tb_trans_pane_g8

0x9adf,	// (0x00044241) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0004a3a1) bg_tb_trans_pane_g

0xcc83,	// (0x000473e5) cell_toolbar_trans_pane_ParamLimits

0xcc83,	// (0x000473e5) cell_toolbar_trans_pane

0xc0c0,	// (0x00046822) cell_toolbar_trans_pane_g1

0xbc89,	// (0x000463eb) list_form2_midp_pane_t1

0xbc97,	// (0x000463f9) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0004a24a) list_form2_midp_pane_t

0xbca5,	// (0x00046407) scroll_pane_cp51_ParamLimits

0xbe61,	// (0x000465c3) form2_midp_wait_pane_g1

0xbe6a,	// (0x000465cc) form2_midp_wait_pane_g2

0xbe73,	// (0x000465d5) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0004a25f) form2_midp_wait_pane_g

0x77ea,	// (0x00041f4c) list_highlight_pane_cp21_ParamLimits

0xbeca,	// (0x0004662c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbed9,	// (0x0004663b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x67f9,	// (0x00040f5b) list_single_2graphic_im_pane_ParamLimits

0x67f9,	// (0x00040f5b) list_single_2graphic_im_pane

0xcca9,	// (0x0004740b) list_single_2graphic_im_pane_g1_ParamLimits

0xcca9,	// (0x0004740b) list_single_2graphic_im_pane_g1

0xccba,	// (0x0004741c) list_single_2graphic_im_pane_g2_ParamLimits

0xccba,	// (0x0004741c) list_single_2graphic_im_pane_g2

0xccc6,	// (0x00047428) list_single_2graphic_im_pane_g3_ParamLimits

0xccc6,	// (0x00047428) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0004a3b4) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0004a3b4) list_single_2graphic_im_pane_g

0xcce6,	// (0x00047448) list_single_2graphic_im_pane_t1_ParamLimits

0xcce6,	// (0x00047448) list_single_2graphic_im_pane_t1

0xc75d,	// (0x00046ebf) list_single_graphic_2heading_pane_fp_ParamLimits

0xc75d,	// (0x00046ebf) list_single_graphic_2heading_pane_fp

0x572c,	// (0x0003fe8e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x572c,	// (0x0003fe8e) list_single_graphic_2heading_pane_fp_g1

0xc772,	// (0x00046ed4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc772,	// (0x00046ed4) list_single_graphic_2heading_pane_fp_g2

0x94dc,	// (0x00043c3e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x94dc,	// (0x00043c3e) list_single_graphic_2heading_pane_fp_g3

0xc77e,	// (0x00046ee0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc77e,	// (0x00046ee0) list_single_graphic_2heading_pane_fp_g4

0xc792,	// (0x00046ef4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc792,	// (0x00046ef4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0004a2e2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0004a2e2) list_single_graphic_2heading_pane_fp_g

0x5875,	// (0x0003ffd7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5875,	// (0x0003ffd7) list_single_graphic_2heading_pane_fp_t1

0x5764,	// (0x0003fec6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5764,	// (0x0003fec6) list_single_graphic_2heading_pane_fp_t2

0x588b,	// (0x0003ffed) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x588b,	// (0x0003ffed) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0004a3bd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0004a3bd) list_single_graphic_2heading_pane_fp_t

0xc160,	// (0x000468c2) fep_hwr_write_pane_g5_ParamLimits

0xc160,	// (0x000468c2) fep_hwr_write_pane_g5

0xc16c,	// (0x000468ce) fep_hwr_write_pane_g6_ParamLimits

0xc16c,	// (0x000468ce) fep_hwr_write_pane_g6

0xca02,	// (0x00047164) eswt_shell_pane_ParamLimits

0x9b9f,	// (0x00044301) bg_popup_window_pane_cp18_ParamLimits

0xae46,	// (0x000455a8) heading_pane_cp70

0xcb2c,	// (0x0004728e) popup_eswt_tasktip_window_t1_ParamLimits

0x9627,	// (0x00043d89) aid_touch_tab_arrow_left

0x9633,	// (0x00043d95) aid_touch_tab_arrow_right

0x7732,	// (0x00041e94) title_pane_g3_ParamLimits

0x7732,	// (0x00041e94) title_pane_g3

0x8015,	// (0x00042777) set_value_pane_g1

0x9508,	// (0x00043c6a) popup_toolbar_trans_pane_ParamLimits

0xcc5d,	// (0x000473bf) aid_size_cell_tb_trans_pane_ParamLimits

0x8056,	// (0x000427b8) bg_tb_trans_pane_ParamLimits

0xcc6f,	// (0x000473d1) grid_tb_trans_pane_ParamLimits

0x7a73,	// (0x000421d5) cont_note_pane_ParamLimits

0x7a73,	// (0x000421d5) cont_note_pane

0x7dc7,	// (0x00042529) cont_snote2_single_text_pane_ParamLimits

0x7dc7,	// (0x00042529) cont_snote2_single_text_pane

0x7dc7,	// (0x00042529) cont_snote2_single_graphic_pane_ParamLimits

0x7dc7,	// (0x00042529) cont_snote2_single_graphic_pane

0xa188,	// (0x000448ea) cont_note_wait_pane_ParamLimits

0xa188,	// (0x000448ea) cont_note_wait_pane

0xa188,	// (0x000448ea) cont_note_image_pane_ParamLimits

0xa188,	// (0x000448ea) cont_note_image_pane

0xcd17,	// (0x00047479) popup_note2_window_g1_ParamLimits

0xcd17,	// (0x00047479) popup_note2_window_g1

0xcd48,	// (0x000474aa) popup_note2_window_t1_ParamLimits

0xcd48,	// (0x000474aa) popup_note2_window_t1

0xcd8d,	// (0x000474ef) popup_note2_window_t2_ParamLimits

0xcd8d,	// (0x000474ef) popup_note2_window_t2

0xcdd2,	// (0x00047534) popup_note2_window_t3_ParamLimits

0xcdd2,	// (0x00047534) popup_note2_window_t3

0xce17,	// (0x00047579) popup_note2_window_t4_ParamLimits

0xce17,	// (0x00047579) popup_note2_window_t4

0x7af7,	// (0x00042259) popup_note2_window_t5_ParamLimits

0x7af7,	// (0x00042259) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0004a3c9) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0004a3c9) popup_note2_window_t

0xce46,	// (0x000475a8) popup_note2_image_window_g1_ParamLimits

0xce46,	// (0x000475a8) popup_note2_image_window_g1

0xce52,	// (0x000475b4) popup_note2_image_window_g2_ParamLimits

0xce52,	// (0x000475b4) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0004a3d4) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0004a3d4) popup_note2_image_window_g

0xce64,	// (0x000475c6) popup_note2_image_window_t1_ParamLimits

0xce64,	// (0x000475c6) popup_note2_image_window_t1

0xce7c,	// (0x000475de) popup_note2_image_window_t2_ParamLimits

0xce7c,	// (0x000475de) popup_note2_image_window_t2

0xce94,	// (0x000475f6) popup_note2_image_window_t3_ParamLimits

0xce94,	// (0x000475f6) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0004a3d9) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0004a3d9) popup_note2_image_window_t

0xa196,	// (0x000448f8) popup_note2_wait_window_g1_ParamLimits

0xa196,	// (0x000448f8) popup_note2_wait_window_g1

0xceb0,	// (0x00047612) popup_note2_wait_window_g2_ParamLimits

0xceb0,	// (0x00047612) popup_note2_wait_window_g2

0xa1ae,	// (0x00044910) popup_note2_wait_window_g3_ParamLimits

0xa1ae,	// (0x00044910) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x0004a3e0) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x0004a3e0) popup_note2_wait_window_g

0xcebc,	// (0x0004761e) popup_note2_wait_window_t1_ParamLimits

0xcebc,	// (0x0004761e) popup_note2_wait_window_t1

0xceda,	// (0x0004763c) popup_note2_wait_window_t2_ParamLimits

0xceda,	// (0x0004763c) popup_note2_wait_window_t2

0xcef8,	// (0x0004765a) popup_note2_wait_window_t3_ParamLimits

0xcef8,	// (0x0004765a) popup_note2_wait_window_t3

0xcf0a,	// (0x0004766c) popup_note2_wait_window_t4_ParamLimits

0xcf0a,	// (0x0004766c) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0004a3e7) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0004a3e7) popup_note2_wait_window_t

0xcf1c,	// (0x0004767e) wait_bar2_pane_ParamLimits

0xcf1c,	// (0x0004767e) wait_bar2_pane

0xcf34,	// (0x00047696) popup_snote2_single_text_window_g1_ParamLimits

0xcf34,	// (0x00047696) popup_snote2_single_text_window_g1

0xcf5c,	// (0x000476be) popup_snote2_single_text_window_t1_ParamLimits

0xcf5c,	// (0x000476be) popup_snote2_single_text_window_t1

0xcfa8,	// (0x0004770a) popup_snote2_single_text_window_t2_ParamLimits

0xcfa8,	// (0x0004770a) popup_snote2_single_text_window_t2

0xcff4,	// (0x00047756) popup_snote2_single_text_window_t3_ParamLimits

0xcff4,	// (0x00047756) popup_snote2_single_text_window_t3

0xd035,	// (0x00047797) popup_snote2_single_text_window_t4_ParamLimits

0xd035,	// (0x00047797) popup_snote2_single_text_window_t4

0xd06b,	// (0x000477cd) popup_snote2_single_text_window_t5_ParamLimits

0xd06b,	// (0x000477cd) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0004a3f0) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0004a3f0) popup_snote2_single_text_window_t

0xd096,	// (0x000477f8) popup_snote2_single_graphic_window_g1_ParamLimits

0xd096,	// (0x000477f8) popup_snote2_single_graphic_window_g1

0xd0be,	// (0x00047820) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0be,	// (0x00047820) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0004a3fb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0004a3fb) popup_snote2_single_graphic_window_g

0xd0e6,	// (0x00047848) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0e6,	// (0x00047848) popup_snote2_single_graphic_window_t1

0xd132,	// (0x00047894) popup_snote2_single_graphic_window_t2_ParamLimits

0xd132,	// (0x00047894) popup_snote2_single_graphic_window_t2

0xcff4,	// (0x00047756) popup_snote2_single_graphic_window_t3_ParamLimits

0xcff4,	// (0x00047756) popup_snote2_single_graphic_window_t3

0xd035,	// (0x00047797) popup_snote2_single_graphic_window_t4_ParamLimits

0xd035,	// (0x00047797) popup_snote2_single_graphic_window_t4

0xd06b,	// (0x000477cd) popup_snote2_single_graphic_window_t5_ParamLimits

0xd06b,	// (0x000477cd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0004a400) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0004a400) popup_snote2_single_graphic_window_t

0xbb62,	// (0x000462c4) clock_nsta_pane_cp2_t1

0xbb62,	// (0x000462c4) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0004a220) clock_nsta_pane_cp2_t

0x5168,	// (0x0003f8ca) form_field_data_wide_pane_g1_ParamLimits

0x8070,	// (0x000427d2) form_field_data_wide_pane_g2_ParamLimits

0x8070,	// (0x000427d2) form_field_data_wide_pane_g2

0x807c,	// (0x000427de) form_field_data_wide_pane_g3_ParamLimits

0x807c,	// (0x000427de) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00049dfe) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00049dfe) form_field_data_wide_pane_g

0xba3b,	// (0x0004619d) grid_touch_3_pane_ParamLimits

0xba3b,	// (0x0004619d) grid_touch_3_pane

0xd17e,	// (0x000478e0) cell_touch_3_pane_ParamLimits

0xd17e,	// (0x000478e0) cell_touch_3_pane

0xc0c0,	// (0x00046822) cell_touch_3_pane_g1

0xc0c0,	// (0x00046822) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0004a2a5) cell_touch_3_pane_g

0x7b29,	// (0x0004228b) cont_query_data_pane

0x7b31,	// (0x00042293) cont_query_data_pane_cp1

0xd1ac,	// (0x0004790e) button_value_adjust_pane_cp7

0xd1b4,	// (0x00047916) query_popup_pane_cp3

0x8781,	// (0x00042ee3) bg_popup_sub_pane_cp22_ParamLimits

0x60c7,	// (0x00040829) navi_navi_volume_pane_cp2

0x60e2,	// (0x00040844) popup_side_volume_key_window_g2

0x60f1,	// (0x00040853) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00049e90) popup_side_volume_key_window_g

0x610e,	// (0x00040870) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00049e97) popup_side_volume_key_window_t

0x8a38,	// (0x0004319a) popup_side_volume_key_window_ParamLimits

0x4d75,	// (0x0003f4d7) list_double_graphic_pane_g4_ParamLimits

0x4d75,	// (0x0003f4d7) list_double_graphic_pane_g4

0x6836,	// (0x00040f98) list_single_2heading_msg_pane_ParamLimits

0x6836,	// (0x00040f98) list_single_2heading_msg_pane

0x6df7,	// (0x00041559) list_single_2heading_msg_pane_g1_ParamLimits

0x6df7,	// (0x00041559) list_single_2heading_msg_pane_g1

0x8bd2,	// (0x00043334) list_single_2heading_msg_pane_g2_ParamLimits

0x8bd2,	// (0x00043334) list_single_2heading_msg_pane_g2

0x6e03,	// (0x00041565) list_single_2heading_msg_pane_g3_ParamLimits

0x6e03,	// (0x00041565) list_single_2heading_msg_pane_g3

0x6e0f,	// (0x00041571) list_single_2heading_msg_pane_g4_ParamLimits

0x6e0f,	// (0x00041571) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0004a40b) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0004a40b) list_single_2heading_msg_pane_g

0x58ab,	// (0x0004000d) list_single_2heading_msg_pane_t1_ParamLimits

0x58ab,	// (0x0004000d) list_single_2heading_msg_pane_t1

0x58d3,	// (0x00040035) list_single_2heading_msg_pane_t2_ParamLimits

0x58d3,	// (0x00040035) list_single_2heading_msg_pane_t2

0x5907,	// (0x00040069) list_single_2heading_msg_pane_t3_ParamLimits

0x5907,	// (0x00040069) list_single_2heading_msg_pane_t3

0x5940,	// (0x000400a2) list_single_2heading_msg_pane_t4_ParamLimits

0x5940,	// (0x000400a2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0004a414) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0004a414) list_single_2heading_msg_pane_t

0x773e,	// (0x00041ea0) title_pane_g4_ParamLimits

0x773e,	// (0x00041ea0) title_pane_g4

0x5ed5,	// (0x00040637) title_pane_stacon_g3_ParamLimits

0x5ed5,	// (0x00040637) title_pane_stacon_g3

0xccda,	// (0x0004743c) list_single_2graphic_im_pane_g4_ParamLimits

0xccda,	// (0x0004743c) list_single_2graphic_im_pane_g4

0xabed,	// (0x0004534f) popup_side_volume_key_window_cp

0xb3ce,	// (0x00045b30) main_idle_act2_pane_t1

0x64b4,	// (0x00040c16) toolbar_button_pane_g10

0x7fbf,	// (0x00042721) popup_toolbar_window_cp1

0xbb53,	// (0x000462b5) clock_nsta_pane_cp_t1

0xbb53,	// (0x000462b5) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0004a21b) clock_nsta_pane_cp_t

0x60c7,	// (0x00040829) navi_navi_volume_pane_cp2_ParamLimits

0x60d6,	// (0x00040838) popup_side_volume_key_window_g1_ParamLimits

0x60e2,	// (0x00040844) popup_side_volume_key_window_g2_ParamLimits

0x60f1,	// (0x00040853) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00049e90) popup_side_volume_key_window_g_ParamLimits

0x6a18,	// (0x0004117a) fep_hwr_aid_pane

0x2594,	// (0x0003ccf6) bg_fep_hwr_top_pane_g4_ParamLimits

0xc130,	// (0x00046892) fep_hwr_top_pane_g1_ParamLimits

0xc142,	// (0x000468a4) fep_hwr_top_pane_g2_ParamLimits

0x6ad1,	// (0x00041233) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0004a270) fep_hwr_top_pane_g_ParamLimits

0x6ae6,	// (0x00041248) fep_hwr_top_text_pane_ParamLimits

0xa9b0,	// (0x00045112) aid_touch_tab_arrow_arrow_2

0xa9b9,	// (0x0004511b) aid_touch_tab_arrow_left_2

0x6a2c,	// (0x0004118e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a63,	// (0x000411c5) fep_hwr_prediction_pane

0xc2a2,	// (0x00046a04) fep_vkb_prediction_pane

0xc3a6,	// (0x00046b08) fep_vkb_side_pane_g3_ParamLimits

0xc3a6,	// (0x00046b08) fep_vkb_side_pane_g3

0xc352,	// (0x00046ab4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7e6,	// (0x00046f48) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7f3,	// (0x00046f55) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0004a31a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1d9,	// (0x0004793b) fep_hwr_prediction_pane_g1

0x6e27,	// (0x00041589) fep_hwr_prediction_pane_g2

0x6e2f,	// (0x00041591) fep_hwr_prediction_pane_g3

0x6e37,	// (0x00041599) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0004a41d) fep_hwr_prediction_pane_g

0xd1d9,	// (0x0004793b) fep_vkb_prediction_pane_g1

0xd1e3,	// (0x00047945) fep_vkb_prediction_pane_g2

0xd1eb,	// (0x0004794d) fep_vkb_prediction_pane_g3

0xd1f3,	// (0x00047955) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0004a426) fep_vkb_prediction_pane_g

0x6790,	// (0x00040ef2) slider_set_pane_g3

0x67a4,	// (0x00040f06) slider_set_pane_g4

0x67bc,	// (0x00040f1e) slider_set_pane_g5

0x6790,	// (0x00040ef2) slider_set_pane_g6

0x67d2,	// (0x00040f34) slider_set_pane_g7

0xb063,	// (0x000457c5) slider_form_pane_g3

0xb06c,	// (0x000457ce) slider_form_pane_g4

0xb074,	// (0x000457d6) slider_form_pane_g5

0xb063,	// (0x000457c5) slider_form_pane_g6

0xb07c,	// (0x000457de) slider_form_pane_g7

0xb68b,	// (0x00045ded) slider_set_pane_vc_g3

0xb694,	// (0x00045df6) slider_set_pane_vc_g4

0xb69d,	// (0x00045dff) slider_set_pane_vc_g5

0xb68b,	// (0x00045ded) slider_set_pane_vc_g6

0xb6a6,	// (0x00045e08) slider_set_pane_vc_g7

0xb68b,	// (0x00045ded) slider_form_pane_vc_g1

0xb694,	// (0x00045df6) slider_form_pane_vc_g2

0xb69d,	// (0x00045dff) slider_form_pane_vc_g3

0xb68b,	// (0x00045ded) slider_form_pane_vc_g4

0xb859,	// (0x00045fbb) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0004a1f4) slider_form_pane_vc_g

0x76f6,	// (0x00041e58) main_idle_act3_pane

0xd1fb,	// (0x0004795d) ai3_links_pane

0xd204,	// (0x00047966) popup_ai3_data_window_ParamLimits

0xd204,	// (0x00047966) popup_ai3_data_window

0x76f6,	// (0x00041e58) grid_ai3_links_pane

0xd21e,	// (0x00047980) cell_ai3_links_pane_ParamLimits

0xd21e,	// (0x00047980) cell_ai3_links_pane

0xd236,	// (0x00047998) bg_popup_sub_pane_cp11

0xd243,	// (0x000479a5) cell_ai3_links_pane_g1

0x76f6,	// (0x00041e58) bg_popup_sub_pane_cp12

0xd268,	// (0x000479ca) heading_ai3_data_pane

0xd270,	// (0x000479d2) list_ai3_gene_pane

0xd27c,	// (0x000479de) popup_ai3_data_window_g1

0xd284,	// (0x000479e6) heading_ai3_data_pane_g1

0xd28c,	// (0x000479ee) heading_ai3_data_pane_t1

0xd29a,	// (0x000479fc) list_double_ai3_gene_pane_ParamLimits

0xd29a,	// (0x000479fc) list_double_ai3_gene_pane

0xd2a7,	// (0x00047a09) list_single_ai3_gene_pane_ParamLimits

0xd2a7,	// (0x00047a09) list_single_ai3_gene_pane

0xc085,	// (0x000467e7) list_highlight_pane_cp7_ParamLimits

0xc085,	// (0x000467e7) list_highlight_pane_cp7

0xd2b4,	// (0x00047a16) list_single_a13_gene_pane_t1_ParamLimits

0xd2b4,	// (0x00047a16) list_single_a13_gene_pane_t1

0xd2cb,	// (0x00047a2d) list_single_ai3_gene_pane_g1

0xd2d4,	// (0x00047a36) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0004a42f) list_single_ai3_gene_pane_g

0xd2dc,	// (0x00047a3e) list_double_ai3_gene_pane_g1_ParamLimits

0xd2dc,	// (0x00047a3e) list_double_ai3_gene_pane_g1

0xd2e8,	// (0x00047a4a) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e8,	// (0x00047a4a) list_double_ai3_gene_pane_t1

0xd304,	// (0x00047a66) list_double_ai3_gene_pane_t2_ParamLimits

0xd304,	// (0x00047a66) list_double_ai3_gene_pane_t2

0xd31a,	// (0x00047a7c) list_double_ai3_gene_pane_t3_ParamLimits

0xd31a,	// (0x00047a7c) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0004a434) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0004a434) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58a1,	// (0x00040003) aid_size_min_col_2

0xd1c5,	// (0x00047927) aid_size_min_msg_ParamLimits

0xd1c5,	// (0x00047927) aid_size_min_msg

0xc4a6,	// (0x00046c08) fep_vkb_top_text_pane_g2_ParamLimits

0xc4a6,	// (0x00046c08) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0004a2a0) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0004a2a0) fep_vkb_top_text_pane_g

0x76f6,	// (0x00041e58) main_hc_apps_shell_pane

0xd337,	// (0x00047a99) grid_hc_apps_pane_ParamLimits

0xd337,	// (0x00047a99) grid_hc_apps_pane

0xd346,	// (0x00047aa8) list_hc_apps_pane

0xd34e,	// (0x00047ab0) scroll_pane_cp37_ParamLimits

0xd34e,	// (0x00047ab0) scroll_pane_cp37

0xd35a,	// (0x00047abc) cell_hc_apps_pane_ParamLimits

0xd35a,	// (0x00047abc) cell_hc_apps_pane

0xd408,	// (0x00047b6a) cell_hc_apps_pane_g1_ParamLimits

0xd408,	// (0x00047b6a) cell_hc_apps_pane_g1

0xd439,	// (0x00047b9b) cell_hc_apps_pane_g2_ParamLimits

0xd439,	// (0x00047b9b) cell_hc_apps_pane_g2

0xd455,	// (0x00047bb7) cell_hc_apps_pane_g3_ParamLimits

0xd455,	// (0x00047bb7) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0004a43b) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0004a43b) cell_hc_apps_pane_g

0xd477,	// (0x00047bd9) cell_hc_apps_pane_t1_ParamLimits

0xd477,	// (0x00047bd9) cell_hc_apps_pane_t1

0x7a73,	// (0x000421d5) grid_highlight_pane_cp10_ParamLimits

0x7a73,	// (0x000421d5) grid_highlight_pane_cp10

0xd4b7,	// (0x00047c19) list_single_hc_apps_pane_ParamLimits

0xd4b7,	// (0x00047c19) list_single_hc_apps_pane

0xd513,	// (0x00047c75) list_single_hc_apps_pane_g1

0x6e3f,	// (0x000415a1) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0004a442) list_single_hc_apps_pane_g

0x6e58,	// (0x000415ba) list_single_hc_apps_pane_g2_copy1

0x5965,	// (0x000400c7) list_single_hc_apps_pane_t1

0x77ea,	// (0x00041f4c) bg_set_opt_pane_cp_ParamLimits

0x5d80,	// (0x000404e2) setting_slider_pane_t1_ParamLimits

0x5d99,	// (0x000404fb) setting_slider_pane_t2_ParamLimits

0x5db3,	// (0x00040515) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00049cdc) setting_slider_pane_t_ParamLimits

0x5dcb,	// (0x0004052d) slider_set_pane_ParamLimits

0x636c,	// (0x00040ace) control_pane_g5_ParamLimits

0x636c,	// (0x00040ace) control_pane_g5

0xaeb2,	// (0x00045614) slider_set_pane_g1_ParamLimits

0x6784,	// (0x00040ee6) slider_set_pane_g2_ParamLimits

0x6790,	// (0x00040ef2) slider_set_pane_g3_ParamLimits

0x67a4,	// (0x00040f06) slider_set_pane_g4_ParamLimits

0x67bc,	// (0x00040f1e) slider_set_pane_g5_ParamLimits

0x6790,	// (0x00040ef2) slider_set_pane_g6_ParamLimits

0x67d2,	// (0x00040f34) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004a0dc) slider_set_pane_g_ParamLimits

0x8b25,	// (0x00043287) navi_icon_text_pane_ParamLimits

0x95e8,	// (0x00043d4a) aid_fill_nsta_2_ParamLimits

0x9627,	// (0x00043d89) aid_touch_tab_arrow_left_ParamLimits

0x9633,	// (0x00043d95) aid_touch_tab_arrow_right_ParamLimits

0x969f,	// (0x00043e01) clock_nsta_pane_ParamLimits

0xa98c,	// (0x000450ee) navi_icon_pane_g1_ParamLimits

0xa99b,	// (0x000450fd) navi_text_pane_t1_ParamLimits

0xbc5d,	// (0x000463bf) navi_icon_text_pane_g1_ParamLimits

0xbc6c,	// (0x000463ce) navi_icon_text_pane_t1_ParamLimits

0xd513,	// (0x00047c75) list_single_hc_apps_pane_g1_ParamLimits

0x6e3f,	// (0x000415a1) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0004a442) list_single_hc_apps_pane_g_ParamLimits

0x6e58,	// (0x000415ba) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5965,	// (0x000400c7) list_single_hc_apps_pane_t1_ParamLimits

0x5c94,	// (0x000403f6) popup_toolbar2_fixed_window_ParamLimits

0x5c94,	// (0x000403f6) popup_toolbar2_fixed_window

0x94fe,	// (0x00043c60) popup_toolbar2_float_window

0x76f6,	// (0x00041e58) bg_popup_sub_pane_cp27

0xd52c,	// (0x00047c8e) grid_toolbar2_float_pane

0x76f6,	// (0x00041e58) bg_popup_sub_pane_cp26

0xd52c,	// (0x00047c8e) grid_toolbar2_fixed_pane

0xd534,	// (0x00047c96) cell_toolbar2_fixed_pane_ParamLimits

0xd534,	// (0x00047c96) cell_toolbar2_fixed_pane

0xd544,	// (0x00047ca6) cell_toolbar2_fixed_pane_g1

0xd54d,	// (0x00047caf) toolbar2_fixed_button_pane

0x9aaf,	// (0x00044211) toolbar2_fixed_button_pane_g1

0x9ab7,	// (0x00044219) toolbar2_fixed_button_pane_g2

0x9abf,	// (0x00044221) toolbar2_fixed_button_pane_g3

0x9ac7,	// (0x00044229) toolbar2_fixed_button_pane_g4

0x9acf,	// (0x00044231) toolbar2_fixed_button_pane_g5

0x9ad7,	// (0x00044239) toolbar2_fixed_button_pane_g6

0x9adf,	// (0x00044241) toolbar2_fixed_button_pane_g7

0x9ae7,	// (0x00044249) toolbar2_fixed_button_pane_g8

0x9aef,	// (0x00044251) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x00049fde) toolbar2_fixed_button_pane_g

0xd555,	// (0x00047cb7) cell_toolbar2_float_pane_ParamLimits

0xd555,	// (0x00047cb7) cell_toolbar2_float_pane

0xd566,	// (0x00047cc8) cell_toolbar2_float_pane_g1

0xd54d,	// (0x00047caf) toolbar2_fixed_button_pane_cp

0xc202,	// (0x00046964) fep_vkb_accented_list_pane_ParamLimits

0xc202,	// (0x00046964) fep_vkb_accented_list_pane

0x6c34,	// (0x00041396) bg_popup_fep_shadow_pane_g9

0x8c99,	// (0x000433fb) bg_popup_fep_shadow_pane_cp3

0x81b7,	// (0x00042919) list_accented_list_pane

0xd56f,	// (0x00047cd1) list_single_accented_list_pane_ParamLimits

0xd56f,	// (0x00047cd1) list_single_accented_list_pane

0x8c99,	// (0x000433fb) list_highlight_pane_cp10

0xd580,	// (0x00047ce2) list_single_accented_list_pane_t1

0x942c,	// (0x00043b8e) popup_slider_window_ParamLimits

0x942c,	// (0x00043b8e) popup_slider_window

0xd1bc,	// (0x0004791e) aid_indentation_list_msg

0xd63a,	// (0x00047d9c) bg_popup_window_pane_cp19

0xd6a4,	// (0x00047e06) popup_slider_window_g1

0xd6c0,	// (0x00047e22) popup_slider_window_g2

0xd6dc,	// (0x00047e3e) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0004a447) popup_slider_window_g

0xd738,	// (0x00047e9a) popup_slider_window_t1

0xd7ac,	// (0x00047f0e) small_volume_slider_vertical_pane

0xc0c0,	// (0x00046822) small_volume_slider_vertical_pane_g1

0xc0c0,	// (0x00046822) small_volume_slider_vertical_pane_g2

0xd7c8,	// (0x00047f2a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0004a459) small_volume_slider_vertical_pane_g

0x5a56,	// (0x000401b8) area_side_right_pane_ParamLimits

0x5a56,	// (0x000401b8) area_side_right_pane

0x6e74,	// (0x000415d6) aid_size_side_button_ParamLimits

0x6e74,	// (0x000415d6) aid_size_side_button

0x6e88,	// (0x000415ea) grid_sctrl_middle_pane_ParamLimits

0x6e88,	// (0x000415ea) grid_sctrl_middle_pane

0x6ea8,	// (0x0004160a) sctrl_sk_bottom_pane

0x6eb9,	// (0x0004161b) sctrl_sk_top_pane

0x6ecb,	// (0x0004162d) aid_touch_sctrl_top

0x7a73,	// (0x000421d5) bg_sctrl_sk_pane_ParamLimits

0x7a73,	// (0x000421d5) bg_sctrl_sk_pane

0x6ed8,	// (0x0004163a) sctrl_sk_top_pane_g1

0x6ee5,	// (0x00041647) sctrl_sk_top_pane_t1

0x6ecb,	// (0x0004162d) aid_touch_sctrl_bottom

0x7a73,	// (0x000421d5) bg_sctrl_sk_pane_cp_ParamLimits

0x7a73,	// (0x000421d5) bg_sctrl_sk_pane_cp

0x6f00,	// (0x00041662) sctrl_sk_bottom_pane_g1

0x6ee5,	// (0x00041647) sctrl_sk_bottom_pane_t1

0x6f09,	// (0x0004166b) cell_sctrl_middle_pane_ParamLimits

0x6f09,	// (0x0004166b) cell_sctrl_middle_pane

0x6f24,	// (0x00041686) aid_touch_sctrl_middle_ParamLimits

0x6f24,	// (0x00041686) aid_touch_sctrl_middle

0x8056,	// (0x000427b8) bg_sctrl_middle_pane_ParamLimits

0x8056,	// (0x000427b8) bg_sctrl_middle_pane

0xc352,	// (0x00046ab4) cell_sctrl_middle_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) cell_sctrl_middle_pane_g1

0x6f36,	// (0x00041698) cell_sctrl_middle_pane_g2_ParamLimits

0x6f36,	// (0x00041698) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0004a465) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0004a465) cell_sctrl_middle_pane_g

0x9aaf,	// (0x00044211) bg_sctrl_middle_pane_g1

0x9ab7,	// (0x00044219) bg_sctrl_middle_pane_g2

0x9abf,	// (0x00044221) bg_sctrl_middle_pane_g3

0x9ac7,	// (0x00044229) bg_sctrl_middle_pane_g4

0x9acf,	// (0x00044231) bg_sctrl_middle_pane_g5

0x9ad7,	// (0x00044239) bg_sctrl_middle_pane_g6

0x9adf,	// (0x00044241) bg_sctrl_middle_pane_g7

0x9ae7,	// (0x00044249) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0004a46a) bg_sctrl_middle_pane_g

0x9aef,	// (0x00044251) bg_sctrl_middle_pane_g8_copy1

0x9aaf,	// (0x00044211) bg_sctrl_sk_pane_g1

0x9ab7,	// (0x00044219) bg_sctrl_sk_pane_g2

0x9abf,	// (0x00044221) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x00049fde) bg_sctrl_sk_pane_g

0x7f85,	// (0x000426e7) aid_size_touch_scroll_bar

0x9ac7,	// (0x00044229) bg_sctrl_sk_pane_g4

0x9acf,	// (0x00044231) bg_sctrl_sk_pane_g5

0x9ad7,	// (0x00044239) bg_sctrl_sk_pane_g6

0x9adf,	// (0x00044241) bg_sctrl_sk_pane_g7

0x9ae7,	// (0x00044249) bg_sctrl_sk_pane_g8

0x9aef,	// (0x00044251) bg_sctrl_sk_pane_g9

0x9097,	// (0x000437f9) popup_fep_china_hwr2_fs_candidate_window

0x90a1,	// (0x00043803) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x90a1,	// (0x00043803) popup_fep_china_hwr2_fs_control_window

0xc352,	// (0x00046ab4) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0004a460) sctrl_sk_top_pane_g

0xd7d1,	// (0x00047f33) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7d1,	// (0x00047f33) aid_fep_china_hwr2_fs_cell

0xd7e3,	// (0x00047f45) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e3,	// (0x00047f45) bg_popup_fep_shadow_pane_cp4

0xd7fa,	// (0x00047f5c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fa,	// (0x00047f5c) bg_popup_fep_shadow_pane_cp5

0xd80c,	// (0x00047f6e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80c,	// (0x00047f6e) popup_fep_china_hwr2_fs_control_bar_grid

0xd81c,	// (0x00047f7e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd824,	// (0x00047f86) aid_fep_china_hwr2_fs_candi_cell

0x76f6,	// (0x00041e58) bg_popup_fep_shadow_pane_cp6

0xd82e,	// (0x00047f90) popup_fep_china_hwr2_fs_candidate_grid

0xd838,	// (0x00047f9a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd838,	// (0x00047f9a) cell_fep_china_hwr2_fs_funtion_grid

0xc0c0,	// (0x00046822) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd850,	// (0x00047fb2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd850,	// (0x00047fb2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85e,	// (0x00047fc0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85e,	// (0x00047fc0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0004a47b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0004a47b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd874,	// (0x00047fd6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd874,	// (0x00047fd6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd889,	// (0x00047feb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd889,	// (0x00047feb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0004a480) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0004a480) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a5,	// (0x00048007) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ad,	// (0x0004800f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b5,	// (0x00048017) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0004a485) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8bd,	// (0x0004801f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8bd,	// (0x0004801f) cell_fep_china_hwr2_fs_candidate_grid

0xd8d6,	// (0x00048038) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8de,	// (0x00048040) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0c0,	// (0x00046822) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0c0,	// (0x00046822) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0004a2a5) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e6,	// (0x00048048) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96ac,	// (0x00043e0e) clock_nsta_pane_cp_24_ParamLimits

0x96ac,	// (0x00043e0e) clock_nsta_pane_cp_24

0x972a,	// (0x00043e8c) indicator_nsta_pane_cp_24_ParamLimits

0x972a,	// (0x00043e8c) indicator_nsta_pane_cp_24

0xa808,	// (0x00044f6a) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004a043) heading_pane_g

0xb217,	// (0x00045979) grid_sct_catagory_button_pane

0xb247,	// (0x000459a9) scroll_pane_cp5_ParamLimits

0xbcb1,	// (0x00046413) button_value_adjust_pane_cp5_ParamLimits

0xbcb1,	// (0x00046413) button_value_adjust_pane_cp5

0xbd90,	// (0x000464f2) form2_midp_time_pane_ParamLimits

0xd8f4,	// (0x00048056) cell_sct_catagory_button_pane_ParamLimits

0xd8f4,	// (0x00048056) cell_sct_catagory_button_pane

0xc085,	// (0x000467e7) bg_button_pane_cp01_ParamLimits

0xc085,	// (0x000467e7) bg_button_pane_cp01

0xc0c0,	// (0x00046822) cell_sct_catagory_button_pane_g1

0x946b,	// (0x00043bcd) popup_tb_extension_window

0xd906,	// (0x00048068) aid_size_cell_ext_ParamLimits

0xd906,	// (0x00048068) aid_size_cell_ext

0x7a73,	// (0x000421d5) bg_tb_trans_pane_cp1_ParamLimits

0x7a73,	// (0x000421d5) bg_tb_trans_pane_cp1

0xd926,	// (0x00048088) grid_tb_ext_pane_ParamLimits

0xd926,	// (0x00048088) grid_tb_ext_pane

0xd954,	// (0x000480b6) cell_tb_ext_pane_ParamLimits

0xd954,	// (0x000480b6) cell_tb_ext_pane

0xd96b,	// (0x000480cd) cell_tb_ext_pane_g1_ParamLimits

0xd96b,	// (0x000480cd) cell_tb_ext_pane_g1

0xd988,	// (0x000480ea) cell_tb_ext_pane_t1

0x7a73,	// (0x000421d5) list_highlight_pane_cp11_ParamLimits

0x7a73,	// (0x000421d5) list_highlight_pane_cp11

0x5cb3,	// (0x00040415) popup_uni_indicator_window_ParamLimits

0x5cb3,	// (0x00040415) popup_uni_indicator_window

0x8056,	// (0x000427b8) bg_popup_sub_pane_cp14

0xd9a3,	// (0x00048105) list_uniindi_pane

0xd9af,	// (0x00048111) uniindi_top_pane

0x7a73,	// (0x000421d5) bg_uniindi_top_pane

0xd9ce,	// (0x00048130) uniindi_top_pane_g1

0xd9e4,	// (0x00048146) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0004a48c) uniindi_top_pane_g

0xda0e,	// (0x00048170) uniindi_top_pane_t1

0xda38,	// (0x0004819a) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x0004819a) list_single_uniindi_pane

0xc0c0,	// (0x00046822) bg_uniindi_top_pane_g1

0xda4b,	// (0x000481ad) list_single_uniindi_pane_g1

0xda5e,	// (0x000481c0) list_single_uniindi_pane_t1

0x76f6,	// (0x00041e58) control_bg_pane

0xda83,	// (0x000481e5) bg_sctrl_sk_pane_cp1

0xda8c,	// (0x000481ee) bg_sctrl_sk_pane_cp2

0xda95,	// (0x000481f7) control_bg_pane_g1

0xda9e,	// (0x00048200) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0004a495) control_bg_pane_g

0xbae5,	// (0x00046247) cell_indicator_nsta_pane_g1_ParamLimits

0xbaf3,	// (0x00046255) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0004a209) cell_indicator_nsta_pane_g_ParamLimits

0x5702,	// (0x0003fe64) form2_midp_time_pane_t1_ParamLimits

0x7dc7,	// (0x00042529) main_idle_act4_pane_ParamLimits

0x7dc7,	// (0x00042529) main_idle_act4_pane

0x946b,	// (0x00043bcd) popup_tb_extension_window_ParamLimits

0xd944,	// (0x000480a6) tb_ext_find_pane_ParamLimits

0xd944,	// (0x000480a6) tb_ext_find_pane

0xdaa7,	// (0x00048209) ai_gene_pane_1_cp1

0x8dde,	// (0x00043540) ai_gene_pane_2_cp1

0xdaaf,	// (0x00048211) list_single_idle_plugin_calendar_pane

0xdab8,	// (0x0004821a) list_single_idle_plugin_notification_pane

0xdac1,	// (0x00048223) list_single_idle_plugin_player_pane

0xdaca,	// (0x0004822c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaca,	// (0x0004822c) list_single_idle_plugin_shortcut_pane

0xdaec,	// (0x0004824e) main_idle_act4_pane_t1

0xdafe,	// (0x00048260) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0004a49a) main_idle_act4_pane_t

0xdb10,	// (0x00048272) middle_sk_idle_act4_pane_ParamLimits

0xdb10,	// (0x00048272) middle_sk_idle_act4_pane

0xdb26,	// (0x00048288) popup_clock_digital_analogue_window_cp2

0xdb40,	// (0x000482a2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb40,	// (0x000482a2) shortcut_wheel_idle_act4_pane

0xc0c0,	// (0x00046822) shortcut_wheel_idle_act4_pane_g1

0xc0c0,	// (0x00046822) shortcut_wheel_idle_act4_pane_g2

0xc0c0,	// (0x00046822) shortcut_wheel_idle_act4_pane_g3

0xc0c0,	// (0x00046822) shortcut_wheel_idle_act4_pane_g4

0xc0c0,	// (0x00046822) shortcut_wheel_idle_act4_pane_g5

0xdb54,	// (0x000482b6) shortcut_wheel_idle_act4_pane_g6

0xdb5c,	// (0x000482be) shortcut_wheel_idle_act4_pane_g7

0xdb64,	// (0x000482c6) shortcut_wheel_idle_act4_pane_g8

0xdb6c,	// (0x000482ce) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0004a49f) shortcut_wheel_idle_act4_pane_g

0xc352,	// (0x00046ab4) middle_sk_idle_act4_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) middle_sk_idle_act4_pane_g1

0xdbd0,	// (0x00048332) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbd0,	// (0x00048332) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0004a4c2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0004a4c2) middle_sk_idle_act4_pane_g

0xdbdc,	// (0x0004833e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdc,	// (0x0004833e) middle_sk_idle_act4_pane_t1

0xdbf9,	// (0x0004835b) grid_ai_shortcut_pane_ParamLimits

0xdbf9,	// (0x0004835b) grid_ai_shortcut_pane

0xdc12,	// (0x00048374) list_highlight_pane_cp16_ParamLimits

0xdc12,	// (0x00048374) list_highlight_pane_cp16

0xdc1f,	// (0x00048381) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1f,	// (0x00048381) list_single_idle_plugin_shortcut_pane_g1

0xdc2b,	// (0x0004838d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2b,	// (0x0004838d) list_single_idle_plugin_shortcut_pane_g2

0xdc43,	// (0x000483a5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc43,	// (0x000483a5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0004a4c7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0004a4c7) list_single_idle_plugin_shortcut_pane_g

0xdc56,	// (0x000483b8) cell_ai_shortcut_pane_ParamLimits

0xdc56,	// (0x000483b8) cell_ai_shortcut_pane

0xdc7a,	// (0x000483dc) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x000483dc) cell_ai_shortcut_pane_g1

0xdaa7,	// (0x00048209) ai_gene_pane_1_cp2

0xdc9c,	// (0x000483fe) ai_gene_pane_2_cp2

0xdca4,	// (0x00048406) list_highlight_pane_cp15

0xdcad,	// (0x0004840f) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x00048406) list_highlight_pane_cp17

0xdcb5,	// (0x00048417) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x0004841f) list_single_idle_plugin_player_pane_g1

0xb470,	// (0x00045bd2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0004a4ce) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x00048427) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x00048435) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x00048443) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x00048451) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0004a4d3) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0004845f) wait_bar_pane_cp15

0xdd05,	// (0x00048467) grid_ai_notification_pane

0xb470,	// (0x00045bd2) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x00048470) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x00048470) cell_ai_notification_pane

0xdd1b,	// (0x0004847d) cell_ai_notification_pane_g1

0xdd23,	// (0x00048485) cell_ai_notification_pane_t1

0xdd31,	// (0x00048493) tb_ext_find_button_pane

0xdd39,	// (0x0004849b) tb_ext_find_pane_g1

0xdd41,	// (0x000484a3) tb_ext_find_pane_t1

0x86bc,	// (0x00042e1e) tb_ext_find_button_pane_g1

0xdd4f,	// (0x000484b1) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0004a4dc) tb_ext_find_button_pane_g

0xdaec,	// (0x0004824e) main_idle_act4_pane_t1_ParamLimits

0xdafe,	// (0x00048260) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0004a49a) main_idle_act4_pane_t_ParamLimits

0xdb26,	// (0x00048288) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb34,	// (0x00048296) sat_plugin_idle_act4_pane_ParamLimits

0xdb34,	// (0x00048296) sat_plugin_idle_act4_pane

0xdd58,	// (0x000484ba) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x000484ba) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x000484cd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x000484cd) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x000484e0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x000484e0) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x000484f3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x000484f3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0004a4e1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0004a4e1) sat_plugin_idle_act4_pane_t

0x5bee,	// (0x00040350) popup_battery_window_ParamLimits

0x5bee,	// (0x00040350) popup_battery_window

0x7a73,	// (0x000421d5) bg_popup_sub_pane_cp25_ParamLimits

0x7a73,	// (0x000421d5) bg_popup_sub_pane_cp25

0xdda4,	// (0x00048506) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x00048506) popup_battery_window_g1

0xddb0,	// (0x00048512) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x00048512) popup_battery_window_t1

0xddc2,	// (0x00048524) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x00048524) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0004a4ea) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0004a4ea) popup_battery_window_t

0x8cad,	// (0x0004340f) midp_canvas_pane_ParamLimits

0x8d22,	// (0x00043484) midp_keypad_pane_ParamLimits

0x8d22,	// (0x00043484) midp_keypad_pane

0x8ff7,	// (0x00043759) main_midp_pane_ParamLimits

0xbb71,	// (0x000462d3) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x00048541) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x00048541) aid_size_cell_midp_keypad

0xddf9,	// (0x0004855b) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x0004855b) midp_keyp_game_grid_pane

0xde19,	// (0x0004857b) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x0004857b) midp_keyp_rocker_pane

0xde52,	// (0x000485b4) midp_keyp_sk_left_pane_ParamLimits

0xde52,	// (0x000485b4) midp_keyp_sk_left_pane

0xdeac,	// (0x0004860e) midp_keyp_sk_right_pane_ParamLimits

0xdeac,	// (0x0004860e) midp_keyp_sk_right_pane

0x76f6,	// (0x00041e58) bg_button_pane_cp03

0xdf06,	// (0x00048668) midp_keyp_sk_left_pane_g1

0x76f6,	// (0x00041e58) bg_button_pane_cp04

0xdf06,	// (0x00048668) midp_keyp_sk_right_pane_g1

0xc0c0,	// (0x00046822) midp_keyp_rocker_pane_g1

0xdf0f,	// (0x00048671) keyp_game_cell_pane_ParamLimits

0xdf0f,	// (0x00048671) keyp_game_cell_pane

0x76f6,	// (0x00041e58) bg_button_pane_cp02

0xdf22,	// (0x00048684) keyp_game_cell_pane_g1

0x5c32,	// (0x00040394) popup_fep_vkb2_window_ParamLimits

0x5c32,	// (0x00040394) popup_fep_vkb2_window

0x6f54,	// (0x000416b6) aid_size_cell_vkb2_ParamLimits

0x6f54,	// (0x000416b6) aid_size_cell_vkb2

0x6fa8,	// (0x0004170a) popup_fep_vkb2_window_g1_ParamLimits

0x6fa8,	// (0x0004170a) popup_fep_vkb2_window_g1

0x6ff0,	// (0x00041752) vkb2_area_bottom_pane_ParamLimits

0x6ff0,	// (0x00041752) vkb2_area_bottom_pane

0x703c,	// (0x0004179e) vkb2_area_keypad_pane_ParamLimits

0x703c,	// (0x0004179e) vkb2_area_keypad_pane

0x707e,	// (0x000417e0) vkb2_area_top_pane_ParamLimits

0x707e,	// (0x000417e0) vkb2_area_top_pane

0x70f8,	// (0x0004185a) vkb2_top_entry_pane_ParamLimits

0x70f8,	// (0x0004185a) vkb2_top_entry_pane

0x7122,	// (0x00041884) vkb2_top_grid_left_pane_ParamLimits

0x7122,	// (0x00041884) vkb2_top_grid_left_pane

0x7140,	// (0x000418a2) vkb2_top_grid_right_pane_ParamLimits

0x7140,	// (0x000418a2) vkb2_top_grid_right_pane

0x715e,	// (0x000418c0) vkb2_cell_keypad_pane_ParamLimits

0x715e,	// (0x000418c0) vkb2_cell_keypad_pane

0x722f,	// (0x00041991) vkb2_area_bottom_grid_pane_ParamLimits

0x722f,	// (0x00041991) vkb2_area_bottom_grid_pane

0x7255,	// (0x000419b7) vkb2_area_bottom_pane_g1_ParamLimits

0x7255,	// (0x000419b7) vkb2_area_bottom_pane_g1

0x7279,	// (0x000419db) vkb2_area_bottom_pane_g2_ParamLimits

0x7279,	// (0x000419db) vkb2_area_bottom_pane_g2

0x72a7,	// (0x00041a09) vkb2_area_bottom_pane_g3_ParamLimits

0x72a7,	// (0x00041a09) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0004a4ef) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0004a4ef) vkb2_area_bottom_pane_g

0x7308,	// (0x00041a6a) vkb2_top_cell_left_pane_ParamLimits

0x7308,	// (0x00041a6a) vkb2_top_cell_left_pane

0xdf33,	// (0x00048695) vkb2_top_entry_pane_g1_ParamLimits

0xdf33,	// (0x00048695) vkb2_top_entry_pane_g1

0xdf41,	// (0x000486a3) vkb2_top_entry_pane_t1_ParamLimits

0xdf41,	// (0x000486a3) vkb2_top_entry_pane_t1

0xdf73,	// (0x000486d5) vkb2_top_entry_pane_t2_ParamLimits

0xdf73,	// (0x000486d5) vkb2_top_entry_pane_t2

0xdfa5,	// (0x00048707) vkb2_top_entry_pane_t3_ParamLimits

0xdfa5,	// (0x00048707) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0004a4f6) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0004a4f6) vkb2_top_entry_pane_t

0x7355,	// (0x00041ab7) vkb2_top_grid_right_pane_g1_ParamLimits

0x7355,	// (0x00041ab7) vkb2_top_grid_right_pane_g1

0x736b,	// (0x00041acd) vkb2_top_grid_right_pane_g2_ParamLimits

0x736b,	// (0x00041acd) vkb2_top_grid_right_pane_g2

0x7383,	// (0x00041ae5) vkb2_top_grid_right_pane_g3_ParamLimits

0x7383,	// (0x00041ae5) vkb2_top_grid_right_pane_g3

0x739b,	// (0x00041afd) vkb2_top_grid_right_pane_g4_ParamLimits

0x739b,	// (0x00041afd) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0004a4fd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0004a4fd) vkb2_top_grid_right_pane_g

0x73b1,	// (0x00041b13) vkb2_top_cell_left_pane_g1

0x73c8,	// (0x00041b2a) vkb2_cell_keypad_pane_g1_ParamLimits

0x73c8,	// (0x00041b2a) vkb2_cell_keypad_pane_g1

0xdfc9,	// (0x0004872b) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfc9,	// (0x0004872b) vkb2_cell_keypad_pane_t1

0x73d6,	// (0x00041b38) vkb2_cell_bottom_grid_pane_ParamLimits

0x73d6,	// (0x00041b38) vkb2_cell_bottom_grid_pane

0x740f,	// (0x00041b71) vkb2_cell_bottom_grid_pane_g1

0xdb74,	// (0x000482d6) aid_call2_pane_cp02

0xdb7c,	// (0x000482de) aid_call_pane_cp02

0xdb84,	// (0x000482e6) clock_digital_number_pane_cp10

0xdb8c,	// (0x000482ee) clock_digital_number_pane_cp11

0xdb94,	// (0x000482f6) clock_digital_number_pane_cp12

0xdb9c,	// (0x000482fe) clock_digital_number_pane_cp13

0xdba4,	// (0x00048306) clock_digital_separator_pane_cp10

0x86bc,	// (0x00042e1e) popup_clock_digital_analogue_window_cp2_g1

0x86bc,	// (0x00042e1e) popup_clock_digital_analogue_window_cp2_g2

0xdbac,	// (0x0004830e) popup_clock_digital_analogue_window_cp2_g3

0x86bc,	// (0x00042e1e) popup_clock_digital_analogue_window_cp2_g4

0xdbac,	// (0x0004830e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0004a4b2) popup_clock_digital_analogue_window_cp2_g

0xdbb4,	// (0x00048316) popup_clock_digital_analogue_window_cp2_t1

0xdbc2,	// (0x00048324) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0004a4bd) popup_clock_digital_analogue_window_cp2_t

0xc0c0,	// (0x00046822) clock_digital_number_pane_cp10_g1

0xc0c0,	// (0x00046822) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004a2a5) clock_digital_number_pane_cp10_g

0xc0c0,	// (0x00046822) clock_digital_separator_pane_cp10_g1

0xc0c0,	// (0x00046822) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004a2a5) clock_digital_separator_pane_cp10_g

0xd9f0,	// (0x00048152) uniindi_top_pane_g3

0xda01,	// (0x00048163) uniindi_top_pane_g4

0x71e9,	// (0x0004194b) vkb2_row_keypad_pane_ParamLimits

0x71e9,	// (0x0004194b) vkb2_row_keypad_pane

0x742b,	// (0x00041b8d) vkb2_cell_t_keypad_pane_ParamLimits

0x742b,	// (0x00041b8d) vkb2_cell_t_keypad_pane

0x743b,	// (0x00041b9d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x743b,	// (0x00041b9d) vkb2_cell_t_keypad_pane_cp08

0x744e,	// (0x00041bb0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x744e,	// (0x00041bb0) vkb2_cell_t_keypad_pane_cp09

0x7462,	// (0x00041bc4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7462,	// (0x00041bc4) vkb2_cell_t_keypad_pane_cp01

0x7473,	// (0x00041bd5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7473,	// (0x00041bd5) vkb2_cell_t_keypad_pane_cp02

0x7484,	// (0x00041be6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7484,	// (0x00041be6) vkb2_cell_t_keypad_pane_cp03

0x7495,	// (0x00041bf7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7495,	// (0x00041bf7) vkb2_cell_t_keypad_pane_cp04

0x74a6,	// (0x00041c08) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74a6,	// (0x00041c08) vkb2_cell_t_keypad_pane_cp05

0x74b7,	// (0x00041c19) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74b7,	// (0x00041c19) vkb2_cell_t_keypad_pane_cp06

0x74c8,	// (0x00041c2a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74c8,	// (0x00041c2a) vkb2_cell_t_keypad_pane_cp07

0x74d9,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74d9,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp10

0xc352,	// (0x00046ab4) vkb2_cell_t_keypad_pane_g1

0xdfe0,	// (0x00048742) vkb2_cell_t_keypad_pane_t1

0x76f6,	// (0x00041e58) popup_grid_graphic2_window

0xdff2,	// (0x00048754) aid_size_cell_graphic2_ParamLimits

0xdff2,	// (0x00048754) aid_size_cell_graphic2

0xe02a,	// (0x0004878c) bg_popup_window_pane_cp21_ParamLimits

0xe02a,	// (0x0004878c) bg_popup_window_pane_cp21

0xe038,	// (0x0004879a) graphic2_pages_pane_ParamLimits

0xe038,	// (0x0004879a) graphic2_pages_pane

0xe07e,	// (0x000487e0) grid_graphic2_control_pane_ParamLimits

0xe07e,	// (0x000487e0) grid_graphic2_control_pane

0xe0bc,	// (0x0004881e) grid_graphic2_pane_ParamLimits

0xe0bc,	// (0x0004881e) grid_graphic2_pane

0xe130,	// (0x00048892) cell_graphic2_pane

0x76f6,	// (0x00041e58) main_comp_mode_pane

0xd270,	// (0x000479d2) list_ai3_gene_pane_ParamLimits

0xd63a,	// (0x00047d9c) bg_popup_window_pane_cp19_ParamLimits

0xd646,	// (0x00047da8) bg_touch_area_indi_pane_ParamLimits

0xd646,	// (0x00047da8) bg_touch_area_indi_pane

0xd65c,	// (0x00047dbe) bg_touch_area_indi_pane_cp01_ParamLimits

0xd65c,	// (0x00047dbe) bg_touch_area_indi_pane_cp01

0xd672,	// (0x00047dd4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd672,	// (0x00047dd4) bg_touch_area_indi_pane_cp02

0xd68a,	// (0x00047dec) bg_touch_area_indi_pane_cp03_ParamLimits

0xd68a,	// (0x00047dec) bg_touch_area_indi_pane_cp03

0xd6a4,	// (0x00047e06) popup_slider_window_g1_ParamLimits

0xd6c0,	// (0x00047e22) popup_slider_window_g2_ParamLimits

0xd6dc,	// (0x00047e3e) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0004a447) popup_slider_window_g_ParamLimits

0xd738,	// (0x00047e9a) popup_slider_window_t1_ParamLimits

0xd7ac,	// (0x00047f0e) small_volume_slider_vertical_pane_ParamLimits

0xe130,	// (0x00048892) cell_graphic2_pane_ParamLimits

0xe17e,	// (0x000488e0) bg_button_pane_cp10_ParamLimits

0xe17e,	// (0x000488e0) bg_button_pane_cp10

0xe191,	// (0x000488f3) bg_button_pane_cp11_ParamLimits

0xe191,	// (0x000488f3) bg_button_pane_cp11

0xe1a4,	// (0x00048906) graphic2_pages_pane_g1_ParamLimits

0xe1a4,	// (0x00048906) graphic2_pages_pane_g1

0xe1bf,	// (0x00048921) graphic2_pages_pane_g2_ParamLimits

0xe1bf,	// (0x00048921) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0004a50b) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0004a50b) graphic2_pages_pane_g

0xe1d7,	// (0x00048939) graphic2_pages_pane_t1_ParamLimits

0xe1d7,	// (0x00048939) graphic2_pages_pane_t1

0xe1ef,	// (0x00048951) cell_graphic2_control_pane_ParamLimits

0xe1ef,	// (0x00048951) cell_graphic2_control_pane

0xe210,	// (0x00048972) cell_graphic2_pane_g1_ParamLimits

0xe210,	// (0x00048972) cell_graphic2_pane_g1

0xe21d,	// (0x0004897f) cell_graphic2_pane_g2_ParamLimits

0xe21d,	// (0x0004897f) cell_graphic2_pane_g2

0xe22a,	// (0x0004898c) cell_graphic2_pane_g3_ParamLimits

0xe22a,	// (0x0004898c) cell_graphic2_pane_g3

0xe237,	// (0x00048999) cell_graphic2_pane_g4_ParamLimits

0xe237,	// (0x00048999) cell_graphic2_pane_g4

0xe244,	// (0x000489a6) cell_graphic2_pane_g5_ParamLimits

0xe244,	// (0x000489a6) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0004a510) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0004a510) cell_graphic2_pane_g

0xe25f,	// (0x000489c1) cell_graphic2_pane_t1_ParamLimits

0xe25f,	// (0x000489c1) cell_graphic2_pane_t1

0x9b9f,	// (0x00044301) grid_highlight_pane_cp11_ParamLimits

0x9b9f,	// (0x00044301) grid_highlight_pane_cp11

0x7a73,	// (0x000421d5) bg_button_pane_cp05

0xe288,	// (0x000489ea) cell_graphic2_control_pane_g1

0xc0c0,	// (0x00046822) bg_touch_area_indi_pane_g1

0xe2b0,	// (0x00048a12) aid_cmod_rocker_key_size

0xe2ba,	// (0x00048a1c) aid_cmode_itu_key_size

0xe2c4,	// (0x00048a26) main_cmode_video_pane

0xe2ce,	// (0x00048a30) main_comp_mode_itu_pane

0xe2da,	// (0x00048a3c) main_comp_mode_rocker_pane

0xe2e6,	// (0x00048a48) cell_cmode_rocker_pane_ParamLimits

0xe2e6,	// (0x00048a48) cell_cmode_rocker_pane

0xe2f8,	// (0x00048a5a) cell_cmode_itu_pane_ParamLimits

0xe2f8,	// (0x00048a5a) cell_cmode_itu_pane

0x8056,	// (0x000427b8) bg_button_pane_cp06_ParamLimits

0x8056,	// (0x000427b8) bg_button_pane_cp06

0xc352,	// (0x00046ab4) cell_cmode_rocker_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) cell_cmode_rocker_pane_g1

0xd850,	// (0x00047fb2) cell_cmode_rocker_pane_g2_ParamLimits

0xd850,	// (0x00047fb2) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0004a520) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0004a520) cell_cmode_rocker_pane_g

0x76f6,	// (0x00041e58) bg_button_pane_cp07

0xe30d,	// (0x00048a6f) cell_cmode_itu_pane_g1

0xe316,	// (0x00048a78) cell_cmode_itu_pane_t1

0xe324,	// (0x00048a86) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0004a525) cell_cmode_itu_pane_t

0xda73,	// (0x000481d5) aid_touch_ctrl_left

0xda7b,	// (0x000481dd) aid_touch_ctrl_right

0x76f6,	// (0x00041e58) compa_mode_pane

0xe332,	// (0x00048a94) aid_cmod_rocker_key_size_cp

0xe33c,	// (0x00048a9e) aid_cmode_itu_key_size_cp

0xe346,	// (0x00048aa8) compa_mode_pane_g1

0xe34e,	// (0x00048ab0) compa_mode_pane_g2

0xe356,	// (0x00048ab8) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0004a52a) compa_mode_pane_g

0xe35e,	// (0x00048ac0) main_comp_mode_itu_pane_cp

0xe366,	// (0x00048ac8) main_comp_mode_rocker_pane_cp

0xe36e,	// (0x00048ad0) cell_cmode_itu_pane_cp_ParamLimits

0xe36e,	// (0x00048ad0) cell_cmode_itu_pane_cp

0xe383,	// (0x00048ae5) cell_cmode_rocker_pane_cp_ParamLimits

0xe383,	// (0x00048ae5) cell_cmode_rocker_pane_cp

0x8056,	// (0x000427b8) bg_button_pane_cp06_cp_ParamLimits

0x8056,	// (0x000427b8) bg_button_pane_cp06_cp

0xc352,	// (0x00046ab4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc352,	// (0x00046ab4) cell_cmode_rocker_pane_g1_cp

0xc0c0,	// (0x00046822) cell_cmode_rocker_pane_g2_cp

0x76f6,	// (0x00041e58) bg_button_pane_cp07_cp

0xb063,	// (0x000457c5) cell_cmode_itu_pane_g1_cp

0xe395,	// (0x00048af7) cell_cmode_itu_pane_t1_cp

0xe395,	// (0x00048af7) cell_cmode_itu_pane_t2_cp

0xb050,	// (0x000457b2) settings_code_pane_cp2

0x77ea,	// (0x00041f4c) bg_popup_window_pane_cp3_ParamLimits

0x7c4d,	// (0x000423af) heading_pane_cp3_ParamLimits

0x7c59,	// (0x000423bb) listscroll_popup_graphic_pane_ParamLimits

0x6a18,	// (0x0004117a) fep_hwr_aid_pane_ParamLimits

0x6ecb,	// (0x0004162d) aid_touch_sctrl_top_ParamLimits

0x6ed8,	// (0x0004163a) sctrl_sk_top_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0004a460) sctrl_sk_top_pane_g_ParamLimits

0x6ee5,	// (0x00041647) sctrl_sk_top_pane_t1_ParamLimits

0x6ecb,	// (0x0004162d) aid_touch_sctrl_bottom_ParamLimits

0x6ee5,	// (0x00041647) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9bc,	// (0x0004811e) aid_area_touch_clock

0x70c0,	// (0x00041822) aid_vkb2_area_top_pane_cell_ParamLimits

0x70c0,	// (0x00041822) aid_vkb2_area_top_pane_cell

0x720b,	// (0x0004196d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x720b,	// (0x0004196d) aid_vkb2_area_bottom_pane_cell

0xdf2b,	// (0x0004868d) popup_char_count_window

0xe3a3,	// (0x00048b05) popup_char_count_window_g1

0xe3ac,	// (0x00048b0e) popup_char_count_window_g2

0xe3b5,	// (0x00048b17) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0004a531) popup_char_count_window_g

0xe3be,	// (0x00048b20) popup_char_count_window_t1

0x6f86,	// (0x000416e8) popup_fep_char_preview_window_ParamLimits

0x6f86,	// (0x000416e8) popup_fep_char_preview_window

0x70de,	// (0x00041840) vkb2_top_candi_pane_ParamLimits

0x70de,	// (0x00041840) vkb2_top_candi_pane

0xe3cc,	// (0x00048b2e) cell_vkb2_top_candi_pane_ParamLimits

0xe3cc,	// (0x00048b2e) cell_vkb2_top_candi_pane

0xa188,	// (0x000448ea) bg_popup_fep_char_preview_window_ParamLimits

0xa188,	// (0x000448ea) bg_popup_fep_char_preview_window

0x74ee,	// (0x00041c50) popup_fep_char_preview_window_t1_ParamLimits

0x74ee,	// (0x00041c50) popup_fep_char_preview_window_t1

0xe419,	// (0x00048b7b) bg_popup_fep_char_preview_window_g1

0xe421,	// (0x00048b83) bg_popup_fep_char_preview_window_g2

0xe429,	// (0x00048b8b) bg_popup_fep_char_preview_window_g3

0xe431,	// (0x00048b93) bg_popup_fep_char_preview_window_g4

0xe439,	// (0x00048b9b) bg_popup_fep_char_preview_window_g5

0x7528,	// (0x00041c8a) bg_popup_fep_char_preview_window_g6

0xe441,	// (0x00048ba3) bg_popup_fep_char_preview_window_g7

0xe449,	// (0x00048bab) bg_popup_fep_char_preview_window_g8

0xe451,	// (0x00048bb3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0004a538) bg_popup_fep_char_preview_window_g

0xc352,	// (0x00046ab4) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) cell_vkb2_top_candi_pane_g1

0xc703,	// (0x00046e65) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc703,	// (0x00046e65) cell_vkb2_top_candi_pane_g2

0xc724,	// (0x00046e86) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc724,	// (0x00046e86) cell_vkb2_top_candi_pane_g3

0x7530,	// (0x00041c92) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7530,	// (0x00041c92) cell_vkb2_top_candi_pane_g4

0xe459,	// (0x00048bbb) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe459,	// (0x00048bbb) cell_vkb2_top_candi_pane_g5

0xd850,	// (0x00047fb2) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd850,	// (0x00047fb2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0004a54b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0004a54b) cell_vkb2_top_candi_pane_g

0x7551,	// (0x00041cb3) cell_vkb2_top_candi_pane_t1

0x6770,	// (0x00040ed2) aid_size_touch_slider_mark_ParamLimits

0x6770,	// (0x00040ed2) aid_size_touch_slider_mark

0xe06e,	// (0x000487d0) grid_graphic2_catg_pane_ParamLimits

0xe06e,	// (0x000487d0) grid_graphic2_catg_pane

0xe10c,	// (0x0004886e) popup_grid_graphic2_window_t1_ParamLimits

0xe10c,	// (0x0004886e) popup_grid_graphic2_window_t1

0xe11e,	// (0x00048880) popup_grid_graphic2_window_t2_ParamLimits

0xe11e,	// (0x00048880) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0004a506) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0004a506) popup_grid_graphic2_window_t

0x7a73,	// (0x000421d5) bg_button_pane_cp05_ParamLimits

0xe288,	// (0x000489ea) cell_graphic2_control_pane_g1_ParamLimits

0xe47a,	// (0x00048bdc) cell_graphic2_catg_pane_ParamLimits

0xe47a,	// (0x00048bdc) cell_graphic2_catg_pane

0x76f6,	// (0x00041e58) bg_button_pane_cp12

0xe48c,	// (0x00048bee) cell_graphic2_catg_pane_g1

0xd988,	// (0x000480ea) cell_tb_ext_pane_t1_ParamLimits

0x7328,	// (0x00041a8a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7328,	// (0x00041a8a) vkb2_top_cell_right_narrow_pane

0x7340,	// (0x00041aa2) vkb2_top_cell_right_wide_pane_ParamLimits

0x7340,	// (0x00041aa2) vkb2_top_cell_right_wide_pane

0x187c,	// (0x0003bfde) bg_vkb2_func_pane_ParamLimits

0x187c,	// (0x0003bfde) bg_vkb2_func_pane

0x73b1,	// (0x00041b13) vkb2_top_cell_left_pane_g1_ParamLimits

0x187c,	// (0x0003bfde) bg_vkb2_fuc_pane_cp03_ParamLimits

0x187c,	// (0x0003bfde) bg_vkb2_fuc_pane_cp03

0x740f,	// (0x00041b71) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ab7,	// (0x00044219) bg_vkb2_func_pane_g1

0x9abf,	// (0x00044221) bg_vkb2_func_pane_g2

0x9acf,	// (0x00044231) bg_vkb2_func_pane_g3

0x9ac7,	// (0x00044229) bg_vkb2_func_pane_g4

0x9ad7,	// (0x00044239) bg_vkb2_func_pane_g5

0x9adf,	// (0x00044241) bg_vkb2_func_pane_g6

0x9ae7,	// (0x00044249) bg_vkb2_func_pane_g7

0x9aef,	// (0x00044251) bg_vkb2_func_pane_g8

0x9aaf,	// (0x00044211) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0004a558) bg_vkb2_func_pane_g

0x187c,	// (0x0003bfde) bg_vkb2_fuc_pane_cp01_ParamLimits

0x187c,	// (0x0003bfde) bg_vkb2_fuc_pane_cp01

0x73b1,	// (0x00041b13) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73b1,	// (0x00041b13) vkb2_top_cell_right_wide_pane_g1

0x187c,	// (0x0003bfde) bg_vkb2_fuc_pane_cp02_ParamLimits

0x187c,	// (0x0003bfde) bg_vkb2_fuc_pane_cp02

0x740f,	// (0x00041b71) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x740f,	// (0x00041b71) vkb2_top_cell_right_narrow_pane_g1

0xd5be,	// (0x00047d20) aid_touch_area_decrease_ParamLimits

0xd5be,	// (0x00047d20) aid_touch_area_decrease

0xd5dc,	// (0x00047d3e) aid_touch_area_increase_ParamLimits

0xd5dc,	// (0x00047d3e) aid_touch_area_increase

0xd5e8,	// (0x00047d4a) aid_touch_area_mute_ParamLimits

0xd5e8,	// (0x00047d4a) aid_touch_area_mute

0xd60c,	// (0x00047d6e) aid_touch_area_slider_ParamLimits

0xd60c,	// (0x00047d6e) aid_touch_area_slider

0xd6f8,	// (0x00047e5a) popup_slider_window_g4_ParamLimits

0xd6f8,	// (0x00047e5a) popup_slider_window_g4

0xd704,	// (0x00047e66) popup_slider_window_g5_ParamLimits

0xd704,	// (0x00047e66) popup_slider_window_g5

0xd726,	// (0x00047e88) popup_slider_window_g6_ParamLimits

0xd726,	// (0x00047e88) popup_slider_window_g6

0xd766,	// (0x00047ec8) popup_slider_window_t2_ParamLimits

0xd766,	// (0x00047ec8) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0004a454) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0004a454) popup_slider_window_t

0xd77e,	// (0x00047ee0) slider_pane_ParamLimits

0xd77e,	// (0x00047ee0) slider_pane

0xe495,	// (0x00048bf7) slider_pane_g1_ParamLimits

0xe495,	// (0x00048bf7) slider_pane_g1

0xe4a9,	// (0x00048c0b) slider_pane_g2_ParamLimits

0xe4a9,	// (0x00048c0b) slider_pane_g2

0xe4bf,	// (0x00048c21) slider_pane_g3_ParamLimits

0xe4bf,	// (0x00048c21) slider_pane_g3

0x0003,

0xfe09,	// (0x0004a56b) slider_pane_g_ParamLimits

0xfe09,	// (0x0004a56b) slider_pane_g

0x94c7,	// (0x00043c29) popup_tb_float_extension_window_ParamLimits

0x94c7,	// (0x00043c29) popup_tb_float_extension_window

0xe4eb,	// (0x00048c4d) aid_size_cell_tb_float_ext

0x76f6,	// (0x00041e58) bg_popup_sub_window_cp28

0xe4f7,	// (0x00048c59) grid_tb_float_ext_pane

0xe501,	// (0x00048c63) cell_tb_float_ext_pane_ParamLimits

0xe501,	// (0x00048c63) cell_tb_float_ext_pane

0xe51b,	// (0x00048c7d) cell_tb_float_ext_pane_g1

0xe524,	// (0x00048c86) grid_highlight_pane_cp12

0x6b4b,	// (0x000412ad) cell_last_hwr_side_pane_ParamLimits

0x6b4b,	// (0x000412ad) cell_last_hwr_side_pane

0xc0c0,	// (0x00046822) cell_last_hwr_side_pane_g1

0xe52d,	// (0x00048c8f) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0004a574) cell_last_hwr_side_pane_g

0x72d7,	// (0x00041a39) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72d7,	// (0x00041a39) vkb2_area_bottom_space_btn_pane

0xc352,	// (0x00046ab4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfe0,	// (0x00048742) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7551,	// (0x00041cb3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7570,	// (0x00041cd2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7570,	// (0x00041cd2) vkb2_area_bottom_space_btn_pane_g1

0x75aa,	// (0x00041d0c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75aa,	// (0x00041d0c) vkb2_area_bottom_space_btn_pane_g2

0x75e0,	// (0x00041d42) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x75e0,	// (0x00041d42) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0004a579) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0004a579) vkb2_area_bottom_space_btn_pane_g

0x6abf,	// (0x00041221) cel_fep_hwr_func_pane_ParamLimits

0x6abf,	// (0x00041221) cel_fep_hwr_func_pane

0x6afb,	// (0x0004125d) cell_hwr_side_button_pane_ParamLimits

0x6afb,	// (0x0004125d) cell_hwr_side_button_pane

0xd9bc,	// (0x0004811e) aid_area_touch_clock_ParamLimits

0x7a73,	// (0x000421d5) bg_uniindi_top_pane_ParamLimits

0xd9ce,	// (0x00048130) uniindi_top_pane_g1_ParamLimits

0xd9e4,	// (0x00048146) uniindi_top_pane_g2_ParamLimits

0xd9f0,	// (0x00048152) uniindi_top_pane_g3_ParamLimits

0xda01,	// (0x00048163) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0004a48c) uniindi_top_pane_g_ParamLimits

0xda0e,	// (0x00048170) uniindi_top_pane_t1_ParamLimits

0x7a73,	// (0x000421d5) bg_vkb2_func_pane_cp01_ParamLimits

0x7a73,	// (0x000421d5) bg_vkb2_func_pane_cp01

0xe536,	// (0x00048c98) cel_fep_hwr_func_pane_g1_ParamLimits

0xe536,	// (0x00048c98) cel_fep_hwr_func_pane_g1

0x7a73,	// (0x000421d5) bg_vkb2_func_pane_cp02_ParamLimits

0x7a73,	// (0x000421d5) bg_vkb2_func_pane_cp02

0xe536,	// (0x00048c98) cell_hwr_side_button_pane_g1_ParamLimits

0xe536,	// (0x00048c98) cell_hwr_side_button_pane_g1

0x9930,	// (0x00044092) status_pane_g4_ParamLimits

0x9930,	// (0x00044092) status_pane_g4

0x994a,	// (0x000440ac) status_pane_t1

0xbdf9,	// (0x0004655b) form2_midp_gauge_slider_cont_pane

0xbe01,	// (0x00046563) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe13,	// (0x00046575) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe25,	// (0x00046587) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0004a258) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe37,	// (0x00046599) form2_midp_slider_pane_ParamLimits

0x6f46,	// (0x000416a8) aid_size_cell_func_vkb2_ParamLimits

0x6f46,	// (0x000416a8) aid_size_cell_func_vkb2

0xe4d7,	// (0x00048c39) slider_pane_g4_ParamLimits

0xe4d7,	// (0x00048c39) slider_pane_g4

0x762a,	// (0x00041d8c) form2_midp_gauge_slider_pane_t2_cp01

0x7638,	// (0x00041d9a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7638,	// (0x00041d9a) form2_midp_gauge_slider_pane_t3_cp01

0x7655,	// (0x00041db7) form2_midp_slider_pane_cp01

0x76f6,	// (0x00041e58) navi_smil_pane

0xe56f,	// (0x00048cd1) navi_smil_pane_g1

0xe577,	// (0x00048cd9) navi_smil_pane_t1

0xe544,	// (0x00048ca6) form2_midp_slider_pane_g1

0xe54d,	// (0x00048caf) form2_midp_slider_pane_g2

0xe555,	// (0x00048cb7) form2_midp_slider_pane_g3

0xe544,	// (0x00048ca6) form2_midp_slider_pane_g4

0xe55d,	// (0x00048cbf) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0004a582) form2_midp_slider_pane_g

0x761a,	// (0x00041d7c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x761a,	// (0x00041d7c) vkb2_area_bottom_space_btn_pane_g4

0x9766,	// (0x00043ec8) lc0_navi_pane_ParamLimits

0x9766,	// (0x00043ec8) lc0_navi_pane

0x97dc,	// (0x00043f3e) lc0_stat_indi_pane_ParamLimits

0x97dc,	// (0x00043f3e) lc0_stat_indi_pane

0x97f3,	// (0x00043f55) ls0_title_pane_ParamLimits

0x97f3,	// (0x00043f55) ls0_title_pane

0x8056,	// (0x000427b8) bg_popup_sub_pane_cp14_ParamLimits

0xd9a3,	// (0x00048105) list_uniindi_pane_ParamLimits

0xd9af,	// (0x00048111) uniindi_top_pane_ParamLimits

0xda4b,	// (0x000481ad) list_single_uniindi_pane_g1_ParamLimits

0xda5e,	// (0x000481c0) list_single_uniindi_pane_t1_ParamLimits

0x765e,	// (0x00041dc0) lc0_stat_clock_pane_ParamLimits

0x765e,	// (0x00041dc0) lc0_stat_clock_pane

0xe585,	// (0x00048ce7) lc0_stat_indi_pane_g1_ParamLimits

0xe585,	// (0x00048ce7) lc0_stat_indi_pane_g1

0xe592,	// (0x00048cf4) lc0_stat_indi_pane_g2_ParamLimits

0xe592,	// (0x00048cf4) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0004a58d) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0004a58d) lc0_stat_indi_pane_g

0x766b,	// (0x00041dcd) lc0_uni_indicator_pane_ParamLimits

0x766b,	// (0x00041dcd) lc0_uni_indicator_pane

0xe59f,	// (0x00048d01) ls0_title_pane_g1_ParamLimits

0xe59f,	// (0x00048d01) ls0_title_pane_g1

0xe5b3,	// (0x00048d15) ls0_title_pane_t1_ParamLimits

0xe5b3,	// (0x00048d15) ls0_title_pane_t1

0x7678,	// (0x00041dda) lc0_uni_indicator_pane_g1_ParamLimits

0x7678,	// (0x00041dda) lc0_uni_indicator_pane_g1

0xe5e9,	// (0x00048d4b) lc0_stat_clock_pane_t1

0x76f6,	// (0x00041e58) main_ai5_pane

0xe5f7,	// (0x00048d59) ai5_sk_pane_ParamLimits

0xe5f7,	// (0x00048d59) ai5_sk_pane

0xe604,	// (0x00048d66) cell_ai5_widget_pane_ParamLimits

0xe604,	// (0x00048d66) cell_ai5_widget_pane

0xe686,	// (0x00048de8) aid_size_cell_widget_grid

0xe69a,	// (0x00048dfc) bg_ai5_widget_pane_ParamLimits

0xe69a,	// (0x00048dfc) bg_ai5_widget_pane

0xe6c2,	// (0x00048e24) cell_ai5_widget_pane_g2

0xe6d2,	// (0x00048e34) cell_ai5_widget_pane_g3

0xe6f1,	// (0x00048e53) cell_ai5_widget_pane_g4

0xe6fd,	// (0x00048e5f) cell_ai5_widget_pane_g5

0xe709,	// (0x00048e6b) cell_ai5_widget_pane_g6

0xe715,	// (0x00048e77) cell_ai5_widget_pane_g7

0xe75d,	// (0x00048ebf) cell_ai5_widget_pane_t1_ParamLimits

0xe75d,	// (0x00048ebf) cell_ai5_widget_pane_t1

0xe77a,	// (0x00048edc) cell_ai5_widget_pane_t2_ParamLimits

0xe77a,	// (0x00048edc) cell_ai5_widget_pane_t2

0xe792,	// (0x00048ef4) cell_ai5_widget_pane_t3_ParamLimits

0xe792,	// (0x00048ef4) cell_ai5_widget_pane_t3

0xe7aa,	// (0x00048f0c) cell_ai5_widget_pane_t4_ParamLimits

0xe7aa,	// (0x00048f0c) cell_ai5_widget_pane_t4

0xe7c4,	// (0x00048f26) cell_ai5_widget_pane_t5_ParamLimits

0xe7c4,	// (0x00048f26) cell_ai5_widget_pane_t5

0xe7e3,	// (0x00048f45) cell_ai5_widget_pane_t6_ParamLimits

0xe7e3,	// (0x00048f45) cell_ai5_widget_pane_t6

0xe7f5,	// (0x00048f57) cell_ai5_widget_pane_t7_ParamLimits

0xe7f5,	// (0x00048f57) cell_ai5_widget_pane_t7

0xe80e,	// (0x00048f70) cell_ai5_widget_pane_t8_ParamLimits

0xe80e,	// (0x00048f70) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0004a5a7) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0004a5a7) cell_ai5_widget_pane_t

0xe85a,	// (0x00048fbc) grid_ai5_widget_pane

0x8056,	// (0x000427b8) highlight_cell_ai5_widget_pane_ParamLimits

0x8056,	// (0x000427b8) highlight_cell_ai5_widget_pane

0xe872,	// (0x00048fd4) ai5_sk_left_pane

0xe87c,	// (0x00048fde) ai5_sk_middle_pane

0xe886,	// (0x00048fe8) ai5_sk_right_pane

0xe890,	// (0x00048ff2) bg_ai5_widget_pane_g1_ParamLimits

0xe890,	// (0x00048ff2) bg_ai5_widget_pane_g1

0xe89c,	// (0x00048ffe) bg_ai5_widget_pane_g2_ParamLimits

0xe89c,	// (0x00048ffe) bg_ai5_widget_pane_g2

0xe8a8,	// (0x0004900a) bg_ai5_widget_pane_g3_ParamLimits

0xe8a8,	// (0x0004900a) bg_ai5_widget_pane_g3

0xe8b4,	// (0x00049016) bg_ai5_widget_pane_g4_ParamLimits

0xe8b4,	// (0x00049016) bg_ai5_widget_pane_g4

0xe8c0,	// (0x00049022) bg_ai5_widget_pane_g5_ParamLimits

0xe8c0,	// (0x00049022) bg_ai5_widget_pane_g5

0xe8cc,	// (0x0004902e) bg_ai5_widget_pane_g6_ParamLimits

0xe8cc,	// (0x0004902e) bg_ai5_widget_pane_g6

0xe8d8,	// (0x0004903a) bg_ai5_widget_pane_g7_ParamLimits

0xe8d8,	// (0x0004903a) bg_ai5_widget_pane_g7

0xe8e4,	// (0x00049046) bg_ai5_widget_pane_g8_ParamLimits

0xe8e4,	// (0x00049046) bg_ai5_widget_pane_g8

0xe8f0,	// (0x00049052) bg_ai5_widget_pane_g9_ParamLimits

0xe8f0,	// (0x00049052) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0004a5bc) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0004a5bc) bg_ai5_widget_pane_g

0xe923,	// (0x00049085) cell_shortcut_ai5_widget_pane_ParamLimits

0xe923,	// (0x00049085) cell_shortcut_ai5_widget_pane

0x78b3,	// (0x00042015) bg_cell_shortcut_ai5_widget_pane

0xe934,	// (0x00049096) cell_grid_ai5_widget_pane_g1

0xe93d,	// (0x0004909f) highlight_cell_shortcut_ai5_widget_pane

0x9abf,	// (0x00044221) ai5_sk_left_pane_g1

0xe945,	// (0x000490a7) ai5_sk_left_pane_g2

0xe94d,	// (0x000490af) ai5_sk_left_pane_g3

0xe955,	// (0x000490b7) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0004a5cf) ai5_sk_left_pane_g

0xe95d,	// (0x000490bf) ai5_sk_left_pane_t1

0x9ab7,	// (0x00044219) ai5_sk_right_pane_g1

0xe96b,	// (0x000490cd) ai5_sk_right_pane_g2

0xe973,	// (0x000490d5) ai5_sk_right_pane_g3

0xe97b,	// (0x000490dd) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0004a5d8) ai5_sk_right_pane_g

0xe983,	// (0x000490e5) ai5_sk_right_pane_t1

0x9ab7,	// (0x00044219) ai5_sk_middle_pane_g1

0x9abf,	// (0x00044221) ai5_sk_middle_pane_g2

0x9ad7,	// (0x00044239) ai5_sk_middle_pane_g3

0xe973,	// (0x000490d5) ai5_sk_middle_pane_g4

0xe94d,	// (0x000490af) ai5_sk_middle_pane_g5

0xe991,	// (0x000490f3) ai5_sk_middle_pane_g6

0xe999,	// (0x000490fb) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0004a5e1) ai5_sk_middle_pane_g

0x95f6,	// (0x00043d58) aid_touch_area_size_lc0_ParamLimits

0x95f6,	// (0x00043d58) aid_touch_area_size_lc0

0x6c4a,	// (0x000413ac) cell_hwr_candidate_pane_t1_ParamLimits

0x9612,	// (0x00043d74) aid_touch_navi_pane

0x98da,	// (0x0004403c) status_dt_navi_pane_ParamLimits

0x98da,	// (0x0004403c) status_dt_navi_pane

0x98e7,	// (0x00044049) status_dt_sta_pane_ParamLimits

0x98e7,	// (0x00044049) status_dt_sta_pane

0xe9a1,	// (0x00049103) dt_sta_controll_pane

0xe9ae,	// (0x00049110) dt_sta_indi_pane

0xe9bf,	// (0x00049121) dt_sta_title_pane

0x7a73,	// (0x000421d5) bg_dt_sta_indi_pane_ParamLimits

0x7a73,	// (0x000421d5) bg_dt_sta_indi_pane

0xe9d2,	// (0x00049134) dt_sta_battery_pane

0xe9da,	// (0x0004913c) dt_sta_indi_pane_g1

0xe9e3,	// (0x00049145) dt_sta_indi_pane_g2

0xe9ec,	// (0x0004914e) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0004a5f0) dt_sta_indi_pane_g

0xe9f5,	// (0x00049157) dt_sta_signal_pane

0x8056,	// (0x000427b8) bg_dt_sta_title_pane_ParamLimits

0x8056,	// (0x000427b8) bg_dt_sta_title_pane

0xe9fe,	// (0x00049160) dt_sta_title_pane_g1

0xea06,	// (0x00049168) dt_sta_title_pane_t1_ParamLimits

0xea06,	// (0x00049168) dt_sta_title_pane_t1

0x76f6,	// (0x00041e58) bg_dt_sta_control_pane

0xea1b,	// (0x0004917d) dt_sta_controll_pane_g1

0xea24,	// (0x00049186) bg_dt_sta_title_pane_g1

0xea2d,	// (0x0004918f) bg_dt_sta_title_pane_g2

0xea36,	// (0x00049198) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0004a5f7) bg_dt_sta_title_pane_g

0xc0c0,	// (0x00046822) bg_dt_sta_indi_pane_g1

0xea3f,	// (0x000491a1) dt_sta_signal_pane_g1

0xea47,	// (0x000491a9) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0004a5fe) dt_sta_signal_pane_g

0xea4f,	// (0x000491b1) dt_sta_battery_pane_g1

0xea58,	// (0x000491ba) dt_sta_battery_pane_t1

0xc0c0,	// (0x00046822) bg_dt_sta_control_pane_g1

0x87a3,	// (0x00042f05) fep_china_uni_eep_pane

0x87ab,	// (0x00042f0d) fep_china_uni_entry_pane_ParamLimits

0x87bb,	// (0x00042f1d) popup_fep_china_uni_window_g1_ParamLimits

0x87cb,	// (0x00042f2d) popup_fep_china_uni_window_g2_ParamLimits

0x87cb,	// (0x00042f2d) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00049e9c) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00049e9c) popup_fep_china_uni_window_g

0xea67,	// (0x000491c9) fep_china_uni_eep_pane_g1

0xea6f,	// (0x000491d1) fep_china_uni_eep_pane_t1

0xe566,	// (0x00048cc8) aid_touch_area_size_smil_player

0x975e,	// (0x00043ec0) lc0_clock_pane

0x993e,	// (0x000440a0) status_pane_g5_ParamLimits

0x993e,	// (0x000440a0) status_pane_g5

0x918c,	// (0x000438ee) popup_keymap_window

0x98fc,	// (0x0004405e) status_icon_pane

0xe6d2,	// (0x00048e34) cell_ai5_widget_pane_g3_ParamLimits

0xe6f1,	// (0x00048e53) cell_ai5_widget_pane_g4_ParamLimits

0xe6fd,	// (0x00048e5f) cell_ai5_widget_pane_g5_ParamLimits

0xe721,	// (0x00048e83) cell_ai5_widget_pane_g8_ParamLimits

0xe721,	// (0x00048e83) cell_ai5_widget_pane_g8

0xe735,	// (0x00048e97) cell_ai5_widget_pane_g9_ParamLimits

0xe735,	// (0x00048e97) cell_ai5_widget_pane_g9

0xe749,	// (0x00048eab) cell_ai5_widget_pane_g10_ParamLimits

0xe749,	// (0x00048eab) cell_ai5_widget_pane_g10

0xea7e,	// (0x000491e0) status_icon_pane_g1

0x76f6,	// (0x00041e58) bg_popup_sub_pane_cp13

0xea86,	// (0x000491e8) popup_keymap_window_t1

0x8f70,	// (0x000436d2) control_pane_g6_ParamLimits

0x8f70,	// (0x000436d2) control_pane_g6

0x8f7d,	// (0x000436df) control_pane_g7_ParamLimits

0x8f7d,	// (0x000436df) control_pane_g7

0x8f8a,	// (0x000436ec) control_pane_g8_ParamLimits

0x8f8a,	// (0x000436ec) control_pane_g8

0xe9a1,	// (0x00049103) dt_sta_controll_pane_ParamLimits

0xe9ae,	// (0x00049110) dt_sta_indi_pane_ParamLimits

0xe9bf,	// (0x00049121) dt_sta_title_pane_ParamLimits

0x7f8e,	// (0x000426f0) aid_size_touch_scroll_bar_cale

0x5c02,	// (0x00040364) popup_discreet_window_ParamLimits

0x5c02,	// (0x00040364) popup_discreet_window

0x5c8a,	// (0x000403ec) popup_sk_window

0xa188,	// (0x000448ea) bg_popup_sub_pane_cp28_ParamLimits

0xa188,	// (0x000448ea) bg_popup_sub_pane_cp28

0xea94,	// (0x000491f6) popup_discreet_window_g1_ParamLimits

0xea94,	// (0x000491f6) popup_discreet_window_g1

0xeab4,	// (0x00049216) popup_discreet_window_t1_ParamLimits

0xeab4,	// (0x00049216) popup_discreet_window_t1

0xead2,	// (0x00049234) popup_discreet_window_t2_ParamLimits

0xead2,	// (0x00049234) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0004a603) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0004a603) popup_discreet_window_t

0x768c,	// (0x00041dee) popup_sk_window_g1

0x7696,	// (0x00041df8) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0004a60a) popup_sk_window_g

0xeb24,	// (0x00049286) popup_sk_window_t1

0xeb32,	// (0x00049294) popup_sk_window_t1_copy1

0xe6c2,	// (0x00048e24) cell_ai5_widget_pane_g2_ParamLimits

0xe820,	// (0x00048f82) cell_ai5_widget_pane_t9_ParamLimits

0xe820,	// (0x00048f82) cell_ai5_widget_pane_t9

0x76f6,	// (0x00041e58) main_fep_fshwr2_pane

0xeb40,	// (0x000492a2) aid_fshwr2_btn_pane

0xeb48,	// (0x000492aa) aid_fshwr2_syb_pane

0xeb50,	// (0x000492b2) aid_fshwr2_txt_pane

0xeb58,	// (0x000492ba) fshwr2_func_candi_pane

0xeb64,	// (0x000492c6) fshwr2_hwr_syb_pane

0xeb70,	// (0x000492d2) fshwr2_icf_pane

0x76f6,	// (0x00041e58) fshwr2_icf_bg_pane

0xeb8e,	// (0x000492f0) fshwr2_icf_pane_t1_ParamLimits

0xeb8e,	// (0x000492f0) fshwr2_icf_pane_t1

0xc0c0,	// (0x00046822) fshwr2_func_candi_pane_g1

0xeba5,	// (0x00049307) fshwr2_func_candi_row_pane_ParamLimits

0xeba5,	// (0x00049307) fshwr2_func_candi_row_pane

0xebb6,	// (0x00049318) cell_fshwr2_syb_pane_ParamLimits

0xebb6,	// (0x00049318) cell_fshwr2_syb_pane

0xc352,	// (0x00046ab4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) fshwr2_hwr_syb_pane_g1

0x76f6,	// (0x00041e58) bg_popup_call_pane_cp01

0xebd0,	// (0x00049332) fshwr2_func_candi_cell_pane_ParamLimits

0xebd0,	// (0x00049332) fshwr2_func_candi_cell_pane

0xec01,	// (0x00049363) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec01,	// (0x00049363) fshwr2_func_candi_cell_bg_pane

0xec1b,	// (0x0004937d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec1b,	// (0x0004937d) fshwr2_func_candi_cell_pane_g1

0xec43,	// (0x000493a5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec43,	// (0x000493a5) fshwr2_func_candi_cell_pane_t1

0x76f6,	// (0x00041e58) bg_button_pane_cp08

0x8c99,	// (0x000433fb) cell_fshwr2_syb_bg_pane

0xec56,	// (0x000493b8) cell_fshwr2_syb_bg_pane_g1

0xec5e,	// (0x000493c0) cell_fshwr2_syb_bg_pane_t1

0x8056,	// (0x000427b8) main_tmo_pane

0xac9d,	// (0x000453ff) uni_indicator_pane_g1_ParamLimits

0xacb2,	// (0x00045414) uni_indicator_pane_g2_ParamLimits

0xacc8,	// (0x0004542a) uni_indicator_pane_g3_ParamLimits

0xacde,	// (0x00045440) uni_indicator_pane_g4_ParamLimits

0xacde,	// (0x00045440) uni_indicator_pane_g4

0xacf2,	// (0x00045454) uni_indicator_pane_g5_ParamLimits

0xacf2,	// (0x00045454) uni_indicator_pane_g5

0xad06,	// (0x00045468) uni_indicator_pane_g6_ParamLimits

0xad06,	// (0x00045468) uni_indicator_pane_g6

0xf937,	// (0x0004a099) uni_indicator_pane_g_ParamLimits

0xd59a,	// (0x00047cfc) popup_tmo_note_window_ParamLimits

0xd59a,	// (0x00047cfc) popup_tmo_note_window

0x76f6,	// (0x00041e58) fshwr2_bg_pane

0xec34,	// (0x00049396) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec34,	// (0x00049396) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0004a60f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0004a60f) fshwr2_func_candi_cell_pane_g

0xc0c0,	// (0x00046822) bg_popup_window_pane_cp01

0xec6d,	// (0x000493cf) bg_popup_window_pane_g1_cp01

0xec76,	// (0x000493d8) bg_popup_window_pane_cp22_ParamLimits

0xec76,	// (0x000493d8) bg_popup_window_pane_cp22

0xec84,	// (0x000493e6) listscroll_tmo_link_pane_ParamLimits

0xec84,	// (0x000493e6) listscroll_tmo_link_pane

0xecc4,	// (0x00049426) popup_tmo_note_window_g1_ParamLimits

0xecc4,	// (0x00049426) popup_tmo_note_window_g1

0xecd1,	// (0x00049433) tmo_note_info_pane_ParamLimits

0xecd1,	// (0x00049433) tmo_note_info_pane

0xeceb,	// (0x0004944d) list_tmo_note_info_pane_g1_ParamLimits

0xeceb,	// (0x0004944d) list_tmo_note_info_pane_g1

0xed02,	// (0x00049464) list_tmo_note_info_pane_g2_ParamLimits

0xed02,	// (0x00049464) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0004a614) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0004a614) list_tmo_note_info_pane_g

0xed1e,	// (0x00049480) list_tmo_note_info_text_pane_ParamLimits

0xed1e,	// (0x00049480) list_tmo_note_info_text_pane

0xed9f,	// (0x00049501) list_tmo_link_pane

0xedac,	// (0x0004950e) scroll_pane_cp20

0xedb9,	// (0x0004951b) list_single_tmo_link_pane_ParamLimits

0xedb9,	// (0x0004951b) list_single_tmo_link_pane

0xedc9,	// (0x0004952b) list_single_tmo_link_pane_t1

0xedd7,	// (0x00049539) list_tmo_note_info_text_pane_t1_ParamLimits

0xedd7,	// (0x00049539) list_tmo_note_info_text_pane_t1

0x811c,	// (0x0004287e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x811c,	// (0x0004287e) aid_size_touch_scroll_bar_cp01

0x51cb,	// (0x0003f92d) aid_size_touch_slider_marker

0x5c72,	// (0x000403d4) popup_settings_window_ParamLimits

0x5c72,	// (0x000403d4) popup_settings_window

0x537e,	// (0x0003fae0) popup_candi_list_indi_window

0x9612,	// (0x00043d74) aid_touch_navi_pane_ParamLimits

0x6e9f,	// (0x00041601) rs_clock_indi_pane

0x6ea8,	// (0x0004160a) sctrl_sk_bottom_pane_ParamLimits

0x6eb9,	// (0x0004161b) sctrl_sk_top_pane_ParamLimits

0x6fa0,	// (0x00041702) popup_fep_tooltip_window

0xe686,	// (0x00048de8) aid_size_cell_widget_grid_ParamLimits

0xe6b6,	// (0x00048e18) cell_ai5_widget_pane_g1_ParamLimits

0xe6b6,	// (0x00048e18) cell_ai5_widget_pane_g1

0xe709,	// (0x00048e6b) cell_ai5_widget_pane_g6_ParamLimits

0xe715,	// (0x00048e77) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0004a592) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0004a592) cell_ai5_widget_pane_g

0xe844,	// (0x00048fa6) cell_ai5_widget_pane_t10_ParamLimits

0xe844,	// (0x00048fa6) cell_ai5_widget_pane_t10

0xe85a,	// (0x00048fbc) grid_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x0004905e) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x0004905e) cell_contacts_ai5_widget_pane

0xeae7,	// (0x00049249) popup_discreet_window_t3_ParamLimits

0xeae7,	// (0x00049249) popup_discreet_window_t3

0xeb7a,	// (0x000492dc) popup_fshwr2_char_preview_window_ParamLimits

0xeb7a,	// (0x000492dc) popup_fshwr2_char_preview_window

0xed3c,	// (0x0004949e) tmo_note_info_pane_t1

0xed51,	// (0x000494b3) tmo_note_info_pane_t2

0xed66,	// (0x000494c8) tmo_note_info_pane_t3

0xed7b,	// (0x000494dd) tmo_note_info_pane_t4

0xed8d,	// (0x000494ef) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0004a619) tmo_note_info_pane_t

0xed9f,	// (0x00049501) list_tmo_link_pane_ParamLimits

0xedac,	// (0x0004950e) scroll_pane_cp20_ParamLimits

0x76f6,	// (0x00041e58) bg_popup_fep_char_preview_window_cp01

0xedf0,	// (0x00049552) popup_fshwr2_char_preview_window_t1

0xedfe,	// (0x00049560) popup_candi_list_indi_window_g1

0xee07,	// (0x00049569) bg_cell_contacts_ai5_widget_pane

0xee13,	// (0x00049575) cell_contacts_ai5_widget_pane_g1

0xee27,	// (0x00049589) cell_contacts_ai5_widget_pane_g2

0xee36,	// (0x00049598) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0004a624) cell_contacts_ai5_widget_pane_g

0xee49,	// (0x000495ab) cell_contacts_ai5_widget_pane_t1

0x8056,	// (0x000427b8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeec3,	// (0x00049625) settings_container_pane

0x8c99,	// (0x000433fb) listscroll_set_pane_copy1

0xb7d3,	// (0x00045f35) scroll_pane_cp121_copy1

0xeecf,	// (0x00049631) set_content_pane_copy1

0xeed7,	// (0x00049639) aid_height_set_list_copy1_ParamLimits

0xeed7,	// (0x00049639) aid_height_set_list_copy1

0xaefe,	// (0x00045660) aid_size_parent_copy1_ParamLimits

0xaefe,	// (0x00045660) aid_size_parent_copy1

0xeee3,	// (0x00049645) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeee3,	// (0x00049645) button_value_adjust_pane_cp6_copy1

0x8ff7,	// (0x00043759) list_highlight_pane_cp2_copy1_ParamLimits

0x8ff7,	// (0x00043759) list_highlight_pane_cp2_copy1

0xeef7,	// (0x00049659) list_set_pane_copy1_ParamLimits

0xeef7,	// (0x00049659) list_set_pane_copy1

0xee5e,	// (0x000495c0) main_pane_set_t1_copy1_ParamLimits

0xee5e,	// (0x000495c0) main_pane_set_t1_copy1

0xee98,	// (0x000495fa) main_pane_set_t2_copy1_ParamLimits

0xee98,	// (0x000495fa) main_pane_set_t2_copy1

0xefa4,	// (0x00049706) main_pane_set_t3_copy1

0xefb2,	// (0x00049714) main_pane_set_t4_copy1

0xeeb7,	// (0x00049619) set_content_pane_g1_copy1_ParamLimits

0xeeb7,	// (0x00049619) set_content_pane_g1_copy1

0xefc0,	// (0x00049722) setting_code_pane_copy1

0xefca,	// (0x0004972c) setting_slider_graphic_pane_copy1

0xefca,	// (0x0004972c) setting_slider_pane_copy1

0xefca,	// (0x0004972c) setting_text_pane_copy1

0xefd4,	// (0x00049736) setting_volume_pane_copy1

0xefdd,	// (0x0004973f) settings_code_pane_cp2_copy1

0xefe5,	// (0x00049747) settings_code_pane_cp_copy1_ParamLimits

0xefe5,	// (0x00049747) settings_code_pane_cp_copy1

0xeff9,	// (0x0004975b) volume_set_pane_copy1

0xf001,	// (0x00049763) volume_set_pane_g10_copy1

0xf009,	// (0x0004976b) volume_set_pane_g1_copy1

0xf011,	// (0x00049773) volume_set_pane_g2_copy1

0xf019,	// (0x0004977b) volume_set_pane_g3_copy1

0xf021,	// (0x00049783) volume_set_pane_g4_copy1

0xf029,	// (0x0004978b) volume_set_pane_g5_copy1

0xf031,	// (0x00049793) volume_set_pane_g6_copy1

0xf039,	// (0x0004979b) volume_set_pane_g7_copy1

0xf041,	// (0x000497a3) volume_set_pane_g8_copy1

0xf049,	// (0x000497ab) volume_set_pane_g9_copy1

0x77ea,	// (0x00041f4c) bg_set_opt_pane_cp_copy1_ParamLimits

0x77ea,	// (0x00041f4c) bg_set_opt_pane_cp_copy1

0xf051,	// (0x000497b3) setting_slider_pane_t1_copy1_ParamLimits

0xf051,	// (0x000497b3) setting_slider_pane_t1_copy1

0xf06f,	// (0x000497d1) setting_slider_pane_t2_copy1_ParamLimits

0xf06f,	// (0x000497d1) setting_slider_pane_t2_copy1

0xf089,	// (0x000497eb) setting_slider_pane_t3_copy1_ParamLimits

0xf089,	// (0x000497eb) setting_slider_pane_t3_copy1

0xf0a1,	// (0x00049803) slider_set_pane_copy1_ParamLimits

0xf0a1,	// (0x00049803) slider_set_pane_copy1

0x80bd,	// (0x0004281f) set_opt_bg_pane_g1_copy2

0x80c5,	// (0x00042827) set_opt_bg_pane_g2_copy2

0xf0b7,	// (0x00049819) set_opt_bg_pane_g3_copy2

0x80d5,	// (0x00042837) set_opt_bg_pane_g4_copy2

0x80dd,	// (0x0004283f) set_opt_bg_pane_g5_copy2

0x80e5,	// (0x00042847) set_opt_bg_pane_g6_copy2

0xf0c1,	// (0x00049823) set_opt_bg_pane_g7_copy2

0xf0c9,	// (0x0004982b) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x00049835) set_opt_bg_pane_g9_copy2

0x76a0,	// (0x00041e02) aid_size_touch_slider_mark_copy1_ParamLimits

0x76a0,	// (0x00041e02) aid_size_touch_slider_mark_copy1

0xf0dd,	// (0x0004983f) slider_set_pane_g1_copy1

0x76b4,	// (0x00041e16) slider_set_pane_g2_copy1

0x6790,	// (0x00040ef2) slider_set_pane_g3_copy1_ParamLimits

0x6790,	// (0x00040ef2) slider_set_pane_g3_copy1

0x67a4,	// (0x00040f06) slider_set_pane_g4_copy1_ParamLimits

0x67a4,	// (0x00040f06) slider_set_pane_g4_copy1

0x67bc,	// (0x00040f1e) slider_set_pane_g5_copy1_ParamLimits

0x67bc,	// (0x00040f1e) slider_set_pane_g5_copy1

0x6790,	// (0x00040ef2) slider_set_pane_g6_copy1_ParamLimits

0x6790,	// (0x00040ef2) slider_set_pane_g6_copy1

0x76bc,	// (0x00041e1e) slider_set_pane_g7_copy1_ParamLimits

0x76bc,	// (0x00041e1e) slider_set_pane_g7_copy1

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp2_copy1

0xf0e6,	// (0x00049848) setting_slider_graphic_pane_g1_copy1

0xf0ef,	// (0x00049851) setting_slider_graphic_pane_t1_copy1

0xf0ff,	// (0x00049861) setting_slider_graphic_pane_t2_copy1

0xf10f,	// (0x00049871) slider_set_pane_cp_copy1

0xf11f,	// (0x00049881) input_focus_pane_cp1_copy1

0xf128,	// (0x0004988a) list_set_text_pane_copy1

0xf130,	// (0x00049892) setting_text_pane_g1_copy1

0x4bc8,	// (0x0003f32a) set_text_pane_t1_copy1

0xf11f,	// (0x00049881) input_focus_pane_cp2_copy1

0xf130,	// (0x00049892) setting_code_pane_g1_copy1

0xf139,	// (0x0004989b) setting_code_pane_t1_copy1

0xf147,	// (0x000498a9) list_set_graphic_pane_copy1

0x770a,	// (0x00041e6c) bg_set_opt_pane_cp4_copy1

0x899f,	// (0x00043101) list_set_graphic_pane_g1_copy1_ParamLimits

0x899f,	// (0x00043101) list_set_graphic_pane_g1_copy1

0xf159,	// (0x000498bb) list_set_graphic_pane_g2_copy1

0x89b7,	// (0x00043119) list_set_graphic_pane_t1_copy1_ParamLimits

0x89b7,	// (0x00043119) list_set_graphic_pane_t1_copy1

0xc0c0,	// (0x00046822) rs_clock_indi_pane_g1

0xf161,	// (0x000498c3) rs_clock_indi_pane_t1

0xe9d2,	// (0x00049134) rs_indi_pane

0xf16f,	// (0x000498d1) rs_indi_pane_g1

0xf178,	// (0x000498da) rs_indi_pane_g2

0xf181,	// (0x000498e3) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0004a62b) rs_indi_pane_g

0x8c99,	// (0x000433fb) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x000498ec) popup_fep_tooltip_window_t1

0xcd3b,	// (0x0004749d) popup_note2_window_g2_ParamLimits

0xcd3b,	// (0x0004749d) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0004a3c4) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0004a3c4) popup_note2_window_g

0xd236,	// (0x00047998) bg_popup_sub_pane_cp11_ParamLimits

0xd243,	// (0x000479a5) cell_ai3_links_pane_g1_ParamLimits

0xd25a,	// (0x000479bc) cell_ai3_links_pane_t1

0x4bc8,	// (0x0003f32a) set_text_pane_t1_copy1_ParamLimits

0x8baa,	// (0x0004330c) cell_graphic_popup_pane_cp2_ParamLimits

0x8baa,	// (0x0004330c) cell_graphic_popup_pane_cp2

0xf198,	// (0x000498fa) cell_graphic_popup_pane_g1_cp2

0x7da1,	// (0x00042503) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x00049902) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0004990a) cell_graphic_popup_pane_t2_cp2

0x7db2,	// (0x00042514) grid_highlight_pane_cp3_cp2

0x8400,	// (0x00042b62) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8056,	// (0x000427b8) main_tmo_pane_ParamLimits

0xd58e,	// (0x00047cf0) popup_tmo_big_image_note_window

0xe6a6,	// (0x00048e08) cell_ai5_widget_list_pane

0xe6ae,	// (0x00048e10) cell_ai5_widget_lrg_icon_pane

0xed3c,	// (0x0004949e) tmo_note_info_pane_t1_ParamLimits

0xed51,	// (0x000494b3) tmo_note_info_pane_t2_ParamLimits

0xed66,	// (0x000494c8) tmo_note_info_pane_t3_ParamLimits

0xed7b,	// (0x000494dd) tmo_note_info_pane_t4_ParamLimits

0xed8d,	// (0x000494ef) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0004a619) tmo_note_info_pane_t_ParamLimits

0xeec3,	// (0x00049625) settings_container_pane_ParamLimits

0xf117,	// (0x00049879) indicator_popup_pane_cp5

0xf117,	// (0x00049879) indicator_popup_pane_cp6

0xf147,	// (0x000498a9) list_set_graphic_pane_copy1_ParamLimits

0x76f6,	// (0x00041e58) bg_popup_window_pane_cp23

0xf1b6,	// (0x00049918) popup_tmo_big_image_note_window_g1

0xf1c0,	// (0x00049922) popup_tmo_big_image_note_window_t1

0xf1d0,	// (0x00049932) popup_tmo_big_image_note_window_t2

0xf1e0,	// (0x00049942) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0004a632) popup_tmo_big_image_note_window_t

0xf1f0,	// (0x00049952) cell_ai5_widget_lrg_icon_pane_g1

0xf1f8,	// (0x0004995a) cell_ai5_widget_lrg_icon_pane_t1

0xf206,	// (0x00049968) cell_ai5_widget_list_row_pane_ParamLimits

0xf206,	// (0x00049968) cell_ai5_widget_list_row_pane

0xf21f,	// (0x00049981) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21f,	// (0x00049981) cell_ai5_widget_list_row_pane_g1

0xf22c,	// (0x0004998e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22c,	// (0x0004998e) cell_ai5_widget_list_row_pane_t1

0xf244,	// (0x000499a6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf244,	// (0x000499a6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed7,	// (0x0004a639) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0004a639) cell_ai5_widget_list_row_pane_t

0x76f6,	// (0x00041e58) main_fep_vtchi_ss_pane

0xf256,	// (0x000499b8) popup_fep_char_pre_window

0xf25e,	// (0x000499c0) popup_fep_ituss_window

0xf27f,	// (0x000499e1) popup_fep_vkbss_window

0xf29e,	// (0x00049a00) grid_vkbss_keypad_pane_ParamLimits

0xf29e,	// (0x00049a00) grid_vkbss_keypad_pane

0xf2ae,	// (0x00049a10) ituss_keypad_pane

0xf2c7,	// (0x00049a29) aid_vkbss_key_offset_ParamLimits

0xf2c7,	// (0x00049a29) aid_vkbss_key_offset

0xf2d3,	// (0x00049a35) cell_vkbss_key_pane_ParamLimits

0xf2d3,	// (0x00049a35) cell_vkbss_key_pane

0xf2e9,	// (0x00049a4b) bg_cell_vkbss_key_g1_ParamLimits

0xf2e9,	// (0x00049a4b) bg_cell_vkbss_key_g1

0xf2f5,	// (0x00049a57) cell_vkbss_key_3p_pane_ParamLimits

0xf2f5,	// (0x00049a57) cell_vkbss_key_3p_pane

0xf30f,	// (0x00049a71) cell_vkbss_key_g1_ParamLimits

0xf30f,	// (0x00049a71) cell_vkbss_key_g1

0xf329,	// (0x00049a8b) cell_vkbss_key_t1_ParamLimits

0xf329,	// (0x00049a8b) cell_vkbss_key_t1

0xf354,	// (0x00049ab6) cell_ituss_key_pane_ParamLimits

0xf354,	// (0x00049ab6) cell_ituss_key_pane

0xf364,	// (0x00049ac6) bg_cell_ituss_key_g1_ParamLimits

0xf364,	// (0x00049ac6) bg_cell_ituss_key_g1

0xf370,	// (0x00049ad2) cell_ituss_key_pane_g1_ParamLimits

0xf370,	// (0x00049ad2) cell_ituss_key_pane_g1

0xf37c,	// (0x00049ade) cell_ituss_key_pane_g2_ParamLimits

0xf37c,	// (0x00049ade) cell_ituss_key_pane_g2

0x0001,

0xfedc,	// (0x0004a63e) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0004a63e) cell_ituss_key_pane_g

0xf395,	// (0x00049af7) cell_ituss_key_t1_ParamLimits

0xf395,	// (0x00049af7) cell_ituss_key_t1

0xf3c3,	// (0x00049b25) cell_ituss_key_t2_ParamLimits

0xf3c3,	// (0x00049b25) cell_ituss_key_t2

0xf3f4,	// (0x00049b56) cell_ituss_key_t3_ParamLimits

0xf3f4,	// (0x00049b56) cell_ituss_key_t3

0xf425,	// (0x00049b87) cell_ituss_key_t4_ParamLimits

0xf425,	// (0x00049b87) cell_ituss_key_t4

0x0003,

0xfee1,	// (0x0004a643) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0004a643) cell_ituss_key_t

0xf456,	// (0x00049bb8) cell_vkbss_key_3p_pane_g1

0xf45e,	// (0x00049bc0) cell_vkbss_key_3p_pane_g2

0xf466,	// (0x00049bc8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004a64c) cell_vkbss_key_3p_pane_g

0x76f6,	// (0x00041e58) bg_popup_fep_char_preview_window_cp02

0xf46e,	// (0x00049bd0) popup_fep_char_pre_window_t1

0xe67c,	// (0x00048dde) main_ai5_sk_pane

0xee07,	// (0x00049569) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee13,	// (0x00049575) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee27,	// (0x00049589) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee36,	// (0x00049598) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0004a624) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee49,	// (0x000495ab) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8056,	// (0x000427b8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x00049bdf) main_ai5_sk_pane_g1

0x9fc1,	// (0x00044723) popup_query_code_window_g1

0xf274,	// (0x000499d6) popup_fep_vkb_icf_pane

0xf288,	// (0x000499ea) popup_fep_vtchi_icf_pane

0x8056,	// (0x000427b8) bg_icf_pane

0xf495,	// (0x00049bf7) list_vkb_icf_pane

0x8056,	// (0x000427b8) bg_icf_pane_cp01

0xf4ad,	// (0x00049c0f) vtchi_icf_list_pane

0xf4bd,	// (0x00049c1f) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00049c1f) list_vkb_icf_pane_t1

0xf4d4,	// (0x00049c36) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00049c36) vtchi_icf_list_pane_t1

0xf25e,	// (0x000499c0) popup_fep_ituss_window_ParamLimits

0xf288,	// (0x000499ea) popup_fep_vtchi_icf_pane_ParamLimits

0xf2ae,	// (0x00049a10) ituss_keypad_pane_ParamLimits

0xf2be,	// (0x00049a20) ituss_sks_pane

0x8056,	// (0x000427b8) bg_icf_pane_ParamLimits

0xf486,	// (0x00049be8) icf_edit_indi_pane_ParamLimits

0xf486,	// (0x00049be8) icf_edit_indi_pane

0xf495,	// (0x00049bf7) list_vkb_icf_pane_ParamLimits

0x8056,	// (0x000427b8) bg_icf_pane_cp01_ParamLimits

0xf4a1,	// (0x00049c03) icf_edit_indi_pane_cp01_ParamLimits

0xf4a1,	// (0x00049c03) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00049c17) vtchi_query_pane

0xc352,	// (0x00046ab4) icf_edit_indi_pane_g1_ParamLimits

0xc352,	// (0x00046ab4) icf_edit_indi_pane_g1

0xf4f0,	// (0x00049c52) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00049c52) icf_edit_indi_pane_g2

0x0001,

0xfef1,	// (0x0004a653) icf_edit_indi_pane_g_ParamLimits

0xfef1,	// (0x0004a653) icf_edit_indi_pane_g

0xf4fc,	// (0x00049c5e) icf_edit_indi_pane_t1

0xf50a,	// (0x00049c6c) bg_input_focus_pane_cp042

0x7f85,	// (0x000426e7) vtchi_button_pane

0xf513,	// (0x00049c75) vtchi_query_pane_t1

0xf521,	// (0x00049c83) vtchi_query_pane_t2

0xf52f,	// (0x00049c91) vtchi_query_pane_t3

0x0002,

0xfef6,	// (0x0004a658) vtchi_query_pane_t

0x76f6,	// (0x00041e58) bg_button_pane_cp13

0xf53d,	// (0x00049c9f) vtchi_button_pane_g1

0xda95,	// (0x000481f7) ituss_sks_pane_g1

0xf545,	// (0x00049ca7) ituss_sks_pane_g2

0x0001,

0xfefd,	// (0x0004a65f) ituss_sks_pane_g

0xf54e,	// (0x00049cb0) ituss_sks_pane_t1

0xf55c,	// (0x00049cbe) ituss_sks_pane_t2

0x0001,

0xff02,	// (0x0004a664) ituss_sks_pane_t

0xbb22,	// (0x00046284) indicator_nsta_pane_cp_g1

0xbb2b,	// (0x0004628d) indicator_nsta_pane_cp_g2

0xbb33,	// (0x00046295) indicator_nsta_pane_cp_g3

0xbb3b,	// (0x0004629d) indicator_nsta_pane_cp_g4

0xbb43,	// (0x000462a5) indicator_nsta_pane_cp_g5

0xbb4b,	// (0x000462ad) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0004a20e) indicator_nsta_pane_cp_g

0xe275,	// (0x000489d7) cell_graphic2_pane_t2_ParamLimits

0xe275,	// (0x000489d7) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0004a51b) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0004a51b) cell_graphic2_pane_t

0xe2a2,	// (0x00048a04) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
