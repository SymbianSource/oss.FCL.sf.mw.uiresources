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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003a54a };

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
0x7f4a,	// (0x00042494) Screen

0x7f5e,	// (0x000424a8) application_window_ParamLimits

0x7f5e,	// (0x000424a8) application_window

0x7f78,	// (0x000424c2) screen_g1

0x58ab,	// (0x0003fdf5) area_bottom_pane_ParamLimits

0x58ab,	// (0x0003fdf5) area_bottom_pane

0x596b,	// (0x0003feb5) area_top_pane_ParamLimits

0x596b,	// (0x0003feb5) area_top_pane

0x59ff,	// (0x0003ff49) main_pane_ParamLimits

0x59ff,	// (0x0003ff49) main_pane

0x7f82,	// (0x000424cc) misc_graphics

0x98fc,	// (0x00043e46) battery_pane_ParamLimits

0x98fc,	// (0x00043e46) battery_pane

0xa5db,	// (0x00044b25) bg_status_flat_pane_g8

0xa5e3,	// (0x00044b2d) bg_status_flat_pane_g9

0x99be,	// (0x00043f08) context_pane_ParamLimits

0x99be,	// (0x00043f08) context_pane

0x9ae0,	// (0x0004402a) navi_pane_ParamLimits

0x9ae0,	// (0x0004402a) navi_pane

0x9b64,	// (0x000440ae) signal_pane_ParamLimits

0x9b64,	// (0x000440ae) signal_pane

0x0008,

0xf879,	// (0x00049dc3) bg_status_flat_pane_g

0x9bd1,	// (0x0004411b) status_pane_g1_ParamLimits

0x9bd1,	// (0x0004411b) status_pane_g1

0x9bdd,	// (0x00044127) status_pane_g2_ParamLimits

0x9bdd,	// (0x00044127) status_pane_g2

0x9be9,	// (0x00044133) status_pane_g3_ParamLimits

0x9be9,	// (0x00044133) status_pane_g3

0x0004,

0xf7a5,	// (0x00049cef) status_pane_g_ParamLimits

0xf7a5,	// (0x00049cef) status_pane_g

0x9c1d,	// (0x00044167) title_pane_ParamLimits

0x9c1d,	// (0x00044167) title_pane

0x9c5a,	// (0x000441a4) uni_indicator_pane_ParamLimits

0x9c5a,	// (0x000441a4) uni_indicator_pane

0x9824,	// (0x00043d6e) bg_list_pane_ParamLimits

0x9824,	// (0x00043d6e) bg_list_pane

0x21ad,	// (0x0003c6f7) find_pane

0x9844,	// (0x00043d8e) listscroll_app_pane_ParamLimits

0x9844,	// (0x00043d8e) listscroll_app_pane

0x9850,	// (0x00043d9a) listscroll_form_pane

0x6373,	// (0x000408bd) listscroll_gen_pane_ParamLimits

0x6373,	// (0x000408bd) listscroll_gen_pane

0x6387,	// (0x000408d1) listscroll_set_pane

0x8ab6,	// (0x00043000) main_idle_act_pane

0x9530,	// (0x00043a7a) main_idle_trad_pane

0x9530,	// (0x00043a7a) main_list_empty_pane

0x986a,	// (0x00043db4) main_midp_pane

0x9876,	// (0x00043dc0) main_pane_g1_ParamLimits

0x9876,	// (0x00043dc0) main_pane_g1

0x638f,	// (0x000408d9) popup_ai_message_window_ParamLimits

0x638f,	// (0x000408d9) popup_ai_message_window

0x6433,	// (0x0004097d) popup_fep_china_uni_window_ParamLimits

0x6433,	// (0x0004097d) popup_fep_china_uni_window

0x648d,	// (0x000409d7) popup_fep_japan_candidate_window_ParamLimits

0x648d,	// (0x000409d7) popup_fep_japan_candidate_window

0x64ab,	// (0x000409f5) popup_fep_japan_predictive_window_ParamLimits

0x64ab,	// (0x000409f5) popup_fep_japan_predictive_window

0x64db,	// (0x00040a25) popup_find_window

0x64e8,	// (0x00040a32) popup_grid_graphic_window_ParamLimits

0x64e8,	// (0x00040a32) popup_grid_graphic_window

0x6510,	// (0x00040a5a) popup_large_graphic_colour_window

0x6536,	// (0x00040a80) popup_menu_window_ParamLimits

0x6536,	// (0x00040a80) popup_menu_window

0x66f0,	// (0x00040c3a) popup_note_image_window

0x66dc,	// (0x00040c26) popup_note_wait_window_ParamLimits

0x66dc,	// (0x00040c26) popup_note_wait_window

0x66dc,	// (0x00040c26) popup_note_window_ParamLimits

0x66dc,	// (0x00040c26) popup_note_window

0x6746,	// (0x00040c90) popup_query_code_window_ParamLimits

0x6746,	// (0x00040c90) popup_query_code_window

0x675a,	// (0x00040ca4) popup_query_data_code_window_ParamLimits

0x675a,	// (0x00040ca4) popup_query_data_code_window

0x6775,	// (0x00040cbf) popup_query_data_window_ParamLimits

0x6775,	// (0x00040cbf) popup_query_data_window

0x678f,	// (0x00040cd9) popup_query_sat_info_window_ParamLimits

0x678f,	// (0x00040cd9) popup_query_sat_info_window

0x67c8,	// (0x00040d12) popup_snote_single_graphic_window_ParamLimits

0x67c8,	// (0x00040d12) popup_snote_single_graphic_window

0x67c8,	// (0x00040d12) popup_snote_single_text_window_ParamLimits

0x67c8,	// (0x00040d12) popup_snote_single_text_window

0x67dd,	// (0x00040d27) popup_sub_window_general

0x690b,	// (0x00040e55) popup_window_general_ParamLimits

0x690b,	// (0x00040e55) popup_window_general

0x9884,	// (0x00043dce) power_save_pane

0x6219,	// (0x00040763) control_pane_g1_ParamLimits

0x6219,	// (0x00040763) control_pane_g1

0x6240,	// (0x0004078a) control_pane_g2_ParamLimits

0x6240,	// (0x0004078a) control_pane_g2

0x97e7,	// (0x00043d31) control_pane_g3_ParamLimits

0x97e7,	// (0x00043d31) control_pane_g3

0x0007,

0xf78d,	// (0x00049cd7) control_pane_g_ParamLimits

0xf78d,	// (0x00049cd7) control_pane_g

0x6288,	// (0x000407d2) control_pane_t1_ParamLimits

0x6288,	// (0x000407d2) control_pane_t1

0x62d4,	// (0x0004081e) control_pane_t2_ParamLimits

0x62d4,	// (0x0004081e) control_pane_t2

0x0002,

0xf79e,	// (0x00049ce8) control_pane_t_ParamLimits

0xf79e,	// (0x00049ce8) control_pane_t

0x970c,	// (0x00043c56) navi_navi_volume_pane_cp1

0x9714,	// (0x00043c5e) status_small_icon_pane

0x971c,	// (0x00043c66) status_small_pane_g1_ParamLimits

0x971c,	// (0x00043c66) status_small_pane_g1

0x9750,	// (0x00043c9a) status_small_pane_g2_ParamLimits

0x9750,	// (0x00043c9a) status_small_pane_g2

0x975c,	// (0x00043ca6) status_small_pane_g3_ParamLimits

0x975c,	// (0x00043ca6) status_small_pane_g3

0x9768,	// (0x00043cb2) status_small_pane_g4_ParamLimits

0x9768,	// (0x00043cb2) status_small_pane_g4

0x9774,	// (0x00043cbe) status_small_pane_g5_ParamLimits

0x9774,	// (0x00043cbe) status_small_pane_g5

0x9782,	// (0x00043ccc) status_small_pane_g6_ParamLimits

0x9782,	// (0x00043ccc) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049cc6) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049cc6) status_small_pane_g

0x97b1,	// (0x00043cfb) status_small_pane_t1

0x97d3,	// (0x00043d1d) status_small_wait_pane_ParamLimits

0x97d3,	// (0x00043d1d) status_small_wait_pane

0x8fa6,	// (0x000434f0) aid_levels_signal_ParamLimits

0x8fa6,	// (0x000434f0) aid_levels_signal

0x8fb8,	// (0x00043502) signal_pane_g1_ParamLimits

0x8fb8,	// (0x00043502) signal_pane_g1

0x8fcd,	// (0x00043517) signal_pane_g2_ParamLimits

0x8fcd,	// (0x00043517) signal_pane_g2

0x0003,

0xf70d,	// (0x00049c57) signal_pane_g_ParamLimits

0xf70d,	// (0x00049c57) signal_pane_g

0x9007,	// (0x00043551) context_pane_g1

0x7f8c,	// (0x000424d6) title_pane_g1

0x7fc2,	// (0x0004250c) title_pane_t1

0x802a,	// (0x00042574) title_pane_t2

0x8050,	// (0x0004259a) title_pane_t3

0x0002,

0xf557,	// (0x00049aa1) title_pane_t

0x9c72,	// (0x000441bc) aid_levels_battery_ParamLimits

0x9c72,	// (0x000441bc) aid_levels_battery

0x9c86,	// (0x000441d0) battery_pane_g1_ParamLimits

0x9c86,	// (0x000441d0) battery_pane_g1

0x9c9c,	// (0x000441e6) battery_pane_g2_ParamLimits

0x9c9c,	// (0x000441e6) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049cfa) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049cfa) battery_pane_g

0xaf0f,	// (0x00045459) uni_indicator_pane_g1

0xaf25,	// (0x0004546f) uni_indicator_pane_g2

0xaf3b,	// (0x00045485) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00049e6b) uni_indicator_pane_g

0x93a2,	// (0x000438ec) navi_icon_pane_ParamLimits

0x93a2,	// (0x000438ec) navi_icon_pane

0x92e0,	// (0x0004382a) navi_midp_pane

0x93be,	// (0x00043908) navi_navi_pane

0x93c8,	// (0x00043912) navi_text_pane_ParamLimits

0x93c8,	// (0x00043912) navi_text_pane

0x7f78,	// (0x000424c2) status_small_wait_pane_g1

0x8473,	// (0x000429bd) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00049e66) status_small_wait_pane_g

0xac36,	// (0x00045180) navi_navi_icon_text_pane

0xac3e,	// (0x00045188) navi_navi_pane_g1_ParamLimits

0xac3e,	// (0x00045188) navi_navi_pane_g1

0xac50,	// (0x0004519a) navi_navi_pane_g2_ParamLimits

0xac50,	// (0x0004519a) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00049e34) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00049e34) navi_navi_pane_g

0xac62,	// (0x000451ac) navi_navi_tabs_pane

0xac6b,	// (0x000451b5) navi_navi_text_pane

0xac36,	// (0x00045180) navi_navi_volume_pane

0xac12,	// (0x0004515c) navi_text_pane_t1

0xac06,	// (0x00045150) navi_icon_pane_g1

0xab59,	// (0x000450a3) navi_navi_text_pane_t1

0x6b9b,	// (0x000410e5) navi_navi_volume_pane_g1

0x6ba3,	// (0x000410ed) volume_small_pane

0xaabf,	// (0x00045009) navi_navi_icon_text_pane_g1

0xaac7,	// (0x00045011) navi_navi_icon_text_pane_t1

0x93be,	// (0x00043908) navi_tabs_2_long_pane

0x93be,	// (0x00043908) navi_tabs_2_pane

0x93be,	// (0x00043908) navi_tabs_3_long_pane

0x93be,	// (0x00043908) navi_tabs_3_pane

0x93be,	// (0x00043908) navi_tabs_4_pane

0x6b7b,	// (0x000410c5) tabs_2_active_pane_ParamLimits

0x6b7b,	// (0x000410c5) tabs_2_active_pane

0x6b8b,	// (0x000410d5) tabs_2_passive_pane_ParamLimits

0x6b8b,	// (0x000410d5) tabs_2_passive_pane

0x6b49,	// (0x00041093) tabs_3_active_pane_ParamLimits

0x6b49,	// (0x00041093) tabs_3_active_pane

0x6b59,	// (0x000410a3) tabs_3_passive_pane_ParamLimits

0x6b59,	// (0x000410a3) tabs_3_passive_pane

0x6b6a,	// (0x000410b4) tabs_3_passive_pane_cp_ParamLimits

0x6b6a,	// (0x000410b4) tabs_3_passive_pane_cp

0x6b05,	// (0x0004104f) tabs_4_active_pane_ParamLimits

0x6b05,	// (0x0004104f) tabs_4_active_pane

0x6b16,	// (0x00041060) tabs_4_passive_pane_ParamLimits

0x6b16,	// (0x00041060) tabs_4_passive_pane

0x6b27,	// (0x00041071) tabs_4_passive_pane_cp_ParamLimits

0x6b27,	// (0x00041071) tabs_4_passive_pane_cp

0x6b38,	// (0x00041082) tabs_4_passive_pane_cp2_ParamLimits

0x6b38,	// (0x00041082) tabs_4_passive_pane_cp2

0x6ae1,	// (0x0004102b) tabs_2_long_active_pane_ParamLimits

0x6ae1,	// (0x0004102b) tabs_2_long_active_pane

0x6af3,	// (0x0004103d) tabs_2_long_passive_pane_ParamLimits

0x6af3,	// (0x0004103d) tabs_2_long_passive_pane

0x6aa8,	// (0x00040ff2) tabs_3_long_active_pane_ParamLimits

0x6aa8,	// (0x00040ff2) tabs_3_long_active_pane

0x6abb,	// (0x00041005) tabs_3_long_passive_pane_ParamLimits

0x6abb,	// (0x00041005) tabs_3_long_passive_pane

0x6ace,	// (0x00041018) tabs_3_long_passive_pane_cp_ParamLimits

0x6ace,	// (0x00041018) tabs_3_long_passive_pane_cp

0x6a4e,	// (0x00040f98) volume_small_pane_g1

0x6a57,	// (0x00040fa1) volume_small_pane_g2

0x6a60,	// (0x00040faa) volume_small_pane_g3

0x6a69,	// (0x00040fb3) volume_small_pane_g4

0x6a72,	// (0x00040fbc) volume_small_pane_g5

0x6a7b,	// (0x00040fc5) volume_small_pane_g6

0x6a84,	// (0x00040fce) volume_small_pane_g7

0x6a8d,	// (0x00040fd7) volume_small_pane_g8

0x6a96,	// (0x00040fe0) volume_small_pane_g9

0x6a9f,	// (0x00040fe9) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00049e00) volume_small_pane_g

0x8062,	// (0x000425ac) bg_active_tab_pane_cp2_ParamLimits

0x8062,	// (0x000425ac) bg_active_tab_pane_cp2

0x8070,	// (0x000425ba) tabs_3_active_pane_g1

0x8078,	// (0x000425c2) tabs_3_active_pane_t1

0x8062,	// (0x000425ac) bg_passive_tab_pane_cp2_ParamLimits

0x8062,	// (0x000425ac) bg_passive_tab_pane_cp2

0x8070,	// (0x000425ba) tabs_3_passive_pane_g1

0x8078,	// (0x000425c2) tabs_3_passive_pane_t1

0x8062,	// (0x000425ac) bg_active_tab_pane_cp3_ParamLimits

0x8062,	// (0x000425ac) bg_active_tab_pane_cp3

0x808a,	// (0x000425d4) tabs_4_active_pane_g1

0x8092,	// (0x000425dc) tabs_4_active_pane_t1

0x8062,	// (0x000425ac) bg_passive_tab_pane_cp3_ParamLimits

0x8062,	// (0x000425ac) bg_passive_tab_pane_cp3

0x808a,	// (0x000425d4) tabs_4_1_passive_pane_g1

0x8092,	// (0x000425dc) tabs_4_1_passive_pane_t1

0x986a,	// (0x00043db4) list_highlight_pane_cp2

0xb17f,	// (0x000456c9) list_set_pane_ParamLimits

0xb17f,	// (0x000456c9) list_set_pane

0xb221,	// (0x0004576b) main_pane_set_t1_ParamLimits

0xb221,	// (0x0004576b) main_pane_set_t1

0xb241,	// (0x0004578b) main_pane_set_t2_ParamLimits

0xb241,	// (0x0004578b) main_pane_set_t2

0xb255,	// (0x0004579f) main_pane_set_t3_ParamLimits

0xb255,	// (0x0004579f) main_pane_set_t3

0xb267,	// (0x000457b1) main_pane_set_t4_ParamLimits

0xb267,	// (0x000457b1) main_pane_set_t4

0x0003,

0xf986,	// (0x00049ed0) main_pane_set_t_ParamLimits

0xf986,	// (0x00049ed0) main_pane_set_t

0xb279,	// (0x000457c3) setting_code_pane

0xb283,	// (0x000457cd) setting_slider_graphic_pane

0xb283,	// (0x000457cd) setting_slider_pane

0xb283,	// (0x000457cd) setting_text_pane

0xb283,	// (0x000457cd) setting_volume_pane

0x5c40,	// (0x0004018a) volume_set_pane

0x8062,	// (0x000425ac) bg_set_opt_pane_cp

0x5c48,	// (0x00040192) setting_slider_pane_t1

0x5c61,	// (0x000401ab) setting_slider_pane_t2

0x5c7b,	// (0x000401c5) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00049aa8) setting_slider_pane_t

0x5c93,	// (0x000401dd) slider_set_pane

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp2

0x80a4,	// (0x000425ee) setting_slider_graphic_pane_g1

0x5ca9,	// (0x000401f3) setting_slider_graphic_pane_t1

0x5cb9,	// (0x00040203) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00049aaf) setting_slider_graphic_pane_t

0x5cc9,	// (0x00040213) slider_set_pane_cp

0x7f82,	// (0x000424cc) input_focus_pane_cp1

0xb13e,	// (0x00045688) list_set_text_pane

0x7f78,	// (0x000424c2) setting_text_pane_g1

0x7f82,	// (0x000424cc) input_focus_pane_cp2

0x7f78,	// (0x000424c2) setting_code_pane_g1

0x80ad,	// (0x000425f7) setting_code_pane_t1

0x49c3,	// (0x0003ef0d) set_text_pane_t1_ParamLimits

0x49c3,	// (0x0003ef0d) set_text_pane_t1

0x892f,	// (0x00042e79) set_opt_bg_pane_g1

0x8937,	// (0x00042e81) set_opt_bg_pane_g2

0xb11e,	// (0x00045668) set_opt_bg_pane_g3

0x8947,	// (0x00042e91) set_opt_bg_pane_g4

0x894f,	// (0x00042e99) set_opt_bg_pane_g5

0x8957,	// (0x00042ea1) set_opt_bg_pane_g6

0xb126,	// (0x00045670) set_opt_bg_pane_g7

0xb12e,	// (0x00045678) set_opt_bg_pane_g8

0xb136,	// (0x00045680) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00049ebd) set_opt_bg_pane_g

0xb111,	// (0x0004565b) slider_set_pane_g1

0x6c10,	// (0x0004115a) slider_set_pane_g2

0x0006,

0xf964,	// (0x00049eae) slider_set_pane_g

0x6bac,	// (0x000410f6) volume_set_pane_g1

0x6bb4,	// (0x000410fe) volume_set_pane_g2

0x6bbc,	// (0x00041106) volume_set_pane_g3

0x6bc4,	// (0x0004110e) volume_set_pane_g4

0x6bcc,	// (0x00041116) volume_set_pane_g5

0x6bd4,	// (0x0004111e) volume_set_pane_g6

0x6bdc,	// (0x00041126) volume_set_pane_g7

0x6be4,	// (0x0004112e) volume_set_pane_g8

0x6bec,	// (0x00041136) volume_set_pane_g9

0x6bf4,	// (0x0004113e) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00049e86) volume_set_pane_g

0x80bb,	// (0x00042605) indicator_pane_ParamLimits

0x80bb,	// (0x00042605) indicator_pane

0x80c7,	// (0x00042611) main_idle_pane_g2_ParamLimits

0x80c7,	// (0x00042611) main_idle_pane_g2

0x80ef,	// (0x00042639) main_pane_idle_g1_ParamLimits

0x80ef,	// (0x00042639) main_pane_idle_g1

0x80fc,	// (0x00042646) popup_clock_digital_analogue_window_ParamLimits

0x80fc,	// (0x00042646) popup_clock_digital_analogue_window

0x8113,	// (0x0004265d) soft_indicator_pane_ParamLimits

0x8113,	// (0x0004265d) soft_indicator_pane

0x811f,	// (0x00042669) wallpaper_pane_ParamLimits

0x811f,	// (0x00042669) wallpaper_pane

0x7f78,	// (0x000424c2) wallpaper_pane_g1

0x8133,	// (0x0004267d) indicator_pane_g1_ParamLimits

0x8133,	// (0x0004267d) indicator_pane_g1

0xb4da,	// (0x00045a24) navi_navi_icon_text_pane_srt_g1

0x814e,	// (0x00042698) soft_indicator_pane_t1

0x8168,	// (0x000426b2) aid_ps_area_pane

0x8179,	// (0x000426c3) aid_ps_clock_pane

0x8187,	// (0x000426d1) aid_ps_indicator_pane

0x8193,	// (0x000426dd) indicator_ps_pane_ParamLimits

0x8193,	// (0x000426dd) indicator_ps_pane

0x81a2,	// (0x000426ec) power_save_pane_g1_ParamLimits

0x81a2,	// (0x000426ec) power_save_pane_g1

0x81ae,	// (0x000426f8) power_save_pane_g2_ParamLimits

0x81ae,	// (0x000426f8) power_save_pane_g2

0x585f,	// (0x0003fda9) aid_navinavi_width_pane

0x8168,	// (0x000426b2) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00049ab4) power_save_pane_g_ParamLimits

0xf56a,	// (0x00049ab4) power_save_pane_g

0x81bc,	// (0x00042706) power_save_pane_t1_ParamLimits

0x81bc,	// (0x00042706) power_save_pane_t1

0x8179,	// (0x000426c3) aid_ps_clock_pane_ParamLimits

0x8187,	// (0x000426d1) aid_ps_indicator_pane_ParamLimits

0x81ce,	// (0x00042718) power_save_pane_t4_ParamLimits

0x81ce,	// (0x00042718) power_save_pane_t4

0x0001,

0xf56f,	// (0x00049ab9) power_save_pane_t_ParamLimits

0xf56f,	// (0x00049ab9) power_save_pane_t

0x81f8,	// (0x00042742) power_save_t3_ParamLimits

0x81f8,	// (0x00042742) power_save_t3

0x81e3,	// (0x0004272d) power_save_t2_ParamLimits

0x81e3,	// (0x0004272d) power_save_t2

0x820d,	// (0x00042757) indicator_ps_pane_g1

0x8216,	// (0x00042760) ai_gene_pane_ParamLimits

0x8216,	// (0x00042760) ai_gene_pane

0x8222,	// (0x0004276c) ai_links_pane_ParamLimits

0x8222,	// (0x0004276c) ai_links_pane

0x822e,	// (0x00042778) indicator_pane_cp1_ParamLimits

0x822e,	// (0x00042778) indicator_pane_cp1

0x823a,	// (0x00042784) main_pane_idle_g1_cp_ParamLimits

0x823a,	// (0x00042784) main_pane_idle_g1_cp

0x8246,	// (0x00042790) popup_ai_links_title_window

0x824f,	// (0x00042799) soft_indicator_pane_cp1_ParamLimits

0x824f,	// (0x00042799) soft_indicator_pane_cp1

0xaefd,	// (0x00045447) ai_links_pane_g1

0xaf06,	// (0x00045450) grid_ai_links_pane

0xaee0,	// (0x0004542a) ai_gene_pane_1

0xaeeb,	// (0x00045435) ai_gene_pane_2

0xaef4,	// (0x0004543e) list_highlight_pane_cp4

0xaec4,	// (0x0004540e) cell_ai_link_pane_ParamLimits

0xaec4,	// (0x0004540e) cell_ai_link_pane

0xaebc,	// (0x00045406) cell_ai_link_pane_g1

0x8473,	// (0x000429bd) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00049e61) cell_ai_link_pane_g

0x7f82,	// (0x000424cc) grid_highlight_cp2

0x7f82,	// (0x000424cc) bg_popup_sub_pane_cp1

0x8269,	// (0x000427b3) popup_ai_links_title_window_t1

0xae0c,	// (0x00045356) ai_gene_pane_1_g1_ParamLimits

0xae0c,	// (0x00045356) ai_gene_pane_1_g1

0xae18,	// (0x00045362) ai_gene_pane_1_g2_ParamLimits

0xae18,	// (0x00045362) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00049e57) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00049e57) ai_gene_pane_1_g

0xae25,	// (0x0004536f) ai_gene_pane_1_t1_ParamLimits

0xae25,	// (0x0004536f) ai_gene_pane_1_t1

0xae59,	// (0x000453a3) grid_ai_soft_ind_pane

0xadf7,	// (0x00045341) ai_gene_pane_2_t1_ParamLimits

0xadf7,	// (0x00045341) ai_gene_pane_2_t1

0x8278,	// (0x000427c2) main_pane_empty_t1_ParamLimits

0x8278,	// (0x000427c2) main_pane_empty_t1

0x8290,	// (0x000427da) main_pane_empty_t2_ParamLimits

0x8290,	// (0x000427da) main_pane_empty_t2

0x82a5,	// (0x000427ef) main_pane_empty_t3_ParamLimits

0x82a5,	// (0x000427ef) main_pane_empty_t3

0x82b7,	// (0x00042801) main_pane_empty_t4_ParamLimits

0x82b7,	// (0x00042801) main_pane_empty_t4

0x82c9,	// (0x00042813) main_pane_empty_t5_ParamLimits

0x82c9,	// (0x00042813) main_pane_empty_t5

0x0004,

0xf574,	// (0x00049abe) main_pane_empty_t_ParamLimits

0xf574,	// (0x00049abe) main_pane_empty_t

0x8980,	// (0x00042eca) bg_popup_window_pane_ParamLimits

0x8980,	// (0x00042eca) bg_popup_window_pane

0xab67,	// (0x000450b1) find_popup_pane_cp2_ParamLimits

0xab67,	// (0x000450b1) find_popup_pane_cp2

0xab73,	// (0x000450bd) heading_pane_ParamLimits

0xab73,	// (0x000450bd) heading_pane

0x7f82,	// (0x000424cc) bg_popup_sub_pane

0xaae1,	// (0x0004502b) bg_popup_window_pane_g1_ParamLimits

0xaae1,	// (0x0004502b) bg_popup_window_pane_g1

0xaaed,	// (0x00045037) bg_popup_window_pane_g2_ParamLimits

0xaaed,	// (0x00045037) bg_popup_window_pane_g2

0xaaf9,	// (0x00045043) bg_popup_window_pane_g3_ParamLimits

0xaaf9,	// (0x00045043) bg_popup_window_pane_g3

0xab05,	// (0x0004504f) bg_popup_window_pane_g4_ParamLimits

0xab05,	// (0x0004504f) bg_popup_window_pane_g4

0xab11,	// (0x0004505b) bg_popup_window_pane_g5_ParamLimits

0xab11,	// (0x0004505b) bg_popup_window_pane_g5

0xab1d,	// (0x00045067) bg_popup_window_pane_g6_ParamLimits

0xab1d,	// (0x00045067) bg_popup_window_pane_g6

0xab29,	// (0x00045073) bg_popup_window_pane_g7_ParamLimits

0xab29,	// (0x00045073) bg_popup_window_pane_g7

0xab35,	// (0x0004507f) bg_popup_window_pane_g8_ParamLimits

0xab35,	// (0x0004507f) bg_popup_window_pane_g8

0xab41,	// (0x0004508b) bg_popup_window_pane_g9_ParamLimits

0xab41,	// (0x0004508b) bg_popup_window_pane_g9

0xab4d,	// (0x00045097) bg_popup_window_pane_g10_ParamLimits

0xab4d,	// (0x00045097) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00049e1f) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00049e1f) bg_popup_window_pane_g

0xaa76,	// (0x00044fc0) bg_popup_heading_pane_ParamLimits

0xaa76,	// (0x00044fc0) bg_popup_heading_pane

0x6daa,	// (0x000412f4) tabs_4_passive_pane_cp_srt_ParamLimits

0x6daa,	// (0x000412f4) tabs_4_passive_pane_cp_srt

0x6dbc,	// (0x00041306) tabs_4_passive_pane_srt_ParamLimits

0xaa8a,	// (0x00044fd4) heading_pane_g2

0x6dbc,	// (0x00041306) tabs_4_passive_pane_srt

0x986a,	// (0x00043db4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x986a,	// (0x00043db4) bg_passive_tab_pane_cp3_srt

0xaa92,	// (0x00044fdc) heading_pane_t1_ParamLimits

0xaa92,	// (0x00044fdc) heading_pane_t1

0xaaa9,	// (0x00044ff3) heading_pane_t2_ParamLimits

0xaaa9,	// (0x00044ff3) heading_pane_t2

0x0001,

0xf8d0,	// (0x00049e1a) heading_pane_t_ParamLimits

0xf8d0,	// (0x00049e1a) heading_pane_t

0xa5a3,	// (0x00044aed) bg_popup_heading_pane_g1

0xa652,	// (0x00044b9c) bg_popup_heading_pane_g2

0xa65c,	// (0x00044ba6) bg_popup_heading_pane_g3

0xa666,	// (0x00044bb0) bg_popup_heading_pane_g4

0xa670,	// (0x00044bba) bg_popup_heading_pane_g5

0xa67a,	// (0x00044bc4) bg_popup_heading_pane_g6

0xa682,	// (0x00044bcc) bg_popup_heading_pane_g7

0xa68a,	// (0x00044bd4) bg_popup_heading_pane_g8

0xa694,	// (0x00044bde) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00049dd6) bg_popup_heading_pane_g

0x9d74,	// (0x000442be) bg_popup_sub_pane_g1

0x9d7c,	// (0x000442c6) bg_popup_sub_pane_g2

0x9d84,	// (0x000442ce) bg_popup_sub_pane_g3

0x9d8c,	// (0x000442d6) bg_popup_sub_pane_g4

0x9d94,	// (0x000442de) bg_popup_sub_pane_g5

0x9d9c,	// (0x000442e6) bg_popup_sub_pane_g6

0x9da4,	// (0x000442ee) bg_popup_sub_pane_g7

0x9dac,	// (0x000442f6) bg_popup_sub_pane_g8

0x9db4,	// (0x000442fe) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00049db0) bg_popup_sub_pane_g

0x82dd,	// (0x00042827) bg_popup_window_pane_cp5_ParamLimits

0x82dd,	// (0x00042827) bg_popup_window_pane_cp5

0x82f9,	// (0x00042843) popup_note_window_g1_ParamLimits

0x82f9,	// (0x00042843) popup_note_window_g1

0x8305,	// (0x0004284f) popup_note_window_t1_ParamLimits

0x8305,	// (0x0004284f) popup_note_window_t1

0x8317,	// (0x00042861) popup_note_window_t2_ParamLimits

0x8317,	// (0x00042861) popup_note_window_t2

0x8329,	// (0x00042873) popup_note_window_t3_ParamLimits

0x8329,	// (0x00042873) popup_note_window_t3

0x833b,	// (0x00042885) popup_note_window_t4_ParamLimits

0x833b,	// (0x00042885) popup_note_window_t4

0x8363,	// (0x000428ad) popup_note_window_t5_ParamLimits

0x8363,	// (0x000428ad) popup_note_window_t5

0x0004,

0xf57f,	// (0x00049ac9) popup_note_window_t_ParamLimits

0xf57f,	// (0x00049ac9) popup_note_window_t

0x8387,	// (0x000428d1) bg_popup_window_pane_cp6_ParamLimits

0x8387,	// (0x000428d1) bg_popup_window_pane_cp6

0xa517,	// (0x00044a61) popup_note_image_window_g1_ParamLimits

0xa517,	// (0x00044a61) popup_note_image_window_g1

0xa523,	// (0x00044a6d) popup_note_image_window_g2_ParamLimits

0xa523,	// (0x00044a6d) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00049da4) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00049da4) popup_note_image_window_g

0xa53c,	// (0x00044a86) popup_note_image_window_t1_ParamLimits

0xa53c,	// (0x00044a86) popup_note_image_window_t1

0xa555,	// (0x00044a9f) popup_note_image_window_t2_ParamLimits

0xa555,	// (0x00044a9f) popup_note_image_window_t2

0xa56e,	// (0x00044ab8) popup_note_image_window_t3_ParamLimits

0xa56e,	// (0x00044ab8) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00049da9) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00049da9) popup_note_image_window_t

0xa3d8,	// (0x00044922) bg_popup_window_pane_cp7_ParamLimits

0xa3d8,	// (0x00044922) bg_popup_window_pane_cp7

0xa408,	// (0x00044952) popup_note_wait_window_g1_ParamLimits

0xa408,	// (0x00044952) popup_note_wait_window_g1

0xa414,	// (0x0004495e) popup_note_wait_window_g2_ParamLimits

0xa414,	// (0x0004495e) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00049d92) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00049d92) popup_note_wait_window_g

0xa42c,	// (0x00044976) popup_note_wait_window_t1_ParamLimits

0xa42c,	// (0x00044976) popup_note_wait_window_t1

0xa453,	// (0x0004499d) popup_note_wait_window_t2_ParamLimits

0xa453,	// (0x0004499d) popup_note_wait_window_t2

0xa470,	// (0x000449ba) popup_note_wait_window_t3_ParamLimits

0xa470,	// (0x000449ba) popup_note_wait_window_t3

0xa483,	// (0x000449cd) popup_note_wait_window_t4_ParamLimits

0xa483,	// (0x000449cd) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00049d99) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00049d99) popup_note_wait_window_t

0xa4a8,	// (0x000449f2) wait_bar_pane_ParamLimits

0xa4a8,	// (0x000449f2) wait_bar_pane

0x7f82,	// (0x000424cc) wait_anim_pane

0x7f82,	// (0x000424cc) wait_border_pane

0x7f78,	// (0x000424c2) wait_anim_pane_g1

0x7f78,	// (0x000424c2) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00049c52) wait_anim_pane_g

0xa37c,	// (0x000448c6) wait_border_pane_g1

0xa387,	// (0x000448d1) wait_border_pane_g2

0xa390,	// (0x000448da) wait_border_pane_g3

0x0002,

0xf841,	// (0x00049d8b) wait_border_pane_g

0xa1ec,	// (0x00044736) bg_popup_window_pane_cp16_ParamLimits

0xa1ec,	// (0x00044736) bg_popup_window_pane_cp16

0xa2ec,	// (0x00044836) indicator_popup_pane_cp4_ParamLimits

0xa2ec,	// (0x00044836) indicator_popup_pane_cp4

0xa300,	// (0x0004484a) popup_query_data_window_t1_ParamLimits

0xa300,	// (0x0004484a) popup_query_data_window_t1

0xa312,	// (0x0004485c) popup_query_data_window_t2_ParamLimits

0xa312,	// (0x0004485c) popup_query_data_window_t2

0xa32b,	// (0x00044875) popup_query_data_window_t3_ParamLimits

0xa32b,	// (0x00044875) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00049d84) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00049d84) popup_query_data_window_t

0xa345,	// (0x0004488f) query_popup_data_pane_ParamLimits

0xa345,	// (0x0004488f) query_popup_data_pane

0xa359,	// (0x000448a3) query_popup_data_pane_cp1_ParamLimits

0xa359,	// (0x000448a3) query_popup_data_pane_cp1

0xa1ec,	// (0x00044736) bg_popup_window_pane_cp10_ParamLimits

0xa1ec,	// (0x00044736) bg_popup_window_pane_cp10

0xa21e,	// (0x00044768) indicator_popup_pane_ParamLimits

0xa21e,	// (0x00044768) indicator_popup_pane

0xa240,	// (0x0004478a) popup_query_code_window_t1_ParamLimits

0xa240,	// (0x0004478a) popup_query_code_window_t1

0xa25a,	// (0x000447a4) popup_query_code_window_t2_ParamLimits

0xa25a,	// (0x000447a4) popup_query_code_window_t2

0xa2a3,	// (0x000447ed) popup_query_code_window_t3_ParamLimits

0xa2a3,	// (0x000447ed) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00049d7d) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00049d7d) popup_query_code_window_t

0xa2d2,	// (0x0004481c) query_popup_pane_ParamLimits

0xa2d2,	// (0x0004481c) query_popup_pane

0x8387,	// (0x000428d1) bg_popup_window_pane_cp15_ParamLimits

0x8387,	// (0x000428d1) bg_popup_window_pane_cp15

0x83a5,	// (0x000428ef) indicator_popup_pane_cp1_ParamLimits

0x83a5,	// (0x000428ef) indicator_popup_pane_cp1

0x83b8,	// (0x00042902) indicator_popup_pane_cp2_ParamLimits

0x83b8,	// (0x00042902) indicator_popup_pane_cp2

0x83cb,	// (0x00042915) popup_query_data_code_window_g1_ParamLimits

0x83cb,	// (0x00042915) popup_query_data_code_window_g1

0x83de,	// (0x00042928) popup_query_data_code_window_t1_ParamLimits

0x83de,	// (0x00042928) popup_query_data_code_window_t1

0x83f0,	// (0x0004293a) popup_query_data_code_window_t2_ParamLimits

0x83f0,	// (0x0004293a) popup_query_data_code_window_t2

0x8402,	// (0x0004294c) popup_query_data_code_window_t3_ParamLimits

0x8402,	// (0x0004294c) popup_query_data_code_window_t3

0x8418,	// (0x00042962) popup_query_data_code_window_t4_ParamLimits

0x8418,	// (0x00042962) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00049ad4) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00049ad4) popup_query_data_code_window_t

0x9360,	// (0x000438aa) list_single_midp_graphic_pane_g3

0x8430,	// (0x0004297a) query_popup_data_pane_cp2_ParamLimits

0x8443,	// (0x0004298d) query_popup_pane_cp2_ParamLimits

0x8443,	// (0x0004298d) query_popup_pane_cp2

0x7f82,	// (0x000424cc) bg_popup_window_pane_cp11

0xa1e4,	// (0x0004472e) heading_pane_cp5

0x852e,	// (0x00042a78) listscroll_popup_info_pane

0x7f82,	// (0x000424cc) input_focus_pane_cp3

0x8456,	// (0x000429a0) query_popup_pane_t1

0x8464,	// (0x000429ae) list_popup_info_pane_ParamLimits

0x8464,	// (0x000429ae) list_popup_info_pane

0x8473,	// (0x000429bd) listscroll_popup_info_pane_g1

0x847b,	// (0x000429c5) scroll_pane_cp7

0x8485,	// (0x000429cf) popup_info_list_pane_t1_ParamLimits

0x8485,	// (0x000429cf) popup_info_list_pane_t1

0x849f,	// (0x000429e9) popup_info_list_pane_t2_ParamLimits

0x849f,	// (0x000429e9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00049add) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00049add) popup_info_list_pane_t

0x7f82,	// (0x000424cc) bg_popup_window_pane_cp12

0xb4f4,	// (0x00045a3e) find_popup_pane

0x8062,	// (0x000425ac) bg_popup_window_pane_cp3

0x84b9,	// (0x00042a03) heading_pane_cp3

0x84c5,	// (0x00042a0f) listscroll_popup_graphic_pane

0x7f82,	// (0x000424cc) bg_popup_window_pane_cp4

0x8524,	// (0x00042a6e) heading_pane_cp4

0x852e,	// (0x00042a78) listscroll_popup_colour_pane

0x8536,	// (0x00042a80) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8536,	// (0x00042a80) cell_large_graphic_colour_none_popup_pane

0x854a,	// (0x00042a94) grid_large_graphic_colour_popup_pane_ParamLimits

0x854a,	// (0x00042a94) grid_large_graphic_colour_popup_pane

0x8572,	// (0x00042abc) listscroll_popup_colour_pane_g1_ParamLimits

0x8572,	// (0x00042abc) listscroll_popup_colour_pane_g1

0x8589,	// (0x00042ad3) listscroll_popup_colour_pane_g2_ParamLimits

0x8589,	// (0x00042ad3) listscroll_popup_colour_pane_g2

0x85a0,	// (0x00042aea) listscroll_popup_colour_pane_g3_ParamLimits

0x85a0,	// (0x00042aea) listscroll_popup_colour_pane_g3

0x85b0,	// (0x00042afa) listscroll_popup_colour_pane_g4_ParamLimits

0x85b0,	// (0x00042afa) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00049ae2) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00049ae2) listscroll_popup_colour_pane_g

0x85bf,	// (0x00042b09) scroll_pane_cp6_ParamLimits

0x85bf,	// (0x00042b09) scroll_pane_cp6

0x85d1,	// (0x00042b1b) cell_large_graphic_colour_popup_pane_ParamLimits

0x85d1,	// (0x00042b1b) cell_large_graphic_colour_popup_pane

0x85f0,	// (0x00042b3a) cell_large_graphic_colour_none_popup_pane_t1

0x7f82,	// (0x000424cc) grid_highlight_pane_cp5

0x85ff,	// (0x00042b49) cell_large_graphic_colour_popup_pane_g1

0x8607,	// (0x00042b51) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00049aeb) cell_large_graphic_colour_popup_pane_g

0x860f,	// (0x00042b59) cell_large_graphic_colour_popup_pane_g2_copy1

0x8618,	// (0x00042b62) grid_highlight_pane_cp4

0x8620,	// (0x00042b6a) bg_popup_window_pane_cp8_ParamLimits

0x8620,	// (0x00042b6a) bg_popup_window_pane_cp8

0x863b,	// (0x00042b85) popup_snote_single_text_window_g1_ParamLimits

0x863b,	// (0x00042b85) popup_snote_single_text_window_g1

0x864d,	// (0x00042b97) popup_snote_single_text_window_t1_ParamLimits

0x864d,	// (0x00042b97) popup_snote_single_text_window_t1

0x8660,	// (0x00042baa) popup_snote_single_text_window_t2_ParamLimits

0x8660,	// (0x00042baa) popup_snote_single_text_window_t2

0x8673,	// (0x00042bbd) popup_snote_single_text_window_t3_ParamLimits

0x8673,	// (0x00042bbd) popup_snote_single_text_window_t3

0x86ac,	// (0x00042bf6) popup_snote_single_text_window_t4_ParamLimits

0x86ac,	// (0x00042bf6) popup_snote_single_text_window_t4

0x86e0,	// (0x00042c2a) popup_snote_single_text_window_t5_ParamLimits

0x86e0,	// (0x00042c2a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00049af0) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00049af0) popup_snote_single_text_window_t

0x870f,	// (0x00042c59) bg_popup_window_pane_cp9_ParamLimits

0x870f,	// (0x00042c59) bg_popup_window_pane_cp9

0x863b,	// (0x00042b85) popup_snote_single_graphic_window_g1_ParamLimits

0x863b,	// (0x00042b85) popup_snote_single_graphic_window_g1

0x871d,	// (0x00042c67) popup_snote_single_graphic_window_g2_ParamLimits

0x871d,	// (0x00042c67) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00049afb) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00049afb) popup_snote_single_graphic_window_g

0x8729,	// (0x00042c73) popup_snote_single_graphic_window_t1_ParamLimits

0x8729,	// (0x00042c73) popup_snote_single_graphic_window_t1

0x873c,	// (0x00042c86) popup_snote_single_graphic_window_t2_ParamLimits

0x873c,	// (0x00042c86) popup_snote_single_graphic_window_t2

0x874f,	// (0x00042c99) popup_snote_single_graphic_window_t3_ParamLimits

0x874f,	// (0x00042c99) popup_snote_single_graphic_window_t3

0x8788,	// (0x00042cd2) popup_snote_single_graphic_window_t4_ParamLimits

0x8788,	// (0x00042cd2) popup_snote_single_graphic_window_t4

0x87bc,	// (0x00042d06) popup_snote_single_graphic_window_t5_ParamLimits

0x87bc,	// (0x00042d06) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00049b00) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00049b00) popup_snote_single_graphic_window_t

0xb437,	// (0x00045981) grid_graphic_popup_pane_ParamLimits

0xb437,	// (0x00045981) grid_graphic_popup_pane

0xb460,	// (0x000459aa) listscroll_popup_graphic_pane_g1_ParamLimits

0xb460,	// (0x000459aa) listscroll_popup_graphic_pane_g1

0xb474,	// (0x000459be) listscroll_popup_graphic_pane_g2_ParamLimits

0xb474,	// (0x000459be) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00049efa) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00049efa) listscroll_popup_graphic_pane_g

0xb488,	// (0x000459d2) scroll_pane_cp5

0xb3d7,	// (0x00045921) cell_graphic_popup_pane_ParamLimits

0xb3d7,	// (0x00045921) cell_graphic_popup_pane

0xb3b8,	// (0x00045902) cell_graphic_popup_pane_g1

0xb3c0,	// (0x0004590a) cell_graphic_popup_pane_g2

0x860f,	// (0x00042b59) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00049ef3) cell_graphic_popup_pane_g

0xb3c9,	// (0x00045913) cell_graphic_popup_pane_t2

0x8618,	// (0x00042b62) grid_highlight_pane_cp3

0x87fd,	// (0x00042d47) list_gen_pane_ParamLimits

0x87fd,	// (0x00042d47) list_gen_pane

0x882f,	// (0x00042d79) scroll_pane

0xb31a,	// (0x00045864) bg_list_pane_g1_ParamLimits

0xb31a,	// (0x00045864) bg_list_pane_g1

0xb335,	// (0x0004587f) bg_list_pane_g2_ParamLimits

0xb335,	// (0x0004587f) bg_list_pane_g2

0xb348,	// (0x00045892) bg_list_pane_g3_ParamLimits

0xb348,	// (0x00045892) bg_list_pane_g3

0xb35a,	// (0x000458a4) bg_list_pane_g4_ParamLimits

0xb35a,	// (0x000458a4) bg_list_pane_g4

0xb36c,	// (0x000458b6) bg_list_pane_g5_ParamLimits

0xb36c,	// (0x000458b6) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00049ee8) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00049ee8) bg_list_pane_g

0x6c74,	// (0x000411be) list_double2_graphic_large_graphic_pane_ParamLimits

0x6c74,	// (0x000411be) list_double2_graphic_large_graphic_pane

0x6c74,	// (0x000411be) list_double2_graphic_pane_ParamLimits

0x6c74,	// (0x000411be) list_double2_graphic_pane

0x6c74,	// (0x000411be) list_double2_large_graphic_pane_ParamLimits

0x6c74,	// (0x000411be) list_double2_large_graphic_pane

0x6c74,	// (0x000411be) list_double2_pane_ParamLimits

0x6c74,	// (0x000411be) list_double2_pane

0x6c74,	// (0x000411be) list_double_graphic_heading_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_graphic_heading_pane

0x6c74,	// (0x000411be) list_double_graphic_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_graphic_pane

0x6c74,	// (0x000411be) list_double_heading_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_heading_pane

0x6c74,	// (0x000411be) list_double_large_graphic_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_large_graphic_pane

0x6c74,	// (0x000411be) list_double_number_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_number_pane

0x6c74,	// (0x000411be) list_double_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_pane

0x6c74,	// (0x000411be) list_double_time_pane_ParamLimits

0x6c74,	// (0x000411be) list_double_time_pane

0x6c74,	// (0x000411be) list_setting_number_pane_ParamLimits

0x6c74,	// (0x000411be) list_setting_number_pane

0x6c74,	// (0x000411be) list_setting_pane_ParamLimits

0x6c74,	// (0x000411be) list_setting_pane

0x6ce2,	// (0x0004122c) list_single_2graphic_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_2graphic_pane

0x6ce2,	// (0x0004122c) list_single_graphic_heading_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_graphic_heading_pane

0x6ce2,	// (0x0004122c) list_single_graphic_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_graphic_pane

0x6ce2,	// (0x0004122c) list_single_heading_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_heading_pane

0x6d63,	// (0x000412ad) list_single_large_graphic_pane_ParamLimits

0x6d63,	// (0x000412ad) list_single_large_graphic_pane

0x6ce2,	// (0x0004122c) list_single_number_heading_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_number_heading_pane

0x6ce2,	// (0x0004122c) list_single_number_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_number_pane

0x6ce2,	// (0x0004122c) list_single_pane_ParamLimits

0x6ce2,	// (0x0004122c) list_single_pane

0x7f82,	// (0x000424cc) list_highlight_pane_cp1

0x5cd1,	// (0x0004021b) list_single_pane_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_single_pane_g1

0x5cdd,	// (0x00040227) list_single_pane_g2_ParamLimits

0x5cdd,	// (0x00040227) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_single_pane_g

0x52cf,	// (0x0003f819) list_single_pane_t1_ParamLimits

0x52cf,	// (0x0003f819) list_single_pane_t1

0x5cd1,	// (0x0004021b) list_single_number_pane_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_single_number_pane_g1

0x5cdd,	// (0x00040227) list_single_number_pane_g2_ParamLimits

0x5cdd,	// (0x00040227) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_single_number_pane_g

0x519e,	// (0x0003f6e8) list_single_number_pane_t1_ParamLimits

0x519e,	// (0x0003f6e8) list_single_number_pane_t1

0x528d,	// (0x0003f7d7) list_single_number_pane_t2_ParamLimits

0x528d,	// (0x0003f7d7) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00049ea9) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00049ea9) list_single_number_pane_t

0x49dc,	// (0x0003ef26) list_single_graphic_pane_g1_ParamLimits

0x49dc,	// (0x0003ef26) list_single_graphic_pane_g1

0x5cd1,	// (0x0004021b) list_single_graphic_pane_g2_ParamLimits

0x5cd1,	// (0x0004021b) list_single_graphic_pane_g2

0x5cdd,	// (0x00040227) list_single_graphic_pane_g3_ParamLimits

0x5cdd,	// (0x00040227) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00049b0b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00049b0b) list_single_graphic_pane_g

0x49e8,	// (0x0003ef32) list_single_graphic_pane_t1_ParamLimits

0x49e8,	// (0x0003ef32) list_single_graphic_pane_t1

0x49fe,	// (0x0003ef48) list_single_heading_pane_g1_ParamLimits

0x49fe,	// (0x0003ef48) list_single_heading_pane_g1

0x5cdd,	// (0x00040227) list_single_heading_pane_g2_ParamLimits

0x5cdd,	// (0x00040227) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00049b12) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00049b12) list_single_heading_pane_g

0x4a11,	// (0x0003ef5b) list_single_heading_pane_t1_ParamLimits

0x4a11,	// (0x0003ef5b) list_single_heading_pane_t1

0x5ce9,	// (0x00040233) list_single_heading_pane_t2_ParamLimits

0x5ce9,	// (0x00040233) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00049b17) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00049b17) list_single_heading_pane_t

0x5cd1,	// (0x0004021b) list_single_number_heading_pane_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_single_number_heading_pane_g1

0x5cdd,	// (0x00040227) list_single_number_heading_pane_g2_ParamLimits

0x5cdd,	// (0x00040227) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_single_number_heading_pane_g

0x4a27,	// (0x0003ef71) list_single_number_heading_pane_t1_ParamLimits

0x4a27,	// (0x0003ef71) list_single_number_heading_pane_t1

0x4a3d,	// (0x0003ef87) list_single_number_heading_pane_t2_ParamLimits

0x4a3d,	// (0x0003ef87) list_single_number_heading_pane_t2

0x4a4f,	// (0x0003ef99) list_single_number_heading_pane_t3_ParamLimits

0x4a4f,	// (0x0003ef99) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00049b21) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00049b21) list_single_number_heading_pane_t

0x4a61,	// (0x0003efab) list_single_graphic_heading_pane_g1_ParamLimits

0x4a61,	// (0x0003efab) list_single_graphic_heading_pane_g1

0x4a77,	// (0x0003efc1) list_single_graphic_heading_pane_g4_ParamLimits

0x4a77,	// (0x0003efc1) list_single_graphic_heading_pane_g4

0x5cdd,	// (0x00040227) list_single_graphic_heading_pane_g5_ParamLimits

0x5cdd,	// (0x00040227) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00049b28) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00049b28) list_single_graphic_heading_pane_g

0x4a27,	// (0x0003ef71) list_single_graphic_heading_pane_t1_ParamLimits

0x4a27,	// (0x0003ef71) list_single_graphic_heading_pane_t1

0x4a88,	// (0x0003efd2) list_single_graphic_heading_pane_t2_ParamLimits

0x4a88,	// (0x0003efd2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00049b2f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00049b2f) list_single_graphic_heading_pane_t

0x5cfb,	// (0x00040245) list_single_large_graphic_pane_g1_ParamLimits

0x5cfb,	// (0x00040245) list_single_large_graphic_pane_g1

0x5d07,	// (0x00040251) list_single_large_graphic_pane_g2_ParamLimits

0x5d07,	// (0x00040251) list_single_large_graphic_pane_g2

0x5d13,	// (0x0004025d) list_single_large_graphic_pane_g3_ParamLimits

0x5d13,	// (0x0004025d) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00049b34) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00049b34) list_single_large_graphic_pane_g

0xa387,	// (0x000448d1) wait_border_pane_g2_copy1

0x5d1f,	// (0x00040269) list_single_large_graphic_pane_g4_cp2

0x4aa0,	// (0x0003efea) list_single_large_graphic_pane_t1_ParamLimits

0x4aa0,	// (0x0003efea) list_single_large_graphic_pane_t1

0x4ab6,	// (0x0003f000) list_double_pane_g1_ParamLimits

0x4ab6,	// (0x0003f000) list_double_pane_g1

0x4ac2,	// (0x0003f00c) list_double_pane_g2_ParamLimits

0x4ac2,	// (0x0003f00c) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00049b3b) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00049b3b) list_double_pane_g

0x4ace,	// (0x0003f018) list_double_pane_t1_ParamLimits

0x4ace,	// (0x0003f018) list_double_pane_t1

0x4ae4,	// (0x0003f02e) list_double_pane_t2_ParamLimits

0x4ae4,	// (0x0003f02e) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00049b40) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00049b40) list_double_pane_t

0x4af6,	// (0x0003f040) list_double2_pane_g1_ParamLimits

0x4af6,	// (0x0003f040) list_double2_pane_g1

0x4b07,	// (0x0003f051) list_double2_pane_g2_ParamLimits

0x4b07,	// (0x0003f051) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00049b45) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00049b45) list_double2_pane_g

0x4b13,	// (0x0003f05d) list_double2_pane_t1_ParamLimits

0x4b13,	// (0x0003f05d) list_double2_pane_t1

0x4b29,	// (0x0003f073) list_double2_pane_t2_ParamLimits

0x4b29,	// (0x0003f073) list_double2_pane_t2

0x0001,

0xf600,	// (0x00049b4a) list_double2_pane_t_ParamLimits

0xf600,	// (0x00049b4a) list_double2_pane_t

0x4ab6,	// (0x0003f000) list_double_number_pane_g1_ParamLimits

0x4ab6,	// (0x0003f000) list_double_number_pane_g1

0x4ac2,	// (0x0003f00c) list_double_number_pane_g2_ParamLimits

0x4ac2,	// (0x0003f00c) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00049b3b) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00049b3b) list_double_number_pane_g

0x4b3b,	// (0x0003f085) list_double_number_pane_t1_ParamLimits

0x4b3b,	// (0x0003f085) list_double_number_pane_t1

0x4b4d,	// (0x0003f097) list_double_number_pane_t2_ParamLimits

0x4b4d,	// (0x0003f097) list_double_number_pane_t2

0x4b63,	// (0x0003f0ad) list_double_number_pane_t3_ParamLimits

0x4b63,	// (0x0003f0ad) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00049b4f) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00049b4f) list_double_number_pane_t

0x4b75,	// (0x0003f0bf) list_double_graphic_pane_g1_ParamLimits

0x4b75,	// (0x0003f0bf) list_double_graphic_pane_g1

0x4b81,	// (0x0003f0cb) list_double_graphic_pane_g2_ParamLimits

0x4b81,	// (0x0003f0cb) list_double_graphic_pane_g2

0x4b90,	// (0x0003f0da) list_double_graphic_pane_g3_ParamLimits

0x4b90,	// (0x0003f0da) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00049b56) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00049b56) list_double_graphic_pane_g

0x4b9c,	// (0x0003f0e6) list_double_graphic_pane_t1_ParamLimits

0x4b9c,	// (0x0003f0e6) list_double_graphic_pane_t1

0x4bb2,	// (0x0003f0fc) list_double_graphic_pane_t2_ParamLimits

0x4bb2,	// (0x0003f0fc) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00049b5f) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00049b5f) list_double_graphic_pane_t

0x4bc4,	// (0x0003f10e) list_double2_graphic_pane_g1_ParamLimits

0x4bc4,	// (0x0003f10e) list_double2_graphic_pane_g1

0x887b,	// (0x00042dc5) list_double2_graphic_pane_g2_ParamLimits

0x887b,	// (0x00042dc5) list_double2_graphic_pane_g2

0x5d33,	// (0x0004027d) list_double2_graphic_pane_g3_ParamLimits

0x5d33,	// (0x0004027d) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00049b64) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00049b64) list_double2_graphic_pane_g

0x4bd0,	// (0x0003f11a) list_double2_graphic_pane_t1_ParamLimits

0x4bd0,	// (0x0003f11a) list_double2_graphic_pane_t1

0x4be6,	// (0x0003f130) list_double2_graphic_pane_t2_ParamLimits

0x4be6,	// (0x0003f130) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00049b6b) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00049b6b) list_double2_graphic_pane_t

0x4bf8,	// (0x0003f142) list_double_large_graphic_pane_g1_ParamLimits

0x4bf8,	// (0x0003f142) list_double_large_graphic_pane_g1

0x4c17,	// (0x0003f161) list_double_large_graphic_pane_g2_ParamLimits

0x4c17,	// (0x0003f161) list_double_large_graphic_pane_g2

0x4ac2,	// (0x0003f00c) list_double_large_graphic_pane_g3_ParamLimits

0x4ac2,	// (0x0003f00c) list_double_large_graphic_pane_g3

0x4c2d,	// (0x0003f177) list_double_large_graphic_pane_g4_ParamLimits

0x4c2d,	// (0x0003f177) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00049b70) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00049b70) list_double_large_graphic_pane_g

0x4c40,	// (0x0003f18a) list_double_large_graphic_pane_t1_ParamLimits

0x4c40,	// (0x0003f18a) list_double_large_graphic_pane_t1

0x4c59,	// (0x0003f1a3) list_double_large_graphic_pane_t2_ParamLimits

0x4c59,	// (0x0003f1a3) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00049b7b) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00049b7b) list_double_large_graphic_pane_t

0x5d54,	// (0x0004029e) list_double2_large_graphic_pane_g1_ParamLimits

0x5d54,	// (0x0004029e) list_double2_large_graphic_pane_g1

0x5d60,	// (0x000402aa) list_double2_large_graphic_pane_g2_ParamLimits

0x5d60,	// (0x000402aa) list_double2_large_graphic_pane_g2

0x5d33,	// (0x0004027d) list_double2_large_graphic_pane_g3_ParamLimits

0x5d33,	// (0x0004027d) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00049b80) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00049b80) list_double2_large_graphic_pane_g

0x4c6b,	// (0x0003f1b5) list_double2_large_graphic_pane_t1_ParamLimits

0x4c6b,	// (0x0003f1b5) list_double2_large_graphic_pane_t1

0x4c81,	// (0x0003f1cb) list_double2_large_graphic_pane_t2_ParamLimits

0x4c81,	// (0x0003f1cb) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049b87) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049b87) list_double2_large_graphic_pane_t

0x4c93,	// (0x0003f1dd) list_double_heading_pane_g1_ParamLimits

0x4c93,	// (0x0003f1dd) list_double_heading_pane_g1

0x5d71,	// (0x000402bb) list_double_heading_pane_g2_ParamLimits

0x5d71,	// (0x000402bb) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00049b8c) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00049b8c) list_double_heading_pane_g

0x4ca4,	// (0x0003f1ee) list_double_heading_pane_t1_ParamLimits

0x4ca4,	// (0x0003f1ee) list_double_heading_pane_t1

0x4b29,	// (0x0003f073) list_double_heading_pane_t2_ParamLimits

0x4b29,	// (0x0003f073) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00049b91) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00049b91) list_double_heading_pane_t

0x4cba,	// (0x0003f204) list_double_graphic_heading_pane_g1_ParamLimits

0x4cba,	// (0x0003f204) list_double_graphic_heading_pane_g1

0x4c93,	// (0x0003f1dd) list_double_graphic_heading_pane_g2_ParamLimits

0x4c93,	// (0x0003f1dd) list_double_graphic_heading_pane_g2

0x5d71,	// (0x000402bb) list_double_graphic_heading_pane_g3_ParamLimits

0x5d71,	// (0x000402bb) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00049b96) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00049b96) list_double_graphic_heading_pane_g

0x4cc6,	// (0x0003f210) list_double_graphic_heading_pane_t1_ParamLimits

0x4cc6,	// (0x0003f210) list_double_graphic_heading_pane_t1

0x4be6,	// (0x0003f130) list_double_graphic_heading_pane_t2_ParamLimits

0x4be6,	// (0x0003f130) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00049b9d) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00049b9d) list_double_graphic_heading_pane_t

0x4cdc,	// (0x0003f226) list_double_time_pane_g1_ParamLimits

0x4cdc,	// (0x0003f226) list_double_time_pane_g1

0x4ced,	// (0x0003f237) list_double_time_pane_g2_ParamLimits

0x4ced,	// (0x0003f237) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00049ba2) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00049ba2) list_double_time_pane_g

0x4cf9,	// (0x0003f243) list_double_time_pane_t1_ParamLimits

0x4cf9,	// (0x0003f243) list_double_time_pane_t1

0x4d0f,	// (0x0003f259) list_double_time_pane_t2_ParamLimits

0x4d0f,	// (0x0003f259) list_double_time_pane_t2

0x4d21,	// (0x0003f26b) list_double_time_pane_t3_ParamLimits

0x4d21,	// (0x0003f26b) list_double_time_pane_t3

0x4d33,	// (0x0003f27d) list_double_time_pane_t4_ParamLimits

0x4d33,	// (0x0003f27d) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049ba7) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049ba7) list_double_time_pane_t

0x4d45,	// (0x0003f28f) list_setting_pane_g1_ParamLimits

0x4d45,	// (0x0003f28f) list_setting_pane_g1

0x4b07,	// (0x0003f051) list_setting_pane_g2_ParamLimits

0x4b07,	// (0x0003f051) list_setting_pane_g2

0x0001,

0xf666,	// (0x00049bb0) list_setting_pane_g_ParamLimits

0xf666,	// (0x00049bb0) list_setting_pane_g

0x4d51,	// (0x0003f29b) list_setting_pane_t1_ParamLimits

0x4d51,	// (0x0003f29b) list_setting_pane_t1

0x4d6b,	// (0x0003f2b5) list_setting_pane_t2_ParamLimits

0x4d6b,	// (0x0003f2b5) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00049bb5) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00049bb5) list_setting_pane_t

0x4da8,	// (0x0003f2f2) set_value_pane_cp_ParamLimits

0x4da8,	// (0x0003f2f2) set_value_pane_cp

0x4db4,	// (0x0003f2fe) list_setting_number_pane_g1_ParamLimits

0x4db4,	// (0x0003f2fe) list_setting_number_pane_g1

0x4dc0,	// (0x0003f30a) list_setting_number_pane_g2_ParamLimits

0x4dc0,	// (0x0003f30a) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00049bbc) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00049bbc) list_setting_number_pane_g

0x4dcc,	// (0x0003f316) list_setting_number_pane_t1_ParamLimits

0x4dcc,	// (0x0003f316) list_setting_number_pane_t1

0x4de5,	// (0x0003f32f) list_setting_number_pane_t2_ParamLimits

0x4de5,	// (0x0003f32f) list_setting_number_pane_t2

0x4dff,	// (0x0003f349) list_setting_number_pane_t3_ParamLimits

0x4dff,	// (0x0003f349) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00049bc1) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00049bc1) list_setting_number_pane_t

0x4da8,	// (0x0003f2f2) set_value_pane_ParamLimits

0x4da8,	// (0x0003f2f2) set_value_pane

0x8887,	// (0x00042dd1) bg_set_opt_pane_ParamLimits

0x8887,	// (0x00042dd1) bg_set_opt_pane

0x4e42,	// (0x0003f38c) set_value_pane_t1

0x88a8,	// (0x00042df2) slider_set_pane_cp3

0x88b1,	// (0x00042dfb) volume_small_pane_cp

0x88ba,	// (0x00042e04) list_form_gen_pane

0x88c3,	// (0x00042e0d) scroll_pane_cp8

0x4e58,	// (0x0003f3a2) form_field_data_pane_ParamLimits

0x4e58,	// (0x0003f3a2) form_field_data_pane

0x4e7a,	// (0x0003f3c4) form_field_data_wide_pane_ParamLimits

0x4e7a,	// (0x0003f3c4) form_field_data_wide_pane

0x4e9b,	// (0x0003f3e5) form_field_popup_pane_ParamLimits

0x4e9b,	// (0x0003f3e5) form_field_popup_pane

0x4ebb,	// (0x0003f405) form_field_popup_wide_pane_ParamLimits

0x4ebb,	// (0x0003f405) form_field_popup_wide_pane

0x4ed8,	// (0x0003f422) form_field_slider_pane_ParamLimits

0x4ed8,	// (0x0003f422) form_field_slider_pane

0x4eeb,	// (0x0003f435) form_field_slider_wide_pane_ParamLimits

0x4eeb,	// (0x0003f435) form_field_slider_wide_pane

0x88d4,	// (0x00042e1e) data_form_pane

0x4f08,	// (0x0003f452) form_field_data_pane_t1

0x88e0,	// (0x00042e2a) input_focus_pane

0x4f22,	// (0x0003f46c) data_form_wide_pane

0x4f3f,	// (0x0003f489) form_field_data_wide_pane_t1

0x862d,	// (0x00042b77) input_focus_pane_cp6

0x4f61,	// (0x0003f4ab) form_field_popup_pane_t1

0x88e0,	// (0x00042e2a) input_focus_pane_cp7

0x8902,	// (0x00042e4c) list_form_pane

0x4f83,	// (0x0003f4cd) form_field_popup_wide_pane_t1

0x88e0,	// (0x00042e2a) input_focus_pane_cp8

0x890e,	// (0x00042e58) list_form_wide_pane

0x4fa0,	// (0x0003f4ea) form_field_slider_pane_t1_ParamLimits

0x4fa0,	// (0x0003f4ea) form_field_slider_pane_t1

0x4fb8,	// (0x0003f502) form_field_slider_pane_t2_ParamLimits

0x4fb8,	// (0x0003f502) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00049bd1) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00049bd1) form_field_slider_pane_t

0x82dd,	// (0x00042827) input_focus_pane_cp9_ParamLimits

0x82dd,	// (0x00042827) input_focus_pane_cp9

0x4fcd,	// (0x0003f517) slider_cont_pane_ParamLimits

0x4fcd,	// (0x0003f517) slider_cont_pane

0x891d,	// (0x00042e67) form_field_slider_wide_pane_t1_ParamLimits

0x891d,	// (0x00042e67) form_field_slider_wide_pane_t1

0x4fe1,	// (0x0003f52b) form_field_slider_wide_pane_t2_ParamLimits

0x4fe1,	// (0x0003f52b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00049bd6) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00049bd6) form_field_slider_wide_pane_t

0x82dd,	// (0x00042827) input_focus_pane_cp10_ParamLimits

0x82dd,	// (0x00042827) input_focus_pane_cp10

0x4ff3,	// (0x0003f53d) slider_cont_pane_cp1_ParamLimits

0x4ff3,	// (0x0003f53d) slider_cont_pane_cp1

0x5007,	// (0x0003f551) slider_form_pane_cp

0x892f,	// (0x00042e79) input_focus_pane_g1

0x8937,	// (0x00042e81) input_focus_pane_g2

0x893f,	// (0x00042e89) input_focus_pane_g3

0x8947,	// (0x00042e91) input_focus_pane_g4

0x894f,	// (0x00042e99) input_focus_pane_g5

0x8957,	// (0x00042ea1) input_focus_pane_g6

0x895f,	// (0x00042ea9) input_focus_pane_g7

0x8967,	// (0x00042eb1) input_focus_pane_g8

0x896f,	// (0x00042eb9) input_focus_pane_g9

0x7f78,	// (0x000424c2) input_focus_pane_g10

0x0009,

0xf691,	// (0x00049bdb) input_focus_pane_g

0xa390,	// (0x000448da) wait_border_pane_g3_copy1

0x500f,	// (0x0003f559) data_form_pane_t1

0x7f78,	// (0x000424c2) wait_anim_pane_g1_copy1

0x529f,	// (0x0003f7e9) data_form_wide_pane_t1

0x502a,	// (0x0003f574) list_form_graphic_pane_cp_ParamLimits

0x502a,	// (0x0003f574) list_form_graphic_pane_cp

0xb2ab,	// (0x000457f5) slider_form_pane_g1

0xb2b4,	// (0x000457fe) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00049ed9) slider_form_pane_g

0x502a,	// (0x0003f574) list_form_graphic_pane_ParamLimits

0x502a,	// (0x0003f574) list_form_graphic_pane

0x5041,	// (0x0003f58b) list_form_graphic_pane_g1

0x5049,	// (0x0003f593) list_form_graphic_pane_t1_ParamLimits

0x5049,	// (0x0003f593) list_form_graphic_pane_t1

0x8062,	// (0x000425ac) list_highlight_pane_cp5_ParamLimits

0x8062,	// (0x000425ac) list_highlight_pane_cp5

0x505e,	// (0x0003f5a8) find_pane_g1

0x8977,	// (0x00042ec1) input_find_pane

0x5067,	// (0x0003f5b1) input_find_pane_g1_ParamLimits

0x5067,	// (0x0003f5b1) input_find_pane_g1

0x5073,	// (0x0003f5bd) input_find_pane_t1_ParamLimits

0x5073,	// (0x0003f5bd) input_find_pane_t1

0x5088,	// (0x0003f5d2) input_find_pane_t2_ParamLimits

0x5088,	// (0x0003f5d2) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00049bf0) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00049bf0) input_find_pane_t

0x8980,	// (0x00042eca) input_focus_pane_cp5_ParamLimits

0x8980,	// (0x00042eca) input_focus_pane_cp5

0x899a,	// (0x00042ee4) bg_popup_window_pane_cp2_ParamLimits

0x899a,	// (0x00042ee4) bg_popup_window_pane_cp2

0x89a7,	// (0x00042ef1) listscroll_menu_pane_ParamLimits

0x89a7,	// (0x00042ef1) listscroll_menu_pane

0x89b3,	// (0x00042efd) popup_submenu_window_ParamLimits

0x89b3,	// (0x00042efd) popup_submenu_window

0x89db,	// (0x00042f25) find_popup_pane_g1

0x89e3,	// (0x00042f2d) input_popup_find_pane_cp

0x8980,	// (0x00042eca) input_focus_pane_cp4_ParamLimits

0x8980,	// (0x00042eca) input_focus_pane_cp4

0x89fb,	// (0x00042f45) input_popup_find_pane_t1_ParamLimits

0x89fb,	// (0x00042f45) input_popup_find_pane_t1

0x7f82,	// (0x000424cc) bg_popup_sub_pane_cp

0x8a29,	// (0x00042f73) listscroll_popup_sub_pane

0x8a31,	// (0x00042f7b) list_submenu_pane_ParamLimits

0x8a31,	// (0x00042f7b) list_submenu_pane

0x8a42,	// (0x00042f8c) scroll_pane_cp4

0x8a4a,	// (0x00042f94) list_single_popup_submenu_pane_ParamLimits

0x8a4a,	// (0x00042f94) list_single_popup_submenu_pane

0x8a5e,	// (0x00042fa8) list_single_popup_submenu_pane_g1

0x8a66,	// (0x00042fb0) list_single_popup_submenu_pane_t1_ParamLimits

0x8a66,	// (0x00042fb0) list_single_popup_submenu_pane_t1

0x8062,	// (0x000425ac) bg_active_tab_pane_cp1_ParamLimits

0x8062,	// (0x000425ac) bg_active_tab_pane_cp1

0x8a7b,	// (0x00042fc5) tabs_2_active_pane_g1

0x8a83,	// (0x00042fcd) tabs_2_active_pane_t1

0x8062,	// (0x000425ac) bg_passive_tab_pane_cp1_ParamLimits

0x8062,	// (0x000425ac) bg_passive_tab_pane_cp1

0x8a7b,	// (0x00042fc5) tabs_2_passive_pane_g1

0x8a83,	// (0x00042fcd) tabs_2_passive_pane_t1

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp4

0x8aa3,	// (0x00042fed) tabs_2_long_active_pane_t1

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp4

0x6975,	// (0x00040ebf) list_single_midp_graphic_pane_g4_ParamLimits

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp5

0x8ac2,	// (0x0004300c) tabs_3_long_active_pane_t1

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp5

0x6975,	// (0x00040ebf) list_single_midp_graphic_pane_g4

0x8062,	// (0x000425ac) bg_popup_window_pane_cp13_ParamLimits

0x8062,	// (0x000425ac) bg_popup_window_pane_cp13

0x8add,	// (0x00043027) listscroll_popup_fast_pane_ParamLimits

0x8add,	// (0x00043027) listscroll_popup_fast_pane

0x8ae9,	// (0x00043033) grid_popup_fast_pane_ParamLimits

0x8ae9,	// (0x00043033) grid_popup_fast_pane

0x8afb,	// (0x00043045) scroll_pane_cp9_ParamLimits

0x8afb,	// (0x00043045) scroll_pane_cp9

0xcb52,	// (0x0004709c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb52,	// (0x0004709c) list_single_graphic_hl_pane_t1_cp2

0x8b1f,	// (0x00043069) input_focus_pane_cp20_ParamLimits

0x8b1f,	// (0x00043069) input_focus_pane_cp20

0x8b2d,	// (0x00043077) query_popup_data_pane_t1_ParamLimits

0x8b2d,	// (0x00043077) query_popup_data_pane_t1

0x8b40,	// (0x0004308a) query_popup_data_pane_t2_ParamLimits

0x8b40,	// (0x0004308a) query_popup_data_pane_t2

0x8b86,	// (0x000430d0) query_popup_data_pane_t3_ParamLimits

0x8b86,	// (0x000430d0) query_popup_data_pane_t3

0x8bc7,	// (0x00043111) query_popup_data_pane_t4_ParamLimits

0x8bc7,	// (0x00043111) query_popup_data_pane_t4

0x8c03,	// (0x0004314d) query_popup_data_pane_t5_ParamLimits

0x8c03,	// (0x0004314d) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00049bf5) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00049bf5) query_popup_data_pane_t

0x892f,	// (0x00042e79) bg_set_opt_pane_g1

0x8937,	// (0x00042e81) bg_set_opt_pane_g2

0x893f,	// (0x00042e89) bg_set_opt_pane_g3

0x8947,	// (0x00042e91) bg_set_opt_pane_g4

0x894f,	// (0x00042e99) bg_set_opt_pane_g5

0x8957,	// (0x00042ea1) bg_set_opt_pane_g6

0x895f,	// (0x00042ea9) bg_set_opt_pane_g7

0x8967,	// (0x00042eb1) bg_set_opt_pane_g8

0x896f,	// (0x00042eb9) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00049c00) bg_set_opt_pane_g

0x602f,	// (0x00040579) control_top_pane_stacon_ParamLimits

0x602f,	// (0x00040579) control_top_pane_stacon

0x6082,	// (0x000405cc) signal_pane_stacon_ParamLimits

0x6082,	// (0x000405cc) signal_pane_stacon

0x91c1,	// (0x0004370b) stacon_top_pane_g1_ParamLimits

0x91c1,	// (0x0004370b) stacon_top_pane_g1

0x60a7,	// (0x000405f1) title_pane_stacon_ParamLimits

0x60a7,	// (0x000405f1) title_pane_stacon

0x60d1,	// (0x0004061b) uni_indicator_pane_stacon_ParamLimits

0x60d1,	// (0x0004061b) uni_indicator_pane_stacon

0x60e6,	// (0x00040630) battery_pane_stacon_ParamLimits

0x60e6,	// (0x00040630) battery_pane_stacon

0x612a,	// (0x00040674) control_bottom_pane_stacon_ParamLimits

0x612a,	// (0x00040674) control_bottom_pane_stacon

0x614d,	// (0x00040697) navi_pane_stacon_ParamLimits

0x614d,	// (0x00040697) navi_pane_stacon

0x91e3,	// (0x0004372d) stacon_bottom_pane_g1_ParamLimits

0x91e3,	// (0x0004372d) stacon_bottom_pane_g1

0x5d7d,	// (0x000402c7) aid_levels_signal_lsc_ParamLimits

0x5d7d,	// (0x000402c7) aid_levels_signal_lsc

0x5d94,	// (0x000402de) signal_pane_stacon_g1_ParamLimits

0x5d94,	// (0x000402de) signal_pane_stacon_g1

0x5da8,	// (0x000402f2) signal_pane_stacon_g2_ParamLimits

0x5da8,	// (0x000402f2) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00049c13) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00049c13) signal_pane_stacon_g

0x5ddd,	// (0x00040327) title_pane_stacon_t1_ParamLimits

0x5ddd,	// (0x00040327) title_pane_stacon_t1

0x8c47,	// (0x00043191) uni_indicator_pane_stacon_g1

0x8c51,	// (0x0004319b) uni_indicator_pane_stacon_g2

0x8c5b,	// (0x000431a5) uni_indicator_pane_stacon_g3

0x8c65,	// (0x000431af) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00049c1f) uni_indicator_pane_stacon_g

0x5e02,	// (0x0004034c) control_top_pane_stacon_g1

0x5e0a,	// (0x00040354) control_top_pane_stacon_t1_ParamLimits

0x5e0a,	// (0x00040354) control_top_pane_stacon_t1

0x5e41,	// (0x0004038b) aid_levels_battery_lsc_ParamLimits

0x5e41,	// (0x0004038b) aid_levels_battery_lsc

0x5e59,	// (0x000403a3) battery_pane_stacon_g1_ParamLimits

0x5e59,	// (0x000403a3) battery_pane_stacon_g1

0x5e6c,	// (0x000403b6) battery_pane_stacon_g2_ParamLimits

0x5e6c,	// (0x000403b6) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049c28) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049c28) battery_pane_stacon_g

0x5eaa,	// (0x000403f4) navi_icon_pane_stacon

0x5ebe,	// (0x00040408) navi_navi_pane_stacon

0x5eaa,	// (0x000403f4) navi_text_pane_stacon

0x5e02,	// (0x0004034c) control_bottom_pane_stacon_g1

0x5ed2,	// (0x0004041c) control_bottom_pane_stacon_t1_ParamLimits

0x5ed2,	// (0x0004041c) control_bottom_pane_stacon_t1

0x8c89,	// (0x000431d3) grid_app_pane_ParamLimits

0x8c89,	// (0x000431d3) grid_app_pane

0x8cab,	// (0x000431f5) scroll_pane_cp15_ParamLimits

0x8cab,	// (0x000431f5) scroll_pane_cp15

0x8cbe,	// (0x00043208) cell_app_pane_ParamLimits

0x8cbe,	// (0x00043208) cell_app_pane

0x8ce4,	// (0x0004322e) cell_app_pane_g1_ParamLimits

0x8ce4,	// (0x0004322e) cell_app_pane_g1

0x8d04,	// (0x0004324e) cell_app_pane_g2_ParamLimits

0x8d04,	// (0x0004324e) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00049c2d) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00049c2d) cell_app_pane_g

0x8d10,	// (0x0004325a) cell_app_pane_t1_ParamLimits

0x8d10,	// (0x0004325a) cell_app_pane_t1

0x8d27,	// (0x00043271) grid_highlight_pane_ParamLimits

0x8d27,	// (0x00043271) grid_highlight_pane

0x892f,	// (0x00042e79) cell_highlight_pane_g1

0x8937,	// (0x00042e81) cell_highlight_pane_g2

0x893f,	// (0x00042e89) cell_highlight_pane_g3

0x8947,	// (0x00042e91) cell_highlight_pane_g4

0x894f,	// (0x00042e99) cell_highlight_pane_g5

0x8957,	// (0x00042ea1) cell_highlight_pane_g6

0x895f,	// (0x00042ea9) cell_highlight_pane_g7

0x8967,	// (0x00042eb1) cell_highlight_pane_g8

0x896f,	// (0x00042eb9) cell_highlight_pane_g9

0x7f78,	// (0x000424c2) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00049bdb) cell_highlight_pane_g

0x8d38,	// (0x00043282) bg_scroll_pane

0x5f1c,	// (0x00040466) scroll_handle_pane

0x8d7f,	// (0x000432c9) scroll_bg_pane_g1

0x8d94,	// (0x000432de) scroll_bg_pane_g2

0x8dac,	// (0x000432f6) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049c32) scroll_bg_pane_g

0x8dc1,	// (0x0004330b) scroll_handle_focus_pane_ParamLimits

0x8dc1,	// (0x0004330b) scroll_handle_focus_pane

0x8d7f,	// (0x000432c9) scroll_handle_pane_g1

0x8dce,	// (0x00043318) scroll_handle_pane_g2

0x8dac,	// (0x000432f6) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049c39) scroll_handle_pane_g

0x8980,	// (0x00042eca) bg_popup_sub_pane_cp21_ParamLimits

0x8980,	// (0x00042eca) bg_popup_sub_pane_cp21

0x8de2,	// (0x0004332c) popup_fep_japan_predictive_window_t1_ParamLimits

0x8de2,	// (0x0004332c) popup_fep_japan_predictive_window_t1

0x8dfc,	// (0x00043346) popup_fep_japan_predictive_window_t2_ParamLimits

0x8dfc,	// (0x00043346) popup_fep_japan_predictive_window_t2

0x8e2f,	// (0x00043379) popup_fep_japan_predictive_window_t3_ParamLimits

0x8e2f,	// (0x00043379) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00049c40) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00049c40) popup_fep_japan_predictive_window_t

0x7f82,	// (0x000424cc) bg_popup_sub_pane_cp23

0x8e66,	// (0x000433b0) listscroll_japin_cand_pane

0x8e6e,	// (0x000433b8) popup_fep_japan_candidate_window_t1

0x8e7c,	// (0x000433c6) candidate_pane_ParamLimits

0x8e7c,	// (0x000433c6) candidate_pane

0x8e8e,	// (0x000433d8) scroll_pane_cp30

0x8e96,	// (0x000433e0) list_single_popup_jap_candidate_pane_ParamLimits

0x8e96,	// (0x000433e0) list_single_popup_jap_candidate_pane

0x7f82,	// (0x000424cc) list_highlight_pane_cp30

0x8eaa,	// (0x000433f4) list_single_popup_jap_candidate_pane_t1

0x8eb9,	// (0x00043403) level_1_signal

0x8ec6,	// (0x00043410) level_2_signal

0x8ed3,	// (0x0004341d) level_3_signal

0x8ee0,	// (0x0004342a) level_4_signal

0x8eed,	// (0x00043437) level_5_signal

0x8efa,	// (0x00043444) level_6_signal

0x8f07,	// (0x00043451) level_7_signal

0x8eb9,	// (0x00043403) level_1_battery

0x8ec6,	// (0x00043410) level_2_battery

0x8ed3,	// (0x0004341d) level_3_battery

0x8ee0,	// (0x0004342a) level_4_battery

0x8eed,	// (0x00043437) level_5_battery

0x8efa,	// (0x00043444) level_6_battery

0x8f07,	// (0x00043451) level_7_battery

0x8f2c,	// (0x00043476) list_menu_pane_ParamLimits

0x8f2c,	// (0x00043476) list_menu_pane

0x8f42,	// (0x0004348c) scroll_pane_cp25_ParamLimits

0x8f42,	// (0x0004348c) scroll_pane_cp25

0x8f5b,	// (0x000434a5) list_double2_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double2_graphic_pane_cp2

0x8f5b,	// (0x000434a5) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double2_large_graphic_pane_cp2

0x8f5b,	// (0x000434a5) list_double2_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double2_pane_cp2

0x8f5b,	// (0x000434a5) list_double_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double_graphic_pane_cp2

0x8f5b,	// (0x000434a5) list_double_large_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double_large_graphic_pane_cp2

0x8f5b,	// (0x000434a5) list_double_number_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double_number_pane_cp2

0x8f5b,	// (0x000434a5) list_double_pane_cp2_ParamLimits

0x8f5b,	// (0x000434a5) list_double_pane_cp2

0x8f7f,	// (0x000434c9) list_single_2graphic_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_2graphic_pane_cp2

0x8f7f,	// (0x000434c9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_graphic_heading_pane_cp2

0x8f7f,	// (0x000434c9) list_single_graphic_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_graphic_pane_cp2

0x8f7f,	// (0x000434c9) list_single_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_heading_pane_cp2

0x8f95,	// (0x000434df) list_single_large_graphic_pane_cp2_ParamLimits

0x8f95,	// (0x000434df) list_single_large_graphic_pane_cp2

0x8f7f,	// (0x000434c9) list_single_number_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_number_heading_pane_cp2

0x8f7f,	// (0x000434c9) list_single_number_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_number_pane_cp2

0x8f7f,	// (0x000434c9) list_single_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_pane_cp2

0x9010,	// (0x0004355a) bg_popup_sub_pane_cp22

0x5fcb,	// (0x00040515) popup_side_volume_key_window_g1

0x5fef,	// (0x00040539) popup_side_volume_key_window_t1

0x600b,	// (0x00040555) volume_small_pane_cp1

0x82dd,	// (0x00042827) bg_popup_sub_pane_cp24_ParamLimits

0x82dd,	// (0x00042827) bg_popup_sub_pane_cp24

0x9026,	// (0x00043570) fep_china_uni_candidate_pane_ParamLimits

0x9026,	// (0x00043570) fep_china_uni_candidate_pane

0x903a,	// (0x00043584) fep_china_uni_entry_pane

0x904a,	// (0x00043594) popup_fep_china_uni_window_g1

0x9066,	// (0x000435b0) fep_china_uni_entry_pane_g1

0x906e,	// (0x000435b8) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00049c71) fep_china_uni_entry_pane_g

0x9076,	// (0x000435c0) fep_entry_item_pane

0x9080,	// (0x000435ca) fep_candidate_item_pane

0x9088,	// (0x000435d2) fep_china_uni_candidate_pane_g1

0x9090,	// (0x000435da) fep_china_uni_candidate_pane_g2

0x9098,	// (0x000435e2) fep_china_uni_candidate_pane_g3

0x90a0,	// (0x000435ea) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00049c76) fep_china_uni_candidate_pane_g

0x7f78,	// (0x000424c2) fep_entry_item_pane_g1

0x90a8,	// (0x000435f2) fep_entry_item_pane_t1_ParamLimits

0x90a8,	// (0x000435f2) fep_entry_item_pane_t1

0x90be,	// (0x00043608) fep_candidate_item_pane_t1_ParamLimits

0x90be,	// (0x00043608) fep_candidate_item_pane_t1

0x90d3,	// (0x0004361d) fep_candidate_item_pane_t2_ParamLimits

0x90d3,	// (0x0004361d) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00049c7f) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00049c7f) fep_candidate_item_pane_t

0x8062,	// (0x000425ac) list_highlight_pane_cp31_ParamLimits

0x8062,	// (0x000425ac) list_highlight_pane_cp31

0x90e5,	// (0x0004362f) level_1_signal_lsc

0x90ee,	// (0x00043638) level_2_signal_lsc

0x90f7,	// (0x00043641) level_3_signal_lsc

0x9100,	// (0x0004364a) level_4_signal_lsc

0x9109,	// (0x00043653) level_5_signal_lsc

0x9112,	// (0x0004365c) level_6_signal_lsc

0x911b,	// (0x00043665) level_7_signal_lsc

0x911b,	// (0x00043665) level_1_battery_lsc

0x9124,	// (0x0004366e) level_2_battery_lsc

0x912d,	// (0x00043677) level_3_battery_lsc

0x9136,	// (0x00043680) level_4_battery_lsc

0x913f,	// (0x00043689) level_5_battery_lsc

0x9148,	// (0x00043692) level_6_battery_lsc

0x90e5,	// (0x0004362f) level_7_battery_lsc

0x9151,	// (0x0004369b) scroll_handle_focus_pane_g1

0x915a,	// (0x000436a4) scroll_handle_focus_pane_g2

0x9163,	// (0x000436ad) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00049c84) scroll_handle_focus_pane_g

0x509d,	// (0x0003f5e7) list_single_2graphic_pane_g1_ParamLimits

0x509d,	// (0x0003f5e7) list_single_2graphic_pane_g1

0x4a77,	// (0x0003efc1) list_single_2graphic_pane_g2_ParamLimits

0x4a77,	// (0x0003efc1) list_single_2graphic_pane_g2

0x5cdd,	// (0x00040227) list_single_2graphic_pane_g3_ParamLimits

0x5cdd,	// (0x00040227) list_single_2graphic_pane_g3

0x50a9,	// (0x0003f5f3) list_single_2graphic_pane_g4_ParamLimits

0x50a9,	// (0x0003f5f3) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00049c8b) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00049c8b) list_single_2graphic_pane_g

0x50ba,	// (0x0003f604) list_single_2graphic_pane_t1_ParamLimits

0x50ba,	// (0x0003f604) list_single_2graphic_pane_t1

0x6013,	// (0x0004055d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6013,	// (0x0004055d) list_double2_graphic_large_graphic_pane_g1

0x5d60,	// (0x000402aa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5d60,	// (0x000402aa) list_double2_graphic_large_graphic_pane_g2

0x5d33,	// (0x0004027d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d33,	// (0x0004027d) list_double2_graphic_large_graphic_pane_g3

0x6023,	// (0x0004056d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6023,	// (0x0004056d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00049c94) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00049c94) list_double2_graphic_large_graphic_pane_g

0x50e8,	// (0x0003f632) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50e8,	// (0x0003f632) list_double2_graphic_large_graphic_pane_t1

0x50fe,	// (0x0003f648) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x50fe,	// (0x0003f648) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00049c9d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00049c9d) list_double2_graphic_large_graphic_pane_t

0x92aa,	// (0x000437f4) popup_fast_swap_window_ParamLimits

0x92aa,	// (0x000437f4) popup_fast_swap_window

0x92c6,	// (0x00043810) popup_side_volume_key_window

0x92e0,	// (0x0004382a) stacon_top_pane

0x92ea,	// (0x00043834) status_pane_ParamLimits

0x92ea,	// (0x00043834) status_pane

0x92f8,	// (0x00043842) status_small_pane

0x7f82,	// (0x000424cc) control_pane

0x7f82,	// (0x000424cc) stacon_bottom_pane

0x88c3,	// (0x00042e0d) scroll_pane_cp121

0x88ba,	// (0x00042e04) set_content_pane

0x917e,	// (0x000436c8) bg_active_tab_pane_g1_cp1

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp1

0x9175,	// (0x000436bf) bg_active_tab_pane_g3_cp1

0x917e,	// (0x000436c8) bg_passive_tab_pane_g1_cp1

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp1

0x9175,	// (0x000436bf) bg_passive_tab_pane_g3_cp1

0x9187,	// (0x000436d1) bg_active_tab_pane_g1_cp2

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp2

0x9190,	// (0x000436da) bg_active_tab_pane_g3_cp2

0x9187,	// (0x000436d1) bg_passive_tab_pane_g1_cp2

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp2

0x9190,	// (0x000436da) bg_passive_tab_pane_g3_cp2

0x9199,	// (0x000436e3) bg_active_tab_pane_g1_cp3

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp3

0x91a2,	// (0x000436ec) bg_active_tab_pane_g3_cp3

0x9199,	// (0x000436e3) bg_passive_tab_pane_g1_cp3

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp3

0x91a2,	// (0x000436ec) bg_passive_tab_pane_g3_cp3

0x91ab,	// (0x000436f5) bg_active_tab_pane_g1_cp4

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp4

0x91b6,	// (0x00043700) bg_active_tab_pane_g3_cp4

0x91ab,	// (0x000436f5) bg_passive_tab_pane_g1_cp4

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp4

0x91b6,	// (0x00043700) bg_passive_tab_pane_g3_cp4

0x91ff,	// (0x00043749) bg_active_tab_pane_g1_cp5

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp5

0x9208,	// (0x00043752) bg_active_tab_pane_g3_cp5

0x91ff,	// (0x00043749) bg_passive_tab_pane_g1_cp5

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp5

0x9208,	// (0x00043752) bg_passive_tab_pane_g3_cp5

0x9211,	// (0x0004375b) list_set_graphic_pane_ParamLimits

0x9211,	// (0x0004375b) list_set_graphic_pane

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp4

0x922f,	// (0x00043779) list_set_graphic_pane_g1_ParamLimits

0x922f,	// (0x00043779) list_set_graphic_pane_g1

0x923b,	// (0x00043785) list_set_graphic_pane_g2_ParamLimits

0x923b,	// (0x00043785) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049ca2) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049ca2) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0004a027) volume_small_pane_cp_g

0x925d,	// (0x000437a7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x925d,	// (0x000437a7) list_double2_large_graphic_pane_g1_cp2

0x9269,	// (0x000437b3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9269,	// (0x000437b3) list_double2_large_graphic_pane_g2_cp2

0x927a,	// (0x000437c4) list_double2_large_graphic_pane_g3_cp2

0x9282,	// (0x000437cc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9282,	// (0x000437cc) list_double2_large_graphic_pane_t1_cp2

0x9298,	// (0x000437e2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9298,	// (0x000437e2) list_double2_large_graphic_pane_t2_cp2

0xae69,	// (0x000453b3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae69,	// (0x000453b3) list_double_large_graphic_pane_g1_cp2

0xae7a,	// (0x000453c4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae7a,	// (0x000453c4) list_double_large_graphic_pane_g2_cp2

0x9411,	// (0x0004395b) list_double_large_graphic_pane_g3_cp2

0xae8b,	// (0x000453d5) list_double_large_graphic_pane_g4_cp

0xae93,	// (0x000453dd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae93,	// (0x000453dd) list_double_large_graphic_pane_t1_cp2

0xaeaa,	// (0x000453f4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaeaa,	// (0x000453f4) list_double_large_graphic_pane_t2_cp2

0x9303,	// (0x0004384d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9303,	// (0x0004384d) list_double2_graphic_pane_g1_cp2

0x9311,	// (0x0004385b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9311,	// (0x0004385b) list_double2_graphic_pane_g2_cp2

0x9322,	// (0x0004386c) list_double2_graphic_pane_g3_cp2

0x932c,	// (0x00043876) list_double2_graphic_pane_t1_cp2_ParamLimits

0x932c,	// (0x00043876) list_double2_graphic_pane_t1_cp2

0x9342,	// (0x0004388c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9342,	// (0x0004388c) list_double2_graphic_pane_t2_cp2

0x9354,	// (0x0004389e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9354,	// (0x0004389e) list_single_number_heading_pane_g1_cp2

0x9360,	// (0x000438aa) list_single_number_heading_pane_g2_cp2

0x9368,	// (0x000438b2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9368,	// (0x000438b2) list_single_number_heading_pane_t1_cp2

0x937e,	// (0x000438c8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x937e,	// (0x000438c8) list_single_number_heading_pane_t2_cp2

0x9390,	// (0x000438da) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9390,	// (0x000438da) list_single_number_heading_pane_t3_cp2

0x9354,	// (0x0004389e) list_single_heading_pane_g1_cp2_ParamLimits

0x9354,	// (0x0004389e) list_single_heading_pane_g1_cp2

0x9360,	// (0x000438aa) list_single_heading_pane_g2_cp2

0x9368,	// (0x000438b2) list_single_heading_pane_t1_cp2_ParamLimits

0x9368,	// (0x000438b2) list_single_heading_pane_t1_cp2

0xac73,	// (0x000451bd) list_single_heading_pane_t2_cp2_ParamLimits

0xac73,	// (0x000451bd) list_single_heading_pane_t2_cp2

0xabbb,	// (0x00045105) list_double_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x00045105) list_double_graphic_pane_g1_cp2

0xabc7,	// (0x00045111) list_double_graphic_pane_g2_cp2_ParamLimits

0xabc7,	// (0x00045111) list_double_graphic_pane_g2_cp2

0xabd6,	// (0x00045120) list_double_graphic_pane_g3_cp2

0xabde,	// (0x00045128) list_double_graphic_pane_t1_cp2_ParamLimits

0xabde,	// (0x00045128) list_double_graphic_pane_t1_cp2

0xabf4,	// (0x0004513e) list_double_graphic_pane_t2_cp2_ParamLimits

0xabf4,	// (0x0004513e) list_double_graphic_pane_t2_cp2

0x9405,	// (0x0004394f) list_double_number_pane_g1_cp2_ParamLimits

0x9405,	// (0x0004394f) list_double_number_pane_g1_cp2

0x9411,	// (0x0004395b) list_double_number_pane_g2_cp2

0xab7f,	// (0x000450c9) list_double_number_pane_t1_cp2_ParamLimits

0xab7f,	// (0x000450c9) list_double_number_pane_t1_cp2

0xab93,	// (0x000450dd) list_double_number_pane_t2_cp2_ParamLimits

0xab93,	// (0x000450dd) list_double_number_pane_t2_cp2

0xaba9,	// (0x000450f3) list_double_number_pane_t3_cp2_ParamLimits

0xaba9,	// (0x000450f3) list_double_number_pane_t3_cp2

0xaa68,	// (0x00044fb2) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa68,	// (0x00044fb2) list_single_graphic_pane_g1_cp2

0x9469,	// (0x000439b3) list_single_graphic_pane_g2_cp2_ParamLimits

0x9469,	// (0x000439b3) list_single_graphic_pane_g2_cp2

0x9475,	// (0x000439bf) list_single_graphic_pane_g3_cp2

0xaa3e,	// (0x00044f88) list_single_graphic_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x00044f88) list_single_graphic_pane_t1_cp2

0x9469,	// (0x000439b3) list_single_number_pane_g1_cp2_ParamLimits

0x9469,	// (0x000439b3) list_single_number_pane_g1_cp2

0x9475,	// (0x000439bf) list_single_number_pane_g2_cp2

0xaa3e,	// (0x00044f88) list_single_number_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x00044f88) list_single_number_pane_t1_cp2

0xaa54,	// (0x00044f9e) list_single_number_pane_t2_cp2_ParamLimits

0xaa54,	// (0x00044f9e) list_single_number_pane_t2_cp2

0x9269,	// (0x000437b3) list_double2_pane_g1_cp2_ParamLimits

0x9269,	// (0x000437b3) list_double2_pane_g1_cp2

0x927a,	// (0x000437c4) list_double2_pane_g2_cp2

0x93dd,	// (0x00043927) list_double2_pane_t1_cp2_ParamLimits

0x93dd,	// (0x00043927) list_double2_pane_t1_cp2

0x93f3,	// (0x0004393d) list_double2_pane_t2_cp2_ParamLimits

0x93f3,	// (0x0004393d) list_double2_pane_t2_cp2

0x9405,	// (0x0004394f) list_double_pane_g1_cp2_ParamLimits

0x9405,	// (0x0004394f) list_double_pane_g1_cp2

0x9411,	// (0x0004395b) list_double_pane_g2_cp2

0x9419,	// (0x00043963) list_double_pane_t1_cp2_ParamLimits

0x9419,	// (0x00043963) list_double_pane_t1_cp2

0x942f,	// (0x00043979) list_double_pane_t2_cp2_ParamLimits

0x942f,	// (0x00043979) list_double_pane_t2_cp2

0x9459,	// (0x000439a3) list_single_pane_cp2_g3

0x9469,	// (0x000439b3) list_single_pane_g1_cp2_ParamLimits

0x9469,	// (0x000439b3) list_single_pane_g1_cp2

0x9475,	// (0x000439bf) list_single_pane_g2_cp2

0x947d,	// (0x000439c7) list_single_pane_t1_cp2_ParamLimits

0x947d,	// (0x000439c7) list_single_pane_t1_cp2

0x9495,	// (0x000439df) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9495,	// (0x000439df) list_single_large_graphic_pane_g1_cp2

0x94a1,	// (0x000439eb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x94a1,	// (0x000439eb) list_single_large_graphic_pane_g2_cp2

0x94ad,	// (0x000439f7) list_single_large_graphic_pane_g3_cp2

0x94b5,	// (0x000439ff) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x94b5,	// (0x000439ff) list_single_large_graphic_pane_g4_cp1

0x94cf,	// (0x00043a19) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x94cf,	// (0x00043a19) list_single_large_graphic_pane_t1_cp2

0xaa0a,	// (0x00044f54) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xaa0a,	// (0x00044f54) list_single_graphic_heading_pane_g1_cp2

0xa9d7,	// (0x00044f21) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa9d7,	// (0x00044f21) list_single_graphic_heading_pane_g4_cp2

0x9475,	// (0x000439bf) list_single_graphic_heading_pane_g5_cp2

0xaa16,	// (0x00044f60) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xaa16,	// (0x00044f60) list_single_graphic_heading_pane_t1_cp2

0xaa2c,	// (0x00044f76) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaa2c,	// (0x00044f76) list_single_graphic_heading_pane_t2_cp2

0xa9cb,	// (0x00044f15) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa9cb,	// (0x00044f15) list_single_2graphic_pane_g1_cp2

0xa9d7,	// (0x00044f21) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa9d7,	// (0x00044f21) list_single_2graphic_pane_g2_cp2

0x9475,	// (0x000439bf) list_single_2graphic_pane_g3_cp2

0xa9e8,	// (0x00044f32) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa9e8,	// (0x00044f32) list_single_2graphic_pane_g4_cp2

0xa9f4,	// (0x00044f3e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9f4,	// (0x00044f3e) list_single_2graphic_pane_t1_cp2

0x7f78,	// (0x000424c2) list_highlight_pane_g10_cp1

0xa5a3,	// (0x00044aed) list_highlight_pane_g1_cp1

0xa5ab,	// (0x00044af5) list_highlight_pane_g2_cp1

0xa5b3,	// (0x00044afd) list_highlight_pane_g3_cp1

0xa5bb,	// (0x00044b05) list_highlight_pane_g4_cp1

0xa5c3,	// (0x00044b0d) list_highlight_pane_g5_cp1

0xa5cb,	// (0x00044b15) list_highlight_pane_g6_cp1

0xa5d3,	// (0x00044b1d) list_highlight_pane_g7_cp1

0xa5db,	// (0x00044b25) list_highlight_pane_g8_cp1

0xa5e3,	// (0x00044b2d) list_highlight_pane_g9_cp1

0xa4bb,	// (0x00044a05) form_field_slider_pane_t3

0xa4c9,	// (0x00044a13) form_field_slider_pane_t4

0xa4d7,	// (0x00044a21) slider_form_pane_ParamLimits

0xa4d7,	// (0x00044a21) slider_form_pane

0x7f82,	// (0x000424cc) control_abbreviations

0x7f82,	// (0x000424cc) control_conventions

0x7f82,	// (0x000424cc) control_definitions

0x7f82,	// (0x000424cc) format_table_attribute

0xacbd,	// (0x00045207) bg_popup_preview_window_pane_g9

0x7f82,	// (0x000424cc) format_table_data2

0x7f82,	// (0x000424cc) format_table_data3

0x7f82,	// (0x000424cc) format_table_data_example

0x0008,

0x7f82,	// (0x000424cc) intro_purpose

0xf8ef,	// (0x00049e39) bg_popup_preview_window_pane_g

0x7f82,	// (0x000424cc) texts_category

0x7f82,	// (0x000424cc) texts_graphics

0x94e5,	// (0x00043a2f) text_digital

0x94f4,	// (0x00043a3e) text_primary

0x9503,	// (0x00043a4d) text_primary_small

0x9512,	// (0x00043a5c) text_secondary

0x9521,	// (0x00043a6b) text_title

0xb38c,	// (0x000458d6) bg_passive_tab_pane_g1_cp3_srt

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp3_srt

0xb395,	// (0x000458df) bg_passive_tab_pane_g3_cp3_srt

0x8062,	// (0x000425ac) bg_active_tab_pane_cp3_srt_ParamLimits

0x8062,	// (0x000425ac) bg_active_tab_pane_cp3_srt

0xb39e,	// (0x000458e8) tabs_4_active_pane_srt_g1

0xb3a6,	// (0x000458f0) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a6,	// (0x000458f0) tabs_4_active_pane_srt_t1

0xb38c,	// (0x000458d6) bg_active_tab_pane_g1_cp3_copy1

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp3_copy1

0xb395,	// (0x000458df) bg_active_tab_pane_g3_cp3_copy1

0x8062,	// (0x000425ac) tabs_2_long_active_pane_srt_ParamLimits

0x8062,	// (0x000425ac) tabs_2_long_active_pane_srt

0x8062,	// (0x000425ac) tabs_2_long_passive_pane_srt_ParamLimits

0x8062,	// (0x000425ac) tabs_2_long_passive_pane_srt

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp4_srt

0xb0ec,	// (0x00045636) bg_passive_tab_pane_g1_cp4_srt

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp4_srt

0xb0f5,	// (0x0004563f) bg_passive_tab_pane_g3_cp4_srt

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp4_srt

0xb0fe,	// (0x00045648) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0fe,	// (0x00045648) tabs_2_long_active_pane_srt_t1

0xb0ec,	// (0x00045636) bg_active_tab_pane_g1_cp4_srt

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp4_srt

0xb0f5,	// (0x0004563f) bg_active_tab_pane_g3_cp4_srt

0x82dd,	// (0x00042827) tabs_3_long_active_pane_srt_ParamLimits

0x82dd,	// (0x00042827) tabs_3_long_active_pane_srt

0x82dd,	// (0x00042827) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x82dd,	// (0x00042827) tabs_3_long_passive_pane_cp_srt

0x82dd,	// (0x00042827) tabs_3_long_passive_pane_srt_ParamLimits

0x82dd,	// (0x00042827) tabs_3_long_passive_pane_srt

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp5_srt

0x91ff,	// (0x00043749) bg_passive_tab_pane_g1_cp5_srt

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp5_srt

0x9208,	// (0x00043752) bg_passive_tab_pane_g3_cp5_srt

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp5_srt

0xb0da,	// (0x00045624) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0da,	// (0x00045624) tabs_3_long_active_pane_srt_t1

0x91ff,	// (0x00043749) bg_active_tab_pane_g1_cp5_srt

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp5_srt

0x9208,	// (0x00043752) bg_active_tab_pane_g3_cp5_srt

0xb0cc,	// (0x00045616) navi_text_pane_srt_t1

0xb0c4,	// (0x0004560e) navi_icon_pane_srt_g1

0x96e6,	// (0x00043c30) midp_editing_number_pane_srt

0x9530,	// (0x00043a7a) midp_ticker_pane_srt

0x96ee,	// (0x00043c38) midp_ticker_pane_srt_g1

0x96f6,	// (0x00043c40) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049cc1) midp_ticker_pane_srt_g

0x96fe,	// (0x00043c48) midp_ticker_pane_srt_t1

0xb0b5,	// (0x000455ff) midp_editing_number_pane_t1_copy1

0x8ab6,	// (0x00043000) listscroll_midp_pane

0x8ab6,	// (0x00043000) midp_form_pane

0x959e,	// (0x00043ae8) midp_info_popup_window_ParamLimits

0x959e,	// (0x00043ae8) midp_info_popup_window

0x8980,	// (0x00042eca) bg_popup_sub_pane_cp50_ParamLimits

0x8980,	// (0x00042eca) bg_popup_sub_pane_cp50

0xa1d8,	// (0x00044722) listscroll_midp_info_pane_ParamLimits

0xa1d8,	// (0x00044722) listscroll_midp_info_pane

0xa1c0,	// (0x0004470a) listscroll_form_midp_pane_ParamLimits

0xa1c0,	// (0x0004470a) listscroll_form_midp_pane

0xa1cc,	// (0x00044716) scroll_bar_cp050

0xa1a0,	// (0x000446ea) list_midp_pane

0xbdc1,	// (0x0004630b) signal_pane_g2_cp

0xa0da,	// (0x00044624) listscroll_midp_info_pane_t1_ParamLimits

0xa0da,	// (0x00044624) listscroll_midp_info_pane_t1

0xa0f2,	// (0x0004463c) listscroll_midp_info_pane_t2_ParamLimits

0xa0f2,	// (0x0004463c) listscroll_midp_info_pane_t2

0xa130,	// (0x0004467a) listscroll_midp_info_pane_t3_ParamLimits

0xa130,	// (0x0004467a) listscroll_midp_info_pane_t3

0xa16a,	// (0x000446b4) listscroll_midp_info_pane_t4_ParamLimits

0xa16a,	// (0x000446b4) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00049d74) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00049d74) listscroll_midp_info_pane_t

0x8a42,	// (0x00042f8c) scroll_pane_cp21

0xa07c,	// (0x000445c6) form_midp_field_choice_group_pane

0xa085,	// (0x000445cf) form_midp_field_text_pane

0xa0c0,	// (0x0004460a) form_midp_field_time_pane

0xa0c8,	// (0x00044612) form_midp_gauge_slider_pane

0xa0d1,	// (0x0004461b) form_midp_gauge_wait_pane

0x7f82,	// (0x000424cc) form_midp_image_pane

0x525b,	// (0x0003f7a5) list_single_midp_pane_ParamLimits

0x525b,	// (0x0003f7a5) list_single_midp_pane

0xa030,	// (0x0004457a) form_midp_field_text_pane_t1

0x9de8,	// (0x00044332) input_focus_pane_cp050

0xa06b,	// (0x000445b5) list_midp_form_text_pane

0x9fff,	// (0x00044549) form_midp_field_choice_group_pane_t1

0xa00d,	// (0x00044557) input_focus_pane_cp051

0xa021,	// (0x0004456b) list_midp_choice_pane

0x7f82,	// (0x000424cc) status_idle_pane

0x9fe3,	// (0x0004452d) form_midp_field_time_pane_t1

0x7f78,	// (0x000424c2) wait_anim_pane_g2_copy1

0x9ff1,	// (0x0004453b) form_midp_field_time_pane_t2

0x0001,

0x964e,	// (0x00043b98) aid_navinavi_width_2_pane

0xf825,	// (0x00049d6f) form_midp_field_time_pane_t

0x7f82,	// (0x000424cc) input_focus_pane_cp052

0x7f82,	// (0x000424cc) bg_input_focus_pane_cp040

0x9fa3,	// (0x000444ed) form_midp_gauge_slider_pane_t1

0x9fb1,	// (0x000444fb) form_midp_gauge_slider_pane_t2

0x9fbf,	// (0x00044509) form_midp_gauge_slider_pane_t3

0x9fcd,	// (0x00044517) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00049d66) form_midp_gauge_slider_pane_t

0x9fdb,	// (0x00044525) form_midp_slider_pane

0x8062,	// (0x000425ac) bg_input_focus_pane_cp041_ParamLimits

0x8062,	// (0x000425ac) bg_input_focus_pane_cp041

0x9f70,	// (0x000444ba) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f70,	// (0x000444ba) form_midp_gauge_wait_pane_t1

0x9f82,	// (0x000444cc) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f82,	// (0x000444cc) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00049d61) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00049d61) form_midp_gauge_wait_pane_t

0x9f94,	// (0x000444de) form_midp_wait_pane_ParamLimits

0x9f94,	// (0x000444de) form_midp_wait_pane

0x9f3a,	// (0x00044484) form_midp_image_pane_g1

0x9f43,	// (0x0004448d) form_midp_image_pane_t1

0x9f52,	// (0x0004449c) form_midp_image_pane_t2

0x9f61,	// (0x000444ab) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00049d5a) form_midp_image_pane_t

0x9f31,	// (0x0004447b) list_single_midp_pane_g1

0x524c,	// (0x0003f796) list_single_midp_pane_t1

0x9f02,	// (0x0004444c) list_midp_form_item_pane_ParamLimits

0x9f02,	// (0x0004444c) list_midp_form_item_pane

0x95f6,	// (0x00043b40) list_midp_form_item_pane_t1

0x9605,	// (0x00043b4f) midp_ticker_pane_g1

0x9611,	// (0x00043b5b) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049ca7) midp_ticker_pane_g

0x961d,	// (0x00043b67) midp_ticker_pane_t1

0xb2f8,	// (0x00045842) midp_editing_number_pane_t1

0xb2d6,	// (0x00045820) midp_editing_number_pane

0xb2e5,	// (0x0004582f) midp_ticker_pane

0xb0a5,	// (0x000455ef) ai_message_heading_pane

0x7f82,	// (0x000424cc) bg_popup_window_pane_cp14

0xb0ad,	// (0x000455f7) listscroll_ai_message_pane

0xb02f,	// (0x00045579) ai_message_heading_pane_g1_ParamLimits

0xb02f,	// (0x00045579) ai_message_heading_pane_g1

0xb03b,	// (0x00045585) ai_message_heading_pane_g2_ParamLimits

0xb03b,	// (0x00045585) ai_message_heading_pane_g2

0xb047,	// (0x00045591) ai_message_heading_pane_g3_ParamLimits

0xb047,	// (0x00045591) ai_message_heading_pane_g3

0xb053,	// (0x0004559d) ai_message_heading_pane_g4_ParamLimits

0xb053,	// (0x0004559d) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00049e9b) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00049e9b) ai_message_heading_pane_g

0xb05f,	// (0x000455a9) ai_message_heading_pane_t1_ParamLimits

0xb05f,	// (0x000455a9) ai_message_heading_pane_t1

0xb079,	// (0x000455c3) ai_message_heading_pane_t2_ParamLimits

0xb079,	// (0x000455c3) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00049ea4) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00049ea4) ai_message_heading_pane_t

0xb08b,	// (0x000455d5) bg_popup_heading_pane_cp1_ParamLimits

0xb08b,	// (0x000455d5) bg_popup_heading_pane_cp1

0xb01d,	// (0x00045567) list_ai_message_pane_ParamLimits

0xb01d,	// (0x00045567) list_ai_message_pane

0x8a42,	// (0x00042f8c) scroll_pane_cp10

0xafb9,	// (0x00045503) list_ai_message_pane_g1

0xafc1,	// (0x0004550b) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00049e78) list_ai_message_pane_g

0xafc9,	// (0x00045513) list_ai_message_pane_t1_ParamLimits

0xafc9,	// (0x00045513) list_ai_message_pane_t1

0xafde,	// (0x00045528) list_ai_message_pane_t2_ParamLimits

0xafde,	// (0x00045528) list_ai_message_pane_t2

0xaff3,	// (0x0004553d) list_ai_message_pane_t3_ParamLimits

0xaff3,	// (0x0004553d) list_ai_message_pane_t3

0xb008,	// (0x00045552) list_ai_message_pane_t4_ParamLimits

0xb008,	// (0x00045552) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00049e7d) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00049e7d) list_ai_message_pane_t

0xafa3,	// (0x000454ed) cell_ai_soft_ind_pane_ParamLimits

0xafa3,	// (0x000454ed) cell_ai_soft_ind_pane

0x962f,	// (0x00043b79) cell_ai_soft_ind_pane_g1_ParamLimits

0x962f,	// (0x00043b79) cell_ai_soft_ind_pane_g1

0x7f82,	// (0x000424cc) grid_highlight_cp1

0x963c,	// (0x00043b86) text_secondary_cp56_ParamLimits

0x963c,	// (0x00043b86) text_secondary_cp56

0xaf78,	// (0x000454c2) example_general_pane_ParamLimits

0xaf78,	// (0x000454c2) example_general_pane

0xaf84,	// (0x000454ce) example_parent_pane_g1_ParamLimits

0xaf84,	// (0x000454ce) example_parent_pane_g1

0xaf90,	// (0x000454da) example_parent_pane_t1_ParamLimits

0xaf90,	// (0x000454da) example_parent_pane_t1

0x66fe,	// (0x00040c48) popup_preview_text_window_ParamLimits

0x66fe,	// (0x00040c48) popup_preview_text_window

0x9461,	// (0x000439ab) list_single_pane_cp2_g4

0x8387,	// (0x000428d1) bg_popup_preview_window_pane_ParamLimits

0x8387,	// (0x000428d1) bg_popup_preview_window_pane

0xacc5,	// (0x0004520f) popup_preview_text_window_t1_ParamLimits

0xacc5,	// (0x0004520f) popup_preview_text_window_t1

0xace3,	// (0x0004522d) popup_preview_text_window_t2_ParamLimits

0xace3,	// (0x0004522d) popup_preview_text_window_t2

0xad2c,	// (0x00045276) popup_preview_text_window_t3_ParamLimits

0xad2c,	// (0x00045276) popup_preview_text_window_t3

0xad71,	// (0x000452bb) popup_preview_text_window_t4_ParamLimits

0xad71,	// (0x000452bb) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00049e4c) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00049e4c) popup_preview_text_window_t

0xadef,	// (0x00045339) scroll_pane_cp11

0x9d74,	// (0x000442be) bg_popup_preview_window_pane_g1

0xac85,	// (0x000451cf) bg_popup_preview_window_pane_g2

0xac8d,	// (0x000451d7) bg_popup_preview_window_pane_g3

0xac95,	// (0x000451df) bg_popup_preview_window_pane_g4

0xac9d,	// (0x000451e7) bg_popup_preview_window_pane_g5

0xaca5,	// (0x000451ef) bg_popup_preview_window_pane_g6

0xacad,	// (0x000451f7) bg_popup_preview_window_pane_g7

0xacb5,	// (0x000451ff) bg_popup_preview_window_pane_g8

0x586b,	// (0x0003fdb5) aid_popup_width_pane

0x66dc,	// (0x00040c26) popup_midp_note_alarm_window_ParamLimits

0x66dc,	// (0x00040c26) popup_midp_note_alarm_window

0x88d4,	// (0x00042e1e) data_form_pane_ParamLimits

0x4efe,	// (0x0003f448) form_field_data_pane_g1

0x4f08,	// (0x0003f452) form_field_data_pane_t1_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_ParamLimits

0x4f22,	// (0x0003f46c) data_form_wide_pane_ParamLimits

0x4f33,	// (0x0003f47d) form_field_data_wide_pane_g1

0x4f3f,	// (0x0003f489) form_field_data_wide_pane_t1_ParamLimits

0x862d,	// (0x00042b77) input_focus_pane_cp6_ParamLimits

0x89ed,	// (0x00042f37) input_popup_find_pane_g1_ParamLimits

0x89ed,	// (0x00042f37) input_popup_find_pane_g1

0x5e7d,	// (0x000403c7) aid_navi_side_left_pane

0x5e92,	// (0x000403dc) aid_navi_side_right_pane

0xa69e,	// (0x00044be8) bg_popup_window_pane_cp30_ParamLimits

0xa69e,	// (0x00044be8) bg_popup_window_pane_cp30

0xa718,	// (0x00044c62) popup_midp_note_alarm_window_g1_ParamLimits

0xa718,	// (0x00044c62) popup_midp_note_alarm_window_g1

0xa748,	// (0x00044c92) popup_midp_note_alarm_window_t1_ParamLimits

0xa748,	// (0x00044c92) popup_midp_note_alarm_window_t1

0xa7e9,	// (0x00044d33) popup_midp_note_alarm_window_t2_ParamLimits

0xa7e9,	// (0x00044d33) popup_midp_note_alarm_window_t2

0xa897,	// (0x00044de1) popup_midp_note_alarm_window_t3_ParamLimits

0xa897,	// (0x00044de1) popup_midp_note_alarm_window_t3

0xa8c9,	// (0x00044e13) popup_midp_note_alarm_window_t4_ParamLimits

0xa8c9,	// (0x00044e13) popup_midp_note_alarm_window_t4

0xa8ef,	// (0x00044e39) popup_midp_note_alarm_window_t5_ParamLimits

0xa8ef,	// (0x00044e39) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00049de9) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00049de9) popup_midp_note_alarm_window_t

0xa99b,	// (0x00044ee5) wait_bar_pane_cp1_ParamLimits

0xa99b,	// (0x00044ee5) wait_bar_pane_cp1

0x7f82,	// (0x000424cc) wait_anim_pane_copy1

0x7f82,	// (0x000424cc) wait_border_pane_copy1

0xa37c,	// (0x000448c6) wait_border_pane_g1_copy1

0x4f59,	// (0x0003f4a3) form_field_popup_pane_g1

0x4f61,	// (0x0003f4ab) form_field_popup_pane_t1_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_cp7_ParamLimits

0x8902,	// (0x00042e4c) list_form_pane_ParamLimits

0x4f7b,	// (0x0003f4c5) form_field_popup_wide_pane_g1

0x4f83,	// (0x0003f4cd) form_field_popup_wide_pane_t1_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_cp8_ParamLimits

0x890e,	// (0x00042e58) list_form_wide_pane_ParamLimits

0xb421,	// (0x0004596b) aid_size_cell_graphic_pane

0x500f,	// (0x0003f559) data_form_pane_t1_ParamLimits

0x529f,	// (0x0003f7e9) data_form_wide_pane_t1_ParamLimits

0x993d,	// (0x00043e87) bg_status_flat_pane

0x7fc2,	// (0x0004250c) title_pane_t1_ParamLimits

0x802a,	// (0x00042574) title_pane_t2_ParamLimits

0x8050,	// (0x0004259a) title_pane_t3_ParamLimits

0xf557,	// (0x00049aa1) title_pane_t_ParamLimits

0x8eb9,	// (0x00043403) level_1_signal_ParamLimits

0x8ec6,	// (0x00043410) level_2_signal_ParamLimits

0x8ed3,	// (0x0004341d) level_3_signal_ParamLimits

0x8ee0,	// (0x0004342a) level_4_signal_ParamLimits

0x8eed,	// (0x00043437) level_5_signal_ParamLimits

0x8efa,	// (0x00043444) level_6_signal_ParamLimits

0x8f07,	// (0x00043451) level_7_signal_ParamLimits

0x8eb9,	// (0x00043403) level_1_battery_ParamLimits

0x8ec6,	// (0x00043410) level_2_battery_ParamLimits

0x8ed3,	// (0x0004341d) level_3_battery_ParamLimits

0x8ee0,	// (0x0004342a) level_4_battery_ParamLimits

0x8eed,	// (0x00043437) level_5_battery_ParamLimits

0x8efa,	// (0x00043444) level_6_battery_ParamLimits

0x8f07,	// (0x00043451) level_7_battery_ParamLimits

0xa5a3,	// (0x00044aed) bg_status_flat_pane_g1

0xa5ab,	// (0x00044af5) bg_status_flat_pane_g2

0xa5b3,	// (0x00044afd) bg_status_flat_pane_g3

0xa5bb,	// (0x00044b05) bg_status_flat_pane_g4

0xa5c3,	// (0x00044b0d) bg_status_flat_pane_g5

0xa5cb,	// (0x00044b15) bg_status_flat_pane_g6

0xa5d3,	// (0x00044b1d) bg_status_flat_pane_g7

0x8078,	// (0x000425c2) tabs_3_active_pane_t1_ParamLimits

0x8078,	// (0x000425c2) tabs_3_passive_pane_t1_ParamLimits

0x8092,	// (0x000425dc) tabs_4_active_pane_t1_ParamLimits

0x8092,	// (0x000425dc) tabs_4_1_passive_pane_t1_ParamLimits

0x8a83,	// (0x00042fcd) tabs_2_active_pane_t1_ParamLimits

0x8a83,	// (0x00042fcd) tabs_2_passive_pane_t1_ParamLimits

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp4_ParamLimits

0x8aa3,	// (0x00042fed) tabs_2_long_active_pane_t1_ParamLimits

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp4_ParamLimits

0x699b,	// (0x00040ee5) list_single_midp_graphic_pane_t1_ParamLimits

0x8a95,	// (0x00042fdf) bg_active_tab_pane_cp5_ParamLimits

0x8ac2,	// (0x0004300c) tabs_3_long_active_pane_t1_ParamLimits

0x8ab6,	// (0x00043000) bg_passive_tab_pane_cp5_ParamLimits

0x699b,	// (0x00040ee5) list_single_midp_graphic_pane_t1

0x993d,	// (0x00043e87) bg_status_flat_pane_ParamLimits

0x9a00,	// (0x00043f4a) indicator_pane_cp2_ParamLimits

0x9a00,	// (0x00043f4a) indicator_pane_cp2

0x9b37,	// (0x00044081) navi_pane_srt_ParamLimits

0x9b37,	// (0x00044081) navi_pane_srt

0x9b5b,	// (0x000440a5) popup_clock_digital_analogue_window_cp1

0x813f,	// (0x00042689) indicator_pane_t1

0x9530,	// (0x00043a7a) copy_highlight_pane

0x9530,	// (0x00043a7a) cursor_graphics_pane

0x9530,	// (0x00043a7a) graphic_within_text_pane

0x9530,	// (0x00043a7a) link_highlight_pane

0xadb2,	// (0x000452fc) popup_preview_text_window_t5_ParamLimits

0xadb2,	// (0x000452fc) popup_preview_text_window_t5

0x9656,	// (0x00043ba0) cursor_digital_pane

0x9656,	// (0x00043ba0) cursor_primary_pane

0x9667,	// (0x00043bb1) cursor_primary_small_pane

0x966f,	// (0x00043bb9) cursor_secondary_pane

0x9677,	// (0x00043bc1) cursor_title_pane

0x9656,	// (0x00043ba0) link_highlight_digital_pane

0x965e,	// (0x00043ba8) link_highlight_primary_pane

0x9667,	// (0x00043bb1) link_highlight_primary_small_pane

0x966f,	// (0x00043bb9) link_highlight_secondary_pane

0x9677,	// (0x00043bc1) link_highlight_title_pane

0x9656,	// (0x00043ba0) copy_highlight_digital_pane

0x9656,	// (0x00043ba0) copy_highlight_primary_pane

0x9667,	// (0x00043bb1) copy_highlight_primary_small_pane

0x966f,	// (0x00043bb9) copy_highlight_secondary_pane

0x9677,	// (0x00043bc1) copy_highlight_title_pane

0x966f,	// (0x00043bb9) graphic_text_digital_pane

0xa641,	// (0x00044b8b) graphic_text_primary_pane

0xa64a,	// (0x00044b94) graphic_text_primary_small_pane

0x9667,	// (0x00043bb1) graphic_text_secondary_pane

0x9656,	// (0x00043ba0) graphic_text_title_pane

0x967f,	// (0x00043bc9) cursor_primary_pane_g1

0xa633,	// (0x00044b7d) cursor_text_primary_t1

0xa61b,	// (0x00044b65) cursor_primary_small_pane_g1

0xa625,	// (0x00044b6f) cursor_text_primary_small_t1

0xa603,	// (0x00044b4d) cursor_primary_small_pane_g1_copy1

0xa60d,	// (0x00044b57) cursor_text_primary_small_t1_copy1

0xa5eb,	// (0x00044b35) cursor_text_title_t1

0xa5f9,	// (0x00044b43) cursor_title_pane_g1

0x967f,	// (0x00043bc9) cursor_digital_pane_g1

0x9689,	// (0x00043bd3) cursor_text_digital_t1

0xa58c,	// (0x00044ad6) link_highlight_primary_pane_g1

0xa594,	// (0x00044ade) link_highlight_primary_pane_t1

0x9697,	// (0x00043be1) link_highlight_primary_small_pane_g1

0x969f,	// (0x00043be9) link_highlight_primary_small_pane_t1

0x9697,	// (0x00043be1) link_highlight_secondary_pane_g1

0x96ae,	// (0x00043bf8) link_highlight_secondary_pane_t1

0xa500,	// (0x00044a4a) link_highlight_title_pane_g1

0xa508,	// (0x00044a52) link_highlight_title_pane_t1

0xa4e9,	// (0x00044a33) link_highlight_digital_pane_g1

0xa4f1,	// (0x00044a3b) link_highlight_digital_pane_t1

0xa3c1,	// (0x0004490b) copy_highlight_primary_pane_g1

0xa3c9,	// (0x00044913) copy_highlight_primary_pane_t1

0xa39b,	// (0x000448e5) copy_highlight_primary_small_pane_g1

0xa3b2,	// (0x000448fc) copy_highlight_primary_small_pane_t1

0x96bd,	// (0x00043c07) copy_highlight_secondary_pane_g1

0x96c5,	// (0x00043c0f) copy_highlight_secondary_pane_t1

0xa39b,	// (0x000448e5) copy_highlight_title_pane_g1

0xa3a3,	// (0x000448ed) copy_highlight_title_pane_t1

0xa3c1,	// (0x0004490b) copy_highlight_digital_pane_g1

0xb5ec,	// (0x00045b36) copy_highlight_digital_pane_t1

0xb540,	// (0x00045a8a) graphic_text_primary_pane_g1

0xb5d0,	// (0x00045b1a) graphic_text_primary_pane_t1

0xb5de,	// (0x00045b28) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00049f18) graphic_text_primary_pane_t

0xb5ac,	// (0x00045af6) graphic_text_primary_small_pane_g1

0xb5b4,	// (0x00045afe) graphic_text_primary_small_pane_t1

0xb5c2,	// (0x00045b0c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00049f13) graphic_text_primary_small_pane_t

0xb588,	// (0x00045ad2) graphic_text_secondary_pane_g1

0xb590,	// (0x00045ada) graphic_text_secondary_pane_t1

0xb59e,	// (0x00045ae8) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00049f0e) graphic_text_secondary_pane_t

0xb564,	// (0x00045aae) graphic_text_title_pane_g1

0xb56c,	// (0x00045ab6) graphic_text_title_pane_t1

0xb57a,	// (0x00045ac4) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00049f09) graphic_text_title_pane_t

0xb540,	// (0x00045a8a) graphic_text_digital_pane_g1

0xb548,	// (0x00045a92) graphic_text_digital_pane_t1

0xb556,	// (0x00045aa0) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00049f04) graphic_text_digital_pane_t

0x8062,	// (0x000425ac) navi_icon_pane_srt_ParamLimits

0x8062,	// (0x000425ac) navi_icon_pane_srt

0x7f82,	// (0x000424cc) navi_midp_pane_srt

0x7f82,	// (0x000424cc) navi_navi_pane_srt

0x8062,	// (0x000425ac) navi_text_pane_srt_ParamLimits

0x8062,	// (0x000425ac) navi_text_pane_srt

0xb50b,	// (0x00045a55) navi_navi_icon_text_pane_srt

0xb513,	// (0x00045a5d) navi_navi_pane_srt_g1_ParamLimits

0xb513,	// (0x00045a5d) navi_navi_pane_srt_g1

0xb525,	// (0x00045a6f) navi_navi_pane_srt_g2_ParamLimits

0xb525,	// (0x00045a6f) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00049eff) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00049eff) navi_navi_pane_srt_g

0xb537,	// (0x00045a81) navi_navi_tabs_pane_srt

0xb50b,	// (0x00045a55) navi_navi_text_pane_srt

0xb50b,	// (0x00045a55) navi_navi_volume_pane_srt

0xb4fc,	// (0x00045a46) navi_navi_text_pane_srt_t1

0x6e21,	// (0x0004136b) navi_navi_volume_pane_srt_g1

0x6e29,	// (0x00041373) volume_small_pane_srt_ParamLimits

0x6e29,	// (0x00041373) volume_small_pane_srt

0x6170,	// (0x000406ba) volume_small_pane_srt_g1_ParamLimits

0x6170,	// (0x000406ba) volume_small_pane_srt_g1

0x6180,	// (0x000406ca) volume_small_pane_srt_g2_ParamLimits

0x6180,	// (0x000406ca) volume_small_pane_srt_g2

0x6191,	// (0x000406db) volume_small_pane_srt_g3_ParamLimits

0x6191,	// (0x000406db) volume_small_pane_srt_g3

0x61a2,	// (0x000406ec) volume_small_pane_srt_g4_ParamLimits

0x61a2,	// (0x000406ec) volume_small_pane_srt_g4

0x61b3,	// (0x000406fd) volume_small_pane_srt_g5_ParamLimits

0x61b3,	// (0x000406fd) volume_small_pane_srt_g5

0x61c4,	// (0x0004070e) volume_small_pane_srt_g6_ParamLimits

0x61c4,	// (0x0004070e) volume_small_pane_srt_g6

0x61d5,	// (0x0004071f) volume_small_pane_srt_g7_ParamLimits

0x61d5,	// (0x0004071f) volume_small_pane_srt_g7

0x61e6,	// (0x00040730) volume_small_pane_srt_g8_ParamLimits

0x61e6,	// (0x00040730) volume_small_pane_srt_g8

0x61f7,	// (0x00040741) volume_small_pane_srt_g9_ParamLimits

0x61f7,	// (0x00040741) volume_small_pane_srt_g9

0x6208,	// (0x00040752) volume_small_pane_srt_g10_ParamLimits

0x6208,	// (0x00040752) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00049cac) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00049cac) volume_small_pane_srt_g

0x8430,	// (0x0004297a) query_popup_data_pane_cp2

0xb4e2,	// (0x00045a2c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e2,	// (0x00045a2c) navi_navi_icon_text_pane_srt_t1

0xa641,	// (0x00044b8b) navi_tabs_2_long_pane_srt

0xa641,	// (0x00044b8b) navi_tabs_2_pane_srt

0xa641,	// (0x00044b8b) navi_tabs_3_long_pane_srt

0xa641,	// (0x00044b8b) navi_tabs_3_pane_srt

0xa641,	// (0x00044b8b) navi_tabs_4_pane_srt

0x6e01,	// (0x0004134b) tabs_2_active_pane_srt_ParamLimits

0x6e01,	// (0x0004134b) tabs_2_active_pane_srt

0x6e11,	// (0x0004135b) tabs_2_passive_pane_srt_ParamLimits

0x6e11,	// (0x0004135b) tabs_2_passive_pane_srt

0x986a,	// (0x00043db4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x986a,	// (0x00043db4) bg_passive_tab_pane_cp1_srt

0xb4ae,	// (0x000459f8) bg_passive_tab_pane_g1_cp1_srt

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00045a01) bg_passive_tab_pane_g3_cp1_srt

0x8062,	// (0x000425ac) bg_active_tab_pane_cp1_srt_ParamLimits

0x8062,	// (0x000425ac) bg_active_tab_pane_cp1_srt

0xb4c0,	// (0x00045a0a) tabs_2_active_pane_srt_g1

0xb4c8,	// (0x00045a12) tabs_2_active_pane_srt_t1_ParamLimits

0xb4c8,	// (0x00045a12) tabs_2_active_pane_srt_t1

0xb4ae,	// (0x000459f8) bg_active_tab_pane_g1_cp1_srt

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00045a01) bg_active_tab_pane_g3_cp1_srt

0x6dce,	// (0x00041318) tabs_3_active_pane_srt_ParamLimits

0x6dce,	// (0x00041318) tabs_3_active_pane_srt

0x6ddf,	// (0x00041329) tabs_3_passive_pane_cp_srt_ParamLimits

0x6ddf,	// (0x00041329) tabs_3_passive_pane_cp_srt

0x6df0,	// (0x0004133a) tabs_3_passive_pane_srt_ParamLimits

0x6df0,	// (0x0004133a) tabs_3_passive_pane_srt

0x986a,	// (0x00043db4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x986a,	// (0x00043db4) bg_passive_tab_pane_cp2_srt

0x96d4,	// (0x00043c1e) bg_passive_tab_pane_g1_cp2_srt

0x916c,	// (0x000436b6) bg_passive_tab_pane_g2_cp2_srt

0x96dd,	// (0x00043c27) bg_passive_tab_pane_g3_cp2_srt

0x8062,	// (0x000425ac) bg_active_tab_pane_cp2_srt_ParamLimits

0x8062,	// (0x000425ac) bg_active_tab_pane_cp2_srt

0xb494,	// (0x000459de) tabs_3_active_pane_srt_g1

0xb49c,	// (0x000459e6) tabs_3_active_pane_srt_t1_ParamLimits

0xb49c,	// (0x000459e6) tabs_3_active_pane_srt_t1

0x96d4,	// (0x00043c1e) bg_active_tab_pane_g1_cp2_srt

0x916c,	// (0x000436b6) bg_active_tab_pane_g2_cp2_srt

0x96dd,	// (0x00043c27) bg_active_tab_pane_g3_cp2_srt

0x6d86,	// (0x000412d0) tabs_4_active_pane_srt_ParamLimits

0x6d86,	// (0x000412d0) tabs_4_active_pane_srt

0x6d98,	// (0x000412e2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d98,	// (0x000412e2) tabs_4_passive_pane_cp2_srt

0x636b,	// (0x000408b5) aid_size_cell_toolbar

0x8ab6,	// (0x00043000) main_idle_act_pane_ParamLimits

0x6510,	// (0x00040a5a) popup_large_graphic_colour_window_ParamLimits

0x6875,	// (0x00040dbf) popup_toolbar_window_ParamLimits

0x6875,	// (0x00040dbf) popup_toolbar_window

0xb307,	// (0x00045851) list_single_graphic_2heading_pane_ParamLimits

0xb307,	// (0x00045851) list_single_graphic_2heading_pane

0x8c6f,	// (0x000431b9) aid_size_cell_apps_grid_lsc_pane

0x8c81,	// (0x000431cb) aid_size_cell_apps_grid_prt_pane

0x986a,	// (0x00043db4) bg_wml_button_pane_cp1_ParamLimits

0x986a,	// (0x00043db4) bg_wml_button_pane_cp1

0xa030,	// (0x0004457a) form_midp_field_text_pane_t1_ParamLimits

0x9de8,	// (0x00044332) input_focus_pane_cp050_ParamLimits

0xa06b,	// (0x000445b5) list_midp_form_text_pane_ParamLimits

0xa00d,	// (0x00044557) input_focus_pane_cp051_ParamLimits

0xa021,	// (0x0004456b) list_midp_choice_pane_ParamLimits

0x9e9e,	// (0x000443e8) list_single_2graphic_pane_cp3_ParamLimits

0x9e9e,	// (0x000443e8) list_single_2graphic_pane_cp3

0x9ec9,	// (0x00044413) list_single_midp_graphic_pane_ParamLimits

0x9ec9,	// (0x00044413) list_single_midp_graphic_pane

0x5128,	// (0x0003f672) list_single_graphic_2heading_pane_g1_ParamLimits

0x5128,	// (0x0003f672) list_single_graphic_2heading_pane_g1

0x5134,	// (0x0003f67e) list_single_graphic_2heading_pane_g4_ParamLimits

0x5134,	// (0x0003f67e) list_single_graphic_2heading_pane_g4

0x5140,	// (0x0003f68a) list_single_graphic_2heading_pane_g5_ParamLimits

0x5140,	// (0x0003f68a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00049cff) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00049cff) list_single_graphic_2heading_pane_g

0x514c,	// (0x0003f696) list_single_graphic_2heading_pane_t1_ParamLimits

0x514c,	// (0x0003f696) list_single_graphic_2heading_pane_t1

0x5160,	// (0x0003f6aa) list_single_graphic_2heading_pane_t2_ParamLimits

0x5160,	// (0x0003f6aa) list_single_graphic_2heading_pane_t2

0x517a,	// (0x0003f6c4) list_single_graphic_2heading_pane_t3_ParamLimits

0x517a,	// (0x0003f6c4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049d06) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049d06) list_single_graphic_2heading_pane_t

0x9cb2,	// (0x000441fc) bg_popup_sub_pane_cp2

0x9cdc,	// (0x00044226) grid_toobar_pane

0x6920,	// (0x00040e6a) cell_toolbar_pane_ParamLimits

0x6920,	// (0x00040e6a) cell_toolbar_pane

0x9d18,	// (0x00044262) cell_toolbar_pane_g1_ParamLimits

0x9d18,	// (0x00044262) cell_toolbar_pane_g1

0x9d2c,	// (0x00044276) cell_toolbar_pane_g2_ParamLimits

0x9d2c,	// (0x00044276) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00049d14) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00049d14) cell_toolbar_pane_g

0x9d4e,	// (0x00044298) grid_highlight_pane_cp2_ParamLimits

0x9d4e,	// (0x00044298) grid_highlight_pane_cp2

0x9d68,	// (0x000442b2) toolbar_button_pane

0x9d74,	// (0x000442be) toolbar_button_pane_g1

0x9d7c,	// (0x000442c6) toolbar_button_pane_g2

0x9d84,	// (0x000442ce) toolbar_button_pane_g3

0x9d8c,	// (0x000442d6) toolbar_button_pane_g4

0x9d94,	// (0x000442de) toolbar_button_pane_g5

0x9d9c,	// (0x000442e6) toolbar_button_pane_g6

0x9da4,	// (0x000442ee) toolbar_button_pane_g7

0x9dac,	// (0x000442f6) toolbar_button_pane_g8

0x9db4,	// (0x000442fe) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00049d19) toolbar_button_pane_g

0x6958,	// (0x00040ea2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6958,	// (0x00040ea2) list_single_2graphic_pane_g1_cp3

0x6964,	// (0x00040eae) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6964,	// (0x00040eae) list_single_2graphic_pane_g2_cp3

0x9360,	// (0x000438aa) list_single_2graphic_pane_g3_cp3

0x6975,	// (0x00040ebf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6975,	// (0x00040ebf) list_single_2graphic_pane_g4_cp3

0x6981,	// (0x00040ecb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6981,	// (0x00040ecb) list_single_2graphic_pane_t1_cp3

0x9354,	// (0x0004389e) list_single_midp_graphic_pane_g2_ParamLimits

0x9354,	// (0x0004389e) list_single_midp_graphic_pane_g2

0x5110,	// (0x0003f65a) aid_zoom_text_primary

0x5118,	// (0x0003f662) aid_zoom_text_secondary

0x978e,	// (0x00043cd8) status_small_pane_g7_ParamLimits

0x978e,	// (0x00043cd8) status_small_pane_g7

0x97b1,	// (0x00043cfb) status_small_pane_t1_ParamLimits

0x7f99,	// (0x000424e3) title_pane_g2

0x0003,

0xf54e,	// (0x00049a98) title_pane_g

0x84d4,	// (0x00042a1e) aid_size_cell_colour_1_pane_ParamLimits

0x84d4,	// (0x00042a1e) aid_size_cell_colour_1_pane

0x84e8,	// (0x00042a32) aid_size_cell_colour_2_pane_ParamLimits

0x84e8,	// (0x00042a32) aid_size_cell_colour_2_pane

0x84fc,	// (0x00042a46) aid_size_cell_colour_3_pane_ParamLimits

0x84fc,	// (0x00042a46) aid_size_cell_colour_3_pane

0x8510,	// (0x00042a5a) aid_size_cell_colour_4_pane_ParamLimits

0x8510,	// (0x00042a5a) aid_size_cell_colour_4_pane

0x5db9,	// (0x00040303) title_pane_stacon_g1_ParamLimits

0x5db9,	// (0x00040303) title_pane_stacon_g1

0xa420,	// (0x0004496a) popup_note_wait_window_g3_ParamLimits

0xa420,	// (0x0004496a) popup_note_wait_window_g3

0xa496,	// (0x000449e0) popup_note_wait_window_t5_ParamLimits

0xa496,	// (0x000449e0) popup_note_wait_window_t5

0x7f82,	// (0x000424cc) main_feb_china_hwr_fs_writing_pane

0x63f9,	// (0x00040943) popup_feb_china_hwr_fs_window_ParamLimits

0x63f9,	// (0x00040943) popup_feb_china_hwr_fs_window

0x69b1,	// (0x00040efb) aid_size_cell_hwr_fs_ParamLimits

0x69b1,	// (0x00040efb) aid_size_cell_hwr_fs

0x9de8,	// (0x00044332) bg_popup_sub_pane_cp3_ParamLimits

0x9de8,	// (0x00044332) bg_popup_sub_pane_cp3

0x69c6,	// (0x00040f10) grid_hwr_fs_pane_ParamLimits

0x69c6,	// (0x00040f10) grid_hwr_fs_pane

0x69de,	// (0x00040f28) linegrid_hwr_fs_pane_ParamLimits

0x69de,	// (0x00040f28) linegrid_hwr_fs_pane

0x69ee,	// (0x00040f38) cell_hwr_fs_pane_ParamLimits

0x69ee,	// (0x00040f38) cell_hwr_fs_pane

0x9df4,	// (0x0004433e) linegrid_hwr_fs_pane_g1_ParamLimits

0x9df4,	// (0x0004433e) linegrid_hwr_fs_pane_g1

0x9e00,	// (0x0004434a) linegrid_hwr_fs_pane_g2_ParamLimits

0x9e00,	// (0x0004434a) linegrid_hwr_fs_pane_g2

0x9e12,	// (0x0004435c) linegrid_hwr_fs_pane_g3_ParamLimits

0x9e12,	// (0x0004435c) linegrid_hwr_fs_pane_g3

0x6a10,	// (0x00040f5a) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a10,	// (0x00040f5a) linegrid_hwr_fs_pane_g4

0x6a2a,	// (0x00040f74) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a2a,	// (0x00040f74) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00049d3f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00049d3f) linegrid_hwr_fs_pane_g

0x9e1e,	// (0x00044368) cell_hwr_fs_pane_g1_ParamLimits

0x9e1e,	// (0x00044368) cell_hwr_fs_pane_g1

0x9be9,	// (0x00044133) cell_hwr_fs_pane_g2_ParamLimits

0x9be9,	// (0x00044133) cell_hwr_fs_pane_g2

0x9e34,	// (0x0004437e) cell_hwr_fs_pane_g3_ParamLimits

0x9e34,	// (0x0004437e) cell_hwr_fs_pane_g3

0x9e41,	// (0x0004438b) cell_hwr_fs_pane_g4_ParamLimits

0x9e41,	// (0x0004438b) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00049d4a) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00049d4a) cell_hwr_fs_pane_g

0x6a40,	// (0x00040f8a) cell_hwr_fs_pane_t1

0x7f82,	// (0x000424cc) grid_highlight_pane_cp6

0x7f82,	// (0x000424cc) main_idle_act2_pane

0x8a29,	// (0x00042f73) aid_inside_area_popup_secondary

0xaad5,	// (0x0004501f) aid_inside_area_window_primary_ParamLimits

0xaad5,	// (0x0004501f) aid_inside_area_window_primary

0xb5fb,	// (0x00045b45) ai2_news_ticker_pane

0xb603,	// (0x00045b4d) aid_size_cell_ai1_link_ParamLimits

0xb603,	// (0x00045b4d) aid_size_cell_ai1_link

0xb61d,	// (0x00045b67) popup_ai2_data_window_ParamLimits

0xb61d,	// (0x00045b67) popup_ai2_data_window

0xb631,	// (0x00045b7b) popup_ai2_link_window_ParamLimits

0xb631,	// (0x00045b7b) popup_ai2_link_window

0x9de8,	// (0x00044332) bg_popup_sub_pane_cp4_ParamLimits

0x9de8,	// (0x00044332) bg_popup_sub_pane_cp4

0xb645,	// (0x00045b8f) grid_ai2_link_pane_ParamLimits

0xb645,	// (0x00045b8f) grid_ai2_link_pane

0xb65c,	// (0x00045ba6) popup_ai2_link_window_g1_ParamLimits

0xb65c,	// (0x00045ba6) popup_ai2_link_window_g1

0xb668,	// (0x00045bb2) popup_ai2_link_window_g2_ParamLimits

0xb668,	// (0x00045bb2) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00049f1d) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00049f1d) popup_ai2_link_window_g

0xb677,	// (0x00045bc1) ai2_mp_button_pane

0xb67f,	// (0x00045bc9) ai2_mp_volume_pane

0xa00d,	// (0x00044557) bg_popup_sub_pane_cp5_ParamLimits

0xa00d,	// (0x00044557) bg_popup_sub_pane_cp5

0xb687,	// (0x00045bd1) heading_ai2_gene_pane_ParamLimits

0xb687,	// (0x00045bd1) heading_ai2_gene_pane

0xb693,	// (0x00045bdd) list_ai2_gene_pane_ParamLimits

0xb693,	// (0x00045bdd) list_ai2_gene_pane

0xb6db,	// (0x00045c25) cell_ai2_link_pane_ParamLimits

0xb6db,	// (0x00045c25) cell_ai2_link_pane

0xb6f1,	// (0x00045c3b) cell_ai2_link_pane_g1

0x7f82,	// (0x000424cc) grid_highlight_pane_cp7

0x6e3e,	// (0x00041388) ai2_mp_volume_pane_g1

0xb7c2,	// (0x00045d0c) ai2_mp_volume_pane_g2

0xb737,	// (0x00045c81) list_ai2_gene_pane_t1

0xb7ca,	// (0x00045d14) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00049f36) ai2_mp_volume_pane_g

0x6e46,	// (0x00041390) volume_small_pane_cp3

0xb7d2,	// (0x00045d1c) aid_size_cell_ai2_button

0xb7da,	// (0x00045d24) grid_ai2_button_pane

0xb7e3,	// (0x00045d2d) cell_ai2_button_pane_ParamLimits

0xb7e3,	// (0x00045d2d) cell_ai2_button_pane

0x7f78,	// (0x000424c2) cell_ai2_button_pane_g1

0x7f82,	// (0x000424cc) grid_highlight_pane_cp8

0xb782,	// (0x00045ccc) ai2_gene_pane_t1_ParamLimits

0xb782,	// (0x00045ccc) ai2_gene_pane_t1

0x6361,	// (0x000408ab) aid_height_parent_landscape

0xb146,	// (0x00045690) aid_height_set_list

0xb157,	// (0x000456a1) aid_size_parent

0xb421,	// (0x0004596b) aid_size_cell_graphic_pane_ParamLimits

0xb6a3,	// (0x00045bed) popup_ai2_data_window_g1_ParamLimits

0xb6a3,	// (0x00045bed) popup_ai2_data_window_g1

0xb6af,	// (0x00045bf9) ai2_news_ticker_pane_g1

0xb6b7,	// (0x00045c01) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00049f22) ai2_news_ticker_pane_g

0xb6bf,	// (0x00045c09) ai2_news_ticker_pane_t1

0xb6cd,	// (0x00045c17) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00049f27) ai2_news_ticker_pane_t

0xb6fa,	// (0x00045c44) heading_ai2_gene_pane_g1

0xb702,	// (0x00045c4c) heading_ai2_gene_pane_t1_ParamLimits

0xb702,	// (0x00045c4c) heading_ai2_gene_pane_t1

0xb717,	// (0x00045c61) list_highlight_pane_cp6

0xb71f,	// (0x00045c69) ai2_gene_pane_ParamLimits

0xb71f,	// (0x00045c69) ai2_gene_pane

0xb745,	// (0x00045c8f) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00049f2c) list_ai2_gene_pane_t

0xb753,	// (0x00045c9d) list_highlight_pane_cp8_ParamLimits

0xb753,	// (0x00045c9d) list_highlight_pane_cp8

0xb764,	// (0x00045cae) ai2_gene_pane_g1_ParamLimits

0xb764,	// (0x00045cae) ai2_gene_pane_g1

0xb776,	// (0x00045cc0) ai2_gene_pane_g2_ParamLimits

0xb776,	// (0x00045cc0) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00049f31) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00049f31) ai2_gene_pane_g

0x886a,	// (0x00042db4) scroll_pane_cp12

0x6320,	// (0x0004086a) control_pane_t3_ParamLimits

0x6320,	// (0x0004086a) control_pane_t3

0x97a2,	// (0x00043cec) status_small_pane_g8_ParamLimits

0x97a2,	// (0x00043cec) status_small_pane_g8

0x64db,	// (0x00040a25) popup_find_window_ParamLimits

0x66f0,	// (0x00040c3a) popup_note_image_window_ParamLimits

0x5192,	// (0x0003f6dc) list_double2_graphic_pane_vc_g1_ParamLimits

0x5192,	// (0x0003f6dc) list_double2_graphic_pane_vc_g1

0x5cd1,	// (0x0004021b) list_double2_graphic_pane_vc_g2_ParamLimits

0x5cd1,	// (0x0004021b) list_double2_graphic_pane_vc_g2

0x5cdd,	// (0x00040227) list_double2_graphic_pane_vc_g3_ParamLimits

0x5cdd,	// (0x00040227) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049d0d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049d0d) list_double2_graphic_pane_vc_g

0x519e,	// (0x0003f6e8) list_double2_graphic_pane_vc_t1_ParamLimits

0x519e,	// (0x0003f6e8) list_double2_graphic_pane_vc_t1

0x5cd1,	// (0x0004021b) list_single_heading_pane_vc_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_single_heading_pane_vc_g1

0x5cdd,	// (0x00040227) list_single_heading_pane_vc_g2_ParamLimits

0x5cdd,	// (0x00040227) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_single_heading_pane_vc_g

0x51b4,	// (0x0003f6fe) list_single_heading_pane_vc_t1_ParamLimits

0x51b4,	// (0x0003f6fe) list_single_heading_pane_vc_t1

0x51ca,	// (0x0003f714) list_single_heading_pane_vc_t2_ParamLimits

0x51ca,	// (0x0003f714) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00049d2e) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00049d2e) list_single_heading_pane_vc_t

0x8852,	// (0x00042d9c) list_setting_number_pane_vc_g1_ParamLimits

0x8852,	// (0x00042d9c) list_setting_number_pane_vc_g1

0x885e,	// (0x00042da8) list_setting_number_pane_vc_g2_ParamLimits

0x885e,	// (0x00042da8) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00049d33) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00049d33) list_setting_number_pane_vc_g

0x51e6,	// (0x0003f730) list_setting_number_pane_vc_t1_ParamLimits

0x51e6,	// (0x0003f730) list_setting_number_pane_vc_t1

0x51fa,	// (0x0003f744) list_setting_number_pane_vc_t2_ParamLimits

0x51fa,	// (0x0003f744) list_setting_number_pane_vc_t2

0x5214,	// (0x0003f75e) list_setting_number_pane_vc_t3_ParamLimits

0x5214,	// (0x0003f75e) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00049d38) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00049d38) list_setting_number_pane_vc_t

0x523c,	// (0x0003f786) set_value_pane_vc_ParamLimits

0x523c,	// (0x0003f786) set_value_pane_vc

0xb307,	// (0x00045851) list_double2_graphic_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double2_graphic_pane_vc

0x6c90,	// (0x000411da) list_double2_large_graphic_pane_vc_ParamLimits

0x6c90,	// (0x000411da) list_double2_large_graphic_pane_vc

0xb307,	// (0x00045851) list_double2_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double2_pane_vc

0xb307,	// (0x00045851) list_double_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double_graphic_heading_pane_vc

0xb307,	// (0x00045851) list_double_graphic_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double_graphic_pane_vc

0xb307,	// (0x00045851) list_double_heading_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double_heading_pane_vc

0x6ca2,	// (0x000411ec) list_double_large_graphic_pane_vc_ParamLimits

0x6ca2,	// (0x000411ec) list_double_large_graphic_pane_vc

0xb307,	// (0x00045851) list_double_number_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double_number_pane_vc

0xb307,	// (0x00045851) list_double_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double_pane_vc

0xb307,	// (0x00045851) list_double_time_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_double_time_pane_vc

0xb307,	// (0x00045851) list_setting_number_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_setting_number_pane_vc

0xb307,	// (0x00045851) list_setting_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_setting_pane_vc

0xb307,	// (0x00045851) list_single_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_single_graphic_heading_pane_vc

0xb307,	// (0x00045851) list_single_heading_pane_vc_ParamLimits

0xb307,	// (0x00045851) list_single_heading_pane_vc

0x6cc0,	// (0x0004120a) list_single_number_heading_pane_vc_ParamLimits

0x6cc0,	// (0x0004120a) list_single_number_heading_pane_vc

0x5192,	// (0x0003f6dc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5192,	// (0x0003f6dc) list_double_graphic_heading_pane_vc_g1

0x5cd1,	// (0x0004021b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5cd1,	// (0x0004021b) list_double_graphic_heading_pane_vc_g2

0x5cdd,	// (0x00040227) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5cdd,	// (0x00040227) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049d0d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049d0d) list_double_graphic_heading_pane_vc_g

0x52e5,	// (0x0003f82f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52e5,	// (0x0003f82f) list_double_graphic_heading_pane_vc_t1

0x5301,	// (0x0003f84b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5301,	// (0x0003f84b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00049f3d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00049f3d) list_double_graphic_heading_pane_vc_t

0x8852,	// (0x00042d9c) list_setting_pane_vc_g1_ParamLimits

0x8852,	// (0x00042d9c) list_setting_pane_vc_g1

0x885e,	// (0x00042da8) list_setting_pane_vc_g2_ParamLimits

0x885e,	// (0x00042da8) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00049d33) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00049d33) list_setting_pane_vc_g

0x5319,	// (0x0003f863) list_setting_pane_vc_t1_ParamLimits

0x5319,	// (0x0003f863) list_setting_pane_vc_t1

0x5333,	// (0x0003f87d) list_setting_pane_vc_t2_ParamLimits

0x5333,	// (0x0003f87d) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00049f80) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00049f80) list_setting_pane_vc_t

0x523c,	// (0x0003f786) set_value_pane_cp_vc_ParamLimits

0x523c,	// (0x0003f786) set_value_pane_cp_vc

0x5cd1,	// (0x0004021b) list_single_number_heading_pane_vc_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_single_number_heading_pane_vc_g1

0x5cdd,	// (0x00040227) list_single_number_heading_pane_vc_g2_ParamLimits

0x5cdd,	// (0x00040227) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_single_number_heading_pane_vc_g

0x51b4,	// (0x0003f6fe) list_single_number_heading_pane_vc_t1_ParamLimits

0x51b4,	// (0x0003f6fe) list_single_number_heading_pane_vc_t1

0x534b,	// (0x0003f895) list_single_number_heading_pane_vc_t2_ParamLimits

0x534b,	// (0x0003f895) list_single_number_heading_pane_vc_t2

0x4a4f,	// (0x0003ef99) list_single_number_heading_pane_vc_t3_ParamLimits

0x4a4f,	// (0x0003ef99) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00049f85) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00049f85) list_single_number_heading_pane_vc_t

0x5192,	// (0x0003f6dc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5192,	// (0x0003f6dc) list_single_graphic_heading_pane_vc_g1

0x5cd1,	// (0x0004021b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5cd1,	// (0x0004021b) list_single_graphic_heading_pane_vc_g4

0x5cdd,	// (0x00040227) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5cdd,	// (0x00040227) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00049d0d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049d0d) list_single_graphic_heading_pane_vc_g

0x51b4,	// (0x0003f6fe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51b4,	// (0x0003f6fe) list_single_graphic_heading_pane_vc_t1

0x535f,	// (0x0003f8a9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x535f,	// (0x0003f8a9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00049f8c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00049f8c) list_single_graphic_heading_pane_vc_t

0x5cd1,	// (0x0004021b) list_double2_pane_vc_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_double2_pane_vc_g1

0x5cdd,	// (0x00040227) list_double2_pane_vc_g2_ParamLimits

0x5cdd,	// (0x00040227) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_double2_pane_vc_g

0x52cf,	// (0x0003f819) list_double2_pane_vc_t1_ParamLimits

0x52cf,	// (0x0003f819) list_double2_pane_vc_t1

0x6e97,	// (0x000413e1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6e97,	// (0x000413e1) list_double2_large_graphic_pane_vc_g1

0x6ea3,	// (0x000413ed) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6ea3,	// (0x000413ed) list_double2_large_graphic_pane_vc_g2

0x6eaf,	// (0x000413f9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6eaf,	// (0x000413f9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x00049f91) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00049f91) list_double2_large_graphic_pane_vc_g

0x5373,	// (0x0003f8bd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5373,	// (0x0003f8bd) list_double2_large_graphic_pane_vc_t1

0x5389,	// (0x0003f8d3) list_double_time_pane_vc_g1_ParamLimits

0x5389,	// (0x0003f8d3) list_double_time_pane_vc_g1

0x5395,	// (0x0003f8df) list_double_time_pane_vc_g2_ParamLimits

0x5395,	// (0x0003f8df) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00049f98) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00049f98) list_double_time_pane_vc_g

0x53a1,	// (0x0003f8eb) list_double_time_pane_vc_t1_ParamLimits

0x53a1,	// (0x0003f8eb) list_double_time_pane_vc_t1

0x53bf,	// (0x0003f909) list_double_time_pane_vc_t2_ParamLimits

0x53bf,	// (0x0003f909) list_double_time_pane_vc_t2

0x5409,	// (0x0003f953) list_double_time_pane_vc_t3_ParamLimits

0x5409,	// (0x0003f953) list_double_time_pane_vc_t3

0x541b,	// (0x0003f965) list_double_time_pane_vc_t4_ParamLimits

0x541b,	// (0x0003f965) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00049f9d) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00049f9d) list_double_time_pane_vc_t

0x5cd1,	// (0x0004021b) list_double_pane_vc_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_double_pane_vc_g1

0x5cdd,	// (0x00040227) list_double_pane_vc_g2_ParamLimits

0x5cdd,	// (0x00040227) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_double_pane_vc_g

0x542f,	// (0x0003f979) list_double_pane_vc_t1_ParamLimits

0x542f,	// (0x0003f979) list_double_pane_vc_t1

0x5441,	// (0x0003f98b) list_double_pane_vc_t2_ParamLimits

0x5441,	// (0x0003f98b) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00049fa6) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00049fa6) list_double_pane_vc_t

0x5cd1,	// (0x0004021b) list_double_number_pane_vc_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_double_number_pane_vc_g1

0x5cdd,	// (0x00040227) list_double_number_pane_vc_g2_ParamLimits

0x5cdd,	// (0x00040227) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_double_number_pane_vc_g

0x5459,	// (0x0003f9a3) list_double_number_pane_vc_t1_ParamLimits

0x5459,	// (0x0003f9a3) list_double_number_pane_vc_t1

0x546b,	// (0x0003f9b5) list_double_number_pane_vc_t2_ParamLimits

0x546b,	// (0x0003f9b5) list_double_number_pane_vc_t2

0x547d,	// (0x0003f9c7) list_double_number_pane_vc_t3_ParamLimits

0x547d,	// (0x0003f9c7) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00049fab) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00049fab) list_double_number_pane_vc_t

0x6ebb,	// (0x00041405) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6ebb,	// (0x00041405) list_double_large_graphic_pane_vc_g1

0x5495,	// (0x0003f9df) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5495,	// (0x0003f9df) list_double_large_graphic_pane_vc_g2

0x54a9,	// (0x0003f9f3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54a9,	// (0x0003f9f3) list_double_large_graphic_pane_vc_g3

0x54b8,	// (0x0003fa02) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54b8,	// (0x0003fa02) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00049fb2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00049fb2) list_double_large_graphic_pane_vc_g

0x54c7,	// (0x0003fa11) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54c7,	// (0x0003fa11) list_double_large_graphic_pane_vc_t1

0x54e1,	// (0x0003fa2b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x54e1,	// (0x0003fa2b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00049fbb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00049fbb) list_double_large_graphic_pane_vc_t

0x5cd1,	// (0x0004021b) list_double_heading_pane_vc_g1_ParamLimits

0x5cd1,	// (0x0004021b) list_double_heading_pane_vc_g1

0x5cdd,	// (0x00040227) list_double_heading_pane_vc_g2_ParamLimits

0x5cdd,	// (0x00040227) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b1c) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b1c) list_double_heading_pane_vc_g

0x5503,	// (0x0003fa4d) list_double_heading_pane_vc_t1_ParamLimits

0x5503,	// (0x0003fa4d) list_double_heading_pane_vc_t1

0x51b4,	// (0x0003f6fe) list_double_heading_pane_vc_t2_ParamLimits

0x51b4,	// (0x0003f6fe) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00049fc0) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00049fc0) list_double_heading_pane_vc_t

0x5517,	// (0x0003fa61) list_double_graphic_pane_vc_g1_ParamLimits

0x5517,	// (0x0003fa61) list_double_graphic_pane_vc_g1

0x5523,	// (0x0003fa6d) list_double_graphic_pane_vc_g2_ParamLimits

0x5523,	// (0x0003fa6d) list_double_graphic_pane_vc_g2

0x5cd1,	// (0x0004021b) list_double_graphic_pane_vc_g3_ParamLimits

0x5cd1,	// (0x0004021b) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x00049fc5) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00049fc5) list_double_graphic_pane_vc_g

0x5534,	// (0x0003fa7e) list_double_graphic_pane_vc_t1_ParamLimits

0x5534,	// (0x0003fa7e) list_double_graphic_pane_vc_t1

0x5552,	// (0x0003fa9c) list_double_graphic_pane_vc_t2_ParamLimits

0x5552,	// (0x0003fa9c) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x00049fce) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x00049fce) list_double_graphic_pane_vc_t

0x5877,	// (0x0003fdc1) aid_size_cell_fastswap

0x587f,	// (0x0003fdc9) aid_size_cell_touch_ParamLimits

0x587f,	// (0x0003fdc9) aid_size_cell_touch

0x5ada,	// (0x00040024) popup_fast_swap_wide_window_ParamLimits

0x5ada,	// (0x00040024) popup_fast_swap_wide_window

0x5be0,	// (0x0004012a) touch_pane_ParamLimits

0x5be0,	// (0x0004012a) touch_pane

0x88cc,	// (0x00042e16) button_value_adjust_pane_cp2

0x4e50,	// (0x0003f39a) button_value_adjust_pane_cp4

0x4e72,	// (0x0003f3bc) form_field_data_pane_cp2

0x4e91,	// (0x0003f3db) form_field_data_wide_pane_cp2

0x8d38,	// (0x00043282) bg_scroll_pane_ParamLimits

0x5f1c,	// (0x00040466) scroll_handle_pane_ParamLimits

0x5f30,	// (0x0004047a) scroll_sc2_down_pane_ParamLimits

0x5f30,	// (0x0004047a) scroll_sc2_down_pane

0x8d69,	// (0x000432b3) scroll_sc2_up_pane_ParamLimits

0x8d69,	// (0x000432b3) scroll_sc2_up_pane

0xbe9c,	// (0x000463e6) grid_wheel_folder_pane_g1_ParamLimits

0xbe9c,	// (0x000463e6) grid_wheel_folder_pane_g1

0x6108,	// (0x00040652) clock_nsta_pane_cp2_ParamLimits

0x6108,	// (0x00040652) clock_nsta_pane_cp2

0x8ab6,	// (0x00043000) listscroll_midp_pane_ParamLimits

0x9538,	// (0x00043a82) midp_canvas_pane

0x981c,	// (0x00043d66) nsta_clock_indic_pane

0x9850,	// (0x00043d9a) listscroll_form_pane_vc

0x9858,	// (0x00043da2) listscroll_set_pane_vc_ParamLimits

0x9858,	// (0x00043da2) listscroll_set_pane_vc

0x9959,	// (0x00043ea3) clock_nsta_pane

0x99ce,	// (0x00043f18) indicator_nsta_pane

0x9cb2,	// (0x000441fc) bg_popup_sub_pane_cp2_ParamLimits

0x9cc6,	// (0x00044210) find_pane_cp2_ParamLimits

0x9cc6,	// (0x00044210) find_pane_cp2

0x9cdc,	// (0x00044226) grid_toobar_pane_ParamLimits

0x9dbc,	// (0x00044306) list_form_gen_pane_vc_ParamLimits

0x9dbc,	// (0x00044306) list_form_gen_pane_vc

0x9dd2,	// (0x0004431c) scroll_pane_cp8_vc_ParamLimits

0x9dd2,	// (0x0004431c) scroll_pane_cp8_vc

0x9e4e,	// (0x00044398) data_form_wide_pane_vc_ParamLimits

0x9e4e,	// (0x00044398) data_form_wide_pane_vc

0x9e5a,	// (0x000443a4) form_field_data_wide_pane_vc_g1

0x9e62,	// (0x000443ac) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e62,	// (0x000443ac) form_field_data_wide_pane_vc_t1

0x88e0,	// (0x00042e2a) input_focus_pane_cp6_vc_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_cp6_vc

0xa1a0,	// (0x000446ea) list_midp_pane_ParamLimits

0xa1ac,	// (0x000446f6) scroll_pane_cp16_ParamLimits

0xa1ac,	// (0x000446f6) scroll_pane_cp16

0xa1fa,	// (0x00044744) button_value_adjust_pane_ParamLimits

0xa1fa,	// (0x00044744) button_value_adjust_pane

0xb169,	// (0x000456b3) button_value_adjust_pane_cp6_ParamLimits

0xb169,	// (0x000456b3) button_value_adjust_pane_cp6

0xb28b,	// (0x000457d5) settings_code_pane_cp_ParamLimits

0xb28b,	// (0x000457d5) settings_code_pane_cp

0x7f78,	// (0x000424c2) cell_touch_pane_g1

0x7f78,	// (0x000424c2) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00049c52) cell_touch_pane_g

0xb7f5,	// (0x00045d3f) cell_touch_pane_cp_ParamLimits

0xb7f5,	// (0x00045d3f) cell_touch_pane_cp

0xb805,	// (0x00045d4f) cell_touch_pane_ParamLimits

0xb805,	// (0x00045d4f) cell_touch_pane

0x7f78,	// (0x000424c2) scroll_sc2_down_pane_g1

0x7f78,	// (0x000424c2) scroll_sc2_up_pane_g1

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp4_vc

0xb816,	// (0x00045d60) list_set_graphic_pane_vc_g1_ParamLimits

0xb816,	// (0x00045d60) list_set_graphic_pane_vc_g1

0x9a96,	// (0x00043fe0) list_set_graphic_pane_vc_g2_ParamLimits

0x9a96,	// (0x00043fe0) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00049f42) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00049f42) list_set_graphic_pane_vc_g

0xb822,	// (0x00045d6c) text_primary_small_cp13_vc_ParamLimits

0xb822,	// (0x00045d6c) text_primary_small_cp13_vc

0xb83a,	// (0x00045d84) list_set_graphic_pane_vc_ParamLimits

0xb83a,	// (0x00045d84) list_set_graphic_pane_vc

0x7f82,	// (0x000424cc) input_focus_pane_cp2_vc

0x7f78,	// (0x000424c2) setting_code_pane_vc_g1

0x80ad,	// (0x000425f7) setting_code_pane_vc_t1

0xb84e,	// (0x00045d98) set_text_pane_vc_t1_ParamLimits

0xb84e,	// (0x00045d98) set_text_pane_vc_t1

0x7f82,	// (0x000424cc) input_focus_pane_cp1_vc

0xb86b,	// (0x00045db5) list_set_text_pane_vc

0x7f78,	// (0x000424c2) setting_text_pane_vc_g1

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp2_vc

0x80a4,	// (0x000425ee) setting_slider_graphic_pane_vc_g1

0xb875,	// (0x00045dbf) setting_slider_graphic_pane_vc_t1

0xb885,	// (0x00045dcf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00049f47) setting_slider_graphic_pane_vc_t

0xb895,	// (0x00045ddf) slider_set_pane_cp_vc

0xb89d,	// (0x00045de7) slider_set_pane_vc_g1

0xb8a6,	// (0x00045df0) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00049f4c) slider_set_pane_vc_g

0x892f,	// (0x00042e79) set_opt_bg_pane_g1_copy1

0x8937,	// (0x00042e81) set_opt_bg_pane_g2_copy1

0xb8d2,	// (0x00045e1c) set_opt_bg_pane_g3_copy1

0x8947,	// (0x00042e91) set_opt_bg_pane_g4_copy1

0x894f,	// (0x00042e99) set_opt_bg_pane_g5_copy1

0x8957,	// (0x00042ea1) set_opt_bg_pane_g6_copy1

0xb8da,	// (0x00045e24) set_opt_bg_pane_g7_copy1

0xb8e4,	// (0x00045e2e) set_opt_bg_pane_g8_copy1

0xb8ec,	// (0x00045e36) set_opt_bg_pane_g9_copy1

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp_vc

0xb8f4,	// (0x00045e3e) setting_slider_pane_vc_t1

0xb903,	// (0x00045e4d) setting_slider_pane_vc_t2

0xb913,	// (0x00045e5d) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00049f5b) setting_slider_pane_vc_t

0xb923,	// (0x00045e6d) slider_set_pane_vc

0x6a4e,	// (0x00040f98) volume_set_pane_vc_g1

0x6e4f,	// (0x00041399) volume_set_pane_vc_g2

0x6e58,	// (0x000413a2) volume_set_pane_vc_g3

0x6e61,	// (0x000413ab) volume_set_pane_vc_g4

0x6e6a,	// (0x000413b4) volume_set_pane_vc_g5

0x6e73,	// (0x000413bd) volume_set_pane_vc_g6

0x6a7b,	// (0x00040fc5) volume_set_pane_vc_g7

0x6e7c,	// (0x000413c6) volume_set_pane_vc_g8

0x6e85,	// (0x000413cf) volume_set_pane_vc_g9

0x6e8e,	// (0x000413d8) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00049f62) volume_set_pane_vc_g

0xb92b,	// (0x00045e75) volume_set_pane_vc

0xb933,	// (0x00045e7d) button_value_adjust_pane_cp1_vc

0xb93d,	// (0x00045e87) list_highlight_pane_cp2_vc

0xb946,	// (0x00045e90) list_set_pane_vc_ParamLimits

0xb946,	// (0x00045e90) list_set_pane_vc

0xb9a4,	// (0x00045eee) main_pane_set_vc_t1_ParamLimits

0xb9a4,	// (0x00045eee) main_pane_set_vc_t1

0xb9b9,	// (0x00045f03) main_pane_set_vc_t2_ParamLimits

0xb9b9,	// (0x00045f03) main_pane_set_vc_t2

0xb9cb,	// (0x00045f15) main_pane_set_vc_t3_ParamLimits

0xb9cb,	// (0x00045f15) main_pane_set_vc_t3

0xb9dd,	// (0x00045f27) main_pane_set_vc_t4_ParamLimits

0xb9dd,	// (0x00045f27) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00049f77) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00049f77) main_pane_set_vc_t

0xb9ef,	// (0x00045f39) setting_code_pane_vc_ParamLimits

0xb9ef,	// (0x00045f39) setting_code_pane_vc

0xb9fe,	// (0x00045f48) setting_slider_graphic_pane_vc

0xb9fe,	// (0x00045f48) setting_slider_pane_vc

0xb9fe,	// (0x00045f48) setting_text_pane_vc

0xb9fe,	// (0x00045f48) setting_volume_pane_vc

0xba06,	// (0x00045f50) scroll_pane_cp121_vc

0x88ba,	// (0x00042e04) set_content_pane_vc

0xba0e,	// (0x00045f58) button_value_adjust_pane_g1

0xba17,	// (0x00045f61) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00049fd3) button_value_adjust_pane_g

0xba20,	// (0x00045f6a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba20,	// (0x00045f6a) form_field_slider_wide_pane_vc_t1

0xba34,	// (0x00045f7e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba34,	// (0x00045f7e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00049fd8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00049fd8) form_field_slider_wide_pane_vc_t

0x82dd,	// (0x00042827) input_focus_pane_cp10_vc_ParamLimits

0x82dd,	// (0x00042827) input_focus_pane_cp10_vc

0xba60,	// (0x00045faa) slider_cont_pane_cp1_vc_ParamLimits

0xba60,	// (0x00045faa) slider_cont_pane_cp1_vc

0xba70,	// (0x00045fba) slider_form_pane_g1_cp2

0xb8a6,	// (0x00045df0) slider_form_pane_g2_cp2

0xba9d,	// (0x00045fe7) form_field_slider_pane_vc_t3

0xbaab,	// (0x00045ff5) form_field_slider_pane_vc_t4

0xbab9,	// (0x00046003) slider_form_pane_vc_ParamLimits

0xbab9,	// (0x00046003) slider_form_pane_vc

0xbac6,	// (0x00046010) form_field_slider_pane_vc_t1_ParamLimits

0xbac6,	// (0x00046010) form_field_slider_pane_vc_t1

0xba34,	// (0x00045f7e) form_field_slider_pane_vc_t2_ParamLimits

0xba34,	// (0x00045f7e) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x00049fea) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x00049fea) form_field_slider_pane_vc_t

0x82dd,	// (0x00042827) input_focus_pane_cp9_vc_ParamLimits

0x82dd,	// (0x00042827) input_focus_pane_cp9_vc

0xbae2,	// (0x0004602c) slider_cont_pane_vc_ParamLimits

0xbae2,	// (0x0004602c) slider_cont_pane_vc

0xbaf4,	// (0x0004603e) list_form_graphic_pane_cp_vc_ParamLimits

0xbaf4,	// (0x0004603e) list_form_graphic_pane_cp_vc

0x9e5a,	// (0x000443a4) form_field_popup_wide_pane_vc_g1

0xbb09,	// (0x00046053) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb09,	// (0x00046053) form_field_popup_wide_pane_vc_t1

0x88e0,	// (0x00042e2a) input_focus_pane_cp8_vc_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_cp8_vc

0xbb4e,	// (0x00046098) list_form_wide_pane_vc_ParamLimits

0xbb4e,	// (0x00046098) list_form_wide_pane_vc

0xbb5a,	// (0x000460a4) list_form_graphic_pane_vc_g1

0xbb62,	// (0x000460ac) list_form_graphic_pane_vc_t1_ParamLimits

0xbb62,	// (0x000460ac) list_form_graphic_pane_vc_t1

0x8062,	// (0x000425ac) list_highlight_pane_cp5_vc_ParamLimits

0x8062,	// (0x000425ac) list_highlight_pane_cp5_vc

0xbb7e,	// (0x000460c8) list_form_graphic_pane_vc_ParamLimits

0xbb7e,	// (0x000460c8) list_form_graphic_pane_vc

0x9e5a,	// (0x000443a4) form_field_popup_pane_vc_g1

0xbb94,	// (0x000460de) form_field_popup_pane_vc_t1_ParamLimits

0xbb94,	// (0x000460de) form_field_popup_pane_vc_t1

0x88e0,	// (0x00042e2a) input_focus_pane_cp7_vc_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_cp7_vc

0xbbab,	// (0x000460f5) list_form_pane_vc_ParamLimits

0xbbab,	// (0x000460f5) list_form_pane_vc

0xbbb7,	// (0x00046101) data_form_pane_vc_t1_ParamLimits

0xbbb7,	// (0x00046101) data_form_pane_vc_t1

0x892f,	// (0x00042e79) input_focus_pane_vc_g1

0x8937,	// (0x00042e81) input_focus_pane_vc_g2

0x893f,	// (0x00042e89) input_focus_pane_vc_g3

0x8947,	// (0x00042e91) input_focus_pane_vc_g4

0x894f,	// (0x00042e99) input_focus_pane_vc_g5

0x8957,	// (0x00042ea1) input_focus_pane_vc_g6

0x895f,	// (0x00042ea9) input_focus_pane_vc_g7

0x8967,	// (0x00042eb1) input_focus_pane_vc_g8

0x896f,	// (0x00042eb9) input_focus_pane_vc_g9

0x7f78,	// (0x000424c2) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00049bdb) input_focus_pane_vc_g

0x9e4e,	// (0x00044398) data_form_pane_vc_ParamLimits

0x9e4e,	// (0x00044398) data_form_pane_vc

0x9e5a,	// (0x000443a4) form_field_data_pane_vc_g1

0xbbd2,	// (0x0004611c) form_field_data_pane_vc_t1_ParamLimits

0xbbd2,	// (0x0004611c) form_field_data_pane_vc_t1

0x88e0,	// (0x00042e2a) input_focus_pane_vc_ParamLimits

0x88e0,	// (0x00042e2a) input_focus_pane_vc

0xbbec,	// (0x00046136) button_value_adjust_pane_cp3_vc

0xbbf4,	// (0x0004613e) button_value_adjust_pane_cp5_vc

0xbbfc,	// (0x00046146) form_field_data_pane_vc_ParamLimits

0xbbfc,	// (0x00046146) form_field_data_pane_vc

0xbc13,	// (0x0004615d) form_field_data_pane_vc_cp2

0xbc1b,	// (0x00046165) form_field_data_wide_pane_vc_ParamLimits

0xbc1b,	// (0x00046165) form_field_data_wide_pane_vc

0xbc31,	// (0x0004617b) form_field_data_wide_pane_vc_cp2

0xbc39,	// (0x00046183) form_field_popup_pane_vc_ParamLimits

0xbc39,	// (0x00046183) form_field_popup_pane_vc

0xbc50,	// (0x0004619a) form_field_popup_wide_pane_vc_ParamLimits

0xbc50,	// (0x0004619a) form_field_popup_wide_pane_vc

0xbc66,	// (0x000461b0) form_field_slider_pane_vc_ParamLimits

0xbc66,	// (0x000461b0) form_field_slider_pane_vc

0xbc79,	// (0x000461c3) form_field_slider_wide_pane_vc_ParamLimits

0xbc79,	// (0x000461c3) form_field_slider_wide_pane_vc

0xbc8c,	// (0x000461d6) grid_touch_1_pane_ParamLimits

0xbc8c,	// (0x000461d6) grid_touch_1_pane

0xbc98,	// (0x000461e2) grid_touch_2_pane_ParamLimits

0xbc98,	// (0x000461e2) grid_touch_2_pane

0x97e7,	// (0x00043d31) touch_pane_g1_ParamLimits

0x97e7,	// (0x00043d31) touch_pane_g1

0xbcb0,	// (0x000461fa) cell_app_pane_cp_wide_ParamLimits

0xbcb0,	// (0x000461fa) cell_app_pane_cp_wide

0xbcc1,	// (0x0004620b) grid_popup_fast_wide_pane_ParamLimits

0xbcc1,	// (0x0004620b) grid_popup_fast_wide_pane

0xbcd5,	// (0x0004621f) scroll_pane_cp19_ParamLimits

0xbcd5,	// (0x0004621f) scroll_pane_cp19

0x7f82,	// (0x000424cc) bg_popup_window_pane_cp20

0xbce9,	// (0x00046233) listscroll_popup_fast_wide_pane

0x8062,	// (0x000425ac) grid_indicator_nsta_pane

0xbcf1,	// (0x0004623b) clock_nsta_pane_g1

0xbcfa,	// (0x00046244) clock_nsta_pane_t1

0xbd16,	// (0x00046260) cell_indicator_nsta_pane_ParamLimits

0xbd16,	// (0x00046260) cell_indicator_nsta_pane

0xbd47,	// (0x00046291) cell_indicator_nsta_pane_g1

0xbd55,	// (0x0004629f) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00049ffb) cell_indicator_nsta_pane_g

0xbd62,	// (0x000462ac) clock_nsta_pane_cp

0xbd6a,	// (0x000462b4) indicator_nsta_pane_cp

0xbd72,	// (0x000462bc) nsta_clock_indic_pane_g1

0x812b,	// (0x00042675) grid_indicator_pane

0x8e5e,	// (0x000433a8) scroll_pane_cp29

0x6057,	// (0x000405a1) indicator_nsta_pane_cp2_ParamLimits

0x6057,	// (0x000405a1) indicator_nsta_pane_cp2

0x8062,	// (0x000425ac) main_apps_wheel_pane

0xa085,	// (0x000445cf) form_midp_field_text_pane_ParamLimits

0xa1cc,	// (0x00044716) scroll_bar_cp050_ParamLimits

0xbdd3,	// (0x0004631d) cell_indicator_pane_ParamLimits

0xbdd3,	// (0x0004631d) cell_indicator_pane

0xbdee,	// (0x00046338) cell_indicator_pane_g1

0xbdf8,	// (0x00046342) grid_wheel_folder_pane_ParamLimits

0xbdf8,	// (0x00046342) grid_wheel_folder_pane

0xbe0e,	// (0x00046358) list_wheel_apps_pane_ParamLimits

0xbe0e,	// (0x00046358) list_wheel_apps_pane

0xbe1f,	// (0x00046369) main_apps_wheel_pane_g1_ParamLimits

0xbe1f,	// (0x00046369) main_apps_wheel_pane_g1

0xbe33,	// (0x0004637d) main_apps_wheel_pane_g2_ParamLimits

0xbe33,	// (0x0004637d) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x0004a017) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x0004a017) main_apps_wheel_pane_g

0xbe4b,	// (0x00046395) main_apps_wheel_pane_t1_ParamLimits

0xbe4b,	// (0x00046395) main_apps_wheel_pane_t1

0xbe6e,	// (0x000463b8) list_wheel_apps_pane_g1

0xbe76,	// (0x000463c0) list_wheel_apps_pane_g2

0xbe7e,	// (0x000463c8) list_wheel_apps_pane_g3

0xbe88,	// (0x000463d2) list_wheel_apps_pane_g4

0xbe92,	// (0x000463dc) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x0004a01c) list_wheel_apps_pane_g

0x93b0,	// (0x000438fa) navi_icon_text_pane

0x988c,	// (0x00043dd6) aid_fill_nsta

0xbeb5,	// (0x000463ff) navi_icon_text_pane_g1

0xbec1,	// (0x0004640b) navi_icon_text_pane_t1

0x9247,	// (0x00043791) list_set_graphic_pane_t1_ParamLimits

0x9247,	// (0x00043791) list_set_graphic_pane_t1

0xa91e,	// (0x00044e68) popup_midp_note_alarm_window_t6_ParamLimits

0xa91e,	// (0x00044e68) popup_midp_note_alarm_window_t6

0xa930,	// (0x00044e7a) popup_midp_note_alarm_window_t7_ParamLimits

0xa930,	// (0x00044e7a) popup_midp_note_alarm_window_t7

0xa942,	// (0x00044e8c) popup_midp_note_alarm_window_t8_ParamLimits

0xa942,	// (0x00044e8c) popup_midp_note_alarm_window_t8

0xa954,	// (0x00044e9e) popup_midp_note_alarm_window_t9_ParamLimits

0xa954,	// (0x00044e9e) popup_midp_note_alarm_window_t9

0xa966,	// (0x00044eb0) popup_midp_note_alarm_window_t10_ParamLimits

0xa966,	// (0x00044eb0) popup_midp_note_alarm_window_t10

0xa978,	// (0x00044ec2) popup_midp_note_alarm_window_t11_ParamLimits

0xa978,	// (0x00044ec2) popup_midp_note_alarm_window_t11

0xa98a,	// (0x00044ed4) scroll_pane_cp17_ParamLimits

0xa98a,	// (0x00044ed4) scroll_pane_cp17

0x6a4e,	// (0x00040f98) volume_small_pane_cp_g1

0x6ee3,	// (0x0004142d) volume_small_pane_cp_g2

0x6eec,	// (0x00041436) volume_small_pane_cp_g3

0x6a60,	// (0x00040faa) volume_small_pane_cp_g4

0x6ef5,	// (0x0004143f) volume_small_pane_cp_g5

0x6e6a,	// (0x000413b4) volume_small_pane_cp_g6

0x6a72,	// (0x00040fbc) volume_small_pane_cp_g7

0x6efe,	// (0x00041448) volume_small_pane_cp_g8

0x6f07,	// (0x00041451) volume_small_pane_cp_g9

0x6a84,	// (0x00040fce) volume_small_pane_cp_g10

0x9605,	// (0x00043b4f) midp_ticker_pane_g1_ParamLimits

0x9611,	// (0x00043b5b) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049ca7) midp_ticker_pane_g_ParamLimits

0x961d,	// (0x00043b67) midp_ticker_pane_t1_ParamLimits

0x98a2,	// (0x00043dec) aid_fill_nsta_2

0xa1b8,	// (0x00044702) list_form2_midp_pane

0xb2d6,	// (0x00045820) midp_editing_number_pane_ParamLimits

0xb2e5,	// (0x0004582f) midp_ticker_pane_ParamLimits

0xbed3,	// (0x0004641d) form2_midp_field_pane

0xbef7,	// (0x00046441) scroll_pane_cp51

0xbf17,	// (0x00046461) form2_midp_button_pane_ParamLimits

0xbf17,	// (0x00046461) form2_midp_button_pane

0xbf29,	// (0x00046473) form2_midp_content_pane_ParamLimits

0xbf29,	// (0x00046473) form2_midp_content_pane

0xbf43,	// (0x0004648d) form2_midp_field_choice_group_pane

0xbf4b,	// (0x00046495) form2_midp_field_pane_g1

0xbf53,	// (0x0004649d) form2_midp_field_pane_g2

0xbf5b,	// (0x000464a5) form2_midp_field_pane_g3

0xbf63,	// (0x000464ad) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0004a041) form2_midp_field_pane_g

0xbf6b,	// (0x000464b5) form2_midp_gauge_slider_pane

0xbf73,	// (0x000464bd) form2_midp_gauge_wait_pane

0xbf7b,	// (0x000464c5) form2_midp_image_pane_ParamLimits

0xbf7b,	// (0x000464c5) form2_midp_image_pane

0xbf96,	// (0x000464e0) form2_midp_label_pane_ParamLimits

0xbf96,	// (0x000464e0) form2_midp_label_pane

0xbfaf,	// (0x000464f9) form2_midp_label_pane_cp_ParamLimits

0xbfaf,	// (0x000464f9) form2_midp_label_pane_cp

0xbfd0,	// (0x0004651a) form2_midp_string_pane_ParamLimits

0xbfd0,	// (0x0004651a) form2_midp_string_pane

0x557c,	// (0x0003fac6) form2_midp_text_pane_ParamLimits

0x557c,	// (0x0003fac6) form2_midp_text_pane

0xbfe2,	// (0x0004652c) form2_midp_time_pane

0xbff2,	// (0x0004653c) input_focus_pane_cp51_ParamLimits

0xbff2,	// (0x0004653c) input_focus_pane_cp51

0xc00a,	// (0x00046554) form2_midp_label_pane_t1_ParamLimits

0xc00a,	// (0x00046554) form2_midp_label_pane_t1

0x5597,	// (0x0003fae1) form2_mdip_text_pane_t1_ParamLimits

0x5597,	// (0x0003fae1) form2_mdip_text_pane_t1

0x55b3,	// (0x0003fafd) form2_midp_time_pane_t1

0xc052,	// (0x0004659c) form2_midp_gauge_slider_pane_t1

0xc064,	// (0x000465ae) form2_midp_gauge_slider_pane_t2

0xc076,	// (0x000465c0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0004a04a) form2_midp_gauge_slider_pane_t

0xc088,	// (0x000465d2) form2_midp_slider_pane

0xc094,	// (0x000465de) form2_midp_gauge_wait_pane_t1

0xc0a2,	// (0x000465ec) form2_midp_wait_pane_ParamLimits

0xc0a2,	// (0x000465ec) form2_midp_wait_pane

0xc0ce,	// (0x00046618) list_single_2graphic_pane_cp4_ParamLimits

0xc0ce,	// (0x00046618) list_single_2graphic_pane_cp4

0x9ec9,	// (0x00044413) list_single_midp_graphic_pane_cp_ParamLimits

0x9ec9,	// (0x00044413) list_single_midp_graphic_pane_cp

0x7f82,	// (0x000424cc) list_highlight_pane_cp20

0xc0fc,	// (0x00046646) list_single_2graphic_pane_g1_cp4

0xb6fa,	// (0x00045c44) list_single_2graphic_pane_g2_cp4

0xc104,	// (0x0004664e) list_single_2graphic_pane_t1_cp4

0x8062,	// (0x000425ac) list_highlight_pane_cp21

0xc113,	// (0x0004665d) list_single_midp_graphic_pane_g4_cp

0xc122,	// (0x0004666c) list_single_midp_graphic_pane_t1_cp

0xc137,	// (0x00046681) form2_mdip_string_pane_t1_ParamLimits

0xc137,	// (0x00046681) form2_mdip_string_pane_t1

0x7f82,	// (0x000424cc) bg_wml_button_pane_cp2

0x7f78,	// (0x000424c2) form2_midp_image_pane_g1

0x5d3f,	// (0x00040289) list_double_large_graphic_pane_g5_ParamLimits

0x5d3f,	// (0x00040289) list_double_large_graphic_pane_g5

0x8ab6,	// (0x00043000) midp_form_pane_ParamLimits

0x8062,	// (0x000425ac) main_apps_wheel_pane_ParamLimits

0x6716,	// (0x00040c60) popup_preview_window_ParamLimits

0x6716,	// (0x00040c60) popup_preview_window

0x68cd,	// (0x00040e17) popup_touch_info_window_ParamLimits

0x68cd,	// (0x00040e17) popup_touch_info_window

0x68eb,	// (0x00040e35) popup_touch_menu_window_ParamLimits

0x68eb,	// (0x00040e35) popup_touch_menu_window

0x7f6e,	// (0x000424b8) bg_popup_sub_pane_cp6

0xc25a,	// (0x000467a4) list_touch_menu_pane

0xc262,	// (0x000467ac) list_single_touch_menu_pane_ParamLimits

0xc262,	// (0x000467ac) list_single_touch_menu_pane

0xc276,	// (0x000467c0) list_single_touch_menu_pane_t1

0x8062,	// (0x000425ac) bg_popup_sub_pane_cp7_ParamLimits

0x8062,	// (0x000425ac) bg_popup_sub_pane_cp7

0xc284,	// (0x000467ce) heading_sub_pane

0xc28c,	// (0x000467d6) list_touch_info_pane_ParamLimits

0xc28c,	// (0x000467d6) list_touch_info_pane

0xc29b,	// (0x000467e5) list_single_touch_info_pane_ParamLimits

0xc29b,	// (0x000467e5) list_single_touch_info_pane

0xc2ad,	// (0x000467f7) list_single_touch_info_pane_t1

0xc2bb,	// (0x00046805) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x0004a058) list_single_touch_info_pane_t

0x9530,	// (0x00043a7a) bg_popup_heading_pane_cp

0xc2c9,	// (0x00046813) heading_sub_pane_t1

0x9de8,	// (0x00044332) bg_popup_preview_window_pane_cp_ParamLimits

0x9de8,	// (0x00044332) bg_popup_preview_window_pane_cp

0xc284,	// (0x000467ce) heading_preview_pane

0xc28c,	// (0x000467d6) list_preview_pane_ParamLimits

0xc28c,	// (0x000467d6) list_preview_pane

0xc2d7,	// (0x00046821) popup_preview_window_g1

0xc29b,	// (0x000467e5) list_single_preview_pane_ParamLimits

0xc29b,	// (0x000467e5) list_single_preview_pane

0xc2df,	// (0x00046829) list_single_preview_pane_g1

0xc2e7,	// (0x00046831) list_single_preview_pane_t1

0xc2ad,	// (0x000467f7) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x0004a05d) list_single_preview_pane_t

0xc2f5,	// (0x0004683f) bg_popup_heading_pane_cp2_ParamLimits

0xc2f5,	// (0x0004683f) bg_popup_heading_pane_cp2

0xc30b,	// (0x00046855) heading_preview_pane_g1

0xc313,	// (0x0004685d) heading_preview_pane_t1_ParamLimits

0xc313,	// (0x0004685d) heading_preview_pane_t1

0x814e,	// (0x00042698) soft_indicator_pane_t1_ParamLimits

0x882f,	// (0x00042d79) scroll_pane_ParamLimits

0x8d57,	// (0x000432a1) scroll_sc2_left_pane

0x8d60,	// (0x000432aa) scroll_sc2_right_pane

0x8d7f,	// (0x000432c9) scroll_bg_pane_g1_ParamLimits

0x8d94,	// (0x000432de) scroll_bg_pane_g2_ParamLimits

0x8dac,	// (0x000432f6) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049c32) scroll_bg_pane_g_ParamLimits

0x8d7f,	// (0x000432c9) scroll_handle_pane_g1_ParamLimits

0x8dce,	// (0x00043318) scroll_handle_pane_g2_ParamLimits

0x8dac,	// (0x000432f6) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049c39) scroll_handle_pane_g_ParamLimits

0x639d,	// (0x000408e7) popup_choice_list_window_ParamLimits

0x639d,	// (0x000408e7) popup_choice_list_window

0x9cbe,	// (0x00044208) choice_list_pane

0x9d40,	// (0x0004428a) cell_toolbar_pane_t1

0x9d68,	// (0x000442b2) toolbar_button_pane_ParamLimits

0xae44,	// (0x0004538e) ai_gene_pane_1_t2_ParamLimits

0xae44,	// (0x0004538e) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00049e5c) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00049e5c) ai_gene_pane_1_t

0xc330,	// (0x0004687a) scroll_sc2_left_pane_g1

0xc330,	// (0x0004687a) scroll_sc2_right_pane_g1

0x986a,	// (0x00043db4) bg_popup_sub_pane_cp10

0xc33a,	// (0x00046884) list_choice_list_pane

0xc353,	// (0x0004689d) list_single_choice_list_pane_ParamLimits

0xc353,	// (0x0004689d) list_single_choice_list_pane

0xc366,	// (0x000468b0) list_single_choice_list_pane_g1

0x8a66,	// (0x00042fb0) list_single_choice_list_pane_t1_ParamLimits

0x8a66,	// (0x00042fb0) list_single_choice_list_pane_t1

0xc36e,	// (0x000468b8) choice_list_pane_g1

0xc376,	// (0x000468c0) choice_list_pane_t1

0x7f6e,	// (0x000424b8) input_focus_pane_cp11

0x8c3a,	// (0x00043184) title_pane_stacon_g2_ParamLimits

0x8c3a,	// (0x00043184) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049c18) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049c18) title_pane_stacon_g

0x9530,	// (0x00043a7a) cursor_press_pane

0x6445,	// (0x0004098f) popup_fep_hwr_window_ParamLimits

0x6445,	// (0x0004098f) popup_fep_hwr_window

0x64bd,	// (0x00040a07) popup_fep_vkb_window_ParamLimits

0x64bd,	// (0x00040a07) popup_fep_vkb_window

0xc384,	// (0x000468ce) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0004a086) fep_vkb_side_pane_g_ParamLimits

0x6f49,	// (0x00041493) fep_hwr_candidate_pane_ParamLimits

0x6f49,	// (0x00041493) fep_hwr_candidate_pane

0x6f73,	// (0x000414bd) fep_hwr_side_pane_ParamLimits

0x6f73,	// (0x000414bd) fep_hwr_side_pane

0x6f93,	// (0x000414dd) fep_hwr_top_pane_ParamLimits

0x6f93,	// (0x000414dd) fep_hwr_top_pane

0x6fab,	// (0x000414f5) fep_hwr_write_pane_ParamLimits

0x6fab,	// (0x000414f5) fep_hwr_write_pane

0xfb3c,	// (0x0004a086) fep_vkb_side_pane_g

0xc38c,	// (0x000468d6) fep_hwr_top_pane_g1

0xc39e,	// (0x000468e8) fep_hwr_top_pane_g2

0x6fd7,	// (0x00041521) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0004a062) fep_hwr_top_pane_g

0x6fec,	// (0x00041536) fep_hwr_top_text_pane

0x8f24,	// (0x0004346e) fep_hwr_top_text_pane_g1

0xc3d4,	// (0x0004691e) fep_hwr_top_text_pane_t1

0x70e2,	// (0x0004162c) fep_hwr_candidate_pane_g1

0xc617,	// (0x00046b61) fep_vkb_keypad_pane_g3_ParamLimits

0xc617,	// (0x00046b61) fep_vkb_keypad_pane_g3

0xc63f,	// (0x00046b89) fep_vkb_keypad_pane_g4_ParamLimits

0xc63f,	// (0x00046b89) fep_vkb_keypad_pane_g4

0xc6ae,	// (0x00046bf8) fep_vkb_bottom_pane_g2_ParamLimits

0xc6ae,	// (0x00046bf8) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0004a08d) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0004a08d) fep_vkb_bottom_pane_g

0xc330,	// (0x0004687a) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0004a097) cell_vkb_side_pane_g

0xc739,	// (0x00046c83) cell_vkb_side_pane_t1

0xc747,	// (0x00046c91) cell_vkb_side_pane_t1_copy1

0xc330,	// (0x0004687a) bg_fep_vkb_candidate_pane_g2

0xc873,	// (0x00046dbd) cell_vkb_candidate_pane_ParamLimits

0xc3e2,	// (0x0004692c) aid_size_cell_vkb_ParamLimits

0xc3e2,	// (0x0004692c) aid_size_cell_vkb

0xc873,	// (0x00046dbd) cell_vkb_candidate_pane

0x70fc,	// (0x00041646) bg_popup_fep_shadow_pane_g1

0xc46e,	// (0x000469b8) fep_vkb_bottom_pane_ParamLimits

0xc46e,	// (0x000469b8) fep_vkb_bottom_pane

0xc4a4,	// (0x000469ee) fep_vkb_candidate_pane_ParamLimits

0xc4a4,	// (0x000469ee) fep_vkb_candidate_pane

0xc4c0,	// (0x00046a0a) fep_vkb_keypad_pane_ParamLimits

0xc4c0,	// (0x00046a0a) fep_vkb_keypad_pane

0xc4ff,	// (0x00046a49) fep_vkb_side_pane_ParamLimits

0xc4ff,	// (0x00046a49) fep_vkb_side_pane

0xc53b,	// (0x00046a85) fep_vkb_top_pane_ParamLimits

0xc53b,	// (0x00046a85) fep_vkb_top_pane

0xc570,	// (0x00046aba) fep_vkb_top_pane_g1_ParamLimits

0xc570,	// (0x00046aba) fep_vkb_top_pane_g1

0xc57f,	// (0x00046ac9) fep_vkb_top_pane_g2_ParamLimits

0xc57f,	// (0x00046ac9) fep_vkb_top_pane_g2

0xc58e,	// (0x00046ad8) fep_vkb_top_pane_g3_ParamLimits

0xc58e,	// (0x00046ad8) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0004a07d) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0004a07d) fep_vkb_top_pane_g

0xc5ac,	// (0x00046af6) fep_vkb_top_text_pane_ParamLimits

0xc5ac,	// (0x00046af6) fep_vkb_top_text_pane

0xc5bd,	// (0x00046b07) fep_vkb_side_pane_g1_ParamLimits

0xc5bd,	// (0x00046b07) fep_vkb_side_pane_g1

0xc606,	// (0x00046b50) grid_vkb_side_pane_ParamLimits

0xc606,	// (0x00046b50) grid_vkb_side_pane

0x7104,	// (0x0004164e) bg_popup_fep_shadow_pane_g2

0x710d,	// (0x00041657) bg_popup_fep_shadow_pane_g3

0x7115,	// (0x0004165f) bg_popup_fep_shadow_pane_g4

0x711e,	// (0x00041668) bg_popup_fep_shadow_pane_g5

0x7128,	// (0x00041672) bg_popup_fep_shadow_pane_g6

0x7130,	// (0x0004167a) bg_popup_fep_shadow_pane_g7

0x894f,	// (0x00042e99) bg_popup_fep_shadow_pane_g8

0xc65d,	// (0x00046ba7) grid_vkb_keypad_number_pane_ParamLimits

0xc65d,	// (0x00046ba7) grid_vkb_keypad_number_pane

0xc66d,	// (0x00046bb7) grid_vkb_keypad_pane_ParamLimits

0xc66d,	// (0x00046bb7) grid_vkb_keypad_pane

0xc693,	// (0x00046bdd) fep_vkb_bottom_pane_g1_ParamLimits

0xc693,	// (0x00046bdd) fep_vkb_bottom_pane_g1

0xc6bc,	// (0x00046c06) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6bc,	// (0x00046c06) grid_vkb_keypad_bottom_left_pane

0xc6d1,	// (0x00046c1b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6d1,	// (0x00046c1b) grid_vkb_keypad_bottom_right_pane

0xc6e6,	// (0x00046c30) fep_vkb_top_text_pane_g1

0xc701,	// (0x00046c4b) fep_vkb_top_text_pane_t1

0xc716,	// (0x00046c60) cell_vkb_side_pane_ParamLimits

0xc716,	// (0x00046c60) cell_vkb_side_pane

0xc330,	// (0x0004687a) cell_vkb_side_pane_g1

0xc755,	// (0x00046c9f) cell_vkb_keypad_pane_ParamLimits

0xc755,	// (0x00046c9f) cell_vkb_keypad_pane

0xc7ca,	// (0x00046d14) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0004a0aa) bg_popup_fep_shadow_pane_g

0xc330,	// (0x0004687a) cell_hwr_side_pane_g1

0xc330,	// (0x0004687a) cell_hwr_side_pane_g2

0xc7d4,	// (0x00046d1e) cell_vkb_keypad_pane_t1

0xc7e2,	// (0x00046d2c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7e2,	// (0x00046d2c) cell_vkb_keypad_bottom_left_pane

0xc7ff,	// (0x00046d49) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7ff,	// (0x00046d49) cell_vkb_keypad_bottom_right_pane

0xc330,	// (0x0004687a) cell_vkb_keypad_bottom_left_pane_g1

0xc330,	// (0x0004687a) cell_vkb_keypad_bottom_right_pane_g1

0xc838,	// (0x00046d82) cell_vkb_keypad_number_pane_ParamLimits

0xc838,	// (0x00046d82) cell_vkb_keypad_number_pane

0xc857,	// (0x00046da1) cell_vkb_keypad_number_pane_g1

0xc861,	// (0x00046dab) cell_vkb_keypad_number_pane_g2

0xc86a,	// (0x00046db4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0004a09c) cell_vkb_keypad_number_pane_g

0xc7d4,	// (0x00046d1e) cell_vkb_keypad_number_pane_t1

0xc88e,	// (0x00046dd8) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0004a097) cell_hwr_side_pane_g

0xc8a7,	// (0x00046df1) cell_hwr_side_pane_t1

0x7142,	// (0x0004168c) cell_hwr_side_pane_t1_copy1

0xc59e,	// (0x00046ae8) cell_hwr_candidate_pane_g1

0x7150,	// (0x0004169a) cell_hwr_candidate_pane_t1

0xc330,	// (0x0004687a) cell_vkb_candidate_pane_g2

0xc92d,	// (0x00046e77) cell_vkb_candidate_pane_t1

0x6f10,	// (0x0004145a) bg_popup_fep_shadow_pane_ParamLimits

0x6f10,	// (0x0004145a) bg_popup_fep_shadow_pane

0x2e18,	// (0x0003d362) bg_fep_hwr_top_pane_g4

0xc3b0,	// (0x000468fa) bg_hwr_side_pane_g1_ParamLimits

0xc3b0,	// (0x000468fa) bg_hwr_side_pane_g1

0x7028,	// (0x00041572) cell_hwr_side_pane_ParamLimits

0x7028,	// (0x00041572) cell_hwr_side_pane

0x7063,	// (0x000415ad) fep_hwr_write_pane_g1_ParamLimits

0x7063,	// (0x000415ad) fep_hwr_write_pane_g1

0x7070,	// (0x000415ba) fep_hwr_write_pane_g2_ParamLimits

0x7070,	// (0x000415ba) fep_hwr_write_pane_g2

0x707d,	// (0x000415c7) fep_hwr_write_pane_g3_ParamLimits

0x707d,	// (0x000415c7) fep_hwr_write_pane_g3

0x708b,	// (0x000415d5) fep_hwr_write_pane_g4_ParamLimits

0x708b,	// (0x000415d5) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0004a069) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0004a069) fep_hwr_write_pane_g

0x2e18,	// (0x0003d362) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2e18,	// (0x0003d362) bg_fep_hwr_candidate_pane_g2

0x70a0,	// (0x000415ea) cell_hwr_candidate_pane_ParamLimits

0x70a0,	// (0x000415ea) cell_hwr_candidate_pane

0x70e2,	// (0x0004162c) fep_hwr_candidate_pane_g1_ParamLimits

0xc410,	// (0x0004695a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc410,	// (0x0004695a) bg_popup_fep_shadow_pane_cp2

0xc59e,	// (0x00046ae8) fep_vkb_top_pane_g4_ParamLimits

0xc59e,	// (0x00046ae8) fep_vkb_top_pane_g4

0xc5e4,	// (0x00046b2e) fep_vkb_side_pane_g2_ParamLimits

0xc5e4,	// (0x00046b2e) fep_vkb_side_pane_g2

0x4d7d,	// (0x0003f2c7) list_setting_pane_t4_ParamLimits

0x4d7d,	// (0x0003f2c7) list_setting_pane_t4

0x4e17,	// (0x0003f361) list_setting_number_pane_t5_ParamLimits

0x4e17,	// (0x0003f361) list_setting_number_pane_t5

0x8f6b,	// (0x000434b5) list_double_heading_pane_cp2_ParamLimits

0x8f6b,	// (0x000434b5) list_double_heading_pane_cp2

0x887b,	// (0x00042dc5) list_double_heading_pane_g1_cp2_ParamLimits

0x887b,	// (0x00042dc5) list_double_heading_pane_g1_cp2

0x88ee,	// (0x00042e38) list_double_heading_pane_g2_cp2_ParamLimits

0x88ee,	// (0x00042e38) list_double_heading_pane_g2_cp2

0xc93b,	// (0x00046e85) list_double_heading_pane_t1_cp2_ParamLimits

0xc93b,	// (0x00046e85) list_double_heading_pane_t1_cp2

0xc951,	// (0x00046e9b) list_double_heading_pane_t2_cp2_ParamLimits

0xc951,	// (0x00046e9b) list_double_heading_pane_t2_cp2

0x7f56,	// (0x000424a0) aid_value_unit2

0x5b26,	// (0x00040070) popup_preview_fixed_window

0x82eb,	// (0x00042835) bg_popup_preview_window_pane_cp02

0xc963,	// (0x00046ead) list_preview_fixed_pane

0xc9a9,	// (0x00046ef3) list_empty_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_empty_pane_fp

0xc9a9,	// (0x00046ef3) list_single_cale_day_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_single_cale_day_pane_fp

0xc9a9,	// (0x00046ef3) list_single_graphic_heading_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_single_graphic_heading_pane_fp

0xc9a9,	// (0x00046ef3) list_single_graphic_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_single_graphic_pane_fp

0xc9a9,	// (0x00046ef3) list_single_heading_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_single_heading_pane_fp

0xc9a9,	// (0x00046ef3) list_single_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_single_pane_fp

0xc9bf,	// (0x00046f09) list_single_pane_fp_g1_ParamLimits

0xc9bf,	// (0x00046f09) list_single_pane_fp_g1

0x887b,	// (0x00042dc5) list_single_pane_fp_g2_ParamLimits

0x887b,	// (0x00042dc5) list_single_pane_fp_g2

0x88ee,	// (0x00042e38) list_single_pane_fp_g3_ParamLimits

0x88ee,	// (0x00042e38) list_single_pane_fp_g3

0xc9cb,	// (0x00046f15) list_single_pane_fp_g4_ParamLimits

0xc9cb,	// (0x00046f15) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0004a0cb) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0004a0cb) list_single_pane_fp_g

0x55c6,	// (0x0003fb10) list_single_pane_fp_t1_ParamLimits

0x55c6,	// (0x0003fb10) list_single_pane_fp_t1

0x55dd,	// (0x0003fb27) list_single_graphic_pane_fp_g1_ParamLimits

0x55dd,	// (0x0003fb27) list_single_graphic_pane_fp_g1

0xc9bf,	// (0x00046f09) list_single_graphic_pane_fp_g2_ParamLimits

0xc9bf,	// (0x00046f09) list_single_graphic_pane_fp_g2

0x887b,	// (0x00042dc5) list_single_graphic_pane_fp_g3_ParamLimits

0x887b,	// (0x00042dc5) list_single_graphic_pane_fp_g3

0x88ee,	// (0x00042e38) list_single_graphic_pane_fp_g4_ParamLimits

0x88ee,	// (0x00042e38) list_single_graphic_pane_fp_g4

0xc9cb,	// (0x00046f15) list_single_graphic_pane_fp_g5_ParamLimits

0xc9cb,	// (0x00046f15) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a0d4) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a0d4) list_single_graphic_pane_fp_g

0x55e9,	// (0x0003fb33) list_single_graphic_pane_fp_t1_ParamLimits

0x55e9,	// (0x0003fb33) list_single_graphic_pane_fp_t1

0x55dd,	// (0x0003fb27) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x55dd,	// (0x0003fb27) list_single_graphic_heading_pane_fp_g1

0xc9bf,	// (0x00046f09) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc9bf,	// (0x00046f09) list_single_graphic_heading_pane_fp_g2

0x887b,	// (0x00042dc5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x887b,	// (0x00042dc5) list_single_graphic_heading_pane_fp_g3

0x88ee,	// (0x00042e38) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x88ee,	// (0x00042e38) list_single_graphic_heading_pane_fp_g4

0xc9cb,	// (0x00046f15) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9cb,	// (0x00046f15) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a0d4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a0d4) list_single_graphic_heading_pane_fp_g

0x55ff,	// (0x0003fb49) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x55ff,	// (0x0003fb49) list_single_graphic_heading_pane_fp_t1

0x5615,	// (0x0003fb5f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5615,	// (0x0003fb5f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0004a0df) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0004a0df) list_single_graphic_heading_pane_fp_t

0x5627,	// (0x0003fb71) list_single_cale_day_pane_fp_g1_ParamLimits

0x5627,	// (0x0003fb71) list_single_cale_day_pane_fp_g1

0xc9d7,	// (0x00046f21) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9d7,	// (0x00046f21) list_single_cale_day_pane_fp_g2

0x716e,	// (0x000416b8) list_single_cale_day_pane_fp_g3_ParamLimits

0x716e,	// (0x000416b8) list_single_cale_day_pane_fp_g3

0x7196,	// (0x000416e0) list_single_cale_day_pane_fp_g4_ParamLimits

0x7196,	// (0x000416e0) list_single_cale_day_pane_fp_g4

0x71ba,	// (0x00041704) list_single_cale_day_pane_fp_g5_ParamLimits

0x71ba,	// (0x00041704) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0004a0e4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0004a0e4) list_single_cale_day_pane_fp_g

0x565f,	// (0x0003fba9) list_single_cale_day_pane_fp_t1_ParamLimits

0x565f,	// (0x0003fba9) list_single_cale_day_pane_fp_t1

0x5685,	// (0x0003fbcf) list_single_cale_day_pane_fp_t2_ParamLimits

0x5685,	// (0x0003fbcf) list_single_cale_day_pane_fp_t2

0x569e,	// (0x0003fbe8) list_single_cale_day_pane_fp_t3_ParamLimits

0x569e,	// (0x0003fbe8) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0004a0ef) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0004a0ef) list_single_cale_day_pane_fp_t

0xc9bf,	// (0x00046f09) list_empty_pane_fp_g1_ParamLimits

0xc9bf,	// (0x00046f09) list_empty_pane_fp_g1

0x56b7,	// (0x0003fc01) list_empty_pane_fp_t1

0x56c5,	// (0x0003fc0f) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0004a0f6) list_empty_pane_fp_t

0xc9bf,	// (0x00046f09) list_single_heading_pane_fp_g1_ParamLimits

0xc9bf,	// (0x00046f09) list_single_heading_pane_fp_g1

0x887b,	// (0x00042dc5) list_single_heading_pane_fp_g2_ParamLimits

0x887b,	// (0x00042dc5) list_single_heading_pane_fp_g2

0x88ee,	// (0x00042e38) list_single_heading_pane_fp_g3_ParamLimits

0x88ee,	// (0x00042e38) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0004a0fb) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0004a0fb) list_single_heading_pane_fp_g

0x56d3,	// (0x0003fc1d) list_single_heading_pane_fp_t1_ParamLimits

0x56d3,	// (0x0003fc1d) list_single_heading_pane_fp_t1

0x56e5,	// (0x0003fc2f) list_single_heading_pane_fp_t2_ParamLimits

0x56e5,	// (0x0003fc2f) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0004a102) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0004a102) list_single_heading_pane_fp_t

0x8ad4,	// (0x0004301e) aid_size_cell_fast

0x825b,	// (0x000427a5) soft_indicator_pane_cp1_t1

0x8b0e,	// (0x00043058) cell_app_pane_cp2_ParamLimits

0x8b0e,	// (0x00043058) cell_app_pane_cp2

0x6f32,	// (0x0004147c) fep_hwr_candidate_drop_down_list_pane

0x2e26,	// (0x0003d370) fep_hwr_candidate_pane_g3_ParamLimits

0x2e26,	// (0x0003d370) fep_hwr_candidate_pane_g3

0x2e33,	// (0x0003d37d) fep_hwr_candidate_pane_g4_ParamLimits

0x2e33,	// (0x0003d37d) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0004a076) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0004a076) fep_hwr_candidate_pane_g

0xc493,	// (0x000469dd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc493,	// (0x000469dd) fep_vkb_candidate_drop_down_list_pane

0xc896,	// (0x00046de0) fep_vkb_candidate_pane_g3

0xc89e,	// (0x00046de8) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x0004a0a3) fep_vkb_candidate_pane_g

0xc59e,	// (0x00046ae8) cell_hwr_candidate_pane_g1_ParamLimits

0xc8b5,	// (0x00046dff) cell_hwr_candidate_pane_g3_ParamLimits

0xc8b5,	// (0x00046dff) cell_hwr_candidate_pane_g3

0xc8d6,	// (0x00046e20) cell_hwr_candidate_pane_g4_ParamLimits

0xc8d6,	// (0x00046e20) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0004a0bd) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0004a0bd) cell_hwr_candidate_pane_g

0xc8f7,	// (0x00046e41) cell_vkb_candidate_pane_g3_ParamLimits

0xc8f7,	// (0x00046e41) cell_vkb_candidate_pane_g3

0xc912,	// (0x00046e5c) cell_vkb_candidate_pane_g4_ParamLimits

0xc912,	// (0x00046e5c) cell_vkb_candidate_pane_g4

0xc9e3,	// (0x00046f2d) cell_app_pane_cp2_g1_ParamLimits

0xc9e3,	// (0x00046f2d) cell_app_pane_cp2_g1

0xca01,	// (0x00046f4b) cell_app_pane_cp2_g2_ParamLimits

0xca01,	// (0x00046f4b) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0004a107) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0004a107) cell_app_pane_cp2_g

0xca0d,	// (0x00046f57) cell_app_pane_cp2_t1_ParamLimits

0xca0d,	// (0x00046f57) cell_app_pane_cp2_t1

0x88e0,	// (0x00042e2a) grid_highlight_pane_cp1_ParamLimits

0x88e0,	// (0x00042e2a) grid_highlight_pane_cp1

0x71de,	// (0x00041728) cell_hwr_candidate_pane_cp1_ParamLimits

0x71de,	// (0x00041728) cell_hwr_candidate_pane_cp1

0xc59e,	// (0x00046ae8) fep_hwr_candidate_drop_down_list_pane_g1

0xca1f,	// (0x00046f69) fep_hwr_candidate_drop_down_list_pane_g2

0xca2c,	// (0x00046f76) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0004a10c) fep_hwr_candidate_drop_down_list_pane_g

0x71fd,	// (0x00041747) fep_hwr_candidate_drop_down_list_scroll_pane

0x7206,	// (0x00041750) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7206,	// (0x00041750) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7213,	// (0x0004175d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7213,	// (0x0004175d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7220,	// (0x0004176a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7220,	// (0x0004176a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8f7,	// (0x00046e41) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8f7,	// (0x00046e41) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc912,	// (0x00046e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc912,	// (0x00046e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x722d,	// (0x00041777) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x722d,	// (0x00041777) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7248,	// (0x00041792) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7248,	// (0x00041792) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7263,	// (0x000417ad) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7263,	// (0x000417ad) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0004a113) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0004a113) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca39,	// (0x00046f83) cell_vkb_candidate_pane_cp1_ParamLimits

0xca39,	// (0x00046f83) cell_vkb_candidate_pane_cp1

0xc59e,	// (0x00046ae8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) fep_vkb_candidate_drop_down_list_pane_g1

0xca1f,	// (0x00046f69) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca1f,	// (0x00046f69) fep_vkb_candidate_drop_down_list_pane_g2

0xca2c,	// (0x00046f76) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca2c,	// (0x00046f76) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0004a10c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x0004a10c) fep_vkb_candidate_drop_down_list_pane_g

0xca59,	// (0x00046fa3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca59,	// (0x00046fa3) fep_vkb_candidate_drop_down_list_scroll_pane

0xca66,	// (0x00046fb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca66,	// (0x00046fb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca73,	// (0x00046fbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca73,	// (0x00046fbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca7f,	// (0x00046fc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca7f,	// (0x00046fc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc8b5,	// (0x00046dff) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8b5,	// (0x00046dff) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc8d6,	// (0x00046e20) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8d6,	// (0x00046e20) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca8b,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca8b,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcaac,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcaac,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcacd,	// (0x00047017) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcacd,	// (0x00047017) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0004a124) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0004a124) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7f8c,	// (0x000424d6) title_pane_g1_ParamLimits

0x7f99,	// (0x000424e3) title_pane_g2_ParamLimits

0xf54e,	// (0x00049a98) title_pane_g_ParamLimits

0x8f14,	// (0x0004345e) aid_call2_pane

0x8f1c,	// (0x00043466) aid_call_pane

0x8f24,	// (0x0004346e) popup_clock_analogue_window_g1

0x8f24,	// (0x0004346e) popup_clock_analogue_window_g2

0x5f45,	// (0x0004048f) popup_clock_analogue_window_g3

0x5f4e,	// (0x00040498) popup_clock_analogue_window_g4

0x7f78,	// (0x000424c2) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00049c47) popup_clock_analogue_window_g

0x5f56,	// (0x000404a0) popup_clock_analogue_window_t1

0x5f64,	// (0x000404ae) clock_digital_number_pane_ParamLimits

0x5f64,	// (0x000404ae) clock_digital_number_pane

0x5f70,	// (0x000404ba) clock_digital_number_pane_cp02_ParamLimits

0x5f70,	// (0x000404ba) clock_digital_number_pane_cp02

0x5f7c,	// (0x000404c6) clock_digital_number_pane_cp03_ParamLimits

0x5f7c,	// (0x000404c6) clock_digital_number_pane_cp03

0x5f88,	// (0x000404d2) clock_digital_number_pane_cp04_ParamLimits

0x5f88,	// (0x000404d2) clock_digital_number_pane_cp04

0x5f94,	// (0x000404de) clock_digital_separator_pane_ParamLimits

0x5f94,	// (0x000404de) clock_digital_separator_pane

0x5fa0,	// (0x000404ea) popup_clock_digital_window_t1_ParamLimits

0x5fa0,	// (0x000404ea) popup_clock_digital_window_t1

0x7f78,	// (0x000424c2) clock_digital_number_pane_g1

0x7f78,	// (0x000424c2) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00049c52) clock_digital_number_pane_g

0x7f78,	// (0x000424c2) clock_digital_separator_pane_g1

0x7f78,	// (0x000424c2) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00049c52) clock_digital_separator_pane_g

0x988c,	// (0x00043dd6) aid_fill_nsta_ParamLimits

0x99ce,	// (0x00043f18) indicator_nsta_pane_ParamLimits

0x9b53,	// (0x0004409d) popup_clock_analogue_window

0x9b53,	// (0x0004409d) popup_clock_digital_window

0x8062,	// (0x000425ac) grid_indicator_nsta_pane_ParamLimits

0xbd08,	// (0x00046252) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00049ff6) clock_nsta_pane_t

0x5f09,	// (0x00040453) aid_size_max_handle

0x5f13,	// (0x0004045d) aid_size_min_handle

0x9530,	// (0x00043a7a) editor_scroll_pane

0xcae8,	// (0x00047032) ex_editor_pane

0x8a42,	// (0x00042f8c) scroll_pane_cp13

0x8873,	// (0x00042dbd) scroll_pane_cp14

0x8f53,	// (0x0004349d) scroll_pane_cp36

0x8f7f,	// (0x000434c9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f7f,	// (0x000434c9) list_single_graphic_hl_pane_cp2

0x6d28,	// (0x00041272) list_single_graphic_hl_pane_ParamLimits

0x6d28,	// (0x00041272) list_single_graphic_hl_pane

0x56fb,	// (0x0003fc45) aid_size_min_hl_cp1

0xcaf0,	// (0x0004703a) list_highlight_pane_cp34_ParamLimits

0xcaf0,	// (0x0004703a) list_highlight_pane_cp34

0xcb01,	// (0x0004704b) list_single_graphic_hl_pane_g1_ParamLimits

0xcb01,	// (0x0004704b) list_single_graphic_hl_pane_g1

0x5704,	// (0x0003fc4e) list_single_graphic_hl_pane_g2_ParamLimits

0x5704,	// (0x0003fc4e) list_single_graphic_hl_pane_g2

0x5704,	// (0x0003fc4e) list_single_graphic_hl_pane_g3_ParamLimits

0x5704,	// (0x0003fc4e) list_single_graphic_hl_pane_g3

0x5cd1,	// (0x0004021b) list_single_graphic_hl_pane_g4_ParamLimits

0x5cd1,	// (0x0004021b) list_single_graphic_hl_pane_g4

0x727e,	// (0x000417c8) list_single_graphic_hl_pane_g5_ParamLimits

0x727e,	// (0x000417c8) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0004a135) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0004a135) list_single_graphic_hl_pane_g

0x5710,	// (0x0003fc5a) list_single_graphic_hl_pane_t1_ParamLimits

0x5710,	// (0x0003fc5a) list_single_graphic_hl_pane_t1

0xcb0e,	// (0x00047058) aid_size_min_hl_cp2

0xcb17,	// (0x00047061) list_highlight_pane_cp34_cp2_ParamLimits

0xcb17,	// (0x00047061) list_highlight_pane_cp34_cp2

0xcb01,	// (0x0004704b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb01,	// (0x0004704b) list_single_graphic_hl_pane_g1_cp2

0xcb24,	// (0x0004706e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb24,	// (0x0004706e) list_single_graphic_hl_pane_g2_cp2

0xcb30,	// (0x0004707a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb30,	// (0x0004707a) list_single_graphic_hl_pane_g3_cp2

0x9469,	// (0x000439b3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9469,	// (0x000439b3) list_single_graphic_hl_pane_g4_cp2

0xcb3e,	// (0x00047088) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb3e,	// (0x00047088) list_single_graphic_hl_pane_g5_cp2

0x6267,	// (0x000407b1) control_pane_g4_ParamLimits

0x6267,	// (0x000407b1) control_pane_g4

0x986a,	// (0x00043db4) bg_popup_sub_pane_cp10_ParamLimits

0xc33a,	// (0x00046884) list_choice_list_pane_ParamLimits

0xc349,	// (0x00046893) scroll_pane_cp23

0x82eb,	// (0x00042835) bg_popup_preview_window_pane_cp02_ParamLimits

0xc963,	// (0x00046ead) list_preview_fixed_pane_ParamLimits

0xc979,	// (0x00046ec3) list_preview_fixed_pane_cp_ParamLimits

0xc979,	// (0x00046ec3) list_preview_fixed_pane_cp

0xc985,	// (0x00046ecf) popup_preview_fixed_window_g1_ParamLimits

0xc985,	// (0x00046ecf) popup_preview_fixed_window_g1

0xc991,	// (0x00046edb) popup_preview_fixed_window_g2_ParamLimits

0xc991,	// (0x00046edb) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0004a0c4) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0004a0c4) popup_preview_fixed_window_g

0x5e7d,	// (0x000403c7) aid_navi_side_left_pane_ParamLimits

0x5e92,	// (0x000403dc) aid_navi_side_right_pane_ParamLimits

0x5eaa,	// (0x000403f4) navi_icon_pane_stacon_ParamLimits

0x5ebe,	// (0x00040408) navi_navi_pane_stacon_ParamLimits

0x5eaa,	// (0x000403f4) navi_text_pane_stacon_ParamLimits

0x7f6e,	// (0x000424b8) main_text_info_pane

0xcb68,	// (0x000470b2) listscroll_text_info_pane

0xcb70,	// (0x000470ba) list_text_info_pane_ParamLimits

0xcb70,	// (0x000470ba) list_text_info_pane

0xcb7f,	// (0x000470c9) scroll_pane_cp24_ParamLimits

0xcb7f,	// (0x000470c9) scroll_pane_cp24

0xcb9d,	// (0x000470e7) list_text_info_pane_t1_ParamLimits

0xcb9d,	// (0x000470e7) list_text_info_pane_t1

0x63b9,	// (0x00040903) popup_fast_swap2_window_ParamLimits

0x63b9,	// (0x00040903) popup_fast_swap2_window

0xcbd2,	// (0x0004711c) aid_size_cell_fast2

0x7f6e,	// (0x000424b8) bg_popup_window_pane_cp17

0xa1e4,	// (0x0004472e) heading_pane_cp2

0x852e,	// (0x00042a78) listscroll_fast2_pane

0xcbdc,	// (0x00047126) grid_fast2_pane

0xcbe6,	// (0x00047130) listscroll_fast2_pane_g1

0xcbee,	// (0x00047138) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0004a140) listscroll_fast2_pane_g

0x8a42,	// (0x00042f8c) scroll_pane_cp26

0xcbf8,	// (0x00047142) cell_fast2_pane_ParamLimits

0xcbf8,	// (0x00047142) cell_fast2_pane

0xcc0d,	// (0x00047157) cell_fast2_pane_g1

0xcc16,	// (0x00047160) cell_fast2_pane_g2

0xcc1f,	// (0x00047169) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0004a145) cell_fast2_pane_g

0x8618,	// (0x00042b62) grid_highlight_pane_cp9

0x862d,	// (0x00042b77) main_eswt_pane_ParamLimits

0x862d,	// (0x00042b77) main_eswt_pane

0xcb94,	// (0x000470de) list_single_text_info_pane

0xcc27,	// (0x00047171) eswt_ctrl_button_pane

0xcc27,	// (0x00047171) eswt_ctrl_canvas_pane

0xcc2f,	// (0x00047179) eswt_ctrl_combo_pane

0xcc27,	// (0x00047171) eswt_ctrl_default_pane

0xcc27,	// (0x00047171) eswt_ctrl_label_pane

0xcc37,	// (0x00047181) eswt_ctrl_wait_pane

0xcc3f,	// (0x00047189) eswt_shell_pane

0x7f6e,	// (0x000424b8) listscroll_eswt_app_pane

0xcc5f,	// (0x000471a9) popup_eswt_tasktip_window_ParamLimits

0xcc5f,	// (0x000471a9) popup_eswt_tasktip_window

0x9de8,	// (0x00044332) bg_popup_window_pane_cp18

0xcc70,	// (0x000471ba) eswt_control_pane_g1_ParamLimits

0xcc70,	// (0x000471ba) eswt_control_pane_g1

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_ParamLimits

0xcc7d,	// (0x000471c7) eswt_control_pane_g2

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_ParamLimits

0xcc8a,	// (0x000471d4) eswt_control_pane_g3

0xcc97,	// (0x000471e1) eswt_control_pane_g4_ParamLimits

0xcc97,	// (0x000471e1) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0004a14c) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0004a14c) eswt_control_pane_g

0x88e0,	// (0x00042e2a) bg_button_pane_ParamLimits

0x88e0,	// (0x00042e2a) bg_button_pane

0x862d,	// (0x00042b77) common_borders_pane_copy2_ParamLimits

0x862d,	// (0x00042b77) common_borders_pane_copy2

0xcca4,	// (0x000471ee) control_button_pane_g1_ParamLimits

0xcca4,	// (0x000471ee) control_button_pane_g1

0xccb0,	// (0x000471fa) control_button_pane_g2_ParamLimits

0xccb0,	// (0x000471fa) control_button_pane_g2

0xccbc,	// (0x00047206) control_button_pane_g3_ParamLimits

0xccbc,	// (0x00047206) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0004a155) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0004a155) control_button_pane_g

0xccd0,	// (0x0004721a) control_button_pane_t1

0xccde,	// (0x00047228) control_button_pane_t2

0x0001,

0xfc12,	// (0x0004a15c) control_button_pane_t

0x9d74,	// (0x000442be) bg_button_pane_g1

0x9d7c,	// (0x000442c6) bg_button_pane_g2

0x9d84,	// (0x000442ce) bg_button_pane_g3

0x9d8c,	// (0x000442d6) bg_button_pane_g4

0x9d94,	// (0x000442de) bg_button_pane_g5

0x9d9c,	// (0x000442e6) bg_button_pane_g6

0x9da4,	// (0x000442ee) bg_button_pane_g7

0x9dac,	// (0x000442f6) bg_button_pane_g8

0x9db4,	// (0x000442fe) bg_button_pane_g9

0x0008,

0xf866,	// (0x00049db0) bg_button_pane_g

0xc2f5,	// (0x0004683f) common_borders_pane_ParamLimits

0xc2f5,	// (0x0004683f) common_borders_pane

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy1_ParamLimits

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy1

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy1_ParamLimits

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy1

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy1_ParamLimits

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy1

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy1_ParamLimits

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy1

0xc330,	// (0x0004687a) bg_eswt_ctrl_canvas_pane_g1

0xc2f5,	// (0x0004683f) common_borders_pane_cp2_ParamLimits

0xc2f5,	// (0x0004683f) common_borders_pane_cp2

0xc2f5,	// (0x0004683f) common_borders_pane_cp3_ParamLimits

0xc2f5,	// (0x0004683f) common_borders_pane_cp3

0xccec,	// (0x00047236) separator_horizontal_pane

0xccf4,	// (0x0004723e) separator_vertical_pane

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy2_ParamLimits

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy2

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy2_ParamLimits

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy2

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy2_ParamLimits

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy2

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy2_ParamLimits

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy2

0x7f6e,	// (0x000424b8) common_borders_pane_cp4

0xccfd,	// (0x00047247) separator_horizontal_pane_g1

0xcd06,	// (0x00047250) separator_horizontal_pane_g2

0xcd0f,	// (0x00047259) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0004a161) separator_horizontal_pane_g

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy3_ParamLimits

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy3

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy3_ParamLimits

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy3

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy3_ParamLimits

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy3

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy3_ParamLimits

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy3

0x7f6e,	// (0x000424b8) common_borders_pane_cp5

0xcd18,	// (0x00047262) separator_vertical_pane_g1

0xcd21,	// (0x0004726b) separator_vertical_pane_g2

0xcd2a,	// (0x00047274) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0004a168) separator_vertical_pane_g

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy4_ParamLimits

0xcc70,	// (0x000471ba) eswt_control_pane_g1_copy4

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy4_ParamLimits

0xcc7d,	// (0x000471c7) eswt_control_pane_g2_copy4

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy4_ParamLimits

0xcc8a,	// (0x000471d4) eswt_control_pane_g3_copy4

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy4_ParamLimits

0xcc97,	// (0x000471e1) eswt_control_pane_g4_copy4

0xcd33,	// (0x0004727d) eswt_ctrl_combo_button_pane

0xcd3b,	// (0x00047285) eswt_ctrl_input_pane

0xcd43,	// (0x0004728d) popup_choice_list_window_cp70

0xcd4b,	// (0x00047295) eswt_ctrl_input_pane_t1

0x7f6e,	// (0x000424b8) input_focus_pane_cp70

0xc2f5,	// (0x0004683f) bg_button_pane_cp70_ParamLimits

0xc2f5,	// (0x0004683f) bg_button_pane_cp70

0xcd59,	// (0x000472a3) eswt_ctrl_combo_button_pane_g1

0xcd61,	// (0x000472ab) wait_bar_pane_cp70

0x9de8,	// (0x00044332) bg_popup_window_pane_cp70_ParamLimits

0x9de8,	// (0x00044332) bg_popup_window_pane_cp70

0xcd69,	// (0x000472b3) popup_eswt_tasktip_window_t1

0xcd7f,	// (0x000472c9) wait_bar_pane_cp71_ParamLimits

0xcd7f,	// (0x000472c9) wait_bar_pane_cp71

0xcd8b,	// (0x000472d5) grid_eswt_app_pane

0x8d60,	// (0x000432aa) scroll_pane_cp70

0xcd94,	// (0x000472de) cell_eswt_app_pane_ParamLimits

0xcd94,	// (0x000472de) cell_eswt_app_pane

0xcdc8,	// (0x00047312) cell_eswt_app_pane_g1_ParamLimits

0xcdc8,	// (0x00047312) cell_eswt_app_pane_g1

0xcdf7,	// (0x00047341) cell_eswt_app_pane_g2_ParamLimits

0xcdf7,	// (0x00047341) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0004a16f) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0004a16f) cell_eswt_app_pane_g

0xce1b,	// (0x00047365) cell_eswt_app_pane_t1_ParamLimits

0xce1b,	// (0x00047365) cell_eswt_app_pane_t1

0xce4d,	// (0x00047397) grid_highlight_pane_cp70_ParamLimits

0xce4d,	// (0x00047397) grid_highlight_pane_cp70

0x9405,	// (0x0004394f) set_content_pane_g1

0x97cb,	// (0x00043d15) status_small_volume_pane

0x7292,	// (0x000417dc) status_small_volume_pane_g1

0x729a,	// (0x000417e4) volume_small2_pane

0x72a3,	// (0x000417ed) volume_small2_pane_g1

0x72ac,	// (0x000417f6) volume_small2_pane_g2

0x72b5,	// (0x000417ff) volume_small2_pane_g3

0x72be,	// (0x00041808) volume_small2_pane_g4

0x72c7,	// (0x00041811) volume_small2_pane_g5

0x72d0,	// (0x0004181a) volume_small2_pane_g6

0x72d9,	// (0x00041823) volume_small2_pane_g7

0x72e2,	// (0x0004182c) volume_small2_pane_g8

0x72eb,	// (0x00041835) volume_small2_pane_g9

0x72f4,	// (0x0004183e) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0004a174) volume_small2_pane_g

0xc6e6,	// (0x00046c30) fep_vkb_top_text_pane_g1_ParamLimits

0xc701,	// (0x00046c4b) fep_vkb_top_text_pane_t1_ParamLimits

0xc99d,	// (0x00046ee7) popup_preview_fixed_window_g3_ParamLimits

0xc99d,	// (0x00046ee7) popup_preview_fixed_window_g3

0x6860,	// (0x00040daa) popup_toolbar_trans_pane

0xb146,	// (0x00045690) aid_height_set_list_ParamLimits

0xb157,	// (0x000456a1) aid_size_parent_ParamLimits

0x986a,	// (0x00043db4) list_highlight_pane_cp2_ParamLimits

0x9405,	// (0x0004394f) set_content_pane_g1_ParamLimits

0x6d47,	// (0x00041291) list_single_image_pane_ParamLimits

0x6d47,	// (0x00041291) list_single_image_pane

0xce59,	// (0x000473a3) aid_size_cell_image_ParamLimits

0xce59,	// (0x000473a3) aid_size_cell_image

0xce66,	// (0x000473b0) grid_single_image_pane_ParamLimits

0xce66,	// (0x000473b0) grid_single_image_pane

0xce72,	// (0x000473bc) list_single_image_pane_g1_ParamLimits

0xce72,	// (0x000473bc) list_single_image_pane_g1

0xce7e,	// (0x000473c8) list_single_image_pane_g2_ParamLimits

0xce7e,	// (0x000473c8) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0004a189) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0004a189) list_single_image_pane_g

0xce92,	// (0x000473dc) list_single_image_pane_t1_ParamLimits

0xce92,	// (0x000473dc) list_single_image_pane_t1

0xcea8,	// (0x000473f2) cell_image_list_pane_ParamLimits

0xcea8,	// (0x000473f2) cell_image_list_pane

0xcebc,	// (0x00047406) cell_image_list_pane_g1

0xcec5,	// (0x0004740f) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0004a18e) cell_image_list_pane_g

0xcece,	// (0x00047418) aid_size_cell_tb_trans_pane

0x88e0,	// (0x00042e2a) bg_tb_trans_pane

0xcee0,	// (0x0004742a) grid_tb_trans_pane

0x9d74,	// (0x000442be) bg_tb_trans_pane_g1

0x9d7c,	// (0x000442c6) bg_tb_trans_pane_g2

0x9d84,	// (0x000442ce) bg_tb_trans_pane_g3

0x9d8c,	// (0x000442d6) bg_tb_trans_pane_g4

0x9d94,	// (0x000442de) bg_tb_trans_pane_g5

0x9dac,	// (0x000442f6) bg_tb_trans_pane_g6

0x9db4,	// (0x000442fe) bg_tb_trans_pane_g7

0x9d9c,	// (0x000442e6) bg_tb_trans_pane_g8

0x9da4,	// (0x000442ee) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0004a193) bg_tb_trans_pane_g

0xcef4,	// (0x0004743e) cell_toolbar_trans_pane_ParamLimits

0xcef4,	// (0x0004743e) cell_toolbar_trans_pane

0xc330,	// (0x0004687a) cell_toolbar_trans_pane_g1

0xbedb,	// (0x00046425) list_form2_midp_pane_t1

0xbee9,	// (0x00046433) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x0004a03c) list_form2_midp_pane_t

0xbef7,	// (0x00046441) scroll_pane_cp51_ParamLimits

0xc0b3,	// (0x000465fd) form2_midp_wait_pane_g1

0xc0bc,	// (0x00046606) form2_midp_wait_pane_g2

0xc0c5,	// (0x0004660f) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0004a051) form2_midp_wait_pane_g

0x8062,	// (0x000425ac) list_highlight_pane_cp21_ParamLimits

0xc113,	// (0x0004665d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc122,	// (0x0004666c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6cc0,	// (0x0004120a) list_single_2graphic_im_pane_ParamLimits

0x6cc0,	// (0x0004120a) list_single_2graphic_im_pane

0xcf1a,	// (0x00047464) list_single_2graphic_im_pane_g1_ParamLimits

0xcf1a,	// (0x00047464) list_single_2graphic_im_pane_g1

0xcf2b,	// (0x00047475) list_single_2graphic_im_pane_g2_ParamLimits

0xcf2b,	// (0x00047475) list_single_2graphic_im_pane_g2

0xcf37,	// (0x00047481) list_single_2graphic_im_pane_g3_ParamLimits

0xcf37,	// (0x00047481) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0004a1a6) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0004a1a6) list_single_2graphic_im_pane_g

0xcf57,	// (0x000474a1) list_single_2graphic_im_pane_t1_ParamLimits

0xcf57,	// (0x000474a1) list_single_2graphic_im_pane_t1

0xc9a9,	// (0x00046ef3) list_single_graphic_2heading_pane_fp_ParamLimits

0xc9a9,	// (0x00046ef3) list_single_graphic_2heading_pane_fp

0x55dd,	// (0x0003fb27) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x55dd,	// (0x0003fb27) list_single_graphic_2heading_pane_fp_g1

0xc9bf,	// (0x00046f09) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc9bf,	// (0x00046f09) list_single_graphic_2heading_pane_fp_g2

0x887b,	// (0x00042dc5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x887b,	// (0x00042dc5) list_single_graphic_2heading_pane_fp_g3

0x88ee,	// (0x00042e38) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x88ee,	// (0x00042e38) list_single_graphic_2heading_pane_fp_g4

0xc9cb,	// (0x00046f15) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9cb,	// (0x00046f15) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a0d4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a0d4) list_single_graphic_2heading_pane_fp_g

0x5726,	// (0x0003fc70) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5726,	// (0x0003fc70) list_single_graphic_2heading_pane_fp_t1

0x5615,	// (0x0003fb5f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5615,	// (0x0003fb5f) list_single_graphic_2heading_pane_fp_t2

0x573c,	// (0x0003fc86) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x573c,	// (0x0003fc86) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0004a1af) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0004a1af) list_single_graphic_2heading_pane_fp_t

0xc3bc,	// (0x00046906) fep_hwr_write_pane_g5_ParamLimits

0xc3bc,	// (0x00046906) fep_hwr_write_pane_g5

0xc3c8,	// (0x00046912) fep_hwr_write_pane_g6_ParamLimits

0xc3c8,	// (0x00046912) fep_hwr_write_pane_g6

0xcc3f,	// (0x00047189) eswt_shell_pane_ParamLimits

0x9de8,	// (0x00044332) bg_popup_window_pane_cp18_ParamLimits

0xb0a5,	// (0x000455ef) heading_pane_cp70

0xcd69,	// (0x000472b3) popup_eswt_tasktip_window_t1_ParamLimits

0x98e1,	// (0x00043e2b) aid_touch_tab_arrow_left

0x98ed,	// (0x00043e37) aid_touch_tab_arrow_right

0x7faa,	// (0x000424f4) title_pane_g3_ParamLimits

0x7faa,	// (0x000424f4) title_pane_g3

0x889f,	// (0x00042de9) set_value_pane_g1

0x6860,	// (0x00040daa) popup_toolbar_trans_pane_ParamLimits

0xcece,	// (0x00047418) aid_size_cell_tb_trans_pane_ParamLimits

0x88e0,	// (0x00042e2a) bg_tb_trans_pane_ParamLimits

0xcee0,	// (0x0004742a) grid_tb_trans_pane_ParamLimits

0x82eb,	// (0x00042835) cont_note_pane_ParamLimits

0x82eb,	// (0x00042835) cont_note_pane

0x862d,	// (0x00042b77) cont_snote2_single_text_pane_ParamLimits

0x862d,	// (0x00042b77) cont_snote2_single_text_pane

0x862d,	// (0x00042b77) cont_snote2_single_graphic_pane_ParamLimits

0x862d,	// (0x00042b77) cont_snote2_single_graphic_pane

0xa3fa,	// (0x00044944) cont_note_wait_pane_ParamLimits

0xa3fa,	// (0x00044944) cont_note_wait_pane

0xa3fa,	// (0x00044944) cont_note_image_pane_ParamLimits

0xa3fa,	// (0x00044944) cont_note_image_pane

0xcf88,	// (0x000474d2) popup_note2_window_g1_ParamLimits

0xcf88,	// (0x000474d2) popup_note2_window_g1

0xcfb9,	// (0x00047503) popup_note2_window_t1_ParamLimits

0xcfb9,	// (0x00047503) popup_note2_window_t1

0xcffe,	// (0x00047548) popup_note2_window_t2_ParamLimits

0xcffe,	// (0x00047548) popup_note2_window_t2

0xd043,	// (0x0004758d) popup_note2_window_t3_ParamLimits

0xd043,	// (0x0004758d) popup_note2_window_t3

0xd088,	// (0x000475d2) popup_note2_window_t4_ParamLimits

0xd088,	// (0x000475d2) popup_note2_window_t4

0x8363,	// (0x000428ad) popup_note2_window_t5_ParamLimits

0x8363,	// (0x000428ad) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0004a1bb) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0004a1bb) popup_note2_window_t

0xd0b7,	// (0x00047601) popup_note2_image_window_g1_ParamLimits

0xd0b7,	// (0x00047601) popup_note2_image_window_g1

0xd0c3,	// (0x0004760d) popup_note2_image_window_g2_ParamLimits

0xd0c3,	// (0x0004760d) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0004a1c6) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0004a1c6) popup_note2_image_window_g

0xd0d5,	// (0x0004761f) popup_note2_image_window_t1_ParamLimits

0xd0d5,	// (0x0004761f) popup_note2_image_window_t1

0xd0ed,	// (0x00047637) popup_note2_image_window_t2_ParamLimits

0xd0ed,	// (0x00047637) popup_note2_image_window_t2

0xd105,	// (0x0004764f) popup_note2_image_window_t3_ParamLimits

0xd105,	// (0x0004764f) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0004a1cb) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0004a1cb) popup_note2_image_window_t

0xa408,	// (0x00044952) popup_note2_wait_window_g1_ParamLimits

0xa408,	// (0x00044952) popup_note2_wait_window_g1

0xd121,	// (0x0004766b) popup_note2_wait_window_g2_ParamLimits

0xd121,	// (0x0004766b) popup_note2_wait_window_g2

0xa420,	// (0x0004496a) popup_note2_wait_window_g3_ParamLimits

0xa420,	// (0x0004496a) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0004a1d2) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0004a1d2) popup_note2_wait_window_g

0xd12d,	// (0x00047677) popup_note2_wait_window_t1_ParamLimits

0xd12d,	// (0x00047677) popup_note2_wait_window_t1

0xd14b,	// (0x00047695) popup_note2_wait_window_t2_ParamLimits

0xd14b,	// (0x00047695) popup_note2_wait_window_t2

0xd169,	// (0x000476b3) popup_note2_wait_window_t3_ParamLimits

0xd169,	// (0x000476b3) popup_note2_wait_window_t3

0xd17b,	// (0x000476c5) popup_note2_wait_window_t4_ParamLimits

0xd17b,	// (0x000476c5) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0004a1d9) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0004a1d9) popup_note2_wait_window_t

0xd18d,	// (0x000476d7) wait_bar2_pane_ParamLimits

0xd18d,	// (0x000476d7) wait_bar2_pane

0xd1a5,	// (0x000476ef) popup_snote2_single_text_window_g1_ParamLimits

0xd1a5,	// (0x000476ef) popup_snote2_single_text_window_g1

0xd1cd,	// (0x00047717) popup_snote2_single_text_window_t1_ParamLimits

0xd1cd,	// (0x00047717) popup_snote2_single_text_window_t1

0xd219,	// (0x00047763) popup_snote2_single_text_window_t2_ParamLimits

0xd219,	// (0x00047763) popup_snote2_single_text_window_t2

0xd265,	// (0x000477af) popup_snote2_single_text_window_t3_ParamLimits

0xd265,	// (0x000477af) popup_snote2_single_text_window_t3

0xd2a6,	// (0x000477f0) popup_snote2_single_text_window_t4_ParamLimits

0xd2a6,	// (0x000477f0) popup_snote2_single_text_window_t4

0xd2dc,	// (0x00047826) popup_snote2_single_text_window_t5_ParamLimits

0xd2dc,	// (0x00047826) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0004a1e2) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0004a1e2) popup_snote2_single_text_window_t

0xd307,	// (0x00047851) popup_snote2_single_graphic_window_g1_ParamLimits

0xd307,	// (0x00047851) popup_snote2_single_graphic_window_g1

0xd32f,	// (0x00047879) popup_snote2_single_graphic_window_g2_ParamLimits

0xd32f,	// (0x00047879) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0004a1ed) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0004a1ed) popup_snote2_single_graphic_window_g

0xd357,	// (0x000478a1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd357,	// (0x000478a1) popup_snote2_single_graphic_window_t1

0xd3a3,	// (0x000478ed) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3a3,	// (0x000478ed) popup_snote2_single_graphic_window_t2

0xd265,	// (0x000477af) popup_snote2_single_graphic_window_t3_ParamLimits

0xd265,	// (0x000477af) popup_snote2_single_graphic_window_t3

0xd2a6,	// (0x000477f0) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2a6,	// (0x000477f0) popup_snote2_single_graphic_window_t4

0xd2dc,	// (0x00047826) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2dc,	// (0x00047826) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0004a1f2) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0004a1f2) popup_snote2_single_graphic_window_t

0xbdb2,	// (0x000462fc) clock_nsta_pane_cp2_t1

0xbdb2,	// (0x000462fc) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0004a012) clock_nsta_pane_cp2_t

0x4f33,	// (0x0003f47d) form_field_data_wide_pane_g1_ParamLimits

0x887b,	// (0x00042dc5) form_field_data_wide_pane_g2_ParamLimits

0x887b,	// (0x00042dc5) form_field_data_wide_pane_g2

0x88ee,	// (0x00042e38) form_field_data_wide_pane_g3_ParamLimits

0x88ee,	// (0x00042e38) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00049bca) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00049bca) form_field_data_wide_pane_g

0xbca4,	// (0x000461ee) grid_touch_3_pane_ParamLimits

0xbca4,	// (0x000461ee) grid_touch_3_pane

0xd3ef,	// (0x00047939) cell_touch_3_pane_ParamLimits

0xd3ef,	// (0x00047939) cell_touch_3_pane

0xc330,	// (0x0004687a) cell_touch_3_pane_g1

0xc330,	// (0x0004687a) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0004a097) cell_touch_3_pane_g

0x8395,	// (0x000428df) cont_query_data_pane

0x839d,	// (0x000428e7) cont_query_data_pane_cp1

0xd420,	// (0x0004796a) button_value_adjust_pane_cp7

0xd428,	// (0x00047972) query_popup_pane_cp3

0x9010,	// (0x0004355a) bg_popup_sub_pane_cp22_ParamLimits

0x5fbf,	// (0x00040509) navi_navi_volume_pane_cp2

0x5fd7,	// (0x00040521) popup_side_volume_key_window_g2

0x5fe3,	// (0x0004052d) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00049c60) popup_side_volume_key_window_g

0x5ffd,	// (0x00040547) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00049c67) popup_side_volume_key_window_t

0x92c6,	// (0x00043810) popup_side_volume_key_window_ParamLimits

0x5d27,	// (0x00040271) list_double_graphic_pane_g4_ParamLimits

0x5d27,	// (0x00040271) list_double_graphic_pane_g4

0x6d05,	// (0x0004124f) list_single_2heading_msg_pane_ParamLimits

0x6d05,	// (0x0004124f) list_single_2heading_msg_pane

0x72fd,	// (0x00041847) list_single_2heading_msg_pane_g1_ParamLimits

0x72fd,	// (0x00041847) list_single_2heading_msg_pane_g1

0x9469,	// (0x000439b3) list_single_2heading_msg_pane_g2_ParamLimits

0x9469,	// (0x000439b3) list_single_2heading_msg_pane_g2

0x7309,	// (0x00041853) list_single_2heading_msg_pane_g3_ParamLimits

0x7309,	// (0x00041853) list_single_2heading_msg_pane_g3

0x7315,	// (0x0004185f) list_single_2heading_msg_pane_g4_ParamLimits

0x7315,	// (0x0004185f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0004a1fd) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0004a1fd) list_single_2heading_msg_pane_g

0x575c,	// (0x0003fca6) list_single_2heading_msg_pane_t1_ParamLimits

0x575c,	// (0x0003fca6) list_single_2heading_msg_pane_t1

0x5784,	// (0x0003fcce) list_single_2heading_msg_pane_t2_ParamLimits

0x5784,	// (0x0003fcce) list_single_2heading_msg_pane_t2

0x57b8,	// (0x0003fd02) list_single_2heading_msg_pane_t3_ParamLimits

0x57b8,	// (0x0003fd02) list_single_2heading_msg_pane_t3

0x57f1,	// (0x0003fd3b) list_single_2heading_msg_pane_t4_ParamLimits

0x57f1,	// (0x0003fd3b) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0004a206) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0004a206) list_single_2heading_msg_pane_t

0x7fb6,	// (0x00042500) title_pane_g4_ParamLimits

0x7fb6,	// (0x00042500) title_pane_g4

0x5dcd,	// (0x00040317) title_pane_stacon_g3_ParamLimits

0x5dcd,	// (0x00040317) title_pane_stacon_g3

0xcf4b,	// (0x00047495) list_single_2graphic_im_pane_g4_ParamLimits

0xcf4b,	// (0x00047495) list_single_2graphic_im_pane_g4

0xae61,	// (0x000453ab) popup_side_volume_key_window_cp

0xb60f,	// (0x00045b59) main_idle_act2_pane_t1

0x6950,	// (0x00040e9a) toolbar_button_pane_g10

0x8825,	// (0x00042d6f) popup_toolbar_window_cp1

0xbda3,	// (0x000462ed) clock_nsta_pane_cp_t1

0xbda3,	// (0x000462ed) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x0004a00d) clock_nsta_pane_cp_t

0x5fbf,	// (0x00040509) navi_navi_volume_pane_cp2_ParamLimits

0x5fcb,	// (0x00040515) popup_side_volume_key_window_g1_ParamLimits

0x5fd7,	// (0x00040521) popup_side_volume_key_window_g2_ParamLimits

0x5fe3,	// (0x0004052d) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00049c60) popup_side_volume_key_window_g_ParamLimits

0x6f1e,	// (0x00041468) fep_hwr_aid_pane

0x2e18,	// (0x0003d362) bg_fep_hwr_top_pane_g4_ParamLimits

0xc38c,	// (0x000468d6) fep_hwr_top_pane_g1_ParamLimits

0xc39e,	// (0x000468e8) fep_hwr_top_pane_g2_ParamLimits

0x6fd7,	// (0x00041521) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0004a062) fep_hwr_top_pane_g_ParamLimits

0x6fec,	// (0x00041536) fep_hwr_top_text_pane_ParamLimits

0xac24,	// (0x0004516e) aid_touch_tab_arrow_arrow_2

0xac2d,	// (0x00045177) aid_touch_tab_arrow_left_2

0x6f32,	// (0x0004147c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f69,	// (0x000414b3) fep_hwr_prediction_pane

0xc4f5,	// (0x00046a3f) fep_vkb_prediction_pane

0xc5f2,	// (0x00046b3c) fep_vkb_side_pane_g3_ParamLimits

0xc5f2,	// (0x00046b3c) fep_vkb_side_pane_g3

0xc59e,	// (0x00046ae8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xca1f,	// (0x00046f69) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca2c,	// (0x00046f76) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0004a10c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd44d,	// (0x00047997) fep_hwr_prediction_pane_g1

0x732d,	// (0x00041877) fep_hwr_prediction_pane_g2

0x7335,	// (0x0004187f) fep_hwr_prediction_pane_g3

0x733d,	// (0x00041887) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0004a20f) fep_hwr_prediction_pane_g

0xd44d,	// (0x00047997) fep_vkb_prediction_pane_g1

0xd457,	// (0x000479a1) fep_vkb_prediction_pane_g2

0xd45f,	// (0x000479a9) fep_vkb_prediction_pane_g3

0xd467,	// (0x000479b1) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0004a218) fep_vkb_prediction_pane_g

0x6c1c,	// (0x00041166) slider_set_pane_g3

0x6c30,	// (0x0004117a) slider_set_pane_g4

0x6c48,	// (0x00041192) slider_set_pane_g5

0x6c1c,	// (0x00041166) slider_set_pane_g6

0x6c5e,	// (0x000411a8) slider_set_pane_g7

0xb2b4,	// (0x000457fe) slider_form_pane_g3

0xb2bd,	// (0x00045807) slider_form_pane_g4

0xb2c5,	// (0x0004580f) slider_form_pane_g5

0xb2b4,	// (0x000457fe) slider_form_pane_g6

0xb2cd,	// (0x00045817) slider_form_pane_g7

0xb8ae,	// (0x00045df8) slider_set_pane_vc_g3

0xb8b7,	// (0x00045e01) slider_set_pane_vc_g4

0xb8c0,	// (0x00045e0a) slider_set_pane_vc_g5

0xb8ae,	// (0x00045df8) slider_set_pane_vc_g6

0xb8c9,	// (0x00045e13) slider_set_pane_vc_g7

0xba79,	// (0x00045fc3) slider_form_pane_vc_g1

0xba82,	// (0x00045fcc) slider_form_pane_vc_g2

0xba8b,	// (0x00045fd5) slider_form_pane_vc_g3

0xba79,	// (0x00045fc3) slider_form_pane_vc_g4

0xba94,	// (0x00045fde) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00049fdf) slider_form_pane_vc_g

0x7f6e,	// (0x000424b8) main_idle_act3_pane

0xd46f,	// (0x000479b9) ai3_links_pane

0xd478,	// (0x000479c2) popup_ai3_data_window_ParamLimits

0xd478,	// (0x000479c2) popup_ai3_data_window

0x7f6e,	// (0x000424b8) grid_ai3_links_pane

0xd490,	// (0x000479da) cell_ai3_links_pane_ParamLimits

0xd490,	// (0x000479da) cell_ai3_links_pane

0xd4a8,	// (0x000479f2) bg_popup_sub_pane_cp11

0xd4b5,	// (0x000479ff) cell_ai3_links_pane_g1

0x7f6e,	// (0x000424b8) bg_popup_sub_pane_cp12

0xd4da,	// (0x00047a24) heading_ai3_data_pane

0xd4e2,	// (0x00047a2c) list_ai3_gene_pane

0xd4ee,	// (0x00047a38) popup_ai3_data_window_g1

0xd4f6,	// (0x00047a40) heading_ai3_data_pane_g1

0xd4fe,	// (0x00047a48) heading_ai3_data_pane_t1

0xd50c,	// (0x00047a56) list_double_ai3_gene_pane_ParamLimits

0xd50c,	// (0x00047a56) list_double_ai3_gene_pane

0xd519,	// (0x00047a63) list_single_ai3_gene_pane_ParamLimits

0xd519,	// (0x00047a63) list_single_ai3_gene_pane

0xc2f5,	// (0x0004683f) list_highlight_pane_cp7_ParamLimits

0xc2f5,	// (0x0004683f) list_highlight_pane_cp7

0xd526,	// (0x00047a70) list_single_a13_gene_pane_t1_ParamLimits

0xd526,	// (0x00047a70) list_single_a13_gene_pane_t1

0xd53d,	// (0x00047a87) list_single_ai3_gene_pane_g1

0xd546,	// (0x00047a90) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0004a221) list_single_ai3_gene_pane_g

0xd54e,	// (0x00047a98) list_double_ai3_gene_pane_g1_ParamLimits

0xd54e,	// (0x00047a98) list_double_ai3_gene_pane_g1

0xd55a,	// (0x00047aa4) list_double_ai3_gene_pane_t1_ParamLimits

0xd55a,	// (0x00047aa4) list_double_ai3_gene_pane_t1

0xd576,	// (0x00047ac0) list_double_ai3_gene_pane_t2_ParamLimits

0xd576,	// (0x00047ac0) list_double_ai3_gene_pane_t2

0xd58b,	// (0x00047ad5) list_double_ai3_gene_pane_t3_ParamLimits

0xd58b,	// (0x00047ad5) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0004a226) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0004a226) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5752,	// (0x0003fc9c) aid_size_min_col_2

0xd439,	// (0x00047983) aid_size_min_msg_ParamLimits

0xd439,	// (0x00047983) aid_size_min_msg

0xc6f2,	// (0x00046c3c) fep_vkb_top_text_pane_g2_ParamLimits

0xc6f2,	// (0x00046c3c) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0004a092) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0004a092) fep_vkb_top_text_pane_g

0x7f6e,	// (0x000424b8) main_hc_apps_shell_pane

0xd5a8,	// (0x00047af2) grid_hc_apps_pane_ParamLimits

0xd5a8,	// (0x00047af2) grid_hc_apps_pane

0xd5b7,	// (0x00047b01) list_hc_apps_pane

0xd5bf,	// (0x00047b09) scroll_pane_cp37_ParamLimits

0xd5bf,	// (0x00047b09) scroll_pane_cp37

0xd5cb,	// (0x00047b15) cell_hc_apps_pane_ParamLimits

0xd5cb,	// (0x00047b15) cell_hc_apps_pane

0xd679,	// (0x00047bc3) cell_hc_apps_pane_g1_ParamLimits

0xd679,	// (0x00047bc3) cell_hc_apps_pane_g1

0xd6aa,	// (0x00047bf4) cell_hc_apps_pane_g2_ParamLimits

0xd6aa,	// (0x00047bf4) cell_hc_apps_pane_g2

0xd6c6,	// (0x00047c10) cell_hc_apps_pane_g3_ParamLimits

0xd6c6,	// (0x00047c10) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0004a22d) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0004a22d) cell_hc_apps_pane_g

0xd6e8,	// (0x00047c32) cell_hc_apps_pane_t1_ParamLimits

0xd6e8,	// (0x00047c32) cell_hc_apps_pane_t1

0x82eb,	// (0x00042835) grid_highlight_pane_cp10_ParamLimits

0x82eb,	// (0x00042835) grid_highlight_pane_cp10

0xd728,	// (0x00047c72) list_single_hc_apps_pane_ParamLimits

0xd728,	// (0x00047c72) list_single_hc_apps_pane

0xd790,	// (0x00047cda) list_single_hc_apps_pane_g1

0x7345,	// (0x0004188f) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0004a234) list_single_hc_apps_pane_g

0x735e,	// (0x000418a8) list_single_hc_apps_pane_g2_copy1

0x5816,	// (0x0003fd60) list_single_hc_apps_pane_t1

0x8062,	// (0x000425ac) bg_set_opt_pane_cp_ParamLimits

0x5c48,	// (0x00040192) setting_slider_pane_t1_ParamLimits

0x5c61,	// (0x000401ab) setting_slider_pane_t2_ParamLimits

0x5c7b,	// (0x000401c5) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00049aa8) setting_slider_pane_t_ParamLimits

0x5c93,	// (0x000401dd) slider_set_pane_ParamLimits

0x627b,	// (0x000407c5) control_pane_g5_ParamLimits

0x627b,	// (0x000407c5) control_pane_g5

0xb111,	// (0x0004565b) slider_set_pane_g1_ParamLimits

0x6c10,	// (0x0004115a) slider_set_pane_g2_ParamLimits

0x6c1c,	// (0x00041166) slider_set_pane_g3_ParamLimits

0x6c30,	// (0x0004117a) slider_set_pane_g4_ParamLimits

0x6c48,	// (0x00041192) slider_set_pane_g5_ParamLimits

0x6c1c,	// (0x00041166) slider_set_pane_g6_ParamLimits

0x6c5e,	// (0x000411a8) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00049eae) slider_set_pane_g_ParamLimits

0x93b0,	// (0x000438fa) navi_icon_text_pane_ParamLimits

0x98a2,	// (0x00043dec) aid_fill_nsta_2_ParamLimits

0x98e1,	// (0x00043e2b) aid_touch_tab_arrow_left_ParamLimits

0x98ed,	// (0x00043e37) aid_touch_tab_arrow_right_ParamLimits

0x9959,	// (0x00043ea3) clock_nsta_pane_ParamLimits

0xac06,	// (0x00045150) navi_icon_pane_g1_ParamLimits

0xac12,	// (0x0004515c) navi_text_pane_t1_ParamLimits

0xbeb5,	// (0x000463ff) navi_icon_text_pane_g1_ParamLimits

0xbec1,	// (0x0004640b) navi_icon_text_pane_t1_ParamLimits

0xd790,	// (0x00047cda) list_single_hc_apps_pane_g1_ParamLimits

0x7345,	// (0x0004188f) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0004a234) list_single_hc_apps_pane_g_ParamLimits

0x735e,	// (0x000418a8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5816,	// (0x0003fd60) list_single_hc_apps_pane_t1_ParamLimits

0x5b52,	// (0x0004009c) popup_toolbar2_fixed_window_ParamLimits

0x5b52,	// (0x0004009c) popup_toolbar2_fixed_window

0x6856,	// (0x00040da0) popup_toolbar2_float_window

0x7f6e,	// (0x000424b8) bg_popup_sub_pane_cp27

0xd7a9,	// (0x00047cf3) grid_toolbar2_float_pane

0x7f6e,	// (0x000424b8) bg_popup_sub_pane_cp26

0xd7a9,	// (0x00047cf3) grid_toolbar2_fixed_pane

0xd7b1,	// (0x00047cfb) cell_toolbar2_fixed_pane_ParamLimits

0xd7b1,	// (0x00047cfb) cell_toolbar2_fixed_pane

0xd7c2,	// (0x00047d0c) cell_toolbar2_fixed_pane_g1

0x0e10,	// (0x0003b35a) toolbar2_fixed_button_pane

0x9d74,	// (0x000442be) toolbar2_fixed_button_pane_g1

0x9d7c,	// (0x000442c6) toolbar2_fixed_button_pane_g2

0x9d84,	// (0x000442ce) toolbar2_fixed_button_pane_g3

0x9d8c,	// (0x000442d6) toolbar2_fixed_button_pane_g4

0x9d94,	// (0x000442de) toolbar2_fixed_button_pane_g5

0x9d9c,	// (0x000442e6) toolbar2_fixed_button_pane_g6

0x9da4,	// (0x000442ee) toolbar2_fixed_button_pane_g7

0x9dac,	// (0x000442f6) toolbar2_fixed_button_pane_g8

0x9db4,	// (0x000442fe) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00049db0) toolbar2_fixed_button_pane_g

0xd7cb,	// (0x00047d15) cell_toolbar2_float_pane_ParamLimits

0xd7cb,	// (0x00047d15) cell_toolbar2_float_pane

0xd7df,	// (0x00047d29) cell_toolbar2_float_pane_g1

0x0e10,	// (0x0003b35a) toolbar2_fixed_button_pane_cp

0xc45c,	// (0x000469a6) fep_vkb_accented_list_pane_ParamLimits

0xc45c,	// (0x000469a6) fep_vkb_accented_list_pane

0x713a,	// (0x00041684) bg_popup_fep_shadow_pane_g9

0x9530,	// (0x00043a7a) bg_popup_fep_shadow_pane_cp3

0x8a29,	// (0x00042f73) list_accented_list_pane

0xd7e8,	// (0x00047d32) list_single_accented_list_pane_ParamLimits

0xd7e8,	// (0x00047d32) list_single_accented_list_pane

0x9530,	// (0x00043a7a) list_highlight_pane_cp10

0xd7f9,	// (0x00047d43) list_single_accented_list_pane_t1

0x67a6,	// (0x00040cf0) popup_slider_window_ParamLimits

0x67a6,	// (0x00040cf0) popup_slider_window

0xd430,	// (0x0004797a) aid_indentation_list_msg

0xd8b3,	// (0x00047dfd) bg_popup_window_pane_cp19

0xd91d,	// (0x00047e67) popup_slider_window_g1

0xd939,	// (0x00047e83) popup_slider_window_g2

0xd955,	// (0x00047e9f) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0004a239) popup_slider_window_g

0xd9b1,	// (0x00047efb) popup_slider_window_t1

0xda25,	// (0x00047f6f) small_volume_slider_vertical_pane

0xc330,	// (0x0004687a) small_volume_slider_vertical_pane_g1

0xc330,	// (0x0004687a) small_volume_slider_vertical_pane_g2

0xda41,	// (0x00047f8b) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0004a24b) small_volume_slider_vertical_pane_g

0x5922,	// (0x0003fe6c) area_side_right_pane_ParamLimits

0x5922,	// (0x0003fe6c) area_side_right_pane

0x737a,	// (0x000418c4) aid_size_side_button_ParamLimits

0x737a,	// (0x000418c4) aid_size_side_button

0x738e,	// (0x000418d8) grid_sctrl_middle_pane_ParamLimits

0x738e,	// (0x000418d8) grid_sctrl_middle_pane

0x73ad,	// (0x000418f7) sctrl_sk_bottom_pane

0x73be,	// (0x00041908) sctrl_sk_top_pane

0x73d0,	// (0x0004191a) aid_touch_sctrl_top

0x82eb,	// (0x00042835) bg_sctrl_sk_pane_ParamLimits

0x82eb,	// (0x00042835) bg_sctrl_sk_pane

0x73dd,	// (0x00041927) sctrl_sk_top_pane_g1

0x73ea,	// (0x00041934) sctrl_sk_top_pane_t1

0x73d0,	// (0x0004191a) aid_touch_sctrl_bottom

0x82eb,	// (0x00042835) bg_sctrl_sk_pane_cp_ParamLimits

0x82eb,	// (0x00042835) bg_sctrl_sk_pane_cp

0x7405,	// (0x0004194f) sctrl_sk_bottom_pane_g1

0x73ea,	// (0x00041934) sctrl_sk_bottom_pane_t1

0x740e,	// (0x00041958) cell_sctrl_middle_pane_ParamLimits

0x740e,	// (0x00041958) cell_sctrl_middle_pane

0x7429,	// (0x00041973) aid_touch_sctrl_middle_ParamLimits

0x7429,	// (0x00041973) aid_touch_sctrl_middle

0x88e0,	// (0x00042e2a) bg_sctrl_middle_pane_ParamLimits

0x88e0,	// (0x00042e2a) bg_sctrl_middle_pane

0xc59e,	// (0x00046ae8) cell_sctrl_middle_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) cell_sctrl_middle_pane_g1

0x743b,	// (0x00041985) cell_sctrl_middle_pane_g2_ParamLimits

0x743b,	// (0x00041985) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0004a257) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0004a257) cell_sctrl_middle_pane_g

0x9d74,	// (0x000442be) bg_sctrl_middle_pane_g1

0x9d7c,	// (0x000442c6) bg_sctrl_middle_pane_g2

0x9d84,	// (0x000442ce) bg_sctrl_middle_pane_g3

0x9d8c,	// (0x000442d6) bg_sctrl_middle_pane_g4

0x9d94,	// (0x000442de) bg_sctrl_middle_pane_g5

0x9d9c,	// (0x000442e6) bg_sctrl_middle_pane_g6

0x9da4,	// (0x000442ee) bg_sctrl_middle_pane_g7

0x9dac,	// (0x000442f6) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0004a25c) bg_sctrl_middle_pane_g

0x9db4,	// (0x000442fe) bg_sctrl_middle_pane_g8_copy1

0x9d74,	// (0x000442be) bg_sctrl_sk_pane_g1

0x9d7c,	// (0x000442c6) bg_sctrl_sk_pane_g2

0x9d84,	// (0x000442ce) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00049db0) bg_sctrl_sk_pane_g

0x87eb,	// (0x00042d35) aid_size_touch_scroll_bar

0x9d8c,	// (0x000442d6) bg_sctrl_sk_pane_g4

0x9d94,	// (0x000442de) bg_sctrl_sk_pane_g5

0x9d9c,	// (0x000442e6) bg_sctrl_sk_pane_g6

0x9da4,	// (0x000442ee) bg_sctrl_sk_pane_g7

0x9dac,	// (0x000442f6) bg_sctrl_sk_pane_g8

0x9db4,	// (0x000442fe) bg_sctrl_sk_pane_g9

0x6417,	// (0x00040961) popup_fep_china_hwr2_fs_candidate_window

0x6421,	// (0x0004096b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6421,	// (0x0004096b) popup_fep_china_hwr2_fs_control_window

0xc59e,	// (0x00046ae8) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0004a252) sctrl_sk_top_pane_g

0xda4a,	// (0x00047f94) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4a,	// (0x00047f94) aid_fep_china_hwr2_fs_cell

0xda5c,	// (0x00047fa6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5c,	// (0x00047fa6) bg_popup_fep_shadow_pane_cp4

0xda73,	// (0x00047fbd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda73,	// (0x00047fbd) bg_popup_fep_shadow_pane_cp5

0xda85,	// (0x00047fcf) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda85,	// (0x00047fcf) popup_fep_china_hwr2_fs_control_bar_grid

0xda95,	// (0x00047fdf) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9d,	// (0x00047fe7) aid_fep_china_hwr2_fs_candi_cell

0x7f6e,	// (0x000424b8) bg_popup_fep_shadow_pane_cp6

0xdaa7,	// (0x00047ff1) popup_fep_china_hwr2_fs_candidate_grid

0xdab1,	// (0x00047ffb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab1,	// (0x00047ffb) cell_fep_china_hwr2_fs_funtion_grid

0xc330,	// (0x0004687a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdac9,	// (0x00048013) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdac9,	// (0x00048013) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad7,	// (0x00048021) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad7,	// (0x00048021) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0004a26d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0004a26d) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaed,	// (0x00048037) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaed,	// (0x00048037) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb02,	// (0x0004804c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb02,	// (0x0004804c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0004a272) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0004a272) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1e,	// (0x00048068) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb26,	// (0x00048070) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2e,	// (0x00048078) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0004a277) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb36,	// (0x00048080) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb36,	// (0x00048080) cell_fep_china_hwr2_fs_candidate_grid

0xdb4f,	// (0x00048099) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb57,	// (0x000480a1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc330,	// (0x0004687a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc330,	// (0x0004687a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0004a097) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb5f,	// (0x000480a9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9966,	// (0x00043eb0) clock_nsta_pane_cp_24_ParamLimits

0x9966,	// (0x00043eb0) clock_nsta_pane_cp_24

0x99e4,	// (0x00043f2e) indicator_nsta_pane_cp_24_ParamLimits

0x99e4,	// (0x00043f2e) indicator_nsta_pane_cp_24

0xaa82,	// (0x00044fcc) heading_pane_g1

0x0001,

0xf8cb,	// (0x00049e15) heading_pane_g

0xb458,	// (0x000459a2) grid_sct_catagory_button_pane

0xb488,	// (0x000459d2) scroll_pane_cp5_ParamLimits

0xbf03,	// (0x0004644d) button_value_adjust_pane_cp5_ParamLimits

0xbf03,	// (0x0004644d) button_value_adjust_pane_cp5

0xbfe2,	// (0x0004652c) form2_midp_time_pane_ParamLimits

0xdb6d,	// (0x000480b7) cell_sct_catagory_button_pane_ParamLimits

0xdb6d,	// (0x000480b7) cell_sct_catagory_button_pane

0xc2f5,	// (0x0004683f) bg_button_pane_cp01_ParamLimits

0xc2f5,	// (0x0004683f) bg_button_pane_cp01

0xc330,	// (0x0004687a) cell_sct_catagory_button_pane_g1

0x67e5,	// (0x00040d2f) popup_tb_extension_window

0xdb7f,	// (0x000480c9) aid_size_cell_ext_ParamLimits

0xdb7f,	// (0x000480c9) aid_size_cell_ext

0x82eb,	// (0x00042835) bg_tb_trans_pane_cp1_ParamLimits

0x82eb,	// (0x00042835) bg_tb_trans_pane_cp1

0xdb9f,	// (0x000480e9) grid_tb_ext_pane_ParamLimits

0xdb9f,	// (0x000480e9) grid_tb_ext_pane

0xdbd1,	// (0x0004811b) cell_tb_ext_pane_ParamLimits

0xdbd1,	// (0x0004811b) cell_tb_ext_pane

0xdbe8,	// (0x00048132) cell_tb_ext_pane_g1_ParamLimits

0xdbe8,	// (0x00048132) cell_tb_ext_pane_g1

0xdc05,	// (0x0004814f) cell_tb_ext_pane_t1

0x82eb,	// (0x00042835) list_highlight_pane_cp11_ParamLimits

0x82eb,	// (0x00042835) list_highlight_pane_cp11

0x5b71,	// (0x000400bb) popup_uni_indicator_window_ParamLimits

0x5b71,	// (0x000400bb) popup_uni_indicator_window

0x88e0,	// (0x00042e2a) bg_popup_sub_pane_cp14

0xdc20,	// (0x0004816a) list_uniindi_pane

0xdc2c,	// (0x00048176) uniindi_top_pane

0x82eb,	// (0x00042835) bg_uniindi_top_pane

0xdc4b,	// (0x00048195) uniindi_top_pane_g1

0xdc61,	// (0x000481ab) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0004a27e) uniindi_top_pane_g

0xdc8b,	// (0x000481d5) uniindi_top_pane_t1

0xdcb5,	// (0x000481ff) list_single_uniindi_pane_ParamLimits

0xdcb5,	// (0x000481ff) list_single_uniindi_pane

0xc330,	// (0x0004687a) bg_uniindi_top_pane_g1

0xdcc8,	// (0x00048212) list_single_uniindi_pane_g1

0xdcdb,	// (0x00048225) list_single_uniindi_pane_t1

0x7f6e,	// (0x000424b8) control_bg_pane

0xdd00,	// (0x0004824a) bg_sctrl_sk_pane_cp1

0xdd09,	// (0x00048253) bg_sctrl_sk_pane_cp2

0xdd12,	// (0x0004825c) control_bg_pane_g1

0xdd1b,	// (0x00048265) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0004a287) control_bg_pane_g

0xbd47,	// (0x00046291) cell_indicator_nsta_pane_g1_ParamLimits

0xbd55,	// (0x0004629f) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00049ffb) cell_indicator_nsta_pane_g_ParamLimits

0x55b3,	// (0x0003fafd) form2_midp_time_pane_t1_ParamLimits

0x862d,	// (0x00042b77) main_idle_act4_pane_ParamLimits

0x862d,	// (0x00042b77) main_idle_act4_pane

0x67e5,	// (0x00040d2f) popup_tb_extension_window_ParamLimits

0xdbc1,	// (0x0004810b) tb_ext_find_pane_ParamLimits

0xdbc1,	// (0x0004810b) tb_ext_find_pane

0xdd24,	// (0x0004826e) ai_gene_pane_1_cp1

0x966f,	// (0x00043bb9) ai_gene_pane_2_cp1

0xdd2c,	// (0x00048276) list_single_idle_plugin_calendar_pane

0xdd35,	// (0x0004827f) list_single_idle_plugin_notification_pane

0xdd3e,	// (0x00048288) list_single_idle_plugin_player_pane

0xdd47,	// (0x00048291) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd47,	// (0x00048291) list_single_idle_plugin_shortcut_pane

0xdd69,	// (0x000482b3) main_idle_act4_pane_t1

0xdd7b,	// (0x000482c5) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0004a28c) main_idle_act4_pane_t

0xdd8d,	// (0x000482d7) middle_sk_idle_act4_pane_ParamLimits

0xdd8d,	// (0x000482d7) middle_sk_idle_act4_pane

0xdda3,	// (0x000482ed) popup_clock_digital_analogue_window_cp2

0xddbd,	// (0x00048307) shortcut_wheel_idle_act4_pane_ParamLimits

0xddbd,	// (0x00048307) shortcut_wheel_idle_act4_pane

0xc330,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g1

0xc330,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g2

0xc330,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g3

0xc330,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g4

0xc330,	// (0x0004687a) shortcut_wheel_idle_act4_pane_g5

0xddd1,	// (0x0004831b) shortcut_wheel_idle_act4_pane_g6

0xddd9,	// (0x00048323) shortcut_wheel_idle_act4_pane_g7

0xdde1,	// (0x0004832b) shortcut_wheel_idle_act4_pane_g8

0xdde9,	// (0x00048333) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0004a291) shortcut_wheel_idle_act4_pane_g

0xc59e,	// (0x00046ae8) middle_sk_idle_act4_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) middle_sk_idle_act4_pane_g1

0xde4d,	// (0x00048397) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4d,	// (0x00048397) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0004a2b4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0004a2b4) middle_sk_idle_act4_pane_g

0xde59,	// (0x000483a3) middle_sk_idle_act4_pane_t1_ParamLimits

0xde59,	// (0x000483a3) middle_sk_idle_act4_pane_t1

0xde76,	// (0x000483c0) grid_ai_shortcut_pane_ParamLimits

0xde76,	// (0x000483c0) grid_ai_shortcut_pane

0xde8f,	// (0x000483d9) list_highlight_pane_cp16_ParamLimits

0xde8f,	// (0x000483d9) list_highlight_pane_cp16

0xde9c,	// (0x000483e6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde9c,	// (0x000483e6) list_single_idle_plugin_shortcut_pane_g1

0xdea8,	// (0x000483f2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea8,	// (0x000483f2) list_single_idle_plugin_shortcut_pane_g2

0xdec0,	// (0x0004840a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdec0,	// (0x0004840a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0004a2b9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0004a2b9) list_single_idle_plugin_shortcut_pane_g

0xded3,	// (0x0004841d) cell_ai_shortcut_pane_ParamLimits

0xded3,	// (0x0004841d) cell_ai_shortcut_pane

0xdef4,	// (0x0004843e) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x0004843e) cell_ai_shortcut_pane_g1

0xdd24,	// (0x0004826e) ai_gene_pane_1_cp2

0xdf16,	// (0x00048460) ai_gene_pane_2_cp2

0xdf1e,	// (0x00048468) list_highlight_pane_cp15

0xdf27,	// (0x00048471) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x00048468) list_highlight_pane_cp17

0xdf2f,	// (0x00048479) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x00048481) list_single_idle_plugin_player_pane_g1

0xb6af,	// (0x00045bf9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0004a2c0) list_single_idle_plugin_player_pane_g

0xdf3f,	// (0x00048489) list_single_idle_plugin_player_pane_t1

0xdf4d,	// (0x00048497) list_single_idle_plugin_player_pane_t2

0xdf5b,	// (0x000484a5) list_single_idle_plugin_player_pane_t3

0xdf69,	// (0x000484b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0004a2c5) list_single_idle_plugin_player_pane_t

0xdf77,	// (0x000484c1) wait_bar_pane_cp15

0xdf7f,	// (0x000484c9) grid_ai_notification_pane

0xb6af,	// (0x00045bf9) list_single_idle_plugin_notification_pane_g1

0xdf88,	// (0x000484d2) cell_ai_notification_pane_ParamLimits

0xdf88,	// (0x000484d2) cell_ai_notification_pane

0xdf95,	// (0x000484df) cell_ai_notification_pane_g1

0xdf9d,	// (0x000484e7) cell_ai_notification_pane_t1

0xdfab,	// (0x000484f5) tb_ext_find_button_pane

0xdfb3,	// (0x000484fd) tb_ext_find_pane_g1

0xdfbb,	// (0x00048505) tb_ext_find_pane_t1

0x8f24,	// (0x0004346e) tb_ext_find_button_pane_g1

0xdfc9,	// (0x00048513) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0004a2ce) tb_ext_find_button_pane_g

0xdd69,	// (0x000482b3) main_idle_act4_pane_t1_ParamLimits

0xdd7b,	// (0x000482c5) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0004a28c) main_idle_act4_pane_t_ParamLimits

0xdda3,	// (0x000482ed) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddb1,	// (0x000482fb) sat_plugin_idle_act4_pane_ParamLimits

0xddb1,	// (0x000482fb) sat_plugin_idle_act4_pane

0xdfd2,	// (0x0004851c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfd2,	// (0x0004851c) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x0004852f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x0004852f) sat_plugin_idle_act4_pane_t2

0xdff8,	// (0x00048542) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdff8,	// (0x00048542) sat_plugin_idle_act4_pane_t3

0xe00b,	// (0x00048555) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe00b,	// (0x00048555) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0004a2d3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0004a2d3) sat_plugin_idle_act4_pane_t

0x5aba,	// (0x00040004) popup_battery_window_ParamLimits

0x5aba,	// (0x00040004) popup_battery_window

0x82eb,	// (0x00042835) bg_popup_sub_pane_cp25_ParamLimits

0x82eb,	// (0x00042835) bg_popup_sub_pane_cp25

0xe01e,	// (0x00048568) popup_battery_window_g1_ParamLimits

0xe01e,	// (0x00048568) popup_battery_window_g1

0xe02a,	// (0x00048574) popup_battery_window_t1_ParamLimits

0xe02a,	// (0x00048574) popup_battery_window_t1

0xe03c,	// (0x00048586) popup_battery_window_t2_ParamLimits

0xe03c,	// (0x00048586) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0004a2dc) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0004a2dc) popup_battery_window_t

0x9538,	// (0x00043a82) midp_canvas_pane_ParamLimits

0x95b1,	// (0x00043afb) midp_keypad_pane_ParamLimits

0x95b1,	// (0x00043afb) midp_keypad_pane

0x986a,	// (0x00043db4) main_midp_pane_ParamLimits

0xbdc1,	// (0x0004630b) signal_pane_g2_cp_ParamLimits

0xe059,	// (0x000485a3) aid_size_cell_midp_keypad_ParamLimits

0xe059,	// (0x000485a3) aid_size_cell_midp_keypad

0xe073,	// (0x000485bd) midp_keyp_game_grid_pane_ParamLimits

0xe073,	// (0x000485bd) midp_keyp_game_grid_pane

0xe093,	// (0x000485dd) midp_keyp_rocker_pane_ParamLimits

0xe093,	// (0x000485dd) midp_keyp_rocker_pane

0xe0cc,	// (0x00048616) midp_keyp_sk_left_pane_ParamLimits

0xe0cc,	// (0x00048616) midp_keyp_sk_left_pane

0xe126,	// (0x00048670) midp_keyp_sk_right_pane_ParamLimits

0xe126,	// (0x00048670) midp_keyp_sk_right_pane

0x7f6e,	// (0x000424b8) bg_button_pane_cp03

0xe180,	// (0x000486ca) midp_keyp_sk_left_pane_g1

0x7f6e,	// (0x000424b8) bg_button_pane_cp04

0xe180,	// (0x000486ca) midp_keyp_sk_right_pane_g1

0xc330,	// (0x0004687a) midp_keyp_rocker_pane_g1

0xe189,	// (0x000486d3) keyp_game_cell_pane_ParamLimits

0xe189,	// (0x000486d3) keyp_game_cell_pane

0x7f6e,	// (0x000424b8) bg_button_pane_cp02

0xe19c,	// (0x000486e6) keyp_game_cell_pane_g1

0x5af0,	// (0x0004003a) popup_fep_vkb2_window_ParamLimits

0x5af0,	// (0x0004003a) popup_fep_vkb2_window

0x7459,	// (0x000419a3) aid_size_cell_vkb2_ParamLimits

0x7459,	// (0x000419a3) aid_size_cell_vkb2

0x74ad,	// (0x000419f7) popup_fep_vkb2_window_g1_ParamLimits

0x74ad,	// (0x000419f7) popup_fep_vkb2_window_g1

0x74f5,	// (0x00041a3f) vkb2_area_bottom_pane_ParamLimits

0x74f5,	// (0x00041a3f) vkb2_area_bottom_pane

0x7541,	// (0x00041a8b) vkb2_area_keypad_pane_ParamLimits

0x7541,	// (0x00041a8b) vkb2_area_keypad_pane

0x7583,	// (0x00041acd) vkb2_area_top_pane_ParamLimits

0x7583,	// (0x00041acd) vkb2_area_top_pane

0x75fd,	// (0x00041b47) vkb2_top_entry_pane_ParamLimits

0x75fd,	// (0x00041b47) vkb2_top_entry_pane

0x7627,	// (0x00041b71) vkb2_top_grid_left_pane_ParamLimits

0x7627,	// (0x00041b71) vkb2_top_grid_left_pane

0x7645,	// (0x00041b8f) vkb2_top_grid_right_pane_ParamLimits

0x7645,	// (0x00041b8f) vkb2_top_grid_right_pane

0x7663,	// (0x00041bad) vkb2_cell_keypad_pane_ParamLimits

0x7663,	// (0x00041bad) vkb2_cell_keypad_pane

0x7734,	// (0x00041c7e) vkb2_area_bottom_grid_pane_ParamLimits

0x7734,	// (0x00041c7e) vkb2_area_bottom_grid_pane

0x775a,	// (0x00041ca4) vkb2_area_bottom_pane_g1_ParamLimits

0x775a,	// (0x00041ca4) vkb2_area_bottom_pane_g1

0x777e,	// (0x00041cc8) vkb2_area_bottom_pane_g2_ParamLimits

0x777e,	// (0x00041cc8) vkb2_area_bottom_pane_g2

0x77ac,	// (0x00041cf6) vkb2_area_bottom_pane_g3_ParamLimits

0x77ac,	// (0x00041cf6) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0004a2e1) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0004a2e1) vkb2_area_bottom_pane_g

0x780d,	// (0x00041d57) vkb2_top_cell_left_pane_ParamLimits

0x780d,	// (0x00041d57) vkb2_top_cell_left_pane

0xe1ad,	// (0x000486f7) vkb2_top_entry_pane_g1_ParamLimits

0xe1ad,	// (0x000486f7) vkb2_top_entry_pane_g1

0xe1bb,	// (0x00048705) vkb2_top_entry_pane_t1_ParamLimits

0xe1bb,	// (0x00048705) vkb2_top_entry_pane_t1

0xe1ed,	// (0x00048737) vkb2_top_entry_pane_t2_ParamLimits

0xe1ed,	// (0x00048737) vkb2_top_entry_pane_t2

0xe21f,	// (0x00048769) vkb2_top_entry_pane_t3_ParamLimits

0xe21f,	// (0x00048769) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0004a2e8) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0004a2e8) vkb2_top_entry_pane_t

0x785a,	// (0x00041da4) vkb2_top_grid_right_pane_g1_ParamLimits

0x785a,	// (0x00041da4) vkb2_top_grid_right_pane_g1

0x7870,	// (0x00041dba) vkb2_top_grid_right_pane_g2_ParamLimits

0x7870,	// (0x00041dba) vkb2_top_grid_right_pane_g2

0x7888,	// (0x00041dd2) vkb2_top_grid_right_pane_g3_ParamLimits

0x7888,	// (0x00041dd2) vkb2_top_grid_right_pane_g3

0x78a0,	// (0x00041dea) vkb2_top_grid_right_pane_g4_ParamLimits

0x78a0,	// (0x00041dea) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0004a2ef) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0004a2ef) vkb2_top_grid_right_pane_g

0x78b6,	// (0x00041e00) vkb2_top_cell_left_pane_g1

0x78cd,	// (0x00041e17) vkb2_cell_keypad_pane_g1_ParamLimits

0x78cd,	// (0x00041e17) vkb2_cell_keypad_pane_g1

0xe243,	// (0x0004878d) vkb2_cell_keypad_pane_t1_ParamLimits

0xe243,	// (0x0004878d) vkb2_cell_keypad_pane_t1

0x78db,	// (0x00041e25) vkb2_cell_bottom_grid_pane_ParamLimits

0x78db,	// (0x00041e25) vkb2_cell_bottom_grid_pane

0x7914,	// (0x00041e5e) vkb2_cell_bottom_grid_pane_g1

0xddf1,	// (0x0004833b) aid_call2_pane_cp02

0xddf9,	// (0x00048343) aid_call_pane_cp02

0xde01,	// (0x0004834b) clock_digital_number_pane_cp10

0xde09,	// (0x00048353) clock_digital_number_pane_cp11

0xde11,	// (0x0004835b) clock_digital_number_pane_cp12

0xde19,	// (0x00048363) clock_digital_number_pane_cp13

0xde21,	// (0x0004836b) clock_digital_separator_pane_cp10

0x8f24,	// (0x0004346e) popup_clock_digital_analogue_window_cp2_g1

0x8f24,	// (0x0004346e) popup_clock_digital_analogue_window_cp2_g2

0xde29,	// (0x00048373) popup_clock_digital_analogue_window_cp2_g3

0x8f24,	// (0x0004346e) popup_clock_digital_analogue_window_cp2_g4

0xde29,	// (0x00048373) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0004a2a4) popup_clock_digital_analogue_window_cp2_g

0xde31,	// (0x0004837b) popup_clock_digital_analogue_window_cp2_t1

0xde3f,	// (0x00048389) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0004a2af) popup_clock_digital_analogue_window_cp2_t

0xc330,	// (0x0004687a) clock_digital_number_pane_cp10_g1

0xc330,	// (0x0004687a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0004a097) clock_digital_number_pane_cp10_g

0xc330,	// (0x0004687a) clock_digital_separator_pane_cp10_g1

0xc330,	// (0x0004687a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0004a097) clock_digital_separator_pane_cp10_g

0xdc6d,	// (0x000481b7) uniindi_top_pane_g3

0xdc7e,	// (0x000481c8) uniindi_top_pane_g4

0x76ee,	// (0x00041c38) vkb2_row_keypad_pane_ParamLimits

0x76ee,	// (0x00041c38) vkb2_row_keypad_pane

0x7934,	// (0x00041e7e) vkb2_cell_t_keypad_pane_ParamLimits

0x7934,	// (0x00041e7e) vkb2_cell_t_keypad_pane

0x7944,	// (0x00041e8e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7944,	// (0x00041e8e) vkb2_cell_t_keypad_pane_cp08

0x7957,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7957,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp09

0x796b,	// (0x00041eb5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x796b,	// (0x00041eb5) vkb2_cell_t_keypad_pane_cp01

0x797c,	// (0x00041ec6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x797c,	// (0x00041ec6) vkb2_cell_t_keypad_pane_cp02

0x798d,	// (0x00041ed7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x798d,	// (0x00041ed7) vkb2_cell_t_keypad_pane_cp03

0x799e,	// (0x00041ee8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x799e,	// (0x00041ee8) vkb2_cell_t_keypad_pane_cp04

0x79af,	// (0x00041ef9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x79af,	// (0x00041ef9) vkb2_cell_t_keypad_pane_cp05

0x79c0,	// (0x00041f0a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x79c0,	// (0x00041f0a) vkb2_cell_t_keypad_pane_cp06

0x79d1,	// (0x00041f1b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x79d1,	// (0x00041f1b) vkb2_cell_t_keypad_pane_cp07

0x79e2,	// (0x00041f2c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x79e2,	// (0x00041f2c) vkb2_cell_t_keypad_pane_cp10

0xc59e,	// (0x00046ae8) vkb2_cell_t_keypad_pane_g1

0xe25a,	// (0x000487a4) vkb2_cell_t_keypad_pane_t1

0x7f6e,	// (0x000424b8) popup_grid_graphic2_window

0xe26c,	// (0x000487b6) aid_size_cell_graphic2_ParamLimits

0xe26c,	// (0x000487b6) aid_size_cell_graphic2

0xe2a4,	// (0x000487ee) bg_popup_window_pane_cp21_ParamLimits

0xe2a4,	// (0x000487ee) bg_popup_window_pane_cp21

0xe2b2,	// (0x000487fc) graphic2_pages_pane_ParamLimits

0xe2b2,	// (0x000487fc) graphic2_pages_pane

0xe2f8,	// (0x00048842) grid_graphic2_control_pane_ParamLimits

0xe2f8,	// (0x00048842) grid_graphic2_control_pane

0xe336,	// (0x00048880) grid_graphic2_pane_ParamLimits

0xe336,	// (0x00048880) grid_graphic2_pane

0xe3cb,	// (0x00048915) cell_graphic2_pane

0x7f6e,	// (0x000424b8) main_comp_mode_pane

0xd4e2,	// (0x00047a2c) list_ai3_gene_pane_ParamLimits

0xd8b3,	// (0x00047dfd) bg_popup_window_pane_cp19_ParamLimits

0xd8bf,	// (0x00047e09) bg_touch_area_indi_pane_ParamLimits

0xd8bf,	// (0x00047e09) bg_touch_area_indi_pane

0xd8d5,	// (0x00047e1f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d5,	// (0x00047e1f) bg_touch_area_indi_pane_cp01

0xd8eb,	// (0x00047e35) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8eb,	// (0x00047e35) bg_touch_area_indi_pane_cp02

0xd903,	// (0x00047e4d) bg_touch_area_indi_pane_cp03_ParamLimits

0xd903,	// (0x00047e4d) bg_touch_area_indi_pane_cp03

0xd91d,	// (0x00047e67) popup_slider_window_g1_ParamLimits

0xd939,	// (0x00047e83) popup_slider_window_g2_ParamLimits

0xd955,	// (0x00047e9f) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0004a239) popup_slider_window_g_ParamLimits

0xd9b1,	// (0x00047efb) popup_slider_window_t1_ParamLimits

0xda25,	// (0x00047f6f) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x00048915) cell_graphic2_pane_ParamLimits

0xe419,	// (0x00048963) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x00048963) bg_button_pane_cp10

0xe42c,	// (0x00048976) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x00048976) bg_button_pane_cp11

0xe43f,	// (0x00048989) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x00048989) graphic2_pages_pane_g1

0xe45a,	// (0x000489a4) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x000489a4) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0004a2fd) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0004a2fd) graphic2_pages_pane_g

0xe472,	// (0x000489bc) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x000489bc) graphic2_pages_pane_t1

0xe488,	// (0x000489d2) cell_graphic2_control_pane_ParamLimits

0xe488,	// (0x000489d2) cell_graphic2_control_pane

0xe4a9,	// (0x000489f3) cell_graphic2_pane_g1_ParamLimits

0xe4a9,	// (0x000489f3) cell_graphic2_pane_g1

0xe4b6,	// (0x00048a00) cell_graphic2_pane_g2_ParamLimits

0xe4b6,	// (0x00048a00) cell_graphic2_pane_g2

0xe4c3,	// (0x00048a0d) cell_graphic2_pane_g3_ParamLimits

0xe4c3,	// (0x00048a0d) cell_graphic2_pane_g3

0xe4d0,	// (0x00048a1a) cell_graphic2_pane_g4_ParamLimits

0xe4d0,	// (0x00048a1a) cell_graphic2_pane_g4

0xe4dd,	// (0x00048a27) cell_graphic2_pane_g5_ParamLimits

0xe4dd,	// (0x00048a27) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0004a302) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0004a302) cell_graphic2_pane_g

0xe4f8,	// (0x00048a42) cell_graphic2_pane_t1_ParamLimits

0xe4f8,	// (0x00048a42) cell_graphic2_pane_t1

0x9de8,	// (0x00044332) grid_highlight_pane_cp11_ParamLimits

0x9de8,	// (0x00044332) grid_highlight_pane_cp11

0x82eb,	// (0x00042835) bg_button_pane_cp05

0xe521,	// (0x00048a6b) cell_graphic2_control_pane_g1

0xc330,	// (0x0004687a) bg_touch_area_indi_pane_g1

0xe549,	// (0x00048a93) aid_cmod_rocker_key_size

0xe553,	// (0x00048a9d) aid_cmode_itu_key_size

0xe55d,	// (0x00048aa7) main_cmode_video_pane

0xe567,	// (0x00048ab1) main_comp_mode_itu_pane

0xe573,	// (0x00048abd) main_comp_mode_rocker_pane

0xe57f,	// (0x00048ac9) cell_cmode_rocker_pane_ParamLimits

0xe57f,	// (0x00048ac9) cell_cmode_rocker_pane

0xe591,	// (0x00048adb) cell_cmode_itu_pane_ParamLimits

0xe591,	// (0x00048adb) cell_cmode_itu_pane

0x88e0,	// (0x00042e2a) bg_button_pane_cp06_ParamLimits

0x88e0,	// (0x00042e2a) bg_button_pane_cp06

0xc59e,	// (0x00046ae8) cell_cmode_rocker_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) cell_cmode_rocker_pane_g1

0xdac9,	// (0x00048013) cell_cmode_rocker_pane_g2_ParamLimits

0xdac9,	// (0x00048013) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0004a312) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0004a312) cell_cmode_rocker_pane_g

0x7f6e,	// (0x000424b8) bg_button_pane_cp07

0xe5a6,	// (0x00048af0) cell_cmode_itu_pane_g1

0xe5af,	// (0x00048af9) cell_cmode_itu_pane_t1

0xe5bd,	// (0x00048b07) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0004a317) cell_cmode_itu_pane_t

0xdcf0,	// (0x0004823a) aid_touch_ctrl_left

0xdcf8,	// (0x00048242) aid_touch_ctrl_right

0x7f6e,	// (0x000424b8) compa_mode_pane

0xe5cb,	// (0x00048b15) aid_cmod_rocker_key_size_cp

0xe5d5,	// (0x00048b1f) aid_cmode_itu_key_size_cp

0xe5df,	// (0x00048b29) compa_mode_pane_g1

0xe5e7,	// (0x00048b31) compa_mode_pane_g2

0xe5ef,	// (0x00048b39) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0004a31c) compa_mode_pane_g

0xe5f7,	// (0x00048b41) main_comp_mode_itu_pane_cp

0xe5ff,	// (0x00048b49) main_comp_mode_rocker_pane_cp

0xe607,	// (0x00048b51) cell_cmode_itu_pane_cp_ParamLimits

0xe607,	// (0x00048b51) cell_cmode_itu_pane_cp

0xe61c,	// (0x00048b66) cell_cmode_rocker_pane_cp_ParamLimits

0xe61c,	// (0x00048b66) cell_cmode_rocker_pane_cp

0x88e0,	// (0x00042e2a) bg_button_pane_cp06_cp_ParamLimits

0x88e0,	// (0x00042e2a) bg_button_pane_cp06_cp

0xc59e,	// (0x00046ae8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc59e,	// (0x00046ae8) cell_cmode_rocker_pane_g1_cp

0xc330,	// (0x0004687a) cell_cmode_rocker_pane_g2_cp

0x7f6e,	// (0x000424b8) bg_button_pane_cp07_cp

0xe62e,	// (0x00048b78) cell_cmode_itu_pane_g1_cp

0xe637,	// (0x00048b81) cell_cmode_itu_pane_t1_cp

0xe637,	// (0x00048b81) cell_cmode_itu_pane_t2_cp

0xb2a1,	// (0x000457eb) settings_code_pane_cp2

0x8062,	// (0x000425ac) bg_popup_window_pane_cp3_ParamLimits

0x84b9,	// (0x00042a03) heading_pane_cp3_ParamLimits

0x84c5,	// (0x00042a0f) listscroll_popup_graphic_pane_ParamLimits

0x6f1e,	// (0x00041468) fep_hwr_aid_pane_ParamLimits

0x73d0,	// (0x0004191a) aid_touch_sctrl_top_ParamLimits

0x73dd,	// (0x00041927) sctrl_sk_top_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0004a252) sctrl_sk_top_pane_g_ParamLimits

0x73ea,	// (0x00041934) sctrl_sk_top_pane_t1_ParamLimits

0x73d0,	// (0x0004191a) aid_touch_sctrl_bottom_ParamLimits

0x73ea,	// (0x00041934) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc39,	// (0x00048183) aid_area_touch_clock

0x75c5,	// (0x00041b0f) aid_vkb2_area_top_pane_cell_ParamLimits

0x75c5,	// (0x00041b0f) aid_vkb2_area_top_pane_cell

0x7710,	// (0x00041c5a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7710,	// (0x00041c5a) aid_vkb2_area_bottom_pane_cell

0xe1a5,	// (0x000486ef) popup_char_count_window

0xe645,	// (0x00048b8f) popup_char_count_window_g1

0xe64e,	// (0x00048b98) popup_char_count_window_g2

0xe657,	// (0x00048ba1) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0004a323) popup_char_count_window_g

0xe660,	// (0x00048baa) popup_char_count_window_t1

0x748b,	// (0x000419d5) popup_fep_char_preview_window_ParamLimits

0x748b,	// (0x000419d5) popup_fep_char_preview_window

0x75e3,	// (0x00041b2d) vkb2_top_candi_pane_ParamLimits

0x75e3,	// (0x00041b2d) vkb2_top_candi_pane

0xe66e,	// (0x00048bb8) cell_vkb2_top_candi_pane_ParamLimits

0xe66e,	// (0x00048bb8) cell_vkb2_top_candi_pane

0xa3fa,	// (0x00044944) bg_popup_fep_char_preview_window_ParamLimits

0xa3fa,	// (0x00044944) bg_popup_fep_char_preview_window

0x79f7,	// (0x00041f41) popup_fep_char_preview_window_t1_ParamLimits

0x79f7,	// (0x00041f41) popup_fep_char_preview_window_t1

0xe6bb,	// (0x00048c05) bg_popup_fep_char_preview_window_g1

0xe6c3,	// (0x00048c0d) bg_popup_fep_char_preview_window_g2

0xe6cb,	// (0x00048c15) bg_popup_fep_char_preview_window_g3

0xe6d3,	// (0x00048c1d) bg_popup_fep_char_preview_window_g4

0xe6db,	// (0x00048c25) bg_popup_fep_char_preview_window_g5

0x7a31,	// (0x00041f7b) bg_popup_fep_char_preview_window_g6

0xe6e3,	// (0x00048c2d) bg_popup_fep_char_preview_window_g7

0xe6eb,	// (0x00048c35) bg_popup_fep_char_preview_window_g8

0xe6f3,	// (0x00048c3d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0004a32a) bg_popup_fep_char_preview_window_g

0xc59e,	// (0x00046ae8) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) cell_vkb2_top_candi_pane_g1

0xc8b5,	// (0x00046dff) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc8b5,	// (0x00046dff) cell_vkb2_top_candi_pane_g2

0xc8d6,	// (0x00046e20) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc8d6,	// (0x00046e20) cell_vkb2_top_candi_pane_g3

0x7a39,	// (0x00041f83) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a39,	// (0x00041f83) cell_vkb2_top_candi_pane_g4

0xe386,	// (0x000488d0) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe386,	// (0x000488d0) cell_vkb2_top_candi_pane_g5

0xdac9,	// (0x00048013) cell_vkb2_top_candi_pane_g6_ParamLimits

0xdac9,	// (0x00048013) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0004a33d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0004a33d) cell_vkb2_top_candi_pane_g

0x7a5a,	// (0x00041fa4) cell_vkb2_top_candi_pane_t1

0x6bfc,	// (0x00041146) aid_size_touch_slider_mark_ParamLimits

0x6bfc,	// (0x00041146) aid_size_touch_slider_mark

0xe2e8,	// (0x00048832) grid_graphic2_catg_pane_ParamLimits

0xe2e8,	// (0x00048832) grid_graphic2_catg_pane

0xe3a7,	// (0x000488f1) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x000488f1) popup_grid_graphic2_window_t1

0xe3b9,	// (0x00048903) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x00048903) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0004a2f8) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0004a2f8) popup_grid_graphic2_window_t

0x82eb,	// (0x00042835) bg_button_pane_cp05_ParamLimits

0xe521,	// (0x00048a6b) cell_graphic2_control_pane_g1_ParamLimits

0xe6fb,	// (0x00048c45) cell_graphic2_catg_pane_ParamLimits

0xe6fb,	// (0x00048c45) cell_graphic2_catg_pane

0x7f6e,	// (0x000424b8) bg_button_pane_cp12

0xe70d,	// (0x00048c57) cell_graphic2_catg_pane_g1

0xdc05,	// (0x0004814f) cell_tb_ext_pane_t1_ParamLimits

0x782d,	// (0x00041d77) vkb2_top_cell_right_narrow_pane_ParamLimits

0x782d,	// (0x00041d77) vkb2_top_cell_right_narrow_pane

0x7845,	// (0x00041d8f) vkb2_top_cell_right_wide_pane_ParamLimits

0x7845,	// (0x00041d8f) vkb2_top_cell_right_wide_pane

0x6f10,	// (0x0004145a) bg_vkb2_func_pane_ParamLimits

0x6f10,	// (0x0004145a) bg_vkb2_func_pane

0x78b6,	// (0x00041e00) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f10,	// (0x0004145a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f10,	// (0x0004145a) bg_vkb2_fuc_pane_cp03

0x7914,	// (0x00041e5e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d7c,	// (0x000442c6) bg_vkb2_func_pane_g1

0x9d84,	// (0x000442ce) bg_vkb2_func_pane_g2

0x9d94,	// (0x000442de) bg_vkb2_func_pane_g3

0x9d8c,	// (0x000442d6) bg_vkb2_func_pane_g4

0x9d9c,	// (0x000442e6) bg_vkb2_func_pane_g5

0x9da4,	// (0x000442ee) bg_vkb2_func_pane_g6

0x9dac,	// (0x000442f6) bg_vkb2_func_pane_g7

0x9db4,	// (0x000442fe) bg_vkb2_func_pane_g8

0x9d74,	// (0x000442be) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0004a34a) bg_vkb2_func_pane_g

0x6f10,	// (0x0004145a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f10,	// (0x0004145a) bg_vkb2_fuc_pane_cp01

0x78b6,	// (0x00041e00) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x78b6,	// (0x00041e00) vkb2_top_cell_right_wide_pane_g1

0x6f10,	// (0x0004145a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f10,	// (0x0004145a) bg_vkb2_fuc_pane_cp02

0x7914,	// (0x00041e5e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7914,	// (0x00041e5e) vkb2_top_cell_right_narrow_pane_g1

0xd831,	// (0x00047d7b) aid_touch_area_decrease_ParamLimits

0xd831,	// (0x00047d7b) aid_touch_area_decrease

0xd855,	// (0x00047d9f) aid_touch_area_increase_ParamLimits

0xd855,	// (0x00047d9f) aid_touch_area_increase

0xd861,	// (0x00047dab) aid_touch_area_mute_ParamLimits

0xd861,	// (0x00047dab) aid_touch_area_mute

0xd885,	// (0x00047dcf) aid_touch_area_slider_ParamLimits

0xd885,	// (0x00047dcf) aid_touch_area_slider

0xd971,	// (0x00047ebb) popup_slider_window_g4_ParamLimits

0xd971,	// (0x00047ebb) popup_slider_window_g4

0xd97d,	// (0x00047ec7) popup_slider_window_g5_ParamLimits

0xd97d,	// (0x00047ec7) popup_slider_window_g5

0xd99f,	// (0x00047ee9) popup_slider_window_g6_ParamLimits

0xd99f,	// (0x00047ee9) popup_slider_window_g6

0xd9df,	// (0x00047f29) popup_slider_window_t2_ParamLimits

0xd9df,	// (0x00047f29) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0004a246) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0004a246) popup_slider_window_t

0xd9f7,	// (0x00047f41) slider_pane_ParamLimits

0xd9f7,	// (0x00047f41) slider_pane

0xe716,	// (0x00048c60) slider_pane_g1_ParamLimits

0xe716,	// (0x00048c60) slider_pane_g1

0xe72a,	// (0x00048c74) slider_pane_g2_ParamLimits

0xe72a,	// (0x00048c74) slider_pane_g2

0xe740,	// (0x00048c8a) slider_pane_g3_ParamLimits

0xe740,	// (0x00048c8a) slider_pane_g3

0x0003,

0xfe13,	// (0x0004a35d) slider_pane_g_ParamLimits

0xfe13,	// (0x0004a35d) slider_pane_g

0x6841,	// (0x00040d8b) popup_tb_float_extension_window_ParamLimits

0x6841,	// (0x00040d8b) popup_tb_float_extension_window

0xe76c,	// (0x00048cb6) aid_size_cell_tb_float_ext

0x7f6e,	// (0x000424b8) bg_popup_sub_window_cp28

0xe778,	// (0x00048cc2) grid_tb_float_ext_pane

0xe782,	// (0x00048ccc) cell_tb_float_ext_pane_ParamLimits

0xe782,	// (0x00048ccc) cell_tb_float_ext_pane

0xe79c,	// (0x00048ce6) cell_tb_float_ext_pane_g1

0xe7a5,	// (0x00048cef) grid_highlight_pane_cp12

0x7051,	// (0x0004159b) cell_last_hwr_side_pane_ParamLimits

0x7051,	// (0x0004159b) cell_last_hwr_side_pane

0xc330,	// (0x0004687a) cell_last_hwr_side_pane_g1

0xe7ae,	// (0x00048cf8) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0004a366) cell_last_hwr_side_pane_g

0x77dc,	// (0x00041d26) vkb2_area_bottom_space_btn_pane_ParamLimits

0x77dc,	// (0x00041d26) vkb2_area_bottom_space_btn_pane

0xc59e,	// (0x00046ae8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe25a,	// (0x000487a4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a5a,	// (0x00041fa4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a79,	// (0x00041fc3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a79,	// (0x00041fc3) vkb2_area_bottom_space_btn_pane_g1

0x7ab3,	// (0x00041ffd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7ab3,	// (0x00041ffd) vkb2_area_bottom_space_btn_pane_g2

0x7ae9,	// (0x00042033) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7ae9,	// (0x00042033) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0004a36b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0004a36b) vkb2_area_bottom_space_btn_pane_g

0x6fc5,	// (0x0004150f) cel_fep_hwr_func_pane_ParamLimits

0x6fc5,	// (0x0004150f) cel_fep_hwr_func_pane

0x7001,	// (0x0004154b) cell_hwr_side_button_pane_ParamLimits

0x7001,	// (0x0004154b) cell_hwr_side_button_pane

0xdc39,	// (0x00048183) aid_area_touch_clock_ParamLimits

0x82eb,	// (0x00042835) bg_uniindi_top_pane_ParamLimits

0xdc4b,	// (0x00048195) uniindi_top_pane_g1_ParamLimits

0xdc61,	// (0x000481ab) uniindi_top_pane_g2_ParamLimits

0xdc6d,	// (0x000481b7) uniindi_top_pane_g3_ParamLimits

0xdc7e,	// (0x000481c8) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0004a27e) uniindi_top_pane_g_ParamLimits

0xdc8b,	// (0x000481d5) uniindi_top_pane_t1_ParamLimits

0x82eb,	// (0x00042835) bg_vkb2_func_pane_cp01_ParamLimits

0x82eb,	// (0x00042835) bg_vkb2_func_pane_cp01

0xe7b7,	// (0x00048d01) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b7,	// (0x00048d01) cel_fep_hwr_func_pane_g1

0x82eb,	// (0x00042835) bg_vkb2_func_pane_cp02_ParamLimits

0x82eb,	// (0x00042835) bg_vkb2_func_pane_cp02

0xe7b7,	// (0x00048d01) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b7,	// (0x00048d01) cell_hwr_side_button_pane_g1

0x9bf5,	// (0x0004413f) status_pane_g4_ParamLimits

0x9bf5,	// (0x0004413f) status_pane_g4

0x9c0f,	// (0x00044159) status_pane_t1

0xc04a,	// (0x00046594) form2_midp_gauge_slider_cont_pane

0xc052,	// (0x0004659c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc064,	// (0x000465ae) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc076,	// (0x000465c0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0004a04a) form2_midp_gauge_slider_pane_t_ParamLimits

0xc088,	// (0x000465d2) form2_midp_slider_pane_ParamLimits

0x744b,	// (0x00041995) aid_size_cell_func_vkb2_ParamLimits

0x744b,	// (0x00041995) aid_size_cell_func_vkb2

0xe758,	// (0x00048ca2) slider_pane_g4_ParamLimits

0xe758,	// (0x00048ca2) slider_pane_g4

0x7b33,	// (0x0004207d) form2_midp_gauge_slider_pane_t2_cp01

0x7b41,	// (0x0004208b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7b41,	// (0x0004208b) form2_midp_gauge_slider_pane_t3_cp01

0x7b5e,	// (0x000420a8) form2_midp_slider_pane_cp01

0x7f6e,	// (0x000424b8) navi_smil_pane

0xe7f0,	// (0x00048d3a) navi_smil_pane_g1

0xe7f8,	// (0x00048d42) navi_smil_pane_t1

0xe7c5,	// (0x00048d0f) form2_midp_slider_pane_g1

0xe7ce,	// (0x00048d18) form2_midp_slider_pane_g2

0xe7d6,	// (0x00048d20) form2_midp_slider_pane_g3

0xe7c5,	// (0x00048d0f) form2_midp_slider_pane_g4

0xe7de,	// (0x00048d28) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0004a374) form2_midp_slider_pane_g

0x7b23,	// (0x0004206d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7b23,	// (0x0004206d) vkb2_area_bottom_space_btn_pane_g4

0x9a20,	// (0x00043f6a) lc0_navi_pane_ParamLimits

0x9a20,	// (0x00043f6a) lc0_navi_pane

0x9aa2,	// (0x00043fec) lc0_stat_indi_pane_ParamLimits

0x9aa2,	// (0x00043fec) lc0_stat_indi_pane

0x9ab9,	// (0x00044003) ls0_title_pane_ParamLimits

0x9ab9,	// (0x00044003) ls0_title_pane

0x88e0,	// (0x00042e2a) bg_popup_sub_pane_cp14_ParamLimits

0xdc20,	// (0x0004816a) list_uniindi_pane_ParamLimits

0xdc2c,	// (0x00048176) uniindi_top_pane_ParamLimits

0xdcc8,	// (0x00048212) list_single_uniindi_pane_g1_ParamLimits

0xdcdb,	// (0x00048225) list_single_uniindi_pane_t1_ParamLimits

0x7b67,	// (0x000420b1) lc0_stat_clock_pane_ParamLimits

0x7b67,	// (0x000420b1) lc0_stat_clock_pane

0xe806,	// (0x00048d50) lc0_stat_indi_pane_g1_ParamLimits

0xe806,	// (0x00048d50) lc0_stat_indi_pane_g1

0xe813,	// (0x00048d5d) lc0_stat_indi_pane_g2_ParamLimits

0xe813,	// (0x00048d5d) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0004a37f) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0004a37f) lc0_stat_indi_pane_g

0x7b74,	// (0x000420be) lc0_uni_indicator_pane_ParamLimits

0x7b74,	// (0x000420be) lc0_uni_indicator_pane

0xe820,	// (0x00048d6a) ls0_title_pane_g1_ParamLimits

0xe820,	// (0x00048d6a) ls0_title_pane_g1

0xe834,	// (0x00048d7e) ls0_title_pane_t1_ParamLimits

0xe834,	// (0x00048d7e) ls0_title_pane_t1

0x7b81,	// (0x000420cb) lc0_uni_indicator_pane_g1_ParamLimits

0x7b81,	// (0x000420cb) lc0_uni_indicator_pane_g1

0xe86a,	// (0x00048db4) lc0_stat_clock_pane_t1

0x7f6e,	// (0x000424b8) main_ai5_pane

0xe878,	// (0x00048dc2) ai5_sk_pane_ParamLimits

0xe878,	// (0x00048dc2) ai5_sk_pane

0xe885,	// (0x00048dcf) cell_ai5_widget_pane_ParamLimits

0xe885,	// (0x00048dcf) cell_ai5_widget_pane

0xe94f,	// (0x00048e99) aid_size_cell_widget_grid

0xe965,	// (0x00048eaf) bg_ai5_widget_pane_ParamLimits

0xe965,	// (0x00048eaf) bg_ai5_widget_pane

0xe9d9,	// (0x00048f23) cell_ai5_widget_pane_g2

0xe9e9,	// (0x00048f33) cell_ai5_widget_pane_g3

0xea00,	// (0x00048f4a) cell_ai5_widget_pane_g4

0xea0c,	// (0x00048f56) cell_ai5_widget_pane_g5

0xea18,	// (0x00048f62) cell_ai5_widget_pane_g6

0xea24,	// (0x00048f6e) cell_ai5_widget_pane_g7

0xea6c,	// (0x00048fb6) cell_ai5_widget_pane_t1_ParamLimits

0xea6c,	// (0x00048fb6) cell_ai5_widget_pane_t1

0xea89,	// (0x00048fd3) cell_ai5_widget_pane_t2_ParamLimits

0xea89,	// (0x00048fd3) cell_ai5_widget_pane_t2

0xeaa1,	// (0x00048feb) cell_ai5_widget_pane_t3_ParamLimits

0xeaa1,	// (0x00048feb) cell_ai5_widget_pane_t3

0xeab9,	// (0x00049003) cell_ai5_widget_pane_t4_ParamLimits

0xeab9,	// (0x00049003) cell_ai5_widget_pane_t4

0xead6,	// (0x00049020) cell_ai5_widget_pane_t5_ParamLimits

0xead6,	// (0x00049020) cell_ai5_widget_pane_t5

0xeaf5,	// (0x0004903f) cell_ai5_widget_pane_t6_ParamLimits

0xeaf5,	// (0x0004903f) cell_ai5_widget_pane_t6

0xeb07,	// (0x00049051) cell_ai5_widget_pane_t7_ParamLimits

0xeb07,	// (0x00049051) cell_ai5_widget_pane_t7

0xeb20,	// (0x0004906a) cell_ai5_widget_pane_t8_ParamLimits

0xeb20,	// (0x0004906a) cell_ai5_widget_pane_t8

0x0009,

0x0006,	// (0x0003a550) cell_ai5_widget_pane_t_ParamLimits

0x0006,	// (0x0003a550) cell_ai5_widget_pane_t

0xeb74,	// (0x000490be) grid_ai5_widget_pane

0x88e0,	// (0x00042e2a) highlight_cell_ai5_widget_pane_ParamLimits

0x88e0,	// (0x00042e2a) highlight_cell_ai5_widget_pane

0xeb8c,	// (0x000490d6) ai5_sk_left_pane

0xeb96,	// (0x000490e0) ai5_sk_middle_pane

0xeba0,	// (0x000490ea) ai5_sk_right_pane

0xebaa,	// (0x000490f4) bg_ai5_widget_pane_g1_ParamLimits

0xebaa,	// (0x000490f4) bg_ai5_widget_pane_g1

0xebb6,	// (0x00049100) bg_ai5_widget_pane_g2_ParamLimits

0xebb6,	// (0x00049100) bg_ai5_widget_pane_g2

0xebc2,	// (0x0004910c) bg_ai5_widget_pane_g3_ParamLimits

0xebc2,	// (0x0004910c) bg_ai5_widget_pane_g3

0xebce,	// (0x00049118) bg_ai5_widget_pane_g4_ParamLimits

0xebce,	// (0x00049118) bg_ai5_widget_pane_g4

0xebda,	// (0x00049124) bg_ai5_widget_pane_g5_ParamLimits

0xebda,	// (0x00049124) bg_ai5_widget_pane_g5

0xebe6,	// (0x00049130) bg_ai5_widget_pane_g6_ParamLimits

0xebe6,	// (0x00049130) bg_ai5_widget_pane_g6

0xebf2,	// (0x0004913c) bg_ai5_widget_pane_g7_ParamLimits

0xebf2,	// (0x0004913c) bg_ai5_widget_pane_g7

0xebfe,	// (0x00049148) bg_ai5_widget_pane_g8_ParamLimits

0xebfe,	// (0x00049148) bg_ai5_widget_pane_g8

0xec0a,	// (0x00049154) bg_ai5_widget_pane_g9_ParamLimits

0xec0a,	// (0x00049154) bg_ai5_widget_pane_g9

0x0008,

0x001b,	// (0x0003a565) bg_ai5_widget_pane_g_ParamLimits

0x001b,	// (0x0003a565) bg_ai5_widget_pane_g

0xec3c,	// (0x00049186) cell_shortcut_ai5_widget_pane_ParamLimits

0xec3c,	// (0x00049186) cell_shortcut_ai5_widget_pane

0x9530,	// (0x00043a7a) bg_cell_shortcut_ai5_widget_pane

0xec4d,	// (0x00049197) cell_grid_ai5_widget_pane_g1

0x9530,	// (0x00043a7a) highlight_cell_shortcut_ai5_widget_pane

0x9d84,	// (0x000442ce) ai5_sk_left_pane_g1

0xec56,	// (0x000491a0) ai5_sk_left_pane_g2

0xec5e,	// (0x000491a8) ai5_sk_left_pane_g3

0xec66,	// (0x000491b0) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0004a399) ai5_sk_left_pane_g

0xec6e,	// (0x000491b8) ai5_sk_left_pane_t1

0x9d7c,	// (0x000442c6) ai5_sk_right_pane_g1

0xec7c,	// (0x000491c6) ai5_sk_right_pane_g2

0xec84,	// (0x000491ce) ai5_sk_right_pane_g3

0xec8c,	// (0x000491d6) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x0004a3a2) ai5_sk_right_pane_g

0xec94,	// (0x000491de) ai5_sk_right_pane_t1

0x9d7c,	// (0x000442c6) ai5_sk_middle_pane_g1

0x9d84,	// (0x000442ce) ai5_sk_middle_pane_g2

0x9d9c,	// (0x000442e6) ai5_sk_middle_pane_g3

0xec84,	// (0x000491ce) ai5_sk_middle_pane_g4

0xec5e,	// (0x000491a8) ai5_sk_middle_pane_g5

0xeca2,	// (0x000491ec) ai5_sk_middle_pane_g6

0xecaa,	// (0x000491f4) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0004a3ab) ai5_sk_middle_pane_g

0x98b0,	// (0x00043dfa) aid_touch_area_size_lc0_ParamLimits

0x98b0,	// (0x00043dfa) aid_touch_area_size_lc0

0x7150,	// (0x0004169a) cell_hwr_candidate_pane_t1_ParamLimits

0x98cc,	// (0x00043e16) aid_touch_navi_pane

0x9ba7,	// (0x000440f1) status_dt_navi_pane_ParamLimits

0x9ba7,	// (0x000440f1) status_dt_navi_pane

0x9bb4,	// (0x000440fe) status_dt_sta_pane_ParamLimits

0x9bb4,	// (0x000440fe) status_dt_sta_pane

0xecb2,	// (0x000491fc) dt_sta_controll_pane

0xecbf,	// (0x00049209) dt_sta_indi_pane

0xecd0,	// (0x0004921a) dt_sta_title_pane

0x82eb,	// (0x00042835) bg_dt_sta_indi_pane_ParamLimits

0x82eb,	// (0x00042835) bg_dt_sta_indi_pane

0xece3,	// (0x0004922d) dt_sta_battery_pane

0xeceb,	// (0x00049235) dt_sta_indi_pane_g1

0xecf4,	// (0x0004923e) dt_sta_indi_pane_g2

0xecfd,	// (0x00049247) dt_sta_indi_pane_g3

0x0002,

0x004f,	// (0x0003a599) dt_sta_indi_pane_g

0xed06,	// (0x00049250) dt_sta_signal_pane

0x88e0,	// (0x00042e2a) bg_dt_sta_title_pane_ParamLimits

0x88e0,	// (0x00042e2a) bg_dt_sta_title_pane

0xed0f,	// (0x00049259) dt_sta_title_pane_g1

0xed17,	// (0x00049261) dt_sta_title_pane_t1_ParamLimits

0xed17,	// (0x00049261) dt_sta_title_pane_t1

0x7f6e,	// (0x000424b8) bg_dt_sta_control_pane

0xed2c,	// (0x00049276) dt_sta_controll_pane_g1

0xed35,	// (0x0004927f) bg_dt_sta_title_pane_g1

0xed3e,	// (0x00049288) bg_dt_sta_title_pane_g2

0xed47,	// (0x00049291) bg_dt_sta_title_pane_g3

0x0002,

0x0056,	// (0x0003a5a0) bg_dt_sta_title_pane_g

0xc330,	// (0x0004687a) bg_dt_sta_indi_pane_g1

0xed50,	// (0x0004929a) dt_sta_signal_pane_g1

0xed58,	// (0x000492a2) dt_sta_signal_pane_g2

0x0001,

0x005d,	// (0x0003a5a7) dt_sta_signal_pane_g

0xed60,	// (0x000492aa) dt_sta_battery_pane_g1

0xed69,	// (0x000492b3) dt_sta_battery_pane_t1

0xc330,	// (0x0004687a) bg_dt_sta_control_pane_g1

0x9032,	// (0x0004357c) fep_china_uni_eep_pane

0x903a,	// (0x00043584) fep_china_uni_entry_pane_ParamLimits

0x904a,	// (0x00043594) popup_fep_china_uni_window_g1_ParamLimits

0x905a,	// (0x000435a4) popup_fep_china_uni_window_g2_ParamLimits

0x905a,	// (0x000435a4) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00049c6c) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00049c6c) popup_fep_china_uni_window_g

0xed78,	// (0x000492c2) fep_china_uni_eep_pane_g1

0xed80,	// (0x000492ca) fep_china_uni_eep_pane_t1

0xe7e7,	// (0x00048d31) aid_touch_area_size_smil_player

0x9a18,	// (0x00043f62) lc0_clock_pane

0x9c03,	// (0x0004414d) status_pane_g5_ParamLimits

0x9c03,	// (0x0004414d) status_pane_g5

0x6508,	// (0x00040a52) popup_keymap_window

0x9bc9,	// (0x00044113) status_icon_pane

0xe9e9,	// (0x00048f33) cell_ai5_widget_pane_g3_ParamLimits

0xea00,	// (0x00048f4a) cell_ai5_widget_pane_g4_ParamLimits

0xea0c,	// (0x00048f56) cell_ai5_widget_pane_g5_ParamLimits

0xea30,	// (0x00048f7a) cell_ai5_widget_pane_g8_ParamLimits

0xea30,	// (0x00048f7a) cell_ai5_widget_pane_g8

0xea44,	// (0x00048f8e) cell_ai5_widget_pane_g9_ParamLimits

0xea44,	// (0x00048f8e) cell_ai5_widget_pane_g9

0xea58,	// (0x00048fa2) cell_ai5_widget_pane_g10_ParamLimits

0xea58,	// (0x00048fa2) cell_ai5_widget_pane_g10

0xed8f,	// (0x000492d9) status_icon_pane_g1

0x7f6e,	// (0x000424b8) bg_popup_sub_pane_cp13

0xed97,	// (0x000492e1) popup_keymap_window_t1

0x97f5,	// (0x00043d3f) control_pane_g6_ParamLimits

0x97f5,	// (0x00043d3f) control_pane_g6

0x9802,	// (0x00043d4c) control_pane_g7_ParamLimits

0x9802,	// (0x00043d4c) control_pane_g7

0x980f,	// (0x00043d59) control_pane_g8_ParamLimits

0x980f,	// (0x00043d59) control_pane_g8

0xecb2,	// (0x000491fc) dt_sta_controll_pane_ParamLimits

0xecbf,	// (0x00049209) dt_sta_indi_pane_ParamLimits

0xecd0,	// (0x0004921a) dt_sta_title_pane_ParamLimits

0x87f4,	// (0x00042d3e) aid_size_touch_scroll_bar_cale

0x5ace,	// (0x00040018) popup_discreet_window_ParamLimits

0x5ace,	// (0x00040018) popup_discreet_window

0x5b48,	// (0x00040092) popup_sk_window

0xa3fa,	// (0x00044944) bg_popup_sub_pane_cp28_ParamLimits

0xa3fa,	// (0x00044944) bg_popup_sub_pane_cp28

0xeda5,	// (0x000492ef) popup_discreet_window_g1_ParamLimits

0xeda5,	// (0x000492ef) popup_discreet_window_g1

0xedc5,	// (0x0004930f) popup_discreet_window_t1_ParamLimits

0xedc5,	// (0x0004930f) popup_discreet_window_t1

0xede3,	// (0x0004932d) popup_discreet_window_t2_ParamLimits

0xede3,	// (0x0004932d) popup_discreet_window_t2

0x0002,

0x0062,	// (0x0003a5ac) popup_discreet_window_t_ParamLimits

0x0062,	// (0x0003a5ac) popup_discreet_window_t

0x7b96,	// (0x000420e0) popup_sk_window_g1

0x7ba0,	// (0x000420ea) popup_sk_window_g2

0x0001,

0xfe70,	// (0x0004a3ba) popup_sk_window_g

0x7baa,	// (0x000420f4) popup_sk_window_t1

0x7bb8,	// (0x00042102) popup_sk_window_t1_copy1

0xe9d9,	// (0x00048f23) cell_ai5_widget_pane_g2_ParamLimits

0xeb32,	// (0x0004907c) cell_ai5_widget_pane_t9_ParamLimits

0xeb32,	// (0x0004907c) cell_ai5_widget_pane_t9

0x7f6e,	// (0x000424b8) main_fep_fshwr2_pane

0x7bc6,	// (0x00042110) aid_fshwr2_btn_pane

0x7bd2,	// (0x0004211c) aid_fshwr2_syb_pane

0x7bde,	// (0x00042128) aid_fshwr2_txt_pane

0x7bea,	// (0x00042134) fshwr2_func_candi_pane

0x7bff,	// (0x00042149) fshwr2_hwr_syb_pane

0x7c0f,	// (0x00042159) fshwr2_icf_pane

0x7f6e,	// (0x000424b8) fshwr2_icf_bg_pane

0x7c38,	// (0x00042182) fshwr2_icf_pane_t1_ParamLimits

0x7c38,	// (0x00042182) fshwr2_icf_pane_t1

0x8f24,	// (0x0004346e) fshwr2_func_candi_pane_g1

0xee35,	// (0x0004937f) fshwr2_func_candi_row_pane_ParamLimits

0xee35,	// (0x0004937f) fshwr2_func_candi_row_pane

0x7c50,	// (0x0004219a) cell_fshwr2_syb_pane_ParamLimits

0x7c50,	// (0x0004219a) cell_fshwr2_syb_pane

0xc59e,	// (0x00046ae8) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) fshwr2_hwr_syb_pane_g1

0x7f6e,	// (0x000424b8) bg_popup_call_pane_cp01

0x7c66,	// (0x000421b0) fshwr2_func_candi_cell_pane_ParamLimits

0x7c66,	// (0x000421b0) fshwr2_func_candi_cell_pane

0xaa76,	// (0x00044fc0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa76,	// (0x00044fc0) fshwr2_func_candi_cell_bg_pane

0x7c9b,	// (0x000421e5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c9b,	// (0x000421e5) fshwr2_func_candi_cell_pane_g1

0x7cbb,	// (0x00042205) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7cbb,	// (0x00042205) fshwr2_func_candi_cell_pane_t1

0x7f6e,	// (0x000424b8) bg_button_pane_cp08

0xb717,	// (0x00045c61) cell_fshwr2_syb_bg_pane

0x7cce,	// (0x00042218) cell_fshwr2_syb_bg_pane_g1

0x7cd6,	// (0x00042220) cell_fshwr2_syb_bg_pane_t1

0x88e0,	// (0x00042e2a) main_tmo_pane

0xaf0f,	// (0x00045459) uni_indicator_pane_g1_ParamLimits

0xaf25,	// (0x0004546f) uni_indicator_pane_g2_ParamLimits

0xaf3b,	// (0x00045485) uni_indicator_pane_g3_ParamLimits

0xaf50,	// (0x0004549a) uni_indicator_pane_g4_ParamLimits

0xaf50,	// (0x0004549a) uni_indicator_pane_g4

0xaf64,	// (0x000454ae) uni_indicator_pane_g5_ParamLimits

0xaf64,	// (0x000454ae) uni_indicator_pane_g5

0xaf64,	// (0x000454ae) uni_indicator_pane_g6_ParamLimits

0xaf64,	// (0x000454ae) uni_indicator_pane_g6

0xf921,	// (0x00049e6b) uni_indicator_pane_g_ParamLimits

0xd813,	// (0x00047d5d) popup_tmo_note_window_ParamLimits

0xd813,	// (0x00047d5d) popup_tmo_note_window

0x88e0,	// (0x00042e2a) fshwr2_bg_pane

0x7cac,	// (0x000421f6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7cac,	// (0x000421f6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe75,	// (0x0004a3bf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe75,	// (0x0004a3bf) fshwr2_func_candi_cell_pane_g

0xc330,	// (0x0004687a) bg_popup_window_pane_cp01

0x7ce5,	// (0x0004222f) bg_popup_window_pane_g1_cp01

0xee45,	// (0x0004938f) bg_popup_window_pane_cp22_ParamLimits

0xee45,	// (0x0004938f) bg_popup_window_pane_cp22

0xee53,	// (0x0004939d) listscroll_tmo_link_pane_ParamLimits

0xee53,	// (0x0004939d) listscroll_tmo_link_pane

0xee93,	// (0x000493dd) popup_tmo_note_window_g1_ParamLimits

0xee93,	// (0x000493dd) popup_tmo_note_window_g1

0xeea0,	// (0x000493ea) tmo_note_info_pane_ParamLimits

0xeea0,	// (0x000493ea) tmo_note_info_pane

0xeeba,	// (0x00049404) list_tmo_note_info_pane_g1_ParamLimits

0xeeba,	// (0x00049404) list_tmo_note_info_pane_g1

0xeed1,	// (0x0004941b) list_tmo_note_info_pane_g2_ParamLimits

0xeed1,	// (0x0004941b) list_tmo_note_info_pane_g2

0x0001,

0x0073,	// (0x0003a5bd) list_tmo_note_info_pane_g_ParamLimits

0x0073,	// (0x0003a5bd) list_tmo_note_info_pane_g

0xeeed,	// (0x00049437) list_tmo_note_info_text_pane_ParamLimits

0xeeed,	// (0x00049437) list_tmo_note_info_text_pane

0xef70,	// (0x000494ba) list_tmo_link_pane

0xef7d,	// (0x000494c7) scroll_pane_cp20

0xef8a,	// (0x000494d4) list_single_tmo_link_pane_ParamLimits

0xef8a,	// (0x000494d4) list_single_tmo_link_pane

0xef9a,	// (0x000494e4) list_single_tmo_link_pane_t1

0xefa8,	// (0x000494f2) list_tmo_note_info_text_pane_t1_ParamLimits

0xefa8,	// (0x000494f2) list_tmo_note_info_text_pane_t1

0x898e,	// (0x00042ed8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x898e,	// (0x00042ed8) aid_size_touch_scroll_bar_cp01

0x4f98,	// (0x0003f4e2) aid_size_touch_slider_marker

0x5b30,	// (0x0004007a) popup_settings_window_ParamLimits

0x5b30,	// (0x0004007a) popup_settings_window

0x5120,	// (0x0003f66a) popup_candi_list_indi_window

0x98cc,	// (0x00043e16) aid_touch_navi_pane_ParamLimits

0x73a4,	// (0x000418ee) rs_clock_indi_pane

0x73ad,	// (0x000418f7) sctrl_sk_bottom_pane_ParamLimits

0x73be,	// (0x00041908) sctrl_sk_top_pane_ParamLimits

0x74a5,	// (0x000419ef) popup_fep_tooltip_window

0xe94f,	// (0x00048e99) aid_size_cell_widget_grid_ParamLimits

0xe9c4,	// (0x00048f0e) cell_ai5_widget_pane_g1_ParamLimits

0xe9c4,	// (0x00048f0e) cell_ai5_widget_pane_g1

0xea18,	// (0x00048f62) cell_ai5_widget_pane_g6_ParamLimits

0xea24,	// (0x00048f6e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0004a384) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0004a384) cell_ai5_widget_pane_g

0xeb56,	// (0x000490a0) cell_ai5_widget_pane_t10_ParamLimits

0xeb56,	// (0x000490a0) cell_ai5_widget_pane_t10

0xeb74,	// (0x000490be) grid_ai5_widget_pane_ParamLimits

0xec16,	// (0x00049160) cell_contacts_ai5_widget_pane_ParamLimits

0xec16,	// (0x00049160) cell_contacts_ai5_widget_pane

0xedf8,	// (0x00049342) popup_discreet_window_t3_ParamLimits

0xedf8,	// (0x00049342) popup_discreet_window_t3

0x7c24,	// (0x0004216e) popup_fshwr2_char_preview_window_ParamLimits

0x7c24,	// (0x0004216e) popup_fshwr2_char_preview_window

0xef0b,	// (0x00049455) tmo_note_info_pane_t1

0xef20,	// (0x0004946a) tmo_note_info_pane_t2

0xef37,	// (0x00049481) tmo_note_info_pane_t3

0xef4c,	// (0x00049496) tmo_note_info_pane_t4

0xef5e,	// (0x000494a8) tmo_note_info_pane_t5

0x0004,

0x0078,	// (0x0003a5c2) tmo_note_info_pane_t

0xef70,	// (0x000494ba) list_tmo_link_pane_ParamLimits

0xef7d,	// (0x000494c7) scroll_pane_cp20_ParamLimits

0x7f6e,	// (0x000424b8) bg_popup_fep_char_preview_window_cp01

0xefc1,	// (0x0004950b) popup_fshwr2_char_preview_window_t1

0xefcf,	// (0x00049519) popup_candi_list_indi_window_g1

0xefd8,	// (0x00049522) bg_cell_contacts_ai5_widget_pane

0xefe4,	// (0x0004952e) cell_contacts_ai5_widget_pane_g1

0xeff9,	// (0x00049543) cell_contacts_ai5_widget_pane_g2

0xf005,	// (0x0004954f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe7a,	// (0x0004a3c4) cell_contacts_ai5_widget_pane_g

0xf011,	// (0x0004955b) cell_contacts_ai5_widget_pane_t1

0x88e0,	// (0x00042e2a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf088,	// (0x000495d2) settings_container_pane

0x9530,	// (0x00043a7a) listscroll_set_pane_copy1

0xba06,	// (0x00045f50) scroll_pane_cp121_copy1

0xf094,	// (0x000495de) set_content_pane_copy1

0xf09c,	// (0x000495e6) aid_height_set_list_copy1_ParamLimits

0xf09c,	// (0x000495e6) aid_height_set_list_copy1

0xb157,	// (0x000456a1) aid_size_parent_copy1_ParamLimits

0xb157,	// (0x000456a1) aid_size_parent_copy1

0xf0a8,	// (0x000495f2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0a8,	// (0x000495f2) button_value_adjust_pane_cp6_copy1

0x986a,	// (0x00043db4) list_highlight_pane_cp2_copy1_ParamLimits

0x986a,	// (0x00043db4) list_highlight_pane_cp2_copy1

0xf0bc,	// (0x00049606) list_set_pane_copy1_ParamLimits

0xf0bc,	// (0x00049606) list_set_pane_copy1

0xf023,	// (0x0004956d) main_pane_set_t1_copy1_ParamLimits

0xf023,	// (0x0004956d) main_pane_set_t1_copy1

0xf05d,	// (0x000495a7) main_pane_set_t2_copy1_ParamLimits

0xf05d,	// (0x000495a7) main_pane_set_t2_copy1

0xf169,	// (0x000496b3) main_pane_set_t3_copy1

0xf177,	// (0x000496c1) main_pane_set_t4_copy1

0xf07c,	// (0x000495c6) set_content_pane_g1_copy1_ParamLimits

0xf07c,	// (0x000495c6) set_content_pane_g1_copy1

0xf185,	// (0x000496cf) setting_code_pane_copy1

0xf18d,	// (0x000496d7) setting_slider_graphic_pane_copy1

0xf18d,	// (0x000496d7) setting_slider_pane_copy1

0xf18d,	// (0x000496d7) setting_text_pane_copy1

0xf18d,	// (0x000496d7) setting_volume_pane_copy1

0xf185,	// (0x000496cf) settings_code_pane_cp2_copy1

0xf195,	// (0x000496df) settings_code_pane_cp_copy1_ParamLimits

0xf195,	// (0x000496df) settings_code_pane_cp_copy1

0x7cee,	// (0x00042238) volume_set_pane_copy1

0xf1a9,	// (0x000496f3) volume_set_pane_g10_copy1

0xf1b1,	// (0x000496fb) volume_set_pane_g1_copy1

0xf1b9,	// (0x00049703) volume_set_pane_g2_copy1

0xf1c1,	// (0x0004970b) volume_set_pane_g3_copy1

0xf1c9,	// (0x00049713) volume_set_pane_g4_copy1

0xf1d1,	// (0x0004971b) volume_set_pane_g5_copy1

0xf1d9,	// (0x00049723) volume_set_pane_g6_copy1

0xf1e1,	// (0x0004972b) volume_set_pane_g7_copy1

0xf1e9,	// (0x00049733) volume_set_pane_g8_copy1

0xf1f1,	// (0x0004973b) volume_set_pane_g9_copy1

0x8062,	// (0x000425ac) bg_set_opt_pane_cp_copy1_ParamLimits

0x8062,	// (0x000425ac) bg_set_opt_pane_cp_copy1

0x7cf6,	// (0x00042240) setting_slider_pane_t1_copy1_ParamLimits

0x7cf6,	// (0x00042240) setting_slider_pane_t1_copy1

0x7d14,	// (0x0004225e) setting_slider_pane_t2_copy1_ParamLimits

0x7d14,	// (0x0004225e) setting_slider_pane_t2_copy1

0x7d2e,	// (0x00042278) setting_slider_pane_t3_copy1_ParamLimits

0x7d2e,	// (0x00042278) setting_slider_pane_t3_copy1

0x7d46,	// (0x00042290) slider_set_pane_copy1_ParamLimits

0x7d46,	// (0x00042290) slider_set_pane_copy1

0x892f,	// (0x00042e79) set_opt_bg_pane_g1_copy2

0x8937,	// (0x00042e81) set_opt_bg_pane_g2_copy2

0xf1f9,	// (0x00049743) set_opt_bg_pane_g3_copy2

0x8947,	// (0x00042e91) set_opt_bg_pane_g4_copy2

0x894f,	// (0x00042e99) set_opt_bg_pane_g5_copy2

0x8957,	// (0x00042ea1) set_opt_bg_pane_g6_copy2

0xf203,	// (0x0004974d) set_opt_bg_pane_g7_copy2

0xf20b,	// (0x00049755) set_opt_bg_pane_g8_copy2

0xf215,	// (0x0004975f) set_opt_bg_pane_g9_copy2

0x7d5c,	// (0x000422a6) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d5c,	// (0x000422a6) aid_size_touch_slider_mark_copy1

0xf21f,	// (0x00049769) slider_set_pane_g1_copy1

0x7d70,	// (0x000422ba) slider_set_pane_g2_copy1

0x6c1c,	// (0x00041166) slider_set_pane_g3_copy1_ParamLimits

0x6c1c,	// (0x00041166) slider_set_pane_g3_copy1

0x6c30,	// (0x0004117a) slider_set_pane_g4_copy1_ParamLimits

0x6c30,	// (0x0004117a) slider_set_pane_g4_copy1

0x6c48,	// (0x00041192) slider_set_pane_g5_copy1_ParamLimits

0x6c48,	// (0x00041192) slider_set_pane_g5_copy1

0x6c1c,	// (0x00041166) slider_set_pane_g6_copy1_ParamLimits

0x6c1c,	// (0x00041166) slider_set_pane_g6_copy1

0x7d78,	// (0x000422c2) slider_set_pane_g7_copy1_ParamLimits

0x7d78,	// (0x000422c2) slider_set_pane_g7_copy1

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp2_copy1

0xf228,	// (0x00049772) setting_slider_graphic_pane_g1_copy1

0xf231,	// (0x0004977b) setting_slider_graphic_pane_t1_copy1

0xf241,	// (0x0004978b) setting_slider_graphic_pane_t2_copy1

0xf251,	// (0x0004979b) slider_set_pane_cp_copy1

0xf261,	// (0x000497ab) input_focus_pane_cp1_copy1

0xf26a,	// (0x000497b4) list_set_text_pane_copy1

0xf272,	// (0x000497bc) setting_text_pane_g1_copy1

0x5844,	// (0x0003fd8e) set_text_pane_t1_copy1

0xf261,	// (0x000497ab) input_focus_pane_cp2_copy1

0xf272,	// (0x000497bc) setting_code_pane_g1_copy1

0xf27b,	// (0x000497c5) setting_code_pane_t1_copy1

0xf289,	// (0x000497d3) list_set_graphic_pane_copy1

0x7f82,	// (0x000424cc) bg_set_opt_pane_cp4_copy1

0x922f,	// (0x00043779) list_set_graphic_pane_g1_copy1_ParamLimits

0x922f,	// (0x00043779) list_set_graphic_pane_g1_copy1

0xf29d,	// (0x000497e7) list_set_graphic_pane_g2_copy1

0x9247,	// (0x00043791) list_set_graphic_pane_t1_copy1_ParamLimits

0x9247,	// (0x00043791) list_set_graphic_pane_t1_copy1

0xc330,	// (0x0004687a) rs_clock_indi_pane_g1

0xf2a5,	// (0x000497ef) rs_clock_indi_pane_t1

0xf2b3,	// (0x000497fd) rs_indi_pane

0xf2bb,	// (0x00049805) rs_indi_pane_g1

0xf2c4,	// (0x0004980e) rs_indi_pane_g2

0xf2cd,	// (0x00049817) rs_indi_pane_g3

0x0002,

0x0083,	// (0x0003a5cd) rs_indi_pane_g

0x9530,	// (0x00043a7a) bg_popup_preview_window_pane_cp03

0xf2d6,	// (0x00049820) popup_fep_tooltip_window_t1

0xcfac,	// (0x000474f6) popup_note2_window_g2_ParamLimits

0xcfac,	// (0x000474f6) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0004a1b6) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0004a1b6) popup_note2_window_g

0xd4a8,	// (0x000479f2) bg_popup_sub_pane_cp11_ParamLimits

0xd4b5,	// (0x000479ff) cell_ai3_links_pane_g1_ParamLimits

0xd4cc,	// (0x00047a16) cell_ai3_links_pane_t1

0x5844,	// (0x0003fd8e) set_text_pane_t1_copy1_ParamLimits

0x9441,	// (0x0004398b) cell_graphic_popup_pane_cp2_ParamLimits

0x9441,	// (0x0004398b) cell_graphic_popup_pane_cp2

0xf2e4,	// (0x0004982e) cell_graphic_popup_pane_g1_cp2

0x8607,	// (0x00042b51) cell_graphic_popup_pane_g2_cp2

0xf2ec,	// (0x00049836) cell_graphic_popup_pane_g3_cp2

0xf2f4,	// (0x0004983e) cell_graphic_popup_pane_t2_cp2

0x8618,	// (0x00042b62) grid_highlight_pane_cp3_cp2

0x8c6f,	// (0x000431b9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x88e0,	// (0x00042e2a) main_tmo_pane_ParamLimits

0xd807,	// (0x00047d51) popup_tmo_big_image_note_window

0xe9b3,	// (0x00048efd) cell_ai5_widget_list_pane

0xe9bb,	// (0x00048f05) cell_ai5_widget_lrg_icon_pane

0xef0b,	// (0x00049455) tmo_note_info_pane_t1_ParamLimits

0xef20,	// (0x0004946a) tmo_note_info_pane_t2_ParamLimits

0xef37,	// (0x00049481) tmo_note_info_pane_t3_ParamLimits

0xef4c,	// (0x00049496) tmo_note_info_pane_t4_ParamLimits

0xef5e,	// (0x000494a8) tmo_note_info_pane_t5_ParamLimits

0x0078,	// (0x0003a5c2) tmo_note_info_pane_t_ParamLimits

0xf088,	// (0x000495d2) settings_container_pane_ParamLimits

0xf259,	// (0x000497a3) indicator_popup_pane_cp5

0xf259,	// (0x000497a3) indicator_popup_pane_cp6

0xf289,	// (0x000497d3) list_set_graphic_pane_copy1_ParamLimits

0x7f6e,	// (0x000424b8) bg_popup_window_pane_cp23

0xf302,	// (0x0004984c) popup_tmo_big_image_note_window_g1

0xf30b,	// (0x00049855) popup_tmo_big_image_note_window_t1

0xf31b,	// (0x00049865) popup_tmo_big_image_note_window_t2

0xf32b,	// (0x00049875) popup_tmo_big_image_note_window_t3

0x0002,

0x008a,	// (0x0003a5d4) popup_tmo_big_image_note_window_t

0xc330,	// (0x0004687a) cell_ai5_widget_lrg_icon_pane_g1

0xf33b,	// (0x00049885) cell_ai5_widget_lrg_icon_pane_t1

0xf349,	// (0x00049893) cell_ai5_widget_list_row_pane_ParamLimits

0xf349,	// (0x00049893) cell_ai5_widget_list_row_pane

0xf360,	// (0x000498aa) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf360,	// (0x000498aa) cell_ai5_widget_list_row_pane_g1

0xf36d,	// (0x000498b7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf36d,	// (0x000498b7) cell_ai5_widget_list_row_pane_t1

0xf39b,	// (0x000498e5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf39b,	// (0x000498e5) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0091,	// (0x0003a5db) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0091,	// (0x0003a5db) cell_ai5_widget_list_row_pane_t

0x7f6e,	// (0x000424b8) main_fep_vtchi_ss_pane

0x7daa,	// (0x000422f4) popup_fep_char_pre_window

0x7db2,	// (0x000422fc) popup_fep_ituss_window

0x7dd3,	// (0x0004231d) popup_fep_vkbss_window

0xf3c3,	// (0x0004990d) grid_vkbss_keypad_pane_ParamLimits

0xf3c3,	// (0x0004990d) grid_vkbss_keypad_pane

0xf3d3,	// (0x0004991d) ituss_keypad_pane

0x7dfe,	// (0x00042348) aid_vkbss_key_offset_ParamLimits

0x7dfe,	// (0x00042348) aid_vkbss_key_offset

0x7e0a,	// (0x00042354) cell_vkbss_key_pane_ParamLimits

0x7e0a,	// (0x00042354) cell_vkbss_key_pane

0x9bdd,	// (0x00044127) bg_cell_vkbss_key_g1_ParamLimits

0x9bdd,	// (0x00044127) bg_cell_vkbss_key_g1

0xf3e2,	// (0x0004992c) cell_vkbss_key_3p_pane_ParamLimits

0xf3e2,	// (0x0004992c) cell_vkbss_key_3p_pane

0xf3fc,	// (0x00049946) cell_vkbss_key_g1_ParamLimits

0xf3fc,	// (0x00049946) cell_vkbss_key_g1

0xf416,	// (0x00049960) cell_vkbss_key_t1_ParamLimits

0xf416,	// (0x00049960) cell_vkbss_key_t1

0x7e20,	// (0x0004236a) cell_ituss_key_pane_ParamLimits

0x7e20,	// (0x0004236a) cell_ituss_key_pane

0xf441,	// (0x0004998b) bg_cell_ituss_key_g1_ParamLimits

0xf441,	// (0x0004998b) bg_cell_ituss_key_g1

0xf44d,	// (0x00049997) cell_ituss_key_pane_g1_ParamLimits

0xf44d,	// (0x00049997) cell_ituss_key_pane_g1

0x7e31,	// (0x0004237b) cell_ituss_key_pane_g2_ParamLimits

0x7e31,	// (0x0004237b) cell_ituss_key_pane_g2

0x0002,

0xfe81,	// (0x0004a3cb) cell_ituss_key_pane_g_ParamLimits

0xfe81,	// (0x0004a3cb) cell_ituss_key_pane_g

0x7e5d,	// (0x000423a7) cell_ituss_key_t1_ParamLimits

0x7e5d,	// (0x000423a7) cell_ituss_key_t1

0x7e97,	// (0x000423e1) cell_ituss_key_t2_ParamLimits

0x7e97,	// (0x000423e1) cell_ituss_key_t2

0x7ec8,	// (0x00042412) cell_ituss_key_t3_ParamLimits

0x7ec8,	// (0x00042412) cell_ituss_key_t3

0x7e97,	// (0x000423e1) cell_ituss_key_t4_ParamLimits

0x7e97,	// (0x000423e1) cell_ituss_key_t4

0x0004,

0xfe88,	// (0x0004a3d2) cell_ituss_key_t_ParamLimits

0xfe88,	// (0x0004a3d2) cell_ituss_key_t

0xf473,	// (0x000499bd) cell_vkbss_key_3p_pane_g1

0xf47b,	// (0x000499c5) cell_vkbss_key_3p_pane_g2

0xf483,	// (0x000499cd) cell_vkbss_key_3p_pane_g3

0x0002,

0x00aa,	// (0x0003a5f4) cell_vkbss_key_3p_pane_g

0x7f6e,	// (0x000424b8) bg_popup_fep_char_preview_window_cp02

0x7f0b,	// (0x00042455) popup_fep_char_pre_window_t1

0xe945,	// (0x00048e8f) main_ai5_sk_pane

0xefd8,	// (0x00049522) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefe4,	// (0x0004952e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeff9,	// (0x00049543) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf005,	// (0x0004954f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe7a,	// (0x0004a3c4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf011,	// (0x0004955b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x88e0,	// (0x00042e2a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48b,	// (0x000499d5) main_ai5_sk_pane_g1

0xa238,	// (0x00044782) popup_query_code_window_g1

0x7dc8,	// (0x00042312) popup_fep_vkb_icf_pane

0x7ddc,	// (0x00042326) popup_fep_vtchi_icf_pane

0xf494,	// (0x000499de) bg_icf_pane

0xf4a0,	// (0x000499ea) list_vkb_icf_pane

0x986a,	// (0x00043db4) bg_icf_pane_cp01

0xf4ac,	// (0x000499f6) vtchi_icf_list_pane

0xf4bd,	// (0x00049a07) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00049a07) list_vkb_icf_pane_t1

0xf4d5,	// (0x00049a1f) vtchi_icf_list_pane_t1_ParamLimits

0xf4d5,	// (0x00049a1f) vtchi_icf_list_pane_t1

0x7db2,	// (0x000422fc) popup_fep_ituss_window_ParamLimits

0x7ddc,	// (0x00042326) popup_fep_vtchi_icf_pane_ParamLimits

0xf3d3,	// (0x0004991d) ituss_keypad_pane_ParamLimits

0x7df2,	// (0x0004233c) ituss_sks_pane

0xf494,	// (0x000499de) bg_icf_pane_ParamLimits

0x7d8e,	// (0x000422d8) icf_edit_indi_pane_ParamLimits

0x7d8e,	// (0x000422d8) icf_edit_indi_pane

0xf4a0,	// (0x000499ea) list_vkb_icf_pane_ParamLimits

0x986a,	// (0x00043db4) bg_icf_pane_cp01_ParamLimits

0x7d9d,	// (0x000422e7) icf_edit_indi_pane_cp01_ParamLimits

0x7d9d,	// (0x000422e7) icf_edit_indi_pane_cp01

0xf4b4,	// (0x000499fe) vtchi_query_pane

0xc59e,	// (0x00046ae8) icf_edit_indi_pane_g1_ParamLimits

0xc59e,	// (0x00046ae8) icf_edit_indi_pane_g1

0x7f2d,	// (0x00042477) icf_edit_indi_pane_g2_ParamLimits

0x7f2d,	// (0x00042477) icf_edit_indi_pane_g2

0x0001,

0xfe98,	// (0x0004a3e2) icf_edit_indi_pane_g_ParamLimits

0xfe98,	// (0x0004a3e2) icf_edit_indi_pane_g

0x7f3c,	// (0x00042486) icf_edit_indi_pane_t1

0xf4f7,	// (0x00049a41) bg_input_focus_pane_cp042

0x87eb,	// (0x00042d35) vtchi_button_pane

0xf500,	// (0x00049a4a) vtchi_query_pane_t1

0xf50e,	// (0x00049a58) vtchi_query_pane_t2

0xf51c,	// (0x00049a66) vtchi_query_pane_t3

0x0002,

0x00b1,	// (0x0003a5fb) vtchi_query_pane_t

0x7f6e,	// (0x000424b8) bg_button_pane_cp13

0xf52a,	// (0x00049a74) vtchi_button_pane_g1

0x7f1a,	// (0x00042464) ituss_sks_pane_g1

0x7f25,	// (0x0004246f) ituss_sks_pane_g2

0x0001,

0xfe93,	// (0x0004a3dd) ituss_sks_pane_g

0xf532,	// (0x00049a7c) ituss_sks_pane_t1

0xf540,	// (0x00049a8a) ituss_sks_pane_t2

0x0001,

0x00bd,	// (0x0003a607) ituss_sks_pane_t

0xbd7a,	// (0x000462c4) indicator_nsta_pane_cp_g1

0xbd83,	// (0x000462cd) indicator_nsta_pane_cp_g2

0xbd8b,	// (0x000462d5) indicator_nsta_pane_cp_g3

0xbd93,	// (0x000462dd) indicator_nsta_pane_cp_g4

0xbd9b,	// (0x000462e5) indicator_nsta_pane_cp_g5

0xbd9b,	// (0x000462e5) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x0004a000) indicator_nsta_pane_cp_g

0xe50e,	// (0x00048a58) cell_graphic2_pane_t2_ParamLimits

0xe50e,	// (0x00048a58) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0004a30d) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0004a30d) cell_graphic2_pane_t

0xe53b,	// (0x00048a85) cell_graphic2_control_pane_t1

0x8fe2,	// (0x0004352c) signal_pane_g3_ParamLimits

0x8fe2,	// (0x0004352c) signal_pane_g3

0x8ff4,	// (0x0004353e) signal_pane_g4_ParamLimits

0x8ff4,	// (0x0004353e) signal_pane_g4

0xf3ad,	// (0x000498f7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3ad,	// (0x000498f7) cell_ai5_widget_list_row_pane_t3

0xf461,	// (0x000499ab) cell_ituss_key_pane_t1_ParamLimits

0xf461,	// (0x000499ab) cell_ituss_key_pane_t1

0x9e76,	// (0x000443c0) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e76,	// (0x000443c0) form_field_data_wide_pane_vc_t2

0x9e8a,	// (0x000443d4) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e8a,	// (0x000443d4) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00049d53) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00049d53) form_field_data_wide_pane_vc_t

0xba46,	// (0x00045f90) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba46,	// (0x00045f90) form_field_slider_wide_pane_vc_t3

0xbb20,	// (0x0004606a) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb20,	// (0x0004606a) form_field_popup_wide_pane_vc_t2

0xbb37,	// (0x00046081) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb37,	// (0x00046081) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00049fef) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00049fef) form_field_popup_wide_pane_vc_t

0x7bc6,	// (0x00042110) aid_fshwr2_btn_pane_ParamLimits

0x7bd2,	// (0x0004211c) aid_fshwr2_syb_pane_ParamLimits

0x7bde,	// (0x00042128) aid_fshwr2_txt_pane_ParamLimits

0x88e0,	// (0x00042e2a) fshwr2_bg_pane_ParamLimits

0x7bea,	// (0x00042134) fshwr2_func_candi_pane_ParamLimits

0x7bff,	// (0x00042149) fshwr2_hwr_syb_pane_ParamLimits

0x7c0f,	// (0x00042159) fshwr2_icf_pane_ParamLimits

0x6ed7,	// (0x00041421) list_double_graphic_pane_vc_g4_ParamLimits

0x6ed7,	// (0x00041421) list_double_graphic_pane_vc_g4

0x7e51,	// (0x0004239b) cell_ituss_key_pane_g3_ParamLimits

0x7e51,	// (0x0004239b) cell_ituss_key_pane_g3

0x7ef9,	// (0x00042443) cell_ituss_key_t5_ParamLimits

0x7ef9,	// (0x00042443) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
