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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000cd52 };

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
0x7a01,	// (0x00014753) Screen

0x7a0d,	// (0x0001475f) application_window_ParamLimits

0x7a0d,	// (0x0001475f) application_window

0x3a1a,	// (0x0001076c) screen_g1

0x54cd,	// (0x0001221f) area_bottom_pane_ParamLimits

0x54cd,	// (0x0001221f) area_bottom_pane

0x558d,	// (0x000122df) area_top_pane_ParamLimits

0x558d,	// (0x000122df) area_top_pane

0x562b,	// (0x0001237d) main_pane_ParamLimits

0x562b,	// (0x0001237d) main_pane

0x3b93,	// (0x000108e5) misc_graphics

0x8f19,	// (0x00015c6b) battery_pane_ParamLimits

0x8f19,	// (0x00015c6b) battery_pane

0x9cf6,	// (0x00016a48) bg_status_flat_pane_g8

0x9cfe,	// (0x00016a50) bg_status_flat_pane_g9

0x8fe1,	// (0x00015d33) context_pane_ParamLimits

0x8fe1,	// (0x00015d33) context_pane

0x90f7,	// (0x00015e49) navi_pane_ParamLimits

0x90f7,	// (0x00015e49) navi_pane

0x917b,	// (0x00015ecd) signal_pane_ParamLimits

0x917b,	// (0x00015ecd) signal_pane

0x0008,

0xf86a,	// (0x0001c5bc) bg_status_flat_pane_g

0x91e8,	// (0x00015f3a) status_pane_g1_ParamLimits

0x91e8,	// (0x00015f3a) status_pane_g1

0x91fc,	// (0x00015f4e) status_pane_g2_ParamLimits

0x91fc,	// (0x00015f4e) status_pane_g2

0x9208,	// (0x00015f5a) status_pane_g3_ParamLimits

0x9208,	// (0x00015f5a) status_pane_g3

0x0004,

0xf791,	// (0x0001c4e3) status_pane_g_ParamLimits

0xf791,	// (0x0001c4e3) status_pane_g

0x923c,	// (0x00015f8e) title_pane_ParamLimits

0x923c,	// (0x00015f8e) title_pane

0x9279,	// (0x00015fcb) uni_indicator_pane_ParamLimits

0x9279,	// (0x00015fcb) uni_indicator_pane

0x8e39,	// (0x00015b8b) bg_list_pane_ParamLimits

0x8e39,	// (0x00015b8b) bg_list_pane

0x8e59,	// (0x00015bab) find_pane

0x8e61,	// (0x00015bb3) listscroll_app_pane_ParamLimits

0x8e61,	// (0x00015bb3) listscroll_app_pane

0x8e6d,	// (0x00015bbf) listscroll_form_pane

0x5ef1,	// (0x00012c43) listscroll_gen_pane_ParamLimits

0x5ef1,	// (0x00012c43) listscroll_gen_pane

0x5f05,	// (0x00012c57) listscroll_set_pane

0x85a2,	// (0x000152f4) main_idle_act_pane

0x8b39,	// (0x0001588b) main_idle_trad_pane

0x8b39,	// (0x0001588b) main_list_empty_pane

0x8e61,	// (0x00015bb3) main_midp_pane

0x8e87,	// (0x00015bd9) main_pane_g1_ParamLimits

0x8e87,	// (0x00015bd9) main_pane_g1

0x5f1b,	// (0x00012c6d) popup_ai_message_window_ParamLimits

0x5f1b,	// (0x00012c6d) popup_ai_message_window

0x5fbf,	// (0x00012d11) popup_fep_china_uni_window_ParamLimits

0x5fbf,	// (0x00012d11) popup_fep_china_uni_window

0x6019,	// (0x00012d6b) popup_fep_japan_candidate_window_ParamLimits

0x6019,	// (0x00012d6b) popup_fep_japan_candidate_window

0x6037,	// (0x00012d89) popup_fep_japan_predictive_window_ParamLimits

0x6037,	// (0x00012d89) popup_fep_japan_predictive_window

0x6067,	// (0x00012db9) popup_find_window

0x6074,	// (0x00012dc6) popup_grid_graphic_window_ParamLimits

0x6074,	// (0x00012dc6) popup_grid_graphic_window

0x609e,	// (0x00012df0) popup_large_graphic_colour_window

0x60c4,	// (0x00012e16) popup_menu_window_ParamLimits

0x60c4,	// (0x00012e16) popup_menu_window

0x6280,	// (0x00012fd2) popup_note_image_window

0x626c,	// (0x00012fbe) popup_note_wait_window_ParamLimits

0x626c,	// (0x00012fbe) popup_note_wait_window

0x626c,	// (0x00012fbe) popup_note_window_ParamLimits

0x626c,	// (0x00012fbe) popup_note_window

0x62d6,	// (0x00013028) popup_query_code_window_ParamLimits

0x62d6,	// (0x00013028) popup_query_code_window

0x62ea,	// (0x0001303c) popup_query_data_code_window_ParamLimits

0x62ea,	// (0x0001303c) popup_query_data_code_window

0x6307,	// (0x00013059) popup_query_data_window_ParamLimits

0x6307,	// (0x00013059) popup_query_data_window

0x6323,	// (0x00013075) popup_query_sat_info_window_ParamLimits

0x6323,	// (0x00013075) popup_query_sat_info_window

0x635c,	// (0x000130ae) popup_snote_single_graphic_window_ParamLimits

0x635c,	// (0x000130ae) popup_snote_single_graphic_window

0x635c,	// (0x000130ae) popup_snote_single_text_window_ParamLimits

0x635c,	// (0x000130ae) popup_snote_single_text_window

0x6371,	// (0x000130c3) popup_sub_window_general

0x64a1,	// (0x000131f3) popup_window_general_ParamLimits

0x64a1,	// (0x000131f3) popup_window_general

0x8e9d,	// (0x00015bef) power_save_pane

0x5d7b,	// (0x00012acd) control_pane_g1_ParamLimits

0x5d7b,	// (0x00012acd) control_pane_g1

0x5da2,	// (0x00012af4) control_pane_g2_ParamLimits

0x5da2,	// (0x00012af4) control_pane_g2

0x8dfc,	// (0x00015b4e) control_pane_g3_ParamLimits

0x8dfc,	// (0x00015b4e) control_pane_g3

0x0007,

0xf779,	// (0x0001c4cb) control_pane_g_ParamLimits

0xf779,	// (0x0001c4cb) control_pane_g

0x5dec,	// (0x00012b3e) control_pane_t1_ParamLimits

0x5dec,	// (0x00012b3e) control_pane_t1

0x5e40,	// (0x00012b92) control_pane_t2_ParamLimits

0x5e40,	// (0x00012b92) control_pane_t2

0x0002,

0xf78a,	// (0x0001c4dc) control_pane_t_ParamLimits

0xf78a,	// (0x0001c4dc) control_pane_t

0x8d21,	// (0x00015a73) navi_navi_volume_pane_cp1

0x8d29,	// (0x00015a7b) status_small_icon_pane

0x8d31,	// (0x00015a83) status_small_pane_g1_ParamLimits

0x8d31,	// (0x00015a83) status_small_pane_g1

0x8d65,	// (0x00015ab7) status_small_pane_g2_ParamLimits

0x8d65,	// (0x00015ab7) status_small_pane_g2

0x8d71,	// (0x00015ac3) status_small_pane_g3_ParamLimits

0x8d71,	// (0x00015ac3) status_small_pane_g3

0x8d7d,	// (0x00015acf) status_small_pane_g4_ParamLimits

0x8d7d,	// (0x00015acf) status_small_pane_g4

0x8d89,	// (0x00015adb) status_small_pane_g5_ParamLimits

0x8d89,	// (0x00015adb) status_small_pane_g5

0x8d97,	// (0x00015ae9) status_small_pane_g6_ParamLimits

0x8d97,	// (0x00015ae9) status_small_pane_g6

0x0007,

0xf768,	// (0x0001c4ba) status_small_pane_g_ParamLimits

0xf768,	// (0x0001c4ba) status_small_pane_g

0x8dc6,	// (0x00015b18) status_small_pane_t1

0x8de8,	// (0x00015b3a) status_small_wait_pane_ParamLimits

0x8de8,	// (0x00015b3a) status_small_wait_pane

0x8735,	// (0x00015487) aid_levels_signal_ParamLimits

0x8735,	// (0x00015487) aid_levels_signal

0x8747,	// (0x00015499) signal_pane_g1_ParamLimits

0x8747,	// (0x00015499) signal_pane_g1

0x875c,	// (0x000154ae) signal_pane_g2_ParamLimits

0x875c,	// (0x000154ae) signal_pane_g2

0x0003,

0xf6f9,	// (0x0001c44b) signal_pane_g_ParamLimits

0xf6f9,	// (0x0001c44b) signal_pane_g

0x477f,	// (0x000114d1) context_pane_g1

0x7a1d,	// (0x0001476f) title_pane_g1

0x7a47,	// (0x00014799) title_pane_t1

0x3bc9,	// (0x0001091b) title_pane_t2

0x3bef,	// (0x00010941) title_pane_t3

0x0002,

0xf557,	// (0x0001c2a9) title_pane_t

0x9291,	// (0x00015fe3) aid_levels_battery_ParamLimits

0x9291,	// (0x00015fe3) aid_levels_battery

0x92a5,	// (0x00015ff7) battery_pane_g1_ParamLimits

0x92a5,	// (0x00015ff7) battery_pane_g1

0x92bb,	// (0x0001600d) battery_pane_g2_ParamLimits

0x92bb,	// (0x0001600d) battery_pane_g2

0x0001,

0xf79c,	// (0x0001c4ee) battery_pane_g_ParamLimits

0xf79c,	// (0x0001c4ee) battery_pane_g

0xa61a,	// (0x0001736c) uni_indicator_pane_g1

0xa62d,	// (0x0001737f) uni_indicator_pane_g2

0xa63f,	// (0x00017391) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0001c664) uni_indicator_pane_g

0x89ab,	// (0x000156fd) navi_icon_pane_ParamLimits

0x89ab,	// (0x000156fd) navi_icon_pane

0x88f5,	// (0x00015647) navi_midp_pane

0x89c7,	// (0x00015719) navi_navi_pane

0x89d1,	// (0x00015723) navi_text_pane_ParamLimits

0x89d1,	// (0x00015723) navi_text_pane

0x3a1a,	// (0x0001076c) status_small_wait_pane_g1

0x3e5a,	// (0x00010bac) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0001c65f) status_small_wait_pane_g

0xa341,	// (0x00017093) navi_navi_icon_text_pane

0xa349,	// (0x0001709b) navi_navi_pane_g1_ParamLimits

0xa349,	// (0x0001709b) navi_navi_pane_g1

0xa35b,	// (0x000170ad) navi_navi_pane_g2_ParamLimits

0xa35b,	// (0x000170ad) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0001c62d) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0001c62d) navi_navi_pane_g

0xa36d,	// (0x000170bf) navi_navi_tabs_pane

0xa376,	// (0x000170c8) navi_navi_text_pane

0xa341,	// (0x00017093) navi_navi_volume_pane

0xa31d,	// (0x0001706f) navi_text_pane_t1

0xa311,	// (0x00017063) navi_icon_pane_g1

0xa264,	// (0x00016fb6) navi_navi_text_pane_t1

0x67bd,	// (0x0001350f) navi_navi_volume_pane_g1

0x67c5,	// (0x00013517) volume_small_pane

0xa1ca,	// (0x00016f1c) navi_navi_icon_text_pane_g1

0xa1d2,	// (0x00016f24) navi_navi_icon_text_pane_t1

0x89c7,	// (0x00015719) navi_tabs_2_long_pane

0x89c7,	// (0x00015719) navi_tabs_2_pane

0x89c7,	// (0x00015719) navi_tabs_3_long_pane

0x89c7,	// (0x00015719) navi_tabs_3_pane

0x89c7,	// (0x00015719) navi_tabs_4_pane

0x679d,	// (0x000134ef) tabs_2_active_pane_ParamLimits

0x679d,	// (0x000134ef) tabs_2_active_pane

0x67ad,	// (0x000134ff) tabs_2_passive_pane_ParamLimits

0x67ad,	// (0x000134ff) tabs_2_passive_pane

0x676b,	// (0x000134bd) tabs_3_active_pane_ParamLimits

0x676b,	// (0x000134bd) tabs_3_active_pane

0x677b,	// (0x000134cd) tabs_3_passive_pane_ParamLimits

0x677b,	// (0x000134cd) tabs_3_passive_pane

0x678c,	// (0x000134de) tabs_3_passive_pane_cp_ParamLimits

0x678c,	// (0x000134de) tabs_3_passive_pane_cp

0x6727,	// (0x00013479) tabs_4_active_pane_ParamLimits

0x6727,	// (0x00013479) tabs_4_active_pane

0x6738,	// (0x0001348a) tabs_4_passive_pane_ParamLimits

0x6738,	// (0x0001348a) tabs_4_passive_pane

0x6749,	// (0x0001349b) tabs_4_passive_pane_cp_ParamLimits

0x6749,	// (0x0001349b) tabs_4_passive_pane_cp

0x675a,	// (0x000134ac) tabs_4_passive_pane_cp2_ParamLimits

0x675a,	// (0x000134ac) tabs_4_passive_pane_cp2

0x6703,	// (0x00013455) tabs_2_long_active_pane_ParamLimits

0x6703,	// (0x00013455) tabs_2_long_active_pane

0x6715,	// (0x00013467) tabs_2_long_passive_pane_ParamLimits

0x6715,	// (0x00013467) tabs_2_long_passive_pane

0x66be,	// (0x00013410) tabs_3_long_active_pane_ParamLimits

0x66be,	// (0x00013410) tabs_3_long_active_pane

0x66d7,	// (0x00013429) tabs_3_long_passive_pane_ParamLimits

0x66d7,	// (0x00013429) tabs_3_long_passive_pane

0x66ea,	// (0x0001343c) tabs_3_long_passive_pane_cp_ParamLimits

0x66ea,	// (0x0001343c) tabs_3_long_passive_pane_cp

0x6664,	// (0x000133b6) volume_small_pane_g1

0x666d,	// (0x000133bf) volume_small_pane_g2

0x6676,	// (0x000133c8) volume_small_pane_g3

0x667f,	// (0x000133d1) volume_small_pane_g4

0x6688,	// (0x000133da) volume_small_pane_g5

0x6691,	// (0x000133e3) volume_small_pane_g6

0x669a,	// (0x000133ec) volume_small_pane_g7

0x66a3,	// (0x000133f5) volume_small_pane_g8

0x66ac,	// (0x000133fe) volume_small_pane_g9

0x66b5,	// (0x00013407) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0001c5f9) volume_small_pane_g

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp2_ParamLimits

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp2

0x7aaf,	// (0x00014801) tabs_3_active_pane_g1

0x7ab7,	// (0x00014809) tabs_3_active_pane_t1

0x3c0f,	// (0x00010961) bg_passive_tab_pane_cp2_ParamLimits

0x3c0f,	// (0x00010961) bg_passive_tab_pane_cp2

0x7aaf,	// (0x00014801) tabs_3_passive_pane_g1

0x7ab7,	// (0x00014809) tabs_3_passive_pane_t1

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp3_ParamLimits

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp3

0x7ac9,	// (0x0001481b) tabs_4_active_pane_g1

0x7ad1,	// (0x00014823) tabs_4_active_pane_t1

0x3c0f,	// (0x00010961) bg_passive_tab_pane_cp3_ParamLimits

0x3c0f,	// (0x00010961) bg_passive_tab_pane_cp3

0x7ac9,	// (0x0001481b) tabs_4_1_passive_pane_g1

0x7ad1,	// (0x00014823) tabs_4_1_passive_pane_t1

0x8e61,	// (0x00015bb3) list_highlight_pane_cp2

0xa894,	// (0x000175e6) list_set_pane_ParamLimits

0xa894,	// (0x000175e6) list_set_pane

0xa936,	// (0x00017688) main_pane_set_t1_ParamLimits

0xa936,	// (0x00017688) main_pane_set_t1

0xa956,	// (0x000176a8) main_pane_set_t2_ParamLimits

0xa956,	// (0x000176a8) main_pane_set_t2

0xa96a,	// (0x000176bc) main_pane_set_t3_ParamLimits

0xa96a,	// (0x000176bc) main_pane_set_t3

0xa97c,	// (0x000176ce) main_pane_set_t4_ParamLimits

0xa97c,	// (0x000176ce) main_pane_set_t4

0x0003,

0xf977,	// (0x0001c6c9) main_pane_set_t_ParamLimits

0xf977,	// (0x0001c6c9) main_pane_set_t

0xa98e,	// (0x000176e0) setting_code_pane

0xa99a,	// (0x000176ec) setting_slider_graphic_pane

0xa99a,	// (0x000176ec) setting_slider_pane

0xa99a,	// (0x000176ec) setting_text_pane

0xa99a,	// (0x000176ec) setting_volume_pane

0x586c,	// (0x000125be) volume_set_pane

0x3c0f,	// (0x00010961) bg_set_opt_pane_cp

0x5874,	// (0x000125c6) setting_slider_pane_t1

0x588d,	// (0x000125df) setting_slider_pane_t2

0x58a7,	// (0x000125f9) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c2b0) setting_slider_pane_t

0x58bf,	// (0x00012611) slider_set_pane

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp2

0x3c1d,	// (0x0001096f) setting_slider_graphic_pane_g1

0x58d5,	// (0x00012627) setting_slider_graphic_pane_t1

0x58e5,	// (0x00012637) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c2b7) setting_slider_graphic_pane_t

0x58f5,	// (0x00012647) slider_set_pane_cp

0x3b93,	// (0x000108e5) input_focus_pane_cp1

0xa853,	// (0x000175a5) list_set_text_pane

0x3a1a,	// (0x0001076c) setting_text_pane_g1

0x3b93,	// (0x000108e5) input_focus_pane_cp2

0x3a1a,	// (0x0001076c) setting_code_pane_g1

0x3c26,	// (0x00010978) setting_code_pane_t1

0x3c34,	// (0x00010986) set_text_pane_t1_ParamLimits

0x3c34,	// (0x00010986) set_text_pane_t1

0x410b,	// (0x00010e5d) set_opt_bg_pane_g1

0x4113,	// (0x00010e65) set_opt_bg_pane_g2

0xa82d,	// (0x0001757f) set_opt_bg_pane_g3

0x4123,	// (0x00010e75) set_opt_bg_pane_g4

0x412b,	// (0x00010e7d) set_opt_bg_pane_g5

0x4133,	// (0x00010e85) set_opt_bg_pane_g6

0xa837,	// (0x00017589) set_opt_bg_pane_g7

0xa83f,	// (0x00017591) set_opt_bg_pane_g8

0xa849,	// (0x0001759b) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0001c6b6) set_opt_bg_pane_g

0xa820,	// (0x00017572) slider_set_pane_g1

0x6832,	// (0x00013584) slider_set_pane_g2

0x0006,

0xf955,	// (0x0001c6a7) slider_set_pane_g

0x67ce,	// (0x00013520) volume_set_pane_g1

0x67d6,	// (0x00013528) volume_set_pane_g2

0x67de,	// (0x00013530) volume_set_pane_g3

0x67e6,	// (0x00013538) volume_set_pane_g4

0x67ee,	// (0x00013540) volume_set_pane_g5

0x67f6,	// (0x00013548) volume_set_pane_g6

0x67fe,	// (0x00013550) volume_set_pane_g7

0x6806,	// (0x00013558) volume_set_pane_g8

0x680e,	// (0x00013560) volume_set_pane_g9

0x6816,	// (0x00013568) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0001c67f) volume_set_pane_g

0x7ae3,	// (0x00014835) indicator_pane_ParamLimits

0x7ae3,	// (0x00014835) indicator_pane

0x7aef,	// (0x00014841) main_idle_pane_g2_ParamLimits

0x7aef,	// (0x00014841) main_idle_pane_g2

0x7b17,	// (0x00014869) main_pane_idle_g1_ParamLimits

0x7b17,	// (0x00014869) main_pane_idle_g1

0x3c4e,	// (0x000109a0) popup_clock_digital_analogue_window_ParamLimits

0x3c4e,	// (0x000109a0) popup_clock_digital_analogue_window

0x7b24,	// (0x00014876) soft_indicator_pane_ParamLimits

0x7b24,	// (0x00014876) soft_indicator_pane

0x7b30,	// (0x00014882) wallpaper_pane_ParamLimits

0x7b30,	// (0x00014882) wallpaper_pane

0x3a1a,	// (0x0001076c) wallpaper_pane_g1

0x7b3c,	// (0x0001488e) indicator_pane_g1_ParamLimits

0x7b3c,	// (0x0001488e) indicator_pane_g1

0xad26,	// (0x00017a78) navi_navi_icon_text_pane_srt_g1

0x3c7c,	// (0x000109ce) soft_indicator_pane_t1

0x3c96,	// (0x000109e8) aid_ps_area_pane

0x7b48,	// (0x0001489a) aid_ps_clock_pane

0x3ca7,	// (0x000109f9) aid_ps_indicator_pane

0x3cb3,	// (0x00010a05) indicator_ps_pane_ParamLimits

0x3cb3,	// (0x00010a05) indicator_ps_pane

0x3cc2,	// (0x00010a14) power_save_pane_g1_ParamLimits

0x3cc2,	// (0x00010a14) power_save_pane_g1

0x3cce,	// (0x00010a20) power_save_pane_g2_ParamLimits

0x3cce,	// (0x00010a20) power_save_pane_g2

0x5481,	// (0x000121d3) aid_navinavi_width_pane

0x3c96,	// (0x000109e8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c2bc) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c2bc) power_save_pane_g

0x3cdc,	// (0x00010a2e) power_save_pane_t1_ParamLimits

0x3cdc,	// (0x00010a2e) power_save_pane_t1

0x7b48,	// (0x0001489a) aid_ps_clock_pane_ParamLimits

0x3ca7,	// (0x000109f9) aid_ps_indicator_pane_ParamLimits

0x3cee,	// (0x00010a40) power_save_pane_t4_ParamLimits

0x3cee,	// (0x00010a40) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c2c1) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c2c1) power_save_pane_t

0x3d18,	// (0x00010a6a) power_save_t3_ParamLimits

0x3d18,	// (0x00010a6a) power_save_t3

0x3d03,	// (0x00010a55) power_save_t2_ParamLimits

0x3d03,	// (0x00010a55) power_save_t2

0x3d2d,	// (0x00010a7f) indicator_ps_pane_g1

0x7b56,	// (0x000148a8) ai_gene_pane_ParamLimits

0x7b56,	// (0x000148a8) ai_gene_pane

0x7b62,	// (0x000148b4) ai_links_pane_ParamLimits

0x7b62,	// (0x000148b4) ai_links_pane

0x7b6e,	// (0x000148c0) indicator_pane_cp1_ParamLimits

0x7b6e,	// (0x000148c0) indicator_pane_cp1

0x7b7a,	// (0x000148cc) main_pane_idle_g1_cp_ParamLimits

0x7b7a,	// (0x000148cc) main_pane_idle_g1_cp

0x7b86,	// (0x000148d8) popup_ai_links_title_window

0x7b8f,	// (0x000148e1) soft_indicator_pane_cp1_ParamLimits

0x7b8f,	// (0x000148e1) soft_indicator_pane_cp1

0xa608,	// (0x0001735a) ai_links_pane_g1

0xa611,	// (0x00017363) grid_ai_links_pane

0xa5eb,	// (0x0001733d) ai_gene_pane_1

0xa5f6,	// (0x00017348) ai_gene_pane_2

0xa5ff,	// (0x00017351) list_highlight_pane_cp4

0xa5cf,	// (0x00017321) cell_ai_link_pane_ParamLimits

0xa5cf,	// (0x00017321) cell_ai_link_pane

0xa5c7,	// (0x00017319) cell_ai_link_pane_g1

0x3e5a,	// (0x00010bac) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0001c65a) cell_ai_link_pane_g

0x3b93,	// (0x000108e5) grid_highlight_cp2

0x3b93,	// (0x000108e5) bg_popup_sub_pane_cp1

0x3d44,	// (0x00010a96) popup_ai_links_title_window_t1

0xa517,	// (0x00017269) ai_gene_pane_1_g1_ParamLimits

0xa517,	// (0x00017269) ai_gene_pane_1_g1

0xa523,	// (0x00017275) ai_gene_pane_1_g2_ParamLimits

0xa523,	// (0x00017275) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0001c650) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0001c650) ai_gene_pane_1_g

0xa530,	// (0x00017282) ai_gene_pane_1_t1_ParamLimits

0xa530,	// (0x00017282) ai_gene_pane_1_t1

0xa564,	// (0x000172b6) grid_ai_soft_ind_pane

0xa502,	// (0x00017254) ai_gene_pane_2_t1_ParamLimits

0xa502,	// (0x00017254) ai_gene_pane_2_t1

0x7b9b,	// (0x000148ed) main_pane_empty_t1_ParamLimits

0x7b9b,	// (0x000148ed) main_pane_empty_t1

0x7bb3,	// (0x00014905) main_pane_empty_t2_ParamLimits

0x7bb3,	// (0x00014905) main_pane_empty_t2

0x7bc8,	// (0x0001491a) main_pane_empty_t3_ParamLimits

0x7bc8,	// (0x0001491a) main_pane_empty_t3

0x7bda,	// (0x0001492c) main_pane_empty_t4_ParamLimits

0x7bda,	// (0x0001492c) main_pane_empty_t4

0x7bec,	// (0x0001493e) main_pane_empty_t5_ParamLimits

0x7bec,	// (0x0001493e) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c2c6) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c2c6) main_pane_empty_t

0x415c,	// (0x00010eae) bg_popup_window_pane_ParamLimits

0x415c,	// (0x00010eae) bg_popup_window_pane

0xa272,	// (0x00016fc4) find_popup_pane_cp2_ParamLimits

0xa272,	// (0x00016fc4) find_popup_pane_cp2

0xa27e,	// (0x00016fd0) heading_pane_ParamLimits

0xa27e,	// (0x00016fd0) heading_pane

0x3b93,	// (0x000108e5) bg_popup_sub_pane

0xa1ec,	// (0x00016f3e) bg_popup_window_pane_g1_ParamLimits

0xa1ec,	// (0x00016f3e) bg_popup_window_pane_g1

0xa1f8,	// (0x00016f4a) bg_popup_window_pane_g2_ParamLimits

0xa1f8,	// (0x00016f4a) bg_popup_window_pane_g2

0xa204,	// (0x00016f56) bg_popup_window_pane_g3_ParamLimits

0xa204,	// (0x00016f56) bg_popup_window_pane_g3

0xa210,	// (0x00016f62) bg_popup_window_pane_g4_ParamLimits

0xa210,	// (0x00016f62) bg_popup_window_pane_g4

0xa21c,	// (0x00016f6e) bg_popup_window_pane_g5_ParamLimits

0xa21c,	// (0x00016f6e) bg_popup_window_pane_g5

0xa228,	// (0x00016f7a) bg_popup_window_pane_g6_ParamLimits

0xa228,	// (0x00016f7a) bg_popup_window_pane_g6

0xa234,	// (0x00016f86) bg_popup_window_pane_g7_ParamLimits

0xa234,	// (0x00016f86) bg_popup_window_pane_g7

0xa240,	// (0x00016f92) bg_popup_window_pane_g8_ParamLimits

0xa240,	// (0x00016f92) bg_popup_window_pane_g8

0xa24c,	// (0x00016f9e) bg_popup_window_pane_g9_ParamLimits

0xa24c,	// (0x00016f9e) bg_popup_window_pane_g9

0xa258,	// (0x00016faa) bg_popup_window_pane_g10_ParamLimits

0xa258,	// (0x00016faa) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0001c618) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0001c618) bg_popup_window_pane_g

0xa181,	// (0x00016ed3) bg_popup_heading_pane_ParamLimits

0xa181,	// (0x00016ed3) bg_popup_heading_pane

0x68ba,	// (0x0001360c) tabs_4_passive_pane_cp_srt_ParamLimits

0x68ba,	// (0x0001360c) tabs_4_passive_pane_cp_srt

0x68cc,	// (0x0001361e) tabs_4_passive_pane_srt_ParamLimits

0xa195,	// (0x00016ee7) heading_pane_g2

0x68cc,	// (0x0001361e) tabs_4_passive_pane_srt

0x8e61,	// (0x00015bb3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e61,	// (0x00015bb3) bg_passive_tab_pane_cp3_srt

0xa19d,	// (0x00016eef) heading_pane_t1_ParamLimits

0xa19d,	// (0x00016eef) heading_pane_t1

0xa1b4,	// (0x00016f06) heading_pane_t2_ParamLimits

0xa1b4,	// (0x00016f06) heading_pane_t2

0x0001,

0xf8c1,	// (0x0001c613) heading_pane_t_ParamLimits

0xf8c1,	// (0x0001c613) heading_pane_t

0x9cbe,	// (0x00016a10) bg_popup_heading_pane_g1

0x9d6d,	// (0x00016abf) bg_popup_heading_pane_g2

0x9d77,	// (0x00016ac9) bg_popup_heading_pane_g3

0x9d81,	// (0x00016ad3) bg_popup_heading_pane_g4

0x9d8b,	// (0x00016add) bg_popup_heading_pane_g5

0x9d95,	// (0x00016ae7) bg_popup_heading_pane_g6

0x9d9d,	// (0x00016aef) bg_popup_heading_pane_g7

0x9da5,	// (0x00016af7) bg_popup_heading_pane_g8

0x9daf,	// (0x00016b01) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0001c5cf) bg_popup_heading_pane_g

0x93b2,	// (0x00016104) bg_popup_sub_pane_g1

0x93c2,	// (0x00016114) bg_popup_sub_pane_g2

0x93ba,	// (0x0001610c) bg_popup_sub_pane_g3

0x93d2,	// (0x00016124) bg_popup_sub_pane_g4

0x93ca,	// (0x0001611c) bg_popup_sub_pane_g5

0x93da,	// (0x0001612c) bg_popup_sub_pane_g6

0x93e2,	// (0x00016134) bg_popup_sub_pane_g7

0x93f2,	// (0x00016144) bg_popup_sub_pane_g8

0x93ea,	// (0x0001613c) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0001c5a9) bg_popup_sub_pane_g

0x3c01,	// (0x00010953) bg_popup_window_pane_cp5_ParamLimits

0x3c01,	// (0x00010953) bg_popup_window_pane_cp5

0x3d61,	// (0x00010ab3) popup_note_window_g1_ParamLimits

0x3d61,	// (0x00010ab3) popup_note_window_g1

0x3d6d,	// (0x00010abf) popup_note_window_t1_ParamLimits

0x3d6d,	// (0x00010abf) popup_note_window_t1

0x3d83,	// (0x00010ad5) popup_note_window_t2_ParamLimits

0x3d83,	// (0x00010ad5) popup_note_window_t2

0x3d99,	// (0x00010aeb) popup_note_window_t3_ParamLimits

0x3d99,	// (0x00010aeb) popup_note_window_t3

0x3daf,	// (0x00010b01) popup_note_window_t4_ParamLimits

0x3daf,	// (0x00010b01) popup_note_window_t4

0x3dd7,	// (0x00010b29) popup_note_window_t5_ParamLimits

0x3dd7,	// (0x00010b29) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c2d1) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c2d1) popup_note_window_t

0x3dfb,	// (0x00010b4d) bg_popup_window_pane_cp6_ParamLimits

0x3dfb,	// (0x00010b4d) bg_popup_window_pane_cp6

0x9c3a,	// (0x0001698c) popup_note_image_window_g1_ParamLimits

0x9c3a,	// (0x0001698c) popup_note_image_window_g1

0x9c46,	// (0x00016998) popup_note_image_window_g2_ParamLimits

0x9c46,	// (0x00016998) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0001c59d) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0001c59d) popup_note_image_window_g

0x9c5f,	// (0x000169b1) popup_note_image_window_t1_ParamLimits

0x9c5f,	// (0x000169b1) popup_note_image_window_t1

0x9c78,	// (0x000169ca) popup_note_image_window_t2_ParamLimits

0x9c78,	// (0x000169ca) popup_note_image_window_t2

0x9c91,	// (0x000169e3) popup_note_image_window_t3_ParamLimits

0x9c91,	// (0x000169e3) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0001c5a2) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0001c5a2) popup_note_image_window_t

0x9b03,	// (0x00016855) bg_popup_window_pane_cp7_ParamLimits

0x9b03,	// (0x00016855) bg_popup_window_pane_cp7

0x9b33,	// (0x00016885) popup_note_wait_window_g1_ParamLimits

0x9b33,	// (0x00016885) popup_note_wait_window_g1

0x9b3f,	// (0x00016891) popup_note_wait_window_g2_ParamLimits

0x9b3f,	// (0x00016891) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0001c58b) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0001c58b) popup_note_wait_window_g

0x9b57,	// (0x000168a9) popup_note_wait_window_t1_ParamLimits

0x9b57,	// (0x000168a9) popup_note_wait_window_t1

0x9b7e,	// (0x000168d0) popup_note_wait_window_t2_ParamLimits

0x9b7e,	// (0x000168d0) popup_note_wait_window_t2

0x9b9b,	// (0x000168ed) popup_note_wait_window_t3_ParamLimits

0x9b9b,	// (0x000168ed) popup_note_wait_window_t3

0x9bae,	// (0x00016900) popup_note_wait_window_t4_ParamLimits

0x9bae,	// (0x00016900) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0001c592) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0001c592) popup_note_wait_window_t

0x9bd3,	// (0x00016925) wait_bar_pane_ParamLimits

0x9bd3,	// (0x00016925) wait_bar_pane

0x3b93,	// (0x000108e5) wait_anim_pane

0x3b93,	// (0x000108e5) wait_border_pane

0x3a1a,	// (0x0001076c) wait_anim_pane_g1

0x3a1a,	// (0x0001076c) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x0001c446) wait_anim_pane_g

0x9aaf,	// (0x00016801) wait_border_pane_g1

0x9aba,	// (0x0001680c) wait_border_pane_g2

0x9ac3,	// (0x00016815) wait_border_pane_g3

0x0002,

0xf832,	// (0x0001c584) wait_border_pane_g

0x991a,	// (0x0001666c) bg_popup_window_pane_cp16_ParamLimits

0x991a,	// (0x0001666c) bg_popup_window_pane_cp16

0x9a1a,	// (0x0001676c) indicator_popup_pane_cp4_ParamLimits

0x9a1a,	// (0x0001676c) indicator_popup_pane_cp4

0x9a2e,	// (0x00016780) popup_query_data_window_t1_ParamLimits

0x9a2e,	// (0x00016780) popup_query_data_window_t1

0x9a40,	// (0x00016792) popup_query_data_window_t2_ParamLimits

0x9a40,	// (0x00016792) popup_query_data_window_t2

0x9a59,	// (0x000167ab) popup_query_data_window_t3_ParamLimits

0x9a59,	// (0x000167ab) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0001c57d) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0001c57d) popup_query_data_window_t

0x9a73,	// (0x000167c5) query_popup_data_pane_ParamLimits

0x9a73,	// (0x000167c5) query_popup_data_pane

0x9a87,	// (0x000167d9) query_popup_data_pane_cp1_ParamLimits

0x9a87,	// (0x000167d9) query_popup_data_pane_cp1

0x991a,	// (0x0001666c) bg_popup_window_pane_cp10_ParamLimits

0x991a,	// (0x0001666c) bg_popup_window_pane_cp10

0x994c,	// (0x0001669e) indicator_popup_pane_ParamLimits

0x994c,	// (0x0001669e) indicator_popup_pane

0x996e,	// (0x000166c0) popup_query_code_window_t1_ParamLimits

0x996e,	// (0x000166c0) popup_query_code_window_t1

0x9988,	// (0x000166da) popup_query_code_window_t2_ParamLimits

0x9988,	// (0x000166da) popup_query_code_window_t2

0x99d1,	// (0x00016723) popup_query_code_window_t3_ParamLimits

0x99d1,	// (0x00016723) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0001c576) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0001c576) popup_query_code_window_t

0x9a00,	// (0x00016752) query_popup_pane_ParamLimits

0x9a00,	// (0x00016752) query_popup_pane

0x3dfb,	// (0x00010b4d) bg_popup_window_pane_cp15_ParamLimits

0x3dfb,	// (0x00010b4d) bg_popup_window_pane_cp15

0x7c26,	// (0x00014978) indicator_popup_pane_cp1_ParamLimits

0x7c26,	// (0x00014978) indicator_popup_pane_cp1

0x7c39,	// (0x0001498b) indicator_popup_pane_cp2_ParamLimits

0x7c39,	// (0x0001498b) indicator_popup_pane_cp2

0x7c4c,	// (0x0001499e) popup_query_data_code_window_g1_ParamLimits

0x7c4c,	// (0x0001499e) popup_query_data_code_window_g1

0x3e19,	// (0x00010b6b) popup_query_data_code_window_t1_ParamLimits

0x3e19,	// (0x00010b6b) popup_query_data_code_window_t1

0x3e2b,	// (0x00010b7d) popup_query_data_code_window_t2_ParamLimits

0x3e2b,	// (0x00010b7d) popup_query_data_code_window_t2

0x7c5f,	// (0x000149b1) popup_query_data_code_window_t3_ParamLimits

0x7c5f,	// (0x000149b1) popup_query_data_code_window_t3

0x7c75,	// (0x000149c7) popup_query_data_code_window_t4_ParamLimits

0x7c75,	// (0x000149c7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c2dc) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c2dc) popup_query_data_code_window_t

0x6575,	// (0x000132c7) list_single_midp_graphic_pane_g3

0x7c8d,	// (0x000149df) query_popup_data_pane_cp2_ParamLimits

0x7ca0,	// (0x000149f2) query_popup_pane_cp2_ParamLimits

0x7ca0,	// (0x000149f2) query_popup_pane_cp2

0x3b93,	// (0x000108e5) bg_popup_window_pane_cp11

0x9906,	// (0x00016658) heading_pane_cp5

0x3e87,	// (0x00010bd9) listscroll_popup_info_pane

0x3b93,	// (0x000108e5) input_focus_pane_cp3

0x3e3d,	// (0x00010b8f) query_popup_pane_t1

0x3e4b,	// (0x00010b9d) list_popup_info_pane_ParamLimits

0x3e4b,	// (0x00010b9d) list_popup_info_pane

0x3e5a,	// (0x00010bac) listscroll_popup_info_pane_g1

0x3e62,	// (0x00010bb4) scroll_pane_cp7

0x7cb3,	// (0x00014a05) popup_info_list_pane_t1_ParamLimits

0x7cb3,	// (0x00014a05) popup_info_list_pane_t1

0x7ccd,	// (0x00014a1f) popup_info_list_pane_t2_ParamLimits

0x7ccd,	// (0x00014a1f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c2e5) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c2e5) popup_info_list_pane_t

0x3b93,	// (0x000108e5) bg_popup_window_pane_cp12

0xad40,	// (0x00017a92) find_popup_pane

0x3c0f,	// (0x00010961) bg_popup_window_pane_cp3

0x3e6c,	// (0x00010bbe) heading_pane_cp3

0x3e78,	// (0x00010bca) listscroll_popup_graphic_pane

0x3b93,	// (0x000108e5) bg_popup_window_pane_cp4

0x7d37,	// (0x00014a89) heading_pane_cp4

0x3e87,	// (0x00010bd9) listscroll_popup_colour_pane

0x7d41,	// (0x00014a93) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d41,	// (0x00014a93) cell_large_graphic_colour_none_popup_pane

0x7d55,	// (0x00014aa7) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d55,	// (0x00014aa7) grid_large_graphic_colour_popup_pane

0x7d7d,	// (0x00014acf) listscroll_popup_colour_pane_g1_ParamLimits

0x7d7d,	// (0x00014acf) listscroll_popup_colour_pane_g1

0x7d94,	// (0x00014ae6) listscroll_popup_colour_pane_g2_ParamLimits

0x7d94,	// (0x00014ae6) listscroll_popup_colour_pane_g2

0x7dab,	// (0x00014afd) listscroll_popup_colour_pane_g3_ParamLimits

0x7dab,	// (0x00014afd) listscroll_popup_colour_pane_g3

0x7dbb,	// (0x00014b0d) listscroll_popup_colour_pane_g4_ParamLimits

0x7dbb,	// (0x00014b0d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c2ea) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c2ea) listscroll_popup_colour_pane_g

0x3e8f,	// (0x00010be1) scroll_pane_cp6_ParamLimits

0x3e8f,	// (0x00010be1) scroll_pane_cp6

0x7dcb,	// (0x00014b1d) cell_large_graphic_colour_popup_pane_ParamLimits

0x7dcb,	// (0x00014b1d) cell_large_graphic_colour_popup_pane

0x7dea,	// (0x00014b3c) cell_large_graphic_colour_none_popup_pane_t1

0x3b93,	// (0x000108e5) grid_highlight_pane_cp5

0x3ea1,	// (0x00010bf3) cell_large_graphic_colour_popup_pane_g1

0x3ea9,	// (0x00010bfb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c2f3) cell_large_graphic_colour_popup_pane_g

0x3eb1,	// (0x00010c03) cell_large_graphic_colour_popup_pane_g2_copy1

0x3eba,	// (0x00010c0c) grid_highlight_pane_cp4

0x3ec2,	// (0x00010c14) bg_popup_window_pane_cp8_ParamLimits

0x3ec2,	// (0x00010c14) bg_popup_window_pane_cp8

0x7df9,	// (0x00014b4b) popup_snote_single_text_window_g1_ParamLimits

0x7df9,	// (0x00014b4b) popup_snote_single_text_window_g1

0x7e0b,	// (0x00014b5d) popup_snote_single_text_window_t1_ParamLimits

0x7e0b,	// (0x00014b5d) popup_snote_single_text_window_t1

0x7e1e,	// (0x00014b70) popup_snote_single_text_window_t2_ParamLimits

0x7e1e,	// (0x00014b70) popup_snote_single_text_window_t2

0x7e31,	// (0x00014b83) popup_snote_single_text_window_t3_ParamLimits

0x7e31,	// (0x00014b83) popup_snote_single_text_window_t3

0x7e6a,	// (0x00014bbc) popup_snote_single_text_window_t4_ParamLimits

0x7e6a,	// (0x00014bbc) popup_snote_single_text_window_t4

0x7e9e,	// (0x00014bf0) popup_snote_single_text_window_t5_ParamLimits

0x7e9e,	// (0x00014bf0) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c2f8) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c2f8) popup_snote_single_text_window_t

0x3edd,	// (0x00010c2f) bg_popup_window_pane_cp9_ParamLimits

0x3edd,	// (0x00010c2f) bg_popup_window_pane_cp9

0x7df9,	// (0x00014b4b) popup_snote_single_graphic_window_g1_ParamLimits

0x7df9,	// (0x00014b4b) popup_snote_single_graphic_window_g1

0x3eeb,	// (0x00010c3d) popup_snote_single_graphic_window_g2_ParamLimits

0x3eeb,	// (0x00010c3d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c303) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c303) popup_snote_single_graphic_window_g

0x3ef7,	// (0x00010c49) popup_snote_single_graphic_window_t1_ParamLimits

0x3ef7,	// (0x00010c49) popup_snote_single_graphic_window_t1

0x3f0a,	// (0x00010c5c) popup_snote_single_graphic_window_t2_ParamLimits

0x3f0a,	// (0x00010c5c) popup_snote_single_graphic_window_t2

0x7ecd,	// (0x00014c1f) popup_snote_single_graphic_window_t3_ParamLimits

0x7ecd,	// (0x00014c1f) popup_snote_single_graphic_window_t3

0x7f06,	// (0x00014c58) popup_snote_single_graphic_window_t4_ParamLimits

0x7f06,	// (0x00014c58) popup_snote_single_graphic_window_t4

0x7f3a,	// (0x00014c8c) popup_snote_single_graphic_window_t5_ParamLimits

0x7f3a,	// (0x00014c8c) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c308) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c308) popup_snote_single_graphic_window_t

0xac82,	// (0x000179d4) grid_graphic_popup_pane_ParamLimits

0xac82,	// (0x000179d4) grid_graphic_popup_pane

0xacac,	// (0x000179fe) listscroll_popup_graphic_pane_g1_ParamLimits

0xacac,	// (0x000179fe) listscroll_popup_graphic_pane_g1

0xacc0,	// (0x00017a12) listscroll_popup_graphic_pane_g2_ParamLimits

0xacc0,	// (0x00017a12) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0001c6f3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0001c6f3) listscroll_popup_graphic_pane_g

0xacd4,	// (0x00017a26) scroll_pane_cp5

0xac21,	// (0x00017973) cell_graphic_popup_pane_ParamLimits

0xac21,	// (0x00017973) cell_graphic_popup_pane

0xac02,	// (0x00017954) cell_graphic_popup_pane_g1

0xac0a,	// (0x0001795c) cell_graphic_popup_pane_g2

0x3eb1,	// (0x00010c03) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0001c6ec) cell_graphic_popup_pane_g

0xac13,	// (0x00017965) cell_graphic_popup_pane_t2

0x3eba,	// (0x00010c0c) grid_highlight_pane_cp3

0x3f2f,	// (0x00010c81) list_gen_pane_ParamLimits

0x3f2f,	// (0x00010c81) list_gen_pane

0x3f57,	// (0x00010ca9) scroll_pane

0xab5a,	// (0x000178ac) bg_list_pane_g1_ParamLimits

0xab5a,	// (0x000178ac) bg_list_pane_g1

0xab77,	// (0x000178c9) bg_list_pane_g2_ParamLimits

0xab77,	// (0x000178c9) bg_list_pane_g2

0xab8c,	// (0x000178de) bg_list_pane_g3_ParamLimits

0xab8c,	// (0x000178de) bg_list_pane_g3

0xaba0,	// (0x000178f2) bg_list_pane_g4_ParamLimits

0xaba0,	// (0x000178f2) bg_list_pane_g4

0xabb4,	// (0x00017906) bg_list_pane_g5_ParamLimits

0xabb4,	// (0x00017906) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0001c6e1) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0001c6e1) bg_list_pane_g

0xaa53,	// (0x000177a5) list_double2_graphic_large_graphic_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double2_graphic_large_graphic_pane

0xaa53,	// (0x000177a5) list_double2_graphic_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double2_graphic_pane

0xaa53,	// (0x000177a5) list_double2_large_graphic_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double2_large_graphic_pane

0xaa53,	// (0x000177a5) list_double2_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double2_pane

0xaa53,	// (0x000177a5) list_double_graphic_heading_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_graphic_heading_pane

0xaa53,	// (0x000177a5) list_double_graphic_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_graphic_pane

0xaa53,	// (0x000177a5) list_double_heading_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_heading_pane

0xaa53,	// (0x000177a5) list_double_large_graphic_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_large_graphic_pane

0xaa53,	// (0x000177a5) list_double_number_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_number_pane

0xaa53,	// (0x000177a5) list_double_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_pane

0xaa53,	// (0x000177a5) list_double_time_pane_ParamLimits

0xaa53,	// (0x000177a5) list_double_time_pane

0xaa53,	// (0x000177a5) list_setting_number_pane_ParamLimits

0xaa53,	// (0x000177a5) list_setting_number_pane

0xaa53,	// (0x000177a5) list_setting_pane_ParamLimits

0xaa53,	// (0x000177a5) list_setting_pane

0xaabe,	// (0x00017810) list_single_2graphic_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_2graphic_pane

0xaabe,	// (0x00017810) list_single_graphic_heading_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_graphic_heading_pane

0xaabe,	// (0x00017810) list_single_graphic_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_graphic_pane

0xaabe,	// (0x00017810) list_single_heading_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_heading_pane

0xab38,	// (0x0001788a) list_single_large_graphic_pane_ParamLimits

0xab38,	// (0x0001788a) list_single_large_graphic_pane

0xaabe,	// (0x00017810) list_single_number_heading_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_number_heading_pane

0xaabe,	// (0x00017810) list_single_number_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_number_pane

0xaabe,	// (0x00017810) list_single_pane_ParamLimits

0xaabe,	// (0x00017810) list_single_pane

0x3b93,	// (0x000108e5) list_highlight_pane_cp1

0x7f7f,	// (0x00014cd1) list_single_pane_g1_ParamLimits

0x7f7f,	// (0x00014cd1) list_single_pane_g1

0x7f8b,	// (0x00014cdd) list_single_pane_g2_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c31a) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c31a) list_single_pane_g

0xaa0c,	// (0x0001775e) list_single_pane_t1_ParamLimits

0xaa0c,	// (0x0001775e) list_single_pane_t1

0x7f7f,	// (0x00014cd1) list_single_number_pane_g1_ParamLimits

0x7f7f,	// (0x00014cd1) list_single_number_pane_g1

0x7f8b,	// (0x00014cdd) list_single_number_pane_g2_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c31a) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c31a) list_single_number_pane_g

0x7f97,	// (0x00014ce9) list_single_number_pane_t1_ParamLimits

0x7f97,	// (0x00014ce9) list_single_number_pane_t1

0xa7b2,	// (0x00017504) list_single_number_pane_t2_ParamLimits

0xa7b2,	// (0x00017504) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0001c6a2) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0001c6a2) list_single_number_pane_t

0x7f73,	// (0x00014cc5) list_single_graphic_pane_g1_ParamLimits

0x7f73,	// (0x00014cc5) list_single_graphic_pane_g1

0x7f7f,	// (0x00014cd1) list_single_graphic_pane_g2_ParamLimits

0x7f7f,	// (0x00014cd1) list_single_graphic_pane_g2

0x7f8b,	// (0x00014cdd) list_single_graphic_pane_g3_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c313) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c313) list_single_graphic_pane_g

0x7f97,	// (0x00014ce9) list_single_graphic_pane_t1_ParamLimits

0x7f97,	// (0x00014ce9) list_single_graphic_pane_t1

0x7f7f,	// (0x00014cd1) list_single_heading_pane_g1_ParamLimits

0x7f7f,	// (0x00014cd1) list_single_heading_pane_g1

0x7f8b,	// (0x00014cdd) list_single_heading_pane_g2_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c31a) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c31a) list_single_heading_pane_g

0x7fad,	// (0x00014cff) list_single_heading_pane_t1_ParamLimits

0x7fad,	// (0x00014cff) list_single_heading_pane_t1

0x7fc3,	// (0x00014d15) list_single_heading_pane_t2_ParamLimits

0x7fc3,	// (0x00014d15) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c31f) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c31f) list_single_heading_pane_t

0x7f7f,	// (0x00014cd1) list_single_number_heading_pane_g1_ParamLimits

0x7f7f,	// (0x00014cd1) list_single_number_heading_pane_g1

0x7f8b,	// (0x00014cdd) list_single_number_heading_pane_g2_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c31a) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c31a) list_single_number_heading_pane_g

0x7fad,	// (0x00014cff) list_single_number_heading_pane_t1_ParamLimits

0x7fad,	// (0x00014cff) list_single_number_heading_pane_t1

0x7fd5,	// (0x00014d27) list_single_number_heading_pane_t2_ParamLimits

0x7fd5,	// (0x00014d27) list_single_number_heading_pane_t2

0x7fe7,	// (0x00014d39) list_single_number_heading_pane_t3_ParamLimits

0x7fe7,	// (0x00014d39) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c324) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c324) list_single_number_heading_pane_t

0x7ff9,	// (0x00014d4b) list_single_graphic_heading_pane_g1_ParamLimits

0x7ff9,	// (0x00014d4b) list_single_graphic_heading_pane_g1

0x8005,	// (0x00014d57) list_single_graphic_heading_pane_g4_ParamLimits

0x8005,	// (0x00014d57) list_single_graphic_heading_pane_g4

0x7f8b,	// (0x00014cdd) list_single_graphic_heading_pane_g5_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c32b) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c32b) list_single_graphic_heading_pane_g

0x7fad,	// (0x00014cff) list_single_graphic_heading_pane_t1_ParamLimits

0x7fad,	// (0x00014cff) list_single_graphic_heading_pane_t1

0x8016,	// (0x00014d68) list_single_graphic_heading_pane_t2_ParamLimits

0x8016,	// (0x00014d68) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c332) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c332) list_single_graphic_heading_pane_t

0x8028,	// (0x00014d7a) list_single_large_graphic_pane_g1_ParamLimits

0x8028,	// (0x00014d7a) list_single_large_graphic_pane_g1

0x3f8b,	// (0x00010cdd) list_single_large_graphic_pane_g2_ParamLimits

0x3f8b,	// (0x00010cdd) list_single_large_graphic_pane_g2

0x3f97,	// (0x00010ce9) list_single_large_graphic_pane_g3_ParamLimits

0x3f97,	// (0x00010ce9) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c337) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c337) list_single_large_graphic_pane_g

0x9aba,	// (0x0001680c) wait_border_pane_g2_copy1

0x8034,	// (0x00014d86) list_single_large_graphic_pane_g4_cp2

0x803c,	// (0x00014d8e) list_single_large_graphic_pane_t1_ParamLimits

0x803c,	// (0x00014d8e) list_single_large_graphic_pane_t1

0x3fe7,	// (0x00010d39) list_double_pane_g1_ParamLimits

0x3fe7,	// (0x00010d39) list_double_pane_g1

0x8052,	// (0x00014da4) list_double_pane_g2_ParamLimits

0x8052,	// (0x00014da4) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c33e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c33e) list_double_pane_g

0x805e,	// (0x00014db0) list_double_pane_t1_ParamLimits

0x805e,	// (0x00014db0) list_double_pane_t1

0x8074,	// (0x00014dc6) list_double_pane_t2_ParamLimits

0x8074,	// (0x00014dc6) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c343) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c343) list_double_pane_t

0x8086,	// (0x00014dd8) list_double2_pane_g1_ParamLimits

0x8086,	// (0x00014dd8) list_double2_pane_g1

0x8097,	// (0x00014de9) list_double2_pane_g2_ParamLimits

0x8097,	// (0x00014de9) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c348) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c348) list_double2_pane_g

0x80a3,	// (0x00014df5) list_double2_pane_t1_ParamLimits

0x80a3,	// (0x00014df5) list_double2_pane_t1

0x80b9,	// (0x00014e0b) list_double2_pane_t2_ParamLimits

0x80b9,	// (0x00014e0b) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c34d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c34d) list_double2_pane_t

0x3fe7,	// (0x00010d39) list_double_number_pane_g1_ParamLimits

0x3fe7,	// (0x00010d39) list_double_number_pane_g1

0x8052,	// (0x00014da4) list_double_number_pane_g2_ParamLimits

0x8052,	// (0x00014da4) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c33e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c33e) list_double_number_pane_g

0x80cb,	// (0x00014e1d) list_double_number_pane_t1_ParamLimits

0x80cb,	// (0x00014e1d) list_double_number_pane_t1

0x80dd,	// (0x00014e2f) list_double_number_pane_t2_ParamLimits

0x80dd,	// (0x00014e2f) list_double_number_pane_t2

0x80f3,	// (0x00014e45) list_double_number_pane_t3_ParamLimits

0x80f3,	// (0x00014e45) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c352) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c352) list_double_number_pane_t

0x8105,	// (0x00014e57) list_double_graphic_pane_g1_ParamLimits

0x8105,	// (0x00014e57) list_double_graphic_pane_g1

0x8111,	// (0x00014e63) list_double_graphic_pane_g2_ParamLimits

0x8111,	// (0x00014e63) list_double_graphic_pane_g2

0x8120,	// (0x00014e72) list_double_graphic_pane_g3_ParamLimits

0x8120,	// (0x00014e72) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c359) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c359) list_double_graphic_pane_g

0x80dd,	// (0x00014e2f) list_double_graphic_pane_t1_ParamLimits

0x80dd,	// (0x00014e2f) list_double_graphic_pane_t1

0x80f3,	// (0x00014e45) list_double_graphic_pane_t2_ParamLimits

0x80f3,	// (0x00014e45) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c362) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c362) list_double_graphic_pane_t

0x8138,	// (0x00014e8a) list_double2_graphic_pane_g1_ParamLimits

0x8138,	// (0x00014e8a) list_double2_graphic_pane_g1

0x3ff3,	// (0x00010d45) list_double2_graphic_pane_g2_ParamLimits

0x3ff3,	// (0x00010d45) list_double2_graphic_pane_g2

0x8097,	// (0x00014de9) list_double2_graphic_pane_g3_ParamLimits

0x8097,	// (0x00014de9) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c367) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c367) list_double2_graphic_pane_g

0x8144,	// (0x00014e96) list_double2_graphic_pane_t1_ParamLimits

0x8144,	// (0x00014e96) list_double2_graphic_pane_t1

0x815a,	// (0x00014eac) list_double2_graphic_pane_t2_ParamLimits

0x815a,	// (0x00014eac) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c36e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c36e) list_double2_graphic_pane_t

0x816c,	// (0x00014ebe) list_double_large_graphic_pane_g1_ParamLimits

0x816c,	// (0x00014ebe) list_double_large_graphic_pane_g1

0x818b,	// (0x00014edd) list_double_large_graphic_pane_g2_ParamLimits

0x818b,	// (0x00014edd) list_double_large_graphic_pane_g2

0x8052,	// (0x00014da4) list_double_large_graphic_pane_g3_ParamLimits

0x8052,	// (0x00014da4) list_double_large_graphic_pane_g3

0x819c,	// (0x00014eee) list_double_large_graphic_pane_g4_ParamLimits

0x819c,	// (0x00014eee) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c373) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c373) list_double_large_graphic_pane_g

0x81ae,	// (0x00014f00) list_double_large_graphic_pane_t1_ParamLimits

0x81ae,	// (0x00014f00) list_double_large_graphic_pane_t1

0x81c7,	// (0x00014f19) list_double_large_graphic_pane_t2_ParamLimits

0x81c7,	// (0x00014f19) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c37e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c37e) list_double_large_graphic_pane_t

0x81d9,	// (0x00014f2b) list_double2_large_graphic_pane_g1_ParamLimits

0x81d9,	// (0x00014f2b) list_double2_large_graphic_pane_g1

0x8086,	// (0x00014dd8) list_double2_large_graphic_pane_g2_ParamLimits

0x8086,	// (0x00014dd8) list_double2_large_graphic_pane_g2

0x8097,	// (0x00014de9) list_double2_large_graphic_pane_g3_ParamLimits

0x8097,	// (0x00014de9) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c383) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c383) list_double2_large_graphic_pane_g

0x8144,	// (0x00014e96) list_double2_large_graphic_pane_t1_ParamLimits

0x8144,	// (0x00014e96) list_double2_large_graphic_pane_t1

0x815a,	// (0x00014eac) list_double2_large_graphic_pane_t2_ParamLimits

0x815a,	// (0x00014eac) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c36e) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c36e) list_double2_large_graphic_pane_t

0x81e5,	// (0x00014f37) list_double_heading_pane_g1_ParamLimits

0x81e5,	// (0x00014f37) list_double_heading_pane_g1

0x81f6,	// (0x00014f48) list_double_heading_pane_g2_ParamLimits

0x81f6,	// (0x00014f48) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0001c38a) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0001c38a) list_double_heading_pane_g

0x8202,	// (0x00014f54) list_double_heading_pane_t1_ParamLimits

0x8202,	// (0x00014f54) list_double_heading_pane_t1

0x815a,	// (0x00014eac) list_double_heading_pane_t2_ParamLimits

0x815a,	// (0x00014eac) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c38f) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c38f) list_double_heading_pane_t

0x8218,	// (0x00014f6a) list_double_graphic_heading_pane_g1_ParamLimits

0x8218,	// (0x00014f6a) list_double_graphic_heading_pane_g1

0x81e5,	// (0x00014f37) list_double_graphic_heading_pane_g2_ParamLimits

0x81e5,	// (0x00014f37) list_double_graphic_heading_pane_g2

0x81f6,	// (0x00014f48) list_double_graphic_heading_pane_g3_ParamLimits

0x81f6,	// (0x00014f48) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0001c394) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0001c394) list_double_graphic_heading_pane_g

0x8202,	// (0x00014f54) list_double_graphic_heading_pane_t1_ParamLimits

0x8202,	// (0x00014f54) list_double_graphic_heading_pane_t1

0x815a,	// (0x00014eac) list_double_graphic_heading_pane_t2_ParamLimits

0x815a,	// (0x00014eac) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c38f) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c38f) list_double_graphic_heading_pane_t

0x818b,	// (0x00014edd) list_double_time_pane_g1_ParamLimits

0x818b,	// (0x00014edd) list_double_time_pane_g1

0x8052,	// (0x00014da4) list_double_time_pane_g2_ParamLimits

0x8052,	// (0x00014da4) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0001c39b) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0001c39b) list_double_time_pane_g

0x8224,	// (0x00014f76) list_double_time_pane_t1_ParamLimits

0x8224,	// (0x00014f76) list_double_time_pane_t1

0x823a,	// (0x00014f8c) list_double_time_pane_t2_ParamLimits

0x823a,	// (0x00014f8c) list_double_time_pane_t2

0x824c,	// (0x00014f9e) list_double_time_pane_t3_ParamLimits

0x824c,	// (0x00014f9e) list_double_time_pane_t3

0x825e,	// (0x00014fb0) list_double_time_pane_t4_ParamLimits

0x825e,	// (0x00014fb0) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0001c3a0) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0001c3a0) list_double_time_pane_t

0x3ff3,	// (0x00010d45) list_setting_pane_g1_ParamLimits

0x3ff3,	// (0x00010d45) list_setting_pane_g1

0x8097,	// (0x00014de9) list_setting_pane_g2_ParamLimits

0x8097,	// (0x00014de9) list_setting_pane_g2

0x0001,

0xf657,	// (0x0001c3a9) list_setting_pane_g_ParamLimits

0xf657,	// (0x0001c3a9) list_setting_pane_g

0x8270,	// (0x00014fc2) list_setting_pane_t1_ParamLimits

0x8270,	// (0x00014fc2) list_setting_pane_t1

0x8287,	// (0x00014fd9) list_setting_pane_t2_ParamLimits

0x8287,	// (0x00014fd9) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0001c3ae) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0001c3ae) list_setting_pane_t

0x82c4,	// (0x00015016) set_value_pane_cp_ParamLimits

0x82c4,	// (0x00015016) set_value_pane_cp

0x3ff3,	// (0x00010d45) list_setting_number_pane_g1_ParamLimits

0x3ff3,	// (0x00010d45) list_setting_number_pane_g1

0x8097,	// (0x00014de9) list_setting_number_pane_g2_ParamLimits

0x8097,	// (0x00014de9) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x0001c3a9) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x0001c3a9) list_setting_number_pane_g

0x82d0,	// (0x00015022) list_setting_number_pane_t1_ParamLimits

0x82d0,	// (0x00015022) list_setting_number_pane_t1

0x82e4,	// (0x00015036) list_setting_number_pane_t2_ParamLimits

0x82e4,	// (0x00015036) list_setting_number_pane_t2

0x82fb,	// (0x0001504d) list_setting_number_pane_t3_ParamLimits

0x82fb,	// (0x0001504d) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x0001c3b5) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x0001c3b5) list_setting_number_pane_t

0x82c4,	// (0x00015016) set_value_pane_ParamLimits

0x82c4,	// (0x00015016) set_value_pane

0x3fb8,	// (0x00010d0a) bg_set_opt_pane_ParamLimits

0x3fb8,	// (0x00010d0a) bg_set_opt_pane

0x3fd9,	// (0x00010d2b) set_value_pane_t1

0x3fff,	// (0x00010d51) slider_set_pane_cp3

0x833e,	// (0x00015090) volume_small_pane_cp

0x4008,	// (0x00010d5a) list_form_gen_pane

0x4011,	// (0x00010d63) scroll_pane_cp8

0x8347,	// (0x00015099) form_field_data_pane_ParamLimits

0x8347,	// (0x00015099) form_field_data_pane

0x835f,	// (0x000150b1) form_field_data_wide_pane_ParamLimits

0x835f,	// (0x000150b1) form_field_data_wide_pane

0x8380,	// (0x000150d2) form_field_popup_pane_ParamLimits

0x8380,	// (0x000150d2) form_field_popup_pane

0x83a0,	// (0x000150f2) form_field_popup_wide_pane_ParamLimits

0x83a0,	// (0x000150f2) form_field_popup_wide_pane

0x4032,	// (0x00010d84) form_field_slider_pane_ParamLimits

0x4032,	// (0x00010d84) form_field_slider_pane

0x83bd,	// (0x0001510f) form_field_slider_wide_pane_ParamLimits

0x83bd,	// (0x0001510f) form_field_slider_wide_pane

0x4045,	// (0x00010d97) data_form_pane

0x83da,	// (0x0001512c) form_field_data_pane_t1

0x4051,	// (0x00010da3) input_focus_pane

0x405f,	// (0x00010db1) data_form_wide_pane

0x4090,	// (0x00010de2) form_field_data_wide_pane_t1

0x3ecf,	// (0x00010c21) input_focus_pane_cp6

0x83f2,	// (0x00015144) form_field_popup_pane_t1

0x4051,	// (0x00010da3) input_focus_pane_cp7

0x40b2,	// (0x00010e04) list_form_pane

0x40c6,	// (0x00010e18) form_field_popup_wide_pane_t1

0x4051,	// (0x00010da3) input_focus_pane_cp8

0x40db,	// (0x00010e2d) list_form_wide_pane

0x8412,	// (0x00015164) form_field_slider_pane_t1_ParamLimits

0x8412,	// (0x00015164) form_field_slider_pane_t1

0x8424,	// (0x00015176) form_field_slider_pane_t2_ParamLimits

0x8424,	// (0x00015176) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x0001c3c5) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x0001c3c5) form_field_slider_pane_t

0x3c01,	// (0x00010953) input_focus_pane_cp9_ParamLimits

0x3c01,	// (0x00010953) input_focus_pane_cp9

0x8436,	// (0x00015188) slider_cont_pane_ParamLimits

0x8436,	// (0x00015188) slider_cont_pane

0x40e7,	// (0x00010e39) form_field_slider_wide_pane_t1_ParamLimits

0x40e7,	// (0x00010e39) form_field_slider_wide_pane_t1

0x40f9,	// (0x00010e4b) form_field_slider_wide_pane_t2_ParamLimits

0x40f9,	// (0x00010e4b) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0001c3ca) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0001c3ca) form_field_slider_wide_pane_t

0x3c01,	// (0x00010953) input_focus_pane_cp10_ParamLimits

0x3c01,	// (0x00010953) input_focus_pane_cp10

0x844a,	// (0x0001519c) slider_cont_pane_cp1_ParamLimits

0x844a,	// (0x0001519c) slider_cont_pane_cp1

0x845e,	// (0x000151b0) slider_form_pane_cp

0x410b,	// (0x00010e5d) input_focus_pane_g1

0x4113,	// (0x00010e65) input_focus_pane_g2

0x411b,	// (0x00010e6d) input_focus_pane_g3

0x4123,	// (0x00010e75) input_focus_pane_g4

0x412b,	// (0x00010e7d) input_focus_pane_g5

0x4133,	// (0x00010e85) input_focus_pane_g6

0x413b,	// (0x00010e8d) input_focus_pane_g7

0x4143,	// (0x00010e95) input_focus_pane_g8

0x414b,	// (0x00010e9d) input_focus_pane_g9

0x3a1a,	// (0x0001076c) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0001c3cf) input_focus_pane_g

0x9ac3,	// (0x00016815) wait_border_pane_g3_copy1

0x8466,	// (0x000151b8) data_form_pane_t1

0x3a1a,	// (0x0001076c) wait_anim_pane_g1_copy1

0xa9ef,	// (0x00017741) data_form_wide_pane_t1

0x8481,	// (0x000151d3) list_form_graphic_pane_cp_ParamLimits

0x8481,	// (0x000151d3) list_form_graphic_pane_cp

0xa9c4,	// (0x00017716) slider_form_pane_g1

0xa9cd,	// (0x0001771f) slider_form_pane_g2

0x0006,

0xf980,	// (0x0001c6d2) slider_form_pane_g

0x8495,	// (0x000151e7) list_form_graphic_pane_ParamLimits

0x8495,	// (0x000151e7) list_form_graphic_pane

0x84ac,	// (0x000151fe) list_form_graphic_pane_g1

0x84b4,	// (0x00015206) list_form_graphic_pane_t1_ParamLimits

0x84b4,	// (0x00015206) list_form_graphic_pane_t1

0x3c0f,	// (0x00010961) list_highlight_pane_cp5_ParamLimits

0x3c0f,	// (0x00010961) list_highlight_pane_cp5

0x84c9,	// (0x0001521b) find_pane_g1

0x4153,	// (0x00010ea5) input_find_pane

0x84d2,	// (0x00015224) input_find_pane_g1_ParamLimits

0x84d2,	// (0x00015224) input_find_pane_g1

0x84de,	// (0x00015230) input_find_pane_t1_ParamLimits

0x84de,	// (0x00015230) input_find_pane_t1

0x84f3,	// (0x00015245) input_find_pane_t2_ParamLimits

0x84f3,	// (0x00015245) input_find_pane_t2

0x0001,

0xf692,	// (0x0001c3e4) input_find_pane_t_ParamLimits

0xf692,	// (0x0001c3e4) input_find_pane_t

0x415c,	// (0x00010eae) input_focus_pane_cp5_ParamLimits

0x415c,	// (0x00010eae) input_focus_pane_cp5

0x416a,	// (0x00010ebc) bg_popup_window_pane_cp2_ParamLimits

0x416a,	// (0x00010ebc) bg_popup_window_pane_cp2

0x4177,	// (0x00010ec9) listscroll_menu_pane_ParamLimits

0x4177,	// (0x00010ec9) listscroll_menu_pane

0x8514,	// (0x00015266) popup_submenu_window_ParamLimits

0x8514,	// (0x00015266) popup_submenu_window

0x4183,	// (0x00010ed5) find_popup_pane_g1

0x853c,	// (0x0001528e) input_popup_find_pane_cp

0x415c,	// (0x00010eae) input_focus_pane_cp4_ParamLimits

0x415c,	// (0x00010eae) input_focus_pane_cp4

0x418b,	// (0x00010edd) input_popup_find_pane_t1_ParamLimits

0x418b,	// (0x00010edd) input_popup_find_pane_t1

0x3b93,	// (0x000108e5) bg_popup_sub_pane_cp

0x41b9,	// (0x00010f0b) listscroll_popup_sub_pane

0x41c1,	// (0x00010f13) list_submenu_pane_ParamLimits

0x41c1,	// (0x00010f13) list_submenu_pane

0x41d2,	// (0x00010f24) scroll_pane_cp4

0x8554,	// (0x000152a6) list_single_popup_submenu_pane_ParamLimits

0x8554,	// (0x000152a6) list_single_popup_submenu_pane

0x4352,	// (0x000110a4) list_single_popup_submenu_pane_g1

0x8568,	// (0x000152ba) list_single_popup_submenu_pane_t1_ParamLimits

0x8568,	// (0x000152ba) list_single_popup_submenu_pane_t1

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp1_ParamLimits

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp1

0x41da,	// (0x00010f2c) tabs_2_active_pane_g1

0x857d,	// (0x000152cf) tabs_2_active_pane_t1

0x3c0f,	// (0x00010961) bg_passive_tab_pane_cp1_ParamLimits

0x3c0f,	// (0x00010961) bg_passive_tab_pane_cp1

0x41da,	// (0x00010f2c) tabs_2_passive_pane_g1

0x857d,	// (0x000152cf) tabs_2_passive_pane_t1

0x4344,	// (0x00011096) bg_active_tab_pane_cp4

0x858f,	// (0x000152e1) tabs_2_long_active_pane_t1

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp4

0x657d,	// (0x000132cf) list_single_midp_graphic_pane_g4_ParamLimits

0x4344,	// (0x00011096) bg_active_tab_pane_cp5

0x85ae,	// (0x00015300) tabs_3_long_active_pane_t1

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp5

0x657d,	// (0x000132cf) list_single_midp_graphic_pane_g4

0x3c0f,	// (0x00010961) bg_popup_window_pane_cp13_ParamLimits

0x3c0f,	// (0x00010961) bg_popup_window_pane_cp13

0x41e2,	// (0x00010f34) listscroll_popup_fast_pane_ParamLimits

0x41e2,	// (0x00010f34) listscroll_popup_fast_pane

0x41ee,	// (0x00010f40) grid_popup_fast_pane_ParamLimits

0x41ee,	// (0x00010f40) grid_popup_fast_pane

0x4200,	// (0x00010f52) scroll_pane_cp9_ParamLimits

0x4200,	// (0x00010f52) scroll_pane_cp9

0xc916,	// (0x00019668) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc916,	// (0x00019668) list_single_graphic_hl_pane_t1_cp2

0x4213,	// (0x00010f65) input_focus_pane_cp20_ParamLimits

0x4213,	// (0x00010f65) input_focus_pane_cp20

0x4221,	// (0x00010f73) query_popup_data_pane_t1_ParamLimits

0x4221,	// (0x00010f73) query_popup_data_pane_t1

0x4234,	// (0x00010f86) query_popup_data_pane_t2_ParamLimits

0x4234,	// (0x00010f86) query_popup_data_pane_t2

0x427a,	// (0x00010fcc) query_popup_data_pane_t3_ParamLimits

0x427a,	// (0x00010fcc) query_popup_data_pane_t3

0x42bb,	// (0x0001100d) query_popup_data_pane_t4_ParamLimits

0x42bb,	// (0x0001100d) query_popup_data_pane_t4

0x42f7,	// (0x00011049) query_popup_data_pane_t5_ParamLimits

0x42f7,	// (0x00011049) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0001c3e9) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0001c3e9) query_popup_data_pane_t

0x410b,	// (0x00010e5d) bg_set_opt_pane_g1

0x4113,	// (0x00010e65) bg_set_opt_pane_g2

0x411b,	// (0x00010e6d) bg_set_opt_pane_g3

0x4123,	// (0x00010e75) bg_set_opt_pane_g4

0x412b,	// (0x00010e7d) bg_set_opt_pane_g5

0x4133,	// (0x00010e85) bg_set_opt_pane_g6

0x413b,	// (0x00010e8d) bg_set_opt_pane_g7

0x4143,	// (0x00010e95) bg_set_opt_pane_g8

0x414b,	// (0x00010e9d) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x0001c3f4) bg_set_opt_pane_g

0x5b91,	// (0x000128e3) control_top_pane_stacon_ParamLimits

0x5b91,	// (0x000128e3) control_top_pane_stacon

0x5be4,	// (0x00012936) signal_pane_stacon_ParamLimits

0x5be4,	// (0x00012936) signal_pane_stacon

0x4962,	// (0x000116b4) stacon_top_pane_g1_ParamLimits

0x4962,	// (0x000116b4) stacon_top_pane_g1

0x5c09,	// (0x0001295b) title_pane_stacon_ParamLimits

0x5c09,	// (0x0001295b) title_pane_stacon

0x5c33,	// (0x00012985) uni_indicator_pane_stacon_ParamLimits

0x5c33,	// (0x00012985) uni_indicator_pane_stacon

0x5c48,	// (0x0001299a) battery_pane_stacon_ParamLimits

0x5c48,	// (0x0001299a) battery_pane_stacon

0x5c8c,	// (0x000129de) control_bottom_pane_stacon_ParamLimits

0x5c8c,	// (0x000129de) control_bottom_pane_stacon

0x5caf,	// (0x00012a01) navi_pane_stacon_ParamLimits

0x5caf,	// (0x00012a01) navi_pane_stacon

0x4a4d,	// (0x0001179f) stacon_bottom_pane_g1_ParamLimits

0x4a4d,	// (0x0001179f) stacon_bottom_pane_g1

0x58fd,	// (0x0001264f) aid_levels_signal_lsc_ParamLimits

0x58fd,	// (0x0001264f) aid_levels_signal_lsc

0x5913,	// (0x00012665) signal_pane_stacon_g1_ParamLimits

0x5913,	// (0x00012665) signal_pane_stacon_g1

0x5927,	// (0x00012679) signal_pane_stacon_g2_ParamLimits

0x5927,	// (0x00012679) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x0001c407) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x0001c407) signal_pane_stacon_g

0x595c,	// (0x000126ae) title_pane_stacon_t1_ParamLimits

0x595c,	// (0x000126ae) title_pane_stacon_t1

0x43e9,	// (0x0001113b) uni_indicator_pane_stacon_g1

0x43f3,	// (0x00011145) uni_indicator_pane_stacon_g2

0x43d5,	// (0x00011127) uni_indicator_pane_stacon_g3

0x43df,	// (0x00011131) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x0001c413) uni_indicator_pane_stacon_g

0x5981,	// (0x000126d3) control_top_pane_stacon_g1

0x5989,	// (0x000126db) control_top_pane_stacon_t1_ParamLimits

0x5989,	// (0x000126db) control_top_pane_stacon_t1

0x59c0,	// (0x00012712) aid_levels_battery_lsc_ParamLimits

0x59c0,	// (0x00012712) aid_levels_battery_lsc

0x59d7,	// (0x00012729) battery_pane_stacon_g1_ParamLimits

0x59d7,	// (0x00012729) battery_pane_stacon_g1

0x59ea,	// (0x0001273c) battery_pane_stacon_g2_ParamLimits

0x59ea,	// (0x0001273c) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0001c41c) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c41c) battery_pane_stacon_g

0x5a28,	// (0x0001277a) navi_icon_pane_stacon

0x5a3c,	// (0x0001278e) navi_navi_pane_stacon

0x5a28,	// (0x0001277a) navi_text_pane_stacon

0x5981,	// (0x000126d3) control_bottom_pane_stacon_g1

0x5a50,	// (0x000127a2) control_bottom_pane_stacon_t1_ParamLimits

0x5a50,	// (0x000127a2) control_bottom_pane_stacon_t1

0x85da,	// (0x0001532c) grid_app_pane_ParamLimits

0x85da,	// (0x0001532c) grid_app_pane

0x85fc,	// (0x0001534e) scroll_pane_cp15_ParamLimits

0x85fc,	// (0x0001534e) scroll_pane_cp15

0x860f,	// (0x00015361) cell_app_pane_ParamLimits

0x860f,	// (0x00015361) cell_app_pane

0x8637,	// (0x00015389) cell_app_pane_g1_ParamLimits

0x8637,	// (0x00015389) cell_app_pane_g1

0x451d,	// (0x0001126f) cell_app_pane_g2_ParamLimits

0x451d,	// (0x0001126f) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x0001c421) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x0001c421) cell_app_pane_g

0x865b,	// (0x000153ad) cell_app_pane_t1_ParamLimits

0x865b,	// (0x000153ad) cell_app_pane_t1

0x4529,	// (0x0001127b) grid_highlight_pane_ParamLimits

0x4529,	// (0x0001127b) grid_highlight_pane

0x410b,	// (0x00010e5d) cell_highlight_pane_g1

0x4113,	// (0x00010e65) cell_highlight_pane_g2

0x411b,	// (0x00010e6d) cell_highlight_pane_g3

0x4123,	// (0x00010e75) cell_highlight_pane_g4

0x412b,	// (0x00010e7d) cell_highlight_pane_g5

0x4133,	// (0x00010e85) cell_highlight_pane_g6

0x413b,	// (0x00010e8d) cell_highlight_pane_g7

0x4143,	// (0x00010e95) cell_highlight_pane_g8

0x414b,	// (0x00010e9d) cell_highlight_pane_g9

0x3a1a,	// (0x0001076c) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0001c3cf) cell_highlight_pane_g

0x4544,	// (0x00011296) bg_scroll_pane

0x5a9a,	// (0x000127ec) scroll_handle_pane

0x45a0,	// (0x000112f2) scroll_bg_pane_g1

0x45b5,	// (0x00011307) scroll_bg_pane_g2

0x45cd,	// (0x0001131f) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x0001c426) scroll_bg_pane_g

0x8672,	// (0x000153c4) scroll_handle_focus_pane_ParamLimits

0x8672,	// (0x000153c4) scroll_handle_focus_pane

0x45a0,	// (0x000112f2) scroll_handle_pane_g1

0x45e2,	// (0x00011334) scroll_handle_pane_g2

0x45cd,	// (0x0001131f) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0001c42d) scroll_handle_pane_g

0x415c,	// (0x00010eae) bg_popup_sub_pane_cp21_ParamLimits

0x415c,	// (0x00010eae) bg_popup_sub_pane_cp21

0x867f,	// (0x000153d1) popup_fep_japan_predictive_window_t1_ParamLimits

0x867f,	// (0x000153d1) popup_fep_japan_predictive_window_t1

0x8699,	// (0x000153eb) popup_fep_japan_predictive_window_t2_ParamLimits

0x8699,	// (0x000153eb) popup_fep_japan_predictive_window_t2

0x86cc,	// (0x0001541e) popup_fep_japan_predictive_window_t3_ParamLimits

0x86cc,	// (0x0001541e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x0001c434) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x0001c434) popup_fep_japan_predictive_window_t

0x3b93,	// (0x000108e5) bg_popup_sub_pane_cp23

0x4777,	// (0x000114c9) listscroll_japin_cand_pane

0x45f6,	// (0x00011348) popup_fep_japan_candidate_window_t1

0x4604,	// (0x00011356) candidate_pane_ParamLimits

0x4604,	// (0x00011356) candidate_pane

0x8703,	// (0x00015455) scroll_pane_cp30

0x4616,	// (0x00011368) list_single_popup_jap_candidate_pane_ParamLimits

0x4616,	// (0x00011368) list_single_popup_jap_candidate_pane

0x3b93,	// (0x000108e5) list_highlight_pane_cp30

0x462b,	// (0x0001137d) list_single_popup_jap_candidate_pane_t1

0x463a,	// (0x0001138c) level_1_signal

0x4647,	// (0x00011399) level_2_signal

0x4654,	// (0x000113a6) level_3_signal

0x4661,	// (0x000113b3) level_4_signal

0x466e,	// (0x000113c0) level_5_signal

0x467b,	// (0x000113cd) level_6_signal

0x4688,	// (0x000113da) level_7_signal

0x463a,	// (0x0001138c) level_1_battery

0x4647,	// (0x00011399) level_2_battery

0x4654,	// (0x000113a6) level_3_battery

0x4661,	// (0x000113b3) level_4_battery

0x466e,	// (0x000113c0) level_5_battery

0x467b,	// (0x000113cd) level_6_battery

0x4688,	// (0x000113da) level_7_battery

0x46cc,	// (0x0001141e) list_menu_pane_ParamLimits

0x46cc,	// (0x0001141e) list_menu_pane

0x46e2,	// (0x00011434) scroll_pane_cp25_ParamLimits

0x46e2,	// (0x00011434) scroll_pane_cp25

0x46fb,	// (0x0001144d) list_double2_graphic_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double2_graphic_pane_cp2

0x46fb,	// (0x0001144d) list_double2_large_graphic_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double2_large_graphic_pane_cp2

0x46fb,	// (0x0001144d) list_double2_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double2_pane_cp2

0x46fb,	// (0x0001144d) list_double_graphic_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double_graphic_pane_cp2

0x46fb,	// (0x0001144d) list_double_large_graphic_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double_large_graphic_pane_cp2

0x46fb,	// (0x0001144d) list_double_number_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double_number_pane_cp2

0x46fb,	// (0x0001144d) list_double_pane_cp2_ParamLimits

0x46fb,	// (0x0001144d) list_double_pane_cp2

0x871f,	// (0x00015471) list_single_2graphic_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_2graphic_pane_cp2

0x871f,	// (0x00015471) list_single_graphic_heading_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_graphic_heading_pane_cp2

0x871f,	// (0x00015471) list_single_graphic_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_graphic_pane_cp2

0x871f,	// (0x00015471) list_single_heading_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_heading_pane_cp2

0x470b,	// (0x0001145d) list_single_large_graphic_pane_cp2_ParamLimits

0x470b,	// (0x0001145d) list_single_large_graphic_pane_cp2

0x871f,	// (0x00015471) list_single_number_heading_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_number_heading_pane_cp2

0x871f,	// (0x00015471) list_single_number_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_number_pane_cp2

0x871f,	// (0x00015471) list_single_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_pane_cp2

0x4788,	// (0x000114da) bg_popup_sub_pane_cp22

0x5b49,	// (0x0001289b) popup_side_volume_key_window_g1

0x5b6d,	// (0x000128bf) popup_side_volume_key_window_t1

0x5b89,	// (0x000128db) volume_small_pane_cp1

0x3c01,	// (0x00010953) bg_popup_sub_pane_cp24_ParamLimits

0x3c01,	// (0x00010953) bg_popup_sub_pane_cp24

0x47b8,	// (0x0001150a) fep_china_uni_candidate_pane_ParamLimits

0x47b8,	// (0x0001150a) fep_china_uni_candidate_pane

0x47cc,	// (0x0001151e) fep_china_uni_entry_pane

0x47dc,	// (0x0001152e) popup_fep_china_uni_window_g1

0x8790,	// (0x000154e2) fep_china_uni_entry_pane_g1

0x8798,	// (0x000154ea) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x0001c465) fep_china_uni_entry_pane_g

0x47f8,	// (0x0001154a) fep_entry_item_pane

0x4802,	// (0x00011554) fep_candidate_item_pane

0x87a0,	// (0x000154f2) fep_china_uni_candidate_pane_g1

0x480a,	// (0x0001155c) fep_china_uni_candidate_pane_g2

0x4812,	// (0x00011564) fep_china_uni_candidate_pane_g3

0x87a8,	// (0x000154fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0001c46a) fep_china_uni_candidate_pane_g

0x3a1a,	// (0x0001076c) fep_entry_item_pane_g1

0x481a,	// (0x0001156c) fep_entry_item_pane_t1_ParamLimits

0x481a,	// (0x0001156c) fep_entry_item_pane_t1

0x4830,	// (0x00011582) fep_candidate_item_pane_t1_ParamLimits

0x4830,	// (0x00011582) fep_candidate_item_pane_t1

0x4845,	// (0x00011597) fep_candidate_item_pane_t2_ParamLimits

0x4845,	// (0x00011597) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x0001c473) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x0001c473) fep_candidate_item_pane_t

0x3c0f,	// (0x00010961) list_highlight_pane_cp31_ParamLimits

0x3c0f,	// (0x00010961) list_highlight_pane_cp31

0x4857,	// (0x000115a9) level_1_signal_lsc

0x4860,	// (0x000115b2) level_2_signal_lsc

0x4869,	// (0x000115bb) level_3_signal_lsc

0x4872,	// (0x000115c4) level_4_signal_lsc

0x487b,	// (0x000115cd) level_5_signal_lsc

0x4884,	// (0x000115d6) level_6_signal_lsc

0x488d,	// (0x000115df) level_7_signal_lsc

0x488d,	// (0x000115df) level_1_battery_lsc

0x4896,	// (0x000115e8) level_2_battery_lsc

0x489f,	// (0x000115f1) level_3_battery_lsc

0x48a8,	// (0x000115fa) level_4_battery_lsc

0x48b1,	// (0x00011603) level_5_battery_lsc

0x48ba,	// (0x0001160c) level_6_battery_lsc

0x4857,	// (0x000115a9) level_7_battery_lsc

0x48c3,	// (0x00011615) scroll_handle_focus_pane_g1

0x48cc,	// (0x0001161e) scroll_handle_focus_pane_g2

0x48d5,	// (0x00011627) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x0001c478) scroll_handle_focus_pane_g

0x87b0,	// (0x00015502) list_single_2graphic_pane_g1_ParamLimits

0x87b0,	// (0x00015502) list_single_2graphic_pane_g1

0x8005,	// (0x00014d57) list_single_2graphic_pane_g2_ParamLimits

0x8005,	// (0x00014d57) list_single_2graphic_pane_g2

0x7f8b,	// (0x00014cdd) list_single_2graphic_pane_g3_ParamLimits

0x7f8b,	// (0x00014cdd) list_single_2graphic_pane_g3

0x87bc,	// (0x0001550e) list_single_2graphic_pane_g4_ParamLimits

0x87bc,	// (0x0001550e) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0001c47f) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0001c47f) list_single_2graphic_pane_g

0x87c8,	// (0x0001551a) list_single_2graphic_pane_t1_ParamLimits

0x87c8,	// (0x0001551a) list_single_2graphic_pane_t1

0x87f6,	// (0x00015548) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87f6,	// (0x00015548) list_double2_graphic_large_graphic_pane_g1

0x8086,	// (0x00014dd8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8086,	// (0x00014dd8) list_double2_graphic_large_graphic_pane_g2

0x8097,	// (0x00014de9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8097,	// (0x00014de9) list_double2_graphic_large_graphic_pane_g3

0x4906,	// (0x00011658) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4906,	// (0x00011658) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x0001c488) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x0001c488) list_double2_graphic_large_graphic_pane_g

0x8806,	// (0x00015558) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8806,	// (0x00015558) list_double2_graphic_large_graphic_pane_t1

0x881c,	// (0x0001556e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x881c,	// (0x0001556e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x0001c491) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x0001c491) list_double2_graphic_large_graphic_pane_t

0x88bf,	// (0x00015611) popup_fast_swap_window_ParamLimits

0x88bf,	// (0x00015611) popup_fast_swap_window

0x88db,	// (0x0001562d) popup_side_volume_key_window

0x88f5,	// (0x00015647) stacon_top_pane

0x88ff,	// (0x00015651) status_pane_ParamLimits

0x88ff,	// (0x00015651) status_pane

0x890d,	// (0x0001565f) status_small_pane

0x3b93,	// (0x000108e5) control_pane

0x3b93,	// (0x000108e5) stacon_bottom_pane

0x4011,	// (0x00010d63) scroll_pane_cp121

0x4008,	// (0x00010d5a) set_content_pane

0x882e,	// (0x00015580) bg_active_tab_pane_g1_cp1

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp1

0x8840,	// (0x00015592) bg_active_tab_pane_g3_cp1

0x882e,	// (0x00015580) bg_passive_tab_pane_g1_cp1

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp1

0x8840,	// (0x00015592) bg_passive_tab_pane_g3_cp1

0x8849,	// (0x0001559b) bg_active_tab_pane_g1_cp2

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp2

0x8852,	// (0x000155a4) bg_active_tab_pane_g3_cp2

0x8849,	// (0x0001559b) bg_passive_tab_pane_g1_cp2

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp2

0x8852,	// (0x000155a4) bg_passive_tab_pane_g3_cp2

0x885b,	// (0x000155ad) bg_active_tab_pane_g1_cp3

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp3

0x8864,	// (0x000155b6) bg_active_tab_pane_g3_cp3

0x885b,	// (0x000155ad) bg_passive_tab_pane_g1_cp3

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp3

0x8864,	// (0x000155b6) bg_passive_tab_pane_g3_cp3

0x886d,	// (0x000155bf) bg_active_tab_pane_g1_cp4

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp4

0x8878,	// (0x000155ca) bg_active_tab_pane_g3_cp4

0x886d,	// (0x000155bf) bg_passive_tab_pane_g1_cp4

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp4

0x8878,	// (0x000155ca) bg_passive_tab_pane_g3_cp4

0x8883,	// (0x000155d5) bg_active_tab_pane_g1_cp5

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp5

0x888c,	// (0x000155de) bg_active_tab_pane_g3_cp5

0x8883,	// (0x000155d5) bg_passive_tab_pane_g1_cp5

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp5

0x888c,	// (0x000155de) bg_passive_tab_pane_g3_cp5

0x8895,	// (0x000155e7) list_set_graphic_pane_ParamLimits

0x8895,	// (0x000155e7) list_set_graphic_pane

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp4

0x4a69,	// (0x000117bb) list_set_graphic_pane_g1_ParamLimits

0x4a69,	// (0x000117bb) list_set_graphic_pane_g1

0x4a75,	// (0x000117c7) list_set_graphic_pane_g2_ParamLimits

0x4a75,	// (0x000117c7) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x0001c496) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x0001c496) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001c82e) volume_small_pane_cp_g

0x88b3,	// (0x00015605) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88b3,	// (0x00015605) list_double2_large_graphic_pane_g1_cp2

0x4a97,	// (0x000117e9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a97,	// (0x000117e9) list_double2_large_graphic_pane_g2_cp2

0x4aa8,	// (0x000117fa) list_double2_large_graphic_pane_g3_cp2

0x4ab0,	// (0x00011802) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4ab0,	// (0x00011802) list_double2_large_graphic_pane_t1_cp2

0x4ac6,	// (0x00011818) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4ac6,	// (0x00011818) list_double2_large_graphic_pane_t2_cp2

0xa574,	// (0x000172c6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa574,	// (0x000172c6) list_double_large_graphic_pane_g1_cp2

0xa585,	// (0x000172d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa585,	// (0x000172d7) list_double_large_graphic_pane_g2_cp2

0x8a1a,	// (0x0001576c) list_double_large_graphic_pane_g3_cp2

0xa596,	// (0x000172e8) list_double_large_graphic_pane_g4_cp

0xa59e,	// (0x000172f0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa59e,	// (0x000172f0) list_double_large_graphic_pane_t1_cp2

0xa5b5,	// (0x00017307) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa5b5,	// (0x00017307) list_double_large_graphic_pane_t2_cp2

0x8918,	// (0x0001566a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8918,	// (0x0001566a) list_double2_graphic_pane_g1_cp2

0x8926,	// (0x00015678) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8926,	// (0x00015678) list_double2_graphic_pane_g2_cp2

0x8937,	// (0x00015689) list_double2_graphic_pane_g3_cp2

0x8941,	// (0x00015693) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8941,	// (0x00015693) list_double2_graphic_pane_t1_cp2

0x8957,	// (0x000156a9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8957,	// (0x000156a9) list_double2_graphic_pane_t2_cp2

0x3ff3,	// (0x00010d45) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3ff3,	// (0x00010d45) list_single_number_heading_pane_g1_cp2

0x8969,	// (0x000156bb) list_single_number_heading_pane_g2_cp2

0x8971,	// (0x000156c3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8971,	// (0x000156c3) list_single_number_heading_pane_t1_cp2

0x8987,	// (0x000156d9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8987,	// (0x000156d9) list_single_number_heading_pane_t2_cp2

0x8999,	// (0x000156eb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8999,	// (0x000156eb) list_single_number_heading_pane_t3_cp2

0x3ff3,	// (0x00010d45) list_single_heading_pane_g1_cp2_ParamLimits

0x3ff3,	// (0x00010d45) list_single_heading_pane_g1_cp2

0x8969,	// (0x000156bb) list_single_heading_pane_g2_cp2

0x8971,	// (0x000156c3) list_single_heading_pane_t1_cp2_ParamLimits

0x8971,	// (0x000156c3) list_single_heading_pane_t1_cp2

0xa37e,	// (0x000170d0) list_single_heading_pane_t2_cp2_ParamLimits

0xa37e,	// (0x000170d0) list_single_heading_pane_t2_cp2

0xa2c6,	// (0x00017018) list_double_graphic_pane_g1_cp2_ParamLimits

0xa2c6,	// (0x00017018) list_double_graphic_pane_g1_cp2

0xa2d2,	// (0x00017024) list_double_graphic_pane_g2_cp2_ParamLimits

0xa2d2,	// (0x00017024) list_double_graphic_pane_g2_cp2

0xa2e1,	// (0x00017033) list_double_graphic_pane_g3_cp2

0xa2e9,	// (0x0001703b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2e9,	// (0x0001703b) list_double_graphic_pane_t1_cp2

0xa2ff,	// (0x00017051) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2ff,	// (0x00017051) list_double_graphic_pane_t2_cp2

0x8a0e,	// (0x00015760) list_double_number_pane_g1_cp2_ParamLimits

0x8a0e,	// (0x00015760) list_double_number_pane_g1_cp2

0x8a1a,	// (0x0001576c) list_double_number_pane_g2_cp2

0xa28a,	// (0x00016fdc) list_double_number_pane_t1_cp2_ParamLimits

0xa28a,	// (0x00016fdc) list_double_number_pane_t1_cp2

0xa29e,	// (0x00016ff0) list_double_number_pane_t2_cp2_ParamLimits

0xa29e,	// (0x00016ff0) list_double_number_pane_t2_cp2

0xa2b4,	// (0x00017006) list_double_number_pane_t3_cp2_ParamLimits

0xa2b4,	// (0x00017006) list_double_number_pane_t3_cp2

0xa173,	// (0x00016ec5) list_single_graphic_pane_g1_cp2_ParamLimits

0xa173,	// (0x00016ec5) list_single_graphic_pane_g1_cp2

0x8a72,	// (0x000157c4) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a72,	// (0x000157c4) list_single_graphic_pane_g2_cp2

0x8a7e,	// (0x000157d0) list_single_graphic_pane_g3_cp2

0xa149,	// (0x00016e9b) list_single_graphic_pane_t1_cp2_ParamLimits

0xa149,	// (0x00016e9b) list_single_graphic_pane_t1_cp2

0x8a72,	// (0x000157c4) list_single_number_pane_g1_cp2_ParamLimits

0x8a72,	// (0x000157c4) list_single_number_pane_g1_cp2

0x8a7e,	// (0x000157d0) list_single_number_pane_g2_cp2

0xa149,	// (0x00016e9b) list_single_number_pane_t1_cp2_ParamLimits

0xa149,	// (0x00016e9b) list_single_number_pane_t1_cp2

0xa15f,	// (0x00016eb1) list_single_number_pane_t2_cp2_ParamLimits

0xa15f,	// (0x00016eb1) list_single_number_pane_t2_cp2

0x4a97,	// (0x000117e9) list_double2_pane_g1_cp2_ParamLimits

0x4a97,	// (0x000117e9) list_double2_pane_g1_cp2

0x4aa8,	// (0x000117fa) list_double2_pane_g2_cp2

0x89e6,	// (0x00015738) list_double2_pane_t1_cp2_ParamLimits

0x89e6,	// (0x00015738) list_double2_pane_t1_cp2

0x89fc,	// (0x0001574e) list_double2_pane_t2_cp2_ParamLimits

0x89fc,	// (0x0001574e) list_double2_pane_t2_cp2

0x8a0e,	// (0x00015760) list_double_pane_g1_cp2_ParamLimits

0x8a0e,	// (0x00015760) list_double_pane_g1_cp2

0x8a1a,	// (0x0001576c) list_double_pane_g2_cp2

0x8a22,	// (0x00015774) list_double_pane_t1_cp2_ParamLimits

0x8a22,	// (0x00015774) list_double_pane_t1_cp2

0x8a38,	// (0x0001578a) list_double_pane_t2_cp2_ParamLimits

0x8a38,	// (0x0001578a) list_double_pane_t2_cp2

0x8a62,	// (0x000157b4) list_single_pane_cp2_g3

0x8a72,	// (0x000157c4) list_single_pane_g1_cp2_ParamLimits

0x8a72,	// (0x000157c4) list_single_pane_g1_cp2

0x8a7e,	// (0x000157d0) list_single_pane_g2_cp2

0x8a86,	// (0x000157d8) list_single_pane_t1_cp2_ParamLimits

0x8a86,	// (0x000157d8) list_single_pane_t1_cp2

0x8a9e,	// (0x000157f0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a9e,	// (0x000157f0) list_single_large_graphic_pane_g1_cp2

0x8aaa,	// (0x000157fc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8aaa,	// (0x000157fc) list_single_large_graphic_pane_g2_cp2

0x8ab6,	// (0x00015808) list_single_large_graphic_pane_g3_cp2

0x8abe,	// (0x00015810) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8abe,	// (0x00015810) list_single_large_graphic_pane_g4_cp1

0x8ad8,	// (0x0001582a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ad8,	// (0x0001582a) list_single_large_graphic_pane_t1_cp2

0xa115,	// (0x00016e67) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa115,	// (0x00016e67) list_single_graphic_heading_pane_g1_cp2

0xa0e2,	// (0x00016e34) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0e2,	// (0x00016e34) list_single_graphic_heading_pane_g4_cp2

0x8a7e,	// (0x000157d0) list_single_graphic_heading_pane_g5_cp2

0xa121,	// (0x00016e73) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa121,	// (0x00016e73) list_single_graphic_heading_pane_t1_cp2

0xa137,	// (0x00016e89) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa137,	// (0x00016e89) list_single_graphic_heading_pane_t2_cp2

0xa0d6,	// (0x00016e28) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0d6,	// (0x00016e28) list_single_2graphic_pane_g1_cp2

0xa0e2,	// (0x00016e34) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0e2,	// (0x00016e34) list_single_2graphic_pane_g2_cp2

0x8a7e,	// (0x000157d0) list_single_2graphic_pane_g3_cp2

0xa0f3,	// (0x00016e45) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0f3,	// (0x00016e45) list_single_2graphic_pane_g4_cp2

0xa0ff,	// (0x00016e51) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0ff,	// (0x00016e51) list_single_2graphic_pane_t1_cp2

0x3a1a,	// (0x0001076c) list_highlight_pane_g10_cp1

0x9cbe,	// (0x00016a10) list_highlight_pane_g1_cp1

0x9cc6,	// (0x00016a18) list_highlight_pane_g2_cp1

0x9cce,	// (0x00016a20) list_highlight_pane_g3_cp1

0x9cd6,	// (0x00016a28) list_highlight_pane_g4_cp1

0x9cde,	// (0x00016a30) list_highlight_pane_g5_cp1

0x9ce6,	// (0x00016a38) list_highlight_pane_g6_cp1

0x9cee,	// (0x00016a40) list_highlight_pane_g7_cp1

0x9cf6,	// (0x00016a48) list_highlight_pane_g8_cp1

0x9cfe,	// (0x00016a50) list_highlight_pane_g9_cp1

0x9be6,	// (0x00016938) form_field_slider_pane_t3

0x9bf4,	// (0x00016946) form_field_slider_pane_t4

0x9c02,	// (0x00016954) slider_form_pane_ParamLimits

0x9c02,	// (0x00016954) slider_form_pane

0x3b93,	// (0x000108e5) control_abbreviations

0x3b93,	// (0x000108e5) control_conventions

0x3b93,	// (0x000108e5) control_definitions

0x3b93,	// (0x000108e5) format_table_attribute

0xa3c8,	// (0x0001711a) bg_popup_preview_window_pane_g9

0x3b93,	// (0x000108e5) format_table_data2

0x3b93,	// (0x000108e5) format_table_data3

0x3b93,	// (0x000108e5) format_table_data_example

0x0008,

0x3b93,	// (0x000108e5) intro_purpose

0xf8e0,	// (0x0001c632) bg_popup_preview_window_pane_g

0x3b93,	// (0x000108e5) texts_category

0x3b93,	// (0x000108e5) texts_graphics

0x8aee,	// (0x00015840) text_digital

0x8afd,	// (0x0001584f) text_primary

0x8b0c,	// (0x0001585e) text_primary_small

0x8b1b,	// (0x0001586d) text_secondary

0x8b2a,	// (0x0001587c) text_title

0xabd6,	// (0x00017928) bg_passive_tab_pane_g1_cp3_srt

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp3_srt

0xabdf,	// (0x00017931) bg_passive_tab_pane_g3_cp3_srt

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp3_srt_ParamLimits

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp3_srt

0xabe8,	// (0x0001793a) tabs_4_active_pane_srt_g1

0xabf0,	// (0x00017942) tabs_4_active_pane_srt_t1_ParamLimits

0xabf0,	// (0x00017942) tabs_4_active_pane_srt_t1

0xabd6,	// (0x00017928) bg_active_tab_pane_g1_cp3_copy1

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp3_copy1

0xabdf,	// (0x00017931) bg_active_tab_pane_g3_cp3_copy1

0x3c0f,	// (0x00010961) tabs_2_long_active_pane_srt_ParamLimits

0x3c0f,	// (0x00010961) tabs_2_long_active_pane_srt

0x3c0f,	// (0x00010961) tabs_2_long_passive_pane_srt_ParamLimits

0x3c0f,	// (0x00010961) tabs_2_long_passive_pane_srt

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp4_srt

0xa7fb,	// (0x0001754d) bg_passive_tab_pane_g1_cp4_srt

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp4_srt

0xa804,	// (0x00017556) bg_passive_tab_pane_g3_cp4_srt

0x4344,	// (0x00011096) bg_active_tab_pane_cp4_srt_ParamLimits

0x4344,	// (0x00011096) bg_active_tab_pane_cp4_srt

0xa80d,	// (0x0001755f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa80d,	// (0x0001755f) tabs_2_long_active_pane_srt_t1

0xa7fb,	// (0x0001754d) bg_active_tab_pane_g1_cp4_srt

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp4_srt

0xa804,	// (0x00017556) bg_active_tab_pane_g3_cp4_srt

0x3c01,	// (0x00010953) tabs_3_long_active_pane_srt_ParamLimits

0x3c01,	// (0x00010953) tabs_3_long_active_pane_srt

0x3c01,	// (0x00010953) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3c01,	// (0x00010953) tabs_3_long_passive_pane_cp_srt

0x3c01,	// (0x00010953) tabs_3_long_passive_pane_srt_ParamLimits

0x3c01,	// (0x00010953) tabs_3_long_passive_pane_srt

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp5_srt

0x8883,	// (0x000155d5) bg_passive_tab_pane_g1_cp5_srt

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp5_srt

0x888c,	// (0x000155de) bg_passive_tab_pane_g3_cp5_srt

0x4344,	// (0x00011096) bg_active_tab_pane_cp5_srt_ParamLimits

0x4344,	// (0x00011096) bg_active_tab_pane_cp5_srt

0xa7e9,	// (0x0001753b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7e9,	// (0x0001753b) tabs_3_long_active_pane_srt_t1

0x8883,	// (0x000155d5) bg_active_tab_pane_g1_cp5_srt

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp5_srt

0x888c,	// (0x000155de) bg_active_tab_pane_g3_cp5_srt

0xa7db,	// (0x0001752d) navi_text_pane_srt_t1

0xa7d3,	// (0x00017525) navi_icon_pane_srt_g1

0x8cfb,	// (0x00015a4d) midp_editing_number_pane_srt

0x8b39,	// (0x0001588b) midp_ticker_pane_srt

0x8d03,	// (0x00015a55) midp_ticker_pane_srt_g1

0x8d0b,	// (0x00015a5d) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x0001c4b5) midp_ticker_pane_srt_g

0x8d13,	// (0x00015a65) midp_ticker_pane_srt_t1

0xa7c4,	// (0x00017516) midp_editing_number_pane_t1_copy1

0x8b41,	// (0x00015893) listscroll_midp_pane

0x8b41,	// (0x00015893) midp_form_pane

0x8bb3,	// (0x00015905) midp_info_popup_window_ParamLimits

0x8bb3,	// (0x00015905) midp_info_popup_window

0x415c,	// (0x00010eae) bg_popup_sub_pane_cp50_ParamLimits

0x415c,	// (0x00010eae) bg_popup_sub_pane_cp50

0x98fa,	// (0x0001664c) listscroll_midp_info_pane_ParamLimits

0x98fa,	// (0x0001664c) listscroll_midp_info_pane

0x98da,	// (0x0001662c) listscroll_form_midp_pane_ParamLimits

0x98da,	// (0x0001662c) listscroll_form_midp_pane

0x98e6,	// (0x00016638) scroll_bar_cp050

0x98ba,	// (0x0001660c) list_midp_pane

0xb928,	// (0x0001867a) signal_pane_g2_cp

0x97f4,	// (0x00016546) listscroll_midp_info_pane_t1_ParamLimits

0x97f4,	// (0x00016546) listscroll_midp_info_pane_t1

0x980c,	// (0x0001655e) listscroll_midp_info_pane_t2_ParamLimits

0x980c,	// (0x0001655e) listscroll_midp_info_pane_t2

0x984a,	// (0x0001659c) listscroll_midp_info_pane_t3_ParamLimits

0x984a,	// (0x0001659c) listscroll_midp_info_pane_t3

0x9884,	// (0x000165d6) listscroll_midp_info_pane_t4_ParamLimits

0x9884,	// (0x000165d6) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0001c56d) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0001c56d) listscroll_midp_info_pane_t

0x41d2,	// (0x00010f24) scroll_pane_cp21

0x9794,	// (0x000164e6) form_midp_field_choice_group_pane

0x979d,	// (0x000164ef) form_midp_field_text_pane

0x97da,	// (0x0001652c) form_midp_field_time_pane

0x97e2,	// (0x00016534) form_midp_gauge_slider_pane

0x97eb,	// (0x0001653d) form_midp_gauge_wait_pane

0x3b93,	// (0x000108e5) form_midp_image_pane

0x9762,	// (0x000164b4) list_single_midp_pane_ParamLimits

0x9762,	// (0x000164b4) list_single_midp_pane

0x9717,	// (0x00016469) form_midp_field_text_pane_t1

0x94d2,	// (0x00016224) input_focus_pane_cp050

0x9751,	// (0x000164a3) list_midp_form_text_pane

0x96e6,	// (0x00016438) form_midp_field_choice_group_pane_t1

0x96f4,	// (0x00016446) input_focus_pane_cp051

0x9708,	// (0x0001645a) list_midp_choice_pane

0x3b93,	// (0x000108e5) status_idle_pane

0x96ca,	// (0x0001641c) form_midp_field_time_pane_t1

0x3a1a,	// (0x0001076c) wait_anim_pane_g2_copy1

0x96d8,	// (0x0001642a) form_midp_field_time_pane_t2

0x0001,

0x8c63,	// (0x000159b5) aid_navinavi_width_2_pane

0xf816,	// (0x0001c568) form_midp_field_time_pane_t

0x3b93,	// (0x000108e5) input_focus_pane_cp052

0x3b93,	// (0x000108e5) bg_input_focus_pane_cp040

0x968a,	// (0x000163dc) form_midp_gauge_slider_pane_t1

0x9698,	// (0x000163ea) form_midp_gauge_slider_pane_t2

0x96a6,	// (0x000163f8) form_midp_gauge_slider_pane_t3

0x96b4,	// (0x00016406) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0001c55f) form_midp_gauge_slider_pane_t

0x96c2,	// (0x00016414) form_midp_slider_pane

0x3c0f,	// (0x00010961) bg_input_focus_pane_cp041_ParamLimits

0x3c0f,	// (0x00010961) bg_input_focus_pane_cp041

0x9657,	// (0x000163a9) form_midp_gauge_wait_pane_t1_ParamLimits

0x9657,	// (0x000163a9) form_midp_gauge_wait_pane_t1

0x9669,	// (0x000163bb) form_midp_gauge_wait_pane_t2_ParamLimits

0x9669,	// (0x000163bb) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0001c55a) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0001c55a) form_midp_gauge_wait_pane_t

0x967b,	// (0x000163cd) form_midp_wait_pane_ParamLimits

0x967b,	// (0x000163cd) form_midp_wait_pane

0x9621,	// (0x00016373) form_midp_image_pane_g1

0x962a,	// (0x0001637c) form_midp_image_pane_t1

0x9639,	// (0x0001638b) form_midp_image_pane_t2

0x9648,	// (0x0001639a) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0001c553) form_midp_image_pane_t

0x9609,	// (0x0001635b) list_single_midp_pane_g1

0x9612,	// (0x00016364) list_single_midp_pane_t1

0x95e0,	// (0x00016332) list_midp_form_item_pane_ParamLimits

0x95e0,	// (0x00016332) list_midp_form_item_pane

0x8c0b,	// (0x0001595d) list_midp_form_item_pane_t1

0x8c1a,	// (0x0001596c) midp_ticker_pane_g1

0x8c26,	// (0x00015978) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x0001c49b) midp_ticker_pane_g

0x8c32,	// (0x00015984) midp_ticker_pane_t1

0xaa44,	// (0x00017796) midp_editing_number_pane_t1

0xaa22,	// (0x00017774) midp_editing_number_pane

0xaa31,	// (0x00017783) midp_ticker_pane

0xa7a2,	// (0x000174f4) ai_message_heading_pane

0x3b93,	// (0x000108e5) bg_popup_window_pane_cp14

0xa7aa,	// (0x000174fc) listscroll_ai_message_pane

0xa72c,	// (0x0001747e) ai_message_heading_pane_g1_ParamLimits

0xa72c,	// (0x0001747e) ai_message_heading_pane_g1

0xa738,	// (0x0001748a) ai_message_heading_pane_g2_ParamLimits

0xa738,	// (0x0001748a) ai_message_heading_pane_g2

0xa744,	// (0x00017496) ai_message_heading_pane_g3_ParamLimits

0xa744,	// (0x00017496) ai_message_heading_pane_g3

0xa750,	// (0x000174a2) ai_message_heading_pane_g4_ParamLimits

0xa750,	// (0x000174a2) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0001c694) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0001c694) ai_message_heading_pane_g

0xa75c,	// (0x000174ae) ai_message_heading_pane_t1_ParamLimits

0xa75c,	// (0x000174ae) ai_message_heading_pane_t1

0xa776,	// (0x000174c8) ai_message_heading_pane_t2_ParamLimits

0xa776,	// (0x000174c8) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0001c69d) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0001c69d) ai_message_heading_pane_t

0xa788,	// (0x000174da) bg_popup_heading_pane_cp1_ParamLimits

0xa788,	// (0x000174da) bg_popup_heading_pane_cp1

0xa71a,	// (0x0001746c) list_ai_message_pane_ParamLimits

0xa71a,	// (0x0001746c) list_ai_message_pane

0x41d2,	// (0x00010f24) scroll_pane_cp10

0xa6b6,	// (0x00017408) list_ai_message_pane_g1

0xa6be,	// (0x00017410) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0001c671) list_ai_message_pane_g

0xa6c6,	// (0x00017418) list_ai_message_pane_t1_ParamLimits

0xa6c6,	// (0x00017418) list_ai_message_pane_t1

0xa6db,	// (0x0001742d) list_ai_message_pane_t2_ParamLimits

0xa6db,	// (0x0001742d) list_ai_message_pane_t2

0xa6f0,	// (0x00017442) list_ai_message_pane_t3_ParamLimits

0xa6f0,	// (0x00017442) list_ai_message_pane_t3

0xa705,	// (0x00017457) list_ai_message_pane_t4_ParamLimits

0xa705,	// (0x00017457) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0001c676) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0001c676) list_ai_message_pane_t

0xa6a1,	// (0x000173f3) cell_ai_soft_ind_pane_ParamLimits

0xa6a1,	// (0x000173f3) cell_ai_soft_ind_pane

0x8c44,	// (0x00015996) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c44,	// (0x00015996) cell_ai_soft_ind_pane_g1

0x3b93,	// (0x000108e5) grid_highlight_cp1

0x8c51,	// (0x000159a3) text_secondary_cp56_ParamLimits

0x8c51,	// (0x000159a3) text_secondary_cp56

0xa676,	// (0x000173c8) example_general_pane_ParamLimits

0xa676,	// (0x000173c8) example_general_pane

0xa682,	// (0x000173d4) example_parent_pane_g1_ParamLimits

0xa682,	// (0x000173d4) example_parent_pane_g1

0xa68e,	// (0x000173e0) example_parent_pane_t1_ParamLimits

0xa68e,	// (0x000173e0) example_parent_pane_t1

0x628e,	// (0x00012fe0) popup_preview_text_window_ParamLimits

0x628e,	// (0x00012fe0) popup_preview_text_window

0x8a6a,	// (0x000157bc) list_single_pane_cp2_g4

0x3dfb,	// (0x00010b4d) bg_popup_preview_window_pane_ParamLimits

0x3dfb,	// (0x00010b4d) bg_popup_preview_window_pane

0xa3d0,	// (0x00017122) popup_preview_text_window_t1_ParamLimits

0xa3d0,	// (0x00017122) popup_preview_text_window_t1

0xa3ee,	// (0x00017140) popup_preview_text_window_t2_ParamLimits

0xa3ee,	// (0x00017140) popup_preview_text_window_t2

0xa437,	// (0x00017189) popup_preview_text_window_t3_ParamLimits

0xa437,	// (0x00017189) popup_preview_text_window_t3

0xa47c,	// (0x000171ce) popup_preview_text_window_t4_ParamLimits

0xa47c,	// (0x000171ce) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0001c645) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0001c645) popup_preview_text_window_t

0xa4fa,	// (0x0001724c) scroll_pane_cp11

0x93b2,	// (0x00016104) bg_popup_preview_window_pane_g1

0xa390,	// (0x000170e2) bg_popup_preview_window_pane_g2

0xa398,	// (0x000170ea) bg_popup_preview_window_pane_g3

0xa3a0,	// (0x000170f2) bg_popup_preview_window_pane_g4

0xa3a8,	// (0x000170fa) bg_popup_preview_window_pane_g5

0xa3b0,	// (0x00017102) bg_popup_preview_window_pane_g6

0xa3b8,	// (0x0001710a) bg_popup_preview_window_pane_g7

0xa3c0,	// (0x00017112) bg_popup_preview_window_pane_g8

0x548d,	// (0x000121df) aid_popup_width_pane

0x626c,	// (0x00012fbe) popup_midp_note_alarm_window_ParamLimits

0x626c,	// (0x00012fbe) popup_midp_note_alarm_window

0x4045,	// (0x00010d97) data_form_pane_ParamLimits

0x83d0,	// (0x00015122) form_field_data_pane_g1

0x83da,	// (0x0001512c) form_field_data_pane_t1_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_ParamLimits

0x405f,	// (0x00010db1) data_form_wide_pane_ParamLimits

0x4070,	// (0x00010dc2) form_field_data_wide_pane_g1

0x4090,	// (0x00010de2) form_field_data_wide_pane_t1_ParamLimits

0x3ecf,	// (0x00010c21) input_focus_pane_cp6_ParamLimits

0x8546,	// (0x00015298) input_popup_find_pane_g1_ParamLimits

0x8546,	// (0x00015298) input_popup_find_pane_g1

0x59fb,	// (0x0001274d) aid_navi_side_left_pane

0x5a10,	// (0x00012762) aid_navi_side_right_pane

0x9db9,	// (0x00016b0b) bg_popup_window_pane_cp30_ParamLimits

0x9db9,	// (0x00016b0b) bg_popup_window_pane_cp30

0x9e33,	// (0x00016b85) popup_midp_note_alarm_window_g1_ParamLimits

0x9e33,	// (0x00016b85) popup_midp_note_alarm_window_g1

0x9e63,	// (0x00016bb5) popup_midp_note_alarm_window_t1_ParamLimits

0x9e63,	// (0x00016bb5) popup_midp_note_alarm_window_t1

0x9f04,	// (0x00016c56) popup_midp_note_alarm_window_t2_ParamLimits

0x9f04,	// (0x00016c56) popup_midp_note_alarm_window_t2

0x9fb2,	// (0x00016d04) popup_midp_note_alarm_window_t3_ParamLimits

0x9fb2,	// (0x00016d04) popup_midp_note_alarm_window_t3

0x9fda,	// (0x00016d2c) popup_midp_note_alarm_window_t4_ParamLimits

0x9fda,	// (0x00016d2c) popup_midp_note_alarm_window_t4

0x9ffa,	// (0x00016d4c) popup_midp_note_alarm_window_t5_ParamLimits

0x9ffa,	// (0x00016d4c) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0001c5e2) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0001c5e2) popup_midp_note_alarm_window_t

0xa0a6,	// (0x00016df8) wait_bar_pane_cp1_ParamLimits

0xa0a6,	// (0x00016df8) wait_bar_pane_cp1

0x3b93,	// (0x000108e5) wait_anim_pane_copy1

0x3b93,	// (0x000108e5) wait_border_pane_copy1

0x9aaf,	// (0x00016801) wait_border_pane_g1_copy1

0x40aa,	// (0x00010dfc) form_field_popup_pane_g1

0x83f2,	// (0x00015144) form_field_popup_pane_t1_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_cp7_ParamLimits

0x40b2,	// (0x00010e04) list_form_pane_ParamLimits

0x40be,	// (0x00010e10) form_field_popup_wide_pane_g1

0x40c6,	// (0x00010e18) form_field_popup_wide_pane_t1_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_cp8_ParamLimits

0x40db,	// (0x00010e2d) list_form_wide_pane_ParamLimits

0xac6a,	// (0x000179bc) aid_size_cell_graphic_pane

0x8466,	// (0x000151b8) data_form_pane_t1_ParamLimits

0xa9ef,	// (0x00017741) data_form_wide_pane_t1_ParamLimits

0x8f5a,	// (0x00015cac) bg_status_flat_pane

0x7a47,	// (0x00014799) title_pane_t1_ParamLimits

0x3bc9,	// (0x0001091b) title_pane_t2_ParamLimits

0x3bef,	// (0x00010941) title_pane_t3_ParamLimits

0xf557,	// (0x0001c2a9) title_pane_t_ParamLimits

0x463a,	// (0x0001138c) level_1_signal_ParamLimits

0x4647,	// (0x00011399) level_2_signal_ParamLimits

0x4654,	// (0x000113a6) level_3_signal_ParamLimits

0x4661,	// (0x000113b3) level_4_signal_ParamLimits

0x466e,	// (0x000113c0) level_5_signal_ParamLimits

0x467b,	// (0x000113cd) level_6_signal_ParamLimits

0x4688,	// (0x000113da) level_7_signal_ParamLimits

0x463a,	// (0x0001138c) level_1_battery_ParamLimits

0x4647,	// (0x00011399) level_2_battery_ParamLimits

0x4654,	// (0x000113a6) level_3_battery_ParamLimits

0x4661,	// (0x000113b3) level_4_battery_ParamLimits

0x466e,	// (0x000113c0) level_5_battery_ParamLimits

0x467b,	// (0x000113cd) level_6_battery_ParamLimits

0x4688,	// (0x000113da) level_7_battery_ParamLimits

0x9cbe,	// (0x00016a10) bg_status_flat_pane_g1

0x9cc6,	// (0x00016a18) bg_status_flat_pane_g2

0x9cce,	// (0x00016a20) bg_status_flat_pane_g3

0x9cd6,	// (0x00016a28) bg_status_flat_pane_g4

0x9cde,	// (0x00016a30) bg_status_flat_pane_g5

0x9ce6,	// (0x00016a38) bg_status_flat_pane_g6

0x9cee,	// (0x00016a40) bg_status_flat_pane_g7

0x7ab7,	// (0x00014809) tabs_3_active_pane_t1_ParamLimits

0x7ab7,	// (0x00014809) tabs_3_passive_pane_t1_ParamLimits

0x7ad1,	// (0x00014823) tabs_4_active_pane_t1_ParamLimits

0x7ad1,	// (0x00014823) tabs_4_1_passive_pane_t1_ParamLimits

0x857d,	// (0x000152cf) tabs_2_active_pane_t1_ParamLimits

0x857d,	// (0x000152cf) tabs_2_passive_pane_t1_ParamLimits

0x4344,	// (0x00011096) bg_active_tab_pane_cp4_ParamLimits

0x858f,	// (0x000152e1) tabs_2_long_active_pane_t1_ParamLimits

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp4_ParamLimits

0x65b1,	// (0x00013303) list_single_midp_graphic_pane_t1_ParamLimits

0x4344,	// (0x00011096) bg_active_tab_pane_cp5_ParamLimits

0x85ae,	// (0x00015300) tabs_3_long_active_pane_t1_ParamLimits

0x85a2,	// (0x000152f4) bg_passive_tab_pane_cp5_ParamLimits

0x65b1,	// (0x00013303) list_single_midp_graphic_pane_t1

0x8f5a,	// (0x00015cac) bg_status_flat_pane_ParamLimits

0x9023,	// (0x00015d75) indicator_pane_cp2_ParamLimits

0x9023,	// (0x00015d75) indicator_pane_cp2

0x914e,	// (0x00015ea0) navi_pane_srt_ParamLimits

0x914e,	// (0x00015ea0) navi_pane_srt

0x9172,	// (0x00015ec4) popup_clock_digital_analogue_window_cp1

0x3c6d,	// (0x000109bf) indicator_pane_t1

0x8b39,	// (0x0001588b) copy_highlight_pane

0x8b39,	// (0x0001588b) cursor_graphics_pane

0x8b39,	// (0x0001588b) graphic_within_text_pane

0x8b39,	// (0x0001588b) link_highlight_pane

0xa4bd,	// (0x0001720f) popup_preview_text_window_t5_ParamLimits

0xa4bd,	// (0x0001720f) popup_preview_text_window_t5

0x8c6b,	// (0x000159bd) cursor_digital_pane

0x8c6b,	// (0x000159bd) cursor_primary_pane

0x8c7c,	// (0x000159ce) cursor_primary_small_pane

0x8c84,	// (0x000159d6) cursor_secondary_pane

0x8c8c,	// (0x000159de) cursor_title_pane

0x8c6b,	// (0x000159bd) link_highlight_digital_pane

0x8c73,	// (0x000159c5) link_highlight_primary_pane

0x8c7c,	// (0x000159ce) link_highlight_primary_small_pane

0x8c84,	// (0x000159d6) link_highlight_secondary_pane

0x8c8c,	// (0x000159de) link_highlight_title_pane

0x8c6b,	// (0x000159bd) copy_highlight_digital_pane

0x8c6b,	// (0x000159bd) copy_highlight_primary_pane

0x8c7c,	// (0x000159ce) copy_highlight_primary_small_pane

0x8c84,	// (0x000159d6) copy_highlight_secondary_pane

0x8c8c,	// (0x000159de) copy_highlight_title_pane

0x8c84,	// (0x000159d6) graphic_text_digital_pane

0x9d5c,	// (0x00016aae) graphic_text_primary_pane

0x9d65,	// (0x00016ab7) graphic_text_primary_small_pane

0x8c7c,	// (0x000159ce) graphic_text_secondary_pane

0x8c6b,	// (0x000159bd) graphic_text_title_pane

0x8c94,	// (0x000159e6) cursor_primary_pane_g1

0x9d4e,	// (0x00016aa0) cursor_text_primary_t1

0x9d36,	// (0x00016a88) cursor_primary_small_pane_g1

0x9d40,	// (0x00016a92) cursor_text_primary_small_t1

0x9d1e,	// (0x00016a70) cursor_primary_small_pane_g1_copy1

0x9d28,	// (0x00016a7a) cursor_text_primary_small_t1_copy1

0x9d06,	// (0x00016a58) cursor_text_title_t1

0x9d14,	// (0x00016a66) cursor_title_pane_g1

0x8c94,	// (0x000159e6) cursor_digital_pane_g1

0x8c9e,	// (0x000159f0) cursor_text_digital_t1

0x8cac,	// (0x000159fe) link_highlight_primary_pane_g1

0x9caf,	// (0x00016a01) link_highlight_primary_pane_t1

0x8cac,	// (0x000159fe) link_highlight_primary_small_pane_g1

0x8cb4,	// (0x00015a06) link_highlight_primary_small_pane_t1

0x8cac,	// (0x000159fe) link_highlight_secondary_pane_g1

0x8cc3,	// (0x00015a15) link_highlight_secondary_pane_t1

0x9c14,	// (0x00016966) link_highlight_title_pane_g1

0x9c2b,	// (0x0001697d) link_highlight_title_pane_t1

0x9c14,	// (0x00016966) link_highlight_digital_pane_g1

0x9c1c,	// (0x0001696e) link_highlight_digital_pane_t1

0x9ace,	// (0x00016820) copy_highlight_primary_pane_g1

0x9af4,	// (0x00016846) copy_highlight_primary_pane_t1

0x9ace,	// (0x00016820) copy_highlight_primary_small_pane_g1

0x9ae5,	// (0x00016837) copy_highlight_primary_small_pane_t1

0x8cd2,	// (0x00015a24) copy_highlight_secondary_pane_g1

0x8cda,	// (0x00015a2c) copy_highlight_secondary_pane_t1

0x9ace,	// (0x00016820) copy_highlight_title_pane_g1

0x9ad6,	// (0x00016828) copy_highlight_title_pane_t1

0x9ace,	// (0x00016820) copy_highlight_digital_pane_g1

0xae38,	// (0x00017b8a) copy_highlight_digital_pane_t1

0xad8c,	// (0x00017ade) graphic_text_primary_pane_g1

0xae1c,	// (0x00017b6e) graphic_text_primary_pane_t1

0xae2a,	// (0x00017b7c) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0001c711) graphic_text_primary_pane_t

0xadf8,	// (0x00017b4a) graphic_text_primary_small_pane_g1

0xae00,	// (0x00017b52) graphic_text_primary_small_pane_t1

0xae0e,	// (0x00017b60) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0001c70c) graphic_text_primary_small_pane_t

0xadd4,	// (0x00017b26) graphic_text_secondary_pane_g1

0xaddc,	// (0x00017b2e) graphic_text_secondary_pane_t1

0xadea,	// (0x00017b3c) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0001c707) graphic_text_secondary_pane_t

0xadb0,	// (0x00017b02) graphic_text_title_pane_g1

0xadb8,	// (0x00017b0a) graphic_text_title_pane_t1

0xadc6,	// (0x00017b18) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0001c702) graphic_text_title_pane_t

0xad8c,	// (0x00017ade) graphic_text_digital_pane_g1

0xad94,	// (0x00017ae6) graphic_text_digital_pane_t1

0xada2,	// (0x00017af4) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0001c6fd) graphic_text_digital_pane_t

0x3c0f,	// (0x00010961) navi_icon_pane_srt_ParamLimits

0x3c0f,	// (0x00010961) navi_icon_pane_srt

0x3b93,	// (0x000108e5) navi_midp_pane_srt

0x3b93,	// (0x000108e5) navi_navi_pane_srt

0x3c0f,	// (0x00010961) navi_text_pane_srt_ParamLimits

0x3c0f,	// (0x00010961) navi_text_pane_srt

0xad57,	// (0x00017aa9) navi_navi_icon_text_pane_srt

0xad5f,	// (0x00017ab1) navi_navi_pane_srt_g1_ParamLimits

0xad5f,	// (0x00017ab1) navi_navi_pane_srt_g1

0xad71,	// (0x00017ac3) navi_navi_pane_srt_g2_ParamLimits

0xad71,	// (0x00017ac3) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0001c6f8) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0001c6f8) navi_navi_pane_srt_g

0xad83,	// (0x00017ad5) navi_navi_tabs_pane_srt

0xad57,	// (0x00017aa9) navi_navi_text_pane_srt

0xad57,	// (0x00017aa9) navi_navi_volume_pane_srt

0xad48,	// (0x00017a9a) navi_navi_text_pane_srt_t1

0x6931,	// (0x00013683) navi_navi_volume_pane_srt_g1

0x6939,	// (0x0001368b) volume_small_pane_srt_ParamLimits

0x6939,	// (0x0001368b) volume_small_pane_srt

0x5cd2,	// (0x00012a24) volume_small_pane_srt_g1_ParamLimits

0x5cd2,	// (0x00012a24) volume_small_pane_srt_g1

0x5ce2,	// (0x00012a34) volume_small_pane_srt_g2_ParamLimits

0x5ce2,	// (0x00012a34) volume_small_pane_srt_g2

0x5cf3,	// (0x00012a45) volume_small_pane_srt_g3_ParamLimits

0x5cf3,	// (0x00012a45) volume_small_pane_srt_g3

0x5d04,	// (0x00012a56) volume_small_pane_srt_g4_ParamLimits

0x5d04,	// (0x00012a56) volume_small_pane_srt_g4

0x5d15,	// (0x00012a67) volume_small_pane_srt_g5_ParamLimits

0x5d15,	// (0x00012a67) volume_small_pane_srt_g5

0x5d26,	// (0x00012a78) volume_small_pane_srt_g6_ParamLimits

0x5d26,	// (0x00012a78) volume_small_pane_srt_g6

0x5d37,	// (0x00012a89) volume_small_pane_srt_g7_ParamLimits

0x5d37,	// (0x00012a89) volume_small_pane_srt_g7

0x5d48,	// (0x00012a9a) volume_small_pane_srt_g8_ParamLimits

0x5d48,	// (0x00012a9a) volume_small_pane_srt_g8

0x5d59,	// (0x00012aab) volume_small_pane_srt_g9_ParamLimits

0x5d59,	// (0x00012aab) volume_small_pane_srt_g9

0x5d6a,	// (0x00012abc) volume_small_pane_srt_g10_ParamLimits

0x5d6a,	// (0x00012abc) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x0001c4a0) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x0001c4a0) volume_small_pane_srt_g

0x7c8d,	// (0x000149df) query_popup_data_pane_cp2

0xad2e,	// (0x00017a80) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad2e,	// (0x00017a80) navi_navi_icon_text_pane_srt_t1

0x9d5c,	// (0x00016aae) navi_tabs_2_long_pane_srt

0x9d5c,	// (0x00016aae) navi_tabs_2_pane_srt

0x9d5c,	// (0x00016aae) navi_tabs_3_long_pane_srt

0x9d5c,	// (0x00016aae) navi_tabs_3_pane_srt

0x9d5c,	// (0x00016aae) navi_tabs_4_pane_srt

0x6911,	// (0x00013663) tabs_2_active_pane_srt_ParamLimits

0x6911,	// (0x00013663) tabs_2_active_pane_srt

0x6921,	// (0x00013673) tabs_2_passive_pane_srt_ParamLimits

0x6921,	// (0x00013673) tabs_2_passive_pane_srt

0x8e61,	// (0x00015bb3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e61,	// (0x00015bb3) bg_passive_tab_pane_cp1_srt

0xacfa,	// (0x00017a4c) bg_passive_tab_pane_g1_cp1_srt

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp1_srt

0xad03,	// (0x00017a55) bg_passive_tab_pane_g3_cp1_srt

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp1_srt_ParamLimits

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp1_srt

0xad0c,	// (0x00017a5e) tabs_2_active_pane_srt_g1

0xad14,	// (0x00017a66) tabs_2_active_pane_srt_t1_ParamLimits

0xad14,	// (0x00017a66) tabs_2_active_pane_srt_t1

0xacfa,	// (0x00017a4c) bg_active_tab_pane_g1_cp1_srt

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp1_srt

0xad03,	// (0x00017a55) bg_active_tab_pane_g3_cp1_srt

0x68de,	// (0x00013630) tabs_3_active_pane_srt_ParamLimits

0x68de,	// (0x00013630) tabs_3_active_pane_srt

0x68ef,	// (0x00013641) tabs_3_passive_pane_cp_srt_ParamLimits

0x68ef,	// (0x00013641) tabs_3_passive_pane_cp_srt

0x6900,	// (0x00013652) tabs_3_passive_pane_srt_ParamLimits

0x6900,	// (0x00013652) tabs_3_passive_pane_srt

0x8e61,	// (0x00015bb3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e61,	// (0x00015bb3) bg_passive_tab_pane_cp2_srt

0x8ce9,	// (0x00015a3b) bg_passive_tab_pane_g1_cp2_srt

0x8837,	// (0x00015589) bg_passive_tab_pane_g2_cp2_srt

0x8cf2,	// (0x00015a44) bg_passive_tab_pane_g3_cp2_srt

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp2_srt_ParamLimits

0x3c0f,	// (0x00010961) bg_active_tab_pane_cp2_srt

0xace0,	// (0x00017a32) tabs_3_active_pane_srt_g1

0xace8,	// (0x00017a3a) tabs_3_active_pane_srt_t1_ParamLimits

0xace8,	// (0x00017a3a) tabs_3_active_pane_srt_t1

0x8ce9,	// (0x00015a3b) bg_active_tab_pane_g1_cp2_srt

0x8837,	// (0x00015589) bg_active_tab_pane_g2_cp2_srt

0x8cf2,	// (0x00015a44) bg_active_tab_pane_g3_cp2_srt

0x6896,	// (0x000135e8) tabs_4_active_pane_srt_ParamLimits

0x6896,	// (0x000135e8) tabs_4_active_pane_srt

0x68a8,	// (0x000135fa) tabs_4_passive_pane_cp2_srt_ParamLimits

0x68a8,	// (0x000135fa) tabs_4_passive_pane_cp2_srt

0x5ed9,	// (0x00012c2b) aid_size_cell_toolbar

0x85a2,	// (0x000152f4) main_idle_act_pane_ParamLimits

0x609e,	// (0x00012df0) popup_large_graphic_colour_window_ParamLimits

0x6409,	// (0x0001315b) popup_toolbar_window_ParamLimits

0x6409,	// (0x0001315b) popup_toolbar_window

0xaa6f,	// (0x000177c1) list_single_graphic_2heading_pane_ParamLimits

0xaa6f,	// (0x000177c1) list_single_graphic_2heading_pane

0x4503,	// (0x00011255) aid_size_cell_apps_grid_lsc_pane

0x4515,	// (0x00011267) aid_size_cell_apps_grid_prt_pane

0x8e61,	// (0x00015bb3) bg_wml_button_pane_cp1_ParamLimits

0x8e61,	// (0x00015bb3) bg_wml_button_pane_cp1

0x9717,	// (0x00016469) form_midp_field_text_pane_t1_ParamLimits

0x94d2,	// (0x00016224) input_focus_pane_cp050_ParamLimits

0x9751,	// (0x000164a3) list_midp_form_text_pane_ParamLimits

0x96f4,	// (0x00016446) input_focus_pane_cp051_ParamLimits

0x9708,	// (0x0001645a) list_midp_choice_pane_ParamLimits

0x9588,	// (0x000162da) list_single_2graphic_pane_cp3_ParamLimits

0x9588,	// (0x000162da) list_single_2graphic_pane_cp3

0x95ad,	// (0x000162ff) list_single_midp_graphic_pane_ParamLimits

0x95ad,	// (0x000162ff) list_single_midp_graphic_pane

0x64b6,	// (0x00013208) list_single_graphic_2heading_pane_g1_ParamLimits

0x64b6,	// (0x00013208) list_single_graphic_2heading_pane_g1

0x64c2,	// (0x00013214) list_single_graphic_2heading_pane_g4_ParamLimits

0x64c2,	// (0x00013214) list_single_graphic_2heading_pane_g4

0x64ce,	// (0x00013220) list_single_graphic_2heading_pane_g5_ParamLimits

0x64ce,	// (0x00013220) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x0001c4f3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x0001c4f3) list_single_graphic_2heading_pane_g

0x64da,	// (0x0001322c) list_single_graphic_2heading_pane_t1_ParamLimits

0x64da,	// (0x0001322c) list_single_graphic_2heading_pane_t1

0x64ee,	// (0x00013240) list_single_graphic_2heading_pane_t2_ParamLimits

0x64ee,	// (0x00013240) list_single_graphic_2heading_pane_t2

0x6508,	// (0x0001325a) list_single_graphic_2heading_pane_t3_ParamLimits

0x6508,	// (0x0001325a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0001c4fa) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0001c4fa) list_single_graphic_2heading_pane_t

0x92ce,	// (0x00016020) bg_popup_sub_pane_cp2

0x92f8,	// (0x0001604a) grid_toobar_pane

0x6520,	// (0x00013272) cell_toolbar_pane_ParamLimits

0x6520,	// (0x00013272) cell_toolbar_pane

0x9356,	// (0x000160a8) cell_toolbar_pane_g1_ParamLimits

0x9356,	// (0x000160a8) cell_toolbar_pane_g1

0x936a,	// (0x000160bc) cell_toolbar_pane_g2_ParamLimits

0x936a,	// (0x000160bc) cell_toolbar_pane_g2

0x0001,

0xf7b6,	// (0x0001c508) cell_toolbar_pane_g_ParamLimits

0xf7b6,	// (0x0001c508) cell_toolbar_pane_g

0x938c,	// (0x000160de) grid_highlight_pane_cp2_ParamLimits

0x938c,	// (0x000160de) grid_highlight_pane_cp2

0x93a6,	// (0x000160f8) toolbar_button_pane

0x93b2,	// (0x00016104) toolbar_button_pane_g1

0x93ba,	// (0x0001610c) toolbar_button_pane_g2

0x93c2,	// (0x00016114) toolbar_button_pane_g3

0x93ca,	// (0x0001611c) toolbar_button_pane_g4

0x93d2,	// (0x00016124) toolbar_button_pane_g5

0x93da,	// (0x0001612c) toolbar_button_pane_g6

0x93e2,	// (0x00016134) toolbar_button_pane_g7

0x93ea,	// (0x0001613c) toolbar_button_pane_g8

0x93f2,	// (0x00016144) toolbar_button_pane_g9

0x0009,

0xf7bb,	// (0x0001c50d) toolbar_button_pane_g

0x6558,	// (0x000132aa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6558,	// (0x000132aa) list_single_2graphic_pane_g1_cp3

0x6564,	// (0x000132b6) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6564,	// (0x000132b6) list_single_2graphic_pane_g2_cp3

0x6575,	// (0x000132c7) list_single_2graphic_pane_g3_cp3

0x657d,	// (0x000132cf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x657d,	// (0x000132cf) list_single_2graphic_pane_g4_cp3

0x6589,	// (0x000132db) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6589,	// (0x000132db) list_single_2graphic_pane_t1_cp3

0x65a5,	// (0x000132f7) list_single_midp_graphic_pane_g2_ParamLimits

0x65a5,	// (0x000132f7) list_single_midp_graphic_pane_g2

0x5ee1,	// (0x00012c33) aid_zoom_text_primary

0x5ee9,	// (0x00012c3b) aid_zoom_text_secondary

0x8da3,	// (0x00015af5) status_small_pane_g7_ParamLimits

0x8da3,	// (0x00015af5) status_small_pane_g7

0x8dc6,	// (0x00015b18) status_small_pane_t1_ParamLimits

0x7a2a,	// (0x0001477c) title_pane_g2

0x0003,

0xf54e,	// (0x0001c2a0) title_pane_g

0x7ce7,	// (0x00014a39) aid_size_cell_colour_1_pane_ParamLimits

0x7ce7,	// (0x00014a39) aid_size_cell_colour_1_pane

0x7cfb,	// (0x00014a4d) aid_size_cell_colour_2_pane_ParamLimits

0x7cfb,	// (0x00014a4d) aid_size_cell_colour_2_pane

0x7d0f,	// (0x00014a61) aid_size_cell_colour_3_pane_ParamLimits

0x7d0f,	// (0x00014a61) aid_size_cell_colour_3_pane

0x7d23,	// (0x00014a75) aid_size_cell_colour_4_pane_ParamLimits

0x7d23,	// (0x00014a75) aid_size_cell_colour_4_pane

0x5938,	// (0x0001268a) title_pane_stacon_g1_ParamLimits

0x5938,	// (0x0001268a) title_pane_stacon_g1

0x9b4b,	// (0x0001689d) popup_note_wait_window_g3_ParamLimits

0x9b4b,	// (0x0001689d) popup_note_wait_window_g3

0x9bc1,	// (0x00016913) popup_note_wait_window_t5_ParamLimits

0x9bc1,	// (0x00016913) popup_note_wait_window_t5

0x3b93,	// (0x000108e5) main_feb_china_hwr_fs_writing_pane

0x5f85,	// (0x00012cd7) popup_feb_china_hwr_fs_window_ParamLimits

0x5f85,	// (0x00012cd7) popup_feb_china_hwr_fs_window

0x65c7,	// (0x00013319) aid_size_cell_hwr_fs_ParamLimits

0x65c7,	// (0x00013319) aid_size_cell_hwr_fs

0x94d2,	// (0x00016224) bg_popup_sub_pane_cp3_ParamLimits

0x94d2,	// (0x00016224) bg_popup_sub_pane_cp3

0x65dc,	// (0x0001332e) grid_hwr_fs_pane_ParamLimits

0x65dc,	// (0x0001332e) grid_hwr_fs_pane

0x65f4,	// (0x00013346) linegrid_hwr_fs_pane_ParamLimits

0x65f4,	// (0x00013346) linegrid_hwr_fs_pane

0x6604,	// (0x00013356) cell_hwr_fs_pane_ParamLimits

0x6604,	// (0x00013356) cell_hwr_fs_pane

0x94de,	// (0x00016230) linegrid_hwr_fs_pane_g1_ParamLimits

0x94de,	// (0x00016230) linegrid_hwr_fs_pane_g1

0x94ea,	// (0x0001623c) linegrid_hwr_fs_pane_g2_ParamLimits

0x94ea,	// (0x0001623c) linegrid_hwr_fs_pane_g2

0x94fc,	// (0x0001624e) linegrid_hwr_fs_pane_g3_ParamLimits

0x94fc,	// (0x0001624e) linegrid_hwr_fs_pane_g3

0x6626,	// (0x00013378) linegrid_hwr_fs_pane_g4_ParamLimits

0x6626,	// (0x00013378) linegrid_hwr_fs_pane_g4

0x6640,	// (0x00013392) linegrid_hwr_fs_pane_g5_ParamLimits

0x6640,	// (0x00013392) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0001c538) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0001c538) linegrid_hwr_fs_pane_g

0x9508,	// (0x0001625a) cell_hwr_fs_pane_g1_ParamLimits

0x9508,	// (0x0001625a) cell_hwr_fs_pane_g1

0x9208,	// (0x00015f5a) cell_hwr_fs_pane_g2_ParamLimits

0x9208,	// (0x00015f5a) cell_hwr_fs_pane_g2

0x951e,	// (0x00016270) cell_hwr_fs_pane_g3_ParamLimits

0x951e,	// (0x00016270) cell_hwr_fs_pane_g3

0x952b,	// (0x0001627d) cell_hwr_fs_pane_g4_ParamLimits

0x952b,	// (0x0001627d) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0001c543) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001c543) cell_hwr_fs_pane_g

0x6656,	// (0x000133a8) cell_hwr_fs_pane_t1

0x3b93,	// (0x000108e5) grid_highlight_pane_cp6

0x3b93,	// (0x000108e5) main_idle_act2_pane

0x41b9,	// (0x00010f0b) aid_inside_area_popup_secondary

0xa1e0,	// (0x00016f32) aid_inside_area_window_primary_ParamLimits

0xa1e0,	// (0x00016f32) aid_inside_area_window_primary

0xae47,	// (0x00017b99) ai2_news_ticker_pane

0xae4f,	// (0x00017ba1) aid_size_cell_ai1_link_ParamLimits

0xae4f,	// (0x00017ba1) aid_size_cell_ai1_link

0xae69,	// (0x00017bbb) popup_ai2_data_window_ParamLimits

0xae69,	// (0x00017bbb) popup_ai2_data_window

0xae7f,	// (0x00017bd1) popup_ai2_link_window_ParamLimits

0xae7f,	// (0x00017bd1) popup_ai2_link_window

0x94d2,	// (0x00016224) bg_popup_sub_pane_cp4_ParamLimits

0x94d2,	// (0x00016224) bg_popup_sub_pane_cp4

0xae93,	// (0x00017be5) grid_ai2_link_pane_ParamLimits

0xae93,	// (0x00017be5) grid_ai2_link_pane

0xaeaa,	// (0x00017bfc) popup_ai2_link_window_g1_ParamLimits

0xaeaa,	// (0x00017bfc) popup_ai2_link_window_g1

0xaeb6,	// (0x00017c08) popup_ai2_link_window_g2_ParamLimits

0xaeb6,	// (0x00017c08) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0001c716) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0001c716) popup_ai2_link_window_g

0xaec5,	// (0x00017c17) ai2_mp_button_pane

0xaecd,	// (0x00017c1f) ai2_mp_volume_pane

0x96f4,	// (0x00016446) bg_popup_sub_pane_cp5_ParamLimits

0x96f4,	// (0x00016446) bg_popup_sub_pane_cp5

0xaed5,	// (0x00017c27) heading_ai2_gene_pane_ParamLimits

0xaed5,	// (0x00017c27) heading_ai2_gene_pane

0xaee1,	// (0x00017c33) list_ai2_gene_pane_ParamLimits

0xaee1,	// (0x00017c33) list_ai2_gene_pane

0xaf29,	// (0x00017c7b) cell_ai2_link_pane_ParamLimits

0xaf29,	// (0x00017c7b) cell_ai2_link_pane

0xaf3f,	// (0x00017c91) cell_ai2_link_pane_g1

0x3b93,	// (0x000108e5) grid_highlight_pane_cp7

0x694e,	// (0x000136a0) ai2_mp_volume_pane_g1

0xb00f,	// (0x00017d61) ai2_mp_volume_pane_g2

0xaf84,	// (0x00017cd6) list_ai2_gene_pane_t1

0xb017,	// (0x00017d69) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0001c72f) ai2_mp_volume_pane_g

0x6956,	// (0x000136a8) volume_small_pane_cp3

0xb01f,	// (0x00017d71) aid_size_cell_ai2_button

0xb027,	// (0x00017d79) grid_ai2_button_pane

0xb030,	// (0x00017d82) cell_ai2_button_pane_ParamLimits

0xb030,	// (0x00017d82) cell_ai2_button_pane

0x3a1a,	// (0x0001076c) cell_ai2_button_pane_g1

0x3b93,	// (0x000108e5) grid_highlight_pane_cp8

0xafcf,	// (0x00017d21) ai2_gene_pane_t1_ParamLimits

0xafcf,	// (0x00017d21) ai2_gene_pane_t1

0x5ecf,	// (0x00012c21) aid_height_parent_landscape

0xa85b,	// (0x000175ad) aid_height_set_list

0xa86c,	// (0x000175be) aid_size_parent

0xac6a,	// (0x000179bc) aid_size_cell_graphic_pane_ParamLimits

0xaef1,	// (0x00017c43) popup_ai2_data_window_g1_ParamLimits

0xaef1,	// (0x00017c43) popup_ai2_data_window_g1

0xaefd,	// (0x00017c4f) ai2_news_ticker_pane_g1

0xaf05,	// (0x00017c57) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0001c71b) ai2_news_ticker_pane_g

0xaf0d,	// (0x00017c5f) ai2_news_ticker_pane_t1

0xaf1b,	// (0x00017c6d) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0001c720) ai2_news_ticker_pane_t

0xaf48,	// (0x00017c9a) heading_ai2_gene_pane_g1

0xaf50,	// (0x00017ca2) heading_ai2_gene_pane_t1_ParamLimits

0xaf50,	// (0x00017ca2) heading_ai2_gene_pane_t1

0xaf65,	// (0x00017cb7) list_highlight_pane_cp6

0xaf6d,	// (0x00017cbf) ai2_gene_pane_ParamLimits

0xaf6d,	// (0x00017cbf) ai2_gene_pane

0xaf92,	// (0x00017ce4) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0001c725) list_ai2_gene_pane_t

0xafa0,	// (0x00017cf2) list_highlight_pane_cp8_ParamLimits

0xafa0,	// (0x00017cf2) list_highlight_pane_cp8

0xafb1,	// (0x00017d03) ai2_gene_pane_g1_ParamLimits

0xafb1,	// (0x00017d03) ai2_gene_pane_g1

0xafc3,	// (0x00017d15) ai2_gene_pane_g2_ParamLimits

0xafc3,	// (0x00017d15) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0001c72a) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0001c72a) ai2_gene_pane_g

0x3f7a,	// (0x00010ccc) scroll_pane_cp12

0x5e8c,	// (0x00012bde) control_pane_t3_ParamLimits

0x5e8c,	// (0x00012bde) control_pane_t3

0x8db7,	// (0x00015b09) status_small_pane_g8_ParamLimits

0x8db7,	// (0x00015b09) status_small_pane_g8

0x6067,	// (0x00012db9) popup_find_window_ParamLimits

0x6280,	// (0x00012fd2) popup_note_image_window_ParamLimits

0x9334,	// (0x00016086) list_double2_graphic_pane_vc_g1_ParamLimits

0x9334,	// (0x00016086) list_double2_graphic_pane_vc_g1

0x3f8b,	// (0x00010cdd) list_double2_graphic_pane_vc_g2_ParamLimits

0x3f8b,	// (0x00010cdd) list_double2_graphic_pane_vc_g2

0x3f97,	// (0x00010ce9) list_double2_graphic_pane_vc_g3_ParamLimits

0x3f97,	// (0x00010ce9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7af,	// (0x0001c501) list_double2_graphic_pane_vc_g_ParamLimits

0xf7af,	// (0x0001c501) list_double2_graphic_pane_vc_g

0x9340,	// (0x00016092) list_double2_graphic_pane_vc_t1_ParamLimits

0x9340,	// (0x00016092) list_double2_graphic_pane_vc_t1

0x3f8b,	// (0x00010cdd) list_single_heading_pane_vc_g1_ParamLimits

0x3f8b,	// (0x00010cdd) list_single_heading_pane_vc_g1

0x3f97,	// (0x00010ce9) list_single_heading_pane_vc_g2_ParamLimits

0x3f97,	// (0x00010ce9) list_single_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c522) list_single_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c522) list_single_heading_pane_vc_g

0x93fa,	// (0x0001614c) list_single_heading_pane_vc_t1_ParamLimits

0x93fa,	// (0x0001614c) list_single_heading_pane_vc_t1

0x9410,	// (0x00016162) list_single_heading_pane_vc_t2_ParamLimits

0x9410,	// (0x00016162) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0001c527) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001c527) list_single_heading_pane_vc_t

0x9422,	// (0x00016174) list_setting_number_pane_vc_g1_ParamLimits

0x9422,	// (0x00016174) list_setting_number_pane_vc_g1

0x942e,	// (0x00016180) list_setting_number_pane_vc_g2_ParamLimits

0x942e,	// (0x00016180) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c52c) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c52c) list_setting_number_pane_vc_g

0x943a,	// (0x0001618c) list_setting_number_pane_vc_t1_ParamLimits

0x943a,	// (0x0001618c) list_setting_number_pane_vc_t1

0x944e,	// (0x000161a0) list_setting_number_pane_vc_t2_ParamLimits

0x944e,	// (0x000161a0) list_setting_number_pane_vc_t2

0x946a,	// (0x000161bc) list_setting_number_pane_vc_t3_ParamLimits

0x946a,	// (0x000161bc) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c531) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c531) list_setting_number_pane_vc_t

0x9496,	// (0x000161e8) set_value_pane_vc_ParamLimits

0x9496,	// (0x000161e8) set_value_pane_vc

0xaa6f,	// (0x000177c1) list_double2_graphic_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double2_graphic_pane_vc

0xaa6f,	// (0x000177c1) list_double2_large_graphic_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double2_large_graphic_pane_vc

0xaa6f,	// (0x000177c1) list_double2_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double2_pane_vc

0xaa6f,	// (0x000177c1) list_double_graphic_heading_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double_graphic_heading_pane_vc

0xaa6f,	// (0x000177c1) list_double_graphic_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double_graphic_pane_vc

0xaa6f,	// (0x000177c1) list_double_heading_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double_heading_pane_vc

0xaa81,	// (0x000177d3) list_double_large_graphic_pane_vc_ParamLimits

0xaa81,	// (0x000177d3) list_double_large_graphic_pane_vc

0xaa6f,	// (0x000177c1) list_double_number_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double_number_pane_vc

0xaa6f,	// (0x000177c1) list_double_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double_pane_vc

0xaa6f,	// (0x000177c1) list_double_time_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_double_time_pane_vc

0xaa6f,	// (0x000177c1) list_setting_number_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_setting_number_pane_vc

0xaa6f,	// (0x000177c1) list_setting_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_setting_pane_vc

0xaa6f,	// (0x000177c1) list_single_graphic_heading_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_single_graphic_heading_pane_vc

0xaa6f,	// (0x000177c1) list_single_heading_pane_vc_ParamLimits

0xaa6f,	// (0x000177c1) list_single_heading_pane_vc

0xaa9f,	// (0x000177f1) list_single_number_heading_pane_vc_ParamLimits

0xaa9f,	// (0x000177f1) list_single_number_heading_pane_vc

0xb064,	// (0x00017db6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb064,	// (0x00017db6) list_double_graphic_heading_pane_vc_g1

0x3f8b,	// (0x00010cdd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3f8b,	// (0x00010cdd) list_double_graphic_heading_pane_vc_g2

0x3f97,	// (0x00010ce9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3f97,	// (0x00010ce9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0001c736) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0001c736) list_double_graphic_heading_pane_vc_g

0xb070,	// (0x00017dc2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb070,	// (0x00017dc2) list_double_graphic_heading_pane_vc_t1

0xb084,	// (0x00017dd6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb084,	// (0x00017dd6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0001c73d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0001c73d) list_double_graphic_heading_pane_vc_t

0x9422,	// (0x00016174) list_setting_pane_vc_g1_ParamLimits

0x9422,	// (0x00016174) list_setting_pane_vc_g1

0x942e,	// (0x00016180) list_setting_pane_vc_g2_ParamLimits

0x942e,	// (0x00016180) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c52c) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c52c) list_setting_pane_vc_g

0xb29c,	// (0x00017fee) list_setting_pane_vc_t1_ParamLimits

0xb29c,	// (0x00017fee) list_setting_pane_vc_t1

0xb2b8,	// (0x0001800a) list_setting_pane_vc_t2_ParamLimits

0xb2b8,	// (0x0001800a) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0001c780) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c780) list_setting_pane_vc_t

0x9496,	// (0x000161e8) set_value_pane_cp_vc_ParamLimits

0x9496,	// (0x000161e8) set_value_pane_cp_vc

0x3f8b,	// (0x00010cdd) list_single_number_heading_pane_vc_g1_ParamLimits

0x3f8b,	// (0x00010cdd) list_single_number_heading_pane_vc_g1

0x3f97,	// (0x00010ce9) list_single_number_heading_pane_vc_g2_ParamLimits

0x3f97,	// (0x00010ce9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c522) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c522) list_single_number_heading_pane_vc_g

0xb2d2,	// (0x00018024) list_single_number_heading_pane_vc_t1_ParamLimits

0xb2d2,	// (0x00018024) list_single_number_heading_pane_vc_t1

0xb2e8,	// (0x0001803a) list_single_number_heading_pane_vc_t2_ParamLimits

0xb2e8,	// (0x0001803a) list_single_number_heading_pane_vc_t2

0xb2fa,	// (0x0001804c) list_single_number_heading_pane_vc_t3_ParamLimits

0xb2fa,	// (0x0001804c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0001c785) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0001c785) list_single_number_heading_pane_vc_t

0xb30c,	// (0x0001805e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb30c,	// (0x0001805e) list_single_graphic_heading_pane_vc_g1

0x3f8b,	// (0x00010cdd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3f8b,	// (0x00010cdd) list_single_graphic_heading_pane_vc_g4

0x3f97,	// (0x00010ce9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3f97,	// (0x00010ce9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0001c78c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c78c) list_single_graphic_heading_pane_vc_g

0xb318,	// (0x0001806a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb318,	// (0x0001806a) list_single_graphic_heading_pane_vc_t1

0xb32e,	// (0x00018080) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb32e,	// (0x00018080) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0001c793) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0001c793) list_single_graphic_heading_pane_vc_t

0x3f8b,	// (0x00010cdd) list_double2_pane_vc_g1_ParamLimits

0x3f8b,	// (0x00010cdd) list_double2_pane_vc_g1

0x3f97,	// (0x00010ce9) list_double2_pane_vc_g2_ParamLimits

0x3f97,	// (0x00010ce9) list_double2_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c522) list_double2_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c522) list_double2_pane_vc_g

0xb340,	// (0x00018092) list_double2_pane_vc_t1_ParamLimits

0xb340,	// (0x00018092) list_double2_pane_vc_t1

0xb358,	// (0x000180aa) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb358,	// (0x000180aa) list_double2_large_graphic_pane_vc_g1

0x3f8b,	// (0x00010cdd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3f8b,	// (0x00010cdd) list_double2_large_graphic_pane_vc_g2

0x3f97,	// (0x00010ce9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3f97,	// (0x00010ce9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0001c798) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0001c798) list_double2_large_graphic_pane_vc_g

0x9340,	// (0x00016092) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9340,	// (0x00016092) list_double2_large_graphic_pane_vc_t1

0xb364,	// (0x000180b6) list_double_time_pane_vc_g1_ParamLimits

0xb364,	// (0x000180b6) list_double_time_pane_vc_g1

0xb370,	// (0x000180c2) list_double_time_pane_vc_g2_ParamLimits

0xb370,	// (0x000180c2) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0001c79f) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0001c79f) list_double_time_pane_vc_g

0xb37c,	// (0x000180ce) list_double_time_pane_vc_t1_ParamLimits

0xb37c,	// (0x000180ce) list_double_time_pane_vc_t1

0xb3a0,	// (0x000180f2) list_double_time_pane_vc_t2_ParamLimits

0xb3a0,	// (0x000180f2) list_double_time_pane_vc_t2

0xb3cf,	// (0x00018121) list_double_time_pane_vc_t3_ParamLimits

0xb3cf,	// (0x00018121) list_double_time_pane_vc_t3

0xb3e1,	// (0x00018133) list_double_time_pane_vc_t4_ParamLimits

0xb3e1,	// (0x00018133) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0001c7a4) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0001c7a4) list_double_time_pane_vc_t

0x3f8b,	// (0x00010cdd) list_double_pane_vc_g1_ParamLimits

0x3f8b,	// (0x00010cdd) list_double_pane_vc_g1

0x3f97,	// (0x00010ce9) list_double_pane_vc_g2_ParamLimits

0x3f97,	// (0x00010ce9) list_double_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c522) list_double_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c522) list_double_pane_vc_g

0xb3f5,	// (0x00018147) list_double_pane_vc_t1_ParamLimits

0xb3f5,	// (0x00018147) list_double_pane_vc_t1

0xb409,	// (0x0001815b) list_double_pane_vc_t2_ParamLimits

0xb409,	// (0x0001815b) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0001c7ad) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c7ad) list_double_pane_vc_t

0x3f8b,	// (0x00010cdd) list_double_number_pane_vc_g1_ParamLimits

0x3f8b,	// (0x00010cdd) list_double_number_pane_vc_g1

0x3f97,	// (0x00010ce9) list_double_number_pane_vc_g2_ParamLimits

0x3f97,	// (0x00010ce9) list_double_number_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c522) list_double_number_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c522) list_double_number_pane_vc_g

0xb421,	// (0x00018173) list_double_number_pane_vc_t1_ParamLimits

0xb421,	// (0x00018173) list_double_number_pane_vc_t1

0xb3f5,	// (0x00018147) list_double_number_pane_vc_t2_ParamLimits

0xb3f5,	// (0x00018147) list_double_number_pane_vc_t2

0xb433,	// (0x00018185) list_double_number_pane_vc_t3_ParamLimits

0xb433,	// (0x00018185) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0001c7b2) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0001c7b2) list_double_number_pane_vc_t

0xb44b,	// (0x0001819d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb44b,	// (0x0001819d) list_double_large_graphic_pane_vc_g1

0xb46d,	// (0x000181bf) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb46d,	// (0x000181bf) list_double_large_graphic_pane_vc_g2

0xb481,	// (0x000181d3) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb481,	// (0x000181d3) list_double_large_graphic_pane_vc_g3

0xb490,	// (0x000181e2) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb490,	// (0x000181e2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0001c7b9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0001c7b9) list_double_large_graphic_pane_vc_g

0xb49c,	// (0x000181ee) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb49c,	// (0x000181ee) list_double_large_graphic_pane_vc_t1

0xb4b8,	// (0x0001820a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb4b8,	// (0x0001820a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0001c7c2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0001c7c2) list_double_large_graphic_pane_vc_t

0x3f8b,	// (0x00010cdd) list_double_heading_pane_vc_g1_ParamLimits

0x3f8b,	// (0x00010cdd) list_double_heading_pane_vc_g1

0x3f97,	// (0x00010ce9) list_double_heading_pane_vc_g2_ParamLimits

0x3f97,	// (0x00010ce9) list_double_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c522) list_double_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c522) list_double_heading_pane_vc_g

0xb4da,	// (0x0001822c) list_double_heading_pane_vc_t1_ParamLimits

0xb4da,	// (0x0001822c) list_double_heading_pane_vc_t1

0xb4ee,	// (0x00018240) list_double_heading_pane_vc_t2_ParamLimits

0xb4ee,	// (0x00018240) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0001c7c7) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0001c7c7) list_double_heading_pane_vc_t

0xb506,	// (0x00018258) list_double_graphic_pane_vc_g1_ParamLimits

0xb506,	// (0x00018258) list_double_graphic_pane_vc_g1

0xb519,	// (0x0001826b) list_double_graphic_pane_vc_g2_ParamLimits

0xb519,	// (0x0001826b) list_double_graphic_pane_vc_g2

0x3f8b,	// (0x00010cdd) list_double_graphic_pane_vc_g3_ParamLimits

0x3f8b,	// (0x00010cdd) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0001c7cc) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0001c7cc) list_double_graphic_pane_vc_g

0xb536,	// (0x00018288) list_double_graphic_pane_vc_t1_ParamLimits

0xb536,	// (0x00018288) list_double_graphic_pane_vc_t1

0xb555,	// (0x000182a7) list_double_graphic_pane_vc_t2_ParamLimits

0xb555,	// (0x000182a7) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001c7d5) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001c7d5) list_double_graphic_pane_vc_t

0x5499,	// (0x000121eb) aid_size_cell_fastswap

0x54a1,	// (0x000121f3) aid_size_cell_touch_ParamLimits

0x54a1,	// (0x000121f3) aid_size_cell_touch

0x5706,	// (0x00012458) popup_fast_swap_wide_window_ParamLimits

0x5706,	// (0x00012458) popup_fast_swap_wide_window

0x580c,	// (0x0001255e) touch_pane_ParamLimits

0x580c,	// (0x0001255e) touch_pane

0x401a,	// (0x00010d6c) button_value_adjust_pane_cp2

0x4022,	// (0x00010d74) button_value_adjust_pane_cp4

0x402a,	// (0x00010d7c) form_field_data_pane_cp2

0x8376,	// (0x000150c8) form_field_data_wide_pane_cp2

0x4544,	// (0x00011296) bg_scroll_pane_ParamLimits

0x5a9a,	// (0x000127ec) scroll_handle_pane_ParamLimits

0x5aae,	// (0x00012800) scroll_sc2_down_pane_ParamLimits

0x5aae,	// (0x00012800) scroll_sc2_down_pane

0x458a,	// (0x000112dc) scroll_sc2_up_pane_ParamLimits

0x458a,	// (0x000112dc) scroll_sc2_up_pane

0xba01,	// (0x00018753) grid_wheel_folder_pane_g1_ParamLimits

0xba01,	// (0x00018753) grid_wheel_folder_pane_g1

0x5c6a,	// (0x000129bc) clock_nsta_pane_cp2_ParamLimits

0x5c6a,	// (0x000129bc) clock_nsta_pane_cp2

0x8b41,	// (0x00015893) listscroll_midp_pane_ParamLimits

0x8b4d,	// (0x0001589f) midp_canvas_pane

0x8e31,	// (0x00015b83) nsta_clock_indic_pane

0x8e6d,	// (0x00015bbf) listscroll_form_pane_vc

0x8e75,	// (0x00015bc7) listscroll_set_pane_vc_ParamLimits

0x8e75,	// (0x00015bc7) listscroll_set_pane_vc

0x8f76,	// (0x00015cc8) clock_nsta_pane

0x8ff1,	// (0x00015d43) indicator_nsta_pane

0x92ce,	// (0x00016020) bg_popup_sub_pane_cp2_ParamLimits

0x92e2,	// (0x00016034) find_pane_cp2_ParamLimits

0x92e2,	// (0x00016034) find_pane_cp2

0x92f8,	// (0x0001604a) grid_toobar_pane_ParamLimits

0x94a6,	// (0x000161f8) list_form_gen_pane_vc_ParamLimits

0x94a6,	// (0x000161f8) list_form_gen_pane_vc

0x94bc,	// (0x0001620e) scroll_pane_cp8_vc_ParamLimits

0x94bc,	// (0x0001620e) scroll_pane_cp8_vc

0x9538,	// (0x0001628a) data_form_wide_pane_vc_ParamLimits

0x9538,	// (0x0001628a) data_form_wide_pane_vc

0x9544,	// (0x00016296) form_field_data_wide_pane_vc_g1

0x954c,	// (0x0001629e) form_field_data_wide_pane_vc_t1_ParamLimits

0x954c,	// (0x0001629e) form_field_data_wide_pane_vc_t1

0x4051,	// (0x00010da3) input_focus_pane_cp6_vc_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_cp6_vc

0x98ba,	// (0x0001660c) list_midp_pane_ParamLimits

0x98c6,	// (0x00016618) scroll_pane_cp16_ParamLimits

0x98c6,	// (0x00016618) scroll_pane_cp16

0x9928,	// (0x0001667a) button_value_adjust_pane_ParamLimits

0x9928,	// (0x0001667a) button_value_adjust_pane

0xa87e,	// (0x000175d0) button_value_adjust_pane_cp6_ParamLimits

0xa87e,	// (0x000175d0) button_value_adjust_pane_cp6

0xa9a4,	// (0x000176f6) settings_code_pane_cp_ParamLimits

0xa9a4,	// (0x000176f6) settings_code_pane_cp

0x3a1a,	// (0x0001076c) cell_touch_pane_g1

0x3a1a,	// (0x0001076c) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x0001c446) cell_touch_pane_g

0xb042,	// (0x00017d94) cell_touch_pane_cp_ParamLimits

0xb042,	// (0x00017d94) cell_touch_pane_cp

0xb052,	// (0x00017da4) cell_touch_pane_ParamLimits

0xb052,	// (0x00017da4) cell_touch_pane

0x3a1a,	// (0x0001076c) scroll_sc2_down_pane_g1

0x3a1a,	// (0x0001076c) scroll_sc2_up_pane_g1

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp4_vc

0xb09c,	// (0x00017dee) list_set_graphic_pane_vc_g1_ParamLimits

0xb09c,	// (0x00017dee) list_set_graphic_pane_vc_g1

0xb0a8,	// (0x00017dfa) list_set_graphic_pane_vc_g2_ParamLimits

0xb0a8,	// (0x00017dfa) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0001c742) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0001c742) list_set_graphic_pane_vc_g

0xb0b4,	// (0x00017e06) text_primary_small_cp13_vc_ParamLimits

0xb0b4,	// (0x00017e06) text_primary_small_cp13_vc

0xb0cc,	// (0x00017e1e) list_set_graphic_pane_vc_ParamLimits

0xb0cc,	// (0x00017e1e) list_set_graphic_pane_vc

0x3b93,	// (0x000108e5) input_focus_pane_cp2_vc

0x3a1a,	// (0x0001076c) setting_code_pane_vc_g1

0x3c26,	// (0x00010978) setting_code_pane_vc_t1

0xb0df,	// (0x00017e31) set_text_pane_vc_t1_ParamLimits

0xb0df,	// (0x00017e31) set_text_pane_vc_t1

0x3b93,	// (0x000108e5) input_focus_pane_cp1_vc

0xb0fb,	// (0x00017e4d) list_set_text_pane_vc

0x3a1a,	// (0x0001076c) setting_text_pane_vc_g1

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp2_vc

0x3c1d,	// (0x0001096f) setting_slider_graphic_pane_vc_g1

0xb105,	// (0x00017e57) setting_slider_graphic_pane_vc_t1

0xb115,	// (0x00017e67) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001c747) setting_slider_graphic_pane_vc_t

0xb125,	// (0x00017e77) slider_set_pane_cp_vc

0xb12d,	// (0x00017e7f) slider_set_pane_vc_g1

0xb136,	// (0x00017e88) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0001c74c) slider_set_pane_vc_g

0x410b,	// (0x00010e5d) set_opt_bg_pane_g1_copy1

0x4113,	// (0x00010e65) set_opt_bg_pane_g2_copy1

0xb162,	// (0x00017eb4) set_opt_bg_pane_g3_copy1

0x4123,	// (0x00010e75) set_opt_bg_pane_g4_copy1

0x412b,	// (0x00010e7d) set_opt_bg_pane_g5_copy1

0x4133,	// (0x00010e85) set_opt_bg_pane_g6_copy1

0xb16a,	// (0x00017ebc) set_opt_bg_pane_g7_copy1

0xb172,	// (0x00017ec4) set_opt_bg_pane_g8_copy1

0xb17a,	// (0x00017ecc) set_opt_bg_pane_g9_copy1

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp_vc

0xb182,	// (0x00017ed4) setting_slider_pane_vc_t1

0xb191,	// (0x00017ee3) setting_slider_pane_vc_t2

0xb1a1,	// (0x00017ef3) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0001c75b) setting_slider_pane_vc_t

0xb1b1,	// (0x00017f03) slider_set_pane_vc

0x6664,	// (0x000133b6) volume_set_pane_vc_g1

0x695f,	// (0x000136b1) volume_set_pane_vc_g2

0x6968,	// (0x000136ba) volume_set_pane_vc_g3

0x6971,	// (0x000136c3) volume_set_pane_vc_g4

0x697a,	// (0x000136cc) volume_set_pane_vc_g5

0x6983,	// (0x000136d5) volume_set_pane_vc_g6

0x698c,	// (0x000136de) volume_set_pane_vc_g7

0x6995,	// (0x000136e7) volume_set_pane_vc_g8

0x699e,	// (0x000136f0) volume_set_pane_vc_g9

0x69a7,	// (0x000136f9) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0001c762) volume_set_pane_vc_g

0xb1b9,	// (0x00017f0b) volume_set_pane_vc

0xb1c1,	// (0x00017f13) button_value_adjust_pane_cp1_vc

0xb1cb,	// (0x00017f1d) list_highlight_pane_cp2_vc

0xb1d4,	// (0x00017f26) list_set_pane_vc_ParamLimits

0xb1d4,	// (0x00017f26) list_set_pane_vc

0xb232,	// (0x00017f84) main_pane_set_vc_t1_ParamLimits

0xb232,	// (0x00017f84) main_pane_set_vc_t1

0xb247,	// (0x00017f99) main_pane_set_vc_t2_ParamLimits

0xb247,	// (0x00017f99) main_pane_set_vc_t2

0xb259,	// (0x00017fab) main_pane_set_vc_t3_ParamLimits

0xb259,	// (0x00017fab) main_pane_set_vc_t3

0xb26b,	// (0x00017fbd) main_pane_set_vc_t4_ParamLimits

0xb26b,	// (0x00017fbd) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0001c777) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0001c777) main_pane_set_vc_t

0xb27d,	// (0x00017fcf) setting_code_pane_vc_ParamLimits

0xb27d,	// (0x00017fcf) setting_code_pane_vc

0xb28c,	// (0x00017fde) setting_slider_graphic_pane_vc

0xb28c,	// (0x00017fde) setting_slider_pane_vc

0xb28c,	// (0x00017fde) setting_text_pane_vc

0xb28c,	// (0x00017fde) setting_volume_pane_vc

0xb294,	// (0x00017fe6) scroll_pane_cp121_vc

0x4008,	// (0x00010d5a) set_content_pane_vc

0xb57f,	// (0x000182d1) button_value_adjust_pane_g1

0xb588,	// (0x000182da) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001c7da) button_value_adjust_pane_g

0xb591,	// (0x000182e3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb591,	// (0x000182e3) form_field_slider_wide_pane_vc_t1

0xb5a5,	// (0x000182f7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb5a5,	// (0x000182f7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001c7df) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001c7df) form_field_slider_wide_pane_vc_t

0x3c01,	// (0x00010953) input_focus_pane_cp10_vc_ParamLimits

0x3c01,	// (0x00010953) input_focus_pane_cp10_vc

0xb5d3,	// (0x00018325) slider_cont_pane_cp1_vc_ParamLimits

0xb5d3,	// (0x00018325) slider_cont_pane_cp1_vc

0xb5e5,	// (0x00018337) slider_form_pane_g1_cp2

0xb136,	// (0x00017e88) slider_form_pane_g2_cp2

0xb612,	// (0x00018364) form_field_slider_pane_vc_t3

0xb620,	// (0x00018372) form_field_slider_pane_vc_t4

0xb62e,	// (0x00018380) slider_form_pane_vc_ParamLimits

0xb62e,	// (0x00018380) slider_form_pane_vc

0xb63b,	// (0x0001838d) form_field_slider_pane_vc_t1_ParamLimits

0xb63b,	// (0x0001838d) form_field_slider_pane_vc_t1

0xb5a5,	// (0x000182f7) form_field_slider_pane_vc_t2_ParamLimits

0xb5a5,	// (0x000182f7) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001c7f1) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001c7f1) form_field_slider_pane_vc_t

0x3c01,	// (0x00010953) input_focus_pane_cp9_vc_ParamLimits

0x3c01,	// (0x00010953) input_focus_pane_cp9_vc

0xb657,	// (0x000183a9) slider_cont_pane_vc_ParamLimits

0xb657,	// (0x000183a9) slider_cont_pane_vc

0xb66b,	// (0x000183bd) list_form_graphic_pane_cp_vc_ParamLimits

0xb66b,	// (0x000183bd) list_form_graphic_pane_cp_vc

0x9544,	// (0x00016296) form_field_popup_wide_pane_vc_g1

0xb680,	// (0x000183d2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb680,	// (0x000183d2) form_field_popup_wide_pane_vc_t1

0x4051,	// (0x00010da3) input_focus_pane_cp8_vc_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_cp8_vc

0xb6c5,	// (0x00018417) list_form_wide_pane_vc_ParamLimits

0xb6c5,	// (0x00018417) list_form_wide_pane_vc

0xb6d1,	// (0x00018423) list_form_graphic_pane_vc_g1

0xb6d9,	// (0x0001842b) list_form_graphic_pane_vc_t1_ParamLimits

0xb6d9,	// (0x0001842b) list_form_graphic_pane_vc_t1

0x3c0f,	// (0x00010961) list_highlight_pane_cp5_vc_ParamLimits

0x3c0f,	// (0x00010961) list_highlight_pane_cp5_vc

0xb6f5,	// (0x00018447) list_form_graphic_pane_vc_ParamLimits

0xb6f5,	// (0x00018447) list_form_graphic_pane_vc

0x9544,	// (0x00016296) form_field_popup_pane_vc_g1

0xb70b,	// (0x0001845d) form_field_popup_pane_vc_t1_ParamLimits

0xb70b,	// (0x0001845d) form_field_popup_pane_vc_t1

0x4051,	// (0x00010da3) input_focus_pane_cp7_vc_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_cp7_vc

0xb722,	// (0x00018474) list_form_pane_vc_ParamLimits

0xb722,	// (0x00018474) list_form_pane_vc

0xb72e,	// (0x00018480) data_form_pane_vc_t1_ParamLimits

0xb72e,	// (0x00018480) data_form_pane_vc_t1

0x410b,	// (0x00010e5d) input_focus_pane_vc_g1

0x4113,	// (0x00010e65) input_focus_pane_vc_g2

0x411b,	// (0x00010e6d) input_focus_pane_vc_g3

0x4123,	// (0x00010e75) input_focus_pane_vc_g4

0x412b,	// (0x00010e7d) input_focus_pane_vc_g5

0x4133,	// (0x00010e85) input_focus_pane_vc_g6

0x413b,	// (0x00010e8d) input_focus_pane_vc_g7

0x4143,	// (0x00010e95) input_focus_pane_vc_g8

0x414b,	// (0x00010e9d) input_focus_pane_vc_g9

0x3a1a,	// (0x0001076c) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0001c3cf) input_focus_pane_vc_g

0x9538,	// (0x0001628a) data_form_pane_vc_ParamLimits

0x9538,	// (0x0001628a) data_form_pane_vc

0x9544,	// (0x00016296) form_field_data_pane_vc_g1

0xb749,	// (0x0001849b) form_field_data_pane_vc_t1_ParamLimits

0xb749,	// (0x0001849b) form_field_data_pane_vc_t1

0x4051,	// (0x00010da3) input_focus_pane_vc_ParamLimits

0x4051,	// (0x00010da3) input_focus_pane_vc

0xb763,	// (0x000184b5) button_value_adjust_pane_cp3_vc

0xb76b,	// (0x000184bd) button_value_adjust_pane_cp5_vc

0xb773,	// (0x000184c5) form_field_data_pane_vc_ParamLimits

0xb773,	// (0x000184c5) form_field_data_pane_vc

0xb78a,	// (0x000184dc) form_field_data_pane_vc_cp2

0xb792,	// (0x000184e4) form_field_data_wide_pane_vc_ParamLimits

0xb792,	// (0x000184e4) form_field_data_wide_pane_vc

0xb7a8,	// (0x000184fa) form_field_data_wide_pane_vc_cp2

0xb7b0,	// (0x00018502) form_field_popup_pane_vc_ParamLimits

0xb7b0,	// (0x00018502) form_field_popup_pane_vc

0xb7c7,	// (0x00018519) form_field_popup_wide_pane_vc_ParamLimits

0xb7c7,	// (0x00018519) form_field_popup_wide_pane_vc

0xb7dd,	// (0x0001852f) form_field_slider_pane_vc_ParamLimits

0xb7dd,	// (0x0001852f) form_field_slider_pane_vc

0xb7f0,	// (0x00018542) form_field_slider_wide_pane_vc_ParamLimits

0xb7f0,	// (0x00018542) form_field_slider_wide_pane_vc

0xb803,	// (0x00018555) grid_touch_1_pane_ParamLimits

0xb803,	// (0x00018555) grid_touch_1_pane

0xb80f,	// (0x00018561) grid_touch_2_pane_ParamLimits

0xb80f,	// (0x00018561) grid_touch_2_pane

0x8dfc,	// (0x00015b4e) touch_pane_g1_ParamLimits

0x8dfc,	// (0x00015b4e) touch_pane_g1

0xb827,	// (0x00018579) cell_app_pane_cp_wide_ParamLimits

0xb827,	// (0x00018579) cell_app_pane_cp_wide

0xb838,	// (0x0001858a) grid_popup_fast_wide_pane_ParamLimits

0xb838,	// (0x0001858a) grid_popup_fast_wide_pane

0xb84c,	// (0x0001859e) scroll_pane_cp19_ParamLimits

0xb84c,	// (0x0001859e) scroll_pane_cp19

0x3b93,	// (0x000108e5) bg_popup_window_pane_cp20

0xb860,	// (0x000185b2) listscroll_popup_fast_wide_pane

0x3c0f,	// (0x00010961) grid_indicator_nsta_pane

0xb868,	// (0x000185ba) clock_nsta_pane_g1

0xb871,	// (0x000185c3) clock_nsta_pane_t1

0xb88d,	// (0x000185df) cell_indicator_nsta_pane_ParamLimits

0xb88d,	// (0x000185df) cell_indicator_nsta_pane

0xb8be,	// (0x00018610) cell_indicator_nsta_pane_g1

0xb8cc,	// (0x0001861e) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001c802) cell_indicator_nsta_pane_g

0xb8d9,	// (0x0001862b) clock_nsta_pane_cp

0xb8e2,	// (0x00018634) indicator_nsta_pane_cp

0xb8ea,	// (0x0001863c) nsta_clock_indic_pane_g1

0x3c65,	// (0x000109b7) grid_indicator_pane

0x86fb,	// (0x0001544d) scroll_pane_cp29

0x5bb9,	// (0x0001290b) indicator_nsta_pane_cp2_ParamLimits

0x5bb9,	// (0x0001290b) indicator_nsta_pane_cp2

0x3c0f,	// (0x00010961) main_apps_wheel_pane

0x979d,	// (0x000164ef) form_midp_field_text_pane_ParamLimits

0x98e6,	// (0x00016638) scroll_bar_cp050_ParamLimits

0xb93a,	// (0x0001868c) cell_indicator_pane_ParamLimits

0xb93a,	// (0x0001868c) cell_indicator_pane

0xb953,	// (0x000186a5) cell_indicator_pane_g1

0xb95d,	// (0x000186af) grid_wheel_folder_pane_ParamLimits

0xb95d,	// (0x000186af) grid_wheel_folder_pane

0xb973,	// (0x000186c5) list_wheel_apps_pane_ParamLimits

0xb973,	// (0x000186c5) list_wheel_apps_pane

0xb984,	// (0x000186d6) main_apps_wheel_pane_g1_ParamLimits

0xb984,	// (0x000186d6) main_apps_wheel_pane_g1

0xb998,	// (0x000186ea) main_apps_wheel_pane_g2_ParamLimits

0xb998,	// (0x000186ea) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001c81e) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001c81e) main_apps_wheel_pane_g

0xb9b0,	// (0x00018702) main_apps_wheel_pane_t1_ParamLimits

0xb9b0,	// (0x00018702) main_apps_wheel_pane_t1

0xb9d3,	// (0x00018725) list_wheel_apps_pane_g1

0xb9db,	// (0x0001872d) list_wheel_apps_pane_g2

0xb9e3,	// (0x00018735) list_wheel_apps_pane_g3

0xb9ed,	// (0x0001873f) list_wheel_apps_pane_g4

0xb9f7,	// (0x00018749) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001c823) list_wheel_apps_pane_g

0x89b9,	// (0x0001570b) navi_icon_text_pane

0x8ea5,	// (0x00015bf7) aid_fill_nsta

0xba1a,	// (0x0001876c) navi_icon_text_pane_g1

0xba26,	// (0x00018778) navi_icon_text_pane_t1

0x4a81,	// (0x000117d3) list_set_graphic_pane_t1_ParamLimits

0x4a81,	// (0x000117d3) list_set_graphic_pane_t1

0xa029,	// (0x00016d7b) popup_midp_note_alarm_window_t6_ParamLimits

0xa029,	// (0x00016d7b) popup_midp_note_alarm_window_t6

0xa03b,	// (0x00016d8d) popup_midp_note_alarm_window_t7_ParamLimits

0xa03b,	// (0x00016d8d) popup_midp_note_alarm_window_t7

0xa04d,	// (0x00016d9f) popup_midp_note_alarm_window_t8_ParamLimits

0xa04d,	// (0x00016d9f) popup_midp_note_alarm_window_t8

0xa05f,	// (0x00016db1) popup_midp_note_alarm_window_t9_ParamLimits

0xa05f,	// (0x00016db1) popup_midp_note_alarm_window_t9

0xa071,	// (0x00016dc3) popup_midp_note_alarm_window_t10_ParamLimits

0xa071,	// (0x00016dc3) popup_midp_note_alarm_window_t10

0xa083,	// (0x00016dd5) popup_midp_note_alarm_window_t11_ParamLimits

0xa083,	// (0x00016dd5) popup_midp_note_alarm_window_t11

0xa095,	// (0x00016de7) scroll_pane_cp17_ParamLimits

0xa095,	// (0x00016de7) scroll_pane_cp17

0x6664,	// (0x000133b6) volume_small_pane_cp_g1

0x69b0,	// (0x00013702) volume_small_pane_cp_g2

0x69b9,	// (0x0001370b) volume_small_pane_cp_g3

0x69c2,	// (0x00013714) volume_small_pane_cp_g4

0x69cb,	// (0x0001371d) volume_small_pane_cp_g5

0x697a,	// (0x000136cc) volume_small_pane_cp_g6

0x69d4,	// (0x00013726) volume_small_pane_cp_g7

0x69dd,	// (0x0001372f) volume_small_pane_cp_g8

0x69e6,	// (0x00013738) volume_small_pane_cp_g9

0x69ef,	// (0x00013741) volume_small_pane_cp_g10

0x8c1a,	// (0x0001596c) midp_ticker_pane_g1_ParamLimits

0x8c26,	// (0x00015978) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x0001c49b) midp_ticker_pane_g_ParamLimits

0x8c32,	// (0x00015984) midp_ticker_pane_t1_ParamLimits

0x8ebb,	// (0x00015c0d) aid_fill_nsta_2

0x98d2,	// (0x00016624) list_form2_midp_pane

0xaa22,	// (0x00017774) midp_editing_number_pane_ParamLimits

0xaa31,	// (0x00017783) midp_ticker_pane_ParamLimits

0xba38,	// (0x0001878a) form2_midp_field_pane

0xba5c,	// (0x000187ae) scroll_pane_cp51

0xba7c,	// (0x000187ce) form2_midp_button_pane_ParamLimits

0xba7c,	// (0x000187ce) form2_midp_button_pane

0xba8e,	// (0x000187e0) form2_midp_content_pane_ParamLimits

0xba8e,	// (0x000187e0) form2_midp_content_pane

0xbaa8,	// (0x000187fa) form2_midp_field_choice_group_pane

0xbab0,	// (0x00018802) form2_midp_field_pane_g1

0xbab8,	// (0x0001880a) form2_midp_field_pane_g2

0xbac0,	// (0x00018812) form2_midp_field_pane_g3

0xbac8,	// (0x0001881a) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001c848) form2_midp_field_pane_g

0xbad0,	// (0x00018822) form2_midp_gauge_slider_pane

0xbad8,	// (0x0001882a) form2_midp_gauge_wait_pane

0xbae0,	// (0x00018832) form2_midp_image_pane_ParamLimits

0xbae0,	// (0x00018832) form2_midp_image_pane

0xbafb,	// (0x0001884d) form2_midp_label_pane_ParamLimits

0xbafb,	// (0x0001884d) form2_midp_label_pane

0xbb14,	// (0x00018866) form2_midp_label_pane_cp_ParamLimits

0xbb14,	// (0x00018866) form2_midp_label_pane_cp

0xbb35,	// (0x00018887) form2_midp_string_pane_ParamLimits

0xbb35,	// (0x00018887) form2_midp_string_pane

0xbb47,	// (0x00018899) form2_midp_text_pane_ParamLimits

0xbb47,	// (0x00018899) form2_midp_text_pane

0xbb62,	// (0x000188b4) form2_midp_time_pane

0xbb72,	// (0x000188c4) input_focus_pane_cp51_ParamLimits

0xbb72,	// (0x000188c4) input_focus_pane_cp51

0xbb8a,	// (0x000188dc) form2_midp_label_pane_t1_ParamLimits

0xbb8a,	// (0x000188dc) form2_midp_label_pane_t1

0xbbcb,	// (0x0001891d) form2_mdip_text_pane_t1_ParamLimits

0xbbcb,	// (0x0001891d) form2_mdip_text_pane_t1

0xbbea,	// (0x0001893c) form2_midp_time_pane_t1

0xbc05,	// (0x00018957) form2_midp_gauge_slider_pane_t1

0xbc17,	// (0x00018969) form2_midp_gauge_slider_pane_t2

0xbc29,	// (0x0001897b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001c851) form2_midp_gauge_slider_pane_t

0xbc3b,	// (0x0001898d) form2_midp_slider_pane

0xbc47,	// (0x00018999) form2_midp_gauge_wait_pane_t1

0xbc55,	// (0x000189a7) form2_midp_wait_pane_ParamLimits

0xbc55,	// (0x000189a7) form2_midp_wait_pane

0xbc80,	// (0x000189d2) list_single_2graphic_pane_cp4_ParamLimits

0xbc80,	// (0x000189d2) list_single_2graphic_pane_cp4

0x95ad,	// (0x000162ff) list_single_midp_graphic_pane_cp_ParamLimits

0x95ad,	// (0x000162ff) list_single_midp_graphic_pane_cp

0x3b93,	// (0x000108e5) list_highlight_pane_cp20

0xbca8,	// (0x000189fa) list_single_2graphic_pane_g1_cp4

0xaf48,	// (0x00017c9a) list_single_2graphic_pane_g2_cp4

0xbcb0,	// (0x00018a02) list_single_2graphic_pane_t1_cp4

0x3c0f,	// (0x00010961) list_highlight_pane_cp21

0xbcbf,	// (0x00018a11) list_single_midp_graphic_pane_g4_cp

0xbcce,	// (0x00018a20) list_single_midp_graphic_pane_t1_cp

0xbce3,	// (0x00018a35) form2_mdip_string_pane_t1_ParamLimits

0xbce3,	// (0x00018a35) form2_mdip_string_pane_t1

0x3b93,	// (0x000108e5) bg_wml_button_pane_cp2

0x3a1a,	// (0x0001076c) form2_midp_image_pane_g1

0x3fa3,	// (0x00010cf5) list_double_large_graphic_pane_g5_ParamLimits

0x3fa3,	// (0x00010cf5) list_double_large_graphic_pane_g5

0x8b41,	// (0x00015893) midp_form_pane_ParamLimits

0x3c0f,	// (0x00010961) main_apps_wheel_pane_ParamLimits

0x62a6,	// (0x00012ff8) popup_preview_window_ParamLimits

0x62a6,	// (0x00012ff8) popup_preview_window

0x6461,	// (0x000131b3) popup_touch_info_window_ParamLimits

0x6461,	// (0x000131b3) popup_touch_info_window

0x647f,	// (0x000131d1) popup_touch_menu_window_ParamLimits

0x647f,	// (0x000131d1) popup_touch_menu_window

0x3a10,	// (0x00010762) bg_popup_sub_pane_cp6

0xbdea,	// (0x00018b3c) list_touch_menu_pane

0xbdf2,	// (0x00018b44) list_single_touch_menu_pane_ParamLimits

0xbdf2,	// (0x00018b44) list_single_touch_menu_pane

0xbe08,	// (0x00018b5a) list_single_touch_menu_pane_t1

0x3c0f,	// (0x00010961) bg_popup_sub_pane_cp7_ParamLimits

0x3c0f,	// (0x00010961) bg_popup_sub_pane_cp7

0xbe16,	// (0x00018b68) heading_sub_pane

0xbe1e,	// (0x00018b70) list_touch_info_pane_ParamLimits

0xbe1e,	// (0x00018b70) list_touch_info_pane

0xbe2d,	// (0x00018b7f) list_single_touch_info_pane_ParamLimits

0xbe2d,	// (0x00018b7f) list_single_touch_info_pane

0xbe3f,	// (0x00018b91) list_single_touch_info_pane_t1

0xbe4d,	// (0x00018b9f) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001c85f) list_single_touch_info_pane_t

0x8b39,	// (0x0001588b) bg_popup_heading_pane_cp

0xbe5b,	// (0x00018bad) heading_sub_pane_t1

0x94d2,	// (0x00016224) bg_popup_preview_window_pane_cp_ParamLimits

0x94d2,	// (0x00016224) bg_popup_preview_window_pane_cp

0xbe16,	// (0x00018b68) heading_preview_pane

0xbe1e,	// (0x00018b70) list_preview_pane_ParamLimits

0xbe1e,	// (0x00018b70) list_preview_pane

0xbe69,	// (0x00018bbb) popup_preview_window_g1

0xbe2d,	// (0x00018b7f) list_single_preview_pane_ParamLimits

0xbe2d,	// (0x00018b7f) list_single_preview_pane

0xbe71,	// (0x00018bc3) list_single_preview_pane_g1

0xbe79,	// (0x00018bcb) list_single_preview_pane_t1

0xbe3f,	// (0x00018b91) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001c864) list_single_preview_pane_t

0xbe87,	// (0x00018bd9) bg_popup_heading_pane_cp2_ParamLimits

0xbe87,	// (0x00018bd9) bg_popup_heading_pane_cp2

0xbe9d,	// (0x00018bef) heading_preview_pane_g1

0xbea5,	// (0x00018bf7) heading_preview_pane_t1_ParamLimits

0xbea5,	// (0x00018bf7) heading_preview_pane_t1

0x3c7c,	// (0x000109ce) soft_indicator_pane_t1_ParamLimits

0x3f57,	// (0x00010ca9) scroll_pane_ParamLimits

0x4581,	// (0x000112d3) scroll_sc2_left_pane

0x4578,	// (0x000112ca) scroll_sc2_right_pane

0x45a0,	// (0x000112f2) scroll_bg_pane_g1_ParamLimits

0x45b5,	// (0x00011307) scroll_bg_pane_g2_ParamLimits

0x45cd,	// (0x0001131f) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x0001c426) scroll_bg_pane_g_ParamLimits

0x45a0,	// (0x000112f2) scroll_handle_pane_g1_ParamLimits

0x45e2,	// (0x00011334) scroll_handle_pane_g2_ParamLimits

0x45cd,	// (0x0001131f) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0001c42d) scroll_handle_pane_g_ParamLimits

0x5f29,	// (0x00012c7b) popup_choice_list_window_ParamLimits

0x5f29,	// (0x00012c7b) popup_choice_list_window

0x92da,	// (0x0001602c) choice_list_pane

0x937e,	// (0x000160d0) cell_toolbar_pane_t1

0x93a6,	// (0x000160f8) toolbar_button_pane_ParamLimits

0xa54f,	// (0x000172a1) ai_gene_pane_1_t2_ParamLimits

0xa54f,	// (0x000172a1) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0001c655) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0001c655) ai_gene_pane_1_t

0xbec2,	// (0x00018c14) scroll_sc2_left_pane_g1

0xbec2,	// (0x00018c14) scroll_sc2_right_pane_g1

0x8e61,	// (0x00015bb3) bg_popup_sub_pane_cp10

0xbecc,	// (0x00018c1e) list_choice_list_pane

0xbee5,	// (0x00018c37) list_single_choice_list_pane_ParamLimits

0xbee5,	// (0x00018c37) list_single_choice_list_pane

0xbef8,	// (0x00018c4a) list_single_choice_list_pane_g1

0x8568,	// (0x000152ba) list_single_choice_list_pane_t1_ParamLimits

0x8568,	// (0x000152ba) list_single_choice_list_pane_t1

0xbf00,	// (0x00018c52) choice_list_pane_g1

0xbf08,	// (0x00018c5a) choice_list_pane_t1

0x3a10,	// (0x00010762) input_focus_pane_cp11

0x4393,	// (0x000110e5) title_pane_stacon_g2_ParamLimits

0x4393,	// (0x000110e5) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0001c40c) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0001c40c) title_pane_stacon_g

0x8b39,	// (0x0001588b) cursor_press_pane

0x5fd1,	// (0x00012d23) popup_fep_hwr_window_ParamLimits

0x5fd1,	// (0x00012d23) popup_fep_hwr_window

0x6049,	// (0x00012d9b) popup_fep_vkb_window_ParamLimits

0x6049,	// (0x00012d9b) popup_fep_vkb_window

0xbf16,	// (0x00018c68) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001c88d) fep_vkb_side_pane_g_ParamLimits

0x6a31,	// (0x00013783) fep_hwr_candidate_pane_ParamLimits

0x6a31,	// (0x00013783) fep_hwr_candidate_pane

0x6a5b,	// (0x000137ad) fep_hwr_side_pane_ParamLimits

0x6a5b,	// (0x000137ad) fep_hwr_side_pane

0x6a7b,	// (0x000137cd) fep_hwr_top_pane_ParamLimits

0x6a7b,	// (0x000137cd) fep_hwr_top_pane

0x6a93,	// (0x000137e5) fep_hwr_write_pane_ParamLimits

0x6a93,	// (0x000137e5) fep_hwr_write_pane

0xfb3b,	// (0x0001c88d) fep_vkb_side_pane_g

0xbf1e,	// (0x00018c70) fep_hwr_top_pane_g1

0xbf30,	// (0x00018c82) fep_hwr_top_pane_g2

0x6acd,	// (0x0001381f) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001c869) fep_hwr_top_pane_g

0x6ae2,	// (0x00013834) fep_hwr_top_text_pane

0x46a5,	// (0x000113f7) fep_hwr_top_text_pane_g1

0xbf66,	// (0x00018cb8) fep_hwr_top_text_pane_t1

0x6bd8,	// (0x0001392a) fep_hwr_candidate_pane_g1

0xc1ab,	// (0x00018efd) fep_vkb_keypad_pane_g3_ParamLimits

0xc1ab,	// (0x00018efd) fep_vkb_keypad_pane_g3

0xc1d3,	// (0x00018f25) fep_vkb_keypad_pane_g4_ParamLimits

0xc1d3,	// (0x00018f25) fep_vkb_keypad_pane_g4

0xc242,	// (0x00018f94) fep_vkb_bottom_pane_g2_ParamLimits

0xc242,	// (0x00018f94) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001c894) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001c894) fep_vkb_bottom_pane_g

0xbec2,	// (0x00018c14) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001c89e) cell_vkb_side_pane_g

0xc2cd,	// (0x0001901f) cell_vkb_side_pane_t1

0xc2db,	// (0x0001902d) cell_vkb_side_pane_t1_copy1

0xbec2,	// (0x00018c14) bg_fep_vkb_candidate_pane_g2

0xc407,	// (0x00019159) cell_vkb_candidate_pane_ParamLimits

0xbf74,	// (0x00018cc6) aid_size_cell_vkb_ParamLimits

0xbf74,	// (0x00018cc6) aid_size_cell_vkb

0xc407,	// (0x00019159) cell_vkb_candidate_pane

0x6bff,	// (0x00013951) bg_popup_fep_shadow_pane_g1

0xc002,	// (0x00018d54) fep_vkb_bottom_pane_ParamLimits

0xc002,	// (0x00018d54) fep_vkb_bottom_pane

0xc038,	// (0x00018d8a) fep_vkb_candidate_pane_ParamLimits

0xc038,	// (0x00018d8a) fep_vkb_candidate_pane

0xc054,	// (0x00018da6) fep_vkb_keypad_pane_ParamLimits

0xc054,	// (0x00018da6) fep_vkb_keypad_pane

0xc093,	// (0x00018de5) fep_vkb_side_pane_ParamLimits

0xc093,	// (0x00018de5) fep_vkb_side_pane

0xc0cf,	// (0x00018e21) fep_vkb_top_pane_ParamLimits

0xc0cf,	// (0x00018e21) fep_vkb_top_pane

0xc104,	// (0x00018e56) fep_vkb_top_pane_g1_ParamLimits

0xc104,	// (0x00018e56) fep_vkb_top_pane_g1

0xc113,	// (0x00018e65) fep_vkb_top_pane_g2_ParamLimits

0xc113,	// (0x00018e65) fep_vkb_top_pane_g2

0xc122,	// (0x00018e74) fep_vkb_top_pane_g3_ParamLimits

0xc122,	// (0x00018e74) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001c884) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001c884) fep_vkb_top_pane_g

0xc140,	// (0x00018e92) fep_vkb_top_text_pane_ParamLimits

0xc140,	// (0x00018e92) fep_vkb_top_text_pane

0xc151,	// (0x00018ea3) fep_vkb_side_pane_g1_ParamLimits

0xc151,	// (0x00018ea3) fep_vkb_side_pane_g1

0xc19a,	// (0x00018eec) grid_vkb_side_pane_ParamLimits

0xc19a,	// (0x00018eec) grid_vkb_side_pane

0x6c07,	// (0x00013959) bg_popup_fep_shadow_pane_g2

0x6c10,	// (0x00013962) bg_popup_fep_shadow_pane_g3

0x6c18,	// (0x0001396a) bg_popup_fep_shadow_pane_g4

0x6c21,	// (0x00013973) bg_popup_fep_shadow_pane_g5

0x6c2b,	// (0x0001397d) bg_popup_fep_shadow_pane_g6

0x6c33,	// (0x00013985) bg_popup_fep_shadow_pane_g7

0x4123,	// (0x00010e75) bg_popup_fep_shadow_pane_g8

0xc1f1,	// (0x00018f43) grid_vkb_keypad_number_pane_ParamLimits

0xc1f1,	// (0x00018f43) grid_vkb_keypad_number_pane

0xc201,	// (0x00018f53) grid_vkb_keypad_pane_ParamLimits

0xc201,	// (0x00018f53) grid_vkb_keypad_pane

0xc227,	// (0x00018f79) fep_vkb_bottom_pane_g1_ParamLimits

0xc227,	// (0x00018f79) fep_vkb_bottom_pane_g1

0xc250,	// (0x00018fa2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc250,	// (0x00018fa2) grid_vkb_keypad_bottom_left_pane

0xc265,	// (0x00018fb7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc265,	// (0x00018fb7) grid_vkb_keypad_bottom_right_pane

0xc27a,	// (0x00018fcc) fep_vkb_top_text_pane_g1

0xc295,	// (0x00018fe7) fep_vkb_top_text_pane_t1

0xc2aa,	// (0x00018ffc) cell_vkb_side_pane_ParamLimits

0xc2aa,	// (0x00018ffc) cell_vkb_side_pane

0xbec2,	// (0x00018c14) cell_vkb_side_pane_g1

0xc2e9,	// (0x0001903b) cell_vkb_keypad_pane_ParamLimits

0xc2e9,	// (0x0001903b) cell_vkb_keypad_pane

0xc35e,	// (0x000190b0) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001c8b1) bg_popup_fep_shadow_pane_g

0x6c45,	// (0x00013997) cell_hwr_side_pane_g1

0x6c45,	// (0x00013997) cell_hwr_side_pane_g2

0xc368,	// (0x000190ba) cell_vkb_keypad_pane_t1

0xc376,	// (0x000190c8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc376,	// (0x000190c8) cell_vkb_keypad_bottom_left_pane

0xc393,	// (0x000190e5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc393,	// (0x000190e5) cell_vkb_keypad_bottom_right_pane

0xbec2,	// (0x00018c14) cell_vkb_keypad_bottom_left_pane_g1

0xbec2,	// (0x00018c14) cell_vkb_keypad_bottom_right_pane_g1

0xc3cc,	// (0x0001911e) cell_vkb_keypad_number_pane_ParamLimits

0xc3cc,	// (0x0001911e) cell_vkb_keypad_number_pane

0xc3eb,	// (0x0001913d) cell_vkb_keypad_number_pane_g1

0xc3f5,	// (0x00019147) cell_vkb_keypad_number_pane_g2

0xc3fe,	// (0x00019150) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001c8a3) cell_vkb_keypad_number_pane_g

0xc368,	// (0x000190ba) cell_vkb_keypad_number_pane_t1

0xc422,	// (0x00019174) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001c8c4) cell_hwr_side_pane_g

0xc43b,	// (0x0001918d) cell_hwr_side_pane_t1

0x6c4f,	// (0x000139a1) cell_hwr_side_pane_t1_copy1

0x6c5d,	// (0x000139af) cell_hwr_candidate_pane_g1

0x6c8c,	// (0x000139de) cell_hwr_candidate_pane_t1

0xbec2,	// (0x00018c14) cell_vkb_candidate_pane_g2

0xc47f,	// (0x000191d1) cell_vkb_candidate_pane_t1

0x69f8,	// (0x0001374a) bg_popup_fep_shadow_pane_ParamLimits

0x69f8,	// (0x0001374a) bg_popup_fep_shadow_pane

0x6aad,	// (0x000137ff) bg_fep_hwr_top_pane_g4

0xbf42,	// (0x00018c94) bg_hwr_side_pane_g1_ParamLimits

0xbf42,	// (0x00018c94) bg_hwr_side_pane_g1

0x6b1e,	// (0x00013870) cell_hwr_side_pane_ParamLimits

0x6b1e,	// (0x00013870) cell_hwr_side_pane

0x6b59,	// (0x000138ab) fep_hwr_write_pane_g1_ParamLimits

0x6b59,	// (0x000138ab) fep_hwr_write_pane_g1

0x6b66,	// (0x000138b8) fep_hwr_write_pane_g2_ParamLimits

0x6b66,	// (0x000138b8) fep_hwr_write_pane_g2

0x6b73,	// (0x000138c5) fep_hwr_write_pane_g3_ParamLimits

0x6b73,	// (0x000138c5) fep_hwr_write_pane_g3

0x6b81,	// (0x000138d3) fep_hwr_write_pane_g4_ParamLimits

0x6b81,	// (0x000138d3) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001c870) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001c870) fep_hwr_write_pane_g

0x6aad,	// (0x000137ff) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6aad,	// (0x000137ff) bg_fep_hwr_candidate_pane_g2

0x6b96,	// (0x000138e8) cell_hwr_candidate_pane_ParamLimits

0x6b96,	// (0x000138e8) cell_hwr_candidate_pane

0x6bd8,	// (0x0001392a) fep_hwr_candidate_pane_g1_ParamLimits

0xbfa2,	// (0x00018cf4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfa2,	// (0x00018cf4) bg_popup_fep_shadow_pane_cp2

0xc132,	// (0x00018e84) fep_vkb_top_pane_g4_ParamLimits

0xc132,	// (0x00018e84) fep_vkb_top_pane_g4

0xc178,	// (0x00018eca) fep_vkb_side_pane_g2_ParamLimits

0xc178,	// (0x00018eca) fep_vkb_side_pane_g2

0x8299,	// (0x00014feb) list_setting_pane_t4_ParamLimits

0x8299,	// (0x00014feb) list_setting_pane_t4

0x8313,	// (0x00015065) list_setting_number_pane_t5_ParamLimits

0x8313,	// (0x00015065) list_setting_number_pane_t5

0x870b,	// (0x0001545d) list_double_heading_pane_cp2_ParamLimits

0x870b,	// (0x0001545d) list_double_heading_pane_cp2

0xc48d,	// (0x000191df) list_double_heading_pane_g1_cp2_ParamLimits

0xc48d,	// (0x000191df) list_double_heading_pane_g1_cp2

0xc499,	// (0x000191eb) list_double_heading_pane_g2_cp2_ParamLimits

0xc499,	// (0x000191eb) list_double_heading_pane_g2_cp2

0xc4ad,	// (0x000191ff) list_double_heading_pane_t1_cp2_ParamLimits

0xc4ad,	// (0x000191ff) list_double_heading_pane_t1_cp2

0xc4c3,	// (0x00019215) list_double_heading_pane_t2_cp2_ParamLimits

0xc4c3,	// (0x00019215) list_double_heading_pane_t2_cp2

0x3a08,	// (0x0001075a) aid_value_unit2

0x5752,	// (0x000124a4) popup_preview_fixed_window

0x3d53,	// (0x00010aa5) bg_popup_preview_window_pane_cp02

0xc4d5,	// (0x00019227) list_preview_fixed_pane

0xc51b,	// (0x0001926d) list_empty_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_empty_pane_fp

0xc51b,	// (0x0001926d) list_single_cale_day_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_single_cale_day_pane_fp

0xc51b,	// (0x0001926d) list_single_graphic_heading_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_single_graphic_heading_pane_fp

0xc51b,	// (0x0001926d) list_single_graphic_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_single_graphic_pane_fp

0xc51b,	// (0x0001926d) list_single_heading_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_single_heading_pane_fp

0xc51b,	// (0x0001926d) list_single_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_single_pane_fp

0xc531,	// (0x00019283) list_single_pane_fp_g1_ParamLimits

0xc531,	// (0x00019283) list_single_pane_fp_g1

0xc53d,	// (0x0001928f) list_single_pane_fp_g2_ParamLimits

0xc53d,	// (0x0001928f) list_single_pane_fp_g2

0xc549,	// (0x0001929b) list_single_pane_fp_g3_ParamLimits

0xc549,	// (0x0001929b) list_single_pane_fp_g3

0xc55d,	// (0x000192af) list_single_pane_fp_g4_ParamLimits

0xc55d,	// (0x000192af) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001c8d7) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c8d7) list_single_pane_fp_g

0xc569,	// (0x000192bb) list_single_pane_fp_t1_ParamLimits

0xc569,	// (0x000192bb) list_single_pane_fp_t1

0xc580,	// (0x000192d2) list_single_graphic_pane_fp_g1_ParamLimits

0xc580,	// (0x000192d2) list_single_graphic_pane_fp_g1

0xc531,	// (0x00019283) list_single_graphic_pane_fp_g2_ParamLimits

0xc531,	// (0x00019283) list_single_graphic_pane_fp_g2

0xc53d,	// (0x0001928f) list_single_graphic_pane_fp_g3_ParamLimits

0xc53d,	// (0x0001928f) list_single_graphic_pane_fp_g3

0xc549,	// (0x0001929b) list_single_graphic_pane_fp_g4_ParamLimits

0xc549,	// (0x0001929b) list_single_graphic_pane_fp_g4

0xc55d,	// (0x000192af) list_single_graphic_pane_fp_g5_ParamLimits

0xc55d,	// (0x000192af) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c8e0) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c8e0) list_single_graphic_pane_fp_g

0xc58c,	// (0x000192de) list_single_graphic_pane_fp_t1_ParamLimits

0xc58c,	// (0x000192de) list_single_graphic_pane_fp_t1

0xc580,	// (0x000192d2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc580,	// (0x000192d2) list_single_graphic_heading_pane_fp_g1

0xc531,	// (0x00019283) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc531,	// (0x00019283) list_single_graphic_heading_pane_fp_g2

0xc53d,	// (0x0001928f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc53d,	// (0x0001928f) list_single_graphic_heading_pane_fp_g3

0xc549,	// (0x0001929b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc549,	// (0x0001929b) list_single_graphic_heading_pane_fp_g4

0xc55d,	// (0x000192af) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc55d,	// (0x000192af) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c8e0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c8e0) list_single_graphic_heading_pane_fp_g

0xc5a2,	// (0x000192f4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc5a2,	// (0x000192f4) list_single_graphic_heading_pane_fp_t1

0xc5b8,	// (0x0001930a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5b8,	// (0x0001930a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001c8eb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001c8eb) list_single_graphic_heading_pane_fp_t

0xc5ca,	// (0x0001931c) list_single_cale_day_pane_fp_g1_ParamLimits

0xc5ca,	// (0x0001931c) list_single_cale_day_pane_fp_g1

0xc602,	// (0x00019354) list_single_cale_day_pane_fp_g2_ParamLimits

0xc602,	// (0x00019354) list_single_cale_day_pane_fp_g2

0xc60e,	// (0x00019360) list_single_cale_day_pane_fp_g3_ParamLimits

0xc60e,	// (0x00019360) list_single_cale_day_pane_fp_g3

0xc636,	// (0x00019388) list_single_cale_day_pane_fp_g4_ParamLimits

0xc636,	// (0x00019388) list_single_cale_day_pane_fp_g4

0xc65a,	// (0x000193ac) list_single_cale_day_pane_fp_g5_ParamLimits

0xc65a,	// (0x000193ac) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001c8f0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001c8f0) list_single_cale_day_pane_fp_g

0xc67e,	// (0x000193d0) list_single_cale_day_pane_fp_t1_ParamLimits

0xc67e,	// (0x000193d0) list_single_cale_day_pane_fp_t1

0xc6a4,	// (0x000193f6) list_single_cale_day_pane_fp_t2_ParamLimits

0xc6a4,	// (0x000193f6) list_single_cale_day_pane_fp_t2

0xc6bd,	// (0x0001940f) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6bd,	// (0x0001940f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001c8fb) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001c8fb) list_single_cale_day_pane_fp_t

0xc531,	// (0x00019283) list_empty_pane_fp_g1_ParamLimits

0xc531,	// (0x00019283) list_empty_pane_fp_g1

0xc6d6,	// (0x00019428) list_empty_pane_fp_t1

0xc6e4,	// (0x00019436) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001c902) list_empty_pane_fp_t

0xc531,	// (0x00019283) list_single_heading_pane_fp_g1_ParamLimits

0xc531,	// (0x00019283) list_single_heading_pane_fp_g1

0xc53d,	// (0x0001928f) list_single_heading_pane_fp_g2_ParamLimits

0xc53d,	// (0x0001928f) list_single_heading_pane_fp_g2

0xc549,	// (0x0001929b) list_single_heading_pane_fp_g3_ParamLimits

0xc549,	// (0x0001929b) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001c907) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001c907) list_single_heading_pane_fp_g

0xc6f2,	// (0x00019444) list_single_heading_pane_fp_t1_ParamLimits

0xc6f2,	// (0x00019444) list_single_heading_pane_fp_t1

0xc704,	// (0x00019456) list_single_heading_pane_fp_t2_ParamLimits

0xc704,	// (0x00019456) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001c90e) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001c90e) list_single_heading_pane_fp_t

0x85c0,	// (0x00015312) aid_size_cell_fast

0x3d36,	// (0x00010a88) soft_indicator_pane_cp1_t1

0x85c9,	// (0x0001531b) cell_app_pane_cp2_ParamLimits

0x85c9,	// (0x0001531b) cell_app_pane_cp2

0x6a1a,	// (0x0001376c) fep_hwr_candidate_drop_down_list_pane

0x6bf2,	// (0x00013944) fep_hwr_candidate_pane_g3_ParamLimits

0x6bf2,	// (0x00013944) fep_hwr_candidate_pane_g3

0x2fde,	// (0x0000fd30) fep_hwr_candidate_pane_g4_ParamLimits

0x2fde,	// (0x0000fd30) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001c87d) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001c87d) fep_hwr_candidate_pane_g

0xc027,	// (0x00018d79) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc027,	// (0x00018d79) fep_vkb_candidate_drop_down_list_pane

0xc42a,	// (0x0001917c) fep_vkb_candidate_pane_g3

0xc432,	// (0x00019184) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001c8aa) fep_vkb_candidate_pane_g

0x6c5d,	// (0x000139af) cell_hwr_candidate_pane_g1_ParamLimits

0x6c6b,	// (0x000139bd) cell_hwr_candidate_pane_g3_ParamLimits

0x6c6b,	// (0x000139bd) cell_hwr_candidate_pane_g3

0xd95d,	// (0x0001a6af) cell_hwr_candidate_pane_g4_ParamLimits

0xd95d,	// (0x0001a6af) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001c8c9) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001c8c9) cell_hwr_candidate_pane_g

0xc449,	// (0x0001919b) cell_vkb_candidate_pane_g3_ParamLimits

0xc449,	// (0x0001919b) cell_vkb_candidate_pane_g3

0xc464,	// (0x000191b6) cell_vkb_candidate_pane_g4_ParamLimits

0xc464,	// (0x000191b6) cell_vkb_candidate_pane_g4

0xc71a,	// (0x0001946c) cell_app_pane_cp2_g1_ParamLimits

0xc71a,	// (0x0001946c) cell_app_pane_cp2_g1

0xc738,	// (0x0001948a) cell_app_pane_cp2_g2_ParamLimits

0xc738,	// (0x0001948a) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001c913) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001c913) cell_app_pane_cp2_g

0xc744,	// (0x00019496) cell_app_pane_cp2_t1_ParamLimits

0xc744,	// (0x00019496) cell_app_pane_cp2_t1

0x4051,	// (0x00010da3) grid_highlight_pane_cp1_ParamLimits

0x4051,	// (0x00010da3) grid_highlight_pane_cp1

0x6caa,	// (0x000139fc) cell_hwr_candidate_pane_cp1_ParamLimits

0x6caa,	// (0x000139fc) cell_hwr_candidate_pane_cp1

0x6c5d,	// (0x000139af) fep_hwr_candidate_drop_down_list_pane_g1

0x6cc9,	// (0x00013a1b) fep_hwr_candidate_drop_down_list_pane_g2

0x6cd6,	// (0x00013a28) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001c918) fep_hwr_candidate_drop_down_list_pane_g

0x6ce3,	// (0x00013a35) fep_hwr_candidate_drop_down_list_scroll_pane

0x6cec,	// (0x00013a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6cec,	// (0x00013a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6cf9,	// (0x00013a4b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6cf9,	// (0x00013a4b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d06,	// (0x00013a58) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d06,	// (0x00013a58) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d13,	// (0x00013a65) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d13,	// (0x00013a65) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d2e,	// (0x00013a80) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d2e,	// (0x00013a80) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d49,	// (0x00013a9b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d49,	// (0x00013a9b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d64,	// (0x00013ab6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d64,	// (0x00013ab6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d7f,	// (0x00013ad1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d7f,	// (0x00013ad1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001c91f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001c91f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc756,	// (0x000194a8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc756,	// (0x000194a8) cell_vkb_candidate_pane_cp1

0xc132,	// (0x00018e84) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc132,	// (0x00018e84) fep_vkb_candidate_drop_down_list_pane_g1

0xc776,	// (0x000194c8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc776,	// (0x000194c8) fep_vkb_candidate_drop_down_list_pane_g2

0xc783,	// (0x000194d5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc783,	// (0x000194d5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001c930) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001c930) fep_vkb_candidate_drop_down_list_pane_g

0xc790,	// (0x000194e2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc790,	// (0x000194e2) fep_vkb_candidate_drop_down_list_scroll_pane

0xc79d,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc79d,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7aa,	// (0x000194fc) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7aa,	// (0x000194fc) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7b6,	// (0x00019508) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7b6,	// (0x00019508) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7c2,	// (0x00019514) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7c2,	// (0x00019514) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7e3,	// (0x00019535) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7e3,	// (0x00019535) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc804,	// (0x00019556) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc804,	// (0x00019556) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc825,	// (0x00019577) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc825,	// (0x00019577) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc846,	// (0x00019598) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc846,	// (0x00019598) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001c937) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001c937) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7a1d,	// (0x0001476f) title_pane_g1_ParamLimits

0x7a2a,	// (0x0001477c) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c2a0) title_pane_g_ParamLimits

0x469d,	// (0x000113ef) aid_call2_pane

0x4695,	// (0x000113e7) aid_call_pane

0x46a5,	// (0x000113f7) popup_clock_analogue_window_g1

0x46a5,	// (0x000113f7) popup_clock_analogue_window_g2

0x5ac3,	// (0x00012815) popup_clock_analogue_window_g3

0x5acc,	// (0x0001281e) popup_clock_analogue_window_g4

0x3a1a,	// (0x0001076c) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0001c43b) popup_clock_analogue_window_g

0x5ad4,	// (0x00012826) popup_clock_analogue_window_t1

0x5ae2,	// (0x00012834) clock_digital_number_pane_ParamLimits

0x5ae2,	// (0x00012834) clock_digital_number_pane

0x5aee,	// (0x00012840) clock_digital_number_pane_cp02_ParamLimits

0x5aee,	// (0x00012840) clock_digital_number_pane_cp02

0x5afa,	// (0x0001284c) clock_digital_number_pane_cp03_ParamLimits

0x5afa,	// (0x0001284c) clock_digital_number_pane_cp03

0x5b06,	// (0x00012858) clock_digital_number_pane_cp04_ParamLimits

0x5b06,	// (0x00012858) clock_digital_number_pane_cp04

0x5b12,	// (0x00012864) clock_digital_separator_pane_ParamLimits

0x5b12,	// (0x00012864) clock_digital_separator_pane

0x5b1e,	// (0x00012870) popup_clock_digital_window_t1_ParamLimits

0x5b1e,	// (0x00012870) popup_clock_digital_window_t1

0x3a1a,	// (0x0001076c) clock_digital_number_pane_g1

0x3a1a,	// (0x0001076c) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x0001c446) clock_digital_number_pane_g

0x3a1a,	// (0x0001076c) clock_digital_separator_pane_g1

0x3a1a,	// (0x0001076c) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x0001c446) clock_digital_separator_pane_g

0x8ea5,	// (0x00015bf7) aid_fill_nsta_ParamLimits

0x8ff1,	// (0x00015d43) indicator_nsta_pane_ParamLimits

0x916a,	// (0x00015ebc) popup_clock_analogue_window

0x916a,	// (0x00015ebc) popup_clock_digital_window

0x3c0f,	// (0x00010961) grid_indicator_nsta_pane_ParamLimits

0xb87f,	// (0x000185d1) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001c7fd) clock_nsta_pane_t

0x5a87,	// (0x000127d9) aid_size_max_handle

0x5a91,	// (0x000127e3) aid_size_min_handle

0x8b39,	// (0x0001588b) editor_scroll_pane

0xc861,	// (0x000195b3) ex_editor_pane

0x41d2,	// (0x00010f24) scroll_pane_cp13

0x3f83,	// (0x00010cd5) scroll_pane_cp14

0x46f3,	// (0x00011445) scroll_pane_cp36

0x871f,	// (0x00015471) list_single_graphic_hl_pane_cp2_ParamLimits

0x871f,	// (0x00015471) list_single_graphic_hl_pane_cp2

0xaafe,	// (0x00017850) list_single_graphic_hl_pane_ParamLimits

0xaafe,	// (0x00017850) list_single_graphic_hl_pane

0xc869,	// (0x000195bb) aid_size_min_hl_cp1

0xc872,	// (0x000195c4) list_highlight_pane_cp34_ParamLimits

0xc872,	// (0x000195c4) list_highlight_pane_cp34

0xc883,	// (0x000195d5) list_single_graphic_hl_pane_g1_ParamLimits

0xc883,	// (0x000195d5) list_single_graphic_hl_pane_g1

0xc890,	// (0x000195e2) list_single_graphic_hl_pane_g2_ParamLimits

0xc890,	// (0x000195e2) list_single_graphic_hl_pane_g2

0xc890,	// (0x000195e2) list_single_graphic_hl_pane_g3_ParamLimits

0xc890,	// (0x000195e2) list_single_graphic_hl_pane_g3

0xc89c,	// (0x000195ee) list_single_graphic_hl_pane_g4_ParamLimits

0xc89c,	// (0x000195ee) list_single_graphic_hl_pane_g4

0xc8a8,	// (0x000195fa) list_single_graphic_hl_pane_g5_ParamLimits

0xc8a8,	// (0x000195fa) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001c948) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001c948) list_single_graphic_hl_pane_g

0xc8bc,	// (0x0001960e) list_single_graphic_hl_pane_t1_ParamLimits

0xc8bc,	// (0x0001960e) list_single_graphic_hl_pane_t1

0xc8d2,	// (0x00019624) aid_size_min_hl_cp2

0xc8db,	// (0x0001962d) list_highlight_pane_cp34_cp2_ParamLimits

0xc8db,	// (0x0001962d) list_highlight_pane_cp34_cp2

0xc883,	// (0x000195d5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc883,	// (0x000195d5) list_single_graphic_hl_pane_g1_cp2

0xc8e8,	// (0x0001963a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8e8,	// (0x0001963a) list_single_graphic_hl_pane_g2_cp2

0xc8f4,	// (0x00019646) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8f4,	// (0x00019646) list_single_graphic_hl_pane_g3_cp2

0x8a72,	// (0x000157c4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8a72,	// (0x000157c4) list_single_graphic_hl_pane_g4_cp2

0xc902,	// (0x00019654) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc902,	// (0x00019654) list_single_graphic_hl_pane_g5_cp2

0x5dc9,	// (0x00012b1b) control_pane_g4_ParamLimits

0x5dc9,	// (0x00012b1b) control_pane_g4

0x8e61,	// (0x00015bb3) bg_popup_sub_pane_cp10_ParamLimits

0xbecc,	// (0x00018c1e) list_choice_list_pane_ParamLimits

0xbedb,	// (0x00018c2d) scroll_pane_cp23

0x3d53,	// (0x00010aa5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4d5,	// (0x00019227) list_preview_fixed_pane_ParamLimits

0xc4eb,	// (0x0001923d) list_preview_fixed_pane_cp_ParamLimits

0xc4eb,	// (0x0001923d) list_preview_fixed_pane_cp

0xc4f7,	// (0x00019249) popup_preview_fixed_window_g1_ParamLimits

0xc4f7,	// (0x00019249) popup_preview_fixed_window_g1

0xc503,	// (0x00019255) popup_preview_fixed_window_g2_ParamLimits

0xc503,	// (0x00019255) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001c8d0) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001c8d0) popup_preview_fixed_window_g

0x59fb,	// (0x0001274d) aid_navi_side_left_pane_ParamLimits

0x5a10,	// (0x00012762) aid_navi_side_right_pane_ParamLimits

0x5a28,	// (0x0001277a) navi_icon_pane_stacon_ParamLimits

0x5a3c,	// (0x0001278e) navi_navi_pane_stacon_ParamLimits

0x5a28,	// (0x0001277a) navi_text_pane_stacon_ParamLimits

0x5621,	// (0x00012373) main_text_info_pane

0xc92c,	// (0x0001967e) listscroll_text_info_pane

0xc934,	// (0x00019686) list_text_info_pane_ParamLimits

0xc934,	// (0x00019686) list_text_info_pane

0xc943,	// (0x00019695) scroll_pane_cp24_ParamLimits

0xc943,	// (0x00019695) scroll_pane_cp24

0xc961,	// (0x000196b3) list_text_info_pane_t1_ParamLimits

0xc961,	// (0x000196b3) list_text_info_pane_t1

0x5f45,	// (0x00012c97) popup_fast_swap2_window_ParamLimits

0x5f45,	// (0x00012c97) popup_fast_swap2_window

0xc995,	// (0x000196e7) aid_size_cell_fast2

0x3a10,	// (0x00010762) bg_popup_window_pane_cp17

0x9906,	// (0x00016658) heading_pane_cp2

0x3e87,	// (0x00010bd9) listscroll_fast2_pane

0xc99f,	// (0x000196f1) grid_fast2_pane

0xc9a9,	// (0x000196fb) listscroll_fast2_pane_g1

0xc9b1,	// (0x00019703) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001c953) listscroll_fast2_pane_g

0x41d2,	// (0x00010f24) scroll_pane_cp26

0xc9bb,	// (0x0001970d) cell_fast2_pane_ParamLimits

0xc9bb,	// (0x0001970d) cell_fast2_pane

0xc9d0,	// (0x00019722) cell_fast2_pane_g1

0xc9d9,	// (0x0001972b) cell_fast2_pane_g2

0xc9e2,	// (0x00019734) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001c958) cell_fast2_pane_g

0x3eba,	// (0x00010c0c) grid_highlight_pane_cp9

0x5f0d,	// (0x00012c5f) main_eswt_pane_ParamLimits

0x5f0d,	// (0x00012c5f) main_eswt_pane

0xc958,	// (0x000196aa) list_single_text_info_pane

0xc9ea,	// (0x0001973c) eswt_ctrl_button_pane

0xc9ea,	// (0x0001973c) eswt_ctrl_canvas_pane

0xc9f2,	// (0x00019744) eswt_ctrl_combo_pane

0xc9ea,	// (0x0001973c) eswt_ctrl_default_pane

0xc9ea,	// (0x0001973c) eswt_ctrl_label_pane

0xc9fa,	// (0x0001974c) eswt_ctrl_wait_pane

0xca02,	// (0x00019754) eswt_shell_pane

0x3a10,	// (0x00010762) listscroll_eswt_app_pane

0xca22,	// (0x00019774) popup_eswt_tasktip_window_ParamLimits

0xca22,	// (0x00019774) popup_eswt_tasktip_window

0x94d2,	// (0x00016224) bg_popup_window_pane_cp18

0xca33,	// (0x00019785) eswt_control_pane_g1_ParamLimits

0xca33,	// (0x00019785) eswt_control_pane_g1

0xca40,	// (0x00019792) eswt_control_pane_g2_ParamLimits

0xca40,	// (0x00019792) eswt_control_pane_g2

0xca4d,	// (0x0001979f) eswt_control_pane_g3_ParamLimits

0xca4d,	// (0x0001979f) eswt_control_pane_g3

0xca5a,	// (0x000197ac) eswt_control_pane_g4_ParamLimits

0xca5a,	// (0x000197ac) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001c95f) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001c95f) eswt_control_pane_g

0x4051,	// (0x00010da3) bg_button_pane_ParamLimits

0x4051,	// (0x00010da3) bg_button_pane

0x3ecf,	// (0x00010c21) common_borders_pane_copy2_ParamLimits

0x3ecf,	// (0x00010c21) common_borders_pane_copy2

0xca67,	// (0x000197b9) control_button_pane_g1_ParamLimits

0xca67,	// (0x000197b9) control_button_pane_g1

0xca73,	// (0x000197c5) control_button_pane_g2_ParamLimits

0xca73,	// (0x000197c5) control_button_pane_g2

0xca7f,	// (0x000197d1) control_button_pane_g3_ParamLimits

0xca7f,	// (0x000197d1) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001c968) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001c968) control_button_pane_g

0xca93,	// (0x000197e5) control_button_pane_t1

0xcaa1,	// (0x000197f3) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001c96f) control_button_pane_t

0x93b2,	// (0x00016104) bg_button_pane_g1

0x93c2,	// (0x00016114) bg_button_pane_g2

0x93ba,	// (0x0001610c) bg_button_pane_g3

0x93d2,	// (0x00016124) bg_button_pane_g4

0x93ca,	// (0x0001611c) bg_button_pane_g5

0x93da,	// (0x0001612c) bg_button_pane_g6

0x93e2,	// (0x00016134) bg_button_pane_g7

0x93f2,	// (0x00016144) bg_button_pane_g8

0x93ea,	// (0x0001613c) bg_button_pane_g9

0x0008,

0xf857,	// (0x0001c5a9) bg_button_pane_g

0xbe87,	// (0x00018bd9) common_borders_pane_ParamLimits

0xbe87,	// (0x00018bd9) common_borders_pane

0xca33,	// (0x00019785) eswt_control_pane_g1_copy1_ParamLimits

0xca33,	// (0x00019785) eswt_control_pane_g1_copy1

0xca40,	// (0x00019792) eswt_control_pane_g2_copy1_ParamLimits

0xca40,	// (0x00019792) eswt_control_pane_g2_copy1

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy1_ParamLimits

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy1

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy1_ParamLimits

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy1

0xbec2,	// (0x00018c14) bg_eswt_ctrl_canvas_pane_g1

0xbe87,	// (0x00018bd9) common_borders_pane_cp2_ParamLimits

0xbe87,	// (0x00018bd9) common_borders_pane_cp2

0xbe87,	// (0x00018bd9) common_borders_pane_cp3_ParamLimits

0xbe87,	// (0x00018bd9) common_borders_pane_cp3

0xcaaf,	// (0x00019801) separator_horizontal_pane

0xcab7,	// (0x00019809) separator_vertical_pane

0xca33,	// (0x00019785) eswt_control_pane_g1_copy2_ParamLimits

0xca33,	// (0x00019785) eswt_control_pane_g1_copy2

0xca40,	// (0x00019792) eswt_control_pane_g2_copy2_ParamLimits

0xca40,	// (0x00019792) eswt_control_pane_g2_copy2

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy2_ParamLimits

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy2

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy2_ParamLimits

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy2

0x3a10,	// (0x00010762) common_borders_pane_cp4

0xcac0,	// (0x00019812) separator_horizontal_pane_g1

0xcac9,	// (0x0001981b) separator_horizontal_pane_g2

0xcad2,	// (0x00019824) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001c974) separator_horizontal_pane_g

0xca33,	// (0x00019785) eswt_control_pane_g1_copy3_ParamLimits

0xca33,	// (0x00019785) eswt_control_pane_g1_copy3

0xca40,	// (0x00019792) eswt_control_pane_g2_copy3_ParamLimits

0xca40,	// (0x00019792) eswt_control_pane_g2_copy3

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy3_ParamLimits

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy3

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy3_ParamLimits

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy3

0x3a10,	// (0x00010762) common_borders_pane_cp5

0xcadb,	// (0x0001982d) separator_vertical_pane_g1

0xcae4,	// (0x00019836) separator_vertical_pane_g2

0xcaed,	// (0x0001983f) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001c97b) separator_vertical_pane_g

0xca33,	// (0x00019785) eswt_control_pane_g1_copy4_ParamLimits

0xca33,	// (0x00019785) eswt_control_pane_g1_copy4

0xca40,	// (0x00019792) eswt_control_pane_g2_copy4_ParamLimits

0xca40,	// (0x00019792) eswt_control_pane_g2_copy4

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy4_ParamLimits

0xca4d,	// (0x0001979f) eswt_control_pane_g3_copy4

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy4_ParamLimits

0xca5a,	// (0x000197ac) eswt_control_pane_g4_copy4

0xcaf6,	// (0x00019848) eswt_ctrl_combo_button_pane

0xcafe,	// (0x00019850) eswt_ctrl_input_pane

0xcb06,	// (0x00019858) popup_choice_list_window_cp70

0xcb0e,	// (0x00019860) eswt_ctrl_input_pane_t1

0x3a10,	// (0x00010762) input_focus_pane_cp70

0xbe87,	// (0x00018bd9) bg_button_pane_cp70_ParamLimits

0xbe87,	// (0x00018bd9) bg_button_pane_cp70

0xcb1c,	// (0x0001986e) eswt_ctrl_combo_button_pane_g1

0xcb24,	// (0x00019876) wait_bar_pane_cp70

0x94d2,	// (0x00016224) bg_popup_window_pane_cp70_ParamLimits

0x94d2,	// (0x00016224) bg_popup_window_pane_cp70

0xcb2c,	// (0x0001987e) popup_eswt_tasktip_window_t1

0xcb42,	// (0x00019894) wait_bar_pane_cp71_ParamLimits

0xcb42,	// (0x00019894) wait_bar_pane_cp71

0xcb4e,	// (0x000198a0) grid_eswt_app_pane

0x4581,	// (0x000112d3) scroll_pane_cp70

0xcb57,	// (0x000198a9) cell_eswt_app_pane_ParamLimits

0xcb57,	// (0x000198a9) cell_eswt_app_pane

0xcb87,	// (0x000198d9) cell_eswt_app_pane_g1_ParamLimits

0xcb87,	// (0x000198d9) cell_eswt_app_pane_g1

0xcbb6,	// (0x00019908) cell_eswt_app_pane_g2_ParamLimits

0xcbb6,	// (0x00019908) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001c982) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001c982) cell_eswt_app_pane_g

0xcbda,	// (0x0001992c) cell_eswt_app_pane_t1_ParamLimits

0xcbda,	// (0x0001992c) cell_eswt_app_pane_t1

0xcc0c,	// (0x0001995e) grid_highlight_pane_cp70_ParamLimits

0xcc0c,	// (0x0001995e) grid_highlight_pane_cp70

0x8a0e,	// (0x00015760) set_content_pane_g1

0x8de0,	// (0x00015b32) status_small_volume_pane

0x6d9a,	// (0x00013aec) status_small_volume_pane_g1

0x6da2,	// (0x00013af4) volume_small2_pane

0x6dab,	// (0x00013afd) volume_small2_pane_g1

0x6db4,	// (0x00013b06) volume_small2_pane_g2

0x6dbd,	// (0x00013b0f) volume_small2_pane_g3

0x6dc6,	// (0x00013b18) volume_small2_pane_g4

0x6dcf,	// (0x00013b21) volume_small2_pane_g5

0x6dd8,	// (0x00013b2a) volume_small2_pane_g6

0x6de1,	// (0x00013b33) volume_small2_pane_g7

0x6dea,	// (0x00013b3c) volume_small2_pane_g8

0x6df3,	// (0x00013b45) volume_small2_pane_g9

0x6dfc,	// (0x00013b4e) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001c987) volume_small2_pane_g

0xc27a,	// (0x00018fcc) fep_vkb_top_text_pane_g1_ParamLimits

0xc295,	// (0x00018fe7) fep_vkb_top_text_pane_t1_ParamLimits

0xc50f,	// (0x00019261) popup_preview_fixed_window_g3_ParamLimits

0xc50f,	// (0x00019261) popup_preview_fixed_window_g3

0x63f4,	// (0x00013146) popup_toolbar_trans_pane

0xa85b,	// (0x000175ad) aid_height_set_list_ParamLimits

0xa86c,	// (0x000175be) aid_size_parent_ParamLimits

0x8e61,	// (0x00015bb3) list_highlight_pane_cp2_ParamLimits

0x8a0e,	// (0x00015760) set_content_pane_g1_ParamLimits

0xab1d,	// (0x0001786f) list_single_image_pane_ParamLimits

0xab1d,	// (0x0001786f) list_single_image_pane

0xcc18,	// (0x0001996a) aid_size_cell_image_ParamLimits

0xcc18,	// (0x0001996a) aid_size_cell_image

0xcc25,	// (0x00019977) grid_single_image_pane_ParamLimits

0xcc25,	// (0x00019977) grid_single_image_pane

0xc53d,	// (0x0001928f) list_single_image_pane_g1_ParamLimits

0xc53d,	// (0x0001928f) list_single_image_pane_g1

0xc549,	// (0x0001929b) list_single_image_pane_g2_ParamLimits

0xc549,	// (0x0001929b) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001c99c) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001c99c) list_single_image_pane_g

0xcc33,	// (0x00019985) list_single_image_pane_t1_ParamLimits

0xcc33,	// (0x00019985) list_single_image_pane_t1

0xcc49,	// (0x0001999b) cell_image_list_pane_ParamLimits

0xcc49,	// (0x0001999b) cell_image_list_pane

0xcc5d,	// (0x000199af) cell_image_list_pane_g1

0xcc66,	// (0x000199b8) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001c9a1) cell_image_list_pane_g

0xcc6f,	// (0x000199c1) aid_size_cell_tb_trans_pane

0x4051,	// (0x00010da3) bg_tb_trans_pane

0xcc81,	// (0x000199d3) grid_tb_trans_pane

0x93b2,	// (0x00016104) bg_tb_trans_pane_g1

0x93c2,	// (0x00016114) bg_tb_trans_pane_g2

0x93ba,	// (0x0001610c) bg_tb_trans_pane_g3

0x93d2,	// (0x00016124) bg_tb_trans_pane_g4

0x93ca,	// (0x0001611c) bg_tb_trans_pane_g5

0x93f2,	// (0x00016144) bg_tb_trans_pane_g6

0x93ea,	// (0x0001613c) bg_tb_trans_pane_g7

0x93da,	// (0x0001612c) bg_tb_trans_pane_g8

0x93e2,	// (0x00016134) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001c9a6) bg_tb_trans_pane_g

0xcc95,	// (0x000199e7) cell_toolbar_trans_pane_ParamLimits

0xcc95,	// (0x000199e7) cell_toolbar_trans_pane

0xbec2,	// (0x00018c14) cell_toolbar_trans_pane_g1

0xba40,	// (0x00018792) list_form2_midp_pane_t1

0xba4e,	// (0x000187a0) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001c843) list_form2_midp_pane_t

0xba5c,	// (0x000187ae) scroll_pane_cp51_ParamLimits

0xbc65,	// (0x000189b7) form2_midp_wait_pane_g1

0xbc6e,	// (0x000189c0) form2_midp_wait_pane_g2

0xbc77,	// (0x000189c9) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001c858) form2_midp_wait_pane_g

0x3c0f,	// (0x00010961) list_highlight_pane_cp21_ParamLimits

0xbcbf,	// (0x00018a11) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbcce,	// (0x00018a20) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa9f,	// (0x000177f1) list_single_2graphic_im_pane_ParamLimits

0xaa9f,	// (0x000177f1) list_single_2graphic_im_pane

0xccbb,	// (0x00019a0d) list_single_2graphic_im_pane_g1_ParamLimits

0xccbb,	// (0x00019a0d) list_single_2graphic_im_pane_g1

0xcccc,	// (0x00019a1e) list_single_2graphic_im_pane_g2_ParamLimits

0xcccc,	// (0x00019a1e) list_single_2graphic_im_pane_g2

0xccd8,	// (0x00019a2a) list_single_2graphic_im_pane_g3_ParamLimits

0xccd8,	// (0x00019a2a) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001c9b9) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001c9b9) list_single_2graphic_im_pane_g

0xccf8,	// (0x00019a4a) list_single_2graphic_im_pane_t1_ParamLimits

0xccf8,	// (0x00019a4a) list_single_2graphic_im_pane_t1

0xc51b,	// (0x0001926d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc51b,	// (0x0001926d) list_single_graphic_2heading_pane_fp

0xc580,	// (0x000192d2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc580,	// (0x000192d2) list_single_graphic_2heading_pane_fp_g1

0xc531,	// (0x00019283) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc531,	// (0x00019283) list_single_graphic_2heading_pane_fp_g2

0xc53d,	// (0x0001928f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc53d,	// (0x0001928f) list_single_graphic_2heading_pane_fp_g3

0xc549,	// (0x0001929b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc549,	// (0x0001929b) list_single_graphic_2heading_pane_fp_g4

0xc55d,	// (0x000192af) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc55d,	// (0x000192af) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c8e0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c8e0) list_single_graphic_2heading_pane_fp_g

0xcd29,	// (0x00019a7b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd29,	// (0x00019a7b) list_single_graphic_2heading_pane_fp_t1

0xc5b8,	// (0x0001930a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5b8,	// (0x0001930a) list_single_graphic_2heading_pane_fp_t2

0xcd3f,	// (0x00019a91) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd3f,	// (0x00019a91) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001c9c2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001c9c2) list_single_graphic_2heading_pane_fp_t

0xbf4e,	// (0x00018ca0) fep_hwr_write_pane_g5_ParamLimits

0xbf4e,	// (0x00018ca0) fep_hwr_write_pane_g5

0xbf5a,	// (0x00018cac) fep_hwr_write_pane_g6_ParamLimits

0xbf5a,	// (0x00018cac) fep_hwr_write_pane_g6

0xca02,	// (0x00019754) eswt_shell_pane_ParamLimits

0x94d2,	// (0x00016224) bg_popup_window_pane_cp18_ParamLimits

0xa7a2,	// (0x000174f4) heading_pane_cp70

0xcb2c,	// (0x0001987e) popup_eswt_tasktip_window_t1_ParamLimits

0x8efa,	// (0x00015c4c) aid_touch_tab_arrow_left

0x8f09,	// (0x00015c5b) aid_touch_tab_arrow_right

0x7a3b,	// (0x0001478d) title_pane_g3_ParamLimits

0x7a3b,	// (0x0001478d) title_pane_g3

0x3fd0,	// (0x00010d22) set_value_pane_g1

0x63f4,	// (0x00013146) popup_toolbar_trans_pane_ParamLimits

0xcc6f,	// (0x000199c1) aid_size_cell_tb_trans_pane_ParamLimits

0x4051,	// (0x00010da3) bg_tb_trans_pane_ParamLimits

0xcc81,	// (0x000199d3) grid_tb_trans_pane_ParamLimits

0x3d53,	// (0x00010aa5) cont_note_pane_ParamLimits

0x3d53,	// (0x00010aa5) cont_note_pane

0x3ecf,	// (0x00010c21) cont_snote2_single_text_pane_ParamLimits

0x3ecf,	// (0x00010c21) cont_snote2_single_text_pane

0x3ecf,	// (0x00010c21) cont_snote2_single_graphic_pane_ParamLimits

0x3ecf,	// (0x00010c21) cont_snote2_single_graphic_pane

0x9b25,	// (0x00016877) cont_note_wait_pane_ParamLimits

0x9b25,	// (0x00016877) cont_note_wait_pane

0x9b25,	// (0x00016877) cont_note_image_pane_ParamLimits

0x9b25,	// (0x00016877) cont_note_image_pane

0xcd55,	// (0x00019aa7) popup_note2_window_g1_ParamLimits

0xcd55,	// (0x00019aa7) popup_note2_window_g1

0xcd86,	// (0x00019ad8) popup_note2_window_t1_ParamLimits

0xcd86,	// (0x00019ad8) popup_note2_window_t1

0xcdcb,	// (0x00019b1d) popup_note2_window_t2_ParamLimits

0xcdcb,	// (0x00019b1d) popup_note2_window_t2

0xce10,	// (0x00019b62) popup_note2_window_t3_ParamLimits

0xce10,	// (0x00019b62) popup_note2_window_t3

0xce55,	// (0x00019ba7) popup_note2_window_t4_ParamLimits

0xce55,	// (0x00019ba7) popup_note2_window_t4

0x3dd7,	// (0x00010b29) popup_note2_window_t5_ParamLimits

0x3dd7,	// (0x00010b29) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001c9ce) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001c9ce) popup_note2_window_t

0xce84,	// (0x00019bd6) popup_note2_image_window_g1_ParamLimits

0xce84,	// (0x00019bd6) popup_note2_image_window_g1

0xce90,	// (0x00019be2) popup_note2_image_window_g2_ParamLimits

0xce90,	// (0x00019be2) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001c9d9) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001c9d9) popup_note2_image_window_g

0xcea2,	// (0x00019bf4) popup_note2_image_window_t1_ParamLimits

0xcea2,	// (0x00019bf4) popup_note2_image_window_t1

0xceba,	// (0x00019c0c) popup_note2_image_window_t2_ParamLimits

0xceba,	// (0x00019c0c) popup_note2_image_window_t2

0xced2,	// (0x00019c24) popup_note2_image_window_t3_ParamLimits

0xced2,	// (0x00019c24) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001c9de) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001c9de) popup_note2_image_window_t

0x9b33,	// (0x00016885) popup_note2_wait_window_g1_ParamLimits

0x9b33,	// (0x00016885) popup_note2_wait_window_g1

0x9b3f,	// (0x00016891) popup_note2_wait_window_g2_ParamLimits

0x9b3f,	// (0x00016891) popup_note2_wait_window_g2

0x9b4b,	// (0x0001689d) popup_note2_wait_window_g3_ParamLimits

0x9b4b,	// (0x0001689d) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0001c58b) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0001c58b) popup_note2_wait_window_g

0xceee,	// (0x00019c40) popup_note2_wait_window_t1_ParamLimits

0xceee,	// (0x00019c40) popup_note2_wait_window_t1

0xcf0c,	// (0x00019c5e) popup_note2_wait_window_t2_ParamLimits

0xcf0c,	// (0x00019c5e) popup_note2_wait_window_t2

0xcf2a,	// (0x00019c7c) popup_note2_wait_window_t3_ParamLimits

0xcf2a,	// (0x00019c7c) popup_note2_wait_window_t3

0xcf3c,	// (0x00019c8e) popup_note2_wait_window_t4_ParamLimits

0xcf3c,	// (0x00019c8e) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001c9e5) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001c9e5) popup_note2_wait_window_t

0xcf4e,	// (0x00019ca0) wait_bar2_pane_ParamLimits

0xcf4e,	// (0x00019ca0) wait_bar2_pane

0xcf66,	// (0x00019cb8) popup_snote2_single_text_window_g1_ParamLimits

0xcf66,	// (0x00019cb8) popup_snote2_single_text_window_g1

0xcf8e,	// (0x00019ce0) popup_snote2_single_text_window_t1_ParamLimits

0xcf8e,	// (0x00019ce0) popup_snote2_single_text_window_t1

0xcfda,	// (0x00019d2c) popup_snote2_single_text_window_t2_ParamLimits

0xcfda,	// (0x00019d2c) popup_snote2_single_text_window_t2

0xd026,	// (0x00019d78) popup_snote2_single_text_window_t3_ParamLimits

0xd026,	// (0x00019d78) popup_snote2_single_text_window_t3

0xd067,	// (0x00019db9) popup_snote2_single_text_window_t4_ParamLimits

0xd067,	// (0x00019db9) popup_snote2_single_text_window_t4

0xd09d,	// (0x00019def) popup_snote2_single_text_window_t5_ParamLimits

0xd09d,	// (0x00019def) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001c9ee) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001c9ee) popup_snote2_single_text_window_t

0xd0c8,	// (0x00019e1a) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0c8,	// (0x00019e1a) popup_snote2_single_graphic_window_g1

0xd0f0,	// (0x00019e42) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0f0,	// (0x00019e42) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001c9f9) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001c9f9) popup_snote2_single_graphic_window_g

0xd118,	// (0x00019e6a) popup_snote2_single_graphic_window_t1_ParamLimits

0xd118,	// (0x00019e6a) popup_snote2_single_graphic_window_t1

0xd164,	// (0x00019eb6) popup_snote2_single_graphic_window_t2_ParamLimits

0xd164,	// (0x00019eb6) popup_snote2_single_graphic_window_t2

0xd026,	// (0x00019d78) popup_snote2_single_graphic_window_t3_ParamLimits

0xd026,	// (0x00019d78) popup_snote2_single_graphic_window_t3

0xd067,	// (0x00019db9) popup_snote2_single_graphic_window_t4_ParamLimits

0xd067,	// (0x00019db9) popup_snote2_single_graphic_window_t4

0xd09d,	// (0x00019def) popup_snote2_single_graphic_window_t5_ParamLimits

0xd09d,	// (0x00019def) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001c9fe) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001c9fe) popup_snote2_single_graphic_window_t

0xb919,	// (0x0001866b) clock_nsta_pane_cp2_t1

0xb919,	// (0x0001866b) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001c819) clock_nsta_pane_cp2_t

0x4070,	// (0x00010dc2) form_field_data_wide_pane_g1_ParamLimits

0x3fe7,	// (0x00010d39) form_field_data_wide_pane_g2_ParamLimits

0x3fe7,	// (0x00010d39) form_field_data_wide_pane_g2

0x407c,	// (0x00010dce) form_field_data_wide_pane_g3_ParamLimits

0x407c,	// (0x00010dce) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0001c3be) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0001c3be) form_field_data_wide_pane_g

0xb81b,	// (0x0001856d) grid_touch_3_pane_ParamLimits

0xb81b,	// (0x0001856d) grid_touch_3_pane

0xd1b0,	// (0x00019f02) cell_touch_3_pane_ParamLimits

0xd1b0,	// (0x00019f02) cell_touch_3_pane

0xbec2,	// (0x00018c14) cell_touch_3_pane_g1

0xbec2,	// (0x00018c14) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001c89e) cell_touch_3_pane_g

0x3e09,	// (0x00010b5b) cont_query_data_pane

0x3e11,	// (0x00010b63) cont_query_data_pane_cp1

0xd1de,	// (0x00019f30) button_value_adjust_pane_cp7

0xd1e6,	// (0x00019f38) query_popup_pane_cp3

0x4788,	// (0x000114da) bg_popup_sub_pane_cp22_ParamLimits

0x5b3d,	// (0x0001288f) navi_navi_volume_pane_cp2

0x5b55,	// (0x000128a7) popup_side_volume_key_window_g2

0x5b61,	// (0x000128b3) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x0001c454) popup_side_volume_key_window_g

0x5b7b,	// (0x000128cd) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0001c45b) popup_side_volume_key_window_t

0x88db,	// (0x0001562d) popup_side_volume_key_window_ParamLimits

0x812c,	// (0x00014e7e) list_double_graphic_pane_g4_ParamLimits

0x812c,	// (0x00014e7e) list_double_graphic_pane_g4

0xaade,	// (0x00017830) list_single_2heading_msg_pane_ParamLimits

0xaade,	// (0x00017830) list_single_2heading_msg_pane

0xd215,	// (0x00019f67) list_single_2heading_msg_pane_g1_ParamLimits

0xd215,	// (0x00019f67) list_single_2heading_msg_pane_g1

0x7f7f,	// (0x00014cd1) list_single_2heading_msg_pane_g2_ParamLimits

0x7f7f,	// (0x00014cd1) list_single_2heading_msg_pane_g2

0xd221,	// (0x00019f73) list_single_2heading_msg_pane_g3_ParamLimits

0xd221,	// (0x00019f73) list_single_2heading_msg_pane_g3

0xd22d,	// (0x00019f7f) list_single_2heading_msg_pane_g4_ParamLimits

0xd22d,	// (0x00019f7f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001ca09) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001ca09) list_single_2heading_msg_pane_g

0xd245,	// (0x00019f97) list_single_2heading_msg_pane_t1_ParamLimits

0xd245,	// (0x00019f97) list_single_2heading_msg_pane_t1

0xd26d,	// (0x00019fbf) list_single_2heading_msg_pane_t2_ParamLimits

0xd26d,	// (0x00019fbf) list_single_2heading_msg_pane_t2

0xd29c,	// (0x00019fee) list_single_2heading_msg_pane_t3_ParamLimits

0xd29c,	// (0x00019fee) list_single_2heading_msg_pane_t3

0xd2d5,	// (0x0001a027) list_single_2heading_msg_pane_t4_ParamLimits

0xd2d5,	// (0x0001a027) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001ca12) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001ca12) list_single_2heading_msg_pane_t

0x3bbd,	// (0x0001090f) title_pane_g4_ParamLimits

0x3bbd,	// (0x0001090f) title_pane_g4

0x594c,	// (0x0001269e) title_pane_stacon_g3_ParamLimits

0x594c,	// (0x0001269e) title_pane_stacon_g3

0xccec,	// (0x00019a3e) list_single_2graphic_im_pane_g4_ParamLimits

0xccec,	// (0x00019a3e) list_single_2graphic_im_pane_g4

0xa56c,	// (0x000172be) popup_side_volume_key_window_cp

0xae5b,	// (0x00017bad) main_idle_act2_pane_t1

0x6550,	// (0x000132a2) toolbar_button_pane_g10

0x7f69,	// (0x00014cbb) popup_toolbar_window_cp1

0xb90a,	// (0x0001865c) clock_nsta_pane_cp_t1

0xb90a,	// (0x0001865c) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001c814) clock_nsta_pane_cp_t

0x5b3d,	// (0x0001288f) navi_navi_volume_pane_cp2_ParamLimits

0x5b49,	// (0x0001289b) popup_side_volume_key_window_g1_ParamLimits

0x5b55,	// (0x000128a7) popup_side_volume_key_window_g2_ParamLimits

0x5b61,	// (0x000128b3) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x0001c454) popup_side_volume_key_window_g_ParamLimits

0x6a06,	// (0x00013758) fep_hwr_aid_pane

0x6aad,	// (0x000137ff) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf1e,	// (0x00018c70) fep_hwr_top_pane_g1_ParamLimits

0xbf30,	// (0x00018c82) fep_hwr_top_pane_g2_ParamLimits

0x6acd,	// (0x0001381f) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001c869) fep_hwr_top_pane_g_ParamLimits

0x6ae2,	// (0x00013834) fep_hwr_top_text_pane_ParamLimits

0xa32f,	// (0x00017081) aid_touch_tab_arrow_arrow_2

0xa338,	// (0x0001708a) aid_touch_tab_arrow_left_2

0x6a1a,	// (0x0001376c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a51,	// (0x000137a3) fep_hwr_prediction_pane

0xc089,	// (0x00018ddb) fep_vkb_prediction_pane

0xc186,	// (0x00018ed8) fep_vkb_side_pane_g3_ParamLimits

0xc186,	// (0x00018ed8) fep_vkb_side_pane_g3

0x6c5d,	// (0x000139af) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6cc9,	// (0x00013a1b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6cd6,	// (0x00013a28) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001c918) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6e05,	// (0x00013b57) fep_hwr_prediction_pane_g1

0x6e0f,	// (0x00013b61) fep_hwr_prediction_pane_g2

0x6e17,	// (0x00013b69) fep_hwr_prediction_pane_g3

0x6e1f,	// (0x00013b71) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001ca1b) fep_hwr_prediction_pane_g

0xd2fa,	// (0x0001a04c) fep_vkb_prediction_pane_g1

0xd304,	// (0x0001a056) fep_vkb_prediction_pane_g2

0xd30c,	// (0x0001a05e) fep_vkb_prediction_pane_g3

0xd314,	// (0x0001a066) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001ca24) fep_vkb_prediction_pane_g

0x683e,	// (0x00013590) slider_set_pane_g3

0x6852,	// (0x000135a4) slider_set_pane_g4

0x686a,	// (0x000135bc) slider_set_pane_g5

0x683e,	// (0x00013590) slider_set_pane_g6

0x6880,	// (0x000135d2) slider_set_pane_g7

0xa9cd,	// (0x0001771f) slider_form_pane_g3

0xa9d6,	// (0x00017728) slider_form_pane_g4

0xa9de,	// (0x00017730) slider_form_pane_g5

0xa9cd,	// (0x0001771f) slider_form_pane_g6

0xa9e6,	// (0x00017738) slider_form_pane_g7

0xb13e,	// (0x00017e90) slider_set_pane_vc_g3

0xb147,	// (0x00017e99) slider_set_pane_vc_g4

0xb150,	// (0x00017ea2) slider_set_pane_vc_g5

0xb13e,	// (0x00017e90) slider_set_pane_vc_g6

0xb159,	// (0x00017eab) slider_set_pane_vc_g7

0xb5ee,	// (0x00018340) slider_form_pane_vc_g1

0xb5f7,	// (0x00018349) slider_form_pane_vc_g2

0xb600,	// (0x00018352) slider_form_pane_vc_g3

0xb5ee,	// (0x00018340) slider_form_pane_vc_g4

0xb609,	// (0x0001835b) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001c7e6) slider_form_pane_vc_g

0x5621,	// (0x00012373) main_idle_act3_pane

0xd31c,	// (0x0001a06e) ai3_links_pane

0xd325,	// (0x0001a077) popup_ai3_data_window_ParamLimits

0xd325,	// (0x0001a077) popup_ai3_data_window

0x3a10,	// (0x00010762) grid_ai3_links_pane

0xd33d,	// (0x0001a08f) cell_ai3_links_pane_ParamLimits

0xd33d,	// (0x0001a08f) cell_ai3_links_pane

0xd355,	// (0x0001a0a7) bg_popup_sub_pane_cp11

0xd362,	// (0x0001a0b4) cell_ai3_links_pane_g1

0x3a10,	// (0x00010762) bg_popup_sub_pane_cp12

0xd387,	// (0x0001a0d9) heading_ai3_data_pane

0xd38f,	// (0x0001a0e1) list_ai3_gene_pane

0xd39b,	// (0x0001a0ed) popup_ai3_data_window_g1

0xd3a3,	// (0x0001a0f5) heading_ai3_data_pane_g1

0xd3ab,	// (0x0001a0fd) heading_ai3_data_pane_t1

0xd3b9,	// (0x0001a10b) list_double_ai3_gene_pane_ParamLimits

0xd3b9,	// (0x0001a10b) list_double_ai3_gene_pane

0xd3c6,	// (0x0001a118) list_single_ai3_gene_pane_ParamLimits

0xd3c6,	// (0x0001a118) list_single_ai3_gene_pane

0xbe87,	// (0x00018bd9) list_highlight_pane_cp7_ParamLimits

0xbe87,	// (0x00018bd9) list_highlight_pane_cp7

0xd3d3,	// (0x0001a125) list_single_a13_gene_pane_t1_ParamLimits

0xd3d3,	// (0x0001a125) list_single_a13_gene_pane_t1

0xd3ea,	// (0x0001a13c) list_single_ai3_gene_pane_g1

0xd3f3,	// (0x0001a145) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001ca2d) list_single_ai3_gene_pane_g

0xd3fb,	// (0x0001a14d) list_double_ai3_gene_pane_g1_ParamLimits

0xd3fb,	// (0x0001a14d) list_double_ai3_gene_pane_g1

0xd407,	// (0x0001a159) list_double_ai3_gene_pane_t1_ParamLimits

0xd407,	// (0x0001a159) list_double_ai3_gene_pane_t1

0xd423,	// (0x0001a175) list_double_ai3_gene_pane_t2_ParamLimits

0xd423,	// (0x0001a175) list_double_ai3_gene_pane_t2

0xd438,	// (0x0001a18a) list_double_ai3_gene_pane_t3_ParamLimits

0xd438,	// (0x0001a18a) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001ca32) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001ca32) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd1f7,	// (0x00019f49) aid_size_min_col_2

0xd201,	// (0x00019f53) aid_size_min_msg_ParamLimits

0xd201,	// (0x00019f53) aid_size_min_msg

0xc286,	// (0x00018fd8) fep_vkb_top_text_pane_g2_ParamLimits

0xc286,	// (0x00018fd8) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001c899) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001c899) fep_vkb_top_text_pane_g

0x5621,	// (0x00012373) main_hc_apps_shell_pane

0xd455,	// (0x0001a1a7) grid_hc_apps_pane_ParamLimits

0xd455,	// (0x0001a1a7) grid_hc_apps_pane

0xd464,	// (0x0001a1b6) list_hc_apps_pane

0xd46c,	// (0x0001a1be) scroll_pane_cp37_ParamLimits

0xd46c,	// (0x0001a1be) scroll_pane_cp37

0xd478,	// (0x0001a1ca) cell_hc_apps_pane_ParamLimits

0xd478,	// (0x0001a1ca) cell_hc_apps_pane

0xd526,	// (0x0001a278) cell_hc_apps_pane_g1_ParamLimits

0xd526,	// (0x0001a278) cell_hc_apps_pane_g1

0xd557,	// (0x0001a2a9) cell_hc_apps_pane_g2_ParamLimits

0xd557,	// (0x0001a2a9) cell_hc_apps_pane_g2

0xd573,	// (0x0001a2c5) cell_hc_apps_pane_g3_ParamLimits

0xd573,	// (0x0001a2c5) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001ca39) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001ca39) cell_hc_apps_pane_g

0xd595,	// (0x0001a2e7) cell_hc_apps_pane_t1_ParamLimits

0xd595,	// (0x0001a2e7) cell_hc_apps_pane_t1

0x3d53,	// (0x00010aa5) grid_highlight_pane_cp10_ParamLimits

0x3d53,	// (0x00010aa5) grid_highlight_pane_cp10

0xd5d5,	// (0x0001a327) list_single_hc_apps_pane_ParamLimits

0xd5d5,	// (0x0001a327) list_single_hc_apps_pane

0xd638,	// (0x0001a38a) list_single_hc_apps_pane_g1

0xd651,	// (0x0001a3a3) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001ca40) list_single_hc_apps_pane_g

0xd66a,	// (0x0001a3bc) list_single_hc_apps_pane_g2_copy1

0xd686,	// (0x0001a3d8) list_single_hc_apps_pane_t1

0x3c0f,	// (0x00010961) bg_set_opt_pane_cp_ParamLimits

0x5874,	// (0x000125c6) setting_slider_pane_t1_ParamLimits

0x588d,	// (0x000125df) setting_slider_pane_t2_ParamLimits

0x58a7,	// (0x000125f9) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c2b0) setting_slider_pane_t_ParamLimits

0x58bf,	// (0x00012611) slider_set_pane_ParamLimits

0x5ddd,	// (0x00012b2f) control_pane_g5_ParamLimits

0x5ddd,	// (0x00012b2f) control_pane_g5

0xa820,	// (0x00017572) slider_set_pane_g1_ParamLimits

0x6832,	// (0x00013584) slider_set_pane_g2_ParamLimits

0x683e,	// (0x00013590) slider_set_pane_g3_ParamLimits

0x6852,	// (0x000135a4) slider_set_pane_g4_ParamLimits

0x686a,	// (0x000135bc) slider_set_pane_g5_ParamLimits

0x683e,	// (0x00013590) slider_set_pane_g6_ParamLimits

0x6880,	// (0x000135d2) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0001c6a7) slider_set_pane_g_ParamLimits

0x89b9,	// (0x0001570b) navi_icon_text_pane_ParamLimits

0x8ebb,	// (0x00015c0d) aid_fill_nsta_2_ParamLimits

0x8efa,	// (0x00015c4c) aid_touch_tab_arrow_left_ParamLimits

0x8f09,	// (0x00015c5b) aid_touch_tab_arrow_right_ParamLimits

0x8f76,	// (0x00015cc8) clock_nsta_pane_ParamLimits

0xa311,	// (0x00017063) navi_icon_pane_g1_ParamLimits

0xa31d,	// (0x0001706f) navi_text_pane_t1_ParamLimits

0xba1a,	// (0x0001876c) navi_icon_text_pane_g1_ParamLimits

0xba26,	// (0x00018778) navi_icon_text_pane_t1_ParamLimits

0xd638,	// (0x0001a38a) list_single_hc_apps_pane_g1_ParamLimits

0xd651,	// (0x0001a3a3) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001ca40) list_single_hc_apps_pane_g_ParamLimits

0xd66a,	// (0x0001a3bc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd686,	// (0x0001a3d8) list_single_hc_apps_pane_t1_ParamLimits

0x577e,	// (0x000124d0) popup_toolbar2_fixed_window_ParamLimits

0x577e,	// (0x000124d0) popup_toolbar2_fixed_window

0x63ea,	// (0x0001313c) popup_toolbar2_float_window

0x3a10,	// (0x00010762) bg_popup_sub_pane_cp27

0xd6b4,	// (0x0001a406) grid_toolbar2_float_pane

0x3a10,	// (0x00010762) bg_popup_sub_pane_cp26

0xd6b4,	// (0x0001a406) grid_toolbar2_fixed_pane

0xd6bc,	// (0x0001a40e) cell_toolbar2_fixed_pane_ParamLimits

0xd6bc,	// (0x0001a40e) cell_toolbar2_fixed_pane

0xd6cc,	// (0x0001a41e) cell_toolbar2_fixed_pane_g1

0x62bc,	// (0x0001300e) toolbar2_fixed_button_pane

0x93b2,	// (0x00016104) toolbar2_fixed_button_pane_g1

0x93c2,	// (0x00016114) toolbar2_fixed_button_pane_g2

0x93ba,	// (0x0001610c) toolbar2_fixed_button_pane_g3

0x93d2,	// (0x00016124) toolbar2_fixed_button_pane_g4

0x93ca,	// (0x0001611c) toolbar2_fixed_button_pane_g5

0x93da,	// (0x0001612c) toolbar2_fixed_button_pane_g6

0x93e2,	// (0x00016134) toolbar2_fixed_button_pane_g7

0x93f2,	// (0x00016144) toolbar2_fixed_button_pane_g8

0x93ea,	// (0x0001613c) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0001c5a9) toolbar2_fixed_button_pane_g

0xd6d5,	// (0x0001a427) cell_toolbar2_float_pane_ParamLimits

0xd6d5,	// (0x0001a427) cell_toolbar2_float_pane

0xd6e6,	// (0x0001a438) cell_toolbar2_float_pane_g1

0x62bc,	// (0x0001300e) toolbar2_fixed_button_pane_cp

0xbff0,	// (0x00018d42) fep_vkb_accented_list_pane_ParamLimits

0xbff0,	// (0x00018d42) fep_vkb_accented_list_pane

0x6c3d,	// (0x0001398f) bg_popup_fep_shadow_pane_g9

0x8b39,	// (0x0001588b) bg_popup_fep_shadow_pane_cp3

0x41b9,	// (0x00010f0b) list_accented_list_pane

0xd6ef,	// (0x0001a441) list_single_accented_list_pane_ParamLimits

0xd6ef,	// (0x0001a441) list_single_accented_list_pane

0x8b39,	// (0x0001588b) list_highlight_pane_cp10

0xd700,	// (0x0001a452) list_single_accented_list_pane_t1

0x633a,	// (0x0001308c) popup_slider_window_ParamLimits

0x633a,	// (0x0001308c) popup_slider_window

0xd1ee,	// (0x00019f40) aid_indentation_list_msg

0xd7be,	// (0x0001a510) bg_popup_window_pane_cp19

0xd826,	// (0x0001a578) popup_slider_window_g1

0xd842,	// (0x0001a594) popup_slider_window_g2

0xd85e,	// (0x0001a5b0) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001ca45) popup_slider_window_g

0xd8c4,	// (0x0001a616) popup_slider_window_t1

0xd938,	// (0x0001a68a) small_volume_slider_vertical_pane

0xbec2,	// (0x00018c14) small_volume_slider_vertical_pane_g1

0xbec2,	// (0x00018c14) small_volume_slider_vertical_pane_g2

0xd954,	// (0x0001a6a6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001ca57) small_volume_slider_vertical_pane_g

0x5544,	// (0x00012296) area_side_right_pane_ParamLimits

0x5544,	// (0x00012296) area_side_right_pane

0x6e27,	// (0x00013b79) aid_size_side_button_ParamLimits

0x6e27,	// (0x00013b79) aid_size_side_button

0x6e3b,	// (0x00013b8d) grid_sctrl_middle_pane_ParamLimits

0x6e3b,	// (0x00013b8d) grid_sctrl_middle_pane

0x6e5a,	// (0x00013bac) sctrl_sk_bottom_pane

0x6e6b,	// (0x00013bbd) sctrl_sk_top_pane

0x6e7d,	// (0x00013bcf) aid_touch_sctrl_top

0x6e8a,	// (0x00013bdc) bg_sctrl_sk_pane_ParamLimits

0x6e8a,	// (0x00013bdc) bg_sctrl_sk_pane

0x6e98,	// (0x00013bea) sctrl_sk_top_pane_g1

0x6ea5,	// (0x00013bf7) sctrl_sk_top_pane_t1

0x6e7d,	// (0x00013bcf) aid_touch_sctrl_bottom

0x6e8a,	// (0x00013bdc) bg_sctrl_sk_pane_cp_ParamLimits

0x6e8a,	// (0x00013bdc) bg_sctrl_sk_pane_cp

0x6ec0,	// (0x00013c12) sctrl_sk_bottom_pane_g1

0x6ea5,	// (0x00013bf7) sctrl_sk_bottom_pane_t1

0x6ec9,	// (0x00013c1b) cell_sctrl_middle_pane_ParamLimits

0x6ec9,	// (0x00013c1b) cell_sctrl_middle_pane

0x6ee4,	// (0x00013c36) aid_touch_sctrl_middle_ParamLimits

0x6ee4,	// (0x00013c36) aid_touch_sctrl_middle

0x6ef6,	// (0x00013c48) bg_sctrl_middle_pane_ParamLimits

0x6ef6,	// (0x00013c48) bg_sctrl_middle_pane

0x6c5d,	// (0x000139af) cell_sctrl_middle_pane_g1_ParamLimits

0x6c5d,	// (0x000139af) cell_sctrl_middle_pane_g1

0x6f04,	// (0x00013c56) cell_sctrl_middle_pane_g2_ParamLimits

0x6f04,	// (0x00013c56) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001ca63) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001ca63) cell_sctrl_middle_pane_g

0x93b2,	// (0x00016104) bg_sctrl_middle_pane_g1

0x93ba,	// (0x0001610c) bg_sctrl_middle_pane_g2

0x93c2,	// (0x00016114) bg_sctrl_middle_pane_g3

0x93ca,	// (0x0001611c) bg_sctrl_middle_pane_g4

0x93d2,	// (0x00016124) bg_sctrl_middle_pane_g5

0x93da,	// (0x0001612c) bg_sctrl_middle_pane_g6

0x93e2,	// (0x00016134) bg_sctrl_middle_pane_g7

0x93ea,	// (0x0001613c) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001ca68) bg_sctrl_middle_pane_g

0x93f2,	// (0x00016144) bg_sctrl_middle_pane_g8_copy1

0x93b2,	// (0x00016104) bg_sctrl_sk_pane_g1

0x93c2,	// (0x00016114) bg_sctrl_sk_pane_g2

0x93ba,	// (0x0001610c) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0001c5a9) bg_sctrl_sk_pane_g

0x3f1d,	// (0x00010c6f) aid_size_touch_scroll_bar

0x93d2,	// (0x00016124) bg_sctrl_sk_pane_g4

0x93ca,	// (0x0001611c) bg_sctrl_sk_pane_g5

0x93da,	// (0x0001612c) bg_sctrl_sk_pane_g6

0x93e2,	// (0x00016134) bg_sctrl_sk_pane_g7

0x93f2,	// (0x00016144) bg_sctrl_sk_pane_g8

0x93ea,	// (0x0001613c) bg_sctrl_sk_pane_g9

0x5fa3,	// (0x00012cf5) popup_fep_china_hwr2_fs_candidate_window

0x5fad,	// (0x00012cff) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5fad,	// (0x00012cff) popup_fep_china_hwr2_fs_control_window

0x6c5d,	// (0x000139af) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001ca5e) sctrl_sk_top_pane_g

0xd97e,	// (0x0001a6d0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd97e,	// (0x0001a6d0) aid_fep_china_hwr2_fs_cell

0xd990,	// (0x0001a6e2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd990,	// (0x0001a6e2) bg_popup_fep_shadow_pane_cp4

0xd9a7,	// (0x0001a6f9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9a7,	// (0x0001a6f9) bg_popup_fep_shadow_pane_cp5

0xd9b9,	// (0x0001a70b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9b9,	// (0x0001a70b) popup_fep_china_hwr2_fs_control_bar_grid

0xd9c9,	// (0x0001a71b) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9d1,	// (0x0001a723) aid_fep_china_hwr2_fs_candi_cell

0x3a10,	// (0x00010762) bg_popup_fep_shadow_pane_cp6

0xd9db,	// (0x0001a72d) popup_fep_china_hwr2_fs_candidate_grid

0xd9e5,	// (0x0001a737) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9e5,	// (0x0001a737) cell_fep_china_hwr2_fs_funtion_grid

0xbec2,	// (0x00018c14) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9fd,	// (0x0001a74f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9fd,	// (0x0001a74f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda0b,	// (0x0001a75d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda0b,	// (0x0001a75d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001ca79) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001ca79) cell_fep_china_hwr2_fs_funtion_grid_g

0xda21,	// (0x0001a773) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda21,	// (0x0001a773) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda36,	// (0x0001a788) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda36,	// (0x0001a788) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001ca7e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001ca7e) cell_fep_china_hwr2_fs_funtion_grid_t

0xda52,	// (0x0001a7a4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda5a,	// (0x0001a7ac) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda62,	// (0x0001a7b4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001ca83) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda6a,	// (0x0001a7bc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda6a,	// (0x0001a7bc) cell_fep_china_hwr2_fs_candidate_grid

0xda83,	// (0x0001a7d5) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda8b,	// (0x0001a7dd) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbec2,	// (0x00018c14) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbec2,	// (0x00018c14) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001c89e) cell_fep_china_hwr2_fs_candidate_grid_g

0xda93,	// (0x0001a7e5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f89,	// (0x00015cdb) clock_nsta_pane_cp_24_ParamLimits

0x8f89,	// (0x00015cdb) clock_nsta_pane_cp_24

0x9007,	// (0x00015d59) indicator_nsta_pane_cp_24_ParamLimits

0x9007,	// (0x00015d59) indicator_nsta_pane_cp_24

0xa18d,	// (0x00016edf) heading_pane_g1

0x0001,

0xf8bc,	// (0x0001c60e) heading_pane_g

0xaca4,	// (0x000179f6) grid_sct_catagory_button_pane

0xacd4,	// (0x00017a26) scroll_pane_cp5_ParamLimits

0xba68,	// (0x000187ba) button_value_adjust_pane_cp5_ParamLimits

0xba68,	// (0x000187ba) button_value_adjust_pane_cp5

0xbb62,	// (0x000188b4) form2_midp_time_pane_ParamLimits

0xdaa1,	// (0x0001a7f3) cell_sct_catagory_button_pane_ParamLimits

0xdaa1,	// (0x0001a7f3) cell_sct_catagory_button_pane

0xbe87,	// (0x00018bd9) bg_button_pane_cp01_ParamLimits

0xbe87,	// (0x00018bd9) bg_button_pane_cp01

0xbec2,	// (0x00018c14) cell_sct_catagory_button_pane_g1

0x6379,	// (0x000130cb) popup_tb_extension_window

0xdab3,	// (0x0001a805) aid_size_cell_ext_ParamLimits

0xdab3,	// (0x0001a805) aid_size_cell_ext

0x3d53,	// (0x00010aa5) bg_tb_trans_pane_cp1_ParamLimits

0x3d53,	// (0x00010aa5) bg_tb_trans_pane_cp1

0xdad3,	// (0x0001a825) grid_tb_ext_pane_ParamLimits

0xdad3,	// (0x0001a825) grid_tb_ext_pane

0xdb03,	// (0x0001a855) cell_tb_ext_pane_ParamLimits

0xdb03,	// (0x0001a855) cell_tb_ext_pane

0xdb1a,	// (0x0001a86c) cell_tb_ext_pane_g1_ParamLimits

0xdb1a,	// (0x0001a86c) cell_tb_ext_pane_g1

0xdb37,	// (0x0001a889) cell_tb_ext_pane_t1

0x3d53,	// (0x00010aa5) list_highlight_pane_cp11_ParamLimits

0x3d53,	// (0x00010aa5) list_highlight_pane_cp11

0x579d,	// (0x000124ef) popup_uni_indicator_window_ParamLimits

0x579d,	// (0x000124ef) popup_uni_indicator_window

0x4051,	// (0x00010da3) bg_popup_sub_pane_cp14

0xdb53,	// (0x0001a8a5) list_uniindi_pane

0xdb5f,	// (0x0001a8b1) uniindi_top_pane

0x3d53,	// (0x00010aa5) bg_uniindi_top_pane

0xdb7e,	// (0x0001a8d0) uniindi_top_pane_g1

0xdb94,	// (0x0001a8e6) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001ca8a) uniindi_top_pane_g

0xdbbe,	// (0x0001a910) uniindi_top_pane_t1

0xdbe8,	// (0x0001a93a) list_single_uniindi_pane_ParamLimits

0xdbe8,	// (0x0001a93a) list_single_uniindi_pane

0xbec2,	// (0x00018c14) bg_uniindi_top_pane_g1

0xdbfa,	// (0x0001a94c) list_single_uniindi_pane_g1

0xdc0d,	// (0x0001a95f) list_single_uniindi_pane_t1

0x5621,	// (0x00012373) control_bg_pane

0xdc32,	// (0x0001a984) bg_sctrl_sk_pane_cp1

0xdc3b,	// (0x0001a98d) bg_sctrl_sk_pane_cp2

0xdc44,	// (0x0001a996) control_bg_pane_g1

0xdc4d,	// (0x0001a99f) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001ca93) control_bg_pane_g

0xb8be,	// (0x00018610) cell_indicator_nsta_pane_g1_ParamLimits

0xb8cc,	// (0x0001861e) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001c802) cell_indicator_nsta_pane_g_ParamLimits

0xbbea,	// (0x0001893c) form2_midp_time_pane_t1_ParamLimits

0x5f0d,	// (0x00012c5f) main_idle_act4_pane_ParamLimits

0x5f0d,	// (0x00012c5f) main_idle_act4_pane

0x6379,	// (0x000130cb) popup_tb_extension_window_ParamLimits

0xdaf3,	// (0x0001a845) tb_ext_find_pane_ParamLimits

0xdaf3,	// (0x0001a845) tb_ext_find_pane

0xdc56,	// (0x0001a9a8) ai_gene_pane_1_cp1

0x8c84,	// (0x000159d6) ai_gene_pane_2_cp1

0xdc5e,	// (0x0001a9b0) list_single_idle_plugin_calendar_pane

0xdc67,	// (0x0001a9b9) list_single_idle_plugin_notification_pane

0xdc70,	// (0x0001a9c2) list_single_idle_plugin_player_pane

0xdc79,	// (0x0001a9cb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc79,	// (0x0001a9cb) list_single_idle_plugin_shortcut_pane

0xdc9b,	// (0x0001a9ed) main_idle_act4_pane_t1

0xdcad,	// (0x0001a9ff) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001ca98) main_idle_act4_pane_t

0xdcbf,	// (0x0001aa11) middle_sk_idle_act4_pane_ParamLimits

0xdcbf,	// (0x0001aa11) middle_sk_idle_act4_pane

0xdcd5,	// (0x0001aa27) popup_clock_digital_analogue_window_cp2

0xdcef,	// (0x0001aa41) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcef,	// (0x0001aa41) shortcut_wheel_idle_act4_pane

0xbec2,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g1

0xbec2,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g2

0xbec2,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g3

0xbec2,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g4

0xbec2,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g5

0xdd03,	// (0x0001aa55) shortcut_wheel_idle_act4_pane_g6

0xdd0b,	// (0x0001aa5d) shortcut_wheel_idle_act4_pane_g7

0xdd13,	// (0x0001aa65) shortcut_wheel_idle_act4_pane_g8

0xdd1b,	// (0x0001aa6d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001ca9d) shortcut_wheel_idle_act4_pane_g

0xc132,	// (0x00018e84) middle_sk_idle_act4_pane_g1_ParamLimits

0xc132,	// (0x00018e84) middle_sk_idle_act4_pane_g1

0xdd7f,	// (0x0001aad1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd7f,	// (0x0001aad1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001cac0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001cac0) middle_sk_idle_act4_pane_g

0xdd8b,	// (0x0001aadd) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd8b,	// (0x0001aadd) middle_sk_idle_act4_pane_t1

0xdda8,	// (0x0001aafa) grid_ai_shortcut_pane_ParamLimits

0xdda8,	// (0x0001aafa) grid_ai_shortcut_pane

0xddc1,	// (0x0001ab13) list_highlight_pane_cp16_ParamLimits

0xddc1,	// (0x0001ab13) list_highlight_pane_cp16

0xddce,	// (0x0001ab20) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddce,	// (0x0001ab20) list_single_idle_plugin_shortcut_pane_g1

0xddda,	// (0x0001ab2c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddda,	// (0x0001ab2c) list_single_idle_plugin_shortcut_pane_g2

0xddf2,	// (0x0001ab44) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddf2,	// (0x0001ab44) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001cac5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001cac5) list_single_idle_plugin_shortcut_pane_g

0xde05,	// (0x0001ab57) cell_ai_shortcut_pane_ParamLimits

0xde05,	// (0x0001ab57) cell_ai_shortcut_pane

0xde29,	// (0x0001ab7b) cell_ai_shortcut_pane_g1_ParamLimits

0xde29,	// (0x0001ab7b) cell_ai_shortcut_pane_g1

0xdc56,	// (0x0001a9a8) ai_gene_pane_1_cp2

0xde4b,	// (0x0001ab9d) ai_gene_pane_2_cp2

0xde53,	// (0x0001aba5) list_highlight_pane_cp15

0xde5c,	// (0x0001abae) list_single_idle_plugin_calendar_pane_g1

0xde53,	// (0x0001aba5) list_highlight_pane_cp17

0xde64,	// (0x0001abb6) list_single_idle_plugin_calendar_pane_g1_copy1

0xde6c,	// (0x0001abbe) list_single_idle_plugin_player_pane_g1

0xaefd,	// (0x00017c4f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001cacc) list_single_idle_plugin_player_pane_g

0xde74,	// (0x0001abc6) list_single_idle_plugin_player_pane_t1

0xde82,	// (0x0001abd4) list_single_idle_plugin_player_pane_t2

0xde90,	// (0x0001abe2) list_single_idle_plugin_player_pane_t3

0xde9e,	// (0x0001abf0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001cad1) list_single_idle_plugin_player_pane_t

0xdeac,	// (0x0001abfe) wait_bar_pane_cp15

0xdeb4,	// (0x0001ac06) grid_ai_notification_pane

0xaefd,	// (0x00017c4f) list_single_idle_plugin_notification_pane_g1

0xdebd,	// (0x0001ac0f) cell_ai_notification_pane_ParamLimits

0xdebd,	// (0x0001ac0f) cell_ai_notification_pane

0xdeca,	// (0x0001ac1c) cell_ai_notification_pane_g1

0xded2,	// (0x0001ac24) cell_ai_notification_pane_t1

0xdee0,	// (0x0001ac32) tb_ext_find_button_pane

0xdee8,	// (0x0001ac3a) tb_ext_find_pane_g1

0xdef0,	// (0x0001ac42) tb_ext_find_pane_t1

0x46a5,	// (0x000113f7) tb_ext_find_button_pane_g1

0xdefe,	// (0x0001ac50) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001cada) tb_ext_find_button_pane_g

0xdc9b,	// (0x0001a9ed) main_idle_act4_pane_t1_ParamLimits

0xdcad,	// (0x0001a9ff) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001ca98) main_idle_act4_pane_t_ParamLimits

0xdcd5,	// (0x0001aa27) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdce3,	// (0x0001aa35) sat_plugin_idle_act4_pane_ParamLimits

0xdce3,	// (0x0001aa35) sat_plugin_idle_act4_pane

0xdf07,	// (0x0001ac59) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf07,	// (0x0001ac59) sat_plugin_idle_act4_pane_t1

0xdf1a,	// (0x0001ac6c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf1a,	// (0x0001ac6c) sat_plugin_idle_act4_pane_t2

0xdf2d,	// (0x0001ac7f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf2d,	// (0x0001ac7f) sat_plugin_idle_act4_pane_t3

0xdf40,	// (0x0001ac92) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf40,	// (0x0001ac92) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001cadf) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001cadf) sat_plugin_idle_act4_pane_t

0x56e6,	// (0x00012438) popup_battery_window_ParamLimits

0x56e6,	// (0x00012438) popup_battery_window

0x3d53,	// (0x00010aa5) bg_popup_sub_pane_cp25_ParamLimits

0x3d53,	// (0x00010aa5) bg_popup_sub_pane_cp25

0xdf53,	// (0x0001aca5) popup_battery_window_g1_ParamLimits

0xdf53,	// (0x0001aca5) popup_battery_window_g1

0xdf5f,	// (0x0001acb1) popup_battery_window_t1_ParamLimits

0xdf5f,	// (0x0001acb1) popup_battery_window_t1

0xdf71,	// (0x0001acc3) popup_battery_window_t2_ParamLimits

0xdf71,	// (0x0001acc3) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001cae8) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001cae8) popup_battery_window_t

0x8b4d,	// (0x0001589f) midp_canvas_pane_ParamLimits

0x8bc6,	// (0x00015918) midp_keypad_pane_ParamLimits

0x8bc6,	// (0x00015918) midp_keypad_pane

0x8e61,	// (0x00015bb3) main_midp_pane_ParamLimits

0xb928,	// (0x0001867a) signal_pane_g2_cp_ParamLimits

0xdf8e,	// (0x0001ace0) aid_size_cell_midp_keypad_ParamLimits

0xdf8e,	// (0x0001ace0) aid_size_cell_midp_keypad

0xdfa8,	// (0x0001acfa) midp_keyp_game_grid_pane_ParamLimits

0xdfa8,	// (0x0001acfa) midp_keyp_game_grid_pane

0xdfc8,	// (0x0001ad1a) midp_keyp_rocker_pane_ParamLimits

0xdfc8,	// (0x0001ad1a) midp_keyp_rocker_pane

0xe001,	// (0x0001ad53) midp_keyp_sk_left_pane_ParamLimits

0xe001,	// (0x0001ad53) midp_keyp_sk_left_pane

0xe05b,	// (0x0001adad) midp_keyp_sk_right_pane_ParamLimits

0xe05b,	// (0x0001adad) midp_keyp_sk_right_pane

0x3a10,	// (0x00010762) bg_button_pane_cp03

0xe0b5,	// (0x0001ae07) midp_keyp_sk_left_pane_g1

0x3a10,	// (0x00010762) bg_button_pane_cp04

0xe0b5,	// (0x0001ae07) midp_keyp_sk_right_pane_g1

0xbec2,	// (0x00018c14) midp_keyp_rocker_pane_g1

0xe0be,	// (0x0001ae10) keyp_game_cell_pane_ParamLimits

0xe0be,	// (0x0001ae10) keyp_game_cell_pane

0x3a10,	// (0x00010762) bg_button_pane_cp02

0xe0d1,	// (0x0001ae23) keyp_game_cell_pane_g1

0x571c,	// (0x0001246e) popup_fep_vkb2_window_ParamLimits

0x571c,	// (0x0001246e) popup_fep_vkb2_window

0x6f22,	// (0x00013c74) aid_size_cell_vkb2_ParamLimits

0x6f22,	// (0x00013c74) aid_size_cell_vkb2

0x6f76,	// (0x00013cc8) popup_fep_vkb2_window_g1_ParamLimits

0x6f76,	// (0x00013cc8) popup_fep_vkb2_window_g1

0x6fbe,	// (0x00013d10) vkb2_area_bottom_pane_ParamLimits

0x6fbe,	// (0x00013d10) vkb2_area_bottom_pane

0x700a,	// (0x00013d5c) vkb2_area_keypad_pane_ParamLimits

0x700a,	// (0x00013d5c) vkb2_area_keypad_pane

0x704c,	// (0x00013d9e) vkb2_area_top_pane_ParamLimits

0x704c,	// (0x00013d9e) vkb2_area_top_pane

0x70c6,	// (0x00013e18) vkb2_top_entry_pane_ParamLimits

0x70c6,	// (0x00013e18) vkb2_top_entry_pane

0x70f0,	// (0x00013e42) vkb2_top_grid_left_pane_ParamLimits

0x70f0,	// (0x00013e42) vkb2_top_grid_left_pane

0x710e,	// (0x00013e60) vkb2_top_grid_right_pane_ParamLimits

0x710e,	// (0x00013e60) vkb2_top_grid_right_pane

0x712c,	// (0x00013e7e) vkb2_cell_keypad_pane_ParamLimits

0x712c,	// (0x00013e7e) vkb2_cell_keypad_pane

0x71fd,	// (0x00013f4f) vkb2_area_bottom_grid_pane_ParamLimits

0x71fd,	// (0x00013f4f) vkb2_area_bottom_grid_pane

0x7223,	// (0x00013f75) vkb2_area_bottom_pane_g1_ParamLimits

0x7223,	// (0x00013f75) vkb2_area_bottom_pane_g1

0x7247,	// (0x00013f99) vkb2_area_bottom_pane_g2_ParamLimits

0x7247,	// (0x00013f99) vkb2_area_bottom_pane_g2

0x7275,	// (0x00013fc7) vkb2_area_bottom_pane_g3_ParamLimits

0x7275,	// (0x00013fc7) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001caed) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001caed) vkb2_area_bottom_pane_g

0x72d6,	// (0x00014028) vkb2_top_cell_left_pane_ParamLimits

0x72d6,	// (0x00014028) vkb2_top_cell_left_pane

0xe0e2,	// (0x0001ae34) vkb2_top_entry_pane_g1_ParamLimits

0xe0e2,	// (0x0001ae34) vkb2_top_entry_pane_g1

0xe0f0,	// (0x0001ae42) vkb2_top_entry_pane_t1_ParamLimits

0xe0f0,	// (0x0001ae42) vkb2_top_entry_pane_t1

0xe122,	// (0x0001ae74) vkb2_top_entry_pane_t2_ParamLimits

0xe122,	// (0x0001ae74) vkb2_top_entry_pane_t2

0xe154,	// (0x0001aea6) vkb2_top_entry_pane_t3_ParamLimits

0xe154,	// (0x0001aea6) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001caf4) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001caf4) vkb2_top_entry_pane_t

0x7323,	// (0x00014075) vkb2_top_grid_right_pane_g1_ParamLimits

0x7323,	// (0x00014075) vkb2_top_grid_right_pane_g1

0x7339,	// (0x0001408b) vkb2_top_grid_right_pane_g2_ParamLimits

0x7339,	// (0x0001408b) vkb2_top_grid_right_pane_g2

0x7351,	// (0x000140a3) vkb2_top_grid_right_pane_g3_ParamLimits

0x7351,	// (0x000140a3) vkb2_top_grid_right_pane_g3

0x7369,	// (0x000140bb) vkb2_top_grid_right_pane_g4_ParamLimits

0x7369,	// (0x000140bb) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001cafb) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001cafb) vkb2_top_grid_right_pane_g

0x737f,	// (0x000140d1) vkb2_top_cell_left_pane_g1

0x7396,	// (0x000140e8) vkb2_cell_keypad_pane_g1_ParamLimits

0x7396,	// (0x000140e8) vkb2_cell_keypad_pane_g1

0xe178,	// (0x0001aeca) vkb2_cell_keypad_pane_t1_ParamLimits

0xe178,	// (0x0001aeca) vkb2_cell_keypad_pane_t1

0x73a4,	// (0x000140f6) vkb2_cell_bottom_grid_pane_ParamLimits

0x73a4,	// (0x000140f6) vkb2_cell_bottom_grid_pane

0x73dd,	// (0x0001412f) vkb2_cell_bottom_grid_pane_g1

0xdd23,	// (0x0001aa75) aid_call2_pane_cp02

0xdd2b,	// (0x0001aa7d) aid_call_pane_cp02

0xdd33,	// (0x0001aa85) clock_digital_number_pane_cp10

0xdd3b,	// (0x0001aa8d) clock_digital_number_pane_cp11

0xdd43,	// (0x0001aa95) clock_digital_number_pane_cp12

0xdd4b,	// (0x0001aa9d) clock_digital_number_pane_cp13

0xdd53,	// (0x0001aaa5) clock_digital_separator_pane_cp10

0x46a5,	// (0x000113f7) popup_clock_digital_analogue_window_cp2_g1

0x46a5,	// (0x000113f7) popup_clock_digital_analogue_window_cp2_g2

0xdd5b,	// (0x0001aaad) popup_clock_digital_analogue_window_cp2_g3

0x46a5,	// (0x000113f7) popup_clock_digital_analogue_window_cp2_g4

0xdd5b,	// (0x0001aaad) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001cab0) popup_clock_digital_analogue_window_cp2_g

0xdd63,	// (0x0001aab5) popup_clock_digital_analogue_window_cp2_t1

0xdd71,	// (0x0001aac3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001cabb) popup_clock_digital_analogue_window_cp2_t

0xbec2,	// (0x00018c14) clock_digital_number_pane_cp10_g1

0xbec2,	// (0x00018c14) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c89e) clock_digital_number_pane_cp10_g

0xbec2,	// (0x00018c14) clock_digital_separator_pane_cp10_g1

0xbec2,	// (0x00018c14) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c89e) clock_digital_separator_pane_cp10_g

0xdba0,	// (0x0001a8f2) uniindi_top_pane_g3

0xdbb1,	// (0x0001a903) uniindi_top_pane_g4

0x71b7,	// (0x00013f09) vkb2_row_keypad_pane_ParamLimits

0x71b7,	// (0x00013f09) vkb2_row_keypad_pane

0x73f9,	// (0x0001414b) vkb2_cell_t_keypad_pane_ParamLimits

0x73f9,	// (0x0001414b) vkb2_cell_t_keypad_pane

0x7409,	// (0x0001415b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7409,	// (0x0001415b) vkb2_cell_t_keypad_pane_cp08

0x741c,	// (0x0001416e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x741c,	// (0x0001416e) vkb2_cell_t_keypad_pane_cp09

0x7430,	// (0x00014182) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7430,	// (0x00014182) vkb2_cell_t_keypad_pane_cp01

0x7441,	// (0x00014193) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7441,	// (0x00014193) vkb2_cell_t_keypad_pane_cp02

0x7452,	// (0x000141a4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7452,	// (0x000141a4) vkb2_cell_t_keypad_pane_cp03

0x7463,	// (0x000141b5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7463,	// (0x000141b5) vkb2_cell_t_keypad_pane_cp04

0x7474,	// (0x000141c6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7474,	// (0x000141c6) vkb2_cell_t_keypad_pane_cp05

0x7485,	// (0x000141d7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7485,	// (0x000141d7) vkb2_cell_t_keypad_pane_cp06

0x7496,	// (0x000141e8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7496,	// (0x000141e8) vkb2_cell_t_keypad_pane_cp07

0x74a7,	// (0x000141f9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74a7,	// (0x000141f9) vkb2_cell_t_keypad_pane_cp10

0x6c5d,	// (0x000139af) vkb2_cell_t_keypad_pane_g1

0xe18f,	// (0x0001aee1) vkb2_cell_t_keypad_pane_t1

0x5621,	// (0x00012373) popup_grid_graphic2_window

0xe1a1,	// (0x0001aef3) aid_size_cell_graphic2_ParamLimits

0xe1a1,	// (0x0001aef3) aid_size_cell_graphic2

0xe1d9,	// (0x0001af2b) bg_popup_window_pane_cp21_ParamLimits

0xe1d9,	// (0x0001af2b) bg_popup_window_pane_cp21

0xe1e7,	// (0x0001af39) graphic2_pages_pane_ParamLimits

0xe1e7,	// (0x0001af39) graphic2_pages_pane

0xe22d,	// (0x0001af7f) grid_graphic2_control_pane_ParamLimits

0xe22d,	// (0x0001af7f) grid_graphic2_control_pane

0xe26b,	// (0x0001afbd) grid_graphic2_pane_ParamLimits

0xe26b,	// (0x0001afbd) grid_graphic2_pane

0xe2df,	// (0x0001b031) cell_graphic2_pane

0x5621,	// (0x00012373) main_comp_mode_pane

0xd38f,	// (0x0001a0e1) list_ai3_gene_pane_ParamLimits

0xd7be,	// (0x0001a510) bg_popup_window_pane_cp19_ParamLimits

0xd7ca,	// (0x0001a51c) bg_touch_area_indi_pane_ParamLimits

0xd7ca,	// (0x0001a51c) bg_touch_area_indi_pane

0xd7e0,	// (0x0001a532) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7e0,	// (0x0001a532) bg_touch_area_indi_pane_cp01

0xd7f6,	// (0x0001a548) bg_touch_area_indi_pane_cp02_ParamLimits

0xd7f6,	// (0x0001a548) bg_touch_area_indi_pane_cp02

0xd80c,	// (0x0001a55e) bg_touch_area_indi_pane_cp03_ParamLimits

0xd80c,	// (0x0001a55e) bg_touch_area_indi_pane_cp03

0xd826,	// (0x0001a578) popup_slider_window_g1_ParamLimits

0xd842,	// (0x0001a594) popup_slider_window_g2_ParamLimits

0xd85e,	// (0x0001a5b0) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001ca45) popup_slider_window_g_ParamLimits

0xd8c4,	// (0x0001a616) popup_slider_window_t1_ParamLimits

0xd938,	// (0x0001a68a) small_volume_slider_vertical_pane_ParamLimits

0xe2df,	// (0x0001b031) cell_graphic2_pane_ParamLimits

0xe32e,	// (0x0001b080) bg_button_pane_cp10_ParamLimits

0xe32e,	// (0x0001b080) bg_button_pane_cp10

0xe341,	// (0x0001b093) bg_button_pane_cp11_ParamLimits

0xe341,	// (0x0001b093) bg_button_pane_cp11

0xe354,	// (0x0001b0a6) graphic2_pages_pane_g1_ParamLimits

0xe354,	// (0x0001b0a6) graphic2_pages_pane_g1

0xe36f,	// (0x0001b0c1) graphic2_pages_pane_g2_ParamLimits

0xe36f,	// (0x0001b0c1) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001cb09) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001cb09) graphic2_pages_pane_g

0xe387,	// (0x0001b0d9) graphic2_pages_pane_t1_ParamLimits

0xe387,	// (0x0001b0d9) graphic2_pages_pane_t1

0xe39f,	// (0x0001b0f1) cell_graphic2_control_pane_ParamLimits

0xe39f,	// (0x0001b0f1) cell_graphic2_control_pane

0xe3bd,	// (0x0001b10f) cell_graphic2_pane_g1_ParamLimits

0xe3bd,	// (0x0001b10f) cell_graphic2_pane_g1

0xe3ca,	// (0x0001b11c) cell_graphic2_pane_g2_ParamLimits

0xe3ca,	// (0x0001b11c) cell_graphic2_pane_g2

0xe3d7,	// (0x0001b129) cell_graphic2_pane_g3_ParamLimits

0xe3d7,	// (0x0001b129) cell_graphic2_pane_g3

0xe3e4,	// (0x0001b136) cell_graphic2_pane_g4_ParamLimits

0xe3e4,	// (0x0001b136) cell_graphic2_pane_g4

0xe3f1,	// (0x0001b143) cell_graphic2_pane_g5_ParamLimits

0xe3f1,	// (0x0001b143) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001cb0e) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001cb0e) cell_graphic2_pane_g

0xe40c,	// (0x0001b15e) cell_graphic2_pane_t1_ParamLimits

0xe40c,	// (0x0001b15e) cell_graphic2_pane_t1

0x94d2,	// (0x00016224) grid_highlight_pane_cp11_ParamLimits

0x94d2,	// (0x00016224) grid_highlight_pane_cp11

0x3d53,	// (0x00010aa5) bg_button_pane_cp05

0xe443,	// (0x0001b195) cell_graphic2_control_pane_g1

0xbec2,	// (0x00018c14) bg_touch_area_indi_pane_g1

0xe46b,	// (0x0001b1bd) aid_cmod_rocker_key_size

0xe475,	// (0x0001b1c7) aid_cmode_itu_key_size

0xe47f,	// (0x0001b1d1) main_cmode_video_pane

0xe489,	// (0x0001b1db) main_comp_mode_itu_pane

0xe495,	// (0x0001b1e7) main_comp_mode_rocker_pane

0xe4a1,	// (0x0001b1f3) cell_cmode_rocker_pane_ParamLimits

0xe4a1,	// (0x0001b1f3) cell_cmode_rocker_pane

0xe4b3,	// (0x0001b205) cell_cmode_itu_pane_ParamLimits

0xe4b3,	// (0x0001b205) cell_cmode_itu_pane

0x4051,	// (0x00010da3) bg_button_pane_cp06_ParamLimits

0x4051,	// (0x00010da3) bg_button_pane_cp06

0xc132,	// (0x00018e84) cell_cmode_rocker_pane_g1_ParamLimits

0xc132,	// (0x00018e84) cell_cmode_rocker_pane_g1

0xd9fd,	// (0x0001a74f) cell_cmode_rocker_pane_g2_ParamLimits

0xd9fd,	// (0x0001a74f) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001cb1e) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001cb1e) cell_cmode_rocker_pane_g

0x3a10,	// (0x00010762) bg_button_pane_cp07

0xe4c8,	// (0x0001b21a) cell_cmode_itu_pane_g1

0xe4d1,	// (0x0001b223) cell_cmode_itu_pane_t1

0xe4df,	// (0x0001b231) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001cb23) cell_cmode_itu_pane_t

0xdc22,	// (0x0001a974) aid_touch_ctrl_left

0xdc2a,	// (0x0001a97c) aid_touch_ctrl_right

0x3a10,	// (0x00010762) compa_mode_pane

0xe4ed,	// (0x0001b23f) aid_cmod_rocker_key_size_cp

0xe4f7,	// (0x0001b249) aid_cmode_itu_key_size_cp

0xe501,	// (0x0001b253) compa_mode_pane_g1

0xe509,	// (0x0001b25b) compa_mode_pane_g2

0xe511,	// (0x0001b263) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001cb28) compa_mode_pane_g

0xe519,	// (0x0001b26b) main_comp_mode_itu_pane_cp

0xe521,	// (0x0001b273) main_comp_mode_rocker_pane_cp

0xe529,	// (0x0001b27b) cell_cmode_itu_pane_cp_ParamLimits

0xe529,	// (0x0001b27b) cell_cmode_itu_pane_cp

0xe53e,	// (0x0001b290) cell_cmode_rocker_pane_cp_ParamLimits

0xe53e,	// (0x0001b290) cell_cmode_rocker_pane_cp

0x4051,	// (0x00010da3) bg_button_pane_cp06_cp_ParamLimits

0x4051,	// (0x00010da3) bg_button_pane_cp06_cp

0xc132,	// (0x00018e84) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc132,	// (0x00018e84) cell_cmode_rocker_pane_g1_cp

0xbec2,	// (0x00018c14) cell_cmode_rocker_pane_g2_cp

0x3a10,	// (0x00010762) bg_button_pane_cp07_cp

0xe550,	// (0x0001b2a2) cell_cmode_itu_pane_g1_cp

0xe559,	// (0x0001b2ab) cell_cmode_itu_pane_t1_cp

0xe559,	// (0x0001b2ab) cell_cmode_itu_pane_t2_cp

0xa9ba,	// (0x0001770c) settings_code_pane_cp2

0x3c0f,	// (0x00010961) bg_popup_window_pane_cp3_ParamLimits

0x3e6c,	// (0x00010bbe) heading_pane_cp3_ParamLimits

0x3e78,	// (0x00010bca) listscroll_popup_graphic_pane_ParamLimits

0x6a06,	// (0x00013758) fep_hwr_aid_pane_ParamLimits

0x6e7d,	// (0x00013bcf) aid_touch_sctrl_top_ParamLimits

0x6e98,	// (0x00013bea) sctrl_sk_top_pane_g1_ParamLimits

0x6c5d,	// (0x000139af) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001ca5e) sctrl_sk_top_pane_g_ParamLimits

0x6ea5,	// (0x00013bf7) sctrl_sk_top_pane_t1_ParamLimits

0x6e7d,	// (0x00013bcf) aid_touch_sctrl_bottom_ParamLimits

0x6ea5,	// (0x00013bf7) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb6c,	// (0x0001a8be) aid_area_touch_clock

0x708e,	// (0x00013de0) aid_vkb2_area_top_pane_cell_ParamLimits

0x708e,	// (0x00013de0) aid_vkb2_area_top_pane_cell

0x71d9,	// (0x00013f2b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x71d9,	// (0x00013f2b) aid_vkb2_area_bottom_pane_cell

0xe0da,	// (0x0001ae2c) popup_char_count_window

0xe567,	// (0x0001b2b9) popup_char_count_window_g1

0xe570,	// (0x0001b2c2) popup_char_count_window_g2

0xe579,	// (0x0001b2cb) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001cb2f) popup_char_count_window_g

0xe582,	// (0x0001b2d4) popup_char_count_window_t1

0x6f54,	// (0x00013ca6) popup_fep_char_preview_window_ParamLimits

0x6f54,	// (0x00013ca6) popup_fep_char_preview_window

0x70ac,	// (0x00013dfe) vkb2_top_candi_pane_ParamLimits

0x70ac,	// (0x00013dfe) vkb2_top_candi_pane

0xe590,	// (0x0001b2e2) cell_vkb2_top_candi_pane_ParamLimits

0xe590,	// (0x0001b2e2) cell_vkb2_top_candi_pane

0x74bc,	// (0x0001420e) bg_popup_fep_char_preview_window_ParamLimits

0x74bc,	// (0x0001420e) bg_popup_fep_char_preview_window

0x74ca,	// (0x0001421c) popup_fep_char_preview_window_t1_ParamLimits

0x74ca,	// (0x0001421c) popup_fep_char_preview_window_t1

0xe5dd,	// (0x0001b32f) bg_popup_fep_char_preview_window_g1

0xe5e5,	// (0x0001b337) bg_popup_fep_char_preview_window_g2

0xe5ed,	// (0x0001b33f) bg_popup_fep_char_preview_window_g3

0xe5f5,	// (0x0001b347) bg_popup_fep_char_preview_window_g4

0xe5fd,	// (0x0001b34f) bg_popup_fep_char_preview_window_g5

0x7504,	// (0x00014256) bg_popup_fep_char_preview_window_g6

0xe605,	// (0x0001b357) bg_popup_fep_char_preview_window_g7

0xe60d,	// (0x0001b35f) bg_popup_fep_char_preview_window_g8

0xe615,	// (0x0001b367) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001cb36) bg_popup_fep_char_preview_window_g

0x6c5d,	// (0x000139af) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6c5d,	// (0x000139af) cell_vkb2_top_candi_pane_g1

0x6c6b,	// (0x000139bd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c6b,	// (0x000139bd) cell_vkb2_top_candi_pane_g2

0xd95d,	// (0x0001a6af) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd95d,	// (0x0001a6af) cell_vkb2_top_candi_pane_g3

0x750c,	// (0x0001425e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x750c,	// (0x0001425e) cell_vkb2_top_candi_pane_g4

0xc7e3,	// (0x00019535) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7e3,	// (0x00019535) cell_vkb2_top_candi_pane_g5

0x752d,	// (0x0001427f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x752d,	// (0x0001427f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001cb49) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001cb49) cell_vkb2_top_candi_pane_g

0x753b,	// (0x0001428d) cell_vkb2_top_candi_pane_t1

0x681e,	// (0x00013570) aid_size_touch_slider_mark_ParamLimits

0x681e,	// (0x00013570) aid_size_touch_slider_mark

0xe21d,	// (0x0001af6f) grid_graphic2_catg_pane_ParamLimits

0xe21d,	// (0x0001af6f) grid_graphic2_catg_pane

0xe2bb,	// (0x0001b00d) popup_grid_graphic2_window_t1_ParamLimits

0xe2bb,	// (0x0001b00d) popup_grid_graphic2_window_t1

0xe2cd,	// (0x0001b01f) popup_grid_graphic2_window_t2_ParamLimits

0xe2cd,	// (0x0001b01f) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001cb04) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001cb04) popup_grid_graphic2_window_t

0x3d53,	// (0x00010aa5) bg_button_pane_cp05_ParamLimits

0xe443,	// (0x0001b195) cell_graphic2_control_pane_g1_ParamLimits

0xe61d,	// (0x0001b36f) cell_graphic2_catg_pane_ParamLimits

0xe61d,	// (0x0001b36f) cell_graphic2_catg_pane

0x3a10,	// (0x00010762) bg_button_pane_cp12

0xe62f,	// (0x0001b381) cell_graphic2_catg_pane_g1

0xdb37,	// (0x0001a889) cell_tb_ext_pane_t1_ParamLimits

0x72f6,	// (0x00014048) vkb2_top_cell_right_narrow_pane_ParamLimits

0x72f6,	// (0x00014048) vkb2_top_cell_right_narrow_pane

0x730e,	// (0x00014060) vkb2_top_cell_right_wide_pane_ParamLimits

0x730e,	// (0x00014060) vkb2_top_cell_right_wide_pane

0x69f8,	// (0x0001374a) bg_vkb2_func_pane_ParamLimits

0x69f8,	// (0x0001374a) bg_vkb2_func_pane

0x737f,	// (0x000140d1) vkb2_top_cell_left_pane_g1_ParamLimits

0x69f8,	// (0x0001374a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x69f8,	// (0x0001374a) bg_vkb2_fuc_pane_cp03

0x73dd,	// (0x0001412f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x93ba,	// (0x0001610c) bg_vkb2_func_pane_g1

0x93c2,	// (0x00016114) bg_vkb2_func_pane_g2

0x93d2,	// (0x00016124) bg_vkb2_func_pane_g3

0x93ca,	// (0x0001611c) bg_vkb2_func_pane_g4

0x93da,	// (0x0001612c) bg_vkb2_func_pane_g5

0x93e2,	// (0x00016134) bg_vkb2_func_pane_g6

0x93ea,	// (0x0001613c) bg_vkb2_func_pane_g7

0x93f2,	// (0x00016144) bg_vkb2_func_pane_g8

0x93b2,	// (0x00016104) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001cb56) bg_vkb2_func_pane_g

0x69f8,	// (0x0001374a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x69f8,	// (0x0001374a) bg_vkb2_fuc_pane_cp01

0x737f,	// (0x000140d1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x737f,	// (0x000140d1) vkb2_top_cell_right_wide_pane_g1

0x69f8,	// (0x0001374a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x69f8,	// (0x0001374a) bg_vkb2_fuc_pane_cp02

0x73dd,	// (0x0001412f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x73dd,	// (0x0001412f) vkb2_top_cell_right_narrow_pane_g1

0xd738,	// (0x0001a48a) aid_touch_area_decrease_ParamLimits

0xd738,	// (0x0001a48a) aid_touch_area_decrease

0xd75c,	// (0x0001a4ae) aid_touch_area_increase_ParamLimits

0xd75c,	// (0x0001a4ae) aid_touch_area_increase

0xd774,	// (0x0001a4c6) aid_touch_area_mute_ParamLimits

0xd774,	// (0x0001a4c6) aid_touch_area_mute

0xd790,	// (0x0001a4e2) aid_touch_area_slider_ParamLimits

0xd790,	// (0x0001a4e2) aid_touch_area_slider

0xd87a,	// (0x0001a5cc) popup_slider_window_g4_ParamLimits

0xd87a,	// (0x0001a5cc) popup_slider_window_g4

0xd892,	// (0x0001a5e4) popup_slider_window_g5_ParamLimits

0xd892,	// (0x0001a5e4) popup_slider_window_g5

0xd8b4,	// (0x0001a606) popup_slider_window_g6_ParamLimits

0xd8b4,	// (0x0001a606) popup_slider_window_g6

0xd8f2,	// (0x0001a644) popup_slider_window_t2_ParamLimits

0xd8f2,	// (0x0001a644) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001ca52) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001ca52) popup_slider_window_t

0xd90a,	// (0x0001a65c) slider_pane_ParamLimits

0xd90a,	// (0x0001a65c) slider_pane

0xe638,	// (0x0001b38a) slider_pane_g1_ParamLimits

0xe638,	// (0x0001b38a) slider_pane_g1

0xe64c,	// (0x0001b39e) slider_pane_g2_ParamLimits

0xe64c,	// (0x0001b39e) slider_pane_g2

0xe662,	// (0x0001b3b4) slider_pane_g3_ParamLimits

0xe662,	// (0x0001b3b4) slider_pane_g3

0x0003,

0xfe17,	// (0x0001cb69) slider_pane_g_ParamLimits

0xfe17,	// (0x0001cb69) slider_pane_g

0x63d5,	// (0x00013127) popup_tb_float_extension_window_ParamLimits

0x63d5,	// (0x00013127) popup_tb_float_extension_window

0xe68e,	// (0x0001b3e0) aid_size_cell_tb_float_ext

0x3a10,	// (0x00010762) bg_popup_sub_window_cp28

0xe69a,	// (0x0001b3ec) grid_tb_float_ext_pane

0xe6a4,	// (0x0001b3f6) cell_tb_float_ext_pane_ParamLimits

0xe6a4,	// (0x0001b3f6) cell_tb_float_ext_pane

0xe6be,	// (0x0001b410) cell_tb_float_ext_pane_g1

0xe6c7,	// (0x0001b419) grid_highlight_pane_cp12

0x6b47,	// (0x00013899) cell_last_hwr_side_pane_ParamLimits

0x6b47,	// (0x00013899) cell_last_hwr_side_pane

0xbec2,	// (0x00018c14) cell_last_hwr_side_pane_g1

0xe6d0,	// (0x0001b422) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001cb72) cell_last_hwr_side_pane_g

0x72a5,	// (0x00013ff7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72a5,	// (0x00013ff7) vkb2_area_bottom_space_btn_pane

0x6c5d,	// (0x000139af) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe18f,	// (0x0001aee1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x753b,	// (0x0001428d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x755a,	// (0x000142ac) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x755a,	// (0x000142ac) vkb2_area_bottom_space_btn_pane_g1

0x7594,	// (0x000142e6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7594,	// (0x000142e6) vkb2_area_bottom_space_btn_pane_g2

0x75ca,	// (0x0001431c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x75ca,	// (0x0001431c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001cb77) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001cb77) vkb2_area_bottom_space_btn_pane_g

0x6abb,	// (0x0001380d) cel_fep_hwr_func_pane_ParamLimits

0x6abb,	// (0x0001380d) cel_fep_hwr_func_pane

0x6af7,	// (0x00013849) cell_hwr_side_button_pane_ParamLimits

0x6af7,	// (0x00013849) cell_hwr_side_button_pane

0xdb6c,	// (0x0001a8be) aid_area_touch_clock_ParamLimits

0x3d53,	// (0x00010aa5) bg_uniindi_top_pane_ParamLimits

0xdb7e,	// (0x0001a8d0) uniindi_top_pane_g1_ParamLimits

0xdb94,	// (0x0001a8e6) uniindi_top_pane_g2_ParamLimits

0xdba0,	// (0x0001a8f2) uniindi_top_pane_g3_ParamLimits

0xdbb1,	// (0x0001a903) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001ca8a) uniindi_top_pane_g_ParamLimits

0xdbbe,	// (0x0001a910) uniindi_top_pane_t1_ParamLimits

0x3d53,	// (0x00010aa5) bg_vkb2_func_pane_cp01_ParamLimits

0x3d53,	// (0x00010aa5) bg_vkb2_func_pane_cp01

0xe6d9,	// (0x0001b42b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6d9,	// (0x0001b42b) cel_fep_hwr_func_pane_g1

0x3d53,	// (0x00010aa5) bg_vkb2_func_pane_cp02_ParamLimits

0x3d53,	// (0x00010aa5) bg_vkb2_func_pane_cp02

0xe6d9,	// (0x0001b42b) cell_hwr_side_button_pane_g1_ParamLimits

0xe6d9,	// (0x0001b42b) cell_hwr_side_button_pane_g1

0x9214,	// (0x00015f66) status_pane_g4_ParamLimits

0x9214,	// (0x00015f66) status_pane_g4

0x922e,	// (0x00015f80) status_pane_t1

0xbbfd,	// (0x0001894f) form2_midp_gauge_slider_cont_pane

0xbc05,	// (0x00018957) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc17,	// (0x00018969) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc29,	// (0x0001897b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001c851) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc3b,	// (0x0001898d) form2_midp_slider_pane_ParamLimits

0x6f14,	// (0x00013c66) aid_size_cell_func_vkb2_ParamLimits

0x6f14,	// (0x00013c66) aid_size_cell_func_vkb2

0xe67a,	// (0x0001b3cc) slider_pane_g4_ParamLimits

0xe67a,	// (0x0001b3cc) slider_pane_g4

0x7614,	// (0x00014366) form2_midp_gauge_slider_pane_t2_cp01

0x7622,	// (0x00014374) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7622,	// (0x00014374) form2_midp_gauge_slider_pane_t3_cp01

0x763f,	// (0x00014391) form2_midp_slider_pane_cp01

0x3a10,	// (0x00010762) navi_smil_pane

0xe712,	// (0x0001b464) navi_smil_pane_g1

0xe71a,	// (0x0001b46c) navi_smil_pane_t1

0xe6e7,	// (0x0001b439) form2_midp_slider_pane_g1

0xe6f0,	// (0x0001b442) form2_midp_slider_pane_g2

0xe6f8,	// (0x0001b44a) form2_midp_slider_pane_g3

0xe6e7,	// (0x0001b439) form2_midp_slider_pane_g4

0xe700,	// (0x0001b452) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001cb80) form2_midp_slider_pane_g

0x7604,	// (0x00014356) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7604,	// (0x00014356) vkb2_area_bottom_space_btn_pane_g4

0x9043,	// (0x00015d95) lc0_navi_pane_ParamLimits

0x9043,	// (0x00015d95) lc0_navi_pane

0x90b9,	// (0x00015e0b) lc0_stat_indi_pane_ParamLimits

0x90b9,	// (0x00015e0b) lc0_stat_indi_pane

0x90d0,	// (0x00015e22) ls0_title_pane_ParamLimits

0x90d0,	// (0x00015e22) ls0_title_pane

0x4051,	// (0x00010da3) bg_popup_sub_pane_cp14_ParamLimits

0xdb53,	// (0x0001a8a5) list_uniindi_pane_ParamLimits

0xdb5f,	// (0x0001a8b1) uniindi_top_pane_ParamLimits

0xdbfa,	// (0x0001a94c) list_single_uniindi_pane_g1_ParamLimits

0xdc0d,	// (0x0001a95f) list_single_uniindi_pane_t1_ParamLimits

0x7648,	// (0x0001439a) lc0_stat_clock_pane_ParamLimits

0x7648,	// (0x0001439a) lc0_stat_clock_pane

0xe728,	// (0x0001b47a) lc0_stat_indi_pane_g1_ParamLimits

0xe728,	// (0x0001b47a) lc0_stat_indi_pane_g1

0xe735,	// (0x0001b487) lc0_stat_indi_pane_g2_ParamLimits

0xe735,	// (0x0001b487) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001cb8b) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001cb8b) lc0_stat_indi_pane_g

0x7655,	// (0x000143a7) lc0_uni_indicator_pane_ParamLimits

0x7655,	// (0x000143a7) lc0_uni_indicator_pane

0xe742,	// (0x0001b494) ls0_title_pane_g1_ParamLimits

0xe742,	// (0x0001b494) ls0_title_pane_g1

0xe756,	// (0x0001b4a8) ls0_title_pane_t1_ParamLimits

0xe756,	// (0x0001b4a8) ls0_title_pane_t1

0x7662,	// (0x000143b4) lc0_uni_indicator_pane_g1_ParamLimits

0x7662,	// (0x000143b4) lc0_uni_indicator_pane_g1

0xe78c,	// (0x0001b4de) lc0_stat_clock_pane_t1

0x5621,	// (0x00012373) main_ai5_pane

0xe79a,	// (0x0001b4ec) ai5_sk_pane_ParamLimits

0xe79a,	// (0x0001b4ec) ai5_sk_pane

0xe7a7,	// (0x0001b4f9) cell_ai5_widget_pane_ParamLimits

0xe7a7,	// (0x0001b4f9) cell_ai5_widget_pane

0xe862,	// (0x0001b5b4) aid_size_cell_widget_grid

0xe870,	// (0x0001b5c2) bg_ai5_widget_pane_ParamLimits

0xe870,	// (0x0001b5c2) bg_ai5_widget_pane

0xe8e8,	// (0x0001b63a) cell_ai5_widget_pane_g2

0xe8fc,	// (0x0001b64e) cell_ai5_widget_pane_g3

0xe916,	// (0x0001b668) cell_ai5_widget_pane_g4

0xe926,	// (0x0001b678) cell_ai5_widget_pane_g5

0xe936,	// (0x0001b688) cell_ai5_widget_pane_g6

0xe942,	// (0x0001b694) cell_ai5_widget_pane_g7

0xe98a,	// (0x0001b6dc) cell_ai5_widget_pane_t1_ParamLimits

0xe98a,	// (0x0001b6dc) cell_ai5_widget_pane_t1

0xe9a7,	// (0x0001b6f9) cell_ai5_widget_pane_t2_ParamLimits

0xe9a7,	// (0x0001b6f9) cell_ai5_widget_pane_t2

0xe9bf,	// (0x0001b711) cell_ai5_widget_pane_t3_ParamLimits

0xe9bf,	// (0x0001b711) cell_ai5_widget_pane_t3

0xe9d7,	// (0x0001b729) cell_ai5_widget_pane_t4_ParamLimits

0xe9d7,	// (0x0001b729) cell_ai5_widget_pane_t4

0xe9fd,	// (0x0001b74f) cell_ai5_widget_pane_t5_ParamLimits

0xe9fd,	// (0x0001b74f) cell_ai5_widget_pane_t5

0xea1d,	// (0x0001b76f) cell_ai5_widget_pane_t6_ParamLimits

0xea1d,	// (0x0001b76f) cell_ai5_widget_pane_t6

0xea2f,	// (0x0001b781) cell_ai5_widget_pane_t7_ParamLimits

0xea2f,	// (0x0001b781) cell_ai5_widget_pane_t7

0xea48,	// (0x0001b79a) cell_ai5_widget_pane_t8_ParamLimits

0xea48,	// (0x0001b79a) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001cba5) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001cba5) cell_ai5_widget_pane_t

0xeaa7,	// (0x0001b7f9) grid_ai5_widget_pane

0x4051,	// (0x00010da3) highlight_cell_ai5_widget_pane_ParamLimits

0x4051,	// (0x00010da3) highlight_cell_ai5_widget_pane

0xeab5,	// (0x0001b807) ai5_sk_left_pane

0xeabf,	// (0x0001b811) ai5_sk_middle_pane

0xeac9,	// (0x0001b81b) ai5_sk_right_pane

0xead3,	// (0x0001b825) bg_ai5_widget_pane_g1_ParamLimits

0xead3,	// (0x0001b825) bg_ai5_widget_pane_g1

0xeadf,	// (0x0001b831) bg_ai5_widget_pane_g2_ParamLimits

0xeadf,	// (0x0001b831) bg_ai5_widget_pane_g2

0xeaeb,	// (0x0001b83d) bg_ai5_widget_pane_g3_ParamLimits

0xeaeb,	// (0x0001b83d) bg_ai5_widget_pane_g3

0xeaf7,	// (0x0001b849) bg_ai5_widget_pane_g4_ParamLimits

0xeaf7,	// (0x0001b849) bg_ai5_widget_pane_g4

0xeb03,	// (0x0001b855) bg_ai5_widget_pane_g5_ParamLimits

0xeb03,	// (0x0001b855) bg_ai5_widget_pane_g5

0xeb0f,	// (0x0001b861) bg_ai5_widget_pane_g6_ParamLimits

0xeb0f,	// (0x0001b861) bg_ai5_widget_pane_g6

0xeb1b,	// (0x0001b86d) bg_ai5_widget_pane_g7_ParamLimits

0xeb1b,	// (0x0001b86d) bg_ai5_widget_pane_g7

0xeb27,	// (0x0001b879) bg_ai5_widget_pane_g8_ParamLimits

0xeb27,	// (0x0001b879) bg_ai5_widget_pane_g8

0xeb33,	// (0x0001b885) bg_ai5_widget_pane_g9_ParamLimits

0xeb33,	// (0x0001b885) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001cbba) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001cbba) bg_ai5_widget_pane_g

0xeb65,	// (0x0001b8b7) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb65,	// (0x0001b8b7) cell_shortcut_ai5_widget_pane

0x8b39,	// (0x0001588b) bg_cell_shortcut_ai5_widget_pane

0xeb76,	// (0x0001b8c8) cell_grid_ai5_widget_pane_g1

0x8b39,	// (0x0001588b) highlight_cell_shortcut_ai5_widget_pane

0x93ba,	// (0x0001610c) ai5_sk_left_pane_g1

0xeb7f,	// (0x0001b8d1) ai5_sk_left_pane_g2

0xeb87,	// (0x0001b8d9) ai5_sk_left_pane_g3

0xeb8f,	// (0x0001b8e1) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001cbcd) ai5_sk_left_pane_g

0xeb97,	// (0x0001b8e9) ai5_sk_left_pane_t1

0x93c2,	// (0x00016114) ai5_sk_right_pane_g1

0xeba5,	// (0x0001b8f7) ai5_sk_right_pane_g2

0xebad,	// (0x0001b8ff) ai5_sk_right_pane_g3

0xebb5,	// (0x0001b907) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001cbd6) ai5_sk_right_pane_g

0xebbd,	// (0x0001b90f) ai5_sk_right_pane_t1

0x93c2,	// (0x00016114) ai5_sk_middle_pane_g1

0x93ba,	// (0x0001610c) ai5_sk_middle_pane_g2

0x93da,	// (0x0001612c) ai5_sk_middle_pane_g3

0xebad,	// (0x0001b8ff) ai5_sk_middle_pane_g4

0xeb87,	// (0x0001b8d9) ai5_sk_middle_pane_g5

0xebcb,	// (0x0001b91d) ai5_sk_middle_pane_g6

0xebd3,	// (0x0001b925) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001cbdf) ai5_sk_middle_pane_g

0x8ec9,	// (0x00015c1b) aid_touch_area_size_lc0_ParamLimits

0x8ec9,	// (0x00015c1b) aid_touch_area_size_lc0

0x6c8c,	// (0x000139de) cell_hwr_candidate_pane_t1_ParamLimits

0x8ee5,	// (0x00015c37) aid_touch_navi_pane

0x91be,	// (0x00015f10) status_dt_navi_pane_ParamLimits

0x91be,	// (0x00015f10) status_dt_navi_pane

0x91cb,	// (0x00015f1d) status_dt_sta_pane_ParamLimits

0x91cb,	// (0x00015f1d) status_dt_sta_pane

0xebdb,	// (0x0001b92d) dt_sta_controll_pane

0xebe8,	// (0x0001b93a) dt_sta_indi_pane

0xebf9,	// (0x0001b94b) dt_sta_title_pane

0x3d53,	// (0x00010aa5) bg_dt_sta_indi_pane_ParamLimits

0x3d53,	// (0x00010aa5) bg_dt_sta_indi_pane

0xec0c,	// (0x0001b95e) dt_sta_battery_pane

0xec14,	// (0x0001b966) dt_sta_indi_pane_g1

0xec1d,	// (0x0001b96f) dt_sta_indi_pane_g2

0xec26,	// (0x0001b978) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001cbee) dt_sta_indi_pane_g

0xec2f,	// (0x0001b981) dt_sta_signal_pane

0x4051,	// (0x00010da3) bg_dt_sta_title_pane_ParamLimits

0x4051,	// (0x00010da3) bg_dt_sta_title_pane

0xa2e1,	// (0x00017033) dt_sta_title_pane_g1

0xec38,	// (0x0001b98a) dt_sta_title_pane_t1_ParamLimits

0xec38,	// (0x0001b98a) dt_sta_title_pane_t1

0x3a10,	// (0x00010762) bg_dt_sta_control_pane

0xec4d,	// (0x0001b99f) dt_sta_controll_pane_g1

0xec56,	// (0x0001b9a8) bg_dt_sta_title_pane_g1

0xec5f,	// (0x0001b9b1) bg_dt_sta_title_pane_g2

0xec68,	// (0x0001b9ba) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001cbf5) bg_dt_sta_title_pane_g

0xbec2,	// (0x00018c14) bg_dt_sta_indi_pane_g1

0xec71,	// (0x0001b9c3) dt_sta_signal_pane_g1

0xec79,	// (0x0001b9cb) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001cbfc) dt_sta_signal_pane_g

0xec81,	// (0x0001b9d3) dt_sta_battery_pane_g1

0xec8a,	// (0x0001b9dc) dt_sta_battery_pane_t1

0xbec2,	// (0x00018c14) bg_dt_sta_control_pane_g1

0x47c4,	// (0x00011516) fep_china_uni_eep_pane

0x47cc,	// (0x0001151e) fep_china_uni_entry_pane_ParamLimits

0x47dc,	// (0x0001152e) popup_fep_china_uni_window_g1_ParamLimits

0x47ec,	// (0x0001153e) popup_fep_china_uni_window_g2_ParamLimits

0x47ec,	// (0x0001153e) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x0001c460) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x0001c460) popup_fep_china_uni_window_g

0xec99,	// (0x0001b9eb) fep_china_uni_eep_pane_g1

0xeca1,	// (0x0001b9f3) fep_china_uni_eep_pane_t1

0xe709,	// (0x0001b45b) aid_touch_area_size_smil_player

0x903b,	// (0x00015d8d) lc0_clock_pane

0x9222,	// (0x00015f74) status_pane_g5_ParamLimits

0x9222,	// (0x00015f74) status_pane_g5

0x6096,	// (0x00012de8) popup_keymap_window

0x91e0,	// (0x00015f32) status_icon_pane

0xe8fc,	// (0x0001b64e) cell_ai5_widget_pane_g3_ParamLimits

0xe916,	// (0x0001b668) cell_ai5_widget_pane_g4_ParamLimits

0xe926,	// (0x0001b678) cell_ai5_widget_pane_g5_ParamLimits

0xe94e,	// (0x0001b6a0) cell_ai5_widget_pane_g8_ParamLimits

0xe94e,	// (0x0001b6a0) cell_ai5_widget_pane_g8

0xe962,	// (0x0001b6b4) cell_ai5_widget_pane_g9_ParamLimits

0xe962,	// (0x0001b6b4) cell_ai5_widget_pane_g9

0xe976,	// (0x0001b6c8) cell_ai5_widget_pane_g10_ParamLimits

0xe976,	// (0x0001b6c8) cell_ai5_widget_pane_g10

0xecb0,	// (0x0001ba02) status_icon_pane_g1

0x3a10,	// (0x00010762) bg_popup_sub_pane_cp13

0xecb8,	// (0x0001ba0a) popup_keymap_window_t1

0x8e0a,	// (0x00015b5c) control_pane_g6_ParamLimits

0x8e0a,	// (0x00015b5c) control_pane_g6

0x8e17,	// (0x00015b69) control_pane_g7_ParamLimits

0x8e17,	// (0x00015b69) control_pane_g7

0x8e24,	// (0x00015b76) control_pane_g8_ParamLimits

0x8e24,	// (0x00015b76) control_pane_g8

0xebdb,	// (0x0001b92d) dt_sta_controll_pane_ParamLimits

0xebe8,	// (0x0001b93a) dt_sta_indi_pane_ParamLimits

0xebf9,	// (0x0001b94b) dt_sta_title_pane_ParamLimits

0x3f26,	// (0x00010c78) aid_size_touch_scroll_bar_cale

0x56fa,	// (0x0001244c) popup_discreet_window_ParamLimits

0x56fa,	// (0x0001244c) popup_discreet_window

0x5774,	// (0x000124c6) popup_sk_window

0x9b25,	// (0x00016877) bg_popup_sub_pane_cp28_ParamLimits

0x9b25,	// (0x00016877) bg_popup_sub_pane_cp28

0xecc6,	// (0x0001ba18) popup_discreet_window_g1_ParamLimits

0xecc6,	// (0x0001ba18) popup_discreet_window_g1

0xece6,	// (0x0001ba38) popup_discreet_window_t1_ParamLimits

0xece6,	// (0x0001ba38) popup_discreet_window_t1

0xed04,	// (0x0001ba56) popup_discreet_window_t2_ParamLimits

0xed04,	// (0x0001ba56) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001cc01) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001cc01) popup_discreet_window_t

0x7676,	// (0x000143c8) popup_sk_window_g1

0x7680,	// (0x000143d2) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001cc08) popup_sk_window_g

0x7688,	// (0x000143da) popup_sk_window_t1

0x7696,	// (0x000143e8) popup_sk_window_t1_copy1

0xe8e8,	// (0x0001b63a) cell_ai5_widget_pane_g2_ParamLimits

0xea5a,	// (0x0001b7ac) cell_ai5_widget_pane_t9_ParamLimits

0xea5a,	// (0x0001b7ac) cell_ai5_widget_pane_t9

0x3a10,	// (0x00010762) main_fep_fshwr2_pane

0x76a4,	// (0x000143f6) aid_fshwr2_btn_pane

0x76b0,	// (0x00014402) aid_fshwr2_syb_pane

0x76c2,	// (0x00014414) aid_fshwr2_txt_pane

0x76ce,	// (0x00014420) fshwr2_func_candi_pane

0x76ec,	// (0x0001443e) fshwr2_hwr_syb_pane

0x7706,	// (0x00014458) fshwr2_icf_pane

0x5621,	// (0x00012373) fshwr2_icf_bg_pane

0x7732,	// (0x00014484) fshwr2_icf_pane_t1_ParamLimits

0x7732,	// (0x00014484) fshwr2_icf_pane_t1

0x46a5,	// (0x000113f7) fshwr2_func_candi_pane_g1

0xed56,	// (0x0001baa8) fshwr2_func_candi_row_pane_ParamLimits

0xed56,	// (0x0001baa8) fshwr2_func_candi_row_pane

0x774b,	// (0x0001449d) cell_fshwr2_syb_pane_ParamLimits

0x774b,	// (0x0001449d) cell_fshwr2_syb_pane

0x776e,	// (0x000144c0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x776e,	// (0x000144c0) fshwr2_hwr_syb_pane_g1

0x5621,	// (0x00012373) bg_popup_call_pane_cp01

0x777c,	// (0x000144ce) fshwr2_func_candi_cell_pane_ParamLimits

0x777c,	// (0x000144ce) fshwr2_func_candi_cell_pane

0xa181,	// (0x00016ed3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa181,	// (0x00016ed3) fshwr2_func_candi_cell_bg_pane

0x77c7,	// (0x00014519) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x77c7,	// (0x00014519) fshwr2_func_candi_cell_pane_g1

0x77ef,	// (0x00014541) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x77ef,	// (0x00014541) fshwr2_func_candi_cell_pane_t1

0x5621,	// (0x00012373) bg_button_pane_cp08

0xed7d,	// (0x0001bacf) cell_fshwr2_syb_bg_pane

0x7802,	// (0x00014554) cell_fshwr2_syb_bg_pane_g1

0x7816,	// (0x00014568) cell_fshwr2_syb_bg_pane_t1

0x4051,	// (0x00010da3) main_tmo_pane

0xa61a,	// (0x0001736c) uni_indicator_pane_g1_ParamLimits

0xa62d,	// (0x0001737f) uni_indicator_pane_g2_ParamLimits

0xa63f,	// (0x00017391) uni_indicator_pane_g3_ParamLimits

0xa64e,	// (0x000173a0) uni_indicator_pane_g4_ParamLimits

0xa64e,	// (0x000173a0) uni_indicator_pane_g4

0xa662,	// (0x000173b4) uni_indicator_pane_g5_ParamLimits

0xa662,	// (0x000173b4) uni_indicator_pane_g5

0xa662,	// (0x000173b4) uni_indicator_pane_g6_ParamLimits

0xa662,	// (0x000173b4) uni_indicator_pane_g6

0xf912,	// (0x0001c664) uni_indicator_pane_g_ParamLimits

0xd71a,	// (0x0001a46c) popup_tmo_note_window_ParamLimits

0xd71a,	// (0x0001a46c) popup_tmo_note_window

0x6ef6,	// (0x00013c48) fshwr2_bg_pane

0x77e0,	// (0x00014532) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x77e0,	// (0x00014532) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001cc0d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001cc0d) fshwr2_func_candi_cell_pane_g

0x6c45,	// (0x00013997) bg_popup_window_pane_cp01

0x782c,	// (0x0001457e) bg_popup_window_pane_g1_cp01

0xed89,	// (0x0001badb) bg_popup_window_pane_cp22_ParamLimits

0xed89,	// (0x0001badb) bg_popup_window_pane_cp22

0xed97,	// (0x0001bae9) listscroll_tmo_link_pane_ParamLimits

0xed97,	// (0x0001bae9) listscroll_tmo_link_pane

0xedd7,	// (0x0001bb29) popup_tmo_note_window_g1_ParamLimits

0xedd7,	// (0x0001bb29) popup_tmo_note_window_g1

0xede4,	// (0x0001bb36) tmo_note_info_pane_ParamLimits

0xede4,	// (0x0001bb36) tmo_note_info_pane

0xedfe,	// (0x0001bb50) list_tmo_note_info_pane_g1_ParamLimits

0xedfe,	// (0x0001bb50) list_tmo_note_info_pane_g1

0xee15,	// (0x0001bb67) list_tmo_note_info_pane_g2_ParamLimits

0xee15,	// (0x0001bb67) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001cc12) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001cc12) list_tmo_note_info_pane_g

0xee31,	// (0x0001bb83) list_tmo_note_info_text_pane_ParamLimits

0xee31,	// (0x0001bb83) list_tmo_note_info_text_pane

0xeeb2,	// (0x0001bc04) list_tmo_link_pane

0xeebf,	// (0x0001bc11) scroll_pane_cp20

0xeecc,	// (0x0001bc1e) list_single_tmo_link_pane_ParamLimits

0xeecc,	// (0x0001bc1e) list_single_tmo_link_pane

0xeedc,	// (0x0001bc2e) list_single_tmo_link_pane_t1

0xeeea,	// (0x0001bc3c) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeea,	// (0x0001bc3c) list_tmo_note_info_text_pane_t1

0x8508,	// (0x0001525a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8508,	// (0x0001525a) aid_size_touch_scroll_bar_cp01

0x840a,	// (0x0001515c) aid_size_touch_slider_marker

0x575c,	// (0x000124ae) popup_settings_window_ParamLimits

0x575c,	// (0x000124ae) popup_settings_window

0x8e95,	// (0x00015be7) popup_candi_list_indi_window

0x8ee5,	// (0x00015c37) aid_touch_navi_pane_ParamLimits

0x6e51,	// (0x00013ba3) rs_clock_indi_pane

0x6e5a,	// (0x00013bac) sctrl_sk_bottom_pane_ParamLimits

0x6e6b,	// (0x00013bbd) sctrl_sk_top_pane_ParamLimits

0x6f6e,	// (0x00013cc0) popup_fep_tooltip_window

0xe862,	// (0x0001b5b4) aid_size_cell_widget_grid_ParamLimits

0xe8d3,	// (0x0001b625) cell_ai5_widget_pane_g1_ParamLimits

0xe8d3,	// (0x0001b625) cell_ai5_widget_pane_g1

0xe936,	// (0x0001b688) cell_ai5_widget_pane_g6_ParamLimits

0xe942,	// (0x0001b694) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001cb90) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001cb90) cell_ai5_widget_pane_g

0xea89,	// (0x0001b7db) cell_ai5_widget_pane_t10_ParamLimits

0xea89,	// (0x0001b7db) cell_ai5_widget_pane_t10

0xeaa7,	// (0x0001b7f9) grid_ai5_widget_pane_ParamLimits

0xeb3f,	// (0x0001b891) cell_contacts_ai5_widget_pane_ParamLimits

0xeb3f,	// (0x0001b891) cell_contacts_ai5_widget_pane

0xed19,	// (0x0001ba6b) popup_discreet_window_t3_ParamLimits

0xed19,	// (0x0001ba6b) popup_discreet_window_t3

0x771e,	// (0x00014470) popup_fshwr2_char_preview_window_ParamLimits

0x771e,	// (0x00014470) popup_fshwr2_char_preview_window

0xee4f,	// (0x0001bba1) tmo_note_info_pane_t1

0xee64,	// (0x0001bbb6) tmo_note_info_pane_t2

0xee79,	// (0x0001bbcb) tmo_note_info_pane_t3

0xee8e,	// (0x0001bbe0) tmo_note_info_pane_t4

0xeea0,	// (0x0001bbf2) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001cc17) tmo_note_info_pane_t

0xeeb2,	// (0x0001bc04) list_tmo_link_pane_ParamLimits

0xeebf,	// (0x0001bc11) scroll_pane_cp20_ParamLimits

0x5621,	// (0x00012373) bg_popup_fep_char_preview_window_cp01

0xef03,	// (0x0001bc55) popup_fshwr2_char_preview_window_t1

0xef11,	// (0x0001bc63) popup_candi_list_indi_window_g1

0xef1a,	// (0x0001bc6c) bg_cell_contacts_ai5_widget_pane

0xef26,	// (0x0001bc78) cell_contacts_ai5_widget_pane_g1

0xc738,	// (0x0001948a) cell_contacts_ai5_widget_pane_g2

0xef3b,	// (0x0001bc8d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001cc22) cell_contacts_ai5_widget_pane_g

0xef47,	// (0x0001bc99) cell_contacts_ai5_widget_pane_t1

0x4051,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefbe,	// (0x0001bd10) settings_container_pane

0x8b39,	// (0x0001588b) listscroll_set_pane_copy1

0xb294,	// (0x00017fe6) scroll_pane_cp121_copy1

0x98d2,	// (0x00016624) set_content_pane_copy1

0xefca,	// (0x0001bd1c) aid_height_set_list_copy1_ParamLimits

0xefca,	// (0x0001bd1c) aid_height_set_list_copy1

0xa86c,	// (0x000175be) aid_size_parent_copy1_ParamLimits

0xa86c,	// (0x000175be) aid_size_parent_copy1

0xefd6,	// (0x0001bd28) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd6,	// (0x0001bd28) button_value_adjust_pane_cp6_copy1

0x8e61,	// (0x00015bb3) list_highlight_pane_cp2_copy1_ParamLimits

0x8e61,	// (0x00015bb3) list_highlight_pane_cp2_copy1

0xefea,	// (0x0001bd3c) list_set_pane_copy1_ParamLimits

0xefea,	// (0x0001bd3c) list_set_pane_copy1

0xef59,	// (0x0001bcab) main_pane_set_t1_copy1_ParamLimits

0xef59,	// (0x0001bcab) main_pane_set_t1_copy1

0xef93,	// (0x0001bce5) main_pane_set_t2_copy1_ParamLimits

0xef93,	// (0x0001bce5) main_pane_set_t2_copy1

0xf097,	// (0x0001bde9) main_pane_set_t3_copy1

0xf0a5,	// (0x0001bdf7) main_pane_set_t4_copy1

0xefb2,	// (0x0001bd04) set_content_pane_g1_copy1_ParamLimits

0xefb2,	// (0x0001bd04) set_content_pane_g1_copy1

0xf0b3,	// (0x0001be05) setting_code_pane_copy1

0xf0bb,	// (0x0001be0d) setting_slider_graphic_pane_copy1

0xf0bb,	// (0x0001be0d) setting_slider_pane_copy1

0xf0bb,	// (0x0001be0d) setting_text_pane_copy1

0xf0bb,	// (0x0001be0d) setting_volume_pane_copy1

0xf0b3,	// (0x0001be05) settings_code_pane_cp2_copy1

0xf0c3,	// (0x0001be15) settings_code_pane_cp_copy1_ParamLimits

0xf0c3,	// (0x0001be15) settings_code_pane_cp_copy1

0x7835,	// (0x00014587) volume_set_pane_copy1

0xf0d7,	// (0x0001be29) volume_set_pane_g10_copy1

0xf0df,	// (0x0001be31) volume_set_pane_g1_copy1

0xf0e7,	// (0x0001be39) volume_set_pane_g2_copy1

0xf0ef,	// (0x0001be41) volume_set_pane_g3_copy1

0xf0f7,	// (0x0001be49) volume_set_pane_g4_copy1

0xf0ff,	// (0x0001be51) volume_set_pane_g5_copy1

0xf107,	// (0x0001be59) volume_set_pane_g6_copy1

0xf10f,	// (0x0001be61) volume_set_pane_g7_copy1

0xf117,	// (0x0001be69) volume_set_pane_g8_copy1

0xf11f,	// (0x0001be71) volume_set_pane_g9_copy1

0x3c0f,	// (0x00010961) bg_set_opt_pane_cp_copy1_ParamLimits

0x3c0f,	// (0x00010961) bg_set_opt_pane_cp_copy1

0x783d,	// (0x0001458f) setting_slider_pane_t1_copy1_ParamLimits

0x783d,	// (0x0001458f) setting_slider_pane_t1_copy1

0x785b,	// (0x000145ad) setting_slider_pane_t2_copy1_ParamLimits

0x785b,	// (0x000145ad) setting_slider_pane_t2_copy1

0x7875,	// (0x000145c7) setting_slider_pane_t3_copy1_ParamLimits

0x7875,	// (0x000145c7) setting_slider_pane_t3_copy1

0x788d,	// (0x000145df) slider_set_pane_copy1_ParamLimits

0x788d,	// (0x000145df) slider_set_pane_copy1

0x410b,	// (0x00010e5d) set_opt_bg_pane_g1_copy2

0x4113,	// (0x00010e65) set_opt_bg_pane_g2_copy2

0xf127,	// (0x0001be79) set_opt_bg_pane_g3_copy2

0x4123,	// (0x00010e75) set_opt_bg_pane_g4_copy2

0x412b,	// (0x00010e7d) set_opt_bg_pane_g5_copy2

0x4133,	// (0x00010e85) set_opt_bg_pane_g6_copy2

0xf131,	// (0x0001be83) set_opt_bg_pane_g7_copy2

0xf139,	// (0x0001be8b) set_opt_bg_pane_g8_copy2

0xf143,	// (0x0001be95) set_opt_bg_pane_g9_copy2

0x78a3,	// (0x000145f5) aid_size_touch_slider_mark_copy1_ParamLimits

0x78a3,	// (0x000145f5) aid_size_touch_slider_mark_copy1

0xf14d,	// (0x0001be9f) slider_set_pane_g1_copy1

0x78b7,	// (0x00014609) slider_set_pane_g2_copy1

0x683e,	// (0x00013590) slider_set_pane_g3_copy1_ParamLimits

0x683e,	// (0x00013590) slider_set_pane_g3_copy1

0x6852,	// (0x000135a4) slider_set_pane_g4_copy1_ParamLimits

0x6852,	// (0x000135a4) slider_set_pane_g4_copy1

0x686a,	// (0x000135bc) slider_set_pane_g5_copy1_ParamLimits

0x686a,	// (0x000135bc) slider_set_pane_g5_copy1

0x683e,	// (0x00013590) slider_set_pane_g6_copy1_ParamLimits

0x683e,	// (0x00013590) slider_set_pane_g6_copy1

0x78bf,	// (0x00014611) slider_set_pane_g7_copy1_ParamLimits

0x78bf,	// (0x00014611) slider_set_pane_g7_copy1

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp2_copy1

0xf156,	// (0x0001bea8) setting_slider_graphic_pane_g1_copy1

0xf15f,	// (0x0001beb1) setting_slider_graphic_pane_t1_copy1

0xf16f,	// (0x0001bec1) setting_slider_graphic_pane_t2_copy1

0xf17f,	// (0x0001bed1) slider_set_pane_cp_copy1

0xf18f,	// (0x0001bee1) input_focus_pane_cp1_copy1

0xf198,	// (0x0001beea) list_set_text_pane_copy1

0xf1a0,	// (0x0001bef2) setting_text_pane_g1_copy1

0xf1a9,	// (0x0001befb) set_text_pane_t1_copy1

0xf18f,	// (0x0001bee1) input_focus_pane_cp2_copy1

0xf1a0,	// (0x0001bef2) setting_code_pane_g1_copy1

0xf1c4,	// (0x0001bf16) setting_code_pane_t1_copy1

0xf1d2,	// (0x0001bf24) list_set_graphic_pane_copy1

0x3b93,	// (0x000108e5) bg_set_opt_pane_cp4_copy1

0x4a69,	// (0x000117bb) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a69,	// (0x000117bb) list_set_graphic_pane_g1_copy1

0xf1e6,	// (0x0001bf38) list_set_graphic_pane_g2_copy1

0x4a81,	// (0x000117d3) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a81,	// (0x000117d3) list_set_graphic_pane_t1_copy1

0xbec2,	// (0x00018c14) rs_clock_indi_pane_g1

0xf1ee,	// (0x0001bf40) rs_clock_indi_pane_t1

0xf1fc,	// (0x0001bf4e) rs_indi_pane

0xf204,	// (0x0001bf56) rs_indi_pane_g1

0xf20d,	// (0x0001bf5f) rs_indi_pane_g2

0xef11,	// (0x0001bc63) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001cc29) rs_indi_pane_g

0x8b39,	// (0x0001588b) bg_popup_preview_window_pane_cp03

0xf216,	// (0x0001bf68) popup_fep_tooltip_window_t1

0xcd79,	// (0x00019acb) popup_note2_window_g2_ParamLimits

0xcd79,	// (0x00019acb) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001c9c9) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001c9c9) popup_note2_window_g

0xd355,	// (0x0001a0a7) bg_popup_sub_pane_cp11_ParamLimits

0xd362,	// (0x0001a0b4) cell_ai3_links_pane_g1_ParamLimits

0xd379,	// (0x0001a0cb) cell_ai3_links_pane_t1

0xf1a9,	// (0x0001befb) set_text_pane_t1_copy1_ParamLimits

0x8a4a,	// (0x0001579c) cell_graphic_popup_pane_cp2_ParamLimits

0x8a4a,	// (0x0001579c) cell_graphic_popup_pane_cp2

0xf224,	// (0x0001bf76) cell_graphic_popup_pane_g1_cp2

0x3ea9,	// (0x00010bfb) cell_graphic_popup_pane_g2_cp2

0xf22c,	// (0x0001bf7e) cell_graphic_popup_pane_g3_cp2

0xf234,	// (0x0001bf86) cell_graphic_popup_pane_t2_cp2

0x3eba,	// (0x00010c0c) grid_highlight_pane_cp3_cp2

0x4503,	// (0x00011255) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4051,	// (0x00010da3) main_tmo_pane_ParamLimits

0xd70e,	// (0x0001a460) popup_tmo_big_image_note_window

0xe8c2,	// (0x0001b614) cell_ai5_widget_list_pane

0xe8ca,	// (0x0001b61c) cell_ai5_widget_lrg_icon_pane

0xee4f,	// (0x0001bba1) tmo_note_info_pane_t1_ParamLimits

0xee64,	// (0x0001bbb6) tmo_note_info_pane_t2_ParamLimits

0xee79,	// (0x0001bbcb) tmo_note_info_pane_t3_ParamLimits

0xee8e,	// (0x0001bbe0) tmo_note_info_pane_t4_ParamLimits

0xeea0,	// (0x0001bbf2) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001cc17) tmo_note_info_pane_t_ParamLimits

0xefbe,	// (0x0001bd10) settings_container_pane_ParamLimits

0xf187,	// (0x0001bed9) indicator_popup_pane_cp5

0xf187,	// (0x0001bed9) indicator_popup_pane_cp6

0xf1d2,	// (0x0001bf24) list_set_graphic_pane_copy1_ParamLimits

0x3a10,	// (0x00010762) bg_popup_window_pane_cp23

0xf242,	// (0x0001bf94) popup_tmo_big_image_note_window_g1

0xf24b,	// (0x0001bf9d) popup_tmo_big_image_note_window_t1

0xf25b,	// (0x0001bfad) popup_tmo_big_image_note_window_t2

0xf26b,	// (0x0001bfbd) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001cc30) popup_tmo_big_image_note_window_t

0xbec2,	// (0x00018c14) cell_ai5_widget_lrg_icon_pane_g1

0xf27b,	// (0x0001bfcd) cell_ai5_widget_lrg_icon_pane_t1

0xf289,	// (0x0001bfdb) cell_ai5_widget_list_row_pane_ParamLimits

0xf289,	// (0x0001bfdb) cell_ai5_widget_list_row_pane

0xf2a0,	// (0x0001bff2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a0,	// (0x0001bff2) cell_ai5_widget_list_row_pane_g1

0xf2ad,	// (0x0001bfff) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2ad,	// (0x0001bfff) cell_ai5_widget_list_row_pane_t1

0xf2d8,	// (0x0001c02a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d8,	// (0x0001c02a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0001cc37) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001cc37) cell_ai5_widget_list_row_pane_t

0x5621,	// (0x00012373) main_fep_vtchi_ss_pane

0xf320,	// (0x0001c072) popup_fep_char_pre_window

0xf328,	// (0x0001c07a) popup_fep_ituss_window

0xf354,	// (0x0001c0a6) popup_fep_vkbss_window

0xf37e,	// (0x0001c0d0) grid_vkbss_keypad_pane_ParamLimits

0xf37e,	// (0x0001c0d0) grid_vkbss_keypad_pane

0xf38e,	// (0x0001c0e0) ituss_keypad_pane

0x78e1,	// (0x00014633) aid_vkbss_key_offset_ParamLimits

0x78e1,	// (0x00014633) aid_vkbss_key_offset

0x78ed,	// (0x0001463f) cell_vkbss_key_pane_ParamLimits

0x78ed,	// (0x0001463f) cell_vkbss_key_pane

0x91fc,	// (0x00015f4e) bg_cell_vkbss_key_g1_ParamLimits

0x91fc,	// (0x00015f4e) bg_cell_vkbss_key_g1

0xf39d,	// (0x0001c0ef) cell_vkbss_key_3p_pane_ParamLimits

0xf39d,	// (0x0001c0ef) cell_vkbss_key_3p_pane

0xf3b1,	// (0x0001c103) cell_vkbss_key_g1_ParamLimits

0xf3b1,	// (0x0001c103) cell_vkbss_key_g1

0xf3c5,	// (0x0001c117) cell_vkbss_key_t1_ParamLimits

0xf3c5,	// (0x0001c117) cell_vkbss_key_t1

0x7903,	// (0x00014655) cell_ituss_key_pane_ParamLimits

0x7903,	// (0x00014655) cell_ituss_key_pane

0xf3f0,	// (0x0001c142) bg_cell_ituss_key_g1_ParamLimits

0xf3f0,	// (0x0001c142) bg_cell_ituss_key_g1

0xf3fc,	// (0x0001c14e) cell_ituss_key_pane_g1_ParamLimits

0xf3fc,	// (0x0001c14e) cell_ituss_key_pane_g1

0x7914,	// (0x00014666) cell_ituss_key_pane_g2_ParamLimits

0x7914,	// (0x00014666) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x0001cc3e) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0001cc3e) cell_ituss_key_pane_g

0x7940,	// (0x00014692) cell_ituss_key_t1_ParamLimits

0x7940,	// (0x00014692) cell_ituss_key_t1

0x797a,	// (0x000146cc) cell_ituss_key_t2_ParamLimits

0x797a,	// (0x000146cc) cell_ituss_key_t2

0x79ab,	// (0x000146fd) cell_ituss_key_t3_ParamLimits

0x79ab,	// (0x000146fd) cell_ituss_key_t3

0x797a,	// (0x000146cc) cell_ituss_key_t4_ParamLimits

0x797a,	// (0x000146cc) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x0001cc45) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001cc45) cell_ituss_key_t

0xf422,	// (0x0001c174) cell_vkbss_key_3p_pane_g1

0xf42a,	// (0x0001c17c) cell_vkbss_key_3p_pane_g2

0xf432,	// (0x0001c184) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x0001cc50) cell_vkbss_key_3p_pane_g

0x8b39,	// (0x0001588b) bg_popup_fep_char_preview_window_cp02

0xf43a,	// (0x0001c18c) popup_fep_char_pre_window_t1

0xe84f,	// (0x0001b5a1) main_ai5_sk_pane

0xef1a,	// (0x0001bc6c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef26,	// (0x0001bc78) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc738,	// (0x0001948a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef3b,	// (0x0001bc8d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001cc22) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef47,	// (0x0001bc99) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4051,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf448,	// (0x0001c19a) main_ai5_sk_pane_g1

0x9966,	// (0x000166b8) popup_query_code_window_g1

0xf33e,	// (0x0001c090) popup_fep_vkb_icf_pane

0xf368,	// (0x0001c0ba) popup_fep_vtchi_icf_pane

0xf451,	// (0x0001c1a3) bg_icf_pane

0xf45d,	// (0x0001c1af) list_vkb_icf_pane

0xf46c,	// (0x0001c1be) bg_icf_pane_cp01

0xf47f,	// (0x0001c1d1) vtchi_icf_list_pane

0xf48f,	// (0x0001c1e1) list_vkb_icf_pane_t1_ParamLimits

0xf48f,	// (0x0001c1e1) list_vkb_icf_pane_t1

0xf4b0,	// (0x0001c202) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0001c202) vtchi_icf_list_pane_t1

0xf328,	// (0x0001c07a) popup_fep_ituss_window_ParamLimits

0xf368,	// (0x0001c0ba) popup_fep_vtchi_icf_pane_ParamLimits

0xf38e,	// (0x0001c0e0) ituss_keypad_pane_ParamLimits

0x78d5,	// (0x00014627) ituss_sks_pane

0xf451,	// (0x0001c1a3) bg_icf_pane_ParamLimits

0xf300,	// (0x0001c052) icf_edit_indi_pane_ParamLimits

0xf300,	// (0x0001c052) icf_edit_indi_pane

0xf45d,	// (0x0001c1af) list_vkb_icf_pane_ParamLimits

0xf46c,	// (0x0001c1be) bg_icf_pane_cp01_ParamLimits

0xf313,	// (0x0001c065) icf_edit_indi_pane_cp01_ParamLimits

0xf313,	// (0x0001c065) icf_edit_indi_pane_cp01

0xf487,	// (0x0001c1d9) vtchi_query_pane

0xe6d9,	// (0x0001b42b) icf_edit_indi_pane_g1_ParamLimits

0xe6d9,	// (0x0001b42b) icf_edit_indi_pane_g1

0xf525,	// (0x0001c277) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001c277) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001cc68) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001cc68) icf_edit_indi_pane_g

0xf537,	// (0x0001c289) icf_edit_indi_pane_t1

0xf4ce,	// (0x0001c220) bg_input_focus_pane_cp042

0x3f1d,	// (0x00010c6f) vtchi_button_pane

0xf4d7,	// (0x0001c229) vtchi_query_pane_t1

0xf4e5,	// (0x0001c237) vtchi_query_pane_t2

0xf4f3,	// (0x0001c245) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001cc57) vtchi_query_pane_t

0x5621,	// (0x00012373) bg_button_pane_cp13

0xf501,	// (0x0001c253) vtchi_button_pane_g1

0x79ee,	// (0x00014740) ituss_sks_pane_g1

0x79f9,	// (0x0001474b) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001cc5e) ituss_sks_pane_g

0xf509,	// (0x0001c25b) ituss_sks_pane_t1

0xf517,	// (0x0001c269) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001cc63) ituss_sks_pane_t

0xb8f2,	// (0x00018644) indicator_nsta_pane_cp_g1

0xb8fa,	// (0x0001864c) indicator_nsta_pane_cp_g2

0xb902,	// (0x00018654) indicator_nsta_pane_cp_g3

0xb8f2,	// (0x00018644) indicator_nsta_pane_cp_g4

0xb8fa,	// (0x0001864c) indicator_nsta_pane_cp_g5

0xb902,	// (0x00018654) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001c807) indicator_nsta_pane_cp_g

0xe430,	// (0x0001b182) cell_graphic2_pane_t2_ParamLimits

0xe430,	// (0x0001b182) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001cb19) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001cb19) cell_graphic2_pane_t

0xe45d,	// (0x0001b1af) cell_graphic2_control_pane_t1

0x876e,	// (0x000154c0) signal_pane_g3_ParamLimits

0x876e,	// (0x000154c0) signal_pane_g3

0x8780,	// (0x000154d2) signal_pane_g4_ParamLimits

0x8780,	// (0x000154d2) signal_pane_g4

0xf2ea,	// (0x0001c03c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ea,	// (0x0001c03c) cell_ai5_widget_list_row_pane_t3

0xf410,	// (0x0001c162) cell_ituss_key_pane_t1_ParamLimits

0xf410,	// (0x0001c162) cell_ituss_key_pane_t1

0x9560,	// (0x000162b2) form_field_data_wide_pane_vc_t2_ParamLimits

0x9560,	// (0x000162b2) form_field_data_wide_pane_vc_t2

0x9574,	// (0x000162c6) form_field_data_wide_pane_vc_t3_ParamLimits

0x9574,	// (0x000162c6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0001c54c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0001c54c) form_field_data_wide_pane_vc_t

0xb5b9,	// (0x0001830b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb5b9,	// (0x0001830b) form_field_slider_wide_pane_vc_t3

0xb697,	// (0x000183e9) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb697,	// (0x000183e9) form_field_popup_wide_pane_vc_t2

0xb6ae,	// (0x00018400) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb6ae,	// (0x00018400) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001c7f6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001c7f6) form_field_popup_wide_pane_vc_t

0x76a4,	// (0x000143f6) aid_fshwr2_btn_pane_ParamLimits

0x76b0,	// (0x00014402) aid_fshwr2_syb_pane_ParamLimits

0x76c2,	// (0x00014414) aid_fshwr2_txt_pane_ParamLimits

0x6ef6,	// (0x00013c48) fshwr2_bg_pane_ParamLimits

0x76ce,	// (0x00014420) fshwr2_func_candi_pane_ParamLimits

0x76ec,	// (0x0001443e) fshwr2_hwr_syb_pane_ParamLimits

0x7706,	// (0x00014458) fshwr2_icf_pane_ParamLimits

0xb52a,	// (0x0001827c) list_double_graphic_pane_vc_g4_ParamLimits

0xb52a,	// (0x0001827c) list_double_graphic_pane_vc_g4

0x7934,	// (0x00014686) cell_ituss_key_pane_g3_ParamLimits

0x7934,	// (0x00014686) cell_ituss_key_pane_g3

0x79dc,	// (0x0001472e) cell_ituss_key_t5_ParamLimits

0x79dc,	// (0x0001472e) cell_ituss_key_t5

0xf354,	// (0x0001c0a6) popup_fep_vkbss_window_ParamLimits

0xe859,	// (0x0001b5ab) aid_cell_ai5_quarter

0xf537,	// (0x0001c289) icf_edit_indi_pane_t1_ParamLimits

0x7c00,	// (0x00014952) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7c00,	// (0x00014952) aid_tch_indicator_popup_pane_cp2

0x7c13,	// (0x00014965) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7c13,	// (0x00014965) aid_tch_query_popup_data_pane_cp2

0x990e,	// (0x00016660) aid_tch_query_popup_pane_ParamLimits

0x990e,	// (0x00016660) aid_tch_query_popup_pane

0x990e,	// (0x00016660) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x990e,	// (0x00016660) aid_tch_query_popup_data_pane_cp1

0xed7d,	// (0x0001bacf) cell_fshwr2_syb_bg_pane_ParamLimits

0x7802,	// (0x00014554) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7816,	// (0x00014568) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf33e,	// (0x0001c090) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
