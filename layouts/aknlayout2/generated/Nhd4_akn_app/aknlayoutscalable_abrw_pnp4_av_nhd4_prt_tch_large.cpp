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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003d3b6 };

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
0xa448,	// (0x000477fe) Screen

0xa454,	// (0x0004780a) application_window_ParamLimits

0xa454,	// (0x0004780a) application_window

0x3f56,	// (0x0004130c) screen_g1

0x84a7,	// (0x0004585d) area_bottom_pane_ParamLimits

0x84a7,	// (0x0004585d) area_bottom_pane

0x8567,	// (0x0004591d) area_top_pane_ParamLimits

0x8567,	// (0x0004591d) area_top_pane

0x8605,	// (0x000459bb) main_pane_ParamLimits

0x8605,	// (0x000459bb) main_pane

0x3f60,	// (0x00041316) misc_graphics

0xbb9b,	// (0x00048f51) battery_pane_ParamLimits

0xbb9b,	// (0x00048f51) battery_pane

0x5ddf,	// (0x00043195) bg_status_flat_pane_g8

0x5de7,	// (0x0004319d) bg_status_flat_pane_g9

0x5506,	// (0x000428bc) context_pane_ParamLimits

0x5506,	// (0x000428bc) context_pane

0xbccf,	// (0x00049085) navi_pane_ParamLimits

0xbccf,	// (0x00049085) navi_pane

0xbd3c,	// (0x000490f2) signal_pane_ParamLimits

0xbd3c,	// (0x000490f2) signal_pane

0x0008,

0xf88f,	// (0x0004cc45) bg_status_flat_pane_g

0xbda1,	// (0x00049157) status_pane_g1_ParamLimits

0xbda1,	// (0x00049157) status_pane_g1

0x625e,	// (0x00043614) status_pane_g2_ParamLimits

0x625e,	// (0x00043614) status_pane_g2

0x556b,	// (0x00042921) status_pane_g3_ParamLimits

0x556b,	// (0x00042921) status_pane_g3

0x0004,

0xf7bd,	// (0x0004cb73) status_pane_g_ParamLimits

0xf7bd,	// (0x0004cb73) status_pane_g

0xbdb5,	// (0x0004916b) title_pane_ParamLimits

0xbdb5,	// (0x0004916b) title_pane

0xbdf2,	// (0x000491a8) uni_indicator_pane_ParamLimits

0xbdf2,	// (0x000491a8) uni_indicator_pane

0x533f,	// (0x000426f5) bg_list_pane_ParamLimits

0x533f,	// (0x000426f5) bg_list_pane

0xae76,	// (0x0004822c) find_pane

0xb61b,	// (0x000489d1) listscroll_app_pane_ParamLimits

0xb61b,	// (0x000489d1) listscroll_app_pane

0x535f,	// (0x00042715) listscroll_form_pane

0xae7e,	// (0x00048234) listscroll_gen_pane_ParamLimits

0xae7e,	// (0x00048234) listscroll_gen_pane

0x535f,	// (0x00042715) listscroll_set_pane

0xab77,	// (0x00047f2d) main_idle_act_pane

0x511b,	// (0x000424d1) main_idle_trad_pane

0x511b,	// (0x000424d1) main_list_empty_pane

0x483d,	// (0x00041bf3) main_midp_pane

0x5379,	// (0x0004272f) main_pane_g1_ParamLimits

0x5379,	// (0x0004272f) main_pane_g1

0xb627,	// (0x000489dd) popup_ai_message_window_ParamLimits

0xb627,	// (0x000489dd) popup_ai_message_window

0xb6a5,	// (0x00048a5b) popup_fep_china_uni_window_ParamLimits

0xb6a5,	// (0x00048a5b) popup_fep_china_uni_window

0x53ab,	// (0x00042761) popup_fep_japan_candidate_window_ParamLimits

0x53ab,	// (0x00042761) popup_fep_japan_candidate_window

0x53c9,	// (0x0004277f) popup_fep_japan_predictive_window_ParamLimits

0x53c9,	// (0x0004277f) popup_fep_japan_predictive_window

0xb6ff,	// (0x00048ab5) popup_find_window

0xb70c,	// (0x00048ac2) popup_grid_graphic_window_ParamLimits

0xb70c,	// (0x00048ac2) popup_grid_graphic_window

0x53f9,	// (0x000427af) popup_large_graphic_colour_window

0xb732,	// (0x00048ae8) popup_menu_window_ParamLimits

0xb732,	// (0x00048ae8) popup_menu_window

0xb8ec,	// (0x00048ca2) popup_note_image_window

0xb8d8,	// (0x00048c8e) popup_note_wait_window_ParamLimits

0xb8d8,	// (0x00048c8e) popup_note_wait_window

0xb8d8,	// (0x00048c8e) popup_note_window_ParamLimits

0xb8d8,	// (0x00048c8e) popup_note_window

0xb942,	// (0x00048cf8) popup_query_code_window_ParamLimits

0xb942,	// (0x00048cf8) popup_query_code_window

0x541f,	// (0x000427d5) popup_query_data_code_window_ParamLimits

0x541f,	// (0x000427d5) popup_query_data_code_window

0xb956,	// (0x00048d0c) popup_query_data_window_ParamLimits

0xb956,	// (0x00048d0c) popup_query_data_window

0xb96e,	// (0x00048d24) popup_query_sat_info_window_ParamLimits

0xb96e,	// (0x00048d24) popup_query_sat_info_window

0xb9a7,	// (0x00048d5d) popup_snote_single_graphic_window_ParamLimits

0xb9a7,	// (0x00048d5d) popup_snote_single_graphic_window

0xb9a7,	// (0x00048d5d) popup_snote_single_text_window_ParamLimits

0xb9a7,	// (0x00048d5d) popup_snote_single_text_window

0x5436,	// (0x000427ec) popup_sub_window_general

0x547c,	// (0x00042832) popup_window_general_ParamLimits

0x547c,	// (0x00042832) popup_window_general

0x5491,	// (0x00042847) power_save_pane

0x9146,	// (0x000464fc) control_pane_g1_ParamLimits

0x9146,	// (0x000464fc) control_pane_g1

0x916d,	// (0x00046523) control_pane_g2_ParamLimits

0x916d,	// (0x00046523) control_pane_g2

0x5321,	// (0x000426d7) control_pane_g3_ParamLimits

0x5321,	// (0x000426d7) control_pane_g3

0x0007,

0xf7a5,	// (0x0004cb5b) control_pane_g_ParamLimits

0xf7a5,	// (0x0004cb5b) control_pane_g

0x91b1,	// (0x00046567) control_pane_t1_ParamLimits

0x91b1,	// (0x00046567) control_pane_t1

0x91fd,	// (0x000465b3) control_pane_t2_ParamLimits

0x91fd,	// (0x000465b3) control_pane_t2

0x0002,

0xf7b6,	// (0x0004cb6c) control_pane_t_ParamLimits

0xf7b6,	// (0x0004cb6c) control_pane_t

0x5242,	// (0x000425f8) navi_navi_volume_pane_cp1

0x524b,	// (0x00042601) status_small_icon_pane

0x5253,	// (0x00042609) status_small_pane_g1_ParamLimits

0x5253,	// (0x00042609) status_small_pane_g1

0x5287,	// (0x0004263d) status_small_pane_g2_ParamLimits

0x5287,	// (0x0004263d) status_small_pane_g2

0x5293,	// (0x00042649) status_small_pane_g3_ParamLimits

0x5293,	// (0x00042649) status_small_pane_g3

0x529f,	// (0x00042655) status_small_pane_g4_ParamLimits

0x529f,	// (0x00042655) status_small_pane_g4

0x52ab,	// (0x00042661) status_small_pane_g5_ParamLimits

0x52ab,	// (0x00042661) status_small_pane_g5

0x52ba,	// (0x00042670) status_small_pane_g6_ParamLimits

0x52ba,	// (0x00042670) status_small_pane_g6

0x0007,

0xf794,	// (0x0004cb4a) status_small_pane_g_ParamLimits

0xf794,	// (0x0004cb4a) status_small_pane_g

0x52ea,	// (0x000426a0) status_small_pane_t1

0x530d,	// (0x000426c3) status_small_wait_pane_ParamLimits

0x530d,	// (0x000426c3) status_small_wait_pane

0xac56,	// (0x0004800c) aid_levels_signal_ParamLimits

0xac56,	// (0x0004800c) aid_levels_signal

0xac68,	// (0x0004801e) signal_pane_g1_ParamLimits

0xac68,	// (0x0004801e) signal_pane_g1

0xac7d,	// (0x00048033) signal_pane_g2_ParamLimits

0xac7d,	// (0x00048033) signal_pane_g2

0x0003,

0xf725,	// (0x0004cadb) signal_pane_g_ParamLimits

0xf725,	// (0x0004cadb) signal_pane_g

0x4c5f,	// (0x00042015) context_pane_g1

0xa464,	// (0x0004781a) title_pane_g1

0xa48e,	// (0x00047844) title_pane_t1

0x3f76,	// (0x0004132c) title_pane_t2

0x3f9c,	// (0x00041352) title_pane_t3

0x0002,

0xf56f,	// (0x0004c925) title_pane_t

0xbe0a,	// (0x000491c0) aid_levels_battery_ParamLimits

0xbe0a,	// (0x000491c0) aid_levels_battery

0xbe1e,	// (0x000491d4) battery_pane_g1_ParamLimits

0xbe1e,	// (0x000491d4) battery_pane_g1

0xbe34,	// (0x000491ea) battery_pane_g2_ParamLimits

0xbe34,	// (0x000491ea) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004cb7e) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004cb7e) battery_pane_g

0xc06e,	// (0x00049424) uni_indicator_pane_g1

0xc083,	// (0x00049439) uni_indicator_pane_g2

0x6654,	// (0x00043a0a) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004cced) uni_indicator_pane_g

0x4f8b,	// (0x00042341) navi_icon_pane_ParamLimits

0x4f8b,	// (0x00042341) navi_icon_pane

0x4ed2,	// (0x00042288) navi_midp_pane

0x4fa7,	// (0x0004235d) navi_navi_pane

0x4fb1,	// (0x00042367) navi_text_pane_ParamLimits

0x4fb1,	// (0x00042367) navi_text_pane

0x3f56,	// (0x0004130c) status_small_wait_pane_g1

0x43ac,	// (0x00041762) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004cce8) status_small_wait_pane_g

0x639e,	// (0x00043754) navi_navi_icon_text_pane

0x63b8,	// (0x0004376e) navi_navi_pane_g1_ParamLimits

0x63b8,	// (0x0004376e) navi_navi_pane_g1

0x63a6,	// (0x0004375c) navi_navi_pane_g2_ParamLimits

0x63a6,	// (0x0004375c) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004ccb6) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004ccb6) navi_navi_pane_g

0x63ca,	// (0x00043780) navi_navi_tabs_pane

0x63d3,	// (0x00043789) navi_navi_text_pane

0x639e,	// (0x00043754) navi_navi_volume_pane

0x637a,	// (0x00043730) navi_text_pane_t1

0x636e,	// (0x00043724) navi_icon_pane_g1

0x62cd,	// (0x00043683) navi_navi_text_pane_t1

0x9525,	// (0x000468db) navi_navi_volume_pane_g1

0x952d,	// (0x000468e3) volume_small_pane

0xbfb9,	// (0x0004936f) navi_navi_icon_text_pane_g1

0xbfc1,	// (0x00049377) navi_navi_icon_text_pane_t1

0x4fa7,	// (0x0004235d) navi_tabs_2_long_pane

0x4fa7,	// (0x0004235d) navi_tabs_2_pane

0x4fa7,	// (0x0004235d) navi_tabs_3_long_pane

0x4fa7,	// (0x0004235d) navi_tabs_3_pane

0x4fa7,	// (0x0004235d) navi_tabs_4_pane

0x9505,	// (0x000468bb) tabs_2_active_pane_ParamLimits

0x9505,	// (0x000468bb) tabs_2_active_pane

0x9515,	// (0x000468cb) tabs_2_passive_pane_ParamLimits

0x9515,	// (0x000468cb) tabs_2_passive_pane

0x94d3,	// (0x00046889) tabs_3_active_pane_ParamLimits

0x94d3,	// (0x00046889) tabs_3_active_pane

0x94e3,	// (0x00046899) tabs_3_passive_pane_ParamLimits

0x94e3,	// (0x00046899) tabs_3_passive_pane

0x94f4,	// (0x000468aa) tabs_3_passive_pane_cp_ParamLimits

0x94f4,	// (0x000468aa) tabs_3_passive_pane_cp

0x948f,	// (0x00046845) tabs_4_active_pane_ParamLimits

0x948f,	// (0x00046845) tabs_4_active_pane

0x94a0,	// (0x00046856) tabs_4_passive_pane_ParamLimits

0x94a0,	// (0x00046856) tabs_4_passive_pane

0x94b1,	// (0x00046867) tabs_4_passive_pane_cp_ParamLimits

0x94b1,	// (0x00046867) tabs_4_passive_pane_cp

0x94c2,	// (0x00046878) tabs_4_passive_pane_cp2_ParamLimits

0x94c2,	// (0x00046878) tabs_4_passive_pane_cp2

0x946b,	// (0x00046821) tabs_2_long_active_pane_ParamLimits

0x946b,	// (0x00046821) tabs_2_long_active_pane

0x947d,	// (0x00046833) tabs_2_long_passive_pane_ParamLimits

0x947d,	// (0x00046833) tabs_2_long_passive_pane

0x9426,	// (0x000467dc) tabs_3_long_active_pane_ParamLimits

0x9426,	// (0x000467dc) tabs_3_long_active_pane

0x943f,	// (0x000467f5) tabs_3_long_passive_pane_ParamLimits

0x943f,	// (0x000467f5) tabs_3_long_passive_pane

0x9452,	// (0x00046808) tabs_3_long_passive_pane_cp_ParamLimits

0x9452,	// (0x00046808) tabs_3_long_passive_pane_cp

0x93cc,	// (0x00046782) volume_small_pane_g1

0x93d5,	// (0x0004678b) volume_small_pane_g2

0x93de,	// (0x00046794) volume_small_pane_g3

0x93e7,	// (0x0004679d) volume_small_pane_g4

0x93f0,	// (0x000467a6) volume_small_pane_g5

0x93f9,	// (0x000467af) volume_small_pane_g6

0x9402,	// (0x000467b8) volume_small_pane_g7

0x940b,	// (0x000467c1) volume_small_pane_g8

0x9414,	// (0x000467ca) volume_small_pane_g9

0x941d,	// (0x000467d3) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004cc82) volume_small_pane_g

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp2_ParamLimits

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp2

0xa4f6,	// (0x000478ac) tabs_3_active_pane_g1

0xa4fe,	// (0x000478b4) tabs_3_active_pane_t1

0x3fbc,	// (0x00041372) bg_passive_tab_pane_cp2_ParamLimits

0x3fbc,	// (0x00041372) bg_passive_tab_pane_cp2

0xa4f6,	// (0x000478ac) tabs_3_passive_pane_g1

0xa4fe,	// (0x000478b4) tabs_3_passive_pane_t1

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp3_ParamLimits

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp3

0xa510,	// (0x000478c6) tabs_4_active_pane_g1

0xa518,	// (0x000478ce) tabs_4_active_pane_t1

0x3fbc,	// (0x00041372) bg_passive_tab_pane_cp3_ParamLimits

0x3fbc,	// (0x00041372) bg_passive_tab_pane_cp3

0xa510,	// (0x000478c6) tabs_4_1_passive_pane_g1

0xa518,	// (0x000478ce) tabs_4_1_passive_pane_t1

0x483d,	// (0x00041bf3) list_highlight_pane_cp2

0xc0fb,	// (0x000494b1) list_set_pane_ParamLimits

0xc0fb,	// (0x000494b1) list_set_pane

0xc19d,	// (0x00049553) main_pane_set_t1_ParamLimits

0xc19d,	// (0x00049553) main_pane_set_t1

0xc1bd,	// (0x00049573) main_pane_set_t2_ParamLimits

0xc1bd,	// (0x00049573) main_pane_set_t2

0xc1d1,	// (0x00049587) main_pane_set_t3_ParamLimits

0xc1d1,	// (0x00049587) main_pane_set_t3

0xc1e3,	// (0x00049599) main_pane_set_t4_ParamLimits

0xc1e3,	// (0x00049599) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004cd52) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004cd52) main_pane_set_t

0xc1f5,	// (0x000495ab) setting_code_pane

0xc1ff,	// (0x000495b5) setting_slider_graphic_pane

0xc1ff,	// (0x000495b5) setting_slider_pane

0xc1ff,	// (0x000495b5) setting_text_pane

0xc1ff,	// (0x000495b5) setting_volume_pane

0x8836,	// (0x00045bec) volume_set_pane

0x3fbc,	// (0x00041372) bg_set_opt_pane_cp

0x883e,	// (0x00045bf4) setting_slider_pane_t1

0x8857,	// (0x00045c0d) setting_slider_pane_t2

0x8870,	// (0x00045c26) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0004c92c) setting_slider_pane_t

0x8887,	// (0x00045c3d) slider_set_pane

0x3f60,	// (0x00041316) bg_set_opt_pane_cp2

0x3fca,	// (0x00041380) setting_slider_graphic_pane_g1

0x889d,	// (0x00045c53) setting_slider_graphic_pane_t1

0x88ac,	// (0x00045c62) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0004c933) setting_slider_graphic_pane_t

0x88bb,	// (0x00045c71) slider_set_pane_cp

0x3f60,	// (0x00041316) input_focus_pane_cp1

0x683d,	// (0x00043bf3) list_set_text_pane

0x3f56,	// (0x0004130c) setting_text_pane_g1

0x3f60,	// (0x00041316) input_focus_pane_cp2

0x3f56,	// (0x0004130c) setting_code_pane_g1

0x3fd3,	// (0x00041389) setting_code_pane_t1

0x88c3,	// (0x00045c79) set_text_pane_t1_ParamLimits

0x88c3,	// (0x00045c79) set_text_pane_t1

0x474d,	// (0x00041b03) set_opt_bg_pane_g1

0x4755,	// (0x00041b0b) set_opt_bg_pane_g2

0x681d,	// (0x00043bd3) set_opt_bg_pane_g3

0x4765,	// (0x00041b1b) set_opt_bg_pane_g4

0x476d,	// (0x00041b23) set_opt_bg_pane_g5

0x4775,	// (0x00041b2b) set_opt_bg_pane_g6

0x6825,	// (0x00043bdb) set_opt_bg_pane_g7

0x682d,	// (0x00043be3) set_opt_bg_pane_g8

0x6835,	// (0x00043beb) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004cd3f) set_opt_bg_pane_g

0x6810,	// (0x00043bc6) slider_set_pane_g1

0x959a,	// (0x00046950) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004cd30) slider_set_pane_g

0x9536,	// (0x000468ec) volume_set_pane_g1

0x953e,	// (0x000468f4) volume_set_pane_g2

0x9546,	// (0x000468fc) volume_set_pane_g3

0x954e,	// (0x00046904) volume_set_pane_g4

0x9556,	// (0x0004690c) volume_set_pane_g5

0x955e,	// (0x00046914) volume_set_pane_g6

0x9566,	// (0x0004691c) volume_set_pane_g7

0x956e,	// (0x00046924) volume_set_pane_g8

0x9576,	// (0x0004692c) volume_set_pane_g9

0x957e,	// (0x00046934) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004cd08) volume_set_pane_g

0xa52a,	// (0x000478e0) indicator_pane_ParamLimits

0xa52a,	// (0x000478e0) indicator_pane

0xa536,	// (0x000478ec) main_idle_pane_g2_ParamLimits

0xa536,	// (0x000478ec) main_idle_pane_g2

0xa55e,	// (0x00047914) main_pane_idle_g1_ParamLimits

0xa55e,	// (0x00047914) main_pane_idle_g1

0x3fe1,	// (0x00041397) popup_clock_digital_analogue_window_ParamLimits

0x3fe1,	// (0x00041397) popup_clock_digital_analogue_window

0xa56b,	// (0x00047921) soft_indicator_pane_ParamLimits

0xa56b,	// (0x00047921) soft_indicator_pane

0xa577,	// (0x0004792d) wallpaper_pane_ParamLimits

0xa577,	// (0x0004792d) wallpaper_pane

0x3f56,	// (0x0004130c) wallpaper_pane_g1

0xa583,	// (0x00047939) indicator_pane_g1_ParamLimits

0xa583,	// (0x00047939) indicator_pane_g1

0x6993,	// (0x00043d49) navi_navi_icon_text_pane_srt_g1

0x400f,	// (0x000413c5) soft_indicator_pane_t1

0x4029,	// (0x000413df) aid_ps_area_pane

0xa58f,	// (0x00047945) aid_ps_clock_pane

0x4104,	// (0x000414ba) aid_ps_indicator_pane

0x4110,	// (0x000414c6) indicator_ps_pane_ParamLimits

0x4110,	// (0x000414c6) indicator_ps_pane

0x411f,	// (0x000414d5) power_save_pane_g1_ParamLimits

0x411f,	// (0x000414d5) power_save_pane_g1

0x412b,	// (0x000414e1) power_save_pane_g2_ParamLimits

0x412b,	// (0x000414e1) power_save_pane_g2

0x845b,	// (0x00045811) aid_navinavi_width_pane

0x4029,	// (0x000413df) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0004c938) power_save_pane_g_ParamLimits

0xf582,	// (0x0004c938) power_save_pane_g

0x4139,	// (0x000414ef) power_save_pane_t1_ParamLimits

0x4139,	// (0x000414ef) power_save_pane_t1

0xa58f,	// (0x00047945) aid_ps_clock_pane_ParamLimits

0x4104,	// (0x000414ba) aid_ps_indicator_pane_ParamLimits

0x414b,	// (0x00041501) power_save_pane_t4_ParamLimits

0x414b,	// (0x00041501) power_save_pane_t4

0x0001,

0xf587,	// (0x0004c93d) power_save_pane_t_ParamLimits

0xf587,	// (0x0004c93d) power_save_pane_t

0x4175,	// (0x0004152b) power_save_t3_ParamLimits

0x4175,	// (0x0004152b) power_save_t3

0x4160,	// (0x00041516) power_save_t2_ParamLimits

0x4160,	// (0x00041516) power_save_t2

0x418a,	// (0x00041540) indicator_ps_pane_g1

0xa59d,	// (0x00047953) ai_gene_pane_ParamLimits

0xa59d,	// (0x00047953) ai_gene_pane

0xa5a9,	// (0x0004795f) ai_links_pane_ParamLimits

0xa5a9,	// (0x0004795f) ai_links_pane

0xa5b5,	// (0x0004796b) indicator_pane_cp1_ParamLimits

0xa5b5,	// (0x0004796b) indicator_pane_cp1

0xa5c1,	// (0x00047977) main_pane_idle_g1_cp_ParamLimits

0xa5c1,	// (0x00047977) main_pane_idle_g1_cp

0x4193,	// (0x00041549) popup_ai_links_title_window

0xa5cd,	// (0x00047983) soft_indicator_pane_cp1_ParamLimits

0xa5cd,	// (0x00047983) soft_indicator_pane_cp1

0x6642,	// (0x000439f8) ai_links_pane_g1

0x664b,	// (0x00043a01) grid_ai_links_pane

0xc063,	// (0x00049419) ai_gene_pane_1

0x6630,	// (0x000439e6) ai_gene_pane_2

0x6639,	// (0x000439ef) list_highlight_pane_cp4

0xc047,	// (0x000493fd) cell_ai_link_pane_ParamLimits

0xc047,	// (0x000493fd) cell_ai_link_pane

0x6628,	// (0x000439de) cell_ai_link_pane_g1

0x43ac,	// (0x00041762) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004cce3) cell_ai_link_pane_g

0x3f60,	// (0x00041316) grid_highlight_cp2

0x3f60,	// (0x00041316) bg_popup_sub_pane_cp1

0x41aa,	// (0x00041560) popup_ai_links_title_window_t1

0x6576,	// (0x0004392c) ai_gene_pane_1_g1_ParamLimits

0x6576,	// (0x0004392c) ai_gene_pane_1_g1

0x6582,	// (0x00043938) ai_gene_pane_1_g2_ParamLimits

0x6582,	// (0x00043938) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004ccd9) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004ccd9) ai_gene_pane_1_g

0x658f,	// (0x00043945) ai_gene_pane_1_t1_ParamLimits

0x658f,	// (0x00043945) ai_gene_pane_1_t1

0x65c3,	// (0x00043979) grid_ai_soft_ind_pane

0x6561,	// (0x00043917) ai_gene_pane_2_t1_ParamLimits

0x6561,	// (0x00043917) ai_gene_pane_2_t1

0xa5d9,	// (0x0004798f) main_pane_empty_t1_ParamLimits

0xa5d9,	// (0x0004798f) main_pane_empty_t1

0xa5f1,	// (0x000479a7) main_pane_empty_t2_ParamLimits

0xa5f1,	// (0x000479a7) main_pane_empty_t2

0xa606,	// (0x000479bc) main_pane_empty_t3_ParamLimits

0xa606,	// (0x000479bc) main_pane_empty_t3

0xa618,	// (0x000479ce) main_pane_empty_t4_ParamLimits

0xa618,	// (0x000479ce) main_pane_empty_t4

0xa62a,	// (0x000479e0) main_pane_empty_t5_ParamLimits

0xa62a,	// (0x000479e0) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0004c942) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0004c942) main_pane_empty_t

0x479e,	// (0x00041b54) bg_popup_window_pane_ParamLimits

0x479e,	// (0x00041b54) bg_popup_window_pane

0x62db,	// (0x00043691) find_popup_pane_cp2_ParamLimits

0x62db,	// (0x00043691) find_popup_pane_cp2

0x62e7,	// (0x0004369d) heading_pane_ParamLimits

0x62e7,	// (0x0004369d) heading_pane

0x3f60,	// (0x00041316) bg_popup_sub_pane

0xbfdb,	// (0x00049391) bg_popup_window_pane_g1_ParamLimits

0xbfdb,	// (0x00049391) bg_popup_window_pane_g1

0xbfe7,	// (0x0004939d) bg_popup_window_pane_g2_ParamLimits

0xbfe7,	// (0x0004939d) bg_popup_window_pane_g2

0xbff3,	// (0x000493a9) bg_popup_window_pane_g3_ParamLimits

0xbff3,	// (0x000493a9) bg_popup_window_pane_g3

0xbfff,	// (0x000493b5) bg_popup_window_pane_g4_ParamLimits

0xbfff,	// (0x000493b5) bg_popup_window_pane_g4

0xc00b,	// (0x000493c1) bg_popup_window_pane_g5_ParamLimits

0xc00b,	// (0x000493c1) bg_popup_window_pane_g5

0xc017,	// (0x000493cd) bg_popup_window_pane_g6_ParamLimits

0xc017,	// (0x000493cd) bg_popup_window_pane_g6

0xc023,	// (0x000493d9) bg_popup_window_pane_g7_ParamLimits

0xc023,	// (0x000493d9) bg_popup_window_pane_g7

0xc02f,	// (0x000493e5) bg_popup_window_pane_g8_ParamLimits

0xc02f,	// (0x000493e5) bg_popup_window_pane_g8

0xc03b,	// (0x000493f1) bg_popup_window_pane_g9_ParamLimits

0xc03b,	// (0x000493f1) bg_popup_window_pane_g9

0x62c1,	// (0x00043677) bg_popup_window_pane_g10_ParamLimits

0x62c1,	// (0x00043677) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004cca1) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004cca1) bg_popup_window_pane_g

0x6278,	// (0x0004362e) bg_popup_heading_pane_ParamLimits

0x6278,	// (0x0004362e) bg_popup_heading_pane

0x9622,	// (0x000469d8) tabs_4_passive_pane_cp_srt_ParamLimits

0x9622,	// (0x000469d8) tabs_4_passive_pane_cp_srt

0x9634,	// (0x000469ea) tabs_4_passive_pane_srt_ParamLimits

0x628c,	// (0x00043642) heading_pane_g2

0x9634,	// (0x000469ea) tabs_4_passive_pane_srt

0x483d,	// (0x00041bf3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x483d,	// (0x00041bf3) bg_passive_tab_pane_cp3_srt

0x6294,	// (0x0004364a) heading_pane_t1_ParamLimits

0x6294,	// (0x0004364a) heading_pane_t1

0x62ab,	// (0x00043661) heading_pane_t2_ParamLimits

0x62ab,	// (0x00043661) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004cc9c) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004cc9c) heading_pane_t

0x5da7,	// (0x0004315d) bg_popup_heading_pane_g1

0x5e38,	// (0x000431ee) bg_popup_heading_pane_g2

0x5e42,	// (0x000431f8) bg_popup_heading_pane_g3

0x5e4c,	// (0x00043202) bg_popup_heading_pane_g4

0x5e56,	// (0x0004320c) bg_popup_heading_pane_g5

0x5e60,	// (0x00043216) bg_popup_heading_pane_g6

0x5e68,	// (0x0004321e) bg_popup_heading_pane_g7

0x5e70,	// (0x00043226) bg_popup_heading_pane_g8

0x5e7a,	// (0x00043230) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004cc58) bg_popup_heading_pane_g

0x566d,	// (0x00042a23) bg_popup_sub_pane_g1

0x5675,	// (0x00042a2b) bg_popup_sub_pane_g2

0x567d,	// (0x00042a33) bg_popup_sub_pane_g3

0x5685,	// (0x00042a3b) bg_popup_sub_pane_g4

0x568d,	// (0x00042a43) bg_popup_sub_pane_g5

0x5695,	// (0x00042a4b) bg_popup_sub_pane_g6

0x569d,	// (0x00042a53) bg_popup_sub_pane_g7

0x56a5,	// (0x00042a5b) bg_popup_sub_pane_g8

0x56ad,	// (0x00042a63) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004cc32) bg_popup_sub_pane_g

0x3fae,	// (0x00041364) bg_popup_window_pane_cp5_ParamLimits

0x3fae,	// (0x00041364) bg_popup_window_pane_cp5

0x41c7,	// (0x0004157d) popup_note_window_g1_ParamLimits

0x41c7,	// (0x0004157d) popup_note_window_g1

0x41d3,	// (0x00041589) popup_note_window_t1_ParamLimits

0x41d3,	// (0x00041589) popup_note_window_t1

0x41e5,	// (0x0004159b) popup_note_window_t2_ParamLimits

0x41e5,	// (0x0004159b) popup_note_window_t2

0x41f7,	// (0x000415ad) popup_note_window_t3_ParamLimits

0x41f7,	// (0x000415ad) popup_note_window_t3

0x4209,	// (0x000415bf) popup_note_window_t4_ParamLimits

0x4209,	// (0x000415bf) popup_note_window_t4

0x4231,	// (0x000415e7) popup_note_window_t5_ParamLimits

0x4231,	// (0x000415e7) popup_note_window_t5

0x0004,

0xf597,	// (0x0004c94d) popup_note_window_t_ParamLimits

0xf597,	// (0x0004c94d) popup_note_window_t

0x42c0,	// (0x00041676) bg_popup_window_pane_cp6_ParamLimits

0x42c0,	// (0x00041676) bg_popup_window_pane_cp6

0x5d1b,	// (0x000430d1) popup_note_image_window_g1_ParamLimits

0x5d1b,	// (0x000430d1) popup_note_image_window_g1

0x5d27,	// (0x000430dd) popup_note_image_window_g2_ParamLimits

0x5d27,	// (0x000430dd) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004cc26) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004cc26) popup_note_image_window_g

0x5d40,	// (0x000430f6) popup_note_image_window_t1_ParamLimits

0x5d40,	// (0x000430f6) popup_note_image_window_t1

0x5d59,	// (0x0004310f) popup_note_image_window_t2_ParamLimits

0x5d59,	// (0x0004310f) popup_note_image_window_t2

0x5d72,	// (0x00043128) popup_note_image_window_t3_ParamLimits

0x5d72,	// (0x00043128) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004cc2b) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004cc2b) popup_note_image_window_t

0x5bf8,	// (0x00042fae) bg_popup_window_pane_cp7_ParamLimits

0x5bf8,	// (0x00042fae) bg_popup_window_pane_cp7

0x5c28,	// (0x00042fde) popup_note_wait_window_g1_ParamLimits

0x5c28,	// (0x00042fde) popup_note_wait_window_g1

0x5c34,	// (0x00042fea) popup_note_wait_window_g2_ParamLimits

0x5c34,	// (0x00042fea) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004cc14) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004cc14) popup_note_wait_window_g

0x5c4c,	// (0x00043002) popup_note_wait_window_t1_ParamLimits

0x5c4c,	// (0x00043002) popup_note_wait_window_t1

0x5c73,	// (0x00043029) popup_note_wait_window_t2_ParamLimits

0x5c73,	// (0x00043029) popup_note_wait_window_t2

0x5c90,	// (0x00043046) popup_note_wait_window_t3_ParamLimits

0x5c90,	// (0x00043046) popup_note_wait_window_t3

0x5ca3,	// (0x00043059) popup_note_wait_window_t4_ParamLimits

0x5ca3,	// (0x00043059) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004cc1b) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004cc1b) popup_note_wait_window_t

0x5cc8,	// (0x0004307e) wait_bar_pane_ParamLimits

0x5cc8,	// (0x0004307e) wait_bar_pane

0x3f60,	// (0x00041316) wait_anim_pane

0x3f60,	// (0x00041316) wait_border_pane

0x3f56,	// (0x0004130c) wait_anim_pane_g1

0x3f56,	// (0x0004130c) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0004cad6) wait_anim_pane_g

0x5b9c,	// (0x00042f52) wait_border_pane_g1

0x5ba7,	// (0x00042f5d) wait_border_pane_g2

0x5bb0,	// (0x00042f66) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004cc0d) wait_border_pane_g

0x5a0c,	// (0x00042dc2) bg_popup_window_pane_cp16_ParamLimits

0x5a0c,	// (0x00042dc2) bg_popup_window_pane_cp16

0x5b0c,	// (0x00042ec2) indicator_popup_pane_cp4_ParamLimits

0x5b0c,	// (0x00042ec2) indicator_popup_pane_cp4

0x5b20,	// (0x00042ed6) popup_query_data_window_t1_ParamLimits

0x5b20,	// (0x00042ed6) popup_query_data_window_t1

0x5b32,	// (0x00042ee8) popup_query_data_window_t2_ParamLimits

0x5b32,	// (0x00042ee8) popup_query_data_window_t2

0x5b4b,	// (0x00042f01) popup_query_data_window_t3_ParamLimits

0x5b4b,	// (0x00042f01) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004cc06) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004cc06) popup_query_data_window_t

0x5b65,	// (0x00042f1b) query_popup_data_pane_ParamLimits

0x5b65,	// (0x00042f1b) query_popup_data_pane

0x5b79,	// (0x00042f2f) query_popup_data_pane_cp1_ParamLimits

0x5b79,	// (0x00042f2f) query_popup_data_pane_cp1

0x5a0c,	// (0x00042dc2) bg_popup_window_pane_cp10_ParamLimits

0x5a0c,	// (0x00042dc2) bg_popup_window_pane_cp10

0x5a3e,	// (0x00042df4) indicator_popup_pane_ParamLimits

0x5a3e,	// (0x00042df4) indicator_popup_pane

0x5a60,	// (0x00042e16) popup_query_code_window_t1_ParamLimits

0x5a60,	// (0x00042e16) popup_query_code_window_t1

0x5a7a,	// (0x00042e30) popup_query_code_window_t2_ParamLimits

0x5a7a,	// (0x00042e30) popup_query_code_window_t2

0x5ac3,	// (0x00042e79) popup_query_code_window_t3_ParamLimits

0x5ac3,	// (0x00042e79) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004cbff) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004cbff) popup_query_code_window_t

0x5af2,	// (0x00042ea8) query_popup_pane_ParamLimits

0x5af2,	// (0x00042ea8) query_popup_pane

0x42c0,	// (0x00041676) bg_popup_window_pane_cp15_ParamLimits

0x42c0,	// (0x00041676) bg_popup_window_pane_cp15

0x42de,	// (0x00041694) indicator_popup_pane_cp1_ParamLimits

0x42de,	// (0x00041694) indicator_popup_pane_cp1

0x42f1,	// (0x000416a7) indicator_popup_pane_cp2_ParamLimits

0x42f1,	// (0x000416a7) indicator_popup_pane_cp2

0x4304,	// (0x000416ba) popup_query_data_code_window_g1_ParamLimits

0x4304,	// (0x000416ba) popup_query_data_code_window_g1

0x4317,	// (0x000416cd) popup_query_data_code_window_t1_ParamLimits

0x4317,	// (0x000416cd) popup_query_data_code_window_t1

0x4329,	// (0x000416df) popup_query_data_code_window_t2_ParamLimits

0x4329,	// (0x000416df) popup_query_data_code_window_t2

0x433b,	// (0x000416f1) popup_query_data_code_window_t3_ParamLimits

0x433b,	// (0x000416f1) popup_query_data_code_window_t3

0x4351,	// (0x00041707) popup_query_data_code_window_t4_ParamLimits

0x4351,	// (0x00041707) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0004c958) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0004c958) popup_query_data_code_window_t

0x92df,	// (0x00046695) list_single_midp_graphic_pane_g3

0x4369,	// (0x0004171f) query_popup_data_pane_cp2_ParamLimits

0x437c,	// (0x00041732) query_popup_pane_cp2_ParamLimits

0x437c,	// (0x00041732) query_popup_pane_cp2

0x3f60,	// (0x00041316) bg_popup_window_pane_cp11

0x5a04,	// (0x00042dba) heading_pane_cp5

0x440a,	// (0x000417c0) listscroll_popup_info_pane

0x3f60,	// (0x00041316) input_focus_pane_cp3

0x438f,	// (0x00041745) query_popup_pane_t1

0x439d,	// (0x00041753) list_popup_info_pane_ParamLimits

0x439d,	// (0x00041753) list_popup_info_pane

0x43ac,	// (0x00041762) listscroll_popup_info_pane_g1

0x43b4,	// (0x0004176a) scroll_pane_cp7

0x43be,	// (0x00041774) popup_info_list_pane_t1_ParamLimits

0x43be,	// (0x00041774) popup_info_list_pane_t1

0x43d8,	// (0x0004178e) popup_info_list_pane_t2_ParamLimits

0x43d8,	// (0x0004178e) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0004c961) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0004c961) popup_info_list_pane_t

0x3f60,	// (0x00041316) bg_popup_window_pane_cp12

0x69ad,	// (0x00043d63) find_popup_pane

0x3fbc,	// (0x00041372) bg_popup_window_pane_cp3

0x43f2,	// (0x000417a8) heading_pane_cp3

0x43fe,	// (0x000417b4) listscroll_popup_graphic_pane

0x3f60,	// (0x00041316) bg_popup_window_pane_cp4

0xa68e,	// (0x00047a44) heading_pane_cp4

0x440a,	// (0x000417c0) listscroll_popup_colour_pane

0xa698,	// (0x00047a4e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa698,	// (0x00047a4e) cell_large_graphic_colour_none_popup_pane

0xa6ac,	// (0x00047a62) grid_large_graphic_colour_popup_pane_ParamLimits

0xa6ac,	// (0x00047a62) grid_large_graphic_colour_popup_pane

0xa6d0,	// (0x00047a86) listscroll_popup_colour_pane_g1_ParamLimits

0xa6d0,	// (0x00047a86) listscroll_popup_colour_pane_g1

0xa6e7,	// (0x00047a9d) listscroll_popup_colour_pane_g2_ParamLimits

0xa6e7,	// (0x00047a9d) listscroll_popup_colour_pane_g2

0xa6fe,	// (0x00047ab4) listscroll_popup_colour_pane_g3_ParamLimits

0xa6fe,	// (0x00047ab4) listscroll_popup_colour_pane_g3

0xa70e,	// (0x00047ac4) listscroll_popup_colour_pane_g4_ParamLimits

0xa70e,	// (0x00047ac4) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0004c966) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0004c966) listscroll_popup_colour_pane_g

0x4412,	// (0x000417c8) scroll_pane_cp6_ParamLimits

0x4412,	// (0x000417c8) scroll_pane_cp6

0xa71d,	// (0x00047ad3) cell_large_graphic_colour_popup_pane_ParamLimits

0xa71d,	// (0x00047ad3) cell_large_graphic_colour_popup_pane

0x4424,	// (0x000417da) cell_large_graphic_colour_none_popup_pane_t1

0x3f60,	// (0x00041316) grid_highlight_pane_cp5

0x4433,	// (0x000417e9) cell_large_graphic_colour_popup_pane_g1

0x443b,	// (0x000417f1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0004c96f) cell_large_graphic_colour_popup_pane_g

0x4443,	// (0x000417f9) cell_large_graphic_colour_popup_pane_g2_copy1

0x444c,	// (0x00041802) grid_highlight_pane_cp4

0x4454,	// (0x0004180a) bg_popup_window_pane_cp8_ParamLimits

0x4454,	// (0x0004180a) bg_popup_window_pane_cp8

0x446f,	// (0x00041825) popup_snote_single_text_window_g1_ParamLimits

0x446f,	// (0x00041825) popup_snote_single_text_window_g1

0x4481,	// (0x00041837) popup_snote_single_text_window_t1_ParamLimits

0x4481,	// (0x00041837) popup_snote_single_text_window_t1

0x4494,	// (0x0004184a) popup_snote_single_text_window_t2_ParamLimits

0x4494,	// (0x0004184a) popup_snote_single_text_window_t2

0x44a7,	// (0x0004185d) popup_snote_single_text_window_t3_ParamLimits

0x44a7,	// (0x0004185d) popup_snote_single_text_window_t3

0x44e0,	// (0x00041896) popup_snote_single_text_window_t4_ParamLimits

0x44e0,	// (0x00041896) popup_snote_single_text_window_t4

0x4514,	// (0x000418ca) popup_snote_single_text_window_t5_ParamLimits

0x4514,	// (0x000418ca) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0004c974) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0004c974) popup_snote_single_text_window_t

0x4543,	// (0x000418f9) bg_popup_window_pane_cp9_ParamLimits

0x4543,	// (0x000418f9) bg_popup_window_pane_cp9

0x446f,	// (0x00041825) popup_snote_single_graphic_window_g1_ParamLimits

0x446f,	// (0x00041825) popup_snote_single_graphic_window_g1

0x4551,	// (0x00041907) popup_snote_single_graphic_window_g2_ParamLimits

0x4551,	// (0x00041907) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0004c97f) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0004c97f) popup_snote_single_graphic_window_g

0x455d,	// (0x00041913) popup_snote_single_graphic_window_t1_ParamLimits

0x455d,	// (0x00041913) popup_snote_single_graphic_window_t1

0x4570,	// (0x00041926) popup_snote_single_graphic_window_t2_ParamLimits

0x4570,	// (0x00041926) popup_snote_single_graphic_window_t2

0x4583,	// (0x00041939) popup_snote_single_graphic_window_t3_ParamLimits

0x4583,	// (0x00041939) popup_snote_single_graphic_window_t3

0x45bc,	// (0x00041972) popup_snote_single_graphic_window_t4_ParamLimits

0x45bc,	// (0x00041972) popup_snote_single_graphic_window_t4

0x45f0,	// (0x000419a6) popup_snote_single_graphic_window_t5_ParamLimits

0x45f0,	// (0x000419a6) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0004c984) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0004c984) popup_snote_single_graphic_window_t

0x6931,	// (0x00043ce7) grid_graphic_popup_pane_ParamLimits

0x6931,	// (0x00043ce7) grid_graphic_popup_pane

0x695d,	// (0x00043d13) listscroll_popup_graphic_pane_g1_ParamLimits

0x695d,	// (0x00043d13) listscroll_popup_graphic_pane_g1

0xc2bc,	// (0x00049672) listscroll_popup_graphic_pane_g2_ParamLimits

0xc2bc,	// (0x00049672) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004cd7c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004cd7c) listscroll_popup_graphic_pane_g

0x6777,	// (0x00043b2d) scroll_pane_cp5

0xc27d,	// (0x00049633) cell_graphic_popup_pane_ParamLimits

0xc27d,	// (0x00049633) cell_graphic_popup_pane

0x68fc,	// (0x00043cb2) cell_graphic_popup_pane_g1

0x6904,	// (0x00043cba) cell_graphic_popup_pane_g2

0x4443,	// (0x000417f9) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004cd75) cell_graphic_popup_pane_g

0x690d,	// (0x00043cc3) cell_graphic_popup_pane_t2

0x444c,	// (0x00041802) grid_highlight_pane_cp3

0x4631,	// (0x000419e7) list_gen_pane_ParamLimits

0x4631,	// (0x000419e7) list_gen_pane

0x4659,	// (0x00041a0f) scroll_pane

0xc230,	// (0x000495e6) bg_list_pane_g1_ParamLimits

0xc230,	// (0x000495e6) bg_list_pane_g1

0x68ab,	// (0x00043c61) bg_list_pane_g2_ParamLimits

0x68ab,	// (0x00043c61) bg_list_pane_g2

0x68be,	// (0x00043c74) bg_list_pane_g3_ParamLimits

0x68be,	// (0x00043c74) bg_list_pane_g3

0x68d0,	// (0x00043c86) bg_list_pane_g4_ParamLimits

0x68d0,	// (0x00043c86) bg_list_pane_g4

0xc24b,	// (0x00049601) bg_list_pane_g5_ParamLimits

0xc24b,	// (0x00049601) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004cd6a) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004cd6a) bg_list_pane_g

0xaf9b,	// (0x00048351) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double2_graphic_large_graphic_pane

0xaf9b,	// (0x00048351) list_double2_graphic_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double2_graphic_pane

0xaf9b,	// (0x00048351) list_double2_large_graphic_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double2_large_graphic_pane

0xaf9b,	// (0x00048351) list_double2_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double2_pane

0xaf9b,	// (0x00048351) list_double_graphic_heading_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_graphic_heading_pane

0xaf9b,	// (0x00048351) list_double_graphic_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_graphic_pane

0xaf9b,	// (0x00048351) list_double_heading_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_heading_pane

0xaf9b,	// (0x00048351) list_double_large_graphic_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_large_graphic_pane

0xaf9b,	// (0x00048351) list_double_number_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_number_pane

0xaf9b,	// (0x00048351) list_double_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_pane

0xaf9b,	// (0x00048351) list_double_time_pane_ParamLimits

0xaf9b,	// (0x00048351) list_double_time_pane

0xaf9b,	// (0x00048351) list_setting_number_pane_ParamLimits

0xaf9b,	// (0x00048351) list_setting_number_pane

0xaf9b,	// (0x00048351) list_setting_pane_ParamLimits

0xaf9b,	// (0x00048351) list_setting_pane

0xafdf,	// (0x00048395) list_single_2graphic_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_2graphic_pane

0xafdf,	// (0x00048395) list_single_graphic_heading_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_graphic_heading_pane

0xafdf,	// (0x00048395) list_single_graphic_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_graphic_pane

0xafdf,	// (0x00048395) list_single_heading_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_heading_pane

0xb069,	// (0x0004841f) list_single_large_graphic_pane_ParamLimits

0xb069,	// (0x0004841f) list_single_large_graphic_pane

0xafdf,	// (0x00048395) list_single_number_heading_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_number_heading_pane

0xafdf,	// (0x00048395) list_single_number_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_number_pane

0xafdf,	// (0x00048395) list_single_pane_ParamLimits

0xafdf,	// (0x00048395) list_single_pane

0x3f60,	// (0x00041316) list_highlight_pane_cp1

0x508c,	// (0x00042442) list_single_pane_g1_ParamLimits

0x508c,	// (0x00042442) list_single_pane_g1

0x88e8,	// (0x00045c9e) list_single_pane_g2_ParamLimits

0x88e8,	// (0x00045c9e) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0004c9a0) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0004c9a0) list_single_pane_g

0xaf85,	// (0x0004833b) list_single_pane_t1_ParamLimits

0xaf85,	// (0x0004833b) list_single_pane_t1

0x508c,	// (0x00042442) list_single_number_pane_g1_ParamLimits

0x508c,	// (0x00042442) list_single_number_pane_g1

0x88e8,	// (0x00045c9e) list_single_number_pane_g2_ParamLimits

0x88e8,	// (0x00045c9e) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0004c9a0) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0004c9a0) list_single_number_pane_g

0xaf2d,	// (0x000482e3) list_single_number_pane_t1_ParamLimits

0xaf2d,	// (0x000482e3) list_single_number_pane_t1

0xaf43,	// (0x000482f9) list_single_number_pane_t2_ParamLimits

0xaf43,	// (0x000482f9) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004cd2b) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004cd2b) list_single_number_pane_t

0x88dc,	// (0x00045c92) list_single_graphic_pane_g1_ParamLimits

0x88dc,	// (0x00045c92) list_single_graphic_pane_g1

0x508c,	// (0x00042442) list_single_graphic_pane_g2_ParamLimits

0x508c,	// (0x00042442) list_single_graphic_pane_g2

0x88e8,	// (0x00045c9e) list_single_graphic_pane_g3_ParamLimits

0x88e8,	// (0x00045c9e) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0004c98f) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0004c98f) list_single_graphic_pane_g

0x88f4,	// (0x00045caa) list_single_graphic_pane_t1_ParamLimits

0x88f4,	// (0x00045caa) list_single_graphic_pane_t1

0x890a,	// (0x00045cc0) list_single_heading_pane_g1_ParamLimits

0x890a,	// (0x00045cc0) list_single_heading_pane_g1

0x88e8,	// (0x00045c9e) list_single_heading_pane_g2_ParamLimits

0x88e8,	// (0x00045c9e) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0004c996) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0004c996) list_single_heading_pane_g

0x891d,	// (0x00045cd3) list_single_heading_pane_t1_ParamLimits

0x891d,	// (0x00045cd3) list_single_heading_pane_t1

0xa746,	// (0x00047afc) list_single_heading_pane_t2_ParamLimits

0xa746,	// (0x00047afc) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004c99b) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004c99b) list_single_heading_pane_t

0x508c,	// (0x00042442) list_single_number_heading_pane_g1_ParamLimits

0x508c,	// (0x00042442) list_single_number_heading_pane_g1

0x88e8,	// (0x00045c9e) list_single_number_heading_pane_g2_ParamLimits

0x88e8,	// (0x00045c9e) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0004c9a0) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0004c9a0) list_single_number_heading_pane_g

0x8933,	// (0x00045ce9) list_single_number_heading_pane_t1_ParamLimits

0x8933,	// (0x00045ce9) list_single_number_heading_pane_t1

0x8949,	// (0x00045cff) list_single_number_heading_pane_t2_ParamLimits

0x8949,	// (0x00045cff) list_single_number_heading_pane_t2

0x895b,	// (0x00045d11) list_single_number_heading_pane_t3_ParamLimits

0x895b,	// (0x00045d11) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x0004c9a5) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x0004c9a5) list_single_number_heading_pane_t

0x896d,	// (0x00045d23) list_single_graphic_heading_pane_g1_ParamLimits

0x896d,	// (0x00045d23) list_single_graphic_heading_pane_g1

0x8983,	// (0x00045d39) list_single_graphic_heading_pane_g4_ParamLimits

0x8983,	// (0x00045d39) list_single_graphic_heading_pane_g4

0x88e8,	// (0x00045c9e) list_single_graphic_heading_pane_g5_ParamLimits

0x88e8,	// (0x00045c9e) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0004c9ac) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0004c9ac) list_single_graphic_heading_pane_g

0x8933,	// (0x00045ce9) list_single_graphic_heading_pane_t1_ParamLimits

0x8933,	// (0x00045ce9) list_single_graphic_heading_pane_t1

0x8994,	// (0x00045d4a) list_single_graphic_heading_pane_t2_ParamLimits

0x8994,	// (0x00045d4a) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x0004c9b3) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x0004c9b3) list_single_graphic_heading_pane_t

0xa758,	// (0x00047b0e) list_single_large_graphic_pane_g1_ParamLimits

0xa758,	// (0x00047b0e) list_single_large_graphic_pane_g1

0xa764,	// (0x00047b1a) list_single_large_graphic_pane_g2_ParamLimits

0xa764,	// (0x00047b1a) list_single_large_graphic_pane_g2

0xa770,	// (0x00047b26) list_single_large_graphic_pane_g3_ParamLimits

0xa770,	// (0x00047b26) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0004c9b8) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0004c9b8) list_single_large_graphic_pane_g

0x5ba7,	// (0x00042f5d) wait_border_pane_g2_copy1

0xa77c,	// (0x00047b32) list_single_large_graphic_pane_g4_cp2

0x89ac,	// (0x00045d62) list_single_large_graphic_pane_t1_ParamLimits

0x89ac,	// (0x00045d62) list_single_large_graphic_pane_t1

0xa784,	// (0x00047b3a) list_double_pane_g1_ParamLimits

0xa784,	// (0x00047b3a) list_double_pane_g1

0xa790,	// (0x00047b46) list_double_pane_g2_ParamLimits

0xa790,	// (0x00047b46) list_double_pane_g2

0x0001,

0xf609,	// (0x0004c9bf) list_double_pane_g_ParamLimits

0xf609,	// (0x0004c9bf) list_double_pane_g

0x89c2,	// (0x00045d78) list_double_pane_t1_ParamLimits

0x89c2,	// (0x00045d78) list_double_pane_t1

0x89d8,	// (0x00045d8e) list_double_pane_t2_ParamLimits

0x89d8,	// (0x00045d8e) list_double_pane_t2

0x0001,

0xf60e,	// (0x0004c9c4) list_double_pane_t_ParamLimits

0xf60e,	// (0x0004c9c4) list_double_pane_t

0x89ea,	// (0x00045da0) list_double2_pane_g1_ParamLimits

0x89ea,	// (0x00045da0) list_double2_pane_g1

0x89fb,	// (0x00045db1) list_double2_pane_g2_ParamLimits

0x89fb,	// (0x00045db1) list_double2_pane_g2

0x0001,

0xf613,	// (0x0004c9c9) list_double2_pane_g_ParamLimits

0xf613,	// (0x0004c9c9) list_double2_pane_g

0x8a07,	// (0x00045dbd) list_double2_pane_t1_ParamLimits

0x8a07,	// (0x00045dbd) list_double2_pane_t1

0x8a1d,	// (0x00045dd3) list_double2_pane_t2_ParamLimits

0x8a1d,	// (0x00045dd3) list_double2_pane_t2

0x0001,

0xf618,	// (0x0004c9ce) list_double2_pane_t_ParamLimits

0xf618,	// (0x0004c9ce) list_double2_pane_t

0xa784,	// (0x00047b3a) list_double_number_pane_g1_ParamLimits

0xa784,	// (0x00047b3a) list_double_number_pane_g1

0xa790,	// (0x00047b46) list_double_number_pane_g2_ParamLimits

0xa790,	// (0x00047b46) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0004c9bf) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0004c9bf) list_double_number_pane_g

0x8a2f,	// (0x00045de5) list_double_number_pane_t1_ParamLimits

0x8a2f,	// (0x00045de5) list_double_number_pane_t1

0x8a41,	// (0x00045df7) list_double_number_pane_t2_ParamLimits

0x8a41,	// (0x00045df7) list_double_number_pane_t2

0x8a57,	// (0x00045e0d) list_double_number_pane_t3_ParamLimits

0x8a57,	// (0x00045e0d) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x0004c9d3) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x0004c9d3) list_double_number_pane_t

0x8a69,	// (0x00045e1f) list_double_graphic_pane_g1_ParamLimits

0x8a69,	// (0x00045e1f) list_double_graphic_pane_g1

0xa79c,	// (0x00047b52) list_double_graphic_pane_g2_ParamLimits

0xa79c,	// (0x00047b52) list_double_graphic_pane_g2

0xa7ab,	// (0x00047b61) list_double_graphic_pane_g3_ParamLimits

0xa7ab,	// (0x00047b61) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0004c9da) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0004c9da) list_double_graphic_pane_g

0x8a81,	// (0x00045e37) list_double_graphic_pane_t1_ParamLimits

0x8a81,	// (0x00045e37) list_double_graphic_pane_t1

0x8a97,	// (0x00045e4d) list_double_graphic_pane_t2_ParamLimits

0x8a97,	// (0x00045e4d) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x0004c9e3) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x0004c9e3) list_double_graphic_pane_t

0x8aa9,	// (0x00045e5f) list_double2_graphic_pane_g1_ParamLimits

0x8aa9,	// (0x00045e5f) list_double2_graphic_pane_g1

0xa7b7,	// (0x00047b6d) list_double2_graphic_pane_g2_ParamLimits

0xa7b7,	// (0x00047b6d) list_double2_graphic_pane_g2

0xa7c3,	// (0x00047b79) list_double2_graphic_pane_g3_ParamLimits

0xa7c3,	// (0x00047b79) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0004c9e8) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0004c9e8) list_double2_graphic_pane_g

0x8ab5,	// (0x00045e6b) list_double2_graphic_pane_t1_ParamLimits

0x8ab5,	// (0x00045e6b) list_double2_graphic_pane_t1

0x8acb,	// (0x00045e81) list_double2_graphic_pane_t2_ParamLimits

0x8acb,	// (0x00045e81) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0004c9ef) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0004c9ef) list_double2_graphic_pane_t

0x8add,	// (0x00045e93) list_double_large_graphic_pane_g1_ParamLimits

0x8add,	// (0x00045e93) list_double_large_graphic_pane_g1

0x8b08,	// (0x00045ebe) list_double_large_graphic_pane_g2_ParamLimits

0x8b08,	// (0x00045ebe) list_double_large_graphic_pane_g2

0xa790,	// (0x00047b46) list_double_large_graphic_pane_g3_ParamLimits

0xa790,	// (0x00047b46) list_double_large_graphic_pane_g3

0x8b1e,	// (0x00045ed4) list_double_large_graphic_pane_g4_ParamLimits

0x8b1e,	// (0x00045ed4) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x0004c9f4) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x0004c9f4) list_double_large_graphic_pane_g

0x8b31,	// (0x00045ee7) list_double_large_graphic_pane_t1_ParamLimits

0x8b31,	// (0x00045ee7) list_double_large_graphic_pane_t1

0x8b4a,	// (0x00045f00) list_double_large_graphic_pane_t2_ParamLimits

0x8b4a,	// (0x00045f00) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0004c9ff) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0004c9ff) list_double_large_graphic_pane_t

0xa7e4,	// (0x00047b9a) list_double2_large_graphic_pane_g1_ParamLimits

0xa7e4,	// (0x00047b9a) list_double2_large_graphic_pane_g1

0xa7f0,	// (0x00047ba6) list_double2_large_graphic_pane_g2_ParamLimits

0xa7f0,	// (0x00047ba6) list_double2_large_graphic_pane_g2

0xa7c3,	// (0x00047b79) list_double2_large_graphic_pane_g3_ParamLimits

0xa7c3,	// (0x00047b79) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x0004ca04) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x0004ca04) list_double2_large_graphic_pane_g

0x8b5c,	// (0x00045f12) list_double2_large_graphic_pane_t1_ParamLimits

0x8b5c,	// (0x00045f12) list_double2_large_graphic_pane_t1

0x8b72,	// (0x00045f28) list_double2_large_graphic_pane_t2_ParamLimits

0x8b72,	// (0x00045f28) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0004ca0b) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0004ca0b) list_double2_large_graphic_pane_t

0x8b84,	// (0x00045f3a) list_double_heading_pane_g1_ParamLimits

0x8b84,	// (0x00045f3a) list_double_heading_pane_g1

0xa801,	// (0x00047bb7) list_double_heading_pane_g2_ParamLimits

0xa801,	// (0x00047bb7) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0004ca10) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0004ca10) list_double_heading_pane_g

0x8b95,	// (0x00045f4b) list_double_heading_pane_t1_ParamLimits

0x8b95,	// (0x00045f4b) list_double_heading_pane_t1

0x8a1d,	// (0x00045dd3) list_double_heading_pane_t2_ParamLimits

0x8a1d,	// (0x00045dd3) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x0004ca15) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x0004ca15) list_double_heading_pane_t

0x8bab,	// (0x00045f61) list_double_graphic_heading_pane_g1_ParamLimits

0x8bab,	// (0x00045f61) list_double_graphic_heading_pane_g1

0x8b84,	// (0x00045f3a) list_double_graphic_heading_pane_g2_ParamLimits

0x8b84,	// (0x00045f3a) list_double_graphic_heading_pane_g2

0xa801,	// (0x00047bb7) list_double_graphic_heading_pane_g3_ParamLimits

0xa801,	// (0x00047bb7) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x0004ca1a) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x0004ca1a) list_double_graphic_heading_pane_g

0x8bb7,	// (0x00045f6d) list_double_graphic_heading_pane_t1_ParamLimits

0x8bb7,	// (0x00045f6d) list_double_graphic_heading_pane_t1

0x8acb,	// (0x00045e81) list_double_graphic_heading_pane_t2_ParamLimits

0x8acb,	// (0x00045e81) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x0004ca21) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x0004ca21) list_double_graphic_heading_pane_t

0x8bcd,	// (0x00045f83) list_double_time_pane_g1_ParamLimits

0x8bcd,	// (0x00045f83) list_double_time_pane_g1

0x8bde,	// (0x00045f94) list_double_time_pane_g2_ParamLimits

0x8bde,	// (0x00045f94) list_double_time_pane_g2

0x0001,

0xf670,	// (0x0004ca26) list_double_time_pane_g_ParamLimits

0xf670,	// (0x0004ca26) list_double_time_pane_g

0x8bea,	// (0x00045fa0) list_double_time_pane_t1_ParamLimits

0x8bea,	// (0x00045fa0) list_double_time_pane_t1

0x8c00,	// (0x00045fb6) list_double_time_pane_t2_ParamLimits

0x8c00,	// (0x00045fb6) list_double_time_pane_t2

0x8c12,	// (0x00045fc8) list_double_time_pane_t3_ParamLimits

0x8c12,	// (0x00045fc8) list_double_time_pane_t3

0x8c24,	// (0x00045fda) list_double_time_pane_t4_ParamLimits

0x8c24,	// (0x00045fda) list_double_time_pane_t4

0x0003,

0xf675,	// (0x0004ca2b) list_double_time_pane_t_ParamLimits

0xf675,	// (0x0004ca2b) list_double_time_pane_t

0x8c36,	// (0x00045fec) list_setting_pane_g1_ParamLimits

0x8c36,	// (0x00045fec) list_setting_pane_g1

0x8c42,	// (0x00045ff8) list_setting_pane_g2_ParamLimits

0x8c42,	// (0x00045ff8) list_setting_pane_g2

0x0001,

0xf67e,	// (0x0004ca34) list_setting_pane_g_ParamLimits

0xf67e,	// (0x0004ca34) list_setting_pane_g

0x8c4e,	// (0x00046004) list_setting_pane_t1_ParamLimits

0x8c4e,	// (0x00046004) list_setting_pane_t1

0x8c68,	// (0x0004601e) list_setting_pane_t2_ParamLimits

0x8c68,	// (0x0004601e) list_setting_pane_t2

0x0002,

0xf683,	// (0x0004ca39) list_setting_pane_t_ParamLimits

0xf683,	// (0x0004ca39) list_setting_pane_t

0x8ca5,	// (0x0004605b) set_value_pane_cp_ParamLimits

0x8ca5,	// (0x0004605b) set_value_pane_cp

0x8cb1,	// (0x00046067) list_setting_number_pane_g1_ParamLimits

0x8cb1,	// (0x00046067) list_setting_number_pane_g1

0xa80d,	// (0x00047bc3) list_setting_number_pane_g2_ParamLimits

0xa80d,	// (0x00047bc3) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x0004ca40) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x0004ca40) list_setting_number_pane_g

0xa819,	// (0x00047bcf) list_setting_number_pane_t1_ParamLimits

0xa819,	// (0x00047bcf) list_setting_number_pane_t1

0xa832,	// (0x00047be8) list_setting_number_pane_t2_ParamLimits

0xa832,	// (0x00047be8) list_setting_number_pane_t2

0xa84c,	// (0x00047c02) list_setting_number_pane_t3_ParamLimits

0xa84c,	// (0x00047c02) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x0004ca45) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x0004ca45) list_setting_number_pane_t

0x8ca5,	// (0x0004605b) set_value_pane_ParamLimits

0x8ca5,	// (0x0004605b) set_value_pane

0x4699,	// (0x00041a4f) bg_set_opt_pane_ParamLimits

0x4699,	// (0x00041a4f) bg_set_opt_pane

0xa88f,	// (0x00047c45) set_value_pane_t1

0x46ba,	// (0x00041a70) slider_set_pane_cp3

0x46c3,	// (0x00041a79) volume_small_pane_cp

0x46cc,	// (0x00041a82) list_form_gen_pane

0x46d5,	// (0x00041a8b) scroll_pane_cp8

0xa8a5,	// (0x00047c5b) form_field_data_pane_ParamLimits

0xa8a5,	// (0x00047c5b) form_field_data_pane

0xa8c5,	// (0x00047c7b) form_field_data_wide_pane_ParamLimits

0xa8c5,	// (0x00047c7b) form_field_data_wide_pane

0xa8e6,	// (0x00047c9c) form_field_popup_pane_ParamLimits

0xa8e6,	// (0x00047c9c) form_field_popup_pane

0xa904,	// (0x00047cba) form_field_popup_wide_pane_ParamLimits

0xa904,	// (0x00047cba) form_field_popup_wide_pane

0xa921,	// (0x00047cd7) form_field_slider_pane_ParamLimits

0xa921,	// (0x00047cd7) form_field_slider_pane

0xa934,	// (0x00047cea) form_field_slider_wide_pane_ParamLimits

0xa934,	// (0x00047cea) form_field_slider_wide_pane

0x46e6,	// (0x00041a9c) data_form_pane

0xa951,	// (0x00047d07) form_field_data_pane_t1

0x46f2,	// (0x00041aa8) input_focus_pane

0x4700,	// (0x00041ab6) data_form_wide_pane

0xa977,	// (0x00047d2d) form_field_data_wide_pane_t1

0x4461,	// (0x00041817) input_focus_pane_cp6

0xa999,	// (0x00047d4f) form_field_popup_pane_t1

0x46f2,	// (0x00041aa8) input_focus_pane_cp7

0x4720,	// (0x00041ad6) list_form_pane

0xa9bb,	// (0x00047d71) form_field_popup_wide_pane_t1

0x46f2,	// (0x00041aa8) input_focus_pane_cp8

0x472c,	// (0x00041ae2) list_form_wide_pane

0xa9d8,	// (0x00047d8e) form_field_slider_pane_t1_ParamLimits

0xa9d8,	// (0x00047d8e) form_field_slider_pane_t1

0xa9f0,	// (0x00047da6) form_field_slider_pane_t2_ParamLimits

0xa9f0,	// (0x00047da6) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x0004ca55) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x0004ca55) form_field_slider_pane_t

0x3fae,	// (0x00041364) input_focus_pane_cp9_ParamLimits

0x3fae,	// (0x00041364) input_focus_pane_cp9

0xaa05,	// (0x00047dbb) slider_cont_pane_ParamLimits

0xaa05,	// (0x00047dbb) slider_cont_pane

0x473b,	// (0x00041af1) form_field_slider_wide_pane_t1_ParamLimits

0x473b,	// (0x00041af1) form_field_slider_wide_pane_t1

0xaa19,	// (0x00047dcf) form_field_slider_wide_pane_t2_ParamLimits

0xaa19,	// (0x00047dcf) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x0004ca5a) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x0004ca5a) form_field_slider_wide_pane_t

0x3fae,	// (0x00041364) input_focus_pane_cp10_ParamLimits

0x3fae,	// (0x00041364) input_focus_pane_cp10

0xaa2b,	// (0x00047de1) slider_cont_pane_cp1_ParamLimits

0xaa2b,	// (0x00047de1) slider_cont_pane_cp1

0xaa3f,	// (0x00047df5) slider_form_pane_cp

0x474d,	// (0x00041b03) input_focus_pane_g1

0x4755,	// (0x00041b0b) input_focus_pane_g2

0x475d,	// (0x00041b13) input_focus_pane_g3

0x4765,	// (0x00041b1b) input_focus_pane_g4

0x476d,	// (0x00041b23) input_focus_pane_g5

0x4775,	// (0x00041b2b) input_focus_pane_g6

0x477d,	// (0x00041b33) input_focus_pane_g7

0x4785,	// (0x00041b3b) input_focus_pane_g8

0x478d,	// (0x00041b43) input_focus_pane_g9

0x3f56,	// (0x0004130c) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x0004ca5f) input_focus_pane_g

0x5bb0,	// (0x00042f66) wait_border_pane_g3_copy1

0xaa47,	// (0x00047dfd) data_form_pane_t1

0x3f56,	// (0x0004130c) wait_anim_pane_g1_copy1

0xaf55,	// (0x0004830b) data_form_wide_pane_t1

0xaa62,	// (0x00047e18) list_form_graphic_pane_cp_ParamLimits

0xaa62,	// (0x00047e18) list_form_graphic_pane_cp

0x6845,	// (0x00043bfb) slider_form_pane_g1

0x684e,	// (0x00043c04) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004cd5b) slider_form_pane_g

0xaa79,	// (0x00047e2f) list_form_graphic_pane_ParamLimits

0xaa79,	// (0x00047e2f) list_form_graphic_pane

0xaa93,	// (0x00047e49) list_form_graphic_pane_g1

0xaa9b,	// (0x00047e51) list_form_graphic_pane_t1_ParamLimits

0xaa9b,	// (0x00047e51) list_form_graphic_pane_t1

0x3fbc,	// (0x00041372) list_highlight_pane_cp5_ParamLimits

0x3fbc,	// (0x00041372) list_highlight_pane_cp5

0xaab0,	// (0x00047e66) find_pane_g1

0x4795,	// (0x00041b4b) input_find_pane

0xaab9,	// (0x00047e6f) input_find_pane_g1_ParamLimits

0xaab9,	// (0x00047e6f) input_find_pane_g1

0xaac5,	// (0x00047e7b) input_find_pane_t1_ParamLimits

0xaac5,	// (0x00047e7b) input_find_pane_t1

0xaada,	// (0x00047e90) input_find_pane_t2_ParamLimits

0xaada,	// (0x00047e90) input_find_pane_t2

0x0001,

0xf6be,	// (0x0004ca74) input_find_pane_t_ParamLimits

0xf6be,	// (0x0004ca74) input_find_pane_t

0x479e,	// (0x00041b54) input_focus_pane_cp5_ParamLimits

0x479e,	// (0x00041b54) input_focus_pane_cp5

0xaafb,	// (0x00047eb1) bg_popup_window_pane_cp2_ParamLimits

0xaafb,	// (0x00047eb1) bg_popup_window_pane_cp2

0xab08,	// (0x00047ebe) listscroll_menu_pane_ParamLimits

0xab08,	// (0x00047ebe) listscroll_menu_pane

0xab14,	// (0x00047eca) popup_submenu_window_ParamLimits

0xab14,	// (0x00047eca) popup_submenu_window

0x47ac,	// (0x00041b62) find_popup_pane_g1

0x47b4,	// (0x00041b6a) input_popup_find_pane_cp

0x479e,	// (0x00041b54) input_focus_pane_cp4_ParamLimits

0x479e,	// (0x00041b54) input_focus_pane_cp4

0x47be,	// (0x00041b74) input_popup_find_pane_t1_ParamLimits

0x47be,	// (0x00041b74) input_popup_find_pane_t1

0x3f60,	// (0x00041316) bg_popup_sub_pane_cp

0x47ec,	// (0x00041ba2) listscroll_popup_sub_pane

0x47f4,	// (0x00041baa) list_submenu_pane_ParamLimits

0x47f4,	// (0x00041baa) list_submenu_pane

0x4805,	// (0x00041bbb) scroll_pane_cp4

0x480d,	// (0x00041bc3) list_single_popup_submenu_pane_ParamLimits

0x480d,	// (0x00041bc3) list_single_popup_submenu_pane

0x4820,	// (0x00041bd6) list_single_popup_submenu_pane_g1

0x4828,	// (0x00041bde) list_single_popup_submenu_pane_t1_ParamLimits

0x4828,	// (0x00041bde) list_single_popup_submenu_pane_t1

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp1_ParamLimits

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp1

0xab4a,	// (0x00047f00) tabs_2_active_pane_g1

0xab52,	// (0x00047f08) tabs_2_active_pane_t1

0x3fbc,	// (0x00041372) bg_passive_tab_pane_cp1_ParamLimits

0x3fbc,	// (0x00041372) bg_passive_tab_pane_cp1

0xab4a,	// (0x00047f00) tabs_2_passive_pane_g1

0xab52,	// (0x00047f08) tabs_2_passive_pane_t1

0x5603,	// (0x000429b9) bg_active_tab_pane_cp4

0xab64,	// (0x00047f1a) tabs_2_long_active_pane_t1

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp4

0x92e7,	// (0x0004669d) list_single_midp_graphic_pane_g4_ParamLimits

0x5603,	// (0x000429b9) bg_active_tab_pane_cp5

0xab83,	// (0x00047f39) tabs_3_long_active_pane_t1

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp5

0x92e7,	// (0x0004669d) list_single_midp_graphic_pane_g4

0x3fbc,	// (0x00041372) bg_popup_window_pane_cp13_ParamLimits

0x3fbc,	// (0x00041372) bg_popup_window_pane_cp13

0x4852,	// (0x00041c08) listscroll_popup_fast_pane_ParamLimits

0x4852,	// (0x00041c08) listscroll_popup_fast_pane

0x4861,	// (0x00041c17) grid_popup_fast_pane_ParamLimits

0x4861,	// (0x00041c17) grid_popup_fast_pane

0x4873,	// (0x00041c29) scroll_pane_cp9_ParamLimits

0x4873,	// (0x00041c29) scroll_pane_cp9

0xc8aa,	// (0x00049c60) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8aa,	// (0x00049c60) list_single_graphic_hl_pane_t1_cp2

0x4897,	// (0x00041c4d) input_focus_pane_cp20_ParamLimits

0x4897,	// (0x00041c4d) input_focus_pane_cp20

0x48a5,	// (0x00041c5b) query_popup_data_pane_t1_ParamLimits

0x48a5,	// (0x00041c5b) query_popup_data_pane_t1

0x48b8,	// (0x00041c6e) query_popup_data_pane_t2_ParamLimits

0x48b8,	// (0x00041c6e) query_popup_data_pane_t2

0x48fe,	// (0x00041cb4) query_popup_data_pane_t3_ParamLimits

0x48fe,	// (0x00041cb4) query_popup_data_pane_t3

0x493f,	// (0x00041cf5) query_popup_data_pane_t4_ParamLimits

0x493f,	// (0x00041cf5) query_popup_data_pane_t4

0x497b,	// (0x00041d31) query_popup_data_pane_t5_ParamLimits

0x497b,	// (0x00041d31) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0004ca79) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0004ca79) query_popup_data_pane_t

0x474d,	// (0x00041b03) bg_set_opt_pane_g1

0x4755,	// (0x00041b0b) bg_set_opt_pane_g2

0x475d,	// (0x00041b13) bg_set_opt_pane_g3

0x4765,	// (0x00041b1b) bg_set_opt_pane_g4

0x476d,	// (0x00041b23) bg_set_opt_pane_g5

0x4775,	// (0x00041b2b) bg_set_opt_pane_g6

0x477d,	// (0x00041b33) bg_set_opt_pane_g7

0x4785,	// (0x00041b3b) bg_set_opt_pane_g8

0x478d,	// (0x00041b43) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x0004ca84) bg_set_opt_pane_g

0x8f5c,	// (0x00046312) control_top_pane_stacon_ParamLimits

0x8f5c,	// (0x00046312) control_top_pane_stacon

0x8faf,	// (0x00046365) signal_pane_stacon_ParamLimits

0x8faf,	// (0x00046365) signal_pane_stacon

0x4dcd,	// (0x00042183) stacon_top_pane_g1_ParamLimits

0x4dcd,	// (0x00042183) stacon_top_pane_g1

0x8fd4,	// (0x0004638a) title_pane_stacon_ParamLimits

0x8fd4,	// (0x0004638a) title_pane_stacon

0x8ffe,	// (0x000463b4) uni_indicator_pane_stacon_ParamLimits

0x8ffe,	// (0x000463b4) uni_indicator_pane_stacon

0x9013,	// (0x000463c9) battery_pane_stacon_ParamLimits

0x9013,	// (0x000463c9) battery_pane_stacon

0x9057,	// (0x0004640d) control_bottom_pane_stacon_ParamLimits

0x9057,	// (0x0004640d) control_bottom_pane_stacon

0x907a,	// (0x00046430) navi_pane_stacon_ParamLimits

0x907a,	// (0x00046430) navi_pane_stacon

0x4def,	// (0x000421a5) stacon_bottom_pane_g1_ParamLimits

0x4def,	// (0x000421a5) stacon_bottom_pane_g1

0x8cbd,	// (0x00046073) aid_levels_signal_lsc_ParamLimits

0x8cbd,	// (0x00046073) aid_levels_signal_lsc

0x8cd4,	// (0x0004608a) signal_pane_stacon_g1_ParamLimits

0x8cd4,	// (0x0004608a) signal_pane_stacon_g1

0x8ce8,	// (0x0004609e) signal_pane_stacon_g2_ParamLimits

0x8ce8,	// (0x0004609e) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0004ca97) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0004ca97) signal_pane_stacon_g

0x8d1d,	// (0x000460d3) title_pane_stacon_t1_ParamLimits

0x8d1d,	// (0x000460d3) title_pane_stacon_t1

0x49bf,	// (0x00041d75) uni_indicator_pane_stacon_g1

0x49dd,	// (0x00041d93) uni_indicator_pane_stacon_g2

0x49c9,	// (0x00041d7f) uni_indicator_pane_stacon_g3

0x49d3,	// (0x00041d89) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x0004caa3) uni_indicator_pane_stacon_g

0x8d42,	// (0x000460f8) control_top_pane_stacon_g1

0x8d4a,	// (0x00046100) control_top_pane_stacon_t1_ParamLimits

0x8d4a,	// (0x00046100) control_top_pane_stacon_t1

0x8d81,	// (0x00046137) aid_levels_battery_lsc_ParamLimits

0x8d81,	// (0x00046137) aid_levels_battery_lsc

0x8d99,	// (0x0004614f) battery_pane_stacon_g1_ParamLimits

0x8d99,	// (0x0004614f) battery_pane_stacon_g1

0x8dac,	// (0x00046162) battery_pane_stacon_g2_ParamLimits

0x8dac,	// (0x00046162) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0004caac) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0004caac) battery_pane_stacon_g

0x8dea,	// (0x000461a0) navi_icon_pane_stacon

0x8dfe,	// (0x000461b4) navi_navi_pane_stacon

0x8dea,	// (0x000461a0) navi_text_pane_stacon

0x8d42,	// (0x000460f8) control_bottom_pane_stacon_g1

0x8e12,	// (0x000461c8) control_bottom_pane_stacon_t1_ParamLimits

0x8e12,	// (0x000461c8) control_bottom_pane_stacon_t1

0xab95,	// (0x00047f4b) grid_app_pane_ParamLimits

0xab95,	// (0x00047f4b) grid_app_pane

0xabb7,	// (0x00047f6d) scroll_pane_cp15_ParamLimits

0xabb7,	// (0x00047f6d) scroll_pane_cp15

0xabcc,	// (0x00047f82) cell_app_pane_ParamLimits

0xabcc,	// (0x00047f82) cell_app_pane

0xabf6,	// (0x00047fac) cell_app_pane_g1_ParamLimits

0xabf6,	// (0x00047fac) cell_app_pane_g1

0x4a01,	// (0x00041db7) cell_app_pane_g2_ParamLimits

0x4a01,	// (0x00041db7) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x0004cab1) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x0004cab1) cell_app_pane_g

0xac16,	// (0x00047fcc) cell_app_pane_t1_ParamLimits

0xac16,	// (0x00047fcc) cell_app_pane_t1

0x4a0d,	// (0x00041dc3) grid_highlight_pane_ParamLimits

0x4a0d,	// (0x00041dc3) grid_highlight_pane

0x474d,	// (0x00041b03) cell_highlight_pane_g1

0x4755,	// (0x00041b0b) cell_highlight_pane_g2

0x475d,	// (0x00041b13) cell_highlight_pane_g3

0x4765,	// (0x00041b1b) cell_highlight_pane_g4

0x476d,	// (0x00041b23) cell_highlight_pane_g5

0x4775,	// (0x00041b2b) cell_highlight_pane_g6

0x477d,	// (0x00041b33) cell_highlight_pane_g7

0x4785,	// (0x00041b3b) cell_highlight_pane_g8

0x478d,	// (0x00041b43) cell_highlight_pane_g9

0x3f56,	// (0x0004130c) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x0004ca5f) cell_highlight_pane_g

0x4a1e,	// (0x00041dd4) bg_scroll_pane

0x8e5c,	// (0x00046212) scroll_handle_pane

0x4a65,	// (0x00041e1b) scroll_bg_pane_g1

0x4a7a,	// (0x00041e30) scroll_bg_pane_g2

0x4a92,	// (0x00041e48) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0004cab6) scroll_bg_pane_g

0x4aa7,	// (0x00041e5d) scroll_handle_focus_pane_ParamLimits

0x4aa7,	// (0x00041e5d) scroll_handle_focus_pane

0x4a65,	// (0x00041e1b) scroll_handle_pane_g1

0x4ab4,	// (0x00041e6a) scroll_handle_pane_g2

0x4a92,	// (0x00041e48) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0004cabd) scroll_handle_pane_g

0x479e,	// (0x00041b54) bg_popup_sub_pane_cp21_ParamLimits

0x479e,	// (0x00041b54) bg_popup_sub_pane_cp21

0x4ac8,	// (0x00041e7e) popup_fep_japan_predictive_window_t1_ParamLimits

0x4ac8,	// (0x00041e7e) popup_fep_japan_predictive_window_t1

0x4adf,	// (0x00041e95) popup_fep_japan_predictive_window_t2_ParamLimits

0x4adf,	// (0x00041e95) popup_fep_japan_predictive_window_t2

0x4b12,	// (0x00041ec8) popup_fep_japan_predictive_window_t3_ParamLimits

0x4b12,	// (0x00041ec8) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x0004cac4) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x0004cac4) popup_fep_japan_predictive_window_t

0x3f60,	// (0x00041316) bg_popup_sub_pane_cp23

0x4b49,	// (0x00041eff) listscroll_japin_cand_pane

0x4b51,	// (0x00041f07) popup_fep_japan_candidate_window_t1

0x4b5f,	// (0x00041f15) candidate_pane_ParamLimits

0x4b5f,	// (0x00041f15) candidate_pane

0x4b71,	// (0x00041f27) scroll_pane_cp30

0x4b79,	// (0x00041f2f) list_single_popup_jap_candidate_pane_ParamLimits

0x4b79,	// (0x00041f2f) list_single_popup_jap_candidate_pane

0x3f60,	// (0x00041316) list_highlight_pane_cp30

0x4b8d,	// (0x00041f43) list_single_popup_jap_candidate_pane_t1

0x4b9c,	// (0x00041f52) level_1_signal

0x4ba9,	// (0x00041f5f) level_2_signal

0x4bb6,	// (0x00041f6c) level_3_signal

0x4bc3,	// (0x00041f79) level_4_signal

0x4bd0,	// (0x00041f86) level_5_signal

0x4bdd,	// (0x00041f93) level_6_signal

0x4bea,	// (0x00041fa0) level_7_signal

0x4b9c,	// (0x00041f52) level_1_battery

0x4ba9,	// (0x00041f5f) level_2_battery

0x4bb6,	// (0x00041f6c) level_3_battery

0x4bc3,	// (0x00041f79) level_4_battery

0x4bd0,	// (0x00041f86) level_5_battery

0x4bdd,	// (0x00041f93) level_6_battery

0x4bea,	// (0x00041fa0) level_7_battery

0x4c0f,	// (0x00041fc5) list_menu_pane_ParamLimits

0x4c0f,	// (0x00041fc5) list_menu_pane

0x4c25,	// (0x00041fdb) scroll_pane_cp25_ParamLimits

0x4c25,	// (0x00041fdb) scroll_pane_cp25

0x4c3e,	// (0x00041ff4) list_double2_graphic_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double2_graphic_pane_cp2

0x4c3e,	// (0x00041ff4) list_double2_large_graphic_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double2_large_graphic_pane_cp2

0x4c3e,	// (0x00041ff4) list_double2_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double2_pane_cp2

0x4c3e,	// (0x00041ff4) list_double_graphic_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double_graphic_pane_cp2

0x4c3e,	// (0x00041ff4) list_double_large_graphic_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double_large_graphic_pane_cp2

0x4c3e,	// (0x00041ff4) list_double_number_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double_number_pane_cp2

0x4c3e,	// (0x00041ff4) list_double_pane_cp2_ParamLimits

0x4c3e,	// (0x00041ff4) list_double_pane_cp2

0xac3f,	// (0x00047ff5) list_single_2graphic_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_2graphic_pane_cp2

0xac3f,	// (0x00047ff5) list_single_graphic_heading_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_graphic_heading_pane_cp2

0xac3f,	// (0x00047ff5) list_single_graphic_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_graphic_pane_cp2

0xac3f,	// (0x00047ff5) list_single_heading_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_heading_pane_cp2

0x4c4e,	// (0x00042004) list_single_large_graphic_pane_cp2_ParamLimits

0x4c4e,	// (0x00042004) list_single_large_graphic_pane_cp2

0xac3f,	// (0x00047ff5) list_single_number_heading_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_number_heading_pane_cp2

0xac3f,	// (0x00047ff5) list_single_number_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_number_pane_cp2

0xac3f,	// (0x00047ff5) list_single_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_pane_cp2

0x4c68,	// (0x0004201e) bg_popup_sub_pane_cp22

0x8f0e,	// (0x000462c4) popup_side_volume_key_window_g1

0x8f38,	// (0x000462ee) popup_side_volume_key_window_t1

0x8f54,	// (0x0004630a) volume_small_pane_cp1

0x3fae,	// (0x00041364) bg_popup_sub_pane_cp24_ParamLimits

0x3fae,	// (0x00041364) bg_popup_sub_pane_cp24

0x4c7e,	// (0x00042034) fep_china_uni_candidate_pane_ParamLimits

0x4c7e,	// (0x00042034) fep_china_uni_candidate_pane

0x4c92,	// (0x00042048) fep_china_uni_entry_pane

0x4ca2,	// (0x00042058) popup_fep_china_uni_window_g1

0x4cbe,	// (0x00042074) fep_china_uni_entry_pane_g1

0x4cc6,	// (0x0004207c) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004caf5) fep_china_uni_entry_pane_g

0x4cce,	// (0x00042084) fep_entry_item_pane

0x4cd8,	// (0x0004208e) fep_candidate_item_pane

0x4ce0,	// (0x00042096) fep_china_uni_candidate_pane_g1

0x4ce8,	// (0x0004209e) fep_china_uni_candidate_pane_g2

0x4cf0,	// (0x000420a6) fep_china_uni_candidate_pane_g3

0x4cf8,	// (0x000420ae) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004cafa) fep_china_uni_candidate_pane_g

0x3f56,	// (0x0004130c) fep_entry_item_pane_g1

0x4d00,	// (0x000420b6) fep_entry_item_pane_t1_ParamLimits

0x4d00,	// (0x000420b6) fep_entry_item_pane_t1

0x4d16,	// (0x000420cc) fep_candidate_item_pane_t1_ParamLimits

0x4d16,	// (0x000420cc) fep_candidate_item_pane_t1

0x4d2b,	// (0x000420e1) fep_candidate_item_pane_t2_ParamLimits

0x4d2b,	// (0x000420e1) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004cb03) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004cb03) fep_candidate_item_pane_t

0x3fbc,	// (0x00041372) list_highlight_pane_cp31_ParamLimits

0x3fbc,	// (0x00041372) list_highlight_pane_cp31

0x4d3d,	// (0x000420f3) level_1_signal_lsc

0x4d46,	// (0x000420fc) level_2_signal_lsc

0x4d4f,	// (0x00042105) level_3_signal_lsc

0x4d58,	// (0x0004210e) level_4_signal_lsc

0x4d61,	// (0x00042117) level_5_signal_lsc

0x4d6a,	// (0x00042120) level_6_signal_lsc

0x4d73,	// (0x00042129) level_7_signal_lsc

0x4d73,	// (0x00042129) level_1_battery_lsc

0x4d7c,	// (0x00042132) level_2_battery_lsc

0x4d85,	// (0x0004213b) level_3_battery_lsc

0x4d8e,	// (0x00042144) level_4_battery_lsc

0x4d97,	// (0x0004214d) level_5_battery_lsc

0x4da0,	// (0x00042156) level_6_battery_lsc

0x4d3d,	// (0x000420f3) level_7_battery_lsc

0x4da9,	// (0x0004215f) scroll_handle_focus_pane_g1

0x4db2,	// (0x00042168) scroll_handle_focus_pane_g2

0x4dbb,	// (0x00042171) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004cb08) scroll_handle_focus_pane_g

0xacb8,	// (0x0004806e) list_single_2graphic_pane_g1_ParamLimits

0xacb8,	// (0x0004806e) list_single_2graphic_pane_g1

0x8983,	// (0x00045d39) list_single_2graphic_pane_g2_ParamLimits

0x8983,	// (0x00045d39) list_single_2graphic_pane_g2

0x88e8,	// (0x00045c9e) list_single_2graphic_pane_g3_ParamLimits

0x88e8,	// (0x00045c9e) list_single_2graphic_pane_g3

0xacc4,	// (0x0004807a) list_single_2graphic_pane_g4_ParamLimits

0xacc4,	// (0x0004807a) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004cb0f) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004cb0f) list_single_2graphic_pane_g

0xacd5,	// (0x0004808b) list_single_2graphic_pane_t1_ParamLimits

0xacd5,	// (0x0004808b) list_single_2graphic_pane_t1

0xad03,	// (0x000480b9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xad03,	// (0x000480b9) list_double2_graphic_large_graphic_pane_g1

0xa7f0,	// (0x00047ba6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa7f0,	// (0x00047ba6) list_double2_graphic_large_graphic_pane_g2

0xa7c3,	// (0x00047b79) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa7c3,	// (0x00047b79) list_double2_graphic_large_graphic_pane_g3

0xad15,	// (0x000480cb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xad15,	// (0x000480cb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004cb18) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004cb18) list_double2_graphic_large_graphic_pane_g

0xad21,	// (0x000480d7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xad21,	// (0x000480d7) list_double2_graphic_large_graphic_pane_t1

0xad37,	// (0x000480ed) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xad37,	// (0x000480ed) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004cb21) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004cb21) list_double2_graphic_large_graphic_pane_t

0x4e9c,	// (0x00042252) popup_fast_swap_window_ParamLimits

0x4e9c,	// (0x00042252) popup_fast_swap_window

0x4eb8,	// (0x0004226e) popup_side_volume_key_window

0x4ed2,	// (0x00042288) stacon_top_pane

0x4edc,	// (0x00042292) status_pane_ParamLimits

0x4edc,	// (0x00042292) status_pane

0x4ed2,	// (0x00042288) status_small_pane

0x3f60,	// (0x00041316) control_pane

0x3f60,	// (0x00041316) stacon_bottom_pane

0x46d5,	// (0x00041a8b) scroll_pane_cp121

0x46cc,	// (0x00041a82) set_content_pane

0xad49,	// (0x000480ff) bg_active_tab_pane_g1_cp1

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp1

0xad52,	// (0x00048108) bg_active_tab_pane_g3_cp1

0xad49,	// (0x000480ff) bg_passive_tab_pane_g1_cp1

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp1

0xad52,	// (0x00048108) bg_passive_tab_pane_g3_cp1

0xad5b,	// (0x00048111) bg_active_tab_pane_g1_cp2

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp2

0xad64,	// (0x0004811a) bg_active_tab_pane_g3_cp2

0xad5b,	// (0x00048111) bg_passive_tab_pane_g1_cp2

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp2

0xad64,	// (0x0004811a) bg_passive_tab_pane_g3_cp2

0xad6d,	// (0x00048123) bg_active_tab_pane_g1_cp3

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp3

0xad76,	// (0x0004812c) bg_active_tab_pane_g3_cp3

0xad6d,	// (0x00048123) bg_passive_tab_pane_g1_cp3

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp3

0xad76,	// (0x0004812c) bg_passive_tab_pane_g3_cp3

0xad7f,	// (0x00048135) bg_active_tab_pane_g1_cp4

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp4

0xad8a,	// (0x00048140) bg_active_tab_pane_g3_cp4

0xad7f,	// (0x00048135) bg_passive_tab_pane_g1_cp4

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp4

0xad8a,	// (0x00048140) bg_passive_tab_pane_g3_cp4

0x4e14,	// (0x000421ca) bg_active_tab_pane_g1_cp5

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp5

0x4e0b,	// (0x000421c1) bg_active_tab_pane_g3_cp5

0x4e14,	// (0x000421ca) bg_passive_tab_pane_g1_cp5

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp5

0x4e0b,	// (0x000421c1) bg_passive_tab_pane_g3_cp5

0xad95,	// (0x0004814b) list_set_graphic_pane_ParamLimits

0xad95,	// (0x0004814b) list_set_graphic_pane

0x3f60,	// (0x00041316) bg_set_opt_pane_cp4

0x4e1d,	// (0x000421d3) list_set_graphic_pane_g1_ParamLimits

0x4e1d,	// (0x000421d3) list_set_graphic_pane_g1

0x4e29,	// (0x000421df) list_set_graphic_pane_g2_ParamLimits

0x4e29,	// (0x000421df) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004cb26) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004cb26) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0004ce8e) volume_small_pane_cp_g

0x4e4d,	// (0x00042203) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4e4d,	// (0x00042203) list_double2_large_graphic_pane_g1_cp2

0x4e5b,	// (0x00042211) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4e5b,	// (0x00042211) list_double2_large_graphic_pane_g2_cp2

0x4e6c,	// (0x00042222) list_double2_large_graphic_pane_g3_cp2

0x4e74,	// (0x0004222a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4e74,	// (0x0004222a) list_double2_large_graphic_pane_t1_cp2

0x4e8a,	// (0x00042240) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4e8a,	// (0x00042240) list_double2_large_graphic_pane_t2_cp2

0x65d3,	// (0x00043989) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x65d3,	// (0x00043989) list_double_large_graphic_pane_g1_cp2

0x65e6,	// (0x0004399c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x65e6,	// (0x0004399c) list_double_large_graphic_pane_g2_cp2

0x4ffa,	// (0x000423b0) list_double_large_graphic_pane_g3_cp2

0x65f7,	// (0x000439ad) list_double_large_graphic_pane_g4_cp

0x65ff,	// (0x000439b5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65ff,	// (0x000439b5) list_double_large_graphic_pane_t1_cp2

0x6616,	// (0x000439cc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6616,	// (0x000439cc) list_double_large_graphic_pane_t2_cp2

0x4eea,	// (0x000422a0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4eea,	// (0x000422a0) list_double2_graphic_pane_g1_cp2

0x4ef8,	// (0x000422ae) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4ef8,	// (0x000422ae) list_double2_graphic_pane_g2_cp2

0x4f09,	// (0x000422bf) list_double2_graphic_pane_g3_cp2

0x4f13,	// (0x000422c9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4f13,	// (0x000422c9) list_double2_graphic_pane_t1_cp2

0x4f29,	// (0x000422df) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4f29,	// (0x000422df) list_double2_graphic_pane_t2_cp2

0x4f3b,	// (0x000422f1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4f3b,	// (0x000422f1) list_single_number_heading_pane_g1_cp2

0x4f47,	// (0x000422fd) list_single_number_heading_pane_g2_cp2

0x4f4f,	// (0x00042305) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4f4f,	// (0x00042305) list_single_number_heading_pane_t1_cp2

0x4f65,	// (0x0004231b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4f65,	// (0x0004231b) list_single_number_heading_pane_t2_cp2

0x4f79,	// (0x0004232f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4f79,	// (0x0004232f) list_single_number_heading_pane_t3_cp2

0x4f3b,	// (0x000422f1) list_single_heading_pane_g1_cp2_ParamLimits

0x4f3b,	// (0x000422f1) list_single_heading_pane_g1_cp2

0x4f47,	// (0x000422fd) list_single_heading_pane_g2_cp2

0x4f4f,	// (0x00042305) list_single_heading_pane_t1_cp2_ParamLimits

0x4f4f,	// (0x00042305) list_single_heading_pane_t1_cp2

0x63db,	// (0x00043791) list_single_heading_pane_t2_cp2_ParamLimits

0x63db,	// (0x00043791) list_single_heading_pane_t2_cp2

0x6252,	// (0x00043608) list_double_graphic_pane_g1_cp2_ParamLimits

0x6252,	// (0x00043608) list_double_graphic_pane_g1_cp2

0x632f,	// (0x000436e5) list_double_graphic_pane_g2_cp2_ParamLimits

0x632f,	// (0x000436e5) list_double_graphic_pane_g2_cp2

0x633e,	// (0x000436f4) list_double_graphic_pane_g3_cp2

0x6346,	// (0x000436fc) list_double_graphic_pane_t1_cp2_ParamLimits

0x6346,	// (0x000436fc) list_double_graphic_pane_t1_cp2

0x635c,	// (0x00043712) list_double_graphic_pane_t2_cp2_ParamLimits

0x635c,	// (0x00043712) list_double_graphic_pane_t2_cp2

0x4fee,	// (0x000423a4) list_double_number_pane_g1_cp2_ParamLimits

0x4fee,	// (0x000423a4) list_double_number_pane_g1_cp2

0x4ffa,	// (0x000423b0) list_double_number_pane_g2_cp2

0x62f3,	// (0x000436a9) list_double_number_pane_t1_cp2_ParamLimits

0x62f3,	// (0x000436a9) list_double_number_pane_t1_cp2

0x6307,	// (0x000436bd) list_double_number_pane_t2_cp2_ParamLimits

0x6307,	// (0x000436bd) list_double_number_pane_t2_cp2

0x631d,	// (0x000436d3) list_double_number_pane_t3_cp2_ParamLimits

0x631d,	// (0x000436d3) list_double_number_pane_t3_cp2

0x626a,	// (0x00043620) list_single_graphic_pane_g1_cp2_ParamLimits

0x626a,	// (0x00043620) list_single_graphic_pane_g1_cp2

0x5052,	// (0x00042408) list_single_graphic_pane_g2_cp2_ParamLimits

0x5052,	// (0x00042408) list_single_graphic_pane_g2_cp2

0x505e,	// (0x00042414) list_single_graphic_pane_g3_cp2

0x6228,	// (0x000435de) list_single_graphic_pane_t1_cp2_ParamLimits

0x6228,	// (0x000435de) list_single_graphic_pane_t1_cp2

0x5052,	// (0x00042408) list_single_number_pane_g1_cp2_ParamLimits

0x5052,	// (0x00042408) list_single_number_pane_g1_cp2

0x505e,	// (0x00042414) list_single_number_pane_g2_cp2

0x6228,	// (0x000435de) list_single_number_pane_t1_cp2_ParamLimits

0x6228,	// (0x000435de) list_single_number_pane_t1_cp2

0x623e,	// (0x000435f4) list_single_number_pane_t2_cp2_ParamLimits

0x623e,	// (0x000435f4) list_single_number_pane_t2_cp2

0x4e5b,	// (0x00042211) list_double2_pane_g1_cp2_ParamLimits

0x4e5b,	// (0x00042211) list_double2_pane_g1_cp2

0x4e6c,	// (0x00042222) list_double2_pane_g2_cp2

0x4fc6,	// (0x0004237c) list_double2_pane_t1_cp2_ParamLimits

0x4fc6,	// (0x0004237c) list_double2_pane_t1_cp2

0x4fdc,	// (0x00042392) list_double2_pane_t2_cp2_ParamLimits

0x4fdc,	// (0x00042392) list_double2_pane_t2_cp2

0x4fee,	// (0x000423a4) list_double_pane_g1_cp2_ParamLimits

0x4fee,	// (0x000423a4) list_double_pane_g1_cp2

0x4ffa,	// (0x000423b0) list_double_pane_g2_cp2

0x5002,	// (0x000423b8) list_double_pane_t1_cp2_ParamLimits

0x5002,	// (0x000423b8) list_double_pane_t1_cp2

0x5018,	// (0x000423ce) list_double_pane_t2_cp2_ParamLimits

0x5018,	// (0x000423ce) list_double_pane_t2_cp2

0x5042,	// (0x000423f8) list_single_pane_cp2_g3

0x5052,	// (0x00042408) list_single_pane_g1_cp2_ParamLimits

0x5052,	// (0x00042408) list_single_pane_g1_cp2

0x505e,	// (0x00042414) list_single_pane_g2_cp2

0x5066,	// (0x0004241c) list_single_pane_t1_cp2_ParamLimits

0x5066,	// (0x0004241c) list_single_pane_t1_cp2

0x507e,	// (0x00042434) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x507e,	// (0x00042434) list_single_large_graphic_pane_g1_cp2

0x508c,	// (0x00042442) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x508c,	// (0x00042442) list_single_large_graphic_pane_g2_cp2

0x5098,	// (0x0004244e) list_single_large_graphic_pane_g3_cp2

0x50a0,	// (0x00042456) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x50a0,	// (0x00042456) list_single_large_graphic_pane_g4_cp1

0x50ba,	// (0x00042470) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x50ba,	// (0x00042470) list_single_large_graphic_pane_t1_cp2

0x61f2,	// (0x000435a8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61f2,	// (0x000435a8) list_single_graphic_heading_pane_g1_cp2

0x61bf,	// (0x00043575) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61bf,	// (0x00043575) list_single_graphic_heading_pane_g4_cp2

0x505e,	// (0x00042414) list_single_graphic_heading_pane_g5_cp2

0x61fe,	// (0x000435b4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x61fe,	// (0x000435b4) list_single_graphic_heading_pane_t1_cp2

0x6214,	// (0x000435ca) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6214,	// (0x000435ca) list_single_graphic_heading_pane_t2_cp2

0x61b3,	// (0x00043569) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61b3,	// (0x00043569) list_single_2graphic_pane_g1_cp2

0x61bf,	// (0x00043575) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61bf,	// (0x00043575) list_single_2graphic_pane_g2_cp2

0x505e,	// (0x00042414) list_single_2graphic_pane_g3_cp2

0x61d0,	// (0x00043586) list_single_2graphic_pane_g4_cp2_ParamLimits

0x61d0,	// (0x00043586) list_single_2graphic_pane_g4_cp2

0x61dc,	// (0x00043592) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61dc,	// (0x00043592) list_single_2graphic_pane_t1_cp2

0x3f56,	// (0x0004130c) list_highlight_pane_g10_cp1

0x5da7,	// (0x0004315d) list_highlight_pane_g1_cp1

0x5daf,	// (0x00043165) list_highlight_pane_g2_cp1

0x5db7,	// (0x0004316d) list_highlight_pane_g3_cp1

0x5dbf,	// (0x00043175) list_highlight_pane_g4_cp1

0x5dc7,	// (0x0004317d) list_highlight_pane_g5_cp1

0x5dcf,	// (0x00043185) list_highlight_pane_g6_cp1

0x5dd7,	// (0x0004318d) list_highlight_pane_g7_cp1

0x5ddf,	// (0x00043195) list_highlight_pane_g8_cp1

0x5de7,	// (0x0004319d) list_highlight_pane_g9_cp1

0xbf7f,	// (0x00049335) form_field_slider_pane_t3

0xbf8d,	// (0x00049343) form_field_slider_pane_t4

0x5cdb,	// (0x00043091) slider_form_pane_ParamLimits

0x5cdb,	// (0x00043091) slider_form_pane

0x3f60,	// (0x00041316) control_abbreviations

0x3f60,	// (0x00041316) control_conventions

0x3f60,	// (0x00041316) control_definitions

0x3f60,	// (0x00041316) format_table_attribute

0x6427,	// (0x000437dd) bg_popup_preview_window_pane_g9

0x3f60,	// (0x00041316) format_table_data2

0x3f60,	// (0x00041316) format_table_data3

0x3f60,	// (0x00041316) format_table_data_example

0x0008,

0x3f60,	// (0x00041316) intro_purpose

0xf905,	// (0x0004ccbb) bg_popup_preview_window_pane_g

0x3f60,	// (0x00041316) texts_category

0x3f60,	// (0x00041316) texts_graphics

0x50d0,	// (0x00042486) text_digital

0x50df,	// (0x00042495) text_primary

0x50ee,	// (0x000424a4) text_primary_small

0x50fd,	// (0x000424b3) text_secondary

0x510c,	// (0x000424c2) text_title

0x68eb,	// (0x00043ca1) bg_passive_tab_pane_g1_cp3_srt

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp3_srt

0x68e2,	// (0x00043c98) bg_passive_tab_pane_g3_cp3_srt

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp3_srt_ParamLimits

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp3_srt

0x68f4,	// (0x00043caa) tabs_4_active_pane_srt_g1

0xc26b,	// (0x00049621) tabs_4_active_pane_srt_t1_ParamLimits

0xc26b,	// (0x00049621) tabs_4_active_pane_srt_t1

0x68eb,	// (0x00043ca1) bg_active_tab_pane_g1_cp3_copy1

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp3_copy1

0x68e2,	// (0x00043c98) bg_active_tab_pane_g3_cp3_copy1

0x3fbc,	// (0x00041372) tabs_2_long_active_pane_srt_ParamLimits

0x3fbc,	// (0x00041372) tabs_2_long_active_pane_srt

0x3fbc,	// (0x00041372) tabs_2_long_passive_pane_srt_ParamLimits

0x3fbc,	// (0x00041372) tabs_2_long_passive_pane_srt

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp4_srt_ParamLimits

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp4_srt

0x6807,	// (0x00043bbd) bg_passive_tab_pane_g1_cp4_srt

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp4_srt

0x67fe,	// (0x00043bb4) bg_passive_tab_pane_g3_cp4_srt

0x5603,	// (0x000429b9) bg_active_tab_pane_cp4_srt_ParamLimits

0x5603,	// (0x000429b9) bg_active_tab_pane_cp4_srt

0xc0c1,	// (0x00049477) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc0c1,	// (0x00049477) tabs_2_long_active_pane_srt_t1

0x6807,	// (0x00043bbd) bg_active_tab_pane_g1_cp4_srt

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp4_srt

0x67fe,	// (0x00043bb4) bg_active_tab_pane_g3_cp4_srt

0x3fae,	// (0x00041364) tabs_3_long_active_pane_srt_ParamLimits

0x3fae,	// (0x00041364) tabs_3_long_active_pane_srt

0x3fae,	// (0x00041364) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3fae,	// (0x00041364) tabs_3_long_passive_pane_cp_srt

0x3fae,	// (0x00041364) tabs_3_long_passive_pane_srt_ParamLimits

0x3fae,	// (0x00041364) tabs_3_long_passive_pane_srt

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp5_srt_ParamLimits

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp5_srt

0x4e14,	// (0x000421ca) bg_passive_tab_pane_g1_cp5_srt

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp5_srt

0x4e0b,	// (0x000421c1) bg_passive_tab_pane_g3_cp5_srt

0x5603,	// (0x000429b9) bg_active_tab_pane_cp5_srt_ParamLimits

0x5603,	// (0x000429b9) bg_active_tab_pane_cp5_srt

0xc0af,	// (0x00049465) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc0af,	// (0x00049465) tabs_3_long_active_pane_srt_t1

0x4e14,	// (0x000421ca) bg_active_tab_pane_g1_cp5_srt

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp5_srt

0x4e0b,	// (0x000421c1) bg_active_tab_pane_g3_cp5_srt

0x67f0,	// (0x00043ba6) navi_text_pane_srt_t1

0x67e8,	// (0x00043b9e) navi_icon_pane_srt_g1

0x521c,	// (0x000425d2) midp_editing_number_pane_srt

0x511b,	// (0x000424d1) midp_ticker_pane_srt

0x5224,	// (0x000425da) midp_ticker_pane_srt_g1

0x522c,	// (0x000425e2) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004cb45) midp_ticker_pane_srt_g

0x5234,	// (0x000425ea) midp_ticker_pane_srt_t1

0x67d9,	// (0x00043b8f) midp_editing_number_pane_t1_copy1

0xab77,	// (0x00047f2d) listscroll_midp_pane

0xab77,	// (0x00047f2d) midp_form_pane

0x5123,	// (0x000424d9) midp_info_popup_window_ParamLimits

0x5123,	// (0x000424d9) midp_info_popup_window

0x479e,	// (0x00041b54) bg_popup_sub_pane_cp50_ParamLimits

0x479e,	// (0x00041b54) bg_popup_sub_pane_cp50

0x59f8,	// (0x00042dae) listscroll_midp_info_pane_ParamLimits

0x59f8,	// (0x00042dae) listscroll_midp_info_pane

0x59e0,	// (0x00042d96) listscroll_form_midp_pane_ParamLimits

0x59e0,	// (0x00042d96) listscroll_form_midp_pane

0x59ec,	// (0x00042da2) scroll_bar_cp050

0xbf67,	// (0x0004931d) list_midp_pane

0x71b0,	// (0x00044566) signal_pane_g2_cp

0x5912,	// (0x00042cc8) listscroll_midp_info_pane_t1_ParamLimits

0x5912,	// (0x00042cc8) listscroll_midp_info_pane_t1

0x592a,	// (0x00042ce0) listscroll_midp_info_pane_t2_ParamLimits

0x592a,	// (0x00042ce0) listscroll_midp_info_pane_t2

0x5968,	// (0x00042d1e) listscroll_midp_info_pane_t3_ParamLimits

0x5968,	// (0x00042d1e) listscroll_midp_info_pane_t3

0x59a2,	// (0x00042d58) listscroll_midp_info_pane_t4_ParamLimits

0x59a2,	// (0x00042d58) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004cbf6) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004cbf6) listscroll_midp_info_pane_t

0x4805,	// (0x00041bbb) scroll_pane_cp21

0x58b6,	// (0x00042c6c) form_midp_field_choice_group_pane

0x58bf,	// (0x00042c75) form_midp_field_text_pane

0x58f8,	// (0x00042cae) form_midp_field_time_pane

0x5900,	// (0x00042cb6) form_midp_gauge_slider_pane

0x5909,	// (0x00042cbf) form_midp_gauge_wait_pane

0x3f60,	// (0x00041316) form_midp_image_pane

0xaef5,	// (0x000482ab) list_single_midp_pane_ParamLimits

0xaef5,	// (0x000482ab) list_single_midp_pane

0xbf28,	// (0x000492de) form_midp_field_text_pane_t1

0x575d,	// (0x00042b13) input_focus_pane_cp050

0x58a5,	// (0x00042c5b) list_midp_form_text_pane

0x5874,	// (0x00042c2a) form_midp_field_choice_group_pane_t1

0x5882,	// (0x00042c38) input_focus_pane_cp051

0x5896,	// (0x00042c4c) list_midp_choice_pane

0x3f60,	// (0x00041316) status_idle_pane

0x5858,	// (0x00042c0e) form_midp_field_time_pane_t1

0x3f56,	// (0x0004130c) wait_anim_pane_g2_copy1

0x5866,	// (0x00042c1c) form_midp_field_time_pane_t2

0x0001,

0x518e,	// (0x00042544) aid_navinavi_width_2_pane

0xf83b,	// (0x0004cbf1) form_midp_field_time_pane_t

0x3f60,	// (0x00041316) input_focus_pane_cp052

0x3f60,	// (0x00041316) bg_input_focus_pane_cp040

0x5834,	// (0x00042bea) form_midp_gauge_slider_pane_t1

0x5842,	// (0x00042bf8) form_midp_gauge_slider_pane_t2

0xbf0c,	// (0x000492c2) form_midp_gauge_slider_pane_t3

0xbf1a,	// (0x000492d0) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004cbe8) form_midp_gauge_slider_pane_t

0x5850,	// (0x00042c06) form_midp_slider_pane

0x3fbc,	// (0x00041372) bg_input_focus_pane_cp041_ParamLimits

0x3fbc,	// (0x00041372) bg_input_focus_pane_cp041

0x5801,	// (0x00042bb7) form_midp_gauge_wait_pane_t1_ParamLimits

0x5801,	// (0x00042bb7) form_midp_gauge_wait_pane_t1

0x5813,	// (0x00042bc9) form_midp_gauge_wait_pane_t2_ParamLimits

0x5813,	// (0x00042bc9) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004cbe3) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004cbe3) form_midp_gauge_wait_pane_t

0x5825,	// (0x00042bdb) form_midp_wait_pane_ParamLimits

0x5825,	// (0x00042bdb) form_midp_wait_pane

0x57cb,	// (0x00042b81) form_midp_image_pane_g1

0x57d4,	// (0x00042b8a) form_midp_image_pane_t1

0x57e3,	// (0x00042b99) form_midp_image_pane_t2

0x57f2,	// (0x00042ba8) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004cbdc) form_midp_image_pane_t

0x57c2,	// (0x00042b78) list_single_midp_pane_g1

0xaee6,	// (0x0004829c) list_single_midp_pane_t1

0xbedc,	// (0x00049292) list_midp_form_item_pane_ParamLimits

0xbedc,	// (0x00049292) list_midp_form_item_pane

0x5136,	// (0x000424ec) list_midp_form_item_pane_t1

0x5145,	// (0x000424fb) midp_ticker_pane_g1

0x5151,	// (0x00042507) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004cb2b) midp_ticker_pane_g

0x515d,	// (0x00042513) midp_ticker_pane_t1

0x6889,	// (0x00043c3f) midp_editing_number_pane_t1

0x6867,	// (0x00043c1d) midp_editing_number_pane

0x6876,	// (0x00043c2c) midp_ticker_pane

0x67c9,	// (0x00043b7f) ai_message_heading_pane

0x3f60,	// (0x00041316) bg_popup_window_pane_cp14

0x67d1,	// (0x00043b87) listscroll_ai_message_pane

0x6747,	// (0x00043afd) ai_message_heading_pane_g1_ParamLimits

0x6747,	// (0x00043afd) ai_message_heading_pane_g1

0x6753,	// (0x00043b09) ai_message_heading_pane_g2_ParamLimits

0x6753,	// (0x00043b09) ai_message_heading_pane_g2

0x675f,	// (0x00043b15) ai_message_heading_pane_g3_ParamLimits

0x675f,	// (0x00043b15) ai_message_heading_pane_g3

0x676b,	// (0x00043b21) ai_message_heading_pane_g4_ParamLimits

0x676b,	// (0x00043b21) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004cd1d) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004cd1d) ai_message_heading_pane_g

0x6783,	// (0x00043b39) ai_message_heading_pane_t1_ParamLimits

0x6783,	// (0x00043b39) ai_message_heading_pane_t1

0x679d,	// (0x00043b53) ai_message_heading_pane_t2_ParamLimits

0x679d,	// (0x00043b53) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004cd26) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004cd26) ai_message_heading_pane_t

0x67af,	// (0x00043b65) bg_popup_heading_pane_cp1_ParamLimits

0x67af,	// (0x00043b65) bg_popup_heading_pane_cp1

0x6735,	// (0x00043aeb) list_ai_message_pane_ParamLimits

0x6735,	// (0x00043aeb) list_ai_message_pane

0x4805,	// (0x00041bbb) scroll_pane_cp10

0x66d1,	// (0x00043a87) list_ai_message_pane_g1

0x66d9,	// (0x00043a8f) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004ccfa) list_ai_message_pane_g

0x66e1,	// (0x00043a97) list_ai_message_pane_t1_ParamLimits

0x66e1,	// (0x00043a97) list_ai_message_pane_t1

0x66f6,	// (0x00043aac) list_ai_message_pane_t2_ParamLimits

0x66f6,	// (0x00043aac) list_ai_message_pane_t2

0x670b,	// (0x00043ac1) list_ai_message_pane_t3_ParamLimits

0x670b,	// (0x00043ac1) list_ai_message_pane_t3

0x6720,	// (0x00043ad6) list_ai_message_pane_t4_ParamLimits

0x6720,	// (0x00043ad6) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004ccff) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004ccff) list_ai_message_pane_t

0xc099,	// (0x0004944f) cell_ai_soft_ind_pane_ParamLimits

0xc099,	// (0x0004944f) cell_ai_soft_ind_pane

0x516f,	// (0x00042525) cell_ai_soft_ind_pane_g1_ParamLimits

0x516f,	// (0x00042525) cell_ai_soft_ind_pane_g1

0x3f60,	// (0x00041316) grid_highlight_cp1

0x517c,	// (0x00042532) text_secondary_cp56_ParamLimits

0x517c,	// (0x00042532) text_secondary_cp56

0x66a6,	// (0x00043a5c) example_general_pane_ParamLimits

0x66a6,	// (0x00043a5c) example_general_pane

0x66b2,	// (0x00043a68) example_parent_pane_g1_ParamLimits

0x66b2,	// (0x00043a68) example_parent_pane_g1

0x66be,	// (0x00043a74) example_parent_pane_t1_ParamLimits

0x66be,	// (0x00043a74) example_parent_pane_t1

0xb8fa,	// (0x00048cb0) popup_preview_text_window_ParamLimits

0xb8fa,	// (0x00048cb0) popup_preview_text_window

0x504a,	// (0x00042400) list_single_pane_cp2_g4

0x42c0,	// (0x00041676) bg_popup_preview_window_pane_ParamLimits

0x42c0,	// (0x00041676) bg_popup_preview_window_pane

0x642f,	// (0x000437e5) popup_preview_text_window_t1_ParamLimits

0x642f,	// (0x000437e5) popup_preview_text_window_t1

0x644d,	// (0x00043803) popup_preview_text_window_t2_ParamLimits

0x644d,	// (0x00043803) popup_preview_text_window_t2

0x6496,	// (0x0004384c) popup_preview_text_window_t3_ParamLimits

0x6496,	// (0x0004384c) popup_preview_text_window_t3

0x64db,	// (0x00043891) popup_preview_text_window_t4_ParamLimits

0x64db,	// (0x00043891) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004ccce) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004ccce) popup_preview_text_window_t

0x6559,	// (0x0004390f) scroll_pane_cp11

0x566d,	// (0x00042a23) bg_popup_preview_window_pane_g1

0x63ef,	// (0x000437a5) bg_popup_preview_window_pane_g2

0x63f7,	// (0x000437ad) bg_popup_preview_window_pane_g3

0x63ff,	// (0x000437b5) bg_popup_preview_window_pane_g4

0x6407,	// (0x000437bd) bg_popup_preview_window_pane_g5

0x640f,	// (0x000437c5) bg_popup_preview_window_pane_g6

0x6417,	// (0x000437cd) bg_popup_preview_window_pane_g7

0x641f,	// (0x000437d5) bg_popup_preview_window_pane_g8

0x8467,	// (0x0004581d) aid_popup_width_pane

0xb8d8,	// (0x00048c8e) popup_midp_note_alarm_window_ParamLimits

0xb8d8,	// (0x00048c8e) popup_midp_note_alarm_window

0x46e6,	// (0x00041a9c) data_form_pane_ParamLimits

0xa947,	// (0x00047cfd) form_field_data_pane_g1

0xa951,	// (0x00047d07) form_field_data_pane_t1_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_ParamLimits

0x4700,	// (0x00041ab6) data_form_wide_pane_ParamLimits

0xa96b,	// (0x00047d21) form_field_data_wide_pane_g1

0xa977,	// (0x00047d2d) form_field_data_wide_pane_t1_ParamLimits

0x4461,	// (0x00041817) input_focus_pane_cp6_ParamLimits

0xab3c,	// (0x00047ef2) input_popup_find_pane_g1_ParamLimits

0xab3c,	// (0x00047ef2) input_popup_find_pane_g1

0x8dbd,	// (0x00046173) aid_navi_side_left_pane

0x8dd2,	// (0x00046188) aid_navi_side_right_pane

0x5e84,	// (0x0004323a) bg_popup_window_pane_cp30_ParamLimits

0x5e84,	// (0x0004323a) bg_popup_window_pane_cp30

0x5f10,	// (0x000432c6) popup_midp_note_alarm_window_g1_ParamLimits

0x5f10,	// (0x000432c6) popup_midp_note_alarm_window_g1

0x5f40,	// (0x000432f6) popup_midp_note_alarm_window_t1_ParamLimits

0x5f40,	// (0x000432f6) popup_midp_note_alarm_window_t1

0x5fe1,	// (0x00043397) popup_midp_note_alarm_window_t2_ParamLimits

0x5fe1,	// (0x00043397) popup_midp_note_alarm_window_t2

0x608f,	// (0x00043445) popup_midp_note_alarm_window_t3_ParamLimits

0x608f,	// (0x00043445) popup_midp_note_alarm_window_t3

0x60b7,	// (0x0004346d) popup_midp_note_alarm_window_t4_ParamLimits

0x60b7,	// (0x0004346d) popup_midp_note_alarm_window_t4

0x60d7,	// (0x0004348d) popup_midp_note_alarm_window_t5_ParamLimits

0x60d7,	// (0x0004348d) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004cc6b) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004cc6b) popup_midp_note_alarm_window_t

0x6183,	// (0x00043539) wait_bar_pane_cp1_ParamLimits

0x6183,	// (0x00043539) wait_bar_pane_cp1

0x3f60,	// (0x00041316) wait_anim_pane_copy1

0x3f60,	// (0x00041316) wait_border_pane_copy1

0x5b9c,	// (0x00042f52) wait_border_pane_g1_copy1

0xa991,	// (0x00047d47) form_field_popup_pane_g1

0xa999,	// (0x00047d4f) form_field_popup_pane_t1_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_cp7_ParamLimits

0x4720,	// (0x00041ad6) list_form_pane_ParamLimits

0xa9b3,	// (0x00047d69) form_field_popup_wide_pane_g1

0xa9bb,	// (0x00047d71) form_field_popup_wide_pane_t1_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_cp8_ParamLimits

0x472c,	// (0x00041ae2) list_form_wide_pane_ParamLimits

0x691b,	// (0x00043cd1) aid_size_cell_graphic_pane

0xaa47,	// (0x00047dfd) data_form_pane_t1_ParamLimits

0xaf55,	// (0x0004830b) data_form_wide_pane_t1_ParamLimits

0xbbdc,	// (0x00048f92) bg_status_flat_pane

0xa48e,	// (0x00047844) title_pane_t1_ParamLimits

0x3f76,	// (0x0004132c) title_pane_t2_ParamLimits

0x3f9c,	// (0x00041352) title_pane_t3_ParamLimits

0xf56f,	// (0x0004c925) title_pane_t_ParamLimits

0x4b9c,	// (0x00041f52) level_1_signal_ParamLimits

0x4ba9,	// (0x00041f5f) level_2_signal_ParamLimits

0x4bb6,	// (0x00041f6c) level_3_signal_ParamLimits

0x4bc3,	// (0x00041f79) level_4_signal_ParamLimits

0x4bd0,	// (0x00041f86) level_5_signal_ParamLimits

0x4bdd,	// (0x00041f93) level_6_signal_ParamLimits

0x4bea,	// (0x00041fa0) level_7_signal_ParamLimits

0x4b9c,	// (0x00041f52) level_1_battery_ParamLimits

0x4ba9,	// (0x00041f5f) level_2_battery_ParamLimits

0x4bb6,	// (0x00041f6c) level_3_battery_ParamLimits

0x4bc3,	// (0x00041f79) level_4_battery_ParamLimits

0x4bd0,	// (0x00041f86) level_5_battery_ParamLimits

0x4bdd,	// (0x00041f93) level_6_battery_ParamLimits

0x4bea,	// (0x00041fa0) level_7_battery_ParamLimits

0x5da7,	// (0x0004315d) bg_status_flat_pane_g1

0x5daf,	// (0x00043165) bg_status_flat_pane_g2

0x5db7,	// (0x0004316d) bg_status_flat_pane_g3

0x5dbf,	// (0x00043175) bg_status_flat_pane_g4

0x5dc7,	// (0x0004317d) bg_status_flat_pane_g5

0x5dcf,	// (0x00043185) bg_status_flat_pane_g6

0x5dd7,	// (0x0004318d) bg_status_flat_pane_g7

0xa4fe,	// (0x000478b4) tabs_3_active_pane_t1_ParamLimits

0xa4fe,	// (0x000478b4) tabs_3_passive_pane_t1_ParamLimits

0xa518,	// (0x000478ce) tabs_4_active_pane_t1_ParamLimits

0xa518,	// (0x000478ce) tabs_4_1_passive_pane_t1_ParamLimits

0xab52,	// (0x00047f08) tabs_2_active_pane_t1_ParamLimits

0xab52,	// (0x00047f08) tabs_2_passive_pane_t1_ParamLimits

0x5603,	// (0x000429b9) bg_active_tab_pane_cp4_ParamLimits

0xab64,	// (0x00047f1a) tabs_2_long_active_pane_t1_ParamLimits

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp4_ParamLimits

0x9319,	// (0x000466cf) list_single_midp_graphic_pane_t1_ParamLimits

0x5603,	// (0x000429b9) bg_active_tab_pane_cp5_ParamLimits

0xab83,	// (0x00047f39) tabs_3_long_active_pane_t1_ParamLimits

0xab77,	// (0x00047f2d) bg_passive_tab_pane_cp5_ParamLimits

0x9319,	// (0x000466cf) list_single_midp_graphic_pane_t1

0xbbdc,	// (0x00048f92) bg_status_flat_pane_ParamLimits

0x5532,	// (0x000428e8) indicator_pane_cp2_ParamLimits

0x5532,	// (0x000428e8) indicator_pane_cp2

0xbd20,	// (0x000490d6) navi_pane_srt_ParamLimits

0xbd20,	// (0x000490d6) navi_pane_srt

0x555a,	// (0x00042910) popup_clock_digital_analogue_window_cp1

0x4000,	// (0x000413b6) indicator_pane_t1

0x511b,	// (0x000424d1) copy_highlight_pane

0x511b,	// (0x000424d1) cursor_graphics_pane

0x511b,	// (0x000424d1) graphic_within_text_pane

0x511b,	// (0x000424d1) link_highlight_pane

0x651c,	// (0x000438d2) popup_preview_text_window_t5_ParamLimits

0x651c,	// (0x000438d2) popup_preview_text_window_t5

0x5196,	// (0x0004254c) cursor_digital_pane

0x5196,	// (0x0004254c) cursor_primary_pane

0x51a7,	// (0x0004255d) cursor_primary_small_pane

0x51af,	// (0x00042565) cursor_secondary_pane

0x51b7,	// (0x0004256d) cursor_title_pane

0x5196,	// (0x0004254c) link_highlight_digital_pane

0x519e,	// (0x00042554) link_highlight_primary_pane

0x51a7,	// (0x0004255d) link_highlight_primary_small_pane

0x51af,	// (0x00042565) link_highlight_secondary_pane

0x51b7,	// (0x0004256d) link_highlight_title_pane

0x5196,	// (0x0004254c) copy_highlight_digital_pane

0x5196,	// (0x0004254c) copy_highlight_primary_pane

0x51a7,	// (0x0004255d) copy_highlight_primary_small_pane

0x51af,	// (0x00042565) copy_highlight_secondary_pane

0x51b7,	// (0x0004256d) copy_highlight_title_pane

0x51af,	// (0x00042565) graphic_text_digital_pane

0x5e27,	// (0x000431dd) graphic_text_primary_pane

0x5e30,	// (0x000431e6) graphic_text_primary_small_pane

0x51a7,	// (0x0004255d) graphic_text_secondary_pane

0x5196,	// (0x0004254c) graphic_text_title_pane

0xae5c,	// (0x00048212) cursor_primary_pane_g1

0x5e19,	// (0x000431cf) cursor_text_primary_t1

0xbfaf,	// (0x00049365) cursor_primary_small_pane_g1

0x5e0b,	// (0x000431c1) cursor_text_primary_small_t1

0xbfa5,	// (0x0004935b) cursor_primary_small_pane_g1_copy1

0x5dfd,	// (0x000431b3) cursor_text_primary_small_t1_copy1

0x5def,	// (0x000431a5) cursor_text_title_t1

0xbf9b,	// (0x00049351) cursor_title_pane_g1

0xae5c,	// (0x00048212) cursor_digital_pane_g1

0x51bf,	// (0x00042575) cursor_text_digital_t1

0x5d90,	// (0x00043146) link_highlight_primary_pane_g1

0x5d98,	// (0x0004314e) link_highlight_primary_pane_t1

0x51cd,	// (0x00042583) link_highlight_primary_small_pane_g1

0x51d5,	// (0x0004258b) link_highlight_primary_small_pane_t1

0x51cd,	// (0x00042583) link_highlight_secondary_pane_g1

0x51e4,	// (0x0004259a) link_highlight_secondary_pane_t1

0x5d04,	// (0x000430ba) link_highlight_title_pane_g1

0x5d0c,	// (0x000430c2) link_highlight_title_pane_t1

0x5ced,	// (0x000430a3) link_highlight_digital_pane_g1

0x5cf5,	// (0x000430ab) link_highlight_digital_pane_t1

0x5be1,	// (0x00042f97) copy_highlight_primary_pane_g1

0x5be9,	// (0x00042f9f) copy_highlight_primary_pane_t1

0x5bbb,	// (0x00042f71) copy_highlight_primary_small_pane_g1

0x5bd2,	// (0x00042f88) copy_highlight_primary_small_pane_t1

0x51f3,	// (0x000425a9) copy_highlight_secondary_pane_g1

0x51fb,	// (0x000425b1) copy_highlight_secondary_pane_t1

0x5bbb,	// (0x00042f71) copy_highlight_title_pane_g1

0x5bc3,	// (0x00042f79) copy_highlight_title_pane_t1

0x5be1,	// (0x00042f97) copy_highlight_digital_pane_g1

0x6aa5,	// (0x00043e5b) copy_highlight_digital_pane_t1

0x69f9,	// (0x00043daf) graphic_text_primary_pane_g1

0x6a89,	// (0x00043e3f) graphic_text_primary_pane_t1

0x6a97,	// (0x00043e4d) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004cd9a) graphic_text_primary_pane_t

0x6a65,	// (0x00043e1b) graphic_text_primary_small_pane_g1

0x6a6d,	// (0x00043e23) graphic_text_primary_small_pane_t1

0x6a7b,	// (0x00043e31) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004cd95) graphic_text_primary_small_pane_t

0x6a41,	// (0x00043df7) graphic_text_secondary_pane_g1

0x6a49,	// (0x00043dff) graphic_text_secondary_pane_t1

0x6a57,	// (0x00043e0d) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004cd90) graphic_text_secondary_pane_t

0x6a1d,	// (0x00043dd3) graphic_text_title_pane_g1

0x6a25,	// (0x00043ddb) graphic_text_title_pane_t1

0x6a33,	// (0x00043de9) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004cd8b) graphic_text_title_pane_t

0x69f9,	// (0x00043daf) graphic_text_digital_pane_g1

0x6a01,	// (0x00043db7) graphic_text_digital_pane_t1

0x6a0f,	// (0x00043dc5) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004cd86) graphic_text_digital_pane_t

0x3fbc,	// (0x00041372) navi_icon_pane_srt_ParamLimits

0x3fbc,	// (0x00041372) navi_icon_pane_srt

0x3f60,	// (0x00041316) navi_midp_pane_srt

0x3f60,	// (0x00041316) navi_navi_pane_srt

0x3fbc,	// (0x00041372) navi_text_pane_srt_ParamLimits

0x3fbc,	// (0x00041372) navi_text_pane_srt

0x69c4,	// (0x00043d7a) navi_navi_icon_text_pane_srt

0x69de,	// (0x00043d94) navi_navi_pane_srt_g1_ParamLimits

0x69de,	// (0x00043d94) navi_navi_pane_srt_g1

0x69cc,	// (0x00043d82) navi_navi_pane_srt_g2_ParamLimits

0x69cc,	// (0x00043d82) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004cd81) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004cd81) navi_navi_pane_srt_g

0x69f0,	// (0x00043da6) navi_navi_tabs_pane_srt

0x69c4,	// (0x00043d7a) navi_navi_text_pane_srt

0x69c4,	// (0x00043d7a) navi_navi_volume_pane_srt

0x69b5,	// (0x00043d6b) navi_navi_text_pane_srt_t1

0x9699,	// (0x00046a4f) navi_navi_volume_pane_srt_g1

0x96a1,	// (0x00046a57) volume_small_pane_srt_ParamLimits

0x96a1,	// (0x00046a57) volume_small_pane_srt

0x909d,	// (0x00046453) volume_small_pane_srt_g1_ParamLimits

0x909d,	// (0x00046453) volume_small_pane_srt_g1

0x90ad,	// (0x00046463) volume_small_pane_srt_g2_ParamLimits

0x90ad,	// (0x00046463) volume_small_pane_srt_g2

0x90be,	// (0x00046474) volume_small_pane_srt_g3_ParamLimits

0x90be,	// (0x00046474) volume_small_pane_srt_g3

0x90cf,	// (0x00046485) volume_small_pane_srt_g4_ParamLimits

0x90cf,	// (0x00046485) volume_small_pane_srt_g4

0x90e0,	// (0x00046496) volume_small_pane_srt_g5_ParamLimits

0x90e0,	// (0x00046496) volume_small_pane_srt_g5

0x90f1,	// (0x000464a7) volume_small_pane_srt_g6_ParamLimits

0x90f1,	// (0x000464a7) volume_small_pane_srt_g6

0x9102,	// (0x000464b8) volume_small_pane_srt_g7_ParamLimits

0x9102,	// (0x000464b8) volume_small_pane_srt_g7

0x9113,	// (0x000464c9) volume_small_pane_srt_g8_ParamLimits

0x9113,	// (0x000464c9) volume_small_pane_srt_g8

0x9124,	// (0x000464da) volume_small_pane_srt_g9_ParamLimits

0x9124,	// (0x000464da) volume_small_pane_srt_g9

0x9135,	// (0x000464eb) volume_small_pane_srt_g10_ParamLimits

0x9135,	// (0x000464eb) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004cb30) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004cb30) volume_small_pane_srt_g

0x4369,	// (0x0004171f) query_popup_data_pane_cp2

0x699b,	// (0x00043d51) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x699b,	// (0x00043d51) navi_navi_icon_text_pane_srt_t1

0x5e27,	// (0x000431dd) navi_tabs_2_long_pane_srt

0x5e27,	// (0x000431dd) navi_tabs_2_pane_srt

0x5e27,	// (0x000431dd) navi_tabs_3_long_pane_srt

0x5e27,	// (0x000431dd) navi_tabs_3_pane_srt

0x5e27,	// (0x000431dd) navi_tabs_4_pane_srt

0x9679,	// (0x00046a2f) tabs_2_active_pane_srt_ParamLimits

0x9679,	// (0x00046a2f) tabs_2_active_pane_srt

0x9689,	// (0x00046a3f) tabs_2_passive_pane_srt_ParamLimits

0x9689,	// (0x00046a3f) tabs_2_passive_pane_srt

0x483d,	// (0x00041bf3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x483d,	// (0x00041bf3) bg_passive_tab_pane_cp1_srt

0x6982,	// (0x00043d38) bg_passive_tab_pane_g1_cp1_srt

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp1_srt

0x6979,	// (0x00043d2f) bg_passive_tab_pane_g3_cp1_srt

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp1_srt_ParamLimits

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp1_srt

0x698b,	// (0x00043d41) tabs_2_active_pane_srt_g1

0xc2e2,	// (0x00049698) tabs_2_active_pane_srt_t1_ParamLimits

0xc2e2,	// (0x00049698) tabs_2_active_pane_srt_t1

0x6982,	// (0x00043d38) bg_active_tab_pane_g1_cp1_srt

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp1_srt

0x6979,	// (0x00043d2f) bg_active_tab_pane_g3_cp1_srt

0x9646,	// (0x000469fc) tabs_3_active_pane_srt_ParamLimits

0x9646,	// (0x000469fc) tabs_3_active_pane_srt

0x9657,	// (0x00046a0d) tabs_3_passive_pane_cp_srt_ParamLimits

0x9657,	// (0x00046a0d) tabs_3_passive_pane_cp_srt

0x9668,	// (0x00046a1e) tabs_3_passive_pane_srt_ParamLimits

0x9668,	// (0x00046a1e) tabs_3_passive_pane_srt

0x483d,	// (0x00041bf3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x483d,	// (0x00041bf3) bg_passive_tab_pane_cp2_srt

0x5213,	// (0x000425c9) bg_passive_tab_pane_g1_cp2_srt

0x4dc4,	// (0x0004217a) bg_passive_tab_pane_g2_cp2_srt

0x520a,	// (0x000425c0) bg_passive_tab_pane_g3_cp2_srt

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp2_srt_ParamLimits

0x3fbc,	// (0x00041372) bg_active_tab_pane_cp2_srt

0x6971,	// (0x00043d27) tabs_3_active_pane_srt_g1

0xc2d0,	// (0x00049686) tabs_3_active_pane_srt_t1_ParamLimits

0xc2d0,	// (0x00049686) tabs_3_active_pane_srt_t1

0x5213,	// (0x000425c9) bg_active_tab_pane_g1_cp2_srt

0x4dc4,	// (0x0004217a) bg_active_tab_pane_g2_cp2_srt

0x520a,	// (0x000425c0) bg_active_tab_pane_g3_cp2_srt

0x95fe,	// (0x000469b4) tabs_4_active_pane_srt_ParamLimits

0x95fe,	// (0x000469b4) tabs_4_active_pane_srt

0x9610,	// (0x000469c6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9610,	// (0x000469c6) tabs_4_passive_pane_cp2_srt

0x5337,	// (0x000426ed) aid_size_cell_toolbar

0xab77,	// (0x00047f2d) main_idle_act_pane_ParamLimits

0x53f9,	// (0x000427af) popup_large_graphic_colour_window_ParamLimits

0xbae4,	// (0x00048e9a) popup_toolbar_window_ParamLimits

0xbae4,	// (0x00048e9a) popup_toolbar_window

0x6898,	// (0x00043c4e) list_single_graphic_2heading_pane_ParamLimits

0x6898,	// (0x00043c4e) list_single_graphic_2heading_pane

0x49e7,	// (0x00041d9d) aid_size_cell_apps_grid_lsc_pane

0x49f9,	// (0x00041daf) aid_size_cell_apps_grid_prt_pane

0x483d,	// (0x00041bf3) bg_wml_button_pane_cp1_ParamLimits

0x483d,	// (0x00041bf3) bg_wml_button_pane_cp1

0xbf28,	// (0x000492de) form_midp_field_text_pane_t1_ParamLimits

0x575d,	// (0x00042b13) input_focus_pane_cp050_ParamLimits

0x58a5,	// (0x00042c5b) list_midp_form_text_pane_ParamLimits

0x5882,	// (0x00042c38) input_focus_pane_cp051_ParamLimits

0x5896,	// (0x00042c4c) list_midp_choice_pane_ParamLimits

0xbe76,	// (0x0004922c) list_single_2graphic_pane_cp3_ParamLimits

0xbe76,	// (0x0004922c) list_single_2graphic_pane_cp3

0xbea2,	// (0x00049258) list_single_midp_graphic_pane_ParamLimits

0xbea2,	// (0x00049258) list_single_midp_graphic_pane

0x83f1,	// (0x000457a7) list_single_graphic_2heading_pane_g1_ParamLimits

0x83f1,	// (0x000457a7) list_single_graphic_2heading_pane_g1

0x83fd,	// (0x000457b3) list_single_graphic_2heading_pane_g4_ParamLimits

0x83fd,	// (0x000457b3) list_single_graphic_2heading_pane_g4

0x8409,	// (0x000457bf) list_single_graphic_2heading_pane_g5_ParamLimits

0x8409,	// (0x000457bf) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004cb83) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004cb83) list_single_graphic_2heading_pane_g

0x8415,	// (0x000457cb) list_single_graphic_2heading_pane_t1_ParamLimits

0x8415,	// (0x000457cb) list_single_graphic_2heading_pane_t1

0x8429,	// (0x000457df) list_single_graphic_2heading_pane_t2_ParamLimits

0x8429,	// (0x000457df) list_single_graphic_2heading_pane_t2

0x8443,	// (0x000457f9) list_single_graphic_2heading_pane_t3_ParamLimits

0x8443,	// (0x000457f9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004cb8a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004cb8a) list_single_graphic_2heading_pane_t

0x559d,	// (0x00042953) bg_popup_sub_pane_cp2

0x55c7,	// (0x0004297d) grid_toobar_pane

0x928a,	// (0x00046640) cell_toolbar_pane_ParamLimits

0x928a,	// (0x00046640) cell_toolbar_pane

0x5611,	// (0x000429c7) cell_toolbar_pane_g1_ParamLimits

0x5611,	// (0x000429c7) cell_toolbar_pane_g1

0x5625,	// (0x000429db) cell_toolbar_pane_g2_ParamLimits

0x5625,	// (0x000429db) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004cb98) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004cb98) cell_toolbar_pane_g

0x5647,	// (0x000429fd) grid_highlight_pane_cp2_ParamLimits

0x5647,	// (0x000429fd) grid_highlight_pane_cp2

0x5661,	// (0x00042a17) toolbar_button_pane

0x566d,	// (0x00042a23) toolbar_button_pane_g1

0x567d,	// (0x00042a33) toolbar_button_pane_g2

0x5675,	// (0x00042a2b) toolbar_button_pane_g3

0x568d,	// (0x00042a43) toolbar_button_pane_g4

0x5685,	// (0x00042a3b) toolbar_button_pane_g5

0x5695,	// (0x00042a4b) toolbar_button_pane_g6

0x569d,	// (0x00042a53) toolbar_button_pane_g7

0x56ad,	// (0x00042a63) toolbar_button_pane_g8

0x56a5,	// (0x00042a5b) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004cb9d) toolbar_button_pane_g

0x92c2,	// (0x00046678) list_single_2graphic_pane_g1_cp3_ParamLimits

0x92c2,	// (0x00046678) list_single_2graphic_pane_g1_cp3

0x92ce,	// (0x00046684) list_single_2graphic_pane_g2_cp3_ParamLimits

0x92ce,	// (0x00046684) list_single_2graphic_pane_g2_cp3

0x92df,	// (0x00046695) list_single_2graphic_pane_g3_cp3

0x92e7,	// (0x0004669d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x92e7,	// (0x0004669d) list_single_2graphic_pane_g4_cp3

0x92f3,	// (0x000466a9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x92f3,	// (0x000466a9) list_single_2graphic_pane_t1_cp3

0x930d,	// (0x000466c3) list_single_midp_graphic_pane_g2_ParamLimits

0x930d,	// (0x000466c3) list_single_midp_graphic_pane_g2

0xae66,	// (0x0004821c) aid_zoom_text_primary

0xae6e,	// (0x00048224) aid_zoom_text_secondary

0x52c7,	// (0x0004267d) status_small_pane_g7_ParamLimits

0x52c7,	// (0x0004267d) status_small_pane_g7

0x52ea,	// (0x000426a0) status_small_pane_t1_ParamLimits

0xa471,	// (0x00047827) title_pane_g2

0x0003,

0xf566,	// (0x0004c91c) title_pane_g

0xa63e,	// (0x000479f4) aid_size_cell_colour_1_pane_ParamLimits

0xa63e,	// (0x000479f4) aid_size_cell_colour_1_pane

0xa652,	// (0x00047a08) aid_size_cell_colour_2_pane_ParamLimits

0xa652,	// (0x00047a08) aid_size_cell_colour_2_pane

0xa666,	// (0x00047a1c) aid_size_cell_colour_3_pane_ParamLimits

0xa666,	// (0x00047a1c) aid_size_cell_colour_3_pane

0xa67a,	// (0x00047a30) aid_size_cell_colour_4_pane_ParamLimits

0xa67a,	// (0x00047a30) aid_size_cell_colour_4_pane

0x8cf9,	// (0x000460af) title_pane_stacon_g1_ParamLimits

0x8cf9,	// (0x000460af) title_pane_stacon_g1

0x5c40,	// (0x00042ff6) popup_note_wait_window_g3_ParamLimits

0x5c40,	// (0x00042ff6) popup_note_wait_window_g3

0x5cb6,	// (0x0004306c) popup_note_wait_window_t5_ParamLimits

0x5cb6,	// (0x0004306c) popup_note_wait_window_t5

0x3f60,	// (0x00041316) main_feb_china_hwr_fs_writing_pane

0xb675,	// (0x00048a2b) popup_feb_china_hwr_fs_window_ParamLimits

0xb675,	// (0x00048a2b) popup_feb_china_hwr_fs_window

0x932f,	// (0x000466e5) aid_size_cell_hwr_fs_ParamLimits

0x932f,	// (0x000466e5) aid_size_cell_hwr_fs

0x575d,	// (0x00042b13) bg_popup_sub_pane_cp3_ParamLimits

0x575d,	// (0x00042b13) bg_popup_sub_pane_cp3

0x9344,	// (0x000466fa) grid_hwr_fs_pane_ParamLimits

0x9344,	// (0x000466fa) grid_hwr_fs_pane

0x935c,	// (0x00046712) linegrid_hwr_fs_pane_ParamLimits

0x935c,	// (0x00046712) linegrid_hwr_fs_pane

0x936c,	// (0x00046722) cell_hwr_fs_pane_ParamLimits

0x936c,	// (0x00046722) cell_hwr_fs_pane

0x5769,	// (0x00042b1f) linegrid_hwr_fs_pane_g1_ParamLimits

0x5769,	// (0x00042b1f) linegrid_hwr_fs_pane_g1

0xbe4a,	// (0x00049200) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe4a,	// (0x00049200) linegrid_hwr_fs_pane_g2

0x5775,	// (0x00042b2b) linegrid_hwr_fs_pane_g3_ParamLimits

0x5775,	// (0x00042b2b) linegrid_hwr_fs_pane_g3

0x938e,	// (0x00046744) linegrid_hwr_fs_pane_g4_ParamLimits

0x938e,	// (0x00046744) linegrid_hwr_fs_pane_g4

0x93a8,	// (0x0004675e) linegrid_hwr_fs_pane_g5_ParamLimits

0x93a8,	// (0x0004675e) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004cbc8) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004cbc8) linegrid_hwr_fs_pane_g

0x5781,	// (0x00042b37) cell_hwr_fs_pane_g1_ParamLimits

0x5781,	// (0x00042b37) cell_hwr_fs_pane_g1

0x556b,	// (0x00042921) cell_hwr_fs_pane_g2_ParamLimits

0x556b,	// (0x00042921) cell_hwr_fs_pane_g2

0xbe5c,	// (0x00049212) cell_hwr_fs_pane_g3_ParamLimits

0xbe5c,	// (0x00049212) cell_hwr_fs_pane_g3

0xbe69,	// (0x0004921f) cell_hwr_fs_pane_g4_ParamLimits

0xbe69,	// (0x0004921f) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004cbd3) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004cbd3) cell_hwr_fs_pane_g

0x93be,	// (0x00046774) cell_hwr_fs_pane_t1

0x3f60,	// (0x00041316) grid_highlight_pane_cp6

0x3f60,	// (0x00041316) main_idle_act2_pane

0x47ec,	// (0x00041ba2) aid_inside_area_popup_secondary

0xbfcf,	// (0x00049385) aid_inside_area_window_primary_ParamLimits

0xbfcf,	// (0x00049385) aid_inside_area_window_primary

0x6ab4,	// (0x00043e6a) ai2_news_ticker_pane

0x6abc,	// (0x00043e72) aid_size_cell_ai1_link_ParamLimits

0x6abc,	// (0x00043e72) aid_size_cell_ai1_link

0x6ad6,	// (0x00043e8c) popup_ai2_data_window_ParamLimits

0x6ad6,	// (0x00043e8c) popup_ai2_data_window

0x6aea,	// (0x00043ea0) popup_ai2_link_window_ParamLimits

0x6aea,	// (0x00043ea0) popup_ai2_link_window

0x575d,	// (0x00042b13) bg_popup_sub_pane_cp4_ParamLimits

0x575d,	// (0x00042b13) bg_popup_sub_pane_cp4

0x6afe,	// (0x00043eb4) grid_ai2_link_pane_ParamLimits

0x6afe,	// (0x00043eb4) grid_ai2_link_pane

0x6b15,	// (0x00043ecb) popup_ai2_link_window_g1_ParamLimits

0x6b15,	// (0x00043ecb) popup_ai2_link_window_g1

0x6b21,	// (0x00043ed7) popup_ai2_link_window_g2_ParamLimits

0x6b21,	// (0x00043ed7) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004cd9f) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004cd9f) popup_ai2_link_window_g

0x6b30,	// (0x00043ee6) ai2_mp_button_pane

0x6b38,	// (0x00043eee) ai2_mp_volume_pane

0x5882,	// (0x00042c38) bg_popup_sub_pane_cp5_ParamLimits

0x5882,	// (0x00042c38) bg_popup_sub_pane_cp5

0x6b40,	// (0x00043ef6) heading_ai2_gene_pane_ParamLimits

0x6b40,	// (0x00043ef6) heading_ai2_gene_pane

0x6b4c,	// (0x00043f02) list_ai2_gene_pane_ParamLimits

0x6b4c,	// (0x00043f02) list_ai2_gene_pane

0x6b94,	// (0x00043f4a) cell_ai2_link_pane_ParamLimits

0x6b94,	// (0x00043f4a) cell_ai2_link_pane

0x6baa,	// (0x00043f60) cell_ai2_link_pane_g1

0x3f60,	// (0x00041316) grid_highlight_pane_cp7

0x96b6,	// (0x00046a6c) ai2_mp_volume_pane_g1

0x6c83,	// (0x00044039) ai2_mp_volume_pane_g2

0x6bf0,	// (0x00043fa6) list_ai2_gene_pane_t1

0x6c7b,	// (0x00044031) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004cdb8) ai2_mp_volume_pane_g

0x96be,	// (0x00046a74) volume_small_pane_cp3

0x6c8b,	// (0x00044041) aid_size_cell_ai2_button

0x6c93,	// (0x00044049) grid_ai2_button_pane

0x6c9c,	// (0x00044052) cell_ai2_button_pane_ParamLimits

0x6c9c,	// (0x00044052) cell_ai2_button_pane

0x3f56,	// (0x0004130c) cell_ai2_button_pane_g1

0x3f60,	// (0x00041316) grid_highlight_pane_cp8

0x6c3b,	// (0x00043ff1) ai2_gene_pane_t1_ParamLimits

0x6c3b,	// (0x00043ff1) ai2_gene_pane_t1

0xb611,	// (0x000489c7) aid_height_parent_landscape

0xc0d4,	// (0x0004948a) aid_height_set_list

0x5efe,	// (0x000432b4) aid_size_parent

0x691b,	// (0x00043cd1) aid_size_cell_graphic_pane_ParamLimits

0x6b5c,	// (0x00043f12) popup_ai2_data_window_g1_ParamLimits

0x6b5c,	// (0x00043f12) popup_ai2_data_window_g1

0x6b68,	// (0x00043f1e) ai2_news_ticker_pane_g1

0x6b70,	// (0x00043f26) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004cda4) ai2_news_ticker_pane_g

0x6b78,	// (0x00043f2e) ai2_news_ticker_pane_t1

0x6b86,	// (0x00043f3c) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004cda9) ai2_news_ticker_pane_t

0x6bb3,	// (0x00043f69) heading_ai2_gene_pane_g1

0x6bbb,	// (0x00043f71) heading_ai2_gene_pane_t1_ParamLimits

0x6bbb,	// (0x00043f71) heading_ai2_gene_pane_t1

0x6bd0,	// (0x00043f86) list_highlight_pane_cp6

0x6bd8,	// (0x00043f8e) ai2_gene_pane_ParamLimits

0x6bd8,	// (0x00043f8e) ai2_gene_pane

0x6bfe,	// (0x00043fb4) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004cdae) list_ai2_gene_pane_t

0x6c0c,	// (0x00043fc2) list_highlight_pane_cp8_ParamLimits

0x6c0c,	// (0x00043fc2) list_highlight_pane_cp8

0x6c1d,	// (0x00043fd3) ai2_gene_pane_g1_ParamLimits

0x6c1d,	// (0x00043fd3) ai2_gene_pane_g1

0x6c2f,	// (0x00043fe5) ai2_gene_pane_g2_ParamLimits

0x6c2f,	// (0x00043fe5) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004cdb3) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004cdb3) ai2_gene_pane_g

0x467c,	// (0x00041a32) scroll_pane_cp12

0x9249,	// (0x000465ff) control_pane_t3_ParamLimits

0x9249,	// (0x000465ff) control_pane_t3

0x52db,	// (0x00042691) status_small_pane_g8_ParamLimits

0x52db,	// (0x00042691) status_small_pane_g8

0xb6ff,	// (0x00048ab5) popup_find_window_ParamLimits

0xb8ec,	// (0x00048ca2) popup_note_image_window_ParamLimits

0xae9a,	// (0x00048250) list_double2_graphic_pane_vc_g1_ParamLimits

0xae9a,	// (0x00048250) list_double2_graphic_pane_vc_g1

0xa764,	// (0x00047b1a) list_double2_graphic_pane_vc_g2_ParamLimits

0xa764,	// (0x00047b1a) list_double2_graphic_pane_vc_g2

0xa770,	// (0x00047b26) list_double2_graphic_pane_vc_g3_ParamLimits

0xa770,	// (0x00047b26) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004cb91) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004cb91) list_double2_graphic_pane_vc_g

0xaea6,	// (0x0004825c) list_double2_graphic_pane_vc_t1_ParamLimits

0xaea6,	// (0x0004825c) list_double2_graphic_pane_vc_t1

0xa764,	// (0x00047b1a) list_single_heading_pane_vc_g1_ParamLimits

0xa764,	// (0x00047b1a) list_single_heading_pane_vc_g1

0xa770,	// (0x00047b26) list_single_heading_pane_vc_g2_ParamLimits

0xa770,	// (0x00047b26) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cbb2) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cbb2) list_single_heading_pane_vc_g

0xaebc,	// (0x00048272) list_single_heading_pane_vc_t1_ParamLimits

0xaebc,	// (0x00048272) list_single_heading_pane_vc_t1

0xaed2,	// (0x00048288) list_single_heading_pane_vc_t2_ParamLimits

0xaed2,	// (0x00048288) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004cbb7) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004cbb7) list_single_heading_pane_vc_t

0x56b5,	// (0x00042a6b) list_setting_number_pane_vc_g1_ParamLimits

0x56b5,	// (0x00042a6b) list_setting_number_pane_vc_g1

0x56c1,	// (0x00042a77) list_setting_number_pane_vc_g2_ParamLimits

0x56c1,	// (0x00042a77) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004cbbc) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004cbbc) list_setting_number_pane_vc_g

0x56cd,	// (0x00042a83) list_setting_number_pane_vc_t1_ParamLimits

0x56cd,	// (0x00042a83) list_setting_number_pane_vc_t1

0x56e1,	// (0x00042a97) list_setting_number_pane_vc_t2_ParamLimits

0x56e1,	// (0x00042a97) list_setting_number_pane_vc_t2

0x56fb,	// (0x00042ab1) list_setting_number_pane_vc_t3_ParamLimits

0x56fb,	// (0x00042ab1) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004cbc1) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004cbc1) list_setting_number_pane_vc_t

0x5721,	// (0x00042ad7) set_value_pane_vc_ParamLimits

0x5721,	// (0x00042ad7) set_value_pane_vc

0x6898,	// (0x00043c4e) list_double2_graphic_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double2_graphic_pane_vc

0x6898,	// (0x00043c4e) list_double2_large_graphic_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double2_large_graphic_pane_vc

0x6898,	// (0x00043c4e) list_double2_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double2_pane_vc

0x6898,	// (0x00043c4e) list_double_graphic_heading_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_graphic_heading_pane_vc

0x6898,	// (0x00043c4e) list_double_graphic_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_graphic_pane_vc

0x6898,	// (0x00043c4e) list_double_heading_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_heading_pane_vc

0x6898,	// (0x00043c4e) list_double_large_graphic_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_large_graphic_pane_vc

0x6898,	// (0x00043c4e) list_double_number_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_number_pane_vc

0x6898,	// (0x00043c4e) list_double_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_pane_vc

0x6898,	// (0x00043c4e) list_double_time_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_double_time_pane_vc

0x6898,	// (0x00043c4e) list_setting_number_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_setting_number_pane_vc

0x6898,	// (0x00043c4e) list_setting_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_setting_pane_vc

0x6898,	// (0x00043c4e) list_single_graphic_heading_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_single_graphic_heading_pane_vc

0x6898,	// (0x00043c4e) list_single_heading_pane_vc_ParamLimits

0x6898,	// (0x00043c4e) list_single_heading_pane_vc

0xafba,	// (0x00048370) list_single_number_heading_pane_vc_ParamLimits

0xafba,	// (0x00048370) list_single_number_heading_pane_vc

0xae9a,	// (0x00048250) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae9a,	// (0x00048250) list_double_graphic_heading_pane_vc_g1

0xa764,	// (0x00047b1a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa764,	// (0x00047b1a) list_double_graphic_heading_pane_vc_g2

0xa770,	// (0x00047b26) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa770,	// (0x00047b26) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0004cb91) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004cb91) list_double_graphic_heading_pane_vc_g

0xb08f,	// (0x00048445) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb08f,	// (0x00048445) list_double_graphic_heading_pane_vc_t1

0xaebc,	// (0x00048272) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaebc,	// (0x00048272) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0004cdbf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0004cdbf) list_double_graphic_heading_pane_vc_t

0x56b5,	// (0x00042a6b) list_setting_pane_vc_g1_ParamLimits

0x56b5,	// (0x00042a6b) list_setting_pane_vc_g1

0x56c1,	// (0x00042a77) list_setting_pane_vc_g2_ParamLimits

0x56c1,	// (0x00042a77) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004cbbc) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004cbbc) list_setting_pane_vc_g

0x6e92,	// (0x00044248) list_setting_pane_vc_t1_ParamLimits

0x6e92,	// (0x00044248) list_setting_pane_vc_t1

0x6eac,	// (0x00044262) list_setting_pane_vc_t2_ParamLimits

0x6eac,	// (0x00044262) list_setting_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004ce02) list_setting_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004ce02) list_setting_pane_vc_t

0x5721,	// (0x00042ad7) set_value_pane_cp_vc_ParamLimits

0x5721,	// (0x00042ad7) set_value_pane_cp_vc

0xa764,	// (0x00047b1a) list_single_number_heading_pane_vc_g1_ParamLimits

0xa764,	// (0x00047b1a) list_single_number_heading_pane_vc_g1

0xa770,	// (0x00047b26) list_single_number_heading_pane_vc_g2_ParamLimits

0xa770,	// (0x00047b26) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cbb2) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cbb2) list_single_number_heading_pane_vc_g

0xaebc,	// (0x00048272) list_single_number_heading_pane_vc_t1_ParamLimits

0xaebc,	// (0x00048272) list_single_number_heading_pane_vc_t1

0xb0a3,	// (0x00048459) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0a3,	// (0x00048459) list_single_number_heading_pane_vc_t2

0xb0b7,	// (0x0004846d) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0b7,	// (0x0004846d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa51,	// (0x0004ce07) list_single_number_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0004ce07) list_single_number_heading_pane_vc_t

0xae9a,	// (0x00048250) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xae9a,	// (0x00048250) list_single_graphic_heading_pane_vc_g1

0xa764,	// (0x00047b1a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa764,	// (0x00047b1a) list_single_graphic_heading_pane_vc_g4

0xa770,	// (0x00047b26) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa770,	// (0x00047b26) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004cb91) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004cb91) list_single_graphic_heading_pane_vc_g

0xaebc,	// (0x00048272) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xaebc,	// (0x00048272) list_single_graphic_heading_pane_vc_t1

0xb0c9,	// (0x0004847f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0c9,	// (0x0004847f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x0004ce0e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x0004ce0e) list_single_graphic_heading_pane_vc_t

0xa764,	// (0x00047b1a) list_double2_pane_vc_g1_ParamLimits

0xa764,	// (0x00047b1a) list_double2_pane_vc_g1

0xa770,	// (0x00047b26) list_double2_pane_vc_g2_ParamLimits

0xa770,	// (0x00047b26) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cbb2) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cbb2) list_double2_pane_vc_g

0xb0dd,	// (0x00048493) list_double2_pane_vc_t1_ParamLimits

0xb0dd,	// (0x00048493) list_double2_pane_vc_t1

0xba18,	// (0x00048dce) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xba18,	// (0x00048dce) list_double2_large_graphic_pane_vc_g1

0xa764,	// (0x00047b1a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa764,	// (0x00047b1a) list_double2_large_graphic_pane_vc_g2

0xa770,	// (0x00047b26) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xa770,	// (0x00047b26) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5d,	// (0x0004ce13) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x0004ce13) list_double2_large_graphic_pane_vc_g

0xb0f3,	// (0x000484a9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb0f3,	// (0x000484a9) list_double2_large_graphic_pane_vc_t1

0xb109,	// (0x000484bf) list_double_time_pane_vc_g1_ParamLimits

0xb109,	// (0x000484bf) list_double_time_pane_vc_g1

0xb115,	// (0x000484cb) list_double_time_pane_vc_g2_ParamLimits

0xb115,	// (0x000484cb) list_double_time_pane_vc_g2

0x0001,

0xfa64,	// (0x0004ce1a) list_double_time_pane_vc_g_ParamLimits

0xfa64,	// (0x0004ce1a) list_double_time_pane_vc_g

0xb121,	// (0x000484d7) list_double_time_pane_vc_t1_ParamLimits

0xb121,	// (0x000484d7) list_double_time_pane_vc_t1

0xb13a,	// (0x000484f0) list_double_time_pane_vc_t2_ParamLimits

0xb13a,	// (0x000484f0) list_double_time_pane_vc_t2

0xb17a,	// (0x00048530) list_double_time_pane_vc_t3_ParamLimits

0xb17a,	// (0x00048530) list_double_time_pane_vc_t3

0xb192,	// (0x00048548) list_double_time_pane_vc_t4_ParamLimits

0xb192,	// (0x00048548) list_double_time_pane_vc_t4

0x0003,

0xfa69,	// (0x0004ce1f) list_double_time_pane_vc_t_ParamLimits

0xfa69,	// (0x0004ce1f) list_double_time_pane_vc_t

0xa764,	// (0x00047b1a) list_double_pane_vc_g1_ParamLimits

0xa764,	// (0x00047b1a) list_double_pane_vc_g1

0xa770,	// (0x00047b26) list_double_pane_vc_g2_ParamLimits

0xa770,	// (0x00047b26) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cbb2) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cbb2) list_double_pane_vc_g

0xb1a6,	// (0x0004855c) list_double_pane_vc_t1_ParamLimits

0xb1a6,	// (0x0004855c) list_double_pane_vc_t1

0xb1b8,	// (0x0004856e) list_double_pane_vc_t2_ParamLimits

0xb1b8,	// (0x0004856e) list_double_pane_vc_t2

0x0001,

0xfa72,	// (0x0004ce28) list_double_pane_vc_t_ParamLimits

0xfa72,	// (0x0004ce28) list_double_pane_vc_t

0xa764,	// (0x00047b1a) list_double_number_pane_vc_g1_ParamLimits

0xa764,	// (0x00047b1a) list_double_number_pane_vc_g1

0xa770,	// (0x00047b26) list_double_number_pane_vc_g2_ParamLimits

0xa770,	// (0x00047b26) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cbb2) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cbb2) list_double_number_pane_vc_g

0xb1d0,	// (0x00048586) list_double_number_pane_vc_t1_ParamLimits

0xb1d0,	// (0x00048586) list_double_number_pane_vc_t1

0xb1e4,	// (0x0004859a) list_double_number_pane_vc_t2_ParamLimits

0xb1e4,	// (0x0004859a) list_double_number_pane_vc_t2

0xb1b8,	// (0x0004856e) list_double_number_pane_vc_t3_ParamLimits

0xb1b8,	// (0x0004856e) list_double_number_pane_vc_t3

0x0002,

0xfa77,	// (0x0004ce2d) list_double_number_pane_vc_t_ParamLimits

0xfa77,	// (0x0004ce2d) list_double_number_pane_vc_t

0xba24,	// (0x00048dda) list_double_large_graphic_pane_vc_g1_ParamLimits

0xba24,	// (0x00048dda) list_double_large_graphic_pane_vc_g1

0xba30,	// (0x00048de6) list_double_large_graphic_pane_vc_g2_ParamLimits

0xba30,	// (0x00048de6) list_double_large_graphic_pane_vc_g2

0xa770,	// (0x00047b26) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa770,	// (0x00047b26) list_double_large_graphic_pane_vc_g3

0xb1f6,	// (0x000485ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb1f6,	// (0x000485ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7e,	// (0x0004ce34) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004ce34) list_double_large_graphic_pane_vc_g

0xb202,	// (0x000485b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb202,	// (0x000485b8) list_double_large_graphic_pane_vc_t1

0xb214,	// (0x000485ca) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb214,	// (0x000485ca) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0004ce3d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0004ce3d) list_double_large_graphic_pane_vc_t

0xa764,	// (0x00047b1a) list_double_heading_pane_vc_g1_ParamLimits

0xa764,	// (0x00047b1a) list_double_heading_pane_vc_g1

0xa770,	// (0x00047b26) list_double_heading_pane_vc_g2_ParamLimits

0xa770,	// (0x00047b26) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004cbb2) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004cbb2) list_double_heading_pane_vc_g

0xb22d,	// (0x000485e3) list_double_heading_pane_vc_t1_ParamLimits

0xb22d,	// (0x000485e3) list_double_heading_pane_vc_t1

0xaebc,	// (0x00048272) list_double_heading_pane_vc_t2_ParamLimits

0xaebc,	// (0x00048272) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004ce42) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004ce42) list_double_heading_pane_vc_t

0xae9a,	// (0x00048250) list_double_graphic_pane_vc_g1_ParamLimits

0xae9a,	// (0x00048250) list_double_graphic_pane_vc_g1

0xb241,	// (0x000485f7) list_double_graphic_pane_vc_g2_ParamLimits

0xb241,	// (0x000485f7) list_double_graphic_pane_vc_g2

0xb250,	// (0x00048606) list_double_graphic_pane_vc_g3_ParamLimits

0xb250,	// (0x00048606) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0004ce47) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0004ce47) list_double_graphic_pane_vc_g

0xb25c,	// (0x00048612) list_double_graphic_pane_vc_t1_ParamLimits

0xb25c,	// (0x00048612) list_double_graphic_pane_vc_t1

0xb1b8,	// (0x0004856e) list_double_graphic_pane_vc_t2_ParamLimits

0xb1b8,	// (0x0004856e) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x0004ce4e) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x0004ce4e) list_double_graphic_pane_vc_t

0x8473,	// (0x00045829) aid_size_cell_fastswap

0x847b,	// (0x00045831) aid_size_cell_touch_ParamLimits

0x847b,	// (0x00045831) aid_size_cell_touch

0x86e0,	// (0x00045a96) popup_fast_swap_wide_window_ParamLimits

0x86e0,	// (0x00045a96) popup_fast_swap_wide_window

0x87d6,	// (0x00045b8c) touch_pane_ParamLimits

0x87d6,	// (0x00045b8c) touch_pane

0x46de,	// (0x00041a94) button_value_adjust_pane_cp2

0xa89d,	// (0x00047c53) button_value_adjust_pane_cp4

0xa8bd,	// (0x00047c73) form_field_data_pane_cp2

0xa8dc,	// (0x00047c92) form_field_data_wide_pane_cp2

0x4a1e,	// (0x00041dd4) bg_scroll_pane_ParamLimits

0x8e5c,	// (0x00046212) scroll_handle_pane_ParamLimits

0x8e70,	// (0x00046226) scroll_sc2_down_pane_ParamLimits

0x8e70,	// (0x00046226) scroll_sc2_down_pane

0x4a4f,	// (0x00041e05) scroll_sc2_up_pane_ParamLimits

0x4a4f,	// (0x00041e05) scroll_sc2_up_pane

0xc42c,	// (0x000497e2) grid_wheel_folder_pane_g1_ParamLimits

0xc42c,	// (0x000497e2) grid_wheel_folder_pane_g1

0x9035,	// (0x000463eb) clock_nsta_pane_cp2_ParamLimits

0x9035,	// (0x000463eb) clock_nsta_pane_cp2

0xab77,	// (0x00047f2d) listscroll_midp_pane_ParamLimits

0xadb3,	// (0x00048169) midp_canvas_pane

0x532f,	// (0x000426e5) nsta_clock_indic_pane

0x535f,	// (0x00042715) listscroll_form_pane_vc

0x5367,	// (0x0004271d) listscroll_set_pane_vc_ParamLimits

0x5367,	// (0x0004271d) listscroll_set_pane_vc

0xbbf8,	// (0x00048fae) clock_nsta_pane

0xbc05,	// (0x00048fbb) indicator_nsta_pane

0x559d,	// (0x00042953) bg_popup_sub_pane_cp2_ParamLimits

0x55b1,	// (0x00042967) find_pane_cp2_ParamLimits

0x55b1,	// (0x00042967) find_pane_cp2

0x55c7,	// (0x0004297d) grid_toobar_pane_ParamLimits

0x5731,	// (0x00042ae7) list_form_gen_pane_vc_ParamLimits

0x5731,	// (0x00042ae7) list_form_gen_pane_vc

0x5747,	// (0x00042afd) scroll_pane_cp8_vc_ParamLimits

0x5747,	// (0x00042afd) scroll_pane_cp8_vc

0x5797,	// (0x00042b4d) data_form_wide_pane_vc_ParamLimits

0x5797,	// (0x00042b4d) data_form_wide_pane_vc

0x57a3,	// (0x00042b59) form_field_data_wide_pane_vc_g1

0x57ab,	// (0x00042b61) form_field_data_wide_pane_vc_t1_ParamLimits

0x57ab,	// (0x00042b61) form_field_data_wide_pane_vc_t1

0x46f2,	// (0x00041aa8) input_focus_pane_cp6_vc_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_cp6_vc

0xbf67,	// (0x0004931d) list_midp_pane_ParamLimits

0xbf73,	// (0x00049329) scroll_pane_cp16_ParamLimits

0xbf73,	// (0x00049329) scroll_pane_cp16

0x5a1a,	// (0x00042dd0) button_value_adjust_pane_ParamLimits

0x5a1a,	// (0x00042dd0) button_value_adjust_pane

0xc0e5,	// (0x0004949b) button_value_adjust_pane_cp6_ParamLimits

0xc0e5,	// (0x0004949b) button_value_adjust_pane_cp6

0xc207,	// (0x000495bd) settings_code_pane_cp_ParamLimits

0xc207,	// (0x000495bd) settings_code_pane_cp

0x3f56,	// (0x0004130c) cell_touch_pane_g1

0x3f56,	// (0x0004130c) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0004cad6) cell_touch_pane_g

0xc2f4,	// (0x000496aa) cell_touch_pane_cp_ParamLimits

0xc2f4,	// (0x000496aa) cell_touch_pane_cp

0xc304,	// (0x000496ba) cell_touch_pane_ParamLimits

0xc304,	// (0x000496ba) cell_touch_pane

0x3f56,	// (0x0004130c) scroll_sc2_down_pane_g1

0x3f56,	// (0x0004130c) scroll_sc2_up_pane_g1

0x3f60,	// (0x00041316) bg_set_opt_pane_cp4_vc

0x6cae,	// (0x00044064) list_set_graphic_pane_vc_g1_ParamLimits

0x6cae,	// (0x00044064) list_set_graphic_pane_vc_g1

0x6cba,	// (0x00044070) list_set_graphic_pane_vc_g2_ParamLimits

0x6cba,	// (0x00044070) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0004cdc4) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0004cdc4) list_set_graphic_pane_vc_g

0x6cc6,	// (0x0004407c) text_primary_small_cp13_vc_ParamLimits

0x6cc6,	// (0x0004407c) text_primary_small_cp13_vc

0x6cde,	// (0x00044094) list_set_graphic_pane_vc_ParamLimits

0x6cde,	// (0x00044094) list_set_graphic_pane_vc

0x3f60,	// (0x00041316) input_focus_pane_cp2_vc

0x3f56,	// (0x0004130c) setting_code_pane_vc_g1

0x6cf2,	// (0x000440a8) setting_code_pane_vc_t1

0x6d00,	// (0x000440b6) set_text_pane_vc_t1_ParamLimits

0x6d00,	// (0x000440b6) set_text_pane_vc_t1

0x3f60,	// (0x00041316) input_focus_pane_cp1_vc

0x6d1f,	// (0x000440d5) list_set_text_pane_vc

0x3f56,	// (0x0004130c) setting_text_pane_vc_g1

0x3f60,	// (0x00041316) bg_set_opt_pane_cp2_vc

0x6d29,	// (0x000440df) setting_slider_graphic_pane_vc_g1

0x6d31,	// (0x000440e7) setting_slider_graphic_pane_vc_t1

0x6d3f,	// (0x000440f5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0004cdc9) setting_slider_graphic_pane_vc_t

0x6d4d,	// (0x00044103) slider_set_pane_cp_vc

0x6d55,	// (0x0004410b) slider_set_pane_vc_g1

0x6d5e,	// (0x00044114) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0004cdce) slider_set_pane_vc_g

0x474d,	// (0x00041b03) set_opt_bg_pane_g1_copy1

0x4755,	// (0x00041b0b) set_opt_bg_pane_g2_copy1

0x6d8a,	// (0x00044140) set_opt_bg_pane_g3_copy1

0x4765,	// (0x00041b1b) set_opt_bg_pane_g4_copy1

0x476d,	// (0x00041b23) set_opt_bg_pane_g5_copy1

0x4775,	// (0x00041b2b) set_opt_bg_pane_g6_copy1

0x6d92,	// (0x00044148) set_opt_bg_pane_g7_copy1

0x6d9c,	// (0x00044152) set_opt_bg_pane_g8_copy1

0x6da4,	// (0x0004415a) set_opt_bg_pane_g9_copy1

0x3f60,	// (0x00041316) bg_set_opt_pane_cp_vc

0x6dac,	// (0x00044162) setting_slider_pane_vc_t1

0x6d31,	// (0x000440e7) setting_slider_pane_vc_t2

0x6d3f,	// (0x000440f5) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0004cddd) setting_slider_pane_vc_t

0x6d4d,	// (0x00044103) slider_set_pane_vc

0x93cc,	// (0x00046782) volume_set_pane_vc_g1

0x96c7,	// (0x00046a7d) volume_set_pane_vc_g2

0x96d0,	// (0x00046a86) volume_set_pane_vc_g3

0x96d9,	// (0x00046a8f) volume_set_pane_vc_g4

0x96e2,	// (0x00046a98) volume_set_pane_vc_g5

0x96eb,	// (0x00046aa1) volume_set_pane_vc_g6

0x96f4,	// (0x00046aaa) volume_set_pane_vc_g7

0x96fd,	// (0x00046ab3) volume_set_pane_vc_g8

0x9706,	// (0x00046abc) volume_set_pane_vc_g9

0x970f,	// (0x00046ac5) volume_set_pane_vc_g10

0x0009,

0xfa2e,	// (0x0004cde4) volume_set_pane_vc_g

0x6dbb,	// (0x00044171) volume_set_pane_vc

0x6dc3,	// (0x00044179) button_value_adjust_pane_cp1_vc

0x6dcd,	// (0x00044183) list_highlight_pane_cp2_vc

0x6dd6,	// (0x0004418c) list_set_pane_vc_ParamLimits

0x6dd6,	// (0x0004418c) list_set_pane_vc

0x6e28,	// (0x000441de) main_pane_set_vc_t1_ParamLimits

0x6e28,	// (0x000441de) main_pane_set_vc_t1

0x6e3d,	// (0x000441f3) main_pane_set_vc_t2_ParamLimits

0x6e3d,	// (0x000441f3) main_pane_set_vc_t2

0x6e4f,	// (0x00044205) main_pane_set_vc_t3_ParamLimits

0x6e4f,	// (0x00044205) main_pane_set_vc_t3

0x6e61,	// (0x00044217) main_pane_set_vc_t4_ParamLimits

0x6e61,	// (0x00044217) main_pane_set_vc_t4

0x0003,

0xfa43,	// (0x0004cdf9) main_pane_set_vc_t_ParamLimits

0xfa43,	// (0x0004cdf9) main_pane_set_vc_t

0x6e73,	// (0x00044229) setting_code_pane_vc_ParamLimits

0x6e73,	// (0x00044229) setting_code_pane_vc

0x6e82,	// (0x00044238) setting_slider_graphic_pane_vc

0x6e82,	// (0x00044238) setting_slider_pane_vc

0x6e82,	// (0x00044238) setting_text_pane_vc

0x6e82,	// (0x00044238) setting_volume_pane_vc

0x6e8a,	// (0x00044240) scroll_pane_cp121_vc

0x46cc,	// (0x00041a82) set_content_pane_vc

0x6ec2,	// (0x00044278) button_value_adjust_pane_g1

0x6ecb,	// (0x00044281) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0004ce53) button_value_adjust_pane_g

0x6ed4,	// (0x0004428a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ed4,	// (0x0004428a) form_field_slider_wide_pane_vc_t1

0x6ee8,	// (0x0004429e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ee8,	// (0x0004429e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0004ce58) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0004ce58) form_field_slider_wide_pane_vc_t

0x3fae,	// (0x00041364) input_focus_pane_cp10_vc_ParamLimits

0x3fae,	// (0x00041364) input_focus_pane_cp10_vc

0x6efa,	// (0x000442b0) slider_cont_pane_cp1_vc_ParamLimits

0x6efa,	// (0x000442b0) slider_cont_pane_cp1_vc

0x6d55,	// (0x0004410b) slider_form_pane_g1_cp2

0x6d5e,	// (0x00044114) slider_form_pane_g2_cp2

0x6f13,	// (0x000442c9) form_field_slider_pane_vc_t3

0x6f21,	// (0x000442d7) form_field_slider_pane_vc_t4

0x6f2f,	// (0x000442e5) slider_form_pane_vc_ParamLimits

0x6f2f,	// (0x000442e5) slider_form_pane_vc

0x6f3c,	// (0x000442f2) form_field_slider_pane_vc_t1_ParamLimits

0x6f3c,	// (0x000442f2) form_field_slider_pane_vc_t1

0x6ee8,	// (0x0004429e) form_field_slider_pane_vc_t2_ParamLimits

0x6ee8,	// (0x0004429e) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0004ce68) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0004ce68) form_field_slider_pane_vc_t

0x3fae,	// (0x00041364) input_focus_pane_cp9_vc_ParamLimits

0x3fae,	// (0x00041364) input_focus_pane_cp9_vc

0x6f58,	// (0x0004430e) slider_cont_pane_vc_ParamLimits

0x6f58,	// (0x0004430e) slider_cont_pane_vc

0x6f6a,	// (0x00044320) list_form_graphic_pane_cp_vc_ParamLimits

0x6f6a,	// (0x00044320) list_form_graphic_pane_cp_vc

0x57a3,	// (0x00042b59) form_field_popup_wide_pane_vc_g1

0x6f7f,	// (0x00044335) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f7f,	// (0x00044335) form_field_popup_wide_pane_vc_t1

0x46f2,	// (0x00041aa8) input_focus_pane_cp8_vc_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_cp8_vc

0x6f96,	// (0x0004434c) list_form_wide_pane_vc_ParamLimits

0x6f96,	// (0x0004434c) list_form_wide_pane_vc

0x6fa2,	// (0x00044358) list_form_graphic_pane_vc_g1

0x6faa,	// (0x00044360) list_form_graphic_pane_vc_t1_ParamLimits

0x6faa,	// (0x00044360) list_form_graphic_pane_vc_t1

0x3fbc,	// (0x00041372) list_highlight_pane_cp5_vc_ParamLimits

0x3fbc,	// (0x00041372) list_highlight_pane_cp5_vc

0x6fc6,	// (0x0004437c) list_form_graphic_pane_vc_ParamLimits

0x6fc6,	// (0x0004437c) list_form_graphic_pane_vc

0x57a3,	// (0x00042b59) form_field_popup_pane_vc_g1

0x6fdc,	// (0x00044392) form_field_popup_pane_vc_t1_ParamLimits

0x6fdc,	// (0x00044392) form_field_popup_pane_vc_t1

0x46f2,	// (0x00041aa8) input_focus_pane_cp7_vc_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_cp7_vc

0x6ff3,	// (0x000443a9) list_form_pane_vc_ParamLimits

0x6ff3,	// (0x000443a9) list_form_pane_vc

0x6fff,	// (0x000443b5) data_form_pane_vc_t1_ParamLimits

0x6fff,	// (0x000443b5) data_form_pane_vc_t1

0x474d,	// (0x00041b03) input_focus_pane_vc_g1

0x4755,	// (0x00041b0b) input_focus_pane_vc_g2

0x475d,	// (0x00041b13) input_focus_pane_vc_g3

0x4765,	// (0x00041b1b) input_focus_pane_vc_g4

0x476d,	// (0x00041b23) input_focus_pane_vc_g5

0x4775,	// (0x00041b2b) input_focus_pane_vc_g6

0x477d,	// (0x00041b33) input_focus_pane_vc_g7

0x4785,	// (0x00041b3b) input_focus_pane_vc_g8

0x478d,	// (0x00041b43) input_focus_pane_vc_g9

0x3f56,	// (0x0004130c) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x0004ca5f) input_focus_pane_vc_g

0x5797,	// (0x00042b4d) data_form_pane_vc_ParamLimits

0x5797,	// (0x00042b4d) data_form_pane_vc

0x57a3,	// (0x00042b59) form_field_data_pane_vc_g1

0x701a,	// (0x000443d0) form_field_data_pane_vc_t1_ParamLimits

0x701a,	// (0x000443d0) form_field_data_pane_vc_t1

0x46f2,	// (0x00041aa8) input_focus_pane_vc_ParamLimits

0x46f2,	// (0x00041aa8) input_focus_pane_vc

0x7034,	// (0x000443ea) button_value_adjust_pane_cp3_vc

0x703c,	// (0x000443f2) button_value_adjust_pane_cp5_vc

0x7044,	// (0x000443fa) form_field_data_pane_vc_ParamLimits

0x7044,	// (0x000443fa) form_field_data_pane_vc

0x705b,	// (0x00044411) form_field_data_pane_vc_cp2

0x7063,	// (0x00044419) form_field_data_wide_pane_vc_ParamLimits

0x7063,	// (0x00044419) form_field_data_wide_pane_vc

0x7079,	// (0x0004442f) form_field_data_wide_pane_vc_cp2

0x7081,	// (0x00044437) form_field_popup_pane_vc_ParamLimits

0x7081,	// (0x00044437) form_field_popup_pane_vc

0x7098,	// (0x0004444e) form_field_popup_wide_pane_vc_ParamLimits

0x7098,	// (0x0004444e) form_field_popup_wide_pane_vc

0x70ae,	// (0x00044464) form_field_slider_pane_vc_ParamLimits

0x70ae,	// (0x00044464) form_field_slider_pane_vc

0x70c1,	// (0x00044477) form_field_slider_wide_pane_vc_ParamLimits

0x70c1,	// (0x00044477) form_field_slider_wide_pane_vc

0xc316,	// (0x000496cc) grid_touch_1_pane_ParamLimits

0xc316,	// (0x000496cc) grid_touch_1_pane

0xc322,	// (0x000496d8) grid_touch_2_pane_ParamLimits

0xc322,	// (0x000496d8) grid_touch_2_pane

0x5321,	// (0x000426d7) touch_pane_g1_ParamLimits

0x5321,	// (0x000426d7) touch_pane_g1

0x70e2,	// (0x00044498) cell_app_pane_cp_wide_ParamLimits

0x70e2,	// (0x00044498) cell_app_pane_cp_wide

0x70f3,	// (0x000444a9) grid_popup_fast_wide_pane_ParamLimits

0x70f3,	// (0x000444a9) grid_popup_fast_wide_pane

0x7107,	// (0x000444bd) scroll_pane_cp19_ParamLimits

0x7107,	// (0x000444bd) scroll_pane_cp19

0x3f60,	// (0x00041316) bg_popup_window_pane_cp20

0x711b,	// (0x000444d1) listscroll_popup_fast_wide_pane

0x3fbc,	// (0x00041372) grid_indicator_nsta_pane

0x7123,	// (0x000444d9) clock_nsta_pane_g1

0x712c,	// (0x000444e2) clock_nsta_pane_t1

0xc33a,	// (0x000496f0) cell_indicator_nsta_pane_ParamLimits

0xc33a,	// (0x000496f0) cell_indicator_nsta_pane

0x70d4,	// (0x0004448a) cell_indicator_nsta_pane_g1

0xc372,	// (0x00049728) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0004ce72) cell_indicator_nsta_pane_g

0x7148,	// (0x000444fe) clock_nsta_pane_cp

0x7150,	// (0x00044506) indicator_nsta_pane_cp

0x7159,	// (0x0004450f) nsta_clock_indic_pane_g1

0x3ff8,	// (0x000413ae) grid_indicator_pane

0x4b41,	// (0x00041ef7) scroll_pane_cp29

0x8f84,	// (0x0004633a) indicator_nsta_pane_cp2_ParamLimits

0x8f84,	// (0x0004633a) indicator_nsta_pane_cp2

0x3fbc,	// (0x00041372) main_apps_wheel_pane

0x58bf,	// (0x00042c75) form_midp_field_text_pane_ParamLimits

0x59ec,	// (0x00042da2) scroll_bar_cp050_ParamLimits

0x71c2,	// (0x00044578) cell_indicator_pane_ParamLimits

0x71c2,	// (0x00044578) cell_indicator_pane

0x71df,	// (0x00044595) cell_indicator_pane_g1

0xc388,	// (0x0004973e) grid_wheel_folder_pane_ParamLimits

0xc388,	// (0x0004973e) grid_wheel_folder_pane

0xc39e,	// (0x00049754) list_wheel_apps_pane_ParamLimits

0xc39e,	// (0x00049754) list_wheel_apps_pane

0xc3af,	// (0x00049765) main_apps_wheel_pane_g1_ParamLimits

0xc3af,	// (0x00049765) main_apps_wheel_pane_g1

0xc3c3,	// (0x00049779) main_apps_wheel_pane_g2_ParamLimits

0xc3c3,	// (0x00049779) main_apps_wheel_pane_g2

0x0001,

0x00bd,	// (0x0003d473) main_apps_wheel_pane_g_ParamLimits

0x00bd,	// (0x0003d473) main_apps_wheel_pane_g

0xc3db,	// (0x00049791) main_apps_wheel_pane_t1_ParamLimits

0xc3db,	// (0x00049791) main_apps_wheel_pane_t1

0xc3fe,	// (0x000497b4) list_wheel_apps_pane_g1

0xc406,	// (0x000497bc) list_wheel_apps_pane_g2

0xc40e,	// (0x000497c4) list_wheel_apps_pane_g3

0xc418,	// (0x000497ce) list_wheel_apps_pane_g4

0xc422,	// (0x000497d8) list_wheel_apps_pane_g5

0x0004,

0x00c2,	// (0x0003d478) list_wheel_apps_pane_g

0x4f99,	// (0x0004234f) navi_icon_text_pane

0xbb3c,	// (0x00048ef2) aid_fill_nsta

0x71e9,	// (0x0004459f) navi_icon_text_pane_g1

0x71f5,	// (0x000445ab) navi_icon_text_pane_t1

0x4e35,	// (0x000421eb) list_set_graphic_pane_t1_ParamLimits

0x4e35,	// (0x000421eb) list_set_graphic_pane_t1

0x6106,	// (0x000434bc) popup_midp_note_alarm_window_t6_ParamLimits

0x6106,	// (0x000434bc) popup_midp_note_alarm_window_t6

0x6118,	// (0x000434ce) popup_midp_note_alarm_window_t7_ParamLimits

0x6118,	// (0x000434ce) popup_midp_note_alarm_window_t7

0x612a,	// (0x000434e0) popup_midp_note_alarm_window_t8_ParamLimits

0x612a,	// (0x000434e0) popup_midp_note_alarm_window_t8

0x613c,	// (0x000434f2) popup_midp_note_alarm_window_t9_ParamLimits

0x613c,	// (0x000434f2) popup_midp_note_alarm_window_t9

0x614e,	// (0x00043504) popup_midp_note_alarm_window_t10_ParamLimits

0x614e,	// (0x00043504) popup_midp_note_alarm_window_t10

0x6160,	// (0x00043516) popup_midp_note_alarm_window_t11_ParamLimits

0x6160,	// (0x00043516) popup_midp_note_alarm_window_t11

0x6172,	// (0x00043528) scroll_pane_cp17_ParamLimits

0x6172,	// (0x00043528) scroll_pane_cp17

0x93cc,	// (0x00046782) volume_small_pane_cp_g1

0x9718,	// (0x00046ace) volume_small_pane_cp_g2

0x9721,	// (0x00046ad7) volume_small_pane_cp_g3

0x972a,	// (0x00046ae0) volume_small_pane_cp_g4

0x9733,	// (0x00046ae9) volume_small_pane_cp_g5

0x973c,	// (0x00046af2) volume_small_pane_cp_g6

0x9745,	// (0x00046afb) volume_small_pane_cp_g7

0x974e,	// (0x00046b04) volume_small_pane_cp_g8

0x9757,	// (0x00046b0d) volume_small_pane_cp_g9

0x9760,	// (0x00046b16) volume_small_pane_cp_g10

0x5145,	// (0x000424fb) midp_ticker_pane_g1_ParamLimits

0x5151,	// (0x00042507) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004cb2b) midp_ticker_pane_g_ParamLimits

0x515d,	// (0x00042513) midp_ticker_pane_t1_ParamLimits

0xbb52,	// (0x00048f08) aid_fill_nsta_2

0x59d8,	// (0x00042d8e) list_form2_midp_pane

0x6867,	// (0x00043c1d) midp_editing_number_pane_ParamLimits

0x6876,	// (0x00043c2c) midp_ticker_pane_ParamLimits

0x7207,	// (0x000445bd) form2_midp_field_pane

0x720f,	// (0x000445c5) scroll_pane_cp51

0x722f,	// (0x000445e5) form2_midp_button_pane_ParamLimits

0x722f,	// (0x000445e5) form2_midp_button_pane

0x7241,	// (0x000445f7) form2_midp_content_pane_ParamLimits

0x7241,	// (0x000445f7) form2_midp_content_pane

0x725b,	// (0x00044611) form2_midp_field_choice_group_pane

0x7263,	// (0x00044619) form2_midp_field_pane_g1

0x726b,	// (0x00044621) form2_midp_field_pane_g2

0x7273,	// (0x00044629) form2_midp_field_pane_g3

0x727b,	// (0x00044631) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0004cea3) form2_midp_field_pane_g

0x7283,	// (0x00044639) form2_midp_gauge_slider_pane

0x728b,	// (0x00044641) form2_midp_gauge_wait_pane

0x7293,	// (0x00044649) form2_midp_image_pane_ParamLimits

0x7293,	// (0x00044649) form2_midp_image_pane

0x72ae,	// (0x00044664) form2_midp_label_pane_ParamLimits

0x72ae,	// (0x00044664) form2_midp_label_pane

0xc461,	// (0x00049817) form2_midp_label_pane_cp_ParamLimits

0xc461,	// (0x00049817) form2_midp_label_pane_cp

0x72c7,	// (0x0004467d) form2_midp_string_pane_ParamLimits

0x72c7,	// (0x0004467d) form2_midp_string_pane

0xb26e,	// (0x00048624) form2_midp_text_pane_ParamLimits

0xb26e,	// (0x00048624) form2_midp_text_pane

0x72d9,	// (0x0004468f) form2_midp_time_pane

0x72e9,	// (0x0004469f) input_focus_pane_cp51_ParamLimits

0x72e9,	// (0x0004469f) input_focus_pane_cp51

0x7301,	// (0x000446b7) form2_midp_label_pane_t1_ParamLimits

0x7301,	// (0x000446b7) form2_midp_label_pane_t1

0xb289,	// (0x0004863f) form2_mdip_text_pane_t1_ParamLimits

0xb289,	// (0x0004863f) form2_mdip_text_pane_t1

0xb2a5,	// (0x0004865b) form2_midp_time_pane_t1

0x7349,	// (0x000446ff) form2_midp_gauge_slider_pane_t1

0xc482,	// (0x00049838) form2_midp_gauge_slider_pane_t2

0xc494,	// (0x0004984a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0004ceac) form2_midp_gauge_slider_pane_t

0x735b,	// (0x00044711) form2_midp_slider_pane

0x7367,	// (0x0004471d) form2_midp_gauge_wait_pane_t1

0x7375,	// (0x0004472b) form2_midp_wait_pane_ParamLimits

0x7375,	// (0x0004472b) form2_midp_wait_pane

0xc4a6,	// (0x0004985c) list_single_2graphic_pane_cp4_ParamLimits

0xc4a6,	// (0x0004985c) list_single_2graphic_pane_cp4

0xbea2,	// (0x00049258) list_single_midp_graphic_pane_cp_ParamLimits

0xbea2,	// (0x00049258) list_single_midp_graphic_pane_cp

0x3f60,	// (0x00041316) list_highlight_pane_cp20

0x73a0,	// (0x00044756) list_single_2graphic_pane_g1_cp4

0x6bb3,	// (0x00043f69) list_single_2graphic_pane_g2_cp4

0x73a8,	// (0x0004475e) list_single_2graphic_pane_t1_cp4

0x3fbc,	// (0x00041372) list_highlight_pane_cp21

0x73b7,	// (0x0004476d) list_single_midp_graphic_pane_g4_cp

0x73c6,	// (0x0004477c) list_single_midp_graphic_pane_t1_cp

0xc4d5,	// (0x0004988b) form2_mdip_string_pane_t1_ParamLimits

0xc4d5,	// (0x0004988b) form2_mdip_string_pane_t1

0x3f60,	// (0x00041316) bg_wml_button_pane_cp2

0x3f56,	// (0x0004130c) form2_midp_image_pane_g1

0xa7cf,	// (0x00047b85) list_double_large_graphic_pane_g5_ParamLimits

0xa7cf,	// (0x00047b85) list_double_large_graphic_pane_g5

0xab77,	// (0x00047f2d) midp_form_pane_ParamLimits

0x3fbc,	// (0x00041372) main_apps_wheel_pane_ParamLimits

0xb912,	// (0x00048cc8) popup_preview_window_ParamLimits

0xb912,	// (0x00048cc8) popup_preview_window

0x543e,	// (0x000427f4) popup_touch_info_window_ParamLimits

0x543e,	// (0x000427f4) popup_touch_info_window

0x545c,	// (0x00042812) popup_touch_menu_window_ParamLimits

0x545c,	// (0x00042812) popup_touch_menu_window

0x3f4c,	// (0x00041302) bg_popup_sub_pane_cp6

0x73db,	// (0x00044791) list_touch_menu_pane

0x73e3,	// (0x00044799) list_single_touch_menu_pane_ParamLimits

0x73e3,	// (0x00044799) list_single_touch_menu_pane

0x73f7,	// (0x000447ad) list_single_touch_menu_pane_t1

0x3fbc,	// (0x00041372) bg_popup_sub_pane_cp7_ParamLimits

0x3fbc,	// (0x00041372) bg_popup_sub_pane_cp7

0x7405,	// (0x000447bb) heading_sub_pane

0x740d,	// (0x000447c3) list_touch_info_pane_ParamLimits

0x740d,	// (0x000447c3) list_touch_info_pane

0x741c,	// (0x000447d2) list_single_touch_info_pane_ParamLimits

0x741c,	// (0x000447d2) list_single_touch_info_pane

0x742e,	// (0x000447e4) list_single_touch_info_pane_t1

0x743c,	// (0x000447f2) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0004ceba) list_single_touch_info_pane_t

0x511b,	// (0x000424d1) bg_popup_heading_pane_cp

0x744a,	// (0x00044800) heading_sub_pane_t1

0x575d,	// (0x00042b13) bg_popup_preview_window_pane_cp_ParamLimits

0x575d,	// (0x00042b13) bg_popup_preview_window_pane_cp

0x7405,	// (0x000447bb) heading_preview_pane

0x740d,	// (0x000447c3) list_preview_pane_ParamLimits

0x740d,	// (0x000447c3) list_preview_pane

0x7458,	// (0x0004480e) popup_preview_window_g1

0x741c,	// (0x000447d2) list_single_preview_pane_ParamLimits

0x741c,	// (0x000447d2) list_single_preview_pane

0x7460,	// (0x00044816) list_single_preview_pane_g1

0x7468,	// (0x0004481e) list_single_preview_pane_t1

0x742e,	// (0x000447e4) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0004cebf) list_single_preview_pane_t

0x7476,	// (0x0004482c) bg_popup_heading_pane_cp2_ParamLimits

0x7476,	// (0x0004482c) bg_popup_heading_pane_cp2

0x748c,	// (0x00044842) heading_preview_pane_g1

0x7494,	// (0x0004484a) heading_preview_pane_t1_ParamLimits

0x7494,	// (0x0004484a) heading_preview_pane_t1

0x400f,	// (0x000413c5) soft_indicator_pane_t1_ParamLimits

0x4659,	// (0x00041a0f) scroll_pane_ParamLimits

0x4a46,	// (0x00041dfc) scroll_sc2_left_pane

0x4a3d,	// (0x00041df3) scroll_sc2_right_pane

0x4a65,	// (0x00041e1b) scroll_bg_pane_g1_ParamLimits

0x4a7a,	// (0x00041e30) scroll_bg_pane_g2_ParamLimits

0x4a92,	// (0x00041e48) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0004cab6) scroll_bg_pane_g_ParamLimits

0x4a65,	// (0x00041e1b) scroll_handle_pane_g1_ParamLimits

0x4ab4,	// (0x00041e6a) scroll_handle_pane_g2_ParamLimits

0x4a92,	// (0x00041e48) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0004cabd) scroll_handle_pane_g_ParamLimits

0x5387,	// (0x0004273d) popup_choice_list_window_ParamLimits

0x5387,	// (0x0004273d) popup_choice_list_window

0x55a9,	// (0x0004295f) choice_list_pane

0x5639,	// (0x000429ef) cell_toolbar_pane_t1

0x5661,	// (0x00042a17) toolbar_button_pane_ParamLimits

0x65ae,	// (0x00043964) ai_gene_pane_1_t2_ParamLimits

0x65ae,	// (0x00043964) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004ccde) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004ccde) ai_gene_pane_1_t

0x74b1,	// (0x00044867) scroll_sc2_left_pane_g1

0x74b1,	// (0x00044867) scroll_sc2_right_pane_g1

0x483d,	// (0x00041bf3) bg_popup_sub_pane_cp10

0x74bb,	// (0x00044871) list_choice_list_pane

0x74d2,	// (0x00044888) list_single_choice_list_pane_ParamLimits

0x74d2,	// (0x00044888) list_single_choice_list_pane

0x4820,	// (0x00041bd6) list_single_choice_list_pane_g1

0x4828,	// (0x00041bde) list_single_choice_list_pane_t1_ParamLimits

0x4828,	// (0x00041bde) list_single_choice_list_pane_t1

0x74e5,	// (0x0004489b) choice_list_pane_g1

0x74ed,	// (0x000448a3) choice_list_pane_t1

0x3f4c,	// (0x00041302) input_focus_pane_cp11

0x49b2,	// (0x00041d68) title_pane_stacon_g2_ParamLimits

0x49b2,	// (0x00041d68) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0004ca9c) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0004ca9c) title_pane_stacon_g

0x511b,	// (0x000424d1) cursor_press_pane

0xb6b7,	// (0x00048a6d) popup_fep_hwr_window_ParamLimits

0xb6b7,	// (0x00048a6d) popup_fep_hwr_window

0x53db,	// (0x00042791) popup_fep_vkb_window_ParamLimits

0x53db,	// (0x00042791) popup_fep_vkb_window

0x74fb,	// (0x000448b1) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0004cee8) fep_vkb_side_pane_g_ParamLimits

0x97a2,	// (0x00046b58) fep_hwr_candidate_pane_ParamLimits

0x97a2,	// (0x00046b58) fep_hwr_candidate_pane

0x97cc,	// (0x00046b82) fep_hwr_side_pane_ParamLimits

0x97cc,	// (0x00046b82) fep_hwr_side_pane

0x97ec,	// (0x00046ba2) fep_hwr_top_pane_ParamLimits

0x97ec,	// (0x00046ba2) fep_hwr_top_pane

0x9804,	// (0x00046bba) fep_hwr_write_pane_ParamLimits

0x9804,	// (0x00046bba) fep_hwr_write_pane

0xfb32,	// (0x0004cee8) fep_vkb_side_pane_g

0x7515,	// (0x000448cb) fep_hwr_top_pane_g1

0x7503,	// (0x000448b9) fep_hwr_top_pane_g2

0x983e,	// (0x00046bf4) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0004cec4) fep_hwr_top_pane_g

0x9853,	// (0x00046c09) fep_hwr_top_text_pane

0x4c07,	// (0x00041fbd) fep_hwr_top_text_pane_g1

0x754b,	// (0x00044901) fep_hwr_top_text_pane_t1

0x9949,	// (0x00046cff) fep_hwr_candidate_pane_g1

0x7758,	// (0x00044b0e) fep_vkb_keypad_pane_g3_ParamLimits

0x7758,	// (0x00044b0e) fep_vkb_keypad_pane_g3

0x7780,	// (0x00044b36) fep_vkb_keypad_pane_g4_ParamLimits

0x7780,	// (0x00044b36) fep_vkb_keypad_pane_g4

0x77ef,	// (0x00044ba5) fep_vkb_bottom_pane_g2_ParamLimits

0x77ef,	// (0x00044ba5) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0004ceef) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0004ceef) fep_vkb_bottom_pane_g

0x74b1,	// (0x00044867) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0004cef9) cell_vkb_side_pane_g

0x7833,	// (0x00044be9) cell_vkb_side_pane_t1

0x7841,	// (0x00044bf7) cell_vkb_side_pane_t1_copy1

0x74b1,	// (0x00044867) bg_fep_vkb_candidate_pane_g2

0x791d,	// (0x00044cd3) cell_vkb_candidate_pane_ParamLimits

0x7559,	// (0x0004490f) aid_size_cell_vkb_ParamLimits

0x7559,	// (0x0004490f) aid_size_cell_vkb

0x791d,	// (0x00044cd3) cell_vkb_candidate_pane

0x9970,	// (0x00046d26) bg_popup_fep_shadow_pane_g1

0x75d5,	// (0x0004498b) fep_vkb_bottom_pane_ParamLimits

0x75d5,	// (0x0004498b) fep_vkb_bottom_pane

0x7612,	// (0x000449c8) fep_vkb_candidate_pane_ParamLimits

0x7612,	// (0x000449c8) fep_vkb_candidate_pane

0x762e,	// (0x000449e4) fep_vkb_keypad_pane_ParamLimits

0x762e,	// (0x000449e4) fep_vkb_keypad_pane

0x7674,	// (0x00044a2a) fep_vkb_side_pane_ParamLimits

0x7674,	// (0x00044a2a) fep_vkb_side_pane

0x76b0,	// (0x00044a66) fep_vkb_top_pane_ParamLimits

0x76b0,	// (0x00044a66) fep_vkb_top_pane

0x76ec,	// (0x00044aa2) fep_vkb_top_pane_g1_ParamLimits

0x76ec,	// (0x00044aa2) fep_vkb_top_pane_g1

0x76fb,	// (0x00044ab1) fep_vkb_top_pane_g2_ParamLimits

0x76fb,	// (0x00044ab1) fep_vkb_top_pane_g2

0x770a,	// (0x00044ac0) fep_vkb_top_pane_g3_ParamLimits

0x770a,	// (0x00044ac0) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0004cedf) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0004cedf) fep_vkb_top_pane_g

0x7728,	// (0x00044ade) fep_vkb_top_text_pane_ParamLimits

0x7728,	// (0x00044ade) fep_vkb_top_text_pane

0xc621,	// (0x000499d7) fep_vkb_side_pane_g1_ParamLimits

0xc621,	// (0x000499d7) fep_vkb_side_pane_g1

0x7747,	// (0x00044afd) grid_vkb_side_pane_ParamLimits

0x7747,	// (0x00044afd) grid_vkb_side_pane

0x9978,	// (0x00046d2e) bg_popup_fep_shadow_pane_g2

0x9981,	// (0x00046d37) bg_popup_fep_shadow_pane_g3

0x9989,	// (0x00046d3f) bg_popup_fep_shadow_pane_g4

0x9992,	// (0x00046d48) bg_popup_fep_shadow_pane_g5

0x999c,	// (0x00046d52) bg_popup_fep_shadow_pane_g6

0x99a4,	// (0x00046d5a) bg_popup_fep_shadow_pane_g7

0x4765,	// (0x00041b1b) bg_popup_fep_shadow_pane_g8

0x779e,	// (0x00044b54) grid_vkb_keypad_number_pane_ParamLimits

0x779e,	// (0x00044b54) grid_vkb_keypad_number_pane

0x77ae,	// (0x00044b64) grid_vkb_keypad_pane_ParamLimits

0x77ae,	// (0x00044b64) grid_vkb_keypad_pane

0x77d4,	// (0x00044b8a) fep_vkb_bottom_pane_g1_ParamLimits

0x77d4,	// (0x00044b8a) fep_vkb_bottom_pane_g1

0x77fd,	// (0x00044bb3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x77fd,	// (0x00044bb3) grid_vkb_keypad_bottom_left_pane

0x7812,	// (0x00044bc8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7812,	// (0x00044bc8) grid_vkb_keypad_bottom_right_pane

0x7827,	// (0x00044bdd) fep_vkb_top_text_pane_g1

0xc66b,	// (0x00049a21) fep_vkb_top_text_pane_t1

0xc680,	// (0x00049a36) cell_vkb_side_pane_ParamLimits

0xc680,	// (0x00049a36) cell_vkb_side_pane

0x74b1,	// (0x00044867) cell_vkb_side_pane_g1

0x784f,	// (0x00044c05) cell_vkb_keypad_pane_ParamLimits

0x784f,	// (0x00044c05) cell_vkb_keypad_pane

0x78ca,	// (0x00044c80) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0004cf0c) bg_popup_fep_shadow_pane_g

0x99b6,	// (0x00046d6c) cell_hwr_side_pane_g1

0x99b6,	// (0x00046d6c) cell_hwr_side_pane_g2

0x78d4,	// (0x00044c8a) cell_vkb_keypad_pane_t1

0xc6a3,	// (0x00049a59) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6a3,	// (0x00049a59) cell_vkb_keypad_bottom_left_pane

0xc6c0,	// (0x00049a76) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6c0,	// (0x00049a76) cell_vkb_keypad_bottom_right_pane

0x74b1,	// (0x00044867) cell_vkb_keypad_bottom_left_pane_g1

0x74b1,	// (0x00044867) cell_vkb_keypad_bottom_right_pane_g1

0x78e2,	// (0x00044c98) cell_vkb_keypad_number_pane_ParamLimits

0x78e2,	// (0x00044c98) cell_vkb_keypad_number_pane

0x7901,	// (0x00044cb7) cell_vkb_keypad_number_pane_g1

0x790b,	// (0x00044cc1) cell_vkb_keypad_number_pane_g2

0x7914,	// (0x00044cca) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0004cefe) cell_vkb_keypad_number_pane_g

0x78d4,	// (0x00044c8a) cell_vkb_keypad_number_pane_t1

0x793a,	// (0x00044cf0) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0004cf1f) cell_hwr_side_pane_g

0x7953,	// (0x00044d09) cell_hwr_side_pane_t1

0x99c0,	// (0x00046d76) cell_hwr_side_pane_t1_copy1

0x99ce,	// (0x00046d84) cell_hwr_candidate_pane_g1

0x99fd,	// (0x00046db3) cell_hwr_candidate_pane_t1

0x74b1,	// (0x00044867) cell_vkb_candidate_pane_g2

0x7997,	// (0x00044d4d) cell_vkb_candidate_pane_t1

0x9769,	// (0x00046b1f) bg_popup_fep_shadow_pane_ParamLimits

0x9769,	// (0x00046b1f) bg_popup_fep_shadow_pane

0x981e,	// (0x00046bd4) bg_fep_hwr_top_pane_g4

0x7527,	// (0x000448dd) bg_hwr_side_pane_g1_ParamLimits

0x7527,	// (0x000448dd) bg_hwr_side_pane_g1

0x988f,	// (0x00046c45) cell_hwr_side_pane_ParamLimits

0x988f,	// (0x00046c45) cell_hwr_side_pane

0x98ca,	// (0x00046c80) fep_hwr_write_pane_g1_ParamLimits

0x98ca,	// (0x00046c80) fep_hwr_write_pane_g1

0x98d7,	// (0x00046c8d) fep_hwr_write_pane_g2_ParamLimits

0x98d7,	// (0x00046c8d) fep_hwr_write_pane_g2

0x98e4,	// (0x00046c9a) fep_hwr_write_pane_g3_ParamLimits

0x98e4,	// (0x00046c9a) fep_hwr_write_pane_g3

0x98f2,	// (0x00046ca8) fep_hwr_write_pane_g4_ParamLimits

0x98f2,	// (0x00046ca8) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0004cecb) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0004cecb) fep_hwr_write_pane_g

0x981e,	// (0x00046bd4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x981e,	// (0x00046bd4) bg_fep_hwr_candidate_pane_g2

0x9907,	// (0x00046cbd) cell_hwr_candidate_pane_ParamLimits

0x9907,	// (0x00046cbd) cell_hwr_candidate_pane

0x9949,	// (0x00046cff) fep_hwr_candidate_pane_g1_ParamLimits

0x7587,	// (0x0004493d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7587,	// (0x0004493d) bg_popup_fep_shadow_pane_cp2

0x771a,	// (0x00044ad0) fep_vkb_top_pane_g4_ParamLimits

0x771a,	// (0x00044ad0) fep_vkb_top_pane_g4

0x7739,	// (0x00044aef) fep_vkb_side_pane_g2_ParamLimits

0x7739,	// (0x00044aef) fep_vkb_side_pane_g2

0x8c7a,	// (0x00046030) list_setting_pane_t4_ParamLimits

0x8c7a,	// (0x00046030) list_setting_pane_t4

0xa864,	// (0x00047c1a) list_setting_number_pane_t5_ParamLimits

0xa864,	// (0x00047c1a) list_setting_number_pane_t5

0xac2d,	// (0x00047fe3) list_double_heading_pane_cp2_ParamLimits

0xac2d,	// (0x00047fe3) list_double_heading_pane_cp2

0x468d,	// (0x00041a43) list_double_heading_pane_g1_cp2_ParamLimits

0x468d,	// (0x00041a43) list_double_heading_pane_g1_cp2

0x470c,	// (0x00041ac2) list_double_heading_pane_g2_cp2_ParamLimits

0x470c,	// (0x00041ac2) list_double_heading_pane_g2_cp2

0x79a5,	// (0x00044d5b) list_double_heading_pane_t1_cp2_ParamLimits

0x79a5,	// (0x00044d5b) list_double_heading_pane_t1_cp2

0x79bb,	// (0x00044d71) list_double_heading_pane_t2_cp2_ParamLimits

0x79bb,	// (0x00044d71) list_double_heading_pane_t2_cp2

0x3f44,	// (0x000412fa) aid_value_unit2

0x872c,	// (0x00045ae2) popup_preview_fixed_window

0x41b9,	// (0x0004156f) bg_popup_preview_window_pane_cp02

0x79cd,	// (0x00044d83) list_preview_fixed_pane

0x7a13,	// (0x00044dc9) list_empty_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_empty_pane_fp

0x7a13,	// (0x00044dc9) list_single_cale_day_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_single_cale_day_pane_fp

0x7a13,	// (0x00044dc9) list_single_graphic_heading_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_single_graphic_heading_pane_fp

0x7a13,	// (0x00044dc9) list_single_graphic_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_single_graphic_pane_fp

0x7a13,	// (0x00044dc9) list_single_heading_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_single_heading_pane_fp

0x7a13,	// (0x00044dc9) list_single_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_single_pane_fp

0x7a2a,	// (0x00044de0) list_single_pane_fp_g1_ParamLimits

0x7a2a,	// (0x00044de0) list_single_pane_fp_g1

0xa7b7,	// (0x00047b6d) list_single_pane_fp_g2_ParamLimits

0xa7b7,	// (0x00047b6d) list_single_pane_fp_g2

0xb2b8,	// (0x0004866e) list_single_pane_fp_g3_ParamLimits

0xb2b8,	// (0x0004866e) list_single_pane_fp_g3

0x7a36,	// (0x00044dec) list_single_pane_fp_g4_ParamLimits

0x7a36,	// (0x00044dec) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0004cf32) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0004cf32) list_single_pane_fp_g

0xb2cc,	// (0x00048682) list_single_pane_fp_t1_ParamLimits

0xb2cc,	// (0x00048682) list_single_pane_fp_t1

0xb2e3,	// (0x00048699) list_single_graphic_pane_fp_g1_ParamLimits

0xb2e3,	// (0x00048699) list_single_graphic_pane_fp_g1

0x7a2a,	// (0x00044de0) list_single_graphic_pane_fp_g2_ParamLimits

0x7a2a,	// (0x00044de0) list_single_graphic_pane_fp_g2

0xa7b7,	// (0x00047b6d) list_single_graphic_pane_fp_g3_ParamLimits

0xa7b7,	// (0x00047b6d) list_single_graphic_pane_fp_g3

0xb2b8,	// (0x0004866e) list_single_graphic_pane_fp_g4_ParamLimits

0xb2b8,	// (0x0004866e) list_single_graphic_pane_fp_g4

0x7a36,	// (0x00044dec) list_single_graphic_pane_fp_g5_ParamLimits

0x7a36,	// (0x00044dec) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0004cf3b) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0004cf3b) list_single_graphic_pane_fp_g

0xb2ef,	// (0x000486a5) list_single_graphic_pane_fp_t1_ParamLimits

0xb2ef,	// (0x000486a5) list_single_graphic_pane_fp_t1

0xb2e3,	// (0x00048699) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb2e3,	// (0x00048699) list_single_graphic_heading_pane_fp_g1

0x7a2a,	// (0x00044de0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a2a,	// (0x00044de0) list_single_graphic_heading_pane_fp_g2

0xa7b7,	// (0x00047b6d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xa7b7,	// (0x00047b6d) list_single_graphic_heading_pane_fp_g3

0xb2b8,	// (0x0004866e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb2b8,	// (0x0004866e) list_single_graphic_heading_pane_fp_g4

0x7a36,	// (0x00044dec) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a36,	// (0x00044dec) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0004cf3b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0004cf3b) list_single_graphic_heading_pane_fp_g

0xb305,	// (0x000486bb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb305,	// (0x000486bb) list_single_graphic_heading_pane_fp_t1

0xb31b,	// (0x000486d1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb31b,	// (0x000486d1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0004cf46) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0004cf46) list_single_graphic_heading_pane_fp_t

0xb32d,	// (0x000486e3) list_single_cale_day_pane_fp_g1_ParamLimits

0xb32d,	// (0x000486e3) list_single_cale_day_pane_fp_g1

0x7a42,	// (0x00044df8) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a42,	// (0x00044df8) list_single_cale_day_pane_fp_g2

0xb365,	// (0x0004871b) list_single_cale_day_pane_fp_g3_ParamLimits

0xb365,	// (0x0004871b) list_single_cale_day_pane_fp_g3

0xb38d,	// (0x00048743) list_single_cale_day_pane_fp_g4_ParamLimits

0xb38d,	// (0x00048743) list_single_cale_day_pane_fp_g4

0xb3b1,	// (0x00048767) list_single_cale_day_pane_fp_g5_ParamLimits

0xb3b1,	// (0x00048767) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0004cf4b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0004cf4b) list_single_cale_day_pane_fp_g

0xb3d5,	// (0x0004878b) list_single_cale_day_pane_fp_t1_ParamLimits

0xb3d5,	// (0x0004878b) list_single_cale_day_pane_fp_t1

0xb3fb,	// (0x000487b1) list_single_cale_day_pane_fp_t2_ParamLimits

0xb3fb,	// (0x000487b1) list_single_cale_day_pane_fp_t2

0xb414,	// (0x000487ca) list_single_cale_day_pane_fp_t3_ParamLimits

0xb414,	// (0x000487ca) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0004cf56) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0004cf56) list_single_cale_day_pane_fp_t

0x7a2a,	// (0x00044de0) list_empty_pane_fp_g1_ParamLimits

0x7a2a,	// (0x00044de0) list_empty_pane_fp_g1

0xb42d,	// (0x000487e3) list_empty_pane_fp_t1

0xb43b,	// (0x000487f1) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0004cf5d) list_empty_pane_fp_t

0x7a2a,	// (0x00044de0) list_single_heading_pane_fp_g1_ParamLimits

0x7a2a,	// (0x00044de0) list_single_heading_pane_fp_g1

0xa7b7,	// (0x00047b6d) list_single_heading_pane_fp_g2_ParamLimits

0xa7b7,	// (0x00047b6d) list_single_heading_pane_fp_g2

0xb2b8,	// (0x0004866e) list_single_heading_pane_fp_g3_ParamLimits

0xb2b8,	// (0x0004866e) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0004cf62) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0004cf62) list_single_heading_pane_fp_g

0xb449,	// (0x000487ff) list_single_heading_pane_fp_t1_ParamLimits

0xb449,	// (0x000487ff) list_single_heading_pane_fp_t1

0xb45b,	// (0x00048811) list_single_heading_pane_fp_t2_ParamLimits

0xb45b,	// (0x00048811) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0004cf69) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0004cf69) list_single_heading_pane_fp_t

0x4849,	// (0x00041bff) aid_size_cell_fast

0x419c,	// (0x00041552) soft_indicator_pane_cp1_t1

0x4886,	// (0x00041c3c) cell_app_pane_cp2_ParamLimits

0x4886,	// (0x00041c3c) cell_app_pane_cp2

0x978b,	// (0x00046b41) fep_hwr_candidate_drop_down_list_pane

0x9963,	// (0x00046d19) fep_hwr_candidate_pane_g3_ParamLimits

0x9963,	// (0x00046d19) fep_hwr_candidate_pane_g3

0x3b91,	// (0x00040f47) fep_hwr_candidate_pane_g4_ParamLimits

0x3b91,	// (0x00040f47) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0004ced8) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0004ced8) fep_hwr_candidate_pane_g

0x7601,	// (0x000449b7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7601,	// (0x000449b7) fep_vkb_candidate_drop_down_list_pane

0x7942,	// (0x00044cf8) fep_vkb_candidate_pane_g3

0x794a,	// (0x00044d00) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0004cf05) fep_vkb_candidate_pane_g

0x99ce,	// (0x00046d84) cell_hwr_candidate_pane_g1_ParamLimits

0x99dc,	// (0x00046d92) cell_hwr_candidate_pane_g3_ParamLimits

0x99dc,	// (0x00046d92) cell_hwr_candidate_pane_g3

0xdc02,	// (0x0004afb8) cell_hwr_candidate_pane_g4_ParamLimits

0xdc02,	// (0x0004afb8) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0004cf24) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0004cf24) cell_hwr_candidate_pane_g

0x7961,	// (0x00044d17) cell_vkb_candidate_pane_g3_ParamLimits

0x7961,	// (0x00044d17) cell_vkb_candidate_pane_g3

0x797c,	// (0x00044d32) cell_vkb_candidate_pane_g4_ParamLimits

0x797c,	// (0x00044d32) cell_vkb_candidate_pane_g4

0xc6f9,	// (0x00049aaf) cell_app_pane_cp2_g1_ParamLimits

0xc6f9,	// (0x00049aaf) cell_app_pane_cp2_g1

0xc717,	// (0x00049acd) cell_app_pane_cp2_g2_ParamLimits

0xc717,	// (0x00049acd) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0004cf6e) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0004cf6e) cell_app_pane_cp2_g

0xc723,	// (0x00049ad9) cell_app_pane_cp2_t1_ParamLimits

0xc723,	// (0x00049ad9) cell_app_pane_cp2_t1

0x46f2,	// (0x00041aa8) grid_highlight_pane_cp1_ParamLimits

0x46f2,	// (0x00041aa8) grid_highlight_pane_cp1

0x9a1b,	// (0x00046dd1) cell_hwr_candidate_pane_cp1_ParamLimits

0x9a1b,	// (0x00046dd1) cell_hwr_candidate_pane_cp1

0x99ce,	// (0x00046d84) fep_hwr_candidate_drop_down_list_pane_g1

0x9a3a,	// (0x00046df0) fep_hwr_candidate_drop_down_list_pane_g2

0x9a47,	// (0x00046dfd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0004cf73) fep_hwr_candidate_drop_down_list_pane_g

0x9a54,	// (0x00046e0a) fep_hwr_candidate_drop_down_list_scroll_pane

0x9a5d,	// (0x00046e13) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9a5d,	// (0x00046e13) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9a6a,	// (0x00046e20) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9a6a,	// (0x00046e20) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9a77,	// (0x00046e2d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9a77,	// (0x00046e2d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9a84,	// (0x00046e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9a84,	// (0x00046e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9a9f,	// (0x00046e55) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9a9f,	// (0x00046e55) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9aba,	// (0x00046e70) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9aba,	// (0x00046e70) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9ad5,	// (0x00046e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9ad5,	// (0x00046e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9af0,	// (0x00046ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9af0,	// (0x00046ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0004cf7a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0004cf7a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc735,	// (0x00049aeb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc735,	// (0x00049aeb) cell_vkb_candidate_pane_cp1

0x771a,	// (0x00044ad0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x771a,	// (0x00044ad0) fep_vkb_candidate_drop_down_list_pane_g1

0xc755,	// (0x00049b0b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc755,	// (0x00049b0b) fep_vkb_candidate_drop_down_list_pane_g2

0xc762,	// (0x00049b18) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc762,	// (0x00049b18) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0004cf8b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0004cf8b) fep_vkb_candidate_drop_down_list_pane_g

0xc76f,	// (0x00049b25) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc76f,	// (0x00049b25) fep_vkb_candidate_drop_down_list_scroll_pane

0xc77c,	// (0x00049b32) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc77c,	// (0x00049b32) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc789,	// (0x00049b3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc789,	// (0x00049b3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc795,	// (0x00049b4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc795,	// (0x00049b4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7a1,	// (0x00049b57) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7a1,	// (0x00049b57) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7c2,	// (0x00049b78) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7c2,	// (0x00049b78) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7e3,	// (0x00049b99) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7e3,	// (0x00049b99) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc804,	// (0x00049bba) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc804,	// (0x00049bba) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc825,	// (0x00049bdb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc825,	// (0x00049bdb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0004cf92) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0004cf92) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa464,	// (0x0004781a) title_pane_g1_ParamLimits

0xa471,	// (0x00047827) title_pane_g2_ParamLimits

0xf566,	// (0x0004c91c) title_pane_g_ParamLimits

0x4bff,	// (0x00041fb5) aid_call2_pane

0x4bf7,	// (0x00041fad) aid_call_pane

0x4c07,	// (0x00041fbd) popup_clock_analogue_window_g1

0x4c07,	// (0x00041fbd) popup_clock_analogue_window_g2

0x8e85,	// (0x0004623b) popup_clock_analogue_window_g3

0x8e8e,	// (0x00046244) popup_clock_analogue_window_g4

0x3f56,	// (0x0004130c) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0004cacb) popup_clock_analogue_window_g

0x8e96,	// (0x0004624c) popup_clock_analogue_window_t1

0x8ea4,	// (0x0004625a) clock_digital_number_pane_ParamLimits

0x8ea4,	// (0x0004625a) clock_digital_number_pane

0x8eb0,	// (0x00046266) clock_digital_number_pane_cp02_ParamLimits

0x8eb0,	// (0x00046266) clock_digital_number_pane_cp02

0x8ebc,	// (0x00046272) clock_digital_number_pane_cp03_ParamLimits

0x8ebc,	// (0x00046272) clock_digital_number_pane_cp03

0x8ec8,	// (0x0004627e) clock_digital_number_pane_cp04_ParamLimits

0x8ec8,	// (0x0004627e) clock_digital_number_pane_cp04

0x8ed4,	// (0x0004628a) clock_digital_separator_pane_ParamLimits

0x8ed4,	// (0x0004628a) clock_digital_separator_pane

0x8ee0,	// (0x00046296) popup_clock_digital_window_t1_ParamLimits

0x8ee0,	// (0x00046296) popup_clock_digital_window_t1

0x3f56,	// (0x0004130c) clock_digital_number_pane_g1

0x3f56,	// (0x0004130c) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0004cad6) clock_digital_number_pane_g

0x3f56,	// (0x0004130c) clock_digital_separator_pane_g1

0x3f56,	// (0x0004130c) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0004cad6) clock_digital_separator_pane_g

0xbb3c,	// (0x00048ef2) aid_fill_nsta_ParamLimits

0xbc05,	// (0x00048fbb) indicator_nsta_pane_ParamLimits

0x5552,	// (0x00042908) popup_clock_analogue_window

0x5552,	// (0x00042908) popup_clock_digital_window

0x3fbc,	// (0x00041372) grid_indicator_nsta_pane_ParamLimits

0x713a,	// (0x000444f0) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0004ce6d) clock_nsta_pane_t

0x8e49,	// (0x000461ff) aid_size_max_handle

0x8e53,	// (0x00046209) aid_size_min_handle

0x511b,	// (0x000424d1) editor_scroll_pane

0xc840,	// (0x00049bf6) ex_editor_pane

0x4805,	// (0x00041bbb) scroll_pane_cp13

0x4685,	// (0x00041a3b) scroll_pane_cp14

0x4c36,	// (0x00041fec) scroll_pane_cp36

0xac3f,	// (0x00047ff5) list_single_graphic_hl_pane_cp2_ParamLimits

0xac3f,	// (0x00047ff5) list_single_graphic_hl_pane_cp2

0xb02b,	// (0x000483e1) list_single_graphic_hl_pane_ParamLimits

0xb02b,	// (0x000483e1) list_single_graphic_hl_pane

0xb471,	// (0x00048827) aid_size_min_hl_cp1

0xc848,	// (0x00049bfe) list_highlight_pane_cp34_ParamLimits

0xc848,	// (0x00049bfe) list_highlight_pane_cp34

0xc859,	// (0x00049c0f) list_single_graphic_hl_pane_g1_ParamLimits

0xc859,	// (0x00049c0f) list_single_graphic_hl_pane_g1

0xb47a,	// (0x00048830) list_single_graphic_hl_pane_g2_ParamLimits

0xb47a,	// (0x00048830) list_single_graphic_hl_pane_g2

0xb47a,	// (0x00048830) list_single_graphic_hl_pane_g3_ParamLimits

0xb47a,	// (0x00048830) list_single_graphic_hl_pane_g3

0x508c,	// (0x00042442) list_single_graphic_hl_pane_g4_ParamLimits

0x508c,	// (0x00042442) list_single_graphic_hl_pane_g4

0xb486,	// (0x0004883c) list_single_graphic_hl_pane_g5_ParamLimits

0xb486,	// (0x0004883c) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0004cfa3) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0004cfa3) list_single_graphic_hl_pane_g

0xb49a,	// (0x00048850) list_single_graphic_hl_pane_t1_ParamLimits

0xb49a,	// (0x00048850) list_single_graphic_hl_pane_t1

0xc866,	// (0x00049c1c) aid_size_min_hl_cp2

0xc86f,	// (0x00049c25) list_highlight_pane_cp34_cp2_ParamLimits

0xc86f,	// (0x00049c25) list_highlight_pane_cp34_cp2

0xc859,	// (0x00049c0f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc859,	// (0x00049c0f) list_single_graphic_hl_pane_g1_cp2

0xc87c,	// (0x00049c32) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc87c,	// (0x00049c32) list_single_graphic_hl_pane_g2_cp2

0xc888,	// (0x00049c3e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc888,	// (0x00049c3e) list_single_graphic_hl_pane_g3_cp2

0x5052,	// (0x00042408) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5052,	// (0x00042408) list_single_graphic_hl_pane_g4_cp2

0xc896,	// (0x00049c4c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc896,	// (0x00049c4c) list_single_graphic_hl_pane_g5_cp2

0x9190,	// (0x00046546) control_pane_g4_ParamLimits

0x9190,	// (0x00046546) control_pane_g4

0x483d,	// (0x00041bf3) bg_popup_sub_pane_cp10_ParamLimits

0x74bb,	// (0x00044871) list_choice_list_pane_ParamLimits

0x74ca,	// (0x00044880) scroll_pane_cp23

0x41b9,	// (0x0004156f) bg_popup_preview_window_pane_cp02_ParamLimits

0x79cd,	// (0x00044d83) list_preview_fixed_pane_ParamLimits

0x79e3,	// (0x00044d99) list_preview_fixed_pane_cp_ParamLimits

0x79e3,	// (0x00044d99) list_preview_fixed_pane_cp

0x79ef,	// (0x00044da5) popup_preview_fixed_window_g1_ParamLimits

0x79ef,	// (0x00044da5) popup_preview_fixed_window_g1

0x79fb,	// (0x00044db1) popup_preview_fixed_window_g2_ParamLimits

0x79fb,	// (0x00044db1) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0004cf2b) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0004cf2b) popup_preview_fixed_window_g

0x8dbd,	// (0x00046173) aid_navi_side_left_pane_ParamLimits

0x8dd2,	// (0x00046188) aid_navi_side_right_pane_ParamLimits

0x8dea,	// (0x000461a0) navi_icon_pane_stacon_ParamLimits

0x8dfe,	// (0x000461b4) navi_navi_pane_stacon_ParamLimits

0x8dea,	// (0x000461a0) navi_text_pane_stacon_ParamLimits

0x3f4c,	// (0x00041302) main_text_info_pane

0xc8c0,	// (0x00049c76) listscroll_text_info_pane

0xc8c8,	// (0x00049c7e) list_text_info_pane_ParamLimits

0xc8c8,	// (0x00049c7e) list_text_info_pane

0xc8d7,	// (0x00049c8d) scroll_pane_cp24_ParamLimits

0xc8d7,	// (0x00049c8d) scroll_pane_cp24

0xc8f5,	// (0x00049cab) list_text_info_pane_t1_ParamLimits

0xc8f5,	// (0x00049cab) list_text_info_pane_t1

0xb635,	// (0x000489eb) popup_fast_swap2_window_ParamLimits

0xb635,	// (0x000489eb) popup_fast_swap2_window

0xc92e,	// (0x00049ce4) aid_size_cell_fast2

0x3f4c,	// (0x00041302) bg_popup_window_pane_cp17

0x5a04,	// (0x00042dba) heading_pane_cp2

0x440a,	// (0x000417c0) listscroll_fast2_pane

0xc938,	// (0x00049cee) grid_fast2_pane

0xc942,	// (0x00049cf8) listscroll_fast2_pane_g1

0xc94a,	// (0x00049d00) listscroll_fast2_pane_g2

0x0001,

0x01e6,	// (0x0003d59c) listscroll_fast2_pane_g

0x4805,	// (0x00041bbb) scroll_pane_cp26

0xc954,	// (0x00049d0a) cell_fast2_pane_ParamLimits

0xc954,	// (0x00049d0a) cell_fast2_pane

0xc969,	// (0x00049d1f) cell_fast2_pane_g1

0xc972,	// (0x00049d28) cell_fast2_pane_g2

0xc97b,	// (0x00049d31) cell_fast2_pane_g3

0x0002,

0x01eb,	// (0x0003d5a1) cell_fast2_pane_g

0x444c,	// (0x00041802) grid_highlight_pane_cp9

0x4461,	// (0x00041817) main_eswt_pane_ParamLimits

0x4461,	// (0x00041817) main_eswt_pane

0xc8ec,	// (0x00049ca2) list_single_text_info_pane

0xc983,	// (0x00049d39) eswt_ctrl_button_pane

0xc983,	// (0x00049d39) eswt_ctrl_canvas_pane

0xc98b,	// (0x00049d41) eswt_ctrl_combo_pane

0xc983,	// (0x00049d39) eswt_ctrl_default_pane

0xc983,	// (0x00049d39) eswt_ctrl_label_pane

0xc993,	// (0x00049d49) eswt_ctrl_wait_pane

0xc99b,	// (0x00049d51) eswt_shell_pane

0x3f4c,	// (0x00041302) listscroll_eswt_app_pane

0xc9bb,	// (0x00049d71) popup_eswt_tasktip_window_ParamLimits

0xc9bb,	// (0x00049d71) popup_eswt_tasktip_window

0x575d,	// (0x00042b13) bg_popup_window_pane_cp18

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_ParamLimits

0xc9cc,	// (0x00049d82) eswt_control_pane_g1

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_ParamLimits

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_ParamLimits

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_ParamLimits

0xc9f3,	// (0x00049da9) eswt_control_pane_g4

0x0003,

0x01f2,	// (0x0003d5a8) eswt_control_pane_g_ParamLimits

0x01f2,	// (0x0003d5a8) eswt_control_pane_g

0x46f2,	// (0x00041aa8) bg_button_pane_ParamLimits

0x46f2,	// (0x00041aa8) bg_button_pane

0x4461,	// (0x00041817) common_borders_pane_copy2_ParamLimits

0x4461,	// (0x00041817) common_borders_pane_copy2

0xca00,	// (0x00049db6) control_button_pane_g1_ParamLimits

0xca00,	// (0x00049db6) control_button_pane_g1

0xca0c,	// (0x00049dc2) control_button_pane_g2_ParamLimits

0xca0c,	// (0x00049dc2) control_button_pane_g2

0xca18,	// (0x00049dce) control_button_pane_g3_ParamLimits

0xca18,	// (0x00049dce) control_button_pane_g3

0x0002,

0x01fb,	// (0x0003d5b1) control_button_pane_g_ParamLimits

0x01fb,	// (0x0003d5b1) control_button_pane_g

0xca2c,	// (0x00049de2) control_button_pane_t1

0xca3a,	// (0x00049df0) control_button_pane_t2

0x0001,

0x0202,	// (0x0003d5b8) control_button_pane_t

0x566d,	// (0x00042a23) bg_button_pane_g1

0x5675,	// (0x00042a2b) bg_button_pane_g2

0x567d,	// (0x00042a33) bg_button_pane_g3

0x5685,	// (0x00042a3b) bg_button_pane_g4

0x568d,	// (0x00042a43) bg_button_pane_g5

0x5695,	// (0x00042a4b) bg_button_pane_g6

0x569d,	// (0x00042a53) bg_button_pane_g7

0x56a5,	// (0x00042a5b) bg_button_pane_g8

0x56ad,	// (0x00042a63) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004cc32) bg_button_pane_g

0x7476,	// (0x0004482c) common_borders_pane_ParamLimits

0x7476,	// (0x0004482c) common_borders_pane

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy1_ParamLimits

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy1

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy1_ParamLimits

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy1

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy1_ParamLimits

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy1

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy1_ParamLimits

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy1

0x74b1,	// (0x00044867) bg_eswt_ctrl_canvas_pane_g1

0x7476,	// (0x0004482c) common_borders_pane_cp2_ParamLimits

0x7476,	// (0x0004482c) common_borders_pane_cp2

0x7476,	// (0x0004482c) common_borders_pane_cp3_ParamLimits

0x7476,	// (0x0004482c) common_borders_pane_cp3

0xca48,	// (0x00049dfe) separator_horizontal_pane

0xca50,	// (0x00049e06) separator_vertical_pane

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy2_ParamLimits

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy2

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy2_ParamLimits

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy2

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy2_ParamLimits

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy2

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy2_ParamLimits

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy2

0x3f4c,	// (0x00041302) common_borders_pane_cp4

0xca59,	// (0x00049e0f) separator_horizontal_pane_g1

0xca62,	// (0x00049e18) separator_horizontal_pane_g2

0xca6b,	// (0x00049e21) separator_horizontal_pane_g3

0x0002,

0x0207,	// (0x0003d5bd) separator_horizontal_pane_g

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy3_ParamLimits

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy3

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy3_ParamLimits

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy3

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy3_ParamLimits

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy3

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy3_ParamLimits

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy3

0x3f4c,	// (0x00041302) common_borders_pane_cp5

0xca74,	// (0x00049e2a) separator_vertical_pane_g1

0xca7d,	// (0x00049e33) separator_vertical_pane_g2

0xca86,	// (0x00049e3c) separator_vertical_pane_g3

0x0002,

0x020e,	// (0x0003d5c4) separator_vertical_pane_g

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy4_ParamLimits

0xc9cc,	// (0x00049d82) eswt_control_pane_g1_copy4

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy4_ParamLimits

0xc9d9,	// (0x00049d8f) eswt_control_pane_g2_copy4

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy4_ParamLimits

0xc9e6,	// (0x00049d9c) eswt_control_pane_g3_copy4

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy4_ParamLimits

0xc9f3,	// (0x00049da9) eswt_control_pane_g4_copy4

0xca8f,	// (0x00049e45) eswt_ctrl_combo_button_pane

0xca97,	// (0x00049e4d) eswt_ctrl_input_pane

0xca9f,	// (0x00049e55) popup_choice_list_window_cp70

0xcaa7,	// (0x00049e5d) eswt_ctrl_input_pane_t1

0x3f4c,	// (0x00041302) input_focus_pane_cp70

0x7476,	// (0x0004482c) bg_button_pane_cp70_ParamLimits

0x7476,	// (0x0004482c) bg_button_pane_cp70

0xcab5,	// (0x00049e6b) eswt_ctrl_combo_button_pane_g1

0xcabd,	// (0x00049e73) wait_bar_pane_cp70

0x575d,	// (0x00042b13) bg_popup_window_pane_cp70_ParamLimits

0x575d,	// (0x00042b13) bg_popup_window_pane_cp70

0xcac5,	// (0x00049e7b) popup_eswt_tasktip_window_t1

0xcadb,	// (0x00049e91) wait_bar_pane_cp71_ParamLimits

0xcadb,	// (0x00049e91) wait_bar_pane_cp71

0xcae7,	// (0x00049e9d) grid_eswt_app_pane

0x4a46,	// (0x00041dfc) scroll_pane_cp70

0xcaf0,	// (0x00049ea6) cell_eswt_app_pane_ParamLimits

0xcaf0,	// (0x00049ea6) cell_eswt_app_pane

0xcb24,	// (0x00049eda) cell_eswt_app_pane_g1_ParamLimits

0xcb24,	// (0x00049eda) cell_eswt_app_pane_g1

0xcb53,	// (0x00049f09) cell_eswt_app_pane_g2_ParamLimits

0xcb53,	// (0x00049f09) cell_eswt_app_pane_g2

0x0001,

0x0215,	// (0x0003d5cb) cell_eswt_app_pane_g_ParamLimits

0x0215,	// (0x0003d5cb) cell_eswt_app_pane_g

0xcb7c,	// (0x00049f32) cell_eswt_app_pane_t1_ParamLimits

0xcb7c,	// (0x00049f32) cell_eswt_app_pane_t1

0xcbae,	// (0x00049f64) grid_highlight_pane_cp70_ParamLimits

0xcbae,	// (0x00049f64) grid_highlight_pane_cp70

0x4fee,	// (0x000423a4) set_content_pane_g1

0x5304,	// (0x000426ba) status_small_volume_pane

0x9b0b,	// (0x00046ec1) status_small_volume_pane_g1

0x9b13,	// (0x00046ec9) volume_small2_pane

0x9b1c,	// (0x00046ed2) volume_small2_pane_g1

0x9b25,	// (0x00046edb) volume_small2_pane_g2

0x9b2e,	// (0x00046ee4) volume_small2_pane_g3

0x9b37,	// (0x00046eed) volume_small2_pane_g4

0x9b40,	// (0x00046ef6) volume_small2_pane_g5

0x9b49,	// (0x00046eff) volume_small2_pane_g6

0x9b52,	// (0x00046f08) volume_small2_pane_g7

0x9b5b,	// (0x00046f11) volume_small2_pane_g8

0x9b64,	// (0x00046f1a) volume_small2_pane_g9

0x9b6d,	// (0x00046f23) volume_small2_pane_g10

0x0009,

0xfbf8,	// (0x0004cfae) volume_small2_pane_g

0x7827,	// (0x00044bdd) fep_vkb_top_text_pane_g1_ParamLimits

0xc66b,	// (0x00049a21) fep_vkb_top_text_pane_t1_ParamLimits

0x7a07,	// (0x00044dbd) popup_preview_fixed_window_g3_ParamLimits

0x7a07,	// (0x00044dbd) popup_preview_fixed_window_g3

0xbacf,	// (0x00048e85) popup_toolbar_trans_pane

0xc0d4,	// (0x0004948a) aid_height_set_list_ParamLimits

0x5efe,	// (0x000432b4) aid_size_parent_ParamLimits

0x483d,	// (0x00041bf3) list_highlight_pane_cp2_ParamLimits

0x4fee,	// (0x000423a4) set_content_pane_g1_ParamLimits

0xb04d,	// (0x00048403) list_single_image_pane_ParamLimits

0xb04d,	// (0x00048403) list_single_image_pane

0xcbba,	// (0x00049f70) aid_size_cell_image_ParamLimits

0xcbba,	// (0x00049f70) aid_size_cell_image

0xcbc7,	// (0x00049f7d) grid_single_image_pane_ParamLimits

0xcbc7,	// (0x00049f7d) grid_single_image_pane

0x468d,	// (0x00041a43) list_single_image_pane_g1_ParamLimits

0x468d,	// (0x00041a43) list_single_image_pane_g1

0x470c,	// (0x00041ac2) list_single_image_pane_g2_ParamLimits

0x470c,	// (0x00041ac2) list_single_image_pane_g2

0x0001,

0xfc0d,	// (0x0004cfc3) list_single_image_pane_g_ParamLimits

0xfc0d,	// (0x0004cfc3) list_single_image_pane_g

0xcbd3,	// (0x00049f89) list_single_image_pane_t1_ParamLimits

0xcbd3,	// (0x00049f89) list_single_image_pane_t1

0xcbe9,	// (0x00049f9f) cell_image_list_pane_ParamLimits

0xcbe9,	// (0x00049f9f) cell_image_list_pane

0xcbfd,	// (0x00049fb3) cell_image_list_pane_g1

0xcc06,	// (0x00049fbc) cell_image_list_pane_g2

0x0001,

0x0234,	// (0x0003d5ea) cell_image_list_pane_g

0xcc0f,	// (0x00049fc5) aid_size_cell_tb_trans_pane

0x46f2,	// (0x00041aa8) bg_tb_trans_pane

0xcc21,	// (0x00049fd7) grid_tb_trans_pane

0x566d,	// (0x00042a23) bg_tb_trans_pane_g1

0x5675,	// (0x00042a2b) bg_tb_trans_pane_g2

0x567d,	// (0x00042a33) bg_tb_trans_pane_g3

0x5685,	// (0x00042a3b) bg_tb_trans_pane_g4

0x568d,	// (0x00042a43) bg_tb_trans_pane_g5

0x56a5,	// (0x00042a5b) bg_tb_trans_pane_g6

0x56ad,	// (0x00042a63) bg_tb_trans_pane_g7

0x5695,	// (0x00042a4b) bg_tb_trans_pane_g8

0x569d,	// (0x00042a53) bg_tb_trans_pane_g9

0x0008,

0xfc12,	// (0x0004cfc8) bg_tb_trans_pane_g

0xcc35,	// (0x00049feb) cell_toolbar_trans_pane_ParamLimits

0xcc35,	// (0x00049feb) cell_toolbar_trans_pane

0x74b1,	// (0x00044867) cell_toolbar_trans_pane_g1

0xc445,	// (0x000497fb) list_form2_midp_pane_t1

0xc453,	// (0x00049809) list_form2_midp_pane_t2

0x0001,

0x00e2,	// (0x0003d498) list_form2_midp_pane_t

0x720f,	// (0x000445c5) scroll_pane_cp51_ParamLimits

0x7385,	// (0x0004473b) form2_midp_wait_pane_g1

0x738e,	// (0x00044744) form2_midp_wait_pane_g2

0x7397,	// (0x0004474d) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0004ceb3) form2_midp_wait_pane_g

0x3fbc,	// (0x00041372) list_highlight_pane_cp21_ParamLimits

0x73b7,	// (0x0004476d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x73c6,	// (0x0004477c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xafba,	// (0x00048370) list_single_2graphic_im_pane_ParamLimits

0xafba,	// (0x00048370) list_single_2graphic_im_pane

0xcc5b,	// (0x0004a011) list_single_2graphic_im_pane_g1_ParamLimits

0xcc5b,	// (0x0004a011) list_single_2graphic_im_pane_g1

0xcc6c,	// (0x0004a022) list_single_2graphic_im_pane_g2_ParamLimits

0xcc6c,	// (0x0004a022) list_single_2graphic_im_pane_g2

0xcc78,	// (0x0004a02e) list_single_2graphic_im_pane_g3_ParamLimits

0xcc78,	// (0x0004a02e) list_single_2graphic_im_pane_g3

0x0003,

0x024c,	// (0x0003d602) list_single_2graphic_im_pane_g_ParamLimits

0x024c,	// (0x0003d602) list_single_2graphic_im_pane_g

0xcc98,	// (0x0004a04e) list_single_2graphic_im_pane_t1_ParamLimits

0xcc98,	// (0x0004a04e) list_single_2graphic_im_pane_t1

0x7a13,	// (0x00044dc9) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a13,	// (0x00044dc9) list_single_graphic_2heading_pane_fp

0xb2e3,	// (0x00048699) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb2e3,	// (0x00048699) list_single_graphic_2heading_pane_fp_g1

0x7a2a,	// (0x00044de0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a2a,	// (0x00044de0) list_single_graphic_2heading_pane_fp_g2

0xa7b7,	// (0x00047b6d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xa7b7,	// (0x00047b6d) list_single_graphic_2heading_pane_fp_g3

0xb2b8,	// (0x0004866e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb2b8,	// (0x0004866e) list_single_graphic_2heading_pane_fp_g4

0x7a36,	// (0x00044dec) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a36,	// (0x00044dec) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0004cf3b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0004cf3b) list_single_graphic_2heading_pane_fp_g

0xb4b0,	// (0x00048866) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xb4b0,	// (0x00048866) list_single_graphic_2heading_pane_fp_t1

0xb31b,	// (0x000486d1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb31b,	// (0x000486d1) list_single_graphic_2heading_pane_fp_t2

0xb4c6,	// (0x0004887c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xb4c6,	// (0x0004887c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc25,	// (0x0004cfdb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc25,	// (0x0004cfdb) list_single_graphic_2heading_pane_fp_t

0x7533,	// (0x000448e9) fep_hwr_write_pane_g5_ParamLimits

0x7533,	// (0x000448e9) fep_hwr_write_pane_g5

0x753f,	// (0x000448f5) fep_hwr_write_pane_g6_ParamLimits

0x753f,	// (0x000448f5) fep_hwr_write_pane_g6

0xc99b,	// (0x00049d51) eswt_shell_pane_ParamLimits

0x575d,	// (0x00042b13) bg_popup_window_pane_cp18_ParamLimits

0x67c9,	// (0x00043b7f) heading_pane_cp70

0xcac5,	// (0x00049e7b) popup_eswt_tasktip_window_t1_ParamLimits

0xbb7c,	// (0x00048f32) aid_touch_tab_arrow_left

0xbb8b,	// (0x00048f41) aid_touch_tab_arrow_right

0xa482,	// (0x00047838) title_pane_g3_ParamLimits

0xa482,	// (0x00047838) title_pane_g3

0x46b1,	// (0x00041a67) set_value_pane_g1

0xbacf,	// (0x00048e85) popup_toolbar_trans_pane_ParamLimits

0xcc0f,	// (0x00049fc5) aid_size_cell_tb_trans_pane_ParamLimits

0x46f2,	// (0x00041aa8) bg_tb_trans_pane_ParamLimits

0xcc21,	// (0x00049fd7) grid_tb_trans_pane_ParamLimits

0x41b9,	// (0x0004156f) cont_note_pane_ParamLimits

0x41b9,	// (0x0004156f) cont_note_pane

0x4461,	// (0x00041817) cont_snote2_single_text_pane_ParamLimits

0x4461,	// (0x00041817) cont_snote2_single_text_pane

0x4461,	// (0x00041817) cont_snote2_single_graphic_pane_ParamLimits

0x4461,	// (0x00041817) cont_snote2_single_graphic_pane

0x5c1a,	// (0x00042fd0) cont_note_wait_pane_ParamLimits

0x5c1a,	// (0x00042fd0) cont_note_wait_pane

0x5c1a,	// (0x00042fd0) cont_note_image_pane_ParamLimits

0x5c1a,	// (0x00042fd0) cont_note_image_pane

0xccc9,	// (0x0004a07f) popup_note2_window_g1_ParamLimits

0xccc9,	// (0x0004a07f) popup_note2_window_g1

0xccfa,	// (0x0004a0b0) popup_note2_window_t1_ParamLimits

0xccfa,	// (0x0004a0b0) popup_note2_window_t1

0xcd3f,	// (0x0004a0f5) popup_note2_window_t2_ParamLimits

0xcd3f,	// (0x0004a0f5) popup_note2_window_t2

0xcd84,	// (0x0004a13a) popup_note2_window_t3_ParamLimits

0xcd84,	// (0x0004a13a) popup_note2_window_t3

0xcdc9,	// (0x0004a17f) popup_note2_window_t4_ParamLimits

0xcdc9,	// (0x0004a17f) popup_note2_window_t4

0x4231,	// (0x000415e7) popup_note2_window_t5_ParamLimits

0x4231,	// (0x000415e7) popup_note2_window_t5

0x0004,

0xfc2c,	// (0x0004cfe2) popup_note2_window_t_ParamLimits

0xfc2c,	// (0x0004cfe2) popup_note2_window_t

0xcdf8,	// (0x0004a1ae) popup_note2_image_window_g1_ParamLimits

0xcdf8,	// (0x0004a1ae) popup_note2_image_window_g1

0xce04,	// (0x0004a1ba) popup_note2_image_window_g2_ParamLimits

0xce04,	// (0x0004a1ba) popup_note2_image_window_g2

0x0001,

0x026c,	// (0x0003d622) popup_note2_image_window_g_ParamLimits

0x026c,	// (0x0003d622) popup_note2_image_window_g

0xce16,	// (0x0004a1cc) popup_note2_image_window_t1_ParamLimits

0xce16,	// (0x0004a1cc) popup_note2_image_window_t1

0xce2e,	// (0x0004a1e4) popup_note2_image_window_t2_ParamLimits

0xce2e,	// (0x0004a1e4) popup_note2_image_window_t2

0xce46,	// (0x0004a1fc) popup_note2_image_window_t3_ParamLimits

0xce46,	// (0x0004a1fc) popup_note2_image_window_t3

0x0002,

0x0271,	// (0x0003d627) popup_note2_image_window_t_ParamLimits

0x0271,	// (0x0003d627) popup_note2_image_window_t

0x5c28,	// (0x00042fde) popup_note2_wait_window_g1_ParamLimits

0x5c28,	// (0x00042fde) popup_note2_wait_window_g1

0x5c34,	// (0x00042fea) popup_note2_wait_window_g2_ParamLimits

0x5c34,	// (0x00042fea) popup_note2_wait_window_g2

0x5c40,	// (0x00042ff6) popup_note2_wait_window_g3_ParamLimits

0x5c40,	// (0x00042ff6) popup_note2_wait_window_g3

0x0002,

0xf85e,	// (0x0004cc14) popup_note2_wait_window_g_ParamLimits

0xf85e,	// (0x0004cc14) popup_note2_wait_window_g

0xce62,	// (0x0004a218) popup_note2_wait_window_t1_ParamLimits

0xce62,	// (0x0004a218) popup_note2_wait_window_t1

0xce80,	// (0x0004a236) popup_note2_wait_window_t2_ParamLimits

0xce80,	// (0x0004a236) popup_note2_wait_window_t2

0xce9e,	// (0x0004a254) popup_note2_wait_window_t3_ParamLimits

0xce9e,	// (0x0004a254) popup_note2_wait_window_t3

0xceb0,	// (0x0004a266) popup_note2_wait_window_t4_ParamLimits

0xceb0,	// (0x0004a266) popup_note2_wait_window_t4

0x0003,

0x0278,	// (0x0003d62e) popup_note2_wait_window_t_ParamLimits

0x0278,	// (0x0003d62e) popup_note2_wait_window_t

0xcec2,	// (0x0004a278) wait_bar2_pane_ParamLimits

0xcec2,	// (0x0004a278) wait_bar2_pane

0xceda,	// (0x0004a290) popup_snote2_single_text_window_g1_ParamLimits

0xceda,	// (0x0004a290) popup_snote2_single_text_window_g1

0xcf02,	// (0x0004a2b8) popup_snote2_single_text_window_t1_ParamLimits

0xcf02,	// (0x0004a2b8) popup_snote2_single_text_window_t1

0xcf4e,	// (0x0004a304) popup_snote2_single_text_window_t2_ParamLimits

0xcf4e,	// (0x0004a304) popup_snote2_single_text_window_t2

0xcf9a,	// (0x0004a350) popup_snote2_single_text_window_t3_ParamLimits

0xcf9a,	// (0x0004a350) popup_snote2_single_text_window_t3

0xcfdb,	// (0x0004a391) popup_snote2_single_text_window_t4_ParamLimits

0xcfdb,	// (0x0004a391) popup_snote2_single_text_window_t4

0xd011,	// (0x0004a3c7) popup_snote2_single_text_window_t5_ParamLimits

0xd011,	// (0x0004a3c7) popup_snote2_single_text_window_t5

0x0004,

0x0281,	// (0x0003d637) popup_snote2_single_text_window_t_ParamLimits

0x0281,	// (0x0003d637) popup_snote2_single_text_window_t

0xd03c,	// (0x0004a3f2) popup_snote2_single_graphic_window_g1_ParamLimits

0xd03c,	// (0x0004a3f2) popup_snote2_single_graphic_window_g1

0xd064,	// (0x0004a41a) popup_snote2_single_graphic_window_g2_ParamLimits

0xd064,	// (0x0004a41a) popup_snote2_single_graphic_window_g2

0x0001,

0x028c,	// (0x0003d642) popup_snote2_single_graphic_window_g_ParamLimits

0x028c,	// (0x0003d642) popup_snote2_single_graphic_window_g

0xd08c,	// (0x0004a442) popup_snote2_single_graphic_window_t1_ParamLimits

0xd08c,	// (0x0004a442) popup_snote2_single_graphic_window_t1

0xd0d8,	// (0x0004a48e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0d8,	// (0x0004a48e) popup_snote2_single_graphic_window_t2

0xcf9a,	// (0x0004a350) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf9a,	// (0x0004a350) popup_snote2_single_graphic_window_t3

0xcfdb,	// (0x0004a391) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfdb,	// (0x0004a391) popup_snote2_single_graphic_window_t4

0xd011,	// (0x0004a3c7) popup_snote2_single_graphic_window_t5_ParamLimits

0xd011,	// (0x0004a3c7) popup_snote2_single_graphic_window_t5

0x0004,

0x0291,	// (0x0003d647) popup_snote2_single_graphic_window_t_ParamLimits

0x0291,	// (0x0003d647) popup_snote2_single_graphic_window_t

0x71a1,	// (0x00044557) clock_nsta_pane_cp2_t1

0x71a1,	// (0x00044557) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0004ce89) clock_nsta_pane_cp2_t

0xa96b,	// (0x00047d21) form_field_data_wide_pane_g1_ParamLimits

0x468d,	// (0x00041a43) form_field_data_wide_pane_g2_ParamLimits

0x468d,	// (0x00041a43) form_field_data_wide_pane_g2

0x470c,	// (0x00041ac2) form_field_data_wide_pane_g3_ParamLimits

0x470c,	// (0x00041ac2) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x0004ca4e) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x0004ca4e) form_field_data_wide_pane_g

0xc32e,	// (0x000496e4) grid_touch_3_pane_ParamLimits

0xc32e,	// (0x000496e4) grid_touch_3_pane

0xd124,	// (0x0004a4da) cell_touch_3_pane_ParamLimits

0xd124,	// (0x0004a4da) cell_touch_3_pane

0x74b1,	// (0x00044867) cell_touch_3_pane_g1

0x74b1,	// (0x00044867) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0004cef9) cell_touch_3_pane_g

0x42ce,	// (0x00041684) cont_query_data_pane

0x42d6,	// (0x0004168c) cont_query_data_pane_cp1

0xd153,	// (0x0004a509) button_value_adjust_pane_cp7

0xd15b,	// (0x0004a511) query_popup_pane_cp3

0x4c68,	// (0x0004201e) bg_popup_sub_pane_cp22_ParamLimits

0x8eff,	// (0x000462b5) navi_navi_volume_pane_cp2

0x8f1a,	// (0x000462d0) popup_side_volume_key_window_g2

0x8f29,	// (0x000462df) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004cae4) popup_side_volume_key_window_g

0x8f46,	// (0x000462fc) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004caeb) popup_side_volume_key_window_t

0x4eb8,	// (0x0004226e) popup_side_volume_key_window_ParamLimits

0x8a75,	// (0x00045e2b) list_double_graphic_pane_g4_ParamLimits

0x8a75,	// (0x00045e2b) list_double_graphic_pane_g4

0xb005,	// (0x000483bb) list_single_2heading_msg_pane_ParamLimits

0xb005,	// (0x000483bb) list_single_2heading_msg_pane

0xba3f,	// (0x00048df5) list_single_2heading_msg_pane_g1_ParamLimits

0xba3f,	// (0x00048df5) list_single_2heading_msg_pane_g1

0xba4b,	// (0x00048e01) list_single_2heading_msg_pane_g2_ParamLimits

0xba4b,	// (0x00048e01) list_single_2heading_msg_pane_g2

0xba57,	// (0x00048e0d) list_single_2heading_msg_pane_g3_ParamLimits

0xba57,	// (0x00048e0d) list_single_2heading_msg_pane_g3

0xba63,	// (0x00048e19) list_single_2heading_msg_pane_g4_ParamLimits

0xba63,	// (0x00048e19) list_single_2heading_msg_pane_g4

0x0003,

0xfc37,	// (0x0004cfed) list_single_2heading_msg_pane_g_ParamLimits

0xfc37,	// (0x0004cfed) list_single_2heading_msg_pane_g

0xb4e6,	// (0x0004889c) list_single_2heading_msg_pane_t1_ParamLimits

0xb4e6,	// (0x0004889c) list_single_2heading_msg_pane_t1

0xb50e,	// (0x000488c4) list_single_2heading_msg_pane_t2_ParamLimits

0xb50e,	// (0x000488c4) list_single_2heading_msg_pane_t2

0xb542,	// (0x000488f8) list_single_2heading_msg_pane_t3_ParamLimits

0xb542,	// (0x000488f8) list_single_2heading_msg_pane_t3

0xb57b,	// (0x00048931) list_single_2heading_msg_pane_t4_ParamLimits

0xb57b,	// (0x00048931) list_single_2heading_msg_pane_t4

0x0003,

0xfc40,	// (0x0004cff6) list_single_2heading_msg_pane_t_ParamLimits

0xfc40,	// (0x0004cff6) list_single_2heading_msg_pane_t

0x3f6a,	// (0x00041320) title_pane_g4_ParamLimits

0x3f6a,	// (0x00041320) title_pane_g4

0x8d0d,	// (0x000460c3) title_pane_stacon_g3_ParamLimits

0x8d0d,	// (0x000460c3) title_pane_stacon_g3

0xcc8c,	// (0x0004a042) list_single_2graphic_im_pane_g4_ParamLimits

0xcc8c,	// (0x0004a042) list_single_2graphic_im_pane_g4

0x65cb,	// (0x00043981) popup_side_volume_key_window_cp

0x6ac8,	// (0x00043e7e) main_idle_act2_pane_t1

0x92ba,	// (0x00046670) toolbar_button_pane_g10

0xa73c,	// (0x00047af2) popup_toolbar_window_cp1

0x7192,	// (0x00044548) clock_nsta_pane_cp_t1

0x7192,	// (0x00044548) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0004ce84) clock_nsta_pane_cp_t

0x8eff,	// (0x000462b5) navi_navi_volume_pane_cp2_ParamLimits

0x8f0e,	// (0x000462c4) popup_side_volume_key_window_g1_ParamLimits

0x8f1a,	// (0x000462d0) popup_side_volume_key_window_g2_ParamLimits

0x8f29,	// (0x000462df) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004cae4) popup_side_volume_key_window_g_ParamLimits

0x9777,	// (0x00046b2d) fep_hwr_aid_pane

0x981e,	// (0x00046bd4) bg_fep_hwr_top_pane_g4_ParamLimits

0x7515,	// (0x000448cb) fep_hwr_top_pane_g1_ParamLimits

0x7503,	// (0x000448b9) fep_hwr_top_pane_g2_ParamLimits

0x983e,	// (0x00046bf4) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0004cec4) fep_hwr_top_pane_g_ParamLimits

0x9853,	// (0x00046c09) fep_hwr_top_text_pane_ParamLimits

0x6395,	// (0x0004374b) aid_touch_tab_arrow_arrow_2

0x638c,	// (0x00043742) aid_touch_tab_arrow_left_2

0x978b,	// (0x00046b41) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x97c2,	// (0x00046b78) fep_hwr_prediction_pane

0x766a,	// (0x00044a20) fep_vkb_prediction_pane

0xc648,	// (0x000499fe) fep_vkb_side_pane_g3_ParamLimits

0xc648,	// (0x000499fe) fep_vkb_side_pane_g3

0x99ce,	// (0x00046d84) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9a3a,	// (0x00046df0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9a47,	// (0x00046dfd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0004cf73) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9b76,	// (0x00046f2c) fep_hwr_prediction_pane_g1

0x9b80,	// (0x00046f36) fep_hwr_prediction_pane_g2

0x9b88,	// (0x00046f3e) fep_hwr_prediction_pane_g3

0x9b90,	// (0x00046f46) fep_hwr_prediction_pane_g4

0x0003,

0xfc49,	// (0x0004cfff) fep_hwr_prediction_pane_g

0xd180,	// (0x0004a536) fep_vkb_prediction_pane_g1

0xd18a,	// (0x0004a540) fep_vkb_prediction_pane_g2

0xd192,	// (0x0004a548) fep_vkb_prediction_pane_g3

0xd19a,	// (0x0004a550) fep_vkb_prediction_pane_g4

0x0003,

0x02b7,	// (0x0003d66d) fep_vkb_prediction_pane_g

0x95a6,	// (0x0004695c) slider_set_pane_g3

0x95ba,	// (0x00046970) slider_set_pane_g4

0x95d2,	// (0x00046988) slider_set_pane_g5

0x95a6,	// (0x0004695c) slider_set_pane_g6

0x95e8,	// (0x0004699e) slider_set_pane_g7

0x684e,	// (0x00043c04) slider_form_pane_g3

0x6857,	// (0x00043c0d) slider_form_pane_g4

0x685f,	// (0x00043c15) slider_form_pane_g5

0x684e,	// (0x00043c04) slider_form_pane_g6

0xc227,	// (0x000495dd) slider_form_pane_g7

0x6d66,	// (0x0004411c) slider_set_pane_vc_g3

0x6d6f,	// (0x00044125) slider_set_pane_vc_g4

0x6d78,	// (0x0004412e) slider_set_pane_vc_g5

0x6d66,	// (0x0004411c) slider_set_pane_vc_g6

0x6d81,	// (0x00044137) slider_set_pane_vc_g7

0x6d66,	// (0x0004411c) slider_form_pane_vc_g1

0x6d6f,	// (0x00044125) slider_form_pane_vc_g2

0x6d78,	// (0x0004412e) slider_form_pane_vc_g3

0x6d66,	// (0x0004411c) slider_form_pane_vc_g4

0x6f0a,	// (0x000442c0) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x0004ce5d) slider_form_pane_vc_g

0x3f4c,	// (0x00041302) main_idle_act3_pane

0xd1a2,	// (0x0004a558) ai3_links_pane

0xd1ab,	// (0x0004a561) popup_ai3_data_window_ParamLimits

0xd1ab,	// (0x0004a561) popup_ai3_data_window

0x3f4c,	// (0x00041302) grid_ai3_links_pane

0xd1c3,	// (0x0004a579) cell_ai3_links_pane_ParamLimits

0xd1c3,	// (0x0004a579) cell_ai3_links_pane

0xd1db,	// (0x0004a591) bg_popup_sub_pane_cp11

0xd1e8,	// (0x0004a59e) cell_ai3_links_pane_g1

0x3f4c,	// (0x00041302) bg_popup_sub_pane_cp12

0xd20d,	// (0x0004a5c3) heading_ai3_data_pane

0xd215,	// (0x0004a5cb) list_ai3_gene_pane

0xd221,	// (0x0004a5d7) popup_ai3_data_window_g1

0xd229,	// (0x0004a5df) heading_ai3_data_pane_g1

0xd231,	// (0x0004a5e7) heading_ai3_data_pane_t1

0xd23f,	// (0x0004a5f5) list_double_ai3_gene_pane_ParamLimits

0xd23f,	// (0x0004a5f5) list_double_ai3_gene_pane

0xd24c,	// (0x0004a602) list_single_ai3_gene_pane_ParamLimits

0xd24c,	// (0x0004a602) list_single_ai3_gene_pane

0x7476,	// (0x0004482c) list_highlight_pane_cp7_ParamLimits

0x7476,	// (0x0004482c) list_highlight_pane_cp7

0xd259,	// (0x0004a60f) list_single_a13_gene_pane_t1_ParamLimits

0xd259,	// (0x0004a60f) list_single_a13_gene_pane_t1

0xd270,	// (0x0004a626) list_single_ai3_gene_pane_g1

0xd279,	// (0x0004a62f) list_single_ai3_gene_pane_g2

0x0001,

0x02c0,	// (0x0003d676) list_single_ai3_gene_pane_g

0xd281,	// (0x0004a637) list_double_ai3_gene_pane_g1_ParamLimits

0xd281,	// (0x0004a637) list_double_ai3_gene_pane_g1

0xd28d,	// (0x0004a643) list_double_ai3_gene_pane_t1_ParamLimits

0xd28d,	// (0x0004a643) list_double_ai3_gene_pane_t1

0xd2a9,	// (0x0004a65f) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a9,	// (0x0004a65f) list_double_ai3_gene_pane_t2

0xd2be,	// (0x0004a674) list_double_ai3_gene_pane_t3_ParamLimits

0xd2be,	// (0x0004a674) list_double_ai3_gene_pane_t3

0x0002,

0x02c5,	// (0x0003d67b) list_double_ai3_gene_pane_t_ParamLimits

0x02c5,	// (0x0003d67b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb4dc,	// (0x00048892) aid_size_min_col_2

0xd16c,	// (0x0004a522) aid_size_min_msg_ParamLimits

0xd16c,	// (0x0004a522) aid_size_min_msg

0xc65c,	// (0x00049a12) fep_vkb_top_text_pane_g2_ParamLimits

0xc65c,	// (0x00049a12) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0004cef4) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0004cef4) fep_vkb_top_text_pane_g

0x3f4c,	// (0x00041302) main_hc_apps_shell_pane

0xd2db,	// (0x0004a691) grid_hc_apps_pane_ParamLimits

0xd2db,	// (0x0004a691) grid_hc_apps_pane

0xd2ea,	// (0x0004a6a0) list_hc_apps_pane

0xd2f2,	// (0x0004a6a8) scroll_pane_cp37_ParamLimits

0xd2f2,	// (0x0004a6a8) scroll_pane_cp37

0xd2fe,	// (0x0004a6b4) cell_hc_apps_pane_ParamLimits

0xd2fe,	// (0x0004a6b4) cell_hc_apps_pane

0xd3ae,	// (0x0004a764) cell_hc_apps_pane_g1_ParamLimits

0xd3ae,	// (0x0004a764) cell_hc_apps_pane_g1

0xd3df,	// (0x0004a795) cell_hc_apps_pane_g2_ParamLimits

0xd3df,	// (0x0004a795) cell_hc_apps_pane_g2

0xd3fb,	// (0x0004a7b1) cell_hc_apps_pane_g3_ParamLimits

0xd3fb,	// (0x0004a7b1) cell_hc_apps_pane_g3

0x0002,

0x02cc,	// (0x0003d682) cell_hc_apps_pane_g_ParamLimits

0x02cc,	// (0x0003d682) cell_hc_apps_pane_g

0xd41d,	// (0x0004a7d3) cell_hc_apps_pane_t1_ParamLimits

0xd41d,	// (0x0004a7d3) cell_hc_apps_pane_t1

0x41b9,	// (0x0004156f) grid_highlight_pane_cp10_ParamLimits

0x41b9,	// (0x0004156f) grid_highlight_pane_cp10

0xd45d,	// (0x0004a813) list_single_hc_apps_pane_ParamLimits

0xd45d,	// (0x0004a813) list_single_hc_apps_pane

0xd4d0,	// (0x0004a886) list_single_hc_apps_pane_g1

0xba7b,	// (0x00048e31) list_single_hc_apps_pane_g2

0x0001,

0xfc52,	// (0x0004d008) list_single_hc_apps_pane_g

0xba94,	// (0x00048e4a) list_single_hc_apps_pane_g2_copy1

0xb5a0,	// (0x00048956) list_single_hc_apps_pane_t1

0x3fbc,	// (0x00041372) bg_set_opt_pane_cp_ParamLimits

0x883e,	// (0x00045bf4) setting_slider_pane_t1_ParamLimits

0x8857,	// (0x00045c0d) setting_slider_pane_t2_ParamLimits

0x8870,	// (0x00045c26) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0004c92c) setting_slider_pane_t_ParamLimits

0x8887,	// (0x00045c3d) slider_set_pane_ParamLimits

0x91a4,	// (0x0004655a) control_pane_g5_ParamLimits

0x91a4,	// (0x0004655a) control_pane_g5

0x6810,	// (0x00043bc6) slider_set_pane_g1_ParamLimits

0x959a,	// (0x00046950) slider_set_pane_g2_ParamLimits

0x95a6,	// (0x0004695c) slider_set_pane_g3_ParamLimits

0x95ba,	// (0x00046970) slider_set_pane_g4_ParamLimits

0x95d2,	// (0x00046988) slider_set_pane_g5_ParamLimits

0x95a6,	// (0x0004695c) slider_set_pane_g6_ParamLimits

0x95e8,	// (0x0004699e) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004cd30) slider_set_pane_g_ParamLimits

0x4f99,	// (0x0004234f) navi_icon_text_pane_ParamLimits

0xbb52,	// (0x00048f08) aid_fill_nsta_2_ParamLimits

0xbb7c,	// (0x00048f32) aid_touch_tab_arrow_left_ParamLimits

0xbb8b,	// (0x00048f41) aid_touch_tab_arrow_right_ParamLimits

0xbbf8,	// (0x00048fae) clock_nsta_pane_ParamLimits

0x636e,	// (0x00043724) navi_icon_pane_g1_ParamLimits

0x637a,	// (0x00043730) navi_text_pane_t1_ParamLimits

0x71e9,	// (0x0004459f) navi_icon_text_pane_g1_ParamLimits

0x71f5,	// (0x000445ab) navi_icon_text_pane_t1_ParamLimits

0xd4d0,	// (0x0004a886) list_single_hc_apps_pane_g1_ParamLimits

0xba7b,	// (0x00048e31) list_single_hc_apps_pane_g2_ParamLimits

0xfc52,	// (0x0004d008) list_single_hc_apps_pane_g_ParamLimits

0xba94,	// (0x00048e4a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb5a0,	// (0x00048956) list_single_hc_apps_pane_t1_ParamLimits

0x8758,	// (0x00045b0e) popup_toolbar2_fixed_window_ParamLimits

0x8758,	// (0x00045b0e) popup_toolbar2_fixed_window

0xbac5,	// (0x00048e7b) popup_toolbar2_float_window

0x3f4c,	// (0x00041302) bg_popup_sub_pane_cp27

0xd4e9,	// (0x0004a89f) grid_toolbar2_float_pane

0x3f4c,	// (0x00041302) bg_popup_sub_pane_cp26

0xd4e9,	// (0x0004a89f) grid_toolbar2_fixed_pane

0xd4f1,	// (0x0004a8a7) cell_toolbar2_fixed_pane_ParamLimits

0xd4f1,	// (0x0004a8a7) cell_toolbar2_fixed_pane

0xd502,	// (0x0004a8b8) cell_toolbar2_fixed_pane_g1

0xd50b,	// (0x0004a8c1) toolbar2_fixed_button_pane

0x566d,	// (0x00042a23) toolbar2_fixed_button_pane_g1

0x5675,	// (0x00042a2b) toolbar2_fixed_button_pane_g2

0x567d,	// (0x00042a33) toolbar2_fixed_button_pane_g3

0x5685,	// (0x00042a3b) toolbar2_fixed_button_pane_g4

0x568d,	// (0x00042a43) toolbar2_fixed_button_pane_g5

0x5695,	// (0x00042a4b) toolbar2_fixed_button_pane_g6

0x569d,	// (0x00042a53) toolbar2_fixed_button_pane_g7

0x56a5,	// (0x00042a5b) toolbar2_fixed_button_pane_g8

0x56ad,	// (0x00042a63) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004cc32) toolbar2_fixed_button_pane_g

0xd513,	// (0x0004a8c9) cell_toolbar2_float_pane_ParamLimits

0xd513,	// (0x0004a8c9) cell_toolbar2_float_pane

0xd524,	// (0x0004a8da) cell_toolbar2_float_pane_g1

0xd50b,	// (0x0004a8c1) toolbar2_fixed_button_pane_cp

0xc60f,	// (0x000499c5) fep_vkb_accented_list_pane_ParamLimits

0xc60f,	// (0x000499c5) fep_vkb_accented_list_pane

0x99ae,	// (0x00046d64) bg_popup_fep_shadow_pane_g9

0x511b,	// (0x000424d1) bg_popup_fep_shadow_pane_cp3

0x47ec,	// (0x00041ba2) list_accented_list_pane

0xd52d,	// (0x0004a8e3) list_single_accented_list_pane_ParamLimits

0xd52d,	// (0x0004a8e3) list_single_accented_list_pane

0x511b,	// (0x000424d1) list_highlight_pane_cp10

0xd53e,	// (0x0004a8f4) list_single_accented_list_pane_t1

0xb985,	// (0x00048d3b) popup_slider_window_ParamLimits

0xb985,	// (0x00048d3b) popup_slider_window

0xd163,	// (0x0004a519) aid_indentation_list_msg

0xd5f8,	// (0x0004a9ae) bg_popup_window_pane_cp19

0xd662,	// (0x0004aa18) popup_slider_window_g1

0xd67e,	// (0x0004aa34) popup_slider_window_g2

0xd69a,	// (0x0004aa50) popup_slider_window_g3

0x0005,

0x02d8,	// (0x0003d68e) popup_slider_window_g

0xd6f6,	// (0x0004aaac) popup_slider_window_t1

0xd76a,	// (0x0004ab20) small_volume_slider_vertical_pane

0x74b1,	// (0x00044867) small_volume_slider_vertical_pane_g1

0x74b1,	// (0x00044867) small_volume_slider_vertical_pane_g2

0xd786,	// (0x0004ab3c) small_volume_slider_vertical_pane_g3

0x0002,

0xfc57,	// (0x0004d00d) small_volume_slider_vertical_pane_g

0x851e,	// (0x000458d4) area_side_right_pane_ParamLimits

0x851e,	// (0x000458d4) area_side_right_pane

0x9b98,	// (0x00046f4e) aid_size_side_button_ParamLimits

0x9b98,	// (0x00046f4e) aid_size_side_button

0x9bac,	// (0x00046f62) grid_sctrl_middle_pane_ParamLimits

0x9bac,	// (0x00046f62) grid_sctrl_middle_pane

0x9bcc,	// (0x00046f82) sctrl_sk_bottom_pane

0x9bdd,	// (0x00046f93) sctrl_sk_top_pane

0x9bef,	// (0x00046fa5) aid_touch_sctrl_top

0x9bfc,	// (0x00046fb2) bg_sctrl_sk_pane_ParamLimits

0x9bfc,	// (0x00046fb2) bg_sctrl_sk_pane

0x9c0a,	// (0x00046fc0) sctrl_sk_top_pane_g1

0x9c17,	// (0x00046fcd) sctrl_sk_top_pane_t1

0x9bef,	// (0x00046fa5) aid_touch_sctrl_bottom

0x9bfc,	// (0x00046fb2) bg_sctrl_sk_pane_cp_ParamLimits

0x9bfc,	// (0x00046fb2) bg_sctrl_sk_pane_cp

0x9c32,	// (0x00046fe8) sctrl_sk_bottom_pane_g1

0x9c17,	// (0x00046fcd) sctrl_sk_bottom_pane_t1

0x9c3b,	// (0x00046ff1) cell_sctrl_middle_pane_ParamLimits

0x9c3b,	// (0x00046ff1) cell_sctrl_middle_pane

0x9c56,	// (0x0004700c) aid_touch_sctrl_middle_ParamLimits

0x9c56,	// (0x0004700c) aid_touch_sctrl_middle

0x9c68,	// (0x0004701e) bg_sctrl_middle_pane_ParamLimits

0x9c68,	// (0x0004701e) bg_sctrl_middle_pane

0x99ce,	// (0x00046d84) cell_sctrl_middle_pane_g1_ParamLimits

0x99ce,	// (0x00046d84) cell_sctrl_middle_pane_g1

0x9c76,	// (0x0004702c) cell_sctrl_middle_pane_g2_ParamLimits

0x9c76,	// (0x0004702c) cell_sctrl_middle_pane_g2

0x0001,

0xfc63,	// (0x0004d019) cell_sctrl_middle_pane_g_ParamLimits

0xfc63,	// (0x0004d019) cell_sctrl_middle_pane_g

0x566d,	// (0x00042a23) bg_sctrl_middle_pane_g1

0x567d,	// (0x00042a33) bg_sctrl_middle_pane_g2

0x5675,	// (0x00042a2b) bg_sctrl_middle_pane_g3

0x568d,	// (0x00042a43) bg_sctrl_middle_pane_g4

0x5685,	// (0x00042a3b) bg_sctrl_middle_pane_g5

0x5695,	// (0x00042a4b) bg_sctrl_middle_pane_g6

0x569d,	// (0x00042a53) bg_sctrl_middle_pane_g7

0x56ad,	// (0x00042a63) bg_sctrl_middle_pane_g8

0x0007,

0xfc68,	// (0x0004d01e) bg_sctrl_middle_pane_g

0x56a5,	// (0x00042a5b) bg_sctrl_middle_pane_g8_copy1

0x566d,	// (0x00042a23) bg_sctrl_sk_pane_g1

0x5675,	// (0x00042a2b) bg_sctrl_sk_pane_g2

0x567d,	// (0x00042a33) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004cc32) bg_sctrl_sk_pane_g

0x461f,	// (0x000419d5) aid_size_touch_scroll_bar

0x5685,	// (0x00042a3b) bg_sctrl_sk_pane_g4

0x568d,	// (0x00042a43) bg_sctrl_sk_pane_g5

0x5695,	// (0x00042a4b) bg_sctrl_sk_pane_g6

0x569d,	// (0x00042a53) bg_sctrl_sk_pane_g7

0x56a5,	// (0x00042a5b) bg_sctrl_sk_pane_g8

0x56ad,	// (0x00042a63) bg_sctrl_sk_pane_g9

0x53a1,	// (0x00042757) popup_fep_china_hwr2_fs_candidate_window

0xb693,	// (0x00048a49) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb693,	// (0x00048a49) popup_fep_china_hwr2_fs_control_window

0x99ce,	// (0x00046d84) sctrl_sk_top_pane_g2

0x0001,

0xfc5e,	// (0x0004d014) sctrl_sk_top_pane_g

0xd78f,	// (0x0004ab45) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd78f,	// (0x0004ab45) aid_fep_china_hwr2_fs_cell

0xd7a1,	// (0x0004ab57) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7a1,	// (0x0004ab57) bg_popup_fep_shadow_pane_cp4

0xd7b8,	// (0x0004ab6e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7b8,	// (0x0004ab6e) bg_popup_fep_shadow_pane_cp5

0xd7ca,	// (0x0004ab80) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7ca,	// (0x0004ab80) popup_fep_china_hwr2_fs_control_bar_grid

0xd7da,	// (0x0004ab90) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7e2,	// (0x0004ab98) aid_fep_china_hwr2_fs_candi_cell

0x3f4c,	// (0x00041302) bg_popup_fep_shadow_pane_cp6

0xd7ec,	// (0x0004aba2) popup_fep_china_hwr2_fs_candidate_grid

0xd7f6,	// (0x0004abac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7f6,	// (0x0004abac) cell_fep_china_hwr2_fs_funtion_grid

0x74b1,	// (0x00044867) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd80e,	// (0x0004abc4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd80e,	// (0x0004abc4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd81c,	// (0x0004abd2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd81c,	// (0x0004abd2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x030c,	// (0x0003d6c2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x030c,	// (0x0003d6c2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd832,	// (0x0004abe8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd832,	// (0x0004abe8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd847,	// (0x0004abfd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd847,	// (0x0004abfd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0311,	// (0x0003d6c7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0311,	// (0x0003d6c7) cell_fep_china_hwr2_fs_funtion_grid_t

0xd863,	// (0x0004ac19) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd86b,	// (0x0004ac21) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd873,	// (0x0004ac29) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x0316,	// (0x0003d6cc) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd87b,	// (0x0004ac31) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd87b,	// (0x0004ac31) cell_fep_china_hwr2_fs_candidate_grid

0xd894,	// (0x0004ac4a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd89c,	// (0x0004ac52) popup_fep_china_hwr2_fs_candidate_grid_g21

0x74b1,	// (0x00044867) cell_fep_china_hwr2_fs_candidate_grid_g1

0x74b1,	// (0x00044867) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0004cef9) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8a4,	// (0x0004ac5a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x54ae,	// (0x00042864) clock_nsta_pane_cp_24_ParamLimits

0x54ae,	// (0x00042864) clock_nsta_pane_cp_24

0x5516,	// (0x000428cc) indicator_nsta_pane_cp_24_ParamLimits

0x5516,	// (0x000428cc) indicator_nsta_pane_cp_24

0x6284,	// (0x0004363a) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004cc97) heading_pane_g

0x6953,	// (0x00043d09) grid_sct_catagory_button_pane

0x6777,	// (0x00043b2d) scroll_pane_cp5_ParamLimits

0x721b,	// (0x000445d1) button_value_adjust_pane_cp5_ParamLimits

0x721b,	// (0x000445d1) button_value_adjust_pane_cp5

0x72d9,	// (0x0004468f) form2_midp_time_pane_ParamLimits

0xd8b2,	// (0x0004ac68) cell_sct_catagory_button_pane_ParamLimits

0xd8b2,	// (0x0004ac68) cell_sct_catagory_button_pane

0x7476,	// (0x0004482c) bg_button_pane_cp01_ParamLimits

0x7476,	// (0x0004482c) bg_button_pane_cp01

0x74b1,	// (0x00044867) cell_sct_catagory_button_pane_g1

0xb9bc,	// (0x00048d72) popup_tb_extension_window

0xd8c4,	// (0x0004ac7a) aid_size_cell_ext_ParamLimits

0xd8c4,	// (0x0004ac7a) aid_size_cell_ext

0x41b9,	// (0x0004156f) bg_tb_trans_pane_cp1_ParamLimits

0x41b9,	// (0x0004156f) bg_tb_trans_pane_cp1

0xd8e4,	// (0x0004ac9a) grid_tb_ext_pane_ParamLimits

0xd8e4,	// (0x0004ac9a) grid_tb_ext_pane

0xd914,	// (0x0004acca) cell_tb_ext_pane_ParamLimits

0xd914,	// (0x0004acca) cell_tb_ext_pane

0xd92b,	// (0x0004ace1) cell_tb_ext_pane_g1_ParamLimits

0xd92b,	// (0x0004ace1) cell_tb_ext_pane_g1

0xd948,	// (0x0004acfe) cell_tb_ext_pane_t1

0x41b9,	// (0x0004156f) list_highlight_pane_cp11_ParamLimits

0x41b9,	// (0x0004156f) list_highlight_pane_cp11

0x8777,	// (0x00045b2d) popup_uni_indicator_window_ParamLimits

0x8777,	// (0x00045b2d) popup_uni_indicator_window

0x46f2,	// (0x00041aa8) bg_popup_sub_pane_cp14

0xd963,	// (0x0004ad19) list_uniindi_pane

0xd96f,	// (0x0004ad25) uniindi_top_pane

0x41b9,	// (0x0004156f) bg_uniindi_top_pane

0xd98e,	// (0x0004ad44) uniindi_top_pane_g1

0xd9a4,	// (0x0004ad5a) uniindi_top_pane_g2

0x0003,

0x031d,	// (0x0003d6d3) uniindi_top_pane_g

0xd9ce,	// (0x0004ad84) uniindi_top_pane_t1

0xd9f8,	// (0x0004adae) list_single_uniindi_pane_ParamLimits

0xd9f8,	// (0x0004adae) list_single_uniindi_pane

0x74b1,	// (0x00044867) bg_uniindi_top_pane_g1

0xda0a,	// (0x0004adc0) list_single_uniindi_pane_g1

0xda1d,	// (0x0004add3) list_single_uniindi_pane_t1

0x85fb,	// (0x000459b1) control_bg_pane

0xda42,	// (0x0004adf8) bg_sctrl_sk_pane_cp1

0xda4b,	// (0x0004ae01) bg_sctrl_sk_pane_cp2

0xda54,	// (0x0004ae0a) control_bg_pane_g1

0xda5d,	// (0x0004ae13) control_bg_pane_g2

0x0001,

0x0326,	// (0x0003d6dc) control_bg_pane_g

0x70d4,	// (0x0004448a) cell_indicator_nsta_pane_g1_ParamLimits

0xc372,	// (0x00049728) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0004ce72) cell_indicator_nsta_pane_g_ParamLimits

0xb2a5,	// (0x0004865b) form2_midp_time_pane_t1_ParamLimits

0x4461,	// (0x00041817) main_idle_act4_pane_ParamLimits

0x4461,	// (0x00041817) main_idle_act4_pane

0xb9bc,	// (0x00048d72) popup_tb_extension_window_ParamLimits

0xd904,	// (0x0004acba) tb_ext_find_pane_ParamLimits

0xd904,	// (0x0004acba) tb_ext_find_pane

0xda66,	// (0x0004ae1c) ai_gene_pane_1_cp1

0x51af,	// (0x00042565) ai_gene_pane_2_cp1

0xda6e,	// (0x0004ae24) list_single_idle_plugin_calendar_pane

0xda77,	// (0x0004ae2d) list_single_idle_plugin_notification_pane

0xda80,	// (0x0004ae36) list_single_idle_plugin_player_pane

0xda89,	// (0x0004ae3f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda89,	// (0x0004ae3f) list_single_idle_plugin_shortcut_pane

0xdaab,	// (0x0004ae61) main_idle_act4_pane_t1

0xdabd,	// (0x0004ae73) main_idle_act4_pane_t2

0x0001,

0x032b,	// (0x0003d6e1) main_idle_act4_pane_t

0xdacf,	// (0x0004ae85) middle_sk_idle_act4_pane_ParamLimits

0xdacf,	// (0x0004ae85) middle_sk_idle_act4_pane

0xdae5,	// (0x0004ae9b) popup_clock_digital_analogue_window_cp2

0xdaff,	// (0x0004aeb5) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaff,	// (0x0004aeb5) shortcut_wheel_idle_act4_pane

0x74b1,	// (0x00044867) shortcut_wheel_idle_act4_pane_g1

0x74b1,	// (0x00044867) shortcut_wheel_idle_act4_pane_g2

0x74b1,	// (0x00044867) shortcut_wheel_idle_act4_pane_g3

0x74b1,	// (0x00044867) shortcut_wheel_idle_act4_pane_g4

0x74b1,	// (0x00044867) shortcut_wheel_idle_act4_pane_g5

0xdb13,	// (0x0004aec9) shortcut_wheel_idle_act4_pane_g6

0xdb1b,	// (0x0004aed1) shortcut_wheel_idle_act4_pane_g7

0xdb23,	// (0x0004aed9) shortcut_wheel_idle_act4_pane_g8

0xdb2b,	// (0x0004aee1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfc79,	// (0x0004d02f) shortcut_wheel_idle_act4_pane_g

0x771a,	// (0x00044ad0) middle_sk_idle_act4_pane_g1_ParamLimits

0x771a,	// (0x00044ad0) middle_sk_idle_act4_pane_g1

0xdb8f,	// (0x0004af45) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb8f,	// (0x0004af45) middle_sk_idle_act4_pane_g2

0x0001,

0xfc97,	// (0x0004d04d) middle_sk_idle_act4_pane_g_ParamLimits

0xfc97,	// (0x0004d04d) middle_sk_idle_act4_pane_g

0xdb9b,	// (0x0004af51) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb9b,	// (0x0004af51) middle_sk_idle_act4_pane_t1

0xdbb8,	// (0x0004af6e) grid_ai_shortcut_pane_ParamLimits

0xdbb8,	// (0x0004af6e) grid_ai_shortcut_pane

0xdbd1,	// (0x0004af87) list_highlight_pane_cp16_ParamLimits

0xdbd1,	// (0x0004af87) list_highlight_pane_cp16

0xdbde,	// (0x0004af94) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbde,	// (0x0004af94) list_single_idle_plugin_shortcut_pane_g1

0xdbea,	// (0x0004afa0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbea,	// (0x0004afa0) list_single_idle_plugin_shortcut_pane_g2

0xdc23,	// (0x0004afd9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc23,	// (0x0004afd9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfc9c,	// (0x0004d052) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfc9c,	// (0x0004d052) list_single_idle_plugin_shortcut_pane_g

0xdc36,	// (0x0004afec) cell_ai_shortcut_pane_ParamLimits

0xdc36,	// (0x0004afec) cell_ai_shortcut_pane

0xdc57,	// (0x0004b00d) cell_ai_shortcut_pane_g1_ParamLimits

0xdc57,	// (0x0004b00d) cell_ai_shortcut_pane_g1

0xda66,	// (0x0004ae1c) ai_gene_pane_1_cp2

0xdc79,	// (0x0004b02f) ai_gene_pane_2_cp2

0xdc81,	// (0x0004b037) list_highlight_pane_cp15

0xdc8a,	// (0x0004b040) list_single_idle_plugin_calendar_pane_g1

0xdc81,	// (0x0004b037) list_highlight_pane_cp17

0xdc92,	// (0x0004b048) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc9a,	// (0x0004b050) list_single_idle_plugin_player_pane_g1

0x6b68,	// (0x00043f1e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfca3,	// (0x0004d059) list_single_idle_plugin_player_pane_g

0xdca2,	// (0x0004b058) list_single_idle_plugin_player_pane_t1

0xdcb0,	// (0x0004b066) list_single_idle_plugin_player_pane_t2

0xdcbe,	// (0x0004b074) list_single_idle_plugin_player_pane_t3

0xdccc,	// (0x0004b082) list_single_idle_plugin_player_pane_t4

0x0003,

0xfca8,	// (0x0004d05e) list_single_idle_plugin_player_pane_t

0xdcda,	// (0x0004b090) wait_bar_pane_cp15

0xdce2,	// (0x0004b098) grid_ai_notification_pane

0x6b68,	// (0x00043f1e) list_single_idle_plugin_notification_pane_g1

0xdceb,	// (0x0004b0a1) cell_ai_notification_pane_ParamLimits

0xdceb,	// (0x0004b0a1) cell_ai_notification_pane

0xdcf8,	// (0x0004b0ae) cell_ai_notification_pane_g1

0xdd00,	// (0x0004b0b6) cell_ai_notification_pane_t1

0xdd0e,	// (0x0004b0c4) tb_ext_find_button_pane

0xdd16,	// (0x0004b0cc) tb_ext_find_pane_g1

0xdd1e,	// (0x0004b0d4) tb_ext_find_pane_t1

0x4c07,	// (0x00041fbd) tb_ext_find_button_pane_g1

0xdd2c,	// (0x0004b0e2) tb_ext_find_button_pane_g2

0x0001,

0xfcb1,	// (0x0004d067) tb_ext_find_button_pane_g

0xdaab,	// (0x0004ae61) main_idle_act4_pane_t1_ParamLimits

0xdabd,	// (0x0004ae73) main_idle_act4_pane_t2_ParamLimits

0x032b,	// (0x0003d6e1) main_idle_act4_pane_t_ParamLimits

0xdae5,	// (0x0004ae9b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaf3,	// (0x0004aea9) sat_plugin_idle_act4_pane_ParamLimits

0xdaf3,	// (0x0004aea9) sat_plugin_idle_act4_pane

0xdd35,	// (0x0004b0eb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd35,	// (0x0004b0eb) sat_plugin_idle_act4_pane_t1

0xdd48,	// (0x0004b0fe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd48,	// (0x0004b0fe) sat_plugin_idle_act4_pane_t2

0xdd5b,	// (0x0004b111) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd5b,	// (0x0004b111) sat_plugin_idle_act4_pane_t3

0xdd6e,	// (0x0004b124) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd6e,	// (0x0004b124) sat_plugin_idle_act4_pane_t4

0x0003,

0xfcb6,	// (0x0004d06c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfcb6,	// (0x0004d06c) sat_plugin_idle_act4_pane_t

0x86c0,	// (0x00045a76) popup_battery_window_ParamLimits

0x86c0,	// (0x00045a76) popup_battery_window

0x41b9,	// (0x0004156f) bg_popup_sub_pane_cp25_ParamLimits

0x41b9,	// (0x0004156f) bg_popup_sub_pane_cp25

0xdd81,	// (0x0004b137) popup_battery_window_g1_ParamLimits

0xdd81,	// (0x0004b137) popup_battery_window_g1

0xdd8d,	// (0x0004b143) popup_battery_window_t1_ParamLimits

0xdd8d,	// (0x0004b143) popup_battery_window_t1

0xdd9f,	// (0x0004b155) popup_battery_window_t2_ParamLimits

0xdd9f,	// (0x0004b155) popup_battery_window_t2

0x0001,

0xfcbf,	// (0x0004d075) popup_battery_window_t_ParamLimits

0xfcbf,	// (0x0004d075) popup_battery_window_t

0xadb3,	// (0x00048169) midp_canvas_pane_ParamLimits

0xae17,	// (0x000481cd) midp_keypad_pane_ParamLimits

0xae17,	// (0x000481cd) midp_keypad_pane

0x483d,	// (0x00041bf3) main_midp_pane_ParamLimits

0x71b0,	// (0x00044566) signal_pane_g2_cp_ParamLimits

0xddbc,	// (0x0004b172) aid_size_cell_midp_keypad_ParamLimits

0xddbc,	// (0x0004b172) aid_size_cell_midp_keypad

0xddd6,	// (0x0004b18c) midp_keyp_game_grid_pane_ParamLimits

0xddd6,	// (0x0004b18c) midp_keyp_game_grid_pane

0xddf6,	// (0x0004b1ac) midp_keyp_rocker_pane_ParamLimits

0xddf6,	// (0x0004b1ac) midp_keyp_rocker_pane

0xde21,	// (0x0004b1d7) midp_keyp_sk_left_pane_ParamLimits

0xde21,	// (0x0004b1d7) midp_keyp_sk_left_pane

0xde7b,	// (0x0004b231) midp_keyp_sk_right_pane_ParamLimits

0xde7b,	// (0x0004b231) midp_keyp_sk_right_pane

0x3f4c,	// (0x00041302) bg_button_pane_cp03

0xded5,	// (0x0004b28b) midp_keyp_sk_left_pane_g1

0x3f4c,	// (0x00041302) bg_button_pane_cp04

0xded5,	// (0x0004b28b) midp_keyp_sk_right_pane_g1

0x74b1,	// (0x00044867) midp_keyp_rocker_pane_g1

0xdede,	// (0x0004b294) keyp_game_cell_pane_ParamLimits

0xdede,	// (0x0004b294) keyp_game_cell_pane

0x3f4c,	// (0x00041302) bg_button_pane_cp02

0xdef1,	// (0x0004b2a7) keyp_game_cell_pane_g1

0x86f6,	// (0x00045aac) popup_fep_vkb2_window_ParamLimits

0x86f6,	// (0x00045aac) popup_fep_vkb2_window

0x9c94,	// (0x0004704a) aid_size_cell_vkb2_ParamLimits

0x9c94,	// (0x0004704a) aid_size_cell_vkb2

0x9ce8,	// (0x0004709e) popup_fep_vkb2_window_g1_ParamLimits

0x9ce8,	// (0x0004709e) popup_fep_vkb2_window_g1

0x9d28,	// (0x000470de) vkb2_area_bottom_pane_ParamLimits

0x9d28,	// (0x000470de) vkb2_area_bottom_pane

0x9d74,	// (0x0004712a) vkb2_area_keypad_pane_ParamLimits

0x9d74,	// (0x0004712a) vkb2_area_keypad_pane

0x9db6,	// (0x0004716c) vkb2_area_top_pane_ParamLimits

0x9db6,	// (0x0004716c) vkb2_area_top_pane

0x9e30,	// (0x000471e6) vkb2_top_entry_pane_ParamLimits

0x9e30,	// (0x000471e6) vkb2_top_entry_pane

0x9e5a,	// (0x00047210) vkb2_top_grid_left_pane_ParamLimits

0x9e5a,	// (0x00047210) vkb2_top_grid_left_pane

0x9e78,	// (0x0004722e) vkb2_top_grid_right_pane_ParamLimits

0x9e78,	// (0x0004722e) vkb2_top_grid_right_pane

0x9e96,	// (0x0004724c) vkb2_cell_keypad_pane_ParamLimits

0x9e96,	// (0x0004724c) vkb2_cell_keypad_pane

0x9f67,	// (0x0004731d) vkb2_area_bottom_grid_pane_ParamLimits

0x9f67,	// (0x0004731d) vkb2_area_bottom_grid_pane

0x9f8d,	// (0x00047343) vkb2_area_bottom_pane_g1_ParamLimits

0x9f8d,	// (0x00047343) vkb2_area_bottom_pane_g1

0x9fb1,	// (0x00047367) vkb2_area_bottom_pane_g2_ParamLimits

0x9fb1,	// (0x00047367) vkb2_area_bottom_pane_g2

0x9fdf,	// (0x00047395) vkb2_area_bottom_pane_g3_ParamLimits

0x9fdf,	// (0x00047395) vkb2_area_bottom_pane_g3

0x0002,

0xfcc4,	// (0x0004d07a) vkb2_area_bottom_pane_g_ParamLimits

0xfcc4,	// (0x0004d07a) vkb2_area_bottom_pane_g

0xa040,	// (0x000473f6) vkb2_top_cell_left_pane_ParamLimits

0xa040,	// (0x000473f6) vkb2_top_cell_left_pane

0xef09,	// (0x0004c2bf) vkb2_top_entry_pane_g1_ParamLimits

0xef09,	// (0x0004c2bf) vkb2_top_entry_pane_g1

0xef17,	// (0x0004c2cd) vkb2_top_entry_pane_t1_ParamLimits

0xef17,	// (0x0004c2cd) vkb2_top_entry_pane_t1

0xdf02,	// (0x0004b2b8) vkb2_top_entry_pane_t2_ParamLimits

0xdf02,	// (0x0004b2b8) vkb2_top_entry_pane_t2

0xdf34,	// (0x0004b2ea) vkb2_top_entry_pane_t3_ParamLimits

0xdf34,	// (0x0004b2ea) vkb2_top_entry_pane_t3

0x0002,

0xfccb,	// (0x0004d081) vkb2_top_entry_pane_t_ParamLimits

0xfccb,	// (0x0004d081) vkb2_top_entry_pane_t

0xa08d,	// (0x00047443) vkb2_top_grid_right_pane_g1_ParamLimits

0xa08d,	// (0x00047443) vkb2_top_grid_right_pane_g1

0xa0a3,	// (0x00047459) vkb2_top_grid_right_pane_g2_ParamLimits

0xa0a3,	// (0x00047459) vkb2_top_grid_right_pane_g2

0xa0bb,	// (0x00047471) vkb2_top_grid_right_pane_g3_ParamLimits

0xa0bb,	// (0x00047471) vkb2_top_grid_right_pane_g3

0xa0d3,	// (0x00047489) vkb2_top_grid_right_pane_g4_ParamLimits

0xa0d3,	// (0x00047489) vkb2_top_grid_right_pane_g4

0x0003,

0xfcd2,	// (0x0004d088) vkb2_top_grid_right_pane_g_ParamLimits

0xfcd2,	// (0x0004d088) vkb2_top_grid_right_pane_g

0xa0e9,	// (0x0004749f) vkb2_top_cell_left_pane_g1

0xa100,	// (0x000474b6) vkb2_cell_keypad_pane_g1_ParamLimits

0xa100,	// (0x000474b6) vkb2_cell_keypad_pane_g1

0xdf58,	// (0x0004b30e) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf58,	// (0x0004b30e) vkb2_cell_keypad_pane_t1

0xa10e,	// (0x000474c4) vkb2_cell_bottom_grid_pane_ParamLimits

0xa10e,	// (0x000474c4) vkb2_cell_bottom_grid_pane

0xa147,	// (0x000474fd) vkb2_cell_bottom_grid_pane_g1

0xdb33,	// (0x0004aee9) aid_call2_pane_cp02

0xdb3b,	// (0x0004aef1) aid_call_pane_cp02

0xdb43,	// (0x0004aef9) clock_digital_number_pane_cp10

0xdb4b,	// (0x0004af01) clock_digital_number_pane_cp11

0xdb53,	// (0x0004af09) clock_digital_number_pane_cp12

0xdb5b,	// (0x0004af11) clock_digital_number_pane_cp13

0xdb63,	// (0x0004af19) clock_digital_separator_pane_cp10

0x4c07,	// (0x00041fbd) popup_clock_digital_analogue_window_cp2_g1

0x4c07,	// (0x00041fbd) popup_clock_digital_analogue_window_cp2_g2

0xdb6b,	// (0x0004af21) popup_clock_digital_analogue_window_cp2_g3

0x4c07,	// (0x00041fbd) popup_clock_digital_analogue_window_cp2_g4

0xdb6b,	// (0x0004af21) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfc8c,	// (0x0004d042) popup_clock_digital_analogue_window_cp2_g

0xdb73,	// (0x0004af29) popup_clock_digital_analogue_window_cp2_t1

0xdb81,	// (0x0004af37) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x034e,	// (0x0003d704) popup_clock_digital_analogue_window_cp2_t

0x74b1,	// (0x00044867) clock_digital_number_pane_cp10_g1

0x74b1,	// (0x00044867) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004cef9) clock_digital_number_pane_cp10_g

0x74b1,	// (0x00044867) clock_digital_separator_pane_cp10_g1

0x74b1,	// (0x00044867) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004cef9) clock_digital_separator_pane_cp10_g

0xd9b0,	// (0x0004ad66) uniindi_top_pane_g3

0xd9c1,	// (0x0004ad77) uniindi_top_pane_g4

0x9f21,	// (0x000472d7) vkb2_row_keypad_pane_ParamLimits

0x9f21,	// (0x000472d7) vkb2_row_keypad_pane

0xa167,	// (0x0004751d) vkb2_cell_t_keypad_pane_ParamLimits

0xa167,	// (0x0004751d) vkb2_cell_t_keypad_pane

0xa177,	// (0x0004752d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa177,	// (0x0004752d) vkb2_cell_t_keypad_pane_cp08

0xa18a,	// (0x00047540) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa18a,	// (0x00047540) vkb2_cell_t_keypad_pane_cp09

0xa19e,	// (0x00047554) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa19e,	// (0x00047554) vkb2_cell_t_keypad_pane_cp01

0xa1af,	// (0x00047565) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa1af,	// (0x00047565) vkb2_cell_t_keypad_pane_cp02

0xa1c0,	// (0x00047576) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa1c0,	// (0x00047576) vkb2_cell_t_keypad_pane_cp03

0xa1d1,	// (0x00047587) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa1d1,	// (0x00047587) vkb2_cell_t_keypad_pane_cp04

0xa1e2,	// (0x00047598) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa1e2,	// (0x00047598) vkb2_cell_t_keypad_pane_cp05

0xa1f3,	// (0x000475a9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa1f3,	// (0x000475a9) vkb2_cell_t_keypad_pane_cp06

0xa204,	// (0x000475ba) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa204,	// (0x000475ba) vkb2_cell_t_keypad_pane_cp07

0xa215,	// (0x000475cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa215,	// (0x000475cb) vkb2_cell_t_keypad_pane_cp10

0x99ce,	// (0x00046d84) vkb2_cell_t_keypad_pane_g1

0xdf6f,	// (0x0004b325) vkb2_cell_t_keypad_pane_t1

0x85fb,	// (0x000459b1) popup_grid_graphic2_window

0xef49,	// (0x0004c2ff) aid_size_cell_graphic2_ParamLimits

0xef49,	// (0x0004c2ff) aid_size_cell_graphic2

0xef81,	// (0x0004c337) bg_popup_window_pane_cp21_ParamLimits

0xef81,	// (0x0004c337) bg_popup_window_pane_cp21

0xef8f,	// (0x0004c345) graphic2_pages_pane_ParamLimits

0xef8f,	// (0x0004c345) graphic2_pages_pane

0xefd5,	// (0x0004c38b) grid_graphic2_control_pane_ParamLimits

0xefd5,	// (0x0004c38b) grid_graphic2_control_pane

0xf013,	// (0x0004c3c9) grid_graphic2_pane_ParamLimits

0xf013,	// (0x0004c3c9) grid_graphic2_pane

0xf087,	// (0x0004c43d) cell_graphic2_pane

0x3f4c,	// (0x00041302) main_comp_mode_pane

0xd215,	// (0x0004a5cb) list_ai3_gene_pane_ParamLimits

0xd5f8,	// (0x0004a9ae) bg_popup_window_pane_cp19_ParamLimits

0xd604,	// (0x0004a9ba) bg_touch_area_indi_pane_ParamLimits

0xd604,	// (0x0004a9ba) bg_touch_area_indi_pane

0xd61a,	// (0x0004a9d0) bg_touch_area_indi_pane_cp01_ParamLimits

0xd61a,	// (0x0004a9d0) bg_touch_area_indi_pane_cp01

0xd630,	// (0x0004a9e6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd630,	// (0x0004a9e6) bg_touch_area_indi_pane_cp02

0xd648,	// (0x0004a9fe) bg_touch_area_indi_pane_cp03_ParamLimits

0xd648,	// (0x0004a9fe) bg_touch_area_indi_pane_cp03

0xd662,	// (0x0004aa18) popup_slider_window_g1_ParamLimits

0xd67e,	// (0x0004aa34) popup_slider_window_g2_ParamLimits

0xd69a,	// (0x0004aa50) popup_slider_window_g3_ParamLimits

0x02d8,	// (0x0003d68e) popup_slider_window_g_ParamLimits

0xd6f6,	// (0x0004aaac) popup_slider_window_t1_ParamLimits

0xd76a,	// (0x0004ab20) small_volume_slider_vertical_pane_ParamLimits

0xf087,	// (0x0004c43d) cell_graphic2_pane_ParamLimits

0xf0d5,	// (0x0004c48b) bg_button_pane_cp10_ParamLimits

0xf0d5,	// (0x0004c48b) bg_button_pane_cp10

0xf0e8,	// (0x0004c49e) bg_button_pane_cp11_ParamLimits

0xf0e8,	// (0x0004c49e) bg_button_pane_cp11

0xf0fb,	// (0x0004c4b1) graphic2_pages_pane_g1_ParamLimits

0xf0fb,	// (0x0004c4b1) graphic2_pages_pane_g1

0xf116,	// (0x0004c4cc) graphic2_pages_pane_g2_ParamLimits

0xf116,	// (0x0004c4cc) graphic2_pages_pane_g2

0x0001,

0xfce0,	// (0x0004d096) graphic2_pages_pane_g_ParamLimits

0xfce0,	// (0x0004d096) graphic2_pages_pane_g

0xf12e,	// (0x0004c4e4) graphic2_pages_pane_t1_ParamLimits

0xf12e,	// (0x0004c4e4) graphic2_pages_pane_t1

0xf144,	// (0x0004c4fa) cell_graphic2_control_pane_ParamLimits

0xf144,	// (0x0004c4fa) cell_graphic2_control_pane

0xf165,	// (0x0004c51b) cell_graphic2_pane_g1_ParamLimits

0xf165,	// (0x0004c51b) cell_graphic2_pane_g1

0xf172,	// (0x0004c528) cell_graphic2_pane_g2_ParamLimits

0xf172,	// (0x0004c528) cell_graphic2_pane_g2

0xf17f,	// (0x0004c535) cell_graphic2_pane_g3_ParamLimits

0xf17f,	// (0x0004c535) cell_graphic2_pane_g3

0xf18c,	// (0x0004c542) cell_graphic2_pane_g4_ParamLimits

0xf18c,	// (0x0004c542) cell_graphic2_pane_g4

0xf199,	// (0x0004c54f) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0004c54f) cell_graphic2_pane_g5

0x0004,

0xfce5,	// (0x0004d09b) cell_graphic2_pane_g_ParamLimits

0xfce5,	// (0x0004d09b) cell_graphic2_pane_g

0xf1b4,	// (0x0004c56a) cell_graphic2_pane_t1_ParamLimits

0xf1b4,	// (0x0004c56a) cell_graphic2_pane_t1

0x575d,	// (0x00042b13) grid_highlight_pane_cp11_ParamLimits

0x575d,	// (0x00042b13) grid_highlight_pane_cp11

0x41b9,	// (0x0004156f) bg_button_pane_cp05

0xf1dd,	// (0x0004c593) cell_graphic2_control_pane_g1

0x74b1,	// (0x00044867) bg_touch_area_indi_pane_g1

0xdf81,	// (0x0004b337) aid_cmod_rocker_key_size

0xdf8b,	// (0x0004b341) aid_cmode_itu_key_size

0xdf95,	// (0x0004b34b) main_cmode_video_pane

0xdf9f,	// (0x0004b355) main_comp_mode_itu_pane

0xdfab,	// (0x0004b361) main_comp_mode_rocker_pane

0xdfb7,	// (0x0004b36d) cell_cmode_rocker_pane_ParamLimits

0xdfb7,	// (0x0004b36d) cell_cmode_rocker_pane

0xdfc9,	// (0x0004b37f) cell_cmode_itu_pane_ParamLimits

0xdfc9,	// (0x0004b37f) cell_cmode_itu_pane

0x46f2,	// (0x00041aa8) bg_button_pane_cp06_ParamLimits

0x46f2,	// (0x00041aa8) bg_button_pane_cp06

0x771a,	// (0x00044ad0) cell_cmode_rocker_pane_g1_ParamLimits

0x771a,	// (0x00044ad0) cell_cmode_rocker_pane_g1

0xd80e,	// (0x0004abc4) cell_cmode_rocker_pane_g2_ParamLimits

0xd80e,	// (0x0004abc4) cell_cmode_rocker_pane_g2

0x0001,

0xfcf5,	// (0x0004d0ab) cell_cmode_rocker_pane_g_ParamLimits

0xfcf5,	// (0x0004d0ab) cell_cmode_rocker_pane_g

0x3f4c,	// (0x00041302) bg_button_pane_cp07

0xdfde,	// (0x0004b394) cell_cmode_itu_pane_g1

0xdfe7,	// (0x0004b39d) cell_cmode_itu_pane_t1

0xdff5,	// (0x0004b3ab) cell_cmode_itu_pane_t2

0x0001,

0x039c,	// (0x0003d752) cell_cmode_itu_pane_t

0xda32,	// (0x0004ade8) aid_touch_ctrl_left

0xda3a,	// (0x0004adf0) aid_touch_ctrl_right

0x3f4c,	// (0x00041302) compa_mode_pane

0xf205,	// (0x0004c5bb) aid_cmod_rocker_key_size_cp

0xf20f,	// (0x0004c5c5) aid_cmode_itu_key_size_cp

0xe003,	// (0x0004b3b9) compa_mode_pane_g1

0xe00b,	// (0x0004b3c1) compa_mode_pane_g2

0xe013,	// (0x0004b3c9) compa_mode_pane_g3

0x0002,

0x03a1,	// (0x0003d757) compa_mode_pane_g

0xf219,	// (0x0004c5cf) main_comp_mode_itu_pane_cp

0xf221,	// (0x0004c5d7) main_comp_mode_rocker_pane_cp

0xf229,	// (0x0004c5df) cell_cmode_itu_pane_cp_ParamLimits

0xf229,	// (0x0004c5df) cell_cmode_itu_pane_cp

0xf23e,	// (0x0004c5f4) cell_cmode_rocker_pane_cp_ParamLimits

0xf23e,	// (0x0004c5f4) cell_cmode_rocker_pane_cp

0x46f2,	// (0x00041aa8) bg_button_pane_cp06_cp_ParamLimits

0x46f2,	// (0x00041aa8) bg_button_pane_cp06_cp

0x771a,	// (0x00044ad0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x771a,	// (0x00044ad0) cell_cmode_rocker_pane_g1_cp

0x74b1,	// (0x00044867) cell_cmode_rocker_pane_g2_cp

0x3f4c,	// (0x00041302) bg_button_pane_cp07_cp

0xf250,	// (0x0004c606) cell_cmode_itu_pane_g1_cp

0xf259,	// (0x0004c60f) cell_cmode_itu_pane_t1_cp

0xf259,	// (0x0004c60f) cell_cmode_itu_pane_t2_cp

0xc21d,	// (0x000495d3) settings_code_pane_cp2

0x3fbc,	// (0x00041372) bg_popup_window_pane_cp3_ParamLimits

0x43f2,	// (0x000417a8) heading_pane_cp3_ParamLimits

0x43fe,	// (0x000417b4) listscroll_popup_graphic_pane_ParamLimits

0x9777,	// (0x00046b2d) fep_hwr_aid_pane_ParamLimits

0x9bef,	// (0x00046fa5) aid_touch_sctrl_top_ParamLimits

0x9c0a,	// (0x00046fc0) sctrl_sk_top_pane_g1_ParamLimits

0x99ce,	// (0x00046d84) sctrl_sk_top_pane_g2_ParamLimits

0xfc5e,	// (0x0004d014) sctrl_sk_top_pane_g_ParamLimits

0x9c17,	// (0x00046fcd) sctrl_sk_top_pane_t1_ParamLimits

0x9bef,	// (0x00046fa5) aid_touch_sctrl_bottom_ParamLimits

0x9c17,	// (0x00046fcd) sctrl_sk_bottom_pane_t1_ParamLimits

0xd97c,	// (0x0004ad32) aid_area_touch_clock

0x9df8,	// (0x000471ae) aid_vkb2_area_top_pane_cell_ParamLimits

0x9df8,	// (0x000471ae) aid_vkb2_area_top_pane_cell

0x9f43,	// (0x000472f9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9f43,	// (0x000472f9) aid_vkb2_area_bottom_pane_cell

0xdefa,	// (0x0004b2b0) popup_char_count_window

0xe01b,	// (0x0004b3d1) popup_char_count_window_g1

0xe024,	// (0x0004b3da) popup_char_count_window_g2

0xe02d,	// (0x0004b3e3) popup_char_count_window_g3

0x0002,

0x03a8,	// (0x0003d75e) popup_char_count_window_g

0xe036,	// (0x0004b3ec) popup_char_count_window_t1

0x9cc6,	// (0x0004707c) popup_fep_char_preview_window_ParamLimits

0x9cc6,	// (0x0004707c) popup_fep_char_preview_window

0x9e16,	// (0x000471cc) vkb2_top_candi_pane_ParamLimits

0x9e16,	// (0x000471cc) vkb2_top_candi_pane

0xf267,	// (0x0004c61d) cell_vkb2_top_candi_pane_ParamLimits

0xf267,	// (0x0004c61d) cell_vkb2_top_candi_pane

0xa22a,	// (0x000475e0) bg_popup_fep_char_preview_window_ParamLimits

0xa22a,	// (0x000475e0) bg_popup_fep_char_preview_window

0xa238,	// (0x000475ee) popup_fep_char_preview_window_t1_ParamLimits

0xa238,	// (0x000475ee) popup_fep_char_preview_window_t1

0xe044,	// (0x0004b3fa) bg_popup_fep_char_preview_window_g1

0xe04c,	// (0x0004b402) bg_popup_fep_char_preview_window_g2

0xe054,	// (0x0004b40a) bg_popup_fep_char_preview_window_g3

0xe05c,	// (0x0004b412) bg_popup_fep_char_preview_window_g4

0xe064,	// (0x0004b41a) bg_popup_fep_char_preview_window_g5

0xa272,	// (0x00047628) bg_popup_fep_char_preview_window_g6

0xe06c,	// (0x0004b422) bg_popup_fep_char_preview_window_g7

0xe074,	// (0x0004b42a) bg_popup_fep_char_preview_window_g8

0xe07c,	// (0x0004b432) bg_popup_fep_char_preview_window_g9

0x0008,

0xfcfa,	// (0x0004d0b0) bg_popup_fep_char_preview_window_g

0x99ce,	// (0x00046d84) cell_vkb2_top_candi_pane_g1_ParamLimits

0x99ce,	// (0x00046d84) cell_vkb2_top_candi_pane_g1

0x99dc,	// (0x00046d92) cell_vkb2_top_candi_pane_g2_ParamLimits

0x99dc,	// (0x00046d92) cell_vkb2_top_candi_pane_g2

0xdc02,	// (0x0004afb8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdc02,	// (0x0004afb8) cell_vkb2_top_candi_pane_g3

0xa27a,	// (0x00047630) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa27a,	// (0x00047630) cell_vkb2_top_candi_pane_g4

0xc7c2,	// (0x00049b78) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7c2,	// (0x00049b78) cell_vkb2_top_candi_pane_g5

0xa29b,	// (0x00047651) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa29b,	// (0x00047651) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd0d,	// (0x0004d0c3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd0d,	// (0x0004d0c3) cell_vkb2_top_candi_pane_g

0xa2a9,	// (0x0004765f) cell_vkb2_top_candi_pane_t1

0x9586,	// (0x0004693c) aid_size_touch_slider_mark_ParamLimits

0x9586,	// (0x0004693c) aid_size_touch_slider_mark

0xefc5,	// (0x0004c37b) grid_graphic2_catg_pane_ParamLimits

0xefc5,	// (0x0004c37b) grid_graphic2_catg_pane

0xf063,	// (0x0004c419) popup_grid_graphic2_window_t1_ParamLimits

0xf063,	// (0x0004c419) popup_grid_graphic2_window_t1

0xf075,	// (0x0004c42b) popup_grid_graphic2_window_t2_ParamLimits

0xf075,	// (0x0004c42b) popup_grid_graphic2_window_t2

0x0001,

0xfcdb,	// (0x0004d091) popup_grid_graphic2_window_t_ParamLimits

0xfcdb,	// (0x0004d091) popup_grid_graphic2_window_t

0x41b9,	// (0x0004156f) bg_button_pane_cp05_ParamLimits

0xf1dd,	// (0x0004c593) cell_graphic2_control_pane_g1_ParamLimits

0xf2b4,	// (0x0004c66a) cell_graphic2_catg_pane_ParamLimits

0xf2b4,	// (0x0004c66a) cell_graphic2_catg_pane

0x3f4c,	// (0x00041302) bg_button_pane_cp12

0xf2c6,	// (0x0004c67c) cell_graphic2_catg_pane_g1

0xd948,	// (0x0004acfe) cell_tb_ext_pane_t1_ParamLimits

0xa060,	// (0x00047416) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa060,	// (0x00047416) vkb2_top_cell_right_narrow_pane

0xa078,	// (0x0004742e) vkb2_top_cell_right_wide_pane_ParamLimits

0xa078,	// (0x0004742e) vkb2_top_cell_right_wide_pane

0x9769,	// (0x00046b1f) bg_vkb2_func_pane_ParamLimits

0x9769,	// (0x00046b1f) bg_vkb2_func_pane

0xa0e9,	// (0x0004749f) vkb2_top_cell_left_pane_g1_ParamLimits

0x9769,	// (0x00046b1f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9769,	// (0x00046b1f) bg_vkb2_fuc_pane_cp03

0xa147,	// (0x000474fd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x567d,	// (0x00042a33) bg_vkb2_func_pane_g1

0x5675,	// (0x00042a2b) bg_vkb2_func_pane_g2

0x5685,	// (0x00042a3b) bg_vkb2_func_pane_g3

0x568d,	// (0x00042a43) bg_vkb2_func_pane_g4

0x5695,	// (0x00042a4b) bg_vkb2_func_pane_g5

0x569d,	// (0x00042a53) bg_vkb2_func_pane_g6

0x56ad,	// (0x00042a63) bg_vkb2_func_pane_g7

0x56a5,	// (0x00042a5b) bg_vkb2_func_pane_g8

0x566d,	// (0x00042a23) bg_vkb2_func_pane_g9

0x0008,

0xfd1a,	// (0x0004d0d0) bg_vkb2_func_pane_g

0x9769,	// (0x00046b1f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9769,	// (0x00046b1f) bg_vkb2_fuc_pane_cp01

0xa0e9,	// (0x0004749f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa0e9,	// (0x0004749f) vkb2_top_cell_right_wide_pane_g1

0x9769,	// (0x00046b1f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9769,	// (0x00046b1f) bg_vkb2_fuc_pane_cp02

0xa147,	// (0x000474fd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa147,	// (0x000474fd) vkb2_top_cell_right_narrow_pane_g1

0xd576,	// (0x0004a92c) aid_touch_area_decrease_ParamLimits

0xd576,	// (0x0004a92c) aid_touch_area_decrease

0xd59a,	// (0x0004a950) aid_touch_area_increase_ParamLimits

0xd59a,	// (0x0004a950) aid_touch_area_increase

0xd5a6,	// (0x0004a95c) aid_touch_area_mute_ParamLimits

0xd5a6,	// (0x0004a95c) aid_touch_area_mute

0xd5ca,	// (0x0004a980) aid_touch_area_slider_ParamLimits

0xd5ca,	// (0x0004a980) aid_touch_area_slider

0xd6b6,	// (0x0004aa6c) popup_slider_window_g4_ParamLimits

0xd6b6,	// (0x0004aa6c) popup_slider_window_g4

0xd6c2,	// (0x0004aa78) popup_slider_window_g5_ParamLimits

0xd6c2,	// (0x0004aa78) popup_slider_window_g5

0xd6e4,	// (0x0004aa9a) popup_slider_window_g6_ParamLimits

0xd6e4,	// (0x0004aa9a) popup_slider_window_g6

0xd724,	// (0x0004aada) popup_slider_window_t2_ParamLimits

0xd724,	// (0x0004aada) popup_slider_window_t2

0x0001,

0x02e5,	// (0x0003d69b) popup_slider_window_t_ParamLimits

0x02e5,	// (0x0003d69b) popup_slider_window_t

0xd73c,	// (0x0004aaf2) slider_pane_ParamLimits

0xd73c,	// (0x0004aaf2) slider_pane

0xe084,	// (0x0004b43a) slider_pane_g1_ParamLimits

0xe084,	// (0x0004b43a) slider_pane_g1

0xe098,	// (0x0004b44e) slider_pane_g2_ParamLimits

0xe098,	// (0x0004b44e) slider_pane_g2

0xe0ae,	// (0x0004b464) slider_pane_g3_ParamLimits

0xe0ae,	// (0x0004b464) slider_pane_g3

0x0003,

0x03e2,	// (0x0003d798) slider_pane_g_ParamLimits

0x03e2,	// (0x0003d798) slider_pane_g

0xbab0,	// (0x00048e66) popup_tb_float_extension_window_ParamLimits

0xbab0,	// (0x00048e66) popup_tb_float_extension_window

0xe0da,	// (0x0004b490) aid_size_cell_tb_float_ext

0x3f4c,	// (0x00041302) bg_popup_sub_window_cp28

0xe0e6,	// (0x0004b49c) grid_tb_float_ext_pane

0xe0f0,	// (0x0004b4a6) cell_tb_float_ext_pane_ParamLimits

0xe0f0,	// (0x0004b4a6) cell_tb_float_ext_pane

0xe10a,	// (0x0004b4c0) cell_tb_float_ext_pane_g1

0xe113,	// (0x0004b4c9) grid_highlight_pane_cp12

0x98b8,	// (0x00046c6e) cell_last_hwr_side_pane_ParamLimits

0x98b8,	// (0x00046c6e) cell_last_hwr_side_pane

0x74b1,	// (0x00044867) cell_last_hwr_side_pane_g1

0xe11c,	// (0x0004b4d2) cell_last_hwr_side_pane_g2

0x0001,

0xfd2d,	// (0x0004d0e3) cell_last_hwr_side_pane_g

0xa00f,	// (0x000473c5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa00f,	// (0x000473c5) vkb2_area_bottom_space_btn_pane

0x99ce,	// (0x00046d84) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf6f,	// (0x0004b325) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa2a9,	// (0x0004765f) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa2c8,	// (0x0004767e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa2c8,	// (0x0004767e) vkb2_area_bottom_space_btn_pane_g1

0xa302,	// (0x000476b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa302,	// (0x000476b8) vkb2_area_bottom_space_btn_pane_g2

0xa338,	// (0x000476ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa338,	// (0x000476ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd32,	// (0x0004d0e8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd32,	// (0x0004d0e8) vkb2_area_bottom_space_btn_pane_g

0x982c,	// (0x00046be2) cel_fep_hwr_func_pane_ParamLimits

0x982c,	// (0x00046be2) cel_fep_hwr_func_pane

0x9868,	// (0x00046c1e) cell_hwr_side_button_pane_ParamLimits

0x9868,	// (0x00046c1e) cell_hwr_side_button_pane

0xd97c,	// (0x0004ad32) aid_area_touch_clock_ParamLimits

0x41b9,	// (0x0004156f) bg_uniindi_top_pane_ParamLimits

0xd98e,	// (0x0004ad44) uniindi_top_pane_g1_ParamLimits

0xd9a4,	// (0x0004ad5a) uniindi_top_pane_g2_ParamLimits

0xd9b0,	// (0x0004ad66) uniindi_top_pane_g3_ParamLimits

0xd9c1,	// (0x0004ad77) uniindi_top_pane_g4_ParamLimits

0x031d,	// (0x0003d6d3) uniindi_top_pane_g_ParamLimits

0xd9ce,	// (0x0004ad84) uniindi_top_pane_t1_ParamLimits

0x41b9,	// (0x0004156f) bg_vkb2_func_pane_cp01_ParamLimits

0x41b9,	// (0x0004156f) bg_vkb2_func_pane_cp01

0xe125,	// (0x0004b4db) cel_fep_hwr_func_pane_g1_ParamLimits

0xe125,	// (0x0004b4db) cel_fep_hwr_func_pane_g1

0x41b9,	// (0x0004156f) bg_vkb2_func_pane_cp02_ParamLimits

0x41b9,	// (0x0004156f) bg_vkb2_func_pane_cp02

0xe125,	// (0x0004b4db) cell_hwr_side_button_pane_g1_ParamLimits

0xe125,	// (0x0004b4db) cell_hwr_side_button_pane_g1

0x5577,	// (0x0004292d) status_pane_g4_ParamLimits

0x5577,	// (0x0004292d) status_pane_g4

0x558f,	// (0x00042945) status_pane_t1

0x7341,	// (0x000446f7) form2_midp_gauge_slider_cont_pane

0x7349,	// (0x000446ff) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc482,	// (0x00049838) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc494,	// (0x0004984a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0004ceac) form2_midp_gauge_slider_pane_t_ParamLimits

0x735b,	// (0x00044711) form2_midp_slider_pane_ParamLimits

0x9c86,	// (0x0004703c) aid_size_cell_func_vkb2_ParamLimits

0x9c86,	// (0x0004703c) aid_size_cell_func_vkb2

0xe0c6,	// (0x0004b47c) slider_pane_g4_ParamLimits

0xe0c6,	// (0x0004b47c) slider_pane_g4

0xa382,	// (0x00047738) form2_midp_gauge_slider_pane_t2_cp01

0xa390,	// (0x00047746) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa390,	// (0x00047746) form2_midp_gauge_slider_pane_t3_cp01

0xa3ad,	// (0x00047763) form2_midp_slider_pane_cp01

0x3f4c,	// (0x00041302) navi_smil_pane

0xe155,	// (0x0004b50b) navi_smil_pane_g1

0xe15d,	// (0x0004b513) navi_smil_pane_t1

0xe133,	// (0x0004b4e9) form2_midp_slider_pane_g1

0xe13c,	// (0x0004b4f2) form2_midp_slider_pane_g2

0xe144,	// (0x0004b4fa) form2_midp_slider_pane_g3

0xe133,	// (0x0004b4e9) form2_midp_slider_pane_g4

0xf2cf,	// (0x0004c685) form2_midp_slider_pane_g5

0x0004,

0xfd3b,	// (0x0004d0f1) form2_midp_slider_pane_g

0xa372,	// (0x00047728) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa372,	// (0x00047728) vkb2_area_bottom_space_btn_pane_g4

0xbc1b,	// (0x00048fd1) lc0_navi_pane_ParamLimits

0xbc1b,	// (0x00048fd1) lc0_navi_pane

0xbc91,	// (0x00049047) lc0_stat_indi_pane_ParamLimits

0xbc91,	// (0x00049047) lc0_stat_indi_pane

0xbca8,	// (0x0004905e) ls0_title_pane_ParamLimits

0xbca8,	// (0x0004905e) ls0_title_pane

0x46f2,	// (0x00041aa8) bg_popup_sub_pane_cp14_ParamLimits

0xd963,	// (0x0004ad19) list_uniindi_pane_ParamLimits

0xd96f,	// (0x0004ad25) uniindi_top_pane_ParamLimits

0xda0a,	// (0x0004adc0) list_single_uniindi_pane_g1_ParamLimits

0xda1d,	// (0x0004add3) list_single_uniindi_pane_t1_ParamLimits

0xa3b6,	// (0x0004776c) lc0_stat_clock_pane_ParamLimits

0xa3b6,	// (0x0004776c) lc0_stat_clock_pane

0xf2d8,	// (0x0004c68e) lc0_stat_indi_pane_g1_ParamLimits

0xf2d8,	// (0x0004c68e) lc0_stat_indi_pane_g1

0xf2e5,	// (0x0004c69b) lc0_stat_indi_pane_g2_ParamLimits

0xf2e5,	// (0x0004c69b) lc0_stat_indi_pane_g2

0x0001,

0xfd46,	// (0x0004d0fc) lc0_stat_indi_pane_g_ParamLimits

0xfd46,	// (0x0004d0fc) lc0_stat_indi_pane_g

0xa3c3,	// (0x00047779) lc0_uni_indicator_pane_ParamLimits

0xa3c3,	// (0x00047779) lc0_uni_indicator_pane

0xe16b,	// (0x0004b521) ls0_title_pane_g1_ParamLimits

0xe16b,	// (0x0004b521) ls0_title_pane_g1

0xf2f2,	// (0x0004c6a8) ls0_title_pane_t1_ParamLimits

0xf2f2,	// (0x0004c6a8) ls0_title_pane_t1

0xa3d0,	// (0x00047786) lc0_uni_indicator_pane_g1_ParamLimits

0xa3d0,	// (0x00047786) lc0_uni_indicator_pane_g1

0xe17f,	// (0x0004b535) lc0_stat_clock_pane_t1

0x3f4c,	// (0x00041302) main_ai5_pane

0xe18d,	// (0x0004b543) ai5_sk_pane_ParamLimits

0xe18d,	// (0x0004b543) ai5_sk_pane

0xf328,	// (0x0004c6de) cell_ai5_widget_pane_ParamLimits

0xf328,	// (0x0004c6de) cell_ai5_widget_pane

0xe19a,	// (0x0004b550) aid_size_cell_widget_grid

0xe1ae,	// (0x0004b564) bg_ai5_widget_pane_ParamLimits

0xe1ae,	// (0x0004b564) bg_ai5_widget_pane

0xe1f8,	// (0x0004b5ae) cell_ai5_widget_pane_g2

0xe208,	// (0x0004b5be) cell_ai5_widget_pane_g3

0xe227,	// (0x0004b5dd) cell_ai5_widget_pane_g4

0xe233,	// (0x0004b5e9) cell_ai5_widget_pane_g5

0xe23f,	// (0x0004b5f5) cell_ai5_widget_pane_g6

0xe24b,	// (0x0004b601) cell_ai5_widget_pane_g7

0xe293,	// (0x0004b649) cell_ai5_widget_pane_t1_ParamLimits

0xe293,	// (0x0004b649) cell_ai5_widget_pane_t1

0xe2b0,	// (0x0004b666) cell_ai5_widget_pane_t2_ParamLimits

0xe2b0,	// (0x0004b666) cell_ai5_widget_pane_t2

0xe2c8,	// (0x0004b67e) cell_ai5_widget_pane_t3_ParamLimits

0xe2c8,	// (0x0004b67e) cell_ai5_widget_pane_t3

0xe2e0,	// (0x0004b696) cell_ai5_widget_pane_t4_ParamLimits

0xe2e0,	// (0x0004b696) cell_ai5_widget_pane_t4

0xe2fa,	// (0x0004b6b0) cell_ai5_widget_pane_t5_ParamLimits

0xe2fa,	// (0x0004b6b0) cell_ai5_widget_pane_t5

0xe319,	// (0x0004b6cf) cell_ai5_widget_pane_t6_ParamLimits

0xe319,	// (0x0004b6cf) cell_ai5_widget_pane_t6

0xe32b,	// (0x0004b6e1) cell_ai5_widget_pane_t7_ParamLimits

0xe32b,	// (0x0004b6e1) cell_ai5_widget_pane_t7

0xe344,	// (0x0004b6fa) cell_ai5_widget_pane_t8_ParamLimits

0xe344,	// (0x0004b6fa) cell_ai5_widget_pane_t8

0x0009,

0x0419,	// (0x0003d7cf) cell_ai5_widget_pane_t_ParamLimits

0x0419,	// (0x0003d7cf) cell_ai5_widget_pane_t

0xe390,	// (0x0004b746) grid_ai5_widget_pane

0x46f2,	// (0x00041aa8) highlight_cell_ai5_widget_pane_ParamLimits

0x46f2,	// (0x00041aa8) highlight_cell_ai5_widget_pane

0xf43d,	// (0x0004c7f3) ai5_sk_left_pane

0xf447,	// (0x0004c7fd) ai5_sk_middle_pane

0xf451,	// (0x0004c807) ai5_sk_right_pane

0xe3a4,	// (0x0004b75a) bg_ai5_widget_pane_g1_ParamLimits

0xe3a4,	// (0x0004b75a) bg_ai5_widget_pane_g1

0xe3b0,	// (0x0004b766) bg_ai5_widget_pane_g2_ParamLimits

0xe3b0,	// (0x0004b766) bg_ai5_widget_pane_g2

0xe3bc,	// (0x0004b772) bg_ai5_widget_pane_g3_ParamLimits

0xe3bc,	// (0x0004b772) bg_ai5_widget_pane_g3

0xe3c8,	// (0x0004b77e) bg_ai5_widget_pane_g4_ParamLimits

0xe3c8,	// (0x0004b77e) bg_ai5_widget_pane_g4

0xe3d4,	// (0x0004b78a) bg_ai5_widget_pane_g5_ParamLimits

0xe3d4,	// (0x0004b78a) bg_ai5_widget_pane_g5

0xe3e0,	// (0x0004b796) bg_ai5_widget_pane_g6_ParamLimits

0xe3e0,	// (0x0004b796) bg_ai5_widget_pane_g6

0xe3ec,	// (0x0004b7a2) bg_ai5_widget_pane_g7_ParamLimits

0xe3ec,	// (0x0004b7a2) bg_ai5_widget_pane_g7

0xe3f8,	// (0x0004b7ae) bg_ai5_widget_pane_g8_ParamLimits

0xe3f8,	// (0x0004b7ae) bg_ai5_widget_pane_g8

0xe404,	// (0x0004b7ba) bg_ai5_widget_pane_g9_ParamLimits

0xe404,	// (0x0004b7ba) bg_ai5_widget_pane_g9

0x0008,

0x042e,	// (0x0003d7e4) bg_ai5_widget_pane_g_ParamLimits

0x042e,	// (0x0003d7e4) bg_ai5_widget_pane_g

0xe437,	// (0x0004b7ed) cell_shortcut_ai5_widget_pane_ParamLimits

0xe437,	// (0x0004b7ed) cell_shortcut_ai5_widget_pane

0x3ff8,	// (0x000413ae) bg_cell_shortcut_ai5_widget_pane

0xe448,	// (0x0004b7fe) cell_grid_ai5_widget_pane_g1

0xe451,	// (0x0004b807) highlight_cell_shortcut_ai5_widget_pane

0x567d,	// (0x00042a33) ai5_sk_left_pane_g1

0xe459,	// (0x0004b80f) ai5_sk_left_pane_g2

0xe461,	// (0x0004b817) ai5_sk_left_pane_g3

0xe469,	// (0x0004b81f) ai5_sk_left_pane_g4

0x0003,

0xfd4b,	// (0x0004d101) ai5_sk_left_pane_g

0xe471,	// (0x0004b827) ai5_sk_left_pane_t1

0x5675,	// (0x00042a2b) ai5_sk_right_pane_g1

0xe47f,	// (0x0004b835) ai5_sk_right_pane_g2

0xe487,	// (0x0004b83d) ai5_sk_right_pane_g3

0xe48f,	// (0x0004b845) ai5_sk_right_pane_g4

0x0003,

0xfd54,	// (0x0004d10a) ai5_sk_right_pane_g

0xe497,	// (0x0004b84d) ai5_sk_right_pane_t1

0x5675,	// (0x00042a2b) ai5_sk_middle_pane_g1

0x567d,	// (0x00042a33) ai5_sk_middle_pane_g2

0x5695,	// (0x00042a4b) ai5_sk_middle_pane_g3

0xe487,	// (0x0004b83d) ai5_sk_middle_pane_g4

0xe461,	// (0x0004b817) ai5_sk_middle_pane_g5

0xe4a5,	// (0x0004b85b) ai5_sk_middle_pane_g6

0xf45b,	// (0x0004c811) ai5_sk_middle_pane_g7

0x0006,

0xfd5d,	// (0x0004d113) ai5_sk_middle_pane_g

0xbb60,	// (0x00048f16) aid_touch_area_size_lc0_ParamLimits

0xbb60,	// (0x00048f16) aid_touch_area_size_lc0

0x99fd,	// (0x00046db3) cell_hwr_candidate_pane_t1_ParamLimits

0x5499,	// (0x0004284f) aid_touch_navi_pane

0xbd7f,	// (0x00049135) status_dt_navi_pane_ParamLimits

0xbd7f,	// (0x00049135) status_dt_navi_pane

0xbd8c,	// (0x00049142) status_dt_sta_pane_ParamLimits

0xbd8c,	// (0x00049142) status_dt_sta_pane

0xf463,	// (0x0004c819) dt_sta_controll_pane

0xf470,	// (0x0004c826) dt_sta_indi_pane

0xf47d,	// (0x0004c833) dt_sta_title_pane

0x41b9,	// (0x0004156f) bg_dt_sta_indi_pane_ParamLimits

0x41b9,	// (0x0004156f) bg_dt_sta_indi_pane

0xe4ad,	// (0x0004b863) dt_sta_battery_pane

0xe4b5,	// (0x0004b86b) dt_sta_indi_pane_g1

0xe4be,	// (0x0004b874) dt_sta_indi_pane_g2

0xe4c7,	// (0x0004b87d) dt_sta_indi_pane_g3

0x0002,

0x0462,	// (0x0003d818) dt_sta_indi_pane_g

0xe4d0,	// (0x0004b886) dt_sta_signal_pane

0x46f2,	// (0x00041aa8) bg_dt_sta_title_pane_ParamLimits

0x46f2,	// (0x00041aa8) bg_dt_sta_title_pane

0x633e,	// (0x000436f4) dt_sta_title_pane_g1

0xe4d9,	// (0x0004b88f) dt_sta_title_pane_t1_ParamLimits

0xe4d9,	// (0x0004b88f) dt_sta_title_pane_t1

0x3f4c,	// (0x00041302) bg_dt_sta_control_pane

0xe4ee,	// (0x0004b8a4) dt_sta_controll_pane_g1

0xe4f7,	// (0x0004b8ad) bg_dt_sta_title_pane_g1

0xe500,	// (0x0004b8b6) bg_dt_sta_title_pane_g2

0xe509,	// (0x0004b8bf) bg_dt_sta_title_pane_g3

0x0002,

0x0469,	// (0x0003d81f) bg_dt_sta_title_pane_g

0x74b1,	// (0x00044867) bg_dt_sta_indi_pane_g1

0xe512,	// (0x0004b8c8) dt_sta_signal_pane_g1

0xe51a,	// (0x0004b8d0) dt_sta_signal_pane_g2

0x0001,

0x0470,	// (0x0003d826) dt_sta_signal_pane_g

0xe522,	// (0x0004b8d8) dt_sta_battery_pane_g1

0xe52b,	// (0x0004b8e1) dt_sta_battery_pane_t1

0x74b1,	// (0x00044867) bg_dt_sta_control_pane_g1

0x4c8a,	// (0x00042040) fep_china_uni_eep_pane

0x4c92,	// (0x00042048) fep_china_uni_entry_pane_ParamLimits

0x4ca2,	// (0x00042058) popup_fep_china_uni_window_g1_ParamLimits

0x4cb2,	// (0x00042068) popup_fep_china_uni_window_g2_ParamLimits

0x4cb2,	// (0x00042068) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004caf0) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004caf0) popup_fep_china_uni_window_g

0xe53a,	// (0x0004b8f0) fep_china_uni_eep_pane_g1

0xe542,	// (0x0004b8f8) fep_china_uni_eep_pane_t1

0xe14c,	// (0x0004b502) aid_touch_area_size_smil_player

0x554a,	// (0x00042900) lc0_clock_pane

0x5583,	// (0x00042939) status_pane_g5_ParamLimits

0x5583,	// (0x00042939) status_pane_g5

0xb72a,	// (0x00048ae0) popup_keymap_window

0x5563,	// (0x00042919) status_icon_pane

0xe208,	// (0x0004b5be) cell_ai5_widget_pane_g3_ParamLimits

0xe227,	// (0x0004b5dd) cell_ai5_widget_pane_g4_ParamLimits

0xe233,	// (0x0004b5e9) cell_ai5_widget_pane_g5_ParamLimits

0xe257,	// (0x0004b60d) cell_ai5_widget_pane_g8_ParamLimits

0xe257,	// (0x0004b60d) cell_ai5_widget_pane_g8

0xe26b,	// (0x0004b621) cell_ai5_widget_pane_g9_ParamLimits

0xe26b,	// (0x0004b621) cell_ai5_widget_pane_g9

0xe27f,	// (0x0004b635) cell_ai5_widget_pane_g10_ParamLimits

0xe27f,	// (0x0004b635) cell_ai5_widget_pane_g10

0xe551,	// (0x0004b907) status_icon_pane_g1

0x3f4c,	// (0x00041302) bg_popup_sub_pane_cp13

0xe559,	// (0x0004b90f) popup_keymap_window_t1

0xb5ea,	// (0x000489a0) control_pane_g6_ParamLimits

0xb5ea,	// (0x000489a0) control_pane_g6

0xb5f7,	// (0x000489ad) control_pane_g7_ParamLimits

0xb5f7,	// (0x000489ad) control_pane_g7

0xb604,	// (0x000489ba) control_pane_g8_ParamLimits

0xb604,	// (0x000489ba) control_pane_g8

0xf463,	// (0x0004c819) dt_sta_controll_pane_ParamLimits

0xf470,	// (0x0004c826) dt_sta_indi_pane_ParamLimits

0xf47d,	// (0x0004c833) dt_sta_title_pane_ParamLimits

0x4628,	// (0x000419de) aid_size_touch_scroll_bar_cale

0x86d4,	// (0x00045a8a) popup_discreet_window_ParamLimits

0x86d4,	// (0x00045a8a) popup_discreet_window

0x874e,	// (0x00045b04) popup_sk_window

0x5c1a,	// (0x00042fd0) bg_popup_sub_pane_cp28_ParamLimits

0x5c1a,	// (0x00042fd0) bg_popup_sub_pane_cp28

0xe567,	// (0x0004b91d) popup_discreet_window_g1_ParamLimits

0xe567,	// (0x0004b91d) popup_discreet_window_g1

0xe587,	// (0x0004b93d) popup_discreet_window_t1_ParamLimits

0xe587,	// (0x0004b93d) popup_discreet_window_t1

0xe5a5,	// (0x0004b95b) popup_discreet_window_t2_ParamLimits

0xe5a5,	// (0x0004b95b) popup_discreet_window_t2

0x0002,

0x0475,	// (0x0003d82b) popup_discreet_window_t_ParamLimits

0x0475,	// (0x0003d82b) popup_discreet_window_t

0xa3e6,	// (0x0004779c) popup_sk_window_g1

0xa3f0,	// (0x000477a6) popup_sk_window_g2

0x0001,

0xfd6c,	// (0x0004d122) popup_sk_window_g

0xa3fa,	// (0x000477b0) popup_sk_window_t1

0xa408,	// (0x000477be) popup_sk_window_t1_copy1

0xe1f8,	// (0x0004b5ae) cell_ai5_widget_pane_g2_ParamLimits

0xe356,	// (0x0004b70c) cell_ai5_widget_pane_t9_ParamLimits

0xe356,	// (0x0004b70c) cell_ai5_widget_pane_t9

0x3f4c,	// (0x00041302) main_fep_fshwr2_pane

0xf48e,	// (0x0004c844) aid_fshwr2_btn_pane

0xf496,	// (0x0004c84c) aid_fshwr2_syb_pane

0xf49e,	// (0x0004c854) aid_fshwr2_txt_pane

0xf4a6,	// (0x0004c85c) fshwr2_func_candi_pane

0xf4b2,	// (0x0004c868) fshwr2_hwr_syb_pane

0xf4be,	// (0x0004c874) fshwr2_icf_pane

0x3f4c,	// (0x00041302) fshwr2_icf_bg_pane

0xf4c8,	// (0x0004c87e) fshwr2_icf_pane_t1_ParamLimits

0xf4c8,	// (0x0004c87e) fshwr2_icf_pane_t1

0x74b1,	// (0x00044867) fshwr2_func_candi_pane_g1

0xe60b,	// (0x0004b9c1) fshwr2_func_candi_row_pane_ParamLimits

0xe60b,	// (0x0004b9c1) fshwr2_func_candi_row_pane

0xf4df,	// (0x0004c895) cell_fshwr2_syb_pane_ParamLimits

0xf4df,	// (0x0004c895) cell_fshwr2_syb_pane

0x771a,	// (0x00044ad0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x771a,	// (0x00044ad0) fshwr2_hwr_syb_pane_g1

0x3f4c,	// (0x00041302) bg_popup_call_pane_cp01

0xe61c,	// (0x0004b9d2) fshwr2_func_candi_cell_pane_ParamLimits

0xe61c,	// (0x0004b9d2) fshwr2_func_candi_cell_pane

0xe64d,	// (0x0004ba03) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe64d,	// (0x0004ba03) fshwr2_func_candi_cell_bg_pane

0xe667,	// (0x0004ba1d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe667,	// (0x0004ba1d) fshwr2_func_candi_cell_pane_g1

0xe687,	// (0x0004ba3d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe687,	// (0x0004ba3d) fshwr2_func_candi_cell_pane_t1

0x3f4c,	// (0x00041302) bg_button_pane_cp08

0x511b,	// (0x000424d1) cell_fshwr2_syb_bg_pane

0xf4fb,	// (0x0004c8b1) cell_fshwr2_syb_bg_pane_g1

0xe69a,	// (0x0004ba50) cell_fshwr2_syb_bg_pane_t1

0x46f2,	// (0x00041aa8) main_tmo_pane

0xc06e,	// (0x00049424) uni_indicator_pane_g1_ParamLimits

0xc083,	// (0x00049439) uni_indicator_pane_g2_ParamLimits

0x6654,	// (0x00043a0a) uni_indicator_pane_g3_ParamLimits

0x666a,	// (0x00043a20) uni_indicator_pane_g4_ParamLimits

0x666a,	// (0x00043a20) uni_indicator_pane_g4

0x667e,	// (0x00043a34) uni_indicator_pane_g5_ParamLimits

0x667e,	// (0x00043a34) uni_indicator_pane_g5

0x6692,	// (0x00043a48) uni_indicator_pane_g6_ParamLimits

0x6692,	// (0x00043a48) uni_indicator_pane_g6

0xf937,	// (0x0004cced) uni_indicator_pane_g_ParamLimits

0xd558,	// (0x0004a90e) popup_tmo_note_window_ParamLimits

0xd558,	// (0x0004a90e) popup_tmo_note_window

0x3f4c,	// (0x00041302) fshwr2_bg_pane

0xe678,	// (0x0004ba2e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe678,	// (0x0004ba2e) fshwr2_func_candi_cell_pane_g2

0x0001,

0x0481,	// (0x0003d837) fshwr2_func_candi_cell_pane_g_ParamLimits

0x0481,	// (0x0003d837) fshwr2_func_candi_cell_pane_g

0x74b1,	// (0x00044867) bg_popup_window_pane_cp01

0xe6a9,	// (0x0004ba5f) bg_popup_window_pane_g1_cp01

0xe6b2,	// (0x0004ba68) bg_popup_window_pane_cp22_ParamLimits

0xe6b2,	// (0x0004ba68) bg_popup_window_pane_cp22

0xe6c0,	// (0x0004ba76) listscroll_tmo_link_pane_ParamLimits

0xe6c0,	// (0x0004ba76) listscroll_tmo_link_pane

0xe700,	// (0x0004bab6) popup_tmo_note_window_g1_ParamLimits

0xe700,	// (0x0004bab6) popup_tmo_note_window_g1

0xe70d,	// (0x0004bac3) tmo_note_info_pane_ParamLimits

0xe70d,	// (0x0004bac3) tmo_note_info_pane

0xf503,	// (0x0004c8b9) list_tmo_note_info_pane_g1_ParamLimits

0xf503,	// (0x0004c8b9) list_tmo_note_info_pane_g1

0xe727,	// (0x0004badd) list_tmo_note_info_pane_g2_ParamLimits

0xe727,	// (0x0004badd) list_tmo_note_info_pane_g2

0x0001,

0x0486,	// (0x0003d83c) list_tmo_note_info_pane_g_ParamLimits

0x0486,	// (0x0003d83c) list_tmo_note_info_pane_g

0xe743,	// (0x0004baf9) list_tmo_note_info_text_pane_ParamLimits

0xe743,	// (0x0004baf9) list_tmo_note_info_text_pane

0xe785,	// (0x0004bb3b) list_tmo_link_pane

0xe792,	// (0x0004bb48) scroll_pane_cp20

0xe79f,	// (0x0004bb55) list_single_tmo_link_pane_ParamLimits

0xe79f,	// (0x0004bb55) list_single_tmo_link_pane

0xe7af,	// (0x0004bb65) list_single_tmo_link_pane_t1

0xe7bd,	// (0x0004bb73) list_tmo_note_info_text_pane_t1_ParamLimits

0xe7bd,	// (0x0004bb73) list_tmo_note_info_text_pane_t1

0xaaef,	// (0x00047ea5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaaef,	// (0x00047ea5) aid_size_touch_scroll_bar_cp01

0xa9d0,	// (0x00047d86) aid_size_touch_slider_marker

0x8736,	// (0x00045aec) popup_settings_window_ParamLimits

0x8736,	// (0x00045aec) popup_settings_window

0xae92,	// (0x00048248) popup_candi_list_indi_window

0x5499,	// (0x0004284f) aid_touch_navi_pane_ParamLimits

0x9bc3,	// (0x00046f79) rs_clock_indi_pane

0x9bcc,	// (0x00046f82) sctrl_sk_bottom_pane_ParamLimits

0x9bdd,	// (0x00046f93) sctrl_sk_top_pane_ParamLimits

0x9ce0,	// (0x00047096) popup_fep_tooltip_window

0xe19a,	// (0x0004b550) aid_size_cell_widget_grid_ParamLimits

0xe1ec,	// (0x0004b5a2) cell_ai5_widget_pane_g1_ParamLimits

0xe1ec,	// (0x0004b5a2) cell_ai5_widget_pane_g1

0xe23f,	// (0x0004b5f5) cell_ai5_widget_pane_g6_ParamLimits

0xe24b,	// (0x0004b601) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0404,	// (0x0003d7ba) cell_ai5_widget_pane_g_ParamLimits

0x0404,	// (0x0003d7ba) cell_ai5_widget_pane_g

0xe37a,	// (0x0004b730) cell_ai5_widget_pane_t10_ParamLimits

0xe37a,	// (0x0004b730) cell_ai5_widget_pane_t10

0xe390,	// (0x0004b746) grid_ai5_widget_pane_ParamLimits

0xe410,	// (0x0004b7c6) cell_contacts_ai5_widget_pane_ParamLimits

0xe410,	// (0x0004b7c6) cell_contacts_ai5_widget_pane

0xe5ba,	// (0x0004b970) popup_discreet_window_t3_ParamLimits

0xe5ba,	// (0x0004b970) popup_discreet_window_t3

0xe5f7,	// (0x0004b9ad) popup_fshwr2_char_preview_window_ParamLimits

0xe5f7,	// (0x0004b9ad) popup_fshwr2_char_preview_window

0xf51a,	// (0x0004c8d0) tmo_note_info_pane_t1

0xf52f,	// (0x0004c8e5) tmo_note_info_pane_t2

0xf548,	// (0x0004c8fe) tmo_note_info_pane_t3

0xe761,	// (0x0004bb17) tmo_note_info_pane_t4

0xe773,	// (0x0004bb29) tmo_note_info_pane_t5

0x0004,

0x048b,	// (0x0003d841) tmo_note_info_pane_t

0xe785,	// (0x0004bb3b) list_tmo_link_pane_ParamLimits

0xe792,	// (0x0004bb48) scroll_pane_cp20_ParamLimits

0x3f4c,	// (0x00041302) bg_popup_fep_char_preview_window_cp01

0xe7d6,	// (0x0004bb8c) popup_fshwr2_char_preview_window_t1

0xe7e4,	// (0x0004bb9a) popup_candi_list_indi_window_g1

0xe7ed,	// (0x0004bba3) bg_cell_contacts_ai5_widget_pane

0xe7f9,	// (0x0004bbaf) cell_contacts_ai5_widget_pane_g1

0xe80c,	// (0x0004bbc2) cell_contacts_ai5_widget_pane_g2

0xe818,	// (0x0004bbce) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0496,	// (0x0003d84c) cell_contacts_ai5_widget_pane_g

0xe82a,	// (0x0004bbe0) cell_contacts_ai5_widget_pane_t1

0x46f2,	// (0x00041aa8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe8a4,	// (0x0004bc5a) settings_container_pane

0x511b,	// (0x000424d1) listscroll_set_pane_copy1

0x6e8a,	// (0x00044240) scroll_pane_cp121_copy1

0xe8b0,	// (0x0004bc66) set_content_pane_copy1

0xe8b8,	// (0x0004bc6e) aid_height_set_list_copy1_ParamLimits

0xe8b8,	// (0x0004bc6e) aid_height_set_list_copy1

0x5efe,	// (0x000432b4) aid_size_parent_copy1_ParamLimits

0x5efe,	// (0x000432b4) aid_size_parent_copy1

0xe8c4,	// (0x0004bc7a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8c4,	// (0x0004bc7a) button_value_adjust_pane_cp6_copy1

0x483d,	// (0x00041bf3) list_highlight_pane_cp2_copy1_ParamLimits

0x483d,	// (0x00041bf3) list_highlight_pane_cp2_copy1

0xe8d8,	// (0x0004bc8e) list_set_pane_copy1_ParamLimits

0xe8d8,	// (0x0004bc8e) list_set_pane_copy1

0xe83f,	// (0x0004bbf5) main_pane_set_t1_copy1_ParamLimits

0xe83f,	// (0x0004bbf5) main_pane_set_t1_copy1

0xe879,	// (0x0004bc2f) main_pane_set_t2_copy1_ParamLimits

0xe879,	// (0x0004bc2f) main_pane_set_t2_copy1

0xe985,	// (0x0004bd3b) main_pane_set_t3_copy1

0xe993,	// (0x0004bd49) main_pane_set_t4_copy1

0xe898,	// (0x0004bc4e) set_content_pane_g1_copy1_ParamLimits

0xe898,	// (0x0004bc4e) set_content_pane_g1_copy1

0xe9a1,	// (0x0004bd57) setting_code_pane_copy1

0xe9ab,	// (0x0004bd61) setting_slider_graphic_pane_copy1

0xe9ab,	// (0x0004bd61) setting_slider_pane_copy1

0xe9ab,	// (0x0004bd61) setting_text_pane_copy1

0xe9b5,	// (0x0004bd6b) setting_volume_pane_copy1

0xe9be,	// (0x0004bd74) settings_code_pane_cp2_copy1

0xe9c6,	// (0x0004bd7c) settings_code_pane_cp_copy1_ParamLimits

0xe9c6,	// (0x0004bd7c) settings_code_pane_cp_copy1

0xe9da,	// (0x0004bd90) volume_set_pane_copy1

0xe9e2,	// (0x0004bd98) volume_set_pane_g10_copy1

0xe9ea,	// (0x0004bda0) volume_set_pane_g1_copy1

0xe9f2,	// (0x0004bda8) volume_set_pane_g2_copy1

0xe9fa,	// (0x0004bdb0) volume_set_pane_g3_copy1

0xea02,	// (0x0004bdb8) volume_set_pane_g4_copy1

0xea0a,	// (0x0004bdc0) volume_set_pane_g5_copy1

0xea12,	// (0x0004bdc8) volume_set_pane_g6_copy1

0xea1a,	// (0x0004bdd0) volume_set_pane_g7_copy1

0xea22,	// (0x0004bdd8) volume_set_pane_g8_copy1

0xea2a,	// (0x0004bde0) volume_set_pane_g9_copy1

0x3fbc,	// (0x00041372) bg_set_opt_pane_cp_copy1_ParamLimits

0x3fbc,	// (0x00041372) bg_set_opt_pane_cp_copy1

0xea32,	// (0x0004bde8) setting_slider_pane_t1_copy1_ParamLimits

0xea32,	// (0x0004bde8) setting_slider_pane_t1_copy1

0xea50,	// (0x0004be06) setting_slider_pane_t2_copy1_ParamLimits

0xea50,	// (0x0004be06) setting_slider_pane_t2_copy1

0xea6a,	// (0x0004be20) setting_slider_pane_t3_copy1_ParamLimits

0xea6a,	// (0x0004be20) setting_slider_pane_t3_copy1

0xea82,	// (0x0004be38) slider_set_pane_copy1_ParamLimits

0xea82,	// (0x0004be38) slider_set_pane_copy1

0x474d,	// (0x00041b03) set_opt_bg_pane_g1_copy2

0x4755,	// (0x00041b0b) set_opt_bg_pane_g2_copy2

0xea98,	// (0x0004be4e) set_opt_bg_pane_g3_copy2

0x4765,	// (0x00041b1b) set_opt_bg_pane_g4_copy2

0x476d,	// (0x00041b23) set_opt_bg_pane_g5_copy2

0x4775,	// (0x00041b2b) set_opt_bg_pane_g6_copy2

0xeaa2,	// (0x0004be58) set_opt_bg_pane_g7_copy2

0xeaaa,	// (0x0004be60) set_opt_bg_pane_g8_copy2

0xeab4,	// (0x0004be6a) set_opt_bg_pane_g9_copy2

0xa416,	// (0x000477cc) aid_size_touch_slider_mark_copy1_ParamLimits

0xa416,	// (0x000477cc) aid_size_touch_slider_mark_copy1

0xeabe,	// (0x0004be74) slider_set_pane_g1_copy1

0xa42a,	// (0x000477e0) slider_set_pane_g2_copy1

0x95a6,	// (0x0004695c) slider_set_pane_g3_copy1_ParamLimits

0x95a6,	// (0x0004695c) slider_set_pane_g3_copy1

0x95ba,	// (0x00046970) slider_set_pane_g4_copy1_ParamLimits

0x95ba,	// (0x00046970) slider_set_pane_g4_copy1

0x95d2,	// (0x00046988) slider_set_pane_g5_copy1_ParamLimits

0x95d2,	// (0x00046988) slider_set_pane_g5_copy1

0x95a6,	// (0x0004695c) slider_set_pane_g6_copy1_ParamLimits

0x95a6,	// (0x0004695c) slider_set_pane_g6_copy1

0xa432,	// (0x000477e8) slider_set_pane_g7_copy1_ParamLimits

0xa432,	// (0x000477e8) slider_set_pane_g7_copy1

0x3f60,	// (0x00041316) bg_set_opt_pane_cp2_copy1

0xeac7,	// (0x0004be7d) setting_slider_graphic_pane_g1_copy1

0xead0,	// (0x0004be86) setting_slider_graphic_pane_t1_copy1

0xeae0,	// (0x0004be96) setting_slider_graphic_pane_t2_copy1

0xeaf0,	// (0x0004bea6) slider_set_pane_cp_copy1

0xeb00,	// (0x0004beb6) input_focus_pane_cp1_copy1

0xeb09,	// (0x0004bebf) list_set_text_pane_copy1

0xeb11,	// (0x0004bec7) setting_text_pane_g1_copy1

0xb5ce,	// (0x00048984) set_text_pane_t1_copy1

0xeb00,	// (0x0004beb6) input_focus_pane_cp2_copy1

0xeb11,	// (0x0004bec7) setting_code_pane_g1_copy1

0xeb1a,	// (0x0004bed0) setting_code_pane_t1_copy1

0xeb28,	// (0x0004bede) list_set_graphic_pane_copy1

0x3f60,	// (0x00041316) bg_set_opt_pane_cp4_copy1

0x4e1d,	// (0x000421d3) list_set_graphic_pane_g1_copy1_ParamLimits

0x4e1d,	// (0x000421d3) list_set_graphic_pane_g1_copy1

0xeb3c,	// (0x0004bef2) list_set_graphic_pane_g2_copy1

0x4e35,	// (0x000421eb) list_set_graphic_pane_t1_copy1_ParamLimits

0x4e35,	// (0x000421eb) list_set_graphic_pane_t1_copy1

0x74b1,	// (0x00044867) rs_clock_indi_pane_g1

0xeb44,	// (0x0004befa) rs_clock_indi_pane_t1

0xeb52,	// (0x0004bf08) rs_indi_pane

0xeb5a,	// (0x0004bf10) rs_indi_pane_g1

0xeb63,	// (0x0004bf19) rs_indi_pane_g2

0xeb6c,	// (0x0004bf22) rs_indi_pane_g3

0x0002,

0x049d,	// (0x0003d853) rs_indi_pane_g

0x511b,	// (0x000424d1) bg_popup_preview_window_pane_cp03

0xeb75,	// (0x0004bf2b) popup_fep_tooltip_window_t1

0xcced,	// (0x0004a0a3) popup_note2_window_g2_ParamLimits

0xcced,	// (0x0004a0a3) popup_note2_window_g2

0x0001,

0x025c,	// (0x0003d612) popup_note2_window_g_ParamLimits

0x025c,	// (0x0003d612) popup_note2_window_g

0xd1db,	// (0x0004a591) bg_popup_sub_pane_cp11_ParamLimits

0xd1e8,	// (0x0004a59e) cell_ai3_links_pane_g1_ParamLimits

0xd1ff,	// (0x0004a5b5) cell_ai3_links_pane_t1

0xb5ce,	// (0x00048984) set_text_pane_t1_copy1_ParamLimits

0x502a,	// (0x000423e0) cell_graphic_popup_pane_cp2_ParamLimits

0x502a,	// (0x000423e0) cell_graphic_popup_pane_cp2

0xeb83,	// (0x0004bf39) cell_graphic_popup_pane_g1_cp2

0x443b,	// (0x000417f1) cell_graphic_popup_pane_g2_cp2

0xeb8b,	// (0x0004bf41) cell_graphic_popup_pane_g3_cp2

0xeb93,	// (0x0004bf49) cell_graphic_popup_pane_t2_cp2

0x444c,	// (0x00041802) grid_highlight_pane_cp3_cp2

0x49e7,	// (0x00041d9d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x46f2,	// (0x00041aa8) main_tmo_pane_ParamLimits

0xd54c,	// (0x0004a902) popup_tmo_big_image_note_window

0xe1dc,	// (0x0004b592) cell_ai5_widget_list_pane

0xe1e4,	// (0x0004b59a) cell_ai5_widget_lrg_icon_pane

0xf51a,	// (0x0004c8d0) tmo_note_info_pane_t1_ParamLimits

0xf52f,	// (0x0004c8e5) tmo_note_info_pane_t2_ParamLimits

0xf548,	// (0x0004c8fe) tmo_note_info_pane_t3_ParamLimits

0xe761,	// (0x0004bb17) tmo_note_info_pane_t4_ParamLimits

0xe773,	// (0x0004bb29) tmo_note_info_pane_t5_ParamLimits

0x048b,	// (0x0003d841) tmo_note_info_pane_t_ParamLimits

0xe8a4,	// (0x0004bc5a) settings_container_pane_ParamLimits

0xeaf8,	// (0x0004beae) indicator_popup_pane_cp5

0xeaf8,	// (0x0004beae) indicator_popup_pane_cp6

0xeb28,	// (0x0004bede) list_set_graphic_pane_copy1_ParamLimits

0x3f4c,	// (0x00041302) bg_popup_window_pane_cp23

0xeba1,	// (0x0004bf57) popup_tmo_big_image_note_window_g1

0xebac,	// (0x0004bf62) popup_tmo_big_image_note_window_t1

0xebbc,	// (0x0004bf72) popup_tmo_big_image_note_window_t2

0xebcc,	// (0x0004bf82) popup_tmo_big_image_note_window_t3

0x0002,

0x04a4,	// (0x0003d85a) popup_tmo_big_image_note_window_t

0xebdc,	// (0x0004bf92) cell_ai5_widget_lrg_icon_pane_g1

0xebe4,	// (0x0004bf9a) cell_ai5_widget_lrg_icon_pane_t1

0xebf2,	// (0x0004bfa8) cell_ai5_widget_list_row_pane_ParamLimits

0xebf2,	// (0x0004bfa8) cell_ai5_widget_list_row_pane

0xec0b,	// (0x0004bfc1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xec0b,	// (0x0004bfc1) cell_ai5_widget_list_row_pane_g1

0xec18,	// (0x0004bfce) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xec18,	// (0x0004bfce) cell_ai5_widget_list_row_pane_t1

0xec30,	// (0x0004bfe6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xec30,	// (0x0004bfe6) cell_ai5_widget_list_row_pane_t2

0x0001,

0x04ab,	// (0x0003d861) cell_ai5_widget_list_row_pane_t_ParamLimits

0x04ab,	// (0x0003d861) cell_ai5_widget_list_row_pane_t

0x85fb,	// (0x000459b1) main_fep_vtchi_ss_pane

0xec42,	// (0x0004bff8) popup_fep_char_pre_window

0xec4a,	// (0x0004c000) popup_fep_ituss_window

0xec64,	// (0x0004c01a) popup_fep_vkbss_window

0xec82,	// (0x0004c038) grid_vkbss_keypad_pane_ParamLimits

0xec82,	// (0x0004c038) grid_vkbss_keypad_pane

0xec92,	// (0x0004c048) ituss_keypad_pane

0xeca8,	// (0x0004c05e) aid_vkbss_key_offset_ParamLimits

0xeca8,	// (0x0004c05e) aid_vkbss_key_offset

0xecb4,	// (0x0004c06a) cell_vkbss_key_pane_ParamLimits

0xecb4,	// (0x0004c06a) cell_vkbss_key_pane

0x625e,	// (0x00043614) bg_cell_vkbss_key_g1_ParamLimits

0x625e,	// (0x00043614) bg_cell_vkbss_key_g1

0xecca,	// (0x0004c080) cell_vkbss_key_3p_pane_ParamLimits

0xecca,	// (0x0004c080) cell_vkbss_key_3p_pane

0xece4,	// (0x0004c09a) cell_vkbss_key_g1_ParamLimits

0xece4,	// (0x0004c09a) cell_vkbss_key_g1

0xecfe,	// (0x0004c0b4) cell_vkbss_key_t1_ParamLimits

0xecfe,	// (0x0004c0b4) cell_vkbss_key_t1

0xed29,	// (0x0004c0df) cell_ituss_key_pane_ParamLimits

0xed29,	// (0x0004c0df) cell_ituss_key_pane

0xed39,	// (0x0004c0ef) bg_cell_ituss_key_g1_ParamLimits

0xed39,	// (0x0004c0ef) bg_cell_ituss_key_g1

0xed45,	// (0x0004c0fb) cell_ituss_key_pane_g1_ParamLimits

0xed45,	// (0x0004c0fb) cell_ituss_key_pane_g1

0xed51,	// (0x0004c107) cell_ituss_key_pane_g2_ParamLimits

0xed51,	// (0x0004c107) cell_ituss_key_pane_g2

0x0001,

0x04b0,	// (0x0003d866) cell_ituss_key_pane_g_ParamLimits

0x04b0,	// (0x0003d866) cell_ituss_key_pane_g

0xed6a,	// (0x0004c120) cell_ituss_key_t1_ParamLimits

0xed6a,	// (0x0004c120) cell_ituss_key_t1

0xed98,	// (0x0004c14e) cell_ituss_key_t2_ParamLimits

0xed98,	// (0x0004c14e) cell_ituss_key_t2

0xedc9,	// (0x0004c17f) cell_ituss_key_t3_ParamLimits

0xedc9,	// (0x0004c17f) cell_ituss_key_t3

0xedfa,	// (0x0004c1b0) cell_ituss_key_t4_ParamLimits

0xedfa,	// (0x0004c1b0) cell_ituss_key_t4

0x0003,

0x04b5,	// (0x0003d86b) cell_ituss_key_t_ParamLimits

0x04b5,	// (0x0003d86b) cell_ituss_key_t

0xee2b,	// (0x0004c1e1) cell_vkbss_key_3p_pane_g1

0xee33,	// (0x0004c1e9) cell_vkbss_key_3p_pane_g2

0xee3b,	// (0x0004c1f1) cell_vkbss_key_3p_pane_g3

0x0002,

0x04be,	// (0x0003d874) cell_vkbss_key_3p_pane_g

0x3f4c,	// (0x00041302) bg_popup_fep_char_preview_window_cp02

0xee43,	// (0x0004c1f9) popup_fep_char_pre_window_t1

0xf433,	// (0x0004c7e9) main_ai5_sk_pane

0xe7ed,	// (0x0004bba3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe7f9,	// (0x0004bbaf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe80c,	// (0x0004bbc2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe818,	// (0x0004bbce) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0496,	// (0x0003d84c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe82a,	// (0x0004bbe0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x46f2,	// (0x00041aa8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55d,	// (0x0004c913) main_ai5_sk_pane_g1

0x5a58,	// (0x00042e0e) popup_query_code_window_g1

0xec59,	// (0x0004c00f) popup_fep_vkb_icf_pane

0xec6d,	// (0x0004c023) popup_fep_vtchi_icf_pane

0x46f2,	// (0x00041aa8) bg_icf_pane

0xee61,	// (0x0004c217) list_vkb_icf_pane

0x46f2,	// (0x00041aa8) bg_icf_pane_cp01

0xee79,	// (0x0004c22f) vtchi_icf_list_pane

0xee89,	// (0x0004c23f) list_vkb_icf_pane_t1_ParamLimits

0xee89,	// (0x0004c23f) list_vkb_icf_pane_t1

0xeea3,	// (0x0004c259) vtchi_icf_list_pane_t1_ParamLimits

0xeea3,	// (0x0004c259) vtchi_icf_list_pane_t1

0xec4a,	// (0x0004c000) popup_fep_ituss_window_ParamLimits

0xec6d,	// (0x0004c023) popup_fep_vtchi_icf_pane_ParamLimits

0xec92,	// (0x0004c048) ituss_keypad_pane_ParamLimits

0xec9e,	// (0x0004c054) ituss_sks_pane

0x46f2,	// (0x00041aa8) bg_icf_pane_ParamLimits

0xee52,	// (0x0004c208) icf_edit_indi_pane_ParamLimits

0xee52,	// (0x0004c208) icf_edit_indi_pane

0xee61,	// (0x0004c217) list_vkb_icf_pane_ParamLimits

0x46f2,	// (0x00041aa8) bg_icf_pane_cp01_ParamLimits

0xee6d,	// (0x0004c223) icf_edit_indi_pane_cp01_ParamLimits

0xee6d,	// (0x0004c223) icf_edit_indi_pane_cp01

0xee81,	// (0x0004c237) vtchi_query_pane

0x771a,	// (0x00044ad0) icf_edit_indi_pane_g1_ParamLimits

0x771a,	// (0x00044ad0) icf_edit_indi_pane_g1

0xeeca,	// (0x0004c280) icf_edit_indi_pane_g2_ParamLimits

0xeeca,	// (0x0004c280) icf_edit_indi_pane_g2

0x0001,

0xfd71,	// (0x0004d127) icf_edit_indi_pane_g_ParamLimits

0xfd71,	// (0x0004d127) icf_edit_indi_pane_g

0xeed6,	// (0x0004c28c) icf_edit_indi_pane_t1

0xeee4,	// (0x0004c29a) bg_input_focus_pane_cp042

0x461f,	// (0x000419d5) vtchi_button_pane

0xeeed,	// (0x0004c2a3) vtchi_query_pane_t1

0xeefb,	// (0x0004c2b1) vtchi_query_pane_t2

0xf3ee,	// (0x0004c7a4) vtchi_query_pane_t3

0x0002,

0xfd76,	// (0x0004d12c) vtchi_query_pane_t

0x3f4c,	// (0x00041302) bg_button_pane_cp13

0xf3fc,	// (0x0004c7b2) vtchi_button_pane_g1

0xf404,	// (0x0004c7ba) ituss_sks_pane_g1

0xf40f,	// (0x0004c7c5) ituss_sks_pane_g2

0x0001,

0xfd7d,	// (0x0004d133) ituss_sks_pane_g

0xf417,	// (0x0004c7cd) ituss_sks_pane_t1

0xf425,	// (0x0004c7db) ituss_sks_pane_t2

0x0001,

0xfd82,	// (0x0004d138) ituss_sks_pane_t

0x7161,	// (0x00044517) indicator_nsta_pane_cp_g1

0x716a,	// (0x00044520) indicator_nsta_pane_cp_g2

0x7172,	// (0x00044528) indicator_nsta_pane_cp_g3

0x717a,	// (0x00044530) indicator_nsta_pane_cp_g4

0x7182,	// (0x00044538) indicator_nsta_pane_cp_g5

0x718a,	// (0x00044540) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0004ce77) indicator_nsta_pane_cp_g

0xf1ca,	// (0x0004c580) cell_graphic2_pane_t2_ParamLimits

0xf1ca,	// (0x0004c580) cell_graphic2_pane_t2

0x0001,

0xfcf0,	// (0x0004d0a6) cell_graphic2_pane_t_ParamLimits

0xfcf0,	// (0x0004d0a6) cell_graphic2_pane_t

0xf1f7,	// (0x0004c5ad) cell_graphic2_control_pane_t1

0xac92,	// (0x00048048) signal_pane_g3_ParamLimits

0xac92,	// (0x00048048) signal_pane_g3

0xaca4,	// (0x0004805a) signal_pane_g4_ParamLimits

0xaca4,	// (0x0004805a) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
