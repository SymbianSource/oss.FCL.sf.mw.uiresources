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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00046ac4 };

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
0x82df,	// (0x0004eda3) Screen

0x82eb,	// (0x0004edaf) application_window_ParamLimits

0x82eb,	// (0x0004edaf) application_window

0xa77f,	// (0x00051243) screen_g1

0x73c6,	// (0x0004de8a) area_bottom_pane_ParamLimits

0x73c6,	// (0x0004de8a) area_bottom_pane

0x049a,	// (0x00046f5e) area_top_pane_ParamLimits

0x049a,	// (0x00046f5e) area_top_pane

0x0538,	// (0x00046ffc) main_pane_ParamLimits

0x0538,	// (0x00046ffc) main_pane

0xa789,	// (0x0005124d) misc_graphics

0x9304,	// (0x0004fdc8) battery_pane_ParamLimits

0x9304,	// (0x0004fdc8) battery_pane

0xd213,	// (0x00053cd7) bg_status_flat_pane_g8

0xd21b,	// (0x00053cdf) bg_status_flat_pane_g9

0xc926,	// (0x000533ea) context_pane_ParamLimits

0xc926,	// (0x000533ea) context_pane

0x946f,	// (0x0004ff33) navi_pane_ParamLimits

0x946f,	// (0x0004ff33) navi_pane

0x94e6,	// (0x0004ffaa) signal_pane_ParamLimits

0x94e6,	// (0x0004ffaa) signal_pane

0x0008,

0xf8a1,	// (0x00056365) bg_status_flat_pane_g

0x9576,	// (0x0005003a) status_pane_g1_ParamLimits

0x9576,	// (0x0005003a) status_pane_g1

0x958c,	// (0x00050050) status_pane_g2_ParamLimits

0x958c,	// (0x00050050) status_pane_g2

0xc98b,	// (0x0005344f) status_pane_g3_ParamLimits

0xc98b,	// (0x0005344f) status_pane_g3

0x0004,

0xf7db,	// (0x0005629f) status_pane_g_ParamLimits

0xf7db,	// (0x0005629f) status_pane_g

0x9598,	// (0x0005005c) title_pane_ParamLimits

0x9598,	// (0x0005005c) title_pane

0x95f9,	// (0x000500bd) uni_indicator_pane_ParamLimits

0x95f9,	// (0x000500bd) uni_indicator_pane

0xc755,	// (0x00053219) bg_list_pane_ParamLimits

0xc755,	// (0x00053219) bg_list_pane

0x8bc6,	// (0x0004f68a) find_pane

0x8bce,	// (0x0004f692) listscroll_app_pane_ParamLimits

0x8bce,	// (0x0004f692) listscroll_app_pane

0xc775,	// (0x00053239) listscroll_form_pane

0x8bda,	// (0x0004f69e) listscroll_gen_pane_ParamLimits

0x8bda,	// (0x0004f69e) listscroll_gen_pane

0xc775,	// (0x00053239) listscroll_set_pane

0xd1ae,	// (0x00053c72) main_idle_act_pane

0xc53b,	// (0x00052fff) main_idle_trad_pane

0xc53b,	// (0x00052fff) main_list_empty_pane

0xbc6e,	// (0x00052732) main_midp_pane

0xc78f,	// (0x00053253) main_pane_g1_ParamLimits

0xc78f,	// (0x00053253) main_pane_g1

0x8bee,	// (0x0004f6b2) popup_ai_message_window_ParamLimits

0x8bee,	// (0x0004f6b2) popup_ai_message_window

0x8c7f,	// (0x0004f743) popup_fep_china_uni_window_ParamLimits

0x8c7f,	// (0x0004f743) popup_fep_china_uni_window

0xc7c1,	// (0x00053285) popup_fep_japan_candidate_window_ParamLimits

0xc7c1,	// (0x00053285) popup_fep_japan_candidate_window

0xc7e1,	// (0x000532a5) popup_fep_japan_predictive_window_ParamLimits

0xc7e1,	// (0x000532a5) popup_fep_japan_predictive_window

0x8cdb,	// (0x0004f79f) popup_find_window

0x8cf8,	// (0x0004f7bc) popup_grid_graphic_window_ParamLimits

0x8cf8,	// (0x0004f7bc) popup_grid_graphic_window

0xc811,	// (0x000532d5) popup_large_graphic_colour_window

0x8d90,	// (0x0004f854) popup_menu_window_ParamLimits

0x8d90,	// (0x0004f854) popup_menu_window

0x8f64,	// (0x0004fa28) popup_note_image_window

0x8f2a,	// (0x0004f9ee) popup_note_wait_window_ParamLimits

0x8f2a,	// (0x0004f9ee) popup_note_wait_window

0x8f7c,	// (0x0004fa40) popup_note_window_ParamLimits

0x8f7c,	// (0x0004fa40) popup_note_window

0x9022,	// (0x0004fae6) popup_query_code_window_ParamLimits

0x9022,	// (0x0004fae6) popup_query_code_window

0xc837,	// (0x000532fb) popup_query_data_code_window_ParamLimits

0xc837,	// (0x000532fb) popup_query_data_code_window

0x905c,	// (0x0004fb20) popup_query_data_window_ParamLimits

0x905c,	// (0x0004fb20) popup_query_data_window

0x90d2,	// (0x0004fb96) popup_query_sat_info_window_ParamLimits

0x90d2,	// (0x0004fb96) popup_query_sat_info_window

0x9169,	// (0x0004fc2d) popup_snote_single_graphic_window_ParamLimits

0x9169,	// (0x0004fc2d) popup_snote_single_graphic_window

0x9169,	// (0x0004fc2d) popup_snote_single_text_window_ParamLimits

0x9169,	// (0x0004fc2d) popup_snote_single_text_window

0xc854,	// (0x00053318) popup_sub_window_general

0xc89c,	// (0x00053360) popup_window_general_ParamLimits

0xc89c,	// (0x00053360) popup_window_general

0xc8b1,	// (0x00053375) power_save_pane

0x7ada,	// (0x0004e59e) control_pane_g1_ParamLimits

0x7ada,	// (0x0004e59e) control_pane_g1

0x126c,	// (0x00047d30) control_pane_g2_ParamLimits

0x126c,	// (0x00047d30) control_pane_g2

0xc737,	// (0x000531fb) control_pane_g3_ParamLimits

0xc737,	// (0x000531fb) control_pane_g3

0x0007,

0xf7c3,	// (0x00056287) control_pane_g_ParamLimits

0xf7c3,	// (0x00056287) control_pane_g

0x7b11,	// (0x0004e5d5) control_pane_t1_ParamLimits

0x7b11,	// (0x0004e5d5) control_pane_t1

0x7b6f,	// (0x0004e633) control_pane_t2_ParamLimits

0x7b6f,	// (0x0004e633) control_pane_t2

0x0002,

0xf7d4,	// (0x00056298) control_pane_t_ParamLimits

0xf7d4,	// (0x00056298) control_pane_t

0xc658,	// (0x0005311c) navi_navi_volume_pane_cp1

0xc661,	// (0x00053125) status_small_icon_pane

0xc669,	// (0x0005312d) status_small_pane_g1_ParamLimits

0xc669,	// (0x0005312d) status_small_pane_g1

0xc69d,	// (0x00053161) status_small_pane_g2_ParamLimits

0xc69d,	// (0x00053161) status_small_pane_g2

0xc6a9,	// (0x0005316d) status_small_pane_g3_ParamLimits

0xc6a9,	// (0x0005316d) status_small_pane_g3

0xc6b5,	// (0x00053179) status_small_pane_g4_ParamLimits

0xc6b5,	// (0x00053179) status_small_pane_g4

0xc6c1,	// (0x00053185) status_small_pane_g5_ParamLimits

0xc6c1,	// (0x00053185) status_small_pane_g5

0xc6d0,	// (0x00053194) status_small_pane_g6_ParamLimits

0xc6d0,	// (0x00053194) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00056276) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00056276) status_small_pane_g

0xc700,	// (0x000531c4) status_small_pane_t1

0xc723,	// (0x000531e7) status_small_wait_pane_ParamLimits

0xc723,	// (0x000531e7) status_small_wait_pane

0x8a0a,	// (0x0004f4ce) aid_levels_signal_ParamLimits

0x8a0a,	// (0x0004f4ce) aid_levels_signal

0x8a22,	// (0x0004f4e6) signal_pane_g1_ParamLimits

0x8a22,	// (0x0004f4e6) signal_pane_g1

0x8a3d,	// (0x0004f501) signal_pane_g2_ParamLimits

0x8a3d,	// (0x0004f501) signal_pane_g2

0x0001,

0xf747,	// (0x0005620b) signal_pane_g_ParamLimits

0xf747,	// (0x0005620b) signal_pane_g

0xc0a1,	// (0x00052b65) context_pane_g1

0x82fb,	// (0x0004edbf) title_pane_g1

0x8330,	// (0x0004edf4) title_pane_t1

0xa79f,	// (0x00051263) title_pane_t2

0xa7c5,	// (0x00051289) title_pane_t3

0x0002,

0xf59b,	// (0x0005605f) title_pane_t

0x9621,	// (0x000500e5) aid_levels_battery_ParamLimits

0x9621,	// (0x000500e5) aid_levels_battery

0x963d,	// (0x00050101) battery_pane_g1_ParamLimits

0x963d,	// (0x00050101) battery_pane_g1

0x965a,	// (0x0005011e) battery_pane_g2_ParamLimits

0x965a,	// (0x0005011e) battery_pane_g2

0x0001,

0xf7e6,	// (0x000562aa) battery_pane_g_ParamLimits

0xf7e6,	// (0x000562aa) battery_pane_g

0x985f,	// (0x00050323) uni_indicator_pane_g1

0x9874,	// (0x00050338) uni_indicator_pane_g2

0x9889,	// (0x0005034d) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x0005640d) uni_indicator_pane_g

0xc3ad,	// (0x00052e71) navi_icon_pane_ParamLimits

0xc3ad,	// (0x00052e71) navi_icon_pane

0xc2f6,	// (0x00052dba) navi_midp_pane

0xc3c9,	// (0x00052e8d) navi_navi_pane

0xc3d3,	// (0x00052e97) navi_text_pane_ParamLimits

0xc3d3,	// (0x00052e97) navi_text_pane

0xa77f,	// (0x00051243) status_small_wait_pane_g1

0xb490,	// (0x00051f54) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x00056408) status_small_wait_pane_g

0xd7a4,	// (0x00054268) navi_navi_icon_text_pane

0xd7ca,	// (0x0005428e) navi_navi_pane_g1_ParamLimits

0xd7ca,	// (0x0005428e) navi_navi_pane_g1

0xd7ac,	// (0x00054270) navi_navi_pane_g2_ParamLimits

0xd7ac,	// (0x00054270) navi_navi_pane_g2

0x0001,

0xf912,	// (0x000563d6) navi_navi_pane_g_ParamLimits

0xf912,	// (0x000563d6) navi_navi_pane_g

0xd7dc,	// (0x000542a0) navi_navi_tabs_pane

0xd7e5,	// (0x000542a9) navi_navi_text_pane

0xd7a4,	// (0x00054268) navi_navi_volume_pane

0x9820,	// (0x000502e4) navi_text_pane_t1

0x9814,	// (0x000502d8) navi_icon_pane_g1

0xd6e5,	// (0x000541a9) navi_navi_text_pane_t1

0x7dd4,	// (0x0004e898) navi_navi_volume_pane_g1

0x7ddc,	// (0x0004e8a0) volume_small_pane

0x9770,	// (0x00050234) navi_navi_icon_text_pane_g1

0x9778,	// (0x0005023c) navi_navi_icon_text_pane_t1

0xc3c9,	// (0x00052e8d) navi_tabs_2_long_pane

0xc3c9,	// (0x00052e8d) navi_tabs_2_pane

0xc3c9,	// (0x00052e8d) navi_tabs_3_long_pane

0xc3c9,	// (0x00052e8d) navi_tabs_3_pane

0xc3c9,	// (0x00052e8d) navi_tabs_4_pane

0x7db4,	// (0x0004e878) tabs_2_active_pane_ParamLimits

0x7db4,	// (0x0004e878) tabs_2_active_pane

0x7dc4,	// (0x0004e888) tabs_2_passive_pane_ParamLimits

0x7dc4,	// (0x0004e888) tabs_2_passive_pane

0x7d82,	// (0x0004e846) tabs_3_active_pane_ParamLimits

0x7d82,	// (0x0004e846) tabs_3_active_pane

0x7d92,	// (0x0004e856) tabs_3_passive_pane_ParamLimits

0x7d92,	// (0x0004e856) tabs_3_passive_pane

0x7da3,	// (0x0004e867) tabs_3_passive_pane_cp_ParamLimits

0x7da3,	// (0x0004e867) tabs_3_passive_pane_cp

0x7d3e,	// (0x0004e802) tabs_4_active_pane_ParamLimits

0x7d3e,	// (0x0004e802) tabs_4_active_pane

0x7d4f,	// (0x0004e813) tabs_4_passive_pane_ParamLimits

0x7d4f,	// (0x0004e813) tabs_4_passive_pane

0x7d60,	// (0x0004e824) tabs_4_passive_pane_cp_ParamLimits

0x7d60,	// (0x0004e824) tabs_4_passive_pane_cp

0x7d71,	// (0x0004e835) tabs_4_passive_pane_cp2_ParamLimits

0x7d71,	// (0x0004e835) tabs_4_passive_pane_cp2

0x7d1e,	// (0x0004e7e2) tabs_2_long_active_pane_ParamLimits

0x7d1e,	// (0x0004e7e2) tabs_2_long_active_pane

0x7d2e,	// (0x0004e7f2) tabs_2_long_passive_pane_ParamLimits

0x7d2e,	// (0x0004e7f2) tabs_2_long_passive_pane

0x7ceb,	// (0x0004e7af) tabs_3_long_active_pane_ParamLimits

0x7ceb,	// (0x0004e7af) tabs_3_long_active_pane

0x7cfc,	// (0x0004e7c0) tabs_3_long_passive_pane_ParamLimits

0x7cfc,	// (0x0004e7c0) tabs_3_long_passive_pane

0x7d0d,	// (0x0004e7d1) tabs_3_long_passive_pane_cp_ParamLimits

0x7d0d,	// (0x0004e7d1) tabs_3_long_passive_pane_cp

0x14d3,	// (0x00047f97) volume_small_pane_g1

0x7c9a,	// (0x0004e75e) volume_small_pane_g2

0x7ca3,	// (0x0004e767) volume_small_pane_g3

0x7cac,	// (0x0004e770) volume_small_pane_g4

0x7cb5,	// (0x0004e779) volume_small_pane_g5

0x7cbe,	// (0x0004e782) volume_small_pane_g6

0x7cc7,	// (0x0004e78b) volume_small_pane_g7

0x7cd0,	// (0x0004e794) volume_small_pane_g8

0x7cd9,	// (0x0004e79d) volume_small_pane_g9

0x7ce2,	// (0x0004e7a6) volume_small_pane_g10

0x0009,

0xf8de,	// (0x000563a2) volume_small_pane_g

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp2_ParamLimits

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp2

0x83bc,	// (0x0004ee80) tabs_3_active_pane_g1

0x83c4,	// (0x0004ee88) tabs_3_active_pane_t1

0xa7d7,	// (0x0005129b) bg_passive_tab_pane_cp2_ParamLimits

0xa7d7,	// (0x0005129b) bg_passive_tab_pane_cp2

0x83bc,	// (0x0004ee80) tabs_3_passive_pane_g1

0x83c4,	// (0x0004ee88) tabs_3_passive_pane_t1

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp3_ParamLimits

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp3

0x83d6,	// (0x0004ee9a) tabs_4_active_pane_g1

0x83de,	// (0x0004eea2) tabs_4_active_pane_t1

0xa7d7,	// (0x0005129b) bg_passive_tab_pane_cp3_ParamLimits

0xa7d7,	// (0x0005129b) bg_passive_tab_pane_cp3

0x83d6,	// (0x0004ee9a) tabs_4_1_passive_pane_g1

0x83de,	// (0x0004eea2) tabs_4_1_passive_pane_t1

0xbc6e,	// (0x00052732) list_highlight_pane_cp2

0x9912,	// (0x000503d6) list_set_pane_ParamLimits

0x9912,	// (0x000503d6) list_set_pane

0x99ac,	// (0x00050470) main_pane_set_t1_ParamLimits

0x99ac,	// (0x00050470) main_pane_set_t1

0x99cc,	// (0x00050490) main_pane_set_t2_ParamLimits

0x99cc,	// (0x00050490) main_pane_set_t2

0x99e0,	// (0x000504a4) main_pane_set_t3_ParamLimits

0x99e0,	// (0x000504a4) main_pane_set_t3

0x99f2,	// (0x000504b6) main_pane_set_t4_ParamLimits

0x99f2,	// (0x000504b6) main_pane_set_t4

0x0003,

0xf9ae,	// (0x00056472) main_pane_set_t_ParamLimits

0xf9ae,	// (0x00056472) main_pane_set_t

0x9a04,	// (0x000504c8) setting_code_pane

0x9a0e,	// (0x000504d2) setting_slider_graphic_pane

0x9a0e,	// (0x000504d2) setting_slider_pane

0x9a0e,	// (0x000504d2) setting_text_pane

0x9a0e,	// (0x000504d2) setting_volume_pane

0x077d,	// (0x00047241) volume_set_pane

0xa7e5,	// (0x000512a9) bg_set_opt_pane_cp

0x0785,	// (0x00047249) setting_slider_pane_t1

0x079e,	// (0x00047262) setting_slider_pane_t2

0x07b8,	// (0x0004727c) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00056066) setting_slider_pane_t

0x07d0,	// (0x00047294) slider_set_pane

0xa789,	// (0x0005124d) bg_set_opt_pane_cp2

0xa7f3,	// (0x000512b7) setting_slider_graphic_pane_g1

0x07e6,	// (0x000472aa) setting_slider_graphic_pane_t1

0x07f6,	// (0x000472ba) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0005606d) setting_slider_graphic_pane_t

0x0806,	// (0x000472ca) slider_set_pane_cp

0xa789,	// (0x0005124d) input_focus_pane_cp1

0xdc31,	// (0x000546f5) list_set_text_pane

0xa77f,	// (0x00051243) setting_text_pane_g1

0xa789,	// (0x0005124d) input_focus_pane_cp2

0xa77f,	// (0x00051243) setting_code_pane_g1

0xa7fc,	// (0x000512c0) setting_code_pane_t1

0x080e,	// (0x000472d2) set_text_pane_t1_ParamLimits

0x080e,	// (0x000472d2) set_text_pane_t1

0xbb7d,	// (0x00052641) set_opt_bg_pane_g1

0xbb85,	// (0x00052649) set_opt_bg_pane_g2

0xdc0b,	// (0x000546cf) set_opt_bg_pane_g3

0xbb95,	// (0x00052659) set_opt_bg_pane_g4

0xbb9d,	// (0x00052661) set_opt_bg_pane_g5

0xbba5,	// (0x00052669) set_opt_bg_pane_g6

0xdc15,	// (0x000546d9) set_opt_bg_pane_g7

0xdc1d,	// (0x000546e1) set_opt_bg_pane_g8

0xdc27,	// (0x000546eb) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x0005645f) set_opt_bg_pane_g

0xdbfe,	// (0x000546c2) slider_set_pane_g1

0x169b,	// (0x0004815f) slider_set_pane_g2

0x0006,

0xf98c,	// (0x00056450) slider_set_pane_g

0x1637,	// (0x000480fb) volume_set_pane_g1

0x163f,	// (0x00048103) volume_set_pane_g2

0x1647,	// (0x0004810b) volume_set_pane_g3

0x164f,	// (0x00048113) volume_set_pane_g4

0x1657,	// (0x0004811b) volume_set_pane_g5

0x165f,	// (0x00048123) volume_set_pane_g6

0x1667,	// (0x0004812b) volume_set_pane_g7

0x166f,	// (0x00048133) volume_set_pane_g8

0x1677,	// (0x0004813b) volume_set_pane_g9

0x167f,	// (0x00048143) volume_set_pane_g10

0x0009,

0xf964,	// (0x00056428) volume_set_pane_g

0x83f0,	// (0x0004eeb4) indicator_pane_ParamLimits

0x83f0,	// (0x0004eeb4) indicator_pane

0x8418,	// (0x0004eedc) main_idle_pane_g2_ParamLimits

0x8418,	// (0x0004eedc) main_idle_pane_g2

0x8450,	// (0x0004ef14) main_pane_idle_g1_ParamLimits

0x8450,	// (0x0004ef14) main_pane_idle_g1

0xad79,	// (0x0005183d) popup_clock_digital_analogue_window_ParamLimits

0xad79,	// (0x0005183d) popup_clock_digital_analogue_window

0x8477,	// (0x0004ef3b) soft_indicator_pane_ParamLimits

0x8477,	// (0x0004ef3b) soft_indicator_pane

0x8491,	// (0x0004ef55) wallpaper_pane_ParamLimits

0x8491,	// (0x0004ef55) wallpaper_pane

0xa77f,	// (0x00051243) wallpaper_pane_g1

0x84a3,	// (0x0004ef67) indicator_pane_g1_ParamLimits

0x84a3,	// (0x0004ef67) indicator_pane_g1

0xdd73,	// (0x00054837) navi_navi_icon_text_pane_srt_g1

0xada7,	// (0x0005186b) soft_indicator_pane_t1

0xadc1,	// (0x00051885) aid_ps_area_pane

0x84b9,	// (0x0004ef7d) aid_ps_clock_pane

0xadd2,	// (0x00051896) aid_ps_indicator_pane

0xadde,	// (0x000518a2) indicator_ps_pane_ParamLimits

0xadde,	// (0x000518a2) indicator_ps_pane

0xaded,	// (0x000518b1) power_save_pane_g1_ParamLimits

0xaded,	// (0x000518b1) power_save_pane_g1

0xadf9,	// (0x000518bd) power_save_pane_g2_ParamLimits

0xadf9,	// (0x000518bd) power_save_pane_g2

0x038e,	// (0x00046e52) aid_navinavi_width_pane

0xadc1,	// (0x00051885) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00056072) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00056072) power_save_pane_g

0xae07,	// (0x000518cb) power_save_pane_t1_ParamLimits

0xae07,	// (0x000518cb) power_save_pane_t1

0x84b9,	// (0x0004ef7d) aid_ps_clock_pane_ParamLimits

0xadd2,	// (0x00051896) aid_ps_indicator_pane_ParamLimits

0xae19,	// (0x000518dd) power_save_pane_t4_ParamLimits

0xae19,	// (0x000518dd) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00056077) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00056077) power_save_pane_t

0xae43,	// (0x00051907) power_save_t3_ParamLimits

0xae43,	// (0x00051907) power_save_t3

0xae2e,	// (0x000518f2) power_save_t2_ParamLimits

0xae2e,	// (0x000518f2) power_save_t2

0xae58,	// (0x0005191c) indicator_ps_pane_g1

0x84c7,	// (0x0004ef8b) ai_gene_pane_ParamLimits

0x84c7,	// (0x0004ef8b) ai_gene_pane

0x84de,	// (0x0004efa2) ai_links_pane_ParamLimits

0x84de,	// (0x0004efa2) ai_links_pane

0x84f6,	// (0x0004efba) indicator_pane_cp1_ParamLimits

0x84f6,	// (0x0004efba) indicator_pane_cp1

0x8505,	// (0x0004efc9) main_pane_idle_g1_cp_ParamLimits

0x8505,	// (0x0004efc9) main_pane_idle_g1_cp

0xae61,	// (0x00051925) popup_ai_links_title_window

0x851d,	// (0x0004efe1) soft_indicator_pane_cp1_ParamLimits

0x851d,	// (0x0004efe1) soft_indicator_pane_cp1

0xda52,	// (0x00054516) ai_links_pane_g1

0xda5b,	// (0x0005451f) grid_ai_links_pane

0x9856,	// (0x0005031a) ai_gene_pane_1

0xda40,	// (0x00054504) ai_gene_pane_2

0xda49,	// (0x0005450d) list_highlight_pane_cp4

0x9832,	// (0x000502f6) cell_ai_link_pane_ParamLimits

0x9832,	// (0x000502f6) cell_ai_link_pane

0xda38,	// (0x000544fc) cell_ai_link_pane_g1

0xb490,	// (0x00051f54) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x00056403) cell_ai_link_pane_g

0xa789,	// (0x0005124d) grid_highlight_cp2

0xa789,	// (0x0005124d) bg_popup_sub_pane_cp1

0xae78,	// (0x0005193c) popup_ai_links_title_window_t1

0xd986,	// (0x0005444a) ai_gene_pane_1_g1_ParamLimits

0xd986,	// (0x0005444a) ai_gene_pane_1_g1

0xd992,	// (0x00054456) ai_gene_pane_1_g2_ParamLimits

0xd992,	// (0x00054456) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x000563f9) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x000563f9) ai_gene_pane_1_g

0xd99f,	// (0x00054463) ai_gene_pane_1_t1_ParamLimits

0xd99f,	// (0x00054463) ai_gene_pane_1_t1

0xd9d3,	// (0x00054497) grid_ai_soft_ind_pane

0xd971,	// (0x00054435) ai_gene_pane_2_t1_ParamLimits

0xd971,	// (0x00054435) ai_gene_pane_2_t1

0x8531,	// (0x0004eff5) main_pane_empty_t1_ParamLimits

0x8531,	// (0x0004eff5) main_pane_empty_t1

0x8549,	// (0x0004f00d) main_pane_empty_t2_ParamLimits

0x8549,	// (0x0004f00d) main_pane_empty_t2

0x855e,	// (0x0004f022) main_pane_empty_t3_ParamLimits

0x855e,	// (0x0004f022) main_pane_empty_t3

0x8570,	// (0x0004f034) main_pane_empty_t4_ParamLimits

0x8570,	// (0x0004f034) main_pane_empty_t4

0x8582,	// (0x0004f046) main_pane_empty_t5_ParamLimits

0x8582,	// (0x0004f046) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0005607c) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0005607c) main_pane_empty_t

0xbbce,	// (0x00052692) bg_popup_window_pane_ParamLimits

0xbbce,	// (0x00052692) bg_popup_window_pane

0xd6f3,	// (0x000541b7) find_popup_pane_cp2_ParamLimits

0xd6f3,	// (0x000541b7) find_popup_pane_cp2

0xd6ff,	// (0x000541c3) heading_pane_ParamLimits

0xd6ff,	// (0x000541c3) heading_pane

0xa789,	// (0x0005124d) bg_popup_sub_pane

0x9795,	// (0x00050259) bg_popup_window_pane_g1_ParamLimits

0x9795,	// (0x00050259) bg_popup_window_pane_g1

0x97a4,	// (0x00050268) bg_popup_window_pane_g2_ParamLimits

0x97a4,	// (0x00050268) bg_popup_window_pane_g2

0x97b0,	// (0x00050274) bg_popup_window_pane_g3_ParamLimits

0x97b0,	// (0x00050274) bg_popup_window_pane_g3

0x97bc,	// (0x00050280) bg_popup_window_pane_g4_ParamLimits

0x97bc,	// (0x00050280) bg_popup_window_pane_g4

0x97cb,	// (0x0005028f) bg_popup_window_pane_g5_ParamLimits

0x97cb,	// (0x0005028f) bg_popup_window_pane_g5

0x97db,	// (0x0005029f) bg_popup_window_pane_g6_ParamLimits

0x97db,	// (0x0005029f) bg_popup_window_pane_g6

0x97e7,	// (0x000502ab) bg_popup_window_pane_g7_ParamLimits

0x97e7,	// (0x000502ab) bg_popup_window_pane_g7

0x97f6,	// (0x000502ba) bg_popup_window_pane_g8_ParamLimits

0x97f6,	// (0x000502ba) bg_popup_window_pane_g8

0x9805,	// (0x000502c9) bg_popup_window_pane_g9_ParamLimits

0x9805,	// (0x000502c9) bg_popup_window_pane_g9

0xd6d9,	// (0x0005419d) bg_popup_window_pane_g10_ParamLimits

0xd6d9,	// (0x0005419d) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x000563c1) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x000563c1) bg_popup_window_pane_g

0xd690,	// (0x00054154) bg_popup_heading_pane_ParamLimits

0xd690,	// (0x00054154) bg_popup_heading_pane

0x1723,	// (0x000481e7) tabs_4_passive_pane_cp_srt_ParamLimits

0x1723,	// (0x000481e7) tabs_4_passive_pane_cp_srt

0x1735,	// (0x000481f9) tabs_4_passive_pane_srt_ParamLimits

0xd6a4,	// (0x00054168) heading_pane_g2

0x1735,	// (0x000481f9) tabs_4_passive_pane_srt

0xcb71,	// (0x00053635) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcb71,	// (0x00053635) bg_passive_tab_pane_cp3_srt

0xd6ac,	// (0x00054170) heading_pane_t1_ParamLimits

0xd6ac,	// (0x00054170) heading_pane_t1

0xd6c3,	// (0x00054187) heading_pane_t2_ParamLimits

0xd6c3,	// (0x00054187) heading_pane_t2

0x0001,

0xf8f8,	// (0x000563bc) heading_pane_t_ParamLimits

0xf8f8,	// (0x000563bc) heading_pane_t

0xd1db,	// (0x00053c9f) bg_popup_heading_pane_g1

0xd26c,	// (0x00053d30) bg_popup_heading_pane_g2

0xd276,	// (0x00053d3a) bg_popup_heading_pane_g3

0xd280,	// (0x00053d44) bg_popup_heading_pane_g4

0xd28a,	// (0x00053d4e) bg_popup_heading_pane_g5

0xd294,	// (0x00053d58) bg_popup_heading_pane_g6

0xd29c,	// (0x00053d60) bg_popup_heading_pane_g7

0xd2a4,	// (0x00053d68) bg_popup_heading_pane_g8

0xd2ae,	// (0x00053d72) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x00056378) bg_popup_heading_pane_g

0xca81,	// (0x00053545) bg_popup_sub_pane_g1

0xca91,	// (0x00053555) bg_popup_sub_pane_g2

0xca89,	// (0x0005354d) bg_popup_sub_pane_g3

0xcaa1,	// (0x00053565) bg_popup_sub_pane_g4

0xca99,	// (0x0005355d) bg_popup_sub_pane_g5

0xcaa9,	// (0x0005356d) bg_popup_sub_pane_g6

0xcab1,	// (0x00053575) bg_popup_sub_pane_g7

0xcac1,	// (0x00053585) bg_popup_sub_pane_g8

0xcab9,	// (0x0005357d) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x00056352) bg_popup_sub_pane_g

0xa7d7,	// (0x0005129b) bg_popup_window_pane_cp5_ParamLimits

0xa7d7,	// (0x0005129b) bg_popup_window_pane_cp5

0xae95,	// (0x00051959) popup_note_window_g1_ParamLimits

0xae95,	// (0x00051959) popup_note_window_g1

0xaea1,	// (0x00051965) popup_note_window_t1_ParamLimits

0xaea1,	// (0x00051965) popup_note_window_t1

0xaeb7,	// (0x0005197b) popup_note_window_t2_ParamLimits

0xaeb7,	// (0x0005197b) popup_note_window_t2

0xaecd,	// (0x00051991) popup_note_window_t3_ParamLimits

0xaecd,	// (0x00051991) popup_note_window_t3

0xaee3,	// (0x000519a7) popup_note_window_t4_ParamLimits

0xaee3,	// (0x000519a7) popup_note_window_t4

0xb380,	// (0x00051e44) popup_note_window_t5_ParamLimits

0xb380,	// (0x00051e44) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00056087) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00056087) popup_note_window_t

0xb3a4,	// (0x00051e68) bg_popup_window_pane_cp6_ParamLimits

0xb3a4,	// (0x00051e68) bg_popup_window_pane_cp6

0xd115,	// (0x00053bd9) popup_note_image_window_g1_ParamLimits

0xd115,	// (0x00053bd9) popup_note_image_window_g1

0xd121,	// (0x00053be5) popup_note_image_window_g2_ParamLimits

0xd121,	// (0x00053be5) popup_note_image_window_g2

0x0001,

0xf882,	// (0x00056346) popup_note_image_window_g_ParamLimits

0xf882,	// (0x00056346) popup_note_image_window_g

0xd13a,	// (0x00053bfe) popup_note_image_window_t1_ParamLimits

0xd13a,	// (0x00053bfe) popup_note_image_window_t1

0xd153,	// (0x00053c17) popup_note_image_window_t2_ParamLimits

0xd153,	// (0x00053c17) popup_note_image_window_t2

0xd16c,	// (0x00053c30) popup_note_image_window_t3_ParamLimits

0xd16c,	// (0x00053c30) popup_note_image_window_t3

0x0002,

0xf887,	// (0x0005634b) popup_note_image_window_t_ParamLimits

0xf887,	// (0x0005634b) popup_note_image_window_t

0xcff2,	// (0x00053ab6) bg_popup_window_pane_cp7_ParamLimits

0xcff2,	// (0x00053ab6) bg_popup_window_pane_cp7

0xd022,	// (0x00053ae6) popup_note_wait_window_g1_ParamLimits

0xd022,	// (0x00053ae6) popup_note_wait_window_g1

0xd02e,	// (0x00053af2) popup_note_wait_window_g2_ParamLimits

0xd02e,	// (0x00053af2) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x00056334) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x00056334) popup_note_wait_window_g

0xd046,	// (0x00053b0a) popup_note_wait_window_t1_ParamLimits

0xd046,	// (0x00053b0a) popup_note_wait_window_t1

0xd06d,	// (0x00053b31) popup_note_wait_window_t2_ParamLimits

0xd06d,	// (0x00053b31) popup_note_wait_window_t2

0xd08a,	// (0x00053b4e) popup_note_wait_window_t3_ParamLimits

0xd08a,	// (0x00053b4e) popup_note_wait_window_t3

0xd09d,	// (0x00053b61) popup_note_wait_window_t4_ParamLimits

0xd09d,	// (0x00053b61) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x0005633b) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x0005633b) popup_note_wait_window_t

0xd0c2,	// (0x00053b86) wait_bar_pane_ParamLimits

0xd0c2,	// (0x00053b86) wait_bar_pane

0xa789,	// (0x0005124d) wait_anim_pane

0xa789,	// (0x0005124d) wait_border_pane

0xa77f,	// (0x00051243) wait_anim_pane_g1

0xa77f,	// (0x00051243) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00056206) wait_anim_pane_g

0xcf96,	// (0x00053a5a) wait_border_pane_g1

0xcfa1,	// (0x00053a65) wait_border_pane_g2

0xcfaa,	// (0x00053a6e) wait_border_pane_g3

0x0002,

0xf869,	// (0x0005632d) wait_border_pane_g

0xcef3,	// (0x000539b7) bg_popup_window_pane_cp16_ParamLimits

0xcef3,	// (0x000539b7) bg_popup_window_pane_cp16

0xcf01,	// (0x000539c5) indicator_popup_pane_cp4_ParamLimits

0xcf01,	// (0x000539c5) indicator_popup_pane_cp4

0xcf15,	// (0x000539d9) popup_query_data_window_t1_ParamLimits

0xcf15,	// (0x000539d9) popup_query_data_window_t1

0xcf27,	// (0x000539eb) popup_query_data_window_t2_ParamLimits

0xcf27,	// (0x000539eb) popup_query_data_window_t2

0xcf40,	// (0x00053a04) popup_query_data_window_t3_ParamLimits

0xcf40,	// (0x00053a04) popup_query_data_window_t3

0x0002,

0xf862,	// (0x00056326) popup_query_data_window_t_ParamLimits

0xf862,	// (0x00056326) popup_query_data_window_t

0xcf5a,	// (0x00053a1e) query_popup_data_pane_ParamLimits

0xcf5a,	// (0x00053a1e) query_popup_data_pane

0xcf6e,	// (0x00053a32) query_popup_data_pane_cp1_ParamLimits

0xcf6e,	// (0x00053a32) query_popup_data_pane_cp1

0xb3a4,	// (0x00051e68) bg_popup_window_pane_cp10_ParamLimits

0xb3a4,	// (0x00051e68) bg_popup_window_pane_cp10

0xce56,	// (0x0005391a) indicator_popup_pane_ParamLimits

0xce56,	// (0x0005391a) indicator_popup_pane

0xb3fb,	// (0x00051ebf) popup_query_code_window_t1_ParamLimits

0xb3fb,	// (0x00051ebf) popup_query_code_window_t1

0xce6e,	// (0x00053932) popup_query_code_window_t2_ParamLimits

0xce6e,	// (0x00053932) popup_query_code_window_t2

0xceac,	// (0x00053970) popup_query_code_window_t3_ParamLimits

0xceac,	// (0x00053970) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x0005631f) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x0005631f) popup_query_code_window_t

0xcedb,	// (0x0005399f) query_popup_pane_ParamLimits

0xcedb,	// (0x0005399f) query_popup_pane

0xb3a4,	// (0x00051e68) bg_popup_window_pane_cp15_ParamLimits

0xb3a4,	// (0x00051e68) bg_popup_window_pane_cp15

0xb3c2,	// (0x00051e86) indicator_popup_pane_cp1_ParamLimits

0xb3c2,	// (0x00051e86) indicator_popup_pane_cp1

0xb3d5,	// (0x00051e99) indicator_popup_pane_cp2_ParamLimits

0xb3d5,	// (0x00051e99) indicator_popup_pane_cp2

0xb3e8,	// (0x00051eac) popup_query_data_code_window_g1_ParamLimits

0xb3e8,	// (0x00051eac) popup_query_data_code_window_g1

0xb3fb,	// (0x00051ebf) popup_query_data_code_window_t1_ParamLimits

0xb3fb,	// (0x00051ebf) popup_query_data_code_window_t1

0xb40d,	// (0x00051ed1) popup_query_data_code_window_t2_ParamLimits

0xb40d,	// (0x00051ed1) popup_query_data_code_window_t2

0xb41f,	// (0x00051ee3) popup_query_data_code_window_t3_ParamLimits

0xb41f,	// (0x00051ee3) popup_query_data_code_window_t3

0xb435,	// (0x00051ef9) popup_query_data_code_window_t4_ParamLimits

0xb435,	// (0x00051ef9) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00056092) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00056092) popup_query_data_code_window_t

0x13e4,	// (0x00047ea8) list_single_midp_graphic_pane_g3

0xb44d,	// (0x00051f11) query_popup_data_pane_cp2_ParamLimits

0xb460,	// (0x00051f24) query_popup_pane_cp2_ParamLimits

0xb460,	// (0x00051f24) query_popup_pane_cp2

0xa789,	// (0x0005124d) bg_popup_window_pane_cp11

0xce2a,	// (0x000538ee) heading_pane_cp5

0xb4ee,	// (0x00051fb2) listscroll_popup_info_pane

0xa789,	// (0x0005124d) input_focus_pane_cp3

0xb473,	// (0x00051f37) query_popup_pane_t1

0xb481,	// (0x00051f45) list_popup_info_pane_ParamLimits

0xb481,	// (0x00051f45) list_popup_info_pane

0xb490,	// (0x00051f54) listscroll_popup_info_pane_g1

0xb498,	// (0x00051f5c) scroll_pane_cp7

0xb4a2,	// (0x00051f66) popup_info_list_pane_t1_ParamLimits

0xb4a2,	// (0x00051f66) popup_info_list_pane_t1

0xb4bc,	// (0x00051f80) popup_info_list_pane_t2_ParamLimits

0xb4bc,	// (0x00051f80) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0005609b) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0005609b) popup_info_list_pane_t

0xa789,	// (0x0005124d) bg_popup_window_pane_cp12

0xdd8d,	// (0x00054851) find_popup_pane

0xa7e5,	// (0x000512a9) bg_popup_window_pane_cp3

0xb4d6,	// (0x00051f9a) heading_pane_cp3

0xb4e2,	// (0x00051fa6) listscroll_popup_graphic_pane

0xa789,	// (0x0005124d) bg_popup_window_pane_cp4

0x85e4,	// (0x0004f0a8) heading_pane_cp4

0xb4ee,	// (0x00051fb2) listscroll_popup_colour_pane

0x85ec,	// (0x0004f0b0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x85ec,	// (0x0004f0b0) cell_large_graphic_colour_none_popup_pane

0x8600,	// (0x0004f0c4) grid_large_graphic_colour_popup_pane_ParamLimits

0x8600,	// (0x0004f0c4) grid_large_graphic_colour_popup_pane

0x8624,	// (0x0004f0e8) listscroll_popup_colour_pane_g1_ParamLimits

0x8624,	// (0x0004f0e8) listscroll_popup_colour_pane_g1

0x863b,	// (0x0004f0ff) listscroll_popup_colour_pane_g2_ParamLimits

0x863b,	// (0x0004f0ff) listscroll_popup_colour_pane_g2

0x8652,	// (0x0004f116) listscroll_popup_colour_pane_g3_ParamLimits

0x8652,	// (0x0004f116) listscroll_popup_colour_pane_g3

0x8662,	// (0x0004f126) listscroll_popup_colour_pane_g4_ParamLimits

0x8662,	// (0x0004f126) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x000560a0) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x000560a0) listscroll_popup_colour_pane_g

0xb4f6,	// (0x00051fba) scroll_pane_cp6_ParamLimits

0xb4f6,	// (0x00051fba) scroll_pane_cp6

0x8672,	// (0x0004f136) cell_large_graphic_colour_popup_pane_ParamLimits

0x8672,	// (0x0004f136) cell_large_graphic_colour_popup_pane

0xb508,	// (0x00051fcc) cell_large_graphic_colour_none_popup_pane_t1

0xa789,	// (0x0005124d) grid_highlight_pane_cp5

0xb517,	// (0x00051fdb) cell_large_graphic_colour_popup_pane_g1

0xb51f,	// (0x00051fe3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x000560a9) cell_large_graphic_colour_popup_pane_g

0xb527,	// (0x00051feb) cell_large_graphic_colour_popup_pane_g2_copy1

0xb530,	// (0x00051ff4) grid_highlight_pane_cp4

0xb538,	// (0x00051ffc) bg_popup_window_pane_cp8_ParamLimits

0xb538,	// (0x00051ffc) bg_popup_window_pane_cp8

0xb553,	// (0x00052017) popup_snote_single_text_window_g1_ParamLimits

0xb553,	// (0x00052017) popup_snote_single_text_window_g1

0xb565,	// (0x00052029) popup_snote_single_text_window_t1_ParamLimits

0xb565,	// (0x00052029) popup_snote_single_text_window_t1

0xb578,	// (0x0005203c) popup_snote_single_text_window_t2_ParamLimits

0xb578,	// (0x0005203c) popup_snote_single_text_window_t2

0xb58b,	// (0x0005204f) popup_snote_single_text_window_t3_ParamLimits

0xb58b,	// (0x0005204f) popup_snote_single_text_window_t3

0xb5c4,	// (0x00052088) popup_snote_single_text_window_t4_ParamLimits

0xb5c4,	// (0x00052088) popup_snote_single_text_window_t4

0xb5f8,	// (0x000520bc) popup_snote_single_text_window_t5_ParamLimits

0xb5f8,	// (0x000520bc) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x000560ae) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x000560ae) popup_snote_single_text_window_t

0xb627,	// (0x000520eb) bg_popup_window_pane_cp9_ParamLimits

0xb627,	// (0x000520eb) bg_popup_window_pane_cp9

0xb553,	// (0x00052017) popup_snote_single_graphic_window_g1_ParamLimits

0xb553,	// (0x00052017) popup_snote_single_graphic_window_g1

0xb635,	// (0x000520f9) popup_snote_single_graphic_window_g2_ParamLimits

0xb635,	// (0x000520f9) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x000560b9) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x000560b9) popup_snote_single_graphic_window_g

0xb98d,	// (0x00052451) popup_snote_single_graphic_window_t1_ParamLimits

0xb98d,	// (0x00052451) popup_snote_single_graphic_window_t1

0xb9a0,	// (0x00052464) popup_snote_single_graphic_window_t2_ParamLimits

0xb9a0,	// (0x00052464) popup_snote_single_graphic_window_t2

0xb9b3,	// (0x00052477) popup_snote_single_graphic_window_t3_ParamLimits

0xb9b3,	// (0x00052477) popup_snote_single_graphic_window_t3

0xb9ec,	// (0x000524b0) popup_snote_single_graphic_window_t4_ParamLimits

0xb9ec,	// (0x000524b0) popup_snote_single_graphic_window_t4

0xba20,	// (0x000524e4) popup_snote_single_graphic_window_t5_ParamLimits

0xba20,	// (0x000524e4) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x000560be) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x000560be) popup_snote_single_graphic_window_t

0xdd15,	// (0x000547d9) grid_graphic_popup_pane_ParamLimits

0xdd15,	// (0x000547d9) grid_graphic_popup_pane

0xdd3d,	// (0x00054801) listscroll_popup_graphic_pane_g1_ParamLimits

0xdd3d,	// (0x00054801) listscroll_popup_graphic_pane_g1

0x9b1a,	// (0x000505de) listscroll_popup_graphic_pane_g2_ParamLimits

0x9b1a,	// (0x000505de) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x0005649c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x0005649c) listscroll_popup_graphic_pane_g

0xd1c0,	// (0x00053c84) scroll_pane_cp5

0x9ade,	// (0x000505a2) cell_graphic_popup_pane_ParamLimits

0x9ade,	// (0x000505a2) cell_graphic_popup_pane

0xdce0,	// (0x000547a4) cell_graphic_popup_pane_g1

0xdce8,	// (0x000547ac) cell_graphic_popup_pane_g2

0xb527,	// (0x00051feb) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x00056495) cell_graphic_popup_pane_g

0xdcf1,	// (0x000547b5) cell_graphic_popup_pane_t2

0xb530,	// (0x00051ff4) grid_highlight_pane_cp3

0xba61,	// (0x00052525) list_gen_pane_ParamLimits

0xba61,	// (0x00052525) list_gen_pane

0xba89,	// (0x0005254d) scroll_pane

0x9a99,	// (0x0005055d) bg_list_pane_g1_ParamLimits

0x9a99,	// (0x0005055d) bg_list_pane_g1

0xdc8f,	// (0x00054753) bg_list_pane_g2_ParamLimits

0xdc8f,	// (0x00054753) bg_list_pane_g2

0xdca2,	// (0x00054766) bg_list_pane_g3_ParamLimits

0xdca2,	// (0x00054766) bg_list_pane_g3

0xdcb4,	// (0x00054778) bg_list_pane_g4_ParamLimits

0xdcb4,	// (0x00054778) bg_list_pane_g4

0x9ab4,	// (0x00050578) bg_list_pane_g5_ParamLimits

0x9ab4,	// (0x00050578) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x0005648a) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x0005648a) bg_list_pane_g

0x7e23,	// (0x0004e8e7) list_double2_graphic_large_graphic_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double2_graphic_large_graphic_pane

0x7e23,	// (0x0004e8e7) list_double2_graphic_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double2_graphic_pane

0x7e23,	// (0x0004e8e7) list_double2_large_graphic_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double2_large_graphic_pane

0x7e23,	// (0x0004e8e7) list_double2_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double2_pane

0x7e23,	// (0x0004e8e7) list_double_graphic_heading_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_graphic_heading_pane

0x7e23,	// (0x0004e8e7) list_double_graphic_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_graphic_pane

0x7e23,	// (0x0004e8e7) list_double_heading_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_heading_pane

0x7e23,	// (0x0004e8e7) list_double_large_graphic_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_large_graphic_pane

0x7e23,	// (0x0004e8e7) list_double_number_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_number_pane

0x7e23,	// (0x0004e8e7) list_double_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_pane

0x7e23,	// (0x0004e8e7) list_double_time_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_double_time_pane

0x7e23,	// (0x0004e8e7) list_setting_number_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_setting_number_pane

0x7e23,	// (0x0004e8e7) list_setting_pane_ParamLimits

0x7e23,	// (0x0004e8e7) list_setting_pane

0x9a50,	// (0x00050514) list_single_2graphic_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_2graphic_pane

0x9a50,	// (0x00050514) list_single_graphic_heading_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_graphic_heading_pane

0x9a50,	// (0x00050514) list_single_graphic_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_graphic_pane

0x9a50,	// (0x00050514) list_single_heading_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_heading_pane

0x9a87,	// (0x0005054b) list_single_large_graphic_pane_ParamLimits

0x9a87,	// (0x0005054b) list_single_large_graphic_pane

0x9a50,	// (0x00050514) list_single_number_heading_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_number_heading_pane

0x9a50,	// (0x00050514) list_single_number_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_number_pane

0x9a50,	// (0x00050514) list_single_pane_ParamLimits

0x9a50,	// (0x00050514) list_single_pane

0xa789,	// (0x0005124d) list_highlight_pane_cp1

0xd7be,	// (0x00054282) list_single_pane_g1_ParamLimits

0xd7be,	// (0x00054282) list_single_pane_g1

0x3166,	// (0x00049c2a) list_single_pane_g2_ParamLimits

0x3166,	// (0x00049c2a) list_single_pane_g2

0x0001,

0xf616,	// (0x000560da) list_single_pane_g_ParamLimits

0xf616,	// (0x000560da) list_single_pane_g

0x337f,	// (0x00049e43) list_single_pane_t1_ParamLimits

0x337f,	// (0x00049e43) list_single_pane_t1

0xd7be,	// (0x00054282) list_single_number_pane_g1_ParamLimits

0xd7be,	// (0x00054282) list_single_number_pane_g1

0x3166,	// (0x00049c2a) list_single_number_pane_g2_ParamLimits

0x3166,	// (0x00049c2a) list_single_number_pane_g2

0x0001,

0xf616,	// (0x000560da) list_single_number_pane_g_ParamLimits

0xf616,	// (0x000560da) list_single_number_pane_g

0x3172,	// (0x00049c36) list_single_number_pane_t1_ParamLimits

0x3172,	// (0x00049c36) list_single_number_pane_t1

0x7de5,	// (0x0004e8a9) list_single_number_pane_t2_ParamLimits

0x7de5,	// (0x0004e8a9) list_single_number_pane_t2

0x0001,

0xf987,	// (0x0005644b) list_single_number_pane_t_ParamLimits

0xf987,	// (0x0005644b) list_single_number_pane_t

0x753f,	// (0x0004e003) list_single_graphic_pane_g1_ParamLimits

0x753f,	// (0x0004e003) list_single_graphic_pane_g1

0xd7be,	// (0x00054282) list_single_graphic_pane_g2_ParamLimits

0xd7be,	// (0x00054282) list_single_graphic_pane_g2

0x3166,	// (0x00049c2a) list_single_graphic_pane_g3_ParamLimits

0x3166,	// (0x00049c2a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x000560c9) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x000560c9) list_single_graphic_pane_g

0x754b,	// (0x0004e00f) list_single_graphic_pane_t1_ParamLimits

0x754b,	// (0x0004e00f) list_single_graphic_pane_t1

0x7561,	// (0x0004e025) list_single_heading_pane_g1_ParamLimits

0x7561,	// (0x0004e025) list_single_heading_pane_g1

0x3166,	// (0x00049c2a) list_single_heading_pane_g2_ParamLimits

0x3166,	// (0x00049c2a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x000560d0) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x000560d0) list_single_heading_pane_g

0x7574,	// (0x0004e038) list_single_heading_pane_t1_ParamLimits

0x7574,	// (0x0004e038) list_single_heading_pane_t1

0x869b,	// (0x0004f15f) list_single_heading_pane_t2_ParamLimits

0x869b,	// (0x0004f15f) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000560d5) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000560d5) list_single_heading_pane_t

0xd7be,	// (0x00054282) list_single_number_heading_pane_g1_ParamLimits

0xd7be,	// (0x00054282) list_single_number_heading_pane_g1

0x3166,	// (0x00049c2a) list_single_number_heading_pane_g2_ParamLimits

0x3166,	// (0x00049c2a) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x000560da) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x000560da) list_single_number_heading_pane_g

0x758a,	// (0x0004e04e) list_single_number_heading_pane_t1_ParamLimits

0x758a,	// (0x0004e04e) list_single_number_heading_pane_t1

0x75a0,	// (0x0004e064) list_single_number_heading_pane_t2_ParamLimits

0x75a0,	// (0x0004e064) list_single_number_heading_pane_t2

0x3359,	// (0x00049e1d) list_single_number_heading_pane_t3_ParamLimits

0x3359,	// (0x00049e1d) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x000560df) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x000560df) list_single_number_heading_pane_t

0x75b2,	// (0x0004e076) list_single_graphic_heading_pane_g1_ParamLimits

0x75b2,	// (0x0004e076) list_single_graphic_heading_pane_g1

0x86ad,	// (0x0004f171) list_single_graphic_heading_pane_g4_ParamLimits

0x86ad,	// (0x0004f171) list_single_graphic_heading_pane_g4

0x3166,	// (0x00049c2a) list_single_graphic_heading_pane_g5_ParamLimits

0x3166,	// (0x00049c2a) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x000560e6) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000560e6) list_single_graphic_heading_pane_g

0x758a,	// (0x0004e04e) list_single_graphic_heading_pane_t1_ParamLimits

0x758a,	// (0x0004e04e) list_single_graphic_heading_pane_t1

0x75c8,	// (0x0004e08c) list_single_graphic_heading_pane_t2_ParamLimits

0x75c8,	// (0x0004e08c) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000560ed) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000560ed) list_single_graphic_heading_pane_t

0x3cbf,	// (0x0004a783) list_single_large_graphic_pane_g1_ParamLimits

0x3cbf,	// (0x0004a783) list_single_large_graphic_pane_g1

0x3ccb,	// (0x0004a78f) list_single_large_graphic_pane_g2_ParamLimits

0x3ccb,	// (0x0004a78f) list_single_large_graphic_pane_g2

0x3cd7,	// (0x0004a79b) list_single_large_graphic_pane_g3_ParamLimits

0x3cd7,	// (0x0004a79b) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x000560f2) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x000560f2) list_single_large_graphic_pane_g

0xcfa1,	// (0x00053a65) wait_border_pane_g2_copy1

0x86be,	// (0x0004f182) list_single_large_graphic_pane_g4_cp2

0x3395,	// (0x00049e59) list_single_large_graphic_pane_t1_ParamLimits

0x3395,	// (0x00049e59) list_single_large_graphic_pane_t1

0xd7be,	// (0x00054282) list_double_pane_g1_ParamLimits

0xd7be,	// (0x00054282) list_double_pane_g1

0x3166,	// (0x00049c2a) list_double_pane_g2_ParamLimits

0x3166,	// (0x00049c2a) list_double_pane_g2

0x0001,

0xf616,	// (0x000560da) list_double_pane_g_ParamLimits

0xf616,	// (0x000560da) list_double_pane_g

0x337f,	// (0x00049e43) list_double_pane_t1_ParamLimits

0x337f,	// (0x00049e43) list_double_pane_t1

0x75de,	// (0x0004e0a2) list_double_pane_t2_ParamLimits

0x75de,	// (0x0004e0a2) list_double_pane_t2

0x0001,

0xf635,	// (0x000560f9) list_double_pane_t_ParamLimits

0xf635,	// (0x000560f9) list_double_pane_t

0x75f0,	// (0x0004e0b4) list_double2_pane_g1_ParamLimits

0x75f0,	// (0x0004e0b4) list_double2_pane_g1

0x7601,	// (0x0004e0c5) list_double2_pane_g2_ParamLimits

0x7601,	// (0x0004e0c5) list_double2_pane_g2

0x0001,

0xf63a,	// (0x000560fe) list_double2_pane_g_ParamLimits

0xf63a,	// (0x000560fe) list_double2_pane_g

0x760d,	// (0x0004e0d1) list_double2_pane_t1_ParamLimits

0x760d,	// (0x0004e0d1) list_double2_pane_t1

0x7623,	// (0x0004e0e7) list_double2_pane_t2_ParamLimits

0x7623,	// (0x0004e0e7) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00056103) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00056103) list_double2_pane_t

0xd7be,	// (0x00054282) list_double_number_pane_g1_ParamLimits

0xd7be,	// (0x00054282) list_double_number_pane_g1

0x3166,	// (0x00049c2a) list_double_number_pane_g2_ParamLimits

0x3166,	// (0x00049c2a) list_double_number_pane_g2

0x0001,

0xf616,	// (0x000560da) list_double_number_pane_g_ParamLimits

0xf616,	// (0x000560da) list_double_number_pane_g

0x7635,	// (0x0004e0f9) list_double_number_pane_t1_ParamLimits

0x7635,	// (0x0004e0f9) list_double_number_pane_t1

0x3172,	// (0x00049c36) list_double_number_pane_t2_ParamLimits

0x3172,	// (0x00049c36) list_double_number_pane_t2

0x7647,	// (0x0004e10b) list_double_number_pane_t3_ParamLimits

0x7647,	// (0x0004e10b) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00056108) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00056108) list_double_number_pane_t

0x315a,	// (0x00049c1e) list_double_graphic_pane_g1_ParamLimits

0x315a,	// (0x00049c1e) list_double_graphic_pane_g1

0x3d16,	// (0x0004a7da) list_double_graphic_pane_g2_ParamLimits

0x3d16,	// (0x0004a7da) list_double_graphic_pane_g2

0x3d25,	// (0x0004a7e9) list_double_graphic_pane_g3_ParamLimits

0x3d25,	// (0x0004a7e9) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0005610f) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0005610f) list_double_graphic_pane_g

0x754b,	// (0x0004e00f) list_double_graphic_pane_t1_ParamLimits

0x754b,	// (0x0004e00f) list_double_graphic_pane_t1

0x7665,	// (0x0004e129) list_double_graphic_pane_t2_ParamLimits

0x7665,	// (0x0004e129) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00056118) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00056118) list_double_graphic_pane_t

0x315a,	// (0x00049c1e) list_double2_graphic_pane_g1_ParamLimits

0x315a,	// (0x00049c1e) list_double2_graphic_pane_g1

0xd7be,	// (0x00054282) list_double2_graphic_pane_g2_ParamLimits

0xd7be,	// (0x00054282) list_double2_graphic_pane_g2

0x3166,	// (0x00049c2a) list_double2_graphic_pane_g3_ParamLimits

0x3166,	// (0x00049c2a) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0005611d) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0005611d) list_double2_graphic_pane_g

0x3172,	// (0x00049c36) list_double2_graphic_pane_t1_ParamLimits

0x3172,	// (0x00049c36) list_double2_graphic_pane_t1

0x7677,	// (0x0004e13b) list_double2_graphic_pane_t2_ParamLimits

0x7677,	// (0x0004e13b) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00056124) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00056124) list_double2_graphic_pane_t

0x7689,	// (0x0004e14d) list_double_large_graphic_pane_g1_ParamLimits

0x7689,	// (0x0004e14d) list_double_large_graphic_pane_g1

0x76af,	// (0x0004e173) list_double_large_graphic_pane_g2_ParamLimits

0x76af,	// (0x0004e173) list_double_large_graphic_pane_g2

0x3166,	// (0x00049c2a) list_double_large_graphic_pane_g3_ParamLimits

0x3166,	// (0x00049c2a) list_double_large_graphic_pane_g3

0x76c5,	// (0x0004e189) list_double_large_graphic_pane_g4_ParamLimits

0x76c5,	// (0x0004e189) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00056129) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00056129) list_double_large_graphic_pane_g

0x76d8,	// (0x0004e19c) list_double_large_graphic_pane_t1_ParamLimits

0x76d8,	// (0x0004e19c) list_double_large_graphic_pane_t1

0x76f1,	// (0x0004e1b5) list_double_large_graphic_pane_t2_ParamLimits

0x76f1,	// (0x0004e1b5) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00056134) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00056134) list_double_large_graphic_pane_t

0x7703,	// (0x0004e1c7) list_double2_large_graphic_pane_g1_ParamLimits

0x7703,	// (0x0004e1c7) list_double2_large_graphic_pane_g1

0x86ad,	// (0x0004f171) list_double2_large_graphic_pane_g2_ParamLimits

0x86ad,	// (0x0004f171) list_double2_large_graphic_pane_g2

0x3166,	// (0x00049c2a) list_double2_large_graphic_pane_g3_ParamLimits

0x3166,	// (0x00049c2a) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00056139) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00056139) list_double2_large_graphic_pane_g

0x758a,	// (0x0004e04e) list_double2_large_graphic_pane_t1_ParamLimits

0x758a,	// (0x0004e04e) list_double2_large_graphic_pane_t1

0x770f,	// (0x0004e1d3) list_double2_large_graphic_pane_t2_ParamLimits

0x770f,	// (0x0004e1d3) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00056140) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00056140) list_double2_large_graphic_pane_t

0x7721,	// (0x0004e1e5) list_double_heading_pane_g1_ParamLimits

0x7721,	// (0x0004e1e5) list_double_heading_pane_g1

0x86c6,	// (0x0004f18a) list_double_heading_pane_g2_ParamLimits

0x86c6,	// (0x0004f18a) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00056145) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00056145) list_double_heading_pane_g

0x7732,	// (0x0004e1f6) list_double_heading_pane_t1_ParamLimits

0x7732,	// (0x0004e1f6) list_double_heading_pane_t1

0x7748,	// (0x0004e20c) list_double_heading_pane_t2_ParamLimits

0x7748,	// (0x0004e20c) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0005614a) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0005614a) list_double_heading_pane_t

0x09ef,	// (0x000474b3) list_double_graphic_heading_pane_g1_ParamLimits

0x09ef,	// (0x000474b3) list_double_graphic_heading_pane_g1

0x7721,	// (0x0004e1e5) list_double_graphic_heading_pane_g2_ParamLimits

0x7721,	// (0x0004e1e5) list_double_graphic_heading_pane_g2

0x86c6,	// (0x0004f18a) list_double_graphic_heading_pane_g3_ParamLimits

0x86c6,	// (0x0004f18a) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0005614f) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0005614f) list_double_graphic_heading_pane_g

0x775a,	// (0x0004e21e) list_double_graphic_heading_pane_t1_ParamLimits

0x775a,	// (0x0004e21e) list_double_graphic_heading_pane_t1

0x7770,	// (0x0004e234) list_double_graphic_heading_pane_t2_ParamLimits

0x7770,	// (0x0004e234) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00056156) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00056156) list_double_graphic_heading_pane_t

0x75f0,	// (0x0004e0b4) list_double_time_pane_g1_ParamLimits

0x75f0,	// (0x0004e0b4) list_double_time_pane_g1

0x7601,	// (0x0004e0c5) list_double_time_pane_g2_ParamLimits

0x7601,	// (0x0004e0c5) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x000560fe) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x000560fe) list_double_time_pane_g

0x7782,	// (0x0004e246) list_double_time_pane_t1_ParamLimits

0x7782,	// (0x0004e246) list_double_time_pane_t1

0x7798,	// (0x0004e25c) list_double_time_pane_t2_ParamLimits

0x7798,	// (0x0004e25c) list_double_time_pane_t2

0x77aa,	// (0x0004e26e) list_double_time_pane_t3_ParamLimits

0x77aa,	// (0x0004e26e) list_double_time_pane_t3

0x77bc,	// (0x0004e280) list_double_time_pane_t4_ParamLimits

0x77bc,	// (0x0004e280) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0005615b) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0005615b) list_double_time_pane_t

0x77ce,	// (0x0004e292) list_setting_pane_g1_ParamLimits

0x77ce,	// (0x0004e292) list_setting_pane_g1

0x0b67,	// (0x0004762b) list_setting_pane_g2_ParamLimits

0x0b67,	// (0x0004762b) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x00056164) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x00056164) list_setting_pane_g

0x77da,	// (0x0004e29e) list_setting_pane_t1_ParamLimits

0x77da,	// (0x0004e29e) list_setting_pane_t1

0x77f4,	// (0x0004e2b8) list_setting_pane_t2_ParamLimits

0x77f4,	// (0x0004e2b8) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x00056169) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x00056169) list_setting_pane_t

0x7833,	// (0x0004e2f7) set_value_pane_cp_ParamLimits

0x7833,	// (0x0004e2f7) set_value_pane_cp

0x783f,	// (0x0004e303) list_setting_number_pane_g1_ParamLimits

0x783f,	// (0x0004e303) list_setting_number_pane_g1

0x784b,	// (0x0004e30f) list_setting_number_pane_g2_ParamLimits

0x784b,	// (0x0004e30f) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x00056170) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x00056170) list_setting_number_pane_g

0x7857,	// (0x0004e31b) list_setting_number_pane_t1_ParamLimits

0x7857,	// (0x0004e31b) list_setting_number_pane_t1

0x7870,	// (0x0004e334) list_setting_number_pane_t2_ParamLimits

0x7870,	// (0x0004e334) list_setting_number_pane_t2

0x788a,	// (0x0004e34e) list_setting_number_pane_t3_ParamLimits

0x788a,	// (0x0004e34e) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00056175) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00056175) list_setting_number_pane_t

0x7833,	// (0x0004e2f7) set_value_pane_ParamLimits

0x7833,	// (0x0004e2f7) set_value_pane

0xbabd,	// (0x00052581) bg_set_opt_pane_ParamLimits

0xbabd,	// (0x00052581) bg_set_opt_pane

0x0cca,	// (0x0004778e) set_value_pane_t1

0xbade,	// (0x000525a2) slider_set_pane_cp3

0xbae7,	// (0x000525ab) volume_small_pane_cp

0xbaf0,	// (0x000525b4) list_form_gen_pane

0xbaf9,	// (0x000525bd) scroll_pane_cp8

0x78cd,	// (0x0004e391) form_field_data_pane_ParamLimits

0x78cd,	// (0x0004e391) form_field_data_pane

0x78e4,	// (0x0004e3a8) form_field_data_wide_pane_ParamLimits

0x78e4,	// (0x0004e3a8) form_field_data_wide_pane

0x7904,	// (0x0004e3c8) form_field_popup_pane_ParamLimits

0x7904,	// (0x0004e3c8) form_field_popup_pane

0x791c,	// (0x0004e3e0) form_field_popup_wide_pane_ParamLimits

0x791c,	// (0x0004e3e0) form_field_popup_wide_pane

0x0d66,	// (0x0004782a) form_field_slider_pane_ParamLimits

0x0d66,	// (0x0004782a) form_field_slider_pane

0x0d79,	// (0x0004783d) form_field_slider_wide_pane_ParamLimits

0x0d79,	// (0x0004783d) form_field_slider_wide_pane

0xbb0a,	// (0x000525ce) data_form_pane

0x793d,	// (0x0004e401) form_field_data_pane_t1

0xbb16,	// (0x000525da) input_focus_pane

0xbb24,	// (0x000525e8) data_form_wide_pane

0x2868,	// (0x0004932c) form_field_data_wide_pane_t1

0xb545,	// (0x00052009) input_focus_pane_cp6

0x7957,	// (0x0004e41b) form_field_popup_pane_t1

0xbb16,	// (0x000525da) input_focus_pane_cp7

0xbb50,	// (0x00052614) list_form_pane

0x28aa,	// (0x0004936e) form_field_popup_wide_pane_t1

0xbb16,	// (0x000525da) input_focus_pane_cp8

0xbb5c,	// (0x00052620) list_form_wide_pane

0x7979,	// (0x0004e43d) form_field_slider_pane_t1_ParamLimits

0x7979,	// (0x0004e43d) form_field_slider_pane_t1

0x7991,	// (0x0004e455) form_field_slider_pane_t2_ParamLimits

0x7991,	// (0x0004e455) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00056185) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00056185) form_field_slider_pane_t

0xa7d7,	// (0x0005129b) input_focus_pane_cp9_ParamLimits

0xa7d7,	// (0x0005129b) input_focus_pane_cp9

0x79a6,	// (0x0004e46a) slider_cont_pane_ParamLimits

0x79a6,	// (0x0004e46a) slider_cont_pane

0xbb6b,	// (0x0005262f) form_field_slider_wide_pane_t1_ParamLimits

0xbb6b,	// (0x0005262f) form_field_slider_wide_pane_t1

0x2906,	// (0x000493ca) form_field_slider_wide_pane_t2_ParamLimits

0x2906,	// (0x000493ca) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0005618a) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0005618a) form_field_slider_wide_pane_t

0xa7d7,	// (0x0005129b) input_focus_pane_cp10_ParamLimits

0xa7d7,	// (0x0005129b) input_focus_pane_cp10

0x79ba,	// (0x0004e47e) slider_cont_pane_cp1_ParamLimits

0x79ba,	// (0x0004e47e) slider_cont_pane_cp1

0x79ce,	// (0x0004e492) slider_form_pane_cp

0xbb7d,	// (0x00052641) input_focus_pane_g1

0xbb85,	// (0x00052649) input_focus_pane_g2

0xbb8d,	// (0x00052651) input_focus_pane_g3

0xbb95,	// (0x00052659) input_focus_pane_g4

0xbb9d,	// (0x00052661) input_focus_pane_g5

0xbba5,	// (0x00052669) input_focus_pane_g6

0xbbad,	// (0x00052671) input_focus_pane_g7

0xbbb5,	// (0x00052679) input_focus_pane_g8

0xbbbd,	// (0x00052681) input_focus_pane_g9

0xa77f,	// (0x00051243) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0005618f) input_focus_pane_g

0xcfaa,	// (0x00053a6e) wait_border_pane_g3_copy1

0x79d6,	// (0x0004e49a) data_form_pane_t1

0xa77f,	// (0x00051243) wait_anim_pane_g1_copy1

0x7df7,	// (0x0004e8bb) data_form_wide_pane_t1

0x79ef,	// (0x0004e4b3) list_form_graphic_pane_cp_ParamLimits

0x79ef,	// (0x0004e4b3) list_form_graphic_pane_cp

0xdc39,	// (0x000546fd) slider_form_pane_g1

0xdc42,	// (0x00054706) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x0005647b) slider_form_pane_g

0x7a00,	// (0x0004e4c4) list_form_graphic_pane_ParamLimits

0x7a00,	// (0x0004e4c4) list_form_graphic_pane

0x2984,	// (0x00049448) list_form_graphic_pane_g1

0x298c,	// (0x00049450) list_form_graphic_pane_t1_ParamLimits

0x298c,	// (0x00049450) list_form_graphic_pane_t1

0xa7e5,	// (0x000512a9) list_highlight_pane_cp5_ParamLimits

0xa7e5,	// (0x000512a9) list_highlight_pane_cp5

0x7a12,	// (0x0004e4d6) find_pane_g1

0xbbc5,	// (0x00052689) input_find_pane

0x7a1b,	// (0x0004e4df) input_find_pane_g1_ParamLimits

0x7a1b,	// (0x0004e4df) input_find_pane_g1

0x7a27,	// (0x0004e4eb) input_find_pane_t1_ParamLimits

0x7a27,	// (0x0004e4eb) input_find_pane_t1

0x7a3c,	// (0x0004e500) input_find_pane_t2_ParamLimits

0x7a3c,	// (0x0004e500) input_find_pane_t2

0x0001,

0xf6e0,	// (0x000561a4) input_find_pane_t_ParamLimits

0xf6e0,	// (0x000561a4) input_find_pane_t

0xbbce,	// (0x00052692) input_focus_pane_cp5_ParamLimits

0xbbce,	// (0x00052692) input_focus_pane_cp5

0x86de,	// (0x0004f1a2) bg_popup_window_pane_cp2_ParamLimits

0x86de,	// (0x0004f1a2) bg_popup_window_pane_cp2

0x86eb,	// (0x0004f1af) listscroll_menu_pane_ParamLimits

0x86eb,	// (0x0004f1af) listscroll_menu_pane

0x86f7,	// (0x0004f1bb) popup_submenu_window_ParamLimits

0x86f7,	// (0x0004f1bb) popup_submenu_window

0xbbdc,	// (0x000526a0) find_popup_pane_g1

0xbbe4,	// (0x000526a8) input_popup_find_pane_cp

0xbbce,	// (0x00052692) input_focus_pane_cp4_ParamLimits

0xbbce,	// (0x00052692) input_focus_pane_cp4

0xbbee,	// (0x000526b2) input_popup_find_pane_t1_ParamLimits

0xbbee,	// (0x000526b2) input_popup_find_pane_t1

0xa789,	// (0x0005124d) bg_popup_sub_pane_cp

0xbc1c,	// (0x000526e0) listscroll_popup_sub_pane

0xbc24,	// (0x000526e8) list_submenu_pane_ParamLimits

0xbc24,	// (0x000526e8) list_submenu_pane

0xbc35,	// (0x000526f9) scroll_pane_cp4

0xbc3d,	// (0x00052701) list_single_popup_submenu_pane_ParamLimits

0xbc3d,	// (0x00052701) list_single_popup_submenu_pane

0xbc51,	// (0x00052715) list_single_popup_submenu_pane_g1

0xbc59,	// (0x0005271d) list_single_popup_submenu_pane_t1_ParamLimits

0xbc59,	// (0x0005271d) list_single_popup_submenu_pane_t1

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp1_ParamLimits

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp1

0x88ed,	// (0x0004f3b1) tabs_2_active_pane_g1

0x88f5,	// (0x0004f3b9) tabs_2_active_pane_t1

0xa7d7,	// (0x0005129b) bg_passive_tab_pane_cp1_ParamLimits

0xa7d7,	// (0x0005129b) bg_passive_tab_pane_cp1

0x88ed,	// (0x0004f3b1) tabs_2_passive_pane_g1

0x88f5,	// (0x0004f3b9) tabs_2_passive_pane_t1

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp4

0x8907,	// (0x0004f3cb) tabs_2_long_active_pane_t1

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp4

0x13ec,	// (0x00047eb0) list_single_midp_graphic_pane_g4_ParamLimits

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp5

0x891a,	// (0x0004f3de) tabs_3_long_active_pane_t1

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp5

0x13ec,	// (0x00047eb0) list_single_midp_graphic_pane_g4

0xa7e5,	// (0x000512a9) bg_popup_window_pane_cp13_ParamLimits

0xa7e5,	// (0x000512a9) bg_popup_window_pane_cp13

0xbc83,	// (0x00052747) listscroll_popup_fast_pane_ParamLimits

0xbc83,	// (0x00052747) listscroll_popup_fast_pane

0xbc92,	// (0x00052756) grid_popup_fast_pane_ParamLimits

0xbc92,	// (0x00052756) grid_popup_fast_pane

0xbca4,	// (0x00052768) scroll_pane_cp9_ParamLimits

0xbca4,	// (0x00052768) scroll_pane_cp9

0xeec9,	// (0x0005598d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xeec9,	// (0x0005598d) list_single_graphic_hl_pane_t1_cp2

0xbcc8,	// (0x0005278c) input_focus_pane_cp20_ParamLimits

0xbcc8,	// (0x0005278c) input_focus_pane_cp20

0xbcd6,	// (0x0005279a) query_popup_data_pane_t1_ParamLimits

0xbcd6,	// (0x0005279a) query_popup_data_pane_t1

0xbce9,	// (0x000527ad) query_popup_data_pane_t2_ParamLimits

0xbce9,	// (0x000527ad) query_popup_data_pane_t2

0xbd2f,	// (0x000527f3) query_popup_data_pane_t3_ParamLimits

0xbd2f,	// (0x000527f3) query_popup_data_pane_t3

0xbd70,	// (0x00052834) query_popup_data_pane_t4_ParamLimits

0xbd70,	// (0x00052834) query_popup_data_pane_t4

0xbdac,	// (0x00052870) query_popup_data_pane_t5_ParamLimits

0xbdac,	// (0x00052870) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x000561a9) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x000561a9) query_popup_data_pane_t

0xbb7d,	// (0x00052641) bg_set_opt_pane_g1

0xbb85,	// (0x00052649) bg_set_opt_pane_g2

0xbb8d,	// (0x00052651) bg_set_opt_pane_g3

0xbb95,	// (0x00052659) bg_set_opt_pane_g4

0xbb9d,	// (0x00052661) bg_set_opt_pane_g5

0xbba5,	// (0x00052669) bg_set_opt_pane_g6

0xbbad,	// (0x00052671) bg_set_opt_pane_g7

0xbbb5,	// (0x00052679) bg_set_opt_pane_g8

0xbbbd,	// (0x00052681) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x000561b4) bg_set_opt_pane_g

0x1059,	// (0x00047b1d) control_top_pane_stacon_ParamLimits

0x1059,	// (0x00047b1d) control_top_pane_stacon

0x10ac,	// (0x00047b70) signal_pane_stacon_ParamLimits

0x10ac,	// (0x00047b70) signal_pane_stacon

0xc221,	// (0x00052ce5) stacon_top_pane_g1_ParamLimits

0xc221,	// (0x00052ce5) stacon_top_pane_g1

0x10d1,	// (0x00047b95) title_pane_stacon_ParamLimits

0x10d1,	// (0x00047b95) title_pane_stacon

0x10fb,	// (0x00047bbf) uni_indicator_pane_stacon_ParamLimits

0x10fb,	// (0x00047bbf) uni_indicator_pane_stacon

0x1110,	// (0x00047bd4) battery_pane_stacon_ParamLimits

0x1110,	// (0x00047bd4) battery_pane_stacon

0x1154,	// (0x00047c18) control_bottom_pane_stacon_ParamLimits

0x1154,	// (0x00047c18) control_bottom_pane_stacon

0x1177,	// (0x00047c3b) navi_pane_stacon_ParamLimits

0x1177,	// (0x00047c3b) navi_pane_stacon

0xc243,	// (0x00052d07) stacon_bottom_pane_g1_ParamLimits

0xc243,	// (0x00052d07) stacon_bottom_pane_g1

0x0dba,	// (0x0004787e) aid_levels_signal_lsc_ParamLimits

0x0dba,	// (0x0004787e) aid_levels_signal_lsc

0x0dd1,	// (0x00047895) signal_pane_stacon_g1_ParamLimits

0x0dd1,	// (0x00047895) signal_pane_stacon_g1

0x0de5,	// (0x000478a9) signal_pane_stacon_g2_ParamLimits

0x0de5,	// (0x000478a9) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x000561c7) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x000561c7) signal_pane_stacon_g

0x0e1a,	// (0x000478de) title_pane_stacon_t1_ParamLimits

0x0e1a,	// (0x000478de) title_pane_stacon_t1

0xbdf0,	// (0x000528b4) uni_indicator_pane_stacon_g1

0xbdfa,	// (0x000528be) uni_indicator_pane_stacon_g2

0xbe04,	// (0x000528c8) uni_indicator_pane_stacon_g3

0xbe0e,	// (0x000528d2) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x000561d3) uni_indicator_pane_stacon_g

0x0e3f,	// (0x00047903) control_top_pane_stacon_g1

0x0e47,	// (0x0004790b) control_top_pane_stacon_t1_ParamLimits

0x0e47,	// (0x0004790b) control_top_pane_stacon_t1

0x0e7e,	// (0x00047942) aid_levels_battery_lsc_ParamLimits

0x0e7e,	// (0x00047942) aid_levels_battery_lsc

0x0e96,	// (0x0004795a) battery_pane_stacon_g1_ParamLimits

0x0e96,	// (0x0004795a) battery_pane_stacon_g1

0x0ea9,	// (0x0004796d) battery_pane_stacon_g2_ParamLimits

0x0ea9,	// (0x0004796d) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x000561dc) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x000561dc) battery_pane_stacon_g

0x0ee7,	// (0x000479ab) navi_icon_pane_stacon

0x0efb,	// (0x000479bf) navi_navi_pane_stacon

0x0ee7,	// (0x000479ab) navi_text_pane_stacon

0x0e3f,	// (0x00047903) control_bottom_pane_stacon_g1

0x0f0f,	// (0x000479d3) control_bottom_pane_stacon_t1_ParamLimits

0x0f0f,	// (0x000479d3) control_bottom_pane_stacon_t1

0x892c,	// (0x0004f3f0) grid_app_pane_ParamLimits

0x892c,	// (0x0004f3f0) grid_app_pane

0x8964,	// (0x0004f428) scroll_pane_cp15_ParamLimits

0x8964,	// (0x0004f428) scroll_pane_cp15

0x8981,	// (0x0004f445) cell_app_pane_ParamLimits

0x8981,	// (0x0004f445) cell_app_pane

0x89c6,	// (0x0004f48a) cell_app_pane_g1_ParamLimits

0x89c6,	// (0x0004f48a) cell_app_pane_g1

0xbe32,	// (0x000528f6) cell_app_pane_g2_ParamLimits

0xbe32,	// (0x000528f6) cell_app_pane_g2

0x0001,

0xf71d,	// (0x000561e1) cell_app_pane_g_ParamLimits

0xf71d,	// (0x000561e1) cell_app_pane_g

0xbe3e,	// (0x00052902) cell_app_pane_t1_ParamLimits

0xbe3e,	// (0x00052902) cell_app_pane_t1

0xbe50,	// (0x00052914) grid_highlight_pane_ParamLimits

0xbe50,	// (0x00052914) grid_highlight_pane

0xbb7d,	// (0x00052641) cell_highlight_pane_g1

0xbb85,	// (0x00052649) cell_highlight_pane_g2

0xbb8d,	// (0x00052651) cell_highlight_pane_g3

0xbb95,	// (0x00052659) cell_highlight_pane_g4

0xbb9d,	// (0x00052661) cell_highlight_pane_g5

0xbba5,	// (0x00052669) cell_highlight_pane_g6

0xbbad,	// (0x00052671) cell_highlight_pane_g7

0xbbb5,	// (0x00052679) cell_highlight_pane_g8

0xbbbd,	// (0x00052681) cell_highlight_pane_g9

0xa77f,	// (0x00051243) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0005618f) cell_highlight_pane_g

0xbe61,	// (0x00052925) bg_scroll_pane

0x0f59,	// (0x00047a1d) scroll_handle_pane

0xbea8,	// (0x0005296c) scroll_bg_pane_g1

0xbebd,	// (0x00052981) scroll_bg_pane_g2

0xbed5,	// (0x00052999) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x000561e6) scroll_bg_pane_g

0xbeea,	// (0x000529ae) scroll_handle_focus_pane_ParamLimits

0xbeea,	// (0x000529ae) scroll_handle_focus_pane

0xbea8,	// (0x0005296c) scroll_handle_pane_g1

0xbef7,	// (0x000529bb) scroll_handle_pane_g2

0xbed5,	// (0x00052999) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x000561ed) scroll_handle_pane_g

0xbbce,	// (0x00052692) bg_popup_sub_pane_cp21_ParamLimits

0xbbce,	// (0x00052692) bg_popup_sub_pane_cp21

0xbf0b,	// (0x000529cf) popup_fep_japan_predictive_window_t1_ParamLimits

0xbf0b,	// (0x000529cf) popup_fep_japan_predictive_window_t1

0xbf25,	// (0x000529e9) popup_fep_japan_predictive_window_t2_ParamLimits

0xbf25,	// (0x000529e9) popup_fep_japan_predictive_window_t2

0xbf58,	// (0x00052a1c) popup_fep_japan_predictive_window_t3_ParamLimits

0xbf58,	// (0x00052a1c) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x000561f4) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x000561f4) popup_fep_japan_predictive_window_t

0xa789,	// (0x0005124d) bg_popup_sub_pane_cp23

0xbf8f,	// (0x00052a53) listscroll_japin_cand_pane

0xbf97,	// (0x00052a5b) popup_fep_japan_candidate_window_t1

0xbfa5,	// (0x00052a69) candidate_pane_ParamLimits

0xbfa5,	// (0x00052a69) candidate_pane

0xbfb7,	// (0x00052a7b) scroll_pane_cp30

0xbfbf,	// (0x00052a83) list_single_popup_jap_candidate_pane_ParamLimits

0xbfbf,	// (0x00052a83) list_single_popup_jap_candidate_pane

0xa789,	// (0x0005124d) list_highlight_pane_cp30

0xbfd4,	// (0x00052a98) list_single_popup_jap_candidate_pane_t1

0xbfe3,	// (0x00052aa7) level_1_signal

0xbff0,	// (0x00052ab4) level_2_signal

0xbffd,	// (0x00052ac1) level_3_signal

0xc00a,	// (0x00052ace) level_4_signal

0xc017,	// (0x00052adb) level_5_signal

0xc024,	// (0x00052ae8) level_6_signal

0xc031,	// (0x00052af5) level_7_signal

0xbfe3,	// (0x00052aa7) level_1_battery

0xbff0,	// (0x00052ab4) level_2_battery

0xbffd,	// (0x00052ac1) level_3_battery

0xc00a,	// (0x00052ace) level_4_battery

0xc017,	// (0x00052adb) level_5_battery

0xc024,	// (0x00052ae8) level_6_battery

0xc031,	// (0x00052af5) level_7_battery

0xc056,	// (0x00052b1a) list_menu_pane_ParamLimits

0xc056,	// (0x00052b1a) list_menu_pane

0xc067,	// (0x00052b2b) scroll_pane_cp25_ParamLimits

0xc067,	// (0x00052b2b) scroll_pane_cp25

0xc080,	// (0x00052b44) list_double2_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double2_graphic_pane_cp2

0xc080,	// (0x00052b44) list_double2_large_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double2_large_graphic_pane_cp2

0xc080,	// (0x00052b44) list_double2_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double2_pane_cp2

0xc080,	// (0x00052b44) list_double_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double_graphic_pane_cp2

0xc080,	// (0x00052b44) list_double_large_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double_large_graphic_pane_cp2

0xc080,	// (0x00052b44) list_double_number_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double_number_pane_cp2

0xc080,	// (0x00052b44) list_double_pane_cp2_ParamLimits

0xc080,	// (0x00052b44) list_double_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_2graphic_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_2graphic_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_graphic_heading_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_graphic_heading_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_graphic_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_graphic_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_heading_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_heading_pane_cp2

0xc090,	// (0x00052b54) list_single_large_graphic_pane_cp2_ParamLimits

0xc090,	// (0x00052b54) list_single_large_graphic_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_number_heading_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_number_heading_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_number_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_number_pane_cp2

0x89f9,	// (0x0004f4bd) list_single_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_pane_cp2

0xc0aa,	// (0x00052b6e) bg_popup_sub_pane_cp22

0x100b,	// (0x00047acf) popup_side_volume_key_window_g1

0x1035,	// (0x00047af9) popup_side_volume_key_window_t1

0x1051,	// (0x00047b15) volume_small_pane_cp1

0xa7d7,	// (0x0005129b) bg_popup_sub_pane_cp24_ParamLimits

0xa7d7,	// (0x0005129b) bg_popup_sub_pane_cp24

0xc0c0,	// (0x00052b84) fep_china_uni_candidate_pane_ParamLimits

0xc0c0,	// (0x00052b84) fep_china_uni_candidate_pane

0xc0d4,	// (0x00052b98) fep_china_uni_entry_pane

0xc0e4,	// (0x00052ba8) popup_fep_china_uni_window_g1

0xc100,	// (0x00052bc4) fep_china_uni_entry_pane_g1

0xc108,	// (0x00052bcc) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00056221) fep_china_uni_entry_pane_g

0xc110,	// (0x00052bd4) fep_entry_item_pane

0xc11a,	// (0x00052bde) fep_candidate_item_pane

0xc122,	// (0x00052be6) fep_china_uni_candidate_pane_g1

0xc12a,	// (0x00052bee) fep_china_uni_candidate_pane_g2

0xc132,	// (0x00052bf6) fep_china_uni_candidate_pane_g3

0xc13a,	// (0x00052bfe) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00056226) fep_china_uni_candidate_pane_g

0xa77f,	// (0x00051243) fep_entry_item_pane_g1

0xc142,	// (0x00052c06) fep_entry_item_pane_t1_ParamLimits

0xc142,	// (0x00052c06) fep_entry_item_pane_t1

0xc158,	// (0x00052c1c) fep_candidate_item_pane_t1_ParamLimits

0xc158,	// (0x00052c1c) fep_candidate_item_pane_t1

0xc16d,	// (0x00052c31) fep_candidate_item_pane_t2_ParamLimits

0xc16d,	// (0x00052c31) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0005622f) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0005622f) fep_candidate_item_pane_t

0xa7e5,	// (0x000512a9) list_highlight_pane_cp31_ParamLimits

0xa7e5,	// (0x000512a9) list_highlight_pane_cp31

0xc17f,	// (0x00052c43) level_1_signal_lsc

0xc188,	// (0x00052c4c) level_2_signal_lsc

0xc191,	// (0x00052c55) level_3_signal_lsc

0xc19a,	// (0x00052c5e) level_4_signal_lsc

0xc1a3,	// (0x00052c67) level_5_signal_lsc

0xc1ac,	// (0x00052c70) level_6_signal_lsc

0xc1b5,	// (0x00052c79) level_7_signal_lsc

0xc1b5,	// (0x00052c79) level_1_battery_lsc

0xc1be,	// (0x00052c82) level_2_battery_lsc

0xc1c7,	// (0x00052c8b) level_3_battery_lsc

0xc1d0,	// (0x00052c94) level_4_battery_lsc

0xc1d9,	// (0x00052c9d) level_5_battery_lsc

0xc1e2,	// (0x00052ca6) level_6_battery_lsc

0xc17f,	// (0x00052c43) level_7_battery_lsc

0xc1eb,	// (0x00052caf) scroll_handle_focus_pane_g1

0xc1f4,	// (0x00052cb8) scroll_handle_focus_pane_g2

0xc1fd,	// (0x00052cc1) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00056234) scroll_handle_focus_pane_g

0x7a5a,	// (0x0004e51e) list_single_2graphic_pane_g1_ParamLimits

0x7a5a,	// (0x0004e51e) list_single_2graphic_pane_g1

0x86ad,	// (0x0004f171) list_single_2graphic_pane_g2_ParamLimits

0x86ad,	// (0x0004f171) list_single_2graphic_pane_g2

0x3166,	// (0x00049c2a) list_single_2graphic_pane_g3_ParamLimits

0x3166,	// (0x00049c2a) list_single_2graphic_pane_g3

0x872f,	// (0x0004f1f3) list_single_2graphic_pane_g4_ParamLimits

0x872f,	// (0x0004f1f3) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0005623b) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0005623b) list_single_2graphic_pane_g

0x7a66,	// (0x0004e52a) list_single_2graphic_pane_t1_ParamLimits

0x7a66,	// (0x0004e52a) list_single_2graphic_pane_t1

0x7a94,	// (0x0004e558) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7a94,	// (0x0004e558) list_double2_graphic_large_graphic_pane_g1

0x86ad,	// (0x0004f171) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x86ad,	// (0x0004f171) list_double2_graphic_large_graphic_pane_g2

0x3166,	// (0x00049c2a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x3166,	// (0x00049c2a) list_double2_graphic_large_graphic_pane_g3

0x7aa6,	// (0x0004e56a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7aa6,	// (0x0004e56a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00056244) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00056244) list_double2_graphic_large_graphic_pane_g

0x7ab2,	// (0x0004e576) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7ab2,	// (0x0004e576) list_double2_graphic_large_graphic_pane_t1

0x7ac8,	// (0x0004e58c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7ac8,	// (0x0004e58c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0005624d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0005624d) list_double2_graphic_large_graphic_pane_t

0xc2be,	// (0x00052d82) popup_fast_swap_window_ParamLimits

0xc2be,	// (0x00052d82) popup_fast_swap_window

0xc2da,	// (0x00052d9e) popup_side_volume_key_window

0xc2f6,	// (0x00052dba) stacon_top_pane

0xc300,	// (0x00052dc4) status_pane_ParamLimits

0xc300,	// (0x00052dc4) status_pane

0xc2f6,	// (0x00052dba) status_small_pane

0xa789,	// (0x0005124d) control_pane

0xa789,	// (0x0005124d) stacon_bottom_pane

0xbaf9,	// (0x000525bd) scroll_pane_cp121

0xbaf0,	// (0x000525b4) set_content_pane

0xc206,	// (0x00052cca) bg_active_tab_pane_g1_cp1

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp1

0xc218,	// (0x00052cdc) bg_active_tab_pane_g3_cp1

0xc206,	// (0x00052cca) bg_passive_tab_pane_g1_cp1

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp1

0xc218,	// (0x00052cdc) bg_passive_tab_pane_g3_cp1

0x8a59,	// (0x0004f51d) bg_active_tab_pane_g1_cp2

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp2

0x8a62,	// (0x0004f526) bg_active_tab_pane_g3_cp2

0x8a59,	// (0x0004f51d) bg_passive_tab_pane_g1_cp2

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp2

0x8a62,	// (0x0004f526) bg_passive_tab_pane_g3_cp2

0x8a6b,	// (0x0004f52f) bg_active_tab_pane_g1_cp3

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp3

0x8a74,	// (0x0004f538) bg_active_tab_pane_g3_cp3

0x8a6b,	// (0x0004f52f) bg_passive_tab_pane_g1_cp3

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp3

0x8a74,	// (0x0004f538) bg_passive_tab_pane_g3_cp3

0x8a7d,	// (0x0004f541) bg_active_tab_pane_g1_cp4

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp4

0x8a86,	// (0x0004f54a) bg_active_tab_pane_g3_cp4

0x8a7d,	// (0x0004f541) bg_passive_tab_pane_g1_cp4

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp4

0x8a86,	// (0x0004f54a) bg_passive_tab_pane_g3_cp4

0xc25f,	// (0x00052d23) bg_active_tab_pane_g1_cp5

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp5

0xc268,	// (0x00052d2c) bg_active_tab_pane_g3_cp5

0xc25f,	// (0x00052d23) bg_passive_tab_pane_g1_cp5

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp5

0xc268,	// (0x00052d2c) bg_passive_tab_pane_g3_cp5

0x8a8f,	// (0x0004f553) list_set_graphic_pane_ParamLimits

0x8a8f,	// (0x0004f553) list_set_graphic_pane

0xa789,	// (0x0005124d) bg_set_opt_pane_cp4

0x8aa1,	// (0x0004f565) list_set_graphic_pane_g1_ParamLimits

0x8aa1,	// (0x0004f565) list_set_graphic_pane_g1

0x8aad,	// (0x0004f571) list_set_graphic_pane_g2_ParamLimits

0x8aad,	// (0x0004f571) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00056252) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00056252) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x000565aa) volume_small_pane_cp_g

0xc271,	// (0x00052d35) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc271,	// (0x00052d35) list_double2_large_graphic_pane_g1_cp2

0xc27d,	// (0x00052d41) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc27d,	// (0x00052d41) list_double2_large_graphic_pane_g2_cp2

0xc28e,	// (0x00052d52) list_double2_large_graphic_pane_g3_cp2

0xc296,	// (0x00052d5a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc296,	// (0x00052d5a) list_double2_large_graphic_pane_t1_cp2

0xc2ac,	// (0x00052d70) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc2ac,	// (0x00052d70) list_double2_large_graphic_pane_t2_cp2

0xd9e5,	// (0x000544a9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd9e5,	// (0x000544a9) list_double_large_graphic_pane_g1_cp2

0xd9f6,	// (0x000544ba) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd9f6,	// (0x000544ba) list_double_large_graphic_pane_g2_cp2

0xc41c,	// (0x00052ee0) list_double_large_graphic_pane_g3_cp2

0xda07,	// (0x000544cb) list_double_large_graphic_pane_g4_cp

0xda0f,	// (0x000544d3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xda0f,	// (0x000544d3) list_double_large_graphic_pane_t1_cp2

0xda26,	// (0x000544ea) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xda26,	// (0x000544ea) list_double_large_graphic_pane_t2_cp2

0xc30e,	// (0x00052dd2) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc30e,	// (0x00052dd2) list_double2_graphic_pane_g1_cp2

0xc31c,	// (0x00052de0) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc31c,	// (0x00052de0) list_double2_graphic_pane_g2_cp2

0xc32d,	// (0x00052df1) list_double2_graphic_pane_g3_cp2

0xc337,	// (0x00052dfb) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc337,	// (0x00052dfb) list_double2_graphic_pane_t1_cp2

0xc34d,	// (0x00052e11) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc34d,	// (0x00052e11) list_double2_graphic_pane_t2_cp2

0xc35f,	// (0x00052e23) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc35f,	// (0x00052e23) list_single_number_heading_pane_g1_cp2

0xc36b,	// (0x00052e2f) list_single_number_heading_pane_g2_cp2

0xc373,	// (0x00052e37) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc373,	// (0x00052e37) list_single_number_heading_pane_t1_cp2

0xc389,	// (0x00052e4d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc389,	// (0x00052e4d) list_single_number_heading_pane_t2_cp2

0xc39b,	// (0x00052e5f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc39b,	// (0x00052e5f) list_single_number_heading_pane_t3_cp2

0xc35f,	// (0x00052e23) list_single_heading_pane_g1_cp2_ParamLimits

0xc35f,	// (0x00052e23) list_single_heading_pane_g1_cp2

0xc36b,	// (0x00052e2f) list_single_heading_pane_g2_cp2

0xc373,	// (0x00052e37) list_single_heading_pane_t1_cp2_ParamLimits

0xc373,	// (0x00052e37) list_single_heading_pane_t1_cp2

0xd7ed,	// (0x000542b1) list_single_heading_pane_t2_cp2_ParamLimits

0xd7ed,	// (0x000542b1) list_single_heading_pane_t2_cp2

0xd747,	// (0x0005420b) list_double_graphic_pane_g1_cp2_ParamLimits

0xd747,	// (0x0005420b) list_double_graphic_pane_g1_cp2

0xd753,	// (0x00054217) list_double_graphic_pane_g2_cp2_ParamLimits

0xd753,	// (0x00054217) list_double_graphic_pane_g2_cp2

0xd762,	// (0x00054226) list_double_graphic_pane_g3_cp2

0xd76a,	// (0x0005422e) list_double_graphic_pane_t1_cp2_ParamLimits

0xd76a,	// (0x0005422e) list_double_graphic_pane_t1_cp2

0xd780,	// (0x00054244) list_double_graphic_pane_t2_cp2_ParamLimits

0xd780,	// (0x00054244) list_double_graphic_pane_t2_cp2

0xc410,	// (0x00052ed4) list_double_number_pane_g1_cp2_ParamLimits

0xc410,	// (0x00052ed4) list_double_number_pane_g1_cp2

0xc41c,	// (0x00052ee0) list_double_number_pane_g2_cp2

0xd70b,	// (0x000541cf) list_double_number_pane_t1_cp2_ParamLimits

0xd70b,	// (0x000541cf) list_double_number_pane_t1_cp2

0xd71f,	// (0x000541e3) list_double_number_pane_t2_cp2_ParamLimits

0xd71f,	// (0x000541e3) list_double_number_pane_t2_cp2

0xd735,	// (0x000541f9) list_double_number_pane_t3_cp2_ParamLimits

0xd735,	// (0x000541f9) list_double_number_pane_t3_cp2

0xd682,	// (0x00054146) list_single_graphic_pane_g1_cp2_ParamLimits

0xd682,	// (0x00054146) list_single_graphic_pane_g1_cp2

0xc474,	// (0x00052f38) list_single_graphic_pane_g2_cp2_ParamLimits

0xc474,	// (0x00052f38) list_single_graphic_pane_g2_cp2

0xc480,	// (0x00052f44) list_single_graphic_pane_g3_cp2

0xd658,	// (0x0005411c) list_single_graphic_pane_t1_cp2_ParamLimits

0xd658,	// (0x0005411c) list_single_graphic_pane_t1_cp2

0xc474,	// (0x00052f38) list_single_number_pane_g1_cp2_ParamLimits

0xc474,	// (0x00052f38) list_single_number_pane_g1_cp2

0xc480,	// (0x00052f44) list_single_number_pane_g2_cp2

0xd658,	// (0x0005411c) list_single_number_pane_t1_cp2_ParamLimits

0xd658,	// (0x0005411c) list_single_number_pane_t1_cp2

0xd66e,	// (0x00054132) list_single_number_pane_t2_cp2_ParamLimits

0xd66e,	// (0x00054132) list_single_number_pane_t2_cp2

0xc27d,	// (0x00052d41) list_double2_pane_g1_cp2_ParamLimits

0xc27d,	// (0x00052d41) list_double2_pane_g1_cp2

0xc28e,	// (0x00052d52) list_double2_pane_g2_cp2

0xc3e8,	// (0x00052eac) list_double2_pane_t1_cp2_ParamLimits

0xc3e8,	// (0x00052eac) list_double2_pane_t1_cp2

0xc3fe,	// (0x00052ec2) list_double2_pane_t2_cp2_ParamLimits

0xc3fe,	// (0x00052ec2) list_double2_pane_t2_cp2

0xc410,	// (0x00052ed4) list_double_pane_g1_cp2_ParamLimits

0xc410,	// (0x00052ed4) list_double_pane_g1_cp2

0xc41c,	// (0x00052ee0) list_double_pane_g2_cp2

0xc424,	// (0x00052ee8) list_double_pane_t1_cp2_ParamLimits

0xc424,	// (0x00052ee8) list_double_pane_t1_cp2

0xc43a,	// (0x00052efe) list_double_pane_t2_cp2_ParamLimits

0xc43a,	// (0x00052efe) list_double_pane_t2_cp2

0xc464,	// (0x00052f28) list_single_pane_cp2_g3

0xc474,	// (0x00052f38) list_single_pane_g1_cp2_ParamLimits

0xc474,	// (0x00052f38) list_single_pane_g1_cp2

0xc480,	// (0x00052f44) list_single_pane_g2_cp2

0xc488,	// (0x00052f4c) list_single_pane_t1_cp2_ParamLimits

0xc488,	// (0x00052f4c) list_single_pane_t1_cp2

0xc4a0,	// (0x00052f64) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc4a0,	// (0x00052f64) list_single_large_graphic_pane_g1_cp2

0xc4ac,	// (0x00052f70) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc4ac,	// (0x00052f70) list_single_large_graphic_pane_g2_cp2

0xc4b8,	// (0x00052f7c) list_single_large_graphic_pane_g3_cp2

0xc4c0,	// (0x00052f84) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc4c0,	// (0x00052f84) list_single_large_graphic_pane_g4_cp1

0xc4da,	// (0x00052f9e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc4da,	// (0x00052f9e) list_single_large_graphic_pane_t1_cp2

0xd624,	// (0x000540e8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd624,	// (0x000540e8) list_single_graphic_heading_pane_g1_cp2

0xd5f1,	// (0x000540b5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd5f1,	// (0x000540b5) list_single_graphic_heading_pane_g4_cp2

0xc480,	// (0x00052f44) list_single_graphic_heading_pane_g5_cp2

0xd630,	// (0x000540f4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd630,	// (0x000540f4) list_single_graphic_heading_pane_t1_cp2

0xd646,	// (0x0005410a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd646,	// (0x0005410a) list_single_graphic_heading_pane_t2_cp2

0xd5e5,	// (0x000540a9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd5e5,	// (0x000540a9) list_single_2graphic_pane_g1_cp2

0xd5f1,	// (0x000540b5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd5f1,	// (0x000540b5) list_single_2graphic_pane_g2_cp2

0xc480,	// (0x00052f44) list_single_2graphic_pane_g3_cp2

0xd602,	// (0x000540c6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd602,	// (0x000540c6) list_single_2graphic_pane_g4_cp2

0xd60e,	// (0x000540d2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd60e,	// (0x000540d2) list_single_2graphic_pane_t1_cp2

0xa77f,	// (0x00051243) list_highlight_pane_g10_cp1

0xd1db,	// (0x00053c9f) list_highlight_pane_g1_cp1

0xd1e3,	// (0x00053ca7) list_highlight_pane_g2_cp1

0xd1eb,	// (0x00053caf) list_highlight_pane_g3_cp1

0xd1f3,	// (0x00053cb7) list_highlight_pane_g4_cp1

0xd1fb,	// (0x00053cbf) list_highlight_pane_g5_cp1

0xd203,	// (0x00053cc7) list_highlight_pane_g6_cp1

0xd20b,	// (0x00053ccf) list_highlight_pane_g7_cp1

0xd213,	// (0x00053cd7) list_highlight_pane_g8_cp1

0xd21b,	// (0x00053cdf) list_highlight_pane_g9_cp1

0x9736,	// (0x000501fa) form_field_slider_pane_t3

0x9744,	// (0x00050208) form_field_slider_pane_t4

0xd0d5,	// (0x00053b99) slider_form_pane_ParamLimits

0xd0d5,	// (0x00053b99) slider_form_pane

0xa789,	// (0x0005124d) control_abbreviations

0xa789,	// (0x0005124d) control_conventions

0xa789,	// (0x0005124d) control_definitions

0xa789,	// (0x0005124d) format_table_attribute

0xd837,	// (0x000542fb) bg_popup_preview_window_pane_g9

0xa789,	// (0x0005124d) format_table_data2

0xa789,	// (0x0005124d) format_table_data3

0xa789,	// (0x0005124d) format_table_data_example

0x0008,

0xa789,	// (0x0005124d) intro_purpose

0xf917,	// (0x000563db) bg_popup_preview_window_pane_g

0xa789,	// (0x0005124d) texts_category

0xa789,	// (0x0005124d) texts_graphics

0xc4f0,	// (0x00052fb4) text_digital

0xc4ff,	// (0x00052fc3) text_primary

0xc50e,	// (0x00052fd2) text_primary_small

0xc51d,	// (0x00052fe1) text_secondary

0xc52c,	// (0x00052ff0) text_title

0xdcc6,	// (0x0005478a) bg_passive_tab_pane_g1_cp3_srt

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp3_srt

0xdccf,	// (0x00054793) bg_passive_tab_pane_g3_cp3_srt

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp3_srt_ParamLimits

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp3_srt

0xdcd8,	// (0x0005479c) tabs_4_active_pane_srt_g1

0x9ac8,	// (0x0005058c) tabs_4_active_pane_srt_t1_ParamLimits

0x9ac8,	// (0x0005058c) tabs_4_active_pane_srt_t1

0xdcc6,	// (0x0005478a) bg_active_tab_pane_g1_cp3_copy1

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp3_copy1

0xdccf,	// (0x00054793) bg_active_tab_pane_g3_cp3_copy1

0xa7e5,	// (0x000512a9) tabs_2_long_active_pane_srt_ParamLimits

0xa7e5,	// (0x000512a9) tabs_2_long_active_pane_srt

0xa7e5,	// (0x000512a9) tabs_2_long_passive_pane_srt_ParamLimits

0xa7e5,	// (0x000512a9) tabs_2_long_passive_pane_srt

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp4_srt

0xdbec,	// (0x000546b0) bg_passive_tab_pane_g1_cp4_srt

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp4_srt

0xdbf5,	// (0x000546b9) bg_passive_tab_pane_g3_cp4_srt

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp4_srt_ParamLimits

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp4_srt

0x98d6,	// (0x0005039a) tabs_2_long_active_pane_srt_t1_ParamLimits

0x98d6,	// (0x0005039a) tabs_2_long_active_pane_srt_t1

0xdbec,	// (0x000546b0) bg_active_tab_pane_g1_cp4_srt

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp4_srt

0xdbf5,	// (0x000546b9) bg_active_tab_pane_g3_cp4_srt

0xa7d7,	// (0x0005129b) tabs_3_long_active_pane_srt_ParamLimits

0xa7d7,	// (0x0005129b) tabs_3_long_active_pane_srt

0xa7d7,	// (0x0005129b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa7d7,	// (0x0005129b) tabs_3_long_passive_pane_cp_srt

0xa7d7,	// (0x0005129b) tabs_3_long_passive_pane_srt_ParamLimits

0xa7d7,	// (0x0005129b) tabs_3_long_passive_pane_srt

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp5_srt

0xc25f,	// (0x00052d23) bg_passive_tab_pane_g1_cp5_srt

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp5_srt

0xc268,	// (0x00052d2c) bg_passive_tab_pane_g3_cp5_srt

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp5_srt_ParamLimits

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp5_srt

0x98c0,	// (0x00050384) tabs_3_long_active_pane_srt_t1_ParamLimits

0x98c0,	// (0x00050384) tabs_3_long_active_pane_srt_t1

0xc25f,	// (0x00052d23) bg_active_tab_pane_g1_cp5_srt

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp5_srt

0xc268,	// (0x00052d2c) bg_active_tab_pane_g3_cp5_srt

0xdbde,	// (0x000546a2) navi_text_pane_srt_t1

0xdbd6,	// (0x0005469a) navi_icon_pane_srt_g1

0xc632,	// (0x000530f6) midp_editing_number_pane_srt

0xc53b,	// (0x00052fff) midp_ticker_pane_srt

0xc63a,	// (0x000530fe) midp_ticker_pane_srt_g1

0xc642,	// (0x00053106) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00056271) midp_ticker_pane_srt_g

0xc64a,	// (0x0005310e) midp_ticker_pane_srt_t1

0xdbc7,	// (0x0005468b) midp_editing_number_pane_t1_copy1

0x8ad1,	// (0x0004f595) listscroll_midp_pane

0x8ad1,	// (0x0004f595) midp_form_pane

0xc543,	// (0x00053007) midp_info_popup_window_ParamLimits

0xc543,	// (0x00053007) midp_info_popup_window

0xbbce,	// (0x00052692) bg_popup_sub_pane_cp50_ParamLimits

0xbbce,	// (0x00052692) bg_popup_sub_pane_cp50

0xce1e,	// (0x000538e2) listscroll_midp_info_pane_ParamLimits

0xce1e,	// (0x000538e2) listscroll_midp_info_pane

0xce06,	// (0x000538ca) listscroll_form_midp_pane_ParamLimits

0xce06,	// (0x000538ca) listscroll_form_midp_pane

0xce12,	// (0x000538d6) scroll_bar_cp050

0x972a,	// (0x000501ee) list_midp_pane

0xe54a,	// (0x0005500e) signal_pane_g2_cp

0xcd38,	// (0x000537fc) listscroll_midp_info_pane_t1_ParamLimits

0xcd38,	// (0x000537fc) listscroll_midp_info_pane_t1

0xcd50,	// (0x00053814) listscroll_midp_info_pane_t2_ParamLimits

0xcd50,	// (0x00053814) listscroll_midp_info_pane_t2

0xcd8e,	// (0x00053852) listscroll_midp_info_pane_t3_ParamLimits

0xcd8e,	// (0x00053852) listscroll_midp_info_pane_t3

0xcdc8,	// (0x0005388c) listscroll_midp_info_pane_t4_ParamLimits

0xcdc8,	// (0x0005388c) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x00056316) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x00056316) listscroll_midp_info_pane_t

0xbc35,	// (0x000526f9) scroll_pane_cp21

0xccd6,	// (0x0005379a) form_midp_field_choice_group_pane

0xccdf,	// (0x000537a3) form_midp_field_text_pane

0xcd1e,	// (0x000537e2) form_midp_field_time_pane

0xcd26,	// (0x000537ea) form_midp_gauge_slider_pane

0xcd2f,	// (0x000537f3) form_midp_gauge_wait_pane

0xa789,	// (0x0005124d) form_midp_image_pane

0x7c82,	// (0x0004e746) list_single_midp_pane_ParamLimits

0x7c82,	// (0x0004e746) list_single_midp_pane

0x9708,	// (0x000501cc) form_midp_field_text_pane_t1

0xcb71,	// (0x00053635) input_focus_pane_cp050

0xccc5,	// (0x00053789) list_midp_form_text_pane

0xcc94,	// (0x00053758) form_midp_field_choice_group_pane_t1

0xcca2,	// (0x00053766) input_focus_pane_cp051

0xccb6,	// (0x0005377a) list_midp_choice_pane

0xa789,	// (0x0005124d) status_idle_pane

0xcc78,	// (0x0005373c) form_midp_field_time_pane_t1

0xa77f,	// (0x00051243) wait_anim_pane_g2_copy1

0xcc86,	// (0x0005374a) form_midp_field_time_pane_t2

0x0001,

0xc59c,	// (0x00053060) aid_navinavi_width_2_pane

0xf84d,	// (0x00056311) form_midp_field_time_pane_t

0xa789,	// (0x0005124d) input_focus_pane_cp052

0xa789,	// (0x0005124d) bg_input_focus_pane_cp040

0xcc54,	// (0x00053718) form_midp_gauge_slider_pane_t1

0xcc62,	// (0x00053726) form_midp_gauge_slider_pane_t2

0x96ec,	// (0x000501b0) form_midp_gauge_slider_pane_t3

0x96fa,	// (0x000501be) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x00056308) form_midp_gauge_slider_pane_t

0xcc70,	// (0x00053734) form_midp_slider_pane

0xa7e5,	// (0x000512a9) bg_input_focus_pane_cp041_ParamLimits

0xa7e5,	// (0x000512a9) bg_input_focus_pane_cp041

0xcc21,	// (0x000536e5) form_midp_gauge_wait_pane_t1_ParamLimits

0xcc21,	// (0x000536e5) form_midp_gauge_wait_pane_t1

0xcc33,	// (0x000536f7) form_midp_gauge_wait_pane_t2_ParamLimits

0xcc33,	// (0x000536f7) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x00056303) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x00056303) form_midp_gauge_wait_pane_t

0xcc45,	// (0x00053709) form_midp_wait_pane_ParamLimits

0xcc45,	// (0x00053709) form_midp_wait_pane

0xcbeb,	// (0x000536af) form_midp_image_pane_g1

0xcbf4,	// (0x000536b8) form_midp_image_pane_t1

0xcc03,	// (0x000536c7) form_midp_image_pane_t2

0xcc12,	// (0x000536d6) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x000562fc) form_midp_image_pane_t

0xcbe2,	// (0x000536a6) list_single_midp_pane_g1

0x31b2,	// (0x00049c76) list_single_midp_pane_t1

0x96d7,	// (0x0005019b) list_midp_form_item_pane_ParamLimits

0x96d7,	// (0x0005019b) list_midp_form_item_pane

0xc556,	// (0x0005301a) list_midp_form_item_pane_t1

0xc565,	// (0x00053029) midp_ticker_pane_g1

0xc571,	// (0x00053035) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00056257) midp_ticker_pane_g

0x8b79,	// (0x0004f63d) midp_ticker_pane_t1

0x9a41,	// (0x00050505) midp_editing_number_pane_t1

0xdc5b,	// (0x0005471f) midp_editing_number_pane

0xdc6a,	// (0x0005472e) midp_ticker_pane

0xdbb7,	// (0x0005467b) ai_message_heading_pane

0xa789,	// (0x0005124d) bg_popup_window_pane_cp14

0xdbbf,	// (0x00054683) listscroll_ai_message_pane

0xdb41,	// (0x00054605) ai_message_heading_pane_g1_ParamLimits

0xdb41,	// (0x00054605) ai_message_heading_pane_g1

0xdb4d,	// (0x00054611) ai_message_heading_pane_g2_ParamLimits

0xdb4d,	// (0x00054611) ai_message_heading_pane_g2

0xdb59,	// (0x0005461d) ai_message_heading_pane_g3_ParamLimits

0xdb59,	// (0x0005461d) ai_message_heading_pane_g3

0xdb65,	// (0x00054629) ai_message_heading_pane_g4_ParamLimits

0xdb65,	// (0x00054629) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x0005643d) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x0005643d) ai_message_heading_pane_g

0xdb71,	// (0x00054635) ai_message_heading_pane_t1_ParamLimits

0xdb71,	// (0x00054635) ai_message_heading_pane_t1

0xdb8b,	// (0x0005464f) ai_message_heading_pane_t2_ParamLimits

0xdb8b,	// (0x0005464f) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x00056446) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x00056446) ai_message_heading_pane_t

0xdb9d,	// (0x00054661) bg_popup_heading_pane_cp1_ParamLimits

0xdb9d,	// (0x00054661) bg_popup_heading_pane_cp1

0xdb2f,	// (0x000545f3) list_ai_message_pane_ParamLimits

0xdb2f,	// (0x000545f3) list_ai_message_pane

0xbc35,	// (0x000526f9) scroll_pane_cp10

0xdacb,	// (0x0005458f) list_ai_message_pane_g1

0xdad3,	// (0x00054597) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x0005641a) list_ai_message_pane_g

0xdadb,	// (0x0005459f) list_ai_message_pane_t1_ParamLimits

0xdadb,	// (0x0005459f) list_ai_message_pane_t1

0xdaf0,	// (0x000545b4) list_ai_message_pane_t2_ParamLimits

0xdaf0,	// (0x000545b4) list_ai_message_pane_t2

0xdb05,	// (0x000545c9) list_ai_message_pane_t3_ParamLimits

0xdb05,	// (0x000545c9) list_ai_message_pane_t3

0xdb1a,	// (0x000545de) list_ai_message_pane_t4_ParamLimits

0xdb1a,	// (0x000545de) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x0005641f) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x0005641f) list_ai_message_pane_t

0x989f,	// (0x00050363) cell_ai_soft_ind_pane_ParamLimits

0x989f,	// (0x00050363) cell_ai_soft_ind_pane

0xc57d,	// (0x00053041) cell_ai_soft_ind_pane_g1_ParamLimits

0xc57d,	// (0x00053041) cell_ai_soft_ind_pane_g1

0xa789,	// (0x0005124d) grid_highlight_cp1

0xc58a,	// (0x0005304e) text_secondary_cp56_ParamLimits

0xc58a,	// (0x0005304e) text_secondary_cp56

0xdaa0,	// (0x00054564) example_general_pane_ParamLimits

0xdaa0,	// (0x00054564) example_general_pane

0xdaac,	// (0x00054570) example_parent_pane_g1_ParamLimits

0xdaac,	// (0x00054570) example_parent_pane_g1

0xdab8,	// (0x0005457c) example_parent_pane_t1_ParamLimits

0xdab8,	// (0x0005457c) example_parent_pane_t1

0x8fae,	// (0x0004fa72) popup_preview_text_window_ParamLimits

0x8fae,	// (0x0004fa72) popup_preview_text_window

0xc46c,	// (0x00052f30) list_single_pane_cp2_g4

0xb3a4,	// (0x00051e68) bg_popup_preview_window_pane_ParamLimits

0xb3a4,	// (0x00051e68) bg_popup_preview_window_pane

0xd83f,	// (0x00054303) popup_preview_text_window_t1_ParamLimits

0xd83f,	// (0x00054303) popup_preview_text_window_t1

0xd85d,	// (0x00054321) popup_preview_text_window_t2_ParamLimits

0xd85d,	// (0x00054321) popup_preview_text_window_t2

0xd8a6,	// (0x0005436a) popup_preview_text_window_t3_ParamLimits

0xd8a6,	// (0x0005436a) popup_preview_text_window_t3

0xd8eb,	// (0x000543af) popup_preview_text_window_t4_ParamLimits

0xd8eb,	// (0x000543af) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x000563ee) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x000563ee) popup_preview_text_window_t

0xd969,	// (0x0005442d) scroll_pane_cp11

0xca81,	// (0x00053545) bg_popup_preview_window_pane_g1

0xd7ff,	// (0x000542c3) bg_popup_preview_window_pane_g2

0xd807,	// (0x000542cb) bg_popup_preview_window_pane_g3

0xd80f,	// (0x000542d3) bg_popup_preview_window_pane_g4

0xd817,	// (0x000542db) bg_popup_preview_window_pane_g5

0xd81f,	// (0x000542e3) bg_popup_preview_window_pane_g6

0xd827,	// (0x000542eb) bg_popup_preview_window_pane_g7

0xd82f,	// (0x000542f3) bg_popup_preview_window_pane_g8

0x039a,	// (0x00046e5e) aid_popup_width_pane

0x8f2a,	// (0x0004f9ee) popup_midp_note_alarm_window_ParamLimits

0x8f2a,	// (0x0004f9ee) popup_midp_note_alarm_window

0xbb0a,	// (0x000525ce) data_form_pane_ParamLimits

0x7933,	// (0x0004e3f7) form_field_data_pane_g1

0x793d,	// (0x0004e401) form_field_data_pane_t1_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_ParamLimits

0xbb24,	// (0x000525e8) data_form_wide_pane_ParamLimits

0x0dae,	// (0x00047872) form_field_data_wide_pane_g1

0x2868,	// (0x0004932c) form_field_data_wide_pane_t1_ParamLimits

0xb545,	// (0x00052009) input_focus_pane_cp6_ParamLimits

0x8721,	// (0x0004f1e5) input_popup_find_pane_g1_ParamLimits

0x8721,	// (0x0004f1e5) input_popup_find_pane_g1

0x0eba,	// (0x0004797e) aid_navi_side_left_pane

0x0ecf,	// (0x00047993) aid_navi_side_right_pane

0xd2b8,	// (0x00053d7c) bg_popup_window_pane_cp30_ParamLimits

0xd2b8,	// (0x00053d7c) bg_popup_window_pane_cp30

0xd332,	// (0x00053df6) popup_midp_note_alarm_window_g1_ParamLimits

0xd332,	// (0x00053df6) popup_midp_note_alarm_window_g1

0xd362,	// (0x00053e26) popup_midp_note_alarm_window_t1_ParamLimits

0xd362,	// (0x00053e26) popup_midp_note_alarm_window_t1

0xd403,	// (0x00053ec7) popup_midp_note_alarm_window_t2_ParamLimits

0xd403,	// (0x00053ec7) popup_midp_note_alarm_window_t2

0xd4b1,	// (0x00053f75) popup_midp_note_alarm_window_t3_ParamLimits

0xd4b1,	// (0x00053f75) popup_midp_note_alarm_window_t3

0xd4e3,	// (0x00053fa7) popup_midp_note_alarm_window_t4_ParamLimits

0xd4e3,	// (0x00053fa7) popup_midp_note_alarm_window_t4

0xd509,	// (0x00053fcd) popup_midp_note_alarm_window_t5_ParamLimits

0xd509,	// (0x00053fcd) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x0005638b) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x0005638b) popup_midp_note_alarm_window_t

0xd5b5,	// (0x00054079) wait_bar_pane_cp1_ParamLimits

0xd5b5,	// (0x00054079) wait_bar_pane_cp1

0xa789,	// (0x0005124d) wait_anim_pane_copy1

0xa789,	// (0x0005124d) wait_border_pane_copy1

0xcf96,	// (0x00053a5a) wait_border_pane_g1_copy1

0x2882,	// (0x00049346) form_field_popup_pane_g1

0x7957,	// (0x0004e41b) form_field_popup_pane_t1_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_cp7_ParamLimits

0xbb50,	// (0x00052614) list_form_pane_ParamLimits

0x28a2,	// (0x00049366) form_field_popup_wide_pane_g1

0x28aa,	// (0x0004936e) form_field_popup_wide_pane_t1_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_cp8_ParamLimits

0xbb5c,	// (0x00052620) list_form_wide_pane_ParamLimits

0xdcff,	// (0x000547c3) aid_size_cell_graphic_pane

0x79d6,	// (0x0004e49a) data_form_pane_t1_ParamLimits

0x7df7,	// (0x0004e8bb) data_form_wide_pane_t1_ParamLimits

0x9363,	// (0x0004fe27) bg_status_flat_pane

0x8330,	// (0x0004edf4) title_pane_t1_ParamLimits

0xa79f,	// (0x00051263) title_pane_t2_ParamLimits

0xa7c5,	// (0x00051289) title_pane_t3_ParamLimits

0xf59b,	// (0x0005605f) title_pane_t_ParamLimits

0xbfe3,	// (0x00052aa7) level_1_signal_ParamLimits

0xbff0,	// (0x00052ab4) level_2_signal_ParamLimits

0xbffd,	// (0x00052ac1) level_3_signal_ParamLimits

0xc00a,	// (0x00052ace) level_4_signal_ParamLimits

0xc017,	// (0x00052adb) level_5_signal_ParamLimits

0xc024,	// (0x00052ae8) level_6_signal_ParamLimits

0xc031,	// (0x00052af5) level_7_signal_ParamLimits

0xbfe3,	// (0x00052aa7) level_1_battery_ParamLimits

0xbff0,	// (0x00052ab4) level_2_battery_ParamLimits

0xbffd,	// (0x00052ac1) level_3_battery_ParamLimits

0xc00a,	// (0x00052ace) level_4_battery_ParamLimits

0xc017,	// (0x00052adb) level_5_battery_ParamLimits

0xc024,	// (0x00052ae8) level_6_battery_ParamLimits

0xc031,	// (0x00052af5) level_7_battery_ParamLimits

0xd1db,	// (0x00053c9f) bg_status_flat_pane_g1

0xd1e3,	// (0x00053ca7) bg_status_flat_pane_g2

0xd1eb,	// (0x00053caf) bg_status_flat_pane_g3

0xd1f3,	// (0x00053cb7) bg_status_flat_pane_g4

0xd1fb,	// (0x00053cbf) bg_status_flat_pane_g5

0xd203,	// (0x00053cc7) bg_status_flat_pane_g6

0xd20b,	// (0x00053ccf) bg_status_flat_pane_g7

0x83c4,	// (0x0004ee88) tabs_3_active_pane_t1_ParamLimits

0x83c4,	// (0x0004ee88) tabs_3_passive_pane_t1_ParamLimits

0x83de,	// (0x0004eea2) tabs_4_active_pane_t1_ParamLimits

0x83de,	// (0x0004eea2) tabs_4_1_passive_pane_t1_ParamLimits

0x88f5,	// (0x0004f3b9) tabs_2_active_pane_t1_ParamLimits

0x88f5,	// (0x0004f3b9) tabs_2_passive_pane_t1_ParamLimits

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp4_ParamLimits

0x8907,	// (0x0004f3cb) tabs_2_long_active_pane_t1_ParamLimits

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp4_ParamLimits

0x1420,	// (0x00047ee4) list_single_midp_graphic_pane_t1_ParamLimits

0xa7e5,	// (0x000512a9) bg_active_tab_pane_cp5_ParamLimits

0x891a,	// (0x0004f3de) tabs_3_long_active_pane_t1_ParamLimits

0xbc6e,	// (0x00052732) bg_passive_tab_pane_cp5_ParamLimits

0x1420,	// (0x00047ee4) list_single_midp_graphic_pane_t1

0x9363,	// (0x0004fe27) bg_status_flat_pane_ParamLimits

0xc952,	// (0x00053416) indicator_pane_cp2_ParamLimits

0xc952,	// (0x00053416) indicator_pane_cp2

0x94da,	// (0x0004ff9e) navi_pane_srt_ParamLimits

0x94da,	// (0x0004ff9e) navi_pane_srt

0xc97a,	// (0x0005343e) popup_clock_digital_analogue_window_cp1

0xad98,	// (0x0005185c) indicator_pane_t1

0xc53b,	// (0x00052fff) copy_highlight_pane

0xc53b,	// (0x00052fff) cursor_graphics_pane

0xc53b,	// (0x00052fff) graphic_within_text_pane

0xc53b,	// (0x00052fff) link_highlight_pane

0xd92c,	// (0x000543f0) popup_preview_text_window_t5_ParamLimits

0xd92c,	// (0x000543f0) popup_preview_text_window_t5

0xc5a4,	// (0x00053068) cursor_digital_pane

0xc5a4,	// (0x00053068) cursor_primary_pane

0xc5b5,	// (0x00053079) cursor_primary_small_pane

0xc5bd,	// (0x00053081) cursor_secondary_pane

0xc5c5,	// (0x00053089) cursor_title_pane

0xc5a4,	// (0x00053068) link_highlight_digital_pane

0xc5ac,	// (0x00053070) link_highlight_primary_pane

0xc5b5,	// (0x00053079) link_highlight_primary_small_pane

0xc5bd,	// (0x00053081) link_highlight_secondary_pane

0xc5c5,	// (0x00053089) link_highlight_title_pane

0xc5a4,	// (0x00053068) copy_highlight_digital_pane

0xc5a4,	// (0x00053068) copy_highlight_primary_pane

0xc5b5,	// (0x00053079) copy_highlight_primary_small_pane

0xc5bd,	// (0x00053081) copy_highlight_secondary_pane

0xc5c5,	// (0x00053089) copy_highlight_title_pane

0xc5bd,	// (0x00053081) graphic_text_digital_pane

0xd25b,	// (0x00053d1f) graphic_text_primary_pane

0xd264,	// (0x00053d28) graphic_text_primary_small_pane

0xc5b5,	// (0x00053079) graphic_text_secondary_pane

0xc5a4,	// (0x00053068) graphic_text_title_pane

0x8b8b,	// (0x0004f64f) cursor_primary_pane_g1

0xd24d,	// (0x00053d11) cursor_text_primary_t1

0x9766,	// (0x0005022a) cursor_primary_small_pane_g1

0xd23f,	// (0x00053d03) cursor_text_primary_small_t1

0x975c,	// (0x00050220) cursor_primary_small_pane_g1_copy1

0xd231,	// (0x00053cf5) cursor_text_primary_small_t1_copy1

0xd223,	// (0x00053ce7) cursor_text_title_t1

0x9752,	// (0x00050216) cursor_title_pane_g1

0x8b8b,	// (0x0004f64f) cursor_digital_pane_g1

0xc5cd,	// (0x00053091) cursor_text_digital_t1

0xc5f2,	// (0x000530b6) link_highlight_primary_pane_g1

0xd1cc,	// (0x00053c90) link_highlight_primary_pane_t1

0xc5db,	// (0x0005309f) link_highlight_primary_small_pane_g1

0xc5e3,	// (0x000530a7) link_highlight_primary_small_pane_t1

0xc5f2,	// (0x000530b6) link_highlight_secondary_pane_g1

0xc5fa,	// (0x000530be) link_highlight_secondary_pane_t1

0xd0fe,	// (0x00053bc2) link_highlight_title_pane_g1

0xd106,	// (0x00053bca) link_highlight_title_pane_t1

0xd0e7,	// (0x00053bab) link_highlight_digital_pane_g1

0xd0ef,	// (0x00053bb3) link_highlight_digital_pane_t1

0xcfdb,	// (0x00053a9f) copy_highlight_primary_pane_g1

0xcfe3,	// (0x00053aa7) copy_highlight_primary_pane_t1

0xcfb5,	// (0x00053a79) copy_highlight_primary_small_pane_g1

0xcfcc,	// (0x00053a90) copy_highlight_primary_small_pane_t1

0xc609,	// (0x000530cd) copy_highlight_secondary_pane_g1

0xc611,	// (0x000530d5) copy_highlight_secondary_pane_t1

0xcfb5,	// (0x00053a79) copy_highlight_title_pane_g1

0xcfbd,	// (0x00053a81) copy_highlight_title_pane_t1

0xcfdb,	// (0x00053a9f) copy_highlight_digital_pane_g1

0xde93,	// (0x00054957) copy_highlight_digital_pane_t1

0xdde7,	// (0x000548ab) graphic_text_primary_pane_g1

0xde77,	// (0x0005493b) graphic_text_primary_pane_t1

0xde85,	// (0x00054949) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x000564ba) graphic_text_primary_pane_t

0xde53,	// (0x00054917) graphic_text_primary_small_pane_g1

0xde5b,	// (0x0005491f) graphic_text_primary_small_pane_t1

0xde69,	// (0x0005492d) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x000564b5) graphic_text_primary_small_pane_t

0xde2f,	// (0x000548f3) graphic_text_secondary_pane_g1

0xde37,	// (0x000548fb) graphic_text_secondary_pane_t1

0xde45,	// (0x00054909) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x000564b0) graphic_text_secondary_pane_t

0xde0b,	// (0x000548cf) graphic_text_title_pane_g1

0xde13,	// (0x000548d7) graphic_text_title_pane_t1

0xde21,	// (0x000548e5) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x000564ab) graphic_text_title_pane_t

0xdde7,	// (0x000548ab) graphic_text_digital_pane_g1

0xddef,	// (0x000548b3) graphic_text_digital_pane_t1

0xddfd,	// (0x000548c1) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x000564a6) graphic_text_digital_pane_t

0xa7e5,	// (0x000512a9) navi_icon_pane_srt_ParamLimits

0xa7e5,	// (0x000512a9) navi_icon_pane_srt

0xa789,	// (0x0005124d) navi_midp_pane_srt

0xa789,	// (0x0005124d) navi_navi_pane_srt

0xa7e5,	// (0x000512a9) navi_text_pane_srt_ParamLimits

0xa7e5,	// (0x000512a9) navi_text_pane_srt

0xdda4,	// (0x00054868) navi_navi_icon_text_pane_srt

0xddac,	// (0x00054870) navi_navi_pane_srt_g1_ParamLimits

0xddac,	// (0x00054870) navi_navi_pane_srt_g1

0xddbe,	// (0x00054882) navi_navi_pane_srt_g2_ParamLimits

0xddbe,	// (0x00054882) navi_navi_pane_srt_g2

0x0001,

0xf9dd,	// (0x000564a1) navi_navi_pane_srt_g_ParamLimits

0xf9dd,	// (0x000564a1) navi_navi_pane_srt_g

0xddde,	// (0x000548a2) navi_navi_tabs_pane_srt

0xdda4,	// (0x00054868) navi_navi_text_pane_srt

0xdda4,	// (0x00054868) navi_navi_volume_pane_srt

0xdd95,	// (0x00054859) navi_navi_text_pane_srt_t1

0x179a,	// (0x0004825e) navi_navi_volume_pane_srt_g1

0x17a2,	// (0x00048266) volume_small_pane_srt_ParamLimits

0x17a2,	// (0x00048266) volume_small_pane_srt

0x119a,	// (0x00047c5e) volume_small_pane_srt_g1_ParamLimits

0x119a,	// (0x00047c5e) volume_small_pane_srt_g1

0x11aa,	// (0x00047c6e) volume_small_pane_srt_g2_ParamLimits

0x11aa,	// (0x00047c6e) volume_small_pane_srt_g2

0x11bb,	// (0x00047c7f) volume_small_pane_srt_g3_ParamLimits

0x11bb,	// (0x00047c7f) volume_small_pane_srt_g3

0x11cc,	// (0x00047c90) volume_small_pane_srt_g4_ParamLimits

0x11cc,	// (0x00047c90) volume_small_pane_srt_g4

0x11dd,	// (0x00047ca1) volume_small_pane_srt_g5_ParamLimits

0x11dd,	// (0x00047ca1) volume_small_pane_srt_g5

0x11ee,	// (0x00047cb2) volume_small_pane_srt_g6_ParamLimits

0x11ee,	// (0x00047cb2) volume_small_pane_srt_g6

0x11ff,	// (0x00047cc3) volume_small_pane_srt_g7_ParamLimits

0x11ff,	// (0x00047cc3) volume_small_pane_srt_g7

0x1210,	// (0x00047cd4) volume_small_pane_srt_g8_ParamLimits

0x1210,	// (0x00047cd4) volume_small_pane_srt_g8

0x1221,	// (0x00047ce5) volume_small_pane_srt_g9_ParamLimits

0x1221,	// (0x00047ce5) volume_small_pane_srt_g9

0x1232,	// (0x00047cf6) volume_small_pane_srt_g10_ParamLimits

0x1232,	// (0x00047cf6) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0005625c) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0005625c) volume_small_pane_srt_g

0xb44d,	// (0x00051f11) query_popup_data_pane_cp2

0xdd7b,	// (0x0005483f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdd7b,	// (0x0005483f) navi_navi_icon_text_pane_srt_t1

0xd25b,	// (0x00053d1f) navi_tabs_2_long_pane_srt

0xd25b,	// (0x00053d1f) navi_tabs_2_pane_srt

0xd25b,	// (0x00053d1f) navi_tabs_3_long_pane_srt

0xd25b,	// (0x00053d1f) navi_tabs_3_pane_srt

0xd25b,	// (0x00053d1f) navi_tabs_4_pane_srt

0x177a,	// (0x0004823e) tabs_2_active_pane_srt_ParamLimits

0x177a,	// (0x0004823e) tabs_2_active_pane_srt

0x178a,	// (0x0004824e) tabs_2_passive_pane_srt_ParamLimits

0x178a,	// (0x0004824e) tabs_2_passive_pane_srt

0xcb71,	// (0x00053635) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcb71,	// (0x00053635) bg_passive_tab_pane_cp1_srt

0xdd59,	// (0x0005481d) bg_passive_tab_pane_g1_cp1_srt

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp1_srt

0xdd62,	// (0x00054826) bg_passive_tab_pane_g3_cp1_srt

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp1_srt_ParamLimits

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp1_srt

0xdd6b,	// (0x0005482f) tabs_2_active_pane_srt_g1

0x9b44,	// (0x00050608) tabs_2_active_pane_srt_t1_ParamLimits

0x9b44,	// (0x00050608) tabs_2_active_pane_srt_t1

0xdd59,	// (0x0005481d) bg_active_tab_pane_g1_cp1_srt

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp1_srt

0xdd62,	// (0x00054826) bg_active_tab_pane_g3_cp1_srt

0x1747,	// (0x0004820b) tabs_3_active_pane_srt_ParamLimits

0x1747,	// (0x0004820b) tabs_3_active_pane_srt

0x1758,	// (0x0004821c) tabs_3_passive_pane_cp_srt_ParamLimits

0x1758,	// (0x0004821c) tabs_3_passive_pane_cp_srt

0x1769,	// (0x0004822d) tabs_3_passive_pane_srt_ParamLimits

0x1769,	// (0x0004822d) tabs_3_passive_pane_srt

0xcb71,	// (0x00053635) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcb71,	// (0x00053635) bg_passive_tab_pane_cp2_srt

0xc620,	// (0x000530e4) bg_passive_tab_pane_g1_cp2_srt

0xc20f,	// (0x00052cd3) bg_passive_tab_pane_g2_cp2_srt

0xc629,	// (0x000530ed) bg_passive_tab_pane_g3_cp2_srt

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp2_srt_ParamLimits

0xa7d7,	// (0x0005129b) bg_active_tab_pane_cp2_srt

0xdd51,	// (0x00054815) tabs_3_active_pane_srt_g1

0x9b2e,	// (0x000505f2) tabs_3_active_pane_srt_t1_ParamLimits

0x9b2e,	// (0x000505f2) tabs_3_active_pane_srt_t1

0xc620,	// (0x000530e4) bg_active_tab_pane_g1_cp2_srt

0xc20f,	// (0x00052cd3) bg_active_tab_pane_g2_cp2_srt

0xc629,	// (0x000530ed) bg_active_tab_pane_g3_cp2_srt

0x16ff,	// (0x000481c3) tabs_4_active_pane_srt_ParamLimits

0x16ff,	// (0x000481c3) tabs_4_active_pane_srt

0x1711,	// (0x000481d5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1711,	// (0x000481d5) tabs_4_passive_pane_cp2_srt

0xc74d,	// (0x00053211) aid_size_cell_toolbar

0xd1ae,	// (0x00053c72) main_idle_act_pane_ParamLimits

0xc811,	// (0x000532d5) popup_large_graphic_colour_window_ParamLimits

0x922e,	// (0x0004fcf2) popup_toolbar_window_ParamLimits

0x922e,	// (0x0004fcf2) popup_toolbar_window

0xdc7d,	// (0x00054741) list_single_graphic_2heading_pane_ParamLimits

0xdc7d,	// (0x00054741) list_single_graphic_2heading_pane

0xbe18,	// (0x000528dc) aid_size_cell_apps_grid_lsc_pane

0xbe2a,	// (0x000528ee) aid_size_cell_apps_grid_prt_pane

0xbc6e,	// (0x00052732) bg_wml_button_pane_cp1_ParamLimits

0xbc6e,	// (0x00052732) bg_wml_button_pane_cp1

0x9708,	// (0x000501cc) form_midp_field_text_pane_t1_ParamLimits

0xcb71,	// (0x00053635) input_focus_pane_cp050_ParamLimits

0xccc5,	// (0x00053789) list_midp_form_text_pane_ParamLimits

0xcca2,	// (0x00053766) input_focus_pane_cp051_ParamLimits

0xccb6,	// (0x0005377a) list_midp_choice_pane_ParamLimits

0x96a3,	// (0x00050167) list_single_2graphic_pane_cp3_ParamLimits

0x96a3,	// (0x00050167) list_single_2graphic_pane_cp3

0x96b7,	// (0x0005017b) list_single_midp_graphic_pane_ParamLimits

0x96b7,	// (0x0005017b) list_single_midp_graphic_pane

0x0322,	// (0x00046de6) list_single_graphic_2heading_pane_g1_ParamLimits

0x0322,	// (0x00046de6) list_single_graphic_2heading_pane_g1

0x032e,	// (0x00046df2) list_single_graphic_2heading_pane_g4_ParamLimits

0x032e,	// (0x00046df2) list_single_graphic_2heading_pane_g4

0x033a,	// (0x00046dfe) list_single_graphic_2heading_pane_g5_ParamLimits

0x033a,	// (0x00046dfe) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x000562af) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x000562af) list_single_graphic_2heading_pane_g

0x0346,	// (0x00046e0a) list_single_graphic_2heading_pane_t1_ParamLimits

0x0346,	// (0x00046e0a) list_single_graphic_2heading_pane_t1

0x035a,	// (0x00046e1e) list_single_graphic_2heading_pane_t2_ParamLimits

0x035a,	// (0x00046e1e) list_single_graphic_2heading_pane_t2

0x0376,	// (0x00046e3a) list_single_graphic_2heading_pane_t3_ParamLimits

0x0376,	// (0x00046e3a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x000562b6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x000562b6) list_single_graphic_2heading_pane_t

0xc9bf,	// (0x00053483) bg_popup_sub_pane_cp2

0xc9e9,	// (0x000534ad) grid_toobar_pane

0x138f,	// (0x00047e53) cell_toolbar_pane_ParamLimits

0x138f,	// (0x00047e53) cell_toolbar_pane

0xca25,	// (0x000534e9) cell_toolbar_pane_g1_ParamLimits

0xca25,	// (0x000534e9) cell_toolbar_pane_g1

0xca39,	// (0x000534fd) cell_toolbar_pane_g2_ParamLimits

0xca39,	// (0x000534fd) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x000562bd) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x000562bd) cell_toolbar_pane_g

0xca5b,	// (0x0005351f) grid_highlight_pane_cp2_ParamLimits

0xca5b,	// (0x0005351f) grid_highlight_pane_cp2

0xca75,	// (0x00053539) toolbar_button_pane

0xca81,	// (0x00053545) toolbar_button_pane_g1

0xca89,	// (0x0005354d) toolbar_button_pane_g2

0xca91,	// (0x00053555) toolbar_button_pane_g3

0xca99,	// (0x0005355d) toolbar_button_pane_g4

0xcaa1,	// (0x00053565) toolbar_button_pane_g5

0xcaa9,	// (0x0005356d) toolbar_button_pane_g6

0xcab1,	// (0x00053575) toolbar_button_pane_g7

0xcab9,	// (0x0005357d) toolbar_button_pane_g8

0xcac1,	// (0x00053585) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x000562c2) toolbar_button_pane_g

0x13c7,	// (0x00047e8b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x13c7,	// (0x00047e8b) list_single_2graphic_pane_g1_cp3

0x7c10,	// (0x0004e6d4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7c10,	// (0x0004e6d4) list_single_2graphic_pane_g2_cp3

0x13e4,	// (0x00047ea8) list_single_2graphic_pane_g3_cp3

0x13ec,	// (0x00047eb0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x13ec,	// (0x00047eb0) list_single_2graphic_pane_g4_cp3

0x13f8,	// (0x00047ebc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x13f8,	// (0x00047ebc) list_single_2graphic_pane_t1_cp3

0x1414,	// (0x00047ed8) list_single_midp_graphic_pane_g2_ParamLimits

0x1414,	// (0x00047ed8) list_single_midp_graphic_pane_g2

0x2d7f,	// (0x00049843) aid_zoom_text_primary

0x2d87,	// (0x0004984b) aid_zoom_text_secondary

0xc6dd,	// (0x000531a1) status_small_pane_g7_ParamLimits

0xc6dd,	// (0x000531a1) status_small_pane_g7

0xc700,	// (0x000531c4) status_small_pane_t1_ParamLimits

0x830c,	// (0x0004edd0) title_pane_g2

0x0003,

0xf592,	// (0x00056056) title_pane_g

0x8594,	// (0x0004f058) aid_size_cell_colour_1_pane_ParamLimits

0x8594,	// (0x0004f058) aid_size_cell_colour_1_pane

0x85a8,	// (0x0004f06c) aid_size_cell_colour_2_pane_ParamLimits

0x85a8,	// (0x0004f06c) aid_size_cell_colour_2_pane

0x85bc,	// (0x0004f080) aid_size_cell_colour_3_pane_ParamLimits

0x85bc,	// (0x0004f080) aid_size_cell_colour_3_pane

0x85d0,	// (0x0004f094) aid_size_cell_colour_4_pane_ParamLimits

0x85d0,	// (0x0004f094) aid_size_cell_colour_4_pane

0x0df6,	// (0x000478ba) title_pane_stacon_g1_ParamLimits

0x0df6,	// (0x000478ba) title_pane_stacon_g1

0xd03a,	// (0x00053afe) popup_note_wait_window_g3_ParamLimits

0xd03a,	// (0x00053afe) popup_note_wait_window_g3

0xd0b0,	// (0x00053b74) popup_note_wait_window_t5_ParamLimits

0xd0b0,	// (0x00053b74) popup_note_wait_window_t5

0xa789,	// (0x0005124d) main_feb_china_hwr_fs_writing_pane

0x8c46,	// (0x0004f70a) popup_feb_china_hwr_fs_window_ParamLimits

0x8c46,	// (0x0004f70a) popup_feb_china_hwr_fs_window

0x7c21,	// (0x0004e6e5) aid_size_cell_hwr_fs_ParamLimits

0x7c21,	// (0x0004e6e5) aid_size_cell_hwr_fs

0xcb71,	// (0x00053635) bg_popup_sub_pane_cp3_ParamLimits

0xcb71,	// (0x00053635) bg_popup_sub_pane_cp3

0x7c36,	// (0x0004e6fa) grid_hwr_fs_pane_ParamLimits

0x7c36,	// (0x0004e6fa) grid_hwr_fs_pane

0x1463,	// (0x00047f27) linegrid_hwr_fs_pane_ParamLimits

0x1463,	// (0x00047f27) linegrid_hwr_fs_pane

0x7c4e,	// (0x0004e712) cell_hwr_fs_pane_ParamLimits

0x7c4e,	// (0x0004e712) cell_hwr_fs_pane

0xcb7d,	// (0x00053641) linegrid_hwr_fs_pane_g1_ParamLimits

0xcb7d,	// (0x00053641) linegrid_hwr_fs_pane_g1

0x9677,	// (0x0005013b) linegrid_hwr_fs_pane_g2_ParamLimits

0x9677,	// (0x0005013b) linegrid_hwr_fs_pane_g2

0xcb89,	// (0x0005364d) linegrid_hwr_fs_pane_g3_ParamLimits

0xcb89,	// (0x0005364d) linegrid_hwr_fs_pane_g3

0x1495,	// (0x00047f59) linegrid_hwr_fs_pane_g4_ParamLimits

0x1495,	// (0x00047f59) linegrid_hwr_fs_pane_g4

0x14af,	// (0x00047f73) linegrid_hwr_fs_pane_g5_ParamLimits

0x14af,	// (0x00047f73) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x000562e8) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x000562e8) linegrid_hwr_fs_pane_g

0xcba1,	// (0x00053665) cell_hwr_fs_pane_g1_ParamLimits

0xcba1,	// (0x00053665) cell_hwr_fs_pane_g1

0xc98b,	// (0x0005344f) cell_hwr_fs_pane_g2_ParamLimits

0xc98b,	// (0x0005344f) cell_hwr_fs_pane_g2

0x9689,	// (0x0005014d) cell_hwr_fs_pane_g3_ParamLimits

0x9689,	// (0x0005014d) cell_hwr_fs_pane_g3

0x9696,	// (0x0005015a) cell_hwr_fs_pane_g4_ParamLimits

0x9696,	// (0x0005015a) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x000562f3) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x000562f3) cell_hwr_fs_pane_g

0x7c74,	// (0x0004e738) cell_hwr_fs_pane_t1

0xa789,	// (0x0005124d) grid_highlight_pane_cp6

0xa789,	// (0x0005124d) main_idle_act2_pane

0xbc1c,	// (0x000526e0) aid_inside_area_popup_secondary

0x9786,	// (0x0005024a) aid_inside_area_window_primary_ParamLimits

0x9786,	// (0x0005024a) aid_inside_area_window_primary

0xdea2,	// (0x00054966) ai2_news_ticker_pane

0xdeaa,	// (0x0005496e) aid_size_cell_ai1_link_ParamLimits

0xdeaa,	// (0x0005496e) aid_size_cell_ai1_link

0x9b5a,	// (0x0005061e) popup_ai2_data_window_ParamLimits

0x9b5a,	// (0x0005061e) popup_ai2_data_window

0xdec4,	// (0x00054988) popup_ai2_link_window_ParamLimits

0xdec4,	// (0x00054988) popup_ai2_link_window

0xcb71,	// (0x00053635) bg_popup_sub_pane_cp4_ParamLimits

0xcb71,	// (0x00053635) bg_popup_sub_pane_cp4

0xded8,	// (0x0005499c) grid_ai2_link_pane_ParamLimits

0xded8,	// (0x0005499c) grid_ai2_link_pane

0xdeef,	// (0x000549b3) popup_ai2_link_window_g1_ParamLimits

0xdeef,	// (0x000549b3) popup_ai2_link_window_g1

0xdefb,	// (0x000549bf) popup_ai2_link_window_g2_ParamLimits

0xdefb,	// (0x000549bf) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x000564bf) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x000564bf) popup_ai2_link_window_g

0xdf0a,	// (0x000549ce) ai2_mp_button_pane

0xdf12,	// (0x000549d6) ai2_mp_volume_pane

0xcca2,	// (0x00053766) bg_popup_sub_pane_cp5_ParamLimits

0xcca2,	// (0x00053766) bg_popup_sub_pane_cp5

0xdf1a,	// (0x000549de) heading_ai2_gene_pane_ParamLimits

0xdf1a,	// (0x000549de) heading_ai2_gene_pane

0xdf26,	// (0x000549ea) list_ai2_gene_pane_ParamLimits

0xdf26,	// (0x000549ea) list_ai2_gene_pane

0xdf6e,	// (0x00054a32) cell_ai2_link_pane_ParamLimits

0xdf6e,	// (0x00054a32) cell_ai2_link_pane

0xdf84,	// (0x00054a48) cell_ai2_link_pane_g1

0xa789,	// (0x0005124d) grid_highlight_pane_cp7

0x17b7,	// (0x0004827b) ai2_mp_volume_pane_g1

0xe021,	// (0x00054ae5) ai2_mp_volume_pane_g2

0x9b84,	// (0x00050648) list_ai2_gene_pane_t1

0xe029,	// (0x00054aed) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x000564d8) ai2_mp_volume_pane_g

0x17bf,	// (0x00048283) volume_small_pane_cp3

0xe031,	// (0x00054af5) aid_size_cell_ai2_button

0xe039,	// (0x00054afd) grid_ai2_button_pane

0xe042,	// (0x00054b06) cell_ai2_button_pane_ParamLimits

0xe042,	// (0x00054b06) cell_ai2_button_pane

0xa77f,	// (0x00051243) cell_ai2_button_pane_g1

0xa789,	// (0x0005124d) grid_highlight_pane_cp8

0xdfe1,	// (0x00054aa5) ai2_gene_pane_t1_ParamLimits

0xdfe1,	// (0x00054aa5) ai2_gene_pane_t1

0x8bbc,	// (0x0004f680) aid_height_parent_landscape

0x98ed,	// (0x000503b1) aid_height_set_list

0xd1ae,	// (0x00053c72) aid_size_parent

0xdcff,	// (0x000547c3) aid_size_cell_graphic_pane_ParamLimits

0xdf36,	// (0x000549fa) popup_ai2_data_window_g1_ParamLimits

0xdf36,	// (0x000549fa) popup_ai2_data_window_g1

0xdf42,	// (0x00054a06) ai2_news_ticker_pane_g1

0xdf4a,	// (0x00054a0e) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x000564c4) ai2_news_ticker_pane_g

0xdf52,	// (0x00054a16) ai2_news_ticker_pane_t1

0xdf60,	// (0x00054a24) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x000564c9) ai2_news_ticker_pane_t

0xdf8d,	// (0x00054a51) heading_ai2_gene_pane_g1

0xdf95,	// (0x00054a59) heading_ai2_gene_pane_t1_ParamLimits

0xdf95,	// (0x00054a59) heading_ai2_gene_pane_t1

0xdfaa,	// (0x00054a6e) list_highlight_pane_cp6

0x9b6e,	// (0x00050632) ai2_gene_pane_ParamLimits

0x9b6e,	// (0x00050632) ai2_gene_pane

0x9b92,	// (0x00050656) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x000564ce) list_ai2_gene_pane_t

0xdfb2,	// (0x00054a76) list_highlight_pane_cp8_ParamLimits

0xdfb2,	// (0x00054a76) list_highlight_pane_cp8

0xdfc3,	// (0x00054a87) ai2_gene_pane_g1_ParamLimits

0xdfc3,	// (0x00054a87) ai2_gene_pane_g1

0xdfd5,	// (0x00054a99) ai2_gene_pane_g2_ParamLimits

0xdfd5,	// (0x00054a99) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x000564d3) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x000564d3) ai2_gene_pane_g

0xbaac,	// (0x00052570) scroll_pane_cp12

0x7bcd,	// (0x0004e691) control_pane_t3_ParamLimits

0x7bcd,	// (0x0004e691) control_pane_t3

0xc6f1,	// (0x000531b5) status_small_pane_g8_ParamLimits

0xc6f1,	// (0x000531b5) status_small_pane_g8

0x8cdb,	// (0x0004f79f) popup_find_window_ParamLimits

0x8f64,	// (0x0004fa28) popup_note_image_window_ParamLimits

0x315a,	// (0x00049c1e) list_double2_graphic_pane_vc_g1_ParamLimits

0x315a,	// (0x00049c1e) list_double2_graphic_pane_vc_g1

0xd7be,	// (0x00054282) list_double2_graphic_pane_vc_g2_ParamLimits

0xd7be,	// (0x00054282) list_double2_graphic_pane_vc_g2

0x3166,	// (0x00049c2a) list_double2_graphic_pane_vc_g3_ParamLimits

0x3166,	// (0x00049c2a) list_double2_graphic_pane_vc_g3

0x0002,

0xf659,	// (0x0005611d) list_double2_graphic_pane_vc_g_ParamLimits

0xf659,	// (0x0005611d) list_double2_graphic_pane_vc_g

0x3172,	// (0x00049c36) list_double2_graphic_pane_vc_t1_ParamLimits

0x3172,	// (0x00049c36) list_double2_graphic_pane_vc_t1

0xd7be,	// (0x00054282) list_single_heading_pane_vc_g1_ParamLimits

0xd7be,	// (0x00054282) list_single_heading_pane_vc_g1

0x3166,	// (0x00049c2a) list_single_heading_pane_vc_g2_ParamLimits

0x3166,	// (0x00049c2a) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x000560da) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x000560da) list_single_heading_pane_vc_g

0x3188,	// (0x00049c4c) list_single_heading_pane_vc_t1_ParamLimits

0x3188,	// (0x00049c4c) list_single_heading_pane_vc_t1

0x319e,	// (0x00049c62) list_single_heading_pane_vc_t2_ParamLimits

0x319e,	// (0x00049c62) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x000562d7) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x000562d7) list_single_heading_pane_vc_t

0xcac9,	// (0x0005358d) list_setting_number_pane_vc_g1_ParamLimits

0xcac9,	// (0x0005358d) list_setting_number_pane_vc_g1

0xcad5,	// (0x00053599) list_setting_number_pane_vc_g2_ParamLimits

0xcad5,	// (0x00053599) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x000562dc) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x000562dc) list_setting_number_pane_vc_g

0xcae1,	// (0x000535a5) list_setting_number_pane_vc_t1_ParamLimits

0xcae1,	// (0x000535a5) list_setting_number_pane_vc_t1

0xcaf5,	// (0x000535b9) list_setting_number_pane_vc_t2_ParamLimits

0xcaf5,	// (0x000535b9) list_setting_number_pane_vc_t2

0xcb11,	// (0x000535d5) list_setting_number_pane_vc_t3_ParamLimits

0xcb11,	// (0x000535d5) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x000562e1) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x000562e1) list_setting_number_pane_vc_t

0xcb37,	// (0x000535fb) set_value_pane_vc_ParamLimits

0xcb37,	// (0x000535fb) set_value_pane_vc

0xdc7d,	// (0x00054741) list_double2_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double2_graphic_pane_vc

0x3272,	// (0x00049d36) list_double2_large_graphic_pane_vc_ParamLimits

0x3272,	// (0x00049d36) list_double2_large_graphic_pane_vc

0xdc7d,	// (0x00054741) list_double2_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double2_pane_vc

0xdc7d,	// (0x00054741) list_double_graphic_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double_graphic_heading_pane_vc

0xdc7d,	// (0x00054741) list_double_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double_graphic_pane_vc

0xdc7d,	// (0x00054741) list_double_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double_heading_pane_vc

0x3272,	// (0x00049d36) list_double_large_graphic_pane_vc_ParamLimits

0x3272,	// (0x00049d36) list_double_large_graphic_pane_vc

0xdc7d,	// (0x00054741) list_double_number_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double_number_pane_vc

0xdc7d,	// (0x00054741) list_double_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double_pane_vc

0xdc7d,	// (0x00054741) list_double_time_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_double_time_pane_vc

0xdc7d,	// (0x00054741) list_setting_number_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_setting_number_pane_vc

0xdc7d,	// (0x00054741) list_setting_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_setting_pane_vc

0xdc7d,	// (0x00054741) list_single_graphic_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_single_graphic_heading_pane_vc

0xdc7d,	// (0x00054741) list_single_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_single_heading_pane_vc

0xdc7d,	// (0x00054741) list_single_number_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00054741) list_single_number_heading_pane_vc

0x315a,	// (0x00049c1e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x315a,	// (0x00049c1e) list_double_graphic_heading_pane_vc_g1

0xd7be,	// (0x00054282) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd7be,	// (0x00054282) list_double_graphic_heading_pane_vc_g2

0x3166,	// (0x00049c2a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3166,	// (0x00049c2a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf659,	// (0x0005611d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x0005611d) list_double_graphic_heading_pane_vc_g

0x3331,	// (0x00049df5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3331,	// (0x00049df5) list_double_graphic_heading_pane_vc_t1

0x3188,	// (0x00049c4c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3188,	// (0x00049c4c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa1b,	// (0x000564df) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x000564df) list_double_graphic_heading_pane_vc_t

0xcac9,	// (0x0005358d) list_setting_pane_vc_g1_ParamLimits

0xcac9,	// (0x0005358d) list_setting_pane_vc_g1

0xcad5,	// (0x00053599) list_setting_pane_vc_g2_ParamLimits

0xcad5,	// (0x00053599) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x000562dc) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x000562dc) list_setting_pane_vc_g

0xe258,	// (0x00054d1c) list_setting_pane_vc_t1_ParamLimits

0xe258,	// (0x00054d1c) list_setting_pane_vc_t1

0xe26c,	// (0x00054d30) list_setting_pane_vc_t2_ParamLimits

0xe26c,	// (0x00054d30) list_setting_pane_vc_t2

0x0001,

0xfa5e,	// (0x00056522) list_setting_pane_vc_t_ParamLimits

0xfa5e,	// (0x00056522) list_setting_pane_vc_t

0xcb37,	// (0x000535fb) set_value_pane_cp_vc_ParamLimits

0xcb37,	// (0x000535fb) set_value_pane_cp_vc

0xd7be,	// (0x00054282) list_single_number_heading_pane_vc_g1_ParamLimits

0xd7be,	// (0x00054282) list_single_number_heading_pane_vc_g1

0x3166,	// (0x00049c2a) list_single_number_heading_pane_vc_g2_ParamLimits

0x3166,	// (0x00049c2a) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x000560da) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x000560da) list_single_number_heading_pane_vc_g

0x3188,	// (0x00049c4c) list_single_number_heading_pane_vc_t1_ParamLimits

0x3188,	// (0x00049c4c) list_single_number_heading_pane_vc_t1

0x3345,	// (0x00049e09) list_single_number_heading_pane_vc_t2_ParamLimits

0x3345,	// (0x00049e09) list_single_number_heading_pane_vc_t2

0x3359,	// (0x00049e1d) list_single_number_heading_pane_vc_t3_ParamLimits

0x3359,	// (0x00049e1d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa63,	// (0x00056527) list_single_number_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00056527) list_single_number_heading_pane_vc_t

0x315a,	// (0x00049c1e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x315a,	// (0x00049c1e) list_single_graphic_heading_pane_vc_g1

0xd7be,	// (0x00054282) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd7be,	// (0x00054282) list_single_graphic_heading_pane_vc_g4

0x3166,	// (0x00049c2a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3166,	// (0x00049c2a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf659,	// (0x0005611d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x0005611d) list_single_graphic_heading_pane_vc_g

0x3188,	// (0x00049c4c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3188,	// (0x00049c4c) list_single_graphic_heading_pane_vc_t1

0x336b,	// (0x00049e2f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x336b,	// (0x00049e2f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0005652e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0005652e) list_single_graphic_heading_pane_vc_t

0xd7be,	// (0x00054282) list_double2_pane_vc_g1_ParamLimits

0xd7be,	// (0x00054282) list_double2_pane_vc_g1

0x3166,	// (0x00049c2a) list_double2_pane_vc_g2_ParamLimits

0x3166,	// (0x00049c2a) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x000560da) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x000560da) list_double2_pane_vc_g

0x337f,	// (0x00049e43) list_double2_pane_vc_t1_ParamLimits

0x337f,	// (0x00049e43) list_double2_pane_vc_t1

0x3cbf,	// (0x0004a783) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3cbf,	// (0x0004a783) list_double2_large_graphic_pane_vc_g1

0x3ccb,	// (0x0004a78f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3ccb,	// (0x0004a78f) list_double2_large_graphic_pane_vc_g2

0x3cd7,	// (0x0004a79b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3cd7,	// (0x0004a79b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x000560f2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x000560f2) list_double2_large_graphic_pane_vc_g

0x3395,	// (0x00049e59) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3395,	// (0x00049e59) list_double2_large_graphic_pane_vc_t1

0x3ce3,	// (0x0004a7a7) list_double_time_pane_vc_g1_ParamLimits

0x3ce3,	// (0x0004a7a7) list_double_time_pane_vc_g1

0x3cef,	// (0x0004a7b3) list_double_time_pane_vc_g2_ParamLimits

0x3cef,	// (0x0004a7b3) list_double_time_pane_vc_g2

0x0001,

0xfa6f,	// (0x00056533) list_double_time_pane_vc_g_ParamLimits

0xfa6f,	// (0x00056533) list_double_time_pane_vc_g

0x33ab,	// (0x00049e6f) list_double_time_pane_vc_t1_ParamLimits

0x33ab,	// (0x00049e6f) list_double_time_pane_vc_t1

0x33c4,	// (0x00049e88) list_double_time_pane_vc_t2_ParamLimits

0x33c4,	// (0x00049e88) list_double_time_pane_vc_t2

0x3404,	// (0x00049ec8) list_double_time_pane_vc_t3_ParamLimits

0x3404,	// (0x00049ec8) list_double_time_pane_vc_t3

0x341c,	// (0x00049ee0) list_double_time_pane_vc_t4_ParamLimits

0x341c,	// (0x00049ee0) list_double_time_pane_vc_t4

0x0003,

0xfa74,	// (0x00056538) list_double_time_pane_vc_t_ParamLimits

0xfa74,	// (0x00056538) list_double_time_pane_vc_t

0xd7be,	// (0x00054282) list_double_pane_vc_g1_ParamLimits

0xd7be,	// (0x00054282) list_double_pane_vc_g1

0x3166,	// (0x00049c2a) list_double_pane_vc_g2_ParamLimits

0x3166,	// (0x00049c2a) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x000560da) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x000560da) list_double_pane_vc_g

0x3430,	// (0x00049ef4) list_double_pane_vc_t1_ParamLimits

0x3430,	// (0x00049ef4) list_double_pane_vc_t1

0x3442,	// (0x00049f06) list_double_pane_vc_t2_ParamLimits

0x3442,	// (0x00049f06) list_double_pane_vc_t2

0x0001,

0xfa7d,	// (0x00056541) list_double_pane_vc_t_ParamLimits

0xfa7d,	// (0x00056541) list_double_pane_vc_t

0xd7be,	// (0x00054282) list_double_number_pane_vc_g1_ParamLimits

0xd7be,	// (0x00054282) list_double_number_pane_vc_g1

0x3166,	// (0x00049c2a) list_double_number_pane_vc_g2_ParamLimits

0x3166,	// (0x00049c2a) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x000560da) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x000560da) list_double_number_pane_vc_g

0x345a,	// (0x00049f1e) list_double_number_pane_vc_t1_ParamLimits

0x345a,	// (0x00049f1e) list_double_number_pane_vc_t1

0x346e,	// (0x00049f32) list_double_number_pane_vc_t2_ParamLimits

0x346e,	// (0x00049f32) list_double_number_pane_vc_t2

0x3442,	// (0x00049f06) list_double_number_pane_vc_t3_ParamLimits

0x3442,	// (0x00049f06) list_double_number_pane_vc_t3

0x0002,

0xfa82,	// (0x00056546) list_double_number_pane_vc_t_ParamLimits

0xfa82,	// (0x00056546) list_double_number_pane_vc_t

0x3cfb,	// (0x0004a7bf) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3cfb,	// (0x0004a7bf) list_double_large_graphic_pane_vc_g1

0x3d07,	// (0x0004a7cb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3d07,	// (0x0004a7cb) list_double_large_graphic_pane_vc_g2

0x3cd7,	// (0x0004a79b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3cd7,	// (0x0004a79b) list_double_large_graphic_pane_vc_g3

0x3480,	// (0x00049f44) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3480,	// (0x00049f44) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa89,	// (0x0005654d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa89,	// (0x0005654d) list_double_large_graphic_pane_vc_g

0x348c,	// (0x00049f50) list_double_large_graphic_pane_vc_t1_ParamLimits

0x348c,	// (0x00049f50) list_double_large_graphic_pane_vc_t1

0x349e,	// (0x00049f62) list_double_large_graphic_pane_vc_t2_ParamLimits

0x349e,	// (0x00049f62) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa92,	// (0x00056556) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa92,	// (0x00056556) list_double_large_graphic_pane_vc_t

0xd7be,	// (0x00054282) list_double_heading_pane_vc_g1_ParamLimits

0xd7be,	// (0x00054282) list_double_heading_pane_vc_g1

0x3166,	// (0x00049c2a) list_double_heading_pane_vc_g2_ParamLimits

0x3166,	// (0x00049c2a) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x000560da) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x000560da) list_double_heading_pane_vc_g

0x34b7,	// (0x00049f7b) list_double_heading_pane_vc_t1_ParamLimits

0x34b7,	// (0x00049f7b) list_double_heading_pane_vc_t1

0x3188,	// (0x00049c4c) list_double_heading_pane_vc_t2_ParamLimits

0x3188,	// (0x00049c4c) list_double_heading_pane_vc_t2

0x0001,

0xfa97,	// (0x0005655b) list_double_heading_pane_vc_t_ParamLimits

0xfa97,	// (0x0005655b) list_double_heading_pane_vc_t

0x315a,	// (0x00049c1e) list_double_graphic_pane_vc_g1_ParamLimits

0x315a,	// (0x00049c1e) list_double_graphic_pane_vc_g1

0x3d16,	// (0x0004a7da) list_double_graphic_pane_vc_g2_ParamLimits

0x3d16,	// (0x0004a7da) list_double_graphic_pane_vc_g2

0x3d25,	// (0x0004a7e9) list_double_graphic_pane_vc_g3_ParamLimits

0x3d25,	// (0x0004a7e9) list_double_graphic_pane_vc_g3

0x0002,

0xfa9c,	// (0x00056560) list_double_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x00056560) list_double_graphic_pane_vc_g

0x34cb,	// (0x00049f8f) list_double_graphic_pane_vc_t1_ParamLimits

0x34cb,	// (0x00049f8f) list_double_graphic_pane_vc_t1

0x3442,	// (0x00049f06) list_double_graphic_pane_vc_t2_ParamLimits

0x3442,	// (0x00049f06) list_double_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x00056567) list_double_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x00056567) list_double_graphic_pane_vc_t

0x03a6,	// (0x00046e6a) aid_size_cell_fastswap

0x739e,	// (0x0004de62) aid_size_cell_touch_ParamLimits

0x739e,	// (0x0004de62) aid_size_cell_touch

0x0613,	// (0x000470d7) popup_fast_swap_wide_window_ParamLimits

0x0613,	// (0x000470d7) popup_fast_swap_wide_window

0x74e9,	// (0x0004dfad) touch_pane_ParamLimits

0x74e9,	// (0x0004dfad) touch_pane

0xbb02,	// (0x000525c6) button_value_adjust_pane_cp2

0x0cd8,	// (0x0004779c) button_value_adjust_pane_cp4

0x0cfc,	// (0x000477c0) form_field_data_pane_cp2

0x78fa,	// (0x0004e3be) form_field_data_wide_pane_cp2

0xbe61,	// (0x00052925) bg_scroll_pane_ParamLimits

0x0f59,	// (0x00047a1d) scroll_handle_pane_ParamLimits

0x0f6d,	// (0x00047a31) scroll_sc2_down_pane_ParamLimits

0x0f6d,	// (0x00047a31) scroll_sc2_down_pane

0xbe92,	// (0x00052956) scroll_sc2_up_pane_ParamLimits

0xbe92,	// (0x00052956) scroll_sc2_up_pane

0x9cbd,	// (0x00050781) grid_wheel_folder_pane_g1_ParamLimits

0x9cbd,	// (0x00050781) grid_wheel_folder_pane_g1

0x1132,	// (0x00047bf6) clock_nsta_pane_cp2_ParamLimits

0x1132,	// (0x00047bf6) clock_nsta_pane_cp2

0x8ad1,	// (0x0004f595) listscroll_midp_pane_ParamLimits

0x8ae2,	// (0x0004f5a6) midp_canvas_pane

0xc745,	// (0x00053209) nsta_clock_indic_pane

0xc775,	// (0x00053239) listscroll_form_pane_vc

0xc77d,	// (0x00053241) listscroll_set_pane_vc_ParamLimits

0xc77d,	// (0x00053241) listscroll_set_pane_vc

0x938b,	// (0x0004fe4f) clock_nsta_pane

0x93b5,	// (0x0004fe79) indicator_nsta_pane

0xc9bf,	// (0x00053483) bg_popup_sub_pane_cp2_ParamLimits

0xc9d3,	// (0x00053497) find_pane_cp2_ParamLimits

0xc9d3,	// (0x00053497) find_pane_cp2

0xc9e9,	// (0x000534ad) grid_toobar_pane_ParamLimits

0xcb45,	// (0x00053609) list_form_gen_pane_vc_ParamLimits

0xcb45,	// (0x00053609) list_form_gen_pane_vc

0xcb5b,	// (0x0005361f) scroll_pane_cp8_vc_ParamLimits

0xcb5b,	// (0x0005361f) scroll_pane_cp8_vc

0xcbb7,	// (0x0005367b) data_form_wide_pane_vc_ParamLimits

0xcbb7,	// (0x0005367b) data_form_wide_pane_vc

0xcbc3,	// (0x00053687) form_field_data_wide_pane_vc_g1

0xcbcb,	// (0x0005368f) form_field_data_wide_pane_vc_t1_ParamLimits

0xcbcb,	// (0x0005368f) form_field_data_wide_pane_vc_t1

0xbb16,	// (0x000525da) input_focus_pane_cp6_vc_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_cp6_vc

0x972a,	// (0x000501ee) list_midp_pane_ParamLimits

0xd1c0,	// (0x00053c84) scroll_pane_cp16_ParamLimits

0xd1c0,	// (0x00053c84) scroll_pane_cp16

0xce32,	// (0x000538f6) button_value_adjust_pane_ParamLimits

0xce32,	// (0x000538f6) button_value_adjust_pane

0x98fe,	// (0x000503c2) button_value_adjust_pane_cp6_ParamLimits

0x98fe,	// (0x000503c2) button_value_adjust_pane_cp6

0x9a18,	// (0x000504dc) settings_code_pane_cp_ParamLimits

0x9a18,	// (0x000504dc) settings_code_pane_cp

0xa77f,	// (0x00051243) cell_touch_pane_g1

0xa77f,	// (0x00051243) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00056206) cell_touch_pane_g

0x9ba0,	// (0x00050664) cell_touch_pane_cp_ParamLimits

0x9ba0,	// (0x00050664) cell_touch_pane_cp

0x9bbc,	// (0x00050680) cell_touch_pane_ParamLimits

0x9bbc,	// (0x00050680) cell_touch_pane

0xa77f,	// (0x00051243) scroll_sc2_down_pane_g1

0xa77f,	// (0x00051243) scroll_sc2_up_pane_g1

0xa789,	// (0x0005124d) bg_set_opt_pane_cp4_vc

0xe054,	// (0x00054b18) list_set_graphic_pane_vc_g1_ParamLimits

0xe054,	// (0x00054b18) list_set_graphic_pane_vc_g1

0xe060,	// (0x00054b24) list_set_graphic_pane_vc_g2_ParamLimits

0xe060,	// (0x00054b24) list_set_graphic_pane_vc_g2

0x0001,

0xfa20,	// (0x000564e4) list_set_graphic_pane_vc_g_ParamLimits

0xfa20,	// (0x000564e4) list_set_graphic_pane_vc_g

0xe06c,	// (0x00054b30) text_primary_small_cp13_vc_ParamLimits

0xe06c,	// (0x00054b30) text_primary_small_cp13_vc

0xe084,	// (0x00054b48) list_set_graphic_pane_vc_ParamLimits

0xe084,	// (0x00054b48) list_set_graphic_pane_vc

0xa789,	// (0x0005124d) input_focus_pane_cp2_vc

0xa77f,	// (0x00051243) setting_code_pane_vc_g1

0xe098,	// (0x00054b5c) setting_code_pane_vc_t1

0xe0a6,	// (0x00054b6a) set_text_pane_vc_t1_ParamLimits

0xe0a6,	// (0x00054b6a) set_text_pane_vc_t1

0xa789,	// (0x0005124d) input_focus_pane_cp1_vc

0xe0c1,	// (0x00054b85) list_set_text_pane_vc

0xa77f,	// (0x00051243) setting_text_pane_vc_g1

0xa789,	// (0x0005124d) bg_set_opt_pane_cp2_vc

0xe0cb,	// (0x00054b8f) setting_slider_graphic_pane_vc_g1

0xe0d3,	// (0x00054b97) setting_slider_graphic_pane_vc_t1

0xe0e1,	// (0x00054ba5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa25,	// (0x000564e9) setting_slider_graphic_pane_vc_t

0xe0ef,	// (0x00054bb3) slider_set_pane_cp_vc

0xe0f7,	// (0x00054bbb) slider_set_pane_vc_g1

0xe100,	// (0x00054bc4) slider_set_pane_vc_g2

0x0006,

0xfa2a,	// (0x000564ee) slider_set_pane_vc_g

0xbb7d,	// (0x00052641) set_opt_bg_pane_g1_copy1

0xbb85,	// (0x00052649) set_opt_bg_pane_g2_copy1

0xe12c,	// (0x00054bf0) set_opt_bg_pane_g3_copy1

0xbb95,	// (0x00052659) set_opt_bg_pane_g4_copy1

0xbb9d,	// (0x00052661) set_opt_bg_pane_g5_copy1

0xbba5,	// (0x00052669) set_opt_bg_pane_g6_copy1

0xe136,	// (0x00054bfa) set_opt_bg_pane_g7_copy1

0xe13e,	// (0x00054c02) set_opt_bg_pane_g8_copy1

0xe148,	// (0x00054c0c) set_opt_bg_pane_g9_copy1

0xa789,	// (0x0005124d) bg_set_opt_pane_cp_vc

0xe152,	// (0x00054c16) setting_slider_pane_vc_t1

0xe0d3,	// (0x00054b97) setting_slider_pane_vc_t2

0xe0e1,	// (0x00054ba5) setting_slider_pane_vc_t3

0x0002,

0xfa39,	// (0x000564fd) setting_slider_pane_vc_t

0xe0ef,	// (0x00054bb3) slider_set_pane_vc

0x14d3,	// (0x00047f97) volume_set_pane_vc_g1

0x14dc,	// (0x00047fa0) volume_set_pane_vc_g2

0x14e5,	// (0x00047fa9) volume_set_pane_vc_g3

0x14ee,	// (0x00047fb2) volume_set_pane_vc_g4

0x14f7,	// (0x00047fbb) volume_set_pane_vc_g5

0x1500,	// (0x00047fc4) volume_set_pane_vc_g6

0x1509,	// (0x00047fcd) volume_set_pane_vc_g7

0x1512,	// (0x00047fd6) volume_set_pane_vc_g8

0x151b,	// (0x00047fdf) volume_set_pane_vc_g9

0x1524,	// (0x00047fe8) volume_set_pane_vc_g10

0x0009,

0xfa40,	// (0x00056504) volume_set_pane_vc_g

0xe161,	// (0x00054c25) volume_set_pane_vc

0xe169,	// (0x00054c2d) button_value_adjust_pane_cp1_vc

0xe173,	// (0x00054c37) list_highlight_pane_cp2_vc

0xe17c,	// (0x00054c40) list_set_pane_vc_ParamLimits

0xe17c,	// (0x00054c40) list_set_pane_vc

0xe1e6,	// (0x00054caa) main_pane_set_vc_t1_ParamLimits

0xe1e6,	// (0x00054caa) main_pane_set_vc_t1

0xe1fb,	// (0x00054cbf) main_pane_set_vc_t2_ParamLimits

0xe1fb,	// (0x00054cbf) main_pane_set_vc_t2

0xe20d,	// (0x00054cd1) main_pane_set_vc_t3_ParamLimits

0xe20d,	// (0x00054cd1) main_pane_set_vc_t3

0xe221,	// (0x00054ce5) main_pane_set_vc_t4_ParamLimits

0xe221,	// (0x00054ce5) main_pane_set_vc_t4

0x0003,

0xfa55,	// (0x00056519) main_pane_set_vc_t_ParamLimits

0xfa55,	// (0x00056519) main_pane_set_vc_t

0xe235,	// (0x00054cf9) setting_code_pane_vc_ParamLimits

0xe235,	// (0x00054cf9) setting_code_pane_vc

0xe246,	// (0x00054d0a) setting_slider_graphic_pane_vc

0xe246,	// (0x00054d0a) setting_slider_pane_vc

0xe246,	// (0x00054d0a) setting_text_pane_vc

0xe246,	// (0x00054d0a) setting_volume_pane_vc

0xe250,	// (0x00054d14) scroll_pane_cp121_vc

0xbaf0,	// (0x000525b4) set_content_pane_vc

0xe28e,	// (0x00054d52) button_value_adjust_pane_g1

0xe297,	// (0x00054d5b) button_value_adjust_pane_g2

0x0001,

0xfaa8,	// (0x0005656c) button_value_adjust_pane_g

0xe2a0,	// (0x00054d64) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe2a0,	// (0x00054d64) form_field_slider_wide_pane_vc_t1

0xe2b4,	// (0x00054d78) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe2b4,	// (0x00054d78) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaad,	// (0x00056571) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaad,	// (0x00056571) form_field_slider_wide_pane_vc_t

0xa7d7,	// (0x0005129b) input_focus_pane_cp10_vc_ParamLimits

0xa7d7,	// (0x0005129b) input_focus_pane_cp10_vc

0xe2c6,	// (0x00054d8a) slider_cont_pane_cp1_vc_ParamLimits

0xe2c6,	// (0x00054d8a) slider_cont_pane_cp1_vc

0xe0f7,	// (0x00054bbb) slider_form_pane_g1_cp2

0xe100,	// (0x00054bc4) slider_form_pane_g2_cp2

0xe2df,	// (0x00054da3) form_field_slider_pane_vc_t3

0xe2ed,	// (0x00054db1) form_field_slider_pane_vc_t4

0xe2fb,	// (0x00054dbf) slider_form_pane_vc_ParamLimits

0xe2fb,	// (0x00054dbf) slider_form_pane_vc

0xe308,	// (0x00054dcc) form_field_slider_pane_vc_t1_ParamLimits

0xe308,	// (0x00054dcc) form_field_slider_pane_vc_t1

0xe2b4,	// (0x00054d78) form_field_slider_pane_vc_t2_ParamLimits

0xe2b4,	// (0x00054d78) form_field_slider_pane_vc_t2

0x0001,

0xfabd,	// (0x00056581) form_field_slider_pane_vc_t_ParamLimits

0xfabd,	// (0x00056581) form_field_slider_pane_vc_t

0xa7d7,	// (0x0005129b) input_focus_pane_cp9_vc_ParamLimits

0xa7d7,	// (0x0005129b) input_focus_pane_cp9_vc

0xe324,	// (0x00054de8) slider_cont_pane_vc_ParamLimits

0xe324,	// (0x00054de8) slider_cont_pane_vc

0xe336,	// (0x00054dfa) list_form_graphic_pane_cp_vc_ParamLimits

0xe336,	// (0x00054dfa) list_form_graphic_pane_cp_vc

0xcbc3,	// (0x00053687) form_field_popup_wide_pane_vc_g1

0xe34b,	// (0x00054e0f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe34b,	// (0x00054e0f) form_field_popup_wide_pane_vc_t1

0xbb16,	// (0x000525da) input_focus_pane_cp8_vc_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_cp8_vc

0xe362,	// (0x00054e26) list_form_wide_pane_vc_ParamLimits

0xe362,	// (0x00054e26) list_form_wide_pane_vc

0xe36e,	// (0x00054e32) list_form_graphic_pane_vc_g1

0xe376,	// (0x00054e3a) list_form_graphic_pane_vc_t1_ParamLimits

0xe376,	// (0x00054e3a) list_form_graphic_pane_vc_t1

0xa7e5,	// (0x000512a9) list_highlight_pane_cp5_vc_ParamLimits

0xa7e5,	// (0x000512a9) list_highlight_pane_cp5_vc

0xe392,	// (0x00054e56) list_form_graphic_pane_vc_ParamLimits

0xe392,	// (0x00054e56) list_form_graphic_pane_vc

0xcbc3,	// (0x00053687) form_field_popup_pane_vc_g1

0xe3a8,	// (0x00054e6c) form_field_popup_pane_vc_t1_ParamLimits

0xe3a8,	// (0x00054e6c) form_field_popup_pane_vc_t1

0xbb16,	// (0x000525da) input_focus_pane_cp7_vc_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_cp7_vc

0xe3bf,	// (0x00054e83) list_form_pane_vc_ParamLimits

0xe3bf,	// (0x00054e83) list_form_pane_vc

0xe3cb,	// (0x00054e8f) data_form_pane_vc_t1_ParamLimits

0xe3cb,	// (0x00054e8f) data_form_pane_vc_t1

0xbb7d,	// (0x00052641) input_focus_pane_vc_g1

0xbb85,	// (0x00052649) input_focus_pane_vc_g2

0xbb8d,	// (0x00052651) input_focus_pane_vc_g3

0xbb95,	// (0x00052659) input_focus_pane_vc_g4

0xbb9d,	// (0x00052661) input_focus_pane_vc_g5

0xbba5,	// (0x00052669) input_focus_pane_vc_g6

0xbbad,	// (0x00052671) input_focus_pane_vc_g7

0xbbb5,	// (0x00052679) input_focus_pane_vc_g8

0xbbbd,	// (0x00052681) input_focus_pane_vc_g9

0xa77f,	// (0x00051243) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0005618f) input_focus_pane_vc_g

0xcbb7,	// (0x0005367b) data_form_pane_vc_ParamLimits

0xcbb7,	// (0x0005367b) data_form_pane_vc

0xcbc3,	// (0x00053687) form_field_data_pane_vc_g1

0xe3e6,	// (0x00054eaa) form_field_data_pane_vc_t1_ParamLimits

0xe3e6,	// (0x00054eaa) form_field_data_pane_vc_t1

0xbb16,	// (0x000525da) input_focus_pane_vc_ParamLimits

0xbb16,	// (0x000525da) input_focus_pane_vc

0xe400,	// (0x00054ec4) button_value_adjust_pane_cp3_vc

0xe408,	// (0x00054ecc) button_value_adjust_pane_cp5_vc

0xe410,	// (0x00054ed4) form_field_data_pane_vc_ParamLimits

0xe410,	// (0x00054ed4) form_field_data_pane_vc

0xe427,	// (0x00054eeb) form_field_data_pane_vc_cp2

0xe42f,	// (0x00054ef3) form_field_data_wide_pane_vc_ParamLimits

0xe42f,	// (0x00054ef3) form_field_data_wide_pane_vc

0xe445,	// (0x00054f09) form_field_data_wide_pane_vc_cp2

0xe44d,	// (0x00054f11) form_field_popup_pane_vc_ParamLimits

0xe44d,	// (0x00054f11) form_field_popup_pane_vc

0xe464,	// (0x00054f28) form_field_popup_wide_pane_vc_ParamLimits

0xe464,	// (0x00054f28) form_field_popup_wide_pane_vc

0xe47a,	// (0x00054f3e) form_field_slider_pane_vc_ParamLimits

0xe47a,	// (0x00054f3e) form_field_slider_pane_vc

0xe48d,	// (0x00054f51) form_field_slider_wide_pane_vc_ParamLimits

0xe48d,	// (0x00054f51) form_field_slider_wide_pane_vc

0x9bda,	// (0x0005069e) grid_touch_1_pane_ParamLimits

0x9bda,	// (0x0005069e) grid_touch_1_pane

0x9bee,	// (0x000506b2) grid_touch_2_pane_ParamLimits

0x9bee,	// (0x000506b2) grid_touch_2_pane

0xe4a0,	// (0x00054f64) touch_pane_g1_ParamLimits

0xe4a0,	// (0x00054f64) touch_pane_g1

0xe4ae,	// (0x00054f72) cell_app_pane_cp_wide_ParamLimits

0xe4ae,	// (0x00054f72) cell_app_pane_cp_wide

0xe4bf,	// (0x00054f83) grid_popup_fast_wide_pane_ParamLimits

0xe4bf,	// (0x00054f83) grid_popup_fast_wide_pane

0xe4d3,	// (0x00054f97) scroll_pane_cp19_ParamLimits

0xe4d3,	// (0x00054f97) scroll_pane_cp19

0xa789,	// (0x0005124d) bg_popup_window_pane_cp20

0xe4e7,	// (0x00054fab) listscroll_popup_fast_wide_pane

0xd18a,	// (0x00053c4e) grid_indicator_nsta_pane

0xe4ef,	// (0x00054fb3) clock_nsta_pane_g1

0xe4f8,	// (0x00054fbc) clock_nsta_pane_t1

0x9c18,	// (0x000506dc) cell_indicator_nsta_pane_ParamLimits

0x9c18,	// (0x000506dc) cell_indicator_nsta_pane

0xe4a0,	// (0x00054f64) cell_indicator_nsta_pane_g1

0x9c31,	// (0x000506f5) cell_indicator_nsta_pane_g2

0x0001,

0xfac7,	// (0x0005658b) cell_indicator_nsta_pane_g

0xe514,	// (0x00054fd8) clock_nsta_pane_cp

0xe51c,	// (0x00054fe0) indicator_nsta_pane_cp

0xe524,	// (0x00054fe8) nsta_clock_indic_pane_g1

0xad90,	// (0x00051854) grid_indicator_pane

0xbf87,	// (0x00052a4b) scroll_pane_cp29

0x1081,	// (0x00047b45) indicator_nsta_pane_cp2_ParamLimits

0x1081,	// (0x00047b45) indicator_nsta_pane_cp2

0xa7e5,	// (0x000512a9) main_apps_wheel_pane

0xccdf,	// (0x000537a3) form_midp_field_text_pane_ParamLimits

0xce12,	// (0x000538d6) scroll_bar_cp050_ParamLimits

0xe55c,	// (0x00055020) cell_indicator_pane_ParamLimits

0xe55c,	// (0x00055020) cell_indicator_pane

0xe573,	// (0x00055037) cell_indicator_pane_g1

0x9c47,	// (0x0005070b) grid_wheel_folder_pane_ParamLimits

0x9c47,	// (0x0005070b) grid_wheel_folder_pane

0x9c55,	// (0x00050719) list_wheel_apps_pane_ParamLimits

0x9c55,	// (0x00050719) list_wheel_apps_pane

0x9c63,	// (0x00050727) main_apps_wheel_pane_g1_ParamLimits

0x9c63,	// (0x00050727) main_apps_wheel_pane_g1

0x9c6f,	// (0x00050733) main_apps_wheel_pane_g2_ParamLimits

0x9c6f,	// (0x00050733) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x0005659a) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x0005659a) main_apps_wheel_pane_g

0x9c7d,	// (0x00050741) main_apps_wheel_pane_t1_ParamLimits

0x9c7d,	// (0x00050741) main_apps_wheel_pane_t1

0x9c91,	// (0x00050755) list_wheel_apps_pane_g1

0x9c99,	// (0x0005075d) list_wheel_apps_pane_g2

0x9ca1,	// (0x00050765) list_wheel_apps_pane_g3

0x9ca9,	// (0x0005076d) list_wheel_apps_pane_g4

0x9cb3,	// (0x00050777) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0005659f) list_wheel_apps_pane_g

0xc3bb,	// (0x00052e7f) navi_icon_text_pane

0x9286,	// (0x0004fd4a) aid_fill_nsta

0x9cca,	// (0x0005078e) navi_icon_text_pane_g1

0x9cd6,	// (0x0005079a) navi_icon_text_pane_t1

0x8ab9,	// (0x0004f57d) list_set_graphic_pane_t1_ParamLimits

0x8ab9,	// (0x0004f57d) list_set_graphic_pane_t1

0xd538,	// (0x00053ffc) popup_midp_note_alarm_window_t6_ParamLimits

0xd538,	// (0x00053ffc) popup_midp_note_alarm_window_t6

0xd54a,	// (0x0005400e) popup_midp_note_alarm_window_t7_ParamLimits

0xd54a,	// (0x0005400e) popup_midp_note_alarm_window_t7

0xd55c,	// (0x00054020) popup_midp_note_alarm_window_t8_ParamLimits

0xd55c,	// (0x00054020) popup_midp_note_alarm_window_t8

0xd56e,	// (0x00054032) popup_midp_note_alarm_window_t9_ParamLimits

0xd56e,	// (0x00054032) popup_midp_note_alarm_window_t9

0xd580,	// (0x00054044) popup_midp_note_alarm_window_t10_ParamLimits

0xd580,	// (0x00054044) popup_midp_note_alarm_window_t10

0xd592,	// (0x00054056) popup_midp_note_alarm_window_t11_ParamLimits

0xd592,	// (0x00054056) popup_midp_note_alarm_window_t11

0xd5a4,	// (0x00054068) scroll_pane_cp17_ParamLimits

0xd5a4,	// (0x00054068) scroll_pane_cp17

0x14d3,	// (0x00047f97) volume_small_pane_cp_g1

0x17c8,	// (0x0004828c) volume_small_pane_cp_g2

0x17d1,	// (0x00048295) volume_small_pane_cp_g3

0x17da,	// (0x0004829e) volume_small_pane_cp_g4

0x17e3,	// (0x000482a7) volume_small_pane_cp_g5

0x17ec,	// (0x000482b0) volume_small_pane_cp_g6

0x17f5,	// (0x000482b9) volume_small_pane_cp_g7

0x17fe,	// (0x000482c2) volume_small_pane_cp_g8

0x1807,	// (0x000482cb) volume_small_pane_cp_g9

0x1810,	// (0x000482d4) volume_small_pane_cp_g10

0xc565,	// (0x00053029) midp_ticker_pane_g1_ParamLimits

0xc571,	// (0x00053035) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00056257) midp_ticker_pane_g_ParamLimits

0x8b79,	// (0x0004f63d) midp_ticker_pane_t1_ParamLimits

0x92a6,	// (0x0004fd6a) aid_fill_nsta_2

0xcdfe,	// (0x000538c2) list_form2_midp_pane

0xdc5b,	// (0x0005471f) midp_editing_number_pane_ParamLimits

0xdc6a,	// (0x0005472e) midp_ticker_pane_ParamLimits

0xe57d,	// (0x00055041) form2_midp_field_pane

0xe585,	// (0x00055049) scroll_pane_cp51

0xe5a5,	// (0x00055069) form2_midp_button_pane_ParamLimits

0xe5a5,	// (0x00055069) form2_midp_button_pane

0xe5b7,	// (0x0005507b) form2_midp_content_pane_ParamLimits

0xe5b7,	// (0x0005507b) form2_midp_content_pane

0xe5d1,	// (0x00055095) form2_midp_field_choice_group_pane

0xe5d9,	// (0x0005509d) form2_midp_field_pane_g1

0xe5e1,	// (0x000550a5) form2_midp_field_pane_g2

0xe5e9,	// (0x000550ad) form2_midp_field_pane_g3

0xe5f1,	// (0x000550b5) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x000565c4) form2_midp_field_pane_g

0xe5f9,	// (0x000550bd) form2_midp_gauge_slider_pane

0xe601,	// (0x000550c5) form2_midp_gauge_wait_pane

0xe609,	// (0x000550cd) form2_midp_image_pane_ParamLimits

0xe609,	// (0x000550cd) form2_midp_image_pane

0xe624,	// (0x000550e8) form2_midp_label_pane_ParamLimits

0xe624,	// (0x000550e8) form2_midp_label_pane

0x9d04,	// (0x000507c8) form2_midp_label_pane_cp_ParamLimits

0x9d04,	// (0x000507c8) form2_midp_label_pane_cp

0xe63d,	// (0x00055101) form2_midp_string_pane_ParamLimits

0xe63d,	// (0x00055101) form2_midp_string_pane

0x7e34,	// (0x0004e8f8) form2_midp_text_pane_ParamLimits

0x7e34,	// (0x0004e8f8) form2_midp_text_pane

0xe64f,	// (0x00055113) form2_midp_time_pane

0xe65f,	// (0x00055123) input_focus_pane_cp51_ParamLimits

0xe65f,	// (0x00055123) input_focus_pane_cp51

0xe677,	// (0x0005513b) form2_midp_label_pane_t1_ParamLimits

0xe677,	// (0x0005513b) form2_midp_label_pane_t1

0x874c,	// (0x0004f210) form2_mdip_text_pane_t1_ParamLimits

0x874c,	// (0x0004f210) form2_mdip_text_pane_t1

0x351a,	// (0x00049fde) form2_midp_time_pane_t1

0xe6c0,	// (0x00055184) form2_midp_gauge_slider_pane_t1

0x9d25,	// (0x000507e9) form2_midp_gauge_slider_pane_t2

0x9d37,	// (0x000507fb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x000565cd) form2_midp_gauge_slider_pane_t

0xe6d2,	// (0x00055196) form2_midp_slider_pane

0xe6de,	// (0x000551a2) form2_midp_gauge_wait_pane_t1

0xe6ec,	// (0x000551b0) form2_midp_wait_pane_ParamLimits

0xe6ec,	// (0x000551b0) form2_midp_wait_pane

0x9d49,	// (0x0005080d) list_single_2graphic_pane_cp4_ParamLimits

0x9d49,	// (0x0005080d) list_single_2graphic_pane_cp4

0x96b7,	// (0x0005017b) list_single_midp_graphic_pane_cp_ParamLimits

0x96b7,	// (0x0005017b) list_single_midp_graphic_pane_cp

0xa789,	// (0x0005124d) list_highlight_pane_cp20

0xe717,	// (0x000551db) list_single_2graphic_pane_g1_cp4

0xe71f,	// (0x000551e3) list_single_2graphic_pane_g2_cp4

0xe727,	// (0x000551eb) list_single_2graphic_pane_t1_cp4

0xa7e5,	// (0x000512a9) list_highlight_pane_cp21

0xe736,	// (0x000551fa) list_single_midp_graphic_pane_g4_cp

0xe745,	// (0x00055209) list_single_midp_graphic_pane_t1_cp

0x9d5e,	// (0x00050822) form2_mdip_string_pane_t1_ParamLimits

0x9d5e,	// (0x00050822) form2_mdip_string_pane_t1

0xa789,	// (0x0005124d) bg_wml_button_pane_cp2

0xa77f,	// (0x00051243) form2_midp_image_pane_g1

0x2853,	// (0x00049317) list_double_large_graphic_pane_g5_ParamLimits

0x2853,	// (0x00049317) list_double_large_graphic_pane_g5

0x8ad1,	// (0x0004f595) midp_form_pane_ParamLimits

0xa7e5,	// (0x000512a9) main_apps_wheel_pane_ParamLimits

0x8fe2,	// (0x0004faa6) popup_preview_window_ParamLimits

0x8fe2,	// (0x0004faa6) popup_preview_window

0xc85c,	// (0x00053320) popup_touch_info_window_ParamLimits

0xc85c,	// (0x00053320) popup_touch_info_window

0xc87a,	// (0x0005333e) popup_touch_menu_window_ParamLimits

0xc87a,	// (0x0005333e) popup_touch_menu_window

0xa775,	// (0x00051239) bg_popup_sub_pane_cp6

0xe75a,	// (0x0005521e) list_touch_menu_pane

0xe762,	// (0x00055226) list_single_touch_menu_pane_ParamLimits

0xe762,	// (0x00055226) list_single_touch_menu_pane

0xe779,	// (0x0005523d) list_single_touch_menu_pane_t1

0xa7e5,	// (0x000512a9) bg_popup_sub_pane_cp7_ParamLimits

0xa7e5,	// (0x000512a9) bg_popup_sub_pane_cp7

0xe787,	// (0x0005524b) heading_sub_pane

0xe78f,	// (0x00055253) list_touch_info_pane_ParamLimits

0xe78f,	// (0x00055253) list_touch_info_pane

0xe79e,	// (0x00055262) list_single_touch_info_pane_ParamLimits

0xe79e,	// (0x00055262) list_single_touch_info_pane

0xe7b0,	// (0x00055274) list_single_touch_info_pane_t1

0xe7be,	// (0x00055282) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x000565db) list_single_touch_info_pane_t

0xc53b,	// (0x00052fff) bg_popup_heading_pane_cp

0xe7cc,	// (0x00055290) heading_sub_pane_t1

0xcb71,	// (0x00053635) bg_popup_preview_window_pane_cp_ParamLimits

0xcb71,	// (0x00053635) bg_popup_preview_window_pane_cp

0xe787,	// (0x0005524b) heading_preview_pane

0xe78f,	// (0x00055253) list_preview_pane_ParamLimits

0xe78f,	// (0x00055253) list_preview_pane

0xe7da,	// (0x0005529e) popup_preview_window_g1

0xe79e,	// (0x00055262) list_single_preview_pane_ParamLimits

0xe79e,	// (0x00055262) list_single_preview_pane

0xe7e2,	// (0x000552a6) list_single_preview_pane_g1

0xe7ea,	// (0x000552ae) list_single_preview_pane_t1

0xe7b0,	// (0x00055274) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x000565e0) list_single_preview_pane_t

0xe7f8,	// (0x000552bc) bg_popup_heading_pane_cp2_ParamLimits

0xe7f8,	// (0x000552bc) bg_popup_heading_pane_cp2

0xe80e,	// (0x000552d2) heading_preview_pane_g1

0xe816,	// (0x000552da) heading_preview_pane_t1_ParamLimits

0xe816,	// (0x000552da) heading_preview_pane_t1

0xada7,	// (0x0005186b) soft_indicator_pane_t1_ParamLimits

0xba89,	// (0x0005254d) scroll_pane_ParamLimits

0xbe80,	// (0x00052944) scroll_sc2_left_pane

0xbe89,	// (0x0005294d) scroll_sc2_right_pane

0xbea8,	// (0x0005296c) scroll_bg_pane_g1_ParamLimits

0xbebd,	// (0x00052981) scroll_bg_pane_g2_ParamLimits

0xbed5,	// (0x00052999) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x000561e6) scroll_bg_pane_g_ParamLimits

0xbea8,	// (0x0005296c) scroll_handle_pane_g1_ParamLimits

0xbef7,	// (0x000529bb) scroll_handle_pane_g2_ParamLimits

0xbed5,	// (0x00052999) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x000561ed) scroll_handle_pane_g_ParamLimits

0xc79d,	// (0x00053261) popup_choice_list_window_ParamLimits

0xc79d,	// (0x00053261) popup_choice_list_window

0xc9cb,	// (0x0005348f) choice_list_pane

0xca4d,	// (0x00053511) cell_toolbar_pane_t1

0xca75,	// (0x00053539) toolbar_button_pane_ParamLimits

0xd9be,	// (0x00054482) ai_gene_pane_1_t2_ParamLimits

0xd9be,	// (0x00054482) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x000563fe) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x000563fe) ai_gene_pane_1_t

0xe833,	// (0x000552f7) scroll_sc2_left_pane_g1

0xe833,	// (0x000552f7) scroll_sc2_right_pane_g1

0xbc6e,	// (0x00052732) bg_popup_sub_pane_cp10

0xe83d,	// (0x00055301) list_choice_list_pane

0xe854,	// (0x00055318) list_single_choice_list_pane_ParamLimits

0xe854,	// (0x00055318) list_single_choice_list_pane

0xe868,	// (0x0005532c) list_single_choice_list_pane_g1

0xe870,	// (0x00055334) list_single_choice_list_pane_t1_ParamLimits

0xe870,	// (0x00055334) list_single_choice_list_pane_t1

0xe885,	// (0x00055349) choice_list_pane_g1

0xe88d,	// (0x00055351) choice_list_pane_t1

0xa775,	// (0x00051239) input_focus_pane_cp11

0xbde3,	// (0x000528a7) title_pane_stacon_g2_ParamLimits

0xbde3,	// (0x000528a7) title_pane_stacon_g2

0x0002,

0xf708,	// (0x000561cc) title_pane_stacon_g_ParamLimits

0xf708,	// (0x000561cc) title_pane_stacon_g

0xc53b,	// (0x00052fff) cursor_press_pane

0x8c93,	// (0x0004f757) popup_fep_hwr_window_ParamLimits

0x8c93,	// (0x0004f757) popup_fep_hwr_window

0xc7f3,	// (0x000532b7) popup_fep_vkb_window_ParamLimits

0xc7f3,	// (0x000532b7) popup_fep_vkb_window

0xe89b,	// (0x0005535f) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00056609) fep_vkb_side_pane_g_ParamLimits

0x1852,	// (0x00048316) fep_hwr_candidate_pane_ParamLimits

0x1852,	// (0x00048316) fep_hwr_candidate_pane

0x187c,	// (0x00048340) fep_hwr_side_pane_ParamLimits

0x187c,	// (0x00048340) fep_hwr_side_pane

0x189c,	// (0x00048360) fep_hwr_top_pane_ParamLimits

0x189c,	// (0x00048360) fep_hwr_top_pane

0x18b4,	// (0x00048378) fep_hwr_write_pane_ParamLimits

0x18b4,	// (0x00048378) fep_hwr_write_pane

0xfb45,	// (0x00056609) fep_vkb_side_pane_g

0xe8a3,	// (0x00055367) fep_hwr_top_pane_g1

0xe8b5,	// (0x00055379) fep_hwr_top_pane_g2

0x18ee,	// (0x000483b2) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x000565e5) fep_hwr_top_pane_g

0x1903,	// (0x000483c7) fep_hwr_top_text_pane

0xc04e,	// (0x00052b12) fep_hwr_top_text_pane_g1

0xe8eb,	// (0x000553af) fep_hwr_top_text_pane_t1

0x19f9,	// (0x000484bd) fep_hwr_candidate_pane_g1

0xea18,	// (0x000554dc) fep_vkb_keypad_pane_g3_ParamLimits

0xea18,	// (0x000554dc) fep_vkb_keypad_pane_g3

0xea40,	// (0x00055504) fep_vkb_keypad_pane_g4_ParamLimits

0xea40,	// (0x00055504) fep_vkb_keypad_pane_g4

0xeaaf,	// (0x00055573) fep_vkb_bottom_pane_g2_ParamLimits

0xeaaf,	// (0x00055573) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00056610) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00056610) fep_vkb_bottom_pane_g

0xe833,	// (0x000552f7) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x0005661a) cell_vkb_side_pane_g

0xeaf3,	// (0x000555b7) cell_vkb_side_pane_t1

0xeb01,	// (0x000555c5) cell_vkb_side_pane_t1_copy1

0xe833,	// (0x000552f7) bg_fep_vkb_candidate_pane_g2

0xebd7,	// (0x0005569b) cell_vkb_candidate_pane_ParamLimits

0xe8f9,	// (0x000553bd) aid_size_cell_vkb_ParamLimits

0xe8f9,	// (0x000553bd) aid_size_cell_vkb

0xebd7,	// (0x0005569b) cell_vkb_candidate_pane

0x1a20,	// (0x000484e4) bg_popup_fep_shadow_pane_g1

0x9dec,	// (0x000508b0) fep_vkb_bottom_pane_ParamLimits

0x9dec,	// (0x000508b0) fep_vkb_bottom_pane

0xe986,	// (0x0005544a) fep_vkb_candidate_pane_ParamLimits

0xe986,	// (0x0005544a) fep_vkb_candidate_pane

0x9e11,	// (0x000508d5) fep_vkb_keypad_pane_ParamLimits

0x9e11,	// (0x000508d5) fep_vkb_keypad_pane

0x9e4d,	// (0x00050911) fep_vkb_side_pane_ParamLimits

0x9e4d,	// (0x00050911) fep_vkb_side_pane

0x9e89,	// (0x0005094d) fep_vkb_top_pane_ParamLimits

0x9e89,	// (0x0005094d) fep_vkb_top_pane

0xe9ac,	// (0x00055470) fep_vkb_top_pane_g1_ParamLimits

0xe9ac,	// (0x00055470) fep_vkb_top_pane_g1

0xe9bb,	// (0x0005547f) fep_vkb_top_pane_g2_ParamLimits

0xe9bb,	// (0x0005547f) fep_vkb_top_pane_g2

0xe9ca,	// (0x0005548e) fep_vkb_top_pane_g3_ParamLimits

0xe9ca,	// (0x0005548e) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00056600) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00056600) fep_vkb_top_pane_g

0xe9e8,	// (0x000554ac) fep_vkb_top_text_pane_ParamLimits

0xe9e8,	// (0x000554ac) fep_vkb_top_text_pane

0x9ec5,	// (0x00050989) fep_vkb_side_pane_g1_ParamLimits

0x9ec5,	// (0x00050989) fep_vkb_side_pane_g1

0xea07,	// (0x000554cb) grid_vkb_side_pane_ParamLimits

0xea07,	// (0x000554cb) grid_vkb_side_pane

0x1a28,	// (0x000484ec) bg_popup_fep_shadow_pane_g2

0x1a31,	// (0x000484f5) bg_popup_fep_shadow_pane_g3

0x1a39,	// (0x000484fd) bg_popup_fep_shadow_pane_g4

0x1a42,	// (0x00048506) bg_popup_fep_shadow_pane_g5

0x1a4c,	// (0x00048510) bg_popup_fep_shadow_pane_g6

0x1a54,	// (0x00048518) bg_popup_fep_shadow_pane_g7

0xbb95,	// (0x00052659) bg_popup_fep_shadow_pane_g8

0xea5e,	// (0x00055522) grid_vkb_keypad_number_pane_ParamLimits

0xea5e,	// (0x00055522) grid_vkb_keypad_number_pane

0xea6e,	// (0x00055532) grid_vkb_keypad_pane_ParamLimits

0xea6e,	// (0x00055532) grid_vkb_keypad_pane

0xea94,	// (0x00055558) fep_vkb_bottom_pane_g1_ParamLimits

0xea94,	// (0x00055558) fep_vkb_bottom_pane_g1

0xeabd,	// (0x00055581) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xeabd,	// (0x00055581) grid_vkb_keypad_bottom_left_pane

0xead2,	// (0x00055596) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xead2,	// (0x00055596) grid_vkb_keypad_bottom_right_pane

0xeae7,	// (0x000555ab) fep_vkb_top_text_pane_g1

0x9f0c,	// (0x000509d0) fep_vkb_top_text_pane_t1

0x9f1e,	// (0x000509e2) cell_vkb_side_pane_ParamLimits

0x9f1e,	// (0x000509e2) cell_vkb_side_pane

0xe833,	// (0x000552f7) cell_vkb_side_pane_g1

0xeb0f,	// (0x000555d3) cell_vkb_keypad_pane_ParamLimits

0xeb0f,	// (0x000555d3) cell_vkb_keypad_pane

0xeb84,	// (0x00055648) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x0005662d) bg_popup_fep_shadow_pane_g

0x1a66,	// (0x0004852a) cell_hwr_side_pane_g1

0x1a66,	// (0x0004852a) cell_hwr_side_pane_g2

0xeb8e,	// (0x00055652) cell_vkb_keypad_pane_t1

0x9f34,	// (0x000509f8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9f34,	// (0x000509f8) cell_vkb_keypad_bottom_left_pane

0x9f49,	// (0x00050a0d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9f49,	// (0x00050a0d) cell_vkb_keypad_bottom_right_pane

0xe833,	// (0x000552f7) cell_vkb_keypad_bottom_left_pane_g1

0xe833,	// (0x000552f7) cell_vkb_keypad_bottom_right_pane_g1

0xeb9c,	// (0x00055660) cell_vkb_keypad_number_pane_ParamLimits

0xeb9c,	// (0x00055660) cell_vkb_keypad_number_pane

0xebbb,	// (0x0005567f) cell_vkb_keypad_number_pane_g1

0xebc5,	// (0x00055689) cell_vkb_keypad_number_pane_g2

0xebce,	// (0x00055692) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x0005661f) cell_vkb_keypad_number_pane_g

0xeb8e,	// (0x00055652) cell_vkb_keypad_number_pane_t1

0xebf2,	// (0x000556b6) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x00056640) cell_hwr_side_pane_g

0xec0b,	// (0x000556cf) cell_hwr_side_pane_t1

0x1a70,	// (0x00048534) cell_hwr_side_pane_t1_copy1

0x1a7e,	// (0x00048542) cell_hwr_candidate_pane_g1

0x1aad,	// (0x00048571) cell_hwr_candidate_pane_t1

0xe833,	// (0x000552f7) cell_vkb_candidate_pane_g2

0xec4f,	// (0x00055713) cell_vkb_candidate_pane_t1

0x1819,	// (0x000482dd) bg_popup_fep_shadow_pane_ParamLimits

0x1819,	// (0x000482dd) bg_popup_fep_shadow_pane

0x18ce,	// (0x00048392) bg_fep_hwr_top_pane_g4

0xe8c7,	// (0x0005538b) bg_hwr_side_pane_g1_ParamLimits

0xe8c7,	// (0x0005538b) bg_hwr_side_pane_g1

0x7e6b,	// (0x0004e92f) cell_hwr_side_pane_ParamLimits

0x7e6b,	// (0x0004e92f) cell_hwr_side_pane

0x197a,	// (0x0004843e) fep_hwr_write_pane_g1_ParamLimits

0x197a,	// (0x0004843e) fep_hwr_write_pane_g1

0x1987,	// (0x0004844b) fep_hwr_write_pane_g2_ParamLimits

0x1987,	// (0x0004844b) fep_hwr_write_pane_g2

0x1994,	// (0x00048458) fep_hwr_write_pane_g3_ParamLimits

0x1994,	// (0x00048458) fep_hwr_write_pane_g3

0x7e8b,	// (0x0004e94f) fep_hwr_write_pane_g4_ParamLimits

0x7e8b,	// (0x0004e94f) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x000565ec) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x000565ec) fep_hwr_write_pane_g

0x18ce,	// (0x00048392) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x18ce,	// (0x00048392) bg_fep_hwr_candidate_pane_g2

0x19b7,	// (0x0004847b) cell_hwr_candidate_pane_ParamLimits

0x19b7,	// (0x0004847b) cell_hwr_candidate_pane

0x19f9,	// (0x000484bd) fep_hwr_candidate_pane_g1_ParamLimits

0xe927,	// (0x000553eb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe927,	// (0x000553eb) bg_popup_fep_shadow_pane_cp2

0xe9da,	// (0x0005549e) fep_vkb_top_pane_g4_ParamLimits

0xe9da,	// (0x0005549e) fep_vkb_top_pane_g4

0xe9f9,	// (0x000554bd) fep_vkb_side_pane_g2_ParamLimits

0xe9f9,	// (0x000554bd) fep_vkb_side_pane_g2

0x7808,	// (0x0004e2cc) list_setting_pane_t4_ParamLimits

0x7808,	// (0x0004e2cc) list_setting_pane_t4

0x78a2,	// (0x0004e366) list_setting_number_pane_t5_ParamLimits

0x78a2,	// (0x0004e366) list_setting_number_pane_t5

0x89ea,	// (0x0004f4ae) list_double_heading_pane_cp2_ParamLimits

0x89ea,	// (0x0004f4ae) list_double_heading_pane_cp2

0xbb30,	// (0x000525f4) list_double_heading_pane_g1_cp2_ParamLimits

0xbb30,	// (0x000525f4) list_double_heading_pane_g1_cp2

0xbb3c,	// (0x00052600) list_double_heading_pane_g2_cp2_ParamLimits

0xbb3c,	// (0x00052600) list_double_heading_pane_g2_cp2

0xec5d,	// (0x00055721) list_double_heading_pane_t1_cp2_ParamLimits

0xec5d,	// (0x00055721) list_double_heading_pane_t1_cp2

0xec73,	// (0x00055737) list_double_heading_pane_t2_cp2_ParamLimits

0xec73,	// (0x00055737) list_double_heading_pane_t2_cp2

0xa76d,	// (0x00051231) aid_value_unit2

0x066d,	// (0x00047131) popup_preview_fixed_window

0xae87,	// (0x0005194b) bg_popup_preview_window_pane_cp02

0xec85,	// (0x00055749) list_preview_fixed_pane

0xeccb,	// (0x0005578f) list_empty_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_empty_pane_fp

0xeccb,	// (0x0005578f) list_single_cale_day_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_single_cale_day_pane_fp

0xeccb,	// (0x0005578f) list_single_graphic_heading_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_single_graphic_heading_pane_fp

0xeccb,	// (0x0005578f) list_single_graphic_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_single_graphic_pane_fp

0xeccb,	// (0x0005578f) list_single_heading_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_single_heading_pane_fp

0xeccb,	// (0x0005578f) list_single_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_single_pane_fp

0xece0,	// (0x000557a4) list_single_pane_fp_g1_ParamLimits

0xece0,	// (0x000557a4) list_single_pane_fp_g1

0xcb95,	// (0x00053659) list_single_pane_fp_g2_ParamLimits

0xcb95,	// (0x00053659) list_single_pane_fp_g2

0xecec,	// (0x000557b0) list_single_pane_fp_g3_ParamLimits

0xecec,	// (0x000557b0) list_single_pane_fp_g3

0xed00,	// (0x000557c4) list_single_pane_fp_g4_ParamLimits

0xed00,	// (0x000557c4) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00056653) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00056653) list_single_pane_fp_g

0x352d,	// (0x00049ff1) list_single_pane_fp_t1_ParamLimits

0x352d,	// (0x00049ff1) list_single_pane_fp_t1

0x3544,	// (0x0004a008) list_single_graphic_pane_fp_g1_ParamLimits

0x3544,	// (0x0004a008) list_single_graphic_pane_fp_g1

0xece0,	// (0x000557a4) list_single_graphic_pane_fp_g2_ParamLimits

0xece0,	// (0x000557a4) list_single_graphic_pane_fp_g2

0xcb95,	// (0x00053659) list_single_graphic_pane_fp_g3_ParamLimits

0xcb95,	// (0x00053659) list_single_graphic_pane_fp_g3

0xecec,	// (0x000557b0) list_single_graphic_pane_fp_g4_ParamLimits

0xecec,	// (0x000557b0) list_single_graphic_pane_fp_g4

0xed00,	// (0x000557c4) list_single_graphic_pane_fp_g5_ParamLimits

0xed00,	// (0x000557c4) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x0005665c) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x0005665c) list_single_graphic_pane_fp_g

0x3550,	// (0x0004a014) list_single_graphic_pane_fp_t1_ParamLimits

0x3550,	// (0x0004a014) list_single_graphic_pane_fp_t1

0x3544,	// (0x0004a008) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3544,	// (0x0004a008) list_single_graphic_heading_pane_fp_g1

0xece0,	// (0x000557a4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xece0,	// (0x000557a4) list_single_graphic_heading_pane_fp_g2

0xcb95,	// (0x00053659) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xcb95,	// (0x00053659) list_single_graphic_heading_pane_fp_g3

0xecec,	// (0x000557b0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xecec,	// (0x000557b0) list_single_graphic_heading_pane_fp_g4

0xed00,	// (0x000557c4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xed00,	// (0x000557c4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x0005665c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x0005665c) list_single_graphic_heading_pane_fp_g

0x3566,	// (0x0004a02a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3566,	// (0x0004a02a) list_single_graphic_heading_pane_fp_t1

0x357c,	// (0x0004a040) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x357c,	// (0x0004a040) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00056667) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00056667) list_single_graphic_heading_pane_fp_t

0x358e,	// (0x0004a052) list_single_cale_day_pane_fp_g1_ParamLimits

0x358e,	// (0x0004a052) list_single_cale_day_pane_fp_g1

0xed0c,	// (0x000557d0) list_single_cale_day_pane_fp_g2_ParamLimits

0xed0c,	// (0x000557d0) list_single_cale_day_pane_fp_g2

0x3d31,	// (0x0004a7f5) list_single_cale_day_pane_fp_g3_ParamLimits

0x3d31,	// (0x0004a7f5) list_single_cale_day_pane_fp_g3

0x3d59,	// (0x0004a81d) list_single_cale_day_pane_fp_g4_ParamLimits

0x3d59,	// (0x0004a81d) list_single_cale_day_pane_fp_g4

0x3d7d,	// (0x0004a841) list_single_cale_day_pane_fp_g5_ParamLimits

0x3d7d,	// (0x0004a841) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x0005666c) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x0005666c) list_single_cale_day_pane_fp_g

0x35c6,	// (0x0004a08a) list_single_cale_day_pane_fp_t1_ParamLimits

0x35c6,	// (0x0004a08a) list_single_cale_day_pane_fp_t1

0x35ec,	// (0x0004a0b0) list_single_cale_day_pane_fp_t2_ParamLimits

0x35ec,	// (0x0004a0b0) list_single_cale_day_pane_fp_t2

0x3605,	// (0x0004a0c9) list_single_cale_day_pane_fp_t3_ParamLimits

0x3605,	// (0x0004a0c9) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00056677) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00056677) list_single_cale_day_pane_fp_t

0xece0,	// (0x000557a4) list_empty_pane_fp_g1_ParamLimits

0xece0,	// (0x000557a4) list_empty_pane_fp_g1

0x361e,	// (0x0004a0e2) list_empty_pane_fp_t1

0x362c,	// (0x0004a0f0) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x0005667e) list_empty_pane_fp_t

0xece0,	// (0x000557a4) list_single_heading_pane_fp_g1_ParamLimits

0xece0,	// (0x000557a4) list_single_heading_pane_fp_g1

0xcb95,	// (0x00053659) list_single_heading_pane_fp_g2_ParamLimits

0xcb95,	// (0x00053659) list_single_heading_pane_fp_g2

0xecec,	// (0x000557b0) list_single_heading_pane_fp_g3_ParamLimits

0xecec,	// (0x000557b0) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00056683) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00056683) list_single_heading_pane_fp_g

0x363a,	// (0x0004a0fe) list_single_heading_pane_fp_t1_ParamLimits

0x363a,	// (0x0004a0fe) list_single_heading_pane_fp_t1

0x364c,	// (0x0004a110) list_single_heading_pane_fp_t2_ParamLimits

0x364c,	// (0x0004a110) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x0005668a) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x0005668a) list_single_heading_pane_fp_t

0xbc7a,	// (0x0005273e) aid_size_cell_fast

0xae6a,	// (0x0005192e) soft_indicator_pane_cp1_t1

0xbcb7,	// (0x0005277b) cell_app_pane_cp2_ParamLimits

0xbcb7,	// (0x0005277b) cell_app_pane_cp2

0x183b,	// (0x000482ff) fep_hwr_candidate_drop_down_list_pane

0x1a13,	// (0x000484d7) fep_hwr_candidate_pane_g3_ParamLimits

0x1a13,	// (0x000484d7) fep_hwr_candidate_pane_g3

0xa80a,	// (0x000512ce) fep_hwr_candidate_pane_g4_ParamLimits

0xa80a,	// (0x000512ce) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000565f9) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000565f9) fep_hwr_candidate_pane_g

0xe975,	// (0x00055439) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe975,	// (0x00055439) fep_vkb_candidate_drop_down_list_pane

0xebfa,	// (0x000556be) fep_vkb_candidate_pane_g3

0xec02,	// (0x000556c6) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00056626) fep_vkb_candidate_pane_g

0x1a7e,	// (0x00048542) cell_hwr_candidate_pane_g1_ParamLimits

0x1a8c,	// (0x00048550) cell_hwr_candidate_pane_g3_ParamLimits

0x1a8c,	// (0x00048550) cell_hwr_candidate_pane_g3

0x51f9,	// (0x0004bcbd) cell_hwr_candidate_pane_g4_ParamLimits

0x51f9,	// (0x0004bcbd) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00056645) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00056645) cell_hwr_candidate_pane_g

0xec19,	// (0x000556dd) cell_vkb_candidate_pane_g3_ParamLimits

0xec19,	// (0x000556dd) cell_vkb_candidate_pane_g3

0xec34,	// (0x000556f8) cell_vkb_candidate_pane_g4_ParamLimits

0xec34,	// (0x000556f8) cell_vkb_candidate_pane_g4

0xed18,	// (0x000557dc) cell_app_pane_cp2_g1_ParamLimits

0xed18,	// (0x000557dc) cell_app_pane_cp2_g1

0xed36,	// (0x000557fa) cell_app_pane_cp2_g2_ParamLimits

0xed36,	// (0x000557fa) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x0005668f) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x0005668f) cell_app_pane_cp2_g

0xed42,	// (0x00055806) cell_app_pane_cp2_t1_ParamLimits

0xed42,	// (0x00055806) cell_app_pane_cp2_t1

0xbb16,	// (0x000525da) grid_highlight_pane_cp1_ParamLimits

0xbb16,	// (0x000525da) grid_highlight_pane_cp1

0x1acb,	// (0x0004858f) cell_hwr_candidate_pane_cp1_ParamLimits

0x1acb,	// (0x0004858f) cell_hwr_candidate_pane_cp1

0x1a7e,	// (0x00048542) fep_hwr_candidate_drop_down_list_pane_g1

0x1aea,	// (0x000485ae) fep_hwr_candidate_drop_down_list_pane_g2

0x1af7,	// (0x000485bb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00056694) fep_hwr_candidate_drop_down_list_pane_g

0x1b04,	// (0x000485c8) fep_hwr_candidate_drop_down_list_scroll_pane

0x1b0d,	// (0x000485d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1b0d,	// (0x000485d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1b1a,	// (0x000485de) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1b1a,	// (0x000485de) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1b27,	// (0x000485eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1b27,	// (0x000485eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1b34,	// (0x000485f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1b34,	// (0x000485f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1b4f,	// (0x00048613) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1b4f,	// (0x00048613) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1b6a,	// (0x0004862e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1b6a,	// (0x0004862e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1b85,	// (0x00048649) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1b85,	// (0x00048649) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1ba0,	// (0x00048664) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1ba0,	// (0x00048664) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0005669b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0005669b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xed54,	// (0x00055818) cell_vkb_candidate_pane_cp1_ParamLimits

0xed54,	// (0x00055818) cell_vkb_candidate_pane_cp1

0xe9da,	// (0x0005549e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9da,	// (0x0005549e) fep_vkb_candidate_drop_down_list_pane_g1

0xed74,	// (0x00055838) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xed74,	// (0x00055838) fep_vkb_candidate_drop_down_list_pane_g2

0xed81,	// (0x00055845) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xed81,	// (0x00055845) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x000566ac) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x000566ac) fep_vkb_candidate_drop_down_list_pane_g

0xed8e,	// (0x00055852) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xed8e,	// (0x00055852) fep_vkb_candidate_drop_down_list_scroll_pane

0xed9b,	// (0x0005585f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xed9b,	// (0x0005585f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xeda8,	// (0x0005586c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeda8,	// (0x0005586c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xedb4,	// (0x00055878) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xedb4,	// (0x00055878) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xedc0,	// (0x00055884) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xedc0,	// (0x00055884) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xede1,	// (0x000558a5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xede1,	// (0x000558a5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xee02,	// (0x000558c6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee02,	// (0x000558c6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xee23,	// (0x000558e7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee23,	// (0x000558e7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xee44,	// (0x00055908) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee44,	// (0x00055908) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x000566b3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x000566b3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x82fb,	// (0x0004edbf) title_pane_g1_ParamLimits

0x830c,	// (0x0004edd0) title_pane_g2_ParamLimits

0xf592,	// (0x00056056) title_pane_g_ParamLimits

0xc03e,	// (0x00052b02) aid_call2_pane

0xc046,	// (0x00052b0a) aid_call_pane

0xc04e,	// (0x00052b12) popup_clock_analogue_window_g1

0xc04e,	// (0x00052b12) popup_clock_analogue_window_g2

0x0f82,	// (0x00047a46) popup_clock_analogue_window_g3

0x0f8b,	// (0x00047a4f) popup_clock_analogue_window_g4

0xa77f,	// (0x00051243) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x000561fb) popup_clock_analogue_window_g

0x0f93,	// (0x00047a57) popup_clock_analogue_window_t1

0x0fa1,	// (0x00047a65) clock_digital_number_pane_ParamLimits

0x0fa1,	// (0x00047a65) clock_digital_number_pane

0x0fad,	// (0x00047a71) clock_digital_number_pane_cp02_ParamLimits

0x0fad,	// (0x00047a71) clock_digital_number_pane_cp02

0x0fb9,	// (0x00047a7d) clock_digital_number_pane_cp03_ParamLimits

0x0fb9,	// (0x00047a7d) clock_digital_number_pane_cp03

0x0fc5,	// (0x00047a89) clock_digital_number_pane_cp04_ParamLimits

0x0fc5,	// (0x00047a89) clock_digital_number_pane_cp04

0x0fd1,	// (0x00047a95) clock_digital_separator_pane_ParamLimits

0x0fd1,	// (0x00047a95) clock_digital_separator_pane

0x0fdd,	// (0x00047aa1) popup_clock_digital_window_t1_ParamLimits

0x0fdd,	// (0x00047aa1) popup_clock_digital_window_t1

0xa77f,	// (0x00051243) clock_digital_number_pane_g1

0xa77f,	// (0x00051243) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00056206) clock_digital_number_pane_g

0xa77f,	// (0x00051243) clock_digital_separator_pane_g1

0xa77f,	// (0x00051243) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00056206) clock_digital_separator_pane_g

0x9286,	// (0x0004fd4a) aid_fill_nsta_ParamLimits

0x93b5,	// (0x0004fe79) indicator_nsta_pane_ParamLimits

0xc972,	// (0x00053436) popup_clock_analogue_window

0xc972,	// (0x00053436) popup_clock_digital_window

0xd18a,	// (0x00053c4e) grid_indicator_nsta_pane_ParamLimits

0xe506,	// (0x00054fca) clock_nsta_pane_t2

0x0001,

0xfac2,	// (0x00056586) clock_nsta_pane_t

0x0f46,	// (0x00047a0a) aid_size_max_handle

0x7a51,	// (0x0004e515) aid_size_min_handle

0xc53b,	// (0x00052fff) editor_scroll_pane

0xee5f,	// (0x00055923) ex_editor_pane

0xbc35,	// (0x000526f9) scroll_pane_cp13

0xbab5,	// (0x00052579) scroll_pane_cp14

0xc078,	// (0x00052b3c) scroll_pane_cp36

0x89f9,	// (0x0004f4bd) list_single_graphic_hl_pane_cp2_ParamLimits

0x89f9,	// (0x0004f4bd) list_single_graphic_hl_pane_cp2

0x873b,	// (0x0004f1ff) list_single_graphic_hl_pane_ParamLimits

0x873b,	// (0x0004f1ff) list_single_graphic_hl_pane

0x3662,	// (0x0004a126) aid_size_min_hl_cp1

0xee67,	// (0x0005592b) list_highlight_pane_cp34_ParamLimits

0xee67,	// (0x0005592b) list_highlight_pane_cp34

0xee78,	// (0x0005593c) list_single_graphic_hl_pane_g1_ParamLimits

0xee78,	// (0x0005593c) list_single_graphic_hl_pane_g1

0x366b,	// (0x0004a12f) list_single_graphic_hl_pane_g2_ParamLimits

0x366b,	// (0x0004a12f) list_single_graphic_hl_pane_g2

0x366b,	// (0x0004a12f) list_single_graphic_hl_pane_g3_ParamLimits

0x366b,	// (0x0004a12f) list_single_graphic_hl_pane_g3

0xc4ac,	// (0x00052f70) list_single_graphic_hl_pane_g4_ParamLimits

0xc4ac,	// (0x00052f70) list_single_graphic_hl_pane_g4

0x3da1,	// (0x0004a865) list_single_graphic_hl_pane_g5_ParamLimits

0x3da1,	// (0x0004a865) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x000566c4) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x000566c4) list_single_graphic_hl_pane_g

0x3677,	// (0x0004a13b) list_single_graphic_hl_pane_t1_ParamLimits

0x3677,	// (0x0004a13b) list_single_graphic_hl_pane_t1

0xee85,	// (0x00055949) aid_size_min_hl_cp2

0xee8e,	// (0x00055952) list_highlight_pane_cp34_cp2_ParamLimits

0xee8e,	// (0x00055952) list_highlight_pane_cp34_cp2

0xee78,	// (0x0005593c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee78,	// (0x0005593c) list_single_graphic_hl_pane_g1_cp2

0xee9b,	// (0x0005595f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee9b,	// (0x0005595f) list_single_graphic_hl_pane_g2_cp2

0xeea7,	// (0x0005596b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xeea7,	// (0x0005596b) list_single_graphic_hl_pane_g3_cp2

0xd7be,	// (0x00054282) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd7be,	// (0x00054282) list_single_graphic_hl_pane_g4_cp2

0xeeb5,	// (0x00055979) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xeeb5,	// (0x00055979) list_single_graphic_hl_pane_g5_cp2

0x7b03,	// (0x0004e5c7) control_pane_g4_ParamLimits

0x7b03,	// (0x0004e5c7) control_pane_g4

0xbc6e,	// (0x00052732) bg_popup_sub_pane_cp10_ParamLimits

0xe83d,	// (0x00055301) list_choice_list_pane_ParamLimits

0xe84c,	// (0x00055310) scroll_pane_cp23

0xae87,	// (0x0005194b) bg_popup_preview_window_pane_cp02_ParamLimits

0xec85,	// (0x00055749) list_preview_fixed_pane_ParamLimits

0xec9b,	// (0x0005575f) list_preview_fixed_pane_cp_ParamLimits

0xec9b,	// (0x0005575f) list_preview_fixed_pane_cp

0xeca7,	// (0x0005576b) popup_preview_fixed_window_g1_ParamLimits

0xeca7,	// (0x0005576b) popup_preview_fixed_window_g1

0xecb3,	// (0x00055777) popup_preview_fixed_window_g2_ParamLimits

0xecb3,	// (0x00055777) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x0005664c) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x0005664c) popup_preview_fixed_window_g

0x0eba,	// (0x0004797e) aid_navi_side_left_pane_ParamLimits

0x0ecf,	// (0x00047993) aid_navi_side_right_pane_ParamLimits

0x0ee7,	// (0x000479ab) navi_icon_pane_stacon_ParamLimits

0x0efb,	// (0x000479bf) navi_navi_pane_stacon_ParamLimits

0x0ee7,	// (0x000479ab) navi_text_pane_stacon_ParamLimits

0xa775,	// (0x00051239) main_text_info_pane

0xeedf,	// (0x000559a3) listscroll_text_info_pane

0xeee7,	// (0x000559ab) list_text_info_pane_ParamLimits

0xeee7,	// (0x000559ab) list_text_info_pane

0xeef6,	// (0x000559ba) scroll_pane_cp24_ParamLimits

0xeef6,	// (0x000559ba) scroll_pane_cp24

0x9f64,	// (0x00050a28) list_text_info_pane_t1_ParamLimits

0x9f64,	// (0x00050a28) list_text_info_pane_t1

0x8c06,	// (0x0004f6ca) popup_fast_swap2_window_ParamLimits

0x8c06,	// (0x0004f6ca) popup_fast_swap2_window

0xef14,	// (0x000559d8) aid_size_cell_fast2

0xa775,	// (0x00051239) bg_popup_window_pane_cp17

0xce2a,	// (0x000538ee) heading_pane_cp2

0xb4ee,	// (0x00051fb2) listscroll_fast2_pane

0xef1e,	// (0x000559e2) grid_fast2_pane

0xef28,	// (0x000559ec) listscroll_fast2_pane_g1

0xef30,	// (0x000559f4) listscroll_fast2_pane_g2

0x0001,

0x0027,	// (0x00046aeb) listscroll_fast2_pane_g

0xbc35,	// (0x000526f9) scroll_pane_cp26

0xef3a,	// (0x000559fe) cell_fast2_pane_ParamLimits

0xef3a,	// (0x000559fe) cell_fast2_pane

0xef4f,	// (0x00055a13) cell_fast2_pane_g1

0xef58,	// (0x00055a1c) cell_fast2_pane_g2

0xef61,	// (0x00055a25) cell_fast2_pane_g3

0x0002,

0x002c,	// (0x00046af0) cell_fast2_pane_g

0xb530,	// (0x00051ff4) grid_highlight_pane_cp9

0xb545,	// (0x00052009) main_eswt_pane_ParamLimits

0xb545,	// (0x00052009) main_eswt_pane

0xef0b,	// (0x000559cf) list_single_text_info_pane

0xef69,	// (0x00055a2d) eswt_ctrl_button_pane

0xef69,	// (0x00055a2d) eswt_ctrl_canvas_pane

0xef71,	// (0x00055a35) eswt_ctrl_combo_pane

0xef69,	// (0x00055a2d) eswt_ctrl_default_pane

0xef69,	// (0x00055a2d) eswt_ctrl_label_pane

0xef79,	// (0x00055a3d) eswt_ctrl_wait_pane

0xef81,	// (0x00055a45) eswt_shell_pane

0xa775,	// (0x00051239) listscroll_eswt_app_pane

0xefa1,	// (0x00055a65) popup_eswt_tasktip_window_ParamLimits

0xefa1,	// (0x00055a65) popup_eswt_tasktip_window

0xcb71,	// (0x00053635) bg_popup_window_pane_cp18

0xefb2,	// (0x00055a76) eswt_control_pane_g1_ParamLimits

0xefb2,	// (0x00055a76) eswt_control_pane_g1

0xefbf,	// (0x00055a83) eswt_control_pane_g2_ParamLimits

0xefbf,	// (0x00055a83) eswt_control_pane_g2

0xefcc,	// (0x00055a90) eswt_control_pane_g3_ParamLimits

0xefcc,	// (0x00055a90) eswt_control_pane_g3

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_ParamLimits

0xefd9,	// (0x00055a9d) eswt_control_pane_g4

0x0003,

0x0033,	// (0x00046af7) eswt_control_pane_g_ParamLimits

0x0033,	// (0x00046af7) eswt_control_pane_g

0xbb16,	// (0x000525da) bg_button_pane_ParamLimits

0xbb16,	// (0x000525da) bg_button_pane

0xb545,	// (0x00052009) common_borders_pane_copy2_ParamLimits

0xb545,	// (0x00052009) common_borders_pane_copy2

0xefe6,	// (0x00055aaa) control_button_pane_g1_ParamLimits

0xefe6,	// (0x00055aaa) control_button_pane_g1

0xeff2,	// (0x00055ab6) control_button_pane_g2_ParamLimits

0xeff2,	// (0x00055ab6) control_button_pane_g2

0xeffe,	// (0x00055ac2) control_button_pane_g3_ParamLimits

0xeffe,	// (0x00055ac2) control_button_pane_g3

0x0002,

0x003c,	// (0x00046b00) control_button_pane_g_ParamLimits

0x003c,	// (0x00046b00) control_button_pane_g

0xf012,	// (0x00055ad6) control_button_pane_t1

0xf020,	// (0x00055ae4) control_button_pane_t2

0x0001,

0x0043,	// (0x00046b07) control_button_pane_t

0xca81,	// (0x00053545) bg_button_pane_g1

0xca91,	// (0x00053555) bg_button_pane_g2

0xca89,	// (0x0005354d) bg_button_pane_g3

0xcaa1,	// (0x00053565) bg_button_pane_g4

0xca99,	// (0x0005355d) bg_button_pane_g5

0xcaa9,	// (0x0005356d) bg_button_pane_g6

0xcab1,	// (0x00053575) bg_button_pane_g7

0xcac1,	// (0x00053585) bg_button_pane_g8

0xcab9,	// (0x0005357d) bg_button_pane_g9

0x0008,

0xf88e,	// (0x00056352) bg_button_pane_g

0xe7f8,	// (0x000552bc) common_borders_pane_ParamLimits

0xe7f8,	// (0x000552bc) common_borders_pane

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy1_ParamLimits

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy1

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy1_ParamLimits

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy1

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy1_ParamLimits

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy1

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy1_ParamLimits

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy1

0xe833,	// (0x000552f7) bg_eswt_ctrl_canvas_pane_g1

0xe7f8,	// (0x000552bc) common_borders_pane_cp2_ParamLimits

0xe7f8,	// (0x000552bc) common_borders_pane_cp2

0xe7f8,	// (0x000552bc) common_borders_pane_cp3_ParamLimits

0xe7f8,	// (0x000552bc) common_borders_pane_cp3

0xf02e,	// (0x00055af2) separator_horizontal_pane

0xf036,	// (0x00055afa) separator_vertical_pane

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy2_ParamLimits

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy2

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy2_ParamLimits

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy2

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy2_ParamLimits

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy2

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy2_ParamLimits

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy2

0xa775,	// (0x00051239) common_borders_pane_cp4

0xf03f,	// (0x00055b03) separator_horizontal_pane_g1

0xf048,	// (0x00055b0c) separator_horizontal_pane_g2

0xf051,	// (0x00055b15) separator_horizontal_pane_g3

0x0002,

0x0048,	// (0x00046b0c) separator_horizontal_pane_g

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy3_ParamLimits

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy3

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy3_ParamLimits

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy3

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy3_ParamLimits

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy3

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy3_ParamLimits

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy3

0xa775,	// (0x00051239) common_borders_pane_cp5

0xf05a,	// (0x00055b1e) separator_vertical_pane_g1

0xf063,	// (0x00055b27) separator_vertical_pane_g2

0xf06c,	// (0x00055b30) separator_vertical_pane_g3

0x0002,

0x004f,	// (0x00046b13) separator_vertical_pane_g

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy4_ParamLimits

0xefb2,	// (0x00055a76) eswt_control_pane_g1_copy4

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy4_ParamLimits

0xefbf,	// (0x00055a83) eswt_control_pane_g2_copy4

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy4_ParamLimits

0xefcc,	// (0x00055a90) eswt_control_pane_g3_copy4

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy4_ParamLimits

0xefd9,	// (0x00055a9d) eswt_control_pane_g4_copy4

0x9f7f,	// (0x00050a43) eswt_ctrl_combo_button_pane

0x9f87,	// (0x00050a4b) eswt_ctrl_input_pane

0x9f8f,	// (0x00050a53) popup_choice_list_window_cp70

0x9f97,	// (0x00050a5b) eswt_ctrl_input_pane_t1

0xa775,	// (0x00051239) input_focus_pane_cp70

0xe7f8,	// (0x000552bc) bg_button_pane_cp70_ParamLimits

0xe7f8,	// (0x000552bc) bg_button_pane_cp70

0x9fa5,	// (0x00050a69) eswt_ctrl_combo_button_pane_g1

0xf075,	// (0x00055b39) wait_bar_pane_cp70

0xcb71,	// (0x00053635) bg_popup_window_pane_cp70_ParamLimits

0xcb71,	// (0x00053635) bg_popup_window_pane_cp70

0xf07d,	// (0x00055b41) popup_eswt_tasktip_window_t1

0xf093,	// (0x00055b57) wait_bar_pane_cp71_ParamLimits

0xf093,	// (0x00055b57) wait_bar_pane_cp71

0xf09f,	// (0x00055b63) grid_eswt_app_pane

0xbe80,	// (0x00052944) scroll_pane_cp70

0x9fad,	// (0x00050a71) cell_eswt_app_pane_ParamLimits

0x9fad,	// (0x00050a71) cell_eswt_app_pane

0x9fd7,	// (0x00050a9b) cell_eswt_app_pane_g1_ParamLimits

0x9fd7,	// (0x00050a9b) cell_eswt_app_pane_g1

0xa006,	// (0x00050aca) cell_eswt_app_pane_g2_ParamLimits

0xa006,	// (0x00050aca) cell_eswt_app_pane_g2

0x0001,

0x0056,	// (0x00046b1a) cell_eswt_app_pane_g_ParamLimits

0x0056,	// (0x00046b1a) cell_eswt_app_pane_g

0xa02f,	// (0x00050af3) cell_eswt_app_pane_t1_ParamLimits

0xa02f,	// (0x00050af3) cell_eswt_app_pane_t1

0xf0a8,	// (0x00055b6c) grid_highlight_pane_cp70_ParamLimits

0xf0a8,	// (0x00055b6c) grid_highlight_pane_cp70

0xc410,	// (0x00052ed4) set_content_pane_g1

0xc71a,	// (0x000531de) status_small_volume_pane

0x1bbb,	// (0x0004867f) status_small_volume_pane_g1

0x1bc3,	// (0x00048687) volume_small2_pane

0x1bcc,	// (0x00048690) volume_small2_pane_g1

0x1bd5,	// (0x00048699) volume_small2_pane_g2

0x1bde,	// (0x000486a2) volume_small2_pane_g3

0x1be7,	// (0x000486ab) volume_small2_pane_g4

0x1bf0,	// (0x000486b4) volume_small2_pane_g5

0x1bf9,	// (0x000486bd) volume_small2_pane_g6

0x1c02,	// (0x000486c6) volume_small2_pane_g7

0x1c0b,	// (0x000486cf) volume_small2_pane_g8

0x1c14,	// (0x000486d8) volume_small2_pane_g9

0x1c1d,	// (0x000486e1) volume_small2_pane_g10

0x0009,

0xfc0b,	// (0x000566cf) volume_small2_pane_g

0xeae7,	// (0x000555ab) fep_vkb_top_text_pane_g1_ParamLimits

0x9f0c,	// (0x000509d0) fep_vkb_top_text_pane_t1_ParamLimits

0xecbf,	// (0x00055783) popup_preview_fixed_window_g3_ParamLimits

0xecbf,	// (0x00055783) popup_preview_fixed_window_g3

0x9219,	// (0x0004fcdd) popup_toolbar_trans_pane

0x98ed,	// (0x000503b1) aid_height_set_list_ParamLimits

0xd1ae,	// (0x00053c72) aid_size_parent_ParamLimits

0xbc6e,	// (0x00052732) list_highlight_pane_cp2_ParamLimits

0xc410,	// (0x00052ed4) set_content_pane_g1_ParamLimits

0x9a76,	// (0x0005053a) list_single_image_pane_ParamLimits

0x9a76,	// (0x0005053a) list_single_image_pane

0xf0b4,	// (0x00055b78) aid_size_cell_image_ParamLimits

0xf0b4,	// (0x00055b78) aid_size_cell_image

0xa061,	// (0x00050b25) grid_single_image_pane_ParamLimits

0xa061,	// (0x00050b25) grid_single_image_pane

0xcb95,	// (0x00053659) list_single_image_pane_g1_ParamLimits

0xcb95,	// (0x00053659) list_single_image_pane_g1

0xecec,	// (0x000557b0) list_single_image_pane_g2_ParamLimits

0xecec,	// (0x000557b0) list_single_image_pane_g2

0x0001,

0xfc20,	// (0x000566e4) list_single_image_pane_g_ParamLimits

0xfc20,	// (0x000566e4) list_single_image_pane_g

0xd198,	// (0x00053c5c) list_single_image_pane_t1_ParamLimits

0xd198,	// (0x00053c5c) list_single_image_pane_t1

0xa06f,	// (0x00050b33) cell_image_list_pane_ParamLimits

0xa06f,	// (0x00050b33) cell_image_list_pane

0xf0c1,	// (0x00055b85) cell_image_list_pane_g1

0xf0ca,	// (0x00055b8e) cell_image_list_pane_g2

0x0001,

0xfc25,	// (0x000566e9) cell_image_list_pane_g

0xf0d3,	// (0x00055b97) aid_size_cell_tb_trans_pane

0xbb16,	// (0x000525da) bg_tb_trans_pane

0xf0e5,	// (0x00055ba9) grid_tb_trans_pane

0xca81,	// (0x00053545) bg_tb_trans_pane_g1

0xca91,	// (0x00053555) bg_tb_trans_pane_g2

0xca89,	// (0x0005354d) bg_tb_trans_pane_g3

0xcaa1,	// (0x00053565) bg_tb_trans_pane_g4

0xca99,	// (0x0005355d) bg_tb_trans_pane_g5

0xcac1,	// (0x00053585) bg_tb_trans_pane_g6

0xcab9,	// (0x0005357d) bg_tb_trans_pane_g7

0xcaa9,	// (0x0005356d) bg_tb_trans_pane_g8

0xcab1,	// (0x00053575) bg_tb_trans_pane_g9

0x0008,

0xfc2a,	// (0x000566ee) bg_tb_trans_pane_g

0xf0f9,	// (0x00055bbd) cell_toolbar_trans_pane_ParamLimits

0xf0f9,	// (0x00055bbd) cell_toolbar_trans_pane

0xe833,	// (0x000552f7) cell_toolbar_trans_pane_g1

0x9ce8,	// (0x000507ac) list_form2_midp_pane_t1

0x9cf6,	// (0x000507ba) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x000565bf) list_form2_midp_pane_t

0xe585,	// (0x00055049) scroll_pane_cp51_ParamLimits

0xe6fc,	// (0x000551c0) form2_midp_wait_pane_g1

0xe705,	// (0x000551c9) form2_midp_wait_pane_g2

0xe70e,	// (0x000551d2) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x000565d4) form2_midp_wait_pane_g

0xa7e5,	// (0x000512a9) list_highlight_pane_cp21_ParamLimits

0xe736,	// (0x000551fa) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe745,	// (0x00055209) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdc7d,	// (0x00054741) list_single_2graphic_im_pane_ParamLimits

0xdc7d,	// (0x00054741) list_single_2graphic_im_pane

0xa085,	// (0x00050b49) list_single_2graphic_im_pane_g1_ParamLimits

0xa085,	// (0x00050b49) list_single_2graphic_im_pane_g1

0xa096,	// (0x00050b5a) list_single_2graphic_im_pane_g2_ParamLimits

0xa096,	// (0x00050b5a) list_single_2graphic_im_pane_g2

0xa0a2,	// (0x00050b66) list_single_2graphic_im_pane_g3_ParamLimits

0xa0a2,	// (0x00050b66) list_single_2graphic_im_pane_g3

0x0003,

0x0088,	// (0x00046b4c) list_single_2graphic_im_pane_g_ParamLimits

0x0088,	// (0x00046b4c) list_single_2graphic_im_pane_g

0xa0b6,	// (0x00050b7a) list_single_2graphic_im_pane_t1_ParamLimits

0xa0b6,	// (0x00050b7a) list_single_2graphic_im_pane_t1

0xeccb,	// (0x0005578f) list_single_graphic_2heading_pane_fp_ParamLimits

0xeccb,	// (0x0005578f) list_single_graphic_2heading_pane_fp

0x3544,	// (0x0004a008) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3544,	// (0x0004a008) list_single_graphic_2heading_pane_fp_g1

0xece0,	// (0x000557a4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xece0,	// (0x000557a4) list_single_graphic_2heading_pane_fp_g2

0xcb95,	// (0x00053659) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xcb95,	// (0x00053659) list_single_graphic_2heading_pane_fp_g3

0xecec,	// (0x000557b0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xecec,	// (0x000557b0) list_single_graphic_2heading_pane_fp_g4

0xed00,	// (0x000557c4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xed00,	// (0x000557c4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x0005665c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x0005665c) list_single_graphic_2heading_pane_fp_g

0x368d,	// (0x0004a151) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x368d,	// (0x0004a151) list_single_graphic_2heading_pane_fp_t1

0x357c,	// (0x0004a040) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x357c,	// (0x0004a040) list_single_graphic_2heading_pane_fp_t2

0x36a3,	// (0x0004a167) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x36a3,	// (0x0004a167) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x00056701) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x00056701) list_single_graphic_2heading_pane_fp_t

0xe8d3,	// (0x00055397) fep_hwr_write_pane_g5_ParamLimits

0xe8d3,	// (0x00055397) fep_hwr_write_pane_g5

0xe8df,	// (0x000553a3) fep_hwr_write_pane_g6_ParamLimits

0xe8df,	// (0x000553a3) fep_hwr_write_pane_g6

0xef81,	// (0x00055a45) eswt_shell_pane_ParamLimits

0xcb71,	// (0x00053635) bg_popup_window_pane_cp18_ParamLimits

0xdbb7,	// (0x0005467b) heading_pane_cp70

0xf07d,	// (0x00055b41) popup_eswt_tasktip_window_t1_ParamLimits

0x92da,	// (0x0004fd9e) aid_touch_tab_arrow_left

0x92f0,	// (0x0004fdb4) aid_touch_tab_arrow_right

0x8324,	// (0x0004ede8) title_pane_g3_ParamLimits

0x8324,	// (0x0004ede8) title_pane_g3

0xbad5,	// (0x00052599) set_value_pane_g1

0x9219,	// (0x0004fcdd) popup_toolbar_trans_pane_ParamLimits

0xf0d3,	// (0x00055b97) aid_size_cell_tb_trans_pane_ParamLimits

0xbb16,	// (0x000525da) bg_tb_trans_pane_ParamLimits

0xf0e5,	// (0x00055ba9) grid_tb_trans_pane_ParamLimits

0xae87,	// (0x0005194b) cont_note_pane_ParamLimits

0xae87,	// (0x0005194b) cont_note_pane

0xb545,	// (0x00052009) cont_snote2_single_text_pane_ParamLimits

0xb545,	// (0x00052009) cont_snote2_single_text_pane

0xb545,	// (0x00052009) cont_snote2_single_graphic_pane_ParamLimits

0xb545,	// (0x00052009) cont_snote2_single_graphic_pane

0xd014,	// (0x00053ad8) cont_note_wait_pane_ParamLimits

0xd014,	// (0x00053ad8) cont_note_wait_pane

0xd014,	// (0x00053ad8) cont_note_image_pane_ParamLimits

0xd014,	// (0x00053ad8) cont_note_image_pane

0xf12b,	// (0x00055bef) popup_note2_window_g1_ParamLimits

0xf12b,	// (0x00055bef) popup_note2_window_g1

0xf15c,	// (0x00055c20) popup_note2_window_t1_ParamLimits

0xf15c,	// (0x00055c20) popup_note2_window_t1

0xf1a1,	// (0x00055c65) popup_note2_window_t2_ParamLimits

0xf1a1,	// (0x00055c65) popup_note2_window_t2

0xf1e6,	// (0x00055caa) popup_note2_window_t3_ParamLimits

0xf1e6,	// (0x00055caa) popup_note2_window_t3

0xf22b,	// (0x00055cef) popup_note2_window_t4_ParamLimits

0xf22b,	// (0x00055cef) popup_note2_window_t4

0xb380,	// (0x00051e44) popup_note2_window_t5_ParamLimits

0xb380,	// (0x00051e44) popup_note2_window_t5

0x0004,

0xfc44,	// (0x00056708) popup_note2_window_t_ParamLimits

0xfc44,	// (0x00056708) popup_note2_window_t

0xf25a,	// (0x00055d1e) popup_note2_image_window_g1_ParamLimits

0xf25a,	// (0x00055d1e) popup_note2_image_window_g1

0xf266,	// (0x00055d2a) popup_note2_image_window_g2_ParamLimits

0xf266,	// (0x00055d2a) popup_note2_image_window_g2

0x0001,

0x00a8,	// (0x00046b6c) popup_note2_image_window_g_ParamLimits

0x00a8,	// (0x00046b6c) popup_note2_image_window_g

0xf278,	// (0x00055d3c) popup_note2_image_window_t1_ParamLimits

0xf278,	// (0x00055d3c) popup_note2_image_window_t1

0xf290,	// (0x00055d54) popup_note2_image_window_t2_ParamLimits

0xf290,	// (0x00055d54) popup_note2_image_window_t2

0xf2a8,	// (0x00055d6c) popup_note2_image_window_t3_ParamLimits

0xf2a8,	// (0x00055d6c) popup_note2_image_window_t3

0x0002,

0x00ad,	// (0x00046b71) popup_note2_image_window_t_ParamLimits

0x00ad,	// (0x00046b71) popup_note2_image_window_t

0xd022,	// (0x00053ae6) popup_note2_wait_window_g1_ParamLimits

0xd022,	// (0x00053ae6) popup_note2_wait_window_g1

0xf2c4,	// (0x00055d88) popup_note2_wait_window_g2_ParamLimits

0xf2c4,	// (0x00055d88) popup_note2_wait_window_g2

0xd03a,	// (0x00053afe) popup_note2_wait_window_g3_ParamLimits

0xd03a,	// (0x00053afe) popup_note2_wait_window_g3

0x0002,

0xfc4f,	// (0x00056713) popup_note2_wait_window_g_ParamLimits

0xfc4f,	// (0x00056713) popup_note2_wait_window_g

0xf2d0,	// (0x00055d94) popup_note2_wait_window_t1_ParamLimits

0xf2d0,	// (0x00055d94) popup_note2_wait_window_t1

0xf2ee,	// (0x00055db2) popup_note2_wait_window_t2_ParamLimits

0xf2ee,	// (0x00055db2) popup_note2_wait_window_t2

0xf30c,	// (0x00055dd0) popup_note2_wait_window_t3_ParamLimits

0xf30c,	// (0x00055dd0) popup_note2_wait_window_t3

0xf31e,	// (0x00055de2) popup_note2_wait_window_t4_ParamLimits

0xf31e,	// (0x00055de2) popup_note2_wait_window_t4

0x0003,

0x00bb,	// (0x00046b7f) popup_note2_wait_window_t_ParamLimits

0x00bb,	// (0x00046b7f) popup_note2_wait_window_t

0xf330,	// (0x00055df4) wait_bar2_pane_ParamLimits

0xf330,	// (0x00055df4) wait_bar2_pane

0xf348,	// (0x00055e0c) popup_snote2_single_text_window_g1_ParamLimits

0xf348,	// (0x00055e0c) popup_snote2_single_text_window_g1

0xf370,	// (0x00055e34) popup_snote2_single_text_window_t1_ParamLimits

0xf370,	// (0x00055e34) popup_snote2_single_text_window_t1

0xf3bc,	// (0x00055e80) popup_snote2_single_text_window_t2_ParamLimits

0xf3bc,	// (0x00055e80) popup_snote2_single_text_window_t2

0xf408,	// (0x00055ecc) popup_snote2_single_text_window_t3_ParamLimits

0xf408,	// (0x00055ecc) popup_snote2_single_text_window_t3

0xf449,	// (0x00055f0d) popup_snote2_single_text_window_t4_ParamLimits

0xf449,	// (0x00055f0d) popup_snote2_single_text_window_t4

0xf47f,	// (0x00055f43) popup_snote2_single_text_window_t5_ParamLimits

0xf47f,	// (0x00055f43) popup_snote2_single_text_window_t5

0x0004,

0x00c4,	// (0x00046b88) popup_snote2_single_text_window_t_ParamLimits

0x00c4,	// (0x00046b88) popup_snote2_single_text_window_t

0xf4aa,	// (0x00055f6e) popup_snote2_single_graphic_window_g1_ParamLimits

0xf4aa,	// (0x00055f6e) popup_snote2_single_graphic_window_g1

0xf4d2,	// (0x00055f96) popup_snote2_single_graphic_window_g2_ParamLimits

0xf4d2,	// (0x00055f96) popup_snote2_single_graphic_window_g2

0x0001,

0x00cf,	// (0x00046b93) popup_snote2_single_graphic_window_g_ParamLimits

0x00cf,	// (0x00046b93) popup_snote2_single_graphic_window_g

0xf4fa,	// (0x00055fbe) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4fa,	// (0x00055fbe) popup_snote2_single_graphic_window_t1

0xf546,	// (0x0005600a) popup_snote2_single_graphic_window_t2_ParamLimits

0xf546,	// (0x0005600a) popup_snote2_single_graphic_window_t2

0xf408,	// (0x00055ecc) popup_snote2_single_graphic_window_t3_ParamLimits

0xf408,	// (0x00055ecc) popup_snote2_single_graphic_window_t3

0xf449,	// (0x00055f0d) popup_snote2_single_graphic_window_t4_ParamLimits

0xf449,	// (0x00055f0d) popup_snote2_single_graphic_window_t4

0xf47f,	// (0x00055f43) popup_snote2_single_graphic_window_t5_ParamLimits

0xf47f,	// (0x00055f43) popup_snote2_single_graphic_window_t5

0x0004,

0x00d4,	// (0x00046b98) popup_snote2_single_graphic_window_t_ParamLimits

0x00d4,	// (0x00046b98) popup_snote2_single_graphic_window_t

0xe53b,	// (0x00054fff) clock_nsta_pane_cp2_t1

0xe53b,	// (0x00054fff) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00056595) clock_nsta_pane_cp2_t

0x0dae,	// (0x00047872) form_field_data_wide_pane_g1_ParamLimits

0xbb30,	// (0x000525f4) form_field_data_wide_pane_g2_ParamLimits

0xbb30,	// (0x000525f4) form_field_data_wide_pane_g2

0xbb3c,	// (0x00052600) form_field_data_wide_pane_g3_ParamLimits

0xbb3c,	// (0x00052600) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0005617e) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0005617e) form_field_data_wide_pane_g

0x9c02,	// (0x000506c6) grid_touch_3_pane_ParamLimits

0x9c02,	// (0x000506c6) grid_touch_3_pane

0xa0e7,	// (0x00050bab) cell_touch_3_pane_ParamLimits

0xa0e7,	// (0x00050bab) cell_touch_3_pane

0xe833,	// (0x000552f7) cell_touch_3_pane_g1

0xe833,	// (0x000552f7) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x0005661a) cell_touch_3_pane_g

0xb3b2,	// (0x00051e76) cont_query_data_pane

0xb3ba,	// (0x00051e7e) cont_query_data_pane_cp1

0x48e4,	// (0x0004b3a8) button_value_adjust_pane_cp7

0x48ec,	// (0x0004b3b0) query_popup_pane_cp3

0xc0aa,	// (0x00052b6e) bg_popup_sub_pane_cp22_ParamLimits

0x0ffc,	// (0x00047ac0) navi_navi_volume_pane_cp2

0x1017,	// (0x00047adb) popup_side_volume_key_window_g2

0x1026,	// (0x00047aea) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00056210) popup_side_volume_key_window_g

0x1043,	// (0x00047b07) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00056217) popup_side_volume_key_window_t

0xc2da,	// (0x00052d9e) popup_side_volume_key_window_ParamLimits

0x7659,	// (0x0004e11d) list_double_graphic_pane_g4_ParamLimits

0x7659,	// (0x0004e11d) list_double_graphic_pane_g4

0x9a63,	// (0x00050527) list_single_2heading_msg_pane_ParamLimits

0x9a63,	// (0x00050527) list_single_2heading_msg_pane

0x8766,	// (0x0004f22a) list_single_2heading_msg_pane_g1_ParamLimits

0x8766,	// (0x0004f22a) list_single_2heading_msg_pane_g1

0x8772,	// (0x0004f236) list_single_2heading_msg_pane_g2_ParamLimits

0x8772,	// (0x0004f236) list_single_2heading_msg_pane_g2

0x8785,	// (0x0004f249) list_single_2heading_msg_pane_g3_ParamLimits

0x8785,	// (0x0004f249) list_single_2heading_msg_pane_g3

0x8791,	// (0x0004f255) list_single_2heading_msg_pane_g4_ParamLimits

0x8791,	// (0x0004f255) list_single_2heading_msg_pane_g4

0x0003,

0xfc56,	// (0x0005671a) list_single_2heading_msg_pane_g_ParamLimits

0xfc56,	// (0x0005671a) list_single_2heading_msg_pane_g

0x87a9,	// (0x0004f26d) list_single_2heading_msg_pane_t1_ParamLimits

0x87a9,	// (0x0004f26d) list_single_2heading_msg_pane_t1

0x87d1,	// (0x0004f295) list_single_2heading_msg_pane_t2_ParamLimits

0x87d1,	// (0x0004f295) list_single_2heading_msg_pane_t2

0x883c,	// (0x0004f300) list_single_2heading_msg_pane_t3_ParamLimits

0x883c,	// (0x0004f300) list_single_2heading_msg_pane_t3

0x3758,	// (0x0004a21c) list_single_2heading_msg_pane_t4_ParamLimits

0x3758,	// (0x0004a21c) list_single_2heading_msg_pane_t4

0x0003,

0xfc5f,	// (0x00056723) list_single_2heading_msg_pane_t_ParamLimits

0xfc5f,	// (0x00056723) list_single_2heading_msg_pane_t

0xa793,	// (0x00051257) title_pane_g4_ParamLimits

0xa793,	// (0x00051257) title_pane_g4

0x0e0a,	// (0x000478ce) title_pane_stacon_g3_ParamLimits

0x0e0a,	// (0x000478ce) title_pane_stacon_g3

0xf11f,	// (0x00055be3) list_single_2graphic_im_pane_g4_ParamLimits

0xf11f,	// (0x00055be3) list_single_2graphic_im_pane_g4

0xd9db,	// (0x0005449f) popup_side_volume_key_window_cp

0xdeb6,	// (0x0005497a) main_idle_act2_pane_t1

0x13bf,	// (0x00047e83) toolbar_button_pane_g10

0x8691,	// (0x0004f155) popup_toolbar_window_cp1

0xe52c,	// (0x00054ff0) clock_nsta_pane_cp_t1

0xe52c,	// (0x00054ff0) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00056590) clock_nsta_pane_cp_t

0x0ffc,	// (0x00047ac0) navi_navi_volume_pane_cp2_ParamLimits

0x100b,	// (0x00047acf) popup_side_volume_key_window_g1_ParamLimits

0x1017,	// (0x00047adb) popup_side_volume_key_window_g2_ParamLimits

0x1026,	// (0x00047aea) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00056210) popup_side_volume_key_window_g_ParamLimits

0x1827,	// (0x000482eb) fep_hwr_aid_pane

0x18ce,	// (0x00048392) bg_fep_hwr_top_pane_g4_ParamLimits

0xe8a3,	// (0x00055367) fep_hwr_top_pane_g1_ParamLimits

0xe8b5,	// (0x00055379) fep_hwr_top_pane_g2_ParamLimits

0x18ee,	// (0x000483b2) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x000565e5) fep_hwr_top_pane_g_ParamLimits

0x1903,	// (0x000483c7) fep_hwr_top_text_pane_ParamLimits

0xd792,	// (0x00054256) aid_touch_tab_arrow_arrow_2

0xd79b,	// (0x0005425f) aid_touch_tab_arrow_left_2

0x183b,	// (0x000482ff) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1872,	// (0x00048336) fep_hwr_prediction_pane

0xe9a2,	// (0x00055466) fep_vkb_prediction_pane

0x9eec,	// (0x000509b0) fep_vkb_side_pane_g3_ParamLimits

0x9eec,	// (0x000509b0) fep_vkb_side_pane_g3

0x1a7e,	// (0x00048542) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1aea,	// (0x000485ae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1af7,	// (0x000485bb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00056694) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1c26,	// (0x000486ea) fep_hwr_prediction_pane_g1

0x1c30,	// (0x000486f4) fep_hwr_prediction_pane_g2

0x1c38,	// (0x000486fc) fep_hwr_prediction_pane_g3

0x1c40,	// (0x00048704) fep_hwr_prediction_pane_g4

0x0003,

0xfc68,	// (0x0005672c) fep_hwr_prediction_pane_g

0x4911,	// (0x0004b3d5) fep_vkb_prediction_pane_g1

0x491b,	// (0x0004b3df) fep_vkb_prediction_pane_g2

0x4923,	// (0x0004b3e7) fep_vkb_prediction_pane_g3

0x492b,	// (0x0004b3ef) fep_vkb_prediction_pane_g4

0x0003,

0xfc71,	// (0x00056735) fep_vkb_prediction_pane_g

0x16a7,	// (0x0004816b) slider_set_pane_g3

0x16bb,	// (0x0004817f) slider_set_pane_g4

0x16d3,	// (0x00048197) slider_set_pane_g5

0x16a7,	// (0x0004816b) slider_set_pane_g6

0x16e9,	// (0x000481ad) slider_set_pane_g7

0xdc42,	// (0x00054706) slider_form_pane_g3

0xdc4b,	// (0x0005470f) slider_form_pane_g4

0xdc53,	// (0x00054717) slider_form_pane_g5

0xdc42,	// (0x00054706) slider_form_pane_g6

0x9a38,	// (0x000504fc) slider_form_pane_g7

0xe108,	// (0x00054bcc) slider_set_pane_vc_g3

0xe111,	// (0x00054bd5) slider_set_pane_vc_g4

0xe11a,	// (0x00054bde) slider_set_pane_vc_g5

0xe108,	// (0x00054bcc) slider_set_pane_vc_g6

0xe123,	// (0x00054be7) slider_set_pane_vc_g7

0xe108,	// (0x00054bcc) slider_form_pane_vc_g1

0xe111,	// (0x00054bd5) slider_form_pane_vc_g2

0xe11a,	// (0x00054bde) slider_form_pane_vc_g3

0xe108,	// (0x00054bcc) slider_form_pane_vc_g4

0xe2d6,	// (0x00054d9a) slider_form_pane_vc_g5

0x0004,

0xfab2,	// (0x00056576) slider_form_pane_vc_g

0xa775,	// (0x00051239) main_idle_act3_pane

0x4933,	// (0x0004b3f7) ai3_links_pane

0xa130,	// (0x00050bf4) popup_ai3_data_window_ParamLimits

0xa130,	// (0x00050bf4) popup_ai3_data_window

0xa775,	// (0x00051239) grid_ai3_links_pane

0xa14a,	// (0x00050c0e) cell_ai3_links_pane_ParamLimits

0xa14a,	// (0x00050c0e) cell_ai3_links_pane

0x496e,	// (0x0004b432) bg_popup_sub_pane_cp11

0x497b,	// (0x0004b43f) cell_ai3_links_pane_g1

0xa775,	// (0x00051239) bg_popup_sub_pane_cp12

0x49a0,	// (0x0004b464) heading_ai3_data_pane

0x49a8,	// (0x0004b46c) list_ai3_gene_pane

0x49b4,	// (0x0004b478) popup_ai3_data_window_g1

0x49bc,	// (0x0004b480) heading_ai3_data_pane_g1

0x49c4,	// (0x0004b488) heading_ai3_data_pane_t1

0x49d2,	// (0x0004b496) list_double_ai3_gene_pane_ParamLimits

0x49d2,	// (0x0004b496) list_double_ai3_gene_pane

0x49df,	// (0x0004b4a3) list_single_ai3_gene_pane_ParamLimits

0x49df,	// (0x0004b4a3) list_single_ai3_gene_pane

0xe7f8,	// (0x000552bc) list_highlight_pane_cp7_ParamLimits

0xe7f8,	// (0x000552bc) list_highlight_pane_cp7

0x49ec,	// (0x0004b4b0) list_single_a13_gene_pane_t1_ParamLimits

0x49ec,	// (0x0004b4b0) list_single_a13_gene_pane_t1

0x4a03,	// (0x0004b4c7) list_single_ai3_gene_pane_g1

0x4a0c,	// (0x0004b4d0) list_single_ai3_gene_pane_g2

0x0001,

0xfc7a,	// (0x0005673e) list_single_ai3_gene_pane_g

0x4a14,	// (0x0004b4d8) list_double_ai3_gene_pane_g1_ParamLimits

0x4a14,	// (0x0004b4d8) list_double_ai3_gene_pane_g1

0x4a20,	// (0x0004b4e4) list_double_ai3_gene_pane_t1_ParamLimits

0x4a20,	// (0x0004b4e4) list_double_ai3_gene_pane_t1

0x4a3c,	// (0x0004b500) list_double_ai3_gene_pane_t2_ParamLimits

0x4a3c,	// (0x0004b500) list_double_ai3_gene_pane_t2

0x4a52,	// (0x0004b516) list_double_ai3_gene_pane_t3_ParamLimits

0x4a52,	// (0x0004b516) list_double_ai3_gene_pane_t3

0x0002,

0xfc7f,	// (0x00056743) list_double_ai3_gene_pane_t_ParamLimits

0xfc7f,	// (0x00056743) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x36b9,	// (0x0004a17d) aid_size_min_col_2

0xa11a,	// (0x00050bde) aid_size_min_msg_ParamLimits

0xa11a,	// (0x00050bde) aid_size_min_msg

0x9f00,	// (0x000509c4) fep_vkb_top_text_pane_g2_ParamLimits

0x9f00,	// (0x000509c4) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00056615) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00056615) fep_vkb_top_text_pane_g

0xa775,	// (0x00051239) main_hc_apps_shell_pane

0x4a6f,	// (0x0004b533) grid_hc_apps_pane_ParamLimits

0x4a6f,	// (0x0004b533) grid_hc_apps_pane

0x4a7e,	// (0x0004b542) list_hc_apps_pane

0x4a86,	// (0x0004b54a) scroll_pane_cp37_ParamLimits

0x4a86,	// (0x0004b54a) scroll_pane_cp37

0xa164,	// (0x00050c28) cell_hc_apps_pane_ParamLimits

0xa164,	// (0x00050c28) cell_hc_apps_pane

0xa222,	// (0x00050ce6) cell_hc_apps_pane_g1_ParamLimits

0xa222,	// (0x00050ce6) cell_hc_apps_pane_g1

0x4b71,	// (0x0004b635) cell_hc_apps_pane_g2_ParamLimits

0x4b71,	// (0x0004b635) cell_hc_apps_pane_g2

0x4b8d,	// (0x0004b651) cell_hc_apps_pane_g3_ParamLimits

0x4b8d,	// (0x0004b651) cell_hc_apps_pane_g3

0x0002,

0xfc86,	// (0x0005674a) cell_hc_apps_pane_g_ParamLimits

0xfc86,	// (0x0005674a) cell_hc_apps_pane_g

0xa24f,	// (0x00050d13) cell_hc_apps_pane_t1_ParamLimits

0xa24f,	// (0x00050d13) cell_hc_apps_pane_t1

0xae87,	// (0x0005194b) grid_highlight_pane_cp10_ParamLimits

0xae87,	// (0x0005194b) grid_highlight_pane_cp10

0xa28d,	// (0x00050d51) list_single_hc_apps_pane_ParamLimits

0xa28d,	// (0x00050d51) list_single_hc_apps_pane

0xa2ba,	// (0x00050d7e) list_single_hc_apps_pane_g1

0x88aa,	// (0x0004f36e) list_single_hc_apps_pane_g2

0x0001,

0xfc8d,	// (0x00056751) list_single_hc_apps_pane_g

0x88c3,	// (0x0004f387) list_single_hc_apps_pane_g2_copy1

0x377d,	// (0x0004a241) list_single_hc_apps_pane_t1

0xa7e5,	// (0x000512a9) bg_set_opt_pane_cp_ParamLimits

0x0785,	// (0x00047249) setting_slider_pane_t1_ParamLimits

0x079e,	// (0x00047262) setting_slider_pane_t2_ParamLimits

0x07b8,	// (0x0004727c) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00056066) setting_slider_pane_t_ParamLimits

0x07d0,	// (0x00047294) slider_set_pane_ParamLimits

0x129b,	// (0x00047d5f) control_pane_g5_ParamLimits

0x129b,	// (0x00047d5f) control_pane_g5

0xdbfe,	// (0x000546c2) slider_set_pane_g1_ParamLimits

0x169b,	// (0x0004815f) slider_set_pane_g2_ParamLimits

0x16a7,	// (0x0004816b) slider_set_pane_g3_ParamLimits

0x16bb,	// (0x0004817f) slider_set_pane_g4_ParamLimits

0x16d3,	// (0x00048197) slider_set_pane_g5_ParamLimits

0x16a7,	// (0x0004816b) slider_set_pane_g6_ParamLimits

0x16e9,	// (0x000481ad) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x00056450) slider_set_pane_g_ParamLimits

0xc3bb,	// (0x00052e7f) navi_icon_text_pane_ParamLimits

0x92a6,	// (0x0004fd6a) aid_fill_nsta_2_ParamLimits

0x92da,	// (0x0004fd9e) aid_touch_tab_arrow_left_ParamLimits

0x92f0,	// (0x0004fdb4) aid_touch_tab_arrow_right_ParamLimits

0x938b,	// (0x0004fe4f) clock_nsta_pane_ParamLimits

0x9814,	// (0x000502d8) navi_icon_pane_g1_ParamLimits

0x9820,	// (0x000502e4) navi_text_pane_t1_ParamLimits

0x9cca,	// (0x0005078e) navi_icon_text_pane_g1_ParamLimits

0x9cd6,	// (0x0005079a) navi_icon_text_pane_t1_ParamLimits

0xa2ba,	// (0x00050d7e) list_single_hc_apps_pane_g1_ParamLimits

0x88aa,	// (0x0004f36e) list_single_hc_apps_pane_g2_ParamLimits

0xfc8d,	// (0x00056751) list_single_hc_apps_pane_g_ParamLimits

0x88c3,	// (0x0004f387) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x377d,	// (0x0004a241) list_single_hc_apps_pane_t1_ParamLimits

0x74d4,	// (0x0004df98) popup_toolbar2_fixed_window_ParamLimits

0x74d4,	// (0x0004df98) popup_toolbar2_fixed_window

0x920f,	// (0x0004fcd3) popup_toolbar2_float_window

0xa775,	// (0x00051239) bg_popup_sub_pane_cp27

0x4c64,	// (0x0004b728) grid_toolbar2_float_pane

0xa775,	// (0x00051239) bg_popup_sub_pane_cp26

0x4c64,	// (0x0004b728) grid_toolbar2_fixed_pane

0xa2d3,	// (0x00050d97) cell_toolbar2_fixed_pane_ParamLimits

0xa2d3,	// (0x00050d97) cell_toolbar2_fixed_pane

0xa2ee,	// (0x00050db2) cell_toolbar2_fixed_pane_g1

0x4c85,	// (0x0004b749) toolbar2_fixed_button_pane

0xca81,	// (0x00053545) toolbar2_fixed_button_pane_g1

0xca91,	// (0x00053555) toolbar2_fixed_button_pane_g2

0xca89,	// (0x0005354d) toolbar2_fixed_button_pane_g3

0xcaa1,	// (0x00053565) toolbar2_fixed_button_pane_g4

0xca99,	// (0x0005355d) toolbar2_fixed_button_pane_g5

0xcaa9,	// (0x0005356d) toolbar2_fixed_button_pane_g6

0xcab1,	// (0x00053575) toolbar2_fixed_button_pane_g7

0xcac1,	// (0x00053585) toolbar2_fixed_button_pane_g8

0xcab9,	// (0x0005357d) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x00056352) toolbar2_fixed_button_pane_g

0x4c8d,	// (0x0004b751) cell_toolbar2_float_pane_ParamLimits

0x4c8d,	// (0x0004b751) cell_toolbar2_float_pane

0x4c9e,	// (0x0004b762) cell_toolbar2_float_pane_g1

0x4c85,	// (0x0004b749) toolbar2_fixed_button_pane_cp

0x9dda,	// (0x0005089e) fep_vkb_accented_list_pane_ParamLimits

0x9dda,	// (0x0005089e) fep_vkb_accented_list_pane

0x1a5e,	// (0x00048522) bg_popup_fep_shadow_pane_g9

0xc53b,	// (0x00052fff) bg_popup_fep_shadow_pane_cp3

0xbc1c,	// (0x000526e0) list_accented_list_pane

0x4ca7,	// (0x0004b76b) list_single_accented_list_pane_ParamLimits

0x4ca7,	// (0x0004b76b) list_single_accented_list_pane

0xc53b,	// (0x00052fff) list_highlight_pane_cp10

0x4cb8,	// (0x0004b77c) list_single_accented_list_pane_t1

0x9139,	// (0x0004fbfd) popup_slider_window_ParamLimits

0x9139,	// (0x0004fbfd) popup_slider_window

0x48f4,	// (0x0004b3b8) aid_indentation_list_msg

0xa3e7,	// (0x00050eab) bg_popup_window_pane_cp19

0x4ddc,	// (0x0004b8a0) popup_slider_window_g1

0x4df8,	// (0x0004b8bc) popup_slider_window_g2

0x4e14,	// (0x0004b8d8) popup_slider_window_g3

0x0005,

0xfc92,	// (0x00056756) popup_slider_window_g

0x4e70,	// (0x0004b934) popup_slider_window_t1

0x4ee4,	// (0x0004b9a8) small_volume_slider_vertical_pane

0xe833,	// (0x000552f7) small_volume_slider_vertical_pane_g1

0xe833,	// (0x000552f7) small_volume_slider_vertical_pane_g2

0x4f00,	// (0x0004b9c4) small_volume_slider_vertical_pane_g3

0x0002,

0xfca4,	// (0x00056768) small_volume_slider_vertical_pane_g

0x7442,	// (0x0004df06) area_side_right_pane_ParamLimits

0x7442,	// (0x0004df06) area_side_right_pane

0x7ea0,	// (0x0004e964) aid_size_side_button_ParamLimits

0x7ea0,	// (0x0004e964) aid_size_side_button

0x7eb9,	// (0x0004e97d) grid_sctrl_middle_pane_ParamLimits

0x7eb9,	// (0x0004e97d) grid_sctrl_middle_pane

0x1c7c,	// (0x00048740) sctrl_sk_bottom_pane

0x1c8d,	// (0x00048751) sctrl_sk_top_pane

0x1c9f,	// (0x00048763) aid_touch_sctrl_top

0x1cac,	// (0x00048770) bg_sctrl_sk_pane_ParamLimits

0x1cac,	// (0x00048770) bg_sctrl_sk_pane

0x1cba,	// (0x0004877e) sctrl_sk_top_pane_g1

0x1cc7,	// (0x0004878b) sctrl_sk_top_pane_t1

0x1c9f,	// (0x00048763) aid_touch_sctrl_bottom

0x1cac,	// (0x00048770) bg_sctrl_sk_pane_cp_ParamLimits

0x1cac,	// (0x00048770) bg_sctrl_sk_pane_cp

0x1ce2,	// (0x000487a6) sctrl_sk_bottom_pane_g1

0x1cc7,	// (0x0004878b) sctrl_sk_bottom_pane_t1

0x7ed3,	// (0x0004e997) cell_sctrl_middle_pane_ParamLimits

0x7ed3,	// (0x0004e997) cell_sctrl_middle_pane

0x7ee4,	// (0x0004e9a8) aid_touch_sctrl_middle_ParamLimits

0x7ee4,	// (0x0004e9a8) aid_touch_sctrl_middle

0x7ef1,	// (0x0004e9b5) bg_sctrl_middle_pane_ParamLimits

0x7ef1,	// (0x0004e9b5) bg_sctrl_middle_pane

0x2352,	// (0x00048e16) cell_sctrl_middle_pane_g1_ParamLimits

0x2352,	// (0x00048e16) cell_sctrl_middle_pane_g1

0x7eff,	// (0x0004e9c3) cell_sctrl_middle_pane_g2_ParamLimits

0x7eff,	// (0x0004e9c3) cell_sctrl_middle_pane_g2

0x0001,

0xfcb0,	// (0x00056774) cell_sctrl_middle_pane_g_ParamLimits

0xfcb0,	// (0x00056774) cell_sctrl_middle_pane_g

0xca81,	// (0x00053545) bg_sctrl_middle_pane_g1

0xca89,	// (0x0005354d) bg_sctrl_middle_pane_g2

0xca91,	// (0x00053555) bg_sctrl_middle_pane_g3

0xca99,	// (0x0005355d) bg_sctrl_middle_pane_g4

0xcaa1,	// (0x00053565) bg_sctrl_middle_pane_g5

0xcaa9,	// (0x0005356d) bg_sctrl_middle_pane_g6

0xcab1,	// (0x00053575) bg_sctrl_middle_pane_g7

0xcab9,	// (0x0005357d) bg_sctrl_middle_pane_g8

0x0007,

0x013e,	// (0x00046c02) bg_sctrl_middle_pane_g

0xcac1,	// (0x00053585) bg_sctrl_middle_pane_g8_copy1

0xca81,	// (0x00053545) bg_sctrl_sk_pane_g1

0xca91,	// (0x00053555) bg_sctrl_sk_pane_g2

0xca89,	// (0x0005354d) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x00056352) bg_sctrl_sk_pane_g

0xba4f,	// (0x00052513) aid_size_touch_scroll_bar

0xcaa1,	// (0x00053565) bg_sctrl_sk_pane_g4

0xca99,	// (0x0005355d) bg_sctrl_sk_pane_g5

0xcaa9,	// (0x0005356d) bg_sctrl_sk_pane_g6

0xcab1,	// (0x00053575) bg_sctrl_sk_pane_g7

0xcac1,	// (0x00053585) bg_sctrl_sk_pane_g8

0xcab9,	// (0x0005357d) bg_sctrl_sk_pane_g9

0xc7b7,	// (0x0005327b) popup_fep_china_hwr2_fs_candidate_window

0x8c63,	// (0x0004f727) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8c63,	// (0x0004f727) popup_fep_china_hwr2_fs_control_window

0x1a7e,	// (0x00048542) sctrl_sk_top_pane_g2

0x0001,

0xfcab,	// (0x0005676f) sctrl_sk_top_pane_g

0xa49f,	// (0x00050f63) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa49f,	// (0x00050f63) aid_fep_china_hwr2_fs_cell

0xa4b3,	// (0x00050f77) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa4b3,	// (0x00050f77) bg_popup_fep_shadow_pane_cp4

0xa4ca,	// (0x00050f8e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa4ca,	// (0x00050f8e) bg_popup_fep_shadow_pane_cp5

0xa4dc,	// (0x00050fa0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa4dc,	// (0x00050fa0) popup_fep_china_hwr2_fs_control_bar_grid

0xa4f0,	// (0x00050fb4) popup_fep_china_hwr2_fs_control_funtion_grid

0x4f5c,	// (0x0004ba20) aid_fep_china_hwr2_fs_candi_cell

0xa775,	// (0x00051239) bg_popup_fep_shadow_pane_cp6

0x4f66,	// (0x0004ba2a) popup_fep_china_hwr2_fs_candidate_grid

0xa4f8,	// (0x00050fbc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa4f8,	// (0x00050fbc) cell_fep_china_hwr2_fs_funtion_grid

0xe833,	// (0x000552f7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4f88,	// (0x0004ba4c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4f88,	// (0x0004ba4c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4f96,	// (0x0004ba5a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4f96,	// (0x0004ba5a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcb5,	// (0x00056779) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcb5,	// (0x00056779) cell_fep_china_hwr2_fs_funtion_grid_g

0xa510,	// (0x00050fd4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa510,	// (0x00050fd4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa525,	// (0x00050fe9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa525,	// (0x00050fe9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0154,	// (0x00046c18) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0154,	// (0x00046c18) cell_fep_china_hwr2_fs_funtion_grid_t

0x4fdd,	// (0x0004baa1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4fe5,	// (0x0004baa9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4fed,	// (0x0004bab1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcba,	// (0x0005677e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4ff5,	// (0x0004bab9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4ff5,	// (0x0004bab9) cell_fep_china_hwr2_fs_candidate_grid

0x500e,	// (0x0004bad2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5016,	// (0x0004bada) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe833,	// (0x000552f7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe833,	// (0x000552f7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x0005661a) cell_fep_china_hwr2_fs_candidate_grid_g

0x501e,	// (0x0004bae2) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc8ce,	// (0x00053392) clock_nsta_pane_cp_24_ParamLimits

0xc8ce,	// (0x00053392) clock_nsta_pane_cp_24

0xc936,	// (0x000533fa) indicator_nsta_pane_cp_24_ParamLimits

0xc936,	// (0x000533fa) indicator_nsta_pane_cp_24

0xd69c,	// (0x00054160) heading_pane_g1

0x0001,

0xf8f3,	// (0x000563b7) heading_pane_g

0xdd35,	// (0x000547f9) grid_sct_catagory_button_pane

0xd1c0,	// (0x00053c84) scroll_pane_cp5_ParamLimits

0xe591,	// (0x00055055) button_value_adjust_pane_cp5_ParamLimits

0xe591,	// (0x00055055) button_value_adjust_pane_cp5

0xe64f,	// (0x00055113) form2_midp_time_pane_ParamLimits

0x502c,	// (0x0004baf0) cell_sct_catagory_button_pane_ParamLimits

0x502c,	// (0x0004baf0) cell_sct_catagory_button_pane

0xe7f8,	// (0x000552bc) bg_button_pane_cp01_ParamLimits

0xe7f8,	// (0x000552bc) bg_button_pane_cp01

0xe833,	// (0x000552f7) cell_sct_catagory_button_pane_g1

0x91b2,	// (0x0004fc76) popup_tb_extension_window

0xa541,	// (0x00051005) aid_size_cell_ext_ParamLimits

0xa541,	// (0x00051005) aid_size_cell_ext

0xb545,	// (0x00052009) bg_tb_trans_pane_cp1_ParamLimits

0xb545,	// (0x00052009) bg_tb_trans_pane_cp1

0xa567,	// (0x0005102b) grid_tb_ext_pane_ParamLimits

0xa567,	// (0x0005102b) grid_tb_ext_pane

0xa5a2,	// (0x00051066) cell_tb_ext_pane_ParamLimits

0xa5a2,	// (0x00051066) cell_tb_ext_pane

0xa5ca,	// (0x0005108e) cell_tb_ext_pane_g1_ParamLimits

0xa5ca,	// (0x0005108e) cell_tb_ext_pane_g1

0x50c0,	// (0x0004bb84) cell_tb_ext_pane_t1

0xae87,	// (0x0005194b) list_highlight_pane_cp11_ParamLimits

0xae87,	// (0x0005194b) list_highlight_pane_cp11

0x06b8,	// (0x0004717c) popup_uni_indicator_window_ParamLimits

0x06b8,	// (0x0004717c) popup_uni_indicator_window

0xbb16,	// (0x000525da) bg_popup_sub_pane_cp14

0x50db,	// (0x0004bb9f) list_uniindi_pane

0x50e7,	// (0x0004bbab) uniindi_top_pane

0xae87,	// (0x0005194b) bg_uniindi_top_pane

0x5106,	// (0x0004bbca) uniindi_top_pane_g1

0x511c,	// (0x0004bbe0) uniindi_top_pane_g2

0x0003,

0xfcc1,	// (0x00056785) uniindi_top_pane_g

0x5146,	// (0x0004bc0a) uniindi_top_pane_t1

0x5170,	// (0x0004bc34) list_single_uniindi_pane_ParamLimits

0x5170,	// (0x0004bc34) list_single_uniindi_pane

0xe833,	// (0x000552f7) bg_uniindi_top_pane_g1

0x5183,	// (0x0004bc47) list_single_uniindi_pane_g1

0x5196,	// (0x0004bc5a) list_single_uniindi_pane_t1

0x052e,	// (0x00046ff2) control_bg_pane

0x51bb,	// (0x0004bc7f) bg_sctrl_sk_pane_cp1

0x51c4,	// (0x0004bc88) bg_sctrl_sk_pane_cp2

0x51cd,	// (0x0004bc91) control_bg_pane_g1

0x51d6,	// (0x0004bc9a) control_bg_pane_g2

0x0001,

0xfcca,	// (0x0005678e) control_bg_pane_g

0xe4a0,	// (0x00054f64) cell_indicator_nsta_pane_g1_ParamLimits

0x9c31,	// (0x000506f5) cell_indicator_nsta_pane_g2_ParamLimits

0xfac7,	// (0x0005658b) cell_indicator_nsta_pane_g_ParamLimits

0x351a,	// (0x00049fde) form2_midp_time_pane_t1_ParamLimits

0xddd0,	// (0x00054894) main_idle_act4_pane_ParamLimits

0xddd0,	// (0x00054894) main_idle_act4_pane

0x91b2,	// (0x0004fc76) popup_tb_extension_window_ParamLimits

0xa589,	// (0x0005104d) tb_ext_find_pane_ParamLimits

0xa589,	// (0x0005104d) tb_ext_find_pane

0x51df,	// (0x0004bca3) ai_gene_pane_1_cp1

0xc5bd,	// (0x00053081) ai_gene_pane_2_cp1

0x51e7,	// (0x0004bcab) list_single_idle_plugin_calendar_pane

0x51f0,	// (0x0004bcb4) list_single_idle_plugin_notification_pane

0x521a,	// (0x0004bcde) list_single_idle_plugin_player_pane

0xa5e7,	// (0x000510ab) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa5e7,	// (0x000510ab) list_single_idle_plugin_shortcut_pane

0xa60f,	// (0x000510d3) main_idle_act4_pane_t1

0xa625,	// (0x000510e9) main_idle_act4_pane_t2

0x0001,

0x016e,	// (0x00046c32) main_idle_act4_pane_t

0xa63b,	// (0x000510ff) middle_sk_idle_act4_pane_ParamLimits

0xa63b,	// (0x000510ff) middle_sk_idle_act4_pane

0xa657,	// (0x0005111b) popup_clock_digital_analogue_window_cp2

0xa67f,	// (0x00051143) shortcut_wheel_idle_act4_pane_ParamLimits

0xa67f,	// (0x00051143) shortcut_wheel_idle_act4_pane

0xe833,	// (0x000552f7) shortcut_wheel_idle_act4_pane_g1

0xe833,	// (0x000552f7) shortcut_wheel_idle_act4_pane_g2

0xe833,	// (0x000552f7) shortcut_wheel_idle_act4_pane_g3

0xe833,	// (0x000552f7) shortcut_wheel_idle_act4_pane_g4

0xe833,	// (0x000552f7) shortcut_wheel_idle_act4_pane_g5

0x52ad,	// (0x0004bd71) shortcut_wheel_idle_act4_pane_g6

0x52b5,	// (0x0004bd79) shortcut_wheel_idle_act4_pane_g7

0x52bd,	// (0x0004bd81) shortcut_wheel_idle_act4_pane_g8

0x52c5,	// (0x0004bd89) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfccf,	// (0x00056793) shortcut_wheel_idle_act4_pane_g

0x88df,	// (0x0004f3a3) middle_sk_idle_act4_pane_g1_ParamLimits

0x88df,	// (0x0004f3a3) middle_sk_idle_act4_pane_g1

0xa6fc,	// (0x000511c0) middle_sk_idle_act4_pane_g2_ParamLimits

0xa6fc,	// (0x000511c0) middle_sk_idle_act4_pane_g2

0x0001,

0xfce2,	// (0x000567a6) middle_sk_idle_act4_pane_g_ParamLimits

0xfce2,	// (0x000567a6) middle_sk_idle_act4_pane_g

0xa714,	// (0x000511d8) middle_sk_idle_act4_pane_t1_ParamLimits

0xa714,	// (0x000511d8) middle_sk_idle_act4_pane_t1

0xa743,	// (0x00051207) grid_ai_shortcut_pane_ParamLimits

0xa743,	// (0x00051207) grid_ai_shortcut_pane

0xa760,	// (0x00051224) list_highlight_pane_cp16_ParamLimits

0xa760,	// (0x00051224) list_highlight_pane_cp16

0xa817,	// (0x000512db) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa817,	// (0x000512db) list_single_idle_plugin_shortcut_pane_g1

0xa823,	// (0x000512e7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa823,	// (0x000512e7) list_single_idle_plugin_shortcut_pane_g2

0xa83f,	// (0x00051303) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa83f,	// (0x00051303) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfce7,	// (0x000567ab) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfce7,	// (0x000567ab) list_single_idle_plugin_shortcut_pane_g

0xa854,	// (0x00051318) cell_ai_shortcut_pane_ParamLimits

0xa854,	// (0x00051318) cell_ai_shortcut_pane

0xa86a,	// (0x0005132e) cell_ai_shortcut_pane_g1_ParamLimits

0xa86a,	// (0x0005132e) cell_ai_shortcut_pane_g1

0x51df,	// (0x0004bca3) ai_gene_pane_1_cp2

0x53f5,	// (0x0004beb9) ai_gene_pane_2_cp2

0x53fd,	// (0x0004bec1) list_highlight_pane_cp15

0x5406,	// (0x0004beca) list_single_idle_plugin_calendar_pane_g1

0x53fd,	// (0x0004bec1) list_highlight_pane_cp17

0x540e,	// (0x0004bed2) list_single_idle_plugin_calendar_pane_g1_copy1

0x5416,	// (0x0004beda) list_single_idle_plugin_player_pane_g1

0xdf42,	// (0x00054a06) list_single_idle_plugin_player_pane_g2

0x0001,

0xfcee,	// (0x000567b2) list_single_idle_plugin_player_pane_g

0x541e,	// (0x0004bee2) list_single_idle_plugin_player_pane_t1

0x542c,	// (0x0004bef0) list_single_idle_plugin_player_pane_t2

0x543a,	// (0x0004befe) list_single_idle_plugin_player_pane_t3

0x5448,	// (0x0004bf0c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfcf3,	// (0x000567b7) list_single_idle_plugin_player_pane_t

0x5456,	// (0x0004bf1a) wait_bar_pane_cp15

0x545e,	// (0x0004bf22) grid_ai_notification_pane

0xdf42,	// (0x00054a06) list_single_idle_plugin_notification_pane_g1

0xa88c,	// (0x00051350) cell_ai_notification_pane_ParamLimits

0xa88c,	// (0x00051350) cell_ai_notification_pane

0x5474,	// (0x0004bf38) cell_ai_notification_pane_g1

0x547c,	// (0x0004bf40) cell_ai_notification_pane_t1

0xa899,	// (0x0005135d) tb_ext_find_button_pane

0xa8a1,	// (0x00051365) tb_ext_find_pane_g1

0xa8a9,	// (0x0005136d) tb_ext_find_pane_t1

0xc04e,	// (0x00052b12) tb_ext_find_button_pane_g1

0x54a8,	// (0x0004bf6c) tb_ext_find_button_pane_g2

0x0001,

0xfcfc,	// (0x000567c0) tb_ext_find_button_pane_g

0xa60f,	// (0x000510d3) main_idle_act4_pane_t1_ParamLimits

0xa625,	// (0x000510e9) main_idle_act4_pane_t2_ParamLimits

0x016e,	// (0x00046c32) main_idle_act4_pane_t_ParamLimits

0xa657,	// (0x0005111b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa66f,	// (0x00051133) sat_plugin_idle_act4_pane_ParamLimits

0xa66f,	// (0x00051133) sat_plugin_idle_act4_pane

0xa8b7,	// (0x0005137b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa8b7,	// (0x0005137b) sat_plugin_idle_act4_pane_t1

0xa8cf,	// (0x00051393) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa8cf,	// (0x00051393) sat_plugin_idle_act4_pane_t2

0xa8e7,	// (0x000513ab) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa8e7,	// (0x000513ab) sat_plugin_idle_act4_pane_t3

0xa8ff,	// (0x000513c3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa8ff,	// (0x000513c3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd01,	// (0x000567c5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd01,	// (0x000567c5) sat_plugin_idle_act4_pane_t

0x05f3,	// (0x000470b7) popup_battery_window_ParamLimits

0x05f3,	// (0x000470b7) popup_battery_window

0xae87,	// (0x0005194b) bg_popup_sub_pane_cp25_ParamLimits

0xae87,	// (0x0005194b) bg_popup_sub_pane_cp25

0x54fd,	// (0x0004bfc1) popup_battery_window_g1_ParamLimits

0x54fd,	// (0x0004bfc1) popup_battery_window_g1

0x5509,	// (0x0004bfcd) popup_battery_window_t1_ParamLimits

0x5509,	// (0x0004bfcd) popup_battery_window_t1

0x551b,	// (0x0004bfdf) popup_battery_window_t2_ParamLimits

0x551b,	// (0x0004bfdf) popup_battery_window_t2

0x0001,

0xfd0a,	// (0x000567ce) popup_battery_window_t_ParamLimits

0xfd0a,	// (0x000567ce) popup_battery_window_t

0x8ae2,	// (0x0004f5a6) midp_canvas_pane_ParamLimits

0x8b3d,	// (0x0004f601) midp_keypad_pane_ParamLimits

0x8b3d,	// (0x0004f601) midp_keypad_pane

0xbc6e,	// (0x00052732) main_midp_pane_ParamLimits

0xe54a,	// (0x0005500e) signal_pane_g2_cp_ParamLimits

0xa917,	// (0x000513db) aid_size_cell_midp_keypad_ParamLimits

0xa917,	// (0x000513db) aid_size_cell_midp_keypad

0xa935,	// (0x000513f9) midp_keyp_game_grid_pane_ParamLimits

0xa935,	// (0x000513f9) midp_keyp_game_grid_pane

0xa95c,	// (0x00051420) midp_keyp_rocker_pane_ParamLimits

0xa95c,	// (0x00051420) midp_keyp_rocker_pane

0xa9b5,	// (0x00051479) midp_keyp_sk_left_pane_ParamLimits

0xa9b5,	// (0x00051479) midp_keyp_sk_left_pane

0xaa09,	// (0x000514cd) midp_keyp_sk_right_pane_ParamLimits

0xaa09,	// (0x000514cd) midp_keyp_sk_right_pane

0xa775,	// (0x00051239) bg_button_pane_cp03

0xaa5d,	// (0x00051521) midp_keyp_sk_left_pane_g1

0xa775,	// (0x00051239) bg_button_pane_cp04

0xaa5d,	// (0x00051521) midp_keyp_sk_right_pane_g1

0xe833,	// (0x000552f7) midp_keyp_rocker_pane_g1

0xaa66,	// (0x0005152a) keyp_game_cell_pane_ParamLimits

0xaa66,	// (0x0005152a) keyp_game_cell_pane

0xa775,	// (0x00051239) bg_button_pane_cp02

0xaa8a,	// (0x0005154e) keyp_game_cell_pane_g1

0x7484,	// (0x0004df48) popup_fep_vkb2_window_ParamLimits

0x7484,	// (0x0004df48) popup_fep_vkb2_window

0x7f0b,	// (0x0004e9cf) aid_size_cell_vkb2_ParamLimits

0x7f0b,	// (0x0004e9cf) aid_size_cell_vkb2

0x7f41,	// (0x0004ea05) popup_fep_vkb2_window_g1_ParamLimits

0x7f41,	// (0x0004ea05) popup_fep_vkb2_window_g1

0x7f91,	// (0x0004ea55) vkb2_area_bottom_pane_ParamLimits

0x7f91,	// (0x0004ea55) vkb2_area_bottom_pane

0x7fe5,	// (0x0004eaa9) vkb2_area_keypad_pane_ParamLimits

0x7fe5,	// (0x0004eaa9) vkb2_area_keypad_pane

0x802d,	// (0x0004eaf1) vkb2_area_top_pane_ParamLimits

0x802d,	// (0x0004eaf1) vkb2_area_top_pane

0x80b3,	// (0x0004eb77) vkb2_top_entry_pane_ParamLimits

0x80b3,	// (0x0004eb77) vkb2_top_entry_pane

0x80e0,	// (0x0004eba4) vkb2_top_grid_left_pane_ParamLimits

0x80e0,	// (0x0004eba4) vkb2_top_grid_left_pane

0x8100,	// (0x0004ebc4) vkb2_top_grid_right_pane_ParamLimits

0x8100,	// (0x0004ebc4) vkb2_top_grid_right_pane

0x1f51,	// (0x00048a15) vkb2_cell_keypad_pane_ParamLimits

0x1f51,	// (0x00048a15) vkb2_cell_keypad_pane

0x8146,	// (0x0004ec0a) vkb2_area_bottom_grid_pane_ParamLimits

0x8146,	// (0x0004ec0a) vkb2_area_bottom_grid_pane

0x8170,	// (0x0004ec34) vkb2_area_bottom_pane_g1_ParamLimits

0x8170,	// (0x0004ec34) vkb2_area_bottom_pane_g1

0x8196,	// (0x0004ec5a) vkb2_area_bottom_pane_g2_ParamLimits

0x8196,	// (0x0004ec5a) vkb2_area_bottom_pane_g2

0x81c7,	// (0x0004ec8b) vkb2_area_bottom_pane_g3_ParamLimits

0x81c7,	// (0x0004ec8b) vkb2_area_bottom_pane_g3

0x0002,

0xfd0f,	// (0x000567d3) vkb2_area_bottom_pane_g_ParamLimits

0xfd0f,	// (0x000567d3) vkb2_area_bottom_pane_g

0x20fb,	// (0x00048bbf) vkb2_top_cell_left_pane_ParamLimits

0x20fb,	// (0x00048bbf) vkb2_top_cell_left_pane

0xaa93,	// (0x00051557) vkb2_top_entry_pane_g1_ParamLimits

0xaa93,	// (0x00051557) vkb2_top_entry_pane_g1

0xaaa1,	// (0x00051565) vkb2_top_entry_pane_t1_ParamLimits

0xaaa1,	// (0x00051565) vkb2_top_entry_pane_t1

0x56cc,	// (0x0004c190) vkb2_top_entry_pane_t2_ParamLimits

0x56cc,	// (0x0004c190) vkb2_top_entry_pane_t2

0x56fe,	// (0x0004c1c2) vkb2_top_entry_pane_t3_ParamLimits

0x56fe,	// (0x0004c1c2) vkb2_top_entry_pane_t3

0x0002,

0xfd16,	// (0x000567da) vkb2_top_entry_pane_t_ParamLimits

0xfd16,	// (0x000567da) vkb2_top_entry_pane_t

0x8231,	// (0x0004ecf5) vkb2_top_grid_right_pane_g1_ParamLimits

0x8231,	// (0x0004ecf5) vkb2_top_grid_right_pane_g1

0x215e,	// (0x00048c22) vkb2_top_grid_right_pane_g2_ParamLimits

0x215e,	// (0x00048c22) vkb2_top_grid_right_pane_g2

0x2176,	// (0x00048c3a) vkb2_top_grid_right_pane_g3_ParamLimits

0x2176,	// (0x00048c3a) vkb2_top_grid_right_pane_g3

0x8247,	// (0x0004ed0b) vkb2_top_grid_right_pane_g4_ParamLimits

0x8247,	// (0x0004ed0b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd1d,	// (0x000567e1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd1d,	// (0x000567e1) vkb2_top_grid_right_pane_g

0x21a4,	// (0x00048c68) vkb2_top_cell_left_pane_g1

0x21bb,	// (0x00048c7f) vkb2_cell_keypad_pane_g1_ParamLimits

0x21bb,	// (0x00048c7f) vkb2_cell_keypad_pane_g1

0x5714,	// (0x0004c1d8) vkb2_cell_keypad_pane_t1_ParamLimits

0x5714,	// (0x0004c1d8) vkb2_cell_keypad_pane_t1

0x21c9,	// (0x00048c8d) vkb2_cell_bottom_grid_pane_ParamLimits

0x21c9,	// (0x00048c8d) vkb2_cell_bottom_grid_pane

0x2202,	// (0x00048cc6) vkb2_cell_bottom_grid_pane_g1

0xa6a0,	// (0x00051164) aid_call2_pane_cp02

0xa6a8,	// (0x0005116c) aid_call_pane_cp02

0xa6b0,	// (0x00051174) clock_digital_number_pane_cp10

0xa6b8,	// (0x0005117c) clock_digital_number_pane_cp11

0xa6c0,	// (0x00051184) clock_digital_number_pane_cp12

0xa6c8,	// (0x0005118c) clock_digital_number_pane_cp13

0xa6d0,	// (0x00051194) clock_digital_separator_pane_cp10

0xc04e,	// (0x00052b12) popup_clock_digital_analogue_window_cp2_g1

0xc04e,	// (0x00052b12) popup_clock_digital_analogue_window_cp2_g2

0xa6d8,	// (0x0005119c) popup_clock_digital_analogue_window_cp2_g3

0xc04e,	// (0x00052b12) popup_clock_digital_analogue_window_cp2_g4

0xa6d8,	// (0x0005119c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x0186,	// (0x00046c4a) popup_clock_digital_analogue_window_cp2_g

0xa6e0,	// (0x000511a4) popup_clock_digital_analogue_window_cp2_t1

0xa6ee,	// (0x000511b2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0191,	// (0x00046c55) popup_clock_digital_analogue_window_cp2_t

0xe833,	// (0x000552f7) clock_digital_number_pane_cp10_g1

0xe833,	// (0x000552f7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x0005661a) clock_digital_number_pane_cp10_g

0xe833,	// (0x000552f7) clock_digital_separator_pane_cp10_g1

0xe833,	// (0x000552f7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x0005661a) clock_digital_separator_pane_cp10_g

0x5128,	// (0x0004bbec) uniindi_top_pane_g3

0x5139,	// (0x0004bbfd) uniindi_top_pane_g4

0x1fdc,	// (0x00048aa0) vkb2_row_keypad_pane_ParamLimits

0x1fdc,	// (0x00048aa0) vkb2_row_keypad_pane

0x221e,	// (0x00048ce2) vkb2_cell_t_keypad_pane_ParamLimits

0x221e,	// (0x00048ce2) vkb2_cell_t_keypad_pane

0x222e,	// (0x00048cf2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x222e,	// (0x00048cf2) vkb2_cell_t_keypad_pane_cp08

0x2241,	// (0x00048d05) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2241,	// (0x00048d05) vkb2_cell_t_keypad_pane_cp09

0x2255,	// (0x00048d19) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2255,	// (0x00048d19) vkb2_cell_t_keypad_pane_cp01

0x2266,	// (0x00048d2a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2266,	// (0x00048d2a) vkb2_cell_t_keypad_pane_cp02

0x2277,	// (0x00048d3b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2277,	// (0x00048d3b) vkb2_cell_t_keypad_pane_cp03

0x2288,	// (0x00048d4c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2288,	// (0x00048d4c) vkb2_cell_t_keypad_pane_cp04

0x2299,	// (0x00048d5d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2299,	// (0x00048d5d) vkb2_cell_t_keypad_pane_cp05

0x22aa,	// (0x00048d6e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x22aa,	// (0x00048d6e) vkb2_cell_t_keypad_pane_cp06

0x22bb,	// (0x00048d7f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x22bb,	// (0x00048d7f) vkb2_cell_t_keypad_pane_cp07

0x22cc,	// (0x00048d90) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x22cc,	// (0x00048d90) vkb2_cell_t_keypad_pane_cp10

0x1a7e,	// (0x00048542) vkb2_cell_t_keypad_pane_g1

0x572b,	// (0x0004c1ef) vkb2_cell_t_keypad_pane_t1

0x052e,	// (0x00046ff2) popup_grid_graphic2_window

0xaada,	// (0x0005159e) aid_size_cell_graphic2_ParamLimits

0xaada,	// (0x0005159e) aid_size_cell_graphic2

0xd014,	// (0x00053ad8) bg_popup_window_pane_cp21_ParamLimits

0xd014,	// (0x00053ad8) bg_popup_window_pane_cp21

0xab0c,	// (0x000515d0) graphic2_pages_pane_ParamLimits

0xab0c,	// (0x000515d0) graphic2_pages_pane

0xab62,	// (0x00051626) grid_graphic2_control_pane_ParamLimits

0xab62,	// (0x00051626) grid_graphic2_control_pane

0xab96,	// (0x0005165a) grid_graphic2_pane_ParamLimits

0xab96,	// (0x0005165a) grid_graphic2_pane

0xac09,	// (0x000516cd) cell_graphic2_pane

0xa775,	// (0x00051239) main_comp_mode_pane

0x49a8,	// (0x0004b46c) list_ai3_gene_pane_ParamLimits

0xa3e7,	// (0x00050eab) bg_popup_window_pane_cp19_ParamLimits

0x4d7e,	// (0x0004b842) bg_touch_area_indi_pane_ParamLimits

0x4d7e,	// (0x0004b842) bg_touch_area_indi_pane

0x4d94,	// (0x0004b858) bg_touch_area_indi_pane_cp01_ParamLimits

0x4d94,	// (0x0004b858) bg_touch_area_indi_pane_cp01

0x4daa,	// (0x0004b86e) bg_touch_area_indi_pane_cp02_ParamLimits

0x4daa,	// (0x0004b86e) bg_touch_area_indi_pane_cp02

0x4dc2,	// (0x0004b886) bg_touch_area_indi_pane_cp03_ParamLimits

0x4dc2,	// (0x0004b886) bg_touch_area_indi_pane_cp03

0x4ddc,	// (0x0004b8a0) popup_slider_window_g1_ParamLimits

0x4df8,	// (0x0004b8bc) popup_slider_window_g2_ParamLimits

0x4e14,	// (0x0004b8d8) popup_slider_window_g3_ParamLimits

0xfc92,	// (0x00056756) popup_slider_window_g_ParamLimits

0x4e70,	// (0x0004b934) popup_slider_window_t1_ParamLimits

0x4ee4,	// (0x0004b9a8) small_volume_slider_vertical_pane_ParamLimits

0xac09,	// (0x000516cd) cell_graphic2_pane_ParamLimits

0xac64,	// (0x00051728) bg_button_pane_cp10_ParamLimits

0xac64,	// (0x00051728) bg_button_pane_cp10

0xac77,	// (0x0005173b) bg_button_pane_cp11_ParamLimits

0xac77,	// (0x0005173b) bg_button_pane_cp11

0xac8a,	// (0x0005174e) graphic2_pages_pane_g1_ParamLimits

0xac8a,	// (0x0005174e) graphic2_pages_pane_g1

0xaca5,	// (0x00051769) graphic2_pages_pane_g2_ParamLimits

0xaca5,	// (0x00051769) graphic2_pages_pane_g2

0x0001,

0xfd2b,	// (0x000567ef) graphic2_pages_pane_g_ParamLimits

0xfd2b,	// (0x000567ef) graphic2_pages_pane_g

0xacbd,	// (0x00051781) graphic2_pages_pane_t1_ParamLimits

0xacbd,	// (0x00051781) graphic2_pages_pane_t1

0xacd5,	// (0x00051799) cell_graphic2_control_pane_ParamLimits

0xacd5,	// (0x00051799) cell_graphic2_control_pane

0xacef,	// (0x000517b3) cell_graphic2_pane_g1_ParamLimits

0xacef,	// (0x000517b3) cell_graphic2_pane_g1

0x8f10,	// (0x0004f9d4) cell_graphic2_pane_g2_ParamLimits

0x8f10,	// (0x0004f9d4) cell_graphic2_pane_g2

0xa80a,	// (0x000512ce) cell_graphic2_pane_g3_ParamLimits

0xa80a,	// (0x000512ce) cell_graphic2_pane_g3

0x8f1d,	// (0x0004f9e1) cell_graphic2_pane_g4_ParamLimits

0x8f1d,	// (0x0004f9e1) cell_graphic2_pane_g4

0xacfc,	// (0x000517c0) cell_graphic2_pane_g5_ParamLimits

0xacfc,	// (0x000517c0) cell_graphic2_pane_g5

0x0004,

0xfd30,	// (0x000567f4) cell_graphic2_pane_g_ParamLimits

0xfd30,	// (0x000567f4) cell_graphic2_pane_g

0xad1c,	// (0x000517e0) cell_graphic2_pane_t1_ParamLimits

0xad1c,	// (0x000517e0) cell_graphic2_pane_t1

0xd690,	// (0x00054154) grid_highlight_pane_cp11_ParamLimits

0xd690,	// (0x00054154) grid_highlight_pane_cp11

0xbb16,	// (0x000525da) bg_button_pane_cp05

0xad33,	// (0x000517f7) cell_graphic2_control_pane_g1

0xe833,	// (0x000552f7) bg_touch_area_indi_pane_g1

0x5989,	// (0x0004c44d) aid_cmod_rocker_key_size

0x5993,	// (0x0004c457) aid_cmode_itu_key_size

0x599d,	// (0x0004c461) main_cmode_video_pane

0x59a7,	// (0x0004c46b) main_comp_mode_itu_pane

0x59b3,	// (0x0004c477) main_comp_mode_rocker_pane

0x59bf,	// (0x0004c483) cell_cmode_rocker_pane_ParamLimits

0x59bf,	// (0x0004c483) cell_cmode_rocker_pane

0x59d1,	// (0x0004c495) cell_cmode_itu_pane_ParamLimits

0x59d1,	// (0x0004c495) cell_cmode_itu_pane

0xbb16,	// (0x000525da) bg_button_pane_cp06_ParamLimits

0xbb16,	// (0x000525da) bg_button_pane_cp06

0xe9da,	// (0x0005549e) cell_cmode_rocker_pane_g1_ParamLimits

0xe9da,	// (0x0005549e) cell_cmode_rocker_pane_g1

0x4f88,	// (0x0004ba4c) cell_cmode_rocker_pane_g2_ParamLimits

0x4f88,	// (0x0004ba4c) cell_cmode_rocker_pane_g2

0x0001,

0xfd3b,	// (0x000567ff) cell_cmode_rocker_pane_g_ParamLimits

0xfd3b,	// (0x000567ff) cell_cmode_rocker_pane_g

0xa775,	// (0x00051239) bg_button_pane_cp07

0x59e6,	// (0x0004c4aa) cell_cmode_itu_pane_g1

0x59ef,	// (0x0004c4b3) cell_cmode_itu_pane_t1

0x59fd,	// (0x0004c4c1) cell_cmode_itu_pane_t2

0x0001,

0xfd40,	// (0x00056804) cell_cmode_itu_pane_t

0x51ab,	// (0x0004bc6f) aid_touch_ctrl_left

0x51b3,	// (0x0004bc77) aid_touch_ctrl_right

0xa775,	// (0x00051239) compa_mode_pane

0xad40,	// (0x00051804) aid_cmod_rocker_key_size_cp

0xad4a,	// (0x0005180e) aid_cmode_itu_key_size_cp

0x5a1f,	// (0x0004c4e3) compa_mode_pane_g1

0x5a27,	// (0x0004c4eb) compa_mode_pane_g2

0x5a2f,	// (0x0004c4f3) compa_mode_pane_g3

0x0002,

0xfd45,	// (0x00056809) compa_mode_pane_g

0xad54,	// (0x00051818) main_comp_mode_itu_pane_cp

0xad5c,	// (0x00051820) main_comp_mode_rocker_pane_cp

0xad64,	// (0x00051828) cell_cmode_itu_pane_cp_ParamLimits

0xad64,	// (0x00051828) cell_cmode_itu_pane_cp

0xaf0b,	// (0x000519cf) cell_cmode_rocker_pane_cp_ParamLimits

0xaf0b,	// (0x000519cf) cell_cmode_rocker_pane_cp

0xbb16,	// (0x000525da) bg_button_pane_cp06_cp_ParamLimits

0xbb16,	// (0x000525da) bg_button_pane_cp06_cp

0xe9da,	// (0x0005549e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9da,	// (0x0005549e) cell_cmode_rocker_pane_g1_cp

0xe833,	// (0x000552f7) cell_cmode_rocker_pane_g2_cp

0xa775,	// (0x00051239) bg_button_pane_cp07_cp

0xaf1d,	// (0x000519e1) cell_cmode_itu_pane_g1_cp

0xaf26,	// (0x000519ea) cell_cmode_itu_pane_t1_cp

0xaf26,	// (0x000519ea) cell_cmode_itu_pane_t2_cp

0x9a2e,	// (0x000504f2) settings_code_pane_cp2

0xa7e5,	// (0x000512a9) bg_popup_window_pane_cp3_ParamLimits

0xb4d6,	// (0x00051f9a) heading_pane_cp3_ParamLimits

0xb4e2,	// (0x00051fa6) listscroll_popup_graphic_pane_ParamLimits

0x1827,	// (0x000482eb) fep_hwr_aid_pane_ParamLimits

0x1c9f,	// (0x00048763) aid_touch_sctrl_top_ParamLimits

0x1cba,	// (0x0004877e) sctrl_sk_top_pane_g1_ParamLimits

0x1a7e,	// (0x00048542) sctrl_sk_top_pane_g2_ParamLimits

0xfcab,	// (0x0005676f) sctrl_sk_top_pane_g_ParamLimits

0x1cc7,	// (0x0004878b) sctrl_sk_top_pane_t1_ParamLimits

0x1c9f,	// (0x00048763) aid_touch_sctrl_bottom_ParamLimits

0x1cc7,	// (0x0004878b) sctrl_sk_bottom_pane_t1_ParamLimits

0x50f4,	// (0x0004bbb8) aid_area_touch_clock

0x8075,	// (0x0004eb39) aid_vkb2_area_top_pane_cell_ParamLimits

0x8075,	// (0x0004eb39) aid_vkb2_area_top_pane_cell

0x8120,	// (0x0004ebe4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8120,	// (0x0004ebe4) aid_vkb2_area_bottom_pane_cell

0x5684,	// (0x0004c148) popup_char_count_window

0x5a7c,	// (0x0004c540) popup_char_count_window_g1

0x5a85,	// (0x0004c549) popup_char_count_window_g2

0x5a8e,	// (0x0004c552) popup_char_count_window_g3

0x0002,

0xfd4c,	// (0x00056810) popup_char_count_window_g

0x5a97,	// (0x0004c55b) popup_char_count_window_t1

0x1d79,	// (0x0004883d) popup_fep_char_preview_window_ParamLimits

0x1d79,	// (0x0004883d) popup_fep_char_preview_window

0x8095,	// (0x0004eb59) vkb2_top_candi_pane_ParamLimits

0x8095,	// (0x0004eb59) vkb2_top_candi_pane

0xaf34,	// (0x000519f8) cell_vkb2_top_candi_pane_ParamLimits

0xaf34,	// (0x000519f8) cell_vkb2_top_candi_pane

0x22e1,	// (0x00048da5) bg_popup_fep_char_preview_window_ParamLimits

0x22e1,	// (0x00048da5) bg_popup_fep_char_preview_window

0x22ef,	// (0x00048db3) popup_fep_char_preview_window_t1_ParamLimits

0x22ef,	// (0x00048db3) popup_fep_char_preview_window_t1

0x5af2,	// (0x0004c5b6) bg_popup_fep_char_preview_window_g1

0x5afa,	// (0x0004c5be) bg_popup_fep_char_preview_window_g2

0x5b02,	// (0x0004c5c6) bg_popup_fep_char_preview_window_g3

0x5b0a,	// (0x0004c5ce) bg_popup_fep_char_preview_window_g4

0x5b12,	// (0x0004c5d6) bg_popup_fep_char_preview_window_g5

0x2329,	// (0x00048ded) bg_popup_fep_char_preview_window_g6

0x5b1a,	// (0x0004c5de) bg_popup_fep_char_preview_window_g7

0x5b22,	// (0x0004c5e6) bg_popup_fep_char_preview_window_g8

0x5b2a,	// (0x0004c5ee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd53,	// (0x00056817) bg_popup_fep_char_preview_window_g

0x1a7e,	// (0x00048542) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1a7e,	// (0x00048542) cell_vkb2_top_candi_pane_g1

0x1a8c,	// (0x00048550) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1a8c,	// (0x00048550) cell_vkb2_top_candi_pane_g2

0x51f9,	// (0x0004bcbd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x51f9,	// (0x0004bcbd) cell_vkb2_top_candi_pane_g3

0x2331,	// (0x00048df5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2331,	// (0x00048df5) cell_vkb2_top_candi_pane_g4

0xede1,	// (0x000558a5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xede1,	// (0x000558a5) cell_vkb2_top_candi_pane_g5

0x2352,	// (0x00048e16) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2352,	// (0x00048e16) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd66,	// (0x0005682a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd66,	// (0x0005682a) cell_vkb2_top_candi_pane_g

0x2360,	// (0x00048e24) cell_vkb2_top_candi_pane_t1

0x1687,	// (0x0004814b) aid_size_touch_slider_mark_ParamLimits

0x1687,	// (0x0004814b) aid_size_touch_slider_mark

0xab48,	// (0x0005160c) grid_graphic2_catg_pane_ParamLimits

0xab48,	// (0x0005160c) grid_graphic2_catg_pane

0xabdc,	// (0x000516a0) popup_grid_graphic2_window_t1_ParamLimits

0xabdc,	// (0x000516a0) popup_grid_graphic2_window_t1

0xabf2,	// (0x000516b6) popup_grid_graphic2_window_t2_ParamLimits

0xabf2,	// (0x000516b6) popup_grid_graphic2_window_t2

0x0001,

0xfd26,	// (0x000567ea) popup_grid_graphic2_window_t_ParamLimits

0xfd26,	// (0x000567ea) popup_grid_graphic2_window_t

0xbb16,	// (0x000525da) bg_button_pane_cp05_ParamLimits

0xad33,	// (0x000517f7) cell_graphic2_control_pane_g1_ParamLimits

0xaf9a,	// (0x00051a5e) cell_graphic2_catg_pane_ParamLimits

0xaf9a,	// (0x00051a5e) cell_graphic2_catg_pane

0xa775,	// (0x00051239) bg_button_pane_cp12

0xafac,	// (0x00051a70) cell_graphic2_catg_pane_g1

0x50c0,	// (0x0004bb84) cell_tb_ext_pane_t1_ParamLimits

0x211b,	// (0x00048bdf) vkb2_top_cell_right_narrow_pane_ParamLimits

0x211b,	// (0x00048bdf) vkb2_top_cell_right_narrow_pane

0x2133,	// (0x00048bf7) vkb2_top_cell_right_wide_pane_ParamLimits

0x2133,	// (0x00048bf7) vkb2_top_cell_right_wide_pane

0x1819,	// (0x000482dd) bg_vkb2_func_pane_ParamLimits

0x1819,	// (0x000482dd) bg_vkb2_func_pane

0x21a4,	// (0x00048c68) vkb2_top_cell_left_pane_g1_ParamLimits

0x1819,	// (0x000482dd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1819,	// (0x000482dd) bg_vkb2_fuc_pane_cp03

0x2202,	// (0x00048cc6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xca89,	// (0x0005354d) bg_vkb2_func_pane_g1

0xca91,	// (0x00053555) bg_vkb2_func_pane_g2

0xcaa1,	// (0x00053565) bg_vkb2_func_pane_g3

0xca99,	// (0x0005355d) bg_vkb2_func_pane_g4

0xcaa9,	// (0x0005356d) bg_vkb2_func_pane_g5

0xcab1,	// (0x00053575) bg_vkb2_func_pane_g6

0xcab9,	// (0x0005357d) bg_vkb2_func_pane_g7

0xcac1,	// (0x00053585) bg_vkb2_func_pane_g8

0xca81,	// (0x00053545) bg_vkb2_func_pane_g9

0x0008,

0x0227,	// (0x00046ceb) bg_vkb2_func_pane_g

0x1819,	// (0x000482dd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1819,	// (0x000482dd) bg_vkb2_fuc_pane_cp01

0x21a4,	// (0x00048c68) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x21a4,	// (0x00048c68) vkb2_top_cell_right_wide_pane_g1

0x1819,	// (0x000482dd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1819,	// (0x000482dd) bg_vkb2_fuc_pane_cp02

0x2202,	// (0x00048cc6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2202,	// (0x00048cc6) vkb2_top_cell_right_narrow_pane_g1

0xa327,	// (0x00050deb) aid_touch_area_decrease_ParamLimits

0xa327,	// (0x00050deb) aid_touch_area_decrease

0xa35b,	// (0x00050e1f) aid_touch_area_increase_ParamLimits

0xa35b,	// (0x00050e1f) aid_touch_area_increase

0xa383,	// (0x00050e47) aid_touch_area_mute_ParamLimits

0xa383,	// (0x00050e47) aid_touch_area_mute

0xa3b3,	// (0x00050e77) aid_touch_area_slider_ParamLimits

0xa3b3,	// (0x00050e77) aid_touch_area_slider

0xa3f3,	// (0x00050eb7) popup_slider_window_g4_ParamLimits

0xa3f3,	// (0x00050eb7) popup_slider_window_g4

0xa41b,	// (0x00050edf) popup_slider_window_g5_ParamLimits

0xa41b,	// (0x00050edf) popup_slider_window_g5

0xa44f,	// (0x00050f13) popup_slider_window_g6_ParamLimits

0xa44f,	// (0x00050f13) popup_slider_window_g6

0x4e9e,	// (0x0004b962) popup_slider_window_t2_ParamLimits

0x4e9e,	// (0x0004b962) popup_slider_window_t2

0x0001,

0xfc9f,	// (0x00056763) popup_slider_window_t_ParamLimits

0xfc9f,	// (0x00056763) popup_slider_window_t

0xa46b,	// (0x00050f2f) slider_pane_ParamLimits

0xa46b,	// (0x00050f2f) slider_pane

0x5b4d,	// (0x0004c611) slider_pane_g1_ParamLimits

0x5b4d,	// (0x0004c611) slider_pane_g1

0x5b61,	// (0x0004c625) slider_pane_g2_ParamLimits

0x5b61,	// (0x0004c625) slider_pane_g2

0x5b77,	// (0x0004c63b) slider_pane_g3_ParamLimits

0x5b77,	// (0x0004c63b) slider_pane_g3

0x0003,

0xfd73,	// (0x00056837) slider_pane_g_ParamLimits

0xfd73,	// (0x00056837) slider_pane_g

0x91fa,	// (0x0004fcbe) popup_tb_float_extension_window_ParamLimits

0x91fa,	// (0x0004fcbe) popup_tb_float_extension_window

0x5ba3,	// (0x0004c667) aid_size_cell_tb_float_ext

0xa775,	// (0x00051239) bg_popup_sub_window_cp28

0x5baf,	// (0x0004c673) grid_tb_float_ext_pane

0x5bb9,	// (0x0004c67d) cell_tb_float_ext_pane_ParamLimits

0x5bb9,	// (0x0004c67d) cell_tb_float_ext_pane

0x5bd3,	// (0x0004c697) cell_tb_float_ext_pane_g1

0x5bdc,	// (0x0004c6a0) grid_highlight_pane_cp12

0x7e7e,	// (0x0004e942) cell_last_hwr_side_pane_ParamLimits

0x7e7e,	// (0x0004e942) cell_last_hwr_side_pane

0xe833,	// (0x000552f7) cell_last_hwr_side_pane_g1

0x5be5,	// (0x0004c6a9) cell_last_hwr_side_pane_g2

0x0001,

0xfd7c,	// (0x00056840) cell_last_hwr_side_pane_g

0x81fc,	// (0x0004ecc0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x81fc,	// (0x0004ecc0) vkb2_area_bottom_space_btn_pane

0x1a7e,	// (0x00048542) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x572b,	// (0x0004c1ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2360,	// (0x00048e24) cell_vkb2_top_candi_pane_t1_ParamLimits

0x237f,	// (0x00048e43) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x237f,	// (0x00048e43) vkb2_area_bottom_space_btn_pane_g1

0x23b9,	// (0x00048e7d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x23b9,	// (0x00048e7d) vkb2_area_bottom_space_btn_pane_g2

0x23ef,	// (0x00048eb3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x23ef,	// (0x00048eb3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd81,	// (0x00056845) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd81,	// (0x00056845) vkb2_area_bottom_space_btn_pane_g

0x18dc,	// (0x000483a0) cel_fep_hwr_func_pane_ParamLimits

0x18dc,	// (0x000483a0) cel_fep_hwr_func_pane

0x7e53,	// (0x0004e917) cell_hwr_side_button_pane_ParamLimits

0x7e53,	// (0x0004e917) cell_hwr_side_button_pane

0x50f4,	// (0x0004bbb8) aid_area_touch_clock_ParamLimits

0xae87,	// (0x0005194b) bg_uniindi_top_pane_ParamLimits

0x5106,	// (0x0004bbca) uniindi_top_pane_g1_ParamLimits

0x511c,	// (0x0004bbe0) uniindi_top_pane_g2_ParamLimits

0x5128,	// (0x0004bbec) uniindi_top_pane_g3_ParamLimits

0x5139,	// (0x0004bbfd) uniindi_top_pane_g4_ParamLimits

0xfcc1,	// (0x00056785) uniindi_top_pane_g_ParamLimits

0x5146,	// (0x0004bc0a) uniindi_top_pane_t1_ParamLimits

0xae87,	// (0x0005194b) bg_vkb2_func_pane_cp01_ParamLimits

0xae87,	// (0x0005194b) bg_vkb2_func_pane_cp01

0x5bee,	// (0x0004c6b2) cel_fep_hwr_func_pane_g1_ParamLimits

0x5bee,	// (0x0004c6b2) cel_fep_hwr_func_pane_g1

0xae87,	// (0x0005194b) bg_vkb2_func_pane_cp02_ParamLimits

0xae87,	// (0x0005194b) bg_vkb2_func_pane_cp02

0x5bee,	// (0x0004c6b2) cell_hwr_side_button_pane_g1_ParamLimits

0x5bee,	// (0x0004c6b2) cell_hwr_side_button_pane_g1

0xc997,	// (0x0005345b) status_pane_g4_ParamLimits

0xc997,	// (0x0005345b) status_pane_g4

0xc9b1,	// (0x00053475) status_pane_t1

0xe6b8,	// (0x0005517c) form2_midp_gauge_slider_cont_pane

0xe6c0,	// (0x00055184) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9d25,	// (0x000507e9) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9d37,	// (0x000507fb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x000565cd) form2_midp_gauge_slider_pane_t_ParamLimits

0xe6d2,	// (0x00055196) form2_midp_slider_pane_ParamLimits

0x1d39,	// (0x000487fd) aid_size_cell_func_vkb2_ParamLimits

0x1d39,	// (0x000487fd) aid_size_cell_func_vkb2

0x5b8f,	// (0x0004c653) slider_pane_g4_ParamLimits

0x5b8f,	// (0x0004c653) slider_pane_g4

0x825d,	// (0x0004ed21) form2_midp_gauge_slider_pane_t2_cp01

0x826b,	// (0x0004ed2f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x826b,	// (0x0004ed2f) form2_midp_gauge_slider_pane_t3_cp01

0x2464,	// (0x00048f28) form2_midp_slider_pane_cp01

0xa775,	// (0x00051239) navi_smil_pane

0x5c27,	// (0x0004c6eb) navi_smil_pane_g1

0x5c2f,	// (0x0004c6f3) navi_smil_pane_t1

0x5bfc,	// (0x0004c6c0) form2_midp_slider_pane_g1

0x5c05,	// (0x0004c6c9) form2_midp_slider_pane_g2

0x5c0d,	// (0x0004c6d1) form2_midp_slider_pane_g3

0x5bfc,	// (0x0004c6c0) form2_midp_slider_pane_g4

0xafb5,	// (0x00051a79) form2_midp_slider_pane_g5

0x0004,

0xfd8a,	// (0x0005684e) form2_midp_slider_pane_g

0x2429,	// (0x00048eed) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2429,	// (0x00048eed) vkb2_area_bottom_space_btn_pane_g4

0x93d6,	// (0x0004fe9a) lc0_navi_pane_ParamLimits

0x93d6,	// (0x0004fe9a) lc0_navi_pane

0x9440,	// (0x0004ff04) lc0_stat_indi_pane_ParamLimits

0x9440,	// (0x0004ff04) lc0_stat_indi_pane

0x9455,	// (0x0004ff19) ls0_title_pane_ParamLimits

0x9455,	// (0x0004ff19) ls0_title_pane

0xbb16,	// (0x000525da) bg_popup_sub_pane_cp14_ParamLimits

0x50db,	// (0x0004bb9f) list_uniindi_pane_ParamLimits

0x50e7,	// (0x0004bbab) uniindi_top_pane_ParamLimits

0x5183,	// (0x0004bc47) list_single_uniindi_pane_g1_ParamLimits

0x5196,	// (0x0004bc5a) list_single_uniindi_pane_t1_ParamLimits

0x8288,	// (0x0004ed4c) lc0_stat_clock_pane_ParamLimits

0x8288,	// (0x0004ed4c) lc0_stat_clock_pane

0xafbe,	// (0x00051a82) lc0_stat_indi_pane_g1_ParamLimits

0xafbe,	// (0x00051a82) lc0_stat_indi_pane_g1

0xafcb,	// (0x00051a8f) lc0_stat_indi_pane_g2_ParamLimits

0xafcb,	// (0x00051a8f) lc0_stat_indi_pane_g2

0x0001,

0xfd95,	// (0x00056859) lc0_stat_indi_pane_g_ParamLimits

0xfd95,	// (0x00056859) lc0_stat_indi_pane_g

0x8295,	// (0x0004ed59) lc0_uni_indicator_pane_ParamLimits

0x8295,	// (0x0004ed59) lc0_uni_indicator_pane

0x5c57,	// (0x0004c71b) ls0_title_pane_g1_ParamLimits

0x5c57,	// (0x0004c71b) ls0_title_pane_g1

0xafd8,	// (0x00051a9c) ls0_title_pane_t1_ParamLimits

0xafd8,	// (0x00051a9c) ls0_title_pane_t1

0x82a2,	// (0x0004ed66) lc0_uni_indicator_pane_g1_ParamLimits

0x82a2,	// (0x0004ed66) lc0_uni_indicator_pane_g1

0x5ca1,	// (0x0004c765) lc0_stat_clock_pane_t1

0xa775,	// (0x00051239) main_ai5_pane

0x5caf,	// (0x0004c773) ai5_sk_pane_ParamLimits

0x5caf,	// (0x0004c773) ai5_sk_pane

0xb006,	// (0x00051aca) cell_ai5_widget_pane_ParamLimits

0xb006,	// (0x00051aca) cell_ai5_widget_pane

0x5d34,	// (0x0004c7f8) aid_size_cell_widget_grid

0x5d46,	// (0x0004c80a) bg_ai5_widget_pane_ParamLimits

0x5d46,	// (0x0004c80a) bg_ai5_widget_pane

0xb08f,	// (0x00051b53) cell_ai5_widget_pane_g2

0xb09f,	// (0x00051b63) cell_ai5_widget_pane_g3

0xb0b3,	// (0x00051b77) cell_ai5_widget_pane_g4

0xb0bf,	// (0x00051b83) cell_ai5_widget_pane_g5

0xb0cb,	// (0x00051b8f) cell_ai5_widget_pane_g6

0xb0d7,	// (0x00051b9b) cell_ai5_widget_pane_g7

0xb11f,	// (0x00051be3) cell_ai5_widget_pane_t1_ParamLimits

0xb11f,	// (0x00051be3) cell_ai5_widget_pane_t1

0xb13c,	// (0x00051c00) cell_ai5_widget_pane_t2_ParamLimits

0xb13c,	// (0x00051c00) cell_ai5_widget_pane_t2

0xb154,	// (0x00051c18) cell_ai5_widget_pane_t3_ParamLimits

0xb154,	// (0x00051c18) cell_ai5_widget_pane_t3

0xb16c,	// (0x00051c30) cell_ai5_widget_pane_t4_ParamLimits

0xb16c,	// (0x00051c30) cell_ai5_widget_pane_t4

0xb186,	// (0x00051c4a) cell_ai5_widget_pane_t5_ParamLimits

0xb186,	// (0x00051c4a) cell_ai5_widget_pane_t5

0x5d52,	// (0x0004c816) cell_ai5_widget_pane_t6_ParamLimits

0x5d52,	// (0x0004c816) cell_ai5_widget_pane_t6

0x5d64,	// (0x0004c828) cell_ai5_widget_pane_t7_ParamLimits

0x5d64,	// (0x0004c828) cell_ai5_widget_pane_t7

0xb1a5,	// (0x00051c69) cell_ai5_widget_pane_t8_ParamLimits

0xb1a5,	// (0x00051c69) cell_ai5_widget_pane_t8

0x0009,

0xfdaf,	// (0x00056873) cell_ai5_widget_pane_t_ParamLimits

0xfdaf,	// (0x00056873) cell_ai5_widget_pane_t

0xb1ed,	// (0x00051cb1) grid_ai5_widget_pane

0xbb16,	// (0x000525da) highlight_cell_ai5_widget_pane_ParamLimits

0xbb16,	// (0x000525da) highlight_cell_ai5_widget_pane

0xb205,	// (0x00051cc9) ai5_sk_left_pane

0xb20f,	// (0x00051cd3) ai5_sk_middle_pane

0xb219,	// (0x00051cdd) ai5_sk_right_pane

0x5d7d,	// (0x0004c841) bg_ai5_widget_pane_g1_ParamLimits

0x5d7d,	// (0x0004c841) bg_ai5_widget_pane_g1

0x5d89,	// (0x0004c84d) bg_ai5_widget_pane_g2_ParamLimits

0x5d89,	// (0x0004c84d) bg_ai5_widget_pane_g2

0x5d95,	// (0x0004c859) bg_ai5_widget_pane_g3_ParamLimits

0x5d95,	// (0x0004c859) bg_ai5_widget_pane_g3

0x5da1,	// (0x0004c865) bg_ai5_widget_pane_g4_ParamLimits

0x5da1,	// (0x0004c865) bg_ai5_widget_pane_g4

0x5dad,	// (0x0004c871) bg_ai5_widget_pane_g5_ParamLimits

0x5dad,	// (0x0004c871) bg_ai5_widget_pane_g5

0x5db9,	// (0x0004c87d) bg_ai5_widget_pane_g6_ParamLimits

0x5db9,	// (0x0004c87d) bg_ai5_widget_pane_g6

0x5dc5,	// (0x0004c889) bg_ai5_widget_pane_g7_ParamLimits

0x5dc5,	// (0x0004c889) bg_ai5_widget_pane_g7

0x5dd1,	// (0x0004c895) bg_ai5_widget_pane_g8_ParamLimits

0x5dd1,	// (0x0004c895) bg_ai5_widget_pane_g8

0x5ddd,	// (0x0004c8a1) bg_ai5_widget_pane_g9_ParamLimits

0x5ddd,	// (0x0004c8a1) bg_ai5_widget_pane_g9

0x0008,

0xfdc4,	// (0x00056888) bg_ai5_widget_pane_g_ParamLimits

0xfdc4,	// (0x00056888) bg_ai5_widget_pane_g

0x5de9,	// (0x0004c8ad) cell_shortcut_ai5_widget_pane_ParamLimits

0x5de9,	// (0x0004c8ad) cell_shortcut_ai5_widget_pane

0xad90,	// (0x00051854) bg_cell_shortcut_ai5_widget_pane

0x5dfb,	// (0x0004c8bf) cell_grid_ai5_widget_pane_g1

0x5e04,	// (0x0004c8c8) highlight_cell_shortcut_ai5_widget_pane

0xca89,	// (0x0005354d) ai5_sk_left_pane_g1

0x5e0c,	// (0x0004c8d0) ai5_sk_left_pane_g2

0x5e14,	// (0x0004c8d8) ai5_sk_left_pane_g3

0x5e1c,	// (0x0004c8e0) ai5_sk_left_pane_g4

0x0003,

0xfdd7,	// (0x0005689b) ai5_sk_left_pane_g

0x5e24,	// (0x0004c8e8) ai5_sk_left_pane_t1

0xca91,	// (0x00053555) ai5_sk_right_pane_g1

0x5e32,	// (0x0004c8f6) ai5_sk_right_pane_g2

0x5e3a,	// (0x0004c8fe) ai5_sk_right_pane_g3

0x5e42,	// (0x0004c906) ai5_sk_right_pane_g4

0x0003,

0xfde0,	// (0x000568a4) ai5_sk_right_pane_g

0x5e4a,	// (0x0004c90e) ai5_sk_right_pane_t1

0xca91,	// (0x00053555) ai5_sk_middle_pane_g1

0xca89,	// (0x0005354d) ai5_sk_middle_pane_g2

0xcaa9,	// (0x0005356d) ai5_sk_middle_pane_g3

0x5e3a,	// (0x0004c8fe) ai5_sk_middle_pane_g4

0x5e14,	// (0x0004c8d8) ai5_sk_middle_pane_g5

0x5e58,	// (0x0004c91c) ai5_sk_middle_pane_g6

0xb240,	// (0x00051d04) ai5_sk_middle_pane_g7

0x0006,

0xfde9,	// (0x000568ad) ai5_sk_middle_pane_g

0x92c2,	// (0x0004fd86) aid_touch_area_size_lc0_ParamLimits

0x92c2,	// (0x0004fd86) aid_touch_area_size_lc0

0x1aad,	// (0x00048571) cell_hwr_candidate_pane_t1_ParamLimits

0xc8b9,	// (0x0005337d) aid_touch_navi_pane

0x9547,	// (0x0005000b) status_dt_navi_pane_ParamLimits

0x9547,	// (0x0005000b) status_dt_navi_pane

0x955f,	// (0x00050023) status_dt_sta_pane_ParamLimits

0x955f,	// (0x00050023) status_dt_sta_pane

0xb248,	// (0x00051d0c) dt_sta_controll_pane

0xb255,	// (0x00051d19) dt_sta_indi_pane

0xb262,	// (0x00051d26) dt_sta_title_pane

0xae87,	// (0x0005194b) bg_dt_sta_indi_pane_ParamLimits

0xae87,	// (0x0005194b) bg_dt_sta_indi_pane

0x5e60,	// (0x0004c924) dt_sta_battery_pane

0xb274,	// (0x00051d38) dt_sta_indi_pane_g1

0xb27d,	// (0x00051d41) dt_sta_indi_pane_g2

0xb286,	// (0x00051d4a) dt_sta_indi_pane_g3

0x0002,

0xfdf8,	// (0x000568bc) dt_sta_indi_pane_g

0xb28f,	// (0x00051d53) dt_sta_signal_pane

0xbb16,	// (0x000525da) bg_dt_sta_title_pane_ParamLimits

0xbb16,	// (0x000525da) bg_dt_sta_title_pane

0xd762,	// (0x00054226) dt_sta_title_pane_g1

0xb298,	// (0x00051d5c) dt_sta_title_pane_t1_ParamLimits

0xb298,	// (0x00051d5c) dt_sta_title_pane_t1

0xa775,	// (0x00051239) bg_dt_sta_control_pane

0xb2ad,	// (0x00051d71) dt_sta_controll_pane_g1

0xb2b6,	// (0x00051d7a) bg_dt_sta_title_pane_g1

0xb2bf,	// (0x00051d83) bg_dt_sta_title_pane_g2

0xb2c8,	// (0x00051d8c) bg_dt_sta_title_pane_g3

0x0002,

0xfdff,	// (0x000568c3) bg_dt_sta_title_pane_g

0xe833,	// (0x000552f7) bg_dt_sta_indi_pane_g1

0x5e68,	// (0x0004c92c) dt_sta_signal_pane_g1

0x5e70,	// (0x0004c934) dt_sta_signal_pane_g2

0x0001,

0xfe06,	// (0x000568ca) dt_sta_signal_pane_g

0x5e78,	// (0x0004c93c) dt_sta_battery_pane_g1

0x5e81,	// (0x0004c945) dt_sta_battery_pane_t1

0xe833,	// (0x000552f7) bg_dt_sta_control_pane_g1

0xc0cc,	// (0x00052b90) fep_china_uni_eep_pane

0xc0d4,	// (0x00052b98) fep_china_uni_entry_pane_ParamLimits

0xc0e4,	// (0x00052ba8) popup_fep_china_uni_window_g1_ParamLimits

0xc0f4,	// (0x00052bb8) popup_fep_china_uni_window_g2_ParamLimits

0xc0f4,	// (0x00052bb8) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0005621c) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0005621c) popup_fep_china_uni_window_g

0x5e90,	// (0x0004c954) fep_china_uni_eep_pane_g1

0x5e98,	// (0x0004c95c) fep_china_uni_eep_pane_t1

0x5c1e,	// (0x0004c6e2) aid_touch_area_size_smil_player

0xc96a,	// (0x0005342e) lc0_clock_pane

0xc9a5,	// (0x00053469) status_pane_g5_ParamLimits

0xc9a5,	// (0x00053469) status_pane_g5

0x8d86,	// (0x0004f84a) popup_keymap_window

0xc983,	// (0x00053447) status_icon_pane

0xb09f,	// (0x00051b63) cell_ai5_widget_pane_g3_ParamLimits

0xb0b3,	// (0x00051b77) cell_ai5_widget_pane_g4_ParamLimits

0xb0bf,	// (0x00051b83) cell_ai5_widget_pane_g5_ParamLimits

0xb0e3,	// (0x00051ba7) cell_ai5_widget_pane_g8_ParamLimits

0xb0e3,	// (0x00051ba7) cell_ai5_widget_pane_g8

0xb0f7,	// (0x00051bbb) cell_ai5_widget_pane_g9_ParamLimits

0xb0f7,	// (0x00051bbb) cell_ai5_widget_pane_g9

0xb10b,	// (0x00051bcf) cell_ai5_widget_pane_g10_ParamLimits

0xb10b,	// (0x00051bcf) cell_ai5_widget_pane_g10

0x5ea7,	// (0x0004c96b) status_icon_pane_g1

0xa775,	// (0x00051239) bg_popup_sub_pane_cp13

0x5eaf,	// (0x0004c973) popup_keymap_window_t1

0x8b95,	// (0x0004f659) control_pane_g6_ParamLimits

0x8b95,	// (0x0004f659) control_pane_g6

0x8ba2,	// (0x0004f666) control_pane_g7_ParamLimits

0x8ba2,	// (0x0004f666) control_pane_g7

0x8baf,	// (0x0004f673) control_pane_g8_ParamLimits

0x8baf,	// (0x0004f673) control_pane_g8

0xb248,	// (0x00051d0c) dt_sta_controll_pane_ParamLimits

0xb255,	// (0x00051d19) dt_sta_indi_pane_ParamLimits

0xb262,	// (0x00051d26) dt_sta_title_pane_ParamLimits

0xba58,	// (0x0005251c) aid_size_touch_scroll_bar_cale

0x0607,	// (0x000470cb) popup_discreet_window_ParamLimits

0x0607,	// (0x000470cb) popup_discreet_window

0x74ca,	// (0x0004df8e) popup_sk_window

0xd014,	// (0x00053ad8) bg_popup_sub_pane_cp28_ParamLimits

0xd014,	// (0x00053ad8) bg_popup_sub_pane_cp28

0x5ebd,	// (0x0004c981) popup_discreet_window_g1_ParamLimits

0x5ebd,	// (0x0004c981) popup_discreet_window_g1

0x5fe0,	// (0x0004caa4) popup_discreet_window_t1_ParamLimits

0x5fe0,	// (0x0004caa4) popup_discreet_window_t1

0x5ffe,	// (0x0004cac2) popup_discreet_window_t2_ParamLimits

0x5ffe,	// (0x0004cac2) popup_discreet_window_t2

0x0002,

0xfe0b,	// (0x000568cf) popup_discreet_window_t_ParamLimits

0xfe0b,	// (0x000568cf) popup_discreet_window_t

0x249b,	// (0x00048f5f) popup_sk_window_g1

0x24a5,	// (0x00048f69) popup_sk_window_g2

0x0001,

0xfe12,	// (0x000568d6) popup_sk_window_g

0x6050,	// (0x0004cb14) popup_sk_window_t1

0x605e,	// (0x0004cb22) popup_sk_window_t1_copy1

0xb08f,	// (0x00051b53) cell_ai5_widget_pane_g2_ParamLimits

0xb1b7,	// (0x00051c7b) cell_ai5_widget_pane_t9_ParamLimits

0xb1b7,	// (0x00051c7b) cell_ai5_widget_pane_t9

0xa775,	// (0x00051239) main_fep_fshwr2_pane

0xb2d1,	// (0x00051d95) aid_fshwr2_btn_pane

0xb2d9,	// (0x00051d9d) aid_fshwr2_syb_pane

0xb2e1,	// (0x00051da5) aid_fshwr2_txt_pane

0xb2e9,	// (0x00051dad) fshwr2_func_candi_pane

0xb2f3,	// (0x00051db7) fshwr2_hwr_syb_pane

0xb301,	// (0x00051dc5) fshwr2_icf_pane

0xa775,	// (0x00051239) fshwr2_icf_bg_pane

0xb30b,	// (0x00051dcf) fshwr2_icf_pane_t1_ParamLimits

0xb30b,	// (0x00051dcf) fshwr2_icf_pane_t1

0xe833,	// (0x000552f7) fshwr2_func_candi_pane_g1

0x6080,	// (0x0004cb44) fshwr2_func_candi_row_pane_ParamLimits

0x6080,	// (0x0004cb44) fshwr2_func_candi_row_pane

0xb323,	// (0x00051de7) cell_fshwr2_syb_pane_ParamLimits

0xb323,	// (0x00051de7) cell_fshwr2_syb_pane

0xe9da,	// (0x0005549e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9da,	// (0x0005549e) fshwr2_hwr_syb_pane_g1

0xa775,	// (0x00051239) bg_popup_call_pane_cp01

0x6091,	// (0x0004cb55) fshwr2_func_candi_cell_pane_ParamLimits

0x6091,	// (0x0004cb55) fshwr2_func_candi_cell_pane

0x60c2,	// (0x0004cb86) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x60c2,	// (0x0004cb86) fshwr2_func_candi_cell_bg_pane

0x60dc,	// (0x0004cba0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x60dc,	// (0x0004cba0) fshwr2_func_candi_cell_pane_g1

0x6104,	// (0x0004cbc8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6104,	// (0x0004cbc8) fshwr2_func_candi_cell_pane_t1

0xa775,	// (0x00051239) bg_button_pane_cp08

0xc53b,	// (0x00052fff) cell_fshwr2_syb_bg_pane

0xb33d,	// (0x00051e01) cell_fshwr2_syb_bg_pane_g1

0xb345,	// (0x00051e09) cell_fshwr2_syb_bg_pane_t1

0xbb16,	// (0x000525da) main_tmo_pane

0x985f,	// (0x00050323) uni_indicator_pane_g1_ParamLimits

0x9874,	// (0x00050338) uni_indicator_pane_g2_ParamLimits

0x9889,	// (0x0005034d) uni_indicator_pane_g3_ParamLimits

0xda64,	// (0x00054528) uni_indicator_pane_g4_ParamLimits

0xda64,	// (0x00054528) uni_indicator_pane_g4

0xda78,	// (0x0005453c) uni_indicator_pane_g5_ParamLimits

0xda78,	// (0x0005453c) uni_indicator_pane_g5

0xda8c,	// (0x00054550) uni_indicator_pane_g6_ParamLimits

0xda8c,	// (0x00054550) uni_indicator_pane_g6

0xf949,	// (0x0005640d) uni_indicator_pane_g_ParamLimits

0xa303,	// (0x00050dc7) popup_tmo_note_window_ParamLimits

0xa303,	// (0x00050dc7) popup_tmo_note_window

0xa775,	// (0x00051239) fshwr2_bg_pane

0x60f5,	// (0x0004cbb9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x60f5,	// (0x0004cbb9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe17,	// (0x000568db) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe17,	// (0x000568db) fshwr2_func_candi_cell_pane_g

0xe833,	// (0x000552f7) bg_popup_window_pane_cp01

0x6117,	// (0x0004cbdb) bg_popup_window_pane_g1_cp01

0x6120,	// (0x0004cbe4) bg_popup_window_pane_cp22_ParamLimits

0x6120,	// (0x0004cbe4) bg_popup_window_pane_cp22

0x612e,	// (0x0004cbf2) listscroll_tmo_link_pane_ParamLimits

0x612e,	// (0x0004cbf2) listscroll_tmo_link_pane

0x616e,	// (0x0004cc32) popup_tmo_note_window_g1_ParamLimits

0x616e,	// (0x0004cc32) popup_tmo_note_window_g1

0x617b,	// (0x0004cc3f) tmo_note_info_pane_ParamLimits

0x617b,	// (0x0004cc3f) tmo_note_info_pane

0xb354,	// (0x00051e18) list_tmo_note_info_pane_g1_ParamLimits

0xb354,	// (0x00051e18) list_tmo_note_info_pane_g1

0x6195,	// (0x0004cc59) list_tmo_note_info_pane_g2_ParamLimits

0x6195,	// (0x0004cc59) list_tmo_note_info_pane_g2

0x0001,

0xfe1c,	// (0x000568e0) list_tmo_note_info_pane_g_ParamLimits

0xfe1c,	// (0x000568e0) list_tmo_note_info_pane_g

0x61b1,	// (0x0004cc75) list_tmo_note_info_text_pane_ParamLimits

0x61b1,	// (0x0004cc75) list_tmo_note_info_text_pane

0x61f3,	// (0x0004ccb7) list_tmo_link_pane

0x6200,	// (0x0004ccc4) scroll_pane_cp20

0x620d,	// (0x0004ccd1) list_single_tmo_link_pane_ParamLimits

0x620d,	// (0x0004ccd1) list_single_tmo_link_pane

0x621d,	// (0x0004cce1) list_single_tmo_link_pane_t1

0x622b,	// (0x0004ccef) list_tmo_note_info_text_pane_t1_ParamLimits

0x622b,	// (0x0004ccef) list_tmo_note_info_text_pane_t1

0x86d2,	// (0x0004f196) aid_size_touch_scroll_bar_cp01_ParamLimits

0x86d2,	// (0x0004f196) aid_size_touch_scroll_bar_cp01

0x7971,	// (0x0004e435) aid_size_touch_slider_marker

0x74ba,	// (0x0004df7e) popup_settings_window_ParamLimits

0x74ba,	// (0x0004df7e) popup_settings_window

0x2dc5,	// (0x00049889) popup_candi_list_indi_window

0xc8b9,	// (0x0005337d) aid_touch_navi_pane_ParamLimits

0x1c73,	// (0x00048737) rs_clock_indi_pane

0x1c7c,	// (0x00048740) sctrl_sk_bottom_pane_ParamLimits

0x1c8d,	// (0x00048751) sctrl_sk_top_pane_ParamLimits

0x1d93,	// (0x00048857) popup_fep_tooltip_window

0x5d34,	// (0x0004c7f8) aid_size_cell_widget_grid_ParamLimits

0xb083,	// (0x00051b47) cell_ai5_widget_pane_g1_ParamLimits

0xb083,	// (0x00051b47) cell_ai5_widget_pane_g1

0xb0cb,	// (0x00051b8f) cell_ai5_widget_pane_g6_ParamLimits

0xb0d7,	// (0x00051b9b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfd9a,	// (0x0005685e) cell_ai5_widget_pane_g_ParamLimits

0xfd9a,	// (0x0005685e) cell_ai5_widget_pane_g

0xb1db,	// (0x00051c9f) cell_ai5_widget_pane_t10_ParamLimits

0xb1db,	// (0x00051c9f) cell_ai5_widget_pane_t10

0xb1ed,	// (0x00051cb1) grid_ai5_widget_pane_ParamLimits

0xb223,	// (0x00051ce7) cell_contacts_ai5_widget_pane_ParamLimits

0xb223,	// (0x00051ce7) cell_contacts_ai5_widget_pane

0x6013,	// (0x0004cad7) popup_discreet_window_t3_ParamLimits

0x6013,	// (0x0004cad7) popup_discreet_window_t3

0x606c,	// (0x0004cb30) popup_fshwr2_char_preview_window_ParamLimits

0x606c,	// (0x0004cb30) popup_fshwr2_char_preview_window

0xb36b,	// (0x00051e2f) tmo_note_info_pane_t1

0xb641,	// (0x00052105) tmo_note_info_pane_t2

0xb658,	// (0x0005211c) tmo_note_info_pane_t3

0x61cf,	// (0x0004cc93) tmo_note_info_pane_t4

0x61e1,	// (0x0004cca5) tmo_note_info_pane_t5

0x0004,

0xfe21,	// (0x000568e5) tmo_note_info_pane_t

0x61f3,	// (0x0004ccb7) list_tmo_link_pane_ParamLimits

0x6200,	// (0x0004ccc4) scroll_pane_cp20_ParamLimits

0xa775,	// (0x00051239) bg_popup_fep_char_preview_window_cp01

0x6244,	// (0x0004cd08) popup_fshwr2_char_preview_window_t1

0x6252,	// (0x0004cd16) popup_candi_list_indi_window_g1

0x625b,	// (0x0004cd1f) bg_cell_contacts_ai5_widget_pane

0xb66d,	// (0x00052131) cell_contacts_ai5_widget_pane_g1

0xb681,	// (0x00052145) cell_contacts_ai5_widget_pane_g2

0xb690,	// (0x00052154) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe2c,	// (0x000568f0) cell_contacts_ai5_widget_pane_g

0xb6a3,	// (0x00052167) cell_contacts_ai5_widget_pane_t1

0xbb16,	// (0x000525da) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb71d,	// (0x000521e1) settings_container_pane

0xc53b,	// (0x00052fff) listscroll_set_pane_copy1

0xe250,	// (0x00054d14) scroll_pane_cp121_copy1

0x6267,	// (0x0004cd2b) set_content_pane_copy1

0xb729,	// (0x000521ed) aid_height_set_list_copy1_ParamLimits

0xb729,	// (0x000521ed) aid_height_set_list_copy1

0xd1ae,	// (0x00053c72) aid_size_parent_copy1_ParamLimits

0xd1ae,	// (0x00053c72) aid_size_parent_copy1

0xb735,	// (0x000521f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb735,	// (0x000521f9) button_value_adjust_pane_cp6_copy1

0xbc6e,	// (0x00052732) list_highlight_pane_cp2_copy1_ParamLimits

0xbc6e,	// (0x00052732) list_highlight_pane_cp2_copy1

0xb749,	// (0x0005220d) list_set_pane_copy1_ParamLimits

0xb749,	// (0x0005220d) list_set_pane_copy1

0xb6b8,	// (0x0005217c) main_pane_set_t1_copy1_ParamLimits

0xb6b8,	// (0x0005217c) main_pane_set_t1_copy1

0xb6f2,	// (0x000521b6) main_pane_set_t2_copy1_ParamLimits

0xb6f2,	// (0x000521b6) main_pane_set_t2_copy1

0xb7f6,	// (0x000522ba) main_pane_set_t3_copy1

0xb804,	// (0x000522c8) main_pane_set_t4_copy1

0xb711,	// (0x000521d5) set_content_pane_g1_copy1_ParamLimits

0xb711,	// (0x000521d5) set_content_pane_g1_copy1

0xb812,	// (0x000522d6) setting_code_pane_copy1

0x626f,	// (0x0004cd33) setting_slider_graphic_pane_copy1

0x626f,	// (0x0004cd33) setting_slider_pane_copy1

0x6279,	// (0x0004cd3d) setting_text_pane_copy1

0x6283,	// (0x0004cd47) setting_volume_pane_copy1

0xb81c,	// (0x000522e0) settings_code_pane_cp2_copy1

0xb824,	// (0x000522e8) settings_code_pane_cp_copy1_ParamLimits

0xb824,	// (0x000522e8) settings_code_pane_cp_copy1

0xb838,	// (0x000522fc) volume_set_pane_copy1

0xb840,	// (0x00052304) volume_set_pane_g10_copy1

0xb848,	// (0x0005230c) volume_set_pane_g1_copy1

0xb850,	// (0x00052314) volume_set_pane_g2_copy1

0xb858,	// (0x0005231c) volume_set_pane_g3_copy1

0xb860,	// (0x00052324) volume_set_pane_g4_copy1

0xb868,	// (0x0005232c) volume_set_pane_g5_copy1

0xb870,	// (0x00052334) volume_set_pane_g6_copy1

0xb878,	// (0x0005233c) volume_set_pane_g7_copy1

0xb880,	// (0x00052344) volume_set_pane_g8_copy1

0xb888,	// (0x0005234c) volume_set_pane_g9_copy1

0xa7e5,	// (0x000512a9) bg_set_opt_pane_cp_copy1_ParamLimits

0xa7e5,	// (0x000512a9) bg_set_opt_pane_cp_copy1

0x628c,	// (0x0004cd50) setting_slider_pane_t1_copy1_ParamLimits

0x628c,	// (0x0004cd50) setting_slider_pane_t1_copy1

0xb890,	// (0x00052354) setting_slider_pane_t2_copy1_ParamLimits

0xb890,	// (0x00052354) setting_slider_pane_t2_copy1

0xb8aa,	// (0x0005236e) setting_slider_pane_t3_copy1_ParamLimits

0xb8aa,	// (0x0005236e) setting_slider_pane_t3_copy1

0xb8c2,	// (0x00052386) slider_set_pane_copy1_ParamLimits

0xb8c2,	// (0x00052386) slider_set_pane_copy1

0xbb7d,	// (0x00052641) set_opt_bg_pane_g1_copy2

0xbb85,	// (0x00052649) set_opt_bg_pane_g2_copy2

0x62aa,	// (0x0004cd6e) set_opt_bg_pane_g3_copy2

0xbb95,	// (0x00052659) set_opt_bg_pane_g4_copy2

0xbb9d,	// (0x00052661) set_opt_bg_pane_g5_copy2

0xbba5,	// (0x00052669) set_opt_bg_pane_g6_copy2

0xb8d8,	// (0x0005239c) set_opt_bg_pane_g7_copy2

0x62b4,	// (0x0004cd78) set_opt_bg_pane_g8_copy2

0x62be,	// (0x0004cd82) set_opt_bg_pane_g9_copy2

0x24af,	// (0x00048f73) aid_size_touch_slider_mark_copy1_ParamLimits

0x24af,	// (0x00048f73) aid_size_touch_slider_mark_copy1

0x62c8,	// (0x0004cd8c) slider_set_pane_g1_copy1

0x24c3,	// (0x00048f87) slider_set_pane_g2_copy1

0x16a7,	// (0x0004816b) slider_set_pane_g3_copy1_ParamLimits

0x16a7,	// (0x0004816b) slider_set_pane_g3_copy1

0x16bb,	// (0x0004817f) slider_set_pane_g4_copy1_ParamLimits

0x16bb,	// (0x0004817f) slider_set_pane_g4_copy1

0x16d3,	// (0x00048197) slider_set_pane_g5_copy1_ParamLimits

0x16d3,	// (0x00048197) slider_set_pane_g5_copy1

0x16a7,	// (0x0004816b) slider_set_pane_g6_copy1_ParamLimits

0x16a7,	// (0x0004816b) slider_set_pane_g6_copy1

0x82c9,	// (0x0004ed8d) slider_set_pane_g7_copy1_ParamLimits

0x82c9,	// (0x0004ed8d) slider_set_pane_g7_copy1

0xa789,	// (0x0005124d) bg_set_opt_pane_cp2_copy1

0x62d1,	// (0x0004cd95) setting_slider_graphic_pane_g1_copy1

0xb8e0,	// (0x000523a4) setting_slider_graphic_pane_t1_copy1

0xb8f0,	// (0x000523b4) setting_slider_graphic_pane_t2_copy1

0xb900,	// (0x000523c4) slider_set_pane_cp_copy1

0x62e2,	// (0x0004cda6) input_focus_pane_cp1_copy1

0x62eb,	// (0x0004cdaf) list_set_text_pane_copy1

0x62f3,	// (0x0004cdb7) setting_text_pane_g1_copy1

0x37ab,	// (0x0004a26f) set_text_pane_t1_copy1

0x62e2,	// (0x0004cda6) input_focus_pane_cp2_copy1

0x62f3,	// (0x0004cdb7) setting_code_pane_g1_copy1

0xb908,	// (0x000523cc) setting_code_pane_t1_copy1

0x8a8f,	// (0x0004f553) list_set_graphic_pane_copy1

0xa789,	// (0x0005124d) bg_set_opt_pane_cp4_copy1

0x8aa1,	// (0x0004f565) list_set_graphic_pane_g1_copy1_ParamLimits

0x8aa1,	// (0x0004f565) list_set_graphic_pane_g1_copy1

0xb916,	// (0x000523da) list_set_graphic_pane_g2_copy1

0x8ab9,	// (0x0004f57d) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ab9,	// (0x0004f57d) list_set_graphic_pane_t1_copy1

0xe833,	// (0x000552f7) rs_clock_indi_pane_g1

0x62fc,	// (0x0004cdc0) rs_clock_indi_pane_t1

0x5e60,	// (0x0004c924) rs_indi_pane

0x630a,	// (0x0004cdce) rs_indi_pane_g1

0x6313,	// (0x0004cdd7) rs_indi_pane_g2

0x631c,	// (0x0004cde0) rs_indi_pane_g3

0x0002,

0xfe33,	// (0x000568f7) rs_indi_pane_g

0xc53b,	// (0x00052fff) bg_popup_preview_window_pane_cp03

0x6325,	// (0x0004cde9) popup_fep_tooltip_window_t1

0xf14f,	// (0x00055c13) popup_note2_window_g2_ParamLimits

0xf14f,	// (0x00055c13) popup_note2_window_g2

0x0001,

0x0098,	// (0x00046b5c) popup_note2_window_g_ParamLimits

0x0098,	// (0x00046b5c) popup_note2_window_g

0x496e,	// (0x0004b432) bg_popup_sub_pane_cp11_ParamLimits

0x497b,	// (0x0004b43f) cell_ai3_links_pane_g1_ParamLimits

0x4992,	// (0x0004b456) cell_ai3_links_pane_t1

0x37ab,	// (0x0004a26f) set_text_pane_t1_copy1_ParamLimits

0xc44c,	// (0x00052f10) cell_graphic_popup_pane_cp2_ParamLimits

0xc44c,	// (0x00052f10) cell_graphic_popup_pane_cp2

0x6333,	// (0x0004cdf7) cell_graphic_popup_pane_g1_cp2

0xb51f,	// (0x00051fe3) cell_graphic_popup_pane_g2_cp2

0x633b,	// (0x0004cdff) cell_graphic_popup_pane_g3_cp2

0x6343,	// (0x0004ce07) cell_graphic_popup_pane_t2_cp2

0xb530,	// (0x00051ff4) grid_highlight_pane_cp3_cp2

0xbe18,	// (0x000528dc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbb16,	// (0x000525da) main_tmo_pane_ParamLimits

0xa2f7,	// (0x00050dbb) popup_tmo_big_image_note_window

0xb073,	// (0x00051b37) cell_ai5_widget_list_pane

0xb07b,	// (0x00051b3f) cell_ai5_widget_lrg_icon_pane

0xb36b,	// (0x00051e2f) tmo_note_info_pane_t1_ParamLimits

0xb641,	// (0x00052105) tmo_note_info_pane_t2_ParamLimits

0xb658,	// (0x0005211c) tmo_note_info_pane_t3_ParamLimits

0x61cf,	// (0x0004cc93) tmo_note_info_pane_t4_ParamLimits

0x61e1,	// (0x0004cca5) tmo_note_info_pane_t5_ParamLimits

0xfe21,	// (0x000568e5) tmo_note_info_pane_t_ParamLimits

0xb71d,	// (0x000521e1) settings_container_pane_ParamLimits

0x62da,	// (0x0004cd9e) indicator_popup_pane_cp5

0x62da,	// (0x0004cd9e) indicator_popup_pane_cp6

0x8a8f,	// (0x0004f553) list_set_graphic_pane_copy1_ParamLimits

0xa775,	// (0x00051239) bg_popup_window_pane_cp23

0x6351,	// (0x0004ce15) popup_tmo_big_image_note_window_g1

0x635b,	// (0x0004ce1f) popup_tmo_big_image_note_window_t1

0x636b,	// (0x0004ce2f) popup_tmo_big_image_note_window_t2

0x637b,	// (0x0004ce3f) popup_tmo_big_image_note_window_t3

0x0002,

0xfe3a,	// (0x000568fe) popup_tmo_big_image_note_window_t

0xb91e,	// (0x000523e2) cell_ai5_widget_lrg_icon_pane_g1

0xb926,	// (0x000523ea) cell_ai5_widget_lrg_icon_pane_t1

0xb934,	// (0x000523f8) cell_ai5_widget_list_row_pane_ParamLimits

0xb934,	// (0x000523f8) cell_ai5_widget_list_row_pane

0xb94d,	// (0x00052411) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb94d,	// (0x00052411) cell_ai5_widget_list_row_pane_g1

0xb95a,	// (0x0005241e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb95a,	// (0x0005241e) cell_ai5_widget_list_row_pane_t1

0xb972,	// (0x00052436) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb972,	// (0x00052436) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe41,	// (0x00056905) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe41,	// (0x00056905) cell_ai5_widget_list_row_pane_t

0x052e,	// (0x00046ff2) main_fep_vtchi_ss_pane

0x638b,	// (0x0004ce4f) popup_fep_char_pre_window

0x6393,	// (0x0004ce57) popup_fep_ituss_window

0x639e,	// (0x0004ce62) popup_fep_vkbss_window

0x63a7,	// (0x0004ce6b) grid_vkbss_keypad_pane_ParamLimits

0x63a7,	// (0x0004ce6b) grid_vkbss_keypad_pane

0x63b7,	// (0x0004ce7b) ituss_keypad_pane

0x63bf,	// (0x0004ce83) aid_vkbss_key_offset_ParamLimits

0x63bf,	// (0x0004ce83) aid_vkbss_key_offset

0x63ce,	// (0x0004ce92) cell_vkbss_key_pane_ParamLimits

0x63ce,	// (0x0004ce92) cell_vkbss_key_pane

0x63e4,	// (0x0004cea8) bg_cell_vkbss_key_g1_ParamLimits

0x63e4,	// (0x0004cea8) bg_cell_vkbss_key_g1

0x63f0,	// (0x0004ceb4) cell_vkbss_key_3p_pane_ParamLimits

0x63f0,	// (0x0004ceb4) cell_vkbss_key_3p_pane

0x640a,	// (0x0004cece) cell_vkbss_key_g1_ParamLimits

0x640a,	// (0x0004cece) cell_vkbss_key_g1

0x6424,	// (0x0004cee8) cell_vkbss_key_t1_ParamLimits

0x6424,	// (0x0004cee8) cell_vkbss_key_t1

0x644f,	// (0x0004cf13) cell_ituss_key_pane_ParamLimits

0x644f,	// (0x0004cf13) cell_ituss_key_pane

0x645e,	// (0x0004cf22) bg_cell_ituss_key_g1_ParamLimits

0x645e,	// (0x0004cf22) bg_cell_ituss_key_g1

0x646a,	// (0x0004cf2e) cell_ituss_key_pane_g1_ParamLimits

0x646a,	// (0x0004cf2e) cell_ituss_key_pane_g1

0x6476,	// (0x0004cf3a) cell_ituss_key_pane_g2_ParamLimits

0x6476,	// (0x0004cf3a) cell_ituss_key_pane_g2

0x0001,

0xfe46,	// (0x0005690a) cell_ituss_key_pane_g_ParamLimits

0xfe46,	// (0x0005690a) cell_ituss_key_pane_g

0x6489,	// (0x0004cf4d) cell_ituss_key_t1_ParamLimits

0x6489,	// (0x0004cf4d) cell_ituss_key_t1

0x64a7,	// (0x0004cf6b) cell_ituss_key_t2_ParamLimits

0x64a7,	// (0x0004cf6b) cell_ituss_key_t2

0x64c6,	// (0x0004cf8a) cell_ituss_key_t3_ParamLimits

0x64c6,	// (0x0004cf8a) cell_ituss_key_t3

0x64e5,	// (0x0004cfa9) cell_ituss_key_t4_ParamLimits

0x64e5,	// (0x0004cfa9) cell_ituss_key_t4

0x0003,

0xfe4b,	// (0x0005690f) cell_ituss_key_t_ParamLimits

0xfe4b,	// (0x0005690f) cell_ituss_key_t

0x6504,	// (0x0004cfc8) cell_vkbss_key_3p_pane_g1

0x650c,	// (0x0004cfd0) cell_vkbss_key_3p_pane_g2

0x6514,	// (0x0004cfd8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe54,	// (0x00056918) cell_vkbss_key_3p_pane_g

0xa775,	// (0x00051239) bg_popup_fep_char_preview_window_cp02

0x651c,	// (0x0004cfe0) popup_fep_char_pre_window_t1

0xb069,	// (0x00051b2d) main_ai5_sk_pane

0x625b,	// (0x0004cd1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb66d,	// (0x00052131) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb681,	// (0x00052145) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb690,	// (0x00052154) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe2c,	// (0x000568f0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb6a3,	// (0x00052167) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbb16,	// (0x000525da) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb984,	// (0x00052448) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
