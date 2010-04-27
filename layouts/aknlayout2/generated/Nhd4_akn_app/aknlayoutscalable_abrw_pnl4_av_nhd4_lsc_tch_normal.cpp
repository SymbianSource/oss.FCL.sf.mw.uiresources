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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000f321 };

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
0xc8f4,	// (0x0001bc15) Screen

0xc900,	// (0x0001bc21) application_window_ParamLimits

0xc900,	// (0x0001bc21) application_window

0x26d6,	// (0x000119f7) screen_g1

0xb77f,	// (0x0001aaa0) area_bottom_pane_ParamLimits

0xb77f,	// (0x0001aaa0) area_bottom_pane

0x02cd,	// (0x0000f5ee) area_top_pane_ParamLimits

0x02cd,	// (0x0000f5ee) area_top_pane

0x036b,	// (0x0000f68c) main_pane_ParamLimits

0x036b,	// (0x0000f68c) main_pane

0x26e0,	// (0x00011a01) misc_graphics

0xd5db,	// (0x0001c8fc) battery_pane_ParamLimits

0xd5db,	// (0x0001c8fc) battery_pane

0x557c,	// (0x0001489d) bg_status_flat_pane_g8

0x5584,	// (0x000148a5) bg_status_flat_pane_g9

0x4860,	// (0x00013b81) context_pane_ParamLimits

0x4860,	// (0x00013b81) context_pane

0xd746,	// (0x0001ca67) navi_pane_ParamLimits

0xd746,	// (0x0001ca67) navi_pane

0xd7c4,	// (0x0001cae5) signal_pane_ParamLimits

0xd7c4,	// (0x0001cae5) signal_pane

0x0008,

0xf86f,	// (0x0001eb90) bg_status_flat_pane_g

0xd854,	// (0x0001cb75) status_pane_g1_ParamLimits

0xd854,	// (0x0001cb75) status_pane_g1

0xd86a,	// (0x0001cb8b) status_pane_g2_ParamLimits

0xd86a,	// (0x0001cb8b) status_pane_g2

0x4a7f,	// (0x00013da0) status_pane_g3_ParamLimits

0x4a7f,	// (0x00013da0) status_pane_g3

0x0004,

0xf79b,	// (0x0001eabc) status_pane_g_ParamLimits

0xf79b,	// (0x0001eabc) status_pane_g

0xd876,	// (0x0001cb97) title_pane_ParamLimits

0xd876,	// (0x0001cb97) title_pane

0xd8d9,	// (0x0001cbfa) uni_indicator_pane_ParamLimits

0xd8d9,	// (0x0001cbfa) uni_indicator_pane

0x46b6,	// (0x000139d7) bg_list_pane_ParamLimits

0x46b6,	// (0x000139d7) bg_list_pane

0x46d6,	// (0x000139f7) find_pane

0xbace,	// (0x0001adef) listscroll_app_pane_ParamLimits

0xbace,	// (0x0001adef) listscroll_app_pane

0x46ea,	// (0x00013a0b) listscroll_form_pane

0x0c27,	// (0x0000ff48) listscroll_gen_pane_ParamLimits

0x0c27,	// (0x0000ff48) listscroll_gen_pane

0x0c3b,	// (0x0000ff5c) listscroll_set_pane

0x610a,	// (0x0001542b) main_idle_act_pane

0x43c2,	// (0x000136e3) main_idle_trad_pane

0x43c2,	// (0x000136e3) main_list_empty_pane

0x4704,	// (0x00013a25) main_midp_pane

0x4710,	// (0x00013a31) main_pane_g1_ParamLimits

0x4710,	// (0x00013a31) main_pane_g1

0xbade,	// (0x0001adff) popup_ai_message_window_ParamLimits

0xbade,	// (0x0001adff) popup_ai_message_window

0xbb6f,	// (0x0001ae90) popup_fep_china_uni_window_ParamLimits

0xbb6f,	// (0x0001ae90) popup_fep_china_uni_window

0x0d4f,	// (0x00010070) popup_fep_japan_candidate_window_ParamLimits

0x0d4f,	// (0x00010070) popup_fep_japan_candidate_window

0x0d6d,	// (0x0001008e) popup_fep_japan_predictive_window_ParamLimits

0x0d6d,	// (0x0001008e) popup_fep_japan_predictive_window

0xbbc9,	// (0x0001aeea) popup_find_window

0xbbe6,	// (0x0001af07) popup_grid_graphic_window_ParamLimits

0xbbe6,	// (0x0001af07) popup_grid_graphic_window

0x0dd2,	// (0x000100f3) popup_large_graphic_colour_window

0xbc7e,	// (0x0001af9f) popup_menu_window_ParamLimits

0xbc7e,	// (0x0001af9f) popup_menu_window

0xbe4a,	// (0x0001b16b) popup_note_image_window

0xbe10,	// (0x0001b131) popup_note_wait_window_ParamLimits

0xbe10,	// (0x0001b131) popup_note_wait_window

0xbe62,	// (0x0001b183) popup_note_window_ParamLimits

0xbe62,	// (0x0001b183) popup_note_window

0xbf08,	// (0x0001b229) popup_query_code_window_ParamLimits

0xbf08,	// (0x0001b229) popup_query_code_window

0x101c,	// (0x0001033d) popup_query_data_code_window_ParamLimits

0x101c,	// (0x0001033d) popup_query_data_code_window

0xbf42,	// (0x0001b263) popup_query_data_window_ParamLimits

0xbf42,	// (0x0001b263) popup_query_data_window

0xbfbe,	// (0x0001b2df) popup_query_sat_info_window_ParamLimits

0xbfbe,	// (0x0001b2df) popup_query_sat_info_window

0xc055,	// (0x0001b376) popup_snote_single_graphic_window_ParamLimits

0xc055,	// (0x0001b376) popup_snote_single_graphic_window

0xc055,	// (0x0001b376) popup_snote_single_text_window_ParamLimits

0xc055,	// (0x0001b376) popup_snote_single_text_window

0x109f,	// (0x000103c0) popup_sub_window_general

0x11cd,	// (0x000104ee) popup_window_general_ParamLimits

0x11cd,	// (0x000104ee) popup_window_general

0x4726,	// (0x00013a47) power_save_pane

0xb95d,	// (0x0001ac7e) control_pane_g1_ParamLimits

0xb95d,	// (0x0001ac7e) control_pane_g1

0xb986,	// (0x0001aca7) control_pane_g2_ParamLimits

0xb986,	// (0x0001aca7) control_pane_g2

0x4679,	// (0x0001399a) control_pane_g3_ParamLimits

0x4679,	// (0x0001399a) control_pane_g3

0x0007,

0xf783,	// (0x0001eaa4) control_pane_g_ParamLimits

0xf783,	// (0x0001eaa4) control_pane_g

0xb9c7,	// (0x0001ace8) control_pane_t1_ParamLimits

0xb9c7,	// (0x0001ace8) control_pane_t1

0xba25,	// (0x0001ad46) control_pane_t2_ParamLimits

0xba25,	// (0x0001ad46) control_pane_t2

0x0002,

0xf794,	// (0x0001eab5) control_pane_t_ParamLimits

0xf794,	// (0x0001eab5) control_pane_t

0xd460,	// (0x0001c781) navi_navi_volume_pane_cp1

0xd468,	// (0x0001c789) status_small_icon_pane

0x45ae,	// (0x000138cf) status_small_pane_g1_ParamLimits

0x45ae,	// (0x000138cf) status_small_pane_g1

0xd470,	// (0x0001c791) status_small_pane_g2_ParamLimits

0xd470,	// (0x0001c791) status_small_pane_g2

0xd47c,	// (0x0001c79d) status_small_pane_g3_ParamLimits

0xd47c,	// (0x0001c79d) status_small_pane_g3

0xd488,	// (0x0001c7a9) status_small_pane_g4_ParamLimits

0xd488,	// (0x0001c7a9) status_small_pane_g4

0xd494,	// (0x0001c7b5) status_small_pane_g5_ParamLimits

0xd494,	// (0x0001c7b5) status_small_pane_g5

0xd4a2,	// (0x0001c7c3) status_small_pane_g6_ParamLimits

0xd4a2,	// (0x0001c7c3) status_small_pane_g6

0x0007,

0xf772,	// (0x0001ea93) status_small_pane_g_ParamLimits

0xf772,	// (0x0001ea93) status_small_pane_g

0xd4d1,	// (0x0001c7f2) status_small_pane_t1

0xd4f3,	// (0x0001c814) status_small_wait_pane_ParamLimits

0xd4f3,	// (0x0001c814) status_small_wait_pane

0xd285,	// (0x0001c5a6) aid_levels_signal_ParamLimits

0xd285,	// (0x0001c5a6) aid_levels_signal

0xd29d,	// (0x0001c5be) signal_pane_g1_ParamLimits

0xd29d,	// (0x0001c5be) signal_pane_g1

0xd2b8,	// (0x0001c5d9) signal_pane_g2_ParamLimits

0xd2b8,	// (0x0001c5d9) signal_pane_g2

0x0003,

0xf703,	// (0x0001ea24) signal_pane_g_ParamLimits

0xf703,	// (0x0001ea24) signal_pane_g

0x3e16,	// (0x00013137) context_pane_g1

0xc910,	// (0x0001bc31) title_pane_g1

0xc947,	// (0x0001bc68) title_pane_t1

0x2788,	// (0x00011aa9) title_pane_t2

0x27ae,	// (0x00011acf) title_pane_t3

0x0002,

0xf557,	// (0x0001e878) title_pane_t

0xd901,	// (0x0001cc22) aid_levels_battery_ParamLimits

0xd901,	// (0x0001cc22) aid_levels_battery

0xd91d,	// (0x0001cc3e) battery_pane_g1_ParamLimits

0xd91d,	// (0x0001cc3e) battery_pane_g1

0xd93a,	// (0x0001cc5b) battery_pane_g2_ParamLimits

0xd93a,	// (0x0001cc5b) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001eac7) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001eac7) battery_pane_g

0xdb39,	// (0x0001ce5a) uni_indicator_pane_g1

0xdb4f,	// (0x0001ce70) uni_indicator_pane_g2

0xdb65,	// (0x0001ce86) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001ec38) uni_indicator_pane_g

0x4240,	// (0x00013561) navi_icon_pane_ParamLimits

0x4240,	// (0x00013561) navi_icon_pane

0x417e,	// (0x0001349f) navi_midp_pane

0x425c,	// (0x0001357d) navi_navi_pane

0x4266,	// (0x00013587) navi_text_pane_ParamLimits

0x4266,	// (0x00013587) navi_text_pane

0x26d6,	// (0x000119f7) status_small_wait_pane_g1

0x2beb,	// (0x00011f0c) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001ec33) status_small_wait_pane_g

0x5bd7,	// (0x00014ef8) navi_navi_icon_text_pane

0x5bdf,	// (0x00014f00) navi_navi_pane_g1_ParamLimits

0x5bdf,	// (0x00014f00) navi_navi_pane_g1

0x5bf1,	// (0x00014f12) navi_navi_pane_g2_ParamLimits

0x5bf1,	// (0x00014f12) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001ec01) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001ec01) navi_navi_pane_g

0x5c03,	// (0x00014f24) navi_navi_tabs_pane

0x5c0c,	// (0x00014f2d) navi_navi_text_pane

0x5bd7,	// (0x00014ef8) navi_navi_volume_pane

0x5bb3,	// (0x00014ed4) navi_text_pane_t1

0x5ba7,	// (0x00014ec8) navi_icon_pane_g1

0x5afa,	// (0x00014e1b) navi_navi_text_pane_t1

0x14db,	// (0x000107fc) navi_navi_volume_pane_g1

0xc2cc,	// (0x0001b5ed) volume_small_pane

0xda76,	// (0x0001cd97) navi_navi_icon_text_pane_g1

0x5a68,	// (0x00014d89) navi_navi_icon_text_pane_t1

0x425c,	// (0x0001357d) navi_tabs_2_long_pane

0x425c,	// (0x0001357d) navi_tabs_2_pane

0x425c,	// (0x0001357d) navi_tabs_3_long_pane

0x425c,	// (0x0001357d) navi_tabs_3_pane

0x425c,	// (0x0001357d) navi_tabs_4_pane

0xc2ac,	// (0x0001b5cd) tabs_2_active_pane_ParamLimits

0xc2ac,	// (0x0001b5cd) tabs_2_active_pane

0xc2bc,	// (0x0001b5dd) tabs_2_passive_pane_ParamLimits

0xc2bc,	// (0x0001b5dd) tabs_2_passive_pane

0xc27a,	// (0x0001b59b) tabs_3_active_pane_ParamLimits

0xc27a,	// (0x0001b59b) tabs_3_active_pane

0xc28a,	// (0x0001b5ab) tabs_3_passive_pane_ParamLimits

0xc28a,	// (0x0001b5ab) tabs_3_passive_pane

0xc29b,	// (0x0001b5bc) tabs_3_passive_pane_cp_ParamLimits

0xc29b,	// (0x0001b5bc) tabs_3_passive_pane_cp

0xc247,	// (0x0001b568) tabs_4_active_pane_ParamLimits

0xc247,	// (0x0001b568) tabs_4_active_pane

0xc258,	// (0x0001b579) tabs_4_passive_pane_ParamLimits

0xc258,	// (0x0001b579) tabs_4_passive_pane

0x1467,	// (0x00010788) tabs_4_passive_pane_cp_ParamLimits

0x1467,	// (0x00010788) tabs_4_passive_pane_cp

0xc269,	// (0x0001b58a) tabs_4_passive_pane_cp2_ParamLimits

0xc269,	// (0x0001b58a) tabs_4_passive_pane_cp2

0xc223,	// (0x0001b544) tabs_2_long_active_pane_ParamLimits

0xc223,	// (0x0001b544) tabs_2_long_active_pane

0xc235,	// (0x0001b556) tabs_2_long_passive_pane_ParamLimits

0xc235,	// (0x0001b556) tabs_2_long_passive_pane

0xc1e4,	// (0x0001b505) tabs_3_long_active_pane_ParamLimits

0xc1e4,	// (0x0001b505) tabs_3_long_active_pane

0xc1f7,	// (0x0001b518) tabs_3_long_passive_pane_ParamLimits

0xc1f7,	// (0x0001b518) tabs_3_long_passive_pane

0xc210,	// (0x0001b531) tabs_3_long_passive_pane_cp_ParamLimits

0xc210,	// (0x0001b531) tabs_3_long_passive_pane_cp

0x138e,	// (0x000106af) volume_small_pane_g1

0x1397,	// (0x000106b8) volume_small_pane_g2

0x13a0,	// (0x000106c1) volume_small_pane_g3

0x13a9,	// (0x000106ca) volume_small_pane_g4

0x13b2,	// (0x000106d3) volume_small_pane_g5

0x13bb,	// (0x000106dc) volume_small_pane_g6

0x13c4,	// (0x000106e5) volume_small_pane_g7

0x13cd,	// (0x000106ee) volume_small_pane_g8

0x13d6,	// (0x000106f7) volume_small_pane_g9

0x13df,	// (0x00010700) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001ebcd) volume_small_pane_g

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp2_ParamLimits

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp2

0x27ce,	// (0x00011aef) tabs_3_active_pane_g1

0xc9d3,	// (0x0001bcf4) tabs_3_active_pane_t1

0x2a55,	// (0x00011d76) bg_passive_tab_pane_cp2_ParamLimits

0x2a55,	// (0x00011d76) bg_passive_tab_pane_cp2

0x27ce,	// (0x00011aef) tabs_3_passive_pane_g1

0xc9d3,	// (0x0001bcf4) tabs_3_passive_pane_t1

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp3_ParamLimits

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp3

0x27e8,	// (0x00011b09) tabs_4_active_pane_g1

0xc9e5,	// (0x0001bd06) tabs_4_active_pane_t1

0x2a55,	// (0x00011d76) bg_passive_tab_pane_cp3_ParamLimits

0x2a55,	// (0x00011d76) bg_passive_tab_pane_cp3

0x27e8,	// (0x00011b09) tabs_4_1_passive_pane_g1

0xc9e5,	// (0x0001bd06) tabs_4_1_passive_pane_t1

0x4704,	// (0x00013a25) list_highlight_pane_cp2

0xdbee,	// (0x0001cf0f) list_set_pane_ParamLimits

0xdbee,	// (0x0001cf0f) list_set_pane

0xdc88,	// (0x0001cfa9) main_pane_set_t1_ParamLimits

0xdc88,	// (0x0001cfa9) main_pane_set_t1

0xdca8,	// (0x0001cfc9) main_pane_set_t2_ParamLimits

0xdca8,	// (0x0001cfc9) main_pane_set_t2

0xdcbc,	// (0x0001cfdd) main_pane_set_t3_ParamLimits

0xdcbc,	// (0x0001cfdd) main_pane_set_t3

0xdcce,	// (0x0001cfef) main_pane_set_t4_ParamLimits

0xdcce,	// (0x0001cfef) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001ec9d) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001ec9d) main_pane_set_t

0xdce0,	// (0x0001d001) setting_code_pane

0xdce8,	// (0x0001d009) setting_slider_graphic_pane

0xdce8,	// (0x0001d009) setting_slider_pane

0xdce8,	// (0x0001d009) setting_text_pane

0xdce8,	// (0x0001d009) setting_volume_pane

0x05ac,	// (0x0000f8cd) volume_set_pane

0x27c0,	// (0x00011ae1) bg_set_opt_pane_cp

0x05b4,	// (0x0000f8d5) setting_slider_pane_t1

0x05cd,	// (0x0000f8ee) setting_slider_pane_t2

0x05e7,	// (0x0000f908) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001e87f) setting_slider_pane_t

0x05ff,	// (0x0000f920) slider_set_pane

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp2

0x2802,	// (0x00011b23) setting_slider_graphic_pane_g1

0x0615,	// (0x0000f936) setting_slider_graphic_pane_t1

0x0625,	// (0x0000f946) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001e886) setting_slider_graphic_pane_t

0x0635,	// (0x0000f956) slider_set_pane_cp

0x26e0,	// (0x00011a01) input_focus_pane_cp1

0x60f1,	// (0x00015412) list_set_text_pane

0x26d6,	// (0x000119f7) setting_text_pane_g1

0x26e0,	// (0x00011a01) input_focus_pane_cp2

0x26d6,	// (0x000119f7) setting_code_pane_g1

0x280b,	// (0x00011b2c) setting_code_pane_t1

0x2819,	// (0x00011b3a) set_text_pane_t1_ParamLimits

0x2819,	// (0x00011b3a) set_text_pane_t1

0x36ac,	// (0x000129cd) set_opt_bg_pane_g1

0x36b4,	// (0x000129d5) set_opt_bg_pane_g2

0x60d1,	// (0x000153f2) set_opt_bg_pane_g3

0x36c4,	// (0x000129e5) set_opt_bg_pane_g4

0x36cc,	// (0x000129ed) set_opt_bg_pane_g5

0x36d4,	// (0x000129f5) set_opt_bg_pane_g6

0x60d9,	// (0x000153fa) set_opt_bg_pane_g7

0x60e1,	// (0x00015402) set_opt_bg_pane_g8

0x60e9,	// (0x0001540a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001ec8a) set_opt_bg_pane_g

0x60c4,	// (0x000153e5) slider_set_pane_g1

0x1550,	// (0x00010871) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001ec7b) slider_set_pane_g

0x14ec,	// (0x0001080d) volume_set_pane_g1

0x14f4,	// (0x00010815) volume_set_pane_g2

0x14fc,	// (0x0001081d) volume_set_pane_g3

0x1504,	// (0x00010825) volume_set_pane_g4

0x150c,	// (0x0001082d) volume_set_pane_g5

0x1514,	// (0x00010835) volume_set_pane_g6

0x151c,	// (0x0001083d) volume_set_pane_g7

0x1524,	// (0x00010845) volume_set_pane_g8

0x152c,	// (0x0001084d) volume_set_pane_g9

0x1534,	// (0x00010855) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001ec53) volume_set_pane_g

0xc9f7,	// (0x0001bd18) indicator_pane_ParamLimits

0xc9f7,	// (0x0001bd18) indicator_pane

0xca1f,	// (0x0001bd40) main_idle_pane_g2_ParamLimits

0xca1f,	// (0x0001bd40) main_idle_pane_g2

0xca57,	// (0x0001bd78) main_pane_idle_g1_ParamLimits

0xca57,	// (0x0001bd78) main_pane_idle_g1

0x2874,	// (0x00011b95) popup_clock_digital_analogue_window_ParamLimits

0x2874,	// (0x00011b95) popup_clock_digital_analogue_window

0xca7e,	// (0x0001bd9f) soft_indicator_pane_ParamLimits

0xca7e,	// (0x0001bd9f) soft_indicator_pane

0xca98,	// (0x0001bdb9) wallpaper_pane_ParamLimits

0xca98,	// (0x0001bdb9) wallpaper_pane

0x26d6,	// (0x000119f7) wallpaper_pane_g1

0xcaaa,	// (0x0001bdcb) indicator_pane_g1_ParamLimits

0xcaaa,	// (0x0001bdcb) indicator_pane_g1

0x65d1,	// (0x000158f2) navi_navi_icon_text_pane_srt_g1

0x28c6,	// (0x00011be7) soft_indicator_pane_t1

0x28e0,	// (0x00011c01) aid_ps_area_pane

0xcac0,	// (0x0001bde1) aid_ps_clock_pane

0x28ff,	// (0x00011c20) aid_ps_indicator_pane

0x290b,	// (0x00011c2c) indicator_ps_pane_ParamLimits

0x290b,	// (0x00011c2c) indicator_ps_pane

0x291a,	// (0x00011c3b) power_save_pane_g1_ParamLimits

0x291a,	// (0x00011c3b) power_save_pane_g1

0x2926,	// (0x00011c47) power_save_pane_g2_ParamLimits

0x2926,	// (0x00011c47) power_save_pane_g2

0x01c1,	// (0x0000f4e2) aid_navinavi_width_pane

0x28e0,	// (0x00011c01) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001e88b) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001e88b) power_save_pane_g

0x2934,	// (0x00011c55) power_save_pane_t1_ParamLimits

0x2934,	// (0x00011c55) power_save_pane_t1

0xcac0,	// (0x0001bde1) aid_ps_clock_pane_ParamLimits

0x28ff,	// (0x00011c20) aid_ps_indicator_pane_ParamLimits

0x2946,	// (0x00011c67) power_save_pane_t4_ParamLimits

0x2946,	// (0x00011c67) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001e890) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001e890) power_save_pane_t

0x2970,	// (0x00011c91) power_save_t3_ParamLimits

0x2970,	// (0x00011c91) power_save_t3

0x295b,	// (0x00011c7c) power_save_t2_ParamLimits

0x295b,	// (0x00011c7c) power_save_t2

0x2985,	// (0x00011ca6) indicator_ps_pane_g1

0xcace,	// (0x0001bdef) ai_gene_pane_ParamLimits

0xcace,	// (0x0001bdef) ai_gene_pane

0xcae5,	// (0x0001be06) ai_links_pane_ParamLimits

0xcae5,	// (0x0001be06) ai_links_pane

0xcafd,	// (0x0001be1e) indicator_pane_cp1_ParamLimits

0xcafd,	// (0x0001be1e) indicator_pane_cp1

0xcb0c,	// (0x0001be2d) main_pane_idle_g1_cp_ParamLimits

0xcb0c,	// (0x0001be2d) main_pane_idle_g1_cp

0x29be,	// (0x00011cdf) popup_ai_links_title_window

0xcb24,	// (0x0001be45) soft_indicator_pane_cp1_ParamLimits

0xcb24,	// (0x0001be45) soft_indicator_pane_cp1

0x5e9e,	// (0x000151bf) ai_links_pane_g1

0x5ea7,	// (0x000151c8) grid_ai_links_pane

0xdb30,	// (0x0001ce51) ai_gene_pane_1

0x5e8c,	// (0x000151ad) ai_gene_pane_2

0x5e95,	// (0x000151b6) list_highlight_pane_cp4

0xdb0c,	// (0x0001ce2d) cell_ai_link_pane_ParamLimits

0xdb0c,	// (0x0001ce2d) cell_ai_link_pane

0x5e5d,	// (0x0001517e) cell_ai_link_pane_g1

0x2beb,	// (0x00011f0c) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001ec2e) cell_ai_link_pane_g

0x26e0,	// (0x00011a01) grid_highlight_cp2

0x26e0,	// (0x00011a01) bg_popup_sub_pane_cp1

0x29e1,	// (0x00011d02) popup_ai_links_title_window_t1

0x5dad,	// (0x000150ce) ai_gene_pane_1_g1_ParamLimits

0x5dad,	// (0x000150ce) ai_gene_pane_1_g1

0x5db9,	// (0x000150da) ai_gene_pane_1_g2_ParamLimits

0x5db9,	// (0x000150da) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001ec24) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001ec24) ai_gene_pane_1_g

0x5dc6,	// (0x000150e7) ai_gene_pane_1_t1_ParamLimits

0x5dc6,	// (0x000150e7) ai_gene_pane_1_t1

0x5dfa,	// (0x0001511b) grid_ai_soft_ind_pane

0x5d98,	// (0x000150b9) ai_gene_pane_2_t1_ParamLimits

0x5d98,	// (0x000150b9) ai_gene_pane_2_t1

0xcb38,	// (0x0001be59) main_pane_empty_t1_ParamLimits

0xcb38,	// (0x0001be59) main_pane_empty_t1

0xcb50,	// (0x0001be71) main_pane_empty_t2_ParamLimits

0xcb50,	// (0x0001be71) main_pane_empty_t2

0xcb65,	// (0x0001be86) main_pane_empty_t3_ParamLimits

0xcb65,	// (0x0001be86) main_pane_empty_t3

0xcb77,	// (0x0001be98) main_pane_empty_t4_ParamLimits

0xcb77,	// (0x0001be98) main_pane_empty_t4

0xcb89,	// (0x0001beaa) main_pane_empty_t5_ParamLimits

0xcb89,	// (0x0001beaa) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001e895) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001e895) main_pane_empty_t

0x378b,	// (0x00012aac) bg_popup_window_pane_ParamLimits

0x378b,	// (0x00012aac) bg_popup_window_pane

0x5b08,	// (0x00014e29) find_popup_pane_cp2_ParamLimits

0x5b08,	// (0x00014e29) find_popup_pane_cp2

0x5b14,	// (0x00014e35) heading_pane_ParamLimits

0x5b14,	// (0x00014e35) heading_pane

0x26e0,	// (0x00011a01) bg_popup_sub_pane

0xda8d,	// (0x0001cdae) bg_popup_window_pane_g1_ParamLimits

0xda8d,	// (0x0001cdae) bg_popup_window_pane_g1

0xda9c,	// (0x0001cdbd) bg_popup_window_pane_g2_ParamLimits

0xda9c,	// (0x0001cdbd) bg_popup_window_pane_g2

0xdaa8,	// (0x0001cdc9) bg_popup_window_pane_g3_ParamLimits

0xdaa8,	// (0x0001cdc9) bg_popup_window_pane_g3

0xdab4,	// (0x0001cdd5) bg_popup_window_pane_g4_ParamLimits

0xdab4,	// (0x0001cdd5) bg_popup_window_pane_g4

0xdac3,	// (0x0001cde4) bg_popup_window_pane_g5_ParamLimits

0xdac3,	// (0x0001cde4) bg_popup_window_pane_g5

0xdad3,	// (0x0001cdf4) bg_popup_window_pane_g6_ParamLimits

0xdad3,	// (0x0001cdf4) bg_popup_window_pane_g6

0xdadf,	// (0x0001ce00) bg_popup_window_pane_g7_ParamLimits

0xdadf,	// (0x0001ce00) bg_popup_window_pane_g7

0xdaee,	// (0x0001ce0f) bg_popup_window_pane_g8_ParamLimits

0xdaee,	// (0x0001ce0f) bg_popup_window_pane_g8

0xdafd,	// (0x0001ce1e) bg_popup_window_pane_g9_ParamLimits

0xdafd,	// (0x0001ce1e) bg_popup_window_pane_g9

0x5aee,	// (0x00014e0f) bg_popup_window_pane_g10_ParamLimits

0x5aee,	// (0x00014e0f) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001ebec) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001ebec) bg_popup_window_pane_g

0x5a17,	// (0x00014d38) bg_popup_heading_pane_ParamLimits

0x5a17,	// (0x00014d38) bg_popup_heading_pane

0x15d8,	// (0x000108f9) tabs_4_passive_pane_cp_srt_ParamLimits

0x15d8,	// (0x000108f9) tabs_4_passive_pane_cp_srt

0x15ea,	// (0x0001090b) tabs_4_passive_pane_srt_ParamLimits

0x5a2b,	// (0x00014d4c) heading_pane_g2

0x15ea,	// (0x0001090b) tabs_4_passive_pane_srt

0x4d44,	// (0x00014065) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d44,	// (0x00014065) bg_passive_tab_pane_cp3_srt

0x5a33,	// (0x00014d54) heading_pane_t1_ParamLimits

0x5a33,	// (0x00014d54) heading_pane_t1

0x5a4a,	// (0x00014d6b) heading_pane_t2_ParamLimits

0x5a4a,	// (0x00014d6b) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001ebe7) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001ebe7) heading_pane_t

0x5544,	// (0x00014865) bg_popup_heading_pane_g1

0x55f3,	// (0x00014914) bg_popup_heading_pane_g2

0x55fd,	// (0x0001491e) bg_popup_heading_pane_g3

0x5607,	// (0x00014928) bg_popup_heading_pane_g4

0x5611,	// (0x00014932) bg_popup_heading_pane_g5

0x561b,	// (0x0001493c) bg_popup_heading_pane_g6

0x5623,	// (0x00014944) bg_popup_heading_pane_g7

0x562b,	// (0x0001494c) bg_popup_heading_pane_g8

0x5635,	// (0x00014956) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001eba3) bg_popup_heading_pane_g

0x4c20,	// (0x00013f41) bg_popup_sub_pane_g1

0x4c30,	// (0x00013f51) bg_popup_sub_pane_g2

0x4c28,	// (0x00013f49) bg_popup_sub_pane_g3

0x4c40,	// (0x00013f61) bg_popup_sub_pane_g4

0x4c38,	// (0x00013f59) bg_popup_sub_pane_g5

0x4c48,	// (0x00013f69) bg_popup_sub_pane_g6

0x4c50,	// (0x00013f71) bg_popup_sub_pane_g7

0x4c60,	// (0x00013f81) bg_popup_sub_pane_g8

0x4c58,	// (0x00013f79) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001eb7d) bg_popup_sub_pane_g

0x2a55,	// (0x00011d76) bg_popup_window_pane_cp5_ParamLimits

0x2a55,	// (0x00011d76) bg_popup_window_pane_cp5

0x2a71,	// (0x00011d92) popup_note_window_g1_ParamLimits

0x2a71,	// (0x00011d92) popup_note_window_g1

0x2a7d,	// (0x00011d9e) popup_note_window_t1_ParamLimits

0x2a7d,	// (0x00011d9e) popup_note_window_t1

0x2a8f,	// (0x00011db0) popup_note_window_t2_ParamLimits

0x2a8f,	// (0x00011db0) popup_note_window_t2

0x2aa1,	// (0x00011dc2) popup_note_window_t3_ParamLimits

0x2aa1,	// (0x00011dc2) popup_note_window_t3

0x2ab3,	// (0x00011dd4) popup_note_window_t4_ParamLimits

0x2ab3,	// (0x00011dd4) popup_note_window_t4

0x2adb,	// (0x00011dfc) popup_note_window_t5_ParamLimits

0x2adb,	// (0x00011dfc) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001e8a0) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001e8a0) popup_note_window_t

0x2aff,	// (0x00011e20) bg_popup_window_pane_cp6_ParamLimits

0x2aff,	// (0x00011e20) bg_popup_window_pane_cp6

0x54b8,	// (0x000147d9) popup_note_image_window_g1_ParamLimits

0x54b8,	// (0x000147d9) popup_note_image_window_g1

0x54c4,	// (0x000147e5) popup_note_image_window_g2_ParamLimits

0x54c4,	// (0x000147e5) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001eb71) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001eb71) popup_note_image_window_g

0x54dd,	// (0x000147fe) popup_note_image_window_t1_ParamLimits

0x54dd,	// (0x000147fe) popup_note_image_window_t1

0x54f6,	// (0x00014817) popup_note_image_window_t2_ParamLimits

0x54f6,	// (0x00014817) popup_note_image_window_t2

0x550f,	// (0x00014830) popup_note_image_window_t3_ParamLimits

0x550f,	// (0x00014830) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001eb76) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001eb76) popup_note_image_window_t

0x5379,	// (0x0001469a) bg_popup_window_pane_cp7_ParamLimits

0x5379,	// (0x0001469a) bg_popup_window_pane_cp7

0x53a9,	// (0x000146ca) popup_note_wait_window_g1_ParamLimits

0x53a9,	// (0x000146ca) popup_note_wait_window_g1

0x53b5,	// (0x000146d6) popup_note_wait_window_g2_ParamLimits

0x53b5,	// (0x000146d6) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001eb5f) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001eb5f) popup_note_wait_window_g

0x53cd,	// (0x000146ee) popup_note_wait_window_t1_ParamLimits

0x53cd,	// (0x000146ee) popup_note_wait_window_t1

0x53f4,	// (0x00014715) popup_note_wait_window_t2_ParamLimits

0x53f4,	// (0x00014715) popup_note_wait_window_t2

0x5411,	// (0x00014732) popup_note_wait_window_t3_ParamLimits

0x5411,	// (0x00014732) popup_note_wait_window_t3

0x5424,	// (0x00014745) popup_note_wait_window_t4_ParamLimits

0x5424,	// (0x00014745) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001eb66) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001eb66) popup_note_wait_window_t

0x5449,	// (0x0001476a) wait_bar_pane_ParamLimits

0x5449,	// (0x0001476a) wait_bar_pane

0x26e0,	// (0x00011a01) wait_anim_pane

0x26e0,	// (0x00011a01) wait_border_pane

0x26d6,	// (0x000119f7) wait_anim_pane_g1

0x26d6,	// (0x000119f7) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ea1f) wait_anim_pane_g

0x531d,	// (0x0001463e) wait_border_pane_g1

0x5328,	// (0x00014649) wait_border_pane_g2

0x5331,	// (0x00014652) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001eb58) wait_border_pane_g

0x518d,	// (0x000144ae) bg_popup_window_pane_cp16_ParamLimits

0x518d,	// (0x000144ae) bg_popup_window_pane_cp16

0x528d,	// (0x000145ae) indicator_popup_pane_cp4_ParamLimits

0x528d,	// (0x000145ae) indicator_popup_pane_cp4

0x52a1,	// (0x000145c2) popup_query_data_window_t1_ParamLimits

0x52a1,	// (0x000145c2) popup_query_data_window_t1

0x52b3,	// (0x000145d4) popup_query_data_window_t2_ParamLimits

0x52b3,	// (0x000145d4) popup_query_data_window_t2

0x52cc,	// (0x000145ed) popup_query_data_window_t3_ParamLimits

0x52cc,	// (0x000145ed) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001eb51) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001eb51) popup_query_data_window_t

0x52e6,	// (0x00014607) query_popup_data_pane_ParamLimits

0x52e6,	// (0x00014607) query_popup_data_pane

0x52fa,	// (0x0001461b) query_popup_data_pane_cp1_ParamLimits

0x52fa,	// (0x0001461b) query_popup_data_pane_cp1

0x518d,	// (0x000144ae) bg_popup_window_pane_cp10_ParamLimits

0x518d,	// (0x000144ae) bg_popup_window_pane_cp10

0x51bf,	// (0x000144e0) indicator_popup_pane_ParamLimits

0x51bf,	// (0x000144e0) indicator_popup_pane

0x51e1,	// (0x00014502) popup_query_code_window_t1_ParamLimits

0x51e1,	// (0x00014502) popup_query_code_window_t1

0x51fb,	// (0x0001451c) popup_query_code_window_t2_ParamLimits

0x51fb,	// (0x0001451c) popup_query_code_window_t2

0x5244,	// (0x00014565) popup_query_code_window_t3_ParamLimits

0x5244,	// (0x00014565) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001eb4a) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001eb4a) popup_query_code_window_t

0x5273,	// (0x00014594) query_popup_pane_ParamLimits

0x5273,	// (0x00014594) query_popup_pane

0x2aff,	// (0x00011e20) bg_popup_window_pane_cp15_ParamLimits

0x2aff,	// (0x00011e20) bg_popup_window_pane_cp15

0x2b1d,	// (0x00011e3e) indicator_popup_pane_cp1_ParamLimits

0x2b1d,	// (0x00011e3e) indicator_popup_pane_cp1

0x2b30,	// (0x00011e51) indicator_popup_pane_cp2_ParamLimits

0x2b30,	// (0x00011e51) indicator_popup_pane_cp2

0x2b43,	// (0x00011e64) popup_query_data_code_window_g1_ParamLimits

0x2b43,	// (0x00011e64) popup_query_data_code_window_g1

0x2b56,	// (0x00011e77) popup_query_data_code_window_t1_ParamLimits

0x2b56,	// (0x00011e77) popup_query_data_code_window_t1

0x2b68,	// (0x00011e89) popup_query_data_code_window_t2_ParamLimits

0x2b68,	// (0x00011e89) popup_query_data_code_window_t2

0x2b7a,	// (0x00011e9b) popup_query_data_code_window_t3_ParamLimits

0x2b7a,	// (0x00011e9b) popup_query_data_code_window_t3

0x2b90,	// (0x00011eb1) popup_query_data_code_window_t4_ParamLimits

0x2b90,	// (0x00011eb1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001e8ab) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001e8ab) popup_query_data_code_window_t

0x12a1,	// (0x000105c2) list_single_midp_graphic_pane_g3

0x2ba8,	// (0x00011ec9) query_popup_data_pane_cp2_ParamLimits

0x2bbb,	// (0x00011edc) query_popup_pane_cp2_ParamLimits

0x2bbb,	// (0x00011edc) query_popup_pane_cp2

0x26e0,	// (0x00011a01) bg_popup_window_pane_cp11

0x5185,	// (0x000144a6) heading_pane_cp5

0x2ca6,	// (0x00011fc7) listscroll_popup_info_pane

0x26e0,	// (0x00011a01) input_focus_pane_cp3

0x2bce,	// (0x00011eef) query_popup_pane_t1

0x2bdc,	// (0x00011efd) list_popup_info_pane_ParamLimits

0x2bdc,	// (0x00011efd) list_popup_info_pane

0x2beb,	// (0x00011f0c) listscroll_popup_info_pane_g1

0x2bf3,	// (0x00011f14) scroll_pane_cp7

0x2bfd,	// (0x00011f1e) popup_info_list_pane_t1_ParamLimits

0x2bfd,	// (0x00011f1e) popup_info_list_pane_t1

0x2c17,	// (0x00011f38) popup_info_list_pane_t2_ParamLimits

0x2c17,	// (0x00011f38) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001e8b4) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001e8b4) popup_info_list_pane_t

0x26e0,	// (0x00011a01) bg_popup_window_pane_cp12

0x65eb,	// (0x0001590c) find_popup_pane

0x27c0,	// (0x00011ae1) bg_popup_window_pane_cp3

0x2c31,	// (0x00011f52) heading_pane_cp3

0x2c3d,	// (0x00011f5e) listscroll_popup_graphic_pane

0x26e0,	// (0x00011a01) bg_popup_window_pane_cp4

0xcbeb,	// (0x0001bf0c) heading_pane_cp4

0x2ca6,	// (0x00011fc7) listscroll_popup_colour_pane

0x2cae,	// (0x00011fcf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2cae,	// (0x00011fcf) cell_large_graphic_colour_none_popup_pane

0xcbf3,	// (0x0001bf14) grid_large_graphic_colour_popup_pane_ParamLimits

0xcbf3,	// (0x0001bf14) grid_large_graphic_colour_popup_pane

0x2cea,	// (0x0001200b) listscroll_popup_colour_pane_g1_ParamLimits

0x2cea,	// (0x0001200b) listscroll_popup_colour_pane_g1

0x2d01,	// (0x00012022) listscroll_popup_colour_pane_g2_ParamLimits

0x2d01,	// (0x00012022) listscroll_popup_colour_pane_g2

0x2d18,	// (0x00012039) listscroll_popup_colour_pane_g3_ParamLimits

0x2d18,	// (0x00012039) listscroll_popup_colour_pane_g3

0xcc17,	// (0x0001bf38) listscroll_popup_colour_pane_g4_ParamLimits

0xcc17,	// (0x0001bf38) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001e8b9) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001e8b9) listscroll_popup_colour_pane_g

0x2d37,	// (0x00012058) scroll_pane_cp6_ParamLimits

0x2d37,	// (0x00012058) scroll_pane_cp6

0xcc26,	// (0x0001bf47) cell_large_graphic_colour_popup_pane_ParamLimits

0xcc26,	// (0x0001bf47) cell_large_graphic_colour_popup_pane

0x2d68,	// (0x00012089) cell_large_graphic_colour_none_popup_pane_t1

0x26e0,	// (0x00011a01) grid_highlight_pane_cp5

0x2d77,	// (0x00012098) cell_large_graphic_colour_popup_pane_g1

0x2d7f,	// (0x000120a0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001e8c2) cell_large_graphic_colour_popup_pane_g

0x2d87,	// (0x000120a8) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d90,	// (0x000120b1) grid_highlight_pane_cp4

0x2d98,	// (0x000120b9) bg_popup_window_pane_cp8_ParamLimits

0x2d98,	// (0x000120b9) bg_popup_window_pane_cp8

0x2db3,	// (0x000120d4) popup_snote_single_text_window_g1_ParamLimits

0x2db3,	// (0x000120d4) popup_snote_single_text_window_g1

0x2dc5,	// (0x000120e6) popup_snote_single_text_window_t1_ParamLimits

0x2dc5,	// (0x000120e6) popup_snote_single_text_window_t1

0x2dd8,	// (0x000120f9) popup_snote_single_text_window_t2_ParamLimits

0x2dd8,	// (0x000120f9) popup_snote_single_text_window_t2

0x2deb,	// (0x0001210c) popup_snote_single_text_window_t3_ParamLimits

0x2deb,	// (0x0001210c) popup_snote_single_text_window_t3

0x2e24,	// (0x00012145) popup_snote_single_text_window_t4_ParamLimits

0x2e24,	// (0x00012145) popup_snote_single_text_window_t4

0x2e58,	// (0x00012179) popup_snote_single_text_window_t5_ParamLimits

0x2e58,	// (0x00012179) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001e8c7) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001e8c7) popup_snote_single_text_window_t

0x2e87,	// (0x000121a8) bg_popup_window_pane_cp9_ParamLimits

0x2e87,	// (0x000121a8) bg_popup_window_pane_cp9

0x2db3,	// (0x000120d4) popup_snote_single_graphic_window_g1_ParamLimits

0x2db3,	// (0x000120d4) popup_snote_single_graphic_window_g1

0x2e95,	// (0x000121b6) popup_snote_single_graphic_window_g2_ParamLimits

0x2e95,	// (0x000121b6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001e8d2) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001e8d2) popup_snote_single_graphic_window_g

0x2ea1,	// (0x000121c2) popup_snote_single_graphic_window_t1_ParamLimits

0x2ea1,	// (0x000121c2) popup_snote_single_graphic_window_t1

0x2eb4,	// (0x000121d5) popup_snote_single_graphic_window_t2_ParamLimits

0x2eb4,	// (0x000121d5) popup_snote_single_graphic_window_t2

0x2ec7,	// (0x000121e8) popup_snote_single_graphic_window_t3_ParamLimits

0x2ec7,	// (0x000121e8) popup_snote_single_graphic_window_t3

0x2f00,	// (0x00012221) popup_snote_single_graphic_window_t4_ParamLimits

0x2f00,	// (0x00012221) popup_snote_single_graphic_window_t4

0x2f34,	// (0x00012255) popup_snote_single_graphic_window_t5_ParamLimits

0x2f34,	// (0x00012255) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001e8d7) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001e8d7) popup_snote_single_graphic_window_t

0x652f,	// (0x00015850) grid_graphic_popup_pane_ParamLimits

0x652f,	// (0x00015850) grid_graphic_popup_pane

0x6557,	// (0x00015878) listscroll_popup_graphic_pane_g1_ParamLimits

0x6557,	// (0x00015878) listscroll_popup_graphic_pane_g1

0xde32,	// (0x0001d153) listscroll_popup_graphic_pane_g2_ParamLimits

0xde32,	// (0x0001d153) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001ecc7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001ecc7) listscroll_popup_graphic_pane_g

0x657f,	// (0x000158a0) scroll_pane_cp5

0xdded,	// (0x0001d10e) cell_graphic_popup_pane_ParamLimits

0xdded,	// (0x0001d10e) cell_graphic_popup_pane

0x64b0,	// (0x000157d1) cell_graphic_popup_pane_g1

0x64b8,	// (0x000157d9) cell_graphic_popup_pane_g2

0x2d87,	// (0x000120a8) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001ecc0) cell_graphic_popup_pane_g

0x64c1,	// (0x000157e2) cell_graphic_popup_pane_t2

0x2d90,	// (0x000120b1) grid_highlight_pane_cp3

0x2f75,	// (0x00012296) list_gen_pane_ParamLimits

0x2f75,	// (0x00012296) list_gen_pane

0x2fa7,	// (0x000122c8) scroll_pane

0xdda8,	// (0x0001d0c9) bg_list_pane_g1_ParamLimits

0xdda8,	// (0x0001d0c9) bg_list_pane_g1

0x642d,	// (0x0001574e) bg_list_pane_g2_ParamLimits

0x642d,	// (0x0001574e) bg_list_pane_g2

0x6440,	// (0x00015761) bg_list_pane_g3_ParamLimits

0x6440,	// (0x00015761) bg_list_pane_g3

0x6452,	// (0x00015773) bg_list_pane_g4_ParamLimits

0x6452,	// (0x00015773) bg_list_pane_g4

0xddc3,	// (0x0001d0e4) bg_list_pane_g5_ParamLimits

0xddc3,	// (0x0001d0e4) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001ecb5) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001ecb5) bg_list_pane_g

0xdd37,	// (0x0001d058) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double2_graphic_large_graphic_pane

0xdd37,	// (0x0001d058) list_double2_graphic_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double2_graphic_pane

0xdd37,	// (0x0001d058) list_double2_large_graphic_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double2_large_graphic_pane

0xdd4a,	// (0x0001d06b) list_double2_pane_ParamLimits

0xdd4a,	// (0x0001d06b) list_double2_pane

0xdd37,	// (0x0001d058) list_double_graphic_heading_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_graphic_heading_pane

0xdd37,	// (0x0001d058) list_double_graphic_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_graphic_pane

0xdd37,	// (0x0001d058) list_double_heading_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_heading_pane

0xdd37,	// (0x0001d058) list_double_large_graphic_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_large_graphic_pane

0xdd37,	// (0x0001d058) list_double_number_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_number_pane

0xdd37,	// (0x0001d058) list_double_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_pane

0xdd37,	// (0x0001d058) list_double_time_pane_ParamLimits

0xdd37,	// (0x0001d058) list_double_time_pane

0xdd37,	// (0x0001d058) list_setting_number_pane_ParamLimits

0xdd37,	// (0x0001d058) list_setting_number_pane

0xdd37,	// (0x0001d058) list_setting_pane_ParamLimits

0xdd37,	// (0x0001d058) list_setting_pane

0xdd5c,	// (0x0001d07d) list_single_2graphic_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_2graphic_pane

0xdd5c,	// (0x0001d07d) list_single_graphic_heading_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_graphic_heading_pane

0xdd5c,	// (0x0001d07d) list_single_graphic_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_graphic_pane

0xdd5c,	// (0x0001d07d) list_single_heading_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_heading_pane

0xdd37,	// (0x0001d058) list_single_large_graphic_pane_ParamLimits

0xdd37,	// (0x0001d058) list_single_large_graphic_pane

0xdd5c,	// (0x0001d07d) list_single_number_heading_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_number_heading_pane

0xdd5c,	// (0x0001d07d) list_single_number_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_number_pane

0xdd5c,	// (0x0001d07d) list_single_pane_ParamLimits

0xdd5c,	// (0x0001d07d) list_single_pane

0x26e0,	// (0x00011a01) list_highlight_pane_cp1

0x2fe7,	// (0x00012308) list_single_pane_g1_ParamLimits

0x2fe7,	// (0x00012308) list_single_pane_g1

0x2ff3,	// (0x00012314) list_single_pane_g2_ParamLimits

0x2ff3,	// (0x00012314) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_single_pane_g

0x62a6,	// (0x000155c7) list_single_pane_t1_ParamLimits

0x62a6,	// (0x000155c7) list_single_pane_t1

0x2fe7,	// (0x00012308) list_single_number_pane_g1_ParamLimits

0x2fe7,	// (0x00012308) list_single_number_pane_g1

0x2ff3,	// (0x00012314) list_single_number_pane_g2_ParamLimits

0x2ff3,	// (0x00012314) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_single_number_pane_g

0x4bae,	// (0x00013ecf) list_single_number_pane_t1_ParamLimits

0x4bae,	// (0x00013ecf) list_single_number_pane_t1

0x6056,	// (0x00015377) list_single_number_pane_t2_ParamLimits

0x6056,	// (0x00015377) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001ec76) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001ec76) list_single_number_pane_t

0x2fdb,	// (0x000122fc) list_single_graphic_pane_g1_ParamLimits

0x2fdb,	// (0x000122fc) list_single_graphic_pane_g1

0x2fe7,	// (0x00012308) list_single_graphic_pane_g2_ParamLimits

0x2fe7,	// (0x00012308) list_single_graphic_pane_g2

0x2ff3,	// (0x00012314) list_single_graphic_pane_g3_ParamLimits

0x2ff3,	// (0x00012314) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001e8e2) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001e8e2) list_single_graphic_pane_g

0x2fff,	// (0x00012320) list_single_graphic_pane_t1_ParamLimits

0x2fff,	// (0x00012320) list_single_graphic_pane_t1

0x2fe7,	// (0x00012308) list_single_heading_pane_g1_ParamLimits

0x2fe7,	// (0x00012308) list_single_heading_pane_g1

0x2ff3,	// (0x00012314) list_single_heading_pane_g2_ParamLimits

0x2ff3,	// (0x00012314) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_single_heading_pane_g

0x3015,	// (0x00012336) list_single_heading_pane_t1_ParamLimits

0x3015,	// (0x00012336) list_single_heading_pane_t1

0x302b,	// (0x0001234c) list_single_heading_pane_t2_ParamLimits

0x302b,	// (0x0001234c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001e8ee) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001e8ee) list_single_heading_pane_t

0x2fe7,	// (0x00012308) list_single_number_heading_pane_g1_ParamLimits

0x2fe7,	// (0x00012308) list_single_number_heading_pane_g1

0x2ff3,	// (0x00012314) list_single_number_heading_pane_g2_ParamLimits

0x2ff3,	// (0x00012314) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_single_number_heading_pane_g

0x3015,	// (0x00012336) list_single_number_heading_pane_t1_ParamLimits

0x3015,	// (0x00012336) list_single_number_heading_pane_t1

0x303d,	// (0x0001235e) list_single_number_heading_pane_t2_ParamLimits

0x303d,	// (0x0001235e) list_single_number_heading_pane_t2

0x304f,	// (0x00012370) list_single_number_heading_pane_t3_ParamLimits

0x304f,	// (0x00012370) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001e8f3) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001e8f3) list_single_number_heading_pane_t

0x3061,	// (0x00012382) list_single_graphic_heading_pane_g1_ParamLimits

0x3061,	// (0x00012382) list_single_graphic_heading_pane_g1

0xcc4f,	// (0x0001bf70) list_single_graphic_heading_pane_g4_ParamLimits

0xcc4f,	// (0x0001bf70) list_single_graphic_heading_pane_g4

0x2ff3,	// (0x00012314) list_single_graphic_heading_pane_g5_ParamLimits

0x2ff3,	// (0x00012314) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001e8fa) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001e8fa) list_single_graphic_heading_pane_g

0x3015,	// (0x00012336) list_single_graphic_heading_pane_t1_ParamLimits

0x3015,	// (0x00012336) list_single_graphic_heading_pane_t1

0x307e,	// (0x0001239f) list_single_graphic_heading_pane_t2_ParamLimits

0x307e,	// (0x0001239f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001e901) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001e901) list_single_graphic_heading_pane_t

0x6bb7,	// (0x00015ed8) list_single_large_graphic_pane_g1_ParamLimits

0x6bb7,	// (0x00015ed8) list_single_large_graphic_pane_g1

0x6bc3,	// (0x00015ee4) list_single_large_graphic_pane_g2_ParamLimits

0x6bc3,	// (0x00015ee4) list_single_large_graphic_pane_g2

0x6bcf,	// (0x00015ef0) list_single_large_graphic_pane_g3_ParamLimits

0x6bcf,	// (0x00015ef0) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001e906) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001e906) list_single_large_graphic_pane_g

0x5328,	// (0x00014649) wait_border_pane_g2_copy1

0x30b4,	// (0x000123d5) list_single_large_graphic_pane_g4_cp2

0x6bdb,	// (0x00015efc) list_single_large_graphic_pane_t1_ParamLimits

0x6bdb,	// (0x00015efc) list_single_large_graphic_pane_t1

0x41f2,	// (0x00013513) list_double_pane_g1_ParamLimits

0x41f2,	// (0x00013513) list_double_pane_g1

0xcc60,	// (0x0001bf81) list_double_pane_g2_ParamLimits

0xcc60,	// (0x0001bf81) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001e90d) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001e90d) list_double_pane_g

0xcc6c,	// (0x0001bf8d) list_double_pane_t1_ParamLimits

0xcc6c,	// (0x0001bf8d) list_double_pane_t1

0xcc82,	// (0x0001bfa3) list_double_pane_t2_ParamLimits

0xcc82,	// (0x0001bfa3) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001e912) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001e912) list_double_pane_t

0xcc94,	// (0x0001bfb5) list_double2_pane_g1_ParamLimits

0xcc94,	// (0x0001bfb5) list_double2_pane_g1

0x30de,	// (0x000123ff) list_double2_pane_g2_ParamLimits

0x30de,	// (0x000123ff) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001e917) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001e917) list_double2_pane_g

0x30ea,	// (0x0001240b) list_double2_pane_t1_ParamLimits

0x30ea,	// (0x0001240b) list_double2_pane_t1

0xcca5,	// (0x0001bfc6) list_double2_pane_t2_ParamLimits

0xcca5,	// (0x0001bfc6) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001e91c) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001e91c) list_double2_pane_t

0x41f2,	// (0x00013513) list_double_number_pane_g1_ParamLimits

0x41f2,	// (0x00013513) list_double_number_pane_g1

0xcc60,	// (0x0001bf81) list_double_number_pane_g2_ParamLimits

0xcc60,	// (0x0001bf81) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001e90d) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001e90d) list_double_number_pane_g

0xccb7,	// (0x0001bfd8) list_double_number_pane_t1_ParamLimits

0xccb7,	// (0x0001bfd8) list_double_number_pane_t1

0xccc9,	// (0x0001bfea) list_double_number_pane_t2_ParamLimits

0xccc9,	// (0x0001bfea) list_double_number_pane_t2

0xccdf,	// (0x0001c000) list_double_number_pane_t3_ParamLimits

0xccdf,	// (0x0001c000) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001e921) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001e921) list_double_number_pane_t

0x59ab,	// (0x00014ccc) list_double_graphic_pane_g1_ParamLimits

0x59ab,	// (0x00014ccc) list_double_graphic_pane_g1

0xccf1,	// (0x0001c012) list_double_graphic_pane_g2_ParamLimits

0xccf1,	// (0x0001c012) list_double_graphic_pane_g2

0xcd00,	// (0x0001c021) list_double_graphic_pane_g3_ParamLimits

0xcd00,	// (0x0001c021) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001e928) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001e928) list_double_graphic_pane_g

0xcd18,	// (0x0001c039) list_double_graphic_pane_t1_ParamLimits

0xcd18,	// (0x0001c039) list_double_graphic_pane_t1

0xcd2e,	// (0x0001c04f) list_double_graphic_pane_t2_ParamLimits

0xcd2e,	// (0x0001c04f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001e931) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001e931) list_double_graphic_pane_t

0xcd40,	// (0x0001c061) list_double2_graphic_pane_g1_ParamLimits

0xcd40,	// (0x0001c061) list_double2_graphic_pane_g1

0xcd4c,	// (0x0001c06d) list_double2_graphic_pane_g2_ParamLimits

0xcd4c,	// (0x0001c06d) list_double2_graphic_pane_g2

0xcd58,	// (0x0001c079) list_double2_graphic_pane_g3_ParamLimits

0xcd58,	// (0x0001c079) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001e936) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001e936) list_double2_graphic_pane_g

0xcd64,	// (0x0001c085) list_double2_graphic_pane_t1_ParamLimits

0xcd64,	// (0x0001c085) list_double2_graphic_pane_t1

0xcd7a,	// (0x0001c09b) list_double2_graphic_pane_t2_ParamLimits

0xcd7a,	// (0x0001c09b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001e93d) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001e93d) list_double2_graphic_pane_t

0xcd8c,	// (0x0001c0ad) list_double_large_graphic_pane_g1_ParamLimits

0xcd8c,	// (0x0001c0ad) list_double_large_graphic_pane_g1

0xcdab,	// (0x0001c0cc) list_double_large_graphic_pane_g2_ParamLimits

0xcdab,	// (0x0001c0cc) list_double_large_graphic_pane_g2

0xcc60,	// (0x0001bf81) list_double_large_graphic_pane_g3_ParamLimits

0xcc60,	// (0x0001bf81) list_double_large_graphic_pane_g3

0xcdbc,	// (0x0001c0dd) list_double_large_graphic_pane_g4_ParamLimits

0xcdbc,	// (0x0001c0dd) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001e942) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001e942) list_double_large_graphic_pane_g

0xcdcf,	// (0x0001c0f0) list_double_large_graphic_pane_t1_ParamLimits

0xcdcf,	// (0x0001c0f0) list_double_large_graphic_pane_t1

0xcde8,	// (0x0001c109) list_double_large_graphic_pane_t2_ParamLimits

0xcde8,	// (0x0001c109) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e94d) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e94d) list_double_large_graphic_pane_t

0xcdfa,	// (0x0001c11b) list_double2_large_graphic_pane_g1_ParamLimits

0xcdfa,	// (0x0001c11b) list_double2_large_graphic_pane_g1

0xce06,	// (0x0001c127) list_double2_large_graphic_pane_g2_ParamLimits

0xce06,	// (0x0001c127) list_double2_large_graphic_pane_g2

0xcd58,	// (0x0001c079) list_double2_large_graphic_pane_g3_ParamLimits

0xcd58,	// (0x0001c079) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001e952) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001e952) list_double2_large_graphic_pane_g

0xce17,	// (0x0001c138) list_double2_large_graphic_pane_t1_ParamLimits

0xce17,	// (0x0001c138) list_double2_large_graphic_pane_t1

0xce2d,	// (0x0001c14e) list_double2_large_graphic_pane_t2_ParamLimits

0xce2d,	// (0x0001c14e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001e959) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001e959) list_double2_large_graphic_pane_t

0xce3f,	// (0x0001c160) list_double_heading_pane_g1_ParamLimits

0xce3f,	// (0x0001c160) list_double_heading_pane_g1

0xce50,	// (0x0001c171) list_double_heading_pane_g2_ParamLimits

0xce50,	// (0x0001c171) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001e95e) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001e95e) list_double_heading_pane_g

0xce5c,	// (0x0001c17d) list_double_heading_pane_t1_ParamLimits

0xce5c,	// (0x0001c17d) list_double_heading_pane_t1

0xce72,	// (0x0001c193) list_double_heading_pane_t2_ParamLimits

0xce72,	// (0x0001c193) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001e963) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001e963) list_double_heading_pane_t

0x31ec,	// (0x0001250d) list_double_graphic_heading_pane_g1_ParamLimits

0x31ec,	// (0x0001250d) list_double_graphic_heading_pane_g1

0xce3f,	// (0x0001c160) list_double_graphic_heading_pane_g2_ParamLimits

0xce3f,	// (0x0001c160) list_double_graphic_heading_pane_g2

0xce50,	// (0x0001c171) list_double_graphic_heading_pane_g3_ParamLimits

0xce50,	// (0x0001c171) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001e968) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001e968) list_double_graphic_heading_pane_g

0xce84,	// (0x0001c1a5) list_double_graphic_heading_pane_t1_ParamLimits

0xce84,	// (0x0001c1a5) list_double_graphic_heading_pane_t1

0xce9a,	// (0x0001c1bb) list_double_graphic_heading_pane_t2_ParamLimits

0xce9a,	// (0x0001c1bb) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001e96f) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001e96f) list_double_graphic_heading_pane_t

0xcdab,	// (0x0001c0cc) list_double_time_pane_g1_ParamLimits

0xcdab,	// (0x0001c0cc) list_double_time_pane_g1

0xcc60,	// (0x0001bf81) list_double_time_pane_g2_ParamLimits

0xcc60,	// (0x0001bf81) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001e974) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001e974) list_double_time_pane_g

0xceac,	// (0x0001c1cd) list_double_time_pane_t1_ParamLimits

0xceac,	// (0x0001c1cd) list_double_time_pane_t1

0xcec2,	// (0x0001c1e3) list_double_time_pane_t2_ParamLimits

0xcec2,	// (0x0001c1e3) list_double_time_pane_t2

0xced4,	// (0x0001c1f5) list_double_time_pane_t3_ParamLimits

0xced4,	// (0x0001c1f5) list_double_time_pane_t3

0xcee6,	// (0x0001c207) list_double_time_pane_t4_ParamLimits

0xcee6,	// (0x0001c207) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001e979) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001e979) list_double_time_pane_t

0xcd4c,	// (0x0001c06d) list_setting_pane_g1_ParamLimits

0xcd4c,	// (0x0001c06d) list_setting_pane_g1

0xcd58,	// (0x0001c079) list_setting_pane_g2_ParamLimits

0xcd58,	// (0x0001c079) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001e982) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001e982) list_setting_pane_g

0xcef8,	// (0x0001c219) list_setting_pane_t1_ParamLimits

0xcef8,	// (0x0001c219) list_setting_pane_t1

0xcf0f,	// (0x0001c230) list_setting_pane_t2_ParamLimits

0xcf0f,	// (0x0001c230) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001e987) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001e987) list_setting_pane_t

0xcf4c,	// (0x0001c26d) set_value_pane_cp_ParamLimits

0xcf4c,	// (0x0001c26d) set_value_pane_cp

0xcd4c,	// (0x0001c06d) list_setting_number_pane_g1_ParamLimits

0xcd4c,	// (0x0001c06d) list_setting_number_pane_g1

0xcd58,	// (0x0001c079) list_setting_number_pane_g2_ParamLimits

0xcd58,	// (0x0001c079) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001e982) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001e982) list_setting_number_pane_g

0xcf58,	// (0x0001c279) list_setting_number_pane_t1_ParamLimits

0xcf58,	// (0x0001c279) list_setting_number_pane_t1

0xcf6c,	// (0x0001c28d) list_setting_number_pane_t2_ParamLimits

0xcf6c,	// (0x0001c28d) list_setting_number_pane_t2

0xcf83,	// (0x0001c2a4) list_setting_number_pane_t3_ParamLimits

0xcf83,	// (0x0001c2a4) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001e98e) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001e98e) list_setting_number_pane_t

0xcf4c,	// (0x0001c26d) set_value_pane_ParamLimits

0xcf4c,	// (0x0001c26d) set_value_pane

0x3452,	// (0x00012773) bg_set_opt_pane_ParamLimits

0x3452,	// (0x00012773) bg_set_opt_pane

0x3473,	// (0x00012794) set_value_pane_t1

0x3481,	// (0x000127a2) slider_set_pane_cp3

0x348a,	// (0x000127ab) volume_small_pane_cp

0x3493,	// (0x000127b4) list_form_gen_pane

0x349c,	// (0x000127bd) scroll_pane_cp8

0xcfc6,	// (0x0001c2e7) form_field_data_pane_ParamLimits

0xcfc6,	// (0x0001c2e7) form_field_data_pane

0xcfdd,	// (0x0001c2fe) form_field_data_wide_pane_ParamLimits

0xcfdd,	// (0x0001c2fe) form_field_data_wide_pane

0xcffd,	// (0x0001c31e) form_field_popup_pane_ParamLimits

0xcffd,	// (0x0001c31e) form_field_popup_pane

0xd015,	// (0x0001c336) form_field_popup_wide_pane_ParamLimits

0xd015,	// (0x0001c336) form_field_popup_wide_pane

0x3529,	// (0x0001284a) form_field_slider_pane_ParamLimits

0x3529,	// (0x0001284a) form_field_slider_pane

0x353c,	// (0x0001285d) form_field_slider_wide_pane_ParamLimits

0x353c,	// (0x0001285d) form_field_slider_wide_pane

0x354f,	// (0x00012870) data_form_pane

0xd03c,	// (0x0001c35d) form_field_data_pane_t1

0x357f,	// (0x000128a0) input_focus_pane

0x358d,	// (0x000128ae) data_form_wide_pane

0x35b9,	// (0x000128da) form_field_data_wide_pane_t1

0x2da5,	// (0x000120c6) input_focus_pane_cp6

0xd056,	// (0x0001c377) form_field_popup_pane_t1

0x357f,	// (0x000128a0) input_focus_pane_cp7

0x35f2,	// (0x00012913) list_form_pane

0x3606,	// (0x00012927) form_field_popup_wide_pane_t1

0x357f,	// (0x000128a0) input_focus_pane_cp8

0x361b,	// (0x0001293c) list_form_wide_pane

0xd078,	// (0x0001c399) form_field_slider_pane_t1_ParamLimits

0xd078,	// (0x0001c399) form_field_slider_pane_t1

0xd090,	// (0x0001c3b1) form_field_slider_pane_t2_ParamLimits

0xd090,	// (0x0001c3b1) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001e99e) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001e99e) form_field_slider_pane_t

0x2a55,	// (0x00011d76) input_focus_pane_cp9_ParamLimits

0x2a55,	// (0x00011d76) input_focus_pane_cp9

0xd0a5,	// (0x0001c3c6) slider_cont_pane_ParamLimits

0xd0a5,	// (0x0001c3c6) slider_cont_pane

0x366c,	// (0x0001298d) form_field_slider_wide_pane_t1_ParamLimits

0x366c,	// (0x0001298d) form_field_slider_wide_pane_t1

0x367e,	// (0x0001299f) form_field_slider_wide_pane_t2_ParamLimits

0x367e,	// (0x0001299f) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001e9a3) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001e9a3) form_field_slider_wide_pane_t

0x2a55,	// (0x00011d76) input_focus_pane_cp10_ParamLimits

0x2a55,	// (0x00011d76) input_focus_pane_cp10

0xd0b9,	// (0x0001c3da) slider_cont_pane_cp1_ParamLimits

0xd0b9,	// (0x0001c3da) slider_cont_pane_cp1

0xd0cd,	// (0x0001c3ee) slider_form_pane_cp

0x36ac,	// (0x000129cd) input_focus_pane_g1

0x36b4,	// (0x000129d5) input_focus_pane_g2

0x36bc,	// (0x000129dd) input_focus_pane_g3

0x36c4,	// (0x000129e5) input_focus_pane_g4

0x36cc,	// (0x000129ed) input_focus_pane_g5

0x36d4,	// (0x000129f5) input_focus_pane_g6

0x36dc,	// (0x000129fd) input_focus_pane_g7

0x36e4,	// (0x00012a05) input_focus_pane_g8

0x36ec,	// (0x00012a0d) input_focus_pane_g9

0x26d6,	// (0x000119f7) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001e9a8) input_focus_pane_g

0x5331,	// (0x00014652) wait_border_pane_g3_copy1

0xd0d5,	// (0x0001c3f6) data_form_pane_t1

0x26d6,	// (0x000119f7) wait_anim_pane_g1_copy1

0xdd1b,	// (0x0001d03c) data_form_wide_pane_t1

0xd0ef,	// (0x0001c410) list_form_graphic_pane_cp_ParamLimits

0xd0ef,	// (0x0001c410) list_form_graphic_pane_cp

0x625e,	// (0x0001557f) slider_form_pane_g1

0x6267,	// (0x00015588) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001eca6) slider_form_pane_g

0xd102,	// (0x0001c423) list_form_graphic_pane_ParamLimits

0xd102,	// (0x0001c423) list_form_graphic_pane

0x3726,	// (0x00012a47) list_form_graphic_pane_g1

0x372e,	// (0x00012a4f) list_form_graphic_pane_t1_ParamLimits

0x372e,	// (0x00012a4f) list_form_graphic_pane_t1

0x27c0,	// (0x00011ae1) list_highlight_pane_cp5_ParamLimits

0x27c0,	// (0x00011ae1) list_highlight_pane_cp5

0x3743,	// (0x00012a64) find_pane_g1

0x374c,	// (0x00012a6d) input_find_pane

0x3755,	// (0x00012a76) input_find_pane_g1_ParamLimits

0x3755,	// (0x00012a76) input_find_pane_g1

0x3761,	// (0x00012a82) input_find_pane_t1_ParamLimits

0x3761,	// (0x00012a82) input_find_pane_t1

0x3776,	// (0x00012a97) input_find_pane_t2_ParamLimits

0x3776,	// (0x00012a97) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001e9bd) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001e9bd) input_find_pane_t

0x378b,	// (0x00012aac) input_focus_pane_cp5_ParamLimits

0x378b,	// (0x00012aac) input_focus_pane_cp5

0x37a5,	// (0x00012ac6) bg_popup_window_pane_cp2_ParamLimits

0x37a5,	// (0x00012ac6) bg_popup_window_pane_cp2

0x37b2,	// (0x00012ad3) listscroll_menu_pane_ParamLimits

0x37b2,	// (0x00012ad3) listscroll_menu_pane

0xd120,	// (0x0001c441) popup_submenu_window_ParamLimits

0xd120,	// (0x0001c441) popup_submenu_window

0x37e6,	// (0x00012b07) find_popup_pane_g1

0x37ee,	// (0x00012b0f) input_popup_find_pane_cp

0x378b,	// (0x00012aac) input_focus_pane_cp4_ParamLimits

0x378b,	// (0x00012aac) input_focus_pane_cp4

0x3806,	// (0x00012b27) input_popup_find_pane_t1_ParamLimits

0x3806,	// (0x00012b27) input_popup_find_pane_t1

0x26e0,	// (0x00011a01) bg_popup_sub_pane_cp

0x3834,	// (0x00012b55) listscroll_popup_sub_pane

0x383c,	// (0x00012b5d) list_submenu_pane_ParamLimits

0x383c,	// (0x00012b5d) list_submenu_pane

0x384d,	// (0x00012b6e) scroll_pane_cp4

0x3855,	// (0x00012b76) list_single_popup_submenu_pane_ParamLimits

0x3855,	// (0x00012b76) list_single_popup_submenu_pane

0x3869,	// (0x00012b8a) list_single_popup_submenu_pane_g1

0x3871,	// (0x00012b92) list_single_popup_submenu_pane_t1_ParamLimits

0x3871,	// (0x00012b92) list_single_popup_submenu_pane_t1

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp1_ParamLimits

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp1

0xd156,	// (0x0001c477) tabs_2_active_pane_g1

0xd15e,	// (0x0001c47f) tabs_2_active_pane_t1

0x2a55,	// (0x00011d76) bg_passive_tab_pane_cp1_ParamLimits

0x2a55,	// (0x00011d76) bg_passive_tab_pane_cp1

0xd156,	// (0x0001c477) tabs_2_passive_pane_g1

0xd15e,	// (0x0001c47f) tabs_2_passive_pane_t1

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp4

0xd170,	// (0x0001c491) tabs_2_long_active_pane_t1

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp4

0x12a9,	// (0x000105ca) list_single_midp_graphic_pane_g4_ParamLimits

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp5

0xd183,	// (0x0001c4a4) tabs_3_long_active_pane_t1

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp5

0x12a9,	// (0x000105ca) list_single_midp_graphic_pane_g4

0x27c0,	// (0x00011ae1) bg_popup_window_pane_cp13_ParamLimits

0x27c0,	// (0x00011ae1) bg_popup_window_pane_cp13

0x38e8,	// (0x00012c09) listscroll_popup_fast_pane_ParamLimits

0x38e8,	// (0x00012c09) listscroll_popup_fast_pane

0x38f4,	// (0x00012c15) grid_popup_fast_pane_ParamLimits

0x38f4,	// (0x00012c15) grid_popup_fast_pane

0x3906,	// (0x00012c27) scroll_pane_cp9_ParamLimits

0x3906,	// (0x00012c27) scroll_pane_cp9

0x815e,	// (0x0001747f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x815e,	// (0x0001747f) list_single_graphic_hl_pane_t1_cp2

0x392a,	// (0x00012c4b) input_focus_pane_cp20_ParamLimits

0x392a,	// (0x00012c4b) input_focus_pane_cp20

0x3938,	// (0x00012c59) query_popup_data_pane_t1_ParamLimits

0x3938,	// (0x00012c59) query_popup_data_pane_t1

0x394b,	// (0x00012c6c) query_popup_data_pane_t2_ParamLimits

0x394b,	// (0x00012c6c) query_popup_data_pane_t2

0x3991,	// (0x00012cb2) query_popup_data_pane_t3_ParamLimits

0x3991,	// (0x00012cb2) query_popup_data_pane_t3

0x39d2,	// (0x00012cf3) query_popup_data_pane_t4_ParamLimits

0x39d2,	// (0x00012cf3) query_popup_data_pane_t4

0x3a0e,	// (0x00012d2f) query_popup_data_pane_t5_ParamLimits

0x3a0e,	// (0x00012d2f) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001e9c2) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001e9c2) query_popup_data_pane_t

0x36ac,	// (0x000129cd) bg_set_opt_pane_g1

0x36b4,	// (0x000129d5) bg_set_opt_pane_g2

0x36bc,	// (0x000129dd) bg_set_opt_pane_g3

0x36c4,	// (0x000129e5) bg_set_opt_pane_g4

0x36cc,	// (0x000129ed) bg_set_opt_pane_g5

0x36d4,	// (0x000129f5) bg_set_opt_pane_g6

0x36dc,	// (0x000129fd) bg_set_opt_pane_g7

0x36e4,	// (0x00012a05) bg_set_opt_pane_g8

0x36ec,	// (0x00012a0d) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001e9cd) bg_set_opt_pane_g

0x08d3,	// (0x0000fbf4) control_top_pane_stacon_ParamLimits

0x08d3,	// (0x0000fbf4) control_top_pane_stacon

0x0926,	// (0x0000fc47) signal_pane_stacon_ParamLimits

0x0926,	// (0x0000fc47) signal_pane_stacon

0x405f,	// (0x00013380) stacon_top_pane_g1_ParamLimits

0x405f,	// (0x00013380) stacon_top_pane_g1

0x094b,	// (0x0000fc6c) title_pane_stacon_ParamLimits

0x094b,	// (0x0000fc6c) title_pane_stacon

0x0975,	// (0x0000fc96) uni_indicator_pane_stacon_ParamLimits

0x0975,	// (0x0000fc96) uni_indicator_pane_stacon

0x098a,	// (0x0000fcab) battery_pane_stacon_ParamLimits

0x098a,	// (0x0000fcab) battery_pane_stacon

0x09ce,	// (0x0000fcef) control_bottom_pane_stacon_ParamLimits

0x09ce,	// (0x0000fcef) control_bottom_pane_stacon

0x09f1,	// (0x0000fd12) navi_pane_stacon_ParamLimits

0x09f1,	// (0x0000fd12) navi_pane_stacon

0x4081,	// (0x000133a2) stacon_bottom_pane_g1_ParamLimits

0x4081,	// (0x000133a2) stacon_bottom_pane_g1

0x063d,	// (0x0000f95e) aid_levels_signal_lsc_ParamLimits

0x063d,	// (0x0000f95e) aid_levels_signal_lsc

0x0654,	// (0x0000f975) signal_pane_stacon_g1_ParamLimits

0x0654,	// (0x0000f975) signal_pane_stacon_g1

0x0668,	// (0x0000f989) signal_pane_stacon_g2_ParamLimits

0x0668,	// (0x0000f989) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001e9e0) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001e9e0) signal_pane_stacon_g

0x069d,	// (0x0000f9be) title_pane_stacon_t1_ParamLimits

0x069d,	// (0x0000f9be) title_pane_stacon_t1

0x3a52,	// (0x00012d73) uni_indicator_pane_stacon_g1

0x3a5c,	// (0x00012d7d) uni_indicator_pane_stacon_g2

0x3a66,	// (0x00012d87) uni_indicator_pane_stacon_g3

0x3a70,	// (0x00012d91) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001e9ec) uni_indicator_pane_stacon_g

0x06c2,	// (0x0000f9e3) control_top_pane_stacon_g1

0x06ca,	// (0x0000f9eb) control_top_pane_stacon_t1_ParamLimits

0x06ca,	// (0x0000f9eb) control_top_pane_stacon_t1

0x0701,	// (0x0000fa22) aid_levels_battery_lsc_ParamLimits

0x0701,	// (0x0000fa22) aid_levels_battery_lsc

0x0719,	// (0x0000fa3a) battery_pane_stacon_g1_ParamLimits

0x0719,	// (0x0000fa3a) battery_pane_stacon_g1

0x072c,	// (0x0000fa4d) battery_pane_stacon_g2_ParamLimits

0x072c,	// (0x0000fa4d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001e9f5) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001e9f5) battery_pane_stacon_g

0x076a,	// (0x0000fa8b) navi_icon_pane_stacon

0x077e,	// (0x0000fa9f) navi_navi_pane_stacon

0x076a,	// (0x0000fa8b) navi_text_pane_stacon

0x06c2,	// (0x0000f9e3) control_bottom_pane_stacon_g1

0x0792,	// (0x0000fab3) control_bottom_pane_stacon_t1_ParamLimits

0x0792,	// (0x0000fab3) control_bottom_pane_stacon_t1

0xd195,	// (0x0001c4b6) grid_app_pane_ParamLimits

0xd195,	// (0x0001c4b6) grid_app_pane

0xd1cb,	// (0x0001c4ec) scroll_pane_cp15_ParamLimits

0xd1cb,	// (0x0001c4ec) scroll_pane_cp15

0xd1e0,	// (0x0001c501) cell_app_pane_ParamLimits

0xd1e0,	// (0x0001c501) cell_app_pane

0xd227,	// (0x0001c548) cell_app_pane_g1_ParamLimits

0xd227,	// (0x0001c548) cell_app_pane_g1

0x3b13,	// (0x00012e34) cell_app_pane_g2_ParamLimits

0x3b13,	// (0x00012e34) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001e9fa) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001e9fa) cell_app_pane_g

0xd24b,	// (0x0001c56c) cell_app_pane_t1_ParamLimits

0xd24b,	// (0x0001c56c) cell_app_pane_t1

0x3b36,	// (0x00012e57) grid_highlight_pane_ParamLimits

0x3b36,	// (0x00012e57) grid_highlight_pane

0x36ac,	// (0x000129cd) cell_highlight_pane_g1

0x36b4,	// (0x000129d5) cell_highlight_pane_g2

0x36bc,	// (0x000129dd) cell_highlight_pane_g3

0x36c4,	// (0x000129e5) cell_highlight_pane_g4

0x36cc,	// (0x000129ed) cell_highlight_pane_g5

0x36d4,	// (0x000129f5) cell_highlight_pane_g6

0x36dc,	// (0x000129fd) cell_highlight_pane_g7

0x36e4,	// (0x00012a05) cell_highlight_pane_g8

0x36ec,	// (0x00012a0d) cell_highlight_pane_g9

0x26d6,	// (0x000119f7) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001e9a8) cell_highlight_pane_g

0x3b47,	// (0x00012e68) bg_scroll_pane

0x07dc,	// (0x0000fafd) scroll_handle_pane

0x3b8e,	// (0x00012eaf) scroll_bg_pane_g1

0x3ba3,	// (0x00012ec4) scroll_bg_pane_g2

0x3bbb,	// (0x00012edc) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001e9ff) scroll_bg_pane_g

0x3bd0,	// (0x00012ef1) scroll_handle_focus_pane_ParamLimits

0x3bd0,	// (0x00012ef1) scroll_handle_focus_pane

0x3b8e,	// (0x00012eaf) scroll_handle_pane_g1

0x3bdd,	// (0x00012efe) scroll_handle_pane_g2

0x3bbb,	// (0x00012edc) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001ea06) scroll_handle_pane_g

0x378b,	// (0x00012aac) bg_popup_sub_pane_cp21_ParamLimits

0x378b,	// (0x00012aac) bg_popup_sub_pane_cp21

0x3bf1,	// (0x00012f12) popup_fep_japan_predictive_window_t1_ParamLimits

0x3bf1,	// (0x00012f12) popup_fep_japan_predictive_window_t1

0x3c0b,	// (0x00012f2c) popup_fep_japan_predictive_window_t2_ParamLimits

0x3c0b,	// (0x00012f2c) popup_fep_japan_predictive_window_t2

0x3c3e,	// (0x00012f5f) popup_fep_japan_predictive_window_t3_ParamLimits

0x3c3e,	// (0x00012f5f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ea0d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ea0d) popup_fep_japan_predictive_window_t

0x26e0,	// (0x00011a01) bg_popup_sub_pane_cp23

0x3c75,	// (0x00012f96) listscroll_japin_cand_pane

0x3c7d,	// (0x00012f9e) popup_fep_japan_candidate_window_t1

0x3c8b,	// (0x00012fac) candidate_pane_ParamLimits

0x3c8b,	// (0x00012fac) candidate_pane

0x3c9d,	// (0x00012fbe) scroll_pane_cp30

0x3ca5,	// (0x00012fc6) list_single_popup_jap_candidate_pane_ParamLimits

0x3ca5,	// (0x00012fc6) list_single_popup_jap_candidate_pane

0x26e0,	// (0x00011a01) list_highlight_pane_cp30

0x3cb9,	// (0x00012fda) list_single_popup_jap_candidate_pane_t1

0x3cc8,	// (0x00012fe9) level_1_signal

0x3cd5,	// (0x00012ff6) level_2_signal

0x3ce2,	// (0x00013003) level_3_signal

0x3cef,	// (0x00013010) level_4_signal

0x3cfc,	// (0x0001301d) level_5_signal

0x3d09,	// (0x0001302a) level_6_signal

0x3d16,	// (0x00013037) level_7_signal

0x3cc8,	// (0x00012fe9) level_1_battery

0x3cd5,	// (0x00012ff6) level_2_battery

0x3ce2,	// (0x00013003) level_3_battery

0x3cef,	// (0x00013010) level_4_battery

0x3cfc,	// (0x0001301d) level_5_battery

0x3d09,	// (0x0001302a) level_6_battery

0x3d16,	// (0x00013037) level_7_battery

0x3d3b,	// (0x0001305c) list_menu_pane_ParamLimits

0x3d3b,	// (0x0001305c) list_menu_pane

0x3d51,	// (0x00013072) scroll_pane_cp25_ParamLimits

0x3d51,	// (0x00013072) scroll_pane_cp25

0x3d6a,	// (0x0001308b) list_double2_graphic_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double2_graphic_pane_cp2

0x3d6a,	// (0x0001308b) list_double2_large_graphic_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double2_large_graphic_pane_cp2

0x3d6a,	// (0x0001308b) list_double2_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double2_pane_cp2

0x3d6a,	// (0x0001308b) list_double_graphic_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double_graphic_pane_cp2

0x3d6a,	// (0x0001308b) list_double_large_graphic_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double_large_graphic_pane_cp2

0x3d6a,	// (0x0001308b) list_double_number_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double_number_pane_cp2

0x3d6a,	// (0x0001308b) list_double_pane_cp2_ParamLimits

0x3d6a,	// (0x0001308b) list_double_pane_cp2

0xd273,	// (0x0001c594) list_single_2graphic_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_2graphic_pane_cp2

0xd273,	// (0x0001c594) list_single_graphic_heading_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_graphic_heading_pane_cp2

0xd273,	// (0x0001c594) list_single_graphic_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_graphic_pane_cp2

0xd273,	// (0x0001c594) list_single_heading_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_heading_pane_cp2

0x3da4,	// (0x000130c5) list_single_large_graphic_pane_cp2_ParamLimits

0x3da4,	// (0x000130c5) list_single_large_graphic_pane_cp2

0xd273,	// (0x0001c594) list_single_number_heading_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_number_heading_pane_cp2

0xd273,	// (0x0001c594) list_single_number_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_number_pane_cp2

0xd273,	// (0x0001c594) list_single_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_pane_cp2

0x3e1f,	// (0x00013140) bg_popup_sub_pane_cp22

0x088b,	// (0x0000fbac) popup_side_volume_key_window_g1

0x08af,	// (0x0000fbd0) popup_side_volume_key_window_t1

0x08cb,	// (0x0000fbec) volume_small_pane_cp1

0x2a55,	// (0x00011d76) bg_popup_sub_pane_cp24_ParamLimits

0x2a55,	// (0x00011d76) bg_popup_sub_pane_cp24

0x3e35,	// (0x00013156) fep_china_uni_candidate_pane_ParamLimits

0x3e35,	// (0x00013156) fep_china_uni_candidate_pane

0x3e49,	// (0x0001316a) fep_china_uni_entry_pane

0x3e59,	// (0x0001317a) popup_fep_china_uni_window_g1

0x3e75,	// (0x00013196) fep_china_uni_entry_pane_g1

0x3e7d,	// (0x0001319e) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ea3e) fep_china_uni_entry_pane_g

0x3e85,	// (0x000131a6) fep_entry_item_pane

0x3e8f,	// (0x000131b0) fep_candidate_item_pane

0x3e97,	// (0x000131b8) fep_china_uni_candidate_pane_g1

0x3e9f,	// (0x000131c0) fep_china_uni_candidate_pane_g2

0x3ea7,	// (0x000131c8) fep_china_uni_candidate_pane_g3

0x3eaf,	// (0x000131d0) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001ea43) fep_china_uni_candidate_pane_g

0x26d6,	// (0x000119f7) fep_entry_item_pane_g1

0x3eb7,	// (0x000131d8) fep_entry_item_pane_t1_ParamLimits

0x3eb7,	// (0x000131d8) fep_entry_item_pane_t1

0x3ecd,	// (0x000131ee) fep_candidate_item_pane_t1_ParamLimits

0x3ecd,	// (0x000131ee) fep_candidate_item_pane_t1

0x3ee2,	// (0x00013203) fep_candidate_item_pane_t2_ParamLimits

0x3ee2,	// (0x00013203) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001ea4c) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001ea4c) fep_candidate_item_pane_t

0x27c0,	// (0x00011ae1) list_highlight_pane_cp31_ParamLimits

0x27c0,	// (0x00011ae1) list_highlight_pane_cp31

0x3ef4,	// (0x00013215) level_1_signal_lsc

0x3efd,	// (0x0001321e) level_2_signal_lsc

0x3f06,	// (0x00013227) level_3_signal_lsc

0x3f0f,	// (0x00013230) level_4_signal_lsc

0x3f18,	// (0x00013239) level_5_signal_lsc

0x3f21,	// (0x00013242) level_6_signal_lsc

0x3f2a,	// (0x0001324b) level_7_signal_lsc

0x3f2a,	// (0x0001324b) level_1_battery_lsc

0x3f33,	// (0x00013254) level_2_battery_lsc

0x3f3c,	// (0x0001325d) level_3_battery_lsc

0x3f45,	// (0x00013266) level_4_battery_lsc

0x3f4e,	// (0x0001326f) level_5_battery_lsc

0x3f57,	// (0x00013278) level_6_battery_lsc

0x3ef4,	// (0x00013215) level_7_battery_lsc

0x3f60,	// (0x00013281) scroll_handle_focus_pane_g1

0x3f69,	// (0x0001328a) scroll_handle_focus_pane_g2

0x3f72,	// (0x00013293) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001ea51) scroll_handle_focus_pane_g

0x3f7b,	// (0x0001329c) list_single_2graphic_pane_g1_ParamLimits

0x3f7b,	// (0x0001329c) list_single_2graphic_pane_g1

0xcc4f,	// (0x0001bf70) list_single_2graphic_pane_g2_ParamLimits

0xcc4f,	// (0x0001bf70) list_single_2graphic_pane_g2

0x2ff3,	// (0x00012314) list_single_2graphic_pane_g3_ParamLimits

0x2ff3,	// (0x00012314) list_single_2graphic_pane_g3

0x3f87,	// (0x000132a8) list_single_2graphic_pane_g4_ParamLimits

0x3f87,	// (0x000132a8) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001ea58) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001ea58) list_single_2graphic_pane_g

0x3f98,	// (0x000132b9) list_single_2graphic_pane_t1_ParamLimits

0x3f98,	// (0x000132b9) list_single_2graphic_pane_t1

0xd300,	// (0x0001c621) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd300,	// (0x0001c621) list_double2_graphic_large_graphic_pane_g1

0xce06,	// (0x0001c127) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xce06,	// (0x0001c127) list_double2_graphic_large_graphic_pane_g2

0xcd58,	// (0x0001c079) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcd58,	// (0x0001c079) list_double2_graphic_large_graphic_pane_g3

0xd312,	// (0x0001c633) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd312,	// (0x0001c633) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001ea61) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001ea61) list_double2_graphic_large_graphic_pane_g

0xd31e,	// (0x0001c63f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd31e,	// (0x0001c63f) list_double2_graphic_large_graphic_pane_t1

0xd334,	// (0x0001c655) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd334,	// (0x0001c655) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001ea6a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001ea6a) list_double2_graphic_large_graphic_pane_t

0x4148,	// (0x00013469) popup_fast_swap_window_ParamLimits

0x4148,	// (0x00013469) popup_fast_swap_window

0x4164,	// (0x00013485) popup_side_volume_key_window

0x417e,	// (0x0001349f) stacon_top_pane

0x4188,	// (0x000134a9) status_pane_ParamLimits

0x4188,	// (0x000134a9) status_pane

0xd3ae,	// (0x0001c6cf) status_small_pane

0x26e0,	// (0x00011a01) control_pane

0x26e0,	// (0x00011a01) stacon_bottom_pane

0x349c,	// (0x000127bd) scroll_pane_cp121

0x3493,	// (0x000127b4) set_content_pane

0xd346,	// (0x0001c667) bg_active_tab_pane_g1_cp1

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp1

0xd34f,	// (0x0001c670) bg_active_tab_pane_g3_cp1

0xd346,	// (0x0001c667) bg_passive_tab_pane_g1_cp1

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp1

0xd34f,	// (0x0001c670) bg_passive_tab_pane_g3_cp1

0xd358,	// (0x0001c679) bg_active_tab_pane_g1_cp2

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp2

0xd361,	// (0x0001c682) bg_active_tab_pane_g3_cp2

0xd358,	// (0x0001c679) bg_passive_tab_pane_g1_cp2

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp2

0xd361,	// (0x0001c682) bg_passive_tab_pane_g3_cp2

0x4037,	// (0x00013358) bg_active_tab_pane_g1_cp3

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp3

0x4040,	// (0x00013361) bg_active_tab_pane_g3_cp3

0x4037,	// (0x00013358) bg_passive_tab_pane_g1_cp3

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp3

0x4040,	// (0x00013361) bg_passive_tab_pane_g3_cp3

0xd36a,	// (0x0001c68b) bg_active_tab_pane_g1_cp4

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp4

0xd375,	// (0x0001c696) bg_active_tab_pane_g3_cp4

0xd36a,	// (0x0001c68b) bg_passive_tab_pane_g1_cp4

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp4

0xd375,	// (0x0001c696) bg_passive_tab_pane_g3_cp4

0x409d,	// (0x000133be) bg_active_tab_pane_g1_cp5

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp5

0x40a6,	// (0x000133c7) bg_active_tab_pane_g3_cp5

0x409d,	// (0x000133be) bg_passive_tab_pane_g1_cp5

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp5

0x40a6,	// (0x000133c7) bg_passive_tab_pane_g3_cp5

0x6989,	// (0x00015caa) list_set_graphic_pane_ParamLimits

0x6989,	// (0x00015caa) list_set_graphic_pane

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp4

0xd380,	// (0x0001c6a1) list_set_graphic_pane_g1_ParamLimits

0xd380,	// (0x0001c6a1) list_set_graphic_pane_g1

0xd38c,	// (0x0001c6ad) list_set_graphic_pane_g2_ParamLimits

0xd38c,	// (0x0001c6ad) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001ea6f) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001ea6f) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0001edf9) volume_small_pane_cp_g

0x40fb,	// (0x0001341c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x40fb,	// (0x0001341c) list_double2_large_graphic_pane_g1_cp2

0x4107,	// (0x00013428) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4107,	// (0x00013428) list_double2_large_graphic_pane_g2_cp2

0x4118,	// (0x00013439) list_double2_large_graphic_pane_g3_cp2

0x4120,	// (0x00013441) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4120,	// (0x00013441) list_double2_large_graphic_pane_t1_cp2

0x4136,	// (0x00013457) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4136,	// (0x00013457) list_double2_large_graphic_pane_t2_cp2

0x5e0a,	// (0x0001512b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e0a,	// (0x0001512b) list_double_large_graphic_pane_g1_cp2

0x5e1b,	// (0x0001513c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e1b,	// (0x0001513c) list_double_large_graphic_pane_g2_cp2

0x42af,	// (0x000135d0) list_double_large_graphic_pane_g3_cp2

0x5e2c,	// (0x0001514d) list_double_large_graphic_pane_g4_cp

0x5e34,	// (0x00015155) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e34,	// (0x00015155) list_double_large_graphic_pane_t1_cp2

0x5e4b,	// (0x0001516c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e4b,	// (0x0001516c) list_double_large_graphic_pane_t2_cp2

0x41a1,	// (0x000134c2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x41a1,	// (0x000134c2) list_double2_graphic_pane_g1_cp2

0x41af,	// (0x000134d0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x41af,	// (0x000134d0) list_double2_graphic_pane_g2_cp2

0x41c0,	// (0x000134e1) list_double2_graphic_pane_g3_cp2

0x41ca,	// (0x000134eb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x41ca,	// (0x000134eb) list_double2_graphic_pane_t1_cp2

0x41e0,	// (0x00013501) list_double2_graphic_pane_t2_cp2_ParamLimits

0x41e0,	// (0x00013501) list_double2_graphic_pane_t2_cp2

0x41f2,	// (0x00013513) list_single_number_heading_pane_g1_cp2_ParamLimits

0x41f2,	// (0x00013513) list_single_number_heading_pane_g1_cp2

0x41fe,	// (0x0001351f) list_single_number_heading_pane_g2_cp2

0x4206,	// (0x00013527) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4206,	// (0x00013527) list_single_number_heading_pane_t1_cp2

0x421c,	// (0x0001353d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x421c,	// (0x0001353d) list_single_number_heading_pane_t2_cp2

0x422e,	// (0x0001354f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x422e,	// (0x0001354f) list_single_number_heading_pane_t3_cp2

0x41f2,	// (0x00013513) list_single_heading_pane_g1_cp2_ParamLimits

0x41f2,	// (0x00013513) list_single_heading_pane_g1_cp2

0x41fe,	// (0x0001351f) list_single_heading_pane_g2_cp2

0x4206,	// (0x00013527) list_single_heading_pane_t1_cp2_ParamLimits

0x4206,	// (0x00013527) list_single_heading_pane_t1_cp2

0x5c14,	// (0x00014f35) list_single_heading_pane_t2_cp2_ParamLimits

0x5c14,	// (0x00014f35) list_single_heading_pane_t2_cp2

0x5b5c,	// (0x00014e7d) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b5c,	// (0x00014e7d) list_double_graphic_pane_g1_cp2

0x5b68,	// (0x00014e89) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b68,	// (0x00014e89) list_double_graphic_pane_g2_cp2

0x5b77,	// (0x00014e98) list_double_graphic_pane_g3_cp2

0x5b7f,	// (0x00014ea0) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b7f,	// (0x00014ea0) list_double_graphic_pane_t1_cp2

0x5b95,	// (0x00014eb6) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b95,	// (0x00014eb6) list_double_graphic_pane_t2_cp2

0x42a3,	// (0x000135c4) list_double_number_pane_g1_cp2_ParamLimits

0x42a3,	// (0x000135c4) list_double_number_pane_g1_cp2

0x42af,	// (0x000135d0) list_double_number_pane_g2_cp2

0x5b20,	// (0x00014e41) list_double_number_pane_t1_cp2_ParamLimits

0x5b20,	// (0x00014e41) list_double_number_pane_t1_cp2

0x5b34,	// (0x00014e55) list_double_number_pane_t2_cp2_ParamLimits

0x5b34,	// (0x00014e55) list_double_number_pane_t2_cp2

0x5b4a,	// (0x00014e6b) list_double_number_pane_t3_cp2_ParamLimits

0x5b4a,	// (0x00014e6b) list_double_number_pane_t3_cp2

0x5a09,	// (0x00014d2a) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a09,	// (0x00014d2a) list_single_graphic_pane_g1_cp2

0x2fe7,	// (0x00012308) list_single_graphic_pane_g2_cp2_ParamLimits

0x2fe7,	// (0x00012308) list_single_graphic_pane_g2_cp2

0x4307,	// (0x00013628) list_single_graphic_pane_g3_cp2

0x59df,	// (0x00014d00) list_single_graphic_pane_t1_cp2_ParamLimits

0x59df,	// (0x00014d00) list_single_graphic_pane_t1_cp2

0x2fe7,	// (0x00012308) list_single_number_pane_g1_cp2_ParamLimits

0x2fe7,	// (0x00012308) list_single_number_pane_g1_cp2

0x4307,	// (0x00013628) list_single_number_pane_g2_cp2

0x59df,	// (0x00014d00) list_single_number_pane_t1_cp2_ParamLimits

0x59df,	// (0x00014d00) list_single_number_pane_t1_cp2

0x59f5,	// (0x00014d16) list_single_number_pane_t2_cp2_ParamLimits

0x59f5,	// (0x00014d16) list_single_number_pane_t2_cp2

0x4107,	// (0x00013428) list_double2_pane_g1_cp2_ParamLimits

0x4107,	// (0x00013428) list_double2_pane_g1_cp2

0x4118,	// (0x00013439) list_double2_pane_g2_cp2

0x427b,	// (0x0001359c) list_double2_pane_t1_cp2_ParamLimits

0x427b,	// (0x0001359c) list_double2_pane_t1_cp2

0x4291,	// (0x000135b2) list_double2_pane_t2_cp2_ParamLimits

0x4291,	// (0x000135b2) list_double2_pane_t2_cp2

0x42a3,	// (0x000135c4) list_double_pane_g1_cp2_ParamLimits

0x42a3,	// (0x000135c4) list_double_pane_g1_cp2

0x42af,	// (0x000135d0) list_double_pane_g2_cp2

0x42b7,	// (0x000135d8) list_double_pane_t1_cp2_ParamLimits

0x42b7,	// (0x000135d8) list_double_pane_t1_cp2

0x42cd,	// (0x000135ee) list_double_pane_t2_cp2_ParamLimits

0x42cd,	// (0x000135ee) list_double_pane_t2_cp2

0x42f7,	// (0x00013618) list_single_pane_cp2_g3

0x2fe7,	// (0x00012308) list_single_pane_g1_cp2_ParamLimits

0x2fe7,	// (0x00012308) list_single_pane_g1_cp2

0x4307,	// (0x00013628) list_single_pane_g2_cp2

0x430f,	// (0x00013630) list_single_pane_t1_cp2_ParamLimits

0x430f,	// (0x00013630) list_single_pane_t1_cp2

0x4327,	// (0x00013648) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4327,	// (0x00013648) list_single_large_graphic_pane_g1_cp2

0x4333,	// (0x00013654) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4333,	// (0x00013654) list_single_large_graphic_pane_g2_cp2

0x433f,	// (0x00013660) list_single_large_graphic_pane_g3_cp2

0x4347,	// (0x00013668) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4347,	// (0x00013668) list_single_large_graphic_pane_g4_cp1

0x4361,	// (0x00013682) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4361,	// (0x00013682) list_single_large_graphic_pane_t1_cp2

0x59ab,	// (0x00014ccc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59ab,	// (0x00014ccc) list_single_graphic_heading_pane_g1_cp2

0x5978,	// (0x00014c99) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5978,	// (0x00014c99) list_single_graphic_heading_pane_g4_cp2

0x4307,	// (0x00013628) list_single_graphic_heading_pane_g5_cp2

0x59b7,	// (0x00014cd8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59b7,	// (0x00014cd8) list_single_graphic_heading_pane_t1_cp2

0x59cd,	// (0x00014cee) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x59cd,	// (0x00014cee) list_single_graphic_heading_pane_t2_cp2

0x596c,	// (0x00014c8d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x596c,	// (0x00014c8d) list_single_2graphic_pane_g1_cp2

0x5978,	// (0x00014c99) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5978,	// (0x00014c99) list_single_2graphic_pane_g2_cp2

0x4307,	// (0x00013628) list_single_2graphic_pane_g3_cp2

0x5989,	// (0x00014caa) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5989,	// (0x00014caa) list_single_2graphic_pane_g4_cp2

0x5995,	// (0x00014cb6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5995,	// (0x00014cb6) list_single_2graphic_pane_t1_cp2

0x26d6,	// (0x000119f7) list_highlight_pane_g10_cp1

0x5544,	// (0x00014865) list_highlight_pane_g1_cp1

0x554c,	// (0x0001486d) list_highlight_pane_g2_cp1

0x5554,	// (0x00014875) list_highlight_pane_g3_cp1

0x555c,	// (0x0001487d) list_highlight_pane_g4_cp1

0x5564,	// (0x00014885) list_highlight_pane_g5_cp1

0x556c,	// (0x0001488d) list_highlight_pane_g6_cp1

0x5574,	// (0x00014895) list_highlight_pane_g7_cp1

0x557c,	// (0x0001489d) list_highlight_pane_g8_cp1

0x5584,	// (0x000148a5) list_highlight_pane_g9_cp1

0xda38,	// (0x0001cd59) form_field_slider_pane_t3

0xda48,	// (0x0001cd69) form_field_slider_pane_t4

0x5478,	// (0x00014799) slider_form_pane_ParamLimits

0x5478,	// (0x00014799) slider_form_pane

0x26e0,	// (0x00011a01) control_abbreviations

0x26e0,	// (0x00011a01) control_conventions

0x26e0,	// (0x00011a01) control_definitions

0x26e0,	// (0x00011a01) format_table_attribute

0x5c5e,	// (0x00014f7f) bg_popup_preview_window_pane_g9

0x26e0,	// (0x00011a01) format_table_data2

0x26e0,	// (0x00011a01) format_table_data3

0x26e0,	// (0x00011a01) format_table_data_example

0x0008,

0x26e0,	// (0x00011a01) intro_purpose

0xf8e5,	// (0x0001ec06) bg_popup_preview_window_pane_g

0x26e0,	// (0x00011a01) texts_category

0x26e0,	// (0x00011a01) texts_graphics

0x4377,	// (0x00013698) text_digital

0x4386,	// (0x000136a7) text_primary

0x4395,	// (0x000136b6) text_primary_small

0x43a4,	// (0x000136c5) text_secondary

0x43b3,	// (0x000136d4) text_title

0x6484,	// (0x000157a5) bg_passive_tab_pane_g1_cp3_srt

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp3_srt

0x648d,	// (0x000157ae) bg_passive_tab_pane_g3_cp3_srt

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp3_srt_ParamLimits

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp3_srt

0x6496,	// (0x000157b7) tabs_4_active_pane_srt_g1

0xddd7,	// (0x0001d0f8) tabs_4_active_pane_srt_t1_ParamLimits

0xddd7,	// (0x0001d0f8) tabs_4_active_pane_srt_t1

0x6484,	// (0x000157a5) bg_active_tab_pane_g1_cp3_copy1

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp3_copy1

0x648d,	// (0x000157ae) bg_active_tab_pane_g3_cp3_copy1

0x27c0,	// (0x00011ae1) tabs_2_long_active_pane_srt_ParamLimits

0x27c0,	// (0x00011ae1) tabs_2_long_active_pane_srt

0x27c0,	// (0x00011ae1) tabs_2_long_passive_pane_srt_ParamLimits

0x27c0,	// (0x00011ae1) tabs_2_long_passive_pane_srt

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp4_srt

0x609f,	// (0x000153c0) bg_passive_tab_pane_g1_cp4_srt

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp4_srt

0x60a8,	// (0x000153c9) bg_passive_tab_pane_g3_cp4_srt

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp4_srt_ParamLimits

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp4_srt

0xdbb2,	// (0x0001ced3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbb2,	// (0x0001ced3) tabs_2_long_active_pane_srt_t1

0x609f,	// (0x000153c0) bg_active_tab_pane_g1_cp4_srt

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp4_srt

0x60a8,	// (0x000153c9) bg_active_tab_pane_g3_cp4_srt

0x2a55,	// (0x00011d76) tabs_3_long_active_pane_srt_ParamLimits

0x2a55,	// (0x00011d76) tabs_3_long_active_pane_srt

0x2a55,	// (0x00011d76) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2a55,	// (0x00011d76) tabs_3_long_passive_pane_cp_srt

0x2a55,	// (0x00011d76) tabs_3_long_passive_pane_srt_ParamLimits

0x2a55,	// (0x00011d76) tabs_3_long_passive_pane_srt

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp5_srt

0x409d,	// (0x000133be) bg_passive_tab_pane_g1_cp5_srt

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp5_srt

0x40a6,	// (0x000133c7) bg_passive_tab_pane_g3_cp5_srt

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp5_srt_ParamLimits

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp5_srt

0xdb9c,	// (0x0001cebd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb9c,	// (0x0001cebd) tabs_3_long_active_pane_srt_t1

0x409d,	// (0x000133be) bg_active_tab_pane_g1_cp5_srt

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp5_srt

0x40a6,	// (0x000133c7) bg_active_tab_pane_g3_cp5_srt

0x607f,	// (0x000153a0) navi_text_pane_srt_t1

0x6077,	// (0x00015398) navi_icon_pane_srt_g1

0x4578,	// (0x00013899) midp_editing_number_pane_srt

0x43c2,	// (0x000136e3) midp_ticker_pane_srt

0x4580,	// (0x000138a1) midp_ticker_pane_srt_g1

0x4588,	// (0x000138a9) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001ea8e) midp_ticker_pane_srt_g

0x4590,	// (0x000138b1) midp_ticker_pane_srt_t1

0x6068,	// (0x00015389) midp_editing_number_pane_t1_copy1

0x4704,	// (0x00013a25) listscroll_midp_pane

0x4704,	// (0x00013a25) midp_form_pane

0x4430,	// (0x00013751) midp_info_popup_window_ParamLimits

0x4430,	// (0x00013751) midp_info_popup_window

0x378b,	// (0x00012aac) bg_popup_sub_pane_cp50_ParamLimits

0x378b,	// (0x00012aac) bg_popup_sub_pane_cp50

0x5179,	// (0x0001449a) listscroll_midp_info_pane_ParamLimits

0x5179,	// (0x0001449a) listscroll_midp_info_pane

0x5161,	// (0x00014482) listscroll_form_midp_pane_ParamLimits

0x5161,	// (0x00014482) listscroll_form_midp_pane

0x516d,	// (0x0001448e) scroll_bar_cp050

0xda2c,	// (0x0001cd4d) list_midp_pane

0x719f,	// (0x000164c0) signal_pane_g2_cp

0x507b,	// (0x0001439c) listscroll_midp_info_pane_t1_ParamLimits

0x507b,	// (0x0001439c) listscroll_midp_info_pane_t1

0x5093,	// (0x000143b4) listscroll_midp_info_pane_t2_ParamLimits

0x5093,	// (0x000143b4) listscroll_midp_info_pane_t2

0x50d1,	// (0x000143f2) listscroll_midp_info_pane_t3_ParamLimits

0x50d1,	// (0x000143f2) listscroll_midp_info_pane_t3

0x510b,	// (0x0001442c) listscroll_midp_info_pane_t4_ParamLimits

0x510b,	// (0x0001442c) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001eb41) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001eb41) listscroll_midp_info_pane_t

0x384d,	// (0x00012b6e) scroll_pane_cp21

0x501d,	// (0x0001433e) form_midp_field_choice_group_pane

0x5026,	// (0x00014347) form_midp_field_text_pane

0x5061,	// (0x00014382) form_midp_field_time_pane

0x5069,	// (0x0001438a) form_midp_gauge_slider_pane

0x5072,	// (0x00014393) form_midp_gauge_wait_pane

0x26e0,	// (0x00011a01) form_midp_image_pane

0xda12,	// (0x0001cd33) list_single_midp_pane_ParamLimits

0xda12,	// (0x0001cd33) list_single_midp_pane

0xd9ef,	// (0x0001cd10) form_midp_field_text_pane_t1

0x4d44,	// (0x00014065) input_focus_pane_cp050

0x4fd6,	// (0x000142f7) list_midp_form_text_pane

0x4f6a,	// (0x0001428b) form_midp_field_choice_group_pane_t1

0x4f78,	// (0x00014299) input_focus_pane_cp051

0x4f8c,	// (0x000142ad) list_midp_choice_pane

0x26e0,	// (0x00011a01) status_idle_pane

0x4f4e,	// (0x0001426f) form_midp_field_time_pane_t1

0x26d6,	// (0x000119f7) wait_anim_pane_g2_copy1

0x4f5c,	// (0x0001427d) form_midp_field_time_pane_t2

0x0001,

0x44e0,	// (0x00013801) aid_navinavi_width_2_pane

0xf81b,	// (0x0001eb3c) form_midp_field_time_pane_t

0x26e0,	// (0x00011a01) input_focus_pane_cp052

0x26e0,	// (0x00011a01) bg_input_focus_pane_cp040

0x4f0e,	// (0x0001422f) form_midp_gauge_slider_pane_t1

0x4f1c,	// (0x0001423d) form_midp_gauge_slider_pane_t2

0xd9cf,	// (0x0001ccf0) form_midp_gauge_slider_pane_t3

0xd9df,	// (0x0001cd00) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001eb33) form_midp_gauge_slider_pane_t

0x4f46,	// (0x00014267) form_midp_slider_pane

0x27c0,	// (0x00011ae1) bg_input_focus_pane_cp041_ParamLimits

0x27c0,	// (0x00011ae1) bg_input_focus_pane_cp041

0x4edb,	// (0x000141fc) form_midp_gauge_wait_pane_t1_ParamLimits

0x4edb,	// (0x000141fc) form_midp_gauge_wait_pane_t1

0x4eed,	// (0x0001420e) form_midp_gauge_wait_pane_t2_ParamLimits

0x4eed,	// (0x0001420e) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001eb2e) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001eb2e) form_midp_gauge_wait_pane_t

0x4eff,	// (0x00014220) form_midp_wait_pane_ParamLimits

0x4eff,	// (0x00014220) form_midp_wait_pane

0x4ea5,	// (0x000141c6) form_midp_image_pane_g1

0x4eae,	// (0x000141cf) form_midp_image_pane_t1

0x4ebd,	// (0x000141de) form_midp_image_pane_t2

0x4ecc,	// (0x000141ed) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001eb27) form_midp_image_pane_t

0x4e8d,	// (0x000141ae) list_single_midp_pane_g1

0x4e96,	// (0x000141b7) list_single_midp_pane_t1

0xd9b9,	// (0x0001ccda) list_midp_form_item_pane_ParamLimits

0xd9b9,	// (0x0001ccda) list_midp_form_item_pane

0x4488,	// (0x000137a9) list_midp_form_item_pane_t1

0x4497,	// (0x000137b8) midp_ticker_pane_g1

0x44a3,	// (0x000137c4) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001ea74) midp_ticker_pane_g

0x44af,	// (0x000137d0) midp_ticker_pane_t1

0x62de,	// (0x000155ff) midp_editing_number_pane_t1

0x62bc,	// (0x000155dd) midp_editing_number_pane

0x62cb,	// (0x000155ec) midp_ticker_pane

0x6046,	// (0x00015367) ai_message_heading_pane

0x26e0,	// (0x00011a01) bg_popup_window_pane_cp14

0x604e,	// (0x0001536f) listscroll_ai_message_pane

0x5fd0,	// (0x000152f1) ai_message_heading_pane_g1_ParamLimits

0x5fd0,	// (0x000152f1) ai_message_heading_pane_g1

0x5fdc,	// (0x000152fd) ai_message_heading_pane_g2_ParamLimits

0x5fdc,	// (0x000152fd) ai_message_heading_pane_g2

0x5fe8,	// (0x00015309) ai_message_heading_pane_g3_ParamLimits

0x5fe8,	// (0x00015309) ai_message_heading_pane_g3

0x5ff4,	// (0x00015315) ai_message_heading_pane_g4_ParamLimits

0x5ff4,	// (0x00015315) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001ec68) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001ec68) ai_message_heading_pane_g

0x6000,	// (0x00015321) ai_message_heading_pane_t1_ParamLimits

0x6000,	// (0x00015321) ai_message_heading_pane_t1

0x601a,	// (0x0001533b) ai_message_heading_pane_t2_ParamLimits

0x601a,	// (0x0001533b) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001ec71) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001ec71) ai_message_heading_pane_t

0x602c,	// (0x0001534d) bg_popup_heading_pane_cp1_ParamLimits

0x602c,	// (0x0001534d) bg_popup_heading_pane_cp1

0x5fbe,	// (0x000152df) list_ai_message_pane_ParamLimits

0x5fbe,	// (0x000152df) list_ai_message_pane

0x384d,	// (0x00012b6e) scroll_pane_cp10

0x5f5a,	// (0x0001527b) list_ai_message_pane_g1

0x5f62,	// (0x00015283) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001ec45) list_ai_message_pane_g

0x5f6a,	// (0x0001528b) list_ai_message_pane_t1_ParamLimits

0x5f6a,	// (0x0001528b) list_ai_message_pane_t1

0x5f7f,	// (0x000152a0) list_ai_message_pane_t2_ParamLimits

0x5f7f,	// (0x000152a0) list_ai_message_pane_t2

0x5f94,	// (0x000152b5) list_ai_message_pane_t3_ParamLimits

0x5f94,	// (0x000152b5) list_ai_message_pane_t3

0x5fa9,	// (0x000152ca) list_ai_message_pane_t4_ParamLimits

0x5fa9,	// (0x000152ca) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001ec4a) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001ec4a) list_ai_message_pane_t

0xdb7a,	// (0x0001ce9b) cell_ai_soft_ind_pane_ParamLimits

0xdb7a,	// (0x0001ce9b) cell_ai_soft_ind_pane

0x44c1,	// (0x000137e2) cell_ai_soft_ind_pane_g1_ParamLimits

0x44c1,	// (0x000137e2) cell_ai_soft_ind_pane_g1

0x26e0,	// (0x00011a01) grid_highlight_cp1

0x44ce,	// (0x000137ef) text_secondary_cp56_ParamLimits

0x44ce,	// (0x000137ef) text_secondary_cp56

0x5f19,	// (0x0001523a) example_general_pane_ParamLimits

0x5f19,	// (0x0001523a) example_general_pane

0x5f25,	// (0x00015246) example_parent_pane_g1_ParamLimits

0x5f25,	// (0x00015246) example_parent_pane_g1

0x5f31,	// (0x00015252) example_parent_pane_t1_ParamLimits

0x5f31,	// (0x00015252) example_parent_pane_t1

0xbe94,	// (0x0001b1b5) popup_preview_text_window_ParamLimits

0xbe94,	// (0x0001b1b5) popup_preview_text_window

0x42ff,	// (0x00013620) list_single_pane_cp2_g4

0x2aff,	// (0x00011e20) bg_popup_preview_window_pane_ParamLimits

0x2aff,	// (0x00011e20) bg_popup_preview_window_pane

0x5c66,	// (0x00014f87) popup_preview_text_window_t1_ParamLimits

0x5c66,	// (0x00014f87) popup_preview_text_window_t1

0x5c84,	// (0x00014fa5) popup_preview_text_window_t2_ParamLimits

0x5c84,	// (0x00014fa5) popup_preview_text_window_t2

0x5ccd,	// (0x00014fee) popup_preview_text_window_t3_ParamLimits

0x5ccd,	// (0x00014fee) popup_preview_text_window_t3

0x5d12,	// (0x00015033) popup_preview_text_window_t4_ParamLimits

0x5d12,	// (0x00015033) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001ec19) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001ec19) popup_preview_text_window_t

0x5d90,	// (0x000150b1) scroll_pane_cp11

0x4c20,	// (0x00013f41) bg_popup_preview_window_pane_g1

0x5c26,	// (0x00014f47) bg_popup_preview_window_pane_g2

0x5c2e,	// (0x00014f4f) bg_popup_preview_window_pane_g3

0x5c36,	// (0x00014f57) bg_popup_preview_window_pane_g4

0x5c3e,	// (0x00014f5f) bg_popup_preview_window_pane_g5

0x5c46,	// (0x00014f67) bg_popup_preview_window_pane_g6

0x5c4e,	// (0x00014f6f) bg_popup_preview_window_pane_g7

0x5c56,	// (0x00014f77) bg_popup_preview_window_pane_g8

0x01cd,	// (0x0000f4ee) aid_popup_width_pane

0xbe10,	// (0x0001b131) popup_midp_note_alarm_window_ParamLimits

0xbe10,	// (0x0001b131) popup_midp_note_alarm_window

0x354f,	// (0x00012870) data_form_pane_ParamLimits

0xd032,	// (0x0001c353) form_field_data_pane_g1

0xd03c,	// (0x0001c35d) form_field_data_pane_t1_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_ParamLimits

0x358d,	// (0x000128ae) data_form_wide_pane_ParamLimits

0x3599,	// (0x000128ba) form_field_data_wide_pane_g1

0x35b9,	// (0x000128da) form_field_data_wide_pane_t1_ParamLimits

0x2da5,	// (0x000120c6) input_focus_pane_cp6_ParamLimits

0xd148,	// (0x0001c469) input_popup_find_pane_g1_ParamLimits

0xd148,	// (0x0001c469) input_popup_find_pane_g1

0x073d,	// (0x0000fa5e) aid_navi_side_left_pane

0x0752,	// (0x0000fa73) aid_navi_side_right_pane

0x563f,	// (0x00014960) bg_popup_window_pane_cp30_ParamLimits

0x563f,	// (0x00014960) bg_popup_window_pane_cp30

0x56b9,	// (0x000149da) popup_midp_note_alarm_window_g1_ParamLimits

0x56b9,	// (0x000149da) popup_midp_note_alarm_window_g1

0x56e9,	// (0x00014a0a) popup_midp_note_alarm_window_t1_ParamLimits

0x56e9,	// (0x00014a0a) popup_midp_note_alarm_window_t1

0x578a,	// (0x00014aab) popup_midp_note_alarm_window_t2_ParamLimits

0x578a,	// (0x00014aab) popup_midp_note_alarm_window_t2

0x5838,	// (0x00014b59) popup_midp_note_alarm_window_t3_ParamLimits

0x5838,	// (0x00014b59) popup_midp_note_alarm_window_t3

0x586a,	// (0x00014b8b) popup_midp_note_alarm_window_t4_ParamLimits

0x586a,	// (0x00014b8b) popup_midp_note_alarm_window_t4

0x5890,	// (0x00014bb1) popup_midp_note_alarm_window_t5_ParamLimits

0x5890,	// (0x00014bb1) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001ebb6) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001ebb6) popup_midp_note_alarm_window_t

0x593c,	// (0x00014c5d) wait_bar_pane_cp1_ParamLimits

0x593c,	// (0x00014c5d) wait_bar_pane_cp1

0x26e0,	// (0x00011a01) wait_anim_pane_copy1

0x26e0,	// (0x00011a01) wait_border_pane_copy1

0x531d,	// (0x0001463e) wait_border_pane_g1_copy1

0x35d0,	// (0x000128f1) form_field_popup_pane_g1

0xd056,	// (0x0001c377) form_field_popup_pane_t1_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_cp7_ParamLimits

0x35f2,	// (0x00012913) list_form_pane_ParamLimits

0x35fe,	// (0x0001291f) form_field_popup_wide_pane_g1

0x3606,	// (0x00012927) form_field_popup_wide_pane_t1_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_cp8_ParamLimits

0x361b,	// (0x0001293c) list_form_wide_pane_ParamLimits

0x6519,	// (0x0001583a) aid_size_cell_graphic_pane

0xd0d5,	// (0x0001c3f6) data_form_pane_t1_ParamLimits

0xdd1b,	// (0x0001d03c) data_form_wide_pane_t1_ParamLimits

0xd63a,	// (0x0001c95b) bg_status_flat_pane

0xc947,	// (0x0001bc68) title_pane_t1_ParamLimits

0x2788,	// (0x00011aa9) title_pane_t2_ParamLimits

0x27ae,	// (0x00011acf) title_pane_t3_ParamLimits

0xf557,	// (0x0001e878) title_pane_t_ParamLimits

0x3cc8,	// (0x00012fe9) level_1_signal_ParamLimits

0x3cd5,	// (0x00012ff6) level_2_signal_ParamLimits

0x3ce2,	// (0x00013003) level_3_signal_ParamLimits

0x3cef,	// (0x00013010) level_4_signal_ParamLimits

0x3cfc,	// (0x0001301d) level_5_signal_ParamLimits

0x3d09,	// (0x0001302a) level_6_signal_ParamLimits

0x3d16,	// (0x00013037) level_7_signal_ParamLimits

0x3cc8,	// (0x00012fe9) level_1_battery_ParamLimits

0x3cd5,	// (0x00012ff6) level_2_battery_ParamLimits

0x3ce2,	// (0x00013003) level_3_battery_ParamLimits

0x3cef,	// (0x00013010) level_4_battery_ParamLimits

0x3cfc,	// (0x0001301d) level_5_battery_ParamLimits

0x3d09,	// (0x0001302a) level_6_battery_ParamLimits

0x3d16,	// (0x00013037) level_7_battery_ParamLimits

0x5544,	// (0x00014865) bg_status_flat_pane_g1

0x554c,	// (0x0001486d) bg_status_flat_pane_g2

0x5554,	// (0x00014875) bg_status_flat_pane_g3

0x555c,	// (0x0001487d) bg_status_flat_pane_g4

0x5564,	// (0x00014885) bg_status_flat_pane_g5

0x556c,	// (0x0001488d) bg_status_flat_pane_g6

0x5574,	// (0x00014895) bg_status_flat_pane_g7

0xc9d3,	// (0x0001bcf4) tabs_3_active_pane_t1_ParamLimits

0xc9d3,	// (0x0001bcf4) tabs_3_passive_pane_t1_ParamLimits

0xc9e5,	// (0x0001bd06) tabs_4_active_pane_t1_ParamLimits

0xc9e5,	// (0x0001bd06) tabs_4_1_passive_pane_t1_ParamLimits

0xd15e,	// (0x0001c47f) tabs_2_active_pane_t1_ParamLimits

0xd15e,	// (0x0001c47f) tabs_2_passive_pane_t1_ParamLimits

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp4_ParamLimits

0xd170,	// (0x0001c491) tabs_2_long_active_pane_t1_ParamLimits

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp4_ParamLimits

0x12db,	// (0x000105fc) list_single_midp_graphic_pane_t1_ParamLimits

0x27c0,	// (0x00011ae1) bg_active_tab_pane_cp5_ParamLimits

0xd183,	// (0x0001c4a4) tabs_3_long_active_pane_t1_ParamLimits

0x4704,	// (0x00013a25) bg_passive_tab_pane_cp5_ParamLimits

0x12db,	// (0x000105fc) list_single_midp_graphic_pane_t1

0xd63a,	// (0x0001c95b) bg_status_flat_pane_ParamLimits

0x48a2,	// (0x00013bc3) indicator_pane_cp2_ParamLimits

0x48a2,	// (0x00013bc3) indicator_pane_cp2

0xd7b8,	// (0x0001cad9) navi_pane_srt_ParamLimits

0xd7b8,	// (0x0001cad9) navi_pane_srt

0x49f1,	// (0x00013d12) popup_clock_digital_analogue_window_cp1

0x28b7,	// (0x00011bd8) indicator_pane_t1

0x43c2,	// (0x000136e3) copy_highlight_pane

0x43c2,	// (0x000136e3) cursor_graphics_pane

0x43c2,	// (0x000136e3) graphic_within_text_pane

0x43c2,	// (0x000136e3) link_highlight_pane

0x5d53,	// (0x00015074) popup_preview_text_window_t5_ParamLimits

0x5d53,	// (0x00015074) popup_preview_text_window_t5

0x44e8,	// (0x00013809) cursor_digital_pane

0x44e8,	// (0x00013809) cursor_primary_pane

0x44f9,	// (0x0001381a) cursor_primary_small_pane

0x4501,	// (0x00013822) cursor_secondary_pane

0x4509,	// (0x0001382a) cursor_title_pane

0x44e8,	// (0x00013809) link_highlight_digital_pane

0x44f0,	// (0x00013811) link_highlight_primary_pane

0x44f9,	// (0x0001381a) link_highlight_primary_small_pane

0x4501,	// (0x00013822) link_highlight_secondary_pane

0x4509,	// (0x0001382a) link_highlight_title_pane

0x44e8,	// (0x00013809) copy_highlight_digital_pane

0x44e8,	// (0x00013809) copy_highlight_primary_pane

0x44f9,	// (0x0001381a) copy_highlight_primary_small_pane

0x4501,	// (0x00013822) copy_highlight_secondary_pane

0x4509,	// (0x0001382a) copy_highlight_title_pane

0x4501,	// (0x00013822) graphic_text_digital_pane

0x55e2,	// (0x00014903) graphic_text_primary_pane

0x55eb,	// (0x0001490c) graphic_text_primary_small_pane

0x44f9,	// (0x0001381a) graphic_text_secondary_pane

0x44e8,	// (0x00013809) graphic_text_title_pane

0xd456,	// (0x0001c777) cursor_primary_pane_g1

0x55d4,	// (0x000148f5) cursor_text_primary_t1

0xda6c,	// (0x0001cd8d) cursor_primary_small_pane_g1

0x55c6,	// (0x000148e7) cursor_text_primary_small_t1

0xda62,	// (0x0001cd83) cursor_primary_small_pane_g1_copy1

0x55ae,	// (0x000148cf) cursor_text_primary_small_t1_copy1

0x558c,	// (0x000148ad) cursor_text_title_t1

0xda58,	// (0x0001cd79) cursor_title_pane_g1

0xd456,	// (0x0001c777) cursor_digital_pane_g1

0x451b,	// (0x0001383c) cursor_text_digital_t1

0x552d,	// (0x0001484e) link_highlight_primary_pane_g1

0x5535,	// (0x00014856) link_highlight_primary_pane_t1

0x4529,	// (0x0001384a) link_highlight_primary_small_pane_g1

0x4531,	// (0x00013852) link_highlight_primary_small_pane_t1

0x4529,	// (0x0001384a) link_highlight_secondary_pane_g1

0x4540,	// (0x00013861) link_highlight_secondary_pane_t1

0x54a1,	// (0x000147c2) link_highlight_title_pane_g1

0x54a9,	// (0x000147ca) link_highlight_title_pane_t1

0x548a,	// (0x000147ab) link_highlight_digital_pane_g1

0x5492,	// (0x000147b3) link_highlight_digital_pane_t1

0x5362,	// (0x00014683) copy_highlight_primary_pane_g1

0x536a,	// (0x0001468b) copy_highlight_primary_pane_t1

0x533c,	// (0x0001465d) copy_highlight_primary_small_pane_g1

0x5353,	// (0x00014674) copy_highlight_primary_small_pane_t1

0x454f,	// (0x00013870) copy_highlight_secondary_pane_g1

0x4557,	// (0x00013878) copy_highlight_secondary_pane_t1

0x533c,	// (0x0001465d) copy_highlight_title_pane_g1

0x5344,	// (0x00014665) copy_highlight_title_pane_t1

0x5362,	// (0x00014683) copy_highlight_digital_pane_g1

0x66e3,	// (0x00015a04) copy_highlight_digital_pane_t1

0x6637,	// (0x00015958) graphic_text_primary_pane_g1

0x66c7,	// (0x000159e8) graphic_text_primary_pane_t1

0x66d5,	// (0x000159f6) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001ece5) graphic_text_primary_pane_t

0x66a3,	// (0x000159c4) graphic_text_primary_small_pane_g1

0x66ab,	// (0x000159cc) graphic_text_primary_small_pane_t1

0x66b9,	// (0x000159da) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001ece0) graphic_text_primary_small_pane_t

0x667f,	// (0x000159a0) graphic_text_secondary_pane_g1

0x6687,	// (0x000159a8) graphic_text_secondary_pane_t1

0x6695,	// (0x000159b6) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001ecdb) graphic_text_secondary_pane_t

0x665b,	// (0x0001597c) graphic_text_title_pane_g1

0x6663,	// (0x00015984) graphic_text_title_pane_t1

0x6671,	// (0x00015992) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001ecd6) graphic_text_title_pane_t

0x6637,	// (0x00015958) graphic_text_digital_pane_g1

0x663f,	// (0x00015960) graphic_text_digital_pane_t1

0x664d,	// (0x0001596e) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001ecd1) graphic_text_digital_pane_t

0x27c0,	// (0x00011ae1) navi_icon_pane_srt_ParamLimits

0x27c0,	// (0x00011ae1) navi_icon_pane_srt

0x26e0,	// (0x00011a01) navi_midp_pane_srt

0x26e0,	// (0x00011a01) navi_navi_pane_srt

0x27c0,	// (0x00011ae1) navi_text_pane_srt_ParamLimits

0x27c0,	// (0x00011ae1) navi_text_pane_srt

0x6602,	// (0x00015923) navi_navi_icon_text_pane_srt

0x660a,	// (0x0001592b) navi_navi_pane_srt_g1_ParamLimits

0x660a,	// (0x0001592b) navi_navi_pane_srt_g1

0x661c,	// (0x0001593d) navi_navi_pane_srt_g2_ParamLimits

0x661c,	// (0x0001593d) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001eccc) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001eccc) navi_navi_pane_srt_g

0x662e,	// (0x0001594f) navi_navi_tabs_pane_srt

0x6602,	// (0x00015923) navi_navi_text_pane_srt

0x6602,	// (0x00015923) navi_navi_volume_pane_srt

0x65f3,	// (0x00015914) navi_navi_text_pane_srt_t1

0x164f,	// (0x00010970) navi_navi_volume_pane_srt_g1

0x1657,	// (0x00010978) volume_small_pane_srt_ParamLimits

0x1657,	// (0x00010978) volume_small_pane_srt

0x0a14,	// (0x0000fd35) volume_small_pane_srt_g1_ParamLimits

0x0a14,	// (0x0000fd35) volume_small_pane_srt_g1

0x0a24,	// (0x0000fd45) volume_small_pane_srt_g2_ParamLimits

0x0a24,	// (0x0000fd45) volume_small_pane_srt_g2

0x0a35,	// (0x0000fd56) volume_small_pane_srt_g3_ParamLimits

0x0a35,	// (0x0000fd56) volume_small_pane_srt_g3

0x0a46,	// (0x0000fd67) volume_small_pane_srt_g4_ParamLimits

0x0a46,	// (0x0000fd67) volume_small_pane_srt_g4

0x0a57,	// (0x0000fd78) volume_small_pane_srt_g5_ParamLimits

0x0a57,	// (0x0000fd78) volume_small_pane_srt_g5

0x0a68,	// (0x0000fd89) volume_small_pane_srt_g6_ParamLimits

0x0a68,	// (0x0000fd89) volume_small_pane_srt_g6

0x0a79,	// (0x0000fd9a) volume_small_pane_srt_g7_ParamLimits

0x0a79,	// (0x0000fd9a) volume_small_pane_srt_g7

0x0a8a,	// (0x0000fdab) volume_small_pane_srt_g8_ParamLimits

0x0a8a,	// (0x0000fdab) volume_small_pane_srt_g8

0x0a9b,	// (0x0000fdbc) volume_small_pane_srt_g9_ParamLimits

0x0a9b,	// (0x0000fdbc) volume_small_pane_srt_g9

0x0aac,	// (0x0000fdcd) volume_small_pane_srt_g10_ParamLimits

0x0aac,	// (0x0000fdcd) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001ea79) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001ea79) volume_small_pane_srt_g

0x2ba8,	// (0x00011ec9) query_popup_data_pane_cp2

0x65d9,	// (0x000158fa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x65d9,	// (0x000158fa) navi_navi_icon_text_pane_srt_t1

0x55e2,	// (0x00014903) navi_tabs_2_long_pane_srt

0x55e2,	// (0x00014903) navi_tabs_2_pane_srt

0x55e2,	// (0x00014903) navi_tabs_3_long_pane_srt

0x55e2,	// (0x00014903) navi_tabs_3_pane_srt

0x55e2,	// (0x00014903) navi_tabs_4_pane_srt

0x162f,	// (0x00010950) tabs_2_active_pane_srt_ParamLimits

0x162f,	// (0x00010950) tabs_2_active_pane_srt

0x163f,	// (0x00010960) tabs_2_passive_pane_srt_ParamLimits

0x163f,	// (0x00010960) tabs_2_passive_pane_srt

0x4d44,	// (0x00014065) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d44,	// (0x00014065) bg_passive_tab_pane_cp1_srt

0x65a5,	// (0x000158c6) bg_passive_tab_pane_g1_cp1_srt

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp1_srt

0x65ae,	// (0x000158cf) bg_passive_tab_pane_g3_cp1_srt

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp1_srt_ParamLimits

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp1_srt

0x65b7,	// (0x000158d8) tabs_2_active_pane_srt_g1

0xde5c,	// (0x0001d17d) tabs_2_active_pane_srt_t1_ParamLimits

0xde5c,	// (0x0001d17d) tabs_2_active_pane_srt_t1

0x65a5,	// (0x000158c6) bg_active_tab_pane_g1_cp1_srt

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp1_srt

0x65ae,	// (0x000158cf) bg_active_tab_pane_g3_cp1_srt

0x15fc,	// (0x0001091d) tabs_3_active_pane_srt_ParamLimits

0x15fc,	// (0x0001091d) tabs_3_active_pane_srt

0x160d,	// (0x0001092e) tabs_3_passive_pane_cp_srt_ParamLimits

0x160d,	// (0x0001092e) tabs_3_passive_pane_cp_srt

0x161e,	// (0x0001093f) tabs_3_passive_pane_srt_ParamLimits

0x161e,	// (0x0001093f) tabs_3_passive_pane_srt

0x4d44,	// (0x00014065) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d44,	// (0x00014065) bg_passive_tab_pane_cp2_srt

0x4566,	// (0x00013887) bg_passive_tab_pane_g1_cp2_srt

0x4013,	// (0x00013334) bg_passive_tab_pane_g2_cp2_srt

0x456f,	// (0x00013890) bg_passive_tab_pane_g3_cp2_srt

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp2_srt_ParamLimits

0x2a55,	// (0x00011d76) bg_active_tab_pane_cp2_srt

0x658b,	// (0x000158ac) tabs_3_active_pane_srt_g1

0xde46,	// (0x0001d167) tabs_3_active_pane_srt_t1_ParamLimits

0xde46,	// (0x0001d167) tabs_3_active_pane_srt_t1

0x4566,	// (0x00013887) bg_active_tab_pane_g1_cp2_srt

0x4013,	// (0x00013334) bg_active_tab_pane_g2_cp2_srt

0x456f,	// (0x00013890) bg_active_tab_pane_g3_cp2_srt

0x15b4,	// (0x000108d5) tabs_4_active_pane_srt_ParamLimits

0x15b4,	// (0x000108d5) tabs_4_active_pane_srt

0x15c6,	// (0x000108e7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15c6,	// (0x000108e7) tabs_4_passive_pane_cp2_srt

0x0c0f,	// (0x0000ff30) aid_size_cell_toolbar

0x610a,	// (0x0001542b) main_idle_act_pane_ParamLimits

0x0dd2,	// (0x000100f3) popup_large_graphic_colour_window_ParamLimits

0xc11a,	// (0x0001b43b) popup_toolbar_window_ParamLimits

0xc11a,	// (0x0001b43b) popup_toolbar_window

0x6309,	// (0x0001562a) list_single_graphic_2heading_pane_ParamLimits

0x6309,	// (0x0001562a) list_single_graphic_2heading_pane

0x3a7a,	// (0x00012d9b) aid_size_cell_apps_grid_lsc_pane

0x3a8c,	// (0x00012dad) aid_size_cell_apps_grid_prt_pane

0x4704,	// (0x00013a25) bg_wml_button_pane_cp1_ParamLimits

0x4704,	// (0x00013a25) bg_wml_button_pane_cp1

0xd9ef,	// (0x0001cd10) form_midp_field_text_pane_t1_ParamLimits

0x4d44,	// (0x00014065) input_focus_pane_cp050_ParamLimits

0x4fd6,	// (0x000142f7) list_midp_form_text_pane_ParamLimits

0x4f78,	// (0x00014299) input_focus_pane_cp051_ParamLimits

0x4f8c,	// (0x000142ad) list_midp_choice_pane_ParamLimits

0xd983,	// (0x0001cca4) list_single_2graphic_pane_cp3_ParamLimits

0xd983,	// (0x0001cca4) list_single_2graphic_pane_cp3

0xd998,	// (0x0001ccb9) list_single_midp_graphic_pane_ParamLimits

0xd998,	// (0x0001ccb9) list_single_midp_graphic_pane

0x11e2,	// (0x00010503) list_single_graphic_2heading_pane_g1_ParamLimits

0x11e2,	// (0x00010503) list_single_graphic_2heading_pane_g1

0x11ee,	// (0x0001050f) list_single_graphic_2heading_pane_g4_ParamLimits

0x11ee,	// (0x0001050f) list_single_graphic_2heading_pane_g4

0x11fa,	// (0x0001051b) list_single_graphic_2heading_pane_g5_ParamLimits

0x11fa,	// (0x0001051b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001eacc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001eacc) list_single_graphic_2heading_pane_g

0x1206,	// (0x00010527) list_single_graphic_2heading_pane_t1_ParamLimits

0x1206,	// (0x00010527) list_single_graphic_2heading_pane_t1

0x121a,	// (0x0001053b) list_single_graphic_2heading_pane_t2_ParamLimits

0x121a,	// (0x0001053b) list_single_graphic_2heading_pane_t2

0x1234,	// (0x00010555) list_single_graphic_2heading_pane_t3_ParamLimits

0x1234,	// (0x00010555) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001ead3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001ead3) list_single_graphic_2heading_pane_t

0x4b48,	// (0x00013e69) bg_popup_sub_pane_cp2

0x4b72,	// (0x00013e93) grid_toobar_pane

0x124c,	// (0x0001056d) cell_toolbar_pane_ParamLimits

0x124c,	// (0x0001056d) cell_toolbar_pane

0x4bc4,	// (0x00013ee5) cell_toolbar_pane_g1_ParamLimits

0x4bc4,	// (0x00013ee5) cell_toolbar_pane_g1

0x4bd8,	// (0x00013ef9) cell_toolbar_pane_g2_ParamLimits

0x4bd8,	// (0x00013ef9) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001eae1) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001eae1) cell_toolbar_pane_g

0x4bfa,	// (0x00013f1b) grid_highlight_pane_cp2_ParamLimits

0x4bfa,	// (0x00013f1b) grid_highlight_pane_cp2

0x4c14,	// (0x00013f35) toolbar_button_pane

0x4c20,	// (0x00013f41) toolbar_button_pane_g1

0x4c28,	// (0x00013f49) toolbar_button_pane_g2

0x4c30,	// (0x00013f51) toolbar_button_pane_g3

0x4c38,	// (0x00013f59) toolbar_button_pane_g4

0x4c40,	// (0x00013f61) toolbar_button_pane_g5

0x4c48,	// (0x00013f69) toolbar_button_pane_g6

0x4c50,	// (0x00013f71) toolbar_button_pane_g7

0x4c58,	// (0x00013f79) toolbar_button_pane_g8

0x4c60,	// (0x00013f81) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001eae6) toolbar_button_pane_g

0x1284,	// (0x000105a5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1284,	// (0x000105a5) list_single_2graphic_pane_g1_cp3

0xc172,	// (0x0001b493) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc172,	// (0x0001b493) list_single_2graphic_pane_g2_cp3

0x12a1,	// (0x000105c2) list_single_2graphic_pane_g3_cp3

0x12a9,	// (0x000105ca) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12a9,	// (0x000105ca) list_single_2graphic_pane_g4_cp3

0x12b5,	// (0x000105d6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x12b5,	// (0x000105d6) list_single_2graphic_pane_t1_cp3

0x12cf,	// (0x000105f0) list_single_midp_graphic_pane_g2_ParamLimits

0x12cf,	// (0x000105f0) list_single_midp_graphic_pane_g2

0x0c17,	// (0x0000ff38) aid_zoom_text_primary

0x0c1f,	// (0x0000ff40) aid_zoom_text_secondary

0xd4ae,	// (0x0001c7cf) status_small_pane_g7_ParamLimits

0xd4ae,	// (0x0001c7cf) status_small_pane_g7

0xd4d1,	// (0x0001c7f2) status_small_pane_t1_ParamLimits

0xc923,	// (0x0001bc44) title_pane_g2

0x0003,

0xf54e,	// (0x0001e86f) title_pane_g

0xcb9b,	// (0x0001bebc) aid_size_cell_colour_1_pane_ParamLimits

0xcb9b,	// (0x0001bebc) aid_size_cell_colour_1_pane

0xcbaf,	// (0x0001bed0) aid_size_cell_colour_2_pane_ParamLimits

0xcbaf,	// (0x0001bed0) aid_size_cell_colour_2_pane

0xcbc3,	// (0x0001bee4) aid_size_cell_colour_3_pane_ParamLimits

0xcbc3,	// (0x0001bee4) aid_size_cell_colour_3_pane

0xcbd7,	// (0x0001bef8) aid_size_cell_colour_4_pane_ParamLimits

0xcbd7,	// (0x0001bef8) aid_size_cell_colour_4_pane

0x0679,	// (0x0000f99a) title_pane_stacon_g1_ParamLimits

0x0679,	// (0x0000f99a) title_pane_stacon_g1

0x53c1,	// (0x000146e2) popup_note_wait_window_g3_ParamLimits

0x53c1,	// (0x000146e2) popup_note_wait_window_g3

0x5437,	// (0x00014758) popup_note_wait_window_t5_ParamLimits

0x5437,	// (0x00014758) popup_note_wait_window_t5

0x26e0,	// (0x00011a01) main_feb_china_hwr_fs_writing_pane

0xbb36,	// (0x0001ae57) popup_feb_china_hwr_fs_window_ParamLimits

0xbb36,	// (0x0001ae57) popup_feb_china_hwr_fs_window

0xc183,	// (0x0001b4a4) aid_size_cell_hwr_fs_ParamLimits

0xc183,	// (0x0001b4a4) aid_size_cell_hwr_fs

0x4d44,	// (0x00014065) bg_popup_sub_pane_cp3_ParamLimits

0x4d44,	// (0x00014065) bg_popup_sub_pane_cp3

0xc198,	// (0x0001b4b9) grid_hwr_fs_pane_ParamLimits

0xc198,	// (0x0001b4b9) grid_hwr_fs_pane

0x131e,	// (0x0001063f) linegrid_hwr_fs_pane_ParamLimits

0x131e,	// (0x0001063f) linegrid_hwr_fs_pane

0xc1b0,	// (0x0001b4d1) cell_hwr_fs_pane_ParamLimits

0xc1b0,	// (0x0001b4d1) cell_hwr_fs_pane

0x4d50,	// (0x00014071) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d50,	// (0x00014071) linegrid_hwr_fs_pane_g1

0xd957,	// (0x0001cc78) linegrid_hwr_fs_pane_g2_ParamLimits

0xd957,	// (0x0001cc78) linegrid_hwr_fs_pane_g2

0x4d6e,	// (0x0001408f) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d6e,	// (0x0001408f) linegrid_hwr_fs_pane_g3

0x1350,	// (0x00010671) linegrid_hwr_fs_pane_g4_ParamLimits

0x1350,	// (0x00010671) linegrid_hwr_fs_pane_g4

0x136a,	// (0x0001068b) linegrid_hwr_fs_pane_g5_ParamLimits

0x136a,	// (0x0001068b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001eb0c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001eb0c) linegrid_hwr_fs_pane_g

0x4d7a,	// (0x0001409b) cell_hwr_fs_pane_g1_ParamLimits

0x4d7a,	// (0x0001409b) cell_hwr_fs_pane_g1

0x4a7f,	// (0x00013da0) cell_hwr_fs_pane_g2_ParamLimits

0x4a7f,	// (0x00013da0) cell_hwr_fs_pane_g2

0xd969,	// (0x0001cc8a) cell_hwr_fs_pane_g3_ParamLimits

0xd969,	// (0x0001cc8a) cell_hwr_fs_pane_g3

0xd976,	// (0x0001cc97) cell_hwr_fs_pane_g4_ParamLimits

0xd976,	// (0x0001cc97) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001eb17) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001eb17) cell_hwr_fs_pane_g

0xc1d6,	// (0x0001b4f7) cell_hwr_fs_pane_t1

0x26e0,	// (0x00011a01) grid_highlight_pane_cp6

0x26e0,	// (0x00011a01) main_idle_act2_pane

0x3834,	// (0x00012b55) aid_inside_area_popup_secondary

0xda7e,	// (0x0001cd9f) aid_inside_area_window_primary_ParamLimits

0xda7e,	// (0x0001cd9f) aid_inside_area_window_primary

0x66f2,	// (0x00015a13) ai2_news_ticker_pane

0x66fa,	// (0x00015a1b) aid_size_cell_ai1_link_ParamLimits

0x66fa,	// (0x00015a1b) aid_size_cell_ai1_link

0x6714,	// (0x00015a35) popup_ai2_data_window_ParamLimits

0x6714,	// (0x00015a35) popup_ai2_data_window

0x6728,	// (0x00015a49) popup_ai2_link_window_ParamLimits

0x6728,	// (0x00015a49) popup_ai2_link_window

0x4d44,	// (0x00014065) bg_popup_sub_pane_cp4_ParamLimits

0x4d44,	// (0x00014065) bg_popup_sub_pane_cp4

0x673c,	// (0x00015a5d) grid_ai2_link_pane_ParamLimits

0x673c,	// (0x00015a5d) grid_ai2_link_pane

0x6753,	// (0x00015a74) popup_ai2_link_window_g1_ParamLimits

0x6753,	// (0x00015a74) popup_ai2_link_window_g1

0x675f,	// (0x00015a80) popup_ai2_link_window_g2_ParamLimits

0x675f,	// (0x00015a80) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001ecea) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001ecea) popup_ai2_link_window_g

0x676e,	// (0x00015a8f) ai2_mp_button_pane

0x6776,	// (0x00015a97) ai2_mp_volume_pane

0x4f78,	// (0x00014299) bg_popup_sub_pane_cp5_ParamLimits

0x4f78,	// (0x00014299) bg_popup_sub_pane_cp5

0x677e,	// (0x00015a9f) heading_ai2_gene_pane_ParamLimits

0x677e,	// (0x00015a9f) heading_ai2_gene_pane

0x678a,	// (0x00015aab) list_ai2_gene_pane_ParamLimits

0x678a,	// (0x00015aab) list_ai2_gene_pane

0x67d2,	// (0x00015af3) cell_ai2_link_pane_ParamLimits

0x67d2,	// (0x00015af3) cell_ai2_link_pane

0x67e8,	// (0x00015b09) cell_ai2_link_pane_g1

0x26e0,	// (0x00011a01) grid_highlight_pane_cp7

0x166c,	// (0x0001098d) ai2_mp_volume_pane_g1

0x68b9,	// (0x00015bda) ai2_mp_volume_pane_g2

0x682e,	// (0x00015b4f) list_ai2_gene_pane_t1

0x68c1,	// (0x00015be2) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001ed03) ai2_mp_volume_pane_g

0x1674,	// (0x00010995) volume_small_pane_cp3

0x68c9,	// (0x00015bea) aid_size_cell_ai2_button

0x68d1,	// (0x00015bf2) grid_ai2_button_pane

0x68da,	// (0x00015bfb) cell_ai2_button_pane_ParamLimits

0x68da,	// (0x00015bfb) cell_ai2_button_pane

0x26d6,	// (0x000119f7) cell_ai2_button_pane_g1

0x26e0,	// (0x00011a01) grid_highlight_pane_cp8

0x6879,	// (0x00015b9a) ai2_gene_pane_t1_ParamLimits

0x6879,	// (0x00015b9a) ai2_gene_pane_t1

0xbac4,	// (0x0001ade5) aid_height_parent_landscape

0xdbc9,	// (0x0001ceea) aid_height_set_list

0x610a,	// (0x0001542b) aid_size_parent

0x6519,	// (0x0001583a) aid_size_cell_graphic_pane_ParamLimits

0x679a,	// (0x00015abb) popup_ai2_data_window_g1_ParamLimits

0x679a,	// (0x00015abb) popup_ai2_data_window_g1

0x67a6,	// (0x00015ac7) ai2_news_ticker_pane_g1

0x67ae,	// (0x00015acf) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001ecef) ai2_news_ticker_pane_g

0x67b6,	// (0x00015ad7) ai2_news_ticker_pane_t1

0x67c4,	// (0x00015ae5) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001ecf4) ai2_news_ticker_pane_t

0x67f1,	// (0x00015b12) heading_ai2_gene_pane_g1

0x67f9,	// (0x00015b1a) heading_ai2_gene_pane_t1_ParamLimits

0x67f9,	// (0x00015b1a) heading_ai2_gene_pane_t1

0x680e,	// (0x00015b2f) list_highlight_pane_cp6

0x6816,	// (0x00015b37) ai2_gene_pane_ParamLimits

0x6816,	// (0x00015b37) ai2_gene_pane

0x683c,	// (0x00015b5d) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001ecf9) list_ai2_gene_pane_t

0x684a,	// (0x00015b6b) list_highlight_pane_cp8_ParamLimits

0x684a,	// (0x00015b6b) list_highlight_pane_cp8

0x685b,	// (0x00015b7c) ai2_gene_pane_g1_ParamLimits

0x685b,	// (0x00015b7c) ai2_gene_pane_g1

0x686d,	// (0x00015b8e) ai2_gene_pane_g2_ParamLimits

0x686d,	// (0x00015b8e) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001ecfe) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001ecfe) ai2_gene_pane_g

0x2fca,	// (0x000122eb) scroll_pane_cp12

0xba83,	// (0x0001ada4) control_pane_t3_ParamLimits

0xba83,	// (0x0001ada4) control_pane_t3

0xd4c2,	// (0x0001c7e3) status_small_pane_g8_ParamLimits

0xd4c2,	// (0x0001c7e3) status_small_pane_g8

0xbbc9,	// (0x0001aeea) popup_find_window_ParamLimits

0xbe4a,	// (0x0001b16b) popup_note_image_window_ParamLimits

0x3061,	// (0x00012382) list_double2_graphic_pane_vc_g1_ParamLimits

0x3061,	// (0x00012382) list_double2_graphic_pane_vc_g1

0x2fe7,	// (0x00012308) list_double2_graphic_pane_vc_g2_ParamLimits

0x2fe7,	// (0x00012308) list_double2_graphic_pane_vc_g2

0x2ff3,	// (0x00012314) list_double2_graphic_pane_vc_g3_ParamLimits

0x2ff3,	// (0x00012314) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001eada) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eada) list_double2_graphic_pane_vc_g

0x4bae,	// (0x00013ecf) list_double2_graphic_pane_vc_t1_ParamLimits

0x4bae,	// (0x00013ecf) list_double2_graphic_pane_vc_t1

0x2fe7,	// (0x00012308) list_single_heading_pane_vc_g1_ParamLimits

0x2fe7,	// (0x00012308) list_single_heading_pane_vc_g1

0x2ff3,	// (0x00012314) list_single_heading_pane_vc_g2_ParamLimits

0x2ff3,	// (0x00012314) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_single_heading_pane_vc_g

0x4c68,	// (0x00013f89) list_single_heading_pane_vc_t1_ParamLimits

0x4c68,	// (0x00013f89) list_single_heading_pane_vc_t1

0x4c7e,	// (0x00013f9f) list_single_heading_pane_vc_t2_ParamLimits

0x4c7e,	// (0x00013f9f) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001eafb) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001eafb) list_single_heading_pane_vc_t

0x4c9a,	// (0x00013fbb) list_setting_number_pane_vc_g1_ParamLimits

0x4c9a,	// (0x00013fbb) list_setting_number_pane_vc_g1

0x4ca6,	// (0x00013fc7) list_setting_number_pane_vc_g2_ParamLimits

0x4ca6,	// (0x00013fc7) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eb00) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eb00) list_setting_number_pane_vc_g

0x4cb2,	// (0x00013fd3) list_setting_number_pane_vc_t1_ParamLimits

0x4cb2,	// (0x00013fd3) list_setting_number_pane_vc_t1

0x4cc6,	// (0x00013fe7) list_setting_number_pane_vc_t2_ParamLimits

0x4cc6,	// (0x00013fe7) list_setting_number_pane_vc_t2

0x4ce0,	// (0x00014001) list_setting_number_pane_vc_t3_ParamLimits

0x4ce0,	// (0x00014001) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001eb05) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001eb05) list_setting_number_pane_vc_t

0x4d08,	// (0x00014029) set_value_pane_vc_ParamLimits

0x4d08,	// (0x00014029) set_value_pane_vc

0x6309,	// (0x0001562a) list_double2_graphic_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double2_graphic_pane_vc

0x631c,	// (0x0001563d) list_double2_large_graphic_pane_vc_ParamLimits

0x631c,	// (0x0001563d) list_double2_large_graphic_pane_vc

0x6309,	// (0x0001562a) list_double2_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double2_pane_vc

0x6309,	// (0x0001562a) list_double_graphic_heading_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double_graphic_heading_pane_vc

0x6309,	// (0x0001562a) list_double_graphic_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double_graphic_pane_vc

0x6309,	// (0x0001562a) list_double_heading_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double_heading_pane_vc

0x632e,	// (0x0001564f) list_double_large_graphic_pane_vc_ParamLimits

0x632e,	// (0x0001564f) list_double_large_graphic_pane_vc

0x6309,	// (0x0001562a) list_double_number_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double_number_pane_vc

0x6309,	// (0x0001562a) list_double_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double_pane_vc

0x6309,	// (0x0001562a) list_double_time_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_double_time_pane_vc

0x6309,	// (0x0001562a) list_setting_number_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_setting_number_pane_vc

0x6309,	// (0x0001562a) list_setting_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_setting_pane_vc

0x6309,	// (0x0001562a) list_single_graphic_heading_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_single_graphic_heading_pane_vc

0x6309,	// (0x0001562a) list_single_heading_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_single_heading_pane_vc

0x6309,	// (0x0001562a) list_single_number_heading_pane_vc_ParamLimits

0x6309,	// (0x0001562a) list_single_number_heading_pane_vc

0x690d,	// (0x00015c2e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x690d,	// (0x00015c2e) list_double_graphic_heading_pane_vc_g1

0x6919,	// (0x00015c3a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6919,	// (0x00015c3a) list_double_graphic_heading_pane_vc_g2

0x6925,	// (0x00015c46) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6925,	// (0x00015c46) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001ed0a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001ed0a) list_double_graphic_heading_pane_vc_g

0x6931,	// (0x00015c52) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6931,	// (0x00015c52) list_double_graphic_heading_pane_vc_t1

0x694d,	// (0x00015c6e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x694d,	// (0x00015c6e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001ed11) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001ed11) list_double_graphic_heading_pane_vc_t

0x4c9a,	// (0x00013fbb) list_setting_pane_vc_g1_ParamLimits

0x4c9a,	// (0x00013fbb) list_setting_pane_vc_g1

0x4ca6,	// (0x00013fc7) list_setting_pane_vc_g2_ParamLimits

0x4ca6,	// (0x00013fc7) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eb00) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eb00) list_setting_pane_vc_g

0x6b5d,	// (0x00015e7e) list_setting_pane_vc_t1_ParamLimits

0x6b5d,	// (0x00015e7e) list_setting_pane_vc_t1

0x6b77,	// (0x00015e98) list_setting_pane_vc_t2_ParamLimits

0x6b77,	// (0x00015e98) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0001ed54) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0001ed54) list_setting_pane_vc_t

0x4d08,	// (0x00014029) set_value_pane_cp_vc_ParamLimits

0x4d08,	// (0x00014029) set_value_pane_cp_vc

0x2fe7,	// (0x00012308) list_single_number_heading_pane_vc_g1_ParamLimits

0x2fe7,	// (0x00012308) list_single_number_heading_pane_vc_g1

0x2ff3,	// (0x00012314) list_single_number_heading_pane_vc_g2_ParamLimits

0x2ff3,	// (0x00012314) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_single_number_heading_pane_vc_g

0x4c68,	// (0x00013f89) list_single_number_heading_pane_vc_t1_ParamLimits

0x4c68,	// (0x00013f89) list_single_number_heading_pane_vc_t1

0x6b8f,	// (0x00015eb0) list_single_number_heading_pane_vc_t2_ParamLimits

0x6b8f,	// (0x00015eb0) list_single_number_heading_pane_vc_t2

0x304f,	// (0x00012370) list_single_number_heading_pane_vc_t3_ParamLimits

0x304f,	// (0x00012370) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0001ed59) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001ed59) list_single_number_heading_pane_vc_t

0x3061,	// (0x00012382) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3061,	// (0x00012382) list_single_graphic_heading_pane_vc_g1

0x2fe7,	// (0x00012308) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2fe7,	// (0x00012308) list_single_graphic_heading_pane_vc_g4

0x2ff3,	// (0x00012314) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2ff3,	// (0x00012314) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001eada) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eada) list_single_graphic_heading_pane_vc_g

0x4c68,	// (0x00013f89) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4c68,	// (0x00013f89) list_single_graphic_heading_pane_vc_t1

0x6ba3,	// (0x00015ec4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6ba3,	// (0x00015ec4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0001ed60) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0001ed60) list_single_graphic_heading_pane_vc_t

0x2fe7,	// (0x00012308) list_double2_pane_vc_g1_ParamLimits

0x2fe7,	// (0x00012308) list_double2_pane_vc_g1

0x2ff3,	// (0x00012314) list_double2_pane_vc_g2_ParamLimits

0x2ff3,	// (0x00012314) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_double2_pane_vc_g

0x62a6,	// (0x000155c7) list_double2_pane_vc_t1_ParamLimits

0x62a6,	// (0x000155c7) list_double2_pane_vc_t1

0x6bb7,	// (0x00015ed8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6bb7,	// (0x00015ed8) list_double2_large_graphic_pane_vc_g1

0x6bc3,	// (0x00015ee4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6bc3,	// (0x00015ee4) list_double2_large_graphic_pane_vc_g2

0x6bcf,	// (0x00015ef0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6bcf,	// (0x00015ef0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001e906) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001e906) list_double2_large_graphic_pane_vc_g

0x6bdb,	// (0x00015efc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6bdb,	// (0x00015efc) list_double2_large_graphic_pane_vc_t1

0x6bf1,	// (0x00015f12) list_double_time_pane_vc_g1_ParamLimits

0x6bf1,	// (0x00015f12) list_double_time_pane_vc_g1

0x6bfd,	// (0x00015f1e) list_double_time_pane_vc_g2_ParamLimits

0x6bfd,	// (0x00015f1e) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0001ed65) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0001ed65) list_double_time_pane_vc_g

0x6c09,	// (0x00015f2a) list_double_time_pane_vc_t1_ParamLimits

0x6c09,	// (0x00015f2a) list_double_time_pane_vc_t1

0x6c27,	// (0x00015f48) list_double_time_pane_vc_t2_ParamLimits

0x6c27,	// (0x00015f48) list_double_time_pane_vc_t2

0x6c51,	// (0x00015f72) list_double_time_pane_vc_t3_ParamLimits

0x6c51,	// (0x00015f72) list_double_time_pane_vc_t3

0x6c63,	// (0x00015f84) list_double_time_pane_vc_t4_ParamLimits

0x6c63,	// (0x00015f84) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0001ed6a) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0001ed6a) list_double_time_pane_vc_t

0x2fe7,	// (0x00012308) list_double_pane_vc_g1_ParamLimits

0x2fe7,	// (0x00012308) list_double_pane_vc_g1

0x2ff3,	// (0x00012314) list_double_pane_vc_g2_ParamLimits

0x2ff3,	// (0x00012314) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_double_pane_vc_g

0x6c77,	// (0x00015f98) list_double_pane_vc_t1_ParamLimits

0x6c77,	// (0x00015f98) list_double_pane_vc_t1

0x6c89,	// (0x00015faa) list_double_pane_vc_t2_ParamLimits

0x6c89,	// (0x00015faa) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0001ed73) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0001ed73) list_double_pane_vc_t

0x2fe7,	// (0x00012308) list_double_number_pane_vc_g1_ParamLimits

0x2fe7,	// (0x00012308) list_double_number_pane_vc_g1

0x2ff3,	// (0x00012314) list_double_number_pane_vc_g2_ParamLimits

0x2ff3,	// (0x00012314) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8e9) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8e9) list_double_number_pane_vc_g

0x6ca1,	// (0x00015fc2) list_double_number_pane_vc_t1_ParamLimits

0x6ca1,	// (0x00015fc2) list_double_number_pane_vc_t1

0x6cb3,	// (0x00015fd4) list_double_number_pane_vc_t2_ParamLimits

0x6cb3,	// (0x00015fd4) list_double_number_pane_vc_t2

0x6cc5,	// (0x00015fe6) list_double_number_pane_vc_t3_ParamLimits

0x6cc5,	// (0x00015fe6) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0001ed78) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0001ed78) list_double_number_pane_vc_t

0x6cdd,	// (0x00015ffe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6cdd,	// (0x00015ffe) list_double_large_graphic_pane_vc_g1

0x6cf9,	// (0x0001601a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6cf9,	// (0x0001601a) list_double_large_graphic_pane_vc_g2

0x6d0d,	// (0x0001602e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6d0d,	// (0x0001602e) list_double_large_graphic_pane_vc_g3

0x6d1c,	// (0x0001603d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6d1c,	// (0x0001603d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0001ed7f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0001ed7f) list_double_large_graphic_pane_vc_g

0x6d2b,	// (0x0001604c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6d2b,	// (0x0001604c) list_double_large_graphic_pane_vc_t1

0x6d45,	// (0x00016066) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6d45,	// (0x00016066) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0001ed88) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0001ed88) list_double_large_graphic_pane_vc_t

0x6919,	// (0x00015c3a) list_double_heading_pane_vc_g1_ParamLimits

0x6919,	// (0x00015c3a) list_double_heading_pane_vc_g1

0x6925,	// (0x00015c46) list_double_heading_pane_vc_g2_ParamLimits

0x6925,	// (0x00015c46) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x0001ed8d) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x0001ed8d) list_double_heading_pane_vc_g

0x6d67,	// (0x00016088) list_double_heading_pane_vc_t1_ParamLimits

0x6d67,	// (0x00016088) list_double_heading_pane_vc_t1

0x4c68,	// (0x00013f89) list_double_heading_pane_vc_t2_ParamLimits

0x4c68,	// (0x00013f89) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001ed92) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001ed92) list_double_heading_pane_vc_t

0x6d7b,	// (0x0001609c) list_double_graphic_pane_vc_g1_ParamLimits

0x6d7b,	// (0x0001609c) list_double_graphic_pane_vc_g1

0x6d87,	// (0x000160a8) list_double_graphic_pane_vc_g2_ParamLimits

0x6d87,	// (0x000160a8) list_double_graphic_pane_vc_g2

0x2fe7,	// (0x00012308) list_double_graphic_pane_vc_g3_ParamLimits

0x2fe7,	// (0x00012308) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0001ed97) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0001ed97) list_double_graphic_pane_vc_g

0x6da4,	// (0x000160c5) list_double_graphic_pane_vc_t1_ParamLimits

0x6da4,	// (0x000160c5) list_double_graphic_pane_vc_t1

0x6dc2,	// (0x000160e3) list_double_graphic_pane_vc_t2_ParamLimits

0x6dc2,	// (0x000160e3) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0001eda0) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001eda0) list_double_graphic_pane_vc_t

0x01d9,	// (0x0000f4fa) aid_size_cell_fastswap

0xb757,	// (0x0001aa78) aid_size_cell_touch_ParamLimits

0xb757,	// (0x0001aa78) aid_size_cell_touch

0x0446,	// (0x0000f767) popup_fast_swap_wide_window_ParamLimits

0x0446,	// (0x0000f767) popup_fast_swap_wide_window

0xb907,	// (0x0001ac28) touch_pane_ParamLimits

0xb907,	// (0x0001ac28) touch_pane

0x34a5,	// (0x000127c6) button_value_adjust_pane_cp2

0x34a5,	// (0x000127c6) button_value_adjust_pane_cp4

0x34c5,	// (0x000127e6) form_field_data_pane_cp2

0xcff3,	// (0x0001c314) form_field_data_wide_pane_cp2

0x3b47,	// (0x00012e68) bg_scroll_pane_ParamLimits

0x07dc,	// (0x0000fafd) scroll_handle_pane_ParamLimits

0x07f0,	// (0x0000fb11) scroll_sc2_down_pane_ParamLimits

0x07f0,	// (0x0000fb11) scroll_sc2_down_pane

0x3b78,	// (0x00012e99) scroll_sc2_up_pane_ParamLimits

0x3b78,	// (0x00012e99) scroll_sc2_up_pane

0xdf84,	// (0x0001d2a5) grid_wheel_folder_pane_g1_ParamLimits

0xdf84,	// (0x0001d2a5) grid_wheel_folder_pane_g1

0x09ac,	// (0x0000fccd) clock_nsta_pane_cp2_ParamLimits

0x09ac,	// (0x0000fccd) clock_nsta_pane_cp2

0x4704,	// (0x00013a25) listscroll_midp_pane_ParamLimits

0xd3b9,	// (0x0001c6da) midp_canvas_pane

0x46ae,	// (0x000139cf) nsta_clock_indic_pane

0x46ea,	// (0x00013a0b) listscroll_form_pane_vc

0x46f2,	// (0x00013a13) listscroll_set_pane_vc_ParamLimits

0x46f2,	// (0x00013a13) listscroll_set_pane_vc

0xd662,	// (0x0001c983) clock_nsta_pane

0xd68c,	// (0x0001c9ad) indicator_nsta_pane

0x4b48,	// (0x00013e69) bg_popup_sub_pane_cp2_ParamLimits

0x4b5c,	// (0x00013e7d) find_pane_cp2_ParamLimits

0x4b5c,	// (0x00013e7d) find_pane_cp2

0x4b72,	// (0x00013e93) grid_toobar_pane_ParamLimits

0x4d18,	// (0x00014039) list_form_gen_pane_vc_ParamLimits

0x4d18,	// (0x00014039) list_form_gen_pane_vc

0x4d2e,	// (0x0001404f) scroll_pane_cp8_vc_ParamLimits

0x4d2e,	// (0x0001404f) scroll_pane_cp8_vc

0x4daa,	// (0x000140cb) data_form_wide_pane_vc_ParamLimits

0x4daa,	// (0x000140cb) data_form_wide_pane_vc

0x4db6,	// (0x000140d7) form_field_data_wide_pane_vc_g1

0x4dbe,	// (0x000140df) form_field_data_wide_pane_vc_t1_ParamLimits

0x4dbe,	// (0x000140df) form_field_data_wide_pane_vc_t1

0x357f,	// (0x000128a0) input_focus_pane_cp6_vc_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_cp6_vc

0xda2c,	// (0x0001cd4d) list_midp_pane_ParamLimits

0x657f,	// (0x000158a0) scroll_pane_cp16_ParamLimits

0x657f,	// (0x000158a0) scroll_pane_cp16

0x519b,	// (0x000144bc) button_value_adjust_pane_ParamLimits

0x519b,	// (0x000144bc) button_value_adjust_pane

0xdbda,	// (0x0001cefb) button_value_adjust_pane_cp6_ParamLimits

0xdbda,	// (0x0001cefb) button_value_adjust_pane_cp6

0xdcf0,	// (0x0001d011) settings_code_pane_cp_ParamLimits

0xdcf0,	// (0x0001d011) settings_code_pane_cp

0x26d6,	// (0x000119f7) cell_touch_pane_g1

0x26d6,	// (0x000119f7) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ea1f) cell_touch_pane_g

0xde72,	// (0x0001d193) cell_touch_pane_cp_ParamLimits

0xde72,	// (0x0001d193) cell_touch_pane_cp

0xde8e,	// (0x0001d1af) cell_touch_pane_ParamLimits

0xde8e,	// (0x0001d1af) cell_touch_pane

0x26d6,	// (0x000119f7) scroll_sc2_down_pane_g1

0x26d6,	// (0x000119f7) scroll_sc2_up_pane_g1

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp4_vc

0x6965,	// (0x00015c86) list_set_graphic_pane_vc_g1_ParamLimits

0x6965,	// (0x00015c86) list_set_graphic_pane_vc_g1

0x31ac,	// (0x000124cd) list_set_graphic_pane_vc_g2_ParamLimits

0x31ac,	// (0x000124cd) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001ed16) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001ed16) list_set_graphic_pane_vc_g

0x6971,	// (0x00015c92) text_primary_small_cp13_vc_ParamLimits

0x6971,	// (0x00015c92) text_primary_small_cp13_vc

0x6989,	// (0x00015caa) list_set_graphic_pane_vc_ParamLimits

0x6989,	// (0x00015caa) list_set_graphic_pane_vc

0x26e0,	// (0x00011a01) input_focus_pane_cp2_vc

0x26d6,	// (0x000119f7) setting_code_pane_vc_g1

0x280b,	// (0x00011b2c) setting_code_pane_vc_t1

0x699d,	// (0x00015cbe) set_text_pane_vc_t1_ParamLimits

0x699d,	// (0x00015cbe) set_text_pane_vc_t1

0x26e0,	// (0x00011a01) input_focus_pane_cp1_vc

0x69ba,	// (0x00015cdb) list_set_text_pane_vc

0x26d6,	// (0x000119f7) setting_text_pane_vc_g1

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp2_vc

0x2802,	// (0x00011b23) setting_slider_graphic_pane_vc_g1

0x69c4,	// (0x00015ce5) setting_slider_graphic_pane_vc_t1

0x69d4,	// (0x00015cf5) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001ed1b) setting_slider_graphic_pane_vc_t

0x69e4,	// (0x00015d05) slider_set_pane_cp_vc

0x69ec,	// (0x00015d0d) slider_set_pane_vc_g1

0x69f5,	// (0x00015d16) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001ed20) slider_set_pane_vc_g

0x36ac,	// (0x000129cd) set_opt_bg_pane_g1_copy1

0x36b4,	// (0x000129d5) set_opt_bg_pane_g2_copy1

0x6a21,	// (0x00015d42) set_opt_bg_pane_g3_copy1

0x36c4,	// (0x000129e5) set_opt_bg_pane_g4_copy1

0x36cc,	// (0x000129ed) set_opt_bg_pane_g5_copy1

0x36d4,	// (0x000129f5) set_opt_bg_pane_g6_copy1

0x6a29,	// (0x00015d4a) set_opt_bg_pane_g7_copy1

0x6a33,	// (0x00015d54) set_opt_bg_pane_g8_copy1

0x6a3b,	// (0x00015d5c) set_opt_bg_pane_g9_copy1

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp_vc

0x6a43,	// (0x00015d64) setting_slider_pane_vc_t1

0x6a52,	// (0x00015d73) setting_slider_pane_vc_t2

0x6a62,	// (0x00015d83) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001ed2f) setting_slider_pane_vc_t

0x6a72,	// (0x00015d93) slider_set_pane_vc

0x138e,	// (0x000106af) volume_set_pane_vc_g1

0x167d,	// (0x0001099e) volume_set_pane_vc_g2

0x1686,	// (0x000109a7) volume_set_pane_vc_g3

0x168f,	// (0x000109b0) volume_set_pane_vc_g4

0x1698,	// (0x000109b9) volume_set_pane_vc_g5

0x16a1,	// (0x000109c2) volume_set_pane_vc_g6

0x13bb,	// (0x000106dc) volume_set_pane_vc_g7

0x16aa,	// (0x000109cb) volume_set_pane_vc_g8

0x16b3,	// (0x000109d4) volume_set_pane_vc_g9

0x16bc,	// (0x000109dd) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x0001ed36) volume_set_pane_vc_g

0x6a7a,	// (0x00015d9b) volume_set_pane_vc

0x6a82,	// (0x00015da3) button_value_adjust_pane_cp1_vc

0x6a8c,	// (0x00015dad) list_highlight_pane_cp2_vc

0x6a95,	// (0x00015db6) list_set_pane_vc_ParamLimits

0x6a95,	// (0x00015db6) list_set_pane_vc

0x6af3,	// (0x00015e14) main_pane_set_vc_t1_ParamLimits

0x6af3,	// (0x00015e14) main_pane_set_vc_t1

0x6b08,	// (0x00015e29) main_pane_set_vc_t2_ParamLimits

0x6b08,	// (0x00015e29) main_pane_set_vc_t2

0x6b1a,	// (0x00015e3b) main_pane_set_vc_t3_ParamLimits

0x6b1a,	// (0x00015e3b) main_pane_set_vc_t3

0x6b2c,	// (0x00015e4d) main_pane_set_vc_t4_ParamLimits

0x6b2c,	// (0x00015e4d) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x0001ed4b) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x0001ed4b) main_pane_set_vc_t

0x6b3e,	// (0x00015e5f) setting_code_pane_vc_ParamLimits

0x6b3e,	// (0x00015e5f) setting_code_pane_vc

0x6b4d,	// (0x00015e6e) setting_slider_graphic_pane_vc

0x6b4d,	// (0x00015e6e) setting_slider_pane_vc

0x6b4d,	// (0x00015e6e) setting_text_pane_vc

0x6b4d,	// (0x00015e6e) setting_volume_pane_vc

0x6b55,	// (0x00015e76) scroll_pane_cp121_vc

0x3493,	// (0x000127b4) set_content_pane_vc

0x6dec,	// (0x0001610d) button_value_adjust_pane_g1

0x6df5,	// (0x00016116) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0001eda5) button_value_adjust_pane_g

0x6dfe,	// (0x0001611f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6dfe,	// (0x0001611f) form_field_slider_wide_pane_vc_t1

0x6e12,	// (0x00016133) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e12,	// (0x00016133) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0001edaa) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0001edaa) form_field_slider_wide_pane_vc_t

0x2a55,	// (0x00011d76) input_focus_pane_cp10_vc_ParamLimits

0x2a55,	// (0x00011d76) input_focus_pane_cp10_vc

0x6e3e,	// (0x0001615f) slider_cont_pane_cp1_vc_ParamLimits

0x6e3e,	// (0x0001615f) slider_cont_pane_cp1_vc

0x6e4e,	// (0x0001616f) slider_form_pane_g1_cp2

0x69f5,	// (0x00015d16) slider_form_pane_g2_cp2

0x6e7b,	// (0x0001619c) form_field_slider_pane_vc_t3

0x6e89,	// (0x000161aa) form_field_slider_pane_vc_t4

0x6e97,	// (0x000161b8) slider_form_pane_vc_ParamLimits

0x6e97,	// (0x000161b8) slider_form_pane_vc

0x6ea4,	// (0x000161c5) form_field_slider_pane_vc_t1_ParamLimits

0x6ea4,	// (0x000161c5) form_field_slider_pane_vc_t1

0x6e12,	// (0x00016133) form_field_slider_pane_vc_t2_ParamLimits

0x6e12,	// (0x00016133) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0001edbc) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001edbc) form_field_slider_pane_vc_t

0x2a55,	// (0x00011d76) input_focus_pane_cp9_vc_ParamLimits

0x2a55,	// (0x00011d76) input_focus_pane_cp9_vc

0x6ec0,	// (0x000161e1) slider_cont_pane_vc_ParamLimits

0x6ec0,	// (0x000161e1) slider_cont_pane_vc

0x6ed2,	// (0x000161f3) list_form_graphic_pane_cp_vc_ParamLimits

0x6ed2,	// (0x000161f3) list_form_graphic_pane_cp_vc

0x4db6,	// (0x000140d7) form_field_popup_wide_pane_vc_g1

0x6ee7,	// (0x00016208) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ee7,	// (0x00016208) form_field_popup_wide_pane_vc_t1

0x357f,	// (0x000128a0) input_focus_pane_cp8_vc_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_cp8_vc

0x6f2c,	// (0x0001624d) list_form_wide_pane_vc_ParamLimits

0x6f2c,	// (0x0001624d) list_form_wide_pane_vc

0x6f38,	// (0x00016259) list_form_graphic_pane_vc_g1

0x6f40,	// (0x00016261) list_form_graphic_pane_vc_t1_ParamLimits

0x6f40,	// (0x00016261) list_form_graphic_pane_vc_t1

0x27c0,	// (0x00011ae1) list_highlight_pane_cp5_vc_ParamLimits

0x27c0,	// (0x00011ae1) list_highlight_pane_cp5_vc

0x6f5c,	// (0x0001627d) list_form_graphic_pane_vc_ParamLimits

0x6f5c,	// (0x0001627d) list_form_graphic_pane_vc

0x4db6,	// (0x000140d7) form_field_popup_pane_vc_g1

0x6f72,	// (0x00016293) form_field_popup_pane_vc_t1_ParamLimits

0x6f72,	// (0x00016293) form_field_popup_pane_vc_t1

0x357f,	// (0x000128a0) input_focus_pane_cp7_vc_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_cp7_vc

0x6f89,	// (0x000162aa) list_form_pane_vc_ParamLimits

0x6f89,	// (0x000162aa) list_form_pane_vc

0x6f95,	// (0x000162b6) data_form_pane_vc_t1_ParamLimits

0x6f95,	// (0x000162b6) data_form_pane_vc_t1

0x36ac,	// (0x000129cd) input_focus_pane_vc_g1

0x36b4,	// (0x000129d5) input_focus_pane_vc_g2

0x36bc,	// (0x000129dd) input_focus_pane_vc_g3

0x36c4,	// (0x000129e5) input_focus_pane_vc_g4

0x36cc,	// (0x000129ed) input_focus_pane_vc_g5

0x36d4,	// (0x000129f5) input_focus_pane_vc_g6

0x36dc,	// (0x000129fd) input_focus_pane_vc_g7

0x36e4,	// (0x00012a05) input_focus_pane_vc_g8

0x36ec,	// (0x00012a0d) input_focus_pane_vc_g9

0x26d6,	// (0x000119f7) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001e9a8) input_focus_pane_vc_g

0x4daa,	// (0x000140cb) data_form_pane_vc_ParamLimits

0x4daa,	// (0x000140cb) data_form_pane_vc

0x4db6,	// (0x000140d7) form_field_data_pane_vc_g1

0x6fb0,	// (0x000162d1) form_field_data_pane_vc_t1_ParamLimits

0x6fb0,	// (0x000162d1) form_field_data_pane_vc_t1

0x357f,	// (0x000128a0) input_focus_pane_vc_ParamLimits

0x357f,	// (0x000128a0) input_focus_pane_vc

0x6fca,	// (0x000162eb) button_value_adjust_pane_cp3_vc

0x6fd2,	// (0x000162f3) button_value_adjust_pane_cp5_vc

0x6fda,	// (0x000162fb) form_field_data_pane_vc_ParamLimits

0x6fda,	// (0x000162fb) form_field_data_pane_vc

0x6ff1,	// (0x00016312) form_field_data_pane_vc_cp2

0x6ff9,	// (0x0001631a) form_field_data_wide_pane_vc_ParamLimits

0x6ff9,	// (0x0001631a) form_field_data_wide_pane_vc

0x700f,	// (0x00016330) form_field_data_wide_pane_vc_cp2

0x7017,	// (0x00016338) form_field_popup_pane_vc_ParamLimits

0x7017,	// (0x00016338) form_field_popup_pane_vc

0x702e,	// (0x0001634f) form_field_popup_wide_pane_vc_ParamLimits

0x702e,	// (0x0001634f) form_field_popup_wide_pane_vc

0x7044,	// (0x00016365) form_field_slider_pane_vc_ParamLimits

0x7044,	// (0x00016365) form_field_slider_pane_vc

0x7057,	// (0x00016378) form_field_slider_wide_pane_vc_ParamLimits

0x7057,	// (0x00016378) form_field_slider_wide_pane_vc

0xdeac,	// (0x0001d1cd) grid_touch_1_pane_ParamLimits

0xdeac,	// (0x0001d1cd) grid_touch_1_pane

0xdec0,	// (0x0001d1e1) grid_touch_2_pane_ParamLimits

0xdec0,	// (0x0001d1e1) grid_touch_2_pane

0x7125,	// (0x00016446) touch_pane_g1_ParamLimits

0x7125,	// (0x00016446) touch_pane_g1

0x708e,	// (0x000163af) cell_app_pane_cp_wide_ParamLimits

0x708e,	// (0x000163af) cell_app_pane_cp_wide

0x709f,	// (0x000163c0) grid_popup_fast_wide_pane_ParamLimits

0x709f,	// (0x000163c0) grid_popup_fast_wide_pane

0x70b3,	// (0x000163d4) scroll_pane_cp19_ParamLimits

0x70b3,	// (0x000163d4) scroll_pane_cp19

0x26e0,	// (0x00011a01) bg_popup_window_pane_cp20

0x70c7,	// (0x000163e8) listscroll_popup_fast_wide_pane

0x38a0,	// (0x00012bc1) grid_indicator_nsta_pane

0x70cf,	// (0x000163f0) clock_nsta_pane_g1

0x70d8,	// (0x000163f9) clock_nsta_pane_t1

0xdeea,	// (0x0001d20b) cell_indicator_nsta_pane_ParamLimits

0xdeea,	// (0x0001d20b) cell_indicator_nsta_pane

0x7125,	// (0x00016446) cell_indicator_nsta_pane_g1

0xdf01,	// (0x0001d222) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0001edcd) cell_indicator_nsta_pane_g

0x7140,	// (0x00016461) clock_nsta_pane_cp

0x7148,	// (0x00016469) indicator_nsta_pane_cp

0x7150,	// (0x00016471) nsta_clock_indic_pane_g1

0x28a3,	// (0x00011bc4) grid_indicator_pane

0x3c6d,	// (0x00012f8e) scroll_pane_cp29

0x08fb,	// (0x0000fc1c) indicator_nsta_pane_cp2_ParamLimits

0x08fb,	// (0x0000fc1c) indicator_nsta_pane_cp2

0x27c0,	// (0x00011ae1) main_apps_wheel_pane

0x5026,	// (0x00014347) form_midp_field_text_pane_ParamLimits

0x516d,	// (0x0001448e) scroll_bar_cp050_ParamLimits

0x71b1,	// (0x000164d2) cell_indicator_pane_ParamLimits

0x71b1,	// (0x000164d2) cell_indicator_pane

0x71cc,	// (0x000164ed) cell_indicator_pane_g1

0xdf0e,	// (0x0001d22f) grid_wheel_folder_pane_ParamLimits

0xdf0e,	// (0x0001d22f) grid_wheel_folder_pane

0xdf1c,	// (0x0001d23d) list_wheel_apps_pane_ParamLimits

0xdf1c,	// (0x0001d23d) list_wheel_apps_pane

0xdf2a,	// (0x0001d24b) main_apps_wheel_pane_g1_ParamLimits

0xdf2a,	// (0x0001d24b) main_apps_wheel_pane_g1

0xdf36,	// (0x0001d257) main_apps_wheel_pane_g2_ParamLimits

0xdf36,	// (0x0001d257) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0001ede9) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0001ede9) main_apps_wheel_pane_g

0xdf44,	// (0x0001d265) main_apps_wheel_pane_t1_ParamLimits

0xdf44,	// (0x0001d265) main_apps_wheel_pane_t1

0xdf58,	// (0x0001d279) list_wheel_apps_pane_g1

0xdf60,	// (0x0001d281) list_wheel_apps_pane_g2

0xdf68,	// (0x0001d289) list_wheel_apps_pane_g3

0xdf70,	// (0x0001d291) list_wheel_apps_pane_g4

0xdf7a,	// (0x0001d29b) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0001edee) list_wheel_apps_pane_g

0x424e,	// (0x0001356f) navi_icon_text_pane

0xd556,	// (0x0001c877) aid_fill_nsta

0x7293,	// (0x000165b4) navi_icon_text_pane_g1

0x729f,	// (0x000165c0) navi_icon_text_pane_t1

0xd398,	// (0x0001c6b9) list_set_graphic_pane_t1_ParamLimits

0xd398,	// (0x0001c6b9) list_set_graphic_pane_t1

0x58bf,	// (0x00014be0) popup_midp_note_alarm_window_t6_ParamLimits

0x58bf,	// (0x00014be0) popup_midp_note_alarm_window_t6

0x58d1,	// (0x00014bf2) popup_midp_note_alarm_window_t7_ParamLimits

0x58d1,	// (0x00014bf2) popup_midp_note_alarm_window_t7

0x58e3,	// (0x00014c04) popup_midp_note_alarm_window_t8_ParamLimits

0x58e3,	// (0x00014c04) popup_midp_note_alarm_window_t8

0x58f5,	// (0x00014c16) popup_midp_note_alarm_window_t9_ParamLimits

0x58f5,	// (0x00014c16) popup_midp_note_alarm_window_t9

0x5907,	// (0x00014c28) popup_midp_note_alarm_window_t10_ParamLimits

0x5907,	// (0x00014c28) popup_midp_note_alarm_window_t10

0x5919,	// (0x00014c3a) popup_midp_note_alarm_window_t11_ParamLimits

0x5919,	// (0x00014c3a) popup_midp_note_alarm_window_t11

0x592b,	// (0x00014c4c) scroll_pane_cp17_ParamLimits

0x592b,	// (0x00014c4c) scroll_pane_cp17

0x138e,	// (0x000106af) volume_small_pane_cp_g1

0x16c5,	// (0x000109e6) volume_small_pane_cp_g2

0x16ce,	// (0x000109ef) volume_small_pane_cp_g3

0x13a0,	// (0x000106c1) volume_small_pane_cp_g4

0x16d7,	// (0x000109f8) volume_small_pane_cp_g5

0x1698,	// (0x000109b9) volume_small_pane_cp_g6

0x13b2,	// (0x000106d3) volume_small_pane_cp_g7

0x16e0,	// (0x00010a01) volume_small_pane_cp_g8

0x16e9,	// (0x00010a0a) volume_small_pane_cp_g9

0x13c4,	// (0x000106e5) volume_small_pane_cp_g10

0x4497,	// (0x000137b8) midp_ticker_pane_g1_ParamLimits

0x44a3,	// (0x000137c4) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001ea74) midp_ticker_pane_g_ParamLimits

0x44af,	// (0x000137d0) midp_ticker_pane_t1_ParamLimits

0xd57a,	// (0x0001c89b) aid_fill_nsta_2

0x5159,	// (0x0001447a) list_form2_midp_pane

0x62bc,	// (0x000155dd) midp_editing_number_pane_ParamLimits

0x62cb,	// (0x000155ec) midp_ticker_pane_ParamLimits

0x72b1,	// (0x000165d2) form2_midp_field_pane

0x72d5,	// (0x000165f6) scroll_pane_cp51

0x72f5,	// (0x00016616) form2_midp_button_pane_ParamLimits

0x72f5,	// (0x00016616) form2_midp_button_pane

0x7307,	// (0x00016628) form2_midp_content_pane_ParamLimits

0x7307,	// (0x00016628) form2_midp_content_pane

0x7321,	// (0x00016642) form2_midp_field_choice_group_pane

0x7329,	// (0x0001664a) form2_midp_field_pane_g1

0x7331,	// (0x00016652) form2_midp_field_pane_g2

0x7339,	// (0x0001665a) form2_midp_field_pane_g3

0x7341,	// (0x00016662) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0001ee13) form2_midp_field_pane_g

0x7349,	// (0x0001666a) form2_midp_gauge_slider_pane

0x7351,	// (0x00016672) form2_midp_gauge_wait_pane

0x7359,	// (0x0001667a) form2_midp_image_pane_ParamLimits

0x7359,	// (0x0001667a) form2_midp_image_pane

0x7374,	// (0x00016695) form2_midp_label_pane_ParamLimits

0x7374,	// (0x00016695) form2_midp_label_pane

0xdfad,	// (0x0001d2ce) form2_midp_label_pane_cp_ParamLimits

0xdfad,	// (0x0001d2ce) form2_midp_label_pane_cp

0x73ae,	// (0x000166cf) form2_midp_string_pane_ParamLimits

0x73ae,	// (0x000166cf) form2_midp_string_pane

0x73c0,	// (0x000166e1) form2_midp_text_pane_ParamLimits

0x73c0,	// (0x000166e1) form2_midp_text_pane

0x73db,	// (0x000166fc) form2_midp_time_pane

0x73eb,	// (0x0001670c) input_focus_pane_cp51_ParamLimits

0x73eb,	// (0x0001670c) input_focus_pane_cp51

0x7403,	// (0x00016724) form2_midp_label_pane_t1_ParamLimits

0x7403,	// (0x00016724) form2_midp_label_pane_t1

0x7443,	// (0x00016764) form2_mdip_text_pane_t1_ParamLimits

0x7443,	// (0x00016764) form2_mdip_text_pane_t1

0x745f,	// (0x00016780) form2_midp_time_pane_t1

0x747a,	// (0x0001679b) form2_midp_gauge_slider_pane_t1

0xdfce,	// (0x0001d2ef) form2_midp_gauge_slider_pane_t2

0xdfe2,	// (0x0001d303) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0001ee1c) form2_midp_gauge_slider_pane_t

0x74b0,	// (0x000167d1) form2_midp_slider_pane

0x74bc,	// (0x000167dd) form2_midp_gauge_wait_pane_t1

0x74ca,	// (0x000167eb) form2_midp_wait_pane_ParamLimits

0x74ca,	// (0x000167eb) form2_midp_wait_pane

0xdff6,	// (0x0001d317) list_single_2graphic_pane_cp4_ParamLimits

0xdff6,	// (0x0001d317) list_single_2graphic_pane_cp4

0xd998,	// (0x0001ccb9) list_single_midp_graphic_pane_cp_ParamLimits

0xd998,	// (0x0001ccb9) list_single_midp_graphic_pane_cp

0x26e0,	// (0x00011a01) list_highlight_pane_cp20

0x7524,	// (0x00016845) list_single_2graphic_pane_g1_cp4

0x67f1,	// (0x00015b12) list_single_2graphic_pane_g2_cp4

0x752c,	// (0x0001684d) list_single_2graphic_pane_t1_cp4

0x27c0,	// (0x00011ae1) list_highlight_pane_cp21

0x753b,	// (0x0001685c) list_single_midp_graphic_pane_g4_cp

0x754a,	// (0x0001686b) list_single_midp_graphic_pane_t1_cp

0xe00c,	// (0x0001d32d) form2_mdip_string_pane_t1_ParamLimits

0xe00c,	// (0x0001d32d) form2_mdip_string_pane_t1

0x26e0,	// (0x00011a01) bg_wml_button_pane_cp2

0x26d6,	// (0x000119f7) form2_midp_image_pane_g1

0x326f,	// (0x00012590) list_double_large_graphic_pane_g5_ParamLimits

0x326f,	// (0x00012590) list_double_large_graphic_pane_g5

0x4704,	// (0x00013a25) midp_form_pane_ParamLimits

0x27c0,	// (0x00011ae1) main_apps_wheel_pane_ParamLimits

0xbec8,	// (0x0001b1e9) popup_preview_window_ParamLimits

0xbec8,	// (0x0001b1e9) popup_preview_window

0x118f,	// (0x000104b0) popup_touch_info_window_ParamLimits

0x118f,	// (0x000104b0) popup_touch_info_window

0x11ad,	// (0x000104ce) popup_touch_menu_window_ParamLimits

0x11ad,	// (0x000104ce) popup_touch_menu_window

0x26cc,	// (0x000119ed) bg_popup_sub_pane_cp6

0x7682,	// (0x000169a3) list_touch_menu_pane

0x768a,	// (0x000169ab) list_single_touch_menu_pane_ParamLimits

0x768a,	// (0x000169ab) list_single_touch_menu_pane

0x769e,	// (0x000169bf) list_single_touch_menu_pane_t1

0x27c0,	// (0x00011ae1) bg_popup_sub_pane_cp7_ParamLimits

0x27c0,	// (0x00011ae1) bg_popup_sub_pane_cp7

0x76ac,	// (0x000169cd) heading_sub_pane

0x76b4,	// (0x000169d5) list_touch_info_pane_ParamLimits

0x76b4,	// (0x000169d5) list_touch_info_pane

0x76c3,	// (0x000169e4) list_single_touch_info_pane_ParamLimits

0x76c3,	// (0x000169e4) list_single_touch_info_pane

0x76d5,	// (0x000169f6) list_single_touch_info_pane_t1

0x76e3,	// (0x00016a04) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0001ee2a) list_single_touch_info_pane_t

0x43c2,	// (0x000136e3) bg_popup_heading_pane_cp

0x76f1,	// (0x00016a12) heading_sub_pane_t1

0x4d44,	// (0x00014065) bg_popup_preview_window_pane_cp_ParamLimits

0x4d44,	// (0x00014065) bg_popup_preview_window_pane_cp

0x76ac,	// (0x000169cd) heading_preview_pane

0x76b4,	// (0x000169d5) list_preview_pane_ParamLimits

0x76b4,	// (0x000169d5) list_preview_pane

0x76ff,	// (0x00016a20) popup_preview_window_g1

0x76c3,	// (0x000169e4) list_single_preview_pane_ParamLimits

0x76c3,	// (0x000169e4) list_single_preview_pane

0x7707,	// (0x00016a28) list_single_preview_pane_g1

0x770f,	// (0x00016a30) list_single_preview_pane_t1

0x76d5,	// (0x000169f6) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0001ee2f) list_single_preview_pane_t

0x771d,	// (0x00016a3e) bg_popup_heading_pane_cp2_ParamLimits

0x771d,	// (0x00016a3e) bg_popup_heading_pane_cp2

0x7733,	// (0x00016a54) heading_preview_pane_g1

0x773b,	// (0x00016a5c) heading_preview_pane_t1_ParamLimits

0x773b,	// (0x00016a5c) heading_preview_pane_t1

0x28c6,	// (0x00011be7) soft_indicator_pane_t1_ParamLimits

0x2fa7,	// (0x000122c8) scroll_pane_ParamLimits

0x3b66,	// (0x00012e87) scroll_sc2_left_pane

0x3b6f,	// (0x00012e90) scroll_sc2_right_pane

0x3b8e,	// (0x00012eaf) scroll_bg_pane_g1_ParamLimits

0x3ba3,	// (0x00012ec4) scroll_bg_pane_g2_ParamLimits

0x3bbb,	// (0x00012edc) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001e9ff) scroll_bg_pane_g_ParamLimits

0x3b8e,	// (0x00012eaf) scroll_handle_pane_g1_ParamLimits

0x3bdd,	// (0x00012efe) scroll_handle_pane_g2_ParamLimits

0x3bbb,	// (0x00012edc) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001ea06) scroll_handle_pane_g_ParamLimits

0x0c5f,	// (0x0000ff80) popup_choice_list_window_ParamLimits

0x0c5f,	// (0x0000ff80) popup_choice_list_window

0x4b54,	// (0x00013e75) choice_list_pane

0x4bec,	// (0x00013f0d) cell_toolbar_pane_t1

0x4c14,	// (0x00013f35) toolbar_button_pane_ParamLimits

0x5de5,	// (0x00015106) ai_gene_pane_1_t2_ParamLimits

0x5de5,	// (0x00015106) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001ec29) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001ec29) ai_gene_pane_1_t

0x7758,	// (0x00016a79) scroll_sc2_left_pane_g1

0x7758,	// (0x00016a79) scroll_sc2_right_pane_g1

0x4704,	// (0x00013a25) bg_popup_sub_pane_cp10

0x7762,	// (0x00016a83) list_choice_list_pane

0x777b,	// (0x00016a9c) list_single_choice_list_pane_ParamLimits

0x777b,	// (0x00016a9c) list_single_choice_list_pane

0x778e,	// (0x00016aaf) list_single_choice_list_pane_g1

0x3871,	// (0x00012b92) list_single_choice_list_pane_t1_ParamLimits

0x3871,	// (0x00012b92) list_single_choice_list_pane_t1

0x7796,	// (0x00016ab7) choice_list_pane_g1

0x779e,	// (0x00016abf) choice_list_pane_t1

0x26cc,	// (0x000119ed) input_focus_pane_cp11

0x3a45,	// (0x00012d66) title_pane_stacon_g2_ParamLimits

0x3a45,	// (0x00012d66) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001e9e5) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001e9e5) title_pane_stacon_g

0x43c2,	// (0x000136e3) cursor_press_pane

0xbb81,	// (0x0001aea2) popup_fep_hwr_window_ParamLimits

0xbb81,	// (0x0001aea2) popup_fep_hwr_window

0x0d7f,	// (0x000100a0) popup_fep_vkb_window_ParamLimits

0x0d7f,	// (0x000100a0) popup_fep_vkb_window

0x77ac,	// (0x00016acd) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0001ee58) fep_vkb_side_pane_g_ParamLimits

0x172b,	// (0x00010a4c) fep_hwr_candidate_pane_ParamLimits

0x172b,	// (0x00010a4c) fep_hwr_candidate_pane

0x1755,	// (0x00010a76) fep_hwr_side_pane_ParamLimits

0x1755,	// (0x00010a76) fep_hwr_side_pane

0x1775,	// (0x00010a96) fep_hwr_top_pane_ParamLimits

0x1775,	// (0x00010a96) fep_hwr_top_pane

0x178d,	// (0x00010aae) fep_hwr_write_pane_ParamLimits

0x178d,	// (0x00010aae) fep_hwr_write_pane

0xfb37,	// (0x0001ee58) fep_vkb_side_pane_g

0x77b4,	// (0x00016ad5) fep_hwr_top_pane_g1

0x77c6,	// (0x00016ae7) fep_hwr_top_pane_g2

0x17c7,	// (0x00010ae8) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0001ee34) fep_hwr_top_pane_g

0x17dc,	// (0x00010afd) fep_hwr_top_text_pane

0x3d33,	// (0x00013054) fep_hwr_top_text_pane_g1

0x77fc,	// (0x00016b1d) fep_hwr_top_text_pane_t1

0x18d2,	// (0x00010bf3) fep_hwr_candidate_pane_g1

0x7a3f,	// (0x00016d60) fep_vkb_keypad_pane_g3_ParamLimits

0x7a3f,	// (0x00016d60) fep_vkb_keypad_pane_g3

0x7a67,	// (0x00016d88) fep_vkb_keypad_pane_g4_ParamLimits

0x7a67,	// (0x00016d88) fep_vkb_keypad_pane_g4

0x7ad6,	// (0x00016df7) fep_vkb_bottom_pane_g2_ParamLimits

0x7ad6,	// (0x00016df7) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0001ee5f) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0001ee5f) fep_vkb_bottom_pane_g

0x7758,	// (0x00016a79) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0001ee69) cell_vkb_side_pane_g

0x7b61,	// (0x00016e82) cell_vkb_side_pane_t1

0x7b6f,	// (0x00016e90) cell_vkb_side_pane_t1_copy1

0x7758,	// (0x00016a79) bg_fep_vkb_candidate_pane_g2

0x7c9b,	// (0x00016fbc) cell_vkb_candidate_pane_ParamLimits

0x780a,	// (0x00016b2b) aid_size_cell_vkb_ParamLimits

0x780a,	// (0x00016b2b) aid_size_cell_vkb

0x7c9b,	// (0x00016fbc) cell_vkb_candidate_pane

0x18f9,	// (0x00010c1a) bg_popup_fep_shadow_pane_g1

0xe09c,	// (0x0001d3bd) fep_vkb_bottom_pane_ParamLimits

0xe09c,	// (0x0001d3bd) fep_vkb_bottom_pane

0x78cc,	// (0x00016bed) fep_vkb_candidate_pane_ParamLimits

0x78cc,	// (0x00016bed) fep_vkb_candidate_pane

0xe0c1,	// (0x0001d3e2) fep_vkb_keypad_pane_ParamLimits

0xe0c1,	// (0x0001d3e2) fep_vkb_keypad_pane

0xe0f6,	// (0x0001d417) fep_vkb_side_pane_ParamLimits

0xe0f6,	// (0x0001d417) fep_vkb_side_pane

0xe132,	// (0x0001d453) fep_vkb_top_pane_ParamLimits

0xe132,	// (0x0001d453) fep_vkb_top_pane

0x7998,	// (0x00016cb9) fep_vkb_top_pane_g1_ParamLimits

0x7998,	// (0x00016cb9) fep_vkb_top_pane_g1

0x79a7,	// (0x00016cc8) fep_vkb_top_pane_g2_ParamLimits

0x79a7,	// (0x00016cc8) fep_vkb_top_pane_g2

0x79b6,	// (0x00016cd7) fep_vkb_top_pane_g3_ParamLimits

0x79b6,	// (0x00016cd7) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0001ee4f) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0001ee4f) fep_vkb_top_pane_g

0x79d4,	// (0x00016cf5) fep_vkb_top_text_pane_ParamLimits

0x79d4,	// (0x00016cf5) fep_vkb_top_text_pane

0xe167,	// (0x0001d488) fep_vkb_side_pane_g1_ParamLimits

0xe167,	// (0x0001d488) fep_vkb_side_pane_g1

0x7a2e,	// (0x00016d4f) grid_vkb_side_pane_ParamLimits

0x7a2e,	// (0x00016d4f) grid_vkb_side_pane

0x1901,	// (0x00010c22) bg_popup_fep_shadow_pane_g2

0x190a,	// (0x00010c2b) bg_popup_fep_shadow_pane_g3

0x1912,	// (0x00010c33) bg_popup_fep_shadow_pane_g4

0x191b,	// (0x00010c3c) bg_popup_fep_shadow_pane_g5

0x1925,	// (0x00010c46) bg_popup_fep_shadow_pane_g6

0x192d,	// (0x00010c4e) bg_popup_fep_shadow_pane_g7

0x36c4,	// (0x000129e5) bg_popup_fep_shadow_pane_g8

0x7a85,	// (0x00016da6) grid_vkb_keypad_number_pane_ParamLimits

0x7a85,	// (0x00016da6) grid_vkb_keypad_number_pane

0x7a95,	// (0x00016db6) grid_vkb_keypad_pane_ParamLimits

0x7a95,	// (0x00016db6) grid_vkb_keypad_pane

0x7abb,	// (0x00016ddc) fep_vkb_bottom_pane_g1_ParamLimits

0x7abb,	// (0x00016ddc) fep_vkb_bottom_pane_g1

0x7ae4,	// (0x00016e05) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ae4,	// (0x00016e05) grid_vkb_keypad_bottom_left_pane

0x7af9,	// (0x00016e1a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7af9,	// (0x00016e1a) grid_vkb_keypad_bottom_right_pane

0x7b0e,	// (0x00016e2f) fep_vkb_top_text_pane_g1

0xe1ae,	// (0x0001d4cf) fep_vkb_top_text_pane_t1

0xe1c0,	// (0x0001d4e1) cell_vkb_side_pane_ParamLimits

0xe1c0,	// (0x0001d4e1) cell_vkb_side_pane

0x7758,	// (0x00016a79) cell_vkb_side_pane_g1

0x7b7d,	// (0x00016e9e) cell_vkb_keypad_pane_ParamLimits

0x7b7d,	// (0x00016e9e) cell_vkb_keypad_pane

0x7bf2,	// (0x00016f13) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0001ee7c) bg_popup_fep_shadow_pane_g

0x193f,	// (0x00010c60) cell_hwr_side_pane_g1

0x193f,	// (0x00010c60) cell_hwr_side_pane_g2

0x7bfc,	// (0x00016f1d) cell_vkb_keypad_pane_t1

0xe1d6,	// (0x0001d4f7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe1d6,	// (0x0001d4f7) cell_vkb_keypad_bottom_left_pane

0xe1eb,	// (0x0001d50c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe1eb,	// (0x0001d50c) cell_vkb_keypad_bottom_right_pane

0x7758,	// (0x00016a79) cell_vkb_keypad_bottom_left_pane_g1

0x7758,	// (0x00016a79) cell_vkb_keypad_bottom_right_pane_g1

0x7c60,	// (0x00016f81) cell_vkb_keypad_number_pane_ParamLimits

0x7c60,	// (0x00016f81) cell_vkb_keypad_number_pane

0x7c7f,	// (0x00016fa0) cell_vkb_keypad_number_pane_g1

0x7c89,	// (0x00016faa) cell_vkb_keypad_number_pane_g2

0x7c92,	// (0x00016fb3) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0001ee6e) cell_vkb_keypad_number_pane_g

0x7bfc,	// (0x00016f1d) cell_vkb_keypad_number_pane_t1

0x7cb6,	// (0x00016fd7) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0001ee8f) cell_hwr_side_pane_g

0x7ccf,	// (0x00016ff0) cell_hwr_side_pane_t1

0x1949,	// (0x00010c6a) cell_hwr_side_pane_t1_copy1

0x1957,	// (0x00010c78) cell_hwr_candidate_pane_g1

0x1986,	// (0x00010ca7) cell_hwr_candidate_pane_t1

0x7758,	// (0x00016a79) cell_vkb_candidate_pane_g2

0x7d13,	// (0x00017034) cell_vkb_candidate_pane_t1

0x16f2,	// (0x00010a13) bg_popup_fep_shadow_pane_ParamLimits

0x16f2,	// (0x00010a13) bg_popup_fep_shadow_pane

0x17a7,	// (0x00010ac8) bg_fep_hwr_top_pane_g4

0x77d8,	// (0x00016af9) bg_hwr_side_pane_g1_ParamLimits

0x77d8,	// (0x00016af9) bg_hwr_side_pane_g1

0xc2ed,	// (0x0001b60e) cell_hwr_side_pane_ParamLimits

0xc2ed,	// (0x0001b60e) cell_hwr_side_pane

0x1853,	// (0x00010b74) fep_hwr_write_pane_g1_ParamLimits

0x1853,	// (0x00010b74) fep_hwr_write_pane_g1

0x1860,	// (0x00010b81) fep_hwr_write_pane_g2_ParamLimits

0x1860,	// (0x00010b81) fep_hwr_write_pane_g2

0x186d,	// (0x00010b8e) fep_hwr_write_pane_g3_ParamLimits

0x186d,	// (0x00010b8e) fep_hwr_write_pane_g3

0xc30d,	// (0x0001b62e) fep_hwr_write_pane_g4_ParamLimits

0xc30d,	// (0x0001b62e) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0001ee3b) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0001ee3b) fep_hwr_write_pane_g

0x17a7,	// (0x00010ac8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x17a7,	// (0x00010ac8) bg_fep_hwr_candidate_pane_g2

0x1890,	// (0x00010bb1) cell_hwr_candidate_pane_ParamLimits

0x1890,	// (0x00010bb1) cell_hwr_candidate_pane

0x18d2,	// (0x00010bf3) fep_hwr_candidate_pane_g1_ParamLimits

0x7838,	// (0x00016b59) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7838,	// (0x00016b59) bg_popup_fep_shadow_pane_cp2

0x79c6,	// (0x00016ce7) fep_vkb_top_pane_g4_ParamLimits

0x79c6,	// (0x00016ce7) fep_vkb_top_pane_g4

0x7a0c,	// (0x00016d2d) fep_vkb_side_pane_g2_ParamLimits

0x7a0c,	// (0x00016d2d) fep_vkb_side_pane_g2

0xcf21,	// (0x0001c242) list_setting_pane_t4_ParamLimits

0xcf21,	// (0x0001c242) list_setting_pane_t4

0xcf9b,	// (0x0001c2bc) list_setting_number_pane_t5_ParamLimits

0xcf9b,	// (0x0001c2bc) list_setting_number_pane_t5

0xd262,	// (0x0001c583) list_double_heading_pane_cp2_ParamLimits

0xd262,	// (0x0001c583) list_double_heading_pane_cp2

0x31f8,	// (0x00012519) list_double_heading_pane_g1_cp2_ParamLimits

0x31f8,	// (0x00012519) list_double_heading_pane_g1_cp2

0x35a5,	// (0x000128c6) list_double_heading_pane_g2_cp2_ParamLimits

0x35a5,	// (0x000128c6) list_double_heading_pane_g2_cp2

0x7d21,	// (0x00017042) list_double_heading_pane_t1_cp2_ParamLimits

0x7d21,	// (0x00017042) list_double_heading_pane_t1_cp2

0x7d37,	// (0x00017058) list_double_heading_pane_t2_cp2_ParamLimits

0x7d37,	// (0x00017058) list_double_heading_pane_t2_cp2

0x26b4,	// (0x000119d5) aid_value_unit2

0x0492,	// (0x0000f7b3) popup_preview_fixed_window

0x2a63,	// (0x00011d84) bg_popup_preview_window_pane_cp02

0x7d49,	// (0x0001706a) list_preview_fixed_pane

0x7d8f,	// (0x000170b0) list_empty_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_empty_pane_fp

0x7d8f,	// (0x000170b0) list_single_cale_day_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_single_cale_day_pane_fp

0x7d8f,	// (0x000170b0) list_single_graphic_heading_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_single_graphic_heading_pane_fp

0x7d8f,	// (0x000170b0) list_single_graphic_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_single_graphic_pane_fp

0x7d8f,	// (0x000170b0) list_single_heading_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_single_heading_pane_fp

0x7d8f,	// (0x000170b0) list_single_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_single_pane_fp

0x7da5,	// (0x000170c6) list_single_pane_fp_g1_ParamLimits

0x7da5,	// (0x000170c6) list_single_pane_fp_g1

0x31f8,	// (0x00012519) list_single_pane_fp_g2_ParamLimits

0x31f8,	// (0x00012519) list_single_pane_fp_g2

0x35a5,	// (0x000128c6) list_single_pane_fp_g3_ParamLimits

0x35a5,	// (0x000128c6) list_single_pane_fp_g3

0x7db1,	// (0x000170d2) list_single_pane_fp_g4_ParamLimits

0x7db1,	// (0x000170d2) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0001eea2) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0001eea2) list_single_pane_fp_g

0x7dbd,	// (0x000170de) list_single_pane_fp_t1_ParamLimits

0x7dbd,	// (0x000170de) list_single_pane_fp_t1

0x7dd4,	// (0x000170f5) list_single_graphic_pane_fp_g1_ParamLimits

0x7dd4,	// (0x000170f5) list_single_graphic_pane_fp_g1

0x7da5,	// (0x000170c6) list_single_graphic_pane_fp_g2_ParamLimits

0x7da5,	// (0x000170c6) list_single_graphic_pane_fp_g2

0x31f8,	// (0x00012519) list_single_graphic_pane_fp_g3_ParamLimits

0x31f8,	// (0x00012519) list_single_graphic_pane_fp_g3

0x35a5,	// (0x000128c6) list_single_graphic_pane_fp_g4_ParamLimits

0x35a5,	// (0x000128c6) list_single_graphic_pane_fp_g4

0x7db1,	// (0x000170d2) list_single_graphic_pane_fp_g5_ParamLimits

0x7db1,	// (0x000170d2) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001eeab) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001eeab) list_single_graphic_pane_fp_g

0x7de0,	// (0x00017101) list_single_graphic_pane_fp_t1_ParamLimits

0x7de0,	// (0x00017101) list_single_graphic_pane_fp_t1

0x7dd4,	// (0x000170f5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7dd4,	// (0x000170f5) list_single_graphic_heading_pane_fp_g1

0x7da5,	// (0x000170c6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7da5,	// (0x000170c6) list_single_graphic_heading_pane_fp_g2

0x31f8,	// (0x00012519) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x31f8,	// (0x00012519) list_single_graphic_heading_pane_fp_g3

0x35a5,	// (0x000128c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x35a5,	// (0x000128c6) list_single_graphic_heading_pane_fp_g4

0x7db1,	// (0x000170d2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7db1,	// (0x000170d2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001eeab) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001eeab) list_single_graphic_heading_pane_fp_g

0x7df6,	// (0x00017117) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7df6,	// (0x00017117) list_single_graphic_heading_pane_fp_t1

0x7e0c,	// (0x0001712d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7e0c,	// (0x0001712d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0001eeb6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0001eeb6) list_single_graphic_heading_pane_fp_t

0x7e1e,	// (0x0001713f) list_single_cale_day_pane_fp_g1_ParamLimits

0x7e1e,	// (0x0001713f) list_single_cale_day_pane_fp_g1

0x7e56,	// (0x00017177) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e56,	// (0x00017177) list_single_cale_day_pane_fp_g2

0x7e62,	// (0x00017183) list_single_cale_day_pane_fp_g3_ParamLimits

0x7e62,	// (0x00017183) list_single_cale_day_pane_fp_g3

0x7e8a,	// (0x000171ab) list_single_cale_day_pane_fp_g4_ParamLimits

0x7e8a,	// (0x000171ab) list_single_cale_day_pane_fp_g4

0x7eae,	// (0x000171cf) list_single_cale_day_pane_fp_g5_ParamLimits

0x7eae,	// (0x000171cf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001eebb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001eebb) list_single_cale_day_pane_fp_g

0x7ed2,	// (0x000171f3) list_single_cale_day_pane_fp_t1_ParamLimits

0x7ed2,	// (0x000171f3) list_single_cale_day_pane_fp_t1

0x7ef8,	// (0x00017219) list_single_cale_day_pane_fp_t2_ParamLimits

0x7ef8,	// (0x00017219) list_single_cale_day_pane_fp_t2

0x7f11,	// (0x00017232) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f11,	// (0x00017232) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0001eec6) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0001eec6) list_single_cale_day_pane_fp_t

0x7da5,	// (0x000170c6) list_empty_pane_fp_g1_ParamLimits

0x7da5,	// (0x000170c6) list_empty_pane_fp_g1

0x7f2a,	// (0x0001724b) list_empty_pane_fp_t1

0x7f38,	// (0x00017259) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0001eecd) list_empty_pane_fp_t

0x7da5,	// (0x000170c6) list_single_heading_pane_fp_g1_ParamLimits

0x7da5,	// (0x000170c6) list_single_heading_pane_fp_g1

0x31f8,	// (0x00012519) list_single_heading_pane_fp_g2_ParamLimits

0x31f8,	// (0x00012519) list_single_heading_pane_fp_g2

0x35a5,	// (0x000128c6) list_single_heading_pane_fp_g3_ParamLimits

0x35a5,	// (0x000128c6) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0001eed2) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0001eed2) list_single_heading_pane_fp_g

0x7f46,	// (0x00017267) list_single_heading_pane_fp_t1_ParamLimits

0x7f46,	// (0x00017267) list_single_heading_pane_fp_t1

0x7f58,	// (0x00017279) list_single_heading_pane_fp_t2_ParamLimits

0x7f58,	// (0x00017279) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0001eed9) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0001eed9) list_single_heading_pane_fp_t

0x38df,	// (0x00012c00) aid_size_cell_fast

0x29d3,	// (0x00011cf4) soft_indicator_pane_cp1_t1

0x3919,	// (0x00012c3a) cell_app_pane_cp2_ParamLimits

0x3919,	// (0x00012c3a) cell_app_pane_cp2

0x1714,	// (0x00010a35) fep_hwr_candidate_drop_down_list_pane

0x18ec,	// (0x00010c0d) fep_hwr_candidate_pane_g3_ParamLimits

0x18ec,	// (0x00010c0d) fep_hwr_candidate_pane_g3

0xedb2,	// (0x0001e0d3) fep_hwr_candidate_pane_g4_ParamLimits

0xedb2,	// (0x0001e0d3) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0001ee48) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0001ee48) fep_hwr_candidate_pane_g

0x78bb,	// (0x00016bdc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78bb,	// (0x00016bdc) fep_vkb_candidate_drop_down_list_pane

0x7cbe,	// (0x00016fdf) fep_vkb_candidate_pane_g3

0x7cc6,	// (0x00016fe7) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0001ee75) fep_vkb_candidate_pane_g

0x1957,	// (0x00010c78) cell_hwr_candidate_pane_g1_ParamLimits

0x1965,	// (0x00010c86) cell_hwr_candidate_pane_g3_ParamLimits

0x1965,	// (0x00010c86) cell_hwr_candidate_pane_g3

0x9e5d,	// (0x0001917e) cell_hwr_candidate_pane_g4_ParamLimits

0x9e5d,	// (0x0001917e) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0001ee94) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0001ee94) cell_hwr_candidate_pane_g

0x7cdd,	// (0x00016ffe) cell_vkb_candidate_pane_g3_ParamLimits

0x7cdd,	// (0x00016ffe) cell_vkb_candidate_pane_g3

0x7cf8,	// (0x00017019) cell_vkb_candidate_pane_g4_ParamLimits

0x7cf8,	// (0x00017019) cell_vkb_candidate_pane_g4

0x7f6e,	// (0x0001728f) cell_app_pane_cp2_g1_ParamLimits

0x7f6e,	// (0x0001728f) cell_app_pane_cp2_g1

0x7f8c,	// (0x000172ad) cell_app_pane_cp2_g2_ParamLimits

0x7f8c,	// (0x000172ad) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0001eede) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0001eede) cell_app_pane_cp2_g

0x7f98,	// (0x000172b9) cell_app_pane_cp2_t1_ParamLimits

0x7f98,	// (0x000172b9) cell_app_pane_cp2_t1

0x357f,	// (0x000128a0) grid_highlight_pane_cp1_ParamLimits

0x357f,	// (0x000128a0) grid_highlight_pane_cp1

0x19a4,	// (0x00010cc5) cell_hwr_candidate_pane_cp1_ParamLimits

0x19a4,	// (0x00010cc5) cell_hwr_candidate_pane_cp1

0x1957,	// (0x00010c78) fep_hwr_candidate_drop_down_list_pane_g1

0x19c3,	// (0x00010ce4) fep_hwr_candidate_drop_down_list_pane_g2

0x19d0,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0001eee3) fep_hwr_candidate_drop_down_list_pane_g

0x19dd,	// (0x00010cfe) fep_hwr_candidate_drop_down_list_scroll_pane

0x19e6,	// (0x00010d07) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x19e6,	// (0x00010d07) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x19f3,	// (0x00010d14) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x19f3,	// (0x00010d14) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1a00,	// (0x00010d21) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1a00,	// (0x00010d21) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1a0d,	// (0x00010d2e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1a0d,	// (0x00010d2e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1a28,	// (0x00010d49) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1a28,	// (0x00010d49) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1a43,	// (0x00010d64) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a43,	// (0x00010d64) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a5e,	// (0x00010d7f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a5e,	// (0x00010d7f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1a79,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1a79,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0001eeea) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0001eeea) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7faa,	// (0x000172cb) cell_vkb_candidate_pane_cp1_ParamLimits

0x7faa,	// (0x000172cb) cell_vkb_candidate_pane_cp1

0x79c6,	// (0x00016ce7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x79c6,	// (0x00016ce7) fep_vkb_candidate_drop_down_list_pane_g1

0x7fca,	// (0x000172eb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7fca,	// (0x000172eb) fep_vkb_candidate_drop_down_list_pane_g2

0x7fd7,	// (0x000172f8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7fd7,	// (0x000172f8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0001eefb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0001eefb) fep_vkb_candidate_drop_down_list_pane_g

0x7fe4,	// (0x00017305) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7fe4,	// (0x00017305) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ff1,	// (0x00017312) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ff1,	// (0x00017312) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ffe,	// (0x0001731f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ffe,	// (0x0001731f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x800a,	// (0x0001732b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x800a,	// (0x0001732b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8016,	// (0x00017337) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8016,	// (0x00017337) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8037,	// (0x00017358) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8037,	// (0x00017358) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8058,	// (0x00017379) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8058,	// (0x00017379) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8079,	// (0x0001739a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8079,	// (0x0001739a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x809a,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x809a,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0001ef02) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0001ef02) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc910,	// (0x0001bc31) title_pane_g1_ParamLimits

0xc923,	// (0x0001bc44) title_pane_g2_ParamLimits

0xf54e,	// (0x0001e86f) title_pane_g_ParamLimits

0x3d23,	// (0x00013044) aid_call2_pane

0x3d2b,	// (0x0001304c) aid_call_pane

0x3d33,	// (0x00013054) popup_clock_analogue_window_g1

0x3d33,	// (0x00013054) popup_clock_analogue_window_g2

0x0805,	// (0x0000fb26) popup_clock_analogue_window_g3

0x080e,	// (0x0000fb2f) popup_clock_analogue_window_g4

0x26d6,	// (0x000119f7) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ea14) popup_clock_analogue_window_g

0x0816,	// (0x0000fb37) popup_clock_analogue_window_t1

0x0824,	// (0x0000fb45) clock_digital_number_pane_ParamLimits

0x0824,	// (0x0000fb45) clock_digital_number_pane

0x0830,	// (0x0000fb51) clock_digital_number_pane_cp02_ParamLimits

0x0830,	// (0x0000fb51) clock_digital_number_pane_cp02

0x083c,	// (0x0000fb5d) clock_digital_number_pane_cp03_ParamLimits

0x083c,	// (0x0000fb5d) clock_digital_number_pane_cp03

0x0848,	// (0x0000fb69) clock_digital_number_pane_cp04_ParamLimits

0x0848,	// (0x0000fb69) clock_digital_number_pane_cp04

0x0854,	// (0x0000fb75) clock_digital_separator_pane_ParamLimits

0x0854,	// (0x0000fb75) clock_digital_separator_pane

0x0860,	// (0x0000fb81) popup_clock_digital_window_t1_ParamLimits

0x0860,	// (0x0000fb81) popup_clock_digital_window_t1

0x26d6,	// (0x000119f7) clock_digital_number_pane_g1

0x26d6,	// (0x000119f7) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ea1f) clock_digital_number_pane_g

0x26d6,	// (0x000119f7) clock_digital_separator_pane_g1

0x26d6,	// (0x000119f7) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ea1f) clock_digital_separator_pane_g

0xd556,	// (0x0001c877) aid_fill_nsta_ParamLimits

0xd68c,	// (0x0001c9ad) indicator_nsta_pane_ParamLimits

0x49e9,	// (0x00013d0a) popup_clock_analogue_window

0x49e9,	// (0x00013d0a) popup_clock_digital_window

0x38a0,	// (0x00012bc1) grid_indicator_nsta_pane_ParamLimits

0x70e6,	// (0x00016407) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0001edc8) clock_nsta_pane_t

0x07c9,	// (0x0000faea) aid_size_max_handle

0x07d3,	// (0x0000faf4) aid_size_min_handle

0x43c2,	// (0x000136e3) editor_scroll_pane

0x80b5,	// (0x000173d6) ex_editor_pane

0x384d,	// (0x00012b6e) scroll_pane_cp13

0x2fd3,	// (0x000122f4) scroll_pane_cp14

0x3d62,	// (0x00013083) scroll_pane_cp36

0xd273,	// (0x0001c594) list_single_graphic_hl_pane_cp2_ParamLimits

0xd273,	// (0x0001c594) list_single_graphic_hl_pane_cp2

0xdd84,	// (0x0001d0a5) list_single_graphic_hl_pane_ParamLimits

0xdd84,	// (0x0001d0a5) list_single_graphic_hl_pane

0x80bd,	// (0x000173de) aid_size_min_hl_cp1

0x80c6,	// (0x000173e7) list_highlight_pane_cp34_ParamLimits

0x80c6,	// (0x000173e7) list_highlight_pane_cp34

0x80d7,	// (0x000173f8) list_single_graphic_hl_pane_g1_ParamLimits

0x80d7,	// (0x000173f8) list_single_graphic_hl_pane_g1

0xe206,	// (0x0001d527) list_single_graphic_hl_pane_g2_ParamLimits

0xe206,	// (0x0001d527) list_single_graphic_hl_pane_g2

0xe206,	// (0x0001d527) list_single_graphic_hl_pane_g3_ParamLimits

0xe206,	// (0x0001d527) list_single_graphic_hl_pane_g3

0x4333,	// (0x00013654) list_single_graphic_hl_pane_g4_ParamLimits

0x4333,	// (0x00013654) list_single_graphic_hl_pane_g4

0xe212,	// (0x0001d533) list_single_graphic_hl_pane_g5_ParamLimits

0xe212,	// (0x0001d533) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0001ef13) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0001ef13) list_single_graphic_hl_pane_g

0xe226,	// (0x0001d547) list_single_graphic_hl_pane_t1_ParamLimits

0xe226,	// (0x0001d547) list_single_graphic_hl_pane_t1

0x811a,	// (0x0001743b) aid_size_min_hl_cp2

0x8123,	// (0x00017444) list_highlight_pane_cp34_cp2_ParamLimits

0x8123,	// (0x00017444) list_highlight_pane_cp34_cp2

0x80d7,	// (0x000173f8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x80d7,	// (0x000173f8) list_single_graphic_hl_pane_g1_cp2

0x8130,	// (0x00017451) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8130,	// (0x00017451) list_single_graphic_hl_pane_g2_cp2

0x813c,	// (0x0001745d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x813c,	// (0x0001745d) list_single_graphic_hl_pane_g3_cp2

0x2fe7,	// (0x00012308) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2fe7,	// (0x00012308) list_single_graphic_hl_pane_g4_cp2

0x814a,	// (0x0001746b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x814a,	// (0x0001746b) list_single_graphic_hl_pane_g5_cp2

0xb9af,	// (0x0001acd0) control_pane_g4_ParamLimits

0xb9af,	// (0x0001acd0) control_pane_g4

0x4704,	// (0x00013a25) bg_popup_sub_pane_cp10_ParamLimits

0x7762,	// (0x00016a83) list_choice_list_pane_ParamLimits

0x7771,	// (0x00016a92) scroll_pane_cp23

0x2a63,	// (0x00011d84) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d49,	// (0x0001706a) list_preview_fixed_pane_ParamLimits

0x7d5f,	// (0x00017080) list_preview_fixed_pane_cp_ParamLimits

0x7d5f,	// (0x00017080) list_preview_fixed_pane_cp

0x7d6b,	// (0x0001708c) popup_preview_fixed_window_g1_ParamLimits

0x7d6b,	// (0x0001708c) popup_preview_fixed_window_g1

0x7d77,	// (0x00017098) popup_preview_fixed_window_g2_ParamLimits

0x7d77,	// (0x00017098) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0001ee9b) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0001ee9b) popup_preview_fixed_window_g

0x073d,	// (0x0000fa5e) aid_navi_side_left_pane_ParamLimits

0x0752,	// (0x0000fa73) aid_navi_side_right_pane_ParamLimits

0x076a,	// (0x0000fa8b) navi_icon_pane_stacon_ParamLimits

0x077e,	// (0x0000fa9f) navi_navi_pane_stacon_ParamLimits

0x076a,	// (0x0000fa8b) navi_text_pane_stacon_ParamLimits

0x0361,	// (0x0000f682) main_text_info_pane

0x8174,	// (0x00017495) listscroll_text_info_pane

0x817c,	// (0x0001749d) list_text_info_pane_ParamLimits

0x817c,	// (0x0001749d) list_text_info_pane

0x818b,	// (0x000174ac) scroll_pane_cp24_ParamLimits

0x818b,	// (0x000174ac) scroll_pane_cp24

0xe23c,	// (0x0001d55d) list_text_info_pane_t1_ParamLimits

0xe23c,	// (0x0001d55d) list_text_info_pane_t1

0xbaf6,	// (0x0001ae17) popup_fast_swap2_window_ParamLimits

0xbaf6,	// (0x0001ae17) popup_fast_swap2_window

0x81de,	// (0x000174ff) aid_size_cell_fast2

0x26cc,	// (0x000119ed) bg_popup_window_pane_cp17

0x5185,	// (0x000144a6) heading_pane_cp2

0x2ca6,	// (0x00011fc7) listscroll_fast2_pane

0x81e8,	// (0x00017509) grid_fast2_pane

0x81f2,	// (0x00017513) listscroll_fast2_pane_g1

0x81fa,	// (0x0001751b) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0001ef1e) listscroll_fast2_pane_g

0x384d,	// (0x00012b6e) scroll_pane_cp26

0x8204,	// (0x00017525) cell_fast2_pane_ParamLimits

0x8204,	// (0x00017525) cell_fast2_pane

0x8219,	// (0x0001753a) cell_fast2_pane_g1

0x8222,	// (0x00017543) cell_fast2_pane_g2

0x822b,	// (0x0001754c) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0001ef23) cell_fast2_pane_g

0x2d90,	// (0x000120b1) grid_highlight_pane_cp9

0x0c43,	// (0x0000ff64) main_eswt_pane_ParamLimits

0x0c43,	// (0x0000ff64) main_eswt_pane

0x81a0,	// (0x000174c1) list_single_text_info_pane

0x8233,	// (0x00017554) eswt_ctrl_button_pane

0x8233,	// (0x00017554) eswt_ctrl_canvas_pane

0x823b,	// (0x0001755c) eswt_ctrl_combo_pane

0x8233,	// (0x00017554) eswt_ctrl_default_pane

0x8233,	// (0x00017554) eswt_ctrl_label_pane

0x8243,	// (0x00017564) eswt_ctrl_wait_pane

0x824b,	// (0x0001756c) eswt_shell_pane

0x26cc,	// (0x000119ed) listscroll_eswt_app_pane

0x826b,	// (0x0001758c) popup_eswt_tasktip_window_ParamLimits

0x826b,	// (0x0001758c) popup_eswt_tasktip_window

0x4d44,	// (0x00014065) bg_popup_window_pane_cp18

0x827c,	// (0x0001759d) eswt_control_pane_g1_ParamLimits

0x827c,	// (0x0001759d) eswt_control_pane_g1

0x8289,	// (0x000175aa) eswt_control_pane_g2_ParamLimits

0x8289,	// (0x000175aa) eswt_control_pane_g2

0x8296,	// (0x000175b7) eswt_control_pane_g3_ParamLimits

0x8296,	// (0x000175b7) eswt_control_pane_g3

0x82a3,	// (0x000175c4) eswt_control_pane_g4_ParamLimits

0x82a3,	// (0x000175c4) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0001ef2a) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0001ef2a) eswt_control_pane_g

0x357f,	// (0x000128a0) bg_button_pane_ParamLimits

0x357f,	// (0x000128a0) bg_button_pane

0x2da5,	// (0x000120c6) common_borders_pane_copy2_ParamLimits

0x2da5,	// (0x000120c6) common_borders_pane_copy2

0x82b0,	// (0x000175d1) control_button_pane_g1_ParamLimits

0x82b0,	// (0x000175d1) control_button_pane_g1

0x82bc,	// (0x000175dd) control_button_pane_g2_ParamLimits

0x82bc,	// (0x000175dd) control_button_pane_g2

0x82c8,	// (0x000175e9) control_button_pane_g3_ParamLimits

0x82c8,	// (0x000175e9) control_button_pane_g3

0x0002,

0xfc12,	// (0x0001ef33) control_button_pane_g_ParamLimits

0xfc12,	// (0x0001ef33) control_button_pane_g

0x82dc,	// (0x000175fd) control_button_pane_t1

0x82ea,	// (0x0001760b) control_button_pane_t2

0x0001,

0xfc19,	// (0x0001ef3a) control_button_pane_t

0x4c20,	// (0x00013f41) bg_button_pane_g1

0x4c30,	// (0x00013f51) bg_button_pane_g2

0x4c28,	// (0x00013f49) bg_button_pane_g3

0x4c40,	// (0x00013f61) bg_button_pane_g4

0x4c38,	// (0x00013f59) bg_button_pane_g5

0x4c48,	// (0x00013f69) bg_button_pane_g6

0x4c50,	// (0x00013f71) bg_button_pane_g7

0x4c60,	// (0x00013f81) bg_button_pane_g8

0x4c58,	// (0x00013f79) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001eb7d) bg_button_pane_g

0x771d,	// (0x00016a3e) common_borders_pane_ParamLimits

0x771d,	// (0x00016a3e) common_borders_pane

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy1_ParamLimits

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy1

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy1_ParamLimits

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy1

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy1_ParamLimits

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy1

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy1_ParamLimits

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy1

0x7758,	// (0x00016a79) bg_eswt_ctrl_canvas_pane_g1

0x771d,	// (0x00016a3e) common_borders_pane_cp2_ParamLimits

0x771d,	// (0x00016a3e) common_borders_pane_cp2

0x771d,	// (0x00016a3e) common_borders_pane_cp3_ParamLimits

0x771d,	// (0x00016a3e) common_borders_pane_cp3

0x82f8,	// (0x00017619) separator_horizontal_pane

0x8300,	// (0x00017621) separator_vertical_pane

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy2_ParamLimits

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy2

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy2_ParamLimits

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy2

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy2_ParamLimits

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy2

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy2_ParamLimits

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy2

0x26cc,	// (0x000119ed) common_borders_pane_cp4

0x8309,	// (0x0001762a) separator_horizontal_pane_g1

0x8312,	// (0x00017633) separator_horizontal_pane_g2

0x831b,	// (0x0001763c) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0001ef3f) separator_horizontal_pane_g

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy3_ParamLimits

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy3

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy3_ParamLimits

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy3

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy3_ParamLimits

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy3

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy3_ParamLimits

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy3

0x26cc,	// (0x000119ed) common_borders_pane_cp5

0x8324,	// (0x00017645) separator_vertical_pane_g1

0x832d,	// (0x0001764e) separator_vertical_pane_g2

0x8336,	// (0x00017657) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0001ef46) separator_vertical_pane_g

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy4_ParamLimits

0x827c,	// (0x0001759d) eswt_control_pane_g1_copy4

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy4_ParamLimits

0x8289,	// (0x000175aa) eswt_control_pane_g2_copy4

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy4_ParamLimits

0x8296,	// (0x000175b7) eswt_control_pane_g3_copy4

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy4_ParamLimits

0x82a3,	// (0x000175c4) eswt_control_pane_g4_copy4

0x833f,	// (0x00017660) eswt_ctrl_combo_button_pane

0x8347,	// (0x00017668) eswt_ctrl_input_pane

0x834f,	// (0x00017670) popup_choice_list_window_cp70

0x8357,	// (0x00017678) eswt_ctrl_input_pane_t1

0x26cc,	// (0x000119ed) input_focus_pane_cp70

0x771d,	// (0x00016a3e) bg_button_pane_cp70_ParamLimits

0x771d,	// (0x00016a3e) bg_button_pane_cp70

0x8365,	// (0x00017686) eswt_ctrl_combo_button_pane_g1

0x836d,	// (0x0001768e) wait_bar_pane_cp70

0x4d44,	// (0x00014065) bg_popup_window_pane_cp70_ParamLimits

0x4d44,	// (0x00014065) bg_popup_window_pane_cp70

0x8375,	// (0x00017696) popup_eswt_tasktip_window_t1

0x838b,	// (0x000176ac) wait_bar_pane_cp71_ParamLimits

0x838b,	// (0x000176ac) wait_bar_pane_cp71

0x8397,	// (0x000176b8) grid_eswt_app_pane

0x3b66,	// (0x00012e87) scroll_pane_cp70

0xe259,	// (0x0001d57a) cell_eswt_app_pane_ParamLimits

0xe259,	// (0x0001d57a) cell_eswt_app_pane

0xe283,	// (0x0001d5a4) cell_eswt_app_pane_g1_ParamLimits

0xe283,	// (0x0001d5a4) cell_eswt_app_pane_g1

0xe2b2,	// (0x0001d5d3) cell_eswt_app_pane_g2_ParamLimits

0xe2b2,	// (0x0001d5d3) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0001ef4d) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0001ef4d) cell_eswt_app_pane_g

0xe2d6,	// (0x0001d5f7) cell_eswt_app_pane_t1_ParamLimits

0xe2d6,	// (0x0001d5f7) cell_eswt_app_pane_t1

0x8459,	// (0x0001777a) grid_highlight_pane_cp70_ParamLimits

0x8459,	// (0x0001777a) grid_highlight_pane_cp70

0x42a3,	// (0x000135c4) set_content_pane_g1

0xd4eb,	// (0x0001c80c) status_small_volume_pane

0x1a94,	// (0x00010db5) status_small_volume_pane_g1

0x1a9c,	// (0x00010dbd) volume_small2_pane

0x1aa5,	// (0x00010dc6) volume_small2_pane_g1

0x1aae,	// (0x00010dcf) volume_small2_pane_g2

0x1ab7,	// (0x00010dd8) volume_small2_pane_g3

0x1ac0,	// (0x00010de1) volume_small2_pane_g4

0x1ac9,	// (0x00010dea) volume_small2_pane_g5

0x1ad2,	// (0x00010df3) volume_small2_pane_g6

0x1adb,	// (0x00010dfc) volume_small2_pane_g7

0x1ae4,	// (0x00010e05) volume_small2_pane_g8

0x1aed,	// (0x00010e0e) volume_small2_pane_g9

0x1af6,	// (0x00010e17) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0001ef52) volume_small2_pane_g

0x7b0e,	// (0x00016e2f) fep_vkb_top_text_pane_g1_ParamLimits

0xe1ae,	// (0x0001d4cf) fep_vkb_top_text_pane_t1_ParamLimits

0x7d83,	// (0x000170a4) popup_preview_fixed_window_g3_ParamLimits

0x7d83,	// (0x000170a4) popup_preview_fixed_window_g3

0xc105,	// (0x0001b426) popup_toolbar_trans_pane

0xdbc9,	// (0x0001ceea) aid_height_set_list_ParamLimits

0x610a,	// (0x0001542b) aid_size_parent_ParamLimits

0x4704,	// (0x00013a25) list_highlight_pane_cp2_ParamLimits

0x42a3,	// (0x000135c4) set_content_pane_g1_ParamLimits

0xdd96,	// (0x0001d0b7) list_single_image_pane_ParamLimits

0xdd96,	// (0x0001d0b7) list_single_image_pane

0xe308,	// (0x0001d629) aid_size_cell_image_ParamLimits

0xe308,	// (0x0001d629) aid_size_cell_image

0xe315,	// (0x0001d636) grid_single_image_pane_ParamLimits

0xe315,	// (0x0001d636) grid_single_image_pane

0x847e,	// (0x0001779f) list_single_image_pane_g1_ParamLimits

0x847e,	// (0x0001779f) list_single_image_pane_g1

0x848a,	// (0x000177ab) list_single_image_pane_g2_ParamLimits

0x848a,	// (0x000177ab) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0001ef67) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0001ef67) list_single_image_pane_g

0x849e,	// (0x000177bf) list_single_image_pane_t1_ParamLimits

0x849e,	// (0x000177bf) list_single_image_pane_t1

0xe321,	// (0x0001d642) cell_image_list_pane_ParamLimits

0xe321,	// (0x0001d642) cell_image_list_pane

0xe335,	// (0x0001d656) cell_image_list_pane_g1

0xe33e,	// (0x0001d65f) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0001ef6c) cell_image_list_pane_g

0x84da,	// (0x000177fb) aid_size_cell_tb_trans_pane

0x357f,	// (0x000128a0) bg_tb_trans_pane

0x84ec,	// (0x0001780d) grid_tb_trans_pane

0x4c20,	// (0x00013f41) bg_tb_trans_pane_g1

0x4c30,	// (0x00013f51) bg_tb_trans_pane_g2

0x4c28,	// (0x00013f49) bg_tb_trans_pane_g3

0x4c40,	// (0x00013f61) bg_tb_trans_pane_g4

0x4c38,	// (0x00013f59) bg_tb_trans_pane_g5

0x4c60,	// (0x00013f81) bg_tb_trans_pane_g6

0x4c58,	// (0x00013f79) bg_tb_trans_pane_g7

0x4c48,	// (0x00013f69) bg_tb_trans_pane_g8

0x4c50,	// (0x00013f71) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0001ef71) bg_tb_trans_pane_g

0x8500,	// (0x00017821) cell_toolbar_trans_pane_ParamLimits

0x8500,	// (0x00017821) cell_toolbar_trans_pane

0x7758,	// (0x00016a79) cell_toolbar_trans_pane_g1

0xdf91,	// (0x0001d2b2) list_form2_midp_pane_t1

0xdf9f,	// (0x0001d2c0) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0001ee0e) list_form2_midp_pane_t

0x72d5,	// (0x000165f6) scroll_pane_cp51_ParamLimits

0x74db,	// (0x000167fc) form2_midp_wait_pane_g1

0x74e4,	// (0x00016805) form2_midp_wait_pane_g2

0x74ed,	// (0x0001680e) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0001ee23) form2_midp_wait_pane_g

0x27c0,	// (0x00011ae1) list_highlight_pane_cp21_ParamLimits

0x753b,	// (0x0001685c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x754a,	// (0x0001686b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6309,	// (0x0001562a) list_single_2graphic_im_pane_ParamLimits

0x6309,	// (0x0001562a) list_single_2graphic_im_pane

0x8526,	// (0x00017847) list_single_2graphic_im_pane_g1_ParamLimits

0x8526,	// (0x00017847) list_single_2graphic_im_pane_g1

0x8537,	// (0x00017858) list_single_2graphic_im_pane_g2_ParamLimits

0x8537,	// (0x00017858) list_single_2graphic_im_pane_g2

0x8543,	// (0x00017864) list_single_2graphic_im_pane_g3_ParamLimits

0x8543,	// (0x00017864) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0001ef84) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0001ef84) list_single_2graphic_im_pane_g

0x8563,	// (0x00017884) list_single_2graphic_im_pane_t1_ParamLimits

0x8563,	// (0x00017884) list_single_2graphic_im_pane_t1

0x7d8f,	// (0x000170b0) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d8f,	// (0x000170b0) list_single_graphic_2heading_pane_fp

0x7dd4,	// (0x000170f5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7dd4,	// (0x000170f5) list_single_graphic_2heading_pane_fp_g1

0x7da5,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7da5,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g2

0x31f8,	// (0x00012519) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x31f8,	// (0x00012519) list_single_graphic_2heading_pane_fp_g3

0x35a5,	// (0x000128c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x35a5,	// (0x000128c6) list_single_graphic_2heading_pane_fp_g4

0x7db1,	// (0x000170d2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7db1,	// (0x000170d2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001eeab) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001eeab) list_single_graphic_2heading_pane_fp_g

0x8594,	// (0x000178b5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8594,	// (0x000178b5) list_single_graphic_2heading_pane_fp_t1

0x7e0c,	// (0x0001712d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7e0c,	// (0x0001712d) list_single_graphic_2heading_pane_fp_t2

0x85aa,	// (0x000178cb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x85aa,	// (0x000178cb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x0001ef8d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x0001ef8d) list_single_graphic_2heading_pane_fp_t

0x77e4,	// (0x00016b05) fep_hwr_write_pane_g5_ParamLimits

0x77e4,	// (0x00016b05) fep_hwr_write_pane_g5

0x77f0,	// (0x00016b11) fep_hwr_write_pane_g6_ParamLimits

0x77f0,	// (0x00016b11) fep_hwr_write_pane_g6

0x824b,	// (0x0001756c) eswt_shell_pane_ParamLimits

0x4d44,	// (0x00014065) bg_popup_window_pane_cp18_ParamLimits

0x6046,	// (0x00015367) heading_pane_cp70

0x8375,	// (0x00017696) popup_eswt_tasktip_window_t1_ParamLimits

0xd5b1,	// (0x0001c8d2) aid_touch_tab_arrow_left

0xd5c7,	// (0x0001c8e8) aid_touch_tab_arrow_right

0xc93b,	// (0x0001bc5c) title_pane_g3_ParamLimits

0xc93b,	// (0x0001bc5c) title_pane_g3

0x346a,	// (0x0001278b) set_value_pane_g1

0xc105,	// (0x0001b426) popup_toolbar_trans_pane_ParamLimits

0x84da,	// (0x000177fb) aid_size_cell_tb_trans_pane_ParamLimits

0x357f,	// (0x000128a0) bg_tb_trans_pane_ParamLimits

0x84ec,	// (0x0001780d) grid_tb_trans_pane_ParamLimits

0x2a63,	// (0x00011d84) cont_note_pane_ParamLimits

0x2a63,	// (0x00011d84) cont_note_pane

0x2da5,	// (0x000120c6) cont_snote2_single_text_pane_ParamLimits

0x2da5,	// (0x000120c6) cont_snote2_single_text_pane

0x2da5,	// (0x000120c6) cont_snote2_single_graphic_pane_ParamLimits

0x2da5,	// (0x000120c6) cont_snote2_single_graphic_pane

0x539b,	// (0x000146bc) cont_note_wait_pane_ParamLimits

0x539b,	// (0x000146bc) cont_note_wait_pane

0x539b,	// (0x000146bc) cont_note_image_pane_ParamLimits

0x539b,	// (0x000146bc) cont_note_image_pane

0x85c0,	// (0x000178e1) popup_note2_window_g1_ParamLimits

0x85c0,	// (0x000178e1) popup_note2_window_g1

0x85f1,	// (0x00017912) popup_note2_window_t1_ParamLimits

0x85f1,	// (0x00017912) popup_note2_window_t1

0x8636,	// (0x00017957) popup_note2_window_t2_ParamLimits

0x8636,	// (0x00017957) popup_note2_window_t2

0x867b,	// (0x0001799c) popup_note2_window_t3_ParamLimits

0x867b,	// (0x0001799c) popup_note2_window_t3

0x86c0,	// (0x000179e1) popup_note2_window_t4_ParamLimits

0x86c0,	// (0x000179e1) popup_note2_window_t4

0x2adb,	// (0x00011dfc) popup_note2_window_t5_ParamLimits

0x2adb,	// (0x00011dfc) popup_note2_window_t5

0x0004,

0xfc78,	// (0x0001ef99) popup_note2_window_t_ParamLimits

0xfc78,	// (0x0001ef99) popup_note2_window_t

0x86ef,	// (0x00017a10) popup_note2_image_window_g1_ParamLimits

0x86ef,	// (0x00017a10) popup_note2_image_window_g1

0x86fb,	// (0x00017a1c) popup_note2_image_window_g2_ParamLimits

0x86fb,	// (0x00017a1c) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0001efa4) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0001efa4) popup_note2_image_window_g

0x870d,	// (0x00017a2e) popup_note2_image_window_t1_ParamLimits

0x870d,	// (0x00017a2e) popup_note2_image_window_t1

0x8725,	// (0x00017a46) popup_note2_image_window_t2_ParamLimits

0x8725,	// (0x00017a46) popup_note2_image_window_t2

0x873d,	// (0x00017a5e) popup_note2_image_window_t3_ParamLimits

0x873d,	// (0x00017a5e) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0001efa9) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0001efa9) popup_note2_image_window_t

0x53a9,	// (0x000146ca) popup_note2_wait_window_g1_ParamLimits

0x53a9,	// (0x000146ca) popup_note2_wait_window_g1

0x8759,	// (0x00017a7a) popup_note2_wait_window_g2_ParamLimits

0x8759,	// (0x00017a7a) popup_note2_wait_window_g2

0x53c1,	// (0x000146e2) popup_note2_wait_window_g3_ParamLimits

0x53c1,	// (0x000146e2) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x0001efb0) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x0001efb0) popup_note2_wait_window_g

0x8765,	// (0x00017a86) popup_note2_wait_window_t1_ParamLimits

0x8765,	// (0x00017a86) popup_note2_wait_window_t1

0x8783,	// (0x00017aa4) popup_note2_wait_window_t2_ParamLimits

0x8783,	// (0x00017aa4) popup_note2_wait_window_t2

0x87a1,	// (0x00017ac2) popup_note2_wait_window_t3_ParamLimits

0x87a1,	// (0x00017ac2) popup_note2_wait_window_t3

0x87b3,	// (0x00017ad4) popup_note2_wait_window_t4_ParamLimits

0x87b3,	// (0x00017ad4) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x0001efb7) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x0001efb7) popup_note2_wait_window_t

0x87c5,	// (0x00017ae6) wait_bar2_pane_ParamLimits

0x87c5,	// (0x00017ae6) wait_bar2_pane

0x87dd,	// (0x00017afe) popup_snote2_single_text_window_g1_ParamLimits

0x87dd,	// (0x00017afe) popup_snote2_single_text_window_g1

0x8805,	// (0x00017b26) popup_snote2_single_text_window_t1_ParamLimits

0x8805,	// (0x00017b26) popup_snote2_single_text_window_t1

0x8851,	// (0x00017b72) popup_snote2_single_text_window_t2_ParamLimits

0x8851,	// (0x00017b72) popup_snote2_single_text_window_t2

0x889d,	// (0x00017bbe) popup_snote2_single_text_window_t3_ParamLimits

0x889d,	// (0x00017bbe) popup_snote2_single_text_window_t3

0x88de,	// (0x00017bff) popup_snote2_single_text_window_t4_ParamLimits

0x88de,	// (0x00017bff) popup_snote2_single_text_window_t4

0x8914,	// (0x00017c35) popup_snote2_single_text_window_t5_ParamLimits

0x8914,	// (0x00017c35) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x0001efc0) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x0001efc0) popup_snote2_single_text_window_t

0x893f,	// (0x00017c60) popup_snote2_single_graphic_window_g1_ParamLimits

0x893f,	// (0x00017c60) popup_snote2_single_graphic_window_g1

0x8967,	// (0x00017c88) popup_snote2_single_graphic_window_g2_ParamLimits

0x8967,	// (0x00017c88) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x0001efcb) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x0001efcb) popup_snote2_single_graphic_window_g

0x898f,	// (0x00017cb0) popup_snote2_single_graphic_window_t1_ParamLimits

0x898f,	// (0x00017cb0) popup_snote2_single_graphic_window_t1

0x89db,	// (0x00017cfc) popup_snote2_single_graphic_window_t2_ParamLimits

0x89db,	// (0x00017cfc) popup_snote2_single_graphic_window_t2

0x889d,	// (0x00017bbe) popup_snote2_single_graphic_window_t3_ParamLimits

0x889d,	// (0x00017bbe) popup_snote2_single_graphic_window_t3

0x88de,	// (0x00017bff) popup_snote2_single_graphic_window_t4_ParamLimits

0x88de,	// (0x00017bff) popup_snote2_single_graphic_window_t4

0x8914,	// (0x00017c35) popup_snote2_single_graphic_window_t5_ParamLimits

0x8914,	// (0x00017c35) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x0001efd0) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x0001efd0) popup_snote2_single_graphic_window_t

0x7190,	// (0x000164b1) clock_nsta_pane_cp2_t1

0x7190,	// (0x000164b1) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0001ede4) clock_nsta_pane_cp2_t

0x3599,	// (0x000128ba) form_field_data_wide_pane_g1_ParamLimits

0x31f8,	// (0x00012519) form_field_data_wide_pane_g2_ParamLimits

0x31f8,	// (0x00012519) form_field_data_wide_pane_g2

0x35a5,	// (0x000128c6) form_field_data_wide_pane_g3_ParamLimits

0x35a5,	// (0x000128c6) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001e997) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001e997) form_field_data_wide_pane_g

0xded4,	// (0x0001d1f5) grid_touch_3_pane_ParamLimits

0xded4,	// (0x0001d1f5) grid_touch_3_pane

0xe347,	// (0x0001d668) cell_touch_3_pane_ParamLimits

0xe347,	// (0x0001d668) cell_touch_3_pane

0x7758,	// (0x00016a79) cell_touch_3_pane_g1

0x7758,	// (0x00016a79) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0001ee69) cell_touch_3_pane_g

0x2b0d,	// (0x00011e2e) cont_query_data_pane

0x2b15,	// (0x00011e36) cont_query_data_pane_cp1

0x8a58,	// (0x00017d79) button_value_adjust_pane_cp7

0x8a60,	// (0x00017d81) query_popup_pane_cp3

0x3e1f,	// (0x00013140) bg_popup_sub_pane_cp22_ParamLimits

0x087f,	// (0x0000fba0) navi_navi_volume_pane_cp2

0x0897,	// (0x0000fbb8) popup_side_volume_key_window_g2

0x08a3,	// (0x0000fbc4) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ea2d) popup_side_volume_key_window_g

0x08bd,	// (0x0000fbde) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ea34) popup_side_volume_key_window_t

0x4164,	// (0x00013485) popup_side_volume_key_window_ParamLimits

0xcd0c,	// (0x0001c02d) list_double_graphic_pane_g4_ParamLimits

0xcd0c,	// (0x0001c02d) list_double_graphic_pane_g4

0xdd70,	// (0x0001d091) list_single_2heading_msg_pane_ParamLimits

0xdd70,	// (0x0001d091) list_single_2heading_msg_pane

0xe390,	// (0x0001d6b1) list_single_2heading_msg_pane_g1_ParamLimits

0xe390,	// (0x0001d6b1) list_single_2heading_msg_pane_g1

0xe39c,	// (0x0001d6bd) list_single_2heading_msg_pane_g2_ParamLimits

0xe39c,	// (0x0001d6bd) list_single_2heading_msg_pane_g2

0xe3af,	// (0x0001d6d0) list_single_2heading_msg_pane_g3_ParamLimits

0xe3af,	// (0x0001d6d0) list_single_2heading_msg_pane_g3

0x8a9b,	// (0x00017dbc) list_single_2heading_msg_pane_g4_ParamLimits

0x8a9b,	// (0x00017dbc) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x0001efdb) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x0001efdb) list_single_2heading_msg_pane_g

0x8ab3,	// (0x00017dd4) list_single_2heading_msg_pane_t1_ParamLimits

0x8ab3,	// (0x00017dd4) list_single_2heading_msg_pane_t1

0xe3bb,	// (0x0001d6dc) list_single_2heading_msg_pane_t2_ParamLimits

0xe3bb,	// (0x0001d6dc) list_single_2heading_msg_pane_t2

0xe426,	// (0x0001d747) list_single_2heading_msg_pane_t3_ParamLimits

0xe426,	// (0x0001d747) list_single_2heading_msg_pane_t3

0x8b48,	// (0x00017e69) list_single_2heading_msg_pane_t4_ParamLimits

0x8b48,	// (0x00017e69) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0001efe4) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0001efe4) list_single_2heading_msg_pane_t

0x2714,	// (0x00011a35) title_pane_g4_ParamLimits

0x2714,	// (0x00011a35) title_pane_g4

0x068d,	// (0x0000f9ae) title_pane_stacon_g3_ParamLimits

0x068d,	// (0x0000f9ae) title_pane_stacon_g3

0x8557,	// (0x00017878) list_single_2graphic_im_pane_g4_ParamLimits

0x8557,	// (0x00017878) list_single_2graphic_im_pane_g4

0x5e02,	// (0x00015123) popup_side_volume_key_window_cp

0x6706,	// (0x00015a27) main_idle_act2_pane_t1

0x127c,	// (0x0001059d) toolbar_button_pane_g10

0xcc45,	// (0x0001bf66) popup_toolbar_window_cp1

0x7181,	// (0x000164a2) clock_nsta_pane_cp_t1

0x7181,	// (0x000164a2) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0001eddf) clock_nsta_pane_cp_t

0x087f,	// (0x0000fba0) navi_navi_volume_pane_cp2_ParamLimits

0x088b,	// (0x0000fbac) popup_side_volume_key_window_g1_ParamLimits

0x0897,	// (0x0000fbb8) popup_side_volume_key_window_g2_ParamLimits

0x08a3,	// (0x0000fbc4) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ea2d) popup_side_volume_key_window_g_ParamLimits

0x1700,	// (0x00010a21) fep_hwr_aid_pane

0x17a7,	// (0x00010ac8) bg_fep_hwr_top_pane_g4_ParamLimits

0x77b4,	// (0x00016ad5) fep_hwr_top_pane_g1_ParamLimits

0x77c6,	// (0x00016ae7) fep_hwr_top_pane_g2_ParamLimits

0x17c7,	// (0x00010ae8) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0001ee34) fep_hwr_top_pane_g_ParamLimits

0x17dc,	// (0x00010afd) fep_hwr_top_text_pane_ParamLimits

0x5bc5,	// (0x00014ee6) aid_touch_tab_arrow_arrow_2

0x5bce,	// (0x00014eef) aid_touch_tab_arrow_left_2

0x1714,	// (0x00010a35) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x174b,	// (0x00010a6c) fep_hwr_prediction_pane

0x791d,	// (0x00016c3e) fep_vkb_prediction_pane

0xe18e,	// (0x0001d4af) fep_vkb_side_pane_g3_ParamLimits

0xe18e,	// (0x0001d4af) fep_vkb_side_pane_g3

0x1957,	// (0x00010c78) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x19c3,	// (0x00010ce4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x19d0,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0001eee3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1aff,	// (0x00010e20) fep_hwr_prediction_pane_g1

0x1b09,	// (0x00010e2a) fep_hwr_prediction_pane_g2

0x1b11,	// (0x00010e32) fep_hwr_prediction_pane_g3

0x1b19,	// (0x00010e3a) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001efed) fep_hwr_prediction_pane_g

0x8b6d,	// (0x00017e8e) fep_vkb_prediction_pane_g1

0x8b77,	// (0x00017e98) fep_vkb_prediction_pane_g2

0x8b7f,	// (0x00017ea0) fep_vkb_prediction_pane_g3

0x8b87,	// (0x00017ea8) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0001eff6) fep_vkb_prediction_pane_g

0x155c,	// (0x0001087d) slider_set_pane_g3

0x1570,	// (0x00010891) slider_set_pane_g4

0x1588,	// (0x000108a9) slider_set_pane_g5

0x155c,	// (0x0001087d) slider_set_pane_g6

0x159e,	// (0x000108bf) slider_set_pane_g7

0x6267,	// (0x00015588) slider_form_pane_g3

0x6270,	// (0x00015591) slider_form_pane_g4

0x6278,	// (0x00015599) slider_form_pane_g5

0x6267,	// (0x00015588) slider_form_pane_g6

0xdd10,	// (0x0001d031) slider_form_pane_g7

0x69fd,	// (0x00015d1e) slider_set_pane_vc_g3

0x6a06,	// (0x00015d27) slider_set_pane_vc_g4

0x6a0f,	// (0x00015d30) slider_set_pane_vc_g5

0x69fd,	// (0x00015d1e) slider_set_pane_vc_g6

0x6a18,	// (0x00015d39) slider_set_pane_vc_g7

0x6e57,	// (0x00016178) slider_form_pane_vc_g1

0x6e60,	// (0x00016181) slider_form_pane_vc_g2

0x6e69,	// (0x0001618a) slider_form_pane_vc_g3

0x6e57,	// (0x00016178) slider_form_pane_vc_g4

0x6e72,	// (0x00016193) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0001edb1) slider_form_pane_vc_g

0x0361,	// (0x0000f682) main_idle_act3_pane

0x8b8f,	// (0x00017eb0) ai3_links_pane

0xe494,	// (0x0001d7b5) popup_ai3_data_window_ParamLimits

0xe494,	// (0x0001d7b5) popup_ai3_data_window

0x26cc,	// (0x000119ed) grid_ai3_links_pane

0xe4ac,	// (0x0001d7cd) cell_ai3_links_pane_ParamLimits

0xe4ac,	// (0x0001d7cd) cell_ai3_links_pane

0x8bc8,	// (0x00017ee9) bg_popup_sub_pane_cp11

0x8bd5,	// (0x00017ef6) cell_ai3_links_pane_g1

0x26cc,	// (0x000119ed) bg_popup_sub_pane_cp12

0x8bfa,	// (0x00017f1b) heading_ai3_data_pane

0x8c02,	// (0x00017f23) list_ai3_gene_pane

0x8c0e,	// (0x00017f2f) popup_ai3_data_window_g1

0x8c16,	// (0x00017f37) heading_ai3_data_pane_g1

0x8c1e,	// (0x00017f3f) heading_ai3_data_pane_t1

0x8c2c,	// (0x00017f4d) list_double_ai3_gene_pane_ParamLimits

0x8c2c,	// (0x00017f4d) list_double_ai3_gene_pane

0x8c39,	// (0x00017f5a) list_single_ai3_gene_pane_ParamLimits

0x8c39,	// (0x00017f5a) list_single_ai3_gene_pane

0x771d,	// (0x00016a3e) list_highlight_pane_cp7_ParamLimits

0x771d,	// (0x00016a3e) list_highlight_pane_cp7

0x8c46,	// (0x00017f67) list_single_a13_gene_pane_t1_ParamLimits

0x8c46,	// (0x00017f67) list_single_a13_gene_pane_t1

0x8c5d,	// (0x00017f7e) list_single_ai3_gene_pane_g1

0x8c66,	// (0x00017f87) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x0001efff) list_single_ai3_gene_pane_g

0x8c6e,	// (0x00017f8f) list_double_ai3_gene_pane_g1_ParamLimits

0x8c6e,	// (0x00017f8f) list_double_ai3_gene_pane_g1

0x8c7a,	// (0x00017f9b) list_double_ai3_gene_pane_t1_ParamLimits

0x8c7a,	// (0x00017f9b) list_double_ai3_gene_pane_t1

0x8c96,	// (0x00017fb7) list_double_ai3_gene_pane_t2_ParamLimits

0x8c96,	// (0x00017fb7) list_double_ai3_gene_pane_t2

0x8cab,	// (0x00017fcc) list_double_ai3_gene_pane_t3_ParamLimits

0x8cab,	// (0x00017fcc) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0001f004) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0001f004) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8a71,	// (0x00017d92) aid_size_min_col_2

0xe37a,	// (0x0001d69b) aid_size_min_msg_ParamLimits

0xe37a,	// (0x0001d69b) aid_size_min_msg

0xe1a2,	// (0x0001d4c3) fep_vkb_top_text_pane_g2_ParamLimits

0xe1a2,	// (0x0001d4c3) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0001ee64) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0001ee64) fep_vkb_top_text_pane_g

0x0361,	// (0x0000f682) main_hc_apps_shell_pane

0x8cc8,	// (0x00017fe9) grid_hc_apps_pane_ParamLimits

0x8cc8,	// (0x00017fe9) grid_hc_apps_pane

0x8cd7,	// (0x00017ff8) list_hc_apps_pane

0x8cdf,	// (0x00018000) scroll_pane_cp37_ParamLimits

0x8cdf,	// (0x00018000) scroll_pane_cp37

0xe4c6,	// (0x0001d7e7) cell_hc_apps_pane_ParamLimits

0xe4c6,	// (0x0001d7e7) cell_hc_apps_pane

0xe584,	// (0x0001d8a5) cell_hc_apps_pane_g1_ParamLimits

0xe584,	// (0x0001d8a5) cell_hc_apps_pane_g1

0x8dca,	// (0x000180eb) cell_hc_apps_pane_g2_ParamLimits

0x8dca,	// (0x000180eb) cell_hc_apps_pane_g2

0x8de6,	// (0x00018107) cell_hc_apps_pane_g3_ParamLimits

0x8de6,	// (0x00018107) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x0001f00b) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x0001f00b) cell_hc_apps_pane_g

0xe5b1,	// (0x0001d8d2) cell_hc_apps_pane_t1_ParamLimits

0xe5b1,	// (0x0001d8d2) cell_hc_apps_pane_t1

0x2a63,	// (0x00011d84) grid_highlight_pane_cp10_ParamLimits

0x2a63,	// (0x00011d84) grid_highlight_pane_cp10

0xe5ef,	// (0x0001d910) list_single_hc_apps_pane_ParamLimits

0xe5ef,	// (0x0001d910) list_single_hc_apps_pane

0xe620,	// (0x0001d941) list_single_hc_apps_pane_g1

0xe639,	// (0x0001d95a) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0001f012) list_single_hc_apps_pane_g

0xe652,	// (0x0001d973) list_single_hc_apps_pane_g2_copy1

0xe66e,	// (0x0001d98f) list_single_hc_apps_pane_t1

0x27c0,	// (0x00011ae1) bg_set_opt_pane_cp_ParamLimits

0x05b4,	// (0x0000f8d5) setting_slider_pane_t1_ParamLimits

0x05cd,	// (0x0000f8ee) setting_slider_pane_t2_ParamLimits

0x05e7,	// (0x0000f908) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001e87f) setting_slider_pane_t_ParamLimits

0x05ff,	// (0x0000f920) slider_set_pane_ParamLimits

0x0b1f,	// (0x0000fe40) control_pane_g5_ParamLimits

0x0b1f,	// (0x0000fe40) control_pane_g5

0x60c4,	// (0x000153e5) slider_set_pane_g1_ParamLimits

0x1550,	// (0x00010871) slider_set_pane_g2_ParamLimits

0x155c,	// (0x0001087d) slider_set_pane_g3_ParamLimits

0x1570,	// (0x00010891) slider_set_pane_g4_ParamLimits

0x1588,	// (0x000108a9) slider_set_pane_g5_ParamLimits

0x155c,	// (0x0001087d) slider_set_pane_g6_ParamLimits

0x159e,	// (0x000108bf) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001ec7b) slider_set_pane_g_ParamLimits

0x424e,	// (0x0001356f) navi_icon_text_pane_ParamLimits

0xd57a,	// (0x0001c89b) aid_fill_nsta_2_ParamLimits

0xd5b1,	// (0x0001c8d2) aid_touch_tab_arrow_left_ParamLimits

0xd5c7,	// (0x0001c8e8) aid_touch_tab_arrow_right_ParamLimits

0xd662,	// (0x0001c983) clock_nsta_pane_ParamLimits

0x5ba7,	// (0x00014ec8) navi_icon_pane_g1_ParamLimits

0x5bb3,	// (0x00014ed4) navi_text_pane_t1_ParamLimits

0x7293,	// (0x000165b4) navi_icon_text_pane_g1_ParamLimits

0x729f,	// (0x000165c0) navi_icon_text_pane_t1_ParamLimits

0xe620,	// (0x0001d941) list_single_hc_apps_pane_g1_ParamLimits

0xe639,	// (0x0001d95a) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0001f012) list_single_hc_apps_pane_g_ParamLimits

0xe652,	// (0x0001d973) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe66e,	// (0x0001d98f) list_single_hc_apps_pane_t1_ParamLimits

0xb88d,	// (0x0001abae) popup_toolbar2_fixed_window_ParamLimits

0xb88d,	// (0x0001abae) popup_toolbar2_fixed_window

0xc0fb,	// (0x0001b41c) popup_toolbar2_float_window

0x26cc,	// (0x000119ed) bg_popup_sub_pane_cp27

0x8f2c,	// (0x0001824d) grid_toolbar2_float_pane

0x26cc,	// (0x000119ed) bg_popup_sub_pane_cp26

0x8f2c,	// (0x0001824d) grid_toolbar2_fixed_pane

0xe69c,	// (0x0001d9bd) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0001d9bd) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0001d9d8) cell_toolbar2_fixed_pane_g1

0x0fee,	// (0x0001030f) toolbar2_fixed_button_pane

0x4c20,	// (0x00013f41) toolbar2_fixed_button_pane_g1

0x4c30,	// (0x00013f51) toolbar2_fixed_button_pane_g2

0x4c28,	// (0x00013f49) toolbar2_fixed_button_pane_g3

0x4c40,	// (0x00013f61) toolbar2_fixed_button_pane_g4

0x4c38,	// (0x00013f59) toolbar2_fixed_button_pane_g5

0x4c48,	// (0x00013f69) toolbar2_fixed_button_pane_g6

0x4c50,	// (0x00013f71) toolbar2_fixed_button_pane_g7

0x4c60,	// (0x00013f81) toolbar2_fixed_button_pane_g8

0x4c58,	// (0x00013f79) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001eb7d) toolbar2_fixed_button_pane_g

0x8f4e,	// (0x0001826f) cell_toolbar2_float_pane_ParamLimits

0x8f4e,	// (0x0001826f) cell_toolbar2_float_pane

0x8f62,	// (0x00018283) cell_toolbar2_float_pane_g1

0x0fee,	// (0x0001030f) toolbar2_fixed_button_pane_cp

0xe08a,	// (0x0001d3ab) fep_vkb_accented_list_pane_ParamLimits

0xe08a,	// (0x0001d3ab) fep_vkb_accented_list_pane

0x1937,	// (0x00010c58) bg_popup_fep_shadow_pane_g9

0x43c2,	// (0x000136e3) bg_popup_fep_shadow_pane_cp3

0x3834,	// (0x00012b55) list_accented_list_pane

0x8f6b,	// (0x0001828c) list_single_accented_list_pane_ParamLimits

0x8f6b,	// (0x0001828c) list_single_accented_list_pane

0x43c2,	// (0x000136e3) list_highlight_pane_cp10

0x8f7c,	// (0x0001829d) list_single_accented_list_pane_t1

0xc025,	// (0x0001b346) popup_slider_window_ParamLimits

0xc025,	// (0x0001b346) popup_slider_window

0x8a68,	// (0x00017d89) aid_indentation_list_msg

0xe7b0,	// (0x0001dad1) bg_popup_window_pane_cp19

0x90a0,	// (0x000183c1) popup_slider_window_g1

0x90bc,	// (0x000183dd) popup_slider_window_g2

0x90d8,	// (0x000183f9) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x0001f017) popup_slider_window_g

0x9134,	// (0x00018455) popup_slider_window_t1

0x91a8,	// (0x000184c9) small_volume_slider_vertical_pane

0x7758,	// (0x00016a79) small_volume_slider_vertical_pane_g1

0x7758,	// (0x00016a79) small_volume_slider_vertical_pane_g2

0x91c4,	// (0x000184e5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x0001f029) small_volume_slider_vertical_pane_g

0xb7fb,	// (0x0001ab1c) area_side_right_pane_ParamLimits

0xb7fb,	// (0x0001ab1c) area_side_right_pane

0xc322,	// (0x0001b643) aid_size_side_button_ParamLimits

0xc322,	// (0x0001b643) aid_size_side_button

0xc33b,	// (0x0001b65c) grid_sctrl_middle_pane_ParamLimits

0xc33b,	// (0x0001b65c) grid_sctrl_middle_pane

0x1b54,	// (0x00010e75) sctrl_sk_bottom_pane

0x1b65,	// (0x00010e86) sctrl_sk_top_pane

0x1b77,	// (0x00010e98) aid_touch_sctrl_top

0x1b84,	// (0x00010ea5) bg_sctrl_sk_pane_ParamLimits

0x1b84,	// (0x00010ea5) bg_sctrl_sk_pane

0x1b92,	// (0x00010eb3) sctrl_sk_top_pane_g1

0x1b9f,	// (0x00010ec0) sctrl_sk_top_pane_t1

0x1b77,	// (0x00010e98) aid_touch_sctrl_bottom

0x1b84,	// (0x00010ea5) bg_sctrl_sk_pane_cp_ParamLimits

0x1b84,	// (0x00010ea5) bg_sctrl_sk_pane_cp

0x1bba,	// (0x00010edb) sctrl_sk_bottom_pane_g1

0x1b9f,	// (0x00010ec0) sctrl_sk_bottom_pane_t1

0xc355,	// (0x0001b676) cell_sctrl_middle_pane_ParamLimits

0xc355,	// (0x0001b676) cell_sctrl_middle_pane

0xc366,	// (0x0001b687) aid_touch_sctrl_middle_ParamLimits

0xc366,	// (0x0001b687) aid_touch_sctrl_middle

0xc373,	// (0x0001b694) bg_sctrl_middle_pane_ParamLimits

0xc373,	// (0x0001b694) bg_sctrl_middle_pane

0x222b,	// (0x0001154c) cell_sctrl_middle_pane_g1_ParamLimits

0x222b,	// (0x0001154c) cell_sctrl_middle_pane_g1

0xc381,	// (0x0001b6a2) cell_sctrl_middle_pane_g2_ParamLimits

0xc381,	// (0x0001b6a2) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x0001f035) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x0001f035) cell_sctrl_middle_pane_g

0x4c20,	// (0x00013f41) bg_sctrl_middle_pane_g1

0x4c28,	// (0x00013f49) bg_sctrl_middle_pane_g2

0x4c30,	// (0x00013f51) bg_sctrl_middle_pane_g3

0x4c38,	// (0x00013f59) bg_sctrl_middle_pane_g4

0x4c40,	// (0x00013f61) bg_sctrl_middle_pane_g5

0x4c48,	// (0x00013f69) bg_sctrl_middle_pane_g6

0x4c50,	// (0x00013f71) bg_sctrl_middle_pane_g7

0x4c58,	// (0x00013f79) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x0001f03a) bg_sctrl_middle_pane_g

0x4c60,	// (0x00013f81) bg_sctrl_middle_pane_g8_copy1

0x4c20,	// (0x00013f41) bg_sctrl_sk_pane_g1

0x4c30,	// (0x00013f51) bg_sctrl_sk_pane_g2

0x4c28,	// (0x00013f49) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001eb7d) bg_sctrl_sk_pane_g

0x2f63,	// (0x00012284) aid_size_touch_scroll_bar

0x4c40,	// (0x00013f61) bg_sctrl_sk_pane_g4

0x4c38,	// (0x00013f59) bg_sctrl_sk_pane_g5

0x4c48,	// (0x00013f69) bg_sctrl_sk_pane_g6

0x4c50,	// (0x00013f71) bg_sctrl_sk_pane_g7

0x4c60,	// (0x00013f81) bg_sctrl_sk_pane_g8

0x4c58,	// (0x00013f79) bg_sctrl_sk_pane_g9

0x0cd9,	// (0x0000fffa) popup_fep_china_hwr2_fs_candidate_window

0xbb53,	// (0x0001ae74) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbb53,	// (0x0001ae74) popup_fep_china_hwr2_fs_control_window

0x1957,	// (0x00010c78) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x0001f030) sctrl_sk_top_pane_g

0xe868,	// (0x0001db89) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0001db89) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0001db9d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0001db9d) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0001dbb4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0001dbb4) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0001dbc6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0001dbc6) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0001dbda) popup_fep_china_hwr2_fs_control_funtion_grid

0x9220,	// (0x00018541) aid_fep_china_hwr2_fs_candi_cell

0x26cc,	// (0x000119ed) bg_popup_fep_shadow_pane_cp6

0x922a,	// (0x0001854b) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0001dbe2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0001dbe2) cell_fep_china_hwr2_fs_funtion_grid

0x7758,	// (0x00016a79) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x924c,	// (0x0001856d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x924c,	// (0x0001856d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x925a,	// (0x0001857b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x925a,	// (0x0001857b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x0001f04b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x0001f04b) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0001dbfa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0001dbfa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0001dc0f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0001dc0f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x0001f050) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x0001f050) cell_fep_china_hwr2_fs_funtion_grid_t

0x92a1,	// (0x000185c2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92a9,	// (0x000185ca) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92b1,	// (0x000185d2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x0001f055) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92b9,	// (0x000185da) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92b9,	// (0x000185da) cell_fep_china_hwr2_fs_candidate_grid

0x92d2,	// (0x000185f3) popup_fep_china_hwr2_fs_candidate_grid_g20

0x92da,	// (0x000185fb) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7758,	// (0x00016a79) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7758,	// (0x00016a79) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0001ee69) cell_fep_china_hwr2_fs_candidate_grid_g

0x92e2,	// (0x00018603) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4808,	// (0x00013b29) clock_nsta_pane_cp_24_ParamLimits

0x4808,	// (0x00013b29) clock_nsta_pane_cp_24

0x4886,	// (0x00013ba7) indicator_nsta_pane_cp_24_ParamLimits

0x4886,	// (0x00013ba7) indicator_nsta_pane_cp_24

0x5a23,	// (0x00014d44) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001ebe2) heading_pane_g

0x654f,	// (0x00015870) grid_sct_catagory_button_pane

0x657f,	// (0x000158a0) scroll_pane_cp5_ParamLimits

0x72e1,	// (0x00016602) button_value_adjust_pane_cp5_ParamLimits

0x72e1,	// (0x00016602) button_value_adjust_pane_cp5

0x73db,	// (0x000166fc) form2_midp_time_pane_ParamLimits

0x92f0,	// (0x00018611) cell_sct_catagory_button_pane_ParamLimits

0x92f0,	// (0x00018611) cell_sct_catagory_button_pane

0x771d,	// (0x00016a3e) bg_button_pane_cp01_ParamLimits

0x771d,	// (0x00016a3e) bg_button_pane_cp01

0x7758,	// (0x00016a79) cell_sct_catagory_button_pane_g1

0xc09e,	// (0x0001b3bf) popup_tb_extension_window

0xe90a,	// (0x0001dc2b) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0001dc2b) aid_size_cell_ext

0x2da5,	// (0x000120c6) bg_tb_trans_pane_cp1_ParamLimits

0x2da5,	// (0x000120c6) bg_tb_trans_pane_cp1

0xe930,	// (0x0001dc51) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0001dc51) grid_tb_ext_pane

0xe972,	// (0x0001dc93) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0001dc93) cell_tb_ext_pane

0xe99a,	// (0x0001dcbb) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0001dcbb) cell_tb_ext_pane_g1

0x9388,	// (0x000186a9) cell_tb_ext_pane_t1

0x2a63,	// (0x00011d84) list_highlight_pane_cp11_ParamLimits

0x2a63,	// (0x00011d84) list_highlight_pane_cp11

0xb8a2,	// (0x0001abc3) popup_uni_indicator_window_ParamLimits

0xb8a2,	// (0x0001abc3) popup_uni_indicator_window

0x357f,	// (0x000128a0) bg_popup_sub_pane_cp14

0x93a3,	// (0x000186c4) list_uniindi_pane

0x93af,	// (0x000186d0) uniindi_top_pane

0x2a63,	// (0x00011d84) bg_uniindi_top_pane

0x93ce,	// (0x000186ef) uniindi_top_pane_g1

0x93e4,	// (0x00018705) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x0001f05c) uniindi_top_pane_g

0x940e,	// (0x0001872f) uniindi_top_pane_t1

0x9438,	// (0x00018759) list_single_uniindi_pane_ParamLimits

0x9438,	// (0x00018759) list_single_uniindi_pane

0x7758,	// (0x00016a79) bg_uniindi_top_pane_g1

0x944b,	// (0x0001876c) list_single_uniindi_pane_g1

0x945e,	// (0x0001877f) list_single_uniindi_pane_t1

0x0361,	// (0x0000f682) control_bg_pane

0x9483,	// (0x000187a4) bg_sctrl_sk_pane_cp1

0x948c,	// (0x000187ad) bg_sctrl_sk_pane_cp2

0x9495,	// (0x000187b6) control_bg_pane_g1

0x949e,	// (0x000187bf) control_bg_pane_g2

0x0001,

0xfd44,	// (0x0001f065) control_bg_pane_g

0x7125,	// (0x00016446) cell_indicator_nsta_pane_g1_ParamLimits

0xdf01,	// (0x0001d222) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0001edcd) cell_indicator_nsta_pane_g_ParamLimits

0x745f,	// (0x00016780) form2_midp_time_pane_t1_ParamLimits

0x16f2,	// (0x00010a13) main_idle_act4_pane_ParamLimits

0x16f2,	// (0x00010a13) main_idle_act4_pane

0xc09e,	// (0x0001b3bf) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0001dc79) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0001dc79) tb_ext_find_pane

0x94a7,	// (0x000187c8) ai_gene_pane_1_cp1

0x4501,	// (0x00013822) ai_gene_pane_2_cp1

0x94af,	// (0x000187d0) list_single_idle_plugin_calendar_pane

0x94b8,	// (0x000187d9) list_single_idle_plugin_notification_pane

0x94c1,	// (0x000187e2) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0001dcd8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0001dcd8) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0001dd00) main_idle_act4_pane_t1

0xe9f5,	// (0x0001dd16) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x0001f06a) main_idle_act4_pane_t

0xea0d,	// (0x0001dd2e) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0001dd2e) middle_sk_idle_act4_pane

0xea29,	// (0x0001dd4a) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0001dd71) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0001dd71) shortcut_wheel_idle_act4_pane

0x7758,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g1

0x7758,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g2

0x7758,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g3

0x7758,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g4

0x7758,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g5

0x9554,	// (0x00018875) shortcut_wheel_idle_act4_pane_g6

0x955c,	// (0x0001887d) shortcut_wheel_idle_act4_pane_g7

0x9564,	// (0x00018885) shortcut_wheel_idle_act4_pane_g8

0x956c,	// (0x0001888d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x0001f06f) shortcut_wheel_idle_act4_pane_g

0xd52e,	// (0x0001c84f) middle_sk_idle_act4_pane_g1_ParamLimits

0xd52e,	// (0x0001c84f) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0001ddee) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0001ddee) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0001f092) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0001f092) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0001de06) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0001de06) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0001de35) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0001de35) grid_ai_shortcut_pane

0xeb31,	// (0x0001de52) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0001de52) list_highlight_pane_cp16

0xeb3e,	// (0x0001de5f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0001de5f) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0001de6b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0001de6b) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0001de87) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0001de87) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x0001f097) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x0001f097) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0001de9c) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0001de9c) cell_ai_shortcut_pane

0xeb91,	// (0x0001deb2) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0001deb2) cell_ai_shortcut_pane_g1

0x94a7,	// (0x000187c8) ai_gene_pane_1_cp2

0x9699,	// (0x000189ba) ai_gene_pane_2_cp2

0x96a1,	// (0x000189c2) list_highlight_pane_cp15

0x96aa,	// (0x000189cb) list_single_idle_plugin_calendar_pane_g1

0x96a1,	// (0x000189c2) list_highlight_pane_cp17

0x96b2,	// (0x000189d3) list_single_idle_plugin_calendar_pane_g1_copy1

0x96ba,	// (0x000189db) list_single_idle_plugin_player_pane_g1

0x67a6,	// (0x00015ac7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x0001f09e) list_single_idle_plugin_player_pane_g

0x96c2,	// (0x000189e3) list_single_idle_plugin_player_pane_t1

0x96d0,	// (0x000189f1) list_single_idle_plugin_player_pane_t2

0x96de,	// (0x000189ff) list_single_idle_plugin_player_pane_t3

0x96ec,	// (0x00018a0d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0001f0a3) list_single_idle_plugin_player_pane_t

0x96fa,	// (0x00018a1b) wait_bar_pane_cp15

0x9702,	// (0x00018a23) grid_ai_notification_pane

0x67a6,	// (0x00015ac7) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0001ded4) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0001ded4) cell_ai_notification_pane

0x9718,	// (0x00018a39) cell_ai_notification_pane_g1

0x9720,	// (0x00018a41) cell_ai_notification_pane_t1

0xebc0,	// (0x0001dee1) tb_ext_find_button_pane

0xebc8,	// (0x0001dee9) tb_ext_find_pane_g1

0xebd0,	// (0x0001def1) tb_ext_find_pane_t1

0x3d33,	// (0x00013054) tb_ext_find_button_pane_g1

0x974c,	// (0x00018a6d) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x0001f0ac) tb_ext_find_button_pane_g

0xe9df,	// (0x0001dd00) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0001dd16) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x0001f06a) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0001dd4a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0001dd61) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0001dd61) sat_plugin_idle_act4_pane

0xebde,	// (0x0001deff) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0001deff) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0001df17) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0001df17) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0001df2f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0001df2f) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0001df47) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0001df47) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x0001f0b1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x0001f0b1) sat_plugin_idle_act4_pane_t

0x0426,	// (0x0000f747) popup_battery_window_ParamLimits

0x0426,	// (0x0000f747) popup_battery_window

0x2a63,	// (0x00011d84) bg_popup_sub_pane_cp25_ParamLimits

0x2a63,	// (0x00011d84) bg_popup_sub_pane_cp25

0x97a1,	// (0x00018ac2) popup_battery_window_g1_ParamLimits

0x97a1,	// (0x00018ac2) popup_battery_window_g1

0x97ad,	// (0x00018ace) popup_battery_window_t1_ParamLimits

0x97ad,	// (0x00018ace) popup_battery_window_t1

0x97bf,	// (0x00018ae0) popup_battery_window_t2_ParamLimits

0x97bf,	// (0x00018ae0) popup_battery_window_t2

0x0001,

0xfd99,	// (0x0001f0ba) popup_battery_window_t_ParamLimits

0xfd99,	// (0x0001f0ba) popup_battery_window_t

0xd3b9,	// (0x0001c6da) midp_canvas_pane_ParamLimits

0xd418,	// (0x0001c739) midp_keypad_pane_ParamLimits

0xd418,	// (0x0001c739) midp_keypad_pane

0x4704,	// (0x00013a25) main_midp_pane_ParamLimits

0x719f,	// (0x000164c0) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0001df5f) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0001df5f) aid_size_cell_midp_keypad

0xec5c,	// (0x0001df7d) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0001df7d) midp_keyp_game_grid_pane

0xec83,	// (0x0001dfa4) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0001dfa4) midp_keyp_rocker_pane

0xecd4,	// (0x0001dff5) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0001dff5) midp_keyp_sk_left_pane

0xed28,	// (0x0001e049) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0001e049) midp_keyp_sk_right_pane

0x26cc,	// (0x000119ed) bg_button_pane_cp03

0xed7c,	// (0x0001e09d) midp_keyp_sk_left_pane_g1

0x26cc,	// (0x000119ed) bg_button_pane_cp04

0xed7c,	// (0x0001e09d) midp_keyp_sk_right_pane_g1

0x7758,	// (0x00016a79) midp_keyp_rocker_pane_g1

0xed85,	// (0x0001e0a6) keyp_game_cell_pane_ParamLimits

0xed85,	// (0x0001e0a6) keyp_game_cell_pane

0x26cc,	// (0x000119ed) bg_button_pane_cp02

0xeda9,	// (0x0001e0ca) keyp_game_cell_pane_g1

0xb83d,	// (0x0001ab5e) popup_fep_vkb2_window_ParamLimits

0xb83d,	// (0x0001ab5e) popup_fep_vkb2_window

0xc38d,	// (0x0001b6ae) aid_size_cell_vkb2_ParamLimits

0xc38d,	// (0x0001b6ae) aid_size_cell_vkb2

0xc3c3,	// (0x0001b6e4) popup_fep_vkb2_window_g1_ParamLimits

0xc3c3,	// (0x0001b6e4) popup_fep_vkb2_window_g1

0xc413,	// (0x0001b734) vkb2_area_bottom_pane_ParamLimits

0xc413,	// (0x0001b734) vkb2_area_bottom_pane

0xc467,	// (0x0001b788) vkb2_area_keypad_pane_ParamLimits

0xc467,	// (0x0001b788) vkb2_area_keypad_pane

0xc4af,	// (0x0001b7d0) vkb2_area_top_pane_ParamLimits

0xc4af,	// (0x0001b7d0) vkb2_area_top_pane

0xc535,	// (0x0001b856) vkb2_top_entry_pane_ParamLimits

0xc535,	// (0x0001b856) vkb2_top_entry_pane

0xc562,	// (0x0001b883) vkb2_top_grid_left_pane_ParamLimits

0xc562,	// (0x0001b883) vkb2_top_grid_left_pane

0xc582,	// (0x0001b8a3) vkb2_top_grid_right_pane_ParamLimits

0xc582,	// (0x0001b8a3) vkb2_top_grid_right_pane

0x1e26,	// (0x00011147) vkb2_cell_keypad_pane_ParamLimits

0x1e26,	// (0x00011147) vkb2_cell_keypad_pane

0xc5c8,	// (0x0001b8e9) vkb2_area_bottom_grid_pane_ParamLimits

0xc5c8,	// (0x0001b8e9) vkb2_area_bottom_grid_pane

0xc5f2,	// (0x0001b913) vkb2_area_bottom_pane_g1_ParamLimits

0xc5f2,	// (0x0001b913) vkb2_area_bottom_pane_g1

0xc618,	// (0x0001b939) vkb2_area_bottom_pane_g2_ParamLimits

0xc618,	// (0x0001b939) vkb2_area_bottom_pane_g2

0xc649,	// (0x0001b96a) vkb2_area_bottom_pane_g3_ParamLimits

0xc649,	// (0x0001b96a) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x0001f0bf) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x0001f0bf) vkb2_area_bottom_pane_g

0x1fd0,	// (0x000112f1) vkb2_top_cell_left_pane_ParamLimits

0x1fd0,	// (0x000112f1) vkb2_top_cell_left_pane

0xedbf,	// (0x0001e0e0) vkb2_top_entry_pane_g1_ParamLimits

0xedbf,	// (0x0001e0e0) vkb2_top_entry_pane_g1

0xedcd,	// (0x0001e0ee) vkb2_top_entry_pane_t1_ParamLimits

0xedcd,	// (0x0001e0ee) vkb2_top_entry_pane_t1

0x9970,	// (0x00018c91) vkb2_top_entry_pane_t2_ParamLimits

0x9970,	// (0x00018c91) vkb2_top_entry_pane_t2

0x99a2,	// (0x00018cc3) vkb2_top_entry_pane_t3_ParamLimits

0x99a2,	// (0x00018cc3) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x0001f0c6) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x0001f0c6) vkb2_top_entry_pane_t

0xc6b3,	// (0x0001b9d4) vkb2_top_grid_right_pane_g1_ParamLimits

0xc6b3,	// (0x0001b9d4) vkb2_top_grid_right_pane_g1

0x2033,	// (0x00011354) vkb2_top_grid_right_pane_g2_ParamLimits

0x2033,	// (0x00011354) vkb2_top_grid_right_pane_g2

0x204b,	// (0x0001136c) vkb2_top_grid_right_pane_g3_ParamLimits

0x204b,	// (0x0001136c) vkb2_top_grid_right_pane_g3

0xc6c9,	// (0x0001b9ea) vkb2_top_grid_right_pane_g4_ParamLimits

0xc6c9,	// (0x0001b9ea) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x0001f0cd) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x0001f0cd) vkb2_top_grid_right_pane_g

0x2079,	// (0x0001139a) vkb2_top_cell_left_pane_g1

0x2090,	// (0x000113b1) vkb2_cell_keypad_pane_g1_ParamLimits

0x2090,	// (0x000113b1) vkb2_cell_keypad_pane_g1

0x99c6,	// (0x00018ce7) vkb2_cell_keypad_pane_t1_ParamLimits

0x99c6,	// (0x00018ce7) vkb2_cell_keypad_pane_t1

0x209e,	// (0x000113bf) vkb2_cell_bottom_grid_pane_ParamLimits

0x209e,	// (0x000113bf) vkb2_cell_bottom_grid_pane

0x20d7,	// (0x000113f8) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0001dd92) aid_call2_pane_cp02

0xea79,	// (0x0001dd9a) aid_call_pane_cp02

0xea81,	// (0x0001dda2) clock_digital_number_pane_cp10

0xea89,	// (0x0001ddaa) clock_digital_number_pane_cp11

0xea91,	// (0x0001ddb2) clock_digital_number_pane_cp12

0xea99,	// (0x0001ddba) clock_digital_number_pane_cp13

0xeaa1,	// (0x0001ddc2) clock_digital_separator_pane_cp10

0x3d33,	// (0x00013054) popup_clock_digital_analogue_window_cp2_g1

0x3d33,	// (0x00013054) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0001ddca) popup_clock_digital_analogue_window_cp2_g3

0x3d33,	// (0x00013054) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0001ddca) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x0001f082) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0001ddd2) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0001dde0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x0001f08d) popup_clock_digital_analogue_window_cp2_t

0x7758,	// (0x00016a79) clock_digital_number_pane_cp10_g1

0x7758,	// (0x00016a79) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0001ee69) clock_digital_number_pane_cp10_g

0x7758,	// (0x00016a79) clock_digital_separator_pane_cp10_g1

0x7758,	// (0x00016a79) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0001ee69) clock_digital_separator_pane_cp10_g

0x93f0,	// (0x00018711) uniindi_top_pane_g3

0x9401,	// (0x00018722) uniindi_top_pane_g4

0x1eb1,	// (0x000111d2) vkb2_row_keypad_pane_ParamLimits

0x1eb1,	// (0x000111d2) vkb2_row_keypad_pane

0x20f7,	// (0x00011418) vkb2_cell_t_keypad_pane_ParamLimits

0x20f7,	// (0x00011418) vkb2_cell_t_keypad_pane

0x2107,	// (0x00011428) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2107,	// (0x00011428) vkb2_cell_t_keypad_pane_cp08

0x211a,	// (0x0001143b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x211a,	// (0x0001143b) vkb2_cell_t_keypad_pane_cp09

0x212e,	// (0x0001144f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x212e,	// (0x0001144f) vkb2_cell_t_keypad_pane_cp01

0x213f,	// (0x00011460) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x213f,	// (0x00011460) vkb2_cell_t_keypad_pane_cp02

0x2150,	// (0x00011471) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2150,	// (0x00011471) vkb2_cell_t_keypad_pane_cp03

0x2161,	// (0x00011482) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2161,	// (0x00011482) vkb2_cell_t_keypad_pane_cp04

0x2172,	// (0x00011493) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2172,	// (0x00011493) vkb2_cell_t_keypad_pane_cp05

0x2183,	// (0x000114a4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2183,	// (0x000114a4) vkb2_cell_t_keypad_pane_cp06

0x2194,	// (0x000114b5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2194,	// (0x000114b5) vkb2_cell_t_keypad_pane_cp07

0x21a5,	// (0x000114c6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x21a5,	// (0x000114c6) vkb2_cell_t_keypad_pane_cp10

0x1957,	// (0x00010c78) vkb2_cell_t_keypad_pane_g1

0x99dd,	// (0x00018cfe) vkb2_cell_t_keypad_pane_t1

0x0361,	// (0x0000f682) popup_grid_graphic2_window

0xee06,	// (0x0001e127) aid_size_cell_graphic2_ParamLimits

0xee06,	// (0x0001e127) aid_size_cell_graphic2

0xee44,	// (0x0001e165) bg_popup_window_pane_cp21_ParamLimits

0xee44,	// (0x0001e165) bg_popup_window_pane_cp21

0xee52,	// (0x0001e173) graphic2_pages_pane_ParamLimits

0xee52,	// (0x0001e173) graphic2_pages_pane

0xeea8,	// (0x0001e1c9) grid_graphic2_control_pane_ParamLimits

0xeea8,	// (0x0001e1c9) grid_graphic2_control_pane

0xeef0,	// (0x0001e211) grid_graphic2_pane_ParamLimits

0xeef0,	// (0x0001e211) grid_graphic2_pane

0xef77,	// (0x0001e298) cell_graphic2_pane

0x0361,	// (0x0000f682) main_comp_mode_pane

0x8c02,	// (0x00017f23) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0001dad1) bg_popup_window_pane_cp19_ParamLimits

0x9042,	// (0x00018363) bg_touch_area_indi_pane_ParamLimits

0x9042,	// (0x00018363) bg_touch_area_indi_pane

0x9058,	// (0x00018379) bg_touch_area_indi_pane_cp01_ParamLimits

0x9058,	// (0x00018379) bg_touch_area_indi_pane_cp01

0x906e,	// (0x0001838f) bg_touch_area_indi_pane_cp02_ParamLimits

0x906e,	// (0x0001838f) bg_touch_area_indi_pane_cp02

0x9086,	// (0x000183a7) bg_touch_area_indi_pane_cp03_ParamLimits

0x9086,	// (0x000183a7) bg_touch_area_indi_pane_cp03

0x90a0,	// (0x000183c1) popup_slider_window_g1_ParamLimits

0x90bc,	// (0x000183dd) popup_slider_window_g2_ParamLimits

0x90d8,	// (0x000183f9) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x0001f017) popup_slider_window_g_ParamLimits

0x9134,	// (0x00018455) popup_slider_window_t1_ParamLimits

0x91a8,	// (0x000184c9) small_volume_slider_vertical_pane_ParamLimits

0xef77,	// (0x0001e298) cell_graphic2_pane_ParamLimits

0xefd4,	// (0x0001e2f5) bg_button_pane_cp10_ParamLimits

0xefd4,	// (0x0001e2f5) bg_button_pane_cp10

0xefe7,	// (0x0001e308) bg_button_pane_cp11_ParamLimits

0xefe7,	// (0x0001e308) bg_button_pane_cp11

0xeffa,	// (0x0001e31b) graphic2_pages_pane_g1_ParamLimits

0xeffa,	// (0x0001e31b) graphic2_pages_pane_g1

0xf015,	// (0x0001e336) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0001e336) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x0001f0db) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x0001f0db) graphic2_pages_pane_g

0xf02d,	// (0x0001e34e) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0001e34e) graphic2_pages_pane_t1

0xf045,	// (0x0001e366) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0001e366) cell_graphic2_control_pane

0xf077,	// (0x0001e398) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0001e398) cell_graphic2_pane_g1

0xd53c,	// (0x0001c85d) cell_graphic2_pane_g2_ParamLimits

0xd53c,	// (0x0001c85d) cell_graphic2_pane_g2

0xedb2,	// (0x0001e0d3) cell_graphic2_pane_g3_ParamLimits

0xedb2,	// (0x0001e0d3) cell_graphic2_pane_g3

0xd549,	// (0x0001c86a) cell_graphic2_pane_g4_ParamLimits

0xd549,	// (0x0001c86a) cell_graphic2_pane_g4

0xf084,	// (0x0001e3a5) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0001e3a5) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x0001f0e0) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x0001f0e0) cell_graphic2_pane_g

0xf0a4,	// (0x0001e3c5) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0001e3c5) cell_graphic2_pane_t1

0x5a17,	// (0x00014d38) grid_highlight_pane_cp11_ParamLimits

0x5a17,	// (0x00014d38) grid_highlight_pane_cp11

0x2a63,	// (0x00011d84) bg_button_pane_cp05

0xf0d8,	// (0x0001e3f9) cell_graphic2_control_pane_g1

0x7758,	// (0x00016a79) bg_touch_area_indi_pane_g1

0x9cab,	// (0x00018fcc) aid_cmod_rocker_key_size

0x9cb5,	// (0x00018fd6) aid_cmode_itu_key_size

0x9cbf,	// (0x00018fe0) main_cmode_video_pane

0x9cc9,	// (0x00018fea) main_comp_mode_itu_pane

0x9cd5,	// (0x00018ff6) main_comp_mode_rocker_pane

0x9ce1,	// (0x00019002) cell_cmode_rocker_pane_ParamLimits

0x9ce1,	// (0x00019002) cell_cmode_rocker_pane

0x9cf3,	// (0x00019014) cell_cmode_itu_pane_ParamLimits

0x9cf3,	// (0x00019014) cell_cmode_itu_pane

0x357f,	// (0x000128a0) bg_button_pane_cp06_ParamLimits

0x357f,	// (0x000128a0) bg_button_pane_cp06

0x79c6,	// (0x00016ce7) cell_cmode_rocker_pane_g1_ParamLimits

0x79c6,	// (0x00016ce7) cell_cmode_rocker_pane_g1

0x924c,	// (0x0001856d) cell_cmode_rocker_pane_g2_ParamLimits

0x924c,	// (0x0001856d) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x0001f0f0) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x0001f0f0) cell_cmode_rocker_pane_g

0x26cc,	// (0x000119ed) bg_button_pane_cp07

0x9d08,	// (0x00019029) cell_cmode_itu_pane_g1

0x9d11,	// (0x00019032) cell_cmode_itu_pane_t1

0x9d1f,	// (0x00019040) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x0001f0f5) cell_cmode_itu_pane_t

0x9473,	// (0x00018794) aid_touch_ctrl_left

0x947b,	// (0x0001879c) aid_touch_ctrl_right

0x26cc,	// (0x000119ed) compa_mode_pane

0xf0fc,	// (0x0001e41d) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0001e427) aid_cmode_itu_key_size_cp

0x9d41,	// (0x00019062) compa_mode_pane_g1

0x9d49,	// (0x0001906a) compa_mode_pane_g2

0x9d51,	// (0x00019072) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x0001f0fa) compa_mode_pane_g

0xf110,	// (0x0001e431) main_comp_mode_itu_pane_cp

0xf118,	// (0x0001e439) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0001e441) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0001e441) cell_cmode_itu_pane_cp

0xf135,	// (0x0001e456) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0001e456) cell_cmode_rocker_pane_cp

0x357f,	// (0x000128a0) bg_button_pane_cp06_cp_ParamLimits

0x357f,	// (0x000128a0) bg_button_pane_cp06_cp

0x79c6,	// (0x00016ce7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x79c6,	// (0x00016ce7) cell_cmode_rocker_pane_g1_cp

0x7758,	// (0x00016a79) cell_cmode_rocker_pane_g2_cp

0x26cc,	// (0x000119ed) bg_button_pane_cp07_cp

0xf147,	// (0x0001e468) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0001e471) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0001e471) cell_cmode_itu_pane_t2_cp

0xdd06,	// (0x0001d027) settings_code_pane_cp2

0x27c0,	// (0x00011ae1) bg_popup_window_pane_cp3_ParamLimits

0x2c31,	// (0x00011f52) heading_pane_cp3_ParamLimits

0x2c3d,	// (0x00011f5e) listscroll_popup_graphic_pane_ParamLimits

0x1700,	// (0x00010a21) fep_hwr_aid_pane_ParamLimits

0x1b77,	// (0x00010e98) aid_touch_sctrl_top_ParamLimits

0x1b92,	// (0x00010eb3) sctrl_sk_top_pane_g1_ParamLimits

0x1957,	// (0x00010c78) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x0001f030) sctrl_sk_top_pane_g_ParamLimits

0x1b9f,	// (0x00010ec0) sctrl_sk_top_pane_t1_ParamLimits

0x1b77,	// (0x00010e98) aid_touch_sctrl_bottom_ParamLimits

0x1b9f,	// (0x00010ec0) sctrl_sk_bottom_pane_t1_ParamLimits

0x93bc,	// (0x000186dd) aid_area_touch_clock

0xc4f7,	// (0x0001b818) aid_vkb2_area_top_pane_cell_ParamLimits

0xc4f7,	// (0x0001b818) aid_vkb2_area_top_pane_cell

0xc5a2,	// (0x0001b8c3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc5a2,	// (0x0001b8c3) aid_vkb2_area_bottom_pane_cell

0x9928,	// (0x00018c49) popup_char_count_window

0x9da7,	// (0x000190c8) popup_char_count_window_g1

0x9db0,	// (0x000190d1) popup_char_count_window_g2

0x9db9,	// (0x000190da) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x0001f101) popup_char_count_window_g

0x9dc2,	// (0x000190e3) popup_char_count_window_t1

0x1c4e,	// (0x00010f6f) popup_fep_char_preview_window_ParamLimits

0x1c4e,	// (0x00010f6f) popup_fep_char_preview_window

0xc517,	// (0x0001b838) vkb2_top_candi_pane_ParamLimits

0xc517,	// (0x0001b838) vkb2_top_candi_pane

0xf15e,	// (0x0001e47f) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0001e47f) cell_vkb2_top_candi_pane

0x21ba,	// (0x000114db) bg_popup_fep_char_preview_window_ParamLimits

0x21ba,	// (0x000114db) bg_popup_fep_char_preview_window

0x21c8,	// (0x000114e9) popup_fep_char_preview_window_t1_ParamLimits

0x21c8,	// (0x000114e9) popup_fep_char_preview_window_t1

0x9e1d,	// (0x0001913e) bg_popup_fep_char_preview_window_g1

0x9e25,	// (0x00019146) bg_popup_fep_char_preview_window_g2

0x9e2d,	// (0x0001914e) bg_popup_fep_char_preview_window_g3

0x9e35,	// (0x00019156) bg_popup_fep_char_preview_window_g4

0x9e3d,	// (0x0001915e) bg_popup_fep_char_preview_window_g5

0x2202,	// (0x00011523) bg_popup_fep_char_preview_window_g6

0x9e45,	// (0x00019166) bg_popup_fep_char_preview_window_g7

0x9e4d,	// (0x0001916e) bg_popup_fep_char_preview_window_g8

0x9e55,	// (0x00019176) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x0001f108) bg_popup_fep_char_preview_window_g

0x1957,	// (0x00010c78) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1957,	// (0x00010c78) cell_vkb2_top_candi_pane_g1

0x1965,	// (0x00010c86) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1965,	// (0x00010c86) cell_vkb2_top_candi_pane_g2

0x9e5d,	// (0x0001917e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9e5d,	// (0x0001917e) cell_vkb2_top_candi_pane_g3

0x220a,	// (0x0001152b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x220a,	// (0x0001152b) cell_vkb2_top_candi_pane_g4

0x8037,	// (0x00017358) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8037,	// (0x00017358) cell_vkb2_top_candi_pane_g5

0x222b,	// (0x0001154c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x222b,	// (0x0001154c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x0001f11b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x0001f11b) cell_vkb2_top_candi_pane_g

0x2239,	// (0x0001155a) cell_vkb2_top_candi_pane_t1

0x153c,	// (0x0001085d) aid_size_touch_slider_mark_ParamLimits

0x153c,	// (0x0001085d) aid_size_touch_slider_mark

0xee8e,	// (0x0001e1af) grid_graphic2_catg_pane_ParamLimits

0xee8e,	// (0x0001e1af) grid_graphic2_catg_pane

0xef4a,	// (0x0001e26b) popup_grid_graphic2_window_t1_ParamLimits

0xef4a,	// (0x0001e26b) popup_grid_graphic2_window_t1

0xef60,	// (0x0001e281) popup_grid_graphic2_window_t2_ParamLimits

0xef60,	// (0x0001e281) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x0001f0d6) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x0001f0d6) popup_grid_graphic2_window_t

0x2a63,	// (0x00011d84) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0001e3f9) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0001e4e5) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0001e4e5) cell_graphic2_catg_pane

0x26cc,	// (0x000119ed) bg_button_pane_cp12

0xf1d6,	// (0x0001e4f7) cell_graphic2_catg_pane_g1

0x9388,	// (0x000186a9) cell_tb_ext_pane_t1_ParamLimits

0x1ff0,	// (0x00011311) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1ff0,	// (0x00011311) vkb2_top_cell_right_narrow_pane

0x2008,	// (0x00011329) vkb2_top_cell_right_wide_pane_ParamLimits

0x2008,	// (0x00011329) vkb2_top_cell_right_wide_pane

0x16f2,	// (0x00010a13) bg_vkb2_func_pane_ParamLimits

0x16f2,	// (0x00010a13) bg_vkb2_func_pane

0x2079,	// (0x0001139a) vkb2_top_cell_left_pane_g1_ParamLimits

0x16f2,	// (0x00010a13) bg_vkb2_fuc_pane_cp03_ParamLimits

0x16f2,	// (0x00010a13) bg_vkb2_fuc_pane_cp03

0x20d7,	// (0x000113f8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c28,	// (0x00013f49) bg_vkb2_func_pane_g1

0x4c30,	// (0x00013f51) bg_vkb2_func_pane_g2

0x4c40,	// (0x00013f61) bg_vkb2_func_pane_g3

0x4c38,	// (0x00013f59) bg_vkb2_func_pane_g4

0x4c48,	// (0x00013f69) bg_vkb2_func_pane_g5

0x4c50,	// (0x00013f71) bg_vkb2_func_pane_g6

0x4c58,	// (0x00013f79) bg_vkb2_func_pane_g7

0x4c60,	// (0x00013f81) bg_vkb2_func_pane_g8

0x4c20,	// (0x00013f41) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x0001f128) bg_vkb2_func_pane_g

0x16f2,	// (0x00010a13) bg_vkb2_fuc_pane_cp01_ParamLimits

0x16f2,	// (0x00010a13) bg_vkb2_fuc_pane_cp01

0x2079,	// (0x0001139a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2079,	// (0x0001139a) vkb2_top_cell_right_wide_pane_g1

0x16f2,	// (0x00010a13) bg_vkb2_fuc_pane_cp02_ParamLimits

0x16f2,	// (0x00010a13) bg_vkb2_fuc_pane_cp02

0x20d7,	// (0x000113f8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20d7,	// (0x000113f8) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0001da0b) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0001da0b) aid_touch_area_decrease

0xe724,	// (0x0001da45) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0001da45) aid_touch_area_increase

0xe74c,	// (0x0001da6d) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0001da6d) aid_touch_area_mute

0xe77c,	// (0x0001da9d) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0001da9d) aid_touch_area_slider

0xe7bc,	// (0x0001dadd) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0001dadd) popup_slider_window_g4

0xe7e4,	// (0x0001db05) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0001db05) popup_slider_window_g5

0xe818,	// (0x0001db39) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0001db39) popup_slider_window_g6

0x9162,	// (0x00018483) popup_slider_window_t2_ParamLimits

0x9162,	// (0x00018483) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0001f024) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0001f024) popup_slider_window_t

0xe834,	// (0x0001db55) slider_pane_ParamLimits

0xe834,	// (0x0001db55) slider_pane

0x9e99,	// (0x000191ba) slider_pane_g1_ParamLimits

0x9e99,	// (0x000191ba) slider_pane_g1

0x9ead,	// (0x000191ce) slider_pane_g2_ParamLimits

0x9ead,	// (0x000191ce) slider_pane_g2

0x9ec3,	// (0x000191e4) slider_pane_g3_ParamLimits

0x9ec3,	// (0x000191e4) slider_pane_g3

0x0003,

0xfe1a,	// (0x0001f13b) slider_pane_g_ParamLimits

0xfe1a,	// (0x0001f13b) slider_pane_g

0xc0e6,	// (0x0001b407) popup_tb_float_extension_window_ParamLimits

0xc0e6,	// (0x0001b407) popup_tb_float_extension_window

0x9eef,	// (0x00019210) aid_size_cell_tb_float_ext

0x26cc,	// (0x000119ed) bg_popup_sub_window_cp28

0x9efb,	// (0x0001921c) grid_tb_float_ext_pane

0x9f05,	// (0x00019226) cell_tb_float_ext_pane_ParamLimits

0x9f05,	// (0x00019226) cell_tb_float_ext_pane

0x9f1f,	// (0x00019240) cell_tb_float_ext_pane_g1

0x9f28,	// (0x00019249) grid_highlight_pane_cp12

0xc300,	// (0x0001b621) cell_last_hwr_side_pane_ParamLimits

0xc300,	// (0x0001b621) cell_last_hwr_side_pane

0x7758,	// (0x00016a79) cell_last_hwr_side_pane_g1

0x9f31,	// (0x00019252) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0001f144) cell_last_hwr_side_pane_g

0xc67e,	// (0x0001b99f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc67e,	// (0x0001b99f) vkb2_area_bottom_space_btn_pane

0x1957,	// (0x00010c78) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x99dd,	// (0x00018cfe) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2239,	// (0x0001155a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2258,	// (0x00011579) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2258,	// (0x00011579) vkb2_area_bottom_space_btn_pane_g1

0x2292,	// (0x000115b3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2292,	// (0x000115b3) vkb2_area_bottom_space_btn_pane_g2

0x22c8,	// (0x000115e9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x22c8,	// (0x000115e9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x0001f149) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x0001f149) vkb2_area_bottom_space_btn_pane_g

0x17b5,	// (0x00010ad6) cel_fep_hwr_func_pane_ParamLimits

0x17b5,	// (0x00010ad6) cel_fep_hwr_func_pane

0xc2d5,	// (0x0001b5f6) cell_hwr_side_button_pane_ParamLimits

0xc2d5,	// (0x0001b5f6) cell_hwr_side_button_pane

0x93bc,	// (0x000186dd) aid_area_touch_clock_ParamLimits

0x2a63,	// (0x00011d84) bg_uniindi_top_pane_ParamLimits

0x93ce,	// (0x000186ef) uniindi_top_pane_g1_ParamLimits

0x93e4,	// (0x00018705) uniindi_top_pane_g2_ParamLimits

0x93f0,	// (0x00018711) uniindi_top_pane_g3_ParamLimits

0x9401,	// (0x00018722) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x0001f05c) uniindi_top_pane_g_ParamLimits

0x940e,	// (0x0001872f) uniindi_top_pane_t1_ParamLimits

0x2a63,	// (0x00011d84) bg_vkb2_func_pane_cp01_ParamLimits

0x2a63,	// (0x00011d84) bg_vkb2_func_pane_cp01

0x9f3a,	// (0x0001925b) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f3a,	// (0x0001925b) cel_fep_hwr_func_pane_g1

0x2a63,	// (0x00011d84) bg_vkb2_func_pane_cp02_ParamLimits

0x2a63,	// (0x00011d84) bg_vkb2_func_pane_cp02

0x9f3a,	// (0x0001925b) cell_hwr_side_button_pane_g1_ParamLimits

0x9f3a,	// (0x0001925b) cell_hwr_side_button_pane_g1

0x4a8b,	// (0x00013dac) status_pane_g4_ParamLimits

0x4a8b,	// (0x00013dac) status_pane_g4

0x4aa5,	// (0x00013dc6) status_pane_t1

0x7472,	// (0x00016793) form2_midp_gauge_slider_cont_pane

0x747a,	// (0x0001679b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfce,	// (0x0001d2ef) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdfe2,	// (0x0001d303) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0001ee1c) form2_midp_gauge_slider_pane_t_ParamLimits

0x74b0,	// (0x000167d1) form2_midp_slider_pane_ParamLimits

0x1c0e,	// (0x00010f2f) aid_size_cell_func_vkb2_ParamLimits

0x1c0e,	// (0x00010f2f) aid_size_cell_func_vkb2

0x9edb,	// (0x000191fc) slider_pane_g4_ParamLimits

0x9edb,	// (0x000191fc) slider_pane_g4

0xc6df,	// (0x0001ba00) form2_midp_gauge_slider_pane_t2_cp01

0xc6ef,	// (0x0001ba10) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc6ef,	// (0x0001ba10) form2_midp_gauge_slider_pane_t3_cp01

0x233d,	// (0x0001165e) form2_midp_slider_pane_cp01

0x26cc,	// (0x000119ed) navi_smil_pane

0x9f73,	// (0x00019294) navi_smil_pane_g1

0x9f7b,	// (0x0001929c) navi_smil_pane_t1

0x9f48,	// (0x00019269) form2_midp_slider_pane_g1

0x9f51,	// (0x00019272) form2_midp_slider_pane_g2

0x9f59,	// (0x0001927a) form2_midp_slider_pane_g3

0x9f48,	// (0x00019269) form2_midp_slider_pane_g4

0xf1df,	// (0x0001e500) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x0001f152) form2_midp_slider_pane_g

0x2302,	// (0x00011623) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2302,	// (0x00011623) vkb2_area_bottom_space_btn_pane_g4

0xd6ad,	// (0x0001c9ce) lc0_navi_pane_ParamLimits

0xd6ad,	// (0x0001c9ce) lc0_navi_pane

0xd717,	// (0x0001ca38) lc0_stat_indi_pane_ParamLimits

0xd717,	// (0x0001ca38) lc0_stat_indi_pane

0xd72c,	// (0x0001ca4d) ls0_title_pane_ParamLimits

0xd72c,	// (0x0001ca4d) ls0_title_pane

0x357f,	// (0x000128a0) bg_popup_sub_pane_cp14_ParamLimits

0x93a3,	// (0x000186c4) list_uniindi_pane_ParamLimits

0x93af,	// (0x000186d0) uniindi_top_pane_ParamLimits

0x944b,	// (0x0001876c) list_single_uniindi_pane_g1_ParamLimits

0x945e,	// (0x0001877f) list_single_uniindi_pane_t1_ParamLimits

0xc70e,	// (0x0001ba2f) lc0_stat_clock_pane_ParamLimits

0xc70e,	// (0x0001ba2f) lc0_stat_clock_pane

0xf1ea,	// (0x0001e50b) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0001e50b) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0001e518) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0001e518) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x0001f15d) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x0001f15d) lc0_stat_indi_pane_g

0xc71b,	// (0x0001ba3c) lc0_uni_indicator_pane_ParamLimits

0xc71b,	// (0x0001ba3c) lc0_uni_indicator_pane

0xf204,	// (0x0001e525) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0001e525) ls0_title_pane_g1

0xf218,	// (0x0001e539) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0001e539) ls0_title_pane_t1

0xc728,	// (0x0001ba49) lc0_uni_indicator_pane_g1_ParamLimits

0xc728,	// (0x0001ba49) lc0_uni_indicator_pane_g1

0x9fed,	// (0x0001930e) lc0_stat_clock_pane_t1

0x0361,	// (0x0000f682) main_ai5_pane

0x9ffb,	// (0x0001931c) ai5_sk_pane_ParamLimits

0x9ffb,	// (0x0001931c) ai5_sk_pane

0xf246,	// (0x0001e567) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0001e567) cell_ai5_widget_pane

0xa0d2,	// (0x000193f3) aid_size_cell_widget_grid

0xa0e8,	// (0x00019409) bg_ai5_widget_pane_ParamLimits

0xa0e8,	// (0x00019409) bg_ai5_widget_pane

0xa15c,	// (0x0001947d) cell_ai5_widget_pane_g2

0xa16c,	// (0x0001948d) cell_ai5_widget_pane_g3

0xa183,	// (0x000194a4) cell_ai5_widget_pane_g4

0xa18f,	// (0x000194b0) cell_ai5_widget_pane_g5

0xa19b,	// (0x000194bc) cell_ai5_widget_pane_g6

0xa1a7,	// (0x000194c8) cell_ai5_widget_pane_g7

0xa1ef,	// (0x00019510) cell_ai5_widget_pane_t1_ParamLimits

0xa1ef,	// (0x00019510) cell_ai5_widget_pane_t1

0xa20c,	// (0x0001952d) cell_ai5_widget_pane_t2_ParamLimits

0xa20c,	// (0x0001952d) cell_ai5_widget_pane_t2

0xa224,	// (0x00019545) cell_ai5_widget_pane_t3_ParamLimits

0xa224,	// (0x00019545) cell_ai5_widget_pane_t3

0xa23c,	// (0x0001955d) cell_ai5_widget_pane_t4_ParamLimits

0xa23c,	// (0x0001955d) cell_ai5_widget_pane_t4

0xa259,	// (0x0001957a) cell_ai5_widget_pane_t5_ParamLimits

0xa259,	// (0x0001957a) cell_ai5_widget_pane_t5

0xa278,	// (0x00019599) cell_ai5_widget_pane_t6_ParamLimits

0xa278,	// (0x00019599) cell_ai5_widget_pane_t6

0xa28a,	// (0x000195ab) cell_ai5_widget_pane_t7_ParamLimits

0xa28a,	// (0x000195ab) cell_ai5_widget_pane_t7

0xa2a3,	// (0x000195c4) cell_ai5_widget_pane_t8_ParamLimits

0xa2a3,	// (0x000195c4) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x0001f177) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x0001f177) cell_ai5_widget_pane_t

0xa2f7,	// (0x00019618) grid_ai5_widget_pane

0x357f,	// (0x000128a0) highlight_cell_ai5_widget_pane_ParamLimits

0x357f,	// (0x000128a0) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0001e5d1) ai5_sk_left_pane

0xf2ba,	// (0x0001e5db) ai5_sk_middle_pane

0xf2c4,	// (0x0001e5e5) ai5_sk_right_pane

0xa32d,	// (0x0001964e) bg_ai5_widget_pane_g1_ParamLimits

0xa32d,	// (0x0001964e) bg_ai5_widget_pane_g1

0xa339,	// (0x0001965a) bg_ai5_widget_pane_g2_ParamLimits

0xa339,	// (0x0001965a) bg_ai5_widget_pane_g2

0xa345,	// (0x00019666) bg_ai5_widget_pane_g3_ParamLimits

0xa345,	// (0x00019666) bg_ai5_widget_pane_g3

0xa351,	// (0x00019672) bg_ai5_widget_pane_g4_ParamLimits

0xa351,	// (0x00019672) bg_ai5_widget_pane_g4

0xa35d,	// (0x0001967e) bg_ai5_widget_pane_g5_ParamLimits

0xa35d,	// (0x0001967e) bg_ai5_widget_pane_g5

0xa369,	// (0x0001968a) bg_ai5_widget_pane_g6_ParamLimits

0xa369,	// (0x0001968a) bg_ai5_widget_pane_g6

0xa375,	// (0x00019696) bg_ai5_widget_pane_g7_ParamLimits

0xa375,	// (0x00019696) bg_ai5_widget_pane_g7

0xa381,	// (0x000196a2) bg_ai5_widget_pane_g8_ParamLimits

0xa381,	// (0x000196a2) bg_ai5_widget_pane_g8

0xa38d,	// (0x000196ae) bg_ai5_widget_pane_g9_ParamLimits

0xa38d,	// (0x000196ae) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x0001f18c) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x0001f18c) bg_ai5_widget_pane_g

0xa3bf,	// (0x000196e0) cell_shortcut_ai5_widget_pane_ParamLimits

0xa3bf,	// (0x000196e0) cell_shortcut_ai5_widget_pane

0x43c2,	// (0x000136e3) bg_cell_shortcut_ai5_widget_pane

0xa3d0,	// (0x000196f1) cell_grid_ai5_widget_pane_g1

0x43c2,	// (0x000136e3) highlight_cell_shortcut_ai5_widget_pane

0x4c28,	// (0x00013f49) ai5_sk_left_pane_g1

0xa3d9,	// (0x000196fa) ai5_sk_left_pane_g2

0xa3e1,	// (0x00019702) ai5_sk_left_pane_g3

0xa3e9,	// (0x0001970a) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x0001f19f) ai5_sk_left_pane_g

0xa3f1,	// (0x00019712) ai5_sk_left_pane_t1

0x4c30,	// (0x00013f51) ai5_sk_right_pane_g1

0xa3ff,	// (0x00019720) ai5_sk_right_pane_g2

0xa407,	// (0x00019728) ai5_sk_right_pane_g3

0xa40f,	// (0x00019730) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x0001f1a8) ai5_sk_right_pane_g

0xa417,	// (0x00019738) ai5_sk_right_pane_t1

0x4c30,	// (0x00013f51) ai5_sk_middle_pane_g1

0x4c28,	// (0x00013f49) ai5_sk_middle_pane_g2

0x4c48,	// (0x00013f69) ai5_sk_middle_pane_g3

0xa407,	// (0x00019728) ai5_sk_middle_pane_g4

0xa3e1,	// (0x00019702) ai5_sk_middle_pane_g5

0xa425,	// (0x00019746) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0001e5ef) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x0001f1b1) ai5_sk_middle_pane_g

0xd599,	// (0x0001c8ba) aid_touch_area_size_lc0_ParamLimits

0xd599,	// (0x0001c8ba) aid_touch_area_size_lc0

0x1986,	// (0x00010ca7) cell_hwr_candidate_pane_t1_ParamLimits

0x476e,	// (0x00013a8f) aid_touch_navi_pane

0xd825,	// (0x0001cb46) status_dt_navi_pane_ParamLimits

0xd825,	// (0x0001cb46) status_dt_navi_pane

0xd83d,	// (0x0001cb5e) status_dt_sta_pane_ParamLimits

0xd83d,	// (0x0001cb5e) status_dt_sta_pane

0xf2d6,	// (0x0001e5f7) dt_sta_controll_pane

0xf2e3,	// (0x0001e604) dt_sta_indi_pane

0xf2f0,	// (0x0001e611) dt_sta_title_pane

0x2a63,	// (0x00011d84) bg_dt_sta_indi_pane_ParamLimits

0x2a63,	// (0x00011d84) bg_dt_sta_indi_pane

0xa466,	// (0x00019787) dt_sta_battery_pane

0xf302,	// (0x0001e623) dt_sta_indi_pane_g1

0xf30b,	// (0x0001e62c) dt_sta_indi_pane_g2

0xf314,	// (0x0001e635) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x0001f1c0) dt_sta_indi_pane_g

0xf31d,	// (0x0001e63e) dt_sta_signal_pane

0x357f,	// (0x000128a0) bg_dt_sta_title_pane_ParamLimits

0x357f,	// (0x000128a0) bg_dt_sta_title_pane

0xa492,	// (0x000197b3) dt_sta_title_pane_g1

0xf326,	// (0x0001e647) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0001e647) dt_sta_title_pane_t1

0x26cc,	// (0x000119ed) bg_dt_sta_control_pane

0xf33b,	// (0x0001e65c) dt_sta_controll_pane_g1

0xa4b8,	// (0x000197d9) bg_dt_sta_title_pane_g1

0xa4c1,	// (0x000197e2) bg_dt_sta_title_pane_g2

0xa4ca,	// (0x000197eb) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x0001f1c7) bg_dt_sta_title_pane_g

0x7758,	// (0x00016a79) bg_dt_sta_indi_pane_g1

0xa4d3,	// (0x000197f4) dt_sta_signal_pane_g1

0xa4db,	// (0x000197fc) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x0001f1ce) dt_sta_signal_pane_g

0xa4e3,	// (0x00019804) dt_sta_battery_pane_g1

0xa4ec,	// (0x0001980d) dt_sta_battery_pane_t1

0x7758,	// (0x00016a79) bg_dt_sta_control_pane_g1

0x3e41,	// (0x00013162) fep_china_uni_eep_pane

0x3e49,	// (0x0001316a) fep_china_uni_entry_pane_ParamLimits

0x3e59,	// (0x0001317a) popup_fep_china_uni_window_g1_ParamLimits

0x3e69,	// (0x0001318a) popup_fep_china_uni_window_g2_ParamLimits

0x3e69,	// (0x0001318a) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ea39) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ea39) popup_fep_china_uni_window_g

0xa4fb,	// (0x0001981c) fep_china_uni_eep_pane_g1

0xa503,	// (0x00019824) fep_china_uni_eep_pane_t1

0x9f6a,	// (0x0001928b) aid_touch_area_size_smil_player

0x48ba,	// (0x00013bdb) lc0_clock_pane

0x4a99,	// (0x00013dba) status_pane_g5_ParamLimits

0x4a99,	// (0x00013dba) status_pane_g5

0xbc74,	// (0x0001af95) popup_keymap_window

0x4a5f,	// (0x00013d80) status_icon_pane

0xa16c,	// (0x0001948d) cell_ai5_widget_pane_g3_ParamLimits

0xa183,	// (0x000194a4) cell_ai5_widget_pane_g4_ParamLimits

0xa18f,	// (0x000194b0) cell_ai5_widget_pane_g5_ParamLimits

0xa1b3,	// (0x000194d4) cell_ai5_widget_pane_g8_ParamLimits

0xa1b3,	// (0x000194d4) cell_ai5_widget_pane_g8

0xa1c7,	// (0x000194e8) cell_ai5_widget_pane_g9_ParamLimits

0xa1c7,	// (0x000194e8) cell_ai5_widget_pane_g9

0xa1db,	// (0x000194fc) cell_ai5_widget_pane_g10_ParamLimits

0xa1db,	// (0x000194fc) cell_ai5_widget_pane_g10

0xa512,	// (0x00019833) status_icon_pane_g1

0x26cc,	// (0x000119ed) bg_popup_sub_pane_cp13

0xa51a,	// (0x0001983b) popup_keymap_window_t1

0xd507,	// (0x0001c828) control_pane_g6_ParamLimits

0xd507,	// (0x0001c828) control_pane_g6

0xd514,	// (0x0001c835) control_pane_g7_ParamLimits

0xd514,	// (0x0001c835) control_pane_g7

0xd521,	// (0x0001c842) control_pane_g8_ParamLimits

0xd521,	// (0x0001c842) control_pane_g8

0xf2d6,	// (0x0001e5f7) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0001e604) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0001e611) dt_sta_title_pane_ParamLimits

0x2f6c,	// (0x0001228d) aid_size_touch_scroll_bar_cale

0x043a,	// (0x0000f75b) popup_discreet_window_ParamLimits

0x043a,	// (0x0000f75b) popup_discreet_window

0xb883,	// (0x0001aba4) popup_sk_window

0x539b,	// (0x000146bc) bg_popup_sub_pane_cp28_ParamLimits

0x539b,	// (0x000146bc) bg_popup_sub_pane_cp28

0xa528,	// (0x00019849) popup_discreet_window_g1_ParamLimits

0xa528,	// (0x00019849) popup_discreet_window_g1

0xa548,	// (0x00019869) popup_discreet_window_t1_ParamLimits

0xa548,	// (0x00019869) popup_discreet_window_t1

0xa566,	// (0x00019887) popup_discreet_window_t2_ParamLimits

0xa566,	// (0x00019887) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0001f1d3) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0001f1d3) popup_discreet_window_t

0x2375,	// (0x00011696) popup_sk_window_g1

0x237f,	// (0x000116a0) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x0001f1da) popup_sk_window_g

0x2389,	// (0x000116aa) popup_sk_window_t1

0x2397,	// (0x000116b8) popup_sk_window_t1_copy1

0xa15c,	// (0x0001947d) cell_ai5_widget_pane_g2_ParamLimits

0xa2b5,	// (0x000195d6) cell_ai5_widget_pane_t9_ParamLimits

0xa2b5,	// (0x000195d6) cell_ai5_widget_pane_t9

0x26cc,	// (0x000119ed) main_fep_fshwr2_pane

0xc756,	// (0x0001ba77) aid_fshwr2_btn_pane

0xc767,	// (0x0001ba88) aid_fshwr2_syb_pane

0xc778,	// (0x0001ba99) aid_fshwr2_txt_pane

0xc784,	// (0x0001baa5) fshwr2_func_candi_pane

0xc7a3,	// (0x0001bac4) fshwr2_hwr_syb_pane

0xc7be,	// (0x0001badf) fshwr2_icf_pane

0x0361,	// (0x0000f682) fshwr2_icf_bg_pane

0xc7e7,	// (0x0001bb08) fshwr2_icf_pane_t1_ParamLimits

0xc7e7,	// (0x0001bb08) fshwr2_icf_pane_t1

0x3d33,	// (0x00013054) fshwr2_func_candi_pane_g1

0xf344,	// (0x0001e665) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0001e665) fshwr2_func_candi_row_pane

0xc800,	// (0x0001bb21) cell_fshwr2_syb_pane_ParamLimits

0xc800,	// (0x0001bb21) cell_fshwr2_syb_pane

0x1957,	// (0x00010c78) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1957,	// (0x00010c78) fshwr2_hwr_syb_pane_g1

0x0361,	// (0x0000f682) bg_popup_call_pane_cp01

0xc816,	// (0x0001bb37) fshwr2_func_candi_cell_pane_ParamLimits

0xc816,	// (0x0001bb37) fshwr2_func_candi_cell_pane

0xf354,	// (0x0001e675) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0001e675) fshwr2_func_candi_cell_bg_pane

0xc84b,	// (0x0001bb6c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc84b,	// (0x0001bb6c) fshwr2_func_candi_cell_pane_g1

0xc87a,	// (0x0001bb9b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc87a,	// (0x0001bb9b) fshwr2_func_candi_cell_pane_t1

0x0361,	// (0x0000f682) bg_button_pane_cp08

0x680e,	// (0x00015b2f) cell_fshwr2_syb_bg_pane

0xc88d,	// (0x0001bbae) cell_fshwr2_syb_bg_pane_g1

0xc895,	// (0x0001bbb6) cell_fshwr2_syb_bg_pane_t1

0x357f,	// (0x000128a0) main_tmo_pane

0xdb39,	// (0x0001ce5a) uni_indicator_pane_g1_ParamLimits

0xdb4f,	// (0x0001ce70) uni_indicator_pane_g2_ParamLimits

0xdb65,	// (0x0001ce86) uni_indicator_pane_g3_ParamLimits

0x5ef1,	// (0x00015212) uni_indicator_pane_g4_ParamLimits

0x5ef1,	// (0x00015212) uni_indicator_pane_g4

0x5f05,	// (0x00015226) uni_indicator_pane_g5_ParamLimits

0x5f05,	// (0x00015226) uni_indicator_pane_g5

0x5f05,	// (0x00015226) uni_indicator_pane_g6_ParamLimits

0x5f05,	// (0x00015226) uni_indicator_pane_g6

0xf917,	// (0x0001ec38) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0001d9ed) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0001d9ed) popup_tmo_note_window

0x1bf0,	// (0x00010f11) fshwr2_bg_pane

0xc86b,	// (0x0001bb8c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc86b,	// (0x0001bb8c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x0001f1df) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x0001f1df) fshwr2_func_candi_cell_pane_g

0x193f,	// (0x00010c60) bg_popup_window_pane_cp01

0x24c4,	// (0x000117e5) bg_popup_window_pane_g1_cp01

0xa5c8,	// (0x000198e9) bg_popup_window_pane_cp22_ParamLimits

0xa5c8,	// (0x000198e9) bg_popup_window_pane_cp22

0xa5d6,	// (0x000198f7) listscroll_tmo_link_pane_ParamLimits

0xa5d6,	// (0x000198f7) listscroll_tmo_link_pane

0xa616,	// (0x00019937) popup_tmo_note_window_g1_ParamLimits

0xa616,	// (0x00019937) popup_tmo_note_window_g1

0xa623,	// (0x00019944) tmo_note_info_pane_ParamLimits

0xa623,	// (0x00019944) tmo_note_info_pane

0xf360,	// (0x0001e681) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0001e681) list_tmo_note_info_pane_g1

0xa654,	// (0x00019975) list_tmo_note_info_pane_g2_ParamLimits

0xa654,	// (0x00019975) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0001f1e4) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0001f1e4) list_tmo_note_info_pane_g

0xa670,	// (0x00019991) list_tmo_note_info_text_pane_ParamLimits

0xa670,	// (0x00019991) list_tmo_note_info_text_pane

0xa6f3,	// (0x00019a14) list_tmo_link_pane

0xa700,	// (0x00019a21) scroll_pane_cp20

0xa70d,	// (0x00019a2e) list_single_tmo_link_pane_ParamLimits

0xa70d,	// (0x00019a2e) list_single_tmo_link_pane

0xa71d,	// (0x00019a3e) list_single_tmo_link_pane_t1

0xa72b,	// (0x00019a4c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa72b,	// (0x00019a4c) list_tmo_note_info_text_pane_t1

0xd114,	// (0x0001c435) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd114,	// (0x0001c435) aid_size_touch_scroll_bar_cp01

0xd070,	// (0x0001c391) aid_size_touch_slider_marker

0xb873,	// (0x0001ab94) popup_settings_window_ParamLimits

0xb873,	// (0x0001ab94) popup_settings_window

0x471e,	// (0x00013a3f) popup_candi_list_indi_window

0x476e,	// (0x00013a8f) aid_touch_navi_pane_ParamLimits

0x1b4b,	// (0x00010e6c) rs_clock_indi_pane

0x1b54,	// (0x00010e75) sctrl_sk_bottom_pane_ParamLimits

0x1b65,	// (0x00010e86) sctrl_sk_top_pane_ParamLimits

0x1c68,	// (0x00010f89) popup_fep_tooltip_window

0xa0d2,	// (0x000193f3) aid_size_cell_widget_grid_ParamLimits

0xa147,	// (0x00019468) cell_ai5_widget_pane_g1_ParamLimits

0xa147,	// (0x00019468) cell_ai5_widget_pane_g1

0xa19b,	// (0x000194bc) cell_ai5_widget_pane_g6_ParamLimits

0xa1a7,	// (0x000194c8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x0001f162) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0001f162) cell_ai5_widget_pane_g

0xa2d9,	// (0x000195fa) cell_ai5_widget_pane_t10_ParamLimits

0xa2d9,	// (0x000195fa) cell_ai5_widget_pane_t10

0xa2f7,	// (0x00019618) grid_ai5_widget_pane_ParamLimits

0xa399,	// (0x000196ba) cell_contacts_ai5_widget_pane_ParamLimits

0xa399,	// (0x000196ba) cell_contacts_ai5_widget_pane

0xa57b,	// (0x0001989c) popup_discreet_window_t3_ParamLimits

0xa57b,	// (0x0001989c) popup_discreet_window_t3

0xc7d3,	// (0x0001baf4) popup_fshwr2_char_preview_window_ParamLimits

0xc7d3,	// (0x0001baf4) popup_fshwr2_char_preview_window

0xf377,	// (0x0001e698) tmo_note_info_pane_t1

0xf38c,	// (0x0001e6ad) tmo_note_info_pane_t2

0xf3a5,	// (0x0001e6c6) tmo_note_info_pane_t3

0xa6cf,	// (0x000199f0) tmo_note_info_pane_t4

0xa6e1,	// (0x00019a02) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x0001f1e9) tmo_note_info_pane_t

0xa6f3,	// (0x00019a14) list_tmo_link_pane_ParamLimits

0xa700,	// (0x00019a21) scroll_pane_cp20_ParamLimits

0x0361,	// (0x0000f682) bg_popup_fep_char_preview_window_cp01

0xa744,	// (0x00019a65) popup_fshwr2_char_preview_window_t1

0xa752,	// (0x00019a73) popup_candi_list_indi_window_g1

0xa75b,	// (0x00019a7c) bg_cell_contacts_ai5_widget_pane

0xa767,	// (0x00019a88) cell_contacts_ai5_widget_pane_g1

0xa77c,	// (0x00019a9d) cell_contacts_ai5_widget_pane_g2

0xa788,	// (0x00019aa9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0001f1f4) cell_contacts_ai5_widget_pane_g

0xa794,	// (0x00019ab5) cell_contacts_ai5_widget_pane_t1

0x357f,	// (0x000128a0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0001e6db) settings_container_pane

0x43c2,	// (0x000136e3) listscroll_set_pane_copy1

0x6b55,	// (0x00015e76) scroll_pane_cp121_copy1

0xa817,	// (0x00019b38) set_content_pane_copy1

0xf3c6,	// (0x0001e6e7) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0001e6e7) aid_height_set_list_copy1

0x610a,	// (0x0001542b) aid_size_parent_copy1_ParamLimits

0x610a,	// (0x0001542b) aid_size_parent_copy1

0xf3d2,	// (0x0001e6f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0001e6f3) button_value_adjust_pane_cp6_copy1

0x4704,	// (0x00013a25) list_highlight_pane_cp2_copy1_ParamLimits

0x4704,	// (0x00013a25) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0001e707) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0001e707) list_set_pane_copy1

0xa7a6,	// (0x00019ac7) main_pane_set_t1_copy1_ParamLimits

0xa7a6,	// (0x00019ac7) main_pane_set_t1_copy1

0xa7e0,	// (0x00019b01) main_pane_set_t2_copy1_ParamLimits

0xa7e0,	// (0x00019b01) main_pane_set_t2_copy1

0xa8ec,	// (0x00019c0d) main_pane_set_t3_copy1

0xa8fa,	// (0x00019c1b) main_pane_set_t4_copy1

0xa7ff,	// (0x00019b20) set_content_pane_g1_copy1_ParamLimits

0xa7ff,	// (0x00019b20) set_content_pane_g1_copy1

0xf493,	// (0x0001e7b4) setting_code_pane_copy1

0xa910,	// (0x00019c31) setting_slider_graphic_pane_copy1

0xa910,	// (0x00019c31) setting_slider_pane_copy1

0xa910,	// (0x00019c31) setting_text_pane_copy1

0xa910,	// (0x00019c31) setting_volume_pane_copy1

0xf493,	// (0x0001e7b4) settings_code_pane_cp2_copy1

0xf49b,	// (0x0001e7bc) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0001e7bc) settings_code_pane_cp_copy1

0xc8a4,	// (0x0001bbc5) volume_set_pane_copy1

0xf4af,	// (0x0001e7d0) volume_set_pane_g10_copy1

0xf4b7,	// (0x0001e7d8) volume_set_pane_g1_copy1

0xf4bf,	// (0x0001e7e0) volume_set_pane_g2_copy1

0xf4c7,	// (0x0001e7e8) volume_set_pane_g3_copy1

0xf4cf,	// (0x0001e7f0) volume_set_pane_g4_copy1

0xf4d7,	// (0x0001e7f8) volume_set_pane_g5_copy1

0xf4df,	// (0x0001e800) volume_set_pane_g6_copy1

0xf4e7,	// (0x0001e808) volume_set_pane_g7_copy1

0xf4ef,	// (0x0001e810) volume_set_pane_g8_copy1

0xf4f7,	// (0x0001e818) volume_set_pane_g9_copy1

0x27c0,	// (0x00011ae1) bg_set_opt_pane_cp_copy1_ParamLimits

0x27c0,	// (0x00011ae1) bg_set_opt_pane_cp_copy1

0x24d5,	// (0x000117f6) setting_slider_pane_t1_copy1_ParamLimits

0x24d5,	// (0x000117f6) setting_slider_pane_t1_copy1

0xc8ac,	// (0x0001bbcd) setting_slider_pane_t2_copy1_ParamLimits

0xc8ac,	// (0x0001bbcd) setting_slider_pane_t2_copy1

0xc8c6,	// (0x0001bbe7) setting_slider_pane_t3_copy1_ParamLimits

0xc8c6,	// (0x0001bbe7) setting_slider_pane_t3_copy1

0xc8de,	// (0x0001bbff) slider_set_pane_copy1_ParamLimits

0xc8de,	// (0x0001bbff) slider_set_pane_copy1

0x36ac,	// (0x000129cd) set_opt_bg_pane_g1_copy2

0x36b4,	// (0x000129d5) set_opt_bg_pane_g2_copy2

0xa97c,	// (0x00019c9d) set_opt_bg_pane_g3_copy2

0x36c4,	// (0x000129e5) set_opt_bg_pane_g4_copy2

0x36cc,	// (0x000129ed) set_opt_bg_pane_g5_copy2

0x36d4,	// (0x000129f5) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0001e820) set_opt_bg_pane_g7_copy2

0xa98e,	// (0x00019caf) set_opt_bg_pane_g8_copy2

0xa998,	// (0x00019cb9) set_opt_bg_pane_g9_copy2

0x253b,	// (0x0001185c) aid_size_touch_slider_mark_copy1_ParamLimits

0x253b,	// (0x0001185c) aid_size_touch_slider_mark_copy1

0xa9a2,	// (0x00019cc3) slider_set_pane_g1_copy1

0x254f,	// (0x00011870) slider_set_pane_g2_copy1

0x155c,	// (0x0001087d) slider_set_pane_g3_copy1_ParamLimits

0x155c,	// (0x0001087d) slider_set_pane_g3_copy1

0x1570,	// (0x00010891) slider_set_pane_g4_copy1_ParamLimits

0x1570,	// (0x00010891) slider_set_pane_g4_copy1

0x1588,	// (0x000108a9) slider_set_pane_g5_copy1_ParamLimits

0x1588,	// (0x000108a9) slider_set_pane_g5_copy1

0x155c,	// (0x0001087d) slider_set_pane_g6_copy1_ParamLimits

0x155c,	// (0x0001087d) slider_set_pane_g6_copy1

0x2557,	// (0x00011878) slider_set_pane_g7_copy1_ParamLimits

0x2557,	// (0x00011878) slider_set_pane_g7_copy1

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp2_copy1

0xa9ab,	// (0x00019ccc) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0001e828) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0001e838) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0001e848) slider_set_pane_cp_copy1

0xa9e4,	// (0x00019d05) input_focus_pane_cp1_copy1

0xa9ed,	// (0x00019d0e) list_set_text_pane_copy1

0xa9f5,	// (0x00019d16) setting_text_pane_g1_copy1

0xa9fe,	// (0x00019d1f) set_text_pane_t1_copy1

0xa9e4,	// (0x00019d05) input_focus_pane_cp2_copy1

0xa9f5,	// (0x00019d16) setting_code_pane_g1_copy1

0xf52f,	// (0x0001e850) setting_code_pane_t1_copy1

0x6989,	// (0x00015caa) list_set_graphic_pane_copy1

0x26e0,	// (0x00011a01) bg_set_opt_pane_cp4_copy1

0xd380,	// (0x0001c6a1) list_set_graphic_pane_g1_copy1_ParamLimits

0xd380,	// (0x0001c6a1) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0001e85e) list_set_graphic_pane_g2_copy1

0xd398,	// (0x0001c6b9) list_set_graphic_pane_t1_copy1_ParamLimits

0xd398,	// (0x0001c6b9) list_set_graphic_pane_t1_copy1

0x7758,	// (0x00016a79) rs_clock_indi_pane_g1

0xaa44,	// (0x00019d65) rs_clock_indi_pane_t1

0xaa52,	// (0x00019d73) rs_indi_pane

0xaa5a,	// (0x00019d7b) rs_indi_pane_g1

0xaa63,	// (0x00019d84) rs_indi_pane_g2

0xaa6c,	// (0x00019d8d) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x0001f1fb) rs_indi_pane_g

0x43c2,	// (0x000136e3) bg_popup_preview_window_pane_cp03

0xaa75,	// (0x00019d96) popup_fep_tooltip_window_t1

0x85e4,	// (0x00017905) popup_note2_window_g2_ParamLimits

0x85e4,	// (0x00017905) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0001ef94) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0001ef94) popup_note2_window_g

0x8bc8,	// (0x00017ee9) bg_popup_sub_pane_cp11_ParamLimits

0x8bd5,	// (0x00017ef6) cell_ai3_links_pane_g1_ParamLimits

0x8bec,	// (0x00017f0d) cell_ai3_links_pane_t1

0xa9fe,	// (0x00019d1f) set_text_pane_t1_copy1_ParamLimits

0x42df,	// (0x00013600) cell_graphic_popup_pane_cp2_ParamLimits

0x42df,	// (0x00013600) cell_graphic_popup_pane_cp2

0xaa83,	// (0x00019da4) cell_graphic_popup_pane_g1_cp2

0x2d7f,	// (0x000120a0) cell_graphic_popup_pane_g2_cp2

0xaa8b,	// (0x00019dac) cell_graphic_popup_pane_g3_cp2

0xaa93,	// (0x00019db4) cell_graphic_popup_pane_t2_cp2

0x2d90,	// (0x000120b1) grid_highlight_pane_cp3_cp2

0x3a7a,	// (0x00012d9b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x357f,	// (0x000128a0) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0001d9e1) popup_tmo_big_image_note_window

0xa136,	// (0x00019457) cell_ai5_widget_list_pane

0xa13e,	// (0x0001945f) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0001e698) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0001e6ad) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0001e6c6) tmo_note_info_pane_t3_ParamLimits

0xa6cf,	// (0x000199f0) tmo_note_info_pane_t4_ParamLimits

0xa6e1,	// (0x00019a02) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x0001f1e9) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0001e6db) settings_container_pane_ParamLimits

0xa9dc,	// (0x00019cfd) indicator_popup_pane_cp5

0xa9dc,	// (0x00019cfd) indicator_popup_pane_cp6

0x6989,	// (0x00015caa) list_set_graphic_pane_copy1_ParamLimits

0x26cc,	// (0x000119ed) bg_popup_window_pane_cp23

0xaaa1,	// (0x00019dc2) popup_tmo_big_image_note_window_g1

0xaaaa,	// (0x00019dcb) popup_tmo_big_image_note_window_t1

0xaaba,	// (0x00019ddb) popup_tmo_big_image_note_window_t2

0xaaca,	// (0x00019deb) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0001f202) popup_tmo_big_image_note_window_t

0x7758,	// (0x00016a79) cell_ai5_widget_lrg_icon_pane_g1

0xaada,	// (0x00019dfb) cell_ai5_widget_lrg_icon_pane_t1

0xaae8,	// (0x00019e09) cell_ai5_widget_list_row_pane_ParamLimits

0xaae8,	// (0x00019e09) cell_ai5_widget_list_row_pane

0xaaff,	// (0x00019e20) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaaff,	// (0x00019e20) cell_ai5_widget_list_row_pane_g1

0xab0c,	// (0x00019e2d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab0c,	// (0x00019e2d) cell_ai5_widget_list_row_pane_t1

0xab3a,	// (0x00019e5b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab3a,	// (0x00019e5b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x0001f209) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x0001f209) cell_ai5_widget_list_row_pane_t

0x0361,	// (0x0000f682) main_fep_vtchi_ss_pane

0xab7e,	// (0x00019e9f) popup_fep_char_pre_window

0xab86,	// (0x00019ea7) popup_fep_ituss_window

0xaba7,	// (0x00019ec8) popup_fep_vkbss_window

0xabc6,	// (0x00019ee7) grid_vkbss_keypad_pane_ParamLimits

0xabc6,	// (0x00019ee7) grid_vkbss_keypad_pane

0xabd6,	// (0x00019ef7) ituss_keypad_pane

0x2579,	// (0x0001189a) aid_vkbss_key_offset_ParamLimits

0x2579,	// (0x0001189a) aid_vkbss_key_offset

0x2585,	// (0x000118a6) cell_vkbss_key_pane_ParamLimits

0x2585,	// (0x000118a6) cell_vkbss_key_pane

0x4a73,	// (0x00013d94) bg_cell_vkbss_key_g1_ParamLimits

0x4a73,	// (0x00013d94) bg_cell_vkbss_key_g1

0xabe5,	// (0x00019f06) cell_vkbss_key_3p_pane_ParamLimits

0xabe5,	// (0x00019f06) cell_vkbss_key_3p_pane

0xabff,	// (0x00019f20) cell_vkbss_key_g1_ParamLimits

0xabff,	// (0x00019f20) cell_vkbss_key_g1

0xac19,	// (0x00019f3a) cell_vkbss_key_t1_ParamLimits

0xac19,	// (0x00019f3a) cell_vkbss_key_t1

0x259b,	// (0x000118bc) cell_ituss_key_pane_ParamLimits

0x259b,	// (0x000118bc) cell_ituss_key_pane

0xac44,	// (0x00019f65) bg_cell_ituss_key_g1_ParamLimits

0xac44,	// (0x00019f65) bg_cell_ituss_key_g1

0xac50,	// (0x00019f71) cell_ituss_key_pane_g1_ParamLimits

0xac50,	// (0x00019f71) cell_ituss_key_pane_g1

0x25ac,	// (0x000118cd) cell_ituss_key_pane_g2_ParamLimits

0x25ac,	// (0x000118cd) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x0001f210) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0001f210) cell_ituss_key_pane_g

0x25d8,	// (0x000118f9) cell_ituss_key_t1_ParamLimits

0x25d8,	// (0x000118f9) cell_ituss_key_t1

0x2612,	// (0x00011933) cell_ituss_key_t2_ParamLimits

0x2612,	// (0x00011933) cell_ituss_key_t2

0x2643,	// (0x00011964) cell_ituss_key_t3_ParamLimits

0x2643,	// (0x00011964) cell_ituss_key_t3

0x2612,	// (0x00011933) cell_ituss_key_t4_ParamLimits

0x2612,	// (0x00011933) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x0001f217) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0001f217) cell_ituss_key_t

0xac76,	// (0x00019f97) cell_vkbss_key_3p_pane_g1

0xac7e,	// (0x00019f9f) cell_vkbss_key_3p_pane_g2

0xac86,	// (0x00019fa7) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0001f222) cell_vkbss_key_3p_pane_g

0x0361,	// (0x0000f682) bg_popup_fep_char_preview_window_cp02

0x2686,	// (0x000119a7) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0001e5c7) main_ai5_sk_pane

0xa75b,	// (0x00019a7c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa767,	// (0x00019a88) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa77c,	// (0x00019a9d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa788,	// (0x00019aa9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0001f1f4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa794,	// (0x00019ab5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x357f,	// (0x000128a0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0001e866) main_ai5_sk_pane_g1

0x51d9,	// (0x000144fa) popup_query_code_window_g1

0xab9c,	// (0x00019ebd) popup_fep_vkb_icf_pane

0xabb0,	// (0x00019ed1) popup_fep_vtchi_icf_pane

0xac97,	// (0x00019fb8) bg_icf_pane

0xaca3,	// (0x00019fc4) list_vkb_icf_pane

0xacaf,	// (0x00019fd0) bg_icf_pane_cp01

0xacc2,	// (0x00019fe3) vtchi_icf_list_pane

0xacd2,	// (0x00019ff3) list_vkb_icf_pane_t1_ParamLimits

0xacd2,	// (0x00019ff3) list_vkb_icf_pane_t1

0xacea,	// (0x0001a00b) vtchi_icf_list_pane_t1_ParamLimits

0xacea,	// (0x0001a00b) vtchi_icf_list_pane_t1

0xab86,	// (0x00019ea7) popup_fep_ituss_window_ParamLimits

0xabb0,	// (0x00019ed1) popup_fep_vtchi_icf_pane_ParamLimits

0xabd6,	// (0x00019ef7) ituss_keypad_pane_ParamLimits

0x256d,	// (0x0001188e) ituss_sks_pane

0xac97,	// (0x00019fb8) bg_icf_pane_ParamLimits

0xab62,	// (0x00019e83) icf_edit_indi_pane_ParamLimits

0xab62,	// (0x00019e83) icf_edit_indi_pane

0xaca3,	// (0x00019fc4) list_vkb_icf_pane_ParamLimits

0xacaf,	// (0x00019fd0) bg_icf_pane_cp01_ParamLimits

0xab71,	// (0x00019e92) icf_edit_indi_pane_cp01_ParamLimits

0xab71,	// (0x00019e92) icf_edit_indi_pane_cp01

0xacca,	// (0x00019feb) vtchi_query_pane

0x79c6,	// (0x00016ce7) icf_edit_indi_pane_g1_ParamLimits

0x79c6,	// (0x00016ce7) icf_edit_indi_pane_g1

0xad63,	// (0x0001a084) icf_edit_indi_pane_g2_ParamLimits

0xad63,	// (0x0001a084) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0001f23a) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0001f23a) icf_edit_indi_pane_g

0xad72,	// (0x0001a093) icf_edit_indi_pane_t1

0xad0c,	// (0x0001a02d) bg_input_focus_pane_cp042

0x2f63,	// (0x00012284) vtchi_button_pane

0xad15,	// (0x0001a036) vtchi_query_pane_t1

0xad23,	// (0x0001a044) vtchi_query_pane_t2

0xad31,	// (0x0001a052) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001f229) vtchi_query_pane_t

0x0361,	// (0x0000f682) bg_button_pane_cp13

0xad3f,	// (0x0001a060) vtchi_button_pane_g1

0x2695,	// (0x000119b6) ituss_sks_pane_g1

0x26a0,	// (0x000119c1) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001f230) ituss_sks_pane_g

0xad47,	// (0x0001a068) ituss_sks_pane_t1

0xad55,	// (0x0001a076) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001f235) ituss_sks_pane_t

0x7158,	// (0x00016479) indicator_nsta_pane_cp_g1

0x7161,	// (0x00016482) indicator_nsta_pane_cp_g2

0x7169,	// (0x0001648a) indicator_nsta_pane_cp_g3

0x7171,	// (0x00016492) indicator_nsta_pane_cp_g4

0x7179,	// (0x0001649a) indicator_nsta_pane_cp_g5

0x7179,	// (0x0001649a) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0001edd2) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0001e3dc) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0001e3dc) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x0001f0eb) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x0001f0eb) cell_graphic2_pane_t

0xf0ee,	// (0x0001e40f) cell_graphic2_control_pane_t1

0xd2d4,	// (0x0001c5f5) signal_pane_g3_ParamLimits

0xd2d4,	// (0x0001c5f5) signal_pane_g3

0xd2e8,	// (0x0001c609) signal_pane_g4_ParamLimits

0xd2e8,	// (0x0001c609) signal_pane_g4

0xab4c,	// (0x00019e6d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab4c,	// (0x00019e6d) cell_ai5_widget_list_row_pane_t3

0xac64,	// (0x00019f85) cell_ituss_key_pane_t1_ParamLimits

0xac64,	// (0x00019f85) cell_ituss_key_pane_t1

0x4dd2,	// (0x000140f3) form_field_data_wide_pane_vc_t2_ParamLimits

0x4dd2,	// (0x000140f3) form_field_data_wide_pane_vc_t2

0x4de6,	// (0x00014107) form_field_data_wide_pane_vc_t3_ParamLimits

0x4de6,	// (0x00014107) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001eb20) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001eb20) form_field_data_wide_pane_vc_t

0x6e24,	// (0x00016145) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6e24,	// (0x00016145) form_field_slider_wide_pane_vc_t3

0x6efe,	// (0x0001621f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6efe,	// (0x0001621f) form_field_popup_wide_pane_vc_t2

0x6f15,	// (0x00016236) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6f15,	// (0x00016236) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0001edc1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001edc1) form_field_popup_wide_pane_vc_t

0xc756,	// (0x0001ba77) aid_fshwr2_btn_pane_ParamLimits

0xc767,	// (0x0001ba88) aid_fshwr2_syb_pane_ParamLimits

0xc778,	// (0x0001ba99) aid_fshwr2_txt_pane_ParamLimits

0x1bf0,	// (0x00010f11) fshwr2_bg_pane_ParamLimits

0xc784,	// (0x0001baa5) fshwr2_func_candi_pane_ParamLimits

0xc7a3,	// (0x0001bac4) fshwr2_hwr_syb_pane_ParamLimits

0xc7be,	// (0x0001badf) fshwr2_icf_pane_ParamLimits

0x6d98,	// (0x000160b9) list_double_graphic_pane_vc_g4_ParamLimits

0x6d98,	// (0x000160b9) list_double_graphic_pane_vc_g4

0x25cc,	// (0x000118ed) cell_ituss_key_pane_g3_ParamLimits

0x25cc,	// (0x000118ed) cell_ituss_key_pane_g3

0x2674,	// (0x00011995) cell_ituss_key_t5_ParamLimits

0x2674,	// (0x00011995) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
