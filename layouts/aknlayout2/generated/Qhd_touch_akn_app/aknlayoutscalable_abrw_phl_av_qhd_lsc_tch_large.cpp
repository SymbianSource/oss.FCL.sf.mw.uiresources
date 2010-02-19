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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000474b6 };

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
0x7f77,	// (0x0004f42d) Screen

0x7f83,	// (0x0004f439) application_window_ParamLimits

0x7f83,	// (0x0004f439) application_window

0x8ac2,	// (0x0004ff78) screen_g1

0x6f08,	// (0x0004e3be) area_bottom_pane_ParamLimits

0x6f08,	// (0x0004e3be) area_bottom_pane

0x03fe,	// (0x000478b4) area_top_pane_ParamLimits

0x03fe,	// (0x000478b4) area_top_pane

0x049c,	// (0x00047952) main_pane_ParamLimits

0x049c,	// (0x00047952) main_pane

0x8acc,	// (0x0004ff82) misc_graphics

0x9115,	// (0x000505cb) battery_pane_ParamLimits

0x9115,	// (0x000505cb) battery_pane

0xcbad,	// (0x00054063) bg_status_flat_pane_g8

0xcbb5,	// (0x0005406b) bg_status_flat_pane_g9

0xc29f,	// (0x00053755) context_pane_ParamLimits

0xc29f,	// (0x00053755) context_pane

0x95b7,	// (0x00050a6d) navi_pane_ParamLimits

0x95b7,	// (0x00050a6d) navi_pane

0x962f,	// (0x00050ae5) signal_pane_ParamLimits

0x962f,	// (0x00050ae5) signal_pane

0x0008,

0xf883,	// (0x00056d39) bg_status_flat_pane_g

0x96bf,	// (0x00050b75) status_pane_g1_ParamLimits

0x96bf,	// (0x00050b75) status_pane_g1

0x96d5,	// (0x00050b8b) status_pane_g2_ParamLimits

0x96d5,	// (0x00050b8b) status_pane_g2

0xc304,	// (0x000537ba) status_pane_g3_ParamLimits

0xc304,	// (0x000537ba) status_pane_g3

0x0004,

0xf7bd,	// (0x00056c73) status_pane_g_ParamLimits

0xf7bd,	// (0x00056c73) status_pane_g

0x96e1,	// (0x00050b97) title_pane_ParamLimits

0x96e1,	// (0x00050b97) title_pane

0x9744,	// (0x00050bfa) uni_indicator_pane_ParamLimits

0x9744,	// (0x00050bfa) uni_indicator_pane

0xc0ca,	// (0x00053580) bg_list_pane_ParamLimits

0xc0ca,	// (0x00053580) bg_list_pane

0x86bc,	// (0x0004fb72) find_pane

0x86c4,	// (0x0004fb7a) listscroll_app_pane_ParamLimits

0x86c4,	// (0x0004fb7a) listscroll_app_pane

0xc0ea,	// (0x000535a0) listscroll_form_pane

0x86d0,	// (0x0004fb86) listscroll_gen_pane_ParamLimits

0x86d0,	// (0x0004fb86) listscroll_gen_pane

0xc0ea,	// (0x000535a0) listscroll_set_pane

0xc32a,	// (0x000537e0) main_idle_act_pane

0xbe9e,	// (0x00053354) main_idle_trad_pane

0xbe9e,	// (0x00053354) main_list_empty_pane

0xafaf,	// (0x00052465) main_midp_pane

0xc104,	// (0x000535ba) main_pane_g1_ParamLimits

0xc104,	// (0x000535ba) main_pane_g1

0x86f2,	// (0x0004fba8) popup_ai_message_window_ParamLimits

0x86f2,	// (0x0004fba8) popup_ai_message_window

0x8783,	// (0x0004fc39) popup_fep_china_uni_window_ParamLimits

0x8783,	// (0x0004fc39) popup_fep_china_uni_window

0xc13a,	// (0x000535f0) popup_fep_japan_candidate_window_ParamLimits

0xc13a,	// (0x000535f0) popup_fep_japan_candidate_window

0xc15a,	// (0x00053610) popup_fep_japan_predictive_window_ParamLimits

0xc15a,	// (0x00053610) popup_fep_japan_predictive_window

0x87df,	// (0x0004fc95) popup_find_window

0x87fc,	// (0x0004fcb2) popup_grid_graphic_window_ParamLimits

0x87fc,	// (0x0004fcb2) popup_grid_graphic_window

0xc18a,	// (0x00053640) popup_large_graphic_colour_window

0x8894,	// (0x0004fd4a) popup_menu_window_ParamLimits

0x8894,	// (0x0004fd4a) popup_menu_window

0x8d6e,	// (0x00050224) popup_note_image_window

0x8d34,	// (0x000501ea) popup_note_wait_window_ParamLimits

0x8d34,	// (0x000501ea) popup_note_wait_window

0x8d86,	// (0x0005023c) popup_note_window_ParamLimits

0x8d86,	// (0x0005023c) popup_note_window

0x8e2c,	// (0x000502e2) popup_query_code_window_ParamLimits

0x8e2c,	// (0x000502e2) popup_query_code_window

0xc1b0,	// (0x00053666) popup_query_data_code_window_ParamLimits

0xc1b0,	// (0x00053666) popup_query_data_code_window

0x8e66,	// (0x0005031c) popup_query_data_window_ParamLimits

0x8e66,	// (0x0005031c) popup_query_data_window

0x8edc,	// (0x00050392) popup_query_sat_info_window_ParamLimits

0x8edc,	// (0x00050392) popup_query_sat_info_window

0x8f73,	// (0x00050429) popup_snote_single_graphic_window_ParamLimits

0x8f73,	// (0x00050429) popup_snote_single_graphic_window

0x8f73,	// (0x00050429) popup_snote_single_text_window_ParamLimits

0x8f73,	// (0x00050429) popup_snote_single_text_window

0xc1cd,	// (0x00053683) popup_sub_window_general

0xc215,	// (0x000536cb) popup_window_general_ParamLimits

0xc215,	// (0x000536cb) popup_window_general

0xc22a,	// (0x000536e0) power_save_pane

0x769b,	// (0x0004eb51) control_pane_g1_ParamLimits

0x769b,	// (0x0004eb51) control_pane_g1

0x76c4,	// (0x0004eb7a) control_pane_g2_ParamLimits

0x76c4,	// (0x0004eb7a) control_pane_g2

0xc0ac,	// (0x00053562) control_pane_g3_ParamLimits

0xc0ac,	// (0x00053562) control_pane_g3

0x0007,

0xf7a5,	// (0x00056c5b) control_pane_g_ParamLimits

0xf7a5,	// (0x00056c5b) control_pane_g

0x7701,	// (0x0004ebb7) control_pane_t1_ParamLimits

0x7701,	// (0x0004ebb7) control_pane_t1

0x775f,	// (0x0004ec15) control_pane_t2_ParamLimits

0x775f,	// (0x0004ec15) control_pane_t2

0x0002,

0xf7b6,	// (0x00056c6c) control_pane_t_ParamLimits

0xf7b6,	// (0x00056c6c) control_pane_t

0xbfcd,	// (0x00053483) navi_navi_volume_pane_cp1

0xbfd6,	// (0x0005348c) status_small_icon_pane

0xbfde,	// (0x00053494) status_small_pane_g1_ParamLimits

0xbfde,	// (0x00053494) status_small_pane_g1

0xc012,	// (0x000534c8) status_small_pane_g2_ParamLimits

0xc012,	// (0x000534c8) status_small_pane_g2

0xc01e,	// (0x000534d4) status_small_pane_g3_ParamLimits

0xc01e,	// (0x000534d4) status_small_pane_g3

0xc02a,	// (0x000534e0) status_small_pane_g4_ParamLimits

0xc02a,	// (0x000534e0) status_small_pane_g4

0xc036,	// (0x000534ec) status_small_pane_g5_ParamLimits

0xc036,	// (0x000534ec) status_small_pane_g5

0xc045,	// (0x000534fb) status_small_pane_g6_ParamLimits

0xc045,	// (0x000534fb) status_small_pane_g6

0x0007,

0xf794,	// (0x00056c4a) status_small_pane_g_ParamLimits

0xf794,	// (0x00056c4a) status_small_pane_g

0xc075,	// (0x0005352b) status_small_pane_t1

0xc098,	// (0x0005354e) status_small_wait_pane_ParamLimits

0xc098,	// (0x0005354e) status_small_wait_pane

0x84eb,	// (0x0004f9a1) aid_levels_signal_ParamLimits

0x84eb,	// (0x0004f9a1) aid_levels_signal

0x8503,	// (0x0004f9b9) signal_pane_g1_ParamLimits

0x8503,	// (0x0004f9b9) signal_pane_g1

0x851e,	// (0x0004f9d4) signal_pane_g2_ParamLimits

0x851e,	// (0x0004f9d4) signal_pane_g2

0x0003,

0xf725,	// (0x00056bdb) signal_pane_g_ParamLimits

0xf725,	// (0x00056bdb) signal_pane_g

0xb8df,	// (0x00052d95) context_pane_g1

0x7f93,	// (0x0004f449) title_pane_g1

0x7fca,	// (0x0004f480) title_pane_t1

0x8ae2,	// (0x0004ff98) title_pane_t2

0x8b08,	// (0x0004ffbe) title_pane_t3

0x0002,

0xf56f,	// (0x00056a25) title_pane_t

0x976c,	// (0x00050c22) aid_levels_battery_ParamLimits

0x976c,	// (0x00050c22) aid_levels_battery

0x9788,	// (0x00050c3e) battery_pane_g1_ParamLimits

0x9788,	// (0x00050c3e) battery_pane_g1

0x97a5,	// (0x00050c5b) battery_pane_g2_ParamLimits

0x97a5,	// (0x00050c5b) battery_pane_g2

0x0001,

0xf7c8,	// (0x00056c7e) battery_pane_g_ParamLimits

0xf7c8,	// (0x00056c7e) battery_pane_g

0xd434,	// (0x000548ea) uni_indicator_pane_g1

0xd449,	// (0x000548ff) uni_indicator_pane_g2

0xd45f,	// (0x00054915) uni_indicator_pane_g3

0x0005,

0xf92b,	// (0x00056de1) uni_indicator_pane_g

0xbd1c,	// (0x000531d2) navi_icon_pane_ParamLimits

0xbd1c,	// (0x000531d2) navi_icon_pane

0xbc65,	// (0x0005311b) navi_midp_pane

0xbd38,	// (0x000531ee) navi_navi_pane

0xbd42,	// (0x000531f8) navi_text_pane_ParamLimits

0xbd42,	// (0x000531f8) navi_text_pane

0x8ac2,	// (0x0004ff78) status_small_wait_pane_g1

0x929b,	// (0x00050751) status_small_wait_pane_g2

0x0001,

0xf926,	// (0x00056ddc) status_small_wait_pane_g

0xd180,	// (0x00054636) navi_navi_icon_text_pane

0xd188,	// (0x0005463e) navi_navi_pane_g1_ParamLimits

0xd188,	// (0x0005463e) navi_navi_pane_g1

0xd19a,	// (0x00054650) navi_navi_pane_g2_ParamLimits

0xd19a,	// (0x00054650) navi_navi_pane_g2

0x0001,

0xf8f4,	// (0x00056daa) navi_navi_pane_g_ParamLimits

0xf8f4,	// (0x00056daa) navi_navi_pane_g

0xd1ac,	// (0x00054662) navi_navi_tabs_pane

0xd1b5,	// (0x0005466b) navi_navi_text_pane

0xd180,	// (0x00054636) navi_navi_volume_pane

0xd15c,	// (0x00054612) navi_text_pane_t1

0xd150,	// (0x00054606) navi_icon_pane_g1

0xd07f,	// (0x00054535) navi_navi_text_pane_t1

0x79bf,	// (0x0004ee75) navi_navi_volume_pane_g1

0x79c7,	// (0x0004ee7d) volume_small_pane

0x99b2,	// (0x00050e68) navi_navi_icon_text_pane_g1

0x99ba,	// (0x00050e70) navi_navi_icon_text_pane_t1

0xbd38,	// (0x000531ee) navi_tabs_2_long_pane

0xbd38,	// (0x000531ee) navi_tabs_2_pane

0xbd38,	// (0x000531ee) navi_tabs_3_long_pane

0xbd38,	// (0x000531ee) navi_tabs_3_pane

0xbd38,	// (0x000531ee) navi_tabs_4_pane

0x799f,	// (0x0004ee55) tabs_2_active_pane_ParamLimits

0x799f,	// (0x0004ee55) tabs_2_active_pane

0x79af,	// (0x0004ee65) tabs_2_passive_pane_ParamLimits

0x79af,	// (0x0004ee65) tabs_2_passive_pane

0x796d,	// (0x0004ee23) tabs_3_active_pane_ParamLimits

0x796d,	// (0x0004ee23) tabs_3_active_pane

0x797d,	// (0x0004ee33) tabs_3_passive_pane_ParamLimits

0x797d,	// (0x0004ee33) tabs_3_passive_pane

0x798e,	// (0x0004ee44) tabs_3_passive_pane_cp_ParamLimits

0x798e,	// (0x0004ee44) tabs_3_passive_pane_cp

0x7929,	// (0x0004eddf) tabs_4_active_pane_ParamLimits

0x7929,	// (0x0004eddf) tabs_4_active_pane

0x793a,	// (0x0004edf0) tabs_4_passive_pane_ParamLimits

0x793a,	// (0x0004edf0) tabs_4_passive_pane

0x794b,	// (0x0004ee01) tabs_4_passive_pane_cp_ParamLimits

0x794b,	// (0x0004ee01) tabs_4_passive_pane_cp

0x795c,	// (0x0004ee12) tabs_4_passive_pane_cp2_ParamLimits

0x795c,	// (0x0004ee12) tabs_4_passive_pane_cp2

0x7909,	// (0x0004edbf) tabs_2_long_active_pane_ParamLimits

0x7909,	// (0x0004edbf) tabs_2_long_active_pane

0x7919,	// (0x0004edcf) tabs_2_long_passive_pane_ParamLimits

0x7919,	// (0x0004edcf) tabs_2_long_passive_pane

0x78d6,	// (0x0004ed8c) tabs_3_long_active_pane_ParamLimits

0x78d6,	// (0x0004ed8c) tabs_3_long_active_pane

0x78e7,	// (0x0004ed9d) tabs_3_long_passive_pane_ParamLimits

0x78e7,	// (0x0004ed9d) tabs_3_long_passive_pane

0x78f8,	// (0x0004edae) tabs_3_long_passive_pane_cp_ParamLimits

0x78f8,	// (0x0004edae) tabs_3_long_passive_pane_cp

0x15b5,	// (0x00048a6b) volume_small_pane_g1

0x7885,	// (0x0004ed3b) volume_small_pane_g2

0x788e,	// (0x0004ed44) volume_small_pane_g3

0x7897,	// (0x0004ed4d) volume_small_pane_g4

0x78a0,	// (0x0004ed56) volume_small_pane_g5

0x78a9,	// (0x0004ed5f) volume_small_pane_g6

0x78b2,	// (0x0004ed68) volume_small_pane_g7

0x78bb,	// (0x0004ed71) volume_small_pane_g8

0x78c4,	// (0x0004ed7a) volume_small_pane_g9

0x78cd,	// (0x0004ed83) volume_small_pane_g10

0x0009,

0xf8c0,	// (0x00056d76) volume_small_pane_g

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp2_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp2

0x8056,	// (0x0004f50c) tabs_3_active_pane_g1

0x805e,	// (0x0004f514) tabs_3_active_pane_t1

0x8b1a,	// (0x0004ffd0) bg_passive_tab_pane_cp2_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_passive_tab_pane_cp2

0x8056,	// (0x0004f50c) tabs_3_passive_pane_g1

0x805e,	// (0x0004f514) tabs_3_passive_pane_t1

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp3_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp3

0x8070,	// (0x0004f526) tabs_4_active_pane_g1

0x8078,	// (0x0004f52e) tabs_4_active_pane_t1

0x8b1a,	// (0x0004ffd0) bg_passive_tab_pane_cp3_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_passive_tab_pane_cp3

0x8070,	// (0x0004f526) tabs_4_1_passive_pane_g1

0x8078,	// (0x0004f52e) tabs_4_1_passive_pane_t1

0xafaf,	// (0x00052465) list_highlight_pane_cp2

0x9af6,	// (0x00050fac) list_set_pane_ParamLimits

0x9af6,	// (0x00050fac) list_set_pane

0x9b90,	// (0x00051046) main_pane_set_t1_ParamLimits

0x9b90,	// (0x00051046) main_pane_set_t1

0x9bb0,	// (0x00051066) main_pane_set_t2_ParamLimits

0x9bb0,	// (0x00051066) main_pane_set_t2

0x9bc4,	// (0x0005107a) main_pane_set_t3_ParamLimits

0x9bc4,	// (0x0005107a) main_pane_set_t3

0x9bd6,	// (0x0005108c) main_pane_set_t4_ParamLimits

0x9bd6,	// (0x0005108c) main_pane_set_t4

0x0003,

0xf990,	// (0x00056e46) main_pane_set_t_ParamLimits

0xf990,	// (0x00056e46) main_pane_set_t

0x9be8,	// (0x0005109e) setting_code_pane

0x9bf2,	// (0x000510a8) setting_slider_graphic_pane

0x9bf2,	// (0x000510a8) setting_slider_pane

0x9bf2,	// (0x000510a8) setting_text_pane

0x9bf2,	// (0x000510a8) setting_volume_pane

0x06e1,	// (0x00047b97) volume_set_pane

0x8b28,	// (0x0004ffde) bg_set_opt_pane_cp

0x06e9,	// (0x00047b9f) setting_slider_pane_t1

0x0702,	// (0x00047bb8) setting_slider_pane_t2

0x071c,	// (0x00047bd2) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00056a2c) setting_slider_pane_t

0x0734,	// (0x00047bea) slider_set_pane

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp2

0x8b36,	// (0x0004ffec) setting_slider_graphic_pane_g1

0x074a,	// (0x00047c00) setting_slider_graphic_pane_t1

0x075a,	// (0x00047c10) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00056a33) setting_slider_graphic_pane_t

0x076a,	// (0x00047c20) slider_set_pane_cp

0x8acc,	// (0x0004ff82) input_focus_pane_cp1

0xd642,	// (0x00054af8) list_set_text_pane

0x8ac2,	// (0x0004ff78) setting_text_pane_g1

0x8acc,	// (0x0004ff82) input_focus_pane_cp2

0x8ac2,	// (0x0004ff78) setting_code_pane_g1

0x8b3f,	// (0x0004fff5) setting_code_pane_t1

0x0772,	// (0x00047c28) set_text_pane_t1_ParamLimits

0x0772,	// (0x00047c28) set_text_pane_t1

0xaebe,	// (0x00052374) set_opt_bg_pane_g1

0xaec6,	// (0x0005237c) set_opt_bg_pane_g2

0xd61c,	// (0x00054ad2) set_opt_bg_pane_g3

0xaed6,	// (0x0005238c) set_opt_bg_pane_g4

0xaede,	// (0x00052394) set_opt_bg_pane_g5

0xaee6,	// (0x0005239c) set_opt_bg_pane_g6

0xd626,	// (0x00054adc) set_opt_bg_pane_g7

0xd62e,	// (0x00054ae4) set_opt_bg_pane_g8

0xd638,	// (0x00054aee) set_opt_bg_pane_g9

0x0008,

0xf97d,	// (0x00056e33) set_opt_bg_pane_g

0xd60f,	// (0x00054ac5) slider_set_pane_g1

0x177d,	// (0x00048c33) slider_set_pane_g2

0x0006,

0xf96e,	// (0x00056e24) slider_set_pane_g

0x1719,	// (0x00048bcf) volume_set_pane_g1

0x1721,	// (0x00048bd7) volume_set_pane_g2

0x1729,	// (0x00048bdf) volume_set_pane_g3

0x1731,	// (0x00048be7) volume_set_pane_g4

0x1739,	// (0x00048bef) volume_set_pane_g5

0x1741,	// (0x00048bf7) volume_set_pane_g6

0x1749,	// (0x00048bff) volume_set_pane_g7

0x1751,	// (0x00048c07) volume_set_pane_g8

0x1759,	// (0x00048c0f) volume_set_pane_g9

0x1761,	// (0x00048c17) volume_set_pane_g10

0x0009,

0xf946,	// (0x00056dfc) volume_set_pane_g

0x808a,	// (0x0004f540) indicator_pane_ParamLimits

0x808a,	// (0x0004f540) indicator_pane

0x80b2,	// (0x0004f568) main_idle_pane_g2_ParamLimits

0x80b2,	// (0x0004f568) main_idle_pane_g2

0x80ea,	// (0x0004f5a0) main_pane_idle_g1_ParamLimits

0x80ea,	// (0x0004f5a0) main_pane_idle_g1

0x8b4d,	// (0x00050003) popup_clock_digital_analogue_window_ParamLimits

0x8b4d,	// (0x00050003) popup_clock_digital_analogue_window

0x8111,	// (0x0004f5c7) soft_indicator_pane_ParamLimits

0x8111,	// (0x0004f5c7) soft_indicator_pane

0x812b,	// (0x0004f5e1) wallpaper_pane_ParamLimits

0x812b,	// (0x0004f5e1) wallpaper_pane

0x8ac2,	// (0x0004ff78) wallpaper_pane_g1

0x813d,	// (0x0004f5f3) indicator_pane_g1_ParamLimits

0x813d,	// (0x0004f5f3) indicator_pane_g1

0xd799,	// (0x00054c4f) navi_navi_icon_text_pane_srt_g1

0x8b7b,	// (0x00050031) soft_indicator_pane_t1

0x8b95,	// (0x0005004b) aid_ps_area_pane

0x8153,	// (0x0004f609) aid_ps_clock_pane

0x8ba6,	// (0x0005005c) aid_ps_indicator_pane

0x8bb2,	// (0x00050068) indicator_ps_pane_ParamLimits

0x8bb2,	// (0x00050068) indicator_ps_pane

0x8bc1,	// (0x00050077) power_save_pane_g1_ParamLimits

0x8bc1,	// (0x00050077) power_save_pane_g1

0x8bcd,	// (0x00050083) power_save_pane_g2_ParamLimits

0x8bcd,	// (0x00050083) power_save_pane_g2

0x02f2,	// (0x000477a8) aid_navinavi_width_pane

0x8b95,	// (0x0005004b) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00056a38) power_save_pane_g_ParamLimits

0xf582,	// (0x00056a38) power_save_pane_g

0x8bdb,	// (0x00050091) power_save_pane_t1_ParamLimits

0x8bdb,	// (0x00050091) power_save_pane_t1

0x8153,	// (0x0004f609) aid_ps_clock_pane_ParamLimits

0x8ba6,	// (0x0005005c) aid_ps_indicator_pane_ParamLimits

0x8bed,	// (0x000500a3) power_save_pane_t4_ParamLimits

0x8bed,	// (0x000500a3) power_save_pane_t4

0x0001,

0xf587,	// (0x00056a3d) power_save_pane_t_ParamLimits

0xf587,	// (0x00056a3d) power_save_pane_t

0x8c17,	// (0x000500cd) power_save_t3_ParamLimits

0x8c17,	// (0x000500cd) power_save_t3

0x8c02,	// (0x000500b8) power_save_t2_ParamLimits

0x8c02,	// (0x000500b8) power_save_t2

0x8c2c,	// (0x000500e2) indicator_ps_pane_g1

0x8161,	// (0x0004f617) ai_gene_pane_ParamLimits

0x8161,	// (0x0004f617) ai_gene_pane

0x8178,	// (0x0004f62e) ai_links_pane_ParamLimits

0x8178,	// (0x0004f62e) ai_links_pane

0x8190,	// (0x0004f646) indicator_pane_cp1_ParamLimits

0x8190,	// (0x0004f646) indicator_pane_cp1

0x819f,	// (0x0004f655) main_pane_idle_g1_cp_ParamLimits

0x819f,	// (0x0004f655) main_pane_idle_g1_cp

0x8c35,	// (0x000500eb) popup_ai_links_title_window

0x81b7,	// (0x0004f66d) soft_indicator_pane_cp1_ParamLimits

0x81b7,	// (0x0004f66d) soft_indicator_pane_cp1

0xd422,	// (0x000548d8) ai_links_pane_g1

0xd42b,	// (0x000548e1) grid_ai_links_pane

0x9a7a,	// (0x00050f30) ai_gene_pane_1

0xd410,	// (0x000548c6) ai_gene_pane_2

0xd419,	// (0x000548cf) list_highlight_pane_cp4

0x9a56,	// (0x00050f0c) cell_ai_link_pane_ParamLimits

0x9a56,	// (0x00050f0c) cell_ai_link_pane

0xd408,	// (0x000548be) cell_ai_link_pane_g1

0x929b,	// (0x00050751) cell_ai_link_pane_g2

0x0001,

0xf921,	// (0x00056dd7) cell_ai_link_pane_g

0x8acc,	// (0x0004ff82) grid_highlight_cp2

0x8acc,	// (0x0004ff82) bg_popup_sub_pane_cp1

0x8c4c,	// (0x00050102) popup_ai_links_title_window_t1

0xd356,	// (0x0005480c) ai_gene_pane_1_g1_ParamLimits

0xd356,	// (0x0005480c) ai_gene_pane_1_g1

0xd362,	// (0x00054818) ai_gene_pane_1_g2_ParamLimits

0xd362,	// (0x00054818) ai_gene_pane_1_g2

0x0001,

0xf917,	// (0x00056dcd) ai_gene_pane_1_g_ParamLimits

0xf917,	// (0x00056dcd) ai_gene_pane_1_g

0xd36f,	// (0x00054825) ai_gene_pane_1_t1_ParamLimits

0xd36f,	// (0x00054825) ai_gene_pane_1_t1

0xd3a3,	// (0x00054859) grid_ai_soft_ind_pane

0xd341,	// (0x000547f7) ai_gene_pane_2_t1_ParamLimits

0xd341,	// (0x000547f7) ai_gene_pane_2_t1

0x81cb,	// (0x0004f681) main_pane_empty_t1_ParamLimits

0x81cb,	// (0x0004f681) main_pane_empty_t1

0x81e3,	// (0x0004f699) main_pane_empty_t2_ParamLimits

0x81e3,	// (0x0004f699) main_pane_empty_t2

0x81f8,	// (0x0004f6ae) main_pane_empty_t3_ParamLimits

0x81f8,	// (0x0004f6ae) main_pane_empty_t3

0x820a,	// (0x0004f6c0) main_pane_empty_t4_ParamLimits

0x820a,	// (0x0004f6c0) main_pane_empty_t4

0x821c,	// (0x0004f6d2) main_pane_empty_t5_ParamLimits

0x821c,	// (0x0004f6d2) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00056a42) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00056a42) main_pane_empty_t

0xaf0f,	// (0x000523c5) bg_popup_window_pane_ParamLimits

0xaf0f,	// (0x000523c5) bg_popup_window_pane

0xd08d,	// (0x00054543) find_popup_pane_cp2_ParamLimits

0xd08d,	// (0x00054543) find_popup_pane_cp2

0xd099,	// (0x0005454f) heading_pane_ParamLimits

0xd099,	// (0x0005454f) heading_pane

0x8acc,	// (0x0004ff82) bg_popup_sub_pane

0x99d7,	// (0x00050e8d) bg_popup_window_pane_g1_ParamLimits

0x99d7,	// (0x00050e8d) bg_popup_window_pane_g1

0x99e6,	// (0x00050e9c) bg_popup_window_pane_g2_ParamLimits

0x99e6,	// (0x00050e9c) bg_popup_window_pane_g2

0x99f2,	// (0x00050ea8) bg_popup_window_pane_g3_ParamLimits

0x99f2,	// (0x00050ea8) bg_popup_window_pane_g3

0x99fe,	// (0x00050eb4) bg_popup_window_pane_g4_ParamLimits

0x99fe,	// (0x00050eb4) bg_popup_window_pane_g4

0x9a0d,	// (0x00050ec3) bg_popup_window_pane_g5_ParamLimits

0x9a0d,	// (0x00050ec3) bg_popup_window_pane_g5

0x9a1d,	// (0x00050ed3) bg_popup_window_pane_g6_ParamLimits

0x9a1d,	// (0x00050ed3) bg_popup_window_pane_g6

0x9a29,	// (0x00050edf) bg_popup_window_pane_g7_ParamLimits

0x9a29,	// (0x00050edf) bg_popup_window_pane_g7

0x9a38,	// (0x00050eee) bg_popup_window_pane_g8_ParamLimits

0x9a38,	// (0x00050eee) bg_popup_window_pane_g8

0x9a47,	// (0x00050efd) bg_popup_window_pane_g9_ParamLimits

0x9a47,	// (0x00050efd) bg_popup_window_pane_g9

0xd073,	// (0x00054529) bg_popup_window_pane_g10_ParamLimits

0xd073,	// (0x00054529) bg_popup_window_pane_g10

0x0009,

0xf8df,	// (0x00056d95) bg_popup_window_pane_g_ParamLimits

0xf8df,	// (0x00056d95) bg_popup_window_pane_g

0xd02a,	// (0x000544e0) bg_popup_heading_pane_ParamLimits

0xd02a,	// (0x000544e0) bg_popup_heading_pane

0x1805,	// (0x00048cbb) tabs_4_passive_pane_cp_srt_ParamLimits

0x1805,	// (0x00048cbb) tabs_4_passive_pane_cp_srt

0x1817,	// (0x00048ccd) tabs_4_passive_pane_srt_ParamLimits

0xd03e,	// (0x000544f4) heading_pane_g2

0x1817,	// (0x00048ccd) tabs_4_passive_pane_srt

0xc510,	// (0x000539c6) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc510,	// (0x000539c6) bg_passive_tab_pane_cp3_srt

0xd046,	// (0x000544fc) heading_pane_t1_ParamLimits

0xd046,	// (0x000544fc) heading_pane_t1

0xd05d,	// (0x00054513) heading_pane_t2_ParamLimits

0xd05d,	// (0x00054513) heading_pane_t2

0x0001,

0xf8da,	// (0x00056d90) heading_pane_t_ParamLimits

0xf8da,	// (0x00056d90) heading_pane_t

0xcb75,	// (0x0005402b) bg_popup_heading_pane_g1

0xcc06,	// (0x000540bc) bg_popup_heading_pane_g2

0xcc10,	// (0x000540c6) bg_popup_heading_pane_g3

0xcc1a,	// (0x000540d0) bg_popup_heading_pane_g4

0xcc24,	// (0x000540da) bg_popup_heading_pane_g5

0xcc2e,	// (0x000540e4) bg_popup_heading_pane_g6

0xcc36,	// (0x000540ec) bg_popup_heading_pane_g7

0xcc3e,	// (0x000540f4) bg_popup_heading_pane_g8

0xcc48,	// (0x000540fe) bg_popup_heading_pane_g9

0x0008,

0xf896,	// (0x00056d4c) bg_popup_heading_pane_g

0xc418,	// (0x000538ce) bg_popup_sub_pane_g1

0xc428,	// (0x000538de) bg_popup_sub_pane_g2

0xc420,	// (0x000538d6) bg_popup_sub_pane_g3

0xc438,	// (0x000538ee) bg_popup_sub_pane_g4

0xc430,	// (0x000538e6) bg_popup_sub_pane_g5

0xc440,	// (0x000538f6) bg_popup_sub_pane_g6

0xc448,	// (0x000538fe) bg_popup_sub_pane_g7

0xc458,	// (0x0005390e) bg_popup_sub_pane_g8

0xc450,	// (0x00053906) bg_popup_sub_pane_g9

0x0008,

0xf870,	// (0x00056d26) bg_popup_sub_pane_g

0x8b1a,	// (0x0004ffd0) bg_popup_window_pane_cp5_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_popup_window_pane_cp5

0x8c69,	// (0x0005011f) popup_note_window_g1_ParamLimits

0x8c69,	// (0x0005011f) popup_note_window_g1

0x8c75,	// (0x0005012b) popup_note_window_t1_ParamLimits

0x8c75,	// (0x0005012b) popup_note_window_t1

0x8c8b,	// (0x00050141) popup_note_window_t2_ParamLimits

0x8c8b,	// (0x00050141) popup_note_window_t2

0x8ca1,	// (0x00050157) popup_note_window_t3_ParamLimits

0x8ca1,	// (0x00050157) popup_note_window_t3

0x8cb7,	// (0x0005016d) popup_note_window_t4_ParamLimits

0x8cb7,	// (0x0005016d) popup_note_window_t4

0x8cdf,	// (0x00050195) popup_note_window_t5_ParamLimits

0x8cdf,	// (0x00050195) popup_note_window_t5

0x0004,

0xf597,	// (0x00056a4d) popup_note_window_t_ParamLimits

0xf597,	// (0x00056a4d) popup_note_window_t

0x8d03,	// (0x000501b9) bg_popup_window_pane_cp6_ParamLimits

0x8d03,	// (0x000501b9) bg_popup_window_pane_cp6

0xcaf1,	// (0x00053fa7) popup_note_image_window_g1_ParamLimits

0xcaf1,	// (0x00053fa7) popup_note_image_window_g1

0xcafd,	// (0x00053fb3) popup_note_image_window_g2_ParamLimits

0xcafd,	// (0x00053fb3) popup_note_image_window_g2

0x0001,

0xf864,	// (0x00056d1a) popup_note_image_window_g_ParamLimits

0xf864,	// (0x00056d1a) popup_note_image_window_g

0xcb16,	// (0x00053fcc) popup_note_image_window_t1_ParamLimits

0xcb16,	// (0x00053fcc) popup_note_image_window_t1

0xcb2f,	// (0x00053fe5) popup_note_image_window_t2_ParamLimits

0xcb2f,	// (0x00053fe5) popup_note_image_window_t2

0xcb48,	// (0x00053ffe) popup_note_image_window_t3_ParamLimits

0xcb48,	// (0x00053ffe) popup_note_image_window_t3

0x0002,

0xf869,	// (0x00056d1f) popup_note_image_window_t_ParamLimits

0xf869,	// (0x00056d1f) popup_note_image_window_t

0xc9c2,	// (0x00053e78) bg_popup_window_pane_cp7_ParamLimits

0xc9c2,	// (0x00053e78) bg_popup_window_pane_cp7

0xc9f2,	// (0x00053ea8) popup_note_wait_window_g1_ParamLimits

0xc9f2,	// (0x00053ea8) popup_note_wait_window_g1

0xc9fe,	// (0x00053eb4) popup_note_wait_window_g2_ParamLimits

0xc9fe,	// (0x00053eb4) popup_note_wait_window_g2

0x0002,

0xf852,	// (0x00056d08) popup_note_wait_window_g_ParamLimits

0xf852,	// (0x00056d08) popup_note_wait_window_g

0xca22,	// (0x00053ed8) popup_note_wait_window_t1_ParamLimits

0xca22,	// (0x00053ed8) popup_note_wait_window_t1

0xca49,	// (0x00053eff) popup_note_wait_window_t2_ParamLimits

0xca49,	// (0x00053eff) popup_note_wait_window_t2

0xca66,	// (0x00053f1c) popup_note_wait_window_t3_ParamLimits

0xca66,	// (0x00053f1c) popup_note_wait_window_t3

0xca79,	// (0x00053f2f) popup_note_wait_window_t4_ParamLimits

0xca79,	// (0x00053f2f) popup_note_wait_window_t4

0x0004,

0xf859,	// (0x00056d0f) popup_note_wait_window_t_ParamLimits

0xf859,	// (0x00056d0f) popup_note_wait_window_t

0xca9e,	// (0x00053f54) wait_bar_pane_ParamLimits

0xca9e,	// (0x00053f54) wait_bar_pane

0x8acc,	// (0x0004ff82) wait_anim_pane

0x8acc,	// (0x0004ff82) wait_border_pane

0x8ac2,	// (0x0004ff78) wait_anim_pane_g1

0x8ac2,	// (0x0004ff78) wait_anim_pane_g2

0x0001,

0xf720,	// (0x00056bd6) wait_anim_pane_g

0xc966,	// (0x00053e1c) wait_border_pane_g1

0xc971,	// (0x00053e27) wait_border_pane_g2

0xc97a,	// (0x00053e30) wait_border_pane_g3

0x0002,

0xf84b,	// (0x00056d01) wait_border_pane_g

0xc7d1,	// (0x00053c87) bg_popup_window_pane_cp16_ParamLimits

0xc7d1,	// (0x00053c87) bg_popup_window_pane_cp16

0xc8d1,	// (0x00053d87) indicator_popup_pane_cp4_ParamLimits

0xc8d1,	// (0x00053d87) indicator_popup_pane_cp4

0xc8e5,	// (0x00053d9b) popup_query_data_window_t1_ParamLimits

0xc8e5,	// (0x00053d9b) popup_query_data_window_t1

0xc8f7,	// (0x00053dad) popup_query_data_window_t2_ParamLimits

0xc8f7,	// (0x00053dad) popup_query_data_window_t2

0xc910,	// (0x00053dc6) popup_query_data_window_t3_ParamLimits

0xc910,	// (0x00053dc6) popup_query_data_window_t3

0x0002,

0xf844,	// (0x00056cfa) popup_query_data_window_t_ParamLimits

0xf844,	// (0x00056cfa) popup_query_data_window_t

0xc92a,	// (0x00053de0) query_popup_data_pane_ParamLimits

0xc92a,	// (0x00053de0) query_popup_data_pane

0xc93e,	// (0x00053df4) query_popup_data_pane_cp1_ParamLimits

0xc93e,	// (0x00053df4) query_popup_data_pane_cp1

0xc7d1,	// (0x00053c87) bg_popup_window_pane_cp10_ParamLimits

0xc7d1,	// (0x00053c87) bg_popup_window_pane_cp10

0xc803,	// (0x00053cb9) indicator_popup_pane_ParamLimits

0xc803,	// (0x00053cb9) indicator_popup_pane

0xc825,	// (0x00053cdb) popup_query_code_window_t1_ParamLimits

0xc825,	// (0x00053cdb) popup_query_code_window_t1

0xc83f,	// (0x00053cf5) popup_query_code_window_t2_ParamLimits

0xc83f,	// (0x00053cf5) popup_query_code_window_t2

0xc888,	// (0x00053d3e) popup_query_code_window_t3_ParamLimits

0xc888,	// (0x00053d3e) popup_query_code_window_t3

0x0002,

0xf83d,	// (0x00056cf3) popup_query_code_window_t_ParamLimits

0xf83d,	// (0x00056cf3) popup_query_code_window_t

0xc8b7,	// (0x00053d6d) query_popup_pane_ParamLimits

0xc8b7,	// (0x00053d6d) query_popup_pane

0x8d03,	// (0x000501b9) bg_popup_window_pane_cp15_ParamLimits

0x8d03,	// (0x000501b9) bg_popup_window_pane_cp15

0x8d21,	// (0x000501d7) indicator_popup_pane_cp1_ParamLimits

0x8d21,	// (0x000501d7) indicator_popup_pane_cp1

0x91e0,	// (0x00050696) indicator_popup_pane_cp2_ParamLimits

0x91e0,	// (0x00050696) indicator_popup_pane_cp2

0x91f3,	// (0x000506a9) popup_query_data_code_window_g1_ParamLimits

0x91f3,	// (0x000506a9) popup_query_data_code_window_g1

0x9206,	// (0x000506bc) popup_query_data_code_window_t1_ParamLimits

0x9206,	// (0x000506bc) popup_query_data_code_window_t1

0x9218,	// (0x000506ce) popup_query_data_code_window_t2_ParamLimits

0x9218,	// (0x000506ce) popup_query_data_code_window_t2

0x922a,	// (0x000506e0) popup_query_data_code_window_t3_ParamLimits

0x922a,	// (0x000506e0) popup_query_data_code_window_t3

0x9240,	// (0x000506f6) popup_query_data_code_window_t4_ParamLimits

0x9240,	// (0x000506f6) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00056a58) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00056a58) popup_query_data_code_window_t

0x14c6,	// (0x0004897c) list_single_midp_graphic_pane_g3

0x9258,	// (0x0005070e) query_popup_data_pane_cp2_ParamLimits

0x926b,	// (0x00050721) query_popup_pane_cp2_ParamLimits

0x926b,	// (0x00050721) query_popup_pane_cp2

0x8acc,	// (0x0004ff82) bg_popup_window_pane_cp11

0xc7c9,	// (0x00053c7f) heading_pane_cp5

0x92f9,	// (0x000507af) listscroll_popup_info_pane

0x8acc,	// (0x0004ff82) input_focus_pane_cp3

0x927e,	// (0x00050734) query_popup_pane_t1

0x928c,	// (0x00050742) list_popup_info_pane_ParamLimits

0x928c,	// (0x00050742) list_popup_info_pane

0x929b,	// (0x00050751) listscroll_popup_info_pane_g1

0x92a3,	// (0x00050759) scroll_pane_cp7

0x92ad,	// (0x00050763) popup_info_list_pane_t1_ParamLimits

0x92ad,	// (0x00050763) popup_info_list_pane_t1

0x92c7,	// (0x0005077d) popup_info_list_pane_t2_ParamLimits

0x92c7,	// (0x0005077d) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00056a61) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00056a61) popup_info_list_pane_t

0x8acc,	// (0x0004ff82) bg_popup_window_pane_cp12

0xd7b3,	// (0x00054c69) find_popup_pane

0x8b28,	// (0x0004ffde) bg_popup_window_pane_cp3

0x92e1,	// (0x00050797) heading_pane_cp3

0x92ed,	// (0x000507a3) listscroll_popup_graphic_pane

0x8acc,	// (0x0004ff82) bg_popup_window_pane_cp4

0x827e,	// (0x0004f734) heading_pane_cp4

0x92f9,	// (0x000507af) listscroll_popup_colour_pane

0x8286,	// (0x0004f73c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8286,	// (0x0004f73c) cell_large_graphic_colour_none_popup_pane

0x829a,	// (0x0004f750) grid_large_graphic_colour_popup_pane_ParamLimits

0x829a,	// (0x0004f750) grid_large_graphic_colour_popup_pane

0x82be,	// (0x0004f774) listscroll_popup_colour_pane_g1_ParamLimits

0x82be,	// (0x0004f774) listscroll_popup_colour_pane_g1

0x82d5,	// (0x0004f78b) listscroll_popup_colour_pane_g2_ParamLimits

0x82d5,	// (0x0004f78b) listscroll_popup_colour_pane_g2

0x82ec,	// (0x0004f7a2) listscroll_popup_colour_pane_g3_ParamLimits

0x82ec,	// (0x0004f7a2) listscroll_popup_colour_pane_g3

0x82fc,	// (0x0004f7b2) listscroll_popup_colour_pane_g4_ParamLimits

0x82fc,	// (0x0004f7b2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00056a66) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00056a66) listscroll_popup_colour_pane_g

0x9301,	// (0x000507b7) scroll_pane_cp6_ParamLimits

0x9301,	// (0x000507b7) scroll_pane_cp6

0x830c,	// (0x0004f7c2) cell_large_graphic_colour_popup_pane_ParamLimits

0x830c,	// (0x0004f7c2) cell_large_graphic_colour_popup_pane

0x9313,	// (0x000507c9) cell_large_graphic_colour_none_popup_pane_t1

0x8acc,	// (0x0004ff82) grid_highlight_pane_cp5

0x9322,	// (0x000507d8) cell_large_graphic_colour_popup_pane_g1

0x932a,	// (0x000507e0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00056a6f) cell_large_graphic_colour_popup_pane_g

0x9332,	// (0x000507e8) cell_large_graphic_colour_popup_pane_g2_copy1

0x933b,	// (0x000507f1) grid_highlight_pane_cp4

0x9343,	// (0x000507f9) bg_popup_window_pane_cp8_ParamLimits

0x9343,	// (0x000507f9) bg_popup_window_pane_cp8

0x935e,	// (0x00050814) popup_snote_single_text_window_g1_ParamLimits

0x935e,	// (0x00050814) popup_snote_single_text_window_g1

0x9370,	// (0x00050826) popup_snote_single_text_window_t1_ParamLimits

0x9370,	// (0x00050826) popup_snote_single_text_window_t1

0x9383,	// (0x00050839) popup_snote_single_text_window_t2_ParamLimits

0x9383,	// (0x00050839) popup_snote_single_text_window_t2

0x9396,	// (0x0005084c) popup_snote_single_text_window_t3_ParamLimits

0x9396,	// (0x0005084c) popup_snote_single_text_window_t3

0x93cf,	// (0x00050885) popup_snote_single_text_window_t4_ParamLimits

0x93cf,	// (0x00050885) popup_snote_single_text_window_t4

0x9403,	// (0x000508b9) popup_snote_single_text_window_t5_ParamLimits

0x9403,	// (0x000508b9) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00056a74) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00056a74) popup_snote_single_text_window_t

0x9432,	// (0x000508e8) bg_popup_window_pane_cp9_ParamLimits

0x9432,	// (0x000508e8) bg_popup_window_pane_cp9

0x935e,	// (0x00050814) popup_snote_single_graphic_window_g1_ParamLimits

0x935e,	// (0x00050814) popup_snote_single_graphic_window_g1

0x9440,	// (0x000508f6) popup_snote_single_graphic_window_g2_ParamLimits

0x9440,	// (0x000508f6) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00056a7f) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00056a7f) popup_snote_single_graphic_window_g

0x944c,	// (0x00050902) popup_snote_single_graphic_window_t1_ParamLimits

0x944c,	// (0x00050902) popup_snote_single_graphic_window_t1

0x945f,	// (0x00050915) popup_snote_single_graphic_window_t2_ParamLimits

0x945f,	// (0x00050915) popup_snote_single_graphic_window_t2

0x9472,	// (0x00050928) popup_snote_single_graphic_window_t3_ParamLimits

0x9472,	// (0x00050928) popup_snote_single_graphic_window_t3

0x98e1,	// (0x00050d97) popup_snote_single_graphic_window_t4_ParamLimits

0x98e1,	// (0x00050d97) popup_snote_single_graphic_window_t4

0x9915,	// (0x00050dcb) popup_snote_single_graphic_window_t5_ParamLimits

0x9915,	// (0x00050dcb) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00056a84) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00056a84) popup_snote_single_graphic_window_t

0xd73b,	// (0x00054bf1) grid_graphic_popup_pane_ParamLimits

0xd73b,	// (0x00054bf1) grid_graphic_popup_pane

0xd763,	// (0x00054c19) listscroll_popup_graphic_pane_g1_ParamLimits

0xd763,	// (0x00054c19) listscroll_popup_graphic_pane_g1

0x9ce2,	// (0x00051198) listscroll_popup_graphic_pane_g2_ParamLimits

0x9ce2,	// (0x00051198) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ba,	// (0x00056e70) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ba,	// (0x00056e70) listscroll_popup_graphic_pane_g

0xc791,	// (0x00053c47) scroll_pane_cp5

0x9ca6,	// (0x0005115c) cell_graphic_popup_pane_ParamLimits

0x9ca6,	// (0x0005115c) cell_graphic_popup_pane

0xd706,	// (0x00054bbc) cell_graphic_popup_pane_g1

0xd70e,	// (0x00054bc4) cell_graphic_popup_pane_g2

0x9332,	// (0x000507e8) cell_graphic_popup_pane_g3

0x0002,

0xf9b3,	// (0x00056e69) cell_graphic_popup_pane_g

0xd717,	// (0x00054bcd) cell_graphic_popup_pane_t2

0x933b,	// (0x000507f1) grid_highlight_pane_cp3

0x9956,	// (0x00050e0c) list_gen_pane_ParamLimits

0x9956,	// (0x00050e0c) list_gen_pane

0x997e,	// (0x00050e34) scroll_pane

0x9c5d,	// (0x00051113) bg_list_pane_g1_ParamLimits

0x9c5d,	// (0x00051113) bg_list_pane_g1

0xd6af,	// (0x00054b65) bg_list_pane_g2_ParamLimits

0xd6af,	// (0x00054b65) bg_list_pane_g2

0xd6c4,	// (0x00054b7a) bg_list_pane_g3_ParamLimits

0xd6c4,	// (0x00054b7a) bg_list_pane_g3

0xd6d8,	// (0x00054b8e) bg_list_pane_g4_ParamLimits

0xd6d8,	// (0x00054b8e) bg_list_pane_g4

0x9c7a,	// (0x00051130) bg_list_pane_g5_ParamLimits

0x9c7a,	// (0x00051130) bg_list_pane_g5

0x0004,

0xf9a8,	// (0x00056e5e) bg_list_pane_g_ParamLimits

0xf9a8,	// (0x00056e5e) bg_list_pane_g

0x7a0e,	// (0x0004eec4) list_double2_graphic_large_graphic_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double2_graphic_large_graphic_pane

0x7a0e,	// (0x0004eec4) list_double2_graphic_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double2_graphic_pane

0x7a0e,	// (0x0004eec4) list_double2_large_graphic_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double2_large_graphic_pane

0x7a0e,	// (0x0004eec4) list_double2_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double2_pane

0x7a0e,	// (0x0004eec4) list_double_graphic_heading_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_graphic_heading_pane

0x7a0e,	// (0x0004eec4) list_double_graphic_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_graphic_pane

0x7a0e,	// (0x0004eec4) list_double_heading_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_heading_pane

0x7a0e,	// (0x0004eec4) list_double_large_graphic_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_large_graphic_pane

0x7a0e,	// (0x0004eec4) list_double_number_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_number_pane

0x7a0e,	// (0x0004eec4) list_double_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_pane

0x7a0e,	// (0x0004eec4) list_double_time_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_double_time_pane

0x7a0e,	// (0x0004eec4) list_setting_number_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_setting_number_pane

0x7a0e,	// (0x0004eec4) list_setting_pane_ParamLimits

0x7a0e,	// (0x0004eec4) list_setting_pane

0x9c25,	// (0x000510db) list_single_2graphic_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_2graphic_pane

0x9c25,	// (0x000510db) list_single_graphic_heading_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_graphic_heading_pane

0x9c25,	// (0x000510db) list_single_graphic_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_graphic_pane

0x9c25,	// (0x000510db) list_single_heading_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_heading_pane

0x9c4b,	// (0x00051101) list_single_large_graphic_pane_ParamLimits

0x9c4b,	// (0x00051101) list_single_large_graphic_pane

0x9c25,	// (0x000510db) list_single_number_heading_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_number_heading_pane

0x9c25,	// (0x000510db) list_single_number_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_number_pane

0x9c25,	// (0x000510db) list_single_pane_ParamLimits

0x9c25,	// (0x000510db) list_single_pane

0x8acc,	// (0x0004ff82) list_highlight_pane_cp1

0xc31e,	// (0x000537d4) list_single_pane_g1_ParamLimits

0xc31e,	// (0x000537d4) list_single_pane_g1

0x2d1c,	// (0x0004a1d2) list_single_pane_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_pane_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_single_pane_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_single_pane_g

0x2f37,	// (0x0004a3ed) list_single_pane_t1_ParamLimits

0x2f37,	// (0x0004a3ed) list_single_pane_t1

0xc31e,	// (0x000537d4) list_single_number_pane_g1_ParamLimits

0xc31e,	// (0x000537d4) list_single_number_pane_g1

0x2d1c,	// (0x0004a1d2) list_single_number_pane_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_single_number_pane_g

0x2d28,	// (0x0004a1de) list_single_number_pane_t1_ParamLimits

0x2d28,	// (0x0004a1de) list_single_number_pane_t1

0x79d0,	// (0x0004ee86) list_single_number_pane_t2_ParamLimits

0x79d0,	// (0x0004ee86) list_single_number_pane_t2

0x0001,

0xf969,	// (0x00056e1f) list_single_number_pane_t_ParamLimits

0xf969,	// (0x00056e1f) list_single_number_pane_t

0x7081,	// (0x0004e537) list_single_graphic_pane_g1_ParamLimits

0x7081,	// (0x0004e537) list_single_graphic_pane_g1

0xc31e,	// (0x000537d4) list_single_graphic_pane_g2_ParamLimits

0xc31e,	// (0x000537d4) list_single_graphic_pane_g2

0x2d1c,	// (0x0004a1d2) list_single_graphic_pane_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00056a8f) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00056a8f) list_single_graphic_pane_g

0x708d,	// (0x0004e543) list_single_graphic_pane_t1_ParamLimits

0x708d,	// (0x0004e543) list_single_graphic_pane_t1

0x70a3,	// (0x0004e559) list_single_heading_pane_g1_ParamLimits

0x70a3,	// (0x0004e559) list_single_heading_pane_g1

0x2d1c,	// (0x0004a1d2) list_single_heading_pane_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00056a96) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00056a96) list_single_heading_pane_g

0x70b6,	// (0x0004e56c) list_single_heading_pane_t1_ParamLimits

0x70b6,	// (0x0004e56c) list_single_heading_pane_t1

0x8335,	// (0x0004f7eb) list_single_heading_pane_t2_ParamLimits

0x8335,	// (0x0004f7eb) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00056a9b) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00056a9b) list_single_heading_pane_t

0xc31e,	// (0x000537d4) list_single_number_heading_pane_g1_ParamLimits

0xc31e,	// (0x000537d4) list_single_number_heading_pane_g1

0x2d1c,	// (0x0004a1d2) list_single_number_heading_pane_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_single_number_heading_pane_g

0x70cc,	// (0x0004e582) list_single_number_heading_pane_t1_ParamLimits

0x70cc,	// (0x0004e582) list_single_number_heading_pane_t1

0x70e2,	// (0x0004e598) list_single_number_heading_pane_t2_ParamLimits

0x70e2,	// (0x0004e598) list_single_number_heading_pane_t2

0x2f11,	// (0x0004a3c7) list_single_number_heading_pane_t3_ParamLimits

0x2f11,	// (0x0004a3c7) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x00056aa5) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x00056aa5) list_single_number_heading_pane_t

0x70f4,	// (0x0004e5aa) list_single_graphic_heading_pane_g1_ParamLimits

0x70f4,	// (0x0004e5aa) list_single_graphic_heading_pane_g1

0x8347,	// (0x0004f7fd) list_single_graphic_heading_pane_g4_ParamLimits

0x8347,	// (0x0004f7fd) list_single_graphic_heading_pane_g4

0x2d1c,	// (0x0004a1d2) list_single_graphic_heading_pane_g5_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x00056aac) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x00056aac) list_single_graphic_heading_pane_g

0x70cc,	// (0x0004e582) list_single_graphic_heading_pane_t1_ParamLimits

0x70cc,	// (0x0004e582) list_single_graphic_heading_pane_t1

0x710a,	// (0x0004e5c0) list_single_graphic_heading_pane_t2_ParamLimits

0x710a,	// (0x0004e5c0) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x00056ab3) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x00056ab3) list_single_graphic_heading_pane_t

0x2f4d,	// (0x0004a403) list_single_large_graphic_pane_g1_ParamLimits

0x2f4d,	// (0x0004a403) list_single_large_graphic_pane_g1

0x2f59,	// (0x0004a40f) list_single_large_graphic_pane_g2_ParamLimits

0x2f59,	// (0x0004a40f) list_single_large_graphic_pane_g2

0x2f65,	// (0x0004a41b) list_single_large_graphic_pane_g3_ParamLimits

0x2f65,	// (0x0004a41b) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x00056ab8) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x00056ab8) list_single_large_graphic_pane_g

0xc971,	// (0x00053e27) wait_border_pane_g2_copy1

0x8358,	// (0x0004f80e) list_single_large_graphic_pane_g4_cp2

0x2f71,	// (0x0004a427) list_single_large_graphic_pane_t1_ParamLimits

0x2f71,	// (0x0004a427) list_single_large_graphic_pane_t1

0xb515,	// (0x000529cb) list_double_pane_g1_ParamLimits

0xb515,	// (0x000529cb) list_double_pane_g1

0x7120,	// (0x0004e5d6) list_double_pane_g2_ParamLimits

0x7120,	// (0x0004e5d6) list_double_pane_g2

0x0001,

0xf609,	// (0x00056abf) list_double_pane_g_ParamLimits

0xf609,	// (0x00056abf) list_double_pane_g

0x712c,	// (0x0004e5e2) list_double_pane_t1_ParamLimits

0x712c,	// (0x0004e5e2) list_double_pane_t1

0x7142,	// (0x0004e5f8) list_double_pane_t2_ParamLimits

0x7142,	// (0x0004e5f8) list_double_pane_t2

0x0001,

0xf60e,	// (0x00056ac4) list_double_pane_t_ParamLimits

0xf60e,	// (0x00056ac4) list_double_pane_t

0x7154,	// (0x0004e60a) list_double2_pane_g1_ParamLimits

0x7154,	// (0x0004e60a) list_double2_pane_g1

0x7165,	// (0x0004e61b) list_double2_pane_g2_ParamLimits

0x7165,	// (0x0004e61b) list_double2_pane_g2

0x0001,

0xf613,	// (0x00056ac9) list_double2_pane_g_ParamLimits

0xf613,	// (0x00056ac9) list_double2_pane_g

0x7171,	// (0x0004e627) list_double2_pane_t1_ParamLimits

0x7171,	// (0x0004e627) list_double2_pane_t1

0x7187,	// (0x0004e63d) list_double2_pane_t2_ParamLimits

0x7187,	// (0x0004e63d) list_double2_pane_t2

0x0001,

0xf618,	// (0x00056ace) list_double2_pane_t_ParamLimits

0xf618,	// (0x00056ace) list_double2_pane_t

0xb515,	// (0x000529cb) list_double_number_pane_g1_ParamLimits

0xb515,	// (0x000529cb) list_double_number_pane_g1

0x7120,	// (0x0004e5d6) list_double_number_pane_g2_ParamLimits

0x7120,	// (0x0004e5d6) list_double_number_pane_g2

0x0001,

0xf609,	// (0x00056abf) list_double_number_pane_g_ParamLimits

0xf609,	// (0x00056abf) list_double_number_pane_g

0x7199,	// (0x0004e64f) list_double_number_pane_t1_ParamLimits

0x7199,	// (0x0004e64f) list_double_number_pane_t1

0x71ab,	// (0x0004e661) list_double_number_pane_t2_ParamLimits

0x71ab,	// (0x0004e661) list_double_number_pane_t2

0x71c1,	// (0x0004e677) list_double_number_pane_t3_ParamLimits

0x71c1,	// (0x0004e677) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x00056ad3) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x00056ad3) list_double_number_pane_t

0x71d3,	// (0x0004e689) list_double_graphic_pane_g1_ParamLimits

0x71d3,	// (0x0004e689) list_double_graphic_pane_g1

0x71df,	// (0x0004e695) list_double_graphic_pane_g2_ParamLimits

0x71df,	// (0x0004e695) list_double_graphic_pane_g2

0x71ee,	// (0x0004e6a4) list_double_graphic_pane_g3_ParamLimits

0x71ee,	// (0x0004e6a4) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x00056ada) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x00056ada) list_double_graphic_pane_g

0x7206,	// (0x0004e6bc) list_double_graphic_pane_t1_ParamLimits

0x7206,	// (0x0004e6bc) list_double_graphic_pane_t1

0x721c,	// (0x0004e6d2) list_double_graphic_pane_t2_ParamLimits

0x721c,	// (0x0004e6d2) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x00056ae3) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x00056ae3) list_double_graphic_pane_t

0x2d10,	// (0x0004a1c6) list_double2_graphic_pane_g1_ParamLimits

0x2d10,	// (0x0004a1c6) list_double2_graphic_pane_g1

0xc31e,	// (0x000537d4) list_double2_graphic_pane_g2_ParamLimits

0xc31e,	// (0x000537d4) list_double2_graphic_pane_g2

0x2d1c,	// (0x0004a1d2) list_double2_graphic_pane_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x00056ae8) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x00056ae8) list_double2_graphic_pane_g

0x2d28,	// (0x0004a1de) list_double2_graphic_pane_t1_ParamLimits

0x2d28,	// (0x0004a1de) list_double2_graphic_pane_t1

0x722e,	// (0x0004e6e4) list_double2_graphic_pane_t2_ParamLimits

0x722e,	// (0x0004e6e4) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x00056aef) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x00056aef) list_double2_graphic_pane_t

0x7240,	// (0x0004e6f6) list_double_large_graphic_pane_g1_ParamLimits

0x7240,	// (0x0004e6f6) list_double_large_graphic_pane_g1

0x726b,	// (0x0004e721) list_double_large_graphic_pane_g2_ParamLimits

0x726b,	// (0x0004e721) list_double_large_graphic_pane_g2

0x7120,	// (0x0004e5d6) list_double_large_graphic_pane_g3_ParamLimits

0x7120,	// (0x0004e5d6) list_double_large_graphic_pane_g3

0x7281,	// (0x0004e737) list_double_large_graphic_pane_g4_ParamLimits

0x7281,	// (0x0004e737) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x00056af4) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x00056af4) list_double_large_graphic_pane_g

0x7294,	// (0x0004e74a) list_double_large_graphic_pane_t1_ParamLimits

0x7294,	// (0x0004e74a) list_double_large_graphic_pane_t1

0x72ad,	// (0x0004e763) list_double_large_graphic_pane_t2_ParamLimits

0x72ad,	// (0x0004e763) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x00056aff) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x00056aff) list_double_large_graphic_pane_t

0x72bf,	// (0x0004e775) list_double2_large_graphic_pane_g1_ParamLimits

0x72bf,	// (0x0004e775) list_double2_large_graphic_pane_g1

0x8347,	// (0x0004f7fd) list_double2_large_graphic_pane_g2_ParamLimits

0x8347,	// (0x0004f7fd) list_double2_large_graphic_pane_g2

0x2d1c,	// (0x0004a1d2) list_double2_large_graphic_pane_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x00056b04) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x00056b04) list_double2_large_graphic_pane_g

0x70cc,	// (0x0004e582) list_double2_large_graphic_pane_t1_ParamLimits

0x70cc,	// (0x0004e582) list_double2_large_graphic_pane_t1

0x72cb,	// (0x0004e781) list_double2_large_graphic_pane_t2_ParamLimits

0x72cb,	// (0x0004e781) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x00056b0b) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x00056b0b) list_double2_large_graphic_pane_t

0x72dd,	// (0x0004e793) list_double_heading_pane_g1_ParamLimits

0x72dd,	// (0x0004e793) list_double_heading_pane_g1

0x72ee,	// (0x0004e7a4) list_double_heading_pane_g2_ParamLimits

0x72ee,	// (0x0004e7a4) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x00056b10) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x00056b10) list_double_heading_pane_g

0x72fa,	// (0x0004e7b0) list_double_heading_pane_t1_ParamLimits

0x72fa,	// (0x0004e7b0) list_double_heading_pane_t1

0x7187,	// (0x0004e63d) list_double_heading_pane_t2_ParamLimits

0x7187,	// (0x0004e63d) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x00056b15) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x00056b15) list_double_heading_pane_t

0x0953,	// (0x00047e09) list_double_graphic_heading_pane_g1_ParamLimits

0x0953,	// (0x00047e09) list_double_graphic_heading_pane_g1

0x72dd,	// (0x0004e793) list_double_graphic_heading_pane_g2_ParamLimits

0x72dd,	// (0x0004e793) list_double_graphic_heading_pane_g2

0x72ee,	// (0x0004e7a4) list_double_graphic_heading_pane_g3_ParamLimits

0x72ee,	// (0x0004e7a4) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x00056b1a) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x00056b1a) list_double_graphic_heading_pane_g

0x7310,	// (0x0004e7c6) list_double_graphic_heading_pane_t1_ParamLimits

0x7310,	// (0x0004e7c6) list_double_graphic_heading_pane_t1

0x722e,	// (0x0004e6e4) list_double_graphic_heading_pane_t2_ParamLimits

0x722e,	// (0x0004e6e4) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x00056b21) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x00056b21) list_double_graphic_heading_pane_t

0x7326,	// (0x0004e7dc) list_double_time_pane_g1_ParamLimits

0x7326,	// (0x0004e7dc) list_double_time_pane_g1

0x7337,	// (0x0004e7ed) list_double_time_pane_g2_ParamLimits

0x7337,	// (0x0004e7ed) list_double_time_pane_g2

0x0001,

0xf670,	// (0x00056b26) list_double_time_pane_g_ParamLimits

0xf670,	// (0x00056b26) list_double_time_pane_g

0x7343,	// (0x0004e7f9) list_double_time_pane_t1_ParamLimits

0x7343,	// (0x0004e7f9) list_double_time_pane_t1

0x7359,	// (0x0004e80f) list_double_time_pane_t2_ParamLimits

0x7359,	// (0x0004e80f) list_double_time_pane_t2

0x736b,	// (0x0004e821) list_double_time_pane_t3_ParamLimits

0x736b,	// (0x0004e821) list_double_time_pane_t3

0x737d,	// (0x0004e833) list_double_time_pane_t4_ParamLimits

0x737d,	// (0x0004e833) list_double_time_pane_t4

0x0003,

0xf675,	// (0x00056b2b) list_double_time_pane_t_ParamLimits

0xf675,	// (0x00056b2b) list_double_time_pane_t

0x738f,	// (0x0004e845) list_setting_pane_g1_ParamLimits

0x738f,	// (0x0004e845) list_setting_pane_g1

0x7165,	// (0x0004e61b) list_setting_pane_g2_ParamLimits

0x7165,	// (0x0004e61b) list_setting_pane_g2

0x0001,

0xf67e,	// (0x00056b34) list_setting_pane_g_ParamLimits

0xf67e,	// (0x00056b34) list_setting_pane_g

0x739b,	// (0x0004e851) list_setting_pane_t1_ParamLimits

0x739b,	// (0x0004e851) list_setting_pane_t1

0x73b5,	// (0x0004e86b) list_setting_pane_t2_ParamLimits

0x73b5,	// (0x0004e86b) list_setting_pane_t2

0x0002,

0xf683,	// (0x00056b39) list_setting_pane_t_ParamLimits

0xf683,	// (0x00056b39) list_setting_pane_t

0x73f4,	// (0x0004e8aa) set_value_pane_cp_ParamLimits

0x73f4,	// (0x0004e8aa) set_value_pane_cp

0x7400,	// (0x0004e8b6) list_setting_number_pane_g1_ParamLimits

0x7400,	// (0x0004e8b6) list_setting_number_pane_g1

0x740c,	// (0x0004e8c2) list_setting_number_pane_g2_ParamLimits

0x740c,	// (0x0004e8c2) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x00056b40) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x00056b40) list_setting_number_pane_g

0x7418,	// (0x0004e8ce) list_setting_number_pane_t1_ParamLimits

0x7418,	// (0x0004e8ce) list_setting_number_pane_t1

0x7431,	// (0x0004e8e7) list_setting_number_pane_t2_ParamLimits

0x7431,	// (0x0004e8e7) list_setting_number_pane_t2

0x744b,	// (0x0004e901) list_setting_number_pane_t3_ParamLimits

0x744b,	// (0x0004e901) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x00056b45) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x00056b45) list_setting_number_pane_t

0x73f4,	// (0x0004e8aa) set_value_pane_ParamLimits

0x73f4,	// (0x0004e8aa) set_value_pane

0xadfe,	// (0x000522b4) bg_set_opt_pane_ParamLimits

0xadfe,	// (0x000522b4) bg_set_opt_pane

0x0c2e,	// (0x000480e4) set_value_pane_t1

0xae1f,	// (0x000522d5) slider_set_pane_cp3

0xae28,	// (0x000522de) volume_small_pane_cp

0xae31,	// (0x000522e7) list_form_gen_pane

0xae3a,	// (0x000522f0) scroll_pane_cp8

0x748e,	// (0x0004e944) form_field_data_pane_ParamLimits

0x748e,	// (0x0004e944) form_field_data_pane

0x74a5,	// (0x0004e95b) form_field_data_wide_pane_ParamLimits

0x74a5,	// (0x0004e95b) form_field_data_wide_pane

0x74c5,	// (0x0004e97b) form_field_popup_pane_ParamLimits

0x74c5,	// (0x0004e97b) form_field_popup_pane

0x74dd,	// (0x0004e993) form_field_popup_wide_pane_ParamLimits

0x74dd,	// (0x0004e993) form_field_popup_wide_pane

0x0cca,	// (0x00048180) form_field_slider_pane_ParamLimits

0x0cca,	// (0x00048180) form_field_slider_pane

0x0cdd,	// (0x00048193) form_field_slider_wide_pane_ParamLimits

0x0cdd,	// (0x00048193) form_field_slider_wide_pane

0xae4b,	// (0x00052301) data_form_pane

0x74fe,	// (0x0004e9b4) form_field_data_pane_t1

0xae57,	// (0x0005230d) input_focus_pane

0xae65,	// (0x0005231b) data_form_wide_pane

0x0d1e,	// (0x000481d4) form_field_data_wide_pane_t1

0x9350,	// (0x00050806) input_focus_pane_cp6

0x7518,	// (0x0004e9ce) form_field_popup_pane_t1

0xae57,	// (0x0005230d) input_focus_pane_cp7

0xae91,	// (0x00052347) list_form_pane

0x0d60,	// (0x00048216) form_field_popup_wide_pane_t1

0xae57,	// (0x0005230d) input_focus_pane_cp8

0xae9d,	// (0x00052353) list_form_wide_pane

0x753a,	// (0x0004e9f0) form_field_slider_pane_t1_ParamLimits

0x753a,	// (0x0004e9f0) form_field_slider_pane_t1

0x7552,	// (0x0004ea08) form_field_slider_pane_t2_ParamLimits

0x7552,	// (0x0004ea08) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x00056b55) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x00056b55) form_field_slider_pane_t

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp9_ParamLimits

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp9

0x7567,	// (0x0004ea1d) slider_cont_pane_ParamLimits

0x7567,	// (0x0004ea1d) slider_cont_pane

0xaeac,	// (0x00052362) form_field_slider_wide_pane_t1_ParamLimits

0xaeac,	// (0x00052362) form_field_slider_wide_pane_t1

0x0dbc,	// (0x00048272) form_field_slider_wide_pane_t2_ParamLimits

0x0dbc,	// (0x00048272) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x00056b5a) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x00056b5a) form_field_slider_wide_pane_t

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp10_ParamLimits

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp10

0x757b,	// (0x0004ea31) slider_cont_pane_cp1_ParamLimits

0x757b,	// (0x0004ea31) slider_cont_pane_cp1

0x758f,	// (0x0004ea45) slider_form_pane_cp

0xaebe,	// (0x00052374) input_focus_pane_g1

0xaec6,	// (0x0005237c) input_focus_pane_g2

0xaece,	// (0x00052384) input_focus_pane_g3

0xaed6,	// (0x0005238c) input_focus_pane_g4

0xaede,	// (0x00052394) input_focus_pane_g5

0xaee6,	// (0x0005239c) input_focus_pane_g6

0xaeee,	// (0x000523a4) input_focus_pane_g7

0xaef6,	// (0x000523ac) input_focus_pane_g8

0xaefe,	// (0x000523b4) input_focus_pane_g9

0x8ac2,	// (0x0004ff78) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x00056b5f) input_focus_pane_g

0xc97a,	// (0x00053e30) wait_border_pane_g3_copy1

0x7597,	// (0x0004ea4d) data_form_pane_t1

0x8ac2,	// (0x0004ff78) wait_anim_pane_g1_copy1

0x79e2,	// (0x0004ee98) data_form_wide_pane_t1

0x75b0,	// (0x0004ea66) list_form_graphic_pane_cp_ParamLimits

0x75b0,	// (0x0004ea66) list_form_graphic_pane_cp

0xd64a,	// (0x00054b00) slider_form_pane_g1

0xd653,	// (0x00054b09) slider_form_pane_g2

0x0006,

0xf999,	// (0x00056e4f) slider_form_pane_g

0x75c1,	// (0x0004ea77) list_form_graphic_pane_ParamLimits

0x75c1,	// (0x0004ea77) list_form_graphic_pane

0x0e3a,	// (0x000482f0) list_form_graphic_pane_g1

0x0e42,	// (0x000482f8) list_form_graphic_pane_t1_ParamLimits

0x0e42,	// (0x000482f8) list_form_graphic_pane_t1

0x8b28,	// (0x0004ffde) list_highlight_pane_cp5_ParamLimits

0x8b28,	// (0x0004ffde) list_highlight_pane_cp5

0x75d3,	// (0x0004ea89) find_pane_g1

0xaf06,	// (0x000523bc) input_find_pane

0x75dc,	// (0x0004ea92) input_find_pane_g1_ParamLimits

0x75dc,	// (0x0004ea92) input_find_pane_g1

0x75e8,	// (0x0004ea9e) input_find_pane_t1_ParamLimits

0x75e8,	// (0x0004ea9e) input_find_pane_t1

0x75fd,	// (0x0004eab3) input_find_pane_t2_ParamLimits

0x75fd,	// (0x0004eab3) input_find_pane_t2

0x0001,

0xf6be,	// (0x00056b74) input_find_pane_t_ParamLimits

0xf6be,	// (0x00056b74) input_find_pane_t

0xaf0f,	// (0x000523c5) input_focus_pane_cp5_ParamLimits

0xaf0f,	// (0x000523c5) input_focus_pane_cp5

0x836c,	// (0x0004f822) bg_popup_window_pane_cp2_ParamLimits

0x836c,	// (0x0004f822) bg_popup_window_pane_cp2

0x8379,	// (0x0004f82f) listscroll_menu_pane_ParamLimits

0x8379,	// (0x0004f82f) listscroll_menu_pane

0x8385,	// (0x0004f83b) popup_submenu_window_ParamLimits

0x8385,	// (0x0004f83b) popup_submenu_window

0xaf1d,	// (0x000523d3) find_popup_pane_g1

0xaf25,	// (0x000523db) input_popup_find_pane_cp

0xaf0f,	// (0x000523c5) input_focus_pane_cp4_ParamLimits

0xaf0f,	// (0x000523c5) input_focus_pane_cp4

0xaf2f,	// (0x000523e5) input_popup_find_pane_t1_ParamLimits

0xaf2f,	// (0x000523e5) input_popup_find_pane_t1

0x8acc,	// (0x0004ff82) bg_popup_sub_pane_cp

0xaf5d,	// (0x00052413) listscroll_popup_sub_pane

0xaf65,	// (0x0005241b) list_submenu_pane_ParamLimits

0xaf65,	// (0x0005241b) list_submenu_pane

0xaf76,	// (0x0005242c) scroll_pane_cp4

0xaf7e,	// (0x00052434) list_single_popup_submenu_pane_ParamLimits

0xaf7e,	// (0x00052434) list_single_popup_submenu_pane

0xaf92,	// (0x00052448) list_single_popup_submenu_pane_g1

0xaf9a,	// (0x00052450) list_single_popup_submenu_pane_t1_ParamLimits

0xaf9a,	// (0x00052450) list_single_popup_submenu_pane_t1

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp1_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp1

0x83bf,	// (0x0004f875) tabs_2_active_pane_g1

0x83c7,	// (0x0004f87d) tabs_2_active_pane_t1

0x8b1a,	// (0x0004ffd0) bg_passive_tab_pane_cp1_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_passive_tab_pane_cp1

0x83bf,	// (0x0004f875) tabs_2_passive_pane_g1

0x83c7,	// (0x0004f87d) tabs_2_passive_pane_t1

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp4

0x83d9,	// (0x0004f88f) tabs_2_long_active_pane_t1

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp4

0x14ce,	// (0x00048984) list_single_midp_graphic_pane_g4_ParamLimits

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp5

0x83ec,	// (0x0004f8a2) tabs_3_long_active_pane_t1

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp5

0x14ce,	// (0x00048984) list_single_midp_graphic_pane_g4

0x8b28,	// (0x0004ffde) bg_popup_window_pane_cp13_ParamLimits

0x8b28,	// (0x0004ffde) bg_popup_window_pane_cp13

0xafc4,	// (0x0005247a) listscroll_popup_fast_pane_ParamLimits

0xafc4,	// (0x0005247a) listscroll_popup_fast_pane

0xafd3,	// (0x00052489) grid_popup_fast_pane_ParamLimits

0xafd3,	// (0x00052489) grid_popup_fast_pane

0xafe5,	// (0x0005249b) scroll_pane_cp9_ParamLimits

0xafe5,	// (0x0005249b) scroll_pane_cp9

0xe910,	// (0x00055dc6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe910,	// (0x00055dc6) list_single_graphic_hl_pane_t1_cp2

0xb009,	// (0x000524bf) input_focus_pane_cp20_ParamLimits

0xb009,	// (0x000524bf) input_focus_pane_cp20

0xb521,	// (0x000529d7) query_popup_data_pane_t1_ParamLimits

0xb521,	// (0x000529d7) query_popup_data_pane_t1

0xb534,	// (0x000529ea) query_popup_data_pane_t2_ParamLimits

0xb534,	// (0x000529ea) query_popup_data_pane_t2

0xb57a,	// (0x00052a30) query_popup_data_pane_t3_ParamLimits

0xb57a,	// (0x00052a30) query_popup_data_pane_t3

0xb5bb,	// (0x00052a71) query_popup_data_pane_t4_ParamLimits

0xb5bb,	// (0x00052a71) query_popup_data_pane_t4

0xb5f7,	// (0x00052aad) query_popup_data_pane_t5_ParamLimits

0xb5f7,	// (0x00052aad) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x00056b79) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x00056b79) query_popup_data_pane_t

0xaebe,	// (0x00052374) bg_set_opt_pane_g1

0xaec6,	// (0x0005237c) bg_set_opt_pane_g2

0xaece,	// (0x00052384) bg_set_opt_pane_g3

0xaed6,	// (0x0005238c) bg_set_opt_pane_g4

0xaede,	// (0x00052394) bg_set_opt_pane_g5

0xaee6,	// (0x0005239c) bg_set_opt_pane_g6

0xaeee,	// (0x000523a4) bg_set_opt_pane_g7

0xaef6,	// (0x000523ac) bg_set_opt_pane_g8

0xaefe,	// (0x000523b4) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x00056b84) bg_set_opt_pane_g

0x1141,	// (0x000485f7) control_top_pane_stacon_ParamLimits

0x1141,	// (0x000485f7) control_top_pane_stacon

0x1194,	// (0x0004864a) signal_pane_stacon_ParamLimits

0x1194,	// (0x0004864a) signal_pane_stacon

0xba5f,	// (0x00052f15) stacon_top_pane_g1_ParamLimits

0xba5f,	// (0x00052f15) stacon_top_pane_g1

0x11b9,	// (0x0004866f) title_pane_stacon_ParamLimits

0x11b9,	// (0x0004866f) title_pane_stacon

0x11e3,	// (0x00048699) uni_indicator_pane_stacon_ParamLimits

0x11e3,	// (0x00048699) uni_indicator_pane_stacon

0x11f8,	// (0x000486ae) battery_pane_stacon_ParamLimits

0x11f8,	// (0x000486ae) battery_pane_stacon

0x123c,	// (0x000486f2) control_bottom_pane_stacon_ParamLimits

0x123c,	// (0x000486f2) control_bottom_pane_stacon

0x125f,	// (0x00048715) navi_pane_stacon_ParamLimits

0x125f,	// (0x00048715) navi_pane_stacon

0xba81,	// (0x00052f37) stacon_bottom_pane_g1_ParamLimits

0xba81,	// (0x00052f37) stacon_bottom_pane_g1

0x0e96,	// (0x0004834c) aid_levels_signal_lsc_ParamLimits

0x0e96,	// (0x0004834c) aid_levels_signal_lsc

0x0ead,	// (0x00048363) signal_pane_stacon_g1_ParamLimits

0x0ead,	// (0x00048363) signal_pane_stacon_g1

0x0ec1,	// (0x00048377) signal_pane_stacon_g2_ParamLimits

0x0ec1,	// (0x00048377) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x00056b97) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00056b97) signal_pane_stacon_g

0x0ef6,	// (0x000483ac) title_pane_stacon_t1_ParamLimits

0x0ef6,	// (0x000483ac) title_pane_stacon_t1

0xb63b,	// (0x00052af1) uni_indicator_pane_stacon_g1

0xb645,	// (0x00052afb) uni_indicator_pane_stacon_g2

0xb64f,	// (0x00052b05) uni_indicator_pane_stacon_g3

0xb659,	// (0x00052b0f) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x00056ba3) uni_indicator_pane_stacon_g

0x0f1b,	// (0x000483d1) control_top_pane_stacon_g1

0x0f23,	// (0x000483d9) control_top_pane_stacon_t1_ParamLimits

0x0f23,	// (0x000483d9) control_top_pane_stacon_t1

0x0f5a,	// (0x00048410) aid_levels_battery_lsc_ParamLimits

0x0f5a,	// (0x00048410) aid_levels_battery_lsc

0x0f72,	// (0x00048428) battery_pane_stacon_g1_ParamLimits

0x0f72,	// (0x00048428) battery_pane_stacon_g1

0x0f85,	// (0x0004843b) battery_pane_stacon_g2_ParamLimits

0x0f85,	// (0x0004843b) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x00056bac) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x00056bac) battery_pane_stacon_g

0x0fc3,	// (0x00048479) navi_icon_pane_stacon

0x0fd7,	// (0x0004848d) navi_navi_pane_stacon

0x0fc3,	// (0x00048479) navi_text_pane_stacon

0x0f1b,	// (0x000483d1) control_bottom_pane_stacon_g1

0x0feb,	// (0x000484a1) control_bottom_pane_stacon_t1_ParamLimits

0x0feb,	// (0x000484a1) control_bottom_pane_stacon_t1

0x83fe,	// (0x0004f8b4) grid_app_pane_ParamLimits

0x83fe,	// (0x0004f8b4) grid_app_pane

0x8436,	// (0x0004f8ec) scroll_pane_cp15_ParamLimits

0x8436,	// (0x0004f8ec) scroll_pane_cp15

0x844f,	// (0x0004f905) cell_app_pane_ParamLimits

0x844f,	// (0x0004f905) cell_app_pane

0x8494,	// (0x0004f94a) cell_app_pane_g1_ParamLimits

0x8494,	// (0x0004f94a) cell_app_pane_g1

0xb67d,	// (0x00052b33) cell_app_pane_g2_ParamLimits

0xb67d,	// (0x00052b33) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x00056bb1) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x00056bb1) cell_app_pane_g

0x84b4,	// (0x0004f96a) cell_app_pane_t1_ParamLimits

0x84b4,	// (0x0004f96a) cell_app_pane_t1

0xb689,	// (0x00052b3f) grid_highlight_pane_ParamLimits

0xb689,	// (0x00052b3f) grid_highlight_pane

0xaebe,	// (0x00052374) cell_highlight_pane_g1

0xaec6,	// (0x0005237c) cell_highlight_pane_g2

0xaece,	// (0x00052384) cell_highlight_pane_g3

0xaed6,	// (0x0005238c) cell_highlight_pane_g4

0xaede,	// (0x00052394) cell_highlight_pane_g5

0xaee6,	// (0x0005239c) cell_highlight_pane_g6

0xaeee,	// (0x000523a4) cell_highlight_pane_g7

0xaef6,	// (0x000523ac) cell_highlight_pane_g8

0xaefe,	// (0x000523b4) cell_highlight_pane_g9

0x8ac2,	// (0x0004ff78) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x00056b5f) cell_highlight_pane_g

0xb69a,	// (0x00052b50) bg_scroll_pane

0x1035,	// (0x000484eb) scroll_handle_pane

0xb6e1,	// (0x00052b97) scroll_bg_pane_g1

0xb6f6,	// (0x00052bac) scroll_bg_pane_g2

0xb70e,	// (0x00052bc4) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x00056bb6) scroll_bg_pane_g

0xb723,	// (0x00052bd9) scroll_handle_focus_pane_ParamLimits

0xb723,	// (0x00052bd9) scroll_handle_focus_pane

0xb6e1,	// (0x00052b97) scroll_handle_pane_g1

0xb730,	// (0x00052be6) scroll_handle_pane_g2

0xb70e,	// (0x00052bc4) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x00056bbd) scroll_handle_pane_g

0xaf0f,	// (0x000523c5) bg_popup_sub_pane_cp21_ParamLimits

0xaf0f,	// (0x000523c5) bg_popup_sub_pane_cp21

0xb744,	// (0x00052bfa) popup_fep_japan_predictive_window_t1_ParamLimits

0xb744,	// (0x00052bfa) popup_fep_japan_predictive_window_t1

0xb75e,	// (0x00052c14) popup_fep_japan_predictive_window_t2_ParamLimits

0xb75e,	// (0x00052c14) popup_fep_japan_predictive_window_t2

0xb791,	// (0x00052c47) popup_fep_japan_predictive_window_t3_ParamLimits

0xb791,	// (0x00052c47) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x00056bc4) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x00056bc4) popup_fep_japan_predictive_window_t

0x8acc,	// (0x0004ff82) bg_popup_sub_pane_cp23

0xb7c8,	// (0x00052c7e) listscroll_japin_cand_pane

0xb7d0,	// (0x00052c86) popup_fep_japan_candidate_window_t1

0xb7de,	// (0x00052c94) candidate_pane_ParamLimits

0xb7de,	// (0x00052c94) candidate_pane

0xb7f0,	// (0x00052ca6) scroll_pane_cp30

0xb7f8,	// (0x00052cae) list_single_popup_jap_candidate_pane_ParamLimits

0xb7f8,	// (0x00052cae) list_single_popup_jap_candidate_pane

0x8acc,	// (0x0004ff82) list_highlight_pane_cp30

0xb80d,	// (0x00052cc3) list_single_popup_jap_candidate_pane_t1

0xb81c,	// (0x00052cd2) level_1_signal

0xb829,	// (0x00052cdf) level_2_signal

0xb836,	// (0x00052cec) level_3_signal

0xb843,	// (0x00052cf9) level_4_signal

0xb850,	// (0x00052d06) level_5_signal

0xb85d,	// (0x00052d13) level_6_signal

0xb86a,	// (0x00052d20) level_7_signal

0xb81c,	// (0x00052cd2) level_1_battery

0xb829,	// (0x00052cdf) level_2_battery

0xb836,	// (0x00052cec) level_3_battery

0xb843,	// (0x00052cf9) level_4_battery

0xb850,	// (0x00052d06) level_5_battery

0xb85d,	// (0x00052d13) level_6_battery

0xb86a,	// (0x00052d20) level_7_battery

0xb88f,	// (0x00052d45) list_menu_pane_ParamLimits

0xb88f,	// (0x00052d45) list_menu_pane

0xb8a5,	// (0x00052d5b) scroll_pane_cp25_ParamLimits

0xb8a5,	// (0x00052d5b) scroll_pane_cp25

0xb8be,	// (0x00052d74) list_double2_graphic_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double2_graphic_pane_cp2

0xb8be,	// (0x00052d74) list_double2_large_graphic_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double2_large_graphic_pane_cp2

0xb8be,	// (0x00052d74) list_double2_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double2_pane_cp2

0xb8be,	// (0x00052d74) list_double_graphic_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double_graphic_pane_cp2

0xb8be,	// (0x00052d74) list_double_large_graphic_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double_large_graphic_pane_cp2

0xb8be,	// (0x00052d74) list_double_number_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double_number_pane_cp2

0xb8be,	// (0x00052d74) list_double_pane_cp2_ParamLimits

0xb8be,	// (0x00052d74) list_double_pane_cp2

0x84da,	// (0x0004f990) list_single_2graphic_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_2graphic_pane_cp2

0x84da,	// (0x0004f990) list_single_graphic_heading_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_graphic_heading_pane_cp2

0x84da,	// (0x0004f990) list_single_graphic_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_graphic_pane_cp2

0x84da,	// (0x0004f990) list_single_heading_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_heading_pane_cp2

0xb8ce,	// (0x00052d84) list_single_large_graphic_pane_cp2_ParamLimits

0xb8ce,	// (0x00052d84) list_single_large_graphic_pane_cp2

0x84da,	// (0x0004f990) list_single_number_heading_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_number_heading_pane_cp2

0x84da,	// (0x0004f990) list_single_number_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_number_pane_cp2

0x84da,	// (0x0004f990) list_single_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_pane_cp2

0xb8e8,	// (0x00052d9e) bg_popup_sub_pane_cp22

0x10e7,	// (0x0004859d) popup_side_volume_key_window_g1

0x1111,	// (0x000485c7) popup_side_volume_key_window_t1

0x112d,	// (0x000485e3) volume_small_pane_cp1

0x8b1a,	// (0x0004ffd0) bg_popup_sub_pane_cp24_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_popup_sub_pane_cp24

0xb8fe,	// (0x00052db4) fep_china_uni_candidate_pane_ParamLimits

0xb8fe,	// (0x00052db4) fep_china_uni_candidate_pane

0xb912,	// (0x00052dc8) fep_china_uni_entry_pane

0xb922,	// (0x00052dd8) popup_fep_china_uni_window_g1

0xb93e,	// (0x00052df4) fep_china_uni_entry_pane_g1

0xb946,	// (0x00052dfc) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00056bf5) fep_china_uni_entry_pane_g

0xb94e,	// (0x00052e04) fep_entry_item_pane

0xb958,	// (0x00052e0e) fep_candidate_item_pane

0xb960,	// (0x00052e16) fep_china_uni_candidate_pane_g1

0xb968,	// (0x00052e1e) fep_china_uni_candidate_pane_g2

0xb970,	// (0x00052e26) fep_china_uni_candidate_pane_g3

0xb978,	// (0x00052e2e) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00056bfa) fep_china_uni_candidate_pane_g

0x8ac2,	// (0x0004ff78) fep_entry_item_pane_g1

0xb980,	// (0x00052e36) fep_entry_item_pane_t1_ParamLimits

0xb980,	// (0x00052e36) fep_entry_item_pane_t1

0xb996,	// (0x00052e4c) fep_candidate_item_pane_t1_ParamLimits

0xb996,	// (0x00052e4c) fep_candidate_item_pane_t1

0xb9ab,	// (0x00052e61) fep_candidate_item_pane_t2_ParamLimits

0xb9ab,	// (0x00052e61) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00056c03) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00056c03) fep_candidate_item_pane_t

0x8b28,	// (0x0004ffde) list_highlight_pane_cp31_ParamLimits

0x8b28,	// (0x0004ffde) list_highlight_pane_cp31

0xb9bd,	// (0x00052e73) level_1_signal_lsc

0xb9c6,	// (0x00052e7c) level_2_signal_lsc

0xb9cf,	// (0x00052e85) level_3_signal_lsc

0xb9d8,	// (0x00052e8e) level_4_signal_lsc

0xb9e1,	// (0x00052e97) level_5_signal_lsc

0xb9ea,	// (0x00052ea0) level_6_signal_lsc

0xb9f3,	// (0x00052ea9) level_7_signal_lsc

0xb9f3,	// (0x00052ea9) level_1_battery_lsc

0xb9fc,	// (0x00052eb2) level_2_battery_lsc

0xba05,	// (0x00052ebb) level_3_battery_lsc

0xba0e,	// (0x00052ec4) level_4_battery_lsc

0xba17,	// (0x00052ecd) level_5_battery_lsc

0xba20,	// (0x00052ed6) level_6_battery_lsc

0xb9bd,	// (0x00052e73) level_7_battery_lsc

0xba29,	// (0x00052edf) scroll_handle_focus_pane_g1

0xba32,	// (0x00052ee8) scroll_handle_focus_pane_g2

0xba3b,	// (0x00052ef1) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00056c08) scroll_handle_focus_pane_g

0x761b,	// (0x0004ead1) list_single_2graphic_pane_g1_ParamLimits

0x761b,	// (0x0004ead1) list_single_2graphic_pane_g1

0x8347,	// (0x0004f7fd) list_single_2graphic_pane_g2_ParamLimits

0x8347,	// (0x0004f7fd) list_single_2graphic_pane_g2

0x2d1c,	// (0x0004a1d2) list_single_2graphic_pane_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_2graphic_pane_g3

0x8566,	// (0x0004fa1c) list_single_2graphic_pane_g4_ParamLimits

0x8566,	// (0x0004fa1c) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00056c0f) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00056c0f) list_single_2graphic_pane_g

0x7627,	// (0x0004eadd) list_single_2graphic_pane_t1_ParamLimits

0x7627,	// (0x0004eadd) list_single_2graphic_pane_t1

0x7655,	// (0x0004eb0b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7655,	// (0x0004eb0b) list_double2_graphic_large_graphic_pane_g1

0x8347,	// (0x0004f7fd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8347,	// (0x0004f7fd) list_double2_graphic_large_graphic_pane_g2

0x2d1c,	// (0x0004a1d2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double2_graphic_large_graphic_pane_g3

0x7667,	// (0x0004eb1d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7667,	// (0x0004eb1d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00056c18) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00056c18) list_double2_graphic_large_graphic_pane_g

0x7673,	// (0x0004eb29) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7673,	// (0x0004eb29) list_double2_graphic_large_graphic_pane_t1

0x7689,	// (0x0004eb3f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7689,	// (0x0004eb3f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00056c21) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00056c21) list_double2_graphic_large_graphic_pane_t

0xbc2d,	// (0x000530e3) popup_fast_swap_window_ParamLimits

0xbc2d,	// (0x000530e3) popup_fast_swap_window

0xbc49,	// (0x000530ff) popup_side_volume_key_window

0xbc65,	// (0x0005311b) stacon_top_pane

0xbc6f,	// (0x00053125) status_pane_ParamLimits

0xbc6f,	// (0x00053125) status_pane

0xbc65,	// (0x0005311b) status_small_pane

0x8acc,	// (0x0004ff82) control_pane

0x8acc,	// (0x0004ff82) stacon_bottom_pane

0xae3a,	// (0x000522f0) scroll_pane_cp121

0xae31,	// (0x000522e7) set_content_pane

0xba44,	// (0x00052efa) bg_active_tab_pane_g1_cp1

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp1

0xba56,	// (0x00052f0c) bg_active_tab_pane_g3_cp1

0xba44,	// (0x00052efa) bg_passive_tab_pane_g1_cp1

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp1

0xba56,	// (0x00052f0c) bg_passive_tab_pane_g3_cp1

0x8572,	// (0x0004fa28) bg_active_tab_pane_g1_cp2

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp2

0x857b,	// (0x0004fa31) bg_active_tab_pane_g3_cp2

0x8572,	// (0x0004fa28) bg_passive_tab_pane_g1_cp2

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp2

0x857b,	// (0x0004fa31) bg_passive_tab_pane_g3_cp2

0x8584,	// (0x0004fa3a) bg_active_tab_pane_g1_cp3

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp3

0x858d,	// (0x0004fa43) bg_active_tab_pane_g3_cp3

0x8584,	// (0x0004fa3a) bg_passive_tab_pane_g1_cp3

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp3

0x858d,	// (0x0004fa43) bg_passive_tab_pane_g3_cp3

0x8596,	// (0x0004fa4c) bg_active_tab_pane_g1_cp4

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp4

0x859f,	// (0x0004fa55) bg_active_tab_pane_g3_cp4

0x8596,	// (0x0004fa4c) bg_passive_tab_pane_g1_cp4

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp4

0x859f,	// (0x0004fa55) bg_passive_tab_pane_g3_cp4

0xba9d,	// (0x00052f53) bg_active_tab_pane_g1_cp5

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp5

0xbaa6,	// (0x00052f5c) bg_active_tab_pane_g3_cp5

0xba9d,	// (0x00052f53) bg_passive_tab_pane_g1_cp5

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp5

0xbaa6,	// (0x00052f5c) bg_passive_tab_pane_g3_cp5

0x85a8,	// (0x0004fa5e) list_set_graphic_pane_ParamLimits

0x85a8,	// (0x0004fa5e) list_set_graphic_pane

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp4

0x85ba,	// (0x0004fa70) list_set_graphic_pane_g1_ParamLimits

0x85ba,	// (0x0004fa70) list_set_graphic_pane_g1

0x85c6,	// (0x0004fa7c) list_set_graphic_pane_g2_ParamLimits

0x85c6,	// (0x0004fa7c) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00056c26) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00056c26) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00056f8b) volume_small_pane_cp_g

0xbaaf,	// (0x00052f65) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbaaf,	// (0x00052f65) list_double2_large_graphic_pane_g1_cp2

0xbabb,	// (0x00052f71) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbabb,	// (0x00052f71) list_double2_large_graphic_pane_g2_cp2

0xbacc,	// (0x00052f82) list_double2_large_graphic_pane_g3_cp2

0xbad4,	// (0x00052f8a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbad4,	// (0x00052f8a) list_double2_large_graphic_pane_t1_cp2

0xbc1b,	// (0x000530d1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbc1b,	// (0x000530d1) list_double2_large_graphic_pane_t2_cp2

0xd3b5,	// (0x0005486b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3b5,	// (0x0005486b) list_double_large_graphic_pane_g1_cp2

0xd3c6,	// (0x0005487c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd3c6,	// (0x0005487c) list_double_large_graphic_pane_g2_cp2

0xbd8b,	// (0x00053241) list_double_large_graphic_pane_g3_cp2

0xd3d7,	// (0x0005488d) list_double_large_graphic_pane_g4_cp

0xd3df,	// (0x00054895) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd3df,	// (0x00054895) list_double_large_graphic_pane_t1_cp2

0xd3f6,	// (0x000548ac) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd3f6,	// (0x000548ac) list_double_large_graphic_pane_t2_cp2

0xbc7d,	// (0x00053133) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbc7d,	// (0x00053133) list_double2_graphic_pane_g1_cp2

0xbc8b,	// (0x00053141) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbc8b,	// (0x00053141) list_double2_graphic_pane_g2_cp2

0xbc9c,	// (0x00053152) list_double2_graphic_pane_g3_cp2

0xbca6,	// (0x0005315c) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbca6,	// (0x0005315c) list_double2_graphic_pane_t1_cp2

0xbcbc,	// (0x00053172) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbcbc,	// (0x00053172) list_double2_graphic_pane_t2_cp2

0xbcce,	// (0x00053184) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbcce,	// (0x00053184) list_single_number_heading_pane_g1_cp2

0xbcda,	// (0x00053190) list_single_number_heading_pane_g2_cp2

0xbce2,	// (0x00053198) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbce2,	// (0x00053198) list_single_number_heading_pane_t1_cp2

0xbcf8,	// (0x000531ae) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbcf8,	// (0x000531ae) list_single_number_heading_pane_t2_cp2

0xbd0a,	// (0x000531c0) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbd0a,	// (0x000531c0) list_single_number_heading_pane_t3_cp2

0xbcce,	// (0x00053184) list_single_heading_pane_g1_cp2_ParamLimits

0xbcce,	// (0x00053184) list_single_heading_pane_g1_cp2

0xbcda,	// (0x00053190) list_single_heading_pane_g2_cp2

0xbce2,	// (0x00053198) list_single_heading_pane_t1_cp2_ParamLimits

0xbce2,	// (0x00053198) list_single_heading_pane_t1_cp2

0xd1bd,	// (0x00054673) list_single_heading_pane_t2_cp2_ParamLimits

0xd1bd,	// (0x00054673) list_single_heading_pane_t2_cp2

0xd0e1,	// (0x00054597) list_double_graphic_pane_g1_cp2_ParamLimits

0xd0e1,	// (0x00054597) list_double_graphic_pane_g1_cp2

0xd0ed,	// (0x000545a3) list_double_graphic_pane_g2_cp2_ParamLimits

0xd0ed,	// (0x000545a3) list_double_graphic_pane_g2_cp2

0xd120,	// (0x000545d6) list_double_graphic_pane_g3_cp2

0xd128,	// (0x000545de) list_double_graphic_pane_t1_cp2_ParamLimits

0xd128,	// (0x000545de) list_double_graphic_pane_t1_cp2

0xd13e,	// (0x000545f4) list_double_graphic_pane_t2_cp2_ParamLimits

0xd13e,	// (0x000545f4) list_double_graphic_pane_t2_cp2

0xbd7f,	// (0x00053235) list_double_number_pane_g1_cp2_ParamLimits

0xbd7f,	// (0x00053235) list_double_number_pane_g1_cp2

0xbd8b,	// (0x00053241) list_double_number_pane_g2_cp2

0xd0a5,	// (0x0005455b) list_double_number_pane_t1_cp2_ParamLimits

0xd0a5,	// (0x0005455b) list_double_number_pane_t1_cp2

0xd0b9,	// (0x0005456f) list_double_number_pane_t2_cp2_ParamLimits

0xd0b9,	// (0x0005456f) list_double_number_pane_t2_cp2

0xd0cf,	// (0x00054585) list_double_number_pane_t3_cp2_ParamLimits

0xd0cf,	// (0x00054585) list_double_number_pane_t3_cp2

0xd01c,	// (0x000544d2) list_single_graphic_pane_g1_cp2_ParamLimits

0xd01c,	// (0x000544d2) list_single_graphic_pane_g1_cp2

0xb515,	// (0x000529cb) list_single_graphic_pane_g2_cp2_ParamLimits

0xb515,	// (0x000529cb) list_single_graphic_pane_g2_cp2

0xbde3,	// (0x00053299) list_single_graphic_pane_g3_cp2

0xcff2,	// (0x000544a8) list_single_graphic_pane_t1_cp2_ParamLimits

0xcff2,	// (0x000544a8) list_single_graphic_pane_t1_cp2

0xb515,	// (0x000529cb) list_single_number_pane_g1_cp2_ParamLimits

0xb515,	// (0x000529cb) list_single_number_pane_g1_cp2

0xbde3,	// (0x00053299) list_single_number_pane_g2_cp2

0xcff2,	// (0x000544a8) list_single_number_pane_t1_cp2_ParamLimits

0xcff2,	// (0x000544a8) list_single_number_pane_t1_cp2

0xd008,	// (0x000544be) list_single_number_pane_t2_cp2_ParamLimits

0xd008,	// (0x000544be) list_single_number_pane_t2_cp2

0xbabb,	// (0x00052f71) list_double2_pane_g1_cp2_ParamLimits

0xbabb,	// (0x00052f71) list_double2_pane_g1_cp2

0xbacc,	// (0x00052f82) list_double2_pane_g2_cp2

0xbd57,	// (0x0005320d) list_double2_pane_t1_cp2_ParamLimits

0xbd57,	// (0x0005320d) list_double2_pane_t1_cp2

0xbd6d,	// (0x00053223) list_double2_pane_t2_cp2_ParamLimits

0xbd6d,	// (0x00053223) list_double2_pane_t2_cp2

0xbd7f,	// (0x00053235) list_double_pane_g1_cp2_ParamLimits

0xbd7f,	// (0x00053235) list_double_pane_g1_cp2

0xbd8b,	// (0x00053241) list_double_pane_g2_cp2

0xbd93,	// (0x00053249) list_double_pane_t1_cp2_ParamLimits

0xbd93,	// (0x00053249) list_double_pane_t1_cp2

0xbda9,	// (0x0005325f) list_double_pane_t2_cp2_ParamLimits

0xbda9,	// (0x0005325f) list_double_pane_t2_cp2

0xbdd3,	// (0x00053289) list_single_pane_cp2_g3

0xb515,	// (0x000529cb) list_single_pane_g1_cp2_ParamLimits

0xb515,	// (0x000529cb) list_single_pane_g1_cp2

0xbde3,	// (0x00053299) list_single_pane_g2_cp2

0xbdeb,	// (0x000532a1) list_single_pane_t1_cp2_ParamLimits

0xbdeb,	// (0x000532a1) list_single_pane_t1_cp2

0xbe03,	// (0x000532b9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbe03,	// (0x000532b9) list_single_large_graphic_pane_g1_cp2

0xbe0f,	// (0x000532c5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbe0f,	// (0x000532c5) list_single_large_graphic_pane_g2_cp2

0xbe1b,	// (0x000532d1) list_single_large_graphic_pane_g3_cp2

0xbe23,	// (0x000532d9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbe23,	// (0x000532d9) list_single_large_graphic_pane_g4_cp1

0xbe3d,	// (0x000532f3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbe3d,	// (0x000532f3) list_single_large_graphic_pane_t1_cp2

0xcfbe,	// (0x00054474) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcfbe,	// (0x00054474) list_single_graphic_heading_pane_g1_cp2

0xcf8b,	// (0x00054441) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcf8b,	// (0x00054441) list_single_graphic_heading_pane_g4_cp2

0xbde3,	// (0x00053299) list_single_graphic_heading_pane_g5_cp2

0xcfca,	// (0x00054480) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xcfca,	// (0x00054480) list_single_graphic_heading_pane_t1_cp2

0xcfe0,	// (0x00054496) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcfe0,	// (0x00054496) list_single_graphic_heading_pane_t2_cp2

0xcf7f,	// (0x00054435) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcf7f,	// (0x00054435) list_single_2graphic_pane_g1_cp2

0xcf8b,	// (0x00054441) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcf8b,	// (0x00054441) list_single_2graphic_pane_g2_cp2

0xbde3,	// (0x00053299) list_single_2graphic_pane_g3_cp2

0xcf9c,	// (0x00054452) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcf9c,	// (0x00054452) list_single_2graphic_pane_g4_cp2

0xcfa8,	// (0x0005445e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xcfa8,	// (0x0005445e) list_single_2graphic_pane_t1_cp2

0x8ac2,	// (0x0004ff78) list_highlight_pane_g10_cp1

0xcb75,	// (0x0005402b) list_highlight_pane_g1_cp1

0xcb7d,	// (0x00054033) list_highlight_pane_g2_cp1

0xcb85,	// (0x0005403b) list_highlight_pane_g3_cp1

0xcb8d,	// (0x00054043) list_highlight_pane_g4_cp1

0xcb95,	// (0x0005404b) list_highlight_pane_g5_cp1

0xcb9d,	// (0x00054053) list_highlight_pane_g6_cp1

0xcba5,	// (0x0005405b) list_highlight_pane_g7_cp1

0xcbad,	// (0x00054063) list_highlight_pane_g8_cp1

0xcbb5,	// (0x0005406b) list_highlight_pane_g9_cp1

0x987f,	// (0x00050d35) form_field_slider_pane_t3

0x988d,	// (0x00050d43) form_field_slider_pane_t4

0xcab1,	// (0x00053f67) slider_form_pane_ParamLimits

0xcab1,	// (0x00053f67) slider_form_pane

0x8acc,	// (0x0004ff82) control_abbreviations

0x8acc,	// (0x0004ff82) control_conventions

0x8acc,	// (0x0004ff82) control_definitions

0x8acc,	// (0x0004ff82) format_table_attribute

0xd207,	// (0x000546bd) bg_popup_preview_window_pane_g9

0x8acc,	// (0x0004ff82) format_table_data2

0x8acc,	// (0x0004ff82) format_table_data3

0x8acc,	// (0x0004ff82) format_table_data_example

0x0008,

0x8acc,	// (0x0004ff82) intro_purpose

0xf8f9,	// (0x00056daf) bg_popup_preview_window_pane_g

0x8acc,	// (0x0004ff82) texts_category

0x8acc,	// (0x0004ff82) texts_graphics

0xbe53,	// (0x00053309) text_digital

0xbe62,	// (0x00053318) text_primary

0xbe71,	// (0x00053327) text_primary_small

0xbe80,	// (0x00053336) text_secondary

0xbe8f,	// (0x00053345) text_title

0xd6ec,	// (0x00054ba2) bg_passive_tab_pane_g1_cp3_srt

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp3_srt

0xd6f5,	// (0x00054bab) bg_passive_tab_pane_g3_cp3_srt

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp3_srt_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp3_srt

0xd6fe,	// (0x00054bb4) tabs_4_active_pane_srt_g1

0x9c90,	// (0x00051146) tabs_4_active_pane_srt_t1_ParamLimits

0x9c90,	// (0x00051146) tabs_4_active_pane_srt_t1

0xd6ec,	// (0x00054ba2) bg_active_tab_pane_g1_cp3_copy1

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp3_copy1

0xd6f5,	// (0x00054bab) bg_active_tab_pane_g3_cp3_copy1

0x8b28,	// (0x0004ffde) tabs_2_long_active_pane_srt_ParamLimits

0x8b28,	// (0x0004ffde) tabs_2_long_active_pane_srt

0x8b28,	// (0x0004ffde) tabs_2_long_passive_pane_srt_ParamLimits

0x8b28,	// (0x0004ffde) tabs_2_long_passive_pane_srt

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp4_srt_ParamLimits

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp4_srt

0xd5fd,	// (0x00054ab3) bg_passive_tab_pane_g1_cp4_srt

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp4_srt

0xd606,	// (0x00054abc) bg_passive_tab_pane_g3_cp4_srt

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp4_srt_ParamLimits

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp4_srt

0x9aba,	// (0x00050f70) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9aba,	// (0x00050f70) tabs_2_long_active_pane_srt_t1

0xd5fd,	// (0x00054ab3) bg_active_tab_pane_g1_cp4_srt

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp4_srt

0xd606,	// (0x00054abc) bg_active_tab_pane_g3_cp4_srt

0x8b1a,	// (0x0004ffd0) tabs_3_long_active_pane_srt_ParamLimits

0x8b1a,	// (0x0004ffd0) tabs_3_long_active_pane_srt

0x8b1a,	// (0x0004ffd0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8b1a,	// (0x0004ffd0) tabs_3_long_passive_pane_cp_srt

0x8b1a,	// (0x0004ffd0) tabs_3_long_passive_pane_srt_ParamLimits

0x8b1a,	// (0x0004ffd0) tabs_3_long_passive_pane_srt

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp5_srt_ParamLimits

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp5_srt

0xba9d,	// (0x00052f53) bg_passive_tab_pane_g1_cp5_srt

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp5_srt

0xbaa6,	// (0x00052f5c) bg_passive_tab_pane_g3_cp5_srt

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp5_srt_ParamLimits

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp5_srt

0x9aa4,	// (0x00050f5a) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9aa4,	// (0x00050f5a) tabs_3_long_active_pane_srt_t1

0xba9d,	// (0x00052f53) bg_active_tab_pane_g1_cp5_srt

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp5_srt

0xbaa6,	// (0x00052f5c) bg_active_tab_pane_g3_cp5_srt

0xd5ef,	// (0x00054aa5) navi_text_pane_srt_t1

0xd5e7,	// (0x00054a9d) navi_icon_pane_srt_g1

0xbfa7,	// (0x0005345d) midp_editing_number_pane_srt

0xbe9e,	// (0x00053354) midp_ticker_pane_srt

0xbfaf,	// (0x00053465) midp_ticker_pane_srt_g1

0xbfb7,	// (0x0005346d) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00056c45) midp_ticker_pane_srt_g

0xbfbf,	// (0x00053475) midp_ticker_pane_srt_t1

0xd5d8,	// (0x00054a8e) midp_editing_number_pane_t1_copy1

0xafaf,	// (0x00052465) listscroll_midp_pane

0xafaf,	// (0x00052465) midp_form_pane

0xbea6,	// (0x0005335c) midp_info_popup_window_ParamLimits

0xbea6,	// (0x0005335c) midp_info_popup_window

0xaf0f,	// (0x000523c5) bg_popup_sub_pane_cp50_ParamLimits

0xaf0f,	// (0x000523c5) bg_popup_sub_pane_cp50

0xc7bd,	// (0x00053c73) listscroll_midp_info_pane_ParamLimits

0xc7bd,	// (0x00053c73) listscroll_midp_info_pane

0xc7a5,	// (0x00053c5b) listscroll_form_midp_pane_ParamLimits

0xc7a5,	// (0x00053c5b) listscroll_form_midp_pane

0xc7b1,	// (0x00053c67) scroll_bar_cp050

0x9873,	// (0x00050d29) list_midp_pane

0xdf9c,	// (0x00055452) signal_pane_g2_cp

0xc6cb,	// (0x00053b81) listscroll_midp_info_pane_t1_ParamLimits

0xc6cb,	// (0x00053b81) listscroll_midp_info_pane_t1

0xc6e3,	// (0x00053b99) listscroll_midp_info_pane_t2_ParamLimits

0xc6e3,	// (0x00053b99) listscroll_midp_info_pane_t2

0xc721,	// (0x00053bd7) listscroll_midp_info_pane_t3_ParamLimits

0xc721,	// (0x00053bd7) listscroll_midp_info_pane_t3

0xc75b,	// (0x00053c11) listscroll_midp_info_pane_t4_ParamLimits

0xc75b,	// (0x00053c11) listscroll_midp_info_pane_t4

0x0003,

0xf834,	// (0x00056cea) listscroll_midp_info_pane_t_ParamLimits

0xf834,	// (0x00056cea) listscroll_midp_info_pane_t

0xaf76,	// (0x0005242c) scroll_pane_cp21

0xc669,	// (0x00053b1f) form_midp_field_choice_group_pane

0xc672,	// (0x00053b28) form_midp_field_text_pane

0xc6b1,	// (0x00053b67) form_midp_field_time_pane

0xc6b9,	// (0x00053b6f) form_midp_gauge_slider_pane

0xc6c2,	// (0x00053b78) form_midp_gauge_wait_pane

0x8acc,	// (0x0004ff82) form_midp_image_pane

0x7870,	// (0x0004ed26) list_single_midp_pane_ParamLimits

0x7870,	// (0x0004ed26) list_single_midp_pane

0x9851,	// (0x00050d07) form_midp_field_text_pane_t1

0xc510,	// (0x000539c6) input_focus_pane_cp050

0xc658,	// (0x00053b0e) list_midp_form_text_pane

0xc627,	// (0x00053add) form_midp_field_choice_group_pane_t1

0xc635,	// (0x00053aeb) input_focus_pane_cp051

0xc649,	// (0x00053aff) list_midp_choice_pane

0x8acc,	// (0x0004ff82) status_idle_pane

0xc60b,	// (0x00053ac1) form_midp_field_time_pane_t1

0x8ac2,	// (0x0004ff78) wait_anim_pane_g2_copy1

0xc619,	// (0x00053acf) form_midp_field_time_pane_t2

0x0001,

0xbf11,	// (0x000533c7) aid_navinavi_width_2_pane

0xf82f,	// (0x00056ce5) form_midp_field_time_pane_t

0x8acc,	// (0x0004ff82) input_focus_pane_cp052

0x8acc,	// (0x0004ff82) bg_input_focus_pane_cp040

0xc5e7,	// (0x00053a9d) form_midp_gauge_slider_pane_t1

0xc5f5,	// (0x00053aab) form_midp_gauge_slider_pane_t2

0x9835,	// (0x00050ceb) form_midp_gauge_slider_pane_t3

0x9843,	// (0x00050cf9) form_midp_gauge_slider_pane_t4

0x0003,

0xf826,	// (0x00056cdc) form_midp_gauge_slider_pane_t

0xc603,	// (0x00053ab9) form_midp_slider_pane

0x8b28,	// (0x0004ffde) bg_input_focus_pane_cp041_ParamLimits

0x8b28,	// (0x0004ffde) bg_input_focus_pane_cp041

0xc5b4,	// (0x00053a6a) form_midp_gauge_wait_pane_t1_ParamLimits

0xc5b4,	// (0x00053a6a) form_midp_gauge_wait_pane_t1

0xc5c6,	// (0x00053a7c) form_midp_gauge_wait_pane_t2_ParamLimits

0xc5c6,	// (0x00053a7c) form_midp_gauge_wait_pane_t2

0x0001,

0xf821,	// (0x00056cd7) form_midp_gauge_wait_pane_t_ParamLimits

0xf821,	// (0x00056cd7) form_midp_gauge_wait_pane_t

0xc5d8,	// (0x00053a8e) form_midp_wait_pane_ParamLimits

0xc5d8,	// (0x00053a8e) form_midp_wait_pane

0xc57e,	// (0x00053a34) form_midp_image_pane_g1

0xc587,	// (0x00053a3d) form_midp_image_pane_t1

0xc596,	// (0x00053a4c) form_midp_image_pane_t2

0xc5a5,	// (0x00053a5b) form_midp_image_pane_t3

0x0002,

0xf81a,	// (0x00056cd0) form_midp_image_pane_t

0xc575,	// (0x00053a2b) list_single_midp_pane_g1

0x2d6a,	// (0x0004a220) list_single_midp_pane_t1

0x9820,	// (0x00050cd6) list_midp_form_item_pane_ParamLimits

0x9820,	// (0x00050cd6) list_midp_form_item_pane

0xbeb9,	// (0x0005336f) list_midp_form_item_pane_t1

0xbec8,	// (0x0005337e) midp_ticker_pane_g1

0xbed4,	// (0x0005338a) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00056c2b) midp_ticker_pane_g

0xbee0,	// (0x00053396) midp_ticker_pane_t1

0xd68e,	// (0x00054b44) midp_editing_number_pane_t1

0xd66c,	// (0x00054b22) midp_editing_number_pane

0xd67b,	// (0x00054b31) midp_ticker_pane

0xd5c8,	// (0x00054a7e) ai_message_heading_pane

0x8acc,	// (0x0004ff82) bg_popup_window_pane_cp14

0xd5d0,	// (0x00054a86) listscroll_ai_message_pane

0xd552,	// (0x00054a08) ai_message_heading_pane_g1_ParamLimits

0xd552,	// (0x00054a08) ai_message_heading_pane_g1

0xd55e,	// (0x00054a14) ai_message_heading_pane_g2_ParamLimits

0xd55e,	// (0x00054a14) ai_message_heading_pane_g2

0xd56a,	// (0x00054a20) ai_message_heading_pane_g3_ParamLimits

0xd56a,	// (0x00054a20) ai_message_heading_pane_g3

0xd576,	// (0x00054a2c) ai_message_heading_pane_g4_ParamLimits

0xd576,	// (0x00054a2c) ai_message_heading_pane_g4

0x0003,

0xf95b,	// (0x00056e11) ai_message_heading_pane_g_ParamLimits

0xf95b,	// (0x00056e11) ai_message_heading_pane_g

0xd582,	// (0x00054a38) ai_message_heading_pane_t1_ParamLimits

0xd582,	// (0x00054a38) ai_message_heading_pane_t1

0xd59c,	// (0x00054a52) ai_message_heading_pane_t2_ParamLimits

0xd59c,	// (0x00054a52) ai_message_heading_pane_t2

0x0001,

0xf964,	// (0x00056e1a) ai_message_heading_pane_t_ParamLimits

0xf964,	// (0x00056e1a) ai_message_heading_pane_t

0xd5ae,	// (0x00054a64) bg_popup_heading_pane_cp1_ParamLimits

0xd5ae,	// (0x00054a64) bg_popup_heading_pane_cp1

0xd540,	// (0x000549f6) list_ai_message_pane_ParamLimits

0xd540,	// (0x000549f6) list_ai_message_pane

0xaf76,	// (0x0005242c) scroll_pane_cp10

0xd4dc,	// (0x00054992) list_ai_message_pane_g1

0xd4e4,	// (0x0005499a) list_ai_message_pane_g2

0x0001,

0xf938,	// (0x00056dee) list_ai_message_pane_g

0xd4ec,	// (0x000549a2) list_ai_message_pane_t1_ParamLimits

0xd4ec,	// (0x000549a2) list_ai_message_pane_t1

0xd501,	// (0x000549b7) list_ai_message_pane_t2_ParamLimits

0xd501,	// (0x000549b7) list_ai_message_pane_t2

0xd516,	// (0x000549cc) list_ai_message_pane_t3_ParamLimits

0xd516,	// (0x000549cc) list_ai_message_pane_t3

0xd52b,	// (0x000549e1) list_ai_message_pane_t4_ParamLimits

0xd52b,	// (0x000549e1) list_ai_message_pane_t4

0x0003,

0xf93d,	// (0x00056df3) list_ai_message_pane_t_ParamLimits

0xf93d,	// (0x00056df3) list_ai_message_pane_t

0x9a83,	// (0x00050f39) cell_ai_soft_ind_pane_ParamLimits

0x9a83,	// (0x00050f39) cell_ai_soft_ind_pane

0xbef2,	// (0x000533a8) cell_ai_soft_ind_pane_g1_ParamLimits

0xbef2,	// (0x000533a8) cell_ai_soft_ind_pane_g1

0x8acc,	// (0x0004ff82) grid_highlight_cp1

0xbeff,	// (0x000533b5) text_secondary_cp56_ParamLimits

0xbeff,	// (0x000533b5) text_secondary_cp56

0xd4b1,	// (0x00054967) example_general_pane_ParamLimits

0xd4b1,	// (0x00054967) example_general_pane

0xd4bd,	// (0x00054973) example_parent_pane_g1_ParamLimits

0xd4bd,	// (0x00054973) example_parent_pane_g1

0xd4c9,	// (0x0005497f) example_parent_pane_t1_ParamLimits

0xd4c9,	// (0x0005497f) example_parent_pane_t1

0x8db8,	// (0x0005026e) popup_preview_text_window_ParamLimits

0x8db8,	// (0x0005026e) popup_preview_text_window

0xbddb,	// (0x00053291) list_single_pane_cp2_g4

0x8d03,	// (0x000501b9) bg_popup_preview_window_pane_ParamLimits

0x8d03,	// (0x000501b9) bg_popup_preview_window_pane

0xd20f,	// (0x000546c5) popup_preview_text_window_t1_ParamLimits

0xd20f,	// (0x000546c5) popup_preview_text_window_t1

0xd22d,	// (0x000546e3) popup_preview_text_window_t2_ParamLimits

0xd22d,	// (0x000546e3) popup_preview_text_window_t2

0xd276,	// (0x0005472c) popup_preview_text_window_t3_ParamLimits

0xd276,	// (0x0005472c) popup_preview_text_window_t3

0xd2bb,	// (0x00054771) popup_preview_text_window_t4_ParamLimits

0xd2bb,	// (0x00054771) popup_preview_text_window_t4

0x0004,

0xf90c,	// (0x00056dc2) popup_preview_text_window_t_ParamLimits

0xf90c,	// (0x00056dc2) popup_preview_text_window_t

0xd339,	// (0x000547ef) scroll_pane_cp11

0xc418,	// (0x000538ce) bg_popup_preview_window_pane_g1

0xd1cf,	// (0x00054685) bg_popup_preview_window_pane_g2

0xd1d7,	// (0x0005468d) bg_popup_preview_window_pane_g3

0xd1df,	// (0x00054695) bg_popup_preview_window_pane_g4

0xd1e7,	// (0x0005469d) bg_popup_preview_window_pane_g5

0xd1ef,	// (0x000546a5) bg_popup_preview_window_pane_g6

0xd1f7,	// (0x000546ad) bg_popup_preview_window_pane_g7

0xd1ff,	// (0x000546b5) bg_popup_preview_window_pane_g8

0x02fe,	// (0x000477b4) aid_popup_width_pane

0x8d34,	// (0x000501ea) popup_midp_note_alarm_window_ParamLimits

0x8d34,	// (0x000501ea) popup_midp_note_alarm_window

0xae4b,	// (0x00052301) data_form_pane_ParamLimits

0x74f4,	// (0x0004e9aa) form_field_data_pane_g1

0x74fe,	// (0x0004e9b4) form_field_data_pane_t1_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_ParamLimits

0xae65,	// (0x0005231b) data_form_wide_pane_ParamLimits

0x0d12,	// (0x000481c8) form_field_data_wide_pane_g1

0x0d1e,	// (0x000481d4) form_field_data_wide_pane_t1_ParamLimits

0x9350,	// (0x00050806) input_focus_pane_cp6_ParamLimits

0x83b1,	// (0x0004f867) input_popup_find_pane_g1_ParamLimits

0x83b1,	// (0x0004f867) input_popup_find_pane_g1

0x0f96,	// (0x0004844c) aid_navi_side_left_pane

0x0fab,	// (0x00048461) aid_navi_side_right_pane

0xcc52,	// (0x00054108) bg_popup_window_pane_cp30_ParamLimits

0xcc52,	// (0x00054108) bg_popup_window_pane_cp30

0xcccc,	// (0x00054182) popup_midp_note_alarm_window_g1_ParamLimits

0xcccc,	// (0x00054182) popup_midp_note_alarm_window_g1

0xccfc,	// (0x000541b2) popup_midp_note_alarm_window_t1_ParamLimits

0xccfc,	// (0x000541b2) popup_midp_note_alarm_window_t1

0xcd9d,	// (0x00054253) popup_midp_note_alarm_window_t2_ParamLimits

0xcd9d,	// (0x00054253) popup_midp_note_alarm_window_t2

0xce4b,	// (0x00054301) popup_midp_note_alarm_window_t3_ParamLimits

0xce4b,	// (0x00054301) popup_midp_note_alarm_window_t3

0xce7d,	// (0x00054333) popup_midp_note_alarm_window_t4_ParamLimits

0xce7d,	// (0x00054333) popup_midp_note_alarm_window_t4

0xcea3,	// (0x00054359) popup_midp_note_alarm_window_t5_ParamLimits

0xcea3,	// (0x00054359) popup_midp_note_alarm_window_t5

0x000a,

0xf8a9,	// (0x00056d5f) popup_midp_note_alarm_window_t_ParamLimits

0xf8a9,	// (0x00056d5f) popup_midp_note_alarm_window_t

0xcf4f,	// (0x00054405) wait_bar_pane_cp1_ParamLimits

0xcf4f,	// (0x00054405) wait_bar_pane_cp1

0x8acc,	// (0x0004ff82) wait_anim_pane_copy1

0x8acc,	// (0x0004ff82) wait_border_pane_copy1

0xc966,	// (0x00053e1c) wait_border_pane_g1_copy1

0x0d38,	// (0x000481ee) form_field_popup_pane_g1

0x7518,	// (0x0004e9ce) form_field_popup_pane_t1_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_cp7_ParamLimits

0xae91,	// (0x00052347) list_form_pane_ParamLimits

0x0d58,	// (0x0004820e) form_field_popup_wide_pane_g1

0x0d60,	// (0x00048216) form_field_popup_wide_pane_t1_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_cp8_ParamLimits

0xae9d,	// (0x00052353) list_form_wide_pane_ParamLimits

0xd725,	// (0x00054bdb) aid_size_cell_graphic_pane

0x7597,	// (0x0004ea4d) data_form_pane_t1_ParamLimits

0x79e2,	// (0x0004ee98) data_form_wide_pane_t1_ParamLimits

0x94ab,	// (0x00050961) bg_status_flat_pane

0x7fca,	// (0x0004f480) title_pane_t1_ParamLimits

0x8ae2,	// (0x0004ff98) title_pane_t2_ParamLimits

0x8b08,	// (0x0004ffbe) title_pane_t3_ParamLimits

0xf56f,	// (0x00056a25) title_pane_t_ParamLimits

0xb81c,	// (0x00052cd2) level_1_signal_ParamLimits

0xb829,	// (0x00052cdf) level_2_signal_ParamLimits

0xb836,	// (0x00052cec) level_3_signal_ParamLimits

0xb843,	// (0x00052cf9) level_4_signal_ParamLimits

0xb850,	// (0x00052d06) level_5_signal_ParamLimits

0xb85d,	// (0x00052d13) level_6_signal_ParamLimits

0xb86a,	// (0x00052d20) level_7_signal_ParamLimits

0xb81c,	// (0x00052cd2) level_1_battery_ParamLimits

0xb829,	// (0x00052cdf) level_2_battery_ParamLimits

0xb836,	// (0x00052cec) level_3_battery_ParamLimits

0xb843,	// (0x00052cf9) level_4_battery_ParamLimits

0xb850,	// (0x00052d06) level_5_battery_ParamLimits

0xb85d,	// (0x00052d13) level_6_battery_ParamLimits

0xb86a,	// (0x00052d20) level_7_battery_ParamLimits

0xcb75,	// (0x0005402b) bg_status_flat_pane_g1

0xcb7d,	// (0x00054033) bg_status_flat_pane_g2

0xcb85,	// (0x0005403b) bg_status_flat_pane_g3

0xcb8d,	// (0x00054043) bg_status_flat_pane_g4

0xcb95,	// (0x0005404b) bg_status_flat_pane_g5

0xcb9d,	// (0x00054053) bg_status_flat_pane_g6

0xcba5,	// (0x0005405b) bg_status_flat_pane_g7

0x805e,	// (0x0004f514) tabs_3_active_pane_t1_ParamLimits

0x805e,	// (0x0004f514) tabs_3_passive_pane_t1_ParamLimits

0x8078,	// (0x0004f52e) tabs_4_active_pane_t1_ParamLimits

0x8078,	// (0x0004f52e) tabs_4_1_passive_pane_t1_ParamLimits

0x83c7,	// (0x0004f87d) tabs_2_active_pane_t1_ParamLimits

0x83c7,	// (0x0004f87d) tabs_2_passive_pane_t1_ParamLimits

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp4_ParamLimits

0x83d9,	// (0x0004f88f) tabs_2_long_active_pane_t1_ParamLimits

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp4_ParamLimits

0x1502,	// (0x000489b8) list_single_midp_graphic_pane_t1_ParamLimits

0x8b28,	// (0x0004ffde) bg_active_tab_pane_cp5_ParamLimits

0x83ec,	// (0x0004f8a2) tabs_3_long_active_pane_t1_ParamLimits

0xafaf,	// (0x00052465) bg_passive_tab_pane_cp5_ParamLimits

0x1502,	// (0x000489b8) list_single_midp_graphic_pane_t1

0x94ab,	// (0x00050961) bg_status_flat_pane_ParamLimits

0xc2cb,	// (0x00053781) indicator_pane_cp2_ParamLimits

0xc2cb,	// (0x00053781) indicator_pane_cp2

0x9623,	// (0x00050ad9) navi_pane_srt_ParamLimits

0x9623,	// (0x00050ad9) navi_pane_srt

0xc2f3,	// (0x000537a9) popup_clock_digital_analogue_window_cp1

0x8b6c,	// (0x00050022) indicator_pane_t1

0xbe9e,	// (0x00053354) copy_highlight_pane

0xbe9e,	// (0x00053354) cursor_graphics_pane

0xbe9e,	// (0x00053354) graphic_within_text_pane

0xbe9e,	// (0x00053354) link_highlight_pane

0xd2fc,	// (0x000547b2) popup_preview_text_window_t5_ParamLimits

0xd2fc,	// (0x000547b2) popup_preview_text_window_t5

0xbf19,	// (0x000533cf) cursor_digital_pane

0xbf19,	// (0x000533cf) cursor_primary_pane

0xbf2a,	// (0x000533e0) cursor_primary_small_pane

0xbf32,	// (0x000533e8) cursor_secondary_pane

0xbf3a,	// (0x000533f0) cursor_title_pane

0xbf19,	// (0x000533cf) link_highlight_digital_pane

0xbf21,	// (0x000533d7) link_highlight_primary_pane

0xbf2a,	// (0x000533e0) link_highlight_primary_small_pane

0xbf32,	// (0x000533e8) link_highlight_secondary_pane

0xbf3a,	// (0x000533f0) link_highlight_title_pane

0xbf19,	// (0x000533cf) copy_highlight_digital_pane

0xbf19,	// (0x000533cf) copy_highlight_primary_pane

0xbf2a,	// (0x000533e0) copy_highlight_primary_small_pane

0xbf32,	// (0x000533e8) copy_highlight_secondary_pane

0xbf3a,	// (0x000533f0) copy_highlight_title_pane

0xbf32,	// (0x000533e8) graphic_text_digital_pane

0xcbf5,	// (0x000540ab) graphic_text_primary_pane

0xcbfe,	// (0x000540b4) graphic_text_primary_small_pane

0xbf2a,	// (0x000533e0) graphic_text_secondary_pane

0xbf19,	// (0x000533cf) graphic_text_title_pane

0x8681,	// (0x0004fb37) cursor_primary_pane_g1

0xcbe7,	// (0x0005409d) cursor_text_primary_t1

0x98af,	// (0x00050d65) cursor_primary_small_pane_g1

0xcbd9,	// (0x0005408f) cursor_text_primary_small_t1

0x98a5,	// (0x00050d5b) cursor_primary_small_pane_g1_copy1

0xcbcb,	// (0x00054081) cursor_text_primary_small_t1_copy1

0xcbbd,	// (0x00054073) cursor_text_title_t1

0x989b,	// (0x00050d51) cursor_title_pane_g1

0x8681,	// (0x0004fb37) cursor_digital_pane_g1

0xbf42,	// (0x000533f8) cursor_text_digital_t1

0xbf67,	// (0x0005341d) link_highlight_primary_pane_g1

0xcb66,	// (0x0005401c) link_highlight_primary_pane_t1

0xbf50,	// (0x00053406) link_highlight_primary_small_pane_g1

0xbf58,	// (0x0005340e) link_highlight_primary_small_pane_t1

0xbf67,	// (0x0005341d) link_highlight_secondary_pane_g1

0xbf6f,	// (0x00053425) link_highlight_secondary_pane_t1

0xcada,	// (0x00053f90) link_highlight_title_pane_g1

0xcae2,	// (0x00053f98) link_highlight_title_pane_t1

0xcac3,	// (0x00053f79) link_highlight_digital_pane_g1

0xcacb,	// (0x00053f81) link_highlight_digital_pane_t1

0xc9ab,	// (0x00053e61) copy_highlight_primary_pane_g1

0xc9b3,	// (0x00053e69) copy_highlight_primary_pane_t1

0xc985,	// (0x00053e3b) copy_highlight_primary_small_pane_g1

0xc99c,	// (0x00053e52) copy_highlight_primary_small_pane_t1

0xbf7e,	// (0x00053434) copy_highlight_secondary_pane_g1

0xbf86,	// (0x0005343c) copy_highlight_secondary_pane_t1

0xc985,	// (0x00053e3b) copy_highlight_title_pane_g1

0xc98d,	// (0x00053e43) copy_highlight_title_pane_t1

0xc9ab,	// (0x00053e61) copy_highlight_digital_pane_g1

0xd8ab,	// (0x00054d61) copy_highlight_digital_pane_t1

0xd7ff,	// (0x00054cb5) graphic_text_primary_pane_g1

0xd88f,	// (0x00054d45) graphic_text_primary_pane_t1

0xd89d,	// (0x00054d53) graphic_text_primary_pane_t2

0x0001,

0xf9d8,	// (0x00056e8e) graphic_text_primary_pane_t

0xd86b,	// (0x00054d21) graphic_text_primary_small_pane_g1

0xd873,	// (0x00054d29) graphic_text_primary_small_pane_t1

0xd881,	// (0x00054d37) graphic_text_primary_small_pane_t2

0x0001,

0xf9d3,	// (0x00056e89) graphic_text_primary_small_pane_t

0xd847,	// (0x00054cfd) graphic_text_secondary_pane_g1

0xd84f,	// (0x00054d05) graphic_text_secondary_pane_t1

0xd85d,	// (0x00054d13) graphic_text_secondary_pane_t2

0x0001,

0xf9ce,	// (0x00056e84) graphic_text_secondary_pane_t

0xd823,	// (0x00054cd9) graphic_text_title_pane_g1

0xd82b,	// (0x00054ce1) graphic_text_title_pane_t1

0xd839,	// (0x00054cef) graphic_text_title_pane_t2

0x0001,

0xf9c9,	// (0x00056e7f) graphic_text_title_pane_t

0xd7ff,	// (0x00054cb5) graphic_text_digital_pane_g1

0xd807,	// (0x00054cbd) graphic_text_digital_pane_t1

0xd815,	// (0x00054ccb) graphic_text_digital_pane_t2

0x0001,

0xf9c4,	// (0x00056e7a) graphic_text_digital_pane_t

0x8b28,	// (0x0004ffde) navi_icon_pane_srt_ParamLimits

0x8b28,	// (0x0004ffde) navi_icon_pane_srt

0x8acc,	// (0x0004ff82) navi_midp_pane_srt

0x8acc,	// (0x0004ff82) navi_navi_pane_srt

0x8b28,	// (0x0004ffde) navi_text_pane_srt_ParamLimits

0x8b28,	// (0x0004ffde) navi_text_pane_srt

0xd7ca,	// (0x00054c80) navi_navi_icon_text_pane_srt

0xd7d2,	// (0x00054c88) navi_navi_pane_srt_g1_ParamLimits

0xd7d2,	// (0x00054c88) navi_navi_pane_srt_g1

0xd7e4,	// (0x00054c9a) navi_navi_pane_srt_g2_ParamLimits

0xd7e4,	// (0x00054c9a) navi_navi_pane_srt_g2

0x0001,

0xf9bf,	// (0x00056e75) navi_navi_pane_srt_g_ParamLimits

0xf9bf,	// (0x00056e75) navi_navi_pane_srt_g

0xd7f6,	// (0x00054cac) navi_navi_tabs_pane_srt

0xd7ca,	// (0x00054c80) navi_navi_text_pane_srt

0xd7ca,	// (0x00054c80) navi_navi_volume_pane_srt

0xd7bb,	// (0x00054c71) navi_navi_text_pane_srt_t1

0x187c,	// (0x00048d32) navi_navi_volume_pane_srt_g1

0x1884,	// (0x00048d3a) volume_small_pane_srt_ParamLimits

0x1884,	// (0x00048d3a) volume_small_pane_srt

0x1282,	// (0x00048738) volume_small_pane_srt_g1_ParamLimits

0x1282,	// (0x00048738) volume_small_pane_srt_g1

0x1292,	// (0x00048748) volume_small_pane_srt_g2_ParamLimits

0x1292,	// (0x00048748) volume_small_pane_srt_g2

0x12a3,	// (0x00048759) volume_small_pane_srt_g3_ParamLimits

0x12a3,	// (0x00048759) volume_small_pane_srt_g3

0x12b4,	// (0x0004876a) volume_small_pane_srt_g4_ParamLimits

0x12b4,	// (0x0004876a) volume_small_pane_srt_g4

0x12c5,	// (0x0004877b) volume_small_pane_srt_g5_ParamLimits

0x12c5,	// (0x0004877b) volume_small_pane_srt_g5

0x12d6,	// (0x0004878c) volume_small_pane_srt_g6_ParamLimits

0x12d6,	// (0x0004878c) volume_small_pane_srt_g6

0x12e7,	// (0x0004879d) volume_small_pane_srt_g7_ParamLimits

0x12e7,	// (0x0004879d) volume_small_pane_srt_g7

0x12f8,	// (0x000487ae) volume_small_pane_srt_g8_ParamLimits

0x12f8,	// (0x000487ae) volume_small_pane_srt_g8

0x1309,	// (0x000487bf) volume_small_pane_srt_g9_ParamLimits

0x1309,	// (0x000487bf) volume_small_pane_srt_g9

0x131a,	// (0x000487d0) volume_small_pane_srt_g10_ParamLimits

0x131a,	// (0x000487d0) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00056c30) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00056c30) volume_small_pane_srt_g

0x9258,	// (0x0005070e) query_popup_data_pane_cp2

0xd7a1,	// (0x00054c57) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd7a1,	// (0x00054c57) navi_navi_icon_text_pane_srt_t1

0xcbf5,	// (0x000540ab) navi_tabs_2_long_pane_srt

0xcbf5,	// (0x000540ab) navi_tabs_2_pane_srt

0xcbf5,	// (0x000540ab) navi_tabs_3_long_pane_srt

0xcbf5,	// (0x000540ab) navi_tabs_3_pane_srt

0xcbf5,	// (0x000540ab) navi_tabs_4_pane_srt

0x185c,	// (0x00048d12) tabs_2_active_pane_srt_ParamLimits

0x185c,	// (0x00048d12) tabs_2_active_pane_srt

0x186c,	// (0x00048d22) tabs_2_passive_pane_srt_ParamLimits

0x186c,	// (0x00048d22) tabs_2_passive_pane_srt

0xc510,	// (0x000539c6) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc510,	// (0x000539c6) bg_passive_tab_pane_cp1_srt

0xd77f,	// (0x00054c35) bg_passive_tab_pane_g1_cp1_srt

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp1_srt

0xd788,	// (0x00054c3e) bg_passive_tab_pane_g3_cp1_srt

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp1_srt_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp1_srt

0xd791,	// (0x00054c47) tabs_2_active_pane_srt_g1

0x9d0c,	// (0x000511c2) tabs_2_active_pane_srt_t1_ParamLimits

0x9d0c,	// (0x000511c2) tabs_2_active_pane_srt_t1

0xd77f,	// (0x00054c35) bg_active_tab_pane_g1_cp1_srt

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp1_srt

0xd788,	// (0x00054c3e) bg_active_tab_pane_g3_cp1_srt

0x1829,	// (0x00048cdf) tabs_3_active_pane_srt_ParamLimits

0x1829,	// (0x00048cdf) tabs_3_active_pane_srt

0x183a,	// (0x00048cf0) tabs_3_passive_pane_cp_srt_ParamLimits

0x183a,	// (0x00048cf0) tabs_3_passive_pane_cp_srt

0x184b,	// (0x00048d01) tabs_3_passive_pane_srt_ParamLimits

0x184b,	// (0x00048d01) tabs_3_passive_pane_srt

0xc510,	// (0x000539c6) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc510,	// (0x000539c6) bg_passive_tab_pane_cp2_srt

0xbf95,	// (0x0005344b) bg_passive_tab_pane_g1_cp2_srt

0xba4d,	// (0x00052f03) bg_passive_tab_pane_g2_cp2_srt

0xbf9e,	// (0x00053454) bg_passive_tab_pane_g3_cp2_srt

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp2_srt_ParamLimits

0x8b1a,	// (0x0004ffd0) bg_active_tab_pane_cp2_srt

0xd777,	// (0x00054c2d) tabs_3_active_pane_srt_g1

0x9cf6,	// (0x000511ac) tabs_3_active_pane_srt_t1_ParamLimits

0x9cf6,	// (0x000511ac) tabs_3_active_pane_srt_t1

0xbf95,	// (0x0005344b) bg_active_tab_pane_g1_cp2_srt

0xba4d,	// (0x00052f03) bg_active_tab_pane_g2_cp2_srt

0xbf9e,	// (0x00053454) bg_active_tab_pane_g3_cp2_srt

0x17e1,	// (0x00048c97) tabs_4_active_pane_srt_ParamLimits

0x17e1,	// (0x00048c97) tabs_4_active_pane_srt

0x17f3,	// (0x00048ca9) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17f3,	// (0x00048ca9) tabs_4_passive_pane_cp2_srt

0xc0c2,	// (0x00053578) aid_size_cell_toolbar

0xc32a,	// (0x000537e0) main_idle_act_pane_ParamLimits

0xc18a,	// (0x00053640) popup_large_graphic_colour_window_ParamLimits

0x9038,	// (0x000504ee) popup_toolbar_window_ParamLimits

0x9038,	// (0x000504ee) popup_toolbar_window

0xd69d,	// (0x00054b53) list_single_graphic_2heading_pane_ParamLimits

0xd69d,	// (0x00054b53) list_single_graphic_2heading_pane

0xb663,	// (0x00052b19) aid_size_cell_apps_grid_lsc_pane

0xb675,	// (0x00052b2b) aid_size_cell_apps_grid_prt_pane

0xafaf,	// (0x00052465) bg_wml_button_pane_cp1_ParamLimits

0xafaf,	// (0x00052465) bg_wml_button_pane_cp1

0x9851,	// (0x00050d07) form_midp_field_text_pane_t1_ParamLimits

0xc510,	// (0x000539c6) input_focus_pane_cp050_ParamLimits

0xc658,	// (0x00053b0e) list_midp_form_text_pane_ParamLimits

0xc635,	// (0x00053aeb) input_focus_pane_cp051_ParamLimits

0xc649,	// (0x00053aff) list_midp_choice_pane_ParamLimits

0x97ee,	// (0x00050ca4) list_single_2graphic_pane_cp3_ParamLimits

0x97ee,	// (0x00050ca4) list_single_2graphic_pane_cp3

0x9801,	// (0x00050cb7) list_single_midp_graphic_pane_ParamLimits

0x9801,	// (0x00050cb7) list_single_midp_graphic_pane

0x0286,	// (0x0004773c) list_single_graphic_2heading_pane_g1_ParamLimits

0x0286,	// (0x0004773c) list_single_graphic_2heading_pane_g1

0x0292,	// (0x00047748) list_single_graphic_2heading_pane_g4_ParamLimits

0x0292,	// (0x00047748) list_single_graphic_2heading_pane_g4

0x029e,	// (0x00047754) list_single_graphic_2heading_pane_g5_ParamLimits

0x029e,	// (0x00047754) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00056c83) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00056c83) list_single_graphic_2heading_pane_g

0x02aa,	// (0x00047760) list_single_graphic_2heading_pane_t1_ParamLimits

0x02aa,	// (0x00047760) list_single_graphic_2heading_pane_t1

0x02be,	// (0x00047774) list_single_graphic_2heading_pane_t2_ParamLimits

0x02be,	// (0x00047774) list_single_graphic_2heading_pane_t2

0x02da,	// (0x00047790) list_single_graphic_2heading_pane_t3_ParamLimits

0x02da,	// (0x00047790) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00056c8a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00056c8a) list_single_graphic_2heading_pane_t

0xc356,	// (0x0005380c) bg_popup_sub_pane_cp2

0xc380,	// (0x00053836) grid_toobar_pane

0x1471,	// (0x00048927) cell_toolbar_pane_ParamLimits

0x1471,	// (0x00048927) cell_toolbar_pane

0xc3bc,	// (0x00053872) cell_toolbar_pane_g1_ParamLimits

0xc3bc,	// (0x00053872) cell_toolbar_pane_g1

0xc3d0,	// (0x00053886) cell_toolbar_pane_g2_ParamLimits

0xc3d0,	// (0x00053886) cell_toolbar_pane_g2

0x0001,

0xf7db,	// (0x00056c91) cell_toolbar_pane_g_ParamLimits

0xf7db,	// (0x00056c91) cell_toolbar_pane_g

0xc3f2,	// (0x000538a8) grid_highlight_pane_cp2_ParamLimits

0xc3f2,	// (0x000538a8) grid_highlight_pane_cp2

0xc40c,	// (0x000538c2) toolbar_button_pane

0xc418,	// (0x000538ce) toolbar_button_pane_g1

0xc420,	// (0x000538d6) toolbar_button_pane_g2

0xc428,	// (0x000538de) toolbar_button_pane_g3

0xc430,	// (0x000538e6) toolbar_button_pane_g4

0xc438,	// (0x000538ee) toolbar_button_pane_g5

0xc440,	// (0x000538f6) toolbar_button_pane_g6

0xc448,	// (0x000538fe) toolbar_button_pane_g7

0xc450,	// (0x00053906) toolbar_button_pane_g8

0xc458,	// (0x0005390e) toolbar_button_pane_g9

0x0009,

0xf7e0,	// (0x00056c96) toolbar_button_pane_g

0x14a9,	// (0x0004895f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14a9,	// (0x0004895f) list_single_2graphic_pane_g1_cp3

0x77fe,	// (0x0004ecb4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x77fe,	// (0x0004ecb4) list_single_2graphic_pane_g2_cp3

0x14c6,	// (0x0004897c) list_single_2graphic_pane_g3_cp3

0x14ce,	// (0x00048984) list_single_2graphic_pane_g4_cp3_ParamLimits

0x14ce,	// (0x00048984) list_single_2graphic_pane_g4_cp3

0x14da,	// (0x00048990) list_single_2graphic_pane_t1_cp3_ParamLimits

0x14da,	// (0x00048990) list_single_2graphic_pane_t1_cp3

0x14f6,	// (0x000489ac) list_single_midp_graphic_pane_g2_ParamLimits

0x14f6,	// (0x000489ac) list_single_midp_graphic_pane_g2

0x2cdc,	// (0x0004a192) aid_zoom_text_primary

0x2ce4,	// (0x0004a19a) aid_zoom_text_secondary

0xc052,	// (0x00053508) status_small_pane_g7_ParamLimits

0xc052,	// (0x00053508) status_small_pane_g7

0xc075,	// (0x0005352b) status_small_pane_t1_ParamLimits

0x7fa6,	// (0x0004f45c) title_pane_g2

0x0003,

0xf566,	// (0x00056a1c) title_pane_g

0x822e,	// (0x0004f6e4) aid_size_cell_colour_1_pane_ParamLimits

0x822e,	// (0x0004f6e4) aid_size_cell_colour_1_pane

0x8242,	// (0x0004f6f8) aid_size_cell_colour_2_pane_ParamLimits

0x8242,	// (0x0004f6f8) aid_size_cell_colour_2_pane

0x8256,	// (0x0004f70c) aid_size_cell_colour_3_pane_ParamLimits

0x8256,	// (0x0004f70c) aid_size_cell_colour_3_pane

0x826a,	// (0x0004f720) aid_size_cell_colour_4_pane_ParamLimits

0x826a,	// (0x0004f720) aid_size_cell_colour_4_pane

0x0ed2,	// (0x00048388) title_pane_stacon_g1_ParamLimits

0x0ed2,	// (0x00048388) title_pane_stacon_g1

0xca0a,	// (0x00053ec0) popup_note_wait_window_g3_ParamLimits

0xca0a,	// (0x00053ec0) popup_note_wait_window_g3

0xca8c,	// (0x00053f42) popup_note_wait_window_t5_ParamLimits

0xca8c,	// (0x00053f42) popup_note_wait_window_t5

0x8acc,	// (0x0004ff82) main_feb_china_hwr_fs_writing_pane

0x874a,	// (0x0004fc00) popup_feb_china_hwr_fs_window_ParamLimits

0x874a,	// (0x0004fc00) popup_feb_china_hwr_fs_window

0x780f,	// (0x0004ecc5) aid_size_cell_hwr_fs_ParamLimits

0x780f,	// (0x0004ecc5) aid_size_cell_hwr_fs

0xc510,	// (0x000539c6) bg_popup_sub_pane_cp3_ParamLimits

0xc510,	// (0x000539c6) bg_popup_sub_pane_cp3

0x7824,	// (0x0004ecda) grid_hwr_fs_pane_ParamLimits

0x7824,	// (0x0004ecda) grid_hwr_fs_pane

0x1545,	// (0x000489fb) linegrid_hwr_fs_pane_ParamLimits

0x1545,	// (0x000489fb) linegrid_hwr_fs_pane

0x783c,	// (0x0004ecf2) cell_hwr_fs_pane_ParamLimits

0x783c,	// (0x0004ecf2) cell_hwr_fs_pane

0xc51c,	// (0x000539d2) linegrid_hwr_fs_pane_g1_ParamLimits

0xc51c,	// (0x000539d2) linegrid_hwr_fs_pane_g1

0x97c2,	// (0x00050c78) linegrid_hwr_fs_pane_g2_ParamLimits

0x97c2,	// (0x00050c78) linegrid_hwr_fs_pane_g2

0xc528,	// (0x000539de) linegrid_hwr_fs_pane_g3_ParamLimits

0xc528,	// (0x000539de) linegrid_hwr_fs_pane_g3

0x1577,	// (0x00048a2d) linegrid_hwr_fs_pane_g4_ParamLimits

0x1577,	// (0x00048a2d) linegrid_hwr_fs_pane_g4

0x1591,	// (0x00048a47) linegrid_hwr_fs_pane_g5_ParamLimits

0x1591,	// (0x00048a47) linegrid_hwr_fs_pane_g5

0x0004,

0xf806,	// (0x00056cbc) linegrid_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00056cbc) linegrid_hwr_fs_pane_g

0xc534,	// (0x000539ea) cell_hwr_fs_pane_g1_ParamLimits

0xc534,	// (0x000539ea) cell_hwr_fs_pane_g1

0xc304,	// (0x000537ba) cell_hwr_fs_pane_g2_ParamLimits

0xc304,	// (0x000537ba) cell_hwr_fs_pane_g2

0x97d4,	// (0x00050c8a) cell_hwr_fs_pane_g3_ParamLimits

0x97d4,	// (0x00050c8a) cell_hwr_fs_pane_g3

0x97e1,	// (0x00050c97) cell_hwr_fs_pane_g4_ParamLimits

0x97e1,	// (0x00050c97) cell_hwr_fs_pane_g4

0x0003,

0xf811,	// (0x00056cc7) cell_hwr_fs_pane_g_ParamLimits

0xf811,	// (0x00056cc7) cell_hwr_fs_pane_g

0x7862,	// (0x0004ed18) cell_hwr_fs_pane_t1

0x8acc,	// (0x0004ff82) grid_highlight_pane_cp6

0x8acc,	// (0x0004ff82) main_idle_act2_pane

0xaf5d,	// (0x00052413) aid_inside_area_popup_secondary

0x99c8,	// (0x00050e7e) aid_inside_area_window_primary_ParamLimits

0x99c8,	// (0x00050e7e) aid_inside_area_window_primary

0xd8ba,	// (0x00054d70) ai2_news_ticker_pane

0xd8c2,	// (0x00054d78) aid_size_cell_ai1_link_ParamLimits

0xd8c2,	// (0x00054d78) aid_size_cell_ai1_link

0x9d22,	// (0x000511d8) popup_ai2_data_window_ParamLimits

0x9d22,	// (0x000511d8) popup_ai2_data_window

0xd8dc,	// (0x00054d92) popup_ai2_link_window_ParamLimits

0xd8dc,	// (0x00054d92) popup_ai2_link_window

0xc510,	// (0x000539c6) bg_popup_sub_pane_cp4_ParamLimits

0xc510,	// (0x000539c6) bg_popup_sub_pane_cp4

0xd8f0,	// (0x00054da6) grid_ai2_link_pane_ParamLimits

0xd8f0,	// (0x00054da6) grid_ai2_link_pane

0xd907,	// (0x00054dbd) popup_ai2_link_window_g1_ParamLimits

0xd907,	// (0x00054dbd) popup_ai2_link_window_g1

0xd913,	// (0x00054dc9) popup_ai2_link_window_g2_ParamLimits

0xd913,	// (0x00054dc9) popup_ai2_link_window_g2

0x0001,

0xf9dd,	// (0x00056e93) popup_ai2_link_window_g_ParamLimits

0xf9dd,	// (0x00056e93) popup_ai2_link_window_g

0xd922,	// (0x00054dd8) ai2_mp_button_pane

0xd92a,	// (0x00054de0) ai2_mp_volume_pane

0xc635,	// (0x00053aeb) bg_popup_sub_pane_cp5_ParamLimits

0xc635,	// (0x00053aeb) bg_popup_sub_pane_cp5

0xd932,	// (0x00054de8) heading_ai2_gene_pane_ParamLimits

0xd932,	// (0x00054de8) heading_ai2_gene_pane

0xd93e,	// (0x00054df4) list_ai2_gene_pane_ParamLimits

0xd93e,	// (0x00054df4) list_ai2_gene_pane

0xd986,	// (0x00054e3c) cell_ai2_link_pane_ParamLimits

0xd986,	// (0x00054e3c) cell_ai2_link_pane

0xd99c,	// (0x00054e52) cell_ai2_link_pane_g1

0x8acc,	// (0x0004ff82) grid_highlight_pane_cp7

0x1899,	// (0x00048d4f) ai2_mp_volume_pane_g1

0xda39,	// (0x00054eef) ai2_mp_volume_pane_g2

0x9d4c,	// (0x00051202) list_ai2_gene_pane_t1

0xda41,	// (0x00054ef7) ai2_mp_volume_pane_g3

0x0002,

0xf9f6,	// (0x00056eac) ai2_mp_volume_pane_g

0x18a1,	// (0x00048d57) volume_small_pane_cp3

0xda49,	// (0x00054eff) aid_size_cell_ai2_button

0xda51,	// (0x00054f07) grid_ai2_button_pane

0xda5a,	// (0x00054f10) cell_ai2_button_pane_ParamLimits

0xda5a,	// (0x00054f10) cell_ai2_button_pane

0x8ac2,	// (0x0004ff78) cell_ai2_button_pane_g1

0x8acc,	// (0x0004ff82) grid_highlight_pane_cp8

0xd9f9,	// (0x00054eaf) ai2_gene_pane_t1_ParamLimits

0xd9f9,	// (0x00054eaf) ai2_gene_pane_t1

0x86b2,	// (0x0004fb68) aid_height_parent_landscape

0x9ad1,	// (0x00050f87) aid_height_set_list

0xc32a,	// (0x000537e0) aid_size_parent

0xd725,	// (0x00054bdb) aid_size_cell_graphic_pane_ParamLimits

0xd94e,	// (0x00054e04) popup_ai2_data_window_g1_ParamLimits

0xd94e,	// (0x00054e04) popup_ai2_data_window_g1

0xd95a,	// (0x00054e10) ai2_news_ticker_pane_g1

0xd962,	// (0x00054e18) ai2_news_ticker_pane_g2

0x0001,

0xf9e2,	// (0x00056e98) ai2_news_ticker_pane_g

0xd96a,	// (0x00054e20) ai2_news_ticker_pane_t1

0xd978,	// (0x00054e2e) ai2_news_ticker_pane_t2

0x0001,

0xf9e7,	// (0x00056e9d) ai2_news_ticker_pane_t

0xd9a5,	// (0x00054e5b) heading_ai2_gene_pane_g1

0xd9ad,	// (0x00054e63) heading_ai2_gene_pane_t1_ParamLimits

0xd9ad,	// (0x00054e63) heading_ai2_gene_pane_t1

0xd9c2,	// (0x00054e78) list_highlight_pane_cp6

0x9d36,	// (0x000511ec) ai2_gene_pane_ParamLimits

0x9d36,	// (0x000511ec) ai2_gene_pane

0x9d5a,	// (0x00051210) list_ai2_gene_pane_t2

0x0001,

0xf9ec,	// (0x00056ea2) list_ai2_gene_pane_t

0xd9ca,	// (0x00054e80) list_highlight_pane_cp8_ParamLimits

0xd9ca,	// (0x00054e80) list_highlight_pane_cp8

0xd9db,	// (0x00054e91) ai2_gene_pane_g1_ParamLimits

0xd9db,	// (0x00054e91) ai2_gene_pane_g1

0xd9ed,	// (0x00054ea3) ai2_gene_pane_g2_ParamLimits

0xd9ed,	// (0x00054ea3) ai2_gene_pane_g2

0x0001,

0xf9f1,	// (0x00056ea7) ai2_gene_pane_g_ParamLimits

0xf9f1,	// (0x00056ea7) ai2_gene_pane_g

0x99a1,	// (0x00050e57) scroll_pane_cp12

0x77bd,	// (0x0004ec73) control_pane_t3_ParamLimits

0x77bd,	// (0x0004ec73) control_pane_t3

0xc066,	// (0x0005351c) status_small_pane_g8_ParamLimits

0xc066,	// (0x0005351c) status_small_pane_g8

0x87df,	// (0x0004fc95) popup_find_window_ParamLimits

0x8d6e,	// (0x00050224) popup_note_image_window_ParamLimits

0x2d10,	// (0x0004a1c6) list_double2_graphic_pane_vc_g1_ParamLimits

0x2d10,	// (0x0004a1c6) list_double2_graphic_pane_vc_g1

0xc31e,	// (0x000537d4) list_double2_graphic_pane_vc_g2_ParamLimits

0xc31e,	// (0x000537d4) list_double2_graphic_pane_vc_g2

0x2d1c,	// (0x0004a1d2) list_double2_graphic_pane_vc_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double2_graphic_pane_vc_g3

0x0002,

0xf632,	// (0x00056ae8) list_double2_graphic_pane_vc_g_ParamLimits

0xf632,	// (0x00056ae8) list_double2_graphic_pane_vc_g

0x2d28,	// (0x0004a1de) list_double2_graphic_pane_vc_t1_ParamLimits

0x2d28,	// (0x0004a1de) list_double2_graphic_pane_vc_t1

0xc31e,	// (0x000537d4) list_single_heading_pane_vc_g1_ParamLimits

0xc31e,	// (0x000537d4) list_single_heading_pane_vc_g1

0x2d1c,	// (0x0004a1d2) list_single_heading_pane_vc_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_single_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_single_heading_pane_vc_g

0x2d3e,	// (0x0004a1f4) list_single_heading_pane_vc_t1_ParamLimits

0x2d3e,	// (0x0004a1f4) list_single_heading_pane_vc_t1

0x2d56,	// (0x0004a20c) list_single_heading_pane_vc_t2_ParamLimits

0x2d56,	// (0x0004a20c) list_single_heading_pane_vc_t2

0x0001,

0xf7f5,	// (0x00056cab) list_single_heading_pane_vc_t_ParamLimits

0xf7f5,	// (0x00056cab) list_single_heading_pane_vc_t

0xc460,	// (0x00053916) list_setting_number_pane_vc_g1_ParamLimits

0xc460,	// (0x00053916) list_setting_number_pane_vc_g1

0xc46c,	// (0x00053922) list_setting_number_pane_vc_g2_ParamLimits

0xc46c,	// (0x00053922) list_setting_number_pane_vc_g2

0x0001,

0xf7fa,	// (0x00056cb0) list_setting_number_pane_vc_g_ParamLimits

0xf7fa,	// (0x00056cb0) list_setting_number_pane_vc_g

0xc478,	// (0x0005392e) list_setting_number_pane_vc_t1_ParamLimits

0xc478,	// (0x0005392e) list_setting_number_pane_vc_t1

0xc48c,	// (0x00053942) list_setting_number_pane_vc_t2_ParamLimits

0xc48c,	// (0x00053942) list_setting_number_pane_vc_t2

0xc4a8,	// (0x0005395e) list_setting_number_pane_vc_t3_ParamLimits

0xc4a8,	// (0x0005395e) list_setting_number_pane_vc_t3

0x0002,

0xf7ff,	// (0x00056cb5) list_setting_number_pane_vc_t_ParamLimits

0xf7ff,	// (0x00056cb5) list_setting_number_pane_vc_t

0xc4d4,	// (0x0005398a) set_value_pane_vc_ParamLimits

0xc4d4,	// (0x0005398a) set_value_pane_vc

0xd69d,	// (0x00054b53) list_double2_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double2_graphic_pane_vc

0x2e2a,	// (0x0004a2e0) list_double2_large_graphic_pane_vc_ParamLimits

0x2e2a,	// (0x0004a2e0) list_double2_large_graphic_pane_vc

0xd69d,	// (0x00054b53) list_double2_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double2_pane_vc

0xd69d,	// (0x00054b53) list_double_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double_graphic_heading_pane_vc

0xd69d,	// (0x00054b53) list_double_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double_graphic_pane_vc

0xd69d,	// (0x00054b53) list_double_heading_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double_heading_pane_vc

0x2e2a,	// (0x0004a2e0) list_double_large_graphic_pane_vc_ParamLimits

0x2e2a,	// (0x0004a2e0) list_double_large_graphic_pane_vc

0xd69d,	// (0x00054b53) list_double_number_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double_number_pane_vc

0xd69d,	// (0x00054b53) list_double_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double_pane_vc

0xd69d,	// (0x00054b53) list_double_time_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_double_time_pane_vc

0xd69d,	// (0x00054b53) list_setting_number_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_setting_number_pane_vc

0xd69d,	// (0x00054b53) list_setting_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_setting_pane_vc

0xd69d,	// (0x00054b53) list_single_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_single_graphic_heading_pane_vc

0xd69d,	// (0x00054b53) list_single_heading_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_single_heading_pane_vc

0xd69d,	// (0x00054b53) list_single_number_heading_pane_vc_ParamLimits

0xd69d,	// (0x00054b53) list_single_number_heading_pane_vc

0x2d10,	// (0x0004a1c6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2d10,	// (0x0004a1c6) list_double_graphic_heading_pane_vc_g1

0xc31e,	// (0x000537d4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc31e,	// (0x000537d4) list_double_graphic_heading_pane_vc_g2

0x2d1c,	// (0x0004a1d2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf632,	// (0x00056ae8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf632,	// (0x00056ae8) list_double_graphic_heading_pane_vc_g

0x2ee9,	// (0x0004a39f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ee9,	// (0x0004a39f) list_double_graphic_heading_pane_vc_t1

0x2d3e,	// (0x0004a1f4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2d3e,	// (0x0004a1f4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fd,	// (0x00056eb3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00056eb3) list_double_graphic_heading_pane_vc_t

0xc460,	// (0x00053916) list_setting_pane_vc_g1_ParamLimits

0xc460,	// (0x00053916) list_setting_pane_vc_g1

0xc46c,	// (0x00053922) list_setting_pane_vc_g2_ParamLimits

0xc46c,	// (0x00053922) list_setting_pane_vc_g2

0x0001,

0xf7fa,	// (0x00056cb0) list_setting_pane_vc_g_ParamLimits

0xf7fa,	// (0x00056cb0) list_setting_pane_vc_g

0xdc70,	// (0x00055126) list_setting_pane_vc_t1_ParamLimits

0xdc70,	// (0x00055126) list_setting_pane_vc_t1

0xdc8c,	// (0x00055142) list_setting_pane_vc_t2_ParamLimits

0xdc8c,	// (0x00055142) list_setting_pane_vc_t2

0x0001,

0xfa40,	// (0x00056ef6) list_setting_pane_vc_t_ParamLimits

0xfa40,	// (0x00056ef6) list_setting_pane_vc_t

0xc4d4,	// (0x0005398a) set_value_pane_cp_vc_ParamLimits

0xc4d4,	// (0x0005398a) set_value_pane_cp_vc

0xc31e,	// (0x000537d4) list_single_number_heading_pane_vc_g1_ParamLimits

0xc31e,	// (0x000537d4) list_single_number_heading_pane_vc_g1

0x2d1c,	// (0x0004a1d2) list_single_number_heading_pane_vc_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_single_number_heading_pane_vc_g

0x2d3e,	// (0x0004a1f4) list_single_number_heading_pane_vc_t1_ParamLimits

0x2d3e,	// (0x0004a1f4) list_single_number_heading_pane_vc_t1

0x2efd,	// (0x0004a3b3) list_single_number_heading_pane_vc_t2_ParamLimits

0x2efd,	// (0x0004a3b3) list_single_number_heading_pane_vc_t2

0x2f11,	// (0x0004a3c7) list_single_number_heading_pane_vc_t3_ParamLimits

0x2f11,	// (0x0004a3c7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa45,	// (0x00056efb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00056efb) list_single_number_heading_pane_vc_t

0x2d10,	// (0x0004a1c6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2d10,	// (0x0004a1c6) list_single_graphic_heading_pane_vc_g1

0xc31e,	// (0x000537d4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc31e,	// (0x000537d4) list_single_graphic_heading_pane_vc_g4

0x2d1c,	// (0x0004a1d2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2d1c,	// (0x0004a1d2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf632,	// (0x00056ae8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf632,	// (0x00056ae8) list_single_graphic_heading_pane_vc_g

0x2d3e,	// (0x0004a1f4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2d3e,	// (0x0004a1f4) list_single_graphic_heading_pane_vc_t1

0x2f23,	// (0x0004a3d9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2f23,	// (0x0004a3d9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00056f02) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00056f02) list_single_graphic_heading_pane_vc_t

0xc31e,	// (0x000537d4) list_double2_pane_vc_g1_ParamLimits

0xc31e,	// (0x000537d4) list_double2_pane_vc_g1

0x2d1c,	// (0x0004a1d2) list_double2_pane_vc_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double2_pane_vc_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_double2_pane_vc_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_double2_pane_vc_g

0x2f37,	// (0x0004a3ed) list_double2_pane_vc_t1_ParamLimits

0x2f37,	// (0x0004a3ed) list_double2_pane_vc_t1

0x2f4d,	// (0x0004a403) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2f4d,	// (0x0004a403) list_double2_large_graphic_pane_vc_g1

0x2f59,	// (0x0004a40f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2f59,	// (0x0004a40f) list_double2_large_graphic_pane_vc_g2

0x2f65,	// (0x0004a41b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2f65,	// (0x0004a41b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf602,	// (0x00056ab8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf602,	// (0x00056ab8) list_double2_large_graphic_pane_vc_g

0x2f71,	// (0x0004a427) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2f71,	// (0x0004a427) list_double2_large_graphic_pane_vc_t1

0x2f87,	// (0x0004a43d) list_double_time_pane_vc_g1_ParamLimits

0x2f87,	// (0x0004a43d) list_double_time_pane_vc_g1

0x2f93,	// (0x0004a449) list_double_time_pane_vc_g2_ParamLimits

0x2f93,	// (0x0004a449) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x00056f07) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x00056f07) list_double_time_pane_vc_g

0x2f9f,	// (0x0004a455) list_double_time_pane_vc_t1_ParamLimits

0x2f9f,	// (0x0004a455) list_double_time_pane_vc_t1

0x2fba,	// (0x0004a470) list_double_time_pane_vc_t2_ParamLimits

0x2fba,	// (0x0004a470) list_double_time_pane_vc_t2

0x2ffa,	// (0x0004a4b0) list_double_time_pane_vc_t3_ParamLimits

0x2ffa,	// (0x0004a4b0) list_double_time_pane_vc_t3

0x3012,	// (0x0004a4c8) list_double_time_pane_vc_t4_ParamLimits

0x3012,	// (0x0004a4c8) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x00056f0c) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x00056f0c) list_double_time_pane_vc_t

0xc31e,	// (0x000537d4) list_double_pane_vc_g1_ParamLimits

0xc31e,	// (0x000537d4) list_double_pane_vc_g1

0x2d1c,	// (0x0004a1d2) list_double_pane_vc_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double_pane_vc_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_double_pane_vc_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_double_pane_vc_g

0x3026,	// (0x0004a4dc) list_double_pane_vc_t1_ParamLimits

0x3026,	// (0x0004a4dc) list_double_pane_vc_t1

0x303a,	// (0x0004a4f0) list_double_pane_vc_t2_ParamLimits

0x303a,	// (0x0004a4f0) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x00056f15) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x00056f15) list_double_pane_vc_t

0xc31e,	// (0x000537d4) list_double_number_pane_vc_g1_ParamLimits

0xc31e,	// (0x000537d4) list_double_number_pane_vc_g1

0x2d1c,	// (0x0004a1d2) list_double_number_pane_vc_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double_number_pane_vc_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_double_number_pane_vc_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_double_number_pane_vc_g

0x3052,	// (0x0004a508) list_double_number_pane_vc_t1_ParamLimits

0x3052,	// (0x0004a508) list_double_number_pane_vc_t1

0x3066,	// (0x0004a51c) list_double_number_pane_vc_t2_ParamLimits

0x3066,	// (0x0004a51c) list_double_number_pane_vc_t2

0x303a,	// (0x0004a4f0) list_double_number_pane_vc_t3_ParamLimits

0x303a,	// (0x0004a4f0) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x00056f1a) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x00056f1a) list_double_number_pane_vc_t

0x307a,	// (0x0004a530) list_double_large_graphic_pane_vc_g1_ParamLimits

0x307a,	// (0x0004a530) list_double_large_graphic_pane_vc_g1

0x3086,	// (0x0004a53c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3086,	// (0x0004a53c) list_double_large_graphic_pane_vc_g2

0x2f65,	// (0x0004a41b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2f65,	// (0x0004a41b) list_double_large_graphic_pane_vc_g3

0x3095,	// (0x0004a54b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3095,	// (0x0004a54b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x00056f21) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00056f21) list_double_large_graphic_pane_vc_g

0x30a1,	// (0x0004a557) list_double_large_graphic_pane_vc_t1_ParamLimits

0x30a1,	// (0x0004a557) list_double_large_graphic_pane_vc_t1

0x30b5,	// (0x0004a56b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x30b5,	// (0x0004a56b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00056f2a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00056f2a) list_double_large_graphic_pane_vc_t

0xc31e,	// (0x000537d4) list_double_heading_pane_vc_g1_ParamLimits

0xc31e,	// (0x000537d4) list_double_heading_pane_vc_g1

0x2d1c,	// (0x0004a1d2) list_double_heading_pane_vc_g2_ParamLimits

0x2d1c,	// (0x0004a1d2) list_double_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00056aa0) list_double_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00056aa0) list_double_heading_pane_vc_g

0x30ce,	// (0x0004a584) list_double_heading_pane_vc_t1_ParamLimits

0x30ce,	// (0x0004a584) list_double_heading_pane_vc_t1

0x2d3e,	// (0x0004a1f4) list_double_heading_pane_vc_t2_ParamLimits

0x2d3e,	// (0x0004a1f4) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x00056f2f) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x00056f2f) list_double_heading_pane_vc_t

0x2d10,	// (0x0004a1c6) list_double_graphic_pane_vc_g1_ParamLimits

0x2d10,	// (0x0004a1c6) list_double_graphic_pane_vc_g1

0x30e2,	// (0x0004a598) list_double_graphic_pane_vc_g2_ParamLimits

0x30e2,	// (0x0004a598) list_double_graphic_pane_vc_g2

0x30f1,	// (0x0004a5a7) list_double_graphic_pane_vc_g3_ParamLimits

0x30f1,	// (0x0004a5a7) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x00056f34) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x00056f34) list_double_graphic_pane_vc_g

0x30fd,	// (0x0004a5b3) list_double_graphic_pane_vc_t1_ParamLimits

0x30fd,	// (0x0004a5b3) list_double_graphic_pane_vc_t1

0x303a,	// (0x0004a4f0) list_double_graphic_pane_vc_t2_ParamLimits

0x303a,	// (0x0004a4f0) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x00056f3b) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x00056f3b) list_double_graphic_pane_vc_t

0x030a,	// (0x000477c0) aid_size_cell_fastswap

0x6ee0,	// (0x0004e396) aid_size_cell_touch_ParamLimits

0x6ee0,	// (0x0004e396) aid_size_cell_touch

0x0577,	// (0x00047a2d) popup_fast_swap_wide_window_ParamLimits

0x0577,	// (0x00047a2d) popup_fast_swap_wide_window

0x702b,	// (0x0004e4e1) touch_pane_ParamLimits

0x702b,	// (0x0004e4e1) touch_pane

0xae43,	// (0x000522f9) button_value_adjust_pane_cp2

0x0c3c,	// (0x000480f2) button_value_adjust_pane_cp4

0x0c60,	// (0x00048116) form_field_data_pane_cp2

0x74bb,	// (0x0004e971) form_field_data_wide_pane_cp2

0xb69a,	// (0x00052b50) bg_scroll_pane_ParamLimits

0x1035,	// (0x000484eb) scroll_handle_pane_ParamLimits

0x1049,	// (0x000484ff) scroll_sc2_down_pane_ParamLimits

0x1049,	// (0x000484ff) scroll_sc2_down_pane

0xb6cb,	// (0x00052b81) scroll_sc2_up_pane_ParamLimits

0xb6cb,	// (0x00052b81) scroll_sc2_up_pane

0x9e84,	// (0x0005133a) grid_wheel_folder_pane_g1_ParamLimits

0x9e84,	// (0x0005133a) grid_wheel_folder_pane_g1

0x121a,	// (0x000486d0) clock_nsta_pane_cp2_ParamLimits

0x121a,	// (0x000486d0) clock_nsta_pane_cp2

0xafaf,	// (0x00052465) listscroll_midp_pane_ParamLimits

0x85ea,	// (0x0004faa0) midp_canvas_pane

0xc0ba,	// (0x00053570) nsta_clock_indic_pane

0xc0ea,	// (0x000535a0) listscroll_form_pane_vc

0xc0f2,	// (0x000535a8) listscroll_set_pane_vc_ParamLimits

0xc0f2,	// (0x000535a8) listscroll_set_pane_vc

0x94d3,	// (0x00050989) clock_nsta_pane

0x94fd,	// (0x000509b3) indicator_nsta_pane

0xc356,	// (0x0005380c) bg_popup_sub_pane_cp2_ParamLimits

0xc36a,	// (0x00053820) find_pane_cp2_ParamLimits

0xc36a,	// (0x00053820) find_pane_cp2

0xc380,	// (0x00053836) grid_toobar_pane_ParamLimits

0xc4e4,	// (0x0005399a) list_form_gen_pane_vc_ParamLimits

0xc4e4,	// (0x0005399a) list_form_gen_pane_vc

0xc4fa,	// (0x000539b0) scroll_pane_cp8_vc_ParamLimits

0xc4fa,	// (0x000539b0) scroll_pane_cp8_vc

0xc54a,	// (0x00053a00) data_form_wide_pane_vc_ParamLimits

0xc54a,	// (0x00053a00) data_form_wide_pane_vc

0xc556,	// (0x00053a0c) form_field_data_wide_pane_vc_g1

0xc55e,	// (0x00053a14) form_field_data_wide_pane_vc_t1_ParamLimits

0xc55e,	// (0x00053a14) form_field_data_wide_pane_vc_t1

0xae57,	// (0x0005230d) input_focus_pane_cp6_vc_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_cp6_vc

0x9873,	// (0x00050d29) list_midp_pane_ParamLimits

0xc791,	// (0x00053c47) scroll_pane_cp16_ParamLimits

0xc791,	// (0x00053c47) scroll_pane_cp16

0xc7df,	// (0x00053c95) button_value_adjust_pane_ParamLimits

0xc7df,	// (0x00053c95) button_value_adjust_pane

0x9ae2,	// (0x00050f98) button_value_adjust_pane_cp6_ParamLimits

0x9ae2,	// (0x00050f98) button_value_adjust_pane_cp6

0x9bfc,	// (0x000510b2) settings_code_pane_cp_ParamLimits

0x9bfc,	// (0x000510b2) settings_code_pane_cp

0x8ac2,	// (0x0004ff78) cell_touch_pane_g1

0x8ac2,	// (0x0004ff78) cell_touch_pane_g2

0x0001,

0xf720,	// (0x00056bd6) cell_touch_pane_g

0x9d68,	// (0x0005121e) cell_touch_pane_cp_ParamLimits

0x9d68,	// (0x0005121e) cell_touch_pane_cp

0x9d84,	// (0x0005123a) cell_touch_pane_ParamLimits

0x9d84,	// (0x0005123a) cell_touch_pane

0x8ac2,	// (0x0004ff78) scroll_sc2_down_pane_g1

0x8ac2,	// (0x0004ff78) scroll_sc2_up_pane_g1

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp4_vc

0xda6c,	// (0x00054f22) list_set_graphic_pane_vc_g1_ParamLimits

0xda6c,	// (0x00054f22) list_set_graphic_pane_vc_g1

0xda78,	// (0x00054f2e) list_set_graphic_pane_vc_g2_ParamLimits

0xda78,	// (0x00054f2e) list_set_graphic_pane_vc_g2

0x0001,

0xfa02,	// (0x00056eb8) list_set_graphic_pane_vc_g_ParamLimits

0xfa02,	// (0x00056eb8) list_set_graphic_pane_vc_g

0xda84,	// (0x00054f3a) text_primary_small_cp13_vc_ParamLimits

0xda84,	// (0x00054f3a) text_primary_small_cp13_vc

0xda9c,	// (0x00054f52) list_set_graphic_pane_vc_ParamLimits

0xda9c,	// (0x00054f52) list_set_graphic_pane_vc

0x8acc,	// (0x0004ff82) input_focus_pane_cp2_vc

0x8ac2,	// (0x0004ff78) setting_code_pane_vc_g1

0xdab0,	// (0x00054f66) setting_code_pane_vc_t1

0xdabe,	// (0x00054f74) set_text_pane_vc_t1_ParamLimits

0xdabe,	// (0x00054f74) set_text_pane_vc_t1

0x8acc,	// (0x0004ff82) input_focus_pane_cp1_vc

0xdad9,	// (0x00054f8f) list_set_text_pane_vc

0x8ac2,	// (0x0004ff78) setting_text_pane_vc_g1

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp2_vc

0xdae3,	// (0x00054f99) setting_slider_graphic_pane_vc_g1

0xdaeb,	// (0x00054fa1) setting_slider_graphic_pane_vc_t1

0xdaf9,	// (0x00054faf) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa07,	// (0x00056ebd) setting_slider_graphic_pane_vc_t

0xdb07,	// (0x00054fbd) slider_set_pane_cp_vc

0xdb0f,	// (0x00054fc5) slider_set_pane_vc_g1

0xdb18,	// (0x00054fce) slider_set_pane_vc_g2

0x0006,

0xfa0c,	// (0x00056ec2) slider_set_pane_vc_g

0xaebe,	// (0x00052374) set_opt_bg_pane_g1_copy1

0xaec6,	// (0x0005237c) set_opt_bg_pane_g2_copy1

0xdb44,	// (0x00054ffa) set_opt_bg_pane_g3_copy1

0xaed6,	// (0x0005238c) set_opt_bg_pane_g4_copy1

0xaede,	// (0x00052394) set_opt_bg_pane_g5_copy1

0xaee6,	// (0x0005239c) set_opt_bg_pane_g6_copy1

0xdb4e,	// (0x00055004) set_opt_bg_pane_g7_copy1

0xdb56,	// (0x0005500c) set_opt_bg_pane_g8_copy1

0xdb60,	// (0x00055016) set_opt_bg_pane_g9_copy1

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp_vc

0xdb6a,	// (0x00055020) setting_slider_pane_vc_t1

0xdaeb,	// (0x00054fa1) setting_slider_pane_vc_t2

0xdaf9,	// (0x00054faf) setting_slider_pane_vc_t3

0x0002,

0xfa1b,	// (0x00056ed1) setting_slider_pane_vc_t

0xdb07,	// (0x00054fbd) slider_set_pane_vc

0x15b5,	// (0x00048a6b) volume_set_pane_vc_g1

0x15be,	// (0x00048a74) volume_set_pane_vc_g2

0x15c7,	// (0x00048a7d) volume_set_pane_vc_g3

0x15d0,	// (0x00048a86) volume_set_pane_vc_g4

0x15d9,	// (0x00048a8f) volume_set_pane_vc_g5

0x15e2,	// (0x00048a98) volume_set_pane_vc_g6

0x15eb,	// (0x00048aa1) volume_set_pane_vc_g7

0x15f4,	// (0x00048aaa) volume_set_pane_vc_g8

0x15fd,	// (0x00048ab3) volume_set_pane_vc_g9

0x1606,	// (0x00048abc) volume_set_pane_vc_g10

0x0009,

0xfa22,	// (0x00056ed8) volume_set_pane_vc_g

0xdb79,	// (0x0005502f) volume_set_pane_vc

0xdb81,	// (0x00055037) button_value_adjust_pane_cp1_vc

0xdb8b,	// (0x00055041) list_highlight_pane_cp2_vc

0xdb94,	// (0x0005504a) list_set_pane_vc_ParamLimits

0xdb94,	// (0x0005504a) list_set_pane_vc

0xdbfe,	// (0x000550b4) main_pane_set_vc_t1_ParamLimits

0xdbfe,	// (0x000550b4) main_pane_set_vc_t1

0xdc13,	// (0x000550c9) main_pane_set_vc_t2_ParamLimits

0xdc13,	// (0x000550c9) main_pane_set_vc_t2

0xdc25,	// (0x000550db) main_pane_set_vc_t3_ParamLimits

0xdc25,	// (0x000550db) main_pane_set_vc_t3

0xdc39,	// (0x000550ef) main_pane_set_vc_t4_ParamLimits

0xdc39,	// (0x000550ef) main_pane_set_vc_t4

0x0003,

0xfa37,	// (0x00056eed) main_pane_set_vc_t_ParamLimits

0xfa37,	// (0x00056eed) main_pane_set_vc_t

0xdc4d,	// (0x00055103) setting_code_pane_vc_ParamLimits

0xdc4d,	// (0x00055103) setting_code_pane_vc

0xdc5e,	// (0x00055114) setting_slider_graphic_pane_vc

0xdc5e,	// (0x00055114) setting_slider_pane_vc

0xdc5e,	// (0x00055114) setting_text_pane_vc

0xdc5e,	// (0x00055114) setting_volume_pane_vc

0xdc68,	// (0x0005511e) scroll_pane_cp121_vc

0xae31,	// (0x000522e7) set_content_pane_vc

0xdca8,	// (0x0005515e) button_value_adjust_pane_g1

0xdcb1,	// (0x00055167) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x00056f40) button_value_adjust_pane_g

0xdcba,	// (0x00055170) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdcba,	// (0x00055170) form_field_slider_wide_pane_vc_t1

0xdcce,	// (0x00055184) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdcce,	// (0x00055184) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x00056f45) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x00056f45) form_field_slider_wide_pane_vc_t

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp10_vc_ParamLimits

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp10_vc

0xdce2,	// (0x00055198) slider_cont_pane_cp1_vc_ParamLimits

0xdce2,	// (0x00055198) slider_cont_pane_cp1_vc

0xdb0f,	// (0x00054fc5) slider_form_pane_g1_cp2

0xdb18,	// (0x00054fce) slider_form_pane_g2_cp2

0xdcfd,	// (0x000551b3) form_field_slider_pane_vc_t3

0xdd0b,	// (0x000551c1) form_field_slider_pane_vc_t4

0xdd19,	// (0x000551cf) slider_form_pane_vc_ParamLimits

0xdd19,	// (0x000551cf) slider_form_pane_vc

0xdd26,	// (0x000551dc) form_field_slider_pane_vc_t1_ParamLimits

0xdd26,	// (0x000551dc) form_field_slider_pane_vc_t1

0xdcce,	// (0x00055184) form_field_slider_pane_vc_t2_ParamLimits

0xdcce,	// (0x00055184) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00056f55) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00056f55) form_field_slider_pane_vc_t

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp9_vc_ParamLimits

0x8b1a,	// (0x0004ffd0) input_focus_pane_cp9_vc

0xdd42,	// (0x000551f8) slider_cont_pane_vc_ParamLimits

0xdd42,	// (0x000551f8) slider_cont_pane_vc

0xdd56,	// (0x0005520c) list_form_graphic_pane_cp_vc_ParamLimits

0xdd56,	// (0x0005520c) list_form_graphic_pane_cp_vc

0xc556,	// (0x00053a0c) form_field_popup_wide_pane_vc_g1

0xdd6b,	// (0x00055221) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdd6b,	// (0x00055221) form_field_popup_wide_pane_vc_t1

0xae57,	// (0x0005230d) input_focus_pane_cp8_vc_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_cp8_vc

0xdd82,	// (0x00055238) list_form_wide_pane_vc_ParamLimits

0xdd82,	// (0x00055238) list_form_wide_pane_vc

0xdd8e,	// (0x00055244) list_form_graphic_pane_vc_g1

0xdd96,	// (0x0005524c) list_form_graphic_pane_vc_t1_ParamLimits

0xdd96,	// (0x0005524c) list_form_graphic_pane_vc_t1

0x8b28,	// (0x0004ffde) list_highlight_pane_cp5_vc_ParamLimits

0x8b28,	// (0x0004ffde) list_highlight_pane_cp5_vc

0xddb2,	// (0x00055268) list_form_graphic_pane_vc_ParamLimits

0xddb2,	// (0x00055268) list_form_graphic_pane_vc

0xc556,	// (0x00053a0c) form_field_popup_pane_vc_g1

0xddc8,	// (0x0005527e) form_field_popup_pane_vc_t1_ParamLimits

0xddc8,	// (0x0005527e) form_field_popup_pane_vc_t1

0xae57,	// (0x0005230d) input_focus_pane_cp7_vc_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_cp7_vc

0xdddf,	// (0x00055295) list_form_pane_vc_ParamLimits

0xdddf,	// (0x00055295) list_form_pane_vc

0xddeb,	// (0x000552a1) data_form_pane_vc_t1_ParamLimits

0xddeb,	// (0x000552a1) data_form_pane_vc_t1

0xaebe,	// (0x00052374) input_focus_pane_vc_g1

0xaec6,	// (0x0005237c) input_focus_pane_vc_g2

0xaece,	// (0x00052384) input_focus_pane_vc_g3

0xaed6,	// (0x0005238c) input_focus_pane_vc_g4

0xaede,	// (0x00052394) input_focus_pane_vc_g5

0xaee6,	// (0x0005239c) input_focus_pane_vc_g6

0xaeee,	// (0x000523a4) input_focus_pane_vc_g7

0xaef6,	// (0x000523ac) input_focus_pane_vc_g8

0xaefe,	// (0x000523b4) input_focus_pane_vc_g9

0x8ac2,	// (0x0004ff78) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x00056b5f) input_focus_pane_vc_g

0xc54a,	// (0x00053a00) data_form_pane_vc_ParamLimits

0xc54a,	// (0x00053a00) data_form_pane_vc

0xc556,	// (0x00053a0c) form_field_data_pane_vc_g1

0xde06,	// (0x000552bc) form_field_data_pane_vc_t1_ParamLimits

0xde06,	// (0x000552bc) form_field_data_pane_vc_t1

0xae57,	// (0x0005230d) input_focus_pane_vc_ParamLimits

0xae57,	// (0x0005230d) input_focus_pane_vc

0xde20,	// (0x000552d6) button_value_adjust_pane_cp3_vc

0xde28,	// (0x000552de) button_value_adjust_pane_cp5_vc

0xde30,	// (0x000552e6) form_field_data_pane_vc_ParamLimits

0xde30,	// (0x000552e6) form_field_data_pane_vc

0xde47,	// (0x000552fd) form_field_data_pane_vc_cp2

0xde4f,	// (0x00055305) form_field_data_wide_pane_vc_ParamLimits

0xde4f,	// (0x00055305) form_field_data_wide_pane_vc

0xde65,	// (0x0005531b) form_field_data_wide_pane_vc_cp2

0xde6d,	// (0x00055323) form_field_popup_pane_vc_ParamLimits

0xde6d,	// (0x00055323) form_field_popup_pane_vc

0xde84,	// (0x0005533a) form_field_popup_wide_pane_vc_ParamLimits

0xde84,	// (0x0005533a) form_field_popup_wide_pane_vc

0xde9a,	// (0x00055350) form_field_slider_pane_vc_ParamLimits

0xde9a,	// (0x00055350) form_field_slider_pane_vc

0xdead,	// (0x00055363) form_field_slider_wide_pane_vc_ParamLimits

0xdead,	// (0x00055363) form_field_slider_wide_pane_vc

0x9da2,	// (0x00051258) grid_touch_1_pane_ParamLimits

0x9da2,	// (0x00051258) grid_touch_1_pane

0x9db6,	// (0x0005126c) grid_touch_2_pane_ParamLimits

0x9db6,	// (0x0005126c) grid_touch_2_pane

0xdec0,	// (0x00055376) touch_pane_g1_ParamLimits

0xdec0,	// (0x00055376) touch_pane_g1

0xdece,	// (0x00055384) cell_app_pane_cp_wide_ParamLimits

0xdece,	// (0x00055384) cell_app_pane_cp_wide

0xdedf,	// (0x00055395) grid_popup_fast_wide_pane_ParamLimits

0xdedf,	// (0x00055395) grid_popup_fast_wide_pane

0xdef3,	// (0x000553a9) scroll_pane_cp19_ParamLimits

0xdef3,	// (0x000553a9) scroll_pane_cp19

0x8acc,	// (0x0004ff82) bg_popup_window_pane_cp20

0xdf07,	// (0x000553bd) listscroll_popup_fast_wide_pane

0xd0fc,	// (0x000545b2) grid_indicator_nsta_pane

0xdf0f,	// (0x000553c5) clock_nsta_pane_g1

0xdf18,	// (0x000553ce) clock_nsta_pane_t1

0x9de0,	// (0x00051296) cell_indicator_nsta_pane_ParamLimits

0x9de0,	// (0x00051296) cell_indicator_nsta_pane

0xdec0,	// (0x00055376) cell_indicator_nsta_pane_g1

0x9df9,	// (0x000512af) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00056f5f) cell_indicator_nsta_pane_g

0xdf34,	// (0x000553ea) clock_nsta_pane_cp

0xdf3c,	// (0x000553f2) indicator_nsta_pane_cp

0xdf45,	// (0x000553fb) nsta_clock_indic_pane_g1

0x8b64,	// (0x0005001a) grid_indicator_pane

0xb7c0,	// (0x00052c76) scroll_pane_cp29

0x1169,	// (0x0004861f) indicator_nsta_pane_cp2_ParamLimits

0x1169,	// (0x0004861f) indicator_nsta_pane_cp2

0x8b28,	// (0x0004ffde) main_apps_wheel_pane

0xc672,	// (0x00053b28) form_midp_field_text_pane_ParamLimits

0xc7b1,	// (0x00053c67) scroll_bar_cp050_ParamLimits

0xdfae,	// (0x00055464) cell_indicator_pane_ParamLimits

0xdfae,	// (0x00055464) cell_indicator_pane

0xdfc5,	// (0x0005547b) cell_indicator_pane_g1

0x9e0e,	// (0x000512c4) grid_wheel_folder_pane_ParamLimits

0x9e0e,	// (0x000512c4) grid_wheel_folder_pane

0x9e1c,	// (0x000512d2) list_wheel_apps_pane_ParamLimits

0x9e1c,	// (0x000512d2) list_wheel_apps_pane

0x9e2a,	// (0x000512e0) main_apps_wheel_pane_g1_ParamLimits

0x9e2a,	// (0x000512e0) main_apps_wheel_pane_g1

0x9e36,	// (0x000512ec) main_apps_wheel_pane_g2_ParamLimits

0x9e36,	// (0x000512ec) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00056f7b) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00056f7b) main_apps_wheel_pane_g

0x9e44,	// (0x000512fa) main_apps_wheel_pane_t1_ParamLimits

0x9e44,	// (0x000512fa) main_apps_wheel_pane_t1

0x9e58,	// (0x0005130e) list_wheel_apps_pane_g1

0x9e60,	// (0x00051316) list_wheel_apps_pane_g2

0x9e68,	// (0x0005131e) list_wheel_apps_pane_g3

0x9e70,	// (0x00051326) list_wheel_apps_pane_g4

0x9e7a,	// (0x00051330) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00056f80) list_wheel_apps_pane_g

0xbd2a,	// (0x000531e0) navi_icon_text_pane

0x9090,	// (0x00050546) aid_fill_nsta

0xdfcf,	// (0x00055485) navi_icon_text_pane_g1

0xdfdb,	// (0x00055491) navi_icon_text_pane_t1

0x85d2,	// (0x0004fa88) list_set_graphic_pane_t1_ParamLimits

0x85d2,	// (0x0004fa88) list_set_graphic_pane_t1

0xced2,	// (0x00054388) popup_midp_note_alarm_window_t6_ParamLimits

0xced2,	// (0x00054388) popup_midp_note_alarm_window_t6

0xcee4,	// (0x0005439a) popup_midp_note_alarm_window_t7_ParamLimits

0xcee4,	// (0x0005439a) popup_midp_note_alarm_window_t7

0xcef6,	// (0x000543ac) popup_midp_note_alarm_window_t8_ParamLimits

0xcef6,	// (0x000543ac) popup_midp_note_alarm_window_t8

0xcf08,	// (0x000543be) popup_midp_note_alarm_window_t9_ParamLimits

0xcf08,	// (0x000543be) popup_midp_note_alarm_window_t9

0xcf1a,	// (0x000543d0) popup_midp_note_alarm_window_t10_ParamLimits

0xcf1a,	// (0x000543d0) popup_midp_note_alarm_window_t10

0xcf2c,	// (0x000543e2) popup_midp_note_alarm_window_t11_ParamLimits

0xcf2c,	// (0x000543e2) popup_midp_note_alarm_window_t11

0xcf3e,	// (0x000543f4) scroll_pane_cp17_ParamLimits

0xcf3e,	// (0x000543f4) scroll_pane_cp17

0x15b5,	// (0x00048a6b) volume_small_pane_cp_g1

0x18aa,	// (0x00048d60) volume_small_pane_cp_g2

0x18b3,	// (0x00048d69) volume_small_pane_cp_g3

0x18bc,	// (0x00048d72) volume_small_pane_cp_g4

0x18c5,	// (0x00048d7b) volume_small_pane_cp_g5

0x18ce,	// (0x00048d84) volume_small_pane_cp_g6

0x18d7,	// (0x00048d8d) volume_small_pane_cp_g7

0x18e0,	// (0x00048d96) volume_small_pane_cp_g8

0x18e9,	// (0x00048d9f) volume_small_pane_cp_g9

0x18f2,	// (0x00048da8) volume_small_pane_cp_g10

0xbec8,	// (0x0005337e) midp_ticker_pane_g1_ParamLimits

0xbed4,	// (0x0005338a) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00056c2b) midp_ticker_pane_g_ParamLimits

0xbee0,	// (0x00053396) midp_ticker_pane_t1_ParamLimits

0x90b4,	// (0x0005056a) aid_fill_nsta_2

0xc79d,	// (0x00053c53) list_form2_midp_pane

0xd66c,	// (0x00054b22) midp_editing_number_pane_ParamLimits

0xd67b,	// (0x00054b31) midp_ticker_pane_ParamLimits

0xdfed,	// (0x000554a3) form2_midp_field_pane

0xdff5,	// (0x000554ab) scroll_pane_cp51

0xe015,	// (0x000554cb) form2_midp_button_pane_ParamLimits

0xe015,	// (0x000554cb) form2_midp_button_pane

0xe027,	// (0x000554dd) form2_midp_content_pane_ParamLimits

0xe027,	// (0x000554dd) form2_midp_content_pane

0xe041,	// (0x000554f7) form2_midp_field_choice_group_pane

0xe049,	// (0x000554ff) form2_midp_field_pane_g1

0xe051,	// (0x00055507) form2_midp_field_pane_g2

0xe059,	// (0x0005550f) form2_midp_field_pane_g3

0xe061,	// (0x00055517) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00056fa5) form2_midp_field_pane_g

0xe069,	// (0x0005551f) form2_midp_gauge_slider_pane

0xe071,	// (0x00055527) form2_midp_gauge_wait_pane

0xe079,	// (0x0005552f) form2_midp_image_pane_ParamLimits

0xe079,	// (0x0005552f) form2_midp_image_pane

0xe094,	// (0x0005554a) form2_midp_label_pane_ParamLimits

0xe094,	// (0x0005554a) form2_midp_label_pane

0x9ead,	// (0x00051363) form2_midp_label_pane_cp_ParamLimits

0x9ead,	// (0x00051363) form2_midp_label_pane_cp

0xe0ad,	// (0x00055563) form2_midp_string_pane_ParamLimits

0xe0ad,	// (0x00055563) form2_midp_string_pane

0x7a1f,	// (0x0004eed5) form2_midp_text_pane_ParamLimits

0x7a1f,	// (0x0004eed5) form2_midp_text_pane

0xe0bf,	// (0x00055575) form2_midp_time_pane

0xe0cf,	// (0x00055585) input_focus_pane_cp51_ParamLimits

0xe0cf,	// (0x00055585) input_focus_pane_cp51

0xe0e7,	// (0x0005559d) form2_midp_label_pane_t1_ParamLimits

0xe0e7,	// (0x0005559d) form2_midp_label_pane_t1

0x7a3e,	// (0x0004eef4) form2_mdip_text_pane_t1_ParamLimits

0x7a3e,	// (0x0004eef4) form2_mdip_text_pane_t1

0x314e,	// (0x0004a604) form2_midp_time_pane_t1

0xe130,	// (0x000555e6) form2_midp_gauge_slider_pane_t1

0x9ecc,	// (0x00051382) form2_midp_gauge_slider_pane_t2

0x9ede,	// (0x00051394) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x00056fae) form2_midp_gauge_slider_pane_t

0xe142,	// (0x000555f8) form2_midp_slider_pane

0xe14e,	// (0x00055604) form2_midp_gauge_wait_pane_t1

0xe15c,	// (0x00055612) form2_midp_wait_pane_ParamLimits

0xe15c,	// (0x00055612) form2_midp_wait_pane

0x9ef0,	// (0x000513a6) list_single_2graphic_pane_cp4_ParamLimits

0x9ef0,	// (0x000513a6) list_single_2graphic_pane_cp4

0x9801,	// (0x00050cb7) list_single_midp_graphic_pane_cp_ParamLimits

0x9801,	// (0x00050cb7) list_single_midp_graphic_pane_cp

0x8acc,	// (0x0004ff82) list_highlight_pane_cp20

0xe187,	// (0x0005563d) list_single_2graphic_pane_g1_cp4

0xe18f,	// (0x00055645) list_single_2graphic_pane_g2_cp4

0xe197,	// (0x0005564d) list_single_2graphic_pane_t1_cp4

0x8b28,	// (0x0004ffde) list_highlight_pane_cp21

0xe1a6,	// (0x0005565c) list_single_midp_graphic_pane_g4_cp

0xe1b5,	// (0x0005566b) list_single_midp_graphic_pane_t1_cp

0x9f04,	// (0x000513ba) form2_mdip_string_pane_t1_ParamLimits

0x9f04,	// (0x000513ba) form2_mdip_string_pane_t1

0x8acc,	// (0x0004ff82) bg_wml_button_pane_cp2

0x8ac2,	// (0x0004ff78) form2_midp_image_pane_g1

0x294e,	// (0x00049e04) list_double_large_graphic_pane_g5_ParamLimits

0x294e,	// (0x00049e04) list_double_large_graphic_pane_g5

0xafaf,	// (0x00052465) midp_form_pane_ParamLimits

0x8b28,	// (0x0004ffde) main_apps_wheel_pane_ParamLimits

0x8dec,	// (0x000502a2) popup_preview_window_ParamLimits

0x8dec,	// (0x000502a2) popup_preview_window

0xc1d5,	// (0x0005368b) popup_touch_info_window_ParamLimits

0xc1d5,	// (0x0005368b) popup_touch_info_window

0xc1f3,	// (0x000536a9) popup_touch_menu_window_ParamLimits

0xc1f3,	// (0x000536a9) popup_touch_menu_window

0x8ab8,	// (0x0004ff6e) bg_popup_sub_pane_cp6

0xe1ca,	// (0x00055680) list_touch_menu_pane

0xe1d2,	// (0x00055688) list_single_touch_menu_pane_ParamLimits

0xe1d2,	// (0x00055688) list_single_touch_menu_pane

0xe1e8,	// (0x0005569e) list_single_touch_menu_pane_t1

0x8b28,	// (0x0004ffde) bg_popup_sub_pane_cp7_ParamLimits

0x8b28,	// (0x0004ffde) bg_popup_sub_pane_cp7

0xe1f6,	// (0x000556ac) heading_sub_pane

0xe1fe,	// (0x000556b4) list_touch_info_pane_ParamLimits

0xe1fe,	// (0x000556b4) list_touch_info_pane

0xe20d,	// (0x000556c3) list_single_touch_info_pane_ParamLimits

0xe20d,	// (0x000556c3) list_single_touch_info_pane

0xe21f,	// (0x000556d5) list_single_touch_info_pane_t1

0xe22d,	// (0x000556e3) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x00056fbc) list_single_touch_info_pane_t

0xbe9e,	// (0x00053354) bg_popup_heading_pane_cp

0xe23b,	// (0x000556f1) heading_sub_pane_t1

0xc510,	// (0x000539c6) bg_popup_preview_window_pane_cp_ParamLimits

0xc510,	// (0x000539c6) bg_popup_preview_window_pane_cp

0xe1f6,	// (0x000556ac) heading_preview_pane

0xe1fe,	// (0x000556b4) list_preview_pane_ParamLimits

0xe1fe,	// (0x000556b4) list_preview_pane

0xe249,	// (0x000556ff) popup_preview_window_g1

0xe20d,	// (0x000556c3) list_single_preview_pane_ParamLimits

0xe20d,	// (0x000556c3) list_single_preview_pane

0xe251,	// (0x00055707) list_single_preview_pane_g1

0xe259,	// (0x0005570f) list_single_preview_pane_t1

0xe21f,	// (0x000556d5) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00056fc1) list_single_preview_pane_t

0xe267,	// (0x0005571d) bg_popup_heading_pane_cp2_ParamLimits

0xe267,	// (0x0005571d) bg_popup_heading_pane_cp2

0xe27d,	// (0x00055733) heading_preview_pane_g1

0xe285,	// (0x0005573b) heading_preview_pane_t1_ParamLimits

0xe285,	// (0x0005573b) heading_preview_pane_t1

0x8b7b,	// (0x00050031) soft_indicator_pane_t1_ParamLimits

0x997e,	// (0x00050e34) scroll_pane_ParamLimits

0xb6b9,	// (0x00052b6f) scroll_sc2_left_pane

0xb6c2,	// (0x00052b78) scroll_sc2_right_pane

0xb6e1,	// (0x00052b97) scroll_bg_pane_g1_ParamLimits

0xb6f6,	// (0x00052bac) scroll_bg_pane_g2_ParamLimits

0xb70e,	// (0x00052bc4) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x00056bb6) scroll_bg_pane_g_ParamLimits

0xb6e1,	// (0x00052b97) scroll_handle_pane_g1_ParamLimits

0xb730,	// (0x00052be6) scroll_handle_pane_g2_ParamLimits

0xb70e,	// (0x00052bc4) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x00056bbd) scroll_handle_pane_g_ParamLimits

0xc112,	// (0x000535c8) popup_choice_list_window_ParamLimits

0xc112,	// (0x000535c8) popup_choice_list_window

0xc362,	// (0x00053818) choice_list_pane

0xc3e4,	// (0x0005389a) cell_toolbar_pane_t1

0xc40c,	// (0x000538c2) toolbar_button_pane_ParamLimits

0xd38e,	// (0x00054844) ai_gene_pane_1_t2_ParamLimits

0xd38e,	// (0x00054844) ai_gene_pane_1_t2

0x0001,

0xf91c,	// (0x00056dd2) ai_gene_pane_1_t_ParamLimits

0xf91c,	// (0x00056dd2) ai_gene_pane_1_t

0xe2a2,	// (0x00055758) scroll_sc2_left_pane_g1

0xe2a2,	// (0x00055758) scroll_sc2_right_pane_g1

0xafaf,	// (0x00052465) bg_popup_sub_pane_cp10

0xe2ac,	// (0x00055762) list_choice_list_pane

0xe2c5,	// (0x0005577b) list_single_choice_list_pane_ParamLimits

0xe2c5,	// (0x0005577b) list_single_choice_list_pane

0xe2d8,	// (0x0005578e) list_single_choice_list_pane_g1

0xaf9a,	// (0x00052450) list_single_choice_list_pane_t1_ParamLimits

0xaf9a,	// (0x00052450) list_single_choice_list_pane_t1

0xe2e0,	// (0x00055796) choice_list_pane_g1

0xe2e8,	// (0x0005579e) choice_list_pane_t1

0x8ab8,	// (0x0004ff6e) input_focus_pane_cp11

0xb62e,	// (0x00052ae4) title_pane_stacon_g2_ParamLimits

0xb62e,	// (0x00052ae4) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x00056b9c) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x00056b9c) title_pane_stacon_g

0xbe9e,	// (0x00053354) cursor_press_pane

0x8797,	// (0x0004fc4d) popup_fep_hwr_window_ParamLimits

0x8797,	// (0x0004fc4d) popup_fep_hwr_window

0xc16c,	// (0x00053622) popup_fep_vkb_window_ParamLimits

0xc16c,	// (0x00053622) popup_fep_vkb_window

0xe2f6,	// (0x000557ac) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x00056fea) fep_vkb_side_pane_g_ParamLimits

0x1934,	// (0x00048dea) fep_hwr_candidate_pane_ParamLimits

0x1934,	// (0x00048dea) fep_hwr_candidate_pane

0x195e,	// (0x00048e14) fep_hwr_side_pane_ParamLimits

0x195e,	// (0x00048e14) fep_hwr_side_pane

0x197e,	// (0x00048e34) fep_hwr_top_pane_ParamLimits

0x197e,	// (0x00048e34) fep_hwr_top_pane

0x1996,	// (0x00048e4c) fep_hwr_write_pane_ParamLimits

0x1996,	// (0x00048e4c) fep_hwr_write_pane

0xfb34,	// (0x00056fea) fep_vkb_side_pane_g

0xe2fe,	// (0x000557b4) fep_hwr_top_pane_g1

0xe310,	// (0x000557c6) fep_hwr_top_pane_g2

0x19d0,	// (0x00048e86) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00056fc6) fep_hwr_top_pane_g

0x19e5,	// (0x00048e9b) fep_hwr_top_text_pane

0xb887,	// (0x00052d3d) fep_hwr_top_text_pane_g1

0xe346,	// (0x000557fc) fep_hwr_top_text_pane_t1

0x1adb,	// (0x00048f91) fep_hwr_candidate_pane_g1

0xe473,	// (0x00055929) fep_vkb_keypad_pane_g3_ParamLimits

0xe473,	// (0x00055929) fep_vkb_keypad_pane_g3

0xe49b,	// (0x00055951) fep_vkb_keypad_pane_g4_ParamLimits

0xe49b,	// (0x00055951) fep_vkb_keypad_pane_g4

0xe50a,	// (0x000559c0) fep_vkb_bottom_pane_g2_ParamLimits

0xe50a,	// (0x000559c0) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00056ff1) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00056ff1) fep_vkb_bottom_pane_g

0xe2a2,	// (0x00055758) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00056ffb) cell_vkb_side_pane_g

0xe54e,	// (0x00055a04) cell_vkb_side_pane_t1

0xe55c,	// (0x00055a12) cell_vkb_side_pane_t1_copy1

0xe2a2,	// (0x00055758) bg_fep_vkb_candidate_pane_g2

0xe632,	// (0x00055ae8) cell_vkb_candidate_pane_ParamLimits

0xe354,	// (0x0005580a) aid_size_cell_vkb_ParamLimits

0xe354,	// (0x0005580a) aid_size_cell_vkb

0xe632,	// (0x00055ae8) cell_vkb_candidate_pane

0x1b02,	// (0x00048fb8) bg_popup_fep_shadow_pane_g1

0x9f88,	// (0x0005143e) fep_vkb_bottom_pane_ParamLimits

0x9f88,	// (0x0005143e) fep_vkb_bottom_pane

0xe3e1,	// (0x00055897) fep_vkb_candidate_pane_ParamLimits

0xe3e1,	// (0x00055897) fep_vkb_candidate_pane

0x9fad,	// (0x00051463) fep_vkb_keypad_pane_ParamLimits

0x9fad,	// (0x00051463) fep_vkb_keypad_pane

0x9fe9,	// (0x0005149f) fep_vkb_side_pane_ParamLimits

0x9fe9,	// (0x0005149f) fep_vkb_side_pane

0xa025,	// (0x000514db) fep_vkb_top_pane_ParamLimits

0xa025,	// (0x000514db) fep_vkb_top_pane

0xe407,	// (0x000558bd) fep_vkb_top_pane_g1_ParamLimits

0xe407,	// (0x000558bd) fep_vkb_top_pane_g1

0xe416,	// (0x000558cc) fep_vkb_top_pane_g2_ParamLimits

0xe416,	// (0x000558cc) fep_vkb_top_pane_g2

0xe425,	// (0x000558db) fep_vkb_top_pane_g3_ParamLimits

0xe425,	// (0x000558db) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00056fe1) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00056fe1) fep_vkb_top_pane_g

0xe443,	// (0x000558f9) fep_vkb_top_text_pane_ParamLimits

0xe443,	// (0x000558f9) fep_vkb_top_text_pane

0xa061,	// (0x00051517) fep_vkb_side_pane_g1_ParamLimits

0xa061,	// (0x00051517) fep_vkb_side_pane_g1

0xe462,	// (0x00055918) grid_vkb_side_pane_ParamLimits

0xe462,	// (0x00055918) grid_vkb_side_pane

0x1b0a,	// (0x00048fc0) bg_popup_fep_shadow_pane_g2

0x1b13,	// (0x00048fc9) bg_popup_fep_shadow_pane_g3

0x1b1b,	// (0x00048fd1) bg_popup_fep_shadow_pane_g4

0x1b24,	// (0x00048fda) bg_popup_fep_shadow_pane_g5

0x1b2e,	// (0x00048fe4) bg_popup_fep_shadow_pane_g6

0x1b36,	// (0x00048fec) bg_popup_fep_shadow_pane_g7

0xaed6,	// (0x0005238c) bg_popup_fep_shadow_pane_g8

0xe4b9,	// (0x0005596f) grid_vkb_keypad_number_pane_ParamLimits

0xe4b9,	// (0x0005596f) grid_vkb_keypad_number_pane

0xe4c9,	// (0x0005597f) grid_vkb_keypad_pane_ParamLimits

0xe4c9,	// (0x0005597f) grid_vkb_keypad_pane

0xe4ef,	// (0x000559a5) fep_vkb_bottom_pane_g1_ParamLimits

0xe4ef,	// (0x000559a5) fep_vkb_bottom_pane_g1

0xe518,	// (0x000559ce) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe518,	// (0x000559ce) grid_vkb_keypad_bottom_left_pane

0xe52d,	// (0x000559e3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe52d,	// (0x000559e3) grid_vkb_keypad_bottom_right_pane

0xe542,	// (0x000559f8) fep_vkb_top_text_pane_g1

0xa0a8,	// (0x0005155e) fep_vkb_top_text_pane_t1

0xa0ba,	// (0x00051570) cell_vkb_side_pane_ParamLimits

0xa0ba,	// (0x00051570) cell_vkb_side_pane

0xe2a2,	// (0x00055758) cell_vkb_side_pane_g1

0xe56a,	// (0x00055a20) cell_vkb_keypad_pane_ParamLimits

0xe56a,	// (0x00055a20) cell_vkb_keypad_pane

0xe5df,	// (0x00055a95) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0005700e) bg_popup_fep_shadow_pane_g

0x1b48,	// (0x00048ffe) cell_hwr_side_pane_g1

0x1b48,	// (0x00048ffe) cell_hwr_side_pane_g2

0xe5e9,	// (0x00055a9f) cell_vkb_keypad_pane_t1

0xa0d0,	// (0x00051586) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa0d0,	// (0x00051586) cell_vkb_keypad_bottom_left_pane

0xa0e5,	// (0x0005159b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa0e5,	// (0x0005159b) cell_vkb_keypad_bottom_right_pane

0xe2a2,	// (0x00055758) cell_vkb_keypad_bottom_left_pane_g1

0xe2a2,	// (0x00055758) cell_vkb_keypad_bottom_right_pane_g1

0xe5f7,	// (0x00055aad) cell_vkb_keypad_number_pane_ParamLimits

0xe5f7,	// (0x00055aad) cell_vkb_keypad_number_pane

0xe616,	// (0x00055acc) cell_vkb_keypad_number_pane_g1

0xe620,	// (0x00055ad6) cell_vkb_keypad_number_pane_g2

0xe629,	// (0x00055adf) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00057000) cell_vkb_keypad_number_pane_g

0xe5e9,	// (0x00055a9f) cell_vkb_keypad_number_pane_t1

0xe64d,	// (0x00055b03) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x00057021) cell_hwr_side_pane_g

0xe666,	// (0x00055b1c) cell_hwr_side_pane_t1

0x1b52,	// (0x00049008) cell_hwr_side_pane_t1_copy1

0x1b60,	// (0x00049016) cell_hwr_candidate_pane_g1

0x1b8f,	// (0x00049045) cell_hwr_candidate_pane_t1

0xe2a2,	// (0x00055758) cell_vkb_candidate_pane_g2

0xe6aa,	// (0x00055b60) cell_vkb_candidate_pane_t1

0x18fb,	// (0x00048db1) bg_popup_fep_shadow_pane_ParamLimits

0x18fb,	// (0x00048db1) bg_popup_fep_shadow_pane

0x19b0,	// (0x00048e66) bg_fep_hwr_top_pane_g4

0xe322,	// (0x000557d8) bg_hwr_side_pane_g1_ParamLimits

0xe322,	// (0x000557d8) bg_hwr_side_pane_g1

0x7a70,	// (0x0004ef26) cell_hwr_side_pane_ParamLimits

0x7a70,	// (0x0004ef26) cell_hwr_side_pane

0x1a5c,	// (0x00048f12) fep_hwr_write_pane_g1_ParamLimits

0x1a5c,	// (0x00048f12) fep_hwr_write_pane_g1

0x1a69,	// (0x00048f1f) fep_hwr_write_pane_g2_ParamLimits

0x1a69,	// (0x00048f1f) fep_hwr_write_pane_g2

0x1a76,	// (0x00048f2c) fep_hwr_write_pane_g3_ParamLimits

0x1a76,	// (0x00048f2c) fep_hwr_write_pane_g3

0x7a90,	// (0x0004ef46) fep_hwr_write_pane_g4_ParamLimits

0x7a90,	// (0x0004ef46) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x00056fcd) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x00056fcd) fep_hwr_write_pane_g

0x19b0,	// (0x00048e66) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19b0,	// (0x00048e66) bg_fep_hwr_candidate_pane_g2

0x1a99,	// (0x00048f4f) cell_hwr_candidate_pane_ParamLimits

0x1a99,	// (0x00048f4f) cell_hwr_candidate_pane

0x1adb,	// (0x00048f91) fep_hwr_candidate_pane_g1_ParamLimits

0xe382,	// (0x00055838) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe382,	// (0x00055838) bg_popup_fep_shadow_pane_cp2

0xe435,	// (0x000558eb) fep_vkb_top_pane_g4_ParamLimits

0xe435,	// (0x000558eb) fep_vkb_top_pane_g4

0xe454,	// (0x0005590a) fep_vkb_side_pane_g2_ParamLimits

0xe454,	// (0x0005590a) fep_vkb_side_pane_g2

0x73c9,	// (0x0004e87f) list_setting_pane_t4_ParamLimits

0x73c9,	// (0x0004e87f) list_setting_pane_t4

0x7463,	// (0x0004e919) list_setting_number_pane_t5_ParamLimits

0x7463,	// (0x0004e919) list_setting_number_pane_t5

0x84cb,	// (0x0004f981) list_double_heading_pane_cp2_ParamLimits

0x84cb,	// (0x0004f981) list_double_heading_pane_cp2

0xae71,	// (0x00052327) list_double_heading_pane_g1_cp2_ParamLimits

0xae71,	// (0x00052327) list_double_heading_pane_g1_cp2

0xae7d,	// (0x00052333) list_double_heading_pane_g2_cp2_ParamLimits

0xae7d,	// (0x00052333) list_double_heading_pane_g2_cp2

0xe6b8,	// (0x00055b6e) list_double_heading_pane_t1_cp2_ParamLimits

0xe6b8,	// (0x00055b6e) list_double_heading_pane_t1_cp2

0xe6ce,	// (0x00055b84) list_double_heading_pane_t2_cp2_ParamLimits

0xe6ce,	// (0x00055b84) list_double_heading_pane_t2_cp2

0x8ab0,	// (0x0004ff66) aid_value_unit2

0x05d1,	// (0x00047a87) popup_preview_fixed_window

0x8c5b,	// (0x00050111) bg_popup_preview_window_pane_cp02

0xe6e0,	// (0x00055b96) list_preview_fixed_pane

0xe726,	// (0x00055bdc) list_empty_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_empty_pane_fp

0xe726,	// (0x00055bdc) list_single_cale_day_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_single_cale_day_pane_fp

0xe726,	// (0x00055bdc) list_single_graphic_heading_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_single_graphic_heading_pane_fp

0xe726,	// (0x00055bdc) list_single_graphic_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_single_graphic_pane_fp

0xe726,	// (0x00055bdc) list_single_heading_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_single_heading_pane_fp

0xe726,	// (0x00055bdc) list_single_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_single_pane_fp

0xe73b,	// (0x00055bf1) list_single_pane_fp_g1_ParamLimits

0xe73b,	// (0x00055bf1) list_single_pane_fp_g1

0xae71,	// (0x00052327) list_single_pane_fp_g2_ParamLimits

0xae71,	// (0x00052327) list_single_pane_fp_g2

0xae7d,	// (0x00052333) list_single_pane_fp_g3_ParamLimits

0xae7d,	// (0x00052333) list_single_pane_fp_g3

0xe747,	// (0x00055bfd) list_single_pane_fp_g4_ParamLimits

0xe747,	// (0x00055bfd) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x00057034) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x00057034) list_single_pane_fp_g

0x3161,	// (0x0004a617) list_single_pane_fp_t1_ParamLimits

0x3161,	// (0x0004a617) list_single_pane_fp_t1

0x3178,	// (0x0004a62e) list_single_graphic_pane_fp_g1_ParamLimits

0x3178,	// (0x0004a62e) list_single_graphic_pane_fp_g1

0xe73b,	// (0x00055bf1) list_single_graphic_pane_fp_g2_ParamLimits

0xe73b,	// (0x00055bf1) list_single_graphic_pane_fp_g2

0xae71,	// (0x00052327) list_single_graphic_pane_fp_g3_ParamLimits

0xae71,	// (0x00052327) list_single_graphic_pane_fp_g3

0xae7d,	// (0x00052333) list_single_graphic_pane_fp_g4_ParamLimits

0xae7d,	// (0x00052333) list_single_graphic_pane_fp_g4

0xe747,	// (0x00055bfd) list_single_graphic_pane_fp_g5_ParamLimits

0xe747,	// (0x00055bfd) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0005703d) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0005703d) list_single_graphic_pane_fp_g

0x3184,	// (0x0004a63a) list_single_graphic_pane_fp_t1_ParamLimits

0x3184,	// (0x0004a63a) list_single_graphic_pane_fp_t1

0x3178,	// (0x0004a62e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3178,	// (0x0004a62e) list_single_graphic_heading_pane_fp_g1

0xe73b,	// (0x00055bf1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe73b,	// (0x00055bf1) list_single_graphic_heading_pane_fp_g2

0xae71,	// (0x00052327) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xae71,	// (0x00052327) list_single_graphic_heading_pane_fp_g3

0xae7d,	// (0x00052333) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xae7d,	// (0x00052333) list_single_graphic_heading_pane_fp_g4

0xe747,	// (0x00055bfd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe747,	// (0x00055bfd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0005703d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0005703d) list_single_graphic_heading_pane_fp_g

0x319a,	// (0x0004a650) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x319a,	// (0x0004a650) list_single_graphic_heading_pane_fp_t1

0x31b0,	// (0x0004a666) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x31b0,	// (0x0004a666) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x00057048) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x00057048) list_single_graphic_heading_pane_fp_t

0x31c2,	// (0x0004a678) list_single_cale_day_pane_fp_g1_ParamLimits

0x31c2,	// (0x0004a678) list_single_cale_day_pane_fp_g1

0xe753,	// (0x00055c09) list_single_cale_day_pane_fp_g2_ParamLimits

0xe753,	// (0x00055c09) list_single_cale_day_pane_fp_g2

0x31fa,	// (0x0004a6b0) list_single_cale_day_pane_fp_g3_ParamLimits

0x31fa,	// (0x0004a6b0) list_single_cale_day_pane_fp_g3

0x3222,	// (0x0004a6d8) list_single_cale_day_pane_fp_g4_ParamLimits

0x3222,	// (0x0004a6d8) list_single_cale_day_pane_fp_g4

0x3246,	// (0x0004a6fc) list_single_cale_day_pane_fp_g5_ParamLimits

0x3246,	// (0x0004a6fc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0005704d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0005704d) list_single_cale_day_pane_fp_g

0x326a,	// (0x0004a720) list_single_cale_day_pane_fp_t1_ParamLimits

0x326a,	// (0x0004a720) list_single_cale_day_pane_fp_t1

0x3290,	// (0x0004a746) list_single_cale_day_pane_fp_t2_ParamLimits

0x3290,	// (0x0004a746) list_single_cale_day_pane_fp_t2

0x32a9,	// (0x0004a75f) list_single_cale_day_pane_fp_t3_ParamLimits

0x32a9,	// (0x0004a75f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x00057058) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x00057058) list_single_cale_day_pane_fp_t

0xe73b,	// (0x00055bf1) list_empty_pane_fp_g1_ParamLimits

0xe73b,	// (0x00055bf1) list_empty_pane_fp_g1

0x32c2,	// (0x0004a778) list_empty_pane_fp_t1

0x32d0,	// (0x0004a786) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0005705f) list_empty_pane_fp_t

0xe73b,	// (0x00055bf1) list_single_heading_pane_fp_g1_ParamLimits

0xe73b,	// (0x00055bf1) list_single_heading_pane_fp_g1

0xae71,	// (0x00052327) list_single_heading_pane_fp_g2_ParamLimits

0xae71,	// (0x00052327) list_single_heading_pane_fp_g2

0xae7d,	// (0x00052333) list_single_heading_pane_fp_g3_ParamLimits

0xae7d,	// (0x00052333) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x00057064) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x00057064) list_single_heading_pane_fp_g

0x32de,	// (0x0004a794) list_single_heading_pane_fp_t1_ParamLimits

0x32de,	// (0x0004a794) list_single_heading_pane_fp_t1

0x32f0,	// (0x0004a7a6) list_single_heading_pane_fp_t2_ParamLimits

0x32f0,	// (0x0004a7a6) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0005706b) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0005706b) list_single_heading_pane_fp_t

0xafbb,	// (0x00052471) aid_size_cell_fast

0x8c3e,	// (0x000500f4) soft_indicator_pane_cp1_t1

0xaff8,	// (0x000524ae) cell_app_pane_cp2_ParamLimits

0xaff8,	// (0x000524ae) cell_app_pane_cp2

0x191d,	// (0x00048dd3) fep_hwr_candidate_drop_down_list_pane

0x1af5,	// (0x00048fab) fep_hwr_candidate_pane_g3_ParamLimits

0x1af5,	// (0x00048fab) fep_hwr_candidate_pane_g3

0xb017,	// (0x000524cd) fep_hwr_candidate_pane_g4_ParamLimits

0xb017,	// (0x000524cd) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x00056fda) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x00056fda) fep_hwr_candidate_pane_g

0xe3d0,	// (0x00055886) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe3d0,	// (0x00055886) fep_vkb_candidate_drop_down_list_pane

0xe655,	// (0x00055b0b) fep_vkb_candidate_pane_g3

0xe65d,	// (0x00055b13) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00057007) fep_vkb_candidate_pane_g

0x1b60,	// (0x00049016) cell_hwr_candidate_pane_g1_ParamLimits

0x1b6e,	// (0x00049024) cell_hwr_candidate_pane_g3_ParamLimits

0x1b6e,	// (0x00049024) cell_hwr_candidate_pane_g3

0x540e,	// (0x0004c8c4) cell_hwr_candidate_pane_g4_ParamLimits

0x540e,	// (0x0004c8c4) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x00057026) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x00057026) cell_hwr_candidate_pane_g

0xe674,	// (0x00055b2a) cell_vkb_candidate_pane_g3_ParamLimits

0xe674,	// (0x00055b2a) cell_vkb_candidate_pane_g3

0xe68f,	// (0x00055b45) cell_vkb_candidate_pane_g4_ParamLimits

0xe68f,	// (0x00055b45) cell_vkb_candidate_pane_g4

0xe75f,	// (0x00055c15) cell_app_pane_cp2_g1_ParamLimits

0xe75f,	// (0x00055c15) cell_app_pane_cp2_g1

0xe77d,	// (0x00055c33) cell_app_pane_cp2_g2_ParamLimits

0xe77d,	// (0x00055c33) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x00057070) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x00057070) cell_app_pane_cp2_g

0xe789,	// (0x00055c3f) cell_app_pane_cp2_t1_ParamLimits

0xe789,	// (0x00055c3f) cell_app_pane_cp2_t1

0xae57,	// (0x0005230d) grid_highlight_pane_cp1_ParamLimits

0xae57,	// (0x0005230d) grid_highlight_pane_cp1

0x1bad,	// (0x00049063) cell_hwr_candidate_pane_cp1_ParamLimits

0x1bad,	// (0x00049063) cell_hwr_candidate_pane_cp1

0x1b60,	// (0x00049016) fep_hwr_candidate_drop_down_list_pane_g1

0x1bcc,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2

0x1bd9,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00057075) fep_hwr_candidate_drop_down_list_pane_g

0x1be6,	// (0x0004909c) fep_hwr_candidate_drop_down_list_scroll_pane

0x1bef,	// (0x000490a5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1bef,	// (0x000490a5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bfc,	// (0x000490b2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bfc,	// (0x000490b2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1c09,	// (0x000490bf) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1c09,	// (0x000490bf) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1c16,	// (0x000490cc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1c16,	// (0x000490cc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1c31,	// (0x000490e7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1c31,	// (0x000490e7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1c4c,	// (0x00049102) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1c4c,	// (0x00049102) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1c67,	// (0x0004911d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1c67,	// (0x0004911d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1c82,	// (0x00049138) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1c82,	// (0x00049138) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0005707c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0005707c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe79b,	// (0x00055c51) cell_vkb_candidate_pane_cp1_ParamLimits

0xe79b,	// (0x00055c51) cell_vkb_candidate_pane_cp1

0xe435,	// (0x000558eb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe435,	// (0x000558eb) fep_vkb_candidate_drop_down_list_pane_g1

0xe7bb,	// (0x00055c71) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe7bb,	// (0x00055c71) fep_vkb_candidate_drop_down_list_pane_g2

0xe7c8,	// (0x00055c7e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe7c8,	// (0x00055c7e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0005708d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0005708d) fep_vkb_candidate_drop_down_list_pane_g

0xe7d5,	// (0x00055c8b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe7d5,	// (0x00055c8b) fep_vkb_candidate_drop_down_list_scroll_pane

0xe7e2,	// (0x00055c98) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe7e2,	// (0x00055c98) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe7ef,	// (0x00055ca5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe7ef,	// (0x00055ca5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe7fb,	// (0x00055cb1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe7fb,	// (0x00055cb1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe807,	// (0x00055cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe807,	// (0x00055cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe828,	// (0x00055cde) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe828,	// (0x00055cde) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe849,	// (0x00055cff) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe849,	// (0x00055cff) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe86a,	// (0x00055d20) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe86a,	// (0x00055d20) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe88b,	// (0x00055d41) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe88b,	// (0x00055d41) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x00057094) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x00057094) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7f93,	// (0x0004f449) title_pane_g1_ParamLimits

0x7fa6,	// (0x0004f45c) title_pane_g2_ParamLimits

0xf566,	// (0x00056a1c) title_pane_g_ParamLimits

0xb877,	// (0x00052d2d) aid_call2_pane

0xb87f,	// (0x00052d35) aid_call_pane

0xb887,	// (0x00052d3d) popup_clock_analogue_window_g1

0xb887,	// (0x00052d3d) popup_clock_analogue_window_g2

0x105e,	// (0x00048514) popup_clock_analogue_window_g3

0x1067,	// (0x0004851d) popup_clock_analogue_window_g4

0x8ac2,	// (0x0004ff78) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x00056bcb) popup_clock_analogue_window_g

0x106f,	// (0x00048525) popup_clock_analogue_window_t1

0x107d,	// (0x00048533) clock_digital_number_pane_ParamLimits

0x107d,	// (0x00048533) clock_digital_number_pane

0x1089,	// (0x0004853f) clock_digital_number_pane_cp02_ParamLimits

0x1089,	// (0x0004853f) clock_digital_number_pane_cp02

0x1095,	// (0x0004854b) clock_digital_number_pane_cp03_ParamLimits

0x1095,	// (0x0004854b) clock_digital_number_pane_cp03

0x10a1,	// (0x00048557) clock_digital_number_pane_cp04_ParamLimits

0x10a1,	// (0x00048557) clock_digital_number_pane_cp04

0x10ad,	// (0x00048563) clock_digital_separator_pane_ParamLimits

0x10ad,	// (0x00048563) clock_digital_separator_pane

0x10b9,	// (0x0004856f) popup_clock_digital_window_t1_ParamLimits

0x10b9,	// (0x0004856f) popup_clock_digital_window_t1

0x8ac2,	// (0x0004ff78) clock_digital_number_pane_g1

0x8ac2,	// (0x0004ff78) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x00056bd6) clock_digital_number_pane_g

0x8ac2,	// (0x0004ff78) clock_digital_separator_pane_g1

0x8ac2,	// (0x0004ff78) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x00056bd6) clock_digital_separator_pane_g

0x9090,	// (0x00050546) aid_fill_nsta_ParamLimits

0x94fd,	// (0x000509b3) indicator_nsta_pane_ParamLimits

0xc2eb,	// (0x000537a1) popup_clock_analogue_window

0xc2eb,	// (0x000537a1) popup_clock_digital_window

0xd0fc,	// (0x000545b2) grid_indicator_nsta_pane_ParamLimits

0xdf26,	// (0x000553dc) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x00056f5a) clock_nsta_pane_t

0x1022,	// (0x000484d8) aid_size_max_handle

0x7612,	// (0x0004eac8) aid_size_min_handle

0xbe9e,	// (0x00053354) editor_scroll_pane

0xe8a6,	// (0x00055d5c) ex_editor_pane

0xaf76,	// (0x0005242c) scroll_pane_cp13

0x99aa,	// (0x00050e60) scroll_pane_cp14

0xb8b6,	// (0x00052d6c) scroll_pane_cp36

0x84da,	// (0x0004f990) list_single_graphic_hl_pane_cp2_ParamLimits

0x84da,	// (0x0004f990) list_single_graphic_hl_pane_cp2

0x8a14,	// (0x0004feca) list_single_graphic_hl_pane_ParamLimits

0x8a14,	// (0x0004feca) list_single_graphic_hl_pane

0x3306,	// (0x0004a7bc) aid_size_min_hl_cp1

0xe8ae,	// (0x00055d64) list_highlight_pane_cp34_ParamLimits

0xe8ae,	// (0x00055d64) list_highlight_pane_cp34

0xe8bf,	// (0x00055d75) list_single_graphic_hl_pane_g1_ParamLimits

0xe8bf,	// (0x00055d75) list_single_graphic_hl_pane_g1

0x330f,	// (0x0004a7c5) list_single_graphic_hl_pane_g2_ParamLimits

0x330f,	// (0x0004a7c5) list_single_graphic_hl_pane_g2

0x330f,	// (0x0004a7c5) list_single_graphic_hl_pane_g3_ParamLimits

0x330f,	// (0x0004a7c5) list_single_graphic_hl_pane_g3

0xbe0f,	// (0x000532c5) list_single_graphic_hl_pane_g4_ParamLimits

0xbe0f,	// (0x000532c5) list_single_graphic_hl_pane_g4

0x331b,	// (0x0004a7d1) list_single_graphic_hl_pane_g5_ParamLimits

0x331b,	// (0x0004a7d1) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x000570a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x000570a5) list_single_graphic_hl_pane_g

0x332f,	// (0x0004a7e5) list_single_graphic_hl_pane_t1_ParamLimits

0x332f,	// (0x0004a7e5) list_single_graphic_hl_pane_t1

0xe8cc,	// (0x00055d82) aid_size_min_hl_cp2

0xe8d5,	// (0x00055d8b) list_highlight_pane_cp34_cp2_ParamLimits

0xe8d5,	// (0x00055d8b) list_highlight_pane_cp34_cp2

0xe8bf,	// (0x00055d75) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe8bf,	// (0x00055d75) list_single_graphic_hl_pane_g1_cp2

0xe8e2,	// (0x00055d98) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe8e2,	// (0x00055d98) list_single_graphic_hl_pane_g2_cp2

0xe8ee,	// (0x00055da4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe8ee,	// (0x00055da4) list_single_graphic_hl_pane_g3_cp2

0xc31e,	// (0x000537d4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc31e,	// (0x000537d4) list_single_graphic_hl_pane_g4_cp2

0xe8fc,	// (0x00055db2) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe8fc,	// (0x00055db2) list_single_graphic_hl_pane_g5_cp2

0x76e9,	// (0x0004eb9f) control_pane_g4_ParamLimits

0x76e9,	// (0x0004eb9f) control_pane_g4

0xafaf,	// (0x00052465) bg_popup_sub_pane_cp10_ParamLimits

0xe2ac,	// (0x00055762) list_choice_list_pane_ParamLimits

0xe2bb,	// (0x00055771) scroll_pane_cp23

0x8c5b,	// (0x00050111) bg_popup_preview_window_pane_cp02_ParamLimits

0xe6e0,	// (0x00055b96) list_preview_fixed_pane_ParamLimits

0xe6f6,	// (0x00055bac) list_preview_fixed_pane_cp_ParamLimits

0xe6f6,	// (0x00055bac) list_preview_fixed_pane_cp

0xe702,	// (0x00055bb8) popup_preview_fixed_window_g1_ParamLimits

0xe702,	// (0x00055bb8) popup_preview_fixed_window_g1

0xe70e,	// (0x00055bc4) popup_preview_fixed_window_g2_ParamLimits

0xe70e,	// (0x00055bc4) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0005702d) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0005702d) popup_preview_fixed_window_g

0x0f96,	// (0x0004844c) aid_navi_side_left_pane_ParamLimits

0x0fab,	// (0x00048461) aid_navi_side_right_pane_ParamLimits

0x0fc3,	// (0x00048479) navi_icon_pane_stacon_ParamLimits

0x0fd7,	// (0x0004848d) navi_navi_pane_stacon_ParamLimits

0x0fc3,	// (0x00048479) navi_text_pane_stacon_ParamLimits

0x8ab8,	// (0x0004ff6e) main_text_info_pane

0xe926,	// (0x00055ddc) listscroll_text_info_pane

0xe92e,	// (0x00055de4) list_text_info_pane_ParamLimits

0xe92e,	// (0x00055de4) list_text_info_pane

0xe93d,	// (0x00055df3) scroll_pane_cp24_ParamLimits

0xe93d,	// (0x00055df3) scroll_pane_cp24

0xa100,	// (0x000515b6) list_text_info_pane_t1_ParamLimits

0xa100,	// (0x000515b6) list_text_info_pane_t1

0x870a,	// (0x0004fbc0) popup_fast_swap2_window_ParamLimits

0x870a,	// (0x0004fbc0) popup_fast_swap2_window

0xe95b,	// (0x00055e11) aid_size_cell_fast2

0x8ab8,	// (0x0004ff6e) bg_popup_window_pane_cp17

0xc7c9,	// (0x00053c7f) heading_pane_cp2

0x92f9,	// (0x000507af) listscroll_fast2_pane

0xe965,	// (0x00055e1b) grid_fast2_pane

0xe96f,	// (0x00055e25) listscroll_fast2_pane_g1

0xe977,	// (0x00055e2d) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x000570b0) listscroll_fast2_pane_g

0xaf76,	// (0x0005242c) scroll_pane_cp26

0xe981,	// (0x00055e37) cell_fast2_pane_ParamLimits

0xe981,	// (0x00055e37) cell_fast2_pane

0xe996,	// (0x00055e4c) cell_fast2_pane_g1

0xe99f,	// (0x00055e55) cell_fast2_pane_g2

0xe9a8,	// (0x00055e5e) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x000570b5) cell_fast2_pane_g

0x933b,	// (0x000507f1) grid_highlight_pane_cp9

0x9350,	// (0x00050806) main_eswt_pane_ParamLimits

0x9350,	// (0x00050806) main_eswt_pane

0xe952,	// (0x00055e08) list_single_text_info_pane

0xe9b0,	// (0x00055e66) eswt_ctrl_button_pane

0xe9b0,	// (0x00055e66) eswt_ctrl_canvas_pane

0xe9b8,	// (0x00055e6e) eswt_ctrl_combo_pane

0xe9b0,	// (0x00055e66) eswt_ctrl_default_pane

0xe9b0,	// (0x00055e66) eswt_ctrl_label_pane

0xe9c0,	// (0x00055e76) eswt_ctrl_wait_pane

0xe9c8,	// (0x00055e7e) eswt_shell_pane

0x8ab8,	// (0x0004ff6e) listscroll_eswt_app_pane

0xe9e8,	// (0x00055e9e) popup_eswt_tasktip_window_ParamLimits

0xe9e8,	// (0x00055e9e) popup_eswt_tasktip_window

0xc510,	// (0x000539c6) bg_popup_window_pane_cp18

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_ParamLimits

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1

0xea06,	// (0x00055ebc) eswt_control_pane_g2_ParamLimits

0xea06,	// (0x00055ebc) eswt_control_pane_g2

0xea13,	// (0x00055ec9) eswt_control_pane_g3_ParamLimits

0xea13,	// (0x00055ec9) eswt_control_pane_g3

0xea20,	// (0x00055ed6) eswt_control_pane_g4_ParamLimits

0xea20,	// (0x00055ed6) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x000570bc) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x000570bc) eswt_control_pane_g

0xae57,	// (0x0005230d) bg_button_pane_ParamLimits

0xae57,	// (0x0005230d) bg_button_pane

0x9350,	// (0x00050806) common_borders_pane_copy2_ParamLimits

0x9350,	// (0x00050806) common_borders_pane_copy2

0xea2d,	// (0x00055ee3) control_button_pane_g1_ParamLimits

0xea2d,	// (0x00055ee3) control_button_pane_g1

0xea39,	// (0x00055eef) control_button_pane_g2_ParamLimits

0xea39,	// (0x00055eef) control_button_pane_g2

0xea45,	// (0x00055efb) control_button_pane_g3_ParamLimits

0xea45,	// (0x00055efb) control_button_pane_g3

0x0002,

0xfc0f,	// (0x000570c5) control_button_pane_g_ParamLimits

0xfc0f,	// (0x000570c5) control_button_pane_g

0xea59,	// (0x00055f0f) control_button_pane_t1

0xea67,	// (0x00055f1d) control_button_pane_t2

0x0001,

0xfc16,	// (0x000570cc) control_button_pane_t

0xc418,	// (0x000538ce) bg_button_pane_g1

0xc428,	// (0x000538de) bg_button_pane_g2

0xc420,	// (0x000538d6) bg_button_pane_g3

0xc438,	// (0x000538ee) bg_button_pane_g4

0xc430,	// (0x000538e6) bg_button_pane_g5

0xc440,	// (0x000538f6) bg_button_pane_g6

0xc448,	// (0x000538fe) bg_button_pane_g7

0xc458,	// (0x0005390e) bg_button_pane_g8

0xc450,	// (0x00053906) bg_button_pane_g9

0x0008,

0xf870,	// (0x00056d26) bg_button_pane_g

0xe267,	// (0x0005571d) common_borders_pane_ParamLimits

0xe267,	// (0x0005571d) common_borders_pane

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy1_ParamLimits

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy1

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy1_ParamLimits

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy1

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy1_ParamLimits

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy1

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy1_ParamLimits

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy1

0xe2a2,	// (0x00055758) bg_eswt_ctrl_canvas_pane_g1

0xe267,	// (0x0005571d) common_borders_pane_cp2_ParamLimits

0xe267,	// (0x0005571d) common_borders_pane_cp2

0xe267,	// (0x0005571d) common_borders_pane_cp3_ParamLimits

0xe267,	// (0x0005571d) common_borders_pane_cp3

0xea75,	// (0x00055f2b) separator_horizontal_pane

0xea7d,	// (0x00055f33) separator_vertical_pane

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy2_ParamLimits

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy2

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy2_ParamLimits

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy2

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy2_ParamLimits

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy2

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy2_ParamLimits

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy2

0x8ab8,	// (0x0004ff6e) common_borders_pane_cp4

0xea86,	// (0x00055f3c) separator_horizontal_pane_g1

0xea8f,	// (0x00055f45) separator_horizontal_pane_g2

0xea98,	// (0x00055f4e) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x000570d1) separator_horizontal_pane_g

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy3_ParamLimits

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy3

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy3_ParamLimits

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy3

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy3_ParamLimits

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy3

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy3_ParamLimits

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy3

0x8ab8,	// (0x0004ff6e) common_borders_pane_cp5

0xeaa1,	// (0x00055f57) separator_vertical_pane_g1

0xeaaa,	// (0x00055f60) separator_vertical_pane_g2

0xeab3,	// (0x00055f69) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x000570d8) separator_vertical_pane_g

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy4_ParamLimits

0xe9f9,	// (0x00055eaf) eswt_control_pane_g1_copy4

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy4_ParamLimits

0xea06,	// (0x00055ebc) eswt_control_pane_g2_copy4

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy4_ParamLimits

0xea13,	// (0x00055ec9) eswt_control_pane_g3_copy4

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy4_ParamLimits

0xea20,	// (0x00055ed6) eswt_control_pane_g4_copy4

0xa11b,	// (0x000515d1) eswt_ctrl_combo_button_pane

0xa123,	// (0x000515d9) eswt_ctrl_input_pane

0xa12b,	// (0x000515e1) popup_choice_list_window_cp70

0xa133,	// (0x000515e9) eswt_ctrl_input_pane_t1

0x8ab8,	// (0x0004ff6e) input_focus_pane_cp70

0xe267,	// (0x0005571d) bg_button_pane_cp70_ParamLimits

0xe267,	// (0x0005571d) bg_button_pane_cp70

0xa141,	// (0x000515f7) eswt_ctrl_combo_button_pane_g1

0xeabc,	// (0x00055f72) wait_bar_pane_cp70

0xc510,	// (0x000539c6) bg_popup_window_pane_cp70_ParamLimits

0xc510,	// (0x000539c6) bg_popup_window_pane_cp70

0xeac4,	// (0x00055f7a) popup_eswt_tasktip_window_t1

0xeada,	// (0x00055f90) wait_bar_pane_cp71_ParamLimits

0xeada,	// (0x00055f90) wait_bar_pane_cp71

0xeae6,	// (0x00055f9c) grid_eswt_app_pane

0xb6b9,	// (0x00052b6f) scroll_pane_cp70

0xa149,	// (0x000515ff) cell_eswt_app_pane_ParamLimits

0xa149,	// (0x000515ff) cell_eswt_app_pane

0xa173,	// (0x00051629) cell_eswt_app_pane_g1_ParamLimits

0xa173,	// (0x00051629) cell_eswt_app_pane_g1

0xa1a2,	// (0x00051658) cell_eswt_app_pane_g2_ParamLimits

0xa1a2,	// (0x00051658) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x000570df) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x000570df) cell_eswt_app_pane_g

0xa1cb,	// (0x00051681) cell_eswt_app_pane_t1_ParamLimits

0xa1cb,	// (0x00051681) cell_eswt_app_pane_t1

0xeaef,	// (0x00055fa5) grid_highlight_pane_cp70_ParamLimits

0xeaef,	// (0x00055fa5) grid_highlight_pane_cp70

0xbd7f,	// (0x00053235) set_content_pane_g1

0xc08f,	// (0x00053545) status_small_volume_pane

0x1c9d,	// (0x00049153) status_small_volume_pane_g1

0x1ca5,	// (0x0004915b) volume_small2_pane

0x1cae,	// (0x00049164) volume_small2_pane_g1

0x1cb7,	// (0x0004916d) volume_small2_pane_g2

0x1cc0,	// (0x00049176) volume_small2_pane_g3

0x1cc9,	// (0x0004917f) volume_small2_pane_g4

0x1cd2,	// (0x00049188) volume_small2_pane_g5

0x1cdb,	// (0x00049191) volume_small2_pane_g6

0x1ce4,	// (0x0004919a) volume_small2_pane_g7

0x1ced,	// (0x000491a3) volume_small2_pane_g8

0x1cf6,	// (0x000491ac) volume_small2_pane_g9

0x1cff,	// (0x000491b5) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x000570e4) volume_small2_pane_g

0xe542,	// (0x000559f8) fep_vkb_top_text_pane_g1_ParamLimits

0xa0a8,	// (0x0005155e) fep_vkb_top_text_pane_t1_ParamLimits

0xe71a,	// (0x00055bd0) popup_preview_fixed_window_g3_ParamLimits

0xe71a,	// (0x00055bd0) popup_preview_fixed_window_g3

0x9023,	// (0x000504d9) popup_toolbar_trans_pane

0x9ad1,	// (0x00050f87) aid_height_set_list_ParamLimits

0xc32a,	// (0x000537e0) aid_size_parent_ParamLimits

0xafaf,	// (0x00052465) list_highlight_pane_cp2_ParamLimits

0xbd7f,	// (0x00053235) set_content_pane_g1_ParamLimits

0x8a25,	// (0x0004fedb) list_single_image_pane_ParamLimits

0x8a25,	// (0x0004fedb) list_single_image_pane

0xa1fd,	// (0x000516b3) aid_size_cell_image_ParamLimits

0xa1fd,	// (0x000516b3) aid_size_cell_image

0xa20a,	// (0x000516c0) grid_single_image_pane_ParamLimits

0xa20a,	// (0x000516c0) grid_single_image_pane

0xca16,	// (0x00053ecc) list_single_image_pane_g1_ParamLimits

0xca16,	// (0x00053ecc) list_single_image_pane_g1

0xeafb,	// (0x00055fb1) list_single_image_pane_g2_ParamLimits

0xeafb,	// (0x00055fb1) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x000570f9) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x000570f9) list_single_image_pane_g

0xd10a,	// (0x000545c0) list_single_image_pane_t1_ParamLimits

0xd10a,	// (0x000545c0) list_single_image_pane_t1

0xa218,	// (0x000516ce) cell_image_list_pane_ParamLimits

0xa218,	// (0x000516ce) cell_image_list_pane

0xa22e,	// (0x000516e4) cell_image_list_pane_g1

0xa237,	// (0x000516ed) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x000570fe) cell_image_list_pane_g

0xeb0f,	// (0x00055fc5) aid_size_cell_tb_trans_pane

0xae57,	// (0x0005230d) bg_tb_trans_pane

0xeb21,	// (0x00055fd7) grid_tb_trans_pane

0xc418,	// (0x000538ce) bg_tb_trans_pane_g1

0xc428,	// (0x000538de) bg_tb_trans_pane_g2

0xc420,	// (0x000538d6) bg_tb_trans_pane_g3

0xc438,	// (0x000538ee) bg_tb_trans_pane_g4

0xc430,	// (0x000538e6) bg_tb_trans_pane_g5

0xc458,	// (0x0005390e) bg_tb_trans_pane_g6

0xc450,	// (0x00053906) bg_tb_trans_pane_g7

0xc440,	// (0x000538f6) bg_tb_trans_pane_g8

0xc448,	// (0x000538fe) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x00057103) bg_tb_trans_pane_g

0xeb35,	// (0x00055feb) cell_toolbar_trans_pane_ParamLimits

0xeb35,	// (0x00055feb) cell_toolbar_trans_pane

0xe2a2,	// (0x00055758) cell_toolbar_trans_pane_g1

0x9e91,	// (0x00051347) list_form2_midp_pane_t1

0x9e9f,	// (0x00051355) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00056fa0) list_form2_midp_pane_t

0xdff5,	// (0x000554ab) scroll_pane_cp51_ParamLimits

0xe16c,	// (0x00055622) form2_midp_wait_pane_g1

0xe175,	// (0x0005562b) form2_midp_wait_pane_g2

0xe17e,	// (0x00055634) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00056fb5) form2_midp_wait_pane_g

0x8b28,	// (0x0004ffde) list_highlight_pane_cp21_ParamLimits

0xe1a6,	// (0x0005565c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe1b5,	// (0x0005566b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd69d,	// (0x00054b53) list_single_2graphic_im_pane_ParamLimits

0xd69d,	// (0x00054b53) list_single_2graphic_im_pane

0xa240,	// (0x000516f6) list_single_2graphic_im_pane_g1_ParamLimits

0xa240,	// (0x000516f6) list_single_2graphic_im_pane_g1

0xa251,	// (0x00051707) list_single_2graphic_im_pane_g2_ParamLimits

0xa251,	// (0x00051707) list_single_2graphic_im_pane_g2

0xa25d,	// (0x00051713) list_single_2graphic_im_pane_g3_ParamLimits

0xa25d,	// (0x00051713) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x00057116) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x00057116) list_single_2graphic_im_pane_g

0xa271,	// (0x00051727) list_single_2graphic_im_pane_t1_ParamLimits

0xa271,	// (0x00051727) list_single_2graphic_im_pane_t1

0xe726,	// (0x00055bdc) list_single_graphic_2heading_pane_fp_ParamLimits

0xe726,	// (0x00055bdc) list_single_graphic_2heading_pane_fp

0x3178,	// (0x0004a62e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3178,	// (0x0004a62e) list_single_graphic_2heading_pane_fp_g1

0xe73b,	// (0x00055bf1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe73b,	// (0x00055bf1) list_single_graphic_2heading_pane_fp_g2

0xae71,	// (0x00052327) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xae71,	// (0x00052327) list_single_graphic_2heading_pane_fp_g3

0xae7d,	// (0x00052333) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xae7d,	// (0x00052333) list_single_graphic_2heading_pane_fp_g4

0xe747,	// (0x00055bfd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe747,	// (0x00055bfd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0005703d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0005703d) list_single_graphic_2heading_pane_fp_g

0x3345,	// (0x0004a7fb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3345,	// (0x0004a7fb) list_single_graphic_2heading_pane_fp_t1

0x31b0,	// (0x0004a666) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x31b0,	// (0x0004a666) list_single_graphic_2heading_pane_fp_t2

0x335b,	// (0x0004a811) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x335b,	// (0x0004a811) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0005711f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0005711f) list_single_graphic_2heading_pane_fp_t

0xe32e,	// (0x000557e4) fep_hwr_write_pane_g5_ParamLimits

0xe32e,	// (0x000557e4) fep_hwr_write_pane_g5

0xe33a,	// (0x000557f0) fep_hwr_write_pane_g6_ParamLimits

0xe33a,	// (0x000557f0) fep_hwr_write_pane_g6

0xe9c8,	// (0x00055e7e) eswt_shell_pane_ParamLimits

0xc510,	// (0x000539c6) bg_popup_window_pane_cp18_ParamLimits

0xd5c8,	// (0x00054a7e) heading_pane_cp70

0xeac4,	// (0x00055f7a) popup_eswt_tasktip_window_t1_ParamLimits

0x90eb,	// (0x000505a1) aid_touch_tab_arrow_left

0x9101,	// (0x000505b7) aid_touch_tab_arrow_right

0x7fbe,	// (0x0004f474) title_pane_g3_ParamLimits

0x7fbe,	// (0x0004f474) title_pane_g3

0xae16,	// (0x000522cc) set_value_pane_g1

0x9023,	// (0x000504d9) popup_toolbar_trans_pane_ParamLimits

0xeb0f,	// (0x00055fc5) aid_size_cell_tb_trans_pane_ParamLimits

0xae57,	// (0x0005230d) bg_tb_trans_pane_ParamLimits

0xeb21,	// (0x00055fd7) grid_tb_trans_pane_ParamLimits

0x8c5b,	// (0x00050111) cont_note_pane_ParamLimits

0x8c5b,	// (0x00050111) cont_note_pane

0x9350,	// (0x00050806) cont_snote2_single_text_pane_ParamLimits

0x9350,	// (0x00050806) cont_snote2_single_text_pane

0x9350,	// (0x00050806) cont_snote2_single_graphic_pane_ParamLimits

0x9350,	// (0x00050806) cont_snote2_single_graphic_pane

0xc9e4,	// (0x00053e9a) cont_note_wait_pane_ParamLimits

0xc9e4,	// (0x00053e9a) cont_note_wait_pane

0xc9e4,	// (0x00053e9a) cont_note_image_pane_ParamLimits

0xc9e4,	// (0x00053e9a) cont_note_image_pane

0xeb67,	// (0x0005601d) popup_note2_window_g1_ParamLimits

0xeb67,	// (0x0005601d) popup_note2_window_g1

0xeb98,	// (0x0005604e) popup_note2_window_t1_ParamLimits

0xeb98,	// (0x0005604e) popup_note2_window_t1

0xebdd,	// (0x00056093) popup_note2_window_t2_ParamLimits

0xebdd,	// (0x00056093) popup_note2_window_t2

0xec22,	// (0x000560d8) popup_note2_window_t3_ParamLimits

0xec22,	// (0x000560d8) popup_note2_window_t3

0xec67,	// (0x0005611d) popup_note2_window_t4_ParamLimits

0xec67,	// (0x0005611d) popup_note2_window_t4

0x8cdf,	// (0x00050195) popup_note2_window_t5_ParamLimits

0x8cdf,	// (0x00050195) popup_note2_window_t5

0x0004,

0xfc70,	// (0x00057126) popup_note2_window_t_ParamLimits

0xfc70,	// (0x00057126) popup_note2_window_t

0xec96,	// (0x0005614c) popup_note2_image_window_g1_ParamLimits

0xec96,	// (0x0005614c) popup_note2_image_window_g1

0xeca2,	// (0x00056158) popup_note2_image_window_g2_ParamLimits

0xeca2,	// (0x00056158) popup_note2_image_window_g2

0x0001,

0x0015,	// (0x000474cb) popup_note2_image_window_g_ParamLimits

0x0015,	// (0x000474cb) popup_note2_image_window_g

0xecb4,	// (0x0005616a) popup_note2_image_window_t1_ParamLimits

0xecb4,	// (0x0005616a) popup_note2_image_window_t1

0xeccc,	// (0x00056182) popup_note2_image_window_t2_ParamLimits

0xeccc,	// (0x00056182) popup_note2_image_window_t2

0xece4,	// (0x0005619a) popup_note2_image_window_t3_ParamLimits

0xece4,	// (0x0005619a) popup_note2_image_window_t3

0x0002,

0x001a,	// (0x000474d0) popup_note2_image_window_t_ParamLimits

0x001a,	// (0x000474d0) popup_note2_image_window_t

0xc9f2,	// (0x00053ea8) popup_note2_wait_window_g1_ParamLimits

0xc9f2,	// (0x00053ea8) popup_note2_wait_window_g1

0xed00,	// (0x000561b6) popup_note2_wait_window_g2_ParamLimits

0xed00,	// (0x000561b6) popup_note2_wait_window_g2

0xca0a,	// (0x00053ec0) popup_note2_wait_window_g3_ParamLimits

0xca0a,	// (0x00053ec0) popup_note2_wait_window_g3

0x0002,

0xfc7b,	// (0x00057131) popup_note2_wait_window_g_ParamLimits

0xfc7b,	// (0x00057131) popup_note2_wait_window_g

0xed0c,	// (0x000561c2) popup_note2_wait_window_t1_ParamLimits

0xed0c,	// (0x000561c2) popup_note2_wait_window_t1

0xed2a,	// (0x000561e0) popup_note2_wait_window_t2_ParamLimits

0xed2a,	// (0x000561e0) popup_note2_wait_window_t2

0xed48,	// (0x000561fe) popup_note2_wait_window_t3_ParamLimits

0xed48,	// (0x000561fe) popup_note2_wait_window_t3

0xed5a,	// (0x00056210) popup_note2_wait_window_t4_ParamLimits

0xed5a,	// (0x00056210) popup_note2_wait_window_t4

0x0003,

0x0028,	// (0x000474de) popup_note2_wait_window_t_ParamLimits

0x0028,	// (0x000474de) popup_note2_wait_window_t

0xed6c,	// (0x00056222) wait_bar2_pane_ParamLimits

0xed6c,	// (0x00056222) wait_bar2_pane

0xed84,	// (0x0005623a) popup_snote2_single_text_window_g1_ParamLimits

0xed84,	// (0x0005623a) popup_snote2_single_text_window_g1

0xedac,	// (0x00056262) popup_snote2_single_text_window_t1_ParamLimits

0xedac,	// (0x00056262) popup_snote2_single_text_window_t1

0xedf8,	// (0x000562ae) popup_snote2_single_text_window_t2_ParamLimits

0xedf8,	// (0x000562ae) popup_snote2_single_text_window_t2

0xee44,	// (0x000562fa) popup_snote2_single_text_window_t3_ParamLimits

0xee44,	// (0x000562fa) popup_snote2_single_text_window_t3

0xee85,	// (0x0005633b) popup_snote2_single_text_window_t4_ParamLimits

0xee85,	// (0x0005633b) popup_snote2_single_text_window_t4

0xeebb,	// (0x00056371) popup_snote2_single_text_window_t5_ParamLimits

0xeebb,	// (0x00056371) popup_snote2_single_text_window_t5

0x0004,

0x0031,	// (0x000474e7) popup_snote2_single_text_window_t_ParamLimits

0x0031,	// (0x000474e7) popup_snote2_single_text_window_t

0xeee6,	// (0x0005639c) popup_snote2_single_graphic_window_g1_ParamLimits

0xeee6,	// (0x0005639c) popup_snote2_single_graphic_window_g1

0xef0e,	// (0x000563c4) popup_snote2_single_graphic_window_g2_ParamLimits

0xef0e,	// (0x000563c4) popup_snote2_single_graphic_window_g2

0x0001,

0x003c,	// (0x000474f2) popup_snote2_single_graphic_window_g_ParamLimits

0x003c,	// (0x000474f2) popup_snote2_single_graphic_window_g

0xef36,	// (0x000563ec) popup_snote2_single_graphic_window_t1_ParamLimits

0xef36,	// (0x000563ec) popup_snote2_single_graphic_window_t1

0xef82,	// (0x00056438) popup_snote2_single_graphic_window_t2_ParamLimits

0xef82,	// (0x00056438) popup_snote2_single_graphic_window_t2

0xee44,	// (0x000562fa) popup_snote2_single_graphic_window_t3_ParamLimits

0xee44,	// (0x000562fa) popup_snote2_single_graphic_window_t3

0xee85,	// (0x0005633b) popup_snote2_single_graphic_window_t4_ParamLimits

0xee85,	// (0x0005633b) popup_snote2_single_graphic_window_t4

0xeebb,	// (0x00056371) popup_snote2_single_graphic_window_t5_ParamLimits

0xeebb,	// (0x00056371) popup_snote2_single_graphic_window_t5

0x0004,

0x0041,	// (0x000474f7) popup_snote2_single_graphic_window_t_ParamLimits

0x0041,	// (0x000474f7) popup_snote2_single_graphic_window_t

0xdf8d,	// (0x00055443) clock_nsta_pane_cp2_t1

0xdf8d,	// (0x00055443) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00056f76) clock_nsta_pane_cp2_t

0x0d12,	// (0x000481c8) form_field_data_wide_pane_g1_ParamLimits

0xae71,	// (0x00052327) form_field_data_wide_pane_g2_ParamLimits

0xae71,	// (0x00052327) form_field_data_wide_pane_g2

0xae7d,	// (0x00052333) form_field_data_wide_pane_g3_ParamLimits

0xae7d,	// (0x00052333) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x00056b4e) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x00056b4e) form_field_data_wide_pane_g

0x9dca,	// (0x00051280) grid_touch_3_pane_ParamLimits

0x9dca,	// (0x00051280) grid_touch_3_pane

0xa2a2,	// (0x00051758) cell_touch_3_pane_ParamLimits

0xa2a2,	// (0x00051758) cell_touch_3_pane

0xe2a2,	// (0x00055758) cell_touch_3_pane_g1

0xe2a2,	// (0x00055758) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00056ffb) cell_touch_3_pane_g

0x8d11,	// (0x000501c7) cont_query_data_pane

0x8d19,	// (0x000501cf) cont_query_data_pane_cp1

0xefce,	// (0x00056484) button_value_adjust_pane_cp7

0xefd6,	// (0x0005648c) query_popup_pane_cp3

0xb8e8,	// (0x00052d9e) bg_popup_sub_pane_cp22_ParamLimits

0x10d8,	// (0x0004858e) navi_navi_volume_pane_cp2

0x10f3,	// (0x000485a9) popup_side_volume_key_window_g2

0x1102,	// (0x000485b8) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00056be4) popup_side_volume_key_window_g

0x111f,	// (0x000485d5) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00056beb) popup_side_volume_key_window_t

0xbc49,	// (0x000530ff) popup_side_volume_key_window_ParamLimits

0x71fa,	// (0x0004e6b0) list_double_graphic_pane_g4_ParamLimits

0x71fa,	// (0x0004e6b0) list_double_graphic_pane_g4

0x9c38,	// (0x000510ee) list_single_2heading_msg_pane_ParamLimits

0x9c38,	// (0x000510ee) list_single_2heading_msg_pane

0x8a36,	// (0x0004feec) list_single_2heading_msg_pane_g1_ParamLimits

0x8a36,	// (0x0004feec) list_single_2heading_msg_pane_g1

0x9174,	// (0x0005062a) list_single_2heading_msg_pane_g2_ParamLimits

0x9174,	// (0x0005062a) list_single_2heading_msg_pane_g2

0x9187,	// (0x0005063d) list_single_2heading_msg_pane_g3_ParamLimits

0x9187,	// (0x0005063d) list_single_2heading_msg_pane_g3

0x9193,	// (0x00050649) list_single_2heading_msg_pane_g4_ParamLimits

0x9193,	// (0x00050649) list_single_2heading_msg_pane_g4

0x0003,

0xfc82,	// (0x00057138) list_single_2heading_msg_pane_g_ParamLimits

0xfc82,	// (0x00057138) list_single_2heading_msg_pane_g

0x7aa5,	// (0x0004ef5b) list_single_2heading_msg_pane_t1_ParamLimits

0x7aa5,	// (0x0004ef5b) list_single_2heading_msg_pane_t1

0x7acd,	// (0x0004ef83) list_single_2heading_msg_pane_t2_ParamLimits

0x7acd,	// (0x0004ef83) list_single_2heading_msg_pane_t2

0x8a42,	// (0x0004fef8) list_single_2heading_msg_pane_t3_ParamLimits

0x8a42,	// (0x0004fef8) list_single_2heading_msg_pane_t3

0x3440,	// (0x0004a8f6) list_single_2heading_msg_pane_t4_ParamLimits

0x3440,	// (0x0004a8f6) list_single_2heading_msg_pane_t4

0x0003,

0xfc8b,	// (0x00057141) list_single_2heading_msg_pane_t_ParamLimits

0xfc8b,	// (0x00057141) list_single_2heading_msg_pane_t

0x8ad6,	// (0x0004ff8c) title_pane_g4_ParamLimits

0x8ad6,	// (0x0004ff8c) title_pane_g4

0x0ee6,	// (0x0004839c) title_pane_stacon_g3_ParamLimits

0x0ee6,	// (0x0004839c) title_pane_stacon_g3

0xeb5b,	// (0x00056011) list_single_2graphic_im_pane_g4_ParamLimits

0xeb5b,	// (0x00056011) list_single_2graphic_im_pane_g4

0xd3ab,	// (0x00054861) popup_side_volume_key_window_cp

0xd8ce,	// (0x00054d84) main_idle_act2_pane_t1

0x14a1,	// (0x00048957) toolbar_button_pane_g10

0x832b,	// (0x0004f7e1) popup_toolbar_window_cp1

0xdf7e,	// (0x00055434) clock_nsta_pane_cp_t1

0xdf7e,	// (0x00055434) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00056f71) clock_nsta_pane_cp_t

0x10d8,	// (0x0004858e) navi_navi_volume_pane_cp2_ParamLimits

0x10e7,	// (0x0004859d) popup_side_volume_key_window_g1_ParamLimits

0x10f3,	// (0x000485a9) popup_side_volume_key_window_g2_ParamLimits

0x1102,	// (0x000485b8) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00056be4) popup_side_volume_key_window_g_ParamLimits

0x1909,	// (0x00048dbf) fep_hwr_aid_pane

0x19b0,	// (0x00048e66) bg_fep_hwr_top_pane_g4_ParamLimits

0xe2fe,	// (0x000557b4) fep_hwr_top_pane_g1_ParamLimits

0xe310,	// (0x000557c6) fep_hwr_top_pane_g2_ParamLimits

0x19d0,	// (0x00048e86) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00056fc6) fep_hwr_top_pane_g_ParamLimits

0x19e5,	// (0x00048e9b) fep_hwr_top_text_pane_ParamLimits

0xd16e,	// (0x00054624) aid_touch_tab_arrow_arrow_2

0xd177,	// (0x0005462d) aid_touch_tab_arrow_left_2

0x191d,	// (0x00048dd3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1954,	// (0x00048e0a) fep_hwr_prediction_pane

0xe3fd,	// (0x000558b3) fep_vkb_prediction_pane

0xa088,	// (0x0005153e) fep_vkb_side_pane_g3_ParamLimits

0xa088,	// (0x0005153e) fep_vkb_side_pane_g3

0x1b60,	// (0x00049016) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1bcc,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1bd9,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x00057075) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1d08,	// (0x000491be) fep_hwr_prediction_pane_g1

0x1d12,	// (0x000491c8) fep_hwr_prediction_pane_g2

0x1d1a,	// (0x000491d0) fep_hwr_prediction_pane_g3

0x1d22,	// (0x000491d8) fep_hwr_prediction_pane_g4

0x0003,

0xfc94,	// (0x0005714a) fep_hwr_prediction_pane_g

0xefe7,	// (0x0005649d) fep_vkb_prediction_pane_g1

0xeff1,	// (0x000564a7) fep_vkb_prediction_pane_g2

0xeff9,	// (0x000564af) fep_vkb_prediction_pane_g3

0xf001,	// (0x000564b7) fep_vkb_prediction_pane_g4

0x0003,

0x0067,	// (0x0004751d) fep_vkb_prediction_pane_g

0x1789,	// (0x00048c3f) slider_set_pane_g3

0x179d,	// (0x00048c53) slider_set_pane_g4

0x17b5,	// (0x00048c6b) slider_set_pane_g5

0x1789,	// (0x00048c3f) slider_set_pane_g6

0x17cb,	// (0x00048c81) slider_set_pane_g7

0xd653,	// (0x00054b09) slider_form_pane_g3

0xd65c,	// (0x00054b12) slider_form_pane_g4

0xd664,	// (0x00054b1a) slider_form_pane_g5

0xd653,	// (0x00054b09) slider_form_pane_g6

0x9c1c,	// (0x000510d2) slider_form_pane_g7

0xdb20,	// (0x00054fd6) slider_set_pane_vc_g3

0xdb29,	// (0x00054fdf) slider_set_pane_vc_g4

0xdb32,	// (0x00054fe8) slider_set_pane_vc_g5

0xdb20,	// (0x00054fd6) slider_set_pane_vc_g6

0xdb3b,	// (0x00054ff1) slider_set_pane_vc_g7

0xdb20,	// (0x00054fd6) slider_form_pane_vc_g1

0xdb29,	// (0x00054fdf) slider_form_pane_vc_g2

0xdb32,	// (0x00054fe8) slider_form_pane_vc_g3

0xdb20,	// (0x00054fd6) slider_form_pane_vc_g4

0xdcf4,	// (0x000551aa) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00056f4a) slider_form_pane_vc_g

0x8ab8,	// (0x0004ff6e) main_idle_act3_pane

0xf009,	// (0x000564bf) ai3_links_pane

0xa2ec,	// (0x000517a2) popup_ai3_data_window_ParamLimits

0xa2ec,	// (0x000517a2) popup_ai3_data_window

0x8ab8,	// (0x0004ff6e) grid_ai3_links_pane

0xa306,	// (0x000517bc) cell_ai3_links_pane_ParamLimits

0xa306,	// (0x000517bc) cell_ai3_links_pane

0xf012,	// (0x000564c8) bg_popup_sub_pane_cp11

0xf01f,	// (0x000564d5) cell_ai3_links_pane_g1

0x8ab8,	// (0x0004ff6e) bg_popup_sub_pane_cp12

0xf044,	// (0x000564fa) heading_ai3_data_pane

0xf04c,	// (0x00056502) list_ai3_gene_pane

0xf058,	// (0x0005650e) popup_ai3_data_window_g1

0xf060,	// (0x00056516) heading_ai3_data_pane_g1

0xf068,	// (0x0005651e) heading_ai3_data_pane_t1

0xf076,	// (0x0005652c) list_double_ai3_gene_pane_ParamLimits

0xf076,	// (0x0005652c) list_double_ai3_gene_pane

0xf083,	// (0x00056539) list_single_ai3_gene_pane_ParamLimits

0xf083,	// (0x00056539) list_single_ai3_gene_pane

0xe267,	// (0x0005571d) list_highlight_pane_cp7_ParamLimits

0xe267,	// (0x0005571d) list_highlight_pane_cp7

0xf090,	// (0x00056546) list_single_a13_gene_pane_t1_ParamLimits

0xf090,	// (0x00056546) list_single_a13_gene_pane_t1

0xf0a7,	// (0x0005655d) list_single_ai3_gene_pane_g1

0xf0b0,	// (0x00056566) list_single_ai3_gene_pane_g2

0x0001,

0x0070,	// (0x00047526) list_single_ai3_gene_pane_g

0xf0b8,	// (0x0005656e) list_double_ai3_gene_pane_g1_ParamLimits

0xf0b8,	// (0x0005656e) list_double_ai3_gene_pane_g1

0xf0c4,	// (0x0005657a) list_double_ai3_gene_pane_t1_ParamLimits

0xf0c4,	// (0x0005657a) list_double_ai3_gene_pane_t1

0xf0e0,	// (0x00056596) list_double_ai3_gene_pane_t2_ParamLimits

0xf0e0,	// (0x00056596) list_double_ai3_gene_pane_t2

0xf0f6,	// (0x000565ac) list_double_ai3_gene_pane_t3_ParamLimits

0xf0f6,	// (0x000565ac) list_double_ai3_gene_pane_t3

0x0002,

0x0075,	// (0x0004752b) list_double_ai3_gene_pane_t_ParamLimits

0x0075,	// (0x0004752b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3371,	// (0x0004a827) aid_size_min_col_2

0xa2d6,	// (0x0005178c) aid_size_min_msg_ParamLimits

0xa2d6,	// (0x0005178c) aid_size_min_msg

0xa09c,	// (0x00051552) fep_vkb_top_text_pane_g2_ParamLimits

0xa09c,	// (0x00051552) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00056ff6) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00056ff6) fep_vkb_top_text_pane_g

0x8ab8,	// (0x0004ff6e) main_hc_apps_shell_pane

0xf113,	// (0x000565c9) grid_hc_apps_pane_ParamLimits

0xf113,	// (0x000565c9) grid_hc_apps_pane

0xf122,	// (0x000565d8) list_hc_apps_pane

0xf12a,	// (0x000565e0) scroll_pane_cp37_ParamLimits

0xf12a,	// (0x000565e0) scroll_pane_cp37

0xa320,	// (0x000517d6) cell_hc_apps_pane_ParamLimits

0xa320,	// (0x000517d6) cell_hc_apps_pane

0xa3de,	// (0x00051894) cell_hc_apps_pane_g1_ParamLimits

0xa3de,	// (0x00051894) cell_hc_apps_pane_g1

0xf136,	// (0x000565ec) cell_hc_apps_pane_g2_ParamLimits

0xf136,	// (0x000565ec) cell_hc_apps_pane_g2

0xf152,	// (0x00056608) cell_hc_apps_pane_g3_ParamLimits

0xf152,	// (0x00056608) cell_hc_apps_pane_g3

0x0002,

0x007c,	// (0x00047532) cell_hc_apps_pane_g_ParamLimits

0x007c,	// (0x00047532) cell_hc_apps_pane_g

0xa40b,	// (0x000518c1) cell_hc_apps_pane_t1_ParamLimits

0xa40b,	// (0x000518c1) cell_hc_apps_pane_t1

0x8c5b,	// (0x00050111) grid_highlight_pane_cp10_ParamLimits

0x8c5b,	// (0x00050111) grid_highlight_pane_cp10

0xa449,	// (0x000518ff) list_single_hc_apps_pane_ParamLimits

0xa449,	// (0x000518ff) list_single_hc_apps_pane

0xa476,	// (0x0005192c) list_single_hc_apps_pane_g1

0x91ab,	// (0x00050661) list_single_hc_apps_pane_g2

0x0001,

0xfc9d,	// (0x00057153) list_single_hc_apps_pane_g

0x91c4,	// (0x0005067a) list_single_hc_apps_pane_g2_copy1

0x349a,	// (0x0004a950) list_single_hc_apps_pane_t1

0x8b28,	// (0x0004ffde) bg_set_opt_pane_cp_ParamLimits

0x06e9,	// (0x00047b9f) setting_slider_pane_t1_ParamLimits

0x0702,	// (0x00047bb8) setting_slider_pane_t2_ParamLimits

0x071c,	// (0x00047bd2) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00056a2c) setting_slider_pane_t_ParamLimits

0x0734,	// (0x00047bea) slider_set_pane_ParamLimits

0x1389,	// (0x0004883f) control_pane_g5_ParamLimits

0x1389,	// (0x0004883f) control_pane_g5

0xd60f,	// (0x00054ac5) slider_set_pane_g1_ParamLimits

0x177d,	// (0x00048c33) slider_set_pane_g2_ParamLimits

0x1789,	// (0x00048c3f) slider_set_pane_g3_ParamLimits

0x179d,	// (0x00048c53) slider_set_pane_g4_ParamLimits

0x17b5,	// (0x00048c6b) slider_set_pane_g5_ParamLimits

0x1789,	// (0x00048c3f) slider_set_pane_g6_ParamLimits

0x17cb,	// (0x00048c81) slider_set_pane_g7_ParamLimits

0xf96e,	// (0x00056e24) slider_set_pane_g_ParamLimits

0xbd2a,	// (0x000531e0) navi_icon_text_pane_ParamLimits

0x90b4,	// (0x0005056a) aid_fill_nsta_2_ParamLimits

0x90eb,	// (0x000505a1) aid_touch_tab_arrow_left_ParamLimits

0x9101,	// (0x000505b7) aid_touch_tab_arrow_right_ParamLimits

0x94d3,	// (0x00050989) clock_nsta_pane_ParamLimits

0xd150,	// (0x00054606) navi_icon_pane_g1_ParamLimits

0xd15c,	// (0x00054612) navi_text_pane_t1_ParamLimits

0xdfcf,	// (0x00055485) navi_icon_text_pane_g1_ParamLimits

0xdfdb,	// (0x00055491) navi_icon_text_pane_t1_ParamLimits

0xa476,	// (0x0005192c) list_single_hc_apps_pane_g1_ParamLimits

0x91ab,	// (0x00050661) list_single_hc_apps_pane_g2_ParamLimits

0xfc9d,	// (0x00057153) list_single_hc_apps_pane_g_ParamLimits

0x91c4,	// (0x0005067a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x349a,	// (0x0004a950) list_single_hc_apps_pane_t1_ParamLimits

0x7016,	// (0x0004e4cc) popup_toolbar2_fixed_window_ParamLimits

0x7016,	// (0x0004e4cc) popup_toolbar2_fixed_window

0x9019,	// (0x000504cf) popup_toolbar2_float_window

0x8ab8,	// (0x0004ff6e) bg_popup_sub_pane_cp27

0xf174,	// (0x0005662a) grid_toolbar2_float_pane

0x8ab8,	// (0x0004ff6e) bg_popup_sub_pane_cp26

0xf174,	// (0x0005662a) grid_toolbar2_fixed_pane

0xa48f,	// (0x00051945) cell_toolbar2_fixed_pane_ParamLimits

0xa48f,	// (0x00051945) cell_toolbar2_fixed_pane

0xa4aa,	// (0x00051960) cell_toolbar2_fixed_pane_g1

0xf17c,	// (0x00056632) toolbar2_fixed_button_pane

0xc418,	// (0x000538ce) toolbar2_fixed_button_pane_g1

0xc428,	// (0x000538de) toolbar2_fixed_button_pane_g2

0xc420,	// (0x000538d6) toolbar2_fixed_button_pane_g3

0xc438,	// (0x000538ee) toolbar2_fixed_button_pane_g4

0xc430,	// (0x000538e6) toolbar2_fixed_button_pane_g5

0xc440,	// (0x000538f6) toolbar2_fixed_button_pane_g6

0xc448,	// (0x000538fe) toolbar2_fixed_button_pane_g7

0xc458,	// (0x0005390e) toolbar2_fixed_button_pane_g8

0xc450,	// (0x00053906) toolbar2_fixed_button_pane_g9

0x0008,

0xf870,	// (0x00056d26) toolbar2_fixed_button_pane_g

0xf184,	// (0x0005663a) cell_toolbar2_float_pane_ParamLimits

0xf184,	// (0x0005663a) cell_toolbar2_float_pane

0xf195,	// (0x0005664b) cell_toolbar2_float_pane_g1

0xf17c,	// (0x00056632) toolbar2_fixed_button_pane_cp

0x9f76,	// (0x0005142c) fep_vkb_accented_list_pane_ParamLimits

0x9f76,	// (0x0005142c) fep_vkb_accented_list_pane

0x1b40,	// (0x00048ff6) bg_popup_fep_shadow_pane_g9

0xbe9e,	// (0x00053354) bg_popup_fep_shadow_pane_cp3

0xaf5d,	// (0x00052413) list_accented_list_pane

0xf19e,	// (0x00056654) list_single_accented_list_pane_ParamLimits

0xf19e,	// (0x00056654) list_single_accented_list_pane

0xbe9e,	// (0x00053354) list_highlight_pane_cp10

0xf1af,	// (0x00056665) list_single_accented_list_pane_t1

0x8f43,	// (0x000503f9) popup_slider_window_ParamLimits

0x8f43,	// (0x000503f9) popup_slider_window

0xefde,	// (0x00056494) aid_indentation_list_msg

0xa5a3,	// (0x00051a59) bg_popup_window_pane_cp19

0xf21b,	// (0x000566d1) popup_slider_window_g1

0xf237,	// (0x000566ed) popup_slider_window_g2

0xf253,	// (0x00056709) popup_slider_window_g3

0x0005,

0x0088,	// (0x0004753e) popup_slider_window_g

0xf26f,	// (0x00056725) popup_slider_window_t1

0xf2b5,	// (0x0005676b) small_volume_slider_vertical_pane

0xe2a2,	// (0x00055758) small_volume_slider_vertical_pane_g1

0xe2a2,	// (0x00055758) small_volume_slider_vertical_pane_g2

0xf2d1,	// (0x00056787) small_volume_slider_vertical_pane_g3

0x0002,

0x009a,	// (0x00047550) small_volume_slider_vertical_pane_g

0x6f84,	// (0x0004e43a) area_side_right_pane_ParamLimits

0x6f84,	// (0x0004e43a) area_side_right_pane

0x7b38,	// (0x0004efee) aid_size_side_button_ParamLimits

0x7b38,	// (0x0004efee) aid_size_side_button

0x7b51,	// (0x0004f007) grid_sctrl_middle_pane_ParamLimits

0x7b51,	// (0x0004f007) grid_sctrl_middle_pane

0x1d5e,	// (0x00049214) sctrl_sk_bottom_pane

0x1d6f,	// (0x00049225) sctrl_sk_top_pane

0x1d81,	// (0x00049237) aid_touch_sctrl_top

0x1d8e,	// (0x00049244) bg_sctrl_sk_pane_ParamLimits

0x1d8e,	// (0x00049244) bg_sctrl_sk_pane

0x1d9c,	// (0x00049252) sctrl_sk_top_pane_g1

0x1da9,	// (0x0004925f) sctrl_sk_top_pane_t1

0x1d81,	// (0x00049237) aid_touch_sctrl_bottom

0x1d8e,	// (0x00049244) bg_sctrl_sk_pane_cp_ParamLimits

0x1d8e,	// (0x00049244) bg_sctrl_sk_pane_cp

0x1dc4,	// (0x0004927a) sctrl_sk_bottom_pane_g1

0x1da9,	// (0x0004925f) sctrl_sk_bottom_pane_t1

0x7b6b,	// (0x0004f021) cell_sctrl_middle_pane_ParamLimits

0x7b6b,	// (0x0004f021) cell_sctrl_middle_pane

0x7b7c,	// (0x0004f032) aid_touch_sctrl_middle_ParamLimits

0x7b7c,	// (0x0004f032) aid_touch_sctrl_middle

0x7b89,	// (0x0004f03f) bg_sctrl_middle_pane_ParamLimits

0x7b89,	// (0x0004f03f) bg_sctrl_middle_pane

0x2431,	// (0x000498e7) cell_sctrl_middle_pane_g1_ParamLimits

0x2431,	// (0x000498e7) cell_sctrl_middle_pane_g1

0x7b97,	// (0x0004f04d) cell_sctrl_middle_pane_g2_ParamLimits

0x7b97,	// (0x0004f04d) cell_sctrl_middle_pane_g2

0x0001,

0xfca7,	// (0x0005715d) cell_sctrl_middle_pane_g_ParamLimits

0xfca7,	// (0x0005715d) cell_sctrl_middle_pane_g

0xc418,	// (0x000538ce) bg_sctrl_middle_pane_g1

0xc420,	// (0x000538d6) bg_sctrl_middle_pane_g2

0xc428,	// (0x000538de) bg_sctrl_middle_pane_g3

0xc430,	// (0x000538e6) bg_sctrl_middle_pane_g4

0xc438,	// (0x000538ee) bg_sctrl_middle_pane_g5

0xc440,	// (0x000538f6) bg_sctrl_middle_pane_g6

0xc448,	// (0x000538fe) bg_sctrl_middle_pane_g7

0xc450,	// (0x00053906) bg_sctrl_middle_pane_g8

0x0007,

0xfcac,	// (0x00057162) bg_sctrl_middle_pane_g

0xc458,	// (0x0005390e) bg_sctrl_middle_pane_g8_copy1

0xc418,	// (0x000538ce) bg_sctrl_sk_pane_g1

0xc428,	// (0x000538de) bg_sctrl_sk_pane_g2

0xc420,	// (0x000538d6) bg_sctrl_sk_pane_g3

0x0008,

0xf870,	// (0x00056d26) bg_sctrl_sk_pane_g

0x9944,	// (0x00050dfa) aid_size_touch_scroll_bar

0xc438,	// (0x000538ee) bg_sctrl_sk_pane_g4

0xc430,	// (0x000538e6) bg_sctrl_sk_pane_g5

0xc440,	// (0x000538f6) bg_sctrl_sk_pane_g6

0xc448,	// (0x000538fe) bg_sctrl_sk_pane_g7

0xc458,	// (0x0005390e) bg_sctrl_sk_pane_g8

0xc450,	// (0x00053906) bg_sctrl_sk_pane_g9

0xc130,	// (0x000535e6) popup_fep_china_hwr2_fs_candidate_window

0x8767,	// (0x0004fc1d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8767,	// (0x0004fc1d) popup_fep_china_hwr2_fs_control_window

0x1b60,	// (0x00049016) sctrl_sk_top_pane_g2

0x0001,

0xfca2,	// (0x00057158) sctrl_sk_top_pane_g

0xa65b,	// (0x00051b11) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa65b,	// (0x00051b11) aid_fep_china_hwr2_fs_cell

0xa66f,	// (0x00051b25) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa66f,	// (0x00051b25) bg_popup_fep_shadow_pane_cp4

0xa686,	// (0x00051b3c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa686,	// (0x00051b3c) bg_popup_fep_shadow_pane_cp5

0xa698,	// (0x00051b4e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa698,	// (0x00051b4e) popup_fep_china_hwr2_fs_control_bar_grid

0xa6ac,	// (0x00051b62) popup_fep_china_hwr2_fs_control_funtion_grid

0xf2da,	// (0x00056790) aid_fep_china_hwr2_fs_candi_cell

0x8ab8,	// (0x0004ff6e) bg_popup_fep_shadow_pane_cp6

0xf2e4,	// (0x0005679a) popup_fep_china_hwr2_fs_candidate_grid

0xa6b4,	// (0x00051b6a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa6b4,	// (0x00051b6a) cell_fep_china_hwr2_fs_funtion_grid

0xe2a2,	// (0x00055758) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf2ee,	// (0x000567a4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf2ee,	// (0x000567a4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf2fc,	// (0x000567b2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf2fc,	// (0x000567b2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcbd,	// (0x00057173) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcbd,	// (0x00057173) cell_fep_china_hwr2_fs_funtion_grid_g

0xa6cc,	// (0x00051b82) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa6cc,	// (0x00051b82) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa6e1,	// (0x00051b97) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa6e1,	// (0x00051b97) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x00b0,	// (0x00047566) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x00b0,	// (0x00047566) cell_fep_china_hwr2_fs_funtion_grid_t

0xf312,	// (0x000567c8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf31a,	// (0x000567d0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf322,	// (0x000567d8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x00b5,	// (0x0004756b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf32a,	// (0x000567e0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf32a,	// (0x000567e0) cell_fep_china_hwr2_fs_candidate_grid

0xf343,	// (0x000567f9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf34b,	// (0x00056801) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe2a2,	// (0x00055758) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe2a2,	// (0x00055758) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00056ffb) cell_fep_china_hwr2_fs_candidate_grid_g

0xf353,	// (0x00056809) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc247,	// (0x000536fd) clock_nsta_pane_cp_24_ParamLimits

0xc247,	// (0x000536fd) clock_nsta_pane_cp_24

0xc2af,	// (0x00053765) indicator_nsta_pane_cp_24_ParamLimits

0xc2af,	// (0x00053765) indicator_nsta_pane_cp_24

0xd036,	// (0x000544ec) heading_pane_g1

0x0001,

0xf8d5,	// (0x00056d8b) heading_pane_g

0xd75b,	// (0x00054c11) grid_sct_catagory_button_pane

0xc791,	// (0x00053c47) scroll_pane_cp5_ParamLimits

0xe001,	// (0x000554b7) button_value_adjust_pane_cp5_ParamLimits

0xe001,	// (0x000554b7) button_value_adjust_pane_cp5

0xe0bf,	// (0x00055575) form2_midp_time_pane_ParamLimits

0xf361,	// (0x00056817) cell_sct_catagory_button_pane_ParamLimits

0xf361,	// (0x00056817) cell_sct_catagory_button_pane

0xe267,	// (0x0005571d) bg_button_pane_cp01_ParamLimits

0xe267,	// (0x0005571d) bg_button_pane_cp01

0xe2a2,	// (0x00055758) cell_sct_catagory_button_pane_g1

0x8fbc,	// (0x00050472) popup_tb_extension_window

0xa6fd,	// (0x00051bb3) aid_size_cell_ext_ParamLimits

0xa6fd,	// (0x00051bb3) aid_size_cell_ext

0x9350,	// (0x00050806) bg_tb_trans_pane_cp1_ParamLimits

0x9350,	// (0x00050806) bg_tb_trans_pane_cp1

0xa723,	// (0x00051bd9) grid_tb_ext_pane_ParamLimits

0xa723,	// (0x00051bd9) grid_tb_ext_pane

0xa761,	// (0x00051c17) cell_tb_ext_pane_ParamLimits

0xa761,	// (0x00051c17) cell_tb_ext_pane

0xa789,	// (0x00051c3f) cell_tb_ext_pane_g1_ParamLimits

0xa789,	// (0x00051c3f) cell_tb_ext_pane_g1

0xf373,	// (0x00056829) cell_tb_ext_pane_t1

0x8c5b,	// (0x00050111) list_highlight_pane_cp11_ParamLimits

0x8c5b,	// (0x00050111) list_highlight_pane_cp11

0x061c,	// (0x00047ad2) popup_uni_indicator_window_ParamLimits

0x061c,	// (0x00047ad2) popup_uni_indicator_window

0xae57,	// (0x0005230d) bg_popup_sub_pane_cp14

0xf38e,	// (0x00056844) list_uniindi_pane

0xf39a,	// (0x00056850) uniindi_top_pane

0x8c5b,	// (0x00050111) bg_uniindi_top_pane

0xf3b9,	// (0x0005686f) uniindi_top_pane_g1

0xf3cf,	// (0x00056885) uniindi_top_pane_g2

0x0003,

0x00bc,	// (0x00047572) uniindi_top_pane_g

0xf3f9,	// (0x000568af) uniindi_top_pane_t1

0xf423,	// (0x000568d9) list_single_uniindi_pane_ParamLimits

0xf423,	// (0x000568d9) list_single_uniindi_pane

0xe2a2,	// (0x00055758) bg_uniindi_top_pane_g1

0xf436,	// (0x000568ec) list_single_uniindi_pane_g1

0xf449,	// (0x000568ff) list_single_uniindi_pane_t1

0x0492,	// (0x00047948) control_bg_pane

0xf46e,	// (0x00056924) bg_sctrl_sk_pane_cp1

0xf477,	// (0x0005692d) bg_sctrl_sk_pane_cp2

0xf480,	// (0x00056936) control_bg_pane_g1

0xf489,	// (0x0005693f) control_bg_pane_g2

0x0001,

0x00c5,	// (0x0004757b) control_bg_pane_g

0xdec0,	// (0x00055376) cell_indicator_nsta_pane_g1_ParamLimits

0x9df9,	// (0x000512af) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00056f5f) cell_indicator_nsta_pane_g_ParamLimits

0x314e,	// (0x0004a604) form2_midp_time_pane_t1_ParamLimits

0x86e4,	// (0x0004fb9a) main_idle_act4_pane_ParamLimits

0x86e4,	// (0x0004fb9a) main_idle_act4_pane

0x8fbc,	// (0x00050472) popup_tb_extension_window_ParamLimits

0xa748,	// (0x00051bfe) tb_ext_find_pane_ParamLimits

0xa748,	// (0x00051bfe) tb_ext_find_pane

0xf492,	// (0x00056948) ai_gene_pane_1_cp1

0xbf32,	// (0x000533e8) ai_gene_pane_2_cp1

0xf49a,	// (0x00056950) list_single_idle_plugin_calendar_pane

0xf4a3,	// (0x00056959) list_single_idle_plugin_notification_pane

0xf4ac,	// (0x00056962) list_single_idle_plugin_player_pane

0xa7a6,	// (0x00051c5c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa7a6,	// (0x00051c5c) list_single_idle_plugin_shortcut_pane

0xa7ce,	// (0x00051c84) main_idle_act4_pane_t1

0xa7e4,	// (0x00051c9a) main_idle_act4_pane_t2

0x0001,

0x00ca,	// (0x00047580) main_idle_act4_pane_t

0xa7fa,	// (0x00051cb0) middle_sk_idle_act4_pane_ParamLimits

0xa7fa,	// (0x00051cb0) middle_sk_idle_act4_pane

0xa816,	// (0x00051ccc) popup_clock_digital_analogue_window_cp2

0xa83e,	// (0x00051cf4) shortcut_wheel_idle_act4_pane_ParamLimits

0xa83e,	// (0x00051cf4) shortcut_wheel_idle_act4_pane

0xe2a2,	// (0x00055758) shortcut_wheel_idle_act4_pane_g1

0xe2a2,	// (0x00055758) shortcut_wheel_idle_act4_pane_g2

0xe2a2,	// (0x00055758) shortcut_wheel_idle_act4_pane_g3

0xe2a2,	// (0x00055758) shortcut_wheel_idle_act4_pane_g4

0xe2a2,	// (0x00055758) shortcut_wheel_idle_act4_pane_g5

0xf4b5,	// (0x0005696b) shortcut_wheel_idle_act4_pane_g6

0xf4bd,	// (0x00056973) shortcut_wheel_idle_act4_pane_g7

0xf4c5,	// (0x0005697b) shortcut_wheel_idle_act4_pane_g8

0xf4cd,	// (0x00056983) shortcut_wheel_idle_act4_pane_g9

0x0008,

0x00cf,	// (0x00047585) shortcut_wheel_idle_act4_pane_g

0x98b9,	// (0x00050d6f) middle_sk_idle_act4_pane_g1_ParamLimits

0x98b9,	// (0x00050d6f) middle_sk_idle_act4_pane_g1

0xa8bb,	// (0x00051d71) middle_sk_idle_act4_pane_g2_ParamLimits

0xa8bb,	// (0x00051d71) middle_sk_idle_act4_pane_g2

0x0001,

0xfccd,	// (0x00057183) middle_sk_idle_act4_pane_g_ParamLimits

0xfccd,	// (0x00057183) middle_sk_idle_act4_pane_g

0xa8d3,	// (0x00051d89) middle_sk_idle_act4_pane_t1_ParamLimits

0xa8d3,	// (0x00051d89) middle_sk_idle_act4_pane_t1

0xa902,	// (0x00051db8) grid_ai_shortcut_pane_ParamLimits

0xa902,	// (0x00051db8) grid_ai_shortcut_pane

0xa91f,	// (0x00051dd5) list_highlight_pane_cp16_ParamLimits

0xa91f,	// (0x00051dd5) list_highlight_pane_cp16

0xa92c,	// (0x00051de2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa92c,	// (0x00051de2) list_single_idle_plugin_shortcut_pane_g1

0xa938,	// (0x00051dee) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa938,	// (0x00051dee) list_single_idle_plugin_shortcut_pane_g2

0xa954,	// (0x00051e0a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa954,	// (0x00051e0a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x00f7,	// (0x000475ad) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x00f7,	// (0x000475ad) list_single_idle_plugin_shortcut_pane_g

0xa969,	// (0x00051e1f) cell_ai_shortcut_pane_ParamLimits

0xa969,	// (0x00051e1f) cell_ai_shortcut_pane

0xa97f,	// (0x00051e35) cell_ai_shortcut_pane_g1_ParamLimits

0xa97f,	// (0x00051e35) cell_ai_shortcut_pane_g1

0xf492,	// (0x00056948) ai_gene_pane_1_cp2

0xf4d5,	// (0x0005698b) ai_gene_pane_2_cp2

0xf4dd,	// (0x00056993) list_highlight_pane_cp15

0xf4e6,	// (0x0005699c) list_single_idle_plugin_calendar_pane_g1

0xf4dd,	// (0x00056993) list_highlight_pane_cp17

0xf4ee,	// (0x000569a4) list_single_idle_plugin_calendar_pane_g1_copy1

0xf4f6,	// (0x000569ac) list_single_idle_plugin_player_pane_g1

0xd95a,	// (0x00054e10) list_single_idle_plugin_player_pane_g2

0x0001,

0x00fe,	// (0x000475b4) list_single_idle_plugin_player_pane_g

0xf4fe,	// (0x000569b4) list_single_idle_plugin_player_pane_t1

0xf50c,	// (0x000569c2) list_single_idle_plugin_player_pane_t2

0xf51a,	// (0x000569d0) list_single_idle_plugin_player_pane_t3

0xf528,	// (0x000569de) list_single_idle_plugin_player_pane_t4

0x0003,

0x0103,	// (0x000475b9) list_single_idle_plugin_player_pane_t

0xf536,	// (0x000569ec) wait_bar_pane_cp15

0xf53e,	// (0x000569f4) grid_ai_notification_pane

0xd95a,	// (0x00054e10) list_single_idle_plugin_notification_pane_g1

0xa9a1,	// (0x00051e57) cell_ai_notification_pane_ParamLimits

0xa9a1,	// (0x00051e57) cell_ai_notification_pane

0xf547,	// (0x000569fd) cell_ai_notification_pane_g1

0xf54f,	// (0x00056a05) cell_ai_notification_pane_t1

0xa9ae,	// (0x00051e64) tb_ext_find_button_pane

0xa9b6,	// (0x00051e6c) tb_ext_find_pane_g1

0xa9be,	// (0x00051e74) tb_ext_find_pane_t1

0xb887,	// (0x00052d3d) tb_ext_find_button_pane_g1

0xf55d,	// (0x00056a13) tb_ext_find_button_pane_g2

0x0001,

0xfcd2,	// (0x00057188) tb_ext_find_button_pane_g

0xa7ce,	// (0x00051c84) main_idle_act4_pane_t1_ParamLimits

0xa7e4,	// (0x00051c9a) main_idle_act4_pane_t2_ParamLimits

0x00ca,	// (0x00047580) main_idle_act4_pane_t_ParamLimits

0xa816,	// (0x00051ccc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa82e,	// (0x00051ce4) sat_plugin_idle_act4_pane_ParamLimits

0xa82e,	// (0x00051ce4) sat_plugin_idle_act4_pane

0xa9cc,	// (0x00051e82) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa9cc,	// (0x00051e82) sat_plugin_idle_act4_pane_t1

0xa9e4,	// (0x00051e9a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa9e4,	// (0x00051e9a) sat_plugin_idle_act4_pane_t2

0xa9fc,	// (0x00051eb2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa9fc,	// (0x00051eb2) sat_plugin_idle_act4_pane_t3

0xaa14,	// (0x00051eca) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaa14,	// (0x00051eca) sat_plugin_idle_act4_pane_t4

0x0003,

0x0111,	// (0x000475c7) sat_plugin_idle_act4_pane_t_ParamLimits

0x0111,	// (0x000475c7) sat_plugin_idle_act4_pane_t

0x0557,	// (0x00047a0d) popup_battery_window_ParamLimits

0x0557,	// (0x00047a0d) popup_battery_window

0x8c5b,	// (0x00050111) bg_popup_sub_pane_cp25_ParamLimits

0x8c5b,	// (0x00050111) bg_popup_sub_pane_cp25

0x5314,	// (0x0004c7ca) popup_battery_window_g1_ParamLimits

0x5314,	// (0x0004c7ca) popup_battery_window_g1

0x5320,	// (0x0004c7d6) popup_battery_window_t1_ParamLimits

0x5320,	// (0x0004c7d6) popup_battery_window_t1

0x5332,	// (0x0004c7e8) popup_battery_window_t2_ParamLimits

0x5332,	// (0x0004c7e8) popup_battery_window_t2

0x0001,

0xfcd7,	// (0x0005718d) popup_battery_window_t_ParamLimits

0xfcd7,	// (0x0005718d) popup_battery_window_t

0x85ea,	// (0x0004faa0) midp_canvas_pane_ParamLimits

0x8645,	// (0x0004fafb) midp_keypad_pane_ParamLimits

0x8645,	// (0x0004fafb) midp_keypad_pane

0xafaf,	// (0x00052465) main_midp_pane_ParamLimits

0xdf9c,	// (0x00055452) signal_pane_g2_cp_ParamLimits

0xaa2c,	// (0x00051ee2) aid_size_cell_midp_keypad_ParamLimits

0xaa2c,	// (0x00051ee2) aid_size_cell_midp_keypad

0xaa4a,	// (0x00051f00) midp_keyp_game_grid_pane_ParamLimits

0xaa4a,	// (0x00051f00) midp_keyp_game_grid_pane

0xaa71,	// (0x00051f27) midp_keyp_rocker_pane_ParamLimits

0xaa71,	// (0x00051f27) midp_keyp_rocker_pane

0xaab2,	// (0x00051f68) midp_keyp_sk_left_pane_ParamLimits

0xaab2,	// (0x00051f68) midp_keyp_sk_left_pane

0xab06,	// (0x00051fbc) midp_keyp_sk_right_pane_ParamLimits

0xab06,	// (0x00051fbc) midp_keyp_sk_right_pane

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp03

0xab5a,	// (0x00052010) midp_keyp_sk_left_pane_g1

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp04

0xab5a,	// (0x00052010) midp_keyp_sk_right_pane_g1

0xe2a2,	// (0x00055758) midp_keyp_rocker_pane_g1

0xab63,	// (0x00052019) keyp_game_cell_pane_ParamLimits

0xab63,	// (0x00052019) keyp_game_cell_pane

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp02

0xab87,	// (0x0005203d) keyp_game_cell_pane_g1

0x6fc6,	// (0x0004e47c) popup_fep_vkb2_window_ParamLimits

0x6fc6,	// (0x0004e47c) popup_fep_vkb2_window

0x7ba3,	// (0x0004f059) aid_size_cell_vkb2_ParamLimits

0x7ba3,	// (0x0004f059) aid_size_cell_vkb2

0x7bd9,	// (0x0004f08f) popup_fep_vkb2_window_g1_ParamLimits

0x7bd9,	// (0x0004f08f) popup_fep_vkb2_window_g1

0x7c29,	// (0x0004f0df) vkb2_area_bottom_pane_ParamLimits

0x7c29,	// (0x0004f0df) vkb2_area_bottom_pane

0x7c7d,	// (0x0004f133) vkb2_area_keypad_pane_ParamLimits

0x7c7d,	// (0x0004f133) vkb2_area_keypad_pane

0x7cc5,	// (0x0004f17b) vkb2_area_top_pane_ParamLimits

0x7cc5,	// (0x0004f17b) vkb2_area_top_pane

0x7d4b,	// (0x0004f201) vkb2_top_entry_pane_ParamLimits

0x7d4b,	// (0x0004f201) vkb2_top_entry_pane

0x7d78,	// (0x0004f22e) vkb2_top_grid_left_pane_ParamLimits

0x7d78,	// (0x0004f22e) vkb2_top_grid_left_pane

0x7d98,	// (0x0004f24e) vkb2_top_grid_right_pane_ParamLimits

0x7d98,	// (0x0004f24e) vkb2_top_grid_right_pane

0x2030,	// (0x000494e6) vkb2_cell_keypad_pane_ParamLimits

0x2030,	// (0x000494e6) vkb2_cell_keypad_pane

0x7dde,	// (0x0004f294) vkb2_area_bottom_grid_pane_ParamLimits

0x7dde,	// (0x0004f294) vkb2_area_bottom_grid_pane

0x7e08,	// (0x0004f2be) vkb2_area_bottom_pane_g1_ParamLimits

0x7e08,	// (0x0004f2be) vkb2_area_bottom_pane_g1

0x7e2e,	// (0x0004f2e4) vkb2_area_bottom_pane_g2_ParamLimits

0x7e2e,	// (0x0004f2e4) vkb2_area_bottom_pane_g2

0x7e5f,	// (0x0004f315) vkb2_area_bottom_pane_g3_ParamLimits

0x7e5f,	// (0x0004f315) vkb2_area_bottom_pane_g3

0x0002,

0xfcdc,	// (0x00057192) vkb2_area_bottom_pane_g_ParamLimits

0xfcdc,	// (0x00057192) vkb2_area_bottom_pane_g

0x21da,	// (0x00049690) vkb2_top_cell_left_pane_ParamLimits

0x21da,	// (0x00049690) vkb2_top_cell_left_pane

0xab90,	// (0x00052046) vkb2_top_entry_pane_g1_ParamLimits

0xab90,	// (0x00052046) vkb2_top_entry_pane_g1

0xab9e,	// (0x00052054) vkb2_top_entry_pane_t1_ParamLimits

0xab9e,	// (0x00052054) vkb2_top_entry_pane_t1

0x54f6,	// (0x0004c9ac) vkb2_top_entry_pane_t2_ParamLimits

0x54f6,	// (0x0004c9ac) vkb2_top_entry_pane_t2

0x5528,	// (0x0004c9de) vkb2_top_entry_pane_t3_ParamLimits

0x5528,	// (0x0004c9de) vkb2_top_entry_pane_t3

0x0002,

0xfce3,	// (0x00057199) vkb2_top_entry_pane_t_ParamLimits

0xfce3,	// (0x00057199) vkb2_top_entry_pane_t

0x7ec9,	// (0x0004f37f) vkb2_top_grid_right_pane_g1_ParamLimits

0x7ec9,	// (0x0004f37f) vkb2_top_grid_right_pane_g1

0x223d,	// (0x000496f3) vkb2_top_grid_right_pane_g2_ParamLimits

0x223d,	// (0x000496f3) vkb2_top_grid_right_pane_g2

0x2255,	// (0x0004970b) vkb2_top_grid_right_pane_g3_ParamLimits

0x2255,	// (0x0004970b) vkb2_top_grid_right_pane_g3

0x7edf,	// (0x0004f395) vkb2_top_grid_right_pane_g4_ParamLimits

0x7edf,	// (0x0004f395) vkb2_top_grid_right_pane_g4

0x0003,

0xfcea,	// (0x000571a0) vkb2_top_grid_right_pane_g_ParamLimits

0xfcea,	// (0x000571a0) vkb2_top_grid_right_pane_g

0x2283,	// (0x00049739) vkb2_top_cell_left_pane_g1

0x229a,	// (0x00049750) vkb2_cell_keypad_pane_g1_ParamLimits

0x229a,	// (0x00049750) vkb2_cell_keypad_pane_g1

0x554c,	// (0x0004ca02) vkb2_cell_keypad_pane_t1_ParamLimits

0x554c,	// (0x0004ca02) vkb2_cell_keypad_pane_t1

0x22a8,	// (0x0004975e) vkb2_cell_bottom_grid_pane_ParamLimits

0x22a8,	// (0x0004975e) vkb2_cell_bottom_grid_pane

0x22e1,	// (0x00049797) vkb2_cell_bottom_grid_pane_g1

0xa85f,	// (0x00051d15) aid_call2_pane_cp02

0xa867,	// (0x00051d1d) aid_call_pane_cp02

0xa86f,	// (0x00051d25) clock_digital_number_pane_cp10

0xa877,	// (0x00051d2d) clock_digital_number_pane_cp11

0xa87f,	// (0x00051d35) clock_digital_number_pane_cp12

0xa887,	// (0x00051d3d) clock_digital_number_pane_cp13

0xa88f,	// (0x00051d45) clock_digital_separator_pane_cp10

0xb887,	// (0x00052d3d) popup_clock_digital_analogue_window_cp2_g1

0xb887,	// (0x00052d3d) popup_clock_digital_analogue_window_cp2_g2

0xa897,	// (0x00051d4d) popup_clock_digital_analogue_window_cp2_g3

0xb887,	// (0x00052d3d) popup_clock_digital_analogue_window_cp2_g4

0xa897,	// (0x00051d4d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfcc2,	// (0x00057178) popup_clock_digital_analogue_window_cp2_g

0xa89f,	// (0x00051d55) popup_clock_digital_analogue_window_cp2_t1

0xa8ad,	// (0x00051d63) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x00ed,	// (0x000475a3) popup_clock_digital_analogue_window_cp2_t

0xe2a2,	// (0x00055758) clock_digital_number_pane_cp10_g1

0xe2a2,	// (0x00055758) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00056ffb) clock_digital_number_pane_cp10_g

0xe2a2,	// (0x00055758) clock_digital_separator_pane_cp10_g1

0xe2a2,	// (0x00055758) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00056ffb) clock_digital_separator_pane_cp10_g

0xf3db,	// (0x00056891) uniindi_top_pane_g3

0xf3ec,	// (0x000568a2) uniindi_top_pane_g4

0x20bb,	// (0x00049571) vkb2_row_keypad_pane_ParamLimits

0x20bb,	// (0x00049571) vkb2_row_keypad_pane

0x22fd,	// (0x000497b3) vkb2_cell_t_keypad_pane_ParamLimits

0x22fd,	// (0x000497b3) vkb2_cell_t_keypad_pane

0x230d,	// (0x000497c3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x230d,	// (0x000497c3) vkb2_cell_t_keypad_pane_cp08

0x2320,	// (0x000497d6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2320,	// (0x000497d6) vkb2_cell_t_keypad_pane_cp09

0x2334,	// (0x000497ea) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2334,	// (0x000497ea) vkb2_cell_t_keypad_pane_cp01

0x2345,	// (0x000497fb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2345,	// (0x000497fb) vkb2_cell_t_keypad_pane_cp02

0x2356,	// (0x0004980c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2356,	// (0x0004980c) vkb2_cell_t_keypad_pane_cp03

0x2367,	// (0x0004981d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2367,	// (0x0004981d) vkb2_cell_t_keypad_pane_cp04

0x2378,	// (0x0004982e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2378,	// (0x0004982e) vkb2_cell_t_keypad_pane_cp05

0x2389,	// (0x0004983f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2389,	// (0x0004983f) vkb2_cell_t_keypad_pane_cp06

0x239a,	// (0x00049850) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x239a,	// (0x00049850) vkb2_cell_t_keypad_pane_cp07

0x23ab,	// (0x00049861) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x23ab,	// (0x00049861) vkb2_cell_t_keypad_pane_cp10

0x1b60,	// (0x00049016) vkb2_cell_t_keypad_pane_g1

0x5563,	// (0x0004ca19) vkb2_cell_t_keypad_pane_t1

0x0492,	// (0x00047948) popup_grid_graphic2_window

0xabd7,	// (0x0005208d) aid_size_cell_graphic2_ParamLimits

0xabd7,	// (0x0005208d) aid_size_cell_graphic2

0xac15,	// (0x000520cb) bg_popup_window_pane_cp21_ParamLimits

0xac15,	// (0x000520cb) bg_popup_window_pane_cp21

0xac23,	// (0x000520d9) graphic2_pages_pane_ParamLimits

0xac23,	// (0x000520d9) graphic2_pages_pane

0xac79,	// (0x0005212f) grid_graphic2_control_pane_ParamLimits

0xac79,	// (0x0005212f) grid_graphic2_control_pane

0xacc1,	// (0x00052177) grid_graphic2_pane_ParamLimits

0xacc1,	// (0x00052177) grid_graphic2_pane

0xad48,	// (0x000521fe) cell_graphic2_pane

0x8ab8,	// (0x0004ff6e) main_comp_mode_pane

0xf04c,	// (0x00056502) list_ai3_gene_pane_ParamLimits

0xa5a3,	// (0x00051a59) bg_popup_window_pane_cp19_ParamLimits

0xf1bd,	// (0x00056673) bg_touch_area_indi_pane_ParamLimits

0xf1bd,	// (0x00056673) bg_touch_area_indi_pane

0xf1d3,	// (0x00056689) bg_touch_area_indi_pane_cp01_ParamLimits

0xf1d3,	// (0x00056689) bg_touch_area_indi_pane_cp01

0xf1e9,	// (0x0005669f) bg_touch_area_indi_pane_cp02_ParamLimits

0xf1e9,	// (0x0005669f) bg_touch_area_indi_pane_cp02

0xf201,	// (0x000566b7) bg_touch_area_indi_pane_cp03_ParamLimits

0xf201,	// (0x000566b7) bg_touch_area_indi_pane_cp03

0xf21b,	// (0x000566d1) popup_slider_window_g1_ParamLimits

0xf237,	// (0x000566ed) popup_slider_window_g2_ParamLimits

0xf253,	// (0x00056709) popup_slider_window_g3_ParamLimits

0x0088,	// (0x0004753e) popup_slider_window_g_ParamLimits

0xf26f,	// (0x00056725) popup_slider_window_t1_ParamLimits

0xf2b5,	// (0x0005676b) small_volume_slider_vertical_pane_ParamLimits

0xad48,	// (0x000521fe) cell_graphic2_pane_ParamLimits

0xada5,	// (0x0005225b) bg_button_pane_cp10_ParamLimits

0xada5,	// (0x0005225b) bg_button_pane_cp10

0xadb8,	// (0x0005226e) bg_button_pane_cp11_ParamLimits

0xadb8,	// (0x0005226e) bg_button_pane_cp11

0xadcb,	// (0x00052281) graphic2_pages_pane_g1_ParamLimits

0xadcb,	// (0x00052281) graphic2_pages_pane_g1

0xade6,	// (0x0005229c) graphic2_pages_pane_g2_ParamLimits

0xade6,	// (0x0005229c) graphic2_pages_pane_g2

0x0001,

0x013b,	// (0x000475f1) graphic2_pages_pane_g_ParamLimits

0x013b,	// (0x000475f1) graphic2_pages_pane_g

0xb024,	// (0x000524da) graphic2_pages_pane_t1_ParamLimits

0xb024,	// (0x000524da) graphic2_pages_pane_t1

0xb03c,	// (0x000524f2) cell_graphic2_control_pane_ParamLimits

0xb03c,	// (0x000524f2) cell_graphic2_control_pane

0xb06e,	// (0x00052524) cell_graphic2_pane_g1_ParamLimits

0xb06e,	// (0x00052524) cell_graphic2_pane_g1

0x98c7,	// (0x00050d7d) cell_graphic2_pane_g2_ParamLimits

0x98c7,	// (0x00050d7d) cell_graphic2_pane_g2

0xb017,	// (0x000524cd) cell_graphic2_pane_g3_ParamLimits

0xb017,	// (0x000524cd) cell_graphic2_pane_g3

0x98d4,	// (0x00050d8a) cell_graphic2_pane_g4_ParamLimits

0x98d4,	// (0x00050d8a) cell_graphic2_pane_g4

0xb07b,	// (0x00052531) cell_graphic2_pane_g5_ParamLimits

0xb07b,	// (0x00052531) cell_graphic2_pane_g5

0x0004,

0xfcf3,	// (0x000571a9) cell_graphic2_pane_g_ParamLimits

0xfcf3,	// (0x000571a9) cell_graphic2_pane_g

0xb09b,	// (0x00052551) cell_graphic2_pane_t1_ParamLimits

0xb09b,	// (0x00052551) cell_graphic2_pane_t1

0xd02a,	// (0x000544e0) grid_highlight_pane_cp11_ParamLimits

0xd02a,	// (0x000544e0) grid_highlight_pane_cp11

0x8c5b,	// (0x00050111) bg_button_pane_cp05

0xb0d0,	// (0x00052586) cell_graphic2_control_pane_g1

0xe2a2,	// (0x00055758) bg_touch_area_indi_pane_g1

0x5833,	// (0x0004cce9) aid_cmod_rocker_key_size

0x583d,	// (0x0004ccf3) aid_cmode_itu_key_size

0x5847,	// (0x0004ccfd) main_cmode_video_pane

0x5851,	// (0x0004cd07) main_comp_mode_itu_pane

0x585d,	// (0x0004cd13) main_comp_mode_rocker_pane

0x5869,	// (0x0004cd1f) cell_cmode_rocker_pane_ParamLimits

0x5869,	// (0x0004cd1f) cell_cmode_rocker_pane

0x587b,	// (0x0004cd31) cell_cmode_itu_pane_ParamLimits

0x587b,	// (0x0004cd31) cell_cmode_itu_pane

0xae57,	// (0x0005230d) bg_button_pane_cp06_ParamLimits

0xae57,	// (0x0005230d) bg_button_pane_cp06

0xe435,	// (0x000558eb) cell_cmode_rocker_pane_g1_ParamLimits

0xe435,	// (0x000558eb) cell_cmode_rocker_pane_g1

0xf2ee,	// (0x000567a4) cell_cmode_rocker_pane_g2_ParamLimits

0xf2ee,	// (0x000567a4) cell_cmode_rocker_pane_g2

0x0001,

0xfd03,	// (0x000571b9) cell_cmode_rocker_pane_g_ParamLimits

0xfd03,	// (0x000571b9) cell_cmode_rocker_pane_g

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp07

0x5890,	// (0x0004cd46) cell_cmode_itu_pane_g1

0x5899,	// (0x0004cd4f) cell_cmode_itu_pane_t1

0x58a7,	// (0x0004cd5d) cell_cmode_itu_pane_t2

0x0001,

0xfd08,	// (0x000571be) cell_cmode_itu_pane_t

0xf45e,	// (0x00056914) aid_touch_ctrl_left

0xf466,	// (0x0005691c) aid_touch_ctrl_right

0x8ab8,	// (0x0004ff6e) compa_mode_pane

0xb0f6,	// (0x000525ac) aid_cmod_rocker_key_size_cp

0xb100,	// (0x000525b6) aid_cmode_itu_key_size_cp

0x58c9,	// (0x0004cd7f) compa_mode_pane_g1

0x58d1,	// (0x0004cd87) compa_mode_pane_g2

0x58d9,	// (0x0004cd8f) compa_mode_pane_g3

0x0002,

0xfd0d,	// (0x000571c3) compa_mode_pane_g

0xb10a,	// (0x000525c0) main_comp_mode_itu_pane_cp

0xb112,	// (0x000525c8) main_comp_mode_rocker_pane_cp

0xb11a,	// (0x000525d0) cell_cmode_itu_pane_cp_ParamLimits

0xb11a,	// (0x000525d0) cell_cmode_itu_pane_cp

0xb12f,	// (0x000525e5) cell_cmode_rocker_pane_cp_ParamLimits

0xb12f,	// (0x000525e5) cell_cmode_rocker_pane_cp

0xae57,	// (0x0005230d) bg_button_pane_cp06_cp_ParamLimits

0xae57,	// (0x0005230d) bg_button_pane_cp06_cp

0xe435,	// (0x000558eb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe435,	// (0x000558eb) cell_cmode_rocker_pane_g1_cp

0xe2a2,	// (0x00055758) cell_cmode_rocker_pane_g2_cp

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp07_cp

0xb141,	// (0x000525f7) cell_cmode_itu_pane_g1_cp

0xb14a,	// (0x00052600) cell_cmode_itu_pane_t1_cp

0xb14a,	// (0x00052600) cell_cmode_itu_pane_t2_cp

0x9c12,	// (0x000510c8) settings_code_pane_cp2

0x8b28,	// (0x0004ffde) bg_popup_window_pane_cp3_ParamLimits

0x92e1,	// (0x00050797) heading_pane_cp3_ParamLimits

0x92ed,	// (0x000507a3) listscroll_popup_graphic_pane_ParamLimits

0x1909,	// (0x00048dbf) fep_hwr_aid_pane_ParamLimits

0x1d81,	// (0x00049237) aid_touch_sctrl_top_ParamLimits

0x1d9c,	// (0x00049252) sctrl_sk_top_pane_g1_ParamLimits

0x1b60,	// (0x00049016) sctrl_sk_top_pane_g2_ParamLimits

0xfca2,	// (0x00057158) sctrl_sk_top_pane_g_ParamLimits

0x1da9,	// (0x0004925f) sctrl_sk_top_pane_t1_ParamLimits

0x1d81,	// (0x00049237) aid_touch_sctrl_bottom_ParamLimits

0x1da9,	// (0x0004925f) sctrl_sk_bottom_pane_t1_ParamLimits

0xf3a7,	// (0x0005685d) aid_area_touch_clock

0x7d0d,	// (0x0004f1c3) aid_vkb2_area_top_pane_cell_ParamLimits

0x7d0d,	// (0x0004f1c3) aid_vkb2_area_top_pane_cell

0x7db8,	// (0x0004f26e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7db8,	// (0x0004f26e) aid_vkb2_area_bottom_pane_cell

0x54ae,	// (0x0004c964) popup_char_count_window

0x5926,	// (0x0004cddc) popup_char_count_window_g1

0x592f,	// (0x0004cde5) popup_char_count_window_g2

0x5938,	// (0x0004cdee) popup_char_count_window_g3

0x0002,

0xfd14,	// (0x000571ca) popup_char_count_window_g

0x5941,	// (0x0004cdf7) popup_char_count_window_t1

0x1e58,	// (0x0004930e) popup_fep_char_preview_window_ParamLimits

0x1e58,	// (0x0004930e) popup_fep_char_preview_window

0x7d2d,	// (0x0004f1e3) vkb2_top_candi_pane_ParamLimits

0x7d2d,	// (0x0004f1e3) vkb2_top_candi_pane

0xb158,	// (0x0005260e) cell_vkb2_top_candi_pane_ParamLimits

0xb158,	// (0x0005260e) cell_vkb2_top_candi_pane

0x23c0,	// (0x00049876) bg_popup_fep_char_preview_window_ParamLimits

0x23c0,	// (0x00049876) bg_popup_fep_char_preview_window

0x23ce,	// (0x00049884) popup_fep_char_preview_window_t1_ParamLimits

0x23ce,	// (0x00049884) popup_fep_char_preview_window_t1

0x599c,	// (0x0004ce52) bg_popup_fep_char_preview_window_g1

0x59a4,	// (0x0004ce5a) bg_popup_fep_char_preview_window_g2

0x59ac,	// (0x0004ce62) bg_popup_fep_char_preview_window_g3

0x59b4,	// (0x0004ce6a) bg_popup_fep_char_preview_window_g4

0x59bc,	// (0x0004ce72) bg_popup_fep_char_preview_window_g5

0x2408,	// (0x000498be) bg_popup_fep_char_preview_window_g6

0x59c4,	// (0x0004ce7a) bg_popup_fep_char_preview_window_g7

0x59cc,	// (0x0004ce82) bg_popup_fep_char_preview_window_g8

0x59d4,	// (0x0004ce8a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd1b,	// (0x000571d1) bg_popup_fep_char_preview_window_g

0x1b60,	// (0x00049016) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1b60,	// (0x00049016) cell_vkb2_top_candi_pane_g1

0x1b6e,	// (0x00049024) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1b6e,	// (0x00049024) cell_vkb2_top_candi_pane_g2

0x540e,	// (0x0004c8c4) cell_vkb2_top_candi_pane_g3_ParamLimits

0x540e,	// (0x0004c8c4) cell_vkb2_top_candi_pane_g3

0x2410,	// (0x000498c6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2410,	// (0x000498c6) cell_vkb2_top_candi_pane_g4

0xe828,	// (0x00055cde) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe828,	// (0x00055cde) cell_vkb2_top_candi_pane_g5

0x2431,	// (0x000498e7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2431,	// (0x000498e7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd2e,	// (0x000571e4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd2e,	// (0x000571e4) cell_vkb2_top_candi_pane_g

0x243f,	// (0x000498f5) cell_vkb2_top_candi_pane_t1

0x1769,	// (0x00048c1f) aid_size_touch_slider_mark_ParamLimits

0x1769,	// (0x00048c1f) aid_size_touch_slider_mark

0xac5f,	// (0x00052115) grid_graphic2_catg_pane_ParamLimits

0xac5f,	// (0x00052115) grid_graphic2_catg_pane

0xad1b,	// (0x000521d1) popup_grid_graphic2_window_t1_ParamLimits

0xad1b,	// (0x000521d1) popup_grid_graphic2_window_t1

0xad31,	// (0x000521e7) popup_grid_graphic2_window_t2_ParamLimits

0xad31,	// (0x000521e7) popup_grid_graphic2_window_t2

0x0001,

0x0136,	// (0x000475ec) popup_grid_graphic2_window_t_ParamLimits

0x0136,	// (0x000475ec) popup_grid_graphic2_window_t

0x8c5b,	// (0x00050111) bg_button_pane_cp05_ParamLimits

0xb0d0,	// (0x00052586) cell_graphic2_control_pane_g1_ParamLimits

0xb1be,	// (0x00052674) cell_graphic2_catg_pane_ParamLimits

0xb1be,	// (0x00052674) cell_graphic2_catg_pane

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp12

0xb1d0,	// (0x00052686) cell_graphic2_catg_pane_g1

0xf373,	// (0x00056829) cell_tb_ext_pane_t1_ParamLimits

0x21fa,	// (0x000496b0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x21fa,	// (0x000496b0) vkb2_top_cell_right_narrow_pane

0x2212,	// (0x000496c8) vkb2_top_cell_right_wide_pane_ParamLimits

0x2212,	// (0x000496c8) vkb2_top_cell_right_wide_pane

0x18fb,	// (0x00048db1) bg_vkb2_func_pane_ParamLimits

0x18fb,	// (0x00048db1) bg_vkb2_func_pane

0x2283,	// (0x00049739) vkb2_top_cell_left_pane_g1_ParamLimits

0x18fb,	// (0x00048db1) bg_vkb2_fuc_pane_cp03_ParamLimits

0x18fb,	// (0x00048db1) bg_vkb2_fuc_pane_cp03

0x22e1,	// (0x00049797) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc420,	// (0x000538d6) bg_vkb2_func_pane_g1

0xc428,	// (0x000538de) bg_vkb2_func_pane_g2

0xc438,	// (0x000538ee) bg_vkb2_func_pane_g3

0xc430,	// (0x000538e6) bg_vkb2_func_pane_g4

0xc440,	// (0x000538f6) bg_vkb2_func_pane_g5

0xc448,	// (0x000538fe) bg_vkb2_func_pane_g6

0xc450,	// (0x00053906) bg_vkb2_func_pane_g7

0xc458,	// (0x0005390e) bg_vkb2_func_pane_g8

0xc418,	// (0x000538ce) bg_vkb2_func_pane_g9

0x0008,

0xfd3b,	// (0x000571f1) bg_vkb2_func_pane_g

0x18fb,	// (0x00048db1) bg_vkb2_fuc_pane_cp01_ParamLimits

0x18fb,	// (0x00048db1) bg_vkb2_fuc_pane_cp01

0x2283,	// (0x00049739) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2283,	// (0x00049739) vkb2_top_cell_right_wide_pane_g1

0x18fb,	// (0x00048db1) bg_vkb2_fuc_pane_cp02_ParamLimits

0x18fb,	// (0x00048db1) bg_vkb2_fuc_pane_cp02

0x22e1,	// (0x00049797) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x22e1,	// (0x00049797) vkb2_top_cell_right_narrow_pane_g1

0xa4e3,	// (0x00051999) aid_touch_area_decrease_ParamLimits

0xa4e3,	// (0x00051999) aid_touch_area_decrease

0xa517,	// (0x000519cd) aid_touch_area_increase_ParamLimits

0xa517,	// (0x000519cd) aid_touch_area_increase

0xa53f,	// (0x000519f5) aid_touch_area_mute_ParamLimits

0xa53f,	// (0x000519f5) aid_touch_area_mute

0xa56f,	// (0x00051a25) aid_touch_area_slider_ParamLimits

0xa56f,	// (0x00051a25) aid_touch_area_slider

0xa5af,	// (0x00051a65) popup_slider_window_g4_ParamLimits

0xa5af,	// (0x00051a65) popup_slider_window_g4

0xa5d7,	// (0x00051a8d) popup_slider_window_g5_ParamLimits

0xa5d7,	// (0x00051a8d) popup_slider_window_g5

0xa60b,	// (0x00051ac1) popup_slider_window_g6_ParamLimits

0xa60b,	// (0x00051ac1) popup_slider_window_g6

0xf29d,	// (0x00056753) popup_slider_window_t2_ParamLimits

0xf29d,	// (0x00056753) popup_slider_window_t2

0x0001,

0x0095,	// (0x0004754b) popup_slider_window_t_ParamLimits

0x0095,	// (0x0004754b) popup_slider_window_t

0xa627,	// (0x00051add) slider_pane_ParamLimits

0xa627,	// (0x00051add) slider_pane

0x59f7,	// (0x0004cead) slider_pane_g1_ParamLimits

0x59f7,	// (0x0004cead) slider_pane_g1

0x5a0b,	// (0x0004cec1) slider_pane_g2_ParamLimits

0x5a0b,	// (0x0004cec1) slider_pane_g2

0x5a21,	// (0x0004ced7) slider_pane_g3_ParamLimits

0x5a21,	// (0x0004ced7) slider_pane_g3

0x0003,

0xfd4e,	// (0x00057204) slider_pane_g_ParamLimits

0xfd4e,	// (0x00057204) slider_pane_g

0x9004,	// (0x000504ba) popup_tb_float_extension_window_ParamLimits

0x9004,	// (0x000504ba) popup_tb_float_extension_window

0x5a4d,	// (0x0004cf03) aid_size_cell_tb_float_ext

0x8ab8,	// (0x0004ff6e) bg_popup_sub_window_cp28

0x5a59,	// (0x0004cf0f) grid_tb_float_ext_pane

0x5a63,	// (0x0004cf19) cell_tb_float_ext_pane_ParamLimits

0x5a63,	// (0x0004cf19) cell_tb_float_ext_pane

0x5a7d,	// (0x0004cf33) cell_tb_float_ext_pane_g1

0x5a86,	// (0x0004cf3c) grid_highlight_pane_cp12

0x7a83,	// (0x0004ef39) cell_last_hwr_side_pane_ParamLimits

0x7a83,	// (0x0004ef39) cell_last_hwr_side_pane

0xe2a2,	// (0x00055758) cell_last_hwr_side_pane_g1

0x5a8f,	// (0x0004cf45) cell_last_hwr_side_pane_g2

0x0001,

0xfd57,	// (0x0005720d) cell_last_hwr_side_pane_g

0x7e94,	// (0x0004f34a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7e94,	// (0x0004f34a) vkb2_area_bottom_space_btn_pane

0x1b60,	// (0x00049016) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5563,	// (0x0004ca19) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x243f,	// (0x000498f5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x245e,	// (0x00049914) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x245e,	// (0x00049914) vkb2_area_bottom_space_btn_pane_g1

0x2498,	// (0x0004994e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2498,	// (0x0004994e) vkb2_area_bottom_space_btn_pane_g2

0x24ce,	// (0x00049984) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x24ce,	// (0x00049984) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd5c,	// (0x00057212) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd5c,	// (0x00057212) vkb2_area_bottom_space_btn_pane_g

0x19be,	// (0x00048e74) cel_fep_hwr_func_pane_ParamLimits

0x19be,	// (0x00048e74) cel_fep_hwr_func_pane

0x7a58,	// (0x0004ef0e) cell_hwr_side_button_pane_ParamLimits

0x7a58,	// (0x0004ef0e) cell_hwr_side_button_pane

0xf3a7,	// (0x0005685d) aid_area_touch_clock_ParamLimits

0x8c5b,	// (0x00050111) bg_uniindi_top_pane_ParamLimits

0xf3b9,	// (0x0005686f) uniindi_top_pane_g1_ParamLimits

0xf3cf,	// (0x00056885) uniindi_top_pane_g2_ParamLimits

0xf3db,	// (0x00056891) uniindi_top_pane_g3_ParamLimits

0xf3ec,	// (0x000568a2) uniindi_top_pane_g4_ParamLimits

0x00bc,	// (0x00047572) uniindi_top_pane_g_ParamLimits

0xf3f9,	// (0x000568af) uniindi_top_pane_t1_ParamLimits

0x8c5b,	// (0x00050111) bg_vkb2_func_pane_cp01_ParamLimits

0x8c5b,	// (0x00050111) bg_vkb2_func_pane_cp01

0x5a98,	// (0x0004cf4e) cel_fep_hwr_func_pane_g1_ParamLimits

0x5a98,	// (0x0004cf4e) cel_fep_hwr_func_pane_g1

0x8c5b,	// (0x00050111) bg_vkb2_func_pane_cp02_ParamLimits

0x8c5b,	// (0x00050111) bg_vkb2_func_pane_cp02

0x5a98,	// (0x0004cf4e) cell_hwr_side_button_pane_g1_ParamLimits

0x5a98,	// (0x0004cf4e) cell_hwr_side_button_pane_g1

0xc310,	// (0x000537c6) status_pane_g4_ParamLimits

0xc310,	// (0x000537c6) status_pane_g4

0xc348,	// (0x000537fe) status_pane_t1

0xe128,	// (0x000555de) form2_midp_gauge_slider_cont_pane

0xe130,	// (0x000555e6) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9ecc,	// (0x00051382) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ede,	// (0x00051394) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x00056fae) form2_midp_gauge_slider_pane_t_ParamLimits

0xe142,	// (0x000555f8) form2_midp_slider_pane_ParamLimits

0x1e18,	// (0x000492ce) aid_size_cell_func_vkb2_ParamLimits

0x1e18,	// (0x000492ce) aid_size_cell_func_vkb2

0x5a39,	// (0x0004ceef) slider_pane_g4_ParamLimits

0x5a39,	// (0x0004ceef) slider_pane_g4

0x7ef5,	// (0x0004f3ab) form2_midp_gauge_slider_pane_t2_cp01

0x7f03,	// (0x0004f3b9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7f03,	// (0x0004f3b9) form2_midp_gauge_slider_pane_t3_cp01

0x2543,	// (0x000499f9) form2_midp_slider_pane_cp01

0x8ab8,	// (0x0004ff6e) navi_smil_pane

0x5ac8,	// (0x0004cf7e) navi_smil_pane_g1

0x5ad0,	// (0x0004cf86) navi_smil_pane_t1

0x5aa6,	// (0x0004cf5c) form2_midp_slider_pane_g1

0x5aaf,	// (0x0004cf65) form2_midp_slider_pane_g2

0x5ab7,	// (0x0004cf6d) form2_midp_slider_pane_g3

0x5aa6,	// (0x0004cf5c) form2_midp_slider_pane_g4

0xb1d9,	// (0x0005268f) form2_midp_slider_pane_g5

0x0004,

0xfd65,	// (0x0005721b) form2_midp_slider_pane_g

0x2508,	// (0x000499be) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2508,	// (0x000499be) vkb2_area_bottom_space_btn_pane_g4

0x951e,	// (0x000509d4) lc0_navi_pane_ParamLimits

0x951e,	// (0x000509d4) lc0_navi_pane

0x9588,	// (0x00050a3e) lc0_stat_indi_pane_ParamLimits

0x9588,	// (0x00050a3e) lc0_stat_indi_pane

0x959d,	// (0x00050a53) ls0_title_pane_ParamLimits

0x959d,	// (0x00050a53) ls0_title_pane

0xae57,	// (0x0005230d) bg_popup_sub_pane_cp14_ParamLimits

0xf38e,	// (0x00056844) list_uniindi_pane_ParamLimits

0xf39a,	// (0x00056850) uniindi_top_pane_ParamLimits

0xf436,	// (0x000568ec) list_single_uniindi_pane_g1_ParamLimits

0xf449,	// (0x000568ff) list_single_uniindi_pane_t1_ParamLimits

0x7f20,	// (0x0004f3d6) lc0_stat_clock_pane_ParamLimits

0x7f20,	// (0x0004f3d6) lc0_stat_clock_pane

0xb1e4,	// (0x0005269a) lc0_stat_indi_pane_g1_ParamLimits

0xb1e4,	// (0x0005269a) lc0_stat_indi_pane_g1

0xb1f1,	// (0x000526a7) lc0_stat_indi_pane_g2_ParamLimits

0xb1f1,	// (0x000526a7) lc0_stat_indi_pane_g2

0x0001,

0xfd70,	// (0x00057226) lc0_stat_indi_pane_g_ParamLimits

0xfd70,	// (0x00057226) lc0_stat_indi_pane_g

0x7f2d,	// (0x0004f3e3) lc0_uni_indicator_pane_ParamLimits

0x7f2d,	// (0x0004f3e3) lc0_uni_indicator_pane

0xb1fe,	// (0x000526b4) ls0_title_pane_g1_ParamLimits

0xb1fe,	// (0x000526b4) ls0_title_pane_g1

0xb212,	// (0x000526c8) ls0_title_pane_t1_ParamLimits

0xb212,	// (0x000526c8) ls0_title_pane_t1

0x7f3a,	// (0x0004f3f0) lc0_uni_indicator_pane_g1_ParamLimits

0x7f3a,	// (0x0004f3f0) lc0_uni_indicator_pane_g1

0x5ade,	// (0x0004cf94) lc0_stat_clock_pane_t1

0x8ab8,	// (0x0004ff6e) main_ai5_pane

0x5aec,	// (0x0004cfa2) ai5_sk_pane_ParamLimits

0x5aec,	// (0x0004cfa2) ai5_sk_pane

0xb240,	// (0x000526f6) cell_ai5_widget_pane_ParamLimits

0xb240,	// (0x000526f6) cell_ai5_widget_pane

0x5af9,	// (0x0004cfaf) aid_size_cell_widget_grid

0x5b0d,	// (0x0004cfc3) bg_ai5_widget_pane_ParamLimits

0x5b0d,	// (0x0004cfc3) bg_ai5_widget_pane

0x5b57,	// (0x0004d00d) cell_ai5_widget_pane_g2

0x5b67,	// (0x0004d01d) cell_ai5_widget_pane_g3

0x5b86,	// (0x0004d03c) cell_ai5_widget_pane_g4

0x5b92,	// (0x0004d048) cell_ai5_widget_pane_g5

0x5b9e,	// (0x0004d054) cell_ai5_widget_pane_g6

0x5baa,	// (0x0004d060) cell_ai5_widget_pane_g7

0x5bf2,	// (0x0004d0a8) cell_ai5_widget_pane_t1_ParamLimits

0x5bf2,	// (0x0004d0a8) cell_ai5_widget_pane_t1

0x5c0f,	// (0x0004d0c5) cell_ai5_widget_pane_t2_ParamLimits

0x5c0f,	// (0x0004d0c5) cell_ai5_widget_pane_t2

0x5c27,	// (0x0004d0dd) cell_ai5_widget_pane_t3_ParamLimits

0x5c27,	// (0x0004d0dd) cell_ai5_widget_pane_t3

0x5c3f,	// (0x0004d0f5) cell_ai5_widget_pane_t4_ParamLimits

0x5c3f,	// (0x0004d0f5) cell_ai5_widget_pane_t4

0x5c59,	// (0x0004d10f) cell_ai5_widget_pane_t5_ParamLimits

0x5c59,	// (0x0004d10f) cell_ai5_widget_pane_t5

0x5c78,	// (0x0004d12e) cell_ai5_widget_pane_t6_ParamLimits

0x5c78,	// (0x0004d12e) cell_ai5_widget_pane_t6

0x5c8a,	// (0x0004d140) cell_ai5_widget_pane_t7_ParamLimits

0x5c8a,	// (0x0004d140) cell_ai5_widget_pane_t7

0x5ca3,	// (0x0004d159) cell_ai5_widget_pane_t8_ParamLimits

0x5ca3,	// (0x0004d159) cell_ai5_widget_pane_t8

0x0009,

0xfd8a,	// (0x00057240) cell_ai5_widget_pane_t_ParamLimits

0xfd8a,	// (0x00057240) cell_ai5_widget_pane_t

0x5cef,	// (0x0004d1a5) grid_ai5_widget_pane

0xae57,	// (0x0005230d) highlight_cell_ai5_widget_pane_ParamLimits

0xae57,	// (0x0005230d) highlight_cell_ai5_widget_pane

0xb2aa,	// (0x00052760) ai5_sk_left_pane

0xb2b4,	// (0x0005276a) ai5_sk_middle_pane

0xb2be,	// (0x00052774) ai5_sk_right_pane

0x5d07,	// (0x0004d1bd) bg_ai5_widget_pane_g1_ParamLimits

0x5d07,	// (0x0004d1bd) bg_ai5_widget_pane_g1

0x5d13,	// (0x0004d1c9) bg_ai5_widget_pane_g2_ParamLimits

0x5d13,	// (0x0004d1c9) bg_ai5_widget_pane_g2

0x5d1f,	// (0x0004d1d5) bg_ai5_widget_pane_g3_ParamLimits

0x5d1f,	// (0x0004d1d5) bg_ai5_widget_pane_g3

0x5d2b,	// (0x0004d1e1) bg_ai5_widget_pane_g4_ParamLimits

0x5d2b,	// (0x0004d1e1) bg_ai5_widget_pane_g4

0x5d37,	// (0x0004d1ed) bg_ai5_widget_pane_g5_ParamLimits

0x5d37,	// (0x0004d1ed) bg_ai5_widget_pane_g5

0x5d43,	// (0x0004d1f9) bg_ai5_widget_pane_g6_ParamLimits

0x5d43,	// (0x0004d1f9) bg_ai5_widget_pane_g6

0x5d4f,	// (0x0004d205) bg_ai5_widget_pane_g7_ParamLimits

0x5d4f,	// (0x0004d205) bg_ai5_widget_pane_g7

0x5d5b,	// (0x0004d211) bg_ai5_widget_pane_g8_ParamLimits

0x5d5b,	// (0x0004d211) bg_ai5_widget_pane_g8

0x5d67,	// (0x0004d21d) bg_ai5_widget_pane_g9_ParamLimits

0x5d67,	// (0x0004d21d) bg_ai5_widget_pane_g9

0x0008,

0xfd9f,	// (0x00057255) bg_ai5_widget_pane_g_ParamLimits

0xfd9f,	// (0x00057255) bg_ai5_widget_pane_g

0x5d9a,	// (0x0004d250) cell_shortcut_ai5_widget_pane_ParamLimits

0x5d9a,	// (0x0004d250) cell_shortcut_ai5_widget_pane

0x8b64,	// (0x0005001a) bg_cell_shortcut_ai5_widget_pane

0x5dab,	// (0x0004d261) cell_grid_ai5_widget_pane_g1

0x5db4,	// (0x0004d26a) highlight_cell_shortcut_ai5_widget_pane

0xc420,	// (0x000538d6) ai5_sk_left_pane_g1

0x5dbc,	// (0x0004d272) ai5_sk_left_pane_g2

0x5dc4,	// (0x0004d27a) ai5_sk_left_pane_g3

0x5dcc,	// (0x0004d282) ai5_sk_left_pane_g4

0x0003,

0xfdb2,	// (0x00057268) ai5_sk_left_pane_g

0x5dd4,	// (0x0004d28a) ai5_sk_left_pane_t1

0xc428,	// (0x000538de) ai5_sk_right_pane_g1

0x5de2,	// (0x0004d298) ai5_sk_right_pane_g2

0x5dea,	// (0x0004d2a0) ai5_sk_right_pane_g3

0x5df2,	// (0x0004d2a8) ai5_sk_right_pane_g4

0x0003,

0xfdbb,	// (0x00057271) ai5_sk_right_pane_g

0x5dfa,	// (0x0004d2b0) ai5_sk_right_pane_t1

0xc428,	// (0x000538de) ai5_sk_middle_pane_g1

0xc420,	// (0x000538d6) ai5_sk_middle_pane_g2

0xc440,	// (0x000538f6) ai5_sk_middle_pane_g3

0x5dea,	// (0x0004d2a0) ai5_sk_middle_pane_g4

0x5dc4,	// (0x0004d27a) ai5_sk_middle_pane_g5

0x5e08,	// (0x0004d2be) ai5_sk_middle_pane_g6

0xb2c8,	// (0x0005277e) ai5_sk_middle_pane_g7

0x0006,

0xfdc4,	// (0x0005727a) ai5_sk_middle_pane_g

0x90d3,	// (0x00050589) aid_touch_area_size_lc0_ParamLimits

0x90d3,	// (0x00050589) aid_touch_area_size_lc0

0x1b8f,	// (0x00049045) cell_hwr_candidate_pane_t1_ParamLimits

0xc232,	// (0x000536e8) aid_touch_navi_pane

0x9690,	// (0x00050b46) status_dt_navi_pane_ParamLimits

0x9690,	// (0x00050b46) status_dt_navi_pane

0x96a8,	// (0x00050b5e) status_dt_sta_pane_ParamLimits

0x96a8,	// (0x00050b5e) status_dt_sta_pane

0xb2d0,	// (0x00052786) dt_sta_controll_pane

0xb2dd,	// (0x00052793) dt_sta_indi_pane

0xb2ea,	// (0x000527a0) dt_sta_title_pane

0x8c5b,	// (0x00050111) bg_dt_sta_indi_pane_ParamLimits

0x8c5b,	// (0x00050111) bg_dt_sta_indi_pane

0x5e10,	// (0x0004d2c6) dt_sta_battery_pane

0x5e18,	// (0x0004d2ce) dt_sta_indi_pane_g1

0x5e21,	// (0x0004d2d7) dt_sta_indi_pane_g2

0x5e2a,	// (0x0004d2e0) dt_sta_indi_pane_g3

0x0002,

0xfdd3,	// (0x00057289) dt_sta_indi_pane_g

0x5e33,	// (0x0004d2e9) dt_sta_signal_pane

0xae57,	// (0x0005230d) bg_dt_sta_title_pane_ParamLimits

0xae57,	// (0x0005230d) bg_dt_sta_title_pane

0x5e3c,	// (0x0004d2f2) dt_sta_title_pane_g1

0x5e44,	// (0x0004d2fa) dt_sta_title_pane_t1_ParamLimits

0x5e44,	// (0x0004d2fa) dt_sta_title_pane_t1

0x8ab8,	// (0x0004ff6e) bg_dt_sta_control_pane

0x5e59,	// (0x0004d30f) dt_sta_controll_pane_g1

0x5e62,	// (0x0004d318) bg_dt_sta_title_pane_g1

0x5e6b,	// (0x0004d321) bg_dt_sta_title_pane_g2

0x5e74,	// (0x0004d32a) bg_dt_sta_title_pane_g3

0x0002,

0xfdda,	// (0x00057290) bg_dt_sta_title_pane_g

0xe2a2,	// (0x00055758) bg_dt_sta_indi_pane_g1

0x5e7d,	// (0x0004d333) dt_sta_signal_pane_g1

0x5e85,	// (0x0004d33b) dt_sta_signal_pane_g2

0x0001,

0xfde1,	// (0x00057297) dt_sta_signal_pane_g

0x5e8d,	// (0x0004d343) dt_sta_battery_pane_g1

0x5e96,	// (0x0004d34c) dt_sta_battery_pane_t1

0xe2a2,	// (0x00055758) bg_dt_sta_control_pane_g1

0xb90a,	// (0x00052dc0) fep_china_uni_eep_pane

0xb912,	// (0x00052dc8) fep_china_uni_entry_pane_ParamLimits

0xb922,	// (0x00052dd8) popup_fep_china_uni_window_g1_ParamLimits

0xb932,	// (0x00052de8) popup_fep_china_uni_window_g2_ParamLimits

0xb932,	// (0x00052de8) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00056bf0) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00056bf0) popup_fep_china_uni_window_g

0x5ea5,	// (0x0004d35b) fep_china_uni_eep_pane_g1

0x5ead,	// (0x0004d363) fep_china_uni_eep_pane_t1

0x5abf,	// (0x0004cf75) aid_touch_area_size_smil_player

0xc2e3,	// (0x00053799) lc0_clock_pane

0xc33c,	// (0x000537f2) status_pane_g5_ParamLimits

0xc33c,	// (0x000537f2) status_pane_g5

0x888a,	// (0x0004fd40) popup_keymap_window

0xc2fc,	// (0x000537b2) status_icon_pane

0x5b67,	// (0x0004d01d) cell_ai5_widget_pane_g3_ParamLimits

0x5b86,	// (0x0004d03c) cell_ai5_widget_pane_g4_ParamLimits

0x5b92,	// (0x0004d048) cell_ai5_widget_pane_g5_ParamLimits

0x5bb6,	// (0x0004d06c) cell_ai5_widget_pane_g8_ParamLimits

0x5bb6,	// (0x0004d06c) cell_ai5_widget_pane_g8

0x5bca,	// (0x0004d080) cell_ai5_widget_pane_g9_ParamLimits

0x5bca,	// (0x0004d080) cell_ai5_widget_pane_g9

0x5bde,	// (0x0004d094) cell_ai5_widget_pane_g10_ParamLimits

0x5bde,	// (0x0004d094) cell_ai5_widget_pane_g10

0x5ebc,	// (0x0004d372) status_icon_pane_g1

0x8ab8,	// (0x0004ff6e) bg_popup_sub_pane_cp13

0x5ec4,	// (0x0004d37a) popup_keymap_window_t1

0x868b,	// (0x0004fb41) control_pane_g6_ParamLimits

0x868b,	// (0x0004fb41) control_pane_g6

0x8698,	// (0x0004fb4e) control_pane_g7_ParamLimits

0x8698,	// (0x0004fb4e) control_pane_g7

0x86a5,	// (0x0004fb5b) control_pane_g8_ParamLimits

0x86a5,	// (0x0004fb5b) control_pane_g8

0xb2d0,	// (0x00052786) dt_sta_controll_pane_ParamLimits

0xb2dd,	// (0x00052793) dt_sta_indi_pane_ParamLimits

0xb2ea,	// (0x000527a0) dt_sta_title_pane_ParamLimits

0x994d,	// (0x00050e03) aid_size_touch_scroll_bar_cale

0x056b,	// (0x00047a21) popup_discreet_window_ParamLimits

0x056b,	// (0x00047a21) popup_discreet_window

0x700c,	// (0x0004e4c2) popup_sk_window

0xc9e4,	// (0x00053e9a) bg_popup_sub_pane_cp28_ParamLimits

0xc9e4,	// (0x00053e9a) bg_popup_sub_pane_cp28

0x5ed2,	// (0x0004d388) popup_discreet_window_g1_ParamLimits

0x5ed2,	// (0x0004d388) popup_discreet_window_g1

0x5ef2,	// (0x0004d3a8) popup_discreet_window_t1_ParamLimits

0x5ef2,	// (0x0004d3a8) popup_discreet_window_t1

0x5f10,	// (0x0004d3c6) popup_discreet_window_t2_ParamLimits

0x5f10,	// (0x0004d3c6) popup_discreet_window_t2

0x0002,

0xfde6,	// (0x0005729c) popup_discreet_window_t_ParamLimits

0xfde6,	// (0x0005729c) popup_discreet_window_t

0x257a,	// (0x00049a30) popup_sk_window_g1

0x2584,	// (0x00049a3a) popup_sk_window_g2

0x0001,

0xfded,	// (0x000572a3) popup_sk_window_g

0x258e,	// (0x00049a44) popup_sk_window_t1

0x259c,	// (0x00049a52) popup_sk_window_t1_copy1

0x5b57,	// (0x0004d00d) cell_ai5_widget_pane_g2_ParamLimits

0x5cb5,	// (0x0004d16b) cell_ai5_widget_pane_t9_ParamLimits

0x5cb5,	// (0x0004d16b) cell_ai5_widget_pane_t9

0x8ab8,	// (0x0004ff6e) main_fep_fshwr2_pane

0xb2fc,	// (0x000527b2) aid_fshwr2_btn_pane

0xb304,	// (0x000527ba) aid_fshwr2_syb_pane

0xb30c,	// (0x000527c2) aid_fshwr2_txt_pane

0xb314,	// (0x000527ca) fshwr2_func_candi_pane

0xb31e,	// (0x000527d4) fshwr2_hwr_syb_pane

0xb32c,	// (0x000527e2) fshwr2_icf_pane

0x8ab8,	// (0x0004ff6e) fshwr2_icf_bg_pane

0xb336,	// (0x000527ec) fshwr2_icf_pane_t1_ParamLimits

0xb336,	// (0x000527ec) fshwr2_icf_pane_t1

0xe2a2,	// (0x00055758) fshwr2_func_candi_pane_g1

0x5f76,	// (0x0004d42c) fshwr2_func_candi_row_pane_ParamLimits

0x5f76,	// (0x0004d42c) fshwr2_func_candi_row_pane

0xb34e,	// (0x00052804) cell_fshwr2_syb_pane_ParamLimits

0xb34e,	// (0x00052804) cell_fshwr2_syb_pane

0xe435,	// (0x000558eb) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe435,	// (0x000558eb) fshwr2_hwr_syb_pane_g1

0x8ab8,	// (0x0004ff6e) bg_popup_call_pane_cp01

0x5f87,	// (0x0004d43d) fshwr2_func_candi_cell_pane_ParamLimits

0x5f87,	// (0x0004d43d) fshwr2_func_candi_cell_pane

0x5fb8,	// (0x0004d46e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5fb8,	// (0x0004d46e) fshwr2_func_candi_cell_bg_pane

0x5fd2,	// (0x0004d488) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5fd2,	// (0x0004d488) fshwr2_func_candi_cell_pane_g1

0x5ffa,	// (0x0004d4b0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5ffa,	// (0x0004d4b0) fshwr2_func_candi_cell_pane_t1

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp08

0xbe9e,	// (0x00053354) cell_fshwr2_syb_bg_pane

0xb368,	// (0x0005281e) cell_fshwr2_syb_bg_pane_g1

0xb370,	// (0x00052826) cell_fshwr2_syb_bg_pane_t1

0xae57,	// (0x0005230d) main_tmo_pane

0xd434,	// (0x000548ea) uni_indicator_pane_g1_ParamLimits

0xd449,	// (0x000548ff) uni_indicator_pane_g2_ParamLimits

0xd45f,	// (0x00054915) uni_indicator_pane_g3_ParamLimits

0xd475,	// (0x0005492b) uni_indicator_pane_g4_ParamLimits

0xd475,	// (0x0005492b) uni_indicator_pane_g4

0xd489,	// (0x0005493f) uni_indicator_pane_g5_ParamLimits

0xd489,	// (0x0005493f) uni_indicator_pane_g5

0xd49d,	// (0x00054953) uni_indicator_pane_g6_ParamLimits

0xd49d,	// (0x00054953) uni_indicator_pane_g6

0xf92b,	// (0x00056de1) uni_indicator_pane_g_ParamLimits

0xa4bf,	// (0x00051975) popup_tmo_note_window_ParamLimits

0xa4bf,	// (0x00051975) popup_tmo_note_window

0x8ab8,	// (0x0004ff6e) fshwr2_bg_pane

0x5feb,	// (0x0004d4a1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5feb,	// (0x0004d4a1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfdf2,	// (0x000572a8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfdf2,	// (0x000572a8) fshwr2_func_candi_cell_pane_g

0xe2a2,	// (0x00055758) bg_popup_window_pane_cp01

0x600d,	// (0x0004d4c3) bg_popup_window_pane_g1_cp01

0x6016,	// (0x0004d4cc) bg_popup_window_pane_cp22_ParamLimits

0x6016,	// (0x0004d4cc) bg_popup_window_pane_cp22

0x6024,	// (0x0004d4da) listscroll_tmo_link_pane_ParamLimits

0x6024,	// (0x0004d4da) listscroll_tmo_link_pane

0x6064,	// (0x0004d51a) popup_tmo_note_window_g1_ParamLimits

0x6064,	// (0x0004d51a) popup_tmo_note_window_g1

0x6071,	// (0x0004d527) tmo_note_info_pane_ParamLimits

0x6071,	// (0x0004d527) tmo_note_info_pane

0xb37f,	// (0x00052835) list_tmo_note_info_pane_g1_ParamLimits

0xb37f,	// (0x00052835) list_tmo_note_info_pane_g1

0x608b,	// (0x0004d541) list_tmo_note_info_pane_g2_ParamLimits

0x608b,	// (0x0004d541) list_tmo_note_info_pane_g2

0x0001,

0xfdf7,	// (0x000572ad) list_tmo_note_info_pane_g_ParamLimits

0xfdf7,	// (0x000572ad) list_tmo_note_info_pane_g

0x60a7,	// (0x0004d55d) list_tmo_note_info_text_pane_ParamLimits

0x60a7,	// (0x0004d55d) list_tmo_note_info_text_pane

0x60e9,	// (0x0004d59f) list_tmo_link_pane

0x60f6,	// (0x0004d5ac) scroll_pane_cp20

0x6103,	// (0x0004d5b9) list_single_tmo_link_pane_ParamLimits

0x6103,	// (0x0004d5b9) list_single_tmo_link_pane

0x6113,	// (0x0004d5c9) list_single_tmo_link_pane_t1

0x6121,	// (0x0004d5d7) list_tmo_note_info_text_pane_t1_ParamLimits

0x6121,	// (0x0004d5d7) list_tmo_note_info_text_pane_t1

0x8360,	// (0x0004f816) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8360,	// (0x0004f816) aid_size_touch_scroll_bar_cp01

0x7532,	// (0x0004e9e8) aid_size_touch_slider_marker

0x6ffc,	// (0x0004e4b2) popup_settings_window_ParamLimits

0x6ffc,	// (0x0004e4b2) popup_settings_window

0x2d08,	// (0x0004a1be) popup_candi_list_indi_window

0xc232,	// (0x000536e8) aid_touch_navi_pane_ParamLimits

0x1d55,	// (0x0004920b) rs_clock_indi_pane

0x1d5e,	// (0x00049214) sctrl_sk_bottom_pane_ParamLimits

0x1d6f,	// (0x00049225) sctrl_sk_top_pane_ParamLimits

0x1e72,	// (0x00049328) popup_fep_tooltip_window

0x5af9,	// (0x0004cfaf) aid_size_cell_widget_grid_ParamLimits

0x5b4b,	// (0x0004d001) cell_ai5_widget_pane_g1_ParamLimits

0x5b4b,	// (0x0004d001) cell_ai5_widget_pane_g1

0x5b9e,	// (0x0004d054) cell_ai5_widget_pane_g6_ParamLimits

0x5baa,	// (0x0004d060) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfd75,	// (0x0005722b) cell_ai5_widget_pane_g_ParamLimits

0xfd75,	// (0x0005722b) cell_ai5_widget_pane_g

0x5cd9,	// (0x0004d18f) cell_ai5_widget_pane_t10_ParamLimits

0x5cd9,	// (0x0004d18f) cell_ai5_widget_pane_t10

0x5cef,	// (0x0004d1a5) grid_ai5_widget_pane_ParamLimits

0x5d73,	// (0x0004d229) cell_contacts_ai5_widget_pane_ParamLimits

0x5d73,	// (0x0004d229) cell_contacts_ai5_widget_pane

0x5f25,	// (0x0004d3db) popup_discreet_window_t3_ParamLimits

0x5f25,	// (0x0004d3db) popup_discreet_window_t3

0x5f62,	// (0x0004d418) popup_fshwr2_char_preview_window_ParamLimits

0x5f62,	// (0x0004d418) popup_fshwr2_char_preview_window

0xb396,	// (0x0005284c) tmo_note_info_pane_t1

0xb3ab,	// (0x00052861) tmo_note_info_pane_t2

0xb3c2,	// (0x00052878) tmo_note_info_pane_t3

0x60c5,	// (0x0004d57b) tmo_note_info_pane_t4

0x60d7,	// (0x0004d58d) tmo_note_info_pane_t5

0x0004,

0xfdfc,	// (0x000572b2) tmo_note_info_pane_t

0x60e9,	// (0x0004d59f) list_tmo_link_pane_ParamLimits

0x60f6,	// (0x0004d5ac) scroll_pane_cp20_ParamLimits

0x8ab8,	// (0x0004ff6e) bg_popup_fep_char_preview_window_cp01

0x613a,	// (0x0004d5f0) popup_fshwr2_char_preview_window_t1

0x6148,	// (0x0004d5fe) popup_candi_list_indi_window_g1

0x6151,	// (0x0004d607) bg_cell_contacts_ai5_widget_pane

0x615d,	// (0x0004d613) cell_contacts_ai5_widget_pane_g1

0x6171,	// (0x0004d627) cell_contacts_ai5_widget_pane_g2

0x6180,	// (0x0004d636) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe07,	// (0x000572bd) cell_contacts_ai5_widget_pane_g

0x6193,	// (0x0004d649) cell_contacts_ai5_widget_pane_t1

0xae57,	// (0x0005230d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb43c,	// (0x000528f2) settings_container_pane

0xbe9e,	// (0x00053354) listscroll_set_pane_copy1

0xdc68,	// (0x0005511e) scroll_pane_cp121_copy1

0x61a5,	// (0x0004d65b) set_content_pane_copy1

0xb448,	// (0x000528fe) aid_height_set_list_copy1_ParamLimits

0xb448,	// (0x000528fe) aid_height_set_list_copy1

0xc32a,	// (0x000537e0) aid_size_parent_copy1_ParamLimits

0xc32a,	// (0x000537e0) aid_size_parent_copy1

0xb454,	// (0x0005290a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb454,	// (0x0005290a) button_value_adjust_pane_cp6_copy1

0xafaf,	// (0x00052465) list_highlight_pane_cp2_copy1_ParamLimits

0xafaf,	// (0x00052465) list_highlight_pane_cp2_copy1

0xb468,	// (0x0005291e) list_set_pane_copy1_ParamLimits

0xb468,	// (0x0005291e) list_set_pane_copy1

0xb3d7,	// (0x0005288d) main_pane_set_t1_copy1_ParamLimits

0xb3d7,	// (0x0005288d) main_pane_set_t1_copy1

0xb411,	// (0x000528c7) main_pane_set_t2_copy1_ParamLimits

0xb411,	// (0x000528c7) main_pane_set_t2_copy1

0xbaea,	// (0x00052fa0) main_pane_set_t3_copy1

0xbaf8,	// (0x00052fae) main_pane_set_t4_copy1

0xb430,	// (0x000528e6) set_content_pane_g1_copy1_ParamLimits

0xb430,	// (0x000528e6) set_content_pane_g1_copy1

0xbb06,	// (0x00052fbc) setting_code_pane_copy1

0x61ad,	// (0x0004d663) setting_slider_graphic_pane_copy1

0x61ad,	// (0x0004d663) setting_slider_pane_copy1

0x61ad,	// (0x0004d663) setting_text_pane_copy1

0x61b7,	// (0x0004d66d) setting_volume_pane_copy1

0xbb10,	// (0x00052fc6) settings_code_pane_cp2_copy1

0xbb18,	// (0x00052fce) settings_code_pane_cp_copy1_ParamLimits

0xbb18,	// (0x00052fce) settings_code_pane_cp_copy1

0xbb2c,	// (0x00052fe2) volume_set_pane_copy1

0xbb34,	// (0x00052fea) volume_set_pane_g10_copy1

0xbb3c,	// (0x00052ff2) volume_set_pane_g1_copy1

0xbb44,	// (0x00052ffa) volume_set_pane_g2_copy1

0xbb4c,	// (0x00053002) volume_set_pane_g3_copy1

0xbb54,	// (0x0005300a) volume_set_pane_g4_copy1

0xbb5c,	// (0x00053012) volume_set_pane_g5_copy1

0xbb64,	// (0x0005301a) volume_set_pane_g6_copy1

0xbb6c,	// (0x00053022) volume_set_pane_g7_copy1

0xbb74,	// (0x0005302a) volume_set_pane_g8_copy1

0xbb7c,	// (0x00053032) volume_set_pane_g9_copy1

0x8b28,	// (0x0004ffde) bg_set_opt_pane_cp_copy1_ParamLimits

0x8b28,	// (0x0004ffde) bg_set_opt_pane_cp_copy1

0x61c0,	// (0x0004d676) setting_slider_pane_t1_copy1_ParamLimits

0x61c0,	// (0x0004d676) setting_slider_pane_t1_copy1

0xbb84,	// (0x0005303a) setting_slider_pane_t2_copy1_ParamLimits

0xbb84,	// (0x0005303a) setting_slider_pane_t2_copy1

0xbb9e,	// (0x00053054) setting_slider_pane_t3_copy1_ParamLimits

0xbb9e,	// (0x00053054) setting_slider_pane_t3_copy1

0xbbb6,	// (0x0005306c) slider_set_pane_copy1_ParamLimits

0xbbb6,	// (0x0005306c) slider_set_pane_copy1

0xaebe,	// (0x00052374) set_opt_bg_pane_g1_copy2

0xaec6,	// (0x0005237c) set_opt_bg_pane_g2_copy2

0x61de,	// (0x0004d694) set_opt_bg_pane_g3_copy2

0xaed6,	// (0x0005238c) set_opt_bg_pane_g4_copy2

0xaede,	// (0x00052394) set_opt_bg_pane_g5_copy2

0xaee6,	// (0x0005239c) set_opt_bg_pane_g6_copy2

0xbbcc,	// (0x00053082) set_opt_bg_pane_g7_copy2

0x61e8,	// (0x0004d69e) set_opt_bg_pane_g8_copy2

0x61f2,	// (0x0004d6a8) set_opt_bg_pane_g9_copy2

0x25aa,	// (0x00049a60) aid_size_touch_slider_mark_copy1_ParamLimits

0x25aa,	// (0x00049a60) aid_size_touch_slider_mark_copy1

0x61fc,	// (0x0004d6b2) slider_set_pane_g1_copy1

0x25be,	// (0x00049a74) slider_set_pane_g2_copy1

0x1789,	// (0x00048c3f) slider_set_pane_g3_copy1_ParamLimits

0x1789,	// (0x00048c3f) slider_set_pane_g3_copy1

0x179d,	// (0x00048c53) slider_set_pane_g4_copy1_ParamLimits

0x179d,	// (0x00048c53) slider_set_pane_g4_copy1

0x17b5,	// (0x00048c6b) slider_set_pane_g5_copy1_ParamLimits

0x17b5,	// (0x00048c6b) slider_set_pane_g5_copy1

0x1789,	// (0x00048c3f) slider_set_pane_g6_copy1_ParamLimits

0x1789,	// (0x00048c3f) slider_set_pane_g6_copy1

0x7f61,	// (0x0004f417) slider_set_pane_g7_copy1_ParamLimits

0x7f61,	// (0x0004f417) slider_set_pane_g7_copy1

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp2_copy1

0x6205,	// (0x0004d6bb) setting_slider_graphic_pane_g1_copy1

0xbbd4,	// (0x0005308a) setting_slider_graphic_pane_t1_copy1

0xbbe4,	// (0x0005309a) setting_slider_graphic_pane_t2_copy1

0xbbf4,	// (0x000530aa) slider_set_pane_cp_copy1

0x6216,	// (0x0004d6cc) input_focus_pane_cp1_copy1

0x621f,	// (0x0004d6d5) list_set_text_pane_copy1

0x6227,	// (0x0004d6dd) setting_text_pane_g1_copy1

0x0772,	// (0x00047c28) set_text_pane_t1_copy1

0x6216,	// (0x0004d6cc) input_focus_pane_cp2_copy1

0x6227,	// (0x0004d6dd) setting_code_pane_g1_copy1

0xbbfc,	// (0x000530b2) setting_code_pane_t1_copy1

0x85a8,	// (0x0004fa5e) list_set_graphic_pane_copy1

0x8acc,	// (0x0004ff82) bg_set_opt_pane_cp4_copy1

0x85ba,	// (0x0004fa70) list_set_graphic_pane_g1_copy1_ParamLimits

0x85ba,	// (0x0004fa70) list_set_graphic_pane_g1_copy1

0xbc0a,	// (0x000530c0) list_set_graphic_pane_g2_copy1

0x85d2,	// (0x0004fa88) list_set_graphic_pane_t1_copy1_ParamLimits

0x85d2,	// (0x0004fa88) list_set_graphic_pane_t1_copy1

0xe2a2,	// (0x00055758) rs_clock_indi_pane_g1

0x6230,	// (0x0004d6e6) rs_clock_indi_pane_t1

0x623e,	// (0x0004d6f4) rs_indi_pane

0x6246,	// (0x0004d6fc) rs_indi_pane_g1

0x624f,	// (0x0004d705) rs_indi_pane_g2

0x6258,	// (0x0004d70e) rs_indi_pane_g3

0x0002,

0xfe0e,	// (0x000572c4) rs_indi_pane_g

0xbe9e,	// (0x00053354) bg_popup_preview_window_pane_cp03

0x6261,	// (0x0004d717) popup_fep_tooltip_window_t1

0xeb8b,	// (0x00056041) popup_note2_window_g2_ParamLimits

0xeb8b,	// (0x00056041) popup_note2_window_g2

0x0001,

0x0005,	// (0x000474bb) popup_note2_window_g_ParamLimits

0x0005,	// (0x000474bb) popup_note2_window_g

0xf012,	// (0x000564c8) bg_popup_sub_pane_cp11_ParamLimits

0xf01f,	// (0x000564d5) cell_ai3_links_pane_g1_ParamLimits

0xf036,	// (0x000564ec) cell_ai3_links_pane_t1

0x0772,	// (0x00047c28) set_text_pane_t1_copy1_ParamLimits

0xbdbb,	// (0x00053271) cell_graphic_popup_pane_cp2_ParamLimits

0xbdbb,	// (0x00053271) cell_graphic_popup_pane_cp2

0x626f,	// (0x0004d725) cell_graphic_popup_pane_g1_cp2

0x932a,	// (0x000507e0) cell_graphic_popup_pane_g2_cp2

0x6277,	// (0x0004d72d) cell_graphic_popup_pane_g3_cp2

0x627f,	// (0x0004d735) cell_graphic_popup_pane_t2_cp2

0x933b,	// (0x000507f1) grid_highlight_pane_cp3_cp2

0xb663,	// (0x00052b19) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xae57,	// (0x0005230d) main_tmo_pane_ParamLimits

0xa4b3,	// (0x00051969) popup_tmo_big_image_note_window

0x5b3b,	// (0x0004cff1) cell_ai5_widget_list_pane

0x5b43,	// (0x0004cff9) cell_ai5_widget_lrg_icon_pane

0xb396,	// (0x0005284c) tmo_note_info_pane_t1_ParamLimits

0xb3ab,	// (0x00052861) tmo_note_info_pane_t2_ParamLimits

0xb3c2,	// (0x00052878) tmo_note_info_pane_t3_ParamLimits

0x60c5,	// (0x0004d57b) tmo_note_info_pane_t4_ParamLimits

0x60d7,	// (0x0004d58d) tmo_note_info_pane_t5_ParamLimits

0xfdfc,	// (0x000572b2) tmo_note_info_pane_t_ParamLimits

0xb43c,	// (0x000528f2) settings_container_pane_ParamLimits

0x620e,	// (0x0004d6c4) indicator_popup_pane_cp5

0x620e,	// (0x0004d6c4) indicator_popup_pane_cp6

0x85a8,	// (0x0004fa5e) list_set_graphic_pane_copy1_ParamLimits

0x8ab8,	// (0x0004ff6e) bg_popup_window_pane_cp23

0x628d,	// (0x0004d743) popup_tmo_big_image_note_window_g1

0x6297,	// (0x0004d74d) popup_tmo_big_image_note_window_t1

0x62a7,	// (0x0004d75d) popup_tmo_big_image_note_window_t2

0x62b7,	// (0x0004d76d) popup_tmo_big_image_note_window_t3

0x0002,

0xfe15,	// (0x000572cb) popup_tmo_big_image_note_window_t

0x62c7,	// (0x0004d77d) cell_ai5_widget_lrg_icon_pane_g1

0x62cf,	// (0x0004d785) cell_ai5_widget_lrg_icon_pane_t1

0x62dd,	// (0x0004d793) cell_ai5_widget_list_row_pane_ParamLimits

0x62dd,	// (0x0004d793) cell_ai5_widget_list_row_pane

0x62f6,	// (0x0004d7ac) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x62f6,	// (0x0004d7ac) cell_ai5_widget_list_row_pane_g1

0x6303,	// (0x0004d7b9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6303,	// (0x0004d7b9) cell_ai5_widget_list_row_pane_t1

0x631b,	// (0x0004d7d1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x631b,	// (0x0004d7d1) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe1c,	// (0x000572d2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe1c,	// (0x000572d2) cell_ai5_widget_list_row_pane_t

0x0492,	// (0x00047948) main_fep_vtchi_ss_pane

0x632d,	// (0x0004d7e3) popup_fep_char_pre_window

0x6335,	// (0x0004d7eb) popup_fep_ituss_window

0x634f,	// (0x0004d805) popup_fep_vkbss_window

0x636d,	// (0x0004d823) grid_vkbss_keypad_pane_ParamLimits

0x636d,	// (0x0004d823) grid_vkbss_keypad_pane

0x637d,	// (0x0004d833) ituss_keypad_pane

0x6393,	// (0x0004d849) aid_vkbss_key_offset_ParamLimits

0x6393,	// (0x0004d849) aid_vkbss_key_offset

0x639f,	// (0x0004d855) cell_vkbss_key_pane_ParamLimits

0x639f,	// (0x0004d855) cell_vkbss_key_pane

0x63b5,	// (0x0004d86b) bg_cell_vkbss_key_g1_ParamLimits

0x63b5,	// (0x0004d86b) bg_cell_vkbss_key_g1

0x63c1,	// (0x0004d877) cell_vkbss_key_3p_pane_ParamLimits

0x63c1,	// (0x0004d877) cell_vkbss_key_3p_pane

0x63db,	// (0x0004d891) cell_vkbss_key_g1_ParamLimits

0x63db,	// (0x0004d891) cell_vkbss_key_g1

0x63f5,	// (0x0004d8ab) cell_vkbss_key_t1_ParamLimits

0x63f5,	// (0x0004d8ab) cell_vkbss_key_t1

0x6420,	// (0x0004d8d6) cell_ituss_key_pane_ParamLimits

0x6420,	// (0x0004d8d6) cell_ituss_key_pane

0x6430,	// (0x0004d8e6) bg_cell_ituss_key_g1_ParamLimits

0x6430,	// (0x0004d8e6) bg_cell_ituss_key_g1

0x643c,	// (0x0004d8f2) cell_ituss_key_pane_g1_ParamLimits

0x643c,	// (0x0004d8f2) cell_ituss_key_pane_g1

0x6448,	// (0x0004d8fe) cell_ituss_key_pane_g2_ParamLimits

0x6448,	// (0x0004d8fe) cell_ituss_key_pane_g2

0x0001,

0xfe21,	// (0x000572d7) cell_ituss_key_pane_g_ParamLimits

0xfe21,	// (0x000572d7) cell_ituss_key_pane_g

0x6461,	// (0x0004d917) cell_ituss_key_t1_ParamLimits

0x6461,	// (0x0004d917) cell_ituss_key_t1

0x648f,	// (0x0004d945) cell_ituss_key_t2_ParamLimits

0x648f,	// (0x0004d945) cell_ituss_key_t2

0x64c0,	// (0x0004d976) cell_ituss_key_t3_ParamLimits

0x64c0,	// (0x0004d976) cell_ituss_key_t3

0x64f1,	// (0x0004d9a7) cell_ituss_key_t4_ParamLimits

0x64f1,	// (0x0004d9a7) cell_ituss_key_t4

0x0003,

0xfe26,	// (0x000572dc) cell_ituss_key_t_ParamLimits

0xfe26,	// (0x000572dc) cell_ituss_key_t

0x6522,	// (0x0004d9d8) cell_vkbss_key_3p_pane_g1

0x652a,	// (0x0004d9e0) cell_vkbss_key_3p_pane_g2

0x6532,	// (0x0004d9e8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe2f,	// (0x000572e5) cell_vkbss_key_3p_pane_g

0x8ab8,	// (0x0004ff6e) bg_popup_fep_char_preview_window_cp02

0x653a,	// (0x0004d9f0) popup_fep_char_pre_window_t1

0xb2a0,	// (0x00052756) main_ai5_sk_pane

0x6151,	// (0x0004d607) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x615d,	// (0x0004d613) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6171,	// (0x0004d627) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6180,	// (0x0004d636) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe07,	// (0x000572bd) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6193,	// (0x0004d649) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xae57,	// (0x0005230d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbc12,	// (0x000530c8) main_ai5_sk_pane_g1

0xc81d,	// (0x00053cd3) popup_query_code_window_g1

0x6344,	// (0x0004d7fa) popup_fep_vkb_icf_pane

0x6358,	// (0x0004d80e) popup_fep_vtchi_icf_pane

0xae57,	// (0x0005230d) bg_icf_pane

0x637d,	// (0x0004d833) list_vkb_icf_pane

0xae57,	// (0x0005230d) bg_icf_pane_cp01

0x6564,	// (0x0004da1a) vtchi_icf_list_pane

0x6574,	// (0x0004da2a) list_vkb_icf_pane_t1_ParamLimits

0x6574,	// (0x0004da2a) list_vkb_icf_pane_t1

0x658b,	// (0x0004da41) vtchi_icf_list_pane_t1_ParamLimits

0x658b,	// (0x0004da41) vtchi_icf_list_pane_t1

0x6335,	// (0x0004d7eb) popup_fep_ituss_window_ParamLimits

0x6358,	// (0x0004d80e) popup_fep_vtchi_icf_pane_ParamLimits

0x637d,	// (0x0004d833) ituss_keypad_pane_ParamLimits

0x6389,	// (0x0004d83f) ituss_sks_pane

0xae57,	// (0x0005230d) bg_icf_pane_ParamLimits

0x6549,	// (0x0004d9ff) icf_edit_indi_pane_ParamLimits

0x6549,	// (0x0004d9ff) icf_edit_indi_pane

0x637d,	// (0x0004d833) list_vkb_icf_pane_ParamLimits

0xae57,	// (0x0005230d) bg_icf_pane_cp01_ParamLimits

0x6558,	// (0x0004da0e) icf_edit_indi_pane_cp01_ParamLimits

0x6558,	// (0x0004da0e) icf_edit_indi_pane_cp01

0x656c,	// (0x0004da22) vtchi_query_pane

0xe435,	// (0x000558eb) icf_edit_indi_pane_g1_ParamLimits

0xe435,	// (0x000558eb) icf_edit_indi_pane_g1

0x65a7,	// (0x0004da5d) icf_edit_indi_pane_g2_ParamLimits

0x65a7,	// (0x0004da5d) icf_edit_indi_pane_g2

0x0001,

0xfe36,	// (0x000572ec) icf_edit_indi_pane_g_ParamLimits

0xfe36,	// (0x000572ec) icf_edit_indi_pane_g

0x65b3,	// (0x0004da69) icf_edit_indi_pane_t1

0x65c1,	// (0x0004da77) bg_input_focus_pane_cp042

0x9944,	// (0x00050dfa) vtchi_button_pane

0x65ca,	// (0x0004da80) vtchi_query_pane_t1

0x65d8,	// (0x0004da8e) vtchi_query_pane_t2

0x65e6,	// (0x0004da9c) vtchi_query_pane_t3

0x0002,

0xfe3b,	// (0x000572f1) vtchi_query_pane_t

0x8ab8,	// (0x0004ff6e) bg_button_pane_cp13

0x65f4,	// (0x0004daaa) vtchi_button_pane_g1

0x65fc,	// (0x0004dab2) ituss_sks_pane_g1

0x6607,	// (0x0004dabd) ituss_sks_pane_g2

0x0001,

0xfe42,	// (0x000572f8) ituss_sks_pane_g

0x660f,	// (0x0004dac5) ituss_sks_pane_t1

0x661d,	// (0x0004dad3) ituss_sks_pane_t2

0x0001,

0xfe47,	// (0x000572fd) ituss_sks_pane_t

0xdf4d,	// (0x00055403) indicator_nsta_pane_cp_g1

0xdf56,	// (0x0005540c) indicator_nsta_pane_cp_g2

0xdf5e,	// (0x00055414) indicator_nsta_pane_cp_g3

0xdf66,	// (0x0005541c) indicator_nsta_pane_cp_g4

0xdf6e,	// (0x00055424) indicator_nsta_pane_cp_g5

0xdf76,	// (0x0005542c) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00056f64) indicator_nsta_pane_cp_g

0xb0b2,	// (0x00052568) cell_graphic2_pane_t2_ParamLimits

0xb0b2,	// (0x00052568) cell_graphic2_pane_t2

0x0001,

0xfcfe,	// (0x000571b4) cell_graphic2_pane_t_ParamLimits

0xfcfe,	// (0x000571b4) cell_graphic2_pane_t

0xb0e8,	// (0x0005259e) cell_graphic2_control_pane_t1

0x853a,	// (0x0004f9f0) signal_pane_g3_ParamLimits

0x853a,	// (0x0004f9f0) signal_pane_g3

0x854e,	// (0x0004fa04) signal_pane_g4_ParamLimits

0x854e,	// (0x0004fa04) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
