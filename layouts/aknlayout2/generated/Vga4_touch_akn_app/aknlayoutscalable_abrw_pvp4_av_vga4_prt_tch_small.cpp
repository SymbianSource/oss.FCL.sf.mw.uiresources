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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00031243 };

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
0x5443,	// (0x00036686) Screen

0x544f,	// (0x00036692) application_window_ParamLimits

0x544f,	// (0x00036692) application_window

0xe970,	// (0x0003fbb3) screen_g1

0x54ab,	// (0x000366ee) area_bottom_pane_ParamLimits

0x54ab,	// (0x000366ee) area_bottom_pane

0x556b,	// (0x000367ae) area_top_pane_ParamLimits

0x556b,	// (0x000367ae) area_top_pane

0x5609,	// (0x0003684c) main_pane_ParamLimits

0x5609,	// (0x0003684c) main_pane

0xe97a,	// (0x0003fbbd) misc_graphics

0x8c21,	// (0x00039e64) battery_pane_ParamLimits

0x8c21,	// (0x00039e64) battery_pane

0x98df,	// (0x0003ab22) bg_status_flat_pane_g8

0x98e7,	// (0x0003ab2a) bg_status_flat_pane_g9

0x8ce9,	// (0x00039f2c) context_pane_ParamLimits

0x8ce9,	// (0x00039f2c) context_pane

0x8e0d,	// (0x0003a050) navi_pane_ParamLimits

0x8e0d,	// (0x0003a050) navi_pane

0x8e9d,	// (0x0003a0e0) signal_pane_ParamLimits

0x8e9d,	// (0x0003a0e0) signal_pane

0x0008,

0xf874,	// (0x00040ab7) bg_status_flat_pane_g

0x8f0a,	// (0x0003a14d) status_pane_g1_ParamLimits

0x8f0a,	// (0x0003a14d) status_pane_g1

0x8f1e,	// (0x0003a161) status_pane_g2_ParamLimits

0x8f1e,	// (0x0003a161) status_pane_g2

0x8f2a,	// (0x0003a16d) status_pane_g3_ParamLimits

0x8f2a,	// (0x0003a16d) status_pane_g3

0x0004,

0xf79b,	// (0x000409de) status_pane_g_ParamLimits

0xf79b,	// (0x000409de) status_pane_g

0x8f5e,	// (0x0003a1a1) title_pane_ParamLimits

0x8f5e,	// (0x0003a1a1) title_pane

0x8f9b,	// (0x0003a1de) uni_indicator_pane_ParamLimits

0x8f9b,	// (0x0003a1de) uni_indicator_pane

0x6e2f,	// (0x00038072) bg_list_pane_ParamLimits

0x6e2f,	// (0x00038072) bg_list_pane

0x6e4f,	// (0x00038092) find_pane

0x6e57,	// (0x0003809a) listscroll_app_pane_ParamLimits

0x6e57,	// (0x0003809a) listscroll_app_pane

0x6e63,	// (0x000380a6) listscroll_form_pane

0x6e6b,	// (0x000380ae) listscroll_gen_pane_ParamLimits

0x6e6b,	// (0x000380ae) listscroll_gen_pane

0x6e7f,	// (0x000380c2) listscroll_set_pane

0x620c,	// (0x0003744f) main_idle_act_pane

0x2725,	// (0x00033968) main_idle_trad_pane

0x2725,	// (0x00033968) main_list_empty_pane

0x6e99,	// (0x000380dc) main_midp_pane

0x6ea5,	// (0x000380e8) main_pane_g1_ParamLimits

0x6ea5,	// (0x000380e8) main_pane_g1

0x6eb3,	// (0x000380f6) popup_ai_message_window_ParamLimits

0x6eb3,	// (0x000380f6) popup_ai_message_window

0x6f67,	// (0x000381aa) popup_fep_china_uni_window_ParamLimits

0x6f67,	// (0x000381aa) popup_fep_china_uni_window

0x6fc7,	// (0x0003820a) popup_fep_japan_candidate_window_ParamLimits

0x6fc7,	// (0x0003820a) popup_fep_japan_candidate_window

0x6ff1,	// (0x00038234) popup_fep_japan_predictive_window_ParamLimits

0x6ff1,	// (0x00038234) popup_fep_japan_predictive_window

0x7027,	// (0x0003826a) popup_find_window

0x7034,	// (0x00038277) popup_grid_graphic_window_ParamLimits

0x7034,	// (0x00038277) popup_grid_graphic_window

0x7062,	// (0x000382a5) popup_large_graphic_colour_window

0x7088,	// (0x000382cb) popup_menu_window_ParamLimits

0x7088,	// (0x000382cb) popup_menu_window

0x892d,	// (0x00039b70) popup_note_image_window

0x8917,	// (0x00039b5a) popup_note_wait_window_ParamLimits

0x8917,	// (0x00039b5a) popup_note_wait_window

0x8917,	// (0x00039b5a) popup_note_window_ParamLimits

0x8917,	// (0x00039b5a) popup_note_window

0x8993,	// (0x00039bd6) popup_query_code_window_ParamLimits

0x8993,	// (0x00039bd6) popup_query_code_window

0x89a9,	// (0x00039bec) popup_query_data_code_window_ParamLimits

0x89a9,	// (0x00039bec) popup_query_data_code_window

0x89cc,	// (0x00039c0f) popup_query_data_window_ParamLimits

0x89cc,	// (0x00039c0f) popup_query_data_window

0x89ee,	// (0x00039c31) popup_query_sat_info_window_ParamLimits

0x89ee,	// (0x00039c31) popup_query_sat_info_window

0x8a2d,	// (0x00039c70) popup_snote_single_graphic_window_ParamLimits

0x8a2d,	// (0x00039c70) popup_snote_single_graphic_window

0x8a2d,	// (0x00039c70) popup_snote_single_text_window_ParamLimits

0x8a2d,	// (0x00039c70) popup_snote_single_text_window

0x8a44,	// (0x00039c87) popup_sub_window_general

0x8b8a,	// (0x00039dcd) popup_window_general_ParamLimits

0x8b8a,	// (0x00039dcd) popup_window_general

0x8ba3,	// (0x00039de6) power_save_pane

0x6c8e,	// (0x00037ed1) control_pane_g1_ParamLimits

0x6c8e,	// (0x00037ed1) control_pane_g1

0x6cb7,	// (0x00037efa) control_pane_g2_ParamLimits

0x6cb7,	// (0x00037efa) control_pane_g2

0x6cdc,	// (0x00037f1f) control_pane_g3_ParamLimits

0x6cdc,	// (0x00037f1f) control_pane_g3

0x0007,

0xf783,	// (0x000409c6) control_pane_g_ParamLimits

0xf783,	// (0x000409c6) control_pane_g

0x6d34,	// (0x00037f77) control_pane_t1_ParamLimits

0x6d34,	// (0x00037f77) control_pane_t1

0x6d80,	// (0x00037fc3) control_pane_t2_ParamLimits

0x6d80,	// (0x00037fc3) control_pane_t2

0x0002,

0xf794,	// (0x000409d7) control_pane_t_ParamLimits

0xf794,	// (0x000409d7) control_pane_t

0x6bb3,	// (0x00037df6) navi_navi_volume_pane_cp1

0x6bbb,	// (0x00037dfe) status_small_icon_pane

0x6bc3,	// (0x00037e06) status_small_pane_g1_ParamLimits

0x6bc3,	// (0x00037e06) status_small_pane_g1

0x6bf7,	// (0x00037e3a) status_small_pane_g2_ParamLimits

0x6bf7,	// (0x00037e3a) status_small_pane_g2

0x6c03,	// (0x00037e46) status_small_pane_g3_ParamLimits

0x6c03,	// (0x00037e46) status_small_pane_g3

0x6c0f,	// (0x00037e52) status_small_pane_g4_ParamLimits

0x6c0f,	// (0x00037e52) status_small_pane_g4

0x6c1b,	// (0x00037e5e) status_small_pane_g5_ParamLimits

0x6c1b,	// (0x00037e5e) status_small_pane_g5

0x6c29,	// (0x00037e6c) status_small_pane_g6_ParamLimits

0x6c29,	// (0x00037e6c) status_small_pane_g6

0x0007,

0xf772,	// (0x000409b5) status_small_pane_g_ParamLimits

0xf772,	// (0x000409b5) status_small_pane_g

0x6c58,	// (0x00037e9b) status_small_pane_t1

0x6c7a,	// (0x00037ebd) status_small_wait_pane_ParamLimits

0x6c7a,	// (0x00037ebd) status_small_wait_pane

0x657f,	// (0x000377c2) aid_levels_signal_ParamLimits

0x657f,	// (0x000377c2) aid_levels_signal

0x6591,	// (0x000377d4) signal_pane_g1_ParamLimits

0x6591,	// (0x000377d4) signal_pane_g1

0x65a6,	// (0x000377e9) signal_pane_g2_ParamLimits

0x65a6,	// (0x000377e9) signal_pane_g2

0x0003,

0xf703,	// (0x00040946) signal_pane_g_ParamLimits

0xf703,	// (0x00040946) signal_pane_g

0x230d,	// (0x00033550) context_pane_g1

0x5868,	// (0x00036aab) title_pane_g1

0x5886,	// (0x00036ac9) title_pane_t1

0xe99c,	// (0x0003fbdf) title_pane_t2

0xe9c2,	// (0x0003fc05) title_pane_t3

0x0002,

0xf557,	// (0x0004079a) title_pane_t

0x8fb3,	// (0x0003a1f6) aid_levels_battery_ParamLimits

0x8fb3,	// (0x0003a1f6) aid_levels_battery

0x8fc7,	// (0x0003a20a) battery_pane_g1_ParamLimits

0x8fc7,	// (0x0003a20a) battery_pane_g1

0x8fdd,	// (0x0003a220) battery_pane_g2_ParamLimits

0x8fdd,	// (0x0003a220) battery_pane_g2

0x0001,

0xf7a6,	// (0x000409e9) battery_pane_g_ParamLimits

0xf7a6,	// (0x000409e9) battery_pane_g

0xa229,	// (0x0003b46c) uni_indicator_pane_g1

0xa23f,	// (0x0003b482) uni_indicator_pane_g2

0xa255,	// (0x0003b498) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00040b5f) uni_indicator_pane_g

0x25bb,	// (0x000337fe) navi_icon_pane_ParamLimits

0x25bb,	// (0x000337fe) navi_icon_pane

0x253f,	// (0x00033782) navi_midp_pane

0x25d7,	// (0x0003381a) navi_navi_pane

0x25e1,	// (0x00033824) navi_text_pane_ParamLimits

0x25e1,	// (0x00033824) navi_text_pane

0xe970,	// (0x0003fbb3) status_small_wait_pane_g1

0xf275,	// (0x000404b8) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00040b5a) status_small_wait_pane_g

0x9f3c,	// (0x0003b17f) navi_navi_icon_text_pane

0x9f44,	// (0x0003b187) navi_navi_pane_g1_ParamLimits

0x9f44,	// (0x0003b187) navi_navi_pane_g1

0x9f56,	// (0x0003b199) navi_navi_pane_g2_ParamLimits

0x9f56,	// (0x0003b199) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00040b28) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00040b28) navi_navi_pane_g

0x9f68,	// (0x0003b1ab) navi_navi_tabs_pane

0x9f71,	// (0x0003b1b4) navi_navi_text_pane

0x9f3c,	// (0x0003b17f) navi_navi_volume_pane

0x9f18,	// (0x0003b15b) navi_text_pane_t1

0x9f0c,	// (0x0003b14f) navi_icon_pane_g1

0x9e5f,	// (0x0003b0a2) navi_navi_text_pane_t1

0x7503,	// (0x00038746) navi_navi_volume_pane_g1

0x750b,	// (0x0003874e) volume_small_pane

0x9dc5,	// (0x0003b008) navi_navi_icon_text_pane_g1

0x9dcd,	// (0x0003b010) navi_navi_icon_text_pane_t1

0x25d7,	// (0x0003381a) navi_tabs_2_long_pane

0x25d7,	// (0x0003381a) navi_tabs_2_pane

0x25d7,	// (0x0003381a) navi_tabs_3_long_pane

0x25d7,	// (0x0003381a) navi_tabs_3_pane

0x25d7,	// (0x0003381a) navi_tabs_4_pane

0x74e3,	// (0x00038726) tabs_2_active_pane_ParamLimits

0x74e3,	// (0x00038726) tabs_2_active_pane

0x74f3,	// (0x00038736) tabs_2_passive_pane_ParamLimits

0x74f3,	// (0x00038736) tabs_2_passive_pane

0x74b1,	// (0x000386f4) tabs_3_active_pane_ParamLimits

0x74b1,	// (0x000386f4) tabs_3_active_pane

0x74c1,	// (0x00038704) tabs_3_passive_pane_ParamLimits

0x74c1,	// (0x00038704) tabs_3_passive_pane

0x74d2,	// (0x00038715) tabs_3_passive_pane_cp_ParamLimits

0x74d2,	// (0x00038715) tabs_3_passive_pane_cp

0x7465,	// (0x000386a8) tabs_4_active_pane_ParamLimits

0x7465,	// (0x000386a8) tabs_4_active_pane

0x7478,	// (0x000386bb) tabs_4_passive_pane_ParamLimits

0x7478,	// (0x000386bb) tabs_4_passive_pane

0x7489,	// (0x000386cc) tabs_4_passive_pane_cp_ParamLimits

0x7489,	// (0x000386cc) tabs_4_passive_pane_cp

0x749a,	// (0x000386dd) tabs_4_passive_pane_cp2_ParamLimits

0x749a,	// (0x000386dd) tabs_4_passive_pane_cp2

0x7441,	// (0x00038684) tabs_2_long_active_pane_ParamLimits

0x7441,	// (0x00038684) tabs_2_long_active_pane

0x7453,	// (0x00038696) tabs_2_long_passive_pane_ParamLimits

0x7453,	// (0x00038696) tabs_2_long_passive_pane

0x7402,	// (0x00038645) tabs_3_long_active_pane_ParamLimits

0x7402,	// (0x00038645) tabs_3_long_active_pane

0x7415,	// (0x00038658) tabs_3_long_passive_pane_ParamLimits

0x7415,	// (0x00038658) tabs_3_long_passive_pane

0x742e,	// (0x00038671) tabs_3_long_passive_pane_cp_ParamLimits

0x742e,	// (0x00038671) tabs_3_long_passive_pane_cp

0x73a8,	// (0x000385eb) volume_small_pane_g1

0x73b1,	// (0x000385f4) volume_small_pane_g2

0x73ba,	// (0x000385fd) volume_small_pane_g3

0x73c3,	// (0x00038606) volume_small_pane_g4

0x73cc,	// (0x0003860f) volume_small_pane_g5

0x73d5,	// (0x00038618) volume_small_pane_g6

0x73de,	// (0x00038621) volume_small_pane_g7

0x73e7,	// (0x0003862a) volume_small_pane_g8

0x73f0,	// (0x00038633) volume_small_pane_g9

0x73f9,	// (0x0003863c) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00040af4) volume_small_pane_g

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp2_ParamLimits

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp2

0x58ee,	// (0x00036b31) tabs_3_active_pane_g1

0x58f6,	// (0x00036b39) tabs_3_active_pane_t1

0xe9d4,	// (0x0003fc17) bg_passive_tab_pane_cp2_ParamLimits

0xe9d4,	// (0x0003fc17) bg_passive_tab_pane_cp2

0x58ee,	// (0x00036b31) tabs_3_passive_pane_g1

0x58f6,	// (0x00036b39) tabs_3_passive_pane_t1

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp3_ParamLimits

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp3

0x5908,	// (0x00036b4b) tabs_4_active_pane_g1

0x5910,	// (0x00036b53) tabs_4_active_pane_t1

0xe9d4,	// (0x0003fc17) bg_passive_tab_pane_cp3_ParamLimits

0xe9d4,	// (0x0003fc17) bg_passive_tab_pane_cp3

0x5908,	// (0x00036b4b) tabs_4_1_passive_pane_g1

0x5910,	// (0x00036b53) tabs_4_1_passive_pane_t1

0x6e99,	// (0x000380dc) list_highlight_pane_cp2

0xa4a4,	// (0x0003b6e7) list_set_pane_ParamLimits

0xa4a4,	// (0x0003b6e7) list_set_pane

0xa56c,	// (0x0003b7af) main_pane_set_t1_ParamLimits

0xa56c,	// (0x0003b7af) main_pane_set_t1

0xa58c,	// (0x0003b7cf) main_pane_set_t2_ParamLimits

0xa58c,	// (0x0003b7cf) main_pane_set_t2

0xa5a0,	// (0x0003b7e3) main_pane_set_t3_ParamLimits

0xa5a0,	// (0x0003b7e3) main_pane_set_t3

0xa5b4,	// (0x0003b7f7) main_pane_set_t4_ParamLimits

0xa5b4,	// (0x0003b7f7) main_pane_set_t4

0x0003,

0xf981,	// (0x00040bc4) main_pane_set_t_ParamLimits

0xf981,	// (0x00040bc4) main_pane_set_t

0xa5c8,	// (0x0003b80b) setting_code_pane

0xa5d2,	// (0x0003b815) setting_slider_graphic_pane

0xa5d2,	// (0x0003b815) setting_slider_pane

0xa5d2,	// (0x0003b815) setting_text_pane

0xa5d2,	// (0x0003b815) setting_volume_pane

0x5922,	// (0x00036b65) volume_set_pane

0xe9d4,	// (0x0003fc17) bg_set_opt_pane_cp

0x592c,	// (0x00036b6f) setting_slider_pane_t1

0x5945,	// (0x00036b88) setting_slider_pane_t2

0x595f,	// (0x00036ba2) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000407a1) setting_slider_pane_t

0x5977,	// (0x00036bba) slider_set_pane

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp2

0xe9e2,	// (0x0003fc25) setting_slider_graphic_pane_g1

0x598d,	// (0x00036bd0) setting_slider_graphic_pane_t1

0x599d,	// (0x00036be0) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000407a8) setting_slider_graphic_pane_t

0x59ad,	// (0x00036bf0) slider_set_pane_cp

0xe97a,	// (0x0003fbbd) input_focus_pane_cp1

0xa465,	// (0x0003b6a8) list_set_text_pane

0xe970,	// (0x0003fbb3) setting_text_pane_g1

0xe97a,	// (0x0003fbbd) input_focus_pane_cp2

0xe970,	// (0x0003fbb3) setting_code_pane_g1

0xe9eb,	// (0x0003fc2e) setting_code_pane_t1

0x3c7a,	// (0x00034ebd) set_text_pane_t1_ParamLimits

0x3c7a,	// (0x00034ebd) set_text_pane_t1

0x1e2f,	// (0x00033072) set_opt_bg_pane_g1

0x1e37,	// (0x0003307a) set_opt_bg_pane_g2

0xa43d,	// (0x0003b680) set_opt_bg_pane_g3

0x1e47,	// (0x0003308a) set_opt_bg_pane_g4

0x1e4f,	// (0x00033092) set_opt_bg_pane_g5

0x1e57,	// (0x0003309a) set_opt_bg_pane_g6

0xa447,	// (0x0003b68a) set_opt_bg_pane_g7

0xa451,	// (0x0003b694) set_opt_bg_pane_g8

0xa45b,	// (0x0003b69e) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00040bb1) set_opt_bg_pane_g

0xa430,	// (0x0003b673) slider_set_pane_g1

0x75b4,	// (0x000387f7) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00040ba2) slider_set_pane_g

0x7514,	// (0x00038757) volume_set_pane_g1

0x751e,	// (0x00038761) volume_set_pane_g2

0x7528,	// (0x0003876b) volume_set_pane_g3

0x7532,	// (0x00038775) volume_set_pane_g4

0x753c,	// (0x0003877f) volume_set_pane_g5

0x7546,	// (0x00038789) volume_set_pane_g6

0x7550,	// (0x00038793) volume_set_pane_g7

0x755a,	// (0x0003879d) volume_set_pane_g8

0x7564,	// (0x000387a7) volume_set_pane_g9

0x756e,	// (0x000387b1) volume_set_pane_g10

0x0009,

0xf937,	// (0x00040b7a) volume_set_pane_g

0x59b5,	// (0x00036bf8) indicator_pane_ParamLimits

0x59b5,	// (0x00036bf8) indicator_pane

0x59c1,	// (0x00036c04) main_idle_pane_g2_ParamLimits

0x59c1,	// (0x00036c04) main_idle_pane_g2

0x59e9,	// (0x00036c2c) main_pane_idle_g1_ParamLimits

0x59e9,	// (0x00036c2c) main_pane_idle_g1

0xe9f9,	// (0x0003fc3c) popup_clock_digital_analogue_window_ParamLimits

0xe9f9,	// (0x0003fc3c) popup_clock_digital_analogue_window

0x59f7,	// (0x00036c3a) soft_indicator_pane_ParamLimits

0x59f7,	// (0x00036c3a) soft_indicator_pane

0x5a05,	// (0x00036c48) wallpaper_pane_ParamLimits

0x5a05,	// (0x00036c48) wallpaper_pane

0xe970,	// (0x0003fbb3) wallpaper_pane_g1

0x5a11,	// (0x00036c54) indicator_pane_g1_ParamLimits

0x5a11,	// (0x00036c54) indicator_pane_g1

0xa8ae,	// (0x0003baf1) navi_navi_icon_text_pane_srt_g1

0xea27,	// (0x0003fc6a) soft_indicator_pane_t1

0xea41,	// (0x0003fc84) aid_ps_area_pane

0x5a1d,	// (0x00036c60) aid_ps_clock_pane

0xea52,	// (0x0003fc95) aid_ps_indicator_pane

0xea5e,	// (0x0003fca1) indicator_ps_pane_ParamLimits

0xea5e,	// (0x0003fca1) indicator_ps_pane

0xea6d,	// (0x0003fcb0) power_save_pane_g1_ParamLimits

0xea6d,	// (0x0003fcb0) power_save_pane_g1

0xea79,	// (0x0003fcbc) power_save_pane_g2_ParamLimits

0xea79,	// (0x0003fcbc) power_save_pane_g2

0x545f,	// (0x000366a2) aid_navinavi_width_pane

0xea41,	// (0x0003fc84) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000407ad) power_save_pane_g_ParamLimits

0xf56a,	// (0x000407ad) power_save_pane_g

0xea87,	// (0x0003fcca) power_save_pane_t1_ParamLimits

0xea87,	// (0x0003fcca) power_save_pane_t1

0x5a1d,	// (0x00036c60) aid_ps_clock_pane_ParamLimits

0xea52,	// (0x0003fc95) aid_ps_indicator_pane_ParamLimits

0xea99,	// (0x0003fcdc) power_save_pane_t4_ParamLimits

0xea99,	// (0x0003fcdc) power_save_pane_t4

0x0001,

0xf56f,	// (0x000407b2) power_save_pane_t_ParamLimits

0xf56f,	// (0x000407b2) power_save_pane_t

0xeac3,	// (0x0003fd06) power_save_t3_ParamLimits

0xeac3,	// (0x0003fd06) power_save_t3

0xeaae,	// (0x0003fcf1) power_save_t2_ParamLimits

0xeaae,	// (0x0003fcf1) power_save_t2

0xead8,	// (0x0003fd1b) indicator_ps_pane_g1

0x5a2b,	// (0x00036c6e) ai_gene_pane_ParamLimits

0x5a2b,	// (0x00036c6e) ai_gene_pane

0x5a37,	// (0x00036c7a) ai_links_pane_ParamLimits

0x5a37,	// (0x00036c7a) ai_links_pane

0x5a43,	// (0x00036c86) indicator_pane_cp1_ParamLimits

0x5a43,	// (0x00036c86) indicator_pane_cp1

0x5a4f,	// (0x00036c92) main_pane_idle_g1_cp_ParamLimits

0x5a4f,	// (0x00036c92) main_pane_idle_g1_cp

0xeae1,	// (0x0003fd24) popup_ai_links_title_window

0x5a5b,	// (0x00036c9e) soft_indicator_pane_cp1_ParamLimits

0x5a5b,	// (0x00036c9e) soft_indicator_pane_cp1

0xa217,	// (0x0003b45a) ai_links_pane_g1

0xa220,	// (0x0003b463) grid_ai_links_pane

0xa1fc,	// (0x0003b43f) ai_gene_pane_1

0xa205,	// (0x0003b448) ai_gene_pane_2

0xa20e,	// (0x0003b451) list_highlight_pane_cp4

0xa1dc,	// (0x0003b41f) cell_ai_link_pane_ParamLimits

0xa1dc,	// (0x0003b41f) cell_ai_link_pane

0xa1d4,	// (0x0003b417) cell_ai_link_pane_g1

0xf275,	// (0x000404b8) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00040b55) cell_ai_link_pane_g

0xe97a,	// (0x0003fbbd) grid_highlight_cp2

0xe97a,	// (0x0003fbbd) bg_popup_sub_pane_cp1

0xeaf8,	// (0x0003fd3b) popup_ai_links_title_window_t1

0xa120,	// (0x0003b363) ai_gene_pane_1_g1_ParamLimits

0xa120,	// (0x0003b363) ai_gene_pane_1_g1

0xa12c,	// (0x0003b36f) ai_gene_pane_1_g2_ParamLimits

0xa12c,	// (0x0003b36f) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00040b4b) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00040b4b) ai_gene_pane_1_g

0xa139,	// (0x0003b37c) ai_gene_pane_1_t1_ParamLimits

0xa139,	// (0x0003b37c) ai_gene_pane_1_t1

0xa16d,	// (0x0003b3b0) grid_ai_soft_ind_pane

0xa10b,	// (0x0003b34e) ai_gene_pane_2_t1_ParamLimits

0xa10b,	// (0x0003b34e) ai_gene_pane_2_t1

0x5a67,	// (0x00036caa) main_pane_empty_t1_ParamLimits

0x5a67,	// (0x00036caa) main_pane_empty_t1

0x5a7f,	// (0x00036cc2) main_pane_empty_t2_ParamLimits

0x5a7f,	// (0x00036cc2) main_pane_empty_t2

0x5a94,	// (0x00036cd7) main_pane_empty_t3_ParamLimits

0x5a94,	// (0x00036cd7) main_pane_empty_t3

0x5aa6,	// (0x00036ce9) main_pane_empty_t4_ParamLimits

0x5aa6,	// (0x00036ce9) main_pane_empty_t4

0x5ab8,	// (0x00036cfb) main_pane_empty_t5_ParamLimits

0x5ab8,	// (0x00036cfb) main_pane_empty_t5

0x0004,

0xf574,	// (0x000407b7) main_pane_empty_t_ParamLimits

0xf574,	// (0x000407b7) main_pane_empty_t

0x1e80,	// (0x000330c3) bg_popup_window_pane_ParamLimits

0x1e80,	// (0x000330c3) bg_popup_window_pane

0x9e6d,	// (0x0003b0b0) find_popup_pane_cp2_ParamLimits

0x9e6d,	// (0x0003b0b0) find_popup_pane_cp2

0x9e79,	// (0x0003b0bc) heading_pane_ParamLimits

0x9e79,	// (0x0003b0bc) heading_pane

0xe97a,	// (0x0003fbbd) bg_popup_sub_pane

0x9de7,	// (0x0003b02a) bg_popup_window_pane_g1_ParamLimits

0x9de7,	// (0x0003b02a) bg_popup_window_pane_g1

0x9df3,	// (0x0003b036) bg_popup_window_pane_g2_ParamLimits

0x9df3,	// (0x0003b036) bg_popup_window_pane_g2

0x9dff,	// (0x0003b042) bg_popup_window_pane_g3_ParamLimits

0x9dff,	// (0x0003b042) bg_popup_window_pane_g3

0x9e0b,	// (0x0003b04e) bg_popup_window_pane_g4_ParamLimits

0x9e0b,	// (0x0003b04e) bg_popup_window_pane_g4

0x9e17,	// (0x0003b05a) bg_popup_window_pane_g5_ParamLimits

0x9e17,	// (0x0003b05a) bg_popup_window_pane_g5

0x9e23,	// (0x0003b066) bg_popup_window_pane_g6_ParamLimits

0x9e23,	// (0x0003b066) bg_popup_window_pane_g6

0x9e2f,	// (0x0003b072) bg_popup_window_pane_g7_ParamLimits

0x9e2f,	// (0x0003b072) bg_popup_window_pane_g7

0x9e3b,	// (0x0003b07e) bg_popup_window_pane_g8_ParamLimits

0x9e3b,	// (0x0003b07e) bg_popup_window_pane_g8

0x9e47,	// (0x0003b08a) bg_popup_window_pane_g9_ParamLimits

0x9e47,	// (0x0003b08a) bg_popup_window_pane_g9

0x9e53,	// (0x0003b096) bg_popup_window_pane_g10_ParamLimits

0x9e53,	// (0x0003b096) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00040b13) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00040b13) bg_popup_window_pane_g

0x9d7c,	// (0x0003afbf) bg_popup_heading_pane_ParamLimits

0x9d7c,	// (0x0003afbf) bg_popup_heading_pane

0x76c5,	// (0x00038908) tabs_4_passive_pane_cp_srt_ParamLimits

0x76c5,	// (0x00038908) tabs_4_passive_pane_cp_srt

0x76d7,	// (0x0003891a) tabs_4_passive_pane_srt_ParamLimits

0x9d90,	// (0x0003afd3) heading_pane_g2

0x76d7,	// (0x0003891a) tabs_4_passive_pane_srt

0x6e99,	// (0x000380dc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6e99,	// (0x000380dc) bg_passive_tab_pane_cp3_srt

0x9d98,	// (0x0003afdb) heading_pane_t1_ParamLimits

0x9d98,	// (0x0003afdb) heading_pane_t1

0x9daf,	// (0x0003aff2) heading_pane_t2_ParamLimits

0x9daf,	// (0x0003aff2) heading_pane_t2

0x0001,

0xf8cb,	// (0x00040b0e) heading_pane_t_ParamLimits

0xf8cb,	// (0x00040b0e) heading_pane_t

0x98a7,	// (0x0003aaea) bg_popup_heading_pane_g1

0x9956,	// (0x0003ab99) bg_popup_heading_pane_g2

0x9960,	// (0x0003aba3) bg_popup_heading_pane_g3

0x996a,	// (0x0003abad) bg_popup_heading_pane_g4

0x9974,	// (0x0003abb7) bg_popup_heading_pane_g5

0x997e,	// (0x0003abc1) bg_popup_heading_pane_g6

0x9986,	// (0x0003abc9) bg_popup_heading_pane_g7

0x998e,	// (0x0003abd1) bg_popup_heading_pane_g8

0x9998,	// (0x0003abdb) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00040aca) bg_popup_heading_pane_g

0x90b5,	// (0x0003a2f8) bg_popup_sub_pane_g1

0x90c5,	// (0x0003a308) bg_popup_sub_pane_g2

0x90bd,	// (0x0003a300) bg_popup_sub_pane_g3

0x90d5,	// (0x0003a318) bg_popup_sub_pane_g4

0x90cd,	// (0x0003a310) bg_popup_sub_pane_g5

0x90dd,	// (0x0003a320) bg_popup_sub_pane_g6

0x90e5,	// (0x0003a328) bg_popup_sub_pane_g7

0x90f5,	// (0x0003a338) bg_popup_sub_pane_g8

0x90ed,	// (0x0003a330) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00040aa4) bg_popup_sub_pane_g

0xeb07,	// (0x0003fd4a) bg_popup_window_pane_cp5_ParamLimits

0xeb07,	// (0x0003fd4a) bg_popup_window_pane_cp5

0xeb23,	// (0x0003fd66) popup_note_window_g1_ParamLimits

0xeb23,	// (0x0003fd66) popup_note_window_g1

0xeb2f,	// (0x0003fd72) popup_note_window_t1_ParamLimits

0xeb2f,	// (0x0003fd72) popup_note_window_t1

0xeb45,	// (0x0003fd88) popup_note_window_t2_ParamLimits

0xeb45,	// (0x0003fd88) popup_note_window_t2

0xeb5b,	// (0x0003fd9e) popup_note_window_t3_ParamLimits

0xeb5b,	// (0x0003fd9e) popup_note_window_t3

0xeb71,	// (0x0003fdb4) popup_note_window_t4_ParamLimits

0xeb71,	// (0x0003fdb4) popup_note_window_t4

0xeb99,	// (0x0003fddc) popup_note_window_t5_ParamLimits

0xeb99,	// (0x0003fddc) popup_note_window_t5

0x0004,

0xf57f,	// (0x000407c2) popup_note_window_t_ParamLimits

0xf57f,	// (0x000407c2) popup_note_window_t

0xebbd,	// (0x0003fe00) bg_popup_window_pane_cp6_ParamLimits

0xebbd,	// (0x0003fe00) bg_popup_window_pane_cp6

0x9823,	// (0x0003aa66) popup_note_image_window_g1_ParamLimits

0x9823,	// (0x0003aa66) popup_note_image_window_g1

0x982f,	// (0x0003aa72) popup_note_image_window_g2_ParamLimits

0x982f,	// (0x0003aa72) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00040a98) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00040a98) popup_note_image_window_g

0x9848,	// (0x0003aa8b) popup_note_image_window_t1_ParamLimits

0x9848,	// (0x0003aa8b) popup_note_image_window_t1

0x9861,	// (0x0003aaa4) popup_note_image_window_t2_ParamLimits

0x9861,	// (0x0003aaa4) popup_note_image_window_t2

0x987a,	// (0x0003aabd) popup_note_image_window_t3_ParamLimits

0x987a,	// (0x0003aabd) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00040a9d) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00040a9d) popup_note_image_window_t

0x96e3,	// (0x0003a926) bg_popup_window_pane_cp7_ParamLimits

0x96e3,	// (0x0003a926) bg_popup_window_pane_cp7

0x9713,	// (0x0003a956) popup_note_wait_window_g1_ParamLimits

0x9713,	// (0x0003a956) popup_note_wait_window_g1

0x971f,	// (0x0003a962) popup_note_wait_window_g2_ParamLimits

0x971f,	// (0x0003a962) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00040a86) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00040a86) popup_note_wait_window_g

0x9737,	// (0x0003a97a) popup_note_wait_window_t1_ParamLimits

0x9737,	// (0x0003a97a) popup_note_wait_window_t1

0x975e,	// (0x0003a9a1) popup_note_wait_window_t2_ParamLimits

0x975e,	// (0x0003a9a1) popup_note_wait_window_t2

0x977c,	// (0x0003a9bf) popup_note_wait_window_t3_ParamLimits

0x977c,	// (0x0003a9bf) popup_note_wait_window_t3

0x978f,	// (0x0003a9d2) popup_note_wait_window_t4_ParamLimits

0x978f,	// (0x0003a9d2) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00040a8d) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00040a8d) popup_note_wait_window_t

0x97b4,	// (0x0003a9f7) wait_bar_pane_ParamLimits

0x97b4,	// (0x0003a9f7) wait_bar_pane

0xe97a,	// (0x0003fbbd) wait_anim_pane

0xe97a,	// (0x0003fbbd) wait_border_pane

0xe970,	// (0x0003fbb3) wait_anim_pane_g1

0xe970,	// (0x0003fbb3) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00040941) wait_anim_pane_g

0x9687,	// (0x0003a8ca) wait_border_pane_g1

0x9692,	// (0x0003a8d5) wait_border_pane_g2

0x969b,	// (0x0003a8de) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00040a7f) wait_border_pane_g

0x94f1,	// (0x0003a734) bg_popup_window_pane_cp16_ParamLimits

0x94f1,	// (0x0003a734) bg_popup_window_pane_cp16

0x95f1,	// (0x0003a834) indicator_popup_pane_cp4_ParamLimits

0x95f1,	// (0x0003a834) indicator_popup_pane_cp4

0x9605,	// (0x0003a848) popup_query_data_window_t1_ParamLimits

0x9605,	// (0x0003a848) popup_query_data_window_t1

0x9617,	// (0x0003a85a) popup_query_data_window_t2_ParamLimits

0x9617,	// (0x0003a85a) popup_query_data_window_t2

0x9630,	// (0x0003a873) popup_query_data_window_t3_ParamLimits

0x9630,	// (0x0003a873) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00040a78) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00040a78) popup_query_data_window_t

0x964a,	// (0x0003a88d) query_popup_data_pane_ParamLimits

0x964a,	// (0x0003a88d) query_popup_data_pane

0x965e,	// (0x0003a8a1) query_popup_data_pane_cp1_ParamLimits

0x965e,	// (0x0003a8a1) query_popup_data_pane_cp1

0x94f1,	// (0x0003a734) bg_popup_window_pane_cp10_ParamLimits

0x94f1,	// (0x0003a734) bg_popup_window_pane_cp10

0x9523,	// (0x0003a766) indicator_popup_pane_ParamLimits

0x9523,	// (0x0003a766) indicator_popup_pane

0x9545,	// (0x0003a788) popup_query_code_window_t1_ParamLimits

0x9545,	// (0x0003a788) popup_query_code_window_t1

0x955f,	// (0x0003a7a2) popup_query_code_window_t2_ParamLimits

0x955f,	// (0x0003a7a2) popup_query_code_window_t2

0x95a8,	// (0x0003a7eb) popup_query_code_window_t3_ParamLimits

0x95a8,	// (0x0003a7eb) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00040a71) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00040a71) popup_query_code_window_t

0x95d7,	// (0x0003a81a) query_popup_pane_ParamLimits

0x95d7,	// (0x0003a81a) query_popup_pane

0xebbd,	// (0x0003fe00) bg_popup_window_pane_cp15_ParamLimits

0xebbd,	// (0x0003fe00) bg_popup_window_pane_cp15

0xebdd,	// (0x0003fe20) indicator_popup_pane_cp1_ParamLimits

0xebdd,	// (0x0003fe20) indicator_popup_pane_cp1

0xebf0,	// (0x0003fe33) indicator_popup_pane_cp2_ParamLimits

0xebf0,	// (0x0003fe33) indicator_popup_pane_cp2

0xec0b,	// (0x0003fe4e) popup_query_data_code_window_g1_ParamLimits

0xec0b,	// (0x0003fe4e) popup_query_data_code_window_g1

0xec1e,	// (0x0003fe61) popup_query_data_code_window_t1_ParamLimits

0xec1e,	// (0x0003fe61) popup_query_data_code_window_t1

0xec30,	// (0x0003fe73) popup_query_data_code_window_t2_ParamLimits

0xec30,	// (0x0003fe73) popup_query_data_code_window_t2

0xec42,	// (0x0003fe85) popup_query_data_code_window_t3_ParamLimits

0xec42,	// (0x0003fe85) popup_query_data_code_window_t3

0xf210,	// (0x00040453) popup_query_data_code_window_t4_ParamLimits

0xf210,	// (0x00040453) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000407cd) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000407cd) popup_query_data_code_window_t

0x7291,	// (0x000384d4) list_single_midp_graphic_pane_g3

0xf22a,	// (0x0004046d) query_popup_data_pane_cp2_ParamLimits

0xf23d,	// (0x00040480) query_popup_pane_cp2_ParamLimits

0xf23d,	// (0x00040480) query_popup_pane_cp2

0xe97a,	// (0x0003fbbd) bg_popup_window_pane_cp11

0x94e9,	// (0x0003a72c) heading_pane_cp5

0xf2d3,	// (0x00040516) listscroll_popup_info_pane

0xe97a,	// (0x0003fbbd) input_focus_pane_cp3

0xf258,	// (0x0004049b) query_popup_pane_t1

0xf266,	// (0x000404a9) list_popup_info_pane_ParamLimits

0xf266,	// (0x000404a9) list_popup_info_pane

0xf275,	// (0x000404b8) listscroll_popup_info_pane_g1

0xf27d,	// (0x000404c0) scroll_pane_cp7

0xf287,	// (0x000404ca) popup_info_list_pane_t1_ParamLimits

0xf287,	// (0x000404ca) popup_info_list_pane_t1

0xf2a1,	// (0x000404e4) popup_info_list_pane_t2_ParamLimits

0xf2a1,	// (0x000404e4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000407d6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000407d6) popup_info_list_pane_t

0xe97a,	// (0x0003fbbd) bg_popup_window_pane_cp12

0xa8c8,	// (0x0003bb0b) find_popup_pane

0xe9d4,	// (0x0003fc17) bg_popup_window_pane_cp3

0xf2bb,	// (0x000404fe) heading_pane_cp3

0xf2c7,	// (0x0004050a) listscroll_popup_graphic_pane

0xe97a,	// (0x0003fbbd) bg_popup_window_pane_cp4

0x5b1a,	// (0x00036d5d) heading_pane_cp4

0xf2d3,	// (0x00040516) listscroll_popup_colour_pane

0x5b24,	// (0x00036d67) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5b24,	// (0x00036d67) cell_large_graphic_colour_none_popup_pane

0x5b38,	// (0x00036d7b) grid_large_graphic_colour_popup_pane_ParamLimits

0x5b38,	// (0x00036d7b) grid_large_graphic_colour_popup_pane

0x5b64,	// (0x00036da7) listscroll_popup_colour_pane_g1_ParamLimits

0x5b64,	// (0x00036da7) listscroll_popup_colour_pane_g1

0x5b7b,	// (0x00036dbe) listscroll_popup_colour_pane_g2_ParamLimits

0x5b7b,	// (0x00036dbe) listscroll_popup_colour_pane_g2

0x5b92,	// (0x00036dd5) listscroll_popup_colour_pane_g3_ParamLimits

0x5b92,	// (0x00036dd5) listscroll_popup_colour_pane_g3

0x5ba2,	// (0x00036de5) listscroll_popup_colour_pane_g4_ParamLimits

0x5ba2,	// (0x00036de5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000407db) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000407db) listscroll_popup_colour_pane_g

0xf2db,	// (0x0004051e) scroll_pane_cp6_ParamLimits

0xf2db,	// (0x0004051e) scroll_pane_cp6

0x5bb6,	// (0x00036df9) cell_large_graphic_colour_popup_pane_ParamLimits

0x5bb6,	// (0x00036df9) cell_large_graphic_colour_popup_pane

0xf2ed,	// (0x00040530) cell_large_graphic_colour_none_popup_pane_t1

0xe97a,	// (0x0003fbbd) grid_highlight_pane_cp5

0xf2fc,	// (0x0004053f) cell_large_graphic_colour_popup_pane_g1

0xf304,	// (0x00040547) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000407e4) cell_large_graphic_colour_popup_pane_g

0xf30c,	// (0x0004054f) cell_large_graphic_colour_popup_pane_g2_copy1

0xf315,	// (0x00040558) grid_highlight_pane_cp4

0xf31d,	// (0x00040560) bg_popup_window_pane_cp8_ParamLimits

0xf31d,	// (0x00040560) bg_popup_window_pane_cp8

0xf338,	// (0x0004057b) popup_snote_single_text_window_g1_ParamLimits

0xf338,	// (0x0004057b) popup_snote_single_text_window_g1

0xf34a,	// (0x0004058d) popup_snote_single_text_window_t1_ParamLimits

0xf34a,	// (0x0004058d) popup_snote_single_text_window_t1

0xf35d,	// (0x000405a0) popup_snote_single_text_window_t2_ParamLimits

0xf35d,	// (0x000405a0) popup_snote_single_text_window_t2

0xf370,	// (0x000405b3) popup_snote_single_text_window_t3_ParamLimits

0xf370,	// (0x000405b3) popup_snote_single_text_window_t3

0xf3a9,	// (0x000405ec) popup_snote_single_text_window_t4_ParamLimits

0xf3a9,	// (0x000405ec) popup_snote_single_text_window_t4

0xf3dd,	// (0x00040620) popup_snote_single_text_window_t5_ParamLimits

0xf3dd,	// (0x00040620) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000407e9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000407e9) popup_snote_single_text_window_t

0xf40c,	// (0x0004064f) bg_popup_window_pane_cp9_ParamLimits

0xf40c,	// (0x0004064f) bg_popup_window_pane_cp9

0xf338,	// (0x0004057b) popup_snote_single_graphic_window_g1_ParamLimits

0xf338,	// (0x0004057b) popup_snote_single_graphic_window_g1

0xf41a,	// (0x0004065d) popup_snote_single_graphic_window_g2_ParamLimits

0xf41a,	// (0x0004065d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000407f4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000407f4) popup_snote_single_graphic_window_g

0xf426,	// (0x00040669) popup_snote_single_graphic_window_t1_ParamLimits

0xf426,	// (0x00040669) popup_snote_single_graphic_window_t1

0xf439,	// (0x0004067c) popup_snote_single_graphic_window_t2_ParamLimits

0xf439,	// (0x0004067c) popup_snote_single_graphic_window_t2

0xf44c,	// (0x0004068f) popup_snote_single_graphic_window_t3_ParamLimits

0xf44c,	// (0x0004068f) popup_snote_single_graphic_window_t3

0xf485,	// (0x000406c8) popup_snote_single_graphic_window_t4_ParamLimits

0xf485,	// (0x000406c8) popup_snote_single_graphic_window_t4

0xf4b9,	// (0x000406fc) popup_snote_single_graphic_window_t5_ParamLimits

0xf4b9,	// (0x000406fc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000407f9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000407f9) popup_snote_single_graphic_window_t

0xa806,	// (0x0003ba49) grid_graphic_popup_pane_ParamLimits

0xa806,	// (0x0003ba49) grid_graphic_popup_pane

0xa834,	// (0x0003ba77) listscroll_popup_graphic_pane_g1_ParamLimits

0xa834,	// (0x0003ba77) listscroll_popup_graphic_pane_g1

0xa848,	// (0x0003ba8b) listscroll_popup_graphic_pane_g2_ParamLimits

0xa848,	// (0x0003ba8b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00040bee) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00040bee) listscroll_popup_graphic_pane_g

0xa85c,	// (0x0003ba9f) scroll_pane_cp5

0xa7ae,	// (0x0003b9f1) cell_graphic_popup_pane_ParamLimits

0xa7ae,	// (0x0003b9f1) cell_graphic_popup_pane

0xa78f,	// (0x0003b9d2) cell_graphic_popup_pane_g1

0xa797,	// (0x0003b9da) cell_graphic_popup_pane_g2

0xf30c,	// (0x0004054f) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00040be7) cell_graphic_popup_pane_g

0xa7a0,	// (0x0003b9e3) cell_graphic_popup_pane_t2

0xf315,	// (0x00040558) grid_highlight_pane_cp3

0xf4fa,	// (0x0004073d) list_gen_pane_ParamLimits

0xf4fa,	// (0x0004073d) list_gen_pane

0xf522,	// (0x00040765) scroll_pane

0xa6e7,	// (0x0003b92a) bg_list_pane_g1_ParamLimits

0xa6e7,	// (0x0003b92a) bg_list_pane_g1

0xa704,	// (0x0003b947) bg_list_pane_g2_ParamLimits

0xa704,	// (0x0003b947) bg_list_pane_g2

0xa719,	// (0x0003b95c) bg_list_pane_g3_ParamLimits

0xa719,	// (0x0003b95c) bg_list_pane_g3

0xa72d,	// (0x0003b970) bg_list_pane_g4_ParamLimits

0xa72d,	// (0x0003b970) bg_list_pane_g4

0xa741,	// (0x0003b984) bg_list_pane_g5_ParamLimits

0xa741,	// (0x0003b984) bg_list_pane_g5

0x0004,

0xf999,	// (0x00040bdc) bg_list_pane_g_ParamLimits

0xf999,	// (0x00040bdc) bg_list_pane_g

0x765c,	// (0x0003889f) list_double2_graphic_large_graphic_pane_ParamLimits

0x765c,	// (0x0003889f) list_double2_graphic_large_graphic_pane

0x765c,	// (0x0003889f) list_double2_graphic_pane_ParamLimits

0x765c,	// (0x0003889f) list_double2_graphic_pane

0x765c,	// (0x0003889f) list_double2_large_graphic_pane_ParamLimits

0x765c,	// (0x0003889f) list_double2_large_graphic_pane

0x765c,	// (0x0003889f) list_double2_pane_ParamLimits

0x765c,	// (0x0003889f) list_double2_pane

0x765c,	// (0x0003889f) list_double_graphic_heading_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_graphic_heading_pane

0x765c,	// (0x0003889f) list_double_graphic_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_graphic_pane

0x765c,	// (0x0003889f) list_double_heading_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_heading_pane

0x765c,	// (0x0003889f) list_double_large_graphic_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_large_graphic_pane

0x765c,	// (0x0003889f) list_double_number_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_number_pane

0x765c,	// (0x0003889f) list_double_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_pane

0x765c,	// (0x0003889f) list_double_time_pane_ParamLimits

0x765c,	// (0x0003889f) list_double_time_pane

0x765c,	// (0x0003889f) list_setting_number_pane_ParamLimits

0x765c,	// (0x0003889f) list_setting_number_pane

0x765c,	// (0x0003889f) list_setting_pane_ParamLimits

0x765c,	// (0x0003889f) list_setting_pane

0xa6a3,	// (0x0003b8e6) list_single_2graphic_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_2graphic_pane

0xa6a3,	// (0x0003b8e6) list_single_graphic_heading_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_graphic_heading_pane

0xa6a3,	// (0x0003b8e6) list_single_graphic_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_graphic_pane

0xa6a3,	// (0x0003b8e6) list_single_heading_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_heading_pane

0x7686,	// (0x000388c9) list_single_large_graphic_pane_ParamLimits

0x7686,	// (0x000388c9) list_single_large_graphic_pane

0xa6a3,	// (0x0003b8e6) list_single_number_heading_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_number_heading_pane

0xa6a3,	// (0x0003b8e6) list_single_number_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_number_pane

0xa6a3,	// (0x0003b8e6) list_single_pane_ParamLimits

0xa6a3,	// (0x0003b8e6) list_single_pane

0xe97a,	// (0x0003fbbd) list_highlight_pane_cp1

0x44a2,	// (0x000356e5) list_single_pane_g1_ParamLimits

0x44a2,	// (0x000356e5) list_single_pane_g1

0x5bf1,	// (0x00036e34) list_single_pane_g2_ParamLimits

0x5bf1,	// (0x00036e34) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0004080b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0004080b) list_single_pane_g

0x7646,	// (0x00038889) list_single_pane_t1_ParamLimits

0x7646,	// (0x00038889) list_single_pane_t1

0x44a2,	// (0x000356e5) list_single_number_pane_g1_ParamLimits

0x44a2,	// (0x000356e5) list_single_number_pane_g1

0x5bf1,	// (0x00036e34) list_single_number_pane_g2_ParamLimits

0x5bf1,	// (0x00036e34) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0004080b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0004080b) list_single_number_pane_g

0x7578,	// (0x000387bb) list_single_number_pane_t1_ParamLimits

0x7578,	// (0x000387bb) list_single_number_pane_t1

0x758e,	// (0x000387d1) list_single_number_pane_t2_ParamLimits

0x758e,	// (0x000387d1) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00040b9d) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00040b9d) list_single_number_pane_t

0x5be5,	// (0x00036e28) list_single_graphic_pane_g1_ParamLimits

0x5be5,	// (0x00036e28) list_single_graphic_pane_g1

0x44a2,	// (0x000356e5) list_single_graphic_pane_g2_ParamLimits

0x44a2,	// (0x000356e5) list_single_graphic_pane_g2

0x5bf1,	// (0x00036e34) list_single_graphic_pane_g3_ParamLimits

0x5bf1,	// (0x00036e34) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00040804) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00040804) list_single_graphic_pane_g

0x5bfd,	// (0x00036e40) list_single_graphic_pane_t1_ParamLimits

0x5bfd,	// (0x00036e40) list_single_graphic_pane_t1

0x44a2,	// (0x000356e5) list_single_heading_pane_g1_ParamLimits

0x44a2,	// (0x000356e5) list_single_heading_pane_g1

0x5bf1,	// (0x00036e34) list_single_heading_pane_g2_ParamLimits

0x5bf1,	// (0x00036e34) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004080b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004080b) list_single_heading_pane_g

0x5c13,	// (0x00036e56) list_single_heading_pane_t1_ParamLimits

0x5c13,	// (0x00036e56) list_single_heading_pane_t1

0x5c29,	// (0x00036e6c) list_single_heading_pane_t2_ParamLimits

0x5c29,	// (0x00036e6c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00040810) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00040810) list_single_heading_pane_t

0x44a2,	// (0x000356e5) list_single_number_heading_pane_g1_ParamLimits

0x44a2,	// (0x000356e5) list_single_number_heading_pane_g1

0x5bf1,	// (0x00036e34) list_single_number_heading_pane_g2_ParamLimits

0x5bf1,	// (0x00036e34) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004080b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004080b) list_single_number_heading_pane_g

0x5c13,	// (0x00036e56) list_single_number_heading_pane_t1_ParamLimits

0x5c13,	// (0x00036e56) list_single_number_heading_pane_t1

0x5c3b,	// (0x00036e7e) list_single_number_heading_pane_t2_ParamLimits

0x5c3b,	// (0x00036e7e) list_single_number_heading_pane_t2

0x5c4d,	// (0x00036e90) list_single_number_heading_pane_t3_ParamLimits

0x5c4d,	// (0x00036e90) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00040815) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00040815) list_single_number_heading_pane_t

0x5c5f,	// (0x00036ea2) list_single_graphic_heading_pane_g1_ParamLimits

0x5c5f,	// (0x00036ea2) list_single_graphic_heading_pane_g1

0x5c6b,	// (0x00036eae) list_single_graphic_heading_pane_g4_ParamLimits

0x5c6b,	// (0x00036eae) list_single_graphic_heading_pane_g4

0x5bf1,	// (0x00036e34) list_single_graphic_heading_pane_g5_ParamLimits

0x5bf1,	// (0x00036e34) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0004081c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0004081c) list_single_graphic_heading_pane_g

0x5c13,	// (0x00036e56) list_single_graphic_heading_pane_t1_ParamLimits

0x5c13,	// (0x00036e56) list_single_graphic_heading_pane_t1

0x5c7c,	// (0x00036ebf) list_single_graphic_heading_pane_t2_ParamLimits

0x5c7c,	// (0x00036ebf) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00040823) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00040823) list_single_graphic_heading_pane_t

0x5c8e,	// (0x00036ed1) list_single_large_graphic_pane_g1_ParamLimits

0x5c8e,	// (0x00036ed1) list_single_large_graphic_pane_g1

0x44a2,	// (0x000356e5) list_single_large_graphic_pane_g2_ParamLimits

0x44a2,	// (0x000356e5) list_single_large_graphic_pane_g2

0x5bf1,	// (0x00036e34) list_single_large_graphic_pane_g3_ParamLimits

0x5bf1,	// (0x00036e34) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00040828) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00040828) list_single_large_graphic_pane_g

0x9692,	// (0x0003a8d5) wait_border_pane_g2_copy1

0x5c9a,	// (0x00036edd) list_single_large_graphic_pane_g4_cp2

0x5c13,	// (0x00036e56) list_single_large_graphic_pane_t1_ParamLimits

0x5c13,	// (0x00036e56) list_single_large_graphic_pane_t1

0x5ca2,	// (0x00036ee5) list_double_pane_g1_ParamLimits

0x5ca2,	// (0x00036ee5) list_double_pane_g1

0x5cae,	// (0x00036ef1) list_double_pane_g2_ParamLimits

0x5cae,	// (0x00036ef1) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0004082f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0004082f) list_double_pane_g

0x5cba,	// (0x00036efd) list_double_pane_t1_ParamLimits

0x5cba,	// (0x00036efd) list_double_pane_t1

0x5cd0,	// (0x00036f13) list_double_pane_t2_ParamLimits

0x5cd0,	// (0x00036f13) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00040834) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00040834) list_double_pane_t

0x5ce2,	// (0x00036f25) list_double2_pane_g1_ParamLimits

0x5ce2,	// (0x00036f25) list_double2_pane_g1

0x5cae,	// (0x00036ef1) list_double2_pane_g2_ParamLimits

0x5cae,	// (0x00036ef1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00040839) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00040839) list_double2_pane_g

0x5cba,	// (0x00036efd) list_double2_pane_t1_ParamLimits

0x5cba,	// (0x00036efd) list_double2_pane_t1

0x5cf3,	// (0x00036f36) list_double2_pane_t2_ParamLimits

0x5cf3,	// (0x00036f36) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0004083e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0004083e) list_double2_pane_t

0x5ca2,	// (0x00036ee5) list_double_number_pane_g1_ParamLimits

0x5ca2,	// (0x00036ee5) list_double_number_pane_g1

0x5cae,	// (0x00036ef1) list_double_number_pane_g2_ParamLimits

0x5cae,	// (0x00036ef1) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0004082f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0004082f) list_double_number_pane_g

0x5d05,	// (0x00036f48) list_double_number_pane_t1_ParamLimits

0x5d05,	// (0x00036f48) list_double_number_pane_t1

0x5d17,	// (0x00036f5a) list_double_number_pane_t2_ParamLimits

0x5d17,	// (0x00036f5a) list_double_number_pane_t2

0x5d2d,	// (0x00036f70) list_double_number_pane_t3_ParamLimits

0x5d2d,	// (0x00036f70) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00040843) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00040843) list_double_number_pane_t

0x5d3f,	// (0x00036f82) list_double_graphic_pane_g1_ParamLimits

0x5d3f,	// (0x00036f82) list_double_graphic_pane_g1

0x5d4b,	// (0x00036f8e) list_double_graphic_pane_g2_ParamLimits

0x5d4b,	// (0x00036f8e) list_double_graphic_pane_g2

0x5d5a,	// (0x00036f9d) list_double_graphic_pane_g3_ParamLimits

0x5d5a,	// (0x00036f9d) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0004084a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0004084a) list_double_graphic_pane_g

0x5d72,	// (0x00036fb5) list_double_graphic_pane_t1_ParamLimits

0x5d72,	// (0x00036fb5) list_double_graphic_pane_t1

0x5d88,	// (0x00036fcb) list_double_graphic_pane_t2_ParamLimits

0x5d88,	// (0x00036fcb) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00040853) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00040853) list_double_graphic_pane_t

0x5d3f,	// (0x00036f82) list_double2_graphic_pane_g1_ParamLimits

0x5d3f,	// (0x00036f82) list_double2_graphic_pane_g1

0x5d9a,	// (0x00036fdd) list_double2_graphic_pane_g2_ParamLimits

0x5d9a,	// (0x00036fdd) list_double2_graphic_pane_g2

0x5da6,	// (0x00036fe9) list_double2_graphic_pane_g3_ParamLimits

0x5da6,	// (0x00036fe9) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00040858) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00040858) list_double2_graphic_pane_g

0x5d17,	// (0x00036f5a) list_double2_graphic_pane_t1_ParamLimits

0x5d17,	// (0x00036f5a) list_double2_graphic_pane_t1

0x5db2,	// (0x00036ff5) list_double2_graphic_pane_t2_ParamLimits

0x5db2,	// (0x00036ff5) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0004085f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0004085f) list_double2_graphic_pane_t

0x5dc4,	// (0x00037007) list_double_large_graphic_pane_g1_ParamLimits

0x5dc4,	// (0x00037007) list_double_large_graphic_pane_g1

0x5ce2,	// (0x00036f25) list_double_large_graphic_pane_g2_ParamLimits

0x5ce2,	// (0x00036f25) list_double_large_graphic_pane_g2

0x5cae,	// (0x00036ef1) list_double_large_graphic_pane_g3_ParamLimits

0x5cae,	// (0x00036ef1) list_double_large_graphic_pane_g3

0x5def,	// (0x00037032) list_double_large_graphic_pane_g4_ParamLimits

0x5def,	// (0x00037032) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00040864) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00040864) list_double_large_graphic_pane_g

0x5e02,	// (0x00037045) list_double_large_graphic_pane_t1_ParamLimits

0x5e02,	// (0x00037045) list_double_large_graphic_pane_t1

0x5e1b,	// (0x0003705e) list_double_large_graphic_pane_t2_ParamLimits

0x5e1b,	// (0x0003705e) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004086f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004086f) list_double_large_graphic_pane_t

0x5e2d,	// (0x00037070) list_double2_large_graphic_pane_g1_ParamLimits

0x5e2d,	// (0x00037070) list_double2_large_graphic_pane_g1

0x5ce2,	// (0x00036f25) list_double2_large_graphic_pane_g2_ParamLimits

0x5ce2,	// (0x00036f25) list_double2_large_graphic_pane_g2

0x5cae,	// (0x00036ef1) list_double2_large_graphic_pane_g3_ParamLimits

0x5cae,	// (0x00036ef1) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00040874) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00040874) list_double2_large_graphic_pane_g

0x5e39,	// (0x0003707c) list_double2_large_graphic_pane_t1_ParamLimits

0x5e39,	// (0x0003707c) list_double2_large_graphic_pane_t1

0x5e4f,	// (0x00037092) list_double2_large_graphic_pane_t2_ParamLimits

0x5e4f,	// (0x00037092) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0004087b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0004087b) list_double2_large_graphic_pane_t

0x5e61,	// (0x000370a4) list_double_heading_pane_g1_ParamLimits

0x5e61,	// (0x000370a4) list_double_heading_pane_g1

0x5e72,	// (0x000370b5) list_double_heading_pane_g2_ParamLimits

0x5e72,	// (0x000370b5) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00040880) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00040880) list_double_heading_pane_g

0x5e7e,	// (0x000370c1) list_double_heading_pane_t1_ParamLimits

0x5e7e,	// (0x000370c1) list_double_heading_pane_t1

0x5e94,	// (0x000370d7) list_double_heading_pane_t2_ParamLimits

0x5e94,	// (0x000370d7) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00040885) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00040885) list_double_heading_pane_t

0x5ea6,	// (0x000370e9) list_double_graphic_heading_pane_g1_ParamLimits

0x5ea6,	// (0x000370e9) list_double_graphic_heading_pane_g1

0x5e61,	// (0x000370a4) list_double_graphic_heading_pane_g2_ParamLimits

0x5e61,	// (0x000370a4) list_double_graphic_heading_pane_g2

0x5e72,	// (0x000370b5) list_double_graphic_heading_pane_g3_ParamLimits

0x5e72,	// (0x000370b5) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0004088a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0004088a) list_double_graphic_heading_pane_g

0x5eb2,	// (0x000370f5) list_double_graphic_heading_pane_t1_ParamLimits

0x5eb2,	// (0x000370f5) list_double_graphic_heading_pane_t1

0x5ec8,	// (0x0003710b) list_double_graphic_heading_pane_t2_ParamLimits

0x5ec8,	// (0x0003710b) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00040891) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00040891) list_double_graphic_heading_pane_t

0x5ce2,	// (0x00036f25) list_double_time_pane_g1_ParamLimits

0x5ce2,	// (0x00036f25) list_double_time_pane_g1

0x5cae,	// (0x00036ef1) list_double_time_pane_g2_ParamLimits

0x5cae,	// (0x00036ef1) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00040839) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00040839) list_double_time_pane_g

0x5e39,	// (0x0003707c) list_double_time_pane_t1_ParamLimits

0x5e39,	// (0x0003707c) list_double_time_pane_t1

0x5eda,	// (0x0003711d) list_double_time_pane_t2_ParamLimits

0x5eda,	// (0x0003711d) list_double_time_pane_t2

0x5eec,	// (0x0003712f) list_double_time_pane_t3_ParamLimits

0x5eec,	// (0x0003712f) list_double_time_pane_t3

0x5efe,	// (0x00037141) list_double_time_pane_t4_ParamLimits

0x5efe,	// (0x00037141) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00040896) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00040896) list_double_time_pane_t

0x5f10,	// (0x00037153) list_setting_pane_g1_ParamLimits

0x5f10,	// (0x00037153) list_setting_pane_g1

0x5f1c,	// (0x0003715f) list_setting_pane_g2_ParamLimits

0x5f1c,	// (0x0003715f) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0004089f) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0004089f) list_setting_pane_g

0x5f28,	// (0x0003716b) list_setting_pane_t1_ParamLimits

0x5f28,	// (0x0003716b) list_setting_pane_t1

0x5f42,	// (0x00037185) list_setting_pane_t2_ParamLimits

0x5f42,	// (0x00037185) list_setting_pane_t2

0x0002,

0xf661,	// (0x000408a4) list_setting_pane_t_ParamLimits

0xf661,	// (0x000408a4) list_setting_pane_t

0x5f81,	// (0x000371c4) set_value_pane_cp_ParamLimits

0x5f81,	// (0x000371c4) set_value_pane_cp

0x5f8f,	// (0x000371d2) list_setting_number_pane_g1_ParamLimits

0x5f8f,	// (0x000371d2) list_setting_number_pane_g1

0x5f9b,	// (0x000371de) list_setting_number_pane_g2_ParamLimits

0x5f9b,	// (0x000371de) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x000408ab) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x000408ab) list_setting_number_pane_g

0x5fa7,	// (0x000371ea) list_setting_number_pane_t1_ParamLimits

0x5fa7,	// (0x000371ea) list_setting_number_pane_t1

0x5fc0,	// (0x00037203) list_setting_number_pane_t2_ParamLimits

0x5fc0,	// (0x00037203) list_setting_number_pane_t2

0x5fda,	// (0x0003721d) list_setting_number_pane_t3_ParamLimits

0x5fda,	// (0x0003721d) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000408b0) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000408b0) list_setting_number_pane_t

0x5f81,	// (0x000371c4) set_value_pane_ParamLimits

0x5f81,	// (0x000371c4) set_value_pane

0x1d7b,	// (0x00032fbe) bg_set_opt_pane_ParamLimits

0x1d7b,	// (0x00032fbe) bg_set_opt_pane

0x3d1a,	// (0x00034f5d) set_value_pane_t1

0x1d9c,	// (0x00032fdf) slider_set_pane_cp3

0x1da5,	// (0x00032fe8) volume_small_pane_cp

0x1dae,	// (0x00032ff1) list_form_gen_pane

0x1db7,	// (0x00032ffa) scroll_pane_cp8

0x601d,	// (0x00037260) form_field_data_pane_ParamLimits

0x601d,	// (0x00037260) form_field_data_pane

0x603b,	// (0x0003727e) form_field_data_wide_pane_ParamLimits

0x603b,	// (0x0003727e) form_field_data_wide_pane

0x3d38,	// (0x00034f7b) form_field_popup_pane_ParamLimits

0x3d38,	// (0x00034f7b) form_field_popup_pane

0x6060,	// (0x000372a3) form_field_popup_wide_pane_ParamLimits

0x6060,	// (0x000372a3) form_field_popup_wide_pane

0x3d5a,	// (0x00034f9d) form_field_slider_pane_ParamLimits

0x3d5a,	// (0x00034f9d) form_field_slider_pane

0x3d6d,	// (0x00034fb0) form_field_slider_wide_pane_ParamLimits

0x3d6d,	// (0x00034fb0) form_field_slider_wide_pane

0x1dc8,	// (0x0003300b) data_form_pane

0x608b,	// (0x000372ce) form_field_data_pane_t1

0x1dd4,	// (0x00033017) input_focus_pane

0x3d80,	// (0x00034fc3) data_form_wide_pane

0x3d9d,	// (0x00034fe0) form_field_data_wide_pane_t1

0xf32a,	// (0x0004056d) input_focus_pane_cp6

0x60a5,	// (0x000372e8) form_field_popup_pane_t1

0x1dd4,	// (0x00033017) input_focus_pane_cp7

0x1e02,	// (0x00033045) list_form_pane

0x3dc7,	// (0x0003500a) form_field_popup_wide_pane_t1

0x1dd4,	// (0x00033017) input_focus_pane_cp8

0x1e0e,	// (0x00033051) list_form_wide_pane

0x60c7,	// (0x0003730a) form_field_slider_pane_t1_ParamLimits

0x60c7,	// (0x0003730a) form_field_slider_pane_t1

0x60df,	// (0x00037322) form_field_slider_pane_t2_ParamLimits

0x60df,	// (0x00037322) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000408c0) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000408c0) form_field_slider_pane_t

0xeb07,	// (0x0003fd4a) input_focus_pane_cp9_ParamLimits

0xeb07,	// (0x0003fd4a) input_focus_pane_cp9

0x60f4,	// (0x00037337) slider_cont_pane_ParamLimits

0x60f4,	// (0x00037337) slider_cont_pane

0x1e1d,	// (0x00033060) form_field_slider_wide_pane_t1_ParamLimits

0x1e1d,	// (0x00033060) form_field_slider_wide_pane_t1

0x3ddc,	// (0x0003501f) form_field_slider_wide_pane_t2_ParamLimits

0x3ddc,	// (0x0003501f) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000408c5) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000408c5) form_field_slider_wide_pane_t

0xeb07,	// (0x0003fd4a) input_focus_pane_cp10_ParamLimits

0xeb07,	// (0x0003fd4a) input_focus_pane_cp10

0x6108,	// (0x0003734b) slider_cont_pane_cp1_ParamLimits

0x6108,	// (0x0003734b) slider_cont_pane_cp1

0x611c,	// (0x0003735f) slider_form_pane_cp

0x1e2f,	// (0x00033072) input_focus_pane_g1

0x1e37,	// (0x0003307a) input_focus_pane_g2

0x1e3f,	// (0x00033082) input_focus_pane_g3

0x1e47,	// (0x0003308a) input_focus_pane_g4

0x1e4f,	// (0x00033092) input_focus_pane_g5

0x1e57,	// (0x0003309a) input_focus_pane_g6

0x1e5f,	// (0x000330a2) input_focus_pane_g7

0x1e67,	// (0x000330aa) input_focus_pane_g8

0x1e6f,	// (0x000330b2) input_focus_pane_g9

0xe970,	// (0x0003fbb3) input_focus_pane_g10

0x0009,

0xf687,	// (0x000408ca) input_focus_pane_g

0x969b,	// (0x0003a8de) wait_border_pane_g3_copy1

0x6124,	// (0x00037367) data_form_pane_t1

0xe970,	// (0x0003fbb3) wait_anim_pane_g1_copy1

0x7618,	// (0x0003885b) data_form_wide_pane_t1

0x6141,	// (0x00037384) list_form_graphic_pane_cp_ParamLimits

0x6141,	// (0x00037384) list_form_graphic_pane_cp

0xa5fa,	// (0x0003b83d) slider_form_pane_g1

0xa603,	// (0x0003b846) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00040bcd) slider_form_pane_g

0x3dee,	// (0x00035031) list_form_graphic_pane_ParamLimits

0x3dee,	// (0x00035031) list_form_graphic_pane

0x3e00,	// (0x00035043) list_form_graphic_pane_g1

0x3e08,	// (0x0003504b) list_form_graphic_pane_t1_ParamLimits

0x3e08,	// (0x0003504b) list_form_graphic_pane_t1

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp5_ParamLimits

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp5

0x6156,	// (0x00037399) find_pane_g1

0x1e77,	// (0x000330ba) input_find_pane

0x615f,	// (0x000373a2) input_find_pane_g1_ParamLimits

0x615f,	// (0x000373a2) input_find_pane_g1

0x616b,	// (0x000373ae) input_find_pane_t1_ParamLimits

0x616b,	// (0x000373ae) input_find_pane_t1

0x6180,	// (0x000373c3) input_find_pane_t2_ParamLimits

0x6180,	// (0x000373c3) input_find_pane_t2

0x0001,

0xf69c,	// (0x000408df) input_find_pane_t_ParamLimits

0xf69c,	// (0x000408df) input_find_pane_t

0x1e80,	// (0x000330c3) input_focus_pane_cp5_ParamLimits

0x1e80,	// (0x000330c3) input_focus_pane_cp5

0x1e8e,	// (0x000330d1) bg_popup_window_pane_cp2_ParamLimits

0x1e8e,	// (0x000330d1) bg_popup_window_pane_cp2

0x1e9b,	// (0x000330de) listscroll_menu_pane_ParamLimits

0x1e9b,	// (0x000330de) listscroll_menu_pane

0x61a1,	// (0x000373e4) popup_submenu_window_ParamLimits

0x61a1,	// (0x000373e4) popup_submenu_window

0x1ea7,	// (0x000330ea) find_popup_pane_g1

0x1eaf,	// (0x000330f2) input_popup_find_pane_cp

0x1e80,	// (0x000330c3) input_focus_pane_cp4_ParamLimits

0x1e80,	// (0x000330c3) input_focus_pane_cp4

0x1eb9,	// (0x000330fc) input_popup_find_pane_t1_ParamLimits

0x1eb9,	// (0x000330fc) input_popup_find_pane_t1

0xe97a,	// (0x0003fbbd) bg_popup_sub_pane_cp

0x1ee7,	// (0x0003312a) listscroll_popup_sub_pane

0x1eef,	// (0x00033132) list_submenu_pane_ParamLimits

0x1eef,	// (0x00033132) list_submenu_pane

0x1f00,	// (0x00033143) scroll_pane_cp4

0x1f08,	// (0x0003314b) list_single_popup_submenu_pane_ParamLimits

0x1f08,	// (0x0003314b) list_single_popup_submenu_pane

0x1f1d,	// (0x00033160) list_single_popup_submenu_pane_g1

0x1f25,	// (0x00033168) list_single_popup_submenu_pane_t1_ParamLimits

0x1f25,	// (0x00033168) list_single_popup_submenu_pane_t1

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp1_ParamLimits

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp1

0x61df,	// (0x00037422) tabs_2_active_pane_g1

0x61e7,	// (0x0003742a) tabs_2_active_pane_t1

0xe9d4,	// (0x0003fc17) bg_passive_tab_pane_cp1_ParamLimits

0xe9d4,	// (0x0003fc17) bg_passive_tab_pane_cp1

0x61df,	// (0x00037422) tabs_2_passive_pane_g1

0x61e7,	// (0x0003742a) tabs_2_passive_pane_t1

0x2739,	// (0x0003397c) bg_active_tab_pane_cp4

0x61f9,	// (0x0003743c) tabs_2_long_active_pane_t1

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp4

0x7299,	// (0x000384dc) list_single_midp_graphic_pane_g4_ParamLimits

0x2739,	// (0x0003397c) bg_active_tab_pane_cp5

0x6218,	// (0x0003745b) tabs_3_long_active_pane_t1

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp5

0x7299,	// (0x000384dc) list_single_midp_graphic_pane_g4

0xe9d4,	// (0x0003fc17) bg_popup_window_pane_cp13_ParamLimits

0xe9d4,	// (0x0003fc17) bg_popup_window_pane_cp13

0x1f43,	// (0x00033186) listscroll_popup_fast_pane_ParamLimits

0x1f43,	// (0x00033186) listscroll_popup_fast_pane

0x1f52,	// (0x00033195) grid_popup_fast_pane_ParamLimits

0x1f52,	// (0x00033195) grid_popup_fast_pane

0x1f64,	// (0x000331a7) scroll_pane_cp9_ParamLimits

0x1f64,	// (0x000331a7) scroll_pane_cp9

0xbf7b,	// (0x0003d1be) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbf7b,	// (0x0003d1be) list_single_graphic_hl_pane_t1_cp2

0x1f88,	// (0x000331cb) input_focus_pane_cp20_ParamLimits

0x1f88,	// (0x000331cb) input_focus_pane_cp20

0x1f96,	// (0x000331d9) query_popup_data_pane_t1_ParamLimits

0x1f96,	// (0x000331d9) query_popup_data_pane_t1

0x1fa9,	// (0x000331ec) query_popup_data_pane_t2_ParamLimits

0x1fa9,	// (0x000331ec) query_popup_data_pane_t2

0x1fef,	// (0x00033232) query_popup_data_pane_t3_ParamLimits

0x1fef,	// (0x00033232) query_popup_data_pane_t3

0x2030,	// (0x00033273) query_popup_data_pane_t4_ParamLimits

0x2030,	// (0x00033273) query_popup_data_pane_t4

0x206c,	// (0x000332af) query_popup_data_pane_t5_ParamLimits

0x206c,	// (0x000332af) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000408e4) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000408e4) query_popup_data_pane_t

0x1e2f,	// (0x00033072) bg_set_opt_pane_g1

0x1e37,	// (0x0003307a) bg_set_opt_pane_g2

0x1e3f,	// (0x00033082) bg_set_opt_pane_g3

0x1e47,	// (0x0003308a) bg_set_opt_pane_g4

0x1e4f,	// (0x00033092) bg_set_opt_pane_g5

0x1e57,	// (0x0003309a) bg_set_opt_pane_g6

0x1e5f,	// (0x000330a2) bg_set_opt_pane_g7

0x1e67,	// (0x000330aa) bg_set_opt_pane_g8

0x1e6f,	// (0x000330b2) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000408ef) bg_set_opt_pane_g

0x6718,	// (0x0003795b) control_top_pane_stacon_ParamLimits

0x6718,	// (0x0003795b) control_top_pane_stacon

0x676b,	// (0x000379ae) signal_pane_stacon_ParamLimits

0x676b,	// (0x000379ae) signal_pane_stacon

0x2483,	// (0x000336c6) stacon_top_pane_g1_ParamLimits

0x2483,	// (0x000336c6) stacon_top_pane_g1

0x6790,	// (0x000379d3) title_pane_stacon_ParamLimits

0x6790,	// (0x000379d3) title_pane_stacon

0x67ba,	// (0x000379fd) uni_indicator_pane_stacon_ParamLimits

0x67ba,	// (0x000379fd) uni_indicator_pane_stacon

0x67d2,	// (0x00037a15) battery_pane_stacon_ParamLimits

0x67d2,	// (0x00037a15) battery_pane_stacon

0x6816,	// (0x00037a59) control_bottom_pane_stacon_ParamLimits

0x6816,	// (0x00037a59) control_bottom_pane_stacon

0x6839,	// (0x00037a7c) navi_pane_stacon_ParamLimits

0x6839,	// (0x00037a7c) navi_pane_stacon

0x24a5,	// (0x000336e8) stacon_bottom_pane_g1_ParamLimits

0x24a5,	// (0x000336e8) stacon_bottom_pane_g1

0x622a,	// (0x0003746d) aid_levels_signal_lsc_ParamLimits

0x622a,	// (0x0003746d) aid_levels_signal_lsc

0x6241,	// (0x00037484) signal_pane_stacon_g1_ParamLimits

0x6241,	// (0x00037484) signal_pane_stacon_g1

0x6255,	// (0x00037498) signal_pane_stacon_g2_ParamLimits

0x6255,	// (0x00037498) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00040902) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00040902) signal_pane_stacon_g

0x628a,	// (0x000374cd) title_pane_stacon_t1_ParamLimits

0x628a,	// (0x000374cd) title_pane_stacon_t1

0x20c4,	// (0x00033307) uni_indicator_pane_stacon_g1

0x20ce,	// (0x00033311) uni_indicator_pane_stacon_g2

0x20b0,	// (0x000332f3) uni_indicator_pane_stacon_g3

0x20ba,	// (0x000332fd) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0004090e) uni_indicator_pane_stacon_g

0x62af,	// (0x000374f2) control_top_pane_stacon_g1

0x62b7,	// (0x000374fa) control_top_pane_stacon_t1_ParamLimits

0x62b7,	// (0x000374fa) control_top_pane_stacon_t1

0x62ee,	// (0x00037531) aid_levels_battery_lsc_ParamLimits

0x62ee,	// (0x00037531) aid_levels_battery_lsc

0x6306,	// (0x00037549) battery_pane_stacon_g1_ParamLimits

0x6306,	// (0x00037549) battery_pane_stacon_g1

0x6319,	// (0x0003755c) battery_pane_stacon_g2_ParamLimits

0x6319,	// (0x0003755c) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00040917) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00040917) battery_pane_stacon_g

0x6357,	// (0x0003759a) navi_icon_pane_stacon

0x636b,	// (0x000375ae) navi_navi_pane_stacon

0x6357,	// (0x0003759a) navi_text_pane_stacon

0x62af,	// (0x000374f2) control_bottom_pane_stacon_g1

0x6381,	// (0x000375c4) control_bottom_pane_stacon_t1_ParamLimits

0x6381,	// (0x000375c4) control_bottom_pane_stacon_t1

0x63b8,	// (0x000375fb) grid_app_pane_ParamLimits

0x63b8,	// (0x000375fb) grid_app_pane

0x63dc,	// (0x0003761f) scroll_pane_cp15_ParamLimits

0x63dc,	// (0x0003761f) scroll_pane_cp15

0x63ef,	// (0x00037632) cell_app_pane_ParamLimits

0x63ef,	// (0x00037632) cell_app_pane

0x641b,	// (0x0003765e) cell_app_pane_g1_ParamLimits

0x641b,	// (0x0003765e) cell_app_pane_g1

0x20f2,	// (0x00033335) cell_app_pane_g2_ParamLimits

0x20f2,	// (0x00033335) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0004091c) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0004091c) cell_app_pane_g

0x20fe,	// (0x00033341) cell_app_pane_t1_ParamLimits

0x20fe,	// (0x00033341) cell_app_pane_t1

0x2115,	// (0x00033358) grid_highlight_pane_ParamLimits

0x2115,	// (0x00033358) grid_highlight_pane

0x1e2f,	// (0x00033072) cell_highlight_pane_g1

0x1e37,	// (0x0003307a) cell_highlight_pane_g2

0x1e3f,	// (0x00033082) cell_highlight_pane_g3

0x1e47,	// (0x0003308a) cell_highlight_pane_g4

0x1e4f,	// (0x00033092) cell_highlight_pane_g5

0x1e57,	// (0x0003309a) cell_highlight_pane_g6

0x1e5f,	// (0x000330a2) cell_highlight_pane_g7

0x1e67,	// (0x000330aa) cell_highlight_pane_g8

0x1e6f,	// (0x000330b2) cell_highlight_pane_g9

0xe970,	// (0x0003fbb3) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x000408ca) cell_highlight_pane_g

0x2126,	// (0x00033369) bg_scroll_pane

0x644e,	// (0x00037691) scroll_handle_pane

0x216d,	// (0x000333b0) scroll_bg_pane_g1

0x2182,	// (0x000333c5) scroll_bg_pane_g2

0x219a,	// (0x000333dd) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00040921) scroll_bg_pane_g

0x21af,	// (0x000333f2) scroll_handle_focus_pane_ParamLimits

0x21af,	// (0x000333f2) scroll_handle_focus_pane

0x216d,	// (0x000333b0) scroll_handle_pane_g1

0x21bc,	// (0x000333ff) scroll_handle_pane_g2

0x219a,	// (0x000333dd) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00040928) scroll_handle_pane_g

0x1e80,	// (0x000330c3) bg_popup_sub_pane_cp21_ParamLimits

0x1e80,	// (0x000330c3) bg_popup_sub_pane_cp21

0x21d0,	// (0x00033413) popup_fep_japan_predictive_window_t1_ParamLimits

0x21d0,	// (0x00033413) popup_fep_japan_predictive_window_t1

0x21e7,	// (0x0003342a) popup_fep_japan_predictive_window_t2_ParamLimits

0x21e7,	// (0x0003342a) popup_fep_japan_predictive_window_t2

0x221a,	// (0x0003345d) popup_fep_japan_predictive_window_t3_ParamLimits

0x221a,	// (0x0003345d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0004092f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0004092f) popup_fep_japan_predictive_window_t

0xe97a,	// (0x0003fbbd) bg_popup_sub_pane_cp23

0x2251,	// (0x00033494) listscroll_japin_cand_pane

0x2259,	// (0x0003349c) popup_fep_japan_candidate_window_t1

0x2267,	// (0x000334aa) candidate_pane_ParamLimits

0x2267,	// (0x000334aa) candidate_pane

0x2279,	// (0x000334bc) scroll_pane_cp30

0x2283,	// (0x000334c6) list_single_popup_jap_candidate_pane_ParamLimits

0x2283,	// (0x000334c6) list_single_popup_jap_candidate_pane

0xe97a,	// (0x0003fbbd) list_highlight_pane_cp30

0x2297,	// (0x000334da) list_single_popup_jap_candidate_pane_t1

0x6477,	// (0x000376ba) level_1_signal

0x6484,	// (0x000376c7) level_2_signal

0x6491,	// (0x000376d4) level_3_signal

0x649e,	// (0x000376e1) level_4_signal

0x64ab,	// (0x000376ee) level_5_signal

0x64b8,	// (0x000376fb) level_6_signal

0x64c5,	// (0x00037708) level_7_signal

0x6477,	// (0x000376ba) level_1_battery

0x6484,	// (0x000376c7) level_2_battery

0x6491,	// (0x000376d4) level_3_battery

0x649e,	// (0x000376e1) level_4_battery

0x64ab,	// (0x000376ee) level_5_battery

0x64b8,	// (0x000376fb) level_6_battery

0x64c5,	// (0x00037708) level_7_battery

0x22be,	// (0x00033501) list_menu_pane_ParamLimits

0x22be,	// (0x00033501) list_menu_pane

0x22d4,	// (0x00033517) scroll_pane_cp25_ParamLimits

0x22d4,	// (0x00033517) scroll_pane_cp25

0x22ed,	// (0x00033530) list_double2_graphic_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double2_graphic_pane_cp2

0x22ed,	// (0x00033530) list_double2_large_graphic_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double2_large_graphic_pane_cp2

0x22ed,	// (0x00033530) list_double2_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double2_pane_cp2

0x22ed,	// (0x00033530) list_double_graphic_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double_graphic_pane_cp2

0x22ed,	// (0x00033530) list_double_large_graphic_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double_large_graphic_pane_cp2

0x22ed,	// (0x00033530) list_double_number_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double_number_pane_cp2

0x22ed,	// (0x00033530) list_double_pane_cp2_ParamLimits

0x22ed,	// (0x00033530) list_double_pane_cp2

0x6507,	// (0x0003774a) list_single_2graphic_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_2graphic_pane_cp2

0x6507,	// (0x0003774a) list_single_graphic_heading_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_graphic_heading_pane_cp2

0x6507,	// (0x0003774a) list_single_graphic_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_graphic_pane_cp2

0x6507,	// (0x0003774a) list_single_heading_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_heading_pane_cp2

0x22fd,	// (0x00033540) list_single_large_graphic_pane_cp2_ParamLimits

0x22fd,	// (0x00033540) list_single_large_graphic_pane_cp2

0x6507,	// (0x0003774a) list_single_number_heading_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_number_heading_pane_cp2

0x6507,	// (0x0003774a) list_single_number_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_number_pane_cp2

0x6507,	// (0x0003774a) list_single_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_pane_cp2

0x2316,	// (0x00033559) bg_popup_sub_pane_cp22

0x65f0,	// (0x00037833) popup_side_volume_key_window_g1

0x661a,	// (0x0003785d) popup_side_volume_key_window_t1

0x6638,	// (0x0003787b) volume_small_pane_cp1

0xeb07,	// (0x0003fd4a) bg_popup_sub_pane_cp24_ParamLimits

0xeb07,	// (0x0003fd4a) bg_popup_sub_pane_cp24

0x232c,	// (0x0003356f) fep_china_uni_candidate_pane_ParamLimits

0x232c,	// (0x0003356f) fep_china_uni_candidate_pane

0x2340,	// (0x00033583) fep_china_uni_entry_pane

0x2350,	// (0x00033593) popup_fep_china_uni_window_g1

0x236c,	// (0x000335af) fep_china_uni_entry_pane_g1

0x2376,	// (0x000335b9) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00040960) fep_china_uni_entry_pane_g

0x2380,	// (0x000335c3) fep_entry_item_pane

0x238a,	// (0x000335cd) fep_candidate_item_pane

0x2392,	// (0x000335d5) fep_china_uni_candidate_pane_g1

0x239c,	// (0x000335df) fep_china_uni_candidate_pane_g2

0x23a4,	// (0x000335e7) fep_china_uni_candidate_pane_g3

0x23ac,	// (0x000335ef) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00040965) fep_china_uni_candidate_pane_g

0xe970,	// (0x0003fbb3) fep_entry_item_pane_g1

0x23b6,	// (0x000335f9) fep_entry_item_pane_t1_ParamLimits

0x23b6,	// (0x000335f9) fep_entry_item_pane_t1

0x23cc,	// (0x0003360f) fep_candidate_item_pane_t1_ParamLimits

0x23cc,	// (0x0003360f) fep_candidate_item_pane_t1

0x23e1,	// (0x00033624) fep_candidate_item_pane_t2_ParamLimits

0x23e1,	// (0x00033624) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0004096e) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0004096e) fep_candidate_item_pane_t

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp31_ParamLimits

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp31

0x23f3,	// (0x00033636) level_1_signal_lsc

0x23fc,	// (0x0003363f) level_2_signal_lsc

0x2405,	// (0x00033648) level_3_signal_lsc

0x240e,	// (0x00033651) level_4_signal_lsc

0x2417,	// (0x0003365a) level_5_signal_lsc

0x2420,	// (0x00033663) level_6_signal_lsc

0x2429,	// (0x0003366c) level_7_signal_lsc

0x2429,	// (0x0003366c) level_1_battery_lsc

0x2432,	// (0x00033675) level_2_battery_lsc

0x243b,	// (0x0003367e) level_3_battery_lsc

0x2444,	// (0x00033687) level_4_battery_lsc

0x244d,	// (0x00033690) level_5_battery_lsc

0x2456,	// (0x00033699) level_6_battery_lsc

0x23f3,	// (0x00033636) level_7_battery_lsc

0x245f,	// (0x000336a2) scroll_handle_focus_pane_g1

0x2468,	// (0x000336ab) scroll_handle_focus_pane_g2

0x2471,	// (0x000336b4) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00040973) scroll_handle_focus_pane_g

0x6640,	// (0x00037883) list_single_2graphic_pane_g1_ParamLimits

0x6640,	// (0x00037883) list_single_2graphic_pane_g1

0x5c6b,	// (0x00036eae) list_single_2graphic_pane_g2_ParamLimits

0x5c6b,	// (0x00036eae) list_single_2graphic_pane_g2

0x5bf1,	// (0x00036e34) list_single_2graphic_pane_g3_ParamLimits

0x5bf1,	// (0x00036e34) list_single_2graphic_pane_g3

0x664c,	// (0x0003788f) list_single_2graphic_pane_g4_ParamLimits

0x664c,	// (0x0003788f) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0004097a) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0004097a) list_single_2graphic_pane_g

0x6658,	// (0x0003789b) list_single_2graphic_pane_t1_ParamLimits

0x6658,	// (0x0003789b) list_single_2graphic_pane_t1

0x6686,	// (0x000378c9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6686,	// (0x000378c9) list_double2_graphic_large_graphic_pane_g1

0x5ce2,	// (0x00036f25) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5ce2,	// (0x00036f25) list_double2_graphic_large_graphic_pane_g2

0x5cae,	// (0x00036ef1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5cae,	// (0x00036ef1) list_double2_graphic_large_graphic_pane_g3

0x6698,	// (0x000378db) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6698,	// (0x000378db) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00040983) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00040983) list_double2_graphic_large_graphic_pane_g

0x66a4,	// (0x000378e7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x66a4,	// (0x000378e7) list_double2_graphic_large_graphic_pane_t1

0x66ba,	// (0x000378fd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x66ba,	// (0x000378fd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0004098c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0004098c) list_double2_graphic_large_graphic_pane_t

0x2503,	// (0x00033746) popup_fast_swap_window_ParamLimits

0x2503,	// (0x00033746) popup_fast_swap_window

0x2521,	// (0x00033764) popup_side_volume_key_window

0x253f,	// (0x00033782) stacon_top_pane

0x2549,	// (0x0003378c) status_pane_ParamLimits

0x2549,	// (0x0003378c) status_pane

0x68c0,	// (0x00037b03) status_small_pane

0xe97a,	// (0x0003fbbd) control_pane

0xe97a,	// (0x0003fbbd) stacon_bottom_pane

0x1db7,	// (0x00032ffa) scroll_pane_cp121

0x1dae,	// (0x00032ff1) set_content_pane

0x66cc,	// (0x0003790f) bg_active_tab_pane_g1_cp1

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp1

0x66d5,	// (0x00037918) bg_active_tab_pane_g3_cp1

0x66cc,	// (0x0003790f) bg_passive_tab_pane_g1_cp1

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp1

0x66d5,	// (0x00037918) bg_passive_tab_pane_g3_cp1

0x66de,	// (0x00037921) bg_active_tab_pane_g1_cp2

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp2

0x66e7,	// (0x0003792a) bg_active_tab_pane_g3_cp2

0x66de,	// (0x00037921) bg_passive_tab_pane_g1_cp2

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp2

0x66e7,	// (0x0003792a) bg_passive_tab_pane_g3_cp2

0x66f0,	// (0x00037933) bg_active_tab_pane_g1_cp3

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp3

0x66f9,	// (0x0003793c) bg_active_tab_pane_g3_cp3

0x66f0,	// (0x00037933) bg_passive_tab_pane_g1_cp3

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp3

0x66f9,	// (0x0003793c) bg_passive_tab_pane_g3_cp3

0x6702,	// (0x00037945) bg_active_tab_pane_g1_cp4

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp4

0x670d,	// (0x00037950) bg_active_tab_pane_g3_cp4

0x6702,	// (0x00037945) bg_passive_tab_pane_g1_cp4

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp4

0x670d,	// (0x00037950) bg_passive_tab_pane_g3_cp4

0x24ca,	// (0x0003370d) bg_active_tab_pane_g1_cp5

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp5

0x24c1,	// (0x00033704) bg_active_tab_pane_g3_cp5

0x24ca,	// (0x0003370d) bg_passive_tab_pane_g1_cp5

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp5

0x24c1,	// (0x00033704) bg_passive_tab_pane_g3_cp5

0x685c,	// (0x00037a9f) list_set_graphic_pane_ParamLimits

0x685c,	// (0x00037a9f) list_set_graphic_pane

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp4

0x6871,	// (0x00037ab4) list_set_graphic_pane_g1_ParamLimits

0x6871,	// (0x00037ab4) list_set_graphic_pane_g1

0x687d,	// (0x00037ac0) list_set_graphic_pane_g2_ParamLimits

0x687d,	// (0x00037ac0) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00040991) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00040991) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x00040d0d) volume_small_pane_cp_g

0x68a1,	// (0x00037ae4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x68a1,	// (0x00037ae4) list_double2_large_graphic_pane_g1_cp2

0x68af,	// (0x00037af2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x68af,	// (0x00037af2) list_double2_large_graphic_pane_g2_cp2

0x24d3,	// (0x00033716) list_double2_large_graphic_pane_g3_cp2

0x24db,	// (0x0003371e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x24db,	// (0x0003371e) list_double2_large_graphic_pane_t1_cp2

0x24f1,	// (0x00033734) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x24f1,	// (0x00033734) list_double2_large_graphic_pane_t2_cp2

0xa17f,	// (0x0003b3c2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa17f,	// (0x0003b3c2) list_double_large_graphic_pane_g1_cp2

0xa192,	// (0x0003b3d5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa192,	// (0x0003b3d5) list_double_large_graphic_pane_g2_cp2

0x262a,	// (0x0003386d) list_double_large_graphic_pane_g3_cp2

0xa1a3,	// (0x0003b3e6) list_double_large_graphic_pane_g4_cp

0xa1ab,	// (0x0003b3ee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa1ab,	// (0x0003b3ee) list_double_large_graphic_pane_t1_cp2

0xa1c2,	// (0x0003b405) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa1c2,	// (0x0003b405) list_double_large_graphic_pane_t2_cp2

0x68cb,	// (0x00037b0e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x68cb,	// (0x00037b0e) list_double2_graphic_pane_g1_cp2

0x68d9,	// (0x00037b1c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x68d9,	// (0x00037b1c) list_double2_graphic_pane_g2_cp2

0x68ea,	// (0x00037b2d) list_double2_graphic_pane_g3_cp2

0x2557,	// (0x0003379a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2557,	// (0x0003379a) list_double2_graphic_pane_t1_cp2

0x256d,	// (0x000337b0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x256d,	// (0x000337b0) list_double2_graphic_pane_t2_cp2

0x257f,	// (0x000337c2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x257f,	// (0x000337c2) list_single_number_heading_pane_g1_cp2

0x258b,	// (0x000337ce) list_single_number_heading_pane_g2_cp2

0x2593,	// (0x000337d6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2593,	// (0x000337d6) list_single_number_heading_pane_t1_cp2

0x68f4,	// (0x00037b37) list_single_number_heading_pane_t2_cp2_ParamLimits

0x68f4,	// (0x00037b37) list_single_number_heading_pane_t2_cp2

0x25a9,	// (0x000337ec) list_single_number_heading_pane_t3_cp2_ParamLimits

0x25a9,	// (0x000337ec) list_single_number_heading_pane_t3_cp2

0x257f,	// (0x000337c2) list_single_heading_pane_g1_cp2_ParamLimits

0x257f,	// (0x000337c2) list_single_heading_pane_g1_cp2

0x258b,	// (0x000337ce) list_single_heading_pane_g2_cp2

0x2593,	// (0x000337d6) list_single_heading_pane_t1_cp2_ParamLimits

0x2593,	// (0x000337d6) list_single_heading_pane_t1_cp2

0x9f79,	// (0x0003b1bc) list_single_heading_pane_t2_cp2_ParamLimits

0x9f79,	// (0x0003b1bc) list_single_heading_pane_t2_cp2

0x9ec1,	// (0x0003b104) list_double_graphic_pane_g1_cp2_ParamLimits

0x9ec1,	// (0x0003b104) list_double_graphic_pane_g1_cp2

0x9ecd,	// (0x0003b110) list_double_graphic_pane_g2_cp2_ParamLimits

0x9ecd,	// (0x0003b110) list_double_graphic_pane_g2_cp2

0x9edc,	// (0x0003b11f) list_double_graphic_pane_g3_cp2

0x9ee4,	// (0x0003b127) list_double_graphic_pane_t1_cp2_ParamLimits

0x9ee4,	// (0x0003b127) list_double_graphic_pane_t1_cp2

0x9efa,	// (0x0003b13d) list_double_graphic_pane_t2_cp2_ParamLimits

0x9efa,	// (0x0003b13d) list_double_graphic_pane_t2_cp2

0x261e,	// (0x00033861) list_double_number_pane_g1_cp2_ParamLimits

0x261e,	// (0x00033861) list_double_number_pane_g1_cp2

0x262a,	// (0x0003386d) list_double_number_pane_g2_cp2

0x9e85,	// (0x0003b0c8) list_double_number_pane_t1_cp2_ParamLimits

0x9e85,	// (0x0003b0c8) list_double_number_pane_t1_cp2

0x9e99,	// (0x0003b0dc) list_double_number_pane_t2_cp2_ParamLimits

0x9e99,	// (0x0003b0dc) list_double_number_pane_t2_cp2

0x9eaf,	// (0x0003b0f2) list_double_number_pane_t3_cp2_ParamLimits

0x9eaf,	// (0x0003b0f2) list_double_number_pane_t3_cp2

0x9d6e,	// (0x0003afb1) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d6e,	// (0x0003afb1) list_single_graphic_pane_g1_cp2

0x266a,	// (0x000338ad) list_single_graphic_pane_g2_cp2_ParamLimits

0x266a,	// (0x000338ad) list_single_graphic_pane_g2_cp2

0x2676,	// (0x000338b9) list_single_graphic_pane_g3_cp2

0x9d44,	// (0x0003af87) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d44,	// (0x0003af87) list_single_graphic_pane_t1_cp2

0x266a,	// (0x000338ad) list_single_number_pane_g1_cp2_ParamLimits

0x266a,	// (0x000338ad) list_single_number_pane_g1_cp2

0x2676,	// (0x000338b9) list_single_number_pane_g2_cp2

0x9d44,	// (0x0003af87) list_single_number_pane_t1_cp2_ParamLimits

0x9d44,	// (0x0003af87) list_single_number_pane_t1_cp2

0x9d5a,	// (0x0003af9d) list_single_number_pane_t2_cp2_ParamLimits

0x9d5a,	// (0x0003af9d) list_single_number_pane_t2_cp2

0x68af,	// (0x00037af2) list_double2_pane_g1_cp2_ParamLimits

0x68af,	// (0x00037af2) list_double2_pane_g1_cp2

0x24d3,	// (0x00033716) list_double2_pane_g2_cp2

0x25f6,	// (0x00033839) list_double2_pane_t1_cp2_ParamLimits

0x25f6,	// (0x00033839) list_double2_pane_t1_cp2

0x260c,	// (0x0003384f) list_double2_pane_t2_cp2_ParamLimits

0x260c,	// (0x0003384f) list_double2_pane_t2_cp2

0x261e,	// (0x00033861) list_double_pane_g1_cp2_ParamLimits

0x261e,	// (0x00033861) list_double_pane_g1_cp2

0x262a,	// (0x0003386d) list_double_pane_g2_cp2

0x2632,	// (0x00033875) list_double_pane_t1_cp2_ParamLimits

0x2632,	// (0x00033875) list_double_pane_t1_cp2

0x2648,	// (0x0003388b) list_double_pane_t2_cp2_ParamLimits

0x2648,	// (0x0003388b) list_double_pane_t2_cp2

0x265a,	// (0x0003389d) list_single_pane_cp2_g3

0x266a,	// (0x000338ad) list_single_pane_g1_cp2_ParamLimits

0x266a,	// (0x000338ad) list_single_pane_g1_cp2

0x2676,	// (0x000338b9) list_single_pane_g2_cp2

0x267e,	// (0x000338c1) list_single_pane_t1_cp2_ParamLimits

0x267e,	// (0x000338c1) list_single_pane_t1_cp2

0x6922,	// (0x00037b65) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6922,	// (0x00037b65) list_single_large_graphic_pane_g1_cp2

0x2696,	// (0x000338d9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2696,	// (0x000338d9) list_single_large_graphic_pane_g2_cp2

0x26a2,	// (0x000338e5) list_single_large_graphic_pane_g3_cp2

0x26aa,	// (0x000338ed) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x26aa,	// (0x000338ed) list_single_large_graphic_pane_g4_cp1

0x26c4,	// (0x00033907) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x26c4,	// (0x00033907) list_single_large_graphic_pane_t1_cp2

0x9d0e,	// (0x0003af51) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d0e,	// (0x0003af51) list_single_graphic_heading_pane_g1_cp2

0x9cdb,	// (0x0003af1e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9cdb,	// (0x0003af1e) list_single_graphic_heading_pane_g4_cp2

0x2676,	// (0x000338b9) list_single_graphic_heading_pane_g5_cp2

0x9d1a,	// (0x0003af5d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d1a,	// (0x0003af5d) list_single_graphic_heading_pane_t1_cp2

0x9d30,	// (0x0003af73) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9d30,	// (0x0003af73) list_single_graphic_heading_pane_t2_cp2

0x9ccf,	// (0x0003af12) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9ccf,	// (0x0003af12) list_single_2graphic_pane_g1_cp2

0x9cdb,	// (0x0003af1e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9cdb,	// (0x0003af1e) list_single_2graphic_pane_g2_cp2

0x2676,	// (0x000338b9) list_single_2graphic_pane_g3_cp2

0x9cec,	// (0x0003af2f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9cec,	// (0x0003af2f) list_single_2graphic_pane_g4_cp2

0x9cf8,	// (0x0003af3b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9cf8,	// (0x0003af3b) list_single_2graphic_pane_t1_cp2

0xe970,	// (0x0003fbb3) list_highlight_pane_g10_cp1

0x98a7,	// (0x0003aaea) list_highlight_pane_g1_cp1

0x98af,	// (0x0003aaf2) list_highlight_pane_g2_cp1

0x98b7,	// (0x0003aafa) list_highlight_pane_g3_cp1

0x98bf,	// (0x0003ab02) list_highlight_pane_g4_cp1

0x98c7,	// (0x0003ab0a) list_highlight_pane_g5_cp1

0x98cf,	// (0x0003ab12) list_highlight_pane_g6_cp1

0x98d7,	// (0x0003ab1a) list_highlight_pane_g7_cp1

0x98df,	// (0x0003ab22) list_highlight_pane_g8_cp1

0x98e7,	// (0x0003ab2a) list_highlight_pane_g9_cp1

0x97c7,	// (0x0003aa0a) form_field_slider_pane_t3

0x97d5,	// (0x0003aa18) form_field_slider_pane_t4

0x97e3,	// (0x0003aa26) slider_form_pane_ParamLimits

0x97e3,	// (0x0003aa26) slider_form_pane

0xe97a,	// (0x0003fbbd) control_abbreviations

0xe97a,	// (0x0003fbbd) control_conventions

0xe97a,	// (0x0003fbbd) control_definitions

0xe97a,	// (0x0003fbbd) format_table_attribute

0x9fcf,	// (0x0003b212) bg_popup_preview_window_pane_g9

0xe97a,	// (0x0003fbbd) format_table_data2

0xe97a,	// (0x0003fbbd) format_table_data3

0xe97a,	// (0x0003fbbd) format_table_data_example

0x0008,

0xe97a,	// (0x0003fbbd) intro_purpose

0xf8ea,	// (0x00040b2d) bg_popup_preview_window_pane_g

0xe97a,	// (0x0003fbbd) texts_category

0xe97a,	// (0x0003fbbd) texts_graphics

0x26da,	// (0x0003391d) text_digital

0x26e9,	// (0x0003392c) text_primary

0x26f8,	// (0x0003393b) text_primary_small

0x2707,	// (0x0003394a) text_secondary

0x2716,	// (0x00033959) text_title

0xa763,	// (0x0003b9a6) bg_passive_tab_pane_g1_cp3_srt

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp3_srt

0xa76c,	// (0x0003b9af) bg_passive_tab_pane_g3_cp3_srt

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp3_srt_ParamLimits

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp3_srt

0xa775,	// (0x0003b9b8) tabs_4_active_pane_srt_g1

0xa77d,	// (0x0003b9c0) tabs_4_active_pane_srt_t1_ParamLimits

0xa77d,	// (0x0003b9c0) tabs_4_active_pane_srt_t1

0xa763,	// (0x0003b9a6) bg_active_tab_pane_g1_cp3_copy1

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp3_copy1

0xa76c,	// (0x0003b9af) bg_active_tab_pane_g3_cp3_copy1

0xe9d4,	// (0x0003fc17) tabs_2_long_active_pane_srt_ParamLimits

0xe9d4,	// (0x0003fc17) tabs_2_long_active_pane_srt

0xe9d4,	// (0x0003fc17) tabs_2_long_passive_pane_srt_ParamLimits

0xe9d4,	// (0x0003fc17) tabs_2_long_passive_pane_srt

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp4_srt

0xa40b,	// (0x0003b64e) bg_passive_tab_pane_g1_cp4_srt

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp4_srt

0xa414,	// (0x0003b657) bg_passive_tab_pane_g3_cp4_srt

0x2739,	// (0x0003397c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2739,	// (0x0003397c) bg_active_tab_pane_cp4_srt

0xa41d,	// (0x0003b660) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa41d,	// (0x0003b660) tabs_2_long_active_pane_srt_t1

0xa40b,	// (0x0003b64e) bg_active_tab_pane_g1_cp4_srt

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp4_srt

0xa414,	// (0x0003b657) bg_active_tab_pane_g3_cp4_srt

0xeb07,	// (0x0003fd4a) tabs_3_long_active_pane_srt_ParamLimits

0xeb07,	// (0x0003fd4a) tabs_3_long_active_pane_srt

0xeb07,	// (0x0003fd4a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xeb07,	// (0x0003fd4a) tabs_3_long_passive_pane_cp_srt

0xeb07,	// (0x0003fd4a) tabs_3_long_passive_pane_srt_ParamLimits

0xeb07,	// (0x0003fd4a) tabs_3_long_passive_pane_srt

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp5_srt

0x24ca,	// (0x0003370d) bg_passive_tab_pane_g1_cp5_srt

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp5_srt

0x24c1,	// (0x00033704) bg_passive_tab_pane_g3_cp5_srt

0x2739,	// (0x0003397c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2739,	// (0x0003397c) bg_active_tab_pane_cp5_srt

0xa3f9,	// (0x0003b63c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3f9,	// (0x0003b63c) tabs_3_long_active_pane_srt_t1

0x24ca,	// (0x0003370d) bg_active_tab_pane_g1_cp5_srt

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp5_srt

0x24c1,	// (0x00033704) bg_active_tab_pane_g3_cp5_srt

0xa3eb,	// (0x0003b62e) navi_text_pane_srt_t1

0xa3e3,	// (0x0003b626) navi_icon_pane_srt_g1

0x6b8d,	// (0x00037dd0) midp_editing_number_pane_srt

0x2725,	// (0x00033968) midp_ticker_pane_srt

0x6b95,	// (0x00037dd8) midp_ticker_pane_srt_g1

0x6b9d,	// (0x00037de0) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000409b0) midp_ticker_pane_srt_g

0x6ba5,	// (0x00037de8) midp_ticker_pane_srt_t1

0xa3d4,	// (0x0003b617) midp_editing_number_pane_t1_copy1

0x620c,	// (0x0003744f) listscroll_midp_pane

0x620c,	// (0x0003744f) midp_form_pane

0x6992,	// (0x00037bd5) midp_info_popup_window_ParamLimits

0x6992,	// (0x00037bd5) midp_info_popup_window

0x1e80,	// (0x000330c3) bg_popup_sub_pane_cp50_ParamLimits

0x1e80,	// (0x000330c3) bg_popup_sub_pane_cp50

0x94dd,	// (0x0003a720) listscroll_midp_info_pane_ParamLimits

0x94dd,	// (0x0003a720) listscroll_midp_info_pane

0x94c5,	// (0x0003a708) listscroll_form_midp_pane_ParamLimits

0x94c5,	// (0x0003a708) listscroll_form_midp_pane

0x94d1,	// (0x0003a714) scroll_bar_cp050

0x94a5,	// (0x0003a6e8) list_midp_pane

0xb1f8,	// (0x0003c43b) signal_pane_g2_cp

0x93df,	// (0x0003a622) listscroll_midp_info_pane_t1_ParamLimits

0x93df,	// (0x0003a622) listscroll_midp_info_pane_t1

0x93f7,	// (0x0003a63a) listscroll_midp_info_pane_t2_ParamLimits

0x93f7,	// (0x0003a63a) listscroll_midp_info_pane_t2

0x9435,	// (0x0003a678) listscroll_midp_info_pane_t3_ParamLimits

0x9435,	// (0x0003a678) listscroll_midp_info_pane_t3

0x946f,	// (0x0003a6b2) listscroll_midp_info_pane_t4_ParamLimits

0x946f,	// (0x0003a6b2) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00040a68) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00040a68) listscroll_midp_info_pane_t

0x1f00,	// (0x00033143) scroll_pane_cp21

0x9379,	// (0x0003a5bc) form_midp_field_choice_group_pane

0x9382,	// (0x0003a5c5) form_midp_field_text_pane

0x93c5,	// (0x0003a608) form_midp_field_time_pane

0x93cd,	// (0x0003a610) form_midp_gauge_slider_pane

0x93d6,	// (0x0003a619) form_midp_gauge_wait_pane

0xe97a,	// (0x0003fbbd) form_midp_image_pane

0x7385,	// (0x000385c8) list_single_midp_pane_ParamLimits

0x7385,	// (0x000385c8) list_single_midp_pane

0x933d,	// (0x0003a580) form_midp_field_text_pane_t1

0x9129,	// (0x0003a36c) input_focus_pane_cp050

0x9368,	// (0x0003a5ab) list_midp_form_text_pane

0x930c,	// (0x0003a54f) form_midp_field_choice_group_pane_t1

0x931a,	// (0x0003a55d) input_focus_pane_cp051

0x932e,	// (0x0003a571) list_midp_choice_pane

0xe97a,	// (0x0003fbbd) status_idle_pane

0x92f0,	// (0x0003a533) form_midp_field_time_pane_t1

0xe970,	// (0x0003fbb3) wait_anim_pane_g2_copy1

0x92fe,	// (0x0003a541) form_midp_field_time_pane_t2

0x0001,

0x6a42,	// (0x00037c85) aid_navinavi_width_2_pane

0xf820,	// (0x00040a63) form_midp_field_time_pane_t

0xe97a,	// (0x0003fbbd) input_focus_pane_cp052

0xe97a,	// (0x0003fbbd) bg_input_focus_pane_cp040

0x92b0,	// (0x0003a4f3) form_midp_gauge_slider_pane_t1

0x92be,	// (0x0003a501) form_midp_gauge_slider_pane_t2

0x92cc,	// (0x0003a50f) form_midp_gauge_slider_pane_t3

0x92da,	// (0x0003a51d) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00040a5a) form_midp_gauge_slider_pane_t

0x92e8,	// (0x0003a52b) form_midp_slider_pane

0xe9d4,	// (0x0003fc17) bg_input_focus_pane_cp041_ParamLimits

0xe9d4,	// (0x0003fc17) bg_input_focus_pane_cp041

0x927d,	// (0x0003a4c0) form_midp_gauge_wait_pane_t1_ParamLimits

0x927d,	// (0x0003a4c0) form_midp_gauge_wait_pane_t1

0x928f,	// (0x0003a4d2) form_midp_gauge_wait_pane_t2_ParamLimits

0x928f,	// (0x0003a4d2) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00040a55) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00040a55) form_midp_gauge_wait_pane_t

0x92a1,	// (0x0003a4e4) form_midp_wait_pane_ParamLimits

0x92a1,	// (0x0003a4e4) form_midp_wait_pane

0x9245,	// (0x0003a488) form_midp_image_pane_g1

0x924e,	// (0x0003a491) form_midp_image_pane_t1

0x925d,	// (0x0003a4a0) form_midp_image_pane_t2

0x926c,	// (0x0003a4af) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00040a4e) form_midp_image_pane_t

0x923c,	// (0x0003a47f) list_single_midp_pane_g1

0x3f61,	// (0x000351a4) list_single_midp_pane_t1

0x9222,	// (0x0003a465) list_midp_form_item_pane_ParamLimits

0x9222,	// (0x0003a465) list_midp_form_item_pane

0x69ea,	// (0x00037c2d) list_midp_form_item_pane_t1

0x69f9,	// (0x00037c3c) midp_ticker_pane_g1

0x6a05,	// (0x00037c48) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00040996) midp_ticker_pane_g

0x6a11,	// (0x00037c54) midp_ticker_pane_t1

0xa647,	// (0x0003b88a) midp_editing_number_pane_t1

0xa625,	// (0x0003b868) midp_editing_number_pane

0xa634,	// (0x0003b877) midp_ticker_pane

0xa3c4,	// (0x0003b607) ai_message_heading_pane

0xe97a,	// (0x0003fbbd) bg_popup_window_pane_cp14

0xa3cc,	// (0x0003b60f) listscroll_ai_message_pane

0xa34a,	// (0x0003b58d) ai_message_heading_pane_g1_ParamLimits

0xa34a,	// (0x0003b58d) ai_message_heading_pane_g1

0xa356,	// (0x0003b599) ai_message_heading_pane_g2_ParamLimits

0xa356,	// (0x0003b599) ai_message_heading_pane_g2

0xa364,	// (0x0003b5a7) ai_message_heading_pane_g3_ParamLimits

0xa364,	// (0x0003b5a7) ai_message_heading_pane_g3

0xa370,	// (0x0003b5b3) ai_message_heading_pane_g4_ParamLimits

0xa370,	// (0x0003b5b3) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00040b8f) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00040b8f) ai_message_heading_pane_g

0xa37c,	// (0x0003b5bf) ai_message_heading_pane_t1_ParamLimits

0xa37c,	// (0x0003b5bf) ai_message_heading_pane_t1

0xa396,	// (0x0003b5d9) ai_message_heading_pane_t2_ParamLimits

0xa396,	// (0x0003b5d9) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00040b98) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00040b98) ai_message_heading_pane_t

0xa3aa,	// (0x0003b5ed) bg_popup_heading_pane_cp1_ParamLimits

0xa3aa,	// (0x0003b5ed) bg_popup_heading_pane_cp1

0xa338,	// (0x0003b57b) list_ai_message_pane_ParamLimits

0xa338,	// (0x0003b57b) list_ai_message_pane

0x1f00,	// (0x00033143) scroll_pane_cp10

0xa2d4,	// (0x0003b517) list_ai_message_pane_g1

0xa2dc,	// (0x0003b51f) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00040b6c) list_ai_message_pane_g

0xa2e4,	// (0x0003b527) list_ai_message_pane_t1_ParamLimits

0xa2e4,	// (0x0003b527) list_ai_message_pane_t1

0xa2f9,	// (0x0003b53c) list_ai_message_pane_t2_ParamLimits

0xa2f9,	// (0x0003b53c) list_ai_message_pane_t2

0xa30e,	// (0x0003b551) list_ai_message_pane_t3_ParamLimits

0xa30e,	// (0x0003b551) list_ai_message_pane_t3

0xa323,	// (0x0003b566) list_ai_message_pane_t4_ParamLimits

0xa323,	// (0x0003b566) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00040b71) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00040b71) list_ai_message_pane_t

0xa2bd,	// (0x0003b500) cell_ai_soft_ind_pane_ParamLimits

0xa2bd,	// (0x0003b500) cell_ai_soft_ind_pane

0x6a23,	// (0x00037c66) cell_ai_soft_ind_pane_g1_ParamLimits

0x6a23,	// (0x00037c66) cell_ai_soft_ind_pane_g1

0xe97a,	// (0x0003fbbd) grid_highlight_cp1

0x6a30,	// (0x00037c73) text_secondary_cp56_ParamLimits

0x6a30,	// (0x00037c73) text_secondary_cp56

0xa292,	// (0x0003b4d5) example_general_pane_ParamLimits

0xa292,	// (0x0003b4d5) example_general_pane

0xa29e,	// (0x0003b4e1) example_parent_pane_g1_ParamLimits

0xa29e,	// (0x0003b4e1) example_parent_pane_g1

0xa2aa,	// (0x0003b4ed) example_parent_pane_t1_ParamLimits

0xa2aa,	// (0x0003b4ed) example_parent_pane_t1

0x893b,	// (0x00039b7e) popup_preview_text_window_ParamLimits

0x893b,	// (0x00039b7e) popup_preview_text_window

0x2662,	// (0x000338a5) list_single_pane_cp2_g4

0xebbd,	// (0x0003fe00) bg_popup_preview_window_pane_ParamLimits

0xebbd,	// (0x0003fe00) bg_popup_preview_window_pane

0x9fd9,	// (0x0003b21c) popup_preview_text_window_t1_ParamLimits

0x9fd9,	// (0x0003b21c) popup_preview_text_window_t1

0x9ff7,	// (0x0003b23a) popup_preview_text_window_t2_ParamLimits

0x9ff7,	// (0x0003b23a) popup_preview_text_window_t2

0xa040,	// (0x0003b283) popup_preview_text_window_t3_ParamLimits

0xa040,	// (0x0003b283) popup_preview_text_window_t3

0xa085,	// (0x0003b2c8) popup_preview_text_window_t4_ParamLimits

0xa085,	// (0x0003b2c8) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00040b40) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00040b40) popup_preview_text_window_t

0xa103,	// (0x0003b346) scroll_pane_cp11

0x90b5,	// (0x0003a2f8) bg_popup_preview_window_pane_g1

0x9f8d,	// (0x0003b1d0) bg_popup_preview_window_pane_g2

0x9f97,	// (0x0003b1da) bg_popup_preview_window_pane_g3

0x9fa1,	// (0x0003b1e4) bg_popup_preview_window_pane_g4

0x9fab,	// (0x0003b1ee) bg_popup_preview_window_pane_g5

0x9fb5,	// (0x0003b1f8) bg_popup_preview_window_pane_g6

0x9fbd,	// (0x0003b200) bg_popup_preview_window_pane_g7

0x9fc5,	// (0x0003b208) bg_popup_preview_window_pane_g8

0x546b,	// (0x000366ae) aid_popup_width_pane

0x8917,	// (0x00039b5a) popup_midp_note_alarm_window_ParamLimits

0x8917,	// (0x00039b5a) popup_midp_note_alarm_window

0x1dc8,	// (0x0003300b) data_form_pane_ParamLimits

0x6081,	// (0x000372c4) form_field_data_pane_g1

0x608b,	// (0x000372ce) form_field_data_pane_t1_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_ParamLimits

0x3d80,	// (0x00034fc3) data_form_wide_pane_ParamLimits

0x3d91,	// (0x00034fd4) form_field_data_wide_pane_g1

0x3d9d,	// (0x00034fe0) form_field_data_wide_pane_t1_ParamLimits

0xf32a,	// (0x0004056d) input_focus_pane_cp6_ParamLimits

0x61d1,	// (0x00037414) input_popup_find_pane_g1_ParamLimits

0x61d1,	// (0x00037414) input_popup_find_pane_g1

0x632a,	// (0x0003756d) aid_navi_side_left_pane

0x633f,	// (0x00037582) aid_navi_side_right_pane

0x99a2,	// (0x0003abe5) bg_popup_window_pane_cp30_ParamLimits

0x99a2,	// (0x0003abe5) bg_popup_window_pane_cp30

0x9a1c,	// (0x0003ac5f) popup_midp_note_alarm_window_g1_ParamLimits

0x9a1c,	// (0x0003ac5f) popup_midp_note_alarm_window_g1

0x9a4c,	// (0x0003ac8f) popup_midp_note_alarm_window_t1_ParamLimits

0x9a4c,	// (0x0003ac8f) popup_midp_note_alarm_window_t1

0x9aed,	// (0x0003ad30) popup_midp_note_alarm_window_t2_ParamLimits

0x9aed,	// (0x0003ad30) popup_midp_note_alarm_window_t2

0x9b9b,	// (0x0003adde) popup_midp_note_alarm_window_t3_ParamLimits

0x9b9b,	// (0x0003adde) popup_midp_note_alarm_window_t3

0x9bcd,	// (0x0003ae10) popup_midp_note_alarm_window_t4_ParamLimits

0x9bcd,	// (0x0003ae10) popup_midp_note_alarm_window_t4

0x9bf3,	// (0x0003ae36) popup_midp_note_alarm_window_t5_ParamLimits

0x9bf3,	// (0x0003ae36) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00040add) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00040add) popup_midp_note_alarm_window_t

0x9c9f,	// (0x0003aee2) wait_bar_pane_cp1_ParamLimits

0x9c9f,	// (0x0003aee2) wait_bar_pane_cp1

0xe97a,	// (0x0003fbbd) wait_anim_pane_copy1

0xe97a,	// (0x0003fbbd) wait_border_pane_copy1

0x9687,	// (0x0003a8ca) wait_border_pane_g1_copy1

0x3db7,	// (0x00034ffa) form_field_popup_pane_g1

0x60a5,	// (0x000372e8) form_field_popup_pane_t1_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_cp7_ParamLimits

0x1e02,	// (0x00033045) list_form_pane_ParamLimits

0x3dbf,	// (0x00035002) form_field_popup_wide_pane_g1

0x3dc7,	// (0x0003500a) form_field_popup_wide_pane_t1_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_cp8_ParamLimits

0x1e0e,	// (0x00033051) list_form_wide_pane_ParamLimits

0xa7f0,	// (0x0003ba33) aid_size_cell_graphic_pane

0x6124,	// (0x00037367) data_form_pane_t1_ParamLimits

0x7618,	// (0x0003885b) data_form_wide_pane_t1_ParamLimits

0x8c62,	// (0x00039ea5) bg_status_flat_pane

0x5886,	// (0x00036ac9) title_pane_t1_ParamLimits

0xe99c,	// (0x0003fbdf) title_pane_t2_ParamLimits

0xe9c2,	// (0x0003fc05) title_pane_t3_ParamLimits

0xf557,	// (0x0004079a) title_pane_t_ParamLimits

0x6477,	// (0x000376ba) level_1_signal_ParamLimits

0x6484,	// (0x000376c7) level_2_signal_ParamLimits

0x6491,	// (0x000376d4) level_3_signal_ParamLimits

0x649e,	// (0x000376e1) level_4_signal_ParamLimits

0x64ab,	// (0x000376ee) level_5_signal_ParamLimits

0x64b8,	// (0x000376fb) level_6_signal_ParamLimits

0x64c5,	// (0x00037708) level_7_signal_ParamLimits

0x6477,	// (0x000376ba) level_1_battery_ParamLimits

0x6484,	// (0x000376c7) level_2_battery_ParamLimits

0x6491,	// (0x000376d4) level_3_battery_ParamLimits

0x649e,	// (0x000376e1) level_4_battery_ParamLimits

0x64ab,	// (0x000376ee) level_5_battery_ParamLimits

0x64b8,	// (0x000376fb) level_6_battery_ParamLimits

0x64c5,	// (0x00037708) level_7_battery_ParamLimits

0x98a7,	// (0x0003aaea) bg_status_flat_pane_g1

0x98af,	// (0x0003aaf2) bg_status_flat_pane_g2

0x98b7,	// (0x0003aafa) bg_status_flat_pane_g3

0x98bf,	// (0x0003ab02) bg_status_flat_pane_g4

0x98c7,	// (0x0003ab0a) bg_status_flat_pane_g5

0x98cf,	// (0x0003ab12) bg_status_flat_pane_g6

0x98d7,	// (0x0003ab1a) bg_status_flat_pane_g7

0x58f6,	// (0x00036b39) tabs_3_active_pane_t1_ParamLimits

0x58f6,	// (0x00036b39) tabs_3_passive_pane_t1_ParamLimits

0x5910,	// (0x00036b53) tabs_4_active_pane_t1_ParamLimits

0x5910,	// (0x00036b53) tabs_4_1_passive_pane_t1_ParamLimits

0x61e7,	// (0x0003742a) tabs_2_active_pane_t1_ParamLimits

0x61e7,	// (0x0003742a) tabs_2_passive_pane_t1_ParamLimits

0x2739,	// (0x0003397c) bg_active_tab_pane_cp4_ParamLimits

0x61f9,	// (0x0003743c) tabs_2_long_active_pane_t1_ParamLimits

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp4_ParamLimits

0x72cc,	// (0x0003850f) list_single_midp_graphic_pane_t1_ParamLimits

0x2739,	// (0x0003397c) bg_active_tab_pane_cp5_ParamLimits

0x6218,	// (0x0003745b) tabs_3_long_active_pane_t1_ParamLimits

0x620c,	// (0x0003744f) bg_passive_tab_pane_cp5_ParamLimits

0x72cc,	// (0x0003850f) list_single_midp_graphic_pane_t1

0x8c62,	// (0x00039ea5) bg_status_flat_pane_ParamLimits

0x8d2d,	// (0x00039f70) indicator_pane_cp2_ParamLimits

0x8d2d,	// (0x00039f70) indicator_pane_cp2

0x8e70,	// (0x0003a0b3) navi_pane_srt_ParamLimits

0x8e70,	// (0x0003a0b3) navi_pane_srt

0x8e94,	// (0x0003a0d7) popup_clock_digital_analogue_window_cp1

0xea18,	// (0x0003fc5b) indicator_pane_t1

0x2725,	// (0x00033968) copy_highlight_pane

0x2725,	// (0x00033968) cursor_graphics_pane

0x2725,	// (0x00033968) graphic_within_text_pane

0x2725,	// (0x00033968) link_highlight_pane

0xa0c6,	// (0x0003b309) popup_preview_text_window_t5_ParamLimits

0xa0c6,	// (0x0003b309) popup_preview_text_window_t5

0x6a4c,	// (0x00037c8f) cursor_digital_pane

0x6a4c,	// (0x00037c8f) cursor_primary_pane

0x6a5d,	// (0x00037ca0) cursor_primary_small_pane

0x6a65,	// (0x00037ca8) cursor_secondary_pane

0x6a6d,	// (0x00037cb0) cursor_title_pane

0x6a4c,	// (0x00037c8f) link_highlight_digital_pane

0x6a54,	// (0x00037c97) link_highlight_primary_pane

0x6a5d,	// (0x00037ca0) link_highlight_primary_small_pane

0x6a65,	// (0x00037ca8) link_highlight_secondary_pane

0x6a6d,	// (0x00037cb0) link_highlight_title_pane

0x6a4c,	// (0x00037c8f) copy_highlight_digital_pane

0x6a4c,	// (0x00037c8f) copy_highlight_primary_pane

0x6a5d,	// (0x00037ca0) copy_highlight_primary_small_pane

0x6a65,	// (0x00037ca8) copy_highlight_secondary_pane

0x6a6d,	// (0x00037cb0) copy_highlight_title_pane

0x6a65,	// (0x00037ca8) graphic_text_digital_pane

0x9945,	// (0x0003ab88) graphic_text_primary_pane

0x994e,	// (0x0003ab91) graphic_text_primary_small_pane

0x6a5d,	// (0x00037ca0) graphic_text_secondary_pane

0x6a4c,	// (0x00037c8f) graphic_text_title_pane

0x6a75,	// (0x00037cb8) cursor_primary_pane_g1

0x9937,	// (0x0003ab7a) cursor_text_primary_t1

0x991f,	// (0x0003ab62) cursor_primary_small_pane_g1

0x9929,	// (0x0003ab6c) cursor_text_primary_small_t1

0x9907,	// (0x0003ab4a) cursor_primary_small_pane_g1_copy1

0x9911,	// (0x0003ab54) cursor_text_primary_small_t1_copy1

0x98ef,	// (0x0003ab32) cursor_text_title_t1

0x98fd,	// (0x0003ab40) cursor_title_pane_g1

0x6a75,	// (0x00037cb8) cursor_digital_pane_g1

0x6a7f,	// (0x00037cc2) cursor_text_digital_t1

0x6a8d,	// (0x00037cd0) link_highlight_primary_pane_g1

0x9898,	// (0x0003aadb) link_highlight_primary_pane_t1

0x6a8d,	// (0x00037cd0) link_highlight_primary_small_pane_g1

0x6a95,	// (0x00037cd8) link_highlight_primary_small_pane_t1

0x6aa4,	// (0x00037ce7) link_highlight_secondary_pane_g1

0x6aac,	// (0x00037cef) link_highlight_secondary_pane_t1

0x980c,	// (0x0003aa4f) link_highlight_title_pane_g1

0x9814,	// (0x0003aa57) link_highlight_title_pane_t1

0x97f5,	// (0x0003aa38) link_highlight_digital_pane_g1

0x97fd,	// (0x0003aa40) link_highlight_digital_pane_t1

0x96bd,	// (0x0003a900) copy_highlight_primary_pane_g1

0x96d4,	// (0x0003a917) copy_highlight_primary_pane_t1

0x96bd,	// (0x0003a900) copy_highlight_primary_small_pane_g1

0x96c5,	// (0x0003a908) copy_highlight_primary_small_pane_t1

0x6abb,	// (0x00037cfe) copy_highlight_secondary_pane_g1

0x6ac3,	// (0x00037d06) copy_highlight_secondary_pane_t1

0x96a6,	// (0x0003a8e9) copy_highlight_title_pane_g1

0x96ae,	// (0x0003a8f1) copy_highlight_title_pane_t1

0x96bd,	// (0x0003a900) copy_highlight_digital_pane_g1

0xa9c0,	// (0x0003bc03) copy_highlight_digital_pane_t1

0xa914,	// (0x0003bb57) graphic_text_primary_pane_g1

0xa9a4,	// (0x0003bbe7) graphic_text_primary_pane_t1

0xa9b2,	// (0x0003bbf5) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00040c0c) graphic_text_primary_pane_t

0xa980,	// (0x0003bbc3) graphic_text_primary_small_pane_g1

0xa988,	// (0x0003bbcb) graphic_text_primary_small_pane_t1

0xa996,	// (0x0003bbd9) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00040c07) graphic_text_primary_small_pane_t

0xa95c,	// (0x0003bb9f) graphic_text_secondary_pane_g1

0xa964,	// (0x0003bba7) graphic_text_secondary_pane_t1

0xa972,	// (0x0003bbb5) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00040c02) graphic_text_secondary_pane_t

0xa938,	// (0x0003bb7b) graphic_text_title_pane_g1

0xa940,	// (0x0003bb83) graphic_text_title_pane_t1

0xa94e,	// (0x0003bb91) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00040bfd) graphic_text_title_pane_t

0xa914,	// (0x0003bb57) graphic_text_digital_pane_g1

0xa91c,	// (0x0003bb5f) graphic_text_digital_pane_t1

0xa92a,	// (0x0003bb6d) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00040bf8) graphic_text_digital_pane_t

0xe9d4,	// (0x0003fc17) navi_icon_pane_srt_ParamLimits

0xe9d4,	// (0x0003fc17) navi_icon_pane_srt

0xe97a,	// (0x0003fbbd) navi_midp_pane_srt

0xe97a,	// (0x0003fbbd) navi_navi_pane_srt

0xe9d4,	// (0x0003fc17) navi_text_pane_srt_ParamLimits

0xe9d4,	// (0x0003fc17) navi_text_pane_srt

0xa8df,	// (0x0003bb22) navi_navi_icon_text_pane_srt

0xa8e7,	// (0x0003bb2a) navi_navi_pane_srt_g1_ParamLimits

0xa8e7,	// (0x0003bb2a) navi_navi_pane_srt_g1

0xa8f9,	// (0x0003bb3c) navi_navi_pane_srt_g2_ParamLimits

0xa8f9,	// (0x0003bb3c) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00040bf3) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00040bf3) navi_navi_pane_srt_g

0xa90b,	// (0x0003bb4e) navi_navi_tabs_pane_srt

0xa8df,	// (0x0003bb22) navi_navi_text_pane_srt

0xa8df,	// (0x0003bb22) navi_navi_volume_pane_srt

0xa8d0,	// (0x0003bb13) navi_navi_text_pane_srt_t1

0x773c,	// (0x0003897f) navi_navi_volume_pane_srt_g1

0x7744,	// (0x00038987) volume_small_pane_srt_ParamLimits

0x7744,	// (0x00038987) volume_small_pane_srt

0x6ad2,	// (0x00037d15) volume_small_pane_srt_g1_ParamLimits

0x6ad2,	// (0x00037d15) volume_small_pane_srt_g1

0x6ae2,	// (0x00037d25) volume_small_pane_srt_g2_ParamLimits

0x6ae2,	// (0x00037d25) volume_small_pane_srt_g2

0x6af3,	// (0x00037d36) volume_small_pane_srt_g3_ParamLimits

0x6af3,	// (0x00037d36) volume_small_pane_srt_g3

0x6b04,	// (0x00037d47) volume_small_pane_srt_g4_ParamLimits

0x6b04,	// (0x00037d47) volume_small_pane_srt_g4

0x6b15,	// (0x00037d58) volume_small_pane_srt_g5_ParamLimits

0x6b15,	// (0x00037d58) volume_small_pane_srt_g5

0x6b26,	// (0x00037d69) volume_small_pane_srt_g6_ParamLimits

0x6b26,	// (0x00037d69) volume_small_pane_srt_g6

0x6b37,	// (0x00037d7a) volume_small_pane_srt_g7_ParamLimits

0x6b37,	// (0x00037d7a) volume_small_pane_srt_g7

0x6b48,	// (0x00037d8b) volume_small_pane_srt_g8_ParamLimits

0x6b48,	// (0x00037d8b) volume_small_pane_srt_g8

0x6b59,	// (0x00037d9c) volume_small_pane_srt_g9_ParamLimits

0x6b59,	// (0x00037d9c) volume_small_pane_srt_g9

0x6b6a,	// (0x00037dad) volume_small_pane_srt_g10_ParamLimits

0x6b6a,	// (0x00037dad) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0004099b) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0004099b) volume_small_pane_srt_g

0xf22a,	// (0x0004046d) query_popup_data_pane_cp2

0xa8b6,	// (0x0003baf9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa8b6,	// (0x0003baf9) navi_navi_icon_text_pane_srt_t1

0x9945,	// (0x0003ab88) navi_tabs_2_long_pane_srt

0x9945,	// (0x0003ab88) navi_tabs_2_pane_srt

0x9945,	// (0x0003ab88) navi_tabs_3_long_pane_srt

0x9945,	// (0x0003ab88) navi_tabs_3_pane_srt

0x9945,	// (0x0003ab88) navi_tabs_4_pane_srt

0x771c,	// (0x0003895f) tabs_2_active_pane_srt_ParamLimits

0x771c,	// (0x0003895f) tabs_2_active_pane_srt

0x772c,	// (0x0003896f) tabs_2_passive_pane_srt_ParamLimits

0x772c,	// (0x0003896f) tabs_2_passive_pane_srt

0x6e99,	// (0x000380dc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6e99,	// (0x000380dc) bg_passive_tab_pane_cp1_srt

0xa882,	// (0x0003bac5) bg_passive_tab_pane_g1_cp1_srt

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp1_srt

0xa88b,	// (0x0003bace) bg_passive_tab_pane_g3_cp1_srt

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp1_srt_ParamLimits

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp1_srt

0xa894,	// (0x0003bad7) tabs_2_active_pane_srt_g1

0xa89c,	// (0x0003badf) tabs_2_active_pane_srt_t1_ParamLimits

0xa89c,	// (0x0003badf) tabs_2_active_pane_srt_t1

0xa882,	// (0x0003bac5) bg_active_tab_pane_g1_cp1_srt

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp1_srt

0xa88b,	// (0x0003bace) bg_active_tab_pane_g3_cp1_srt

0x76e9,	// (0x0003892c) tabs_3_active_pane_srt_ParamLimits

0x76e9,	// (0x0003892c) tabs_3_active_pane_srt

0x76fa,	// (0x0003893d) tabs_3_passive_pane_cp_srt_ParamLimits

0x76fa,	// (0x0003893d) tabs_3_passive_pane_cp_srt

0x770b,	// (0x0003894e) tabs_3_passive_pane_srt_ParamLimits

0x770b,	// (0x0003894e) tabs_3_passive_pane_srt

0x6e99,	// (0x000380dc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6e99,	// (0x000380dc) bg_passive_tab_pane_cp2_srt

0x6b7b,	// (0x00037dbe) bg_passive_tab_pane_g1_cp2_srt

0x247a,	// (0x000336bd) bg_passive_tab_pane_g2_cp2_srt

0x6b84,	// (0x00037dc7) bg_passive_tab_pane_g3_cp2_srt

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp2_srt_ParamLimits

0xe9d4,	// (0x0003fc17) bg_active_tab_pane_cp2_srt

0xa868,	// (0x0003baab) tabs_3_active_pane_srt_g1

0xa870,	// (0x0003bab3) tabs_3_active_pane_srt_t1_ParamLimits

0xa870,	// (0x0003bab3) tabs_3_active_pane_srt_t1

0x6b7b,	// (0x00037dbe) bg_active_tab_pane_g1_cp2_srt

0x247a,	// (0x000336bd) bg_active_tab_pane_g2_cp2_srt

0x6b84,	// (0x00037dc7) bg_active_tab_pane_g3_cp2_srt

0x76a1,	// (0x000388e4) tabs_4_active_pane_srt_ParamLimits

0x76a1,	// (0x000388e4) tabs_4_active_pane_srt

0x76b3,	// (0x000388f6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x76b3,	// (0x000388f6) tabs_4_passive_pane_cp2_srt

0x6e1f,	// (0x00038062) aid_size_cell_toolbar

0x620c,	// (0x0003744f) main_idle_act_pane_ParamLimits

0x7062,	// (0x000382a5) popup_large_graphic_colour_window_ParamLimits

0x8ae4,	// (0x00039d27) popup_toolbar_window_ParamLimits

0x8ae4,	// (0x00039d27) popup_toolbar_window

0x3f86,	// (0x000351c9) list_single_graphic_2heading_pane_ParamLimits

0x3f86,	// (0x000351c9) list_single_graphic_2heading_pane

0x20d8,	// (0x0003331b) aid_size_cell_apps_grid_lsc_pane

0x20ea,	// (0x0003332d) aid_size_cell_apps_grid_prt_pane

0x6e99,	// (0x000380dc) bg_wml_button_pane_cp1_ParamLimits

0x6e99,	// (0x000380dc) bg_wml_button_pane_cp1

0x933d,	// (0x0003a580) form_midp_field_text_pane_t1_ParamLimits

0x9129,	// (0x0003a36c) input_focus_pane_cp050_ParamLimits

0x9368,	// (0x0003a5ab) list_midp_form_text_pane_ParamLimits

0x931a,	// (0x0003a55d) input_focus_pane_cp051_ParamLimits

0x932e,	// (0x0003a571) list_midp_choice_pane_ParamLimits

0x91e2,	// (0x0003a425) list_single_2graphic_pane_cp3_ParamLimits

0x91e2,	// (0x0003a425) list_single_2graphic_pane_cp3

0x91fb,	// (0x0003a43e) list_single_midp_graphic_pane_ParamLimits

0x91fb,	// (0x0003a43e) list_single_midp_graphic_pane

0x53d7,	// (0x0003661a) list_single_graphic_2heading_pane_g1_ParamLimits

0x53d7,	// (0x0003661a) list_single_graphic_2heading_pane_g1

0x53e3,	// (0x00036626) list_single_graphic_2heading_pane_g4_ParamLimits

0x53e3,	// (0x00036626) list_single_graphic_2heading_pane_g4

0x53ef,	// (0x00036632) list_single_graphic_2heading_pane_g5_ParamLimits

0x53ef,	// (0x00036632) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000409ee) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000409ee) list_single_graphic_2heading_pane_g

0x53fb,	// (0x0003663e) list_single_graphic_2heading_pane_t1_ParamLimits

0x53fb,	// (0x0003663e) list_single_graphic_2heading_pane_t1

0x540f,	// (0x00036652) list_single_graphic_2heading_pane_t2_ParamLimits

0x540f,	// (0x00036652) list_single_graphic_2heading_pane_t2

0x542b,	// (0x0003666e) list_single_graphic_2heading_pane_t3_ParamLimits

0x542b,	// (0x0003666e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000409f5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000409f5) list_single_graphic_2heading_pane_t

0x8ff3,	// (0x0003a236) bg_popup_sub_pane_cp2

0x901d,	// (0x0003a260) grid_toobar_pane

0x723c,	// (0x0003847f) cell_toolbar_pane_ParamLimits

0x723c,	// (0x0003847f) cell_toolbar_pane

0x9059,	// (0x0003a29c) cell_toolbar_pane_g1_ParamLimits

0x9059,	// (0x0003a29c) cell_toolbar_pane_g1

0x906d,	// (0x0003a2b0) cell_toolbar_pane_g2_ParamLimits

0x906d,	// (0x0003a2b0) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00040a03) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00040a03) cell_toolbar_pane_g

0x908f,	// (0x0003a2d2) grid_highlight_pane_cp2_ParamLimits

0x908f,	// (0x0003a2d2) grid_highlight_pane_cp2

0x90a9,	// (0x0003a2ec) toolbar_button_pane

0x90b5,	// (0x0003a2f8) toolbar_button_pane_g1

0x90bd,	// (0x0003a300) toolbar_button_pane_g2

0x90c5,	// (0x0003a308) toolbar_button_pane_g3

0x90cd,	// (0x0003a310) toolbar_button_pane_g4

0x90d5,	// (0x0003a318) toolbar_button_pane_g5

0x90dd,	// (0x0003a320) toolbar_button_pane_g6

0x90e5,	// (0x0003a328) toolbar_button_pane_g7

0x90ed,	// (0x0003a330) toolbar_button_pane_g8

0x90f5,	// (0x0003a338) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00040a08) toolbar_button_pane_g

0x7274,	// (0x000384b7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7274,	// (0x000384b7) list_single_2graphic_pane_g1_cp3

0x7280,	// (0x000384c3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7280,	// (0x000384c3) list_single_2graphic_pane_g2_cp3

0x7291,	// (0x000384d4) list_single_2graphic_pane_g3_cp3

0x7299,	// (0x000384dc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7299,	// (0x000384dc) list_single_2graphic_pane_g4_cp3

0x72a5,	// (0x000384e8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x72a5,	// (0x000384e8) list_single_2graphic_pane_t1_cp3

0x72c0,	// (0x00038503) list_single_midp_graphic_pane_g2_ParamLimits

0x72c0,	// (0x00038503) list_single_midp_graphic_pane_g2

0x6e27,	// (0x0003806a) aid_zoom_text_primary

0x3e1d,	// (0x00035060) aid_zoom_text_secondary

0x6c35,	// (0x00037e78) status_small_pane_g7_ParamLimits

0x6c35,	// (0x00037e78) status_small_pane_g7

0x6c58,	// (0x00037e9b) status_small_pane_t1_ParamLimits

0x5875,	// (0x00036ab8) title_pane_g2

0x0003,

0xf54e,	// (0x00040791) title_pane_g

0x5aca,	// (0x00036d0d) aid_size_cell_colour_1_pane_ParamLimits

0x5aca,	// (0x00036d0d) aid_size_cell_colour_1_pane

0x5ade,	// (0x00036d21) aid_size_cell_colour_2_pane_ParamLimits

0x5ade,	// (0x00036d21) aid_size_cell_colour_2_pane

0x5af2,	// (0x00036d35) aid_size_cell_colour_3_pane_ParamLimits

0x5af2,	// (0x00036d35) aid_size_cell_colour_3_pane

0x5b06,	// (0x00036d49) aid_size_cell_colour_4_pane_ParamLimits

0x5b06,	// (0x00036d49) aid_size_cell_colour_4_pane

0x6266,	// (0x000374a9) title_pane_stacon_g1_ParamLimits

0x6266,	// (0x000374a9) title_pane_stacon_g1

0x972b,	// (0x0003a96e) popup_note_wait_window_g3_ParamLimits

0x972b,	// (0x0003a96e) popup_note_wait_window_g3

0x97a2,	// (0x0003a9e5) popup_note_wait_window_t5_ParamLimits

0x97a2,	// (0x0003a9e5) popup_note_wait_window_t5

0xe97a,	// (0x0003fbbd) main_feb_china_hwr_fs_writing_pane

0x6f29,	// (0x0003816c) popup_feb_china_hwr_fs_window_ParamLimits

0x6f29,	// (0x0003816c) popup_feb_china_hwr_fs_window

0x72e2,	// (0x00038525) aid_size_cell_hwr_fs_ParamLimits

0x72e2,	// (0x00038525) aid_size_cell_hwr_fs

0x9129,	// (0x0003a36c) bg_popup_sub_pane_cp3_ParamLimits

0x9129,	// (0x0003a36c) bg_popup_sub_pane_cp3

0x72f7,	// (0x0003853a) grid_hwr_fs_pane_ParamLimits

0x72f7,	// (0x0003853a) grid_hwr_fs_pane

0x730f,	// (0x00038552) linegrid_hwr_fs_pane_ParamLimits

0x730f,	// (0x00038552) linegrid_hwr_fs_pane

0x731f,	// (0x00038562) cell_hwr_fs_pane_ParamLimits

0x731f,	// (0x00038562) cell_hwr_fs_pane

0x9135,	// (0x0003a378) linegrid_hwr_fs_pane_g1_ParamLimits

0x9135,	// (0x0003a378) linegrid_hwr_fs_pane_g1

0x9141,	// (0x0003a384) linegrid_hwr_fs_pane_g2_ParamLimits

0x9141,	// (0x0003a384) linegrid_hwr_fs_pane_g2

0x9153,	// (0x0003a396) linegrid_hwr_fs_pane_g3_ParamLimits

0x9153,	// (0x0003a396) linegrid_hwr_fs_pane_g3

0x7343,	// (0x00038586) linegrid_hwr_fs_pane_g4_ParamLimits

0x7343,	// (0x00038586) linegrid_hwr_fs_pane_g4

0x7361,	// (0x000385a4) linegrid_hwr_fs_pane_g5_ParamLimits

0x7361,	// (0x000385a4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00040a33) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00040a33) linegrid_hwr_fs_pane_g

0x915f,	// (0x0003a3a2) cell_hwr_fs_pane_g1_ParamLimits

0x915f,	// (0x0003a3a2) cell_hwr_fs_pane_g1

0x8f2a,	// (0x0003a16d) cell_hwr_fs_pane_g2_ParamLimits

0x8f2a,	// (0x0003a16d) cell_hwr_fs_pane_g2

0x9175,	// (0x0003a3b8) cell_hwr_fs_pane_g3_ParamLimits

0x9175,	// (0x0003a3b8) cell_hwr_fs_pane_g3

0x9182,	// (0x0003a3c5) cell_hwr_fs_pane_g4_ParamLimits

0x9182,	// (0x0003a3c5) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00040a3e) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00040a3e) cell_hwr_fs_pane_g

0x7377,	// (0x000385ba) cell_hwr_fs_pane_t1

0xe97a,	// (0x0003fbbd) grid_highlight_pane_cp6

0xe97a,	// (0x0003fbbd) main_idle_act2_pane

0x1ee7,	// (0x0003312a) aid_inside_area_popup_secondary

0x9ddb,	// (0x0003b01e) aid_inside_area_window_primary_ParamLimits

0x9ddb,	// (0x0003b01e) aid_inside_area_window_primary

0xa9cf,	// (0x0003bc12) ai2_news_ticker_pane

0xa9d7,	// (0x0003bc1a) aid_size_cell_ai1_link_ParamLimits

0xa9d7,	// (0x0003bc1a) aid_size_cell_ai1_link

0xa9f1,	// (0x0003bc34) popup_ai2_data_window_ParamLimits

0xa9f1,	// (0x0003bc34) popup_ai2_data_window

0xaa0f,	// (0x0003bc52) popup_ai2_link_window_ParamLimits

0xaa0f,	// (0x0003bc52) popup_ai2_link_window

0x9129,	// (0x0003a36c) bg_popup_sub_pane_cp4_ParamLimits

0x9129,	// (0x0003a36c) bg_popup_sub_pane_cp4

0xaa25,	// (0x0003bc68) grid_ai2_link_pane_ParamLimits

0xaa25,	// (0x0003bc68) grid_ai2_link_pane

0xaa3c,	// (0x0003bc7f) popup_ai2_link_window_g1_ParamLimits

0xaa3c,	// (0x0003bc7f) popup_ai2_link_window_g1

0xaa48,	// (0x0003bc8b) popup_ai2_link_window_g2_ParamLimits

0xaa48,	// (0x0003bc8b) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00040c11) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00040c11) popup_ai2_link_window_g

0xaa59,	// (0x0003bc9c) ai2_mp_button_pane

0xaa61,	// (0x0003bca4) ai2_mp_volume_pane

0x931a,	// (0x0003a55d) bg_popup_sub_pane_cp5_ParamLimits

0x931a,	// (0x0003a55d) bg_popup_sub_pane_cp5

0xaa69,	// (0x0003bcac) heading_ai2_gene_pane_ParamLimits

0xaa69,	// (0x0003bcac) heading_ai2_gene_pane

0xaa75,	// (0x0003bcb8) list_ai2_gene_pane_ParamLimits

0xaa75,	// (0x0003bcb8) list_ai2_gene_pane

0xaabd,	// (0x0003bd00) cell_ai2_link_pane_ParamLimits

0xaabd,	// (0x0003bd00) cell_ai2_link_pane

0xaad3,	// (0x0003bd16) cell_ai2_link_pane_g1

0xe97a,	// (0x0003fbbd) grid_highlight_pane_cp7

0x7759,	// (0x0003899c) ai2_mp_volume_pane_g1

0xaba6,	// (0x0003bde9) ai2_mp_volume_pane_g2

0xab1b,	// (0x0003bd5e) list_ai2_gene_pane_t1

0xabae,	// (0x0003bdf1) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00040c2a) ai2_mp_volume_pane_g

0x7761,	// (0x000389a4) volume_small_pane_cp3

0xabb6,	// (0x0003bdf9) aid_size_cell_ai2_button

0xabbe,	// (0x0003be01) grid_ai2_button_pane

0xabc7,	// (0x0003be0a) cell_ai2_button_pane_ParamLimits

0xabc7,	// (0x0003be0a) cell_ai2_button_pane

0xe970,	// (0x0003fbb3) cell_ai2_button_pane_g1

0xe97a,	// (0x0003fbbd) grid_highlight_pane_cp8

0xab66,	// (0x0003bda9) ai2_gene_pane_t1_ParamLimits

0xab66,	// (0x0003bda9) ai2_gene_pane_t1

0x6e15,	// (0x00038058) aid_height_parent_landscape

0xa46d,	// (0x0003b6b0) aid_height_set_list

0xa47e,	// (0x0003b6c1) aid_size_parent

0xa7f0,	// (0x0003ba33) aid_size_cell_graphic_pane_ParamLimits

0xaa85,	// (0x0003bcc8) popup_ai2_data_window_g1_ParamLimits

0xaa85,	// (0x0003bcc8) popup_ai2_data_window_g1

0xaa91,	// (0x0003bcd4) ai2_news_ticker_pane_g1

0xaa99,	// (0x0003bcdc) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00040c16) ai2_news_ticker_pane_g

0xaaa1,	// (0x0003bce4) ai2_news_ticker_pane_t1

0xaaaf,	// (0x0003bcf2) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00040c1b) ai2_news_ticker_pane_t

0xaadc,	// (0x0003bd1f) heading_ai2_gene_pane_g1

0xaae4,	// (0x0003bd27) heading_ai2_gene_pane_t1_ParamLimits

0xaae4,	// (0x0003bd27) heading_ai2_gene_pane_t1

0xaaf9,	// (0x0003bd3c) list_highlight_pane_cp6

0xab01,	// (0x0003bd44) ai2_gene_pane_ParamLimits

0xab01,	// (0x0003bd44) ai2_gene_pane

0xab29,	// (0x0003bd6c) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00040c20) list_ai2_gene_pane_t

0xab37,	// (0x0003bd7a) list_highlight_pane_cp8_ParamLimits

0xab37,	// (0x0003bd7a) list_highlight_pane_cp8

0xab48,	// (0x0003bd8b) ai2_gene_pane_g1_ParamLimits

0xab48,	// (0x0003bd8b) ai2_gene_pane_g1

0xab5a,	// (0x0003bd9d) ai2_gene_pane_g2_ParamLimits

0xab5a,	// (0x0003bd9d) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00040c25) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00040c25) ai2_gene_pane_g

0xf545,	// (0x00040788) scroll_pane_cp12

0x6dcc,	// (0x0003800f) control_pane_t3_ParamLimits

0x6dcc,	// (0x0003800f) control_pane_t3

0x6c49,	// (0x00037e8c) status_small_pane_g8_ParamLimits

0x6c49,	// (0x00037e8c) status_small_pane_g8

0x7027,	// (0x0003826a) popup_find_window_ParamLimits

0x892d,	// (0x00039b70) popup_note_image_window_ParamLimits

0x3cbf,	// (0x00034f02) list_double2_graphic_pane_vc_g1_ParamLimits

0x3cbf,	// (0x00034f02) list_double2_graphic_pane_vc_g1

0x3e81,	// (0x000350c4) list_double2_graphic_pane_vc_g2_ParamLimits

0x3e81,	// (0x000350c4) list_double2_graphic_pane_vc_g2

0x3e8d,	// (0x000350d0) list_double2_graphic_pane_vc_g3_ParamLimits

0x3e8d,	// (0x000350d0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000409fc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000409fc) list_double2_graphic_pane_vc_g

0x3e99,	// (0x000350dc) list_double2_graphic_pane_vc_t1_ParamLimits

0x3e99,	// (0x000350dc) list_double2_graphic_pane_vc_t1

0x3c95,	// (0x00034ed8) list_single_heading_pane_vc_g1_ParamLimits

0x3c95,	// (0x00034ed8) list_single_heading_pane_vc_g1

0x3ca1,	// (0x00034ee4) list_single_heading_pane_vc_g2_ParamLimits

0x3ca1,	// (0x00034ee4) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00040a1d) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00040a1d) list_single_heading_pane_vc_g

0x3eaf,	// (0x000350f2) list_single_heading_pane_vc_t1_ParamLimits

0x3eaf,	// (0x000350f2) list_single_heading_pane_vc_t1

0x3ec7,	// (0x0003510a) list_single_heading_pane_vc_t2_ParamLimits

0x3ec7,	// (0x0003510a) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00040a22) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00040a22) list_single_heading_pane_vc_t

0x3ed9,	// (0x0003511c) list_setting_number_pane_vc_g1_ParamLimits

0x3ed9,	// (0x0003511c) list_setting_number_pane_vc_g1

0x3ee5,	// (0x00035128) list_setting_number_pane_vc_g2_ParamLimits

0x3ee5,	// (0x00035128) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00040a27) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00040a27) list_setting_number_pane_vc_g

0x3ef1,	// (0x00035134) list_setting_number_pane_vc_t1_ParamLimits

0x3ef1,	// (0x00035134) list_setting_number_pane_vc_t1

0x3f05,	// (0x00035148) list_setting_number_pane_vc_t2_ParamLimits

0x3f05,	// (0x00035148) list_setting_number_pane_vc_t2

0x3f21,	// (0x00035164) list_setting_number_pane_vc_t3_ParamLimits

0x3f21,	// (0x00035164) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00040a2c) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00040a2c) list_setting_number_pane_vc_t

0x3f4f,	// (0x00035192) set_value_pane_vc_ParamLimits

0x3f4f,	// (0x00035192) set_value_pane_vc

0x3f86,	// (0x000351c9) list_double2_graphic_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double2_graphic_pane_vc

0xa656,	// (0x0003b899) list_double2_large_graphic_pane_vc_ParamLimits

0xa656,	// (0x0003b899) list_double2_large_graphic_pane_vc

0x3f86,	// (0x000351c9) list_double2_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double2_pane_vc

0x3f86,	// (0x000351c9) list_double_graphic_heading_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double_graphic_heading_pane_vc

0x3f86,	// (0x000351c9) list_double_graphic_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double_graphic_pane_vc

0x3f86,	// (0x000351c9) list_double_heading_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double_heading_pane_vc

0xa66a,	// (0x0003b8ad) list_double_large_graphic_pane_vc_ParamLimits

0xa66a,	// (0x0003b8ad) list_double_large_graphic_pane_vc

0x3f86,	// (0x000351c9) list_double_number_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double_number_pane_vc

0x3f86,	// (0x000351c9) list_double_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double_pane_vc

0x3f86,	// (0x000351c9) list_double_time_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_double_time_pane_vc

0x3f86,	// (0x000351c9) list_setting_number_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_setting_number_pane_vc

0x3f86,	// (0x000351c9) list_setting_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_setting_pane_vc

0x3f86,	// (0x000351c9) list_single_graphic_heading_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_single_graphic_heading_pane_vc

0x3f86,	// (0x000351c9) list_single_heading_pane_vc_ParamLimits

0x3f86,	// (0x000351c9) list_single_heading_pane_vc

0xa68c,	// (0x0003b8cf) list_single_number_heading_pane_vc_ParamLimits

0xa68c,	// (0x0003b8cf) list_single_number_heading_pane_vc

0x3cbf,	// (0x00034f02) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3cbf,	// (0x00034f02) list_double_graphic_heading_pane_vc_g1

0x3c95,	// (0x00034ed8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3c95,	// (0x00034ed8) list_double_graphic_heading_pane_vc_g2

0x3ca1,	// (0x00034ee4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3ca1,	// (0x00034ee4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00040c31) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00040c31) list_double_graphic_heading_pane_vc_g

0x3f9b,	// (0x000351de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3f9b,	// (0x000351de) list_double_graphic_heading_pane_vc_t1

0x3fb1,	// (0x000351f4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3fb1,	// (0x000351f4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00040c38) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00040c38) list_double_graphic_heading_pane_vc_t

0x3ed9,	// (0x0003511c) list_setting_pane_vc_g1_ParamLimits

0x3ed9,	// (0x0003511c) list_setting_pane_vc_g1

0x3ee5,	// (0x00035128) list_setting_pane_vc_g2_ParamLimits

0x3ee5,	// (0x00035128) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00040a27) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00040a27) list_setting_pane_vc_g

0x3fcf,	// (0x00035212) list_setting_pane_vc_t1_ParamLimits

0x3fcf,	// (0x00035212) list_setting_pane_vc_t1

0x3feb,	// (0x0003522e) list_setting_pane_vc_t2_ParamLimits

0x3feb,	// (0x0003522e) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x00040c66) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x00040c66) list_setting_pane_vc_t

0x3f4f,	// (0x00035192) set_value_pane_cp_vc_ParamLimits

0x3f4f,	// (0x00035192) set_value_pane_cp_vc

0x3c95,	// (0x00034ed8) list_single_number_heading_pane_vc_g1_ParamLimits

0x3c95,	// (0x00034ed8) list_single_number_heading_pane_vc_g1

0x3ca1,	// (0x00034ee4) list_single_number_heading_pane_vc_g2_ParamLimits

0x3ca1,	// (0x00034ee4) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00040a1d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00040a1d) list_single_number_heading_pane_vc_g

0x3eaf,	// (0x000350f2) list_single_number_heading_pane_vc_t1_ParamLimits

0x3eaf,	// (0x000350f2) list_single_number_heading_pane_vc_t1

0x4007,	// (0x0003524a) list_single_number_heading_pane_vc_t2_ParamLimits

0x4007,	// (0x0003524a) list_single_number_heading_pane_vc_t2

0x3cad,	// (0x00034ef0) list_single_number_heading_pane_vc_t3_ParamLimits

0x3cad,	// (0x00034ef0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x00040c6b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x00040c6b) list_single_number_heading_pane_vc_t

0x3cbf,	// (0x00034f02) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3cbf,	// (0x00034f02) list_single_graphic_heading_pane_vc_g1

0x3c95,	// (0x00034ed8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3c95,	// (0x00034ed8) list_single_graphic_heading_pane_vc_g4

0x3ca1,	// (0x00034ee4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3ca1,	// (0x00034ee4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00040c31) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00040c31) list_single_graphic_heading_pane_vc_g

0x3eaf,	// (0x000350f2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3eaf,	// (0x000350f2) list_single_graphic_heading_pane_vc_t1

0x4019,	// (0x0003525c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4019,	// (0x0003525c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x00040c72) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x00040c72) list_single_graphic_heading_pane_vc_t

0x3c95,	// (0x00034ed8) list_double2_pane_vc_g1_ParamLimits

0x3c95,	// (0x00034ed8) list_double2_pane_vc_g1

0x3ca1,	// (0x00034ee4) list_double2_pane_vc_g2_ParamLimits

0x3ca1,	// (0x00034ee4) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00040a1d) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00040a1d) list_double2_pane_vc_g

0x3f70,	// (0x000351b3) list_double2_pane_vc_t1_ParamLimits

0x3f70,	// (0x000351b3) list_double2_pane_vc_t1

0x3ccb,	// (0x00034f0e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3ccb,	// (0x00034f0e) list_double2_large_graphic_pane_vc_g1

0x3cd7,	// (0x00034f1a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3cd7,	// (0x00034f1a) list_double2_large_graphic_pane_vc_g2

0x3ce3,	// (0x00034f26) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3ce3,	// (0x00034f26) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x00040c77) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x00040c77) list_double2_large_graphic_pane_vc_g

0x3cef,	// (0x00034f32) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3cef,	// (0x00034f32) list_double2_large_graphic_pane_vc_t1

0x402b,	// (0x0003526e) list_double_time_pane_vc_g1_ParamLimits

0x402b,	// (0x0003526e) list_double_time_pane_vc_g1

0x4037,	// (0x0003527a) list_double_time_pane_vc_g2_ParamLimits

0x4037,	// (0x0003527a) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x00040c7e) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x00040c7e) list_double_time_pane_vc_g

0x4043,	// (0x00035286) list_double_time_pane_vc_t1_ParamLimits

0x4043,	// (0x00035286) list_double_time_pane_vc_t1

0x406d,	// (0x000352b0) list_double_time_pane_vc_t2_ParamLimits

0x406d,	// (0x000352b0) list_double_time_pane_vc_t2

0x40b6,	// (0x000352f9) list_double_time_pane_vc_t3_ParamLimits

0x40b6,	// (0x000352f9) list_double_time_pane_vc_t3

0x40c8,	// (0x0003530b) list_double_time_pane_vc_t4_ParamLimits

0x40c8,	// (0x0003530b) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x00040c83) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x00040c83) list_double_time_pane_vc_t

0x3c95,	// (0x00034ed8) list_double_pane_vc_g1_ParamLimits

0x3c95,	// (0x00034ed8) list_double_pane_vc_g1

0x3ca1,	// (0x00034ee4) list_double_pane_vc_g2_ParamLimits

0x3ca1,	// (0x00034ee4) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00040a1d) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00040a1d) list_double_pane_vc_g

0x40ed,	// (0x00035330) list_double_pane_vc_t1_ParamLimits

0x40ed,	// (0x00035330) list_double_pane_vc_t1

0x4101,	// (0x00035344) list_double_pane_vc_t2_ParamLimits

0x4101,	// (0x00035344) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x00040c8c) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x00040c8c) list_double_pane_vc_t

0x3c95,	// (0x00034ed8) list_double_number_pane_vc_g1_ParamLimits

0x3c95,	// (0x00034ed8) list_double_number_pane_vc_g1

0x3ca1,	// (0x00034ee4) list_double_number_pane_vc_g2_ParamLimits

0x3ca1,	// (0x00034ee4) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00040a1d) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00040a1d) list_double_number_pane_vc_g

0x4117,	// (0x0003535a) list_double_number_pane_vc_t1_ParamLimits

0x4117,	// (0x0003535a) list_double_number_pane_vc_t1

0x412b,	// (0x0003536e) list_double_number_pane_vc_t2_ParamLimits

0x412b,	// (0x0003536e) list_double_number_pane_vc_t2

0x413f,	// (0x00035382) list_double_number_pane_vc_t3_ParamLimits

0x413f,	// (0x00035382) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x00040c91) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x00040c91) list_double_number_pane_vc_t

0x4155,	// (0x00035398) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4155,	// (0x00035398) list_double_large_graphic_pane_vc_g1

0x417d,	// (0x000353c0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x417d,	// (0x000353c0) list_double_large_graphic_pane_vc_g2

0x4191,	// (0x000353d4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4191,	// (0x000353d4) list_double_large_graphic_pane_vc_g3

0x41a0,	// (0x000353e3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x41a0,	// (0x000353e3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x00040c98) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x00040c98) list_double_large_graphic_pane_vc_g

0x41b0,	// (0x000353f3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x41b0,	// (0x000353f3) list_double_large_graphic_pane_vc_t1

0x41d2,	// (0x00035415) list_double_large_graphic_pane_vc_t2_ParamLimits

0x41d2,	// (0x00035415) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00040ca1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00040ca1) list_double_large_graphic_pane_vc_t

0x3c95,	// (0x00034ed8) list_double_heading_pane_vc_g1_ParamLimits

0x3c95,	// (0x00034ed8) list_double_heading_pane_vc_g1

0x3ca1,	// (0x00034ee4) list_double_heading_pane_vc_g2_ParamLimits

0x3ca1,	// (0x00034ee4) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00040a1d) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00040a1d) list_double_heading_pane_vc_g

0x41f2,	// (0x00035435) list_double_heading_pane_vc_t1_ParamLimits

0x41f2,	// (0x00035435) list_double_heading_pane_vc_t1

0x3eaf,	// (0x000350f2) list_double_heading_pane_vc_t2_ParamLimits

0x3eaf,	// (0x000350f2) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x00040ca6) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00040ca6) list_double_heading_pane_vc_t

0x4204,	// (0x00035447) list_double_graphic_pane_vc_g1_ParamLimits

0x4204,	// (0x00035447) list_double_graphic_pane_vc_g1

0x4217,	// (0x0003545a) list_double_graphic_pane_vc_g2_ParamLimits

0x4217,	// (0x0003545a) list_double_graphic_pane_vc_g2

0x3c95,	// (0x00034ed8) list_double_graphic_pane_vc_g3_ParamLimits

0x3c95,	// (0x00034ed8) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x00040cab) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00040cab) list_double_graphic_pane_vc_g

0x4234,	// (0x00035477) list_double_graphic_pane_vc_t1_ParamLimits

0x4234,	// (0x00035477) list_double_graphic_pane_vc_t1

0x425e,	// (0x000354a1) list_double_graphic_pane_vc_t2_ParamLimits

0x425e,	// (0x000354a1) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00040cb4) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00040cb4) list_double_graphic_pane_vc_t

0x5477,	// (0x000366ba) aid_size_cell_fastswap

0x547f,	// (0x000366c2) aid_size_cell_touch_ParamLimits

0x547f,	// (0x000366c2) aid_size_cell_touch

0x56ea,	// (0x0003692d) popup_fast_swap_wide_window_ParamLimits

0x56ea,	// (0x0003692d) popup_fast_swap_wide_window

0x5808,	// (0x00036a4b) touch_pane_ParamLimits

0x5808,	// (0x00036a4b) touch_pane

0x1dc0,	// (0x00033003) button_value_adjust_pane_cp2

0x3d28,	// (0x00034f6b) button_value_adjust_pane_cp4

0x3d30,	// (0x00034f73) form_field_data_pane_cp2

0x6056,	// (0x00037299) form_field_data_wide_pane_cp2

0x2126,	// (0x00033369) bg_scroll_pane_ParamLimits

0x644e,	// (0x00037691) scroll_handle_pane_ParamLimits

0x6462,	// (0x000376a5) scroll_sc2_down_pane_ParamLimits

0x6462,	// (0x000376a5) scroll_sc2_down_pane

0x2157,	// (0x0003339a) scroll_sc2_up_pane_ParamLimits

0x2157,	// (0x0003339a) scroll_sc2_up_pane

0xb2e0,	// (0x0003c523) grid_wheel_folder_pane_g1_ParamLimits

0xb2e0,	// (0x0003c523) grid_wheel_folder_pane_g1

0x67f4,	// (0x00037a37) clock_nsta_pane_cp2_ParamLimits

0x67f4,	// (0x00037a37) clock_nsta_pane_cp2

0x620c,	// (0x0003744f) listscroll_midp_pane_ParamLimits

0x6930,	// (0x00037b73) midp_canvas_pane

0x6e0d,	// (0x00038050) nsta_clock_indic_pane

0x6e63,	// (0x000380a6) listscroll_form_pane_vc

0x6e87,	// (0x000380ca) listscroll_set_pane_vc_ParamLimits

0x6e87,	// (0x000380ca) listscroll_set_pane_vc

0x8c7e,	// (0x00039ec1) clock_nsta_pane

0x8cfb,	// (0x00039f3e) indicator_nsta_pane

0x8ff3,	// (0x0003a236) bg_popup_sub_pane_cp2_ParamLimits

0x9007,	// (0x0003a24a) find_pane_cp2_ParamLimits

0x9007,	// (0x0003a24a) find_pane_cp2

0x901d,	// (0x0003a260) grid_toobar_pane_ParamLimits

0x90fd,	// (0x0003a340) list_form_gen_pane_vc_ParamLimits

0x90fd,	// (0x0003a340) list_form_gen_pane_vc

0x9113,	// (0x0003a356) scroll_pane_cp8_vc_ParamLimits

0x9113,	// (0x0003a356) scroll_pane_cp8_vc

0x918f,	// (0x0003a3d2) data_form_wide_pane_vc_ParamLimits

0x918f,	// (0x0003a3d2) data_form_wide_pane_vc

0x919b,	// (0x0003a3de) form_field_data_wide_pane_vc_g1

0x91a3,	// (0x0003a3e6) form_field_data_wide_pane_vc_t1_ParamLimits

0x91a3,	// (0x0003a3e6) form_field_data_wide_pane_vc_t1

0x1dd4,	// (0x00033017) input_focus_pane_cp6_vc_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_cp6_vc

0x94a5,	// (0x0003a6e8) list_midp_pane_ParamLimits

0x94b1,	// (0x0003a6f4) scroll_pane_cp16_ParamLimits

0x94b1,	// (0x0003a6f4) scroll_pane_cp16

0x94ff,	// (0x0003a742) button_value_adjust_pane_ParamLimits

0x94ff,	// (0x0003a742) button_value_adjust_pane

0xa490,	// (0x0003b6d3) button_value_adjust_pane_cp6_ParamLimits

0xa490,	// (0x0003b6d3) button_value_adjust_pane_cp6

0xa5de,	// (0x0003b821) settings_code_pane_cp_ParamLimits

0xa5de,	// (0x0003b821) settings_code_pane_cp

0xe970,	// (0x0003fbb3) cell_touch_pane_g1

0xe970,	// (0x0003fbb3) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00040941) cell_touch_pane_g

0xabd9,	// (0x0003be1c) cell_touch_pane_cp_ParamLimits

0xabd9,	// (0x0003be1c) cell_touch_pane_cp

0xabe9,	// (0x0003be2c) cell_touch_pane_ParamLimits

0xabe9,	// (0x0003be2c) cell_touch_pane

0xe970,	// (0x0003fbb3) scroll_sc2_down_pane_g1

0xe970,	// (0x0003fbb3) scroll_sc2_up_pane_g1

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp4_vc

0xabfa,	// (0x0003be3d) list_set_graphic_pane_vc_g1_ParamLimits

0xabfa,	// (0x0003be3d) list_set_graphic_pane_vc_g1

0x272d,	// (0x00033970) list_set_graphic_pane_vc_g2_ParamLimits

0x272d,	// (0x00033970) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00040c3d) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00040c3d) list_set_graphic_pane_vc_g

0xac06,	// (0x0003be49) text_primary_small_cp13_vc_ParamLimits

0xac06,	// (0x0003be49) text_primary_small_cp13_vc

0xac1e,	// (0x0003be61) list_set_graphic_pane_vc_ParamLimits

0xac1e,	// (0x0003be61) list_set_graphic_pane_vc

0xe97a,	// (0x0003fbbd) input_focus_pane_cp2_vc

0xe970,	// (0x0003fbb3) setting_code_pane_vc_g1

0xe9eb,	// (0x0003fc2e) setting_code_pane_vc_t1

0xac33,	// (0x0003be76) set_text_pane_vc_t1_ParamLimits

0xac33,	// (0x0003be76) set_text_pane_vc_t1

0xe97a,	// (0x0003fbbd) input_focus_pane_cp1_vc

0xac51,	// (0x0003be94) list_set_text_pane_vc

0xe970,	// (0x0003fbb3) setting_text_pane_vc_g1

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp2_vc

0xe9e2,	// (0x0003fc25) setting_slider_graphic_pane_vc_g1

0xac5b,	// (0x0003be9e) setting_slider_graphic_pane_vc_t1

0xac6d,	// (0x0003beb0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00040c42) setting_slider_graphic_pane_vc_t

0xac7f,	// (0x0003bec2) slider_set_pane_cp_vc

0xac89,	// (0x0003becc) slider_set_pane_vc_g1

0xac92,	// (0x0003bed5) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00040c47) slider_set_pane_vc_g

0x1e2f,	// (0x00033072) set_opt_bg_pane_g1_copy1

0x1e37,	// (0x0003307a) set_opt_bg_pane_g2_copy1

0xacbe,	// (0x0003bf01) set_opt_bg_pane_g3_copy1

0x1e47,	// (0x0003308a) set_opt_bg_pane_g4_copy1

0x1e4f,	// (0x00033092) set_opt_bg_pane_g5_copy1

0x1e57,	// (0x0003309a) set_opt_bg_pane_g6_copy1

0xacc8,	// (0x0003bf0b) set_opt_bg_pane_g7_copy1

0xacd2,	// (0x0003bf15) set_opt_bg_pane_g8_copy1

0xacdc,	// (0x0003bf1f) set_opt_bg_pane_g9_copy1

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp_vc

0xace6,	// (0x0003bf29) setting_slider_pane_vc_t1

0xacf5,	// (0x0003bf38) setting_slider_pane_vc_t2

0xad07,	// (0x0003bf4a) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00040c56) setting_slider_pane_vc_t

0xad19,	// (0x0003bf5c) slider_set_pane_vc

0x73a8,	// (0x000385eb) volume_set_pane_vc_g1

0x73b1,	// (0x000385f4) volume_set_pane_vc_g2

0x73ba,	// (0x000385fd) volume_set_pane_vc_g3

0x73c3,	// (0x00038606) volume_set_pane_vc_g4

0x73cc,	// (0x0003860f) volume_set_pane_vc_g5

0x73d5,	// (0x00038618) volume_set_pane_vc_g6

0x73de,	// (0x00038621) volume_set_pane_vc_g7

0x73e7,	// (0x0003862a) volume_set_pane_vc_g8

0x73f0,	// (0x00038633) volume_set_pane_vc_g9

0x73f9,	// (0x0003863c) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x00040af4) volume_set_pane_vc_g

0xad23,	// (0x0003bf66) volume_set_pane_vc

0xad2d,	// (0x0003bf70) button_value_adjust_pane_cp1_vc

0xad37,	// (0x0003bf7a) list_highlight_pane_cp2_vc

0xad40,	// (0x0003bf83) list_set_pane_vc_ParamLimits

0xad40,	// (0x0003bf83) list_set_pane_vc

0xadb0,	// (0x0003bff3) main_pane_set_vc_t1_ParamLimits

0xadb0,	// (0x0003bff3) main_pane_set_vc_t1

0xadc5,	// (0x0003c008) main_pane_set_vc_t2_ParamLimits

0xadc5,	// (0x0003c008) main_pane_set_vc_t2

0xadd7,	// (0x0003c01a) main_pane_set_vc_t3_ParamLimits

0xadd7,	// (0x0003c01a) main_pane_set_vc_t3

0xadeb,	// (0x0003c02e) main_pane_set_vc_t4_ParamLimits

0xadeb,	// (0x0003c02e) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x00040c5d) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x00040c5d) main_pane_set_vc_t

0xadff,	// (0x0003c042) setting_code_pane_vc_ParamLimits

0xadff,	// (0x0003c042) setting_code_pane_vc

0xae10,	// (0x0003c053) setting_slider_graphic_pane_vc

0xae10,	// (0x0003c053) setting_slider_pane_vc

0xae10,	// (0x0003c053) setting_text_pane_vc

0xae10,	// (0x0003c053) setting_volume_pane_vc

0xae1a,	// (0x0003c05d) scroll_pane_cp121_vc

0x1dae,	// (0x00032ff1) set_content_pane_vc

0xae22,	// (0x0003c065) button_value_adjust_pane_g1

0xae2b,	// (0x0003c06e) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x00040cb9) button_value_adjust_pane_g

0xae34,	// (0x0003c077) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae34,	// (0x0003c077) form_field_slider_wide_pane_vc_t1

0xae46,	// (0x0003c089) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae46,	// (0x0003c089) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x00040cbe) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00040cbe) form_field_slider_wide_pane_vc_t

0xeb07,	// (0x0003fd4a) input_focus_pane_cp10_vc_ParamLimits

0xeb07,	// (0x0003fd4a) input_focus_pane_cp10_vc

0xae72,	// (0x0003c0b5) slider_cont_pane_cp1_vc_ParamLimits

0xae72,	// (0x0003c0b5) slider_cont_pane_cp1_vc

0xae84,	// (0x0003c0c7) slider_form_pane_g1_cp2

0xac92,	// (0x0003bed5) slider_form_pane_g2_cp2

0xaeb1,	// (0x0003c0f4) form_field_slider_pane_vc_t3

0xaebf,	// (0x0003c102) form_field_slider_pane_vc_t4

0xaecd,	// (0x0003c110) slider_form_pane_vc_ParamLimits

0xaecd,	// (0x0003c110) slider_form_pane_vc

0xaeda,	// (0x0003c11d) form_field_slider_pane_vc_t1_ParamLimits

0xaeda,	// (0x0003c11d) form_field_slider_pane_vc_t1

0xae46,	// (0x0003c089) form_field_slider_pane_vc_t2_ParamLimits

0xae46,	// (0x0003c089) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x00040cd0) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x00040cd0) form_field_slider_pane_vc_t

0xeb07,	// (0x0003fd4a) input_focus_pane_cp9_vc_ParamLimits

0xeb07,	// (0x0003fd4a) input_focus_pane_cp9_vc

0xaef0,	// (0x0003c133) slider_cont_pane_vc_ParamLimits

0xaef0,	// (0x0003c133) slider_cont_pane_vc

0xaf04,	// (0x0003c147) list_form_graphic_pane_cp_vc_ParamLimits

0xaf04,	// (0x0003c147) list_form_graphic_pane_cp_vc

0x919b,	// (0x0003a3de) form_field_popup_wide_pane_vc_g1

0xaf19,	// (0x0003c15c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf19,	// (0x0003c15c) form_field_popup_wide_pane_vc_t1

0x1dd4,	// (0x00033017) input_focus_pane_cp8_vc_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_cp8_vc

0xaf5e,	// (0x0003c1a1) list_form_wide_pane_vc_ParamLimits

0xaf5e,	// (0x0003c1a1) list_form_wide_pane_vc

0xaf6a,	// (0x0003c1ad) list_form_graphic_pane_vc_g1

0xaf72,	// (0x0003c1b5) list_form_graphic_pane_vc_t1_ParamLimits

0xaf72,	// (0x0003c1b5) list_form_graphic_pane_vc_t1

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp5_vc_ParamLimits

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp5_vc

0xaf8e,	// (0x0003c1d1) list_form_graphic_pane_vc_ParamLimits

0xaf8e,	// (0x0003c1d1) list_form_graphic_pane_vc

0x919b,	// (0x0003a3de) form_field_popup_pane_vc_g1

0xafa4,	// (0x0003c1e7) form_field_popup_pane_vc_t1_ParamLimits

0xafa4,	// (0x0003c1e7) form_field_popup_pane_vc_t1

0x1dd4,	// (0x00033017) input_focus_pane_cp7_vc_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_cp7_vc

0xafbb,	// (0x0003c1fe) list_form_pane_vc_ParamLimits

0xafbb,	// (0x0003c1fe) list_form_pane_vc

0xafc7,	// (0x0003c20a) data_form_pane_vc_t1_ParamLimits

0xafc7,	// (0x0003c20a) data_form_pane_vc_t1

0x1e2f,	// (0x00033072) input_focus_pane_vc_g1

0x1e37,	// (0x0003307a) input_focus_pane_vc_g2

0x1e3f,	// (0x00033082) input_focus_pane_vc_g3

0x1e47,	// (0x0003308a) input_focus_pane_vc_g4

0x1e4f,	// (0x00033092) input_focus_pane_vc_g5

0x1e57,	// (0x0003309a) input_focus_pane_vc_g6

0x1e5f,	// (0x000330a2) input_focus_pane_vc_g7

0x1e67,	// (0x000330aa) input_focus_pane_vc_g8

0x1e6f,	// (0x000330b2) input_focus_pane_vc_g9

0xe970,	// (0x0003fbb3) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x000408ca) input_focus_pane_vc_g

0x918f,	// (0x0003a3d2) data_form_pane_vc_ParamLimits

0x918f,	// (0x0003a3d2) data_form_pane_vc

0x919b,	// (0x0003a3de) form_field_data_pane_vc_g1

0xafe4,	// (0x0003c227) form_field_data_pane_vc_t1_ParamLimits

0xafe4,	// (0x0003c227) form_field_data_pane_vc_t1

0x1dd4,	// (0x00033017) input_focus_pane_vc_ParamLimits

0x1dd4,	// (0x00033017) input_focus_pane_vc

0xaffe,	// (0x0003c241) button_value_adjust_pane_cp3_vc

0xb006,	// (0x0003c249) button_value_adjust_pane_cp5_vc

0xb00e,	// (0x0003c251) form_field_data_pane_vc_ParamLimits

0xb00e,	// (0x0003c251) form_field_data_pane_vc

0xb029,	// (0x0003c26c) form_field_data_pane_vc_cp2

0xb031,	// (0x0003c274) form_field_data_wide_pane_vc_ParamLimits

0xb031,	// (0x0003c274) form_field_data_wide_pane_vc

0xb04b,	// (0x0003c28e) form_field_data_wide_pane_vc_cp2

0xb053,	// (0x0003c296) form_field_popup_pane_vc_ParamLimits

0xb053,	// (0x0003c296) form_field_popup_pane_vc

0xb06e,	// (0x0003c2b1) form_field_popup_wide_pane_vc_ParamLimits

0xb06e,	// (0x0003c2b1) form_field_popup_wide_pane_vc

0xb088,	// (0x0003c2cb) form_field_slider_pane_vc_ParamLimits

0xb088,	// (0x0003c2cb) form_field_slider_pane_vc

0xb09b,	// (0x0003c2de) form_field_slider_wide_pane_vc_ParamLimits

0xb09b,	// (0x0003c2de) form_field_slider_wide_pane_vc

0xb0ae,	// (0x0003c2f1) grid_touch_1_pane_ParamLimits

0xb0ae,	// (0x0003c2f1) grid_touch_1_pane

0xb0ba,	// (0x0003c2fd) grid_touch_2_pane_ParamLimits

0xb0ba,	// (0x0003c2fd) grid_touch_2_pane

0x6cdc,	// (0x00037f1f) touch_pane_g1_ParamLimits

0x6cdc,	// (0x00037f1f) touch_pane_g1

0xb0d4,	// (0x0003c317) cell_app_pane_cp_wide_ParamLimits

0xb0d4,	// (0x0003c317) cell_app_pane_cp_wide

0xb0e5,	// (0x0003c328) grid_popup_fast_wide_pane_ParamLimits

0xb0e5,	// (0x0003c328) grid_popup_fast_wide_pane

0xb0f9,	// (0x0003c33c) scroll_pane_cp19_ParamLimits

0xb0f9,	// (0x0003c33c) scroll_pane_cp19

0xe97a,	// (0x0003fbbd) bg_popup_window_pane_cp20

0xb10d,	// (0x0003c350) listscroll_popup_fast_wide_pane

0xe9d4,	// (0x0003fc17) grid_indicator_nsta_pane

0xb115,	// (0x0003c358) clock_nsta_pane_g1

0xb11e,	// (0x0003c361) clock_nsta_pane_t1

0xb13a,	// (0x0003c37d) cell_indicator_nsta_pane_ParamLimits

0xb13a,	// (0x0003c37d) cell_indicator_nsta_pane

0xb16c,	// (0x0003c3af) cell_indicator_nsta_pane_g1

0xb17a,	// (0x0003c3bd) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x00040ce1) cell_indicator_nsta_pane_g

0xb190,	// (0x0003c3d3) clock_nsta_pane_cp

0xb198,	// (0x0003c3db) indicator_nsta_pane_cp

0xb1a1,	// (0x0003c3e4) nsta_clock_indic_pane_g1

0xea10,	// (0x0003fc53) grid_indicator_pane

0x2249,	// (0x0003348c) scroll_pane_cp29

0x6740,	// (0x00037983) indicator_nsta_pane_cp2_ParamLimits

0x6740,	// (0x00037983) indicator_nsta_pane_cp2

0xe9d4,	// (0x0003fc17) main_apps_wheel_pane

0x9382,	// (0x0003a5c5) form_midp_field_text_pane_ParamLimits

0x94d1,	// (0x0003a714) scroll_bar_cp050_ParamLimits

0xb20a,	// (0x0003c44d) cell_indicator_pane_ParamLimits

0xb20a,	// (0x0003c44d) cell_indicator_pane

0xb222,	// (0x0003c465) cell_indicator_pane_g1

0xb22c,	// (0x0003c46f) grid_wheel_folder_pane_ParamLimits

0xb22c,	// (0x0003c46f) grid_wheel_folder_pane

0xb240,	// (0x0003c483) list_wheel_apps_pane_ParamLimits

0xb240,	// (0x0003c483) list_wheel_apps_pane

0xb253,	// (0x0003c496) main_apps_wheel_pane_g1_ParamLimits

0xb253,	// (0x0003c496) main_apps_wheel_pane_g1

0xb26f,	// (0x0003c4b2) main_apps_wheel_pane_g2_ParamLimits

0xb26f,	// (0x0003c4b2) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x00040cfd) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x00040cfd) main_apps_wheel_pane_g

0xb28b,	// (0x0003c4ce) main_apps_wheel_pane_t1_ParamLimits

0xb28b,	// (0x0003c4ce) main_apps_wheel_pane_t1

0xb2b4,	// (0x0003c4f7) list_wheel_apps_pane_g1

0xb2bc,	// (0x0003c4ff) list_wheel_apps_pane_g2

0xb2c4,	// (0x0003c507) list_wheel_apps_pane_g3

0xb2cc,	// (0x0003c50f) list_wheel_apps_pane_g4

0xb2d6,	// (0x0003c519) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x00040d02) list_wheel_apps_pane_g

0x25c9,	// (0x0003380c) navi_icon_text_pane

0x8bab,	// (0x00039dee) aid_fill_nsta

0xb2f7,	// (0x0003c53a) navi_icon_text_pane_g1

0xb303,	// (0x0003c546) navi_icon_text_pane_t1

0x6889,	// (0x00037acc) list_set_graphic_pane_t1_ParamLimits

0x6889,	// (0x00037acc) list_set_graphic_pane_t1

0x9c22,	// (0x0003ae65) popup_midp_note_alarm_window_t6_ParamLimits

0x9c22,	// (0x0003ae65) popup_midp_note_alarm_window_t6

0x9c34,	// (0x0003ae77) popup_midp_note_alarm_window_t7_ParamLimits

0x9c34,	// (0x0003ae77) popup_midp_note_alarm_window_t7

0x9c46,	// (0x0003ae89) popup_midp_note_alarm_window_t8_ParamLimits

0x9c46,	// (0x0003ae89) popup_midp_note_alarm_window_t8

0x9c58,	// (0x0003ae9b) popup_midp_note_alarm_window_t9_ParamLimits

0x9c58,	// (0x0003ae9b) popup_midp_note_alarm_window_t9

0x9c6a,	// (0x0003aead) popup_midp_note_alarm_window_t10_ParamLimits

0x9c6a,	// (0x0003aead) popup_midp_note_alarm_window_t10

0x9c7c,	// (0x0003aebf) popup_midp_note_alarm_window_t11_ParamLimits

0x9c7c,	// (0x0003aebf) popup_midp_note_alarm_window_t11

0x9c8e,	// (0x0003aed1) scroll_pane_cp17_ParamLimits

0x9c8e,	// (0x0003aed1) scroll_pane_cp17

0x73a8,	// (0x000385eb) volume_small_pane_cp_g1

0x776a,	// (0x000389ad) volume_small_pane_cp_g2

0x7773,	// (0x000389b6) volume_small_pane_cp_g3

0x777c,	// (0x000389bf) volume_small_pane_cp_g4

0x7785,	// (0x000389c8) volume_small_pane_cp_g5

0x778e,	// (0x000389d1) volume_small_pane_cp_g6

0x7797,	// (0x000389da) volume_small_pane_cp_g7

0x77a0,	// (0x000389e3) volume_small_pane_cp_g8

0x77a9,	// (0x000389ec) volume_small_pane_cp_g9

0x77b2,	// (0x000389f5) volume_small_pane_cp_g10

0x69f9,	// (0x00037c3c) midp_ticker_pane_g1_ParamLimits

0x6a05,	// (0x00037c48) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00040996) midp_ticker_pane_g_ParamLimits

0x6a11,	// (0x00037c54) midp_ticker_pane_t1_ParamLimits

0x8bc1,	// (0x00039e04) aid_fill_nsta_2

0x94bd,	// (0x0003a700) list_form2_midp_pane

0xa625,	// (0x0003b868) midp_editing_number_pane_ParamLimits

0xa634,	// (0x0003b877) midp_ticker_pane_ParamLimits

0xb315,	// (0x0003c558) form2_midp_field_pane

0xb339,	// (0x0003c57c) scroll_pane_cp51

0xb359,	// (0x0003c59c) form2_midp_button_pane_ParamLimits

0xb359,	// (0x0003c59c) form2_midp_button_pane

0xb36b,	// (0x0003c5ae) form2_midp_content_pane_ParamLimits

0xb36b,	// (0x0003c5ae) form2_midp_content_pane

0xb385,	// (0x0003c5c8) form2_midp_field_choice_group_pane

0xb38d,	// (0x0003c5d0) form2_midp_field_pane_g1

0xb395,	// (0x0003c5d8) form2_midp_field_pane_g2

0xb39d,	// (0x0003c5e0) form2_midp_field_pane_g3

0xb3a5,	// (0x0003c5e8) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x00040d27) form2_midp_field_pane_g

0xb3ad,	// (0x0003c5f0) form2_midp_gauge_slider_pane

0xb3b5,	// (0x0003c5f8) form2_midp_gauge_wait_pane

0xb3bd,	// (0x0003c600) form2_midp_image_pane_ParamLimits

0xb3bd,	// (0x0003c600) form2_midp_image_pane

0xb3d8,	// (0x0003c61b) form2_midp_label_pane_ParamLimits

0xb3d8,	// (0x0003c61b) form2_midp_label_pane

0xb3f7,	// (0x0003c63a) form2_midp_label_pane_cp_ParamLimits

0xb3f7,	// (0x0003c63a) form2_midp_label_pane_cp

0xb418,	// (0x0003c65b) form2_midp_string_pane_ParamLimits

0xb418,	// (0x0003c65b) form2_midp_string_pane

0x427c,	// (0x000354bf) form2_midp_text_pane_ParamLimits

0x427c,	// (0x000354bf) form2_midp_text_pane

0xb42a,	// (0x0003c66d) form2_midp_time_pane

0xb43a,	// (0x0003c67d) input_focus_pane_cp51_ParamLimits

0xb43a,	// (0x0003c67d) input_focus_pane_cp51

0xb452,	// (0x0003c695) form2_midp_label_pane_t1_ParamLimits

0xb452,	// (0x0003c695) form2_midp_label_pane_t1

0x429d,	// (0x000354e0) form2_mdip_text_pane_t1_ParamLimits

0x429d,	// (0x000354e0) form2_mdip_text_pane_t1

0x42c1,	// (0x00035504) form2_midp_time_pane_t1

0xb4a0,	// (0x0003c6e3) form2_midp_gauge_slider_pane_t1

0xb4b2,	// (0x0003c6f5) form2_midp_gauge_slider_pane_t2

0xb4c4,	// (0x0003c707) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x00040d30) form2_midp_gauge_slider_pane_t

0xb4d6,	// (0x0003c719) form2_midp_slider_pane

0xb4e2,	// (0x0003c725) form2_midp_gauge_wait_pane_t1

0xb4f0,	// (0x0003c733) form2_midp_wait_pane_ParamLimits

0xb4f0,	// (0x0003c733) form2_midp_wait_pane

0x91e2,	// (0x0003a425) list_single_2graphic_pane_cp4_ParamLimits

0x91e2,	// (0x0003a425) list_single_2graphic_pane_cp4

0xb51b,	// (0x0003c75e) list_single_midp_graphic_pane_cp_ParamLimits

0xb51b,	// (0x0003c75e) list_single_midp_graphic_pane_cp

0xe97a,	// (0x0003fbbd) list_highlight_pane_cp20

0xb53f,	// (0x0003c782) list_single_2graphic_pane_g1_cp4

0xaadc,	// (0x0003bd1f) list_single_2graphic_pane_g2_cp4

0xb547,	// (0x0003c78a) list_single_2graphic_pane_t1_cp4

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp21

0xb556,	// (0x0003c799) list_single_midp_graphic_pane_g4_cp

0xb565,	// (0x0003c7a8) list_single_midp_graphic_pane_t1_cp

0xb57a,	// (0x0003c7bd) form2_mdip_string_pane_t1_ParamLimits

0xb57a,	// (0x0003c7bd) form2_mdip_string_pane_t1

0xe97a,	// (0x0003fbbd) bg_wml_button_pane_cp2

0xe970,	// (0x0003fbb3) form2_midp_image_pane_g1

0x3d05,	// (0x00034f48) list_double_large_graphic_pane_g5_ParamLimits

0x3d05,	// (0x00034f48) list_double_large_graphic_pane_g5

0x620c,	// (0x0003744f) midp_form_pane_ParamLimits

0xe9d4,	// (0x0003fc17) main_apps_wheel_pane_ParamLimits

0x8955,	// (0x00039b98) popup_preview_window_ParamLimits

0x8955,	// (0x00039b98) popup_preview_window

0x8b3c,	// (0x00039d7f) popup_touch_info_window_ParamLimits

0x8b3c,	// (0x00039d7f) popup_touch_info_window

0x8b5e,	// (0x00039da1) popup_touch_menu_window_ParamLimits

0x8b5e,	// (0x00039da1) popup_touch_menu_window

0xe966,	// (0x0003fba9) bg_popup_sub_pane_cp6

0xb61f,	// (0x0003c862) list_touch_menu_pane

0xb627,	// (0x0003c86a) list_single_touch_menu_pane_ParamLimits

0xb627,	// (0x0003c86a) list_single_touch_menu_pane

0xb63f,	// (0x0003c882) list_single_touch_menu_pane_t1

0xe9d4,	// (0x0003fc17) bg_popup_sub_pane_cp7_ParamLimits

0xe9d4,	// (0x0003fc17) bg_popup_sub_pane_cp7

0xb64d,	// (0x0003c890) heading_sub_pane

0xb655,	// (0x0003c898) list_touch_info_pane_ParamLimits

0xb655,	// (0x0003c898) list_touch_info_pane

0xb664,	// (0x0003c8a7) list_single_touch_info_pane_ParamLimits

0xb664,	// (0x0003c8a7) list_single_touch_info_pane

0xb676,	// (0x0003c8b9) list_single_touch_info_pane_t1

0xb684,	// (0x0003c8c7) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x00040d3e) list_single_touch_info_pane_t

0x2725,	// (0x00033968) bg_popup_heading_pane_cp

0xb692,	// (0x0003c8d5) heading_sub_pane_t1

0x9129,	// (0x0003a36c) bg_popup_preview_window_pane_cp_ParamLimits

0x9129,	// (0x0003a36c) bg_popup_preview_window_pane_cp

0xb64d,	// (0x0003c890) heading_preview_pane

0xb655,	// (0x0003c898) list_preview_pane_ParamLimits

0xb655,	// (0x0003c898) list_preview_pane

0xb6a0,	// (0x0003c8e3) popup_preview_window_g1

0xb664,	// (0x0003c8a7) list_single_preview_pane_ParamLimits

0xb664,	// (0x0003c8a7) list_single_preview_pane

0xb6a8,	// (0x0003c8eb) list_single_preview_pane_g1

0xb6b0,	// (0x0003c8f3) list_single_preview_pane_t1

0xb676,	// (0x0003c8b9) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x00040d43) list_single_preview_pane_t

0xb6be,	// (0x0003c901) bg_popup_heading_pane_cp2_ParamLimits

0xb6be,	// (0x0003c901) bg_popup_heading_pane_cp2

0xb6d4,	// (0x0003c917) heading_preview_pane_g1

0xb6dc,	// (0x0003c91f) heading_preview_pane_t1_ParamLimits

0xb6dc,	// (0x0003c91f) heading_preview_pane_t1

0xea27,	// (0x0003fc6a) soft_indicator_pane_t1_ParamLimits

0xf522,	// (0x00040765) scroll_pane_ParamLimits

0x214e,	// (0x00033391) scroll_sc2_left_pane

0x2145,	// (0x00033388) scroll_sc2_right_pane

0x216d,	// (0x000333b0) scroll_bg_pane_g1_ParamLimits

0x2182,	// (0x000333c5) scroll_bg_pane_g2_ParamLimits

0x219a,	// (0x000333dd) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00040921) scroll_bg_pane_g_ParamLimits

0x216d,	// (0x000333b0) scroll_handle_pane_g1_ParamLimits

0x21bc,	// (0x000333ff) scroll_handle_pane_g2_ParamLimits

0x219a,	// (0x000333dd) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00040928) scroll_handle_pane_g_ParamLimits

0x6ec1,	// (0x00038104) popup_choice_list_window_ParamLimits

0x6ec1,	// (0x00038104) popup_choice_list_window

0x8fff,	// (0x0003a242) choice_list_pane

0x9081,	// (0x0003a2c4) cell_toolbar_pane_t1

0x90a9,	// (0x0003a2ec) toolbar_button_pane_ParamLimits

0xa158,	// (0x0003b39b) ai_gene_pane_1_t2_ParamLimits

0xa158,	// (0x0003b39b) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00040b50) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00040b50) ai_gene_pane_1_t

0xb6f9,	// (0x0003c93c) scroll_sc2_left_pane_g1

0xb6f9,	// (0x0003c93c) scroll_sc2_right_pane_g1

0x6e99,	// (0x000380dc) bg_popup_sub_pane_cp10

0xb703,	// (0x0003c946) list_choice_list_pane

0xb71c,	// (0x0003c95f) list_single_choice_list_pane_ParamLimits

0xb71c,	// (0x0003c95f) list_single_choice_list_pane

0xb734,	// (0x0003c977) list_single_choice_list_pane_g1

0x1f25,	// (0x00033168) list_single_choice_list_pane_t1_ParamLimits

0x1f25,	// (0x00033168) list_single_choice_list_pane_t1

0xb73c,	// (0x0003c97f) choice_list_pane_g1

0xb744,	// (0x0003c987) choice_list_pane_t1

0xe966,	// (0x0003fba9) input_focus_pane_cp11

0x20a3,	// (0x000332e6) title_pane_stacon_g2_ParamLimits

0x20a3,	// (0x000332e6) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00040907) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00040907) title_pane_stacon_g

0x2725,	// (0x00033968) cursor_press_pane

0x6f7b,	// (0x000381be) popup_fep_hwr_window_ParamLimits

0x6f7b,	// (0x000381be) popup_fep_hwr_window

0x7005,	// (0x00038248) popup_fep_vkb_window_ParamLimits

0x7005,	// (0x00038248) popup_fep_vkb_window

0xb752,	// (0x0003c995) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x00040d6c) fep_vkb_side_pane_g_ParamLimits

0x77f4,	// (0x00038a37) fep_hwr_candidate_pane_ParamLimits

0x77f4,	// (0x00038a37) fep_hwr_candidate_pane

0x781e,	// (0x00038a61) fep_hwr_side_pane_ParamLimits

0x781e,	// (0x00038a61) fep_hwr_side_pane

0x7840,	// (0x00038a83) fep_hwr_top_pane_ParamLimits

0x7840,	// (0x00038a83) fep_hwr_top_pane

0x7858,	// (0x00038a9b) fep_hwr_write_pane_ParamLimits

0x7858,	// (0x00038a9b) fep_hwr_write_pane

0xfb29,	// (0x00040d6c) fep_vkb_side_pane_g

0xb75a,	// (0x0003c99d) fep_hwr_top_pane_g1

0xb76c,	// (0x0003c9af) fep_hwr_top_pane_g2

0x7892,	// (0x00038ad5) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x00040d48) fep_hwr_top_pane_g

0x78a7,	// (0x00038aea) fep_hwr_top_text_pane

0x22b6,	// (0x000334f9) fep_hwr_top_text_pane_g1

0xb7a2,	// (0x0003c9e5) fep_hwr_top_text_pane_t1

0x79b1,	// (0x00038bf4) fep_hwr_candidate_pane_g1

0xb9ed,	// (0x0003cc30) fep_vkb_keypad_pane_g3_ParamLimits

0xb9ed,	// (0x0003cc30) fep_vkb_keypad_pane_g3

0xba19,	// (0x0003cc5c) fep_vkb_keypad_pane_g4_ParamLimits

0xba19,	// (0x0003cc5c) fep_vkb_keypad_pane_g4

0xba90,	// (0x0003ccd3) fep_vkb_bottom_pane_g2_ParamLimits

0xba90,	// (0x0003ccd3) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x00040d73) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x00040d73) fep_vkb_bottom_pane_g

0xb6f9,	// (0x0003c93c) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x00040d7d) cell_vkb_side_pane_g

0xbb1b,	// (0x0003cd5e) cell_vkb_side_pane_t1

0xbb29,	// (0x0003cd6c) cell_vkb_side_pane_t1_copy1

0xb6f9,	// (0x0003c93c) bg_fep_vkb_candidate_pane_g2

0xbc6d,	// (0x0003ceb0) cell_vkb_candidate_pane_ParamLimits

0xb7b0,	// (0x0003c9f3) aid_size_cell_vkb_ParamLimits

0xb7b0,	// (0x0003c9f3) aid_size_cell_vkb

0xbc6d,	// (0x0003ceb0) cell_vkb_candidate_pane

0x79d8,	// (0x00038c1b) bg_popup_fep_shadow_pane_g1

0xb842,	// (0x0003ca85) fep_vkb_bottom_pane_ParamLimits

0xb842,	// (0x0003ca85) fep_vkb_bottom_pane

0xb87f,	// (0x0003cac2) fep_vkb_candidate_pane_ParamLimits

0xb87f,	// (0x0003cac2) fep_vkb_candidate_pane

0xb89b,	// (0x0003cade) fep_vkb_keypad_pane_ParamLimits

0xb89b,	// (0x0003cade) fep_vkb_keypad_pane

0xb8ce,	// (0x0003cb11) fep_vkb_side_pane_ParamLimits

0xb8ce,	// (0x0003cb11) fep_vkb_side_pane

0xb90a,	// (0x0003cb4d) fep_vkb_top_pane_ParamLimits

0xb90a,	// (0x0003cb4d) fep_vkb_top_pane

0xb946,	// (0x0003cb89) fep_vkb_top_pane_g1_ParamLimits

0xb946,	// (0x0003cb89) fep_vkb_top_pane_g1

0xb955,	// (0x0003cb98) fep_vkb_top_pane_g2_ParamLimits

0xb955,	// (0x0003cb98) fep_vkb_top_pane_g2

0xb964,	// (0x0003cba7) fep_vkb_top_pane_g3_ParamLimits

0xb964,	// (0x0003cba7) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x00040d63) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x00040d63) fep_vkb_top_pane_g

0xb982,	// (0x0003cbc5) fep_vkb_top_text_pane_ParamLimits

0xb982,	// (0x0003cbc5) fep_vkb_top_text_pane

0xb993,	// (0x0003cbd6) fep_vkb_side_pane_g1_ParamLimits

0xb993,	// (0x0003cbd6) fep_vkb_side_pane_g1

0xb9dc,	// (0x0003cc1f) grid_vkb_side_pane_ParamLimits

0xb9dc,	// (0x0003cc1f) grid_vkb_side_pane

0x79e0,	// (0x00038c23) bg_popup_fep_shadow_pane_g2

0x79e9,	// (0x00038c2c) bg_popup_fep_shadow_pane_g3

0x79f1,	// (0x00038c34) bg_popup_fep_shadow_pane_g4

0x79fa,	// (0x00038c3d) bg_popup_fep_shadow_pane_g5

0x7a04,	// (0x00038c47) bg_popup_fep_shadow_pane_g6

0x7a0c,	// (0x00038c4f) bg_popup_fep_shadow_pane_g7

0x1e47,	// (0x0003308a) bg_popup_fep_shadow_pane_g8

0xba3b,	// (0x0003cc7e) grid_vkb_keypad_number_pane_ParamLimits

0xba3b,	// (0x0003cc7e) grid_vkb_keypad_number_pane

0xba4f,	// (0x0003cc92) grid_vkb_keypad_pane_ParamLimits

0xba4f,	// (0x0003cc92) grid_vkb_keypad_pane

0xba75,	// (0x0003ccb8) fep_vkb_bottom_pane_g1_ParamLimits

0xba75,	// (0x0003ccb8) fep_vkb_bottom_pane_g1

0xba9e,	// (0x0003cce1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xba9e,	// (0x0003cce1) grid_vkb_keypad_bottom_left_pane

0xbab3,	// (0x0003ccf6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbab3,	// (0x0003ccf6) grid_vkb_keypad_bottom_right_pane

0xbac8,	// (0x0003cd0b) fep_vkb_top_text_pane_g1

0xbae3,	// (0x0003cd26) fep_vkb_top_text_pane_t1

0xbaf8,	// (0x0003cd3b) cell_vkb_side_pane_ParamLimits

0xbaf8,	// (0x0003cd3b) cell_vkb_side_pane

0xb6f9,	// (0x0003c93c) cell_vkb_side_pane_g1

0xbb37,	// (0x0003cd7a) cell_vkb_keypad_pane_ParamLimits

0xbb37,	// (0x0003cd7a) cell_vkb_keypad_pane

0xbbc4,	// (0x0003ce07) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x00040d90) bg_popup_fep_shadow_pane_g

0x7a1e,	// (0x00038c61) cell_hwr_side_pane_g1

0x7a1e,	// (0x00038c61) cell_hwr_side_pane_g2

0xbbce,	// (0x0003ce11) cell_vkb_keypad_pane_t1

0xbbdc,	// (0x0003ce1f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbbdc,	// (0x0003ce1f) cell_vkb_keypad_bottom_left_pane

0xbbf9,	// (0x0003ce3c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbbf9,	// (0x0003ce3c) cell_vkb_keypad_bottom_right_pane

0xb6f9,	// (0x0003c93c) cell_vkb_keypad_bottom_left_pane_g1

0xb6f9,	// (0x0003c93c) cell_vkb_keypad_bottom_right_pane_g1

0xbc32,	// (0x0003ce75) cell_vkb_keypad_number_pane_ParamLimits

0xbc32,	// (0x0003ce75) cell_vkb_keypad_number_pane

0xbc51,	// (0x0003ce94) cell_vkb_keypad_number_pane_g1

0xbc5b,	// (0x0003ce9e) cell_vkb_keypad_number_pane_g2

0xbc64,	// (0x0003cea7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x00040d82) cell_vkb_keypad_number_pane_g

0xbbce,	// (0x0003ce11) cell_vkb_keypad_number_pane_t1

0xbc8e,	// (0x0003ced1) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x00040da3) cell_hwr_side_pane_g

0xbca7,	// (0x0003ceea) cell_hwr_side_pane_t1

0x7a28,	// (0x00038c6b) cell_hwr_side_pane_t1_copy1

0x7a36,	// (0x00038c79) cell_hwr_candidate_pane_g1

0x7a65,	// (0x00038ca8) cell_hwr_candidate_pane_t1

0xb6f9,	// (0x0003c93c) cell_vkb_candidate_pane_g2

0xbceb,	// (0x0003cf2e) cell_vkb_candidate_pane_t1

0x77bb,	// (0x000389fe) bg_popup_fep_shadow_pane_ParamLimits

0x77bb,	// (0x000389fe) bg_popup_fep_shadow_pane

0x7872,	// (0x00038ab5) bg_fep_hwr_top_pane_g4

0xb77e,	// (0x0003c9c1) bg_hwr_side_pane_g1_ParamLimits

0xb77e,	// (0x0003c9c1) bg_hwr_side_pane_g1

0x78e5,	// (0x00038b28) cell_hwr_side_pane_ParamLimits

0x78e5,	// (0x00038b28) cell_hwr_side_pane

0x7922,	// (0x00038b65) fep_hwr_write_pane_g1_ParamLimits

0x7922,	// (0x00038b65) fep_hwr_write_pane_g1

0x792f,	// (0x00038b72) fep_hwr_write_pane_g2_ParamLimits

0x792f,	// (0x00038b72) fep_hwr_write_pane_g2

0x793c,	// (0x00038b7f) fep_hwr_write_pane_g3_ParamLimits

0x793c,	// (0x00038b7f) fep_hwr_write_pane_g3

0x794a,	// (0x00038b8d) fep_hwr_write_pane_g4_ParamLimits

0x794a,	// (0x00038b8d) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x00040d4f) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x00040d4f) fep_hwr_write_pane_g

0x7872,	// (0x00038ab5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7872,	// (0x00038ab5) bg_fep_hwr_candidate_pane_g2

0x795f,	// (0x00038ba2) cell_hwr_candidate_pane_ParamLimits

0x795f,	// (0x00038ba2) cell_hwr_candidate_pane

0x79b1,	// (0x00038bf4) fep_hwr_candidate_pane_g1_ParamLimits

0xb7de,	// (0x0003ca21) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb7de,	// (0x0003ca21) bg_popup_fep_shadow_pane_cp2

0xb974,	// (0x0003cbb7) fep_vkb_top_pane_g4_ParamLimits

0xb974,	// (0x0003cbb7) fep_vkb_top_pane_g4

0xb9ba,	// (0x0003cbfd) fep_vkb_side_pane_g2_ParamLimits

0xb9ba,	// (0x0003cbfd) fep_vkb_side_pane_g2

0x5f56,	// (0x00037199) list_setting_pane_t4_ParamLimits

0x5f56,	// (0x00037199) list_setting_pane_t4

0x5ff2,	// (0x00037235) list_setting_number_pane_t5_ParamLimits

0x5ff2,	// (0x00037235) list_setting_number_pane_t5

0x64f1,	// (0x00037734) list_double_heading_pane_cp2_ParamLimits

0x64f1,	// (0x00037734) list_double_heading_pane_cp2

0xbcf9,	// (0x0003cf3c) list_double_heading_pane_g1_cp2_ParamLimits

0xbcf9,	// (0x0003cf3c) list_double_heading_pane_g1_cp2

0xbd05,	// (0x0003cf48) list_double_heading_pane_g2_cp2_ParamLimits

0xbd05,	// (0x0003cf48) list_double_heading_pane_g2_cp2

0xbd19,	// (0x0003cf5c) list_double_heading_pane_t1_cp2_ParamLimits

0xbd19,	// (0x0003cf5c) list_double_heading_pane_t1_cp2

0xbd2f,	// (0x0003cf72) list_double_heading_pane_t2_cp2_ParamLimits

0xbd2f,	// (0x0003cf72) list_double_heading_pane_t2_cp2

0xe95e,	// (0x0003fba1) aid_value_unit2

0x5748,	// (0x0003698b) popup_preview_fixed_window

0xeb15,	// (0x0003fd58) bg_popup_preview_window_pane_cp02

0xbd41,	// (0x0003cf84) list_preview_fixed_pane

0xbd87,	// (0x0003cfca) list_empty_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_empty_pane_fp

0xbd87,	// (0x0003cfca) list_single_cale_day_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_single_cale_day_pane_fp

0xbd87,	// (0x0003cfca) list_single_graphic_heading_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_single_graphic_heading_pane_fp

0xbd87,	// (0x0003cfca) list_single_graphic_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_single_graphic_pane_fp

0xbd87,	// (0x0003cfca) list_single_heading_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_single_heading_pane_fp

0xbd87,	// (0x0003cfca) list_single_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_single_pane_fp

0xbda0,	// (0x0003cfe3) list_single_pane_fp_g1_ParamLimits

0xbda0,	// (0x0003cfe3) list_single_pane_fp_g1

0x42d4,	// (0x00035517) list_single_pane_fp_g2_ParamLimits

0x42d4,	// (0x00035517) list_single_pane_fp_g2

0x42e0,	// (0x00035523) list_single_pane_fp_g3_ParamLimits

0x42e0,	// (0x00035523) list_single_pane_fp_g3

0xbdac,	// (0x0003cfef) list_single_pane_fp_g4_ParamLimits

0xbdac,	// (0x0003cfef) list_single_pane_fp_g4

0x0003,

0xfb73,	// (0x00040db6) list_single_pane_fp_g_ParamLimits

0xfb73,	// (0x00040db6) list_single_pane_fp_g

0x42f4,	// (0x00035537) list_single_pane_fp_t1_ParamLimits

0x42f4,	// (0x00035537) list_single_pane_fp_t1

0x430b,	// (0x0003554e) list_single_graphic_pane_fp_g1_ParamLimits

0x430b,	// (0x0003554e) list_single_graphic_pane_fp_g1

0xbda0,	// (0x0003cfe3) list_single_graphic_pane_fp_g2_ParamLimits

0xbda0,	// (0x0003cfe3) list_single_graphic_pane_fp_g2

0x42d4,	// (0x00035517) list_single_graphic_pane_fp_g3_ParamLimits

0x42d4,	// (0x00035517) list_single_graphic_pane_fp_g3

0x42e0,	// (0x00035523) list_single_graphic_pane_fp_g4_ParamLimits

0x42e0,	// (0x00035523) list_single_graphic_pane_fp_g4

0xbdac,	// (0x0003cfef) list_single_graphic_pane_fp_g5_ParamLimits

0xbdac,	// (0x0003cfef) list_single_graphic_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040dbf) list_single_graphic_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040dbf) list_single_graphic_pane_fp_g

0x4317,	// (0x0003555a) list_single_graphic_pane_fp_t1_ParamLimits

0x4317,	// (0x0003555a) list_single_graphic_pane_fp_t1

0x430b,	// (0x0003554e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x430b,	// (0x0003554e) list_single_graphic_heading_pane_fp_g1

0xbda0,	// (0x0003cfe3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbda0,	// (0x0003cfe3) list_single_graphic_heading_pane_fp_g2

0x42d4,	// (0x00035517) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x42d4,	// (0x00035517) list_single_graphic_heading_pane_fp_g3

0x42e0,	// (0x00035523) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x42e0,	// (0x00035523) list_single_graphic_heading_pane_fp_g4

0xbdac,	// (0x0003cfef) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbdac,	// (0x0003cfef) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040dbf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040dbf) list_single_graphic_heading_pane_fp_g

0x432d,	// (0x00035570) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x432d,	// (0x00035570) list_single_graphic_heading_pane_fp_t1

0x4343,	// (0x00035586) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4343,	// (0x00035586) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00040dca) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00040dca) list_single_graphic_heading_pane_fp_t

0x4355,	// (0x00035598) list_single_cale_day_pane_fp_g1_ParamLimits

0x4355,	// (0x00035598) list_single_cale_day_pane_fp_g1

0xbdb8,	// (0x0003cffb) list_single_cale_day_pane_fp_g2_ParamLimits

0xbdb8,	// (0x0003cffb) list_single_cale_day_pane_fp_g2

0x438d,	// (0x000355d0) list_single_cale_day_pane_fp_g3_ParamLimits

0x438d,	// (0x000355d0) list_single_cale_day_pane_fp_g3

0x43b5,	// (0x000355f8) list_single_cale_day_pane_fp_g4_ParamLimits

0x43b5,	// (0x000355f8) list_single_cale_day_pane_fp_g4

0x43d9,	// (0x0003561c) list_single_cale_day_pane_fp_g5_ParamLimits

0x43d9,	// (0x0003561c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8c,	// (0x00040dcf) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8c,	// (0x00040dcf) list_single_cale_day_pane_fp_g

0x43fd,	// (0x00035640) list_single_cale_day_pane_fp_t1_ParamLimits

0x43fd,	// (0x00035640) list_single_cale_day_pane_fp_t1

0x4423,	// (0x00035666) list_single_cale_day_pane_fp_t2_ParamLimits

0x4423,	// (0x00035666) list_single_cale_day_pane_fp_t2

0x443c,	// (0x0003567f) list_single_cale_day_pane_fp_t3_ParamLimits

0x443c,	// (0x0003567f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb97,	// (0x00040dda) list_single_cale_day_pane_fp_t_ParamLimits

0xfb97,	// (0x00040dda) list_single_cale_day_pane_fp_t

0xbda0,	// (0x0003cfe3) list_empty_pane_fp_g1_ParamLimits

0xbda0,	// (0x0003cfe3) list_empty_pane_fp_g1

0x4455,	// (0x00035698) list_empty_pane_fp_t1

0x4463,	// (0x000356a6) list_empty_pane_fp_t2

0x0001,

0xfb9e,	// (0x00040de1) list_empty_pane_fp_t

0xbda0,	// (0x0003cfe3) list_single_heading_pane_fp_g1_ParamLimits

0xbda0,	// (0x0003cfe3) list_single_heading_pane_fp_g1

0x42d4,	// (0x00035517) list_single_heading_pane_fp_g2_ParamLimits

0x42d4,	// (0x00035517) list_single_heading_pane_fp_g2

0x42e0,	// (0x00035523) list_single_heading_pane_fp_g3_ParamLimits

0x42e0,	// (0x00035523) list_single_heading_pane_fp_g3

0x0002,

0xfba3,	// (0x00040de6) list_single_heading_pane_fp_g_ParamLimits

0xfba3,	// (0x00040de6) list_single_heading_pane_fp_g

0x4471,	// (0x000356b4) list_single_heading_pane_fp_t1_ParamLimits

0x4471,	// (0x000356b4) list_single_heading_pane_fp_t1

0x4483,	// (0x000356c6) list_single_heading_pane_fp_t2_ParamLimits

0x4483,	// (0x000356c6) list_single_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x00040ded) list_single_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x00040ded) list_single_heading_pane_fp_t

0x1f3a,	// (0x0003317d) aid_size_cell_fast

0xeaea,	// (0x0003fd2d) soft_indicator_pane_cp1_t1

0x1f77,	// (0x000331ba) cell_app_pane_cp2_ParamLimits

0x1f77,	// (0x000331ba) cell_app_pane_cp2

0x77dd,	// (0x00038a20) fep_hwr_candidate_drop_down_list_pane

0x79cb,	// (0x00038c0e) fep_hwr_candidate_pane_g3_ParamLimits

0x79cb,	// (0x00038c0e) fep_hwr_candidate_pane_g3

0x3395,	// (0x000345d8) fep_hwr_candidate_pane_g4_ParamLimits

0x3395,	// (0x000345d8) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x00040d5c) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x00040d5c) fep_hwr_candidate_pane_g

0xb86e,	// (0x0003cab1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb86e,	// (0x0003cab1) fep_vkb_candidate_drop_down_list_pane

0xbc96,	// (0x0003ced9) fep_vkb_candidate_pane_g3

0xbc9e,	// (0x0003cee1) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x00040d89) fep_vkb_candidate_pane_g

0x7a36,	// (0x00038c79) cell_hwr_candidate_pane_g1_ParamLimits

0x7a44,	// (0x00038c87) cell_hwr_candidate_pane_g3_ParamLimits

0x7a44,	// (0x00038c87) cell_hwr_candidate_pane_g3

0xc936,	// (0x0003db79) cell_hwr_candidate_pane_g4_ParamLimits

0xc936,	// (0x0003db79) cell_hwr_candidate_pane_g4

0x0002,

0xfb65,	// (0x00040da8) cell_hwr_candidate_pane_g_ParamLimits

0xfb65,	// (0x00040da8) cell_hwr_candidate_pane_g

0xbcb5,	// (0x0003cef8) cell_vkb_candidate_pane_g3_ParamLimits

0xbcb5,	// (0x0003cef8) cell_vkb_candidate_pane_g3

0xbcd0,	// (0x0003cf13) cell_vkb_candidate_pane_g4_ParamLimits

0xbcd0,	// (0x0003cf13) cell_vkb_candidate_pane_g4

0xbdc4,	// (0x0003d007) cell_app_pane_cp2_g1_ParamLimits

0xbdc4,	// (0x0003d007) cell_app_pane_cp2_g1

0xbde2,	// (0x0003d025) cell_app_pane_cp2_g2_ParamLimits

0xbde2,	// (0x0003d025) cell_app_pane_cp2_g2

0x0001,

0xfbaf,	// (0x00040df2) cell_app_pane_cp2_g_ParamLimits

0xfbaf,	// (0x00040df2) cell_app_pane_cp2_g

0xbdee,	// (0x0003d031) cell_app_pane_cp2_t1_ParamLimits

0xbdee,	// (0x0003d031) cell_app_pane_cp2_t1

0x1dd4,	// (0x00033017) grid_highlight_pane_cp1_ParamLimits

0x1dd4,	// (0x00033017) grid_highlight_pane_cp1

0x7a83,	// (0x00038cc6) cell_hwr_candidate_pane_cp1_ParamLimits

0x7a83,	// (0x00038cc6) cell_hwr_candidate_pane_cp1

0x7a36,	// (0x00038c79) fep_hwr_candidate_drop_down_list_pane_g1

0x7aa7,	// (0x00038cea) fep_hwr_candidate_drop_down_list_pane_g2

0x7ab4,	// (0x00038cf7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x00040df7) fep_hwr_candidate_drop_down_list_pane_g

0x7ac1,	// (0x00038d04) fep_hwr_candidate_drop_down_list_scroll_pane

0x7aca,	// (0x00038d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7aca,	// (0x00038d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7ad7,	// (0x00038d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ad7,	// (0x00038d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7ae4,	// (0x00038d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ae4,	// (0x00038d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7af1,	// (0x00038d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7af1,	// (0x00038d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7b0c,	// (0x00038d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b0c,	// (0x00038d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7b27,	// (0x00038d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b27,	// (0x00038d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7b42,	// (0x00038d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b42,	// (0x00038d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7b5d,	// (0x00038da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b5d,	// (0x00038da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbb,	// (0x00040dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbb,	// (0x00040dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe00,	// (0x0003d043) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe00,	// (0x0003d043) cell_vkb_candidate_pane_cp1

0xb974,	// (0x0003cbb7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb974,	// (0x0003cbb7) fep_vkb_candidate_drop_down_list_pane_g1

0xbe26,	// (0x0003d069) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbe26,	// (0x0003d069) fep_vkb_candidate_drop_down_list_pane_g2

0xbe33,	// (0x0003d076) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbe33,	// (0x0003d076) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x00040e0f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcc,	// (0x00040e0f) fep_vkb_candidate_drop_down_list_pane_g

0xbe40,	// (0x0003d083) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbe40,	// (0x0003d083) fep_vkb_candidate_drop_down_list_scroll_pane

0xbe4d,	// (0x0003d090) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbe4d,	// (0x0003d090) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbe5a,	// (0x0003d09d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbe5a,	// (0x0003d09d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbe66,	// (0x0003d0a9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbe66,	// (0x0003d0a9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbe72,	// (0x0003d0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbe72,	// (0x0003d0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbe93,	// (0x0003d0d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbe93,	// (0x0003d0d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbeb4,	// (0x0003d0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbeb4,	// (0x0003d0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbed5,	// (0x0003d118) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbed5,	// (0x0003d118) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbef6,	// (0x0003d139) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbef6,	// (0x0003d139) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x00040e16) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x00040e16) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5868,	// (0x00036aab) title_pane_g1_ParamLimits

0x5875,	// (0x00036ab8) title_pane_g2_ParamLimits

0xf54e,	// (0x00040791) title_pane_g_ParamLimits

0x22ae,	// (0x000334f1) aid_call2_pane

0x22a6,	// (0x000334e9) aid_call_pane

0x22b6,	// (0x000334f9) popup_clock_analogue_window_g1

0x22b6,	// (0x000334f9) popup_clock_analogue_window_g2

0x64d2,	// (0x00037715) popup_clock_analogue_window_g3

0x64db,	// (0x0003771e) popup_clock_analogue_window_g4

0xe970,	// (0x0003fbb3) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00040936) popup_clock_analogue_window_g

0x64e3,	// (0x00037726) popup_clock_analogue_window_t1

0x6524,	// (0x00037767) clock_digital_number_pane_ParamLimits

0x6524,	// (0x00037767) clock_digital_number_pane

0x6530,	// (0x00037773) clock_digital_number_pane_cp02_ParamLimits

0x6530,	// (0x00037773) clock_digital_number_pane_cp02

0x653c,	// (0x0003777f) clock_digital_number_pane_cp03_ParamLimits

0x653c,	// (0x0003777f) clock_digital_number_pane_cp03

0x6548,	// (0x0003778b) clock_digital_number_pane_cp04_ParamLimits

0x6548,	// (0x0003778b) clock_digital_number_pane_cp04

0x6554,	// (0x00037797) clock_digital_separator_pane_ParamLimits

0x6554,	// (0x00037797) clock_digital_separator_pane

0x6560,	// (0x000377a3) popup_clock_digital_window_t1_ParamLimits

0x6560,	// (0x000377a3) popup_clock_digital_window_t1

0xe970,	// (0x0003fbb3) clock_digital_number_pane_g1

0xe970,	// (0x0003fbb3) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00040941) clock_digital_number_pane_g

0xe970,	// (0x0003fbb3) clock_digital_separator_pane_g1

0xe970,	// (0x0003fbb3) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00040941) clock_digital_separator_pane_g

0x8bab,	// (0x00039dee) aid_fill_nsta_ParamLimits

0x8cfb,	// (0x00039f3e) indicator_nsta_pane_ParamLimits

0x8e8c,	// (0x0003a0cf) popup_clock_analogue_window

0x8e8c,	// (0x0003a0cf) popup_clock_digital_window

0xe9d4,	// (0x0003fc17) grid_indicator_nsta_pane_ParamLimits

0xb12c,	// (0x0003c36f) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x00040cdc) clock_nsta_pane_t

0x643b,	// (0x0003767e) aid_size_max_handle

0x6445,	// (0x00037688) aid_size_min_handle

0x2725,	// (0x00033968) editor_scroll_pane

0xbf11,	// (0x0003d154) ex_editor_pane

0x1f00,	// (0x00033143) scroll_pane_cp13

0x1d73,	// (0x00032fb6) scroll_pane_cp14

0x22e5,	// (0x00033528) scroll_pane_cp36

0x6507,	// (0x0003774a) list_single_graphic_hl_pane_cp2_ParamLimits

0x6507,	// (0x0003774a) list_single_graphic_hl_pane_cp2

0x7671,	// (0x000388b4) list_single_graphic_hl_pane_ParamLimits

0x7671,	// (0x000388b4) list_single_graphic_hl_pane

0x4499,	// (0x000356dc) aid_size_min_hl_cp1

0xbf19,	// (0x0003d15c) list_highlight_pane_cp34_ParamLimits

0xbf19,	// (0x0003d15c) list_highlight_pane_cp34

0xbf2a,	// (0x0003d16d) list_single_graphic_hl_pane_g1_ParamLimits

0xbf2a,	// (0x0003d16d) list_single_graphic_hl_pane_g1

0x7b78,	// (0x00038dbb) list_single_graphic_hl_pane_g2_ParamLimits

0x7b78,	// (0x00038dbb) list_single_graphic_hl_pane_g2

0x7b78,	// (0x00038dbb) list_single_graphic_hl_pane_g3_ParamLimits

0x7b78,	// (0x00038dbb) list_single_graphic_hl_pane_g3

0x3c95,	// (0x00034ed8) list_single_graphic_hl_pane_g4_ParamLimits

0x3c95,	// (0x00034ed8) list_single_graphic_hl_pane_g4

0x7b84,	// (0x00038dc7) list_single_graphic_hl_pane_g5_ParamLimits

0x7b84,	// (0x00038dc7) list_single_graphic_hl_pane_g5

0x0004,

0xfbe4,	// (0x00040e27) list_single_graphic_hl_pane_g_ParamLimits

0xfbe4,	// (0x00040e27) list_single_graphic_hl_pane_g

0x7b98,	// (0x00038ddb) list_single_graphic_hl_pane_t1_ParamLimits

0x7b98,	// (0x00038ddb) list_single_graphic_hl_pane_t1

0xbf37,	// (0x0003d17a) aid_size_min_hl_cp2

0xbf40,	// (0x0003d183) list_highlight_pane_cp34_cp2_ParamLimits

0xbf40,	// (0x0003d183) list_highlight_pane_cp34_cp2

0xbf2a,	// (0x0003d16d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbf2a,	// (0x0003d16d) list_single_graphic_hl_pane_g1_cp2

0xbf4d,	// (0x0003d190) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbf4d,	// (0x0003d190) list_single_graphic_hl_pane_g2_cp2

0xbf59,	// (0x0003d19c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf59,	// (0x0003d19c) list_single_graphic_hl_pane_g3_cp2

0x2747,	// (0x0003398a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2747,	// (0x0003398a) list_single_graphic_hl_pane_g4_cp2

0xbf67,	// (0x0003d1aa) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbf67,	// (0x0003d1aa) list_single_graphic_hl_pane_g5_cp2

0x6cea,	// (0x00037f2d) control_pane_g4_ParamLimits

0x6cea,	// (0x00037f2d) control_pane_g4

0x6e99,	// (0x000380dc) bg_popup_sub_pane_cp10_ParamLimits

0xb703,	// (0x0003c946) list_choice_list_pane_ParamLimits

0xb712,	// (0x0003c955) scroll_pane_cp23

0xeb15,	// (0x0003fd58) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd41,	// (0x0003cf84) list_preview_fixed_pane_ParamLimits

0xbd57,	// (0x0003cf9a) list_preview_fixed_pane_cp_ParamLimits

0xbd57,	// (0x0003cf9a) list_preview_fixed_pane_cp

0xbd63,	// (0x0003cfa6) popup_preview_fixed_window_g1_ParamLimits

0xbd63,	// (0x0003cfa6) popup_preview_fixed_window_g1

0xbd6f,	// (0x0003cfb2) popup_preview_fixed_window_g2_ParamLimits

0xbd6f,	// (0x0003cfb2) popup_preview_fixed_window_g2

0x0002,

0xfb6c,	// (0x00040daf) popup_preview_fixed_window_g_ParamLimits

0xfb6c,	// (0x00040daf) popup_preview_fixed_window_g

0x632a,	// (0x0003756d) aid_navi_side_left_pane_ParamLimits

0x633f,	// (0x00037582) aid_navi_side_right_pane_ParamLimits

0x6357,	// (0x0003759a) navi_icon_pane_stacon_ParamLimits

0x636b,	// (0x000375ae) navi_navi_pane_stacon_ParamLimits

0x6357,	// (0x0003759a) navi_text_pane_stacon_ParamLimits

0xe966,	// (0x0003fba9) main_text_info_pane

0xbf91,	// (0x0003d1d4) listscroll_text_info_pane

0xbf99,	// (0x0003d1dc) list_text_info_pane_ParamLimits

0xbf99,	// (0x0003d1dc) list_text_info_pane

0xbfa8,	// (0x0003d1eb) scroll_pane_cp24_ParamLimits

0xbfa8,	// (0x0003d1eb) scroll_pane_cp24

0xbfc6,	// (0x0003d209) list_text_info_pane_t1_ParamLimits

0xbfc6,	// (0x0003d209) list_text_info_pane_t1

0x6ee3,	// (0x00038126) popup_fast_swap2_window_ParamLimits

0x6ee3,	// (0x00038126) popup_fast_swap2_window

0xbfeb,	// (0x0003d22e) aid_size_cell_fast2

0xe966,	// (0x0003fba9) bg_popup_window_pane_cp17

0x94e9,	// (0x0003a72c) heading_pane_cp2

0xf2d3,	// (0x00040516) listscroll_fast2_pane

0xbff5,	// (0x0003d238) grid_fast2_pane

0xbfff,	// (0x0003d242) listscroll_fast2_pane_g1

0xc009,	// (0x0003d24c) listscroll_fast2_pane_g2

0x0001,

0xfbef,	// (0x00040e32) listscroll_fast2_pane_g

0x1f00,	// (0x00033143) scroll_pane_cp26

0xc013,	// (0x0003d256) cell_fast2_pane_ParamLimits

0xc013,	// (0x0003d256) cell_fast2_pane

0xc02a,	// (0x0003d26d) cell_fast2_pane_g1

0xc033,	// (0x0003d276) cell_fast2_pane_g2

0xc03c,	// (0x0003d27f) cell_fast2_pane_g3

0x0002,

0xfbf4,	// (0x00040e37) cell_fast2_pane_g

0xf315,	// (0x00040558) grid_highlight_pane_cp9

0xf32a,	// (0x0004056d) main_eswt_pane_ParamLimits

0xf32a,	// (0x0004056d) main_eswt_pane

0xbfbd,	// (0x0003d200) list_single_text_info_pane

0xc044,	// (0x0003d287) eswt_ctrl_button_pane

0xc044,	// (0x0003d287) eswt_ctrl_canvas_pane

0xc04c,	// (0x0003d28f) eswt_ctrl_combo_pane

0xc044,	// (0x0003d287) eswt_ctrl_default_pane

0xc044,	// (0x0003d287) eswt_ctrl_label_pane

0xc054,	// (0x0003d297) eswt_ctrl_wait_pane

0xc05c,	// (0x0003d29f) eswt_shell_pane

0xe966,	// (0x0003fba9) listscroll_eswt_app_pane

0xc07c,	// (0x0003d2bf) popup_eswt_tasktip_window_ParamLimits

0xc07c,	// (0x0003d2bf) popup_eswt_tasktip_window

0x9129,	// (0x0003a36c) bg_popup_window_pane_cp18

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_ParamLimits

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_ParamLimits

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_ParamLimits

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_ParamLimits

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4

0x0003,

0xfbfb,	// (0x00040e3e) eswt_control_pane_g_ParamLimits

0xfbfb,	// (0x00040e3e) eswt_control_pane_g

0x1dd4,	// (0x00033017) bg_button_pane_ParamLimits

0x1dd4,	// (0x00033017) bg_button_pane

0xf32a,	// (0x0004056d) common_borders_pane_copy2_ParamLimits

0xf32a,	// (0x0004056d) common_borders_pane_copy2

0xc0c1,	// (0x0003d304) control_button_pane_g1_ParamLimits

0xc0c1,	// (0x0003d304) control_button_pane_g1

0xc0cd,	// (0x0003d310) control_button_pane_g2_ParamLimits

0xc0cd,	// (0x0003d310) control_button_pane_g2

0xc0d9,	// (0x0003d31c) control_button_pane_g3_ParamLimits

0xc0d9,	// (0x0003d31c) control_button_pane_g3

0x0002,

0xfc04,	// (0x00040e47) control_button_pane_g_ParamLimits

0xfc04,	// (0x00040e47) control_button_pane_g

0xc0ed,	// (0x0003d330) control_button_pane_t1

0xc0fb,	// (0x0003d33e) control_button_pane_t2

0x0001,

0xfc0b,	// (0x00040e4e) control_button_pane_t

0x90b5,	// (0x0003a2f8) bg_button_pane_g1

0x90c5,	// (0x0003a308) bg_button_pane_g2

0x90bd,	// (0x0003a300) bg_button_pane_g3

0x90d5,	// (0x0003a318) bg_button_pane_g4

0x90cd,	// (0x0003a310) bg_button_pane_g5

0x90dd,	// (0x0003a320) bg_button_pane_g6

0x90e5,	// (0x0003a328) bg_button_pane_g7

0x90f5,	// (0x0003a338) bg_button_pane_g8

0x90ed,	// (0x0003a330) bg_button_pane_g9

0x0008,

0xf861,	// (0x00040aa4) bg_button_pane_g

0xb6be,	// (0x0003c901) common_borders_pane_ParamLimits

0xb6be,	// (0x0003c901) common_borders_pane

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy1_ParamLimits

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy1

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy1_ParamLimits

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy1

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy1_ParamLimits

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy1

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy1_ParamLimits

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy1

0xb6f9,	// (0x0003c93c) bg_eswt_ctrl_canvas_pane_g1

0xb6be,	// (0x0003c901) common_borders_pane_cp2_ParamLimits

0xb6be,	// (0x0003c901) common_borders_pane_cp2

0xb6be,	// (0x0003c901) common_borders_pane_cp3_ParamLimits

0xb6be,	// (0x0003c901) common_borders_pane_cp3

0xc109,	// (0x0003d34c) separator_horizontal_pane

0xc111,	// (0x0003d354) separator_vertical_pane

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy2_ParamLimits

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy2

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy2_ParamLimits

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy2

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy2_ParamLimits

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy2

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy2_ParamLimits

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy2

0xe966,	// (0x0003fba9) common_borders_pane_cp4

0xc11a,	// (0x0003d35d) separator_horizontal_pane_g1

0xc123,	// (0x0003d366) separator_horizontal_pane_g2

0xc12c,	// (0x0003d36f) separator_horizontal_pane_g3

0x0002,

0xfc10,	// (0x00040e53) separator_horizontal_pane_g

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy3_ParamLimits

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy3

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy3_ParamLimits

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy3

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy3_ParamLimits

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy3

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy3_ParamLimits

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy3

0xe966,	// (0x0003fba9) common_borders_pane_cp5

0xc135,	// (0x0003d378) separator_vertical_pane_g1

0xc13e,	// (0x0003d381) separator_vertical_pane_g2

0xc147,	// (0x0003d38a) separator_vertical_pane_g3

0x0002,

0xfc17,	// (0x00040e5a) separator_vertical_pane_g

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy4_ParamLimits

0xc08d,	// (0x0003d2d0) eswt_control_pane_g1_copy4

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy4_ParamLimits

0xc09a,	// (0x0003d2dd) eswt_control_pane_g2_copy4

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy4_ParamLimits

0xc0a7,	// (0x0003d2ea) eswt_control_pane_g3_copy4

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy4_ParamLimits

0xc0b4,	// (0x0003d2f7) eswt_control_pane_g4_copy4

0xc150,	// (0x0003d393) eswt_ctrl_combo_button_pane

0xc158,	// (0x0003d39b) eswt_ctrl_input_pane

0xc160,	// (0x0003d3a3) popup_choice_list_window_cp70

0xc168,	// (0x0003d3ab) eswt_ctrl_input_pane_t1

0xe966,	// (0x0003fba9) input_focus_pane_cp70

0xb6be,	// (0x0003c901) bg_button_pane_cp70_ParamLimits

0xb6be,	// (0x0003c901) bg_button_pane_cp70

0xc176,	// (0x0003d3b9) eswt_ctrl_combo_button_pane_g1

0xc17e,	// (0x0003d3c1) wait_bar_pane_cp70

0x9129,	// (0x0003a36c) bg_popup_window_pane_cp70_ParamLimits

0x9129,	// (0x0003a36c) bg_popup_window_pane_cp70

0xc186,	// (0x0003d3c9) popup_eswt_tasktip_window_t1

0xc19c,	// (0x0003d3df) wait_bar_pane_cp71_ParamLimits

0xc19c,	// (0x0003d3df) wait_bar_pane_cp71

0xc1a8,	// (0x0003d3eb) grid_eswt_app_pane

0x214e,	// (0x00033391) scroll_pane_cp70

0xc1b1,	// (0x0003d3f4) cell_eswt_app_pane_ParamLimits

0xc1b1,	// (0x0003d3f4) cell_eswt_app_pane

0xc1e3,	// (0x0003d426) cell_eswt_app_pane_g1_ParamLimits

0xc1e3,	// (0x0003d426) cell_eswt_app_pane_g1

0xc212,	// (0x0003d455) cell_eswt_app_pane_g2_ParamLimits

0xc212,	// (0x0003d455) cell_eswt_app_pane_g2

0x0001,

0xfc1e,	// (0x00040e61) cell_eswt_app_pane_g_ParamLimits

0xfc1e,	// (0x00040e61) cell_eswt_app_pane_g

0xc23b,	// (0x0003d47e) cell_eswt_app_pane_t1_ParamLimits

0xc23b,	// (0x0003d47e) cell_eswt_app_pane_t1

0xc26d,	// (0x0003d4b0) grid_highlight_pane_cp70_ParamLimits

0xc26d,	// (0x0003d4b0) grid_highlight_pane_cp70

0x261e,	// (0x00033861) set_content_pane_g1

0x6c72,	// (0x00037eb5) status_small_volume_pane

0x7bae,	// (0x00038df1) status_small_volume_pane_g1

0x7bb6,	// (0x00038df9) volume_small2_pane

0x7bbf,	// (0x00038e02) volume_small2_pane_g1

0x7bc8,	// (0x00038e0b) volume_small2_pane_g2

0x7bd1,	// (0x00038e14) volume_small2_pane_g3

0x7bda,	// (0x00038e1d) volume_small2_pane_g4

0x7be3,	// (0x00038e26) volume_small2_pane_g5

0x7bec,	// (0x00038e2f) volume_small2_pane_g6

0x7bf5,	// (0x00038e38) volume_small2_pane_g7

0x7bfe,	// (0x00038e41) volume_small2_pane_g8

0x7c07,	// (0x00038e4a) volume_small2_pane_g9

0x7c10,	// (0x00038e53) volume_small2_pane_g10

0x0009,

0xfc23,	// (0x00040e66) volume_small2_pane_g

0xbac8,	// (0x0003cd0b) fep_vkb_top_text_pane_g1_ParamLimits

0xbae3,	// (0x0003cd26) fep_vkb_top_text_pane_t1_ParamLimits

0xbd7b,	// (0x0003cfbe) popup_preview_fixed_window_g3_ParamLimits

0xbd7b,	// (0x0003cfbe) popup_preview_fixed_window_g3

0x8acf,	// (0x00039d12) popup_toolbar_trans_pane

0xa46d,	// (0x0003b6b0) aid_height_set_list_ParamLimits

0xa47e,	// (0x0003b6c1) aid_size_parent_ParamLimits

0x6e99,	// (0x000380dc) list_highlight_pane_cp2_ParamLimits

0x261e,	// (0x00033861) set_content_pane_g1_ParamLimits

0xa6d3,	// (0x0003b916) list_single_image_pane_ParamLimits

0xa6d3,	// (0x0003b916) list_single_image_pane

0xc279,	// (0x0003d4bc) aid_size_cell_image_ParamLimits

0xc279,	// (0x0003d4bc) aid_size_cell_image

0xc286,	// (0x0003d4c9) grid_single_image_pane_ParamLimits

0xc286,	// (0x0003d4c9) grid_single_image_pane

0x1de2,	// (0x00033025) list_single_image_pane_g1_ParamLimits

0x1de2,	// (0x00033025) list_single_image_pane_g1

0x1dee,	// (0x00033031) list_single_image_pane_g2_ParamLimits

0x1dee,	// (0x00033031) list_single_image_pane_g2

0x0001,

0xfc38,	// (0x00040e7b) list_single_image_pane_g_ParamLimits

0xfc38,	// (0x00040e7b) list_single_image_pane_g

0xc294,	// (0x0003d4d7) list_single_image_pane_t1_ParamLimits

0xc294,	// (0x0003d4d7) list_single_image_pane_t1

0xc2aa,	// (0x0003d4ed) cell_image_list_pane_ParamLimits

0xc2aa,	// (0x0003d4ed) cell_image_list_pane

0xc2c0,	// (0x0003d503) cell_image_list_pane_g1

0xc2c9,	// (0x0003d50c) cell_image_list_pane_g2

0x0001,

0xfc3d,	// (0x00040e80) cell_image_list_pane_g

0xc2d2,	// (0x0003d515) aid_size_cell_tb_trans_pane

0x1dd4,	// (0x00033017) bg_tb_trans_pane

0xc2e4,	// (0x0003d527) grid_tb_trans_pane

0x90b5,	// (0x0003a2f8) bg_tb_trans_pane_g1

0x90c5,	// (0x0003a308) bg_tb_trans_pane_g2

0x90bd,	// (0x0003a300) bg_tb_trans_pane_g3

0x90d5,	// (0x0003a318) bg_tb_trans_pane_g4

0x90cd,	// (0x0003a310) bg_tb_trans_pane_g5

0x90f5,	// (0x0003a338) bg_tb_trans_pane_g6

0x90ed,	// (0x0003a330) bg_tb_trans_pane_g7

0x90dd,	// (0x0003a320) bg_tb_trans_pane_g8

0x90e5,	// (0x0003a328) bg_tb_trans_pane_g9

0x0008,

0xfc42,	// (0x00040e85) bg_tb_trans_pane_g

0xc2f8,	// (0x0003d53b) cell_toolbar_trans_pane_ParamLimits

0xc2f8,	// (0x0003d53b) cell_toolbar_trans_pane

0xb6f9,	// (0x0003c93c) cell_toolbar_trans_pane_g1

0xb31d,	// (0x0003c560) list_form2_midp_pane_t1

0xb32b,	// (0x0003c56e) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x00040d22) list_form2_midp_pane_t

0xb339,	// (0x0003c57c) scroll_pane_cp51_ParamLimits

0xb500,	// (0x0003c743) form2_midp_wait_pane_g1

0xb509,	// (0x0003c74c) form2_midp_wait_pane_g2

0xb512,	// (0x0003c755) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x00040d37) form2_midp_wait_pane_g

0xe9d4,	// (0x0003fc17) list_highlight_pane_cp21_ParamLimits

0xb556,	// (0x0003c799) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb565,	// (0x0003c7a8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa68c,	// (0x0003b8cf) list_single_2graphic_im_pane_ParamLimits

0xa68c,	// (0x0003b8cf) list_single_2graphic_im_pane

0xc31e,	// (0x0003d561) list_single_2graphic_im_pane_g1_ParamLimits

0xc31e,	// (0x0003d561) list_single_2graphic_im_pane_g1

0xc32f,	// (0x0003d572) list_single_2graphic_im_pane_g2_ParamLimits

0xc32f,	// (0x0003d572) list_single_2graphic_im_pane_g2

0xc33b,	// (0x0003d57e) list_single_2graphic_im_pane_g3_ParamLimits

0xc33b,	// (0x0003d57e) list_single_2graphic_im_pane_g3

0x0003,

0xfc55,	// (0x00040e98) list_single_2graphic_im_pane_g_ParamLimits

0xfc55,	// (0x00040e98) list_single_2graphic_im_pane_g

0xc35b,	// (0x0003d59e) list_single_2graphic_im_pane_t1_ParamLimits

0xc35b,	// (0x0003d59e) list_single_2graphic_im_pane_t1

0xbd87,	// (0x0003cfca) list_single_graphic_2heading_pane_fp_ParamLimits

0xbd87,	// (0x0003cfca) list_single_graphic_2heading_pane_fp

0x430b,	// (0x0003554e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x430b,	// (0x0003554e) list_single_graphic_2heading_pane_fp_g1

0xbda0,	// (0x0003cfe3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbda0,	// (0x0003cfe3) list_single_graphic_2heading_pane_fp_g2

0x42d4,	// (0x00035517) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x42d4,	// (0x00035517) list_single_graphic_2heading_pane_fp_g3

0x42e0,	// (0x00035523) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x42e0,	// (0x00035523) list_single_graphic_2heading_pane_fp_g4

0xbdac,	// (0x0003cfef) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbdac,	// (0x0003cfef) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040dbf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040dbf) list_single_graphic_2heading_pane_fp_g

0x44ae,	// (0x000356f1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x44ae,	// (0x000356f1) list_single_graphic_2heading_pane_fp_t1

0x4343,	// (0x00035586) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4343,	// (0x00035586) list_single_graphic_2heading_pane_fp_t2

0x44c4,	// (0x00035707) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x44c4,	// (0x00035707) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5e,	// (0x00040ea1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5e,	// (0x00040ea1) list_single_graphic_2heading_pane_fp_t

0xb78a,	// (0x0003c9cd) fep_hwr_write_pane_g5_ParamLimits

0xb78a,	// (0x0003c9cd) fep_hwr_write_pane_g5

0xb796,	// (0x0003c9d9) fep_hwr_write_pane_g6_ParamLimits

0xb796,	// (0x0003c9d9) fep_hwr_write_pane_g6

0xc05c,	// (0x0003d29f) eswt_shell_pane_ParamLimits

0x9129,	// (0x0003a36c) bg_popup_window_pane_cp18_ParamLimits

0xa3c4,	// (0x0003b607) heading_pane_cp70

0xc186,	// (0x0003d3c9) popup_eswt_tasktip_window_t1_ParamLimits

0x8c02,	// (0x00039e45) aid_touch_tab_arrow_left

0x8c11,	// (0x00039e54) aid_touch_tab_arrow_right

0xe984,	// (0x0003fbc7) title_pane_g3_ParamLimits

0xe984,	// (0x0003fbc7) title_pane_g3

0x1d93,	// (0x00032fd6) set_value_pane_g1

0x8acf,	// (0x00039d12) popup_toolbar_trans_pane_ParamLimits

0xc2d2,	// (0x0003d515) aid_size_cell_tb_trans_pane_ParamLimits

0x1dd4,	// (0x00033017) bg_tb_trans_pane_ParamLimits

0xc2e4,	// (0x0003d527) grid_tb_trans_pane_ParamLimits

0xeb15,	// (0x0003fd58) cont_note_pane_ParamLimits

0xeb15,	// (0x0003fd58) cont_note_pane

0xf32a,	// (0x0004056d) cont_snote2_single_text_pane_ParamLimits

0xf32a,	// (0x0004056d) cont_snote2_single_text_pane

0xf32a,	// (0x0004056d) cont_snote2_single_graphic_pane_ParamLimits

0xf32a,	// (0x0004056d) cont_snote2_single_graphic_pane

0x9705,	// (0x0003a948) cont_note_wait_pane_ParamLimits

0x9705,	// (0x0003a948) cont_note_wait_pane

0x9705,	// (0x0003a948) cont_note_image_pane_ParamLimits

0x9705,	// (0x0003a948) cont_note_image_pane

0xc38c,	// (0x0003d5cf) popup_note2_window_g1_ParamLimits

0xc38c,	// (0x0003d5cf) popup_note2_window_g1

0xc3bd,	// (0x0003d600) popup_note2_window_t1_ParamLimits

0xc3bd,	// (0x0003d600) popup_note2_window_t1

0xc402,	// (0x0003d645) popup_note2_window_t2_ParamLimits

0xc402,	// (0x0003d645) popup_note2_window_t2

0xc447,	// (0x0003d68a) popup_note2_window_t3_ParamLimits

0xc447,	// (0x0003d68a) popup_note2_window_t3

0xc48c,	// (0x0003d6cf) popup_note2_window_t4_ParamLimits

0xc48c,	// (0x0003d6cf) popup_note2_window_t4

0xeb99,	// (0x0003fddc) popup_note2_window_t5_ParamLimits

0xeb99,	// (0x0003fddc) popup_note2_window_t5

0x0004,

0xfc6a,	// (0x00040ead) popup_note2_window_t_ParamLimits

0xfc6a,	// (0x00040ead) popup_note2_window_t

0xc4bb,	// (0x0003d6fe) popup_note2_image_window_g1_ParamLimits

0xc4bb,	// (0x0003d6fe) popup_note2_image_window_g1

0xc4c7,	// (0x0003d70a) popup_note2_image_window_g2_ParamLimits

0xc4c7,	// (0x0003d70a) popup_note2_image_window_g2

0x0001,

0xfc75,	// (0x00040eb8) popup_note2_image_window_g_ParamLimits

0xfc75,	// (0x00040eb8) popup_note2_image_window_g

0xc4d9,	// (0x0003d71c) popup_note2_image_window_t1_ParamLimits

0xc4d9,	// (0x0003d71c) popup_note2_image_window_t1

0xc4f1,	// (0x0003d734) popup_note2_image_window_t2_ParamLimits

0xc4f1,	// (0x0003d734) popup_note2_image_window_t2

0xc509,	// (0x0003d74c) popup_note2_image_window_t3_ParamLimits

0xc509,	// (0x0003d74c) popup_note2_image_window_t3

0x0002,

0xfc7a,	// (0x00040ebd) popup_note2_image_window_t_ParamLimits

0xfc7a,	// (0x00040ebd) popup_note2_image_window_t

0x9713,	// (0x0003a956) popup_note2_wait_window_g1_ParamLimits

0x9713,	// (0x0003a956) popup_note2_wait_window_g1

0xc525,	// (0x0003d768) popup_note2_wait_window_g2_ParamLimits

0xc525,	// (0x0003d768) popup_note2_wait_window_g2

0x972b,	// (0x0003a96e) popup_note2_wait_window_g3_ParamLimits

0x972b,	// (0x0003a96e) popup_note2_wait_window_g3

0x0002,

0xfc81,	// (0x00040ec4) popup_note2_wait_window_g_ParamLimits

0xfc81,	// (0x00040ec4) popup_note2_wait_window_g

0xc531,	// (0x0003d774) popup_note2_wait_window_t1_ParamLimits

0xc531,	// (0x0003d774) popup_note2_wait_window_t1

0xc54f,	// (0x0003d792) popup_note2_wait_window_t2_ParamLimits

0xc54f,	// (0x0003d792) popup_note2_wait_window_t2

0xc56d,	// (0x0003d7b0) popup_note2_wait_window_t3_ParamLimits

0xc56d,	// (0x0003d7b0) popup_note2_wait_window_t3

0xc57f,	// (0x0003d7c2) popup_note2_wait_window_t4_ParamLimits

0xc57f,	// (0x0003d7c2) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00040ecb) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00040ecb) popup_note2_wait_window_t

0xc591,	// (0x0003d7d4) wait_bar2_pane_ParamLimits

0xc591,	// (0x0003d7d4) wait_bar2_pane

0xc5a9,	// (0x0003d7ec) popup_snote2_single_text_window_g1_ParamLimits

0xc5a9,	// (0x0003d7ec) popup_snote2_single_text_window_g1

0xc5d1,	// (0x0003d814) popup_snote2_single_text_window_t1_ParamLimits

0xc5d1,	// (0x0003d814) popup_snote2_single_text_window_t1

0xc61d,	// (0x0003d860) popup_snote2_single_text_window_t2_ParamLimits

0xc61d,	// (0x0003d860) popup_snote2_single_text_window_t2

0xc669,	// (0x0003d8ac) popup_snote2_single_text_window_t3_ParamLimits

0xc669,	// (0x0003d8ac) popup_snote2_single_text_window_t3

0xc6aa,	// (0x0003d8ed) popup_snote2_single_text_window_t4_ParamLimits

0xc6aa,	// (0x0003d8ed) popup_snote2_single_text_window_t4

0xc6e0,	// (0x0003d923) popup_snote2_single_text_window_t5_ParamLimits

0xc6e0,	// (0x0003d923) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x00040ed4) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x00040ed4) popup_snote2_single_text_window_t

0xc70b,	// (0x0003d94e) popup_snote2_single_graphic_window_g1_ParamLimits

0xc70b,	// (0x0003d94e) popup_snote2_single_graphic_window_g1

0xc733,	// (0x0003d976) popup_snote2_single_graphic_window_g2_ParamLimits

0xc733,	// (0x0003d976) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00040edf) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00040edf) popup_snote2_single_graphic_window_g

0xc75b,	// (0x0003d99e) popup_snote2_single_graphic_window_t1_ParamLimits

0xc75b,	// (0x0003d99e) popup_snote2_single_graphic_window_t1

0xc7a7,	// (0x0003d9ea) popup_snote2_single_graphic_window_t2_ParamLimits

0xc7a7,	// (0x0003d9ea) popup_snote2_single_graphic_window_t2

0xc669,	// (0x0003d8ac) popup_snote2_single_graphic_window_t3_ParamLimits

0xc669,	// (0x0003d8ac) popup_snote2_single_graphic_window_t3

0xc6aa,	// (0x0003d8ed) popup_snote2_single_graphic_window_t4_ParamLimits

0xc6aa,	// (0x0003d8ed) popup_snote2_single_graphic_window_t4

0xc6e0,	// (0x0003d923) popup_snote2_single_graphic_window_t5_ParamLimits

0xc6e0,	// (0x0003d923) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x00040ee4) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x00040ee4) popup_snote2_single_graphic_window_t

0xb1e9,	// (0x0003c42c) clock_nsta_pane_cp2_t1

0xb1e9,	// (0x0003c42c) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x00040cf8) clock_nsta_pane_cp2_t

0x3d91,	// (0x00034fd4) form_field_data_wide_pane_g1_ParamLimits

0x1de2,	// (0x00033025) form_field_data_wide_pane_g2_ParamLimits

0x1de2,	// (0x00033025) form_field_data_wide_pane_g2

0x1dee,	// (0x00033031) form_field_data_wide_pane_g3_ParamLimits

0x1dee,	// (0x00033031) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000408b9) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000408b9) form_field_data_wide_pane_g

0xb0c8,	// (0x0003c30b) grid_touch_3_pane_ParamLimits

0xb0c8,	// (0x0003c30b) grid_touch_3_pane

0xc7f3,	// (0x0003da36) cell_touch_3_pane_ParamLimits

0xc7f3,	// (0x0003da36) cell_touch_3_pane

0xb6f9,	// (0x0003c93c) cell_touch_3_pane_g1

0xb6f9,	// (0x0003c93c) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x00040d7d) cell_touch_3_pane_g

0xebcb,	// (0x0003fe0e) cont_query_data_pane

0xebd3,	// (0x0003fe16) cont_query_data_pane_cp1

0xc826,	// (0x0003da69) button_value_adjust_pane_cp7

0xc82e,	// (0x0003da71) query_popup_pane_cp3

0x2316,	// (0x00033559) bg_popup_sub_pane_cp22_ParamLimits

0x65e1,	// (0x00037824) navi_navi_volume_pane_cp2

0x65fc,	// (0x0003783f) popup_side_volume_key_window_g2

0x660b,	// (0x0003784e) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0004094f) popup_side_volume_key_window_g

0x6628,	// (0x0003786b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00040956) popup_side_volume_key_window_t

0x2521,	// (0x00033764) popup_side_volume_key_window_ParamLimits

0x5d66,	// (0x00036fa9) list_double_graphic_pane_g4_ParamLimits

0x5d66,	// (0x00036fa9) list_double_graphic_pane_g4

0xa6bb,	// (0x0003b8fe) list_single_2heading_msg_pane_ParamLimits

0xa6bb,	// (0x0003b8fe) list_single_2heading_msg_pane

0x7c19,	// (0x00038e5c) list_single_2heading_msg_pane_g1_ParamLimits

0x7c19,	// (0x00038e5c) list_single_2heading_msg_pane_g1

0x44a2,	// (0x000356e5) list_single_2heading_msg_pane_g2_ParamLimits

0x44a2,	// (0x000356e5) list_single_2heading_msg_pane_g2

0x7c25,	// (0x00038e68) list_single_2heading_msg_pane_g3_ParamLimits

0x7c25,	// (0x00038e68) list_single_2heading_msg_pane_g3

0x7c31,	// (0x00038e74) list_single_2heading_msg_pane_g4_ParamLimits

0x7c31,	// (0x00038e74) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00040eef) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00040eef) list_single_2heading_msg_pane_g

0x7c49,	// (0x00038e8c) list_single_2heading_msg_pane_t1_ParamLimits

0x7c49,	// (0x00038e8c) list_single_2heading_msg_pane_t1

0x7c71,	// (0x00038eb4) list_single_2heading_msg_pane_t2_ParamLimits

0x7c71,	// (0x00038eb4) list_single_2heading_msg_pane_t2

0x7ca5,	// (0x00038ee8) list_single_2heading_msg_pane_t3_ParamLimits

0x7ca5,	// (0x00038ee8) list_single_2heading_msg_pane_t3

0x473a,	// (0x0003597d) list_single_2heading_msg_pane_t4_ParamLimits

0x473a,	// (0x0003597d) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x00040ef8) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x00040ef8) list_single_2heading_msg_pane_t

0xe990,	// (0x0003fbd3) title_pane_g4_ParamLimits

0xe990,	// (0x0003fbd3) title_pane_g4

0x627a,	// (0x000374bd) title_pane_stacon_g3_ParamLimits

0x627a,	// (0x000374bd) title_pane_stacon_g3

0xc34f,	// (0x0003d592) list_single_2graphic_im_pane_g4_ParamLimits

0xc34f,	// (0x0003d592) list_single_2graphic_im_pane_g4

0xa175,	// (0x0003b3b8) popup_side_volume_key_window_cp

0xa9e3,	// (0x0003bc26) main_idle_act2_pane_t1

0x726c,	// (0x000384af) toolbar_button_pane_g10

0x5bdb,	// (0x00036e1e) popup_toolbar_window_cp1

0xb1da,	// (0x0003c41d) clock_nsta_pane_cp_t1

0xb1da,	// (0x0003c41d) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x00040cf3) clock_nsta_pane_cp_t

0x65e1,	// (0x00037824) navi_navi_volume_pane_cp2_ParamLimits

0x65f0,	// (0x00037833) popup_side_volume_key_window_g1_ParamLimits

0x65fc,	// (0x0003783f) popup_side_volume_key_window_g2_ParamLimits

0x660b,	// (0x0003784e) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0004094f) popup_side_volume_key_window_g_ParamLimits

0x77c9,	// (0x00038a0c) fep_hwr_aid_pane

0x7872,	// (0x00038ab5) bg_fep_hwr_top_pane_g4_ParamLimits

0xb75a,	// (0x0003c99d) fep_hwr_top_pane_g1_ParamLimits

0xb76c,	// (0x0003c9af) fep_hwr_top_pane_g2_ParamLimits

0x7892,	// (0x00038ad5) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x00040d48) fep_hwr_top_pane_g_ParamLimits

0x78a7,	// (0x00038aea) fep_hwr_top_text_pane_ParamLimits

0x9f2a,	// (0x0003b16d) aid_touch_tab_arrow_arrow_2

0x9f33,	// (0x0003b176) aid_touch_tab_arrow_left_2

0x77dd,	// (0x00038a20) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7814,	// (0x00038a57) fep_hwr_prediction_pane

0xb8c2,	// (0x0003cb05) fep_vkb_prediction_pane

0xb9c8,	// (0x0003cc0b) fep_vkb_side_pane_g3_ParamLimits

0xb9c8,	// (0x0003cc0b) fep_vkb_side_pane_g3

0x7a36,	// (0x00038c79) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7aa7,	// (0x00038cea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ab4,	// (0x00038cf7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb4,	// (0x00040df7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7cde,	// (0x00038f21) fep_hwr_prediction_pane_g1

0x7ce8,	// (0x00038f2b) fep_hwr_prediction_pane_g2

0x7cf0,	// (0x00038f33) fep_hwr_prediction_pane_g3

0x7cf8,	// (0x00038f3b) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00040f01) fep_hwr_prediction_pane_g

0xc855,	// (0x0003da98) fep_vkb_prediction_pane_g1

0xc85f,	// (0x0003daa2) fep_vkb_prediction_pane_g2

0xc867,	// (0x0003daaa) fep_vkb_prediction_pane_g3

0xc86f,	// (0x0003dab2) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00040f0a) fep_vkb_prediction_pane_g

0x75c0,	// (0x00038803) slider_set_pane_g3

0x75d4,	// (0x00038817) slider_set_pane_g4

0x75ec,	// (0x0003882f) slider_set_pane_g5

0x75c0,	// (0x00038803) slider_set_pane_g6

0x7602,	// (0x00038845) slider_set_pane_g7

0xa603,	// (0x0003b846) slider_form_pane_g3

0xa60c,	// (0x0003b84f) slider_form_pane_g4

0xa614,	// (0x0003b857) slider_form_pane_g5

0xa603,	// (0x0003b846) slider_form_pane_g6

0xa61c,	// (0x0003b85f) slider_form_pane_g7

0xac9a,	// (0x0003bedd) slider_set_pane_vc_g3

0xaca3,	// (0x0003bee6) slider_set_pane_vc_g4

0xacac,	// (0x0003beef) slider_set_pane_vc_g5

0xac9a,	// (0x0003bedd) slider_set_pane_vc_g6

0xacb5,	// (0x0003bef8) slider_set_pane_vc_g7

0xae8d,	// (0x0003c0d0) slider_form_pane_vc_g1

0xae96,	// (0x0003c0d9) slider_form_pane_vc_g2

0xae9f,	// (0x0003c0e2) slider_form_pane_vc_g3

0xae8d,	// (0x0003c0d0) slider_form_pane_vc_g4

0xaea8,	// (0x0003c0eb) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x00040cc5) slider_form_pane_vc_g

0xe966,	// (0x0003fba9) main_idle_act3_pane

0xc877,	// (0x0003daba) ai3_links_pane

0xc880,	// (0x0003dac3) popup_ai3_data_window_ParamLimits

0xc880,	// (0x0003dac3) popup_ai3_data_window

0xe966,	// (0x0003fba9) grid_ai3_links_pane

0xc89e,	// (0x0003dae1) cell_ai3_links_pane_ParamLimits

0xc89e,	// (0x0003dae1) cell_ai3_links_pane

0xc8b8,	// (0x0003dafb) bg_popup_sub_pane_cp11

0xc8c5,	// (0x0003db08) cell_ai3_links_pane_g1

0xe966,	// (0x0003fba9) bg_popup_sub_pane_cp12

0xc8ea,	// (0x0003db2d) heading_ai3_data_pane

0xc8f2,	// (0x0003db35) list_ai3_gene_pane

0xc8fe,	// (0x0003db41) popup_ai3_data_window_g1

0xc906,	// (0x0003db49) heading_ai3_data_pane_g1

0xc90e,	// (0x0003db51) heading_ai3_data_pane_t1

0xc91c,	// (0x0003db5f) list_double_ai3_gene_pane_ParamLimits

0xc91c,	// (0x0003db5f) list_double_ai3_gene_pane

0xc929,	// (0x0003db6c) list_single_ai3_gene_pane_ParamLimits

0xc929,	// (0x0003db6c) list_single_ai3_gene_pane

0xb6be,	// (0x0003c901) list_highlight_pane_cp7_ParamLimits

0xb6be,	// (0x0003c901) list_highlight_pane_cp7

0xc957,	// (0x0003db9a) list_single_a13_gene_pane_t1_ParamLimits

0xc957,	// (0x0003db9a) list_single_a13_gene_pane_t1

0xc96e,	// (0x0003dbb1) list_single_ai3_gene_pane_g1

0xc977,	// (0x0003dbba) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00040f13) list_single_ai3_gene_pane_g

0xc97f,	// (0x0003dbc2) list_double_ai3_gene_pane_g1_ParamLimits

0xc97f,	// (0x0003dbc2) list_double_ai3_gene_pane_g1

0xc98b,	// (0x0003dbce) list_double_ai3_gene_pane_t1_ParamLimits

0xc98b,	// (0x0003dbce) list_double_ai3_gene_pane_t1

0xc9a7,	// (0x0003dbea) list_double_ai3_gene_pane_t2_ParamLimits

0xc9a7,	// (0x0003dbea) list_double_ai3_gene_pane_t2

0xc9bc,	// (0x0003dbff) list_double_ai3_gene_pane_t3_ParamLimits

0xc9bc,	// (0x0003dbff) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x00040f18) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x00040f18) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x44da,	// (0x0003571d) aid_size_min_col_2

0xc83f,	// (0x0003da82) aid_size_min_msg_ParamLimits

0xc83f,	// (0x0003da82) aid_size_min_msg

0xbad4,	// (0x0003cd17) fep_vkb_top_text_pane_g2_ParamLimits

0xbad4,	// (0x0003cd17) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x00040d78) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x00040d78) fep_vkb_top_text_pane_g

0xe966,	// (0x0003fba9) main_hc_apps_shell_pane

0xc9d9,	// (0x0003dc1c) grid_hc_apps_pane_ParamLimits

0xc9d9,	// (0x0003dc1c) grid_hc_apps_pane

0xc9e8,	// (0x0003dc2b) list_hc_apps_pane

0xc9f0,	// (0x0003dc33) scroll_pane_cp37_ParamLimits

0xc9f0,	// (0x0003dc33) scroll_pane_cp37

0xc9fc,	// (0x0003dc3f) cell_hc_apps_pane_ParamLimits

0xc9fc,	// (0x0003dc3f) cell_hc_apps_pane

0xcab4,	// (0x0003dcf7) cell_hc_apps_pane_g1_ParamLimits

0xcab4,	// (0x0003dcf7) cell_hc_apps_pane_g1

0xcae5,	// (0x0003dd28) cell_hc_apps_pane_g2_ParamLimits

0xcae5,	// (0x0003dd28) cell_hc_apps_pane_g2

0xcb01,	// (0x0003dd44) cell_hc_apps_pane_g3_ParamLimits

0xcb01,	// (0x0003dd44) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00040f1f) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00040f1f) cell_hc_apps_pane_g

0xcb23,	// (0x0003dd66) cell_hc_apps_pane_t1_ParamLimits

0xcb23,	// (0x0003dd66) cell_hc_apps_pane_t1

0xeb15,	// (0x0003fd58) grid_highlight_pane_cp10_ParamLimits

0xeb15,	// (0x0003fd58) grid_highlight_pane_cp10

0xcb63,	// (0x0003dda6) list_single_hc_apps_pane_ParamLimits

0xcb63,	// (0x0003dda6) list_single_hc_apps_pane

0xcba2,	// (0x0003dde5) list_single_hc_apps_pane_g1

0x7d00,	// (0x00038f43) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00040f26) list_single_hc_apps_pane_g

0x7d19,	// (0x00038f5c) list_single_hc_apps_pane_g2_copy1

0x7d35,	// (0x00038f78) list_single_hc_apps_pane_t1

0xe9d4,	// (0x0003fc17) bg_set_opt_pane_cp_ParamLimits

0x592c,	// (0x00036b6f) setting_slider_pane_t1_ParamLimits

0x5945,	// (0x00036b88) setting_slider_pane_t2_ParamLimits

0x595f,	// (0x00036ba2) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000407a1) setting_slider_pane_t_ParamLimits

0x5977,	// (0x00036bba) slider_set_pane_ParamLimits

0x6cfe,	// (0x00037f41) control_pane_g5_ParamLimits

0x6cfe,	// (0x00037f41) control_pane_g5

0xa430,	// (0x0003b673) slider_set_pane_g1_ParamLimits

0x75b4,	// (0x000387f7) slider_set_pane_g2_ParamLimits

0x75c0,	// (0x00038803) slider_set_pane_g3_ParamLimits

0x75d4,	// (0x00038817) slider_set_pane_g4_ParamLimits

0x75ec,	// (0x0003882f) slider_set_pane_g5_ParamLimits

0x75c0,	// (0x00038803) slider_set_pane_g6_ParamLimits

0x7602,	// (0x00038845) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00040ba2) slider_set_pane_g_ParamLimits

0x25c9,	// (0x0003380c) navi_icon_text_pane_ParamLimits

0x8bc1,	// (0x00039e04) aid_fill_nsta_2_ParamLimits

0x8c02,	// (0x00039e45) aid_touch_tab_arrow_left_ParamLimits

0x8c11,	// (0x00039e54) aid_touch_tab_arrow_right_ParamLimits

0x8c7e,	// (0x00039ec1) clock_nsta_pane_ParamLimits

0x9f0c,	// (0x0003b14f) navi_icon_pane_g1_ParamLimits

0x9f18,	// (0x0003b15b) navi_text_pane_t1_ParamLimits

0xb2f7,	// (0x0003c53a) navi_icon_text_pane_g1_ParamLimits

0xb303,	// (0x0003c546) navi_icon_text_pane_t1_ParamLimits

0xcba2,	// (0x0003dde5) list_single_hc_apps_pane_g1_ParamLimits

0x7d00,	// (0x00038f43) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00040f26) list_single_hc_apps_pane_g_ParamLimits

0x7d19,	// (0x00038f5c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7d35,	// (0x00038f78) list_single_hc_apps_pane_t1_ParamLimits

0x5774,	// (0x000369b7) popup_toolbar2_fixed_window_ParamLimits

0x5774,	// (0x000369b7) popup_toolbar2_fixed_window

0x8ac5,	// (0x00039d08) popup_toolbar2_float_window

0xe966,	// (0x0003fba9) bg_popup_sub_pane_cp27

0xcbbb,	// (0x0003ddfe) grid_toolbar2_float_pane

0xe966,	// (0x0003fba9) bg_popup_sub_pane_cp26

0xcbbb,	// (0x0003ddfe) grid_toolbar2_fixed_pane

0xcbc3,	// (0x0003de06) cell_toolbar2_fixed_pane_ParamLimits

0xcbc3,	// (0x0003de06) cell_toolbar2_fixed_pane

0xcbd3,	// (0x0003de16) cell_toolbar2_fixed_pane_g1

0xcbdc,	// (0x0003de1f) toolbar2_fixed_button_pane

0x90b5,	// (0x0003a2f8) toolbar2_fixed_button_pane_g1

0x90c5,	// (0x0003a308) toolbar2_fixed_button_pane_g2

0x90bd,	// (0x0003a300) toolbar2_fixed_button_pane_g3

0x90d5,	// (0x0003a318) toolbar2_fixed_button_pane_g4

0x90cd,	// (0x0003a310) toolbar2_fixed_button_pane_g5

0x90dd,	// (0x0003a320) toolbar2_fixed_button_pane_g6

0x90e5,	// (0x0003a328) toolbar2_fixed_button_pane_g7

0x90f5,	// (0x0003a338) toolbar2_fixed_button_pane_g8

0x90ed,	// (0x0003a330) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00040aa4) toolbar2_fixed_button_pane_g

0xcbe4,	// (0x0003de27) cell_toolbar2_float_pane_ParamLimits

0xcbe4,	// (0x0003de27) cell_toolbar2_float_pane

0xcbf5,	// (0x0003de38) cell_toolbar2_float_pane_g1

0xcbdc,	// (0x0003de1f) toolbar2_fixed_button_pane_cp

0xb830,	// (0x0003ca73) fep_vkb_accented_list_pane_ParamLimits

0xb830,	// (0x0003ca73) fep_vkb_accented_list_pane

0x7a16,	// (0x00038c59) bg_popup_fep_shadow_pane_g9

0x2725,	// (0x00033968) bg_popup_fep_shadow_pane_cp3

0x1ee7,	// (0x0003312a) list_accented_list_pane

0xcbfe,	// (0x0003de41) list_single_accented_list_pane_ParamLimits

0xcbfe,	// (0x0003de41) list_single_accented_list_pane

0x2725,	// (0x00033968) list_highlight_pane_cp10

0xcc0f,	// (0x0003de52) list_single_accented_list_pane_t1

0x8a0b,	// (0x00039c4e) popup_slider_window_ParamLimits

0x8a0b,	// (0x00039c4e) popup_slider_window

0xc836,	// (0x0003da79) aid_indentation_list_msg

0xccdb,	// (0x0003df1e) bg_popup_window_pane_cp19

0xcd49,	// (0x0003df8c) popup_slider_window_g1

0xcd65,	// (0x0003dfa8) popup_slider_window_g2

0xcd81,	// (0x0003dfc4) popup_slider_window_g3

0x0005,

0xfce8,	// (0x00040f2b) popup_slider_window_g

0xcddd,	// (0x0003e020) popup_slider_window_t1

0xce51,	// (0x0003e094) small_volume_slider_vertical_pane

0xb6f9,	// (0x0003c93c) small_volume_slider_vertical_pane_g1

0xb6f9,	// (0x0003c93c) small_volume_slider_vertical_pane_g2

0xce6d,	// (0x0003e0b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x00040f3d) small_volume_slider_vertical_pane_g

0x5522,	// (0x00036765) area_side_right_pane_ParamLimits

0x5522,	// (0x00036765) area_side_right_pane

0x7d63,	// (0x00038fa6) aid_size_side_button_ParamLimits

0x7d63,	// (0x00038fa6) aid_size_side_button

0x7d77,	// (0x00038fba) grid_sctrl_middle_pane_ParamLimits

0x7d77,	// (0x00038fba) grid_sctrl_middle_pane

0x7d97,	// (0x00038fda) sctrl_sk_bottom_pane

0x7da8,	// (0x00038feb) sctrl_sk_top_pane

0x7dba,	// (0x00038ffd) aid_touch_sctrl_top

0x7dc7,	// (0x0003900a) bg_sctrl_sk_pane_ParamLimits

0x7dc7,	// (0x0003900a) bg_sctrl_sk_pane

0x7dd5,	// (0x00039018) sctrl_sk_top_pane_g1

0x7de2,	// (0x00039025) sctrl_sk_top_pane_t1

0x7dba,	// (0x00038ffd) aid_touch_sctrl_bottom

0x7dc7,	// (0x0003900a) bg_sctrl_sk_pane_cp_ParamLimits

0x7dc7,	// (0x0003900a) bg_sctrl_sk_pane_cp

0x7dfd,	// (0x00039040) sctrl_sk_bottom_pane_g1

0x7de2,	// (0x00039025) sctrl_sk_bottom_pane_t1

0x7e06,	// (0x00039049) cell_sctrl_middle_pane_ParamLimits

0x7e06,	// (0x00039049) cell_sctrl_middle_pane

0x7e23,	// (0x00039066) aid_touch_sctrl_middle_ParamLimits

0x7e23,	// (0x00039066) aid_touch_sctrl_middle

0x7e35,	// (0x00039078) bg_sctrl_middle_pane_ParamLimits

0x7e35,	// (0x00039078) bg_sctrl_middle_pane

0x7a36,	// (0x00038c79) cell_sctrl_middle_pane_g1_ParamLimits

0x7a36,	// (0x00038c79) cell_sctrl_middle_pane_g1

0x7e43,	// (0x00039086) cell_sctrl_middle_pane_g2_ParamLimits

0x7e43,	// (0x00039086) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x00040f49) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x00040f49) cell_sctrl_middle_pane_g

0x90b5,	// (0x0003a2f8) bg_sctrl_middle_pane_g1

0x90bd,	// (0x0003a300) bg_sctrl_middle_pane_g2

0x90c5,	// (0x0003a308) bg_sctrl_middle_pane_g3

0x90cd,	// (0x0003a310) bg_sctrl_middle_pane_g4

0x90d5,	// (0x0003a318) bg_sctrl_middle_pane_g5

0x90dd,	// (0x0003a320) bg_sctrl_middle_pane_g6

0x90e5,	// (0x0003a328) bg_sctrl_middle_pane_g7

0x90ed,	// (0x0003a330) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x00040f4e) bg_sctrl_middle_pane_g

0x90f5,	// (0x0003a338) bg_sctrl_middle_pane_g8_copy1

0x90b5,	// (0x0003a2f8) bg_sctrl_sk_pane_g1

0x90c5,	// (0x0003a308) bg_sctrl_sk_pane_g2

0x90bd,	// (0x0003a300) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00040aa4) bg_sctrl_sk_pane_g

0xf4e8,	// (0x0004072b) aid_size_touch_scroll_bar

0x90d5,	// (0x0003a318) bg_sctrl_sk_pane_g4

0x90cd,	// (0x0003a310) bg_sctrl_sk_pane_g5

0x90dd,	// (0x0003a320) bg_sctrl_sk_pane_g6

0x90e5,	// (0x0003a328) bg_sctrl_sk_pane_g7

0x90f5,	// (0x0003a338) bg_sctrl_sk_pane_g8

0x90ed,	// (0x0003a330) bg_sctrl_sk_pane_g9

0x6f47,	// (0x0003818a) popup_fep_china_hwr2_fs_candidate_window

0x6f51,	// (0x00038194) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6f51,	// (0x00038194) popup_fep_china_hwr2_fs_control_window

0x7a36,	// (0x00038c79) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00040f44) sctrl_sk_top_pane_g

0xce76,	// (0x0003e0b9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce76,	// (0x0003e0b9) aid_fep_china_hwr2_fs_cell

0xce89,	// (0x0003e0cc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce89,	// (0x0003e0cc) bg_popup_fep_shadow_pane_cp4

0xcea2,	// (0x0003e0e5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcea2,	// (0x0003e0e5) bg_popup_fep_shadow_pane_cp5

0xceb4,	// (0x0003e0f7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xceb4,	// (0x0003e0f7) popup_fep_china_hwr2_fs_control_bar_grid

0xcec4,	// (0x0003e107) popup_fep_china_hwr2_fs_control_funtion_grid

0xcecc,	// (0x0003e10f) aid_fep_china_hwr2_fs_candi_cell

0xe966,	// (0x0003fba9) bg_popup_fep_shadow_pane_cp6

0xced6,	// (0x0003e119) popup_fep_china_hwr2_fs_candidate_grid

0xcee0,	// (0x0003e123) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcee0,	// (0x0003e123) cell_fep_china_hwr2_fs_funtion_grid

0xb6f9,	// (0x0003c93c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcef8,	// (0x0003e13b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcef8,	// (0x0003e13b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf06,	// (0x0003e149) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf06,	// (0x0003e149) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00040f5f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00040f5f) cell_fep_china_hwr2_fs_funtion_grid_g

0xcf1c,	// (0x0003e15f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcf1c,	// (0x0003e15f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf31,	// (0x0003e174) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf31,	// (0x0003e174) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x00040f64) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x00040f64) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf4d,	// (0x0003e190) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf55,	// (0x0003e198) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf5d,	// (0x0003e1a0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00040f69) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf65,	// (0x0003e1a8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf65,	// (0x0003e1a8) cell_fep_china_hwr2_fs_candidate_grid

0xcf84,	// (0x0003e1c7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf8c,	// (0x0003e1cf) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb6f9,	// (0x0003c93c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb6f9,	// (0x0003c93c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x00040d7d) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf94,	// (0x0003e1d7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c91,	// (0x00039ed4) clock_nsta_pane_cp_24_ParamLimits

0x8c91,	// (0x00039ed4) clock_nsta_pane_cp_24

0x8d11,	// (0x00039f54) indicator_nsta_pane_cp_24_ParamLimits

0x8d11,	// (0x00039f54) indicator_nsta_pane_cp_24

0x9d88,	// (0x0003afcb) heading_pane_g1

0x0001,

0xf8c6,	// (0x00040b09) heading_pane_g

0xa82a,	// (0x0003ba6d) grid_sct_catagory_button_pane

0xa85c,	// (0x0003ba9f) scroll_pane_cp5_ParamLimits

0xb345,	// (0x0003c588) button_value_adjust_pane_cp5_ParamLimits

0xb345,	// (0x0003c588) button_value_adjust_pane_cp5

0xb42a,	// (0x0003c66d) form2_midp_time_pane_ParamLimits

0xcfa2,	// (0x0003e1e5) cell_sct_catagory_button_pane_ParamLimits

0xcfa2,	// (0x0003e1e5) cell_sct_catagory_button_pane

0xb6be,	// (0x0003c901) bg_button_pane_cp01_ParamLimits

0xb6be,	// (0x0003c901) bg_button_pane_cp01

0xb6f9,	// (0x0003c93c) cell_sct_catagory_button_pane_g1

0x8a4c,	// (0x00039c8f) popup_tb_extension_window

0xcfb4,	// (0x0003e1f7) aid_size_cell_ext_ParamLimits

0xcfb4,	// (0x0003e1f7) aid_size_cell_ext

0xeb15,	// (0x0003fd58) bg_tb_trans_pane_cp1_ParamLimits

0xeb15,	// (0x0003fd58) bg_tb_trans_pane_cp1

0xcfd4,	// (0x0003e217) grid_tb_ext_pane_ParamLimits

0xcfd4,	// (0x0003e217) grid_tb_ext_pane

0xd004,	// (0x0003e247) cell_tb_ext_pane_ParamLimits

0xd004,	// (0x0003e247) cell_tb_ext_pane

0xd01b,	// (0x0003e25e) cell_tb_ext_pane_g1_ParamLimits

0xd01b,	// (0x0003e25e) cell_tb_ext_pane_g1

0xd038,	// (0x0003e27b) cell_tb_ext_pane_t1

0xeb15,	// (0x0003fd58) list_highlight_pane_cp11_ParamLimits

0xeb15,	// (0x0003fd58) list_highlight_pane_cp11

0x5793,	// (0x000369d6) popup_uni_indicator_window_ParamLimits

0x5793,	// (0x000369d6) popup_uni_indicator_window

0x1dd4,	// (0x00033017) bg_popup_sub_pane_cp14

0xd053,	// (0x0003e296) list_uniindi_pane

0xd05f,	// (0x0003e2a2) uniindi_top_pane

0xeb15,	// (0x0003fd58) bg_uniindi_top_pane

0xd080,	// (0x0003e2c3) uniindi_top_pane_g1

0xd096,	// (0x0003e2d9) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00040f70) uniindi_top_pane_g

0xd0c0,	// (0x0003e303) uniindi_top_pane_t1

0xd0ec,	// (0x0003e32f) list_single_uniindi_pane_ParamLimits

0xd0ec,	// (0x0003e32f) list_single_uniindi_pane

0xb6f9,	// (0x0003c93c) bg_uniindi_top_pane_g1

0xd0fe,	// (0x0003e341) list_single_uniindi_pane_g1

0xd111,	// (0x0003e354) list_single_uniindi_pane_t1

0x55ff,	// (0x00036842) control_bg_pane

0xd136,	// (0x0003e379) bg_sctrl_sk_pane_cp1

0xd13f,	// (0x0003e382) bg_sctrl_sk_pane_cp2

0xd148,	// (0x0003e38b) control_bg_pane_g1

0xd151,	// (0x0003e394) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00040f79) control_bg_pane_g

0xb16c,	// (0x0003c3af) cell_indicator_nsta_pane_g1_ParamLimits

0xb17a,	// (0x0003c3bd) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x00040ce1) cell_indicator_nsta_pane_g_ParamLimits

0x42c1,	// (0x00035504) form2_midp_time_pane_t1_ParamLimits

0xf32a,	// (0x0004056d) main_idle_act4_pane_ParamLimits

0xf32a,	// (0x0004056d) main_idle_act4_pane

0x8a4c,	// (0x00039c8f) popup_tb_extension_window_ParamLimits

0xcff6,	// (0x0003e239) tb_ext_find_pane_ParamLimits

0xcff6,	// (0x0003e239) tb_ext_find_pane

0xd15a,	// (0x0003e39d) ai_gene_pane_1_cp1

0x6a65,	// (0x00037ca8) ai_gene_pane_2_cp1

0xd162,	// (0x0003e3a5) list_single_idle_plugin_calendar_pane

0xd16b,	// (0x0003e3ae) list_single_idle_plugin_notification_pane

0xd174,	// (0x0003e3b7) list_single_idle_plugin_player_pane

0xd17d,	// (0x0003e3c0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd17d,	// (0x0003e3c0) list_single_idle_plugin_shortcut_pane

0xd19f,	// (0x0003e3e2) main_idle_act4_pane_t1

0xd1b1,	// (0x0003e3f4) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00040f7e) main_idle_act4_pane_t

0xd1c3,	// (0x0003e406) middle_sk_idle_act4_pane_ParamLimits

0xd1c3,	// (0x0003e406) middle_sk_idle_act4_pane

0xd1d9,	// (0x0003e41c) popup_clock_digital_analogue_window_cp2

0xd1f3,	// (0x0003e436) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1f3,	// (0x0003e436) shortcut_wheel_idle_act4_pane

0xb6f9,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g1

0xb6f9,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g2

0xb6f9,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g3

0xb6f9,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g4

0xb6f9,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g5

0xd207,	// (0x0003e44a) shortcut_wheel_idle_act4_pane_g6

0xd20f,	// (0x0003e452) shortcut_wheel_idle_act4_pane_g7

0xd217,	// (0x0003e45a) shortcut_wheel_idle_act4_pane_g8

0xd21f,	// (0x0003e462) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x00040f83) shortcut_wheel_idle_act4_pane_g

0xb974,	// (0x0003cbb7) middle_sk_idle_act4_pane_g1_ParamLimits

0xb974,	// (0x0003cbb7) middle_sk_idle_act4_pane_g1

0xd283,	// (0x0003e4c6) middle_sk_idle_act4_pane_g2_ParamLimits

0xd283,	// (0x0003e4c6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x00040fa6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x00040fa6) middle_sk_idle_act4_pane_g

0xd28f,	// (0x0003e4d2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd28f,	// (0x0003e4d2) middle_sk_idle_act4_pane_t1

0xd2ac,	// (0x0003e4ef) grid_ai_shortcut_pane_ParamLimits

0xd2ac,	// (0x0003e4ef) grid_ai_shortcut_pane

0xd2c5,	// (0x0003e508) list_highlight_pane_cp16_ParamLimits

0xd2c5,	// (0x0003e508) list_highlight_pane_cp16

0xd2d2,	// (0x0003e515) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd2d2,	// (0x0003e515) list_single_idle_plugin_shortcut_pane_g1

0xd2de,	// (0x0003e521) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd2de,	// (0x0003e521) list_single_idle_plugin_shortcut_pane_g2

0xd2f8,	// (0x0003e53b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2f8,	// (0x0003e53b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00040fab) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00040fab) list_single_idle_plugin_shortcut_pane_g

0xd30b,	// (0x0003e54e) cell_ai_shortcut_pane_ParamLimits

0xd30b,	// (0x0003e54e) cell_ai_shortcut_pane

0xd32e,	// (0x0003e571) cell_ai_shortcut_pane_g1_ParamLimits

0xd32e,	// (0x0003e571) cell_ai_shortcut_pane_g1

0xd15a,	// (0x0003e39d) ai_gene_pane_1_cp2

0xd350,	// (0x0003e593) ai_gene_pane_2_cp2

0xd358,	// (0x0003e59b) list_highlight_pane_cp15

0xd361,	// (0x0003e5a4) list_single_idle_plugin_calendar_pane_g1

0xd358,	// (0x0003e59b) list_highlight_pane_cp17

0xd369,	// (0x0003e5ac) list_single_idle_plugin_calendar_pane_g1_copy1

0xd371,	// (0x0003e5b4) list_single_idle_plugin_player_pane_g1

0xaa91,	// (0x0003bcd4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00040fb2) list_single_idle_plugin_player_pane_g

0xd379,	// (0x0003e5bc) list_single_idle_plugin_player_pane_t1

0xd387,	// (0x0003e5ca) list_single_idle_plugin_player_pane_t2

0xd395,	// (0x0003e5d8) list_single_idle_plugin_player_pane_t3

0xd3a3,	// (0x0003e5e6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x00040fb7) list_single_idle_plugin_player_pane_t

0xd3b1,	// (0x0003e5f4) wait_bar_pane_cp15

0xd3b9,	// (0x0003e5fc) grid_ai_notification_pane

0xaa91,	// (0x0003bcd4) list_single_idle_plugin_notification_pane_g1

0xd3c2,	// (0x0003e605) cell_ai_notification_pane_ParamLimits

0xd3c2,	// (0x0003e605) cell_ai_notification_pane

0xd3cf,	// (0x0003e612) cell_ai_notification_pane_g1

0xd3d7,	// (0x0003e61a) cell_ai_notification_pane_t1

0xd3e5,	// (0x0003e628) tb_ext_find_button_pane

0xd3ed,	// (0x0003e630) tb_ext_find_pane_g1

0xd3f5,	// (0x0003e638) tb_ext_find_pane_t1

0x22b6,	// (0x000334f9) tb_ext_find_button_pane_g1

0xd403,	// (0x0003e646) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00040fc0) tb_ext_find_button_pane_g

0xd19f,	// (0x0003e3e2) main_idle_act4_pane_t1_ParamLimits

0xd1b1,	// (0x0003e3f4) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00040f7e) main_idle_act4_pane_t_ParamLimits

0xd1d9,	// (0x0003e41c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1e7,	// (0x0003e42a) sat_plugin_idle_act4_pane_ParamLimits

0xd1e7,	// (0x0003e42a) sat_plugin_idle_act4_pane

0xd40c,	// (0x0003e64f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd40c,	// (0x0003e64f) sat_plugin_idle_act4_pane_t1

0xd41f,	// (0x0003e662) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd41f,	// (0x0003e662) sat_plugin_idle_act4_pane_t2

0xd432,	// (0x0003e675) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd432,	// (0x0003e675) sat_plugin_idle_act4_pane_t3

0xd445,	// (0x0003e688) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd445,	// (0x0003e688) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x00040fc5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x00040fc5) sat_plugin_idle_act4_pane_t

0x56c4,	// (0x00036907) popup_battery_window_ParamLimits

0x56c4,	// (0x00036907) popup_battery_window

0xeb15,	// (0x0003fd58) bg_popup_sub_pane_cp25_ParamLimits

0xeb15,	// (0x0003fd58) bg_popup_sub_pane_cp25

0xd458,	// (0x0003e69b) popup_battery_window_g1_ParamLimits

0xd458,	// (0x0003e69b) popup_battery_window_g1

0xd464,	// (0x0003e6a7) popup_battery_window_t1_ParamLimits

0xd464,	// (0x0003e6a7) popup_battery_window_t1

0xd476,	// (0x0003e6b9) popup_battery_window_t2_ParamLimits

0xd476,	// (0x0003e6b9) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00040fce) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00040fce) popup_battery_window_t

0x6930,	// (0x00037b73) midp_canvas_pane_ParamLimits

0x69a7,	// (0x00037bea) midp_keypad_pane_ParamLimits

0x69a7,	// (0x00037bea) midp_keypad_pane

0x6e99,	// (0x000380dc) main_midp_pane_ParamLimits

0xb1f8,	// (0x0003c43b) signal_pane_g2_cp_ParamLimits

0xd493,	// (0x0003e6d6) aid_size_cell_midp_keypad_ParamLimits

0xd493,	// (0x0003e6d6) aid_size_cell_midp_keypad

0xd4ad,	// (0x0003e6f0) midp_keyp_game_grid_pane_ParamLimits

0xd4ad,	// (0x0003e6f0) midp_keyp_game_grid_pane

0xd4cd,	// (0x0003e710) midp_keyp_rocker_pane_ParamLimits

0xd4cd,	// (0x0003e710) midp_keyp_rocker_pane

0xd4f8,	// (0x0003e73b) midp_keyp_sk_left_pane_ParamLimits

0xd4f8,	// (0x0003e73b) midp_keyp_sk_left_pane

0xd552,	// (0x0003e795) midp_keyp_sk_right_pane_ParamLimits

0xd552,	// (0x0003e795) midp_keyp_sk_right_pane

0xe966,	// (0x0003fba9) bg_button_pane_cp03

0xd5ac,	// (0x0003e7ef) midp_keyp_sk_left_pane_g1

0xe966,	// (0x0003fba9) bg_button_pane_cp04

0xd5ac,	// (0x0003e7ef) midp_keyp_sk_right_pane_g1

0xb6f9,	// (0x0003c93c) midp_keyp_rocker_pane_g1

0xd5b5,	// (0x0003e7f8) keyp_game_cell_pane_ParamLimits

0xd5b5,	// (0x0003e7f8) keyp_game_cell_pane

0xe966,	// (0x0003fba9) bg_button_pane_cp02

0xd5c8,	// (0x0003e80b) keyp_game_cell_pane_g1

0x570e,	// (0x00036951) popup_fep_vkb2_window_ParamLimits

0x570e,	// (0x00036951) popup_fep_vkb2_window

0x7e61,	// (0x000390a4) aid_size_cell_vkb2_ParamLimits

0x7e61,	// (0x000390a4) aid_size_cell_vkb2

0x7eb5,	// (0x000390f8) popup_fep_vkb2_window_g1_ParamLimits

0x7eb5,	// (0x000390f8) popup_fep_vkb2_window_g1

0x7efd,	// (0x00039140) vkb2_area_bottom_pane_ParamLimits

0x7efd,	// (0x00039140) vkb2_area_bottom_pane

0x7f51,	// (0x00039194) vkb2_area_keypad_pane_ParamLimits

0x7f51,	// (0x00039194) vkb2_area_keypad_pane

0x7f97,	// (0x000391da) vkb2_area_top_pane_ParamLimits

0x7f97,	// (0x000391da) vkb2_area_top_pane

0x8011,	// (0x00039254) vkb2_top_entry_pane_ParamLimits

0x8011,	// (0x00039254) vkb2_top_entry_pane

0x803b,	// (0x0003927e) vkb2_top_grid_left_pane_ParamLimits

0x803b,	// (0x0003927e) vkb2_top_grid_left_pane

0x8059,	// (0x0003929c) vkb2_top_grid_right_pane_ParamLimits

0x8059,	// (0x0003929c) vkb2_top_grid_right_pane

0x8077,	// (0x000392ba) vkb2_cell_keypad_pane_ParamLimits

0x8077,	// (0x000392ba) vkb2_cell_keypad_pane

0x8148,	// (0x0003938b) vkb2_area_bottom_grid_pane_ParamLimits

0x8148,	// (0x0003938b) vkb2_area_bottom_grid_pane

0x816e,	// (0x000393b1) vkb2_area_bottom_pane_g1_ParamLimits

0x816e,	// (0x000393b1) vkb2_area_bottom_pane_g1

0x8192,	// (0x000393d5) vkb2_area_bottom_pane_g2_ParamLimits

0x8192,	// (0x000393d5) vkb2_area_bottom_pane_g2

0x81c0,	// (0x00039403) vkb2_area_bottom_pane_g3_ParamLimits

0x81c0,	// (0x00039403) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x00040fd3) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x00040fd3) vkb2_area_bottom_pane_g

0x8221,	// (0x00039464) vkb2_top_cell_left_pane_ParamLimits

0x8221,	// (0x00039464) vkb2_top_cell_left_pane

0xd5d9,	// (0x0003e81c) vkb2_top_entry_pane_g1_ParamLimits

0xd5d9,	// (0x0003e81c) vkb2_top_entry_pane_g1

0xd5e7,	// (0x0003e82a) vkb2_top_entry_pane_t1_ParamLimits

0xd5e7,	// (0x0003e82a) vkb2_top_entry_pane_t1

0xd619,	// (0x0003e85c) vkb2_top_entry_pane_t2_ParamLimits

0xd619,	// (0x0003e85c) vkb2_top_entry_pane_t2

0xd64b,	// (0x0003e88e) vkb2_top_entry_pane_t3_ParamLimits

0xd64b,	// (0x0003e88e) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00040fda) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00040fda) vkb2_top_entry_pane_t

0x826e,	// (0x000394b1) vkb2_top_grid_right_pane_g1_ParamLimits

0x826e,	// (0x000394b1) vkb2_top_grid_right_pane_g1

0x8284,	// (0x000394c7) vkb2_top_grid_right_pane_g2_ParamLimits

0x8284,	// (0x000394c7) vkb2_top_grid_right_pane_g2

0x829c,	// (0x000394df) vkb2_top_grid_right_pane_g3_ParamLimits

0x829c,	// (0x000394df) vkb2_top_grid_right_pane_g3

0x82b4,	// (0x000394f7) vkb2_top_grid_right_pane_g4_ParamLimits

0x82b4,	// (0x000394f7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00040fe1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00040fe1) vkb2_top_grid_right_pane_g

0x82ca,	// (0x0003950d) vkb2_top_cell_left_pane_g1

0x82e1,	// (0x00039524) vkb2_cell_keypad_pane_g1_ParamLimits

0x82e1,	// (0x00039524) vkb2_cell_keypad_pane_g1

0xd66f,	// (0x0003e8b2) vkb2_cell_keypad_pane_t1_ParamLimits

0xd66f,	// (0x0003e8b2) vkb2_cell_keypad_pane_t1

0x82ef,	// (0x00039532) vkb2_cell_bottom_grid_pane_ParamLimits

0x82ef,	// (0x00039532) vkb2_cell_bottom_grid_pane

0x8328,	// (0x0003956b) vkb2_cell_bottom_grid_pane_g1

0xd227,	// (0x0003e46a) aid_call2_pane_cp02

0xd22f,	// (0x0003e472) aid_call_pane_cp02

0xd237,	// (0x0003e47a) clock_digital_number_pane_cp10

0xd23f,	// (0x0003e482) clock_digital_number_pane_cp11

0xd247,	// (0x0003e48a) clock_digital_number_pane_cp12

0xd24f,	// (0x0003e492) clock_digital_number_pane_cp13

0xd257,	// (0x0003e49a) clock_digital_separator_pane_cp10

0x22b6,	// (0x000334f9) popup_clock_digital_analogue_window_cp2_g1

0x22b6,	// (0x000334f9) popup_clock_digital_analogue_window_cp2_g2

0xd25f,	// (0x0003e4a2) popup_clock_digital_analogue_window_cp2_g3

0x22b6,	// (0x000334f9) popup_clock_digital_analogue_window_cp2_g4

0xd25f,	// (0x0003e4a2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x00040f96) popup_clock_digital_analogue_window_cp2_g

0xd267,	// (0x0003e4aa) popup_clock_digital_analogue_window_cp2_t1

0xd275,	// (0x0003e4b8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00040fa1) popup_clock_digital_analogue_window_cp2_t

0xb6f9,	// (0x0003c93c) clock_digital_number_pane_cp10_g1

0xb6f9,	// (0x0003c93c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040d7d) clock_digital_number_pane_cp10_g

0xb6f9,	// (0x0003c93c) clock_digital_separator_pane_cp10_g1

0xb6f9,	// (0x0003c93c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040d7d) clock_digital_separator_pane_cp10_g

0xd0a2,	// (0x0003e2e5) uniindi_top_pane_g3

0xd0b3,	// (0x0003e2f6) uniindi_top_pane_g4

0x8102,	// (0x00039345) vkb2_row_keypad_pane_ParamLimits

0x8102,	// (0x00039345) vkb2_row_keypad_pane

0x8344,	// (0x00039587) vkb2_cell_t_keypad_pane_ParamLimits

0x8344,	// (0x00039587) vkb2_cell_t_keypad_pane

0x8354,	// (0x00039597) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8354,	// (0x00039597) vkb2_cell_t_keypad_pane_cp08

0x8369,	// (0x000395ac) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8369,	// (0x000395ac) vkb2_cell_t_keypad_pane_cp09

0x837d,	// (0x000395c0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x837d,	// (0x000395c0) vkb2_cell_t_keypad_pane_cp01

0x838e,	// (0x000395d1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x838e,	// (0x000395d1) vkb2_cell_t_keypad_pane_cp02

0x839f,	// (0x000395e2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x839f,	// (0x000395e2) vkb2_cell_t_keypad_pane_cp03

0x83b0,	// (0x000395f3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x83b0,	// (0x000395f3) vkb2_cell_t_keypad_pane_cp04

0x83c1,	// (0x00039604) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x83c1,	// (0x00039604) vkb2_cell_t_keypad_pane_cp05

0x83d2,	// (0x00039615) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x83d2,	// (0x00039615) vkb2_cell_t_keypad_pane_cp06

0x83e5,	// (0x00039628) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x83e5,	// (0x00039628) vkb2_cell_t_keypad_pane_cp07

0x83fa,	// (0x0003963d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x83fa,	// (0x0003963d) vkb2_cell_t_keypad_pane_cp10

0x7a36,	// (0x00038c79) vkb2_cell_t_keypad_pane_g1

0xd686,	// (0x0003e8c9) vkb2_cell_t_keypad_pane_t1

0x55ff,	// (0x00036842) popup_grid_graphic2_window

0xd698,	// (0x0003e8db) aid_size_cell_graphic2_ParamLimits

0xd698,	// (0x0003e8db) aid_size_cell_graphic2

0xd6d0,	// (0x0003e913) bg_popup_window_pane_cp21_ParamLimits

0xd6d0,	// (0x0003e913) bg_popup_window_pane_cp21

0xd6de,	// (0x0003e921) graphic2_pages_pane_ParamLimits

0xd6de,	// (0x0003e921) graphic2_pages_pane

0xd724,	// (0x0003e967) grid_graphic2_control_pane_ParamLimits

0xd724,	// (0x0003e967) grid_graphic2_control_pane

0xd762,	// (0x0003e9a5) grid_graphic2_pane_ParamLimits

0xd762,	// (0x0003e9a5) grid_graphic2_pane

0xd7d8,	// (0x0003ea1b) cell_graphic2_pane

0xe966,	// (0x0003fba9) main_comp_mode_pane

0xc8f2,	// (0x0003db35) list_ai3_gene_pane_ParamLimits

0xccdb,	// (0x0003df1e) bg_popup_window_pane_cp19_ParamLimits

0xcce7,	// (0x0003df2a) bg_touch_area_indi_pane_ParamLimits

0xcce7,	// (0x0003df2a) bg_touch_area_indi_pane

0xccfd,	// (0x0003df40) bg_touch_area_indi_pane_cp01_ParamLimits

0xccfd,	// (0x0003df40) bg_touch_area_indi_pane_cp01

0xcd15,	// (0x0003df58) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd15,	// (0x0003df58) bg_touch_area_indi_pane_cp02

0xcd2f,	// (0x0003df72) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd2f,	// (0x0003df72) bg_touch_area_indi_pane_cp03

0xcd49,	// (0x0003df8c) popup_slider_window_g1_ParamLimits

0xcd65,	// (0x0003dfa8) popup_slider_window_g2_ParamLimits

0xcd81,	// (0x0003dfc4) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x00040f2b) popup_slider_window_g_ParamLimits

0xcddd,	// (0x0003e020) popup_slider_window_t1_ParamLimits

0xce51,	// (0x0003e094) small_volume_slider_vertical_pane_ParamLimits

0xd7d8,	// (0x0003ea1b) cell_graphic2_pane_ParamLimits

0xd82a,	// (0x0003ea6d) bg_button_pane_cp10_ParamLimits

0xd82a,	// (0x0003ea6d) bg_button_pane_cp10

0xd83f,	// (0x0003ea82) bg_button_pane_cp11_ParamLimits

0xd83f,	// (0x0003ea82) bg_button_pane_cp11

0xd854,	// (0x0003ea97) graphic2_pages_pane_g1_ParamLimits

0xd854,	// (0x0003ea97) graphic2_pages_pane_g1

0xd86f,	// (0x0003eab2) graphic2_pages_pane_g2_ParamLimits

0xd86f,	// (0x0003eab2) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00040fef) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00040fef) graphic2_pages_pane_g

0xd887,	// (0x0003eaca) graphic2_pages_pane_t1_ParamLimits

0xd887,	// (0x0003eaca) graphic2_pages_pane_t1

0xd89d,	// (0x0003eae0) cell_graphic2_control_pane_ParamLimits

0xd89d,	// (0x0003eae0) cell_graphic2_control_pane

0xd8c0,	// (0x0003eb03) cell_graphic2_pane_g1_ParamLimits

0xd8c0,	// (0x0003eb03) cell_graphic2_pane_g1

0xd8cd,	// (0x0003eb10) cell_graphic2_pane_g2_ParamLimits

0xd8cd,	// (0x0003eb10) cell_graphic2_pane_g2

0xd8da,	// (0x0003eb1d) cell_graphic2_pane_g3_ParamLimits

0xd8da,	// (0x0003eb1d) cell_graphic2_pane_g3

0xd8e7,	// (0x0003eb2a) cell_graphic2_pane_g4_ParamLimits

0xd8e7,	// (0x0003eb2a) cell_graphic2_pane_g4

0xd8f4,	// (0x0003eb37) cell_graphic2_pane_g5_ParamLimits

0xd8f4,	// (0x0003eb37) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00040ff4) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00040ff4) cell_graphic2_pane_g

0xd90f,	// (0x0003eb52) cell_graphic2_pane_t1_ParamLimits

0xd90f,	// (0x0003eb52) cell_graphic2_pane_t1

0x9129,	// (0x0003a36c) grid_highlight_pane_cp11_ParamLimits

0x9129,	// (0x0003a36c) grid_highlight_pane_cp11

0xeb15,	// (0x0003fd58) bg_button_pane_cp05

0xd938,	// (0x0003eb7b) cell_graphic2_control_pane_g1

0xb6f9,	// (0x0003c93c) bg_touch_area_indi_pane_g1

0xd960,	// (0x0003eba3) aid_cmod_rocker_key_size

0xd96a,	// (0x0003ebad) aid_cmode_itu_key_size

0xd974,	// (0x0003ebb7) main_cmode_video_pane

0xd97e,	// (0x0003ebc1) main_comp_mode_itu_pane

0xd98a,	// (0x0003ebcd) main_comp_mode_rocker_pane

0xd996,	// (0x0003ebd9) cell_cmode_rocker_pane_ParamLimits

0xd996,	// (0x0003ebd9) cell_cmode_rocker_pane

0xd9aa,	// (0x0003ebed) cell_cmode_itu_pane_ParamLimits

0xd9aa,	// (0x0003ebed) cell_cmode_itu_pane

0x1dd4,	// (0x00033017) bg_button_pane_cp06_ParamLimits

0x1dd4,	// (0x00033017) bg_button_pane_cp06

0xb974,	// (0x0003cbb7) cell_cmode_rocker_pane_g1_ParamLimits

0xb974,	// (0x0003cbb7) cell_cmode_rocker_pane_g1

0xcef8,	// (0x0003e13b) cell_cmode_rocker_pane_g2_ParamLimits

0xcef8,	// (0x0003e13b) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00041004) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00041004) cell_cmode_rocker_pane_g

0xe966,	// (0x0003fba9) bg_button_pane_cp07

0xd9c1,	// (0x0003ec04) cell_cmode_itu_pane_g1

0xd9ca,	// (0x0003ec0d) cell_cmode_itu_pane_t1

0xd9d8,	// (0x0003ec1b) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x00041009) cell_cmode_itu_pane_t

0xd126,	// (0x0003e369) aid_touch_ctrl_left

0xd12e,	// (0x0003e371) aid_touch_ctrl_right

0xe966,	// (0x0003fba9) compa_mode_pane

0xd9e6,	// (0x0003ec29) aid_cmod_rocker_key_size_cp

0xd9f0,	// (0x0003ec33) aid_cmode_itu_key_size_cp

0xd9fa,	// (0x0003ec3d) compa_mode_pane_g1

0xda02,	// (0x0003ec45) compa_mode_pane_g2

0xda0a,	// (0x0003ec4d) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x0004100e) compa_mode_pane_g

0xda12,	// (0x0003ec55) main_comp_mode_itu_pane_cp

0xda1a,	// (0x0003ec5d) main_comp_mode_rocker_pane_cp

0xda22,	// (0x0003ec65) cell_cmode_itu_pane_cp_ParamLimits

0xda22,	// (0x0003ec65) cell_cmode_itu_pane_cp

0xda37,	// (0x0003ec7a) cell_cmode_rocker_pane_cp_ParamLimits

0xda37,	// (0x0003ec7a) cell_cmode_rocker_pane_cp

0x1dd4,	// (0x00033017) bg_button_pane_cp06_cp_ParamLimits

0x1dd4,	// (0x00033017) bg_button_pane_cp06_cp

0xb974,	// (0x0003cbb7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb974,	// (0x0003cbb7) cell_cmode_rocker_pane_g1_cp

0xb6f9,	// (0x0003c93c) cell_cmode_rocker_pane_g2_cp

0xe966,	// (0x0003fba9) bg_button_pane_cp07_cp

0xda49,	// (0x0003ec8c) cell_cmode_itu_pane_g1_cp

0xda52,	// (0x0003ec95) cell_cmode_itu_pane_t1_cp

0xda52,	// (0x0003ec95) cell_cmode_itu_pane_t2_cp

0xa5f2,	// (0x0003b835) settings_code_pane_cp2

0xe9d4,	// (0x0003fc17) bg_popup_window_pane_cp3_ParamLimits

0xf2bb,	// (0x000404fe) heading_pane_cp3_ParamLimits

0xf2c7,	// (0x0004050a) listscroll_popup_graphic_pane_ParamLimits

0x77c9,	// (0x00038a0c) fep_hwr_aid_pane_ParamLimits

0x7dba,	// (0x00038ffd) aid_touch_sctrl_top_ParamLimits

0x7dd5,	// (0x00039018) sctrl_sk_top_pane_g1_ParamLimits

0x7a36,	// (0x00038c79) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00040f44) sctrl_sk_top_pane_g_ParamLimits

0x7de2,	// (0x00039025) sctrl_sk_top_pane_t1_ParamLimits

0x7dba,	// (0x00038ffd) aid_touch_sctrl_bottom_ParamLimits

0x7de2,	// (0x00039025) sctrl_sk_bottom_pane_t1_ParamLimits

0xd06c,	// (0x0003e2af) aid_area_touch_clock

0x7fd9,	// (0x0003921c) aid_vkb2_area_top_pane_cell_ParamLimits

0x7fd9,	// (0x0003921c) aid_vkb2_area_top_pane_cell

0x8124,	// (0x00039367) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8124,	// (0x00039367) aid_vkb2_area_bottom_pane_cell

0xd5d1,	// (0x0003e814) popup_char_count_window

0xda60,	// (0x0003eca3) popup_char_count_window_g1

0xda69,	// (0x0003ecac) popup_char_count_window_g2

0xda72,	// (0x0003ecb5) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00041015) popup_char_count_window_g

0xda7b,	// (0x0003ecbe) popup_char_count_window_t1

0x7e93,	// (0x000390d6) popup_fep_char_preview_window_ParamLimits

0x7e93,	// (0x000390d6) popup_fep_char_preview_window

0x7ff7,	// (0x0003923a) vkb2_top_candi_pane_ParamLimits

0x7ff7,	// (0x0003923a) vkb2_top_candi_pane

0xda89,	// (0x0003eccc) cell_vkb2_top_candi_pane_ParamLimits

0xda89,	// (0x0003eccc) cell_vkb2_top_candi_pane

0x840f,	// (0x00039652) bg_popup_fep_char_preview_window_ParamLimits

0x840f,	// (0x00039652) bg_popup_fep_char_preview_window

0x841d,	// (0x00039660) popup_fep_char_preview_window_t1_ParamLimits

0x841d,	// (0x00039660) popup_fep_char_preview_window_t1

0xdada,	// (0x0003ed1d) bg_popup_fep_char_preview_window_g1

0xdae2,	// (0x0003ed25) bg_popup_fep_char_preview_window_g2

0xdaea,	// (0x0003ed2d) bg_popup_fep_char_preview_window_g3

0xdaf2,	// (0x0003ed35) bg_popup_fep_char_preview_window_g4

0xdafa,	// (0x0003ed3d) bg_popup_fep_char_preview_window_g5

0x8457,	// (0x0003969a) bg_popup_fep_char_preview_window_g6

0xdb02,	// (0x0003ed45) bg_popup_fep_char_preview_window_g7

0xdb0a,	// (0x0003ed4d) bg_popup_fep_char_preview_window_g8

0xdb12,	// (0x0003ed55) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x0004101c) bg_popup_fep_char_preview_window_g

0x7a36,	// (0x00038c79) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a36,	// (0x00038c79) cell_vkb2_top_candi_pane_g1

0x7a44,	// (0x00038c87) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7a44,	// (0x00038c87) cell_vkb2_top_candi_pane_g2

0xc936,	// (0x0003db79) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc936,	// (0x0003db79) cell_vkb2_top_candi_pane_g3

0x845f,	// (0x000396a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x845f,	// (0x000396a2) cell_vkb2_top_candi_pane_g4

0xbe93,	// (0x0003d0d6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbe93,	// (0x0003d0d6) cell_vkb2_top_candi_pane_g5

0x8480,	// (0x000396c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8480,	// (0x000396c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x0004102f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x0004102f) cell_vkb2_top_candi_pane_g

0x848e,	// (0x000396d1) cell_vkb2_top_candi_pane_t1

0x75a0,	// (0x000387e3) aid_size_touch_slider_mark_ParamLimits

0x75a0,	// (0x000387e3) aid_size_touch_slider_mark

0xd714,	// (0x0003e957) grid_graphic2_catg_pane_ParamLimits

0xd714,	// (0x0003e957) grid_graphic2_catg_pane

0xd7b2,	// (0x0003e9f5) popup_grid_graphic2_window_t1_ParamLimits

0xd7b2,	// (0x0003e9f5) popup_grid_graphic2_window_t1

0xd7c4,	// (0x0003ea07) popup_grid_graphic2_window_t2_ParamLimits

0xd7c4,	// (0x0003ea07) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00040fea) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00040fea) popup_grid_graphic2_window_t

0xeb15,	// (0x0003fd58) bg_button_pane_cp05_ParamLimits

0xd938,	// (0x0003eb7b) cell_graphic2_control_pane_g1_ParamLimits

0xdb1a,	// (0x0003ed5d) cell_graphic2_catg_pane_ParamLimits

0xdb1a,	// (0x0003ed5d) cell_graphic2_catg_pane

0xe966,	// (0x0003fba9) bg_button_pane_cp12

0xdb2c,	// (0x0003ed6f) cell_graphic2_catg_pane_g1

0xd038,	// (0x0003e27b) cell_tb_ext_pane_t1_ParamLimits

0x8241,	// (0x00039484) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8241,	// (0x00039484) vkb2_top_cell_right_narrow_pane

0x8259,	// (0x0003949c) vkb2_top_cell_right_wide_pane_ParamLimits

0x8259,	// (0x0003949c) vkb2_top_cell_right_wide_pane

0x77bb,	// (0x000389fe) bg_vkb2_func_pane_ParamLimits

0x77bb,	// (0x000389fe) bg_vkb2_func_pane

0x82ca,	// (0x0003950d) vkb2_top_cell_left_pane_g1_ParamLimits

0x77bb,	// (0x000389fe) bg_vkb2_fuc_pane_cp03_ParamLimits

0x77bb,	// (0x000389fe) bg_vkb2_fuc_pane_cp03

0x8328,	// (0x0003956b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90bd,	// (0x0003a300) bg_vkb2_func_pane_g1

0x90c5,	// (0x0003a308) bg_vkb2_func_pane_g2

0x90d5,	// (0x0003a318) bg_vkb2_func_pane_g3

0x90cd,	// (0x0003a310) bg_vkb2_func_pane_g4

0x90dd,	// (0x0003a320) bg_vkb2_func_pane_g5

0x90e5,	// (0x0003a328) bg_vkb2_func_pane_g6

0x90ed,	// (0x0003a330) bg_vkb2_func_pane_g7

0x90f5,	// (0x0003a338) bg_vkb2_func_pane_g8

0x90b5,	// (0x0003a2f8) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x0004103c) bg_vkb2_func_pane_g

0x77bb,	// (0x000389fe) bg_vkb2_fuc_pane_cp01_ParamLimits

0x77bb,	// (0x000389fe) bg_vkb2_fuc_pane_cp01

0x82ca,	// (0x0003950d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x82ca,	// (0x0003950d) vkb2_top_cell_right_wide_pane_g1

0x77bb,	// (0x000389fe) bg_vkb2_fuc_pane_cp02_ParamLimits

0x77bb,	// (0x000389fe) bg_vkb2_fuc_pane_cp02

0x8328,	// (0x0003956b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8328,	// (0x0003956b) vkb2_top_cell_right_narrow_pane_g1

0xcc59,	// (0x0003de9c) aid_touch_area_decrease_ParamLimits

0xcc59,	// (0x0003de9c) aid_touch_area_decrease

0xcc7d,	// (0x0003dec0) aid_touch_area_increase_ParamLimits

0xcc7d,	// (0x0003dec0) aid_touch_area_increase

0xcc89,	// (0x0003decc) aid_touch_area_mute_ParamLimits

0xcc89,	// (0x0003decc) aid_touch_area_mute

0xccad,	// (0x0003def0) aid_touch_area_slider_ParamLimits

0xccad,	// (0x0003def0) aid_touch_area_slider

0xcd9d,	// (0x0003dfe0) popup_slider_window_g4_ParamLimits

0xcd9d,	// (0x0003dfe0) popup_slider_window_g4

0xcda9,	// (0x0003dfec) popup_slider_window_g5_ParamLimits

0xcda9,	// (0x0003dfec) popup_slider_window_g5

0xcdcb,	// (0x0003e00e) popup_slider_window_g6_ParamLimits

0xcdcb,	// (0x0003e00e) popup_slider_window_g6

0xce0b,	// (0x0003e04e) popup_slider_window_t2_ParamLimits

0xce0b,	// (0x0003e04e) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x00040f38) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x00040f38) popup_slider_window_t

0xce23,	// (0x0003e066) slider_pane_ParamLimits

0xce23,	// (0x0003e066) slider_pane

0xdb35,	// (0x0003ed78) slider_pane_g1_ParamLimits

0xdb35,	// (0x0003ed78) slider_pane_g1

0xdb49,	// (0x0003ed8c) slider_pane_g2_ParamLimits

0xdb49,	// (0x0003ed8c) slider_pane_g2

0xdb5f,	// (0x0003eda2) slider_pane_g3_ParamLimits

0xdb5f,	// (0x0003eda2) slider_pane_g3

0x0003,

0xfe0c,	// (0x0004104f) slider_pane_g_ParamLimits

0xfe0c,	// (0x0004104f) slider_pane_g

0x8aae,	// (0x00039cf1) popup_tb_float_extension_window_ParamLimits

0x8aae,	// (0x00039cf1) popup_tb_float_extension_window

0xdb8b,	// (0x0003edce) aid_size_cell_tb_float_ext

0xe966,	// (0x0003fba9) bg_popup_sub_window_cp28

0xdb97,	// (0x0003edda) grid_tb_float_ext_pane

0xdba3,	// (0x0003ede6) cell_tb_float_ext_pane_ParamLimits

0xdba3,	// (0x0003ede6) cell_tb_float_ext_pane

0xdbbf,	// (0x0003ee02) cell_tb_float_ext_pane_g1

0xdbc8,	// (0x0003ee0b) grid_highlight_pane_cp12

0x7910,	// (0x00038b53) cell_last_hwr_side_pane_ParamLimits

0x7910,	// (0x00038b53) cell_last_hwr_side_pane

0xb6f9,	// (0x0003c93c) cell_last_hwr_side_pane_g1

0xdbd1,	// (0x0003ee14) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x00041058) cell_last_hwr_side_pane_g

0x81f0,	// (0x00039433) vkb2_area_bottom_space_btn_pane_ParamLimits

0x81f0,	// (0x00039433) vkb2_area_bottom_space_btn_pane

0x7a36,	// (0x00038c79) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd686,	// (0x0003e8c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x848e,	// (0x000396d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x84ac,	// (0x000396ef) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x84ac,	// (0x000396ef) vkb2_area_bottom_space_btn_pane_g1

0x84e6,	// (0x00039729) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x84e6,	// (0x00039729) vkb2_area_bottom_space_btn_pane_g2

0x851c,	// (0x0003975f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x851c,	// (0x0003975f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x0004105d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x0004105d) vkb2_area_bottom_space_btn_pane_g

0x7880,	// (0x00038ac3) cel_fep_hwr_func_pane_ParamLimits

0x7880,	// (0x00038ac3) cel_fep_hwr_func_pane

0x78bc,	// (0x00038aff) cell_hwr_side_button_pane_ParamLimits

0x78bc,	// (0x00038aff) cell_hwr_side_button_pane

0xd06c,	// (0x0003e2af) aid_area_touch_clock_ParamLimits

0xeb15,	// (0x0003fd58) bg_uniindi_top_pane_ParamLimits

0xd080,	// (0x0003e2c3) uniindi_top_pane_g1_ParamLimits

0xd096,	// (0x0003e2d9) uniindi_top_pane_g2_ParamLimits

0xd0a2,	// (0x0003e2e5) uniindi_top_pane_g3_ParamLimits

0xd0b3,	// (0x0003e2f6) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00040f70) uniindi_top_pane_g_ParamLimits

0xd0c0,	// (0x0003e303) uniindi_top_pane_t1_ParamLimits

0xeb15,	// (0x0003fd58) bg_vkb2_func_pane_cp01_ParamLimits

0xeb15,	// (0x0003fd58) bg_vkb2_func_pane_cp01

0xdbda,	// (0x0003ee1d) cel_fep_hwr_func_pane_g1_ParamLimits

0xdbda,	// (0x0003ee1d) cel_fep_hwr_func_pane_g1

0xeb15,	// (0x0003fd58) bg_vkb2_func_pane_cp02_ParamLimits

0xeb15,	// (0x0003fd58) bg_vkb2_func_pane_cp02

0xdbda,	// (0x0003ee1d) cell_hwr_side_button_pane_g1_ParamLimits

0xdbda,	// (0x0003ee1d) cell_hwr_side_button_pane_g1

0x8f36,	// (0x0003a179) status_pane_g4_ParamLimits

0x8f36,	// (0x0003a179) status_pane_g4

0x8f50,	// (0x0003a193) status_pane_t1

0xb498,	// (0x0003c6db) form2_midp_gauge_slider_cont_pane

0xb4a0,	// (0x0003c6e3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb4b2,	// (0x0003c6f5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4c4,	// (0x0003c707) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x00040d30) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4d6,	// (0x0003c719) form2_midp_slider_pane_ParamLimits

0x7e53,	// (0x00039096) aid_size_cell_func_vkb2_ParamLimits

0x7e53,	// (0x00039096) aid_size_cell_func_vkb2

0xdb77,	// (0x0003edba) slider_pane_g4_ParamLimits

0xdb77,	// (0x0003edba) slider_pane_g4

0x8566,	// (0x000397a9) form2_midp_gauge_slider_pane_t2_cp01

0x8574,	// (0x000397b7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8574,	// (0x000397b7) form2_midp_gauge_slider_pane_t3_cp01

0x8591,	// (0x000397d4) form2_midp_slider_pane_cp01

0xe966,	// (0x0003fba9) navi_smil_pane

0xdc13,	// (0x0003ee56) navi_smil_pane_g1

0xdc1b,	// (0x0003ee5e) navi_smil_pane_t1

0xdbe8,	// (0x0003ee2b) form2_midp_slider_pane_g1

0xdbf1,	// (0x0003ee34) form2_midp_slider_pane_g2

0xdbf9,	// (0x0003ee3c) form2_midp_slider_pane_g3

0xdbe8,	// (0x0003ee2b) form2_midp_slider_pane_g4

0xdc01,	// (0x0003ee44) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x00041066) form2_midp_slider_pane_g

0x8556,	// (0x00039799) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8556,	// (0x00039799) vkb2_area_bottom_space_btn_pane_g4

0x8d4d,	// (0x00039f90) lc0_navi_pane_ParamLimits

0x8d4d,	// (0x00039f90) lc0_navi_pane

0x8dc9,	// (0x0003a00c) lc0_stat_indi_pane_ParamLimits

0x8dc9,	// (0x0003a00c) lc0_stat_indi_pane

0x8de0,	// (0x0003a023) ls0_title_pane_ParamLimits

0x8de0,	// (0x0003a023) ls0_title_pane

0x1dd4,	// (0x00033017) bg_popup_sub_pane_cp14_ParamLimits

0xd053,	// (0x0003e296) list_uniindi_pane_ParamLimits

0xd05f,	// (0x0003e2a2) uniindi_top_pane_ParamLimits

0xd0fe,	// (0x0003e341) list_single_uniindi_pane_g1_ParamLimits

0xd111,	// (0x0003e354) list_single_uniindi_pane_t1_ParamLimits

0x859a,	// (0x000397dd) lc0_stat_clock_pane_ParamLimits

0x859a,	// (0x000397dd) lc0_stat_clock_pane

0xdc29,	// (0x0003ee6c) lc0_stat_indi_pane_g1_ParamLimits

0xdc29,	// (0x0003ee6c) lc0_stat_indi_pane_g1

0xdc36,	// (0x0003ee79) lc0_stat_indi_pane_g2_ParamLimits

0xdc36,	// (0x0003ee79) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00041071) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00041071) lc0_stat_indi_pane_g

0x85a7,	// (0x000397ea) lc0_uni_indicator_pane_ParamLimits

0x85a7,	// (0x000397ea) lc0_uni_indicator_pane

0xdc43,	// (0x0003ee86) ls0_title_pane_g1_ParamLimits

0xdc43,	// (0x0003ee86) ls0_title_pane_g1

0xdc57,	// (0x0003ee9a) ls0_title_pane_t1_ParamLimits

0xdc57,	// (0x0003ee9a) ls0_title_pane_t1

0x85b4,	// (0x000397f7) lc0_uni_indicator_pane_g1_ParamLimits

0x85b4,	// (0x000397f7) lc0_uni_indicator_pane_g1

0xdc8d,	// (0x0003eed0) lc0_stat_clock_pane_t1

0xe966,	// (0x0003fba9) main_ai5_pane

0xdc9b,	// (0x0003eede) ai5_sk_pane_ParamLimits

0xdc9b,	// (0x0003eede) ai5_sk_pane

0xdca8,	// (0x0003eeeb) cell_ai5_widget_pane_ParamLimits

0xdca8,	// (0x0003eeeb) cell_ai5_widget_pane

0xe244,	// (0x0003f487) aid_size_cell_widget_grid

0xe252,	// (0x0003f495) bg_ai5_widget_pane_ParamLimits

0xe252,	// (0x0003f495) bg_ai5_widget_pane

0xe2c6,	// (0x0003f509) cell_ai5_widget_pane_g2

0xe2d6,	// (0x0003f519) cell_ai5_widget_pane_g3

0xe2ed,	// (0x0003f530) cell_ai5_widget_pane_g4

0xe2f9,	// (0x0003f53c) cell_ai5_widget_pane_g5

0xe305,	// (0x0003f548) cell_ai5_widget_pane_g6

0xe311,	// (0x0003f554) cell_ai5_widget_pane_g7

0xe359,	// (0x0003f59c) cell_ai5_widget_pane_t1_ParamLimits

0xe359,	// (0x0003f59c) cell_ai5_widget_pane_t1

0xe376,	// (0x0003f5b9) cell_ai5_widget_pane_t2_ParamLimits

0xe376,	// (0x0003f5b9) cell_ai5_widget_pane_t2

0xe38e,	// (0x0003f5d1) cell_ai5_widget_pane_t3_ParamLimits

0xe38e,	// (0x0003f5d1) cell_ai5_widget_pane_t3

0xe3a6,	// (0x0003f5e9) cell_ai5_widget_pane_t4_ParamLimits

0xe3a6,	// (0x0003f5e9) cell_ai5_widget_pane_t4

0xe3c3,	// (0x0003f606) cell_ai5_widget_pane_t5_ParamLimits

0xe3c3,	// (0x0003f606) cell_ai5_widget_pane_t5

0xe3e2,	// (0x0003f625) cell_ai5_widget_pane_t6_ParamLimits

0xe3e2,	// (0x0003f625) cell_ai5_widget_pane_t6

0xe3f4,	// (0x0003f637) cell_ai5_widget_pane_t7_ParamLimits

0xe3f4,	// (0x0003f637) cell_ai5_widget_pane_t7

0xe40d,	// (0x0003f650) cell_ai5_widget_pane_t8_ParamLimits

0xe40d,	// (0x0003f650) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x0004108b) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x0004108b) cell_ai5_widget_pane_t

0xe461,	// (0x0003f6a4) grid_ai5_widget_pane

0x1dd4,	// (0x00033017) highlight_cell_ai5_widget_pane_ParamLimits

0x1dd4,	// (0x00033017) highlight_cell_ai5_widget_pane

0xe46f,	// (0x0003f6b2) ai5_sk_left_pane

0xe479,	// (0x0003f6bc) ai5_sk_middle_pane

0xe483,	// (0x0003f6c6) ai5_sk_right_pane

0xe48d,	// (0x0003f6d0) bg_ai5_widget_pane_g1_ParamLimits

0xe48d,	// (0x0003f6d0) bg_ai5_widget_pane_g1

0xe499,	// (0x0003f6dc) bg_ai5_widget_pane_g2_ParamLimits

0xe499,	// (0x0003f6dc) bg_ai5_widget_pane_g2

0xe4a5,	// (0x0003f6e8) bg_ai5_widget_pane_g3_ParamLimits

0xe4a5,	// (0x0003f6e8) bg_ai5_widget_pane_g3

0xe4b1,	// (0x0003f6f4) bg_ai5_widget_pane_g4_ParamLimits

0xe4b1,	// (0x0003f6f4) bg_ai5_widget_pane_g4

0xe4bd,	// (0x0003f700) bg_ai5_widget_pane_g5_ParamLimits

0xe4bd,	// (0x0003f700) bg_ai5_widget_pane_g5

0xe4c9,	// (0x0003f70c) bg_ai5_widget_pane_g6_ParamLimits

0xe4c9,	// (0x0003f70c) bg_ai5_widget_pane_g6

0xe4d5,	// (0x0003f718) bg_ai5_widget_pane_g7_ParamLimits

0xe4d5,	// (0x0003f718) bg_ai5_widget_pane_g7

0xe4e1,	// (0x0003f724) bg_ai5_widget_pane_g8_ParamLimits

0xe4e1,	// (0x0003f724) bg_ai5_widget_pane_g8

0xe4ed,	// (0x0003f730) bg_ai5_widget_pane_g9_ParamLimits

0xe4ed,	// (0x0003f730) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x000410a0) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x000410a0) bg_ai5_widget_pane_g

0xe525,	// (0x0003f768) cell_shortcut_ai5_widget_pane_ParamLimits

0xe525,	// (0x0003f768) cell_shortcut_ai5_widget_pane

0x2725,	// (0x00033968) bg_cell_shortcut_ai5_widget_pane

0xe538,	// (0x0003f77b) cell_grid_ai5_widget_pane_g1

0x2725,	// (0x00033968) highlight_cell_shortcut_ai5_widget_pane

0x90bd,	// (0x0003a300) ai5_sk_left_pane_g1

0xe541,	// (0x0003f784) ai5_sk_left_pane_g2

0xe549,	// (0x0003f78c) ai5_sk_left_pane_g3

0xe551,	// (0x0003f794) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x000410b3) ai5_sk_left_pane_g

0xe559,	// (0x0003f79c) ai5_sk_left_pane_t1

0x90c5,	// (0x0003a308) ai5_sk_right_pane_g1

0xe567,	// (0x0003f7aa) ai5_sk_right_pane_g2

0xe56f,	// (0x0003f7b2) ai5_sk_right_pane_g3

0xe577,	// (0x0003f7ba) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x000410bc) ai5_sk_right_pane_g

0xe57f,	// (0x0003f7c2) ai5_sk_right_pane_t1

0x90c5,	// (0x0003a308) ai5_sk_middle_pane_g1

0x90bd,	// (0x0003a300) ai5_sk_middle_pane_g2

0x90dd,	// (0x0003a320) ai5_sk_middle_pane_g3

0xe56f,	// (0x0003f7b2) ai5_sk_middle_pane_g4

0xe549,	// (0x0003f78c) ai5_sk_middle_pane_g5

0xe58d,	// (0x0003f7d0) ai5_sk_middle_pane_g6

0xe595,	// (0x0003f7d8) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x000410c5) ai5_sk_middle_pane_g

0x8bcf,	// (0x00039e12) aid_touch_area_size_lc0_ParamLimits

0x8bcf,	// (0x00039e12) aid_touch_area_size_lc0

0x7a65,	// (0x00038ca8) cell_hwr_candidate_pane_t1_ParamLimits

0x8bed,	// (0x00039e30) aid_touch_navi_pane

0x8ee0,	// (0x0003a123) status_dt_navi_pane_ParamLimits

0x8ee0,	// (0x0003a123) status_dt_navi_pane

0x8eed,	// (0x0003a130) status_dt_sta_pane_ParamLimits

0x8eed,	// (0x0003a130) status_dt_sta_pane

0xe59d,	// (0x0003f7e0) dt_sta_controll_pane

0xe5aa,	// (0x0003f7ed) dt_sta_indi_pane

0xe5bb,	// (0x0003f7fe) dt_sta_title_pane

0xeb15,	// (0x0003fd58) bg_dt_sta_indi_pane_ParamLimits

0xeb15,	// (0x0003fd58) bg_dt_sta_indi_pane

0xe5ce,	// (0x0003f811) dt_sta_battery_pane

0xe5d6,	// (0x0003f819) dt_sta_indi_pane_g1

0xe5df,	// (0x0003f822) dt_sta_indi_pane_g2

0xe5e8,	// (0x0003f82b) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x000410d4) dt_sta_indi_pane_g

0xe5f1,	// (0x0003f834) dt_sta_signal_pane

0x1dd4,	// (0x00033017) bg_dt_sta_title_pane_ParamLimits

0x1dd4,	// (0x00033017) bg_dt_sta_title_pane

0xe5fa,	// (0x0003f83d) dt_sta_title_pane_g1

0xe602,	// (0x0003f845) dt_sta_title_pane_t1_ParamLimits

0xe602,	// (0x0003f845) dt_sta_title_pane_t1

0xe966,	// (0x0003fba9) bg_dt_sta_control_pane

0xe617,	// (0x0003f85a) dt_sta_controll_pane_g1

0xe620,	// (0x0003f863) bg_dt_sta_title_pane_g1

0xe629,	// (0x0003f86c) bg_dt_sta_title_pane_g2

0xe632,	// (0x0003f875) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x000410db) bg_dt_sta_title_pane_g

0xb6f9,	// (0x0003c93c) bg_dt_sta_indi_pane_g1

0xe63b,	// (0x0003f87e) dt_sta_signal_pane_g1

0xe643,	// (0x0003f886) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x000410e2) dt_sta_signal_pane_g

0xe64b,	// (0x0003f88e) dt_sta_battery_pane_g1

0xe654,	// (0x0003f897) dt_sta_battery_pane_t1

0xb6f9,	// (0x0003c93c) bg_dt_sta_control_pane_g1

0x2338,	// (0x0003357b) fep_china_uni_eep_pane

0x2340,	// (0x00033583) fep_china_uni_entry_pane_ParamLimits

0x2350,	// (0x00033593) popup_fep_china_uni_window_g1_ParamLimits

0x2360,	// (0x000335a3) popup_fep_china_uni_window_g2_ParamLimits

0x2360,	// (0x000335a3) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0004095b) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0004095b) popup_fep_china_uni_window_g

0xe663,	// (0x0003f8a6) fep_china_uni_eep_pane_g1

0xe66b,	// (0x0003f8ae) fep_china_uni_eep_pane_t1

0xdc0a,	// (0x0003ee4d) aid_touch_area_size_smil_player

0x8d45,	// (0x00039f88) lc0_clock_pane

0x8f44,	// (0x0003a187) status_pane_g5_ParamLimits

0x8f44,	// (0x0003a187) status_pane_g5

0x7058,	// (0x0003829b) popup_keymap_window

0x8f02,	// (0x0003a145) status_icon_pane

0xe2d6,	// (0x0003f519) cell_ai5_widget_pane_g3_ParamLimits

0xe2ed,	// (0x0003f530) cell_ai5_widget_pane_g4_ParamLimits

0xe2f9,	// (0x0003f53c) cell_ai5_widget_pane_g5_ParamLimits

0xe31d,	// (0x0003f560) cell_ai5_widget_pane_g8_ParamLimits

0xe31d,	// (0x0003f560) cell_ai5_widget_pane_g8

0xe331,	// (0x0003f574) cell_ai5_widget_pane_g9_ParamLimits

0xe331,	// (0x0003f574) cell_ai5_widget_pane_g9

0xe345,	// (0x0003f588) cell_ai5_widget_pane_g10_ParamLimits

0xe345,	// (0x0003f588) cell_ai5_widget_pane_g10

0xe67a,	// (0x0003f8bd) status_icon_pane_g1

0xe966,	// (0x0003fba9) bg_popup_sub_pane_cp13

0xe682,	// (0x0003f8c5) popup_keymap_window_t1

0x6d0d,	// (0x00037f50) control_pane_g6_ParamLimits

0x6d0d,	// (0x00037f50) control_pane_g6

0x6d1a,	// (0x00037f5d) control_pane_g7_ParamLimits

0x6d1a,	// (0x00037f5d) control_pane_g7

0x6d27,	// (0x00037f6a) control_pane_g8_ParamLimits

0x6d27,	// (0x00037f6a) control_pane_g8

0xe59d,	// (0x0003f7e0) dt_sta_controll_pane_ParamLimits

0xe5aa,	// (0x0003f7ed) dt_sta_indi_pane_ParamLimits

0xe5bb,	// (0x0003f7fe) dt_sta_title_pane_ParamLimits

0xf4f1,	// (0x00040734) aid_size_touch_scroll_bar_cale

0x56dc,	// (0x0003691f) popup_discreet_window_ParamLimits

0x56dc,	// (0x0003691f) popup_discreet_window

0x576a,	// (0x000369ad) popup_sk_window

0x9705,	// (0x0003a948) bg_popup_sub_pane_cp28_ParamLimits

0x9705,	// (0x0003a948) bg_popup_sub_pane_cp28

0xe690,	// (0x0003f8d3) popup_discreet_window_g1_ParamLimits

0xe690,	// (0x0003f8d3) popup_discreet_window_g1

0xe6b0,	// (0x0003f8f3) popup_discreet_window_t1_ParamLimits

0xe6b0,	// (0x0003f8f3) popup_discreet_window_t1

0xe6ce,	// (0x0003f911) popup_discreet_window_t2_ParamLimits

0xe6ce,	// (0x0003f911) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x000410e7) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x000410e7) popup_discreet_window_t

0x85c7,	// (0x0003980a) popup_sk_window_g1

0x85d1,	// (0x00039814) popup_sk_window_g2

0x0001,

0xfeab,	// (0x000410ee) popup_sk_window_g

0x85db,	// (0x0003981e) popup_sk_window_t1

0x85eb,	// (0x0003982e) popup_sk_window_t1_copy1

0xe2c6,	// (0x0003f509) cell_ai5_widget_pane_g2_ParamLimits

0xe41f,	// (0x0003f662) cell_ai5_widget_pane_t9_ParamLimits

0xe41f,	// (0x0003f662) cell_ai5_widget_pane_t9

0xe966,	// (0x0003fba9) main_fep_fshwr2_pane

0x85f9,	// (0x0003983c) aid_fshwr2_btn_pane

0x8605,	// (0x00039848) aid_fshwr2_syb_pane

0x8611,	// (0x00039854) aid_fshwr2_txt_pane

0x861d,	// (0x00039860) fshwr2_func_candi_pane

0x8630,	// (0x00039873) fshwr2_hwr_syb_pane

0x863e,	// (0x00039881) fshwr2_icf_pane

0x55ff,	// (0x00036842) fshwr2_icf_bg_pane

0x866d,	// (0x000398b0) fshwr2_icf_pane_t1_ParamLimits

0x866d,	// (0x000398b0) fshwr2_icf_pane_t1

0x22b6,	// (0x000334f9) fshwr2_func_candi_pane_g1

0xe720,	// (0x0003f963) fshwr2_func_candi_row_pane_ParamLimits

0xe720,	// (0x0003f963) fshwr2_func_candi_row_pane

0x8685,	// (0x000398c8) cell_fshwr2_syb_pane_ParamLimits

0x8685,	// (0x000398c8) cell_fshwr2_syb_pane

0x7a36,	// (0x00038c79) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a36,	// (0x00038c79) fshwr2_hwr_syb_pane_g1

0x55ff,	// (0x00036842) bg_popup_call_pane_cp01

0x869b,	// (0x000398de) fshwr2_func_candi_cell_pane_ParamLimits

0x869b,	// (0x000398de) fshwr2_func_candi_cell_pane

0xe730,	// (0x0003f973) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe730,	// (0x0003f973) fshwr2_func_candi_cell_bg_pane

0x86e5,	// (0x00039928) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x86e5,	// (0x00039928) fshwr2_func_candi_cell_pane_g1

0x8705,	// (0x00039948) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8705,	// (0x00039948) fshwr2_func_candi_cell_pane_t1

0x55ff,	// (0x00036842) bg_button_pane_cp08

0xe73c,	// (0x0003f97f) cell_fshwr2_syb_bg_pane

0x8718,	// (0x0003995b) cell_fshwr2_syb_bg_pane_g1

0x8720,	// (0x00039963) cell_fshwr2_syb_bg_pane_t1

0x1dd4,	// (0x00033017) main_tmo_pane

0xa229,	// (0x0003b46c) uni_indicator_pane_g1_ParamLimits

0xa23f,	// (0x0003b482) uni_indicator_pane_g2_ParamLimits

0xa255,	// (0x0003b498) uni_indicator_pane_g3_ParamLimits

0xa26a,	// (0x0003b4ad) uni_indicator_pane_g4_ParamLimits

0xa26a,	// (0x0003b4ad) uni_indicator_pane_g4

0xa27e,	// (0x0003b4c1) uni_indicator_pane_g5_ParamLimits

0xa27e,	// (0x0003b4c1) uni_indicator_pane_g5

0xa27e,	// (0x0003b4c1) uni_indicator_pane_g6_ParamLimits

0xa27e,	// (0x0003b4c1) uni_indicator_pane_g6

0xf91c,	// (0x00040b5f) uni_indicator_pane_g_ParamLimits

0xcc29,	// (0x0003de6c) popup_tmo_note_window_ParamLimits

0xcc29,	// (0x0003de6c) popup_tmo_note_window

0x7e35,	// (0x00039078) fshwr2_bg_pane

0x86f6,	// (0x00039939) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x86f6,	// (0x00039939) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x000410f3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x000410f3) fshwr2_func_candi_cell_pane_g

0x7a1e,	// (0x00038c61) bg_popup_window_pane_cp01

0x872f,	// (0x00039972) bg_popup_window_pane_g1_cp01

0xe744,	// (0x0003f987) bg_popup_window_pane_cp22_ParamLimits

0xe744,	// (0x0003f987) bg_popup_window_pane_cp22

0xe752,	// (0x0003f995) listscroll_tmo_link_pane_ParamLimits

0xe752,	// (0x0003f995) listscroll_tmo_link_pane

0xe792,	// (0x0003f9d5) popup_tmo_note_window_g1_ParamLimits

0xe792,	// (0x0003f9d5) popup_tmo_note_window_g1

0xe79f,	// (0x0003f9e2) tmo_note_info_pane_ParamLimits

0xe79f,	// (0x0003f9e2) tmo_note_info_pane

0xe7b9,	// (0x0003f9fc) list_tmo_note_info_pane_g1_ParamLimits

0xe7b9,	// (0x0003f9fc) list_tmo_note_info_pane_g1

0xe7d0,	// (0x0003fa13) list_tmo_note_info_pane_g2_ParamLimits

0xe7d0,	// (0x0003fa13) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x000410f8) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x000410f8) list_tmo_note_info_pane_g

0xe7ec,	// (0x0003fa2f) list_tmo_note_info_text_pane_ParamLimits

0xe7ec,	// (0x0003fa2f) list_tmo_note_info_text_pane

0xe871,	// (0x0003fab4) list_tmo_link_pane

0xe87e,	// (0x0003fac1) scroll_pane_cp20

0xe88b,	// (0x0003face) list_single_tmo_link_pane_ParamLimits

0xe88b,	// (0x0003face) list_single_tmo_link_pane

0xe89b,	// (0x0003fade) list_single_tmo_link_pane_t1

0xe8a9,	// (0x0003faec) list_tmo_note_info_text_pane_t1_ParamLimits

0xe8a9,	// (0x0003faec) list_tmo_note_info_text_pane_t1

0x6195,	// (0x000373d8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6195,	// (0x000373d8) aid_size_touch_scroll_bar_cp01

0x60bf,	// (0x00037302) aid_size_touch_slider_marker

0x5752,	// (0x00036995) popup_settings_window_ParamLimits

0x5752,	// (0x00036995) popup_settings_window

0x3e25,	// (0x00035068) popup_candi_list_indi_window

0x8bed,	// (0x00039e30) aid_touch_navi_pane_ParamLimits

0x7d8e,	// (0x00038fd1) rs_clock_indi_pane

0x7d97,	// (0x00038fda) sctrl_sk_bottom_pane_ParamLimits

0x7da8,	// (0x00038feb) sctrl_sk_top_pane_ParamLimits

0x7ead,	// (0x000390f0) popup_fep_tooltip_window

0xe244,	// (0x0003f487) aid_size_cell_widget_grid_ParamLimits

0xe2b1,	// (0x0003f4f4) cell_ai5_widget_pane_g1_ParamLimits

0xe2b1,	// (0x0003f4f4) cell_ai5_widget_pane_g1

0xe305,	// (0x0003f548) cell_ai5_widget_pane_g6_ParamLimits

0xe311,	// (0x0003f554) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x00041076) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x00041076) cell_ai5_widget_pane_g

0xe443,	// (0x0003f686) cell_ai5_widget_pane_t10_ParamLimits

0xe443,	// (0x0003f686) cell_ai5_widget_pane_t10

0xe461,	// (0x0003f6a4) grid_ai5_widget_pane_ParamLimits

0xe4f9,	// (0x0003f73c) cell_contacts_ai5_widget_pane_ParamLimits

0xe4f9,	// (0x0003f73c) cell_contacts_ai5_widget_pane

0xe6e3,	// (0x0003f926) popup_discreet_window_t3_ParamLimits

0xe6e3,	// (0x0003f926) popup_discreet_window_t3

0x8655,	// (0x00039898) popup_fshwr2_char_preview_window_ParamLimits

0x8655,	// (0x00039898) popup_fshwr2_char_preview_window

0xe80a,	// (0x0003fa4d) tmo_note_info_pane_t1

0xe81f,	// (0x0003fa62) tmo_note_info_pane_t2

0xe838,	// (0x0003fa7b) tmo_note_info_pane_t3

0xe84d,	// (0x0003fa90) tmo_note_info_pane_t4

0xe85f,	// (0x0003faa2) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x000410fd) tmo_note_info_pane_t

0xe871,	// (0x0003fab4) list_tmo_link_pane_ParamLimits

0xe87e,	// (0x0003fac1) scroll_pane_cp20_ParamLimits

0x55ff,	// (0x00036842) bg_popup_fep_char_preview_window_cp01

0xe8c2,	// (0x0003fb05) popup_fshwr2_char_preview_window_t1

0xe8d0,	// (0x0003fb13) popup_candi_list_indi_window_g1

0xe8d9,	// (0x0003fb1c) bg_cell_contacts_ai5_widget_pane

0xe8e5,	// (0x0003fb28) cell_contacts_ai5_widget_pane_g1

0xe8fa,	// (0x0003fb3d) cell_contacts_ai5_widget_pane_g2

0xe906,	// (0x0003fb49) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x00041108) cell_contacts_ai5_widget_pane_g

0xe912,	// (0x0003fb55) cell_contacts_ai5_widget_pane_t1

0x1dd4,	// (0x00033017) highlight_cell_shortcut_ai5_widget_pane_cp01

0xec83,	// (0x0003fec6) settings_container_pane

0x2725,	// (0x00033968) listscroll_set_pane_copy1

0xae1a,	// (0x0003c05d) scroll_pane_cp121_copy1

0xec8f,	// (0x0003fed2) set_content_pane_copy1

0xec97,	// (0x0003feda) aid_height_set_list_copy1_ParamLimits

0xec97,	// (0x0003feda) aid_height_set_list_copy1

0xa47e,	// (0x0003b6c1) aid_size_parent_copy1_ParamLimits

0xa47e,	// (0x0003b6c1) aid_size_parent_copy1

0xeca3,	// (0x0003fee6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeca3,	// (0x0003fee6) button_value_adjust_pane_cp6_copy1

0x6e99,	// (0x000380dc) list_highlight_pane_cp2_copy1_ParamLimits

0x6e99,	// (0x000380dc) list_highlight_pane_cp2_copy1

0xecb7,	// (0x0003fefa) list_set_pane_copy1_ParamLimits

0xecb7,	// (0x0003fefa) list_set_pane_copy1

0xe924,	// (0x0003fb67) main_pane_set_t1_copy1_ParamLimits

0xe924,	// (0x0003fb67) main_pane_set_t1_copy1

0xec58,	// (0x0003fe9b) main_pane_set_t2_copy1_ParamLimits

0xec58,	// (0x0003fe9b) main_pane_set_t2_copy1

0xed7e,	// (0x0003ffc1) main_pane_set_t3_copy1

0xed8c,	// (0x0003ffcf) main_pane_set_t4_copy1

0xec77,	// (0x0003feba) set_content_pane_g1_copy1_ParamLimits

0xec77,	// (0x0003feba) set_content_pane_g1_copy1

0xed9a,	// (0x0003ffdd) setting_code_pane_copy1

0xeda2,	// (0x0003ffe5) setting_slider_graphic_pane_copy1

0xeda2,	// (0x0003ffe5) setting_slider_pane_copy1

0xeda2,	// (0x0003ffe5) setting_text_pane_copy1

0xeda2,	// (0x0003ffe5) setting_volume_pane_copy1

0xed9a,	// (0x0003ffdd) settings_code_pane_cp2_copy1

0xedaa,	// (0x0003ffed) settings_code_pane_cp_copy1_ParamLimits

0xedaa,	// (0x0003ffed) settings_code_pane_cp_copy1

0x8738,	// (0x0003997b) volume_set_pane_copy1

0xedbe,	// (0x00040001) volume_set_pane_g10_copy1

0xedca,	// (0x0004000d) volume_set_pane_g1_copy1

0xedd4,	// (0x00040017) volume_set_pane_g2_copy1

0xedde,	// (0x00040021) volume_set_pane_g3_copy1

0xede8,	// (0x0004002b) volume_set_pane_g4_copy1

0xedf2,	// (0x00040035) volume_set_pane_g5_copy1

0xedfc,	// (0x0004003f) volume_set_pane_g6_copy1

0xee06,	// (0x00040049) volume_set_pane_g7_copy1

0xee10,	// (0x00040053) volume_set_pane_g8_copy1

0xee1a,	// (0x0004005d) volume_set_pane_g9_copy1

0xe9d4,	// (0x0003fc17) bg_set_opt_pane_cp_copy1_ParamLimits

0xe9d4,	// (0x0003fc17) bg_set_opt_pane_cp_copy1

0x8744,	// (0x00039987) setting_slider_pane_t1_copy1_ParamLimits

0x8744,	// (0x00039987) setting_slider_pane_t1_copy1

0x8762,	// (0x000399a5) setting_slider_pane_t2_copy1_ParamLimits

0x8762,	// (0x000399a5) setting_slider_pane_t2_copy1

0x877c,	// (0x000399bf) setting_slider_pane_t3_copy1_ParamLimits

0x877c,	// (0x000399bf) setting_slider_pane_t3_copy1

0x8794,	// (0x000399d7) slider_set_pane_copy1_ParamLimits

0x8794,	// (0x000399d7) slider_set_pane_copy1

0x1e2f,	// (0x00033072) set_opt_bg_pane_g1_copy2

0x1e37,	// (0x0003307a) set_opt_bg_pane_g2_copy2

0xee24,	// (0x00040067) set_opt_bg_pane_g3_copy2

0x1e47,	// (0x0003308a) set_opt_bg_pane_g4_copy2

0x1e4f,	// (0x00033092) set_opt_bg_pane_g5_copy2

0x1e57,	// (0x0003309a) set_opt_bg_pane_g6_copy2

0xee2e,	// (0x00040071) set_opt_bg_pane_g7_copy2

0xee38,	// (0x0004007b) set_opt_bg_pane_g8_copy2

0xee42,	// (0x00040085) set_opt_bg_pane_g9_copy2

0x87aa,	// (0x000399ed) aid_size_touch_slider_mark_copy1_ParamLimits

0x87aa,	// (0x000399ed) aid_size_touch_slider_mark_copy1

0xee4c,	// (0x0004008f) slider_set_pane_g1_copy1

0x87be,	// (0x00039a01) slider_set_pane_g2_copy1

0x75c0,	// (0x00038803) slider_set_pane_g3_copy1_ParamLimits

0x75c0,	// (0x00038803) slider_set_pane_g3_copy1

0x75d4,	// (0x00038817) slider_set_pane_g4_copy1_ParamLimits

0x75d4,	// (0x00038817) slider_set_pane_g4_copy1

0x75ec,	// (0x0003882f) slider_set_pane_g5_copy1_ParamLimits

0x75ec,	// (0x0003882f) slider_set_pane_g5_copy1

0x75c0,	// (0x00038803) slider_set_pane_g6_copy1_ParamLimits

0x75c0,	// (0x00038803) slider_set_pane_g6_copy1

0x87c6,	// (0x00039a09) slider_set_pane_g7_copy1_ParamLimits

0x87c6,	// (0x00039a09) slider_set_pane_g7_copy1

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp2_copy1

0xee55,	// (0x00040098) setting_slider_graphic_pane_g1_copy1

0xee5e,	// (0x000400a1) setting_slider_graphic_pane_t1_copy1

0xee6e,	// (0x000400b1) setting_slider_graphic_pane_t2_copy1

0xee7e,	// (0x000400c1) slider_set_pane_cp_copy1

0xee8e,	// (0x000400d1) input_focus_pane_cp1_copy1

0xee97,	// (0x000400da) list_set_text_pane_copy1

0xee9f,	// (0x000400e2) setting_text_pane_g1_copy1

0x475f,	// (0x000359a2) set_text_pane_t1_copy1

0xee8e,	// (0x000400d1) input_focus_pane_cp2_copy1

0xee9f,	// (0x000400e2) setting_code_pane_g1_copy1

0xeea8,	// (0x000400eb) setting_code_pane_t1_copy1

0xeeb6,	// (0x000400f9) list_set_graphic_pane_copy1

0xe97a,	// (0x0003fbbd) bg_set_opt_pane_cp4_copy1

0x6871,	// (0x00037ab4) list_set_graphic_pane_g1_copy1_ParamLimits

0x6871,	// (0x00037ab4) list_set_graphic_pane_g1_copy1

0xeec8,	// (0x0004010b) list_set_graphic_pane_g2_copy1

0x6889,	// (0x00037acc) list_set_graphic_pane_t1_copy1_ParamLimits

0x6889,	// (0x00037acc) list_set_graphic_pane_t1_copy1

0xb6f9,	// (0x0003c93c) rs_clock_indi_pane_g1

0xeed0,	// (0x00040113) rs_clock_indi_pane_t1

0xeede,	// (0x00040121) rs_indi_pane

0xeee6,	// (0x00040129) rs_indi_pane_g1

0xeeef,	// (0x00040132) rs_indi_pane_g2

0xeef8,	// (0x0004013b) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x0004110f) rs_indi_pane_g

0x2725,	// (0x00033968) bg_popup_preview_window_pane_cp03

0xef01,	// (0x00040144) popup_fep_tooltip_window_t1

0xc3b0,	// (0x0003d5f3) popup_note2_window_g2_ParamLimits

0xc3b0,	// (0x0003d5f3) popup_note2_window_g2

0x0001,

0xfc65,	// (0x00040ea8) popup_note2_window_g_ParamLimits

0xfc65,	// (0x00040ea8) popup_note2_window_g

0xc8b8,	// (0x0003dafb) bg_popup_sub_pane_cp11_ParamLimits

0xc8c5,	// (0x0003db08) cell_ai3_links_pane_g1_ParamLimits

0xc8dc,	// (0x0003db1f) cell_ai3_links_pane_t1

0x475f,	// (0x000359a2) set_text_pane_t1_copy1_ParamLimits

0x6908,	// (0x00037b4b) cell_graphic_popup_pane_cp2_ParamLimits

0x6908,	// (0x00037b4b) cell_graphic_popup_pane_cp2

0xef0f,	// (0x00040152) cell_graphic_popup_pane_g1_cp2

0xf304,	// (0x00040547) cell_graphic_popup_pane_g2_cp2

0xef17,	// (0x0004015a) cell_graphic_popup_pane_g3_cp2

0xef1f,	// (0x00040162) cell_graphic_popup_pane_t2_cp2

0xf315,	// (0x00040558) grid_highlight_pane_cp3_cp2

0x20d8,	// (0x0003331b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1dd4,	// (0x00033017) main_tmo_pane_ParamLimits

0xcc1d,	// (0x0003de60) popup_tmo_big_image_note_window

0xe2a0,	// (0x0003f4e3) cell_ai5_widget_list_pane

0xe2a8,	// (0x0003f4eb) cell_ai5_widget_lrg_icon_pane

0xe80a,	// (0x0003fa4d) tmo_note_info_pane_t1_ParamLimits

0xe81f,	// (0x0003fa62) tmo_note_info_pane_t2_ParamLimits

0xe838,	// (0x0003fa7b) tmo_note_info_pane_t3_ParamLimits

0xe84d,	// (0x0003fa90) tmo_note_info_pane_t4_ParamLimits

0xe85f,	// (0x0003faa2) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x000410fd) tmo_note_info_pane_t_ParamLimits

0xec83,	// (0x0003fec6) settings_container_pane_ParamLimits

0xee86,	// (0x000400c9) indicator_popup_pane_cp5

0xee86,	// (0x000400c9) indicator_popup_pane_cp6

0xeeb6,	// (0x000400f9) list_set_graphic_pane_copy1_ParamLimits

0xe966,	// (0x0003fba9) bg_popup_window_pane_cp23

0xef2d,	// (0x00040170) popup_tmo_big_image_note_window_g1

0xef39,	// (0x0004017c) popup_tmo_big_image_note_window_t1

0xef49,	// (0x0004018c) popup_tmo_big_image_note_window_t2

0xef59,	// (0x0004019c) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x00041116) popup_tmo_big_image_note_window_t

0xb6f9,	// (0x0003c93c) cell_ai5_widget_lrg_icon_pane_g1

0xef69,	// (0x000401ac) cell_ai5_widget_lrg_icon_pane_t1

0xef77,	// (0x000401ba) cell_ai5_widget_list_row_pane_ParamLimits

0xef77,	// (0x000401ba) cell_ai5_widget_list_row_pane

0xef8f,	// (0x000401d2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xef8f,	// (0x000401d2) cell_ai5_widget_list_row_pane_g1

0xef9c,	// (0x000401df) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xef9c,	// (0x000401df) cell_ai5_widget_list_row_pane_t1

0xefc7,	// (0x0004020a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xefc7,	// (0x0004020a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x0004111d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x0004111d) cell_ai5_widget_list_row_pane_t

0x55ff,	// (0x00036842) main_fep_vtchi_ss_pane

0xf00b,	// (0x0004024e) popup_fep_char_pre_window

0xf013,	// (0x00040256) popup_fep_ituss_window

0xf034,	// (0x00040277) popup_fep_vkbss_window

0xf055,	// (0x00040298) grid_vkbss_keypad_pane_ParamLimits

0xf055,	// (0x00040298) grid_vkbss_keypad_pane

0xf065,	// (0x000402a8) ituss_keypad_pane

0x87e8,	// (0x00039a2b) aid_vkbss_key_offset_ParamLimits

0x87e8,	// (0x00039a2b) aid_vkbss_key_offset

0x87f4,	// (0x00039a37) cell_vkbss_key_pane_ParamLimits

0x87f4,	// (0x00039a37) cell_vkbss_key_pane

0xf074,	// (0x000402b7) bg_cell_vkbss_key_g1_ParamLimits

0xf074,	// (0x000402b7) bg_cell_vkbss_key_g1

0xf080,	// (0x000402c3) cell_vkbss_key_3p_pane_ParamLimits

0xf080,	// (0x000402c3) cell_vkbss_key_3p_pane

0xf09a,	// (0x000402dd) cell_vkbss_key_g1_ParamLimits

0xf09a,	// (0x000402dd) cell_vkbss_key_g1

0xf0b4,	// (0x000402f7) cell_vkbss_key_t1_ParamLimits

0xf0b4,	// (0x000402f7) cell_vkbss_key_t1

0x880a,	// (0x00039a4d) cell_ituss_key_pane_ParamLimits

0x880a,	// (0x00039a4d) cell_ituss_key_pane

0xf0df,	// (0x00040322) bg_cell_ituss_key_g1_ParamLimits

0xf0df,	// (0x00040322) bg_cell_ituss_key_g1

0xf0eb,	// (0x0004032e) cell_ituss_key_pane_g1_ParamLimits

0xf0eb,	// (0x0004032e) cell_ituss_key_pane_g1

0x881b,	// (0x00039a5e) cell_ituss_key_pane_g2_ParamLimits

0x881b,	// (0x00039a5e) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x00041124) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x00041124) cell_ituss_key_pane_g

0x8847,	// (0x00039a8a) cell_ituss_key_t1_ParamLimits

0x8847,	// (0x00039a8a) cell_ituss_key_t1

0x8881,	// (0x00039ac4) cell_ituss_key_t2_ParamLimits

0x8881,	// (0x00039ac4) cell_ituss_key_t2

0x88b2,	// (0x00039af5) cell_ituss_key_t3_ParamLimits

0x88b2,	// (0x00039af5) cell_ituss_key_t3

0x8881,	// (0x00039ac4) cell_ituss_key_t4_ParamLimits

0x8881,	// (0x00039ac4) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x0004112b) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x0004112b) cell_ituss_key_t

0xf111,	// (0x00040354) cell_vkbss_key_3p_pane_g1

0xf119,	// (0x0004035c) cell_vkbss_key_3p_pane_g2

0xf121,	// (0x00040364) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00041136) cell_vkbss_key_3p_pane_g

0x55ff,	// (0x00036842) bg_popup_fep_char_preview_window_cp02

0x88f5,	// (0x00039b38) popup_fep_char_pre_window_t1

0xe23a,	// (0x0003f47d) main_ai5_sk_pane

0xe8d9,	// (0x0003fb1c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe8e5,	// (0x0003fb28) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe8fa,	// (0x0003fb3d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe906,	// (0x0003fb49) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x00041108) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe912,	// (0x0003fb55) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1dd4,	// (0x00033017) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf129,	// (0x0004036c) main_ai5_sk_pane_g1

0x953d,	// (0x0003a780) popup_query_code_window_g1

0xf029,	// (0x0004026c) popup_fep_vkb_icf_pane

0xf03f,	// (0x00040282) popup_fep_vtchi_icf_pane

0xf132,	// (0x00040375) bg_icf_pane

0xf13e,	// (0x00040381) list_vkb_icf_pane

0xf14a,	// (0x0004038d) bg_icf_pane_cp01

0xf15d,	// (0x000403a0) vtchi_icf_list_pane

0xf16e,	// (0x000403b1) list_vkb_icf_pane_t1_ParamLimits

0xf16e,	// (0x000403b1) list_vkb_icf_pane_t1

0xf184,	// (0x000403c7) vtchi_icf_list_pane_t1_ParamLimits

0xf184,	// (0x000403c7) vtchi_icf_list_pane_t1

0xf013,	// (0x00040256) popup_fep_ituss_window_ParamLimits

0xf03f,	// (0x00040282) popup_fep_vtchi_icf_pane_ParamLimits

0xf065,	// (0x000402a8) ituss_keypad_pane_ParamLimits

0x87dc,	// (0x00039a1f) ituss_sks_pane

0xf132,	// (0x00040375) bg_icf_pane_ParamLimits

0xefef,	// (0x00040232) icf_edit_indi_pane_ParamLimits

0xefef,	// (0x00040232) icf_edit_indi_pane

0xf13e,	// (0x00040381) list_vkb_icf_pane_ParamLimits

0xf14a,	// (0x0004038d) bg_icf_pane_cp01_ParamLimits

0xeffe,	// (0x00040241) icf_edit_indi_pane_cp01_ParamLimits

0xeffe,	// (0x00040241) icf_edit_indi_pane_cp01

0xf165,	// (0x000403a8) vtchi_query_pane

0xb974,	// (0x0003cbb7) icf_edit_indi_pane_g1_ParamLimits

0xb974,	// (0x0003cbb7) icf_edit_indi_pane_g1

0xf1f3,	// (0x00040436) icf_edit_indi_pane_g2_ParamLimits

0xf1f3,	// (0x00040436) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0004114e) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0004114e) icf_edit_indi_pane_g

0xf202,	// (0x00040445) icf_edit_indi_pane_t1

0xf19c,	// (0x000403df) bg_input_focus_pane_cp042

0xf4e8,	// (0x0004072b) vtchi_button_pane

0xf1a5,	// (0x000403e8) vtchi_query_pane_t1

0xf1b3,	// (0x000403f6) vtchi_query_pane_t2

0xf1c1,	// (0x00040404) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0004113d) vtchi_query_pane_t

0x55ff,	// (0x00036842) bg_button_pane_cp13

0xf1cf,	// (0x00040412) vtchi_button_pane_g1

0x8904,	// (0x00039b47) ituss_sks_pane_g1

0x890f,	// (0x00039b52) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00041144) ituss_sks_pane_g

0xf1d7,	// (0x0004041a) ituss_sks_pane_t1

0xf1e5,	// (0x00040428) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00041149) ituss_sks_pane_t

0xb1a9,	// (0x0003c3ec) indicator_nsta_pane_cp_g1

0xb1b2,	// (0x0003c3f5) indicator_nsta_pane_cp_g2

0xb1ba,	// (0x0003c3fd) indicator_nsta_pane_cp_g3

0xb1c2,	// (0x0003c405) indicator_nsta_pane_cp_g4

0xb1ca,	// (0x0003c40d) indicator_nsta_pane_cp_g5

0xb1d2,	// (0x0003c415) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x00040ce6) indicator_nsta_pane_cp_g

0xd925,	// (0x0003eb68) cell_graphic2_pane_t2_ParamLimits

0xd925,	// (0x0003eb68) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00040fff) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00040fff) cell_graphic2_pane_t

0xd952,	// (0x0003eb95) cell_graphic2_control_pane_t1

0x65bb,	// (0x000377fe) signal_pane_g3_ParamLimits

0x65bb,	// (0x000377fe) signal_pane_g3

0x65cd,	// (0x00037810) signal_pane_g4_ParamLimits

0x65cd,	// (0x00037810) signal_pane_g4

0xefd9,	// (0x0004021c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xefd9,	// (0x0004021c) cell_ai5_widget_list_row_pane_t3

0xf0ff,	// (0x00040342) cell_ituss_key_pane_t1_ParamLimits

0xf0ff,	// (0x00040342) cell_ituss_key_pane_t1

0x91ba,	// (0x0003a3fd) form_field_data_wide_pane_vc_t2_ParamLimits

0x91ba,	// (0x0003a3fd) form_field_data_wide_pane_vc_t2

0x91ce,	// (0x0003a411) form_field_data_wide_pane_vc_t3_ParamLimits

0x91ce,	// (0x0003a411) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00040a47) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00040a47) form_field_data_wide_pane_vc_t

0xae5a,	// (0x0003c09d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae5a,	// (0x0003c09d) form_field_slider_wide_pane_vc_t3

0xaf30,	// (0x0003c173) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf30,	// (0x0003c173) form_field_popup_wide_pane_vc_t2

0xaf47,	// (0x0003c18a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf47,	// (0x0003c18a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x00040cd5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x00040cd5) form_field_popup_wide_pane_vc_t

0x85f9,	// (0x0003983c) aid_fshwr2_btn_pane_ParamLimits

0x8605,	// (0x00039848) aid_fshwr2_syb_pane_ParamLimits

0x8611,	// (0x00039854) aid_fshwr2_txt_pane_ParamLimits

0x7e35,	// (0x00039078) fshwr2_bg_pane_ParamLimits

0x861d,	// (0x00039860) fshwr2_func_candi_pane_ParamLimits

0x8630,	// (0x00039873) fshwr2_hwr_syb_pane_ParamLimits

0x863e,	// (0x00039881) fshwr2_icf_pane_ParamLimits

0x4228,	// (0x0003546b) list_double_graphic_pane_vc_g4_ParamLimits

0x4228,	// (0x0003546b) list_double_graphic_pane_vc_g4

0x883b,	// (0x00039a7e) cell_ituss_key_pane_g3_ParamLimits

0x883b,	// (0x00039a7e) cell_ituss_key_pane_g3

0x88e3,	// (0x00039b26) cell_ituss_key_t5_ParamLimits

0x88e3,	// (0x00039b26) cell_ituss_key_t5

0xf034,	// (0x00040277) popup_fep_vkbss_window_ParamLimits
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
	0, // AknLayoutScalable_Avkon::Tpopup_fep_vkbss_window_ParamLimits_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
