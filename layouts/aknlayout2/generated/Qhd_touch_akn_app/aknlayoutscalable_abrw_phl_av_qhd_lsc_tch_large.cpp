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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004e8fc };

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
0xcfde,	// (0x0005b8da) Screen

0xcfea,	// (0x0005b8e6) application_window_ParamLimits

0xcfea,	// (0x0005b8e6) application_window

0x3712,	// (0x0005200e) screen_g1

0xb775,	// (0x0005a071) area_bottom_pane_ParamLimits

0xb775,	// (0x0005a071) area_bottom_pane

0x0184,	// (0x0004ea80) area_top_pane_ParamLimits

0x0184,	// (0x0004ea80) area_top_pane

0x0222,	// (0x0004eb1e) main_pane_ParamLimits

0x0222,	// (0x0004eb1e) main_pane

0x371c,	// (0x00052018) misc_graphics

0xd77f,	// (0x0005c07b) battery_pane_ParamLimits

0xd77f,	// (0x0005c07b) battery_pane

0x5dac,	// (0x000546a8) bg_status_flat_pane_g8

0x5db4,	// (0x000546b0) bg_status_flat_pane_g9

0x51ac,	// (0x00053aa8) context_pane_ParamLimits

0x51ac,	// (0x00053aa8) context_pane

0xd984,	// (0x0005c280) navi_pane_ParamLimits

0xd984,	// (0x0005c280) navi_pane

0xda02,	// (0x0005c2fe) signal_pane_ParamLimits

0xda02,	// (0x0005c2fe) signal_pane

0x0008,

0xf879,	// (0x0005e175) bg_status_flat_pane_g

0xda92,	// (0x0005c38e) status_pane_g1_ParamLimits

0xda92,	// (0x0005c38e) status_pane_g1

0xdaa8,	// (0x0005c3a4) status_pane_g2_ParamLimits

0xdaa8,	// (0x0005c3a4) status_pane_g2

0x53d3,	// (0x00053ccf) status_pane_g3_ParamLimits

0x53d3,	// (0x00053ccf) status_pane_g3

0x0004,

0xf7a5,	// (0x0005e0a1) status_pane_g_ParamLimits

0xf7a5,	// (0x0005e0a1) status_pane_g

0xdab4,	// (0x0005c3b0) title_pane_ParamLimits

0xdab4,	// (0x0005c3b0) title_pane

0xdb17,	// (0x0005c413) uni_indicator_pane_ParamLimits

0xdb17,	// (0x0005c413) uni_indicator_pane

0x5002,	// (0x000538fe) bg_list_pane_ParamLimits

0x5002,	// (0x000538fe) bg_list_pane

0xd6f2,	// (0x0005bfee) find_pane

0xc10e,	// (0x0005aa0a) listscroll_app_pane_ParamLimits

0xc10e,	// (0x0005aa0a) listscroll_app_pane

0x502e,	// (0x0005392a) listscroll_form_pane

0xc11e,	// (0x0005aa1a) listscroll_gen_pane_ParamLimits

0xc11e,	// (0x0005aa1a) listscroll_gen_pane

0x1265,	// (0x0004fb61) listscroll_set_pane

0x692d,	// (0x00055229) main_idle_act_pane

0x4cfe,	// (0x000535fa) main_idle_trad_pane

0x4cfe,	// (0x000535fa) main_list_empty_pane

0x5048,	// (0x00053944) main_midp_pane

0x5054,	// (0x00053950) main_pane_g1_ParamLimits

0x5054,	// (0x00053950) main_pane_g1

0xc132,	// (0x0005aa2e) popup_ai_message_window_ParamLimits

0xc132,	// (0x0005aa2e) popup_ai_message_window

0xc1c3,	// (0x0005aabf) popup_fep_china_uni_window_ParamLimits

0xc1c3,	// (0x0005aabf) popup_fep_china_uni_window

0x1385,	// (0x0004fc81) popup_fep_japan_candidate_window_ParamLimits

0x1385,	// (0x0004fc81) popup_fep_japan_candidate_window

0x13a5,	// (0x0004fca1) popup_fep_japan_predictive_window_ParamLimits

0x13a5,	// (0x0004fca1) popup_fep_japan_predictive_window

0xc21f,	// (0x0005ab1b) popup_find_window

0xc23c,	// (0x0005ab38) popup_grid_graphic_window_ParamLimits

0xc23c,	// (0x0005ab38) popup_grid_graphic_window

0x140c,	// (0x0004fd08) popup_large_graphic_colour_window

0xc2da,	// (0x0005abd6) popup_menu_window_ParamLimits

0xc2da,	// (0x0005abd6) popup_menu_window

0xc4ac,	// (0x0005ada8) popup_note_image_window

0xc472,	// (0x0005ad6e) popup_note_wait_window_ParamLimits

0xc472,	// (0x0005ad6e) popup_note_wait_window

0xc4c4,	// (0x0005adc0) popup_note_window_ParamLimits

0xc4c4,	// (0x0005adc0) popup_note_window

0xc56a,	// (0x0005ae66) popup_query_code_window_ParamLimits

0xc56a,	// (0x0005ae66) popup_query_code_window

0x1654,	// (0x0004ff50) popup_query_data_code_window_ParamLimits

0x1654,	// (0x0004ff50) popup_query_data_code_window

0xc5a4,	// (0x0005aea0) popup_query_data_window_ParamLimits

0xc5a4,	// (0x0005aea0) popup_query_data_window

0xc626,	// (0x0005af22) popup_query_sat_info_window_ParamLimits

0xc626,	// (0x0005af22) popup_query_sat_info_window

0xc6bd,	// (0x0005afb9) popup_snote_single_graphic_window_ParamLimits

0xc6bd,	// (0x0005afb9) popup_snote_single_graphic_window

0xc6bd,	// (0x0005afb9) popup_snote_single_text_window_ParamLimits

0xc6bd,	// (0x0005afb9) popup_snote_single_text_window

0x16db,	// (0x0004ffd7) popup_sub_window_general

0x180b,	// (0x00050107) popup_window_general_ParamLimits

0x180b,	// (0x00050107) popup_window_general

0x5062,	// (0x0005395e) power_save_pane

0xbf93,	// (0x0005a88f) control_pane_g1_ParamLimits

0xbf93,	// (0x0005a88f) control_pane_g1

0xbfbc,	// (0x0005a8b8) control_pane_g2_ParamLimits

0xbfbc,	// (0x0005a8b8) control_pane_g2

0x4fc5,	// (0x000538c1) control_pane_g3_ParamLimits

0x4fc5,	// (0x000538c1) control_pane_g3

0x0007,

0xf78d,	// (0x0005e089) control_pane_g_ParamLimits

0xf78d,	// (0x0005e089) control_pane_g

0xbffd,	// (0x0005a8f9) control_pane_t1_ParamLimits

0xbffd,	// (0x0005a8f9) control_pane_t1

0xc063,	// (0x0005a95f) control_pane_t2_ParamLimits

0xc063,	// (0x0005a95f) control_pane_t2

0x0002,

0xf79e,	// (0x0005e09a) control_pane_t_ParamLimits

0xf79e,	// (0x0005e09a) control_pane_t

0xd624,	// (0x0005bf20) navi_navi_volume_pane_cp1

0xd62c,	// (0x0005bf28) status_small_icon_pane

0x4efa,	// (0x000537f6) status_small_pane_g1_ParamLimits

0x4efa,	// (0x000537f6) status_small_pane_g1

0xd634,	// (0x0005bf30) status_small_pane_g2_ParamLimits

0xd634,	// (0x0005bf30) status_small_pane_g2

0xd640,	// (0x0005bf3c) status_small_pane_g3_ParamLimits

0xd640,	// (0x0005bf3c) status_small_pane_g3

0xd64c,	// (0x0005bf48) status_small_pane_g4_ParamLimits

0xd64c,	// (0x0005bf48) status_small_pane_g4

0xd658,	// (0x0005bf54) status_small_pane_g5_ParamLimits

0xd658,	// (0x0005bf54) status_small_pane_g5

0xd666,	// (0x0005bf62) status_small_pane_g6_ParamLimits

0xd666,	// (0x0005bf62) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005e078) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005e078) status_small_pane_g

0xd695,	// (0x0005bf91) status_small_pane_t1

0xd6b7,	// (0x0005bfb3) status_small_wait_pane_ParamLimits

0xd6b7,	// (0x0005bfb3) status_small_wait_pane

0xd4dd,	// (0x0005bdd9) aid_levels_signal_ParamLimits

0xd4dd,	// (0x0005bdd9) aid_levels_signal

0xd4f5,	// (0x0005bdf1) signal_pane_g1_ParamLimits

0xd4f5,	// (0x0005bdf1) signal_pane_g1

0xd510,	// (0x0005be0c) signal_pane_g2_ParamLimits

0xd510,	// (0x0005be0c) signal_pane_g2

0x0003,

0xf70d,	// (0x0005e009) signal_pane_g_ParamLimits

0xf70d,	// (0x0005e009) signal_pane_g

0x47d2,	// (0x000530ce) context_pane_g1

0xcffa,	// (0x0005b8f6) title_pane_g1

0xd031,	// (0x0005b92d) title_pane_t1

0x37c4,	// (0x000520c0) title_pane_t2

0x37ea,	// (0x000520e6) title_pane_t3

0x0002,

0xf557,	// (0x0005de53) title_pane_t

0xdb3f,	// (0x0005c43b) aid_levels_battery_ParamLimits

0xdb3f,	// (0x0005c43b) aid_levels_battery

0xdb5b,	// (0x0005c457) battery_pane_g1_ParamLimits

0xdb5b,	// (0x0005c457) battery_pane_g1

0xdb78,	// (0x0005c474) battery_pane_g2_ParamLimits

0xdb78,	// (0x0005c474) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005e0ac) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005e0ac) battery_pane_g

0xdd39,	// (0x0005c635) uni_indicator_pane_g1

0xdd4f,	// (0x0005c64b) uni_indicator_pane_g2

0xdd65,	// (0x0005c661) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005e21d) uni_indicator_pane_g

0x4b70,	// (0x0005346c) navi_icon_pane_ParamLimits

0x4b70,	// (0x0005346c) navi_icon_pane

0x4aae,	// (0x000533aa) navi_midp_pane

0x4b8c,	// (0x00053488) navi_navi_pane

0x4b96,	// (0x00053492) navi_text_pane_ParamLimits

0x4b96,	// (0x00053492) navi_text_pane

0x3712,	// (0x0005200e) status_small_wait_pane_g1

0x3c19,	// (0x00052515) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005e218) status_small_wait_pane_g

0x6407,	// (0x00054d03) navi_navi_icon_text_pane

0x640f,	// (0x00054d0b) navi_navi_pane_g1_ParamLimits

0x640f,	// (0x00054d0b) navi_navi_pane_g1

0x6421,	// (0x00054d1d) navi_navi_pane_g2_ParamLimits

0x6421,	// (0x00054d1d) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005e1e6) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005e1e6) navi_navi_pane_g

0x6433,	// (0x00054d2f) navi_navi_tabs_pane

0x643c,	// (0x00054d38) navi_navi_text_pane

0x6407,	// (0x00054d03) navi_navi_volume_pane

0x63e3,	// (0x00054cdf) navi_text_pane_t1

0x63d7,	// (0x00054cd3) navi_icon_pane_g1

0x632a,	// (0x00054c26) navi_navi_text_pane_t1

0x1b01,	// (0x000503fd) navi_navi_volume_pane_g1

0x1b09,	// (0x00050405) volume_small_pane

0x6290,	// (0x00054b8c) navi_navi_icon_text_pane_g1

0x6298,	// (0x00054b94) navi_navi_icon_text_pane_t1

0x4b8c,	// (0x00053488) navi_tabs_2_long_pane

0x4b8c,	// (0x00053488) navi_tabs_2_pane

0x4b8c,	// (0x00053488) navi_tabs_3_long_pane

0x4b8c,	// (0x00053488) navi_tabs_3_pane

0x4b8c,	// (0x00053488) navi_tabs_4_pane

0x1ae1,	// (0x000503dd) tabs_2_active_pane_ParamLimits

0x1ae1,	// (0x000503dd) tabs_2_active_pane

0x1af1,	// (0x000503ed) tabs_2_passive_pane_ParamLimits

0x1af1,	// (0x000503ed) tabs_2_passive_pane

0x1aaf,	// (0x000503ab) tabs_3_active_pane_ParamLimits

0x1aaf,	// (0x000503ab) tabs_3_active_pane

0x1abf,	// (0x000503bb) tabs_3_passive_pane_ParamLimits

0x1abf,	// (0x000503bb) tabs_3_passive_pane

0x1ad0,	// (0x000503cc) tabs_3_passive_pane_cp_ParamLimits

0x1ad0,	// (0x000503cc) tabs_3_passive_pane_cp

0x1a6b,	// (0x00050367) tabs_4_active_pane_ParamLimits

0x1a6b,	// (0x00050367) tabs_4_active_pane

0x1a7c,	// (0x00050378) tabs_4_passive_pane_ParamLimits

0x1a7c,	// (0x00050378) tabs_4_passive_pane

0x1a8d,	// (0x00050389) tabs_4_passive_pane_cp_ParamLimits

0x1a8d,	// (0x00050389) tabs_4_passive_pane_cp

0x1a9e,	// (0x0005039a) tabs_4_passive_pane_cp2_ParamLimits

0x1a9e,	// (0x0005039a) tabs_4_passive_pane_cp2

0x1a47,	// (0x00050343) tabs_2_long_active_pane_ParamLimits

0x1a47,	// (0x00050343) tabs_2_long_active_pane

0x1a59,	// (0x00050355) tabs_2_long_passive_pane_ParamLimits

0x1a59,	// (0x00050355) tabs_2_long_passive_pane

0x1a08,	// (0x00050304) tabs_3_long_active_pane_ParamLimits

0x1a08,	// (0x00050304) tabs_3_long_active_pane

0x1a1b,	// (0x00050317) tabs_3_long_passive_pane_ParamLimits

0x1a1b,	// (0x00050317) tabs_3_long_passive_pane

0x1a34,	// (0x00050330) tabs_3_long_passive_pane_cp_ParamLimits

0x1a34,	// (0x00050330) tabs_3_long_passive_pane_cp

0x19ae,	// (0x000502aa) volume_small_pane_g1

0x19b7,	// (0x000502b3) volume_small_pane_g2

0x19c0,	// (0x000502bc) volume_small_pane_g3

0x19c9,	// (0x000502c5) volume_small_pane_g4

0x19d2,	// (0x000502ce) volume_small_pane_g5

0x19db,	// (0x000502d7) volume_small_pane_g6

0x19e4,	// (0x000502e0) volume_small_pane_g7

0x19ed,	// (0x000502e9) volume_small_pane_g8

0x19f6,	// (0x000502f2) volume_small_pane_g9

0x19ff,	// (0x000502fb) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005e1b2) volume_small_pane_g

0x3a77,	// (0x00052373) bg_active_tab_pane_cp2_ParamLimits

0x3a77,	// (0x00052373) bg_active_tab_pane_cp2

0x380a,	// (0x00052106) tabs_3_active_pane_g1

0xd0bd,	// (0x0005b9b9) tabs_3_active_pane_t1

0x3a77,	// (0x00052373) bg_passive_tab_pane_cp2_ParamLimits

0x3a77,	// (0x00052373) bg_passive_tab_pane_cp2

0x380a,	// (0x00052106) tabs_3_passive_pane_g1

0xd0bd,	// (0x0005b9b9) tabs_3_passive_pane_t1

0x3a77,	// (0x00052373) bg_active_tab_pane_cp3_ParamLimits

0x3a77,	// (0x00052373) bg_active_tab_pane_cp3

0x3824,	// (0x00052120) tabs_4_active_pane_g1

0xd0cf,	// (0x0005b9cb) tabs_4_active_pane_t1

0x3a77,	// (0x00052373) bg_passive_tab_pane_cp3_ParamLimits

0x3a77,	// (0x00052373) bg_passive_tab_pane_cp3

0x3824,	// (0x00052120) tabs_4_1_passive_pane_g1

0xd0cf,	// (0x0005b9cb) tabs_4_1_passive_pane_t1

0x5048,	// (0x00053944) list_highlight_pane_cp2

0xddeb,	// (0x0005c6e7) list_set_pane_ParamLimits

0xddeb,	// (0x0005c6e7) list_set_pane

0xde85,	// (0x0005c781) main_pane_set_t1_ParamLimits

0xde85,	// (0x0005c781) main_pane_set_t1

0xdea5,	// (0x0005c7a1) main_pane_set_t2_ParamLimits

0xdea5,	// (0x0005c7a1) main_pane_set_t2

0xdeb9,	// (0x0005c7b5) main_pane_set_t3_ParamLimits

0xdeb9,	// (0x0005c7b5) main_pane_set_t3

0xdecb,	// (0x0005c7c7) main_pane_set_t4_ParamLimits

0xdecb,	// (0x0005c7c7) main_pane_set_t4

0x0003,

0xf986,	// (0x0005e282) main_pane_set_t_ParamLimits

0xf986,	// (0x0005e282) main_pane_set_t

0xdedd,	// (0x0005c7d9) setting_code_pane

0xdee7,	// (0x0005c7e3) setting_slider_graphic_pane

0xdee7,	// (0x0005c7e3) setting_slider_pane

0xdee7,	// (0x0005c7e3) setting_text_pane

0xdee7,	// (0x0005c7e3) setting_volume_pane

0x0471,	// (0x0004ed6d) volume_set_pane

0x37fc,	// (0x000520f8) bg_set_opt_pane_cp

0x0479,	// (0x0004ed75) setting_slider_pane_t1

0x0492,	// (0x0004ed8e) setting_slider_pane_t2

0x04ac,	// (0x0004eda8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005de5a) setting_slider_pane_t

0x04c4,	// (0x0004edc0) slider_set_pane

0x371c,	// (0x00052018) bg_set_opt_pane_cp2

0x383e,	// (0x0005213a) setting_slider_graphic_pane_g1

0x04da,	// (0x0004edd6) setting_slider_graphic_pane_t1

0x04ea,	// (0x0004ede6) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005de61) setting_slider_graphic_pane_t

0x04fa,	// (0x0004edf6) slider_set_pane_cp

0x371c,	// (0x00052018) input_focus_pane_cp1

0x6914,	// (0x00055210) list_set_text_pane

0x3712,	// (0x0005200e) setting_text_pane_g1

0x371c,	// (0x00052018) input_focus_pane_cp2

0x3712,	// (0x0005200e) setting_code_pane_g1

0x3847,	// (0x00052143) setting_code_pane_t1

0x0502,	// (0x0004edfe) set_text_pane_t1_ParamLimits

0x0502,	// (0x0004edfe) set_text_pane_t1

0x40c3,	// (0x000529bf) set_opt_bg_pane_g1

0x40cb,	// (0x000529c7) set_opt_bg_pane_g2

0x68ee,	// (0x000551ea) set_opt_bg_pane_g3

0x40db,	// (0x000529d7) set_opt_bg_pane_g4

0x40e3,	// (0x000529df) set_opt_bg_pane_g5

0x40eb,	// (0x000529e7) set_opt_bg_pane_g6

0x68f8,	// (0x000551f4) set_opt_bg_pane_g7

0x6900,	// (0x000551fc) set_opt_bg_pane_g8

0x690a,	// (0x00055206) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005e26f) set_opt_bg_pane_g

0x68e1,	// (0x000551dd) slider_set_pane_g1

0x1b76,	// (0x00050472) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005e260) slider_set_pane_g

0x1b12,	// (0x0005040e) volume_set_pane_g1

0x1b1a,	// (0x00050416) volume_set_pane_g2

0x1b22,	// (0x0005041e) volume_set_pane_g3

0x1b2a,	// (0x00050426) volume_set_pane_g4

0x1b32,	// (0x0005042e) volume_set_pane_g5

0x1b3a,	// (0x00050436) volume_set_pane_g6

0x1b42,	// (0x0005043e) volume_set_pane_g7

0x1b4a,	// (0x00050446) volume_set_pane_g8

0x1b52,	// (0x0005044e) volume_set_pane_g9

0x1b5a,	// (0x00050456) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005e238) volume_set_pane_g

0xd0e1,	// (0x0005b9dd) indicator_pane_ParamLimits

0xd0e1,	// (0x0005b9dd) indicator_pane

0xd109,	// (0x0005ba05) main_idle_pane_g2_ParamLimits

0xd109,	// (0x0005ba05) main_idle_pane_g2

0xd141,	// (0x0005ba3d) main_pane_idle_g1_ParamLimits

0xd141,	// (0x0005ba3d) main_pane_idle_g1

0x3896,	// (0x00052192) popup_clock_digital_analogue_window_ParamLimits

0x3896,	// (0x00052192) popup_clock_digital_analogue_window

0xd168,	// (0x0005ba64) soft_indicator_pane_ParamLimits

0xd168,	// (0x0005ba64) soft_indicator_pane

0xd182,	// (0x0005ba7e) wallpaper_pane_ParamLimits

0xd182,	// (0x0005ba7e) wallpaper_pane

0x3712,	// (0x0005200e) wallpaper_pane_g1

0xd194,	// (0x0005ba90) indicator_pane_g1_ParamLimits

0xd194,	// (0x0005ba90) indicator_pane_g1

0x6cc3,	// (0x000555bf) navi_navi_icon_text_pane_srt_g1

0x38e8,	// (0x000521e4) soft_indicator_pane_t1

0x3902,	// (0x000521fe) aid_ps_area_pane

0xd1aa,	// (0x0005baa6) aid_ps_clock_pane

0x3921,	// (0x0005221d) aid_ps_indicator_pane

0x392d,	// (0x00052229) indicator_ps_pane_ParamLimits

0x392d,	// (0x00052229) indicator_ps_pane

0x393c,	// (0x00052238) power_save_pane_g1_ParamLimits

0x393c,	// (0x00052238) power_save_pane_g1

0x3948,	// (0x00052244) power_save_pane_g2_ParamLimits

0x3948,	// (0x00052244) power_save_pane_g2

0x0078,	// (0x0004e974) aid_navinavi_width_pane

0x3902,	// (0x000521fe) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005de66) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005de66) power_save_pane_g

0x3956,	// (0x00052252) power_save_pane_t1_ParamLimits

0x3956,	// (0x00052252) power_save_pane_t1

0xd1aa,	// (0x0005baa6) aid_ps_clock_pane_ParamLimits

0x3921,	// (0x0005221d) aid_ps_indicator_pane_ParamLimits

0x3968,	// (0x00052264) power_save_pane_t4_ParamLimits

0x3968,	// (0x00052264) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005de6b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005de6b) power_save_pane_t

0x3992,	// (0x0005228e) power_save_t3_ParamLimits

0x3992,	// (0x0005228e) power_save_t3

0x397d,	// (0x00052279) power_save_t2_ParamLimits

0x397d,	// (0x00052279) power_save_t2

0x39a7,	// (0x000522a3) indicator_ps_pane_g1

0xd1b8,	// (0x0005bab4) ai_gene_pane_ParamLimits

0xd1b8,	// (0x0005bab4) ai_gene_pane

0xd1cf,	// (0x0005bacb) ai_links_pane_ParamLimits

0xd1cf,	// (0x0005bacb) ai_links_pane

0xd1e7,	// (0x0005bae3) indicator_pane_cp1_ParamLimits

0xd1e7,	// (0x0005bae3) indicator_pane_cp1

0xd1f6,	// (0x0005baf2) main_pane_idle_g1_cp_ParamLimits

0xd1f6,	// (0x0005baf2) main_pane_idle_g1_cp

0x39e0,	// (0x000522dc) popup_ai_links_title_window

0xd20e,	// (0x0005bb0a) soft_indicator_pane_cp1_ParamLimits

0xd20e,	// (0x0005bb0a) soft_indicator_pane_cp1

0x66d0,	// (0x00054fcc) ai_links_pane_g1

0x66d9,	// (0x00054fd5) grid_ai_links_pane

0xdd30,	// (0x0005c62c) ai_gene_pane_1

0x66be,	// (0x00054fba) ai_gene_pane_2

0x66c7,	// (0x00054fc3) list_highlight_pane_cp4

0xdd0c,	// (0x0005c608) cell_ai_link_pane_ParamLimits

0xdd0c,	// (0x0005c608) cell_ai_link_pane

0x668f,	// (0x00054f8b) cell_ai_link_pane_g1

0x3c19,	// (0x00052515) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005e213) cell_ai_link_pane_g

0x371c,	// (0x00052018) grid_highlight_cp2

0x371c,	// (0x00052018) bg_popup_sub_pane_cp1

0x3a03,	// (0x000522ff) popup_ai_links_title_window_t1

0x65dd,	// (0x00054ed9) ai_gene_pane_1_g1_ParamLimits

0x65dd,	// (0x00054ed9) ai_gene_pane_1_g1

0x65e9,	// (0x00054ee5) ai_gene_pane_1_g2_ParamLimits

0x65e9,	// (0x00054ee5) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005e209) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005e209) ai_gene_pane_1_g

0x65f6,	// (0x00054ef2) ai_gene_pane_1_t1_ParamLimits

0x65f6,	// (0x00054ef2) ai_gene_pane_1_t1

0x662a,	// (0x00054f26) grid_ai_soft_ind_pane

0x65c8,	// (0x00054ec4) ai_gene_pane_2_t1_ParamLimits

0x65c8,	// (0x00054ec4) ai_gene_pane_2_t1

0xd222,	// (0x0005bb1e) main_pane_empty_t1_ParamLimits

0xd222,	// (0x0005bb1e) main_pane_empty_t1

0xd23a,	// (0x0005bb36) main_pane_empty_t2_ParamLimits

0xd23a,	// (0x0005bb36) main_pane_empty_t2

0xd24f,	// (0x0005bb4b) main_pane_empty_t3_ParamLimits

0xd24f,	// (0x0005bb4b) main_pane_empty_t3

0xd261,	// (0x0005bb5d) main_pane_empty_t4_ParamLimits

0xd261,	// (0x0005bb5d) main_pane_empty_t4

0xd273,	// (0x0005bb6f) main_pane_empty_t5_ParamLimits

0xd273,	// (0x0005bb6f) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005de70) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005de70) main_pane_empty_t

0x4114,	// (0x00052a10) bg_popup_window_pane_ParamLimits

0x4114,	// (0x00052a10) bg_popup_window_pane

0x6338,	// (0x00054c34) find_popup_pane_cp2_ParamLimits

0x6338,	// (0x00054c34) find_popup_pane_cp2

0x6344,	// (0x00054c40) heading_pane_ParamLimits

0x6344,	// (0x00054c40) heading_pane

0x371c,	// (0x00052018) bg_popup_sub_pane

0xdc8d,	// (0x0005c589) bg_popup_window_pane_g1_ParamLimits

0xdc8d,	// (0x0005c589) bg_popup_window_pane_g1

0xdc9c,	// (0x0005c598) bg_popup_window_pane_g2_ParamLimits

0xdc9c,	// (0x0005c598) bg_popup_window_pane_g2

0xdca8,	// (0x0005c5a4) bg_popup_window_pane_g3_ParamLimits

0xdca8,	// (0x0005c5a4) bg_popup_window_pane_g3

0xdcb4,	// (0x0005c5b0) bg_popup_window_pane_g4_ParamLimits

0xdcb4,	// (0x0005c5b0) bg_popup_window_pane_g4

0xdcc3,	// (0x0005c5bf) bg_popup_window_pane_g5_ParamLimits

0xdcc3,	// (0x0005c5bf) bg_popup_window_pane_g5

0xdcd3,	// (0x0005c5cf) bg_popup_window_pane_g6_ParamLimits

0xdcd3,	// (0x0005c5cf) bg_popup_window_pane_g6

0xdcdf,	// (0x0005c5db) bg_popup_window_pane_g7_ParamLimits

0xdcdf,	// (0x0005c5db) bg_popup_window_pane_g7

0xdcee,	// (0x0005c5ea) bg_popup_window_pane_g8_ParamLimits

0xdcee,	// (0x0005c5ea) bg_popup_window_pane_g8

0xdcfd,	// (0x0005c5f9) bg_popup_window_pane_g9_ParamLimits

0xdcfd,	// (0x0005c5f9) bg_popup_window_pane_g9

0x631e,	// (0x00054c1a) bg_popup_window_pane_g10_ParamLimits

0x631e,	// (0x00054c1a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005e1d1) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005e1d1) bg_popup_window_pane_g

0x6247,	// (0x00054b43) bg_popup_heading_pane_ParamLimits

0x6247,	// (0x00054b43) bg_popup_heading_pane

0x1bfe,	// (0x000504fa) tabs_4_passive_pane_cp_srt_ParamLimits

0x1bfe,	// (0x000504fa) tabs_4_passive_pane_cp_srt

0x1c10,	// (0x0005050c) tabs_4_passive_pane_srt_ParamLimits

0x625b,	// (0x00054b57) heading_pane_g2

0x1c10,	// (0x0005050c) tabs_4_passive_pane_srt

0x55d2,	// (0x00053ece) bg_passive_tab_pane_cp3_srt_ParamLimits

0x55d2,	// (0x00053ece) bg_passive_tab_pane_cp3_srt

0x6263,	// (0x00054b5f) heading_pane_t1_ParamLimits

0x6263,	// (0x00054b5f) heading_pane_t1

0x627a,	// (0x00054b76) heading_pane_t2_ParamLimits

0x627a,	// (0x00054b76) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005e1cc) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005e1cc) heading_pane_t

0x5d74,	// (0x00054670) bg_popup_heading_pane_g1

0x5e23,	// (0x0005471f) bg_popup_heading_pane_g2

0x5e2d,	// (0x00054729) bg_popup_heading_pane_g3

0x5e37,	// (0x00054733) bg_popup_heading_pane_g4

0x5e41,	// (0x0005473d) bg_popup_heading_pane_g5

0x5e4b,	// (0x00054747) bg_popup_heading_pane_g6

0x5e53,	// (0x0005474f) bg_popup_heading_pane_g7

0x5e5b,	// (0x00054757) bg_popup_heading_pane_g8

0x5e65,	// (0x00054761) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005e188) bg_popup_heading_pane_g

0x555e,	// (0x00053e5a) bg_popup_sub_pane_g1

0x556e,	// (0x00053e6a) bg_popup_sub_pane_g2

0x5566,	// (0x00053e62) bg_popup_sub_pane_g3

0x557e,	// (0x00053e7a) bg_popup_sub_pane_g4

0x5576,	// (0x00053e72) bg_popup_sub_pane_g5

0x5586,	// (0x00053e82) bg_popup_sub_pane_g6

0x558e,	// (0x00053e8a) bg_popup_sub_pane_g7

0x559e,	// (0x00053e9a) bg_popup_sub_pane_g8

0x5596,	// (0x00053e92) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005e162) bg_popup_sub_pane_g

0x3a77,	// (0x00052373) bg_popup_window_pane_cp5_ParamLimits

0x3a77,	// (0x00052373) bg_popup_window_pane_cp5

0x3a93,	// (0x0005238f) popup_note_window_g1_ParamLimits

0x3a93,	// (0x0005238f) popup_note_window_g1

0x3a9f,	// (0x0005239b) popup_note_window_t1_ParamLimits

0x3a9f,	// (0x0005239b) popup_note_window_t1

0x3ab5,	// (0x000523b1) popup_note_window_t2_ParamLimits

0x3ab5,	// (0x000523b1) popup_note_window_t2

0x3acb,	// (0x000523c7) popup_note_window_t3_ParamLimits

0x3acb,	// (0x000523c7) popup_note_window_t3

0x3ae1,	// (0x000523dd) popup_note_window_t4_ParamLimits

0x3ae1,	// (0x000523dd) popup_note_window_t4

0x3b09,	// (0x00052405) popup_note_window_t5_ParamLimits

0x3b09,	// (0x00052405) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005de7b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005de7b) popup_note_window_t

0x3b2d,	// (0x00052429) bg_popup_window_pane_cp6_ParamLimits

0x3b2d,	// (0x00052429) bg_popup_window_pane_cp6

0x5cf0,	// (0x000545ec) popup_note_image_window_g1_ParamLimits

0x5cf0,	// (0x000545ec) popup_note_image_window_g1

0x5cfc,	// (0x000545f8) popup_note_image_window_g2_ParamLimits

0x5cfc,	// (0x000545f8) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005e156) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005e156) popup_note_image_window_g

0x5d15,	// (0x00054611) popup_note_image_window_t1_ParamLimits

0x5d15,	// (0x00054611) popup_note_image_window_t1

0x5d2e,	// (0x0005462a) popup_note_image_window_t2_ParamLimits

0x5d2e,	// (0x0005462a) popup_note_image_window_t2

0x5d47,	// (0x00054643) popup_note_image_window_t3_ParamLimits

0x5d47,	// (0x00054643) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005e15b) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005e15b) popup_note_image_window_t

0x5bb1,	// (0x000544ad) bg_popup_window_pane_cp7_ParamLimits

0x5bb1,	// (0x000544ad) bg_popup_window_pane_cp7

0x5be1,	// (0x000544dd) popup_note_wait_window_g1_ParamLimits

0x5be1,	// (0x000544dd) popup_note_wait_window_g1

0x5bed,	// (0x000544e9) popup_note_wait_window_g2_ParamLimits

0x5bed,	// (0x000544e9) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005e144) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005e144) popup_note_wait_window_g

0x5c05,	// (0x00054501) popup_note_wait_window_t1_ParamLimits

0x5c05,	// (0x00054501) popup_note_wait_window_t1

0x5c2c,	// (0x00054528) popup_note_wait_window_t2_ParamLimits

0x5c2c,	// (0x00054528) popup_note_wait_window_t2

0x5c49,	// (0x00054545) popup_note_wait_window_t3_ParamLimits

0x5c49,	// (0x00054545) popup_note_wait_window_t3

0x5c5c,	// (0x00054558) popup_note_wait_window_t4_ParamLimits

0x5c5c,	// (0x00054558) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005e14b) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005e14b) popup_note_wait_window_t

0x5c81,	// (0x0005457d) wait_bar_pane_ParamLimits

0x5c81,	// (0x0005457d) wait_bar_pane

0x371c,	// (0x00052018) wait_anim_pane

0x371c,	// (0x00052018) wait_border_pane

0x3712,	// (0x0005200e) wait_anim_pane_g1

0x3712,	// (0x0005200e) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005e004) wait_anim_pane_g

0x5b55,	// (0x00054451) wait_border_pane_g1

0x5b60,	// (0x0005445c) wait_border_pane_g2

0x5b69,	// (0x00054465) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005e13d) wait_border_pane_g

0x59c0,	// (0x000542bc) bg_popup_window_pane_cp16_ParamLimits

0x59c0,	// (0x000542bc) bg_popup_window_pane_cp16

0x5ac0,	// (0x000543bc) indicator_popup_pane_cp4_ParamLimits

0x5ac0,	// (0x000543bc) indicator_popup_pane_cp4

0x5ad4,	// (0x000543d0) popup_query_data_window_t1_ParamLimits

0x5ad4,	// (0x000543d0) popup_query_data_window_t1

0x5ae6,	// (0x000543e2) popup_query_data_window_t2_ParamLimits

0x5ae6,	// (0x000543e2) popup_query_data_window_t2

0x5aff,	// (0x000543fb) popup_query_data_window_t3_ParamLimits

0x5aff,	// (0x000543fb) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005e136) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005e136) popup_query_data_window_t

0x5b19,	// (0x00054415) query_popup_data_pane_ParamLimits

0x5b19,	// (0x00054415) query_popup_data_pane

0x5b2d,	// (0x00054429) query_popup_data_pane_cp1_ParamLimits

0x5b2d,	// (0x00054429) query_popup_data_pane_cp1

0x59c0,	// (0x000542bc) bg_popup_window_pane_cp10_ParamLimits

0x59c0,	// (0x000542bc) bg_popup_window_pane_cp10

0x59f2,	// (0x000542ee) indicator_popup_pane_ParamLimits

0x59f2,	// (0x000542ee) indicator_popup_pane

0x5a14,	// (0x00054310) popup_query_code_window_t1_ParamLimits

0x5a14,	// (0x00054310) popup_query_code_window_t1

0x5a2e,	// (0x0005432a) popup_query_code_window_t2_ParamLimits

0x5a2e,	// (0x0005432a) popup_query_code_window_t2

0x5a77,	// (0x00054373) popup_query_code_window_t3_ParamLimits

0x5a77,	// (0x00054373) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005e12f) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005e12f) popup_query_code_window_t

0x5aa6,	// (0x000543a2) query_popup_pane_ParamLimits

0x5aa6,	// (0x000543a2) query_popup_pane

0x3b2d,	// (0x00052429) bg_popup_window_pane_cp15_ParamLimits

0x3b2d,	// (0x00052429) bg_popup_window_pane_cp15

0x3b4b,	// (0x00052447) indicator_popup_pane_cp1_ParamLimits

0x3b4b,	// (0x00052447) indicator_popup_pane_cp1

0x3b5e,	// (0x0005245a) indicator_popup_pane_cp2_ParamLimits

0x3b5e,	// (0x0005245a) indicator_popup_pane_cp2

0x3b71,	// (0x0005246d) popup_query_data_code_window_g1_ParamLimits

0x3b71,	// (0x0005246d) popup_query_data_code_window_g1

0x3b84,	// (0x00052480) popup_query_data_code_window_t1_ParamLimits

0x3b84,	// (0x00052480) popup_query_data_code_window_t1

0x3b96,	// (0x00052492) popup_query_data_code_window_t2_ParamLimits

0x3b96,	// (0x00052492) popup_query_data_code_window_t2

0x3ba8,	// (0x000524a4) popup_query_data_code_window_t3_ParamLimits

0x3ba8,	// (0x000524a4) popup_query_data_code_window_t3

0x3bbe,	// (0x000524ba) popup_query_data_code_window_t4_ParamLimits

0x3bbe,	// (0x000524ba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005de86) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005de86) popup_query_data_code_window_t

0x1897,	// (0x00050193) list_single_midp_graphic_pane_g3

0x3bd6,	// (0x000524d2) query_popup_data_pane_cp2_ParamLimits

0x3be9,	// (0x000524e5) query_popup_pane_cp2_ParamLimits

0x3be9,	// (0x000524e5) query_popup_pane_cp2

0x371c,	// (0x00052018) bg_popup_window_pane_cp11

0x59b8,	// (0x000542b4) heading_pane_cp5

0x3cd4,	// (0x000525d0) listscroll_popup_info_pane

0x371c,	// (0x00052018) input_focus_pane_cp3

0x3bfc,	// (0x000524f8) query_popup_pane_t1

0x3c0a,	// (0x00052506) list_popup_info_pane_ParamLimits

0x3c0a,	// (0x00052506) list_popup_info_pane

0x3c19,	// (0x00052515) listscroll_popup_info_pane_g1

0x3c21,	// (0x0005251d) scroll_pane_cp7

0x3c2b,	// (0x00052527) popup_info_list_pane_t1_ParamLimits

0x3c2b,	// (0x00052527) popup_info_list_pane_t1

0x3c45,	// (0x00052541) popup_info_list_pane_t2_ParamLimits

0x3c45,	// (0x00052541) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005de8f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005de8f) popup_info_list_pane_t

0x371c,	// (0x00052018) bg_popup_window_pane_cp12

0x6cdd,	// (0x000555d9) find_popup_pane

0x37fc,	// (0x000520f8) bg_popup_window_pane_cp3

0x3c5f,	// (0x0005255b) heading_pane_cp3

0x3c6b,	// (0x00052567) listscroll_popup_graphic_pane

0x371c,	// (0x00052018) bg_popup_window_pane_cp4

0xd2d5,	// (0x0005bbd1) heading_pane_cp4

0x3cd4,	// (0x000525d0) listscroll_popup_colour_pane

0x3cdc,	// (0x000525d8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3cdc,	// (0x000525d8) cell_large_graphic_colour_none_popup_pane

0xd2dd,	// (0x0005bbd9) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2dd,	// (0x0005bbd9) grid_large_graphic_colour_popup_pane

0x3d1c,	// (0x00052618) listscroll_popup_colour_pane_g1_ParamLimits

0x3d1c,	// (0x00052618) listscroll_popup_colour_pane_g1

0x3d33,	// (0x0005262f) listscroll_popup_colour_pane_g2_ParamLimits

0x3d33,	// (0x0005262f) listscroll_popup_colour_pane_g2

0x3d4a,	// (0x00052646) listscroll_popup_colour_pane_g3_ParamLimits

0x3d4a,	// (0x00052646) listscroll_popup_colour_pane_g3

0xd301,	// (0x0005bbfd) listscroll_popup_colour_pane_g4_ParamLimits

0xd301,	// (0x0005bbfd) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005de94) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005de94) listscroll_popup_colour_pane_g

0x3d6e,	// (0x0005266a) scroll_pane_cp6_ParamLimits

0x3d6e,	// (0x0005266a) scroll_pane_cp6

0xd311,	// (0x0005bc0d) cell_large_graphic_colour_popup_pane_ParamLimits

0xd311,	// (0x0005bc0d) cell_large_graphic_colour_popup_pane

0x3d9f,	// (0x0005269b) cell_large_graphic_colour_none_popup_pane_t1

0x371c,	// (0x00052018) grid_highlight_pane_cp5

0x3dae,	// (0x000526aa) cell_large_graphic_colour_popup_pane_g1

0x3db6,	// (0x000526b2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005de9d) cell_large_graphic_colour_popup_pane_g

0x3dbe,	// (0x000526ba) cell_large_graphic_colour_popup_pane_g2_copy1

0x3dc7,	// (0x000526c3) grid_highlight_pane_cp4

0x3dcf,	// (0x000526cb) bg_popup_window_pane_cp8_ParamLimits

0x3dcf,	// (0x000526cb) bg_popup_window_pane_cp8

0x3dea,	// (0x000526e6) popup_snote_single_text_window_g1_ParamLimits

0x3dea,	// (0x000526e6) popup_snote_single_text_window_g1

0x3dfc,	// (0x000526f8) popup_snote_single_text_window_t1_ParamLimits

0x3dfc,	// (0x000526f8) popup_snote_single_text_window_t1

0x3e0f,	// (0x0005270b) popup_snote_single_text_window_t2_ParamLimits

0x3e0f,	// (0x0005270b) popup_snote_single_text_window_t2

0x3e22,	// (0x0005271e) popup_snote_single_text_window_t3_ParamLimits

0x3e22,	// (0x0005271e) popup_snote_single_text_window_t3

0x3e5b,	// (0x00052757) popup_snote_single_text_window_t4_ParamLimits

0x3e5b,	// (0x00052757) popup_snote_single_text_window_t4

0x3e8f,	// (0x0005278b) popup_snote_single_text_window_t5_ParamLimits

0x3e8f,	// (0x0005278b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005dea2) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005dea2) popup_snote_single_text_window_t

0x3ebe,	// (0x000527ba) bg_popup_window_pane_cp9_ParamLimits

0x3ebe,	// (0x000527ba) bg_popup_window_pane_cp9

0x3dea,	// (0x000526e6) popup_snote_single_graphic_window_g1_ParamLimits

0x3dea,	// (0x000526e6) popup_snote_single_graphic_window_g1

0x3ecc,	// (0x000527c8) popup_snote_single_graphic_window_g2_ParamLimits

0x3ecc,	// (0x000527c8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005dead) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005dead) popup_snote_single_graphic_window_g

0x3ed8,	// (0x000527d4) popup_snote_single_graphic_window_t1_ParamLimits

0x3ed8,	// (0x000527d4) popup_snote_single_graphic_window_t1

0x3eeb,	// (0x000527e7) popup_snote_single_graphic_window_t2_ParamLimits

0x3eeb,	// (0x000527e7) popup_snote_single_graphic_window_t2

0x3efe,	// (0x000527fa) popup_snote_single_graphic_window_t3_ParamLimits

0x3efe,	// (0x000527fa) popup_snote_single_graphic_window_t3

0x3f37,	// (0x00052833) popup_snote_single_graphic_window_t4_ParamLimits

0x3f37,	// (0x00052833) popup_snote_single_graphic_window_t4

0x3f6b,	// (0x00052867) popup_snote_single_graphic_window_t5_ParamLimits

0x3f6b,	// (0x00052867) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005deb2) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005deb2) popup_snote_single_graphic_window_t

0x6c1f,	// (0x0005551b) grid_graphic_popup_pane_ParamLimits

0x6c1f,	// (0x0005551b) grid_graphic_popup_pane

0x6c49,	// (0x00055545) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c49,	// (0x00055545) listscroll_popup_graphic_pane_g1

0xdff6,	// (0x0005c8f2) listscroll_popup_graphic_pane_g2_ParamLimits

0xdff6,	// (0x0005c8f2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005e2ac) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005e2ac) listscroll_popup_graphic_pane_g

0x6c71,	// (0x0005556d) scroll_pane_cp5

0xdf9b,	// (0x0005c897) cell_graphic_popup_pane_ParamLimits

0xdf9b,	// (0x0005c897) cell_graphic_popup_pane

0x6b9f,	// (0x0005549b) cell_graphic_popup_pane_g1

0x6ba7,	// (0x000554a3) cell_graphic_popup_pane_g2

0x3dbe,	// (0x000526ba) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005e2a5) cell_graphic_popup_pane_g

0x6bb0,	// (0x000554ac) cell_graphic_popup_pane_t2

0x3dc7,	// (0x000526c3) grid_highlight_pane_cp3

0x3fac,	// (0x000528a8) list_gen_pane_ParamLimits

0x3fac,	// (0x000528a8) list_gen_pane

0x3fde,	// (0x000528da) scroll_pane

0xdf52,	// (0x0005c84e) bg_list_pane_g1_ParamLimits

0xdf52,	// (0x0005c84e) bg_list_pane_g1

0x6b14,	// (0x00055410) bg_list_pane_g2_ParamLimits

0x6b14,	// (0x00055410) bg_list_pane_g2

0x6b29,	// (0x00055425) bg_list_pane_g3_ParamLimits

0x6b29,	// (0x00055425) bg_list_pane_g3

0x6b3d,	// (0x00055439) bg_list_pane_g4_ParamLimits

0x6b3d,	// (0x00055439) bg_list_pane_g4

0xdf6f,	// (0x0005c86b) bg_list_pane_g5_ParamLimits

0xdf6f,	// (0x0005c86b) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005e29a) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005e29a) bg_list_pane_g

0xdf1a,	// (0x0005c816) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double2_graphic_large_graphic_pane

0xdf1a,	// (0x0005c816) list_double2_graphic_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double2_graphic_pane

0xdf1a,	// (0x0005c816) list_double2_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double2_large_graphic_pane

0xdf1a,	// (0x0005c816) list_double2_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double2_pane

0xdf1a,	// (0x0005c816) list_double_graphic_heading_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_graphic_heading_pane

0xdf1a,	// (0x0005c816) list_double_graphic_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_graphic_pane

0xdf1a,	// (0x0005c816) list_double_heading_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_heading_pane

0xdf1a,	// (0x0005c816) list_double_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_large_graphic_pane

0xdf1a,	// (0x0005c816) list_double_number_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_number_pane

0xdf1a,	// (0x0005c816) list_double_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_pane

0xdf1a,	// (0x0005c816) list_double_time_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_double_time_pane

0xdf1a,	// (0x0005c816) list_setting_number_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_setting_number_pane

0xdf1a,	// (0x0005c816) list_setting_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_setting_pane

0xdf2c,	// (0x0005c828) list_single_2graphic_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_2graphic_pane

0xdf2c,	// (0x0005c828) list_single_graphic_heading_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_graphic_heading_pane

0xdf2c,	// (0x0005c828) list_single_graphic_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_graphic_pane

0xdf2c,	// (0x0005c828) list_single_heading_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_heading_pane

0xdf1a,	// (0x0005c816) list_single_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0005c816) list_single_large_graphic_pane

0xdf2c,	// (0x0005c828) list_single_number_heading_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_number_heading_pane

0xdf2c,	// (0x0005c828) list_single_number_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_number_pane

0xdf2c,	// (0x0005c828) list_single_pane_ParamLimits

0xdf2c,	// (0x0005c828) list_single_pane

0x371c,	// (0x00052018) list_highlight_pane_cp1

0x4c37,	// (0x00053533) list_single_pane_g1_ParamLimits

0x4c37,	// (0x00053533) list_single_pane_g1

0x2d91,	// (0x0005168d) list_single_pane_g2_ParamLimits

0x2d91,	// (0x0005168d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005dece) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005dece) list_single_pane_g

0x307c,	// (0x00051978) list_single_pane_t1_ParamLimits

0x307c,	// (0x00051978) list_single_pane_t1

0x4c37,	// (0x00053533) list_single_number_pane_g1_ParamLimits

0x4c37,	// (0x00053533) list_single_number_pane_g1

0x2d91,	// (0x0005168d) list_single_number_pane_g2_ParamLimits

0x2d91,	// (0x0005168d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005dece) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005dece) list_single_number_pane_g

0x185c,	// (0x00050158) list_single_number_pane_t1_ParamLimits

0x185c,	// (0x00050158) list_single_number_pane_t1

0xc861,	// (0x0005b15d) list_single_number_pane_t2_ParamLimits

0xc861,	// (0x0005b15d) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005e25b) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005e25b) list_single_number_pane_t

0xb953,	// (0x0005a24f) list_single_graphic_pane_g1_ParamLimits

0xb953,	// (0x0005a24f) list_single_graphic_pane_g1

0x4c37,	// (0x00053533) list_single_graphic_pane_g2_ParamLimits

0x4c37,	// (0x00053533) list_single_graphic_pane_g2

0x2d91,	// (0x0005168d) list_single_graphic_pane_g3_ParamLimits

0x2d91,	// (0x0005168d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005debd) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005debd) list_single_graphic_pane_g

0xb95f,	// (0x0005a25b) list_single_graphic_pane_t1_ParamLimits

0xb95f,	// (0x0005a25b) list_single_graphic_pane_t1

0xb975,	// (0x0005a271) list_single_heading_pane_g1_ParamLimits

0xb975,	// (0x0005a271) list_single_heading_pane_g1

0x2d91,	// (0x0005168d) list_single_heading_pane_g2_ParamLimits

0x2d91,	// (0x0005168d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005dec4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005dec4) list_single_heading_pane_g

0xb988,	// (0x0005a284) list_single_heading_pane_t1_ParamLimits

0xb988,	// (0x0005a284) list_single_heading_pane_t1

0xd33a,	// (0x0005bc36) list_single_heading_pane_t2_ParamLimits

0xd33a,	// (0x0005bc36) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005dec9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005dec9) list_single_heading_pane_t

0x4c37,	// (0x00053533) list_single_number_heading_pane_g1_ParamLimits

0x4c37,	// (0x00053533) list_single_number_heading_pane_g1

0x2d91,	// (0x0005168d) list_single_number_heading_pane_g2_ParamLimits

0x2d91,	// (0x0005168d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005dece) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005dece) list_single_number_heading_pane_g

0xb99e,	// (0x0005a29a) list_single_number_heading_pane_t1_ParamLimits

0xb99e,	// (0x0005a29a) list_single_number_heading_pane_t1

0x3046,	// (0x00051942) list_single_number_heading_pane_t2_ParamLimits

0x3046,	// (0x00051942) list_single_number_heading_pane_t2

0x3058,	// (0x00051954) list_single_number_heading_pane_t3_ParamLimits

0x3058,	// (0x00051954) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005ded3) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005ded3) list_single_number_heading_pane_t

0xb9b4,	// (0x0005a2b0) list_single_graphic_heading_pane_g1_ParamLimits

0xb9b4,	// (0x0005a2b0) list_single_graphic_heading_pane_g1

0xd34c,	// (0x0005bc48) list_single_graphic_heading_pane_g4_ParamLimits

0xd34c,	// (0x0005bc48) list_single_graphic_heading_pane_g4

0x2d91,	// (0x0005168d) list_single_graphic_heading_pane_g5_ParamLimits

0x2d91,	// (0x0005168d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005deda) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005deda) list_single_graphic_heading_pane_g

0xb99e,	// (0x0005a29a) list_single_graphic_heading_pane_t1_ParamLimits

0xb99e,	// (0x0005a29a) list_single_graphic_heading_pane_t1

0xb9cc,	// (0x0005a2c8) list_single_graphic_heading_pane_t2_ParamLimits

0xb9cc,	// (0x0005a2c8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005dee1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005dee1) list_single_graphic_heading_pane_t

0x3092,	// (0x0005198e) list_single_large_graphic_pane_g1_ParamLimits

0x3092,	// (0x0005198e) list_single_large_graphic_pane_g1

0x309e,	// (0x0005199a) list_single_large_graphic_pane_g2_ParamLimits

0x309e,	// (0x0005199a) list_single_large_graphic_pane_g2

0x30aa,	// (0x000519a6) list_single_large_graphic_pane_g3_ParamLimits

0x30aa,	// (0x000519a6) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005dee6) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005dee6) list_single_large_graphic_pane_g

0x5b60,	// (0x0005445c) wait_border_pane_g2_copy1

0x2d20,	// (0x0005161c) list_single_large_graphic_pane_g4_cp2

0x30b6,	// (0x000519b2) list_single_large_graphic_pane_t1_ParamLimits

0x30b6,	// (0x000519b2) list_single_large_graphic_pane_t1

0x4b22,	// (0x0005341e) list_double_pane_g1_ParamLimits

0x4b22,	// (0x0005341e) list_double_pane_g1

0xd35d,	// (0x0005bc59) list_double_pane_g2_ParamLimits

0xd35d,	// (0x0005bc59) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005deed) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005deed) list_double_pane_g

0xb9e2,	// (0x0005a2de) list_double_pane_t1_ParamLimits

0xb9e2,	// (0x0005a2de) list_double_pane_t1

0xb9f8,	// (0x0005a2f4) list_double_pane_t2_ParamLimits

0xb9f8,	// (0x0005a2f4) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005def2) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005def2) list_double_pane_t

0xba0a,	// (0x0005a306) list_double2_pane_g1_ParamLimits

0xba0a,	// (0x0005a306) list_double2_pane_g1

0xba1b,	// (0x0005a317) list_double2_pane_g2_ParamLimits

0xba1b,	// (0x0005a317) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005def7) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005def7) list_double2_pane_g

0xba27,	// (0x0005a323) list_double2_pane_t1_ParamLimits

0xba27,	// (0x0005a323) list_double2_pane_t1

0xba3d,	// (0x0005a339) list_double2_pane_t2_ParamLimits

0xba3d,	// (0x0005a339) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005defc) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005defc) list_double2_pane_t

0x4b22,	// (0x0005341e) list_double_number_pane_g1_ParamLimits

0x4b22,	// (0x0005341e) list_double_number_pane_g1

0xd35d,	// (0x0005bc59) list_double_number_pane_g2_ParamLimits

0xd35d,	// (0x0005bc59) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005deed) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005deed) list_double_number_pane_g

0xba4f,	// (0x0005a34b) list_double_number_pane_t1_ParamLimits

0xba4f,	// (0x0005a34b) list_double_number_pane_t1

0xba61,	// (0x0005a35d) list_double_number_pane_t2_ParamLimits

0xba61,	// (0x0005a35d) list_double_number_pane_t2

0xba77,	// (0x0005a373) list_double_number_pane_t3_ParamLimits

0xba77,	// (0x0005a373) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005df01) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005df01) list_double_number_pane_t

0xba89,	// (0x0005a385) list_double_graphic_pane_g1_ParamLimits

0xba89,	// (0x0005a385) list_double_graphic_pane_g1

0xba95,	// (0x0005a391) list_double_graphic_pane_g2_ParamLimits

0xba95,	// (0x0005a391) list_double_graphic_pane_g2

0xbaa4,	// (0x0005a3a0) list_double_graphic_pane_g3_ParamLimits

0xbaa4,	// (0x0005a3a0) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005df08) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005df08) list_double_graphic_pane_g

0xbab0,	// (0x0005a3ac) list_double_graphic_pane_t1_ParamLimits

0xbab0,	// (0x0005a3ac) list_double_graphic_pane_t1

0xbac6,	// (0x0005a3c2) list_double_graphic_pane_t2_ParamLimits

0xbac6,	// (0x0005a3c2) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005df11) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005df11) list_double_graphic_pane_t

0xbad8,	// (0x0005a3d4) list_double2_graphic_pane_g1_ParamLimits

0xbad8,	// (0x0005a3d4) list_double2_graphic_pane_g1

0xbae4,	// (0x0005a3e0) list_double2_graphic_pane_g2_ParamLimits

0xbae4,	// (0x0005a3e0) list_double2_graphic_pane_g2

0xd375,	// (0x0005bc71) list_double2_graphic_pane_g3_ParamLimits

0xd375,	// (0x0005bc71) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005df16) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005df16) list_double2_graphic_pane_g

0xbaf0,	// (0x0005a3ec) list_double2_graphic_pane_t1_ParamLimits

0xbaf0,	// (0x0005a3ec) list_double2_graphic_pane_t1

0xbb06,	// (0x0005a402) list_double2_graphic_pane_t2_ParamLimits

0xbb06,	// (0x0005a402) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005df1d) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005df1d) list_double2_graphic_pane_t

0xbb18,	// (0x0005a414) list_double_large_graphic_pane_g1_ParamLimits

0xbb18,	// (0x0005a414) list_double_large_graphic_pane_g1

0xbb37,	// (0x0005a433) list_double_large_graphic_pane_g2_ParamLimits

0xbb37,	// (0x0005a433) list_double_large_graphic_pane_g2

0xd35d,	// (0x0005bc59) list_double_large_graphic_pane_g3_ParamLimits

0xd35d,	// (0x0005bc59) list_double_large_graphic_pane_g3

0xbb4d,	// (0x0005a449) list_double_large_graphic_pane_g4_ParamLimits

0xbb4d,	// (0x0005a449) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005df22) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005df22) list_double_large_graphic_pane_g

0xbb5f,	// (0x0005a45b) list_double_large_graphic_pane_t1_ParamLimits

0xbb5f,	// (0x0005a45b) list_double_large_graphic_pane_t1

0xbb78,	// (0x0005a474) list_double_large_graphic_pane_t2_ParamLimits

0xbb78,	// (0x0005a474) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005df2d) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005df2d) list_double_large_graphic_pane_t

0xbb8a,	// (0x0005a486) list_double2_large_graphic_pane_g1_ParamLimits

0xbb8a,	// (0x0005a486) list_double2_large_graphic_pane_g1

0xbb96,	// (0x0005a492) list_double2_large_graphic_pane_g2_ParamLimits

0xbb96,	// (0x0005a492) list_double2_large_graphic_pane_g2

0xd375,	// (0x0005bc71) list_double2_large_graphic_pane_g3_ParamLimits

0xd375,	// (0x0005bc71) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005df32) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005df32) list_double2_large_graphic_pane_g

0xbba7,	// (0x0005a4a3) list_double2_large_graphic_pane_t1_ParamLimits

0xbba7,	// (0x0005a4a3) list_double2_large_graphic_pane_t1

0xbbbd,	// (0x0005a4b9) list_double2_large_graphic_pane_t2_ParamLimits

0xbbbd,	// (0x0005a4b9) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005df39) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005df39) list_double2_large_graphic_pane_t

0xbbcf,	// (0x0005a4cb) list_double_heading_pane_g1_ParamLimits

0xbbcf,	// (0x0005a4cb) list_double_heading_pane_g1

0xbbe0,	// (0x0005a4dc) list_double_heading_pane_g2_ParamLimits

0xbbe0,	// (0x0005a4dc) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005df3e) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005df3e) list_double_heading_pane_g

0xbbec,	// (0x0005a4e8) list_double_heading_pane_t1_ParamLimits

0xbbec,	// (0x0005a4e8) list_double_heading_pane_t1

0xba3d,	// (0x0005a339) list_double_heading_pane_t2_ParamLimits

0xba3d,	// (0x0005a339) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005df43) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005df43) list_double_heading_pane_t

0xbc02,	// (0x0005a4fe) list_double_graphic_heading_pane_g1_ParamLimits

0xbc02,	// (0x0005a4fe) list_double_graphic_heading_pane_g1

0xbbcf,	// (0x0005a4cb) list_double_graphic_heading_pane_g2_ParamLimits

0xbbcf,	// (0x0005a4cb) list_double_graphic_heading_pane_g2

0xbbe0,	// (0x0005a4dc) list_double_graphic_heading_pane_g3_ParamLimits

0xbbe0,	// (0x0005a4dc) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005df48) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005df48) list_double_graphic_heading_pane_g

0xbc0e,	// (0x0005a50a) list_double_graphic_heading_pane_t1_ParamLimits

0xbc0e,	// (0x0005a50a) list_double_graphic_heading_pane_t1

0xbb06,	// (0x0005a402) list_double_graphic_heading_pane_t2_ParamLimits

0xbb06,	// (0x0005a402) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005df4f) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005df4f) list_double_graphic_heading_pane_t

0xbc24,	// (0x0005a520) list_double_time_pane_g1_ParamLimits

0xbc24,	// (0x0005a520) list_double_time_pane_g1

0xbc35,	// (0x0005a531) list_double_time_pane_g2_ParamLimits

0xbc35,	// (0x0005a531) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005df54) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005df54) list_double_time_pane_g

0xbc41,	// (0x0005a53d) list_double_time_pane_t1_ParamLimits

0xbc41,	// (0x0005a53d) list_double_time_pane_t1

0xbc57,	// (0x0005a553) list_double_time_pane_t2_ParamLimits

0xbc57,	// (0x0005a553) list_double_time_pane_t2

0xbc69,	// (0x0005a565) list_double_time_pane_t3_ParamLimits

0xbc69,	// (0x0005a565) list_double_time_pane_t3

0xbc7b,	// (0x0005a577) list_double_time_pane_t4_ParamLimits

0xbc7b,	// (0x0005a577) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005df59) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005df59) list_double_time_pane_t

0xbc8d,	// (0x0005a589) list_setting_pane_g1_ParamLimits

0xbc8d,	// (0x0005a589) list_setting_pane_g1

0xba1b,	// (0x0005a317) list_setting_pane_g2_ParamLimits

0xba1b,	// (0x0005a317) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005df62) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005df62) list_setting_pane_g

0xbc99,	// (0x0005a595) list_setting_pane_t1_ParamLimits

0xbc99,	// (0x0005a595) list_setting_pane_t1

0xbcb3,	// (0x0005a5af) list_setting_pane_t2_ParamLimits

0xbcb3,	// (0x0005a5af) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005df67) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005df67) list_setting_pane_t

0xbcf2,	// (0x0005a5ee) set_value_pane_cp_ParamLimits

0xbcf2,	// (0x0005a5ee) set_value_pane_cp

0xbcfe,	// (0x0005a5fa) list_setting_number_pane_g1_ParamLimits

0xbcfe,	// (0x0005a5fa) list_setting_number_pane_g1

0xbd0a,	// (0x0005a606) list_setting_number_pane_g2_ParamLimits

0xbd0a,	// (0x0005a606) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005df6e) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005df6e) list_setting_number_pane_g

0xbd16,	// (0x0005a612) list_setting_number_pane_t1_ParamLimits

0xbd16,	// (0x0005a612) list_setting_number_pane_t1

0xbd2f,	// (0x0005a62b) list_setting_number_pane_t2_ParamLimits

0xbd2f,	// (0x0005a62b) list_setting_number_pane_t2

0xbd49,	// (0x0005a645) list_setting_number_pane_t3_ParamLimits

0xbd49,	// (0x0005a645) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005df73) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005df73) list_setting_number_pane_t

0xbcf2,	// (0x0005a5ee) set_value_pane_ParamLimits

0xbcf2,	// (0x0005a5ee) set_value_pane

0x401e,	// (0x0005291a) bg_set_opt_pane_ParamLimits

0x401e,	// (0x0005291a) bg_set_opt_pane

0x0975,	// (0x0004f271) set_value_pane_t1

0x403f,	// (0x0005293b) slider_set_pane_cp3

0x4048,	// (0x00052944) volume_small_pane_cp

0x4051,	// (0x0005294d) list_form_gen_pane

0x405a,	// (0x00052956) scroll_pane_cp8

0xbd8c,	// (0x0005a688) form_field_data_pane_ParamLimits

0xbd8c,	// (0x0005a688) form_field_data_pane

0xbda3,	// (0x0005a69f) form_field_data_wide_pane_ParamLimits

0xbda3,	// (0x0005a69f) form_field_data_wide_pane

0xbdc3,	// (0x0005a6bf) form_field_popup_pane_ParamLimits

0xbdc3,	// (0x0005a6bf) form_field_popup_pane

0xbddb,	// (0x0005a6d7) form_field_popup_wide_pane_ParamLimits

0xbddb,	// (0x0005a6d7) form_field_popup_wide_pane

0x0a11,	// (0x0004f30d) form_field_slider_pane_ParamLimits

0x0a11,	// (0x0004f30d) form_field_slider_pane

0x0a24,	// (0x0004f320) form_field_slider_wide_pane_ParamLimits

0x0a24,	// (0x0004f320) form_field_slider_wide_pane

0x406b,	// (0x00052967) data_form_pane

0xbdfc,	// (0x0005a6f8) form_field_data_pane_t1

0x4077,	// (0x00052973) input_focus_pane

0x0a59,	// (0x0004f355) data_form_wide_pane

0x0a76,	// (0x0004f372) form_field_data_wide_pane_t1

0x3ddc,	// (0x000526d8) input_focus_pane_cp6

0xbe16,	// (0x0005a712) form_field_popup_pane_t1

0x4077,	// (0x00052973) input_focus_pane_cp7

0x4099,	// (0x00052995) list_form_pane

0x0ab8,	// (0x0004f3b4) form_field_popup_wide_pane_t1

0x4077,	// (0x00052973) input_focus_pane_cp8

0x40a5,	// (0x000529a1) list_form_wide_pane

0xbe38,	// (0x0005a734) form_field_slider_pane_t1_ParamLimits

0xbe38,	// (0x0005a734) form_field_slider_pane_t1

0xbe50,	// (0x0005a74c) form_field_slider_pane_t2_ParamLimits

0xbe50,	// (0x0005a74c) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005df83) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005df83) form_field_slider_pane_t

0x3a77,	// (0x00052373) input_focus_pane_cp9_ParamLimits

0x3a77,	// (0x00052373) input_focus_pane_cp9

0xbe65,	// (0x0005a761) slider_cont_pane_ParamLimits

0xbe65,	// (0x0005a761) slider_cont_pane

0x40b1,	// (0x000529ad) form_field_slider_wide_pane_t1_ParamLimits

0x40b1,	// (0x000529ad) form_field_slider_wide_pane_t1

0x0b14,	// (0x0004f410) form_field_slider_wide_pane_t2_ParamLimits

0x0b14,	// (0x0004f410) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005df88) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005df88) form_field_slider_wide_pane_t

0x3a77,	// (0x00052373) input_focus_pane_cp10_ParamLimits

0x3a77,	// (0x00052373) input_focus_pane_cp10

0xbe79,	// (0x0005a775) slider_cont_pane_cp1_ParamLimits

0xbe79,	// (0x0005a775) slider_cont_pane_cp1

0xbe8d,	// (0x0005a789) slider_form_pane_cp

0x40c3,	// (0x000529bf) input_focus_pane_g1

0x40cb,	// (0x000529c7) input_focus_pane_g2

0x40d3,	// (0x000529cf) input_focus_pane_g3

0x40db,	// (0x000529d7) input_focus_pane_g4

0x40e3,	// (0x000529df) input_focus_pane_g5

0x40eb,	// (0x000529e7) input_focus_pane_g6

0x40f3,	// (0x000529ef) input_focus_pane_g7

0x40fb,	// (0x000529f7) input_focus_pane_g8

0x4103,	// (0x000529ff) input_focus_pane_g9

0x3712,	// (0x0005200e) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005df8d) input_focus_pane_g

0x5b69,	// (0x00054465) wait_border_pane_g3_copy1

0xbe95,	// (0x0005a791) data_form_pane_t1

0x3712,	// (0x0005200e) wait_anim_pane_g1_copy1

0xc873,	// (0x0005b16f) data_form_wide_pane_t1

0xbeae,	// (0x0005a7aa) list_form_graphic_pane_cp_ParamLimits

0xbeae,	// (0x0005a7aa) list_form_graphic_pane_cp

0x6a89,	// (0x00055385) slider_form_pane_g1

0x6a92,	// (0x0005538e) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005e28b) slider_form_pane_g

0xbebf,	// (0x0005a7bb) list_form_graphic_pane_ParamLimits

0xbebf,	// (0x0005a7bb) list_form_graphic_pane

0x0b92,	// (0x0004f48e) list_form_graphic_pane_g1

0x0b9a,	// (0x0004f496) list_form_graphic_pane_t1_ParamLimits

0x0b9a,	// (0x0004f496) list_form_graphic_pane_t1

0x37fc,	// (0x000520f8) list_highlight_pane_cp5_ParamLimits

0x37fc,	// (0x000520f8) list_highlight_pane_cp5

0xbed1,	// (0x0005a7cd) find_pane_g1

0x410b,	// (0x00052a07) input_find_pane

0xbeda,	// (0x0005a7d6) input_find_pane_g1_ParamLimits

0xbeda,	// (0x0005a7d6) input_find_pane_g1

0xbee6,	// (0x0005a7e2) input_find_pane_t1_ParamLimits

0xbee6,	// (0x0005a7e2) input_find_pane_t1

0xbefb,	// (0x0005a7f7) input_find_pane_t2_ParamLimits

0xbefb,	// (0x0005a7f7) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005dfa2) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005dfa2) input_find_pane_t

0x4114,	// (0x00052a10) input_focus_pane_cp5_ParamLimits

0x4114,	// (0x00052a10) input_focus_pane_cp5

0x412e,	// (0x00052a2a) bg_popup_window_pane_cp2_ParamLimits

0x412e,	// (0x00052a2a) bg_popup_window_pane_cp2

0x413b,	// (0x00052a37) listscroll_menu_pane_ParamLimits

0x413b,	// (0x00052a37) listscroll_menu_pane

0xd38d,	// (0x0005bc89) popup_submenu_window_ParamLimits

0xd38d,	// (0x0005bc89) popup_submenu_window

0x4173,	// (0x00052a6f) find_popup_pane_g1

0x417b,	// (0x00052a77) input_popup_find_pane_cp

0x4114,	// (0x00052a10) input_focus_pane_cp4_ParamLimits

0x4114,	// (0x00052a10) input_focus_pane_cp4

0x4191,	// (0x00052a8d) input_popup_find_pane_t1_ParamLimits

0x4191,	// (0x00052a8d) input_popup_find_pane_t1

0x371c,	// (0x00052018) bg_popup_sub_pane_cp

0x41bf,	// (0x00052abb) listscroll_popup_sub_pane

0x41c7,	// (0x00052ac3) list_submenu_pane_ParamLimits

0x41c7,	// (0x00052ac3) list_submenu_pane

0x41d8,	// (0x00052ad4) scroll_pane_cp4

0x41e0,	// (0x00052adc) list_single_popup_submenu_pane_ParamLimits

0x41e0,	// (0x00052adc) list_single_popup_submenu_pane

0x41f4,	// (0x00052af0) list_single_popup_submenu_pane_g1

0x41fc,	// (0x00052af8) list_single_popup_submenu_pane_t1_ParamLimits

0x41fc,	// (0x00052af8) list_single_popup_submenu_pane_t1

0x3a77,	// (0x00052373) bg_active_tab_pane_cp1_ParamLimits

0x3a77,	// (0x00052373) bg_active_tab_pane_cp1

0x4211,	// (0x00052b0d) tabs_2_active_pane_g1

0xd3c7,	// (0x0005bcc3) tabs_2_active_pane_t1

0x3a77,	// (0x00052373) bg_passive_tab_pane_cp1_ParamLimits

0x3a77,	// (0x00052373) bg_passive_tab_pane_cp1

0x4211,	// (0x00052b0d) tabs_2_passive_pane_g1

0xd3c7,	// (0x0005bcc3) tabs_2_passive_pane_t1

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp4

0xd3d9,	// (0x0005bcd5) tabs_2_long_active_pane_t1

0x5048,	// (0x00053944) bg_passive_tab_pane_cp4

0x189f,	// (0x0005019b) list_single_midp_graphic_pane_g4_ParamLimits

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp5

0xd3ec,	// (0x0005bce8) tabs_3_long_active_pane_t1

0x5048,	// (0x00053944) bg_passive_tab_pane_cp5

0x189f,	// (0x0005019b) list_single_midp_graphic_pane_g4

0x37fc,	// (0x000520f8) bg_popup_window_pane_cp13_ParamLimits

0x37fc,	// (0x000520f8) bg_popup_window_pane_cp13

0x4273,	// (0x00052b6f) listscroll_popup_fast_pane_ParamLimits

0x4273,	// (0x00052b6f) listscroll_popup_fast_pane

0x4282,	// (0x00052b7e) grid_popup_fast_pane_ParamLimits

0x4282,	// (0x00052b7e) grid_popup_fast_pane

0x4294,	// (0x00052b90) scroll_pane_cp9_ParamLimits

0x4294,	// (0x00052b90) scroll_pane_cp9

0x8323,	// (0x00056c1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8323,	// (0x00056c1f) list_single_graphic_hl_pane_t1_cp2

0x42b8,	// (0x00052bb4) input_focus_pane_cp20_ParamLimits

0x42b8,	// (0x00052bb4) input_focus_pane_cp20

0x42c6,	// (0x00052bc2) query_popup_data_pane_t1_ParamLimits

0x42c6,	// (0x00052bc2) query_popup_data_pane_t1

0x42d9,	// (0x00052bd5) query_popup_data_pane_t2_ParamLimits

0x42d9,	// (0x00052bd5) query_popup_data_pane_t2

0x431f,	// (0x00052c1b) query_popup_data_pane_t3_ParamLimits

0x431f,	// (0x00052c1b) query_popup_data_pane_t3

0x4360,	// (0x00052c5c) query_popup_data_pane_t4_ParamLimits

0x4360,	// (0x00052c5c) query_popup_data_pane_t4

0x439c,	// (0x00052c98) query_popup_data_pane_t5_ParamLimits

0x439c,	// (0x00052c98) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005dfa7) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005dfa7) query_popup_data_pane_t

0x40c3,	// (0x000529bf) bg_set_opt_pane_g1

0x40cb,	// (0x000529c7) bg_set_opt_pane_g2

0x40d3,	// (0x000529cf) bg_set_opt_pane_g3

0x40db,	// (0x000529d7) bg_set_opt_pane_g4

0x40e3,	// (0x000529df) bg_set_opt_pane_g5

0x40eb,	// (0x000529e7) bg_set_opt_pane_g6

0x40f3,	// (0x000529ef) bg_set_opt_pane_g7

0x40fb,	// (0x000529f7) bg_set_opt_pane_g8

0x4103,	// (0x000529ff) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005dfb2) bg_set_opt_pane_g

0x0ef9,	// (0x0004f7f5) control_top_pane_stacon_ParamLimits

0x0ef9,	// (0x0004f7f5) control_top_pane_stacon

0x0f4c,	// (0x0004f848) signal_pane_stacon_ParamLimits

0x0f4c,	// (0x0004f848) signal_pane_stacon

0x498c,	// (0x00053288) stacon_top_pane_g1_ParamLimits

0x498c,	// (0x00053288) stacon_top_pane_g1

0x0f71,	// (0x0004f86d) title_pane_stacon_ParamLimits

0x0f71,	// (0x0004f86d) title_pane_stacon

0x0f9b,	// (0x0004f897) uni_indicator_pane_stacon_ParamLimits

0x0f9b,	// (0x0004f897) uni_indicator_pane_stacon

0x0fb0,	// (0x0004f8ac) battery_pane_stacon_ParamLimits

0x0fb0,	// (0x0004f8ac) battery_pane_stacon

0x0ff4,	// (0x0004f8f0) control_bottom_pane_stacon_ParamLimits

0x0ff4,	// (0x0004f8f0) control_bottom_pane_stacon

0x1017,	// (0x0004f913) navi_pane_stacon_ParamLimits

0x1017,	// (0x0004f913) navi_pane_stacon

0x49ae,	// (0x000532aa) stacon_bottom_pane_g1_ParamLimits

0x49ae,	// (0x000532aa) stacon_bottom_pane_g1

0x0bee,	// (0x0004f4ea) aid_levels_signal_lsc_ParamLimits

0x0bee,	// (0x0004f4ea) aid_levels_signal_lsc

0x0c04,	// (0x0004f500) signal_pane_stacon_g1_ParamLimits

0x0c04,	// (0x0004f500) signal_pane_stacon_g1

0x0c18,	// (0x0004f514) signal_pane_stacon_g2_ParamLimits

0x0c18,	// (0x0004f514) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005dfc5) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005dfc5) signal_pane_stacon_g

0x0c4d,	// (0x0004f549) title_pane_stacon_t1_ParamLimits

0x0c4d,	// (0x0004f549) title_pane_stacon_t1

0x43e0,	// (0x00052cdc) uni_indicator_pane_stacon_g1

0x43ea,	// (0x00052ce6) uni_indicator_pane_stacon_g2

0x43f4,	// (0x00052cf0) uni_indicator_pane_stacon_g3

0x43fe,	// (0x00052cfa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005dfd1) uni_indicator_pane_stacon_g

0x0c72,	// (0x0004f56e) control_top_pane_stacon_g1

0x0c7a,	// (0x0004f576) control_top_pane_stacon_t1_ParamLimits

0x0c7a,	// (0x0004f576) control_top_pane_stacon_t1

0x0cb1,	// (0x0004f5ad) aid_levels_battery_lsc_ParamLimits

0x0cb1,	// (0x0004f5ad) aid_levels_battery_lsc

0x0cc8,	// (0x0004f5c4) battery_pane_stacon_g1_ParamLimits

0x0cc8,	// (0x0004f5c4) battery_pane_stacon_g1

0x0cdb,	// (0x0004f5d7) battery_pane_stacon_g2_ParamLimits

0x0cdb,	// (0x0004f5d7) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005dfda) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005dfda) battery_pane_stacon_g

0x0d19,	// (0x0004f615) navi_icon_pane_stacon

0x0d2d,	// (0x0004f629) navi_navi_pane_stacon

0x0d19,	// (0x0004f615) navi_text_pane_stacon

0x0c72,	// (0x0004f56e) control_bottom_pane_stacon_g1

0x0d41,	// (0x0004f63d) control_bottom_pane_stacon_t1_ParamLimits

0x0d41,	// (0x0004f63d) control_bottom_pane_stacon_t1

0xd3fe,	// (0x0005bcfa) grid_app_pane_ParamLimits

0xd3fe,	// (0x0005bcfa) grid_app_pane

0xd436,	// (0x0005bd32) scroll_pane_cp15_ParamLimits

0xd436,	// (0x0005bd32) scroll_pane_cp15

0xd44b,	// (0x0005bd47) cell_app_pane_ParamLimits

0xd44b,	// (0x0005bd47) cell_app_pane

0xd490,	// (0x0005bd8c) cell_app_pane_g1_ParamLimits

0xd490,	// (0x0005bd8c) cell_app_pane_g1

0x44a1,	// (0x00052d9d) cell_app_pane_g2_ParamLimits

0x44a1,	// (0x00052d9d) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005dfdf) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005dfdf) cell_app_pane_g

0xd4b4,	// (0x0005bdb0) cell_app_pane_t1_ParamLimits

0xd4b4,	// (0x0005bdb0) cell_app_pane_t1

0x44c4,	// (0x00052dc0) grid_highlight_pane_ParamLimits

0x44c4,	// (0x00052dc0) grid_highlight_pane

0x40c3,	// (0x000529bf) cell_highlight_pane_g1

0x40cb,	// (0x000529c7) cell_highlight_pane_g2

0x40d3,	// (0x000529cf) cell_highlight_pane_g3

0x40db,	// (0x000529d7) cell_highlight_pane_g4

0x40e3,	// (0x000529df) cell_highlight_pane_g5

0x40eb,	// (0x000529e7) cell_highlight_pane_g6

0x40f3,	// (0x000529ef) cell_highlight_pane_g7

0x40fb,	// (0x000529f7) cell_highlight_pane_g8

0x4103,	// (0x000529ff) cell_highlight_pane_g9

0x3712,	// (0x0005200e) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005df8d) cell_highlight_pane_g

0x44d5,	// (0x00052dd1) bg_scroll_pane

0x0d8b,	// (0x0004f687) scroll_handle_pane

0x451c,	// (0x00052e18) scroll_bg_pane_g1

0x4531,	// (0x00052e2d) scroll_bg_pane_g2

0x4549,	// (0x00052e45) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005dfe4) scroll_bg_pane_g

0x455e,	// (0x00052e5a) scroll_handle_focus_pane_ParamLimits

0x455e,	// (0x00052e5a) scroll_handle_focus_pane

0x451c,	// (0x00052e18) scroll_handle_pane_g1

0x456b,	// (0x00052e67) scroll_handle_pane_g2

0x4549,	// (0x00052e45) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005dfeb) scroll_handle_pane_g

0x4114,	// (0x00052a10) bg_popup_sub_pane_cp21_ParamLimits

0x4114,	// (0x00052a10) bg_popup_sub_pane_cp21

0x457f,	// (0x00052e7b) popup_fep_japan_predictive_window_t1_ParamLimits

0x457f,	// (0x00052e7b) popup_fep_japan_predictive_window_t1

0x4599,	// (0x00052e95) popup_fep_japan_predictive_window_t2_ParamLimits

0x4599,	// (0x00052e95) popup_fep_japan_predictive_window_t2

0x45cc,	// (0x00052ec8) popup_fep_japan_predictive_window_t3_ParamLimits

0x45cc,	// (0x00052ec8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005dff2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005dff2) popup_fep_japan_predictive_window_t

0x371c,	// (0x00052018) bg_popup_sub_pane_cp23

0x4603,	// (0x00052eff) listscroll_japin_cand_pane

0x460b,	// (0x00052f07) popup_fep_japan_candidate_window_t1

0x4619,	// (0x00052f15) candidate_pane_ParamLimits

0x4619,	// (0x00052f15) candidate_pane

0x462b,	// (0x00052f27) scroll_pane_cp30

0x4633,	// (0x00052f2f) list_single_popup_jap_candidate_pane_ParamLimits

0x4633,	// (0x00052f2f) list_single_popup_jap_candidate_pane

0x371c,	// (0x00052018) list_highlight_pane_cp30

0x4648,	// (0x00052f44) list_single_popup_jap_candidate_pane_t1

0x4657,	// (0x00052f53) level_1_signal

0x4669,	// (0x00052f65) level_2_signal

0x467c,	// (0x00052f78) level_3_signal

0x468f,	// (0x00052f8b) level_4_signal

0x46a2,	// (0x00052f9e) level_5_signal

0x46b5,	// (0x00052fb1) level_6_signal

0x46c8,	// (0x00052fc4) level_7_signal

0x4657,	// (0x00052f53) level_1_battery

0x4669,	// (0x00052f65) level_2_battery

0x467c,	// (0x00052f78) level_3_battery

0x468f,	// (0x00052f8b) level_4_battery

0x46a2,	// (0x00052f9e) level_5_battery

0x46b5,	// (0x00052fb1) level_6_battery

0x46c8,	// (0x00052fc4) level_7_battery

0x46f3,	// (0x00052fef) list_menu_pane_ParamLimits

0x46f3,	// (0x00052fef) list_menu_pane

0x4709,	// (0x00053005) scroll_pane_cp25_ParamLimits

0x4709,	// (0x00053005) scroll_pane_cp25

0x4722,	// (0x0005301e) list_double2_graphic_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double2_graphic_pane_cp2

0x4722,	// (0x0005301e) list_double2_large_graphic_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double2_large_graphic_pane_cp2

0x4722,	// (0x0005301e) list_double2_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double2_pane_cp2

0x4722,	// (0x0005301e) list_double_graphic_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double_graphic_pane_cp2

0x4722,	// (0x0005301e) list_double_large_graphic_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double_large_graphic_pane_cp2

0x4722,	// (0x0005301e) list_double_number_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double_number_pane_cp2

0x4722,	// (0x0005301e) list_double_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_2graphic_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_2graphic_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_graphic_heading_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_graphic_heading_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_graphic_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_graphic_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_heading_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_heading_pane_cp2

0x475f,	// (0x0005305b) list_single_large_graphic_pane_cp2_ParamLimits

0x475f,	// (0x0005305b) list_single_large_graphic_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_number_heading_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_number_heading_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_number_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_number_pane_cp2

0xd4cb,	// (0x0005bdc7) list_single_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_pane_cp2

0x47db,	// (0x000530d7) bg_popup_sub_pane_cp22

0x0e3d,	// (0x0004f739) popup_side_volume_key_window_g1

0x0e67,	// (0x0004f763) popup_side_volume_key_window_t1

0x0e83,	// (0x0004f77f) volume_small_pane_cp1

0x3a77,	// (0x00052373) bg_popup_sub_pane_cp24_ParamLimits

0x3a77,	// (0x00052373) bg_popup_sub_pane_cp24

0x47f1,	// (0x000530ed) fep_china_uni_candidate_pane_ParamLimits

0x47f1,	// (0x000530ed) fep_china_uni_candidate_pane

0x4805,	// (0x00053101) fep_china_uni_entry_pane

0x4815,	// (0x00053111) popup_fep_china_uni_window_g1

0x4831,	// (0x0005312d) fep_china_uni_entry_pane_g1

0x4839,	// (0x00053135) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005e023) fep_china_uni_entry_pane_g

0x4841,	// (0x0005313d) fep_entry_item_pane

0x484b,	// (0x00053147) fep_candidate_item_pane

0x4853,	// (0x0005314f) fep_china_uni_candidate_pane_g1

0x485b,	// (0x00053157) fep_china_uni_candidate_pane_g2

0x4863,	// (0x0005315f) fep_china_uni_candidate_pane_g3

0x486b,	// (0x00053167) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005e028) fep_china_uni_candidate_pane_g

0x3712,	// (0x0005200e) fep_entry_item_pane_g1

0x4873,	// (0x0005316f) fep_entry_item_pane_t1_ParamLimits

0x4873,	// (0x0005316f) fep_entry_item_pane_t1

0x4889,	// (0x00053185) fep_candidate_item_pane_t1_ParamLimits

0x4889,	// (0x00053185) fep_candidate_item_pane_t1

0x489e,	// (0x0005319a) fep_candidate_item_pane_t2_ParamLimits

0x489e,	// (0x0005319a) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005e031) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005e031) fep_candidate_item_pane_t

0x37fc,	// (0x000520f8) list_highlight_pane_cp31_ParamLimits

0x37fc,	// (0x000520f8) list_highlight_pane_cp31

0x48b0,	// (0x000531ac) level_1_signal_lsc

0x48b9,	// (0x000531b5) level_2_signal_lsc

0x48c2,	// (0x000531be) level_3_signal_lsc

0x48cb,	// (0x000531c7) level_4_signal_lsc

0x48d4,	// (0x000531d0) level_5_signal_lsc

0x48dd,	// (0x000531d9) level_6_signal_lsc

0x48e6,	// (0x000531e2) level_7_signal_lsc

0x48e6,	// (0x000531e2) level_1_battery_lsc

0x48ef,	// (0x000531eb) level_2_battery_lsc

0x48f8,	// (0x000531f4) level_3_battery_lsc

0x4901,	// (0x000531fd) level_4_battery_lsc

0x490a,	// (0x00053206) level_5_battery_lsc

0x4913,	// (0x0005320f) level_6_battery_lsc

0x48b0,	// (0x000531ac) level_7_battery_lsc

0x491c,	// (0x00053218) scroll_handle_focus_pane_g1

0x4925,	// (0x00053221) scroll_handle_focus_pane_g2

0x492e,	// (0x0005322a) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005e036) scroll_handle_focus_pane_g

0xbf19,	// (0x0005a815) list_single_2graphic_pane_g1_ParamLimits

0xbf19,	// (0x0005a815) list_single_2graphic_pane_g1

0xd34c,	// (0x0005bc48) list_single_2graphic_pane_g2_ParamLimits

0xd34c,	// (0x0005bc48) list_single_2graphic_pane_g2

0x2d91,	// (0x0005168d) list_single_2graphic_pane_g3_ParamLimits

0x2d91,	// (0x0005168d) list_single_2graphic_pane_g3

0xbf25,	// (0x0005a821) list_single_2graphic_pane_g4_ParamLimits

0xbf25,	// (0x0005a821) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005e03d) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005e03d) list_single_2graphic_pane_g

0xbf31,	// (0x0005a82d) list_single_2graphic_pane_t1_ParamLimits

0xbf31,	// (0x0005a82d) list_single_2graphic_pane_t1

0xd558,	// (0x0005be54) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd558,	// (0x0005be54) list_double2_graphic_large_graphic_pane_g1

0xbb96,	// (0x0005a492) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb96,	// (0x0005a492) list_double2_graphic_large_graphic_pane_g2

0xd375,	// (0x0005bc71) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd375,	// (0x0005bc71) list_double2_graphic_large_graphic_pane_g3

0xbf5f,	// (0x0005a85b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf5f,	// (0x0005a85b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005e046) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005e046) list_double2_graphic_large_graphic_pane_g

0xbf6b,	// (0x0005a867) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf6b,	// (0x0005a867) list_double2_graphic_large_graphic_pane_t1

0xbf81,	// (0x0005a87d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf81,	// (0x0005a87d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005e04f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005e04f) list_double2_graphic_large_graphic_pane_t

0x4a76,	// (0x00053372) popup_fast_swap_window_ParamLimits

0x4a76,	// (0x00053372) popup_fast_swap_window

0x4a92,	// (0x0005338e) popup_side_volume_key_window

0x4aae,	// (0x000533aa) stacon_top_pane

0x4ab8,	// (0x000533b4) status_pane_ParamLimits

0x4ab8,	// (0x000533b4) status_pane

0xd56a,	// (0x0005be66) status_small_pane

0x371c,	// (0x00052018) control_pane

0x371c,	// (0x00052018) stacon_bottom_pane

0x405a,	// (0x00052956) scroll_pane_cp121

0x4051,	// (0x0005294d) set_content_pane

0x4937,	// (0x00053233) bg_active_tab_pane_g1_cp1

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp1

0x4949,	// (0x00053245) bg_active_tab_pane_g3_cp1

0x4937,	// (0x00053233) bg_passive_tab_pane_g1_cp1

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp1

0x4949,	// (0x00053245) bg_passive_tab_pane_g3_cp1

0x4952,	// (0x0005324e) bg_active_tab_pane_g1_cp2

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp2

0x495b,	// (0x00053257) bg_active_tab_pane_g3_cp2

0x4952,	// (0x0005324e) bg_passive_tab_pane_g1_cp2

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp2

0x495b,	// (0x00053257) bg_passive_tab_pane_g3_cp2

0x4964,	// (0x00053260) bg_active_tab_pane_g1_cp3

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp3

0x496d,	// (0x00053269) bg_active_tab_pane_g3_cp3

0x4964,	// (0x00053260) bg_passive_tab_pane_g1_cp3

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp3

0x496d,	// (0x00053269) bg_passive_tab_pane_g3_cp3

0x4976,	// (0x00053272) bg_active_tab_pane_g1_cp4

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp4

0x4981,	// (0x0005327d) bg_active_tab_pane_g3_cp4

0x4976,	// (0x00053272) bg_passive_tab_pane_g1_cp4

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp4

0x4981,	// (0x0005327d) bg_passive_tab_pane_g3_cp4

0x49ca,	// (0x000532c6) bg_active_tab_pane_g1_cp5

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp5

0x49d3,	// (0x000532cf) bg_active_tab_pane_g3_cp5

0x49ca,	// (0x000532c6) bg_passive_tab_pane_g1_cp5

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp5

0x49d3,	// (0x000532cf) bg_passive_tab_pane_g3_cp5

0x7031,	// (0x0005592d) list_set_graphic_pane_ParamLimits

0x7031,	// (0x0005592d) list_set_graphic_pane

0x371c,	// (0x00052018) bg_set_opt_pane_cp4

0x49f9,	// (0x000532f5) list_set_graphic_pane_g1_ParamLimits

0x49f9,	// (0x000532f5) list_set_graphic_pane_g1

0x4a05,	// (0x00053301) list_set_graphic_pane_g2_ParamLimits

0x4a05,	// (0x00053301) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005e054) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005e054) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005e3bd) volume_small_pane_cp_g

0x4a29,	// (0x00053325) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a29,	// (0x00053325) list_double2_large_graphic_pane_g1_cp2

0x4a35,	// (0x00053331) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a35,	// (0x00053331) list_double2_large_graphic_pane_g2_cp2

0x4a46,	// (0x00053342) list_double2_large_graphic_pane_g3_cp2

0x4a4e,	// (0x0005334a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a4e,	// (0x0005334a) list_double2_large_graphic_pane_t1_cp2

0x4a64,	// (0x00053360) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a64,	// (0x00053360) list_double2_large_graphic_pane_t2_cp2

0x663c,	// (0x00054f38) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x663c,	// (0x00054f38) list_double_large_graphic_pane_g1_cp2

0x664d,	// (0x00054f49) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x664d,	// (0x00054f49) list_double_large_graphic_pane_g2_cp2

0x4bdf,	// (0x000534db) list_double_large_graphic_pane_g3_cp2

0x665e,	// (0x00054f5a) list_double_large_graphic_pane_g4_cp

0x6666,	// (0x00054f62) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6666,	// (0x00054f62) list_double_large_graphic_pane_t1_cp2

0x667d,	// (0x00054f79) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x667d,	// (0x00054f79) list_double_large_graphic_pane_t2_cp2

0x4ad1,	// (0x000533cd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ad1,	// (0x000533cd) list_double2_graphic_pane_g1_cp2

0x4adf,	// (0x000533db) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4adf,	// (0x000533db) list_double2_graphic_pane_g2_cp2

0x4af0,	// (0x000533ec) list_double2_graphic_pane_g3_cp2

0x4afa,	// (0x000533f6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4afa,	// (0x000533f6) list_double2_graphic_pane_t1_cp2

0x4b10,	// (0x0005340c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b10,	// (0x0005340c) list_double2_graphic_pane_t2_cp2

0x4b22,	// (0x0005341e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b22,	// (0x0005341e) list_single_number_heading_pane_g1_cp2

0x4b2e,	// (0x0005342a) list_single_number_heading_pane_g2_cp2

0x4b36,	// (0x00053432) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b36,	// (0x00053432) list_single_number_heading_pane_t1_cp2

0x4b4c,	// (0x00053448) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b4c,	// (0x00053448) list_single_number_heading_pane_t2_cp2

0x4b5e,	// (0x0005345a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b5e,	// (0x0005345a) list_single_number_heading_pane_t3_cp2

0x4b22,	// (0x0005341e) list_single_heading_pane_g1_cp2_ParamLimits

0x4b22,	// (0x0005341e) list_single_heading_pane_g1_cp2

0x4b2e,	// (0x0005342a) list_single_heading_pane_g2_cp2

0x4b36,	// (0x00053432) list_single_heading_pane_t1_cp2_ParamLimits

0x4b36,	// (0x00053432) list_single_heading_pane_t1_cp2

0x6444,	// (0x00054d40) list_single_heading_pane_t2_cp2_ParamLimits

0x6444,	// (0x00054d40) list_single_heading_pane_t2_cp2

0x638c,	// (0x00054c88) list_double_graphic_pane_g1_cp2_ParamLimits

0x638c,	// (0x00054c88) list_double_graphic_pane_g1_cp2

0x6398,	// (0x00054c94) list_double_graphic_pane_g2_cp2_ParamLimits

0x6398,	// (0x00054c94) list_double_graphic_pane_g2_cp2

0x63a7,	// (0x00054ca3) list_double_graphic_pane_g3_cp2

0x63af,	// (0x00054cab) list_double_graphic_pane_t1_cp2_ParamLimits

0x63af,	// (0x00054cab) list_double_graphic_pane_t1_cp2

0x63c5,	// (0x00054cc1) list_double_graphic_pane_t2_cp2_ParamLimits

0x63c5,	// (0x00054cc1) list_double_graphic_pane_t2_cp2

0x4bd3,	// (0x000534cf) list_double_number_pane_g1_cp2_ParamLimits

0x4bd3,	// (0x000534cf) list_double_number_pane_g1_cp2

0x4bdf,	// (0x000534db) list_double_number_pane_g2_cp2

0x6350,	// (0x00054c4c) list_double_number_pane_t1_cp2_ParamLimits

0x6350,	// (0x00054c4c) list_double_number_pane_t1_cp2

0x6364,	// (0x00054c60) list_double_number_pane_t2_cp2_ParamLimits

0x6364,	// (0x00054c60) list_double_number_pane_t2_cp2

0x637a,	// (0x00054c76) list_double_number_pane_t3_cp2_ParamLimits

0x637a,	// (0x00054c76) list_double_number_pane_t3_cp2

0x6239,	// (0x00054b35) list_single_graphic_pane_g1_cp2_ParamLimits

0x6239,	// (0x00054b35) list_single_graphic_pane_g1_cp2

0x4c37,	// (0x00053533) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c37,	// (0x00053533) list_single_graphic_pane_g2_cp2

0x4c43,	// (0x0005353f) list_single_graphic_pane_g3_cp2

0x620f,	// (0x00054b0b) list_single_graphic_pane_t1_cp2_ParamLimits

0x620f,	// (0x00054b0b) list_single_graphic_pane_t1_cp2

0x4c37,	// (0x00053533) list_single_number_pane_g1_cp2_ParamLimits

0x4c37,	// (0x00053533) list_single_number_pane_g1_cp2

0x4c43,	// (0x0005353f) list_single_number_pane_g2_cp2

0x620f,	// (0x00054b0b) list_single_number_pane_t1_cp2_ParamLimits

0x620f,	// (0x00054b0b) list_single_number_pane_t1_cp2

0x6225,	// (0x00054b21) list_single_number_pane_t2_cp2_ParamLimits

0x6225,	// (0x00054b21) list_single_number_pane_t2_cp2

0x4a35,	// (0x00053331) list_double2_pane_g1_cp2_ParamLimits

0x4a35,	// (0x00053331) list_double2_pane_g1_cp2

0x4a46,	// (0x00053342) list_double2_pane_g2_cp2

0x4bab,	// (0x000534a7) list_double2_pane_t1_cp2_ParamLimits

0x4bab,	// (0x000534a7) list_double2_pane_t1_cp2

0x4bc1,	// (0x000534bd) list_double2_pane_t2_cp2_ParamLimits

0x4bc1,	// (0x000534bd) list_double2_pane_t2_cp2

0x4bd3,	// (0x000534cf) list_double_pane_g1_cp2_ParamLimits

0x4bd3,	// (0x000534cf) list_double_pane_g1_cp2

0x4bdf,	// (0x000534db) list_double_pane_g2_cp2

0x4be7,	// (0x000534e3) list_double_pane_t1_cp2_ParamLimits

0x4be7,	// (0x000534e3) list_double_pane_t1_cp2

0x4bfd,	// (0x000534f9) list_double_pane_t2_cp2_ParamLimits

0x4bfd,	// (0x000534f9) list_double_pane_t2_cp2

0x4c27,	// (0x00053523) list_single_pane_cp2_g3

0x4c37,	// (0x00053533) list_single_pane_g1_cp2_ParamLimits

0x4c37,	// (0x00053533) list_single_pane_g1_cp2

0x4c43,	// (0x0005353f) list_single_pane_g2_cp2

0x4c4b,	// (0x00053547) list_single_pane_t1_cp2_ParamLimits

0x4c4b,	// (0x00053547) list_single_pane_t1_cp2

0x4c63,	// (0x0005355f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4c63,	// (0x0005355f) list_single_large_graphic_pane_g1_cp2

0x4c6f,	// (0x0005356b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4c6f,	// (0x0005356b) list_single_large_graphic_pane_g2_cp2

0x4c7b,	// (0x00053577) list_single_large_graphic_pane_g3_cp2

0x4c83,	// (0x0005357f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c83,	// (0x0005357f) list_single_large_graphic_pane_g4_cp1

0x4c9d,	// (0x00053599) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c9d,	// (0x00053599) list_single_large_graphic_pane_t1_cp2

0x61db,	// (0x00054ad7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61db,	// (0x00054ad7) list_single_graphic_heading_pane_g1_cp2

0x61a8,	// (0x00054aa4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61a8,	// (0x00054aa4) list_single_graphic_heading_pane_g4_cp2

0x4c43,	// (0x0005353f) list_single_graphic_heading_pane_g5_cp2

0x61e7,	// (0x00054ae3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x61e7,	// (0x00054ae3) list_single_graphic_heading_pane_t1_cp2

0x61fd,	// (0x00054af9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x61fd,	// (0x00054af9) list_single_graphic_heading_pane_t2_cp2

0x619c,	// (0x00054a98) list_single_2graphic_pane_g1_cp2_ParamLimits

0x619c,	// (0x00054a98) list_single_2graphic_pane_g1_cp2

0x61a8,	// (0x00054aa4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61a8,	// (0x00054aa4) list_single_2graphic_pane_g2_cp2

0x4c43,	// (0x0005353f) list_single_2graphic_pane_g3_cp2

0x61b9,	// (0x00054ab5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x61b9,	// (0x00054ab5) list_single_2graphic_pane_g4_cp2

0x61c5,	// (0x00054ac1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61c5,	// (0x00054ac1) list_single_2graphic_pane_t1_cp2

0x3712,	// (0x0005200e) list_highlight_pane_g10_cp1

0x5d74,	// (0x00054670) list_highlight_pane_g1_cp1

0x5d7c,	// (0x00054678) list_highlight_pane_g2_cp1

0x5d84,	// (0x00054680) list_highlight_pane_g3_cp1

0x5d8c,	// (0x00054688) list_highlight_pane_g4_cp1

0x5d94,	// (0x00054690) list_highlight_pane_g5_cp1

0x5d9c,	// (0x00054698) list_highlight_pane_g6_cp1

0x5da4,	// (0x000546a0) list_highlight_pane_g7_cp1

0x5dac,	// (0x000546a8) list_highlight_pane_g8_cp1

0x5db4,	// (0x000546b0) list_highlight_pane_g9_cp1

0xdc44,	// (0x0005c540) form_field_slider_pane_t3

0xdc52,	// (0x0005c54e) form_field_slider_pane_t4

0x5cb0,	// (0x000545ac) slider_form_pane_ParamLimits

0x5cb0,	// (0x000545ac) slider_form_pane

0x371c,	// (0x00052018) control_abbreviations

0x371c,	// (0x00052018) control_conventions

0x371c,	// (0x00052018) control_definitions

0x371c,	// (0x00052018) format_table_attribute

0x648e,	// (0x00054d8a) bg_popup_preview_window_pane_g9

0x371c,	// (0x00052018) format_table_data2

0x371c,	// (0x00052018) format_table_data3

0x371c,	// (0x00052018) format_table_data_example

0x0008,

0x371c,	// (0x00052018) intro_purpose

0xf8ef,	// (0x0005e1eb) bg_popup_preview_window_pane_g

0x371c,	// (0x00052018) texts_category

0x371c,	// (0x00052018) texts_graphics

0x4cb3,	// (0x000535af) text_digital

0x4cc2,	// (0x000535be) text_primary

0x4cd1,	// (0x000535cd) text_primary_small

0x4ce0,	// (0x000535dc) text_secondary

0x4cef,	// (0x000535eb) text_title

0x6b73,	// (0x0005546f) bg_passive_tab_pane_g1_cp3_srt

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp3_srt

0x6b7c,	// (0x00055478) bg_passive_tab_pane_g3_cp3_srt

0x3a77,	// (0x00052373) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a77,	// (0x00052373) bg_active_tab_pane_cp3_srt

0x6b85,	// (0x00055481) tabs_4_active_pane_srt_g1

0xdf85,	// (0x0005c881) tabs_4_active_pane_srt_t1_ParamLimits

0xdf85,	// (0x0005c881) tabs_4_active_pane_srt_t1

0x6b73,	// (0x0005546f) bg_active_tab_pane_g1_cp3_copy1

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp3_copy1

0x6b7c,	// (0x00055478) bg_active_tab_pane_g3_cp3_copy1

0x37fc,	// (0x000520f8) tabs_2_long_active_pane_srt_ParamLimits

0x37fc,	// (0x000520f8) tabs_2_long_active_pane_srt

0x37fc,	// (0x000520f8) tabs_2_long_passive_pane_srt_ParamLimits

0x37fc,	// (0x000520f8) tabs_2_long_passive_pane_srt

0x5048,	// (0x00053944) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5048,	// (0x00053944) bg_passive_tab_pane_cp4_srt

0x68bc,	// (0x000551b8) bg_passive_tab_pane_g1_cp4_srt

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp4_srt

0x68c5,	// (0x000551c1) bg_passive_tab_pane_g3_cp4_srt

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp4_srt_ParamLimits

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp4_srt

0xddaf,	// (0x0005c6ab) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddaf,	// (0x0005c6ab) tabs_2_long_active_pane_srt_t1

0x68bc,	// (0x000551b8) bg_active_tab_pane_g1_cp4_srt

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp4_srt

0x68c5,	// (0x000551c1) bg_active_tab_pane_g3_cp4_srt

0x3a77,	// (0x00052373) tabs_3_long_active_pane_srt_ParamLimits

0x3a77,	// (0x00052373) tabs_3_long_active_pane_srt

0x3a77,	// (0x00052373) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a77,	// (0x00052373) tabs_3_long_passive_pane_cp_srt

0x3a77,	// (0x00052373) tabs_3_long_passive_pane_srt_ParamLimits

0x3a77,	// (0x00052373) tabs_3_long_passive_pane_srt

0x5048,	// (0x00053944) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5048,	// (0x00053944) bg_passive_tab_pane_cp5_srt

0x49ca,	// (0x000532c6) bg_passive_tab_pane_g1_cp5_srt

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp5_srt

0x49d3,	// (0x000532cf) bg_passive_tab_pane_g3_cp5_srt

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp5_srt_ParamLimits

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp5_srt

0xdd99,	// (0x0005c695) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd99,	// (0x0005c695) tabs_3_long_active_pane_srt_t1

0x49ca,	// (0x000532c6) bg_active_tab_pane_g1_cp5_srt

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp5_srt

0x49d3,	// (0x000532cf) bg_active_tab_pane_g3_cp5_srt

0x689c,	// (0x00055198) navi_text_pane_srt_t1

0x6894,	// (0x00055190) navi_icon_pane_srt_g1

0x4ec4,	// (0x000537c0) midp_editing_number_pane_srt

0x4cfe,	// (0x000535fa) midp_ticker_pane_srt

0x4ecc,	// (0x000537c8) midp_ticker_pane_srt_g1

0x4ed4,	// (0x000537d0) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005e073) midp_ticker_pane_srt_g

0x4edc,	// (0x000537d8) midp_ticker_pane_srt_t1

0x6885,	// (0x00055181) midp_editing_number_pane_t1_copy1

0xd575,	// (0x0005be71) listscroll_midp_pane

0xd575,	// (0x0005be71) midp_form_pane

0x4d76,	// (0x00053672) midp_info_popup_window_ParamLimits

0x4d76,	// (0x00053672) midp_info_popup_window

0x4114,	// (0x00052a10) bg_popup_sub_pane_cp50_ParamLimits

0x4114,	// (0x00052a10) bg_popup_sub_pane_cp50

0x59ac,	// (0x000542a8) listscroll_midp_info_pane_ParamLimits

0x59ac,	// (0x000542a8) listscroll_midp_info_pane

0x598c,	// (0x00054288) listscroll_form_midp_pane_ParamLimits

0x598c,	// (0x00054288) listscroll_form_midp_pane

0x5998,	// (0x00054294) scroll_bar_cp050

0x598c,	// (0x00054288) list_midp_pane

0x75b6,	// (0x00055eb2) signal_pane_g2_cp

0x58a6,	// (0x000541a2) listscroll_midp_info_pane_t1_ParamLimits

0x58a6,	// (0x000541a2) listscroll_midp_info_pane_t1

0x58be,	// (0x000541ba) listscroll_midp_info_pane_t2_ParamLimits

0x58be,	// (0x000541ba) listscroll_midp_info_pane_t2

0x58fc,	// (0x000541f8) listscroll_midp_info_pane_t3_ParamLimits

0x58fc,	// (0x000541f8) listscroll_midp_info_pane_t3

0x5936,	// (0x00054232) listscroll_midp_info_pane_t4_ParamLimits

0x5936,	// (0x00054232) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005e126) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005e126) listscroll_midp_info_pane_t

0x41d8,	// (0x00052ad4) scroll_pane_cp21

0x5844,	// (0x00054140) form_midp_field_choice_group_pane

0x584d,	// (0x00054149) form_midp_field_text_pane

0x588c,	// (0x00054188) form_midp_field_time_pane

0x5894,	// (0x00054190) form_midp_gauge_slider_pane

0x589d,	// (0x00054199) form_midp_gauge_wait_pane

0x371c,	// (0x00052018) form_midp_image_pane

0xc84c,	// (0x0005b148) list_single_midp_pane_ParamLimits

0xc84c,	// (0x0005b148) list_single_midp_pane

0xdc23,	// (0x0005c51f) form_midp_field_text_pane_t1

0x55d2,	// (0x00053ece) input_focus_pane_cp050

0x5833,	// (0x0005412f) list_midp_form_text_pane

0x57ce,	// (0x000540ca) form_midp_field_choice_group_pane_t1

0x57dc,	// (0x000540d8) input_focus_pane_cp051

0x57f0,	// (0x000540ec) list_midp_choice_pane

0x371c,	// (0x00052018) status_idle_pane

0x57b2,	// (0x000540ae) form_midp_field_time_pane_t1

0x3712,	// (0x0005200e) wait_anim_pane_g2_copy1

0x57c0,	// (0x000540bc) form_midp_field_time_pane_t2

0x0001,

0x4e24,	// (0x00053720) aid_navinavi_width_2_pane

0xf825,	// (0x0005e121) form_midp_field_time_pane_t

0x371c,	// (0x00052018) input_focus_pane_cp052

0x371c,	// (0x00052018) bg_input_focus_pane_cp040

0x5772,	// (0x0005406e) form_midp_gauge_slider_pane_t1

0x5780,	// (0x0005407c) form_midp_gauge_slider_pane_t2

0xdc07,	// (0x0005c503) form_midp_gauge_slider_pane_t3

0xdc15,	// (0x0005c511) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005e118) form_midp_gauge_slider_pane_t

0x57aa,	// (0x000540a6) form_midp_slider_pane

0x37fc,	// (0x000520f8) bg_input_focus_pane_cp041_ParamLimits

0x37fc,	// (0x000520f8) bg_input_focus_pane_cp041

0x573f,	// (0x0005403b) form_midp_gauge_wait_pane_t1_ParamLimits

0x573f,	// (0x0005403b) form_midp_gauge_wait_pane_t1

0x5751,	// (0x0005404d) form_midp_gauge_wait_pane_t2_ParamLimits

0x5751,	// (0x0005404d) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005e113) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005e113) form_midp_gauge_wait_pane_t

0x5763,	// (0x0005405f) form_midp_wait_pane_ParamLimits

0x5763,	// (0x0005405f) form_midp_wait_pane

0x5709,	// (0x00054005) form_midp_image_pane_g1

0x5712,	// (0x0005400e) form_midp_image_pane_t1

0x5721,	// (0x0005401d) form_midp_image_pane_t2

0x5730,	// (0x0005402c) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005e10c) form_midp_image_pane_t

0x5700,	// (0x00053ffc) list_single_midp_pane_g1

0x2e21,	// (0x0005171d) list_single_midp_pane_t1

0xdbf3,	// (0x0005c4ef) list_midp_form_item_pane_ParamLimits

0xdbf3,	// (0x0005c4ef) list_midp_form_item_pane

0x4dcc,	// (0x000536c8) list_midp_form_item_pane_t1

0x4ddb,	// (0x000536d7) midp_ticker_pane_g1

0x4de7,	// (0x000536e3) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005e059) midp_ticker_pane_g

0x4df3,	// (0x000536ef) midp_ticker_pane_t1

0x6ad6,	// (0x000553d2) midp_editing_number_pane_t1

0x6ab4,	// (0x000553b0) midp_editing_number_pane

0x6ac3,	// (0x000553bf) midp_ticker_pane

0x6875,	// (0x00055171) ai_message_heading_pane

0x371c,	// (0x00052018) bg_popup_window_pane_cp14

0x687d,	// (0x00055179) listscroll_ai_message_pane

0x67ff,	// (0x000550fb) ai_message_heading_pane_g1_ParamLimits

0x67ff,	// (0x000550fb) ai_message_heading_pane_g1

0x680b,	// (0x00055107) ai_message_heading_pane_g2_ParamLimits

0x680b,	// (0x00055107) ai_message_heading_pane_g2

0x6817,	// (0x00055113) ai_message_heading_pane_g3_ParamLimits

0x6817,	// (0x00055113) ai_message_heading_pane_g3

0x6823,	// (0x0005511f) ai_message_heading_pane_g4_ParamLimits

0x6823,	// (0x0005511f) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005e24d) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005e24d) ai_message_heading_pane_g

0x682f,	// (0x0005512b) ai_message_heading_pane_t1_ParamLimits

0x682f,	// (0x0005512b) ai_message_heading_pane_t1

0x6849,	// (0x00055145) ai_message_heading_pane_t2_ParamLimits

0x6849,	// (0x00055145) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005e256) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005e256) ai_message_heading_pane_t

0x685b,	// (0x00055157) bg_popup_heading_pane_cp1_ParamLimits

0x685b,	// (0x00055157) bg_popup_heading_pane_cp1

0x67ed,	// (0x000550e9) list_ai_message_pane_ParamLimits

0x67ed,	// (0x000550e9) list_ai_message_pane

0x41d8,	// (0x00052ad4) scroll_pane_cp10

0x6789,	// (0x00055085) list_ai_message_pane_g1

0x6791,	// (0x0005508d) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005e22a) list_ai_message_pane_g

0x6799,	// (0x00055095) list_ai_message_pane_t1_ParamLimits

0x6799,	// (0x00055095) list_ai_message_pane_t1

0x67ae,	// (0x000550aa) list_ai_message_pane_t2_ParamLimits

0x67ae,	// (0x000550aa) list_ai_message_pane_t2

0x67c3,	// (0x000550bf) list_ai_message_pane_t3_ParamLimits

0x67c3,	// (0x000550bf) list_ai_message_pane_t3

0x67d8,	// (0x000550d4) list_ai_message_pane_t4_ParamLimits

0x67d8,	// (0x000550d4) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005e22f) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005e22f) list_ai_message_pane_t

0xdd78,	// (0x0005c674) cell_ai_soft_ind_pane_ParamLimits

0xdd78,	// (0x0005c674) cell_ai_soft_ind_pane

0x4e05,	// (0x00053701) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e05,	// (0x00053701) cell_ai_soft_ind_pane_g1

0x371c,	// (0x00052018) grid_highlight_cp1

0x4e12,	// (0x0005370e) text_secondary_cp56_ParamLimits

0x4e12,	// (0x0005370e) text_secondary_cp56

0x6749,	// (0x00055045) example_general_pane_ParamLimits

0x6749,	// (0x00055045) example_general_pane

0x6755,	// (0x00055051) example_parent_pane_g1_ParamLimits

0x6755,	// (0x00055051) example_parent_pane_g1

0x6761,	// (0x0005505d) example_parent_pane_t1_ParamLimits

0x6761,	// (0x0005505d) example_parent_pane_t1

0xc4f6,	// (0x0005adf2) popup_preview_text_window_ParamLimits

0xc4f6,	// (0x0005adf2) popup_preview_text_window

0x4c2f,	// (0x0005352b) list_single_pane_cp2_g4

0x3b2d,	// (0x00052429) bg_popup_preview_window_pane_ParamLimits

0x3b2d,	// (0x00052429) bg_popup_preview_window_pane

0x6496,	// (0x00054d92) popup_preview_text_window_t1_ParamLimits

0x6496,	// (0x00054d92) popup_preview_text_window_t1

0x64b4,	// (0x00054db0) popup_preview_text_window_t2_ParamLimits

0x64b4,	// (0x00054db0) popup_preview_text_window_t2

0x64fd,	// (0x00054df9) popup_preview_text_window_t3_ParamLimits

0x64fd,	// (0x00054df9) popup_preview_text_window_t3

0x6542,	// (0x00054e3e) popup_preview_text_window_t4_ParamLimits

0x6542,	// (0x00054e3e) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005e1fe) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005e1fe) popup_preview_text_window_t

0x65c0,	// (0x00054ebc) scroll_pane_cp11

0x555e,	// (0x00053e5a) bg_popup_preview_window_pane_g1

0x6456,	// (0x00054d52) bg_popup_preview_window_pane_g2

0x645e,	// (0x00054d5a) bg_popup_preview_window_pane_g3

0x6466,	// (0x00054d62) bg_popup_preview_window_pane_g4

0x646e,	// (0x00054d6a) bg_popup_preview_window_pane_g5

0x6476,	// (0x00054d72) bg_popup_preview_window_pane_g6

0x647e,	// (0x00054d7a) bg_popup_preview_window_pane_g7

0x6486,	// (0x00054d82) bg_popup_preview_window_pane_g8

0x0084,	// (0x0004e980) aid_popup_width_pane

0xc472,	// (0x0005ad6e) popup_midp_note_alarm_window_ParamLimits

0xc472,	// (0x0005ad6e) popup_midp_note_alarm_window

0x406b,	// (0x00052967) data_form_pane_ParamLimits

0xbdf2,	// (0x0005a6ee) form_field_data_pane_g1

0xbdfc,	// (0x0005a6f8) form_field_data_pane_t1_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_ParamLimits

0x0a59,	// (0x0004f355) data_form_wide_pane_ParamLimits

0x0a6a,	// (0x0004f366) form_field_data_wide_pane_g1

0x0a76,	// (0x0004f372) form_field_data_wide_pane_t1_ParamLimits

0x3ddc,	// (0x000526d8) input_focus_pane_cp6_ParamLimits

0xd3b9,	// (0x0005bcb5) input_popup_find_pane_g1_ParamLimits

0xd3b9,	// (0x0005bcb5) input_popup_find_pane_g1

0x0cec,	// (0x0004f5e8) aid_navi_side_left_pane

0x0d01,	// (0x0004f5fd) aid_navi_side_right_pane

0x5e6f,	// (0x0005476b) bg_popup_window_pane_cp30_ParamLimits

0x5e6f,	// (0x0005476b) bg_popup_window_pane_cp30

0x5ee9,	// (0x000547e5) popup_midp_note_alarm_window_g1_ParamLimits

0x5ee9,	// (0x000547e5) popup_midp_note_alarm_window_g1

0x5f19,	// (0x00054815) popup_midp_note_alarm_window_t1_ParamLimits

0x5f19,	// (0x00054815) popup_midp_note_alarm_window_t1

0x5fba,	// (0x000548b6) popup_midp_note_alarm_window_t2_ParamLimits

0x5fba,	// (0x000548b6) popup_midp_note_alarm_window_t2

0x6068,	// (0x00054964) popup_midp_note_alarm_window_t3_ParamLimits

0x6068,	// (0x00054964) popup_midp_note_alarm_window_t3

0x609a,	// (0x00054996) popup_midp_note_alarm_window_t4_ParamLimits

0x609a,	// (0x00054996) popup_midp_note_alarm_window_t4

0x60c0,	// (0x000549bc) popup_midp_note_alarm_window_t5_ParamLimits

0x60c0,	// (0x000549bc) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005e19b) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005e19b) popup_midp_note_alarm_window_t

0x616c,	// (0x00054a68) wait_bar_pane_cp1_ParamLimits

0x616c,	// (0x00054a68) wait_bar_pane_cp1

0x371c,	// (0x00052018) wait_anim_pane_copy1

0x371c,	// (0x00052018) wait_border_pane_copy1

0x5b55,	// (0x00054451) wait_border_pane_g1_copy1

0x0a90,	// (0x0004f38c) form_field_popup_pane_g1

0xbe16,	// (0x0005a712) form_field_popup_pane_t1_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_cp7_ParamLimits

0x4099,	// (0x00052995) list_form_pane_ParamLimits

0x0ab0,	// (0x0004f3ac) form_field_popup_wide_pane_g1

0x0ab8,	// (0x0004f3b4) form_field_popup_wide_pane_t1_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_cp8_ParamLimits

0x40a5,	// (0x000529a1) list_form_wide_pane_ParamLimits

0xdfde,	// (0x0005c8da) aid_size_cell_graphic_pane

0xbe95,	// (0x0005a791) data_form_pane_t1_ParamLimits

0xc873,	// (0x0005b16f) data_form_wide_pane_t1_ParamLimits

0xd7de,	// (0x0005c0da) bg_status_flat_pane

0xd031,	// (0x0005b92d) title_pane_t1_ParamLimits

0x37c4,	// (0x000520c0) title_pane_t2_ParamLimits

0x37ea,	// (0x000520e6) title_pane_t3_ParamLimits

0xf557,	// (0x0005de53) title_pane_t_ParamLimits

0x4657,	// (0x00052f53) level_1_signal_ParamLimits

0x4669,	// (0x00052f65) level_2_signal_ParamLimits

0x467c,	// (0x00052f78) level_3_signal_ParamLimits

0x468f,	// (0x00052f8b) level_4_signal_ParamLimits

0x46a2,	// (0x00052f9e) level_5_signal_ParamLimits

0x46b5,	// (0x00052fb1) level_6_signal_ParamLimits

0x46c8,	// (0x00052fc4) level_7_signal_ParamLimits

0x4657,	// (0x00052f53) level_1_battery_ParamLimits

0x4669,	// (0x00052f65) level_2_battery_ParamLimits

0x467c,	// (0x00052f78) level_3_battery_ParamLimits

0x468f,	// (0x00052f8b) level_4_battery_ParamLimits

0x46a2,	// (0x00052f9e) level_5_battery_ParamLimits

0x46b5,	// (0x00052fb1) level_6_battery_ParamLimits

0x46c8,	// (0x00052fc4) level_7_battery_ParamLimits

0x5d74,	// (0x00054670) bg_status_flat_pane_g1

0x5d7c,	// (0x00054678) bg_status_flat_pane_g2

0x5d84,	// (0x00054680) bg_status_flat_pane_g3

0x5d8c,	// (0x00054688) bg_status_flat_pane_g4

0x5d94,	// (0x00054690) bg_status_flat_pane_g5

0x5d9c,	// (0x00054698) bg_status_flat_pane_g6

0x5da4,	// (0x000546a0) bg_status_flat_pane_g7

0xd0bd,	// (0x0005b9b9) tabs_3_active_pane_t1_ParamLimits

0xd0bd,	// (0x0005b9b9) tabs_3_passive_pane_t1_ParamLimits

0xd0cf,	// (0x0005b9cb) tabs_4_active_pane_t1_ParamLimits

0xd0cf,	// (0x0005b9cb) tabs_4_1_passive_pane_t1_ParamLimits

0xd3c7,	// (0x0005bcc3) tabs_2_active_pane_t1_ParamLimits

0xd3c7,	// (0x0005bcc3) tabs_2_passive_pane_t1_ParamLimits

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp4_ParamLimits

0xd3d9,	// (0x0005bcd5) tabs_2_long_active_pane_t1_ParamLimits

0x5048,	// (0x00053944) bg_passive_tab_pane_cp4_ParamLimits

0x18fb,	// (0x000501f7) list_single_midp_graphic_pane_t1_ParamLimits

0x37fc,	// (0x000520f8) bg_active_tab_pane_cp5_ParamLimits

0xd3ec,	// (0x0005bce8) tabs_3_long_active_pane_t1_ParamLimits

0x5048,	// (0x00053944) bg_passive_tab_pane_cp5_ParamLimits

0x18fb,	// (0x000501f7) list_single_midp_graphic_pane_t1

0xd7de,	// (0x0005c0da) bg_status_flat_pane_ParamLimits

0x51ee,	// (0x00053aea) indicator_pane_cp2_ParamLimits

0x51ee,	// (0x00053aea) indicator_pane_cp2

0xd9f6,	// (0x0005c2f2) navi_pane_srt_ParamLimits

0xd9f6,	// (0x0005c2f2) navi_pane_srt

0x533d,	// (0x00053c39) popup_clock_digital_analogue_window_cp1

0x38d9,	// (0x000521d5) indicator_pane_t1

0x4cfe,	// (0x000535fa) copy_highlight_pane

0x4cfe,	// (0x000535fa) cursor_graphics_pane

0x4cfe,	// (0x000535fa) graphic_within_text_pane

0x4cfe,	// (0x000535fa) link_highlight_pane

0x6583,	// (0x00054e7f) popup_preview_text_window_t5_ParamLimits

0x6583,	// (0x00054e7f) popup_preview_text_window_t5

0x4e2c,	// (0x00053728) cursor_digital_pane

0x4e2c,	// (0x00053728) cursor_primary_pane

0x4e3d,	// (0x00053739) cursor_primary_small_pane

0x4e45,	// (0x00053741) cursor_secondary_pane

0x4e4d,	// (0x00053749) cursor_title_pane

0x4e2c,	// (0x00053728) link_highlight_digital_pane

0x4e34,	// (0x00053730) link_highlight_primary_pane

0x4e3d,	// (0x00053739) link_highlight_primary_small_pane

0x4e45,	// (0x00053741) link_highlight_secondary_pane

0x4e4d,	// (0x00053749) link_highlight_title_pane

0x4e2c,	// (0x00053728) copy_highlight_digital_pane

0x4e2c,	// (0x00053728) copy_highlight_primary_pane

0x4e3d,	// (0x00053739) copy_highlight_primary_small_pane

0x4e45,	// (0x00053741) copy_highlight_secondary_pane

0x4e4d,	// (0x00053749) copy_highlight_title_pane

0x4e45,	// (0x00053741) graphic_text_digital_pane

0x5e12,	// (0x0005470e) graphic_text_primary_pane

0x5e1b,	// (0x00054717) graphic_text_primary_small_pane

0x4e3d,	// (0x00053739) graphic_text_secondary_pane

0x4e2c,	// (0x00053728) graphic_text_title_pane

0xd61a,	// (0x0005bf16) cursor_primary_pane_g1

0x5e04,	// (0x00054700) cursor_text_primary_t1

0xdc74,	// (0x0005c570) cursor_primary_small_pane_g1

0x5df6,	// (0x000546f2) cursor_text_primary_small_t1

0xdc6a,	// (0x0005c566) cursor_primary_small_pane_g1_copy1

0x5dde,	// (0x000546da) cursor_text_primary_small_t1_copy1

0x5dbc,	// (0x000546b8) cursor_text_title_t1

0xdc60,	// (0x0005c55c) cursor_title_pane_g1

0xd61a,	// (0x0005bf16) cursor_digital_pane_g1

0x4e5f,	// (0x0005375b) cursor_text_digital_t1

0x4e84,	// (0x00053780) link_highlight_primary_pane_g1

0x5d65,	// (0x00054661) link_highlight_primary_pane_t1

0x4e6d,	// (0x00053769) link_highlight_primary_small_pane_g1

0x4e75,	// (0x00053771) link_highlight_primary_small_pane_t1

0x4e84,	// (0x00053780) link_highlight_secondary_pane_g1

0x4e8c,	// (0x00053788) link_highlight_secondary_pane_t1

0x5cd9,	// (0x000545d5) link_highlight_title_pane_g1

0x5ce1,	// (0x000545dd) link_highlight_title_pane_t1

0x5cc2,	// (0x000545be) link_highlight_digital_pane_g1

0x5cca,	// (0x000545c6) link_highlight_digital_pane_t1

0x5b9a,	// (0x00054496) copy_highlight_primary_pane_g1

0x5ba2,	// (0x0005449e) copy_highlight_primary_pane_t1

0x5b74,	// (0x00054470) copy_highlight_primary_small_pane_g1

0x5b8b,	// (0x00054487) copy_highlight_primary_small_pane_t1

0x4e9b,	// (0x00053797) copy_highlight_secondary_pane_g1

0x4ea3,	// (0x0005379f) copy_highlight_secondary_pane_t1

0x5b74,	// (0x00054470) copy_highlight_title_pane_g1

0x5b7c,	// (0x00054478) copy_highlight_title_pane_t1

0x5b9a,	// (0x00054496) copy_highlight_digital_pane_g1

0x6dd5,	// (0x000556d1) copy_highlight_digital_pane_t1

0x6d29,	// (0x00055625) graphic_text_primary_pane_g1

0x6db9,	// (0x000556b5) graphic_text_primary_pane_t1

0x6dc7,	// (0x000556c3) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005e2ca) graphic_text_primary_pane_t

0x6d95,	// (0x00055691) graphic_text_primary_small_pane_g1

0x6d9d,	// (0x00055699) graphic_text_primary_small_pane_t1

0x6dab,	// (0x000556a7) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005e2c5) graphic_text_primary_small_pane_t

0x6d71,	// (0x0005566d) graphic_text_secondary_pane_g1

0x6d79,	// (0x00055675) graphic_text_secondary_pane_t1

0x6d87,	// (0x00055683) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005e2c0) graphic_text_secondary_pane_t

0x6d4d,	// (0x00055649) graphic_text_title_pane_g1

0x6d55,	// (0x00055651) graphic_text_title_pane_t1

0x6d63,	// (0x0005565f) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005e2bb) graphic_text_title_pane_t

0x6d29,	// (0x00055625) graphic_text_digital_pane_g1

0x6d31,	// (0x0005562d) graphic_text_digital_pane_t1

0x6d3f,	// (0x0005563b) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005e2b6) graphic_text_digital_pane_t

0x37fc,	// (0x000520f8) navi_icon_pane_srt_ParamLimits

0x37fc,	// (0x000520f8) navi_icon_pane_srt

0x371c,	// (0x00052018) navi_midp_pane_srt

0x371c,	// (0x00052018) navi_navi_pane_srt

0x37fc,	// (0x000520f8) navi_text_pane_srt_ParamLimits

0x37fc,	// (0x000520f8) navi_text_pane_srt

0x6cf4,	// (0x000555f0) navi_navi_icon_text_pane_srt

0x6cfc,	// (0x000555f8) navi_navi_pane_srt_g1_ParamLimits

0x6cfc,	// (0x000555f8) navi_navi_pane_srt_g1

0x6d0e,	// (0x0005560a) navi_navi_pane_srt_g2_ParamLimits

0x6d0e,	// (0x0005560a) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005e2b1) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005e2b1) navi_navi_pane_srt_g

0x6d20,	// (0x0005561c) navi_navi_tabs_pane_srt

0x6cf4,	// (0x000555f0) navi_navi_text_pane_srt

0x6cf4,	// (0x000555f0) navi_navi_volume_pane_srt

0x6ce5,	// (0x000555e1) navi_navi_text_pane_srt_t1

0x1c75,	// (0x00050571) navi_navi_volume_pane_srt_g1

0x1c7d,	// (0x00050579) volume_small_pane_srt_ParamLimits

0x1c7d,	// (0x00050579) volume_small_pane_srt

0x103a,	// (0x0004f936) volume_small_pane_srt_g1_ParamLimits

0x103a,	// (0x0004f936) volume_small_pane_srt_g1

0x104a,	// (0x0004f946) volume_small_pane_srt_g2_ParamLimits

0x104a,	// (0x0004f946) volume_small_pane_srt_g2

0x105b,	// (0x0004f957) volume_small_pane_srt_g3_ParamLimits

0x105b,	// (0x0004f957) volume_small_pane_srt_g3

0x106c,	// (0x0004f968) volume_small_pane_srt_g4_ParamLimits

0x106c,	// (0x0004f968) volume_small_pane_srt_g4

0x107d,	// (0x0004f979) volume_small_pane_srt_g5_ParamLimits

0x107d,	// (0x0004f979) volume_small_pane_srt_g5

0x108e,	// (0x0004f98a) volume_small_pane_srt_g6_ParamLimits

0x108e,	// (0x0004f98a) volume_small_pane_srt_g6

0x109f,	// (0x0004f99b) volume_small_pane_srt_g7_ParamLimits

0x109f,	// (0x0004f99b) volume_small_pane_srt_g7

0x10b0,	// (0x0004f9ac) volume_small_pane_srt_g8_ParamLimits

0x10b0,	// (0x0004f9ac) volume_small_pane_srt_g8

0x10c1,	// (0x0004f9bd) volume_small_pane_srt_g9_ParamLimits

0x10c1,	// (0x0004f9bd) volume_small_pane_srt_g9

0x10d2,	// (0x0004f9ce) volume_small_pane_srt_g10_ParamLimits

0x10d2,	// (0x0004f9ce) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005e05e) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005e05e) volume_small_pane_srt_g

0x3bd6,	// (0x000524d2) query_popup_data_pane_cp2

0x6ccb,	// (0x000555c7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ccb,	// (0x000555c7) navi_navi_icon_text_pane_srt_t1

0x5e12,	// (0x0005470e) navi_tabs_2_long_pane_srt

0x5e12,	// (0x0005470e) navi_tabs_2_pane_srt

0x5e12,	// (0x0005470e) navi_tabs_3_long_pane_srt

0x5e12,	// (0x0005470e) navi_tabs_3_pane_srt

0x5e12,	// (0x0005470e) navi_tabs_4_pane_srt

0x1c55,	// (0x00050551) tabs_2_active_pane_srt_ParamLimits

0x1c55,	// (0x00050551) tabs_2_active_pane_srt

0x1c65,	// (0x00050561) tabs_2_passive_pane_srt_ParamLimits

0x1c65,	// (0x00050561) tabs_2_passive_pane_srt

0x55d2,	// (0x00053ece) bg_passive_tab_pane_cp1_srt_ParamLimits

0x55d2,	// (0x00053ece) bg_passive_tab_pane_cp1_srt

0x6c97,	// (0x00055593) bg_passive_tab_pane_g1_cp1_srt

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp1_srt

0x6ca0,	// (0x0005559c) bg_passive_tab_pane_g3_cp1_srt

0x3a77,	// (0x00052373) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a77,	// (0x00052373) bg_active_tab_pane_cp1_srt

0x6ca9,	// (0x000555a5) tabs_2_active_pane_srt_g1

0xe020,	// (0x0005c91c) tabs_2_active_pane_srt_t1_ParamLimits

0xe020,	// (0x0005c91c) tabs_2_active_pane_srt_t1

0x6c97,	// (0x00055593) bg_active_tab_pane_g1_cp1_srt

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp1_srt

0x6ca0,	// (0x0005559c) bg_active_tab_pane_g3_cp1_srt

0x1c22,	// (0x0005051e) tabs_3_active_pane_srt_ParamLimits

0x1c22,	// (0x0005051e) tabs_3_active_pane_srt

0x1c33,	// (0x0005052f) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c33,	// (0x0005052f) tabs_3_passive_pane_cp_srt

0x1c44,	// (0x00050540) tabs_3_passive_pane_srt_ParamLimits

0x1c44,	// (0x00050540) tabs_3_passive_pane_srt

0x55d2,	// (0x00053ece) bg_passive_tab_pane_cp2_srt_ParamLimits

0x55d2,	// (0x00053ece) bg_passive_tab_pane_cp2_srt

0x4eb2,	// (0x000537ae) bg_passive_tab_pane_g1_cp2_srt

0x4940,	// (0x0005323c) bg_passive_tab_pane_g2_cp2_srt

0x4ebb,	// (0x000537b7) bg_passive_tab_pane_g3_cp2_srt

0x3a77,	// (0x00052373) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a77,	// (0x00052373) bg_active_tab_pane_cp2_srt

0x6c7d,	// (0x00055579) tabs_3_active_pane_srt_g1

0xe00a,	// (0x0005c906) tabs_3_active_pane_srt_t1_ParamLimits

0xe00a,	// (0x0005c906) tabs_3_active_pane_srt_t1

0x4eb2,	// (0x000537ae) bg_active_tab_pane_g1_cp2_srt

0x4940,	// (0x0005323c) bg_active_tab_pane_g2_cp2_srt

0x4ebb,	// (0x000537b7) bg_active_tab_pane_g3_cp2_srt

0x1bda,	// (0x000504d6) tabs_4_active_pane_srt_ParamLimits

0x1bda,	// (0x000504d6) tabs_4_active_pane_srt

0x1bec,	// (0x000504e8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1bec,	// (0x000504e8) tabs_4_passive_pane_cp2_srt

0x1241,	// (0x0004fb3d) aid_size_cell_toolbar

0x692d,	// (0x00055229) main_idle_act_pane_ParamLimits

0x140c,	// (0x0004fd08) popup_large_graphic_colour_window_ParamLimits

0xc782,	// (0x0005b07e) popup_toolbar_window_ParamLimits

0xc782,	// (0x0005b07e) popup_toolbar_window

0x6ae5,	// (0x000553e1) list_single_graphic_2heading_pane_ParamLimits

0x6ae5,	// (0x000553e1) list_single_graphic_2heading_pane

0x4408,	// (0x00052d04) aid_size_cell_apps_grid_lsc_pane

0x441a,	// (0x00052d16) aid_size_cell_apps_grid_prt_pane

0x5048,	// (0x00053944) bg_wml_button_pane_cp1_ParamLimits

0x5048,	// (0x00053944) bg_wml_button_pane_cp1

0xdc23,	// (0x0005c51f) form_midp_field_text_pane_t1_ParamLimits

0x55d2,	// (0x00053ece) input_focus_pane_cp050_ParamLimits

0x5833,	// (0x0005412f) list_midp_form_text_pane_ParamLimits

0x57dc,	// (0x000540d8) input_focus_pane_cp051_ParamLimits

0x57f0,	// (0x000540ec) list_midp_choice_pane_ParamLimits

0xdbc1,	// (0x0005c4bd) list_single_2graphic_pane_cp3_ParamLimits

0xdbc1,	// (0x0005c4bd) list_single_2graphic_pane_cp3

0xdbd4,	// (0x0005c4d0) list_single_midp_graphic_pane_ParamLimits

0xdbd4,	// (0x0005c4d0) list_single_midp_graphic_pane

0x000c,	// (0x0004e908) list_single_graphic_2heading_pane_g1_ParamLimits

0x000c,	// (0x0004e908) list_single_graphic_2heading_pane_g1

0x0018,	// (0x0004e914) list_single_graphic_2heading_pane_g4_ParamLimits

0x0018,	// (0x0004e914) list_single_graphic_2heading_pane_g4

0x0024,	// (0x0004e920) list_single_graphic_2heading_pane_g5_ParamLimits

0x0024,	// (0x0004e920) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005e0b1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005e0b1) list_single_graphic_2heading_pane_g

0x0030,	// (0x0004e92c) list_single_graphic_2heading_pane_t1_ParamLimits

0x0030,	// (0x0004e92c) list_single_graphic_2heading_pane_t1

0x0044,	// (0x0004e940) list_single_graphic_2heading_pane_t2_ParamLimits

0x0044,	// (0x0004e940) list_single_graphic_2heading_pane_t2

0x0060,	// (0x0004e95c) list_single_graphic_2heading_pane_t3_ParamLimits

0x0060,	// (0x0004e95c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005e0b8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005e0b8) list_single_graphic_2heading_pane_t

0x549c,	// (0x00053d98) bg_popup_sub_pane_cp2

0x54c6,	// (0x00053dc2) grid_toobar_pane

0x1820,	// (0x0005011c) cell_toolbar_pane_ParamLimits

0x1820,	// (0x0005011c) cell_toolbar_pane

0x5502,	// (0x00053dfe) cell_toolbar_pane_g1_ParamLimits

0x5502,	// (0x00053dfe) cell_toolbar_pane_g1

0x5516,	// (0x00053e12) cell_toolbar_pane_g2_ParamLimits

0x5516,	// (0x00053e12) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005e0c6) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005e0c6) cell_toolbar_pane_g

0x5538,	// (0x00053e34) grid_highlight_pane_cp2_ParamLimits

0x5538,	// (0x00053e34) grid_highlight_pane_cp2

0x5552,	// (0x00053e4e) toolbar_button_pane

0x555e,	// (0x00053e5a) toolbar_button_pane_g1

0x5566,	// (0x00053e62) toolbar_button_pane_g2

0x556e,	// (0x00053e6a) toolbar_button_pane_g3

0x5576,	// (0x00053e72) toolbar_button_pane_g4

0x557e,	// (0x00053e7a) toolbar_button_pane_g5

0x5586,	// (0x00053e82) toolbar_button_pane_g6

0x558e,	// (0x00053e8a) toolbar_button_pane_g7

0x5596,	// (0x00053e92) toolbar_button_pane_g8

0x559e,	// (0x00053e9a) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005e0cb) toolbar_button_pane_g

0x187a,	// (0x00050176) list_single_2graphic_pane_g1_cp3_ParamLimits

0x187a,	// (0x00050176) list_single_2graphic_pane_g1_cp3

0xc7da,	// (0x0005b0d6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7da,	// (0x0005b0d6) list_single_2graphic_pane_g2_cp3

0x1897,	// (0x00050193) list_single_2graphic_pane_g3_cp3

0x189f,	// (0x0005019b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x189f,	// (0x0005019b) list_single_2graphic_pane_g4_cp3

0x18ab,	// (0x000501a7) list_single_2graphic_pane_t1_cp3_ParamLimits

0x18ab,	// (0x000501a7) list_single_2graphic_pane_t1_cp3

0x18ef,	// (0x000501eb) list_single_midp_graphic_pane_g2_ParamLimits

0x18ef,	// (0x000501eb) list_single_midp_graphic_pane_g2

0x0004,	// (0x0004e900) aid_zoom_text_primary

0x1249,	// (0x0004fb45) aid_zoom_text_secondary

0xd672,	// (0x0005bf6e) status_small_pane_g7_ParamLimits

0xd672,	// (0x0005bf6e) status_small_pane_g7

0xd695,	// (0x0005bf91) status_small_pane_t1_ParamLimits

0xd00d,	// (0x0005b909) title_pane_g2

0x0003,

0xf54e,	// (0x0005de4a) title_pane_g

0xd285,	// (0x0005bb81) aid_size_cell_colour_1_pane_ParamLimits

0xd285,	// (0x0005bb81) aid_size_cell_colour_1_pane

0xd299,	// (0x0005bb95) aid_size_cell_colour_2_pane_ParamLimits

0xd299,	// (0x0005bb95) aid_size_cell_colour_2_pane

0xd2ad,	// (0x0005bba9) aid_size_cell_colour_3_pane_ParamLimits

0xd2ad,	// (0x0005bba9) aid_size_cell_colour_3_pane

0xd2c1,	// (0x0005bbbd) aid_size_cell_colour_4_pane_ParamLimits

0xd2c1,	// (0x0005bbbd) aid_size_cell_colour_4_pane

0x0c29,	// (0x0004f525) title_pane_stacon_g1_ParamLimits

0x0c29,	// (0x0004f525) title_pane_stacon_g1

0x5bf9,	// (0x000544f5) popup_note_wait_window_g3_ParamLimits

0x5bf9,	// (0x000544f5) popup_note_wait_window_g3

0x5c6f,	// (0x0005456b) popup_note_wait_window_t5_ParamLimits

0x5c6f,	// (0x0005456b) popup_note_wait_window_t5

0x371c,	// (0x00052018) main_feb_china_hwr_fs_writing_pane

0xc18a,	// (0x0005aa86) popup_feb_china_hwr_fs_window_ParamLimits

0xc18a,	// (0x0005aa86) popup_feb_china_hwr_fs_window

0xc7eb,	// (0x0005b0e7) aid_size_cell_hwr_fs_ParamLimits

0xc7eb,	// (0x0005b0e7) aid_size_cell_hwr_fs

0x55d2,	// (0x00053ece) bg_popup_sub_pane_cp3_ParamLimits

0x55d2,	// (0x00053ece) bg_popup_sub_pane_cp3

0xc800,	// (0x0005b0fc) grid_hwr_fs_pane_ParamLimits

0xc800,	// (0x0005b0fc) grid_hwr_fs_pane

0x193e,	// (0x0005023a) linegrid_hwr_fs_pane_ParamLimits

0x193e,	// (0x0005023a) linegrid_hwr_fs_pane

0xc818,	// (0x0005b114) cell_hwr_fs_pane_ParamLimits

0xc818,	// (0x0005b114) cell_hwr_fs_pane

0x55de,	// (0x00053eda) linegrid_hwr_fs_pane_g1_ParamLimits

0x55de,	// (0x00053eda) linegrid_hwr_fs_pane_g1

0xdb95,	// (0x0005c491) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb95,	// (0x0005c491) linegrid_hwr_fs_pane_g2

0x55fc,	// (0x00053ef8) linegrid_hwr_fs_pane_g3_ParamLimits

0x55fc,	// (0x00053ef8) linegrid_hwr_fs_pane_g3

0x1970,	// (0x0005026c) linegrid_hwr_fs_pane_g4_ParamLimits

0x1970,	// (0x0005026c) linegrid_hwr_fs_pane_g4

0x198a,	// (0x00050286) linegrid_hwr_fs_pane_g5_ParamLimits

0x198a,	// (0x00050286) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005e0f1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005e0f1) linegrid_hwr_fs_pane_g

0x5608,	// (0x00053f04) cell_hwr_fs_pane_g1_ParamLimits

0x5608,	// (0x00053f04) cell_hwr_fs_pane_g1

0x53d3,	// (0x00053ccf) cell_hwr_fs_pane_g2_ParamLimits

0x53d3,	// (0x00053ccf) cell_hwr_fs_pane_g2

0xdba7,	// (0x0005c4a3) cell_hwr_fs_pane_g3_ParamLimits

0xdba7,	// (0x0005c4a3) cell_hwr_fs_pane_g3

0xdbb4,	// (0x0005c4b0) cell_hwr_fs_pane_g4_ParamLimits

0xdbb4,	// (0x0005c4b0) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005e0fc) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005e0fc) cell_hwr_fs_pane_g

0xc83e,	// (0x0005b13a) cell_hwr_fs_pane_t1

0x371c,	// (0x00052018) grid_highlight_pane_cp6

0x371c,	// (0x00052018) main_idle_act2_pane

0x41bf,	// (0x00052abb) aid_inside_area_popup_secondary

0xdc7e,	// (0x0005c57a) aid_inside_area_window_primary_ParamLimits

0xdc7e,	// (0x0005c57a) aid_inside_area_window_primary

0x6de4,	// (0x000556e0) ai2_news_ticker_pane

0x6dec,	// (0x000556e8) aid_size_cell_ai1_link_ParamLimits

0x6dec,	// (0x000556e8) aid_size_cell_ai1_link

0xe036,	// (0x0005c932) popup_ai2_data_window_ParamLimits

0xe036,	// (0x0005c932) popup_ai2_data_window

0x6e1c,	// (0x00055718) popup_ai2_link_window_ParamLimits

0x6e1c,	// (0x00055718) popup_ai2_link_window

0x55d2,	// (0x00053ece) bg_popup_sub_pane_cp4_ParamLimits

0x55d2,	// (0x00053ece) bg_popup_sub_pane_cp4

0x6e30,	// (0x0005572c) grid_ai2_link_pane_ParamLimits

0x6e30,	// (0x0005572c) grid_ai2_link_pane

0x6e47,	// (0x00055743) popup_ai2_link_window_g1_ParamLimits

0x6e47,	// (0x00055743) popup_ai2_link_window_g1

0x6e53,	// (0x0005574f) popup_ai2_link_window_g2_ParamLimits

0x6e53,	// (0x0005574f) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005e2cf) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005e2cf) popup_ai2_link_window_g

0x6e62,	// (0x0005575e) ai2_mp_button_pane

0x6e6a,	// (0x00055766) ai2_mp_volume_pane

0x57dc,	// (0x000540d8) bg_popup_sub_pane_cp5_ParamLimits

0x57dc,	// (0x000540d8) bg_popup_sub_pane_cp5

0x6e72,	// (0x0005576e) heading_ai2_gene_pane_ParamLimits

0x6e72,	// (0x0005576e) heading_ai2_gene_pane

0x6e7e,	// (0x0005577a) list_ai2_gene_pane_ParamLimits

0x6e7e,	// (0x0005577a) list_ai2_gene_pane

0x6ec6,	// (0x000557c2) cell_ai2_link_pane_ParamLimits

0x6ec6,	// (0x000557c2) cell_ai2_link_pane

0x6edc,	// (0x000557d8) cell_ai2_link_pane_g1

0x371c,	// (0x00052018) grid_highlight_pane_cp7

0x1c92,	// (0x0005058e) ai2_mp_volume_pane_g1

0x6fac,	// (0x000558a8) ai2_mp_volume_pane_g2

0xe060,	// (0x0005c95c) list_ai2_gene_pane_t1

0x6fb4,	// (0x000558b0) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005e2e8) ai2_mp_volume_pane_g

0x1c9a,	// (0x00050596) volume_small_pane_cp3

0x6fbc,	// (0x000558b8) aid_size_cell_ai2_button

0x6fc4,	// (0x000558c0) grid_ai2_button_pane

0x6fcd,	// (0x000558c9) cell_ai2_button_pane_ParamLimits

0x6fcd,	// (0x000558c9) cell_ai2_button_pane

0x3712,	// (0x0005200e) cell_ai2_button_pane_g1

0x371c,	// (0x00052018) grid_highlight_pane_cp8

0x6f6c,	// (0x00055868) ai2_gene_pane_t1_ParamLimits

0x6f6c,	// (0x00055868) ai2_gene_pane_t1

0xc104,	// (0x0005aa00) aid_height_parent_landscape

0xddc6,	// (0x0005c6c2) aid_height_set_list

0x692d,	// (0x00055229) aid_size_parent

0xdfde,	// (0x0005c8da) aid_size_cell_graphic_pane_ParamLimits

0x6e8e,	// (0x0005578a) popup_ai2_data_window_g1_ParamLimits

0x6e8e,	// (0x0005578a) popup_ai2_data_window_g1

0x6e9a,	// (0x00055796) ai2_news_ticker_pane_g1

0x6ea2,	// (0x0005579e) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005e2d4) ai2_news_ticker_pane_g

0x6eaa,	// (0x000557a6) ai2_news_ticker_pane_t1

0x6eb8,	// (0x000557b4) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005e2d9) ai2_news_ticker_pane_t

0x6ee5,	// (0x000557e1) heading_ai2_gene_pane_g1

0x6eed,	// (0x000557e9) heading_ai2_gene_pane_t1_ParamLimits

0x6eed,	// (0x000557e9) heading_ai2_gene_pane_t1

0x6f02,	// (0x000557fe) list_highlight_pane_cp6

0xe04a,	// (0x0005c946) ai2_gene_pane_ParamLimits

0xe04a,	// (0x0005c946) ai2_gene_pane

0xe06e,	// (0x0005c96a) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005e2de) list_ai2_gene_pane_t

0x6f3d,	// (0x00055839) list_highlight_pane_cp8_ParamLimits

0x6f3d,	// (0x00055839) list_highlight_pane_cp8

0x6f4e,	// (0x0005584a) ai2_gene_pane_g1_ParamLimits

0x6f4e,	// (0x0005584a) ai2_gene_pane_g1

0x6f60,	// (0x0005585c) ai2_gene_pane_g2_ParamLimits

0x6f60,	// (0x0005585c) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005e2e3) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005e2e3) ai2_gene_pane_g

0x4001,	// (0x000528fd) scroll_pane_cp12

0xc0c1,	// (0x0005a9bd) control_pane_t3_ParamLimits

0xc0c1,	// (0x0005a9bd) control_pane_t3

0xd686,	// (0x0005bf82) status_small_pane_g8_ParamLimits

0xd686,	// (0x0005bf82) status_small_pane_g8

0xc21f,	// (0x0005ab1b) popup_find_window_ParamLimits

0xc4ac,	// (0x0005ada8) popup_note_image_window_ParamLimits

0x1850,	// (0x0005014c) list_double2_graphic_pane_vc_g1_ParamLimits

0x1850,	// (0x0005014c) list_double2_graphic_pane_vc_g1

0x4c37,	// (0x00053533) list_double2_graphic_pane_vc_g2_ParamLimits

0x4c37,	// (0x00053533) list_double2_graphic_pane_vc_g2

0x2d91,	// (0x0005168d) list_double2_graphic_pane_vc_g3_ParamLimits

0x2d91,	// (0x0005168d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005e0bf) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e0bf) list_double2_graphic_pane_vc_g

0x185c,	// (0x00050158) list_double2_graphic_pane_vc_t1_ParamLimits

0x185c,	// (0x00050158) list_double2_graphic_pane_vc_t1

0x4c37,	// (0x00053533) list_single_heading_pane_vc_g1_ParamLimits

0x4c37,	// (0x00053533) list_single_heading_pane_vc_g1

0x2d91,	// (0x0005168d) list_single_heading_pane_vc_g2_ParamLimits

0x2d91,	// (0x0005168d) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005dece) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005dece) list_single_heading_pane_vc_g

0x18c7,	// (0x000501c3) list_single_heading_pane_vc_t1_ParamLimits

0x18c7,	// (0x000501c3) list_single_heading_pane_vc_t1

0x18dd,	// (0x000501d9) list_single_heading_pane_vc_t2_ParamLimits

0x18dd,	// (0x000501d9) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005e0e0) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005e0e0) list_single_heading_pane_vc_t

0x2d9d,	// (0x00051699) list_setting_number_pane_vc_g1_ParamLimits

0x2d9d,	// (0x00051699) list_setting_number_pane_vc_g1

0x2da9,	// (0x000516a5) list_setting_number_pane_vc_g2_ParamLimits

0x2da9,	// (0x000516a5) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005e0e5) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005e0e5) list_setting_number_pane_vc_g

0x2db5,	// (0x000516b1) list_setting_number_pane_vc_t1_ParamLimits

0x2db5,	// (0x000516b1) list_setting_number_pane_vc_t1

0x2dc9,	// (0x000516c5) list_setting_number_pane_vc_t2_ParamLimits

0x2dc9,	// (0x000516c5) list_setting_number_pane_vc_t2

0x2de5,	// (0x000516e1) list_setting_number_pane_vc_t3_ParamLimits

0x2de5,	// (0x000516e1) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005e0ea) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005e0ea) list_setting_number_pane_vc_t

0x2e11,	// (0x0005170d) set_value_pane_vc_ParamLimits

0x2e11,	// (0x0005170d) set_value_pane_vc

0x6ae5,	// (0x000553e1) list_double2_graphic_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double2_graphic_pane_vc

0x2ee3,	// (0x000517df) list_double2_large_graphic_pane_vc_ParamLimits

0x2ee3,	// (0x000517df) list_double2_large_graphic_pane_vc

0x6ae5,	// (0x000553e1) list_double2_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double2_pane_vc

0x6ae5,	// (0x000553e1) list_double_graphic_heading_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double_graphic_heading_pane_vc

0x6ae5,	// (0x000553e1) list_double_graphic_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double_graphic_pane_vc

0x6ae5,	// (0x000553e1) list_double_heading_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double_heading_pane_vc

0x2ef4,	// (0x000517f0) list_double_large_graphic_pane_vc_ParamLimits

0x2ef4,	// (0x000517f0) list_double_large_graphic_pane_vc

0x6ae5,	// (0x000553e1) list_double_number_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double_number_pane_vc

0x6ae5,	// (0x000553e1) list_double_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double_pane_vc

0x6ae5,	// (0x000553e1) list_double_time_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_double_time_pane_vc

0x6ae5,	// (0x000553e1) list_setting_number_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_setting_number_pane_vc

0x6ae5,	// (0x000553e1) list_setting_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_setting_pane_vc

0x6ae5,	// (0x000553e1) list_single_graphic_heading_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_single_graphic_heading_pane_vc

0x6ae5,	// (0x000553e1) list_single_heading_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_single_heading_pane_vc

0x6ae5,	// (0x000553e1) list_single_number_heading_pane_vc_ParamLimits

0x6ae5,	// (0x000553e1) list_single_number_heading_pane_vc

0x1850,	// (0x0005014c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1850,	// (0x0005014c) list_double_graphic_heading_pane_vc_g1

0x4c37,	// (0x00053533) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4c37,	// (0x00053533) list_double_graphic_heading_pane_vc_g2

0x2d91,	// (0x0005168d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2d91,	// (0x0005168d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005e0bf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e0bf) list_double_graphic_heading_pane_vc_g

0x2fbe,	// (0x000518ba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2fbe,	// (0x000518ba) list_double_graphic_heading_pane_vc_t1

0x2fda,	// (0x000518d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2fda,	// (0x000518d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005e2ef) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005e2ef) list_double_graphic_heading_pane_vc_t

0x2d9d,	// (0x00051699) list_setting_pane_vc_g1_ParamLimits

0x2d9d,	// (0x00051699) list_setting_pane_vc_g1

0x2da9,	// (0x000516a5) list_setting_pane_vc_g2_ParamLimits

0x2da9,	// (0x000516a5) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005e0e5) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005e0e5) list_setting_pane_vc_g

0x2ff8,	// (0x000518f4) list_setting_pane_vc_t1_ParamLimits

0x2ff8,	// (0x000518f4) list_setting_pane_vc_t1

0x3014,	// (0x00051910) list_setting_pane_vc_t2_ParamLimits

0x3014,	// (0x00051910) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005e31d) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005e31d) list_setting_pane_vc_t

0x2e11,	// (0x0005170d) set_value_pane_cp_vc_ParamLimits

0x2e11,	// (0x0005170d) set_value_pane_cp_vc

0x4c37,	// (0x00053533) list_single_number_heading_pane_vc_g1_ParamLimits

0x4c37,	// (0x00053533) list_single_number_heading_pane_vc_g1

0x2d91,	// (0x0005168d) list_single_number_heading_pane_vc_g2_ParamLimits

0x2d91,	// (0x0005168d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005dece) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005dece) list_single_number_heading_pane_vc_g

0x3030,	// (0x0005192c) list_single_number_heading_pane_vc_t1_ParamLimits

0x3030,	// (0x0005192c) list_single_number_heading_pane_vc_t1

0x3046,	// (0x00051942) list_single_number_heading_pane_vc_t2_ParamLimits

0x3046,	// (0x00051942) list_single_number_heading_pane_vc_t2

0x3058,	// (0x00051954) list_single_number_heading_pane_vc_t3_ParamLimits

0x3058,	// (0x00051954) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005e322) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005e322) list_single_number_heading_pane_vc_t

0x1850,	// (0x0005014c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1850,	// (0x0005014c) list_single_graphic_heading_pane_vc_g1

0x4c37,	// (0x00053533) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4c37,	// (0x00053533) list_single_graphic_heading_pane_vc_g4

0x2d91,	// (0x0005168d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2d91,	// (0x0005168d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005e0bf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e0bf) list_single_graphic_heading_pane_vc_g

0x3030,	// (0x0005192c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3030,	// (0x0005192c) list_single_graphic_heading_pane_vc_t1

0x306a,	// (0x00051966) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x306a,	// (0x00051966) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005e329) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005e329) list_single_graphic_heading_pane_vc_t

0x4c37,	// (0x00053533) list_double2_pane_vc_g1_ParamLimits

0x4c37,	// (0x00053533) list_double2_pane_vc_g1

0x2d91,	// (0x0005168d) list_double2_pane_vc_g2_ParamLimits

0x2d91,	// (0x0005168d) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005dece) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005dece) list_double2_pane_vc_g

0x307c,	// (0x00051978) list_double2_pane_vc_t1_ParamLimits

0x307c,	// (0x00051978) list_double2_pane_vc_t1

0x3092,	// (0x0005198e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3092,	// (0x0005198e) list_double2_large_graphic_pane_vc_g1

0x309e,	// (0x0005199a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x309e,	// (0x0005199a) list_double2_large_graphic_pane_vc_g2

0x30aa,	// (0x000519a6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x30aa,	// (0x000519a6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005dee6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005dee6) list_double2_large_graphic_pane_vc_g

0x30b6,	// (0x000519b2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x30b6,	// (0x000519b2) list_double2_large_graphic_pane_vc_t1

0x30cc,	// (0x000519c8) list_double_time_pane_vc_g1_ParamLimits

0x30cc,	// (0x000519c8) list_double_time_pane_vc_g1

0x30d8,	// (0x000519d4) list_double_time_pane_vc_g2_ParamLimits

0x30d8,	// (0x000519d4) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005e32e) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005e32e) list_double_time_pane_vc_g

0x30e4,	// (0x000519e0) list_double_time_pane_vc_t1_ParamLimits

0x30e4,	// (0x000519e0) list_double_time_pane_vc_t1

0x3108,	// (0x00051a04) list_double_time_pane_vc_t2_ParamLimits

0x3108,	// (0x00051a04) list_double_time_pane_vc_t2

0x3157,	// (0x00051a53) list_double_time_pane_vc_t3_ParamLimits

0x3157,	// (0x00051a53) list_double_time_pane_vc_t3

0x3169,	// (0x00051a65) list_double_time_pane_vc_t4_ParamLimits

0x3169,	// (0x00051a65) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005e333) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005e333) list_double_time_pane_vc_t

0x4c37,	// (0x00053533) list_double_pane_vc_g1_ParamLimits

0x4c37,	// (0x00053533) list_double_pane_vc_g1

0x2d91,	// (0x0005168d) list_double_pane_vc_g2_ParamLimits

0x2d91,	// (0x0005168d) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005dece) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005dece) list_double_pane_vc_g

0x317d,	// (0x00051a79) list_double_pane_vc_t1_ParamLimits

0x317d,	// (0x00051a79) list_double_pane_vc_t1

0x3191,	// (0x00051a8d) list_double_pane_vc_t2_ParamLimits

0x3191,	// (0x00051a8d) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005e33c) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005e33c) list_double_pane_vc_t

0x4c37,	// (0x00053533) list_double_number_pane_vc_g1_ParamLimits

0x4c37,	// (0x00053533) list_double_number_pane_vc_g1

0x2d91,	// (0x0005168d) list_double_number_pane_vc_g2_ParamLimits

0x2d91,	// (0x0005168d) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005dece) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005dece) list_double_number_pane_vc_g

0x31a9,	// (0x00051aa5) list_double_number_pane_vc_t1_ParamLimits

0x31a9,	// (0x00051aa5) list_double_number_pane_vc_t1

0x31bb,	// (0x00051ab7) list_double_number_pane_vc_t2_ParamLimits

0x31bb,	// (0x00051ab7) list_double_number_pane_vc_t2

0x31cf,	// (0x00051acb) list_double_number_pane_vc_t3_ParamLimits

0x31cf,	// (0x00051acb) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005e341) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005e341) list_double_number_pane_vc_t

0x31e7,	// (0x00051ae3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x31e7,	// (0x00051ae3) list_double_large_graphic_pane_vc_g1

0x3209,	// (0x00051b05) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3209,	// (0x00051b05) list_double_large_graphic_pane_vc_g2

0x321d,	// (0x00051b19) list_double_large_graphic_pane_vc_g3_ParamLimits

0x321d,	// (0x00051b19) list_double_large_graphic_pane_vc_g3

0x322c,	// (0x00051b28) list_double_large_graphic_pane_vc_g4_ParamLimits

0x322c,	// (0x00051b28) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005e348) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005e348) list_double_large_graphic_pane_vc_g

0x3238,	// (0x00051b34) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3238,	// (0x00051b34) list_double_large_graphic_pane_vc_t1

0x3254,	// (0x00051b50) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3254,	// (0x00051b50) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005e351) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005e351) list_double_large_graphic_pane_vc_t

0x4c37,	// (0x00053533) list_double_heading_pane_vc_g1_ParamLimits

0x4c37,	// (0x00053533) list_double_heading_pane_vc_g1

0x2d91,	// (0x0005168d) list_double_heading_pane_vc_g2_ParamLimits

0x2d91,	// (0x0005168d) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005dece) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005dece) list_double_heading_pane_vc_g

0x3276,	// (0x00051b72) list_double_heading_pane_vc_t1_ParamLimits

0x3276,	// (0x00051b72) list_double_heading_pane_vc_t1

0x328a,	// (0x00051b86) list_double_heading_pane_vc_t2_ParamLimits

0x328a,	// (0x00051b86) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005e356) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005e356) list_double_heading_pane_vc_t

0x32a2,	// (0x00051b9e) list_double_graphic_pane_vc_g1_ParamLimits

0x32a2,	// (0x00051b9e) list_double_graphic_pane_vc_g1

0x32ae,	// (0x00051baa) list_double_graphic_pane_vc_g2_ParamLimits

0x32ae,	// (0x00051baa) list_double_graphic_pane_vc_g2

0x4c37,	// (0x00053533) list_double_graphic_pane_vc_g3_ParamLimits

0x4c37,	// (0x00053533) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005e35b) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005e35b) list_double_graphic_pane_vc_g

0x32cb,	// (0x00051bc7) list_double_graphic_pane_vc_t1_ParamLimits

0x32cb,	// (0x00051bc7) list_double_graphic_pane_vc_t1

0x32f5,	// (0x00051bf1) list_double_graphic_pane_vc_t2_ParamLimits

0x32f5,	// (0x00051bf1) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005e364) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005e364) list_double_graphic_pane_vc_t

0x0090,	// (0x0004e98c) aid_size_cell_fastswap

0xb74d,	// (0x0005a049) aid_size_cell_touch_ParamLimits

0xb74d,	// (0x0005a049) aid_size_cell_touch

0x02fd,	// (0x0004ebf9) popup_fast_swap_wide_window_ParamLimits

0x02fd,	// (0x0004ebf9) popup_fast_swap_wide_window

0xb8fd,	// (0x0005a1f9) touch_pane_ParamLimits

0xb8fd,	// (0x0005a1f9) touch_pane

0x4063,	// (0x0005295f) button_value_adjust_pane_cp2

0x0983,	// (0x0004f27f) button_value_adjust_pane_cp4

0x09a7,	// (0x0004f2a3) form_field_data_pane_cp2

0xbdb9,	// (0x0005a6b5) form_field_data_wide_pane_cp2

0x44d5,	// (0x00052dd1) bg_scroll_pane_ParamLimits

0x0d8b,	// (0x0004f687) scroll_handle_pane_ParamLimits

0x0d9f,	// (0x0004f69b) scroll_sc2_down_pane_ParamLimits

0x0d9f,	// (0x0004f69b) scroll_sc2_down_pane

0x4506,	// (0x00052e02) scroll_sc2_up_pane_ParamLimits

0x4506,	// (0x00052e02) scroll_sc2_up_pane

0xe18e,	// (0x0005ca8a) grid_wheel_folder_pane_g1_ParamLimits

0xe18e,	// (0x0005ca8a) grid_wheel_folder_pane_g1

0x0fd2,	// (0x0004f8ce) clock_nsta_pane_cp2_ParamLimits

0x0fd2,	// (0x0004f8ce) clock_nsta_pane_cp2

0xd575,	// (0x0005be71) listscroll_midp_pane_ParamLimits

0xd581,	// (0x0005be7d) midp_canvas_pane

0x4ffa,	// (0x000538f6) nsta_clock_indic_pane

0x502e,	// (0x0005392a) listscroll_form_pane_vc

0x5036,	// (0x00053932) listscroll_set_pane_vc_ParamLimits

0x5036,	// (0x00053932) listscroll_set_pane_vc

0xd806,	// (0x0005c102) clock_nsta_pane

0xd830,	// (0x0005c12c) indicator_nsta_pane

0x549c,	// (0x00053d98) bg_popup_sub_pane_cp2_ParamLimits

0x54b0,	// (0x00053dac) find_pane_cp2_ParamLimits

0x54b0,	// (0x00053dac) find_pane_cp2

0x54c6,	// (0x00053dc2) grid_toobar_pane_ParamLimits

0x55a6,	// (0x00053ea2) list_form_gen_pane_vc_ParamLimits

0x55a6,	// (0x00053ea2) list_form_gen_pane_vc

0x55bc,	// (0x00053eb8) scroll_pane_cp8_vc_ParamLimits

0x55bc,	// (0x00053eb8) scroll_pane_cp8_vc

0x5638,	// (0x00053f34) data_form_wide_pane_vc_ParamLimits

0x5638,	// (0x00053f34) data_form_wide_pane_vc

0x5644,	// (0x00053f40) form_field_data_wide_pane_vc_g1

0x564c,	// (0x00053f48) form_field_data_wide_pane_vc_t1_ParamLimits

0x564c,	// (0x00053f48) form_field_data_wide_pane_vc_t1

0x4077,	// (0x00052973) input_focus_pane_cp6_vc_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_cp6_vc

0x598c,	// (0x00054288) list_midp_pane_ParamLimits

0x6c71,	// (0x0005556d) scroll_pane_cp16_ParamLimits

0x6c71,	// (0x0005556d) scroll_pane_cp16

0x59ce,	// (0x000542ca) button_value_adjust_pane_ParamLimits

0x59ce,	// (0x000542ca) button_value_adjust_pane

0xddd7,	// (0x0005c6d3) button_value_adjust_pane_cp6_ParamLimits

0xddd7,	// (0x0005c6d3) button_value_adjust_pane_cp6

0xdef1,	// (0x0005c7ed) settings_code_pane_cp_ParamLimits

0xdef1,	// (0x0005c7ed) settings_code_pane_cp

0x3712,	// (0x0005200e) cell_touch_pane_g1

0x3712,	// (0x0005200e) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005e004) cell_touch_pane_g

0xe07c,	// (0x0005c978) cell_touch_pane_cp_ParamLimits

0xe07c,	// (0x0005c978) cell_touch_pane_cp

0xe098,	// (0x0005c994) cell_touch_pane_ParamLimits

0xe098,	// (0x0005c994) cell_touch_pane

0x3712,	// (0x0005200e) scroll_sc2_down_pane_g1

0x3712,	// (0x0005200e) scroll_sc2_up_pane_g1

0x371c,	// (0x00052018) bg_set_opt_pane_cp4_vc

0x7001,	// (0x000558fd) list_set_graphic_pane_vc_g1_ParamLimits

0x7001,	// (0x000558fd) list_set_graphic_pane_vc_g1

0x700d,	// (0x00055909) list_set_graphic_pane_vc_g2_ParamLimits

0x700d,	// (0x00055909) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005e2f4) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005e2f4) list_set_graphic_pane_vc_g

0x7019,	// (0x00055915) text_primary_small_cp13_vc_ParamLimits

0x7019,	// (0x00055915) text_primary_small_cp13_vc

0x7031,	// (0x0005592d) list_set_graphic_pane_vc_ParamLimits

0x7031,	// (0x0005592d) list_set_graphic_pane_vc

0x371c,	// (0x00052018) input_focus_pane_cp2_vc

0x3712,	// (0x0005200e) setting_code_pane_vc_g1

0x3847,	// (0x00052143) setting_code_pane_vc_t1

0x7043,	// (0x0005593f) set_text_pane_vc_t1_ParamLimits

0x7043,	// (0x0005593f) set_text_pane_vc_t1

0x371c,	// (0x00052018) input_focus_pane_cp1_vc

0x705f,	// (0x0005595b) list_set_text_pane_vc

0x3712,	// (0x0005200e) setting_text_pane_vc_g1

0x371c,	// (0x00052018) bg_set_opt_pane_cp2_vc

0x383e,	// (0x0005213a) setting_slider_graphic_pane_vc_g1

0x7069,	// (0x00055965) setting_slider_graphic_pane_vc_t1

0x7079,	// (0x00055975) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005e2f9) setting_slider_graphic_pane_vc_t

0x7089,	// (0x00055985) slider_set_pane_cp_vc

0x7091,	// (0x0005598d) slider_set_pane_vc_g1

0x709a,	// (0x00055996) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005e2fe) slider_set_pane_vc_g

0x40c3,	// (0x000529bf) set_opt_bg_pane_g1_copy1

0x40cb,	// (0x000529c7) set_opt_bg_pane_g2_copy1

0x70c6,	// (0x000559c2) set_opt_bg_pane_g3_copy1

0x40db,	// (0x000529d7) set_opt_bg_pane_g4_copy1

0x40e3,	// (0x000529df) set_opt_bg_pane_g5_copy1

0x40eb,	// (0x000529e7) set_opt_bg_pane_g6_copy1

0x70d0,	// (0x000559cc) set_opt_bg_pane_g7_copy1

0x70d8,	// (0x000559d4) set_opt_bg_pane_g8_copy1

0x70e2,	// (0x000559de) set_opt_bg_pane_g9_copy1

0x371c,	// (0x00052018) bg_set_opt_pane_cp_vc

0x70ec,	// (0x000559e8) setting_slider_pane_vc_t1

0x70fb,	// (0x000559f7) setting_slider_pane_vc_t2

0x710b,	// (0x00055a07) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005e30d) setting_slider_pane_vc_t

0x711b,	// (0x00055a17) slider_set_pane_vc

0x19ae,	// (0x000502aa) volume_set_pane_vc_g1

0x19b7,	// (0x000502b3) volume_set_pane_vc_g2

0x19c0,	// (0x000502bc) volume_set_pane_vc_g3

0x19c9,	// (0x000502c5) volume_set_pane_vc_g4

0x19d2,	// (0x000502ce) volume_set_pane_vc_g5

0x19db,	// (0x000502d7) volume_set_pane_vc_g6

0x19e4,	// (0x000502e0) volume_set_pane_vc_g7

0x19ed,	// (0x000502e9) volume_set_pane_vc_g8

0x19f6,	// (0x000502f2) volume_set_pane_vc_g9

0x19ff,	// (0x000502fb) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005e1b2) volume_set_pane_vc_g

0x7123,	// (0x00055a1f) volume_set_pane_vc

0x712b,	// (0x00055a27) button_value_adjust_pane_cp1_vc

0x7135,	// (0x00055a31) list_highlight_pane_cp2_vc

0x713e,	// (0x00055a3a) list_set_pane_vc_ParamLimits

0x713e,	// (0x00055a3a) list_set_pane_vc

0x719c,	// (0x00055a98) main_pane_set_vc_t1_ParamLimits

0x719c,	// (0x00055a98) main_pane_set_vc_t1

0x71b1,	// (0x00055aad) main_pane_set_vc_t2_ParamLimits

0x71b1,	// (0x00055aad) main_pane_set_vc_t2

0x71c3,	// (0x00055abf) main_pane_set_vc_t3_ParamLimits

0x71c3,	// (0x00055abf) main_pane_set_vc_t3

0x71d7,	// (0x00055ad3) main_pane_set_vc_t4_ParamLimits

0x71d7,	// (0x00055ad3) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005e314) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005e314) main_pane_set_vc_t

0x71eb,	// (0x00055ae7) setting_code_pane_vc_ParamLimits

0x71eb,	// (0x00055ae7) setting_code_pane_vc

0x71fc,	// (0x00055af8) setting_slider_graphic_pane_vc

0x71fc,	// (0x00055af8) setting_slider_pane_vc

0x71fc,	// (0x00055af8) setting_text_pane_vc

0x71fc,	// (0x00055af8) setting_volume_pane_vc

0x7206,	// (0x00055b02) scroll_pane_cp121_vc

0x4051,	// (0x0005294d) set_content_pane_vc

0x720e,	// (0x00055b0a) button_value_adjust_pane_g1

0x7217,	// (0x00055b13) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005e369) button_value_adjust_pane_g

0x7220,	// (0x00055b1c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7220,	// (0x00055b1c) form_field_slider_wide_pane_vc_t1

0x7234,	// (0x00055b30) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7234,	// (0x00055b30) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005e36e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005e36e) form_field_slider_wide_pane_vc_t

0x3a77,	// (0x00052373) input_focus_pane_cp10_vc_ParamLimits

0x3a77,	// (0x00052373) input_focus_pane_cp10_vc

0x7262,	// (0x00055b5e) slider_cont_pane_cp1_vc_ParamLimits

0x7262,	// (0x00055b5e) slider_cont_pane_cp1_vc

0x7274,	// (0x00055b70) slider_form_pane_g1_cp2

0x709a,	// (0x00055996) slider_form_pane_g2_cp2

0x72a1,	// (0x00055b9d) form_field_slider_pane_vc_t3

0x72af,	// (0x00055bab) form_field_slider_pane_vc_t4

0x72bd,	// (0x00055bb9) slider_form_pane_vc_ParamLimits

0x72bd,	// (0x00055bb9) slider_form_pane_vc

0x72ca,	// (0x00055bc6) form_field_slider_pane_vc_t1_ParamLimits

0x72ca,	// (0x00055bc6) form_field_slider_pane_vc_t1

0x7234,	// (0x00055b30) form_field_slider_pane_vc_t2_ParamLimits

0x7234,	// (0x00055b30) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005e380) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005e380) form_field_slider_pane_vc_t

0x3a77,	// (0x00052373) input_focus_pane_cp9_vc_ParamLimits

0x3a77,	// (0x00052373) input_focus_pane_cp9_vc

0x72e6,	// (0x00055be2) slider_cont_pane_vc_ParamLimits

0x72e6,	// (0x00055be2) slider_cont_pane_vc

0x72fa,	// (0x00055bf6) list_form_graphic_pane_cp_vc_ParamLimits

0x72fa,	// (0x00055bf6) list_form_graphic_pane_cp_vc

0x5644,	// (0x00053f40) form_field_popup_wide_pane_vc_g1

0x730f,	// (0x00055c0b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x730f,	// (0x00055c0b) form_field_popup_wide_pane_vc_t1

0x4077,	// (0x00052973) input_focus_pane_cp8_vc_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_cp8_vc

0x7354,	// (0x00055c50) list_form_wide_pane_vc_ParamLimits

0x7354,	// (0x00055c50) list_form_wide_pane_vc

0x7360,	// (0x00055c5c) list_form_graphic_pane_vc_g1

0x7368,	// (0x00055c64) list_form_graphic_pane_vc_t1_ParamLimits

0x7368,	// (0x00055c64) list_form_graphic_pane_vc_t1

0x37fc,	// (0x000520f8) list_highlight_pane_cp5_vc_ParamLimits

0x37fc,	// (0x000520f8) list_highlight_pane_cp5_vc

0x7384,	// (0x00055c80) list_form_graphic_pane_vc_ParamLimits

0x7384,	// (0x00055c80) list_form_graphic_pane_vc

0x5644,	// (0x00053f40) form_field_popup_pane_vc_g1

0x739a,	// (0x00055c96) form_field_popup_pane_vc_t1_ParamLimits

0x739a,	// (0x00055c96) form_field_popup_pane_vc_t1

0x4077,	// (0x00052973) input_focus_pane_cp7_vc_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_cp7_vc

0x73b1,	// (0x00055cad) list_form_pane_vc_ParamLimits

0x73b1,	// (0x00055cad) list_form_pane_vc

0x73bd,	// (0x00055cb9) data_form_pane_vc_t1_ParamLimits

0x73bd,	// (0x00055cb9) data_form_pane_vc_t1

0x40c3,	// (0x000529bf) input_focus_pane_vc_g1

0x40cb,	// (0x000529c7) input_focus_pane_vc_g2

0x40d3,	// (0x000529cf) input_focus_pane_vc_g3

0x40db,	// (0x000529d7) input_focus_pane_vc_g4

0x40e3,	// (0x000529df) input_focus_pane_vc_g5

0x40eb,	// (0x000529e7) input_focus_pane_vc_g6

0x40f3,	// (0x000529ef) input_focus_pane_vc_g7

0x40fb,	// (0x000529f7) input_focus_pane_vc_g8

0x4103,	// (0x000529ff) input_focus_pane_vc_g9

0x3712,	// (0x0005200e) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005df8d) input_focus_pane_vc_g

0x5638,	// (0x00053f34) data_form_pane_vc_ParamLimits

0x5638,	// (0x00053f34) data_form_pane_vc

0x5644,	// (0x00053f40) form_field_data_pane_vc_g1

0x73d8,	// (0x00055cd4) form_field_data_pane_vc_t1_ParamLimits

0x73d8,	// (0x00055cd4) form_field_data_pane_vc_t1

0x4077,	// (0x00052973) input_focus_pane_vc_ParamLimits

0x4077,	// (0x00052973) input_focus_pane_vc

0x73f2,	// (0x00055cee) button_value_adjust_pane_cp3_vc

0x73fa,	// (0x00055cf6) button_value_adjust_pane_cp5_vc

0x7402,	// (0x00055cfe) form_field_data_pane_vc_ParamLimits

0x7402,	// (0x00055cfe) form_field_data_pane_vc

0x7419,	// (0x00055d15) form_field_data_pane_vc_cp2

0x7421,	// (0x00055d1d) form_field_data_wide_pane_vc_ParamLimits

0x7421,	// (0x00055d1d) form_field_data_wide_pane_vc

0x7437,	// (0x00055d33) form_field_data_wide_pane_vc_cp2

0x743f,	// (0x00055d3b) form_field_popup_pane_vc_ParamLimits

0x743f,	// (0x00055d3b) form_field_popup_pane_vc

0x7456,	// (0x00055d52) form_field_popup_wide_pane_vc_ParamLimits

0x7456,	// (0x00055d52) form_field_popup_wide_pane_vc

0x746c,	// (0x00055d68) form_field_slider_pane_vc_ParamLimits

0x746c,	// (0x00055d68) form_field_slider_pane_vc

0x747f,	// (0x00055d7b) form_field_slider_wide_pane_vc_ParamLimits

0x747f,	// (0x00055d7b) form_field_slider_wide_pane_vc

0xe0b6,	// (0x0005c9b2) grid_touch_1_pane_ParamLimits

0xe0b6,	// (0x0005c9b2) grid_touch_1_pane

0xe0ca,	// (0x0005c9c6) grid_touch_2_pane_ParamLimits

0xe0ca,	// (0x0005c9c6) grid_touch_2_pane

0x754d,	// (0x00055e49) touch_pane_g1_ParamLimits

0x754d,	// (0x00055e49) touch_pane_g1

0x74b6,	// (0x00055db2) cell_app_pane_cp_wide_ParamLimits

0x74b6,	// (0x00055db2) cell_app_pane_cp_wide

0x74c7,	// (0x00055dc3) grid_popup_fast_wide_pane_ParamLimits

0x74c7,	// (0x00055dc3) grid_popup_fast_wide_pane

0x74db,	// (0x00055dd7) scroll_pane_cp19_ParamLimits

0x74db,	// (0x00055dd7) scroll_pane_cp19

0x371c,	// (0x00052018) bg_popup_window_pane_cp20

0x74ef,	// (0x00055deb) listscroll_popup_fast_wide_pane

0x422b,	// (0x00052b27) grid_indicator_nsta_pane

0x74f7,	// (0x00055df3) clock_nsta_pane_g1

0x7500,	// (0x00055dfc) clock_nsta_pane_t1

0xe0f4,	// (0x0005c9f0) cell_indicator_nsta_pane_ParamLimits

0xe0f4,	// (0x0005c9f0) cell_indicator_nsta_pane

0x754d,	// (0x00055e49) cell_indicator_nsta_pane_g1

0xe10b,	// (0x0005ca07) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005e391) cell_indicator_nsta_pane_g

0x7568,	// (0x00055e64) clock_nsta_pane_cp

0x7570,	// (0x00055e6c) indicator_nsta_pane_cp

0x7578,	// (0x00055e74) nsta_clock_indic_pane_g1

0x38c5,	// (0x000521c1) grid_indicator_pane

0x45fb,	// (0x00052ef7) scroll_pane_cp29

0x0f21,	// (0x0004f81d) indicator_nsta_pane_cp2_ParamLimits

0x0f21,	// (0x0004f81d) indicator_nsta_pane_cp2

0x37fc,	// (0x000520f8) main_apps_wheel_pane

0x584d,	// (0x00054149) form_midp_field_text_pane_ParamLimits

0x5998,	// (0x00054294) scroll_bar_cp050_ParamLimits

0x75c8,	// (0x00055ec4) cell_indicator_pane_ParamLimits

0x75c8,	// (0x00055ec4) cell_indicator_pane

0x75df,	// (0x00055edb) cell_indicator_pane_g1

0xe118,	// (0x0005ca14) grid_wheel_folder_pane_ParamLimits

0xe118,	// (0x0005ca14) grid_wheel_folder_pane

0xe126,	// (0x0005ca22) list_wheel_apps_pane_ParamLimits

0xe126,	// (0x0005ca22) list_wheel_apps_pane

0xe134,	// (0x0005ca30) main_apps_wheel_pane_g1_ParamLimits

0xe134,	// (0x0005ca30) main_apps_wheel_pane_g1

0xe140,	// (0x0005ca3c) main_apps_wheel_pane_g2_ParamLimits

0xe140,	// (0x0005ca3c) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005e3ad) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005e3ad) main_apps_wheel_pane_g

0xe14e,	// (0x0005ca4a) main_apps_wheel_pane_t1_ParamLimits

0xe14e,	// (0x0005ca4a) main_apps_wheel_pane_t1

0xe162,	// (0x0005ca5e) list_wheel_apps_pane_g1

0xe16a,	// (0x0005ca66) list_wheel_apps_pane_g2

0xe172,	// (0x0005ca6e) list_wheel_apps_pane_g3

0xe17a,	// (0x0005ca76) list_wheel_apps_pane_g4

0xe184,	// (0x0005ca80) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005e3b2) list_wheel_apps_pane_g

0x4b7e,	// (0x0005347a) navi_icon_text_pane

0xd6fa,	// (0x0005bff6) aid_fill_nsta

0x76a4,	// (0x00055fa0) navi_icon_text_pane_g1

0x76b0,	// (0x00055fac) navi_icon_text_pane_t1

0x4a11,	// (0x0005330d) list_set_graphic_pane_t1_ParamLimits

0x4a11,	// (0x0005330d) list_set_graphic_pane_t1

0x60ef,	// (0x000549eb) popup_midp_note_alarm_window_t6_ParamLimits

0x60ef,	// (0x000549eb) popup_midp_note_alarm_window_t6

0x6101,	// (0x000549fd) popup_midp_note_alarm_window_t7_ParamLimits

0x6101,	// (0x000549fd) popup_midp_note_alarm_window_t7

0x6113,	// (0x00054a0f) popup_midp_note_alarm_window_t8_ParamLimits

0x6113,	// (0x00054a0f) popup_midp_note_alarm_window_t8

0x6125,	// (0x00054a21) popup_midp_note_alarm_window_t9_ParamLimits

0x6125,	// (0x00054a21) popup_midp_note_alarm_window_t9

0x6137,	// (0x00054a33) popup_midp_note_alarm_window_t10_ParamLimits

0x6137,	// (0x00054a33) popup_midp_note_alarm_window_t10

0x6149,	// (0x00054a45) popup_midp_note_alarm_window_t11_ParamLimits

0x6149,	// (0x00054a45) popup_midp_note_alarm_window_t11

0x615b,	// (0x00054a57) scroll_pane_cp17_ParamLimits

0x615b,	// (0x00054a57) scroll_pane_cp17

0x19ae,	// (0x000502aa) volume_small_pane_cp_g1

0x1ca3,	// (0x0005059f) volume_small_pane_cp_g2

0x1cac,	// (0x000505a8) volume_small_pane_cp_g3

0x1cb5,	// (0x000505b1) volume_small_pane_cp_g4

0x1cbe,	// (0x000505ba) volume_small_pane_cp_g5

0x1cc7,	// (0x000505c3) volume_small_pane_cp_g6

0x1cd0,	// (0x000505cc) volume_small_pane_cp_g7

0x1cd9,	// (0x000505d5) volume_small_pane_cp_g8

0x1ce2,	// (0x000505de) volume_small_pane_cp_g9

0x1ceb,	// (0x000505e7) volume_small_pane_cp_g10

0x4ddb,	// (0x000536d7) midp_ticker_pane_g1_ParamLimits

0x4de7,	// (0x000536e3) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005e059) midp_ticker_pane_g_ParamLimits

0x4df3,	// (0x000536ef) midp_ticker_pane_t1_ParamLimits

0xd71e,	// (0x0005c01a) aid_fill_nsta_2

0x5984,	// (0x00054280) list_form2_midp_pane

0x6ab4,	// (0x000553b0) midp_editing_number_pane_ParamLimits

0x6ac3,	// (0x000553bf) midp_ticker_pane_ParamLimits

0x76c2,	// (0x00055fbe) form2_midp_field_pane

0x76e6,	// (0x00055fe2) scroll_pane_cp51

0x7706,	// (0x00056002) form2_midp_button_pane_ParamLimits

0x7706,	// (0x00056002) form2_midp_button_pane

0x7718,	// (0x00056014) form2_midp_content_pane_ParamLimits

0x7718,	// (0x00056014) form2_midp_content_pane

0x7732,	// (0x0005602e) form2_midp_field_choice_group_pane

0x773a,	// (0x00056036) form2_midp_field_pane_g1

0x7742,	// (0x0005603e) form2_midp_field_pane_g2

0x774a,	// (0x00056046) form2_midp_field_pane_g3

0x7752,	// (0x0005604e) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005e3d7) form2_midp_field_pane_g

0x775a,	// (0x00056056) form2_midp_gauge_slider_pane

0x7762,	// (0x0005605e) form2_midp_gauge_wait_pane

0x776a,	// (0x00056066) form2_midp_image_pane_ParamLimits

0x776a,	// (0x00056066) form2_midp_image_pane

0x7785,	// (0x00056081) form2_midp_label_pane_ParamLimits

0x7785,	// (0x00056081) form2_midp_label_pane

0xe1b7,	// (0x0005cab3) form2_midp_label_pane_cp_ParamLimits

0xe1b7,	// (0x0005cab3) form2_midp_label_pane_cp

0x77bf,	// (0x000560bb) form2_midp_string_pane_ParamLimits

0x77bf,	// (0x000560bb) form2_midp_string_pane

0xc89f,	// (0x0005b19b) form2_midp_text_pane_ParamLimits

0xc89f,	// (0x0005b19b) form2_midp_text_pane

0x77d1,	// (0x000560cd) form2_midp_time_pane

0x77e1,	// (0x000560dd) input_focus_pane_cp51_ParamLimits

0x77e1,	// (0x000560dd) input_focus_pane_cp51

0x77f9,	// (0x000560f5) form2_midp_label_pane_t1_ParamLimits

0x77f9,	// (0x000560f5) form2_midp_label_pane_t1

0xc8b8,	// (0x0005b1b4) form2_mdip_text_pane_t1_ParamLimits

0xc8b8,	// (0x0005b1b4) form2_mdip_text_pane_t1

0x335c,	// (0x00051c58) form2_midp_time_pane_t1

0x7842,	// (0x0005613e) form2_midp_gauge_slider_pane_t1

0xe1d6,	// (0x0005cad2) form2_midp_gauge_slider_pane_t2

0xe1e8,	// (0x0005cae4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005e3e0) form2_midp_gauge_slider_pane_t

0x7878,	// (0x00056174) form2_midp_slider_pane

0x7884,	// (0x00056180) form2_midp_gauge_wait_pane_t1

0x7892,	// (0x0005618e) form2_midp_wait_pane_ParamLimits

0x7892,	// (0x0005618e) form2_midp_wait_pane

0xe1fa,	// (0x0005caf6) list_single_2graphic_pane_cp4_ParamLimits

0xe1fa,	// (0x0005caf6) list_single_2graphic_pane_cp4

0xdbd4,	// (0x0005c4d0) list_single_midp_graphic_pane_cp_ParamLimits

0xdbd4,	// (0x0005c4d0) list_single_midp_graphic_pane_cp

0x371c,	// (0x00052018) list_highlight_pane_cp20

0x78e1,	// (0x000561dd) list_single_2graphic_pane_g1_cp4

0x78e9,	// (0x000561e5) list_single_2graphic_pane_g2_cp4

0x78f1,	// (0x000561ed) list_single_2graphic_pane_t1_cp4

0x37fc,	// (0x000520f8) list_highlight_pane_cp21

0x7900,	// (0x000561fc) list_single_midp_graphic_pane_g4_cp

0x790f,	// (0x0005620b) list_single_midp_graphic_pane_t1_cp

0xe20e,	// (0x0005cb0a) form2_mdip_string_pane_t1_ParamLimits

0xe20e,	// (0x0005cb0a) form2_mdip_string_pane_t1

0x371c,	// (0x00052018) bg_wml_button_pane_cp2

0x3712,	// (0x0005200e) form2_midp_image_pane_g1

0x2d40,	// (0x0005163c) list_double_large_graphic_pane_g5_ParamLimits

0x2d40,	// (0x0005163c) list_double_large_graphic_pane_g5

0xd575,	// (0x0005be71) midp_form_pane_ParamLimits

0x37fc,	// (0x000520f8) main_apps_wheel_pane_ParamLimits

0xc52a,	// (0x0005ae26) popup_preview_window_ParamLimits

0xc52a,	// (0x0005ae26) popup_preview_window

0x17cb,	// (0x000500c7) popup_touch_info_window_ParamLimits

0x17cb,	// (0x000500c7) popup_touch_info_window

0x17e9,	// (0x000500e5) popup_touch_menu_window_ParamLimits

0x17e9,	// (0x000500e5) popup_touch_menu_window

0x3708,	// (0x00052004) bg_popup_sub_pane_cp6

0x7a0e,	// (0x0005630a) list_touch_menu_pane

0x7a16,	// (0x00056312) list_single_touch_menu_pane_ParamLimits

0x7a16,	// (0x00056312) list_single_touch_menu_pane

0x7a2c,	// (0x00056328) list_single_touch_menu_pane_t1

0x37fc,	// (0x000520f8) bg_popup_sub_pane_cp7_ParamLimits

0x37fc,	// (0x000520f8) bg_popup_sub_pane_cp7

0x7a3a,	// (0x00056336) heading_sub_pane

0x7a42,	// (0x0005633e) list_touch_info_pane_ParamLimits

0x7a42,	// (0x0005633e) list_touch_info_pane

0x7a51,	// (0x0005634d) list_single_touch_info_pane_ParamLimits

0x7a51,	// (0x0005634d) list_single_touch_info_pane

0x7a63,	// (0x0005635f) list_single_touch_info_pane_t1

0x7a71,	// (0x0005636d) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005e3ee) list_single_touch_info_pane_t

0x4cfe,	// (0x000535fa) bg_popup_heading_pane_cp

0x7a7f,	// (0x0005637b) heading_sub_pane_t1

0x55d2,	// (0x00053ece) bg_popup_preview_window_pane_cp_ParamLimits

0x55d2,	// (0x00053ece) bg_popup_preview_window_pane_cp

0x7a3a,	// (0x00056336) heading_preview_pane

0x7a42,	// (0x0005633e) list_preview_pane_ParamLimits

0x7a42,	// (0x0005633e) list_preview_pane

0x7a8d,	// (0x00056389) popup_preview_window_g1

0x7a51,	// (0x0005634d) list_single_preview_pane_ParamLimits

0x7a51,	// (0x0005634d) list_single_preview_pane

0x7a95,	// (0x00056391) list_single_preview_pane_g1

0x7a9d,	// (0x00056399) list_single_preview_pane_t1

0x7a63,	// (0x0005635f) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005e3f3) list_single_preview_pane_t

0x7aab,	// (0x000563a7) bg_popup_heading_pane_cp2_ParamLimits

0x7aab,	// (0x000563a7) bg_popup_heading_pane_cp2

0x7ac1,	// (0x000563bd) heading_preview_pane_g1

0x7ac9,	// (0x000563c5) heading_preview_pane_t1_ParamLimits

0x7ac9,	// (0x000563c5) heading_preview_pane_t1

0x38e8,	// (0x000521e4) soft_indicator_pane_t1_ParamLimits

0x3fde,	// (0x000528da) scroll_pane_ParamLimits

0x44f4,	// (0x00052df0) scroll_sc2_left_pane

0x44fd,	// (0x00052df9) scroll_sc2_right_pane

0x451c,	// (0x00052e18) scroll_bg_pane_g1_ParamLimits

0x4531,	// (0x00052e2d) scroll_bg_pane_g2_ParamLimits

0x4549,	// (0x00052e45) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005dfe4) scroll_bg_pane_g_ParamLimits

0x451c,	// (0x00052e18) scroll_handle_pane_g1_ParamLimits

0x456b,	// (0x00052e67) scroll_handle_pane_g2_ParamLimits

0x4549,	// (0x00052e45) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005dfeb) scroll_handle_pane_g_ParamLimits

0x1291,	// (0x0004fb8d) popup_choice_list_window_ParamLimits

0x1291,	// (0x0004fb8d) popup_choice_list_window

0x54a8,	// (0x00053da4) choice_list_pane

0x552a,	// (0x00053e26) cell_toolbar_pane_t1

0x5552,	// (0x00053e4e) toolbar_button_pane_ParamLimits

0x6615,	// (0x00054f11) ai_gene_pane_1_t2_ParamLimits

0x6615,	// (0x00054f11) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005e20e) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005e20e) ai_gene_pane_1_t

0x7ae6,	// (0x000563e2) scroll_sc2_left_pane_g1

0x7ae6,	// (0x000563e2) scroll_sc2_right_pane_g1

0x5048,	// (0x00053944) bg_popup_sub_pane_cp10

0x7af0,	// (0x000563ec) list_choice_list_pane

0x7b09,	// (0x00056405) list_single_choice_list_pane_ParamLimits

0x7b09,	// (0x00056405) list_single_choice_list_pane

0x7b1c,	// (0x00056418) list_single_choice_list_pane_g1

0x41fc,	// (0x00052af8) list_single_choice_list_pane_t1_ParamLimits

0x41fc,	// (0x00052af8) list_single_choice_list_pane_t1

0x7b24,	// (0x00056420) choice_list_pane_g1

0x7b2c,	// (0x00056428) choice_list_pane_t1

0x3708,	// (0x00052004) input_focus_pane_cp11

0x43d3,	// (0x00052ccf) title_pane_stacon_g2_ParamLimits

0x43d3,	// (0x00052ccf) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005dfca) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005dfca) title_pane_stacon_g

0x4cfe,	// (0x000535fa) cursor_press_pane

0xc1d7,	// (0x0005aad3) popup_fep_hwr_window_ParamLimits

0xc1d7,	// (0x0005aad3) popup_fep_hwr_window

0x13b7,	// (0x0004fcb3) popup_fep_vkb_window_ParamLimits

0x13b7,	// (0x0004fcb3) popup_fep_vkb_window

0x7b3a,	// (0x00056436) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005e41c) fep_vkb_side_pane_g_ParamLimits

0x1d2d,	// (0x00050629) fep_hwr_candidate_pane_ParamLimits

0x1d2d,	// (0x00050629) fep_hwr_candidate_pane

0x1d57,	// (0x00050653) fep_hwr_side_pane_ParamLimits

0x1d57,	// (0x00050653) fep_hwr_side_pane

0x1d77,	// (0x00050673) fep_hwr_top_pane_ParamLimits

0x1d77,	// (0x00050673) fep_hwr_top_pane

0x1d8f,	// (0x0005068b) fep_hwr_write_pane_ParamLimits

0x1d8f,	// (0x0005068b) fep_hwr_write_pane

0xfb20,	// (0x0005e41c) fep_vkb_side_pane_g

0x7b42,	// (0x0005643e) fep_hwr_top_pane_g1

0x7b54,	// (0x00056450) fep_hwr_top_pane_g2

0x1dc9,	// (0x000506c5) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005e3f8) fep_hwr_top_pane_g

0x1dde,	// (0x000506da) fep_hwr_top_text_pane

0x46eb,	// (0x00052fe7) fep_hwr_top_text_pane_g1

0x7b8a,	// (0x00056486) fep_hwr_top_text_pane_t1

0x1ed4,	// (0x000507d0) fep_hwr_candidate_pane_g1

0x7de9,	// (0x000566e5) fep_vkb_keypad_pane_g3_ParamLimits

0x7de9,	// (0x000566e5) fep_vkb_keypad_pane_g3

0x7e11,	// (0x0005670d) fep_vkb_keypad_pane_g4_ParamLimits

0x7e11,	// (0x0005670d) fep_vkb_keypad_pane_g4

0x7e80,	// (0x0005677c) fep_vkb_bottom_pane_g2_ParamLimits

0x7e80,	// (0x0005677c) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005e423) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005e423) fep_vkb_bottom_pane_g

0x7ae6,	// (0x000563e2) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005e42d) cell_vkb_side_pane_g

0x7f0b,	// (0x00056807) cell_vkb_side_pane_t1

0x7f19,	// (0x00056815) cell_vkb_side_pane_t1_copy1

0x7ae6,	// (0x000563e2) bg_fep_vkb_candidate_pane_g2

0x8045,	// (0x00056941) cell_vkb_candidate_pane_ParamLimits

0x7b98,	// (0x00056494) aid_size_cell_vkb_ParamLimits

0x7b98,	// (0x00056494) aid_size_cell_vkb

0x8045,	// (0x00056941) cell_vkb_candidate_pane

0x1efb,	// (0x000507f7) bg_popup_fep_shadow_pane_g1

0xe28f,	// (0x0005cb8b) fep_vkb_bottom_pane_ParamLimits

0xe28f,	// (0x0005cb8b) fep_vkb_bottom_pane

0x7c5c,	// (0x00056558) fep_vkb_candidate_pane_ParamLimits

0x7c5c,	// (0x00056558) fep_vkb_candidate_pane

0xe2b4,	// (0x0005cbb0) fep_vkb_keypad_pane_ParamLimits

0xe2b4,	// (0x0005cbb0) fep_vkb_keypad_pane

0xe318,	// (0x0005cc14) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0005cc14) fep_vkb_side_pane

0xe354,	// (0x0005cc50) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0005cc50) fep_vkb_top_pane

0x7d42,	// (0x0005663e) fep_vkb_top_pane_g1_ParamLimits

0x7d42,	// (0x0005663e) fep_vkb_top_pane_g1

0x7d51,	// (0x0005664d) fep_vkb_top_pane_g2_ParamLimits

0x7d51,	// (0x0005664d) fep_vkb_top_pane_g2

0x7d60,	// (0x0005665c) fep_vkb_top_pane_g3_ParamLimits

0x7d60,	// (0x0005665c) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005e413) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005e413) fep_vkb_top_pane_g

0x7d7e,	// (0x0005667a) fep_vkb_top_text_pane_ParamLimits

0x7d7e,	// (0x0005667a) fep_vkb_top_text_pane

0xe390,	// (0x0005cc8c) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0005cc8c) fep_vkb_side_pane_g1

0x7dd8,	// (0x000566d4) grid_vkb_side_pane_ParamLimits

0x7dd8,	// (0x000566d4) grid_vkb_side_pane

0x1f03,	// (0x000507ff) bg_popup_fep_shadow_pane_g2

0x1f0c,	// (0x00050808) bg_popup_fep_shadow_pane_g3

0x1f14,	// (0x00050810) bg_popup_fep_shadow_pane_g4

0x1f1d,	// (0x00050819) bg_popup_fep_shadow_pane_g5

0x1f27,	// (0x00050823) bg_popup_fep_shadow_pane_g6

0x1f2f,	// (0x0005082b) bg_popup_fep_shadow_pane_g7

0x40db,	// (0x000529d7) bg_popup_fep_shadow_pane_g8

0x7e2f,	// (0x0005672b) grid_vkb_keypad_number_pane_ParamLimits

0x7e2f,	// (0x0005672b) grid_vkb_keypad_number_pane

0x7e3f,	// (0x0005673b) grid_vkb_keypad_pane_ParamLimits

0x7e3f,	// (0x0005673b) grid_vkb_keypad_pane

0x7e65,	// (0x00056761) fep_vkb_bottom_pane_g1_ParamLimits

0x7e65,	// (0x00056761) fep_vkb_bottom_pane_g1

0x7e8e,	// (0x0005678a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e8e,	// (0x0005678a) grid_vkb_keypad_bottom_left_pane

0x7ea3,	// (0x0005679f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ea3,	// (0x0005679f) grid_vkb_keypad_bottom_right_pane

0x7eb8,	// (0x000567b4) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0005ccd3) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0005cce5) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0005cce5) cell_vkb_side_pane

0x7ae6,	// (0x000563e2) cell_vkb_side_pane_g1

0x7f27,	// (0x00056823) cell_vkb_keypad_pane_ParamLimits

0x7f27,	// (0x00056823) cell_vkb_keypad_pane

0x7f9c,	// (0x00056898) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005e440) bg_popup_fep_shadow_pane_g

0x1f41,	// (0x0005083d) cell_hwr_side_pane_g1

0x1f41,	// (0x0005083d) cell_hwr_side_pane_g2

0x7fa6,	// (0x000568a2) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0005ccfb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0005ccfb) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0005cd10) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0005cd10) cell_vkb_keypad_bottom_right_pane

0x7ae6,	// (0x000563e2) cell_vkb_keypad_bottom_left_pane_g1

0x7ae6,	// (0x000563e2) cell_vkb_keypad_bottom_right_pane_g1

0x800a,	// (0x00056906) cell_vkb_keypad_number_pane_ParamLimits

0x800a,	// (0x00056906) cell_vkb_keypad_number_pane

0x8029,	// (0x00056925) cell_vkb_keypad_number_pane_g1

0x8033,	// (0x0005692f) cell_vkb_keypad_number_pane_g2

0x803c,	// (0x00056938) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005e432) cell_vkb_keypad_number_pane_g

0x7fa6,	// (0x000568a2) cell_vkb_keypad_number_pane_t1

0x8060,	// (0x0005695c) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005e453) cell_hwr_side_pane_g

0x8079,	// (0x00056975) cell_hwr_side_pane_t1

0x1f4b,	// (0x00050847) cell_hwr_side_pane_t1_copy1

0x1f59,	// (0x00050855) cell_hwr_candidate_pane_g1

0x1f88,	// (0x00050884) cell_hwr_candidate_pane_t1

0x7ae6,	// (0x000563e2) cell_vkb_candidate_pane_g2

0x80bd,	// (0x000569b9) cell_vkb_candidate_pane_t1

0x1cf4,	// (0x000505f0) bg_popup_fep_shadow_pane_ParamLimits

0x1cf4,	// (0x000505f0) bg_popup_fep_shadow_pane

0x1da9,	// (0x000506a5) bg_fep_hwr_top_pane_g4

0x7b66,	// (0x00056462) bg_hwr_side_pane_g1_ParamLimits

0x7b66,	// (0x00056462) bg_hwr_side_pane_g1

0xc8e9,	// (0x0005b1e5) cell_hwr_side_pane_ParamLimits

0xc8e9,	// (0x0005b1e5) cell_hwr_side_pane

0x1e55,	// (0x00050751) fep_hwr_write_pane_g1_ParamLimits

0x1e55,	// (0x00050751) fep_hwr_write_pane_g1

0x1e62,	// (0x0005075e) fep_hwr_write_pane_g2_ParamLimits

0x1e62,	// (0x0005075e) fep_hwr_write_pane_g2

0x1e6f,	// (0x0005076b) fep_hwr_write_pane_g3_ParamLimits

0x1e6f,	// (0x0005076b) fep_hwr_write_pane_g3

0xc909,	// (0x0005b205) fep_hwr_write_pane_g4_ParamLimits

0xc909,	// (0x0005b205) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005e3ff) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005e3ff) fep_hwr_write_pane_g

0x1da9,	// (0x000506a5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1da9,	// (0x000506a5) bg_fep_hwr_candidate_pane_g2

0x1e92,	// (0x0005078e) cell_hwr_candidate_pane_ParamLimits

0x1e92,	// (0x0005078e) cell_hwr_candidate_pane

0x1ed4,	// (0x000507d0) fep_hwr_candidate_pane_g1_ParamLimits

0x7bc6,	// (0x000564c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7bc6,	// (0x000564c2) bg_popup_fep_shadow_pane_cp2

0x7d70,	// (0x0005666c) fep_vkb_top_pane_g4_ParamLimits

0x7d70,	// (0x0005666c) fep_vkb_top_pane_g4

0x7db6,	// (0x000566b2) fep_vkb_side_pane_g2_ParamLimits

0x7db6,	// (0x000566b2) fep_vkb_side_pane_g2

0xbcc7,	// (0x0005a5c3) list_setting_pane_t4_ParamLimits

0xbcc7,	// (0x0005a5c3) list_setting_pane_t4

0xbd61,	// (0x0005a65d) list_setting_number_pane_t5_ParamLimits

0xbd61,	// (0x0005a65d) list_setting_number_pane_t5

0x4722,	// (0x0005301e) list_double_heading_pane_cp2_ParamLimits

0x4722,	// (0x0005301e) list_double_heading_pane_cp2

0x4012,	// (0x0005290e) list_double_heading_pane_g1_cp2_ParamLimits

0x4012,	// (0x0005290e) list_double_heading_pane_g1_cp2

0x4085,	// (0x00052981) list_double_heading_pane_g2_cp2_ParamLimits

0x4085,	// (0x00052981) list_double_heading_pane_g2_cp2

0x80cb,	// (0x000569c7) list_double_heading_pane_t1_cp2_ParamLimits

0x80cb,	// (0x000569c7) list_double_heading_pane_t1_cp2

0x80e1,	// (0x000569dd) list_double_heading_pane_t2_cp2_ParamLimits

0x80e1,	// (0x000569dd) list_double_heading_pane_t2_cp2

0x36f0,	// (0x00051fec) aid_value_unit2

0x0357,	// (0x0004ec53) popup_preview_fixed_window

0x3a85,	// (0x00052381) bg_popup_preview_window_pane_cp02

0x80f3,	// (0x000569ef) list_preview_fixed_pane

0x8139,	// (0x00056a35) list_empty_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_empty_pane_fp

0x8139,	// (0x00056a35) list_single_cale_day_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_single_cale_day_pane_fp

0x8139,	// (0x00056a35) list_single_graphic_heading_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_single_graphic_heading_pane_fp

0x8139,	// (0x00056a35) list_single_graphic_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_single_graphic_pane_fp

0x8139,	// (0x00056a35) list_single_heading_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_single_heading_pane_fp

0x8139,	// (0x00056a35) list_single_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_single_pane_fp

0x814e,	// (0x00056a4a) list_single_pane_fp_g1_ParamLimits

0x814e,	// (0x00056a4a) list_single_pane_fp_g1

0x4012,	// (0x0005290e) list_single_pane_fp_g2_ParamLimits

0x4012,	// (0x0005290e) list_single_pane_fp_g2

0x4085,	// (0x00052981) list_single_pane_fp_g3_ParamLimits

0x4085,	// (0x00052981) list_single_pane_fp_g3

0x815a,	// (0x00056a56) list_single_pane_fp_g4_ParamLimits

0x815a,	// (0x00056a56) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005e466) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005e466) list_single_pane_fp_g

0x336f,	// (0x00051c6b) list_single_pane_fp_t1_ParamLimits

0x336f,	// (0x00051c6b) list_single_pane_fp_t1

0x3386,	// (0x00051c82) list_single_graphic_pane_fp_g1_ParamLimits

0x3386,	// (0x00051c82) list_single_graphic_pane_fp_g1

0x814e,	// (0x00056a4a) list_single_graphic_pane_fp_g2_ParamLimits

0x814e,	// (0x00056a4a) list_single_graphic_pane_fp_g2

0x4012,	// (0x0005290e) list_single_graphic_pane_fp_g3_ParamLimits

0x4012,	// (0x0005290e) list_single_graphic_pane_fp_g3

0x4085,	// (0x00052981) list_single_graphic_pane_fp_g4_ParamLimits

0x4085,	// (0x00052981) list_single_graphic_pane_fp_g4

0x815a,	// (0x00056a56) list_single_graphic_pane_fp_g5_ParamLimits

0x815a,	// (0x00056a56) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e46f) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e46f) list_single_graphic_pane_fp_g

0x3392,	// (0x00051c8e) list_single_graphic_pane_fp_t1_ParamLimits

0x3392,	// (0x00051c8e) list_single_graphic_pane_fp_t1

0x3386,	// (0x00051c82) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3386,	// (0x00051c82) list_single_graphic_heading_pane_fp_g1

0x814e,	// (0x00056a4a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x814e,	// (0x00056a4a) list_single_graphic_heading_pane_fp_g2

0x4012,	// (0x0005290e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4012,	// (0x0005290e) list_single_graphic_heading_pane_fp_g3

0x4085,	// (0x00052981) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4085,	// (0x00052981) list_single_graphic_heading_pane_fp_g4

0x815a,	// (0x00056a56) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x815a,	// (0x00056a56) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e46f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e46f) list_single_graphic_heading_pane_fp_g

0x33a8,	// (0x00051ca4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33a8,	// (0x00051ca4) list_single_graphic_heading_pane_fp_t1

0x33be,	// (0x00051cba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33be,	// (0x00051cba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005e47a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005e47a) list_single_graphic_heading_pane_fp_t

0x33d0,	// (0x00051ccc) list_single_cale_day_pane_fp_g1_ParamLimits

0x33d0,	// (0x00051ccc) list_single_cale_day_pane_fp_g1

0x8166,	// (0x00056a62) list_single_cale_day_pane_fp_g2_ParamLimits

0x8166,	// (0x00056a62) list_single_cale_day_pane_fp_g2

0x3408,	// (0x00051d04) list_single_cale_day_pane_fp_g3_ParamLimits

0x3408,	// (0x00051d04) list_single_cale_day_pane_fp_g3

0x3430,	// (0x00051d2c) list_single_cale_day_pane_fp_g4_ParamLimits

0x3430,	// (0x00051d2c) list_single_cale_day_pane_fp_g4

0x3454,	// (0x00051d50) list_single_cale_day_pane_fp_g5_ParamLimits

0x3454,	// (0x00051d50) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e47f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e47f) list_single_cale_day_pane_fp_g

0x3478,	// (0x00051d74) list_single_cale_day_pane_fp_t1_ParamLimits

0x3478,	// (0x00051d74) list_single_cale_day_pane_fp_t1

0x349e,	// (0x00051d9a) list_single_cale_day_pane_fp_t2_ParamLimits

0x349e,	// (0x00051d9a) list_single_cale_day_pane_fp_t2

0x34b7,	// (0x00051db3) list_single_cale_day_pane_fp_t3_ParamLimits

0x34b7,	// (0x00051db3) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005e48a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005e48a) list_single_cale_day_pane_fp_t

0x814e,	// (0x00056a4a) list_empty_pane_fp_g1_ParamLimits

0x814e,	// (0x00056a4a) list_empty_pane_fp_g1

0x34d0,	// (0x00051dcc) list_empty_pane_fp_t1

0x34de,	// (0x00051dda) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005e491) list_empty_pane_fp_t

0x814e,	// (0x00056a4a) list_single_heading_pane_fp_g1_ParamLimits

0x814e,	// (0x00056a4a) list_single_heading_pane_fp_g1

0x4012,	// (0x0005290e) list_single_heading_pane_fp_g2_ParamLimits

0x4012,	// (0x0005290e) list_single_heading_pane_fp_g2

0x4085,	// (0x00052981) list_single_heading_pane_fp_g3_ParamLimits

0x4085,	// (0x00052981) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005e496) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005e496) list_single_heading_pane_fp_g

0x34ec,	// (0x00051de8) list_single_heading_pane_fp_t1_ParamLimits

0x34ec,	// (0x00051de8) list_single_heading_pane_fp_t1

0x34fe,	// (0x00051dfa) list_single_heading_pane_fp_t2_ParamLimits

0x34fe,	// (0x00051dfa) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005e49d) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005e49d) list_single_heading_pane_fp_t

0x426a,	// (0x00052b66) aid_size_cell_fast

0x39f5,	// (0x000522f1) soft_indicator_pane_cp1_t1

0x42a7,	// (0x00052ba3) cell_app_pane_cp2_ParamLimits

0x42a7,	// (0x00052ba3) cell_app_pane_cp2

0x1d16,	// (0x00050612) fep_hwr_candidate_drop_down_list_pane

0x1eee,	// (0x000507ea) fep_hwr_candidate_pane_g3_ParamLimits

0x1eee,	// (0x000507ea) fep_hwr_candidate_pane_g3

0xeca8,	// (0x0005d5a4) fep_hwr_candidate_pane_g4_ParamLimits

0xeca8,	// (0x0005d5a4) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005e40c) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005e40c) fep_hwr_candidate_pane_g

0x7c4b,	// (0x00056547) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7c4b,	// (0x00056547) fep_vkb_candidate_drop_down_list_pane

0x8068,	// (0x00056964) fep_vkb_candidate_pane_g3

0x8070,	// (0x0005696c) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005e439) fep_vkb_candidate_pane_g

0x1f59,	// (0x00050855) cell_hwr_candidate_pane_g1_ParamLimits

0x1f67,	// (0x00050863) cell_hwr_candidate_pane_g3_ParamLimits

0x1f67,	// (0x00050863) cell_hwr_candidate_pane_g3

0x9741,	// (0x0005803d) cell_hwr_candidate_pane_g4_ParamLimits

0x9741,	// (0x0005803d) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005e458) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005e458) cell_hwr_candidate_pane_g

0x8087,	// (0x00056983) cell_vkb_candidate_pane_g3_ParamLimits

0x8087,	// (0x00056983) cell_vkb_candidate_pane_g3

0x80a2,	// (0x0005699e) cell_vkb_candidate_pane_g4_ParamLimits

0x80a2,	// (0x0005699e) cell_vkb_candidate_pane_g4

0x8172,	// (0x00056a6e) cell_app_pane_cp2_g1_ParamLimits

0x8172,	// (0x00056a6e) cell_app_pane_cp2_g1

0x8190,	// (0x00056a8c) cell_app_pane_cp2_g2_ParamLimits

0x8190,	// (0x00056a8c) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005e4a2) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005e4a2) cell_app_pane_cp2_g

0x819c,	// (0x00056a98) cell_app_pane_cp2_t1_ParamLimits

0x819c,	// (0x00056a98) cell_app_pane_cp2_t1

0x4077,	// (0x00052973) grid_highlight_pane_cp1_ParamLimits

0x4077,	// (0x00052973) grid_highlight_pane_cp1

0x1fa6,	// (0x000508a2) cell_hwr_candidate_pane_cp1_ParamLimits

0x1fa6,	// (0x000508a2) cell_hwr_candidate_pane_cp1

0x1f59,	// (0x00050855) fep_hwr_candidate_drop_down_list_pane_g1

0x1fc5,	// (0x000508c1) fep_hwr_candidate_drop_down_list_pane_g2

0x1fd2,	// (0x000508ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005e4a7) fep_hwr_candidate_drop_down_list_pane_g

0x1fdf,	// (0x000508db) fep_hwr_candidate_drop_down_list_scroll_pane

0x1fe8,	// (0x000508e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1fe8,	// (0x000508e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1ff5,	// (0x000508f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1ff5,	// (0x000508f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2002,	// (0x000508fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2002,	// (0x000508fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x200f,	// (0x0005090b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x200f,	// (0x0005090b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x202a,	// (0x00050926) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x202a,	// (0x00050926) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2045,	// (0x00050941) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2045,	// (0x00050941) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2060,	// (0x0005095c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2060,	// (0x0005095c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x207b,	// (0x00050977) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x207b,	// (0x00050977) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005e4ae) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005e4ae) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x81ae,	// (0x00056aaa) cell_vkb_candidate_pane_cp1_ParamLimits

0x81ae,	// (0x00056aaa) cell_vkb_candidate_pane_cp1

0x7d70,	// (0x0005666c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7d70,	// (0x0005666c) fep_vkb_candidate_drop_down_list_pane_g1

0x81ce,	// (0x00056aca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81ce,	// (0x00056aca) fep_vkb_candidate_drop_down_list_pane_g2

0x81db,	// (0x00056ad7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81db,	// (0x00056ad7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005e4bf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005e4bf) fep_vkb_candidate_drop_down_list_pane_g

0x81e8,	// (0x00056ae4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x81e8,	// (0x00056ae4) fep_vkb_candidate_drop_down_list_scroll_pane

0x81f5,	// (0x00056af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81f5,	// (0x00056af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8202,	// (0x00056afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8202,	// (0x00056afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x820e,	// (0x00056b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x820e,	// (0x00056b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x821a,	// (0x00056b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x821a,	// (0x00056b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x823b,	// (0x00056b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x823b,	// (0x00056b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x825c,	// (0x00056b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x825c,	// (0x00056b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x827d,	// (0x00056b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x827d,	// (0x00056b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x829e,	// (0x00056b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x829e,	// (0x00056b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005e4c6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005e4c6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcffa,	// (0x0005b8f6) title_pane_g1_ParamLimits

0xd00d,	// (0x0005b909) title_pane_g2_ParamLimits

0xf54e,	// (0x0005de4a) title_pane_g_ParamLimits

0x46db,	// (0x00052fd7) aid_call2_pane

0x46e3,	// (0x00052fdf) aid_call_pane

0x46eb,	// (0x00052fe7) popup_clock_analogue_window_g1

0x46eb,	// (0x00052fe7) popup_clock_analogue_window_g2

0x0db4,	// (0x0004f6b0) popup_clock_analogue_window_g3

0x0dbd,	// (0x0004f6b9) popup_clock_analogue_window_g4

0x3712,	// (0x0005200e) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005dff9) popup_clock_analogue_window_g

0x0dc5,	// (0x0004f6c1) popup_clock_analogue_window_t1

0x0dd3,	// (0x0004f6cf) clock_digital_number_pane_ParamLimits

0x0dd3,	// (0x0004f6cf) clock_digital_number_pane

0x0ddf,	// (0x0004f6db) clock_digital_number_pane_cp02_ParamLimits

0x0ddf,	// (0x0004f6db) clock_digital_number_pane_cp02

0x0deb,	// (0x0004f6e7) clock_digital_number_pane_cp03_ParamLimits

0x0deb,	// (0x0004f6e7) clock_digital_number_pane_cp03

0x0df7,	// (0x0004f6f3) clock_digital_number_pane_cp04_ParamLimits

0x0df7,	// (0x0004f6f3) clock_digital_number_pane_cp04

0x0e03,	// (0x0004f6ff) clock_digital_separator_pane_ParamLimits

0x0e03,	// (0x0004f6ff) clock_digital_separator_pane

0x0e0f,	// (0x0004f70b) popup_clock_digital_window_t1_ParamLimits

0x0e0f,	// (0x0004f70b) popup_clock_digital_window_t1

0x3712,	// (0x0005200e) clock_digital_number_pane_g1

0x3712,	// (0x0005200e) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005e004) clock_digital_number_pane_g

0x3712,	// (0x0005200e) clock_digital_separator_pane_g1

0x3712,	// (0x0005200e) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005e004) clock_digital_separator_pane_g

0xd6fa,	// (0x0005bff6) aid_fill_nsta_ParamLimits

0xd830,	// (0x0005c12c) indicator_nsta_pane_ParamLimits

0x5335,	// (0x00053c31) popup_clock_analogue_window

0x5335,	// (0x00053c31) popup_clock_digital_window

0x422b,	// (0x00052b27) grid_indicator_nsta_pane_ParamLimits

0x750e,	// (0x00055e0a) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005e38c) clock_nsta_pane_t

0x0d78,	// (0x0004f674) aid_size_max_handle

0xbf10,	// (0x0005a80c) aid_size_min_handle

0x4cfe,	// (0x000535fa) editor_scroll_pane

0x82b9,	// (0x00056bb5) ex_editor_pane

0x41d8,	// (0x00052ad4) scroll_pane_cp13

0x400a,	// (0x00052906) scroll_pane_cp14

0x471a,	// (0x00053016) scroll_pane_cp36

0xd4cb,	// (0x0005bdc7) list_single_graphic_hl_pane_cp2_ParamLimits

0xd4cb,	// (0x0005bdc7) list_single_graphic_hl_pane_cp2

0xd8d0,	// (0x0005c1cc) list_single_graphic_hl_pane_ParamLimits

0xd8d0,	// (0x0005c1cc) list_single_graphic_hl_pane

0x3514,	// (0x00051e10) aid_size_min_hl_cp1

0x82c1,	// (0x00056bbd) list_highlight_pane_cp34_ParamLimits

0x82c1,	// (0x00056bbd) list_highlight_pane_cp34

0x82d2,	// (0x00056bce) list_single_graphic_hl_pane_g1_ParamLimits

0x82d2,	// (0x00056bce) list_single_graphic_hl_pane_g1

0xc91e,	// (0x0005b21a) list_single_graphic_hl_pane_g2_ParamLimits

0xc91e,	// (0x0005b21a) list_single_graphic_hl_pane_g2

0xc91e,	// (0x0005b21a) list_single_graphic_hl_pane_g3_ParamLimits

0xc91e,	// (0x0005b21a) list_single_graphic_hl_pane_g3

0x4c6f,	// (0x0005356b) list_single_graphic_hl_pane_g4_ParamLimits

0x4c6f,	// (0x0005356b) list_single_graphic_hl_pane_g4

0x3529,	// (0x00051e25) list_single_graphic_hl_pane_g5_ParamLimits

0x3529,	// (0x00051e25) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005e4d7) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005e4d7) list_single_graphic_hl_pane_g

0xc92a,	// (0x0005b226) list_single_graphic_hl_pane_t1_ParamLimits

0xc92a,	// (0x0005b226) list_single_graphic_hl_pane_t1

0x82df,	// (0x00056bdb) aid_size_min_hl_cp2

0x82e8,	// (0x00056be4) list_highlight_pane_cp34_cp2_ParamLimits

0x82e8,	// (0x00056be4) list_highlight_pane_cp34_cp2

0x82d2,	// (0x00056bce) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x82d2,	// (0x00056bce) list_single_graphic_hl_pane_g1_cp2

0x82f5,	// (0x00056bf1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82f5,	// (0x00056bf1) list_single_graphic_hl_pane_g2_cp2

0x8301,	// (0x00056bfd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8301,	// (0x00056bfd) list_single_graphic_hl_pane_g3_cp2

0x7cfa,	// (0x000565f6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7cfa,	// (0x000565f6) list_single_graphic_hl_pane_g4_cp2

0x830f,	// (0x00056c0b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x830f,	// (0x00056c0b) list_single_graphic_hl_pane_g5_cp2

0xbfe5,	// (0x0005a8e1) control_pane_g4_ParamLimits

0xbfe5,	// (0x0005a8e1) control_pane_g4

0x5048,	// (0x00053944) bg_popup_sub_pane_cp10_ParamLimits

0x7af0,	// (0x000563ec) list_choice_list_pane_ParamLimits

0x7aff,	// (0x000563fb) scroll_pane_cp23

0x3a85,	// (0x00052381) bg_popup_preview_window_pane_cp02_ParamLimits

0x80f3,	// (0x000569ef) list_preview_fixed_pane_ParamLimits

0x8109,	// (0x00056a05) list_preview_fixed_pane_cp_ParamLimits

0x8109,	// (0x00056a05) list_preview_fixed_pane_cp

0x8115,	// (0x00056a11) popup_preview_fixed_window_g1_ParamLimits

0x8115,	// (0x00056a11) popup_preview_fixed_window_g1

0x8121,	// (0x00056a1d) popup_preview_fixed_window_g2_ParamLimits

0x8121,	// (0x00056a1d) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005e45f) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005e45f) popup_preview_fixed_window_g

0x0cec,	// (0x0004f5e8) aid_navi_side_left_pane_ParamLimits

0x0d01,	// (0x0004f5fd) aid_navi_side_right_pane_ParamLimits

0x0d19,	// (0x0004f615) navi_icon_pane_stacon_ParamLimits

0x0d2d,	// (0x0004f629) navi_navi_pane_stacon_ParamLimits

0x0d19,	// (0x0004f615) navi_text_pane_stacon_ParamLimits

0x0218,	// (0x0004eb14) main_text_info_pane

0x8339,	// (0x00056c35) listscroll_text_info_pane

0x8341,	// (0x00056c3d) list_text_info_pane_ParamLimits

0x8341,	// (0x00056c3d) list_text_info_pane

0x8350,	// (0x00056c4c) scroll_pane_cp24_ParamLimits

0x8350,	// (0x00056c4c) scroll_pane_cp24

0xe42f,	// (0x0005cd2b) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0005cd2b) list_text_info_pane_t1

0xc14a,	// (0x0005aa46) popup_fast_swap2_window_ParamLimits

0xc14a,	// (0x0005aa46) popup_fast_swap2_window

0x839f,	// (0x00056c9b) aid_size_cell_fast2

0x3708,	// (0x00052004) bg_popup_window_pane_cp17

0x59b8,	// (0x000542b4) heading_pane_cp2

0x3cd4,	// (0x000525d0) listscroll_fast2_pane

0x83a9,	// (0x00056ca5) grid_fast2_pane

0x83b3,	// (0x00056caf) listscroll_fast2_pane_g1

0x83bb,	// (0x00056cb7) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005e4e2) listscroll_fast2_pane_g

0x41d8,	// (0x00052ad4) scroll_pane_cp26

0x83c5,	// (0x00056cc1) cell_fast2_pane_ParamLimits

0x83c5,	// (0x00056cc1) cell_fast2_pane

0x83da,	// (0x00056cd6) cell_fast2_pane_g1

0x83e3,	// (0x00056cdf) cell_fast2_pane_g2

0x83ec,	// (0x00056ce8) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005e4e7) cell_fast2_pane_g

0x3dc7,	// (0x000526c3) grid_highlight_pane_cp9

0x126d,	// (0x0004fb69) main_eswt_pane_ParamLimits

0x126d,	// (0x0004fb69) main_eswt_pane

0x8365,	// (0x00056c61) list_single_text_info_pane

0x83f4,	// (0x00056cf0) eswt_ctrl_button_pane

0x83f4,	// (0x00056cf0) eswt_ctrl_canvas_pane

0x83fc,	// (0x00056cf8) eswt_ctrl_combo_pane

0x83f4,	// (0x00056cf0) eswt_ctrl_default_pane

0x83f4,	// (0x00056cf0) eswt_ctrl_label_pane

0x8404,	// (0x00056d00) eswt_ctrl_wait_pane

0x840c,	// (0x00056d08) eswt_shell_pane

0x3708,	// (0x00052004) listscroll_eswt_app_pane

0x842c,	// (0x00056d28) popup_eswt_tasktip_window_ParamLimits

0x842c,	// (0x00056d28) popup_eswt_tasktip_window

0x55d2,	// (0x00053ece) bg_popup_window_pane_cp18

0x843d,	// (0x00056d39) eswt_control_pane_g1_ParamLimits

0x843d,	// (0x00056d39) eswt_control_pane_g1

0x844a,	// (0x00056d46) eswt_control_pane_g2_ParamLimits

0x844a,	// (0x00056d46) eswt_control_pane_g2

0x8457,	// (0x00056d53) eswt_control_pane_g3_ParamLimits

0x8457,	// (0x00056d53) eswt_control_pane_g3

0x8464,	// (0x00056d60) eswt_control_pane_g4_ParamLimits

0x8464,	// (0x00056d60) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005e4ee) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005e4ee) eswt_control_pane_g

0x4077,	// (0x00052973) bg_button_pane_ParamLimits

0x4077,	// (0x00052973) bg_button_pane

0x3ddc,	// (0x000526d8) common_borders_pane_copy2_ParamLimits

0x3ddc,	// (0x000526d8) common_borders_pane_copy2

0x8471,	// (0x00056d6d) control_button_pane_g1_ParamLimits

0x8471,	// (0x00056d6d) control_button_pane_g1

0x847d,	// (0x00056d79) control_button_pane_g2_ParamLimits

0x847d,	// (0x00056d79) control_button_pane_g2

0x8489,	// (0x00056d85) control_button_pane_g3_ParamLimits

0x8489,	// (0x00056d85) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005e4f7) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005e4f7) control_button_pane_g

0x849d,	// (0x00056d99) control_button_pane_t1

0x84ab,	// (0x00056da7) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005e4fe) control_button_pane_t

0x555e,	// (0x00053e5a) bg_button_pane_g1

0x556e,	// (0x00053e6a) bg_button_pane_g2

0x5566,	// (0x00053e62) bg_button_pane_g3

0x557e,	// (0x00053e7a) bg_button_pane_g4

0x5576,	// (0x00053e72) bg_button_pane_g5

0x5586,	// (0x00053e82) bg_button_pane_g6

0x558e,	// (0x00053e8a) bg_button_pane_g7

0x559e,	// (0x00053e9a) bg_button_pane_g8

0x5596,	// (0x00053e92) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005e162) bg_button_pane_g

0x7aab,	// (0x000563a7) common_borders_pane_ParamLimits

0x7aab,	// (0x000563a7) common_borders_pane

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy1_ParamLimits

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy1

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy1_ParamLimits

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy1

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy1_ParamLimits

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy1

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy1_ParamLimits

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy1

0x7ae6,	// (0x000563e2) bg_eswt_ctrl_canvas_pane_g1

0x7aab,	// (0x000563a7) common_borders_pane_cp2_ParamLimits

0x7aab,	// (0x000563a7) common_borders_pane_cp2

0x7aab,	// (0x000563a7) common_borders_pane_cp3_ParamLimits

0x7aab,	// (0x000563a7) common_borders_pane_cp3

0x84b9,	// (0x00056db5) separator_horizontal_pane

0x84c1,	// (0x00056dbd) separator_vertical_pane

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy2_ParamLimits

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy2

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy2_ParamLimits

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy2

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy2_ParamLimits

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy2

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy2_ParamLimits

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy2

0x3708,	// (0x00052004) common_borders_pane_cp4

0x84ca,	// (0x00056dc6) separator_horizontal_pane_g1

0x84d3,	// (0x00056dcf) separator_horizontal_pane_g2

0x84dc,	// (0x00056dd8) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005e503) separator_horizontal_pane_g

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy3_ParamLimits

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy3

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy3_ParamLimits

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy3

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy3_ParamLimits

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy3

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy3_ParamLimits

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy3

0x3708,	// (0x00052004) common_borders_pane_cp5

0x84e5,	// (0x00056de1) separator_vertical_pane_g1

0x84ee,	// (0x00056dea) separator_vertical_pane_g2

0x84f7,	// (0x00056df3) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005e50a) separator_vertical_pane_g

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy4_ParamLimits

0x843d,	// (0x00056d39) eswt_control_pane_g1_copy4

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy4_ParamLimits

0x844a,	// (0x00056d46) eswt_control_pane_g2_copy4

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy4_ParamLimits

0x8457,	// (0x00056d53) eswt_control_pane_g3_copy4

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy4_ParamLimits

0x8464,	// (0x00056d60) eswt_control_pane_g4_copy4

0xe44a,	// (0x0005cd46) eswt_ctrl_combo_button_pane

0xe452,	// (0x0005cd4e) eswt_ctrl_input_pane

0xe45a,	// (0x0005cd56) popup_choice_list_window_cp70

0xe462,	// (0x0005cd5e) eswt_ctrl_input_pane_t1

0x3708,	// (0x00052004) input_focus_pane_cp70

0x7aab,	// (0x000563a7) bg_button_pane_cp70_ParamLimits

0x7aab,	// (0x000563a7) bg_button_pane_cp70

0xe470,	// (0x0005cd6c) eswt_ctrl_combo_button_pane_g1

0x852e,	// (0x00056e2a) wait_bar_pane_cp70

0x55d2,	// (0x00053ece) bg_popup_window_pane_cp70_ParamLimits

0x55d2,	// (0x00053ece) bg_popup_window_pane_cp70

0x8536,	// (0x00056e32) popup_eswt_tasktip_window_t1

0x854c,	// (0x00056e48) wait_bar_pane_cp71_ParamLimits

0x854c,	// (0x00056e48) wait_bar_pane_cp71

0x8558,	// (0x00056e54) grid_eswt_app_pane

0x44f4,	// (0x00052df0) scroll_pane_cp70

0xe478,	// (0x0005cd74) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0005cd74) cell_eswt_app_pane

0xe4a2,	// (0x0005cd9e) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0005cd9e) cell_eswt_app_pane_g1

0xe4d1,	// (0x0005cdcd) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0005cdcd) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005e511) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005e511) cell_eswt_app_pane_g

0xe4fa,	// (0x0005cdf6) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0005cdf6) cell_eswt_app_pane_t1

0x861b,	// (0x00056f17) grid_highlight_pane_cp70_ParamLimits

0x861b,	// (0x00056f17) grid_highlight_pane_cp70

0x4bd3,	// (0x000534cf) set_content_pane_g1

0xd6af,	// (0x0005bfab) status_small_volume_pane

0x2096,	// (0x00050992) status_small_volume_pane_g1

0x209e,	// (0x0005099a) volume_small2_pane

0x20a7,	// (0x000509a3) volume_small2_pane_g1

0x20b0,	// (0x000509ac) volume_small2_pane_g2

0x20b9,	// (0x000509b5) volume_small2_pane_g3

0x20c2,	// (0x000509be) volume_small2_pane_g4

0x20cb,	// (0x000509c7) volume_small2_pane_g5

0x20d4,	// (0x000509d0) volume_small2_pane_g6

0x20dd,	// (0x000509d9) volume_small2_pane_g7

0x20e6,	// (0x000509e2) volume_small2_pane_g8

0x20ef,	// (0x000509eb) volume_small2_pane_g9

0x20f8,	// (0x000509f4) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005e516) volume_small2_pane_g

0x7eb8,	// (0x000567b4) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0005ccd3) fep_vkb_top_text_pane_t1_ParamLimits

0x812d,	// (0x00056a29) popup_preview_fixed_window_g3_ParamLimits

0x812d,	// (0x00056a29) popup_preview_fixed_window_g3

0xc76d,	// (0x0005b069) popup_toolbar_trans_pane

0xddc6,	// (0x0005c6c2) aid_height_set_list_ParamLimits

0x692d,	// (0x00055229) aid_size_parent_ParamLimits

0x5048,	// (0x00053944) list_highlight_pane_cp2_ParamLimits

0x4bd3,	// (0x000534cf) set_content_pane_g1_ParamLimits

0xd8e1,	// (0x0005c1dd) list_single_image_pane_ParamLimits

0xd8e1,	// (0x0005c1dd) list_single_image_pane

0xe52c,	// (0x0005ce28) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0005ce28) aid_size_cell_image

0xe539,	// (0x0005ce35) grid_single_image_pane_ParamLimits

0xe539,	// (0x0005ce35) grid_single_image_pane

0x511f,	// (0x00053a1b) list_single_image_pane_g1_ParamLimits

0x511f,	// (0x00053a1b) list_single_image_pane_g1

0x8640,	// (0x00056f3c) list_single_image_pane_g2_ParamLimits

0x8640,	// (0x00056f3c) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005e52b) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005e52b) list_single_image_pane_g

0x8654,	// (0x00056f50) list_single_image_pane_t1_ParamLimits

0x8654,	// (0x00056f50) list_single_image_pane_t1

0xe547,	// (0x0005ce43) cell_image_list_pane_ParamLimits

0xe547,	// (0x0005ce43) cell_image_list_pane

0xe55d,	// (0x0005ce59) cell_image_list_pane_g1

0xe566,	// (0x0005ce62) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005e530) cell_image_list_pane_g

0x8690,	// (0x00056f8c) aid_size_cell_tb_trans_pane

0x4077,	// (0x00052973) bg_tb_trans_pane

0x86a2,	// (0x00056f9e) grid_tb_trans_pane

0x555e,	// (0x00053e5a) bg_tb_trans_pane_g1

0x556e,	// (0x00053e6a) bg_tb_trans_pane_g2

0x5566,	// (0x00053e62) bg_tb_trans_pane_g3

0x557e,	// (0x00053e7a) bg_tb_trans_pane_g4

0x5576,	// (0x00053e72) bg_tb_trans_pane_g5

0x559e,	// (0x00053e9a) bg_tb_trans_pane_g6

0x5596,	// (0x00053e92) bg_tb_trans_pane_g7

0x5586,	// (0x00053e82) bg_tb_trans_pane_g8

0x558e,	// (0x00053e8a) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005e535) bg_tb_trans_pane_g

0x86b6,	// (0x00056fb2) cell_toolbar_trans_pane_ParamLimits

0x86b6,	// (0x00056fb2) cell_toolbar_trans_pane

0x7ae6,	// (0x000563e2) cell_toolbar_trans_pane_g1

0xe19b,	// (0x0005ca97) list_form2_midp_pane_t1

0xe1a9,	// (0x0005caa5) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005e3d2) list_form2_midp_pane_t

0x76e6,	// (0x00055fe2) scroll_pane_cp51_ParamLimits

0x78a2,	// (0x0005619e) form2_midp_wait_pane_g1

0x78ab,	// (0x000561a7) form2_midp_wait_pane_g2

0x78b4,	// (0x000561b0) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005e3e7) form2_midp_wait_pane_g

0x37fc,	// (0x000520f8) list_highlight_pane_cp21_ParamLimits

0x7900,	// (0x000561fc) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x790f,	// (0x0005620b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6ae5,	// (0x000553e1) list_single_2graphic_im_pane_ParamLimits

0x6ae5,	// (0x000553e1) list_single_2graphic_im_pane

0xe56f,	// (0x0005ce6b) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0005ce6b) list_single_2graphic_im_pane_g1

0xe580,	// (0x0005ce7c) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0005ce7c) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0005ce88) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0005ce88) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005e548) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005e548) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0005ce9c) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0005ce9c) list_single_2graphic_im_pane_t1

0x8139,	// (0x00056a35) list_single_graphic_2heading_pane_fp_ParamLimits

0x8139,	// (0x00056a35) list_single_graphic_2heading_pane_fp

0x3386,	// (0x00051c82) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3386,	// (0x00051c82) list_single_graphic_2heading_pane_fp_g1

0x814e,	// (0x00056a4a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x814e,	// (0x00056a4a) list_single_graphic_2heading_pane_fp_g2

0x4012,	// (0x0005290e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4012,	// (0x0005290e) list_single_graphic_2heading_pane_fp_g3

0x4085,	// (0x00052981) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4085,	// (0x00052981) list_single_graphic_2heading_pane_fp_g4

0x815a,	// (0x00056a56) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x815a,	// (0x00056a56) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e46f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e46f) list_single_graphic_2heading_pane_fp_g

0x3553,	// (0x00051e4f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3553,	// (0x00051e4f) list_single_graphic_2heading_pane_fp_t1

0x33be,	// (0x00051cba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33be,	// (0x00051cba) list_single_graphic_2heading_pane_fp_t2

0x3569,	// (0x00051e65) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3569,	// (0x00051e65) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005e551) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005e551) list_single_graphic_2heading_pane_fp_t

0x7b72,	// (0x0005646e) fep_hwr_write_pane_g5_ParamLimits

0x7b72,	// (0x0005646e) fep_hwr_write_pane_g5

0x7b7e,	// (0x0005647a) fep_hwr_write_pane_g6_ParamLimits

0x7b7e,	// (0x0005647a) fep_hwr_write_pane_g6

0x840c,	// (0x00056d08) eswt_shell_pane_ParamLimits

0x55d2,	// (0x00053ece) bg_popup_window_pane_cp18_ParamLimits

0x6875,	// (0x00055171) heading_pane_cp70

0x8536,	// (0x00056e32) popup_eswt_tasktip_window_t1_ParamLimits

0xd755,	// (0x0005c051) aid_touch_tab_arrow_left

0xd76b,	// (0x0005c067) aid_touch_tab_arrow_right

0xd025,	// (0x0005b921) title_pane_g3_ParamLimits

0xd025,	// (0x0005b921) title_pane_g3

0x4036,	// (0x00052932) set_value_pane_g1

0xc76d,	// (0x0005b069) popup_toolbar_trans_pane_ParamLimits

0x8690,	// (0x00056f8c) aid_size_cell_tb_trans_pane_ParamLimits

0x4077,	// (0x00052973) bg_tb_trans_pane_ParamLimits

0x86a2,	// (0x00056f9e) grid_tb_trans_pane_ParamLimits

0x3a85,	// (0x00052381) cont_note_pane_ParamLimits

0x3a85,	// (0x00052381) cont_note_pane

0x3ddc,	// (0x000526d8) cont_snote2_single_text_pane_ParamLimits

0x3ddc,	// (0x000526d8) cont_snote2_single_text_pane

0x3ddc,	// (0x000526d8) cont_snote2_single_graphic_pane_ParamLimits

0x3ddc,	// (0x000526d8) cont_snote2_single_graphic_pane

0x5bd3,	// (0x000544cf) cont_note_wait_pane_ParamLimits

0x5bd3,	// (0x000544cf) cont_note_wait_pane

0x5bd3,	// (0x000544cf) cont_note_image_pane_ParamLimits

0x5bd3,	// (0x000544cf) cont_note_image_pane

0x874a,	// (0x00057046) popup_note2_window_g1_ParamLimits

0x874a,	// (0x00057046) popup_note2_window_g1

0x877b,	// (0x00057077) popup_note2_window_t1_ParamLimits

0x877b,	// (0x00057077) popup_note2_window_t1

0x87c0,	// (0x000570bc) popup_note2_window_t2_ParamLimits

0x87c0,	// (0x000570bc) popup_note2_window_t2

0x8805,	// (0x00057101) popup_note2_window_t3_ParamLimits

0x8805,	// (0x00057101) popup_note2_window_t3

0x884a,	// (0x00057146) popup_note2_window_t4_ParamLimits

0x884a,	// (0x00057146) popup_note2_window_t4

0x3b09,	// (0x00052405) popup_note2_window_t5_ParamLimits

0x3b09,	// (0x00052405) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005e55d) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005e55d) popup_note2_window_t

0x8879,	// (0x00057175) popup_note2_image_window_g1_ParamLimits

0x8879,	// (0x00057175) popup_note2_image_window_g1

0x8885,	// (0x00057181) popup_note2_image_window_g2_ParamLimits

0x8885,	// (0x00057181) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005e568) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005e568) popup_note2_image_window_g

0x8897,	// (0x00057193) popup_note2_image_window_t1_ParamLimits

0x8897,	// (0x00057193) popup_note2_image_window_t1

0x88af,	// (0x000571ab) popup_note2_image_window_t2_ParamLimits

0x88af,	// (0x000571ab) popup_note2_image_window_t2

0x88c7,	// (0x000571c3) popup_note2_image_window_t3_ParamLimits

0x88c7,	// (0x000571c3) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005e56d) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005e56d) popup_note2_image_window_t

0x5be1,	// (0x000544dd) popup_note2_wait_window_g1_ParamLimits

0x5be1,	// (0x000544dd) popup_note2_wait_window_g1

0x88e3,	// (0x000571df) popup_note2_wait_window_g2_ParamLimits

0x88e3,	// (0x000571df) popup_note2_wait_window_g2

0x5bf9,	// (0x000544f5) popup_note2_wait_window_g3_ParamLimits

0x5bf9,	// (0x000544f5) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005e574) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005e574) popup_note2_wait_window_g

0x88ef,	// (0x000571eb) popup_note2_wait_window_t1_ParamLimits

0x88ef,	// (0x000571eb) popup_note2_wait_window_t1

0x890d,	// (0x00057209) popup_note2_wait_window_t2_ParamLimits

0x890d,	// (0x00057209) popup_note2_wait_window_t2

0x892b,	// (0x00057227) popup_note2_wait_window_t3_ParamLimits

0x892b,	// (0x00057227) popup_note2_wait_window_t3

0x893d,	// (0x00057239) popup_note2_wait_window_t4_ParamLimits

0x893d,	// (0x00057239) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005e57b) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005e57b) popup_note2_wait_window_t

0x894f,	// (0x0005724b) wait_bar2_pane_ParamLimits

0x894f,	// (0x0005724b) wait_bar2_pane

0x8967,	// (0x00057263) popup_snote2_single_text_window_g1_ParamLimits

0x8967,	// (0x00057263) popup_snote2_single_text_window_g1

0x898f,	// (0x0005728b) popup_snote2_single_text_window_t1_ParamLimits

0x898f,	// (0x0005728b) popup_snote2_single_text_window_t1

0x89db,	// (0x000572d7) popup_snote2_single_text_window_t2_ParamLimits

0x89db,	// (0x000572d7) popup_snote2_single_text_window_t2

0x8a27,	// (0x00057323) popup_snote2_single_text_window_t3_ParamLimits

0x8a27,	// (0x00057323) popup_snote2_single_text_window_t3

0x8a68,	// (0x00057364) popup_snote2_single_text_window_t4_ParamLimits

0x8a68,	// (0x00057364) popup_snote2_single_text_window_t4

0x8a9e,	// (0x0005739a) popup_snote2_single_text_window_t5_ParamLimits

0x8a9e,	// (0x0005739a) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005e584) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005e584) popup_snote2_single_text_window_t

0x8ac9,	// (0x000573c5) popup_snote2_single_graphic_window_g1_ParamLimits

0x8ac9,	// (0x000573c5) popup_snote2_single_graphic_window_g1

0x8af1,	// (0x000573ed) popup_snote2_single_graphic_window_g2_ParamLimits

0x8af1,	// (0x000573ed) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005e58f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005e58f) popup_snote2_single_graphic_window_g

0x8b19,	// (0x00057415) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b19,	// (0x00057415) popup_snote2_single_graphic_window_t1

0x8b65,	// (0x00057461) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b65,	// (0x00057461) popup_snote2_single_graphic_window_t2

0x8a27,	// (0x00057323) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a27,	// (0x00057323) popup_snote2_single_graphic_window_t3

0x8a68,	// (0x00057364) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a68,	// (0x00057364) popup_snote2_single_graphic_window_t4

0x8a9e,	// (0x0005739a) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a9e,	// (0x0005739a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005e594) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005e594) popup_snote2_single_graphic_window_t

0x75a7,	// (0x00055ea3) clock_nsta_pane_cp2_t1

0x75a7,	// (0x00055ea3) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005e3a8) clock_nsta_pane_cp2_t

0x0a6a,	// (0x0004f366) form_field_data_wide_pane_g1_ParamLimits

0x4012,	// (0x0005290e) form_field_data_wide_pane_g2_ParamLimits

0x4012,	// (0x0005290e) form_field_data_wide_pane_g2

0x4085,	// (0x00052981) form_field_data_wide_pane_g3_ParamLimits

0x4085,	// (0x00052981) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005df7c) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005df7c) form_field_data_wide_pane_g

0xe0de,	// (0x0005c9da) grid_touch_3_pane_ParamLimits

0xe0de,	// (0x0005c9da) grid_touch_3_pane

0xe5d1,	// (0x0005cecd) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0005cecd) cell_touch_3_pane

0x7ae6,	// (0x000563e2) cell_touch_3_pane_g1

0x7ae6,	// (0x000563e2) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005e42d) cell_touch_3_pane_g

0x3b3b,	// (0x00052437) cont_query_data_pane

0x3b43,	// (0x0005243f) cont_query_data_pane_cp1

0x8bdf,	// (0x000574db) button_value_adjust_pane_cp7

0x8be7,	// (0x000574e3) query_popup_pane_cp3

0x47db,	// (0x000530d7) bg_popup_sub_pane_cp22_ParamLimits

0x0e2e,	// (0x0004f72a) navi_navi_volume_pane_cp2

0x0e49,	// (0x0004f745) popup_side_volume_key_window_g2

0x0e58,	// (0x0004f754) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005e012) popup_side_volume_key_window_g

0x0e75,	// (0x0004f771) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005e019) popup_side_volume_key_window_t

0x4a92,	// (0x0005338e) popup_side_volume_key_window_ParamLimits

0xd369,	// (0x0005bc65) list_double_graphic_pane_g4_ParamLimits

0xd369,	// (0x0005bc65) list_double_graphic_pane_g4

0xdf3f,	// (0x0005c83b) list_single_2heading_msg_pane_ParamLimits

0xdf3f,	// (0x0005c83b) list_single_2heading_msg_pane

0xd8f2,	// (0x0005c1ee) list_single_2heading_msg_pane_g1_ParamLimits

0xd8f2,	// (0x0005c1ee) list_single_2heading_msg_pane_g1

0xd8fe,	// (0x0005c1fa) list_single_2heading_msg_pane_g2_ParamLimits

0xd8fe,	// (0x0005c1fa) list_single_2heading_msg_pane_g2

0xd911,	// (0x0005c20d) list_single_2heading_msg_pane_g3_ParamLimits

0xd911,	// (0x0005c20d) list_single_2heading_msg_pane_g3

0xd91d,	// (0x0005c219) list_single_2heading_msg_pane_g4_ParamLimits

0xd91d,	// (0x0005c219) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005e59f) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005e59f) list_single_2heading_msg_pane_g

0xc940,	// (0x0005b23c) list_single_2heading_msg_pane_t1_ParamLimits

0xc940,	// (0x0005b23c) list_single_2heading_msg_pane_t1

0xc968,	// (0x0005b264) list_single_2heading_msg_pane_t2_ParamLimits

0xc968,	// (0x0005b264) list_single_2heading_msg_pane_t2

0xc9d3,	// (0x0005b2cf) list_single_2heading_msg_pane_t3_ParamLimits

0xc9d3,	// (0x0005b2cf) list_single_2heading_msg_pane_t3

0x3642,	// (0x00051f3e) list_single_2heading_msg_pane_t4_ParamLimits

0x3642,	// (0x00051f3e) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005e5a8) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005e5a8) list_single_2heading_msg_pane_t

0x3750,	// (0x0005204c) title_pane_g4_ParamLimits

0x3750,	// (0x0005204c) title_pane_g4

0x0c3d,	// (0x0004f539) title_pane_stacon_g3_ParamLimits

0x0c3d,	// (0x0004f539) title_pane_stacon_g3

0x870d,	// (0x00057009) list_single_2graphic_im_pane_g4_ParamLimits

0x870d,	// (0x00057009) list_single_2graphic_im_pane_g4

0x6632,	// (0x00054f2e) popup_side_volume_key_window_cp

0x6df8,	// (0x000556f4) main_idle_act2_pane_t1

0x1872,	// (0x0005016e) toolbar_button_pane_g10

0xd330,	// (0x0005bc2c) popup_toolbar_window_cp1

0x7598,	// (0x00055e94) clock_nsta_pane_cp_t1

0x7598,	// (0x00055e94) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005e3a3) clock_nsta_pane_cp_t

0x0e2e,	// (0x0004f72a) navi_navi_volume_pane_cp2_ParamLimits

0x0e3d,	// (0x0004f739) popup_side_volume_key_window_g1_ParamLimits

0x0e49,	// (0x0004f745) popup_side_volume_key_window_g2_ParamLimits

0x0e58,	// (0x0004f754) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005e012) popup_side_volume_key_window_g_ParamLimits

0x1d02,	// (0x000505fe) fep_hwr_aid_pane

0x1da9,	// (0x000506a5) bg_fep_hwr_top_pane_g4_ParamLimits

0x7b42,	// (0x0005643e) fep_hwr_top_pane_g1_ParamLimits

0x7b54,	// (0x00056450) fep_hwr_top_pane_g2_ParamLimits

0x1dc9,	// (0x000506c5) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005e3f8) fep_hwr_top_pane_g_ParamLimits

0x1dde,	// (0x000506da) fep_hwr_top_text_pane_ParamLimits

0x63f5,	// (0x00054cf1) aid_touch_tab_arrow_arrow_2

0x63fe,	// (0x00054cfa) aid_touch_tab_arrow_left_2

0x1d16,	// (0x00050612) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d4d,	// (0x00050649) fep_hwr_prediction_pane

0x7cb4,	// (0x000565b0) fep_vkb_prediction_pane

0xe3b7,	// (0x0005ccb3) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0005ccb3) fep_vkb_side_pane_g3

0x1f59,	// (0x00050855) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1fc5,	// (0x000508c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1fd2,	// (0x000508ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005e4a7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2101,	// (0x000509fd) fep_hwr_prediction_pane_g1

0x210b,	// (0x00050a07) fep_hwr_prediction_pane_g2

0x2113,	// (0x00050a0f) fep_hwr_prediction_pane_g3

0x211b,	// (0x00050a17) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005e5b1) fep_hwr_prediction_pane_g

0x8c0c,	// (0x00057508) fep_vkb_prediction_pane_g1

0x8c16,	// (0x00057512) fep_vkb_prediction_pane_g2

0x8c1e,	// (0x0005751a) fep_vkb_prediction_pane_g3

0x8c26,	// (0x00057522) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005e5ba) fep_vkb_prediction_pane_g

0x1b82,	// (0x0005047e) slider_set_pane_g3

0x1b96,	// (0x00050492) slider_set_pane_g4

0x1bae,	// (0x000504aa) slider_set_pane_g5

0x1b82,	// (0x0005047e) slider_set_pane_g6

0x1bc4,	// (0x000504c0) slider_set_pane_g7

0x6a92,	// (0x0005538e) slider_form_pane_g3

0x6a9b,	// (0x00055397) slider_form_pane_g4

0x6aa3,	// (0x0005539f) slider_form_pane_g5

0x6a92,	// (0x0005538e) slider_form_pane_g6

0xdf11,	// (0x0005c80d) slider_form_pane_g7

0x70a2,	// (0x0005599e) slider_set_pane_vc_g3

0x70ab,	// (0x000559a7) slider_set_pane_vc_g4

0x70b4,	// (0x000559b0) slider_set_pane_vc_g5

0x70a2,	// (0x0005599e) slider_set_pane_vc_g6

0x70bd,	// (0x000559b9) slider_set_pane_vc_g7

0x727d,	// (0x00055b79) slider_form_pane_vc_g1

0x7286,	// (0x00055b82) slider_form_pane_vc_g2

0x728f,	// (0x00055b8b) slider_form_pane_vc_g3

0x727d,	// (0x00055b79) slider_form_pane_vc_g4

0x7298,	// (0x00055b94) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005e375) slider_form_pane_vc_g

0x0218,	// (0x0004eb14) main_idle_act3_pane

0x8c2e,	// (0x0005752a) ai3_links_pane

0xe619,	// (0x0005cf15) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0005cf15) popup_ai3_data_window

0x3708,	// (0x00052004) grid_ai3_links_pane

0xe633,	// (0x0005cf2f) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0005cf2f) cell_ai3_links_pane

0x8c69,	// (0x00057565) bg_popup_sub_pane_cp11

0x8c76,	// (0x00057572) cell_ai3_links_pane_g1

0x3708,	// (0x00052004) bg_popup_sub_pane_cp12

0x8c9b,	// (0x00057597) heading_ai3_data_pane

0x8ca3,	// (0x0005759f) list_ai3_gene_pane

0x8caf,	// (0x000575ab) popup_ai3_data_window_g1

0x8cb7,	// (0x000575b3) heading_ai3_data_pane_g1

0x8cbf,	// (0x000575bb) heading_ai3_data_pane_t1

0x8ccd,	// (0x000575c9) list_double_ai3_gene_pane_ParamLimits

0x8ccd,	// (0x000575c9) list_double_ai3_gene_pane

0x8cda,	// (0x000575d6) list_single_ai3_gene_pane_ParamLimits

0x8cda,	// (0x000575d6) list_single_ai3_gene_pane

0x7aab,	// (0x000563a7) list_highlight_pane_cp7_ParamLimits

0x7aab,	// (0x000563a7) list_highlight_pane_cp7

0x8ce7,	// (0x000575e3) list_single_a13_gene_pane_t1_ParamLimits

0x8ce7,	// (0x000575e3) list_single_a13_gene_pane_t1

0x8cfe,	// (0x000575fa) list_single_ai3_gene_pane_g1

0x8d07,	// (0x00057603) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005e5c3) list_single_ai3_gene_pane_g

0x8d0f,	// (0x0005760b) list_double_ai3_gene_pane_g1_ParamLimits

0x8d0f,	// (0x0005760b) list_double_ai3_gene_pane_g1

0x8d1b,	// (0x00057617) list_double_ai3_gene_pane_t1_ParamLimits

0x8d1b,	// (0x00057617) list_double_ai3_gene_pane_t1

0x8d37,	// (0x00057633) list_double_ai3_gene_pane_t2_ParamLimits

0x8d37,	// (0x00057633) list_double_ai3_gene_pane_t2

0x8d4d,	// (0x00057649) list_double_ai3_gene_pane_t3_ParamLimits

0x8d4d,	// (0x00057649) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005e5c8) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005e5c8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x357f,	// (0x00051e7b) aid_size_min_col_2

0xe603,	// (0x0005ceff) aid_size_min_msg_ParamLimits

0xe603,	// (0x0005ceff) aid_size_min_msg

0xe3cb,	// (0x0005ccc7) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0005ccc7) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005e428) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005e428) fep_vkb_top_text_pane_g

0x0218,	// (0x0004eb14) main_hc_apps_shell_pane

0x8d6a,	// (0x00057666) grid_hc_apps_pane_ParamLimits

0x8d6a,	// (0x00057666) grid_hc_apps_pane

0x8d79,	// (0x00057675) list_hc_apps_pane

0x8d81,	// (0x0005767d) scroll_pane_cp37_ParamLimits

0x8d81,	// (0x0005767d) scroll_pane_cp37

0xe64d,	// (0x0005cf49) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0005cf49) cell_hc_apps_pane

0xe70b,	// (0x0005d007) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0005d007) cell_hc_apps_pane_g1

0x8e6c,	// (0x00057768) cell_hc_apps_pane_g2_ParamLimits

0x8e6c,	// (0x00057768) cell_hc_apps_pane_g2

0x8e88,	// (0x00057784) cell_hc_apps_pane_g3_ParamLimits

0x8e88,	// (0x00057784) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005e5cf) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005e5cf) cell_hc_apps_pane_g

0xe738,	// (0x0005d034) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0005d034) cell_hc_apps_pane_t1

0x3a85,	// (0x00052381) grid_highlight_pane_cp10_ParamLimits

0x3a85,	// (0x00052381) grid_highlight_pane_cp10

0xe776,	// (0x0005d072) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0005d072) list_single_hc_apps_pane

0xe7a3,	// (0x0005d09f) list_single_hc_apps_pane_g1

0xd935,	// (0x0005c231) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005e5d6) list_single_hc_apps_pane_g

0xd94e,	// (0x0005c24a) list_single_hc_apps_pane_g2_copy1

0x369c,	// (0x00051f98) list_single_hc_apps_pane_t1

0x37fc,	// (0x000520f8) bg_set_opt_pane_cp_ParamLimits

0x0479,	// (0x0004ed75) setting_slider_pane_t1_ParamLimits

0x0492,	// (0x0004ed8e) setting_slider_pane_t2_ParamLimits

0x04ac,	// (0x0004eda8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005de5a) setting_slider_pane_t_ParamLimits

0x04c4,	// (0x0004edc0) slider_set_pane_ParamLimits

0x1145,	// (0x0004fa41) control_pane_g5_ParamLimits

0x1145,	// (0x0004fa41) control_pane_g5

0x68e1,	// (0x000551dd) slider_set_pane_g1_ParamLimits

0x1b76,	// (0x00050472) slider_set_pane_g2_ParamLimits

0x1b82,	// (0x0005047e) slider_set_pane_g3_ParamLimits

0x1b96,	// (0x00050492) slider_set_pane_g4_ParamLimits

0x1bae,	// (0x000504aa) slider_set_pane_g5_ParamLimits

0x1b82,	// (0x0005047e) slider_set_pane_g6_ParamLimits

0x1bc4,	// (0x000504c0) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005e260) slider_set_pane_g_ParamLimits

0x4b7e,	// (0x0005347a) navi_icon_text_pane_ParamLimits

0xd71e,	// (0x0005c01a) aid_fill_nsta_2_ParamLimits

0xd755,	// (0x0005c051) aid_touch_tab_arrow_left_ParamLimits

0xd76b,	// (0x0005c067) aid_touch_tab_arrow_right_ParamLimits

0xd806,	// (0x0005c102) clock_nsta_pane_ParamLimits

0x63d7,	// (0x00054cd3) navi_icon_pane_g1_ParamLimits

0x63e3,	// (0x00054cdf) navi_text_pane_t1_ParamLimits

0x76a4,	// (0x00055fa0) navi_icon_text_pane_g1_ParamLimits

0x76b0,	// (0x00055fac) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0005d09f) list_single_hc_apps_pane_g1_ParamLimits

0xd935,	// (0x0005c231) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005e5d6) list_single_hc_apps_pane_g_ParamLimits

0xd94e,	// (0x0005c24a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x369c,	// (0x00051f98) list_single_hc_apps_pane_t1_ParamLimits

0xb883,	// (0x0005a17f) popup_toolbar2_fixed_window_ParamLimits

0xb883,	// (0x0005a17f) popup_toolbar2_fixed_window

0xc763,	// (0x0005b05f) popup_toolbar2_float_window

0x3708,	// (0x00052004) bg_popup_sub_pane_cp27

0x8f5f,	// (0x0005785b) grid_toolbar2_float_pane

0x3708,	// (0x00052004) bg_popup_sub_pane_cp26

0x8f5f,	// (0x0005785b) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0005d0b8) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0005d0b8) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0005d0d2) cell_toolbar2_fixed_pane_g1

0x8f80,	// (0x0005787c) toolbar2_fixed_button_pane

0x555e,	// (0x00053e5a) toolbar2_fixed_button_pane_g1

0x556e,	// (0x00053e6a) toolbar2_fixed_button_pane_g2

0x5566,	// (0x00053e62) toolbar2_fixed_button_pane_g3

0x557e,	// (0x00053e7a) toolbar2_fixed_button_pane_g4

0x5576,	// (0x00053e72) toolbar2_fixed_button_pane_g5

0x5586,	// (0x00053e82) toolbar2_fixed_button_pane_g6

0x558e,	// (0x00053e8a) toolbar2_fixed_button_pane_g7

0x559e,	// (0x00053e9a) toolbar2_fixed_button_pane_g8

0x5596,	// (0x00053e92) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005e162) toolbar2_fixed_button_pane_g

0x8f88,	// (0x00057884) cell_toolbar2_float_pane_ParamLimits

0x8f88,	// (0x00057884) cell_toolbar2_float_pane

0x8f99,	// (0x00057895) cell_toolbar2_float_pane_g1

0x8f80,	// (0x0005787c) toolbar2_fixed_button_pane_cp

0xe27d,	// (0x0005cb79) fep_vkb_accented_list_pane_ParamLimits

0xe27d,	// (0x0005cb79) fep_vkb_accented_list_pane

0x1f39,	// (0x00050835) bg_popup_fep_shadow_pane_g9

0x4cfe,	// (0x000535fa) bg_popup_fep_shadow_pane_cp3

0x41bf,	// (0x00052abb) list_accented_list_pane

0x8fa2,	// (0x0005789e) list_single_accented_list_pane_ParamLimits

0x8fa2,	// (0x0005789e) list_single_accented_list_pane

0x4cfe,	// (0x000535fa) list_highlight_pane_cp10

0x8fb3,	// (0x000578af) list_single_accented_list_pane_t1

0xc68d,	// (0x0005af89) popup_slider_window_ParamLimits

0xc68d,	// (0x0005af89) popup_slider_window

0x8bef,	// (0x000574eb) aid_indentation_list_msg

0xe8cf,	// (0x0005d1cb) bg_popup_window_pane_cp19

0x90d7,	// (0x000579d3) popup_slider_window_g1

0x90f3,	// (0x000579ef) popup_slider_window_g2

0x910f,	// (0x00057a0b) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005e5db) popup_slider_window_g

0x916b,	// (0x00057a67) popup_slider_window_t1

0x91df,	// (0x00057adb) small_volume_slider_vertical_pane

0x7ae6,	// (0x000563e2) small_volume_slider_vertical_pane_g1

0x7ae6,	// (0x000563e2) small_volume_slider_vertical_pane_g2

0x91fb,	// (0x00057af7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005e5ed) small_volume_slider_vertical_pane_g

0xb7f1,	// (0x0005a0ed) area_side_right_pane_ParamLimits

0xb7f1,	// (0x0005a0ed) area_side_right_pane

0xca41,	// (0x0005b33d) aid_size_side_button_ParamLimits

0xca41,	// (0x0005b33d) aid_size_side_button

0xca5a,	// (0x0005b356) grid_sctrl_middle_pane_ParamLimits

0xca5a,	// (0x0005b356) grid_sctrl_middle_pane

0x2156,	// (0x00050a52) sctrl_sk_bottom_pane

0x2167,	// (0x00050a63) sctrl_sk_top_pane

0x2179,	// (0x00050a75) aid_touch_sctrl_top

0x2186,	// (0x00050a82) bg_sctrl_sk_pane_ParamLimits

0x2186,	// (0x00050a82) bg_sctrl_sk_pane

0x2194,	// (0x00050a90) sctrl_sk_top_pane_g1

0x21a1,	// (0x00050a9d) sctrl_sk_top_pane_t1

0x2179,	// (0x00050a75) aid_touch_sctrl_bottom

0x2186,	// (0x00050a82) bg_sctrl_sk_pane_cp_ParamLimits

0x2186,	// (0x00050a82) bg_sctrl_sk_pane_cp

0x21bc,	// (0x00050ab8) sctrl_sk_bottom_pane_g1

0x21a1,	// (0x00050a9d) sctrl_sk_bottom_pane_t1

0xca74,	// (0x0005b370) cell_sctrl_middle_pane_ParamLimits

0xca74,	// (0x0005b370) cell_sctrl_middle_pane

0xca85,	// (0x0005b381) aid_touch_sctrl_middle_ParamLimits

0xca85,	// (0x0005b381) aid_touch_sctrl_middle

0xca92,	// (0x0005b38e) bg_sctrl_middle_pane_ParamLimits

0xca92,	// (0x0005b38e) bg_sctrl_middle_pane

0x2829,	// (0x00051125) cell_sctrl_middle_pane_g1_ParamLimits

0x2829,	// (0x00051125) cell_sctrl_middle_pane_g1

0xcaa0,	// (0x0005b39c) cell_sctrl_middle_pane_g2_ParamLimits

0xcaa0,	// (0x0005b39c) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005e5f9) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005e5f9) cell_sctrl_middle_pane_g

0x555e,	// (0x00053e5a) bg_sctrl_middle_pane_g1

0x5566,	// (0x00053e62) bg_sctrl_middle_pane_g2

0x556e,	// (0x00053e6a) bg_sctrl_middle_pane_g3

0x5576,	// (0x00053e72) bg_sctrl_middle_pane_g4

0x557e,	// (0x00053e7a) bg_sctrl_middle_pane_g5

0x5586,	// (0x00053e82) bg_sctrl_middle_pane_g6

0x558e,	// (0x00053e8a) bg_sctrl_middle_pane_g7

0x5596,	// (0x00053e92) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005e5fe) bg_sctrl_middle_pane_g

0x559e,	// (0x00053e9a) bg_sctrl_middle_pane_g8_copy1

0x555e,	// (0x00053e5a) bg_sctrl_sk_pane_g1

0x556e,	// (0x00053e6a) bg_sctrl_sk_pane_g2

0x5566,	// (0x00053e62) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005e162) bg_sctrl_sk_pane_g

0x3f9a,	// (0x00052896) aid_size_touch_scroll_bar

0x557e,	// (0x00053e7a) bg_sctrl_sk_pane_g4

0x5576,	// (0x00053e72) bg_sctrl_sk_pane_g5

0x5586,	// (0x00053e82) bg_sctrl_sk_pane_g6

0x558e,	// (0x00053e8a) bg_sctrl_sk_pane_g7

0x559e,	// (0x00053e9a) bg_sctrl_sk_pane_g8

0x5596,	// (0x00053e92) bg_sctrl_sk_pane_g9

0x130d,	// (0x0004fc09) popup_fep_china_hwr2_fs_candidate_window

0xc1a7,	// (0x0005aaa3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1a7,	// (0x0005aaa3) popup_fep_china_hwr2_fs_control_window

0x1f59,	// (0x00050855) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005e5f4) sctrl_sk_top_pane_g

0xe987,	// (0x0005d283) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0005d283) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0005d297) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0005d297) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0005d2ae) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0005d2ae) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0005d2c0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0005d2c0) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0005d2d4) popup_fep_china_hwr2_fs_control_funtion_grid

0x9257,	// (0x00057b53) aid_fep_china_hwr2_fs_candi_cell

0x3708,	// (0x00052004) bg_popup_fep_shadow_pane_cp6

0x9261,	// (0x00057b5d) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0005d2dc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0005d2dc) cell_fep_china_hwr2_fs_funtion_grid

0x7ae6,	// (0x000563e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9283,	// (0x00057b7f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9283,	// (0x00057b7f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9291,	// (0x00057b8d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9291,	// (0x00057b8d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005e60f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005e60f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0005d2f4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0005d2f4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0005d309) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0005d309) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005e614) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005e614) cell_fep_china_hwr2_fs_funtion_grid_t

0x92d8,	// (0x00057bd4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92e0,	// (0x00057bdc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92e8,	// (0x00057be4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005e619) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92f0,	// (0x00057bec) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92f0,	// (0x00057bec) cell_fep_china_hwr2_fs_candidate_grid

0x9309,	// (0x00057c05) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9311,	// (0x00057c0d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7ae6,	// (0x000563e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7ae6,	// (0x000563e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005e42d) cell_fep_china_hwr2_fs_candidate_grid_g

0x9319,	// (0x00057c15) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5154,	// (0x00053a50) clock_nsta_pane_cp_24_ParamLimits

0x5154,	// (0x00053a50) clock_nsta_pane_cp_24

0x51d2,	// (0x00053ace) indicator_nsta_pane_cp_24_ParamLimits

0x51d2,	// (0x00053ace) indicator_nsta_pane_cp_24

0x6253,	// (0x00054b4f) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005e1c7) heading_pane_g

0x6c41,	// (0x0005553d) grid_sct_catagory_button_pane

0x6c71,	// (0x0005556d) scroll_pane_cp5_ParamLimits

0x76f2,	// (0x00055fee) button_value_adjust_pane_cp5_ParamLimits

0x76f2,	// (0x00055fee) button_value_adjust_pane_cp5

0x77d1,	// (0x000560cd) form2_midp_time_pane_ParamLimits

0x9327,	// (0x00057c23) cell_sct_catagory_button_pane_ParamLimits

0x9327,	// (0x00057c23) cell_sct_catagory_button_pane

0x7aab,	// (0x000563a7) bg_button_pane_cp01_ParamLimits

0x7aab,	// (0x000563a7) bg_button_pane_cp01

0x7ae6,	// (0x000563e2) cell_sct_catagory_button_pane_g1

0xc706,	// (0x0005b002) popup_tb_extension_window

0xea29,	// (0x0005d325) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0005d325) aid_size_cell_ext

0x3ddc,	// (0x000526d8) bg_tb_trans_pane_cp1_ParamLimits

0x3ddc,	// (0x000526d8) bg_tb_trans_pane_cp1

0xea4f,	// (0x0005d34b) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0005d34b) grid_tb_ext_pane

0xea8a,	// (0x0005d386) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0005d386) cell_tb_ext_pane

0xeab2,	// (0x0005d3ae) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0005d3ae) cell_tb_ext_pane_g1

0x93bb,	// (0x00057cb7) cell_tb_ext_pane_t1

0x3a85,	// (0x00052381) list_highlight_pane_cp11_ParamLimits

0x3a85,	// (0x00052381) list_highlight_pane_cp11

0xb898,	// (0x0005a194) popup_uni_indicator_window_ParamLimits

0xb898,	// (0x0005a194) popup_uni_indicator_window

0x4077,	// (0x00052973) bg_popup_sub_pane_cp14

0x93d6,	// (0x00057cd2) list_uniindi_pane

0x93e2,	// (0x00057cde) uniindi_top_pane

0x3a85,	// (0x00052381) bg_uniindi_top_pane

0x9401,	// (0x00057cfd) uniindi_top_pane_g1

0x9417,	// (0x00057d13) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005e620) uniindi_top_pane_g

0x9441,	// (0x00057d3d) uniindi_top_pane_t1

0x946b,	// (0x00057d67) list_single_uniindi_pane_ParamLimits

0x946b,	// (0x00057d67) list_single_uniindi_pane

0x7ae6,	// (0x000563e2) bg_uniindi_top_pane_g1

0x947e,	// (0x00057d7a) list_single_uniindi_pane_g1

0x9491,	// (0x00057d8d) list_single_uniindi_pane_t1

0x0218,	// (0x0004eb14) control_bg_pane

0x94b6,	// (0x00057db2) bg_sctrl_sk_pane_cp1

0x94bf,	// (0x00057dbb) bg_sctrl_sk_pane_cp2

0x94c8,	// (0x00057dc4) control_bg_pane_g1

0x94d1,	// (0x00057dcd) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005e629) control_bg_pane_g

0x754d,	// (0x00055e49) cell_indicator_nsta_pane_g1_ParamLimits

0xe10b,	// (0x0005ca07) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005e391) cell_indicator_nsta_pane_g_ParamLimits

0x335c,	// (0x00051c58) form2_midp_time_pane_t1_ParamLimits

0x1cf4,	// (0x000505f0) main_idle_act4_pane_ParamLimits

0x1cf4,	// (0x000505f0) main_idle_act4_pane

0xc706,	// (0x0005b002) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0005d36d) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0005d36d) tb_ext_find_pane

0x94da,	// (0x00057dd6) ai_gene_pane_1_cp1

0x4e45,	// (0x00053741) ai_gene_pane_2_cp1

0x94e2,	// (0x00057dde) list_single_idle_plugin_calendar_pane

0x94eb,	// (0x00057de7) list_single_idle_plugin_notification_pane

0x94f4,	// (0x00057df0) list_single_idle_plugin_player_pane

0xeacf,	// (0x0005d3cb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0005d3cb) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0005d3f3) main_idle_act4_pane_t1

0xeb0d,	// (0x0005d409) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005e62e) main_idle_act4_pane_t

0xeb23,	// (0x0005d41f) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0005d41f) middle_sk_idle_act4_pane

0xeb3f,	// (0x0005d43b) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0005d463) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0005d463) shortcut_wheel_idle_act4_pane

0x7ae6,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g1

0x7ae6,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g2

0x7ae6,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g3

0x7ae6,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g4

0x7ae6,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g5

0x9587,	// (0x00057e83) shortcut_wheel_idle_act4_pane_g6

0x958f,	// (0x00057e8b) shortcut_wheel_idle_act4_pane_g7

0x9597,	// (0x00057e93) shortcut_wheel_idle_act4_pane_g8

0x959f,	// (0x00057e9b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005e633) shortcut_wheel_idle_act4_pane_g

0xe2f0,	// (0x0005cbec) middle_sk_idle_act4_pane_g1_ParamLimits

0xe2f0,	// (0x0005cbec) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0005d4e0) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0005d4e0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005e656) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005e656) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0005d4f8) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0005d4f8) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0005d527) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0005d527) grid_ai_shortcut_pane

0xec48,	// (0x0005d544) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0005d544) list_highlight_pane_cp16

0xec55,	// (0x0005d551) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0005d551) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0005d55d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0005d55d) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0005d579) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0005d579) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005e65b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005e65b) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0005d58e) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0005d58e) cell_ai_shortcut_pane

0xecb5,	// (0x0005d5b1) cell_ai_shortcut_pane_g1_ParamLimits

0xecb5,	// (0x0005d5b1) cell_ai_shortcut_pane_g1

0x94da,	// (0x00057dd6) ai_gene_pane_1_cp2

0x96cf,	// (0x00057fcb) ai_gene_pane_2_cp2

0x96d7,	// (0x00057fd3) list_highlight_pane_cp15

0x96e0,	// (0x00057fdc) list_single_idle_plugin_calendar_pane_g1

0x96d7,	// (0x00057fd3) list_highlight_pane_cp17

0x96e8,	// (0x00057fe4) list_single_idle_plugin_calendar_pane_g1_copy1

0x96f0,	// (0x00057fec) list_single_idle_plugin_player_pane_g1

0x6e9a,	// (0x00055796) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005e662) list_single_idle_plugin_player_pane_g

0x96f8,	// (0x00057ff4) list_single_idle_plugin_player_pane_t1

0x9706,	// (0x00058002) list_single_idle_plugin_player_pane_t2

0x9714,	// (0x00058010) list_single_idle_plugin_player_pane_t3

0x9722,	// (0x0005801e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005e667) list_single_idle_plugin_player_pane_t

0x9730,	// (0x0005802c) wait_bar_pane_cp15

0x9738,	// (0x00058034) grid_ai_notification_pane

0x6e9a,	// (0x00055796) list_single_idle_plugin_notification_pane_g1

0xecd7,	// (0x0005d5d3) cell_ai_notification_pane_ParamLimits

0xecd7,	// (0x0005d5d3) cell_ai_notification_pane

0x976f,	// (0x0005806b) cell_ai_notification_pane_g1

0x9777,	// (0x00058073) cell_ai_notification_pane_t1

0xece4,	// (0x0005d5e0) tb_ext_find_button_pane

0xecec,	// (0x0005d5e8) tb_ext_find_pane_g1

0xecf4,	// (0x0005d5f0) tb_ext_find_pane_t1

0x46eb,	// (0x00052fe7) tb_ext_find_button_pane_g1

0x97a3,	// (0x0005809f) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005e670) tb_ext_find_button_pane_g

0xeaf7,	// (0x0005d3f3) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0005d409) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005e62e) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0005d43b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0005d453) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0005d453) sat_plugin_idle_act4_pane

0xed02,	// (0x0005d5fe) sat_plugin_idle_act4_pane_t1_ParamLimits

0xed02,	// (0x0005d5fe) sat_plugin_idle_act4_pane_t1

0xed1a,	// (0x0005d616) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed1a,	// (0x0005d616) sat_plugin_idle_act4_pane_t2

0xed32,	// (0x0005d62e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed32,	// (0x0005d62e) sat_plugin_idle_act4_pane_t3

0xed4a,	// (0x0005d646) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed4a,	// (0x0005d646) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005e675) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005e675) sat_plugin_idle_act4_pane_t

0x02dd,	// (0x0004ebd9) popup_battery_window_ParamLimits

0x02dd,	// (0x0004ebd9) popup_battery_window

0x3a85,	// (0x00052381) bg_popup_sub_pane_cp25_ParamLimits

0x3a85,	// (0x00052381) bg_popup_sub_pane_cp25

0x97f8,	// (0x000580f4) popup_battery_window_g1_ParamLimits

0x97f8,	// (0x000580f4) popup_battery_window_g1

0x9804,	// (0x00058100) popup_battery_window_t1_ParamLimits

0x9804,	// (0x00058100) popup_battery_window_t1

0x9816,	// (0x00058112) popup_battery_window_t2_ParamLimits

0x9816,	// (0x00058112) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005e67e) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005e67e) popup_battery_window_t

0xd581,	// (0x0005be7d) midp_canvas_pane_ParamLimits

0xd5de,	// (0x0005beda) midp_keypad_pane_ParamLimits

0xd5de,	// (0x0005beda) midp_keypad_pane

0x5048,	// (0x00053944) main_midp_pane_ParamLimits

0x75b6,	// (0x00055eb2) signal_pane_g2_cp_ParamLimits

0xed62,	// (0x0005d65e) aid_size_cell_midp_keypad_ParamLimits

0xed62,	// (0x0005d65e) aid_size_cell_midp_keypad

0xed80,	// (0x0005d67c) midp_keyp_game_grid_pane_ParamLimits

0xed80,	// (0x0005d67c) midp_keyp_game_grid_pane

0xeda7,	// (0x0005d6a3) midp_keyp_rocker_pane_ParamLimits

0xeda7,	// (0x0005d6a3) midp_keyp_rocker_pane

0xedf8,	// (0x0005d6f4) midp_keyp_sk_left_pane_ParamLimits

0xedf8,	// (0x0005d6f4) midp_keyp_sk_left_pane

0xee4c,	// (0x0005d748) midp_keyp_sk_right_pane_ParamLimits

0xee4c,	// (0x0005d748) midp_keyp_sk_right_pane

0x3708,	// (0x00052004) bg_button_pane_cp03

0xeea0,	// (0x0005d79c) midp_keyp_sk_left_pane_g1

0x3708,	// (0x00052004) bg_button_pane_cp04

0xeea0,	// (0x0005d79c) midp_keyp_sk_right_pane_g1

0x7ae6,	// (0x000563e2) midp_keyp_rocker_pane_g1

0xeea9,	// (0x0005d7a5) keyp_game_cell_pane_ParamLimits

0xeea9,	// (0x0005d7a5) keyp_game_cell_pane

0x3708,	// (0x00052004) bg_button_pane_cp02

0xeecd,	// (0x0005d7c9) keyp_game_cell_pane_g1

0xb833,	// (0x0005a12f) popup_fep_vkb2_window_ParamLimits

0xb833,	// (0x0005a12f) popup_fep_vkb2_window

0xcaac,	// (0x0005b3a8) aid_size_cell_vkb2_ParamLimits

0xcaac,	// (0x0005b3a8) aid_size_cell_vkb2

0xcae2,	// (0x0005b3de) popup_fep_vkb2_window_g1_ParamLimits

0xcae2,	// (0x0005b3de) popup_fep_vkb2_window_g1

0xcb32,	// (0x0005b42e) vkb2_area_bottom_pane_ParamLimits

0xcb32,	// (0x0005b42e) vkb2_area_bottom_pane

0xcb86,	// (0x0005b482) vkb2_area_keypad_pane_ParamLimits

0xcb86,	// (0x0005b482) vkb2_area_keypad_pane

0xcbce,	// (0x0005b4ca) vkb2_area_top_pane_ParamLimits

0xcbce,	// (0x0005b4ca) vkb2_area_top_pane

0xcc54,	// (0x0005b550) vkb2_top_entry_pane_ParamLimits

0xcc54,	// (0x0005b550) vkb2_top_entry_pane

0xcc81,	// (0x0005b57d) vkb2_top_grid_left_pane_ParamLimits

0xcc81,	// (0x0005b57d) vkb2_top_grid_left_pane

0xcca1,	// (0x0005b59d) vkb2_top_grid_right_pane_ParamLimits

0xcca1,	// (0x0005b59d) vkb2_top_grid_right_pane

0x2428,	// (0x00050d24) vkb2_cell_keypad_pane_ParamLimits

0x2428,	// (0x00050d24) vkb2_cell_keypad_pane

0xcce7,	// (0x0005b5e3) vkb2_area_bottom_grid_pane_ParamLimits

0xcce7,	// (0x0005b5e3) vkb2_area_bottom_grid_pane

0xcd11,	// (0x0005b60d) vkb2_area_bottom_pane_g1_ParamLimits

0xcd11,	// (0x0005b60d) vkb2_area_bottom_pane_g1

0xcd37,	// (0x0005b633) vkb2_area_bottom_pane_g2_ParamLimits

0xcd37,	// (0x0005b633) vkb2_area_bottom_pane_g2

0xcd68,	// (0x0005b664) vkb2_area_bottom_pane_g3_ParamLimits

0xcd68,	// (0x0005b664) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005e683) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005e683) vkb2_area_bottom_pane_g

0x25d2,	// (0x00050ece) vkb2_top_cell_left_pane_ParamLimits

0x25d2,	// (0x00050ece) vkb2_top_cell_left_pane

0xeed6,	// (0x0005d7d2) vkb2_top_entry_pane_g1_ParamLimits

0xeed6,	// (0x0005d7d2) vkb2_top_entry_pane_g1

0xeee4,	// (0x0005d7e0) vkb2_top_entry_pane_t1_ParamLimits

0xeee4,	// (0x0005d7e0) vkb2_top_entry_pane_t1

0x99c7,	// (0x000582c3) vkb2_top_entry_pane_t2_ParamLimits

0x99c7,	// (0x000582c3) vkb2_top_entry_pane_t2

0x99f9,	// (0x000582f5) vkb2_top_entry_pane_t3_ParamLimits

0x99f9,	// (0x000582f5) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005e68a) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005e68a) vkb2_top_entry_pane_t

0xcdd2,	// (0x0005b6ce) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdd2,	// (0x0005b6ce) vkb2_top_grid_right_pane_g1

0x2635,	// (0x00050f31) vkb2_top_grid_right_pane_g2_ParamLimits

0x2635,	// (0x00050f31) vkb2_top_grid_right_pane_g2

0x264d,	// (0x00050f49) vkb2_top_grid_right_pane_g3_ParamLimits

0x264d,	// (0x00050f49) vkb2_top_grid_right_pane_g3

0xcde8,	// (0x0005b6e4) vkb2_top_grid_right_pane_g4_ParamLimits

0xcde8,	// (0x0005b6e4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005e691) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005e691) vkb2_top_grid_right_pane_g

0x267b,	// (0x00050f77) vkb2_top_cell_left_pane_g1

0x2692,	// (0x00050f8e) vkb2_cell_keypad_pane_g1_ParamLimits

0x2692,	// (0x00050f8e) vkb2_cell_keypad_pane_g1

0x9a1d,	// (0x00058319) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a1d,	// (0x00058319) vkb2_cell_keypad_pane_t1

0x26a0,	// (0x00050f9c) vkb2_cell_bottom_grid_pane_ParamLimits

0x26a0,	// (0x00050f9c) vkb2_cell_bottom_grid_pane

0x26d9,	// (0x00050fd5) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0005d484) aid_call2_pane_cp02

0xeb90,	// (0x0005d48c) aid_call_pane_cp02

0xeb98,	// (0x0005d494) clock_digital_number_pane_cp10

0xeba0,	// (0x0005d49c) clock_digital_number_pane_cp11

0xeba8,	// (0x0005d4a4) clock_digital_number_pane_cp12

0xebb0,	// (0x0005d4ac) clock_digital_number_pane_cp13

0xebb8,	// (0x0005d4b4) clock_digital_separator_pane_cp10

0x46eb,	// (0x00052fe7) popup_clock_digital_analogue_window_cp2_g1

0x46eb,	// (0x00052fe7) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0005d4bc) popup_clock_digital_analogue_window_cp2_g3

0x46eb,	// (0x00052fe7) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0005d4bc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005e646) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0005d4c4) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0005d4d2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005e651) popup_clock_digital_analogue_window_cp2_t

0x7ae6,	// (0x000563e2) clock_digital_number_pane_cp10_g1

0x7ae6,	// (0x000563e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005e42d) clock_digital_number_pane_cp10_g

0x7ae6,	// (0x000563e2) clock_digital_separator_pane_cp10_g1

0x7ae6,	// (0x000563e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005e42d) clock_digital_separator_pane_cp10_g

0x9423,	// (0x00057d1f) uniindi_top_pane_g3

0x9434,	// (0x00057d30) uniindi_top_pane_g4

0x24b3,	// (0x00050daf) vkb2_row_keypad_pane_ParamLimits

0x24b3,	// (0x00050daf) vkb2_row_keypad_pane

0x26f5,	// (0x00050ff1) vkb2_cell_t_keypad_pane_ParamLimits

0x26f5,	// (0x00050ff1) vkb2_cell_t_keypad_pane

0x2705,	// (0x00051001) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2705,	// (0x00051001) vkb2_cell_t_keypad_pane_cp08

0x2718,	// (0x00051014) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2718,	// (0x00051014) vkb2_cell_t_keypad_pane_cp09

0x272c,	// (0x00051028) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x272c,	// (0x00051028) vkb2_cell_t_keypad_pane_cp01

0x273d,	// (0x00051039) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x273d,	// (0x00051039) vkb2_cell_t_keypad_pane_cp02

0x274e,	// (0x0005104a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x274e,	// (0x0005104a) vkb2_cell_t_keypad_pane_cp03

0x275f,	// (0x0005105b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x275f,	// (0x0005105b) vkb2_cell_t_keypad_pane_cp04

0x2770,	// (0x0005106c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2770,	// (0x0005106c) vkb2_cell_t_keypad_pane_cp05

0x2781,	// (0x0005107d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2781,	// (0x0005107d) vkb2_cell_t_keypad_pane_cp06

0x2792,	// (0x0005108e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2792,	// (0x0005108e) vkb2_cell_t_keypad_pane_cp07

0x27a3,	// (0x0005109f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27a3,	// (0x0005109f) vkb2_cell_t_keypad_pane_cp10

0x1f59,	// (0x00050855) vkb2_cell_t_keypad_pane_g1

0x9a34,	// (0x00058330) vkb2_cell_t_keypad_pane_t1

0x0218,	// (0x0004eb14) popup_grid_graphic2_window

0xef1d,	// (0x0005d819) aid_size_cell_graphic2_ParamLimits

0xef1d,	// (0x0005d819) aid_size_cell_graphic2

0xef5b,	// (0x0005d857) bg_popup_window_pane_cp21_ParamLimits

0xef5b,	// (0x0005d857) bg_popup_window_pane_cp21

0xef69,	// (0x0005d865) graphic2_pages_pane_ParamLimits

0xef69,	// (0x0005d865) graphic2_pages_pane

0xefbf,	// (0x0005d8bb) grid_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0005d8bb) grid_graphic2_control_pane

0xf007,	// (0x0005d903) grid_graphic2_pane_ParamLimits

0xf007,	// (0x0005d903) grid_graphic2_pane

0xf08e,	// (0x0005d98a) cell_graphic2_pane

0x0218,	// (0x0004eb14) main_comp_mode_pane

0x8ca3,	// (0x0005759f) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0005d1cb) bg_popup_window_pane_cp19_ParamLimits

0x9079,	// (0x00057975) bg_touch_area_indi_pane_ParamLimits

0x9079,	// (0x00057975) bg_touch_area_indi_pane

0x908f,	// (0x0005798b) bg_touch_area_indi_pane_cp01_ParamLimits

0x908f,	// (0x0005798b) bg_touch_area_indi_pane_cp01

0x90a5,	// (0x000579a1) bg_touch_area_indi_pane_cp02_ParamLimits

0x90a5,	// (0x000579a1) bg_touch_area_indi_pane_cp02

0x90bd,	// (0x000579b9) bg_touch_area_indi_pane_cp03_ParamLimits

0x90bd,	// (0x000579b9) bg_touch_area_indi_pane_cp03

0x90d7,	// (0x000579d3) popup_slider_window_g1_ParamLimits

0x90f3,	// (0x000579ef) popup_slider_window_g2_ParamLimits

0x910f,	// (0x00057a0b) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005e5db) popup_slider_window_g_ParamLimits

0x916b,	// (0x00057a67) popup_slider_window_t1_ParamLimits

0x91df,	// (0x00057adb) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0005d98a) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0005d9e5) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0005d9e5) bg_button_pane_cp10

0xf0fc,	// (0x0005d9f8) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0005d9f8) bg_button_pane_cp11

0xf10f,	// (0x0005da0b) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0005da0b) graphic2_pages_pane_g1

0xf12a,	// (0x0005da26) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0005da26) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005e69f) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005e69f) graphic2_pages_pane_g

0xf142,	// (0x0005da3e) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0005da3e) graphic2_pages_pane_t1

0xf15a,	// (0x0005da56) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0005da56) cell_graphic2_control_pane

0xf18c,	// (0x0005da88) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0005da88) cell_graphic2_pane_g1

0xe2fe,	// (0x0005cbfa) cell_graphic2_pane_g2_ParamLimits

0xe2fe,	// (0x0005cbfa) cell_graphic2_pane_g2

0xeca8,	// (0x0005d5a4) cell_graphic2_pane_g3_ParamLimits

0xeca8,	// (0x0005d5a4) cell_graphic2_pane_g3

0xe30b,	// (0x0005cc07) cell_graphic2_pane_g4_ParamLimits

0xe30b,	// (0x0005cc07) cell_graphic2_pane_g4

0xf199,	// (0x0005da95) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0005da95) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005e6a4) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005e6a4) cell_graphic2_pane_g

0xf1b9,	// (0x0005dab5) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0005dab5) cell_graphic2_pane_t1

0x6247,	// (0x00054b43) grid_highlight_pane_cp11_ParamLimits

0x6247,	// (0x00054b43) grid_highlight_pane_cp11

0x3a85,	// (0x00052381) bg_button_pane_cp05

0xf202,	// (0x0005dafe) cell_graphic2_control_pane_g1

0x7ae6,	// (0x000563e2) bg_touch_area_indi_pane_g1

0x9d10,	// (0x0005860c) aid_cmod_rocker_key_size

0x9d1a,	// (0x00058616) aid_cmode_itu_key_size

0x9d24,	// (0x00058620) main_cmode_video_pane

0x9d2e,	// (0x0005862a) main_comp_mode_itu_pane

0x9d3a,	// (0x00058636) main_comp_mode_rocker_pane

0x9d46,	// (0x00058642) cell_cmode_rocker_pane_ParamLimits

0x9d46,	// (0x00058642) cell_cmode_rocker_pane

0x9d58,	// (0x00058654) cell_cmode_itu_pane_ParamLimits

0x9d58,	// (0x00058654) cell_cmode_itu_pane

0x4077,	// (0x00052973) bg_button_pane_cp06_ParamLimits

0x4077,	// (0x00052973) bg_button_pane_cp06

0x7d70,	// (0x0005666c) cell_cmode_rocker_pane_g1_ParamLimits

0x7d70,	// (0x0005666c) cell_cmode_rocker_pane_g1

0x9283,	// (0x00057b7f) cell_cmode_rocker_pane_g2_ParamLimits

0x9283,	// (0x00057b7f) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005e6b4) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005e6b4) cell_cmode_rocker_pane_g

0x3708,	// (0x00052004) bg_button_pane_cp07

0x9d6d,	// (0x00058669) cell_cmode_itu_pane_g1

0x9d76,	// (0x00058672) cell_cmode_itu_pane_t1

0x9d84,	// (0x00058680) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005e6b9) cell_cmode_itu_pane_t

0x94a6,	// (0x00057da2) aid_touch_ctrl_left

0x94ae,	// (0x00057daa) aid_touch_ctrl_right

0x3708,	// (0x00052004) compa_mode_pane

0xf226,	// (0x0005db22) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0005db2c) aid_cmode_itu_key_size_cp

0x9da6,	// (0x000586a2) compa_mode_pane_g1

0x9dae,	// (0x000586aa) compa_mode_pane_g2

0x9db6,	// (0x000586b2) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005e6be) compa_mode_pane_g

0xf23a,	// (0x0005db36) main_comp_mode_itu_pane_cp

0xf242,	// (0x0005db3e) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0005db46) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0005db46) cell_cmode_itu_pane_cp

0xf25f,	// (0x0005db5b) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0005db5b) cell_cmode_rocker_pane_cp

0x4077,	// (0x00052973) bg_button_pane_cp06_cp_ParamLimits

0x4077,	// (0x00052973) bg_button_pane_cp06_cp

0x7d70,	// (0x0005666c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7d70,	// (0x0005666c) cell_cmode_rocker_pane_g1_cp

0x7ae6,	// (0x000563e2) cell_cmode_rocker_pane_g2_cp

0x3708,	// (0x00052004) bg_button_pane_cp07_cp

0xf271,	// (0x0005db6d) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0005db76) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0005db76) cell_cmode_itu_pane_t2_cp

0xdf07,	// (0x0005c803) settings_code_pane_cp2

0x37fc,	// (0x000520f8) bg_popup_window_pane_cp3_ParamLimits

0x3c5f,	// (0x0005255b) heading_pane_cp3_ParamLimits

0x3c6b,	// (0x00052567) listscroll_popup_graphic_pane_ParamLimits

0x1d02,	// (0x000505fe) fep_hwr_aid_pane_ParamLimits

0x2179,	// (0x00050a75) aid_touch_sctrl_top_ParamLimits

0x2194,	// (0x00050a90) sctrl_sk_top_pane_g1_ParamLimits

0x1f59,	// (0x00050855) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005e5f4) sctrl_sk_top_pane_g_ParamLimits

0x21a1,	// (0x00050a9d) sctrl_sk_top_pane_t1_ParamLimits

0x2179,	// (0x00050a75) aid_touch_sctrl_bottom_ParamLimits

0x21a1,	// (0x00050a9d) sctrl_sk_bottom_pane_t1_ParamLimits

0x93ef,	// (0x00057ceb) aid_area_touch_clock

0xcc16,	// (0x0005b512) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc16,	// (0x0005b512) aid_vkb2_area_top_pane_cell

0xccc1,	// (0x0005b5bd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccc1,	// (0x0005b5bd) aid_vkb2_area_bottom_pane_cell

0x997f,	// (0x0005827b) popup_char_count_window

0x9e03,	// (0x000586ff) popup_char_count_window_g1

0x9e0c,	// (0x00058708) popup_char_count_window_g2

0x9e15,	// (0x00058711) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005e6c5) popup_char_count_window_g

0x9e1e,	// (0x0005871a) popup_char_count_window_t1

0x2250,	// (0x00050b4c) popup_fep_char_preview_window_ParamLimits

0x2250,	// (0x00050b4c) popup_fep_char_preview_window

0xcc36,	// (0x0005b532) vkb2_top_candi_pane_ParamLimits

0xcc36,	// (0x0005b532) vkb2_top_candi_pane

0xf288,	// (0x0005db84) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0005db84) cell_vkb2_top_candi_pane

0x27b8,	// (0x000510b4) bg_popup_fep_char_preview_window_ParamLimits

0x27b8,	// (0x000510b4) bg_popup_fep_char_preview_window

0x27c6,	// (0x000510c2) popup_fep_char_preview_window_t1_ParamLimits

0x27c6,	// (0x000510c2) popup_fep_char_preview_window_t1

0x9e79,	// (0x00058775) bg_popup_fep_char_preview_window_g1

0x9e81,	// (0x0005877d) bg_popup_fep_char_preview_window_g2

0x9e89,	// (0x00058785) bg_popup_fep_char_preview_window_g3

0x9e91,	// (0x0005878d) bg_popup_fep_char_preview_window_g4

0x9e99,	// (0x00058795) bg_popup_fep_char_preview_window_g5

0x2800,	// (0x000510fc) bg_popup_fep_char_preview_window_g6

0x9ea1,	// (0x0005879d) bg_popup_fep_char_preview_window_g7

0x9ea9,	// (0x000587a5) bg_popup_fep_char_preview_window_g8

0x9eb1,	// (0x000587ad) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005e6cc) bg_popup_fep_char_preview_window_g

0x1f59,	// (0x00050855) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f59,	// (0x00050855) cell_vkb2_top_candi_pane_g1

0x1f67,	// (0x00050863) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f67,	// (0x00050863) cell_vkb2_top_candi_pane_g2

0x9741,	// (0x0005803d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9741,	// (0x0005803d) cell_vkb2_top_candi_pane_g3

0x2808,	// (0x00051104) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2808,	// (0x00051104) cell_vkb2_top_candi_pane_g4

0x823b,	// (0x00056b37) cell_vkb2_top_candi_pane_g5_ParamLimits

0x823b,	// (0x00056b37) cell_vkb2_top_candi_pane_g5

0x2829,	// (0x00051125) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2829,	// (0x00051125) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005e6df) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005e6df) cell_vkb2_top_candi_pane_g

0x2837,	// (0x00051133) cell_vkb2_top_candi_pane_t1

0x1b62,	// (0x0005045e) aid_size_touch_slider_mark_ParamLimits

0x1b62,	// (0x0005045e) aid_size_touch_slider_mark

0xefa5,	// (0x0005d8a1) grid_graphic2_catg_pane_ParamLimits

0xefa5,	// (0x0005d8a1) grid_graphic2_catg_pane

0xf061,	// (0x0005d95d) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0005d95d) popup_grid_graphic2_window_t1

0xf077,	// (0x0005d973) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0005d973) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005e69a) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005e69a) popup_grid_graphic2_window_t

0x3a85,	// (0x00052381) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0005dafe) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0005dbea) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0005dbea) cell_graphic2_catg_pane

0x3708,	// (0x00052004) bg_button_pane_cp12

0xf300,	// (0x0005dbfc) cell_graphic2_catg_pane_g1

0x93bb,	// (0x00057cb7) cell_tb_ext_pane_t1_ParamLimits

0x25f2,	// (0x00050eee) vkb2_top_cell_right_narrow_pane_ParamLimits

0x25f2,	// (0x00050eee) vkb2_top_cell_right_narrow_pane

0x260a,	// (0x00050f06) vkb2_top_cell_right_wide_pane_ParamLimits

0x260a,	// (0x00050f06) vkb2_top_cell_right_wide_pane

0x1cf4,	// (0x000505f0) bg_vkb2_func_pane_ParamLimits

0x1cf4,	// (0x000505f0) bg_vkb2_func_pane

0x267b,	// (0x00050f77) vkb2_top_cell_left_pane_g1_ParamLimits

0x1cf4,	// (0x000505f0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1cf4,	// (0x000505f0) bg_vkb2_fuc_pane_cp03

0x26d9,	// (0x00050fd5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5566,	// (0x00053e62) bg_vkb2_func_pane_g1

0x556e,	// (0x00053e6a) bg_vkb2_func_pane_g2

0x557e,	// (0x00053e7a) bg_vkb2_func_pane_g3

0x5576,	// (0x00053e72) bg_vkb2_func_pane_g4

0x5586,	// (0x00053e82) bg_vkb2_func_pane_g5

0x558e,	// (0x00053e8a) bg_vkb2_func_pane_g6

0x5596,	// (0x00053e92) bg_vkb2_func_pane_g7

0x559e,	// (0x00053e9a) bg_vkb2_func_pane_g8

0x555e,	// (0x00053e5a) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005e6ec) bg_vkb2_func_pane_g

0x1cf4,	// (0x000505f0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1cf4,	// (0x000505f0) bg_vkb2_fuc_pane_cp01

0x267b,	// (0x00050f77) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x267b,	// (0x00050f77) vkb2_top_cell_right_wide_pane_g1

0x1cf4,	// (0x000505f0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1cf4,	// (0x000505f0) bg_vkb2_fuc_pane_cp02

0x26d9,	// (0x00050fd5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26d9,	// (0x00050fd5) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0005d10b) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0005d10b) aid_touch_area_decrease

0xe843,	// (0x0005d13f) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0005d13f) aid_touch_area_increase

0xe86b,	// (0x0005d167) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0005d167) aid_touch_area_mute

0xe89b,	// (0x0005d197) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0005d197) aid_touch_area_slider

0xe8db,	// (0x0005d1d7) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0005d1d7) popup_slider_window_g4

0xe903,	// (0x0005d1ff) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0005d1ff) popup_slider_window_g5

0xe937,	// (0x0005d233) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0005d233) popup_slider_window_g6

0x9199,	// (0x00057a95) popup_slider_window_t2_ParamLimits

0x9199,	// (0x00057a95) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005e5e8) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005e5e8) popup_slider_window_t

0xe953,	// (0x0005d24f) slider_pane_ParamLimits

0xe953,	// (0x0005d24f) slider_pane

0x9ed4,	// (0x000587d0) slider_pane_g1_ParamLimits

0x9ed4,	// (0x000587d0) slider_pane_g1

0x9ee8,	// (0x000587e4) slider_pane_g2_ParamLimits

0x9ee8,	// (0x000587e4) slider_pane_g2

0x9efe,	// (0x000587fa) slider_pane_g3_ParamLimits

0x9efe,	// (0x000587fa) slider_pane_g3

0x0003,

0xfe03,	// (0x0005e6ff) slider_pane_g_ParamLimits

0xfe03,	// (0x0005e6ff) slider_pane_g

0xc74e,	// (0x0005b04a) popup_tb_float_extension_window_ParamLimits

0xc74e,	// (0x0005b04a) popup_tb_float_extension_window

0x9f2a,	// (0x00058826) aid_size_cell_tb_float_ext

0x3708,	// (0x00052004) bg_popup_sub_window_cp28

0x9f36,	// (0x00058832) grid_tb_float_ext_pane

0x9f40,	// (0x0005883c) cell_tb_float_ext_pane_ParamLimits

0x9f40,	// (0x0005883c) cell_tb_float_ext_pane

0x9f5a,	// (0x00058856) cell_tb_float_ext_pane_g1

0x9f63,	// (0x0005885f) grid_highlight_pane_cp12

0xc8fc,	// (0x0005b1f8) cell_last_hwr_side_pane_ParamLimits

0xc8fc,	// (0x0005b1f8) cell_last_hwr_side_pane

0x7ae6,	// (0x000563e2) cell_last_hwr_side_pane_g1

0x9f6c,	// (0x00058868) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005e708) cell_last_hwr_side_pane_g

0xcd9d,	// (0x0005b699) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd9d,	// (0x0005b699) vkb2_area_bottom_space_btn_pane

0x1f59,	// (0x00050855) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a34,	// (0x00058330) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2837,	// (0x00051133) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2856,	// (0x00051152) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2856,	// (0x00051152) vkb2_area_bottom_space_btn_pane_g1

0x2890,	// (0x0005118c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2890,	// (0x0005118c) vkb2_area_bottom_space_btn_pane_g2

0x28c6,	// (0x000511c2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28c6,	// (0x000511c2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005e70d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005e70d) vkb2_area_bottom_space_btn_pane_g

0x1db7,	// (0x000506b3) cel_fep_hwr_func_pane_ParamLimits

0x1db7,	// (0x000506b3) cel_fep_hwr_func_pane

0xc8d1,	// (0x0005b1cd) cell_hwr_side_button_pane_ParamLimits

0xc8d1,	// (0x0005b1cd) cell_hwr_side_button_pane

0x93ef,	// (0x00057ceb) aid_area_touch_clock_ParamLimits

0x3a85,	// (0x00052381) bg_uniindi_top_pane_ParamLimits

0x9401,	// (0x00057cfd) uniindi_top_pane_g1_ParamLimits

0x9417,	// (0x00057d13) uniindi_top_pane_g2_ParamLimits

0x9423,	// (0x00057d1f) uniindi_top_pane_g3_ParamLimits

0x9434,	// (0x00057d30) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005e620) uniindi_top_pane_g_ParamLimits

0x9441,	// (0x00057d3d) uniindi_top_pane_t1_ParamLimits

0x3a85,	// (0x00052381) bg_vkb2_func_pane_cp01_ParamLimits

0x3a85,	// (0x00052381) bg_vkb2_func_pane_cp01

0x9f75,	// (0x00058871) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f75,	// (0x00058871) cel_fep_hwr_func_pane_g1

0x3a85,	// (0x00052381) bg_vkb2_func_pane_cp02_ParamLimits

0x3a85,	// (0x00052381) bg_vkb2_func_pane_cp02

0x9f75,	// (0x00058871) cell_hwr_side_button_pane_g1_ParamLimits

0x9f75,	// (0x00058871) cell_hwr_side_button_pane_g1

0x53df,	// (0x00053cdb) status_pane_g4_ParamLimits

0x53df,	// (0x00053cdb) status_pane_g4

0x53f9,	// (0x00053cf5) status_pane_t1

0x783a,	// (0x00056136) form2_midp_gauge_slider_cont_pane

0x7842,	// (0x0005613e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1d6,	// (0x0005cad2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1e8,	// (0x0005cae4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005e3e0) form2_midp_gauge_slider_pane_t_ParamLimits

0x7878,	// (0x00056174) form2_midp_slider_pane_ParamLimits

0x2210,	// (0x00050b0c) aid_size_cell_func_vkb2_ParamLimits

0x2210,	// (0x00050b0c) aid_size_cell_func_vkb2

0x9f16,	// (0x00058812) slider_pane_g4_ParamLimits

0x9f16,	// (0x00058812) slider_pane_g4

0xcdfe,	// (0x0005b6fa) form2_midp_gauge_slider_pane_t2_cp01

0xce0c,	// (0x0005b708) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce0c,	// (0x0005b708) form2_midp_gauge_slider_pane_t3_cp01

0x293b,	// (0x00051237) form2_midp_slider_pane_cp01

0x3708,	// (0x00052004) navi_smil_pane

0x9fae,	// (0x000588aa) navi_smil_pane_g1

0x9fb6,	// (0x000588b2) navi_smil_pane_t1

0x9f83,	// (0x0005887f) form2_midp_slider_pane_g1

0x9f8c,	// (0x00058888) form2_midp_slider_pane_g2

0x9f94,	// (0x00058890) form2_midp_slider_pane_g3

0x9f83,	// (0x0005887f) form2_midp_slider_pane_g4

0xf309,	// (0x0005dc05) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005e716) form2_midp_slider_pane_g

0x2900,	// (0x000511fc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2900,	// (0x000511fc) vkb2_area_bottom_space_btn_pane_g4

0xd851,	// (0x0005c14d) lc0_navi_pane_ParamLimits

0xd851,	// (0x0005c14d) lc0_navi_pane

0xd8bb,	// (0x0005c1b7) lc0_stat_indi_pane_ParamLimits

0xd8bb,	// (0x0005c1b7) lc0_stat_indi_pane

0xd96a,	// (0x0005c266) ls0_title_pane_ParamLimits

0xd96a,	// (0x0005c266) ls0_title_pane

0x4077,	// (0x00052973) bg_popup_sub_pane_cp14_ParamLimits

0x93d6,	// (0x00057cd2) list_uniindi_pane_ParamLimits

0x93e2,	// (0x00057cde) uniindi_top_pane_ParamLimits

0x947e,	// (0x00057d7a) list_single_uniindi_pane_g1_ParamLimits

0x9491,	// (0x00057d8d) list_single_uniindi_pane_t1_ParamLimits

0xce29,	// (0x0005b725) lc0_stat_clock_pane_ParamLimits

0xce29,	// (0x0005b725) lc0_stat_clock_pane

0xf314,	// (0x0005dc10) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0005dc10) lc0_stat_indi_pane_g1

0xf321,	// (0x0005dc1d) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0005dc1d) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005e721) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005e721) lc0_stat_indi_pane_g

0xce36,	// (0x0005b732) lc0_uni_indicator_pane_ParamLimits

0xce36,	// (0x0005b732) lc0_uni_indicator_pane

0xf32e,	// (0x0005dc2a) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0005dc2a) ls0_title_pane_g1

0xf342,	// (0x0005dc3e) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0005dc3e) ls0_title_pane_t1

0xce43,	// (0x0005b73f) lc0_uni_indicator_pane_g1_ParamLimits

0xce43,	// (0x0005b73f) lc0_uni_indicator_pane_g1

0xa028,	// (0x00058924) lc0_stat_clock_pane_t1

0x0218,	// (0x0004eb14) main_ai5_pane

0xa036,	// (0x00058932) ai5_sk_pane_ParamLimits

0xa036,	// (0x00058932) ai5_sk_pane

0xf370,	// (0x0005dc6c) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0005dc6c) cell_ai5_widget_pane

0xa0f5,	// (0x000589f1) aid_size_cell_widget_grid

0xa10b,	// (0x00058a07) bg_ai5_widget_pane_ParamLimits

0xa10b,	// (0x00058a07) bg_ai5_widget_pane

0xa17f,	// (0x00058a7b) cell_ai5_widget_pane_g2

0xa18f,	// (0x00058a8b) cell_ai5_widget_pane_g3

0xa1a6,	// (0x00058aa2) cell_ai5_widget_pane_g4

0xa1b2,	// (0x00058aae) cell_ai5_widget_pane_g5

0xa1be,	// (0x00058aba) cell_ai5_widget_pane_g6

0xa1ca,	// (0x00058ac6) cell_ai5_widget_pane_g7

0xa212,	// (0x00058b0e) cell_ai5_widget_pane_t1_ParamLimits

0xa212,	// (0x00058b0e) cell_ai5_widget_pane_t1

0xa22f,	// (0x00058b2b) cell_ai5_widget_pane_t2_ParamLimits

0xa22f,	// (0x00058b2b) cell_ai5_widget_pane_t2

0xa247,	// (0x00058b43) cell_ai5_widget_pane_t3_ParamLimits

0xa247,	// (0x00058b43) cell_ai5_widget_pane_t3

0xa25f,	// (0x00058b5b) cell_ai5_widget_pane_t4_ParamLimits

0xa25f,	// (0x00058b5b) cell_ai5_widget_pane_t4

0xa27c,	// (0x00058b78) cell_ai5_widget_pane_t5_ParamLimits

0xa27c,	// (0x00058b78) cell_ai5_widget_pane_t5

0xa29b,	// (0x00058b97) cell_ai5_widget_pane_t6_ParamLimits

0xa29b,	// (0x00058b97) cell_ai5_widget_pane_t6

0xa2ad,	// (0x00058ba9) cell_ai5_widget_pane_t7_ParamLimits

0xa2ad,	// (0x00058ba9) cell_ai5_widget_pane_t7

0xa2c6,	// (0x00058bc2) cell_ai5_widget_pane_t8_ParamLimits

0xa2c6,	// (0x00058bc2) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005e73b) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005e73b) cell_ai5_widget_pane_t

0xa31a,	// (0x00058c16) grid_ai5_widget_pane

0x4077,	// (0x00052973) highlight_cell_ai5_widget_pane_ParamLimits

0x4077,	// (0x00052973) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0005dcd2) ai5_sk_left_pane

0xf3e0,	// (0x0005dcdc) ai5_sk_middle_pane

0xf3ea,	// (0x0005dce6) ai5_sk_right_pane

0xa34f,	// (0x00058c4b) bg_ai5_widget_pane_g1_ParamLimits

0xa34f,	// (0x00058c4b) bg_ai5_widget_pane_g1

0xa35b,	// (0x00058c57) bg_ai5_widget_pane_g2_ParamLimits

0xa35b,	// (0x00058c57) bg_ai5_widget_pane_g2

0xa367,	// (0x00058c63) bg_ai5_widget_pane_g3_ParamLimits

0xa367,	// (0x00058c63) bg_ai5_widget_pane_g3

0xa373,	// (0x00058c6f) bg_ai5_widget_pane_g4_ParamLimits

0xa373,	// (0x00058c6f) bg_ai5_widget_pane_g4

0xa37f,	// (0x00058c7b) bg_ai5_widget_pane_g5_ParamLimits

0xa37f,	// (0x00058c7b) bg_ai5_widget_pane_g5

0xa38b,	// (0x00058c87) bg_ai5_widget_pane_g6_ParamLimits

0xa38b,	// (0x00058c87) bg_ai5_widget_pane_g6

0xa397,	// (0x00058c93) bg_ai5_widget_pane_g7_ParamLimits

0xa397,	// (0x00058c93) bg_ai5_widget_pane_g7

0xa3a3,	// (0x00058c9f) bg_ai5_widget_pane_g8_ParamLimits

0xa3a3,	// (0x00058c9f) bg_ai5_widget_pane_g8

0xa3af,	// (0x00058cab) bg_ai5_widget_pane_g9_ParamLimits

0xa3af,	// (0x00058cab) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005e750) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005e750) bg_ai5_widget_pane_g

0xa3e1,	// (0x00058cdd) cell_shortcut_ai5_widget_pane_ParamLimits

0xa3e1,	// (0x00058cdd) cell_shortcut_ai5_widget_pane

0x4cfe,	// (0x000535fa) bg_cell_shortcut_ai5_widget_pane

0xa3f2,	// (0x00058cee) cell_grid_ai5_widget_pane_g1

0x4cfe,	// (0x000535fa) highlight_cell_shortcut_ai5_widget_pane

0x5566,	// (0x00053e62) ai5_sk_left_pane_g1

0xa3fb,	// (0x00058cf7) ai5_sk_left_pane_g2

0xa403,	// (0x00058cff) ai5_sk_left_pane_g3

0xa40b,	// (0x00058d07) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005e763) ai5_sk_left_pane_g

0xa413,	// (0x00058d0f) ai5_sk_left_pane_t1

0x556e,	// (0x00053e6a) ai5_sk_right_pane_g1

0xa421,	// (0x00058d1d) ai5_sk_right_pane_g2

0xa429,	// (0x00058d25) ai5_sk_right_pane_g3

0xa431,	// (0x00058d2d) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005e76c) ai5_sk_right_pane_g

0xa439,	// (0x00058d35) ai5_sk_right_pane_t1

0x556e,	// (0x00053e6a) ai5_sk_middle_pane_g1

0x5566,	// (0x00053e62) ai5_sk_middle_pane_g2

0x5586,	// (0x00053e82) ai5_sk_middle_pane_g3

0xa429,	// (0x00058d25) ai5_sk_middle_pane_g4

0xa403,	// (0x00058cff) ai5_sk_middle_pane_g5

0xa447,	// (0x00058d43) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0005dcf0) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005e775) ai5_sk_middle_pane_g

0xd73d,	// (0x0005c039) aid_touch_area_size_lc0_ParamLimits

0xd73d,	// (0x0005c039) aid_touch_area_size_lc0

0x1f88,	// (0x00050884) cell_hwr_candidate_pane_t1_ParamLimits

0x50aa,	// (0x000539a6) aid_touch_navi_pane

0xda63,	// (0x0005c35f) status_dt_navi_pane_ParamLimits

0xda63,	// (0x0005c35f) status_dt_navi_pane

0xda7b,	// (0x0005c377) status_dt_sta_pane_ParamLimits

0xda7b,	// (0x0005c377) status_dt_sta_pane

0xf3fc,	// (0x0005dcf8) dt_sta_controll_pane

0xf409,	// (0x0005dd05) dt_sta_indi_pane

0xf416,	// (0x0005dd12) dt_sta_title_pane

0x3a85,	// (0x00052381) bg_dt_sta_indi_pane_ParamLimits

0x3a85,	// (0x00052381) bg_dt_sta_indi_pane

0xf428,	// (0x0005dd24) dt_sta_battery_pane

0xf430,	// (0x0005dd2c) dt_sta_indi_pane_g1

0xa499,	// (0x00058d95) dt_sta_indi_pane_g2

0xa4a2,	// (0x00058d9e) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005e784) dt_sta_indi_pane_g

0xa4ab,	// (0x00058da7) dt_sta_signal_pane

0x4077,	// (0x00052973) bg_dt_sta_title_pane_ParamLimits

0x4077,	// (0x00052973) bg_dt_sta_title_pane

0xa4b4,	// (0x00058db0) dt_sta_title_pane_g1

0xa4bc,	// (0x00058db8) dt_sta_title_pane_t1_ParamLimits

0xa4bc,	// (0x00058db8) dt_sta_title_pane_t1

0x3708,	// (0x00052004) bg_dt_sta_control_pane

0xf439,	// (0x0005dd35) dt_sta_controll_pane_g1

0xa4da,	// (0x00058dd6) bg_dt_sta_title_pane_g1

0xa4e3,	// (0x00058ddf) bg_dt_sta_title_pane_g2

0xa4ec,	// (0x00058de8) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005e78b) bg_dt_sta_title_pane_g

0x7ae6,	// (0x000563e2) bg_dt_sta_indi_pane_g1

0xa4f5,	// (0x00058df1) dt_sta_signal_pane_g1

0xa4fd,	// (0x00058df9) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005e792) dt_sta_signal_pane_g

0xa505,	// (0x00058e01) dt_sta_battery_pane_g1

0xa50e,	// (0x00058e0a) dt_sta_battery_pane_t1

0x7ae6,	// (0x000563e2) bg_dt_sta_control_pane_g1

0x47fd,	// (0x000530f9) fep_china_uni_eep_pane

0x4805,	// (0x00053101) fep_china_uni_entry_pane_ParamLimits

0x4815,	// (0x00053111) popup_fep_china_uni_window_g1_ParamLimits

0x4825,	// (0x00053121) popup_fep_china_uni_window_g2_ParamLimits

0x4825,	// (0x00053121) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005e01e) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005e01e) popup_fep_china_uni_window_g

0xa51d,	// (0x00058e19) fep_china_uni_eep_pane_g1

0xa525,	// (0x00058e21) fep_china_uni_eep_pane_t1

0x9fa5,	// (0x000588a1) aid_touch_area_size_smil_player

0x5206,	// (0x00053b02) lc0_clock_pane

0x53ed,	// (0x00053ce9) status_pane_g5_ParamLimits

0x53ed,	// (0x00053ce9) status_pane_g5

0xc2d0,	// (0x0005abcc) popup_keymap_window

0x53ab,	// (0x00053ca7) status_icon_pane

0xa18f,	// (0x00058a8b) cell_ai5_widget_pane_g3_ParamLimits

0xa1a6,	// (0x00058aa2) cell_ai5_widget_pane_g4_ParamLimits

0xa1b2,	// (0x00058aae) cell_ai5_widget_pane_g5_ParamLimits

0xa1d6,	// (0x00058ad2) cell_ai5_widget_pane_g8_ParamLimits

0xa1d6,	// (0x00058ad2) cell_ai5_widget_pane_g8

0xa1ea,	// (0x00058ae6) cell_ai5_widget_pane_g9_ParamLimits

0xa1ea,	// (0x00058ae6) cell_ai5_widget_pane_g9

0xa1fe,	// (0x00058afa) cell_ai5_widget_pane_g10_ParamLimits

0xa1fe,	// (0x00058afa) cell_ai5_widget_pane_g10

0xa534,	// (0x00058e30) status_icon_pane_g1

0x3708,	// (0x00052004) bg_popup_sub_pane_cp13

0xa53c,	// (0x00058e38) popup_keymap_window_t1

0xd6cb,	// (0x0005bfc7) control_pane_g6_ParamLimits

0xd6cb,	// (0x0005bfc7) control_pane_g6

0xd6d8,	// (0x0005bfd4) control_pane_g7_ParamLimits

0xd6d8,	// (0x0005bfd4) control_pane_g7

0xd6e5,	// (0x0005bfe1) control_pane_g8_ParamLimits

0xd6e5,	// (0x0005bfe1) control_pane_g8

0xf3fc,	// (0x0005dcf8) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0005dd05) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0005dd12) dt_sta_title_pane_ParamLimits

0x3fa3,	// (0x0005289f) aid_size_touch_scroll_bar_cale

0x02f1,	// (0x0004ebed) popup_discreet_window_ParamLimits

0x02f1,	// (0x0004ebed) popup_discreet_window

0xb879,	// (0x0005a175) popup_sk_window

0x5bd3,	// (0x000544cf) bg_popup_sub_pane_cp28_ParamLimits

0x5bd3,	// (0x000544cf) bg_popup_sub_pane_cp28

0xa54a,	// (0x00058e46) popup_discreet_window_g1_ParamLimits

0xa54a,	// (0x00058e46) popup_discreet_window_g1

0xa56a,	// (0x00058e66) popup_discreet_window_t1_ParamLimits

0xa56a,	// (0x00058e66) popup_discreet_window_t1

0xa588,	// (0x00058e84) popup_discreet_window_t2_ParamLimits

0xa588,	// (0x00058e84) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005e797) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005e797) popup_discreet_window_t

0x2972,	// (0x0005126e) popup_sk_window_g1

0x297c,	// (0x00051278) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005e79e) popup_sk_window_g

0x2984,	// (0x00051280) popup_sk_window_t1

0x2992,	// (0x0005128e) popup_sk_window_t1_copy1

0xa17f,	// (0x00058a7b) cell_ai5_widget_pane_g2_ParamLimits

0xa2d8,	// (0x00058bd4) cell_ai5_widget_pane_t9_ParamLimits

0xa2d8,	// (0x00058bd4) cell_ai5_widget_pane_t9

0x3708,	// (0x00052004) main_fep_fshwr2_pane

0xce6a,	// (0x0005b766) aid_fshwr2_btn_pane

0xce7b,	// (0x0005b777) aid_fshwr2_syb_pane

0xce8c,	// (0x0005b788) aid_fshwr2_txt_pane

0xce98,	// (0x0005b794) fshwr2_func_candi_pane

0xceb7,	// (0x0005b7b3) fshwr2_hwr_syb_pane

0xced2,	// (0x0005b7ce) fshwr2_icf_pane

0x0218,	// (0x0004eb14) fshwr2_icf_bg_pane

0x2a12,	// (0x0005130e) fshwr2_icf_pane_t1_ParamLimits

0x2a12,	// (0x0005130e) fshwr2_icf_pane_t1

0x46eb,	// (0x00052fe7) fshwr2_func_candi_pane_g1

0xf442,	// (0x0005dd3e) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0005dd3e) fshwr2_func_candi_row_pane

0xcefe,	// (0x0005b7fa) cell_fshwr2_syb_pane_ParamLimits

0xcefe,	// (0x0005b7fa) cell_fshwr2_syb_pane

0x1f59,	// (0x00050855) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f59,	// (0x00050855) fshwr2_hwr_syb_pane_g1

0x0218,	// (0x0004eb14) bg_popup_call_pane_cp01

0xcf14,	// (0x0005b810) fshwr2_func_candi_cell_pane_ParamLimits

0xcf14,	// (0x0005b810) fshwr2_func_candi_cell_pane

0xf465,	// (0x0005dd61) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0005dd61) fshwr2_func_candi_cell_bg_pane

0xcf5f,	// (0x0005b85b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf5f,	// (0x0005b85b) fshwr2_func_candi_cell_pane_g1

0xcf96,	// (0x0005b892) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf96,	// (0x0005b892) fshwr2_func_candi_cell_pane_t1

0x0218,	// (0x0004eb14) bg_button_pane_cp08

0xa5f6,	// (0x00058ef2) cell_fshwr2_syb_bg_pane

0xcfb1,	// (0x0005b8ad) cell_fshwr2_syb_bg_pane_g1

0xcfb9,	// (0x0005b8b5) cell_fshwr2_syb_bg_pane_t1

0x4077,	// (0x00052973) main_tmo_pane

0xdd39,	// (0x0005c635) uni_indicator_pane_g1_ParamLimits

0xdd4f,	// (0x0005c64b) uni_indicator_pane_g2_ParamLimits

0xdd65,	// (0x0005c661) uni_indicator_pane_g3_ParamLimits

0x6721,	// (0x0005501d) uni_indicator_pane_g4_ParamLimits

0x6721,	// (0x0005501d) uni_indicator_pane_g4

0x6735,	// (0x00055031) uni_indicator_pane_g5_ParamLimits

0x6735,	// (0x00055031) uni_indicator_pane_g5

0x6735,	// (0x00055031) uni_indicator_pane_g6_ParamLimits

0x6735,	// (0x00055031) uni_indicator_pane_g6

0xf921,	// (0x0005e21d) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0005d0e7) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0005d0e7) popup_tmo_note_window

0x21f2,	// (0x00050aee) fshwr2_bg_pane

0xcf87,	// (0x0005b883) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf87,	// (0x0005b883) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005e7a3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005e7a3) fshwr2_func_candi_cell_pane_g

0x1f41,	// (0x0005083d) bg_popup_window_pane_cp01

0x2add,	// (0x000513d9) bg_popup_window_pane_g1_cp01

0xa5fe,	// (0x00058efa) bg_popup_window_pane_cp22_ParamLimits

0xa5fe,	// (0x00058efa) bg_popup_window_pane_cp22

0xa60c,	// (0x00058f08) listscroll_tmo_link_pane_ParamLimits

0xa60c,	// (0x00058f08) listscroll_tmo_link_pane

0xa64c,	// (0x00058f48) popup_tmo_note_window_g1_ParamLimits

0xa64c,	// (0x00058f48) popup_tmo_note_window_g1

0xa659,	// (0x00058f55) tmo_note_info_pane_ParamLimits

0xa659,	// (0x00058f55) tmo_note_info_pane

0xf471,	// (0x0005dd6d) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0005dd6d) list_tmo_note_info_pane_g1

0xa68a,	// (0x00058f86) list_tmo_note_info_pane_g2_ParamLimits

0xa68a,	// (0x00058f86) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005e7a8) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005e7a8) list_tmo_note_info_pane_g

0xa6a6,	// (0x00058fa2) list_tmo_note_info_text_pane_ParamLimits

0xa6a6,	// (0x00058fa2) list_tmo_note_info_text_pane

0xa727,	// (0x00059023) list_tmo_link_pane

0xa734,	// (0x00059030) scroll_pane_cp20

0xa741,	// (0x0005903d) list_single_tmo_link_pane_ParamLimits

0xa741,	// (0x0005903d) list_single_tmo_link_pane

0xa751,	// (0x0005904d) list_single_tmo_link_pane_t1

0xa75f,	// (0x0005905b) list_tmo_note_info_text_pane_t1_ParamLimits

0xa75f,	// (0x0005905b) list_tmo_note_info_text_pane_t1

0xd381,	// (0x0005bc7d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd381,	// (0x0005bc7d) aid_size_touch_scroll_bar_cp01

0xbe30,	// (0x0005a72c) aid_size_touch_slider_marker

0xb869,	// (0x0005a165) popup_settings_window_ParamLimits

0xb869,	// (0x0005a165) popup_settings_window

0x1289,	// (0x0004fb85) popup_candi_list_indi_window

0x50aa,	// (0x000539a6) aid_touch_navi_pane_ParamLimits

0x214d,	// (0x00050a49) rs_clock_indi_pane

0x2156,	// (0x00050a52) sctrl_sk_bottom_pane_ParamLimits

0x2167,	// (0x00050a63) sctrl_sk_top_pane_ParamLimits

0x226a,	// (0x00050b66) popup_fep_tooltip_window

0xa0f5,	// (0x000589f1) aid_size_cell_widget_grid_ParamLimits

0xa16a,	// (0x00058a66) cell_ai5_widget_pane_g1_ParamLimits

0xa16a,	// (0x00058a66) cell_ai5_widget_pane_g1

0xa1be,	// (0x00058aba) cell_ai5_widget_pane_g6_ParamLimits

0xa1ca,	// (0x00058ac6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005e726) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005e726) cell_ai5_widget_pane_g

0xa2fc,	// (0x00058bf8) cell_ai5_widget_pane_t10_ParamLimits

0xa2fc,	// (0x00058bf8) cell_ai5_widget_pane_t10

0xa31a,	// (0x00058c16) grid_ai5_widget_pane_ParamLimits

0xa3bb,	// (0x00058cb7) cell_contacts_ai5_widget_pane_ParamLimits

0xa3bb,	// (0x00058cb7) cell_contacts_ai5_widget_pane

0xa59d,	// (0x00058e99) popup_discreet_window_t3_ParamLimits

0xa59d,	// (0x00058e99) popup_discreet_window_t3

0xceea,	// (0x0005b7e6) popup_fshwr2_char_preview_window_ParamLimits

0xceea,	// (0x0005b7e6) popup_fshwr2_char_preview_window

0xf488,	// (0x0005dd84) tmo_note_info_pane_t1

0xf49d,	// (0x0005dd99) tmo_note_info_pane_t2

0xf4b4,	// (0x0005ddb0) tmo_note_info_pane_t3

0xa703,	// (0x00058fff) tmo_note_info_pane_t4

0xa715,	// (0x00059011) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005e7ad) tmo_note_info_pane_t

0xa727,	// (0x00059023) list_tmo_link_pane_ParamLimits

0xa734,	// (0x00059030) scroll_pane_cp20_ParamLimits

0x0218,	// (0x0004eb14) bg_popup_fep_char_preview_window_cp01

0xa778,	// (0x00059074) popup_fshwr2_char_preview_window_t1

0xa786,	// (0x00059082) popup_candi_list_indi_window_g1

0xa78f,	// (0x0005908b) bg_cell_contacts_ai5_widget_pane

0xa79b,	// (0x00059097) cell_contacts_ai5_widget_pane_g1

0x8190,	// (0x00056a8c) cell_contacts_ai5_widget_pane_g2

0xa7b0,	// (0x000590ac) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005e7b8) cell_contacts_ai5_widget_pane_g

0xa7bc,	// (0x000590b8) cell_contacts_ai5_widget_pane_t1

0x4077,	// (0x00052973) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa833,	// (0x0005912f) settings_container_pane

0x4cfe,	// (0x000535fa) listscroll_set_pane_copy1

0x7206,	// (0x00055b02) scroll_pane_cp121_copy1

0x5984,	// (0x00054280) set_content_pane_copy1

0xa83f,	// (0x0005913b) aid_height_set_list_copy1_ParamLimits

0xa83f,	// (0x0005913b) aid_height_set_list_copy1

0x692d,	// (0x00055229) aid_size_parent_copy1_ParamLimits

0x692d,	// (0x00055229) aid_size_parent_copy1

0xa84b,	// (0x00059147) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa84b,	// (0x00059147) button_value_adjust_pane_cp6_copy1

0x5048,	// (0x00053944) list_highlight_pane_cp2_copy1_ParamLimits

0x5048,	// (0x00053944) list_highlight_pane_cp2_copy1

0xa85f,	// (0x0005915b) list_set_pane_copy1_ParamLimits

0xa85f,	// (0x0005915b) list_set_pane_copy1

0xa7ce,	// (0x000590ca) main_pane_set_t1_copy1_ParamLimits

0xa7ce,	// (0x000590ca) main_pane_set_t1_copy1

0xa808,	// (0x00059104) main_pane_set_t2_copy1_ParamLimits

0xa808,	// (0x00059104) main_pane_set_t2_copy1

0xa90c,	// (0x00059208) main_pane_set_t3_copy1

0xa91a,	// (0x00059216) main_pane_set_t4_copy1

0xa827,	// (0x00059123) set_content_pane_g1_copy1_ParamLimits

0xa827,	// (0x00059123) set_content_pane_g1_copy1

0xa928,	// (0x00059224) setting_code_pane_copy1

0xa930,	// (0x0005922c) setting_slider_graphic_pane_copy1

0xa930,	// (0x0005922c) setting_slider_pane_copy1

0xa930,	// (0x0005922c) setting_text_pane_copy1

0xa930,	// (0x0005922c) setting_volume_pane_copy1

0xa928,	// (0x00059224) settings_code_pane_cp2_copy1

0xa938,	// (0x00059234) settings_code_pane_cp_copy1_ParamLimits

0xa938,	// (0x00059234) settings_code_pane_cp_copy1

0x2ae6,	// (0x000513e2) volume_set_pane_copy1

0xa94c,	// (0x00059248) volume_set_pane_g10_copy1

0xa954,	// (0x00059250) volume_set_pane_g1_copy1

0xa95c,	// (0x00059258) volume_set_pane_g2_copy1

0xa964,	// (0x00059260) volume_set_pane_g3_copy1

0xa96c,	// (0x00059268) volume_set_pane_g4_copy1

0xa974,	// (0x00059270) volume_set_pane_g5_copy1

0xa97c,	// (0x00059278) volume_set_pane_g6_copy1

0xa984,	// (0x00059280) volume_set_pane_g7_copy1

0xa98c,	// (0x00059288) volume_set_pane_g8_copy1

0xa994,	// (0x00059290) volume_set_pane_g9_copy1

0x37fc,	// (0x000520f8) bg_set_opt_pane_cp_copy1_ParamLimits

0x37fc,	// (0x000520f8) bg_set_opt_pane_cp_copy1

0x2aee,	// (0x000513ea) setting_slider_pane_t1_copy1_ParamLimits

0x2aee,	// (0x000513ea) setting_slider_pane_t1_copy1

0x2b0c,	// (0x00051408) setting_slider_pane_t2_copy1_ParamLimits

0x2b0c,	// (0x00051408) setting_slider_pane_t2_copy1

0x2b26,	// (0x00051422) setting_slider_pane_t3_copy1_ParamLimits

0x2b26,	// (0x00051422) setting_slider_pane_t3_copy1

0x2b3e,	// (0x0005143a) slider_set_pane_copy1_ParamLimits

0x2b3e,	// (0x0005143a) slider_set_pane_copy1

0x40c3,	// (0x000529bf) set_opt_bg_pane_g1_copy2

0x40cb,	// (0x000529c7) set_opt_bg_pane_g2_copy2

0xa99c,	// (0x00059298) set_opt_bg_pane_g3_copy2

0x40db,	// (0x000529d7) set_opt_bg_pane_g4_copy2

0x40e3,	// (0x000529df) set_opt_bg_pane_g5_copy2

0x40eb,	// (0x000529e7) set_opt_bg_pane_g6_copy2

0xa9a6,	// (0x000592a2) set_opt_bg_pane_g7_copy2

0xa9ae,	// (0x000592aa) set_opt_bg_pane_g8_copy2

0xa9b8,	// (0x000592b4) set_opt_bg_pane_g9_copy2

0x2b54,	// (0x00051450) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b54,	// (0x00051450) aid_size_touch_slider_mark_copy1

0xa9c2,	// (0x000592be) slider_set_pane_g1_copy1

0x2b68,	// (0x00051464) slider_set_pane_g2_copy1

0x1b82,	// (0x0005047e) slider_set_pane_g3_copy1_ParamLimits

0x1b82,	// (0x0005047e) slider_set_pane_g3_copy1

0x1b96,	// (0x00050492) slider_set_pane_g4_copy1_ParamLimits

0x1b96,	// (0x00050492) slider_set_pane_g4_copy1

0x1bae,	// (0x000504aa) slider_set_pane_g5_copy1_ParamLimits

0x1bae,	// (0x000504aa) slider_set_pane_g5_copy1

0x1b82,	// (0x0005047e) slider_set_pane_g6_copy1_ParamLimits

0x1b82,	// (0x0005047e) slider_set_pane_g6_copy1

0x2b70,	// (0x0005146c) slider_set_pane_g7_copy1_ParamLimits

0x2b70,	// (0x0005146c) slider_set_pane_g7_copy1

0x371c,	// (0x00052018) bg_set_opt_pane_cp2_copy1

0xa9cb,	// (0x000592c7) setting_slider_graphic_pane_g1_copy1

0xa9d4,	// (0x000592d0) setting_slider_graphic_pane_t1_copy1

0xa9e4,	// (0x000592e0) setting_slider_graphic_pane_t2_copy1

0xa9f4,	// (0x000592f0) slider_set_pane_cp_copy1

0xaa04,	// (0x00059300) input_focus_pane_cp1_copy1

0xaa0d,	// (0x00059309) list_set_text_pane_copy1

0xaa15,	// (0x00059311) setting_text_pane_g1_copy1

0x36ca,	// (0x00051fc6) set_text_pane_t1_copy1

0xaa04,	// (0x00059300) input_focus_pane_cp2_copy1

0xaa15,	// (0x00059311) setting_code_pane_g1_copy1

0xaa1e,	// (0x0005931a) setting_code_pane_t1_copy1

0xaa2c,	// (0x00059328) list_set_graphic_pane_copy1

0x371c,	// (0x00052018) bg_set_opt_pane_cp4_copy1

0x49f9,	// (0x000532f5) list_set_graphic_pane_g1_copy1_ParamLimits

0x49f9,	// (0x000532f5) list_set_graphic_pane_g1_copy1

0xaa3f,	// (0x0005933b) list_set_graphic_pane_g2_copy1

0x4a11,	// (0x0005330d) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a11,	// (0x0005330d) list_set_graphic_pane_t1_copy1

0x7ae6,	// (0x000563e2) rs_clock_indi_pane_g1

0xaa47,	// (0x00059343) rs_clock_indi_pane_t1

0xaa55,	// (0x00059351) rs_indi_pane

0xaa5d,	// (0x00059359) rs_indi_pane_g1

0xaa66,	// (0x00059362) rs_indi_pane_g2

0xaa6f,	// (0x0005936b) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005e7bf) rs_indi_pane_g

0x4cfe,	// (0x000535fa) bg_popup_preview_window_pane_cp03

0xaa78,	// (0x00059374) popup_fep_tooltip_window_t1

0x876e,	// (0x0005706a) popup_note2_window_g2_ParamLimits

0x876e,	// (0x0005706a) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005e558) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005e558) popup_note2_window_g

0x8c69,	// (0x00057565) bg_popup_sub_pane_cp11_ParamLimits

0x8c76,	// (0x00057572) cell_ai3_links_pane_g1_ParamLimits

0x8c8d,	// (0x00057589) cell_ai3_links_pane_t1

0x36ca,	// (0x00051fc6) set_text_pane_t1_copy1_ParamLimits

0x4c0f,	// (0x0005350b) cell_graphic_popup_pane_cp2_ParamLimits

0x4c0f,	// (0x0005350b) cell_graphic_popup_pane_cp2

0xaa86,	// (0x00059382) cell_graphic_popup_pane_g1_cp2

0x3db6,	// (0x000526b2) cell_graphic_popup_pane_g2_cp2

0xaa8e,	// (0x0005938a) cell_graphic_popup_pane_g3_cp2

0xaa96,	// (0x00059392) cell_graphic_popup_pane_t2_cp2

0x3dc7,	// (0x000526c3) grid_highlight_pane_cp3_cp2

0x4408,	// (0x00052d04) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4077,	// (0x00052973) main_tmo_pane_ParamLimits

0xe7df,	// (0x0005d0db) popup_tmo_big_image_note_window

0xa159,	// (0x00058a55) cell_ai5_widget_list_pane

0xa161,	// (0x00058a5d) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0005dd84) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0005dd99) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0005ddb0) tmo_note_info_pane_t3_ParamLimits

0xa703,	// (0x00058fff) tmo_note_info_pane_t4_ParamLimits

0xa715,	// (0x00059011) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005e7ad) tmo_note_info_pane_t_ParamLimits

0xa833,	// (0x0005912f) settings_container_pane_ParamLimits

0xa9fc,	// (0x000592f8) indicator_popup_pane_cp5

0xa9fc,	// (0x000592f8) indicator_popup_pane_cp6

0xaa2c,	// (0x00059328) list_set_graphic_pane_copy1_ParamLimits

0x3708,	// (0x00052004) bg_popup_window_pane_cp23

0xaaa4,	// (0x000593a0) popup_tmo_big_image_note_window_g1

0xaaae,	// (0x000593aa) popup_tmo_big_image_note_window_t1

0xaabe,	// (0x000593ba) popup_tmo_big_image_note_window_t2

0xaace,	// (0x000593ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005e7c6) popup_tmo_big_image_note_window_t

0x7ae6,	// (0x000563e2) cell_ai5_widget_lrg_icon_pane_g1

0xaade,	// (0x000593da) cell_ai5_widget_lrg_icon_pane_t1

0xaaec,	// (0x000593e8) cell_ai5_widget_list_row_pane_ParamLimits

0xaaec,	// (0x000593e8) cell_ai5_widget_list_row_pane

0xab03,	// (0x000593ff) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab03,	// (0x000593ff) cell_ai5_widget_list_row_pane_g1

0xab10,	// (0x0005940c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab10,	// (0x0005940c) cell_ai5_widget_list_row_pane_t1

0xab41,	// (0x0005943d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab41,	// (0x0005943d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005e7cd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005e7cd) cell_ai5_widget_list_row_pane_t

0x0218,	// (0x0004eb14) main_fep_vtchi_ss_pane

0xab85,	// (0x00059481) popup_fep_char_pre_window

0xab8d,	// (0x00059489) popup_fep_ituss_window

0xf4c9,	// (0x0005ddc5) popup_fep_vkbss_window

0xf4d6,	// (0x0005ddd2) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0005ddd2) grid_vkbss_keypad_pane

0xabe4,	// (0x000594e0) ituss_keypad_pane

0x2b92,	// (0x0005148e) aid_vkbss_key_offset_ParamLimits

0x2b92,	// (0x0005148e) aid_vkbss_key_offset

0xcfc8,	// (0x0005b8c4) cell_vkbss_key_pane_ParamLimits

0xcfc8,	// (0x0005b8c4) cell_vkbss_key_pane

0xabf3,	// (0x000594ef) bg_cell_vkbss_key_g1_ParamLimits

0xabf3,	// (0x000594ef) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0005dde2) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0005dde2) cell_vkbss_key_3p_pane

0xf500,	// (0x0005ddfc) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0005ddfc) cell_vkbss_key_g1

0xf51a,	// (0x0005de16) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0005de16) cell_vkbss_key_t1

0x2bb4,	// (0x000514b0) cell_ituss_key_pane_ParamLimits

0x2bb4,	// (0x000514b0) cell_ituss_key_pane

0xac52,	// (0x0005954e) bg_cell_ituss_key_g1_ParamLimits

0xac52,	// (0x0005954e) bg_cell_ituss_key_g1

0xac5e,	// (0x0005955a) cell_ituss_key_pane_g1_ParamLimits

0xac5e,	// (0x0005955a) cell_ituss_key_pane_g1

0x2bc5,	// (0x000514c1) cell_ituss_key_pane_g2_ParamLimits

0x2bc5,	// (0x000514c1) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005e7d4) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005e7d4) cell_ituss_key_pane_g

0x2bf1,	// (0x000514ed) cell_ituss_key_t1_ParamLimits

0x2bf1,	// (0x000514ed) cell_ituss_key_t1

0x2c2b,	// (0x00051527) cell_ituss_key_t2_ParamLimits

0x2c2b,	// (0x00051527) cell_ituss_key_t2

0x2c5c,	// (0x00051558) cell_ituss_key_t3_ParamLimits

0x2c5c,	// (0x00051558) cell_ituss_key_t3

0x2c2b,	// (0x00051527) cell_ituss_key_t4_ParamLimits

0x2c2b,	// (0x00051527) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005e7db) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005e7db) cell_ituss_key_t

0xac8a,	// (0x00059586) cell_vkbss_key_3p_pane_g1

0xac92,	// (0x0005958e) cell_vkbss_key_3p_pane_g2

0xac9a,	// (0x00059596) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005e7e6) cell_vkbss_key_3p_pane_g

0x0218,	// (0x0004eb14) bg_popup_fep_char_preview_window_cp02

0x2c9f,	// (0x0005159b) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0005dcc8) main_ai5_sk_pane

0xa78f,	// (0x0005908b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa79b,	// (0x00059097) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8190,	// (0x00056a8c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7b0,	// (0x000590ac) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005e7b8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa7bc,	// (0x000590b8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4077,	// (0x00052973) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0005de41) main_ai5_sk_pane_g1

0x5a0c,	// (0x00054308) popup_query_code_window_g1

0xaba3,	// (0x0005949f) popup_fep_vkb_icf_pane

0xabc2,	// (0x000594be) popup_fep_vtchi_icf_pane

0xacab,	// (0x000595a7) bg_icf_pane

0xacb7,	// (0x000595b3) list_vkb_icf_pane

0xacc6,	// (0x000595c2) bg_icf_pane_cp01

0xacd9,	// (0x000595d5) vtchi_icf_list_pane

0xace9,	// (0x000595e5) list_vkb_icf_pane_t1_ParamLimits

0xace9,	// (0x000595e5) list_vkb_icf_pane_t1

0xacff,	// (0x000595fb) vtchi_icf_list_pane_t1_ParamLimits

0xacff,	// (0x000595fb) vtchi_icf_list_pane_t1

0xab8d,	// (0x00059489) popup_fep_ituss_window_ParamLimits

0xabc2,	// (0x000594be) popup_fep_vtchi_icf_pane_ParamLimits

0xabe4,	// (0x000594e0) ituss_keypad_pane_ParamLimits

0x2b86,	// (0x00051482) ituss_sks_pane

0xacab,	// (0x000595a7) bg_icf_pane_ParamLimits

0xab69,	// (0x00059465) icf_edit_indi_pane_ParamLimits

0xab69,	// (0x00059465) icf_edit_indi_pane

0xacb7,	// (0x000595b3) list_vkb_icf_pane_ParamLimits

0xacc6,	// (0x000595c2) bg_icf_pane_cp01_ParamLimits

0xab78,	// (0x00059474) icf_edit_indi_pane_cp01_ParamLimits

0xab78,	// (0x00059474) icf_edit_indi_pane_cp01

0xace1,	// (0x000595dd) vtchi_query_pane

0x7d70,	// (0x0005666c) icf_edit_indi_pane_g1_ParamLimits

0x7d70,	// (0x0005666c) icf_edit_indi_pane_g1

0xad70,	// (0x0005966c) icf_edit_indi_pane_g2_ParamLimits

0xad70,	// (0x0005966c) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005e7fe) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005e7fe) icf_edit_indi_pane_g

0xad7f,	// (0x0005967b) icf_edit_indi_pane_t1

0xad19,	// (0x00059615) bg_input_focus_pane_cp042

0x3f9a,	// (0x00052896) vtchi_button_pane

0xad22,	// (0x0005961e) vtchi_query_pane_t1

0xad30,	// (0x0005962c) vtchi_query_pane_t2

0xad3e,	// (0x0005963a) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005e7ed) vtchi_query_pane_t

0x0218,	// (0x0004eb14) bg_button_pane_cp13

0xad4c,	// (0x00059648) vtchi_button_pane_g1

0x2cae,	// (0x000515aa) ituss_sks_pane_g1

0x2cb9,	// (0x000515b5) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005e7f4) ituss_sks_pane_g

0xad54,	// (0x00059650) ituss_sks_pane_t1

0xad62,	// (0x0005965e) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005e7f9) ituss_sks_pane_t

0x7580,	// (0x00055e7c) indicator_nsta_pane_cp_g1

0x7588,	// (0x00055e84) indicator_nsta_pane_cp_g2

0x7590,	// (0x00055e8c) indicator_nsta_pane_cp_g3

0x7580,	// (0x00055e7c) indicator_nsta_pane_cp_g4

0x7588,	// (0x00055e84) indicator_nsta_pane_cp_g5

0x7590,	// (0x00055e8c) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005e396) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0005dae0) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0005dae0) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005e6af) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005e6af) cell_graphic2_pane_t

0xf218,	// (0x0005db14) cell_graphic2_control_pane_t1

0xd52c,	// (0x0005be28) signal_pane_g3_ParamLimits

0xd52c,	// (0x0005be28) signal_pane_g3

0xd540,	// (0x0005be3c) signal_pane_g4_ParamLimits

0xd540,	// (0x0005be3c) signal_pane_g4

0xab53,	// (0x0005944f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab53,	// (0x0005944f) cell_ai5_widget_list_row_pane_t3

0xac78,	// (0x00059574) cell_ituss_key_pane_t1_ParamLimits

0xac78,	// (0x00059574) cell_ituss_key_pane_t1

0x5663,	// (0x00053f5f) form_field_data_wide_pane_vc_t2_ParamLimits

0x5663,	// (0x00053f5f) form_field_data_wide_pane_vc_t2

0x5677,	// (0x00053f73) form_field_data_wide_pane_vc_t3_ParamLimits

0x5677,	// (0x00053f73) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005e105) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005e105) form_field_data_wide_pane_vc_t

0x7248,	// (0x00055b44) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7248,	// (0x00055b44) form_field_slider_wide_pane_vc_t3

0x7326,	// (0x00055c22) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7326,	// (0x00055c22) form_field_popup_wide_pane_vc_t2

0x733d,	// (0x00055c39) form_field_popup_wide_pane_vc_t3_ParamLimits

0x733d,	// (0x00055c39) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005e385) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005e385) form_field_popup_wide_pane_vc_t

0xce6a,	// (0x0005b766) aid_fshwr2_btn_pane_ParamLimits

0xce7b,	// (0x0005b777) aid_fshwr2_syb_pane_ParamLimits

0xce8c,	// (0x0005b788) aid_fshwr2_txt_pane_ParamLimits

0x21f2,	// (0x00050aee) fshwr2_bg_pane_ParamLimits

0xce98,	// (0x0005b794) fshwr2_func_candi_pane_ParamLimits

0xceb7,	// (0x0005b7b3) fshwr2_hwr_syb_pane_ParamLimits

0xced2,	// (0x0005b7ce) fshwr2_icf_pane_ParamLimits

0x32bf,	// (0x00051bbb) list_double_graphic_pane_vc_g4_ParamLimits

0x32bf,	// (0x00051bbb) list_double_graphic_pane_vc_g4

0x2be5,	// (0x000514e1) cell_ituss_key_pane_g3_ParamLimits

0x2be5,	// (0x000514e1) cell_ituss_key_pane_g3

0x2c8d,	// (0x00051589) cell_ituss_key_t5_ParamLimits

0x2c8d,	// (0x00051589) cell_ituss_key_t5

0xf4c9,	// (0x0005ddc5) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
