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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00035e6b };

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
0x979c,	// (0x0003f607) Screen

0x97a8,	// (0x0003f613) application_window_ParamLimits

0x97a8,	// (0x0003f613) application_window

0x8898,	// (0x0003e703) screen_g1

0x97e0,	// (0x0003f64b) area_bottom_pane_ParamLimits

0x97e0,	// (0x0003f64b) area_bottom_pane

0xeb68,	// (0x000449d3) area_top_pane_ParamLimits

0xeb68,	// (0x000449d3) area_top_pane

0xec06,	// (0x00044a71) main_pane_ParamLimits

0xec06,	// (0x00044a71) main_pane

0x88a2,	// (0x0003e70d) misc_graphics

0xc10f,	// (0x00041f7a) battery_pane_ParamLimits

0xc10f,	// (0x00041f7a) battery_pane

0x397a,	// (0x000397e5) bg_status_flat_pane_g8

0x3982,	// (0x000397ed) bg_status_flat_pane_g9

0x2d7e,	// (0x00038be9) context_pane_ParamLimits

0x2d7e,	// (0x00038be9) context_pane

0xc286,	// (0x000420f1) navi_pane_ParamLimits

0xc286,	// (0x000420f1) navi_pane

0xc30e,	// (0x00042179) signal_pane_ParamLimits

0xc30e,	// (0x00042179) signal_pane

0x0008,

0xf84d,	// (0x000456b8) bg_status_flat_pane_g

0xc39e,	// (0x00042209) status_pane_g1_ParamLimits

0xc39e,	// (0x00042209) status_pane_g1

0xc3b4,	// (0x0004221f) status_pane_g2_ParamLimits

0xc3b4,	// (0x0004221f) status_pane_g2

0x2fb5,	// (0x00038e20) status_pane_g3_ParamLimits

0x2fb5,	// (0x00038e20) status_pane_g3

0x0004,

0xf779,	// (0x000455e4) status_pane_g_ParamLimits

0xf779,	// (0x000455e4) status_pane_g

0xc3c0,	// (0x0004222b) title_pane_ParamLimits

0xc3c0,	// (0x0004222b) title_pane

0xc423,	// (0x0004228e) uni_indicator_pane_ParamLimits

0xc423,	// (0x0004228e) uni_indicator_pane

0x2be2,	// (0x00038a4d) bg_list_pane_ParamLimits

0x2be2,	// (0x00038a4d) bg_list_pane

0xa808,	// (0x00040673) find_pane

0x31ae,	// (0x00039019) listscroll_app_pane_ParamLimits

0x31ae,	// (0x00039019) listscroll_app_pane

0x2c16,	// (0x00038a81) listscroll_form_pane

0xa810,	// (0x0004067b) listscroll_gen_pane_ParamLimits

0xa810,	// (0x0004067b) listscroll_gen_pane

0x0363,	// (0x000361ce) listscroll_set_pane

0x4507,	// (0x0003a372) main_idle_act_pane

0x28db,	// (0x00038746) main_idle_trad_pane

0x28db,	// (0x00038746) main_list_empty_pane

0x2c0a,	// (0x00038a75) main_midp_pane

0x2c30,	// (0x00038a9b) main_pane_g1_ParamLimits

0x2c30,	// (0x00038a9b) main_pane_g1

0xa824,	// (0x0004068f) popup_ai_message_window_ParamLimits

0xa824,	// (0x0004068f) popup_ai_message_window

0xa8c4,	// (0x0004072f) popup_fep_china_uni_window_ParamLimits

0xa8c4,	// (0x0004072f) popup_fep_china_uni_window

0x048d,	// (0x000362f8) popup_fep_japan_candidate_window_ParamLimits

0x048d,	// (0x000362f8) popup_fep_japan_candidate_window

0x04b7,	// (0x00036322) popup_fep_japan_predictive_window_ParamLimits

0x04b7,	// (0x00036322) popup_fep_japan_predictive_window

0xa924,	// (0x0004078f) popup_find_window

0xa941,	// (0x000407ac) popup_grid_graphic_window_ParamLimits

0xa941,	// (0x000407ac) popup_grid_graphic_window

0x052a,	// (0x00036395) popup_large_graphic_colour_window

0xa9eb,	// (0x00040856) popup_menu_window_ParamLimits

0xa9eb,	// (0x00040856) popup_menu_window

0xabdb,	// (0x00040a46) popup_note_image_window

0xab9b,	// (0x00040a06) popup_note_wait_window_ParamLimits

0xab9b,	// (0x00040a06) popup_note_wait_window

0xabf3,	// (0x00040a5e) popup_note_window_ParamLimits

0xabf3,	// (0x00040a5e) popup_note_window

0xaca1,	// (0x00040b0c) popup_query_code_window_ParamLimits

0xaca1,	// (0x00040b0c) popup_query_code_window

0x0796,	// (0x00036601) popup_query_data_code_window_ParamLimits

0x0796,	// (0x00036601) popup_query_data_code_window

0xace1,	// (0x00040b4c) popup_query_data_window_ParamLimits

0xace1,	// (0x00040b4c) popup_query_data_window

0xad75,	// (0x00040be0) popup_query_sat_info_window_ParamLimits

0xad75,	// (0x00040be0) popup_query_sat_info_window

0xae20,	// (0x00040c8b) popup_snote_single_graphic_window_ParamLimits

0xae20,	// (0x00040c8b) popup_snote_single_graphic_window

0xae20,	// (0x00040c8b) popup_snote_single_text_window_ParamLimits

0xae20,	// (0x00040c8b) popup_snote_single_text_window

0x0831,	// (0x0003669c) popup_sub_window_general

0x0977,	// (0x000367e2) popup_window_general_ParamLimits

0x0977,	// (0x000367e2) popup_window_general

0x2c3e,	// (0x00038aa9) power_save_pane

0x01fe,	// (0x00036069) control_pane_g1_ParamLimits

0x01fe,	// (0x00036069) control_pane_g1

0x0221,	// (0x0003608c) control_pane_g2_ParamLimits

0x0221,	// (0x0003608c) control_pane_g2

0x2ba5,	// (0x00038a10) control_pane_g3_ParamLimits

0x2ba5,	// (0x00038a10) control_pane_g3

0x0007,

0xf761,	// (0x000455cc) control_pane_g_ParamLimits

0xf761,	// (0x000455cc) control_pane_g

0xa71f,	// (0x0004058a) control_pane_t1_ParamLimits

0xa71f,	// (0x0004058a) control_pane_t1

0xa76f,	// (0x000405da) control_pane_t2_ParamLimits

0xa76f,	// (0x000405da) control_pane_t2

0x0002,

0xf772,	// (0x000455dd) control_pane_t_ParamLimits

0xf772,	// (0x000455dd) control_pane_t

0x2aca,	// (0x00038935) navi_navi_volume_pane_cp1

0x2ad2,	// (0x0003893d) status_small_icon_pane

0x2ada,	// (0x00038945) status_small_pane_g1_ParamLimits

0x2ada,	// (0x00038945) status_small_pane_g1

0x2b0e,	// (0x00038979) status_small_pane_g2_ParamLimits

0x2b0e,	// (0x00038979) status_small_pane_g2

0x2b1a,	// (0x00038985) status_small_pane_g3_ParamLimits

0x2b1a,	// (0x00038985) status_small_pane_g3

0xa6d1,	// (0x0004053c) status_small_pane_g4_ParamLimits

0xa6d1,	// (0x0004053c) status_small_pane_g4

0xa6df,	// (0x0004054a) status_small_pane_g5_ParamLimits

0xa6df,	// (0x0004054a) status_small_pane_g5

0x2b40,	// (0x000389ab) status_small_pane_g6_ParamLimits

0x2b40,	// (0x000389ab) status_small_pane_g6

0x0007,

0xf750,	// (0x000455bb) status_small_pane_g_ParamLimits

0xf750,	// (0x000455bb) status_small_pane_g

0x2b6f,	// (0x000389da) status_small_pane_t1

0xa6f5,	// (0x00040560) status_small_wait_pane_ParamLimits

0xa6f5,	// (0x00040560) status_small_wait_pane

0xa50a,	// (0x00040375) aid_levels_signal_ParamLimits

0xa50a,	// (0x00040375) aid_levels_signal

0xa522,	// (0x0004038d) signal_pane_g1_ParamLimits

0xa522,	// (0x0004038d) signal_pane_g1

0xa53d,	// (0x000403a8) signal_pane_g2_ParamLimits

0xa53d,	// (0x000403a8) signal_pane_g2

0x0003,

0xf6e1,	// (0x0004554c) signal_pane_g_ParamLimits

0xf6e1,	// (0x0004554c) signal_pane_g

0x239e,	// (0x00038209) context_pane_g1

0x998a,	// (0x0003f7f5) title_pane_g1

0x99cd,	// (0x0003f838) title_pane_t1

0x8d20,	// (0x0003eb8b) title_pane_t2

0x8d46,	// (0x0003ebb1) title_pane_t3

0x0002,

0xf530,	// (0x0004539b) title_pane_t

0xc44b,	// (0x000422b6) aid_levels_battery_ParamLimits

0xc44b,	// (0x000422b6) aid_levels_battery

0xc467,	// (0x000422d2) battery_pane_g1_ParamLimits

0xc467,	// (0x000422d2) battery_pane_g1

0xc484,	// (0x000422ef) battery_pane_g2_ParamLimits

0xc484,	// (0x000422ef) battery_pane_g2

0x0001,

0xf784,	// (0x000455ef) battery_pane_g_ParamLimits

0xf784,	// (0x000455ef) battery_pane_g

0xc6b6,	// (0x00042521) uni_indicator_pane_g1

0xc6cc,	// (0x00042537) uni_indicator_pane_g2

0xc6e2,	// (0x0004254d) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x00045760) uni_indicator_pane_g

0x273a,	// (0x000385a5) navi_icon_pane_ParamLimits

0x273a,	// (0x000385a5) navi_icon_pane

0x2681,	// (0x000384ec) navi_midp_pane

0x2756,	// (0x000385c1) navi_navi_pane

0x2760,	// (0x000385cb) navi_text_pane_ParamLimits

0x2760,	// (0x000385cb) navi_text_pane

0x8898,	// (0x0003e703) status_small_wait_pane_g1

0xbca9,	// (0x00041b14) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0004575b) status_small_wait_pane_g

0xc655,	// (0x000424c0) navi_navi_icon_text_pane

0xc65d,	// (0x000424c8) navi_navi_pane_g1_ParamLimits

0xc65d,	// (0x000424c8) navi_navi_pane_g1

0xc66f,	// (0x000424da) navi_navi_pane_g2_ParamLimits

0xc66f,	// (0x000424da) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x00045729) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x00045729) navi_navi_pane_g

0x4003,	// (0x00039e6e) navi_navi_tabs_pane

0xc681,	// (0x000424ec) navi_navi_text_pane

0xc655,	// (0x000424c0) navi_navi_volume_pane

0xc643,	// (0x000424ae) navi_text_pane_t1

0xc637,	// (0x000424a2) navi_icon_pane_g1

0x3efa,	// (0x00039d65) navi_navi_text_pane_t1

0xb029,	// (0x00040e94) navi_navi_volume_pane_g1

0xb031,	// (0x00040e9c) volume_small_pane

0xc593,	// (0x000423fe) navi_navi_icon_text_pane_g1

0xc59b,	// (0x00042406) navi_navi_icon_text_pane_t1

0x2756,	// (0x000385c1) navi_tabs_2_long_pane

0x2756,	// (0x000385c1) navi_tabs_2_pane

0x2756,	// (0x000385c1) navi_tabs_3_long_pane

0x2756,	// (0x000385c1) navi_tabs_3_pane

0x2756,	// (0x000385c1) navi_tabs_4_pane

0x0c34,	// (0x00036a9f) tabs_2_active_pane_ParamLimits

0x0c34,	// (0x00036a9f) tabs_2_active_pane

0x0c44,	// (0x00036aaf) tabs_2_passive_pane_ParamLimits

0x0c44,	// (0x00036aaf) tabs_2_passive_pane

0x0c02,	// (0x00036a6d) tabs_3_active_pane_ParamLimits

0x0c02,	// (0x00036a6d) tabs_3_active_pane

0x0c12,	// (0x00036a7d) tabs_3_passive_pane_ParamLimits

0x0c12,	// (0x00036a7d) tabs_3_passive_pane

0x0c23,	// (0x00036a8e) tabs_3_passive_pane_cp_ParamLimits

0x0c23,	// (0x00036a8e) tabs_3_passive_pane_cp

0x0bb6,	// (0x00036a21) tabs_4_active_pane_ParamLimits

0x0bb6,	// (0x00036a21) tabs_4_active_pane

0x0bc9,	// (0x00036a34) tabs_4_passive_pane_ParamLimits

0x0bc9,	// (0x00036a34) tabs_4_passive_pane

0x0bda,	// (0x00036a45) tabs_4_passive_pane_cp_ParamLimits

0x0bda,	// (0x00036a45) tabs_4_passive_pane_cp

0x0beb,	// (0x00036a56) tabs_4_passive_pane_cp2_ParamLimits

0x0beb,	// (0x00036a56) tabs_4_passive_pane_cp2

0x0b92,	// (0x000369fd) tabs_2_long_active_pane_ParamLimits

0x0b92,	// (0x000369fd) tabs_2_long_active_pane

0x0ba4,	// (0x00036a0f) tabs_2_long_passive_pane_ParamLimits

0x0ba4,	// (0x00036a0f) tabs_2_long_passive_pane

0x0b53,	// (0x000369be) tabs_3_long_active_pane_ParamLimits

0x0b53,	// (0x000369be) tabs_3_long_active_pane

0x0b66,	// (0x000369d1) tabs_3_long_passive_pane_ParamLimits

0x0b66,	// (0x000369d1) tabs_3_long_passive_pane

0x0b7f,	// (0x000369ea) tabs_3_long_passive_pane_cp_ParamLimits

0x0b7f,	// (0x000369ea) tabs_3_long_passive_pane_cp

0x0af9,	// (0x00036964) volume_small_pane_g1

0xafd8,	// (0x00040e43) volume_small_pane_g2

0xafe1,	// (0x00040e4c) volume_small_pane_g3

0xafea,	// (0x00040e55) volume_small_pane_g4

0xaff3,	// (0x00040e5e) volume_small_pane_g5

0xaffc,	// (0x00040e67) volume_small_pane_g6

0xb005,	// (0x00040e70) volume_small_pane_g7

0xb00e,	// (0x00040e79) volume_small_pane_g8

0xb017,	// (0x00040e82) volume_small_pane_g9

0xb020,	// (0x00040e8b) volume_small_pane_g10

0x0009,

0xf88a,	// (0x000456f5) volume_small_pane_g

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp2_ParamLimits

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp2

0x9a59,	// (0x0003f8c4) tabs_3_active_pane_g1

0x9a61,	// (0x0003f8cc) tabs_3_active_pane_t1

0x8d94,	// (0x0003ebff) bg_passive_tab_pane_cp2_ParamLimits

0x8d94,	// (0x0003ebff) bg_passive_tab_pane_cp2

0x9a59,	// (0x0003f8c4) tabs_3_passive_pane_g1

0x9a61,	// (0x0003f8cc) tabs_3_passive_pane_t1

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp3_ParamLimits

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp3

0x9a73,	// (0x0003f8de) tabs_4_active_pane_g1

0x9a7b,	// (0x0003f8e6) tabs_4_active_pane_t1

0x8d94,	// (0x0003ebff) bg_passive_tab_pane_cp3_ParamLimits

0x8d94,	// (0x0003ebff) bg_passive_tab_pane_cp3

0x9a73,	// (0x0003f8de) tabs_4_1_passive_pane_g1

0x9a7b,	// (0x0003f8e6) tabs_4_1_passive_pane_t1

0x2c0a,	// (0x00038a75) list_highlight_pane_cp2

0xc775,	// (0x000425e0) list_set_pane_ParamLimits

0xc775,	// (0x000425e0) list_set_pane

0xc837,	// (0x000426a2) main_pane_set_t1_ParamLimits

0xc837,	// (0x000426a2) main_pane_set_t1

0xc857,	// (0x000426c2) main_pane_set_t2_ParamLimits

0xc857,	// (0x000426c2) main_pane_set_t2

0xc86b,	// (0x000426d6) main_pane_set_t3_ParamLimits

0xc86b,	// (0x000426d6) main_pane_set_t3

0xc87f,	// (0x000426ea) main_pane_set_t4_ParamLimits

0xc87f,	// (0x000426ea) main_pane_set_t4

0x0003,

0xf95a,	// (0x000457c5) main_pane_set_t_ParamLimits

0xf95a,	// (0x000457c5) main_pane_set_t

0xc893,	// (0x000426fe) setting_code_pane

0x4655,	// (0x0003a4c0) setting_slider_graphic_pane

0x4655,	// (0x0003a4c0) setting_slider_pane

0x4655,	// (0x0003a4c0) setting_text_pane

0x4655,	// (0x0003a4c0) setting_volume_pane

0xed15,	// (0x00044b80) volume_set_pane

0x8d58,	// (0x0003ebc3) bg_set_opt_pane_cp

0xed1f,	// (0x00044b8a) setting_slider_pane_t1

0xed38,	// (0x00044ba3) setting_slider_pane_t2

0xed52,	// (0x00044bbd) setting_slider_pane_t3

0x0002,

0xf537,	// (0x000453a2) setting_slider_pane_t

0xed6a,	// (0x00044bd5) slider_set_pane

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp2

0x8d66,	// (0x0003ebd1) setting_slider_graphic_pane_g1

0xed80,	// (0x00044beb) setting_slider_graphic_pane_t1

0xed90,	// (0x00044bfb) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x000453a9) setting_slider_graphic_pane_t

0xeda0,	// (0x00044c0b) slider_set_pane_cp

0x88a2,	// (0x0003e70d) input_focus_pane_cp1

0x44ee,	// (0x0003a359) list_set_text_pane

0x8898,	// (0x0003e703) setting_text_pane_g1

0x88a2,	// (0x0003e70d) input_focus_pane_cp2

0x8898,	// (0x0003e703) setting_code_pane_g1

0x8d6f,	// (0x0003ebda) setting_code_pane_t1

0xd363,	// (0x000431ce) set_text_pane_t1_ParamLimits

0xd363,	// (0x000431ce) set_text_pane_t1

0xc042,	// (0x00041ead) set_opt_bg_pane_g1

0xc04a,	// (0x00041eb5) set_opt_bg_pane_g2

0x44c6,	// (0x0003a331) set_opt_bg_pane_g3

0xc05a,	// (0x00041ec5) set_opt_bg_pane_g4

0xc062,	// (0x00041ecd) set_opt_bg_pane_g5

0xc06a,	// (0x00041ed5) set_opt_bg_pane_g6

0x44d0,	// (0x0003a33b) set_opt_bg_pane_g7

0x44da,	// (0x0003a345) set_opt_bg_pane_g8

0x44e4,	// (0x0003a34f) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x000457b2) set_opt_bg_pane_g

0x44b9,	// (0x0003a324) slider_set_pane_g1

0x0d05,	// (0x00036b70) slider_set_pane_g2

0x0006,

0xf938,	// (0x000457a3) slider_set_pane_g

0x0c65,	// (0x00036ad0) volume_set_pane_g1

0x0c6f,	// (0x00036ada) volume_set_pane_g2

0x0c79,	// (0x00036ae4) volume_set_pane_g3

0x0c83,	// (0x00036aee) volume_set_pane_g4

0x0c8d,	// (0x00036af8) volume_set_pane_g5

0x0c97,	// (0x00036b02) volume_set_pane_g6

0x0ca1,	// (0x00036b0c) volume_set_pane_g7

0x0cab,	// (0x00036b16) volume_set_pane_g8

0x0cb5,	// (0x00036b20) volume_set_pane_g9

0x0cbf,	// (0x00036b2a) volume_set_pane_g10

0x0009,

0xf910,	// (0x0004577b) volume_set_pane_g

0x9a8d,	// (0x0003f8f8) indicator_pane_ParamLimits

0x9a8d,	// (0x0003f8f8) indicator_pane

0x9ab9,	// (0x0003f924) main_idle_pane_g2_ParamLimits

0x9ab9,	// (0x0003f924) main_idle_pane_g2

0x9af1,	// (0x0003f95c) main_pane_idle_g1_ParamLimits

0x9af1,	// (0x0003f95c) main_pane_idle_g1

0x8d7d,	// (0x0003ebe8) popup_clock_digital_analogue_window_ParamLimits

0x8d7d,	// (0x0003ebe8) popup_clock_digital_analogue_window

0x9b1b,	// (0x0003f986) soft_indicator_pane_ParamLimits

0x9b1b,	// (0x0003f986) soft_indicator_pane

0x9b37,	// (0x0003f9a2) wallpaper_pane_ParamLimits

0x9b37,	// (0x0003f9a2) wallpaper_pane

0x8898,	// (0x0003e703) wallpaper_pane_g1

0x9b49,	// (0x0003f9b4) indicator_pane_g1_ParamLimits

0x9b49,	// (0x0003f9b4) indicator_pane_g1

0x4938,	// (0x0003a7a3) navi_navi_icon_text_pane_srt_g1

0xb9fb,	// (0x00041866) soft_indicator_pane_t1

0xba15,	// (0x00041880) aid_ps_area_pane

0x9b62,	// (0x0003f9cd) aid_ps_clock_pane

0xba26,	// (0x00041891) aid_ps_indicator_pane

0xba32,	// (0x0004189d) indicator_ps_pane_ParamLimits

0xba32,	// (0x0004189d) indicator_ps_pane

0xba41,	// (0x000418ac) power_save_pane_g1_ParamLimits

0xba41,	// (0x000418ac) power_save_pane_g1

0xba4d,	// (0x000418b8) power_save_pane_g2_ParamLimits

0xba4d,	// (0x000418b8) power_save_pane_g2

0xeaf9,	// (0x00044964) aid_navinavi_width_pane

0xba15,	// (0x00041880) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x000453ae) power_save_pane_g_ParamLimits

0xf543,	// (0x000453ae) power_save_pane_g

0xba5b,	// (0x000418c6) power_save_pane_t1_ParamLimits

0xba5b,	// (0x000418c6) power_save_pane_t1

0x9b62,	// (0x0003f9cd) aid_ps_clock_pane_ParamLimits

0xba26,	// (0x00041891) aid_ps_indicator_pane_ParamLimits

0xba6d,	// (0x000418d8) power_save_pane_t4_ParamLimits

0xba6d,	// (0x000418d8) power_save_pane_t4

0x0001,

0xf548,	// (0x000453b3) power_save_pane_t_ParamLimits

0xf548,	// (0x000453b3) power_save_pane_t

0xba97,	// (0x00041902) power_save_t3_ParamLimits

0xba97,	// (0x00041902) power_save_t3

0xba82,	// (0x000418ed) power_save_t2_ParamLimits

0xba82,	// (0x000418ed) power_save_t2

0xbaac,	// (0x00041917) indicator_ps_pane_g1

0x9b70,	// (0x0003f9db) ai_gene_pane_ParamLimits

0x9b70,	// (0x0003f9db) ai_gene_pane

0x9b87,	// (0x0003f9f2) ai_links_pane_ParamLimits

0x9b87,	// (0x0003f9f2) ai_links_pane

0x9b9f,	// (0x0003fa0a) indicator_pane_cp1_ParamLimits

0x9b9f,	// (0x0003fa0a) indicator_pane_cp1

0x9bae,	// (0x0003fa19) main_pane_idle_g1_cp_ParamLimits

0x9bae,	// (0x0003fa19) main_pane_idle_g1_cp

0xbab5,	// (0x00041920) popup_ai_links_title_window

0x9bc6,	// (0x0003fa31) soft_indicator_pane_cp1_ParamLimits

0x9bc6,	// (0x0003fa31) soft_indicator_pane_cp1

0x42b2,	// (0x0003a11d) ai_links_pane_g1

0x42bb,	// (0x0003a126) grid_ai_links_pane

0xc6ad,	// (0x00042518) ai_gene_pane_1

0x42a0,	// (0x0003a10b) ai_gene_pane_2

0x42a9,	// (0x0003a114) list_highlight_pane_cp4

0xc689,	// (0x000424f4) cell_ai_link_pane_ParamLimits

0xc689,	// (0x000424f4) cell_ai_link_pane

0x426f,	// (0x0003a0da) cell_ai_link_pane_g1

0xbca9,	// (0x00041b14) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x00045756) cell_ai_link_pane_g

0x88a2,	// (0x0003e70d) grid_highlight_cp2

0x88a2,	// (0x0003e70d) bg_popup_sub_pane_cp1

0xbacc,	// (0x00041937) popup_ai_links_title_window_t1

0x41bb,	// (0x0003a026) ai_gene_pane_1_g1_ParamLimits

0x41bb,	// (0x0003a026) ai_gene_pane_1_g1

0x41c7,	// (0x0003a032) ai_gene_pane_1_g2_ParamLimits

0x41c7,	// (0x0003a032) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0004574c) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0004574c) ai_gene_pane_1_g

0x41d4,	// (0x0003a03f) ai_gene_pane_1_t1_ParamLimits

0x41d4,	// (0x0003a03f) ai_gene_pane_1_t1

0x4208,	// (0x0003a073) grid_ai_soft_ind_pane

0x41a6,	// (0x0003a011) ai_gene_pane_2_t1_ParamLimits

0x41a6,	// (0x0003a011) ai_gene_pane_2_t1

0x9bda,	// (0x0003fa45) main_pane_empty_t1_ParamLimits

0x9bda,	// (0x0003fa45) main_pane_empty_t1

0x9bf2,	// (0x0003fa5d) main_pane_empty_t2_ParamLimits

0x9bf2,	// (0x0003fa5d) main_pane_empty_t2

0x9c07,	// (0x0003fa72) main_pane_empty_t3_ParamLimits

0x9c07,	// (0x0003fa72) main_pane_empty_t3

0x9c19,	// (0x0003fa84) main_pane_empty_t4_ParamLimits

0x9c19,	// (0x0003fa84) main_pane_empty_t4

0x9c2b,	// (0x0003fa96) main_pane_empty_t5_ParamLimits

0x9c2b,	// (0x0003fa96) main_pane_empty_t5

0x0004,

0xf54d,	// (0x000453b8) main_pane_empty_t_ParamLimits

0xf54d,	// (0x000453b8) main_pane_empty_t

0xeea2,	// (0x00044d0d) bg_popup_window_pane_ParamLimits

0xeea2,	// (0x00044d0d) bg_popup_window_pane

0x3f08,	// (0x00039d73) find_popup_pane_cp2_ParamLimits

0x3f08,	// (0x00039d73) find_popup_pane_cp2

0x3f14,	// (0x00039d7f) heading_pane_ParamLimits

0x3f14,	// (0x00039d7f) heading_pane

0x88a2,	// (0x0003e70d) bg_popup_sub_pane

0xc5b8,	// (0x00042423) bg_popup_window_pane_g1_ParamLimits

0xc5b8,	// (0x00042423) bg_popup_window_pane_g1

0xc5c7,	// (0x00042432) bg_popup_window_pane_g2_ParamLimits

0xc5c7,	// (0x00042432) bg_popup_window_pane_g2

0xc5d3,	// (0x0004243e) bg_popup_window_pane_g3_ParamLimits

0xc5d3,	// (0x0004243e) bg_popup_window_pane_g3

0xc5df,	// (0x0004244a) bg_popup_window_pane_g4_ParamLimits

0xc5df,	// (0x0004244a) bg_popup_window_pane_g4

0xc5ee,	// (0x00042459) bg_popup_window_pane_g5_ParamLimits

0xc5ee,	// (0x00042459) bg_popup_window_pane_g5

0xc5fe,	// (0x00042469) bg_popup_window_pane_g6_ParamLimits

0xc5fe,	// (0x00042469) bg_popup_window_pane_g6

0xc60a,	// (0x00042475) bg_popup_window_pane_g7_ParamLimits

0xc60a,	// (0x00042475) bg_popup_window_pane_g7

0xc619,	// (0x00042484) bg_popup_window_pane_g8_ParamLimits

0xc619,	// (0x00042484) bg_popup_window_pane_g8

0xc628,	// (0x00042493) bg_popup_window_pane_g9_ParamLimits

0xc628,	// (0x00042493) bg_popup_window_pane_g9

0x3eee,	// (0x00039d59) bg_popup_window_pane_g10_ParamLimits

0x3eee,	// (0x00039d59) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x00045714) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x00045714) bg_popup_window_pane_g

0x3e17,	// (0x00039c82) bg_popup_heading_pane_ParamLimits

0x3e17,	// (0x00039c82) bg_popup_heading_pane

0x0e30,	// (0x00036c9b) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e30,	// (0x00036c9b) tabs_4_passive_pane_cp_srt

0x0e42,	// (0x00036cad) tabs_4_passive_pane_srt_ParamLimits

0x3e2b,	// (0x00039c96) heading_pane_g2

0x0e42,	// (0x00036cad) tabs_4_passive_pane_srt

0x31ae,	// (0x00039019) bg_passive_tab_pane_cp3_srt_ParamLimits

0x31ae,	// (0x00039019) bg_passive_tab_pane_cp3_srt

0x3e33,	// (0x00039c9e) heading_pane_t1_ParamLimits

0x3e33,	// (0x00039c9e) heading_pane_t1

0x3e4a,	// (0x00039cb5) heading_pane_t2_ParamLimits

0x3e4a,	// (0x00039cb5) heading_pane_t2

0x0001,

0xf8a4,	// (0x0004570f) heading_pane_t_ParamLimits

0xf8a4,	// (0x0004570f) heading_pane_t

0x3942,	// (0x000397ad) bg_popup_heading_pane_g1

0x39f1,	// (0x0003985c) bg_popup_heading_pane_g2

0x39fb,	// (0x00039866) bg_popup_heading_pane_g3

0x3a05,	// (0x00039870) bg_popup_heading_pane_g4

0x3a0f,	// (0x0003987a) bg_popup_heading_pane_g5

0x3a19,	// (0x00039884) bg_popup_heading_pane_g6

0x3a21,	// (0x0003988c) bg_popup_heading_pane_g7

0x3a29,	// (0x00039894) bg_popup_heading_pane_g8

0x3a33,	// (0x0003989e) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x000456cb) bg_popup_heading_pane_g

0x313a,	// (0x00038fa5) bg_popup_sub_pane_g1

0x314a,	// (0x00038fb5) bg_popup_sub_pane_g2

0x3142,	// (0x00038fad) bg_popup_sub_pane_g3

0x315a,	// (0x00038fc5) bg_popup_sub_pane_g4

0x3152,	// (0x00038fbd) bg_popup_sub_pane_g5

0x3162,	// (0x00038fcd) bg_popup_sub_pane_g6

0x316a,	// (0x00038fd5) bg_popup_sub_pane_g7

0x317a,	// (0x00038fe5) bg_popup_sub_pane_g8

0x3172,	// (0x00038fdd) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x000456a5) bg_popup_sub_pane_g

0x8d94,	// (0x0003ebff) bg_popup_window_pane_cp5_ParamLimits

0x8d94,	// (0x0003ebff) bg_popup_window_pane_cp5

0xbae9,	// (0x00041954) popup_note_window_g1_ParamLimits

0xbae9,	// (0x00041954) popup_note_window_g1

0xbaf5,	// (0x00041960) popup_note_window_t1_ParamLimits

0xbaf5,	// (0x00041960) popup_note_window_t1

0xbb0b,	// (0x00041976) popup_note_window_t2_ParamLimits

0xbb0b,	// (0x00041976) popup_note_window_t2

0xbb21,	// (0x0004198c) popup_note_window_t3_ParamLimits

0xbb21,	// (0x0004198c) popup_note_window_t3

0xbb37,	// (0x000419a2) popup_note_window_t4_ParamLimits

0xbb37,	// (0x000419a2) popup_note_window_t4

0xbb5f,	// (0x000419ca) popup_note_window_t5_ParamLimits

0xbb5f,	// (0x000419ca) popup_note_window_t5

0x0004,

0xf558,	// (0x000453c3) popup_note_window_t_ParamLimits

0xf558,	// (0x000453c3) popup_note_window_t

0xbba9,	// (0x00041a14) bg_popup_window_pane_cp6_ParamLimits

0xbba9,	// (0x00041a14) bg_popup_window_pane_cp6

0x38be,	// (0x00039729) popup_note_image_window_g1_ParamLimits

0x38be,	// (0x00039729) popup_note_image_window_g1

0x38ca,	// (0x00039735) popup_note_image_window_g2_ParamLimits

0x38ca,	// (0x00039735) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x00045699) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x00045699) popup_note_image_window_g

0x38e3,	// (0x0003974e) popup_note_image_window_t1_ParamLimits

0x38e3,	// (0x0003974e) popup_note_image_window_t1

0x38fc,	// (0x00039767) popup_note_image_window_t2_ParamLimits

0x38fc,	// (0x00039767) popup_note_image_window_t2

0x3915,	// (0x00039780) popup_note_image_window_t3_ParamLimits

0x3915,	// (0x00039780) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0004569e) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0004569e) popup_note_image_window_t

0x377e,	// (0x000395e9) bg_popup_window_pane_cp7_ParamLimits

0x377e,	// (0x000395e9) bg_popup_window_pane_cp7

0x37ae,	// (0x00039619) popup_note_wait_window_g1_ParamLimits

0x37ae,	// (0x00039619) popup_note_wait_window_g1

0x37ba,	// (0x00039625) popup_note_wait_window_g2_ParamLimits

0x37ba,	// (0x00039625) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x00045687) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x00045687) popup_note_wait_window_g

0x37d2,	// (0x0003963d) popup_note_wait_window_t1_ParamLimits

0x37d2,	// (0x0003963d) popup_note_wait_window_t1

0x37f9,	// (0x00039664) popup_note_wait_window_t2_ParamLimits

0x37f9,	// (0x00039664) popup_note_wait_window_t2

0x3817,	// (0x00039682) popup_note_wait_window_t3_ParamLimits

0x3817,	// (0x00039682) popup_note_wait_window_t3

0x382a,	// (0x00039695) popup_note_wait_window_t4_ParamLimits

0x382a,	// (0x00039695) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0004568e) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0004568e) popup_note_wait_window_t

0x384f,	// (0x000396ba) wait_bar_pane_ParamLimits

0x384f,	// (0x000396ba) wait_bar_pane

0x88a2,	// (0x0003e70d) wait_anim_pane

0x88a2,	// (0x0003e70d) wait_border_pane

0x8898,	// (0x0003e703) wait_anim_pane_g1

0x8898,	// (0x0003e703) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x00045547) wait_anim_pane_g

0x3722,	// (0x0003958d) wait_border_pane_g1

0x372d,	// (0x00039598) wait_border_pane_g2

0x3736,	// (0x000395a1) wait_border_pane_g3

0x0002,

0xf815,	// (0x00045680) wait_border_pane_g

0x358c,	// (0x000393f7) bg_popup_window_pane_cp16_ParamLimits

0x358c,	// (0x000393f7) bg_popup_window_pane_cp16

0x368c,	// (0x000394f7) indicator_popup_pane_cp4_ParamLimits

0x368c,	// (0x000394f7) indicator_popup_pane_cp4

0x36a0,	// (0x0003950b) popup_query_data_window_t1_ParamLimits

0x36a0,	// (0x0003950b) popup_query_data_window_t1

0x36b2,	// (0x0003951d) popup_query_data_window_t2_ParamLimits

0x36b2,	// (0x0003951d) popup_query_data_window_t2

0x36cb,	// (0x00039536) popup_query_data_window_t3_ParamLimits

0x36cb,	// (0x00039536) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x00045679) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x00045679) popup_query_data_window_t

0x36e5,	// (0x00039550) query_popup_data_pane_ParamLimits

0x36e5,	// (0x00039550) query_popup_data_pane

0x36f9,	// (0x00039564) query_popup_data_pane_cp1_ParamLimits

0x36f9,	// (0x00039564) query_popup_data_pane_cp1

0x358c,	// (0x000393f7) bg_popup_window_pane_cp10_ParamLimits

0x358c,	// (0x000393f7) bg_popup_window_pane_cp10

0x35be,	// (0x00039429) indicator_popup_pane_ParamLimits

0x35be,	// (0x00039429) indicator_popup_pane

0x35e0,	// (0x0003944b) popup_query_code_window_t1_ParamLimits

0x35e0,	// (0x0003944b) popup_query_code_window_t1

0x35fa,	// (0x00039465) popup_query_code_window_t2_ParamLimits

0x35fa,	// (0x00039465) popup_query_code_window_t2

0x3643,	// (0x000394ae) popup_query_code_window_t3_ParamLimits

0x3643,	// (0x000394ae) popup_query_code_window_t3

0x0002,

0xf807,	// (0x00045672) popup_query_code_window_t_ParamLimits

0xf807,	// (0x00045672) popup_query_code_window_t

0x3672,	// (0x000394dd) query_popup_pane_ParamLimits

0x3672,	// (0x000394dd) query_popup_pane

0xbba9,	// (0x00041a14) bg_popup_window_pane_cp15_ParamLimits

0xbba9,	// (0x00041a14) bg_popup_window_pane_cp15

0xbbc9,	// (0x00041a34) indicator_popup_pane_cp1_ParamLimits

0xbbc9,	// (0x00041a34) indicator_popup_pane_cp1

0xbbdc,	// (0x00041a47) indicator_popup_pane_cp2_ParamLimits

0xbbdc,	// (0x00041a47) indicator_popup_pane_cp2

0xbbf7,	// (0x00041a62) popup_query_data_code_window_g1_ParamLimits

0xbbf7,	// (0x00041a62) popup_query_data_code_window_g1

0xbc0a,	// (0x00041a75) popup_query_data_code_window_t1_ParamLimits

0xbc0a,	// (0x00041a75) popup_query_data_code_window_t1

0xbc1c,	// (0x00041a87) popup_query_data_code_window_t2_ParamLimits

0xbc1c,	// (0x00041a87) popup_query_data_code_window_t2

0xbc2e,	// (0x00041a99) popup_query_data_code_window_t3_ParamLimits

0xbc2e,	// (0x00041a99) popup_query_data_code_window_t3

0xbc44,	// (0x00041aaf) popup_query_data_code_window_t4_ParamLimits

0xbc44,	// (0x00041aaf) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x000453ce) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x000453ce) popup_query_data_code_window_t

0x09e5,	// (0x00036850) list_single_midp_graphic_pane_g3

0xbc5e,	// (0x00041ac9) query_popup_data_pane_cp2_ParamLimits

0xbc71,	// (0x00041adc) query_popup_pane_cp2_ParamLimits

0xbc71,	// (0x00041adc) query_popup_pane_cp2

0x88a2,	// (0x0003e70d) bg_popup_window_pane_cp11

0x3570,	// (0x000393db) heading_pane_cp5

0x3578,	// (0x000393e3) listscroll_popup_info_pane

0x88a2,	// (0x0003e70d) input_focus_pane_cp3

0xbc8c,	// (0x00041af7) query_popup_pane_t1

0xbc9a,	// (0x00041b05) list_popup_info_pane_ParamLimits

0xbc9a,	// (0x00041b05) list_popup_info_pane

0xbca9,	// (0x00041b14) listscroll_popup_info_pane_g1

0xbcb1,	// (0x00041b1c) scroll_pane_cp7

0xbcbb,	// (0x00041b26) popup_info_list_pane_t1_ParamLimits

0xbcbb,	// (0x00041b26) popup_info_list_pane_t1

0xbcd5,	// (0x00041b40) popup_info_list_pane_t2_ParamLimits

0xbcd5,	// (0x00041b40) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x000453d7) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x000453d7) popup_info_list_pane_t

0x88a2,	// (0x0003e70d) bg_popup_window_pane_cp12

0x4952,	// (0x0003a7bd) find_popup_pane

0x8d58,	// (0x0003ebc3) bg_popup_window_pane_cp3

0xbcef,	// (0x00041b5a) heading_pane_cp3

0xbcfe,	// (0x00041b69) listscroll_popup_graphic_pane

0x88a2,	// (0x0003e70d) bg_popup_window_pane_cp4

0x9c8d,	// (0x0003faf8) heading_pane_cp4

0xbd0e,	// (0x00041b79) listscroll_popup_colour_pane

0x9c97,	// (0x0003fb02) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9c97,	// (0x0003fb02) cell_large_graphic_colour_none_popup_pane

0x9cab,	// (0x0003fb16) grid_large_graphic_colour_popup_pane_ParamLimits

0x9cab,	// (0x0003fb16) grid_large_graphic_colour_popup_pane

0x9cd3,	// (0x0003fb3e) listscroll_popup_colour_pane_g1_ParamLimits

0x9cd3,	// (0x0003fb3e) listscroll_popup_colour_pane_g1

0x9cea,	// (0x0003fb55) listscroll_popup_colour_pane_g2_ParamLimits

0x9cea,	// (0x0003fb55) listscroll_popup_colour_pane_g2

0x9d01,	// (0x0003fb6c) listscroll_popup_colour_pane_g3_ParamLimits

0x9d01,	// (0x0003fb6c) listscroll_popup_colour_pane_g3

0x9d11,	// (0x0003fb7c) listscroll_popup_colour_pane_g4_ParamLimits

0x9d11,	// (0x0003fb7c) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x000453dc) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x000453dc) listscroll_popup_colour_pane_g

0xbd16,	// (0x00041b81) scroll_pane_cp6_ParamLimits

0xbd16,	// (0x00041b81) scroll_pane_cp6

0x9d21,	// (0x0003fb8c) cell_large_graphic_colour_popup_pane_ParamLimits

0x9d21,	// (0x0003fb8c) cell_large_graphic_colour_popup_pane

0xbd28,	// (0x00041b93) cell_large_graphic_colour_none_popup_pane_t1

0x88a2,	// (0x0003e70d) grid_highlight_pane_cp5

0xbd37,	// (0x00041ba2) cell_large_graphic_colour_popup_pane_g1

0xbd3f,	// (0x00041baa) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x000453e5) cell_large_graphic_colour_popup_pane_g

0xbd47,	// (0x00041bb2) cell_large_graphic_colour_popup_pane_g2_copy1

0xbd50,	// (0x00041bbb) grid_highlight_pane_cp4

0xbd58,	// (0x00041bc3) bg_popup_window_pane_cp8_ParamLimits

0xbd58,	// (0x00041bc3) bg_popup_window_pane_cp8

0xbd73,	// (0x00041bde) popup_snote_single_text_window_g1_ParamLimits

0xbd73,	// (0x00041bde) popup_snote_single_text_window_g1

0xbd85,	// (0x00041bf0) popup_snote_single_text_window_t1_ParamLimits

0xbd85,	// (0x00041bf0) popup_snote_single_text_window_t1

0xbd98,	// (0x00041c03) popup_snote_single_text_window_t2_ParamLimits

0xbd98,	// (0x00041c03) popup_snote_single_text_window_t2

0xbdab,	// (0x00041c16) popup_snote_single_text_window_t3_ParamLimits

0xbdab,	// (0x00041c16) popup_snote_single_text_window_t3

0xbde4,	// (0x00041c4f) popup_snote_single_text_window_t4_ParamLimits

0xbde4,	// (0x00041c4f) popup_snote_single_text_window_t4

0xbe18,	// (0x00041c83) popup_snote_single_text_window_t5_ParamLimits

0xbe18,	// (0x00041c83) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x000453ea) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x000453ea) popup_snote_single_text_window_t

0xbe47,	// (0x00041cb2) bg_popup_window_pane_cp9_ParamLimits

0xbe47,	// (0x00041cb2) bg_popup_window_pane_cp9

0xbd73,	// (0x00041bde) popup_snote_single_graphic_window_g1_ParamLimits

0xbd73,	// (0x00041bde) popup_snote_single_graphic_window_g1

0xbe55,	// (0x00041cc0) popup_snote_single_graphic_window_g2_ParamLimits

0xbe55,	// (0x00041cc0) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x000453f5) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x000453f5) popup_snote_single_graphic_window_g

0xbe61,	// (0x00041ccc) popup_snote_single_graphic_window_t1_ParamLimits

0xbe61,	// (0x00041ccc) popup_snote_single_graphic_window_t1

0xbe74,	// (0x00041cdf) popup_snote_single_graphic_window_t2_ParamLimits

0xbe74,	// (0x00041cdf) popup_snote_single_graphic_window_t2

0xbe87,	// (0x00041cf2) popup_snote_single_graphic_window_t3_ParamLimits

0xbe87,	// (0x00041cf2) popup_snote_single_graphic_window_t3

0xbec0,	// (0x00041d2b) popup_snote_single_graphic_window_t4_ParamLimits

0xbec0,	// (0x00041d2b) popup_snote_single_graphic_window_t4

0xbef4,	// (0x00041d5f) popup_snote_single_graphic_window_t5_ParamLimits

0xbef4,	// (0x00041d5f) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x000453fa) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x000453fa) popup_snote_single_graphic_window_t

0x4890,	// (0x0003a6fb) grid_graphic_popup_pane_ParamLimits

0x4890,	// (0x0003a6fb) grid_graphic_popup_pane

0x48be,	// (0x0003a729) listscroll_popup_graphic_pane_g1_ParamLimits

0x48be,	// (0x0003a729) listscroll_popup_graphic_pane_g1

0xc9a3,	// (0x0004280e) listscroll_popup_graphic_pane_g2_ParamLimits

0xc9a3,	// (0x0004280e) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x000457ef) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x000457ef) listscroll_popup_graphic_pane_g

0x48e6,	// (0x0003a751) scroll_pane_cp5

0xc957,	// (0x000427c2) cell_graphic_popup_pane_ParamLimits

0xc957,	// (0x000427c2) cell_graphic_popup_pane

0x4800,	// (0x0003a66b) cell_graphic_popup_pane_g1

0x4808,	// (0x0003a673) cell_graphic_popup_pane_g2

0xbd47,	// (0x00041bb2) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x000457e8) cell_graphic_popup_pane_g

0x4811,	// (0x0003a67c) cell_graphic_popup_pane_t2

0xbd50,	// (0x00041bbb) grid_highlight_pane_cp3

0xbf35,	// (0x00041da0) list_gen_pane_ParamLimits

0xbf35,	// (0x00041da0) list_gen_pane

0xbf5d,	// (0x00041dc8) scroll_pane

0xc90e,	// (0x00042779) bg_list_pane_g1_ParamLimits

0xc90e,	// (0x00042779) bg_list_pane_g1

0x4775,	// (0x0003a5e0) bg_list_pane_g2_ParamLimits

0x4775,	// (0x0003a5e0) bg_list_pane_g2

0x478a,	// (0x0003a5f5) bg_list_pane_g3_ParamLimits

0x478a,	// (0x0003a5f5) bg_list_pane_g3

0x479e,	// (0x0003a609) bg_list_pane_g4_ParamLimits

0x479e,	// (0x0003a609) bg_list_pane_g4

0xc92b,	// (0x00042796) bg_list_pane_g5_ParamLimits

0xc92b,	// (0x00042796) bg_list_pane_g5

0x0004,

0xf972,	// (0x000457dd) bg_list_pane_g_ParamLimits

0xf972,	// (0x000457dd) bg_list_pane_g

0xc8d1,	// (0x0004273c) list_double2_graphic_large_graphic_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double2_graphic_large_graphic_pane

0xc8d1,	// (0x0004273c) list_double2_graphic_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double2_graphic_pane

0xc8d1,	// (0x0004273c) list_double2_large_graphic_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double2_large_graphic_pane

0xc8d1,	// (0x0004273c) list_double2_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double2_pane

0xc8d1,	// (0x0004273c) list_double_graphic_heading_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_graphic_heading_pane

0xc8d1,	// (0x0004273c) list_double_graphic_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_graphic_pane

0xc8d1,	// (0x0004273c) list_double_heading_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_heading_pane

0xc8d1,	// (0x0004273c) list_double_large_graphic_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_large_graphic_pane

0xc8d1,	// (0x0004273c) list_double_number_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_number_pane

0xc8d1,	// (0x0004273c) list_double_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_pane

0xc8d1,	// (0x0004273c) list_double_time_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_double_time_pane

0xc8d1,	// (0x0004273c) list_setting_number_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_setting_number_pane

0xc8d1,	// (0x0004273c) list_setting_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_setting_pane

0xb078,	// (0x00040ee3) list_single_2graphic_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_2graphic_pane

0xb078,	// (0x00040ee3) list_single_graphic_heading_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_graphic_heading_pane

0xb078,	// (0x00040ee3) list_single_graphic_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_graphic_pane

0xb078,	// (0x00040ee3) list_single_heading_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_heading_pane

0xc8d1,	// (0x0004273c) list_single_large_graphic_pane_ParamLimits

0xc8d1,	// (0x0004273c) list_single_large_graphic_pane

0xb078,	// (0x00040ee3) list_single_number_heading_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_number_heading_pane

0xb078,	// (0x00040ee3) list_single_number_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_number_pane

0xb078,	// (0x00040ee3) list_single_pane_ParamLimits

0xb078,	// (0x00040ee3) list_single_pane

0x88a2,	// (0x0003e70d) list_highlight_pane_cp1

0xd37e,	// (0x000431e9) list_single_pane_g1_ParamLimits

0xd37e,	// (0x000431e9) list_single_pane_g1

0xd38a,	// (0x000431f5) list_single_pane_g2_ParamLimits

0xd38a,	// (0x000431f5) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0004540c) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0004540c) list_single_pane_g

0xd603,	// (0x0004346e) list_single_pane_t1_ParamLimits

0xd603,	// (0x0004346e) list_single_pane_t1

0xd37e,	// (0x000431e9) list_single_number_pane_g1_ParamLimits

0xd37e,	// (0x000431e9) list_single_number_pane_g1

0xd38a,	// (0x000431f5) list_single_number_pane_g2_ParamLimits

0xd38a,	// (0x000431f5) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0004540c) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0004540c) list_single_number_pane_g

0xd52a,	// (0x00043395) list_single_number_pane_t1_ParamLimits

0xd52a,	// (0x00043395) list_single_number_pane_t1

0xb03a,	// (0x00040ea5) list_single_number_pane_t2_ParamLimits

0xb03a,	// (0x00040ea5) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0004579e) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0004579e) list_single_number_pane_t

0x9d4c,	// (0x0003fbb7) list_single_graphic_pane_g1_ParamLimits

0x9d4c,	// (0x0003fbb7) list_single_graphic_pane_g1

0xd37e,	// (0x000431e9) list_single_graphic_pane_g2_ParamLimits

0xd37e,	// (0x000431e9) list_single_graphic_pane_g2

0xd38a,	// (0x000431f5) list_single_graphic_pane_g3_ParamLimits

0xd38a,	// (0x000431f5) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00045405) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00045405) list_single_graphic_pane_g

0x9d58,	// (0x0003fbc3) list_single_graphic_pane_t1_ParamLimits

0x9d58,	// (0x0003fbc3) list_single_graphic_pane_t1

0xd37e,	// (0x000431e9) list_single_heading_pane_g1_ParamLimits

0xd37e,	// (0x000431e9) list_single_heading_pane_g1

0xd38a,	// (0x000431f5) list_single_heading_pane_g2_ParamLimits

0xd38a,	// (0x000431f5) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0004540c) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0004540c) list_single_heading_pane_g

0xd396,	// (0x00043201) list_single_heading_pane_t1_ParamLimits

0xd396,	// (0x00043201) list_single_heading_pane_t1

0x9d6e,	// (0x0003fbd9) list_single_heading_pane_t2_ParamLimits

0x9d6e,	// (0x0003fbd9) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00045411) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00045411) list_single_heading_pane_t

0xd37e,	// (0x000431e9) list_single_number_heading_pane_g1_ParamLimits

0xd37e,	// (0x000431e9) list_single_number_heading_pane_g1

0xd38a,	// (0x000431f5) list_single_number_heading_pane_g2_ParamLimits

0xd38a,	// (0x000431f5) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0004540c) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0004540c) list_single_number_heading_pane_g

0xd396,	// (0x00043201) list_single_number_heading_pane_t1_ParamLimits

0xd396,	// (0x00043201) list_single_number_heading_pane_t1

0x9d80,	// (0x0003fbeb) list_single_number_heading_pane_t2_ParamLimits

0x9d80,	// (0x0003fbeb) list_single_number_heading_pane_t2

0x9d92,	// (0x0003fbfd) list_single_number_heading_pane_t3_ParamLimits

0x9d92,	// (0x0003fbfd) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00045416) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00045416) list_single_number_heading_pane_t

0xd3ac,	// (0x00043217) list_single_graphic_heading_pane_g1_ParamLimits

0xd3ac,	// (0x00043217) list_single_graphic_heading_pane_g1

0x9da4,	// (0x0003fc0f) list_single_graphic_heading_pane_g4_ParamLimits

0x9da4,	// (0x0003fc0f) list_single_graphic_heading_pane_g4

0xd38a,	// (0x000431f5) list_single_graphic_heading_pane_g5_ParamLimits

0xd38a,	// (0x000431f5) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0004541d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0004541d) list_single_graphic_heading_pane_g

0xd396,	// (0x00043201) list_single_graphic_heading_pane_t1_ParamLimits

0xd396,	// (0x00043201) list_single_graphic_heading_pane_t1

0x9db5,	// (0x0003fc20) list_single_graphic_heading_pane_t2_ParamLimits

0x9db5,	// (0x0003fc20) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00045424) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00045424) list_single_graphic_heading_pane_t

0xd3b8,	// (0x00043223) list_single_large_graphic_pane_g1_ParamLimits

0xd3b8,	// (0x00043223) list_single_large_graphic_pane_g1

0xd3c4,	// (0x0004322f) list_single_large_graphic_pane_g2_ParamLimits

0xd3c4,	// (0x0004322f) list_single_large_graphic_pane_g2

0xd3d0,	// (0x0004323b) list_single_large_graphic_pane_g3_ParamLimits

0xd3d0,	// (0x0004323b) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00045429) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00045429) list_single_large_graphic_pane_g

0x372d,	// (0x00039598) wait_border_pane_g2_copy1

0x9dc7,	// (0x0003fc32) list_single_large_graphic_pane_g4_cp2

0xd3dc,	// (0x00043247) list_single_large_graphic_pane_t1_ParamLimits

0xd3dc,	// (0x00043247) list_single_large_graphic_pane_t1

0x9dcf,	// (0x0003fc3a) list_double_pane_g1_ParamLimits

0x9dcf,	// (0x0003fc3a) list_double_pane_g1

0x9ddb,	// (0x0003fc46) list_double_pane_g2_ParamLimits

0x9ddb,	// (0x0003fc46) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00045430) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00045430) list_double_pane_g

0x9de7,	// (0x0003fc52) list_double_pane_t1_ParamLimits

0x9de7,	// (0x0003fc52) list_double_pane_t1

0x9dfd,	// (0x0003fc68) list_double_pane_t2_ParamLimits

0x9dfd,	// (0x0003fc68) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00045435) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00045435) list_double_pane_t

0x9e0f,	// (0x0003fc7a) list_double2_pane_g1_ParamLimits

0x9e0f,	// (0x0003fc7a) list_double2_pane_g1

0x9e20,	// (0x0003fc8b) list_double2_pane_g2_ParamLimits

0x9e20,	// (0x0003fc8b) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0004543a) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0004543a) list_double2_pane_g

0x9e2c,	// (0x0003fc97) list_double2_pane_t1_ParamLimits

0x9e2c,	// (0x0003fc97) list_double2_pane_t1

0x9e42,	// (0x0003fcad) list_double2_pane_t2_ParamLimits

0x9e42,	// (0x0003fcad) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0004543f) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0004543f) list_double2_pane_t

0x9dcf,	// (0x0003fc3a) list_double_number_pane_g1_ParamLimits

0x9dcf,	// (0x0003fc3a) list_double_number_pane_g1

0x9ddb,	// (0x0003fc46) list_double_number_pane_g2_ParamLimits

0x9ddb,	// (0x0003fc46) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00045430) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00045430) list_double_number_pane_g

0x9e54,	// (0x0003fcbf) list_double_number_pane_t1_ParamLimits

0x9e54,	// (0x0003fcbf) list_double_number_pane_t1

0x9e66,	// (0x0003fcd1) list_double_number_pane_t2_ParamLimits

0x9e66,	// (0x0003fcd1) list_double_number_pane_t2

0x9e7c,	// (0x0003fce7) list_double_number_pane_t3_ParamLimits

0x9e7c,	// (0x0003fce7) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00045444) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00045444) list_double_number_pane_t

0x9e8e,	// (0x0003fcf9) list_double_graphic_pane_g1_ParamLimits

0x9e8e,	// (0x0003fcf9) list_double_graphic_pane_g1

0x9e9a,	// (0x0003fd05) list_double_graphic_pane_g2_ParamLimits

0x9e9a,	// (0x0003fd05) list_double_graphic_pane_g2

0x9ea9,	// (0x0003fd14) list_double_graphic_pane_g3_ParamLimits

0x9ea9,	// (0x0003fd14) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0004544b) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0004544b) list_double_graphic_pane_g

0x9ec1,	// (0x0003fd2c) list_double_graphic_pane_t1_ParamLimits

0x9ec1,	// (0x0003fd2c) list_double_graphic_pane_t1

0x9ed7,	// (0x0003fd42) list_double_graphic_pane_t2_ParamLimits

0x9ed7,	// (0x0003fd42) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x00045454) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x00045454) list_double_graphic_pane_t

0x9ee9,	// (0x0003fd54) list_double2_graphic_pane_g1_ParamLimits

0x9ee9,	// (0x0003fd54) list_double2_graphic_pane_g1

0x9ef5,	// (0x0003fd60) list_double2_graphic_pane_g2_ParamLimits

0x9ef5,	// (0x0003fd60) list_double2_graphic_pane_g2

0x9f01,	// (0x0003fd6c) list_double2_graphic_pane_g3_ParamLimits

0x9f01,	// (0x0003fd6c) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x00045459) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x00045459) list_double2_graphic_pane_g

0x9f0d,	// (0x0003fd78) list_double2_graphic_pane_t1_ParamLimits

0x9f0d,	// (0x0003fd78) list_double2_graphic_pane_t1

0x9f23,	// (0x0003fd8e) list_double2_graphic_pane_t2_ParamLimits

0x9f23,	// (0x0003fd8e) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x00045460) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x00045460) list_double2_graphic_pane_t

0x9f35,	// (0x0003fda0) list_double_large_graphic_pane_g1_ParamLimits

0x9f35,	// (0x0003fda0) list_double_large_graphic_pane_g1

0x9f54,	// (0x0003fdbf) list_double_large_graphic_pane_g2_ParamLimits

0x9f54,	// (0x0003fdbf) list_double_large_graphic_pane_g2

0x9ddb,	// (0x0003fc46) list_double_large_graphic_pane_g3_ParamLimits

0x9ddb,	// (0x0003fc46) list_double_large_graphic_pane_g3

0x9f65,	// (0x0003fdd0) list_double_large_graphic_pane_g4_ParamLimits

0x9f65,	// (0x0003fdd0) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x00045465) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x00045465) list_double_large_graphic_pane_g

0x9f78,	// (0x0003fde3) list_double_large_graphic_pane_t1_ParamLimits

0x9f78,	// (0x0003fde3) list_double_large_graphic_pane_t1

0x9f91,	// (0x0003fdfc) list_double_large_graphic_pane_t2_ParamLimits

0x9f91,	// (0x0003fdfc) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x00045470) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x00045470) list_double_large_graphic_pane_t

0x9fa3,	// (0x0003fe0e) list_double2_large_graphic_pane_g1_ParamLimits

0x9fa3,	// (0x0003fe0e) list_double2_large_graphic_pane_g1

0x9e0f,	// (0x0003fc7a) list_double2_large_graphic_pane_g2_ParamLimits

0x9e0f,	// (0x0003fc7a) list_double2_large_graphic_pane_g2

0x9e20,	// (0x0003fc8b) list_double2_large_graphic_pane_g3_ParamLimits

0x9e20,	// (0x0003fc8b) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x00045475) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x00045475) list_double2_large_graphic_pane_g

0x9faf,	// (0x0003fe1a) list_double2_large_graphic_pane_t1_ParamLimits

0x9faf,	// (0x0003fe1a) list_double2_large_graphic_pane_t1

0x9fc5,	// (0x0003fe30) list_double2_large_graphic_pane_t2_ParamLimits

0x9fc5,	// (0x0003fe30) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0004547c) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0004547c) list_double2_large_graphic_pane_t

0x9fd7,	// (0x0003fe42) list_double_heading_pane_g1_ParamLimits

0x9fd7,	// (0x0003fe42) list_double_heading_pane_g1

0x9fe8,	// (0x0003fe53) list_double_heading_pane_g2_ParamLimits

0x9fe8,	// (0x0003fe53) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x00045481) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x00045481) list_double_heading_pane_g

0x9ff4,	// (0x0003fe5f) list_double_heading_pane_t1_ParamLimits

0x9ff4,	// (0x0003fe5f) list_double_heading_pane_t1

0x9e42,	// (0x0003fcad) list_double_heading_pane_t2_ParamLimits

0x9e42,	// (0x0003fcad) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x00045486) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x00045486) list_double_heading_pane_t

0xa00a,	// (0x0003fe75) list_double_graphic_heading_pane_g1_ParamLimits

0xa00a,	// (0x0003fe75) list_double_graphic_heading_pane_g1

0x9fd7,	// (0x0003fe42) list_double_graphic_heading_pane_g2_ParamLimits

0x9fd7,	// (0x0003fe42) list_double_graphic_heading_pane_g2

0x9fe8,	// (0x0003fe53) list_double_graphic_heading_pane_g3_ParamLimits

0x9fe8,	// (0x0003fe53) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0004548b) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0004548b) list_double_graphic_heading_pane_g

0xa016,	// (0x0003fe81) list_double_graphic_heading_pane_t1_ParamLimits

0xa016,	// (0x0003fe81) list_double_graphic_heading_pane_t1

0x9f23,	// (0x0003fd8e) list_double_graphic_heading_pane_t2_ParamLimits

0x9f23,	// (0x0003fd8e) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x00045492) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x00045492) list_double_graphic_heading_pane_t

0x9f54,	// (0x0003fdbf) list_double_time_pane_g1_ParamLimits

0x9f54,	// (0x0003fdbf) list_double_time_pane_g1

0x9ddb,	// (0x0003fc46) list_double_time_pane_g2_ParamLimits

0x9ddb,	// (0x0003fc46) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00045497) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00045497) list_double_time_pane_g

0xa02c,	// (0x0003fe97) list_double_time_pane_t1_ParamLimits

0xa02c,	// (0x0003fe97) list_double_time_pane_t1

0xa042,	// (0x0003fead) list_double_time_pane_t2_ParamLimits

0xa042,	// (0x0003fead) list_double_time_pane_t2

0xa054,	// (0x0003febf) list_double_time_pane_t3_ParamLimits

0xa054,	// (0x0003febf) list_double_time_pane_t3

0xa066,	// (0x0003fed1) list_double_time_pane_t4_ParamLimits

0xa066,	// (0x0003fed1) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0004549c) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0004549c) list_double_time_pane_t

0xa078,	// (0x0003fee3) list_setting_pane_g1_ParamLimits

0xa078,	// (0x0003fee3) list_setting_pane_g1

0xa084,	// (0x0003feef) list_setting_pane_g2_ParamLimits

0xa084,	// (0x0003feef) list_setting_pane_g2

0x0001,

0xf63a,	// (0x000454a5) list_setting_pane_g_ParamLimits

0xf63a,	// (0x000454a5) list_setting_pane_g

0xa090,	// (0x0003fefb) list_setting_pane_t1_ParamLimits

0xa090,	// (0x0003fefb) list_setting_pane_t1

0xa0aa,	// (0x0003ff15) list_setting_pane_t2_ParamLimits

0xa0aa,	// (0x0003ff15) list_setting_pane_t2

0x0002,

0xf63f,	// (0x000454aa) list_setting_pane_t_ParamLimits

0xf63f,	// (0x000454aa) list_setting_pane_t

0xa0e9,	// (0x0003ff54) set_value_pane_cp_ParamLimits

0xa0e9,	// (0x0003ff54) set_value_pane_cp

0xa0f7,	// (0x0003ff62) list_setting_number_pane_g1_ParamLimits

0xa0f7,	// (0x0003ff62) list_setting_number_pane_g1

0xa103,	// (0x0003ff6e) list_setting_number_pane_g2_ParamLimits

0xa103,	// (0x0003ff6e) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x000454b1) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x000454b1) list_setting_number_pane_g

0xa10f,	// (0x0003ff7a) list_setting_number_pane_t1_ParamLimits

0xa10f,	// (0x0003ff7a) list_setting_number_pane_t1

0xa128,	// (0x0003ff93) list_setting_number_pane_t2_ParamLimits

0xa128,	// (0x0003ff93) list_setting_number_pane_t2

0xa142,	// (0x0003ffad) list_setting_number_pane_t3_ParamLimits

0xa142,	// (0x0003ffad) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x000454b6) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x000454b6) list_setting_number_pane_t

0xa0e9,	// (0x0003ff54) set_value_pane_ParamLimits

0xa0e9,	// (0x0003ff54) set_value_pane

0xbf91,	// (0x00041dfc) bg_set_opt_pane_ParamLimits

0xbf91,	// (0x00041dfc) bg_set_opt_pane

0xd407,	// (0x00043272) set_value_pane_t1

0xbfb2,	// (0x00041e1d) slider_set_pane_cp3

0xbfbb,	// (0x00041e26) volume_small_pane_cp

0xbfc4,	// (0x00041e2f) list_form_gen_pane

0xbfcd,	// (0x00041e38) scroll_pane_cp8

0xa185,	// (0x0003fff0) form_field_data_pane_ParamLimits

0xa185,	// (0x0003fff0) form_field_data_pane

0xa1a0,	// (0x0004000b) form_field_data_wide_pane_ParamLimits

0xa1a0,	// (0x0004000b) form_field_data_wide_pane

0xd425,	// (0x00043290) form_field_popup_pane_ParamLimits

0xd425,	// (0x00043290) form_field_popup_pane

0xa1c2,	// (0x0004002d) form_field_popup_wide_pane_ParamLimits

0xa1c2,	// (0x0004002d) form_field_popup_wide_pane

0xd447,	// (0x000432b2) form_field_slider_pane_ParamLimits

0xd447,	// (0x000432b2) form_field_slider_pane

0xd45a,	// (0x000432c5) form_field_slider_wide_pane_ParamLimits

0xd45a,	// (0x000432c5) form_field_slider_wide_pane

0xbfde,	// (0x00041e49) data_form_pane

0xa1ed,	// (0x00040058) form_field_data_pane_t1

0xbfea,	// (0x00041e55) input_focus_pane

0xd46d,	// (0x000432d8) data_form_wide_pane

0xd48a,	// (0x000432f5) form_field_data_wide_pane_t1

0xbd65,	// (0x00041bd0) input_focus_pane_cp6

0xa207,	// (0x00040072) form_field_popup_pane_t1

0xbfea,	// (0x00041e55) input_focus_pane_cp7

0xc018,	// (0x00041e83) list_form_pane

0xd4b4,	// (0x0004331f) form_field_popup_wide_pane_t1

0xbfea,	// (0x00041e55) input_focus_pane_cp8

0xc024,	// (0x00041e8f) list_form_wide_pane

0xa229,	// (0x00040094) form_field_slider_pane_t1_ParamLimits

0xa229,	// (0x00040094) form_field_slider_pane_t1

0xa241,	// (0x000400ac) form_field_slider_pane_t2_ParamLimits

0xa241,	// (0x000400ac) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x000454c6) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x000454c6) form_field_slider_pane_t

0x8d94,	// (0x0003ebff) input_focus_pane_cp9_ParamLimits

0x8d94,	// (0x0003ebff) input_focus_pane_cp9

0xa256,	// (0x000400c1) slider_cont_pane_ParamLimits

0xa256,	// (0x000400c1) slider_cont_pane

0xc030,	// (0x00041e9b) form_field_slider_wide_pane_t1_ParamLimits

0xc030,	// (0x00041e9b) form_field_slider_wide_pane_t1

0xd4c9,	// (0x00043334) form_field_slider_wide_pane_t2_ParamLimits

0xd4c9,	// (0x00043334) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x000454cb) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x000454cb) form_field_slider_wide_pane_t

0x8d94,	// (0x0003ebff) input_focus_pane_cp10_ParamLimits

0x8d94,	// (0x0003ebff) input_focus_pane_cp10

0xa26a,	// (0x000400d5) slider_cont_pane_cp1_ParamLimits

0xa26a,	// (0x000400d5) slider_cont_pane_cp1

0xa27e,	// (0x000400e9) slider_form_pane_cp

0xc042,	// (0x00041ead) input_focus_pane_g1

0xc04a,	// (0x00041eb5) input_focus_pane_g2

0xc052,	// (0x00041ebd) input_focus_pane_g3

0xc05a,	// (0x00041ec5) input_focus_pane_g4

0xc062,	// (0x00041ecd) input_focus_pane_g5

0xc06a,	// (0x00041ed5) input_focus_pane_g6

0xc072,	// (0x00041edd) input_focus_pane_g7

0xc07a,	// (0x00041ee5) input_focus_pane_g8

0xc082,	// (0x00041eed) input_focus_pane_g9

0x8898,	// (0x0003e703) input_focus_pane_g10

0x0009,

0xf665,	// (0x000454d0) input_focus_pane_g

0x3736,	// (0x000395a1) wait_border_pane_g3_copy1

0xa286,	// (0x000400f1) data_form_pane_t1

0x8898,	// (0x0003e703) wait_anim_pane_g1_copy1

0xb04c,	// (0x00040eb7) data_form_wide_pane_t1

0xd4db,	// (0x00043346) list_form_graphic_pane_cp_ParamLimits

0xd4db,	// (0x00043346) list_form_graphic_pane_cp

0x467d,	// (0x0003a4e8) slider_form_pane_g1

0x4686,	// (0x0003a4f1) slider_form_pane_g2

0x0006,

0xf963,	// (0x000457ce) slider_form_pane_g

0xd4db,	// (0x00043346) list_form_graphic_pane_ParamLimits

0xd4db,	// (0x00043346) list_form_graphic_pane

0xd4ed,	// (0x00043358) list_form_graphic_pane_g1

0xd4f5,	// (0x00043360) list_form_graphic_pane_t1_ParamLimits

0xd4f5,	// (0x00043360) list_form_graphic_pane_t1

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp5_ParamLimits

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp5

0xa2a0,	// (0x0004010b) find_pane_g1

0xee5b,	// (0x00044cc6) input_find_pane

0xa2a9,	// (0x00040114) input_find_pane_g1_ParamLimits

0xa2a9,	// (0x00040114) input_find_pane_g1

0xa2b5,	// (0x00040120) input_find_pane_t1_ParamLimits

0xa2b5,	// (0x00040120) input_find_pane_t1

0xa2ca,	// (0x00040135) input_find_pane_t2_ParamLimits

0xa2ca,	// (0x00040135) input_find_pane_t2

0x0001,

0xf67a,	// (0x000454e5) input_find_pane_t_ParamLimits

0xf67a,	// (0x000454e5) input_find_pane_t

0xee64,	// (0x00044ccf) input_focus_pane_cp5_ParamLimits

0xee64,	// (0x00044ccf) input_focus_pane_cp5

0xee77,	// (0x00044ce2) bg_popup_window_pane_cp2_ParamLimits

0xee77,	// (0x00044ce2) bg_popup_window_pane_cp2

0xee84,	// (0x00044cef) listscroll_menu_pane_ParamLimits

0xee84,	// (0x00044cef) listscroll_menu_pane

0xa2eb,	// (0x00040156) popup_submenu_window_ParamLimits

0xa2eb,	// (0x00040156) popup_submenu_window

0xee90,	// (0x00044cfb) find_popup_pane_g1

0xee98,	// (0x00044d03) input_popup_find_pane_cp

0xeea2,	// (0x00044d0d) input_focus_pane_cp4_ParamLimits

0xeea2,	// (0x00044d0d) input_focus_pane_cp4

0xeeb0,	// (0x00044d1b) input_popup_find_pane_t1_ParamLimits

0xeeb0,	// (0x00044d1b) input_popup_find_pane_t1

0x88a2,	// (0x0003e70d) bg_popup_sub_pane_cp

0xeede,	// (0x00044d49) listscroll_popup_sub_pane

0xeee6,	// (0x00044d51) list_submenu_pane_ParamLimits

0xeee6,	// (0x00044d51) list_submenu_pane

0xeef7,	// (0x00044d62) scroll_pane_cp4

0xeeff,	// (0x00044d6a) list_single_popup_submenu_pane_ParamLimits

0xeeff,	// (0x00044d6a) list_single_popup_submenu_pane

0xef14,	// (0x00044d7f) list_single_popup_submenu_pane_g1

0xef1c,	// (0x00044d87) list_single_popup_submenu_pane_t1_ParamLimits

0xef1c,	// (0x00044d87) list_single_popup_submenu_pane_t1

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp1_ParamLimits

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp1

0xa329,	// (0x00040194) tabs_2_active_pane_g1

0xa331,	// (0x0004019c) tabs_2_active_pane_t1

0x8d94,	// (0x0003ebff) bg_passive_tab_pane_cp1_ParamLimits

0x8d94,	// (0x0003ebff) bg_passive_tab_pane_cp1

0xa329,	// (0x00040194) tabs_2_passive_pane_g1

0xa331,	// (0x0004019c) tabs_2_passive_pane_t1

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp4

0xa343,	// (0x000401ae) tabs_2_long_active_pane_t1

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp4

0x09ed,	// (0x00036858) list_single_midp_graphic_pane_g4_ParamLimits

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp5

0xa356,	// (0x000401c1) tabs_3_long_active_pane_t1

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp5

0x09ed,	// (0x00036858) list_single_midp_graphic_pane_g4

0x8d58,	// (0x0003ebc3) bg_popup_window_pane_cp13_ParamLimits

0x8d58,	// (0x0003ebc3) bg_popup_window_pane_cp13

0xef3a,	// (0x00044da5) listscroll_popup_fast_pane_ParamLimits

0xef3a,	// (0x00044da5) listscroll_popup_fast_pane

0xef49,	// (0x00044db4) grid_popup_fast_pane_ParamLimits

0xef49,	// (0x00044db4) grid_popup_fast_pane

0xef5b,	// (0x00044dc6) scroll_pane_cp9_ParamLimits

0xef5b,	// (0x00044dc6) scroll_pane_cp9

0x6005,	// (0x0003be70) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6005,	// (0x0003be70) list_single_graphic_hl_pane_t1_cp2

0xef7f,	// (0x00044dea) input_focus_pane_cp20_ParamLimits

0xef7f,	// (0x00044dea) input_focus_pane_cp20

0xef8d,	// (0x00044df8) query_popup_data_pane_t1_ParamLimits

0xef8d,	// (0x00044df8) query_popup_data_pane_t1

0xefa0,	// (0x00044e0b) query_popup_data_pane_t2_ParamLimits

0xefa0,	// (0x00044e0b) query_popup_data_pane_t2

0xefe6,	// (0x00044e51) query_popup_data_pane_t3_ParamLimits

0xefe6,	// (0x00044e51) query_popup_data_pane_t3

0xf027,	// (0x00044e92) query_popup_data_pane_t4_ParamLimits

0xf027,	// (0x00044e92) query_popup_data_pane_t4

0xf063,	// (0x00044ece) query_popup_data_pane_t5_ParamLimits

0xf063,	// (0x00044ece) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x000454ea) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x000454ea) query_popup_data_pane_t

0xc042,	// (0x00041ead) bg_set_opt_pane_g1

0xc04a,	// (0x00041eb5) bg_set_opt_pane_g2

0xc052,	// (0x00041ebd) bg_set_opt_pane_g3

0xc05a,	// (0x00041ec5) bg_set_opt_pane_g4

0xc062,	// (0x00041ecd) bg_set_opt_pane_g5

0xc06a,	// (0x00041ed5) bg_set_opt_pane_g6

0xc072,	// (0x00041edd) bg_set_opt_pane_g7

0xc07a,	// (0x00041ee5) bg_set_opt_pane_g8

0xc082,	// (0x00041eed) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x000454f5) bg_set_opt_pane_g

0x0014,	// (0x00035e7f) control_top_pane_stacon_ParamLimits

0x0014,	// (0x00035e7f) control_top_pane_stacon

0x0067,	// (0x00035ed2) signal_pane_stacon_ParamLimits

0x0067,	// (0x00035ed2) signal_pane_stacon

0x2560,	// (0x000383cb) stacon_top_pane_g1_ParamLimits

0x2560,	// (0x000383cb) stacon_top_pane_g1

0x008c,	// (0x00035ef7) title_pane_stacon_ParamLimits

0x008c,	// (0x00035ef7) title_pane_stacon

0x00b6,	// (0x00035f21) uni_indicator_pane_stacon_ParamLimits

0x00b6,	// (0x00035f21) uni_indicator_pane_stacon

0x00cb,	// (0x00035f36) battery_pane_stacon_ParamLimits

0x00cb,	// (0x00035f36) battery_pane_stacon

0x010f,	// (0x00035f7a) control_bottom_pane_stacon_ParamLimits

0x010f,	// (0x00035f7a) control_bottom_pane_stacon

0x0132,	// (0x00035f9d) navi_pane_stacon_ParamLimits

0x0132,	// (0x00035f9d) navi_pane_stacon

0x2582,	// (0x000383ed) stacon_bottom_pane_g1_ParamLimits

0x2582,	// (0x000383ed) stacon_bottom_pane_g1

0xf09a,	// (0x00044f05) aid_levels_signal_lsc_ParamLimits

0xf09a,	// (0x00044f05) aid_levels_signal_lsc

0xf0b1,	// (0x00044f1c) signal_pane_stacon_g1_ParamLimits

0xf0b1,	// (0x00044f1c) signal_pane_stacon_g1

0xf0c5,	// (0x00044f30) signal_pane_stacon_g2_ParamLimits

0xf0c5,	// (0x00044f30) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x00045508) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x00045508) signal_pane_stacon_g

0xf107,	// (0x00044f72) title_pane_stacon_t1_ParamLimits

0xf107,	// (0x00044f72) title_pane_stacon_t1

0xf12c,	// (0x00044f97) uni_indicator_pane_stacon_g1

0xf136,	// (0x00044fa1) uni_indicator_pane_stacon_g2

0xf140,	// (0x00044fab) uni_indicator_pane_stacon_g3

0xf14a,	// (0x00044fb5) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x00045514) uni_indicator_pane_stacon_g

0xf154,	// (0x00044fbf) control_top_pane_stacon_g1

0xf15c,	// (0x00044fc7) control_top_pane_stacon_t1_ParamLimits

0xf15c,	// (0x00044fc7) control_top_pane_stacon_t1

0xf193,	// (0x00044ffe) aid_levels_battery_lsc_ParamLimits

0xf193,	// (0x00044ffe) aid_levels_battery_lsc

0xf1ab,	// (0x00045016) battery_pane_stacon_g1_ParamLimits

0xf1ab,	// (0x00045016) battery_pane_stacon_g1

0xf1bd,	// (0x00045028) battery_pane_stacon_g2_ParamLimits

0xf1bd,	// (0x00045028) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x0004551d) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x0004551d) battery_pane_stacon_g

0xf1fb,	// (0x00045066) navi_icon_pane_stacon

0xf20f,	// (0x0004507a) navi_navi_pane_stacon

0xf1fb,	// (0x00045066) navi_text_pane_stacon

0xf225,	// (0x00045090) control_bottom_pane_stacon_g1

0xf22d,	// (0x00045098) control_bottom_pane_stacon_t1_ParamLimits

0xf22d,	// (0x00045098) control_bottom_pane_stacon_t1

0xa368,	// (0x000401d3) grid_app_pane_ParamLimits

0xa368,	// (0x000401d3) grid_app_pane

0xa3a0,	// (0x0004020b) scroll_pane_cp15_ParamLimits

0xa3a0,	// (0x0004020b) scroll_pane_cp15

0xa3b5,	// (0x00040220) cell_app_pane_ParamLimits

0xa3b5,	// (0x00040220) cell_app_pane

0xa400,	// (0x0004026b) cell_app_pane_g1_ParamLimits

0xa400,	// (0x0004026b) cell_app_pane_g1

0xf27e,	// (0x000450e9) cell_app_pane_g2_ParamLimits

0xf27e,	// (0x000450e9) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x00045522) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x00045522) cell_app_pane_g

0xa424,	// (0x0004028f) cell_app_pane_t1_ParamLimits

0xa424,	// (0x0004028f) cell_app_pane_t1

0xf28a,	// (0x000450f5) grid_highlight_pane_ParamLimits

0xf28a,	// (0x000450f5) grid_highlight_pane

0xc042,	// (0x00041ead) cell_highlight_pane_g1

0xc04a,	// (0x00041eb5) cell_highlight_pane_g2

0xc052,	// (0x00041ebd) cell_highlight_pane_g3

0xc05a,	// (0x00041ec5) cell_highlight_pane_g4

0xc062,	// (0x00041ecd) cell_highlight_pane_g5

0xc06a,	// (0x00041ed5) cell_highlight_pane_g6

0xc072,	// (0x00041edd) cell_highlight_pane_g7

0xc07a,	// (0x00041ee5) cell_highlight_pane_g8

0xc082,	// (0x00041eed) cell_highlight_pane_g9

0x8898,	// (0x0003e703) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x000454d0) cell_highlight_pane_g

0xf2a5,	// (0x00045110) bg_scroll_pane

0xf2c4,	// (0x0004512f) scroll_handle_pane

0xf315,	// (0x00045180) scroll_bg_pane_g1

0xf32a,	// (0x00045195) scroll_bg_pane_g2

0xf342,	// (0x000451ad) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x00045527) scroll_bg_pane_g

0xf357,	// (0x000451c2) scroll_handle_focus_pane_ParamLimits

0xf357,	// (0x000451c2) scroll_handle_focus_pane

0xf315,	// (0x00045180) scroll_handle_pane_g1

0xf364,	// (0x000451cf) scroll_handle_pane_g2

0xf342,	// (0x000451ad) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x0004552e) scroll_handle_pane_g

0xeea2,	// (0x00044d0d) bg_popup_sub_pane_cp21_ParamLimits

0xeea2,	// (0x00044d0d) bg_popup_sub_pane_cp21

0xf378,	// (0x000451e3) popup_fep_japan_predictive_window_t1_ParamLimits

0xf378,	// (0x000451e3) popup_fep_japan_predictive_window_t1

0xf38f,	// (0x000451fa) popup_fep_japan_predictive_window_t2_ParamLimits

0xf38f,	// (0x000451fa) popup_fep_japan_predictive_window_t2

0xf3c2,	// (0x0004522d) popup_fep_japan_predictive_window_t3_ParamLimits

0xf3c2,	// (0x0004522d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x00045535) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x00045535) popup_fep_japan_predictive_window_t

0x88a2,	// (0x0003e70d) bg_popup_sub_pane_cp23

0xf3f9,	// (0x00045264) listscroll_japin_cand_pane

0xf401,	// (0x0004526c) popup_fep_japan_candidate_window_t1

0xf40f,	// (0x0004527a) candidate_pane_ParamLimits

0xf40f,	// (0x0004527a) candidate_pane

0xf421,	// (0x0004528c) scroll_pane_cp30

0xf42b,	// (0x00045296) list_single_popup_jap_candidate_pane_ParamLimits

0xf42b,	// (0x00045296) list_single_popup_jap_candidate_pane

0x88a2,	// (0x0003e70d) list_highlight_pane_cp30

0xf43f,	// (0x000452aa) list_single_popup_jap_candidate_pane_t1

0xa45e,	// (0x000402c9) level_1_signal

0xa470,	// (0x000402db) level_2_signal

0xa483,	// (0x000402ee) level_3_signal

0xa496,	// (0x00040301) level_4_signal

0xa4a9,	// (0x00040314) level_5_signal

0xa4bc,	// (0x00040327) level_6_signal

0xa4cf,	// (0x0004033a) level_7_signal

0xa45e,	// (0x000402c9) level_1_battery

0xa470,	// (0x000402db) level_2_battery

0xa483,	// (0x000402ee) level_3_battery

0xa496,	// (0x00040301) level_4_battery

0xa4a9,	// (0x00040314) level_5_battery

0xa4bc,	// (0x00040327) level_6_battery

0xa4cf,	// (0x0004033a) level_7_battery

0x22aa,	// (0x00038115) list_menu_pane_ParamLimits

0x22aa,	// (0x00038115) list_menu_pane

0x22c0,	// (0x0003812b) scroll_pane_cp25_ParamLimits

0x22c0,	// (0x0003812b) scroll_pane_cp25

0x22d9,	// (0x00038144) list_double2_graphic_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double2_graphic_pane_cp2

0x22d9,	// (0x00038144) list_double2_large_graphic_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double2_large_graphic_pane_cp2

0x22d9,	// (0x00038144) list_double2_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double2_pane_cp2

0x22d9,	// (0x00038144) list_double_graphic_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double_graphic_pane_cp2

0x22d9,	// (0x00038144) list_double_large_graphic_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double_large_graphic_pane_cp2

0x22d9,	// (0x00038144) list_double_number_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double_number_pane_cp2

0x22d9,	// (0x00038144) list_double_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double_pane_cp2

0xa4e2,	// (0x0004034d) list_single_2graphic_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_2graphic_pane_cp2

0xa4e2,	// (0x0004034d) list_single_graphic_heading_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_graphic_heading_pane_cp2

0xa4e2,	// (0x0004034d) list_single_graphic_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_graphic_pane_cp2

0xa4e2,	// (0x0004034d) list_single_heading_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_heading_pane_cp2

0x231c,	// (0x00038187) list_single_large_graphic_pane_cp2_ParamLimits

0x231c,	// (0x00038187) list_single_large_graphic_pane_cp2

0xa4e2,	// (0x0004034d) list_single_number_heading_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_number_heading_pane_cp2

0xa4e2,	// (0x0004034d) list_single_number_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_number_pane_cp2

0xa4f6,	// (0x00040361) list_single_pane_cp2_ParamLimits

0xa4f6,	// (0x00040361) list_single_pane_cp2

0x23a7,	// (0x00038212) bg_popup_sub_pane_cp22

0xf4d7,	// (0x00045342) popup_side_volume_key_window_g1

0xf501,	// (0x0004536c) popup_side_volume_key_window_t1

0xf51f,	// (0x0004538a) volume_small_pane_cp1

0x8d94,	// (0x0003ebff) bg_popup_sub_pane_cp24_ParamLimits

0x8d94,	// (0x0003ebff) bg_popup_sub_pane_cp24

0x23bd,	// (0x00038228) fep_china_uni_candidate_pane_ParamLimits

0x23bd,	// (0x00038228) fep_china_uni_candidate_pane

0x23d1,	// (0x0003823c) fep_china_uni_entry_pane

0x23e1,	// (0x0003824c) popup_fep_china_uni_window_g1

0x23fd,	// (0x00038268) fep_china_uni_entry_pane_g1

0x2407,	// (0x00038272) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x00045566) fep_china_uni_entry_pane_g

0x2411,	// (0x0003827c) fep_entry_item_pane

0x241b,	// (0x00038286) fep_candidate_item_pane

0x2423,	// (0x0003828e) fep_china_uni_candidate_pane_g1

0x242d,	// (0x00038298) fep_china_uni_candidate_pane_g2

0x2435,	// (0x000382a0) fep_china_uni_candidate_pane_g3

0x243d,	// (0x000382a8) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x0004556b) fep_china_uni_candidate_pane_g

0x8898,	// (0x0003e703) fep_entry_item_pane_g1

0x2447,	// (0x000382b2) fep_entry_item_pane_t1_ParamLimits

0x2447,	// (0x000382b2) fep_entry_item_pane_t1

0x245d,	// (0x000382c8) fep_candidate_item_pane_t1_ParamLimits

0x245d,	// (0x000382c8) fep_candidate_item_pane_t1

0x2472,	// (0x000382dd) fep_candidate_item_pane_t2_ParamLimits

0x2472,	// (0x000382dd) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x00045574) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x00045574) fep_candidate_item_pane_t

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp31_ParamLimits

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp31

0x2484,	// (0x000382ef) level_1_signal_lsc

0x248d,	// (0x000382f8) level_2_signal_lsc

0x2496,	// (0x00038301) level_3_signal_lsc

0x249f,	// (0x0003830a) level_4_signal_lsc

0x24a8,	// (0x00038313) level_5_signal_lsc

0x24b1,	// (0x0003831c) level_6_signal_lsc

0x24ba,	// (0x00038325) level_7_signal_lsc

0x24ba,	// (0x00038325) level_1_battery_lsc

0x24c3,	// (0x0003832e) level_2_battery_lsc

0x24cc,	// (0x00038337) level_3_battery_lsc

0x24d5,	// (0x00038340) level_4_battery_lsc

0x24de,	// (0x00038349) level_5_battery_lsc

0x24e7,	// (0x00038352) level_6_battery_lsc

0x2484,	// (0x000382ef) level_7_battery_lsc

0x24f0,	// (0x0003835b) scroll_handle_focus_pane_g1

0x24f9,	// (0x00038364) scroll_handle_focus_pane_g2

0x2502,	// (0x0003836d) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x00045579) scroll_handle_focus_pane_g

0xa585,	// (0x000403f0) list_single_2graphic_pane_g1_ParamLimits

0xa585,	// (0x000403f0) list_single_2graphic_pane_g1

0x9da4,	// (0x0003fc0f) list_single_2graphic_pane_g2_ParamLimits

0x9da4,	// (0x0003fc0f) list_single_2graphic_pane_g2

0xd38a,	// (0x000431f5) list_single_2graphic_pane_g3_ParamLimits

0xd38a,	// (0x000431f5) list_single_2graphic_pane_g3

0xa591,	// (0x000403fc) list_single_2graphic_pane_g4_ParamLimits

0xa591,	// (0x000403fc) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x00045580) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x00045580) list_single_2graphic_pane_g

0xa59d,	// (0x00040408) list_single_2graphic_pane_t1_ParamLimits

0xa59d,	// (0x00040408) list_single_2graphic_pane_t1

0xa5cb,	// (0x00040436) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa5cb,	// (0x00040436) list_double2_graphic_large_graphic_pane_g1

0x9e0f,	// (0x0003fc7a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9e0f,	// (0x0003fc7a) list_double2_graphic_large_graphic_pane_g2

0x9e20,	// (0x0003fc8b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9e20,	// (0x0003fc8b) list_double2_graphic_large_graphic_pane_g3

0xa5dd,	// (0x00040448) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa5dd,	// (0x00040448) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x00045589) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x00045589) list_double2_graphic_large_graphic_pane_g

0xa5e9,	// (0x00040454) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa5e9,	// (0x00040454) list_double2_graphic_large_graphic_pane_t1

0xa5ff,	// (0x0004046a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa5ff,	// (0x0004046a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x00045592) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x00045592) list_double2_graphic_large_graphic_pane_t

0x2645,	// (0x000384b0) popup_fast_swap_window_ParamLimits

0x2645,	// (0x000384b0) popup_fast_swap_window

0x2663,	// (0x000384ce) popup_side_volume_key_window

0x2681,	// (0x000384ec) stacon_top_pane

0x268b,	// (0x000384f6) status_pane_ParamLimits

0x268b,	// (0x000384f6) status_pane

0x888e,	// (0x0003e6f9) status_small_pane

0x88a2,	// (0x0003e70d) control_pane

0x88a2,	// (0x0003e70d) stacon_bottom_pane

0xbfcd,	// (0x00041e38) scroll_pane_cp121

0xbfc4,	// (0x00041e2f) set_content_pane

0x250b,	// (0x00038376) bg_active_tab_pane_g1_cp1

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp1

0x251d,	// (0x00038388) bg_active_tab_pane_g3_cp1

0x250b,	// (0x00038376) bg_passive_tab_pane_g1_cp1

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp1

0x251d,	// (0x00038388) bg_passive_tab_pane_g3_cp1

0x2526,	// (0x00038391) bg_active_tab_pane_g1_cp2

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp2

0x252f,	// (0x0003839a) bg_active_tab_pane_g3_cp2

0x2526,	// (0x00038391) bg_passive_tab_pane_g1_cp2

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp2

0x252f,	// (0x0003839a) bg_passive_tab_pane_g3_cp2

0x2538,	// (0x000383a3) bg_active_tab_pane_g1_cp3

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp3

0x2541,	// (0x000383ac) bg_active_tab_pane_g3_cp3

0x2538,	// (0x000383a3) bg_passive_tab_pane_g1_cp3

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp3

0x2541,	// (0x000383ac) bg_passive_tab_pane_g3_cp3

0x254a,	// (0x000383b5) bg_active_tab_pane_g1_cp4

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp4

0x2555,	// (0x000383c0) bg_active_tab_pane_g3_cp4

0x254a,	// (0x000383b5) bg_passive_tab_pane_g1_cp4

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp4

0x2555,	// (0x000383c0) bg_passive_tab_pane_g3_cp4

0x259e,	// (0x00038409) bg_active_tab_pane_g1_cp5

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp5

0x25a7,	// (0x00038412) bg_active_tab_pane_g3_cp5

0x259e,	// (0x00038409) bg_passive_tab_pane_g1_cp5

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp5

0x25a7,	// (0x00038412) bg_passive_tab_pane_g3_cp5

0x4cb4,	// (0x0003ab1f) list_set_graphic_pane_ParamLimits

0x4cb4,	// (0x0003ab1f) list_set_graphic_pane

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp4

0x25c6,	// (0x00038431) list_set_graphic_pane_g1_ParamLimits

0x25c6,	// (0x00038431) list_set_graphic_pane_g1

0x25d2,	// (0x0003843d) list_set_graphic_pane_g2_ParamLimits

0x25d2,	// (0x0003843d) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x00045597) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x00045597) list_set_graphic_pane_g

0x0009,

0xfabd,	// (0x00045928) volume_small_pane_cp_g

0x25f6,	// (0x00038461) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x25f6,	// (0x00038461) list_double2_large_graphic_pane_g1_cp2

0x2604,	// (0x0003846f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2604,	// (0x0003846f) list_double2_large_graphic_pane_g2_cp2

0x2615,	// (0x00038480) list_double2_large_graphic_pane_g3_cp2

0x261d,	// (0x00038488) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x261d,	// (0x00038488) list_double2_large_graphic_pane_t1_cp2

0x2633,	// (0x0003849e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2633,	// (0x0003849e) list_double2_large_graphic_pane_t2_cp2

0x421a,	// (0x0003a085) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x421a,	// (0x0003a085) list_double_large_graphic_pane_g1_cp2

0x422d,	// (0x0003a098) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x422d,	// (0x0003a098) list_double_large_graphic_pane_g2_cp2

0x27a9,	// (0x00038614) list_double_large_graphic_pane_g3_cp2

0x423e,	// (0x0003a0a9) list_double_large_graphic_pane_g4_cp

0x4246,	// (0x0003a0b1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4246,	// (0x0003a0b1) list_double_large_graphic_pane_t1_cp2

0x425d,	// (0x0003a0c8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x425d,	// (0x0003a0c8) list_double_large_graphic_pane_t2_cp2

0x2699,	// (0x00038504) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2699,	// (0x00038504) list_double2_graphic_pane_g1_cp2

0x26a7,	// (0x00038512) list_double2_graphic_pane_g2_cp2_ParamLimits

0x26a7,	// (0x00038512) list_double2_graphic_pane_g2_cp2

0x26b8,	// (0x00038523) list_double2_graphic_pane_g3_cp2

0x26c2,	// (0x0003852d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x26c2,	// (0x0003852d) list_double2_graphic_pane_t1_cp2

0x26d8,	// (0x00038543) list_double2_graphic_pane_t2_cp2_ParamLimits

0x26d8,	// (0x00038543) list_double2_graphic_pane_t2_cp2

0x26ea,	// (0x00038555) list_single_number_heading_pane_g1_cp2_ParamLimits

0x26ea,	// (0x00038555) list_single_number_heading_pane_g1_cp2

0x26f6,	// (0x00038561) list_single_number_heading_pane_g2_cp2

0x26fe,	// (0x00038569) list_single_number_heading_pane_t1_cp2_ParamLimits

0x26fe,	// (0x00038569) list_single_number_heading_pane_t1_cp2

0x2714,	// (0x0003857f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2714,	// (0x0003857f) list_single_number_heading_pane_t2_cp2

0x2728,	// (0x00038593) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2728,	// (0x00038593) list_single_number_heading_pane_t3_cp2

0x26ea,	// (0x00038555) list_single_heading_pane_g1_cp2_ParamLimits

0x26ea,	// (0x00038555) list_single_heading_pane_g1_cp2

0x26f6,	// (0x00038561) list_single_heading_pane_g2_cp2

0x26fe,	// (0x00038569) list_single_heading_pane_t1_cp2_ParamLimits

0x26fe,	// (0x00038569) list_single_heading_pane_t1_cp2

0x4014,	// (0x00039e7f) list_single_heading_pane_t2_cp2_ParamLimits

0x4014,	// (0x00039e7f) list_single_heading_pane_t2_cp2

0x3f5c,	// (0x00039dc7) list_double_graphic_pane_g1_cp2_ParamLimits

0x3f5c,	// (0x00039dc7) list_double_graphic_pane_g1_cp2

0x3f68,	// (0x00039dd3) list_double_graphic_pane_g2_cp2_ParamLimits

0x3f68,	// (0x00039dd3) list_double_graphic_pane_g2_cp2

0x3f77,	// (0x00039de2) list_double_graphic_pane_g3_cp2

0x3f7f,	// (0x00039dea) list_double_graphic_pane_t1_cp2_ParamLimits

0x3f7f,	// (0x00039dea) list_double_graphic_pane_t1_cp2

0x3f95,	// (0x00039e00) list_double_graphic_pane_t2_cp2_ParamLimits

0x3f95,	// (0x00039e00) list_double_graphic_pane_t2_cp2

0x279d,	// (0x00038608) list_double_number_pane_g1_cp2_ParamLimits

0x279d,	// (0x00038608) list_double_number_pane_g1_cp2

0x27a9,	// (0x00038614) list_double_number_pane_g2_cp2

0x3f20,	// (0x00039d8b) list_double_number_pane_t1_cp2_ParamLimits

0x3f20,	// (0x00039d8b) list_double_number_pane_t1_cp2

0x3f34,	// (0x00039d9f) list_double_number_pane_t2_cp2_ParamLimits

0x3f34,	// (0x00039d9f) list_double_number_pane_t2_cp2

0x3f4a,	// (0x00039db5) list_double_number_pane_t3_cp2_ParamLimits

0x3f4a,	// (0x00039db5) list_double_number_pane_t3_cp2

0x3e09,	// (0x00039c74) list_single_graphic_pane_g1_cp2_ParamLimits

0x3e09,	// (0x00039c74) list_single_graphic_pane_g1_cp2

0x2812,	// (0x0003867d) list_single_graphic_pane_g2_cp2_ParamLimits

0x2812,	// (0x0003867d) list_single_graphic_pane_g2_cp2

0x281e,	// (0x00038689) list_single_graphic_pane_g3_cp2

0x3ddf,	// (0x00039c4a) list_single_graphic_pane_t1_cp2_ParamLimits

0x3ddf,	// (0x00039c4a) list_single_graphic_pane_t1_cp2

0x2812,	// (0x0003867d) list_single_number_pane_g1_cp2_ParamLimits

0x2812,	// (0x0003867d) list_single_number_pane_g1_cp2

0x281e,	// (0x00038689) list_single_number_pane_g2_cp2

0x3ddf,	// (0x00039c4a) list_single_number_pane_t1_cp2_ParamLimits

0x3ddf,	// (0x00039c4a) list_single_number_pane_t1_cp2

0x3df5,	// (0x00039c60) list_single_number_pane_t2_cp2_ParamLimits

0x3df5,	// (0x00039c60) list_single_number_pane_t2_cp2

0x2604,	// (0x0003846f) list_double2_pane_g1_cp2_ParamLimits

0x2604,	// (0x0003846f) list_double2_pane_g1_cp2

0x2615,	// (0x00038480) list_double2_pane_g2_cp2

0x2775,	// (0x000385e0) list_double2_pane_t1_cp2_ParamLimits

0x2775,	// (0x000385e0) list_double2_pane_t1_cp2

0x278b,	// (0x000385f6) list_double2_pane_t2_cp2_ParamLimits

0x278b,	// (0x000385f6) list_double2_pane_t2_cp2

0x279d,	// (0x00038608) list_double_pane_g1_cp2_ParamLimits

0x279d,	// (0x00038608) list_double_pane_g1_cp2

0x27a9,	// (0x00038614) list_double_pane_g2_cp2

0x27b1,	// (0x0003861c) list_double_pane_t1_cp2_ParamLimits

0x27b1,	// (0x0003861c) list_double_pane_t1_cp2

0x27c7,	// (0x00038632) list_double_pane_t2_cp2_ParamLimits

0x27c7,	// (0x00038632) list_double_pane_t2_cp2

0x2802,	// (0x0003866d) list_single_pane_cp2_g3

0x2812,	// (0x0003867d) list_single_pane_g1_cp2_ParamLimits

0x2812,	// (0x0003867d) list_single_pane_g1_cp2

0x281e,	// (0x00038689) list_single_pane_g2_cp2

0x2826,	// (0x00038691) list_single_pane_t1_cp2_ParamLimits

0x2826,	// (0x00038691) list_single_pane_t1_cp2

0x283e,	// (0x000386a9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x283e,	// (0x000386a9) list_single_large_graphic_pane_g1_cp2

0x284c,	// (0x000386b7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x284c,	// (0x000386b7) list_single_large_graphic_pane_g2_cp2

0x2858,	// (0x000386c3) list_single_large_graphic_pane_g3_cp2

0x2860,	// (0x000386cb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2860,	// (0x000386cb) list_single_large_graphic_pane_g4_cp1

0x287a,	// (0x000386e5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x287a,	// (0x000386e5) list_single_large_graphic_pane_t1_cp2

0x3da9,	// (0x00039c14) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3da9,	// (0x00039c14) list_single_graphic_heading_pane_g1_cp2

0x3d76,	// (0x00039be1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3d76,	// (0x00039be1) list_single_graphic_heading_pane_g4_cp2

0x281e,	// (0x00038689) list_single_graphic_heading_pane_g5_cp2

0x3db5,	// (0x00039c20) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3db5,	// (0x00039c20) list_single_graphic_heading_pane_t1_cp2

0x3dcb,	// (0x00039c36) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3dcb,	// (0x00039c36) list_single_graphic_heading_pane_t2_cp2

0x3d6a,	// (0x00039bd5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3d6a,	// (0x00039bd5) list_single_2graphic_pane_g1_cp2

0x3d76,	// (0x00039be1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3d76,	// (0x00039be1) list_single_2graphic_pane_g2_cp2

0x281e,	// (0x00038689) list_single_2graphic_pane_g3_cp2

0x3d87,	// (0x00039bf2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3d87,	// (0x00039bf2) list_single_2graphic_pane_g4_cp2

0x3d93,	// (0x00039bfe) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3d93,	// (0x00039bfe) list_single_2graphic_pane_t1_cp2

0x8898,	// (0x0003e703) list_highlight_pane_g10_cp1

0x3942,	// (0x000397ad) list_highlight_pane_g1_cp1

0x394a,	// (0x000397b5) list_highlight_pane_g2_cp1

0x3952,	// (0x000397bd) list_highlight_pane_g3_cp1

0x395a,	// (0x000397c5) list_highlight_pane_g4_cp1

0x3962,	// (0x000397cd) list_highlight_pane_g5_cp1

0x396a,	// (0x000397d5) list_highlight_pane_g6_cp1

0x3972,	// (0x000397dd) list_highlight_pane_g7_cp1

0x397a,	// (0x000397e5) list_highlight_pane_g8_cp1

0x3982,	// (0x000397ed) list_highlight_pane_g9_cp1

0xc559,	// (0x000423c4) form_field_slider_pane_t3

0xc567,	// (0x000423d2) form_field_slider_pane_t4

0x387e,	// (0x000396e9) slider_form_pane_ParamLimits

0x387e,	// (0x000396e9) slider_form_pane

0x88a2,	// (0x0003e70d) control_abbreviations

0x88a2,	// (0x0003e70d) control_conventions

0x88a2,	// (0x0003e70d) control_definitions

0x88a2,	// (0x0003e70d) format_table_attribute

0x406a,	// (0x00039ed5) bg_popup_preview_window_pane_g9

0x88a2,	// (0x0003e70d) format_table_data2

0x88a2,	// (0x0003e70d) format_table_data3

0x88a2,	// (0x0003e70d) format_table_data_example

0x0008,

0x88a2,	// (0x0003e70d) intro_purpose

0xf8c3,	// (0x0004572e) bg_popup_preview_window_pane_g

0x88a2,	// (0x0003e70d) texts_category

0x88a2,	// (0x0003e70d) texts_graphics

0x2890,	// (0x000386fb) text_digital

0x289f,	// (0x0003870a) text_primary

0x28ae,	// (0x00038719) text_primary_small

0x28bd,	// (0x00038728) text_secondary

0x28cc,	// (0x00038737) text_title

0x47d4,	// (0x0003a63f) bg_passive_tab_pane_g1_cp3_srt

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp3_srt

0x47dd,	// (0x0003a648) bg_passive_tab_pane_g3_cp3_srt

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp3_srt_ParamLimits

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp3_srt

0x47e6,	// (0x0003a651) tabs_4_active_pane_srt_g1

0xc941,	// (0x000427ac) tabs_4_active_pane_srt_t1_ParamLimits

0xc941,	// (0x000427ac) tabs_4_active_pane_srt_t1

0x47d4,	// (0x0003a63f) bg_active_tab_pane_g1_cp3_copy1

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp3_copy1

0x47dd,	// (0x0003a648) bg_active_tab_pane_g3_cp3_copy1

0x8d58,	// (0x0003ebc3) tabs_2_long_active_pane_srt_ParamLimits

0x8d58,	// (0x0003ebc3) tabs_2_long_active_pane_srt

0x8d58,	// (0x0003ebc3) tabs_2_long_passive_pane_srt_ParamLimits

0x8d58,	// (0x0003ebc3) tabs_2_long_passive_pane_srt

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp4_srt

0x4494,	// (0x0003a2ff) bg_passive_tab_pane_g1_cp4_srt

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp4_srt

0x449d,	// (0x0003a308) bg_passive_tab_pane_g3_cp4_srt

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp4_srt_ParamLimits

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp4_srt

0xc739,	// (0x000425a4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc739,	// (0x000425a4) tabs_2_long_active_pane_srt_t1

0x4494,	// (0x0003a2ff) bg_active_tab_pane_g1_cp4_srt

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp4_srt

0x449d,	// (0x0003a308) bg_active_tab_pane_g3_cp4_srt

0x8d94,	// (0x0003ebff) tabs_3_long_active_pane_srt_ParamLimits

0x8d94,	// (0x0003ebff) tabs_3_long_active_pane_srt

0x8d94,	// (0x0003ebff) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8d94,	// (0x0003ebff) tabs_3_long_passive_pane_cp_srt

0x8d94,	// (0x0003ebff) tabs_3_long_passive_pane_srt_ParamLimits

0x8d94,	// (0x0003ebff) tabs_3_long_passive_pane_srt

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp5_srt

0x259e,	// (0x00038409) bg_passive_tab_pane_g1_cp5_srt

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp5_srt

0x25a7,	// (0x00038412) bg_passive_tab_pane_g3_cp5_srt

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp5_srt_ParamLimits

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp5_srt

0xc723,	// (0x0004258e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc723,	// (0x0004258e) tabs_3_long_active_pane_srt_t1

0x259e,	// (0x00038409) bg_active_tab_pane_g1_cp5_srt

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp5_srt

0x25a7,	// (0x00038412) bg_active_tab_pane_g3_cp5_srt

0x4474,	// (0x0003a2df) navi_text_pane_srt_t1

0x446c,	// (0x0003a2d7) navi_icon_pane_srt_g1

0x2aa4,	// (0x0003890f) midp_editing_number_pane_srt

0x28db,	// (0x00038746) midp_ticker_pane_srt

0x2aac,	// (0x00038917) midp_ticker_pane_srt_g1

0x2ab4,	// (0x0003891f) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x000455b6) midp_ticker_pane_srt_g

0x2abc,	// (0x00038927) midp_ticker_pane_srt_t1

0x445d,	// (0x0003a2c8) midp_editing_number_pane_t1_copy1

0xa611,	// (0x0004047c) listscroll_midp_pane

0xa611,	// (0x0004047c) midp_form_pane

0x2952,	// (0x000387bd) midp_info_popup_window_ParamLimits

0x2952,	// (0x000387bd) midp_info_popup_window

0xeea2,	// (0x00044d0d) bg_popup_sub_pane_cp50_ParamLimits

0xeea2,	// (0x00044d0d) bg_popup_sub_pane_cp50

0x3564,	// (0x000393cf) listscroll_midp_info_pane_ParamLimits

0x3564,	// (0x000393cf) listscroll_midp_info_pane

0x3544,	// (0x000393af) listscroll_form_midp_pane_ParamLimits

0x3544,	// (0x000393af) listscroll_form_midp_pane

0x3550,	// (0x000393bb) scroll_bar_cp050

0x3544,	// (0x000393af) list_midp_pane

0x5291,	// (0x0003b0fc) signal_pane_g2_cp

0x345e,	// (0x000392c9) listscroll_midp_info_pane_t1_ParamLimits

0x345e,	// (0x000392c9) listscroll_midp_info_pane_t1

0x3476,	// (0x000392e1) listscroll_midp_info_pane_t2_ParamLimits

0x3476,	// (0x000392e1) listscroll_midp_info_pane_t2

0x34b4,	// (0x0003931f) listscroll_midp_info_pane_t3_ParamLimits

0x34b4,	// (0x0003931f) listscroll_midp_info_pane_t3

0x34ee,	// (0x00039359) listscroll_midp_info_pane_t4_ParamLimits

0x34ee,	// (0x00039359) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x00045669) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x00045669) listscroll_midp_info_pane_t

0xeef7,	// (0x00044d62) scroll_pane_cp21

0x33f8,	// (0x00039263) form_midp_field_choice_group_pane

0x3401,	// (0x0003926c) form_midp_field_text_pane

0x3444,	// (0x000392af) form_midp_field_time_pane

0x344c,	// (0x000392b7) form_midp_gauge_slider_pane

0x3455,	// (0x000392c0) form_midp_gauge_wait_pane

0x88a2,	// (0x0003e70d) form_midp_image_pane

0xafbb,	// (0x00040e26) list_single_midp_pane_ParamLimits

0xafbb,	// (0x00040e26) list_single_midp_pane

0xc534,	// (0x0004239f) form_midp_field_text_pane_t1

0x31ae,	// (0x00039019) input_focus_pane_cp050

0x33e7,	// (0x00039252) list_midp_form_text_pane

0x338b,	// (0x000391f6) form_midp_field_choice_group_pane_t1

0x3399,	// (0x00039204) input_focus_pane_cp051

0x33ad,	// (0x00039218) list_midp_choice_pane

0x88a2,	// (0x0003e70d) status_idle_pane

0x336f,	// (0x000391da) form_midp_field_time_pane_t1

0x8898,	// (0x0003e703) wait_anim_pane_g2_copy1

0x337d,	// (0x000391e8) form_midp_field_time_pane_t2

0x0001,

0x2a02,	// (0x0003886d) aid_navinavi_width_2_pane

0xf7f9,	// (0x00045664) form_midp_field_time_pane_t

0x88a2,	// (0x0003e70d) input_focus_pane_cp052

0x88a2,	// (0x0003e70d) bg_input_focus_pane_cp040

0x332f,	// (0x0003919a) form_midp_gauge_slider_pane_t1

0x333d,	// (0x000391a8) form_midp_gauge_slider_pane_t2

0xc518,	// (0x00042383) form_midp_gauge_slider_pane_t3

0xc526,	// (0x00042391) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x0004565b) form_midp_gauge_slider_pane_t

0x3367,	// (0x000391d2) form_midp_slider_pane

0x8d58,	// (0x0003ebc3) bg_input_focus_pane_cp041_ParamLimits

0x8d58,	// (0x0003ebc3) bg_input_focus_pane_cp041

0x32fc,	// (0x00039167) form_midp_gauge_wait_pane_t1_ParamLimits

0x32fc,	// (0x00039167) form_midp_gauge_wait_pane_t1

0x330e,	// (0x00039179) form_midp_gauge_wait_pane_t2_ParamLimits

0x330e,	// (0x00039179) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x00045656) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x00045656) form_midp_gauge_wait_pane_t

0x3320,	// (0x0003918b) form_midp_wait_pane_ParamLimits

0x3320,	// (0x0003918b) form_midp_wait_pane

0x32c4,	// (0x0003912f) form_midp_image_pane_g1

0x32cd,	// (0x00039138) form_midp_image_pane_t1

0x32dc,	// (0x00039147) form_midp_image_pane_t2

0x32eb,	// (0x00039156) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x0004564f) form_midp_image_pane_t

0x32bb,	// (0x00039126) list_single_midp_pane_g1

0xd5f4,	// (0x0004345f) list_single_midp_pane_t1

0xc501,	// (0x0004236c) list_midp_form_item_pane_ParamLimits

0xc501,	// (0x0004236c) list_midp_form_item_pane

0x29aa,	// (0x00038815) list_midp_form_item_pane_t1

0x29b9,	// (0x00038824) midp_ticker_pane_g1

0x29c5,	// (0x00038830) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x0004559c) midp_ticker_pane_g

0xa6b5,	// (0x00040520) midp_ticker_pane_t1

0xc8c2,	// (0x0004272d) midp_editing_number_pane_t1

0x46a8,	// (0x0003a513) midp_editing_number_pane

0x46b7,	// (0x0003a522) midp_ticker_pane

0x3570,	// (0x000393db) ai_message_heading_pane

0x88a2,	// (0x0003e70d) bg_popup_window_pane_cp14

0x3578,	// (0x000393e3) listscroll_ai_message_pane

0x43e3,	// (0x0003a24e) ai_message_heading_pane_g1_ParamLimits

0x43e3,	// (0x0003a24e) ai_message_heading_pane_g1

0x43ef,	// (0x0003a25a) ai_message_heading_pane_g2_ParamLimits

0x43ef,	// (0x0003a25a) ai_message_heading_pane_g2

0x43fd,	// (0x0003a268) ai_message_heading_pane_g3_ParamLimits

0x43fd,	// (0x0003a268) ai_message_heading_pane_g3

0x4409,	// (0x0003a274) ai_message_heading_pane_g4_ParamLimits

0x4409,	// (0x0003a274) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x00045790) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x00045790) ai_message_heading_pane_g

0x4415,	// (0x0003a280) ai_message_heading_pane_t1_ParamLimits

0x4415,	// (0x0003a280) ai_message_heading_pane_t1

0x442f,	// (0x0003a29a) ai_message_heading_pane_t2_ParamLimits

0x442f,	// (0x0003a29a) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x00045799) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x00045799) ai_message_heading_pane_t

0x4443,	// (0x0003a2ae) bg_popup_heading_pane_cp1_ParamLimits

0x4443,	// (0x0003a2ae) bg_popup_heading_pane_cp1

0x43d1,	// (0x0003a23c) list_ai_message_pane_ParamLimits

0x43d1,	// (0x0003a23c) list_ai_message_pane

0xeef7,	// (0x00044d62) scroll_pane_cp10

0x436d,	// (0x0003a1d8) list_ai_message_pane_g1

0x4375,	// (0x0003a1e0) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0004576d) list_ai_message_pane_g

0x437d,	// (0x0003a1e8) list_ai_message_pane_t1_ParamLimits

0x437d,	// (0x0003a1e8) list_ai_message_pane_t1

0x4392,	// (0x0003a1fd) list_ai_message_pane_t2_ParamLimits

0x4392,	// (0x0003a1fd) list_ai_message_pane_t2

0x43a7,	// (0x0003a212) list_ai_message_pane_t3_ParamLimits

0x43a7,	// (0x0003a212) list_ai_message_pane_t3

0x43bc,	// (0x0003a227) list_ai_message_pane_t4_ParamLimits

0x43bc,	// (0x0003a227) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x00045772) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x00045772) list_ai_message_pane_t

0xc709,	// (0x00042574) cell_ai_soft_ind_pane_ParamLimits

0xc709,	// (0x00042574) cell_ai_soft_ind_pane

0x29e3,	// (0x0003884e) cell_ai_soft_ind_pane_g1_ParamLimits

0x29e3,	// (0x0003884e) cell_ai_soft_ind_pane_g1

0x88a2,	// (0x0003e70d) grid_highlight_cp1

0x29f0,	// (0x0003885b) text_secondary_cp56_ParamLimits

0x29f0,	// (0x0003885b) text_secondary_cp56

0x432b,	// (0x0003a196) example_general_pane_ParamLimits

0x432b,	// (0x0003a196) example_general_pane

0x4337,	// (0x0003a1a2) example_parent_pane_g1_ParamLimits

0x4337,	// (0x0003a1a2) example_parent_pane_g1

0x4343,	// (0x0003a1ae) example_parent_pane_t1_ParamLimits

0x4343,	// (0x0003a1ae) example_parent_pane_t1

0xac2b,	// (0x00040a96) popup_preview_text_window_ParamLimits

0xac2b,	// (0x00040a96) popup_preview_text_window

0x280a,	// (0x00038675) list_single_pane_cp2_g4

0xbba9,	// (0x00041a14) bg_popup_preview_window_pane_ParamLimits

0xbba9,	// (0x00041a14) bg_popup_preview_window_pane

0x4074,	// (0x00039edf) popup_preview_text_window_t1_ParamLimits

0x4074,	// (0x00039edf) popup_preview_text_window_t1

0x4092,	// (0x00039efd) popup_preview_text_window_t2_ParamLimits

0x4092,	// (0x00039efd) popup_preview_text_window_t2

0x40db,	// (0x00039f46) popup_preview_text_window_t3_ParamLimits

0x40db,	// (0x00039f46) popup_preview_text_window_t3

0x4120,	// (0x00039f8b) popup_preview_text_window_t4_ParamLimits

0x4120,	// (0x00039f8b) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x00045741) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x00045741) popup_preview_text_window_t

0x419e,	// (0x0003a009) scroll_pane_cp11

0x313a,	// (0x00038fa5) bg_popup_preview_window_pane_g1

0x4028,	// (0x00039e93) bg_popup_preview_window_pane_g2

0x4032,	// (0x00039e9d) bg_popup_preview_window_pane_g3

0x403c,	// (0x00039ea7) bg_popup_preview_window_pane_g4

0x4046,	// (0x00039eb1) bg_popup_preview_window_pane_g5

0x4050,	// (0x00039ebb) bg_popup_preview_window_pane_g6

0x4058,	// (0x00039ec3) bg_popup_preview_window_pane_g7

0x4060,	// (0x00039ecb) bg_popup_preview_window_pane_g8

0xeb05,	// (0x00044970) aid_popup_width_pane

0xab9b,	// (0x00040a06) popup_midp_note_alarm_window_ParamLimits

0xab9b,	// (0x00040a06) popup_midp_note_alarm_window

0xbfde,	// (0x00041e49) data_form_pane_ParamLimits

0xa1e3,	// (0x0004004e) form_field_data_pane_g1

0xa1ed,	// (0x00040058) form_field_data_pane_t1_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_ParamLimits

0xd46d,	// (0x000432d8) data_form_wide_pane_ParamLimits

0xd47e,	// (0x000432e9) form_field_data_wide_pane_g1

0xd48a,	// (0x000432f5) form_field_data_wide_pane_t1_ParamLimits

0xbd65,	// (0x00041bd0) input_focus_pane_cp6_ParamLimits

0xa31b,	// (0x00040186) input_popup_find_pane_g1_ParamLimits

0xa31b,	// (0x00040186) input_popup_find_pane_g1

0xf1ce,	// (0x00045039) aid_navi_side_left_pane

0xf1e3,	// (0x0004504e) aid_navi_side_right_pane

0x3a3d,	// (0x000398a8) bg_popup_window_pane_cp30_ParamLimits

0x3a3d,	// (0x000398a8) bg_popup_window_pane_cp30

0x3ab7,	// (0x00039922) popup_midp_note_alarm_window_g1_ParamLimits

0x3ab7,	// (0x00039922) popup_midp_note_alarm_window_g1

0x3ae7,	// (0x00039952) popup_midp_note_alarm_window_t1_ParamLimits

0x3ae7,	// (0x00039952) popup_midp_note_alarm_window_t1

0x3b88,	// (0x000399f3) popup_midp_note_alarm_window_t2_ParamLimits

0x3b88,	// (0x000399f3) popup_midp_note_alarm_window_t2

0x3c36,	// (0x00039aa1) popup_midp_note_alarm_window_t3_ParamLimits

0x3c36,	// (0x00039aa1) popup_midp_note_alarm_window_t3

0x3c68,	// (0x00039ad3) popup_midp_note_alarm_window_t4_ParamLimits

0x3c68,	// (0x00039ad3) popup_midp_note_alarm_window_t4

0x3c8e,	// (0x00039af9) popup_midp_note_alarm_window_t5_ParamLimits

0x3c8e,	// (0x00039af9) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x000456de) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x000456de) popup_midp_note_alarm_window_t

0x3d3a,	// (0x00039ba5) wait_bar_pane_cp1_ParamLimits

0x3d3a,	// (0x00039ba5) wait_bar_pane_cp1

0x88a2,	// (0x0003e70d) wait_anim_pane_copy1

0x88a2,	// (0x0003e70d) wait_border_pane_copy1

0x3722,	// (0x0003958d) wait_border_pane_g1_copy1

0xd4a4,	// (0x0004330f) form_field_popup_pane_g1

0xa207,	// (0x00040072) form_field_popup_pane_t1_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_cp7_ParamLimits

0xc018,	// (0x00041e83) list_form_pane_ParamLimits

0xd4ac,	// (0x00043317) form_field_popup_wide_pane_g1

0xd4b4,	// (0x0004331f) form_field_popup_wide_pane_t1_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_cp8_ParamLimits

0xc024,	// (0x00041e8f) list_form_wide_pane_ParamLimits

0x4878,	// (0x0003a6e3) aid_size_cell_graphic_pane

0xa286,	// (0x000400f1) data_form_pane_t1_ParamLimits

0xb04c,	// (0x00040eb7) data_form_wide_pane_t1_ParamLimits

0xc16e,	// (0x00041fd9) bg_status_flat_pane

0x99cd,	// (0x0003f838) title_pane_t1_ParamLimits

0x8d20,	// (0x0003eb8b) title_pane_t2_ParamLimits

0x8d46,	// (0x0003ebb1) title_pane_t3_ParamLimits

0xf530,	// (0x0004539b) title_pane_t_ParamLimits

0xa45e,	// (0x000402c9) level_1_signal_ParamLimits

0xa470,	// (0x000402db) level_2_signal_ParamLimits

0xa483,	// (0x000402ee) level_3_signal_ParamLimits

0xa496,	// (0x00040301) level_4_signal_ParamLimits

0xa4a9,	// (0x00040314) level_5_signal_ParamLimits

0xa4bc,	// (0x00040327) level_6_signal_ParamLimits

0xa4cf,	// (0x0004033a) level_7_signal_ParamLimits

0xa45e,	// (0x000402c9) level_1_battery_ParamLimits

0xa470,	// (0x000402db) level_2_battery_ParamLimits

0xa483,	// (0x000402ee) level_3_battery_ParamLimits

0xa496,	// (0x00040301) level_4_battery_ParamLimits

0xa4a9,	// (0x00040314) level_5_battery_ParamLimits

0xa4bc,	// (0x00040327) level_6_battery_ParamLimits

0xa4cf,	// (0x0004033a) level_7_battery_ParamLimits

0x3942,	// (0x000397ad) bg_status_flat_pane_g1

0x394a,	// (0x000397b5) bg_status_flat_pane_g2

0x3952,	// (0x000397bd) bg_status_flat_pane_g3

0x395a,	// (0x000397c5) bg_status_flat_pane_g4

0x3962,	// (0x000397cd) bg_status_flat_pane_g5

0x396a,	// (0x000397d5) bg_status_flat_pane_g6

0x3972,	// (0x000397dd) bg_status_flat_pane_g7

0x9a61,	// (0x0003f8cc) tabs_3_active_pane_t1_ParamLimits

0x9a61,	// (0x0003f8cc) tabs_3_passive_pane_t1_ParamLimits

0x9a7b,	// (0x0003f8e6) tabs_4_active_pane_t1_ParamLimits

0x9a7b,	// (0x0003f8e6) tabs_4_1_passive_pane_t1_ParamLimits

0xa331,	// (0x0004019c) tabs_2_active_pane_t1_ParamLimits

0xa331,	// (0x0004019c) tabs_2_passive_pane_t1_ParamLimits

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp4_ParamLimits

0xa343,	// (0x000401ae) tabs_2_long_active_pane_t1_ParamLimits

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp4_ParamLimits

0x0a20,	// (0x0003688b) list_single_midp_graphic_pane_t1_ParamLimits

0x8d58,	// (0x0003ebc3) bg_active_tab_pane_cp5_ParamLimits

0xa356,	// (0x000401c1) tabs_3_long_active_pane_t1_ParamLimits

0x2c0a,	// (0x00038a75) bg_passive_tab_pane_cp5_ParamLimits

0x0a20,	// (0x0003688b) list_single_midp_graphic_pane_t1

0xc16e,	// (0x00041fd9) bg_status_flat_pane_ParamLimits

0x2dc2,	// (0x00038c2d) indicator_pane_cp2_ParamLimits

0x2dc2,	// (0x00038c2d) indicator_pane_cp2

0xc302,	// (0x0004216d) navi_pane_srt_ParamLimits

0xc302,	// (0x0004216d) navi_pane_srt

0x2f27,	// (0x00038d92) popup_clock_digital_analogue_window_cp1

0xb9ec,	// (0x00041857) indicator_pane_t1

0x28db,	// (0x00038746) copy_highlight_pane

0x28db,	// (0x00038746) cursor_graphics_pane

0x28db,	// (0x00038746) graphic_within_text_pane

0x28db,	// (0x00038746) link_highlight_pane

0x4161,	// (0x00039fcc) popup_preview_text_window_t5_ParamLimits

0x4161,	// (0x00039fcc) popup_preview_text_window_t5

0x2a0c,	// (0x00038877) cursor_digital_pane

0x2a0c,	// (0x00038877) cursor_primary_pane

0x2a1d,	// (0x00038888) cursor_primary_small_pane

0x2a25,	// (0x00038890) cursor_secondary_pane

0x2a2d,	// (0x00038898) cursor_title_pane

0x2a0c,	// (0x00038877) link_highlight_digital_pane

0x2a14,	// (0x0003887f) link_highlight_primary_pane

0x2a1d,	// (0x00038888) link_highlight_primary_small_pane

0x2a25,	// (0x00038890) link_highlight_secondary_pane

0x2a2d,	// (0x00038898) link_highlight_title_pane

0x2a0c,	// (0x00038877) copy_highlight_digital_pane

0x2a0c,	// (0x00038877) copy_highlight_primary_pane

0x2a1d,	// (0x00038888) copy_highlight_primary_small_pane

0x2a25,	// (0x00038890) copy_highlight_secondary_pane

0x2a2d,	// (0x00038898) copy_highlight_title_pane

0x2a25,	// (0x00038890) graphic_text_digital_pane

0x39e0,	// (0x0003984b) graphic_text_primary_pane

0x39e9,	// (0x00039854) graphic_text_primary_small_pane

0x2a1d,	// (0x00038888) graphic_text_secondary_pane

0x2a0c,	// (0x00038877) graphic_text_title_pane

0xa6c7,	// (0x00040532) cursor_primary_pane_g1

0x39d2,	// (0x0003983d) cursor_text_primary_t1

0xc589,	// (0x000423f4) cursor_primary_small_pane_g1

0x39c4,	// (0x0003982f) cursor_text_primary_small_t1

0xc57f,	// (0x000423ea) cursor_primary_small_pane_g1_copy1

0x39ac,	// (0x00039817) cursor_text_primary_small_t1_copy1

0x398a,	// (0x000397f5) cursor_text_title_t1

0xc575,	// (0x000423e0) cursor_title_pane_g1

0xa6c7,	// (0x00040532) cursor_digital_pane_g1

0x2a3f,	// (0x000388aa) cursor_text_digital_t1

0x2a4d,	// (0x000388b8) link_highlight_primary_pane_g1

0x3933,	// (0x0003979e) link_highlight_primary_pane_t1

0x2a4d,	// (0x000388b8) link_highlight_primary_small_pane_g1

0x2a55,	// (0x000388c0) link_highlight_primary_small_pane_t1

0x2a64,	// (0x000388cf) link_highlight_secondary_pane_g1

0x2a6c,	// (0x000388d7) link_highlight_secondary_pane_t1

0x38a7,	// (0x00039712) link_highlight_title_pane_g1

0x38af,	// (0x0003971a) link_highlight_title_pane_t1

0x3890,	// (0x000396fb) link_highlight_digital_pane_g1

0x3898,	// (0x00039703) link_highlight_digital_pane_t1

0x3758,	// (0x000395c3) copy_highlight_primary_pane_g1

0x376f,	// (0x000395da) copy_highlight_primary_pane_t1

0x3758,	// (0x000395c3) copy_highlight_primary_small_pane_g1

0x3760,	// (0x000395cb) copy_highlight_primary_small_pane_t1

0x2a7b,	// (0x000388e6) copy_highlight_secondary_pane_g1

0x2a83,	// (0x000388ee) copy_highlight_secondary_pane_t1

0x3741,	// (0x000395ac) copy_highlight_title_pane_g1

0x3749,	// (0x000395b4) copy_highlight_title_pane_t1

0x3758,	// (0x000395c3) copy_highlight_digital_pane_g1

0x4a4a,	// (0x0003a8b5) copy_highlight_digital_pane_t1

0x499e,	// (0x0003a809) graphic_text_primary_pane_g1

0x4a2e,	// (0x0003a899) graphic_text_primary_pane_t1

0x4a3c,	// (0x0003a8a7) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0004580d) graphic_text_primary_pane_t

0x4a0a,	// (0x0003a875) graphic_text_primary_small_pane_g1

0x4a12,	// (0x0003a87d) graphic_text_primary_small_pane_t1

0x4a20,	// (0x0003a88b) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x00045808) graphic_text_primary_small_pane_t

0x49e6,	// (0x0003a851) graphic_text_secondary_pane_g1

0x49ee,	// (0x0003a859) graphic_text_secondary_pane_t1

0x49fc,	// (0x0003a867) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x00045803) graphic_text_secondary_pane_t

0x49c2,	// (0x0003a82d) graphic_text_title_pane_g1

0x49ca,	// (0x0003a835) graphic_text_title_pane_t1

0x49d8,	// (0x0003a843) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x000457fe) graphic_text_title_pane_t

0x499e,	// (0x0003a809) graphic_text_digital_pane_g1

0x49a6,	// (0x0003a811) graphic_text_digital_pane_t1

0x49b4,	// (0x0003a81f) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x000457f9) graphic_text_digital_pane_t

0x8d58,	// (0x0003ebc3) navi_icon_pane_srt_ParamLimits

0x8d58,	// (0x0003ebc3) navi_icon_pane_srt

0x88a2,	// (0x0003e70d) navi_midp_pane_srt

0x88a2,	// (0x0003e70d) navi_navi_pane_srt

0x8d58,	// (0x0003ebc3) navi_text_pane_srt_ParamLimits

0x8d58,	// (0x0003ebc3) navi_text_pane_srt

0x4969,	// (0x0003a7d4) navi_navi_icon_text_pane_srt

0x4971,	// (0x0003a7dc) navi_navi_pane_srt_g1_ParamLimits

0x4971,	// (0x0003a7dc) navi_navi_pane_srt_g1

0x4983,	// (0x0003a7ee) navi_navi_pane_srt_g2_ParamLimits

0x4983,	// (0x0003a7ee) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x000457f4) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x000457f4) navi_navi_pane_srt_g

0x4995,	// (0x0003a800) navi_navi_tabs_pane_srt

0x4969,	// (0x0003a7d4) navi_navi_text_pane_srt

0x4969,	// (0x0003a7d4) navi_navi_volume_pane_srt

0x495a,	// (0x0003a7c5) navi_navi_text_pane_srt_t1

0x0ea7,	// (0x00036d12) navi_navi_volume_pane_srt_g1

0x0eaf,	// (0x00036d1a) volume_small_pane_srt_ParamLimits

0x0eaf,	// (0x00036d1a) volume_small_pane_srt

0x0155,	// (0x00035fc0) volume_small_pane_srt_g1_ParamLimits

0x0155,	// (0x00035fc0) volume_small_pane_srt_g1

0x0165,	// (0x00035fd0) volume_small_pane_srt_g2_ParamLimits

0x0165,	// (0x00035fd0) volume_small_pane_srt_g2

0x0176,	// (0x00035fe1) volume_small_pane_srt_g3_ParamLimits

0x0176,	// (0x00035fe1) volume_small_pane_srt_g3

0x0187,	// (0x00035ff2) volume_small_pane_srt_g4_ParamLimits

0x0187,	// (0x00035ff2) volume_small_pane_srt_g4

0x0198,	// (0x00036003) volume_small_pane_srt_g5_ParamLimits

0x0198,	// (0x00036003) volume_small_pane_srt_g5

0x01a9,	// (0x00036014) volume_small_pane_srt_g6_ParamLimits

0x01a9,	// (0x00036014) volume_small_pane_srt_g6

0x01ba,	// (0x00036025) volume_small_pane_srt_g7_ParamLimits

0x01ba,	// (0x00036025) volume_small_pane_srt_g7

0x01cb,	// (0x00036036) volume_small_pane_srt_g8_ParamLimits

0x01cb,	// (0x00036036) volume_small_pane_srt_g8

0x01dc,	// (0x00036047) volume_small_pane_srt_g9_ParamLimits

0x01dc,	// (0x00036047) volume_small_pane_srt_g9

0x01ed,	// (0x00036058) volume_small_pane_srt_g10_ParamLimits

0x01ed,	// (0x00036058) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x000455a1) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x000455a1) volume_small_pane_srt_g

0xbc5e,	// (0x00041ac9) query_popup_data_pane_cp2

0x4940,	// (0x0003a7ab) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4940,	// (0x0003a7ab) navi_navi_icon_text_pane_srt_t1

0x39e0,	// (0x0003984b) navi_tabs_2_long_pane_srt

0x39e0,	// (0x0003984b) navi_tabs_2_pane_srt

0x39e0,	// (0x0003984b) navi_tabs_3_long_pane_srt

0x39e0,	// (0x0003984b) navi_tabs_3_pane_srt

0x39e0,	// (0x0003984b) navi_tabs_4_pane_srt

0x0e87,	// (0x00036cf2) tabs_2_active_pane_srt_ParamLimits

0x0e87,	// (0x00036cf2) tabs_2_active_pane_srt

0x0e97,	// (0x00036d02) tabs_2_passive_pane_srt_ParamLimits

0x0e97,	// (0x00036d02) tabs_2_passive_pane_srt

0x31ae,	// (0x00039019) bg_passive_tab_pane_cp1_srt_ParamLimits

0x31ae,	// (0x00039019) bg_passive_tab_pane_cp1_srt

0x490c,	// (0x0003a777) bg_passive_tab_pane_g1_cp1_srt

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp1_srt

0x4915,	// (0x0003a780) bg_passive_tab_pane_g3_cp1_srt

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp1_srt_ParamLimits

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp1_srt

0x491e,	// (0x0003a789) tabs_2_active_pane_srt_g1

0xc9cd,	// (0x00042838) tabs_2_active_pane_srt_t1_ParamLimits

0xc9cd,	// (0x00042838) tabs_2_active_pane_srt_t1

0x490c,	// (0x0003a777) bg_active_tab_pane_g1_cp1_srt

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp1_srt

0x4915,	// (0x0003a780) bg_active_tab_pane_g3_cp1_srt

0x0e54,	// (0x00036cbf) tabs_3_active_pane_srt_ParamLimits

0x0e54,	// (0x00036cbf) tabs_3_active_pane_srt

0x0e65,	// (0x00036cd0) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e65,	// (0x00036cd0) tabs_3_passive_pane_cp_srt

0x0e76,	// (0x00036ce1) tabs_3_passive_pane_srt_ParamLimits

0x0e76,	// (0x00036ce1) tabs_3_passive_pane_srt

0x31ae,	// (0x00039019) bg_passive_tab_pane_cp2_srt_ParamLimits

0x31ae,	// (0x00039019) bg_passive_tab_pane_cp2_srt

0x2a92,	// (0x000388fd) bg_passive_tab_pane_g1_cp2_srt

0x2514,	// (0x0003837f) bg_passive_tab_pane_g2_cp2_srt

0x2a9b,	// (0x00038906) bg_passive_tab_pane_g3_cp2_srt

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp2_srt_ParamLimits

0x8d94,	// (0x0003ebff) bg_active_tab_pane_cp2_srt

0x48f2,	// (0x0003a75d) tabs_3_active_pane_srt_g1

0xc9b7,	// (0x00042822) tabs_3_active_pane_srt_t1_ParamLimits

0xc9b7,	// (0x00042822) tabs_3_active_pane_srt_t1

0x2a92,	// (0x000388fd) bg_active_tab_pane_g1_cp2_srt

0x2514,	// (0x0003837f) bg_active_tab_pane_g2_cp2_srt

0x2a9b,	// (0x00038906) bg_active_tab_pane_g3_cp2_srt

0x0e0c,	// (0x00036c77) tabs_4_active_pane_srt_ParamLimits

0x0e0c,	// (0x00036c77) tabs_4_active_pane_srt

0x0e1e,	// (0x00036c89) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e1e,	// (0x00036c89) tabs_4_passive_pane_cp2_srt

0x033f,	// (0x000361aa) aid_size_cell_toolbar

0x4507,	// (0x0003a372) main_idle_act_pane_ParamLimits

0x052a,	// (0x00036395) popup_large_graphic_colour_window_ParamLimits

0xaef1,	// (0x00040d5c) popup_toolbar_window_ParamLimits

0xaef1,	// (0x00040d5c) popup_toolbar_window

0xd619,	// (0x00043484) list_single_graphic_2heading_pane_ParamLimits

0xd619,	// (0x00043484) list_single_graphic_2heading_pane

0xf264,	// (0x000450cf) aid_size_cell_apps_grid_lsc_pane

0xf276,	// (0x000450e1) aid_size_cell_apps_grid_prt_pane

0x2c0a,	// (0x00038a75) bg_wml_button_pane_cp1_ParamLimits

0x2c0a,	// (0x00038a75) bg_wml_button_pane_cp1

0xc534,	// (0x0004239f) form_midp_field_text_pane_t1_ParamLimits

0x31ae,	// (0x00039019) input_focus_pane_cp050_ParamLimits

0x33e7,	// (0x00039252) list_midp_form_text_pane_ParamLimits

0x3399,	// (0x00039204) input_focus_pane_cp051_ParamLimits

0x33ad,	// (0x00039218) list_midp_choice_pane_ParamLimits

0xc4cd,	// (0x00042338) list_single_2graphic_pane_cp3_ParamLimits

0xc4cd,	// (0x00042338) list_single_2graphic_pane_cp3

0xc4e0,	// (0x0004234b) list_single_midp_graphic_pane_ParamLimits

0xc4e0,	// (0x0004234b) list_single_midp_graphic_pane

0xedb0,	// (0x00044c1b) list_single_graphic_2heading_pane_g1_ParamLimits

0xedb0,	// (0x00044c1b) list_single_graphic_2heading_pane_g1

0xedbc,	// (0x00044c27) list_single_graphic_2heading_pane_g4_ParamLimits

0xedbc,	// (0x00044c27) list_single_graphic_2heading_pane_g4

0xedc8,	// (0x00044c33) list_single_graphic_2heading_pane_g5_ParamLimits

0xedc8,	// (0x00044c33) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x000455f4) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x000455f4) list_single_graphic_2heading_pane_g

0xedd4,	// (0x00044c3f) list_single_graphic_2heading_pane_t1_ParamLimits

0xedd4,	// (0x00044c3f) list_single_graphic_2heading_pane_t1

0xede8,	// (0x00044c53) list_single_graphic_2heading_pane_t2_ParamLimits

0xede8,	// (0x00044c53) list_single_graphic_2heading_pane_t2

0xee04,	// (0x00044c6f) list_single_graphic_2heading_pane_t3_ParamLimits

0xee04,	// (0x00044c6f) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x000455fb) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x000455fb) list_single_graphic_2heading_pane_t

0x3078,	// (0x00038ee3) bg_popup_sub_pane_cp2

0x30a2,	// (0x00038f0d) grid_toobar_pane

0x0990,	// (0x000367fb) cell_toolbar_pane_ParamLimits

0x0990,	// (0x000367fb) cell_toolbar_pane

0x30de,	// (0x00038f49) cell_toolbar_pane_g1_ParamLimits

0x30de,	// (0x00038f49) cell_toolbar_pane_g1

0x30f2,	// (0x00038f5d) cell_toolbar_pane_g2_ParamLimits

0x30f2,	// (0x00038f5d) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x00045609) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x00045609) cell_toolbar_pane_g

0x3114,	// (0x00038f7f) grid_highlight_pane_cp2_ParamLimits

0x3114,	// (0x00038f7f) grid_highlight_pane_cp2

0x312e,	// (0x00038f99) toolbar_button_pane

0x313a,	// (0x00038fa5) toolbar_button_pane_g1

0x3142,	// (0x00038fad) toolbar_button_pane_g2

0x314a,	// (0x00038fb5) toolbar_button_pane_g3

0x3152,	// (0x00038fbd) toolbar_button_pane_g4

0x315a,	// (0x00038fc5) toolbar_button_pane_g5

0x3162,	// (0x00038fcd) toolbar_button_pane_g6

0x316a,	// (0x00038fd5) toolbar_button_pane_g7

0x3172,	// (0x00038fdd) toolbar_button_pane_g8

0x317a,	// (0x00038fe5) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0004560e) toolbar_button_pane_g

0x09c8,	// (0x00036833) list_single_2graphic_pane_g1_cp3_ParamLimits

0x09c8,	// (0x00036833) list_single_2graphic_pane_g1_cp3

0xaf49,	// (0x00040db4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf49,	// (0x00040db4) list_single_2graphic_pane_g2_cp3

0x09e5,	// (0x00036850) list_single_2graphic_pane_g3_cp3

0x09ed,	// (0x00036858) list_single_2graphic_pane_g4_cp3_ParamLimits

0x09ed,	// (0x00036858) list_single_2graphic_pane_g4_cp3

0x09f9,	// (0x00036864) list_single_2graphic_pane_t1_cp3_ParamLimits

0x09f9,	// (0x00036864) list_single_2graphic_pane_t1_cp3

0x0a14,	// (0x0003687f) list_single_midp_graphic_pane_g2_ParamLimits

0x0a14,	// (0x0003687f) list_single_midp_graphic_pane_g2

0x0347,	// (0x000361b2) aid_zoom_text_primary

0xeda8,	// (0x00044c13) aid_zoom_text_secondary

0x2b4c,	// (0x000389b7) status_small_pane_g7_ParamLimits

0x2b4c,	// (0x000389b7) status_small_pane_g7

0x2b6f,	// (0x000389da) status_small_pane_t1_ParamLimits

0x999d,	// (0x0003f808) title_pane_g2

0x0003,

0xf527,	// (0x00045392) title_pane_g

0x9c3d,	// (0x0003faa8) aid_size_cell_colour_1_pane_ParamLimits

0x9c3d,	// (0x0003faa8) aid_size_cell_colour_1_pane

0x9c51,	// (0x0003fabc) aid_size_cell_colour_2_pane_ParamLimits

0x9c51,	// (0x0003fabc) aid_size_cell_colour_2_pane

0x9c65,	// (0x0003fad0) aid_size_cell_colour_3_pane_ParamLimits

0x9c65,	// (0x0003fad0) aid_size_cell_colour_3_pane

0x9c79,	// (0x0003fae4) aid_size_cell_colour_4_pane_ParamLimits

0x9c79,	// (0x0003fae4) aid_size_cell_colour_4_pane

0xf0d6,	// (0x00044f41) title_pane_stacon_g1_ParamLimits

0xf0d6,	// (0x00044f41) title_pane_stacon_g1

0x37c6,	// (0x00039631) popup_note_wait_window_g3_ParamLimits

0x37c6,	// (0x00039631) popup_note_wait_window_g3

0x383d,	// (0x000396a8) popup_note_wait_window_t5_ParamLimits

0x383d,	// (0x000396a8) popup_note_wait_window_t5

0x88a2,	// (0x0003e70d) main_feb_china_hwr_fs_writing_pane

0xa882,	// (0x000406ed) popup_feb_china_hwr_fs_window_ParamLimits

0xa882,	// (0x000406ed) popup_feb_china_hwr_fs_window

0xaf5a,	// (0x00040dc5) aid_size_cell_hwr_fs_ParamLimits

0xaf5a,	// (0x00040dc5) aid_size_cell_hwr_fs

0x31ae,	// (0x00039019) bg_popup_sub_pane_cp3_ParamLimits

0x31ae,	// (0x00039019) bg_popup_sub_pane_cp3

0xaf6f,	// (0x00040dda) grid_hwr_fs_pane_ParamLimits

0xaf6f,	// (0x00040dda) grid_hwr_fs_pane

0x0a63,	// (0x000368ce) linegrid_hwr_fs_pane_ParamLimits

0x0a63,	// (0x000368ce) linegrid_hwr_fs_pane

0xaf87,	// (0x00040df2) cell_hwr_fs_pane_ParamLimits

0xaf87,	// (0x00040df2) cell_hwr_fs_pane

0x31ba,	// (0x00039025) linegrid_hwr_fs_pane_g1_ParamLimits

0x31ba,	// (0x00039025) linegrid_hwr_fs_pane_g1

0xc4a1,	// (0x0004230c) linegrid_hwr_fs_pane_g2_ParamLimits

0xc4a1,	// (0x0004230c) linegrid_hwr_fs_pane_g2

0x31d8,	// (0x00039043) linegrid_hwr_fs_pane_g3_ParamLimits

0x31d8,	// (0x00039043) linegrid_hwr_fs_pane_g3

0x0a97,	// (0x00036902) linegrid_hwr_fs_pane_g4_ParamLimits

0x0a97,	// (0x00036902) linegrid_hwr_fs_pane_g4

0x0ab5,	// (0x00036920) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ab5,	// (0x00036920) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x00045634) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x00045634) linegrid_hwr_fs_pane_g

0x31e4,	// (0x0003904f) cell_hwr_fs_pane_g1_ParamLimits

0x31e4,	// (0x0003904f) cell_hwr_fs_pane_g1

0x2fb5,	// (0x00038e20) cell_hwr_fs_pane_g2_ParamLimits

0x2fb5,	// (0x00038e20) cell_hwr_fs_pane_g2

0xc4b3,	// (0x0004231e) cell_hwr_fs_pane_g3_ParamLimits

0xc4b3,	// (0x0004231e) cell_hwr_fs_pane_g3

0xc4c0,	// (0x0004232b) cell_hwr_fs_pane_g4_ParamLimits

0xc4c0,	// (0x0004232b) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x0004563f) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x0004563f) cell_hwr_fs_pane_g

0xafad,	// (0x00040e18) cell_hwr_fs_pane_t1

0x88a2,	// (0x0003e70d) grid_highlight_pane_cp6

0x88a2,	// (0x0003e70d) main_idle_act2_pane

0xeede,	// (0x00044d49) aid_inside_area_popup_secondary

0xc5a9,	// (0x00042414) aid_inside_area_window_primary_ParamLimits

0xc5a9,	// (0x00042414) aid_inside_area_window_primary

0x4a59,	// (0x0003a8c4) ai2_news_ticker_pane

0x4a61,	// (0x0003a8cc) aid_size_cell_ai1_link_ParamLimits

0x4a61,	// (0x0003a8cc) aid_size_cell_ai1_link

0x4a7b,	// (0x0003a8e6) popup_ai2_data_window_ParamLimits

0x4a7b,	// (0x0003a8e6) popup_ai2_data_window

0x4a99,	// (0x0003a904) popup_ai2_link_window_ParamLimits

0x4a99,	// (0x0003a904) popup_ai2_link_window

0x31ae,	// (0x00039019) bg_popup_sub_pane_cp4_ParamLimits

0x31ae,	// (0x00039019) bg_popup_sub_pane_cp4

0x4aaf,	// (0x0003a91a) grid_ai2_link_pane_ParamLimits

0x4aaf,	// (0x0003a91a) grid_ai2_link_pane

0x4ac6,	// (0x0003a931) popup_ai2_link_window_g1_ParamLimits

0x4ac6,	// (0x0003a931) popup_ai2_link_window_g1

0x4ad2,	// (0x0003a93d) popup_ai2_link_window_g2_ParamLimits

0x4ad2,	// (0x0003a93d) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x00045812) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x00045812) popup_ai2_link_window_g

0x4ae3,	// (0x0003a94e) ai2_mp_button_pane

0x4aeb,	// (0x0003a956) ai2_mp_volume_pane

0x3399,	// (0x00039204) bg_popup_sub_pane_cp5_ParamLimits

0x3399,	// (0x00039204) bg_popup_sub_pane_cp5

0x4af3,	// (0x0003a95e) heading_ai2_gene_pane_ParamLimits

0x4af3,	// (0x0003a95e) heading_ai2_gene_pane

0x4aff,	// (0x0003a96a) list_ai2_gene_pane_ParamLimits

0x4aff,	// (0x0003a96a) list_ai2_gene_pane

0x4b47,	// (0x0003a9b2) cell_ai2_link_pane_ParamLimits

0x4b47,	// (0x0003a9b2) cell_ai2_link_pane

0x4b5d,	// (0x0003a9c8) cell_ai2_link_pane_g1

0x88a2,	// (0x0003e70d) grid_highlight_pane_cp7

0x0ec4,	// (0x00036d2f) ai2_mp_volume_pane_g1

0x4c30,	// (0x0003aa9b) ai2_mp_volume_pane_g2

0x4ba5,	// (0x0003aa10) list_ai2_gene_pane_t1

0x4c38,	// (0x0003aaa3) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0004582b) ai2_mp_volume_pane_g

0x0ecc,	// (0x00036d37) volume_small_pane_cp3

0x4c40,	// (0x0003aaab) aid_size_cell_ai2_button

0x4c48,	// (0x0003aab3) grid_ai2_button_pane

0x4c51,	// (0x0003aabc) cell_ai2_button_pane_ParamLimits

0x4c51,	// (0x0003aabc) cell_ai2_button_pane

0x8898,	// (0x0003e703) cell_ai2_button_pane_g1

0x88a2,	// (0x0003e70d) grid_highlight_pane_cp8

0x4bf0,	// (0x0003aa5b) ai2_gene_pane_t1_ParamLimits

0x4bf0,	// (0x0003aa5b) ai2_gene_pane_t1

0xa7fe,	// (0x00040669) aid_height_parent_landscape

0xc750,	// (0x000425bb) aid_height_set_list

0x4507,	// (0x0003a372) aid_size_parent

0x4878,	// (0x0003a6e3) aid_size_cell_graphic_pane_ParamLimits

0x4b0f,	// (0x0003a97a) popup_ai2_data_window_g1_ParamLimits

0x4b0f,	// (0x0003a97a) popup_ai2_data_window_g1

0x4b1b,	// (0x0003a986) ai2_news_ticker_pane_g1

0x4b23,	// (0x0003a98e) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x00045817) ai2_news_ticker_pane_g

0x4b2b,	// (0x0003a996) ai2_news_ticker_pane_t1

0x4b39,	// (0x0003a9a4) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0004581c) ai2_news_ticker_pane_t

0x4b66,	// (0x0003a9d1) heading_ai2_gene_pane_g1

0x4b6e,	// (0x0003a9d9) heading_ai2_gene_pane_t1_ParamLimits

0x4b6e,	// (0x0003a9d9) heading_ai2_gene_pane_t1

0x4b83,	// (0x0003a9ee) list_highlight_pane_cp6

0x4b8b,	// (0x0003a9f6) ai2_gene_pane_ParamLimits

0x4b8b,	// (0x0003a9f6) ai2_gene_pane

0x4bb3,	// (0x0003aa1e) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00045821) list_ai2_gene_pane_t

0x4bc1,	// (0x0003aa2c) list_highlight_pane_cp8_ParamLimits

0x4bc1,	// (0x0003aa2c) list_highlight_pane_cp8

0x4bd2,	// (0x0003aa3d) ai2_gene_pane_g1_ParamLimits

0x4bd2,	// (0x0003aa3d) ai2_gene_pane_g1

0x4be4,	// (0x0003aa4f) ai2_gene_pane_g2_ParamLimits

0x4be4,	// (0x0003aa4f) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x00045826) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x00045826) ai2_gene_pane_g

0xbf80,	// (0x00041deb) scroll_pane_cp12

0xa7bd,	// (0x00040628) control_pane_t3_ParamLimits

0xa7bd,	// (0x00040628) control_pane_t3

0x2b60,	// (0x000389cb) status_small_pane_g8_ParamLimits

0x2b60,	// (0x000389cb) status_small_pane_g8

0xa924,	// (0x0004078f) popup_find_window_ParamLimits

0xabdb,	// (0x00040a46) popup_note_image_window_ParamLimits

0xd3ac,	// (0x00043217) list_double2_graphic_pane_vc_g1_ParamLimits

0xd3ac,	// (0x00043217) list_double2_graphic_pane_vc_g1

0xd512,	// (0x0004337d) list_double2_graphic_pane_vc_g2_ParamLimits

0xd512,	// (0x0004337d) list_double2_graphic_pane_vc_g2

0xd51e,	// (0x00043389) list_double2_graphic_pane_vc_g3_ParamLimits

0xd51e,	// (0x00043389) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x00045602) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x00045602) list_double2_graphic_pane_vc_g

0xd52a,	// (0x00043395) list_double2_graphic_pane_vc_t1_ParamLimits

0xd52a,	// (0x00043395) list_double2_graphic_pane_vc_t1

0xd37e,	// (0x000431e9) list_single_heading_pane_vc_g1_ParamLimits

0xd37e,	// (0x000431e9) list_single_heading_pane_vc_g1

0xd38a,	// (0x000431f5) list_single_heading_pane_vc_g2_ParamLimits

0xd38a,	// (0x000431f5) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0004540c) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0004540c) list_single_heading_pane_vc_g

0xd540,	// (0x000433ab) list_single_heading_pane_vc_t1_ParamLimits

0xd540,	// (0x000433ab) list_single_heading_pane_vc_t1

0xd556,	// (0x000433c1) list_single_heading_pane_vc_t2_ParamLimits

0xd556,	// (0x000433c1) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x00045623) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x00045623) list_single_heading_pane_vc_t

0xd56c,	// (0x000433d7) list_setting_number_pane_vc_g1_ParamLimits

0xd56c,	// (0x000433d7) list_setting_number_pane_vc_g1

0xd578,	// (0x000433e3) list_setting_number_pane_vc_g2_ParamLimits

0xd578,	// (0x000433e3) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x00045628) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x00045628) list_setting_number_pane_vc_g

0xd584,	// (0x000433ef) list_setting_number_pane_vc_t1_ParamLimits

0xd584,	// (0x000433ef) list_setting_number_pane_vc_t1

0xd598,	// (0x00043403) list_setting_number_pane_vc_t2_ParamLimits

0xd598,	// (0x00043403) list_setting_number_pane_vc_t2

0xd5b4,	// (0x0004341f) list_setting_number_pane_vc_t3_ParamLimits

0xd5b4,	// (0x0004341f) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x0004562d) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x0004562d) list_setting_number_pane_vc_t

0xd5e2,	// (0x0004344d) set_value_pane_vc_ParamLimits

0xd5e2,	// (0x0004344d) set_value_pane_vc

0xd619,	// (0x00043484) list_double2_graphic_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double2_graphic_pane_vc

0x46f0,	// (0x0003a55b) list_double2_large_graphic_pane_vc_ParamLimits

0x46f0,	// (0x0003a55b) list_double2_large_graphic_pane_vc

0xd619,	// (0x00043484) list_double2_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double2_pane_vc

0xd619,	// (0x00043484) list_double_graphic_heading_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double_graphic_heading_pane_vc

0xd619,	// (0x00043484) list_double_graphic_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double_graphic_pane_vc

0xd619,	// (0x00043484) list_double_heading_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double_heading_pane_vc

0x4704,	// (0x0003a56f) list_double_large_graphic_pane_vc_ParamLimits

0x4704,	// (0x0003a56f) list_double_large_graphic_pane_vc

0xd619,	// (0x00043484) list_double_number_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double_number_pane_vc

0xd619,	// (0x00043484) list_double_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double_pane_vc

0xd619,	// (0x00043484) list_double_time_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_double_time_pane_vc

0xd619,	// (0x00043484) list_setting_number_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_setting_number_pane_vc

0xd619,	// (0x00043484) list_setting_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_setting_pane_vc

0xd619,	// (0x00043484) list_single_graphic_heading_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_single_graphic_heading_pane_vc

0xd619,	// (0x00043484) list_single_heading_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_single_heading_pane_vc

0xd619,	// (0x00043484) list_single_number_heading_pane_vc_ParamLimits

0xd619,	// (0x00043484) list_single_number_heading_pane_vc

0xd630,	// (0x0004349b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd630,	// (0x0004349b) list_double_graphic_heading_pane_vc_g1

0xd512,	// (0x0004337d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd512,	// (0x0004337d) list_double_graphic_heading_pane_vc_g2

0xd51e,	// (0x00043389) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd51e,	// (0x00043389) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x00045832) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x00045832) list_double_graphic_heading_pane_vc_g

0xd63c,	// (0x000434a7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd63c,	// (0x000434a7) list_double_graphic_heading_pane_vc_t1

0xd652,	// (0x000434bd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd652,	// (0x000434bd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x00045839) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x00045839) list_double_graphic_heading_pane_vc_t

0xd56c,	// (0x000433d7) list_setting_pane_vc_g1_ParamLimits

0xd56c,	// (0x000433d7) list_setting_pane_vc_g1

0xd578,	// (0x000433e3) list_setting_pane_vc_g2_ParamLimits

0xd578,	// (0x000433e3) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x00045628) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x00045628) list_setting_pane_vc_g

0xd670,	// (0x000434db) list_setting_pane_vc_t1_ParamLimits

0xd670,	// (0x000434db) list_setting_pane_vc_t1

0xd68c,	// (0x000434f7) list_setting_pane_vc_t2_ParamLimits

0xd68c,	// (0x000434f7) list_setting_pane_vc_t2

0x0001,

0xfa11,	// (0x0004587c) list_setting_pane_vc_t_ParamLimits

0xfa11,	// (0x0004587c) list_setting_pane_vc_t

0xd5e2,	// (0x0004344d) set_value_pane_cp_vc_ParamLimits

0xd5e2,	// (0x0004344d) set_value_pane_cp_vc

0xd37e,	// (0x000431e9) list_single_number_heading_pane_vc_g1_ParamLimits

0xd37e,	// (0x000431e9) list_single_number_heading_pane_vc_g1

0xd38a,	// (0x000431f5) list_single_number_heading_pane_vc_g2_ParamLimits

0xd38a,	// (0x000431f5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0004540c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0004540c) list_single_number_heading_pane_vc_g

0xd396,	// (0x00043201) list_single_number_heading_pane_vc_t1_ParamLimits

0xd396,	// (0x00043201) list_single_number_heading_pane_vc_t1

0xd6a8,	// (0x00043513) list_single_number_heading_pane_vc_t2_ParamLimits

0xd6a8,	// (0x00043513) list_single_number_heading_pane_vc_t2

0xd6be,	// (0x00043529) list_single_number_heading_pane_vc_t3_ParamLimits

0xd6be,	// (0x00043529) list_single_number_heading_pane_vc_t3

0x0002,

0xfa16,	// (0x00045881) list_single_number_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00045881) list_single_number_heading_pane_vc_t

0xd3ac,	// (0x00043217) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd3ac,	// (0x00043217) list_single_graphic_heading_pane_vc_g1

0xd37e,	// (0x000431e9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd37e,	// (0x000431e9) list_single_graphic_heading_pane_vc_g4

0xd38a,	// (0x000431f5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd38a,	// (0x000431f5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1d,	// (0x00045888) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1d,	// (0x00045888) list_single_graphic_heading_pane_vc_g

0xd396,	// (0x00043201) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd396,	// (0x00043201) list_single_graphic_heading_pane_vc_t1

0xd6d0,	// (0x0004353b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd6d0,	// (0x0004353b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x0004588f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x0004588f) list_single_graphic_heading_pane_vc_t

0xd37e,	// (0x000431e9) list_double2_pane_vc_g1_ParamLimits

0xd37e,	// (0x000431e9) list_double2_pane_vc_g1

0xd38a,	// (0x000431f5) list_double2_pane_vc_g2_ParamLimits

0xd38a,	// (0x000431f5) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x0004540c) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x0004540c) list_double2_pane_vc_g

0xd603,	// (0x0004346e) list_double2_pane_vc_t1_ParamLimits

0xd603,	// (0x0004346e) list_double2_pane_vc_t1

0xd3b8,	// (0x00043223) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd3b8,	// (0x00043223) list_double2_large_graphic_pane_vc_g1

0xd3c4,	// (0x0004322f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd3c4,	// (0x0004322f) list_double2_large_graphic_pane_vc_g2

0xd3d0,	// (0x0004323b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd3d0,	// (0x0004323b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00045429) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00045429) list_double2_large_graphic_pane_vc_g

0xd3dc,	// (0x00043247) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd3dc,	// (0x00043247) list_double2_large_graphic_pane_vc_t1

0xd6e2,	// (0x0004354d) list_double_time_pane_vc_g1_ParamLimits

0xd6e2,	// (0x0004354d) list_double_time_pane_vc_g1

0xd6ee,	// (0x00043559) list_double_time_pane_vc_g2_ParamLimits

0xd6ee,	// (0x00043559) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00045894) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00045894) list_double_time_pane_vc_g

0xd6fa,	// (0x00043565) list_double_time_pane_vc_t1_ParamLimits

0xd6fa,	// (0x00043565) list_double_time_pane_vc_t1

0xd724,	// (0x0004358f) list_double_time_pane_vc_t2_ParamLimits

0xd724,	// (0x0004358f) list_double_time_pane_vc_t2

0xd76d,	// (0x000435d8) list_double_time_pane_vc_t3_ParamLimits

0xd76d,	// (0x000435d8) list_double_time_pane_vc_t3

0xd77f,	// (0x000435ea) list_double_time_pane_vc_t4_ParamLimits

0xd77f,	// (0x000435ea) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x00045899) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x00045899) list_double_time_pane_vc_t

0xd37e,	// (0x000431e9) list_double_pane_vc_g1_ParamLimits

0xd37e,	// (0x000431e9) list_double_pane_vc_g1

0xd38a,	// (0x000431f5) list_double_pane_vc_g2_ParamLimits

0xd38a,	// (0x000431f5) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x0004540c) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x0004540c) list_double_pane_vc_g

0xd793,	// (0x000435fe) list_double_pane_vc_t1_ParamLimits

0xd793,	// (0x000435fe) list_double_pane_vc_t1

0xd7a7,	// (0x00043612) list_double_pane_vc_t2_ParamLimits

0xd7a7,	// (0x00043612) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x000458a2) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x000458a2) list_double_pane_vc_t

0xd37e,	// (0x000431e9) list_double_number_pane_vc_g1_ParamLimits

0xd37e,	// (0x000431e9) list_double_number_pane_vc_g1

0xd38a,	// (0x000431f5) list_double_number_pane_vc_g2_ParamLimits

0xd38a,	// (0x000431f5) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x0004540c) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x0004540c) list_double_number_pane_vc_g

0xd7bd,	// (0x00043628) list_double_number_pane_vc_t1_ParamLimits

0xd7bd,	// (0x00043628) list_double_number_pane_vc_t1

0xd7cf,	// (0x0004363a) list_double_number_pane_vc_t2_ParamLimits

0xd7cf,	// (0x0004363a) list_double_number_pane_vc_t2

0xd7e3,	// (0x0004364e) list_double_number_pane_vc_t3_ParamLimits

0xd7e3,	// (0x0004364e) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x000458a7) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x000458a7) list_double_number_pane_vc_t

0xd7fb,	// (0x00043666) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd7fb,	// (0x00043666) list_double_large_graphic_pane_vc_g1

0xd81d,	// (0x00043688) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd81d,	// (0x00043688) list_double_large_graphic_pane_vc_g2

0xd831,	// (0x0004369c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd831,	// (0x0004369c) list_double_large_graphic_pane_vc_g3

0xd840,	// (0x000436ab) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd840,	// (0x000436ab) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x000458ae) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x000458ae) list_double_large_graphic_pane_vc_g

0xd84c,	// (0x000436b7) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd84c,	// (0x000436b7) list_double_large_graphic_pane_vc_t1

0xd868,	// (0x000436d3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd868,	// (0x000436d3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x000458b7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x000458b7) list_double_large_graphic_pane_vc_t

0xd512,	// (0x0004337d) list_double_heading_pane_vc_g1_ParamLimits

0xd512,	// (0x0004337d) list_double_heading_pane_vc_g1

0xd51e,	// (0x00043389) list_double_heading_pane_vc_g2_ParamLimits

0xd51e,	// (0x00043389) list_double_heading_pane_vc_g2

0x0001,

0xfa51,	// (0x000458bc) list_double_heading_pane_vc_g_ParamLimits

0xfa51,	// (0x000458bc) list_double_heading_pane_vc_g

0xd888,	// (0x000436f3) list_double_heading_pane_vc_t1_ParamLimits

0xd888,	// (0x000436f3) list_double_heading_pane_vc_t1

0xd89a,	// (0x00043705) list_double_heading_pane_vc_t2_ParamLimits

0xd89a,	// (0x00043705) list_double_heading_pane_vc_t2

0x0001,

0xfa56,	// (0x000458c1) list_double_heading_pane_vc_t_ParamLimits

0xfa56,	// (0x000458c1) list_double_heading_pane_vc_t

0xd8b2,	// (0x0004371d) list_double_graphic_pane_vc_g1_ParamLimits

0xd8b2,	// (0x0004371d) list_double_graphic_pane_vc_g1

0xd8c5,	// (0x00043730) list_double_graphic_pane_vc_g2_ParamLimits

0xd8c5,	// (0x00043730) list_double_graphic_pane_vc_g2

0xd37e,	// (0x000431e9) list_double_graphic_pane_vc_g3_ParamLimits

0xd37e,	// (0x000431e9) list_double_graphic_pane_vc_g3

0x0003,

0xfa5b,	// (0x000458c6) list_double_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x000458c6) list_double_graphic_pane_vc_g

0xd8e2,	// (0x0004374d) list_double_graphic_pane_vc_t1_ParamLimits

0xd8e2,	// (0x0004374d) list_double_graphic_pane_vc_t1

0xd90c,	// (0x00043777) list_double_graphic_pane_vc_t2_ParamLimits

0xd90c,	// (0x00043777) list_double_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x000458cf) list_double_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x000458cf) list_double_graphic_pane_vc_t

0xeb11,	// (0x0004497c) aid_size_cell_fastswap

0x97b8,	// (0x0003f623) aid_size_cell_touch_ParamLimits

0x97b8,	// (0x0003f623) aid_size_cell_touch

0xece7,	// (0x00044b52) popup_fast_swap_wide_window_ParamLimits

0xece7,	// (0x00044b52) popup_fast_swap_wide_window

0x9934,	// (0x0003f79f) touch_pane_ParamLimits

0x9934,	// (0x0003f79f) touch_pane

0xbfd6,	// (0x00041e41) button_value_adjust_pane_cp2

0xd415,	// (0x00043280) button_value_adjust_pane_cp4

0xd41d,	// (0x00043288) form_field_data_pane_cp2

0xa1b8,	// (0x00040023) form_field_data_wide_pane_cp2

0xf2a5,	// (0x00045110) bg_scroll_pane_ParamLimits

0xf2c4,	// (0x0004512f) scroll_handle_pane_ParamLimits

0xf2d8,	// (0x00045143) scroll_sc2_down_pane_ParamLimits

0xf2d8,	// (0x00045143) scroll_sc2_down_pane

0xf2ff,	// (0x0004516a) scroll_sc2_up_pane_ParamLimits

0xf2ff,	// (0x0004516a) scroll_sc2_up_pane

0xcb0f,	// (0x0004297a) grid_wheel_folder_pane_g1_ParamLimits

0xcb0f,	// (0x0004297a) grid_wheel_folder_pane_g1

0x00ed,	// (0x00035f58) clock_nsta_pane_cp2_ParamLimits

0x00ed,	// (0x00035f58) clock_nsta_pane_cp2

0xa611,	// (0x0004047c) listscroll_midp_pane_ParamLimits

0xa61d,	// (0x00040488) midp_canvas_pane

0x2bda,	// (0x00038a45) nsta_clock_indic_pane

0x2c16,	// (0x00038a81) listscroll_form_pane_vc

0x2c1e,	// (0x00038a89) listscroll_set_pane_vc_ParamLimits

0x2c1e,	// (0x00038a89) listscroll_set_pane_vc

0xc196,	// (0x00042001) clock_nsta_pane

0xc1c0,	// (0x0004202b) indicator_nsta_pane

0x3078,	// (0x00038ee3) bg_popup_sub_pane_cp2_ParamLimits

0x308c,	// (0x00038ef7) find_pane_cp2_ParamLimits

0x308c,	// (0x00038ef7) find_pane_cp2

0x30a2,	// (0x00038f0d) grid_toobar_pane_ParamLimits

0x3182,	// (0x00038fed) list_form_gen_pane_vc_ParamLimits

0x3182,	// (0x00038fed) list_form_gen_pane_vc

0x3198,	// (0x00039003) scroll_pane_cp8_vc_ParamLimits

0x3198,	// (0x00039003) scroll_pane_cp8_vc

0x3214,	// (0x0003907f) data_form_wide_pane_vc_ParamLimits

0x3214,	// (0x0003907f) data_form_wide_pane_vc

0x3220,	// (0x0003908b) form_field_data_wide_pane_vc_g1

0x3228,	// (0x00039093) form_field_data_wide_pane_vc_t1_ParamLimits

0x3228,	// (0x00039093) form_field_data_wide_pane_vc_t1

0xbfea,	// (0x00041e55) input_focus_pane_cp6_vc_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_cp6_vc

0x3544,	// (0x000393af) list_midp_pane_ParamLimits

0x48e6,	// (0x0003a751) scroll_pane_cp16_ParamLimits

0x48e6,	// (0x0003a751) scroll_pane_cp16

0x359a,	// (0x00039405) button_value_adjust_pane_ParamLimits

0x359a,	// (0x00039405) button_value_adjust_pane

0xc761,	// (0x000425cc) button_value_adjust_pane_cp6_ParamLimits

0xc761,	// (0x000425cc) button_value_adjust_pane_cp6

0xc89d,	// (0x00042708) settings_code_pane_cp_ParamLimits

0xc89d,	// (0x00042708) settings_code_pane_cp

0x8898,	// (0x0003e703) cell_touch_pane_g1

0x8898,	// (0x0003e703) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x00045547) cell_touch_pane_g

0xc9e3,	// (0x0004284e) cell_touch_pane_cp_ParamLimits

0xc9e3,	// (0x0004284e) cell_touch_pane_cp

0xc9ff,	// (0x0004286a) cell_touch_pane_ParamLimits

0xc9ff,	// (0x0004286a) cell_touch_pane

0x8898,	// (0x0003e703) scroll_sc2_down_pane_g1

0x8898,	// (0x0003e703) scroll_sc2_up_pane_g1

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp4_vc

0x4c84,	// (0x0003aaef) list_set_graphic_pane_vc_g1_ParamLimits

0x4c84,	// (0x0003aaef) list_set_graphic_pane_vc_g1

0x4c90,	// (0x0003aafb) list_set_graphic_pane_vc_g2_ParamLimits

0x4c90,	// (0x0003aafb) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0004583e) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0004583e) list_set_graphic_pane_vc_g

0x4c9c,	// (0x0003ab07) text_primary_small_cp13_vc_ParamLimits

0x4c9c,	// (0x0003ab07) text_primary_small_cp13_vc

0x4cb4,	// (0x0003ab1f) list_set_graphic_pane_vc_ParamLimits

0x4cb4,	// (0x0003ab1f) list_set_graphic_pane_vc

0x88a2,	// (0x0003e70d) input_focus_pane_cp2_vc

0x8898,	// (0x0003e703) setting_code_pane_vc_g1

0x8d6f,	// (0x0003ebda) setting_code_pane_vc_t1

0x4cc7,	// (0x0003ab32) set_text_pane_vc_t1_ParamLimits

0x4cc7,	// (0x0003ab32) set_text_pane_vc_t1

0x88a2,	// (0x0003e70d) input_focus_pane_cp1_vc

0x4ce8,	// (0x0003ab53) list_set_text_pane_vc

0x8898,	// (0x0003e703) setting_text_pane_vc_g1

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp2_vc

0x8d66,	// (0x0003ebd1) setting_slider_graphic_pane_vc_g1

0x4cf2,	// (0x0003ab5d) setting_slider_graphic_pane_vc_t1

0x4d04,	// (0x0003ab6f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x00045843) setting_slider_graphic_pane_vc_t

0x4d16,	// (0x0003ab81) slider_set_pane_cp_vc

0x4d20,	// (0x0003ab8b) slider_set_pane_vc_g1

0x4d29,	// (0x0003ab94) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x00045848) slider_set_pane_vc_g

0xc042,	// (0x00041ead) set_opt_bg_pane_g1_copy1

0xc04a,	// (0x00041eb5) set_opt_bg_pane_g2_copy1

0x4d55,	// (0x0003abc0) set_opt_bg_pane_g3_copy1

0xc05a,	// (0x00041ec5) set_opt_bg_pane_g4_copy1

0xc062,	// (0x00041ecd) set_opt_bg_pane_g5_copy1

0xc06a,	// (0x00041ed5) set_opt_bg_pane_g6_copy1

0x4d5f,	// (0x0003abca) set_opt_bg_pane_g7_copy1

0x4d69,	// (0x0003abd4) set_opt_bg_pane_g8_copy1

0x4d73,	// (0x0003abde) set_opt_bg_pane_g9_copy1

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp_vc

0x4d7d,	// (0x0003abe8) setting_slider_pane_vc_t1

0x4d8c,	// (0x0003abf7) setting_slider_pane_vc_t2

0x4d9e,	// (0x0003ac09) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x00045857) setting_slider_pane_vc_t

0x4db0,	// (0x0003ac1b) slider_set_pane_vc

0x0af9,	// (0x00036964) volume_set_pane_vc_g1

0x0b02,	// (0x0003696d) volume_set_pane_vc_g2

0x0b0b,	// (0x00036976) volume_set_pane_vc_g3

0x0b14,	// (0x0003697f) volume_set_pane_vc_g4

0x0b1d,	// (0x00036988) volume_set_pane_vc_g5

0x0b26,	// (0x00036991) volume_set_pane_vc_g6

0x0b2f,	// (0x0003699a) volume_set_pane_vc_g7

0x0b38,	// (0x000369a3) volume_set_pane_vc_g8

0x0b41,	// (0x000369ac) volume_set_pane_vc_g9

0x0b4a,	// (0x000369b5) volume_set_pane_vc_g10

0x0009,

0xf9f3,	// (0x0004585e) volume_set_pane_vc_g

0x4dba,	// (0x0003ac25) volume_set_pane_vc

0x4dc4,	// (0x0003ac2f) button_value_adjust_pane_cp1_vc

0x4dce,	// (0x0003ac39) list_highlight_pane_cp2_vc

0x4dd7,	// (0x0003ac42) list_set_pane_vc_ParamLimits

0x4dd7,	// (0x0003ac42) list_set_pane_vc

0x4e45,	// (0x0003acb0) main_pane_set_vc_t1_ParamLimits

0x4e45,	// (0x0003acb0) main_pane_set_vc_t1

0x4e5a,	// (0x0003acc5) main_pane_set_vc_t2_ParamLimits

0x4e5a,	// (0x0003acc5) main_pane_set_vc_t2

0x4e6c,	// (0x0003acd7) main_pane_set_vc_t3_ParamLimits

0x4e6c,	// (0x0003acd7) main_pane_set_vc_t3

0x4e80,	// (0x0003aceb) main_pane_set_vc_t4_ParamLimits

0x4e80,	// (0x0003aceb) main_pane_set_vc_t4

0x0003,

0xfa08,	// (0x00045873) main_pane_set_vc_t_ParamLimits

0xfa08,	// (0x00045873) main_pane_set_vc_t

0x4e94,	// (0x0003acff) setting_code_pane_vc_ParamLimits

0x4e94,	// (0x0003acff) setting_code_pane_vc

0x4ea5,	// (0x0003ad10) setting_slider_graphic_pane_vc

0x4ea5,	// (0x0003ad10) setting_slider_pane_vc

0x4ea5,	// (0x0003ad10) setting_text_pane_vc

0x4ea5,	// (0x0003ad10) setting_volume_pane_vc

0x4eaf,	// (0x0003ad1a) scroll_pane_cp121_vc

0xbfc4,	// (0x00041e2f) set_content_pane_vc

0x4eb7,	// (0x0003ad22) button_value_adjust_pane_g1

0x4ec0,	// (0x0003ad2b) button_value_adjust_pane_g2

0x0001,

0xfa69,	// (0x000458d4) button_value_adjust_pane_g

0x4ec9,	// (0x0003ad34) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4ec9,	// (0x0003ad34) form_field_slider_wide_pane_vc_t1

0x4edb,	// (0x0003ad46) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4edb,	// (0x0003ad46) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6e,	// (0x000458d9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x000458d9) form_field_slider_wide_pane_vc_t

0x8d94,	// (0x0003ebff) input_focus_pane_cp10_vc_ParamLimits

0x8d94,	// (0x0003ebff) input_focus_pane_cp10_vc

0x4f07,	// (0x0003ad72) slider_cont_pane_cp1_vc_ParamLimits

0x4f07,	// (0x0003ad72) slider_cont_pane_cp1_vc

0x4f19,	// (0x0003ad84) slider_form_pane_g1_cp2

0x4d29,	// (0x0003ab94) slider_form_pane_g2_cp2

0x4f46,	// (0x0003adb1) form_field_slider_pane_vc_t3

0x4f54,	// (0x0003adbf) form_field_slider_pane_vc_t4

0x4f62,	// (0x0003adcd) slider_form_pane_vc_ParamLimits

0x4f62,	// (0x0003adcd) slider_form_pane_vc

0x4f6f,	// (0x0003adda) form_field_slider_pane_vc_t1_ParamLimits

0x4f6f,	// (0x0003adda) form_field_slider_pane_vc_t1

0x4edb,	// (0x0003ad46) form_field_slider_pane_vc_t2_ParamLimits

0x4edb,	// (0x0003ad46) form_field_slider_pane_vc_t2

0x0001,

0xfa80,	// (0x000458eb) form_field_slider_pane_vc_t_ParamLimits

0xfa80,	// (0x000458eb) form_field_slider_pane_vc_t

0x8d94,	// (0x0003ebff) input_focus_pane_cp9_vc_ParamLimits

0x8d94,	// (0x0003ebff) input_focus_pane_cp9_vc

0x4f85,	// (0x0003adf0) slider_cont_pane_vc_ParamLimits

0x4f85,	// (0x0003adf0) slider_cont_pane_vc

0x4f99,	// (0x0003ae04) list_form_graphic_pane_cp_vc_ParamLimits

0x4f99,	// (0x0003ae04) list_form_graphic_pane_cp_vc

0x3220,	// (0x0003908b) form_field_popup_wide_pane_vc_g1

0x4fae,	// (0x0003ae19) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4fae,	// (0x0003ae19) form_field_popup_wide_pane_vc_t1

0xbfea,	// (0x00041e55) input_focus_pane_cp8_vc_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_cp8_vc

0x4ff3,	// (0x0003ae5e) list_form_wide_pane_vc_ParamLimits

0x4ff3,	// (0x0003ae5e) list_form_wide_pane_vc

0x4fff,	// (0x0003ae6a) list_form_graphic_pane_vc_g1

0x5007,	// (0x0003ae72) list_form_graphic_pane_vc_t1_ParamLimits

0x5007,	// (0x0003ae72) list_form_graphic_pane_vc_t1

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp5_vc_ParamLimits

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp5_vc

0x5023,	// (0x0003ae8e) list_form_graphic_pane_vc_ParamLimits

0x5023,	// (0x0003ae8e) list_form_graphic_pane_vc

0x3220,	// (0x0003908b) form_field_popup_pane_vc_g1

0x5039,	// (0x0003aea4) form_field_popup_pane_vc_t1_ParamLimits

0x5039,	// (0x0003aea4) form_field_popup_pane_vc_t1

0xbfea,	// (0x00041e55) input_focus_pane_cp7_vc_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_cp7_vc

0x5050,	// (0x0003aebb) list_form_pane_vc_ParamLimits

0x5050,	// (0x0003aebb) list_form_pane_vc

0x505c,	// (0x0003aec7) data_form_pane_vc_t1_ParamLimits

0x505c,	// (0x0003aec7) data_form_pane_vc_t1

0xc042,	// (0x00041ead) input_focus_pane_vc_g1

0xc04a,	// (0x00041eb5) input_focus_pane_vc_g2

0xc052,	// (0x00041ebd) input_focus_pane_vc_g3

0xc05a,	// (0x00041ec5) input_focus_pane_vc_g4

0xc062,	// (0x00041ecd) input_focus_pane_vc_g5

0xc06a,	// (0x00041ed5) input_focus_pane_vc_g6

0xc072,	// (0x00041edd) input_focus_pane_vc_g7

0xc07a,	// (0x00041ee5) input_focus_pane_vc_g8

0xc082,	// (0x00041eed) input_focus_pane_vc_g9

0x8898,	// (0x0003e703) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x000454d0) input_focus_pane_vc_g

0x3214,	// (0x0003907f) data_form_pane_vc_ParamLimits

0x3214,	// (0x0003907f) data_form_pane_vc

0x3220,	// (0x0003908b) form_field_data_pane_vc_g1

0x5079,	// (0x0003aee4) form_field_data_pane_vc_t1_ParamLimits

0x5079,	// (0x0003aee4) form_field_data_pane_vc_t1

0xbfea,	// (0x00041e55) input_focus_pane_vc_ParamLimits

0xbfea,	// (0x00041e55) input_focus_pane_vc

0x5093,	// (0x0003aefe) button_value_adjust_pane_cp3_vc

0x509b,	// (0x0003af06) button_value_adjust_pane_cp5_vc

0x50a3,	// (0x0003af0e) form_field_data_pane_vc_ParamLimits

0x50a3,	// (0x0003af0e) form_field_data_pane_vc

0x50be,	// (0x0003af29) form_field_data_pane_vc_cp2

0x50c6,	// (0x0003af31) form_field_data_wide_pane_vc_ParamLimits

0x50c6,	// (0x0003af31) form_field_data_wide_pane_vc

0x50e0,	// (0x0003af4b) form_field_data_wide_pane_vc_cp2

0x50e8,	// (0x0003af53) form_field_popup_pane_vc_ParamLimits

0x50e8,	// (0x0003af53) form_field_popup_pane_vc

0x5103,	// (0x0003af6e) form_field_popup_wide_pane_vc_ParamLimits

0x5103,	// (0x0003af6e) form_field_popup_wide_pane_vc

0x511d,	// (0x0003af88) form_field_slider_pane_vc_ParamLimits

0x511d,	// (0x0003af88) form_field_slider_pane_vc

0x5130,	// (0x0003af9b) form_field_slider_wide_pane_vc_ParamLimits

0x5130,	// (0x0003af9b) form_field_slider_wide_pane_vc

0xca1d,	// (0x00042888) grid_touch_1_pane_ParamLimits

0xca1d,	// (0x00042888) grid_touch_1_pane

0xca31,	// (0x0004289c) grid_touch_2_pane_ParamLimits

0xca31,	// (0x0004289c) grid_touch_2_pane

0x5216,	// (0x0003b081) touch_pane_g1_ParamLimits

0x5216,	// (0x0003b081) touch_pane_g1

0x5169,	// (0x0003afd4) cell_app_pane_cp_wide_ParamLimits

0x5169,	// (0x0003afd4) cell_app_pane_cp_wide

0x517a,	// (0x0003afe5) grid_popup_fast_wide_pane_ParamLimits

0x517a,	// (0x0003afe5) grid_popup_fast_wide_pane

0x518e,	// (0x0003aff9) scroll_pane_cp19_ParamLimits

0x518e,	// (0x0003aff9) scroll_pane_cp19

0x88a2,	// (0x0003e70d) bg_popup_window_pane_cp20

0x51a2,	// (0x0003b00d) listscroll_popup_fast_wide_pane

0xca5d,	// (0x000428c8) grid_indicator_nsta_pane

0x51bc,	// (0x0003b027) clock_nsta_pane_g1

0x51c5,	// (0x0003b030) clock_nsta_pane_t1

0xca69,	// (0x000428d4) cell_indicator_nsta_pane_ParamLimits

0xca69,	// (0x000428d4) cell_indicator_nsta_pane

0x5216,	// (0x0003b081) cell_indicator_nsta_pane_g1

0xca84,	// (0x000428ef) cell_indicator_nsta_pane_g2

0x0001,

0xfa91,	// (0x000458fc) cell_indicator_nsta_pane_g

0x5237,	// (0x0003b0a2) clock_nsta_pane_cp

0x5240,	// (0x0003b0ab) indicator_nsta_pane_cp

0x524a,	// (0x0003b0b5) nsta_clock_indic_pane_g1

0xb9e4,	// (0x0004184f) grid_indicator_pane

0xf3f1,	// (0x0004525c) scroll_pane_cp29

0x003c,	// (0x00035ea7) indicator_nsta_pane_cp2_ParamLimits

0x003c,	// (0x00035ea7) indicator_nsta_pane_cp2

0x8d58,	// (0x0003ebc3) main_apps_wheel_pane

0x3401,	// (0x0003926c) form_midp_field_text_pane_ParamLimits

0x3550,	// (0x000393bb) scroll_bar_cp050_ParamLimits

0x52a3,	// (0x0003b10e) cell_indicator_pane_ParamLimits

0x52a3,	// (0x0003b10e) cell_indicator_pane

0x52bb,	// (0x0003b126) cell_indicator_pane_g1

0xca91,	// (0x000428fc) grid_wheel_folder_pane_ParamLimits

0xca91,	// (0x000428fc) grid_wheel_folder_pane

0xca9f,	// (0x0004290a) list_wheel_apps_pane_ParamLimits

0xca9f,	// (0x0004290a) list_wheel_apps_pane

0xcaad,	// (0x00042918) main_apps_wheel_pane_g1_ParamLimits

0xcaad,	// (0x00042918) main_apps_wheel_pane_g1

0xcabd,	// (0x00042928) main_apps_wheel_pane_g2_ParamLimits

0xcabd,	// (0x00042928) main_apps_wheel_pane_g2

0x0001,

0xfaad,	// (0x00045918) main_apps_wheel_pane_g_ParamLimits

0xfaad,	// (0x00045918) main_apps_wheel_pane_g

0xcacd,	// (0x00042938) main_apps_wheel_pane_t1_ParamLimits

0xcacd,	// (0x00042938) main_apps_wheel_pane_t1

0xcae5,	// (0x00042950) list_wheel_apps_pane_g1

0xcaed,	// (0x00042958) list_wheel_apps_pane_g2

0xcaf5,	// (0x00042960) list_wheel_apps_pane_g3

0xcafd,	// (0x00042968) list_wheel_apps_pane_g4

0xcb05,	// (0x00042970) list_wheel_apps_pane_g5

0x0004,

0xfab2,	// (0x0004591d) list_wheel_apps_pane_g

0x2748,	// (0x000385b3) navi_icon_text_pane

0xc08a,	// (0x00041ef5) aid_fill_nsta

0xcb20,	// (0x0004298b) navi_icon_text_pane_g1

0xcb2c,	// (0x00042997) navi_icon_text_pane_t1

0x25de,	// (0x00038449) list_set_graphic_pane_t1_ParamLimits

0x25de,	// (0x00038449) list_set_graphic_pane_t1

0x3cbd,	// (0x00039b28) popup_midp_note_alarm_window_t6_ParamLimits

0x3cbd,	// (0x00039b28) popup_midp_note_alarm_window_t6

0x3ccf,	// (0x00039b3a) popup_midp_note_alarm_window_t7_ParamLimits

0x3ccf,	// (0x00039b3a) popup_midp_note_alarm_window_t7

0x3ce1,	// (0x00039b4c) popup_midp_note_alarm_window_t8_ParamLimits

0x3ce1,	// (0x00039b4c) popup_midp_note_alarm_window_t8

0x3cf3,	// (0x00039b5e) popup_midp_note_alarm_window_t9_ParamLimits

0x3cf3,	// (0x00039b5e) popup_midp_note_alarm_window_t9

0x3d05,	// (0x00039b70) popup_midp_note_alarm_window_t10_ParamLimits

0x3d05,	// (0x00039b70) popup_midp_note_alarm_window_t10

0x3d17,	// (0x00039b82) popup_midp_note_alarm_window_t11_ParamLimits

0x3d17,	// (0x00039b82) popup_midp_note_alarm_window_t11

0x3d29,	// (0x00039b94) scroll_pane_cp17_ParamLimits

0x3d29,	// (0x00039b94) scroll_pane_cp17

0x0af9,	// (0x00036964) volume_small_pane_cp_g1

0x0ed5,	// (0x00036d40) volume_small_pane_cp_g2

0x0ede,	// (0x00036d49) volume_small_pane_cp_g3

0x0ee7,	// (0x00036d52) volume_small_pane_cp_g4

0x0ef0,	// (0x00036d5b) volume_small_pane_cp_g5

0x0ef9,	// (0x00036d64) volume_small_pane_cp_g6

0x0f02,	// (0x00036d6d) volume_small_pane_cp_g7

0x0f0b,	// (0x00036d76) volume_small_pane_cp_g8

0x0f14,	// (0x00036d7f) volume_small_pane_cp_g9

0x0f1d,	// (0x00036d88) volume_small_pane_cp_g10

0x29b9,	// (0x00038824) midp_ticker_pane_g1_ParamLimits

0x29c5,	// (0x00038830) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x0004559c) midp_ticker_pane_g_ParamLimits

0xa6b5,	// (0x00040520) midp_ticker_pane_t1_ParamLimits

0xc0ae,	// (0x00041f19) aid_fill_nsta_2

0x353c,	// (0x000393a7) list_form2_midp_pane

0x46a8,	// (0x0003a513) midp_editing_number_pane_ParamLimits

0x46b7,	// (0x0003a522) midp_ticker_pane_ParamLimits

0x53ae,	// (0x0003b219) form2_midp_field_pane

0x53d2,	// (0x0003b23d) scroll_pane_cp51

0x53f2,	// (0x0003b25d) form2_midp_button_pane_ParamLimits

0x53f2,	// (0x0003b25d) form2_midp_button_pane

0x5404,	// (0x0003b26f) form2_midp_content_pane_ParamLimits

0x5404,	// (0x0003b26f) form2_midp_content_pane

0x541e,	// (0x0003b289) form2_midp_field_choice_group_pane

0x5426,	// (0x0003b291) form2_midp_field_pane_g1

0x542e,	// (0x0003b299) form2_midp_field_pane_g2

0x5436,	// (0x0003b2a1) form2_midp_field_pane_g3

0x543e,	// (0x0003b2a9) form2_midp_field_pane_g4

0x0003,

0xfad7,	// (0x00045942) form2_midp_field_pane_g

0x5446,	// (0x0003b2b1) form2_midp_gauge_slider_pane

0x544e,	// (0x0003b2b9) form2_midp_gauge_wait_pane

0x5456,	// (0x0003b2c1) form2_midp_image_pane_ParamLimits

0x5456,	// (0x0003b2c1) form2_midp_image_pane

0x5471,	// (0x0003b2dc) form2_midp_label_pane_ParamLimits

0x5471,	// (0x0003b2dc) form2_midp_label_pane

0xcb5a,	// (0x000429c5) form2_midp_label_pane_cp_ParamLimits

0xcb5a,	// (0x000429c5) form2_midp_label_pane_cp

0x54b1,	// (0x0003b31c) form2_midp_string_pane_ParamLimits

0x54b1,	// (0x0003b31c) form2_midp_string_pane

0xb0a8,	// (0x00040f13) form2_midp_text_pane_ParamLimits

0xb0a8,	// (0x00040f13) form2_midp_text_pane

0x54c3,	// (0x0003b32e) form2_midp_time_pane

0x54d3,	// (0x0003b33e) input_focus_pane_cp51_ParamLimits

0x54d3,	// (0x0003b33e) input_focus_pane_cp51

0x54eb,	// (0x0003b356) form2_midp_label_pane_t1_ParamLimits

0x54eb,	// (0x0003b356) form2_midp_label_pane_t1

0xb0c9,	// (0x00040f34) form2_mdip_text_pane_t1_ParamLimits

0xb0c9,	// (0x00040f34) form2_mdip_text_pane_t1

0xd92f,	// (0x0004379a) form2_midp_time_pane_t1

0x5539,	// (0x0003b3a4) form2_midp_gauge_slider_pane_t1

0xcb7b,	// (0x000429e6) form2_midp_gauge_slider_pane_t2

0xcb8d,	// (0x000429f8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae0,	// (0x0004594b) form2_midp_gauge_slider_pane_t

0x556f,	// (0x0003b3da) form2_midp_slider_pane

0x557b,	// (0x0003b3e6) form2_midp_gauge_wait_pane_t1

0x5589,	// (0x0003b3f4) form2_midp_wait_pane_ParamLimits

0x5589,	// (0x0003b3f4) form2_midp_wait_pane

0x3267,	// (0x000390d2) list_single_2graphic_pane_cp4_ParamLimits

0x3267,	// (0x000390d2) list_single_2graphic_pane_cp4

0xc4e0,	// (0x0004234b) list_single_midp_graphic_pane_cp_ParamLimits

0xc4e0,	// (0x0004234b) list_single_midp_graphic_pane_cp

0x88a2,	// (0x0003e70d) list_highlight_pane_cp20

0x55cd,	// (0x0003b438) list_single_2graphic_pane_g1_cp4

0x4b66,	// (0x0003a9d1) list_single_2graphic_pane_g2_cp4

0x55d5,	// (0x0003b440) list_single_2graphic_pane_t1_cp4

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp21

0x55e4,	// (0x0003b44f) list_single_midp_graphic_pane_g4_cp

0x55f3,	// (0x0003b45e) list_single_midp_graphic_pane_t1_cp

0xcb9f,	// (0x00042a0a) form2_mdip_string_pane_t1_ParamLimits

0xcb9f,	// (0x00042a0a) form2_mdip_string_pane_t1

0x88a2,	// (0x0003e70d) bg_wml_button_pane_cp2

0x8898,	// (0x0003e703) form2_midp_image_pane_g1

0xd3f2,	// (0x0004325d) list_double_large_graphic_pane_g5_ParamLimits

0xd3f2,	// (0x0004325d) list_double_large_graphic_pane_g5

0xa611,	// (0x0004047c) midp_form_pane_ParamLimits

0x8d58,	// (0x0003ebc3) main_apps_wheel_pane_ParamLimits

0xac61,	// (0x00040acc) popup_preview_window_ParamLimits

0xac61,	// (0x00040acc) popup_preview_window

0x0929,	// (0x00036794) popup_touch_info_window_ParamLimits

0x0929,	// (0x00036794) popup_touch_info_window

0x094b,	// (0x000367b6) popup_touch_menu_window_ParamLimits

0x094b,	// (0x000367b6) popup_touch_menu_window

0x888e,	// (0x0003e6f9) bg_popup_sub_pane_cp6

0x56a4,	// (0x0003b50f) list_touch_menu_pane

0x56ac,	// (0x0003b517) list_single_touch_menu_pane_ParamLimits

0x56ac,	// (0x0003b517) list_single_touch_menu_pane

0x56c4,	// (0x0003b52f) list_single_touch_menu_pane_t1

0x8d58,	// (0x0003ebc3) bg_popup_sub_pane_cp7_ParamLimits

0x8d58,	// (0x0003ebc3) bg_popup_sub_pane_cp7

0x3570,	// (0x000393db) heading_sub_pane

0x56d2,	// (0x0003b53d) list_touch_info_pane_ParamLimits

0x56d2,	// (0x0003b53d) list_touch_info_pane

0x56e2,	// (0x0003b54d) list_single_touch_info_pane_ParamLimits

0x56e2,	// (0x0003b54d) list_single_touch_info_pane

0x56f4,	// (0x0003b55f) list_single_touch_info_pane_t1

0x5702,	// (0x0003b56d) list_single_touch_info_pane_t2

0x0001,

0xfaee,	// (0x00045959) list_single_touch_info_pane_t

0x28db,	// (0x00038746) bg_popup_heading_pane_cp

0x5710,	// (0x0003b57b) heading_sub_pane_t1

0x31ae,	// (0x00039019) bg_popup_preview_window_pane_cp_ParamLimits

0x31ae,	// (0x00039019) bg_popup_preview_window_pane_cp

0x3570,	// (0x000393db) heading_preview_pane

0x56d2,	// (0x0003b53d) list_preview_pane_ParamLimits

0x56d2,	// (0x0003b53d) list_preview_pane

0x571e,	// (0x0003b589) popup_preview_window_g1

0x56e2,	// (0x0003b54d) list_single_preview_pane_ParamLimits

0x56e2,	// (0x0003b54d) list_single_preview_pane

0x5726,	// (0x0003b591) list_single_preview_pane_g1

0x572e,	// (0x0003b599) list_single_preview_pane_t1

0x56f4,	// (0x0003b55f) list_single_preview_pane_t2

0x0001,

0xfaf3,	// (0x0004595e) list_single_preview_pane_t

0x573c,	// (0x0003b5a7) bg_popup_heading_pane_cp2_ParamLimits

0x573c,	// (0x0003b5a7) bg_popup_heading_pane_cp2

0x5752,	// (0x0003b5bd) heading_preview_pane_g1

0x575a,	// (0x0003b5c5) heading_preview_pane_t1_ParamLimits

0x575a,	// (0x0003b5c5) heading_preview_pane_t1

0xb9fb,	// (0x00041866) soft_indicator_pane_t1_ParamLimits

0xbf5d,	// (0x00041dc8) scroll_pane_ParamLimits

0xf2ed,	// (0x00045158) scroll_sc2_left_pane

0xf2f6,	// (0x00045161) scroll_sc2_right_pane

0xf315,	// (0x00045180) scroll_bg_pane_g1_ParamLimits

0xf32a,	// (0x00045195) scroll_bg_pane_g2_ParamLimits

0xf342,	// (0x000451ad) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x00045527) scroll_bg_pane_g_ParamLimits

0xf315,	// (0x00045180) scroll_handle_pane_g1_ParamLimits

0xf364,	// (0x000451cf) scroll_handle_pane_g2_ParamLimits

0xf342,	// (0x000451ad) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x0004552e) scroll_handle_pane_g_ParamLimits

0x0387,	// (0x000361f2) popup_choice_list_window_ParamLimits

0x0387,	// (0x000361f2) popup_choice_list_window

0x3084,	// (0x00038eef) choice_list_pane

0x3106,	// (0x00038f71) cell_toolbar_pane_t1

0x312e,	// (0x00038f99) toolbar_button_pane_ParamLimits

0x41f3,	// (0x0003a05e) ai_gene_pane_1_t2_ParamLimits

0x41f3,	// (0x0003a05e) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x00045751) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x00045751) ai_gene_pane_1_t

0x5777,	// (0x0003b5e2) scroll_sc2_left_pane_g1

0x5777,	// (0x0003b5e2) scroll_sc2_right_pane_g1

0x2c0a,	// (0x00038a75) bg_popup_sub_pane_cp10

0x5781,	// (0x0003b5ec) list_choice_list_pane

0x579a,	// (0x0003b605) list_single_choice_list_pane_ParamLimits

0x579a,	// (0x0003b605) list_single_choice_list_pane

0x57b2,	// (0x0003b61d) list_single_choice_list_pane_g1

0xef1c,	// (0x00044d87) list_single_choice_list_pane_t1_ParamLimits

0xef1c,	// (0x00044d87) list_single_choice_list_pane_t1

0x57ba,	// (0x0003b625) choice_list_pane_g1

0x57c2,	// (0x0003b62d) choice_list_pane_t1

0x888e,	// (0x0003e6f9) input_focus_pane_cp11

0xf0ea,	// (0x00044f55) title_pane_stacon_g2_ParamLimits

0xf0ea,	// (0x00044f55) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x0004550d) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0004550d) title_pane_stacon_g

0x28db,	// (0x00038746) cursor_press_pane

0xa8d8,	// (0x00040743) popup_fep_hwr_window_ParamLimits

0xa8d8,	// (0x00040743) popup_fep_hwr_window

0x04cb,	// (0x00036336) popup_fep_vkb_window_ParamLimits

0x04cb,	// (0x00036336) popup_fep_vkb_window

0x57d0,	// (0x0003b63b) cursor_press_pane_g1

0x0002,

0xfb1c,	// (0x00045987) fep_vkb_side_pane_g_ParamLimits

0x0fa4,	// (0x00036e0f) fep_hwr_candidate_pane_ParamLimits

0x0fa4,	// (0x00036e0f) fep_hwr_candidate_pane

0x0fce,	// (0x00036e39) fep_hwr_side_pane_ParamLimits

0x0fce,	// (0x00036e39) fep_hwr_side_pane

0x0ff0,	// (0x00036e5b) fep_hwr_top_pane_ParamLimits

0x0ff0,	// (0x00036e5b) fep_hwr_top_pane

0x1008,	// (0x00036e73) fep_hwr_write_pane_ParamLimits

0x1008,	// (0x00036e73) fep_hwr_write_pane

0xfb1c,	// (0x00045987) fep_vkb_side_pane_g

0x57d8,	// (0x0003b643) fep_hwr_top_pane_g1

0x57ea,	// (0x0003b655) fep_hwr_top_pane_g2

0x1042,	// (0x00036ead) fep_hwr_top_pane_g3

0x0002,

0xfaf8,	// (0x00045963) fep_hwr_top_pane_g

0x1057,	// (0x00036ec2) fep_hwr_top_text_pane

0x22a2,	// (0x0003810d) fep_hwr_top_text_pane_g1

0x5820,	// (0x0003b68b) fep_hwr_top_text_pane_t1

0x1161,	// (0x00036fcc) fep_hwr_candidate_pane_g1

0x5a6b,	// (0x0003b8d6) fep_vkb_keypad_pane_g3_ParamLimits

0x5a6b,	// (0x0003b8d6) fep_vkb_keypad_pane_g3

0x5a97,	// (0x0003b902) fep_vkb_keypad_pane_g4_ParamLimits

0x5a97,	// (0x0003b902) fep_vkb_keypad_pane_g4

0x5b0e,	// (0x0003b979) fep_vkb_bottom_pane_g2_ParamLimits

0x5b0e,	// (0x0003b979) fep_vkb_bottom_pane_g2

0x0001,

0xfb23,	// (0x0004598e) fep_vkb_bottom_pane_g_ParamLimits

0xfb23,	// (0x0004598e) fep_vkb_bottom_pane_g

0x5777,	// (0x0003b5e2) cell_vkb_side_pane_g2

0x0001,

0xfb2d,	// (0x00045998) cell_vkb_side_pane_g

0x5b99,	// (0x0003ba04) cell_vkb_side_pane_t1

0x5ba7,	// (0x0003ba12) cell_vkb_side_pane_t1_copy1

0x5777,	// (0x0003b5e2) bg_fep_vkb_candidate_pane_g2

0x5ceb,	// (0x0003bb56) cell_vkb_candidate_pane_ParamLimits

0x582e,	// (0x0003b699) aid_size_cell_vkb_ParamLimits

0x582e,	// (0x0003b699) aid_size_cell_vkb

0x5ceb,	// (0x0003bb56) cell_vkb_candidate_pane

0x1188,	// (0x00036ff3) bg_popup_fep_shadow_pane_g1

0xcc35,	// (0x00042aa0) fep_vkb_bottom_pane_ParamLimits

0xcc35,	// (0x00042aa0) fep_vkb_bottom_pane

0x58fd,	// (0x0003b768) fep_vkb_candidate_pane_ParamLimits

0x58fd,	// (0x0003b768) fep_vkb_candidate_pane

0xcc61,	// (0x00042acc) fep_vkb_keypad_pane_ParamLimits

0xcc61,	// (0x00042acc) fep_vkb_keypad_pane

0xcc88,	// (0x00042af3) fep_vkb_side_pane_ParamLimits

0xcc88,	// (0x00042af3) fep_vkb_side_pane

0xccc4,	// (0x00042b2f) fep_vkb_top_pane_ParamLimits

0xccc4,	// (0x00042b2f) fep_vkb_top_pane

0x59c4,	// (0x0003b82f) fep_vkb_top_pane_g1_ParamLimits

0x59c4,	// (0x0003b82f) fep_vkb_top_pane_g1

0x59d3,	// (0x0003b83e) fep_vkb_top_pane_g2_ParamLimits

0x59d3,	// (0x0003b83e) fep_vkb_top_pane_g2

0x59e2,	// (0x0003b84d) fep_vkb_top_pane_g3_ParamLimits

0x59e2,	// (0x0003b84d) fep_vkb_top_pane_g3

0x0003,

0xfb13,	// (0x0004597e) fep_vkb_top_pane_g_ParamLimits

0xfb13,	// (0x0004597e) fep_vkb_top_pane_g

0x5a00,	// (0x0003b86b) fep_vkb_top_text_pane_ParamLimits

0x5a00,	// (0x0003b86b) fep_vkb_top_text_pane

0xcd00,	// (0x00042b6b) fep_vkb_side_pane_g1_ParamLimits

0xcd00,	// (0x00042b6b) fep_vkb_side_pane_g1

0x5a5a,	// (0x0003b8c5) grid_vkb_side_pane_ParamLimits

0x5a5a,	// (0x0003b8c5) grid_vkb_side_pane

0x1190,	// (0x00036ffb) bg_popup_fep_shadow_pane_g2

0x1199,	// (0x00037004) bg_popup_fep_shadow_pane_g3

0x11a1,	// (0x0003700c) bg_popup_fep_shadow_pane_g4

0x11aa,	// (0x00037015) bg_popup_fep_shadow_pane_g5

0x11b4,	// (0x0003701f) bg_popup_fep_shadow_pane_g6

0x11bc,	// (0x00037027) bg_popup_fep_shadow_pane_g7

0xc05a,	// (0x00041ec5) bg_popup_fep_shadow_pane_g8

0x5ab9,	// (0x0003b924) grid_vkb_keypad_number_pane_ParamLimits

0x5ab9,	// (0x0003b924) grid_vkb_keypad_number_pane

0x5acd,	// (0x0003b938) grid_vkb_keypad_pane_ParamLimits

0x5acd,	// (0x0003b938) grid_vkb_keypad_pane

0x5af3,	// (0x0003b95e) fep_vkb_bottom_pane_g1_ParamLimits

0x5af3,	// (0x0003b95e) fep_vkb_bottom_pane_g1

0x5b1c,	// (0x0003b987) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5b1c,	// (0x0003b987) grid_vkb_keypad_bottom_left_pane

0x5b31,	// (0x0003b99c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5b31,	// (0x0003b99c) grid_vkb_keypad_bottom_right_pane

0x5b46,	// (0x0003b9b1) fep_vkb_top_text_pane_g1

0xcd47,	// (0x00042bb2) fep_vkb_top_text_pane_t1

0xcd59,	// (0x00042bc4) cell_vkb_side_pane_ParamLimits

0xcd59,	// (0x00042bc4) cell_vkb_side_pane

0x5777,	// (0x0003b5e2) cell_vkb_side_pane_g1

0x5bb5,	// (0x0003ba20) cell_vkb_keypad_pane_ParamLimits

0x5bb5,	// (0x0003ba20) cell_vkb_keypad_pane

0x5c42,	// (0x0003baad) cell_vkb_keypad_pane_g1

0x0008,

0xfb40,	// (0x000459ab) bg_popup_fep_shadow_pane_g

0x11ce,	// (0x00037039) cell_hwr_side_pane_g1

0x11ce,	// (0x00037039) cell_hwr_side_pane_g2

0x5c4c,	// (0x0003bab7) cell_vkb_keypad_pane_t1

0xcd6f,	// (0x00042bda) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd6f,	// (0x00042bda) cell_vkb_keypad_bottom_left_pane

0xcd84,	// (0x00042bef) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd84,	// (0x00042bef) cell_vkb_keypad_bottom_right_pane

0x5777,	// (0x0003b5e2) cell_vkb_keypad_bottom_left_pane_g1

0x5777,	// (0x0003b5e2) cell_vkb_keypad_bottom_right_pane_g1

0x5cb0,	// (0x0003bb1b) cell_vkb_keypad_number_pane_ParamLimits

0x5cb0,	// (0x0003bb1b) cell_vkb_keypad_number_pane

0x5ccf,	// (0x0003bb3a) cell_vkb_keypad_number_pane_g1

0x5cd9,	// (0x0003bb44) cell_vkb_keypad_number_pane_g2

0x5ce2,	// (0x0003bb4d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb32,	// (0x0004599d) cell_vkb_keypad_number_pane_g

0x5c4c,	// (0x0003bab7) cell_vkb_keypad_number_pane_t1

0x5d0c,	// (0x0003bb77) fep_vkb_candidate_pane_g1

0x0001,

0xfb53,	// (0x000459be) cell_hwr_side_pane_g

0x5d25,	// (0x0003bb90) cell_hwr_side_pane_t1

0x11d8,	// (0x00037043) cell_hwr_side_pane_t1_copy1

0x11e6,	// (0x00037051) cell_hwr_candidate_pane_g1

0x1215,	// (0x00037080) cell_hwr_candidate_pane_t1

0x5777,	// (0x0003b5e2) cell_vkb_candidate_pane_g2

0x5d69,	// (0x0003bbd4) cell_vkb_candidate_pane_t1

0x0f6b,	// (0x00036dd6) bg_popup_fep_shadow_pane_ParamLimits

0x0f6b,	// (0x00036dd6) bg_popup_fep_shadow_pane

0x1022,	// (0x00036e8d) bg_fep_hwr_top_pane_g4

0x57fc,	// (0x0003b667) bg_hwr_side_pane_g1_ParamLimits

0x57fc,	// (0x0003b667) bg_hwr_side_pane_g1

0xb102,	// (0x00040f6d) cell_hwr_side_pane_ParamLimits

0xb102,	// (0x00040f6d) cell_hwr_side_pane

0x10d2,	// (0x00036f3d) fep_hwr_write_pane_g1_ParamLimits

0x10d2,	// (0x00036f3d) fep_hwr_write_pane_g1

0x10df,	// (0x00036f4a) fep_hwr_write_pane_g2_ParamLimits

0x10df,	// (0x00036f4a) fep_hwr_write_pane_g2

0x10ec,	// (0x00036f57) fep_hwr_write_pane_g3_ParamLimits

0x10ec,	// (0x00036f57) fep_hwr_write_pane_g3

0xb122,	// (0x00040f8d) fep_hwr_write_pane_g4_ParamLimits

0xb122,	// (0x00040f8d) fep_hwr_write_pane_g4

0x0005,

0xfaff,	// (0x0004596a) fep_hwr_write_pane_g_ParamLimits

0xfaff,	// (0x0004596a) fep_hwr_write_pane_g

0x1022,	// (0x00036e8d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1022,	// (0x00036e8d) bg_fep_hwr_candidate_pane_g2

0x110f,	// (0x00036f7a) cell_hwr_candidate_pane_ParamLimits

0x110f,	// (0x00036f7a) cell_hwr_candidate_pane

0x1161,	// (0x00036fcc) fep_hwr_candidate_pane_g1_ParamLimits

0x585c,	// (0x0003b6c7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x585c,	// (0x0003b6c7) bg_popup_fep_shadow_pane_cp2

0x59f2,	// (0x0003b85d) fep_vkb_top_pane_g4_ParamLimits

0x59f2,	// (0x0003b85d) fep_vkb_top_pane_g4

0x5a38,	// (0x0003b8a3) fep_vkb_side_pane_g2_ParamLimits

0x5a38,	// (0x0003b8a3) fep_vkb_side_pane_g2

0xa0be,	// (0x0003ff29) list_setting_pane_t4_ParamLimits

0xa0be,	// (0x0003ff29) list_setting_pane_t4

0xa15a,	// (0x0003ffc5) list_setting_number_pane_t5_ParamLimits

0xa15a,	// (0x0003ffc5) list_setting_number_pane_t5

0x22d9,	// (0x00038144) list_double_heading_pane_cp2_ParamLimits

0x22d9,	// (0x00038144) list_double_heading_pane_cp2

0x5d77,	// (0x0003bbe2) list_double_heading_pane_g1_cp2_ParamLimits

0x5d77,	// (0x0003bbe2) list_double_heading_pane_g1_cp2

0x5d83,	// (0x0003bbee) list_double_heading_pane_g2_cp2_ParamLimits

0x5d83,	// (0x0003bbee) list_double_heading_pane_g2_cp2

0x5d97,	// (0x0003bc02) list_double_heading_pane_t1_cp2_ParamLimits

0x5d97,	// (0x0003bc02) list_double_heading_pane_t1_cp2

0x5dad,	// (0x0003bc18) list_double_heading_pane_t2_cp2_ParamLimits

0x5dad,	// (0x0003bc18) list_double_heading_pane_t2_cp2

0x8886,	// (0x0003e6f1) aid_value_unit2

0xed0b,	// (0x00044b76) popup_preview_fixed_window

0xbadb,	// (0x00041946) bg_popup_preview_window_pane_cp02

0x5dbf,	// (0x0003bc2a) list_preview_fixed_pane

0x5e05,	// (0x0003bc70) list_empty_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_empty_pane_fp

0x5e05,	// (0x0003bc70) list_single_cale_day_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_single_cale_day_pane_fp

0x5e05,	// (0x0003bc70) list_single_graphic_heading_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_single_graphic_heading_pane_fp

0x5e05,	// (0x0003bc70) list_single_graphic_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_single_graphic_pane_fp

0x5e05,	// (0x0003bc70) list_single_heading_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_single_heading_pane_fp

0x5e05,	// (0x0003bc70) list_single_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_single_pane_fp

0x5e1e,	// (0x0003bc89) list_single_pane_fp_g1_ParamLimits

0x5e1e,	// (0x0003bc89) list_single_pane_fp_g1

0xd94f,	// (0x000437ba) list_single_pane_fp_g2_ParamLimits

0xd94f,	// (0x000437ba) list_single_pane_fp_g2

0xd95b,	// (0x000437c6) list_single_pane_fp_g3_ParamLimits

0xd95b,	// (0x000437c6) list_single_pane_fp_g3

0x5e2a,	// (0x0003bc95) list_single_pane_fp_g4_ParamLimits

0x5e2a,	// (0x0003bc95) list_single_pane_fp_g4

0x0003,

0xfb66,	// (0x000459d1) list_single_pane_fp_g_ParamLimits

0xfb66,	// (0x000459d1) list_single_pane_fp_g

0xd96f,	// (0x000437da) list_single_pane_fp_t1_ParamLimits

0xd96f,	// (0x000437da) list_single_pane_fp_t1

0xd986,	// (0x000437f1) list_single_graphic_pane_fp_g1_ParamLimits

0xd986,	// (0x000437f1) list_single_graphic_pane_fp_g1

0x5e1e,	// (0x0003bc89) list_single_graphic_pane_fp_g2_ParamLimits

0x5e1e,	// (0x0003bc89) list_single_graphic_pane_fp_g2

0xd94f,	// (0x000437ba) list_single_graphic_pane_fp_g3_ParamLimits

0xd94f,	// (0x000437ba) list_single_graphic_pane_fp_g3

0xd95b,	// (0x000437c6) list_single_graphic_pane_fp_g4_ParamLimits

0xd95b,	// (0x000437c6) list_single_graphic_pane_fp_g4

0x5e2a,	// (0x0003bc95) list_single_graphic_pane_fp_g5_ParamLimits

0x5e2a,	// (0x0003bc95) list_single_graphic_pane_fp_g5

0x0004,

0xfb6f,	// (0x000459da) list_single_graphic_pane_fp_g_ParamLimits

0xfb6f,	// (0x000459da) list_single_graphic_pane_fp_g

0xd992,	// (0x000437fd) list_single_graphic_pane_fp_t1_ParamLimits

0xd992,	// (0x000437fd) list_single_graphic_pane_fp_t1

0xd986,	// (0x000437f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd986,	// (0x000437f1) list_single_graphic_heading_pane_fp_g1

0x5e1e,	// (0x0003bc89) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5e1e,	// (0x0003bc89) list_single_graphic_heading_pane_fp_g2

0xd94f,	// (0x000437ba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd94f,	// (0x000437ba) list_single_graphic_heading_pane_fp_g3

0xd95b,	// (0x000437c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd95b,	// (0x000437c6) list_single_graphic_heading_pane_fp_g4

0x5e2a,	// (0x0003bc95) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5e2a,	// (0x0003bc95) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6f,	// (0x000459da) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6f,	// (0x000459da) list_single_graphic_heading_pane_fp_g

0xd9a8,	// (0x00043813) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd9a8,	// (0x00043813) list_single_graphic_heading_pane_fp_t1

0xd9be,	// (0x00043829) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd9be,	// (0x00043829) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x000459e5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x000459e5) list_single_graphic_heading_pane_fp_t

0xd9d0,	// (0x0004383b) list_single_cale_day_pane_fp_g1_ParamLimits

0xd9d0,	// (0x0004383b) list_single_cale_day_pane_fp_g1

0x5e36,	// (0x0003bca1) list_single_cale_day_pane_fp_g2_ParamLimits

0x5e36,	// (0x0003bca1) list_single_cale_day_pane_fp_g2

0xda08,	// (0x00043873) list_single_cale_day_pane_fp_g3_ParamLimits

0xda08,	// (0x00043873) list_single_cale_day_pane_fp_g3

0xda30,	// (0x0004389b) list_single_cale_day_pane_fp_g4_ParamLimits

0xda30,	// (0x0004389b) list_single_cale_day_pane_fp_g4

0xda54,	// (0x000438bf) list_single_cale_day_pane_fp_g5_ParamLimits

0xda54,	// (0x000438bf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7f,	// (0x000459ea) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7f,	// (0x000459ea) list_single_cale_day_pane_fp_g

0xda78,	// (0x000438e3) list_single_cale_day_pane_fp_t1_ParamLimits

0xda78,	// (0x000438e3) list_single_cale_day_pane_fp_t1

0xda9e,	// (0x00043909) list_single_cale_day_pane_fp_t2_ParamLimits

0xda9e,	// (0x00043909) list_single_cale_day_pane_fp_t2

0xdab7,	// (0x00043922) list_single_cale_day_pane_fp_t3_ParamLimits

0xdab7,	// (0x00043922) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8a,	// (0x000459f5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8a,	// (0x000459f5) list_single_cale_day_pane_fp_t

0x5e1e,	// (0x0003bc89) list_empty_pane_fp_g1_ParamLimits

0x5e1e,	// (0x0003bc89) list_empty_pane_fp_g1

0xdad0,	// (0x0004393b) list_empty_pane_fp_t1

0xdade,	// (0x00043949) list_empty_pane_fp_t2

0x0001,

0xfb91,	// (0x000459fc) list_empty_pane_fp_t

0x5e1e,	// (0x0003bc89) list_single_heading_pane_fp_g1_ParamLimits

0x5e1e,	// (0x0003bc89) list_single_heading_pane_fp_g1

0xd94f,	// (0x000437ba) list_single_heading_pane_fp_g2_ParamLimits

0xd94f,	// (0x000437ba) list_single_heading_pane_fp_g2

0xd95b,	// (0x000437c6) list_single_heading_pane_fp_g3_ParamLimits

0xd95b,	// (0x000437c6) list_single_heading_pane_fp_g3

0x0002,

0xfb96,	// (0x00045a01) list_single_heading_pane_fp_g_ParamLimits

0xfb96,	// (0x00045a01) list_single_heading_pane_fp_g

0xdaec,	// (0x00043957) list_single_heading_pane_fp_t1_ParamLimits

0xdaec,	// (0x00043957) list_single_heading_pane_fp_t1

0xdafe,	// (0x00043969) list_single_heading_pane_fp_t2_ParamLimits

0xdafe,	// (0x00043969) list_single_heading_pane_fp_t2

0x0001,

0xfb9d,	// (0x00045a08) list_single_heading_pane_fp_t_ParamLimits

0xfb9d,	// (0x00045a08) list_single_heading_pane_fp_t

0xef31,	// (0x00044d9c) aid_size_cell_fast

0xbabe,	// (0x00041929) soft_indicator_pane_cp1_t1

0xef6e,	// (0x00044dd9) cell_app_pane_cp2_ParamLimits

0xef6e,	// (0x00044dd9) cell_app_pane_cp2

0x0f8d,	// (0x00036df8) fep_hwr_candidate_drop_down_list_pane

0x117b,	// (0x00036fe6) fep_hwr_candidate_pane_g3_ParamLimits

0x117b,	// (0x00036fe6) fep_hwr_candidate_pane_g3

0xd942,	// (0x000437ad) fep_hwr_candidate_pane_g4_ParamLimits

0xd942,	// (0x000437ad) fep_hwr_candidate_pane_g4

0x0002,

0xfb0c,	// (0x00045977) fep_hwr_candidate_pane_g_ParamLimits

0xfb0c,	// (0x00045977) fep_hwr_candidate_pane_g

0x58ec,	// (0x0003b757) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x58ec,	// (0x0003b757) fep_vkb_candidate_drop_down_list_pane

0x5d14,	// (0x0003bb7f) fep_vkb_candidate_pane_g3

0x5d1c,	// (0x0003bb87) fep_vkb_candidate_pane_g4

0x0002,

0xfb39,	// (0x000459a4) fep_vkb_candidate_pane_g

0x11e6,	// (0x00037051) cell_hwr_candidate_pane_g1_ParamLimits

0x11f4,	// (0x0003705f) cell_hwr_candidate_pane_g3_ParamLimits

0x11f4,	// (0x0003705f) cell_hwr_candidate_pane_g3

0x6f1b,	// (0x0003cd86) cell_hwr_candidate_pane_g4_ParamLimits

0x6f1b,	// (0x0003cd86) cell_hwr_candidate_pane_g4

0x0002,

0xfb58,	// (0x000459c3) cell_hwr_candidate_pane_g_ParamLimits

0xfb58,	// (0x000459c3) cell_hwr_candidate_pane_g

0x5d33,	// (0x0003bb9e) cell_vkb_candidate_pane_g3_ParamLimits

0x5d33,	// (0x0003bb9e) cell_vkb_candidate_pane_g3

0x5d4e,	// (0x0003bbb9) cell_vkb_candidate_pane_g4_ParamLimits

0x5d4e,	// (0x0003bbb9) cell_vkb_candidate_pane_g4

0x5e42,	// (0x0003bcad) cell_app_pane_cp2_g1_ParamLimits

0x5e42,	// (0x0003bcad) cell_app_pane_cp2_g1

0x5e60,	// (0x0003bccb) cell_app_pane_cp2_g2_ParamLimits

0x5e60,	// (0x0003bccb) cell_app_pane_cp2_g2

0x0001,

0xfba2,	// (0x00045a0d) cell_app_pane_cp2_g_ParamLimits

0xfba2,	// (0x00045a0d) cell_app_pane_cp2_g

0x5e6c,	// (0x0003bcd7) cell_app_pane_cp2_t1_ParamLimits

0x5e6c,	// (0x0003bcd7) cell_app_pane_cp2_t1

0xbfea,	// (0x00041e55) grid_highlight_pane_cp1_ParamLimits

0xbfea,	// (0x00041e55) grid_highlight_pane_cp1

0x1233,	// (0x0003709e) cell_hwr_candidate_pane_cp1_ParamLimits

0x1233,	// (0x0003709e) cell_hwr_candidate_pane_cp1

0x11e6,	// (0x00037051) fep_hwr_candidate_drop_down_list_pane_g1

0x1257,	// (0x000370c2) fep_hwr_candidate_drop_down_list_pane_g2

0x1264,	// (0x000370cf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x00045a12) fep_hwr_candidate_drop_down_list_pane_g

0x1271,	// (0x000370dc) fep_hwr_candidate_drop_down_list_scroll_pane

0x127a,	// (0x000370e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x127a,	// (0x000370e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1287,	// (0x000370f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1287,	// (0x000370f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1294,	// (0x000370ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1294,	// (0x000370ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x12a1,	// (0x0003710c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12a1,	// (0x0003710c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12bc,	// (0x00037127) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12bc,	// (0x00037127) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x12d7,	// (0x00037142) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x12d7,	// (0x00037142) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x12f2,	// (0x0003715d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x12f2,	// (0x0003715d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x130d,	// (0x00037178) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x130d,	// (0x00037178) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x00045a19) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x00045a19) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5e7e,	// (0x0003bce9) cell_vkb_candidate_pane_cp1_ParamLimits

0x5e7e,	// (0x0003bce9) cell_vkb_candidate_pane_cp1

0x59f2,	// (0x0003b85d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x59f2,	// (0x0003b85d) fep_vkb_candidate_drop_down_list_pane_g1

0x5ea4,	// (0x0003bd0f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5ea4,	// (0x0003bd0f) fep_vkb_candidate_drop_down_list_pane_g2

0x5eb1,	// (0x0003bd1c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5eb1,	// (0x0003bd1c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00045a2a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbf,	// (0x00045a2a) fep_vkb_candidate_drop_down_list_pane_g

0x5ebe,	// (0x0003bd29) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5ebe,	// (0x0003bd29) fep_vkb_candidate_drop_down_list_scroll_pane

0x5ecb,	// (0x0003bd36) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5ecb,	// (0x0003bd36) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5ed8,	// (0x0003bd43) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ed8,	// (0x0003bd43) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5ee4,	// (0x0003bd4f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ee4,	// (0x0003bd4f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5ef0,	// (0x0003bd5b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5ef0,	// (0x0003bd5b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5f11,	// (0x0003bd7c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5f11,	// (0x0003bd7c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5f32,	// (0x0003bd9d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5f32,	// (0x0003bd9d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5f53,	// (0x0003bdbe) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5f53,	// (0x0003bdbe) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5f74,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5f74,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00045a31) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00045a31) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x998a,	// (0x0003f7f5) title_pane_g1_ParamLimits

0x999d,	// (0x0003f808) title_pane_g2_ParamLimits

0xf527,	// (0x00045392) title_pane_g_ParamLimits

0x2292,	// (0x000380fd) aid_call2_pane

0x229a,	// (0x00038105) aid_call_pane

0x22a2,	// (0x0003810d) popup_clock_analogue_window_g1

0x22a2,	// (0x0003810d) popup_clock_analogue_window_g2

0xf44e,	// (0x000452b9) popup_clock_analogue_window_g3

0xf457,	// (0x000452c2) popup_clock_analogue_window_g4

0x8898,	// (0x0003e703) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x0004553c) popup_clock_analogue_window_g

0xf45f,	// (0x000452ca) popup_clock_analogue_window_t1

0xf46d,	// (0x000452d8) clock_digital_number_pane_ParamLimits

0xf46d,	// (0x000452d8) clock_digital_number_pane

0xf479,	// (0x000452e4) clock_digital_number_pane_cp02_ParamLimits

0xf479,	// (0x000452e4) clock_digital_number_pane_cp02

0xf485,	// (0x000452f0) clock_digital_number_pane_cp03_ParamLimits

0xf485,	// (0x000452f0) clock_digital_number_pane_cp03

0xf491,	// (0x000452fc) clock_digital_number_pane_cp04_ParamLimits

0xf491,	// (0x000452fc) clock_digital_number_pane_cp04

0xf49d,	// (0x00045308) clock_digital_separator_pane_ParamLimits

0xf49d,	// (0x00045308) clock_digital_separator_pane

0xf4a9,	// (0x00045314) popup_clock_digital_window_t1_ParamLimits

0xf4a9,	// (0x00045314) popup_clock_digital_window_t1

0x8898,	// (0x0003e703) clock_digital_number_pane_g1

0x8898,	// (0x0003e703) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x00045547) clock_digital_number_pane_g

0x8898,	// (0x0003e703) clock_digital_separator_pane_g1

0x8898,	// (0x0003e703) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x00045547) clock_digital_separator_pane_g

0xc08a,	// (0x00041ef5) aid_fill_nsta_ParamLimits

0xc1c0,	// (0x0004202b) indicator_nsta_pane_ParamLimits

0x2f1f,	// (0x00038d8a) popup_clock_analogue_window

0x2f1f,	// (0x00038d8a) popup_clock_digital_window

0xca5d,	// (0x000428c8) grid_indicator_nsta_pane_ParamLimits

0x51d3,	// (0x0003b03e) clock_nsta_pane_t2

0x0001,

0xfa8c,	// (0x000458f7) clock_nsta_pane_t

0xf29b,	// (0x00045106) aid_size_max_handle

0xa455,	// (0x000402c0) aid_size_min_handle

0x28db,	// (0x00038746) editor_scroll_pane

0x5f8f,	// (0x0003bdfa) ex_editor_pane

0xeef7,	// (0x00044d62) scroll_pane_cp13

0xbf89,	// (0x00041df4) scroll_pane_cp14

0x22d1,	// (0x0003813c) scroll_pane_cp36

0xa4e2,	// (0x0004034d) list_single_graphic_hl_pane_cp2_ParamLimits

0xa4e2,	// (0x0004034d) list_single_graphic_hl_pane_cp2

0xc8e6,	// (0x00042751) list_single_graphic_hl_pane_ParamLimits

0xc8e6,	// (0x00042751) list_single_graphic_hl_pane

0xdb14,	// (0x0004397f) aid_size_min_hl_cp1

0x5f97,	// (0x0003be02) list_highlight_pane_cp34_ParamLimits

0x5f97,	// (0x0003be02) list_highlight_pane_cp34

0x5fa8,	// (0x0003be13) list_single_graphic_hl_pane_g1_ParamLimits

0x5fa8,	// (0x0003be13) list_single_graphic_hl_pane_g1

0xb137,	// (0x00040fa2) list_single_graphic_hl_pane_g2_ParamLimits

0xb137,	// (0x00040fa2) list_single_graphic_hl_pane_g2

0xb137,	// (0x00040fa2) list_single_graphic_hl_pane_g3_ParamLimits

0xb137,	// (0x00040fa2) list_single_graphic_hl_pane_g3

0xb143,	// (0x00040fae) list_single_graphic_hl_pane_g4_ParamLimits

0xb143,	// (0x00040fae) list_single_graphic_hl_pane_g4

0xb14f,	// (0x00040fba) list_single_graphic_hl_pane_g5_ParamLimits

0xb14f,	// (0x00040fba) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00045a42) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00045a42) list_single_graphic_hl_pane_g

0xb163,	// (0x00040fce) list_single_graphic_hl_pane_t1_ParamLimits

0xb163,	// (0x00040fce) list_single_graphic_hl_pane_t1

0x5fb5,	// (0x0003be20) aid_size_min_hl_cp2

0x5fbe,	// (0x0003be29) list_highlight_pane_cp34_cp2_ParamLimits

0x5fbe,	// (0x0003be29) list_highlight_pane_cp34_cp2

0x5fa8,	// (0x0003be13) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5fa8,	// (0x0003be13) list_single_graphic_hl_pane_g1_cp2

0x5fcb,	// (0x0003be36) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5fcb,	// (0x0003be36) list_single_graphic_hl_pane_g2_cp2

0x5fd7,	// (0x0003be42) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5fd7,	// (0x0003be42) list_single_graphic_hl_pane_g3_cp2

0x5fe5,	// (0x0003be50) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5fe5,	// (0x0003be50) list_single_graphic_hl_pane_g4_cp2

0x5ff1,	// (0x0003be5c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5ff1,	// (0x0003be5c) list_single_graphic_hl_pane_g5_cp2

0xa709,	// (0x00040574) control_pane_g4_ParamLimits

0xa709,	// (0x00040574) control_pane_g4

0x2c0a,	// (0x00038a75) bg_popup_sub_pane_cp10_ParamLimits

0x5781,	// (0x0003b5ec) list_choice_list_pane_ParamLimits

0x5790,	// (0x0003b5fb) scroll_pane_cp23

0xbadb,	// (0x00041946) bg_popup_preview_window_pane_cp02_ParamLimits

0x5dbf,	// (0x0003bc2a) list_preview_fixed_pane_ParamLimits

0x5dd5,	// (0x0003bc40) list_preview_fixed_pane_cp_ParamLimits

0x5dd5,	// (0x0003bc40) list_preview_fixed_pane_cp

0x5de1,	// (0x0003bc4c) popup_preview_fixed_window_g1_ParamLimits

0x5de1,	// (0x0003bc4c) popup_preview_fixed_window_g1

0x5ded,	// (0x0003bc58) popup_preview_fixed_window_g2_ParamLimits

0x5ded,	// (0x0003bc58) popup_preview_fixed_window_g2

0x0002,

0xfb5f,	// (0x000459ca) popup_preview_fixed_window_g_ParamLimits

0xfb5f,	// (0x000459ca) popup_preview_fixed_window_g

0xf1ce,	// (0x00045039) aid_navi_side_left_pane_ParamLimits

0xf1e3,	// (0x0004504e) aid_navi_side_right_pane_ParamLimits

0xf1fb,	// (0x00045066) navi_icon_pane_stacon_ParamLimits

0xf20f,	// (0x0004507a) navi_navi_pane_stacon_ParamLimits

0xf1fb,	// (0x00045066) navi_text_pane_stacon_ParamLimits

0xebfc,	// (0x00044a67) main_text_info_pane

0x601b,	// (0x0003be86) listscroll_text_info_pane

0x6023,	// (0x0003be8e) list_text_info_pane_ParamLimits

0x6023,	// (0x0003be8e) list_text_info_pane

0x6032,	// (0x0003be9d) scroll_pane_cp24_ParamLimits

0x6032,	// (0x0003be9d) scroll_pane_cp24

0xcd9f,	// (0x00042c0a) list_text_info_pane_t1_ParamLimits

0xcd9f,	// (0x00042c0a) list_text_info_pane_t1

0xa83c,	// (0x000406a7) popup_fast_swap2_window_ParamLimits

0xa83c,	// (0x000406a7) popup_fast_swap2_window

0x6075,	// (0x0003bee0) aid_size_cell_fast2

0x888e,	// (0x0003e6f9) bg_popup_window_pane_cp17

0x3570,	// (0x000393db) heading_pane_cp2

0x607f,	// (0x0003beea) listscroll_fast2_pane

0x6087,	// (0x0003bef2) grid_fast2_pane

0x6091,	// (0x0003befc) listscroll_fast2_pane_g1

0x609b,	// (0x0003bf06) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00045a4d) listscroll_fast2_pane_g

0xeef7,	// (0x00044d62) scroll_pane_cp26

0x60a5,	// (0x0003bf10) cell_fast2_pane_ParamLimits

0x60a5,	// (0x0003bf10) cell_fast2_pane

0x60bc,	// (0x0003bf27) cell_fast2_pane_g1

0x60c5,	// (0x0003bf30) cell_fast2_pane_g2

0x60ce,	// (0x0003bf39) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00045a52) cell_fast2_pane_g

0xbd50,	// (0x00041bbb) grid_highlight_pane_cp9

0x036b,	// (0x000361d6) main_eswt_pane_ParamLimits

0x036b,	// (0x000361d6) main_eswt_pane

0x6047,	// (0x0003beb2) list_single_text_info_pane

0x60d6,	// (0x0003bf41) eswt_ctrl_button_pane

0x60d6,	// (0x0003bf41) eswt_ctrl_canvas_pane

0x60de,	// (0x0003bf49) eswt_ctrl_combo_pane

0x60d6,	// (0x0003bf41) eswt_ctrl_default_pane

0x60d6,	// (0x0003bf41) eswt_ctrl_label_pane

0x60e6,	// (0x0003bf51) eswt_ctrl_wait_pane

0x60ee,	// (0x0003bf59) eswt_shell_pane

0x888e,	// (0x0003e6f9) listscroll_eswt_app_pane

0x610e,	// (0x0003bf79) popup_eswt_tasktip_window_ParamLimits

0x610e,	// (0x0003bf79) popup_eswt_tasktip_window

0x31ae,	// (0x00039019) bg_popup_window_pane_cp18

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_ParamLimits

0x611f,	// (0x0003bf8a) eswt_control_pane_g1

0x612c,	// (0x0003bf97) eswt_control_pane_g2_ParamLimits

0x612c,	// (0x0003bf97) eswt_control_pane_g2

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_ParamLimits

0x6139,	// (0x0003bfa4) eswt_control_pane_g3

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_ParamLimits

0x6146,	// (0x0003bfb1) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00045a59) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00045a59) eswt_control_pane_g

0xbfea,	// (0x00041e55) bg_button_pane_ParamLimits

0xbfea,	// (0x00041e55) bg_button_pane

0xbd65,	// (0x00041bd0) common_borders_pane_copy2_ParamLimits

0xbd65,	// (0x00041bd0) common_borders_pane_copy2

0x6153,	// (0x0003bfbe) control_button_pane_g1_ParamLimits

0x6153,	// (0x0003bfbe) control_button_pane_g1

0x615f,	// (0x0003bfca) control_button_pane_g2_ParamLimits

0x615f,	// (0x0003bfca) control_button_pane_g2

0x616b,	// (0x0003bfd6) control_button_pane_g3_ParamLimits

0x616b,	// (0x0003bfd6) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00045a62) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00045a62) control_button_pane_g

0x617f,	// (0x0003bfea) control_button_pane_t1

0x618d,	// (0x0003bff8) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00045a69) control_button_pane_t

0x313a,	// (0x00038fa5) bg_button_pane_g1

0x314a,	// (0x00038fb5) bg_button_pane_g2

0x3142,	// (0x00038fad) bg_button_pane_g3

0x315a,	// (0x00038fc5) bg_button_pane_g4

0x3152,	// (0x00038fbd) bg_button_pane_g5

0x3162,	// (0x00038fcd) bg_button_pane_g6

0x316a,	// (0x00038fd5) bg_button_pane_g7

0x317a,	// (0x00038fe5) bg_button_pane_g8

0x3172,	// (0x00038fdd) bg_button_pane_g9

0x0008,

0xf83a,	// (0x000456a5) bg_button_pane_g

0x573c,	// (0x0003b5a7) common_borders_pane_ParamLimits

0x573c,	// (0x0003b5a7) common_borders_pane

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy1_ParamLimits

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy1

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy1_ParamLimits

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy1

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy1_ParamLimits

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy1

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy1_ParamLimits

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy1

0x5777,	// (0x0003b5e2) bg_eswt_ctrl_canvas_pane_g1

0x573c,	// (0x0003b5a7) common_borders_pane_cp2_ParamLimits

0x573c,	// (0x0003b5a7) common_borders_pane_cp2

0x573c,	// (0x0003b5a7) common_borders_pane_cp3_ParamLimits

0x573c,	// (0x0003b5a7) common_borders_pane_cp3

0x619b,	// (0x0003c006) separator_horizontal_pane

0x61a3,	// (0x0003c00e) separator_vertical_pane

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy2_ParamLimits

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy2

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy2_ParamLimits

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy2

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy2_ParamLimits

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy2

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy2_ParamLimits

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy2

0x888e,	// (0x0003e6f9) common_borders_pane_cp4

0x61ac,	// (0x0003c017) separator_horizontal_pane_g1

0x61b5,	// (0x0003c020) separator_horizontal_pane_g2

0x61be,	// (0x0003c029) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00045a6e) separator_horizontal_pane_g

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy3_ParamLimits

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy3

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy3_ParamLimits

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy3

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy3_ParamLimits

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy3

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy3_ParamLimits

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy3

0x888e,	// (0x0003e6f9) common_borders_pane_cp5

0x61c7,	// (0x0003c032) separator_vertical_pane_g1

0x61d0,	// (0x0003c03b) separator_vertical_pane_g2

0x61d9,	// (0x0003c044) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00045a75) separator_vertical_pane_g

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy4_ParamLimits

0x611f,	// (0x0003bf8a) eswt_control_pane_g1_copy4

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy4_ParamLimits

0x612c,	// (0x0003bf97) eswt_control_pane_g2_copy4

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy4_ParamLimits

0x6139,	// (0x0003bfa4) eswt_control_pane_g3_copy4

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy4_ParamLimits

0x6146,	// (0x0003bfb1) eswt_control_pane_g4_copy4

0xcdc1,	// (0x00042c2c) eswt_ctrl_combo_button_pane

0xcdc9,	// (0x00042c34) eswt_ctrl_input_pane

0xcdd1,	// (0x00042c3c) popup_choice_list_window_cp70

0xcdd9,	// (0x00042c44) eswt_ctrl_input_pane_t1

0x888e,	// (0x0003e6f9) input_focus_pane_cp70

0x573c,	// (0x0003b5a7) bg_button_pane_cp70_ParamLimits

0x573c,	// (0x0003b5a7) bg_button_pane_cp70

0xcde7,	// (0x00042c52) eswt_ctrl_combo_button_pane_g1

0x6210,	// (0x0003c07b) wait_bar_pane_cp70

0x31ae,	// (0x00039019) bg_popup_window_pane_cp70_ParamLimits

0x31ae,	// (0x00039019) bg_popup_window_pane_cp70

0x6218,	// (0x0003c083) popup_eswt_tasktip_window_t1

0x622e,	// (0x0003c099) wait_bar_pane_cp71_ParamLimits

0x622e,	// (0x0003c099) wait_bar_pane_cp71

0x623a,	// (0x0003c0a5) grid_eswt_app_pane

0xf2ed,	// (0x00045158) scroll_pane_cp70

0xcdef,	// (0x00042c5a) cell_eswt_app_pane_ParamLimits

0xcdef,	// (0x00042c5a) cell_eswt_app_pane

0xce21,	// (0x00042c8c) cell_eswt_app_pane_g1_ParamLimits

0xce21,	// (0x00042c8c) cell_eswt_app_pane_g1

0xce50,	// (0x00042cbb) cell_eswt_app_pane_g2_ParamLimits

0xce50,	// (0x00042cbb) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00045a7c) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00045a7c) cell_eswt_app_pane_g

0xce79,	// (0x00042ce4) cell_eswt_app_pane_t1_ParamLimits

0xce79,	// (0x00042ce4) cell_eswt_app_pane_t1

0x62ff,	// (0x0003c16a) grid_highlight_pane_cp70_ParamLimits

0x62ff,	// (0x0003c16a) grid_highlight_pane_cp70

0x279d,	// (0x00038608) set_content_pane_g1

0xa6ed,	// (0x00040558) status_small_volume_pane

0xb179,	// (0x00040fe4) status_small_volume_pane_g1

0xb181,	// (0x00040fec) volume_small2_pane

0xb18a,	// (0x00040ff5) volume_small2_pane_g1

0xb193,	// (0x00040ffe) volume_small2_pane_g2

0xb19c,	// (0x00041007) volume_small2_pane_g3

0xb1a5,	// (0x00041010) volume_small2_pane_g4

0xb1ae,	// (0x00041019) volume_small2_pane_g5

0xb1b7,	// (0x00041022) volume_small2_pane_g6

0xb1c0,	// (0x0004102b) volume_small2_pane_g7

0xb1c9,	// (0x00041034) volume_small2_pane_g8

0xb1d2,	// (0x0004103d) volume_small2_pane_g9

0xb1db,	// (0x00041046) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00045a81) volume_small2_pane_g

0x5b46,	// (0x0003b9b1) fep_vkb_top_text_pane_g1_ParamLimits

0xcd47,	// (0x00042bb2) fep_vkb_top_text_pane_t1_ParamLimits

0x5df9,	// (0x0003bc64) popup_preview_fixed_window_g3_ParamLimits

0x5df9,	// (0x0003bc64) popup_preview_fixed_window_g3

0xaedc,	// (0x00040d47) popup_toolbar_trans_pane

0xc750,	// (0x000425bb) aid_height_set_list_ParamLimits

0x4507,	// (0x0003a372) aid_size_parent_ParamLimits

0x2c0a,	// (0x00038a75) list_highlight_pane_cp2_ParamLimits

0x279d,	// (0x00038608) set_content_pane_g1_ParamLimits

0xc8fa,	// (0x00042765) list_single_image_pane_ParamLimits

0xc8fa,	// (0x00042765) list_single_image_pane

0xceab,	// (0x00042d16) aid_size_cell_image_ParamLimits

0xceab,	// (0x00042d16) aid_size_cell_image

0xceb8,	// (0x00042d23) grid_single_image_pane_ParamLimits

0xceb8,	// (0x00042d23) grid_single_image_pane

0xbff8,	// (0x00041e63) list_single_image_pane_g1_ParamLimits

0xbff8,	// (0x00041e63) list_single_image_pane_g1

0xc004,	// (0x00041e6f) list_single_image_pane_g2_ParamLimits

0xc004,	// (0x00041e6f) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00045a96) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00045a96) list_single_image_pane_g

0x6326,	// (0x0003c191) list_single_image_pane_t1_ParamLimits

0x6326,	// (0x0003c191) list_single_image_pane_t1

0xcec6,	// (0x00042d31) cell_image_list_pane_ParamLimits

0xcec6,	// (0x00042d31) cell_image_list_pane

0xcedc,	// (0x00042d47) cell_image_list_pane_g1

0xcee5,	// (0x00042d50) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00045a9b) cell_image_list_pane_g

0x6366,	// (0x0003c1d1) aid_size_cell_tb_trans_pane

0xbfea,	// (0x00041e55) bg_tb_trans_pane

0x6378,	// (0x0003c1e3) grid_tb_trans_pane

0x313a,	// (0x00038fa5) bg_tb_trans_pane_g1

0x314a,	// (0x00038fb5) bg_tb_trans_pane_g2

0x3142,	// (0x00038fad) bg_tb_trans_pane_g3

0x315a,	// (0x00038fc5) bg_tb_trans_pane_g4

0x3152,	// (0x00038fbd) bg_tb_trans_pane_g5

0x317a,	// (0x00038fe5) bg_tb_trans_pane_g6

0x3172,	// (0x00038fdd) bg_tb_trans_pane_g7

0x3162,	// (0x00038fcd) bg_tb_trans_pane_g8

0x316a,	// (0x00038fd5) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00045aa0) bg_tb_trans_pane_g

0x638c,	// (0x0003c1f7) cell_toolbar_trans_pane_ParamLimits

0x638c,	// (0x0003c1f7) cell_toolbar_trans_pane

0x5777,	// (0x0003b5e2) cell_toolbar_trans_pane_g1

0xcb3e,	// (0x000429a9) list_form2_midp_pane_t1

0xcb4c,	// (0x000429b7) list_form2_midp_pane_t2

0x0001,

0xfad2,	// (0x0004593d) list_form2_midp_pane_t

0x53d2,	// (0x0003b23d) scroll_pane_cp51_ParamLimits

0x5599,	// (0x0003b404) form2_midp_wait_pane_g1

0x55a2,	// (0x0003b40d) form2_midp_wait_pane_g2

0x55ab,	// (0x0003b416) form2_midp_wait_pane_g3

0x0002,

0xfae7,	// (0x00045952) form2_midp_wait_pane_g

0x8d58,	// (0x0003ebc3) list_highlight_pane_cp21_ParamLimits

0x55e4,	// (0x0003b44f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x55f3,	// (0x0003b45e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd619,	// (0x00043484) list_single_2graphic_im_pane_ParamLimits

0xd619,	// (0x00043484) list_single_2graphic_im_pane

0xceee,	// (0x00042d59) list_single_2graphic_im_pane_g1_ParamLimits

0xceee,	// (0x00042d59) list_single_2graphic_im_pane_g1

0xceff,	// (0x00042d6a) list_single_2graphic_im_pane_g2_ParamLimits

0xceff,	// (0x00042d6a) list_single_2graphic_im_pane_g2

0xcf0b,	// (0x00042d76) list_single_2graphic_im_pane_g3_ParamLimits

0xcf0b,	// (0x00042d76) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x00045ab3) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x00045ab3) list_single_2graphic_im_pane_g

0xcf1f,	// (0x00042d8a) list_single_2graphic_im_pane_t1_ParamLimits

0xcf1f,	// (0x00042d8a) list_single_2graphic_im_pane_t1

0x5e05,	// (0x0003bc70) list_single_graphic_2heading_pane_fp_ParamLimits

0x5e05,	// (0x0003bc70) list_single_graphic_2heading_pane_fp

0xd986,	// (0x000437f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd986,	// (0x000437f1) list_single_graphic_2heading_pane_fp_g1

0x5e1e,	// (0x0003bc89) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5e1e,	// (0x0003bc89) list_single_graphic_2heading_pane_fp_g2

0xd94f,	// (0x000437ba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd94f,	// (0x000437ba) list_single_graphic_2heading_pane_fp_g3

0xd95b,	// (0x000437c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd95b,	// (0x000437c6) list_single_graphic_2heading_pane_fp_g4

0x5e2a,	// (0x0003bc95) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5e2a,	// (0x0003bc95) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6f,	// (0x000459da) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6f,	// (0x000459da) list_single_graphic_2heading_pane_fp_g

0xdb1d,	// (0x00043988) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdb1d,	// (0x00043988) list_single_graphic_2heading_pane_fp_t1

0xd9be,	// (0x00043829) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd9be,	// (0x00043829) list_single_graphic_2heading_pane_fp_t2

0xdb33,	// (0x0004399e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdb33,	// (0x0004399e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x00045abc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x00045abc) list_single_graphic_2heading_pane_fp_t

0x5808,	// (0x0003b673) fep_hwr_write_pane_g5_ParamLimits

0x5808,	// (0x0003b673) fep_hwr_write_pane_g5

0x5814,	// (0x0003b67f) fep_hwr_write_pane_g6_ParamLimits

0x5814,	// (0x0003b67f) fep_hwr_write_pane_g6

0x60ee,	// (0x0003bf59) eswt_shell_pane_ParamLimits

0x31ae,	// (0x00039019) bg_popup_window_pane_cp18_ParamLimits

0x3570,	// (0x000393db) heading_pane_cp70

0x6218,	// (0x0003c083) popup_eswt_tasktip_window_t1_ParamLimits

0xc0e7,	// (0x00041f52) aid_touch_tab_arrow_left

0xc0fb,	// (0x00041f66) aid_touch_tab_arrow_right

0x99c1,	// (0x0003f82c) title_pane_g3_ParamLimits

0x99c1,	// (0x0003f82c) title_pane_g3

0xbfa9,	// (0x00041e14) set_value_pane_g1

0xaedc,	// (0x00040d47) popup_toolbar_trans_pane_ParamLimits

0x6366,	// (0x0003c1d1) aid_size_cell_tb_trans_pane_ParamLimits

0xbfea,	// (0x00041e55) bg_tb_trans_pane_ParamLimits

0x6378,	// (0x0003c1e3) grid_tb_trans_pane_ParamLimits

0xbadb,	// (0x00041946) cont_note_pane_ParamLimits

0xbadb,	// (0x00041946) cont_note_pane

0xbd65,	// (0x00041bd0) cont_snote2_single_text_pane_ParamLimits

0xbd65,	// (0x00041bd0) cont_snote2_single_text_pane

0xbd65,	// (0x00041bd0) cont_snote2_single_graphic_pane_ParamLimits

0xbd65,	// (0x00041bd0) cont_snote2_single_graphic_pane

0x37a0,	// (0x0003960b) cont_note_wait_pane_ParamLimits

0x37a0,	// (0x0003960b) cont_note_wait_pane

0x37a0,	// (0x0003960b) cont_note_image_pane_ParamLimits

0x37a0,	// (0x0003960b) cont_note_image_pane

0x6420,	// (0x0003c28b) popup_note2_window_g1_ParamLimits

0x6420,	// (0x0003c28b) popup_note2_window_g1

0x6451,	// (0x0003c2bc) popup_note2_window_t1_ParamLimits

0x6451,	// (0x0003c2bc) popup_note2_window_t1

0x6496,	// (0x0003c301) popup_note2_window_t2_ParamLimits

0x6496,	// (0x0003c301) popup_note2_window_t2

0x64db,	// (0x0003c346) popup_note2_window_t3_ParamLimits

0x64db,	// (0x0003c346) popup_note2_window_t3

0x6520,	// (0x0003c38b) popup_note2_window_t4_ParamLimits

0x6520,	// (0x0003c38b) popup_note2_window_t4

0xbb5f,	// (0x000419ca) popup_note2_window_t5_ParamLimits

0xbb5f,	// (0x000419ca) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x00045ac8) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x00045ac8) popup_note2_window_t

0x654f,	// (0x0003c3ba) popup_note2_image_window_g1_ParamLimits

0x654f,	// (0x0003c3ba) popup_note2_image_window_g1

0x655b,	// (0x0003c3c6) popup_note2_image_window_g2_ParamLimits

0x655b,	// (0x0003c3c6) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x00045ad3) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x00045ad3) popup_note2_image_window_g

0x656d,	// (0x0003c3d8) popup_note2_image_window_t1_ParamLimits

0x656d,	// (0x0003c3d8) popup_note2_image_window_t1

0x6585,	// (0x0003c3f0) popup_note2_image_window_t2_ParamLimits

0x6585,	// (0x0003c3f0) popup_note2_image_window_t2

0x659d,	// (0x0003c408) popup_note2_image_window_t3_ParamLimits

0x659d,	// (0x0003c408) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x00045ad8) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x00045ad8) popup_note2_image_window_t

0x37ae,	// (0x00039619) popup_note2_wait_window_g1_ParamLimits

0x37ae,	// (0x00039619) popup_note2_wait_window_g1

0x65b9,	// (0x0003c424) popup_note2_wait_window_g2_ParamLimits

0x65b9,	// (0x0003c424) popup_note2_wait_window_g2

0x37c6,	// (0x00039631) popup_note2_wait_window_g3_ParamLimits

0x37c6,	// (0x00039631) popup_note2_wait_window_g3

0x0002,

0xfc74,	// (0x00045adf) popup_note2_wait_window_g_ParamLimits

0xfc74,	// (0x00045adf) popup_note2_wait_window_g

0x65c5,	// (0x0003c430) popup_note2_wait_window_t1_ParamLimits

0x65c5,	// (0x0003c430) popup_note2_wait_window_t1

0x65e3,	// (0x0003c44e) popup_note2_wait_window_t2_ParamLimits

0x65e3,	// (0x0003c44e) popup_note2_wait_window_t2

0x6601,	// (0x0003c46c) popup_note2_wait_window_t3_ParamLimits

0x6601,	// (0x0003c46c) popup_note2_wait_window_t3

0x6613,	// (0x0003c47e) popup_note2_wait_window_t4_ParamLimits

0x6613,	// (0x0003c47e) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x00045ae6) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x00045ae6) popup_note2_wait_window_t

0x6625,	// (0x0003c490) wait_bar2_pane_ParamLimits

0x6625,	// (0x0003c490) wait_bar2_pane

0x663d,	// (0x0003c4a8) popup_snote2_single_text_window_g1_ParamLimits

0x663d,	// (0x0003c4a8) popup_snote2_single_text_window_g1

0x6665,	// (0x0003c4d0) popup_snote2_single_text_window_t1_ParamLimits

0x6665,	// (0x0003c4d0) popup_snote2_single_text_window_t1

0x66b1,	// (0x0003c51c) popup_snote2_single_text_window_t2_ParamLimits

0x66b1,	// (0x0003c51c) popup_snote2_single_text_window_t2

0x66fd,	// (0x0003c568) popup_snote2_single_text_window_t3_ParamLimits

0x66fd,	// (0x0003c568) popup_snote2_single_text_window_t3

0x673e,	// (0x0003c5a9) popup_snote2_single_text_window_t4_ParamLimits

0x673e,	// (0x0003c5a9) popup_snote2_single_text_window_t4

0x6774,	// (0x0003c5df) popup_snote2_single_text_window_t5_ParamLimits

0x6774,	// (0x0003c5df) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x00045aef) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x00045aef) popup_snote2_single_text_window_t

0x679f,	// (0x0003c60a) popup_snote2_single_graphic_window_g1_ParamLimits

0x679f,	// (0x0003c60a) popup_snote2_single_graphic_window_g1

0x67c7,	// (0x0003c632) popup_snote2_single_graphic_window_g2_ParamLimits

0x67c7,	// (0x0003c632) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x00045afa) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x00045afa) popup_snote2_single_graphic_window_g

0x67ef,	// (0x0003c65a) popup_snote2_single_graphic_window_t1_ParamLimits

0x67ef,	// (0x0003c65a) popup_snote2_single_graphic_window_t1

0x683b,	// (0x0003c6a6) popup_snote2_single_graphic_window_t2_ParamLimits

0x683b,	// (0x0003c6a6) popup_snote2_single_graphic_window_t2

0x66fd,	// (0x0003c568) popup_snote2_single_graphic_window_t3_ParamLimits

0x66fd,	// (0x0003c568) popup_snote2_single_graphic_window_t3

0x673e,	// (0x0003c5a9) popup_snote2_single_graphic_window_t4_ParamLimits

0x673e,	// (0x0003c5a9) popup_snote2_single_graphic_window_t4

0x6774,	// (0x0003c5df) popup_snote2_single_graphic_window_t5_ParamLimits

0x6774,	// (0x0003c5df) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x00045aff) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x00045aff) popup_snote2_single_graphic_window_t

0x5282,	// (0x0003b0ed) clock_nsta_pane_cp2_t1

0x5282,	// (0x0003b0ed) clock_nsta_pane_cp2_t2

0x0001,

0xfaa8,	// (0x00045913) clock_nsta_pane_cp2_t

0xd47e,	// (0x000432e9) form_field_data_wide_pane_g1_ParamLimits

0xbff8,	// (0x00041e63) form_field_data_wide_pane_g2_ParamLimits

0xbff8,	// (0x00041e63) form_field_data_wide_pane_g2

0xc004,	// (0x00041e6f) form_field_data_wide_pane_g3_ParamLimits

0xc004,	// (0x00041e6f) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x000454bf) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x000454bf) form_field_data_wide_pane_g

0xca47,	// (0x000428b2) grid_touch_3_pane_ParamLimits

0xca47,	// (0x000428b2) grid_touch_3_pane

0xcf50,	// (0x00042dbb) cell_touch_3_pane_ParamLimits

0xcf50,	// (0x00042dbb) cell_touch_3_pane

0x5777,	// (0x0003b5e2) cell_touch_3_pane_g1

0x5777,	// (0x0003b5e2) cell_touch_3_pane_g2

0x0001,

0xfb2d,	// (0x00045998) cell_touch_3_pane_g

0xbbb7,	// (0x00041a22) cont_query_data_pane

0xbbbf,	// (0x00041a2a) cont_query_data_pane_cp1

0x68ba,	// (0x0003c725) button_value_adjust_pane_cp7

0x68c2,	// (0x0003c72d) query_popup_pane_cp3

0x23a7,	// (0x00038212) bg_popup_sub_pane_cp22_ParamLimits

0xf4c8,	// (0x00045333) navi_navi_volume_pane_cp2

0xf4e3,	// (0x0004534e) popup_side_volume_key_window_g2

0xf4f2,	// (0x0004535d) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x00045555) popup_side_volume_key_window_g

0xf50f,	// (0x0004537a) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x0004555c) popup_side_volume_key_window_t

0x2663,	// (0x000384ce) popup_side_volume_key_window_ParamLimits

0x9eb5,	// (0x0003fd20) list_double_graphic_pane_g4_ParamLimits

0x9eb5,	// (0x0003fd20) list_double_graphic_pane_g4

0xb090,	// (0x00040efb) list_single_2heading_msg_pane_ParamLimits

0xb090,	// (0x00040efb) list_single_2heading_msg_pane

0xb1e4,	// (0x0004104f) list_single_2heading_msg_pane_g1_ParamLimits

0xb1e4,	// (0x0004104f) list_single_2heading_msg_pane_g1

0xb1f0,	// (0x0004105b) list_single_2heading_msg_pane_g2_ParamLimits

0xb1f0,	// (0x0004105b) list_single_2heading_msg_pane_g2

0xb203,	// (0x0004106e) list_single_2heading_msg_pane_g3_ParamLimits

0xb203,	// (0x0004106e) list_single_2heading_msg_pane_g3

0xb20f,	// (0x0004107a) list_single_2heading_msg_pane_g4_ParamLimits

0xb20f,	// (0x0004107a) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x00045b0a) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x00045b0a) list_single_2heading_msg_pane_g

0xb227,	// (0x00041092) list_single_2heading_msg_pane_t1_ParamLimits

0xb227,	// (0x00041092) list_single_2heading_msg_pane_t1

0xb24f,	// (0x000410ba) list_single_2heading_msg_pane_t2_ParamLimits

0xb24f,	// (0x000410ba) list_single_2heading_msg_pane_t2

0xb2ba,	// (0x00041125) list_single_2heading_msg_pane_t3_ParamLimits

0xb2ba,	// (0x00041125) list_single_2heading_msg_pane_t3

0xee1c,	// (0x00044c87) list_single_2heading_msg_pane_t4_ParamLimits

0xee1c,	// (0x00044c87) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x00045b13) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x00045b13) list_single_2heading_msg_pane_t

0x8d14,	// (0x0003eb7f) title_pane_g4_ParamLimits

0x8d14,	// (0x0003eb7f) title_pane_g4

0xf0f7,	// (0x00044f62) title_pane_stacon_g3_ParamLimits

0xf0f7,	// (0x00044f62) title_pane_stacon_g3

0x63e3,	// (0x0003c24e) list_single_2graphic_im_pane_g4_ParamLimits

0x63e3,	// (0x0003c24e) list_single_2graphic_im_pane_g4

0x4210,	// (0x0003a07b) popup_side_volume_key_window_cp

0x4a6d,	// (0x0003a8d8) main_idle_act2_pane_t1

0x09c0,	// (0x0003682b) toolbar_button_pane_g10

0x9d42,	// (0x0003fbad) popup_toolbar_window_cp1

0x5273,	// (0x0003b0de) clock_nsta_pane_cp_t1

0x5273,	// (0x0003b0de) clock_nsta_pane_cp_t2

0x0001,

0xfaa3,	// (0x0004590e) clock_nsta_pane_cp_t

0xf4c8,	// (0x00045333) navi_navi_volume_pane_cp2_ParamLimits

0xf4d7,	// (0x00045342) popup_side_volume_key_window_g1_ParamLimits

0xf4e3,	// (0x0004534e) popup_side_volume_key_window_g2_ParamLimits

0xf4f2,	// (0x0004535d) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x00045555) popup_side_volume_key_window_g_ParamLimits

0x0f79,	// (0x00036de4) fep_hwr_aid_pane

0x1022,	// (0x00036e8d) bg_fep_hwr_top_pane_g4_ParamLimits

0x57d8,	// (0x0003b643) fep_hwr_top_pane_g1_ParamLimits

0x57ea,	// (0x0003b655) fep_hwr_top_pane_g2_ParamLimits

0x1042,	// (0x00036ead) fep_hwr_top_pane_g3_ParamLimits

0xfaf8,	// (0x00045963) fep_hwr_top_pane_g_ParamLimits

0x1057,	// (0x00036ec2) fep_hwr_top_text_pane_ParamLimits

0x3fc5,	// (0x00039e30) aid_touch_tab_arrow_arrow_2

0x3fce,	// (0x00039e39) aid_touch_tab_arrow_left_2

0x0f8d,	// (0x00036df8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0fc4,	// (0x00036e2f) fep_hwr_prediction_pane

0x5940,	// (0x0003b7ab) fep_vkb_prediction_pane

0xcd27,	// (0x00042b92) fep_vkb_side_pane_g3_ParamLimits

0xcd27,	// (0x00042b92) fep_vkb_side_pane_g3

0x11e6,	// (0x00037051) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1257,	// (0x000370c2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1264,	// (0x000370cf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba7,	// (0x00045a12) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x148e,	// (0x000372f9) fep_hwr_prediction_pane_g1

0x1498,	// (0x00037303) fep_hwr_prediction_pane_g2

0x14a0,	// (0x0003730b) fep_hwr_prediction_pane_g3

0x14a8,	// (0x00037313) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00045b1c) fep_hwr_prediction_pane_g

0x68e9,	// (0x0003c754) fep_vkb_prediction_pane_g1

0x68f3,	// (0x0003c75e) fep_vkb_prediction_pane_g2

0x68fb,	// (0x0003c766) fep_vkb_prediction_pane_g3

0x6903,	// (0x0003c76e) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x00045b25) fep_vkb_prediction_pane_g

0x0d11,	// (0x00036b7c) slider_set_pane_g3

0x0d25,	// (0x00036b90) slider_set_pane_g4

0x0d3d,	// (0x00036ba8) slider_set_pane_g5

0x0d11,	// (0x00036b7c) slider_set_pane_g6

0x0d53,	// (0x00036bbe) slider_set_pane_g7

0x4686,	// (0x0003a4f1) slider_form_pane_g3

0x468f,	// (0x0003a4fa) slider_form_pane_g4

0x4697,	// (0x0003a502) slider_form_pane_g5

0x4686,	// (0x0003a4f1) slider_form_pane_g6

0xc8b9,	// (0x00042724) slider_form_pane_g7

0x4d31,	// (0x0003ab9c) slider_set_pane_vc_g3

0x4d3a,	// (0x0003aba5) slider_set_pane_vc_g4

0x4d43,	// (0x0003abae) slider_set_pane_vc_g5

0x4d31,	// (0x0003ab9c) slider_set_pane_vc_g6

0x4d4c,	// (0x0003abb7) slider_set_pane_vc_g7

0x4f22,	// (0x0003ad8d) slider_form_pane_vc_g1

0x4f2b,	// (0x0003ad96) slider_form_pane_vc_g2

0x4f34,	// (0x0003ad9f) slider_form_pane_vc_g3

0x4f22,	// (0x0003ad8d) slider_form_pane_vc_g4

0x4f3d,	// (0x0003ada8) slider_form_pane_vc_g5

0x0004,

0xfa75,	// (0x000458e0) slider_form_pane_vc_g

0xebfc,	// (0x00044a67) main_idle_act3_pane

0x690b,	// (0x0003c776) ai3_links_pane

0xcf9c,	// (0x00042e07) popup_ai3_data_window_ParamLimits

0xcf9c,	// (0x00042e07) popup_ai3_data_window

0x888e,	// (0x0003e6f9) grid_ai3_links_pane

0xcfba,	// (0x00042e25) cell_ai3_links_pane_ParamLimits

0xcfba,	// (0x00042e25) cell_ai3_links_pane

0x694c,	// (0x0003c7b7) bg_popup_sub_pane_cp11

0x6959,	// (0x0003c7c4) cell_ai3_links_pane_g1

0x888e,	// (0x0003e6f9) bg_popup_sub_pane_cp12

0x697e,	// (0x0003c7e9) heading_ai3_data_pane

0x6986,	// (0x0003c7f1) list_ai3_gene_pane

0x6992,	// (0x0003c7fd) popup_ai3_data_window_g1

0x699a,	// (0x0003c805) heading_ai3_data_pane_g1

0x69a2,	// (0x0003c80d) heading_ai3_data_pane_t1

0x69b0,	// (0x0003c81b) list_double_ai3_gene_pane_ParamLimits

0x69b0,	// (0x0003c81b) list_double_ai3_gene_pane

0x69bd,	// (0x0003c828) list_single_ai3_gene_pane_ParamLimits

0x69bd,	// (0x0003c828) list_single_ai3_gene_pane

0x573c,	// (0x0003b5a7) list_highlight_pane_cp7_ParamLimits

0x573c,	// (0x0003b5a7) list_highlight_pane_cp7

0x69ca,	// (0x0003c835) list_single_a13_gene_pane_t1_ParamLimits

0x69ca,	// (0x0003c835) list_single_a13_gene_pane_t1

0x69e1,	// (0x0003c84c) list_single_ai3_gene_pane_g1

0x69ea,	// (0x0003c855) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x00045b2e) list_single_ai3_gene_pane_g

0x69f2,	// (0x0003c85d) list_double_ai3_gene_pane_g1_ParamLimits

0x69f2,	// (0x0003c85d) list_double_ai3_gene_pane_g1

0x69fe,	// (0x0003c869) list_double_ai3_gene_pane_t1_ParamLimits

0x69fe,	// (0x0003c869) list_double_ai3_gene_pane_t1

0x6a1a,	// (0x0003c885) list_double_ai3_gene_pane_t2_ParamLimits

0x6a1a,	// (0x0003c885) list_double_ai3_gene_pane_t2

0x6a2f,	// (0x0003c89a) list_double_ai3_gene_pane_t3_ParamLimits

0x6a2f,	// (0x0003c89a) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x00045b33) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x00045b33) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdb49,	// (0x000439b4) aid_size_min_col_2

0xcf86,	// (0x00042df1) aid_size_min_msg_ParamLimits

0xcf86,	// (0x00042df1) aid_size_min_msg

0xcd3b,	// (0x00042ba6) fep_vkb_top_text_pane_g2_ParamLimits

0xcd3b,	// (0x00042ba6) fep_vkb_top_text_pane_g2

0x0001,

0xfb28,	// (0x00045993) fep_vkb_top_text_pane_g_ParamLimits

0xfb28,	// (0x00045993) fep_vkb_top_text_pane_g

0xebfc,	// (0x00044a67) main_hc_apps_shell_pane

0x6a4c,	// (0x0003c8b7) grid_hc_apps_pane_ParamLimits

0x6a4c,	// (0x0003c8b7) grid_hc_apps_pane

0x6a5e,	// (0x0003c8c9) list_hc_apps_pane

0x6a66,	// (0x0003c8d1) scroll_pane_cp37_ParamLimits

0x6a66,	// (0x0003c8d1) scroll_pane_cp37

0xcfd4,	// (0x00042e3f) cell_hc_apps_pane_ParamLimits

0xcfd4,	// (0x00042e3f) cell_hc_apps_pane

0xd09a,	// (0x00042f05) cell_hc_apps_pane_g1_ParamLimits

0xd09a,	// (0x00042f05) cell_hc_apps_pane_g1

0x6b52,	// (0x0003c9bd) cell_hc_apps_pane_g2_ParamLimits

0x6b52,	// (0x0003c9bd) cell_hc_apps_pane_g2

0x6b6e,	// (0x0003c9d9) cell_hc_apps_pane_g3_ParamLimits

0x6b6e,	// (0x0003c9d9) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x00045b3a) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x00045b3a) cell_hc_apps_pane_g

0xd0c6,	// (0x00042f31) cell_hc_apps_pane_t1_ParamLimits

0xd0c6,	// (0x00042f31) cell_hc_apps_pane_t1

0xbadb,	// (0x00041946) grid_highlight_pane_cp10_ParamLimits

0xbadb,	// (0x00041946) grid_highlight_pane_cp10

0xd104,	// (0x00042f6f) list_single_hc_apps_pane_ParamLimits

0xd104,	// (0x00042f6f) list_single_hc_apps_pane

0xd137,	// (0x00042fa2) list_single_hc_apps_pane_g1

0xb328,	// (0x00041193) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x00045b41) list_single_hc_apps_pane_g

0xb341,	// (0x000411ac) list_single_hc_apps_pane_g2_copy1

0xb35d,	// (0x000411c8) list_single_hc_apps_pane_t1

0x8d58,	// (0x0003ebc3) bg_set_opt_pane_cp_ParamLimits

0xed1f,	// (0x00044b8a) setting_slider_pane_t1_ParamLimits

0xed38,	// (0x00044ba3) setting_slider_pane_t2_ParamLimits

0xed52,	// (0x00044bbd) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x000453a2) setting_slider_pane_t_ParamLimits

0xed6a,	// (0x00044bd5) slider_set_pane_ParamLimits

0x0257,	// (0x000360c2) control_pane_g5_ParamLimits

0x0257,	// (0x000360c2) control_pane_g5

0x44b9,	// (0x0003a324) slider_set_pane_g1_ParamLimits

0x0d05,	// (0x00036b70) slider_set_pane_g2_ParamLimits

0x0d11,	// (0x00036b7c) slider_set_pane_g3_ParamLimits

0x0d25,	// (0x00036b90) slider_set_pane_g4_ParamLimits

0x0d3d,	// (0x00036ba8) slider_set_pane_g5_ParamLimits

0x0d11,	// (0x00036b7c) slider_set_pane_g6_ParamLimits

0x0d53,	// (0x00036bbe) slider_set_pane_g7_ParamLimits

0xf938,	// (0x000457a3) slider_set_pane_g_ParamLimits

0x2748,	// (0x000385b3) navi_icon_text_pane_ParamLimits

0xc0ae,	// (0x00041f19) aid_fill_nsta_2_ParamLimits

0xc0e7,	// (0x00041f52) aid_touch_tab_arrow_left_ParamLimits

0xc0fb,	// (0x00041f66) aid_touch_tab_arrow_right_ParamLimits

0xc196,	// (0x00042001) clock_nsta_pane_ParamLimits

0xc637,	// (0x000424a2) navi_icon_pane_g1_ParamLimits

0xc643,	// (0x000424ae) navi_text_pane_t1_ParamLimits

0xcb20,	// (0x0004298b) navi_icon_text_pane_g1_ParamLimits

0xcb2c,	// (0x00042997) navi_icon_text_pane_t1_ParamLimits

0xd137,	// (0x00042fa2) list_single_hc_apps_pane_g1_ParamLimits

0xb328,	// (0x00041193) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x00045b41) list_single_hc_apps_pane_g_ParamLimits

0xb341,	// (0x000411ac) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb35d,	// (0x000411c8) list_single_hc_apps_pane_t1_ParamLimits

0x98b0,	// (0x0003f71b) popup_toolbar2_fixed_window_ParamLimits

0x98b0,	// (0x0003f71b) popup_toolbar2_fixed_window

0xaed2,	// (0x00040d3d) popup_toolbar2_float_window

0x888e,	// (0x0003e6f9) bg_popup_sub_pane_cp27

0x6c28,	// (0x0003ca93) grid_toolbar2_float_pane

0x888e,	// (0x0003e6f9) bg_popup_sub_pane_cp26

0x6c28,	// (0x0003ca93) grid_toolbar2_fixed_pane

0xd150,	// (0x00042fbb) cell_toolbar2_fixed_pane_ParamLimits

0xd150,	// (0x00042fbb) cell_toolbar2_fixed_pane

0xd16a,	// (0x00042fd5) cell_toolbar2_fixed_pane_g1

0x6c49,	// (0x0003cab4) toolbar2_fixed_button_pane

0x313a,	// (0x00038fa5) toolbar2_fixed_button_pane_g1

0x314a,	// (0x00038fb5) toolbar2_fixed_button_pane_g2

0x3142,	// (0x00038fad) toolbar2_fixed_button_pane_g3

0x315a,	// (0x00038fc5) toolbar2_fixed_button_pane_g4

0x3152,	// (0x00038fbd) toolbar2_fixed_button_pane_g5

0x3162,	// (0x00038fcd) toolbar2_fixed_button_pane_g6

0x316a,	// (0x00038fd5) toolbar2_fixed_button_pane_g7

0x317a,	// (0x00038fe5) toolbar2_fixed_button_pane_g8

0x3172,	// (0x00038fdd) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x000456a5) toolbar2_fixed_button_pane_g

0x6c51,	// (0x0003cabc) cell_toolbar2_float_pane_ParamLimits

0x6c51,	// (0x0003cabc) cell_toolbar2_float_pane

0x6c62,	// (0x0003cacd) cell_toolbar2_float_pane_g1

0x6c49,	// (0x0003cab4) toolbar2_fixed_button_pane_cp

0xcc23,	// (0x00042a8e) fep_vkb_accented_list_pane_ParamLimits

0xcc23,	// (0x00042a8e) fep_vkb_accented_list_pane

0x11c6,	// (0x00037031) bg_popup_fep_shadow_pane_g9

0x28db,	// (0x00038746) bg_popup_fep_shadow_pane_cp3

0xeede,	// (0x00044d49) list_accented_list_pane

0x6c6b,	// (0x0003cad6) list_single_accented_list_pane_ParamLimits

0x6c6b,	// (0x0003cad6) list_single_accented_list_pane

0x28db,	// (0x00038746) list_highlight_pane_cp10

0x6c7c,	// (0x0003cae7) list_single_accented_list_pane_t1

0xadee,	// (0x00040c59) popup_slider_window_ParamLimits

0xadee,	// (0x00040c59) popup_slider_window

0x68ca,	// (0x0003c735) aid_indentation_list_msg

0xd26d,	// (0x000430d8) bg_popup_window_pane_cp19

0x6db8,	// (0x0003cc23) popup_slider_window_g1

0x6dd4,	// (0x0003cc3f) popup_slider_window_g2

0x6df0,	// (0x0003cc5b) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x00045b46) popup_slider_window_g

0x6e56,	// (0x0003ccc1) popup_slider_window_t1

0x6eca,	// (0x0003cd35) small_volume_slider_vertical_pane

0x5777,	// (0x0003b5e2) small_volume_slider_vertical_pane_g1

0x5777,	// (0x0003b5e2) small_volume_slider_vertical_pane_g2

0x6ee6,	// (0x0003cd51) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x00045b58) small_volume_slider_vertical_pane_g

0xeb19,	// (0x00044984) area_side_right_pane_ParamLimits

0xeb19,	// (0x00044984) area_side_right_pane

0xb38b,	// (0x000411f6) aid_size_side_button_ParamLimits

0xb38b,	// (0x000411f6) aid_size_side_button

0xb3a4,	// (0x0004120f) grid_sctrl_middle_pane_ParamLimits

0xb3a4,	// (0x0004120f) grid_sctrl_middle_pane

0x1546,	// (0x000373b1) sctrl_sk_bottom_pane

0x1557,	// (0x000373c2) sctrl_sk_top_pane

0x1569,	// (0x000373d4) aid_touch_sctrl_top

0x1576,	// (0x000373e1) bg_sctrl_sk_pane_ParamLimits

0x1576,	// (0x000373e1) bg_sctrl_sk_pane

0x1584,	// (0x000373ef) sctrl_sk_top_pane_g1

0x1591,	// (0x000373fc) sctrl_sk_top_pane_t1

0x1569,	// (0x000373d4) aid_touch_sctrl_bottom

0x1576,	// (0x000373e1) bg_sctrl_sk_pane_cp_ParamLimits

0x1576,	// (0x000373e1) bg_sctrl_sk_pane_cp

0x15ac,	// (0x00037417) sctrl_sk_bottom_pane_g1

0x1591,	// (0x000373fc) sctrl_sk_bottom_pane_t1

0xb3c3,	// (0x0004122e) cell_sctrl_middle_pane_ParamLimits

0xb3c3,	// (0x0004122e) cell_sctrl_middle_pane

0xb3ea,	// (0x00041255) aid_touch_sctrl_middle_ParamLimits

0xb3ea,	// (0x00041255) aid_touch_sctrl_middle

0x1576,	// (0x000373e1) bg_sctrl_middle_pane_ParamLimits

0x1576,	// (0x000373e1) bg_sctrl_middle_pane

0x1e97,	// (0x00037d02) cell_sctrl_middle_pane_g1_ParamLimits

0x1e97,	// (0x00037d02) cell_sctrl_middle_pane_g1

0xb3fe,	// (0x00041269) cell_sctrl_middle_pane_g2_ParamLimits

0xb3fe,	// (0x00041269) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00045b64) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00045b64) cell_sctrl_middle_pane_g

0x313a,	// (0x00038fa5) bg_sctrl_middle_pane_g1

0x3142,	// (0x00038fad) bg_sctrl_middle_pane_g2

0x314a,	// (0x00038fb5) bg_sctrl_middle_pane_g3

0x3152,	// (0x00038fbd) bg_sctrl_middle_pane_g4

0x315a,	// (0x00038fc5) bg_sctrl_middle_pane_g5

0x3162,	// (0x00038fcd) bg_sctrl_middle_pane_g6

0x316a,	// (0x00038fd5) bg_sctrl_middle_pane_g7

0x3172,	// (0x00038fdd) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x00045b69) bg_sctrl_middle_pane_g

0x317a,	// (0x00038fe5) bg_sctrl_middle_pane_g8_copy1

0x313a,	// (0x00038fa5) bg_sctrl_sk_pane_g1

0x314a,	// (0x00038fb5) bg_sctrl_sk_pane_g2

0x3142,	// (0x00038fad) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x000456a5) bg_sctrl_sk_pane_g

0xbf23,	// (0x00041d8e) aid_size_touch_scroll_bar

0x315a,	// (0x00038fc5) bg_sctrl_sk_pane_g4

0x3152,	// (0x00038fbd) bg_sctrl_sk_pane_g5

0x3162,	// (0x00038fcd) bg_sctrl_sk_pane_g6

0x316a,	// (0x00038fd5) bg_sctrl_sk_pane_g7

0x317a,	// (0x00038fe5) bg_sctrl_sk_pane_g8

0x3172,	// (0x00038fdd) bg_sctrl_sk_pane_g9

0x040d,	// (0x00036278) popup_fep_china_hwr2_fs_candidate_window

0xa8a0,	// (0x0004070b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa8a0,	// (0x0004070b) popup_fep_china_hwr2_fs_control_window

0x11e6,	// (0x00037051) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x00045b5f) sctrl_sk_top_pane_g

0xd325,	// (0x00043190) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd325,	// (0x00043190) aid_fep_china_hwr2_fs_cell

0xdb53,	// (0x000439be) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb53,	// (0x000439be) bg_popup_fep_shadow_pane_cp4

0xdb6a,	// (0x000439d5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb6a,	// (0x000439d5) bg_popup_fep_shadow_pane_cp5

0xdb7c,	// (0x000439e7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb7c,	// (0x000439e7) popup_fep_china_hwr2_fs_control_bar_grid

0xdb90,	// (0x000439fb) popup_fep_china_hwr2_fs_control_funtion_grid

0x6f66,	// (0x0003cdd1) aid_fep_china_hwr2_fs_candi_cell

0x888e,	// (0x0003e6f9) bg_popup_fep_shadow_pane_cp6

0x6f70,	// (0x0003cddb) popup_fep_china_hwr2_fs_candidate_grid

0xdb98,	// (0x00043a03) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb98,	// (0x00043a03) cell_fep_china_hwr2_fs_funtion_grid

0x5777,	// (0x0003b5e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6f92,	// (0x0003cdfd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6f92,	// (0x0003cdfd) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6fa0,	// (0x0003ce0b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6fa0,	// (0x0003ce0b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x00045b7a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x00045b7a) cell_fep_china_hwr2_fs_funtion_grid_g

0xdbb0,	// (0x00043a1b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdbb0,	// (0x00043a1b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdbc5,	// (0x00043a30) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdbc5,	// (0x00043a30) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00045b7f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00045b7f) cell_fep_china_hwr2_fs_funtion_grid_t

0x6fe7,	// (0x0003ce52) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6fef,	// (0x0003ce5a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6ff7,	// (0x0003ce62) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00045b84) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6fff,	// (0x0003ce6a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6fff,	// (0x0003ce6a) cell_fep_china_hwr2_fs_candidate_grid

0x701e,	// (0x0003ce89) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7026,	// (0x0003ce91) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5777,	// (0x0003b5e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5777,	// (0x0003b5e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2d,	// (0x00045998) cell_fep_china_hwr2_fs_candidate_grid_g

0x702e,	// (0x0003ce99) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2d26,	// (0x00038b91) clock_nsta_pane_cp_24_ParamLimits

0x2d26,	// (0x00038b91) clock_nsta_pane_cp_24

0x2da6,	// (0x00038c11) indicator_nsta_pane_cp_24_ParamLimits

0x2da6,	// (0x00038c11) indicator_nsta_pane_cp_24

0x3e23,	// (0x00039c8e) heading_pane_g1

0x0001,

0xf89f,	// (0x0004570a) heading_pane_g

0x48b4,	// (0x0003a71f) grid_sct_catagory_button_pane

0x48e6,	// (0x0003a751) scroll_pane_cp5_ParamLimits

0x53de,	// (0x0003b249) button_value_adjust_pane_cp5_ParamLimits

0x53de,	// (0x0003b249) button_value_adjust_pane_cp5

0x54c3,	// (0x0003b32e) form2_midp_time_pane_ParamLimits

0x703c,	// (0x0003cea7) cell_sct_catagory_button_pane_ParamLimits

0x703c,	// (0x0003cea7) cell_sct_catagory_button_pane

0x573c,	// (0x0003b5a7) bg_button_pane_cp01_ParamLimits

0x573c,	// (0x0003b5a7) bg_button_pane_cp01

0x5777,	// (0x0003b5e2) cell_sct_catagory_button_pane_g1

0xae6f,	// (0x00040cda) popup_tb_extension_window

0xdbe1,	// (0x00043a4c) aid_size_cell_ext_ParamLimits

0xdbe1,	// (0x00043a4c) aid_size_cell_ext

0xbd65,	// (0x00041bd0) bg_tb_trans_pane_cp1_ParamLimits

0xbd65,	// (0x00041bd0) bg_tb_trans_pane_cp1

0xdc07,	// (0x00043a72) grid_tb_ext_pane_ParamLimits

0xdc07,	// (0x00043a72) grid_tb_ext_pane

0xdc44,	// (0x00043aaf) cell_tb_ext_pane_ParamLimits

0xdc44,	// (0x00043aaf) cell_tb_ext_pane

0xdc6c,	// (0x00043ad7) cell_tb_ext_pane_g1_ParamLimits

0xdc6c,	// (0x00043ad7) cell_tb_ext_pane_g1

0x70d0,	// (0x0003cf3b) cell_tb_ext_pane_t1

0xbadb,	// (0x00041946) list_highlight_pane_cp11_ParamLimits

0xbadb,	// (0x00041946) list_highlight_pane_cp11

0x98c5,	// (0x0003f730) popup_uni_indicator_window_ParamLimits

0x98c5,	// (0x0003f730) popup_uni_indicator_window

0xbfea,	// (0x00041e55) bg_popup_sub_pane_cp14

0x70ed,	// (0x0003cf58) list_uniindi_pane

0x70f9,	// (0x0003cf64) uniindi_top_pane

0xbadb,	// (0x00041946) bg_uniindi_top_pane

0x711a,	// (0x0003cf85) uniindi_top_pane_g1

0x7130,	// (0x0003cf9b) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x00045b8b) uniindi_top_pane_g

0x715a,	// (0x0003cfc5) uniindi_top_pane_t1

0x7186,	// (0x0003cff1) list_single_uniindi_pane_ParamLimits

0x7186,	// (0x0003cff1) list_single_uniindi_pane

0x5777,	// (0x0003b5e2) bg_uniindi_top_pane_g1

0x7199,	// (0x0003d004) list_single_uniindi_pane_g1

0x71ac,	// (0x0003d017) list_single_uniindi_pane_t1

0xebfc,	// (0x00044a67) control_bg_pane

0x71d1,	// (0x0003d03c) bg_sctrl_sk_pane_cp1

0x71da,	// (0x0003d045) bg_sctrl_sk_pane_cp2

0x71e3,	// (0x0003d04e) control_bg_pane_g1

0x71ec,	// (0x0003d057) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00045b94) control_bg_pane_g

0x5216,	// (0x0003b081) cell_indicator_nsta_pane_g1_ParamLimits

0xca84,	// (0x000428ef) cell_indicator_nsta_pane_g2_ParamLimits

0xfa91,	// (0x000458fc) cell_indicator_nsta_pane_g_ParamLimits

0xd92f,	// (0x0004379a) form2_midp_time_pane_t1_ParamLimits

0x0f6b,	// (0x00036dd6) main_idle_act4_pane_ParamLimits

0x0f6b,	// (0x00036dd6) main_idle_act4_pane

0xae6f,	// (0x00040cda) popup_tb_extension_window_ParamLimits

0xdc2c,	// (0x00043a97) tb_ext_find_pane_ParamLimits

0xdc2c,	// (0x00043a97) tb_ext_find_pane

0x71f5,	// (0x0003d060) ai_gene_pane_1_cp1

0x2a25,	// (0x00038890) ai_gene_pane_2_cp1

0x71fd,	// (0x0003d068) list_single_idle_plugin_calendar_pane

0x7206,	// (0x0003d071) list_single_idle_plugin_notification_pane

0x720f,	// (0x0003d07a) list_single_idle_plugin_player_pane

0xdc89,	// (0x00043af4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc89,	// (0x00043af4) list_single_idle_plugin_shortcut_pane

0xdcb1,	// (0x00043b1c) main_idle_act4_pane_t1

0xdcc9,	// (0x00043b34) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x00045b99) main_idle_act4_pane_t

0xdce1,	// (0x00043b4c) middle_sk_idle_act4_pane_ParamLimits

0xdce1,	// (0x00043b4c) middle_sk_idle_act4_pane

0xdcfd,	// (0x00043b68) popup_clock_digital_analogue_window_cp2

0xdd24,	// (0x00043b8f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd24,	// (0x00043b8f) shortcut_wheel_idle_act4_pane

0x5777,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g1

0x5777,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g2

0x5777,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g3

0x5777,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g4

0x5777,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g5

0x72a2,	// (0x0003d10d) shortcut_wheel_idle_act4_pane_g6

0x72aa,	// (0x0003d115) shortcut_wheel_idle_act4_pane_g7

0x72b2,	// (0x0003d11d) shortcut_wheel_idle_act4_pane_g8

0x72ba,	// (0x0003d125) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00045b9e) shortcut_wheel_idle_act4_pane_g

0xd33b,	// (0x000431a6) middle_sk_idle_act4_pane_g1_ParamLimits

0xd33b,	// (0x000431a6) middle_sk_idle_act4_pane_g1

0xdda1,	// (0x00043c0c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdda1,	// (0x00043c0c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x00045bc1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x00045bc1) middle_sk_idle_act4_pane_g

0xddb9,	// (0x00043c24) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb9,	// (0x00043c24) middle_sk_idle_act4_pane_t1

0xdde8,	// (0x00043c53) grid_ai_shortcut_pane_ParamLimits

0xdde8,	// (0x00043c53) grid_ai_shortcut_pane

0xde05,	// (0x00043c70) list_highlight_pane_cp16_ParamLimits

0xde05,	// (0x00043c70) list_highlight_pane_cp16

0xde12,	// (0x00043c7d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde12,	// (0x00043c7d) list_single_idle_plugin_shortcut_pane_g1

0xde1e,	// (0x00043c89) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1e,	// (0x00043c89) list_single_idle_plugin_shortcut_pane_g2

0xde3c,	// (0x00043ca7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde3c,	// (0x00043ca7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x00045bc6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x00045bc6) list_single_idle_plugin_shortcut_pane_g

0xde51,	// (0x00043cbc) cell_ai_shortcut_pane_ParamLimits

0xde51,	// (0x00043cbc) cell_ai_shortcut_pane

0xde67,	// (0x00043cd2) cell_ai_shortcut_pane_g1_ParamLimits

0xde67,	// (0x00043cd2) cell_ai_shortcut_pane_g1

0x71f5,	// (0x0003d060) ai_gene_pane_1_cp2

0x73eb,	// (0x0003d256) ai_gene_pane_2_cp2

0x73f3,	// (0x0003d25e) list_highlight_pane_cp15

0x73fc,	// (0x0003d267) list_single_idle_plugin_calendar_pane_g1

0x73f3,	// (0x0003d25e) list_highlight_pane_cp17

0x7404,	// (0x0003d26f) list_single_idle_plugin_calendar_pane_g1_copy1

0x740c,	// (0x0003d277) list_single_idle_plugin_player_pane_g1

0x4b1b,	// (0x0003a986) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00045bcd) list_single_idle_plugin_player_pane_g

0x7414,	// (0x0003d27f) list_single_idle_plugin_player_pane_t1

0x7422,	// (0x0003d28d) list_single_idle_plugin_player_pane_t2

0x7430,	// (0x0003d29b) list_single_idle_plugin_player_pane_t3

0x743e,	// (0x0003d2a9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x00045bd2) list_single_idle_plugin_player_pane_t

0x744c,	// (0x0003d2b7) wait_bar_pane_cp15

0x7454,	// (0x0003d2bf) grid_ai_notification_pane

0x4b1b,	// (0x0003a986) list_single_idle_plugin_notification_pane_g1

0xde89,	// (0x00043cf4) cell_ai_notification_pane_ParamLimits

0xde89,	// (0x00043cf4) cell_ai_notification_pane

0x746a,	// (0x0003d2d5) cell_ai_notification_pane_g1

0x7472,	// (0x0003d2dd) cell_ai_notification_pane_t1

0xde96,	// (0x00043d01) tb_ext_find_button_pane

0xde9e,	// (0x00043d09) tb_ext_find_pane_g1

0xdea6,	// (0x00043d11) tb_ext_find_pane_t1

0x22a2,	// (0x0003810d) tb_ext_find_button_pane_g1

0x749e,	// (0x0003d309) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x00045bdb) tb_ext_find_button_pane_g

0xdcb1,	// (0x00043b1c) main_idle_act4_pane_t1_ParamLimits

0xdcc9,	// (0x00043b34) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x00045b99) main_idle_act4_pane_t_ParamLimits

0xdcfd,	// (0x00043b68) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd14,	// (0x00043b7f) sat_plugin_idle_act4_pane_ParamLimits

0xdd14,	// (0x00043b7f) sat_plugin_idle_act4_pane

0xdeb4,	// (0x00043d1f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeb4,	// (0x00043d1f) sat_plugin_idle_act4_pane_t1

0xdecc,	// (0x00043d37) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdecc,	// (0x00043d37) sat_plugin_idle_act4_pane_t2

0xdee4,	// (0x00043d4f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdee4,	// (0x00043d4f) sat_plugin_idle_act4_pane_t3

0xdefc,	// (0x00043d67) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdefc,	// (0x00043d67) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x00045be0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x00045be0) sat_plugin_idle_act4_pane_t

0xecc1,	// (0x00044b2c) popup_battery_window_ParamLimits

0xecc1,	// (0x00044b2c) popup_battery_window

0xbadb,	// (0x00041946) bg_popup_sub_pane_cp25_ParamLimits

0xbadb,	// (0x00041946) bg_popup_sub_pane_cp25

0x74f3,	// (0x0003d35e) popup_battery_window_g1_ParamLimits

0x74f3,	// (0x0003d35e) popup_battery_window_g1

0x74ff,	// (0x0003d36a) popup_battery_window_t1_ParamLimits

0x74ff,	// (0x0003d36a) popup_battery_window_t1

0x7511,	// (0x0003d37c) popup_battery_window_t2_ParamLimits

0x7511,	// (0x0003d37c) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x00045be9) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x00045be9) popup_battery_window_t

0xa61d,	// (0x00040488) midp_canvas_pane_ParamLimits

0xa679,	// (0x000404e4) midp_keypad_pane_ParamLimits

0xa679,	// (0x000404e4) midp_keypad_pane

0x2c0a,	// (0x00038a75) main_midp_pane_ParamLimits

0x5291,	// (0x0003b0fc) signal_pane_g2_cp_ParamLimits

0xdf14,	// (0x00043d7f) aid_size_cell_midp_keypad_ParamLimits

0xdf14,	// (0x00043d7f) aid_size_cell_midp_keypad

0xdf32,	// (0x00043d9d) midp_keyp_game_grid_pane_ParamLimits

0xdf32,	// (0x00043d9d) midp_keyp_game_grid_pane

0xdf59,	// (0x00043dc4) midp_keyp_rocker_pane_ParamLimits

0xdf59,	// (0x00043dc4) midp_keyp_rocker_pane

0xdfa8,	// (0x00043e13) midp_keyp_sk_left_pane_ParamLimits

0xdfa8,	// (0x00043e13) midp_keyp_sk_left_pane

0xdffe,	// (0x00043e69) midp_keyp_sk_right_pane_ParamLimits

0xdffe,	// (0x00043e69) midp_keyp_sk_right_pane

0x888e,	// (0x0003e6f9) bg_button_pane_cp03

0xe054,	// (0x00043ebf) midp_keyp_sk_left_pane_g1

0x888e,	// (0x0003e6f9) bg_button_pane_cp04

0xe054,	// (0x00043ebf) midp_keyp_sk_right_pane_g1

0x5777,	// (0x0003b5e2) midp_keyp_rocker_pane_g1

0xe05c,	// (0x00043ec7) keyp_game_cell_pane_ParamLimits

0xe05c,	// (0x00043ec7) keyp_game_cell_pane

0x888e,	// (0x0003e6f9) bg_button_pane_cp02

0xe082,	// (0x00043eed) keyp_game_cell_pane_g1

0x985c,	// (0x0003f6c7) popup_fep_vkb2_window_ParamLimits

0x985c,	// (0x0003f6c7) popup_fep_vkb2_window

0xb410,	// (0x0004127b) aid_size_cell_vkb2_ParamLimits

0xb410,	// (0x0004127b) aid_size_cell_vkb2

0xb43c,	// (0x000412a7) popup_fep_vkb2_window_g1_ParamLimits

0xb43c,	// (0x000412a7) popup_fep_vkb2_window_g1

0xb48c,	// (0x000412f7) vkb2_area_bottom_pane_ParamLimits

0xb48c,	// (0x000412f7) vkb2_area_bottom_pane

0xb4e8,	// (0x00041353) vkb2_area_keypad_pane_ParamLimits

0xb4e8,	// (0x00041353) vkb2_area_keypad_pane

0xb536,	// (0x000413a1) vkb2_area_top_pane_ParamLimits

0xb536,	// (0x000413a1) vkb2_area_top_pane

0xb5c3,	// (0x0004142e) vkb2_top_entry_pane_ParamLimits

0xb5c3,	// (0x0004142e) vkb2_top_entry_pane

0xb5f0,	// (0x0004145b) vkb2_top_grid_left_pane_ParamLimits

0xb5f0,	// (0x0004145b) vkb2_top_grid_left_pane

0xb611,	// (0x0004147c) vkb2_top_grid_right_pane_ParamLimits

0xb611,	// (0x0004147c) vkb2_top_grid_right_pane

0x1826,	// (0x00037691) vkb2_cell_keypad_pane_ParamLimits

0x1826,	// (0x00037691) vkb2_cell_keypad_pane

0xb659,	// (0x000414c4) vkb2_area_bottom_grid_pane_ParamLimits

0xb659,	// (0x000414c4) vkb2_area_bottom_grid_pane

0xb683,	// (0x000414ee) vkb2_area_bottom_pane_g1_ParamLimits

0xb683,	// (0x000414ee) vkb2_area_bottom_pane_g1

0xb6a9,	// (0x00041514) vkb2_area_bottom_pane_g2_ParamLimits

0xb6a9,	// (0x00041514) vkb2_area_bottom_pane_g2

0xb6da,	// (0x00041545) vkb2_area_bottom_pane_g3_ParamLimits

0xb6da,	// (0x00041545) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x00045bee) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x00045bee) vkb2_area_bottom_pane_g

0x19d0,	// (0x0003783b) vkb2_top_cell_left_pane_ParamLimits

0x19d0,	// (0x0003783b) vkb2_top_cell_left_pane

0xe08b,	// (0x00043ef6) vkb2_top_entry_pane_g1_ParamLimits

0xe08b,	// (0x00043ef6) vkb2_top_entry_pane_g1

0xe099,	// (0x00043f04) vkb2_top_entry_pane_t1_ParamLimits

0xe099,	// (0x00043f04) vkb2_top_entry_pane_t1

0x76bb,	// (0x0003d526) vkb2_top_entry_pane_t2_ParamLimits

0x76bb,	// (0x0003d526) vkb2_top_entry_pane_t2

0x76ed,	// (0x0003d558) vkb2_top_entry_pane_t3_ParamLimits

0x76ed,	// (0x0003d558) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x00045bf5) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x00045bf5) vkb2_top_entry_pane_t

0xb744,	// (0x000415af) vkb2_top_grid_right_pane_g1_ParamLimits

0xb744,	// (0x000415af) vkb2_top_grid_right_pane_g1

0x1a33,	// (0x0003789e) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a33,	// (0x0003789e) vkb2_top_grid_right_pane_g2

0x1a4b,	// (0x000378b6) vkb2_top_grid_right_pane_g3_ParamLimits

0x1a4b,	// (0x000378b6) vkb2_top_grid_right_pane_g3

0xb75a,	// (0x000415c5) vkb2_top_grid_right_pane_g4_ParamLimits

0xb75a,	// (0x000415c5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x00045bfc) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x00045bfc) vkb2_top_grid_right_pane_g

0x1a79,	// (0x000378e4) vkb2_top_cell_left_pane_g1

0x1a90,	// (0x000378fb) vkb2_cell_keypad_pane_g1_ParamLimits

0x1a90,	// (0x000378fb) vkb2_cell_keypad_pane_g1

0x7711,	// (0x0003d57c) vkb2_cell_keypad_pane_t1_ParamLimits

0x7711,	// (0x0003d57c) vkb2_cell_keypad_pane_t1

0x1a9e,	// (0x00037909) vkb2_cell_bottom_grid_pane_ParamLimits

0x1a9e,	// (0x00037909) vkb2_cell_bottom_grid_pane

0x1ad7,	// (0x00037942) vkb2_cell_bottom_grid_pane_g1

0xdd45,	// (0x00043bb0) aid_call2_pane_cp02

0xdd4d,	// (0x00043bb8) aid_call_pane_cp02

0xdd55,	// (0x00043bc0) clock_digital_number_pane_cp10

0xdd5d,	// (0x00043bc8) clock_digital_number_pane_cp11

0xdd65,	// (0x00043bd0) clock_digital_number_pane_cp12

0xdd6d,	// (0x00043bd8) clock_digital_number_pane_cp13

0xdd75,	// (0x00043be0) clock_digital_separator_pane_cp10

0x22a2,	// (0x0003810d) popup_clock_digital_analogue_window_cp2_g1

0x22a2,	// (0x0003810d) popup_clock_digital_analogue_window_cp2_g2

0xdd7d,	// (0x00043be8) popup_clock_digital_analogue_window_cp2_g3

0x22a2,	// (0x0003810d) popup_clock_digital_analogue_window_cp2_g4

0xdd7d,	// (0x00043be8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00045bb1) popup_clock_digital_analogue_window_cp2_g

0xdd85,	// (0x00043bf0) popup_clock_digital_analogue_window_cp2_t1

0xdd93,	// (0x00043bfe) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x00045bbc) popup_clock_digital_analogue_window_cp2_t

0x5777,	// (0x0003b5e2) clock_digital_number_pane_cp10_g1

0x5777,	// (0x0003b5e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00045998) clock_digital_number_pane_cp10_g

0x5777,	// (0x0003b5e2) clock_digital_separator_pane_cp10_g1

0x5777,	// (0x0003b5e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00045998) clock_digital_separator_pane_cp10_g

0x713c,	// (0x0003cfa7) uniindi_top_pane_g3

0x714d,	// (0x0003cfb8) uniindi_top_pane_g4

0x18b1,	// (0x0003771c) vkb2_row_keypad_pane_ParamLimits

0x18b1,	// (0x0003771c) vkb2_row_keypad_pane

0x1af3,	// (0x0003795e) vkb2_cell_t_keypad_pane_ParamLimits

0x1af3,	// (0x0003795e) vkb2_cell_t_keypad_pane

0x1b03,	// (0x0003796e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1b03,	// (0x0003796e) vkb2_cell_t_keypad_pane_cp08

0x1b18,	// (0x00037983) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1b18,	// (0x00037983) vkb2_cell_t_keypad_pane_cp09

0x1b2c,	// (0x00037997) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b2c,	// (0x00037997) vkb2_cell_t_keypad_pane_cp01

0x1b3d,	// (0x000379a8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b3d,	// (0x000379a8) vkb2_cell_t_keypad_pane_cp02

0x1b4e,	// (0x000379b9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1b4e,	// (0x000379b9) vkb2_cell_t_keypad_pane_cp03

0x1b5f,	// (0x000379ca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1b5f,	// (0x000379ca) vkb2_cell_t_keypad_pane_cp04

0x1b70,	// (0x000379db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1b70,	// (0x000379db) vkb2_cell_t_keypad_pane_cp05

0x1b81,	// (0x000379ec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1b81,	// (0x000379ec) vkb2_cell_t_keypad_pane_cp06

0x1b94,	// (0x000379ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1b94,	// (0x000379ff) vkb2_cell_t_keypad_pane_cp07

0x1ba9,	// (0x00037a14) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1ba9,	// (0x00037a14) vkb2_cell_t_keypad_pane_cp10

0x11e6,	// (0x00037051) vkb2_cell_t_keypad_pane_g1

0x7728,	// (0x0003d593) vkb2_cell_t_keypad_pane_t1

0xebfc,	// (0x00044a67) popup_grid_graphic2_window

0xe0d2,	// (0x00043f3d) aid_size_cell_graphic2_ParamLimits

0xe0d2,	// (0x00043f3d) aid_size_cell_graphic2

0xe110,	// (0x00043f7b) bg_popup_window_pane_cp21_ParamLimits

0xe110,	// (0x00043f7b) bg_popup_window_pane_cp21

0xe11e,	// (0x00043f89) graphic2_pages_pane_ParamLimits

0xe11e,	// (0x00043f89) graphic2_pages_pane

0xe176,	// (0x00043fe1) grid_graphic2_control_pane_ParamLimits

0xe176,	// (0x00043fe1) grid_graphic2_control_pane

0xe1be,	// (0x00044029) grid_graphic2_pane_ParamLimits

0xe1be,	// (0x00044029) grid_graphic2_pane

0xe249,	// (0x000440b4) cell_graphic2_pane

0xebfc,	// (0x00044a67) main_comp_mode_pane

0x6986,	// (0x0003c7f1) list_ai3_gene_pane_ParamLimits

0xd26d,	// (0x000430d8) bg_popup_window_pane_cp19_ParamLimits

0x6d58,	// (0x0003cbc3) bg_touch_area_indi_pane_ParamLimits

0x6d58,	// (0x0003cbc3) bg_touch_area_indi_pane

0x6d6e,	// (0x0003cbd9) bg_touch_area_indi_pane_cp01_ParamLimits

0x6d6e,	// (0x0003cbd9) bg_touch_area_indi_pane_cp01

0x6d84,	// (0x0003cbef) bg_touch_area_indi_pane_cp02_ParamLimits

0x6d84,	// (0x0003cbef) bg_touch_area_indi_pane_cp02

0x6d9e,	// (0x0003cc09) bg_touch_area_indi_pane_cp03_ParamLimits

0x6d9e,	// (0x0003cc09) bg_touch_area_indi_pane_cp03

0x6db8,	// (0x0003cc23) popup_slider_window_g1_ParamLimits

0x6dd4,	// (0x0003cc3f) popup_slider_window_g2_ParamLimits

0x6df0,	// (0x0003cc5b) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x00045b46) popup_slider_window_g_ParamLimits

0x6e56,	// (0x0003ccc1) popup_slider_window_t1_ParamLimits

0x6eca,	// (0x0003cd35) small_volume_slider_vertical_pane_ParamLimits

0xe249,	// (0x000440b4) cell_graphic2_pane_ParamLimits

0xe2ab,	// (0x00044116) bg_button_pane_cp10_ParamLimits

0xe2ab,	// (0x00044116) bg_button_pane_cp10

0xe2be,	// (0x00044129) bg_button_pane_cp11_ParamLimits

0xe2be,	// (0x00044129) bg_button_pane_cp11

0xe2d1,	// (0x0004413c) graphic2_pages_pane_g1_ParamLimits

0xe2d1,	// (0x0004413c) graphic2_pages_pane_g1

0xe2ec,	// (0x00044157) graphic2_pages_pane_g2_ParamLimits

0xe2ec,	// (0x00044157) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x00045c0a) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x00045c0a) graphic2_pages_pane_g

0xe304,	// (0x0004416f) graphic2_pages_pane_t1_ParamLimits

0xe304,	// (0x0004416f) graphic2_pages_pane_t1

0xe31c,	// (0x00044187) cell_graphic2_control_pane_ParamLimits

0xe31c,	// (0x00044187) cell_graphic2_control_pane

0xe350,	// (0x000441bb) cell_graphic2_pane_g1_ParamLimits

0xe350,	// (0x000441bb) cell_graphic2_pane_g1

0xd349,	// (0x000431b4) cell_graphic2_pane_g2_ParamLimits

0xd349,	// (0x000431b4) cell_graphic2_pane_g2

0xd942,	// (0x000437ad) cell_graphic2_pane_g3_ParamLimits

0xd942,	// (0x000437ad) cell_graphic2_pane_g3

0xd356,	// (0x000431c1) cell_graphic2_pane_g4_ParamLimits

0xd356,	// (0x000431c1) cell_graphic2_pane_g4

0xe35d,	// (0x000441c8) cell_graphic2_pane_g5_ParamLimits

0xe35d,	// (0x000441c8) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x00045c0f) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x00045c0f) cell_graphic2_pane_g

0xe379,	// (0x000441e4) cell_graphic2_pane_t1_ParamLimits

0xe379,	// (0x000441e4) cell_graphic2_pane_t1

0x3e17,	// (0x00039c82) grid_highlight_pane_cp11_ParamLimits

0x3e17,	// (0x00039c82) grid_highlight_pane_cp11

0xbadb,	// (0x00041946) bg_button_pane_cp05

0xe3c2,	// (0x0004422d) cell_graphic2_control_pane_g1

0x5777,	// (0x0003b5e2) bg_touch_area_indi_pane_g1

0x7a0b,	// (0x0003d876) aid_cmod_rocker_key_size

0x7a15,	// (0x0003d880) aid_cmode_itu_key_size

0x7a1f,	// (0x0003d88a) main_cmode_video_pane

0x7a29,	// (0x0003d894) main_comp_mode_itu_pane

0x7a35,	// (0x0003d8a0) main_comp_mode_rocker_pane

0x7a41,	// (0x0003d8ac) cell_cmode_rocker_pane_ParamLimits

0x7a41,	// (0x0003d8ac) cell_cmode_rocker_pane

0x7a55,	// (0x0003d8c0) cell_cmode_itu_pane_ParamLimits

0x7a55,	// (0x0003d8c0) cell_cmode_itu_pane

0xbfea,	// (0x00041e55) bg_button_pane_cp06_ParamLimits

0xbfea,	// (0x00041e55) bg_button_pane_cp06

0x59f2,	// (0x0003b85d) cell_cmode_rocker_pane_g1_ParamLimits

0x59f2,	// (0x0003b85d) cell_cmode_rocker_pane_g1

0x6f92,	// (0x0003cdfd) cell_cmode_rocker_pane_g2_ParamLimits

0x6f92,	// (0x0003cdfd) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x00045c1f) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x00045c1f) cell_cmode_rocker_pane_g

0x888e,	// (0x0003e6f9) bg_button_pane_cp07

0x7a6c,	// (0x0003d8d7) cell_cmode_itu_pane_g1

0x7a75,	// (0x0003d8e0) cell_cmode_itu_pane_t1

0x7a83,	// (0x0003d8ee) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x00045c24) cell_cmode_itu_pane_t

0x71c1,	// (0x0003d02c) aid_touch_ctrl_left

0x71c9,	// (0x0003d034) aid_touch_ctrl_right

0x888e,	// (0x0003e6f9) compa_mode_pane

0xe3ea,	// (0x00044255) aid_cmod_rocker_key_size_cp

0xe3f4,	// (0x0004425f) aid_cmode_itu_key_size_cp

0x7aa5,	// (0x0003d910) compa_mode_pane_g1

0x7aad,	// (0x0003d918) compa_mode_pane_g2

0x7ab5,	// (0x0003d920) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x00045c29) compa_mode_pane_g

0xe3fe,	// (0x00044269) main_comp_mode_itu_pane_cp

0xe406,	// (0x00044271) main_comp_mode_rocker_pane_cp

0xe40e,	// (0x00044279) cell_cmode_itu_pane_cp_ParamLimits

0xe40e,	// (0x00044279) cell_cmode_itu_pane_cp

0xe423,	// (0x0004428e) cell_cmode_rocker_pane_cp_ParamLimits

0xe423,	// (0x0004428e) cell_cmode_rocker_pane_cp

0xbfea,	// (0x00041e55) bg_button_pane_cp06_cp_ParamLimits

0xbfea,	// (0x00041e55) bg_button_pane_cp06_cp

0x59f2,	// (0x0003b85d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x59f2,	// (0x0003b85d) cell_cmode_rocker_pane_g1_cp

0x5777,	// (0x0003b5e2) cell_cmode_rocker_pane_g2_cp

0x888e,	// (0x0003e6f9) bg_button_pane_cp07_cp

0xe435,	// (0x000442a0) cell_cmode_itu_pane_g1_cp

0xe43e,	// (0x000442a9) cell_cmode_itu_pane_t1_cp

0xe43e,	// (0x000442a9) cell_cmode_itu_pane_t2_cp

0xc8b1,	// (0x0004271c) settings_code_pane_cp2

0x8d58,	// (0x0003ebc3) bg_popup_window_pane_cp3_ParamLimits

0xbcef,	// (0x00041b5a) heading_pane_cp3_ParamLimits

0xbcfe,	// (0x00041b69) listscroll_popup_graphic_pane_ParamLimits

0x0f79,	// (0x00036de4) fep_hwr_aid_pane_ParamLimits

0x1569,	// (0x000373d4) aid_touch_sctrl_top_ParamLimits

0x1584,	// (0x000373ef) sctrl_sk_top_pane_g1_ParamLimits

0x11e6,	// (0x00037051) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x00045b5f) sctrl_sk_top_pane_g_ParamLimits

0x1591,	// (0x000373fc) sctrl_sk_top_pane_t1_ParamLimits

0x1569,	// (0x000373d4) aid_touch_sctrl_bottom_ParamLimits

0x1591,	// (0x000373fc) sctrl_sk_bottom_pane_t1_ParamLimits

0x7106,	// (0x0003cf71) aid_area_touch_clock

0xb582,	// (0x000413ed) aid_vkb2_area_top_pane_cell_ParamLimits

0xb582,	// (0x000413ed) aid_vkb2_area_top_pane_cell

0xb632,	// (0x0004149d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb632,	// (0x0004149d) aid_vkb2_area_bottom_pane_cell

0x7673,	// (0x0003d4de) popup_char_count_window

0x7b0b,	// (0x0003d976) popup_char_count_window_g1

0x7b14,	// (0x0003d97f) popup_char_count_window_g2

0x7b1d,	// (0x0003d988) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x00045c30) popup_char_count_window_g

0x7b26,	// (0x0003d991) popup_char_count_window_t1

0x163a,	// (0x000374a5) popup_fep_char_preview_window_ParamLimits

0x163a,	// (0x000374a5) popup_fep_char_preview_window

0xb5a2,	// (0x0004140d) vkb2_top_candi_pane_ParamLimits

0xb5a2,	// (0x0004140d) vkb2_top_candi_pane

0xe44c,	// (0x000442b7) cell_vkb2_top_candi_pane_ParamLimits

0xe44c,	// (0x000442b7) cell_vkb2_top_candi_pane

0x1bbe,	// (0x00037a29) bg_popup_fep_char_preview_window_ParamLimits

0x1bbe,	// (0x00037a29) bg_popup_fep_char_preview_window

0x1bcc,	// (0x00037a37) popup_fep_char_preview_window_t1_ParamLimits

0x1bcc,	// (0x00037a37) popup_fep_char_preview_window_t1

0x7b82,	// (0x0003d9ed) bg_popup_fep_char_preview_window_g1

0x7b8a,	// (0x0003d9f5) bg_popup_fep_char_preview_window_g2

0x7b92,	// (0x0003d9fd) bg_popup_fep_char_preview_window_g3

0x7b9a,	// (0x0003da05) bg_popup_fep_char_preview_window_g4

0x7ba2,	// (0x0003da0d) bg_popup_fep_char_preview_window_g5

0x7baa,	// (0x0003da15) bg_popup_fep_char_preview_window_g6

0x7bb2,	// (0x0003da1d) bg_popup_fep_char_preview_window_g7

0x7bba,	// (0x0003da25) bg_popup_fep_char_preview_window_g8

0x7bc2,	// (0x0003da2d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdcc,	// (0x00045c37) bg_popup_fep_char_preview_window_g

0x11e6,	// (0x00037051) cell_vkb2_top_candi_pane_g1_ParamLimits

0x11e6,	// (0x00037051) cell_vkb2_top_candi_pane_g1

0x11f4,	// (0x0003705f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x11f4,	// (0x0003705f) cell_vkb2_top_candi_pane_g2

0x6f1b,	// (0x0003cd86) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6f1b,	// (0x0003cd86) cell_vkb2_top_candi_pane_g3

0x1c0e,	// (0x00037a79) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1c0e,	// (0x00037a79) cell_vkb2_top_candi_pane_g4

0x5f11,	// (0x0003bd7c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5f11,	// (0x0003bd7c) cell_vkb2_top_candi_pane_g5

0x1c2f,	// (0x00037a9a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c2f,	// (0x00037a9a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x00045c4c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x00045c4c) cell_vkb2_top_candi_pane_g

0x1c3d,	// (0x00037aa8) cell_vkb2_top_candi_pane_t1

0x0cf1,	// (0x00036b5c) aid_size_touch_slider_mark_ParamLimits

0x0cf1,	// (0x00036b5c) aid_size_touch_slider_mark

0xe15a,	// (0x00043fc5) grid_graphic2_catg_pane_ParamLimits

0xe15a,	// (0x00043fc5) grid_graphic2_catg_pane

0xe218,	// (0x00044083) popup_grid_graphic2_window_t1_ParamLimits

0xe218,	// (0x00044083) popup_grid_graphic2_window_t1

0xe22e,	// (0x00044099) popup_grid_graphic2_window_t2_ParamLimits

0xe22e,	// (0x00044099) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x00045c05) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x00045c05) popup_grid_graphic2_window_t

0xbadb,	// (0x00041946) bg_button_pane_cp05_ParamLimits

0xe3c2,	// (0x0004422d) cell_graphic2_control_pane_g1_ParamLimits

0xe4b0,	// (0x0004431b) cell_graphic2_catg_pane_ParamLimits

0xe4b0,	// (0x0004431b) cell_graphic2_catg_pane

0x888e,	// (0x0003e6f9) bg_button_pane_cp12

0xe4c2,	// (0x0004432d) cell_graphic2_catg_pane_g1

0x70d0,	// (0x0003cf3b) cell_tb_ext_pane_t1_ParamLimits

0x19f0,	// (0x0003785b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x19f0,	// (0x0003785b) vkb2_top_cell_right_narrow_pane

0x1a08,	// (0x00037873) vkb2_top_cell_right_wide_pane_ParamLimits

0x1a08,	// (0x00037873) vkb2_top_cell_right_wide_pane

0x0f6b,	// (0x00036dd6) bg_vkb2_func_pane_ParamLimits

0x0f6b,	// (0x00036dd6) bg_vkb2_func_pane

0x1a79,	// (0x000378e4) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f6b,	// (0x00036dd6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f6b,	// (0x00036dd6) bg_vkb2_fuc_pane_cp03

0x1ad7,	// (0x00037942) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3142,	// (0x00038fad) bg_vkb2_func_pane_g1

0x314a,	// (0x00038fb5) bg_vkb2_func_pane_g2

0x315a,	// (0x00038fc5) bg_vkb2_func_pane_g3

0x3152,	// (0x00038fbd) bg_vkb2_func_pane_g4

0x3162,	// (0x00038fcd) bg_vkb2_func_pane_g5

0x316a,	// (0x00038fd5) bg_vkb2_func_pane_g6

0x3172,	// (0x00038fdd) bg_vkb2_func_pane_g7

0x317a,	// (0x00038fe5) bg_vkb2_func_pane_g8

0x313a,	// (0x00038fa5) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x00045c59) bg_vkb2_func_pane_g

0x0f6b,	// (0x00036dd6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f6b,	// (0x00036dd6) bg_vkb2_fuc_pane_cp01

0x1a79,	// (0x000378e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1a79,	// (0x000378e4) vkb2_top_cell_right_wide_pane_g1

0x0f6b,	// (0x00036dd6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f6b,	// (0x00036dd6) bg_vkb2_fuc_pane_cp02

0x1c5b,	// (0x00037ac6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1c5b,	// (0x00037ac6) vkb2_top_cell_right_narrow_pane_g1

0xd1af,	// (0x0004301a) aid_touch_area_decrease_ParamLimits

0xd1af,	// (0x0004301a) aid_touch_area_decrease

0xd1e9,	// (0x00043054) aid_touch_area_increase_ParamLimits

0xd1e9,	// (0x00043054) aid_touch_area_increase

0xd211,	// (0x0004307c) aid_touch_area_mute_ParamLimits

0xd211,	// (0x0004307c) aid_touch_area_mute

0xd239,	// (0x000430a4) aid_touch_area_slider_ParamLimits

0xd239,	// (0x000430a4) aid_touch_area_slider

0xd279,	// (0x000430e4) popup_slider_window_g4_ParamLimits

0xd279,	// (0x000430e4) popup_slider_window_g4

0xd2a1,	// (0x0004310c) popup_slider_window_g5_ParamLimits

0xd2a1,	// (0x0004310c) popup_slider_window_g5

0xd2d5,	// (0x00043140) popup_slider_window_g6_ParamLimits

0xd2d5,	// (0x00043140) popup_slider_window_g6

0x6e84,	// (0x0003ccef) popup_slider_window_t2_ParamLimits

0x6e84,	// (0x0003ccef) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00045b53) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00045b53) popup_slider_window_t

0xd2f1,	// (0x0004315c) slider_pane_ParamLimits

0xd2f1,	// (0x0004315c) slider_pane

0x7be5,	// (0x0003da50) slider_pane_g1_ParamLimits

0x7be5,	// (0x0003da50) slider_pane_g1

0x7bf9,	// (0x0003da64) slider_pane_g2_ParamLimits

0x7bf9,	// (0x0003da64) slider_pane_g2

0x7c0f,	// (0x0003da7a) slider_pane_g3_ParamLimits

0x7c0f,	// (0x0003da7a) slider_pane_g3

0x0003,

0xfe01,	// (0x00045c6c) slider_pane_g_ParamLimits

0xfe01,	// (0x00045c6c) slider_pane_g

0xaebb,	// (0x00040d26) popup_tb_float_extension_window_ParamLimits

0xaebb,	// (0x00040d26) popup_tb_float_extension_window

0x7c3b,	// (0x0003daa6) aid_size_cell_tb_float_ext

0x888e,	// (0x0003e6f9) bg_popup_sub_window_cp28

0x7c47,	// (0x0003dab2) grid_tb_float_ext_pane

0x7c53,	// (0x0003dabe) cell_tb_float_ext_pane_ParamLimits

0x7c53,	// (0x0003dabe) cell_tb_float_ext_pane

0x7c6f,	// (0x0003dada) cell_tb_float_ext_pane_g1

0x7c78,	// (0x0003dae3) grid_highlight_pane_cp12

0xb115,	// (0x00040f80) cell_last_hwr_side_pane_ParamLimits

0xb115,	// (0x00040f80) cell_last_hwr_side_pane

0x5777,	// (0x0003b5e2) cell_last_hwr_side_pane_g1

0x7c81,	// (0x0003daec) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x00045c75) cell_last_hwr_side_pane_g

0xb70f,	// (0x0004157a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb70f,	// (0x0004157a) vkb2_area_bottom_space_btn_pane

0x11e6,	// (0x00037051) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7728,	// (0x0003d593) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c3d,	// (0x00037aa8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1c77,	// (0x00037ae2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1c77,	// (0x00037ae2) vkb2_area_bottom_space_btn_pane_g1

0x1cb1,	// (0x00037b1c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1cb1,	// (0x00037b1c) vkb2_area_bottom_space_btn_pane_g2

0x1ce7,	// (0x00037b52) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1ce7,	// (0x00037b52) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x00045c7a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x00045c7a) vkb2_area_bottom_space_btn_pane_g

0x1030,	// (0x00036e9b) cel_fep_hwr_func_pane_ParamLimits

0x1030,	// (0x00036e9b) cel_fep_hwr_func_pane

0xb0ea,	// (0x00040f55) cell_hwr_side_button_pane_ParamLimits

0xb0ea,	// (0x00040f55) cell_hwr_side_button_pane

0x7106,	// (0x0003cf71) aid_area_touch_clock_ParamLimits

0xbadb,	// (0x00041946) bg_uniindi_top_pane_ParamLimits

0x711a,	// (0x0003cf85) uniindi_top_pane_g1_ParamLimits

0x7130,	// (0x0003cf9b) uniindi_top_pane_g2_ParamLimits

0x713c,	// (0x0003cfa7) uniindi_top_pane_g3_ParamLimits

0x714d,	// (0x0003cfb8) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x00045b8b) uniindi_top_pane_g_ParamLimits

0x715a,	// (0x0003cfc5) uniindi_top_pane_t1_ParamLimits

0xbadb,	// (0x00041946) bg_vkb2_func_pane_cp01_ParamLimits

0xbadb,	// (0x00041946) bg_vkb2_func_pane_cp01

0x7c8a,	// (0x0003daf5) cel_fep_hwr_func_pane_g1_ParamLimits

0x7c8a,	// (0x0003daf5) cel_fep_hwr_func_pane_g1

0xbadb,	// (0x00041946) bg_vkb2_func_pane_cp02_ParamLimits

0xbadb,	// (0x00041946) bg_vkb2_func_pane_cp02

0x7c8a,	// (0x0003daf5) cell_hwr_side_button_pane_g1_ParamLimits

0x7c8a,	// (0x0003daf5) cell_hwr_side_button_pane_g1

0x2fc1,	// (0x00038e2c) status_pane_g4_ParamLimits

0x2fc1,	// (0x00038e2c) status_pane_g4

0x2fdb,	// (0x00038e46) status_pane_t1

0x5531,	// (0x0003b39c) form2_midp_gauge_slider_cont_pane

0x5539,	// (0x0003b3a4) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb7b,	// (0x000429e6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb8d,	// (0x000429f8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae0,	// (0x0004594b) form2_midp_gauge_slider_pane_t_ParamLimits

0x556f,	// (0x0003b3da) form2_midp_slider_pane_ParamLimits

0x1602,	// (0x0003746d) aid_size_cell_func_vkb2_ParamLimits

0x1602,	// (0x0003746d) aid_size_cell_func_vkb2

0x7c27,	// (0x0003da92) slider_pane_g4_ParamLimits

0x7c27,	// (0x0003da92) slider_pane_g4

0xb778,	// (0x000415e3) form2_midp_gauge_slider_pane_t2_cp01

0xb786,	// (0x000415f1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb786,	// (0x000415f1) form2_midp_gauge_slider_pane_t3_cp01

0x1d5c,	// (0x00037bc7) form2_midp_slider_pane_cp01

0x888e,	// (0x0003e6f9) navi_smil_pane

0x7cc3,	// (0x0003db2e) navi_smil_pane_g1

0x7ccb,	// (0x0003db36) navi_smil_pane_t1

0x7c98,	// (0x0003db03) form2_midp_slider_pane_g1

0x7ca1,	// (0x0003db0c) form2_midp_slider_pane_g2

0x7ca9,	// (0x0003db14) form2_midp_slider_pane_g3

0x7c98,	// (0x0003db03) form2_midp_slider_pane_g4

0xe4cb,	// (0x00044336) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x00045c83) form2_midp_slider_pane_g

0x1d21,	// (0x00037b8c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1d21,	// (0x00037b8c) vkb2_area_bottom_space_btn_pane_g4

0xc1e1,	// (0x0004204c) lc0_navi_pane_ParamLimits

0xc1e1,	// (0x0004204c) lc0_navi_pane

0xc251,	// (0x000420bc) lc0_stat_indi_pane_ParamLimits

0xc251,	// (0x000420bc) lc0_stat_indi_pane

0xc266,	// (0x000420d1) ls0_title_pane_ParamLimits

0xc266,	// (0x000420d1) ls0_title_pane

0xbfea,	// (0x00041e55) bg_popup_sub_pane_cp14_ParamLimits

0x70ed,	// (0x0003cf58) list_uniindi_pane_ParamLimits

0x70f9,	// (0x0003cf64) uniindi_top_pane_ParamLimits

0x7199,	// (0x0003d004) list_single_uniindi_pane_g1_ParamLimits

0x71ac,	// (0x0003d017) list_single_uniindi_pane_t1_ParamLimits

0xb7a3,	// (0x0004160e) lc0_stat_clock_pane_ParamLimits

0xb7a3,	// (0x0004160e) lc0_stat_clock_pane

0xe4d4,	// (0x0004433f) lc0_stat_indi_pane_g1_ParamLimits

0xe4d4,	// (0x0004433f) lc0_stat_indi_pane_g1

0xe4e1,	// (0x0004434c) lc0_stat_indi_pane_g2_ParamLimits

0xe4e1,	// (0x0004434c) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x00045c8e) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x00045c8e) lc0_stat_indi_pane_g

0xb7b0,	// (0x0004161b) lc0_uni_indicator_pane_ParamLimits

0xb7b0,	// (0x0004161b) lc0_uni_indicator_pane

0xe4ee,	// (0x00044359) ls0_title_pane_g1_ParamLimits

0xe4ee,	// (0x00044359) ls0_title_pane_g1

0xe502,	// (0x0004436d) ls0_title_pane_t1_ParamLimits

0xe502,	// (0x0004436d) ls0_title_pane_t1

0xb7bd,	// (0x00041628) lc0_uni_indicator_pane_g1_ParamLimits

0xb7bd,	// (0x00041628) lc0_uni_indicator_pane_g1

0x7d3d,	// (0x0003dba8) lc0_stat_clock_pane_t1

0xebfc,	// (0x00044a67) main_ai5_pane

0x7d53,	// (0x0003dbbe) ai5_sk_pane_ParamLimits

0x7d53,	// (0x0003dbbe) ai5_sk_pane

0xe538,	// (0x000443a3) cell_ai5_widget_pane_ParamLimits

0xe538,	// (0x000443a3) cell_ai5_widget_pane

0xe5b7,	// (0x00044422) aid_size_cell_widget_grid

0x7e0d,	// (0x0003dc78) bg_ai5_widget_pane_ParamLimits

0x7e0d,	// (0x0003dc78) bg_ai5_widget_pane

0xe5ed,	// (0x00044458) cell_ai5_widget_pane_g2

0xe601,	// (0x0004446c) cell_ai5_widget_pane_g3

0xe61b,	// (0x00044486) cell_ai5_widget_pane_g4

0xe62b,	// (0x00044496) cell_ai5_widget_pane_g5

0x7ed9,	// (0x0003dd44) cell_ai5_widget_pane_g6

0xe63b,	// (0x000444a6) cell_ai5_widget_pane_g7

0xe65f,	// (0x000444ca) cell_ai5_widget_pane_t1_ParamLimits

0xe65f,	// (0x000444ca) cell_ai5_widget_pane_t1

0x7f6f,	// (0x0003ddda) cell_ai5_widget_pane_t2_ParamLimits

0x7f6f,	// (0x0003ddda) cell_ai5_widget_pane_t2

0x7f87,	// (0x0003ddf2) cell_ai5_widget_pane_t3_ParamLimits

0x7f87,	// (0x0003ddf2) cell_ai5_widget_pane_t3

0xe67c,	// (0x000444e7) cell_ai5_widget_pane_t4_ParamLimits

0xe67c,	// (0x000444e7) cell_ai5_widget_pane_t4

0xe6a2,	// (0x0004450d) cell_ai5_widget_pane_t5_ParamLimits

0xe6a2,	// (0x0004450d) cell_ai5_widget_pane_t5

0x7fe5,	// (0x0003de50) cell_ai5_widget_pane_t6_ParamLimits

0x7fe5,	// (0x0003de50) cell_ai5_widget_pane_t6

0x7ff7,	// (0x0003de62) cell_ai5_widget_pane_t7_ParamLimits

0x7ff7,	// (0x0003de62) cell_ai5_widget_pane_t7

0x8016,	// (0x0003de81) cell_ai5_widget_pane_t8_ParamLimits

0x8016,	// (0x0003de81) cell_ai5_widget_pane_t8

0x000b,

0xfe43,	// (0x00045cae) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x00045cae) cell_ai5_widget_pane_t

0xe734,	// (0x0004459f) grid_ai5_widget_pane

0xbfea,	// (0x00041e55) highlight_cell_ai5_widget_pane_ParamLimits

0xbfea,	// (0x00041e55) highlight_cell_ai5_widget_pane

0xe748,	// (0x000445b3) ai5_sk_left_pane

0xe752,	// (0x000445bd) ai5_sk_middle_pane

0xe75c,	// (0x000445c7) ai5_sk_right_pane

0x80cc,	// (0x0003df37) bg_ai5_widget_pane_g1_ParamLimits

0x80cc,	// (0x0003df37) bg_ai5_widget_pane_g1

0x80d8,	// (0x0003df43) bg_ai5_widget_pane_g2_ParamLimits

0x80d8,	// (0x0003df43) bg_ai5_widget_pane_g2

0x80e4,	// (0x0003df4f) bg_ai5_widget_pane_g3_ParamLimits

0x80e4,	// (0x0003df4f) bg_ai5_widget_pane_g3

0x80f0,	// (0x0003df5b) bg_ai5_widget_pane_g4_ParamLimits

0x80f0,	// (0x0003df5b) bg_ai5_widget_pane_g4

0x80fc,	// (0x0003df67) bg_ai5_widget_pane_g5_ParamLimits

0x80fc,	// (0x0003df67) bg_ai5_widget_pane_g5

0x8108,	// (0x0003df73) bg_ai5_widget_pane_g6_ParamLimits

0x8108,	// (0x0003df73) bg_ai5_widget_pane_g6

0x8114,	// (0x0003df7f) bg_ai5_widget_pane_g7_ParamLimits

0x8114,	// (0x0003df7f) bg_ai5_widget_pane_g7

0x8120,	// (0x0003df8b) bg_ai5_widget_pane_g8_ParamLimits

0x8120,	// (0x0003df8b) bg_ai5_widget_pane_g8

0x812c,	// (0x0003df97) bg_ai5_widget_pane_g9_ParamLimits

0x812c,	// (0x0003df97) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00045cc7) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00045cc7) bg_ai5_widget_pane_g

0xe792,	// (0x000445fd) cell_shortcut_ai5_widget_pane_ParamLimits

0xe792,	// (0x000445fd) cell_shortcut_ai5_widget_pane

0x28db,	// (0x00038746) bg_cell_shortcut_ai5_widget_pane

0x8177,	// (0x0003dfe2) cell_grid_ai5_widget_pane_g1

0x28db,	// (0x00038746) highlight_cell_shortcut_ai5_widget_pane

0x3142,	// (0x00038fad) ai5_sk_left_pane_g1

0x8180,	// (0x0003dfeb) ai5_sk_left_pane_g2

0x8188,	// (0x0003dff3) ai5_sk_left_pane_g3

0x8190,	// (0x0003dffb) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00045cda) ai5_sk_left_pane_g

0x8198,	// (0x0003e003) ai5_sk_left_pane_t1

0x314a,	// (0x00038fb5) ai5_sk_right_pane_g1

0x81a6,	// (0x0003e011) ai5_sk_right_pane_g2

0x81ae,	// (0x0003e019) ai5_sk_right_pane_g3

0x81b6,	// (0x0003e021) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00045ce3) ai5_sk_right_pane_g

0x81be,	// (0x0003e029) ai5_sk_right_pane_t1

0x314a,	// (0x00038fb5) ai5_sk_middle_pane_g1

0x3142,	// (0x00038fad) ai5_sk_middle_pane_g2

0x3162,	// (0x00038fcd) ai5_sk_middle_pane_g3

0x81ae,	// (0x0003e019) ai5_sk_middle_pane_g4

0x8188,	// (0x0003dff3) ai5_sk_middle_pane_g5

0x81cc,	// (0x0003e037) ai5_sk_middle_pane_g6

0xe7a5,	// (0x00044610) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00045cec) ai5_sk_middle_pane_g

0xc0cd,	// (0x00041f38) aid_touch_area_size_lc0_ParamLimits

0xc0cd,	// (0x00041f38) aid_touch_area_size_lc0

0x1215,	// (0x00037080) cell_hwr_candidate_pane_t1_ParamLimits

0x2c88,	// (0x00038af3) aid_touch_navi_pane

0xc36f,	// (0x000421da) status_dt_navi_pane_ParamLimits

0xc36f,	// (0x000421da) status_dt_navi_pane

0xc387,	// (0x000421f2) status_dt_sta_pane_ParamLimits

0xc387,	// (0x000421f2) status_dt_sta_pane

0xe7ad,	// (0x00044618) dt_sta_controll_pane

0xe7ba,	// (0x00044625) dt_sta_indi_pane

0xe7c7,	// (0x00044632) dt_sta_title_pane

0xbadb,	// (0x00041946) bg_dt_sta_indi_pane_ParamLimits

0xbadb,	// (0x00041946) bg_dt_sta_indi_pane

0xe7d9,	// (0x00044644) dt_sta_battery_pane

0xe7e1,	// (0x0004464c) dt_sta_indi_pane_g1

0xe7ea,	// (0x00044655) dt_sta_indi_pane_g2

0xe7f3,	// (0x0004465e) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00045cfb) dt_sta_indi_pane_g

0xe7fc,	// (0x00044667) dt_sta_signal_pane

0xbfea,	// (0x00041e55) bg_dt_sta_title_pane_ParamLimits

0xbfea,	// (0x00041e55) bg_dt_sta_title_pane

0xe805,	// (0x00044670) dt_sta_title_pane_g1

0xe80d,	// (0x00044678) dt_sta_title_pane_t1_ParamLimits

0xe80d,	// (0x00044678) dt_sta_title_pane_t1

0x888e,	// (0x0003e6f9) bg_dt_sta_control_pane

0xe822,	// (0x0004468d) dt_sta_controll_pane_g1

0xe82b,	// (0x00044696) bg_dt_sta_title_pane_g1

0xe834,	// (0x0004469f) bg_dt_sta_title_pane_g2

0xe83d,	// (0x000446a8) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00045d02) bg_dt_sta_title_pane_g

0x5777,	// (0x0003b5e2) bg_dt_sta_indi_pane_g1

0x827a,	// (0x0003e0e5) dt_sta_signal_pane_g1

0x8282,	// (0x0003e0ed) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00045d09) dt_sta_signal_pane_g

0x828a,	// (0x0003e0f5) dt_sta_battery_pane_g1

0x8293,	// (0x0003e0fe) dt_sta_battery_pane_t1

0x5777,	// (0x0003b5e2) bg_dt_sta_control_pane_g1

0x23c9,	// (0x00038234) fep_china_uni_eep_pane

0x23d1,	// (0x0003823c) fep_china_uni_entry_pane_ParamLimits

0x23e1,	// (0x0003824c) popup_fep_china_uni_window_g1_ParamLimits

0x23f1,	// (0x0003825c) popup_fep_china_uni_window_g2_ParamLimits

0x23f1,	// (0x0003825c) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x00045561) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x00045561) popup_fep_china_uni_window_g

0x82a2,	// (0x0003e10d) fep_china_uni_eep_pane_g1

0x82aa,	// (0x0003e115) fep_china_uni_eep_pane_t1

0x7cba,	// (0x0003db25) aid_touch_area_size_smil_player

0x2dda,	// (0x00038c45) lc0_clock_pane

0x2fcf,	// (0x00038e3a) status_pane_g5_ParamLimits

0x2fcf,	// (0x00038e3a) status_pane_g5

0xa9e1,	// (0x0004084c) popup_keymap_window

0x2f95,	// (0x00038e00) status_icon_pane

0xe601,	// (0x0004446c) cell_ai5_widget_pane_g3_ParamLimits

0xe61b,	// (0x00044486) cell_ai5_widget_pane_g4_ParamLimits

0xe62b,	// (0x00044496) cell_ai5_widget_pane_g5_ParamLimits

0x7ef2,	// (0x0003dd5d) cell_ai5_widget_pane_g8_ParamLimits

0x7ef2,	// (0x0003dd5d) cell_ai5_widget_pane_g8

0x7f06,	// (0x0003dd71) cell_ai5_widget_pane_g9_ParamLimits

0x7f06,	// (0x0003dd71) cell_ai5_widget_pane_g9

0x7f1a,	// (0x0003dd85) cell_ai5_widget_pane_g10_ParamLimits

0x7f1a,	// (0x0003dd85) cell_ai5_widget_pane_g10

0x82b9,	// (0x0003e124) status_icon_pane_g1

0x888e,	// (0x0003e6f9) bg_popup_sub_pane_cp13

0x82c1,	// (0x0003e12c) popup_keymap_window_t1

0x2bb3,	// (0x00038a1e) control_pane_g6_ParamLimits

0x2bb3,	// (0x00038a1e) control_pane_g6

0x2bc0,	// (0x00038a2b) control_pane_g7_ParamLimits

0x2bc0,	// (0x00038a2b) control_pane_g7

0x2bcd,	// (0x00038a38) control_pane_g8_ParamLimits

0x2bcd,	// (0x00038a38) control_pane_g8

0xe7ad,	// (0x00044618) dt_sta_controll_pane_ParamLimits

0xe7ba,	// (0x00044625) dt_sta_indi_pane_ParamLimits

0xe7c7,	// (0x00044632) dt_sta_title_pane_ParamLimits

0xbf2c,	// (0x00041d97) aid_size_touch_scroll_bar_cale

0xecd9,	// (0x00044b44) popup_discreet_window_ParamLimits

0xecd9,	// (0x00044b44) popup_discreet_window

0x98a6,	// (0x0003f711) popup_sk_window

0x37a0,	// (0x0003960b) bg_popup_sub_pane_cp28_ParamLimits

0x37a0,	// (0x0003960b) bg_popup_sub_pane_cp28

0x82cf,	// (0x0003e13a) popup_discreet_window_g1_ParamLimits

0x82cf,	// (0x0003e13a) popup_discreet_window_g1

0x82ef,	// (0x0003e15a) popup_discreet_window_t1_ParamLimits

0x82ef,	// (0x0003e15a) popup_discreet_window_t1

0x830d,	// (0x0003e178) popup_discreet_window_t2_ParamLimits

0x830d,	// (0x0003e178) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00045d0e) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00045d0e) popup_discreet_window_t

0x1d92,	// (0x00037bfd) popup_sk_window_g1

0x1d9c,	// (0x00037c07) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00045d15) popup_sk_window_g

0x1da4,	// (0x00037c0f) popup_sk_window_t1

0x1db2,	// (0x00037c1d) popup_sk_window_t1_copy1

0xe5ed,	// (0x00044458) cell_ai5_widget_pane_g2_ParamLimits

0xe6c2,	// (0x0004452d) cell_ai5_widget_pane_t9_ParamLimits

0xe6c2,	// (0x0004452d) cell_ai5_widget_pane_t9

0x888e,	// (0x0003e6f9) main_fep_fshwr2_pane

0xb7dc,	// (0x00041647) aid_fshwr2_btn_pane

0xb7f0,	// (0x0004165b) aid_fshwr2_syb_pane

0xb804,	// (0x0004166f) aid_fshwr2_txt_pane

0xb814,	// (0x0004167f) fshwr2_func_candi_pane

0xb836,	// (0x000416a1) fshwr2_hwr_syb_pane

0xb85a,	// (0x000416c5) fshwr2_icf_pane

0xebfc,	// (0x00044a67) fshwr2_icf_bg_pane

0x1e5e,	// (0x00037cc9) fshwr2_icf_pane_t1_ParamLimits

0x1e5e,	// (0x00037cc9) fshwr2_icf_pane_t1

0x22a2,	// (0x0003810d) fshwr2_func_candi_pane_g1

0xe846,	// (0x000446b1) fshwr2_func_candi_row_pane_ParamLimits

0xe846,	// (0x000446b1) fshwr2_func_candi_row_pane

0xb88a,	// (0x000416f5) cell_fshwr2_syb_pane_ParamLimits

0xb88a,	// (0x000416f5) cell_fshwr2_syb_pane

0x1e97,	// (0x00037d02) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1e97,	// (0x00037d02) fshwr2_hwr_syb_pane_g1

0xebfc,	// (0x00044a67) bg_popup_call_pane_cp01

0xb8b2,	// (0x0004171d) fshwr2_func_candi_cell_pane_ParamLimits

0xb8b2,	// (0x0004171d) fshwr2_func_candi_cell_pane

0x3580,	// (0x000393eb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3580,	// (0x000393eb) fshwr2_func_candi_cell_bg_pane

0xb8fd,	// (0x00041768) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb8fd,	// (0x00041768) fshwr2_func_candi_cell_pane_g1

0xb934,	// (0x0004179f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb934,	// (0x0004179f) fshwr2_func_candi_cell_pane_t1

0xebfc,	// (0x00044a67) bg_button_pane_cp08

0x2c0a,	// (0x00038a75) cell_fshwr2_syb_bg_pane

0xb94f,	// (0x000417ba) cell_fshwr2_syb_bg_pane_g1

0xb963,	// (0x000417ce) cell_fshwr2_syb_bg_pane_t1

0xbfea,	// (0x00041e55) main_tmo_pane

0xc6b6,	// (0x00042521) uni_indicator_pane_g1_ParamLimits

0xc6cc,	// (0x00042537) uni_indicator_pane_g2_ParamLimits

0xc6e2,	// (0x0004254d) uni_indicator_pane_g3_ParamLimits

0xc6f5,	// (0x00042560) uni_indicator_pane_g4_ParamLimits

0xc6f5,	// (0x00042560) uni_indicator_pane_g4

0x4317,	// (0x0003a182) uni_indicator_pane_g5_ParamLimits

0x4317,	// (0x0003a182) uni_indicator_pane_g5

0x4317,	// (0x0003a182) uni_indicator_pane_g6_ParamLimits

0x4317,	// (0x0003a182) uni_indicator_pane_g6

0xf8f5,	// (0x00045760) uni_indicator_pane_g_ParamLimits

0xd17f,	// (0x00042fea) popup_tmo_note_window_ParamLimits

0xd17f,	// (0x00042fea) popup_tmo_note_window

0x15e4,	// (0x0003744f) fshwr2_bg_pane

0xb925,	// (0x00041790) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb925,	// (0x00041790) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x00045d1a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x00045d1a) fshwr2_func_candi_cell_pane_g

0x11ce,	// (0x00037039) bg_popup_window_pane_cp01

0x1f5e,	// (0x00037dc9) bg_popup_window_pane_g1_cp01

0x8382,	// (0x0003e1ed) bg_popup_window_pane_cp22_ParamLimits

0x8382,	// (0x0003e1ed) bg_popup_window_pane_cp22

0x8390,	// (0x0003e1fb) listscroll_tmo_link_pane_ParamLimits

0x8390,	// (0x0003e1fb) listscroll_tmo_link_pane

0x83d0,	// (0x0003e23b) popup_tmo_note_window_g1_ParamLimits

0x83d0,	// (0x0003e23b) popup_tmo_note_window_g1

0x83dd,	// (0x0003e248) tmo_note_info_pane_ParamLimits

0x83dd,	// (0x0003e248) tmo_note_info_pane

0xe86d,	// (0x000446d8) list_tmo_note_info_pane_g1_ParamLimits

0xe86d,	// (0x000446d8) list_tmo_note_info_pane_g1

0x840e,	// (0x0003e279) list_tmo_note_info_pane_g2_ParamLimits

0x840e,	// (0x0003e279) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00045d1f) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00045d1f) list_tmo_note_info_pane_g

0x842a,	// (0x0003e295) list_tmo_note_info_text_pane_ParamLimits

0x842a,	// (0x0003e295) list_tmo_note_info_text_pane

0x84af,	// (0x0003e31a) list_tmo_link_pane

0x84bc,	// (0x0003e327) scroll_pane_cp20

0x84c9,	// (0x0003e334) list_single_tmo_link_pane_ParamLimits

0x84c9,	// (0x0003e334) list_single_tmo_link_pane

0x84d9,	// (0x0003e344) list_single_tmo_link_pane_t1

0x84e7,	// (0x0003e352) list_tmo_note_info_text_pane_t1_ParamLimits

0x84e7,	// (0x0003e352) list_tmo_note_info_text_pane_t1

0xa2df,	// (0x0004014a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa2df,	// (0x0004014a) aid_size_touch_scroll_bar_cp01

0xa221,	// (0x0004008c) aid_size_touch_slider_marker

0x9896,	// (0x0003f701) popup_settings_window_ParamLimits

0x9896,	// (0x0003f701) popup_settings_window

0xd50a,	// (0x00043375) popup_candi_list_indi_window

0x2c88,	// (0x00038af3) aid_touch_navi_pane_ParamLimits

0x153d,	// (0x000373a8) rs_clock_indi_pane

0x1546,	// (0x000373b1) sctrl_sk_bottom_pane_ParamLimits

0x1557,	// (0x000373c2) sctrl_sk_top_pane_ParamLimits

0x1654,	// (0x000374bf) popup_fep_tooltip_window

0xe5b7,	// (0x00044422) aid_size_cell_widget_grid_ParamLimits

0xe5d6,	// (0x00044441) cell_ai5_widget_pane_g1_ParamLimits

0xe5d6,	// (0x00044441) cell_ai5_widget_pane_g1

0x7ed9,	// (0x0003dd44) cell_ai5_widget_pane_g6_ParamLimits

0xe63b,	// (0x000444a6) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe28,	// (0x00045c93) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x00045c93) cell_ai5_widget_pane_g

0xe6f1,	// (0x0004455c) cell_ai5_widget_pane_t10_ParamLimits

0xe6f1,	// (0x0004455c) cell_ai5_widget_pane_t10

0xe734,	// (0x0004459f) grid_ai5_widget_pane_ParamLimits

0xe766,	// (0x000445d1) cell_contacts_ai5_widget_pane_ParamLimits

0xe766,	// (0x000445d1) cell_contacts_ai5_widget_pane

0x8322,	// (0x0003e18d) popup_discreet_window_t3_ParamLimits

0x8322,	// (0x0003e18d) popup_discreet_window_t3

0xb876,	// (0x000416e1) popup_fshwr2_char_preview_window_ParamLimits

0xb876,	// (0x000416e1) popup_fshwr2_char_preview_window

0xe884,	// (0x000446ef) tmo_note_info_pane_t1

0xe899,	// (0x00044704) tmo_note_info_pane_t2

0xe8b2,	// (0x0004471d) tmo_note_info_pane_t3

0x848b,	// (0x0003e2f6) tmo_note_info_pane_t4

0x849d,	// (0x0003e308) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00045d24) tmo_note_info_pane_t

0x84af,	// (0x0003e31a) list_tmo_link_pane_ParamLimits

0x84bc,	// (0x0003e327) scroll_pane_cp20_ParamLimits

0xebfc,	// (0x00044a67) bg_popup_fep_char_preview_window_cp01

0x8500,	// (0x0003e36b) popup_fshwr2_char_preview_window_t1

0x850e,	// (0x0003e379) popup_candi_list_indi_window_g1

0x8517,	// (0x0003e382) bg_cell_contacts_ai5_widget_pane

0xe8c7,	// (0x00044732) cell_contacts_ai5_widget_pane_g1

0x8538,	// (0x0003e3a3) cell_contacts_ai5_widget_pane_g2

0x8544,	// (0x0003e3af) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00045d2f) cell_contacts_ai5_widget_pane_g

0x8550,	// (0x0003e3bb) cell_contacts_ai5_widget_pane_t1

0xbfea,	// (0x00041e55) highlight_cell_shortcut_ai5_widget_pane_cp01

0x85c7,	// (0x0003e432) settings_container_pane

0x28db,	// (0x00038746) listscroll_set_pane_copy1

0x4eaf,	// (0x0003ad1a) scroll_pane_cp121_copy1

0x85d3,	// (0x0003e43e) set_content_pane_copy1

0x85db,	// (0x0003e446) aid_height_set_list_copy1_ParamLimits

0x85db,	// (0x0003e446) aid_height_set_list_copy1

0x4507,	// (0x0003a372) aid_size_parent_copy1_ParamLimits

0x4507,	// (0x0003a372) aid_size_parent_copy1

0x85e7,	// (0x0003e452) button_value_adjust_pane_cp6_copy1_ParamLimits

0x85e7,	// (0x0003e452) button_value_adjust_pane_cp6_copy1

0x2c0a,	// (0x00038a75) list_highlight_pane_cp2_copy1_ParamLimits

0x2c0a,	// (0x00038a75) list_highlight_pane_cp2_copy1

0x85fb,	// (0x0003e466) list_set_pane_copy1_ParamLimits

0x85fb,	// (0x0003e466) list_set_pane_copy1

0x8562,	// (0x0003e3cd) main_pane_set_t1_copy1_ParamLimits

0x8562,	// (0x0003e3cd) main_pane_set_t1_copy1

0x859c,	// (0x0003e407) main_pane_set_t2_copy1_ParamLimits

0x859c,	// (0x0003e407) main_pane_set_t2_copy1

0x86bc,	// (0x0003e527) main_pane_set_t3_copy1

0x86ca,	// (0x0003e535) main_pane_set_t4_copy1

0x85bb,	// (0x0003e426) set_content_pane_g1_copy1_ParamLimits

0x85bb,	// (0x0003e426) set_content_pane_g1_copy1

0x86d8,	// (0x0003e543) setting_code_pane_copy1

0x86e0,	// (0x0003e54b) setting_slider_graphic_pane_copy1

0x86e0,	// (0x0003e54b) setting_slider_pane_copy1

0x86e8,	// (0x0003e553) setting_text_pane_copy1

0x86e8,	// (0x0003e553) setting_volume_pane_copy1

0x86d8,	// (0x0003e543) settings_code_pane_cp2_copy1

0x86f0,	// (0x0003e55b) settings_code_pane_cp_copy1_ParamLimits

0x86f0,	// (0x0003e55b) settings_code_pane_cp_copy1

0x1f67,	// (0x00037dd2) volume_set_pane_copy1

0x8704,	// (0x0003e56f) volume_set_pane_g10_copy1

0x8710,	// (0x0003e57b) volume_set_pane_g1_copy1

0x871a,	// (0x0003e585) volume_set_pane_g2_copy1

0x8724,	// (0x0003e58f) volume_set_pane_g3_copy1

0x872e,	// (0x0003e599) volume_set_pane_g4_copy1

0x8738,	// (0x0003e5a3) volume_set_pane_g5_copy1

0x8742,	// (0x0003e5ad) volume_set_pane_g6_copy1

0x874c,	// (0x0003e5b7) volume_set_pane_g7_copy1

0x8756,	// (0x0003e5c1) volume_set_pane_g8_copy1

0x8760,	// (0x0003e5cb) volume_set_pane_g9_copy1

0x8d58,	// (0x0003ebc3) bg_set_opt_pane_cp_copy1_ParamLimits

0x8d58,	// (0x0003ebc3) bg_set_opt_pane_cp_copy1

0x1f73,	// (0x00037dde) setting_slider_pane_t1_copy1_ParamLimits

0x1f73,	// (0x00037dde) setting_slider_pane_t1_copy1

0x1f92,	// (0x00037dfd) setting_slider_pane_t2_copy1_ParamLimits

0x1f92,	// (0x00037dfd) setting_slider_pane_t2_copy1

0x1fac,	// (0x00037e17) setting_slider_pane_t3_copy1_ParamLimits

0x1fac,	// (0x00037e17) setting_slider_pane_t3_copy1

0x1fc4,	// (0x00037e2f) slider_set_pane_copy1_ParamLimits

0x1fc4,	// (0x00037e2f) slider_set_pane_copy1

0xc042,	// (0x00041ead) set_opt_bg_pane_g1_copy2

0xc04a,	// (0x00041eb5) set_opt_bg_pane_g2_copy2

0x876c,	// (0x0003e5d7) set_opt_bg_pane_g3_copy2

0xc05a,	// (0x00041ec5) set_opt_bg_pane_g4_copy2

0xc062,	// (0x00041ecd) set_opt_bg_pane_g5_copy2

0xc06a,	// (0x00041ed5) set_opt_bg_pane_g6_copy2

0x8776,	// (0x0003e5e1) set_opt_bg_pane_g7_copy2

0x8780,	// (0x0003e5eb) set_opt_bg_pane_g8_copy2

0x878a,	// (0x0003e5f5) set_opt_bg_pane_g9_copy2

0x1fda,	// (0x00037e45) aid_size_touch_slider_mark_copy1_ParamLimits

0x1fda,	// (0x00037e45) aid_size_touch_slider_mark_copy1

0x8794,	// (0x0003e5ff) slider_set_pane_g1_copy1

0x1fee,	// (0x00037e59) slider_set_pane_g2_copy1

0x0d11,	// (0x00036b7c) slider_set_pane_g3_copy1_ParamLimits

0x0d11,	// (0x00036b7c) slider_set_pane_g3_copy1

0x0d25,	// (0x00036b90) slider_set_pane_g4_copy1_ParamLimits

0x0d25,	// (0x00036b90) slider_set_pane_g4_copy1

0x0d3d,	// (0x00036ba8) slider_set_pane_g5_copy1_ParamLimits

0x0d3d,	// (0x00036ba8) slider_set_pane_g5_copy1

0x0d11,	// (0x00036b7c) slider_set_pane_g6_copy1_ParamLimits

0x0d11,	// (0x00036b7c) slider_set_pane_g6_copy1

0x1ff6,	// (0x00037e61) slider_set_pane_g7_copy1_ParamLimits

0x1ff6,	// (0x00037e61) slider_set_pane_g7_copy1

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp2_copy1

0x879d,	// (0x0003e608) setting_slider_graphic_pane_g1_copy1

0x87a6,	// (0x0003e611) setting_slider_graphic_pane_t1_copy1

0x87b6,	// (0x0003e621) setting_slider_graphic_pane_t2_copy1

0x87c6,	// (0x0003e631) slider_set_pane_cp_copy1

0x87d6,	// (0x0003e641) input_focus_pane_cp1_copy1

0x87df,	// (0x0003e64a) list_set_text_pane_copy1

0x87e7,	// (0x0003e652) setting_text_pane_g1_copy1

0xee41,	// (0x00044cac) set_text_pane_t1_copy1

0x87d6,	// (0x0003e641) input_focus_pane_cp2_copy1

0x87e7,	// (0x0003e652) setting_code_pane_g1_copy1

0x87f0,	// (0x0003e65b) setting_code_pane_t1_copy1

0x4cb4,	// (0x0003ab1f) list_set_graphic_pane_copy1

0x88a2,	// (0x0003e70d) bg_set_opt_pane_cp4_copy1

0x25c6,	// (0x00038431) list_set_graphic_pane_g1_copy1_ParamLimits

0x25c6,	// (0x00038431) list_set_graphic_pane_g1_copy1

0x87fe,	// (0x0003e669) list_set_graphic_pane_g2_copy1

0x25de,	// (0x00038449) list_set_graphic_pane_t1_copy1_ParamLimits

0x25de,	// (0x00038449) list_set_graphic_pane_t1_copy1

0x5777,	// (0x0003b5e2) rs_clock_indi_pane_g1

0x8806,	// (0x0003e671) rs_clock_indi_pane_t1

0x8814,	// (0x0003e67f) rs_indi_pane

0x881c,	// (0x0003e687) rs_indi_pane_g1

0x8825,	// (0x0003e690) rs_indi_pane_g2

0x850e,	// (0x0003e379) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00045d36) rs_indi_pane_g

0x28db,	// (0x00038746) bg_popup_preview_window_pane_cp03

0x882e,	// (0x0003e699) popup_fep_tooltip_window_t1

0x6444,	// (0x0003c2af) popup_note2_window_g2_ParamLimits

0x6444,	// (0x0003c2af) popup_note2_window_g2

0x0001,

0xfc58,	// (0x00045ac3) popup_note2_window_g_ParamLimits

0xfc58,	// (0x00045ac3) popup_note2_window_g

0x694c,	// (0x0003c7b7) bg_popup_sub_pane_cp11_ParamLimits

0x6959,	// (0x0003c7c4) cell_ai3_links_pane_g1_ParamLimits

0x6970,	// (0x0003c7db) cell_ai3_links_pane_t1

0xee41,	// (0x00044cac) set_text_pane_t1_copy1_ParamLimits

0x27d9,	// (0x00038644) cell_graphic_popup_pane_cp2_ParamLimits

0x27d9,	// (0x00038644) cell_graphic_popup_pane_cp2

0x883c,	// (0x0003e6a7) cell_graphic_popup_pane_g1_cp2

0xbd3f,	// (0x00041baa) cell_graphic_popup_pane_g2_cp2

0x8844,	// (0x0003e6af) cell_graphic_popup_pane_g3_cp2

0x884c,	// (0x0003e6b7) cell_graphic_popup_pane_t2_cp2

0xbd50,	// (0x00041bbb) grid_highlight_pane_cp3_cp2

0xf264,	// (0x000450cf) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbfea,	// (0x00041e55) main_tmo_pane_ParamLimits

0xd173,	// (0x00042fde) popup_tmo_big_image_note_window

0xe5c5,	// (0x00044430) cell_ai5_widget_list_pane

0xe5cd,	// (0x00044438) cell_ai5_widget_lrg_icon_pane

0xe884,	// (0x000446ef) tmo_note_info_pane_t1_ParamLimits

0xe899,	// (0x00044704) tmo_note_info_pane_t2_ParamLimits

0xe8b2,	// (0x0004471d) tmo_note_info_pane_t3_ParamLimits

0x848b,	// (0x0003e2f6) tmo_note_info_pane_t4_ParamLimits

0x849d,	// (0x0003e308) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00045d24) tmo_note_info_pane_t_ParamLimits

0x85c7,	// (0x0003e432) settings_container_pane_ParamLimits

0x87ce,	// (0x0003e639) indicator_popup_pane_cp5

0x87ce,	// (0x0003e639) indicator_popup_pane_cp6

0x4cb4,	// (0x0003ab1f) list_set_graphic_pane_copy1_ParamLimits

0x888e,	// (0x0003e6f9) bg_popup_window_pane_cp23

0x885a,	// (0x0003e6c5) popup_tmo_big_image_note_window_g1

0x8866,	// (0x0003e6d1) popup_tmo_big_image_note_window_t1

0x8876,	// (0x0003e6e1) popup_tmo_big_image_note_window_t2

0x88ac,	// (0x0003e717) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00045d3d) popup_tmo_big_image_note_window_t

0x5777,	// (0x0003b5e2) cell_ai5_widget_lrg_icon_pane_g1

0xe8dc,	// (0x00044747) cell_ai5_widget_lrg_icon_pane_t1

0xe8ea,	// (0x00044755) cell_ai5_widget_list_row_pane_ParamLimits

0xe8ea,	// (0x00044755) cell_ai5_widget_list_row_pane

0xe902,	// (0x0004476d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe902,	// (0x0004476d) cell_ai5_widget_list_row_pane_g1

0xe90f,	// (0x0004477a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe90f,	// (0x0004477a) cell_ai5_widget_list_row_pane_t1

0xe93a,	// (0x000447a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe93a,	// (0x000447a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x00045d44) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00045d44) cell_ai5_widget_list_row_pane_t

0xebfc,	// (0x00044a67) main_fep_vtchi_ss_pane

0x896a,	// (0x0003e7d5) popup_fep_char_pre_window

0x8972,	// (0x0003e7dd) popup_fep_ituss_window

0xe971,	// (0x000447dc) popup_fep_vkbss_window

0x2c0a,	// (0x00038a75) grid_vkbss_keypad_pane_ParamLimits

0x2c0a,	// (0x00038a75) grid_vkbss_keypad_pane

0x89ec,	// (0x0003e857) ituss_keypad_pane

0x2037,	// (0x00037ea2) aid_vkbss_key_offset_ParamLimits

0x2037,	// (0x00037ea2) aid_vkbss_key_offset

0xb98d,	// (0x000417f8) cell_vkbss_key_pane_ParamLimits

0xb98d,	// (0x000417f8) cell_vkbss_key_pane

0x89f8,	// (0x0003e863) bg_cell_vkbss_key_g1_ParamLimits

0x89f8,	// (0x0003e863) bg_cell_vkbss_key_g1

0xe980,	// (0x000447eb) cell_vkbss_key_3p_pane_ParamLimits

0xe980,	// (0x000447eb) cell_vkbss_key_3p_pane

0xe9b6,	// (0x00044821) cell_vkbss_key_g1_ParamLimits

0xe9b6,	// (0x00044821) cell_vkbss_key_g1

0xe9ec,	// (0x00044857) cell_vkbss_key_t1_ParamLimits

0xe9ec,	// (0x00044857) cell_vkbss_key_t1

0x20a5,	// (0x00037f10) cell_ituss_key_pane_ParamLimits

0x20a5,	// (0x00037f10) cell_ituss_key_pane

0x8acc,	// (0x0003e937) bg_cell_ituss_key_g1_ParamLimits

0x8acc,	// (0x0003e937) bg_cell_ituss_key_g1

0x8ad8,	// (0x0003e943) cell_ituss_key_pane_g1_ParamLimits

0x8ad8,	// (0x0003e943) cell_ituss_key_pane_g1

0x20b6,	// (0x00037f21) cell_ituss_key_pane_g2_ParamLimits

0x20b6,	// (0x00037f21) cell_ituss_key_pane_g2

0x0005,

0xfee0,	// (0x00045d4b) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00045d4b) cell_ituss_key_pane_g

0x213a,	// (0x00037fa5) cell_ituss_key_t1_ParamLimits

0x213a,	// (0x00037fa5) cell_ituss_key_t1

0x2174,	// (0x00037fdf) cell_ituss_key_t2_ParamLimits

0x2174,	// (0x00037fdf) cell_ituss_key_t2

0x21a6,	// (0x00038011) cell_ituss_key_t3_ParamLimits

0x21a6,	// (0x00038011) cell_ituss_key_t3

0x21d7,	// (0x00038042) cell_ituss_key_t4_ParamLimits

0x21d7,	// (0x00038042) cell_ituss_key_t4

0x0005,

0xfeed,	// (0x00045d58) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00045d58) cell_ituss_key_t

0xea48,	// (0x000448b3) cell_vkbss_key_3p_pane_g1

0xea50,	// (0x000448bb) cell_vkbss_key_3p_pane_g2

0xea58,	// (0x000448c3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x00045d65) cell_vkbss_key_3p_pane_g

0x28db,	// (0x00038746) bg_popup_fep_char_preview_window_cp02

0x8b16,	// (0x0003e981) popup_fep_char_pre_window_t1

0xe5a4,	// (0x0004440f) main_ai5_sk_pane

0x8517,	// (0x0003e382) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe8c7,	// (0x00044732) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8538,	// (0x0003e3a3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8544,	// (0x0003e3af) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00045d2f) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8550,	// (0x0003e3bb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbfea,	// (0x00041e55) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea60,	// (0x000448cb) main_ai5_sk_pane_g1

0x35d8,	// (0x00039443) popup_query_code_window_g1

0xe962,	// (0x000447cd) popup_fep_vkb_icf_pane

0x89c0,	// (0x0003e82b) popup_fep_vtchi_icf_pane

0x8b2d,	// (0x0003e998) bg_icf_pane

0x8b2d,	// (0x0003e998) list_vkb_icf_pane

0x8b39,	// (0x0003e9a4) bg_icf_pane_cp01

0x8b4c,	// (0x0003e9b7) vtchi_icf_list_pane

0xeab5,	// (0x00044920) list_vkb_icf_pane_t1_ParamLimits

0xeab5,	// (0x00044920) list_vkb_icf_pane_t1

0x8bc5,	// (0x0003ea30) vtchi_icf_list_pane_t1_ParamLimits

0x8bc5,	// (0x0003ea30) vtchi_icf_list_pane_t1

0x8972,	// (0x0003e7dd) popup_fep_ituss_window_ParamLimits

0x89c0,	// (0x0003e82b) popup_fep_vtchi_icf_pane_ParamLimits

0x89ec,	// (0x0003e857) ituss_keypad_pane_ParamLimits

0x202d,	// (0x00037e98) ituss_sks_pane

0x8b2d,	// (0x0003e998) bg_icf_pane_ParamLimits

0x8942,	// (0x0003e7ad) icf_edit_indi_pane_ParamLimits

0x8942,	// (0x0003e7ad) icf_edit_indi_pane

0x8b2d,	// (0x0003e998) list_vkb_icf_pane_ParamLimits

0x8b39,	// (0x0003e9a4) bg_icf_pane_cp01_ParamLimits

0x895d,	// (0x0003e7c8) icf_edit_indi_pane_cp01_ParamLimits

0x895d,	// (0x0003e7c8) icf_edit_indi_pane_cp01

0x8b4c,	// (0x0003e9b7) vtchi_query_pane

0x7c8a,	// (0x0003daf5) icf_edit_indi_pane_g1_ParamLimits

0x7c8a,	// (0x0003daf5) icf_edit_indi_pane_g1

0xeacc,	// (0x00044937) icf_edit_indi_pane_g2_ParamLimits

0xeacc,	// (0x00044937) icf_edit_indi_pane_g2

0x0001,

0xff25,	// (0x00045d90) icf_edit_indi_pane_g_ParamLimits

0xff25,	// (0x00045d90) icf_edit_indi_pane_g

0xeae0,	// (0x0004494b) icf_edit_indi_pane_t1

0x8bde,	// (0x0003ea49) bg_input_focus_pane_cp042

0xbf23,	// (0x00041d8e) vtchi_button_pane

0x8be7,	// (0x0003ea52) vtchi_query_pane_t1

0x8bf5,	// (0x0003ea60) vtchi_query_pane_t2

0x8c03,	// (0x0003ea6e) vtchi_query_pane_t3

0x0002,

0xff14,	// (0x00045d7f) vtchi_query_pane_t

0xebfc,	// (0x00044a67) bg_button_pane_cp13

0x8c11,	// (0x0003ea7c) vtchi_button_pane_g1

0x2258,	// (0x000380c3) ituss_sks_pane_g1

0x2263,	// (0x000380ce) ituss_sks_pane_g2

0x0001,

0xff1b,	// (0x00045d86) ituss_sks_pane_g

0x8c19,	// (0x0003ea84) ituss_sks_pane_t1

0x8c27,	// (0x0003ea92) ituss_sks_pane_t2

0x0001,

0xff20,	// (0x00045d8b) ituss_sks_pane_t

0x5252,	// (0x0003b0bd) indicator_nsta_pane_cp_g1

0x525b,	// (0x0003b0c6) indicator_nsta_pane_cp_g2

0x5263,	// (0x0003b0ce) indicator_nsta_pane_cp_g3

0x526b,	// (0x0003b0d6) indicator_nsta_pane_cp_g4

0x525b,	// (0x0003b0c6) indicator_nsta_pane_cp_g5

0x5263,	// (0x0003b0ce) indicator_nsta_pane_cp_g6

0x0005,

0xfa96,	// (0x00045901) indicator_nsta_pane_cp_g

0xe3a4,	// (0x0004420f) cell_graphic2_pane_t2_ParamLimits

0xe3a4,	// (0x0004420f) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x00045c1a) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x00045c1a) cell_graphic2_pane_t

0xe3dc,	// (0x00044247) cell_graphic2_control_pane_t1

0xa559,	// (0x000403c4) signal_pane_g3_ParamLimits

0xa559,	// (0x000403c4) signal_pane_g3

0xa56d,	// (0x000403d8) signal_pane_g4_ParamLimits

0xa56d,	// (0x000403d8) signal_pane_g4

0xe94c,	// (0x000447b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe94c,	// (0x000447b7) cell_ai5_widget_list_row_pane_t3

0x8aec,	// (0x0003e957) cell_ituss_key_pane_t1_ParamLimits

0x8aec,	// (0x0003e957) cell_ituss_key_pane_t1

0x323f,	// (0x000390aa) form_field_data_wide_pane_vc_t2_ParamLimits

0x323f,	// (0x000390aa) form_field_data_wide_pane_vc_t2

0x3253,	// (0x000390be) form_field_data_wide_pane_vc_t3_ParamLimits

0x3253,	// (0x000390be) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x00045648) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x00045648) form_field_data_wide_pane_vc_t

0x4eef,	// (0x0003ad5a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4eef,	// (0x0003ad5a) form_field_slider_wide_pane_vc_t3

0x4fc5,	// (0x0003ae30) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4fc5,	// (0x0003ae30) form_field_popup_wide_pane_vc_t2

0x4fdc,	// (0x0003ae47) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4fdc,	// (0x0003ae47) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa85,	// (0x000458f0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x000458f0) form_field_popup_wide_pane_vc_t

0xb7dc,	// (0x00041647) aid_fshwr2_btn_pane_ParamLimits

0xb7f0,	// (0x0004165b) aid_fshwr2_syb_pane_ParamLimits

0xb804,	// (0x0004166f) aid_fshwr2_txt_pane_ParamLimits

0x15e4,	// (0x0003744f) fshwr2_bg_pane_ParamLimits

0xb814,	// (0x0004167f) fshwr2_func_candi_pane_ParamLimits

0xb836,	// (0x000416a1) fshwr2_hwr_syb_pane_ParamLimits

0xb85a,	// (0x000416c5) fshwr2_icf_pane_ParamLimits

0xd8d6,	// (0x00043741) list_double_graphic_pane_vc_g4_ParamLimits

0xd8d6,	// (0x00043741) list_double_graphic_pane_vc_g4

0x20d6,	// (0x00037f41) cell_ituss_key_pane_g3_ParamLimits

0x20d6,	// (0x00037f41) cell_ituss_key_pane_g3

0x2208,	// (0x00038073) cell_ituss_key_t5_ParamLimits

0x2208,	// (0x00038073) cell_ituss_key_t5

0xe971,	// (0x000447dc) popup_fep_vkbss_window_ParamLimits

0xe5ae,	// (0x00044419) aid_cell_ai5_quarter

0xeae0,	// (0x0004494b) icf_edit_indi_pane_t1_ParamLimits

0xbb83,	// (0x000419ee) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xbb83,	// (0x000419ee) aid_tch_indicator_popup_pane_cp2

0xbb96,	// (0x00041a01) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xbb96,	// (0x00041a01) aid_tch_query_popup_data_pane_cp2

0x3580,	// (0x000393eb) aid_tch_query_popup_pane_ParamLimits

0x3580,	// (0x000393eb) aid_tch_query_popup_pane

0x3580,	// (0x000393eb) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3580,	// (0x000393eb) aid_tch_query_popup_data_pane_cp1

0x2c0a,	// (0x00038a75) cell_fshwr2_syb_bg_pane_ParamLimits

0xb94f,	// (0x000417ba) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb963,	// (0x000417ce) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe962,	// (0x000447cd) popup_fep_vkb_icf_pane_ParamLimits

0xb770,	// (0x000415db) bg_popup_fep_char_preview_window_g10

0xe647,	// (0x000444b2) cell_ai5_widget_pane_g11_ParamLimits

0xe647,	// (0x000444b2) cell_ai5_widget_pane_g11

0x7f3a,	// (0x0003dda5) cell_ai5_widget_pane_g12_ParamLimits

0x7f3a,	// (0x0003dda5) cell_ai5_widget_pane_g12

0xe653,	// (0x000444be) cell_ai5_widget_pane_g13_ParamLimits

0xe653,	// (0x000444be) cell_ai5_widget_pane_g13

0xe710,	// (0x0004457b) cell_ai5_widget_pane_t11_ParamLimits

0xe710,	// (0x0004457b) cell_ai5_widget_pane_t11

0xe722,	// (0x0004458d) cell_ai5_widget_pane_t12_ParamLimits

0xe722,	// (0x0004458d) cell_ai5_widget_pane_t12

0x20e2,	// (0x00037f4d) cell_ituss_key_pane_g4_ParamLimits

0x20e2,	// (0x00037f4d) cell_ituss_key_pane_g4

0x20fe,	// (0x00037f69) cell_ituss_key_pane_g5_ParamLimits

0x20fe,	// (0x00037f69) cell_ituss_key_pane_g5

0x211a,	// (0x00037f85) cell_ituss_key_pane_g6_ParamLimits

0x211a,	// (0x00037f85) cell_ituss_key_pane_g6

0x313a,	// (0x00038fa5) bg_icf_pane_g1

0xea69,	// (0x000448d4) bg_icf_pane_g2

0xea73,	// (0x000448de) bg_icf_pane_g3

0xea7b,	// (0x000448e6) bg_icf_pane_g4

0xea85,	// (0x000448f0) bg_icf_pane_g5

0xea8f,	// (0x000448fa) bg_icf_pane_g6

0xea99,	// (0x00044904) bg_icf_pane_g7

0xeaa1,	// (0x0004490c) bg_icf_pane_g8

0xeaab,	// (0x00044916) bg_icf_pane_g9

0x0008,

0xff01,	// (0x00045d6c) bg_icf_pane_g

0x89d9,	// (0x0003e844) popup_hyb_candi_window_ParamLimits

0x89d9,	// (0x0003e844) popup_hyb_candi_window

0x31ae,	// (0x00039019) bg_popup_sub_pane_cp01_ParamLimits

0x31ae,	// (0x00039019) bg_popup_sub_pane_cp01

0x8c62,	// (0x0003eacd) entry_hyb_candi_pane_ParamLimits

0x8c62,	// (0x0003eacd) entry_hyb_candi_pane

0x8c71,	// (0x0003eadc) grid_hyb_candi_pane_ParamLimits

0x8c71,	// (0x0003eadc) grid_hyb_candi_pane

0x8c86,	// (0x0003eaf1) grid_hyb_phrase_pane_ParamLimits

0x8c86,	// (0x0003eaf1) grid_hyb_phrase_pane

0x8c95,	// (0x0003eb00) cell_hyb_candi_pane_ParamLimits

0x8c95,	// (0x0003eb00) cell_hyb_candi_pane

0xbf2c,	// (0x00041d97) cell_hyb_candi_scroll_pane

0x22a2,	// (0x0003810d) cell_hyb_candi_pane_g1

0x8cb1,	// (0x0003eb1c) cell_hyb_candi_pane_t1

0x8cbf,	// (0x0003eb2a) cell_hyb_phrase_pane

0x22a2,	// (0x0003810d) cell_hyb_phrase_pane_g1

0x8cc8,	// (0x0003eb33) cell_hyb_phrase_pane_t1

0x8cd6,	// (0x0003eb41) entry_hyb_candi_pane_t1

0x28db,	// (0x00038746) input_focus_pane_cp06

0x8ce4,	// (0x0003eb4f) cell_hyb_candi_scroll_pane_g1

0x8cec,	// (0x0003eb57) cell_hyb_candi_scroll_pane_g1_aid

0x8cf4,	// (0x0003eb5f) cell_hyb_candi_scroll_pane_g2

0x8cfc,	// (0x0003eb67) cell_hyb_candi_scroll_pane_g2_aid

0x8d04,	// (0x0003eb6f) cell_hyb_candi_scroll_pane_g3

0x8d0c,	// (0x0003eb77) cell_hyb_candi_scroll_pane_g4

0xe530,	// (0x0004439b) ai5_page_g1

0x221a,	// (0x00038085) cell_ituss_key_t6_ParamLimits

0x221a,	// (0x00038085) cell_ituss_key_t6

0xb979,	// (0x000417e4) icf_edit_indi_pane_cp02_ParamLimits

0xb979,	// (0x000417e4) icf_edit_indi_pane_cp02

0x2020,	// (0x00037e8b) icf_edit_indi_pane_cp03_ParamLimits

0x2020,	// (0x00037e8b) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
