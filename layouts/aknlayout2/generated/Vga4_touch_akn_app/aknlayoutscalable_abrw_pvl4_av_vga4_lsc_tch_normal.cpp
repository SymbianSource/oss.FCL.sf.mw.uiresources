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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00013f2c };

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
0xa070,	// (0x0001df9c) Screen

0xa07c,	// (0x0001dfa8) application_window_ParamLimits

0xa07c,	// (0x0001dfa8) application_window

0xc237,	// (0x00020163) screen_g1

0x8e04,	// (0x0001cd30) area_bottom_pane_ParamLimits

0x8e04,	// (0x0001cd30) area_bottom_pane

0xdbf7,	// (0x00021b23) area_top_pane_ParamLimits

0xdbf7,	// (0x00021b23) area_top_pane

0xdc95,	// (0x00021bc1) main_pane_ParamLimits

0xdc95,	// (0x00021bc1) main_pane

0xc241,	// (0x0002016d) misc_graphics

0xaf27,	// (0x0001ee53) battery_pane_ParamLimits

0xaf27,	// (0x0001ee53) battery_pane

0x266d,	// (0x00016599) bg_status_flat_pane_g8

0x2675,	// (0x000165a1) bg_status_flat_pane_g9

0x1968,	// (0x00015894) context_pane_ParamLimits

0x1968,	// (0x00015894) context_pane

0xb09e,	// (0x0001efca) navi_pane_ParamLimits

0xb09e,	// (0x0001efca) navi_pane

0xb128,	// (0x0001f054) signal_pane_ParamLimits

0xb128,	// (0x0001f054) signal_pane

0x0008,

0xf86f,	// (0x0002379b) bg_status_flat_pane_g

0xb1b8,	// (0x0001f0e4) status_pane_g1_ParamLimits

0xb1b8,	// (0x0001f0e4) status_pane_g1

0xb1ce,	// (0x0001f0fa) status_pane_g2_ParamLimits

0xb1ce,	// (0x0001f0fa) status_pane_g2

0x1ba1,	// (0x00015acd) status_pane_g3_ParamLimits

0x1ba1,	// (0x00015acd) status_pane_g3

0x0004,

0xf79b,	// (0x000236c7) status_pane_g_ParamLimits

0xf79b,	// (0x000236c7) status_pane_g

0xb1da,	// (0x0001f106) title_pane_ParamLimits

0xb1da,	// (0x0001f106) title_pane

0xb241,	// (0x0001f16d) uni_indicator_pane_ParamLimits

0xb241,	// (0x0001f16d) uni_indicator_pane

0x17c8,	// (0x000156f4) bg_list_pane_ParamLimits

0x17c8,	// (0x000156f4) bg_list_pane

0xae98,	// (0x0001edc4) find_pane

0x1e7a,	// (0x00015da6) listscroll_app_pane_ParamLimits

0x1e7a,	// (0x00015da6) listscroll_app_pane

0x17fc,	// (0x00015728) listscroll_form_pane

0x9172,	// (0x0001d09e) listscroll_gen_pane_ParamLimits

0x9172,	// (0x0001d09e) listscroll_gen_pane

0xe814,	// (0x00022740) listscroll_set_pane

0x3227,	// (0x00017153) main_idle_act_pane

0x14c1,	// (0x000153ed) main_idle_trad_pane

0x14c1,	// (0x000153ed) main_list_empty_pane

0x17f0,	// (0x0001571c) main_midp_pane

0x1816,	// (0x00015742) main_pane_g1_ParamLimits

0x1816,	// (0x00015742) main_pane_g1

0x9186,	// (0x0001d0b2) popup_ai_message_window_ParamLimits

0x9186,	// (0x0001d0b2) popup_ai_message_window

0x9226,	// (0x0001d152) popup_fep_china_uni_window_ParamLimits

0x9226,	// (0x0001d152) popup_fep_china_uni_window

0xe856,	// (0x00022782) popup_fep_japan_candidate_window_ParamLimits

0xe856,	// (0x00022782) popup_fep_japan_candidate_window

0xe880,	// (0x000227ac) popup_fep_japan_predictive_window_ParamLimits

0xe880,	// (0x000227ac) popup_fep_japan_predictive_window

0x9286,	// (0x0001d1b2) popup_find_window

0x92a3,	// (0x0001d1cf) popup_grid_graphic_window_ParamLimits

0x92a3,	// (0x0001d1cf) popup_grid_graphic_window

0xe8b6,	// (0x000227e2) popup_large_graphic_colour_window

0x9347,	// (0x0001d273) popup_menu_window_ParamLimits

0x9347,	// (0x0001d273) popup_menu_window

0x9537,	// (0x0001d463) popup_note_image_window

0x94f7,	// (0x0001d423) popup_note_wait_window_ParamLimits

0x94f7,	// (0x0001d423) popup_note_wait_window

0x954f,	// (0x0001d47b) popup_note_window_ParamLimits

0x954f,	// (0x0001d47b) popup_note_window

0x95fd,	// (0x0001d529) popup_query_code_window_ParamLimits

0x95fd,	// (0x0001d529) popup_query_code_window

0xe8dc,	// (0x00022808) popup_query_data_code_window_ParamLimits

0xe8dc,	// (0x00022808) popup_query_data_code_window

0x963d,	// (0x0001d569) popup_query_data_window_ParamLimits

0x963d,	// (0x0001d569) popup_query_data_window

0x96d1,	// (0x0001d5fd) popup_query_sat_info_window_ParamLimits

0x96d1,	// (0x0001d5fd) popup_query_sat_info_window

0x977a,	// (0x0001d6a6) popup_snote_single_graphic_window_ParamLimits

0x977a,	// (0x0001d6a6) popup_snote_single_graphic_window

0x977a,	// (0x0001d6a6) popup_snote_single_text_window_ParamLimits

0x977a,	// (0x0001d6a6) popup_snote_single_text_window

0xe8ff,	// (0x0002282b) popup_sub_window_general

0xe955,	// (0x00022881) popup_window_general_ParamLimits

0xe955,	// (0x00022881) popup_window_general

0x182c,	// (0x00015758) power_save_pane

0x8ff9,	// (0x0001cf25) control_pane_g1_ParamLimits

0x8ff9,	// (0x0001cf25) control_pane_g1

0x9022,	// (0x0001cf4e) control_pane_g2_ParamLimits

0x9022,	// (0x0001cf4e) control_pane_g2

0x178b,	// (0x000156b7) control_pane_g3_ParamLimits

0x178b,	// (0x000156b7) control_pane_g3

0x0007,

0xf783,	// (0x000236af) control_pane_g_ParamLimits

0xf783,	// (0x000236af) control_pane_g

0x9061,	// (0x0001cf8d) control_pane_t1_ParamLimits

0x9061,	// (0x0001cf8d) control_pane_t1

0x90c7,	// (0x0001cff3) control_pane_t2_ParamLimits

0x90c7,	// (0x0001cff3) control_pane_t2

0x0002,

0xf794,	// (0x000236c0) control_pane_t_ParamLimits

0xf794,	// (0x000236c0) control_pane_t

0xadca,	// (0x0001ecf6) navi_navi_volume_pane_cp1

0xadd2,	// (0x0001ecfe) status_small_icon_pane

0x16c0,	// (0x000155ec) status_small_pane_g1_ParamLimits

0x16c0,	// (0x000155ec) status_small_pane_g1

0xadda,	// (0x0001ed06) status_small_pane_g2_ParamLimits

0xadda,	// (0x0001ed06) status_small_pane_g2

0xade6,	// (0x0001ed12) status_small_pane_g3_ParamLimits

0xade6,	// (0x0001ed12) status_small_pane_g3

0xadf2,	// (0x0001ed1e) status_small_pane_g4_ParamLimits

0xadf2,	// (0x0001ed1e) status_small_pane_g4

0xadfe,	// (0x0001ed2a) status_small_pane_g5_ParamLimits

0xadfe,	// (0x0001ed2a) status_small_pane_g5

0xae0c,	// (0x0001ed38) status_small_pane_g6_ParamLimits

0xae0c,	// (0x0001ed38) status_small_pane_g6

0x0007,

0xf772,	// (0x0002369e) status_small_pane_g_ParamLimits

0xf772,	// (0x0002369e) status_small_pane_g

0xae3b,	// (0x0001ed67) status_small_pane_t1

0xae5d,	// (0x0001ed89) status_small_wait_pane_ParamLimits

0xae5d,	// (0x0001ed89) status_small_wait_pane

0xabab,	// (0x0001ead7) aid_levels_signal_ParamLimits

0xabab,	// (0x0001ead7) aid_levels_signal

0xabc3,	// (0x0001eaef) signal_pane_g1_ParamLimits

0xabc3,	// (0x0001eaef) signal_pane_g1

0xabde,	// (0x0001eb0a) signal_pane_g2_ParamLimits

0xabde,	// (0x0001eb0a) signal_pane_g2

0x0003,

0xf703,	// (0x0002362f) signal_pane_g_ParamLimits

0xf703,	// (0x0002362f) signal_pane_g

0x0f06,	// (0x00014e32) context_pane_g1

0xa08c,	// (0x0001dfb8) title_pane_g1

0xa0cf,	// (0x0001dffb) title_pane_t1

0xc257,	// (0x00020183) title_pane_t2

0xc27d,	// (0x000201a9) title_pane_t3

0x0002,

0xf557,	// (0x00023483) title_pane_t

0xb269,	// (0x0001f195) aid_levels_battery_ParamLimits

0xb269,	// (0x0001f195) aid_levels_battery

0xb285,	// (0x0001f1b1) battery_pane_g1_ParamLimits

0xb285,	// (0x0001f1b1) battery_pane_g1

0xb2a2,	// (0x0001f1ce) battery_pane_g2_ParamLimits

0xb2a2,	// (0x0001f1ce) battery_pane_g2

0x0001,

0xf7a6,	// (0x000236d2) battery_pane_g_ParamLimits

0xf7a6,	// (0x000236d2) battery_pane_g

0xb4c0,	// (0x0001f3ec) uni_indicator_pane_g1

0xb4d6,	// (0x0001f402) uni_indicator_pane_g2

0xb4ec,	// (0x0001f418) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00023843) uni_indicator_pane_g

0x133b,	// (0x00015267) navi_icon_pane_ParamLimits

0x133b,	// (0x00015267) navi_icon_pane

0x1277,	// (0x000151a3) navi_midp_pane

0x1357,	// (0x00015283) navi_navi_pane

0x1361,	// (0x0001528d) navi_text_pane_ParamLimits

0x1361,	// (0x0001528d) navi_text_pane

0xc237,	// (0x00020163) status_small_wait_pane_g1

0xc5b8,	// (0x000204e4) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0002383e) status_small_wait_pane_g

0xb45f,	// (0x0001f38b) navi_navi_icon_text_pane

0xb467,	// (0x0001f393) navi_navi_pane_g1_ParamLimits

0xb467,	// (0x0001f393) navi_navi_pane_g1

0xb479,	// (0x0001f3a5) navi_navi_pane_g2_ParamLimits

0xb479,	// (0x0001f3a5) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0002380c) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0002380c) navi_navi_pane_g

0x2cf6,	// (0x00016c22) navi_navi_tabs_pane

0xb48b,	// (0x0001f3b7) navi_navi_text_pane

0xb45f,	// (0x0001f38b) navi_navi_volume_pane

0xb44d,	// (0x0001f379) navi_text_pane_t1

0xb441,	// (0x0001f36d) navi_icon_pane_g1

0x2bed,	// (0x00016b19) navi_navi_text_pane_t1

0x9a6b,	// (0x0001d997) navi_navi_volume_pane_g1

0x9a73,	// (0x0001d99f) volume_small_pane

0xb39d,	// (0x0001f2c9) navi_navi_icon_text_pane_g1

0xb3a5,	// (0x0001f2d1) navi_navi_icon_text_pane_t1

0x1357,	// (0x00015283) navi_tabs_2_long_pane

0x1357,	// (0x00015283) navi_tabs_2_pane

0x1357,	// (0x00015283) navi_tabs_3_long_pane

0x1357,	// (0x00015283) navi_tabs_3_pane

0x1357,	// (0x00015283) navi_tabs_4_pane

0x9a4b,	// (0x0001d977) tabs_2_active_pane_ParamLimits

0x9a4b,	// (0x0001d977) tabs_2_active_pane

0x9a5b,	// (0x0001d987) tabs_2_passive_pane_ParamLimits

0x9a5b,	// (0x0001d987) tabs_2_passive_pane

0x9a19,	// (0x0001d945) tabs_3_active_pane_ParamLimits

0x9a19,	// (0x0001d945) tabs_3_active_pane

0x9a29,	// (0x0001d955) tabs_3_passive_pane_ParamLimits

0x9a29,	// (0x0001d955) tabs_3_passive_pane

0x9a3a,	// (0x0001d966) tabs_3_passive_pane_cp_ParamLimits

0x9a3a,	// (0x0001d966) tabs_3_passive_pane_cp

0x99d5,	// (0x0001d901) tabs_4_active_pane_ParamLimits

0x99d5,	// (0x0001d901) tabs_4_active_pane

0x99e6,	// (0x0001d912) tabs_4_passive_pane_ParamLimits

0x99e6,	// (0x0001d912) tabs_4_passive_pane

0x99f7,	// (0x0001d923) tabs_4_passive_pane_cp_ParamLimits

0x99f7,	// (0x0001d923) tabs_4_passive_pane_cp

0x9a08,	// (0x0001d934) tabs_4_passive_pane_cp2_ParamLimits

0x9a08,	// (0x0001d934) tabs_4_passive_pane_cp2

0x99b1,	// (0x0001d8dd) tabs_2_long_active_pane_ParamLimits

0x99b1,	// (0x0001d8dd) tabs_2_long_active_pane

0x99c3,	// (0x0001d8ef) tabs_2_long_passive_pane_ParamLimits

0x99c3,	// (0x0001d8ef) tabs_2_long_passive_pane

0x9966,	// (0x0001d892) tabs_3_long_active_pane_ParamLimits

0x9966,	// (0x0001d892) tabs_3_long_active_pane

0x997f,	// (0x0001d8ab) tabs_3_long_passive_pane_ParamLimits

0x997f,	// (0x0001d8ab) tabs_3_long_passive_pane

0x9998,	// (0x0001d8c4) tabs_3_long_passive_pane_cp_ParamLimits

0x9998,	// (0x0001d8c4) tabs_3_long_passive_pane_cp

0xeab3,	// (0x000229df) volume_small_pane_g1

0x9915,	// (0x0001d841) volume_small_pane_g2

0x991e,	// (0x0001d84a) volume_small_pane_g3

0x9927,	// (0x0001d853) volume_small_pane_g4

0x9930,	// (0x0001d85c) volume_small_pane_g5

0x9939,	// (0x0001d865) volume_small_pane_g6

0x9942,	// (0x0001d86e) volume_small_pane_g7

0x994b,	// (0x0001d877) volume_small_pane_g8

0x9954,	// (0x0001d880) volume_small_pane_g9

0x995d,	// (0x0001d889) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x000237d8) volume_small_pane_g

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp2_ParamLimits

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp2

0xa15b,	// (0x0001e087) tabs_3_active_pane_g1

0xa163,	// (0x0001e08f) tabs_3_active_pane_t1

0xc28f,	// (0x000201bb) bg_passive_tab_pane_cp2_ParamLimits

0xc28f,	// (0x000201bb) bg_passive_tab_pane_cp2

0xa15b,	// (0x0001e087) tabs_3_passive_pane_g1

0xa163,	// (0x0001e08f) tabs_3_passive_pane_t1

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp3_ParamLimits

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp3

0xa175,	// (0x0001e0a1) tabs_4_active_pane_g1

0xa17d,	// (0x0001e0a9) tabs_4_active_pane_t1

0xc28f,	// (0x000201bb) bg_passive_tab_pane_cp3_ParamLimits

0xc28f,	// (0x000201bb) bg_passive_tab_pane_cp3

0xa175,	// (0x0001e0a1) tabs_4_1_passive_pane_g1

0xa17d,	// (0x0001e0a9) tabs_4_1_passive_pane_t1

0x17f0,	// (0x0001571c) list_highlight_pane_cp2

0x324d,	// (0x00017179) list_set_pane_ParamLimits

0x324d,	// (0x00017179) list_set_pane

0xb57f,	// (0x0001f4ab) main_pane_set_t1_ParamLimits

0xb57f,	// (0x0001f4ab) main_pane_set_t1

0xb59f,	// (0x0001f4cb) main_pane_set_t2_ParamLimits

0xb59f,	// (0x0001f4cb) main_pane_set_t2

0xb5b3,	// (0x0001f4df) main_pane_set_t3_ParamLimits

0xb5b3,	// (0x0001f4df) main_pane_set_t3

0xb5c7,	// (0x0001f4f3) main_pane_set_t4_ParamLimits

0xb5c7,	// (0x0001f4f3) main_pane_set_t4

0x0003,

0xf97c,	// (0x000238a8) main_pane_set_t_ParamLimits

0xf97c,	// (0x000238a8) main_pane_set_t

0xb5db,	// (0x0001f507) setting_code_pane

0x3375,	// (0x000172a1) setting_slider_graphic_pane

0x3375,	// (0x000172a1) setting_slider_pane

0x3375,	// (0x000172a1) setting_text_pane

0x3375,	// (0x000172a1) setting_volume_pane

0xdda4,	// (0x00021cd0) volume_set_pane

0xc29d,	// (0x000201c9) bg_set_opt_pane_cp

0xddae,	// (0x00021cda) setting_slider_pane_t1

0xddc7,	// (0x00021cf3) setting_slider_pane_t2

0xdde1,	// (0x00021d0d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002348a) setting_slider_pane_t

0xddf9,	// (0x00021d25) slider_set_pane

0xc241,	// (0x0002016d) bg_set_opt_pane_cp2

0xc2ab,	// (0x000201d7) setting_slider_graphic_pane_g1

0xde0f,	// (0x00021d3b) setting_slider_graphic_pane_t1

0xde1f,	// (0x00021d4b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023491) setting_slider_graphic_pane_t

0xde2f,	// (0x00021d5b) slider_set_pane_cp

0xc241,	// (0x0002016d) input_focus_pane_cp1

0x320e,	// (0x0001713a) list_set_text_pane

0xc237,	// (0x00020163) setting_text_pane_g1

0xc241,	// (0x0002016d) input_focus_pane_cp2

0xc237,	// (0x00020163) setting_code_pane_g1

0xc2b4,	// (0x000201e0) setting_code_pane_t1

0xc2c2,	// (0x000201ee) set_text_pane_t1_ParamLimits

0xc2c2,	// (0x000201ee) set_text_pane_t1

0xdec0,	// (0x00021dec) set_opt_bg_pane_g1

0xdec8,	// (0x00021df4) set_opt_bg_pane_g2

0x31e6,	// (0x00017112) set_opt_bg_pane_g3

0xded8,	// (0x00021e04) set_opt_bg_pane_g4

0xdee0,	// (0x00021e0c) set_opt_bg_pane_g5

0xdee8,	// (0x00021e14) set_opt_bg_pane_g6

0x31f0,	// (0x0001711c) set_opt_bg_pane_g7

0x31fa,	// (0x00017126) set_opt_bg_pane_g8

0x3204,	// (0x00017130) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00023895) set_opt_bg_pane_g

0x31d9,	// (0x00017105) slider_set_pane_g1

0xeb34,	// (0x00022a60) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00023886) slider_set_pane_g

0xeabc,	// (0x000229e8) volume_set_pane_g1

0xeac6,	// (0x000229f2) volume_set_pane_g2

0xead0,	// (0x000229fc) volume_set_pane_g3

0xeada,	// (0x00022a06) volume_set_pane_g4

0xeae4,	// (0x00022a10) volume_set_pane_g5

0xeaee,	// (0x00022a1a) volume_set_pane_g6

0xeaf8,	// (0x00022a24) volume_set_pane_g7

0xeb02,	// (0x00022a2e) volume_set_pane_g8

0xeb0c,	// (0x00022a38) volume_set_pane_g9

0xeb16,	// (0x00022a42) volume_set_pane_g10

0x0009,

0xf932,	// (0x0002385e) volume_set_pane_g

0xa18f,	// (0x0001e0bb) indicator_pane_ParamLimits

0xa18f,	// (0x0001e0bb) indicator_pane

0xa1bb,	// (0x0001e0e7) main_idle_pane_g2_ParamLimits

0xa1bb,	// (0x0001e0e7) main_idle_pane_g2

0xa1f3,	// (0x0001e11f) main_pane_idle_g1_ParamLimits

0xa1f3,	// (0x0001e11f) main_pane_idle_g1

0xc2dc,	// (0x00020208) popup_clock_digital_analogue_window_ParamLimits

0xc2dc,	// (0x00020208) popup_clock_digital_analogue_window

0xa21d,	// (0x0001e149) soft_indicator_pane_ParamLimits

0xa21d,	// (0x0001e149) soft_indicator_pane

0xa239,	// (0x0001e165) wallpaper_pane_ParamLimits

0xa239,	// (0x0001e165) wallpaper_pane

0xc237,	// (0x00020163) wallpaper_pane_g1

0xa24b,	// (0x0001e177) indicator_pane_g1_ParamLimits

0xa24b,	// (0x0001e177) indicator_pane_g1

0x36da,	// (0x00017606) navi_navi_icon_text_pane_srt_g1

0xc30a,	// (0x00020236) soft_indicator_pane_t1

0xc324,	// (0x00020250) aid_ps_area_pane

0xa264,	// (0x0001e190) aid_ps_clock_pane

0xc335,	// (0x00020261) aid_ps_indicator_pane

0xc341,	// (0x0002026d) indicator_ps_pane_ParamLimits

0xc341,	// (0x0002026d) indicator_ps_pane

0xc350,	// (0x0002027c) power_save_pane_g1_ParamLimits

0xc350,	// (0x0002027c) power_save_pane_g1

0xc35c,	// (0x00020288) power_save_pane_g2_ParamLimits

0xc35c,	// (0x00020288) power_save_pane_g2

0xdbd7,	// (0x00021b03) aid_navinavi_width_pane

0xc324,	// (0x00020250) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023496) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023496) power_save_pane_g

0xc36a,	// (0x00020296) power_save_pane_t1_ParamLimits

0xc36a,	// (0x00020296) power_save_pane_t1

0xa264,	// (0x0001e190) aid_ps_clock_pane_ParamLimits

0xc335,	// (0x00020261) aid_ps_indicator_pane_ParamLimits

0xc37c,	// (0x000202a8) power_save_pane_t4_ParamLimits

0xc37c,	// (0x000202a8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002349b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002349b) power_save_pane_t

0xc3a6,	// (0x000202d2) power_save_t3_ParamLimits

0xc3a6,	// (0x000202d2) power_save_t3

0xc391,	// (0x000202bd) power_save_t2_ParamLimits

0xc391,	// (0x000202bd) power_save_t2

0xc3bb,	// (0x000202e7) indicator_ps_pane_g1

0xa272,	// (0x0001e19e) ai_gene_pane_ParamLimits

0xa272,	// (0x0001e19e) ai_gene_pane

0xa289,	// (0x0001e1b5) ai_links_pane_ParamLimits

0xa289,	// (0x0001e1b5) ai_links_pane

0xa2a1,	// (0x0001e1cd) indicator_pane_cp1_ParamLimits

0xa2a1,	// (0x0001e1cd) indicator_pane_cp1

0xa2b0,	// (0x0001e1dc) main_pane_idle_g1_cp_ParamLimits

0xa2b0,	// (0x0001e1dc) main_pane_idle_g1_cp

0xc3c4,	// (0x000202f0) popup_ai_links_title_window

0xa2c8,	// (0x0001e1f4) soft_indicator_pane_cp1_ParamLimits

0xa2c8,	// (0x0001e1f4) soft_indicator_pane_cp1

0x2fa5,	// (0x00016ed1) ai_links_pane_g1

0x2fae,	// (0x00016eda) grid_ai_links_pane

0xb4b7,	// (0x0001f3e3) ai_gene_pane_1

0x2f93,	// (0x00016ebf) ai_gene_pane_2

0x2f9c,	// (0x00016ec8) list_highlight_pane_cp4

0xb493,	// (0x0001f3bf) cell_ai_link_pane_ParamLimits

0xb493,	// (0x0001f3bf) cell_ai_link_pane

0x2f62,	// (0x00016e8e) cell_ai_link_pane_g1

0xc5b8,	// (0x000204e4) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00023839) cell_ai_link_pane_g

0xc241,	// (0x0002016d) grid_highlight_cp2

0xc241,	// (0x0002016d) bg_popup_sub_pane_cp1

0xc3db,	// (0x00020307) popup_ai_links_title_window_t1

0x2eae,	// (0x00016dda) ai_gene_pane_1_g1_ParamLimits

0x2eae,	// (0x00016dda) ai_gene_pane_1_g1

0x2eba,	// (0x00016de6) ai_gene_pane_1_g2_ParamLimits

0x2eba,	// (0x00016de6) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0002382f) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0002382f) ai_gene_pane_1_g

0x2ec7,	// (0x00016df3) ai_gene_pane_1_t1_ParamLimits

0x2ec7,	// (0x00016df3) ai_gene_pane_1_t1

0x2efb,	// (0x00016e27) grid_ai_soft_ind_pane

0x2e99,	// (0x00016dc5) ai_gene_pane_2_t1_ParamLimits

0x2e99,	// (0x00016dc5) ai_gene_pane_2_t1

0xa2dc,	// (0x0001e208) main_pane_empty_t1_ParamLimits

0xa2dc,	// (0x0001e208) main_pane_empty_t1

0xa2f4,	// (0x0001e220) main_pane_empty_t2_ParamLimits

0xa2f4,	// (0x0001e220) main_pane_empty_t2

0xa309,	// (0x0001e235) main_pane_empty_t3_ParamLimits

0xa309,	// (0x0001e235) main_pane_empty_t3

0xa31b,	// (0x0001e247) main_pane_empty_t4_ParamLimits

0xa31b,	// (0x0001e247) main_pane_empty_t4

0xa32d,	// (0x0001e259) main_pane_empty_t5_ParamLimits

0xa32d,	// (0x0001e259) main_pane_empty_t5

0x0004,

0xf574,	// (0x000234a0) main_pane_empty_t_ParamLimits

0xf574,	// (0x000234a0) main_pane_empty_t

0xdf40,	// (0x00021e6c) bg_popup_window_pane_ParamLimits

0xdf40,	// (0x00021e6c) bg_popup_window_pane

0x2bfb,	// (0x00016b27) find_popup_pane_cp2_ParamLimits

0x2bfb,	// (0x00016b27) find_popup_pane_cp2

0x2c07,	// (0x00016b33) heading_pane_ParamLimits

0x2c07,	// (0x00016b33) heading_pane

0xc241,	// (0x0002016d) bg_popup_sub_pane

0xb3c2,	// (0x0001f2ee) bg_popup_window_pane_g1_ParamLimits

0xb3c2,	// (0x0001f2ee) bg_popup_window_pane_g1

0xb3d1,	// (0x0001f2fd) bg_popup_window_pane_g2_ParamLimits

0xb3d1,	// (0x0001f2fd) bg_popup_window_pane_g2

0xb3dd,	// (0x0001f309) bg_popup_window_pane_g3_ParamLimits

0xb3dd,	// (0x0001f309) bg_popup_window_pane_g3

0xb3e9,	// (0x0001f315) bg_popup_window_pane_g4_ParamLimits

0xb3e9,	// (0x0001f315) bg_popup_window_pane_g4

0xb3f8,	// (0x0001f324) bg_popup_window_pane_g5_ParamLimits

0xb3f8,	// (0x0001f324) bg_popup_window_pane_g5

0xb408,	// (0x0001f334) bg_popup_window_pane_g6_ParamLimits

0xb408,	// (0x0001f334) bg_popup_window_pane_g6

0xb414,	// (0x0001f340) bg_popup_window_pane_g7_ParamLimits

0xb414,	// (0x0001f340) bg_popup_window_pane_g7

0xb423,	// (0x0001f34f) bg_popup_window_pane_g8_ParamLimits

0xb423,	// (0x0001f34f) bg_popup_window_pane_g8

0xb432,	// (0x0001f35e) bg_popup_window_pane_g9_ParamLimits

0xb432,	// (0x0001f35e) bg_popup_window_pane_g9

0x2be1,	// (0x00016b0d) bg_popup_window_pane_g10_ParamLimits

0x2be1,	// (0x00016b0d) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x000237f7) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x000237f7) bg_popup_window_pane_g

0x2b0a,	// (0x00016a36) bg_popup_heading_pane_ParamLimits

0x2b0a,	// (0x00016a36) bg_popup_heading_pane

0xec1b,	// (0x00022b47) tabs_4_passive_pane_cp_srt_ParamLimits

0xec1b,	// (0x00022b47) tabs_4_passive_pane_cp_srt

0xec2d,	// (0x00022b59) tabs_4_passive_pane_srt_ParamLimits

0x2b1e,	// (0x00016a4a) heading_pane_g2

0xec2d,	// (0x00022b59) tabs_4_passive_pane_srt

0x1e7a,	// (0x00015da6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1e7a,	// (0x00015da6) bg_passive_tab_pane_cp3_srt

0x2b26,	// (0x00016a52) heading_pane_t1_ParamLimits

0x2b26,	// (0x00016a52) heading_pane_t1

0x2b3d,	// (0x00016a69) heading_pane_t2_ParamLimits

0x2b3d,	// (0x00016a69) heading_pane_t2

0x0001,

0xf8c6,	// (0x000237f2) heading_pane_t_ParamLimits

0xf8c6,	// (0x000237f2) heading_pane_t

0x2635,	// (0x00016561) bg_popup_heading_pane_g1

0x26e4,	// (0x00016610) bg_popup_heading_pane_g2

0x26ee,	// (0x0001661a) bg_popup_heading_pane_g3

0x26f8,	// (0x00016624) bg_popup_heading_pane_g4

0x2702,	// (0x0001662e) bg_popup_heading_pane_g5

0x270c,	// (0x00016638) bg_popup_heading_pane_g6

0x2714,	// (0x00016640) bg_popup_heading_pane_g7

0x271c,	// (0x00016648) bg_popup_heading_pane_g8

0x2726,	// (0x00016652) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x000237ae) bg_popup_heading_pane_g

0x1d56,	// (0x00015c82) bg_popup_sub_pane_g1

0x1d66,	// (0x00015c92) bg_popup_sub_pane_g2

0x1d5e,	// (0x00015c8a) bg_popup_sub_pane_g3

0x1d76,	// (0x00015ca2) bg_popup_sub_pane_g4

0x1d6e,	// (0x00015c9a) bg_popup_sub_pane_g5

0x1d7e,	// (0x00015caa) bg_popup_sub_pane_g6

0x1d86,	// (0x00015cb2) bg_popup_sub_pane_g7

0x1d96,	// (0x00015cc2) bg_popup_sub_pane_g8

0x1d8e,	// (0x00015cba) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00023788) bg_popup_sub_pane_g

0xc28f,	// (0x000201bb) bg_popup_window_pane_cp5_ParamLimits

0xc28f,	// (0x000201bb) bg_popup_window_pane_cp5

0xc3f8,	// (0x00020324) popup_note_window_g1_ParamLimits

0xc3f8,	// (0x00020324) popup_note_window_g1

0xc404,	// (0x00020330) popup_note_window_t1_ParamLimits

0xc404,	// (0x00020330) popup_note_window_t1

0xc41a,	// (0x00020346) popup_note_window_t2_ParamLimits

0xc41a,	// (0x00020346) popup_note_window_t2

0xc430,	// (0x0002035c) popup_note_window_t3_ParamLimits

0xc430,	// (0x0002035c) popup_note_window_t3

0xc446,	// (0x00020372) popup_note_window_t4_ParamLimits

0xc446,	// (0x00020372) popup_note_window_t4

0xc46e,	// (0x0002039a) popup_note_window_t5_ParamLimits

0xc46e,	// (0x0002039a) popup_note_window_t5

0x0004,

0xf57f,	// (0x000234ab) popup_note_window_t_ParamLimits

0xf57f,	// (0x000234ab) popup_note_window_t

0xc4b8,	// (0x000203e4) bg_popup_window_pane_cp6_ParamLimits

0xc4b8,	// (0x000203e4) bg_popup_window_pane_cp6

0x25b1,	// (0x000164dd) popup_note_image_window_g1_ParamLimits

0x25b1,	// (0x000164dd) popup_note_image_window_g1

0x25bd,	// (0x000164e9) popup_note_image_window_g2_ParamLimits

0x25bd,	// (0x000164e9) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0002377c) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0002377c) popup_note_image_window_g

0x25d6,	// (0x00016502) popup_note_image_window_t1_ParamLimits

0x25d6,	// (0x00016502) popup_note_image_window_t1

0x25ef,	// (0x0001651b) popup_note_image_window_t2_ParamLimits

0x25ef,	// (0x0001651b) popup_note_image_window_t2

0x2608,	// (0x00016534) popup_note_image_window_t3_ParamLimits

0x2608,	// (0x00016534) popup_note_image_window_t3

0x0002,

0xf855,	// (0x00023781) popup_note_image_window_t_ParamLimits

0xf855,	// (0x00023781) popup_note_image_window_t

0x2471,	// (0x0001639d) bg_popup_window_pane_cp7_ParamLimits

0x2471,	// (0x0001639d) bg_popup_window_pane_cp7

0x24a1,	// (0x000163cd) popup_note_wait_window_g1_ParamLimits

0x24a1,	// (0x000163cd) popup_note_wait_window_g1

0x24ad,	// (0x000163d9) popup_note_wait_window_g2_ParamLimits

0x24ad,	// (0x000163d9) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0002376a) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0002376a) popup_note_wait_window_g

0x24c5,	// (0x000163f1) popup_note_wait_window_t1_ParamLimits

0x24c5,	// (0x000163f1) popup_note_wait_window_t1

0x24ec,	// (0x00016418) popup_note_wait_window_t2_ParamLimits

0x24ec,	// (0x00016418) popup_note_wait_window_t2

0x250a,	// (0x00016436) popup_note_wait_window_t3_ParamLimits

0x250a,	// (0x00016436) popup_note_wait_window_t3

0x251d,	// (0x00016449) popup_note_wait_window_t4_ParamLimits

0x251d,	// (0x00016449) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x00023771) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x00023771) popup_note_wait_window_t

0x2542,	// (0x0001646e) wait_bar_pane_ParamLimits

0x2542,	// (0x0001646e) wait_bar_pane

0xc241,	// (0x0002016d) wait_anim_pane

0xc241,	// (0x0002016d) wait_border_pane

0xc237,	// (0x00020163) wait_anim_pane_g1

0xc237,	// (0x00020163) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002362a) wait_anim_pane_g

0x2415,	// (0x00016341) wait_border_pane_g1

0x2420,	// (0x0001634c) wait_border_pane_g2

0x2429,	// (0x00016355) wait_border_pane_g3

0x0002,

0xf837,	// (0x00023763) wait_border_pane_g

0x227f,	// (0x000161ab) bg_popup_window_pane_cp16_ParamLimits

0x227f,	// (0x000161ab) bg_popup_window_pane_cp16

0x237f,	// (0x000162ab) indicator_popup_pane_cp4_ParamLimits

0x237f,	// (0x000162ab) indicator_popup_pane_cp4

0x2393,	// (0x000162bf) popup_query_data_window_t1_ParamLimits

0x2393,	// (0x000162bf) popup_query_data_window_t1

0x23a5,	// (0x000162d1) popup_query_data_window_t2_ParamLimits

0x23a5,	// (0x000162d1) popup_query_data_window_t2

0x23be,	// (0x000162ea) popup_query_data_window_t3_ParamLimits

0x23be,	// (0x000162ea) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0002375c) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0002375c) popup_query_data_window_t

0x23d8,	// (0x00016304) query_popup_data_pane_ParamLimits

0x23d8,	// (0x00016304) query_popup_data_pane

0x23ec,	// (0x00016318) query_popup_data_pane_cp1_ParamLimits

0x23ec,	// (0x00016318) query_popup_data_pane_cp1

0x227f,	// (0x000161ab) bg_popup_window_pane_cp10_ParamLimits

0x227f,	// (0x000161ab) bg_popup_window_pane_cp10

0x22b1,	// (0x000161dd) indicator_popup_pane_ParamLimits

0x22b1,	// (0x000161dd) indicator_popup_pane

0x22d3,	// (0x000161ff) popup_query_code_window_t1_ParamLimits

0x22d3,	// (0x000161ff) popup_query_code_window_t1

0x22ed,	// (0x00016219) popup_query_code_window_t2_ParamLimits

0x22ed,	// (0x00016219) popup_query_code_window_t2

0x2336,	// (0x00016262) popup_query_code_window_t3_ParamLimits

0x2336,	// (0x00016262) popup_query_code_window_t3

0x0002,

0xf829,	// (0x00023755) popup_query_code_window_t_ParamLimits

0xf829,	// (0x00023755) popup_query_code_window_t

0x2365,	// (0x00016291) query_popup_pane_ParamLimits

0x2365,	// (0x00016291) query_popup_pane

0xc4b8,	// (0x000203e4) bg_popup_window_pane_cp15_ParamLimits

0xc4b8,	// (0x000203e4) bg_popup_window_pane_cp15

0xc4d8,	// (0x00020404) indicator_popup_pane_cp1_ParamLimits

0xc4d8,	// (0x00020404) indicator_popup_pane_cp1

0xc4eb,	// (0x00020417) indicator_popup_pane_cp2_ParamLimits

0xc4eb,	// (0x00020417) indicator_popup_pane_cp2

0xc506,	// (0x00020432) popup_query_data_code_window_g1_ParamLimits

0xc506,	// (0x00020432) popup_query_data_code_window_g1

0xc519,	// (0x00020445) popup_query_data_code_window_t1_ParamLimits

0xc519,	// (0x00020445) popup_query_data_code_window_t1

0xc52b,	// (0x00020457) popup_query_data_code_window_t2_ParamLimits

0xc52b,	// (0x00020457) popup_query_data_code_window_t2

0xc53d,	// (0x00020469) popup_query_data_code_window_t3_ParamLimits

0xc53d,	// (0x00020469) popup_query_data_code_window_t3

0xc553,	// (0x0002047f) popup_query_data_code_window_t4_ParamLimits

0xc553,	// (0x0002047f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000234b6) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000234b6) popup_query_data_code_window_t

0xea1e,	// (0x0002294a) list_single_midp_graphic_pane_g3

0xc56d,	// (0x00020499) query_popup_data_pane_cp2_ParamLimits

0xc580,	// (0x000204ac) query_popup_pane_cp2_ParamLimits

0xc580,	// (0x000204ac) query_popup_pane_cp2

0xc241,	// (0x0002016d) bg_popup_window_pane_cp11

0x226b,	// (0x00016197) heading_pane_cp5

0xc619,	// (0x00020545) listscroll_popup_info_pane

0xc241,	// (0x0002016d) input_focus_pane_cp3

0xc59b,	// (0x000204c7) query_popup_pane_t1

0xc5a9,	// (0x000204d5) list_popup_info_pane_ParamLimits

0xc5a9,	// (0x000204d5) list_popup_info_pane

0xc5b8,	// (0x000204e4) listscroll_popup_info_pane_g1

0xc5c0,	// (0x000204ec) scroll_pane_cp7

0xc5ca,	// (0x000204f6) popup_info_list_pane_t1_ParamLimits

0xc5ca,	// (0x000204f6) popup_info_list_pane_t1

0xc5e4,	// (0x00020510) popup_info_list_pane_t2_ParamLimits

0xc5e4,	// (0x00020510) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000234bf) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000234bf) popup_info_list_pane_t

0xc241,	// (0x0002016d) bg_popup_window_pane_cp12

0x36f4,	// (0x00017620) find_popup_pane

0xc29d,	// (0x000201c9) bg_popup_window_pane_cp3

0xc5fe,	// (0x0002052a) heading_pane_cp3

0xc60a,	// (0x00020536) listscroll_popup_graphic_pane

0xc241,	// (0x0002016d) bg_popup_window_pane_cp4

0xa38f,	// (0x0001e2bb) heading_pane_cp4

0xc619,	// (0x00020545) listscroll_popup_colour_pane

0xa399,	// (0x0001e2c5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa399,	// (0x0001e2c5) cell_large_graphic_colour_none_popup_pane

0xa3ad,	// (0x0001e2d9) grid_large_graphic_colour_popup_pane_ParamLimits

0xa3ad,	// (0x0001e2d9) grid_large_graphic_colour_popup_pane

0xa3d1,	// (0x0001e2fd) listscroll_popup_colour_pane_g1_ParamLimits

0xa3d1,	// (0x0001e2fd) listscroll_popup_colour_pane_g1

0xa3e8,	// (0x0001e314) listscroll_popup_colour_pane_g2_ParamLimits

0xa3e8,	// (0x0001e314) listscroll_popup_colour_pane_g2

0xa3ff,	// (0x0001e32b) listscroll_popup_colour_pane_g3_ParamLimits

0xa3ff,	// (0x0001e32b) listscroll_popup_colour_pane_g3

0xa40f,	// (0x0001e33b) listscroll_popup_colour_pane_g4_ParamLimits

0xa40f,	// (0x0001e33b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000234c4) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000234c4) listscroll_popup_colour_pane_g

0xc621,	// (0x0002054d) scroll_pane_cp6_ParamLimits

0xc621,	// (0x0002054d) scroll_pane_cp6

0xa41f,	// (0x0001e34b) cell_large_graphic_colour_popup_pane_ParamLimits

0xa41f,	// (0x0001e34b) cell_large_graphic_colour_popup_pane

0xc633,	// (0x0002055f) cell_large_graphic_colour_none_popup_pane_t1

0xc241,	// (0x0002016d) grid_highlight_pane_cp5

0xc642,	// (0x0002056e) cell_large_graphic_colour_popup_pane_g1

0xc64a,	// (0x00020576) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000234cd) cell_large_graphic_colour_popup_pane_g

0xc652,	// (0x0002057e) cell_large_graphic_colour_popup_pane_g2_copy1

0xc65b,	// (0x00020587) grid_highlight_pane_cp4

0xc663,	// (0x0002058f) bg_popup_window_pane_cp8_ParamLimits

0xc663,	// (0x0002058f) bg_popup_window_pane_cp8

0xc67e,	// (0x000205aa) popup_snote_single_text_window_g1_ParamLimits

0xc67e,	// (0x000205aa) popup_snote_single_text_window_g1

0xc690,	// (0x000205bc) popup_snote_single_text_window_t1_ParamLimits

0xc690,	// (0x000205bc) popup_snote_single_text_window_t1

0xc6a3,	// (0x000205cf) popup_snote_single_text_window_t2_ParamLimits

0xc6a3,	// (0x000205cf) popup_snote_single_text_window_t2

0xc6b6,	// (0x000205e2) popup_snote_single_text_window_t3_ParamLimits

0xc6b6,	// (0x000205e2) popup_snote_single_text_window_t3

0xc6ef,	// (0x0002061b) popup_snote_single_text_window_t4_ParamLimits

0xc6ef,	// (0x0002061b) popup_snote_single_text_window_t4

0xc723,	// (0x0002064f) popup_snote_single_text_window_t5_ParamLimits

0xc723,	// (0x0002064f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000234d2) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000234d2) popup_snote_single_text_window_t

0xc752,	// (0x0002067e) bg_popup_window_pane_cp9_ParamLimits

0xc752,	// (0x0002067e) bg_popup_window_pane_cp9

0xc67e,	// (0x000205aa) popup_snote_single_graphic_window_g1_ParamLimits

0xc67e,	// (0x000205aa) popup_snote_single_graphic_window_g1

0xc760,	// (0x0002068c) popup_snote_single_graphic_window_g2_ParamLimits

0xc760,	// (0x0002068c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000234dd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000234dd) popup_snote_single_graphic_window_g

0xc76c,	// (0x00020698) popup_snote_single_graphic_window_t1_ParamLimits

0xc76c,	// (0x00020698) popup_snote_single_graphic_window_t1

0xc77f,	// (0x000206ab) popup_snote_single_graphic_window_t2_ParamLimits

0xc77f,	// (0x000206ab) popup_snote_single_graphic_window_t2

0xc792,	// (0x000206be) popup_snote_single_graphic_window_t3_ParamLimits

0xc792,	// (0x000206be) popup_snote_single_graphic_window_t3

0xc7cb,	// (0x000206f7) popup_snote_single_graphic_window_t4_ParamLimits

0xc7cb,	// (0x000206f7) popup_snote_single_graphic_window_t4

0xc7ff,	// (0x0002072b) popup_snote_single_graphic_window_t5_ParamLimits

0xc7ff,	// (0x0002072b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000234e2) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000234e2) popup_snote_single_graphic_window_t

0x3632,	// (0x0001755e) grid_graphic_popup_pane_ParamLimits

0x3632,	// (0x0001755e) grid_graphic_popup_pane

0x3660,	// (0x0001758c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3660,	// (0x0001758c) listscroll_popup_graphic_pane_g1

0xb745,	// (0x0001f671) listscroll_popup_graphic_pane_g2_ParamLimits

0xb745,	// (0x0001f671) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x000238d2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x000238d2) listscroll_popup_graphic_pane_g

0x3688,	// (0x000175b4) scroll_pane_cp5

0xb6e4,	// (0x0001f610) cell_graphic_popup_pane_ParamLimits

0xb6e4,	// (0x0001f610) cell_graphic_popup_pane

0x35a8,	// (0x000174d4) cell_graphic_popup_pane_g1

0x35b0,	// (0x000174dc) cell_graphic_popup_pane_g2

0xc652,	// (0x0002057e) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x000238cb) cell_graphic_popup_pane_g

0x35b9,	// (0x000174e5) cell_graphic_popup_pane_t2

0xc65b,	// (0x00020587) grid_highlight_pane_cp3

0xc840,	// (0x0002076c) list_gen_pane_ParamLimits

0xc840,	// (0x0002076c) list_gen_pane

0xc868,	// (0x00020794) scroll_pane

0xb69b,	// (0x0001f5c7) bg_list_pane_g1_ParamLimits

0xb69b,	// (0x0001f5c7) bg_list_pane_g1

0x351d,	// (0x00017449) bg_list_pane_g2_ParamLimits

0x351d,	// (0x00017449) bg_list_pane_g2

0x3532,	// (0x0001745e) bg_list_pane_g3_ParamLimits

0x3532,	// (0x0001745e) bg_list_pane_g3

0x3546,	// (0x00017472) bg_list_pane_g4_ParamLimits

0x3546,	// (0x00017472) bg_list_pane_g4

0xb6b8,	// (0x0001f5e4) bg_list_pane_g5_ParamLimits

0xb6b8,	// (0x0001f5e4) bg_list_pane_g5

0x0004,

0xf994,	// (0x000238c0) bg_list_pane_g_ParamLimits

0xf994,	// (0x000238c0) bg_list_pane_g

0xb635,	// (0x0001f561) list_double2_graphic_large_graphic_pane_ParamLimits

0xb635,	// (0x0001f561) list_double2_graphic_large_graphic_pane

0xb635,	// (0x0001f561) list_double2_graphic_pane_ParamLimits

0xb635,	// (0x0001f561) list_double2_graphic_pane

0xb635,	// (0x0001f561) list_double2_large_graphic_pane_ParamLimits

0xb635,	// (0x0001f561) list_double2_large_graphic_pane

0xb635,	// (0x0001f561) list_double2_pane_ParamLimits

0xb635,	// (0x0001f561) list_double2_pane

0xb635,	// (0x0001f561) list_double_graphic_heading_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_graphic_heading_pane

0xb635,	// (0x0001f561) list_double_graphic_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_graphic_pane

0xb635,	// (0x0001f561) list_double_heading_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_heading_pane

0xb635,	// (0x0001f561) list_double_large_graphic_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_large_graphic_pane

0xb635,	// (0x0001f561) list_double_number_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_number_pane

0xb635,	// (0x0001f561) list_double_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_pane

0xb635,	// (0x0001f561) list_double_time_pane_ParamLimits

0xb635,	// (0x0001f561) list_double_time_pane

0xb635,	// (0x0001f561) list_setting_number_pane_ParamLimits

0xb635,	// (0x0001f561) list_setting_number_pane

0xb635,	// (0x0001f561) list_setting_pane_ParamLimits

0xb635,	// (0x0001f561) list_setting_pane

0xb649,	// (0x0001f575) list_single_2graphic_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_2graphic_pane

0xb649,	// (0x0001f575) list_single_graphic_heading_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_graphic_heading_pane

0xb649,	// (0x0001f575) list_single_graphic_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_graphic_pane

0xb649,	// (0x0001f575) list_single_heading_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_heading_pane

0xb649,	// (0x0001f575) list_single_large_graphic_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_large_graphic_pane

0xb649,	// (0x0001f575) list_single_number_heading_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_number_heading_pane

0xb649,	// (0x0001f575) list_single_number_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_number_pane

0xb649,	// (0x0001f575) list_single_pane_ParamLimits

0xb649,	// (0x0001f575) list_single_pane

0xc241,	// (0x0002016d) list_highlight_pane_cp1

0x1432,	// (0x0001535e) list_single_pane_g1_ParamLimits

0x1432,	// (0x0001535e) list_single_pane_g1

0x1cd8,	// (0x00015c04) list_single_pane_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000234f4) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000234f4) list_single_pane_g

0x3d11,	// (0x00017c3d) list_single_pane_t1_ParamLimits

0x3d11,	// (0x00017c3d) list_single_pane_t1

0x1432,	// (0x0001535e) list_single_number_pane_g1_ParamLimits

0x1432,	// (0x0001535e) list_single_number_pane_g1

0x1cd8,	// (0x00015c04) list_single_number_pane_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000234f4) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000234f4) list_single_number_pane_g

0x1ce4,	// (0x00015c10) list_single_number_pane_t1_ParamLimits

0x1ce4,	// (0x00015c10) list_single_number_pane_t1

0x3e0a,	// (0x00017d36) list_single_number_pane_t2_ParamLimits

0x3e0a,	// (0x00017d36) list_single_number_pane_t2

0x0001,

0xf955,	// (0x00023881) list_single_number_pane_t_ParamLimits

0xf955,	// (0x00023881) list_single_number_pane_t

0x5222,	// (0x0001914e) list_single_graphic_pane_g1_ParamLimits

0x5222,	// (0x0001914e) list_single_graphic_pane_g1

0x1432,	// (0x0001535e) list_single_graphic_pane_g2_ParamLimits

0x1432,	// (0x0001535e) list_single_graphic_pane_g2

0x1cd8,	// (0x00015c04) list_single_graphic_pane_g3_ParamLimits

0x1cd8,	// (0x00015c04) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000234ed) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000234ed) list_single_graphic_pane_g

0xa44a,	// (0x0001e376) list_single_graphic_pane_t1_ParamLimits

0xa44a,	// (0x0001e376) list_single_graphic_pane_t1

0x1432,	// (0x0001535e) list_single_heading_pane_g1_ParamLimits

0x1432,	// (0x0001535e) list_single_heading_pane_g1

0x1cd8,	// (0x00015c04) list_single_heading_pane_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000234f4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000234f4) list_single_heading_pane_g

0xa460,	// (0x0001e38c) list_single_heading_pane_t1_ParamLimits

0xa460,	// (0x0001e38c) list_single_heading_pane_t1

0xa476,	// (0x0001e3a2) list_single_heading_pane_t2_ParamLimits

0xa476,	// (0x0001e3a2) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000234f9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000234f9) list_single_heading_pane_t

0x1432,	// (0x0001535e) list_single_number_heading_pane_g1_ParamLimits

0x1432,	// (0x0001535e) list_single_number_heading_pane_g1

0x1cd8,	// (0x00015c04) list_single_number_heading_pane_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000234f4) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000234f4) list_single_number_heading_pane_g

0xa460,	// (0x0001e38c) list_single_number_heading_pane_t1_ParamLimits

0xa460,	// (0x0001e38c) list_single_number_heading_pane_t1

0x3cdb,	// (0x00017c07) list_single_number_heading_pane_t2_ParamLimits

0x3cdb,	// (0x00017c07) list_single_number_heading_pane_t2

0x3ced,	// (0x00017c19) list_single_number_heading_pane_t3_ParamLimits

0x3ced,	// (0x00017c19) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000234fe) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000234fe) list_single_number_heading_pane_t

0x1ccc,	// (0x00015bf8) list_single_graphic_heading_pane_g1_ParamLimits

0x1ccc,	// (0x00015bf8) list_single_graphic_heading_pane_g1

0xa488,	// (0x0001e3b4) list_single_graphic_heading_pane_g4_ParamLimits

0xa488,	// (0x0001e3b4) list_single_graphic_heading_pane_g4

0x1cd8,	// (0x00015c04) list_single_graphic_heading_pane_g5_ParamLimits

0x1cd8,	// (0x00015c04) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023505) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023505) list_single_graphic_heading_pane_g

0xa460,	// (0x0001e38c) list_single_graphic_heading_pane_t1_ParamLimits

0xa460,	// (0x0001e38c) list_single_graphic_heading_pane_t1

0xa499,	// (0x0001e3c5) list_single_graphic_heading_pane_t2_ParamLimits

0xa499,	// (0x0001e3c5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002350c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002350c) list_single_graphic_heading_pane_t

0x3d27,	// (0x00017c53) list_single_large_graphic_pane_g1_ParamLimits

0x3d27,	// (0x00017c53) list_single_large_graphic_pane_g1

0x1432,	// (0x0001535e) list_single_large_graphic_pane_g2_ParamLimits

0x1432,	// (0x0001535e) list_single_large_graphic_pane_g2

0x1cd8,	// (0x00015c04) list_single_large_graphic_pane_g3_ParamLimits

0x1cd8,	// (0x00015c04) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023511) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023511) list_single_large_graphic_pane_g

0x2420,	// (0x0001634c) wait_border_pane_g2_copy1

0xa4ab,	// (0x0001e3d7) list_single_large_graphic_pane_g4_cp2

0x3d33,	// (0x00017c5f) list_single_large_graphic_pane_t1_ParamLimits

0x3d33,	// (0x00017c5f) list_single_large_graphic_pane_t1

0xa4b3,	// (0x0001e3df) list_double_pane_g1_ParamLimits

0xa4b3,	// (0x0001e3df) list_double_pane_g1

0xa4bf,	// (0x0001e3eb) list_double_pane_g2_ParamLimits

0xa4bf,	// (0x0001e3eb) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023518) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023518) list_double_pane_g

0xa4cb,	// (0x0001e3f7) list_double_pane_t1_ParamLimits

0xa4cb,	// (0x0001e3f7) list_double_pane_t1

0xa4e1,	// (0x0001e40d) list_double_pane_t2_ParamLimits

0xa4e1,	// (0x0001e40d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002351d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002351d) list_double_pane_t

0xa4f3,	// (0x0001e41f) list_double2_pane_g1_ParamLimits

0xa4f3,	// (0x0001e41f) list_double2_pane_g1

0xa504,	// (0x0001e430) list_double2_pane_g2_ParamLimits

0xa504,	// (0x0001e430) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023522) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023522) list_double2_pane_g

0xa510,	// (0x0001e43c) list_double2_pane_t1_ParamLimits

0xa510,	// (0x0001e43c) list_double2_pane_t1

0xa526,	// (0x0001e452) list_double2_pane_t2_ParamLimits

0xa526,	// (0x0001e452) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023527) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023527) list_double2_pane_t

0xa4b3,	// (0x0001e3df) list_double_number_pane_g1_ParamLimits

0xa4b3,	// (0x0001e3df) list_double_number_pane_g1

0xa4bf,	// (0x0001e3eb) list_double_number_pane_g2_ParamLimits

0xa4bf,	// (0x0001e3eb) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023518) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023518) list_double_number_pane_g

0xa538,	// (0x0001e464) list_double_number_pane_t1_ParamLimits

0xa538,	// (0x0001e464) list_double_number_pane_t1

0xa54a,	// (0x0001e476) list_double_number_pane_t2_ParamLimits

0xa54a,	// (0x0001e476) list_double_number_pane_t2

0xa560,	// (0x0001e48c) list_double_number_pane_t3_ParamLimits

0xa560,	// (0x0001e48c) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002352c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002352c) list_double_number_pane_t

0xa572,	// (0x0001e49e) list_double_graphic_pane_g1_ParamLimits

0xa572,	// (0x0001e49e) list_double_graphic_pane_g1

0xa57e,	// (0x0001e4aa) list_double_graphic_pane_g2_ParamLimits

0xa57e,	// (0x0001e4aa) list_double_graphic_pane_g2

0xa58d,	// (0x0001e4b9) list_double_graphic_pane_g3_ParamLimits

0xa58d,	// (0x0001e4b9) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023533) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023533) list_double_graphic_pane_g

0xa5a5,	// (0x0001e4d1) list_double_graphic_pane_t1_ParamLimits

0xa5a5,	// (0x0001e4d1) list_double_graphic_pane_t1

0xa5bb,	// (0x0001e4e7) list_double_graphic_pane_t2_ParamLimits

0xa5bb,	// (0x0001e4e7) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002353c) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002353c) list_double_graphic_pane_t

0xa5cd,	// (0x0001e4f9) list_double2_graphic_pane_g1_ParamLimits

0xa5cd,	// (0x0001e4f9) list_double2_graphic_pane_g1

0xa5d9,	// (0x0001e505) list_double2_graphic_pane_g2_ParamLimits

0xa5d9,	// (0x0001e505) list_double2_graphic_pane_g2

0xa504,	// (0x0001e430) list_double2_graphic_pane_g3_ParamLimits

0xa504,	// (0x0001e430) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00023541) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00023541) list_double2_graphic_pane_g

0xa5e5,	// (0x0001e511) list_double2_graphic_pane_t1_ParamLimits

0xa5e5,	// (0x0001e511) list_double2_graphic_pane_t1

0xa5fb,	// (0x0001e527) list_double2_graphic_pane_t2_ParamLimits

0xa5fb,	// (0x0001e527) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00023548) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00023548) list_double2_graphic_pane_t

0xa60d,	// (0x0001e539) list_double_large_graphic_pane_g1_ParamLimits

0xa60d,	// (0x0001e539) list_double_large_graphic_pane_g1

0xa62c,	// (0x0001e558) list_double_large_graphic_pane_g2_ParamLimits

0xa62c,	// (0x0001e558) list_double_large_graphic_pane_g2

0xa4bf,	// (0x0001e3eb) list_double_large_graphic_pane_g3_ParamLimits

0xa4bf,	// (0x0001e3eb) list_double_large_graphic_pane_g3

0xa63d,	// (0x0001e569) list_double_large_graphic_pane_g4_ParamLimits

0xa63d,	// (0x0001e569) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002354d) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002354d) list_double_large_graphic_pane_g

0xa64f,	// (0x0001e57b) list_double_large_graphic_pane_t1_ParamLimits

0xa64f,	// (0x0001e57b) list_double_large_graphic_pane_t1

0xa668,	// (0x0001e594) list_double_large_graphic_pane_t2_ParamLimits

0xa668,	// (0x0001e594) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00023558) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00023558) list_double_large_graphic_pane_t

0xa67a,	// (0x0001e5a6) list_double2_large_graphic_pane_g1_ParamLimits

0xa67a,	// (0x0001e5a6) list_double2_large_graphic_pane_g1

0xa4f3,	// (0x0001e41f) list_double2_large_graphic_pane_g2_ParamLimits

0xa4f3,	// (0x0001e41f) list_double2_large_graphic_pane_g2

0xa504,	// (0x0001e430) list_double2_large_graphic_pane_g3_ParamLimits

0xa504,	// (0x0001e430) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002355d) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002355d) list_double2_large_graphic_pane_g

0xa686,	// (0x0001e5b2) list_double2_large_graphic_pane_t1_ParamLimits

0xa686,	// (0x0001e5b2) list_double2_large_graphic_pane_t1

0xa69c,	// (0x0001e5c8) list_double2_large_graphic_pane_t2_ParamLimits

0xa69c,	// (0x0001e5c8) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00023564) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00023564) list_double2_large_graphic_pane_t

0xa6ae,	// (0x0001e5da) list_double_heading_pane_g1_ParamLimits

0xa6ae,	// (0x0001e5da) list_double_heading_pane_g1

0xa6bf,	// (0x0001e5eb) list_double_heading_pane_g2_ParamLimits

0xa6bf,	// (0x0001e5eb) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00023569) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00023569) list_double_heading_pane_g

0xa6cb,	// (0x0001e5f7) list_double_heading_pane_t1_ParamLimits

0xa6cb,	// (0x0001e5f7) list_double_heading_pane_t1

0xa6e1,	// (0x0001e60d) list_double_heading_pane_t2_ParamLimits

0xa6e1,	// (0x0001e60d) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002356e) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002356e) list_double_heading_pane_t

0xa6f3,	// (0x0001e61f) list_double_graphic_heading_pane_g1_ParamLimits

0xa6f3,	// (0x0001e61f) list_double_graphic_heading_pane_g1

0xa6ae,	// (0x0001e5da) list_double_graphic_heading_pane_g2_ParamLimits

0xa6ae,	// (0x0001e5da) list_double_graphic_heading_pane_g2

0xa6bf,	// (0x0001e5eb) list_double_graphic_heading_pane_g3_ParamLimits

0xa6bf,	// (0x0001e5eb) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00023573) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00023573) list_double_graphic_heading_pane_g

0xa6ff,	// (0x0001e62b) list_double_graphic_heading_pane_t1_ParamLimits

0xa6ff,	// (0x0001e62b) list_double_graphic_heading_pane_t1

0xa715,	// (0x0001e641) list_double_graphic_heading_pane_t2_ParamLimits

0xa715,	// (0x0001e641) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002357a) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002357a) list_double_graphic_heading_pane_t

0xa62c,	// (0x0001e558) list_double_time_pane_g1_ParamLimits

0xa62c,	// (0x0001e558) list_double_time_pane_g1

0xa4bf,	// (0x0001e3eb) list_double_time_pane_g2_ParamLimits

0xa4bf,	// (0x0001e3eb) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002357f) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002357f) list_double_time_pane_g

0xa727,	// (0x0001e653) list_double_time_pane_t1_ParamLimits

0xa727,	// (0x0001e653) list_double_time_pane_t1

0xa73d,	// (0x0001e669) list_double_time_pane_t2_ParamLimits

0xa73d,	// (0x0001e669) list_double_time_pane_t2

0xa74f,	// (0x0001e67b) list_double_time_pane_t3_ParamLimits

0xa74f,	// (0x0001e67b) list_double_time_pane_t3

0xa761,	// (0x0001e68d) list_double_time_pane_t4_ParamLimits

0xa761,	// (0x0001e68d) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00023584) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00023584) list_double_time_pane_t

0xa5d9,	// (0x0001e505) list_setting_pane_g1_ParamLimits

0xa5d9,	// (0x0001e505) list_setting_pane_g1

0xa504,	// (0x0001e430) list_setting_pane_g2_ParamLimits

0xa504,	// (0x0001e430) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002358d) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002358d) list_setting_pane_g

0xa773,	// (0x0001e69f) list_setting_pane_t1_ParamLimits

0xa773,	// (0x0001e69f) list_setting_pane_t1

0xa78a,	// (0x0001e6b6) list_setting_pane_t2_ParamLimits

0xa78a,	// (0x0001e6b6) list_setting_pane_t2

0x0002,

0xf666,	// (0x00023592) list_setting_pane_t_ParamLimits

0xf666,	// (0x00023592) list_setting_pane_t

0xa7c9,	// (0x0001e6f5) set_value_pane_cp_ParamLimits

0xa7c9,	// (0x0001e6f5) set_value_pane_cp

0xa5d9,	// (0x0001e505) list_setting_number_pane_g1_ParamLimits

0xa5d9,	// (0x0001e505) list_setting_number_pane_g1

0xa504,	// (0x0001e430) list_setting_number_pane_g2_ParamLimits

0xa504,	// (0x0001e430) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0002358d) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0002358d) list_setting_number_pane_g

0xa7d7,	// (0x0001e703) list_setting_number_pane_t1_ParamLimits

0xa7d7,	// (0x0001e703) list_setting_number_pane_t1

0xa7eb,	// (0x0001e717) list_setting_number_pane_t2_ParamLimits

0xa7eb,	// (0x0001e717) list_setting_number_pane_t2

0xa802,	// (0x0001e72e) list_setting_number_pane_t3_ParamLimits

0xa802,	// (0x0001e72e) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00023599) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00023599) list_setting_number_pane_t

0xa7c9,	// (0x0001e6f5) set_value_pane_ParamLimits

0xa7c9,	// (0x0001e6f5) set_value_pane

0xc8b1,	// (0x000207dd) bg_set_opt_pane_ParamLimits

0xc8b1,	// (0x000207dd) bg_set_opt_pane

0xc8d2,	// (0x000207fe) set_value_pane_t1

0xc8e0,	// (0x0002080c) slider_set_pane_cp3

0xc8e9,	// (0x00020815) volume_small_pane_cp

0xc8f2,	// (0x0002081e) list_form_gen_pane

0xc8fb,	// (0x00020827) scroll_pane_cp8

0xa845,	// (0x0001e771) form_field_data_pane_ParamLimits

0xa845,	// (0x0001e771) form_field_data_pane

0xa860,	// (0x0001e78c) form_field_data_wide_pane_ParamLimits

0xa860,	// (0x0001e78c) form_field_data_wide_pane

0xa884,	// (0x0001e7b0) form_field_popup_pane_ParamLimits

0xa884,	// (0x0001e7b0) form_field_popup_pane

0xc91c,	// (0x00020848) form_field_popup_wide_pane_ParamLimits

0xc91c,	// (0x00020848) form_field_popup_wide_pane

0xc93d,	// (0x00020869) form_field_slider_pane_ParamLimits

0xc93d,	// (0x00020869) form_field_slider_pane

0xc950,	// (0x0002087c) form_field_slider_wide_pane_ParamLimits

0xc950,	// (0x0002087c) form_field_slider_wide_pane

0xc963,	// (0x0002088f) data_form_pane

0xa8b0,	// (0x0001e7dc) form_field_data_pane_t1

0xc96f,	// (0x0002089b) input_focus_pane

0xc97d,	// (0x000208a9) data_form_wide_pane

0xde4b,	// (0x00021d77) form_field_data_wide_pane_t1

0xc670,	// (0x0002059c) input_focus_pane_cp6

0xa8ca,	// (0x0001e7f6) form_field_popup_pane_t1

0xc96f,	// (0x0002089b) input_focus_pane_cp7

0xde6a,	// (0x00021d96) list_form_pane

0xde7e,	// (0x00021daa) form_field_popup_wide_pane_t1

0xc96f,	// (0x0002089b) input_focus_pane_cp8

0xde90,	// (0x00021dbc) list_form_wide_pane

0xa8ec,	// (0x0001e818) form_field_slider_pane_t1_ParamLimits

0xa8ec,	// (0x0001e818) form_field_slider_pane_t1

0xa904,	// (0x0001e830) form_field_slider_pane_t2_ParamLimits

0xa904,	// (0x0001e830) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000235a9) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000235a9) form_field_slider_pane_t

0xc28f,	// (0x000201bb) input_focus_pane_cp9_ParamLimits

0xc28f,	// (0x000201bb) input_focus_pane_cp9

0xa919,	// (0x0001e845) slider_cont_pane_ParamLimits

0xa919,	// (0x0001e845) slider_cont_pane

0xde9c,	// (0x00021dc8) form_field_slider_wide_pane_t1_ParamLimits

0xde9c,	// (0x00021dc8) form_field_slider_wide_pane_t1

0xdeae,	// (0x00021dda) form_field_slider_wide_pane_t2_ParamLimits

0xdeae,	// (0x00021dda) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000235ae) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000235ae) form_field_slider_wide_pane_t

0xc28f,	// (0x000201bb) input_focus_pane_cp10_ParamLimits

0xc28f,	// (0x000201bb) input_focus_pane_cp10

0xa92d,	// (0x0001e859) slider_cont_pane_cp1_ParamLimits

0xa92d,	// (0x0001e859) slider_cont_pane_cp1

0xa941,	// (0x0001e86d) slider_form_pane_cp

0xdec0,	// (0x00021dec) input_focus_pane_g1

0xdec8,	// (0x00021df4) input_focus_pane_g2

0xded0,	// (0x00021dfc) input_focus_pane_g3

0xded8,	// (0x00021e04) input_focus_pane_g4

0xdee0,	// (0x00021e0c) input_focus_pane_g5

0xdee8,	// (0x00021e14) input_focus_pane_g6

0xdef0,	// (0x00021e1c) input_focus_pane_g7

0xdef8,	// (0x00021e24) input_focus_pane_g8

0xdf00,	// (0x00021e2c) input_focus_pane_g9

0xc237,	// (0x00020163) input_focus_pane_g10

0x0009,

0xf687,	// (0x000235b3) input_focus_pane_g

0x2429,	// (0x00016355) wait_border_pane_g3_copy1

0xa949,	// (0x0001e875) data_form_pane_t1

0xc237,	// (0x00020163) wait_anim_pane_g1_copy1

0xb60a,	// (0x0001f536) data_form_wide_pane_t1

0xdf08,	// (0x00021e34) list_form_graphic_pane_cp_ParamLimits

0xdf08,	// (0x00021e34) list_form_graphic_pane_cp

0x339d,	// (0x000172c9) slider_form_pane_g1

0x33a6,	// (0x000172d2) slider_form_pane_g2

0x0006,

0xf985,	// (0x000238b1) slider_form_pane_g

0xa965,	// (0x0001e891) list_form_graphic_pane_ParamLimits

0xa965,	// (0x0001e891) list_form_graphic_pane

0xdf1a,	// (0x00021e46) list_form_graphic_pane_g1

0xdf22,	// (0x00021e4e) list_form_graphic_pane_t1_ParamLimits

0xdf22,	// (0x00021e4e) list_form_graphic_pane_t1

0xc29d,	// (0x000201c9) list_highlight_pane_cp5_ParamLimits

0xc29d,	// (0x000201c9) list_highlight_pane_cp5

0xa976,	// (0x0001e8a2) find_pane_g1

0xdf37,	// (0x00021e63) input_find_pane

0xa97f,	// (0x0001e8ab) input_find_pane_g1_ParamLimits

0xa97f,	// (0x0001e8ab) input_find_pane_g1

0xa98b,	// (0x0001e8b7) input_find_pane_t1_ParamLimits

0xa98b,	// (0x0001e8b7) input_find_pane_t1

0xa9a0,	// (0x0001e8cc) input_find_pane_t2_ParamLimits

0xa9a0,	// (0x0001e8cc) input_find_pane_t2

0x0001,

0xf69c,	// (0x000235c8) input_find_pane_t_ParamLimits

0xf69c,	// (0x000235c8) input_find_pane_t

0xdf40,	// (0x00021e6c) input_focus_pane_cp5_ParamLimits

0xdf40,	// (0x00021e6c) input_focus_pane_cp5

0xdf4e,	// (0x00021e7a) bg_popup_window_pane_cp2_ParamLimits

0xdf4e,	// (0x00021e7a) bg_popup_window_pane_cp2

0xdf5b,	// (0x00021e87) listscroll_menu_pane_ParamLimits

0xdf5b,	// (0x00021e87) listscroll_menu_pane

0xa9c1,	// (0x0001e8ed) popup_submenu_window_ParamLimits

0xa9c1,	// (0x0001e8ed) popup_submenu_window

0xdf67,	// (0x00021e93) find_popup_pane_g1

0xdf6f,	// (0x00021e9b) input_popup_find_pane_cp

0xdf40,	// (0x00021e6c) input_focus_pane_cp4_ParamLimits

0xdf40,	// (0x00021e6c) input_focus_pane_cp4

0xdf79,	// (0x00021ea5) input_popup_find_pane_t1_ParamLimits

0xdf79,	// (0x00021ea5) input_popup_find_pane_t1

0xc241,	// (0x0002016d) bg_popup_sub_pane_cp

0xdfa7,	// (0x00021ed3) listscroll_popup_sub_pane

0xdfaf,	// (0x00021edb) list_submenu_pane_ParamLimits

0xdfaf,	// (0x00021edb) list_submenu_pane

0xdfc0,	// (0x00021eec) scroll_pane_cp4

0xdfc8,	// (0x00021ef4) list_single_popup_submenu_pane_ParamLimits

0xdfc8,	// (0x00021ef4) list_single_popup_submenu_pane

0xdfdd,	// (0x00021f09) list_single_popup_submenu_pane_g1

0xdfe5,	// (0x00021f11) list_single_popup_submenu_pane_t1_ParamLimits

0xdfe5,	// (0x00021f11) list_single_popup_submenu_pane_t1

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp1_ParamLimits

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp1

0xa9ff,	// (0x0001e92b) tabs_2_active_pane_g1

0xaa07,	// (0x0001e933) tabs_2_active_pane_t1

0xc28f,	// (0x000201bb) bg_passive_tab_pane_cp1_ParamLimits

0xc28f,	// (0x000201bb) bg_passive_tab_pane_cp1

0xa9ff,	// (0x0001e92b) tabs_2_passive_pane_g1

0xaa07,	// (0x0001e933) tabs_2_passive_pane_t1

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp4

0xaa19,	// (0x0001e945) tabs_2_long_active_pane_t1

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp4

0xea26,	// (0x00022952) list_single_midp_graphic_pane_g4_ParamLimits

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp5

0xaa2c,	// (0x0001e958) tabs_3_long_active_pane_t1

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp5

0xea26,	// (0x00022952) list_single_midp_graphic_pane_g4

0xc29d,	// (0x000201c9) bg_popup_window_pane_cp13_ParamLimits

0xc29d,	// (0x000201c9) bg_popup_window_pane_cp13

0xe003,	// (0x00021f2f) listscroll_popup_fast_pane_ParamLimits

0xe003,	// (0x00021f2f) listscroll_popup_fast_pane

0xe012,	// (0x00021f3e) grid_popup_fast_pane_ParamLimits

0xe012,	// (0x00021f3e) grid_popup_fast_pane

0xe024,	// (0x00021f50) scroll_pane_cp9_ParamLimits

0xe024,	// (0x00021f50) scroll_pane_cp9

0x52a8,	// (0x000191d4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x52a8,	// (0x000191d4) list_single_graphic_hl_pane_t1_cp2

0xe048,	// (0x00021f74) input_focus_pane_cp20_ParamLimits

0xe048,	// (0x00021f74) input_focus_pane_cp20

0xe056,	// (0x00021f82) query_popup_data_pane_t1_ParamLimits

0xe056,	// (0x00021f82) query_popup_data_pane_t1

0xe069,	// (0x00021f95) query_popup_data_pane_t2_ParamLimits

0xe069,	// (0x00021f95) query_popup_data_pane_t2

0xe0af,	// (0x00021fdb) query_popup_data_pane_t3_ParamLimits

0xe0af,	// (0x00021fdb) query_popup_data_pane_t3

0xe0f0,	// (0x0002201c) query_popup_data_pane_t4_ParamLimits

0xe0f0,	// (0x0002201c) query_popup_data_pane_t4

0xe12c,	// (0x00022058) query_popup_data_pane_t5_ParamLimits

0xe12c,	// (0x00022058) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000235cd) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000235cd) query_popup_data_pane_t

0xdec0,	// (0x00021dec) bg_set_opt_pane_g1

0xdec8,	// (0x00021df4) bg_set_opt_pane_g2

0xded0,	// (0x00021dfc) bg_set_opt_pane_g3

0xded8,	// (0x00021e04) bg_set_opt_pane_g4

0xdee0,	// (0x00021e0c) bg_set_opt_pane_g5

0xdee8,	// (0x00021e14) bg_set_opt_pane_g6

0xdef0,	// (0x00021e1c) bg_set_opt_pane_g7

0xdef8,	// (0x00021e24) bg_set_opt_pane_g8

0xdf00,	// (0x00021e2c) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000235d8) bg_set_opt_pane_g

0xe5e9,	// (0x00022515) control_top_pane_stacon_ParamLimits

0xe5e9,	// (0x00022515) control_top_pane_stacon

0xe63c,	// (0x00022568) signal_pane_stacon_ParamLimits

0xe63c,	// (0x00022568) signal_pane_stacon

0x1159,	// (0x00015085) stacon_top_pane_g1_ParamLimits

0x1159,	// (0x00015085) stacon_top_pane_g1

0xe661,	// (0x0002258d) title_pane_stacon_ParamLimits

0xe661,	// (0x0002258d) title_pane_stacon

0xe68b,	// (0x000225b7) uni_indicator_pane_stacon_ParamLimits

0xe68b,	// (0x000225b7) uni_indicator_pane_stacon

0xe6a0,	// (0x000225cc) battery_pane_stacon_ParamLimits

0xe6a0,	// (0x000225cc) battery_pane_stacon

0xe6e4,	// (0x00022610) control_bottom_pane_stacon_ParamLimits

0xe6e4,	// (0x00022610) control_bottom_pane_stacon

0xe707,	// (0x00022633) navi_pane_stacon_ParamLimits

0xe707,	// (0x00022633) navi_pane_stacon

0x117b,	// (0x000150a7) stacon_bottom_pane_g1_ParamLimits

0x117b,	// (0x000150a7) stacon_bottom_pane_g1

0xe163,	// (0x0002208f) aid_levels_signal_lsc_ParamLimits

0xe163,	// (0x0002208f) aid_levels_signal_lsc

0xe17a,	// (0x000220a6) signal_pane_stacon_g1_ParamLimits

0xe17a,	// (0x000220a6) signal_pane_stacon_g1

0xe18e,	// (0x000220ba) signal_pane_stacon_g2_ParamLimits

0xe18e,	// (0x000220ba) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000235eb) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000235eb) signal_pane_stacon_g

0xe1d0,	// (0x000220fc) title_pane_stacon_t1_ParamLimits

0xe1d0,	// (0x000220fc) title_pane_stacon_t1

0xe1f5,	// (0x00022121) uni_indicator_pane_stacon_g1

0xe1ff,	// (0x0002212b) uni_indicator_pane_stacon_g2

0xe209,	// (0x00022135) uni_indicator_pane_stacon_g3

0xe213,	// (0x0002213f) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000235f7) uni_indicator_pane_stacon_g

0xe21d,	// (0x00022149) control_top_pane_stacon_g1

0xe225,	// (0x00022151) control_top_pane_stacon_t1_ParamLimits

0xe225,	// (0x00022151) control_top_pane_stacon_t1

0xe25c,	// (0x00022188) aid_levels_battery_lsc_ParamLimits

0xe25c,	// (0x00022188) aid_levels_battery_lsc

0xe274,	// (0x000221a0) battery_pane_stacon_g1_ParamLimits

0xe274,	// (0x000221a0) battery_pane_stacon_g1

0xe287,	// (0x000221b3) battery_pane_stacon_g2_ParamLimits

0xe287,	// (0x000221b3) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00023600) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00023600) battery_pane_stacon_g

0xe2c5,	// (0x000221f1) navi_icon_pane_stacon

0xe2d9,	// (0x00022205) navi_navi_pane_stacon

0xe2c5,	// (0x000221f1) navi_text_pane_stacon

0xe21d,	// (0x00022149) control_bottom_pane_stacon_g1

0xe2ef,	// (0x0002221b) control_bottom_pane_stacon_t1_ParamLimits

0xe2ef,	// (0x0002221b) control_bottom_pane_stacon_t1

0xaa3e,	// (0x0001e96a) grid_app_pane_ParamLimits

0xaa3e,	// (0x0001e96a) grid_app_pane

0xaa76,	// (0x0001e9a2) scroll_pane_cp15_ParamLimits

0xaa76,	// (0x0001e9a2) scroll_pane_cp15

0xaa8b,	// (0x0001e9b7) cell_app_pane_ParamLimits

0xaa8b,	// (0x0001e9b7) cell_app_pane

0xaad8,	// (0x0001ea04) cell_app_pane_g1_ParamLimits

0xaad8,	// (0x0001ea04) cell_app_pane_g1

0xe340,	// (0x0002226c) cell_app_pane_g2_ParamLimits

0xe340,	// (0x0002226c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00023605) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00023605) cell_app_pane_g

0xaafc,	// (0x0001ea28) cell_app_pane_t1_ParamLimits

0xaafc,	// (0x0001ea28) cell_app_pane_t1

0xe34c,	// (0x00022278) grid_highlight_pane_ParamLimits

0xe34c,	// (0x00022278) grid_highlight_pane

0xdec0,	// (0x00021dec) cell_highlight_pane_g1

0xdec8,	// (0x00021df4) cell_highlight_pane_g2

0xded0,	// (0x00021dfc) cell_highlight_pane_g3

0xded8,	// (0x00021e04) cell_highlight_pane_g4

0xdee0,	// (0x00021e0c) cell_highlight_pane_g5

0xdee8,	// (0x00021e14) cell_highlight_pane_g6

0xdef0,	// (0x00021e1c) cell_highlight_pane_g7

0xdef8,	// (0x00021e24) cell_highlight_pane_g8

0xdf00,	// (0x00021e2c) cell_highlight_pane_g9

0xc237,	// (0x00020163) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x000235b3) cell_highlight_pane_g

0xe367,	// (0x00022293) bg_scroll_pane

0xe386,	// (0x000222b2) scroll_handle_pane

0xe3d7,	// (0x00022303) scroll_bg_pane_g1

0xe3ec,	// (0x00022318) scroll_bg_pane_g2

0xe404,	// (0x00022330) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002360a) scroll_bg_pane_g

0xe419,	// (0x00022345) scroll_handle_focus_pane_ParamLimits

0xe419,	// (0x00022345) scroll_handle_focus_pane

0xe3d7,	// (0x00022303) scroll_handle_pane_g1

0xe426,	// (0x00022352) scroll_handle_pane_g2

0xe404,	// (0x00022330) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00023611) scroll_handle_pane_g

0xdf40,	// (0x00021e6c) bg_popup_sub_pane_cp21_ParamLimits

0xdf40,	// (0x00021e6c) bg_popup_sub_pane_cp21

0xe43a,	// (0x00022366) popup_fep_japan_predictive_window_t1_ParamLimits

0xe43a,	// (0x00022366) popup_fep_japan_predictive_window_t1

0xe451,	// (0x0002237d) popup_fep_japan_predictive_window_t2_ParamLimits

0xe451,	// (0x0002237d) popup_fep_japan_predictive_window_t2

0xe484,	// (0x000223b0) popup_fep_japan_predictive_window_t3_ParamLimits

0xe484,	// (0x000223b0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00023618) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00023618) popup_fep_japan_predictive_window_t

0xc241,	// (0x0002016d) bg_popup_sub_pane_cp23

0xe4bb,	// (0x000223e7) listscroll_japin_cand_pane

0xe4c3,	// (0x000223ef) popup_fep_japan_candidate_window_t1

0xe4d1,	// (0x000223fd) candidate_pane_ParamLimits

0xe4d1,	// (0x000223fd) candidate_pane

0xe4e3,	// (0x0002240f) scroll_pane_cp30

0xe4ed,	// (0x00022419) list_single_popup_jap_candidate_pane_ParamLimits

0xe4ed,	// (0x00022419) list_single_popup_jap_candidate_pane

0xc241,	// (0x0002016d) list_highlight_pane_cp30

0xe501,	// (0x0002242d) list_single_popup_jap_candidate_pane_t1

0xab13,	// (0x0001ea3f) level_1_signal

0xab25,	// (0x0001ea51) level_2_signal

0xab38,	// (0x0001ea64) level_3_signal

0xab4b,	// (0x0001ea77) level_4_signal

0xab5e,	// (0x0001ea8a) level_5_signal

0xab71,	// (0x0001ea9d) level_6_signal

0xab84,	// (0x0001eab0) level_7_signal

0xab13,	// (0x0001ea3f) level_1_battery

0xab25,	// (0x0001ea51) level_2_battery

0xab38,	// (0x0001ea64) level_3_battery

0xab4b,	// (0x0001ea77) level_4_battery

0xab5e,	// (0x0001ea8a) level_5_battery

0xab71,	// (0x0001ea9d) level_6_battery

0xab84,	// (0x0001eab0) level_7_battery

0x0e2f,	// (0x00014d5b) list_menu_pane_ParamLimits

0x0e2f,	// (0x00014d5b) list_menu_pane

0x0e45,	// (0x00014d71) scroll_pane_cp25_ParamLimits

0x0e45,	// (0x00014d71) scroll_pane_cp25

0x0e5e,	// (0x00014d8a) list_double2_graphic_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double2_graphic_pane_cp2

0x0e5e,	// (0x00014d8a) list_double2_large_graphic_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double2_large_graphic_pane_cp2

0x0e5e,	// (0x00014d8a) list_double2_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double2_pane_cp2

0x0e5e,	// (0x00014d8a) list_double_graphic_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double_graphic_pane_cp2

0x0e5e,	// (0x00014d8a) list_double_large_graphic_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double_large_graphic_pane_cp2

0x0e5e,	// (0x00014d8a) list_double_number_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double_number_pane_cp2

0x0e5e,	// (0x00014d8a) list_double_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double_pane_cp2

0xab97,	// (0x0001eac3) list_single_2graphic_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_2graphic_pane_cp2

0xab97,	// (0x0001eac3) list_single_graphic_heading_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_graphic_heading_pane_cp2

0xab97,	// (0x0001eac3) list_single_graphic_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_graphic_pane_cp2

0xab97,	// (0x0001eac3) list_single_heading_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_heading_pane_cp2

0x0ea1,	// (0x00014dcd) list_single_large_graphic_pane_cp2_ParamLimits

0x0ea1,	// (0x00014dcd) list_single_large_graphic_pane_cp2

0xab97,	// (0x0001eac3) list_single_number_heading_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_number_heading_pane_cp2

0xab97,	// (0x0001eac3) list_single_number_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_number_pane_cp2

0xab97,	// (0x0001eac3) list_single_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_pane_cp2

0x0f0f,	// (0x00014e3b) bg_popup_sub_pane_cp22

0xe599,	// (0x000224c5) popup_side_volume_key_window_g1

0xe5c3,	// (0x000224ef) popup_side_volume_key_window_t1

0xe5e1,	// (0x0002250d) volume_small_pane_cp1

0xc28f,	// (0x000201bb) bg_popup_sub_pane_cp24_ParamLimits

0xc28f,	// (0x000201bb) bg_popup_sub_pane_cp24

0x0f25,	// (0x00014e51) fep_china_uni_candidate_pane_ParamLimits

0x0f25,	// (0x00014e51) fep_china_uni_candidate_pane

0x0f39,	// (0x00014e65) fep_china_uni_entry_pane

0x0f49,	// (0x00014e75) popup_fep_china_uni_window_g1

0x0f65,	// (0x00014e91) fep_china_uni_entry_pane_g1

0x0f6f,	// (0x00014e9b) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00023649) fep_china_uni_entry_pane_g

0x0f79,	// (0x00014ea5) fep_entry_item_pane

0x0f83,	// (0x00014eaf) fep_candidate_item_pane

0x0f8b,	// (0x00014eb7) fep_china_uni_candidate_pane_g1

0x0f95,	// (0x00014ec1) fep_china_uni_candidate_pane_g2

0x0f9d,	// (0x00014ec9) fep_china_uni_candidate_pane_g3

0x0fa5,	// (0x00014ed1) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002364e) fep_china_uni_candidate_pane_g

0xc237,	// (0x00020163) fep_entry_item_pane_g1

0x0faf,	// (0x00014edb) fep_entry_item_pane_t1_ParamLimits

0x0faf,	// (0x00014edb) fep_entry_item_pane_t1

0x0fc5,	// (0x00014ef1) fep_candidate_item_pane_t1_ParamLimits

0x0fc5,	// (0x00014ef1) fep_candidate_item_pane_t1

0x0fda,	// (0x00014f06) fep_candidate_item_pane_t2_ParamLimits

0x0fda,	// (0x00014f06) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00023657) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00023657) fep_candidate_item_pane_t

0xc29d,	// (0x000201c9) list_highlight_pane_cp31_ParamLimits

0xc29d,	// (0x000201c9) list_highlight_pane_cp31

0x0fec,	// (0x00014f18) level_1_signal_lsc

0x0ff5,	// (0x00014f21) level_2_signal_lsc

0x0ffe,	// (0x00014f2a) level_3_signal_lsc

0x1007,	// (0x00014f33) level_4_signal_lsc

0x1010,	// (0x00014f3c) level_5_signal_lsc

0x1019,	// (0x00014f45) level_6_signal_lsc

0x1022,	// (0x00014f4e) level_7_signal_lsc

0x1022,	// (0x00014f4e) level_1_battery_lsc

0x102b,	// (0x00014f57) level_2_battery_lsc

0x1034,	// (0x00014f60) level_3_battery_lsc

0x103d,	// (0x00014f69) level_4_battery_lsc

0x1046,	// (0x00014f72) level_5_battery_lsc

0x104f,	// (0x00014f7b) level_6_battery_lsc

0x0fec,	// (0x00014f18) level_7_battery_lsc

0x1058,	// (0x00014f84) scroll_handle_focus_pane_g1

0x1061,	// (0x00014f8d) scroll_handle_focus_pane_g2

0x106a,	// (0x00014f96) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002365c) scroll_handle_focus_pane_g

0xac26,	// (0x0001eb52) list_single_2graphic_pane_g1_ParamLimits

0xac26,	// (0x0001eb52) list_single_2graphic_pane_g1

0xa488,	// (0x0001e3b4) list_single_2graphic_pane_g2_ParamLimits

0xa488,	// (0x0001e3b4) list_single_2graphic_pane_g2

0x1cd8,	// (0x00015c04) list_single_2graphic_pane_g3_ParamLimits

0x1cd8,	// (0x00015c04) list_single_2graphic_pane_g3

0xac32,	// (0x0001eb5e) list_single_2graphic_pane_g4_ParamLimits

0xac32,	// (0x0001eb5e) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00023663) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00023663) list_single_2graphic_pane_g

0xac43,	// (0x0001eb6f) list_single_2graphic_pane_t1_ParamLimits

0xac43,	// (0x0001eb6f) list_single_2graphic_pane_t1

0xac71,	// (0x0001eb9d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xac71,	// (0x0001eb9d) list_double2_graphic_large_graphic_pane_g1

0xa4f3,	// (0x0001e41f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa4f3,	// (0x0001e41f) list_double2_graphic_large_graphic_pane_g2

0xa504,	// (0x0001e430) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa504,	// (0x0001e430) list_double2_graphic_large_graphic_pane_g3

0xac83,	// (0x0001ebaf) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xac83,	// (0x0001ebaf) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002366c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002366c) list_double2_graphic_large_graphic_pane_g

0xac8f,	// (0x0001ebbb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xac8f,	// (0x0001ebbb) list_double2_graphic_large_graphic_pane_t1

0xaca5,	// (0x0001ebd1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaca5,	// (0x0001ebd1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00023675) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00023675) list_double2_graphic_large_graphic_pane_t

0x123b,	// (0x00015167) popup_fast_swap_window_ParamLimits

0x123b,	// (0x00015167) popup_fast_swap_window

0x1259,	// (0x00015185) popup_side_volume_key_window

0x1277,	// (0x000151a3) stacon_top_pane

0x1281,	// (0x000151ad) status_pane_ParamLimits

0x1281,	// (0x000151ad) status_pane

0xacff,	// (0x0001ec2b) status_small_pane

0xc241,	// (0x0002016d) control_pane

0xc241,	// (0x0002016d) stacon_bottom_pane

0xc8fb,	// (0x00020827) scroll_pane_cp121

0xc8f2,	// (0x0002081e) set_content_pane

0xacb7,	// (0x0001ebe3) bg_active_tab_pane_g1_cp1

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp1

0xacc0,	// (0x0001ebec) bg_active_tab_pane_g3_cp1

0xacb7,	// (0x0001ebe3) bg_passive_tab_pane_g1_cp1

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp1

0xacc0,	// (0x0001ebec) bg_passive_tab_pane_g3_cp1

0xacc9,	// (0x0001ebf5) bg_active_tab_pane_g1_cp2

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp2

0xacd2,	// (0x0001ebfe) bg_active_tab_pane_g3_cp2

0xacc9,	// (0x0001ebf5) bg_passive_tab_pane_g1_cp2

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp2

0xacd2,	// (0x0001ebfe) bg_passive_tab_pane_g3_cp2

0xacdb,	// (0x0001ec07) bg_active_tab_pane_g1_cp3

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp3

0xace4,	// (0x0001ec10) bg_active_tab_pane_g3_cp3

0xacdb,	// (0x0001ec07) bg_passive_tab_pane_g1_cp3

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp3

0xace4,	// (0x0001ec10) bg_passive_tab_pane_g3_cp3

0xaced,	// (0x0001ec19) bg_active_tab_pane_g1_cp4

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp4

0xacf6,	// (0x0001ec22) bg_active_tab_pane_g3_cp4

0xaced,	// (0x0001ec19) bg_passive_tab_pane_g1_cp4

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp4

0xacf6,	// (0x0001ec22) bg_passive_tab_pane_g3_cp4

0x1197,	// (0x000150c3) bg_active_tab_pane_g1_cp5

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp5

0x11a0,	// (0x000150cc) bg_active_tab_pane_g3_cp5

0x1197,	// (0x000150c3) bg_passive_tab_pane_g1_cp5

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp5

0x11a0,	// (0x000150cc) bg_passive_tab_pane_g3_cp5

0x11a9,	// (0x000150d5) list_set_graphic_pane_ParamLimits

0x11a9,	// (0x000150d5) list_set_graphic_pane

0xc241,	// (0x0002016d) bg_set_opt_pane_cp4

0x11bc,	// (0x000150e8) list_set_graphic_pane_g1_ParamLimits

0x11bc,	// (0x000150e8) list_set_graphic_pane_g1

0x11c8,	// (0x000150f4) list_set_graphic_pane_g2_ParamLimits

0x11c8,	// (0x000150f4) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002367a) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002367a) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00023a04) volume_small_pane_cp_g

0x11ec,	// (0x00015118) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x11ec,	// (0x00015118) list_double2_large_graphic_pane_g1_cp2

0x11fa,	// (0x00015126) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x11fa,	// (0x00015126) list_double2_large_graphic_pane_g2_cp2

0x120b,	// (0x00015137) list_double2_large_graphic_pane_g3_cp2

0x1213,	// (0x0001513f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1213,	// (0x0001513f) list_double2_large_graphic_pane_t1_cp2

0x1229,	// (0x00015155) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1229,	// (0x00015155) list_double2_large_graphic_pane_t2_cp2

0x2f0d,	// (0x00016e39) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2f0d,	// (0x00016e39) list_double_large_graphic_pane_g1_cp2

0x2f20,	// (0x00016e4c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2f20,	// (0x00016e4c) list_double_large_graphic_pane_g2_cp2

0x13aa,	// (0x000152d6) list_double_large_graphic_pane_g3_cp2

0x2f31,	// (0x00016e5d) list_double_large_graphic_pane_g4_cp

0x2f39,	// (0x00016e65) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2f39,	// (0x00016e65) list_double_large_graphic_pane_t1_cp2

0x2f50,	// (0x00016e7c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2f50,	// (0x00016e7c) list_double_large_graphic_pane_t2_cp2

0x129a,	// (0x000151c6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x129a,	// (0x000151c6) list_double2_graphic_pane_g1_cp2

0x12a8,	// (0x000151d4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x12a8,	// (0x000151d4) list_double2_graphic_pane_g2_cp2

0x12b9,	// (0x000151e5) list_double2_graphic_pane_g3_cp2

0x12c3,	// (0x000151ef) list_double2_graphic_pane_t1_cp2_ParamLimits

0x12c3,	// (0x000151ef) list_double2_graphic_pane_t1_cp2

0x12d9,	// (0x00015205) list_double2_graphic_pane_t2_cp2_ParamLimits

0x12d9,	// (0x00015205) list_double2_graphic_pane_t2_cp2

0x12eb,	// (0x00015217) list_single_number_heading_pane_g1_cp2_ParamLimits

0x12eb,	// (0x00015217) list_single_number_heading_pane_g1_cp2

0x12f7,	// (0x00015223) list_single_number_heading_pane_g2_cp2

0x12ff,	// (0x0001522b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x12ff,	// (0x0001522b) list_single_number_heading_pane_t1_cp2

0x1315,	// (0x00015241) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1315,	// (0x00015241) list_single_number_heading_pane_t2_cp2

0x1329,	// (0x00015255) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1329,	// (0x00015255) list_single_number_heading_pane_t3_cp2

0x12eb,	// (0x00015217) list_single_heading_pane_g1_cp2_ParamLimits

0x12eb,	// (0x00015217) list_single_heading_pane_g1_cp2

0x12f7,	// (0x00015223) list_single_heading_pane_g2_cp2

0x12ff,	// (0x0001522b) list_single_heading_pane_t1_cp2_ParamLimits

0x12ff,	// (0x0001522b) list_single_heading_pane_t1_cp2

0x2d07,	// (0x00016c33) list_single_heading_pane_t2_cp2_ParamLimits

0x2d07,	// (0x00016c33) list_single_heading_pane_t2_cp2

0x2c4f,	// (0x00016b7b) list_double_graphic_pane_g1_cp2_ParamLimits

0x2c4f,	// (0x00016b7b) list_double_graphic_pane_g1_cp2

0x2c5b,	// (0x00016b87) list_double_graphic_pane_g2_cp2_ParamLimits

0x2c5b,	// (0x00016b87) list_double_graphic_pane_g2_cp2

0x2c6a,	// (0x00016b96) list_double_graphic_pane_g3_cp2

0x2c72,	// (0x00016b9e) list_double_graphic_pane_t1_cp2_ParamLimits

0x2c72,	// (0x00016b9e) list_double_graphic_pane_t1_cp2

0x2c88,	// (0x00016bb4) list_double_graphic_pane_t2_cp2_ParamLimits

0x2c88,	// (0x00016bb4) list_double_graphic_pane_t2_cp2

0x139e,	// (0x000152ca) list_double_number_pane_g1_cp2_ParamLimits

0x139e,	// (0x000152ca) list_double_number_pane_g1_cp2

0x13aa,	// (0x000152d6) list_double_number_pane_g2_cp2

0x2c13,	// (0x00016b3f) list_double_number_pane_t1_cp2_ParamLimits

0x2c13,	// (0x00016b3f) list_double_number_pane_t1_cp2

0x2c27,	// (0x00016b53) list_double_number_pane_t2_cp2_ParamLimits

0x2c27,	// (0x00016b53) list_double_number_pane_t2_cp2

0x2c3d,	// (0x00016b69) list_double_number_pane_t3_cp2_ParamLimits

0x2c3d,	// (0x00016b69) list_double_number_pane_t3_cp2

0x2afc,	// (0x00016a28) list_single_graphic_pane_g1_cp2_ParamLimits

0x2afc,	// (0x00016a28) list_single_graphic_pane_g1_cp2

0xe72a,	// (0x00022656) list_single_graphic_pane_g2_cp2_ParamLimits

0xe72a,	// (0x00022656) list_single_graphic_pane_g2_cp2

0x1404,	// (0x00015330) list_single_graphic_pane_g3_cp2

0x2ad2,	// (0x000169fe) list_single_graphic_pane_t1_cp2_ParamLimits

0x2ad2,	// (0x000169fe) list_single_graphic_pane_t1_cp2

0xe72a,	// (0x00022656) list_single_number_pane_g1_cp2_ParamLimits

0xe72a,	// (0x00022656) list_single_number_pane_g1_cp2

0x1404,	// (0x00015330) list_single_number_pane_g2_cp2

0x2ad2,	// (0x000169fe) list_single_number_pane_t1_cp2_ParamLimits

0x2ad2,	// (0x000169fe) list_single_number_pane_t1_cp2

0x2ae8,	// (0x00016a14) list_single_number_pane_t2_cp2_ParamLimits

0x2ae8,	// (0x00016a14) list_single_number_pane_t2_cp2

0x11fa,	// (0x00015126) list_double2_pane_g1_cp2_ParamLimits

0x11fa,	// (0x00015126) list_double2_pane_g1_cp2

0x120b,	// (0x00015137) list_double2_pane_g2_cp2

0x1376,	// (0x000152a2) list_double2_pane_t1_cp2_ParamLimits

0x1376,	// (0x000152a2) list_double2_pane_t1_cp2

0x138c,	// (0x000152b8) list_double2_pane_t2_cp2_ParamLimits

0x138c,	// (0x000152b8) list_double2_pane_t2_cp2

0x139e,	// (0x000152ca) list_double_pane_g1_cp2_ParamLimits

0x139e,	// (0x000152ca) list_double_pane_g1_cp2

0x13aa,	// (0x000152d6) list_double_pane_g2_cp2

0x13b2,	// (0x000152de) list_double_pane_t1_cp2_ParamLimits

0x13b2,	// (0x000152de) list_double_pane_t1_cp2

0x13c8,	// (0x000152f4) list_double_pane_t2_cp2_ParamLimits

0x13c8,	// (0x000152f4) list_double_pane_t2_cp2

0x13f4,	// (0x00015320) list_single_pane_cp2_g3

0xe72a,	// (0x00022656) list_single_pane_g1_cp2_ParamLimits

0xe72a,	// (0x00022656) list_single_pane_g1_cp2

0x1404,	// (0x00015330) list_single_pane_g2_cp2

0x140c,	// (0x00015338) list_single_pane_t1_cp2_ParamLimits

0x140c,	// (0x00015338) list_single_pane_t1_cp2

0x1424,	// (0x00015350) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1424,	// (0x00015350) list_single_large_graphic_pane_g1_cp2

0x1432,	// (0x0001535e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1432,	// (0x0001535e) list_single_large_graphic_pane_g2_cp2

0x143e,	// (0x0001536a) list_single_large_graphic_pane_g3_cp2

0x1446,	// (0x00015372) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1446,	// (0x00015372) list_single_large_graphic_pane_g4_cp1

0x1460,	// (0x0001538c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1460,	// (0x0001538c) list_single_large_graphic_pane_t1_cp2

0x2a9c,	// (0x000169c8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2a9c,	// (0x000169c8) list_single_graphic_heading_pane_g1_cp2

0x2a69,	// (0x00016995) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2a69,	// (0x00016995) list_single_graphic_heading_pane_g4_cp2

0x1404,	// (0x00015330) list_single_graphic_heading_pane_g5_cp2

0x2aa8,	// (0x000169d4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2aa8,	// (0x000169d4) list_single_graphic_heading_pane_t1_cp2

0x2abe,	// (0x000169ea) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2abe,	// (0x000169ea) list_single_graphic_heading_pane_t2_cp2

0x2a5d,	// (0x00016989) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2a5d,	// (0x00016989) list_single_2graphic_pane_g1_cp2

0x2a69,	// (0x00016995) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2a69,	// (0x00016995) list_single_2graphic_pane_g2_cp2

0x1404,	// (0x00015330) list_single_2graphic_pane_g3_cp2

0x2a7a,	// (0x000169a6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2a7a,	// (0x000169a6) list_single_2graphic_pane_g4_cp2

0x2a86,	// (0x000169b2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2a86,	// (0x000169b2) list_single_2graphic_pane_t1_cp2

0xc237,	// (0x00020163) list_highlight_pane_g10_cp1

0x2635,	// (0x00016561) list_highlight_pane_g1_cp1

0x263d,	// (0x00016569) list_highlight_pane_g2_cp1

0x2645,	// (0x00016571) list_highlight_pane_g3_cp1

0x264d,	// (0x00016579) list_highlight_pane_g4_cp1

0x2655,	// (0x00016581) list_highlight_pane_g5_cp1

0x265d,	// (0x00016589) list_highlight_pane_g6_cp1

0x2665,	// (0x00016591) list_highlight_pane_g7_cp1

0x266d,	// (0x00016599) list_highlight_pane_g8_cp1

0x2675,	// (0x000165a1) list_highlight_pane_g9_cp1

0xb363,	// (0x0001f28f) form_field_slider_pane_t3

0xb371,	// (0x0001f29d) form_field_slider_pane_t4

0x2571,	// (0x0001649d) slider_form_pane_ParamLimits

0x2571,	// (0x0001649d) slider_form_pane

0xc241,	// (0x0002016d) control_abbreviations

0xc241,	// (0x0002016d) control_conventions

0xc241,	// (0x0002016d) control_definitions

0xc241,	// (0x0002016d) format_table_attribute

0x2d5d,	// (0x00016c89) bg_popup_preview_window_pane_g9

0xc241,	// (0x0002016d) format_table_data2

0xc241,	// (0x0002016d) format_table_data3

0xc241,	// (0x0002016d) format_table_data_example

0x0008,

0xc241,	// (0x0002016d) intro_purpose

0xf8e5,	// (0x00023811) bg_popup_preview_window_pane_g

0xc241,	// (0x0002016d) texts_category

0xc241,	// (0x0002016d) texts_graphics

0x1476,	// (0x000153a2) text_digital

0x1485,	// (0x000153b1) text_primary

0x1494,	// (0x000153c0) text_primary_small

0x14a3,	// (0x000153cf) text_secondary

0x14b2,	// (0x000153de) text_title

0x357c,	// (0x000174a8) bg_passive_tab_pane_g1_cp3_srt

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp3_srt

0x3585,	// (0x000174b1) bg_passive_tab_pane_g3_cp3_srt

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp3_srt_ParamLimits

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp3_srt

0x358e,	// (0x000174ba) tabs_4_active_pane_srt_g1

0xb6ce,	// (0x0001f5fa) tabs_4_active_pane_srt_t1_ParamLimits

0xb6ce,	// (0x0001f5fa) tabs_4_active_pane_srt_t1

0x357c,	// (0x000174a8) bg_active_tab_pane_g1_cp3_copy1

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp3_copy1

0x3585,	// (0x000174b1) bg_active_tab_pane_g3_cp3_copy1

0xc29d,	// (0x000201c9) tabs_2_long_active_pane_srt_ParamLimits

0xc29d,	// (0x000201c9) tabs_2_long_active_pane_srt

0xc29d,	// (0x000201c9) tabs_2_long_passive_pane_srt_ParamLimits

0xc29d,	// (0x000201c9) tabs_2_long_passive_pane_srt

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp4_srt

0x31b4,	// (0x000170e0) bg_passive_tab_pane_g1_cp4_srt

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp4_srt

0x31bd,	// (0x000170e9) bg_passive_tab_pane_g3_cp4_srt

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp4_srt_ParamLimits

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp4_srt

0xb543,	// (0x0001f46f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb543,	// (0x0001f46f) tabs_2_long_active_pane_srt_t1

0x31b4,	// (0x000170e0) bg_active_tab_pane_g1_cp4_srt

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp4_srt

0x31bd,	// (0x000170e9) bg_active_tab_pane_g3_cp4_srt

0xc28f,	// (0x000201bb) tabs_3_long_active_pane_srt_ParamLimits

0xc28f,	// (0x000201bb) tabs_3_long_active_pane_srt

0xc28f,	// (0x000201bb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc28f,	// (0x000201bb) tabs_3_long_passive_pane_cp_srt

0xc28f,	// (0x000201bb) tabs_3_long_passive_pane_srt_ParamLimits

0xc28f,	// (0x000201bb) tabs_3_long_passive_pane_srt

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp5_srt

0x1197,	// (0x000150c3) bg_passive_tab_pane_g1_cp5_srt

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp5_srt

0x11a0,	// (0x000150cc) bg_passive_tab_pane_g3_cp5_srt

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp5_srt_ParamLimits

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp5_srt

0xb52d,	// (0x0001f459) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb52d,	// (0x0001f459) tabs_3_long_active_pane_srt_t1

0x1197,	// (0x000150c3) bg_active_tab_pane_g1_cp5_srt

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp5_srt

0x11a0,	// (0x000150cc) bg_active_tab_pane_g3_cp5_srt

0x3194,	// (0x000170c0) navi_text_pane_srt_t1

0x318c,	// (0x000170b8) navi_icon_pane_srt_g1

0x168a,	// (0x000155b6) midp_editing_number_pane_srt

0x14c1,	// (0x000153ed) midp_ticker_pane_srt

0x1692,	// (0x000155be) midp_ticker_pane_srt_g1

0x169a,	// (0x000155c6) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00023699) midp_ticker_pane_srt_g

0x16a2,	// (0x000155ce) midp_ticker_pane_srt_t1

0x317d,	// (0x000170a9) midp_editing_number_pane_t1_copy1

0xad0a,	// (0x0001ec36) listscroll_midp_pane

0xad0a,	// (0x0001ec36) midp_form_pane

0x1538,	// (0x00015464) midp_info_popup_window_ParamLimits

0x1538,	// (0x00015464) midp_info_popup_window

0xdf40,	// (0x00021e6c) bg_popup_sub_pane_cp50_ParamLimits

0xdf40,	// (0x00021e6c) bg_popup_sub_pane_cp50

0x225f,	// (0x0001618b) listscroll_midp_info_pane_ParamLimits

0x225f,	// (0x0001618b) listscroll_midp_info_pane

0x223f,	// (0x0001616b) listscroll_form_midp_pane_ParamLimits

0x223f,	// (0x0001616b) listscroll_form_midp_pane

0x224b,	// (0x00016177) scroll_bar_cp050

0x223f,	// (0x0001616b) list_midp_pane

0x430e,	// (0x0001823a) signal_pane_g2_cp

0x2159,	// (0x00016085) listscroll_midp_info_pane_t1_ParamLimits

0x2159,	// (0x00016085) listscroll_midp_info_pane_t1

0x2171,	// (0x0001609d) listscroll_midp_info_pane_t2_ParamLimits

0x2171,	// (0x0001609d) listscroll_midp_info_pane_t2

0x21af,	// (0x000160db) listscroll_midp_info_pane_t3_ParamLimits

0x21af,	// (0x000160db) listscroll_midp_info_pane_t3

0x21e9,	// (0x00016115) listscroll_midp_info_pane_t4_ParamLimits

0x21e9,	// (0x00016115) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0002374c) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0002374c) listscroll_midp_info_pane_t

0xdfc0,	// (0x00021eec) scroll_pane_cp21

0x20f3,	// (0x0001601f) form_midp_field_choice_group_pane

0x20fc,	// (0x00016028) form_midp_field_text_pane

0x213f,	// (0x0001606b) form_midp_field_time_pane

0x2147,	// (0x00016073) form_midp_gauge_slider_pane

0x2150,	// (0x0001607c) form_midp_gauge_wait_pane

0xc241,	// (0x0002016d) form_midp_image_pane

0xb346,	// (0x0001f272) list_single_midp_pane_ParamLimits

0xb346,	// (0x0001f272) list_single_midp_pane

0xb31e,	// (0x0001f24a) form_midp_field_text_pane_t1

0x1e7a,	// (0x00015da6) input_focus_pane_cp050

0x20c2,	// (0x00015fee) list_midp_form_text_pane

0x2066,	// (0x00015f92) form_midp_field_choice_group_pane_t1

0x2074,	// (0x00015fa0) input_focus_pane_cp051

0x2088,	// (0x00015fb4) list_midp_choice_pane

0xc241,	// (0x0002016d) status_idle_pane

0x204a,	// (0x00015f76) form_midp_field_time_pane_t1

0xc237,	// (0x00020163) wait_anim_pane_g2_copy1

0x2058,	// (0x00015f84) form_midp_field_time_pane_t2

0x0001,

0x15e8,	// (0x00015514) aid_navinavi_width_2_pane

0xf81b,	// (0x00023747) form_midp_field_time_pane_t

0xc241,	// (0x0002016d) input_focus_pane_cp052

0xc241,	// (0x0002016d) bg_input_focus_pane_cp040

0x200a,	// (0x00015f36) form_midp_gauge_slider_pane_t1

0x2018,	// (0x00015f44) form_midp_gauge_slider_pane_t2

0xb302,	// (0x0001f22e) form_midp_gauge_slider_pane_t3

0xb310,	// (0x0001f23c) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0002373e) form_midp_gauge_slider_pane_t

0x2042,	// (0x00015f6e) form_midp_slider_pane

0xc29d,	// (0x000201c9) bg_input_focus_pane_cp041_ParamLimits

0xc29d,	// (0x000201c9) bg_input_focus_pane_cp041

0x1fd7,	// (0x00015f03) form_midp_gauge_wait_pane_t1_ParamLimits

0x1fd7,	// (0x00015f03) form_midp_gauge_wait_pane_t1

0x1fe9,	// (0x00015f15) form_midp_gauge_wait_pane_t2_ParamLimits

0x1fe9,	// (0x00015f15) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00023739) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00023739) form_midp_gauge_wait_pane_t

0x1ffb,	// (0x00015f27) form_midp_wait_pane_ParamLimits

0x1ffb,	// (0x00015f27) form_midp_wait_pane

0x1f9f,	// (0x00015ecb) form_midp_image_pane_g1

0x1fa8,	// (0x00015ed4) form_midp_image_pane_t1

0x1fb7,	// (0x00015ee3) form_midp_image_pane_t2

0x1fc6,	// (0x00015ef2) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x00023732) form_midp_image_pane_t

0x1f87,	// (0x00015eb3) list_single_midp_pane_g1

0x1f90,	// (0x00015ebc) list_single_midp_pane_t1

0xb2eb,	// (0x0001f217) list_midp_form_item_pane_ParamLimits

0xb2eb,	// (0x0001f217) list_midp_form_item_pane

0x1590,	// (0x000154bc) list_midp_form_item_pane_t1

0x159f,	// (0x000154cb) midp_ticker_pane_g1

0x15ab,	// (0x000154d7) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002367f) midp_ticker_pane_g

0xadae,	// (0x0001ecda) midp_ticker_pane_t1

0xb626,	// (0x0001f552) midp_editing_number_pane_t1

0x33fd,	// (0x00017329) midp_editing_number_pane

0x340c,	// (0x00017338) midp_ticker_pane

0x3145,	// (0x00017071) ai_message_heading_pane

0xc241,	// (0x0002016d) bg_popup_window_pane_cp14

0x314d,	// (0x00017079) listscroll_ai_message_pane

0x30cb,	// (0x00016ff7) ai_message_heading_pane_g1_ParamLimits

0x30cb,	// (0x00016ff7) ai_message_heading_pane_g1

0x30d7,	// (0x00017003) ai_message_heading_pane_g2_ParamLimits

0x30d7,	// (0x00017003) ai_message_heading_pane_g2

0x30e5,	// (0x00017011) ai_message_heading_pane_g3_ParamLimits

0x30e5,	// (0x00017011) ai_message_heading_pane_g3

0x30f1,	// (0x0001701d) ai_message_heading_pane_g4_ParamLimits

0x30f1,	// (0x0001701d) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x00023873) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x00023873) ai_message_heading_pane_g

0x30fd,	// (0x00017029) ai_message_heading_pane_t1_ParamLimits

0x30fd,	// (0x00017029) ai_message_heading_pane_t1

0x3117,	// (0x00017043) ai_message_heading_pane_t2_ParamLimits

0x3117,	// (0x00017043) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0002387c) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0002387c) ai_message_heading_pane_t

0x312b,	// (0x00017057) bg_popup_heading_pane_cp1_ParamLimits

0x312b,	// (0x00017057) bg_popup_heading_pane_cp1

0x30b9,	// (0x00016fe5) list_ai_message_pane_ParamLimits

0x30b9,	// (0x00016fe5) list_ai_message_pane

0xdfc0,	// (0x00021eec) scroll_pane_cp10

0x3055,	// (0x00016f81) list_ai_message_pane_g1

0x305d,	// (0x00016f89) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x00023850) list_ai_message_pane_g

0x3065,	// (0x00016f91) list_ai_message_pane_t1_ParamLimits

0x3065,	// (0x00016f91) list_ai_message_pane_t1

0x307a,	// (0x00016fa6) list_ai_message_pane_t2_ParamLimits

0x307a,	// (0x00016fa6) list_ai_message_pane_t2

0x308f,	// (0x00016fbb) list_ai_message_pane_t3_ParamLimits

0x308f,	// (0x00016fbb) list_ai_message_pane_t3

0x30a4,	// (0x00016fd0) list_ai_message_pane_t4_ParamLimits

0x30a4,	// (0x00016fd0) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x00023855) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x00023855) list_ai_message_pane_t

0xb513,	// (0x0001f43f) cell_ai_soft_ind_pane_ParamLimits

0xb513,	// (0x0001f43f) cell_ai_soft_ind_pane

0x15c9,	// (0x000154f5) cell_ai_soft_ind_pane_g1_ParamLimits

0x15c9,	// (0x000154f5) cell_ai_soft_ind_pane_g1

0xc241,	// (0x0002016d) grid_highlight_cp1

0x15d6,	// (0x00015502) text_secondary_cp56_ParamLimits

0x15d6,	// (0x00015502) text_secondary_cp56

0x3013,	// (0x00016f3f) example_general_pane_ParamLimits

0x3013,	// (0x00016f3f) example_general_pane

0x301f,	// (0x00016f4b) example_parent_pane_g1_ParamLimits

0x301f,	// (0x00016f4b) example_parent_pane_g1

0x302b,	// (0x00016f57) example_parent_pane_t1_ParamLimits

0x302b,	// (0x00016f57) example_parent_pane_t1

0x9587,	// (0x0001d4b3) popup_preview_text_window_ParamLimits

0x9587,	// (0x0001d4b3) popup_preview_text_window

0x13fc,	// (0x00015328) list_single_pane_cp2_g4

0xc4b8,	// (0x000203e4) bg_popup_preview_window_pane_ParamLimits

0xc4b8,	// (0x000203e4) bg_popup_preview_window_pane

0x2d67,	// (0x00016c93) popup_preview_text_window_t1_ParamLimits

0x2d67,	// (0x00016c93) popup_preview_text_window_t1

0x2d85,	// (0x00016cb1) popup_preview_text_window_t2_ParamLimits

0x2d85,	// (0x00016cb1) popup_preview_text_window_t2

0x2dce,	// (0x00016cfa) popup_preview_text_window_t3_ParamLimits

0x2dce,	// (0x00016cfa) popup_preview_text_window_t3

0x2e13,	// (0x00016d3f) popup_preview_text_window_t4_ParamLimits

0x2e13,	// (0x00016d3f) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00023824) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00023824) popup_preview_text_window_t

0x2e91,	// (0x00016dbd) scroll_pane_cp11

0x1d56,	// (0x00015c82) bg_popup_preview_window_pane_g1

0x2d1b,	// (0x00016c47) bg_popup_preview_window_pane_g2

0x2d25,	// (0x00016c51) bg_popup_preview_window_pane_g3

0x2d2f,	// (0x00016c5b) bg_popup_preview_window_pane_g4

0x2d39,	// (0x00016c65) bg_popup_preview_window_pane_g5

0x2d43,	// (0x00016c6f) bg_popup_preview_window_pane_g6

0x2d4b,	// (0x00016c77) bg_popup_preview_window_pane_g7

0x2d53,	// (0x00016c7f) bg_popup_preview_window_pane_g8

0xdbe3,	// (0x00021b0f) aid_popup_width_pane

0x94f7,	// (0x0001d423) popup_midp_note_alarm_window_ParamLimits

0x94f7,	// (0x0001d423) popup_midp_note_alarm_window

0xc963,	// (0x0002088f) data_form_pane_ParamLimits

0xa8a6,	// (0x0001e7d2) form_field_data_pane_g1

0xa8b0,	// (0x0001e7dc) form_field_data_pane_t1_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_ParamLimits

0xc97d,	// (0x000208a9) data_form_wide_pane_ParamLimits

0xc989,	// (0x000208b5) form_field_data_wide_pane_g1

0xde4b,	// (0x00021d77) form_field_data_wide_pane_t1_ParamLimits

0xc670,	// (0x0002059c) input_focus_pane_cp6_ParamLimits

0xa9f1,	// (0x0001e91d) input_popup_find_pane_g1_ParamLimits

0xa9f1,	// (0x0001e91d) input_popup_find_pane_g1

0xe298,	// (0x000221c4) aid_navi_side_left_pane

0xe2ad,	// (0x000221d9) aid_navi_side_right_pane

0x2730,	// (0x0001665c) bg_popup_window_pane_cp30_ParamLimits

0x2730,	// (0x0001665c) bg_popup_window_pane_cp30

0x27aa,	// (0x000166d6) popup_midp_note_alarm_window_g1_ParamLimits

0x27aa,	// (0x000166d6) popup_midp_note_alarm_window_g1

0x27da,	// (0x00016706) popup_midp_note_alarm_window_t1_ParamLimits

0x27da,	// (0x00016706) popup_midp_note_alarm_window_t1

0x287b,	// (0x000167a7) popup_midp_note_alarm_window_t2_ParamLimits

0x287b,	// (0x000167a7) popup_midp_note_alarm_window_t2

0x2929,	// (0x00016855) popup_midp_note_alarm_window_t3_ParamLimits

0x2929,	// (0x00016855) popup_midp_note_alarm_window_t3

0x295b,	// (0x00016887) popup_midp_note_alarm_window_t4_ParamLimits

0x295b,	// (0x00016887) popup_midp_note_alarm_window_t4

0x2981,	// (0x000168ad) popup_midp_note_alarm_window_t5_ParamLimits

0x2981,	// (0x000168ad) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x000237c1) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x000237c1) popup_midp_note_alarm_window_t

0x2a2d,	// (0x00016959) wait_bar_pane_cp1_ParamLimits

0x2a2d,	// (0x00016959) wait_bar_pane_cp1

0xc241,	// (0x0002016d) wait_anim_pane_copy1

0xc241,	// (0x0002016d) wait_border_pane_copy1

0x2415,	// (0x00016341) wait_border_pane_g1_copy1

0xde62,	// (0x00021d8e) form_field_popup_pane_g1

0xa8ca,	// (0x0001e7f6) form_field_popup_pane_t1_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_cp7_ParamLimits

0xde6a,	// (0x00021d96) list_form_pane_ParamLimits

0xde76,	// (0x00021da2) form_field_popup_wide_pane_g1

0xde7e,	// (0x00021daa) form_field_popup_wide_pane_t1_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_cp8_ParamLimits

0xde90,	// (0x00021dbc) list_form_wide_pane_ParamLimits

0xb72d,	// (0x0001f659) aid_size_cell_graphic_pane

0xa949,	// (0x0001e875) data_form_pane_t1_ParamLimits

0xb60a,	// (0x0001f536) data_form_wide_pane_t1_ParamLimits

0xaf86,	// (0x0001eeb2) bg_status_flat_pane

0xa0cf,	// (0x0001dffb) title_pane_t1_ParamLimits

0xc257,	// (0x00020183) title_pane_t2_ParamLimits

0xc27d,	// (0x000201a9) title_pane_t3_ParamLimits

0xf557,	// (0x00023483) title_pane_t_ParamLimits

0xab13,	// (0x0001ea3f) level_1_signal_ParamLimits

0xab25,	// (0x0001ea51) level_2_signal_ParamLimits

0xab38,	// (0x0001ea64) level_3_signal_ParamLimits

0xab4b,	// (0x0001ea77) level_4_signal_ParamLimits

0xab5e,	// (0x0001ea8a) level_5_signal_ParamLimits

0xab71,	// (0x0001ea9d) level_6_signal_ParamLimits

0xab84,	// (0x0001eab0) level_7_signal_ParamLimits

0xab13,	// (0x0001ea3f) level_1_battery_ParamLimits

0xab25,	// (0x0001ea51) level_2_battery_ParamLimits

0xab38,	// (0x0001ea64) level_3_battery_ParamLimits

0xab4b,	// (0x0001ea77) level_4_battery_ParamLimits

0xab5e,	// (0x0001ea8a) level_5_battery_ParamLimits

0xab71,	// (0x0001ea9d) level_6_battery_ParamLimits

0xab84,	// (0x0001eab0) level_7_battery_ParamLimits

0x2635,	// (0x00016561) bg_status_flat_pane_g1

0x263d,	// (0x00016569) bg_status_flat_pane_g2

0x2645,	// (0x00016571) bg_status_flat_pane_g3

0x264d,	// (0x00016579) bg_status_flat_pane_g4

0x2655,	// (0x00016581) bg_status_flat_pane_g5

0x265d,	// (0x00016589) bg_status_flat_pane_g6

0x2665,	// (0x00016591) bg_status_flat_pane_g7

0xa163,	// (0x0001e08f) tabs_3_active_pane_t1_ParamLimits

0xa163,	// (0x0001e08f) tabs_3_passive_pane_t1_ParamLimits

0xa17d,	// (0x0001e0a9) tabs_4_active_pane_t1_ParamLimits

0xa17d,	// (0x0001e0a9) tabs_4_1_passive_pane_t1_ParamLimits

0xaa07,	// (0x0001e933) tabs_2_active_pane_t1_ParamLimits

0xaa07,	// (0x0001e933) tabs_2_passive_pane_t1_ParamLimits

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp4_ParamLimits

0xaa19,	// (0x0001e945) tabs_2_long_active_pane_t1_ParamLimits

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp4_ParamLimits

0xea59,	// (0x00022985) list_single_midp_graphic_pane_t1_ParamLimits

0xc29d,	// (0x000201c9) bg_active_tab_pane_cp5_ParamLimits

0xaa2c,	// (0x0001e958) tabs_3_long_active_pane_t1_ParamLimits

0x17f0,	// (0x0001571c) bg_passive_tab_pane_cp5_ParamLimits

0xea59,	// (0x00022985) list_single_midp_graphic_pane_t1

0xaf86,	// (0x0001eeb2) bg_status_flat_pane_ParamLimits

0x19ac,	// (0x000158d8) indicator_pane_cp2_ParamLimits

0x19ac,	// (0x000158d8) indicator_pane_cp2

0xb11c,	// (0x0001f048) navi_pane_srt_ParamLimits

0xb11c,	// (0x0001f048) navi_pane_srt

0x1b13,	// (0x00015a3f) popup_clock_digital_analogue_window_cp1

0xc2fb,	// (0x00020227) indicator_pane_t1

0x14c1,	// (0x000153ed) copy_highlight_pane

0x14c1,	// (0x000153ed) cursor_graphics_pane

0x14c1,	// (0x000153ed) graphic_within_text_pane

0x14c1,	// (0x000153ed) link_highlight_pane

0x2e54,	// (0x00016d80) popup_preview_text_window_t5_ParamLimits

0x2e54,	// (0x00016d80) popup_preview_text_window_t5

0x15f2,	// (0x0001551e) cursor_digital_pane

0x15f2,	// (0x0001551e) cursor_primary_pane

0x1603,	// (0x0001552f) cursor_primary_small_pane

0x160b,	// (0x00015537) cursor_secondary_pane

0x1613,	// (0x0001553f) cursor_title_pane

0x15f2,	// (0x0001551e) link_highlight_digital_pane

0x15fa,	// (0x00015526) link_highlight_primary_pane

0x1603,	// (0x0001552f) link_highlight_primary_small_pane

0x160b,	// (0x00015537) link_highlight_secondary_pane

0x1613,	// (0x0001553f) link_highlight_title_pane

0x15f2,	// (0x0001551e) copy_highlight_digital_pane

0x15f2,	// (0x0001551e) copy_highlight_primary_pane

0x1603,	// (0x0001552f) copy_highlight_primary_small_pane

0x160b,	// (0x00015537) copy_highlight_secondary_pane

0x1613,	// (0x0001553f) copy_highlight_title_pane

0x160b,	// (0x00015537) graphic_text_digital_pane

0x26d3,	// (0x000165ff) graphic_text_primary_pane

0x26dc,	// (0x00016608) graphic_text_primary_small_pane

0x1603,	// (0x0001552f) graphic_text_secondary_pane

0x15f2,	// (0x0001551e) graphic_text_title_pane

0xadc0,	// (0x0001ecec) cursor_primary_pane_g1

0x26c5,	// (0x000165f1) cursor_text_primary_t1

0xb393,	// (0x0001f2bf) cursor_primary_small_pane_g1

0x26b7,	// (0x000165e3) cursor_text_primary_small_t1

0xb389,	// (0x0001f2b5) cursor_primary_small_pane_g1_copy1

0x269f,	// (0x000165cb) cursor_text_primary_small_t1_copy1

0x267d,	// (0x000165a9) cursor_text_title_t1

0xb37f,	// (0x0001f2ab) cursor_title_pane_g1

0xadc0,	// (0x0001ecec) cursor_digital_pane_g1

0x1625,	// (0x00015551) cursor_text_digital_t1

0x1633,	// (0x0001555f) link_highlight_primary_pane_g1

0x2626,	// (0x00016552) link_highlight_primary_pane_t1

0x1633,	// (0x0001555f) link_highlight_primary_small_pane_g1

0x163b,	// (0x00015567) link_highlight_primary_small_pane_t1

0x164a,	// (0x00015576) link_highlight_secondary_pane_g1

0x1652,	// (0x0001557e) link_highlight_secondary_pane_t1

0x259a,	// (0x000164c6) link_highlight_title_pane_g1

0x25a2,	// (0x000164ce) link_highlight_title_pane_t1

0x2583,	// (0x000164af) link_highlight_digital_pane_g1

0x258b,	// (0x000164b7) link_highlight_digital_pane_t1

0x244b,	// (0x00016377) copy_highlight_primary_pane_g1

0x2462,	// (0x0001638e) copy_highlight_primary_pane_t1

0x244b,	// (0x00016377) copy_highlight_primary_small_pane_g1

0x2453,	// (0x0001637f) copy_highlight_primary_small_pane_t1

0x1661,	// (0x0001558d) copy_highlight_secondary_pane_g1

0x1669,	// (0x00015595) copy_highlight_secondary_pane_t1

0x2434,	// (0x00016360) copy_highlight_title_pane_g1

0x243c,	// (0x00016368) copy_highlight_title_pane_t1

0x244b,	// (0x00016377) copy_highlight_digital_pane_g1

0x37ec,	// (0x00017718) copy_highlight_digital_pane_t1

0x3740,	// (0x0001766c) graphic_text_primary_pane_g1

0x37d0,	// (0x000176fc) graphic_text_primary_pane_t1

0x37de,	// (0x0001770a) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x000238f0) graphic_text_primary_pane_t

0x37ac,	// (0x000176d8) graphic_text_primary_small_pane_g1

0x37b4,	// (0x000176e0) graphic_text_primary_small_pane_t1

0x37c2,	// (0x000176ee) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x000238eb) graphic_text_primary_small_pane_t

0x3788,	// (0x000176b4) graphic_text_secondary_pane_g1

0x3790,	// (0x000176bc) graphic_text_secondary_pane_t1

0x379e,	// (0x000176ca) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x000238e6) graphic_text_secondary_pane_t

0x3764,	// (0x00017690) graphic_text_title_pane_g1

0x376c,	// (0x00017698) graphic_text_title_pane_t1

0x377a,	// (0x000176a6) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x000238e1) graphic_text_title_pane_t

0x3740,	// (0x0001766c) graphic_text_digital_pane_g1

0x3748,	// (0x00017674) graphic_text_digital_pane_t1

0x3756,	// (0x00017682) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x000238dc) graphic_text_digital_pane_t

0xc29d,	// (0x000201c9) navi_icon_pane_srt_ParamLimits

0xc29d,	// (0x000201c9) navi_icon_pane_srt

0xc241,	// (0x0002016d) navi_midp_pane_srt

0xc241,	// (0x0002016d) navi_navi_pane_srt

0xc29d,	// (0x000201c9) navi_text_pane_srt_ParamLimits

0xc29d,	// (0x000201c9) navi_text_pane_srt

0x370b,	// (0x00017637) navi_navi_icon_text_pane_srt

0x3713,	// (0x0001763f) navi_navi_pane_srt_g1_ParamLimits

0x3713,	// (0x0001763f) navi_navi_pane_srt_g1

0x3725,	// (0x00017651) navi_navi_pane_srt_g2_ParamLimits

0x3725,	// (0x00017651) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x000238d7) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x000238d7) navi_navi_pane_srt_g

0x3737,	// (0x00017663) navi_navi_tabs_pane_srt

0x370b,	// (0x00017637) navi_navi_text_pane_srt

0x370b,	// (0x00017637) navi_navi_volume_pane_srt

0x36fc,	// (0x00017628) navi_navi_text_pane_srt_t1

0xec92,	// (0x00022bbe) navi_navi_volume_pane_srt_g1

0xec9a,	// (0x00022bc6) volume_small_pane_srt_ParamLimits

0xec9a,	// (0x00022bc6) volume_small_pane_srt

0xe736,	// (0x00022662) volume_small_pane_srt_g1_ParamLimits

0xe736,	// (0x00022662) volume_small_pane_srt_g1

0xe746,	// (0x00022672) volume_small_pane_srt_g2_ParamLimits

0xe746,	// (0x00022672) volume_small_pane_srt_g2

0xe757,	// (0x00022683) volume_small_pane_srt_g3_ParamLimits

0xe757,	// (0x00022683) volume_small_pane_srt_g3

0xe768,	// (0x00022694) volume_small_pane_srt_g4_ParamLimits

0xe768,	// (0x00022694) volume_small_pane_srt_g4

0xe779,	// (0x000226a5) volume_small_pane_srt_g5_ParamLimits

0xe779,	// (0x000226a5) volume_small_pane_srt_g5

0xe78a,	// (0x000226b6) volume_small_pane_srt_g6_ParamLimits

0xe78a,	// (0x000226b6) volume_small_pane_srt_g6

0xe79b,	// (0x000226c7) volume_small_pane_srt_g7_ParamLimits

0xe79b,	// (0x000226c7) volume_small_pane_srt_g7

0xe7ac,	// (0x000226d8) volume_small_pane_srt_g8_ParamLimits

0xe7ac,	// (0x000226d8) volume_small_pane_srt_g8

0xe7cb,	// (0x000226f7) volume_small_pane_srt_g9_ParamLimits

0xe7cb,	// (0x000226f7) volume_small_pane_srt_g9

0xe7dc,	// (0x00022708) volume_small_pane_srt_g10_ParamLimits

0xe7dc,	// (0x00022708) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00023684) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00023684) volume_small_pane_srt_g

0xc56d,	// (0x00020499) query_popup_data_pane_cp2

0x36e2,	// (0x0001760e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x36e2,	// (0x0001760e) navi_navi_icon_text_pane_srt_t1

0x26d3,	// (0x000165ff) navi_tabs_2_long_pane_srt

0x26d3,	// (0x000165ff) navi_tabs_2_pane_srt

0x26d3,	// (0x000165ff) navi_tabs_3_long_pane_srt

0x26d3,	// (0x000165ff) navi_tabs_3_pane_srt

0x26d3,	// (0x000165ff) navi_tabs_4_pane_srt

0xec72,	// (0x00022b9e) tabs_2_active_pane_srt_ParamLimits

0xec72,	// (0x00022b9e) tabs_2_active_pane_srt

0xec82,	// (0x00022bae) tabs_2_passive_pane_srt_ParamLimits

0xec82,	// (0x00022bae) tabs_2_passive_pane_srt

0x1e7a,	// (0x00015da6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1e7a,	// (0x00015da6) bg_passive_tab_pane_cp1_srt

0x36ae,	// (0x000175da) bg_passive_tab_pane_g1_cp1_srt

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp1_srt

0x36b7,	// (0x000175e3) bg_passive_tab_pane_g3_cp1_srt

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp1_srt_ParamLimits

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp1_srt

0x36c0,	// (0x000175ec) tabs_2_active_pane_srt_g1

0xb76f,	// (0x0001f69b) tabs_2_active_pane_srt_t1_ParamLimits

0xb76f,	// (0x0001f69b) tabs_2_active_pane_srt_t1

0x36ae,	// (0x000175da) bg_active_tab_pane_g1_cp1_srt

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp1_srt

0x36b7,	// (0x000175e3) bg_active_tab_pane_g3_cp1_srt

0xec3f,	// (0x00022b6b) tabs_3_active_pane_srt_ParamLimits

0xec3f,	// (0x00022b6b) tabs_3_active_pane_srt

0xec50,	// (0x00022b7c) tabs_3_passive_pane_cp_srt_ParamLimits

0xec50,	// (0x00022b7c) tabs_3_passive_pane_cp_srt

0xec61,	// (0x00022b8d) tabs_3_passive_pane_srt_ParamLimits

0xec61,	// (0x00022b8d) tabs_3_passive_pane_srt

0x1e7a,	// (0x00015da6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1e7a,	// (0x00015da6) bg_passive_tab_pane_cp2_srt

0x1678,	// (0x000155a4) bg_passive_tab_pane_g1_cp2_srt

0x110d,	// (0x00015039) bg_passive_tab_pane_g2_cp2_srt

0x1681,	// (0x000155ad) bg_passive_tab_pane_g3_cp2_srt

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp2_srt_ParamLimits

0xc28f,	// (0x000201bb) bg_active_tab_pane_cp2_srt

0x3694,	// (0x000175c0) tabs_3_active_pane_srt_g1

0xb759,	// (0x0001f685) tabs_3_active_pane_srt_t1_ParamLimits

0xb759,	// (0x0001f685) tabs_3_active_pane_srt_t1

0x1678,	// (0x000155a4) bg_active_tab_pane_g1_cp2_srt

0x110d,	// (0x00015039) bg_active_tab_pane_g2_cp2_srt

0x1681,	// (0x000155ad) bg_active_tab_pane_g3_cp2_srt

0xeb98,	// (0x00022ac4) tabs_4_active_pane_srt_ParamLimits

0xeb98,	// (0x00022ac4) tabs_4_active_pane_srt

0xec09,	// (0x00022b35) tabs_4_passive_pane_cp2_srt_ParamLimits

0xec09,	// (0x00022b35) tabs_4_passive_pane_cp2_srt

0xe7fc,	// (0x00022728) aid_size_cell_toolbar

0x3227,	// (0x00017153) main_idle_act_pane_ParamLimits

0xe8b6,	// (0x000227e2) popup_large_graphic_colour_window_ParamLimits

0x984b,	// (0x0001d777) popup_toolbar_window_ParamLimits

0x984b,	// (0x0001d777) popup_toolbar_window

0x3443,	// (0x0001736f) list_single_graphic_2heading_pane_ParamLimits

0x3443,	// (0x0001736f) list_single_graphic_2heading_pane

0xe326,	// (0x00022252) aid_size_cell_apps_grid_lsc_pane

0xe338,	// (0x00022264) aid_size_cell_apps_grid_prt_pane

0x17f0,	// (0x0001571c) bg_wml_button_pane_cp1_ParamLimits

0x17f0,	// (0x0001571c) bg_wml_button_pane_cp1

0xb31e,	// (0x0001f24a) form_midp_field_text_pane_t1_ParamLimits

0x1e7a,	// (0x00015da6) input_focus_pane_cp050_ParamLimits

0x20c2,	// (0x00015fee) list_midp_form_text_pane_ParamLimits

0x2074,	// (0x00015fa0) input_focus_pane_cp051_ParamLimits

0x2088,	// (0x00015fb4) list_midp_choice_pane_ParamLimits

0x1f33,	// (0x00015e5f) list_single_2graphic_pane_cp3_ParamLimits

0x1f33,	// (0x00015e5f) list_single_2graphic_pane_cp3

0x1f49,	// (0x00015e75) list_single_midp_graphic_pane_ParamLimits

0x1f49,	// (0x00015e75) list_single_midp_graphic_pane

0xe96e,	// (0x0002289a) list_single_graphic_2heading_pane_g1_ParamLimits

0xe96e,	// (0x0002289a) list_single_graphic_2heading_pane_g1

0xe97a,	// (0x000228a6) list_single_graphic_2heading_pane_g4_ParamLimits

0xe97a,	// (0x000228a6) list_single_graphic_2heading_pane_g4

0xe986,	// (0x000228b2) list_single_graphic_2heading_pane_g5_ParamLimits

0xe986,	// (0x000228b2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000236d7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000236d7) list_single_graphic_2heading_pane_g

0xe992,	// (0x000228be) list_single_graphic_2heading_pane_t1_ParamLimits

0xe992,	// (0x000228be) list_single_graphic_2heading_pane_t1

0xe9a6,	// (0x000228d2) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9a6,	// (0x000228d2) list_single_graphic_2heading_pane_t2

0xe9c2,	// (0x000228ee) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9c2,	// (0x000228ee) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000236de) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000236de) list_single_graphic_2heading_pane_t

0x1c66,	// (0x00015b92) bg_popup_sub_pane_cp2

0x1c90,	// (0x00015bbc) grid_toobar_pane

0xe9da,	// (0x00022906) cell_toolbar_pane_ParamLimits

0xe9da,	// (0x00022906) cell_toolbar_pane

0x1cfa,	// (0x00015c26) cell_toolbar_pane_g1_ParamLimits

0x1cfa,	// (0x00015c26) cell_toolbar_pane_g1

0x1d0e,	// (0x00015c3a) cell_toolbar_pane_g2_ParamLimits

0x1d0e,	// (0x00015c3a) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000236ec) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000236ec) cell_toolbar_pane_g

0x1d30,	// (0x00015c5c) grid_highlight_pane_cp2_ParamLimits

0x1d30,	// (0x00015c5c) grid_highlight_pane_cp2

0x1d4a,	// (0x00015c76) toolbar_button_pane

0x1d56,	// (0x00015c82) toolbar_button_pane_g1

0x1d5e,	// (0x00015c8a) toolbar_button_pane_g2

0x1d66,	// (0x00015c92) toolbar_button_pane_g3

0x1d6e,	// (0x00015c9a) toolbar_button_pane_g4

0x1d76,	// (0x00015ca2) toolbar_button_pane_g5

0x1d7e,	// (0x00015caa) toolbar_button_pane_g6

0x1d86,	// (0x00015cb2) toolbar_button_pane_g7

0x1d8e,	// (0x00015cba) toolbar_button_pane_g8

0x1d96,	// (0x00015cc2) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000236f1) toolbar_button_pane_g

0xea12,	// (0x0002293e) list_single_2graphic_pane_g1_cp3_ParamLimits

0xea12,	// (0x0002293e) list_single_2graphic_pane_g1_cp3

0x98a3,	// (0x0001d7cf) list_single_2graphic_pane_g2_cp3_ParamLimits

0x98a3,	// (0x0001d7cf) list_single_2graphic_pane_g2_cp3

0xea1e,	// (0x0002294a) list_single_2graphic_pane_g3_cp3

0xea26,	// (0x00022952) list_single_2graphic_pane_g4_cp3_ParamLimits

0xea26,	// (0x00022952) list_single_2graphic_pane_g4_cp3

0xea32,	// (0x0002295e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xea32,	// (0x0002295e) list_single_2graphic_pane_t1_cp3

0xea4d,	// (0x00022979) list_single_midp_graphic_pane_g2_ParamLimits

0xea4d,	// (0x00022979) list_single_midp_graphic_pane_g2

0xe804,	// (0x00022730) aid_zoom_text_primary

0xe80c,	// (0x00022738) aid_zoom_text_secondary

0xae18,	// (0x0001ed44) status_small_pane_g7_ParamLimits

0xae18,	// (0x0001ed44) status_small_pane_g7

0xae3b,	// (0x0001ed67) status_small_pane_t1_ParamLimits

0xa09f,	// (0x0001dfcb) title_pane_g2

0x0003,

0xf54e,	// (0x0002347a) title_pane_g

0xa33f,	// (0x0001e26b) aid_size_cell_colour_1_pane_ParamLimits

0xa33f,	// (0x0001e26b) aid_size_cell_colour_1_pane

0xa353,	// (0x0001e27f) aid_size_cell_colour_2_pane_ParamLimits

0xa353,	// (0x0001e27f) aid_size_cell_colour_2_pane

0xa367,	// (0x0001e293) aid_size_cell_colour_3_pane_ParamLimits

0xa367,	// (0x0001e293) aid_size_cell_colour_3_pane

0xa37b,	// (0x0001e2a7) aid_size_cell_colour_4_pane_ParamLimits

0xa37b,	// (0x0001e2a7) aid_size_cell_colour_4_pane

0xe19f,	// (0x000220cb) title_pane_stacon_g1_ParamLimits

0xe19f,	// (0x000220cb) title_pane_stacon_g1

0x24b9,	// (0x000163e5) popup_note_wait_window_g3_ParamLimits

0x24b9,	// (0x000163e5) popup_note_wait_window_g3

0x2530,	// (0x0001645c) popup_note_wait_window_t5_ParamLimits

0x2530,	// (0x0001645c) popup_note_wait_window_t5

0xc241,	// (0x0002016d) main_feb_china_hwr_fs_writing_pane

0x91e4,	// (0x0001d110) popup_feb_china_hwr_fs_window_ParamLimits

0x91e4,	// (0x0001d110) popup_feb_china_hwr_fs_window

0x98b4,	// (0x0001d7e0) aid_size_cell_hwr_fs_ParamLimits

0x98b4,	// (0x0001d7e0) aid_size_cell_hwr_fs

0x1e7a,	// (0x00015da6) bg_popup_sub_pane_cp3_ParamLimits

0x1e7a,	// (0x00015da6) bg_popup_sub_pane_cp3

0x98c9,	// (0x0001d7f5) grid_hwr_fs_pane_ParamLimits

0x98c9,	// (0x0001d7f5) grid_hwr_fs_pane

0xea6f,	// (0x0002299b) linegrid_hwr_fs_pane_ParamLimits

0xea6f,	// (0x0002299b) linegrid_hwr_fs_pane

0x98e1,	// (0x0001d80d) cell_hwr_fs_pane_ParamLimits

0x98e1,	// (0x0001d80d) cell_hwr_fs_pane

0x1e86,	// (0x00015db2) linegrid_hwr_fs_pane_g1_ParamLimits

0x1e86,	// (0x00015db2) linegrid_hwr_fs_pane_g1

0xb2bf,	// (0x0001f1eb) linegrid_hwr_fs_pane_g2_ParamLimits

0xb2bf,	// (0x0001f1eb) linegrid_hwr_fs_pane_g2

0x1ea4,	// (0x00015dd0) linegrid_hwr_fs_pane_g3_ParamLimits

0x1ea4,	// (0x00015dd0) linegrid_hwr_fs_pane_g3

0xea7f,	// (0x000229ab) linegrid_hwr_fs_pane_g4_ParamLimits

0xea7f,	// (0x000229ab) linegrid_hwr_fs_pane_g4

0xea9d,	// (0x000229c9) linegrid_hwr_fs_pane_g5_ParamLimits

0xea9d,	// (0x000229c9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00023717) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00023717) linegrid_hwr_fs_pane_g

0x1eb0,	// (0x00015ddc) cell_hwr_fs_pane_g1_ParamLimits

0x1eb0,	// (0x00015ddc) cell_hwr_fs_pane_g1

0x1ba1,	// (0x00015acd) cell_hwr_fs_pane_g2_ParamLimits

0x1ba1,	// (0x00015acd) cell_hwr_fs_pane_g2

0xb2d1,	// (0x0001f1fd) cell_hwr_fs_pane_g3_ParamLimits

0xb2d1,	// (0x0001f1fd) cell_hwr_fs_pane_g3

0xb2de,	// (0x0001f20a) cell_hwr_fs_pane_g4_ParamLimits

0xb2de,	// (0x0001f20a) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x00023722) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00023722) cell_hwr_fs_pane_g

0x9907,	// (0x0001d833) cell_hwr_fs_pane_t1

0xc241,	// (0x0002016d) grid_highlight_pane_cp6

0xc241,	// (0x0002016d) main_idle_act2_pane

0xdfa7,	// (0x00021ed3) aid_inside_area_popup_secondary

0xb3b3,	// (0x0001f2df) aid_inside_area_window_primary_ParamLimits

0xb3b3,	// (0x0001f2df) aid_inside_area_window_primary

0x37fb,	// (0x00017727) ai2_news_ticker_pane

0x3803,	// (0x0001772f) aid_size_cell_ai1_link_ParamLimits

0x3803,	// (0x0001772f) aid_size_cell_ai1_link

0x381d,	// (0x00017749) popup_ai2_data_window_ParamLimits

0x381d,	// (0x00017749) popup_ai2_data_window

0x383b,	// (0x00017767) popup_ai2_link_window_ParamLimits

0x383b,	// (0x00017767) popup_ai2_link_window

0x1e7a,	// (0x00015da6) bg_popup_sub_pane_cp4_ParamLimits

0x1e7a,	// (0x00015da6) bg_popup_sub_pane_cp4

0x3851,	// (0x0001777d) grid_ai2_link_pane_ParamLimits

0x3851,	// (0x0001777d) grid_ai2_link_pane

0x3868,	// (0x00017794) popup_ai2_link_window_g1_ParamLimits

0x3868,	// (0x00017794) popup_ai2_link_window_g1

0x3874,	// (0x000177a0) popup_ai2_link_window_g2_ParamLimits

0x3874,	// (0x000177a0) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x000238f5) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x000238f5) popup_ai2_link_window_g

0x3885,	// (0x000177b1) ai2_mp_button_pane

0x388d,	// (0x000177b9) ai2_mp_volume_pane

0x2074,	// (0x00015fa0) bg_popup_sub_pane_cp5_ParamLimits

0x2074,	// (0x00015fa0) bg_popup_sub_pane_cp5

0x3895,	// (0x000177c1) heading_ai2_gene_pane_ParamLimits

0x3895,	// (0x000177c1) heading_ai2_gene_pane

0x38a1,	// (0x000177cd) list_ai2_gene_pane_ParamLimits

0x38a1,	// (0x000177cd) list_ai2_gene_pane

0x38e9,	// (0x00017815) cell_ai2_link_pane_ParamLimits

0x38e9,	// (0x00017815) cell_ai2_link_pane

0x38ff,	// (0x0001782b) cell_ai2_link_pane_g1

0xc241,	// (0x0002016d) grid_highlight_pane_cp7

0xecaf,	// (0x00022bdb) ai2_mp_volume_pane_g1

0x39d2,	// (0x000178fe) ai2_mp_volume_pane_g2

0x3947,	// (0x00017873) list_ai2_gene_pane_t1

0x39da,	// (0x00017906) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0002390e) ai2_mp_volume_pane_g

0xecb7,	// (0x00022be3) volume_small_pane_cp3

0x39e2,	// (0x0001790e) aid_size_cell_ai2_button

0x39ea,	// (0x00017916) grid_ai2_button_pane

0x39f3,	// (0x0001791f) cell_ai2_button_pane_ParamLimits

0x39f3,	// (0x0001791f) cell_ai2_button_pane

0xc237,	// (0x00020163) cell_ai2_button_pane_g1

0xc241,	// (0x0002016d) grid_highlight_pane_cp8

0x3992,	// (0x000178be) ai2_gene_pane_t1_ParamLimits

0x3992,	// (0x000178be) ai2_gene_pane_t1

0x9168,	// (0x0001d094) aid_height_parent_landscape

0xb55a,	// (0x0001f486) aid_height_set_list

0x3227,	// (0x00017153) aid_size_parent

0xb72d,	// (0x0001f659) aid_size_cell_graphic_pane_ParamLimits

0x38b1,	// (0x000177dd) popup_ai2_data_window_g1_ParamLimits

0x38b1,	// (0x000177dd) popup_ai2_data_window_g1

0x38bd,	// (0x000177e9) ai2_news_ticker_pane_g1

0x38c5,	// (0x000177f1) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x000238fa) ai2_news_ticker_pane_g

0x38cd,	// (0x000177f9) ai2_news_ticker_pane_t1

0x38db,	// (0x00017807) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x000238ff) ai2_news_ticker_pane_t

0x3908,	// (0x00017834) heading_ai2_gene_pane_g1

0x3910,	// (0x0001783c) heading_ai2_gene_pane_t1_ParamLimits

0x3910,	// (0x0001783c) heading_ai2_gene_pane_t1

0x3925,	// (0x00017851) list_highlight_pane_cp6

0x392d,	// (0x00017859) ai2_gene_pane_ParamLimits

0x392d,	// (0x00017859) ai2_gene_pane

0x3955,	// (0x00017881) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00023904) list_ai2_gene_pane_t

0x3963,	// (0x0001788f) list_highlight_pane_cp8_ParamLimits

0x3963,	// (0x0001788f) list_highlight_pane_cp8

0x3974,	// (0x000178a0) ai2_gene_pane_g1_ParamLimits

0x3974,	// (0x000178a0) ai2_gene_pane_g1

0x3986,	// (0x000178b2) ai2_gene_pane_g2_ParamLimits

0x3986,	// (0x000178b2) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00023909) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00023909) ai2_gene_pane_g

0xc88b,	// (0x000207b7) scroll_pane_cp12

0x9125,	// (0x0001d051) control_pane_t3_ParamLimits

0x9125,	// (0x0001d051) control_pane_t3

0xae2c,	// (0x0001ed58) status_small_pane_g8_ParamLimits

0xae2c,	// (0x0001ed58) status_small_pane_g8

0x9286,	// (0x0001d1b2) popup_find_window_ParamLimits

0x9537,	// (0x0001d463) popup_note_image_window_ParamLimits

0x1ccc,	// (0x00015bf8) list_double2_graphic_pane_vc_g1_ParamLimits

0x1ccc,	// (0x00015bf8) list_double2_graphic_pane_vc_g1

0x1432,	// (0x0001535e) list_double2_graphic_pane_vc_g2_ParamLimits

0x1432,	// (0x0001535e) list_double2_graphic_pane_vc_g2

0x1cd8,	// (0x00015c04) list_double2_graphic_pane_vc_g3_ParamLimits

0x1cd8,	// (0x00015c04) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000236e5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000236e5) list_double2_graphic_pane_vc_g

0x1ce4,	// (0x00015c10) list_double2_graphic_pane_vc_t1_ParamLimits

0x1ce4,	// (0x00015c10) list_double2_graphic_pane_vc_t1

0x1432,	// (0x0001535e) list_single_heading_pane_vc_g1_ParamLimits

0x1432,	// (0x0001535e) list_single_heading_pane_vc_g1

0x1cd8,	// (0x00015c04) list_single_heading_pane_vc_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000234f4) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000234f4) list_single_heading_pane_vc_g

0x1d9e,	// (0x00015cca) list_single_heading_pane_vc_t1_ParamLimits

0x1d9e,	// (0x00015cca) list_single_heading_pane_vc_t1

0x1db4,	// (0x00015ce0) list_single_heading_pane_vc_t2_ParamLimits

0x1db4,	// (0x00015ce0) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00023706) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00023706) list_single_heading_pane_vc_t

0x1dc6,	// (0x00015cf2) list_setting_number_pane_vc_g1_ParamLimits

0x1dc6,	// (0x00015cf2) list_setting_number_pane_vc_g1

0x1dd2,	// (0x00015cfe) list_setting_number_pane_vc_g2_ParamLimits

0x1dd2,	// (0x00015cfe) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0002370b) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0002370b) list_setting_number_pane_vc_g

0x1dde,	// (0x00015d0a) list_setting_number_pane_vc_t1_ParamLimits

0x1dde,	// (0x00015d0a) list_setting_number_pane_vc_t1

0x1df2,	// (0x00015d1e) list_setting_number_pane_vc_t2_ParamLimits

0x1df2,	// (0x00015d1e) list_setting_number_pane_vc_t2

0x1e0e,	// (0x00015d3a) list_setting_number_pane_vc_t3_ParamLimits

0x1e0e,	// (0x00015d3a) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x00023710) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x00023710) list_setting_number_pane_vc_t

0x1e3c,	// (0x00015d68) set_value_pane_vc_ParamLimits

0x1e3c,	// (0x00015d68) set_value_pane_vc

0x3443,	// (0x0001736f) list_double2_graphic_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double2_graphic_pane_vc

0x3443,	// (0x0001736f) list_double2_large_graphic_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double2_large_graphic_pane_vc

0x3443,	// (0x0001736f) list_double2_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double2_pane_vc

0x3443,	// (0x0001736f) list_double_graphic_heading_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double_graphic_heading_pane_vc

0x3443,	// (0x0001736f) list_double_graphic_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double_graphic_pane_vc

0x3443,	// (0x0001736f) list_double_heading_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double_heading_pane_vc

0x346b,	// (0x00017397) list_double_large_graphic_pane_vc_ParamLimits

0x346b,	// (0x00017397) list_double_large_graphic_pane_vc

0x3443,	// (0x0001736f) list_double_number_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double_number_pane_vc

0x3443,	// (0x0001736f) list_double_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double_pane_vc

0x3443,	// (0x0001736f) list_double_time_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_double_time_pane_vc

0x3443,	// (0x0001736f) list_setting_number_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_setting_number_pane_vc

0x3443,	// (0x0001736f) list_setting_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_setting_pane_vc

0x3443,	// (0x0001736f) list_single_graphic_heading_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_single_graphic_heading_pane_vc

0x3443,	// (0x0001736f) list_single_heading_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_single_heading_pane_vc

0x3443,	// (0x0001736f) list_single_number_heading_pane_vc_ParamLimits

0x3443,	// (0x0001736f) list_single_number_heading_pane_vc

0x1ccc,	// (0x00015bf8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1ccc,	// (0x00015bf8) list_double_graphic_heading_pane_vc_g1

0x3a26,	// (0x00017952) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3a26,	// (0x00017952) list_double_graphic_heading_pane_vc_g2

0x3a32,	// (0x0001795e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3a32,	// (0x0001795e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x00023915) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x00023915) list_double_graphic_heading_pane_vc_g

0x3a3e,	// (0x0001796a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3a3e,	// (0x0001796a) list_double_graphic_heading_pane_vc_t1

0x3a54,	// (0x00017980) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3a54,	// (0x00017980) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0002391c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0002391c) list_double_graphic_heading_pane_vc_t

0x1dc6,	// (0x00015cf2) list_setting_pane_vc_g1_ParamLimits

0x1dc6,	// (0x00015cf2) list_setting_pane_vc_g1

0x1dd2,	// (0x00015cfe) list_setting_pane_vc_g2_ParamLimits

0x1dd2,	// (0x00015cfe) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0002370b) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0002370b) list_setting_pane_vc_g

0x3c8d,	// (0x00017bb9) list_setting_pane_vc_t1_ParamLimits

0x3c8d,	// (0x00017bb9) list_setting_pane_vc_t1

0x3ca9,	// (0x00017bd5) list_setting_pane_vc_t2_ParamLimits

0x3ca9,	// (0x00017bd5) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0002395f) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0002395f) list_setting_pane_vc_t

0x1e3c,	// (0x00015d68) set_value_pane_cp_vc_ParamLimits

0x1e3c,	// (0x00015d68) set_value_pane_cp_vc

0x1432,	// (0x0001535e) list_single_number_heading_pane_vc_g1_ParamLimits

0x1432,	// (0x0001535e) list_single_number_heading_pane_vc_g1

0x1cd8,	// (0x00015c04) list_single_number_heading_pane_vc_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000234f4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000234f4) list_single_number_heading_pane_vc_g

0x3cc5,	// (0x00017bf1) list_single_number_heading_pane_vc_t1_ParamLimits

0x3cc5,	// (0x00017bf1) list_single_number_heading_pane_vc_t1

0x3cdb,	// (0x00017c07) list_single_number_heading_pane_vc_t2_ParamLimits

0x3cdb,	// (0x00017c07) list_single_number_heading_pane_vc_t2

0x3ced,	// (0x00017c19) list_single_number_heading_pane_vc_t3_ParamLimits

0x3ced,	// (0x00017c19) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x00023964) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00023964) list_single_number_heading_pane_vc_t

0x1ccc,	// (0x00015bf8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1ccc,	// (0x00015bf8) list_single_graphic_heading_pane_vc_g1

0x1432,	// (0x0001535e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1432,	// (0x0001535e) list_single_graphic_heading_pane_vc_g4

0x1cd8,	// (0x00015c04) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1cd8,	// (0x00015c04) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x000236e5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x000236e5) list_single_graphic_heading_pane_vc_g

0x3cc5,	// (0x00017bf1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3cc5,	// (0x00017bf1) list_single_graphic_heading_pane_vc_t1

0x3cff,	// (0x00017c2b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3cff,	// (0x00017c2b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0002396b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0002396b) list_single_graphic_heading_pane_vc_t

0x1432,	// (0x0001535e) list_double2_pane_vc_g1_ParamLimits

0x1432,	// (0x0001535e) list_double2_pane_vc_g1

0x1cd8,	// (0x00015c04) list_double2_pane_vc_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000234f4) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000234f4) list_double2_pane_vc_g

0x3d11,	// (0x00017c3d) list_double2_pane_vc_t1_ParamLimits

0x3d11,	// (0x00017c3d) list_double2_pane_vc_t1

0x3d27,	// (0x00017c53) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3d27,	// (0x00017c53) list_double2_large_graphic_pane_vc_g1

0x1432,	// (0x0001535e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1432,	// (0x0001535e) list_double2_large_graphic_pane_vc_g2

0x1cd8,	// (0x00015c04) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1cd8,	// (0x00015c04) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023511) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023511) list_double2_large_graphic_pane_vc_g

0x3d33,	// (0x00017c5f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3d33,	// (0x00017c5f) list_double2_large_graphic_pane_vc_t1

0x3d49,	// (0x00017c75) list_double_time_pane_vc_g1_ParamLimits

0x3d49,	// (0x00017c75) list_double_time_pane_vc_g1

0x3d55,	// (0x00017c81) list_double_time_pane_vc_g2_ParamLimits

0x3d55,	// (0x00017c81) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x00023970) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x00023970) list_double_time_pane_vc_g

0x3d61,	// (0x00017c8d) list_double_time_pane_vc_t1_ParamLimits

0x3d61,	// (0x00017c8d) list_double_time_pane_vc_t1

0x3d91,	// (0x00017cbd) list_double_time_pane_vc_t2_ParamLimits

0x3d91,	// (0x00017cbd) list_double_time_pane_vc_t2

0x3dba,	// (0x00017ce6) list_double_time_pane_vc_t3_ParamLimits

0x3dba,	// (0x00017ce6) list_double_time_pane_vc_t3

0x3dcc,	// (0x00017cf8) list_double_time_pane_vc_t4_ParamLimits

0x3dcc,	// (0x00017cf8) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00023975) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00023975) list_double_time_pane_vc_t

0x1432,	// (0x0001535e) list_double_pane_vc_g1_ParamLimits

0x1432,	// (0x0001535e) list_double_pane_vc_g1

0x1cd8,	// (0x00015c04) list_double_pane_vc_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000234f4) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000234f4) list_double_pane_vc_g

0x3de0,	// (0x00017d0c) list_double_pane_vc_t1_ParamLimits

0x3de0,	// (0x00017d0c) list_double_pane_vc_t1

0x3df4,	// (0x00017d20) list_double_pane_vc_t2_ParamLimits

0x3df4,	// (0x00017d20) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0002397e) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0002397e) list_double_pane_vc_t

0x1432,	// (0x0001535e) list_double_number_pane_vc_g1_ParamLimits

0x1432,	// (0x0001535e) list_double_number_pane_vc_g1

0x1cd8,	// (0x00015c04) list_double_number_pane_vc_g2_ParamLimits

0x1cd8,	// (0x00015c04) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000234f4) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000234f4) list_double_number_pane_vc_g

0x3e0a,	// (0x00017d36) list_double_number_pane_vc_t1_ParamLimits

0x3e0a,	// (0x00017d36) list_double_number_pane_vc_t1

0x3e1c,	// (0x00017d48) list_double_number_pane_vc_t2_ParamLimits

0x3e1c,	// (0x00017d48) list_double_number_pane_vc_t2

0x3df4,	// (0x00017d20) list_double_number_pane_vc_t3_ParamLimits

0x3df4,	// (0x00017d20) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00023983) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00023983) list_double_number_pane_vc_t

0x3e30,	// (0x00017d5c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3e30,	// (0x00017d5c) list_double_large_graphic_pane_vc_g1

0x3e52,	// (0x00017d7e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3e52,	// (0x00017d7e) list_double_large_graphic_pane_vc_g2

0x3e66,	// (0x00017d92) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3e66,	// (0x00017d92) list_double_large_graphic_pane_vc_g3

0x3e75,	// (0x00017da1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3e75,	// (0x00017da1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0002398a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0002398a) list_double_large_graphic_pane_vc_g

0x3e84,	// (0x00017db0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e84,	// (0x00017db0) list_double_large_graphic_pane_vc_t1

0x3ea0,	// (0x00017dcc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3ea0,	// (0x00017dcc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00023993) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00023993) list_double_large_graphic_pane_vc_t

0x3a26,	// (0x00017952) list_double_heading_pane_vc_g1_ParamLimits

0x3a26,	// (0x00017952) list_double_heading_pane_vc_g1

0x3a32,	// (0x0001795e) list_double_heading_pane_vc_g2_ParamLimits

0x3a32,	// (0x0001795e) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x00023998) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x00023998) list_double_heading_pane_vc_g

0x3ec0,	// (0x00017dec) list_double_heading_pane_vc_t1_ParamLimits

0x3ec0,	// (0x00017dec) list_double_heading_pane_vc_t1

0x3ed2,	// (0x00017dfe) list_double_heading_pane_vc_t2_ParamLimits

0x3ed2,	// (0x00017dfe) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002399d) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002399d) list_double_heading_pane_vc_t

0x3eea,	// (0x00017e16) list_double_graphic_pane_vc_g1_ParamLimits

0x3eea,	// (0x00017e16) list_double_graphic_pane_vc_g1

0x3ef6,	// (0x00017e22) list_double_graphic_pane_vc_g2_ParamLimits

0x3ef6,	// (0x00017e22) list_double_graphic_pane_vc_g2

0x1432,	// (0x0001535e) list_double_graphic_pane_vc_g3_ParamLimits

0x1432,	// (0x0001535e) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x000239a2) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x000239a2) list_double_graphic_pane_vc_g

0x3f13,	// (0x00017e3f) list_double_graphic_pane_vc_t1_ParamLimits

0x3f13,	// (0x00017e3f) list_double_graphic_pane_vc_t1

0x3f3d,	// (0x00017e69) list_double_graphic_pane_vc_t2_ParamLimits

0x3f3d,	// (0x00017e69) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x000239ab) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x000239ab) list_double_graphic_pane_vc_t

0xdbef,	// (0x00021b1b) aid_size_cell_fastswap

0x8ddc,	// (0x0001cd08) aid_size_cell_touch_ParamLimits

0x8ddc,	// (0x0001cd08) aid_size_cell_touch

0xdd76,	// (0x00021ca2) popup_fast_swap_wide_window_ParamLimits

0xdd76,	// (0x00021ca2) popup_fast_swap_wide_window

0x8f9a,	// (0x0001cec6) touch_pane_ParamLimits

0x8f9a,	// (0x0001cec6) touch_pane

0xc904,	// (0x00020830) button_value_adjust_pane_cp2

0xc90c,	// (0x00020838) button_value_adjust_pane_cp4

0xc914,	// (0x00020840) form_field_data_pane_cp2

0xa87a,	// (0x0001e7a6) form_field_data_wide_pane_cp2

0xe367,	// (0x00022293) bg_scroll_pane_ParamLimits

0xe386,	// (0x000222b2) scroll_handle_pane_ParamLimits

0xe39a,	// (0x000222c6) scroll_sc2_down_pane_ParamLimits

0xe39a,	// (0x000222c6) scroll_sc2_down_pane

0xe3c1,	// (0x000222ed) scroll_sc2_up_pane_ParamLimits

0xe3c1,	// (0x000222ed) scroll_sc2_up_pane

0xb8a1,	// (0x0001f7cd) grid_wheel_folder_pane_g1_ParamLimits

0xb8a1,	// (0x0001f7cd) grid_wheel_folder_pane_g1

0xe6c2,	// (0x000225ee) clock_nsta_pane_cp2_ParamLimits

0xe6c2,	// (0x000225ee) clock_nsta_pane_cp2

0xad0a,	// (0x0001ec36) listscroll_midp_pane_ParamLimits

0xad16,	// (0x0001ec42) midp_canvas_pane

0x17c0,	// (0x000156ec) nsta_clock_indic_pane

0x17fc,	// (0x00015728) listscroll_form_pane_vc

0x1804,	// (0x00015730) listscroll_set_pane_vc_ParamLimits

0x1804,	// (0x00015730) listscroll_set_pane_vc

0xafae,	// (0x0001eeda) clock_nsta_pane

0xafd8,	// (0x0001ef04) indicator_nsta_pane

0x1c66,	// (0x00015b92) bg_popup_sub_pane_cp2_ParamLimits

0x1c7a,	// (0x00015ba6) find_pane_cp2_ParamLimits

0x1c7a,	// (0x00015ba6) find_pane_cp2

0x1c90,	// (0x00015bbc) grid_toobar_pane_ParamLimits

0x1e4e,	// (0x00015d7a) list_form_gen_pane_vc_ParamLimits

0x1e4e,	// (0x00015d7a) list_form_gen_pane_vc

0x1e64,	// (0x00015d90) scroll_pane_cp8_vc_ParamLimits

0x1e64,	// (0x00015d90) scroll_pane_cp8_vc

0x1ee0,	// (0x00015e0c) data_form_wide_pane_vc_ParamLimits

0x1ee0,	// (0x00015e0c) data_form_wide_pane_vc

0x1eec,	// (0x00015e18) form_field_data_wide_pane_vc_g1

0x1ef4,	// (0x00015e20) form_field_data_wide_pane_vc_t1_ParamLimits

0x1ef4,	// (0x00015e20) form_field_data_wide_pane_vc_t1

0xc96f,	// (0x0002089b) input_focus_pane_cp6_vc_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_cp6_vc

0x223f,	// (0x0001616b) list_midp_pane_ParamLimits

0x3688,	// (0x000175b4) scroll_pane_cp16_ParamLimits

0x3688,	// (0x000175b4) scroll_pane_cp16

0x228d,	// (0x000161b9) button_value_adjust_pane_ParamLimits

0x228d,	// (0x000161b9) button_value_adjust_pane

0xb56b,	// (0x0001f497) button_value_adjust_pane_cp6_ParamLimits

0xb56b,	// (0x0001f497) button_value_adjust_pane_cp6

0xb5e5,	// (0x0001f511) settings_code_pane_cp_ParamLimits

0xb5e5,	// (0x0001f511) settings_code_pane_cp

0xc237,	// (0x00020163) cell_touch_pane_g1

0xc237,	// (0x00020163) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002362a) cell_touch_pane_g

0xb785,	// (0x0001f6b1) cell_touch_pane_cp_ParamLimits

0xb785,	// (0x0001f6b1) cell_touch_pane_cp

0xb7a1,	// (0x0001f6cd) cell_touch_pane_ParamLimits

0xb7a1,	// (0x0001f6cd) cell_touch_pane

0xc237,	// (0x00020163) scroll_sc2_down_pane_g1

0xc237,	// (0x00020163) scroll_sc2_up_pane_g1

0xc241,	// (0x0002016d) bg_set_opt_pane_cp4_vc

0x3a72,	// (0x0001799e) list_set_graphic_pane_vc_g1_ParamLimits

0x3a72,	// (0x0001799e) list_set_graphic_pane_vc_g1

0x3a7e,	// (0x000179aa) list_set_graphic_pane_vc_g2_ParamLimits

0x3a7e,	// (0x000179aa) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x00023921) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x00023921) list_set_graphic_pane_vc_g

0x3a8a,	// (0x000179b6) text_primary_small_cp13_vc_ParamLimits

0x3a8a,	// (0x000179b6) text_primary_small_cp13_vc

0x11a9,	// (0x000150d5) list_set_graphic_pane_vc_ParamLimits

0x11a9,	// (0x000150d5) list_set_graphic_pane_vc

0xc241,	// (0x0002016d) input_focus_pane_cp2_vc

0xc237,	// (0x00020163) setting_code_pane_vc_g1

0xc2b4,	// (0x000201e0) setting_code_pane_vc_t1

0x3aa2,	// (0x000179ce) set_text_pane_vc_t1_ParamLimits

0x3aa2,	// (0x000179ce) set_text_pane_vc_t1

0xc241,	// (0x0002016d) input_focus_pane_cp1_vc

0x3ac0,	// (0x000179ec) list_set_text_pane_vc

0xc237,	// (0x00020163) setting_text_pane_vc_g1

0xc241,	// (0x0002016d) bg_set_opt_pane_cp2_vc

0xc2ab,	// (0x000201d7) setting_slider_graphic_pane_vc_g1

0x3aca,	// (0x000179f6) setting_slider_graphic_pane_vc_t1

0x3adc,	// (0x00017a08) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x00023926) setting_slider_graphic_pane_vc_t

0x3aee,	// (0x00017a1a) slider_set_pane_cp_vc

0x3af8,	// (0x00017a24) slider_set_pane_vc_g1

0x3b01,	// (0x00017a2d) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0002392b) slider_set_pane_vc_g

0xdec0,	// (0x00021dec) set_opt_bg_pane_g1_copy1

0xdec8,	// (0x00021df4) set_opt_bg_pane_g2_copy1

0x3b2d,	// (0x00017a59) set_opt_bg_pane_g3_copy1

0xded8,	// (0x00021e04) set_opt_bg_pane_g4_copy1

0xdee0,	// (0x00021e0c) set_opt_bg_pane_g5_copy1

0xdee8,	// (0x00021e14) set_opt_bg_pane_g6_copy1

0x3b37,	// (0x00017a63) set_opt_bg_pane_g7_copy1

0x3b41,	// (0x00017a6d) set_opt_bg_pane_g8_copy1

0x3b4b,	// (0x00017a77) set_opt_bg_pane_g9_copy1

0xc241,	// (0x0002016d) bg_set_opt_pane_cp_vc

0x3b55,	// (0x00017a81) setting_slider_pane_vc_t1

0x3b64,	// (0x00017a90) setting_slider_pane_vc_t2

0x3b76,	// (0x00017aa2) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0002393a) setting_slider_pane_vc_t

0x3b88,	// (0x00017ab4) slider_set_pane_vc

0xeab3,	// (0x000229df) volume_set_pane_vc_g1

0xebaa,	// (0x00022ad6) volume_set_pane_vc_g2

0xebb3,	// (0x00022adf) volume_set_pane_vc_g3

0xebbc,	// (0x00022ae8) volume_set_pane_vc_g4

0xebc5,	// (0x00022af1) volume_set_pane_vc_g5

0xebce,	// (0x00022afa) volume_set_pane_vc_g6

0xebd7,	// (0x00022b03) volume_set_pane_vc_g7

0xebe0,	// (0x00022b0c) volume_set_pane_vc_g8

0xebe9,	// (0x00022b15) volume_set_pane_vc_g9

0xebf2,	// (0x00022b1e) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x00023941) volume_set_pane_vc_g

0x3b90,	// (0x00017abc) volume_set_pane_vc

0x3b9a,	// (0x00017ac6) button_value_adjust_pane_cp1_vc

0x3ba4,	// (0x00017ad0) list_highlight_pane_cp2_vc

0x3bad,	// (0x00017ad9) list_set_pane_vc_ParamLimits

0x3bad,	// (0x00017ad9) list_set_pane_vc

0x3c1b,	// (0x00017b47) main_pane_set_vc_t1_ParamLimits

0x3c1b,	// (0x00017b47) main_pane_set_vc_t1

0x3c30,	// (0x00017b5c) main_pane_set_vc_t2_ParamLimits

0x3c30,	// (0x00017b5c) main_pane_set_vc_t2

0x3c42,	// (0x00017b6e) main_pane_set_vc_t3_ParamLimits

0x3c42,	// (0x00017b6e) main_pane_set_vc_t3

0x3c56,	// (0x00017b82) main_pane_set_vc_t4_ParamLimits

0x3c56,	// (0x00017b82) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00023956) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00023956) main_pane_set_vc_t

0x3c6a,	// (0x00017b96) setting_code_pane_vc_ParamLimits

0x3c6a,	// (0x00017b96) setting_code_pane_vc

0x3c7b,	// (0x00017ba7) setting_slider_graphic_pane_vc

0x3c7b,	// (0x00017ba7) setting_slider_pane_vc

0x3c7b,	// (0x00017ba7) setting_text_pane_vc

0x3c7b,	// (0x00017ba7) setting_volume_pane_vc

0x3c85,	// (0x00017bb1) scroll_pane_cp121_vc

0xc8f2,	// (0x0002081e) set_content_pane_vc

0x3f5b,	// (0x00017e87) button_value_adjust_pane_g1

0x3f64,	// (0x00017e90) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x000239b0) button_value_adjust_pane_g

0x3f6d,	// (0x00017e99) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3f6d,	// (0x00017e99) form_field_slider_wide_pane_vc_t1

0x3f7f,	// (0x00017eab) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3f7f,	// (0x00017eab) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x000239b5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x000239b5) form_field_slider_wide_pane_vc_t

0xc28f,	// (0x000201bb) input_focus_pane_cp10_vc_ParamLimits

0xc28f,	// (0x000201bb) input_focus_pane_cp10_vc

0x3fab,	// (0x00017ed7) slider_cont_pane_cp1_vc_ParamLimits

0x3fab,	// (0x00017ed7) slider_cont_pane_cp1_vc

0x3fbd,	// (0x00017ee9) slider_form_pane_g1_cp2

0x3b01,	// (0x00017a2d) slider_form_pane_g2_cp2

0x3fea,	// (0x00017f16) form_field_slider_pane_vc_t3

0x3ff8,	// (0x00017f24) form_field_slider_pane_vc_t4

0x4006,	// (0x00017f32) slider_form_pane_vc_ParamLimits

0x4006,	// (0x00017f32) slider_form_pane_vc

0x4013,	// (0x00017f3f) form_field_slider_pane_vc_t1_ParamLimits

0x4013,	// (0x00017f3f) form_field_slider_pane_vc_t1

0x3f7f,	// (0x00017eab) form_field_slider_pane_vc_t2_ParamLimits

0x3f7f,	// (0x00017eab) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x000239c7) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x000239c7) form_field_slider_pane_vc_t

0xc28f,	// (0x000201bb) input_focus_pane_cp9_vc_ParamLimits

0xc28f,	// (0x000201bb) input_focus_pane_cp9_vc

0x4029,	// (0x00017f55) slider_cont_pane_vc_ParamLimits

0x4029,	// (0x00017f55) slider_cont_pane_vc

0x403d,	// (0x00017f69) list_form_graphic_pane_cp_vc_ParamLimits

0x403d,	// (0x00017f69) list_form_graphic_pane_cp_vc

0x1eec,	// (0x00015e18) form_field_popup_wide_pane_vc_g1

0x4052,	// (0x00017f7e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4052,	// (0x00017f7e) form_field_popup_wide_pane_vc_t1

0xc96f,	// (0x0002089b) input_focus_pane_cp8_vc_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_cp8_vc

0x4097,	// (0x00017fc3) list_form_wide_pane_vc_ParamLimits

0x4097,	// (0x00017fc3) list_form_wide_pane_vc

0x40a3,	// (0x00017fcf) list_form_graphic_pane_vc_g1

0x40ab,	// (0x00017fd7) list_form_graphic_pane_vc_t1_ParamLimits

0x40ab,	// (0x00017fd7) list_form_graphic_pane_vc_t1

0xc29d,	// (0x000201c9) list_highlight_pane_cp5_vc_ParamLimits

0xc29d,	// (0x000201c9) list_highlight_pane_cp5_vc

0x40c7,	// (0x00017ff3) list_form_graphic_pane_vc_ParamLimits

0x40c7,	// (0x00017ff3) list_form_graphic_pane_vc

0x1eec,	// (0x00015e18) form_field_popup_pane_vc_g1

0x40dd,	// (0x00018009) form_field_popup_pane_vc_t1_ParamLimits

0x40dd,	// (0x00018009) form_field_popup_pane_vc_t1

0xc96f,	// (0x0002089b) input_focus_pane_cp7_vc_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_cp7_vc

0x40f4,	// (0x00018020) list_form_pane_vc_ParamLimits

0x40f4,	// (0x00018020) list_form_pane_vc

0x4100,	// (0x0001802c) data_form_pane_vc_t1_ParamLimits

0x4100,	// (0x0001802c) data_form_pane_vc_t1

0xdec0,	// (0x00021dec) input_focus_pane_vc_g1

0xdec8,	// (0x00021df4) input_focus_pane_vc_g2

0xded0,	// (0x00021dfc) input_focus_pane_vc_g3

0xded8,	// (0x00021e04) input_focus_pane_vc_g4

0xdee0,	// (0x00021e0c) input_focus_pane_vc_g5

0xdee8,	// (0x00021e14) input_focus_pane_vc_g6

0xdef0,	// (0x00021e1c) input_focus_pane_vc_g7

0xdef8,	// (0x00021e24) input_focus_pane_vc_g8

0xdf00,	// (0x00021e2c) input_focus_pane_vc_g9

0xc237,	// (0x00020163) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x000235b3) input_focus_pane_vc_g

0x1ee0,	// (0x00015e0c) data_form_pane_vc_ParamLimits

0x1ee0,	// (0x00015e0c) data_form_pane_vc

0x1eec,	// (0x00015e18) form_field_data_pane_vc_g1

0x411d,	// (0x00018049) form_field_data_pane_vc_t1_ParamLimits

0x411d,	// (0x00018049) form_field_data_pane_vc_t1

0xc96f,	// (0x0002089b) input_focus_pane_vc_ParamLimits

0xc96f,	// (0x0002089b) input_focus_pane_vc

0x4137,	// (0x00018063) button_value_adjust_pane_cp3_vc

0x413f,	// (0x0001806b) button_value_adjust_pane_cp5_vc

0x4147,	// (0x00018073) form_field_data_pane_vc_ParamLimits

0x4147,	// (0x00018073) form_field_data_pane_vc

0x4162,	// (0x0001808e) form_field_data_pane_vc_cp2

0x416a,	// (0x00018096) form_field_data_wide_pane_vc_ParamLimits

0x416a,	// (0x00018096) form_field_data_wide_pane_vc

0x4184,	// (0x000180b0) form_field_data_wide_pane_vc_cp2

0x418c,	// (0x000180b8) form_field_popup_pane_vc_ParamLimits

0x418c,	// (0x000180b8) form_field_popup_pane_vc

0x41a7,	// (0x000180d3) form_field_popup_wide_pane_vc_ParamLimits

0x41a7,	// (0x000180d3) form_field_popup_wide_pane_vc

0x41c1,	// (0x000180ed) form_field_slider_pane_vc_ParamLimits

0x41c1,	// (0x000180ed) form_field_slider_pane_vc

0x41d4,	// (0x00018100) form_field_slider_wide_pane_vc_ParamLimits

0x41d4,	// (0x00018100) form_field_slider_wide_pane_vc

0xb7bf,	// (0x0001f6eb) grid_touch_1_pane_ParamLimits

0xb7bf,	// (0x0001f6eb) grid_touch_1_pane

0xb7d3,	// (0x0001f6ff) grid_touch_2_pane_ParamLimits

0xb7d3,	// (0x0001f6ff) grid_touch_2_pane

0x42a4,	// (0x000181d0) touch_pane_g1_ParamLimits

0x42a4,	// (0x000181d0) touch_pane_g1

0x420d,	// (0x00018139) cell_app_pane_cp_wide_ParamLimits

0x420d,	// (0x00018139) cell_app_pane_cp_wide

0x421e,	// (0x0001814a) grid_popup_fast_wide_pane_ParamLimits

0x421e,	// (0x0001814a) grid_popup_fast_wide_pane

0x4232,	// (0x0001815e) scroll_pane_cp19_ParamLimits

0x4232,	// (0x0001815e) scroll_pane_cp19

0xc241,	// (0x0002016d) bg_popup_window_pane_cp20

0x4246,	// (0x00018172) listscroll_popup_fast_wide_pane

0xe7bd,	// (0x000226e9) grid_indicator_nsta_pane

0x424e,	// (0x0001817a) clock_nsta_pane_g1

0x4257,	// (0x00018183) clock_nsta_pane_t1

0xb7ff,	// (0x0001f72b) cell_indicator_nsta_pane_ParamLimits

0xb7ff,	// (0x0001f72b) cell_indicator_nsta_pane

0x42a4,	// (0x000181d0) cell_indicator_nsta_pane_g1

0xb816,	// (0x0001f742) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x000239d8) cell_indicator_nsta_pane_g

0x42bf,	// (0x000181eb) clock_nsta_pane_cp

0x42c8,	// (0x000181f4) indicator_nsta_pane_cp

0x42d0,	// (0x000181fc) nsta_clock_indic_pane_g1

0xc2f3,	// (0x0002021f) grid_indicator_pane

0xe4b3,	// (0x000223df) scroll_pane_cp29

0xe611,	// (0x0002253d) indicator_nsta_pane_cp2_ParamLimits

0xe611,	// (0x0002253d) indicator_nsta_pane_cp2

0xc29d,	// (0x000201c9) main_apps_wheel_pane

0x20fc,	// (0x00016028) form_midp_field_text_pane_ParamLimits

0x224b,	// (0x00016177) scroll_bar_cp050_ParamLimits

0x4320,	// (0x0001824c) cell_indicator_pane_ParamLimits

0x4320,	// (0x0001824c) cell_indicator_pane

0x4338,	// (0x00018264) cell_indicator_pane_g1

0xb823,	// (0x0001f74f) grid_wheel_folder_pane_ParamLimits

0xb823,	// (0x0001f74f) grid_wheel_folder_pane

0xb831,	// (0x0001f75d) list_wheel_apps_pane_ParamLimits

0xb831,	// (0x0001f75d) list_wheel_apps_pane

0xb83f,	// (0x0001f76b) main_apps_wheel_pane_g1_ParamLimits

0xb83f,	// (0x0001f76b) main_apps_wheel_pane_g1

0xb84f,	// (0x0001f77b) main_apps_wheel_pane_g2_ParamLimits

0xb84f,	// (0x0001f77b) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x000239f4) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x000239f4) main_apps_wheel_pane_g

0xb85f,	// (0x0001f78b) main_apps_wheel_pane_t1_ParamLimits

0xb85f,	// (0x0001f78b) main_apps_wheel_pane_t1

0xb877,	// (0x0001f7a3) list_wheel_apps_pane_g1

0xb87f,	// (0x0001f7ab) list_wheel_apps_pane_g2

0xb887,	// (0x0001f7b3) list_wheel_apps_pane_g3

0xb88f,	// (0x0001f7bb) list_wheel_apps_pane_g4

0xb897,	// (0x0001f7c3) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x000239f9) list_wheel_apps_pane_g

0x1349,	// (0x00015275) navi_icon_text_pane

0xaea0,	// (0x0001edcc) aid_fill_nsta

0xb8b4,	// (0x0001f7e0) navi_icon_text_pane_g1

0xb8c0,	// (0x0001f7ec) navi_icon_text_pane_t1

0x11d4,	// (0x00015100) list_set_graphic_pane_t1_ParamLimits

0x11d4,	// (0x00015100) list_set_graphic_pane_t1

0x29b0,	// (0x000168dc) popup_midp_note_alarm_window_t6_ParamLimits

0x29b0,	// (0x000168dc) popup_midp_note_alarm_window_t6

0x29c2,	// (0x000168ee) popup_midp_note_alarm_window_t7_ParamLimits

0x29c2,	// (0x000168ee) popup_midp_note_alarm_window_t7

0x29d4,	// (0x00016900) popup_midp_note_alarm_window_t8_ParamLimits

0x29d4,	// (0x00016900) popup_midp_note_alarm_window_t8

0x29e6,	// (0x00016912) popup_midp_note_alarm_window_t9_ParamLimits

0x29e6,	// (0x00016912) popup_midp_note_alarm_window_t9

0x29f8,	// (0x00016924) popup_midp_note_alarm_window_t10_ParamLimits

0x29f8,	// (0x00016924) popup_midp_note_alarm_window_t10

0x2a0a,	// (0x00016936) popup_midp_note_alarm_window_t11_ParamLimits

0x2a0a,	// (0x00016936) popup_midp_note_alarm_window_t11

0x2a1c,	// (0x00016948) scroll_pane_cp17_ParamLimits

0x2a1c,	// (0x00016948) scroll_pane_cp17

0xeab3,	// (0x000229df) volume_small_pane_cp_g1

0xecc0,	// (0x00022bec) volume_small_pane_cp_g2

0xecc9,	// (0x00022bf5) volume_small_pane_cp_g3

0xecd2,	// (0x00022bfe) volume_small_pane_cp_g4

0xecdb,	// (0x00022c07) volume_small_pane_cp_g5

0xece4,	// (0x00022c10) volume_small_pane_cp_g6

0xeced,	// (0x00022c19) volume_small_pane_cp_g7

0xecf6,	// (0x00022c22) volume_small_pane_cp_g8

0xecff,	// (0x00022c2b) volume_small_pane_cp_g9

0xed08,	// (0x00022c34) volume_small_pane_cp_g10

0x159f,	// (0x000154cb) midp_ticker_pane_g1_ParamLimits

0x15ab,	// (0x000154d7) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002367f) midp_ticker_pane_g_ParamLimits

0xadae,	// (0x0001ecda) midp_ticker_pane_t1_ParamLimits

0xaec4,	// (0x0001edf0) aid_fill_nsta_2

0x2237,	// (0x00016163) list_form2_midp_pane

0x33fd,	// (0x00017329) midp_editing_number_pane_ParamLimits

0x340c,	// (0x00017338) midp_ticker_pane_ParamLimits

0x442b,	// (0x00018357) form2_midp_field_pane

0x444f,	// (0x0001837b) scroll_pane_cp51

0x446f,	// (0x0001839b) form2_midp_button_pane_ParamLimits

0x446f,	// (0x0001839b) form2_midp_button_pane

0x4481,	// (0x000183ad) form2_midp_content_pane_ParamLimits

0x4481,	// (0x000183ad) form2_midp_content_pane

0x449b,	// (0x000183c7) form2_midp_field_choice_group_pane

0x44a3,	// (0x000183cf) form2_midp_field_pane_g1

0x44ab,	// (0x000183d7) form2_midp_field_pane_g2

0x44b3,	// (0x000183df) form2_midp_field_pane_g3

0x44bb,	// (0x000183e7) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00023a1e) form2_midp_field_pane_g

0x44c3,	// (0x000183ef) form2_midp_gauge_slider_pane

0x44cb,	// (0x000183f7) form2_midp_gauge_wait_pane

0x44d3,	// (0x000183ff) form2_midp_image_pane_ParamLimits

0x44d3,	// (0x000183ff) form2_midp_image_pane

0x44ee,	// (0x0001841a) form2_midp_label_pane_ParamLimits

0x44ee,	// (0x0001841a) form2_midp_label_pane

0xb8ee,	// (0x0001f81a) form2_midp_label_pane_cp_ParamLimits

0xb8ee,	// (0x0001f81a) form2_midp_label_pane_cp

0x452e,	// (0x0001845a) form2_midp_string_pane_ParamLimits

0x452e,	// (0x0001845a) form2_midp_string_pane

0x4540,	// (0x0001846c) form2_midp_text_pane_ParamLimits

0x4540,	// (0x0001846c) form2_midp_text_pane

0x4561,	// (0x0001848d) form2_midp_time_pane

0x4571,	// (0x0001849d) input_focus_pane_cp51_ParamLimits

0x4571,	// (0x0001849d) input_focus_pane_cp51

0x4589,	// (0x000184b5) form2_midp_label_pane_t1_ParamLimits

0x4589,	// (0x000184b5) form2_midp_label_pane_t1

0x45cf,	// (0x000184fb) form2_mdip_text_pane_t1_ParamLimits

0x45cf,	// (0x000184fb) form2_mdip_text_pane_t1

0x45ee,	// (0x0001851a) form2_midp_time_pane_t1

0x4609,	// (0x00018535) form2_midp_gauge_slider_pane_t1

0xb90f,	// (0x0001f83b) form2_midp_gauge_slider_pane_t2

0xb921,	// (0x0001f84d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00023a27) form2_midp_gauge_slider_pane_t

0x463f,	// (0x0001856b) form2_midp_slider_pane

0x464b,	// (0x00018577) form2_midp_gauge_wait_pane_t1

0x4659,	// (0x00018585) form2_midp_wait_pane_ParamLimits

0x4659,	// (0x00018585) form2_midp_wait_pane

0x1f33,	// (0x00015e5f) list_single_2graphic_pane_cp4_ParamLimits

0x1f33,	// (0x00015e5f) list_single_2graphic_pane_cp4

0xb933,	// (0x0001f85f) list_single_midp_graphic_pane_cp_ParamLimits

0xb933,	// (0x0001f85f) list_single_midp_graphic_pane_cp

0xc241,	// (0x0002016d) list_highlight_pane_cp20

0x469d,	// (0x000185c9) list_single_2graphic_pane_g1_cp4

0x3908,	// (0x00017834) list_single_2graphic_pane_g2_cp4

0x46a5,	// (0x000185d1) list_single_2graphic_pane_t1_cp4

0xc29d,	// (0x000201c9) list_highlight_pane_cp21

0x46b4,	// (0x000185e0) list_single_midp_graphic_pane_g4_cp

0x46c3,	// (0x000185ef) list_single_midp_graphic_pane_t1_cp

0xb954,	// (0x0001f880) form2_mdip_string_pane_t1_ParamLimits

0xb954,	// (0x0001f880) form2_mdip_string_pane_t1

0xc241,	// (0x0002016d) bg_wml_button_pane_cp2

0xc237,	// (0x00020163) form2_midp_image_pane_g1

0xc89c,	// (0x000207c8) list_double_large_graphic_pane_g5_ParamLimits

0xc89c,	// (0x000207c8) list_double_large_graphic_pane_g5

0xad0a,	// (0x0001ec36) midp_form_pane_ParamLimits

0xc29d,	// (0x000201c9) main_apps_wheel_pane_ParamLimits

0x95bd,	// (0x0001d4e9) popup_preview_window_ParamLimits

0x95bd,	// (0x0001d4e9) popup_preview_window

0xe907,	// (0x00022833) popup_touch_info_window_ParamLimits

0xe907,	// (0x00022833) popup_touch_info_window

0xe929,	// (0x00022855) popup_touch_menu_window_ParamLimits

0xe929,	// (0x00022855) popup_touch_menu_window

0xc22d,	// (0x00020159) bg_popup_sub_pane_cp6

0x4774,	// (0x000186a0) list_touch_menu_pane

0x477c,	// (0x000186a8) list_single_touch_menu_pane_ParamLimits

0x477c,	// (0x000186a8) list_single_touch_menu_pane

0x4794,	// (0x000186c0) list_single_touch_menu_pane_t1

0xc29d,	// (0x000201c9) bg_popup_sub_pane_cp7_ParamLimits

0xc29d,	// (0x000201c9) bg_popup_sub_pane_cp7

0x47a2,	// (0x000186ce) heading_sub_pane

0x47aa,	// (0x000186d6) list_touch_info_pane_ParamLimits

0x47aa,	// (0x000186d6) list_touch_info_pane

0x47b9,	// (0x000186e5) list_single_touch_info_pane_ParamLimits

0x47b9,	// (0x000186e5) list_single_touch_info_pane

0x47cb,	// (0x000186f7) list_single_touch_info_pane_t1

0x47d9,	// (0x00018705) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00023a35) list_single_touch_info_pane_t

0x14c1,	// (0x000153ed) bg_popup_heading_pane_cp

0x47e7,	// (0x00018713) heading_sub_pane_t1

0x1e7a,	// (0x00015da6) bg_popup_preview_window_pane_cp_ParamLimits

0x1e7a,	// (0x00015da6) bg_popup_preview_window_pane_cp

0x47a2,	// (0x000186ce) heading_preview_pane

0x47aa,	// (0x000186d6) list_preview_pane_ParamLimits

0x47aa,	// (0x000186d6) list_preview_pane

0x47f5,	// (0x00018721) popup_preview_window_g1

0x47b9,	// (0x000186e5) list_single_preview_pane_ParamLimits

0x47b9,	// (0x000186e5) list_single_preview_pane

0x47fd,	// (0x00018729) list_single_preview_pane_g1

0x4805,	// (0x00018731) list_single_preview_pane_t1

0x47cb,	// (0x000186f7) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00023a3a) list_single_preview_pane_t

0x4813,	// (0x0001873f) bg_popup_heading_pane_cp2_ParamLimits

0x4813,	// (0x0001873f) bg_popup_heading_pane_cp2

0x4829,	// (0x00018755) heading_preview_pane_g1

0x4831,	// (0x0001875d) heading_preview_pane_t1_ParamLimits

0x4831,	// (0x0001875d) heading_preview_pane_t1

0xc30a,	// (0x00020236) soft_indicator_pane_t1_ParamLimits

0xc868,	// (0x00020794) scroll_pane_ParamLimits

0xe3af,	// (0x000222db) scroll_sc2_left_pane

0xe3b8,	// (0x000222e4) scroll_sc2_right_pane

0xe3d7,	// (0x00022303) scroll_bg_pane_g1_ParamLimits

0xe3ec,	// (0x00022318) scroll_bg_pane_g2_ParamLimits

0xe404,	// (0x00022330) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002360a) scroll_bg_pane_g_ParamLimits

0xe3d7,	// (0x00022303) scroll_handle_pane_g1_ParamLimits

0xe426,	// (0x00022352) scroll_handle_pane_g2_ParamLimits

0xe404,	// (0x00022330) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00023611) scroll_handle_pane_g_ParamLimits

0xe82a,	// (0x00022756) popup_choice_list_window_ParamLimits

0xe82a,	// (0x00022756) popup_choice_list_window

0x1c72,	// (0x00015b9e) choice_list_pane

0x1d22,	// (0x00015c4e) cell_toolbar_pane_t1

0x1d4a,	// (0x00015c76) toolbar_button_pane_ParamLimits

0x2ee6,	// (0x00016e12) ai_gene_pane_1_t2_ParamLimits

0x2ee6,	// (0x00016e12) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00023834) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00023834) ai_gene_pane_1_t

0x484e,	// (0x0001877a) scroll_sc2_left_pane_g1

0x484e,	// (0x0001877a) scroll_sc2_right_pane_g1

0x17f0,	// (0x0001571c) bg_popup_sub_pane_cp10

0x4858,	// (0x00018784) list_choice_list_pane

0x34bc,	// (0x000173e8) list_single_choice_list_pane_ParamLimits

0x34bc,	// (0x000173e8) list_single_choice_list_pane

0x4871,	// (0x0001879d) list_single_choice_list_pane_g1

0xdfe5,	// (0x00021f11) list_single_choice_list_pane_t1_ParamLimits

0xdfe5,	// (0x00021f11) list_single_choice_list_pane_t1

0x4879,	// (0x000187a5) choice_list_pane_g1

0x4881,	// (0x000187ad) choice_list_pane_t1

0xc22d,	// (0x00020159) input_focus_pane_cp11

0xe1b3,	// (0x000220df) title_pane_stacon_g2_ParamLimits

0xe1b3,	// (0x000220df) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000235f0) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000235f0) title_pane_stacon_g

0x14c1,	// (0x000153ed) cursor_press_pane

0x923a,	// (0x0001d166) popup_fep_hwr_window_ParamLimits

0x923a,	// (0x0001d166) popup_fep_hwr_window

0xe894,	// (0x000227c0) popup_fep_vkb_window_ParamLimits

0xe894,	// (0x000227c0) popup_fep_vkb_window

0x488f,	// (0x000187bb) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00023a63) fep_vkb_side_pane_g_ParamLimits

0xed3c,	// (0x00022c68) fep_hwr_candidate_pane_ParamLimits

0xed3c,	// (0x00022c68) fep_hwr_candidate_pane

0xed66,	// (0x00022c92) fep_hwr_side_pane_ParamLimits

0xed66,	// (0x00022c92) fep_hwr_side_pane

0xed88,	// (0x00022cb4) fep_hwr_top_pane_ParamLimits

0xed88,	// (0x00022cb4) fep_hwr_top_pane

0xeda0,	// (0x00022ccc) fep_hwr_write_pane_ParamLimits

0xeda0,	// (0x00022ccc) fep_hwr_write_pane

0xfb37,	// (0x00023a63) fep_vkb_side_pane_g

0x4897,	// (0x000187c3) fep_hwr_top_pane_g1

0x48a9,	// (0x000187d5) fep_hwr_top_pane_g2

0xedda,	// (0x00022d06) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00023a3f) fep_hwr_top_pane_g

0xedef,	// (0x00022d1b) fep_hwr_top_text_pane

0x0e27,	// (0x00014d53) fep_hwr_top_text_pane_g1

0x48df,	// (0x0001880b) fep_hwr_top_text_pane_t1

0xee7e,	// (0x00022daa) fep_hwr_candidate_pane_g1

0x4b2a,	// (0x00018a56) fep_vkb_keypad_pane_g3_ParamLimits

0x4b2a,	// (0x00018a56) fep_vkb_keypad_pane_g3

0x4b56,	// (0x00018a82) fep_vkb_keypad_pane_g4_ParamLimits

0x4b56,	// (0x00018a82) fep_vkb_keypad_pane_g4

0x4bcd,	// (0x00018af9) fep_vkb_bottom_pane_g2_ParamLimits

0x4bcd,	// (0x00018af9) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00023a6a) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00023a6a) fep_vkb_bottom_pane_g

0x484e,	// (0x0001877a) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00023a74) cell_vkb_side_pane_g

0x4c58,	// (0x00018b84) cell_vkb_side_pane_t1

0x4c66,	// (0x00018b92) cell_vkb_side_pane_t1_copy1

0x484e,	// (0x0001877a) bg_fep_vkb_candidate_pane_g2

0x4daa,	// (0x00018cd6) cell_vkb_candidate_pane_ParamLimits

0x48ed,	// (0x00018819) aid_size_cell_vkb_ParamLimits

0x48ed,	// (0x00018819) aid_size_cell_vkb

0x4daa,	// (0x00018cd6) cell_vkb_candidate_pane

0xeea5,	// (0x00022dd1) bg_popup_fep_shadow_pane_g1

0xb9f0,	// (0x0001f91c) fep_vkb_bottom_pane_ParamLimits

0xb9f0,	// (0x0001f91c) fep_vkb_bottom_pane

0x49bc,	// (0x000188e8) fep_vkb_candidate_pane_ParamLimits

0x49bc,	// (0x000188e8) fep_vkb_candidate_pane

0xba1c,	// (0x0001f948) fep_vkb_keypad_pane_ParamLimits

0xba1c,	// (0x0001f948) fep_vkb_keypad_pane

0xba43,	// (0x0001f96f) fep_vkb_side_pane_ParamLimits

0xba43,	// (0x0001f96f) fep_vkb_side_pane

0xba7f,	// (0x0001f9ab) fep_vkb_top_pane_ParamLimits

0xba7f,	// (0x0001f9ab) fep_vkb_top_pane

0x4a83,	// (0x000189af) fep_vkb_top_pane_g1_ParamLimits

0x4a83,	// (0x000189af) fep_vkb_top_pane_g1

0x4a92,	// (0x000189be) fep_vkb_top_pane_g2_ParamLimits

0x4a92,	// (0x000189be) fep_vkb_top_pane_g2

0x4aa1,	// (0x000189cd) fep_vkb_top_pane_g3_ParamLimits

0x4aa1,	// (0x000189cd) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00023a5a) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00023a5a) fep_vkb_top_pane_g

0x4abf,	// (0x000189eb) fep_vkb_top_text_pane_ParamLimits

0x4abf,	// (0x000189eb) fep_vkb_top_text_pane

0xbabb,	// (0x0001f9e7) fep_vkb_side_pane_g1_ParamLimits

0xbabb,	// (0x0001f9e7) fep_vkb_side_pane_g1

0x4b19,	// (0x00018a45) grid_vkb_side_pane_ParamLimits

0x4b19,	// (0x00018a45) grid_vkb_side_pane

0xeead,	// (0x00022dd9) bg_popup_fep_shadow_pane_g2

0xeeb6,	// (0x00022de2) bg_popup_fep_shadow_pane_g3

0xeebe,	// (0x00022dea) bg_popup_fep_shadow_pane_g4

0xeec7,	// (0x00022df3) bg_popup_fep_shadow_pane_g5

0xeed1,	// (0x00022dfd) bg_popup_fep_shadow_pane_g6

0xeed9,	// (0x00022e05) bg_popup_fep_shadow_pane_g7

0xded8,	// (0x00021e04) bg_popup_fep_shadow_pane_g8

0x4b78,	// (0x00018aa4) grid_vkb_keypad_number_pane_ParamLimits

0x4b78,	// (0x00018aa4) grid_vkb_keypad_number_pane

0x4b8c,	// (0x00018ab8) grid_vkb_keypad_pane_ParamLimits

0x4b8c,	// (0x00018ab8) grid_vkb_keypad_pane

0x4bb2,	// (0x00018ade) fep_vkb_bottom_pane_g1_ParamLimits

0x4bb2,	// (0x00018ade) fep_vkb_bottom_pane_g1

0x4bdb,	// (0x00018b07) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4bdb,	// (0x00018b07) grid_vkb_keypad_bottom_left_pane

0x4bf0,	// (0x00018b1c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4bf0,	// (0x00018b1c) grid_vkb_keypad_bottom_right_pane

0x4c05,	// (0x00018b31) fep_vkb_top_text_pane_g1

0xbb02,	// (0x0001fa2e) fep_vkb_top_text_pane_t1

0xbb14,	// (0x0001fa40) cell_vkb_side_pane_ParamLimits

0xbb14,	// (0x0001fa40) cell_vkb_side_pane

0x484e,	// (0x0001877a) cell_vkb_side_pane_g1

0x4c74,	// (0x00018ba0) cell_vkb_keypad_pane_ParamLimits

0x4c74,	// (0x00018ba0) cell_vkb_keypad_pane

0x4d01,	// (0x00018c2d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00023a87) bg_popup_fep_shadow_pane_g

0xeeeb,	// (0x00022e17) cell_hwr_side_pane_g1

0xeeeb,	// (0x00022e17) cell_hwr_side_pane_g2

0x4d0b,	// (0x00018c37) cell_vkb_keypad_pane_t1

0xbb2a,	// (0x0001fa56) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbb2a,	// (0x0001fa56) cell_vkb_keypad_bottom_left_pane

0xbb3f,	// (0x0001fa6b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbb3f,	// (0x0001fa6b) cell_vkb_keypad_bottom_right_pane

0x484e,	// (0x0001877a) cell_vkb_keypad_bottom_left_pane_g1

0x484e,	// (0x0001877a) cell_vkb_keypad_bottom_right_pane_g1

0x4d6f,	// (0x00018c9b) cell_vkb_keypad_number_pane_ParamLimits

0x4d6f,	// (0x00018c9b) cell_vkb_keypad_number_pane

0x4d8e,	// (0x00018cba) cell_vkb_keypad_number_pane_g1

0x4d98,	// (0x00018cc4) cell_vkb_keypad_number_pane_g2

0x4da1,	// (0x00018ccd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00023a79) cell_vkb_keypad_number_pane_g

0x4d0b,	// (0x00018c37) cell_vkb_keypad_number_pane_t1

0x4dcb,	// (0x00018cf7) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00023a9a) cell_hwr_side_pane_g

0x4de4,	// (0x00018d10) cell_hwr_side_pane_t1

0xeef5,	// (0x00022e21) cell_hwr_side_pane_t1_copy1

0xef03,	// (0x00022e2f) cell_hwr_candidate_pane_g1

0xef32,	// (0x00022e5e) cell_hwr_candidate_pane_t1

0x484e,	// (0x0001877a) cell_vkb_candidate_pane_g2

0x4e28,	// (0x00018d54) cell_vkb_candidate_pane_t1

0xebfb,	// (0x00022b27) bg_popup_fep_shadow_pane_ParamLimits

0xebfb,	// (0x00022b27) bg_popup_fep_shadow_pane

0xedba,	// (0x00022ce6) bg_fep_hwr_top_pane_g4

0x48bb,	// (0x000187e7) bg_hwr_side_pane_g1_ParamLimits

0x48bb,	// (0x000187e7) bg_hwr_side_pane_g1

0x9a94,	// (0x0001d9c0) cell_hwr_side_pane_ParamLimits

0x9a94,	// (0x0001d9c0) cell_hwr_side_pane

0xee04,	// (0x00022d30) fep_hwr_write_pane_g1_ParamLimits

0xee04,	// (0x00022d30) fep_hwr_write_pane_g1

0xee11,	// (0x00022d3d) fep_hwr_write_pane_g2_ParamLimits

0xee11,	// (0x00022d3d) fep_hwr_write_pane_g2

0xee1e,	// (0x00022d4a) fep_hwr_write_pane_g3_ParamLimits

0xee1e,	// (0x00022d4a) fep_hwr_write_pane_g3

0x9ab4,	// (0x0001d9e0) fep_hwr_write_pane_g4_ParamLimits

0x9ab4,	// (0x0001d9e0) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00023a46) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00023a46) fep_hwr_write_pane_g

0xedba,	// (0x00022ce6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xedba,	// (0x00022ce6) bg_fep_hwr_candidate_pane_g2

0xee2c,	// (0x00022d58) cell_hwr_candidate_pane_ParamLimits

0xee2c,	// (0x00022d58) cell_hwr_candidate_pane

0xee7e,	// (0x00022daa) fep_hwr_candidate_pane_g1_ParamLimits

0x491b,	// (0x00018847) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x491b,	// (0x00018847) bg_popup_fep_shadow_pane_cp2

0x4ab1,	// (0x000189dd) fep_vkb_top_pane_g4_ParamLimits

0x4ab1,	// (0x000189dd) fep_vkb_top_pane_g4

0x4af7,	// (0x00018a23) fep_vkb_side_pane_g2_ParamLimits

0x4af7,	// (0x00018a23) fep_vkb_side_pane_g2

0xa79e,	// (0x0001e6ca) list_setting_pane_t4_ParamLimits

0xa79e,	// (0x0001e6ca) list_setting_pane_t4

0xa81a,	// (0x0001e746) list_setting_number_pane_t5_ParamLimits

0xa81a,	// (0x0001e746) list_setting_number_pane_t5

0x0e5e,	// (0x00014d8a) list_double_heading_pane_cp2_ParamLimits

0x0e5e,	// (0x00014d8a) list_double_heading_pane_cp2

0x4e36,	// (0x00018d62) list_double_heading_pane_g1_cp2_ParamLimits

0x4e36,	// (0x00018d62) list_double_heading_pane_g1_cp2

0x4e42,	// (0x00018d6e) list_double_heading_pane_g2_cp2_ParamLimits

0x4e42,	// (0x00018d6e) list_double_heading_pane_g2_cp2

0x4e56,	// (0x00018d82) list_double_heading_pane_t1_cp2_ParamLimits

0x4e56,	// (0x00018d82) list_double_heading_pane_t1_cp2

0x4e6c,	// (0x00018d98) list_double_heading_pane_t2_cp2_ParamLimits

0x4e6c,	// (0x00018d98) list_double_heading_pane_t2_cp2

0xc225,	// (0x00020151) aid_value_unit2

0xdd9a,	// (0x00021cc6) popup_preview_fixed_window

0xc3ea,	// (0x00020316) bg_popup_preview_window_pane_cp02

0x4e7e,	// (0x00018daa) list_preview_fixed_pane

0x4ec4,	// (0x00018df0) list_empty_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_empty_pane_fp

0x4ec4,	// (0x00018df0) list_single_cale_day_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_single_cale_day_pane_fp

0x4ec4,	// (0x00018df0) list_single_graphic_heading_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_single_graphic_heading_pane_fp

0x4ec4,	// (0x00018df0) list_single_graphic_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_single_graphic_pane_fp

0x4ec4,	// (0x00018df0) list_single_heading_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_single_heading_pane_fp

0x4ec4,	// (0x00018df0) list_single_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_single_pane_fp

0x4edd,	// (0x00018e09) list_single_pane_fp_g1_ParamLimits

0x4edd,	// (0x00018e09) list_single_pane_fp_g1

0x4e36,	// (0x00018d62) list_single_pane_fp_g2_ParamLimits

0x4e36,	// (0x00018d62) list_single_pane_fp_g2

0x4e42,	// (0x00018d6e) list_single_pane_fp_g3_ParamLimits

0x4e42,	// (0x00018d6e) list_single_pane_fp_g3

0x4ee9,	// (0x00018e15) list_single_pane_fp_g4_ParamLimits

0x4ee9,	// (0x00018e15) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00023aad) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00023aad) list_single_pane_fp_g

0x4ef5,	// (0x00018e21) list_single_pane_fp_t1_ParamLimits

0x4ef5,	// (0x00018e21) list_single_pane_fp_t1

0x4f0c,	// (0x00018e38) list_single_graphic_pane_fp_g1_ParamLimits

0x4f0c,	// (0x00018e38) list_single_graphic_pane_fp_g1

0x4edd,	// (0x00018e09) list_single_graphic_pane_fp_g2_ParamLimits

0x4edd,	// (0x00018e09) list_single_graphic_pane_fp_g2

0x4e36,	// (0x00018d62) list_single_graphic_pane_fp_g3_ParamLimits

0x4e36,	// (0x00018d62) list_single_graphic_pane_fp_g3

0x4e42,	// (0x00018d6e) list_single_graphic_pane_fp_g4_ParamLimits

0x4e42,	// (0x00018d6e) list_single_graphic_pane_fp_g4

0x4ee9,	// (0x00018e15) list_single_graphic_pane_fp_g5_ParamLimits

0x4ee9,	// (0x00018e15) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00023ab6) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00023ab6) list_single_graphic_pane_fp_g

0x4f18,	// (0x00018e44) list_single_graphic_pane_fp_t1_ParamLimits

0x4f18,	// (0x00018e44) list_single_graphic_pane_fp_t1

0x4f0c,	// (0x00018e38) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4f0c,	// (0x00018e38) list_single_graphic_heading_pane_fp_g1

0x4edd,	// (0x00018e09) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4edd,	// (0x00018e09) list_single_graphic_heading_pane_fp_g2

0x4e36,	// (0x00018d62) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e36,	// (0x00018d62) list_single_graphic_heading_pane_fp_g3

0x4e42,	// (0x00018d6e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4e42,	// (0x00018d6e) list_single_graphic_heading_pane_fp_g4

0x4ee9,	// (0x00018e15) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4ee9,	// (0x00018e15) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00023ab6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00023ab6) list_single_graphic_heading_pane_fp_g

0x4f2e,	// (0x00018e5a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4f2e,	// (0x00018e5a) list_single_graphic_heading_pane_fp_t1

0x4f44,	// (0x00018e70) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4f44,	// (0x00018e70) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00023ac1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00023ac1) list_single_graphic_heading_pane_fp_t

0x4f56,	// (0x00018e82) list_single_cale_day_pane_fp_g1_ParamLimits

0x4f56,	// (0x00018e82) list_single_cale_day_pane_fp_g1

0x4f8e,	// (0x00018eba) list_single_cale_day_pane_fp_g2_ParamLimits

0x4f8e,	// (0x00018eba) list_single_cale_day_pane_fp_g2

0x4f9a,	// (0x00018ec6) list_single_cale_day_pane_fp_g3_ParamLimits

0x4f9a,	// (0x00018ec6) list_single_cale_day_pane_fp_g3

0x4fc2,	// (0x00018eee) list_single_cale_day_pane_fp_g4_ParamLimits

0x4fc2,	// (0x00018eee) list_single_cale_day_pane_fp_g4

0x4fe6,	// (0x00018f12) list_single_cale_day_pane_fp_g5_ParamLimits

0x4fe6,	// (0x00018f12) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00023ac6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00023ac6) list_single_cale_day_pane_fp_g

0x500a,	// (0x00018f36) list_single_cale_day_pane_fp_t1_ParamLimits

0x500a,	// (0x00018f36) list_single_cale_day_pane_fp_t1

0x5030,	// (0x00018f5c) list_single_cale_day_pane_fp_t2_ParamLimits

0x5030,	// (0x00018f5c) list_single_cale_day_pane_fp_t2

0x5049,	// (0x00018f75) list_single_cale_day_pane_fp_t3_ParamLimits

0x5049,	// (0x00018f75) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00023ad1) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00023ad1) list_single_cale_day_pane_fp_t

0x4edd,	// (0x00018e09) list_empty_pane_fp_g1_ParamLimits

0x4edd,	// (0x00018e09) list_empty_pane_fp_g1

0x5062,	// (0x00018f8e) list_empty_pane_fp_t1

0x5070,	// (0x00018f9c) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00023ad8) list_empty_pane_fp_t

0x4edd,	// (0x00018e09) list_single_heading_pane_fp_g1_ParamLimits

0x4edd,	// (0x00018e09) list_single_heading_pane_fp_g1

0x4e36,	// (0x00018d62) list_single_heading_pane_fp_g2_ParamLimits

0x4e36,	// (0x00018d62) list_single_heading_pane_fp_g2

0x4e42,	// (0x00018d6e) list_single_heading_pane_fp_g3_ParamLimits

0x4e42,	// (0x00018d6e) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00023add) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00023add) list_single_heading_pane_fp_g

0x507e,	// (0x00018faa) list_single_heading_pane_fp_t1_ParamLimits

0x507e,	// (0x00018faa) list_single_heading_pane_fp_t1

0x5090,	// (0x00018fbc) list_single_heading_pane_fp_t2_ParamLimits

0x5090,	// (0x00018fbc) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00023ae4) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00023ae4) list_single_heading_pane_fp_t

0xdffa,	// (0x00021f26) aid_size_cell_fast

0xc3cd,	// (0x000202f9) soft_indicator_pane_cp1_t1

0xe037,	// (0x00021f63) cell_app_pane_cp2_ParamLimits

0xe037,	// (0x00021f63) cell_app_pane_cp2

0xed25,	// (0x00022c51) fep_hwr_candidate_drop_down_list_pane

0xee98,	// (0x00022dc4) fep_hwr_candidate_pane_g3_ParamLimits

0xee98,	// (0x00022dc4) fep_hwr_candidate_pane_g3

0xc9a1,	// (0x000208cd) fep_hwr_candidate_pane_g4_ParamLimits

0xc9a1,	// (0x000208cd) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00023a53) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00023a53) fep_hwr_candidate_pane_g

0x49ab,	// (0x000188d7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x49ab,	// (0x000188d7) fep_vkb_candidate_drop_down_list_pane

0x4dd3,	// (0x00018cff) fep_vkb_candidate_pane_g3

0x4ddb,	// (0x00018d07) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00023a80) fep_vkb_candidate_pane_g

0xef03,	// (0x00022e2f) cell_hwr_candidate_pane_g1_ParamLimits

0xef11,	// (0x00022e3d) cell_hwr_candidate_pane_g3_ParamLimits

0xef11,	// (0x00022e3d) cell_hwr_candidate_pane_g3

0x57e5,	// (0x00019711) cell_hwr_candidate_pane_g4_ParamLimits

0x57e5,	// (0x00019711) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00023a9f) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00023a9f) cell_hwr_candidate_pane_g

0x4df2,	// (0x00018d1e) cell_vkb_candidate_pane_g3_ParamLimits

0x4df2,	// (0x00018d1e) cell_vkb_candidate_pane_g3

0x4e0d,	// (0x00018d39) cell_vkb_candidate_pane_g4_ParamLimits

0x4e0d,	// (0x00018d39) cell_vkb_candidate_pane_g4

0x50a6,	// (0x00018fd2) cell_app_pane_cp2_g1_ParamLimits

0x50a6,	// (0x00018fd2) cell_app_pane_cp2_g1

0x50c4,	// (0x00018ff0) cell_app_pane_cp2_g2_ParamLimits

0x50c4,	// (0x00018ff0) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00023ae9) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00023ae9) cell_app_pane_cp2_g

0x50d0,	// (0x00018ffc) cell_app_pane_cp2_t1_ParamLimits

0x50d0,	// (0x00018ffc) cell_app_pane_cp2_t1

0xc96f,	// (0x0002089b) grid_highlight_pane_cp1_ParamLimits

0xc96f,	// (0x0002089b) grid_highlight_pane_cp1

0xef50,	// (0x00022e7c) cell_hwr_candidate_pane_cp1_ParamLimits

0xef50,	// (0x00022e7c) cell_hwr_candidate_pane_cp1

0xef03,	// (0x00022e2f) fep_hwr_candidate_drop_down_list_pane_g1

0xef74,	// (0x00022ea0) fep_hwr_candidate_drop_down_list_pane_g2

0xef81,	// (0x00022ead) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00023aee) fep_hwr_candidate_drop_down_list_pane_g

0xef8e,	// (0x00022eba) fep_hwr_candidate_drop_down_list_scroll_pane

0xef97,	// (0x00022ec3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xef97,	// (0x00022ec3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xefa4,	// (0x00022ed0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xefa4,	// (0x00022ed0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xefb1,	// (0x00022edd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xefb1,	// (0x00022edd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xefbe,	// (0x00022eea) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xefbe,	// (0x00022eea) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xefd9,	// (0x00022f05) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xefd9,	// (0x00022f05) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xeff4,	// (0x00022f20) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xeff4,	// (0x00022f20) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf00f,	// (0x00022f3b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf00f,	// (0x00022f3b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf02a,	// (0x00022f56) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf02a,	// (0x00022f56) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00023af5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00023af5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x50e2,	// (0x0001900e) cell_vkb_candidate_pane_cp1_ParamLimits

0x50e2,	// (0x0001900e) cell_vkb_candidate_pane_cp1

0x4ab1,	// (0x000189dd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4ab1,	// (0x000189dd) fep_vkb_candidate_drop_down_list_pane_g1

0x5108,	// (0x00019034) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5108,	// (0x00019034) fep_vkb_candidate_drop_down_list_pane_g2

0x5115,	// (0x00019041) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5115,	// (0x00019041) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00023b06) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00023b06) fep_vkb_candidate_drop_down_list_pane_g

0x5122,	// (0x0001904e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5122,	// (0x0001904e) fep_vkb_candidate_drop_down_list_scroll_pane

0x512f,	// (0x0001905b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x512f,	// (0x0001905b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x513c,	// (0x00019068) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x513c,	// (0x00019068) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5148,	// (0x00019074) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5148,	// (0x00019074) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5154,	// (0x00019080) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5154,	// (0x00019080) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5175,	// (0x000190a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5175,	// (0x000190a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5196,	// (0x000190c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5196,	// (0x000190c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x51b7,	// (0x000190e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x51b7,	// (0x000190e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x51d8,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x51d8,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00023b0d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00023b0d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa08c,	// (0x0001dfb8) title_pane_g1_ParamLimits

0xa09f,	// (0x0001dfcb) title_pane_g2_ParamLimits

0xf54e,	// (0x0002347a) title_pane_g_ParamLimits

0x0e17,	// (0x00014d43) aid_call2_pane

0x0e1f,	// (0x00014d4b) aid_call_pane

0x0e27,	// (0x00014d53) popup_clock_analogue_window_g1

0x0e27,	// (0x00014d53) popup_clock_analogue_window_g2

0xe510,	// (0x0002243c) popup_clock_analogue_window_g3

0xe519,	// (0x00022445) popup_clock_analogue_window_g4

0xc237,	// (0x00020163) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002361f) popup_clock_analogue_window_g

0xe521,	// (0x0002244d) popup_clock_analogue_window_t1

0xe52f,	// (0x0002245b) clock_digital_number_pane_ParamLimits

0xe52f,	// (0x0002245b) clock_digital_number_pane

0xe53b,	// (0x00022467) clock_digital_number_pane_cp02_ParamLimits

0xe53b,	// (0x00022467) clock_digital_number_pane_cp02

0xe547,	// (0x00022473) clock_digital_number_pane_cp03_ParamLimits

0xe547,	// (0x00022473) clock_digital_number_pane_cp03

0xe553,	// (0x0002247f) clock_digital_number_pane_cp04_ParamLimits

0xe553,	// (0x0002247f) clock_digital_number_pane_cp04

0xe55f,	// (0x0002248b) clock_digital_separator_pane_ParamLimits

0xe55f,	// (0x0002248b) clock_digital_separator_pane

0xe56b,	// (0x00022497) popup_clock_digital_window_t1_ParamLimits

0xe56b,	// (0x00022497) popup_clock_digital_window_t1

0xc237,	// (0x00020163) clock_digital_number_pane_g1

0xc237,	// (0x00020163) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002362a) clock_digital_number_pane_g

0xc237,	// (0x00020163) clock_digital_separator_pane_g1

0xc237,	// (0x00020163) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002362a) clock_digital_separator_pane_g

0xaea0,	// (0x0001edcc) aid_fill_nsta_ParamLimits

0xafd8,	// (0x0001ef04) indicator_nsta_pane_ParamLimits

0x1b0b,	// (0x00015a37) popup_clock_analogue_window

0x1b0b,	// (0x00015a37) popup_clock_digital_window

0xe7bd,	// (0x000226e9) grid_indicator_nsta_pane_ParamLimits

0x4265,	// (0x00018191) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x000239d3) clock_nsta_pane_t

0xe35d,	// (0x00022289) aid_size_max_handle

0x8ff0,	// (0x0001cf1c) aid_size_min_handle

0x14c1,	// (0x000153ed) editor_scroll_pane

0x51f3,	// (0x0001911f) ex_editor_pane

0xdfc0,	// (0x00021eec) scroll_pane_cp13

0xc894,	// (0x000207c0) scroll_pane_cp14

0x0e56,	// (0x00014d82) scroll_pane_cp36

0xab97,	// (0x0001eac3) list_single_graphic_hl_pane_cp2_ParamLimits

0xab97,	// (0x0001eac3) list_single_graphic_hl_pane_cp2

0xb673,	// (0x0001f59f) list_single_graphic_hl_pane_ParamLimits

0xb673,	// (0x0001f59f) list_single_graphic_hl_pane

0x51fb,	// (0x00019127) aid_size_min_hl_cp1

0x5204,	// (0x00019130) list_highlight_pane_cp34_ParamLimits

0x5204,	// (0x00019130) list_highlight_pane_cp34

0x5215,	// (0x00019141) list_single_graphic_hl_pane_g1_ParamLimits

0x5215,	// (0x00019141) list_single_graphic_hl_pane_g1

0xbb5a,	// (0x0001fa86) list_single_graphic_hl_pane_g2_ParamLimits

0xbb5a,	// (0x0001fa86) list_single_graphic_hl_pane_g2

0xbb5a,	// (0x0001fa86) list_single_graphic_hl_pane_g3_ParamLimits

0xbb5a,	// (0x0001fa86) list_single_graphic_hl_pane_g3

0x5288,	// (0x000191b4) list_single_graphic_hl_pane_g4_ParamLimits

0x5288,	// (0x000191b4) list_single_graphic_hl_pane_g4

0x5294,	// (0x000191c0) list_single_graphic_hl_pane_g5_ParamLimits

0x5294,	// (0x000191c0) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00023b1e) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00023b1e) list_single_graphic_hl_pane_g

0xbb66,	// (0x0001fa92) list_single_graphic_hl_pane_t1_ParamLimits

0xbb66,	// (0x0001fa92) list_single_graphic_hl_pane_t1

0x5258,	// (0x00019184) aid_size_min_hl_cp2

0x5261,	// (0x0001918d) list_highlight_pane_cp34_cp2_ParamLimits

0x5261,	// (0x0001918d) list_highlight_pane_cp34_cp2

0x5215,	// (0x00019141) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5215,	// (0x00019141) list_single_graphic_hl_pane_g1_cp2

0x526e,	// (0x0001919a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x526e,	// (0x0001919a) list_single_graphic_hl_pane_g2_cp2

0x527a,	// (0x000191a6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x527a,	// (0x000191a6) list_single_graphic_hl_pane_g3_cp2

0x5288,	// (0x000191b4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5288,	// (0x000191b4) list_single_graphic_hl_pane_g4_cp2

0x5294,	// (0x000191c0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5294,	// (0x000191c0) list_single_graphic_hl_pane_g5_cp2

0x904b,	// (0x0001cf77) control_pane_g4_ParamLimits

0x904b,	// (0x0001cf77) control_pane_g4

0x17f0,	// (0x0001571c) bg_popup_sub_pane_cp10_ParamLimits

0x4858,	// (0x00018784) list_choice_list_pane_ParamLimits

0x4867,	// (0x00018793) scroll_pane_cp23

0xc3ea,	// (0x00020316) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e7e,	// (0x00018daa) list_preview_fixed_pane_ParamLimits

0x4e94,	// (0x00018dc0) list_preview_fixed_pane_cp_ParamLimits

0x4e94,	// (0x00018dc0) list_preview_fixed_pane_cp

0x4ea0,	// (0x00018dcc) popup_preview_fixed_window_g1_ParamLimits

0x4ea0,	// (0x00018dcc) popup_preview_fixed_window_g1

0x4eac,	// (0x00018dd8) popup_preview_fixed_window_g2_ParamLimits

0x4eac,	// (0x00018dd8) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00023aa6) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00023aa6) popup_preview_fixed_window_g

0xe298,	// (0x000221c4) aid_navi_side_left_pane_ParamLimits

0xe2ad,	// (0x000221d9) aid_navi_side_right_pane_ParamLimits

0xe2c5,	// (0x000221f1) navi_icon_pane_stacon_ParamLimits

0xe2d9,	// (0x00022205) navi_navi_pane_stacon_ParamLimits

0xe2c5,	// (0x000221f1) navi_text_pane_stacon_ParamLimits

0xdc8b,	// (0x00021bb7) main_text_info_pane

0x52be,	// (0x000191ea) listscroll_text_info_pane

0x52c6,	// (0x000191f2) list_text_info_pane_ParamLimits

0x52c6,	// (0x000191f2) list_text_info_pane

0x52d5,	// (0x00019201) scroll_pane_cp24_ParamLimits

0x52d5,	// (0x00019201) scroll_pane_cp24

0xbb7c,	// (0x0001faa8) list_text_info_pane_t1_ParamLimits

0xbb7c,	// (0x0001faa8) list_text_info_pane_t1

0x919e,	// (0x0001d0ca) popup_fast_swap2_window_ParamLimits

0x919e,	// (0x0001d0ca) popup_fast_swap2_window

0x5318,	// (0x00019244) aid_size_cell_fast2

0xc22d,	// (0x00020159) bg_popup_window_pane_cp17

0x226b,	// (0x00016197) heading_pane_cp2

0xc619,	// (0x00020545) listscroll_fast2_pane

0x5322,	// (0x0001924e) grid_fast2_pane

0x532c,	// (0x00019258) listscroll_fast2_pane_g1

0x5336,	// (0x00019262) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00023b29) listscroll_fast2_pane_g

0xdfc0,	// (0x00021eec) scroll_pane_cp26

0x5340,	// (0x0001926c) cell_fast2_pane_ParamLimits

0x5340,	// (0x0001926c) cell_fast2_pane

0x5357,	// (0x00019283) cell_fast2_pane_g1

0x5360,	// (0x0001928c) cell_fast2_pane_g2

0x5369,	// (0x00019295) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00023b2e) cell_fast2_pane_g

0xc65b,	// (0x00020587) grid_highlight_pane_cp9

0xe81c,	// (0x00022748) main_eswt_pane_ParamLimits

0xe81c,	// (0x00022748) main_eswt_pane

0x52ea,	// (0x00019216) list_single_text_info_pane

0x5371,	// (0x0001929d) eswt_ctrl_button_pane

0x5371,	// (0x0001929d) eswt_ctrl_canvas_pane

0x5379,	// (0x000192a5) eswt_ctrl_combo_pane

0x5371,	// (0x0001929d) eswt_ctrl_default_pane

0x5371,	// (0x0001929d) eswt_ctrl_label_pane

0x5381,	// (0x000192ad) eswt_ctrl_wait_pane

0x5389,	// (0x000192b5) eswt_shell_pane

0xc22d,	// (0x00020159) listscroll_eswt_app_pane

0x53a9,	// (0x000192d5) popup_eswt_tasktip_window_ParamLimits

0x53a9,	// (0x000192d5) popup_eswt_tasktip_window

0x1e7a,	// (0x00015da6) bg_popup_window_pane_cp18

0x53ba,	// (0x000192e6) eswt_control_pane_g1_ParamLimits

0x53ba,	// (0x000192e6) eswt_control_pane_g1

0x53c7,	// (0x000192f3) eswt_control_pane_g2_ParamLimits

0x53c7,	// (0x000192f3) eswt_control_pane_g2

0x53d4,	// (0x00019300) eswt_control_pane_g3_ParamLimits

0x53d4,	// (0x00019300) eswt_control_pane_g3

0x53e1,	// (0x0001930d) eswt_control_pane_g4_ParamLimits

0x53e1,	// (0x0001930d) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00023b35) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00023b35) eswt_control_pane_g

0xc96f,	// (0x0002089b) bg_button_pane_ParamLimits

0xc96f,	// (0x0002089b) bg_button_pane

0xc670,	// (0x0002059c) common_borders_pane_copy2_ParamLimits

0xc670,	// (0x0002059c) common_borders_pane_copy2

0x53ee,	// (0x0001931a) control_button_pane_g1_ParamLimits

0x53ee,	// (0x0001931a) control_button_pane_g1

0x53fa,	// (0x00019326) control_button_pane_g2_ParamLimits

0x53fa,	// (0x00019326) control_button_pane_g2

0x5406,	// (0x00019332) control_button_pane_g3_ParamLimits

0x5406,	// (0x00019332) control_button_pane_g3

0x0002,

0xfc12,	// (0x00023b3e) control_button_pane_g_ParamLimits

0xfc12,	// (0x00023b3e) control_button_pane_g

0x541a,	// (0x00019346) control_button_pane_t1

0x5428,	// (0x00019354) control_button_pane_t2

0x0001,

0xfc19,	// (0x00023b45) control_button_pane_t

0x1d56,	// (0x00015c82) bg_button_pane_g1

0x1d66,	// (0x00015c92) bg_button_pane_g2

0x1d5e,	// (0x00015c8a) bg_button_pane_g3

0x1d76,	// (0x00015ca2) bg_button_pane_g4

0x1d6e,	// (0x00015c9a) bg_button_pane_g5

0x1d7e,	// (0x00015caa) bg_button_pane_g6

0x1d86,	// (0x00015cb2) bg_button_pane_g7

0x1d96,	// (0x00015cc2) bg_button_pane_g8

0x1d8e,	// (0x00015cba) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00023788) bg_button_pane_g

0x4813,	// (0x0001873f) common_borders_pane_ParamLimits

0x4813,	// (0x0001873f) common_borders_pane

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy1_ParamLimits

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy1

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy1_ParamLimits

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy1

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy1_ParamLimits

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy1

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy1_ParamLimits

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy1

0x484e,	// (0x0001877a) bg_eswt_ctrl_canvas_pane_g1

0x4813,	// (0x0001873f) common_borders_pane_cp2_ParamLimits

0x4813,	// (0x0001873f) common_borders_pane_cp2

0x4813,	// (0x0001873f) common_borders_pane_cp3_ParamLimits

0x4813,	// (0x0001873f) common_borders_pane_cp3

0x5436,	// (0x00019362) separator_horizontal_pane

0x543e,	// (0x0001936a) separator_vertical_pane

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy2_ParamLimits

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy2

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy2_ParamLimits

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy2

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy2_ParamLimits

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy2

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy2_ParamLimits

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy2

0xc22d,	// (0x00020159) common_borders_pane_cp4

0x5447,	// (0x00019373) separator_horizontal_pane_g1

0x5450,	// (0x0001937c) separator_horizontal_pane_g2

0x5459,	// (0x00019385) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00023b4a) separator_horizontal_pane_g

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy3_ParamLimits

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy3

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy3_ParamLimits

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy3

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy3_ParamLimits

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy3

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy3_ParamLimits

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy3

0xc22d,	// (0x00020159) common_borders_pane_cp5

0x5462,	// (0x0001938e) separator_vertical_pane_g1

0x546b,	// (0x00019397) separator_vertical_pane_g2

0x5474,	// (0x000193a0) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00023b51) separator_vertical_pane_g

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy4_ParamLimits

0x53ba,	// (0x000192e6) eswt_control_pane_g1_copy4

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy4_ParamLimits

0x53c7,	// (0x000192f3) eswt_control_pane_g2_copy4

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy4_ParamLimits

0x53d4,	// (0x00019300) eswt_control_pane_g3_copy4

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy4_ParamLimits

0x53e1,	// (0x0001930d) eswt_control_pane_g4_copy4

0xbb9e,	// (0x0001faca) eswt_ctrl_combo_button_pane

0xbba6,	// (0x0001fad2) eswt_ctrl_input_pane

0xbbae,	// (0x0001fada) popup_choice_list_window_cp70

0xbbb6,	// (0x0001fae2) eswt_ctrl_input_pane_t1

0xc22d,	// (0x00020159) input_focus_pane_cp70

0x4813,	// (0x0001873f) bg_button_pane_cp70_ParamLimits

0x4813,	// (0x0001873f) bg_button_pane_cp70

0xbbc4,	// (0x0001faf0) eswt_ctrl_combo_button_pane_g1

0x54ab,	// (0x000193d7) wait_bar_pane_cp70

0x1e7a,	// (0x00015da6) bg_popup_window_pane_cp70_ParamLimits

0x1e7a,	// (0x00015da6) bg_popup_window_pane_cp70

0x54b3,	// (0x000193df) popup_eswt_tasktip_window_t1

0x54c9,	// (0x000193f5) wait_bar_pane_cp71_ParamLimits

0x54c9,	// (0x000193f5) wait_bar_pane_cp71

0x54d5,	// (0x00019401) grid_eswt_app_pane

0xe3af,	// (0x000222db) scroll_pane_cp70

0xbbcc,	// (0x0001faf8) cell_eswt_app_pane_ParamLimits

0xbbcc,	// (0x0001faf8) cell_eswt_app_pane

0xbbfe,	// (0x0001fb2a) cell_eswt_app_pane_g1_ParamLimits

0xbbfe,	// (0x0001fb2a) cell_eswt_app_pane_g1

0xbc2d,	// (0x0001fb59) cell_eswt_app_pane_g2_ParamLimits

0xbc2d,	// (0x0001fb59) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00023b58) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00023b58) cell_eswt_app_pane_g

0xbc56,	// (0x0001fb82) cell_eswt_app_pane_t1_ParamLimits

0xbc56,	// (0x0001fb82) cell_eswt_app_pane_t1

0x559a,	// (0x000194c6) grid_highlight_pane_cp70_ParamLimits

0x559a,	// (0x000194c6) grid_highlight_pane_cp70

0x139e,	// (0x000152ca) set_content_pane_g1

0xae55,	// (0x0001ed81) status_small_volume_pane

0xf045,	// (0x00022f71) status_small_volume_pane_g1

0xf04d,	// (0x00022f79) volume_small2_pane

0xf056,	// (0x00022f82) volume_small2_pane_g1

0xf05f,	// (0x00022f8b) volume_small2_pane_g2

0xf068,	// (0x00022f94) volume_small2_pane_g3

0xf071,	// (0x00022f9d) volume_small2_pane_g4

0xf07a,	// (0x00022fa6) volume_small2_pane_g5

0xf083,	// (0x00022faf) volume_small2_pane_g6

0xf08c,	// (0x00022fb8) volume_small2_pane_g7

0xf095,	// (0x00022fc1) volume_small2_pane_g8

0xf09e,	// (0x00022fca) volume_small2_pane_g9

0xf0a7,	// (0x00022fd3) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00023b5d) volume_small2_pane_g

0x4c05,	// (0x00018b31) fep_vkb_top_text_pane_g1_ParamLimits

0xbb02,	// (0x0001fa2e) fep_vkb_top_text_pane_t1_ParamLimits

0x4eb8,	// (0x00018de4) popup_preview_fixed_window_g3_ParamLimits

0x4eb8,	// (0x00018de4) popup_preview_fixed_window_g3

0x9836,	// (0x0001d762) popup_toolbar_trans_pane

0xb55a,	// (0x0001f486) aid_height_set_list_ParamLimits

0x3227,	// (0x00017153) aid_size_parent_ParamLimits

0x17f0,	// (0x0001571c) list_highlight_pane_cp2_ParamLimits

0x139e,	// (0x000152ca) set_content_pane_g1_ParamLimits

0xb687,	// (0x0001f5b3) list_single_image_pane_ParamLimits

0xb687,	// (0x0001f5b3) list_single_image_pane

0xbc88,	// (0x0001fbb4) aid_size_cell_image_ParamLimits

0xbc88,	// (0x0001fbb4) aid_size_cell_image

0xbc95,	// (0x0001fbc1) grid_single_image_pane_ParamLimits

0xbc95,	// (0x0001fbc1) grid_single_image_pane

0xc995,	// (0x000208c1) list_single_image_pane_g1_ParamLimits

0xc995,	// (0x000208c1) list_single_image_pane_g1

0xde37,	// (0x00021d63) list_single_image_pane_g2_ParamLimits

0xde37,	// (0x00021d63) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x00023b72) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x00023b72) list_single_image_pane_g

0x55c1,	// (0x000194ed) list_single_image_pane_t1_ParamLimits

0x55c1,	// (0x000194ed) list_single_image_pane_t1

0xbca3,	// (0x0001fbcf) cell_image_list_pane_ParamLimits

0xbca3,	// (0x0001fbcf) cell_image_list_pane

0xbcb7,	// (0x0001fbe3) cell_image_list_pane_g1

0xbcc0,	// (0x0001fbec) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00023b77) cell_image_list_pane_g

0x55ff,	// (0x0001952b) aid_size_cell_tb_trans_pane

0xc96f,	// (0x0002089b) bg_tb_trans_pane

0x5611,	// (0x0001953d) grid_tb_trans_pane

0x1d56,	// (0x00015c82) bg_tb_trans_pane_g1

0x1d66,	// (0x00015c92) bg_tb_trans_pane_g2

0x1d5e,	// (0x00015c8a) bg_tb_trans_pane_g3

0x1d76,	// (0x00015ca2) bg_tb_trans_pane_g4

0x1d6e,	// (0x00015c9a) bg_tb_trans_pane_g5

0x1d96,	// (0x00015cc2) bg_tb_trans_pane_g6

0x1d8e,	// (0x00015cba) bg_tb_trans_pane_g7

0x1d7e,	// (0x00015caa) bg_tb_trans_pane_g8

0x1d86,	// (0x00015cb2) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00023b7c) bg_tb_trans_pane_g

0x5625,	// (0x00019551) cell_toolbar_trans_pane_ParamLimits

0x5625,	// (0x00019551) cell_toolbar_trans_pane

0x484e,	// (0x0001877a) cell_toolbar_trans_pane_g1

0xb8d2,	// (0x0001f7fe) list_form2_midp_pane_t1

0xb8e0,	// (0x0001f80c) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00023a19) list_form2_midp_pane_t

0x444f,	// (0x0001837b) scroll_pane_cp51_ParamLimits

0x4669,	// (0x00018595) form2_midp_wait_pane_g1

0x4672,	// (0x0001859e) form2_midp_wait_pane_g2

0x467b,	// (0x000185a7) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00023a2e) form2_midp_wait_pane_g

0xc29d,	// (0x000201c9) list_highlight_pane_cp21_ParamLimits

0x46b4,	// (0x000185e0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x46c3,	// (0x000185ef) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3443,	// (0x0001736f) list_single_2graphic_im_pane_ParamLimits

0x3443,	// (0x0001736f) list_single_2graphic_im_pane

0xbcc9,	// (0x0001fbf5) list_single_2graphic_im_pane_g1_ParamLimits

0xbcc9,	// (0x0001fbf5) list_single_2graphic_im_pane_g1

0xbcda,	// (0x0001fc06) list_single_2graphic_im_pane_g2_ParamLimits

0xbcda,	// (0x0001fc06) list_single_2graphic_im_pane_g2

0xbce6,	// (0x0001fc12) list_single_2graphic_im_pane_g3_ParamLimits

0xbce6,	// (0x0001fc12) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x00023b8f) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x00023b8f) list_single_2graphic_im_pane_g

0xbcfa,	// (0x0001fc26) list_single_2graphic_im_pane_t1_ParamLimits

0xbcfa,	// (0x0001fc26) list_single_2graphic_im_pane_t1

0x4ec4,	// (0x00018df0) list_single_graphic_2heading_pane_fp_ParamLimits

0x4ec4,	// (0x00018df0) list_single_graphic_2heading_pane_fp

0x4f0c,	// (0x00018e38) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4f0c,	// (0x00018e38) list_single_graphic_2heading_pane_fp_g1

0x4edd,	// (0x00018e09) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4edd,	// (0x00018e09) list_single_graphic_2heading_pane_fp_g2

0x4e36,	// (0x00018d62) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e36,	// (0x00018d62) list_single_graphic_2heading_pane_fp_g3

0x4e42,	// (0x00018d6e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4e42,	// (0x00018d6e) list_single_graphic_2heading_pane_fp_g4

0x4ee9,	// (0x00018e15) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4ee9,	// (0x00018e15) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00023ab6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00023ab6) list_single_graphic_2heading_pane_fp_g

0x56b9,	// (0x000195e5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x56b9,	// (0x000195e5) list_single_graphic_2heading_pane_fp_t1

0x4f44,	// (0x00018e70) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4f44,	// (0x00018e70) list_single_graphic_2heading_pane_fp_t2

0x56cf,	// (0x000195fb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x56cf,	// (0x000195fb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00023b98) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00023b98) list_single_graphic_2heading_pane_fp_t

0x48c7,	// (0x000187f3) fep_hwr_write_pane_g5_ParamLimits

0x48c7,	// (0x000187f3) fep_hwr_write_pane_g5

0x48d3,	// (0x000187ff) fep_hwr_write_pane_g6_ParamLimits

0x48d3,	// (0x000187ff) fep_hwr_write_pane_g6

0x5389,	// (0x000192b5) eswt_shell_pane_ParamLimits

0x1e7a,	// (0x00015da6) bg_popup_window_pane_cp18_ParamLimits

0x3145,	// (0x00017071) heading_pane_cp70

0x54b3,	// (0x000193df) popup_eswt_tasktip_window_t1_ParamLimits

0xaefd,	// (0x0001ee29) aid_touch_tab_arrow_left

0xaf13,	// (0x0001ee3f) aid_touch_tab_arrow_right

0xa0c3,	// (0x0001dfef) title_pane_g3_ParamLimits

0xa0c3,	// (0x0001dfef) title_pane_g3

0xc8c9,	// (0x000207f5) set_value_pane_g1

0x9836,	// (0x0001d762) popup_toolbar_trans_pane_ParamLimits

0x55ff,	// (0x0001952b) aid_size_cell_tb_trans_pane_ParamLimits

0xc96f,	// (0x0002089b) bg_tb_trans_pane_ParamLimits

0x5611,	// (0x0001953d) grid_tb_trans_pane_ParamLimits

0xc3ea,	// (0x00020316) cont_note_pane_ParamLimits

0xc3ea,	// (0x00020316) cont_note_pane

0xc670,	// (0x0002059c) cont_snote2_single_text_pane_ParamLimits

0xc670,	// (0x0002059c) cont_snote2_single_text_pane

0xc670,	// (0x0002059c) cont_snote2_single_graphic_pane_ParamLimits

0xc670,	// (0x0002059c) cont_snote2_single_graphic_pane

0x2493,	// (0x000163bf) cont_note_wait_pane_ParamLimits

0x2493,	// (0x000163bf) cont_note_wait_pane

0x2493,	// (0x000163bf) cont_note_image_pane_ParamLimits

0x2493,	// (0x000163bf) cont_note_image_pane

0x56e5,	// (0x00019611) popup_note2_window_g1_ParamLimits

0x56e5,	// (0x00019611) popup_note2_window_g1

0x5716,	// (0x00019642) popup_note2_window_t1_ParamLimits

0x5716,	// (0x00019642) popup_note2_window_t1

0x575b,	// (0x00019687) popup_note2_window_t2_ParamLimits

0x575b,	// (0x00019687) popup_note2_window_t2

0x57a0,	// (0x000196cc) popup_note2_window_t3_ParamLimits

0x57a0,	// (0x000196cc) popup_note2_window_t3

0x5806,	// (0x00019732) popup_note2_window_t4_ParamLimits

0x5806,	// (0x00019732) popup_note2_window_t4

0xc46e,	// (0x0002039a) popup_note2_window_t5_ParamLimits

0xc46e,	// (0x0002039a) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00023ba4) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00023ba4) popup_note2_window_t

0x5835,	// (0x00019761) popup_note2_image_window_g1_ParamLimits

0x5835,	// (0x00019761) popup_note2_image_window_g1

0x5841,	// (0x0001976d) popup_note2_image_window_g2_ParamLimits

0x5841,	// (0x0001976d) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x00023baf) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x00023baf) popup_note2_image_window_g

0x5853,	// (0x0001977f) popup_note2_image_window_t1_ParamLimits

0x5853,	// (0x0001977f) popup_note2_image_window_t1

0x586b,	// (0x00019797) popup_note2_image_window_t2_ParamLimits

0x586b,	// (0x00019797) popup_note2_image_window_t2

0x5883,	// (0x000197af) popup_note2_image_window_t3_ParamLimits

0x5883,	// (0x000197af) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00023bb4) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00023bb4) popup_note2_image_window_t

0x24a1,	// (0x000163cd) popup_note2_wait_window_g1_ParamLimits

0x24a1,	// (0x000163cd) popup_note2_wait_window_g1

0x589f,	// (0x000197cb) popup_note2_wait_window_g2_ParamLimits

0x589f,	// (0x000197cb) popup_note2_wait_window_g2

0x24b9,	// (0x000163e5) popup_note2_wait_window_g3_ParamLimits

0x24b9,	// (0x000163e5) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00023bbb) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00023bbb) popup_note2_wait_window_g

0x58ab,	// (0x000197d7) popup_note2_wait_window_t1_ParamLimits

0x58ab,	// (0x000197d7) popup_note2_wait_window_t1

0x58c9,	// (0x000197f5) popup_note2_wait_window_t2_ParamLimits

0x58c9,	// (0x000197f5) popup_note2_wait_window_t2

0x58e7,	// (0x00019813) popup_note2_wait_window_t3_ParamLimits

0x58e7,	// (0x00019813) popup_note2_wait_window_t3

0x58f9,	// (0x00019825) popup_note2_wait_window_t4_ParamLimits

0x58f9,	// (0x00019825) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00023bc2) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00023bc2) popup_note2_wait_window_t

0x590b,	// (0x00019837) wait_bar2_pane_ParamLimits

0x590b,	// (0x00019837) wait_bar2_pane

0x5923,	// (0x0001984f) popup_snote2_single_text_window_g1_ParamLimits

0x5923,	// (0x0001984f) popup_snote2_single_text_window_g1

0x594b,	// (0x00019877) popup_snote2_single_text_window_t1_ParamLimits

0x594b,	// (0x00019877) popup_snote2_single_text_window_t1

0x5997,	// (0x000198c3) popup_snote2_single_text_window_t2_ParamLimits

0x5997,	// (0x000198c3) popup_snote2_single_text_window_t2

0x59e3,	// (0x0001990f) popup_snote2_single_text_window_t3_ParamLimits

0x59e3,	// (0x0001990f) popup_snote2_single_text_window_t3

0x5a24,	// (0x00019950) popup_snote2_single_text_window_t4_ParamLimits

0x5a24,	// (0x00019950) popup_snote2_single_text_window_t4

0x5a5a,	// (0x00019986) popup_snote2_single_text_window_t5_ParamLimits

0x5a5a,	// (0x00019986) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00023bcb) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00023bcb) popup_snote2_single_text_window_t

0x5a85,	// (0x000199b1) popup_snote2_single_graphic_window_g1_ParamLimits

0x5a85,	// (0x000199b1) popup_snote2_single_graphic_window_g1

0x5aad,	// (0x000199d9) popup_snote2_single_graphic_window_g2_ParamLimits

0x5aad,	// (0x000199d9) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00023bd6) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00023bd6) popup_snote2_single_graphic_window_g

0x5ad5,	// (0x00019a01) popup_snote2_single_graphic_window_t1_ParamLimits

0x5ad5,	// (0x00019a01) popup_snote2_single_graphic_window_t1

0x5b21,	// (0x00019a4d) popup_snote2_single_graphic_window_t2_ParamLimits

0x5b21,	// (0x00019a4d) popup_snote2_single_graphic_window_t2

0x59e3,	// (0x0001990f) popup_snote2_single_graphic_window_t3_ParamLimits

0x59e3,	// (0x0001990f) popup_snote2_single_graphic_window_t3

0x5a24,	// (0x00019950) popup_snote2_single_graphic_window_t4_ParamLimits

0x5a24,	// (0x00019950) popup_snote2_single_graphic_window_t4

0x5a5a,	// (0x00019986) popup_snote2_single_graphic_window_t5_ParamLimits

0x5a5a,	// (0x00019986) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00023bdb) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00023bdb) popup_snote2_single_graphic_window_t

0x42ff,	// (0x0001822b) clock_nsta_pane_cp2_t1

0x42ff,	// (0x0001822b) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x000239ef) clock_nsta_pane_cp2_t

0xc989,	// (0x000208b5) form_field_data_wide_pane_g1_ParamLimits

0xc995,	// (0x000208c1) form_field_data_wide_pane_g2_ParamLimits

0xc995,	// (0x000208c1) form_field_data_wide_pane_g2

0xde37,	// (0x00021d63) form_field_data_wide_pane_g3_ParamLimits

0xde37,	// (0x00021d63) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000235a2) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000235a2) form_field_data_wide_pane_g

0xb7e9,	// (0x0001f715) grid_touch_3_pane_ParamLimits

0xb7e9,	// (0x0001f715) grid_touch_3_pane

0xbd2b,	// (0x0001fc57) cell_touch_3_pane_ParamLimits

0xbd2b,	// (0x0001fc57) cell_touch_3_pane

0x484e,	// (0x0001877a) cell_touch_3_pane_g1

0x484e,	// (0x0001877a) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00023a74) cell_touch_3_pane_g

0xc4c6,	// (0x000203f2) cont_query_data_pane

0xc4ce,	// (0x000203fa) cont_query_data_pane_cp1

0x5ba0,	// (0x00019acc) button_value_adjust_pane_cp7

0x5ba8,	// (0x00019ad4) query_popup_pane_cp3

0x0f0f,	// (0x00014e3b) bg_popup_sub_pane_cp22_ParamLimits

0xe58a,	// (0x000224b6) navi_navi_volume_pane_cp2

0xe5a5,	// (0x000224d1) popup_side_volume_key_window_g2

0xe5b4,	// (0x000224e0) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00023638) popup_side_volume_key_window_g

0xe5d1,	// (0x000224fd) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002363f) popup_side_volume_key_window_t

0x1259,	// (0x00015185) popup_side_volume_key_window_ParamLimits

0xa599,	// (0x0001e4c5) list_double_graphic_pane_g4_ParamLimits

0xa599,	// (0x0001e4c5) list_double_graphic_pane_g4

0xb65e,	// (0x0001f58a) list_single_2heading_msg_pane_ParamLimits

0xb65e,	// (0x0001f58a) list_single_2heading_msg_pane

0xbd77,	// (0x0001fca3) list_single_2heading_msg_pane_g1_ParamLimits

0xbd77,	// (0x0001fca3) list_single_2heading_msg_pane_g1

0xbd83,	// (0x0001fcaf) list_single_2heading_msg_pane_g2_ParamLimits

0xbd83,	// (0x0001fcaf) list_single_2heading_msg_pane_g2

0xbd96,	// (0x0001fcc2) list_single_2heading_msg_pane_g3_ParamLimits

0xbd96,	// (0x0001fcc2) list_single_2heading_msg_pane_g3

0xbda2,	// (0x0001fcce) list_single_2heading_msg_pane_g4_ParamLimits

0xbda2,	// (0x0001fcce) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00023be6) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00023be6) list_single_2heading_msg_pane_g

0xbdba,	// (0x0001fce6) list_single_2heading_msg_pane_t1_ParamLimits

0xbdba,	// (0x0001fce6) list_single_2heading_msg_pane_t1

0xbde2,	// (0x0001fd0e) list_single_2heading_msg_pane_t2_ParamLimits

0xbde2,	// (0x0001fd0e) list_single_2heading_msg_pane_t2

0xbe4d,	// (0x0001fd79) list_single_2heading_msg_pane_t3_ParamLimits

0xbe4d,	// (0x0001fd79) list_single_2heading_msg_pane_t3

0x5c99,	// (0x00019bc5) list_single_2heading_msg_pane_t4_ParamLimits

0x5c99,	// (0x00019bc5) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00023bef) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00023bef) list_single_2heading_msg_pane_t

0xc24b,	// (0x00020177) title_pane_g4_ParamLimits

0xc24b,	// (0x00020177) title_pane_g4

0xe1c0,	// (0x000220ec) title_pane_stacon_g3_ParamLimits

0xe1c0,	// (0x000220ec) title_pane_stacon_g3

0x567c,	// (0x000195a8) list_single_2graphic_im_pane_g4_ParamLimits

0x567c,	// (0x000195a8) list_single_2graphic_im_pane_g4

0x2f03,	// (0x00016e2f) popup_side_volume_key_window_cp

0x380f,	// (0x0001773b) main_idle_act2_pane_t1

0xea0a,	// (0x00022936) toolbar_button_pane_g10

0xa440,	// (0x0001e36c) popup_toolbar_window_cp1

0x42f0,	// (0x0001821c) clock_nsta_pane_cp_t1

0x42f0,	// (0x0001821c) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x000239ea) clock_nsta_pane_cp_t

0xe58a,	// (0x000224b6) navi_navi_volume_pane_cp2_ParamLimits

0xe599,	// (0x000224c5) popup_side_volume_key_window_g1_ParamLimits

0xe5a5,	// (0x000224d1) popup_side_volume_key_window_g2_ParamLimits

0xe5b4,	// (0x000224e0) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00023638) popup_side_volume_key_window_g_ParamLimits

0xed11,	// (0x00022c3d) fep_hwr_aid_pane

0xedba,	// (0x00022ce6) bg_fep_hwr_top_pane_g4_ParamLimits

0x4897,	// (0x000187c3) fep_hwr_top_pane_g1_ParamLimits

0x48a9,	// (0x000187d5) fep_hwr_top_pane_g2_ParamLimits

0xedda,	// (0x00022d06) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00023a3f) fep_hwr_top_pane_g_ParamLimits

0xedef,	// (0x00022d1b) fep_hwr_top_text_pane_ParamLimits

0x2cb8,	// (0x00016be4) aid_touch_tab_arrow_arrow_2

0x2cc1,	// (0x00016bed) aid_touch_tab_arrow_left_2

0xed25,	// (0x00022c51) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xed5c,	// (0x00022c88) fep_hwr_prediction_pane

0x49ff,	// (0x0001892b) fep_vkb_prediction_pane

0xbae2,	// (0x0001fa0e) fep_vkb_side_pane_g3_ParamLimits

0xbae2,	// (0x0001fa0e) fep_vkb_side_pane_g3

0xef03,	// (0x00022e2f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xef74,	// (0x00022ea0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xef81,	// (0x00022ead) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00023aee) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf0b0,	// (0x00022fdc) fep_hwr_prediction_pane_g1

0xf0ba,	// (0x00022fe6) fep_hwr_prediction_pane_g2

0xf0c2,	// (0x00022fee) fep_hwr_prediction_pane_g3

0xf0ca,	// (0x00022ff6) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00023bf8) fep_hwr_prediction_pane_g

0x5cbe,	// (0x00019bea) fep_vkb_prediction_pane_g1

0x5cc8,	// (0x00019bf4) fep_vkb_prediction_pane_g2

0x5cd0,	// (0x00019bfc) fep_vkb_prediction_pane_g3

0x5cd8,	// (0x00019c04) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00023c01) fep_vkb_prediction_pane_g

0xeb40,	// (0x00022a6c) slider_set_pane_g3

0xeb54,	// (0x00022a80) slider_set_pane_g4

0xeb6c,	// (0x00022a98) slider_set_pane_g5

0xeb40,	// (0x00022a6c) slider_set_pane_g6

0xeb82,	// (0x00022aae) slider_set_pane_g7

0x33a6,	// (0x000172d2) slider_form_pane_g3

0x33af,	// (0x000172db) slider_form_pane_g4

0x33b7,	// (0x000172e3) slider_form_pane_g5

0x33a6,	// (0x000172d2) slider_form_pane_g6

0xb601,	// (0x0001f52d) slider_form_pane_g7

0x3b09,	// (0x00017a35) slider_set_pane_vc_g3

0x3b12,	// (0x00017a3e) slider_set_pane_vc_g4

0x3b1b,	// (0x00017a47) slider_set_pane_vc_g5

0x3b09,	// (0x00017a35) slider_set_pane_vc_g6

0x3b24,	// (0x00017a50) slider_set_pane_vc_g7

0x3fc6,	// (0x00017ef2) slider_form_pane_vc_g1

0x3fcf,	// (0x00017efb) slider_form_pane_vc_g2

0x3fd8,	// (0x00017f04) slider_form_pane_vc_g3

0x3fc6,	// (0x00017ef2) slider_form_pane_vc_g4

0x3fe1,	// (0x00017f0d) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x000239bc) slider_form_pane_vc_g

0xdc8b,	// (0x00021bb7) main_idle_act3_pane

0x5ce0,	// (0x00019c0c) ai3_links_pane

0xbebb,	// (0x0001fde7) popup_ai3_data_window_ParamLimits

0xbebb,	// (0x0001fde7) popup_ai3_data_window

0xc22d,	// (0x00020159) grid_ai3_links_pane

0xbed9,	// (0x0001fe05) cell_ai3_links_pane_ParamLimits

0xbed9,	// (0x0001fe05) cell_ai3_links_pane

0x5d21,	// (0x00019c4d) bg_popup_sub_pane_cp11

0x5d2e,	// (0x00019c5a) cell_ai3_links_pane_g1

0xc22d,	// (0x00020159) bg_popup_sub_pane_cp12

0x5d53,	// (0x00019c7f) heading_ai3_data_pane

0x5d5b,	// (0x00019c87) list_ai3_gene_pane

0x5d67,	// (0x00019c93) popup_ai3_data_window_g1

0x5d6f,	// (0x00019c9b) heading_ai3_data_pane_g1

0x5d77,	// (0x00019ca3) heading_ai3_data_pane_t1

0x5d85,	// (0x00019cb1) list_double_ai3_gene_pane_ParamLimits

0x5d85,	// (0x00019cb1) list_double_ai3_gene_pane

0x5d92,	// (0x00019cbe) list_single_ai3_gene_pane_ParamLimits

0x5d92,	// (0x00019cbe) list_single_ai3_gene_pane

0x4813,	// (0x0001873f) list_highlight_pane_cp7_ParamLimits

0x4813,	// (0x0001873f) list_highlight_pane_cp7

0x5d9f,	// (0x00019ccb) list_single_a13_gene_pane_t1_ParamLimits

0x5d9f,	// (0x00019ccb) list_single_a13_gene_pane_t1

0x5db6,	// (0x00019ce2) list_single_ai3_gene_pane_g1

0x5dbf,	// (0x00019ceb) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00023c0a) list_single_ai3_gene_pane_g

0x5dc7,	// (0x00019cf3) list_double_ai3_gene_pane_g1_ParamLimits

0x5dc7,	// (0x00019cf3) list_double_ai3_gene_pane_g1

0x5dd3,	// (0x00019cff) list_double_ai3_gene_pane_t1_ParamLimits

0x5dd3,	// (0x00019cff) list_double_ai3_gene_pane_t1

0x5def,	// (0x00019d1b) list_double_ai3_gene_pane_t2_ParamLimits

0x5def,	// (0x00019d1b) list_double_ai3_gene_pane_t2

0x5e04,	// (0x00019d30) list_double_ai3_gene_pane_t3_ParamLimits

0x5e04,	// (0x00019d30) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00023c0f) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00023c0f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5bb9,	// (0x00019ae5) aid_size_min_col_2

0xbd61,	// (0x0001fc8d) aid_size_min_msg_ParamLimits

0xbd61,	// (0x0001fc8d) aid_size_min_msg

0xbaf6,	// (0x0001fa22) fep_vkb_top_text_pane_g2_ParamLimits

0xbaf6,	// (0x0001fa22) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00023a6f) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00023a6f) fep_vkb_top_text_pane_g

0xdc8b,	// (0x00021bb7) main_hc_apps_shell_pane

0x5e21,	// (0x00019d4d) grid_hc_apps_pane_ParamLimits

0x5e21,	// (0x00019d4d) grid_hc_apps_pane

0x5e30,	// (0x00019d5c) list_hc_apps_pane

0x5e38,	// (0x00019d64) scroll_pane_cp37_ParamLimits

0x5e38,	// (0x00019d64) scroll_pane_cp37

0xbef3,	// (0x0001fe1f) cell_hc_apps_pane_ParamLimits

0xbef3,	// (0x0001fe1f) cell_hc_apps_pane

0xbfbd,	// (0x0001fee9) cell_hc_apps_pane_g1_ParamLimits

0xbfbd,	// (0x0001fee9) cell_hc_apps_pane_g1

0x5f2d,	// (0x00019e59) cell_hc_apps_pane_g2_ParamLimits

0x5f2d,	// (0x00019e59) cell_hc_apps_pane_g2

0x5f49,	// (0x00019e75) cell_hc_apps_pane_g3_ParamLimits

0x5f49,	// (0x00019e75) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00023c16) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00023c16) cell_hc_apps_pane_g

0xbfea,	// (0x0001ff16) cell_hc_apps_pane_t1_ParamLimits

0xbfea,	// (0x0001ff16) cell_hc_apps_pane_t1

0xc3ea,	// (0x00020316) grid_highlight_pane_cp10_ParamLimits

0xc3ea,	// (0x00020316) grid_highlight_pane_cp10

0xc02a,	// (0x0001ff56) list_single_hc_apps_pane_ParamLimits

0xc02a,	// (0x0001ff56) list_single_hc_apps_pane

0xc064,	// (0x0001ff90) list_single_hc_apps_pane_g1

0xc07d,	// (0x0001ffa9) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00023c1d) list_single_hc_apps_pane_g

0xc096,	// (0x0001ffc2) list_single_hc_apps_pane_g2_copy1

0xc0b2,	// (0x0001ffde) list_single_hc_apps_pane_t1

0xc29d,	// (0x000201c9) bg_set_opt_pane_cp_ParamLimits

0xddae,	// (0x00021cda) setting_slider_pane_t1_ParamLimits

0xddc7,	// (0x00021cf3) setting_slider_pane_t2_ParamLimits

0xdde1,	// (0x00021d0d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002348a) setting_slider_pane_t_ParamLimits

0xddf9,	// (0x00021d25) slider_set_pane_ParamLimits

0xe7ed,	// (0x00022719) control_pane_g5_ParamLimits

0xe7ed,	// (0x00022719) control_pane_g5

0x31d9,	// (0x00017105) slider_set_pane_g1_ParamLimits

0xeb34,	// (0x00022a60) slider_set_pane_g2_ParamLimits

0xeb40,	// (0x00022a6c) slider_set_pane_g3_ParamLimits

0xeb54,	// (0x00022a80) slider_set_pane_g4_ParamLimits

0xeb6c,	// (0x00022a98) slider_set_pane_g5_ParamLimits

0xeb40,	// (0x00022a6c) slider_set_pane_g6_ParamLimits

0xeb82,	// (0x00022aae) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00023886) slider_set_pane_g_ParamLimits

0x1349,	// (0x00015275) navi_icon_text_pane_ParamLimits

0xaec4,	// (0x0001edf0) aid_fill_nsta_2_ParamLimits

0xaefd,	// (0x0001ee29) aid_touch_tab_arrow_left_ParamLimits

0xaf13,	// (0x0001ee3f) aid_touch_tab_arrow_right_ParamLimits

0xafae,	// (0x0001eeda) clock_nsta_pane_ParamLimits

0xb441,	// (0x0001f36d) navi_icon_pane_g1_ParamLimits

0xb44d,	// (0x0001f379) navi_text_pane_t1_ParamLimits

0xb8b4,	// (0x0001f7e0) navi_icon_text_pane_g1_ParamLimits

0xb8c0,	// (0x0001f7ec) navi_icon_text_pane_t1_ParamLimits

0xc064,	// (0x0001ff90) list_single_hc_apps_pane_g1_ParamLimits

0xc07d,	// (0x0001ffa9) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00023c1d) list_single_hc_apps_pane_g_ParamLimits

0xc096,	// (0x0001ffc2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc0b2,	// (0x0001ffde) list_single_hc_apps_pane_t1_ParamLimits

0x8f16,	// (0x0001ce42) popup_toolbar2_fixed_window_ParamLimits

0x8f16,	// (0x0001ce42) popup_toolbar2_fixed_window

0x982c,	// (0x0001d758) popup_toolbar2_float_window

0xc22d,	// (0x00020159) bg_popup_sub_pane_cp27

0x6066,	// (0x00019f92) grid_toolbar2_float_pane

0xc22d,	// (0x00020159) bg_popup_sub_pane_cp26

0x6066,	// (0x00019f92) grid_toolbar2_fixed_pane

0xc0e0,	// (0x0002000c) cell_toolbar2_fixed_pane_ParamLimits

0xc0e0,	// (0x0002000c) cell_toolbar2_fixed_pane

0xc0fa,	// (0x00020026) cell_toolbar2_fixed_pane_g1

0x6087,	// (0x00019fb3) toolbar2_fixed_button_pane

0x1d56,	// (0x00015c82) toolbar2_fixed_button_pane_g1

0x1d66,	// (0x00015c92) toolbar2_fixed_button_pane_g2

0x1d5e,	// (0x00015c8a) toolbar2_fixed_button_pane_g3

0x1d76,	// (0x00015ca2) toolbar2_fixed_button_pane_g4

0x1d6e,	// (0x00015c9a) toolbar2_fixed_button_pane_g5

0x1d7e,	// (0x00015caa) toolbar2_fixed_button_pane_g6

0x1d86,	// (0x00015cb2) toolbar2_fixed_button_pane_g7

0x1d96,	// (0x00015cc2) toolbar2_fixed_button_pane_g8

0x1d8e,	// (0x00015cba) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00023788) toolbar2_fixed_button_pane_g

0x608f,	// (0x00019fbb) cell_toolbar2_float_pane_ParamLimits

0x608f,	// (0x00019fbb) cell_toolbar2_float_pane

0x60a0,	// (0x00019fcc) cell_toolbar2_float_pane_g1

0x6087,	// (0x00019fb3) toolbar2_fixed_button_pane_cp

0xb9de,	// (0x0001f90a) fep_vkb_accented_list_pane_ParamLimits

0xb9de,	// (0x0001f90a) fep_vkb_accented_list_pane

0xeee3,	// (0x00022e0f) bg_popup_fep_shadow_pane_g9

0x14c1,	// (0x000153ed) bg_popup_fep_shadow_pane_cp3

0xdfa7,	// (0x00021ed3) list_accented_list_pane

0x60a9,	// (0x00019fd5) list_single_accented_list_pane_ParamLimits

0x60a9,	// (0x00019fd5) list_single_accented_list_pane

0x14c1,	// (0x000153ed) list_highlight_pane_cp10

0x60ba,	// (0x00019fe6) list_single_accented_list_pane_t1

0x974a,	// (0x0001d676) popup_slider_window_ParamLimits

0x974a,	// (0x0001d676) popup_slider_window

0x5bb0,	// (0x00019adc) aid_indentation_list_msg

0xc9ae,	// (0x000208da) bg_popup_window_pane_cp19

0x61f6,	// (0x0001a122) popup_slider_window_g1

0x6212,	// (0x0001a13e) popup_slider_window_g2

0x622e,	// (0x0001a15a) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00023c22) popup_slider_window_g

0x6294,	// (0x0001a1c0) popup_slider_window_t1

0x6308,	// (0x0001a234) small_volume_slider_vertical_pane

0x484e,	// (0x0001877a) small_volume_slider_vertical_pane_g1

0x484e,	// (0x0001877a) small_volume_slider_vertical_pane_g2

0x6324,	// (0x0001a250) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00023c34) small_volume_slider_vertical_pane_g

0x8e80,	// (0x0001cdac) area_side_right_pane_ParamLimits

0x8e80,	// (0x0001cdac) area_side_right_pane

0x9ac9,	// (0x0001d9f5) aid_size_side_button_ParamLimits

0x9ac9,	// (0x0001d9f5) aid_size_side_button

0x9ae2,	// (0x0001da0e) grid_sctrl_middle_pane_ParamLimits

0x9ae2,	// (0x0001da0e) grid_sctrl_middle_pane

0xf0db,	// (0x00023007) sctrl_sk_bottom_pane

0xf0ec,	// (0x00023018) sctrl_sk_top_pane

0xf0fe,	// (0x0002302a) aid_touch_sctrl_top

0xf10b,	// (0x00023037) bg_sctrl_sk_pane_ParamLimits

0xf10b,	// (0x00023037) bg_sctrl_sk_pane

0xf119,	// (0x00023045) sctrl_sk_top_pane_g1

0xf126,	// (0x00023052) sctrl_sk_top_pane_t1

0xf0fe,	// (0x0002302a) aid_touch_sctrl_bottom

0xf10b,	// (0x00023037) bg_sctrl_sk_pane_cp_ParamLimits

0xf10b,	// (0x00023037) bg_sctrl_sk_pane_cp

0xf141,	// (0x0002306d) sctrl_sk_bottom_pane_g1

0xf126,	// (0x00023052) sctrl_sk_bottom_pane_t1

0x9afc,	// (0x0001da28) cell_sctrl_middle_pane_ParamLimits

0x9afc,	// (0x0001da28) cell_sctrl_middle_pane

0x9b0f,	// (0x0001da3b) aid_touch_sctrl_middle_ParamLimits

0x9b0f,	// (0x0001da3b) aid_touch_sctrl_middle

0x9b1c,	// (0x0001da48) bg_sctrl_middle_pane_ParamLimits

0x9b1c,	// (0x0001da48) bg_sctrl_middle_pane

0xf468,	// (0x00023394) cell_sctrl_middle_pane_g1_ParamLimits

0xf468,	// (0x00023394) cell_sctrl_middle_pane_g1

0x9b2a,	// (0x0001da56) cell_sctrl_middle_pane_g2_ParamLimits

0x9b2a,	// (0x0001da56) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00023c40) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00023c40) cell_sctrl_middle_pane_g

0x1d56,	// (0x00015c82) bg_sctrl_middle_pane_g1

0x1d5e,	// (0x00015c8a) bg_sctrl_middle_pane_g2

0x1d66,	// (0x00015c92) bg_sctrl_middle_pane_g3

0x1d6e,	// (0x00015c9a) bg_sctrl_middle_pane_g4

0x1d76,	// (0x00015ca2) bg_sctrl_middle_pane_g5

0x1d7e,	// (0x00015caa) bg_sctrl_middle_pane_g6

0x1d86,	// (0x00015cb2) bg_sctrl_middle_pane_g7

0x1d8e,	// (0x00015cba) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00023c45) bg_sctrl_middle_pane_g

0x1d96,	// (0x00015cc2) bg_sctrl_middle_pane_g8_copy1

0x1d56,	// (0x00015c82) bg_sctrl_sk_pane_g1

0x1d66,	// (0x00015c92) bg_sctrl_sk_pane_g2

0x1d5e,	// (0x00015c8a) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00023788) bg_sctrl_sk_pane_g

0xc82e,	// (0x0002075a) aid_size_touch_scroll_bar

0x1d76,	// (0x00015ca2) bg_sctrl_sk_pane_g4

0x1d6e,	// (0x00015c9a) bg_sctrl_sk_pane_g5

0x1d7e,	// (0x00015caa) bg_sctrl_sk_pane_g6

0x1d86,	// (0x00015cb2) bg_sctrl_sk_pane_g7

0x1d96,	// (0x00015cc2) bg_sctrl_sk_pane_g8

0x1d8e,	// (0x00015cba) bg_sctrl_sk_pane_g9

0xe84c,	// (0x00022778) popup_fep_china_hwr2_fs_candidate_window

0x9202,	// (0x0001d12e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9202,	// (0x0001d12e) popup_fep_china_hwr2_fs_control_window

0xef03,	// (0x00022e2f) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00023c3b) sctrl_sk_top_pane_g

0xca66,	// (0x00020992) aid_fep_china_hwr2_fs_cell_ParamLimits

0xca66,	// (0x00020992) aid_fep_china_hwr2_fs_cell

0xca7c,	// (0x000209a8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xca7c,	// (0x000209a8) bg_popup_fep_shadow_pane_cp4

0xca93,	// (0x000209bf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xca93,	// (0x000209bf) bg_popup_fep_shadow_pane_cp5

0xcaa5,	// (0x000209d1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcaa5,	// (0x000209d1) popup_fep_china_hwr2_fs_control_bar_grid

0xcab9,	// (0x000209e5) popup_fep_china_hwr2_fs_control_funtion_grid

0x6383,	// (0x0001a2af) aid_fep_china_hwr2_fs_candi_cell

0xc22d,	// (0x00020159) bg_popup_fep_shadow_pane_cp6

0x638d,	// (0x0001a2b9) popup_fep_china_hwr2_fs_candidate_grid

0xcac1,	// (0x000209ed) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcac1,	// (0x000209ed) cell_fep_china_hwr2_fs_funtion_grid

0x484e,	// (0x0001877a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x63af,	// (0x0001a2db) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x63af,	// (0x0001a2db) cell_fep_china_hwr2_fs_funtion_grid_g1

0x63bd,	// (0x0001a2e9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x63bd,	// (0x0001a2e9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00023c56) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00023c56) cell_fep_china_hwr2_fs_funtion_grid_g

0xcad9,	// (0x00020a05) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcad9,	// (0x00020a05) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcaee,	// (0x00020a1a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcaee,	// (0x00020a1a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00023c5b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00023c5b) cell_fep_china_hwr2_fs_funtion_grid_t

0x6404,	// (0x0001a330) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x640c,	// (0x0001a338) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6414,	// (0x0001a340) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00023c60) popup_fep_china_hwr2_fs_control_bar_grid_g

0x641c,	// (0x0001a348) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x641c,	// (0x0001a348) cell_fep_china_hwr2_fs_candidate_grid

0x643b,	// (0x0001a367) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6443,	// (0x0001a36f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x484e,	// (0x0001877a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x484e,	// (0x0001877a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00023a74) cell_fep_china_hwr2_fs_candidate_grid_g

0x644b,	// (0x0001a377) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1910,	// (0x0001583c) clock_nsta_pane_cp_24_ParamLimits

0x1910,	// (0x0001583c) clock_nsta_pane_cp_24

0x1990,	// (0x000158bc) indicator_nsta_pane_cp_24_ParamLimits

0x1990,	// (0x000158bc) indicator_nsta_pane_cp_24

0x2b16,	// (0x00016a42) heading_pane_g1

0x0001,

0xf8c1,	// (0x000237ed) heading_pane_g

0x3656,	// (0x00017582) grid_sct_catagory_button_pane

0x3688,	// (0x000175b4) scroll_pane_cp5_ParamLimits

0x445b,	// (0x00018387) button_value_adjust_pane_cp5_ParamLimits

0x445b,	// (0x00018387) button_value_adjust_pane_cp5

0x4561,	// (0x0001848d) form2_midp_time_pane_ParamLimits

0x6459,	// (0x0001a385) cell_sct_catagory_button_pane_ParamLimits

0x6459,	// (0x0001a385) cell_sct_catagory_button_pane

0x4813,	// (0x0001873f) bg_button_pane_cp01_ParamLimits

0x4813,	// (0x0001873f) bg_button_pane_cp01

0x484e,	// (0x0001877a) cell_sct_catagory_button_pane_g1

0x97c9,	// (0x0001d6f5) popup_tb_extension_window

0xcb0a,	// (0x00020a36) aid_size_cell_ext_ParamLimits

0xcb0a,	// (0x00020a36) aid_size_cell_ext

0xc670,	// (0x0002059c) bg_tb_trans_pane_cp1_ParamLimits

0xc670,	// (0x0002059c) bg_tb_trans_pane_cp1

0xcb30,	// (0x00020a5c) grid_tb_ext_pane_ParamLimits

0xcb30,	// (0x00020a5c) grid_tb_ext_pane

0xcb6d,	// (0x00020a99) cell_tb_ext_pane_ParamLimits

0xcb6d,	// (0x00020a99) cell_tb_ext_pane

0xcb95,	// (0x00020ac1) cell_tb_ext_pane_g1_ParamLimits

0xcb95,	// (0x00020ac1) cell_tb_ext_pane_g1

0x64ed,	// (0x0001a419) cell_tb_ext_pane_t1

0xc3ea,	// (0x00020316) list_highlight_pane_cp11_ParamLimits

0xc3ea,	// (0x00020316) list_highlight_pane_cp11

0x8f2b,	// (0x0001ce57) popup_uni_indicator_window_ParamLimits

0x8f2b,	// (0x0001ce57) popup_uni_indicator_window

0xc96f,	// (0x0002089b) bg_popup_sub_pane_cp14

0x6508,	// (0x0001a434) list_uniindi_pane

0x6514,	// (0x0001a440) uniindi_top_pane

0xc3ea,	// (0x00020316) bg_uniindi_top_pane

0x6535,	// (0x0001a461) uniindi_top_pane_g1

0x654b,	// (0x0001a477) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00023c67) uniindi_top_pane_g

0x6575,	// (0x0001a4a1) uniindi_top_pane_t1

0x65a1,	// (0x0001a4cd) list_single_uniindi_pane_ParamLimits

0x65a1,	// (0x0001a4cd) list_single_uniindi_pane

0x484e,	// (0x0001877a) bg_uniindi_top_pane_g1

0x65b3,	// (0x0001a4df) list_single_uniindi_pane_g1

0x65c6,	// (0x0001a4f2) list_single_uniindi_pane_t1

0xdc8b,	// (0x00021bb7) control_bg_pane

0x65eb,	// (0x0001a517) bg_sctrl_sk_pane_cp1

0x65f4,	// (0x0001a520) bg_sctrl_sk_pane_cp2

0x65fd,	// (0x0001a529) control_bg_pane_g1

0x6606,	// (0x0001a532) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00023c70) control_bg_pane_g

0x42a4,	// (0x000181d0) cell_indicator_nsta_pane_g1_ParamLimits

0xb816,	// (0x0001f742) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x000239d8) cell_indicator_nsta_pane_g_ParamLimits

0x45ee,	// (0x0001851a) form2_midp_time_pane_t1_ParamLimits

0xebfb,	// (0x00022b27) main_idle_act4_pane_ParamLimits

0xebfb,	// (0x00022b27) main_idle_act4_pane

0x97c9,	// (0x0001d6f5) popup_tb_extension_window_ParamLimits

0xcb55,	// (0x00020a81) tb_ext_find_pane_ParamLimits

0xcb55,	// (0x00020a81) tb_ext_find_pane

0x660f,	// (0x0001a53b) ai_gene_pane_1_cp1

0x160b,	// (0x00015537) ai_gene_pane_2_cp1

0x6617,	// (0x0001a543) list_single_idle_plugin_calendar_pane

0x6620,	// (0x0001a54c) list_single_idle_plugin_notification_pane

0x6629,	// (0x0001a555) list_single_idle_plugin_player_pane

0xcbb2,	// (0x00020ade) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcbb2,	// (0x00020ade) list_single_idle_plugin_shortcut_pane

0xcbda,	// (0x00020b06) main_idle_act4_pane_t1

0xcbf2,	// (0x00020b1e) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00023c75) main_idle_act4_pane_t

0xcc0a,	// (0x00020b36) middle_sk_idle_act4_pane_ParamLimits

0xcc0a,	// (0x00020b36) middle_sk_idle_act4_pane

0xcc26,	// (0x00020b52) popup_clock_digital_analogue_window_cp2

0xcc4d,	// (0x00020b79) shortcut_wheel_idle_act4_pane_ParamLimits

0xcc4d,	// (0x00020b79) shortcut_wheel_idle_act4_pane

0x484e,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g1

0x484e,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g2

0x484e,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g3

0x484e,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g4

0x484e,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g5

0x66bc,	// (0x0001a5e8) shortcut_wheel_idle_act4_pane_g6

0x66c4,	// (0x0001a5f0) shortcut_wheel_idle_act4_pane_g7

0x66cc,	// (0x0001a5f8) shortcut_wheel_idle_act4_pane_g8

0x66d4,	// (0x0001a600) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00023c7a) shortcut_wheel_idle_act4_pane_g

0xc1fd,	// (0x00020129) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1fd,	// (0x00020129) middle_sk_idle_act4_pane_g1

0xccca,	// (0x00020bf6) middle_sk_idle_act4_pane_g2_ParamLimits

0xccca,	// (0x00020bf6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00023c9d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00023c9d) middle_sk_idle_act4_pane_g

0xcce2,	// (0x00020c0e) middle_sk_idle_act4_pane_t1_ParamLimits

0xcce2,	// (0x00020c0e) middle_sk_idle_act4_pane_t1

0xcd11,	// (0x00020c3d) grid_ai_shortcut_pane_ParamLimits

0xcd11,	// (0x00020c3d) grid_ai_shortcut_pane

0xcd2e,	// (0x00020c5a) list_highlight_pane_cp16_ParamLimits

0xcd2e,	// (0x00020c5a) list_highlight_pane_cp16

0xcd3b,	// (0x00020c67) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcd3b,	// (0x00020c67) list_single_idle_plugin_shortcut_pane_g1

0xcd47,	// (0x00020c73) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcd47,	// (0x00020c73) list_single_idle_plugin_shortcut_pane_g2

0xcd65,	// (0x00020c91) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcd65,	// (0x00020c91) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00023ca2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00023ca2) list_single_idle_plugin_shortcut_pane_g

0xcd7a,	// (0x00020ca6) cell_ai_shortcut_pane_ParamLimits

0xcd7a,	// (0x00020ca6) cell_ai_shortcut_pane

0xcd90,	// (0x00020cbc) cell_ai_shortcut_pane_g1_ParamLimits

0xcd90,	// (0x00020cbc) cell_ai_shortcut_pane_g1

0x660f,	// (0x0001a53b) ai_gene_pane_1_cp2

0x6805,	// (0x0001a731) ai_gene_pane_2_cp2

0x680d,	// (0x0001a739) list_highlight_pane_cp15

0x6816,	// (0x0001a742) list_single_idle_plugin_calendar_pane_g1

0x680d,	// (0x0001a739) list_highlight_pane_cp17

0x681e,	// (0x0001a74a) list_single_idle_plugin_calendar_pane_g1_copy1

0x6826,	// (0x0001a752) list_single_idle_plugin_player_pane_g1

0x38bd,	// (0x000177e9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00023ca9) list_single_idle_plugin_player_pane_g

0x682e,	// (0x0001a75a) list_single_idle_plugin_player_pane_t1

0x683c,	// (0x0001a768) list_single_idle_plugin_player_pane_t2

0x684a,	// (0x0001a776) list_single_idle_plugin_player_pane_t3

0x6858,	// (0x0001a784) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00023cae) list_single_idle_plugin_player_pane_t

0x6866,	// (0x0001a792) wait_bar_pane_cp15

0x686e,	// (0x0001a79a) grid_ai_notification_pane

0x38bd,	// (0x000177e9) list_single_idle_plugin_notification_pane_g1

0xcdb2,	// (0x00020cde) cell_ai_notification_pane_ParamLimits

0xcdb2,	// (0x00020cde) cell_ai_notification_pane

0x6884,	// (0x0001a7b0) cell_ai_notification_pane_g1

0x688c,	// (0x0001a7b8) cell_ai_notification_pane_t1

0xcdbf,	// (0x00020ceb) tb_ext_find_button_pane

0xcdc7,	// (0x00020cf3) tb_ext_find_pane_g1

0xcdcf,	// (0x00020cfb) tb_ext_find_pane_t1

0x0e27,	// (0x00014d53) tb_ext_find_button_pane_g1

0x68b8,	// (0x0001a7e4) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00023cb7) tb_ext_find_button_pane_g

0xcbda,	// (0x00020b06) main_idle_act4_pane_t1_ParamLimits

0xcbf2,	// (0x00020b1e) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00023c75) main_idle_act4_pane_t_ParamLimits

0xcc26,	// (0x00020b52) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcc3d,	// (0x00020b69) sat_plugin_idle_act4_pane_ParamLimits

0xcc3d,	// (0x00020b69) sat_plugin_idle_act4_pane

0xcddd,	// (0x00020d09) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcddd,	// (0x00020d09) sat_plugin_idle_act4_pane_t1

0xcdf5,	// (0x00020d21) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcdf5,	// (0x00020d21) sat_plugin_idle_act4_pane_t2

0xce0d,	// (0x00020d39) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce0d,	// (0x00020d39) sat_plugin_idle_act4_pane_t3

0xce25,	// (0x00020d51) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce25,	// (0x00020d51) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00023cbc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00023cbc) sat_plugin_idle_act4_pane_t

0xdd50,	// (0x00021c7c) popup_battery_window_ParamLimits

0xdd50,	// (0x00021c7c) popup_battery_window

0xc3ea,	// (0x00020316) bg_popup_sub_pane_cp25_ParamLimits

0xc3ea,	// (0x00020316) bg_popup_sub_pane_cp25

0x690d,	// (0x0001a839) popup_battery_window_g1_ParamLimits

0x690d,	// (0x0001a839) popup_battery_window_g1

0x6919,	// (0x0001a845) popup_battery_window_t1_ParamLimits

0x6919,	// (0x0001a845) popup_battery_window_t1

0x692b,	// (0x0001a857) popup_battery_window_t2_ParamLimits

0x692b,	// (0x0001a857) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00023cc5) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00023cc5) popup_battery_window_t

0xad16,	// (0x0001ec42) midp_canvas_pane_ParamLimits

0xad72,	// (0x0001ec9e) midp_keypad_pane_ParamLimits

0xad72,	// (0x0001ec9e) midp_keypad_pane

0x17f0,	// (0x0001571c) main_midp_pane_ParamLimits

0x430e,	// (0x0001823a) signal_pane_g2_cp_ParamLimits

0xce3d,	// (0x00020d69) aid_size_cell_midp_keypad_ParamLimits

0xce3d,	// (0x00020d69) aid_size_cell_midp_keypad

0xce5b,	// (0x00020d87) midp_keyp_game_grid_pane_ParamLimits

0xce5b,	// (0x00020d87) midp_keyp_game_grid_pane

0xce82,	// (0x00020dae) midp_keyp_rocker_pane_ParamLimits

0xce82,	// (0x00020dae) midp_keyp_rocker_pane

0xced1,	// (0x00020dfd) midp_keyp_sk_left_pane_ParamLimits

0xced1,	// (0x00020dfd) midp_keyp_sk_left_pane

0xcf27,	// (0x00020e53) midp_keyp_sk_right_pane_ParamLimits

0xcf27,	// (0x00020e53) midp_keyp_sk_right_pane

0xc22d,	// (0x00020159) bg_button_pane_cp03

0xcf7d,	// (0x00020ea9) midp_keyp_sk_left_pane_g1

0xc22d,	// (0x00020159) bg_button_pane_cp04

0xcf7d,	// (0x00020ea9) midp_keyp_sk_right_pane_g1

0x484e,	// (0x0001877a) midp_keyp_rocker_pane_g1

0xcf85,	// (0x00020eb1) keyp_game_cell_pane_ParamLimits

0xcf85,	// (0x00020eb1) keyp_game_cell_pane

0xc22d,	// (0x00020159) bg_button_pane_cp02

0xcfab,	// (0x00020ed7) keyp_game_cell_pane_g1

0x8ec2,	// (0x0001cdee) popup_fep_vkb2_window_ParamLimits

0x8ec2,	// (0x0001cdee) popup_fep_vkb2_window

0x9b36,	// (0x0001da62) aid_size_cell_vkb2_ParamLimits

0x9b36,	// (0x0001da62) aid_size_cell_vkb2

0x9b6c,	// (0x0001da98) popup_fep_vkb2_window_g1_ParamLimits

0x9b6c,	// (0x0001da98) popup_fep_vkb2_window_g1

0x9bbc,	// (0x0001dae8) vkb2_area_bottom_pane_ParamLimits

0x9bbc,	// (0x0001dae8) vkb2_area_bottom_pane

0x9c18,	// (0x0001db44) vkb2_area_keypad_pane_ParamLimits

0x9c18,	// (0x0001db44) vkb2_area_keypad_pane

0x9c66,	// (0x0001db92) vkb2_area_top_pane_ParamLimits

0x9c66,	// (0x0001db92) vkb2_area_top_pane

0x9cec,	// (0x0001dc18) vkb2_top_entry_pane_ParamLimits

0x9cec,	// (0x0001dc18) vkb2_top_entry_pane

0x9d19,	// (0x0001dc45) vkb2_top_grid_left_pane_ParamLimits

0x9d19,	// (0x0001dc45) vkb2_top_grid_left_pane

0x9d39,	// (0x0001dc65) vkb2_top_grid_right_pane_ParamLimits

0x9d39,	// (0x0001dc65) vkb2_top_grid_right_pane

0xf188,	// (0x000230b4) vkb2_cell_keypad_pane_ParamLimits

0xf188,	// (0x000230b4) vkb2_cell_keypad_pane

0x9d7f,	// (0x0001dcab) vkb2_area_bottom_grid_pane_ParamLimits

0x9d7f,	// (0x0001dcab) vkb2_area_bottom_grid_pane

0x9da9,	// (0x0001dcd5) vkb2_area_bottom_pane_g1_ParamLimits

0x9da9,	// (0x0001dcd5) vkb2_area_bottom_pane_g1

0x9dcf,	// (0x0001dcfb) vkb2_area_bottom_pane_g2_ParamLimits

0x9dcf,	// (0x0001dcfb) vkb2_area_bottom_pane_g2

0x9e00,	// (0x0001dd2c) vkb2_area_bottom_pane_g3_ParamLimits

0x9e00,	// (0x0001dd2c) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00023cca) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00023cca) vkb2_area_bottom_pane_g

0xf235,	// (0x00023161) vkb2_top_cell_left_pane_ParamLimits

0xf235,	// (0x00023161) vkb2_top_cell_left_pane

0xcfb4,	// (0x00020ee0) vkb2_top_entry_pane_g1_ParamLimits

0xcfb4,	// (0x00020ee0) vkb2_top_entry_pane_g1

0xcfc2,	// (0x00020eee) vkb2_top_entry_pane_t1_ParamLimits

0xcfc2,	// (0x00020eee) vkb2_top_entry_pane_t1

0x6ad5,	// (0x0001aa01) vkb2_top_entry_pane_t2_ParamLimits

0x6ad5,	// (0x0001aa01) vkb2_top_entry_pane_t2

0x6b07,	// (0x0001aa33) vkb2_top_entry_pane_t3_ParamLimits

0x6b07,	// (0x0001aa33) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00023cd1) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00023cd1) vkb2_top_entry_pane_t

0x9e6a,	// (0x0001dd96) vkb2_top_grid_right_pane_g1_ParamLimits

0x9e6a,	// (0x0001dd96) vkb2_top_grid_right_pane_g1

0xf282,	// (0x000231ae) vkb2_top_grid_right_pane_g2_ParamLimits

0xf282,	// (0x000231ae) vkb2_top_grid_right_pane_g2

0xf29a,	// (0x000231c6) vkb2_top_grid_right_pane_g3_ParamLimits

0xf29a,	// (0x000231c6) vkb2_top_grid_right_pane_g3

0x9e80,	// (0x0001ddac) vkb2_top_grid_right_pane_g4_ParamLimits

0x9e80,	// (0x0001ddac) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00023cd8) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00023cd8) vkb2_top_grid_right_pane_g

0xf2b2,	// (0x000231de) vkb2_top_cell_left_pane_g1

0xf2c9,	// (0x000231f5) vkb2_cell_keypad_pane_g1_ParamLimits

0xf2c9,	// (0x000231f5) vkb2_cell_keypad_pane_g1

0x6b2b,	// (0x0001aa57) vkb2_cell_keypad_pane_t1_ParamLimits

0x6b2b,	// (0x0001aa57) vkb2_cell_keypad_pane_t1

0xf2d7,	// (0x00023203) vkb2_cell_bottom_grid_pane_ParamLimits

0xf2d7,	// (0x00023203) vkb2_cell_bottom_grid_pane

0xf310,	// (0x0002323c) vkb2_cell_bottom_grid_pane_g1

0xcc6e,	// (0x00020b9a) aid_call2_pane_cp02

0xcc76,	// (0x00020ba2) aid_call_pane_cp02

0xcc7e,	// (0x00020baa) clock_digital_number_pane_cp10

0xcc86,	// (0x00020bb2) clock_digital_number_pane_cp11

0xcc8e,	// (0x00020bba) clock_digital_number_pane_cp12

0xcc96,	// (0x00020bc2) clock_digital_number_pane_cp13

0xcc9e,	// (0x00020bca) clock_digital_separator_pane_cp10

0x0e27,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g1

0x0e27,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g2

0xcca6,	// (0x00020bd2) popup_clock_digital_analogue_window_cp2_g3

0x0e27,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g4

0xcca6,	// (0x00020bd2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00023c8d) popup_clock_digital_analogue_window_cp2_g

0xccae,	// (0x00020bda) popup_clock_digital_analogue_window_cp2_t1

0xccbc,	// (0x00020be8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00023c98) popup_clock_digital_analogue_window_cp2_t

0x484e,	// (0x0001877a) clock_digital_number_pane_cp10_g1

0x484e,	// (0x0001877a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00023a74) clock_digital_number_pane_cp10_g

0x484e,	// (0x0001877a) clock_digital_separator_pane_cp10_g1

0x484e,	// (0x0001877a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00023a74) clock_digital_separator_pane_cp10_g

0x6557,	// (0x0001a483) uniindi_top_pane_g3

0x6568,	// (0x0001a494) uniindi_top_pane_g4

0xf213,	// (0x0002313f) vkb2_row_keypad_pane_ParamLimits

0xf213,	// (0x0002313f) vkb2_row_keypad_pane

0xf32c,	// (0x00023258) vkb2_cell_t_keypad_pane_ParamLimits

0xf32c,	// (0x00023258) vkb2_cell_t_keypad_pane

0xf33c,	// (0x00023268) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf33c,	// (0x00023268) vkb2_cell_t_keypad_pane_cp08

0xf351,	// (0x0002327d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf351,	// (0x0002327d) vkb2_cell_t_keypad_pane_cp09

0xf365,	// (0x00023291) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf365,	// (0x00023291) vkb2_cell_t_keypad_pane_cp01

0xf376,	// (0x000232a2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf376,	// (0x000232a2) vkb2_cell_t_keypad_pane_cp02

0xf387,	// (0x000232b3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf387,	// (0x000232b3) vkb2_cell_t_keypad_pane_cp03

0xf398,	// (0x000232c4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf398,	// (0x000232c4) vkb2_cell_t_keypad_pane_cp04

0xf3a9,	// (0x000232d5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf3a9,	// (0x000232d5) vkb2_cell_t_keypad_pane_cp05

0xf3ba,	// (0x000232e6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf3ba,	// (0x000232e6) vkb2_cell_t_keypad_pane_cp06

0xf3cd,	// (0x000232f9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf3cd,	// (0x000232f9) vkb2_cell_t_keypad_pane_cp07

0xf3e2,	// (0x0002330e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf3e2,	// (0x0002330e) vkb2_cell_t_keypad_pane_cp10

0xef03,	// (0x00022e2f) vkb2_cell_t_keypad_pane_g1

0x6b42,	// (0x0001aa6e) vkb2_cell_t_keypad_pane_t1

0xdc8b,	// (0x00021bb7) popup_grid_graphic2_window

0xcffb,	// (0x00020f27) aid_size_cell_graphic2_ParamLimits

0xcffb,	// (0x00020f27) aid_size_cell_graphic2

0xd039,	// (0x00020f65) bg_popup_window_pane_cp21_ParamLimits

0xd039,	// (0x00020f65) bg_popup_window_pane_cp21

0xd047,	// (0x00020f73) graphic2_pages_pane_ParamLimits

0xd047,	// (0x00020f73) graphic2_pages_pane

0xd09f,	// (0x00020fcb) grid_graphic2_control_pane_ParamLimits

0xd09f,	// (0x00020fcb) grid_graphic2_control_pane

0xd0e7,	// (0x00021013) grid_graphic2_pane_ParamLimits

0xd0e7,	// (0x00021013) grid_graphic2_pane

0xd172,	// (0x0002109e) cell_graphic2_pane

0xdc8b,	// (0x00021bb7) main_comp_mode_pane

0x5d5b,	// (0x00019c87) list_ai3_gene_pane_ParamLimits

0xc9ae,	// (0x000208da) bg_popup_window_pane_cp19_ParamLimits

0x6196,	// (0x0001a0c2) bg_touch_area_indi_pane_ParamLimits

0x6196,	// (0x0001a0c2) bg_touch_area_indi_pane

0x61ac,	// (0x0001a0d8) bg_touch_area_indi_pane_cp01_ParamLimits

0x61ac,	// (0x0001a0d8) bg_touch_area_indi_pane_cp01

0x61c2,	// (0x0001a0ee) bg_touch_area_indi_pane_cp02_ParamLimits

0x61c2,	// (0x0001a0ee) bg_touch_area_indi_pane_cp02

0x61dc,	// (0x0001a108) bg_touch_area_indi_pane_cp03_ParamLimits

0x61dc,	// (0x0001a108) bg_touch_area_indi_pane_cp03

0x61f6,	// (0x0001a122) popup_slider_window_g1_ParamLimits

0x6212,	// (0x0001a13e) popup_slider_window_g2_ParamLimits

0x622e,	// (0x0001a15a) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00023c22) popup_slider_window_g_ParamLimits

0x6294,	// (0x0001a1c0) popup_slider_window_t1_ParamLimits

0x6308,	// (0x0001a234) small_volume_slider_vertical_pane_ParamLimits

0xd172,	// (0x0002109e) cell_graphic2_pane_ParamLimits

0xd1d5,	// (0x00021101) bg_button_pane_cp10_ParamLimits

0xd1d5,	// (0x00021101) bg_button_pane_cp10

0xd1e8,	// (0x00021114) bg_button_pane_cp11_ParamLimits

0xd1e8,	// (0x00021114) bg_button_pane_cp11

0xd1fb,	// (0x00021127) graphic2_pages_pane_g1_ParamLimits

0xd1fb,	// (0x00021127) graphic2_pages_pane_g1

0xd216,	// (0x00021142) graphic2_pages_pane_g2_ParamLimits

0xd216,	// (0x00021142) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00023ce6) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00023ce6) graphic2_pages_pane_g

0xd22e,	// (0x0002115a) graphic2_pages_pane_t1_ParamLimits

0xd22e,	// (0x0002115a) graphic2_pages_pane_t1

0xd246,	// (0x00021172) cell_graphic2_control_pane_ParamLimits

0xd246,	// (0x00021172) cell_graphic2_control_pane

0xd27a,	// (0x000211a6) cell_graphic2_pane_g1_ParamLimits

0xd27a,	// (0x000211a6) cell_graphic2_pane_g1

0xc20b,	// (0x00020137) cell_graphic2_pane_g2_ParamLimits

0xc20b,	// (0x00020137) cell_graphic2_pane_g2

0xc9a1,	// (0x000208cd) cell_graphic2_pane_g3_ParamLimits

0xc9a1,	// (0x000208cd) cell_graphic2_pane_g3

0xc218,	// (0x00020144) cell_graphic2_pane_g4_ParamLimits

0xc218,	// (0x00020144) cell_graphic2_pane_g4

0xd287,	// (0x000211b3) cell_graphic2_pane_g5_ParamLimits

0xd287,	// (0x000211b3) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00023ceb) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00023ceb) cell_graphic2_pane_g

0xd2a7,	// (0x000211d3) cell_graphic2_pane_t1_ParamLimits

0xd2a7,	// (0x000211d3) cell_graphic2_pane_t1

0x2b0a,	// (0x00016a36) grid_highlight_pane_cp11_ParamLimits

0x2b0a,	// (0x00016a36) grid_highlight_pane_cp11

0xc3ea,	// (0x00020316) bg_button_pane_cp05

0xd2f0,	// (0x0002121c) cell_graphic2_control_pane_g1

0x484e,	// (0x0001877a) bg_touch_area_indi_pane_g1

0x6e2a,	// (0x0001ad56) aid_cmod_rocker_key_size

0x6e34,	// (0x0001ad60) aid_cmode_itu_key_size

0x6e3e,	// (0x0001ad6a) main_cmode_video_pane

0x6e48,	// (0x0001ad74) main_comp_mode_itu_pane

0x6e54,	// (0x0001ad80) main_comp_mode_rocker_pane

0x6e60,	// (0x0001ad8c) cell_cmode_rocker_pane_ParamLimits

0x6e60,	// (0x0001ad8c) cell_cmode_rocker_pane

0x6e74,	// (0x0001ada0) cell_cmode_itu_pane_ParamLimits

0x6e74,	// (0x0001ada0) cell_cmode_itu_pane

0xc96f,	// (0x0002089b) bg_button_pane_cp06_ParamLimits

0xc96f,	// (0x0002089b) bg_button_pane_cp06

0x4ab1,	// (0x000189dd) cell_cmode_rocker_pane_g1_ParamLimits

0x4ab1,	// (0x000189dd) cell_cmode_rocker_pane_g1

0x63af,	// (0x0001a2db) cell_cmode_rocker_pane_g2_ParamLimits

0x63af,	// (0x0001a2db) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00023cfb) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00023cfb) cell_cmode_rocker_pane_g

0xc22d,	// (0x00020159) bg_button_pane_cp07

0x6e8b,	// (0x0001adb7) cell_cmode_itu_pane_g1

0x6e94,	// (0x0001adc0) cell_cmode_itu_pane_t1

0x6ea2,	// (0x0001adce) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00023d00) cell_cmode_itu_pane_t

0x65db,	// (0x0001a507) aid_touch_ctrl_left

0x65e3,	// (0x0001a50f) aid_touch_ctrl_right

0xc22d,	// (0x00020159) compa_mode_pane

0xd318,	// (0x00021244) aid_cmod_rocker_key_size_cp

0xd322,	// (0x0002124e) aid_cmode_itu_key_size_cp

0x6ec4,	// (0x0001adf0) compa_mode_pane_g1

0x6ecc,	// (0x0001adf8) compa_mode_pane_g2

0x6ed4,	// (0x0001ae00) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00023d05) compa_mode_pane_g

0xd32c,	// (0x00021258) main_comp_mode_itu_pane_cp

0xd334,	// (0x00021260) main_comp_mode_rocker_pane_cp

0xd33c,	// (0x00021268) cell_cmode_itu_pane_cp_ParamLimits

0xd33c,	// (0x00021268) cell_cmode_itu_pane_cp

0xd351,	// (0x0002127d) cell_cmode_rocker_pane_cp_ParamLimits

0xd351,	// (0x0002127d) cell_cmode_rocker_pane_cp

0xc96f,	// (0x0002089b) bg_button_pane_cp06_cp_ParamLimits

0xc96f,	// (0x0002089b) bg_button_pane_cp06_cp

0x4ab1,	// (0x000189dd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4ab1,	// (0x000189dd) cell_cmode_rocker_pane_g1_cp

0x484e,	// (0x0001877a) cell_cmode_rocker_pane_g2_cp

0xc22d,	// (0x00020159) bg_button_pane_cp07_cp

0xd363,	// (0x0002128f) cell_cmode_itu_pane_g1_cp

0xd36c,	// (0x00021298) cell_cmode_itu_pane_t1_cp

0xd36c,	// (0x00021298) cell_cmode_itu_pane_t2_cp

0xb5f9,	// (0x0001f525) settings_code_pane_cp2

0xc29d,	// (0x000201c9) bg_popup_window_pane_cp3_ParamLimits

0xc5fe,	// (0x0002052a) heading_pane_cp3_ParamLimits

0xc60a,	// (0x00020536) listscroll_popup_graphic_pane_ParamLimits

0xed11,	// (0x00022c3d) fep_hwr_aid_pane_ParamLimits

0xf0fe,	// (0x0002302a) aid_touch_sctrl_top_ParamLimits

0xf119,	// (0x00023045) sctrl_sk_top_pane_g1_ParamLimits

0xef03,	// (0x00022e2f) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00023c3b) sctrl_sk_top_pane_g_ParamLimits

0xf126,	// (0x00023052) sctrl_sk_top_pane_t1_ParamLimits

0xf0fe,	// (0x0002302a) aid_touch_sctrl_bottom_ParamLimits

0xf126,	// (0x00023052) sctrl_sk_bottom_pane_t1_ParamLimits

0x6521,	// (0x0001a44d) aid_area_touch_clock

0x9cae,	// (0x0001dbda) aid_vkb2_area_top_pane_cell_ParamLimits

0x9cae,	// (0x0001dbda) aid_vkb2_area_top_pane_cell

0x9d59,	// (0x0001dc85) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9d59,	// (0x0001dc85) aid_vkb2_area_bottom_pane_cell

0x6a8d,	// (0x0001a9b9) popup_char_count_window

0x6f2a,	// (0x0001ae56) popup_char_count_window_g1

0x6f33,	// (0x0001ae5f) popup_char_count_window_g2

0x6f3c,	// (0x0001ae68) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00023d0c) popup_char_count_window_g

0x6f45,	// (0x0001ae71) popup_char_count_window_t1

0xf158,	// (0x00023084) popup_fep_char_preview_window_ParamLimits

0xf158,	// (0x00023084) popup_fep_char_preview_window

0x9cce,	// (0x0001dbfa) vkb2_top_candi_pane_ParamLimits

0x9cce,	// (0x0001dbfa) vkb2_top_candi_pane

0xd37a,	// (0x000212a6) cell_vkb2_top_candi_pane_ParamLimits

0xd37a,	// (0x000212a6) cell_vkb2_top_candi_pane

0xf3f7,	// (0x00023323) bg_popup_fep_char_preview_window_ParamLimits

0xf3f7,	// (0x00023323) bg_popup_fep_char_preview_window

0xf405,	// (0x00023331) popup_fep_char_preview_window_t1_ParamLimits

0xf405,	// (0x00023331) popup_fep_char_preview_window_t1

0x6fa4,	// (0x0001aed0) bg_popup_fep_char_preview_window_g1

0x6fac,	// (0x0001aed8) bg_popup_fep_char_preview_window_g2

0x6fb4,	// (0x0001aee0) bg_popup_fep_char_preview_window_g3

0x6fbc,	// (0x0001aee8) bg_popup_fep_char_preview_window_g4

0x6fc4,	// (0x0001aef0) bg_popup_fep_char_preview_window_g5

0xf43f,	// (0x0002336b) bg_popup_fep_char_preview_window_g6

0x6fcc,	// (0x0001aef8) bg_popup_fep_char_preview_window_g7

0x6fd4,	// (0x0001af00) bg_popup_fep_char_preview_window_g8

0x6fdc,	// (0x0001af08) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00023d13) bg_popup_fep_char_preview_window_g

0xef03,	// (0x00022e2f) cell_vkb2_top_candi_pane_g1_ParamLimits

0xef03,	// (0x00022e2f) cell_vkb2_top_candi_pane_g1

0xef11,	// (0x00022e3d) cell_vkb2_top_candi_pane_g2_ParamLimits

0xef11,	// (0x00022e3d) cell_vkb2_top_candi_pane_g2

0x57e5,	// (0x00019711) cell_vkb2_top_candi_pane_g3_ParamLimits

0x57e5,	// (0x00019711) cell_vkb2_top_candi_pane_g3

0xf447,	// (0x00023373) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf447,	// (0x00023373) cell_vkb2_top_candi_pane_g4

0x5175,	// (0x000190a1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5175,	// (0x000190a1) cell_vkb2_top_candi_pane_g5

0xf468,	// (0x00023394) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf468,	// (0x00023394) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00023d26) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00023d26) cell_vkb2_top_candi_pane_g

0xf476,	// (0x000233a2) cell_vkb2_top_candi_pane_t1

0xeb20,	// (0x00022a4c) aid_size_touch_slider_mark_ParamLimits

0xeb20,	// (0x00022a4c) aid_size_touch_slider_mark

0xd083,	// (0x00020faf) grid_graphic2_catg_pane_ParamLimits

0xd083,	// (0x00020faf) grid_graphic2_catg_pane

0xd141,	// (0x0002106d) popup_grid_graphic2_window_t1_ParamLimits

0xd141,	// (0x0002106d) popup_grid_graphic2_window_t1

0xd157,	// (0x00021083) popup_grid_graphic2_window_t2_ParamLimits

0xd157,	// (0x00021083) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00023ce1) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00023ce1) popup_grid_graphic2_window_t

0xc3ea,	// (0x00020316) bg_button_pane_cp05_ParamLimits

0xd2f0,	// (0x0002121c) cell_graphic2_control_pane_g1_ParamLimits

0xd3e4,	// (0x00021310) cell_graphic2_catg_pane_ParamLimits

0xd3e4,	// (0x00021310) cell_graphic2_catg_pane

0xc22d,	// (0x00020159) bg_button_pane_cp12

0xd3f6,	// (0x00021322) cell_graphic2_catg_pane_g1

0x64ed,	// (0x0001a419) cell_tb_ext_pane_t1_ParamLimits

0xf255,	// (0x00023181) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf255,	// (0x00023181) vkb2_top_cell_right_narrow_pane

0xf26d,	// (0x00023199) vkb2_top_cell_right_wide_pane_ParamLimits

0xf26d,	// (0x00023199) vkb2_top_cell_right_wide_pane

0xebfb,	// (0x00022b27) bg_vkb2_func_pane_ParamLimits

0xebfb,	// (0x00022b27) bg_vkb2_func_pane

0xf2b2,	// (0x000231de) vkb2_top_cell_left_pane_g1_ParamLimits

0xebfb,	// (0x00022b27) bg_vkb2_fuc_pane_cp03_ParamLimits

0xebfb,	// (0x00022b27) bg_vkb2_fuc_pane_cp03

0xf310,	// (0x0002323c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1d5e,	// (0x00015c8a) bg_vkb2_func_pane_g1

0x1d66,	// (0x00015c92) bg_vkb2_func_pane_g2

0x1d76,	// (0x00015ca2) bg_vkb2_func_pane_g3

0x1d6e,	// (0x00015c9a) bg_vkb2_func_pane_g4

0x1d7e,	// (0x00015caa) bg_vkb2_func_pane_g5

0x1d86,	// (0x00015cb2) bg_vkb2_func_pane_g6

0x1d8e,	// (0x00015cba) bg_vkb2_func_pane_g7

0x1d96,	// (0x00015cc2) bg_vkb2_func_pane_g8

0x1d56,	// (0x00015c82) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00023d33) bg_vkb2_func_pane_g

0xebfb,	// (0x00022b27) bg_vkb2_fuc_pane_cp01_ParamLimits

0xebfb,	// (0x00022b27) bg_vkb2_fuc_pane_cp01

0xf2b2,	// (0x000231de) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf2b2,	// (0x000231de) vkb2_top_cell_right_wide_pane_g1

0xebfb,	// (0x00022b27) bg_vkb2_fuc_pane_cp02_ParamLimits

0xebfb,	// (0x00022b27) bg_vkb2_fuc_pane_cp02

0xf310,	// (0x0002323c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf310,	// (0x0002323c) vkb2_top_cell_right_narrow_pane_g1

0xc13f,	// (0x0002006b) aid_touch_area_decrease_ParamLimits

0xc13f,	// (0x0002006b) aid_touch_area_decrease

0xc179,	// (0x000200a5) aid_touch_area_increase_ParamLimits

0xc179,	// (0x000200a5) aid_touch_area_increase

0xc1a1,	// (0x000200cd) aid_touch_area_mute_ParamLimits

0xc1a1,	// (0x000200cd) aid_touch_area_mute

0xc1c9,	// (0x000200f5) aid_touch_area_slider_ParamLimits

0xc1c9,	// (0x000200f5) aid_touch_area_slider

0xc9ba,	// (0x000208e6) popup_slider_window_g4_ParamLimits

0xc9ba,	// (0x000208e6) popup_slider_window_g4

0xc9e2,	// (0x0002090e) popup_slider_window_g5_ParamLimits

0xc9e2,	// (0x0002090e) popup_slider_window_g5

0xca16,	// (0x00020942) popup_slider_window_g6_ParamLimits

0xca16,	// (0x00020942) popup_slider_window_g6

0x62c2,	// (0x0001a1ee) popup_slider_window_t2_ParamLimits

0x62c2,	// (0x0001a1ee) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00023c2f) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00023c2f) popup_slider_window_t

0xca32,	// (0x0002095e) slider_pane_ParamLimits

0xca32,	// (0x0002095e) slider_pane

0x6fff,	// (0x0001af2b) slider_pane_g1_ParamLimits

0x6fff,	// (0x0001af2b) slider_pane_g1

0x7013,	// (0x0001af3f) slider_pane_g2_ParamLimits

0x7013,	// (0x0001af3f) slider_pane_g2

0x7029,	// (0x0001af55) slider_pane_g3_ParamLimits

0x7029,	// (0x0001af55) slider_pane_g3

0x0003,

0xfe1a,	// (0x00023d46) slider_pane_g_ParamLimits

0xfe1a,	// (0x00023d46) slider_pane_g

0x9815,	// (0x0001d741) popup_tb_float_extension_window_ParamLimits

0x9815,	// (0x0001d741) popup_tb_float_extension_window

0x7055,	// (0x0001af81) aid_size_cell_tb_float_ext

0xc22d,	// (0x00020159) bg_popup_sub_window_cp28

0x7061,	// (0x0001af8d) grid_tb_float_ext_pane

0x706d,	// (0x0001af99) cell_tb_float_ext_pane_ParamLimits

0x706d,	// (0x0001af99) cell_tb_float_ext_pane

0x7089,	// (0x0001afb5) cell_tb_float_ext_pane_g1

0x7092,	// (0x0001afbe) grid_highlight_pane_cp12

0x9aa7,	// (0x0001d9d3) cell_last_hwr_side_pane_ParamLimits

0x9aa7,	// (0x0001d9d3) cell_last_hwr_side_pane

0x484e,	// (0x0001877a) cell_last_hwr_side_pane_g1

0x709b,	// (0x0001afc7) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x00023d4f) cell_last_hwr_side_pane_g

0x9e35,	// (0x0001dd61) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9e35,	// (0x0001dd61) vkb2_area_bottom_space_btn_pane

0xef03,	// (0x00022e2f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6b42,	// (0x0001aa6e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf476,	// (0x000233a2) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf494,	// (0x000233c0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf494,	// (0x000233c0) vkb2_area_bottom_space_btn_pane_g1

0xf4ce,	// (0x000233fa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf4ce,	// (0x000233fa) vkb2_area_bottom_space_btn_pane_g2

0xf504,	// (0x00023430) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf504,	// (0x00023430) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00023d54) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00023d54) vkb2_area_bottom_space_btn_pane_g

0xedc8,	// (0x00022cf4) cel_fep_hwr_func_pane_ParamLimits

0xedc8,	// (0x00022cf4) cel_fep_hwr_func_pane

0x9a7c,	// (0x0001d9a8) cell_hwr_side_button_pane_ParamLimits

0x9a7c,	// (0x0001d9a8) cell_hwr_side_button_pane

0x6521,	// (0x0001a44d) aid_area_touch_clock_ParamLimits

0xc3ea,	// (0x00020316) bg_uniindi_top_pane_ParamLimits

0x6535,	// (0x0001a461) uniindi_top_pane_g1_ParamLimits

0x654b,	// (0x0001a477) uniindi_top_pane_g2_ParamLimits

0x6557,	// (0x0001a483) uniindi_top_pane_g3_ParamLimits

0x6568,	// (0x0001a494) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00023c67) uniindi_top_pane_g_ParamLimits

0x6575,	// (0x0001a4a1) uniindi_top_pane_t1_ParamLimits

0xc3ea,	// (0x00020316) bg_vkb2_func_pane_cp01_ParamLimits

0xc3ea,	// (0x00020316) bg_vkb2_func_pane_cp01

0x70a4,	// (0x0001afd0) cel_fep_hwr_func_pane_g1_ParamLimits

0x70a4,	// (0x0001afd0) cel_fep_hwr_func_pane_g1

0xc3ea,	// (0x00020316) bg_vkb2_func_pane_cp02_ParamLimits

0xc3ea,	// (0x00020316) bg_vkb2_func_pane_cp02

0x70a4,	// (0x0001afd0) cell_hwr_side_button_pane_g1_ParamLimits

0x70a4,	// (0x0001afd0) cell_hwr_side_button_pane_g1

0x1bad,	// (0x00015ad9) status_pane_g4_ParamLimits

0x1bad,	// (0x00015ad9) status_pane_g4

0x1bc7,	// (0x00015af3) status_pane_t1

0x4601,	// (0x0001852d) form2_midp_gauge_slider_cont_pane

0x4609,	// (0x00018535) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb90f,	// (0x0001f83b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb921,	// (0x0001f84d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00023a27) form2_midp_gauge_slider_pane_t_ParamLimits

0x463f,	// (0x0001856b) form2_midp_slider_pane_ParamLimits

0xf14a,	// (0x00023076) aid_size_cell_func_vkb2_ParamLimits

0xf14a,	// (0x00023076) aid_size_cell_func_vkb2

0x7041,	// (0x0001af6d) slider_pane_g4_ParamLimits

0x7041,	// (0x0001af6d) slider_pane_g4

0x9e96,	// (0x0001ddc2) form2_midp_gauge_slider_pane_t2_cp01

0x9ea4,	// (0x0001ddd0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9ea4,	// (0x0001ddd0) form2_midp_gauge_slider_pane_t3_cp01

0x0007,	// (0x00013f33) form2_midp_slider_pane_cp01

0xc22d,	// (0x00020159) navi_smil_pane

0x70dd,	// (0x0001b009) navi_smil_pane_g1

0x70e5,	// (0x0001b011) navi_smil_pane_t1

0x70b2,	// (0x0001afde) form2_midp_slider_pane_g1

0x70bb,	// (0x0001afe7) form2_midp_slider_pane_g2

0x70c3,	// (0x0001afef) form2_midp_slider_pane_g3

0x70b2,	// (0x0001afde) form2_midp_slider_pane_g4

0xd3ff,	// (0x0002132b) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x00023d5d) form2_midp_slider_pane_g

0xf53e,	// (0x0002346a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf53e,	// (0x0002346a) vkb2_area_bottom_space_btn_pane_g4

0xaff9,	// (0x0001ef25) lc0_navi_pane_ParamLimits

0xaff9,	// (0x0001ef25) lc0_navi_pane

0xb069,	// (0x0001ef95) lc0_stat_indi_pane_ParamLimits

0xb069,	// (0x0001ef95) lc0_stat_indi_pane

0xb07e,	// (0x0001efaa) ls0_title_pane_ParamLimits

0xb07e,	// (0x0001efaa) ls0_title_pane

0xc96f,	// (0x0002089b) bg_popup_sub_pane_cp14_ParamLimits

0x6508,	// (0x0001a434) list_uniindi_pane_ParamLimits

0x6514,	// (0x0001a440) uniindi_top_pane_ParamLimits

0x65b3,	// (0x0001a4df) list_single_uniindi_pane_g1_ParamLimits

0x65c6,	// (0x0001a4f2) list_single_uniindi_pane_t1_ParamLimits

0x9ec1,	// (0x0001dded) lc0_stat_clock_pane_ParamLimits

0x9ec1,	// (0x0001dded) lc0_stat_clock_pane

0xd408,	// (0x00021334) lc0_stat_indi_pane_g1_ParamLimits

0xd408,	// (0x00021334) lc0_stat_indi_pane_g1

0xd415,	// (0x00021341) lc0_stat_indi_pane_g2_ParamLimits

0xd415,	// (0x00021341) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00023d68) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00023d68) lc0_stat_indi_pane_g

0x9ece,	// (0x0001ddfa) lc0_uni_indicator_pane_ParamLimits

0x9ece,	// (0x0001ddfa) lc0_uni_indicator_pane

0xd422,	// (0x0002134e) ls0_title_pane_g1_ParamLimits

0xd422,	// (0x0002134e) ls0_title_pane_g1

0xd436,	// (0x00021362) ls0_title_pane_t1_ParamLimits

0xd436,	// (0x00021362) ls0_title_pane_t1

0x9edb,	// (0x0001de07) lc0_uni_indicator_pane_g1_ParamLimits

0x9edb,	// (0x0001de07) lc0_uni_indicator_pane_g1

0x7157,	// (0x0001b083) lc0_stat_clock_pane_t1

0xdc8b,	// (0x00021bb7) main_ai5_pane

0x7165,	// (0x0001b091) ai5_sk_pane_ParamLimits

0x7165,	// (0x0001b091) ai5_sk_pane

0xd464,	// (0x00021390) cell_ai5_widget_pane_ParamLimits

0xd464,	// (0x00021390) cell_ai5_widget_pane

0xd7be,	// (0x000216ea) aid_size_cell_widget_grid

0x7722,	// (0x0001b64e) bg_ai5_widget_pane_ParamLimits

0x7722,	// (0x0001b64e) bg_ai5_widget_pane

0xd7f2,	// (0x0002171e) cell_ai5_widget_pane_g2

0xd806,	// (0x00021732) cell_ai5_widget_pane_g3

0xd820,	// (0x0002174c) cell_ai5_widget_pane_g4

0xd830,	// (0x0002175c) cell_ai5_widget_pane_g5

0xd840,	// (0x0002176c) cell_ai5_widget_pane_g6

0xd84c,	// (0x00021778) cell_ai5_widget_pane_g7

0xd858,	// (0x00021784) cell_ai5_widget_pane_t1_ParamLimits

0xd858,	// (0x00021784) cell_ai5_widget_pane_t1

0x7859,	// (0x0001b785) cell_ai5_widget_pane_t2_ParamLimits

0x7859,	// (0x0001b785) cell_ai5_widget_pane_t2

0x7871,	// (0x0001b79d) cell_ai5_widget_pane_t3_ParamLimits

0x7871,	// (0x0001b79d) cell_ai5_widget_pane_t3

0xd875,	// (0x000217a1) cell_ai5_widget_pane_t4_ParamLimits

0xd875,	// (0x000217a1) cell_ai5_widget_pane_t4

0xd89b,	// (0x000217c7) cell_ai5_widget_pane_t5_ParamLimits

0xd89b,	// (0x000217c7) cell_ai5_widget_pane_t5

0x78cf,	// (0x0001b7fb) cell_ai5_widget_pane_t6_ParamLimits

0x78cf,	// (0x0001b7fb) cell_ai5_widget_pane_t6

0x78e1,	// (0x0001b80d) cell_ai5_widget_pane_t7_ParamLimits

0x78e1,	// (0x0001b80d) cell_ai5_widget_pane_t7

0x78fa,	// (0x0001b826) cell_ai5_widget_pane_t8_ParamLimits

0x78fa,	// (0x0001b826) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00023d82) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00023d82) cell_ai5_widget_pane_t

0xd908,	// (0x00021834) grid_ai5_widget_pane

0xc96f,	// (0x0002089b) highlight_cell_ai5_widget_pane_ParamLimits

0xc96f,	// (0x0002089b) highlight_cell_ai5_widget_pane

0xd916,	// (0x00021842) ai5_sk_left_pane

0xd920,	// (0x0002184c) ai5_sk_middle_pane

0xd92a,	// (0x00021856) ai5_sk_right_pane

0x7985,	// (0x0001b8b1) bg_ai5_widget_pane_g1_ParamLimits

0x7985,	// (0x0001b8b1) bg_ai5_widget_pane_g1

0x7991,	// (0x0001b8bd) bg_ai5_widget_pane_g2_ParamLimits

0x7991,	// (0x0001b8bd) bg_ai5_widget_pane_g2

0x799d,	// (0x0001b8c9) bg_ai5_widget_pane_g3_ParamLimits

0x799d,	// (0x0001b8c9) bg_ai5_widget_pane_g3

0x79a9,	// (0x0001b8d5) bg_ai5_widget_pane_g4_ParamLimits

0x79a9,	// (0x0001b8d5) bg_ai5_widget_pane_g4

0x79b5,	// (0x0001b8e1) bg_ai5_widget_pane_g5_ParamLimits

0x79b5,	// (0x0001b8e1) bg_ai5_widget_pane_g5

0x79c1,	// (0x0001b8ed) bg_ai5_widget_pane_g6_ParamLimits

0x79c1,	// (0x0001b8ed) bg_ai5_widget_pane_g6

0x79cd,	// (0x0001b8f9) bg_ai5_widget_pane_g7_ParamLimits

0x79cd,	// (0x0001b8f9) bg_ai5_widget_pane_g7

0x79d9,	// (0x0001b905) bg_ai5_widget_pane_g8_ParamLimits

0x79d9,	// (0x0001b905) bg_ai5_widget_pane_g8

0x79e5,	// (0x0001b911) bg_ai5_widget_pane_g9_ParamLimits

0x79e5,	// (0x0001b911) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00023d97) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00023d97) bg_ai5_widget_pane_g

0xd960,	// (0x0002188c) cell_shortcut_ai5_widget_pane_ParamLimits

0xd960,	// (0x0002188c) cell_shortcut_ai5_widget_pane

0x14c1,	// (0x000153ed) bg_cell_shortcut_ai5_widget_pane

0x7a30,	// (0x0001b95c) cell_grid_ai5_widget_pane_g1

0x14c1,	// (0x000153ed) highlight_cell_shortcut_ai5_widget_pane

0x1d5e,	// (0x00015c8a) ai5_sk_left_pane_g1

0x7a39,	// (0x0001b965) ai5_sk_left_pane_g2

0x7a41,	// (0x0001b96d) ai5_sk_left_pane_g3

0x7a49,	// (0x0001b975) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00023daa) ai5_sk_left_pane_g

0x7a51,	// (0x0001b97d) ai5_sk_left_pane_t1

0x1d66,	// (0x00015c92) ai5_sk_right_pane_g1

0x7a5f,	// (0x0001b98b) ai5_sk_right_pane_g2

0x7a67,	// (0x0001b993) ai5_sk_right_pane_g3

0x7a6f,	// (0x0001b99b) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00023db3) ai5_sk_right_pane_g

0x7a77,	// (0x0001b9a3) ai5_sk_right_pane_t1

0x1d66,	// (0x00015c92) ai5_sk_middle_pane_g1

0x1d5e,	// (0x00015c8a) ai5_sk_middle_pane_g2

0x1d7e,	// (0x00015caa) ai5_sk_middle_pane_g3

0x7a67,	// (0x0001b993) ai5_sk_middle_pane_g4

0x7a41,	// (0x0001b96d) ai5_sk_middle_pane_g5

0x7a85,	// (0x0001b9b1) ai5_sk_middle_pane_g6

0xd973,	// (0x0002189f) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00023dbc) ai5_sk_middle_pane_g

0xaee3,	// (0x0001ee0f) aid_touch_area_size_lc0_ParamLimits

0xaee3,	// (0x0001ee0f) aid_touch_area_size_lc0

0xef32,	// (0x00022e5e) cell_hwr_candidate_pane_t1_ParamLimits

0x1876,	// (0x000157a2) aid_touch_navi_pane

0xb189,	// (0x0001f0b5) status_dt_navi_pane_ParamLimits

0xb189,	// (0x0001f0b5) status_dt_navi_pane

0xb1a1,	// (0x0001f0cd) status_dt_sta_pane_ParamLimits

0xb1a1,	// (0x0001f0cd) status_dt_sta_pane

0xd97b,	// (0x000218a7) dt_sta_controll_pane

0xd988,	// (0x000218b4) dt_sta_indi_pane

0xd995,	// (0x000218c1) dt_sta_title_pane

0xc3ea,	// (0x00020316) bg_dt_sta_indi_pane_ParamLimits

0xc3ea,	// (0x00020316) bg_dt_sta_indi_pane

0xd9a7,	// (0x000218d3) dt_sta_battery_pane

0xd9af,	// (0x000218db) dt_sta_indi_pane_g1

0xd9b8,	// (0x000218e4) dt_sta_indi_pane_g2

0xd9c1,	// (0x000218ed) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00023dcb) dt_sta_indi_pane_g

0xd9ca,	// (0x000218f6) dt_sta_signal_pane

0xc96f,	// (0x0002089b) bg_dt_sta_title_pane_ParamLimits

0xc96f,	// (0x0002089b) bg_dt_sta_title_pane

0xd9d3,	// (0x000218ff) dt_sta_title_pane_g1

0xd9db,	// (0x00021907) dt_sta_title_pane_t1_ParamLimits

0xd9db,	// (0x00021907) dt_sta_title_pane_t1

0xc22d,	// (0x00020159) bg_dt_sta_control_pane

0xd9f0,	// (0x0002191c) dt_sta_controll_pane_g1

0xd9f9,	// (0x00021925) bg_dt_sta_title_pane_g1

0xda02,	// (0x0002192e) bg_dt_sta_title_pane_g2

0xda0b,	// (0x00021937) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00023dd2) bg_dt_sta_title_pane_g

0x484e,	// (0x0001877a) bg_dt_sta_indi_pane_g1

0x7b33,	// (0x0001ba5f) dt_sta_signal_pane_g1

0x7b3b,	// (0x0001ba67) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00023dd9) dt_sta_signal_pane_g

0x7b43,	// (0x0001ba6f) dt_sta_battery_pane_g1

0x7b4c,	// (0x0001ba78) dt_sta_battery_pane_t1

0x484e,	// (0x0001877a) bg_dt_sta_control_pane_g1

0x0f31,	// (0x00014e5d) fep_china_uni_eep_pane

0x0f39,	// (0x00014e65) fep_china_uni_entry_pane_ParamLimits

0x0f49,	// (0x00014e75) popup_fep_china_uni_window_g1_ParamLimits

0x0f59,	// (0x00014e85) popup_fep_china_uni_window_g2_ParamLimits

0x0f59,	// (0x00014e85) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00023644) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00023644) popup_fep_china_uni_window_g

0x7b5b,	// (0x0001ba87) fep_china_uni_eep_pane_g1

0x7b63,	// (0x0001ba8f) fep_china_uni_eep_pane_t1

0x70d4,	// (0x0001b000) aid_touch_area_size_smil_player

0x19c4,	// (0x000158f0) lc0_clock_pane

0x1bbb,	// (0x00015ae7) status_pane_g5_ParamLimits

0x1bbb,	// (0x00015ae7) status_pane_g5

0x933d,	// (0x0001d269) popup_keymap_window

0x1b81,	// (0x00015aad) status_icon_pane

0xd806,	// (0x00021732) cell_ai5_widget_pane_g3_ParamLimits

0xd820,	// (0x0002174c) cell_ai5_widget_pane_g4_ParamLimits

0xd830,	// (0x0002175c) cell_ai5_widget_pane_g5_ParamLimits

0x7800,	// (0x0001b72c) cell_ai5_widget_pane_g8_ParamLimits

0x7800,	// (0x0001b72c) cell_ai5_widget_pane_g8

0x7814,	// (0x0001b740) cell_ai5_widget_pane_g9_ParamLimits

0x7814,	// (0x0001b740) cell_ai5_widget_pane_g9

0x7828,	// (0x0001b754) cell_ai5_widget_pane_g10_ParamLimits

0x7828,	// (0x0001b754) cell_ai5_widget_pane_g10

0x7b72,	// (0x0001ba9e) status_icon_pane_g1

0xc22d,	// (0x00020159) bg_popup_sub_pane_cp13

0x7b7a,	// (0x0001baa6) popup_keymap_window_t1

0xae71,	// (0x0001ed9d) control_pane_g6_ParamLimits

0xae71,	// (0x0001ed9d) control_pane_g6

0xae7e,	// (0x0001edaa) control_pane_g7_ParamLimits

0xae7e,	// (0x0001edaa) control_pane_g7

0xae8b,	// (0x0001edb7) control_pane_g8_ParamLimits

0xae8b,	// (0x0001edb7) control_pane_g8

0xd97b,	// (0x000218a7) dt_sta_controll_pane_ParamLimits

0xd988,	// (0x000218b4) dt_sta_indi_pane_ParamLimits

0xd995,	// (0x000218c1) dt_sta_title_pane_ParamLimits

0xc837,	// (0x00020763) aid_size_touch_scroll_bar_cale

0xdd68,	// (0x00021c94) popup_discreet_window_ParamLimits

0xdd68,	// (0x00021c94) popup_discreet_window

0x8f0c,	// (0x0001ce38) popup_sk_window

0x2493,	// (0x000163bf) bg_popup_sub_pane_cp28_ParamLimits

0x2493,	// (0x000163bf) bg_popup_sub_pane_cp28

0x7b88,	// (0x0001bab4) popup_discreet_window_g1_ParamLimits

0x7b88,	// (0x0001bab4) popup_discreet_window_g1

0x7ba8,	// (0x0001bad4) popup_discreet_window_t1_ParamLimits

0x7ba8,	// (0x0001bad4) popup_discreet_window_t1

0x7bc6,	// (0x0001baf2) popup_discreet_window_t2_ParamLimits

0x7bc6,	// (0x0001baf2) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00023dde) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00023dde) popup_discreet_window_t

0x003d,	// (0x00013f69) popup_sk_window_g1

0x0047,	// (0x00013f73) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00023de5) popup_sk_window_g

0x004f,	// (0x00013f7b) popup_sk_window_t1

0x005d,	// (0x00013f89) popup_sk_window_t1_copy1

0xd7f2,	// (0x0002171e) cell_ai5_widget_pane_g2_ParamLimits

0xd8bb,	// (0x000217e7) cell_ai5_widget_pane_t9_ParamLimits

0xd8bb,	// (0x000217e7) cell_ai5_widget_pane_t9

0xc22d,	// (0x00020159) main_fep_fshwr2_pane

0x9efa,	// (0x0001de26) aid_fshwr2_btn_pane

0x9f0b,	// (0x0001de37) aid_fshwr2_syb_pane

0x9f1c,	// (0x0001de48) aid_fshwr2_txt_pane

0x9f28,	// (0x0001de54) fshwr2_func_candi_pane

0x9f49,	// (0x0001de75) fshwr2_hwr_syb_pane

0x9f66,	// (0x0001de92) fshwr2_icf_pane

0xdc8b,	// (0x00021bb7) fshwr2_icf_bg_pane

0x00d3,	// (0x00013fff) fshwr2_icf_pane_t1_ParamLimits

0x00d3,	// (0x00013fff) fshwr2_icf_pane_t1

0x0e27,	// (0x00014d53) fshwr2_func_candi_pane_g1

0xda14,	// (0x00021940) fshwr2_func_candi_row_pane_ParamLimits

0xda14,	// (0x00021940) fshwr2_func_candi_row_pane

0x9f92,	// (0x0001debe) cell_fshwr2_syb_pane_ParamLimits

0x9f92,	// (0x0001debe) cell_fshwr2_syb_pane

0xef03,	// (0x00022e2f) fshwr2_hwr_syb_pane_g1_ParamLimits

0xef03,	// (0x00022e2f) fshwr2_hwr_syb_pane_g1

0xdc8b,	// (0x00021bb7) bg_popup_call_pane_cp01

0x9fa8,	// (0x0001ded4) fshwr2_func_candi_cell_pane_ParamLimits

0x9fa8,	// (0x0001ded4) fshwr2_func_candi_cell_pane

0xda3b,	// (0x00021967) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xda3b,	// (0x00021967) fshwr2_func_candi_cell_bg_pane

0x9ff1,	// (0x0001df1d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ff1,	// (0x0001df1d) fshwr2_func_candi_cell_pane_g1

0xa028,	// (0x0001df54) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa028,	// (0x0001df54) fshwr2_func_candi_cell_pane_t1

0xdc8b,	// (0x00021bb7) bg_button_pane_cp08

0x7c34,	// (0x0001bb60) cell_fshwr2_syb_bg_pane

0xa043,	// (0x0001df6f) cell_fshwr2_syb_bg_pane_g1

0xa04b,	// (0x0001df77) cell_fshwr2_syb_bg_pane_t1

0xc96f,	// (0x0002089b) main_tmo_pane

0xb4c0,	// (0x0001f3ec) uni_indicator_pane_g1_ParamLimits

0xb4d6,	// (0x0001f402) uni_indicator_pane_g2_ParamLimits

0xb4ec,	// (0x0001f418) uni_indicator_pane_g3_ParamLimits

0xb4ff,	// (0x0001f42b) uni_indicator_pane_g4_ParamLimits

0xb4ff,	// (0x0001f42b) uni_indicator_pane_g4

0x2fff,	// (0x00016f2b) uni_indicator_pane_g5_ParamLimits

0x2fff,	// (0x00016f2b) uni_indicator_pane_g5

0x2fff,	// (0x00016f2b) uni_indicator_pane_g6_ParamLimits

0x2fff,	// (0x00016f2b) uni_indicator_pane_g6

0xf917,	// (0x00023843) uni_indicator_pane_g_ParamLimits

0xc10f,	// (0x0002003b) popup_tmo_note_window_ParamLimits

0xc10f,	// (0x0002003b) popup_tmo_note_window

0xf17a,	// (0x000230a6) fshwr2_bg_pane

0xa019,	// (0x0001df45) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa019,	// (0x0001df45) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00023dea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00023dea) fshwr2_func_candi_cell_pane_g

0xeeeb,	// (0x00022e17) bg_popup_window_pane_cp01

0x019c,	// (0x000140c8) bg_popup_window_pane_g1_cp01

0x7c3c,	// (0x0001bb68) bg_popup_window_pane_cp22_ParamLimits

0x7c3c,	// (0x0001bb68) bg_popup_window_pane_cp22

0x7c4a,	// (0x0001bb76) listscroll_tmo_link_pane_ParamLimits

0x7c4a,	// (0x0001bb76) listscroll_tmo_link_pane

0x7c8a,	// (0x0001bbb6) popup_tmo_note_window_g1_ParamLimits

0x7c8a,	// (0x0001bbb6) popup_tmo_note_window_g1

0x7c97,	// (0x0001bbc3) tmo_note_info_pane_ParamLimits

0x7c97,	// (0x0001bbc3) tmo_note_info_pane

0xda47,	// (0x00021973) list_tmo_note_info_pane_g1_ParamLimits

0xda47,	// (0x00021973) list_tmo_note_info_pane_g1

0x7cc8,	// (0x0001bbf4) list_tmo_note_info_pane_g2_ParamLimits

0x7cc8,	// (0x0001bbf4) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00023def) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00023def) list_tmo_note_info_pane_g

0x7ce4,	// (0x0001bc10) list_tmo_note_info_text_pane_ParamLimits

0x7ce4,	// (0x0001bc10) list_tmo_note_info_text_pane

0x7d69,	// (0x0001bc95) list_tmo_link_pane

0x7d76,	// (0x0001bca2) scroll_pane_cp20

0x7d83,	// (0x0001bcaf) list_single_tmo_link_pane_ParamLimits

0x7d83,	// (0x0001bcaf) list_single_tmo_link_pane

0x7d93,	// (0x0001bcbf) list_single_tmo_link_pane_t1

0x7da1,	// (0x0001bccd) list_tmo_note_info_text_pane_t1_ParamLimits

0x7da1,	// (0x0001bccd) list_tmo_note_info_text_pane_t1

0xa9b5,	// (0x0001e8e1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa9b5,	// (0x0001e8e1) aid_size_touch_scroll_bar_cp01

0xa8e4,	// (0x0001e810) aid_size_touch_slider_marker

0x8efc,	// (0x0001ce28) popup_settings_window_ParamLimits

0x8efc,	// (0x0001ce28) popup_settings_window

0x1824,	// (0x00015750) popup_candi_list_indi_window

0x1876,	// (0x000157a2) aid_touch_navi_pane_ParamLimits

0xf0d2,	// (0x00022ffe) rs_clock_indi_pane

0xf0db,	// (0x00023007) sctrl_sk_bottom_pane_ParamLimits

0xf0ec,	// (0x00023018) sctrl_sk_top_pane_ParamLimits

0xf172,	// (0x0002309e) popup_fep_tooltip_window

0xd7be,	// (0x000216ea) aid_size_cell_widget_grid_ParamLimits

0xd7dd,	// (0x00021709) cell_ai5_widget_pane_g1_ParamLimits

0xd7dd,	// (0x00021709) cell_ai5_widget_pane_g1

0xd840,	// (0x0002176c) cell_ai5_widget_pane_g6_ParamLimits

0xd84c,	// (0x00021778) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x00023d6d) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x00023d6d) cell_ai5_widget_pane_g

0xd8ea,	// (0x00021816) cell_ai5_widget_pane_t10_ParamLimits

0xd8ea,	// (0x00021816) cell_ai5_widget_pane_t10

0xd908,	// (0x00021834) grid_ai5_widget_pane_ParamLimits

0xd934,	// (0x00021860) cell_contacts_ai5_widget_pane_ParamLimits

0xd934,	// (0x00021860) cell_contacts_ai5_widget_pane

0x7bdb,	// (0x0001bb07) popup_discreet_window_t3_ParamLimits

0x7bdb,	// (0x0001bb07) popup_discreet_window_t3

0x9f7e,	// (0x0001deaa) popup_fshwr2_char_preview_window_ParamLimits

0x9f7e,	// (0x0001deaa) popup_fshwr2_char_preview_window

0xda5e,	// (0x0002198a) tmo_note_info_pane_t1

0xda73,	// (0x0002199f) tmo_note_info_pane_t2

0xda8c,	// (0x000219b8) tmo_note_info_pane_t3

0x7d45,	// (0x0001bc71) tmo_note_info_pane_t4

0x7d57,	// (0x0001bc83) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00023df4) tmo_note_info_pane_t

0x7d69,	// (0x0001bc95) list_tmo_link_pane_ParamLimits

0x7d76,	// (0x0001bca2) scroll_pane_cp20_ParamLimits

0xdc8b,	// (0x00021bb7) bg_popup_fep_char_preview_window_cp01

0x7dba,	// (0x0001bce6) popup_fshwr2_char_preview_window_t1

0x7dc8,	// (0x0001bcf4) popup_candi_list_indi_window_g1

0x7dd1,	// (0x0001bcfd) bg_cell_contacts_ai5_widget_pane

0x7ddd,	// (0x0001bd09) cell_contacts_ai5_widget_pane_g1

0x7df2,	// (0x0001bd1e) cell_contacts_ai5_widget_pane_g2

0x7dfe,	// (0x0001bd2a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00023dff) cell_contacts_ai5_widget_pane_g

0x7e0a,	// (0x0001bd36) cell_contacts_ai5_widget_pane_t1

0xc96f,	// (0x0002089b) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7e81,	// (0x0001bdad) settings_container_pane

0x14c1,	// (0x000153ed) listscroll_set_pane_copy1

0x3c85,	// (0x00017bb1) scroll_pane_cp121_copy1

0x7e8d,	// (0x0001bdb9) set_content_pane_copy1

0x7e95,	// (0x0001bdc1) aid_height_set_list_copy1_ParamLimits

0x7e95,	// (0x0001bdc1) aid_height_set_list_copy1

0x3227,	// (0x00017153) aid_size_parent_copy1_ParamLimits

0x3227,	// (0x00017153) aid_size_parent_copy1

0x7ea1,	// (0x0001bdcd) button_value_adjust_pane_cp6_copy1_ParamLimits

0x7ea1,	// (0x0001bdcd) button_value_adjust_pane_cp6_copy1

0x17f0,	// (0x0001571c) list_highlight_pane_cp2_copy1_ParamLimits

0x17f0,	// (0x0001571c) list_highlight_pane_cp2_copy1

0x7eb5,	// (0x0001bde1) list_set_pane_copy1_ParamLimits

0x7eb5,	// (0x0001bde1) list_set_pane_copy1

0x7e1c,	// (0x0001bd48) main_pane_set_t1_copy1_ParamLimits

0x7e1c,	// (0x0001bd48) main_pane_set_t1_copy1

0x7e56,	// (0x0001bd82) main_pane_set_t2_copy1_ParamLimits

0x7e56,	// (0x0001bd82) main_pane_set_t2_copy1

0x7f76,	// (0x0001bea2) main_pane_set_t3_copy1

0x7f84,	// (0x0001beb0) main_pane_set_t4_copy1

0x7e75,	// (0x0001bda1) set_content_pane_g1_copy1_ParamLimits

0x7e75,	// (0x0001bda1) set_content_pane_g1_copy1

0x7f92,	// (0x0001bebe) setting_code_pane_copy1

0x7f9a,	// (0x0001bec6) setting_slider_graphic_pane_copy1

0x7f9a,	// (0x0001bec6) setting_slider_pane_copy1

0x7f9a,	// (0x0001bec6) setting_text_pane_copy1

0x7f9a,	// (0x0001bec6) setting_volume_pane_copy1

0x7f92,	// (0x0001bebe) settings_code_pane_cp2_copy1

0x7fa2,	// (0x0001bece) settings_code_pane_cp_copy1_ParamLimits

0x7fa2,	// (0x0001bece) settings_code_pane_cp_copy1

0x01a5,	// (0x000140d1) volume_set_pane_copy1

0x7fb6,	// (0x0001bee2) volume_set_pane_g10_copy1

0x7fc2,	// (0x0001beee) volume_set_pane_g1_copy1

0x7fcc,	// (0x0001bef8) volume_set_pane_g2_copy1

0x7fd6,	// (0x0001bf02) volume_set_pane_g3_copy1

0x7fe0,	// (0x0001bf0c) volume_set_pane_g4_copy1

0x7fea,	// (0x0001bf16) volume_set_pane_g5_copy1

0x7ff4,	// (0x0001bf20) volume_set_pane_g6_copy1

0x7ffe,	// (0x0001bf2a) volume_set_pane_g7_copy1

0x8008,	// (0x0001bf34) volume_set_pane_g8_copy1

0x8012,	// (0x0001bf3e) volume_set_pane_g9_copy1

0xc29d,	// (0x000201c9) bg_set_opt_pane_cp_copy1_ParamLimits

0xc29d,	// (0x000201c9) bg_set_opt_pane_cp_copy1

0x01b1,	// (0x000140dd) setting_slider_pane_t1_copy1_ParamLimits

0x01b1,	// (0x000140dd) setting_slider_pane_t1_copy1

0x01cf,	// (0x000140fb) setting_slider_pane_t2_copy1_ParamLimits

0x01cf,	// (0x000140fb) setting_slider_pane_t2_copy1

0x01e9,	// (0x00014115) setting_slider_pane_t3_copy1_ParamLimits

0x01e9,	// (0x00014115) setting_slider_pane_t3_copy1

0x0201,	// (0x0001412d) slider_set_pane_copy1_ParamLimits

0x0201,	// (0x0001412d) slider_set_pane_copy1

0xdec0,	// (0x00021dec) set_opt_bg_pane_g1_copy2

0xdec8,	// (0x00021df4) set_opt_bg_pane_g2_copy2

0x801c,	// (0x0001bf48) set_opt_bg_pane_g3_copy2

0xded8,	// (0x00021e04) set_opt_bg_pane_g4_copy2

0xdee0,	// (0x00021e0c) set_opt_bg_pane_g5_copy2

0xdee8,	// (0x00021e14) set_opt_bg_pane_g6_copy2

0x8026,	// (0x0001bf52) set_opt_bg_pane_g7_copy2

0x8030,	// (0x0001bf5c) set_opt_bg_pane_g8_copy2

0x803a,	// (0x0001bf66) set_opt_bg_pane_g9_copy2

0x0217,	// (0x00014143) aid_size_touch_slider_mark_copy1_ParamLimits

0x0217,	// (0x00014143) aid_size_touch_slider_mark_copy1

0x8044,	// (0x0001bf70) slider_set_pane_g1_copy1

0x022b,	// (0x00014157) slider_set_pane_g2_copy1

0xeb40,	// (0x00022a6c) slider_set_pane_g3_copy1_ParamLimits

0xeb40,	// (0x00022a6c) slider_set_pane_g3_copy1

0xeb54,	// (0x00022a80) slider_set_pane_g4_copy1_ParamLimits

0xeb54,	// (0x00022a80) slider_set_pane_g4_copy1

0xeb6c,	// (0x00022a98) slider_set_pane_g5_copy1_ParamLimits

0xeb6c,	// (0x00022a98) slider_set_pane_g5_copy1

0xeb40,	// (0x00022a6c) slider_set_pane_g6_copy1_ParamLimits

0xeb40,	// (0x00022a6c) slider_set_pane_g6_copy1

0x0233,	// (0x0001415f) slider_set_pane_g7_copy1_ParamLimits

0x0233,	// (0x0001415f) slider_set_pane_g7_copy1

0xc241,	// (0x0002016d) bg_set_opt_pane_cp2_copy1

0x804d,	// (0x0001bf79) setting_slider_graphic_pane_g1_copy1

0x8056,	// (0x0001bf82) setting_slider_graphic_pane_t1_copy1

0x8066,	// (0x0001bf92) setting_slider_graphic_pane_t2_copy1

0x8076,	// (0x0001bfa2) slider_set_pane_cp_copy1

0x8086,	// (0x0001bfb2) input_focus_pane_cp1_copy1

0x808f,	// (0x0001bfbb) list_set_text_pane_copy1

0x8097,	// (0x0001bfc3) setting_text_pane_g1_copy1

0xc2c2,	// (0x000201ee) set_text_pane_t1_copy1

0x8086,	// (0x0001bfb2) input_focus_pane_cp2_copy1

0x8097,	// (0x0001bfc3) setting_code_pane_g1_copy1

0x80a0,	// (0x0001bfcc) setting_code_pane_t1_copy1

0x11a9,	// (0x000150d5) list_set_graphic_pane_copy1

0xc241,	// (0x0002016d) bg_set_opt_pane_cp4_copy1

0x11bc,	// (0x000150e8) list_set_graphic_pane_g1_copy1_ParamLimits

0x11bc,	// (0x000150e8) list_set_graphic_pane_g1_copy1

0x80ae,	// (0x0001bfda) list_set_graphic_pane_g2_copy1

0x11d4,	// (0x00015100) list_set_graphic_pane_t1_copy1_ParamLimits

0x11d4,	// (0x00015100) list_set_graphic_pane_t1_copy1

0x484e,	// (0x0001877a) rs_clock_indi_pane_g1

0x80b6,	// (0x0001bfe2) rs_clock_indi_pane_t1

0x80c4,	// (0x0001bff0) rs_indi_pane

0x80cc,	// (0x0001bff8) rs_indi_pane_g1

0x80d5,	// (0x0001c001) rs_indi_pane_g2

0x80de,	// (0x0001c00a) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00023e06) rs_indi_pane_g

0x14c1,	// (0x000153ed) bg_popup_preview_window_pane_cp03

0x80e7,	// (0x0001c013) popup_fep_tooltip_window_t1

0x5709,	// (0x00019635) popup_note2_window_g2_ParamLimits

0x5709,	// (0x00019635) popup_note2_window_g2

0x0001,

0xfc73,	// (0x00023b9f) popup_note2_window_g_ParamLimits

0xfc73,	// (0x00023b9f) popup_note2_window_g

0x5d21,	// (0x00019c4d) bg_popup_sub_pane_cp11_ParamLimits

0x5d2e,	// (0x00019c5a) cell_ai3_links_pane_g1_ParamLimits

0x5d45,	// (0x00019c71) cell_ai3_links_pane_t1

0xc2c2,	// (0x000201ee) set_text_pane_t1_copy1_ParamLimits

0x13da,	// (0x00015306) cell_graphic_popup_pane_cp2_ParamLimits

0x13da,	// (0x00015306) cell_graphic_popup_pane_cp2

0x80f5,	// (0x0001c021) cell_graphic_popup_pane_g1_cp2

0xc64a,	// (0x00020576) cell_graphic_popup_pane_g2_cp2

0x80fd,	// (0x0001c029) cell_graphic_popup_pane_g3_cp2

0x8105,	// (0x0001c031) cell_graphic_popup_pane_t2_cp2

0xc65b,	// (0x00020587) grid_highlight_pane_cp3_cp2

0xe326,	// (0x00022252) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc96f,	// (0x0002089b) main_tmo_pane_ParamLimits

0xc103,	// (0x0002002f) popup_tmo_big_image_note_window

0xd7cc,	// (0x000216f8) cell_ai5_widget_list_pane

0xd7d4,	// (0x00021700) cell_ai5_widget_lrg_icon_pane

0xda5e,	// (0x0002198a) tmo_note_info_pane_t1_ParamLimits

0xda73,	// (0x0002199f) tmo_note_info_pane_t2_ParamLimits

0xda8c,	// (0x000219b8) tmo_note_info_pane_t3_ParamLimits

0x7d45,	// (0x0001bc71) tmo_note_info_pane_t4_ParamLimits

0x7d57,	// (0x0001bc83) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00023df4) tmo_note_info_pane_t_ParamLimits

0x7e81,	// (0x0001bdad) settings_container_pane_ParamLimits

0x807e,	// (0x0001bfaa) indicator_popup_pane_cp5

0x807e,	// (0x0001bfaa) indicator_popup_pane_cp6

0x11a9,	// (0x000150d5) list_set_graphic_pane_copy1_ParamLimits

0xc22d,	// (0x00020159) bg_popup_window_pane_cp23

0x8113,	// (0x0001c03f) popup_tmo_big_image_note_window_g1

0x811f,	// (0x0001c04b) popup_tmo_big_image_note_window_t1

0x812f,	// (0x0001c05b) popup_tmo_big_image_note_window_t2

0x813f,	// (0x0001c06b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00023e0d) popup_tmo_big_image_note_window_t

0x484e,	// (0x0001877a) cell_ai5_widget_lrg_icon_pane_g1

0xdaa1,	// (0x000219cd) cell_ai5_widget_lrg_icon_pane_t1

0xdaaf,	// (0x000219db) cell_ai5_widget_list_row_pane_ParamLimits

0xdaaf,	// (0x000219db) cell_ai5_widget_list_row_pane

0xdac7,	// (0x000219f3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdac7,	// (0x000219f3) cell_ai5_widget_list_row_pane_g1

0xdad4,	// (0x00021a00) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdad4,	// (0x00021a00) cell_ai5_widget_list_row_pane_t1

0xdaff,	// (0x00021a2b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdaff,	// (0x00021a2b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00023e14) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00023e14) cell_ai5_widget_list_row_pane_t

0xdc8b,	// (0x00021bb7) main_fep_vtchi_ss_pane

0x81f5,	// (0x0001c121) popup_fep_char_pre_window

0x81fd,	// (0x0001c129) popup_fep_ituss_window

0xdb27,	// (0x00021a53) popup_fep_vkbss_window

0xdb36,	// (0x00021a62) grid_vkbss_keypad_pane_ParamLimits

0xdb36,	// (0x00021a62) grid_vkbss_keypad_pane

0x825a,	// (0x0001c186) ituss_keypad_pane

0x0255,	// (0x00014181) aid_vkbss_key_offset_ParamLimits

0x0255,	// (0x00014181) aid_vkbss_key_offset

0xa05a,	// (0x0001df86) cell_vkbss_key_pane_ParamLimits

0xa05a,	// (0x0001df86) cell_vkbss_key_pane

0x8269,	// (0x0001c195) bg_cell_vkbss_key_g1_ParamLimits

0x8269,	// (0x0001c195) bg_cell_vkbss_key_g1

0xdb46,	// (0x00021a72) cell_vkbss_key_3p_pane_ParamLimits

0xdb46,	// (0x00021a72) cell_vkbss_key_3p_pane

0xdb60,	// (0x00021a8c) cell_vkbss_key_g1_ParamLimits

0xdb60,	// (0x00021a8c) cell_vkbss_key_g1

0xdb7a,	// (0x00021aa6) cell_vkbss_key_t1_ParamLimits

0xdb7a,	// (0x00021aa6) cell_vkbss_key_t1

0x0277,	// (0x000141a3) cell_ituss_key_pane_ParamLimits

0x0277,	// (0x000141a3) cell_ituss_key_pane

0x82c8,	// (0x0001c1f4) bg_cell_ituss_key_g1_ParamLimits

0x82c8,	// (0x0001c1f4) bg_cell_ituss_key_g1

0x82d4,	// (0x0001c200) cell_ituss_key_pane_g1_ParamLimits

0x82d4,	// (0x0001c200) cell_ituss_key_pane_g1

0x0288,	// (0x000141b4) cell_ituss_key_pane_g2_ParamLimits

0x0288,	// (0x000141b4) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00023e1b) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00023e1b) cell_ituss_key_pane_g

0x02b4,	// (0x000141e0) cell_ituss_key_t1_ParamLimits

0x02b4,	// (0x000141e0) cell_ituss_key_t1

0x02ee,	// (0x0001421a) cell_ituss_key_t2_ParamLimits

0x02ee,	// (0x0001421a) cell_ituss_key_t2

0x031f,	// (0x0001424b) cell_ituss_key_t3_ParamLimits

0x031f,	// (0x0001424b) cell_ituss_key_t3

0x02ee,	// (0x0001421a) cell_ituss_key_t4_ParamLimits

0x02ee,	// (0x0001421a) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x00023e22) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00023e22) cell_ituss_key_t

0x82fa,	// (0x0001c226) cell_vkbss_key_3p_pane_g1

0x8302,	// (0x0001c22e) cell_vkbss_key_3p_pane_g2

0x830a,	// (0x0001c236) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00023e2d) cell_vkbss_key_3p_pane_g

0x14c1,	// (0x000153ed) bg_popup_fep_char_preview_window_cp02

0x8312,	// (0x0001c23e) popup_fep_char_pre_window_t1

0xd7ab,	// (0x000216d7) main_ai5_sk_pane

0x7dd1,	// (0x0001bcfd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ddd,	// (0x0001bd09) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7df2,	// (0x0001bd1e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7dfe,	// (0x0001bd2a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00023dff) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7e0a,	// (0x0001bd36) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc96f,	// (0x0002089b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdba5,	// (0x00021ad1) main_ai5_sk_pane_g1

0x22cb,	// (0x000161f7) popup_query_code_window_g1

0x8213,	// (0x0001c13f) popup_fep_vkb_icf_pane

0x8234,	// (0x0001c160) popup_fep_vtchi_icf_pane

0x8329,	// (0x0001c255) bg_icf_pane

0x8335,	// (0x0001c261) list_vkb_icf_pane

0x8344,	// (0x0001c270) bg_icf_pane_cp01

0x8357,	// (0x0001c283) vtchi_icf_list_pane

0x8367,	// (0x0001c293) list_vkb_icf_pane_t1_ParamLimits

0x8367,	// (0x0001c293) list_vkb_icf_pane_t1

0x837d,	// (0x0001c2a9) vtchi_icf_list_pane_t1_ParamLimits

0x837d,	// (0x0001c2a9) vtchi_icf_list_pane_t1

0x81fd,	// (0x0001c129) popup_fep_ituss_window_ParamLimits

0x8234,	// (0x0001c160) popup_fep_vtchi_icf_pane_ParamLimits

0x825a,	// (0x0001c186) ituss_keypad_pane_ParamLimits

0x0249,	// (0x00014175) ituss_sks_pane

0x8329,	// (0x0001c255) bg_icf_pane_ParamLimits

0x81d5,	// (0x0001c101) icf_edit_indi_pane_ParamLimits

0x81d5,	// (0x0001c101) icf_edit_indi_pane

0x8335,	// (0x0001c261) list_vkb_icf_pane_ParamLimits

0x8344,	// (0x0001c270) bg_icf_pane_cp01_ParamLimits

0x81e8,	// (0x0001c114) icf_edit_indi_pane_cp01_ParamLimits

0x81e8,	// (0x0001c114) icf_edit_indi_pane_cp01

0x835f,	// (0x0001c28b) vtchi_query_pane

0x70a4,	// (0x0001afd0) icf_edit_indi_pane_g1_ParamLimits

0x70a4,	// (0x0001afd0) icf_edit_indi_pane_g1

0xdbae,	// (0x00021ada) icf_edit_indi_pane_g2_ParamLimits

0xdbae,	// (0x00021ada) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00023e45) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00023e45) icf_edit_indi_pane_g

0xdbc0,	// (0x00021aec) icf_edit_indi_pane_t1

0x8395,	// (0x0001c2c1) bg_input_focus_pane_cp042

0xc82e,	// (0x0002075a) vtchi_button_pane

0x839e,	// (0x0001c2ca) vtchi_query_pane_t1

0x83ac,	// (0x0001c2d8) vtchi_query_pane_t2

0x83ba,	// (0x0001c2e6) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00023e34) vtchi_query_pane_t

0xdc8b,	// (0x00021bb7) bg_button_pane_cp13

0x83c8,	// (0x0001c2f4) vtchi_button_pane_g1

0x0362,	// (0x0001428e) ituss_sks_pane_g1

0x036d,	// (0x00014299) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00023e3b) ituss_sks_pane_g

0x83d0,	// (0x0001c2fc) ituss_sks_pane_t1

0x83de,	// (0x0001c30a) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00023e40) ituss_sks_pane_t

0x42d8,	// (0x00018204) indicator_nsta_pane_cp_g1

0x42e0,	// (0x0001820c) indicator_nsta_pane_cp_g2

0x42e8,	// (0x00018214) indicator_nsta_pane_cp_g3

0x42d8,	// (0x00018204) indicator_nsta_pane_cp_g4

0x42e0,	// (0x0001820c) indicator_nsta_pane_cp_g5

0x42e8,	// (0x00018214) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x000239dd) indicator_nsta_pane_cp_g

0xd2d2,	// (0x000211fe) cell_graphic2_pane_t2_ParamLimits

0xd2d2,	// (0x000211fe) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00023cf6) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00023cf6) cell_graphic2_pane_t

0xd30a,	// (0x00021236) cell_graphic2_control_pane_t1

0xabfa,	// (0x0001eb26) signal_pane_g3_ParamLimits

0xabfa,	// (0x0001eb26) signal_pane_g3

0xac0e,	// (0x0001eb3a) signal_pane_g4_ParamLimits

0xac0e,	// (0x0001eb3a) signal_pane_g4

0xdb11,	// (0x00021a3d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xdb11,	// (0x00021a3d) cell_ai5_widget_list_row_pane_t3

0x82e8,	// (0x0001c214) cell_ituss_key_pane_t1_ParamLimits

0x82e8,	// (0x0001c214) cell_ituss_key_pane_t1

0x1f0b,	// (0x00015e37) form_field_data_wide_pane_vc_t2_ParamLimits

0x1f0b,	// (0x00015e37) form_field_data_wide_pane_vc_t2

0x1f1f,	// (0x00015e4b) form_field_data_wide_pane_vc_t3_ParamLimits

0x1f1f,	// (0x00015e4b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0002372b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0002372b) form_field_data_wide_pane_vc_t

0x3f93,	// (0x00017ebf) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3f93,	// (0x00017ebf) form_field_slider_wide_pane_vc_t3

0x4069,	// (0x00017f95) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4069,	// (0x00017f95) form_field_popup_wide_pane_vc_t2

0x4080,	// (0x00017fac) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4080,	// (0x00017fac) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x000239cc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x000239cc) form_field_popup_wide_pane_vc_t

0x9efa,	// (0x0001de26) aid_fshwr2_btn_pane_ParamLimits

0x9f0b,	// (0x0001de37) aid_fshwr2_syb_pane_ParamLimits

0x9f1c,	// (0x0001de48) aid_fshwr2_txt_pane_ParamLimits

0xf17a,	// (0x000230a6) fshwr2_bg_pane_ParamLimits

0x9f28,	// (0x0001de54) fshwr2_func_candi_pane_ParamLimits

0x9f49,	// (0x0001de75) fshwr2_hwr_syb_pane_ParamLimits

0x9f66,	// (0x0001de92) fshwr2_icf_pane_ParamLimits

0x3f07,	// (0x00017e33) list_double_graphic_pane_vc_g4_ParamLimits

0x3f07,	// (0x00017e33) list_double_graphic_pane_vc_g4

0x02a8,	// (0x000141d4) cell_ituss_key_pane_g3_ParamLimits

0x02a8,	// (0x000141d4) cell_ituss_key_pane_g3

0x0350,	// (0x0001427c) cell_ituss_key_t5_ParamLimits

0x0350,	// (0x0001427c) cell_ituss_key_t5

0xdb27,	// (0x00021a53) popup_fep_vkbss_window_ParamLimits

0xd7b5,	// (0x000216e1) aid_cell_ai5_quarter

0xdbc0,	// (0x00021aec) icf_edit_indi_pane_t1_ParamLimits

0xc492,	// (0x000203be) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xc492,	// (0x000203be) aid_tch_indicator_popup_pane_cp2

0xc4a5,	// (0x000203d1) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xc4a5,	// (0x000203d1) aid_tch_query_popup_data_pane_cp2

0x2273,	// (0x0001619f) aid_tch_query_popup_pane_ParamLimits

0x2273,	// (0x0001619f) aid_tch_query_popup_pane

0x2273,	// (0x0001619f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2273,	// (0x0001619f) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
