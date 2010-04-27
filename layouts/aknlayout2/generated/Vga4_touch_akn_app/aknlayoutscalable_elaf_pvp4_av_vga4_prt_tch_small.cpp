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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f61e };

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
0x6330,	// (0x0002594e) Screen

0x633c,	// (0x0002595a) application_window_ParamLimits

0x633c,	// (0x0002595a) application_window

0x0c06,	// (0x00020224) screen_g1

0x6398,	// (0x000259b6) area_bottom_pane_ParamLimits

0x6398,	// (0x000259b6) area_bottom_pane

0x6458,	// (0x00025a76) area_top_pane_ParamLimits

0x6458,	// (0x00025a76) area_top_pane

0x64ec,	// (0x00025b0a) main_pane_ParamLimits

0x64ec,	// (0x00025b0a) main_pane

0x0c10,	// (0x0002022e) misc_graphics

0x7ec0,	// (0x000274de) battery_pane_ParamLimits

0x7ec0,	// (0x000274de) battery_pane

0x9f09,	// (0x00029527) bg_status_flat_pane_g8

0x9f11,	// (0x0002952f) bg_status_flat_pane_g9

0x7f88,	// (0x000275a6) context_pane_ParamLimits

0x7f88,	// (0x000275a6) context_pane

0x80ac,	// (0x000276ca) navi_pane_ParamLimits

0x80ac,	// (0x000276ca) navi_pane

0x813c,	// (0x0002775a) signal_pane_ParamLimits

0x813c,	// (0x0002775a) signal_pane

0x0008,

0xf874,	// (0x0002ee92) bg_status_flat_pane_g

0x81a9,	// (0x000277c7) status_pane_g1_ParamLimits

0x81a9,	// (0x000277c7) status_pane_g1

0x81bd,	// (0x000277db) status_pane_g2_ParamLimits

0x81bd,	// (0x000277db) status_pane_g2

0x81c9,	// (0x000277e7) status_pane_g3_ParamLimits

0x81c9,	// (0x000277e7) status_pane_g3

0x0004,

0xf79b,	// (0x0002edb9) status_pane_g_ParamLimits

0xf79b,	// (0x0002edb9) status_pane_g

0x81fd,	// (0x0002781b) title_pane_ParamLimits

0x81fd,	// (0x0002781b) title_pane

0x823a,	// (0x00027858) uni_indicator_pane_ParamLimits

0x823a,	// (0x00027858) uni_indicator_pane

0x77a9,	// (0x00026dc7) bg_list_pane_ParamLimits

0x77a9,	// (0x00026dc7) bg_list_pane

0x77c9,	// (0x00026de7) find_pane

0x77d1,	// (0x00026def) listscroll_app_pane_ParamLimits

0x77d1,	// (0x00026def) listscroll_app_pane

0x77dd,	// (0x00026dfb) listscroll_form_pane

0x77e5,	// (0x00026e03) listscroll_gen_pane_ParamLimits

0x77e5,	// (0x00026e03) listscroll_gen_pane

0x77f9,	// (0x00026e17) listscroll_set_pane

0x6b3f,	// (0x0002615d) main_idle_act_pane

0x72a2,	// (0x000268c0) main_idle_trad_pane

0x72a2,	// (0x000268c0) main_list_empty_pane

0x7813,	// (0x00026e31) main_midp_pane

0x781f,	// (0x00026e3d) main_pane_g1_ParamLimits

0x781f,	// (0x00026e3d) main_pane_g1

0x782d,	// (0x00026e4b) popup_ai_message_window_ParamLimits

0x782d,	// (0x00026e4b) popup_ai_message_window

0x78e1,	// (0x00026eff) popup_fep_china_uni_window_ParamLimits

0x78e1,	// (0x00026eff) popup_fep_china_uni_window

0x7941,	// (0x00026f5f) popup_fep_japan_candidate_window_ParamLimits

0x7941,	// (0x00026f5f) popup_fep_japan_candidate_window

0x796b,	// (0x00026f89) popup_fep_japan_predictive_window_ParamLimits

0x796b,	// (0x00026f89) popup_fep_japan_predictive_window

0x79a1,	// (0x00026fbf) popup_find_window

0x79ae,	// (0x00026fcc) popup_grid_graphic_window_ParamLimits

0x79ae,	// (0x00026fcc) popup_grid_graphic_window

0x79dc,	// (0x00026ffa) popup_large_graphic_colour_window

0x7a02,	// (0x00027020) popup_menu_window_ParamLimits

0x7a02,	// (0x00027020) popup_menu_window

0x7bcc,	// (0x000271ea) popup_note_image_window

0x7bb6,	// (0x000271d4) popup_note_wait_window_ParamLimits

0x7bb6,	// (0x000271d4) popup_note_wait_window

0x7bb6,	// (0x000271d4) popup_note_window_ParamLimits

0x7bb6,	// (0x000271d4) popup_note_window

0x7c32,	// (0x00027250) popup_query_code_window_ParamLimits

0x7c32,	// (0x00027250) popup_query_code_window

0x7c48,	// (0x00027266) popup_query_data_code_window_ParamLimits

0x7c48,	// (0x00027266) popup_query_data_code_window

0x7c6b,	// (0x00027289) popup_query_data_window_ParamLimits

0x7c6b,	// (0x00027289) popup_query_data_window

0x7c8d,	// (0x000272ab) popup_query_sat_info_window_ParamLimits

0x7c8d,	// (0x000272ab) popup_query_sat_info_window

0x7ccc,	// (0x000272ea) popup_snote_single_graphic_window_ParamLimits

0x7ccc,	// (0x000272ea) popup_snote_single_graphic_window

0x7ccc,	// (0x000272ea) popup_snote_single_text_window_ParamLimits

0x7ccc,	// (0x000272ea) popup_snote_single_text_window

0x7ce3,	// (0x00027301) popup_sub_window_general

0x7e29,	// (0x00027447) popup_window_general_ParamLimits

0x7e29,	// (0x00027447) popup_window_general

0x7e42,	// (0x00027460) power_save_pane

0x7608,	// (0x00026c26) control_pane_g1_ParamLimits

0x7608,	// (0x00026c26) control_pane_g1

0x7631,	// (0x00026c4f) control_pane_g2_ParamLimits

0x7631,	// (0x00026c4f) control_pane_g2

0x7656,	// (0x00026c74) control_pane_g3_ParamLimits

0x7656,	// (0x00026c74) control_pane_g3

0x0007,

0xf783,	// (0x0002eda1) control_pane_g_ParamLimits

0xf783,	// (0x0002eda1) control_pane_g

0x76ae,	// (0x00026ccc) control_pane_t1_ParamLimits

0x76ae,	// (0x00026ccc) control_pane_t1

0x76fa,	// (0x00026d18) control_pane_t2_ParamLimits

0x76fa,	// (0x00026d18) control_pane_t2

0x0002,

0xf794,	// (0x0002edb2) control_pane_t_ParamLimits

0xf794,	// (0x0002edb2) control_pane_t

0x752d,	// (0x00026b4b) navi_navi_volume_pane_cp1

0x7535,	// (0x00026b53) status_small_icon_pane

0x753d,	// (0x00026b5b) status_small_pane_g1_ParamLimits

0x753d,	// (0x00026b5b) status_small_pane_g1

0x7571,	// (0x00026b8f) status_small_pane_g2_ParamLimits

0x7571,	// (0x00026b8f) status_small_pane_g2

0x757d,	// (0x00026b9b) status_small_pane_g3_ParamLimits

0x757d,	// (0x00026b9b) status_small_pane_g3

0x7589,	// (0x00026ba7) status_small_pane_g4_ParamLimits

0x7589,	// (0x00026ba7) status_small_pane_g4

0x7595,	// (0x00026bb3) status_small_pane_g5_ParamLimits

0x7595,	// (0x00026bb3) status_small_pane_g5

0x75a3,	// (0x00026bc1) status_small_pane_g6_ParamLimits

0x75a3,	// (0x00026bc1) status_small_pane_g6

0x0007,

0xf772,	// (0x0002ed90) status_small_pane_g_ParamLimits

0xf772,	// (0x0002ed90) status_small_pane_g

0x75d2,	// (0x00026bf0) status_small_pane_t1

0x75f4,	// (0x00026c12) status_small_wait_pane_ParamLimits

0x75f4,	// (0x00026c12) status_small_wait_pane

0x6eb2,	// (0x000264d0) aid_levels_signal_ParamLimits

0x6eb2,	// (0x000264d0) aid_levels_signal

0x6ec4,	// (0x000264e2) signal_pane_g1_ParamLimits

0x6ec4,	// (0x000264e2) signal_pane_g1

0x6ed9,	// (0x000264f7) signal_pane_g2_ParamLimits

0x6ed9,	// (0x000264f7) signal_pane_g2

0x0003,

0xf703,	// (0x0002ed21) signal_pane_g_ParamLimits

0xf703,	// (0x0002ed21) signal_pane_g

0x33dc,	// (0x000229fa) context_pane_g1

0x674b,	// (0x00025d69) title_pane_g1

0x6769,	// (0x00025d87) title_pane_t1

0x0c32,	// (0x00020250) title_pane_t2

0x0c58,	// (0x00020276) title_pane_t3

0x0002,

0xf557,	// (0x0002eb75) title_pane_t

0x8252,	// (0x00027870) aid_levels_battery_ParamLimits

0x8252,	// (0x00027870) aid_levels_battery

0x8266,	// (0x00027884) battery_pane_g1_ParamLimits

0x8266,	// (0x00027884) battery_pane_g1

0x827c,	// (0x0002789a) battery_pane_g2_ParamLimits

0x827c,	// (0x0002789a) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002edc4) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002edc4) battery_pane_g

0xa853,	// (0x00029e71) uni_indicator_pane_g1

0xa869,	// (0x00029e87) uni_indicator_pane_g2

0xa87f,	// (0x00029e9d) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002ef3a) uni_indicator_pane_g

0x368a,	// (0x00022ca8) navi_icon_pane_ParamLimits

0x368a,	// (0x00022ca8) navi_icon_pane

0x360e,	// (0x00022c2c) navi_midp_pane

0x36a6,	// (0x00022cc4) navi_navi_pane

0x36b0,	// (0x00022cce) navi_text_pane_ParamLimits

0x36b0,	// (0x00022cce) navi_text_pane

0x0c06,	// (0x00020224) status_small_wait_pane_g1

0x0f6d,	// (0x0002058b) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002ef35) status_small_wait_pane_g

0xa566,	// (0x00029b84) navi_navi_icon_text_pane

0xa56e,	// (0x00029b8c) navi_navi_pane_g1_ParamLimits

0xa56e,	// (0x00029b8c) navi_navi_pane_g1

0xa580,	// (0x00029b9e) navi_navi_pane_g2_ParamLimits

0xa580,	// (0x00029b9e) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002ef03) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002ef03) navi_navi_pane_g

0xa592,	// (0x00029bb0) navi_navi_tabs_pane

0xa59b,	// (0x00029bb9) navi_navi_text_pane

0xa566,	// (0x00029b84) navi_navi_volume_pane

0xa542,	// (0x00029b60) navi_text_pane_t1

0xa536,	// (0x00029b54) navi_icon_pane_g1

0xa489,	// (0x00029aa7) navi_navi_text_pane_t1

0x88f4,	// (0x00027f12) navi_navi_volume_pane_g1

0x88fc,	// (0x00027f1a) volume_small_pane

0xa3ef,	// (0x00029a0d) navi_navi_icon_text_pane_g1

0xa3f7,	// (0x00029a15) navi_navi_icon_text_pane_t1

0x36a6,	// (0x00022cc4) navi_tabs_2_long_pane

0x36a6,	// (0x00022cc4) navi_tabs_2_pane

0x36a6,	// (0x00022cc4) navi_tabs_3_long_pane

0x36a6,	// (0x00022cc4) navi_tabs_3_pane

0x36a6,	// (0x00022cc4) navi_tabs_4_pane

0x88d4,	// (0x00027ef2) tabs_2_active_pane_ParamLimits

0x88d4,	// (0x00027ef2) tabs_2_active_pane

0x88e4,	// (0x00027f02) tabs_2_passive_pane_ParamLimits

0x88e4,	// (0x00027f02) tabs_2_passive_pane

0x88a2,	// (0x00027ec0) tabs_3_active_pane_ParamLimits

0x88a2,	// (0x00027ec0) tabs_3_active_pane

0x88b2,	// (0x00027ed0) tabs_3_passive_pane_ParamLimits

0x88b2,	// (0x00027ed0) tabs_3_passive_pane

0x88c3,	// (0x00027ee1) tabs_3_passive_pane_cp_ParamLimits

0x88c3,	// (0x00027ee1) tabs_3_passive_pane_cp

0x8856,	// (0x00027e74) tabs_4_active_pane_ParamLimits

0x8856,	// (0x00027e74) tabs_4_active_pane

0x8869,	// (0x00027e87) tabs_4_passive_pane_ParamLimits

0x8869,	// (0x00027e87) tabs_4_passive_pane

0x887a,	// (0x00027e98) tabs_4_passive_pane_cp_ParamLimits

0x887a,	// (0x00027e98) tabs_4_passive_pane_cp

0x888b,	// (0x00027ea9) tabs_4_passive_pane_cp2_ParamLimits

0x888b,	// (0x00027ea9) tabs_4_passive_pane_cp2

0x8832,	// (0x00027e50) tabs_2_long_active_pane_ParamLimits

0x8832,	// (0x00027e50) tabs_2_long_active_pane

0x8844,	// (0x00027e62) tabs_2_long_passive_pane_ParamLimits

0x8844,	// (0x00027e62) tabs_2_long_passive_pane

0x87f3,	// (0x00027e11) tabs_3_long_active_pane_ParamLimits

0x87f3,	// (0x00027e11) tabs_3_long_active_pane

0x8806,	// (0x00027e24) tabs_3_long_passive_pane_ParamLimits

0x8806,	// (0x00027e24) tabs_3_long_passive_pane

0x881f,	// (0x00027e3d) tabs_3_long_passive_pane_cp_ParamLimits

0x881f,	// (0x00027e3d) tabs_3_long_passive_pane_cp

0x8799,	// (0x00027db7) volume_small_pane_g1

0x87a2,	// (0x00027dc0) volume_small_pane_g2

0x87ab,	// (0x00027dc9) volume_small_pane_g3

0x87b4,	// (0x00027dd2) volume_small_pane_g4

0x87bd,	// (0x00027ddb) volume_small_pane_g5

0x87c6,	// (0x00027de4) volume_small_pane_g6

0x87cf,	// (0x00027ded) volume_small_pane_g7

0x87d8,	// (0x00027df6) volume_small_pane_g8

0x87e1,	// (0x00027dff) volume_small_pane_g9

0x87ea,	// (0x00027e08) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002eecf) volume_small_pane_g

0x0c78,	// (0x00020296) bg_active_tab_pane_cp2_ParamLimits

0x0c78,	// (0x00020296) bg_active_tab_pane_cp2

0x67d1,	// (0x00025def) tabs_3_active_pane_g1

0x67d9,	// (0x00025df7) tabs_3_active_pane_t1

0x0c78,	// (0x00020296) bg_passive_tab_pane_cp2_ParamLimits

0x0c78,	// (0x00020296) bg_passive_tab_pane_cp2

0x67d1,	// (0x00025def) tabs_3_passive_pane_g1

0x67d9,	// (0x00025df7) tabs_3_passive_pane_t1

0x0c78,	// (0x00020296) bg_active_tab_pane_cp3_ParamLimits

0x0c78,	// (0x00020296) bg_active_tab_pane_cp3

0x67eb,	// (0x00025e09) tabs_4_active_pane_g1

0x67f3,	// (0x00025e11) tabs_4_active_pane_t1

0x0c78,	// (0x00020296) bg_passive_tab_pane_cp3_ParamLimits

0x0c78,	// (0x00020296) bg_passive_tab_pane_cp3

0x67eb,	// (0x00025e09) tabs_4_1_passive_pane_g1

0x67f3,	// (0x00025e11) tabs_4_1_passive_pane_t1

0x7813,	// (0x00026e31) list_highlight_pane_cp2

0xaace,	// (0x0002a0ec) list_set_pane_ParamLimits

0xaace,	// (0x0002a0ec) list_set_pane

0xab96,	// (0x0002a1b4) main_pane_set_t1_ParamLimits

0xab96,	// (0x0002a1b4) main_pane_set_t1

0xabb6,	// (0x0002a1d4) main_pane_set_t2_ParamLimits

0xabb6,	// (0x0002a1d4) main_pane_set_t2

0xabca,	// (0x0002a1e8) main_pane_set_t3_ParamLimits

0xabca,	// (0x0002a1e8) main_pane_set_t3

0xabde,	// (0x0002a1fc) main_pane_set_t4_ParamLimits

0xabde,	// (0x0002a1fc) main_pane_set_t4

0x0003,

0xf981,	// (0x0002ef9f) main_pane_set_t_ParamLimits

0xf981,	// (0x0002ef9f) main_pane_set_t

0xabf2,	// (0x0002a210) setting_code_pane

0xabfc,	// (0x0002a21a) setting_slider_graphic_pane

0xabfc,	// (0x0002a21a) setting_slider_pane

0xabfc,	// (0x0002a21a) setting_text_pane

0xabfc,	// (0x0002a21a) setting_volume_pane

0x6805,	// (0x00025e23) volume_set_pane

0x0c78,	// (0x00020296) bg_set_opt_pane_cp

0x680f,	// (0x00025e2d) setting_slider_pane_t1

0x6828,	// (0x00025e46) setting_slider_pane_t2

0x6842,	// (0x00025e60) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002eb7c) setting_slider_pane_t

0x685a,	// (0x00025e78) slider_set_pane

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp2

0x0c86,	// (0x000202a4) setting_slider_graphic_pane_g1

0x6870,	// (0x00025e8e) setting_slider_graphic_pane_t1

0x6880,	// (0x00025e9e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002eb83) setting_slider_graphic_pane_t

0x6890,	// (0x00025eae) slider_set_pane_cp

0x0c10,	// (0x0002022e) input_focus_pane_cp1

0xaa8f,	// (0x0002a0ad) list_set_text_pane

0x0c06,	// (0x00020224) setting_text_pane_g1

0x0c10,	// (0x0002022e) input_focus_pane_cp2

0x0c06,	// (0x00020224) setting_code_pane_g1

0x0c8f,	// (0x000202ad) setting_code_pane_t1

0x5219,	// (0x00024837) set_text_pane_t1_ParamLimits

0x5219,	// (0x00024837) set_text_pane_t1

0x2d8e,	// (0x000223ac) set_opt_bg_pane_g1

0x2d96,	// (0x000223b4) set_opt_bg_pane_g2

0xaa67,	// (0x0002a085) set_opt_bg_pane_g3

0x2da6,	// (0x000223c4) set_opt_bg_pane_g4

0x2dae,	// (0x000223cc) set_opt_bg_pane_g5

0x2db6,	// (0x000223d4) set_opt_bg_pane_g6

0xaa71,	// (0x0002a08f) set_opt_bg_pane_g7

0xaa7b,	// (0x0002a099) set_opt_bg_pane_g8

0xaa85,	// (0x0002a0a3) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002ef8c) set_opt_bg_pane_g

0xaa5a,	// (0x0002a078) slider_set_pane_g1

0x897d,	// (0x00027f9b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002ef7d) slider_set_pane_g

0x8905,	// (0x00027f23) volume_set_pane_g1

0x890f,	// (0x00027f2d) volume_set_pane_g2

0x8919,	// (0x00027f37) volume_set_pane_g3

0x8923,	// (0x00027f41) volume_set_pane_g4

0x892d,	// (0x00027f4b) volume_set_pane_g5

0x8937,	// (0x00027f55) volume_set_pane_g6

0x8941,	// (0x00027f5f) volume_set_pane_g7

0x894b,	// (0x00027f69) volume_set_pane_g8

0x8955,	// (0x00027f73) volume_set_pane_g9

0x895f,	// (0x00027f7d) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002ef55) volume_set_pane_g

0x6898,	// (0x00025eb6) indicator_pane_ParamLimits

0x6898,	// (0x00025eb6) indicator_pane

0x68a4,	// (0x00025ec2) main_idle_pane_g2_ParamLimits

0x68a4,	// (0x00025ec2) main_idle_pane_g2

0x68cc,	// (0x00025eea) main_pane_idle_g1_ParamLimits

0x68cc,	// (0x00025eea) main_pane_idle_g1

0x0cb7,	// (0x000202d5) popup_clock_digital_analogue_window_ParamLimits

0x0cb7,	// (0x000202d5) popup_clock_digital_analogue_window

0x68da,	// (0x00025ef8) soft_indicator_pane_ParamLimits

0x68da,	// (0x00025ef8) soft_indicator_pane

0x68e8,	// (0x00025f06) wallpaper_pane_ParamLimits

0x68e8,	// (0x00025f06) wallpaper_pane

0x0c06,	// (0x00020224) wallpaper_pane_g1

0x68f4,	// (0x00025f12) indicator_pane_g1_ParamLimits

0x68f4,	// (0x00025f12) indicator_pane_g1

0xaed8,	// (0x0002a4f6) navi_navi_icon_text_pane_srt_g1

0x0ce5,	// (0x00020303) soft_indicator_pane_t1

0x0cff,	// (0x0002031d) aid_ps_area_pane

0x6900,	// (0x00025f1e) aid_ps_clock_pane

0x0d10,	// (0x0002032e) aid_ps_indicator_pane

0x0d1c,	// (0x0002033a) indicator_ps_pane_ParamLimits

0x0d1c,	// (0x0002033a) indicator_ps_pane

0x0d2b,	// (0x00020349) power_save_pane_g1_ParamLimits

0x0d2b,	// (0x00020349) power_save_pane_g1

0x0d37,	// (0x00020355) power_save_pane_g2_ParamLimits

0x0d37,	// (0x00020355) power_save_pane_g2

0x634c,	// (0x0002596a) aid_navinavi_width_pane

0x0cff,	// (0x0002031d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002eb88) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002eb88) power_save_pane_g

0x0d45,	// (0x00020363) power_save_pane_t1_ParamLimits

0x0d45,	// (0x00020363) power_save_pane_t1

0x6900,	// (0x00025f1e) aid_ps_clock_pane_ParamLimits

0x0d10,	// (0x0002032e) aid_ps_indicator_pane_ParamLimits

0x0d57,	// (0x00020375) power_save_pane_t4_ParamLimits

0x0d57,	// (0x00020375) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002eb8d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002eb8d) power_save_pane_t

0x0d81,	// (0x0002039f) power_save_t3_ParamLimits

0x0d81,	// (0x0002039f) power_save_t3

0x0d6c,	// (0x0002038a) power_save_t2_ParamLimits

0x0d6c,	// (0x0002038a) power_save_t2

0x0d96,	// (0x000203b4) indicator_ps_pane_g1

0x690e,	// (0x00025f2c) ai_gene_pane_ParamLimits

0x690e,	// (0x00025f2c) ai_gene_pane

0x691a,	// (0x00025f38) ai_links_pane_ParamLimits

0x691a,	// (0x00025f38) ai_links_pane

0x6926,	// (0x00025f44) indicator_pane_cp1_ParamLimits

0x6926,	// (0x00025f44) indicator_pane_cp1

0x6932,	// (0x00025f50) main_pane_idle_g1_cp_ParamLimits

0x6932,	// (0x00025f50) main_pane_idle_g1_cp

0x0d9f,	// (0x000203bd) popup_ai_links_title_window

0x693e,	// (0x00025f5c) soft_indicator_pane_cp1_ParamLimits

0x693e,	// (0x00025f5c) soft_indicator_pane_cp1

0xa841,	// (0x00029e5f) ai_links_pane_g1

0xa84a,	// (0x00029e68) grid_ai_links_pane

0xa826,	// (0x00029e44) ai_gene_pane_1

0xa82f,	// (0x00029e4d) ai_gene_pane_2

0xa838,	// (0x00029e56) list_highlight_pane_cp4

0xa806,	// (0x00029e24) cell_ai_link_pane_ParamLimits

0xa806,	// (0x00029e24) cell_ai_link_pane

0xa7fe,	// (0x00029e1c) cell_ai_link_pane_g1

0x0f6d,	// (0x0002058b) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002ef30) cell_ai_link_pane_g

0x0c10,	// (0x0002022e) grid_highlight_cp2

0x0c10,	// (0x0002022e) bg_popup_sub_pane_cp1

0x0db6,	// (0x000203d4) popup_ai_links_title_window_t1

0xa74a,	// (0x00029d68) ai_gene_pane_1_g1_ParamLimits

0xa74a,	// (0x00029d68) ai_gene_pane_1_g1

0xa756,	// (0x00029d74) ai_gene_pane_1_g2_ParamLimits

0xa756,	// (0x00029d74) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002ef26) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002ef26) ai_gene_pane_1_g

0xa763,	// (0x00029d81) ai_gene_pane_1_t1_ParamLimits

0xa763,	// (0x00029d81) ai_gene_pane_1_t1

0xa797,	// (0x00029db5) grid_ai_soft_ind_pane

0xa735,	// (0x00029d53) ai_gene_pane_2_t1_ParamLimits

0xa735,	// (0x00029d53) ai_gene_pane_2_t1

0x694a,	// (0x00025f68) main_pane_empty_t1_ParamLimits

0x694a,	// (0x00025f68) main_pane_empty_t1

0x6962,	// (0x00025f80) main_pane_empty_t2_ParamLimits

0x6962,	// (0x00025f80) main_pane_empty_t2

0x6977,	// (0x00025f95) main_pane_empty_t3_ParamLimits

0x6977,	// (0x00025f95) main_pane_empty_t3

0x6989,	// (0x00025fa7) main_pane_empty_t4_ParamLimits

0x6989,	// (0x00025fa7) main_pane_empty_t4

0x699b,	// (0x00025fb9) main_pane_empty_t5_ParamLimits

0x699b,	// (0x00025fb9) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002eb92) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002eb92) main_pane_empty_t

0x2e0e,	// (0x0002242c) bg_popup_window_pane_ParamLimits

0x2e0e,	// (0x0002242c) bg_popup_window_pane

0xa497,	// (0x00029ab5) find_popup_pane_cp2_ParamLimits

0xa497,	// (0x00029ab5) find_popup_pane_cp2

0xa4a3,	// (0x00029ac1) heading_pane_ParamLimits

0xa4a3,	// (0x00029ac1) heading_pane

0x0c10,	// (0x0002022e) bg_popup_sub_pane

0xa411,	// (0x00029a2f) bg_popup_window_pane_g1_ParamLimits

0xa411,	// (0x00029a2f) bg_popup_window_pane_g1

0xa41d,	// (0x00029a3b) bg_popup_window_pane_g2_ParamLimits

0xa41d,	// (0x00029a3b) bg_popup_window_pane_g2

0xa429,	// (0x00029a47) bg_popup_window_pane_g3_ParamLimits

0xa429,	// (0x00029a47) bg_popup_window_pane_g3

0xa435,	// (0x00029a53) bg_popup_window_pane_g4_ParamLimits

0xa435,	// (0x00029a53) bg_popup_window_pane_g4

0xa441,	// (0x00029a5f) bg_popup_window_pane_g5_ParamLimits

0xa441,	// (0x00029a5f) bg_popup_window_pane_g5

0xa44d,	// (0x00029a6b) bg_popup_window_pane_g6_ParamLimits

0xa44d,	// (0x00029a6b) bg_popup_window_pane_g6

0xa459,	// (0x00029a77) bg_popup_window_pane_g7_ParamLimits

0xa459,	// (0x00029a77) bg_popup_window_pane_g7

0xa465,	// (0x00029a83) bg_popup_window_pane_g8_ParamLimits

0xa465,	// (0x00029a83) bg_popup_window_pane_g8

0xa471,	// (0x00029a8f) bg_popup_window_pane_g9_ParamLimits

0xa471,	// (0x00029a8f) bg_popup_window_pane_g9

0xa47d,	// (0x00029a9b) bg_popup_window_pane_g10_ParamLimits

0xa47d,	// (0x00029a9b) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002eeee) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002eeee) bg_popup_window_pane_g

0xa3a6,	// (0x000299c4) bg_popup_heading_pane_ParamLimits

0xa3a6,	// (0x000299c4) bg_popup_heading_pane

0x8a05,	// (0x00028023) tabs_4_passive_pane_cp_srt_ParamLimits

0x8a05,	// (0x00028023) tabs_4_passive_pane_cp_srt

0x8a17,	// (0x00028035) tabs_4_passive_pane_srt_ParamLimits

0xa3ba,	// (0x000299d8) heading_pane_g2

0x8a17,	// (0x00028035) tabs_4_passive_pane_srt

0x7813,	// (0x00026e31) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7813,	// (0x00026e31) bg_passive_tab_pane_cp3_srt

0xa3c2,	// (0x000299e0) heading_pane_t1_ParamLimits

0xa3c2,	// (0x000299e0) heading_pane_t1

0xa3d9,	// (0x000299f7) heading_pane_t2_ParamLimits

0xa3d9,	// (0x000299f7) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002eee9) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002eee9) heading_pane_t

0x9ed1,	// (0x000294ef) bg_popup_heading_pane_g1

0x9f80,	// (0x0002959e) bg_popup_heading_pane_g2

0x9f8a,	// (0x000295a8) bg_popup_heading_pane_g3

0x9f94,	// (0x000295b2) bg_popup_heading_pane_g4

0x9f9e,	// (0x000295bc) bg_popup_heading_pane_g5

0x9fa8,	// (0x000295c6) bg_popup_heading_pane_g6

0x9fb0,	// (0x000295ce) bg_popup_heading_pane_g7

0x9fb8,	// (0x000295d6) bg_popup_heading_pane_g8

0x9fc2,	// (0x000295e0) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002eea5) bg_popup_heading_pane_g

0x8384,	// (0x000279a2) bg_popup_sub_pane_g1

0x838c,	// (0x000279aa) bg_popup_sub_pane_g2

0x8394,	// (0x000279b2) bg_popup_sub_pane_g3

0x839c,	// (0x000279ba) bg_popup_sub_pane_g4

0x83a4,	// (0x000279c2) bg_popup_sub_pane_g5

0x83ac,	// (0x000279ca) bg_popup_sub_pane_g6

0x83b4,	// (0x000279d2) bg_popup_sub_pane_g7

0x83bc,	// (0x000279da) bg_popup_sub_pane_g8

0x83c4,	// (0x000279e2) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002ee7f) bg_popup_sub_pane_g

0x0c6a,	// (0x00020288) bg_popup_window_pane_cp5_ParamLimits

0x0c6a,	// (0x00020288) bg_popup_window_pane_cp5

0x0dd3,	// (0x000203f1) popup_note_window_g1_ParamLimits

0x0dd3,	// (0x000203f1) popup_note_window_g1

0x0ddf,	// (0x000203fd) popup_note_window_t1_ParamLimits

0x0ddf,	// (0x000203fd) popup_note_window_t1

0x0df5,	// (0x00020413) popup_note_window_t2_ParamLimits

0x0df5,	// (0x00020413) popup_note_window_t2

0x0e0b,	// (0x00020429) popup_note_window_t3_ParamLimits

0x0e0b,	// (0x00020429) popup_note_window_t3

0x0e21,	// (0x0002043f) popup_note_window_t4_ParamLimits

0x0e21,	// (0x0002043f) popup_note_window_t4

0x0e49,	// (0x00020467) popup_note_window_t5_ParamLimits

0x0e49,	// (0x00020467) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002eb9d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002eb9d) popup_note_window_t

0x0e6d,	// (0x0002048b) bg_popup_window_pane_cp6_ParamLimits

0x0e6d,	// (0x0002048b) bg_popup_window_pane_cp6

0x9e4d,	// (0x0002946b) popup_note_image_window_g1_ParamLimits

0x9e4d,	// (0x0002946b) popup_note_image_window_g1

0x9e59,	// (0x00029477) popup_note_image_window_g2_ParamLimits

0x9e59,	// (0x00029477) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002ee73) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002ee73) popup_note_image_window_g

0x9e72,	// (0x00029490) popup_note_image_window_t1_ParamLimits

0x9e72,	// (0x00029490) popup_note_image_window_t1

0x9e8b,	// (0x000294a9) popup_note_image_window_t2_ParamLimits

0x9e8b,	// (0x000294a9) popup_note_image_window_t2

0x9ea4,	// (0x000294c2) popup_note_image_window_t3_ParamLimits

0x9ea4,	// (0x000294c2) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002ee78) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002ee78) popup_note_image_window_t

0x9d0d,	// (0x0002932b) bg_popup_window_pane_cp7_ParamLimits

0x9d0d,	// (0x0002932b) bg_popup_window_pane_cp7

0x9d3d,	// (0x0002935b) popup_note_wait_window_g1_ParamLimits

0x9d3d,	// (0x0002935b) popup_note_wait_window_g1

0x9d49,	// (0x00029367) popup_note_wait_window_g2_ParamLimits

0x9d49,	// (0x00029367) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002ee61) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002ee61) popup_note_wait_window_g

0x9d61,	// (0x0002937f) popup_note_wait_window_t1_ParamLimits

0x9d61,	// (0x0002937f) popup_note_wait_window_t1

0x9d88,	// (0x000293a6) popup_note_wait_window_t2_ParamLimits

0x9d88,	// (0x000293a6) popup_note_wait_window_t2

0x9da6,	// (0x000293c4) popup_note_wait_window_t3_ParamLimits

0x9da6,	// (0x000293c4) popup_note_wait_window_t3

0x9db9,	// (0x000293d7) popup_note_wait_window_t4_ParamLimits

0x9db9,	// (0x000293d7) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002ee68) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002ee68) popup_note_wait_window_t

0x9dde,	// (0x000293fc) wait_bar_pane_ParamLimits

0x9dde,	// (0x000293fc) wait_bar_pane

0x0c10,	// (0x0002022e) wait_anim_pane

0x0c10,	// (0x0002022e) wait_border_pane

0x0c06,	// (0x00020224) wait_anim_pane_g1

0x0c06,	// (0x00020224) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002ed1c) wait_anim_pane_g

0x9cb1,	// (0x000292cf) wait_border_pane_g1

0x9cbc,	// (0x000292da) wait_border_pane_g2

0x9cc5,	// (0x000292e3) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002ee5a) wait_border_pane_g

0x9b1b,	// (0x00029139) bg_popup_window_pane_cp16_ParamLimits

0x9b1b,	// (0x00029139) bg_popup_window_pane_cp16

0x9c1b,	// (0x00029239) indicator_popup_pane_cp4_ParamLimits

0x9c1b,	// (0x00029239) indicator_popup_pane_cp4

0x9c2f,	// (0x0002924d) popup_query_data_window_t1_ParamLimits

0x9c2f,	// (0x0002924d) popup_query_data_window_t1

0x9c41,	// (0x0002925f) popup_query_data_window_t2_ParamLimits

0x9c41,	// (0x0002925f) popup_query_data_window_t2

0x9c5a,	// (0x00029278) popup_query_data_window_t3_ParamLimits

0x9c5a,	// (0x00029278) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002ee53) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002ee53) popup_query_data_window_t

0x9c74,	// (0x00029292) query_popup_data_pane_ParamLimits

0x9c74,	// (0x00029292) query_popup_data_pane

0x9c88,	// (0x000292a6) query_popup_data_pane_cp1_ParamLimits

0x9c88,	// (0x000292a6) query_popup_data_pane_cp1

0x9b1b,	// (0x00029139) bg_popup_window_pane_cp10_ParamLimits

0x9b1b,	// (0x00029139) bg_popup_window_pane_cp10

0x9b4d,	// (0x0002916b) indicator_popup_pane_ParamLimits

0x9b4d,	// (0x0002916b) indicator_popup_pane

0x9b6f,	// (0x0002918d) popup_query_code_window_t1_ParamLimits

0x9b6f,	// (0x0002918d) popup_query_code_window_t1

0x9b89,	// (0x000291a7) popup_query_code_window_t2_ParamLimits

0x9b89,	// (0x000291a7) popup_query_code_window_t2

0x9bd2,	// (0x000291f0) popup_query_code_window_t3_ParamLimits

0x9bd2,	// (0x000291f0) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002ee4c) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002ee4c) popup_query_code_window_t

0x9c01,	// (0x0002921f) query_popup_pane_ParamLimits

0x9c01,	// (0x0002921f) query_popup_pane

0x0e6d,	// (0x0002048b) bg_popup_window_pane_cp15_ParamLimits

0x0e6d,	// (0x0002048b) bg_popup_window_pane_cp15

0x0e8d,	// (0x000204ab) indicator_popup_pane_cp1_ParamLimits

0x0e8d,	// (0x000204ab) indicator_popup_pane_cp1

0x0ea0,	// (0x000204be) indicator_popup_pane_cp2_ParamLimits

0x0ea0,	// (0x000204be) indicator_popup_pane_cp2

0x0ebb,	// (0x000204d9) popup_query_data_code_window_g1_ParamLimits

0x0ebb,	// (0x000204d9) popup_query_data_code_window_g1

0x0ece,	// (0x000204ec) popup_query_data_code_window_t1_ParamLimits

0x0ece,	// (0x000204ec) popup_query_data_code_window_t1

0x0ee0,	// (0x000204fe) popup_query_data_code_window_t2_ParamLimits

0x0ee0,	// (0x000204fe) popup_query_data_code_window_t2

0x0ef2,	// (0x00020510) popup_query_data_code_window_t3_ParamLimits

0x0ef2,	// (0x00020510) popup_query_data_code_window_t3

0x0f08,	// (0x00020526) popup_query_data_code_window_t4_ParamLimits

0x0f08,	// (0x00020526) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002eba8) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002eba8) popup_query_data_code_window_t

0x365a,	// (0x00022c78) list_single_midp_graphic_pane_g3

0x0f22,	// (0x00020540) query_popup_data_pane_cp2_ParamLimits

0x0f35,	// (0x00020553) query_popup_pane_cp2_ParamLimits

0x0f35,	// (0x00020553) query_popup_pane_cp2

0x0c10,	// (0x0002022e) bg_popup_window_pane_cp11

0x9b13,	// (0x00029131) heading_pane_cp5

0x0fcb,	// (0x000205e9) listscroll_popup_info_pane

0x0c10,	// (0x0002022e) input_focus_pane_cp3

0x0f50,	// (0x0002056e) query_popup_pane_t1

0x0f5e,	// (0x0002057c) list_popup_info_pane_ParamLimits

0x0f5e,	// (0x0002057c) list_popup_info_pane

0x0f6d,	// (0x0002058b) listscroll_popup_info_pane_g1

0x0f75,	// (0x00020593) scroll_pane_cp7

0x0f7f,	// (0x0002059d) popup_info_list_pane_t1_ParamLimits

0x0f7f,	// (0x0002059d) popup_info_list_pane_t1

0x0f99,	// (0x000205b7) popup_info_list_pane_t2_ParamLimits

0x0f99,	// (0x000205b7) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002ebb1) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002ebb1) popup_info_list_pane_t

0x0c10,	// (0x0002022e) bg_popup_window_pane_cp12

0xaef2,	// (0x0002a510) find_popup_pane

0x0c78,	// (0x00020296) bg_popup_window_pane_cp3

0x0fb3,	// (0x000205d1) heading_pane_cp3

0x0fbf,	// (0x000205dd) listscroll_popup_graphic_pane

0x0c10,	// (0x0002022e) bg_popup_window_pane_cp4

0x69fd,	// (0x0002601b) heading_pane_cp4

0x0fcb,	// (0x000205e9) listscroll_popup_colour_pane

0x6a07,	// (0x00026025) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a07,	// (0x00026025) cell_large_graphic_colour_none_popup_pane

0x6a1b,	// (0x00026039) grid_large_graphic_colour_popup_pane_ParamLimits

0x6a1b,	// (0x00026039) grid_large_graphic_colour_popup_pane

0x6a47,	// (0x00026065) listscroll_popup_colour_pane_g1_ParamLimits

0x6a47,	// (0x00026065) listscroll_popup_colour_pane_g1

0x6a5e,	// (0x0002607c) listscroll_popup_colour_pane_g2_ParamLimits

0x6a5e,	// (0x0002607c) listscroll_popup_colour_pane_g2

0x6a75,	// (0x00026093) listscroll_popup_colour_pane_g3_ParamLimits

0x6a75,	// (0x00026093) listscroll_popup_colour_pane_g3

0x6a85,	// (0x000260a3) listscroll_popup_colour_pane_g4_ParamLimits

0x6a85,	// (0x000260a3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002ebb6) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002ebb6) listscroll_popup_colour_pane_g

0x0fd3,	// (0x000205f1) scroll_pane_cp6_ParamLimits

0x0fd3,	// (0x000205f1) scroll_pane_cp6

0x6a99,	// (0x000260b7) cell_large_graphic_colour_popup_pane_ParamLimits

0x6a99,	// (0x000260b7) cell_large_graphic_colour_popup_pane

0x0fe5,	// (0x00020603) cell_large_graphic_colour_none_popup_pane_t1

0x0c10,	// (0x0002022e) grid_highlight_pane_cp5

0x0ff4,	// (0x00020612) cell_large_graphic_colour_popup_pane_g1

0x0ffc,	// (0x0002061a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002ebbf) cell_large_graphic_colour_popup_pane_g

0x1004,	// (0x00020622) cell_large_graphic_colour_popup_pane_g2_copy1

0x100d,	// (0x0002062b) grid_highlight_pane_cp4

0x1015,	// (0x00020633) bg_popup_window_pane_cp8_ParamLimits

0x1015,	// (0x00020633) bg_popup_window_pane_cp8

0x1030,	// (0x0002064e) popup_snote_single_text_window_g1_ParamLimits

0x1030,	// (0x0002064e) popup_snote_single_text_window_g1

0x1042,	// (0x00020660) popup_snote_single_text_window_t1_ParamLimits

0x1042,	// (0x00020660) popup_snote_single_text_window_t1

0x1055,	// (0x00020673) popup_snote_single_text_window_t2_ParamLimits

0x1055,	// (0x00020673) popup_snote_single_text_window_t2

0x1068,	// (0x00020686) popup_snote_single_text_window_t3_ParamLimits

0x1068,	// (0x00020686) popup_snote_single_text_window_t3

0x10a1,	// (0x000206bf) popup_snote_single_text_window_t4_ParamLimits

0x10a1,	// (0x000206bf) popup_snote_single_text_window_t4

0x10d5,	// (0x000206f3) popup_snote_single_text_window_t5_ParamLimits

0x10d5,	// (0x000206f3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002ebc4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002ebc4) popup_snote_single_text_window_t

0x1104,	// (0x00020722) bg_popup_window_pane_cp9_ParamLimits

0x1104,	// (0x00020722) bg_popup_window_pane_cp9

0x1030,	// (0x0002064e) popup_snote_single_graphic_window_g1_ParamLimits

0x1030,	// (0x0002064e) popup_snote_single_graphic_window_g1

0x1112,	// (0x00020730) popup_snote_single_graphic_window_g2_ParamLimits

0x1112,	// (0x00020730) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002ebcf) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002ebcf) popup_snote_single_graphic_window_g

0x111e,	// (0x0002073c) popup_snote_single_graphic_window_t1_ParamLimits

0x111e,	// (0x0002073c) popup_snote_single_graphic_window_t1

0x1131,	// (0x0002074f) popup_snote_single_graphic_window_t2_ParamLimits

0x1131,	// (0x0002074f) popup_snote_single_graphic_window_t2

0x1144,	// (0x00020762) popup_snote_single_graphic_window_t3_ParamLimits

0x1144,	// (0x00020762) popup_snote_single_graphic_window_t3

0x117d,	// (0x0002079b) popup_snote_single_graphic_window_t4_ParamLimits

0x117d,	// (0x0002079b) popup_snote_single_graphic_window_t4

0x11b1,	// (0x000207cf) popup_snote_single_graphic_window_t5_ParamLimits

0x11b1,	// (0x000207cf) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002ebd4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002ebd4) popup_snote_single_graphic_window_t

0xae30,	// (0x0002a44e) grid_graphic_popup_pane_ParamLimits

0xae30,	// (0x0002a44e) grid_graphic_popup_pane

0xae5e,	// (0x0002a47c) listscroll_popup_graphic_pane_g1_ParamLimits

0xae5e,	// (0x0002a47c) listscroll_popup_graphic_pane_g1

0xae72,	// (0x0002a490) listscroll_popup_graphic_pane_g2_ParamLimits

0xae72,	// (0x0002a490) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002efc9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002efc9) listscroll_popup_graphic_pane_g

0xae86,	// (0x0002a4a4) scroll_pane_cp5

0xadd8,	// (0x0002a3f6) cell_graphic_popup_pane_ParamLimits

0xadd8,	// (0x0002a3f6) cell_graphic_popup_pane

0xadb9,	// (0x0002a3d7) cell_graphic_popup_pane_g1

0xadc1,	// (0x0002a3df) cell_graphic_popup_pane_g2

0x1004,	// (0x00020622) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002efc2) cell_graphic_popup_pane_g

0xadca,	// (0x0002a3e8) cell_graphic_popup_pane_t2

0x100d,	// (0x0002062b) grid_highlight_pane_cp3

0x11f2,	// (0x00020810) list_gen_pane_ParamLimits

0x11f2,	// (0x00020810) list_gen_pane

0x121a,	// (0x00020838) scroll_pane

0xad11,	// (0x0002a32f) bg_list_pane_g1_ParamLimits

0xad11,	// (0x0002a32f) bg_list_pane_g1

0xad2e,	// (0x0002a34c) bg_list_pane_g2_ParamLimits

0xad2e,	// (0x0002a34c) bg_list_pane_g2

0xad43,	// (0x0002a361) bg_list_pane_g3_ParamLimits

0xad43,	// (0x0002a361) bg_list_pane_g3

0xad57,	// (0x0002a375) bg_list_pane_g4_ParamLimits

0xad57,	// (0x0002a375) bg_list_pane_g4

0xad6b,	// (0x0002a389) bg_list_pane_g5_ParamLimits

0xad6b,	// (0x0002a389) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002efb7) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002efb7) bg_list_pane_g

0x5b9a,	// (0x000251b8) list_double2_graphic_large_graphic_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double2_graphic_large_graphic_pane

0x5b9a,	// (0x000251b8) list_double2_graphic_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double2_graphic_pane

0x5b9a,	// (0x000251b8) list_double2_large_graphic_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double2_large_graphic_pane

0x5b9a,	// (0x000251b8) list_double2_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double2_pane

0x5b9a,	// (0x000251b8) list_double_graphic_heading_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_graphic_heading_pane

0x5b9a,	// (0x000251b8) list_double_graphic_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_graphic_pane

0x5b9a,	// (0x000251b8) list_double_heading_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_heading_pane

0x5b9a,	// (0x000251b8) list_double_large_graphic_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_large_graphic_pane

0x5b9a,	// (0x000251b8) list_double_number_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_number_pane

0x5b9a,	// (0x000251b8) list_double_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_pane

0x5b9a,	// (0x000251b8) list_double_time_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_double_time_pane

0x5b9a,	// (0x000251b8) list_setting_number_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_setting_number_pane

0x5b9a,	// (0x000251b8) list_setting_pane_ParamLimits

0x5b9a,	// (0x000251b8) list_setting_pane

0xaccd,	// (0x0002a2eb) list_single_2graphic_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_2graphic_pane

0xaccd,	// (0x0002a2eb) list_single_graphic_heading_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_graphic_heading_pane

0xaccd,	// (0x0002a2eb) list_single_graphic_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_graphic_pane

0xaccd,	// (0x0002a2eb) list_single_heading_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_heading_pane

0x5bd9,	// (0x000251f7) list_single_large_graphic_pane_ParamLimits

0x5bd9,	// (0x000251f7) list_single_large_graphic_pane

0xaccd,	// (0x0002a2eb) list_single_number_heading_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_number_heading_pane

0xaccd,	// (0x0002a2eb) list_single_number_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_number_pane

0xaccd,	// (0x0002a2eb) list_single_pane_ParamLimits

0xaccd,	// (0x0002a2eb) list_single_pane

0x0c10,	// (0x0002022e) list_highlight_pane_cp1

0x5240,	// (0x0002485e) list_single_pane_g1_ParamLimits

0x5240,	// (0x0002485e) list_single_pane_g1

0x524c,	// (0x0002486a) list_single_pane_g2_ParamLimits

0x524c,	// (0x0002486a) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002ebe6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002ebe6) list_single_pane_g

0x5b84,	// (0x000251a2) list_single_pane_t1_ParamLimits

0x5b84,	// (0x000251a2) list_single_pane_t1

0x5240,	// (0x0002485e) list_single_number_pane_g1_ParamLimits

0x5240,	// (0x0002485e) list_single_number_pane_g1

0x524c,	// (0x0002486a) list_single_number_pane_g2_ParamLimits

0x524c,	// (0x0002486a) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002ebe6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002ebe6) list_single_number_pane_g

0x5b2e,	// (0x0002514c) list_single_number_pane_t1_ParamLimits

0x5b2e,	// (0x0002514c) list_single_number_pane_t1

0x5b44,	// (0x00025162) list_single_number_pane_t2_ParamLimits

0x5b44,	// (0x00025162) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002ef78) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002ef78) list_single_number_pane_t

0x5234,	// (0x00024852) list_single_graphic_pane_g1_ParamLimits

0x5234,	// (0x00024852) list_single_graphic_pane_g1

0x5240,	// (0x0002485e) list_single_graphic_pane_g2_ParamLimits

0x5240,	// (0x0002485e) list_single_graphic_pane_g2

0x524c,	// (0x0002486a) list_single_graphic_pane_g3_ParamLimits

0x524c,	// (0x0002486a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002ebdf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002ebdf) list_single_graphic_pane_g

0x5258,	// (0x00024876) list_single_graphic_pane_t1_ParamLimits

0x5258,	// (0x00024876) list_single_graphic_pane_t1

0x5240,	// (0x0002485e) list_single_heading_pane_g1_ParamLimits

0x5240,	// (0x0002485e) list_single_heading_pane_g1

0x524c,	// (0x0002486a) list_single_heading_pane_g2_ParamLimits

0x524c,	// (0x0002486a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ebe6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ebe6) list_single_heading_pane_g

0x526e,	// (0x0002488c) list_single_heading_pane_t1_ParamLimits

0x526e,	// (0x0002488c) list_single_heading_pane_t1

0x5284,	// (0x000248a2) list_single_heading_pane_t2_ParamLimits

0x5284,	// (0x000248a2) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002ebeb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002ebeb) list_single_heading_pane_t

0x5240,	// (0x0002485e) list_single_number_heading_pane_g1_ParamLimits

0x5240,	// (0x0002485e) list_single_number_heading_pane_g1

0x524c,	// (0x0002486a) list_single_number_heading_pane_g2_ParamLimits

0x524c,	// (0x0002486a) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ebe6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ebe6) list_single_number_heading_pane_g

0x526e,	// (0x0002488c) list_single_number_heading_pane_t1_ParamLimits

0x526e,	// (0x0002488c) list_single_number_heading_pane_t1

0x5296,	// (0x000248b4) list_single_number_heading_pane_t2_ParamLimits

0x5296,	// (0x000248b4) list_single_number_heading_pane_t2

0x52a8,	// (0x000248c6) list_single_number_heading_pane_t3_ParamLimits

0x52a8,	// (0x000248c6) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002ebf0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002ebf0) list_single_number_heading_pane_t

0x52ba,	// (0x000248d8) list_single_graphic_heading_pane_g1_ParamLimits

0x52ba,	// (0x000248d8) list_single_graphic_heading_pane_g1

0x52c6,	// (0x000248e4) list_single_graphic_heading_pane_g4_ParamLimits

0x52c6,	// (0x000248e4) list_single_graphic_heading_pane_g4

0x524c,	// (0x0002486a) list_single_graphic_heading_pane_g5_ParamLimits

0x524c,	// (0x0002486a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002ebf7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002ebf7) list_single_graphic_heading_pane_g

0x526e,	// (0x0002488c) list_single_graphic_heading_pane_t1_ParamLimits

0x526e,	// (0x0002488c) list_single_graphic_heading_pane_t1

0x52d7,	// (0x000248f5) list_single_graphic_heading_pane_t2_ParamLimits

0x52d7,	// (0x000248f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002ebfe) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002ebfe) list_single_graphic_heading_pane_t

0x52e9,	// (0x00024907) list_single_large_graphic_pane_g1_ParamLimits

0x52e9,	// (0x00024907) list_single_large_graphic_pane_g1

0x5240,	// (0x0002485e) list_single_large_graphic_pane_g2_ParamLimits

0x5240,	// (0x0002485e) list_single_large_graphic_pane_g2

0x524c,	// (0x0002486a) list_single_large_graphic_pane_g3_ParamLimits

0x524c,	// (0x0002486a) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002ec03) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002ec03) list_single_large_graphic_pane_g

0x9cbc,	// (0x000292da) wait_border_pane_g2_copy1

0x52f5,	// (0x00024913) list_single_large_graphic_pane_g4_cp2

0x526e,	// (0x0002488c) list_single_large_graphic_pane_t1_ParamLimits

0x526e,	// (0x0002488c) list_single_large_graphic_pane_t1

0x52fd,	// (0x0002491b) list_double_pane_g1_ParamLimits

0x52fd,	// (0x0002491b) list_double_pane_g1

0x5309,	// (0x00024927) list_double_pane_g2_ParamLimits

0x5309,	// (0x00024927) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002ec0a) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002ec0a) list_double_pane_g

0x5315,	// (0x00024933) list_double_pane_t1_ParamLimits

0x5315,	// (0x00024933) list_double_pane_t1

0x532b,	// (0x00024949) list_double_pane_t2_ParamLimits

0x532b,	// (0x00024949) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002ec0f) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002ec0f) list_double_pane_t

0x533d,	// (0x0002495b) list_double2_pane_g1_ParamLimits

0x533d,	// (0x0002495b) list_double2_pane_g1

0x5309,	// (0x00024927) list_double2_pane_g2_ParamLimits

0x5309,	// (0x00024927) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002ec14) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002ec14) list_double2_pane_g

0x5315,	// (0x00024933) list_double2_pane_t1_ParamLimits

0x5315,	// (0x00024933) list_double2_pane_t1

0x534e,	// (0x0002496c) list_double2_pane_t2_ParamLimits

0x534e,	// (0x0002496c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002ec19) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002ec19) list_double2_pane_t

0x52fd,	// (0x0002491b) list_double_number_pane_g1_ParamLimits

0x52fd,	// (0x0002491b) list_double_number_pane_g1

0x5309,	// (0x00024927) list_double_number_pane_g2_ParamLimits

0x5309,	// (0x00024927) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002ec0a) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002ec0a) list_double_number_pane_g

0x5360,	// (0x0002497e) list_double_number_pane_t1_ParamLimits

0x5360,	// (0x0002497e) list_double_number_pane_t1

0x5372,	// (0x00024990) list_double_number_pane_t2_ParamLimits

0x5372,	// (0x00024990) list_double_number_pane_t2

0x5388,	// (0x000249a6) list_double_number_pane_t3_ParamLimits

0x5388,	// (0x000249a6) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002ec1e) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002ec1e) list_double_number_pane_t

0x539a,	// (0x000249b8) list_double_graphic_pane_g1_ParamLimits

0x539a,	// (0x000249b8) list_double_graphic_pane_g1

0x53a6,	// (0x000249c4) list_double_graphic_pane_g2_ParamLimits

0x53a6,	// (0x000249c4) list_double_graphic_pane_g2

0x53b5,	// (0x000249d3) list_double_graphic_pane_g3_ParamLimits

0x53b5,	// (0x000249d3) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002ec25) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002ec25) list_double_graphic_pane_g

0x53cd,	// (0x000249eb) list_double_graphic_pane_t1_ParamLimits

0x53cd,	// (0x000249eb) list_double_graphic_pane_t1

0x53e3,	// (0x00024a01) list_double_graphic_pane_t2_ParamLimits

0x53e3,	// (0x00024a01) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002ec2e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002ec2e) list_double_graphic_pane_t

0x539a,	// (0x000249b8) list_double2_graphic_pane_g1_ParamLimits

0x539a,	// (0x000249b8) list_double2_graphic_pane_g1

0x53f5,	// (0x00024a13) list_double2_graphic_pane_g2_ParamLimits

0x53f5,	// (0x00024a13) list_double2_graphic_pane_g2

0x5401,	// (0x00024a1f) list_double2_graphic_pane_g3_ParamLimits

0x5401,	// (0x00024a1f) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002ec33) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002ec33) list_double2_graphic_pane_g

0x5372,	// (0x00024990) list_double2_graphic_pane_t1_ParamLimits

0x5372,	// (0x00024990) list_double2_graphic_pane_t1

0x540d,	// (0x00024a2b) list_double2_graphic_pane_t2_ParamLimits

0x540d,	// (0x00024a2b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002ec3a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002ec3a) list_double2_graphic_pane_t

0x541f,	// (0x00024a3d) list_double_large_graphic_pane_g1_ParamLimits

0x541f,	// (0x00024a3d) list_double_large_graphic_pane_g1

0x533d,	// (0x0002495b) list_double_large_graphic_pane_g2_ParamLimits

0x533d,	// (0x0002495b) list_double_large_graphic_pane_g2

0x5309,	// (0x00024927) list_double_large_graphic_pane_g3_ParamLimits

0x5309,	// (0x00024927) list_double_large_graphic_pane_g3

0x544a,	// (0x00024a68) list_double_large_graphic_pane_g4_ParamLimits

0x544a,	// (0x00024a68) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002ec3f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002ec3f) list_double_large_graphic_pane_g

0x5472,	// (0x00024a90) list_double_large_graphic_pane_t1_ParamLimits

0x5472,	// (0x00024a90) list_double_large_graphic_pane_t1

0x548b,	// (0x00024aa9) list_double_large_graphic_pane_t2_ParamLimits

0x548b,	// (0x00024aa9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ec4a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ec4a) list_double_large_graphic_pane_t

0x549d,	// (0x00024abb) list_double2_large_graphic_pane_g1_ParamLimits

0x549d,	// (0x00024abb) list_double2_large_graphic_pane_g1

0x533d,	// (0x0002495b) list_double2_large_graphic_pane_g2_ParamLimits

0x533d,	// (0x0002495b) list_double2_large_graphic_pane_g2

0x5309,	// (0x00024927) list_double2_large_graphic_pane_g3_ParamLimits

0x5309,	// (0x00024927) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002ec4f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002ec4f) list_double2_large_graphic_pane_g

0x54a9,	// (0x00024ac7) list_double2_large_graphic_pane_t1_ParamLimits

0x54a9,	// (0x00024ac7) list_double2_large_graphic_pane_t1

0x54bf,	// (0x00024add) list_double2_large_graphic_pane_t2_ParamLimits

0x54bf,	// (0x00024add) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ec56) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ec56) list_double2_large_graphic_pane_t

0x54d1,	// (0x00024aef) list_double_heading_pane_g1_ParamLimits

0x54d1,	// (0x00024aef) list_double_heading_pane_g1

0x54e2,	// (0x00024b00) list_double_heading_pane_g2_ParamLimits

0x54e2,	// (0x00024b00) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002ec5b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002ec5b) list_double_heading_pane_g

0x54ee,	// (0x00024b0c) list_double_heading_pane_t1_ParamLimits

0x54ee,	// (0x00024b0c) list_double_heading_pane_t1

0x5504,	// (0x00024b22) list_double_heading_pane_t2_ParamLimits

0x5504,	// (0x00024b22) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002ec60) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002ec60) list_double_heading_pane_t

0x5516,	// (0x00024b34) list_double_graphic_heading_pane_g1_ParamLimits

0x5516,	// (0x00024b34) list_double_graphic_heading_pane_g1

0x54d1,	// (0x00024aef) list_double_graphic_heading_pane_g2_ParamLimits

0x54d1,	// (0x00024aef) list_double_graphic_heading_pane_g2

0x54e2,	// (0x00024b00) list_double_graphic_heading_pane_g3_ParamLimits

0x54e2,	// (0x00024b00) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002ec65) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002ec65) list_double_graphic_heading_pane_g

0x5522,	// (0x00024b40) list_double_graphic_heading_pane_t1_ParamLimits

0x5522,	// (0x00024b40) list_double_graphic_heading_pane_t1

0x5538,	// (0x00024b56) list_double_graphic_heading_pane_t2_ParamLimits

0x5538,	// (0x00024b56) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002ec6c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002ec6c) list_double_graphic_heading_pane_t

0x533d,	// (0x0002495b) list_double_time_pane_g1_ParamLimits

0x533d,	// (0x0002495b) list_double_time_pane_g1

0x5309,	// (0x00024927) list_double_time_pane_g2_ParamLimits

0x5309,	// (0x00024927) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0002ec14) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0002ec14) list_double_time_pane_g

0x54a9,	// (0x00024ac7) list_double_time_pane_t1_ParamLimits

0x54a9,	// (0x00024ac7) list_double_time_pane_t1

0x554a,	// (0x00024b68) list_double_time_pane_t2_ParamLimits

0x554a,	// (0x00024b68) list_double_time_pane_t2

0x555c,	// (0x00024b7a) list_double_time_pane_t3_ParamLimits

0x555c,	// (0x00024b7a) list_double_time_pane_t3

0x556e,	// (0x00024b8c) list_double_time_pane_t4_ParamLimits

0x556e,	// (0x00024b8c) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002ec71) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002ec71) list_double_time_pane_t

0x5580,	// (0x00024b9e) list_setting_pane_g1_ParamLimits

0x5580,	// (0x00024b9e) list_setting_pane_g1

0x558c,	// (0x00024baa) list_setting_pane_g2_ParamLimits

0x558c,	// (0x00024baa) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002ec7a) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002ec7a) list_setting_pane_g

0x5598,	// (0x00024bb6) list_setting_pane_t1_ParamLimits

0x5598,	// (0x00024bb6) list_setting_pane_t1

0x55b2,	// (0x00024bd0) list_setting_pane_t2_ParamLimits

0x55b2,	// (0x00024bd0) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002ec7f) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002ec7f) list_setting_pane_t

0x55f1,	// (0x00024c0f) set_value_pane_cp_ParamLimits

0x55f1,	// (0x00024c0f) set_value_pane_cp

0x55ff,	// (0x00024c1d) list_setting_number_pane_g1_ParamLimits

0x55ff,	// (0x00024c1d) list_setting_number_pane_g1

0x560b,	// (0x00024c29) list_setting_number_pane_g2_ParamLimits

0x560b,	// (0x00024c29) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002ec86) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002ec86) list_setting_number_pane_g

0x5617,	// (0x00024c35) list_setting_number_pane_t1_ParamLimits

0x5617,	// (0x00024c35) list_setting_number_pane_t1

0x5630,	// (0x00024c4e) list_setting_number_pane_t2_ParamLimits

0x5630,	// (0x00024c4e) list_setting_number_pane_t2

0x564a,	// (0x00024c68) list_setting_number_pane_t3_ParamLimits

0x564a,	// (0x00024c68) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002ec8b) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002ec8b) list_setting_number_pane_t

0x55f1,	// (0x00024c0f) set_value_pane_ParamLimits

0x55f1,	// (0x00024c0f) set_value_pane

0x2c07,	// (0x00022225) bg_set_opt_pane_ParamLimits

0x2c07,	// (0x00022225) bg_set_opt_pane

0x568d,	// (0x00024cab) set_value_pane_t1

0x2c36,	// (0x00022254) slider_set_pane_cp3

0x2c3f,	// (0x0002225d) volume_small_pane_cp

0x2c48,	// (0x00022266) list_form_gen_pane

0x2c51,	// (0x0002226f) scroll_pane_cp8

0x56a3,	// (0x00024cc1) form_field_data_pane_ParamLimits

0x56a3,	// (0x00024cc1) form_field_data_pane

0x56c9,	// (0x00024ce7) form_field_data_wide_pane_ParamLimits

0x56c9,	// (0x00024ce7) form_field_data_wide_pane

0x56ee,	// (0x00024d0c) form_field_popup_pane_ParamLimits

0x56ee,	// (0x00024d0c) form_field_popup_pane

0x5710,	// (0x00024d2e) form_field_popup_wide_pane_ParamLimits

0x5710,	// (0x00024d2e) form_field_popup_wide_pane

0x5731,	// (0x00024d4f) form_field_slider_pane_ParamLimits

0x5731,	// (0x00024d4f) form_field_slider_pane

0x5744,	// (0x00024d62) form_field_slider_wide_pane_ParamLimits

0x5744,	// (0x00024d62) form_field_slider_wide_pane

0x2cb9,	// (0x000222d7) data_form_pane

0x5761,	// (0x00024d7f) form_field_data_pane_t1

0x2cc5,	// (0x000222e3) input_focus_pane

0x577b,	// (0x00024d99) data_form_wide_pane

0x5798,	// (0x00024db6) form_field_data_wide_pane_t1

0x1022,	// (0x00020640) input_focus_pane_cp6

0x57ba,	// (0x00024dd8) form_field_popup_pane_t1

0x2cc5,	// (0x000222e3) input_focus_pane_cp7

0x2d32,	// (0x00022350) list_form_pane

0x57dc,	// (0x00024dfa) form_field_popup_wide_pane_t1

0x2cc5,	// (0x000222e3) input_focus_pane_cp8

0x2d5b,	// (0x00022379) list_form_wide_pane

0x57f9,	// (0x00024e17) form_field_slider_pane_t1_ParamLimits

0x57f9,	// (0x00024e17) form_field_slider_pane_t1

0x5811,	// (0x00024e2f) form_field_slider_pane_t2_ParamLimits

0x5811,	// (0x00024e2f) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002ec9b) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002ec9b) form_field_slider_pane_t

0x0c6a,	// (0x00020288) input_focus_pane_cp9_ParamLimits

0x0c6a,	// (0x00020288) input_focus_pane_cp9

0x5826,	// (0x00024e44) slider_cont_pane_ParamLimits

0x5826,	// (0x00024e44) slider_cont_pane

0x2d6a,	// (0x00022388) form_field_slider_wide_pane_t1_ParamLimits

0x2d6a,	// (0x00022388) form_field_slider_wide_pane_t1

0x583a,	// (0x00024e58) form_field_slider_wide_pane_t2_ParamLimits

0x583a,	// (0x00024e58) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002eca0) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002eca0) form_field_slider_wide_pane_t

0x0c6a,	// (0x00020288) input_focus_pane_cp10_ParamLimits

0x0c6a,	// (0x00020288) input_focus_pane_cp10

0x584c,	// (0x00024e6a) slider_cont_pane_cp1_ParamLimits

0x584c,	// (0x00024e6a) slider_cont_pane_cp1

0x5860,	// (0x00024e7e) slider_form_pane_cp

0x2d8e,	// (0x000223ac) input_focus_pane_g1

0x2d96,	// (0x000223b4) input_focus_pane_g2

0x2d9e,	// (0x000223bc) input_focus_pane_g3

0x2da6,	// (0x000223c4) input_focus_pane_g4

0x2dae,	// (0x000223cc) input_focus_pane_g5

0x2db6,	// (0x000223d4) input_focus_pane_g6

0x2dbe,	// (0x000223dc) input_focus_pane_g7

0x2dc6,	// (0x000223e4) input_focus_pane_g8

0x2dce,	// (0x000223ec) input_focus_pane_g9

0x0c06,	// (0x00020224) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002eca5) input_focus_pane_g

0x9cc5,	// (0x000292e3) wait_border_pane_g3_copy1

0x5868,	// (0x00024e86) data_form_pane_t1

0x0c06,	// (0x00020224) wait_anim_pane_g1_copy1

0x5b56,	// (0x00025174) data_form_wide_pane_t1

0x5885,	// (0x00024ea3) list_form_graphic_pane_cp_ParamLimits

0x5885,	// (0x00024ea3) list_form_graphic_pane_cp

0xac24,	// (0x0002a242) slider_form_pane_g1

0xac2d,	// (0x0002a24b) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002efa8) slider_form_pane_g

0x589a,	// (0x00024eb8) list_form_graphic_pane_ParamLimits

0x589a,	// (0x00024eb8) list_form_graphic_pane

0x58ac,	// (0x00024eca) list_form_graphic_pane_g1

0x58b4,	// (0x00024ed2) list_form_graphic_pane_t1_ParamLimits

0x58b4,	// (0x00024ed2) list_form_graphic_pane_t1

0x0c78,	// (0x00020296) list_highlight_pane_cp5_ParamLimits

0x0c78,	// (0x00020296) list_highlight_pane_cp5

0x58c9,	// (0x00024ee7) find_pane_g1

0x2e05,	// (0x00022423) input_find_pane

0x58d2,	// (0x00024ef0) input_find_pane_g1_ParamLimits

0x58d2,	// (0x00024ef0) input_find_pane_g1

0x58de,	// (0x00024efc) input_find_pane_t1_ParamLimits

0x58de,	// (0x00024efc) input_find_pane_t1

0x58f3,	// (0x00024f11) input_find_pane_t2_ParamLimits

0x58f3,	// (0x00024f11) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002ecba) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002ecba) input_find_pane_t

0x2e0e,	// (0x0002242c) input_focus_pane_cp5_ParamLimits

0x2e0e,	// (0x0002242c) input_focus_pane_cp5

0x2e1c,	// (0x0002243a) bg_popup_window_pane_cp2_ParamLimits

0x2e1c,	// (0x0002243a) bg_popup_window_pane_cp2

0x2e29,	// (0x00022447) listscroll_menu_pane_ParamLimits

0x2e29,	// (0x00022447) listscroll_menu_pane

0x6ad4,	// (0x000260f2) popup_submenu_window_ParamLimits

0x6ad4,	// (0x000260f2) popup_submenu_window

0x2e35,	// (0x00022453) find_popup_pane_g1

0x2e3d,	// (0x0002245b) input_popup_find_pane_cp

0x2e0e,	// (0x0002242c) input_focus_pane_cp4_ParamLimits

0x2e0e,	// (0x0002242c) input_focus_pane_cp4

0x2e47,	// (0x00022465) input_popup_find_pane_t1_ParamLimits

0x2e47,	// (0x00022465) input_popup_find_pane_t1

0x0c10,	// (0x0002022e) bg_popup_sub_pane_cp

0x2e75,	// (0x00022493) listscroll_popup_sub_pane

0x2e7d,	// (0x0002249b) list_submenu_pane_ParamLimits

0x2e7d,	// (0x0002249b) list_submenu_pane

0x2e8e,	// (0x000224ac) scroll_pane_cp4

0x2e96,	// (0x000224b4) list_single_popup_submenu_pane_ParamLimits

0x2e96,	// (0x000224b4) list_single_popup_submenu_pane

0x2eab,	// (0x000224c9) list_single_popup_submenu_pane_g1

0x2eb3,	// (0x000224d1) list_single_popup_submenu_pane_t1_ParamLimits

0x2eb3,	// (0x000224d1) list_single_popup_submenu_pane_t1

0x0c78,	// (0x00020296) bg_active_tab_pane_cp1_ParamLimits

0x0c78,	// (0x00020296) bg_active_tab_pane_cp1

0x6b12,	// (0x00026130) tabs_2_active_pane_g1

0x6b1a,	// (0x00026138) tabs_2_active_pane_t1

0x0c78,	// (0x00020296) bg_passive_tab_pane_cp1_ParamLimits

0x0c78,	// (0x00020296) bg_passive_tab_pane_cp1

0x6b12,	// (0x00026130) tabs_2_passive_pane_g1

0x6b1a,	// (0x00026138) tabs_2_passive_pane_t1

0x3735,	// (0x00022d53) bg_active_tab_pane_cp4

0x6b2c,	// (0x0002614a) tabs_2_long_active_pane_t1

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp4

0x83f1,	// (0x00027a0f) list_single_midp_graphic_pane_g4_ParamLimits

0x3735,	// (0x00022d53) bg_active_tab_pane_cp5

0x6b4b,	// (0x00026169) tabs_3_long_active_pane_t1

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp5

0x83f1,	// (0x00027a0f) list_single_midp_graphic_pane_g4

0x0c78,	// (0x00020296) bg_popup_window_pane_cp13_ParamLimits

0x0c78,	// (0x00020296) bg_popup_window_pane_cp13

0x2ed1,	// (0x000224ef) listscroll_popup_fast_pane_ParamLimits

0x2ed1,	// (0x000224ef) listscroll_popup_fast_pane

0x2ee0,	// (0x000224fe) grid_popup_fast_pane_ParamLimits

0x2ee0,	// (0x000224fe) grid_popup_fast_pane

0x2ef2,	// (0x00022510) scroll_pane_cp9_ParamLimits

0x2ef2,	// (0x00022510) scroll_pane_cp9

0xc5a5,	// (0x0002bbc3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc5a5,	// (0x0002bbc3) list_single_graphic_hl_pane_t1_cp2

0x2f16,	// (0x00022534) input_focus_pane_cp20_ParamLimits

0x2f16,	// (0x00022534) input_focus_pane_cp20

0x2f24,	// (0x00022542) query_popup_data_pane_t1_ParamLimits

0x2f24,	// (0x00022542) query_popup_data_pane_t1

0x2f37,	// (0x00022555) query_popup_data_pane_t2_ParamLimits

0x2f37,	// (0x00022555) query_popup_data_pane_t2

0x2f7d,	// (0x0002259b) query_popup_data_pane_t3_ParamLimits

0x2f7d,	// (0x0002259b) query_popup_data_pane_t3

0x2fbe,	// (0x000225dc) query_popup_data_pane_t4_ParamLimits

0x2fbe,	// (0x000225dc) query_popup_data_pane_t4

0x2ffa,	// (0x00022618) query_popup_data_pane_t5_ParamLimits

0x2ffa,	// (0x00022618) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002ecbf) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002ecbf) query_popup_data_pane_t

0x2d8e,	// (0x000223ac) bg_set_opt_pane_g1

0x2d96,	// (0x000223b4) bg_set_opt_pane_g2

0x2d9e,	// (0x000223bc) bg_set_opt_pane_g3

0x2da6,	// (0x000223c4) bg_set_opt_pane_g4

0x2dae,	// (0x000223cc) bg_set_opt_pane_g5

0x2db6,	// (0x000223d4) bg_set_opt_pane_g6

0x2dbe,	// (0x000223dc) bg_set_opt_pane_g7

0x2dc6,	// (0x000223e4) bg_set_opt_pane_g8

0x2dce,	// (0x000223ec) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002ecca) bg_set_opt_pane_g

0x6fbf,	// (0x000265dd) control_top_pane_stacon_ParamLimits

0x6fbf,	// (0x000265dd) control_top_pane_stacon

0x7012,	// (0x00026630) signal_pane_stacon_ParamLimits

0x7012,	// (0x00026630) signal_pane_stacon

0x3552,	// (0x00022b70) stacon_top_pane_g1_ParamLimits

0x3552,	// (0x00022b70) stacon_top_pane_g1

0x7037,	// (0x00026655) title_pane_stacon_ParamLimits

0x7037,	// (0x00026655) title_pane_stacon

0x7061,	// (0x0002667f) uni_indicator_pane_stacon_ParamLimits

0x7061,	// (0x0002667f) uni_indicator_pane_stacon

0x7079,	// (0x00026697) battery_pane_stacon_ParamLimits

0x7079,	// (0x00026697) battery_pane_stacon

0x70bd,	// (0x000266db) control_bottom_pane_stacon_ParamLimits

0x70bd,	// (0x000266db) control_bottom_pane_stacon

0x70e0,	// (0x000266fe) navi_pane_stacon_ParamLimits

0x70e0,	// (0x000266fe) navi_pane_stacon

0x3574,	// (0x00022b92) stacon_bottom_pane_g1_ParamLimits

0x3574,	// (0x00022b92) stacon_bottom_pane_g1

0x6b5d,	// (0x0002617b) aid_levels_signal_lsc_ParamLimits

0x6b5d,	// (0x0002617b) aid_levels_signal_lsc

0x6b74,	// (0x00026192) signal_pane_stacon_g1_ParamLimits

0x6b74,	// (0x00026192) signal_pane_stacon_g1

0x6b88,	// (0x000261a6) signal_pane_stacon_g2_ParamLimits

0x6b88,	// (0x000261a6) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002ecdd) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002ecdd) signal_pane_stacon_g

0x6bbd,	// (0x000261db) title_pane_stacon_t1_ParamLimits

0x6bbd,	// (0x000261db) title_pane_stacon_t1

0x30d7,	// (0x000226f5) uni_indicator_pane_stacon_g1

0x30e1,	// (0x000226ff) uni_indicator_pane_stacon_g2

0x30c3,	// (0x000226e1) uni_indicator_pane_stacon_g3

0x30cd,	// (0x000226eb) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002ece9) uni_indicator_pane_stacon_g

0x6be2,	// (0x00026200) control_top_pane_stacon_g1

0x6bea,	// (0x00026208) control_top_pane_stacon_t1_ParamLimits

0x6bea,	// (0x00026208) control_top_pane_stacon_t1

0x6c21,	// (0x0002623f) aid_levels_battery_lsc_ParamLimits

0x6c21,	// (0x0002623f) aid_levels_battery_lsc

0x6c39,	// (0x00026257) battery_pane_stacon_g1_ParamLimits

0x6c39,	// (0x00026257) battery_pane_stacon_g1

0x6c4c,	// (0x0002626a) battery_pane_stacon_g2_ParamLimits

0x6c4c,	// (0x0002626a) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002ecf2) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002ecf2) battery_pane_stacon_g

0x6c8a,	// (0x000262a8) navi_icon_pane_stacon

0x6c9e,	// (0x000262bc) navi_navi_pane_stacon

0x6c8a,	// (0x000262a8) navi_text_pane_stacon

0x6be2,	// (0x00026200) control_bottom_pane_stacon_g1

0x6cb4,	// (0x000262d2) control_bottom_pane_stacon_t1_ParamLimits

0x6cb4,	// (0x000262d2) control_bottom_pane_stacon_t1

0x6ceb,	// (0x00026309) grid_app_pane_ParamLimits

0x6ceb,	// (0x00026309) grid_app_pane

0x6d0f,	// (0x0002632d) scroll_pane_cp15_ParamLimits

0x6d0f,	// (0x0002632d) scroll_pane_cp15

0x6d22,	// (0x00026340) cell_app_pane_ParamLimits

0x6d22,	// (0x00026340) cell_app_pane

0x6d4e,	// (0x0002636c) cell_app_pane_g1_ParamLimits

0x6d4e,	// (0x0002636c) cell_app_pane_g1

0x31c1,	// (0x000227df) cell_app_pane_g2_ParamLimits

0x31c1,	// (0x000227df) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002ecf7) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002ecf7) cell_app_pane_g

0x31cd,	// (0x000227eb) cell_app_pane_t1_ParamLimits

0x31cd,	// (0x000227eb) cell_app_pane_t1

0x31e4,	// (0x00022802) grid_highlight_pane_ParamLimits

0x31e4,	// (0x00022802) grid_highlight_pane

0x2d8e,	// (0x000223ac) cell_highlight_pane_g1

0x2d96,	// (0x000223b4) cell_highlight_pane_g2

0x2d9e,	// (0x000223bc) cell_highlight_pane_g3

0x2da6,	// (0x000223c4) cell_highlight_pane_g4

0x2dae,	// (0x000223cc) cell_highlight_pane_g5

0x2db6,	// (0x000223d4) cell_highlight_pane_g6

0x2dbe,	// (0x000223dc) cell_highlight_pane_g7

0x2dc6,	// (0x000223e4) cell_highlight_pane_g8

0x2dce,	// (0x000223ec) cell_highlight_pane_g9

0x0c06,	// (0x00020224) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002eca5) cell_highlight_pane_g

0x31f5,	// (0x00022813) bg_scroll_pane

0x6d81,	// (0x0002639f) scroll_handle_pane

0x323c,	// (0x0002285a) scroll_bg_pane_g1

0x3251,	// (0x0002286f) scroll_bg_pane_g2

0x3269,	// (0x00022887) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002ecfc) scroll_bg_pane_g

0x327e,	// (0x0002289c) scroll_handle_focus_pane_ParamLimits

0x327e,	// (0x0002289c) scroll_handle_focus_pane

0x323c,	// (0x0002285a) scroll_handle_pane_g1

0x328b,	// (0x000228a9) scroll_handle_pane_g2

0x3269,	// (0x00022887) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002ed03) scroll_handle_pane_g

0x2e0e,	// (0x0002242c) bg_popup_sub_pane_cp21_ParamLimits

0x2e0e,	// (0x0002242c) bg_popup_sub_pane_cp21

0x329f,	// (0x000228bd) popup_fep_japan_predictive_window_t1_ParamLimits

0x329f,	// (0x000228bd) popup_fep_japan_predictive_window_t1

0x32b6,	// (0x000228d4) popup_fep_japan_predictive_window_t2_ParamLimits

0x32b6,	// (0x000228d4) popup_fep_japan_predictive_window_t2

0x32e9,	// (0x00022907) popup_fep_japan_predictive_window_t3_ParamLimits

0x32e9,	// (0x00022907) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002ed0a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002ed0a) popup_fep_japan_predictive_window_t

0x0c10,	// (0x0002022e) bg_popup_sub_pane_cp23

0x3320,	// (0x0002293e) listscroll_japin_cand_pane

0x3328,	// (0x00022946) popup_fep_japan_candidate_window_t1

0x3336,	// (0x00022954) candidate_pane_ParamLimits

0x3336,	// (0x00022954) candidate_pane

0x3348,	// (0x00022966) scroll_pane_cp30

0x3352,	// (0x00022970) list_single_popup_jap_candidate_pane_ParamLimits

0x3352,	// (0x00022970) list_single_popup_jap_candidate_pane

0x0c10,	// (0x0002022e) list_highlight_pane_cp30

0x3366,	// (0x00022984) list_single_popup_jap_candidate_pane_t1

0x6daa,	// (0x000263c8) level_1_signal

0x6db7,	// (0x000263d5) level_2_signal

0x6dc4,	// (0x000263e2) level_3_signal

0x6dd1,	// (0x000263ef) level_4_signal

0x6dde,	// (0x000263fc) level_5_signal

0x6deb,	// (0x00026409) level_6_signal

0x6df8,	// (0x00026416) level_7_signal

0x6daa,	// (0x000263c8) level_1_battery

0x6db7,	// (0x000263d5) level_2_battery

0x6dc4,	// (0x000263e2) level_3_battery

0x6dd1,	// (0x000263ef) level_4_battery

0x6dde,	// (0x000263fc) level_5_battery

0x6deb,	// (0x00026409) level_6_battery

0x6df8,	// (0x00026416) level_7_battery

0x338d,	// (0x000229ab) list_menu_pane_ParamLimits

0x338d,	// (0x000229ab) list_menu_pane

0x33a3,	// (0x000229c1) scroll_pane_cp25_ParamLimits

0x33a3,	// (0x000229c1) scroll_pane_cp25

0x33bc,	// (0x000229da) list_double2_graphic_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double2_graphic_pane_cp2

0x33bc,	// (0x000229da) list_double2_large_graphic_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double2_large_graphic_pane_cp2

0x33bc,	// (0x000229da) list_double2_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double2_pane_cp2

0x33bc,	// (0x000229da) list_double_graphic_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double_graphic_pane_cp2

0x33bc,	// (0x000229da) list_double_large_graphic_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double_large_graphic_pane_cp2

0x33bc,	// (0x000229da) list_double_number_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double_number_pane_cp2

0x33bc,	// (0x000229da) list_double_pane_cp2_ParamLimits

0x33bc,	// (0x000229da) list_double_pane_cp2

0x6e3a,	// (0x00026458) list_single_2graphic_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_2graphic_pane_cp2

0x6e3a,	// (0x00026458) list_single_graphic_heading_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_graphic_heading_pane_cp2

0x6e3a,	// (0x00026458) list_single_graphic_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_graphic_pane_cp2

0x6e3a,	// (0x00026458) list_single_heading_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_heading_pane_cp2

0x33cc,	// (0x000229ea) list_single_large_graphic_pane_cp2_ParamLimits

0x33cc,	// (0x000229ea) list_single_large_graphic_pane_cp2

0x6e3a,	// (0x00026458) list_single_number_heading_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_number_heading_pane_cp2

0x6e3a,	// (0x00026458) list_single_number_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_number_pane_cp2

0x6e3a,	// (0x00026458) list_single_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_pane_cp2

0x33e5,	// (0x00022a03) bg_popup_sub_pane_cp22

0x6f23,	// (0x00026541) popup_side_volume_key_window_g1

0x6f4d,	// (0x0002656b) popup_side_volume_key_window_t1

0x6f6b,	// (0x00026589) volume_small_pane_cp1

0x0c6a,	// (0x00020288) bg_popup_sub_pane_cp24_ParamLimits

0x0c6a,	// (0x00020288) bg_popup_sub_pane_cp24

0x33fb,	// (0x00022a19) fep_china_uni_candidate_pane_ParamLimits

0x33fb,	// (0x00022a19) fep_china_uni_candidate_pane

0x340f,	// (0x00022a2d) fep_china_uni_entry_pane

0x341f,	// (0x00022a3d) popup_fep_china_uni_window_g1

0x343b,	// (0x00022a59) fep_china_uni_entry_pane_g1

0x3445,	// (0x00022a63) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002ed3b) fep_china_uni_entry_pane_g

0x344f,	// (0x00022a6d) fep_entry_item_pane

0x3459,	// (0x00022a77) fep_candidate_item_pane

0x3461,	// (0x00022a7f) fep_china_uni_candidate_pane_g1

0x346b,	// (0x00022a89) fep_china_uni_candidate_pane_g2

0x3473,	// (0x00022a91) fep_china_uni_candidate_pane_g3

0x347b,	// (0x00022a99) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002ed40) fep_china_uni_candidate_pane_g

0x0c06,	// (0x00020224) fep_entry_item_pane_g1

0x3485,	// (0x00022aa3) fep_entry_item_pane_t1_ParamLimits

0x3485,	// (0x00022aa3) fep_entry_item_pane_t1

0x349b,	// (0x00022ab9) fep_candidate_item_pane_t1_ParamLimits

0x349b,	// (0x00022ab9) fep_candidate_item_pane_t1

0x34b0,	// (0x00022ace) fep_candidate_item_pane_t2_ParamLimits

0x34b0,	// (0x00022ace) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002ed49) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002ed49) fep_candidate_item_pane_t

0x0c78,	// (0x00020296) list_highlight_pane_cp31_ParamLimits

0x0c78,	// (0x00020296) list_highlight_pane_cp31

0x34c2,	// (0x00022ae0) level_1_signal_lsc

0x34cb,	// (0x00022ae9) level_2_signal_lsc

0x34d4,	// (0x00022af2) level_3_signal_lsc

0x34dd,	// (0x00022afb) level_4_signal_lsc

0x34e6,	// (0x00022b04) level_5_signal_lsc

0x34ef,	// (0x00022b0d) level_6_signal_lsc

0x34f8,	// (0x00022b16) level_7_signal_lsc

0x34f8,	// (0x00022b16) level_1_battery_lsc

0x3501,	// (0x00022b1f) level_2_battery_lsc

0x350a,	// (0x00022b28) level_3_battery_lsc

0x3513,	// (0x00022b31) level_4_battery_lsc

0x351c,	// (0x00022b3a) level_5_battery_lsc

0x3525,	// (0x00022b43) level_6_battery_lsc

0x34c2,	// (0x00022ae0) level_7_battery_lsc

0x352e,	// (0x00022b4c) scroll_handle_focus_pane_g1

0x3537,	// (0x00022b55) scroll_handle_focus_pane_g2

0x3540,	// (0x00022b5e) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002ed4e) scroll_handle_focus_pane_g

0x5908,	// (0x00024f26) list_single_2graphic_pane_g1_ParamLimits

0x5908,	// (0x00024f26) list_single_2graphic_pane_g1

0x52c6,	// (0x000248e4) list_single_2graphic_pane_g2_ParamLimits

0x52c6,	// (0x000248e4) list_single_2graphic_pane_g2

0x524c,	// (0x0002486a) list_single_2graphic_pane_g3_ParamLimits

0x524c,	// (0x0002486a) list_single_2graphic_pane_g3

0x5914,	// (0x00024f32) list_single_2graphic_pane_g4_ParamLimits

0x5914,	// (0x00024f32) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002ed55) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002ed55) list_single_2graphic_pane_g

0x5920,	// (0x00024f3e) list_single_2graphic_pane_t1_ParamLimits

0x5920,	// (0x00024f3e) list_single_2graphic_pane_t1

0x594e,	// (0x00024f6c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x594e,	// (0x00024f6c) list_double2_graphic_large_graphic_pane_g1

0x533d,	// (0x0002495b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x533d,	// (0x0002495b) list_double2_graphic_large_graphic_pane_g2

0x5309,	// (0x00024927) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5309,	// (0x00024927) list_double2_graphic_large_graphic_pane_g3

0x5960,	// (0x00024f7e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5960,	// (0x00024f7e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002ed5e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002ed5e) list_double2_graphic_large_graphic_pane_g

0x596c,	// (0x00024f8a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x596c,	// (0x00024f8a) list_double2_graphic_large_graphic_pane_t1

0x5982,	// (0x00024fa0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5982,	// (0x00024fa0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002ed67) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002ed67) list_double2_graphic_large_graphic_pane_t

0x35d2,	// (0x00022bf0) popup_fast_swap_window_ParamLimits

0x35d2,	// (0x00022bf0) popup_fast_swap_window

0x35f0,	// (0x00022c0e) popup_side_volume_key_window

0x360e,	// (0x00022c2c) stacon_top_pane

0x3618,	// (0x00022c36) status_pane_ParamLimits

0x3618,	// (0x00022c36) status_pane

0x7167,	// (0x00026785) status_small_pane

0x0c10,	// (0x0002022e) control_pane

0x0c10,	// (0x0002022e) stacon_bottom_pane

0x2c51,	// (0x0002226f) scroll_pane_cp121

0x2c48,	// (0x00022266) set_content_pane

0x6f73,	// (0x00026591) bg_active_tab_pane_g1_cp1

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp1

0x6f7c,	// (0x0002659a) bg_active_tab_pane_g3_cp1

0x6f73,	// (0x00026591) bg_passive_tab_pane_g1_cp1

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp1

0x6f7c,	// (0x0002659a) bg_passive_tab_pane_g3_cp1

0x6f85,	// (0x000265a3) bg_active_tab_pane_g1_cp2

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp2

0x6f8e,	// (0x000265ac) bg_active_tab_pane_g3_cp2

0x6f85,	// (0x000265a3) bg_passive_tab_pane_g1_cp2

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp2

0x6f8e,	// (0x000265ac) bg_passive_tab_pane_g3_cp2

0x6f97,	// (0x000265b5) bg_active_tab_pane_g1_cp3

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp3

0x6fa0,	// (0x000265be) bg_active_tab_pane_g3_cp3

0x6f97,	// (0x000265b5) bg_passive_tab_pane_g1_cp3

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp3

0x6fa0,	// (0x000265be) bg_passive_tab_pane_g3_cp3

0x6fa9,	// (0x000265c7) bg_active_tab_pane_g1_cp4

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp4

0x6fb4,	// (0x000265d2) bg_active_tab_pane_g3_cp4

0x6fa9,	// (0x000265c7) bg_passive_tab_pane_g1_cp4

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp4

0x6fb4,	// (0x000265d2) bg_passive_tab_pane_g3_cp4

0x3599,	// (0x00022bb7) bg_active_tab_pane_g1_cp5

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp5

0x3590,	// (0x00022bae) bg_active_tab_pane_g3_cp5

0x3599,	// (0x00022bb7) bg_passive_tab_pane_g1_cp5

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp5

0x3590,	// (0x00022bae) bg_passive_tab_pane_g3_cp5

0x7103,	// (0x00026721) list_set_graphic_pane_ParamLimits

0x7103,	// (0x00026721) list_set_graphic_pane

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp4

0x7118,	// (0x00026736) list_set_graphic_pane_g1_ParamLimits

0x7118,	// (0x00026736) list_set_graphic_pane_g1

0x7124,	// (0x00026742) list_set_graphic_pane_g2_ParamLimits

0x7124,	// (0x00026742) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002ed6c) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002ed6c) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x0002f0e8) volume_small_pane_cp_g

0x7148,	// (0x00026766) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7148,	// (0x00026766) list_double2_large_graphic_pane_g1_cp2

0x7156,	// (0x00026774) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7156,	// (0x00026774) list_double2_large_graphic_pane_g2_cp2

0x35a2,	// (0x00022bc0) list_double2_large_graphic_pane_g3_cp2

0x35aa,	// (0x00022bc8) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x35aa,	// (0x00022bc8) list_double2_large_graphic_pane_t1_cp2

0x35c0,	// (0x00022bde) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x35c0,	// (0x00022bde) list_double2_large_graphic_pane_t2_cp2

0xa7a9,	// (0x00029dc7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa7a9,	// (0x00029dc7) list_double_large_graphic_pane_g1_cp2

0xa7bc,	// (0x00029dda) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7bc,	// (0x00029dda) list_double_large_graphic_pane_g2_cp2

0x36f9,	// (0x00022d17) list_double_large_graphic_pane_g3_cp2

0xa7cd,	// (0x00029deb) list_double_large_graphic_pane_g4_cp

0xa7d5,	// (0x00029df3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7d5,	// (0x00029df3) list_double_large_graphic_pane_t1_cp2

0xa7ec,	// (0x00029e0a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7ec,	// (0x00029e0a) list_double_large_graphic_pane_t2_cp2

0x7172,	// (0x00026790) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7172,	// (0x00026790) list_double2_graphic_pane_g1_cp2

0x7180,	// (0x0002679e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7180,	// (0x0002679e) list_double2_graphic_pane_g2_cp2

0x7191,	// (0x000267af) list_double2_graphic_pane_g3_cp2

0x3626,	// (0x00022c44) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3626,	// (0x00022c44) list_double2_graphic_pane_t1_cp2

0x363c,	// (0x00022c5a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x363c,	// (0x00022c5a) list_double2_graphic_pane_t2_cp2

0x364e,	// (0x00022c6c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x364e,	// (0x00022c6c) list_single_number_heading_pane_g1_cp2

0x365a,	// (0x00022c78) list_single_number_heading_pane_g2_cp2

0x3662,	// (0x00022c80) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3662,	// (0x00022c80) list_single_number_heading_pane_t1_cp2

0x719b,	// (0x000267b9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x719b,	// (0x000267b9) list_single_number_heading_pane_t2_cp2

0x3678,	// (0x00022c96) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3678,	// (0x00022c96) list_single_number_heading_pane_t3_cp2

0x364e,	// (0x00022c6c) list_single_heading_pane_g1_cp2_ParamLimits

0x364e,	// (0x00022c6c) list_single_heading_pane_g1_cp2

0x365a,	// (0x00022c78) list_single_heading_pane_g2_cp2

0x3662,	// (0x00022c80) list_single_heading_pane_t1_cp2_ParamLimits

0x3662,	// (0x00022c80) list_single_heading_pane_t1_cp2

0xa5a3,	// (0x00029bc1) list_single_heading_pane_t2_cp2_ParamLimits

0xa5a3,	// (0x00029bc1) list_single_heading_pane_t2_cp2

0xa4eb,	// (0x00029b09) list_double_graphic_pane_g1_cp2_ParamLimits

0xa4eb,	// (0x00029b09) list_double_graphic_pane_g1_cp2

0xa4f7,	// (0x00029b15) list_double_graphic_pane_g2_cp2_ParamLimits

0xa4f7,	// (0x00029b15) list_double_graphic_pane_g2_cp2

0xa506,	// (0x00029b24) list_double_graphic_pane_g3_cp2

0xa50e,	// (0x00029b2c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa50e,	// (0x00029b2c) list_double_graphic_pane_t1_cp2

0xa524,	// (0x00029b42) list_double_graphic_pane_t2_cp2_ParamLimits

0xa524,	// (0x00029b42) list_double_graphic_pane_t2_cp2

0x36ed,	// (0x00022d0b) list_double_number_pane_g1_cp2_ParamLimits

0x36ed,	// (0x00022d0b) list_double_number_pane_g1_cp2

0x36f9,	// (0x00022d17) list_double_number_pane_g2_cp2

0xa4af,	// (0x00029acd) list_double_number_pane_t1_cp2_ParamLimits

0xa4af,	// (0x00029acd) list_double_number_pane_t1_cp2

0xa4c3,	// (0x00029ae1) list_double_number_pane_t2_cp2_ParamLimits

0xa4c3,	// (0x00029ae1) list_double_number_pane_t2_cp2

0xa4d9,	// (0x00029af7) list_double_number_pane_t3_cp2_ParamLimits

0xa4d9,	// (0x00029af7) list_double_number_pane_t3_cp2

0xa398,	// (0x000299b6) list_single_graphic_pane_g1_cp2_ParamLimits

0xa398,	// (0x000299b6) list_single_graphic_pane_g1_cp2

0x71d9,	// (0x000267f7) list_single_graphic_pane_g2_cp2_ParamLimits

0x71d9,	// (0x000267f7) list_single_graphic_pane_g2_cp2

0x71e5,	// (0x00026803) list_single_graphic_pane_g3_cp2

0xa36e,	// (0x0002998c) list_single_graphic_pane_t1_cp2_ParamLimits

0xa36e,	// (0x0002998c) list_single_graphic_pane_t1_cp2

0x71d9,	// (0x000267f7) list_single_number_pane_g1_cp2_ParamLimits

0x71d9,	// (0x000267f7) list_single_number_pane_g1_cp2

0x71e5,	// (0x00026803) list_single_number_pane_g2_cp2

0xa36e,	// (0x0002998c) list_single_number_pane_t1_cp2_ParamLimits

0xa36e,	// (0x0002998c) list_single_number_pane_t1_cp2

0xa384,	// (0x000299a2) list_single_number_pane_t2_cp2_ParamLimits

0xa384,	// (0x000299a2) list_single_number_pane_t2_cp2

0x7156,	// (0x00026774) list_double2_pane_g1_cp2_ParamLimits

0x7156,	// (0x00026774) list_double2_pane_g1_cp2

0x35a2,	// (0x00022bc0) list_double2_pane_g2_cp2

0x36c5,	// (0x00022ce3) list_double2_pane_t1_cp2_ParamLimits

0x36c5,	// (0x00022ce3) list_double2_pane_t1_cp2

0x36db,	// (0x00022cf9) list_double2_pane_t2_cp2_ParamLimits

0x36db,	// (0x00022cf9) list_double2_pane_t2_cp2

0x36ed,	// (0x00022d0b) list_double_pane_g1_cp2_ParamLimits

0x36ed,	// (0x00022d0b) list_double_pane_g1_cp2

0x36f9,	// (0x00022d17) list_double_pane_g2_cp2

0x3701,	// (0x00022d1f) list_double_pane_t1_cp2_ParamLimits

0x3701,	// (0x00022d1f) list_double_pane_t1_cp2

0x3717,	// (0x00022d35) list_double_pane_t2_cp2_ParamLimits

0x3717,	// (0x00022d35) list_double_pane_t2_cp2

0x71c9,	// (0x000267e7) list_single_pane_cp2_g3

0x71d9,	// (0x000267f7) list_single_pane_g1_cp2_ParamLimits

0x71d9,	// (0x000267f7) list_single_pane_g1_cp2

0x71e5,	// (0x00026803) list_single_pane_g2_cp2

0x71ed,	// (0x0002680b) list_single_pane_t1_cp2_ParamLimits

0x71ed,	// (0x0002680b) list_single_pane_t1_cp2

0x7205,	// (0x00026823) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7205,	// (0x00026823) list_single_large_graphic_pane_g1_cp2

0x7213,	// (0x00026831) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7213,	// (0x00026831) list_single_large_graphic_pane_g2_cp2

0x721f,	// (0x0002683d) list_single_large_graphic_pane_g3_cp2

0x7227,	// (0x00026845) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7227,	// (0x00026845) list_single_large_graphic_pane_g4_cp1

0x7241,	// (0x0002685f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7241,	// (0x0002685f) list_single_large_graphic_pane_t1_cp2

0xa338,	// (0x00029956) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa338,	// (0x00029956) list_single_graphic_heading_pane_g1_cp2

0xa305,	// (0x00029923) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa305,	// (0x00029923) list_single_graphic_heading_pane_g4_cp2

0x71e5,	// (0x00026803) list_single_graphic_heading_pane_g5_cp2

0xa344,	// (0x00029962) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa344,	// (0x00029962) list_single_graphic_heading_pane_t1_cp2

0xa35a,	// (0x00029978) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa35a,	// (0x00029978) list_single_graphic_heading_pane_t2_cp2

0xa2f9,	// (0x00029917) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa2f9,	// (0x00029917) list_single_2graphic_pane_g1_cp2

0xa305,	// (0x00029923) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa305,	// (0x00029923) list_single_2graphic_pane_g2_cp2

0x71e5,	// (0x00026803) list_single_2graphic_pane_g3_cp2

0xa316,	// (0x00029934) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa316,	// (0x00029934) list_single_2graphic_pane_g4_cp2

0xa322,	// (0x00029940) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa322,	// (0x00029940) list_single_2graphic_pane_t1_cp2

0x0c06,	// (0x00020224) list_highlight_pane_g10_cp1

0x9ed1,	// (0x000294ef) list_highlight_pane_g1_cp1

0x9ed9,	// (0x000294f7) list_highlight_pane_g2_cp1

0x9ee1,	// (0x000294ff) list_highlight_pane_g3_cp1

0x9ee9,	// (0x00029507) list_highlight_pane_g4_cp1

0x9ef1,	// (0x0002950f) list_highlight_pane_g5_cp1

0x9ef9,	// (0x00029517) list_highlight_pane_g6_cp1

0x9f01,	// (0x0002951f) list_highlight_pane_g7_cp1

0x9f09,	// (0x00029527) list_highlight_pane_g8_cp1

0x9f11,	// (0x0002952f) list_highlight_pane_g9_cp1

0x9df1,	// (0x0002940f) form_field_slider_pane_t3

0x9dff,	// (0x0002941d) form_field_slider_pane_t4

0x9e0d,	// (0x0002942b) slider_form_pane_ParamLimits

0x9e0d,	// (0x0002942b) slider_form_pane

0x0c10,	// (0x0002022e) control_abbreviations

0x0c10,	// (0x0002022e) control_conventions

0x0c10,	// (0x0002022e) control_definitions

0x0c10,	// (0x0002022e) format_table_attribute

0xa5f9,	// (0x00029c17) bg_popup_preview_window_pane_g9

0x0c10,	// (0x0002022e) format_table_data2

0x0c10,	// (0x0002022e) format_table_data3

0x0c10,	// (0x0002022e) format_table_data_example

0x0008,

0x0c10,	// (0x0002022e) intro_purpose

0xf8ea,	// (0x0002ef08) bg_popup_preview_window_pane_g

0x0c10,	// (0x0002022e) texts_category

0x0c10,	// (0x0002022e) texts_graphics

0x7257,	// (0x00026875) text_digital

0x7266,	// (0x00026884) text_primary

0x7275,	// (0x00026893) text_primary_small

0x7284,	// (0x000268a2) text_secondary

0x7293,	// (0x000268b1) text_title

0xad8d,	// (0x0002a3ab) bg_passive_tab_pane_g1_cp3_srt

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp3_srt

0xad96,	// (0x0002a3b4) bg_passive_tab_pane_g3_cp3_srt

0x0c78,	// (0x00020296) bg_active_tab_pane_cp3_srt_ParamLimits

0x0c78,	// (0x00020296) bg_active_tab_pane_cp3_srt

0xad9f,	// (0x0002a3bd) tabs_4_active_pane_srt_g1

0xada7,	// (0x0002a3c5) tabs_4_active_pane_srt_t1_ParamLimits

0xada7,	// (0x0002a3c5) tabs_4_active_pane_srt_t1

0xad8d,	// (0x0002a3ab) bg_active_tab_pane_g1_cp3_copy1

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp3_copy1

0xad96,	// (0x0002a3b4) bg_active_tab_pane_g3_cp3_copy1

0x0c78,	// (0x00020296) tabs_2_long_active_pane_srt_ParamLimits

0x0c78,	// (0x00020296) tabs_2_long_active_pane_srt

0x0c78,	// (0x00020296) tabs_2_long_passive_pane_srt_ParamLimits

0x0c78,	// (0x00020296) tabs_2_long_passive_pane_srt

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp4_srt

0xaa35,	// (0x0002a053) bg_passive_tab_pane_g1_cp4_srt

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp4_srt

0xaa3e,	// (0x0002a05c) bg_passive_tab_pane_g3_cp4_srt

0x3735,	// (0x00022d53) bg_active_tab_pane_cp4_srt_ParamLimits

0x3735,	// (0x00022d53) bg_active_tab_pane_cp4_srt

0xaa47,	// (0x0002a065) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaa47,	// (0x0002a065) tabs_2_long_active_pane_srt_t1

0xaa35,	// (0x0002a053) bg_active_tab_pane_g1_cp4_srt

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp4_srt

0xaa3e,	// (0x0002a05c) bg_active_tab_pane_g3_cp4_srt

0x0c6a,	// (0x00020288) tabs_3_long_active_pane_srt_ParamLimits

0x0c6a,	// (0x00020288) tabs_3_long_active_pane_srt

0x0c6a,	// (0x00020288) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0c6a,	// (0x00020288) tabs_3_long_passive_pane_cp_srt

0x0c6a,	// (0x00020288) tabs_3_long_passive_pane_srt_ParamLimits

0x0c6a,	// (0x00020288) tabs_3_long_passive_pane_srt

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp5_srt

0x3599,	// (0x00022bb7) bg_passive_tab_pane_g1_cp5_srt

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp5_srt

0x3590,	// (0x00022bae) bg_passive_tab_pane_g3_cp5_srt

0x3735,	// (0x00022d53) bg_active_tab_pane_cp5_srt_ParamLimits

0x3735,	// (0x00022d53) bg_active_tab_pane_cp5_srt

0xaa23,	// (0x0002a041) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaa23,	// (0x0002a041) tabs_3_long_active_pane_srt_t1

0x3599,	// (0x00022bb7) bg_active_tab_pane_g1_cp5_srt

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp5_srt

0x3590,	// (0x00022bae) bg_active_tab_pane_g3_cp5_srt

0xaa15,	// (0x0002a033) navi_text_pane_srt_t1

0xaa0d,	// (0x0002a02b) navi_icon_pane_srt_g1

0x7507,	// (0x00026b25) midp_editing_number_pane_srt

0x72a2,	// (0x000268c0) midp_ticker_pane_srt

0x750f,	// (0x00026b2d) midp_ticker_pane_srt_g1

0x7517,	// (0x00026b35) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002ed8b) midp_ticker_pane_srt_g

0x751f,	// (0x00026b3d) midp_ticker_pane_srt_t1

0xa9fe,	// (0x0002a01c) midp_editing_number_pane_t1_copy1

0x6b3f,	// (0x0002615d) listscroll_midp_pane

0x6b3f,	// (0x0002615d) midp_form_pane

0x730c,	// (0x0002692a) midp_info_popup_window_ParamLimits

0x730c,	// (0x0002692a) midp_info_popup_window

0x2e0e,	// (0x0002242c) bg_popup_sub_pane_cp50_ParamLimits

0x2e0e,	// (0x0002242c) bg_popup_sub_pane_cp50

0x9b07,	// (0x00029125) listscroll_midp_info_pane_ParamLimits

0x9b07,	// (0x00029125) listscroll_midp_info_pane

0x9aef,	// (0x0002910d) listscroll_form_midp_pane_ParamLimits

0x9aef,	// (0x0002910d) listscroll_form_midp_pane

0x9afb,	// (0x00029119) scroll_bar_cp050

0x9acf,	// (0x000290ed) list_midp_pane

0xb822,	// (0x0002ae40) signal_pane_g2_cp

0x9a09,	// (0x00029027) listscroll_midp_info_pane_t1_ParamLimits

0x9a09,	// (0x00029027) listscroll_midp_info_pane_t1

0x9a21,	// (0x0002903f) listscroll_midp_info_pane_t2_ParamLimits

0x9a21,	// (0x0002903f) listscroll_midp_info_pane_t2

0x9a5f,	// (0x0002907d) listscroll_midp_info_pane_t3_ParamLimits

0x9a5f,	// (0x0002907d) listscroll_midp_info_pane_t3

0x9a99,	// (0x000290b7) listscroll_midp_info_pane_t4_ParamLimits

0x9a99,	// (0x000290b7) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002ee43) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002ee43) listscroll_midp_info_pane_t

0x2e8e,	// (0x000224ac) scroll_pane_cp21

0x874d,	// (0x00027d6b) form_midp_field_choice_group_pane

0x8756,	// (0x00027d74) form_midp_field_text_pane

0x99ef,	// (0x0002900d) form_midp_field_time_pane

0x99f7,	// (0x00029015) form_midp_gauge_slider_pane

0x9a00,	// (0x0002901e) form_midp_gauge_wait_pane

0x0c10,	// (0x0002022e) form_midp_image_pane

0x5b0b,	// (0x00025129) list_single_midp_pane_ParamLimits

0x5b0b,	// (0x00025129) list_single_midp_pane

0x8711,	// (0x00027d2f) form_midp_field_text_pane_t1

0x846f,	// (0x00027a8d) input_focus_pane_cp050

0x873c,	// (0x00027d5a) list_midp_form_text_pane

0x86e0,	// (0x00027cfe) form_midp_field_choice_group_pane_t1

0x86ee,	// (0x00027d0c) input_focus_pane_cp051

0x8702,	// (0x00027d20) list_midp_choice_pane

0x0c10,	// (0x0002022e) status_idle_pane

0x86c4,	// (0x00027ce2) form_midp_field_time_pane_t1

0x0c06,	// (0x00020224) wait_anim_pane_g2_copy1

0x86d2,	// (0x00027cf0) form_midp_field_time_pane_t2

0x0001,

0x73bc,	// (0x000269da) aid_navinavi_width_2_pane

0xf820,	// (0x0002ee3e) form_midp_field_time_pane_t

0x0c10,	// (0x0002022e) input_focus_pane_cp052

0x0c10,	// (0x0002022e) bg_input_focus_pane_cp040

0x8684,	// (0x00027ca2) form_midp_gauge_slider_pane_t1

0x8692,	// (0x00027cb0) form_midp_gauge_slider_pane_t2

0x86a0,	// (0x00027cbe) form_midp_gauge_slider_pane_t3

0x86ae,	// (0x00027ccc) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002ee35) form_midp_gauge_slider_pane_t

0x86bc,	// (0x00027cda) form_midp_slider_pane

0x0c78,	// (0x00020296) bg_input_focus_pane_cp041_ParamLimits

0x0c78,	// (0x00020296) bg_input_focus_pane_cp041

0x8651,	// (0x00027c6f) form_midp_gauge_wait_pane_t1_ParamLimits

0x8651,	// (0x00027c6f) form_midp_gauge_wait_pane_t1

0x8663,	// (0x00027c81) form_midp_gauge_wait_pane_t2_ParamLimits

0x8663,	// (0x00027c81) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002ee30) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002ee30) form_midp_gauge_wait_pane_t

0x8675,	// (0x00027c93) form_midp_wait_pane_ParamLimits

0x8675,	// (0x00027c93) form_midp_wait_pane

0x8619,	// (0x00027c37) form_midp_image_pane_g1

0x8622,	// (0x00027c40) form_midp_image_pane_t1

0x8631,	// (0x00027c4f) form_midp_image_pane_t2

0x8640,	// (0x00027c5e) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002ee29) form_midp_image_pane_t

0x8610,	// (0x00027c2e) list_single_midp_pane_g1

0x5afc,	// (0x0002511a) list_single_midp_pane_t1

0x85f6,	// (0x00027c14) list_midp_form_item_pane_ParamLimits

0x85f6,	// (0x00027c14) list_midp_form_item_pane

0x7364,	// (0x00026982) list_midp_form_item_pane_t1

0x7373,	// (0x00026991) midp_ticker_pane_g1

0x737f,	// (0x0002699d) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002ed71) midp_ticker_pane_g

0x738b,	// (0x000269a9) midp_ticker_pane_t1

0xac71,	// (0x0002a28f) midp_editing_number_pane_t1

0xac4f,	// (0x0002a26d) midp_editing_number_pane

0xac5e,	// (0x0002a27c) midp_ticker_pane

0xa9ee,	// (0x0002a00c) ai_message_heading_pane

0x0c10,	// (0x0002022e) bg_popup_window_pane_cp14

0xa9f6,	// (0x0002a014) listscroll_ai_message_pane

0xa974,	// (0x00029f92) ai_message_heading_pane_g1_ParamLimits

0xa974,	// (0x00029f92) ai_message_heading_pane_g1

0xa980,	// (0x00029f9e) ai_message_heading_pane_g2_ParamLimits

0xa980,	// (0x00029f9e) ai_message_heading_pane_g2

0xa98e,	// (0x00029fac) ai_message_heading_pane_g3_ParamLimits

0xa98e,	// (0x00029fac) ai_message_heading_pane_g3

0xa99a,	// (0x00029fb8) ai_message_heading_pane_g4_ParamLimits

0xa99a,	// (0x00029fb8) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002ef6a) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002ef6a) ai_message_heading_pane_g

0xa9a6,	// (0x00029fc4) ai_message_heading_pane_t1_ParamLimits

0xa9a6,	// (0x00029fc4) ai_message_heading_pane_t1

0xa9c0,	// (0x00029fde) ai_message_heading_pane_t2_ParamLimits

0xa9c0,	// (0x00029fde) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002ef73) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002ef73) ai_message_heading_pane_t

0xa9d4,	// (0x00029ff2) bg_popup_heading_pane_cp1_ParamLimits

0xa9d4,	// (0x00029ff2) bg_popup_heading_pane_cp1

0xa962,	// (0x00029f80) list_ai_message_pane_ParamLimits

0xa962,	// (0x00029f80) list_ai_message_pane

0x2e8e,	// (0x000224ac) scroll_pane_cp10

0xa8fe,	// (0x00029f1c) list_ai_message_pane_g1

0xa906,	// (0x00029f24) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002ef47) list_ai_message_pane_g

0xa90e,	// (0x00029f2c) list_ai_message_pane_t1_ParamLimits

0xa90e,	// (0x00029f2c) list_ai_message_pane_t1

0xa923,	// (0x00029f41) list_ai_message_pane_t2_ParamLimits

0xa923,	// (0x00029f41) list_ai_message_pane_t2

0xa938,	// (0x00029f56) list_ai_message_pane_t3_ParamLimits

0xa938,	// (0x00029f56) list_ai_message_pane_t3

0xa94d,	// (0x00029f6b) list_ai_message_pane_t4_ParamLimits

0xa94d,	// (0x00029f6b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002ef4c) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002ef4c) list_ai_message_pane_t

0xa8e7,	// (0x00029f05) cell_ai_soft_ind_pane_ParamLimits

0xa8e7,	// (0x00029f05) cell_ai_soft_ind_pane

0x739d,	// (0x000269bb) cell_ai_soft_ind_pane_g1_ParamLimits

0x739d,	// (0x000269bb) cell_ai_soft_ind_pane_g1

0x0c10,	// (0x0002022e) grid_highlight_cp1

0x73aa,	// (0x000269c8) text_secondary_cp56_ParamLimits

0x73aa,	// (0x000269c8) text_secondary_cp56

0xa8bc,	// (0x00029eda) example_general_pane_ParamLimits

0xa8bc,	// (0x00029eda) example_general_pane

0xa8c8,	// (0x00029ee6) example_parent_pane_g1_ParamLimits

0xa8c8,	// (0x00029ee6) example_parent_pane_g1

0xa8d4,	// (0x00029ef2) example_parent_pane_t1_ParamLimits

0xa8d4,	// (0x00029ef2) example_parent_pane_t1

0x7bda,	// (0x000271f8) popup_preview_text_window_ParamLimits

0x7bda,	// (0x000271f8) popup_preview_text_window

0x71d1,	// (0x000267ef) list_single_pane_cp2_g4

0x0e6d,	// (0x0002048b) bg_popup_preview_window_pane_ParamLimits

0x0e6d,	// (0x0002048b) bg_popup_preview_window_pane

0xa603,	// (0x00029c21) popup_preview_text_window_t1_ParamLimits

0xa603,	// (0x00029c21) popup_preview_text_window_t1

0xa621,	// (0x00029c3f) popup_preview_text_window_t2_ParamLimits

0xa621,	// (0x00029c3f) popup_preview_text_window_t2

0xa66a,	// (0x00029c88) popup_preview_text_window_t3_ParamLimits

0xa66a,	// (0x00029c88) popup_preview_text_window_t3

0xa6af,	// (0x00029ccd) popup_preview_text_window_t4_ParamLimits

0xa6af,	// (0x00029ccd) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002ef1b) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002ef1b) popup_preview_text_window_t

0xa72d,	// (0x00029d4b) scroll_pane_cp11

0x8384,	// (0x000279a2) bg_popup_preview_window_pane_g1

0xa5b7,	// (0x00029bd5) bg_popup_preview_window_pane_g2

0xa5c1,	// (0x00029bdf) bg_popup_preview_window_pane_g3

0xa5cb,	// (0x00029be9) bg_popup_preview_window_pane_g4

0xa5d5,	// (0x00029bf3) bg_popup_preview_window_pane_g5

0xa5df,	// (0x00029bfd) bg_popup_preview_window_pane_g6

0xa5e7,	// (0x00029c05) bg_popup_preview_window_pane_g7

0xa5ef,	// (0x00029c0d) bg_popup_preview_window_pane_g8

0x6358,	// (0x00025976) aid_popup_width_pane

0x7bb6,	// (0x000271d4) popup_midp_note_alarm_window_ParamLimits

0x7bb6,	// (0x000271d4) popup_midp_note_alarm_window

0x2cb9,	// (0x000222d7) data_form_pane_ParamLimits

0x5757,	// (0x00024d75) form_field_data_pane_g1

0x5761,	// (0x00024d7f) form_field_data_pane_t1_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_ParamLimits

0x577b,	// (0x00024d99) data_form_wide_pane_ParamLimits

0x578c,	// (0x00024daa) form_field_data_wide_pane_g1

0x5798,	// (0x00024db6) form_field_data_wide_pane_t1_ParamLimits

0x1022,	// (0x00020640) input_focus_pane_cp6_ParamLimits

0x6b04,	// (0x00026122) input_popup_find_pane_g1_ParamLimits

0x6b04,	// (0x00026122) input_popup_find_pane_g1

0x6c5d,	// (0x0002627b) aid_navi_side_left_pane

0x6c72,	// (0x00026290) aid_navi_side_right_pane

0x9fcc,	// (0x000295ea) bg_popup_window_pane_cp30_ParamLimits

0x9fcc,	// (0x000295ea) bg_popup_window_pane_cp30

0xa046,	// (0x00029664) popup_midp_note_alarm_window_g1_ParamLimits

0xa046,	// (0x00029664) popup_midp_note_alarm_window_g1

0xa076,	// (0x00029694) popup_midp_note_alarm_window_t1_ParamLimits

0xa076,	// (0x00029694) popup_midp_note_alarm_window_t1

0xa117,	// (0x00029735) popup_midp_note_alarm_window_t2_ParamLimits

0xa117,	// (0x00029735) popup_midp_note_alarm_window_t2

0xa1c5,	// (0x000297e3) popup_midp_note_alarm_window_t3_ParamLimits

0xa1c5,	// (0x000297e3) popup_midp_note_alarm_window_t3

0xa1f7,	// (0x00029815) popup_midp_note_alarm_window_t4_ParamLimits

0xa1f7,	// (0x00029815) popup_midp_note_alarm_window_t4

0xa21d,	// (0x0002983b) popup_midp_note_alarm_window_t5_ParamLimits

0xa21d,	// (0x0002983b) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002eeb8) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002eeb8) popup_midp_note_alarm_window_t

0xa2c9,	// (0x000298e7) wait_bar_pane_cp1_ParamLimits

0xa2c9,	// (0x000298e7) wait_bar_pane_cp1

0x0c10,	// (0x0002022e) wait_anim_pane_copy1

0x0c10,	// (0x0002022e) wait_border_pane_copy1

0x9cb1,	// (0x000292cf) wait_border_pane_g1_copy1

0x57b2,	// (0x00024dd0) form_field_popup_pane_g1

0x57ba,	// (0x00024dd8) form_field_popup_pane_t1_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_cp7_ParamLimits

0x2d32,	// (0x00022350) list_form_pane_ParamLimits

0x57d4,	// (0x00024df2) form_field_popup_wide_pane_g1

0x57dc,	// (0x00024dfa) form_field_popup_wide_pane_t1_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_cp8_ParamLimits

0x2d5b,	// (0x00022379) list_form_wide_pane_ParamLimits

0xae1a,	// (0x0002a438) aid_size_cell_graphic_pane

0x5868,	// (0x00024e86) data_form_pane_t1_ParamLimits

0x5b56,	// (0x00025174) data_form_wide_pane_t1_ParamLimits

0x7f01,	// (0x0002751f) bg_status_flat_pane

0x6769,	// (0x00025d87) title_pane_t1_ParamLimits

0x0c32,	// (0x00020250) title_pane_t2_ParamLimits

0x0c58,	// (0x00020276) title_pane_t3_ParamLimits

0xf557,	// (0x0002eb75) title_pane_t_ParamLimits

0x6daa,	// (0x000263c8) level_1_signal_ParamLimits

0x6db7,	// (0x000263d5) level_2_signal_ParamLimits

0x6dc4,	// (0x000263e2) level_3_signal_ParamLimits

0x6dd1,	// (0x000263ef) level_4_signal_ParamLimits

0x6dde,	// (0x000263fc) level_5_signal_ParamLimits

0x6deb,	// (0x00026409) level_6_signal_ParamLimits

0x6df8,	// (0x00026416) level_7_signal_ParamLimits

0x6daa,	// (0x000263c8) level_1_battery_ParamLimits

0x6db7,	// (0x000263d5) level_2_battery_ParamLimits

0x6dc4,	// (0x000263e2) level_3_battery_ParamLimits

0x6dd1,	// (0x000263ef) level_4_battery_ParamLimits

0x6dde,	// (0x000263fc) level_5_battery_ParamLimits

0x6deb,	// (0x00026409) level_6_battery_ParamLimits

0x6df8,	// (0x00026416) level_7_battery_ParamLimits

0x9ed1,	// (0x000294ef) bg_status_flat_pane_g1

0x9ed9,	// (0x000294f7) bg_status_flat_pane_g2

0x9ee1,	// (0x000294ff) bg_status_flat_pane_g3

0x9ee9,	// (0x00029507) bg_status_flat_pane_g4

0x9ef1,	// (0x0002950f) bg_status_flat_pane_g5

0x9ef9,	// (0x00029517) bg_status_flat_pane_g6

0x9f01,	// (0x0002951f) bg_status_flat_pane_g7

0x67d9,	// (0x00025df7) tabs_3_active_pane_t1_ParamLimits

0x67d9,	// (0x00025df7) tabs_3_passive_pane_t1_ParamLimits

0x67f3,	// (0x00025e11) tabs_4_active_pane_t1_ParamLimits

0x67f3,	// (0x00025e11) tabs_4_1_passive_pane_t1_ParamLimits

0x6b1a,	// (0x00026138) tabs_2_active_pane_t1_ParamLimits

0x6b1a,	// (0x00026138) tabs_2_passive_pane_t1_ParamLimits

0x3735,	// (0x00022d53) bg_active_tab_pane_cp4_ParamLimits

0x6b2c,	// (0x0002614a) tabs_2_long_active_pane_t1_ParamLimits

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp4_ParamLimits

0x8418,	// (0x00027a36) list_single_midp_graphic_pane_t1_ParamLimits

0x3735,	// (0x00022d53) bg_active_tab_pane_cp5_ParamLimits

0x6b4b,	// (0x00026169) tabs_3_long_active_pane_t1_ParamLimits

0x6b3f,	// (0x0002615d) bg_passive_tab_pane_cp5_ParamLimits

0x8418,	// (0x00027a36) list_single_midp_graphic_pane_t1

0x7f01,	// (0x0002751f) bg_status_flat_pane_ParamLimits

0x7fcc,	// (0x000275ea) indicator_pane_cp2_ParamLimits

0x7fcc,	// (0x000275ea) indicator_pane_cp2

0x810f,	// (0x0002772d) navi_pane_srt_ParamLimits

0x810f,	// (0x0002772d) navi_pane_srt

0x8133,	// (0x00027751) popup_clock_digital_analogue_window_cp1

0x0cd6,	// (0x000202f4) indicator_pane_t1

0x72a2,	// (0x000268c0) copy_highlight_pane

0x72a2,	// (0x000268c0) cursor_graphics_pane

0x72a2,	// (0x000268c0) graphic_within_text_pane

0x72a2,	// (0x000268c0) link_highlight_pane

0xa6f0,	// (0x00029d0e) popup_preview_text_window_t5_ParamLimits

0xa6f0,	// (0x00029d0e) popup_preview_text_window_t5

0x73c6,	// (0x000269e4) cursor_digital_pane

0x73c6,	// (0x000269e4) cursor_primary_pane

0x73d7,	// (0x000269f5) cursor_primary_small_pane

0x73df,	// (0x000269fd) cursor_secondary_pane

0x73e7,	// (0x00026a05) cursor_title_pane

0x73c6,	// (0x000269e4) link_highlight_digital_pane

0x73ce,	// (0x000269ec) link_highlight_primary_pane

0x73d7,	// (0x000269f5) link_highlight_primary_small_pane

0x73df,	// (0x000269fd) link_highlight_secondary_pane

0x73e7,	// (0x00026a05) link_highlight_title_pane

0x73c6,	// (0x000269e4) copy_highlight_digital_pane

0x73c6,	// (0x000269e4) copy_highlight_primary_pane

0x73d7,	// (0x000269f5) copy_highlight_primary_small_pane

0x73df,	// (0x000269fd) copy_highlight_secondary_pane

0x73e7,	// (0x00026a05) copy_highlight_title_pane

0x73df,	// (0x000269fd) graphic_text_digital_pane

0x9f6f,	// (0x0002958d) graphic_text_primary_pane

0x9f78,	// (0x00029596) graphic_text_primary_small_pane

0x73d7,	// (0x000269f5) graphic_text_secondary_pane

0x73c6,	// (0x000269e4) graphic_text_title_pane

0x73ef,	// (0x00026a0d) cursor_primary_pane_g1

0x9f61,	// (0x0002957f) cursor_text_primary_t1

0x9f49,	// (0x00029567) cursor_primary_small_pane_g1

0x9f53,	// (0x00029571) cursor_text_primary_small_t1

0x9f31,	// (0x0002954f) cursor_primary_small_pane_g1_copy1

0x9f3b,	// (0x00029559) cursor_text_primary_small_t1_copy1

0x9f19,	// (0x00029537) cursor_text_title_t1

0x9f27,	// (0x00029545) cursor_title_pane_g1

0x73ef,	// (0x00026a0d) cursor_digital_pane_g1

0x73f9,	// (0x00026a17) cursor_text_digital_t1

0x7407,	// (0x00026a25) link_highlight_primary_pane_g1

0x9ec2,	// (0x000294e0) link_highlight_primary_pane_t1

0x7407,	// (0x00026a25) link_highlight_primary_small_pane_g1

0x740f,	// (0x00026a2d) link_highlight_primary_small_pane_t1

0x741e,	// (0x00026a3c) link_highlight_secondary_pane_g1

0x7426,	// (0x00026a44) link_highlight_secondary_pane_t1

0x9e36,	// (0x00029454) link_highlight_title_pane_g1

0x9e3e,	// (0x0002945c) link_highlight_title_pane_t1

0x9e1f,	// (0x0002943d) link_highlight_digital_pane_g1

0x9e27,	// (0x00029445) link_highlight_digital_pane_t1

0x9ce7,	// (0x00029305) copy_highlight_primary_pane_g1

0x9cfe,	// (0x0002931c) copy_highlight_primary_pane_t1

0x9ce7,	// (0x00029305) copy_highlight_primary_small_pane_g1

0x9cef,	// (0x0002930d) copy_highlight_primary_small_pane_t1

0x7435,	// (0x00026a53) copy_highlight_secondary_pane_g1

0x743d,	// (0x00026a5b) copy_highlight_secondary_pane_t1

0x9cd0,	// (0x000292ee) copy_highlight_title_pane_g1

0x9cd8,	// (0x000292f6) copy_highlight_title_pane_t1

0x9ce7,	// (0x00029305) copy_highlight_digital_pane_g1

0xafea,	// (0x0002a608) copy_highlight_digital_pane_t1

0xaf3e,	// (0x0002a55c) graphic_text_primary_pane_g1

0xafce,	// (0x0002a5ec) graphic_text_primary_pane_t1

0xafdc,	// (0x0002a5fa) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002efe7) graphic_text_primary_pane_t

0xafaa,	// (0x0002a5c8) graphic_text_primary_small_pane_g1

0xafb2,	// (0x0002a5d0) graphic_text_primary_small_pane_t1

0xafc0,	// (0x0002a5de) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002efe2) graphic_text_primary_small_pane_t

0xaf86,	// (0x0002a5a4) graphic_text_secondary_pane_g1

0xaf8e,	// (0x0002a5ac) graphic_text_secondary_pane_t1

0xaf9c,	// (0x0002a5ba) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002efdd) graphic_text_secondary_pane_t

0xaf62,	// (0x0002a580) graphic_text_title_pane_g1

0xaf6a,	// (0x0002a588) graphic_text_title_pane_t1

0xaf78,	// (0x0002a596) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002efd8) graphic_text_title_pane_t

0xaf3e,	// (0x0002a55c) graphic_text_digital_pane_g1

0xaf46,	// (0x0002a564) graphic_text_digital_pane_t1

0xaf54,	// (0x0002a572) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002efd3) graphic_text_digital_pane_t

0x0c78,	// (0x00020296) navi_icon_pane_srt_ParamLimits

0x0c78,	// (0x00020296) navi_icon_pane_srt

0x0c10,	// (0x0002022e) navi_midp_pane_srt

0x0c10,	// (0x0002022e) navi_navi_pane_srt

0x0c78,	// (0x00020296) navi_text_pane_srt_ParamLimits

0x0c78,	// (0x00020296) navi_text_pane_srt

0xaf09,	// (0x0002a527) navi_navi_icon_text_pane_srt

0xaf11,	// (0x0002a52f) navi_navi_pane_srt_g1_ParamLimits

0xaf11,	// (0x0002a52f) navi_navi_pane_srt_g1

0xaf23,	// (0x0002a541) navi_navi_pane_srt_g2_ParamLimits

0xaf23,	// (0x0002a541) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002efce) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002efce) navi_navi_pane_srt_g

0xaf35,	// (0x0002a553) navi_navi_tabs_pane_srt

0xaf09,	// (0x0002a527) navi_navi_text_pane_srt

0xaf09,	// (0x0002a527) navi_navi_volume_pane_srt

0xaefa,	// (0x0002a518) navi_navi_text_pane_srt_t1

0x8a7c,	// (0x0002809a) navi_navi_volume_pane_srt_g1

0x8a84,	// (0x000280a2) volume_small_pane_srt_ParamLimits

0x8a84,	// (0x000280a2) volume_small_pane_srt

0x744c,	// (0x00026a6a) volume_small_pane_srt_g1_ParamLimits

0x744c,	// (0x00026a6a) volume_small_pane_srt_g1

0x745c,	// (0x00026a7a) volume_small_pane_srt_g2_ParamLimits

0x745c,	// (0x00026a7a) volume_small_pane_srt_g2

0x746d,	// (0x00026a8b) volume_small_pane_srt_g3_ParamLimits

0x746d,	// (0x00026a8b) volume_small_pane_srt_g3

0x747e,	// (0x00026a9c) volume_small_pane_srt_g4_ParamLimits

0x747e,	// (0x00026a9c) volume_small_pane_srt_g4

0x748f,	// (0x00026aad) volume_small_pane_srt_g5_ParamLimits

0x748f,	// (0x00026aad) volume_small_pane_srt_g5

0x74a0,	// (0x00026abe) volume_small_pane_srt_g6_ParamLimits

0x74a0,	// (0x00026abe) volume_small_pane_srt_g6

0x74b1,	// (0x00026acf) volume_small_pane_srt_g7_ParamLimits

0x74b1,	// (0x00026acf) volume_small_pane_srt_g7

0x74c2,	// (0x00026ae0) volume_small_pane_srt_g8_ParamLimits

0x74c2,	// (0x00026ae0) volume_small_pane_srt_g8

0x74d3,	// (0x00026af1) volume_small_pane_srt_g9_ParamLimits

0x74d3,	// (0x00026af1) volume_small_pane_srt_g9

0x74e4,	// (0x00026b02) volume_small_pane_srt_g10_ParamLimits

0x74e4,	// (0x00026b02) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002ed76) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002ed76) volume_small_pane_srt_g

0x0f22,	// (0x00020540) query_popup_data_pane_cp2

0xaee0,	// (0x0002a4fe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaee0,	// (0x0002a4fe) navi_navi_icon_text_pane_srt_t1

0x9f6f,	// (0x0002958d) navi_tabs_2_long_pane_srt

0x9f6f,	// (0x0002958d) navi_tabs_2_pane_srt

0x9f6f,	// (0x0002958d) navi_tabs_3_long_pane_srt

0x9f6f,	// (0x0002958d) navi_tabs_3_pane_srt

0x9f6f,	// (0x0002958d) navi_tabs_4_pane_srt

0x8a5c,	// (0x0002807a) tabs_2_active_pane_srt_ParamLimits

0x8a5c,	// (0x0002807a) tabs_2_active_pane_srt

0x8a6c,	// (0x0002808a) tabs_2_passive_pane_srt_ParamLimits

0x8a6c,	// (0x0002808a) tabs_2_passive_pane_srt

0x7813,	// (0x00026e31) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7813,	// (0x00026e31) bg_passive_tab_pane_cp1_srt

0xaeac,	// (0x0002a4ca) bg_passive_tab_pane_g1_cp1_srt

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp1_srt

0xaeb5,	// (0x0002a4d3) bg_passive_tab_pane_g3_cp1_srt

0x0c78,	// (0x00020296) bg_active_tab_pane_cp1_srt_ParamLimits

0x0c78,	// (0x00020296) bg_active_tab_pane_cp1_srt

0xaebe,	// (0x0002a4dc) tabs_2_active_pane_srt_g1

0xaec6,	// (0x0002a4e4) tabs_2_active_pane_srt_t1_ParamLimits

0xaec6,	// (0x0002a4e4) tabs_2_active_pane_srt_t1

0xaeac,	// (0x0002a4ca) bg_active_tab_pane_g1_cp1_srt

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp1_srt

0xaeb5,	// (0x0002a4d3) bg_active_tab_pane_g3_cp1_srt

0x8a29,	// (0x00028047) tabs_3_active_pane_srt_ParamLimits

0x8a29,	// (0x00028047) tabs_3_active_pane_srt

0x8a3a,	// (0x00028058) tabs_3_passive_pane_cp_srt_ParamLimits

0x8a3a,	// (0x00028058) tabs_3_passive_pane_cp_srt

0x8a4b,	// (0x00028069) tabs_3_passive_pane_srt_ParamLimits

0x8a4b,	// (0x00028069) tabs_3_passive_pane_srt

0x7813,	// (0x00026e31) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7813,	// (0x00026e31) bg_passive_tab_pane_cp2_srt

0x74f5,	// (0x00026b13) bg_passive_tab_pane_g1_cp2_srt

0x3549,	// (0x00022b67) bg_passive_tab_pane_g2_cp2_srt

0x74fe,	// (0x00026b1c) bg_passive_tab_pane_g3_cp2_srt

0x0c78,	// (0x00020296) bg_active_tab_pane_cp2_srt_ParamLimits

0x0c78,	// (0x00020296) bg_active_tab_pane_cp2_srt

0xae92,	// (0x0002a4b0) tabs_3_active_pane_srt_g1

0xae9a,	// (0x0002a4b8) tabs_3_active_pane_srt_t1_ParamLimits

0xae9a,	// (0x0002a4b8) tabs_3_active_pane_srt_t1

0x74f5,	// (0x00026b13) bg_active_tab_pane_g1_cp2_srt

0x3549,	// (0x00022b67) bg_active_tab_pane_g2_cp2_srt

0x74fe,	// (0x00026b1c) bg_active_tab_pane_g3_cp2_srt

0x89e1,	// (0x00027fff) tabs_4_active_pane_srt_ParamLimits

0x89e1,	// (0x00027fff) tabs_4_active_pane_srt

0x89f3,	// (0x00028011) tabs_4_passive_pane_cp2_srt_ParamLimits

0x89f3,	// (0x00028011) tabs_4_passive_pane_cp2_srt

0x7799,	// (0x00026db7) aid_size_cell_toolbar

0x6b3f,	// (0x0002615d) main_idle_act_pane_ParamLimits

0x79dc,	// (0x00026ffa) popup_large_graphic_colour_window_ParamLimits

0x7d83,	// (0x000273a1) popup_toolbar_window_ParamLimits

0x7d83,	// (0x000273a1) popup_toolbar_window

0x5baf,	// (0x000251cd) list_single_graphic_2heading_pane_ParamLimits

0x5baf,	// (0x000251cd) list_single_graphic_2heading_pane

0x31a7,	// (0x000227c5) aid_size_cell_apps_grid_lsc_pane

0x31b9,	// (0x000227d7) aid_size_cell_apps_grid_prt_pane

0x7813,	// (0x00026e31) bg_wml_button_pane_cp1_ParamLimits

0x7813,	// (0x00026e31) bg_wml_button_pane_cp1

0x8711,	// (0x00027d2f) form_midp_field_text_pane_t1_ParamLimits

0x846f,	// (0x00027a8d) input_focus_pane_cp050_ParamLimits

0x873c,	// (0x00027d5a) list_midp_form_text_pane_ParamLimits

0x86ee,	// (0x00027d0c) input_focus_pane_cp051_ParamLimits

0x8702,	// (0x00027d20) list_midp_choice_pane_ParamLimits

0x85b6,	// (0x00027bd4) list_single_2graphic_pane_cp3_ParamLimits

0x85b6,	// (0x00027bd4) list_single_2graphic_pane_cp3

0x85cf,	// (0x00027bed) list_single_midp_graphic_pane_ParamLimits

0x85cf,	// (0x00027bed) list_single_midp_graphic_pane

0x59a4,	// (0x00024fc2) list_single_graphic_2heading_pane_g1_ParamLimits

0x59a4,	// (0x00024fc2) list_single_graphic_2heading_pane_g1

0x59b0,	// (0x00024fce) list_single_graphic_2heading_pane_g4_ParamLimits

0x59b0,	// (0x00024fce) list_single_graphic_2heading_pane_g4

0x59bc,	// (0x00024fda) list_single_graphic_2heading_pane_g5_ParamLimits

0x59bc,	// (0x00024fda) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002edc9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002edc9) list_single_graphic_2heading_pane_g

0x59c8,	// (0x00024fe6) list_single_graphic_2heading_pane_t1_ParamLimits

0x59c8,	// (0x00024fe6) list_single_graphic_2heading_pane_t1

0x59dc,	// (0x00024ffa) list_single_graphic_2heading_pane_t2_ParamLimits

0x59dc,	// (0x00024ffa) list_single_graphic_2heading_pane_t2

0x59f8,	// (0x00025016) list_single_graphic_2heading_pane_t3_ParamLimits

0x59f8,	// (0x00025016) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002edd0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002edd0) list_single_graphic_2heading_pane_t

0x8292,	// (0x000278b0) bg_popup_sub_pane_cp2

0x82bc,	// (0x000278da) grid_toobar_pane

0x82f8,	// (0x00027916) cell_toolbar_pane_ParamLimits

0x82f8,	// (0x00027916) cell_toolbar_pane

0x8328,	// (0x00027946) cell_toolbar_pane_g1_ParamLimits

0x8328,	// (0x00027946) cell_toolbar_pane_g1

0x833c,	// (0x0002795a) cell_toolbar_pane_g2_ParamLimits

0x833c,	// (0x0002795a) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002edde) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002edde) cell_toolbar_pane_g

0x835e,	// (0x0002797c) grid_highlight_pane_cp2_ParamLimits

0x835e,	// (0x0002797c) grid_highlight_pane_cp2

0x8378,	// (0x00027996) toolbar_button_pane

0x8384,	// (0x000279a2) toolbar_button_pane_g1

0x838c,	// (0x000279aa) toolbar_button_pane_g2

0x8394,	// (0x000279b2) toolbar_button_pane_g3

0x839c,	// (0x000279ba) toolbar_button_pane_g4

0x83a4,	// (0x000279c2) toolbar_button_pane_g5

0x83ac,	// (0x000279ca) toolbar_button_pane_g6

0x83b4,	// (0x000279d2) toolbar_button_pane_g7

0x83bc,	// (0x000279da) toolbar_button_pane_g8

0x83c4,	// (0x000279e2) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002ede3) toolbar_button_pane_g

0x83d4,	// (0x000279f2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x83d4,	// (0x000279f2) list_single_2graphic_pane_g1_cp3

0x83e0,	// (0x000279fe) list_single_2graphic_pane_g2_cp3_ParamLimits

0x83e0,	// (0x000279fe) list_single_2graphic_pane_g2_cp3

0x365a,	// (0x00022c78) list_single_2graphic_pane_g3_cp3

0x83f1,	// (0x00027a0f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x83f1,	// (0x00027a0f) list_single_2graphic_pane_g4_cp3

0x83fd,	// (0x00027a1b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x83fd,	// (0x00027a1b) list_single_2graphic_pane_t1_cp3

0x364e,	// (0x00022c6c) list_single_midp_graphic_pane_g2_ParamLimits

0x364e,	// (0x00022c6c) list_single_midp_graphic_pane_g2

0x77a1,	// (0x00026dbf) aid_zoom_text_primary

0x5994,	// (0x00024fb2) aid_zoom_text_secondary

0x75af,	// (0x00026bcd) status_small_pane_g7_ParamLimits

0x75af,	// (0x00026bcd) status_small_pane_g7

0x75d2,	// (0x00026bf0) status_small_pane_t1_ParamLimits

0x6758,	// (0x00025d76) title_pane_g2

0x0003,

0xf54e,	// (0x0002eb6c) title_pane_g

0x69ad,	// (0x00025fcb) aid_size_cell_colour_1_pane_ParamLimits

0x69ad,	// (0x00025fcb) aid_size_cell_colour_1_pane

0x69c1,	// (0x00025fdf) aid_size_cell_colour_2_pane_ParamLimits

0x69c1,	// (0x00025fdf) aid_size_cell_colour_2_pane

0x69d5,	// (0x00025ff3) aid_size_cell_colour_3_pane_ParamLimits

0x69d5,	// (0x00025ff3) aid_size_cell_colour_3_pane

0x69e9,	// (0x00026007) aid_size_cell_colour_4_pane_ParamLimits

0x69e9,	// (0x00026007) aid_size_cell_colour_4_pane

0x6b99,	// (0x000261b7) title_pane_stacon_g1_ParamLimits

0x6b99,	// (0x000261b7) title_pane_stacon_g1

0x9d55,	// (0x00029373) popup_note_wait_window_g3_ParamLimits

0x9d55,	// (0x00029373) popup_note_wait_window_g3

0x9dcc,	// (0x000293ea) popup_note_wait_window_t5_ParamLimits

0x9dcc,	// (0x000293ea) popup_note_wait_window_t5

0x0c10,	// (0x0002022e) main_feb_china_hwr_fs_writing_pane

0x78a3,	// (0x00026ec1) popup_feb_china_hwr_fs_window_ParamLimits

0x78a3,	// (0x00026ec1) popup_feb_china_hwr_fs_window

0x845a,	// (0x00027a78) aid_size_cell_hwr_fs_ParamLimits

0x845a,	// (0x00027a78) aid_size_cell_hwr_fs

0x846f,	// (0x00027a8d) bg_popup_sub_pane_cp3_ParamLimits

0x846f,	// (0x00027a8d) bg_popup_sub_pane_cp3

0x847b,	// (0x00027a99) grid_hwr_fs_pane_ParamLimits

0x847b,	// (0x00027a99) grid_hwr_fs_pane

0x8493,	// (0x00027ab1) linegrid_hwr_fs_pane_ParamLimits

0x8493,	// (0x00027ab1) linegrid_hwr_fs_pane

0x84a3,	// (0x00027ac1) cell_hwr_fs_pane_ParamLimits

0x84a3,	// (0x00027ac1) cell_hwr_fs_pane

0x84c7,	// (0x00027ae5) linegrid_hwr_fs_pane_g1_ParamLimits

0x84c7,	// (0x00027ae5) linegrid_hwr_fs_pane_g1

0x84d3,	// (0x00027af1) linegrid_hwr_fs_pane_g2_ParamLimits

0x84d3,	// (0x00027af1) linegrid_hwr_fs_pane_g2

0x84e5,	// (0x00027b03) linegrid_hwr_fs_pane_g3_ParamLimits

0x84e5,	// (0x00027b03) linegrid_hwr_fs_pane_g3

0x84f1,	// (0x00027b0f) linegrid_hwr_fs_pane_g4_ParamLimits

0x84f1,	// (0x00027b0f) linegrid_hwr_fs_pane_g4

0x850f,	// (0x00027b2d) linegrid_hwr_fs_pane_g5_ParamLimits

0x850f,	// (0x00027b2d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002ee0e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002ee0e) linegrid_hwr_fs_pane_g

0x8525,	// (0x00027b43) cell_hwr_fs_pane_g1_ParamLimits

0x8525,	// (0x00027b43) cell_hwr_fs_pane_g1

0x81c9,	// (0x000277e7) cell_hwr_fs_pane_g2_ParamLimits

0x81c9,	// (0x000277e7) cell_hwr_fs_pane_g2

0x853b,	// (0x00027b59) cell_hwr_fs_pane_g3_ParamLimits

0x853b,	// (0x00027b59) cell_hwr_fs_pane_g3

0x8548,	// (0x00027b66) cell_hwr_fs_pane_g4_ParamLimits

0x8548,	// (0x00027b66) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002ee19) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002ee19) cell_hwr_fs_pane_g

0x8555,	// (0x00027b73) cell_hwr_fs_pane_t1

0x0c10,	// (0x0002022e) grid_highlight_pane_cp6

0x0c10,	// (0x0002022e) main_idle_act2_pane

0x2e75,	// (0x00022493) aid_inside_area_popup_secondary

0xa405,	// (0x00029a23) aid_inside_area_window_primary_ParamLimits

0xa405,	// (0x00029a23) aid_inside_area_window_primary

0xaff9,	// (0x0002a617) ai2_news_ticker_pane

0xb001,	// (0x0002a61f) aid_size_cell_ai1_link_ParamLimits

0xb001,	// (0x0002a61f) aid_size_cell_ai1_link

0xb01b,	// (0x0002a639) popup_ai2_data_window_ParamLimits

0xb01b,	// (0x0002a639) popup_ai2_data_window

0xb039,	// (0x0002a657) popup_ai2_link_window_ParamLimits

0xb039,	// (0x0002a657) popup_ai2_link_window

0x846f,	// (0x00027a8d) bg_popup_sub_pane_cp4_ParamLimits

0x846f,	// (0x00027a8d) bg_popup_sub_pane_cp4

0xb04f,	// (0x0002a66d) grid_ai2_link_pane_ParamLimits

0xb04f,	// (0x0002a66d) grid_ai2_link_pane

0xb066,	// (0x0002a684) popup_ai2_link_window_g1_ParamLimits

0xb066,	// (0x0002a684) popup_ai2_link_window_g1

0xb072,	// (0x0002a690) popup_ai2_link_window_g2_ParamLimits

0xb072,	// (0x0002a690) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002efec) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002efec) popup_ai2_link_window_g

0xb083,	// (0x0002a6a1) ai2_mp_button_pane

0xb08b,	// (0x0002a6a9) ai2_mp_volume_pane

0x86ee,	// (0x00027d0c) bg_popup_sub_pane_cp5_ParamLimits

0x86ee,	// (0x00027d0c) bg_popup_sub_pane_cp5

0xb093,	// (0x0002a6b1) heading_ai2_gene_pane_ParamLimits

0xb093,	// (0x0002a6b1) heading_ai2_gene_pane

0xb09f,	// (0x0002a6bd) list_ai2_gene_pane_ParamLimits

0xb09f,	// (0x0002a6bd) list_ai2_gene_pane

0xb0e7,	// (0x0002a705) cell_ai2_link_pane_ParamLimits

0xb0e7,	// (0x0002a705) cell_ai2_link_pane

0xb0fd,	// (0x0002a71b) cell_ai2_link_pane_g1

0x0c10,	// (0x0002022e) grid_highlight_pane_cp7

0x8a99,	// (0x000280b7) ai2_mp_volume_pane_g1

0xb1d0,	// (0x0002a7ee) ai2_mp_volume_pane_g2

0xb145,	// (0x0002a763) list_ai2_gene_pane_t1

0xb1d8,	// (0x0002a7f6) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002f005) ai2_mp_volume_pane_g

0x8aa1,	// (0x000280bf) volume_small_pane_cp3

0xb1e0,	// (0x0002a7fe) aid_size_cell_ai2_button

0xb1e8,	// (0x0002a806) grid_ai2_button_pane

0xb1f1,	// (0x0002a80f) cell_ai2_button_pane_ParamLimits

0xb1f1,	// (0x0002a80f) cell_ai2_button_pane

0x0c06,	// (0x00020224) cell_ai2_button_pane_g1

0x0c10,	// (0x0002022e) grid_highlight_pane_cp8

0xb190,	// (0x0002a7ae) ai2_gene_pane_t1_ParamLimits

0xb190,	// (0x0002a7ae) ai2_gene_pane_t1

0x778f,	// (0x00026dad) aid_height_parent_landscape

0xaa97,	// (0x0002a0b5) aid_height_set_list

0xaaa8,	// (0x0002a0c6) aid_size_parent

0xae1a,	// (0x0002a438) aid_size_cell_graphic_pane_ParamLimits

0xb0af,	// (0x0002a6cd) popup_ai2_data_window_g1_ParamLimits

0xb0af,	// (0x0002a6cd) popup_ai2_data_window_g1

0xb0bb,	// (0x0002a6d9) ai2_news_ticker_pane_g1

0xb0c3,	// (0x0002a6e1) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002eff1) ai2_news_ticker_pane_g

0xb0cb,	// (0x0002a6e9) ai2_news_ticker_pane_t1

0xb0d9,	// (0x0002a6f7) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002eff6) ai2_news_ticker_pane_t

0xb106,	// (0x0002a724) heading_ai2_gene_pane_g1

0xb10e,	// (0x0002a72c) heading_ai2_gene_pane_t1_ParamLimits

0xb10e,	// (0x0002a72c) heading_ai2_gene_pane_t1

0xb123,	// (0x0002a741) list_highlight_pane_cp6

0xb12b,	// (0x0002a749) ai2_gene_pane_ParamLimits

0xb12b,	// (0x0002a749) ai2_gene_pane

0xb153,	// (0x0002a771) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002effb) list_ai2_gene_pane_t

0xb161,	// (0x0002a77f) list_highlight_pane_cp8_ParamLimits

0xb161,	// (0x0002a77f) list_highlight_pane_cp8

0xb172,	// (0x0002a790) ai2_gene_pane_g1_ParamLimits

0xb172,	// (0x0002a790) ai2_gene_pane_g1

0xb184,	// (0x0002a7a2) ai2_gene_pane_g2_ParamLimits

0xb184,	// (0x0002a7a2) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002f000) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002f000) ai2_gene_pane_g

0x123d,	// (0x0002085b) scroll_pane_cp12

0x7746,	// (0x00026d64) control_pane_t3_ParamLimits

0x7746,	// (0x00026d64) control_pane_t3

0x75c3,	// (0x00026be1) status_small_pane_g8_ParamLimits

0x75c3,	// (0x00026be1) status_small_pane_g8

0x79a1,	// (0x00026fbf) popup_find_window_ParamLimits

0x7bcc,	// (0x000271ea) popup_note_image_window_ParamLimits

0x5a10,	// (0x0002502e) list_double2_graphic_pane_vc_g1_ParamLimits

0x5a10,	// (0x0002502e) list_double2_graphic_pane_vc_g1

0x5a1c,	// (0x0002503a) list_double2_graphic_pane_vc_g2_ParamLimits

0x5a1c,	// (0x0002503a) list_double2_graphic_pane_vc_g2

0x5a28,	// (0x00025046) list_double2_graphic_pane_vc_g3_ParamLimits

0x5a28,	// (0x00025046) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0002edd7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002edd7) list_double2_graphic_pane_vc_g

0x5a34,	// (0x00025052) list_double2_graphic_pane_vc_t1_ParamLimits

0x5a34,	// (0x00025052) list_double2_graphic_pane_vc_t1

0x59b0,	// (0x00024fce) list_single_heading_pane_vc_g1_ParamLimits

0x59b0,	// (0x00024fce) list_single_heading_pane_vc_g1

0x59bc,	// (0x00024fda) list_single_heading_pane_vc_g2_ParamLimits

0x59bc,	// (0x00024fda) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002edf8) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002edf8) list_single_heading_pane_vc_g

0x5a4a,	// (0x00025068) list_single_heading_pane_vc_t1_ParamLimits

0x5a4a,	// (0x00025068) list_single_heading_pane_vc_t1

0x5a62,	// (0x00025080) list_single_heading_pane_vc_t2_ParamLimits

0x5a62,	// (0x00025080) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002edfd) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002edfd) list_single_heading_pane_vc_t

0x5a74,	// (0x00025092) list_setting_number_pane_vc_g1_ParamLimits

0x5a74,	// (0x00025092) list_setting_number_pane_vc_g1

0x5a80,	// (0x0002509e) list_setting_number_pane_vc_g2_ParamLimits

0x5a80,	// (0x0002509e) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002ee02) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002ee02) list_setting_number_pane_vc_g

0x5a8c,	// (0x000250aa) list_setting_number_pane_vc_t1_ParamLimits

0x5a8c,	// (0x000250aa) list_setting_number_pane_vc_t1

0x5aa0,	// (0x000250be) list_setting_number_pane_vc_t2_ParamLimits

0x5aa0,	// (0x000250be) list_setting_number_pane_vc_t2

0x5abc,	// (0x000250da) list_setting_number_pane_vc_t3_ParamLimits

0x5abc,	// (0x000250da) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002ee07) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002ee07) list_setting_number_pane_vc_t

0x5aea,	// (0x00025108) set_value_pane_vc_ParamLimits

0x5aea,	// (0x00025108) set_value_pane_vc

0x5baf,	// (0x000251cd) list_double2_graphic_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double2_graphic_pane_vc

0xac80,	// (0x0002a29e) list_double2_large_graphic_pane_vc_ParamLimits

0xac80,	// (0x0002a29e) list_double2_large_graphic_pane_vc

0x5baf,	// (0x000251cd) list_double2_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double2_pane_vc

0x5baf,	// (0x000251cd) list_double_graphic_heading_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double_graphic_heading_pane_vc

0x5baf,	// (0x000251cd) list_double_graphic_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double_graphic_pane_vc

0x5baf,	// (0x000251cd) list_double_heading_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double_heading_pane_vc

0xac94,	// (0x0002a2b2) list_double_large_graphic_pane_vc_ParamLimits

0xac94,	// (0x0002a2b2) list_double_large_graphic_pane_vc

0x5baf,	// (0x000251cd) list_double_number_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double_number_pane_vc

0x5baf,	// (0x000251cd) list_double_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double_pane_vc

0x5baf,	// (0x000251cd) list_double_time_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_double_time_pane_vc

0x5baf,	// (0x000251cd) list_setting_number_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_setting_number_pane_vc

0x5baf,	// (0x000251cd) list_setting_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_setting_pane_vc

0x5baf,	// (0x000251cd) list_single_graphic_heading_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_single_graphic_heading_pane_vc

0x5baf,	// (0x000251cd) list_single_heading_pane_vc_ParamLimits

0x5baf,	// (0x000251cd) list_single_heading_pane_vc

0xacb6,	// (0x0002a2d4) list_single_number_heading_pane_vc_ParamLimits

0xacb6,	// (0x0002a2d4) list_single_number_heading_pane_vc

0x5a10,	// (0x0002502e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5a10,	// (0x0002502e) list_double_graphic_heading_pane_vc_g1

0x59b0,	// (0x00024fce) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x59b0,	// (0x00024fce) list_double_graphic_heading_pane_vc_g2

0x59bc,	// (0x00024fda) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x59bc,	// (0x00024fda) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0002f00c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f00c) list_double_graphic_heading_pane_vc_g

0x5bf4,	// (0x00025212) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5bf4,	// (0x00025212) list_double_graphic_heading_pane_vc_t1

0x5c0a,	// (0x00025228) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5c0a,	// (0x00025228) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002f013) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0002f013) list_double_graphic_heading_pane_vc_t

0x5a74,	// (0x00025092) list_setting_pane_vc_g1_ParamLimits

0x5a74,	// (0x00025092) list_setting_pane_vc_g1

0x5a80,	// (0x0002509e) list_setting_pane_vc_g2_ParamLimits

0x5a80,	// (0x0002509e) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002ee02) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002ee02) list_setting_pane_vc_g

0x5c28,	// (0x00025246) list_setting_pane_vc_t1_ParamLimits

0x5c28,	// (0x00025246) list_setting_pane_vc_t1

0x5c44,	// (0x00025262) list_setting_pane_vc_t2_ParamLimits

0x5c44,	// (0x00025262) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0002f041) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0002f041) list_setting_pane_vc_t

0x5aea,	// (0x00025108) set_value_pane_cp_vc_ParamLimits

0x5aea,	// (0x00025108) set_value_pane_cp_vc

0x59b0,	// (0x00024fce) list_single_number_heading_pane_vc_g1_ParamLimits

0x59b0,	// (0x00024fce) list_single_number_heading_pane_vc_g1

0x59bc,	// (0x00024fda) list_single_number_heading_pane_vc_g2_ParamLimits

0x59bc,	// (0x00024fda) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002edf8) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002edf8) list_single_number_heading_pane_vc_g

0x5a4a,	// (0x00025068) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a4a,	// (0x00025068) list_single_number_heading_pane_vc_t1

0x5c60,	// (0x0002527e) list_single_number_heading_pane_vc_t2_ParamLimits

0x5c60,	// (0x0002527e) list_single_number_heading_pane_vc_t2

0x5c72,	// (0x00025290) list_single_number_heading_pane_vc_t3_ParamLimits

0x5c72,	// (0x00025290) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0002f046) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0002f046) list_single_number_heading_pane_vc_t

0x5a10,	// (0x0002502e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5a10,	// (0x0002502e) list_single_graphic_heading_pane_vc_g1

0x59b0,	// (0x00024fce) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x59b0,	// (0x00024fce) list_single_graphic_heading_pane_vc_g4

0x59bc,	// (0x00024fda) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x59bc,	// (0x00024fda) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x0002f00c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f00c) list_single_graphic_heading_pane_vc_g

0x5a4a,	// (0x00025068) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5a4a,	// (0x00025068) list_single_graphic_heading_pane_vc_t1

0x5c84,	// (0x000252a2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5c84,	// (0x000252a2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0002f04d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0002f04d) list_single_graphic_heading_pane_vc_t

0x59b0,	// (0x00024fce) list_double2_pane_vc_g1_ParamLimits

0x59b0,	// (0x00024fce) list_double2_pane_vc_g1

0x59bc,	// (0x00024fda) list_double2_pane_vc_g2_ParamLimits

0x59bc,	// (0x00024fda) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0002edf8) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0002edf8) list_double2_pane_vc_g

0x5c96,	// (0x000252b4) list_double2_pane_vc_t1_ParamLimits

0x5c96,	// (0x000252b4) list_double2_pane_vc_t1

0x5cac,	// (0x000252ca) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5cac,	// (0x000252ca) list_double2_large_graphic_pane_vc_g1

0x5cb8,	// (0x000252d6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5cb8,	// (0x000252d6) list_double2_large_graphic_pane_vc_g2

0x5cc4,	// (0x000252e2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5cc4,	// (0x000252e2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0002f052) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0002f052) list_double2_large_graphic_pane_vc_g

0x5cd0,	// (0x000252ee) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5cd0,	// (0x000252ee) list_double2_large_graphic_pane_vc_t1

0x5ce6,	// (0x00025304) list_double_time_pane_vc_g1_ParamLimits

0x5ce6,	// (0x00025304) list_double_time_pane_vc_g1

0x5cf2,	// (0x00025310) list_double_time_pane_vc_g2_ParamLimits

0x5cf2,	// (0x00025310) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0002f059) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0002f059) list_double_time_pane_vc_g

0x5cfe,	// (0x0002531c) list_double_time_pane_vc_t1_ParamLimits

0x5cfe,	// (0x0002531c) list_double_time_pane_vc_t1

0x5d28,	// (0x00025346) list_double_time_pane_vc_t2_ParamLimits

0x5d28,	// (0x00025346) list_double_time_pane_vc_t2

0x5d71,	// (0x0002538f) list_double_time_pane_vc_t3_ParamLimits

0x5d71,	// (0x0002538f) list_double_time_pane_vc_t3

0x5d83,	// (0x000253a1) list_double_time_pane_vc_t4_ParamLimits

0x5d83,	// (0x000253a1) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0002f05e) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0002f05e) list_double_time_pane_vc_t

0x59b0,	// (0x00024fce) list_double_pane_vc_g1_ParamLimits

0x59b0,	// (0x00024fce) list_double_pane_vc_g1

0x59bc,	// (0x00024fda) list_double_pane_vc_g2_ParamLimits

0x59bc,	// (0x00024fda) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0002edf8) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0002edf8) list_double_pane_vc_g

0x5da8,	// (0x000253c6) list_double_pane_vc_t1_ParamLimits

0x5da8,	// (0x000253c6) list_double_pane_vc_t1

0x5dbc,	// (0x000253da) list_double_pane_vc_t2_ParamLimits

0x5dbc,	// (0x000253da) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0002f067) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0002f067) list_double_pane_vc_t

0x59b0,	// (0x00024fce) list_double_number_pane_vc_g1_ParamLimits

0x59b0,	// (0x00024fce) list_double_number_pane_vc_g1

0x59bc,	// (0x00024fda) list_double_number_pane_vc_g2_ParamLimits

0x59bc,	// (0x00024fda) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002edf8) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002edf8) list_double_number_pane_vc_g

0x5dd2,	// (0x000253f0) list_double_number_pane_vc_t1_ParamLimits

0x5dd2,	// (0x000253f0) list_double_number_pane_vc_t1

0x5de6,	// (0x00025404) list_double_number_pane_vc_t2_ParamLimits

0x5de6,	// (0x00025404) list_double_number_pane_vc_t2

0x5dfa,	// (0x00025418) list_double_number_pane_vc_t3_ParamLimits

0x5dfa,	// (0x00025418) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002f06c) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002f06c) list_double_number_pane_vc_t

0x5e10,	// (0x0002542e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5e10,	// (0x0002542e) list_double_large_graphic_pane_vc_g1

0x5e38,	// (0x00025456) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5e38,	// (0x00025456) list_double_large_graphic_pane_vc_g2

0x5e4c,	// (0x0002546a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5e4c,	// (0x0002546a) list_double_large_graphic_pane_vc_g3

0x5e5b,	// (0x00025479) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5e5b,	// (0x00025479) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0002f073) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002f073) list_double_large_graphic_pane_vc_g

0x5e6b,	// (0x00025489) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5e6b,	// (0x00025489) list_double_large_graphic_pane_vc_t1

0x5e8d,	// (0x000254ab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5e8d,	// (0x000254ab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002f07c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002f07c) list_double_large_graphic_pane_vc_t

0x59b0,	// (0x00024fce) list_double_heading_pane_vc_g1_ParamLimits

0x59b0,	// (0x00024fce) list_double_heading_pane_vc_g1

0x59bc,	// (0x00024fda) list_double_heading_pane_vc_g2_ParamLimits

0x59bc,	// (0x00024fda) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002edf8) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002edf8) list_double_heading_pane_vc_g

0x5ead,	// (0x000254cb) list_double_heading_pane_vc_t1_ParamLimits

0x5ead,	// (0x000254cb) list_double_heading_pane_vc_t1

0x5a4a,	// (0x00025068) list_double_heading_pane_vc_t2_ParamLimits

0x5a4a,	// (0x00025068) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x0002f081) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0002f081) list_double_heading_pane_vc_t

0x5ebf,	// (0x000254dd) list_double_graphic_pane_vc_g1_ParamLimits

0x5ebf,	// (0x000254dd) list_double_graphic_pane_vc_g1

0x5ed2,	// (0x000254f0) list_double_graphic_pane_vc_g2_ParamLimits

0x5ed2,	// (0x000254f0) list_double_graphic_pane_vc_g2

0x59b0,	// (0x00024fce) list_double_graphic_pane_vc_g3_ParamLimits

0x59b0,	// (0x00024fce) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x0002f086) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002f086) list_double_graphic_pane_vc_g

0x5eef,	// (0x0002550d) list_double_graphic_pane_vc_t1_ParamLimits

0x5eef,	// (0x0002550d) list_double_graphic_pane_vc_t1

0x5f19,	// (0x00025537) list_double_graphic_pane_vc_t2_ParamLimits

0x5f19,	// (0x00025537) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002f08f) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002f08f) list_double_graphic_pane_vc_t

0x6364,	// (0x00025982) aid_size_cell_fastswap

0x636c,	// (0x0002598a) aid_size_cell_touch_ParamLimits

0x636c,	// (0x0002598a) aid_size_cell_touch

0x65cd,	// (0x00025beb) popup_fast_swap_wide_window_ParamLimits

0x65cd,	// (0x00025beb) popup_fast_swap_wide_window

0x66eb,	// (0x00025d09) touch_pane_ParamLimits

0x66eb,	// (0x00025d09) touch_pane

0x2c5a,	// (0x00022278) button_value_adjust_pane_cp2

0x569b,	// (0x00024cb9) button_value_adjust_pane_cp4

0x56c1,	// (0x00024cdf) form_field_data_pane_cp2

0x56e4,	// (0x00024d02) form_field_data_wide_pane_cp2

0x31f5,	// (0x00022813) bg_scroll_pane_ParamLimits

0x6d81,	// (0x0002639f) scroll_handle_pane_ParamLimits

0x6d95,	// (0x000263b3) scroll_sc2_down_pane_ParamLimits

0x6d95,	// (0x000263b3) scroll_sc2_down_pane

0x3226,	// (0x00022844) scroll_sc2_up_pane_ParamLimits

0x3226,	// (0x00022844) scroll_sc2_up_pane

0xb90a,	// (0x0002af28) grid_wheel_folder_pane_g1_ParamLimits

0xb90a,	// (0x0002af28) grid_wheel_folder_pane_g1

0x709b,	// (0x000266b9) clock_nsta_pane_cp2_ParamLimits

0x709b,	// (0x000266b9) clock_nsta_pane_cp2

0x6b3f,	// (0x0002615d) listscroll_midp_pane_ParamLimits

0x72aa,	// (0x000268c8) midp_canvas_pane

0x7787,	// (0x00026da5) nsta_clock_indic_pane

0x77dd,	// (0x00026dfb) listscroll_form_pane_vc

0x7801,	// (0x00026e1f) listscroll_set_pane_vc_ParamLimits

0x7801,	// (0x00026e1f) listscroll_set_pane_vc

0x7f1d,	// (0x0002753b) clock_nsta_pane

0x7f9a,	// (0x000275b8) indicator_nsta_pane

0x8292,	// (0x000278b0) bg_popup_sub_pane_cp2_ParamLimits

0x82a6,	// (0x000278c4) find_pane_cp2_ParamLimits

0x82a6,	// (0x000278c4) find_pane_cp2

0x82bc,	// (0x000278da) grid_toobar_pane_ParamLimits

0x842e,	// (0x00027a4c) list_form_gen_pane_vc_ParamLimits

0x842e,	// (0x00027a4c) list_form_gen_pane_vc

0x8444,	// (0x00027a62) scroll_pane_cp8_vc_ParamLimits

0x8444,	// (0x00027a62) scroll_pane_cp8_vc

0x8563,	// (0x00027b81) data_form_wide_pane_vc_ParamLimits

0x8563,	// (0x00027b81) data_form_wide_pane_vc

0x856f,	// (0x00027b8d) form_field_data_wide_pane_vc_g1

0x8577,	// (0x00027b95) form_field_data_wide_pane_vc_t1_ParamLimits

0x8577,	// (0x00027b95) form_field_data_wide_pane_vc_t1

0x2cc5,	// (0x000222e3) input_focus_pane_cp6_vc_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_cp6_vc

0x9acf,	// (0x000290ed) list_midp_pane_ParamLimits

0x9adb,	// (0x000290f9) scroll_pane_cp16_ParamLimits

0x9adb,	// (0x000290f9) scroll_pane_cp16

0x9b29,	// (0x00029147) button_value_adjust_pane_ParamLimits

0x9b29,	// (0x00029147) button_value_adjust_pane

0xaaba,	// (0x0002a0d8) button_value_adjust_pane_cp6_ParamLimits

0xaaba,	// (0x0002a0d8) button_value_adjust_pane_cp6

0xac08,	// (0x0002a226) settings_code_pane_cp_ParamLimits

0xac08,	// (0x0002a226) settings_code_pane_cp

0x0c06,	// (0x00020224) cell_touch_pane_g1

0x0c06,	// (0x00020224) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002ed1c) cell_touch_pane_g

0xb203,	// (0x0002a821) cell_touch_pane_cp_ParamLimits

0xb203,	// (0x0002a821) cell_touch_pane_cp

0xb213,	// (0x0002a831) cell_touch_pane_ParamLimits

0xb213,	// (0x0002a831) cell_touch_pane

0x0c06,	// (0x00020224) scroll_sc2_down_pane_g1

0x0c06,	// (0x00020224) scroll_sc2_up_pane_g1

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp4_vc

0xb224,	// (0x0002a842) list_set_graphic_pane_vc_g1_ParamLimits

0xb224,	// (0x0002a842) list_set_graphic_pane_vc_g1

0x3729,	// (0x00022d47) list_set_graphic_pane_vc_g2_ParamLimits

0x3729,	// (0x00022d47) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0002f018) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002f018) list_set_graphic_pane_vc_g

0xb230,	// (0x0002a84e) text_primary_small_cp13_vc_ParamLimits

0xb230,	// (0x0002a84e) text_primary_small_cp13_vc

0xb248,	// (0x0002a866) list_set_graphic_pane_vc_ParamLimits

0xb248,	// (0x0002a866) list_set_graphic_pane_vc

0x0c10,	// (0x0002022e) input_focus_pane_cp2_vc

0x0c06,	// (0x00020224) setting_code_pane_vc_g1

0x0c8f,	// (0x000202ad) setting_code_pane_vc_t1

0xb25d,	// (0x0002a87b) set_text_pane_vc_t1_ParamLimits

0xb25d,	// (0x0002a87b) set_text_pane_vc_t1

0x0c10,	// (0x0002022e) input_focus_pane_cp1_vc

0xb27b,	// (0x0002a899) list_set_text_pane_vc

0x0c06,	// (0x00020224) setting_text_pane_vc_g1

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp2_vc

0x0c86,	// (0x000202a4) setting_slider_graphic_pane_vc_g1

0xb285,	// (0x0002a8a3) setting_slider_graphic_pane_vc_t1

0xb297,	// (0x0002a8b5) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002f01d) setting_slider_graphic_pane_vc_t

0xb2a9,	// (0x0002a8c7) slider_set_pane_cp_vc

0xb2b3,	// (0x0002a8d1) slider_set_pane_vc_g1

0xb2bc,	// (0x0002a8da) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0002f022) slider_set_pane_vc_g

0x2d8e,	// (0x000223ac) set_opt_bg_pane_g1_copy1

0x2d96,	// (0x000223b4) set_opt_bg_pane_g2_copy1

0xb2e8,	// (0x0002a906) set_opt_bg_pane_g3_copy1

0x2da6,	// (0x000223c4) set_opt_bg_pane_g4_copy1

0x2dae,	// (0x000223cc) set_opt_bg_pane_g5_copy1

0x2db6,	// (0x000223d4) set_opt_bg_pane_g6_copy1

0xb2f2,	// (0x0002a910) set_opt_bg_pane_g7_copy1

0xb2fc,	// (0x0002a91a) set_opt_bg_pane_g8_copy1

0xb306,	// (0x0002a924) set_opt_bg_pane_g9_copy1

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp_vc

0xb310,	// (0x0002a92e) setting_slider_pane_vc_t1

0xb31f,	// (0x0002a93d) setting_slider_pane_vc_t2

0xb331,	// (0x0002a94f) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0002f031) setting_slider_pane_vc_t

0xb343,	// (0x0002a961) slider_set_pane_vc

0x8799,	// (0x00027db7) volume_set_pane_vc_g1

0x87a2,	// (0x00027dc0) volume_set_pane_vc_g2

0x87ab,	// (0x00027dc9) volume_set_pane_vc_g3

0x87b4,	// (0x00027dd2) volume_set_pane_vc_g4

0x87bd,	// (0x00027ddb) volume_set_pane_vc_g5

0x87c6,	// (0x00027de4) volume_set_pane_vc_g6

0x87cf,	// (0x00027ded) volume_set_pane_vc_g7

0x87d8,	// (0x00027df6) volume_set_pane_vc_g8

0x87e1,	// (0x00027dff) volume_set_pane_vc_g9

0x87ea,	// (0x00027e08) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0002eecf) volume_set_pane_vc_g

0xb34d,	// (0x0002a96b) volume_set_pane_vc

0xb357,	// (0x0002a975) button_value_adjust_pane_cp1_vc

0xb361,	// (0x0002a97f) list_highlight_pane_cp2_vc

0xb36a,	// (0x0002a988) list_set_pane_vc_ParamLimits

0xb36a,	// (0x0002a988) list_set_pane_vc

0xb3da,	// (0x0002a9f8) main_pane_set_vc_t1_ParamLimits

0xb3da,	// (0x0002a9f8) main_pane_set_vc_t1

0xb3ef,	// (0x0002aa0d) main_pane_set_vc_t2_ParamLimits

0xb3ef,	// (0x0002aa0d) main_pane_set_vc_t2

0xb401,	// (0x0002aa1f) main_pane_set_vc_t3_ParamLimits

0xb401,	// (0x0002aa1f) main_pane_set_vc_t3

0xb415,	// (0x0002aa33) main_pane_set_vc_t4_ParamLimits

0xb415,	// (0x0002aa33) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0002f038) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0002f038) main_pane_set_vc_t

0xb429,	// (0x0002aa47) setting_code_pane_vc_ParamLimits

0xb429,	// (0x0002aa47) setting_code_pane_vc

0xb43a,	// (0x0002aa58) setting_slider_graphic_pane_vc

0xb43a,	// (0x0002aa58) setting_slider_pane_vc

0xb43a,	// (0x0002aa58) setting_text_pane_vc

0xb43a,	// (0x0002aa58) setting_volume_pane_vc

0xb444,	// (0x0002aa62) scroll_pane_cp121_vc

0x2c48,	// (0x00022266) set_content_pane_vc

0xb44c,	// (0x0002aa6a) button_value_adjust_pane_g1

0xb455,	// (0x0002aa73) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x0002f094) button_value_adjust_pane_g

0xb45e,	// (0x0002aa7c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb45e,	// (0x0002aa7c) form_field_slider_wide_pane_vc_t1

0xb470,	// (0x0002aa8e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb470,	// (0x0002aa8e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x0002f099) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002f099) form_field_slider_wide_pane_vc_t

0x0c6a,	// (0x00020288) input_focus_pane_cp10_vc_ParamLimits

0x0c6a,	// (0x00020288) input_focus_pane_cp10_vc

0xb49c,	// (0x0002aaba) slider_cont_pane_cp1_vc_ParamLimits

0xb49c,	// (0x0002aaba) slider_cont_pane_cp1_vc

0xb4ae,	// (0x0002aacc) slider_form_pane_g1_cp2

0xb2bc,	// (0x0002a8da) slider_form_pane_g2_cp2

0xb4db,	// (0x0002aaf9) form_field_slider_pane_vc_t3

0xb4e9,	// (0x0002ab07) form_field_slider_pane_vc_t4

0xb4f7,	// (0x0002ab15) slider_form_pane_vc_ParamLimits

0xb4f7,	// (0x0002ab15) slider_form_pane_vc

0xb504,	// (0x0002ab22) form_field_slider_pane_vc_t1_ParamLimits

0xb504,	// (0x0002ab22) form_field_slider_pane_vc_t1

0xb470,	// (0x0002aa8e) form_field_slider_pane_vc_t2_ParamLimits

0xb470,	// (0x0002aa8e) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x0002f0ab) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002f0ab) form_field_slider_pane_vc_t

0x0c6a,	// (0x00020288) input_focus_pane_cp9_vc_ParamLimits

0x0c6a,	// (0x00020288) input_focus_pane_cp9_vc

0xb51a,	// (0x0002ab38) slider_cont_pane_vc_ParamLimits

0xb51a,	// (0x0002ab38) slider_cont_pane_vc

0xb52e,	// (0x0002ab4c) list_form_graphic_pane_cp_vc_ParamLimits

0xb52e,	// (0x0002ab4c) list_form_graphic_pane_cp_vc

0x856f,	// (0x00027b8d) form_field_popup_wide_pane_vc_g1

0xb543,	// (0x0002ab61) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb543,	// (0x0002ab61) form_field_popup_wide_pane_vc_t1

0x2cc5,	// (0x000222e3) input_focus_pane_cp8_vc_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_cp8_vc

0xb588,	// (0x0002aba6) list_form_wide_pane_vc_ParamLimits

0xb588,	// (0x0002aba6) list_form_wide_pane_vc

0xb594,	// (0x0002abb2) list_form_graphic_pane_vc_g1

0xb59c,	// (0x0002abba) list_form_graphic_pane_vc_t1_ParamLimits

0xb59c,	// (0x0002abba) list_form_graphic_pane_vc_t1

0x0c78,	// (0x00020296) list_highlight_pane_cp5_vc_ParamLimits

0x0c78,	// (0x00020296) list_highlight_pane_cp5_vc

0xb5b8,	// (0x0002abd6) list_form_graphic_pane_vc_ParamLimits

0xb5b8,	// (0x0002abd6) list_form_graphic_pane_vc

0x856f,	// (0x00027b8d) form_field_popup_pane_vc_g1

0xb5ce,	// (0x0002abec) form_field_popup_pane_vc_t1_ParamLimits

0xb5ce,	// (0x0002abec) form_field_popup_pane_vc_t1

0x2cc5,	// (0x000222e3) input_focus_pane_cp7_vc_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_cp7_vc

0xb5e5,	// (0x0002ac03) list_form_pane_vc_ParamLimits

0xb5e5,	// (0x0002ac03) list_form_pane_vc

0xb5f1,	// (0x0002ac0f) data_form_pane_vc_t1_ParamLimits

0xb5f1,	// (0x0002ac0f) data_form_pane_vc_t1

0x2d8e,	// (0x000223ac) input_focus_pane_vc_g1

0x2d96,	// (0x000223b4) input_focus_pane_vc_g2

0x2d9e,	// (0x000223bc) input_focus_pane_vc_g3

0x2da6,	// (0x000223c4) input_focus_pane_vc_g4

0x2dae,	// (0x000223cc) input_focus_pane_vc_g5

0x2db6,	// (0x000223d4) input_focus_pane_vc_g6

0x2dbe,	// (0x000223dc) input_focus_pane_vc_g7

0x2dc6,	// (0x000223e4) input_focus_pane_vc_g8

0x2dce,	// (0x000223ec) input_focus_pane_vc_g9

0x0c06,	// (0x00020224) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002eca5) input_focus_pane_vc_g

0x8563,	// (0x00027b81) data_form_pane_vc_ParamLimits

0x8563,	// (0x00027b81) data_form_pane_vc

0x856f,	// (0x00027b8d) form_field_data_pane_vc_g1

0xb60e,	// (0x0002ac2c) form_field_data_pane_vc_t1_ParamLimits

0xb60e,	// (0x0002ac2c) form_field_data_pane_vc_t1

0x2cc5,	// (0x000222e3) input_focus_pane_vc_ParamLimits

0x2cc5,	// (0x000222e3) input_focus_pane_vc

0xb628,	// (0x0002ac46) button_value_adjust_pane_cp3_vc

0xb630,	// (0x0002ac4e) button_value_adjust_pane_cp5_vc

0xb638,	// (0x0002ac56) form_field_data_pane_vc_ParamLimits

0xb638,	// (0x0002ac56) form_field_data_pane_vc

0xb653,	// (0x0002ac71) form_field_data_pane_vc_cp2

0xb65b,	// (0x0002ac79) form_field_data_wide_pane_vc_ParamLimits

0xb65b,	// (0x0002ac79) form_field_data_wide_pane_vc

0xb675,	// (0x0002ac93) form_field_data_wide_pane_vc_cp2

0xb67d,	// (0x0002ac9b) form_field_popup_pane_vc_ParamLimits

0xb67d,	// (0x0002ac9b) form_field_popup_pane_vc

0xb698,	// (0x0002acb6) form_field_popup_wide_pane_vc_ParamLimits

0xb698,	// (0x0002acb6) form_field_popup_wide_pane_vc

0xb6b2,	// (0x0002acd0) form_field_slider_pane_vc_ParamLimits

0xb6b2,	// (0x0002acd0) form_field_slider_pane_vc

0xb6c5,	// (0x0002ace3) form_field_slider_wide_pane_vc_ParamLimits

0xb6c5,	// (0x0002ace3) form_field_slider_wide_pane_vc

0xb6d8,	// (0x0002acf6) grid_touch_1_pane_ParamLimits

0xb6d8,	// (0x0002acf6) grid_touch_1_pane

0xb6e4,	// (0x0002ad02) grid_touch_2_pane_ParamLimits

0xb6e4,	// (0x0002ad02) grid_touch_2_pane

0x7656,	// (0x00026c74) touch_pane_g1_ParamLimits

0x7656,	// (0x00026c74) touch_pane_g1

0xb6fe,	// (0x0002ad1c) cell_app_pane_cp_wide_ParamLimits

0xb6fe,	// (0x0002ad1c) cell_app_pane_cp_wide

0xb70f,	// (0x0002ad2d) grid_popup_fast_wide_pane_ParamLimits

0xb70f,	// (0x0002ad2d) grid_popup_fast_wide_pane

0xb723,	// (0x0002ad41) scroll_pane_cp19_ParamLimits

0xb723,	// (0x0002ad41) scroll_pane_cp19

0x0c10,	// (0x0002022e) bg_popup_window_pane_cp20

0xb737,	// (0x0002ad55) listscroll_popup_fast_wide_pane

0x0c78,	// (0x00020296) grid_indicator_nsta_pane

0xb73f,	// (0x0002ad5d) clock_nsta_pane_g1

0xb748,	// (0x0002ad66) clock_nsta_pane_t1

0xb764,	// (0x0002ad82) cell_indicator_nsta_pane_ParamLimits

0xb764,	// (0x0002ad82) cell_indicator_nsta_pane

0xb796,	// (0x0002adb4) cell_indicator_nsta_pane_g1

0xb7a4,	// (0x0002adc2) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x0002f0bc) cell_indicator_nsta_pane_g

0xb7ba,	// (0x0002add8) clock_nsta_pane_cp

0xb7c2,	// (0x0002ade0) indicator_nsta_pane_cp

0xb7cb,	// (0x0002ade9) nsta_clock_indic_pane_g1

0x0cce,	// (0x000202ec) grid_indicator_pane

0x3318,	// (0x00022936) scroll_pane_cp29

0x6fe7,	// (0x00026605) indicator_nsta_pane_cp2_ParamLimits

0x6fe7,	// (0x00026605) indicator_nsta_pane_cp2

0x0c78,	// (0x00020296) main_apps_wheel_pane

0x8756,	// (0x00027d74) form_midp_field_text_pane_ParamLimits

0x9afb,	// (0x00029119) scroll_bar_cp050_ParamLimits

0xb834,	// (0x0002ae52) cell_indicator_pane_ParamLimits

0xb834,	// (0x0002ae52) cell_indicator_pane

0xb84c,	// (0x0002ae6a) cell_indicator_pane_g1

0xb856,	// (0x0002ae74) grid_wheel_folder_pane_ParamLimits

0xb856,	// (0x0002ae74) grid_wheel_folder_pane

0xb86a,	// (0x0002ae88) list_wheel_apps_pane_ParamLimits

0xb86a,	// (0x0002ae88) list_wheel_apps_pane

0xb87d,	// (0x0002ae9b) main_apps_wheel_pane_g1_ParamLimits

0xb87d,	// (0x0002ae9b) main_apps_wheel_pane_g1

0xb899,	// (0x0002aeb7) main_apps_wheel_pane_g2_ParamLimits

0xb899,	// (0x0002aeb7) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x0002f0d8) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x0002f0d8) main_apps_wheel_pane_g

0xb8b5,	// (0x0002aed3) main_apps_wheel_pane_t1_ParamLimits

0xb8b5,	// (0x0002aed3) main_apps_wheel_pane_t1

0xb8de,	// (0x0002aefc) list_wheel_apps_pane_g1

0xb8e6,	// (0x0002af04) list_wheel_apps_pane_g2

0xb8ee,	// (0x0002af0c) list_wheel_apps_pane_g3

0xb8f6,	// (0x0002af14) list_wheel_apps_pane_g4

0xb900,	// (0x0002af1e) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x0002f0dd) list_wheel_apps_pane_g

0x3698,	// (0x00022cb6) navi_icon_text_pane

0x7e4a,	// (0x00027468) aid_fill_nsta

0xb921,	// (0x0002af3f) navi_icon_text_pane_g1

0xb92d,	// (0x0002af4b) navi_icon_text_pane_t1

0x7130,	// (0x0002674e) list_set_graphic_pane_t1_ParamLimits

0x7130,	// (0x0002674e) list_set_graphic_pane_t1

0xa24c,	// (0x0002986a) popup_midp_note_alarm_window_t6_ParamLimits

0xa24c,	// (0x0002986a) popup_midp_note_alarm_window_t6

0xa25e,	// (0x0002987c) popup_midp_note_alarm_window_t7_ParamLimits

0xa25e,	// (0x0002987c) popup_midp_note_alarm_window_t7

0xa270,	// (0x0002988e) popup_midp_note_alarm_window_t8_ParamLimits

0xa270,	// (0x0002988e) popup_midp_note_alarm_window_t8

0xa282,	// (0x000298a0) popup_midp_note_alarm_window_t9_ParamLimits

0xa282,	// (0x000298a0) popup_midp_note_alarm_window_t9

0xa294,	// (0x000298b2) popup_midp_note_alarm_window_t10_ParamLimits

0xa294,	// (0x000298b2) popup_midp_note_alarm_window_t10

0xa2a6,	// (0x000298c4) popup_midp_note_alarm_window_t11_ParamLimits

0xa2a6,	// (0x000298c4) popup_midp_note_alarm_window_t11

0xa2b8,	// (0x000298d6) scroll_pane_cp17_ParamLimits

0xa2b8,	// (0x000298d6) scroll_pane_cp17

0x8799,	// (0x00027db7) volume_small_pane_cp_g1

0x8aaa,	// (0x000280c8) volume_small_pane_cp_g2

0x8ab3,	// (0x000280d1) volume_small_pane_cp_g3

0x8abc,	// (0x000280da) volume_small_pane_cp_g4

0x8ac5,	// (0x000280e3) volume_small_pane_cp_g5

0x8ace,	// (0x000280ec) volume_small_pane_cp_g6

0x8ad7,	// (0x000280f5) volume_small_pane_cp_g7

0x8ae0,	// (0x000280fe) volume_small_pane_cp_g8

0x8ae9,	// (0x00028107) volume_small_pane_cp_g9

0x8af2,	// (0x00028110) volume_small_pane_cp_g10

0x7373,	// (0x00026991) midp_ticker_pane_g1_ParamLimits

0x737f,	// (0x0002699d) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002ed71) midp_ticker_pane_g_ParamLimits

0x738b,	// (0x000269a9) midp_ticker_pane_t1_ParamLimits

0x7e60,	// (0x0002747e) aid_fill_nsta_2

0x9ae7,	// (0x00029105) list_form2_midp_pane

0xac4f,	// (0x0002a26d) midp_editing_number_pane_ParamLimits

0xac5e,	// (0x0002a27c) midp_ticker_pane_ParamLimits

0xb93f,	// (0x0002af5d) form2_midp_field_pane

0xb963,	// (0x0002af81) scroll_pane_cp51

0xb983,	// (0x0002afa1) form2_midp_button_pane_ParamLimits

0xb983,	// (0x0002afa1) form2_midp_button_pane

0xb995,	// (0x0002afb3) form2_midp_content_pane_ParamLimits

0xb995,	// (0x0002afb3) form2_midp_content_pane

0xb9af,	// (0x0002afcd) form2_midp_field_choice_group_pane

0xb9b7,	// (0x0002afd5) form2_midp_field_pane_g1

0xb9bf,	// (0x0002afdd) form2_midp_field_pane_g2

0xb9c7,	// (0x0002afe5) form2_midp_field_pane_g3

0xb9cf,	// (0x0002afed) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x0002f102) form2_midp_field_pane_g

0xb9d7,	// (0x0002aff5) form2_midp_gauge_slider_pane

0xb9df,	// (0x0002affd) form2_midp_gauge_wait_pane

0xb9e7,	// (0x0002b005) form2_midp_image_pane_ParamLimits

0xb9e7,	// (0x0002b005) form2_midp_image_pane

0xba02,	// (0x0002b020) form2_midp_label_pane_ParamLimits

0xba02,	// (0x0002b020) form2_midp_label_pane

0xba21,	// (0x0002b03f) form2_midp_label_pane_cp_ParamLimits

0xba21,	// (0x0002b03f) form2_midp_label_pane_cp

0xba42,	// (0x0002b060) form2_midp_string_pane_ParamLimits

0xba42,	// (0x0002b060) form2_midp_string_pane

0x5f37,	// (0x00025555) form2_midp_text_pane_ParamLimits

0x5f37,	// (0x00025555) form2_midp_text_pane

0xba54,	// (0x0002b072) form2_midp_time_pane

0xba64,	// (0x0002b082) input_focus_pane_cp51_ParamLimits

0xba64,	// (0x0002b082) input_focus_pane_cp51

0xba7c,	// (0x0002b09a) form2_midp_label_pane_t1_ParamLimits

0xba7c,	// (0x0002b09a) form2_midp_label_pane_t1

0x5f58,	// (0x00025576) form2_mdip_text_pane_t1_ParamLimits

0x5f58,	// (0x00025576) form2_mdip_text_pane_t1

0x5f7c,	// (0x0002559a) form2_midp_time_pane_t1

0xbaca,	// (0x0002b0e8) form2_midp_gauge_slider_pane_t1

0xbadc,	// (0x0002b0fa) form2_midp_gauge_slider_pane_t2

0xbaee,	// (0x0002b10c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x0002f10b) form2_midp_gauge_slider_pane_t

0xbb00,	// (0x0002b11e) form2_midp_slider_pane

0xbb0c,	// (0x0002b12a) form2_midp_gauge_wait_pane_t1

0xbb1a,	// (0x0002b138) form2_midp_wait_pane_ParamLimits

0xbb1a,	// (0x0002b138) form2_midp_wait_pane

0x85b6,	// (0x00027bd4) list_single_2graphic_pane_cp4_ParamLimits

0x85b6,	// (0x00027bd4) list_single_2graphic_pane_cp4

0xbb45,	// (0x0002b163) list_single_midp_graphic_pane_cp_ParamLimits

0xbb45,	// (0x0002b163) list_single_midp_graphic_pane_cp

0x0c10,	// (0x0002022e) list_highlight_pane_cp20

0xbb69,	// (0x0002b187) list_single_2graphic_pane_g1_cp4

0xb106,	// (0x0002a724) list_single_2graphic_pane_g2_cp4

0xbb71,	// (0x0002b18f) list_single_2graphic_pane_t1_cp4

0x0c78,	// (0x00020296) list_highlight_pane_cp21

0xbb80,	// (0x0002b19e) list_single_midp_graphic_pane_g4_cp

0xbb8f,	// (0x0002b1ad) list_single_midp_graphic_pane_t1_cp

0xbba4,	// (0x0002b1c2) form2_mdip_string_pane_t1_ParamLimits

0xbba4,	// (0x0002b1c2) form2_mdip_string_pane_t1

0x0c10,	// (0x0002022e) bg_wml_button_pane_cp2

0x0c06,	// (0x00020224) form2_midp_image_pane_g1

0x545d,	// (0x00024a7b) list_double_large_graphic_pane_g5_ParamLimits

0x545d,	// (0x00024a7b) list_double_large_graphic_pane_g5

0x6b3f,	// (0x0002615d) midp_form_pane_ParamLimits

0x0c78,	// (0x00020296) main_apps_wheel_pane_ParamLimits

0x7bf4,	// (0x00027212) popup_preview_window_ParamLimits

0x7bf4,	// (0x00027212) popup_preview_window

0x7ddb,	// (0x000273f9) popup_touch_info_window_ParamLimits

0x7ddb,	// (0x000273f9) popup_touch_info_window

0x7dfd,	// (0x0002741b) popup_touch_menu_window_ParamLimits

0x7dfd,	// (0x0002741b) popup_touch_menu_window

0x0bfc,	// (0x0002021a) bg_popup_sub_pane_cp6

0xbc49,	// (0x0002b267) list_touch_menu_pane

0xbc51,	// (0x0002b26f) list_single_touch_menu_pane_ParamLimits

0xbc51,	// (0x0002b26f) list_single_touch_menu_pane

0xbc69,	// (0x0002b287) list_single_touch_menu_pane_t1

0x0c78,	// (0x00020296) bg_popup_sub_pane_cp7_ParamLimits

0x0c78,	// (0x00020296) bg_popup_sub_pane_cp7

0xbc77,	// (0x0002b295) heading_sub_pane

0xbc7f,	// (0x0002b29d) list_touch_info_pane_ParamLimits

0xbc7f,	// (0x0002b29d) list_touch_info_pane

0xbc8e,	// (0x0002b2ac) list_single_touch_info_pane_ParamLimits

0xbc8e,	// (0x0002b2ac) list_single_touch_info_pane

0xbca0,	// (0x0002b2be) list_single_touch_info_pane_t1

0xbcae,	// (0x0002b2cc) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x0002f119) list_single_touch_info_pane_t

0x72a2,	// (0x000268c0) bg_popup_heading_pane_cp

0xbcbc,	// (0x0002b2da) heading_sub_pane_t1

0x846f,	// (0x00027a8d) bg_popup_preview_window_pane_cp_ParamLimits

0x846f,	// (0x00027a8d) bg_popup_preview_window_pane_cp

0xbc77,	// (0x0002b295) heading_preview_pane

0xbc7f,	// (0x0002b29d) list_preview_pane_ParamLimits

0xbc7f,	// (0x0002b29d) list_preview_pane

0xbcca,	// (0x0002b2e8) popup_preview_window_g1

0xbc8e,	// (0x0002b2ac) list_single_preview_pane_ParamLimits

0xbc8e,	// (0x0002b2ac) list_single_preview_pane

0xbcd2,	// (0x0002b2f0) list_single_preview_pane_g1

0xbcda,	// (0x0002b2f8) list_single_preview_pane_t1

0xbca0,	// (0x0002b2be) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x0002f11e) list_single_preview_pane_t

0xbce8,	// (0x0002b306) bg_popup_heading_pane_cp2_ParamLimits

0xbce8,	// (0x0002b306) bg_popup_heading_pane_cp2

0xbcfe,	// (0x0002b31c) heading_preview_pane_g1

0xbd06,	// (0x0002b324) heading_preview_pane_t1_ParamLimits

0xbd06,	// (0x0002b324) heading_preview_pane_t1

0x0ce5,	// (0x00020303) soft_indicator_pane_t1_ParamLimits

0x121a,	// (0x00020838) scroll_pane_ParamLimits

0x321d,	// (0x0002283b) scroll_sc2_left_pane

0x3214,	// (0x00022832) scroll_sc2_right_pane

0x323c,	// (0x0002285a) scroll_bg_pane_g1_ParamLimits

0x3251,	// (0x0002286f) scroll_bg_pane_g2_ParamLimits

0x3269,	// (0x00022887) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002ecfc) scroll_bg_pane_g_ParamLimits

0x323c,	// (0x0002285a) scroll_handle_pane_g1_ParamLimits

0x328b,	// (0x000228a9) scroll_handle_pane_g2_ParamLimits

0x3269,	// (0x00022887) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002ed03) scroll_handle_pane_g_ParamLimits

0x783b,	// (0x00026e59) popup_choice_list_window_ParamLimits

0x783b,	// (0x00026e59) popup_choice_list_window

0x829e,	// (0x000278bc) choice_list_pane

0x8350,	// (0x0002796e) cell_toolbar_pane_t1

0x8378,	// (0x00027996) toolbar_button_pane_ParamLimits

0xa782,	// (0x00029da0) ai_gene_pane_1_t2_ParamLimits

0xa782,	// (0x00029da0) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002ef2b) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002ef2b) ai_gene_pane_1_t

0xbd23,	// (0x0002b341) scroll_sc2_left_pane_g1

0xbd23,	// (0x0002b341) scroll_sc2_right_pane_g1

0x7813,	// (0x00026e31) bg_popup_sub_pane_cp10

0xbd2d,	// (0x0002b34b) list_choice_list_pane

0xbd46,	// (0x0002b364) list_single_choice_list_pane_ParamLimits

0xbd46,	// (0x0002b364) list_single_choice_list_pane

0xbd5e,	// (0x0002b37c) list_single_choice_list_pane_g1

0x2eb3,	// (0x000224d1) list_single_choice_list_pane_t1_ParamLimits

0x2eb3,	// (0x000224d1) list_single_choice_list_pane_t1

0xbd66,	// (0x0002b384) choice_list_pane_g1

0xbd6e,	// (0x0002b38c) choice_list_pane_t1

0x0bfc,	// (0x0002021a) input_focus_pane_cp11

0x3081,	// (0x0002269f) title_pane_stacon_g2_ParamLimits

0x3081,	// (0x0002269f) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002ece2) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002ece2) title_pane_stacon_g

0x72a2,	// (0x000268c0) cursor_press_pane

0x78f5,	// (0x00026f13) popup_fep_hwr_window_ParamLimits

0x78f5,	// (0x00026f13) popup_fep_hwr_window

0x797f,	// (0x00026f9d) popup_fep_vkb_window_ParamLimits

0x797f,	// (0x00026f9d) popup_fep_vkb_window

0xbd7c,	// (0x0002b39a) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x0002f147) fep_vkb_side_pane_g_ParamLimits

0x8b26,	// (0x00028144) fep_hwr_candidate_pane_ParamLimits

0x8b26,	// (0x00028144) fep_hwr_candidate_pane

0x8b50,	// (0x0002816e) fep_hwr_side_pane_ParamLimits

0x8b50,	// (0x0002816e) fep_hwr_side_pane

0x8b72,	// (0x00028190) fep_hwr_top_pane_ParamLimits

0x8b72,	// (0x00028190) fep_hwr_top_pane

0x8b8a,	// (0x000281a8) fep_hwr_write_pane_ParamLimits

0x8b8a,	// (0x000281a8) fep_hwr_write_pane

0xfb29,	// (0x0002f147) fep_vkb_side_pane_g

0xbd84,	// (0x0002b3a2) fep_hwr_top_pane_g1

0xbd96,	// (0x0002b3b4) fep_hwr_top_pane_g2

0x8bb6,	// (0x000281d4) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x0002f123) fep_hwr_top_pane_g

0x8bcb,	// (0x000281e9) fep_hwr_top_text_pane

0x3385,	// (0x000229a3) fep_hwr_top_text_pane_g1

0xbdcc,	// (0x0002b3ea) fep_hwr_top_text_pane_t1

0x8cd5,	// (0x000282f3) fep_hwr_candidate_pane_g1

0xc017,	// (0x0002b635) fep_vkb_keypad_pane_g3_ParamLimits

0xc017,	// (0x0002b635) fep_vkb_keypad_pane_g3

0xc043,	// (0x0002b661) fep_vkb_keypad_pane_g4_ParamLimits

0xc043,	// (0x0002b661) fep_vkb_keypad_pane_g4

0xc0ba,	// (0x0002b6d8) fep_vkb_bottom_pane_g2_ParamLimits

0xc0ba,	// (0x0002b6d8) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x0002f14e) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x0002f14e) fep_vkb_bottom_pane_g

0xbd23,	// (0x0002b341) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x0002f158) cell_vkb_side_pane_g

0xc145,	// (0x0002b763) cell_vkb_side_pane_t1

0xc153,	// (0x0002b771) cell_vkb_side_pane_t1_copy1

0xbd23,	// (0x0002b341) bg_fep_vkb_candidate_pane_g2

0xc297,	// (0x0002b8b5) cell_vkb_candidate_pane_ParamLimits

0xbdda,	// (0x0002b3f8) aid_size_cell_vkb_ParamLimits

0xbdda,	// (0x0002b3f8) aid_size_cell_vkb

0xc297,	// (0x0002b8b5) cell_vkb_candidate_pane

0x8cef,	// (0x0002830d) bg_popup_fep_shadow_pane_g1

0xbe6c,	// (0x0002b48a) fep_vkb_bottom_pane_ParamLimits

0xbe6c,	// (0x0002b48a) fep_vkb_bottom_pane

0xbea9,	// (0x0002b4c7) fep_vkb_candidate_pane_ParamLimits

0xbea9,	// (0x0002b4c7) fep_vkb_candidate_pane

0xbec5,	// (0x0002b4e3) fep_vkb_keypad_pane_ParamLimits

0xbec5,	// (0x0002b4e3) fep_vkb_keypad_pane

0xbef8,	// (0x0002b516) fep_vkb_side_pane_ParamLimits

0xbef8,	// (0x0002b516) fep_vkb_side_pane

0xbf34,	// (0x0002b552) fep_vkb_top_pane_ParamLimits

0xbf34,	// (0x0002b552) fep_vkb_top_pane

0xbf70,	// (0x0002b58e) fep_vkb_top_pane_g1_ParamLimits

0xbf70,	// (0x0002b58e) fep_vkb_top_pane_g1

0xbf7f,	// (0x0002b59d) fep_vkb_top_pane_g2_ParamLimits

0xbf7f,	// (0x0002b59d) fep_vkb_top_pane_g2

0xbf8e,	// (0x0002b5ac) fep_vkb_top_pane_g3_ParamLimits

0xbf8e,	// (0x0002b5ac) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x0002f13e) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x0002f13e) fep_vkb_top_pane_g

0xbfac,	// (0x0002b5ca) fep_vkb_top_text_pane_ParamLimits

0xbfac,	// (0x0002b5ca) fep_vkb_top_text_pane

0xbfbd,	// (0x0002b5db) fep_vkb_side_pane_g1_ParamLimits

0xbfbd,	// (0x0002b5db) fep_vkb_side_pane_g1

0xc006,	// (0x0002b624) grid_vkb_side_pane_ParamLimits

0xc006,	// (0x0002b624) grid_vkb_side_pane

0x8cf7,	// (0x00028315) bg_popup_fep_shadow_pane_g2

0x8d00,	// (0x0002831e) bg_popup_fep_shadow_pane_g3

0x8d08,	// (0x00028326) bg_popup_fep_shadow_pane_g4

0x8d11,	// (0x0002832f) bg_popup_fep_shadow_pane_g5

0x8d1b,	// (0x00028339) bg_popup_fep_shadow_pane_g6

0x8d23,	// (0x00028341) bg_popup_fep_shadow_pane_g7

0x2dae,	// (0x000223cc) bg_popup_fep_shadow_pane_g8

0xc065,	// (0x0002b683) grid_vkb_keypad_number_pane_ParamLimits

0xc065,	// (0x0002b683) grid_vkb_keypad_number_pane

0xc079,	// (0x0002b697) grid_vkb_keypad_pane_ParamLimits

0xc079,	// (0x0002b697) grid_vkb_keypad_pane

0xc09f,	// (0x0002b6bd) fep_vkb_bottom_pane_g1_ParamLimits

0xc09f,	// (0x0002b6bd) fep_vkb_bottom_pane_g1

0xc0c8,	// (0x0002b6e6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc0c8,	// (0x0002b6e6) grid_vkb_keypad_bottom_left_pane

0xc0dd,	// (0x0002b6fb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc0dd,	// (0x0002b6fb) grid_vkb_keypad_bottom_right_pane

0xc0f2,	// (0x0002b710) fep_vkb_top_text_pane_g1

0xc10d,	// (0x0002b72b) fep_vkb_top_text_pane_t1

0xc122,	// (0x0002b740) cell_vkb_side_pane_ParamLimits

0xc122,	// (0x0002b740) cell_vkb_side_pane

0xbd23,	// (0x0002b341) cell_vkb_side_pane_g1

0xc161,	// (0x0002b77f) cell_vkb_keypad_pane_ParamLimits

0xc161,	// (0x0002b77f) cell_vkb_keypad_pane

0xc1ee,	// (0x0002b80c) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x0002f16b) bg_popup_fep_shadow_pane_g

0xbd23,	// (0x0002b341) cell_hwr_side_pane_g1

0xbd23,	// (0x0002b341) cell_hwr_side_pane_g2

0xc1f8,	// (0x0002b816) cell_vkb_keypad_pane_t1

0xc206,	// (0x0002b824) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc206,	// (0x0002b824) cell_vkb_keypad_bottom_left_pane

0xc223,	// (0x0002b841) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc223,	// (0x0002b841) cell_vkb_keypad_bottom_right_pane

0xbd23,	// (0x0002b341) cell_vkb_keypad_bottom_left_pane_g1

0xbd23,	// (0x0002b341) cell_vkb_keypad_bottom_right_pane_g1

0xc25c,	// (0x0002b87a) cell_vkb_keypad_number_pane_ParamLimits

0xc25c,	// (0x0002b87a) cell_vkb_keypad_number_pane

0xc27b,	// (0x0002b899) cell_vkb_keypad_number_pane_g1

0xc285,	// (0x0002b8a3) cell_vkb_keypad_number_pane_g2

0xc28e,	// (0x0002b8ac) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x0002f15d) cell_vkb_keypad_number_pane_g

0xc1f8,	// (0x0002b816) cell_vkb_keypad_number_pane_t1

0xc2b8,	// (0x0002b8d6) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x0002f158) cell_hwr_side_pane_g

0xc2d1,	// (0x0002b8ef) cell_hwr_side_pane_t1

0x8d35,	// (0x00028353) cell_hwr_side_pane_t1_copy1

0xbf9e,	// (0x0002b5bc) cell_hwr_candidate_pane_g1

0x8d43,	// (0x00028361) cell_hwr_candidate_pane_t1

0xbd23,	// (0x0002b341) cell_vkb_candidate_pane_g2

0xc357,	// (0x0002b975) cell_vkb_candidate_pane_t1

0xf540,	// (0x0002eb5e) bg_popup_fep_shadow_pane_ParamLimits

0xf540,	// (0x0002eb5e) bg_popup_fep_shadow_pane

0x0bcc,	// (0x000201ea) bg_fep_hwr_top_pane_g4

0xbda8,	// (0x0002b3c6) bg_hwr_side_pane_g1_ParamLimits

0xbda8,	// (0x0002b3c6) bg_hwr_side_pane_g1

0x8c09,	// (0x00028227) cell_hwr_side_pane_ParamLimits

0x8c09,	// (0x00028227) cell_hwr_side_pane

0x8c46,	// (0x00028264) fep_hwr_write_pane_g1_ParamLimits

0x8c46,	// (0x00028264) fep_hwr_write_pane_g1

0x8c53,	// (0x00028271) fep_hwr_write_pane_g2_ParamLimits

0x8c53,	// (0x00028271) fep_hwr_write_pane_g2

0x8c60,	// (0x0002827e) fep_hwr_write_pane_g3_ParamLimits

0x8c60,	// (0x0002827e) fep_hwr_write_pane_g3

0x8c6e,	// (0x0002828c) fep_hwr_write_pane_g4_ParamLimits

0x8c6e,	// (0x0002828c) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x0002f12a) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x0002f12a) fep_hwr_write_pane_g

0x0bcc,	// (0x000201ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0bcc,	// (0x000201ea) bg_fep_hwr_candidate_pane_g2

0x8c83,	// (0x000282a1) cell_hwr_candidate_pane_ParamLimits

0x8c83,	// (0x000282a1) cell_hwr_candidate_pane

0x8cd5,	// (0x000282f3) fep_hwr_candidate_pane_g1_ParamLimits

0xbe08,	// (0x0002b426) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbe08,	// (0x0002b426) bg_popup_fep_shadow_pane_cp2

0xbf9e,	// (0x0002b5bc) fep_vkb_top_pane_g4_ParamLimits

0xbf9e,	// (0x0002b5bc) fep_vkb_top_pane_g4

0xbfe4,	// (0x0002b602) fep_vkb_side_pane_g2_ParamLimits

0xbfe4,	// (0x0002b602) fep_vkb_side_pane_g2

0x55c6,	// (0x00024be4) list_setting_pane_t4_ParamLimits

0x55c6,	// (0x00024be4) list_setting_pane_t4

0x5662,	// (0x00024c80) list_setting_number_pane_t5_ParamLimits

0x5662,	// (0x00024c80) list_setting_number_pane_t5

0x6e24,	// (0x00026442) list_double_heading_pane_cp2_ParamLimits

0x6e24,	// (0x00026442) list_double_heading_pane_cp2

0xc365,	// (0x0002b983) list_double_heading_pane_g1_cp2_ParamLimits

0xc365,	// (0x0002b983) list_double_heading_pane_g1_cp2

0xc371,	// (0x0002b98f) list_double_heading_pane_g2_cp2_ParamLimits

0xc371,	// (0x0002b98f) list_double_heading_pane_g2_cp2

0xc385,	// (0x0002b9a3) list_double_heading_pane_t1_cp2_ParamLimits

0xc385,	// (0x0002b9a3) list_double_heading_pane_t1_cp2

0xc39b,	// (0x0002b9b9) list_double_heading_pane_t2_cp2_ParamLimits

0xc39b,	// (0x0002b9b9) list_double_heading_pane_t2_cp2

0x0bf4,	// (0x00020212) aid_value_unit2

0x662b,	// (0x00025c49) popup_preview_fixed_window

0x0dc5,	// (0x000203e3) bg_popup_preview_window_pane_cp02

0xc3ad,	// (0x0002b9cb) list_preview_fixed_pane

0xc3f3,	// (0x0002ba11) list_empty_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_empty_pane_fp

0xc3f3,	// (0x0002ba11) list_single_cale_day_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_single_cale_day_pane_fp

0xc3f3,	// (0x0002ba11) list_single_graphic_heading_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_single_graphic_heading_pane_fp

0xc3f3,	// (0x0002ba11) list_single_graphic_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_single_graphic_pane_fp

0xc3f3,	// (0x0002ba11) list_single_heading_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_single_heading_pane_fp

0xc3f3,	// (0x0002ba11) list_single_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_single_pane_fp

0xc40c,	// (0x0002ba2a) list_single_pane_fp_g1_ParamLimits

0xc40c,	// (0x0002ba2a) list_single_pane_fp_g1

0x5f8f,	// (0x000255ad) list_single_pane_fp_g2_ParamLimits

0x5f8f,	// (0x000255ad) list_single_pane_fp_g2

0x5f9b,	// (0x000255b9) list_single_pane_fp_g3_ParamLimits

0x5f9b,	// (0x000255b9) list_single_pane_fp_g3

0xc418,	// (0x0002ba36) list_single_pane_fp_g4_ParamLimits

0xc418,	// (0x0002ba36) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0002f18c) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002f18c) list_single_pane_fp_g

0x5faf,	// (0x000255cd) list_single_pane_fp_t1_ParamLimits

0x5faf,	// (0x000255cd) list_single_pane_fp_t1

0x5fc6,	// (0x000255e4) list_single_graphic_pane_fp_g1_ParamLimits

0x5fc6,	// (0x000255e4) list_single_graphic_pane_fp_g1

0xc40c,	// (0x0002ba2a) list_single_graphic_pane_fp_g2_ParamLimits

0xc40c,	// (0x0002ba2a) list_single_graphic_pane_fp_g2

0x5f8f,	// (0x000255ad) list_single_graphic_pane_fp_g3_ParamLimits

0x5f8f,	// (0x000255ad) list_single_graphic_pane_fp_g3

0x5f9b,	// (0x000255b9) list_single_graphic_pane_fp_g4_ParamLimits

0x5f9b,	// (0x000255b9) list_single_graphic_pane_fp_g4

0xc418,	// (0x0002ba36) list_single_graphic_pane_fp_g5_ParamLimits

0xc418,	// (0x0002ba36) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f195) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f195) list_single_graphic_pane_fp_g

0x5fd2,	// (0x000255f0) list_single_graphic_pane_fp_t1_ParamLimits

0x5fd2,	// (0x000255f0) list_single_graphic_pane_fp_t1

0x5fc6,	// (0x000255e4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5fc6,	// (0x000255e4) list_single_graphic_heading_pane_fp_g1

0xc40c,	// (0x0002ba2a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc40c,	// (0x0002ba2a) list_single_graphic_heading_pane_fp_g2

0x5f8f,	// (0x000255ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5f8f,	// (0x000255ad) list_single_graphic_heading_pane_fp_g3

0x5f9b,	// (0x000255b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5f9b,	// (0x000255b9) list_single_graphic_heading_pane_fp_g4

0xc418,	// (0x0002ba36) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc418,	// (0x0002ba36) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f195) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f195) list_single_graphic_heading_pane_fp_g

0x5fe8,	// (0x00025606) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5fe8,	// (0x00025606) list_single_graphic_heading_pane_fp_t1

0x5ffe,	// (0x0002561c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5ffe,	// (0x0002561c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0002f1a0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0002f1a0) list_single_graphic_heading_pane_fp_t

0x6010,	// (0x0002562e) list_single_cale_day_pane_fp_g1_ParamLimits

0x6010,	// (0x0002562e) list_single_cale_day_pane_fp_g1

0xc424,	// (0x0002ba42) list_single_cale_day_pane_fp_g2_ParamLimits

0xc424,	// (0x0002ba42) list_single_cale_day_pane_fp_g2

0x6048,	// (0x00025666) list_single_cale_day_pane_fp_g3_ParamLimits

0x6048,	// (0x00025666) list_single_cale_day_pane_fp_g3

0x6070,	// (0x0002568e) list_single_cale_day_pane_fp_g4_ParamLimits

0x6070,	// (0x0002568e) list_single_cale_day_pane_fp_g4

0x6094,	// (0x000256b2) list_single_cale_day_pane_fp_g5_ParamLimits

0x6094,	// (0x000256b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0002f1a5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0002f1a5) list_single_cale_day_pane_fp_g

0x60b8,	// (0x000256d6) list_single_cale_day_pane_fp_t1_ParamLimits

0x60b8,	// (0x000256d6) list_single_cale_day_pane_fp_t1

0x60de,	// (0x000256fc) list_single_cale_day_pane_fp_t2_ParamLimits

0x60de,	// (0x000256fc) list_single_cale_day_pane_fp_t2

0x60f7,	// (0x00025715) list_single_cale_day_pane_fp_t3_ParamLimits

0x60f7,	// (0x00025715) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0002f1b0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0002f1b0) list_single_cale_day_pane_fp_t

0xc40c,	// (0x0002ba2a) list_empty_pane_fp_g1_ParamLimits

0xc40c,	// (0x0002ba2a) list_empty_pane_fp_g1

0x6110,	// (0x0002572e) list_empty_pane_fp_t1

0x611e,	// (0x0002573c) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0002f1b7) list_empty_pane_fp_t

0xc40c,	// (0x0002ba2a) list_single_heading_pane_fp_g1_ParamLimits

0xc40c,	// (0x0002ba2a) list_single_heading_pane_fp_g1

0x5f8f,	// (0x000255ad) list_single_heading_pane_fp_g2_ParamLimits

0x5f8f,	// (0x000255ad) list_single_heading_pane_fp_g2

0x5f9b,	// (0x000255b9) list_single_heading_pane_fp_g3_ParamLimits

0x5f9b,	// (0x000255b9) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0002f1bc) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0002f1bc) list_single_heading_pane_fp_g

0x612c,	// (0x0002574a) list_single_heading_pane_fp_t1_ParamLimits

0x612c,	// (0x0002574a) list_single_heading_pane_fp_t1

0x613e,	// (0x0002575c) list_single_heading_pane_fp_t2_ParamLimits

0x613e,	// (0x0002575c) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002f1c3) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002f1c3) list_single_heading_pane_fp_t

0x2ec8,	// (0x000224e6) aid_size_cell_fast

0x0da8,	// (0x000203c6) soft_indicator_pane_cp1_t1

0x2f05,	// (0x00022523) cell_app_pane_cp2_ParamLimits

0x2f05,	// (0x00022523) cell_app_pane_cp2

0x8b0f,	// (0x0002812d) fep_hwr_candidate_drop_down_list_pane

0x0bda,	// (0x000201f8) fep_hwr_candidate_pane_g3_ParamLimits

0x0bda,	// (0x000201f8) fep_hwr_candidate_pane_g3

0x0be7,	// (0x00020205) fep_hwr_candidate_pane_g4_ParamLimits

0x0be7,	// (0x00020205) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x0002f137) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x0002f137) fep_hwr_candidate_pane_g

0xbe98,	// (0x0002b4b6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe98,	// (0x0002b4b6) fep_vkb_candidate_drop_down_list_pane

0xc2c0,	// (0x0002b8de) fep_vkb_candidate_pane_g3

0xc2c8,	// (0x0002b8e6) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002f164) fep_vkb_candidate_pane_g

0xbf9e,	// (0x0002b5bc) cell_hwr_candidate_pane_g1_ParamLimits

0xc2df,	// (0x0002b8fd) cell_hwr_candidate_pane_g3_ParamLimits

0xc2df,	// (0x0002b8fd) cell_hwr_candidate_pane_g3

0xc300,	// (0x0002b91e) cell_hwr_candidate_pane_g4_ParamLimits

0xc300,	// (0x0002b91e) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0002f17e) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0002f17e) cell_hwr_candidate_pane_g

0xc321,	// (0x0002b93f) cell_vkb_candidate_pane_g3_ParamLimits

0xc321,	// (0x0002b93f) cell_vkb_candidate_pane_g3

0xc33c,	// (0x0002b95a) cell_vkb_candidate_pane_g4_ParamLimits

0xc33c,	// (0x0002b95a) cell_vkb_candidate_pane_g4

0xc430,	// (0x0002ba4e) cell_app_pane_cp2_g1_ParamLimits

0xc430,	// (0x0002ba4e) cell_app_pane_cp2_g1

0xc44e,	// (0x0002ba6c) cell_app_pane_cp2_g2_ParamLimits

0xc44e,	// (0x0002ba6c) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0002f1c8) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0002f1c8) cell_app_pane_cp2_g

0xc45a,	// (0x0002ba78) cell_app_pane_cp2_t1_ParamLimits

0xc45a,	// (0x0002ba78) cell_app_pane_cp2_t1

0x2cc5,	// (0x000222e3) grid_highlight_pane_cp1_ParamLimits

0x2cc5,	// (0x000222e3) grid_highlight_pane_cp1

0x8d61,	// (0x0002837f) cell_hwr_candidate_pane_cp1_ParamLimits

0x8d61,	// (0x0002837f) cell_hwr_candidate_pane_cp1

0xbf9e,	// (0x0002b5bc) fep_hwr_candidate_drop_down_list_pane_g1

0xc46c,	// (0x0002ba8a) fep_hwr_candidate_drop_down_list_pane_g2

0xc479,	// (0x0002ba97) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002f1cd) fep_hwr_candidate_drop_down_list_pane_g

0x8d85,	// (0x000283a3) fep_hwr_candidate_drop_down_list_scroll_pane

0x8d8e,	// (0x000283ac) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8d8e,	// (0x000283ac) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8d9b,	// (0x000283b9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8d9b,	// (0x000283b9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8da8,	// (0x000283c6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8da8,	// (0x000283c6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc321,	// (0x0002b93f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc321,	// (0x0002b93f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc33c,	// (0x0002b95a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc33c,	// (0x0002b95a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8db5,	// (0x000283d3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8db5,	// (0x000283d3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8dd0,	// (0x000283ee) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8dd0,	// (0x000283ee) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8deb,	// (0x00028409) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8deb,	// (0x00028409) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0002f1d4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0002f1d4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc486,	// (0x0002baa4) cell_vkb_candidate_pane_cp1_ParamLimits

0xc486,	// (0x0002baa4) cell_vkb_candidate_pane_cp1

0xbf9e,	// (0x0002b5bc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) fep_vkb_candidate_drop_down_list_pane_g1

0xc46c,	// (0x0002ba8a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc46c,	// (0x0002ba8a) fep_vkb_candidate_drop_down_list_pane_g2

0xc479,	// (0x0002ba97) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc479,	// (0x0002ba97) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002f1cd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x0002f1cd) fep_vkb_candidate_drop_down_list_pane_g

0xc4ac,	// (0x0002baca) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc4ac,	// (0x0002baca) fep_vkb_candidate_drop_down_list_scroll_pane

0xc4b9,	// (0x0002bad7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc4b9,	// (0x0002bad7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc4c6,	// (0x0002bae4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc4c6,	// (0x0002bae4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc4d2,	// (0x0002baf0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc4d2,	// (0x0002baf0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc2df,	// (0x0002b8fd) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2df,	// (0x0002b8fd) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc300,	// (0x0002b91e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc300,	// (0x0002b91e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc4de,	// (0x0002bafc) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc4de,	// (0x0002bafc) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc4ff,	// (0x0002bb1d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc4ff,	// (0x0002bb1d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc520,	// (0x0002bb3e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc520,	// (0x0002bb3e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0002f1e5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0002f1e5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x674b,	// (0x00025d69) title_pane_g1_ParamLimits

0x6758,	// (0x00025d76) title_pane_g2_ParamLimits

0xf54e,	// (0x0002eb6c) title_pane_g_ParamLimits

0x337d,	// (0x0002299b) aid_call2_pane

0x3375,	// (0x00022993) aid_call_pane

0x3385,	// (0x000229a3) popup_clock_analogue_window_g1

0x3385,	// (0x000229a3) popup_clock_analogue_window_g2

0x6e05,	// (0x00026423) popup_clock_analogue_window_g3

0x6e0e,	// (0x0002642c) popup_clock_analogue_window_g4

0x0c06,	// (0x00020224) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002ed11) popup_clock_analogue_window_g

0x6e16,	// (0x00026434) popup_clock_analogue_window_t1

0x6e57,	// (0x00026475) clock_digital_number_pane_ParamLimits

0x6e57,	// (0x00026475) clock_digital_number_pane

0x6e63,	// (0x00026481) clock_digital_number_pane_cp02_ParamLimits

0x6e63,	// (0x00026481) clock_digital_number_pane_cp02

0x6e6f,	// (0x0002648d) clock_digital_number_pane_cp03_ParamLimits

0x6e6f,	// (0x0002648d) clock_digital_number_pane_cp03

0x6e7b,	// (0x00026499) clock_digital_number_pane_cp04_ParamLimits

0x6e7b,	// (0x00026499) clock_digital_number_pane_cp04

0x6e87,	// (0x000264a5) clock_digital_separator_pane_ParamLimits

0x6e87,	// (0x000264a5) clock_digital_separator_pane

0x6e93,	// (0x000264b1) popup_clock_digital_window_t1_ParamLimits

0x6e93,	// (0x000264b1) popup_clock_digital_window_t1

0x0c06,	// (0x00020224) clock_digital_number_pane_g1

0x0c06,	// (0x00020224) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002ed1c) clock_digital_number_pane_g

0x0c06,	// (0x00020224) clock_digital_separator_pane_g1

0x0c06,	// (0x00020224) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002ed1c) clock_digital_separator_pane_g

0x7e4a,	// (0x00027468) aid_fill_nsta_ParamLimits

0x7f9a,	// (0x000275b8) indicator_nsta_pane_ParamLimits

0x812b,	// (0x00027749) popup_clock_analogue_window

0x812b,	// (0x00027749) popup_clock_digital_window

0x0c78,	// (0x00020296) grid_indicator_nsta_pane_ParamLimits

0xb756,	// (0x0002ad74) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x0002f0b7) clock_nsta_pane_t

0x6d6e,	// (0x0002638c) aid_size_max_handle

0x6d78,	// (0x00026396) aid_size_min_handle

0x72a2,	// (0x000268c0) editor_scroll_pane

0xc53b,	// (0x0002bb59) ex_editor_pane

0x2e8e,	// (0x000224ac) scroll_pane_cp13

0x1246,	// (0x00020864) scroll_pane_cp14

0x33b4,	// (0x000229d2) scroll_pane_cp36

0x6e3a,	// (0x00026458) list_single_graphic_hl_pane_cp2_ParamLimits

0x6e3a,	// (0x00026458) list_single_graphic_hl_pane_cp2

0x5bc4,	// (0x000251e2) list_single_graphic_hl_pane_ParamLimits

0x5bc4,	// (0x000251e2) list_single_graphic_hl_pane

0x6154,	// (0x00025772) aid_size_min_hl_cp1

0xc543,	// (0x0002bb61) list_highlight_pane_cp34_ParamLimits

0xc543,	// (0x0002bb61) list_highlight_pane_cp34

0xc554,	// (0x0002bb72) list_single_graphic_hl_pane_g1_ParamLimits

0xc554,	// (0x0002bb72) list_single_graphic_hl_pane_g1

0x615d,	// (0x0002577b) list_single_graphic_hl_pane_g2_ParamLimits

0x615d,	// (0x0002577b) list_single_graphic_hl_pane_g2

0x615d,	// (0x0002577b) list_single_graphic_hl_pane_g3_ParamLimits

0x615d,	// (0x0002577b) list_single_graphic_hl_pane_g3

0x59b0,	// (0x00024fce) list_single_graphic_hl_pane_g4_ParamLimits

0x59b0,	// (0x00024fce) list_single_graphic_hl_pane_g4

0x6169,	// (0x00025787) list_single_graphic_hl_pane_g5_ParamLimits

0x6169,	// (0x00025787) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x0002f1f6) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x0002f1f6) list_single_graphic_hl_pane_g

0x617d,	// (0x0002579b) list_single_graphic_hl_pane_t1_ParamLimits

0x617d,	// (0x0002579b) list_single_graphic_hl_pane_t1

0xc561,	// (0x0002bb7f) aid_size_min_hl_cp2

0xc56a,	// (0x0002bb88) list_highlight_pane_cp34_cp2_ParamLimits

0xc56a,	// (0x0002bb88) list_highlight_pane_cp34_cp2

0xc554,	// (0x0002bb72) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc554,	// (0x0002bb72) list_single_graphic_hl_pane_g1_cp2

0xc577,	// (0x0002bb95) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc577,	// (0x0002bb95) list_single_graphic_hl_pane_g2_cp2

0xc583,	// (0x0002bba1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc583,	// (0x0002bba1) list_single_graphic_hl_pane_g3_cp2

0x1267,	// (0x00020885) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1267,	// (0x00020885) list_single_graphic_hl_pane_g4_cp2

0xc591,	// (0x0002bbaf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc591,	// (0x0002bbaf) list_single_graphic_hl_pane_g5_cp2

0x7664,	// (0x00026c82) control_pane_g4_ParamLimits

0x7664,	// (0x00026c82) control_pane_g4

0x7813,	// (0x00026e31) bg_popup_sub_pane_cp10_ParamLimits

0xbd2d,	// (0x0002b34b) list_choice_list_pane_ParamLimits

0xbd3c,	// (0x0002b35a) scroll_pane_cp23

0x0dc5,	// (0x000203e3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3ad,	// (0x0002b9cb) list_preview_fixed_pane_ParamLimits

0xc3c3,	// (0x0002b9e1) list_preview_fixed_pane_cp_ParamLimits

0xc3c3,	// (0x0002b9e1) list_preview_fixed_pane_cp

0xc3cf,	// (0x0002b9ed) popup_preview_fixed_window_g1_ParamLimits

0xc3cf,	// (0x0002b9ed) popup_preview_fixed_window_g1

0xc3db,	// (0x0002b9f9) popup_preview_fixed_window_g2_ParamLimits

0xc3db,	// (0x0002b9f9) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0002f185) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0002f185) popup_preview_fixed_window_g

0x6c5d,	// (0x0002627b) aid_navi_side_left_pane_ParamLimits

0x6c72,	// (0x00026290) aid_navi_side_right_pane_ParamLimits

0x6c8a,	// (0x000262a8) navi_icon_pane_stacon_ParamLimits

0x6c9e,	// (0x000262bc) navi_navi_pane_stacon_ParamLimits

0x6c8a,	// (0x000262a8) navi_text_pane_stacon_ParamLimits

0x0bfc,	// (0x0002021a) main_text_info_pane

0xc5bb,	// (0x0002bbd9) listscroll_text_info_pane

0xc5c3,	// (0x0002bbe1) list_text_info_pane_ParamLimits

0xc5c3,	// (0x0002bbe1) list_text_info_pane

0xc5d2,	// (0x0002bbf0) scroll_pane_cp24_ParamLimits

0xc5d2,	// (0x0002bbf0) scroll_pane_cp24

0xc5f0,	// (0x0002bc0e) list_text_info_pane_t1_ParamLimits

0xc5f0,	// (0x0002bc0e) list_text_info_pane_t1

0x785d,	// (0x00026e7b) popup_fast_swap2_window_ParamLimits

0x785d,	// (0x00026e7b) popup_fast_swap2_window

0xc615,	// (0x0002bc33) aid_size_cell_fast2

0x0bfc,	// (0x0002021a) bg_popup_window_pane_cp17

0x9b13,	// (0x00029131) heading_pane_cp2

0x0fcb,	// (0x000205e9) listscroll_fast2_pane

0xc61f,	// (0x0002bc3d) grid_fast2_pane

0xc629,	// (0x0002bc47) listscroll_fast2_pane_g1

0xc633,	// (0x0002bc51) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x0002f201) listscroll_fast2_pane_g

0x2e8e,	// (0x000224ac) scroll_pane_cp26

0xc63d,	// (0x0002bc5b) cell_fast2_pane_ParamLimits

0xc63d,	// (0x0002bc5b) cell_fast2_pane

0xc654,	// (0x0002bc72) cell_fast2_pane_g1

0xc65d,	// (0x0002bc7b) cell_fast2_pane_g2

0xc666,	// (0x0002bc84) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x0002f206) cell_fast2_pane_g

0x100d,	// (0x0002062b) grid_highlight_pane_cp9

0x1022,	// (0x00020640) main_eswt_pane_ParamLimits

0x1022,	// (0x00020640) main_eswt_pane

0xc5e7,	// (0x0002bc05) list_single_text_info_pane

0xc66e,	// (0x0002bc8c) eswt_ctrl_button_pane

0xc66e,	// (0x0002bc8c) eswt_ctrl_canvas_pane

0xc676,	// (0x0002bc94) eswt_ctrl_combo_pane

0xc66e,	// (0x0002bc8c) eswt_ctrl_default_pane

0xc66e,	// (0x0002bc8c) eswt_ctrl_label_pane

0xc67e,	// (0x0002bc9c) eswt_ctrl_wait_pane

0xc686,	// (0x0002bca4) eswt_shell_pane

0x0bfc,	// (0x0002021a) listscroll_eswt_app_pane

0xc6a6,	// (0x0002bcc4) popup_eswt_tasktip_window_ParamLimits

0xc6a6,	// (0x0002bcc4) popup_eswt_tasktip_window

0x846f,	// (0x00027a8d) bg_popup_window_pane_cp18

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_ParamLimits

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_ParamLimits

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_ParamLimits

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_ParamLimits

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x0002f20d) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x0002f20d) eswt_control_pane_g

0x2cc5,	// (0x000222e3) bg_button_pane_ParamLimits

0x2cc5,	// (0x000222e3) bg_button_pane

0x1022,	// (0x00020640) common_borders_pane_copy2_ParamLimits

0x1022,	// (0x00020640) common_borders_pane_copy2

0xc6eb,	// (0x0002bd09) control_button_pane_g1_ParamLimits

0xc6eb,	// (0x0002bd09) control_button_pane_g1

0xc6f7,	// (0x0002bd15) control_button_pane_g2_ParamLimits

0xc6f7,	// (0x0002bd15) control_button_pane_g2

0xc703,	// (0x0002bd21) control_button_pane_g3_ParamLimits

0xc703,	// (0x0002bd21) control_button_pane_g3

0x0002,

0xfbf8,	// (0x0002f216) control_button_pane_g_ParamLimits

0xfbf8,	// (0x0002f216) control_button_pane_g

0xc717,	// (0x0002bd35) control_button_pane_t1

0xc725,	// (0x0002bd43) control_button_pane_t2

0x0001,

0xfbff,	// (0x0002f21d) control_button_pane_t

0x8384,	// (0x000279a2) bg_button_pane_g1

0x838c,	// (0x000279aa) bg_button_pane_g2

0x8394,	// (0x000279b2) bg_button_pane_g3

0x839c,	// (0x000279ba) bg_button_pane_g4

0x83a4,	// (0x000279c2) bg_button_pane_g5

0x83ac,	// (0x000279ca) bg_button_pane_g6

0x83b4,	// (0x000279d2) bg_button_pane_g7

0x83bc,	// (0x000279da) bg_button_pane_g8

0x83c4,	// (0x000279e2) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002ee7f) bg_button_pane_g

0xbce8,	// (0x0002b306) common_borders_pane_ParamLimits

0xbce8,	// (0x0002b306) common_borders_pane

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy1_ParamLimits

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy1

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy1_ParamLimits

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy1

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy1_ParamLimits

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy1

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy1_ParamLimits

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy1

0xbd23,	// (0x0002b341) bg_eswt_ctrl_canvas_pane_g1

0xbce8,	// (0x0002b306) common_borders_pane_cp2_ParamLimits

0xbce8,	// (0x0002b306) common_borders_pane_cp2

0xbce8,	// (0x0002b306) common_borders_pane_cp3_ParamLimits

0xbce8,	// (0x0002b306) common_borders_pane_cp3

0xc733,	// (0x0002bd51) separator_horizontal_pane

0xc73b,	// (0x0002bd59) separator_vertical_pane

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy2_ParamLimits

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy2

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy2_ParamLimits

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy2

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy2_ParamLimits

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy2

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy2_ParamLimits

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy2

0x0bfc,	// (0x0002021a) common_borders_pane_cp4

0xc744,	// (0x0002bd62) separator_horizontal_pane_g1

0xc74d,	// (0x0002bd6b) separator_horizontal_pane_g2

0xc756,	// (0x0002bd74) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x0002f222) separator_horizontal_pane_g

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy3_ParamLimits

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy3

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy3_ParamLimits

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy3

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy3_ParamLimits

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy3

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy3_ParamLimits

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy3

0x0bfc,	// (0x0002021a) common_borders_pane_cp5

0xc75f,	// (0x0002bd7d) separator_vertical_pane_g1

0xc768,	// (0x0002bd86) separator_vertical_pane_g2

0xc771,	// (0x0002bd8f) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x0002f229) separator_vertical_pane_g

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy4_ParamLimits

0xc6b7,	// (0x0002bcd5) eswt_control_pane_g1_copy4

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy4_ParamLimits

0xc6c4,	// (0x0002bce2) eswt_control_pane_g2_copy4

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy4_ParamLimits

0xc6d1,	// (0x0002bcef) eswt_control_pane_g3_copy4

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy4_ParamLimits

0xc6de,	// (0x0002bcfc) eswt_control_pane_g4_copy4

0xc77a,	// (0x0002bd98) eswt_ctrl_combo_button_pane

0xc782,	// (0x0002bda0) eswt_ctrl_input_pane

0xc78a,	// (0x0002bda8) popup_choice_list_window_cp70

0xc792,	// (0x0002bdb0) eswt_ctrl_input_pane_t1

0x0bfc,	// (0x0002021a) input_focus_pane_cp70

0xbce8,	// (0x0002b306) bg_button_pane_cp70_ParamLimits

0xbce8,	// (0x0002b306) bg_button_pane_cp70

0xc7a0,	// (0x0002bdbe) eswt_ctrl_combo_button_pane_g1

0xc7a8,	// (0x0002bdc6) wait_bar_pane_cp70

0x846f,	// (0x00027a8d) bg_popup_window_pane_cp70_ParamLimits

0x846f,	// (0x00027a8d) bg_popup_window_pane_cp70

0xc7b0,	// (0x0002bdce) popup_eswt_tasktip_window_t1

0xc7c6,	// (0x0002bde4) wait_bar_pane_cp71_ParamLimits

0xc7c6,	// (0x0002bde4) wait_bar_pane_cp71

0xc7d2,	// (0x0002bdf0) grid_eswt_app_pane

0x3214,	// (0x00022832) scroll_pane_cp70

0xc7db,	// (0x0002bdf9) cell_eswt_app_pane_ParamLimits

0xc7db,	// (0x0002bdf9) cell_eswt_app_pane

0xc80d,	// (0x0002be2b) cell_eswt_app_pane_g1_ParamLimits

0xc80d,	// (0x0002be2b) cell_eswt_app_pane_g1

0xc83c,	// (0x0002be5a) cell_eswt_app_pane_g2_ParamLimits

0xc83c,	// (0x0002be5a) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x0002f230) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x0002f230) cell_eswt_app_pane_g

0xc865,	// (0x0002be83) cell_eswt_app_pane_t1_ParamLimits

0xc865,	// (0x0002be83) cell_eswt_app_pane_t1

0xc897,	// (0x0002beb5) grid_highlight_pane_cp70_ParamLimits

0xc897,	// (0x0002beb5) grid_highlight_pane_cp70

0x36ed,	// (0x00022d0b) set_content_pane_g1

0x75ec,	// (0x00026c0a) status_small_volume_pane

0x8e06,	// (0x00028424) status_small_volume_pane_g1

0x8e0e,	// (0x0002842c) volume_small2_pane

0x8e17,	// (0x00028435) volume_small2_pane_g1

0x8e20,	// (0x0002843e) volume_small2_pane_g2

0x8e29,	// (0x00028447) volume_small2_pane_g3

0x8e32,	// (0x00028450) volume_small2_pane_g4

0x8e3b,	// (0x00028459) volume_small2_pane_g5

0x8e44,	// (0x00028462) volume_small2_pane_g6

0x8e4d,	// (0x0002846b) volume_small2_pane_g7

0x8e56,	// (0x00028474) volume_small2_pane_g8

0x8e5f,	// (0x0002847d) volume_small2_pane_g9

0x8e68,	// (0x00028486) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x0002f235) volume_small2_pane_g

0xc0f2,	// (0x0002b710) fep_vkb_top_text_pane_g1_ParamLimits

0xc10d,	// (0x0002b72b) fep_vkb_top_text_pane_t1_ParamLimits

0xc3e7,	// (0x0002ba05) popup_preview_fixed_window_g3_ParamLimits

0xc3e7,	// (0x0002ba05) popup_preview_fixed_window_g3

0x7d6e,	// (0x0002738c) popup_toolbar_trans_pane

0xaa97,	// (0x0002a0b5) aid_height_set_list_ParamLimits

0xaaa8,	// (0x0002a0c6) aid_size_parent_ParamLimits

0x7813,	// (0x00026e31) list_highlight_pane_cp2_ParamLimits

0x36ed,	// (0x00022d0b) set_content_pane_g1_ParamLimits

0xacfd,	// (0x0002a31b) list_single_image_pane_ParamLimits

0xacfd,	// (0x0002a31b) list_single_image_pane

0xc8a3,	// (0x0002bec1) aid_size_cell_image_ParamLimits

0xc8a3,	// (0x0002bec1) aid_size_cell_image

0xc8b0,	// (0x0002bece) grid_single_image_pane_ParamLimits

0xc8b0,	// (0x0002bece) grid_single_image_pane

0x2cf0,	// (0x0002230e) list_single_image_pane_g1_ParamLimits

0x2cf0,	// (0x0002230e) list_single_image_pane_g1

0x2cfc,	// (0x0002231a) list_single_image_pane_g2_ParamLimits

0x2cfc,	// (0x0002231a) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x0002f24a) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x0002f24a) list_single_image_pane_g

0xc8be,	// (0x0002bedc) list_single_image_pane_t1_ParamLimits

0xc8be,	// (0x0002bedc) list_single_image_pane_t1

0xc8d4,	// (0x0002bef2) cell_image_list_pane_ParamLimits

0xc8d4,	// (0x0002bef2) cell_image_list_pane

0xc8ea,	// (0x0002bf08) cell_image_list_pane_g1

0xc8f3,	// (0x0002bf11) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x0002f24f) cell_image_list_pane_g

0xc8fc,	// (0x0002bf1a) aid_size_cell_tb_trans_pane

0x2cc5,	// (0x000222e3) bg_tb_trans_pane

0xc90e,	// (0x0002bf2c) grid_tb_trans_pane

0x8384,	// (0x000279a2) bg_tb_trans_pane_g1

0x838c,	// (0x000279aa) bg_tb_trans_pane_g2

0x8394,	// (0x000279b2) bg_tb_trans_pane_g3

0x839c,	// (0x000279ba) bg_tb_trans_pane_g4

0x83a4,	// (0x000279c2) bg_tb_trans_pane_g5

0x83bc,	// (0x000279da) bg_tb_trans_pane_g6

0x83c4,	// (0x000279e2) bg_tb_trans_pane_g7

0x83ac,	// (0x000279ca) bg_tb_trans_pane_g8

0x83b4,	// (0x000279d2) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x0002f254) bg_tb_trans_pane_g

0xc922,	// (0x0002bf40) cell_toolbar_trans_pane_ParamLimits

0xc922,	// (0x0002bf40) cell_toolbar_trans_pane

0xbd23,	// (0x0002b341) cell_toolbar_trans_pane_g1

0xb947,	// (0x0002af65) list_form2_midp_pane_t1

0xb955,	// (0x0002af73) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x0002f0fd) list_form2_midp_pane_t

0xb963,	// (0x0002af81) scroll_pane_cp51_ParamLimits

0xbb2a,	// (0x0002b148) form2_midp_wait_pane_g1

0xbb33,	// (0x0002b151) form2_midp_wait_pane_g2

0xbb3c,	// (0x0002b15a) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x0002f112) form2_midp_wait_pane_g

0x0c78,	// (0x00020296) list_highlight_pane_cp21_ParamLimits

0xbb80,	// (0x0002b19e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb8f,	// (0x0002b1ad) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xacb6,	// (0x0002a2d4) list_single_2graphic_im_pane_ParamLimits

0xacb6,	// (0x0002a2d4) list_single_2graphic_im_pane

0xc948,	// (0x0002bf66) list_single_2graphic_im_pane_g1_ParamLimits

0xc948,	// (0x0002bf66) list_single_2graphic_im_pane_g1

0xc959,	// (0x0002bf77) list_single_2graphic_im_pane_g2_ParamLimits

0xc959,	// (0x0002bf77) list_single_2graphic_im_pane_g2

0xc965,	// (0x0002bf83) list_single_2graphic_im_pane_g3_ParamLimits

0xc965,	// (0x0002bf83) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x0002f267) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x0002f267) list_single_2graphic_im_pane_g

0xc985,	// (0x0002bfa3) list_single_2graphic_im_pane_t1_ParamLimits

0xc985,	// (0x0002bfa3) list_single_2graphic_im_pane_t1

0xc3f3,	// (0x0002ba11) list_single_graphic_2heading_pane_fp_ParamLimits

0xc3f3,	// (0x0002ba11) list_single_graphic_2heading_pane_fp

0x5fc6,	// (0x000255e4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5fc6,	// (0x000255e4) list_single_graphic_2heading_pane_fp_g1

0xc40c,	// (0x0002ba2a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc40c,	// (0x0002ba2a) list_single_graphic_2heading_pane_fp_g2

0x5f8f,	// (0x000255ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5f8f,	// (0x000255ad) list_single_graphic_2heading_pane_fp_g3

0x5f9b,	// (0x000255b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5f9b,	// (0x000255b9) list_single_graphic_2heading_pane_fp_g4

0xc418,	// (0x0002ba36) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc418,	// (0x0002ba36) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f195) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f195) list_single_graphic_2heading_pane_fp_g

0x6193,	// (0x000257b1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6193,	// (0x000257b1) list_single_graphic_2heading_pane_fp_t1

0x5ffe,	// (0x0002561c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5ffe,	// (0x0002561c) list_single_graphic_2heading_pane_fp_t2

0x61a9,	// (0x000257c7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61a9,	// (0x000257c7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x0002f270) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x0002f270) list_single_graphic_2heading_pane_fp_t

0xbdb4,	// (0x0002b3d2) fep_hwr_write_pane_g5_ParamLimits

0xbdb4,	// (0x0002b3d2) fep_hwr_write_pane_g5

0xbdc0,	// (0x0002b3de) fep_hwr_write_pane_g6_ParamLimits

0xbdc0,	// (0x0002b3de) fep_hwr_write_pane_g6

0xc686,	// (0x0002bca4) eswt_shell_pane_ParamLimits

0x846f,	// (0x00027a8d) bg_popup_window_pane_cp18_ParamLimits

0xa9ee,	// (0x0002a00c) heading_pane_cp70

0xc7b0,	// (0x0002bdce) popup_eswt_tasktip_window_t1_ParamLimits

0x7ea1,	// (0x000274bf) aid_touch_tab_arrow_left

0x7eb0,	// (0x000274ce) aid_touch_tab_arrow_right

0x0c1a,	// (0x00020238) title_pane_g3_ParamLimits

0x0c1a,	// (0x00020238) title_pane_g3

0x2c1f,	// (0x0002223d) set_value_pane_g1

0x7d6e,	// (0x0002738c) popup_toolbar_trans_pane_ParamLimits

0xc8fc,	// (0x0002bf1a) aid_size_cell_tb_trans_pane_ParamLimits

0x2cc5,	// (0x000222e3) bg_tb_trans_pane_ParamLimits

0xc90e,	// (0x0002bf2c) grid_tb_trans_pane_ParamLimits

0x0dc5,	// (0x000203e3) cont_note_pane_ParamLimits

0x0dc5,	// (0x000203e3) cont_note_pane

0x1022,	// (0x00020640) cont_snote2_single_text_pane_ParamLimits

0x1022,	// (0x00020640) cont_snote2_single_text_pane

0x1022,	// (0x00020640) cont_snote2_single_graphic_pane_ParamLimits

0x1022,	// (0x00020640) cont_snote2_single_graphic_pane

0x9d2f,	// (0x0002934d) cont_note_wait_pane_ParamLimits

0x9d2f,	// (0x0002934d) cont_note_wait_pane

0x9d2f,	// (0x0002934d) cont_note_image_pane_ParamLimits

0x9d2f,	// (0x0002934d) cont_note_image_pane

0xc9b6,	// (0x0002bfd4) popup_note2_window_g1_ParamLimits

0xc9b6,	// (0x0002bfd4) popup_note2_window_g1

0xc9e7,	// (0x0002c005) popup_note2_window_t1_ParamLimits

0xc9e7,	// (0x0002c005) popup_note2_window_t1

0xca2c,	// (0x0002c04a) popup_note2_window_t2_ParamLimits

0xca2c,	// (0x0002c04a) popup_note2_window_t2

0xca71,	// (0x0002c08f) popup_note2_window_t3_ParamLimits

0xca71,	// (0x0002c08f) popup_note2_window_t3

0xcab6,	// (0x0002c0d4) popup_note2_window_t4_ParamLimits

0xcab6,	// (0x0002c0d4) popup_note2_window_t4

0x0e49,	// (0x00020467) popup_note2_window_t5_ParamLimits

0x0e49,	// (0x00020467) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x0002f27c) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x0002f27c) popup_note2_window_t

0xcae5,	// (0x0002c103) popup_note2_image_window_g1_ParamLimits

0xcae5,	// (0x0002c103) popup_note2_image_window_g1

0xcaf1,	// (0x0002c10f) popup_note2_image_window_g2_ParamLimits

0xcaf1,	// (0x0002c10f) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x0002f287) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x0002f287) popup_note2_image_window_g

0xcb03,	// (0x0002c121) popup_note2_image_window_t1_ParamLimits

0xcb03,	// (0x0002c121) popup_note2_image_window_t1

0xcb1b,	// (0x0002c139) popup_note2_image_window_t2_ParamLimits

0xcb1b,	// (0x0002c139) popup_note2_image_window_t2

0xcb33,	// (0x0002c151) popup_note2_image_window_t3_ParamLimits

0xcb33,	// (0x0002c151) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x0002f28c) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x0002f28c) popup_note2_image_window_t

0x9d3d,	// (0x0002935b) popup_note2_wait_window_g1_ParamLimits

0x9d3d,	// (0x0002935b) popup_note2_wait_window_g1

0xcb4f,	// (0x0002c16d) popup_note2_wait_window_g2_ParamLimits

0xcb4f,	// (0x0002c16d) popup_note2_wait_window_g2

0x9d55,	// (0x00029373) popup_note2_wait_window_g3_ParamLimits

0x9d55,	// (0x00029373) popup_note2_wait_window_g3

0x0002,

0xfc75,	// (0x0002f293) popup_note2_wait_window_g_ParamLimits

0xfc75,	// (0x0002f293) popup_note2_wait_window_g

0xcb5b,	// (0x0002c179) popup_note2_wait_window_t1_ParamLimits

0xcb5b,	// (0x0002c179) popup_note2_wait_window_t1

0xcb79,	// (0x0002c197) popup_note2_wait_window_t2_ParamLimits

0xcb79,	// (0x0002c197) popup_note2_wait_window_t2

0xcb97,	// (0x0002c1b5) popup_note2_wait_window_t3_ParamLimits

0xcb97,	// (0x0002c1b5) popup_note2_wait_window_t3

0xcba9,	// (0x0002c1c7) popup_note2_wait_window_t4_ParamLimits

0xcba9,	// (0x0002c1c7) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0002f29a) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0002f29a) popup_note2_wait_window_t

0xcbbb,	// (0x0002c1d9) wait_bar2_pane_ParamLimits

0xcbbb,	// (0x0002c1d9) wait_bar2_pane

0xcbd3,	// (0x0002c1f1) popup_snote2_single_text_window_g1_ParamLimits

0xcbd3,	// (0x0002c1f1) popup_snote2_single_text_window_g1

0xcbfb,	// (0x0002c219) popup_snote2_single_text_window_t1_ParamLimits

0xcbfb,	// (0x0002c219) popup_snote2_single_text_window_t1

0xcc47,	// (0x0002c265) popup_snote2_single_text_window_t2_ParamLimits

0xcc47,	// (0x0002c265) popup_snote2_single_text_window_t2

0xcc93,	// (0x0002c2b1) popup_snote2_single_text_window_t3_ParamLimits

0xcc93,	// (0x0002c2b1) popup_snote2_single_text_window_t3

0xccd4,	// (0x0002c2f2) popup_snote2_single_text_window_t4_ParamLimits

0xccd4,	// (0x0002c2f2) popup_snote2_single_text_window_t4

0xcd0a,	// (0x0002c328) popup_snote2_single_text_window_t5_ParamLimits

0xcd0a,	// (0x0002c328) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0002f2a3) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0002f2a3) popup_snote2_single_text_window_t

0xcd35,	// (0x0002c353) popup_snote2_single_graphic_window_g1_ParamLimits

0xcd35,	// (0x0002c353) popup_snote2_single_graphic_window_g1

0xcd5d,	// (0x0002c37b) popup_snote2_single_graphic_window_g2_ParamLimits

0xcd5d,	// (0x0002c37b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0002f2ae) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0002f2ae) popup_snote2_single_graphic_window_g

0xcd85,	// (0x0002c3a3) popup_snote2_single_graphic_window_t1_ParamLimits

0xcd85,	// (0x0002c3a3) popup_snote2_single_graphic_window_t1

0xcdd1,	// (0x0002c3ef) popup_snote2_single_graphic_window_t2_ParamLimits

0xcdd1,	// (0x0002c3ef) popup_snote2_single_graphic_window_t2

0xcc93,	// (0x0002c2b1) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc93,	// (0x0002c2b1) popup_snote2_single_graphic_window_t3

0xccd4,	// (0x0002c2f2) popup_snote2_single_graphic_window_t4_ParamLimits

0xccd4,	// (0x0002c2f2) popup_snote2_single_graphic_window_t4

0xcd0a,	// (0x0002c328) popup_snote2_single_graphic_window_t5_ParamLimits

0xcd0a,	// (0x0002c328) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0002f2b3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0002f2b3) popup_snote2_single_graphic_window_t

0xb813,	// (0x0002ae31) clock_nsta_pane_cp2_t1

0xb813,	// (0x0002ae31) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x0002f0d3) clock_nsta_pane_cp2_t

0x578c,	// (0x00024daa) form_field_data_wide_pane_g1_ParamLimits

0x2cf0,	// (0x0002230e) form_field_data_wide_pane_g2_ParamLimits

0x2cf0,	// (0x0002230e) form_field_data_wide_pane_g2

0x2cfc,	// (0x0002231a) form_field_data_wide_pane_g3_ParamLimits

0x2cfc,	// (0x0002231a) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002ec94) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002ec94) form_field_data_wide_pane_g

0xb6f2,	// (0x0002ad10) grid_touch_3_pane_ParamLimits

0xb6f2,	// (0x0002ad10) grid_touch_3_pane

0xce1d,	// (0x0002c43b) cell_touch_3_pane_ParamLimits

0xce1d,	// (0x0002c43b) cell_touch_3_pane

0xbd23,	// (0x0002b341) cell_touch_3_pane_g1

0xbd23,	// (0x0002b341) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x0002f158) cell_touch_3_pane_g

0x0e7b,	// (0x00020499) cont_query_data_pane

0x0e83,	// (0x000204a1) cont_query_data_pane_cp1

0xce50,	// (0x0002c46e) button_value_adjust_pane_cp7

0xce58,	// (0x0002c476) query_popup_pane_cp3

0x33e5,	// (0x00022a03) bg_popup_sub_pane_cp22_ParamLimits

0x6f14,	// (0x00026532) navi_navi_volume_pane_cp2

0x6f2f,	// (0x0002654d) popup_side_volume_key_window_g2

0x6f3e,	// (0x0002655c) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002ed2a) popup_side_volume_key_window_g

0x6f5b,	// (0x00026579) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002ed31) popup_side_volume_key_window_t

0x35f0,	// (0x00022c0e) popup_side_volume_key_window_ParamLimits

0x53c1,	// (0x000249df) list_double_graphic_pane_g4_ParamLimits

0x53c1,	// (0x000249df) list_double_graphic_pane_g4

0xace5,	// (0x0002a303) list_single_2heading_msg_pane_ParamLimits

0xace5,	// (0x0002a303) list_single_2heading_msg_pane

0x61c9,	// (0x000257e7) list_single_2heading_msg_pane_g1_ParamLimits

0x61c9,	// (0x000257e7) list_single_2heading_msg_pane_g1

0x5240,	// (0x0002485e) list_single_2heading_msg_pane_g2_ParamLimits

0x5240,	// (0x0002485e) list_single_2heading_msg_pane_g2

0x61d5,	// (0x000257f3) list_single_2heading_msg_pane_g3_ParamLimits

0x61d5,	// (0x000257f3) list_single_2heading_msg_pane_g3

0x61e1,	// (0x000257ff) list_single_2heading_msg_pane_g4_ParamLimits

0x61e1,	// (0x000257ff) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0002f2be) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0002f2be) list_single_2heading_msg_pane_g

0x61f9,	// (0x00025817) list_single_2heading_msg_pane_t1_ParamLimits

0x61f9,	// (0x00025817) list_single_2heading_msg_pane_t1

0x6221,	// (0x0002583f) list_single_2heading_msg_pane_t2_ParamLimits

0x6221,	// (0x0002583f) list_single_2heading_msg_pane_t2

0x6255,	// (0x00025873) list_single_2heading_msg_pane_t3_ParamLimits

0x6255,	// (0x00025873) list_single_2heading_msg_pane_t3

0x628e,	// (0x000258ac) list_single_2heading_msg_pane_t4_ParamLimits

0x628e,	// (0x000258ac) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0002f2c7) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0002f2c7) list_single_2heading_msg_pane_t

0x0c26,	// (0x00020244) title_pane_g4_ParamLimits

0x0c26,	// (0x00020244) title_pane_g4

0x6bad,	// (0x000261cb) title_pane_stacon_g3_ParamLimits

0x6bad,	// (0x000261cb) title_pane_stacon_g3

0xc979,	// (0x0002bf97) list_single_2graphic_im_pane_g4_ParamLimits

0xc979,	// (0x0002bf97) list_single_2graphic_im_pane_g4

0xa79f,	// (0x00029dbd) popup_side_volume_key_window_cp

0xb00d,	// (0x0002a62b) main_idle_act2_pane_t1

0x83cc,	// (0x000279ea) toolbar_button_pane_g10

0x6abe,	// (0x000260dc) popup_toolbar_window_cp1

0xb804,	// (0x0002ae22) clock_nsta_pane_cp_t1

0xb804,	// (0x0002ae22) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x0002f0ce) clock_nsta_pane_cp_t

0x6f14,	// (0x00026532) navi_navi_volume_pane_cp2_ParamLimits

0x6f23,	// (0x00026541) popup_side_volume_key_window_g1_ParamLimits

0x6f2f,	// (0x0002654d) popup_side_volume_key_window_g2_ParamLimits

0x6f3e,	// (0x0002655c) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002ed2a) popup_side_volume_key_window_g_ParamLimits

0x8afb,	// (0x00028119) fep_hwr_aid_pane

0x0bcc,	// (0x000201ea) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd84,	// (0x0002b3a2) fep_hwr_top_pane_g1_ParamLimits

0xbd96,	// (0x0002b3b4) fep_hwr_top_pane_g2_ParamLimits

0x8bb6,	// (0x000281d4) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x0002f123) fep_hwr_top_pane_g_ParamLimits

0x8bcb,	// (0x000281e9) fep_hwr_top_text_pane_ParamLimits

0xa554,	// (0x00029b72) aid_touch_tab_arrow_arrow_2

0xa55d,	// (0x00029b7b) aid_touch_tab_arrow_left_2

0x8b0f,	// (0x0002812d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8b46,	// (0x00028164) fep_hwr_prediction_pane

0xbeec,	// (0x0002b50a) fep_vkb_prediction_pane

0xbff2,	// (0x0002b610) fep_vkb_side_pane_g3_ParamLimits

0xbff2,	// (0x0002b610) fep_vkb_side_pane_g3

0xbf9e,	// (0x0002b5bc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc46c,	// (0x0002ba8a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc479,	// (0x0002ba97) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0002f1cd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce7f,	// (0x0002c49d) fep_hwr_prediction_pane_g1

0x8e71,	// (0x0002848f) fep_hwr_prediction_pane_g2

0x8e79,	// (0x00028497) fep_hwr_prediction_pane_g3

0x8e81,	// (0x0002849f) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002f2d0) fep_hwr_prediction_pane_g

0xce7f,	// (0x0002c49d) fep_vkb_prediction_pane_g1

0xce89,	// (0x0002c4a7) fep_vkb_prediction_pane_g2

0xce91,	// (0x0002c4af) fep_vkb_prediction_pane_g3

0xce99,	// (0x0002c4b7) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002f2d9) fep_vkb_prediction_pane_g

0x8989,	// (0x00027fa7) slider_set_pane_g3

0x899d,	// (0x00027fbb) slider_set_pane_g4

0x89b5,	// (0x00027fd3) slider_set_pane_g5

0x8989,	// (0x00027fa7) slider_set_pane_g6

0x89cb,	// (0x00027fe9) slider_set_pane_g7

0xac2d,	// (0x0002a24b) slider_form_pane_g3

0xac36,	// (0x0002a254) slider_form_pane_g4

0xac3e,	// (0x0002a25c) slider_form_pane_g5

0xac2d,	// (0x0002a24b) slider_form_pane_g6

0xac46,	// (0x0002a264) slider_form_pane_g7

0xb2c4,	// (0x0002a8e2) slider_set_pane_vc_g3

0xb2cd,	// (0x0002a8eb) slider_set_pane_vc_g4

0xb2d6,	// (0x0002a8f4) slider_set_pane_vc_g5

0xb2c4,	// (0x0002a8e2) slider_set_pane_vc_g6

0xb2df,	// (0x0002a8fd) slider_set_pane_vc_g7

0xb4b7,	// (0x0002aad5) slider_form_pane_vc_g1

0xb4c0,	// (0x0002aade) slider_form_pane_vc_g2

0xb4c9,	// (0x0002aae7) slider_form_pane_vc_g3

0xb4b7,	// (0x0002aad5) slider_form_pane_vc_g4

0xb4d2,	// (0x0002aaf0) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x0002f0a0) slider_form_pane_vc_g

0x0bfc,	// (0x0002021a) main_idle_act3_pane

0xcea1,	// (0x0002c4bf) ai3_links_pane

0xceaa,	// (0x0002c4c8) popup_ai3_data_window_ParamLimits

0xceaa,	// (0x0002c4c8) popup_ai3_data_window

0x0bfc,	// (0x0002021a) grid_ai3_links_pane

0xcec8,	// (0x0002c4e6) cell_ai3_links_pane_ParamLimits

0xcec8,	// (0x0002c4e6) cell_ai3_links_pane

0xcee2,	// (0x0002c500) bg_popup_sub_pane_cp11

0xceef,	// (0x0002c50d) cell_ai3_links_pane_g1

0x0bfc,	// (0x0002021a) bg_popup_sub_pane_cp12

0xcf14,	// (0x0002c532) heading_ai3_data_pane

0xcf1c,	// (0x0002c53a) list_ai3_gene_pane

0xcf28,	// (0x0002c546) popup_ai3_data_window_g1

0xcf30,	// (0x0002c54e) heading_ai3_data_pane_g1

0xcf38,	// (0x0002c556) heading_ai3_data_pane_t1

0xcf46,	// (0x0002c564) list_double_ai3_gene_pane_ParamLimits

0xcf46,	// (0x0002c564) list_double_ai3_gene_pane

0xcf53,	// (0x0002c571) list_single_ai3_gene_pane_ParamLimits

0xcf53,	// (0x0002c571) list_single_ai3_gene_pane

0xbce8,	// (0x0002b306) list_highlight_pane_cp7_ParamLimits

0xbce8,	// (0x0002b306) list_highlight_pane_cp7

0xcf60,	// (0x0002c57e) list_single_a13_gene_pane_t1_ParamLimits

0xcf60,	// (0x0002c57e) list_single_a13_gene_pane_t1

0xcf77,	// (0x0002c595) list_single_ai3_gene_pane_g1

0xcf80,	// (0x0002c59e) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0002f2e2) list_single_ai3_gene_pane_g

0xcf88,	// (0x0002c5a6) list_double_ai3_gene_pane_g1_ParamLimits

0xcf88,	// (0x0002c5a6) list_double_ai3_gene_pane_g1

0xcf94,	// (0x0002c5b2) list_double_ai3_gene_pane_t1_ParamLimits

0xcf94,	// (0x0002c5b2) list_double_ai3_gene_pane_t1

0xcfb0,	// (0x0002c5ce) list_double_ai3_gene_pane_t2_ParamLimits

0xcfb0,	// (0x0002c5ce) list_double_ai3_gene_pane_t2

0xcfc5,	// (0x0002c5e3) list_double_ai3_gene_pane_t3_ParamLimits

0xcfc5,	// (0x0002c5e3) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0002f2e7) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0002f2e7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x61bf,	// (0x000257dd) aid_size_min_col_2

0xce69,	// (0x0002c487) aid_size_min_msg_ParamLimits

0xce69,	// (0x0002c487) aid_size_min_msg

0xc0fe,	// (0x0002b71c) fep_vkb_top_text_pane_g2_ParamLimits

0xc0fe,	// (0x0002b71c) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x0002f153) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x0002f153) fep_vkb_top_text_pane_g

0x0bfc,	// (0x0002021a) main_hc_apps_shell_pane

0xcfe2,	// (0x0002c600) grid_hc_apps_pane_ParamLimits

0xcfe2,	// (0x0002c600) grid_hc_apps_pane

0xcff1,	// (0x0002c60f) list_hc_apps_pane

0xcff9,	// (0x0002c617) scroll_pane_cp37_ParamLimits

0xcff9,	// (0x0002c617) scroll_pane_cp37

0xd005,	// (0x0002c623) cell_hc_apps_pane_ParamLimits

0xd005,	// (0x0002c623) cell_hc_apps_pane

0xd0bd,	// (0x0002c6db) cell_hc_apps_pane_g1_ParamLimits

0xd0bd,	// (0x0002c6db) cell_hc_apps_pane_g1

0xd0ee,	// (0x0002c70c) cell_hc_apps_pane_g2_ParamLimits

0xd0ee,	// (0x0002c70c) cell_hc_apps_pane_g2

0xd10a,	// (0x0002c728) cell_hc_apps_pane_g3_ParamLimits

0xd10a,	// (0x0002c728) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0002f2ee) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0002f2ee) cell_hc_apps_pane_g

0xd12c,	// (0x0002c74a) cell_hc_apps_pane_t1_ParamLimits

0xd12c,	// (0x0002c74a) cell_hc_apps_pane_t1

0x0dc5,	// (0x000203e3) grid_highlight_pane_cp10_ParamLimits

0x0dc5,	// (0x000203e3) grid_highlight_pane_cp10

0xd16c,	// (0x0002c78a) list_single_hc_apps_pane_ParamLimits

0xd16c,	// (0x0002c78a) list_single_hc_apps_pane

0xd1ab,	// (0x0002c7c9) list_single_hc_apps_pane_g1

0x62b3,	// (0x000258d1) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0002f2f5) list_single_hc_apps_pane_g

0x62cc,	// (0x000258ea) list_single_hc_apps_pane_g2_copy1

0x62e8,	// (0x00025906) list_single_hc_apps_pane_t1

0x0c78,	// (0x00020296) bg_set_opt_pane_cp_ParamLimits

0x680f,	// (0x00025e2d) setting_slider_pane_t1_ParamLimits

0x6828,	// (0x00025e46) setting_slider_pane_t2_ParamLimits

0x6842,	// (0x00025e60) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002eb7c) setting_slider_pane_t_ParamLimits

0x685a,	// (0x00025e78) slider_set_pane_ParamLimits

0x7678,	// (0x00026c96) control_pane_g5_ParamLimits

0x7678,	// (0x00026c96) control_pane_g5

0xaa5a,	// (0x0002a078) slider_set_pane_g1_ParamLimits

0x897d,	// (0x00027f9b) slider_set_pane_g2_ParamLimits

0x8989,	// (0x00027fa7) slider_set_pane_g3_ParamLimits

0x899d,	// (0x00027fbb) slider_set_pane_g4_ParamLimits

0x89b5,	// (0x00027fd3) slider_set_pane_g5_ParamLimits

0x8989,	// (0x00027fa7) slider_set_pane_g6_ParamLimits

0x89cb,	// (0x00027fe9) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002ef7d) slider_set_pane_g_ParamLimits

0x3698,	// (0x00022cb6) navi_icon_text_pane_ParamLimits

0x7e60,	// (0x0002747e) aid_fill_nsta_2_ParamLimits

0x7ea1,	// (0x000274bf) aid_touch_tab_arrow_left_ParamLimits

0x7eb0,	// (0x000274ce) aid_touch_tab_arrow_right_ParamLimits

0x7f1d,	// (0x0002753b) clock_nsta_pane_ParamLimits

0xa536,	// (0x00029b54) navi_icon_pane_g1_ParamLimits

0xa542,	// (0x00029b60) navi_text_pane_t1_ParamLimits

0xb921,	// (0x0002af3f) navi_icon_text_pane_g1_ParamLimits

0xb92d,	// (0x0002af4b) navi_icon_text_pane_t1_ParamLimits

0xd1ab,	// (0x0002c7c9) list_single_hc_apps_pane_g1_ParamLimits

0x62b3,	// (0x000258d1) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0002f2f5) list_single_hc_apps_pane_g_ParamLimits

0x62cc,	// (0x000258ea) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x62e8,	// (0x00025906) list_single_hc_apps_pane_t1_ParamLimits

0x6657,	// (0x00025c75) popup_toolbar2_fixed_window_ParamLimits

0x6657,	// (0x00025c75) popup_toolbar2_fixed_window

0x7d64,	// (0x00027382) popup_toolbar2_float_window

0x0bfc,	// (0x0002021a) bg_popup_sub_pane_cp27

0xd1c4,	// (0x0002c7e2) grid_toolbar2_float_pane

0x0bfc,	// (0x0002021a) bg_popup_sub_pane_cp26

0xd1c4,	// (0x0002c7e2) grid_toolbar2_fixed_pane

0xd1cc,	// (0x0002c7ea) cell_toolbar2_fixed_pane_ParamLimits

0xd1cc,	// (0x0002c7ea) cell_toolbar2_fixed_pane

0xd1dc,	// (0x0002c7fa) cell_toolbar2_fixed_pane_g1

0xd1e5,	// (0x0002c803) toolbar2_fixed_button_pane

0x8384,	// (0x000279a2) toolbar2_fixed_button_pane_g1

0x838c,	// (0x000279aa) toolbar2_fixed_button_pane_g2

0x8394,	// (0x000279b2) toolbar2_fixed_button_pane_g3

0x839c,	// (0x000279ba) toolbar2_fixed_button_pane_g4

0x83a4,	// (0x000279c2) toolbar2_fixed_button_pane_g5

0x83ac,	// (0x000279ca) toolbar2_fixed_button_pane_g6

0x83b4,	// (0x000279d2) toolbar2_fixed_button_pane_g7

0x83bc,	// (0x000279da) toolbar2_fixed_button_pane_g8

0x83c4,	// (0x000279e2) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002ee7f) toolbar2_fixed_button_pane_g

0xd1ed,	// (0x0002c80b) cell_toolbar2_float_pane_ParamLimits

0xd1ed,	// (0x0002c80b) cell_toolbar2_float_pane

0xd1fe,	// (0x0002c81c) cell_toolbar2_float_pane_g1

0xd1e5,	// (0x0002c803) toolbar2_fixed_button_pane_cp

0xbe5a,	// (0x0002b478) fep_vkb_accented_list_pane_ParamLimits

0xbe5a,	// (0x0002b478) fep_vkb_accented_list_pane

0x8d2d,	// (0x0002834b) bg_popup_fep_shadow_pane_g9

0x72a2,	// (0x000268c0) bg_popup_fep_shadow_pane_cp3

0x2e75,	// (0x00022493) list_accented_list_pane

0xd207,	// (0x0002c825) list_single_accented_list_pane_ParamLimits

0xd207,	// (0x0002c825) list_single_accented_list_pane

0x72a2,	// (0x000268c0) list_highlight_pane_cp10

0xd218,	// (0x0002c836) list_single_accented_list_pane_t1

0x7caa,	// (0x000272c8) popup_slider_window_ParamLimits

0x7caa,	// (0x000272c8) popup_slider_window

0xce60,	// (0x0002c47e) aid_indentation_list_msg

0xd2e4,	// (0x0002c902) bg_popup_window_pane_cp19

0xd352,	// (0x0002c970) popup_slider_window_g1

0xd36e,	// (0x0002c98c) popup_slider_window_g2

0xd38a,	// (0x0002c9a8) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0002f2fa) popup_slider_window_g

0xd3e6,	// (0x0002ca04) popup_slider_window_t1

0xd45a,	// (0x0002ca78) small_volume_slider_vertical_pane

0xbd23,	// (0x0002b341) small_volume_slider_vertical_pane_g1

0xbd23,	// (0x0002b341) small_volume_slider_vertical_pane_g2

0xd476,	// (0x0002ca94) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0002f30c) small_volume_slider_vertical_pane_g

0x640f,	// (0x00025a2d) area_side_right_pane_ParamLimits

0x640f,	// (0x00025a2d) area_side_right_pane

0x8e89,	// (0x000284a7) aid_size_side_button_ParamLimits

0x8e89,	// (0x000284a7) aid_size_side_button

0x8e9d,	// (0x000284bb) grid_sctrl_middle_pane_ParamLimits

0x8e9d,	// (0x000284bb) grid_sctrl_middle_pane

0x8ebd,	// (0x000284db) sctrl_sk_bottom_pane

0x8ece,	// (0x000284ec) sctrl_sk_top_pane

0x8ee0,	// (0x000284fe) aid_touch_sctrl_top

0x0dc5,	// (0x000203e3) bg_sctrl_sk_pane_ParamLimits

0x0dc5,	// (0x000203e3) bg_sctrl_sk_pane

0x8eed,	// (0x0002850b) sctrl_sk_top_pane_g1

0x8efa,	// (0x00028518) sctrl_sk_top_pane_t1

0x8ee0,	// (0x000284fe) aid_touch_sctrl_bottom

0x0dc5,	// (0x000203e3) bg_sctrl_sk_pane_cp_ParamLimits

0x0dc5,	// (0x000203e3) bg_sctrl_sk_pane_cp

0x8f15,	// (0x00028533) sctrl_sk_bottom_pane_g1

0x8efa,	// (0x00028518) sctrl_sk_bottom_pane_t1

0x8f1e,	// (0x0002853c) cell_sctrl_middle_pane_ParamLimits

0x8f1e,	// (0x0002853c) cell_sctrl_middle_pane

0x8f3b,	// (0x00028559) aid_touch_sctrl_middle_ParamLimits

0x8f3b,	// (0x00028559) aid_touch_sctrl_middle

0x2cc5,	// (0x000222e3) bg_sctrl_middle_pane_ParamLimits

0x2cc5,	// (0x000222e3) bg_sctrl_middle_pane

0xbf9e,	// (0x0002b5bc) cell_sctrl_middle_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) cell_sctrl_middle_pane_g1

0x8f4d,	// (0x0002856b) cell_sctrl_middle_pane_g2_ParamLimits

0x8f4d,	// (0x0002856b) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0002f318) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0002f318) cell_sctrl_middle_pane_g

0x8384,	// (0x000279a2) bg_sctrl_middle_pane_g1

0x838c,	// (0x000279aa) bg_sctrl_middle_pane_g2

0x8394,	// (0x000279b2) bg_sctrl_middle_pane_g3

0x839c,	// (0x000279ba) bg_sctrl_middle_pane_g4

0x83a4,	// (0x000279c2) bg_sctrl_middle_pane_g5

0x83ac,	// (0x000279ca) bg_sctrl_middle_pane_g6

0x83b4,	// (0x000279d2) bg_sctrl_middle_pane_g7

0x83bc,	// (0x000279da) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0002f31d) bg_sctrl_middle_pane_g

0x83c4,	// (0x000279e2) bg_sctrl_middle_pane_g8_copy1

0x8384,	// (0x000279a2) bg_sctrl_sk_pane_g1

0x838c,	// (0x000279aa) bg_sctrl_sk_pane_g2

0x8394,	// (0x000279b2) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002ee7f) bg_sctrl_sk_pane_g

0x11e0,	// (0x000207fe) aid_size_touch_scroll_bar

0x839c,	// (0x000279ba) bg_sctrl_sk_pane_g4

0x83a4,	// (0x000279c2) bg_sctrl_sk_pane_g5

0x83ac,	// (0x000279ca) bg_sctrl_sk_pane_g6

0x83b4,	// (0x000279d2) bg_sctrl_sk_pane_g7

0x83bc,	// (0x000279da) bg_sctrl_sk_pane_g8

0x83c4,	// (0x000279e2) bg_sctrl_sk_pane_g9

0x78c1,	// (0x00026edf) popup_fep_china_hwr2_fs_candidate_window

0x78cb,	// (0x00026ee9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x78cb,	// (0x00026ee9) popup_fep_china_hwr2_fs_control_window

0xbf9e,	// (0x0002b5bc) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0002f313) sctrl_sk_top_pane_g

0xd47f,	// (0x0002ca9d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd47f,	// (0x0002ca9d) aid_fep_china_hwr2_fs_cell

0xd492,	// (0x0002cab0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd492,	// (0x0002cab0) bg_popup_fep_shadow_pane_cp4

0xd4ab,	// (0x0002cac9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd4ab,	// (0x0002cac9) bg_popup_fep_shadow_pane_cp5

0xd4bd,	// (0x0002cadb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd4bd,	// (0x0002cadb) popup_fep_china_hwr2_fs_control_bar_grid

0xd4cd,	// (0x0002caeb) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4d5,	// (0x0002caf3) aid_fep_china_hwr2_fs_candi_cell

0x0bfc,	// (0x0002021a) bg_popup_fep_shadow_pane_cp6

0xd4df,	// (0x0002cafd) popup_fep_china_hwr2_fs_candidate_grid

0xd4e9,	// (0x0002cb07) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4e9,	// (0x0002cb07) cell_fep_china_hwr2_fs_funtion_grid

0xbd23,	// (0x0002b341) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd501,	// (0x0002cb1f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd501,	// (0x0002cb1f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd50f,	// (0x0002cb2d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd50f,	// (0x0002cb2d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0002f32e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0002f32e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd525,	// (0x0002cb43) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd525,	// (0x0002cb43) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd53a,	// (0x0002cb58) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd53a,	// (0x0002cb58) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0002f333) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0002f333) cell_fep_china_hwr2_fs_funtion_grid_t

0xd556,	// (0x0002cb74) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd55e,	// (0x0002cb7c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd566,	// (0x0002cb84) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0002f338) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd56e,	// (0x0002cb8c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd56e,	// (0x0002cb8c) cell_fep_china_hwr2_fs_candidate_grid

0xd58d,	// (0x0002cbab) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd595,	// (0x0002cbb3) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbd23,	// (0x0002b341) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbd23,	// (0x0002b341) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x0002f158) cell_fep_china_hwr2_fs_candidate_grid_g

0xd59d,	// (0x0002cbbb) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f30,	// (0x0002754e) clock_nsta_pane_cp_24_ParamLimits

0x7f30,	// (0x0002754e) clock_nsta_pane_cp_24

0x7fb0,	// (0x000275ce) indicator_nsta_pane_cp_24_ParamLimits

0x7fb0,	// (0x000275ce) indicator_nsta_pane_cp_24

0xa3b2,	// (0x000299d0) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002eee4) heading_pane_g

0xae54,	// (0x0002a472) grid_sct_catagory_button_pane

0xae86,	// (0x0002a4a4) scroll_pane_cp5_ParamLimits

0xb96f,	// (0x0002af8d) button_value_adjust_pane_cp5_ParamLimits

0xb96f,	// (0x0002af8d) button_value_adjust_pane_cp5

0xba54,	// (0x0002b072) form2_midp_time_pane_ParamLimits

0xd5ab,	// (0x0002cbc9) cell_sct_catagory_button_pane_ParamLimits

0xd5ab,	// (0x0002cbc9) cell_sct_catagory_button_pane

0xbce8,	// (0x0002b306) bg_button_pane_cp01_ParamLimits

0xbce8,	// (0x0002b306) bg_button_pane_cp01

0xbd23,	// (0x0002b341) cell_sct_catagory_button_pane_g1

0x7ceb,	// (0x00027309) popup_tb_extension_window

0xd5bd,	// (0x0002cbdb) aid_size_cell_ext_ParamLimits

0xd5bd,	// (0x0002cbdb) aid_size_cell_ext

0x0dc5,	// (0x000203e3) bg_tb_trans_pane_cp1_ParamLimits

0x0dc5,	// (0x000203e3) bg_tb_trans_pane_cp1

0xd5dd,	// (0x0002cbfb) grid_tb_ext_pane_ParamLimits

0xd5dd,	// (0x0002cbfb) grid_tb_ext_pane

0xd60d,	// (0x0002cc2b) cell_tb_ext_pane_ParamLimits

0xd60d,	// (0x0002cc2b) cell_tb_ext_pane

0xd624,	// (0x0002cc42) cell_tb_ext_pane_g1_ParamLimits

0xd624,	// (0x0002cc42) cell_tb_ext_pane_g1

0xd641,	// (0x0002cc5f) cell_tb_ext_pane_t1

0x0dc5,	// (0x000203e3) list_highlight_pane_cp11_ParamLimits

0x0dc5,	// (0x000203e3) list_highlight_pane_cp11

0x6676,	// (0x00025c94) popup_uni_indicator_window_ParamLimits

0x6676,	// (0x00025c94) popup_uni_indicator_window

0x2cc5,	// (0x000222e3) bg_popup_sub_pane_cp14

0xd65c,	// (0x0002cc7a) list_uniindi_pane

0xd668,	// (0x0002cc86) uniindi_top_pane

0x0dc5,	// (0x000203e3) bg_uniindi_top_pane

0xd689,	// (0x0002cca7) uniindi_top_pane_g1

0xd69f,	// (0x0002ccbd) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0002f33f) uniindi_top_pane_g

0xd6c9,	// (0x0002cce7) uniindi_top_pane_t1

0xd6f5,	// (0x0002cd13) list_single_uniindi_pane_ParamLimits

0xd6f5,	// (0x0002cd13) list_single_uniindi_pane

0xbd23,	// (0x0002b341) bg_uniindi_top_pane_g1

0xd707,	// (0x0002cd25) list_single_uniindi_pane_g1

0xd71a,	// (0x0002cd38) list_single_uniindi_pane_t1

0x0bfc,	// (0x0002021a) control_bg_pane

0xd73f,	// (0x0002cd5d) bg_sctrl_sk_pane_cp1

0xd748,	// (0x0002cd66) bg_sctrl_sk_pane_cp2

0xd751,	// (0x0002cd6f) control_bg_pane_g1

0xd75a,	// (0x0002cd78) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0002f348) control_bg_pane_g

0xb796,	// (0x0002adb4) cell_indicator_nsta_pane_g1_ParamLimits

0xb7a4,	// (0x0002adc2) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x0002f0bc) cell_indicator_nsta_pane_g_ParamLimits

0x5f7c,	// (0x0002559a) form2_midp_time_pane_t1_ParamLimits

0x1022,	// (0x00020640) main_idle_act4_pane_ParamLimits

0x1022,	// (0x00020640) main_idle_act4_pane

0x7ceb,	// (0x00027309) popup_tb_extension_window_ParamLimits

0xd5ff,	// (0x0002cc1d) tb_ext_find_pane_ParamLimits

0xd5ff,	// (0x0002cc1d) tb_ext_find_pane

0xd763,	// (0x0002cd81) ai_gene_pane_1_cp1

0x73df,	// (0x000269fd) ai_gene_pane_2_cp1

0xd76b,	// (0x0002cd89) list_single_idle_plugin_calendar_pane

0xd774,	// (0x0002cd92) list_single_idle_plugin_notification_pane

0xd77d,	// (0x0002cd9b) list_single_idle_plugin_player_pane

0xd786,	// (0x0002cda4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd786,	// (0x0002cda4) list_single_idle_plugin_shortcut_pane

0xd7a8,	// (0x0002cdc6) main_idle_act4_pane_t1

0xd7ba,	// (0x0002cdd8) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0002f34d) main_idle_act4_pane_t

0xd7cc,	// (0x0002cdea) middle_sk_idle_act4_pane_ParamLimits

0xd7cc,	// (0x0002cdea) middle_sk_idle_act4_pane

0xd7e2,	// (0x0002ce00) popup_clock_digital_analogue_window_cp2

0xd7fc,	// (0x0002ce1a) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7fc,	// (0x0002ce1a) shortcut_wheel_idle_act4_pane

0xbd23,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g1

0xbd23,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g2

0xbd23,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g3

0xbd23,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g4

0xbd23,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g5

0xd810,	// (0x0002ce2e) shortcut_wheel_idle_act4_pane_g6

0xd818,	// (0x0002ce36) shortcut_wheel_idle_act4_pane_g7

0xd820,	// (0x0002ce3e) shortcut_wheel_idle_act4_pane_g8

0xd828,	// (0x0002ce46) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0002f352) shortcut_wheel_idle_act4_pane_g

0xbf9e,	// (0x0002b5bc) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) middle_sk_idle_act4_pane_g1

0xd88c,	// (0x0002ceaa) middle_sk_idle_act4_pane_g2_ParamLimits

0xd88c,	// (0x0002ceaa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0002f375) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0002f375) middle_sk_idle_act4_pane_g

0xd898,	// (0x0002ceb6) middle_sk_idle_act4_pane_t1_ParamLimits

0xd898,	// (0x0002ceb6) middle_sk_idle_act4_pane_t1

0xd8b5,	// (0x0002ced3) grid_ai_shortcut_pane_ParamLimits

0xd8b5,	// (0x0002ced3) grid_ai_shortcut_pane

0xd8ce,	// (0x0002ceec) list_highlight_pane_cp16_ParamLimits

0xd8ce,	// (0x0002ceec) list_highlight_pane_cp16

0xd8db,	// (0x0002cef9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8db,	// (0x0002cef9) list_single_idle_plugin_shortcut_pane_g1

0xd8e7,	// (0x0002cf05) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8e7,	// (0x0002cf05) list_single_idle_plugin_shortcut_pane_g2

0xd901,	// (0x0002cf1f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd901,	// (0x0002cf1f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0002f37a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0002f37a) list_single_idle_plugin_shortcut_pane_g

0xd914,	// (0x0002cf32) cell_ai_shortcut_pane_ParamLimits

0xd914,	// (0x0002cf32) cell_ai_shortcut_pane

0xd937,	// (0x0002cf55) cell_ai_shortcut_pane_g1_ParamLimits

0xd937,	// (0x0002cf55) cell_ai_shortcut_pane_g1

0xd763,	// (0x0002cd81) ai_gene_pane_1_cp2

0xd959,	// (0x0002cf77) ai_gene_pane_2_cp2

0xd961,	// (0x0002cf7f) list_highlight_pane_cp15

0xd96a,	// (0x0002cf88) list_single_idle_plugin_calendar_pane_g1

0xd961,	// (0x0002cf7f) list_highlight_pane_cp17

0xd972,	// (0x0002cf90) list_single_idle_plugin_calendar_pane_g1_copy1

0xd97a,	// (0x0002cf98) list_single_idle_plugin_player_pane_g1

0xb0bb,	// (0x0002a6d9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0002f381) list_single_idle_plugin_player_pane_g

0xd982,	// (0x0002cfa0) list_single_idle_plugin_player_pane_t1

0xd990,	// (0x0002cfae) list_single_idle_plugin_player_pane_t2

0xd99e,	// (0x0002cfbc) list_single_idle_plugin_player_pane_t3

0xd9ac,	// (0x0002cfca) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0002f386) list_single_idle_plugin_player_pane_t

0xd9ba,	// (0x0002cfd8) wait_bar_pane_cp15

0xd9c2,	// (0x0002cfe0) grid_ai_notification_pane

0xb0bb,	// (0x0002a6d9) list_single_idle_plugin_notification_pane_g1

0xd9cb,	// (0x0002cfe9) cell_ai_notification_pane_ParamLimits

0xd9cb,	// (0x0002cfe9) cell_ai_notification_pane

0xd9d8,	// (0x0002cff6) cell_ai_notification_pane_g1

0xd9e0,	// (0x0002cffe) cell_ai_notification_pane_t1

0xd9ee,	// (0x0002d00c) tb_ext_find_button_pane

0xd9f6,	// (0x0002d014) tb_ext_find_pane_g1

0xd9fe,	// (0x0002d01c) tb_ext_find_pane_t1

0x3385,	// (0x000229a3) tb_ext_find_button_pane_g1

0xda0c,	// (0x0002d02a) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0002f38f) tb_ext_find_button_pane_g

0xd7a8,	// (0x0002cdc6) main_idle_act4_pane_t1_ParamLimits

0xd7ba,	// (0x0002cdd8) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0002f34d) main_idle_act4_pane_t_ParamLimits

0xd7e2,	// (0x0002ce00) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7f0,	// (0x0002ce0e) sat_plugin_idle_act4_pane_ParamLimits

0xd7f0,	// (0x0002ce0e) sat_plugin_idle_act4_pane

0xda15,	// (0x0002d033) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda15,	// (0x0002d033) sat_plugin_idle_act4_pane_t1

0xda28,	// (0x0002d046) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda28,	// (0x0002d046) sat_plugin_idle_act4_pane_t2

0xda3b,	// (0x0002d059) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda3b,	// (0x0002d059) sat_plugin_idle_act4_pane_t3

0xda4e,	// (0x0002d06c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda4e,	// (0x0002d06c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0002f394) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0002f394) sat_plugin_idle_act4_pane_t

0x65a7,	// (0x00025bc5) popup_battery_window_ParamLimits

0x65a7,	// (0x00025bc5) popup_battery_window

0x0dc5,	// (0x000203e3) bg_popup_sub_pane_cp25_ParamLimits

0x0dc5,	// (0x000203e3) bg_popup_sub_pane_cp25

0xda61,	// (0x0002d07f) popup_battery_window_g1_ParamLimits

0xda61,	// (0x0002d07f) popup_battery_window_g1

0xda6d,	// (0x0002d08b) popup_battery_window_t1_ParamLimits

0xda6d,	// (0x0002d08b) popup_battery_window_t1

0xda7f,	// (0x0002d09d) popup_battery_window_t2_ParamLimits

0xda7f,	// (0x0002d09d) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0002f39d) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0002f39d) popup_battery_window_t

0x72aa,	// (0x000268c8) midp_canvas_pane_ParamLimits

0x7321,	// (0x0002693f) midp_keypad_pane_ParamLimits

0x7321,	// (0x0002693f) midp_keypad_pane

0x7813,	// (0x00026e31) main_midp_pane_ParamLimits

0xb822,	// (0x0002ae40) signal_pane_g2_cp_ParamLimits

0xda9c,	// (0x0002d0ba) aid_size_cell_midp_keypad_ParamLimits

0xda9c,	// (0x0002d0ba) aid_size_cell_midp_keypad

0xdab6,	// (0x0002d0d4) midp_keyp_game_grid_pane_ParamLimits

0xdab6,	// (0x0002d0d4) midp_keyp_game_grid_pane

0xdad6,	// (0x0002d0f4) midp_keyp_rocker_pane_ParamLimits

0xdad6,	// (0x0002d0f4) midp_keyp_rocker_pane

0xdb01,	// (0x0002d11f) midp_keyp_sk_left_pane_ParamLimits

0xdb01,	// (0x0002d11f) midp_keyp_sk_left_pane

0xdb5b,	// (0x0002d179) midp_keyp_sk_right_pane_ParamLimits

0xdb5b,	// (0x0002d179) midp_keyp_sk_right_pane

0x0bfc,	// (0x0002021a) bg_button_pane_cp03

0xdbb5,	// (0x0002d1d3) midp_keyp_sk_left_pane_g1

0x0bfc,	// (0x0002021a) bg_button_pane_cp04

0xdbb5,	// (0x0002d1d3) midp_keyp_sk_right_pane_g1

0xbd23,	// (0x0002b341) midp_keyp_rocker_pane_g1

0xdbbe,	// (0x0002d1dc) keyp_game_cell_pane_ParamLimits

0xdbbe,	// (0x0002d1dc) keyp_game_cell_pane

0x0bfc,	// (0x0002021a) bg_button_pane_cp02

0xdbd1,	// (0x0002d1ef) keyp_game_cell_pane_g1

0x65f1,	// (0x00025c0f) popup_fep_vkb2_window_ParamLimits

0x65f1,	// (0x00025c0f) popup_fep_vkb2_window

0x8f6b,	// (0x00028589) aid_size_cell_vkb2_ParamLimits

0x8f6b,	// (0x00028589) aid_size_cell_vkb2

0x8fbf,	// (0x000285dd) popup_fep_vkb2_window_g1_ParamLimits

0x8fbf,	// (0x000285dd) popup_fep_vkb2_window_g1

0x9007,	// (0x00028625) vkb2_area_bottom_pane_ParamLimits

0x9007,	// (0x00028625) vkb2_area_bottom_pane

0x905b,	// (0x00028679) vkb2_area_keypad_pane_ParamLimits

0x905b,	// (0x00028679) vkb2_area_keypad_pane

0x90a1,	// (0x000286bf) vkb2_area_top_pane_ParamLimits

0x90a1,	// (0x000286bf) vkb2_area_top_pane

0x911b,	// (0x00028739) vkb2_top_entry_pane_ParamLimits

0x911b,	// (0x00028739) vkb2_top_entry_pane

0x9145,	// (0x00028763) vkb2_top_grid_left_pane_ParamLimits

0x9145,	// (0x00028763) vkb2_top_grid_left_pane

0x9163,	// (0x00028781) vkb2_top_grid_right_pane_ParamLimits

0x9163,	// (0x00028781) vkb2_top_grid_right_pane

0x9181,	// (0x0002879f) vkb2_cell_keypad_pane_ParamLimits

0x9181,	// (0x0002879f) vkb2_cell_keypad_pane

0x9252,	// (0x00028870) vkb2_area_bottom_grid_pane_ParamLimits

0x9252,	// (0x00028870) vkb2_area_bottom_grid_pane

0x9278,	// (0x00028896) vkb2_area_bottom_pane_g1_ParamLimits

0x9278,	// (0x00028896) vkb2_area_bottom_pane_g1

0x929c,	// (0x000288ba) vkb2_area_bottom_pane_g2_ParamLimits

0x929c,	// (0x000288ba) vkb2_area_bottom_pane_g2

0x92ca,	// (0x000288e8) vkb2_area_bottom_pane_g3_ParamLimits

0x92ca,	// (0x000288e8) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0002f3a2) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0002f3a2) vkb2_area_bottom_pane_g

0x932b,	// (0x00028949) vkb2_top_cell_left_pane_ParamLimits

0x932b,	// (0x00028949) vkb2_top_cell_left_pane

0xdbe2,	// (0x0002d200) vkb2_top_entry_pane_g1_ParamLimits

0xdbe2,	// (0x0002d200) vkb2_top_entry_pane_g1

0xdbf0,	// (0x0002d20e) vkb2_top_entry_pane_t1_ParamLimits

0xdbf0,	// (0x0002d20e) vkb2_top_entry_pane_t1

0xdc22,	// (0x0002d240) vkb2_top_entry_pane_t2_ParamLimits

0xdc22,	// (0x0002d240) vkb2_top_entry_pane_t2

0xdc54,	// (0x0002d272) vkb2_top_entry_pane_t3_ParamLimits

0xdc54,	// (0x0002d272) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0002f3a9) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0002f3a9) vkb2_top_entry_pane_t

0x9378,	// (0x00028996) vkb2_top_grid_right_pane_g1_ParamLimits

0x9378,	// (0x00028996) vkb2_top_grid_right_pane_g1

0x938e,	// (0x000289ac) vkb2_top_grid_right_pane_g2_ParamLimits

0x938e,	// (0x000289ac) vkb2_top_grid_right_pane_g2

0x93a6,	// (0x000289c4) vkb2_top_grid_right_pane_g3_ParamLimits

0x93a6,	// (0x000289c4) vkb2_top_grid_right_pane_g3

0x93be,	// (0x000289dc) vkb2_top_grid_right_pane_g4_ParamLimits

0x93be,	// (0x000289dc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0002f3b0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0002f3b0) vkb2_top_grid_right_pane_g

0x93d4,	// (0x000289f2) vkb2_top_cell_left_pane_g1

0x93eb,	// (0x00028a09) vkb2_cell_keypad_pane_g1_ParamLimits

0x93eb,	// (0x00028a09) vkb2_cell_keypad_pane_g1

0xdc78,	// (0x0002d296) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc78,	// (0x0002d296) vkb2_cell_keypad_pane_t1

0x93f9,	// (0x00028a17) vkb2_cell_bottom_grid_pane_ParamLimits

0x93f9,	// (0x00028a17) vkb2_cell_bottom_grid_pane

0x9432,	// (0x00028a50) vkb2_cell_bottom_grid_pane_g1

0xd830,	// (0x0002ce4e) aid_call2_pane_cp02

0xd838,	// (0x0002ce56) aid_call_pane_cp02

0xd840,	// (0x0002ce5e) clock_digital_number_pane_cp10

0xd848,	// (0x0002ce66) clock_digital_number_pane_cp11

0xd850,	// (0x0002ce6e) clock_digital_number_pane_cp12

0xd858,	// (0x0002ce76) clock_digital_number_pane_cp13

0xd860,	// (0x0002ce7e) clock_digital_separator_pane_cp10

0x3385,	// (0x000229a3) popup_clock_digital_analogue_window_cp2_g1

0x3385,	// (0x000229a3) popup_clock_digital_analogue_window_cp2_g2

0xd868,	// (0x0002ce86) popup_clock_digital_analogue_window_cp2_g3

0x3385,	// (0x000229a3) popup_clock_digital_analogue_window_cp2_g4

0xd868,	// (0x0002ce86) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0002f365) popup_clock_digital_analogue_window_cp2_g

0xd870,	// (0x0002ce8e) popup_clock_digital_analogue_window_cp2_t1

0xd87e,	// (0x0002ce9c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0002f370) popup_clock_digital_analogue_window_cp2_t

0xbd23,	// (0x0002b341) clock_digital_number_pane_cp10_g1

0xbd23,	// (0x0002b341) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002f158) clock_digital_number_pane_cp10_g

0xbd23,	// (0x0002b341) clock_digital_separator_pane_cp10_g1

0xbd23,	// (0x0002b341) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002f158) clock_digital_separator_pane_cp10_g

0xd6ab,	// (0x0002ccc9) uniindi_top_pane_g3

0xd6bc,	// (0x0002ccda) uniindi_top_pane_g4

0x920c,	// (0x0002882a) vkb2_row_keypad_pane_ParamLimits

0x920c,	// (0x0002882a) vkb2_row_keypad_pane

0x944e,	// (0x00028a6c) vkb2_cell_t_keypad_pane_ParamLimits

0x944e,	// (0x00028a6c) vkb2_cell_t_keypad_pane

0x945e,	// (0x00028a7c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x945e,	// (0x00028a7c) vkb2_cell_t_keypad_pane_cp08

0x9473,	// (0x00028a91) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9473,	// (0x00028a91) vkb2_cell_t_keypad_pane_cp09

0x9487,	// (0x00028aa5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9487,	// (0x00028aa5) vkb2_cell_t_keypad_pane_cp01

0x9498,	// (0x00028ab6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9498,	// (0x00028ab6) vkb2_cell_t_keypad_pane_cp02

0x94a9,	// (0x00028ac7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x94a9,	// (0x00028ac7) vkb2_cell_t_keypad_pane_cp03

0x94ba,	// (0x00028ad8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x94ba,	// (0x00028ad8) vkb2_cell_t_keypad_pane_cp04

0x94cb,	// (0x00028ae9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x94cb,	// (0x00028ae9) vkb2_cell_t_keypad_pane_cp05

0x94dc,	// (0x00028afa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x94dc,	// (0x00028afa) vkb2_cell_t_keypad_pane_cp06

0x94ef,	// (0x00028b0d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x94ef,	// (0x00028b0d) vkb2_cell_t_keypad_pane_cp07

0x9504,	// (0x00028b22) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9504,	// (0x00028b22) vkb2_cell_t_keypad_pane_cp10

0xbf9e,	// (0x0002b5bc) vkb2_cell_t_keypad_pane_g1

0xdc8f,	// (0x0002d2ad) vkb2_cell_t_keypad_pane_t1

0x0bfc,	// (0x0002021a) popup_grid_graphic2_window

0xdca1,	// (0x0002d2bf) aid_size_cell_graphic2_ParamLimits

0xdca1,	// (0x0002d2bf) aid_size_cell_graphic2

0xdcd9,	// (0x0002d2f7) bg_popup_window_pane_cp21_ParamLimits

0xdcd9,	// (0x0002d2f7) bg_popup_window_pane_cp21

0xdce7,	// (0x0002d305) graphic2_pages_pane_ParamLimits

0xdce7,	// (0x0002d305) graphic2_pages_pane

0xdd2d,	// (0x0002d34b) grid_graphic2_control_pane_ParamLimits

0xdd2d,	// (0x0002d34b) grid_graphic2_control_pane

0xdd6b,	// (0x0002d389) grid_graphic2_pane_ParamLimits

0xdd6b,	// (0x0002d389) grid_graphic2_pane

0xdde1,	// (0x0002d3ff) cell_graphic2_pane

0x0bfc,	// (0x0002021a) main_comp_mode_pane

0xcf1c,	// (0x0002c53a) list_ai3_gene_pane_ParamLimits

0xd2e4,	// (0x0002c902) bg_popup_window_pane_cp19_ParamLimits

0xd2f0,	// (0x0002c90e) bg_touch_area_indi_pane_ParamLimits

0xd2f0,	// (0x0002c90e) bg_touch_area_indi_pane

0xd306,	// (0x0002c924) bg_touch_area_indi_pane_cp01_ParamLimits

0xd306,	// (0x0002c924) bg_touch_area_indi_pane_cp01

0xd31e,	// (0x0002c93c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd31e,	// (0x0002c93c) bg_touch_area_indi_pane_cp02

0xd338,	// (0x0002c956) bg_touch_area_indi_pane_cp03_ParamLimits

0xd338,	// (0x0002c956) bg_touch_area_indi_pane_cp03

0xd352,	// (0x0002c970) popup_slider_window_g1_ParamLimits

0xd36e,	// (0x0002c98c) popup_slider_window_g2_ParamLimits

0xd38a,	// (0x0002c9a8) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0002f2fa) popup_slider_window_g_ParamLimits

0xd3e6,	// (0x0002ca04) popup_slider_window_t1_ParamLimits

0xd45a,	// (0x0002ca78) small_volume_slider_vertical_pane_ParamLimits

0xdde1,	// (0x0002d3ff) cell_graphic2_pane_ParamLimits

0xde33,	// (0x0002d451) bg_button_pane_cp10_ParamLimits

0xde33,	// (0x0002d451) bg_button_pane_cp10

0xde48,	// (0x0002d466) bg_button_pane_cp11_ParamLimits

0xde48,	// (0x0002d466) bg_button_pane_cp11

0xde5d,	// (0x0002d47b) graphic2_pages_pane_g1_ParamLimits

0xde5d,	// (0x0002d47b) graphic2_pages_pane_g1

0xde78,	// (0x0002d496) graphic2_pages_pane_g2_ParamLimits

0xde78,	// (0x0002d496) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0002f3be) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0002f3be) graphic2_pages_pane_g

0xde90,	// (0x0002d4ae) graphic2_pages_pane_t1_ParamLimits

0xde90,	// (0x0002d4ae) graphic2_pages_pane_t1

0xdea6,	// (0x0002d4c4) cell_graphic2_control_pane_ParamLimits

0xdea6,	// (0x0002d4c4) cell_graphic2_control_pane

0xdec9,	// (0x0002d4e7) cell_graphic2_pane_g1_ParamLimits

0xdec9,	// (0x0002d4e7) cell_graphic2_pane_g1

0xded6,	// (0x0002d4f4) cell_graphic2_pane_g2_ParamLimits

0xded6,	// (0x0002d4f4) cell_graphic2_pane_g2

0xdee3,	// (0x0002d501) cell_graphic2_pane_g3_ParamLimits

0xdee3,	// (0x0002d501) cell_graphic2_pane_g3

0xdef0,	// (0x0002d50e) cell_graphic2_pane_g4_ParamLimits

0xdef0,	// (0x0002d50e) cell_graphic2_pane_g4

0xdefd,	// (0x0002d51b) cell_graphic2_pane_g5_ParamLimits

0xdefd,	// (0x0002d51b) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0002f3c3) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0002f3c3) cell_graphic2_pane_g

0xdf18,	// (0x0002d536) cell_graphic2_pane_t1_ParamLimits

0xdf18,	// (0x0002d536) cell_graphic2_pane_t1

0x846f,	// (0x00027a8d) grid_highlight_pane_cp11_ParamLimits

0x846f,	// (0x00027a8d) grid_highlight_pane_cp11

0x0dc5,	// (0x000203e3) bg_button_pane_cp05

0xdf41,	// (0x0002d55f) cell_graphic2_control_pane_g1

0xbd23,	// (0x0002b341) bg_touch_area_indi_pane_g1

0xdf69,	// (0x0002d587) aid_cmod_rocker_key_size

0xdf73,	// (0x0002d591) aid_cmode_itu_key_size

0xdf7d,	// (0x0002d59b) main_cmode_video_pane

0xdf87,	// (0x0002d5a5) main_comp_mode_itu_pane

0xdf93,	// (0x0002d5b1) main_comp_mode_rocker_pane

0xdf9f,	// (0x0002d5bd) cell_cmode_rocker_pane_ParamLimits

0xdf9f,	// (0x0002d5bd) cell_cmode_rocker_pane

0xdfb3,	// (0x0002d5d1) cell_cmode_itu_pane_ParamLimits

0xdfb3,	// (0x0002d5d1) cell_cmode_itu_pane

0x2cc5,	// (0x000222e3) bg_button_pane_cp06_ParamLimits

0x2cc5,	// (0x000222e3) bg_button_pane_cp06

0xbf9e,	// (0x0002b5bc) cell_cmode_rocker_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) cell_cmode_rocker_pane_g1

0xd501,	// (0x0002cb1f) cell_cmode_rocker_pane_g2_ParamLimits

0xd501,	// (0x0002cb1f) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0002f3d3) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0002f3d3) cell_cmode_rocker_pane_g

0x0bfc,	// (0x0002021a) bg_button_pane_cp07

0xdfca,	// (0x0002d5e8) cell_cmode_itu_pane_g1

0xdfd3,	// (0x0002d5f1) cell_cmode_itu_pane_t1

0xdfe1,	// (0x0002d5ff) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0002f3d8) cell_cmode_itu_pane_t

0xd72f,	// (0x0002cd4d) aid_touch_ctrl_left

0xd737,	// (0x0002cd55) aid_touch_ctrl_right

0x0bfc,	// (0x0002021a) compa_mode_pane

0xdfef,	// (0x0002d60d) aid_cmod_rocker_key_size_cp

0xdff9,	// (0x0002d617) aid_cmode_itu_key_size_cp

0xe003,	// (0x0002d621) compa_mode_pane_g1

0xe00b,	// (0x0002d629) compa_mode_pane_g2

0xe013,	// (0x0002d631) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0002f3dd) compa_mode_pane_g

0xe01b,	// (0x0002d639) main_comp_mode_itu_pane_cp

0xe023,	// (0x0002d641) main_comp_mode_rocker_pane_cp

0xe02b,	// (0x0002d649) cell_cmode_itu_pane_cp_ParamLimits

0xe02b,	// (0x0002d649) cell_cmode_itu_pane_cp

0xe040,	// (0x0002d65e) cell_cmode_rocker_pane_cp_ParamLimits

0xe040,	// (0x0002d65e) cell_cmode_rocker_pane_cp

0x2cc5,	// (0x000222e3) bg_button_pane_cp06_cp_ParamLimits

0x2cc5,	// (0x000222e3) bg_button_pane_cp06_cp

0xbf9e,	// (0x0002b5bc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf9e,	// (0x0002b5bc) cell_cmode_rocker_pane_g1_cp

0xbd23,	// (0x0002b341) cell_cmode_rocker_pane_g2_cp

0x0bfc,	// (0x0002021a) bg_button_pane_cp07_cp

0xe052,	// (0x0002d670) cell_cmode_itu_pane_g1_cp

0xe05b,	// (0x0002d679) cell_cmode_itu_pane_t1_cp

0xe05b,	// (0x0002d679) cell_cmode_itu_pane_t2_cp

0xac1c,	// (0x0002a23a) settings_code_pane_cp2

0x0c78,	// (0x00020296) bg_popup_window_pane_cp3_ParamLimits

0x0fb3,	// (0x000205d1) heading_pane_cp3_ParamLimits

0x0fbf,	// (0x000205dd) listscroll_popup_graphic_pane_ParamLimits

0x8afb,	// (0x00028119) fep_hwr_aid_pane_ParamLimits

0x8ee0,	// (0x000284fe) aid_touch_sctrl_top_ParamLimits

0x8eed,	// (0x0002850b) sctrl_sk_top_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0002f313) sctrl_sk_top_pane_g_ParamLimits

0x8efa,	// (0x00028518) sctrl_sk_top_pane_t1_ParamLimits

0x8ee0,	// (0x000284fe) aid_touch_sctrl_bottom_ParamLimits

0x8efa,	// (0x00028518) sctrl_sk_bottom_pane_t1_ParamLimits

0xd675,	// (0x0002cc93) aid_area_touch_clock

0x90e3,	// (0x00028701) aid_vkb2_area_top_pane_cell_ParamLimits

0x90e3,	// (0x00028701) aid_vkb2_area_top_pane_cell

0x922e,	// (0x0002884c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x922e,	// (0x0002884c) aid_vkb2_area_bottom_pane_cell

0xdbda,	// (0x0002d1f8) popup_char_count_window

0xe069,	// (0x0002d687) popup_char_count_window_g1

0xe072,	// (0x0002d690) popup_char_count_window_g2

0xe07b,	// (0x0002d699) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0002f3e4) popup_char_count_window_g

0xe084,	// (0x0002d6a2) popup_char_count_window_t1

0x8f9d,	// (0x000285bb) popup_fep_char_preview_window_ParamLimits

0x8f9d,	// (0x000285bb) popup_fep_char_preview_window

0x9101,	// (0x0002871f) vkb2_top_candi_pane_ParamLimits

0x9101,	// (0x0002871f) vkb2_top_candi_pane

0xe092,	// (0x0002d6b0) cell_vkb2_top_candi_pane_ParamLimits

0xe092,	// (0x0002d6b0) cell_vkb2_top_candi_pane

0x9d2f,	// (0x0002934d) bg_popup_fep_char_preview_window_ParamLimits

0x9d2f,	// (0x0002934d) bg_popup_fep_char_preview_window

0x9519,	// (0x00028b37) popup_fep_char_preview_window_t1_ParamLimits

0x9519,	// (0x00028b37) popup_fep_char_preview_window_t1

0xe0e3,	// (0x0002d701) bg_popup_fep_char_preview_window_g1

0xe0eb,	// (0x0002d709) bg_popup_fep_char_preview_window_g2

0xe0f3,	// (0x0002d711) bg_popup_fep_char_preview_window_g3

0xe0fb,	// (0x0002d719) bg_popup_fep_char_preview_window_g4

0xe103,	// (0x0002d721) bg_popup_fep_char_preview_window_g5

0x9553,	// (0x00028b71) bg_popup_fep_char_preview_window_g6

0xe10b,	// (0x0002d729) bg_popup_fep_char_preview_window_g7

0xe113,	// (0x0002d731) bg_popup_fep_char_preview_window_g8

0xe11b,	// (0x0002d739) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0002f3eb) bg_popup_fep_char_preview_window_g

0xbf9e,	// (0x0002b5bc) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) cell_vkb2_top_candi_pane_g1

0xc2df,	// (0x0002b8fd) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc2df,	// (0x0002b8fd) cell_vkb2_top_candi_pane_g2

0xc300,	// (0x0002b91e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc300,	// (0x0002b91e) cell_vkb2_top_candi_pane_g3

0x955b,	// (0x00028b79) cell_vkb2_top_candi_pane_g4_ParamLimits

0x955b,	// (0x00028b79) cell_vkb2_top_candi_pane_g4

0xe123,	// (0x0002d741) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe123,	// (0x0002d741) cell_vkb2_top_candi_pane_g5

0xd501,	// (0x0002cb1f) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd501,	// (0x0002cb1f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0002f3fe) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0002f3fe) cell_vkb2_top_candi_pane_g

0x957c,	// (0x00028b9a) cell_vkb2_top_candi_pane_t1

0x8969,	// (0x00027f87) aid_size_touch_slider_mark_ParamLimits

0x8969,	// (0x00027f87) aid_size_touch_slider_mark

0xdd1d,	// (0x0002d33b) grid_graphic2_catg_pane_ParamLimits

0xdd1d,	// (0x0002d33b) grid_graphic2_catg_pane

0xddbb,	// (0x0002d3d9) popup_grid_graphic2_window_t1_ParamLimits

0xddbb,	// (0x0002d3d9) popup_grid_graphic2_window_t1

0xddcd,	// (0x0002d3eb) popup_grid_graphic2_window_t2_ParamLimits

0xddcd,	// (0x0002d3eb) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0002f3b9) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0002f3b9) popup_grid_graphic2_window_t

0x0dc5,	// (0x000203e3) bg_button_pane_cp05_ParamLimits

0xdf41,	// (0x0002d55f) cell_graphic2_control_pane_g1_ParamLimits

0xe144,	// (0x0002d762) cell_graphic2_catg_pane_ParamLimits

0xe144,	// (0x0002d762) cell_graphic2_catg_pane

0x0bfc,	// (0x0002021a) bg_button_pane_cp12

0xe156,	// (0x0002d774) cell_graphic2_catg_pane_g1

0xd641,	// (0x0002cc5f) cell_tb_ext_pane_t1_ParamLimits

0x934b,	// (0x00028969) vkb2_top_cell_right_narrow_pane_ParamLimits

0x934b,	// (0x00028969) vkb2_top_cell_right_narrow_pane

0x9363,	// (0x00028981) vkb2_top_cell_right_wide_pane_ParamLimits

0x9363,	// (0x00028981) vkb2_top_cell_right_wide_pane

0xf540,	// (0x0002eb5e) bg_vkb2_func_pane_ParamLimits

0xf540,	// (0x0002eb5e) bg_vkb2_func_pane

0x93d4,	// (0x000289f2) vkb2_top_cell_left_pane_g1_ParamLimits

0xf540,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf540,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp03

0x9432,	// (0x00028a50) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x838c,	// (0x000279aa) bg_vkb2_func_pane_g1

0x8394,	// (0x000279b2) bg_vkb2_func_pane_g2

0x83a4,	// (0x000279c2) bg_vkb2_func_pane_g3

0x839c,	// (0x000279ba) bg_vkb2_func_pane_g4

0x83ac,	// (0x000279ca) bg_vkb2_func_pane_g5

0x83b4,	// (0x000279d2) bg_vkb2_func_pane_g6

0x83bc,	// (0x000279da) bg_vkb2_func_pane_g7

0x83c4,	// (0x000279e2) bg_vkb2_func_pane_g8

0x8384,	// (0x000279a2) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0002f40b) bg_vkb2_func_pane_g

0xf540,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf540,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp01

0x93d4,	// (0x000289f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x93d4,	// (0x000289f2) vkb2_top_cell_right_wide_pane_g1

0xf540,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf540,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp02

0x9432,	// (0x00028a50) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9432,	// (0x00028a50) vkb2_top_cell_right_narrow_pane_g1

0xd262,	// (0x0002c880) aid_touch_area_decrease_ParamLimits

0xd262,	// (0x0002c880) aid_touch_area_decrease

0xd286,	// (0x0002c8a4) aid_touch_area_increase_ParamLimits

0xd286,	// (0x0002c8a4) aid_touch_area_increase

0xd292,	// (0x0002c8b0) aid_touch_area_mute_ParamLimits

0xd292,	// (0x0002c8b0) aid_touch_area_mute

0xd2b6,	// (0x0002c8d4) aid_touch_area_slider_ParamLimits

0xd2b6,	// (0x0002c8d4) aid_touch_area_slider

0xd3a6,	// (0x0002c9c4) popup_slider_window_g4_ParamLimits

0xd3a6,	// (0x0002c9c4) popup_slider_window_g4

0xd3b2,	// (0x0002c9d0) popup_slider_window_g5_ParamLimits

0xd3b2,	// (0x0002c9d0) popup_slider_window_g5

0xd3d4,	// (0x0002c9f2) popup_slider_window_g6_ParamLimits

0xd3d4,	// (0x0002c9f2) popup_slider_window_g6

0xd414,	// (0x0002ca32) popup_slider_window_t2_ParamLimits

0xd414,	// (0x0002ca32) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0002f307) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0002f307) popup_slider_window_t

0xd42c,	// (0x0002ca4a) slider_pane_ParamLimits

0xd42c,	// (0x0002ca4a) slider_pane

0xe15f,	// (0x0002d77d) slider_pane_g1_ParamLimits

0xe15f,	// (0x0002d77d) slider_pane_g1

0xe173,	// (0x0002d791) slider_pane_g2_ParamLimits

0xe173,	// (0x0002d791) slider_pane_g2

0xe189,	// (0x0002d7a7) slider_pane_g3_ParamLimits

0xe189,	// (0x0002d7a7) slider_pane_g3

0x0003,

0xfe00,	// (0x0002f41e) slider_pane_g_ParamLimits

0xfe00,	// (0x0002f41e) slider_pane_g

0x7d4d,	// (0x0002736b) popup_tb_float_extension_window_ParamLimits

0x7d4d,	// (0x0002736b) popup_tb_float_extension_window

0xe1b5,	// (0x0002d7d3) aid_size_cell_tb_float_ext

0x0bfc,	// (0x0002021a) bg_popup_sub_window_cp28

0xe1c1,	// (0x0002d7df) grid_tb_float_ext_pane

0xe1cd,	// (0x0002d7eb) cell_tb_float_ext_pane_ParamLimits

0xe1cd,	// (0x0002d7eb) cell_tb_float_ext_pane

0xe1e9,	// (0x0002d807) cell_tb_float_ext_pane_g1

0xe1f2,	// (0x0002d810) grid_highlight_pane_cp12

0x8c34,	// (0x00028252) cell_last_hwr_side_pane_ParamLimits

0x8c34,	// (0x00028252) cell_last_hwr_side_pane

0xbd23,	// (0x0002b341) cell_last_hwr_side_pane_g1

0xe1fb,	// (0x0002d819) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0002f427) cell_last_hwr_side_pane_g

0x92fa,	// (0x00028918) vkb2_area_bottom_space_btn_pane_ParamLimits

0x92fa,	// (0x00028918) vkb2_area_bottom_space_btn_pane

0xbf9e,	// (0x0002b5bc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc8f,	// (0x0002d2ad) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x957c,	// (0x00028b9a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x959a,	// (0x00028bb8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x959a,	// (0x00028bb8) vkb2_area_bottom_space_btn_pane_g1

0x95d4,	// (0x00028bf2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x95d4,	// (0x00028bf2) vkb2_area_bottom_space_btn_pane_g2

0x960a,	// (0x00028c28) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x960a,	// (0x00028c28) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0002f42c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0002f42c) vkb2_area_bottom_space_btn_pane_g

0x8ba4,	// (0x000281c2) cel_fep_hwr_func_pane_ParamLimits

0x8ba4,	// (0x000281c2) cel_fep_hwr_func_pane

0x8be0,	// (0x000281fe) cell_hwr_side_button_pane_ParamLimits

0x8be0,	// (0x000281fe) cell_hwr_side_button_pane

0xd675,	// (0x0002cc93) aid_area_touch_clock_ParamLimits

0x0dc5,	// (0x000203e3) bg_uniindi_top_pane_ParamLimits

0xd689,	// (0x0002cca7) uniindi_top_pane_g1_ParamLimits

0xd69f,	// (0x0002ccbd) uniindi_top_pane_g2_ParamLimits

0xd6ab,	// (0x0002ccc9) uniindi_top_pane_g3_ParamLimits

0xd6bc,	// (0x0002ccda) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0002f33f) uniindi_top_pane_g_ParamLimits

0xd6c9,	// (0x0002cce7) uniindi_top_pane_t1_ParamLimits

0x0dc5,	// (0x000203e3) bg_vkb2_func_pane_cp01_ParamLimits

0x0dc5,	// (0x000203e3) bg_vkb2_func_pane_cp01

0xe204,	// (0x0002d822) cel_fep_hwr_func_pane_g1_ParamLimits

0xe204,	// (0x0002d822) cel_fep_hwr_func_pane_g1

0x0dc5,	// (0x000203e3) bg_vkb2_func_pane_cp02_ParamLimits

0x0dc5,	// (0x000203e3) bg_vkb2_func_pane_cp02

0xe204,	// (0x0002d822) cell_hwr_side_button_pane_g1_ParamLimits

0xe204,	// (0x0002d822) cell_hwr_side_button_pane_g1

0x81d5,	// (0x000277f3) status_pane_g4_ParamLimits

0x81d5,	// (0x000277f3) status_pane_g4

0x81ef,	// (0x0002780d) status_pane_t1

0xbac2,	// (0x0002b0e0) form2_midp_gauge_slider_cont_pane

0xbaca,	// (0x0002b0e8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbadc,	// (0x0002b0fa) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbaee,	// (0x0002b10c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x0002f10b) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb00,	// (0x0002b11e) form2_midp_slider_pane_ParamLimits

0x8f5d,	// (0x0002857b) aid_size_cell_func_vkb2_ParamLimits

0x8f5d,	// (0x0002857b) aid_size_cell_func_vkb2

0xe1a1,	// (0x0002d7bf) slider_pane_g4_ParamLimits

0xe1a1,	// (0x0002d7bf) slider_pane_g4

0x9654,	// (0x00028c72) form2_midp_gauge_slider_pane_t2_cp01

0x9662,	// (0x00028c80) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9662,	// (0x00028c80) form2_midp_gauge_slider_pane_t3_cp01

0x967f,	// (0x00028c9d) form2_midp_slider_pane_cp01

0x0bfc,	// (0x0002021a) navi_smil_pane

0xe23d,	// (0x0002d85b) navi_smil_pane_g1

0xe245,	// (0x0002d863) navi_smil_pane_t1

0xe212,	// (0x0002d830) form2_midp_slider_pane_g1

0xe21b,	// (0x0002d839) form2_midp_slider_pane_g2

0xe223,	// (0x0002d841) form2_midp_slider_pane_g3

0xe212,	// (0x0002d830) form2_midp_slider_pane_g4

0xe22b,	// (0x0002d849) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0002f435) form2_midp_slider_pane_g

0x9644,	// (0x00028c62) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9644,	// (0x00028c62) vkb2_area_bottom_space_btn_pane_g4

0x7fec,	// (0x0002760a) lc0_navi_pane_ParamLimits

0x7fec,	// (0x0002760a) lc0_navi_pane

0x8068,	// (0x00027686) lc0_stat_indi_pane_ParamLimits

0x8068,	// (0x00027686) lc0_stat_indi_pane

0x807f,	// (0x0002769d) ls0_title_pane_ParamLimits

0x807f,	// (0x0002769d) ls0_title_pane

0x2cc5,	// (0x000222e3) bg_popup_sub_pane_cp14_ParamLimits

0xd65c,	// (0x0002cc7a) list_uniindi_pane_ParamLimits

0xd668,	// (0x0002cc86) uniindi_top_pane_ParamLimits

0xd707,	// (0x0002cd25) list_single_uniindi_pane_g1_ParamLimits

0xd71a,	// (0x0002cd38) list_single_uniindi_pane_t1_ParamLimits

0x9688,	// (0x00028ca6) lc0_stat_clock_pane_ParamLimits

0x9688,	// (0x00028ca6) lc0_stat_clock_pane

0xe253,	// (0x0002d871) lc0_stat_indi_pane_g1_ParamLimits

0xe253,	// (0x0002d871) lc0_stat_indi_pane_g1

0xe260,	// (0x0002d87e) lc0_stat_indi_pane_g2_ParamLimits

0xe260,	// (0x0002d87e) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0002f440) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0002f440) lc0_stat_indi_pane_g

0x9695,	// (0x00028cb3) lc0_uni_indicator_pane_ParamLimits

0x9695,	// (0x00028cb3) lc0_uni_indicator_pane

0xe26d,	// (0x0002d88b) ls0_title_pane_g1_ParamLimits

0xe26d,	// (0x0002d88b) ls0_title_pane_g1

0xe281,	// (0x0002d89f) ls0_title_pane_t1_ParamLimits

0xe281,	// (0x0002d89f) ls0_title_pane_t1

0x96a2,	// (0x00028cc0) lc0_uni_indicator_pane_g1_ParamLimits

0x96a2,	// (0x00028cc0) lc0_uni_indicator_pane_g1

0xe2b7,	// (0x0002d8d5) lc0_stat_clock_pane_t1

0x0bfc,	// (0x0002021a) main_ai5_pane

0xe2c5,	// (0x0002d8e3) ai5_sk_pane_ParamLimits

0xe2c5,	// (0x0002d8e3) ai5_sk_pane

0xe2d2,	// (0x0002d8f0) cell_ai5_widget_pane_ParamLimits

0xe2d2,	// (0x0002d8f0) cell_ai5_widget_pane

0xe86e,	// (0x0002de8c) aid_size_cell_widget_grid

0xe87c,	// (0x0002de9a) bg_ai5_widget_pane_ParamLimits

0xe87c,	// (0x0002de9a) bg_ai5_widget_pane

0xe8f0,	// (0x0002df0e) cell_ai5_widget_pane_g2

0xe900,	// (0x0002df1e) cell_ai5_widget_pane_g3

0xe917,	// (0x0002df35) cell_ai5_widget_pane_g4

0xe923,	// (0x0002df41) cell_ai5_widget_pane_g5

0xe92f,	// (0x0002df4d) cell_ai5_widget_pane_g6

0xe93b,	// (0x0002df59) cell_ai5_widget_pane_g7

0xe983,	// (0x0002dfa1) cell_ai5_widget_pane_t1_ParamLimits

0xe983,	// (0x0002dfa1) cell_ai5_widget_pane_t1

0xe9a0,	// (0x0002dfbe) cell_ai5_widget_pane_t2_ParamLimits

0xe9a0,	// (0x0002dfbe) cell_ai5_widget_pane_t2

0xe9b8,	// (0x0002dfd6) cell_ai5_widget_pane_t3_ParamLimits

0xe9b8,	// (0x0002dfd6) cell_ai5_widget_pane_t3

0xe9d0,	// (0x0002dfee) cell_ai5_widget_pane_t4_ParamLimits

0xe9d0,	// (0x0002dfee) cell_ai5_widget_pane_t4

0xe9ed,	// (0x0002e00b) cell_ai5_widget_pane_t5_ParamLimits

0xe9ed,	// (0x0002e00b) cell_ai5_widget_pane_t5

0xea0c,	// (0x0002e02a) cell_ai5_widget_pane_t6_ParamLimits

0xea0c,	// (0x0002e02a) cell_ai5_widget_pane_t6

0xea1e,	// (0x0002e03c) cell_ai5_widget_pane_t7_ParamLimits

0xea1e,	// (0x0002e03c) cell_ai5_widget_pane_t7

0xea37,	// (0x0002e055) cell_ai5_widget_pane_t8_ParamLimits

0xea37,	// (0x0002e055) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0002f45a) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0002f45a) cell_ai5_widget_pane_t

0xea8b,	// (0x0002e0a9) grid_ai5_widget_pane

0x2cc5,	// (0x000222e3) highlight_cell_ai5_widget_pane_ParamLimits

0x2cc5,	// (0x000222e3) highlight_cell_ai5_widget_pane

0xea99,	// (0x0002e0b7) ai5_sk_left_pane

0xeaa3,	// (0x0002e0c1) ai5_sk_middle_pane

0xeaad,	// (0x0002e0cb) ai5_sk_right_pane

0xeab7,	// (0x0002e0d5) bg_ai5_widget_pane_g1_ParamLimits

0xeab7,	// (0x0002e0d5) bg_ai5_widget_pane_g1

0xeac3,	// (0x0002e0e1) bg_ai5_widget_pane_g2_ParamLimits

0xeac3,	// (0x0002e0e1) bg_ai5_widget_pane_g2

0xeacf,	// (0x0002e0ed) bg_ai5_widget_pane_g3_ParamLimits

0xeacf,	// (0x0002e0ed) bg_ai5_widget_pane_g3

0xeadb,	// (0x0002e0f9) bg_ai5_widget_pane_g4_ParamLimits

0xeadb,	// (0x0002e0f9) bg_ai5_widget_pane_g4

0xeae7,	// (0x0002e105) bg_ai5_widget_pane_g5_ParamLimits

0xeae7,	// (0x0002e105) bg_ai5_widget_pane_g5

0xeaf3,	// (0x0002e111) bg_ai5_widget_pane_g6_ParamLimits

0xeaf3,	// (0x0002e111) bg_ai5_widget_pane_g6

0xeaff,	// (0x0002e11d) bg_ai5_widget_pane_g7_ParamLimits

0xeaff,	// (0x0002e11d) bg_ai5_widget_pane_g7

0xeb0b,	// (0x0002e129) bg_ai5_widget_pane_g8_ParamLimits

0xeb0b,	// (0x0002e129) bg_ai5_widget_pane_g8

0xeb17,	// (0x0002e135) bg_ai5_widget_pane_g9_ParamLimits

0xeb17,	// (0x0002e135) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0002f46f) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002f46f) bg_ai5_widget_pane_g

0xeb4f,	// (0x0002e16d) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb4f,	// (0x0002e16d) cell_shortcut_ai5_widget_pane

0x72a2,	// (0x000268c0) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x0002e180) cell_grid_ai5_widget_pane_g1

0x72a2,	// (0x000268c0) highlight_cell_shortcut_ai5_widget_pane

0x8394,	// (0x000279b2) ai5_sk_left_pane_g1

0xeb6b,	// (0x0002e189) ai5_sk_left_pane_g2

0xeb73,	// (0x0002e191) ai5_sk_left_pane_g3

0xeb7b,	// (0x0002e199) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0002f482) ai5_sk_left_pane_g

0xeb83,	// (0x0002e1a1) ai5_sk_left_pane_t1

0x838c,	// (0x000279aa) ai5_sk_right_pane_g1

0xeb91,	// (0x0002e1af) ai5_sk_right_pane_g2

0xeb99,	// (0x0002e1b7) ai5_sk_right_pane_g3

0xeba1,	// (0x0002e1bf) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0002f48b) ai5_sk_right_pane_g

0xeba9,	// (0x0002e1c7) ai5_sk_right_pane_t1

0x838c,	// (0x000279aa) ai5_sk_middle_pane_g1

0x8394,	// (0x000279b2) ai5_sk_middle_pane_g2

0x83ac,	// (0x000279ca) ai5_sk_middle_pane_g3

0xeb99,	// (0x0002e1b7) ai5_sk_middle_pane_g4

0xeb73,	// (0x0002e191) ai5_sk_middle_pane_g5

0xebb7,	// (0x0002e1d5) ai5_sk_middle_pane_g6

0xebbf,	// (0x0002e1dd) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0002f494) ai5_sk_middle_pane_g

0x7e6e,	// (0x0002748c) aid_touch_area_size_lc0_ParamLimits

0x7e6e,	// (0x0002748c) aid_touch_area_size_lc0

0x8d43,	// (0x00028361) cell_hwr_candidate_pane_t1_ParamLimits

0x7e8c,	// (0x000274aa) aid_touch_navi_pane

0x817f,	// (0x0002779d) status_dt_navi_pane_ParamLimits

0x817f,	// (0x0002779d) status_dt_navi_pane

0x818c,	// (0x000277aa) status_dt_sta_pane_ParamLimits

0x818c,	// (0x000277aa) status_dt_sta_pane

0xebc7,	// (0x0002e1e5) dt_sta_controll_pane

0xebd4,	// (0x0002e1f2) dt_sta_indi_pane

0xebe5,	// (0x0002e203) dt_sta_title_pane

0x0dc5,	// (0x000203e3) bg_dt_sta_indi_pane_ParamLimits

0x0dc5,	// (0x000203e3) bg_dt_sta_indi_pane

0xebf8,	// (0x0002e216) dt_sta_battery_pane

0xec00,	// (0x0002e21e) dt_sta_indi_pane_g1

0xec09,	// (0x0002e227) dt_sta_indi_pane_g2

0xec12,	// (0x0002e230) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0002f4a3) dt_sta_indi_pane_g

0xec1b,	// (0x0002e239) dt_sta_signal_pane

0x2cc5,	// (0x000222e3) bg_dt_sta_title_pane_ParamLimits

0x2cc5,	// (0x000222e3) bg_dt_sta_title_pane

0xec24,	// (0x0002e242) dt_sta_title_pane_g1

0xec2c,	// (0x0002e24a) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x0002e24a) dt_sta_title_pane_t1

0x0bfc,	// (0x0002021a) bg_dt_sta_control_pane

0xec41,	// (0x0002e25f) dt_sta_controll_pane_g1

0xec4a,	// (0x0002e268) bg_dt_sta_title_pane_g1

0xec53,	// (0x0002e271) bg_dt_sta_title_pane_g2

0xec5c,	// (0x0002e27a) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0002f4aa) bg_dt_sta_title_pane_g

0xbd23,	// (0x0002b341) bg_dt_sta_indi_pane_g1

0xec65,	// (0x0002e283) dt_sta_signal_pane_g1

0xec6d,	// (0x0002e28b) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0002f4b1) dt_sta_signal_pane_g

0xec75,	// (0x0002e293) dt_sta_battery_pane_g1

0xec7e,	// (0x0002e29c) dt_sta_battery_pane_t1

0xbd23,	// (0x0002b341) bg_dt_sta_control_pane_g1

0x3407,	// (0x00022a25) fep_china_uni_eep_pane

0x340f,	// (0x00022a2d) fep_china_uni_entry_pane_ParamLimits

0x341f,	// (0x00022a3d) popup_fep_china_uni_window_g1_ParamLimits

0x342f,	// (0x00022a4d) popup_fep_china_uni_window_g2_ParamLimits

0x342f,	// (0x00022a4d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002ed36) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002ed36) popup_fep_china_uni_window_g

0xec8d,	// (0x0002e2ab) fep_china_uni_eep_pane_g1

0xec95,	// (0x0002e2b3) fep_china_uni_eep_pane_t1

0xe234,	// (0x0002d852) aid_touch_area_size_smil_player

0x7fe4,	// (0x00027602) lc0_clock_pane

0x81e3,	// (0x00027801) status_pane_g5_ParamLimits

0x81e3,	// (0x00027801) status_pane_g5

0x79d2,	// (0x00026ff0) popup_keymap_window

0x81a1,	// (0x000277bf) status_icon_pane

0xe900,	// (0x0002df1e) cell_ai5_widget_pane_g3_ParamLimits

0xe917,	// (0x0002df35) cell_ai5_widget_pane_g4_ParamLimits

0xe923,	// (0x0002df41) cell_ai5_widget_pane_g5_ParamLimits

0xe947,	// (0x0002df65) cell_ai5_widget_pane_g8_ParamLimits

0xe947,	// (0x0002df65) cell_ai5_widget_pane_g8

0xe95b,	// (0x0002df79) cell_ai5_widget_pane_g9_ParamLimits

0xe95b,	// (0x0002df79) cell_ai5_widget_pane_g9

0xe96f,	// (0x0002df8d) cell_ai5_widget_pane_g10_ParamLimits

0xe96f,	// (0x0002df8d) cell_ai5_widget_pane_g10

0xeca4,	// (0x0002e2c2) status_icon_pane_g1

0x0bfc,	// (0x0002021a) bg_popup_sub_pane_cp13

0xecac,	// (0x0002e2ca) popup_keymap_window_t1

0x7687,	// (0x00026ca5) control_pane_g6_ParamLimits

0x7687,	// (0x00026ca5) control_pane_g6

0x7694,	// (0x00026cb2) control_pane_g7_ParamLimits

0x7694,	// (0x00026cb2) control_pane_g7

0x76a1,	// (0x00026cbf) control_pane_g8_ParamLimits

0x76a1,	// (0x00026cbf) control_pane_g8

0xebc7,	// (0x0002e1e5) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x0002e1f2) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x0002e203) dt_sta_title_pane_ParamLimits

0x11e9,	// (0x00020807) aid_size_touch_scroll_bar_cale

0x65bf,	// (0x00025bdd) popup_discreet_window_ParamLimits

0x65bf,	// (0x00025bdd) popup_discreet_window

0x664d,	// (0x00025c6b) popup_sk_window

0x9d2f,	// (0x0002934d) bg_popup_sub_pane_cp28_ParamLimits

0x9d2f,	// (0x0002934d) bg_popup_sub_pane_cp28

0xecba,	// (0x0002e2d8) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x0002e2d8) popup_discreet_window_g1

0xecda,	// (0x0002e2f8) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x0002e2f8) popup_discreet_window_t1

0xecf8,	// (0x0002e316) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x0002e316) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0002f4b6) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0002f4b6) popup_discreet_window_t

0x96b5,	// (0x00028cd3) popup_sk_window_g1

0x96bf,	// (0x00028cdd) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0002f4bd) popup_sk_window_g

0x96c9,	// (0x00028ce7) popup_sk_window_t1

0x96d9,	// (0x00028cf7) popup_sk_window_t1_copy1

0xe8f0,	// (0x0002df0e) cell_ai5_widget_pane_g2_ParamLimits

0xea49,	// (0x0002e067) cell_ai5_widget_pane_t9_ParamLimits

0xea49,	// (0x0002e067) cell_ai5_widget_pane_t9

0x0bfc,	// (0x0002021a) main_fep_fshwr2_pane

0x96e7,	// (0x00028d05) aid_fshwr2_btn_pane

0x96f3,	// (0x00028d11) aid_fshwr2_syb_pane

0x96ff,	// (0x00028d1d) aid_fshwr2_txt_pane

0x970b,	// (0x00028d29) fshwr2_func_candi_pane

0x971e,	// (0x00028d3c) fshwr2_hwr_syb_pane

0x972c,	// (0x00028d4a) fshwr2_icf_pane

0x0bfc,	// (0x0002021a) fshwr2_icf_bg_pane

0x975b,	// (0x00028d79) fshwr2_icf_pane_t1_ParamLimits

0x975b,	// (0x00028d79) fshwr2_icf_pane_t1

0x3385,	// (0x000229a3) fshwr2_func_candi_pane_g1

0xed4a,	// (0x0002e368) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x0002e368) fshwr2_func_candi_row_pane

0x9773,	// (0x00028d91) cell_fshwr2_syb_pane_ParamLimits

0x9773,	// (0x00028d91) cell_fshwr2_syb_pane

0xbf9e,	// (0x0002b5bc) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) fshwr2_hwr_syb_pane_g1

0x0bfc,	// (0x0002021a) bg_popup_call_pane_cp01

0x9789,	// (0x00028da7) fshwr2_func_candi_cell_pane_ParamLimits

0x9789,	// (0x00028da7) fshwr2_func_candi_cell_pane

0xed5a,	// (0x0002e378) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed5a,	// (0x0002e378) fshwr2_func_candi_cell_bg_pane

0x97bd,	// (0x00028ddb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x97bd,	// (0x00028ddb) fshwr2_func_candi_cell_pane_g1

0x97dd,	// (0x00028dfb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x97dd,	// (0x00028dfb) fshwr2_func_candi_cell_pane_t1

0x0bfc,	// (0x0002021a) bg_button_pane_cp08

0xed66,	// (0x0002e384) cell_fshwr2_syb_bg_pane

0x97f0,	// (0x00028e0e) cell_fshwr2_syb_bg_pane_g1

0x97f8,	// (0x00028e16) cell_fshwr2_syb_bg_pane_t1

0x2cc5,	// (0x000222e3) main_tmo_pane

0xa853,	// (0x00029e71) uni_indicator_pane_g1_ParamLimits

0xa869,	// (0x00029e87) uni_indicator_pane_g2_ParamLimits

0xa87f,	// (0x00029e9d) uni_indicator_pane_g3_ParamLimits

0xa894,	// (0x00029eb2) uni_indicator_pane_g4_ParamLimits

0xa894,	// (0x00029eb2) uni_indicator_pane_g4

0xa8a8,	// (0x00029ec6) uni_indicator_pane_g5_ParamLimits

0xa8a8,	// (0x00029ec6) uni_indicator_pane_g5

0xa8a8,	// (0x00029ec6) uni_indicator_pane_g6_ParamLimits

0xa8a8,	// (0x00029ec6) uni_indicator_pane_g6

0xf91c,	// (0x0002ef3a) uni_indicator_pane_g_ParamLimits

0xd232,	// (0x0002c850) popup_tmo_note_window_ParamLimits

0xd232,	// (0x0002c850) popup_tmo_note_window

0x2cc5,	// (0x000222e3) fshwr2_bg_pane

0x97ce,	// (0x00028dec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x97ce,	// (0x00028dec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0002f4c2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0002f4c2) fshwr2_func_candi_cell_pane_g

0xbd23,	// (0x0002b341) bg_popup_window_pane_cp01

0x9807,	// (0x00028e25) bg_popup_window_pane_g1_cp01

0xed6e,	// (0x0002e38c) bg_popup_window_pane_cp22_ParamLimits

0xed6e,	// (0x0002e38c) bg_popup_window_pane_cp22

0xed7c,	// (0x0002e39a) listscroll_tmo_link_pane_ParamLimits

0xed7c,	// (0x0002e39a) listscroll_tmo_link_pane

0xedbc,	// (0x0002e3da) popup_tmo_note_window_g1_ParamLimits

0xedbc,	// (0x0002e3da) popup_tmo_note_window_g1

0xedc9,	// (0x0002e3e7) tmo_note_info_pane_ParamLimits

0xedc9,	// (0x0002e3e7) tmo_note_info_pane

0xede3,	// (0x0002e401) list_tmo_note_info_pane_g1_ParamLimits

0xede3,	// (0x0002e401) list_tmo_note_info_pane_g1

0xedfa,	// (0x0002e418) list_tmo_note_info_pane_g2_ParamLimits

0xedfa,	// (0x0002e418) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0002f4c7) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0002f4c7) list_tmo_note_info_pane_g

0xee16,	// (0x0002e434) list_tmo_note_info_text_pane_ParamLimits

0xee16,	// (0x0002e434) list_tmo_note_info_text_pane

0xee9b,	// (0x0002e4b9) list_tmo_link_pane

0xeea8,	// (0x0002e4c6) scroll_pane_cp20

0xeeb5,	// (0x0002e4d3) list_single_tmo_link_pane_ParamLimits

0xeeb5,	// (0x0002e4d3) list_single_tmo_link_pane

0xeec5,	// (0x0002e4e3) list_single_tmo_link_pane_t1

0xeed3,	// (0x0002e4f1) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed3,	// (0x0002e4f1) list_tmo_note_info_text_pane_t1

0x6ac8,	// (0x000260e6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6ac8,	// (0x000260e6) aid_size_touch_scroll_bar_cp01

0x57f1,	// (0x00024e0f) aid_size_touch_slider_marker

0x6635,	// (0x00025c53) popup_settings_window_ParamLimits

0x6635,	// (0x00025c53) popup_settings_window

0x599c,	// (0x00024fba) popup_candi_list_indi_window

0x7e8c,	// (0x000274aa) aid_touch_navi_pane_ParamLimits

0x8eb4,	// (0x000284d2) rs_clock_indi_pane

0x8ebd,	// (0x000284db) sctrl_sk_bottom_pane_ParamLimits

0x8ece,	// (0x000284ec) sctrl_sk_top_pane_ParamLimits

0x8fb7,	// (0x000285d5) popup_fep_tooltip_window

0xe86e,	// (0x0002de8c) aid_size_cell_widget_grid_ParamLimits

0xe8db,	// (0x0002def9) cell_ai5_widget_pane_g1_ParamLimits

0xe8db,	// (0x0002def9) cell_ai5_widget_pane_g1

0xe92f,	// (0x0002df4d) cell_ai5_widget_pane_g6_ParamLimits

0xe93b,	// (0x0002df59) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0002f445) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0002f445) cell_ai5_widget_pane_g

0xea6d,	// (0x0002e08b) cell_ai5_widget_pane_t10_ParamLimits

0xea6d,	// (0x0002e08b) cell_ai5_widget_pane_t10

0xea8b,	// (0x0002e0a9) grid_ai5_widget_pane_ParamLimits

0xeb23,	// (0x0002e141) cell_contacts_ai5_widget_pane_ParamLimits

0xeb23,	// (0x0002e141) cell_contacts_ai5_widget_pane

0xed0d,	// (0x0002e32b) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x0002e32b) popup_discreet_window_t3

0x9743,	// (0x00028d61) popup_fshwr2_char_preview_window_ParamLimits

0x9743,	// (0x00028d61) popup_fshwr2_char_preview_window

0xee34,	// (0x0002e452) tmo_note_info_pane_t1

0xee49,	// (0x0002e467) tmo_note_info_pane_t2

0xee62,	// (0x0002e480) tmo_note_info_pane_t3

0xee77,	// (0x0002e495) tmo_note_info_pane_t4

0xee89,	// (0x0002e4a7) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0002f4cc) tmo_note_info_pane_t

0xee9b,	// (0x0002e4b9) list_tmo_link_pane_ParamLimits

0xeea8,	// (0x0002e4c6) scroll_pane_cp20_ParamLimits

0x0bfc,	// (0x0002021a) bg_popup_fep_char_preview_window_cp01

0xeeec,	// (0x0002e50a) popup_fshwr2_char_preview_window_t1

0xeefa,	// (0x0002e518) popup_candi_list_indi_window_g1

0xef03,	// (0x0002e521) bg_cell_contacts_ai5_widget_pane

0xef0f,	// (0x0002e52d) cell_contacts_ai5_widget_pane_g1

0xef24,	// (0x0002e542) cell_contacts_ai5_widget_pane_g2

0xef30,	// (0x0002e54e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0002f4d7) cell_contacts_ai5_widget_pane_g

0xef3c,	// (0x0002e55a) cell_contacts_ai5_widget_pane_t1

0x2cc5,	// (0x000222e3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb3,	// (0x0002e5d1) settings_container_pane

0x72a2,	// (0x000268c0) listscroll_set_pane_copy1

0xb444,	// (0x0002aa62) scroll_pane_cp121_copy1

0xefbf,	// (0x0002e5dd) set_content_pane_copy1

0xefc7,	// (0x0002e5e5) aid_height_set_list_copy1_ParamLimits

0xefc7,	// (0x0002e5e5) aid_height_set_list_copy1

0xaaa8,	// (0x0002a0c6) aid_size_parent_copy1_ParamLimits

0xaaa8,	// (0x0002a0c6) aid_size_parent_copy1

0xefd3,	// (0x0002e5f1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd3,	// (0x0002e5f1) button_value_adjust_pane_cp6_copy1

0x7813,	// (0x00026e31) list_highlight_pane_cp2_copy1_ParamLimits

0x7813,	// (0x00026e31) list_highlight_pane_cp2_copy1

0xefe7,	// (0x0002e605) list_set_pane_copy1_ParamLimits

0xefe7,	// (0x0002e605) list_set_pane_copy1

0xef4e,	// (0x0002e56c) main_pane_set_t1_copy1_ParamLimits

0xef4e,	// (0x0002e56c) main_pane_set_t1_copy1

0xef88,	// (0x0002e5a6) main_pane_set_t2_copy1_ParamLimits

0xef88,	// (0x0002e5a6) main_pane_set_t2_copy1

0xf0ae,	// (0x0002e6cc) main_pane_set_t3_copy1

0xf0bc,	// (0x0002e6da) main_pane_set_t4_copy1

0xefa7,	// (0x0002e5c5) set_content_pane_g1_copy1_ParamLimits

0xefa7,	// (0x0002e5c5) set_content_pane_g1_copy1

0xf0ca,	// (0x0002e6e8) setting_code_pane_copy1

0xf0d2,	// (0x0002e6f0) setting_slider_graphic_pane_copy1

0xf0d2,	// (0x0002e6f0) setting_slider_pane_copy1

0xf0d2,	// (0x0002e6f0) setting_text_pane_copy1

0xf0d2,	// (0x0002e6f0) setting_volume_pane_copy1

0xf0ca,	// (0x0002e6e8) settings_code_pane_cp2_copy1

0xf0da,	// (0x0002e6f8) settings_code_pane_cp_copy1_ParamLimits

0xf0da,	// (0x0002e6f8) settings_code_pane_cp_copy1

0x9810,	// (0x00028e2e) volume_set_pane_copy1

0xf0ee,	// (0x0002e70c) volume_set_pane_g10_copy1

0xf0fa,	// (0x0002e718) volume_set_pane_g1_copy1

0xf104,	// (0x0002e722) volume_set_pane_g2_copy1

0xf10e,	// (0x0002e72c) volume_set_pane_g3_copy1

0xf118,	// (0x0002e736) volume_set_pane_g4_copy1

0xf122,	// (0x0002e740) volume_set_pane_g5_copy1

0xf12c,	// (0x0002e74a) volume_set_pane_g6_copy1

0xf136,	// (0x0002e754) volume_set_pane_g7_copy1

0xf140,	// (0x0002e75e) volume_set_pane_g8_copy1

0xf14a,	// (0x0002e768) volume_set_pane_g9_copy1

0x0c78,	// (0x00020296) bg_set_opt_pane_cp_copy1_ParamLimits

0x0c78,	// (0x00020296) bg_set_opt_pane_cp_copy1

0x981c,	// (0x00028e3a) setting_slider_pane_t1_copy1_ParamLimits

0x981c,	// (0x00028e3a) setting_slider_pane_t1_copy1

0x983a,	// (0x00028e58) setting_slider_pane_t2_copy1_ParamLimits

0x983a,	// (0x00028e58) setting_slider_pane_t2_copy1

0x9854,	// (0x00028e72) setting_slider_pane_t3_copy1_ParamLimits

0x9854,	// (0x00028e72) setting_slider_pane_t3_copy1

0x986c,	// (0x00028e8a) slider_set_pane_copy1_ParamLimits

0x986c,	// (0x00028e8a) slider_set_pane_copy1

0x2d8e,	// (0x000223ac) set_opt_bg_pane_g1_copy2

0x2d96,	// (0x000223b4) set_opt_bg_pane_g2_copy2

0xf154,	// (0x0002e772) set_opt_bg_pane_g3_copy2

0x2da6,	// (0x000223c4) set_opt_bg_pane_g4_copy2

0x2dae,	// (0x000223cc) set_opt_bg_pane_g5_copy2

0x2db6,	// (0x000223d4) set_opt_bg_pane_g6_copy2

0xf15e,	// (0x0002e77c) set_opt_bg_pane_g7_copy2

0xf168,	// (0x0002e786) set_opt_bg_pane_g8_copy2

0xf172,	// (0x0002e790) set_opt_bg_pane_g9_copy2

0x9882,	// (0x00028ea0) aid_size_touch_slider_mark_copy1_ParamLimits

0x9882,	// (0x00028ea0) aid_size_touch_slider_mark_copy1

0xf17c,	// (0x0002e79a) slider_set_pane_g1_copy1

0x9896,	// (0x00028eb4) slider_set_pane_g2_copy1

0x8989,	// (0x00027fa7) slider_set_pane_g3_copy1_ParamLimits

0x8989,	// (0x00027fa7) slider_set_pane_g3_copy1

0x899d,	// (0x00027fbb) slider_set_pane_g4_copy1_ParamLimits

0x899d,	// (0x00027fbb) slider_set_pane_g4_copy1

0x89b5,	// (0x00027fd3) slider_set_pane_g5_copy1_ParamLimits

0x89b5,	// (0x00027fd3) slider_set_pane_g5_copy1

0x8989,	// (0x00027fa7) slider_set_pane_g6_copy1_ParamLimits

0x8989,	// (0x00027fa7) slider_set_pane_g6_copy1

0x989e,	// (0x00028ebc) slider_set_pane_g7_copy1_ParamLimits

0x989e,	// (0x00028ebc) slider_set_pane_g7_copy1

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp2_copy1

0xf185,	// (0x0002e7a3) setting_slider_graphic_pane_g1_copy1

0xf18e,	// (0x0002e7ac) setting_slider_graphic_pane_t1_copy1

0xf19e,	// (0x0002e7bc) setting_slider_graphic_pane_t2_copy1

0xf1ae,	// (0x0002e7cc) slider_set_pane_cp_copy1

0xf1be,	// (0x0002e7dc) input_focus_pane_cp1_copy1

0xf1c7,	// (0x0002e7e5) list_set_text_pane_copy1

0xf1cf,	// (0x0002e7ed) setting_text_pane_g1_copy1

0x6316,	// (0x00025934) set_text_pane_t1_copy1

0xf1be,	// (0x0002e7dc) input_focus_pane_cp2_copy1

0xf1cf,	// (0x0002e7ed) setting_code_pane_g1_copy1

0xf1d8,	// (0x0002e7f6) setting_code_pane_t1_copy1

0xf1e6,	// (0x0002e804) list_set_graphic_pane_copy1

0x0c10,	// (0x0002022e) bg_set_opt_pane_cp4_copy1

0x7118,	// (0x00026736) list_set_graphic_pane_g1_copy1_ParamLimits

0x7118,	// (0x00026736) list_set_graphic_pane_g1_copy1

0xf1f8,	// (0x0002e816) list_set_graphic_pane_g2_copy1

0x7130,	// (0x0002674e) list_set_graphic_pane_t1_copy1_ParamLimits

0x7130,	// (0x0002674e) list_set_graphic_pane_t1_copy1

0xbd23,	// (0x0002b341) rs_clock_indi_pane_g1

0xf200,	// (0x0002e81e) rs_clock_indi_pane_t1

0xf20e,	// (0x0002e82c) rs_indi_pane

0xf216,	// (0x0002e834) rs_indi_pane_g1

0xf21f,	// (0x0002e83d) rs_indi_pane_g2

0xf228,	// (0x0002e846) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0002f4de) rs_indi_pane_g

0x72a2,	// (0x000268c0) bg_popup_preview_window_pane_cp03

0xf231,	// (0x0002e84f) popup_fep_tooltip_window_t1

0xc9da,	// (0x0002bff8) popup_note2_window_g2_ParamLimits

0xc9da,	// (0x0002bff8) popup_note2_window_g2

0x0001,

0xfc59,	// (0x0002f277) popup_note2_window_g_ParamLimits

0xfc59,	// (0x0002f277) popup_note2_window_g

0xcee2,	// (0x0002c500) bg_popup_sub_pane_cp11_ParamLimits

0xceef,	// (0x0002c50d) cell_ai3_links_pane_g1_ParamLimits

0xcf06,	// (0x0002c524) cell_ai3_links_pane_t1

0x6316,	// (0x00025934) set_text_pane_t1_copy1_ParamLimits

0x71af,	// (0x000267cd) cell_graphic_popup_pane_cp2_ParamLimits

0x71af,	// (0x000267cd) cell_graphic_popup_pane_cp2

0xf23f,	// (0x0002e85d) cell_graphic_popup_pane_g1_cp2

0x0ffc,	// (0x0002061a) cell_graphic_popup_pane_g2_cp2

0xf247,	// (0x0002e865) cell_graphic_popup_pane_g3_cp2

0xf24f,	// (0x0002e86d) cell_graphic_popup_pane_t2_cp2

0x100d,	// (0x0002062b) grid_highlight_pane_cp3_cp2

0x31a7,	// (0x000227c5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2cc5,	// (0x000222e3) main_tmo_pane_ParamLimits

0xd226,	// (0x0002c844) popup_tmo_big_image_note_window

0xe8ca,	// (0x0002dee8) cell_ai5_widget_list_pane

0xe8d2,	// (0x0002def0) cell_ai5_widget_lrg_icon_pane

0xee34,	// (0x0002e452) tmo_note_info_pane_t1_ParamLimits

0xee49,	// (0x0002e467) tmo_note_info_pane_t2_ParamLimits

0xee62,	// (0x0002e480) tmo_note_info_pane_t3_ParamLimits

0xee77,	// (0x0002e495) tmo_note_info_pane_t4_ParamLimits

0xee89,	// (0x0002e4a7) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0002f4cc) tmo_note_info_pane_t_ParamLimits

0xefb3,	// (0x0002e5d1) settings_container_pane_ParamLimits

0xf1b6,	// (0x0002e7d4) indicator_popup_pane_cp5

0xf1b6,	// (0x0002e7d4) indicator_popup_pane_cp6

0xf1e6,	// (0x0002e804) list_set_graphic_pane_copy1_ParamLimits

0x0bfc,	// (0x0002021a) bg_popup_window_pane_cp23

0xf25d,	// (0x0002e87b) popup_tmo_big_image_note_window_g1

0xf269,	// (0x0002e887) popup_tmo_big_image_note_window_t1

0xf279,	// (0x0002e897) popup_tmo_big_image_note_window_t2

0xf289,	// (0x0002e8a7) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0002f4e5) popup_tmo_big_image_note_window_t

0xbd23,	// (0x0002b341) cell_ai5_widget_lrg_icon_pane_g1

0xf299,	// (0x0002e8b7) cell_ai5_widget_lrg_icon_pane_t1

0xf2a7,	// (0x0002e8c5) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a7,	// (0x0002e8c5) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x0002e8dd) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x0002e8dd) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x0002e8ea) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x0002e8ea) cell_ai5_widget_list_row_pane_t1

0xf2f7,	// (0x0002e915) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2f7,	// (0x0002e915) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0002f4ec) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0002f4ec) cell_ai5_widget_list_row_pane_t

0x0bfc,	// (0x0002021a) main_fep_vtchi_ss_pane

0xf33b,	// (0x0002e959) popup_fep_char_pre_window

0xf343,	// (0x0002e961) popup_fep_ituss_window

0xf364,	// (0x0002e982) popup_fep_vkbss_window

0xf385,	// (0x0002e9a3) grid_vkbss_keypad_pane_ParamLimits

0xf385,	// (0x0002e9a3) grid_vkbss_keypad_pane

0xf395,	// (0x0002e9b3) ituss_keypad_pane

0x98c0,	// (0x00028ede) aid_vkbss_key_offset_ParamLimits

0x98c0,	// (0x00028ede) aid_vkbss_key_offset

0x98cc,	// (0x00028eea) cell_vkbss_key_pane_ParamLimits

0x98cc,	// (0x00028eea) cell_vkbss_key_pane

0xf3a4,	// (0x0002e9c2) bg_cell_vkbss_key_g1_ParamLimits

0xf3a4,	// (0x0002e9c2) bg_cell_vkbss_key_g1

0xf3b0,	// (0x0002e9ce) cell_vkbss_key_3p_pane_ParamLimits

0xf3b0,	// (0x0002e9ce) cell_vkbss_key_3p_pane

0xf3ca,	// (0x0002e9e8) cell_vkbss_key_g1_ParamLimits

0xf3ca,	// (0x0002e9e8) cell_vkbss_key_g1

0xf3e4,	// (0x0002ea02) cell_vkbss_key_t1_ParamLimits

0xf3e4,	// (0x0002ea02) cell_vkbss_key_t1

0x98e2,	// (0x00028f00) cell_ituss_key_pane_ParamLimits

0x98e2,	// (0x00028f00) cell_ituss_key_pane

0xf40f,	// (0x0002ea2d) bg_cell_ituss_key_g1_ParamLimits

0xf40f,	// (0x0002ea2d) bg_cell_ituss_key_g1

0xf41b,	// (0x0002ea39) cell_ituss_key_pane_g1_ParamLimits

0xf41b,	// (0x0002ea39) cell_ituss_key_pane_g1

0x98f3,	// (0x00028f11) cell_ituss_key_pane_g2_ParamLimits

0x98f3,	// (0x00028f11) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0002f4f3) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0002f4f3) cell_ituss_key_pane_g

0x991f,	// (0x00028f3d) cell_ituss_key_t1_ParamLimits

0x991f,	// (0x00028f3d) cell_ituss_key_t1

0x9959,	// (0x00028f77) cell_ituss_key_t2_ParamLimits

0x9959,	// (0x00028f77) cell_ituss_key_t2

0x998a,	// (0x00028fa8) cell_ituss_key_t3_ParamLimits

0x998a,	// (0x00028fa8) cell_ituss_key_t3

0x9959,	// (0x00028f77) cell_ituss_key_t4_ParamLimits

0x9959,	// (0x00028f77) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0002f4fa) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0002f4fa) cell_ituss_key_t

0xf441,	// (0x0002ea5f) cell_vkbss_key_3p_pane_g1

0xf449,	// (0x0002ea67) cell_vkbss_key_3p_pane_g2

0xf451,	// (0x0002ea6f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002f505) cell_vkbss_key_3p_pane_g

0x0bfc,	// (0x0002021a) bg_popup_fep_char_preview_window_cp02

0x99cd,	// (0x00028feb) popup_fep_char_pre_window_t1

0xe864,	// (0x0002de82) main_ai5_sk_pane

0xef03,	// (0x0002e521) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef0f,	// (0x0002e52d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef24,	// (0x0002e542) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef30,	// (0x0002e54e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0002f4d7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3c,	// (0x0002e55a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2cc5,	// (0x000222e3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x0002ea77) main_ai5_sk_pane_g1

0x9b67,	// (0x00029185) popup_query_code_window_g1

0xf359,	// (0x0002e977) popup_fep_vkb_icf_pane

0xf36f,	// (0x0002e98d) popup_fep_vtchi_icf_pane

0xf462,	// (0x0002ea80) bg_icf_pane

0xf46e,	// (0x0002ea8c) list_vkb_icf_pane

0xf47a,	// (0x0002ea98) bg_icf_pane_cp01

0xf48d,	// (0x0002eaab) vtchi_icf_list_pane

0xf49e,	// (0x0002eabc) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x0002eabc) list_vkb_icf_pane_t1

0xf4b4,	// (0x0002ead2) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0002ead2) vtchi_icf_list_pane_t1

0xf343,	// (0x0002e961) popup_fep_ituss_window_ParamLimits

0xf36f,	// (0x0002e98d) popup_fep_vtchi_icf_pane_ParamLimits

0xf395,	// (0x0002e9b3) ituss_keypad_pane_ParamLimits

0x98b4,	// (0x00028ed2) ituss_sks_pane

0xf462,	// (0x0002ea80) bg_icf_pane_ParamLimits

0xf31f,	// (0x0002e93d) icf_edit_indi_pane_ParamLimits

0xf31f,	// (0x0002e93d) icf_edit_indi_pane

0xf46e,	// (0x0002ea8c) list_vkb_icf_pane_ParamLimits

0xf47a,	// (0x0002ea98) bg_icf_pane_cp01_ParamLimits

0xf32e,	// (0x0002e94c) icf_edit_indi_pane_cp01_ParamLimits

0xf32e,	// (0x0002e94c) icf_edit_indi_pane_cp01

0xf495,	// (0x0002eab3) vtchi_query_pane

0xbf9e,	// (0x0002b5bc) icf_edit_indi_pane_g1_ParamLimits

0xbf9e,	// (0x0002b5bc) icf_edit_indi_pane_g1

0xf523,	// (0x0002eb41) icf_edit_indi_pane_g2_ParamLimits

0xf523,	// (0x0002eb41) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002f51d) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002f51d) icf_edit_indi_pane_g

0xf532,	// (0x0002eb50) icf_edit_indi_pane_t1

0xf4cc,	// (0x0002eaea) bg_input_focus_pane_cp042

0x11e0,	// (0x000207fe) vtchi_button_pane

0xf4d5,	// (0x0002eaf3) vtchi_query_pane_t1

0xf4e3,	// (0x0002eb01) vtchi_query_pane_t2

0xf4f1,	// (0x0002eb0f) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002f50c) vtchi_query_pane_t

0x0bfc,	// (0x0002021a) bg_button_pane_cp13

0xf4ff,	// (0x0002eb1d) vtchi_button_pane_g1

0x99dc,	// (0x00028ffa) ituss_sks_pane_g1

0x99e7,	// (0x00029005) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002f513) ituss_sks_pane_g

0xf507,	// (0x0002eb25) ituss_sks_pane_t1

0xf515,	// (0x0002eb33) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002f518) ituss_sks_pane_t

0xb7d3,	// (0x0002adf1) indicator_nsta_pane_cp_g1

0xb7dc,	// (0x0002adfa) indicator_nsta_pane_cp_g2

0xb7e4,	// (0x0002ae02) indicator_nsta_pane_cp_g3

0xb7ec,	// (0x0002ae0a) indicator_nsta_pane_cp_g4

0xb7f4,	// (0x0002ae12) indicator_nsta_pane_cp_g5

0xb7fc,	// (0x0002ae1a) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x0002f0c1) indicator_nsta_pane_cp_g

0xdf2e,	// (0x0002d54c) cell_graphic2_pane_t2_ParamLimits

0xdf2e,	// (0x0002d54c) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0002f3ce) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0002f3ce) cell_graphic2_pane_t

0xdf5b,	// (0x0002d579) cell_graphic2_control_pane_t1

0x6eee,	// (0x0002650c) signal_pane_g3_ParamLimits

0x6eee,	// (0x0002650c) signal_pane_g3

0x6f00,	// (0x0002651e) signal_pane_g4_ParamLimits

0x6f00,	// (0x0002651e) signal_pane_g4

0xf309,	// (0x0002e927) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf309,	// (0x0002e927) cell_ai5_widget_list_row_pane_t3

0xf42f,	// (0x0002ea4d) cell_ituss_key_pane_t1_ParamLimits

0xf42f,	// (0x0002ea4d) cell_ituss_key_pane_t1

0x858e,	// (0x00027bac) form_field_data_wide_pane_vc_t2_ParamLimits

0x858e,	// (0x00027bac) form_field_data_wide_pane_vc_t2

0x85a2,	// (0x00027bc0) form_field_data_wide_pane_vc_t3_ParamLimits

0x85a2,	// (0x00027bc0) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002ee22) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002ee22) form_field_data_wide_pane_vc_t

0xb484,	// (0x0002aaa2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb484,	// (0x0002aaa2) form_field_slider_wide_pane_vc_t3

0xb55a,	// (0x0002ab78) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb55a,	// (0x0002ab78) form_field_popup_wide_pane_vc_t2

0xb571,	// (0x0002ab8f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb571,	// (0x0002ab8f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x0002f0b0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0002f0b0) form_field_popup_wide_pane_vc_t

0x96e7,	// (0x00028d05) aid_fshwr2_btn_pane_ParamLimits

0x96f3,	// (0x00028d11) aid_fshwr2_syb_pane_ParamLimits

0x96ff,	// (0x00028d1d) aid_fshwr2_txt_pane_ParamLimits

0x2cc5,	// (0x000222e3) fshwr2_bg_pane_ParamLimits

0x970b,	// (0x00028d29) fshwr2_func_candi_pane_ParamLimits

0x971e,	// (0x00028d3c) fshwr2_hwr_syb_pane_ParamLimits

0x972c,	// (0x00028d4a) fshwr2_icf_pane_ParamLimits

0x5ee3,	// (0x00025501) list_double_graphic_pane_vc_g4_ParamLimits

0x5ee3,	// (0x00025501) list_double_graphic_pane_vc_g4

0x9913,	// (0x00028f31) cell_ituss_key_pane_g3_ParamLimits

0x9913,	// (0x00028f31) cell_ituss_key_pane_g3

0x99bb,	// (0x00028fd9) cell_ituss_key_t5_ParamLimits

0x99bb,	// (0x00028fd9) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
