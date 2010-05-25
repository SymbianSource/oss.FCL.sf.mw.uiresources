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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00030072 };

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
0x5a73,	// (0x00035ae5) Screen

0x5a7f,	// (0x00035af1) application_window_ParamLimits

0x5a7f,	// (0x00035af1) application_window

0x2340,	// (0x000323b2) screen_g1

0x5adb,	// (0x00035b4d) area_bottom_pane_ParamLimits

0x5adb,	// (0x00035b4d) area_bottom_pane

0x5b9b,	// (0x00035c0d) area_top_pane_ParamLimits

0x5b9b,	// (0x00035c0d) area_top_pane

0x5c39,	// (0x00035cab) main_pane_ParamLimits

0x5c39,	// (0x00035cab) main_pane

0x234a,	// (0x000323bc) misc_graphics

0x98a0,	// (0x00039912) battery_pane_ParamLimits

0x98a0,	// (0x00039912) battery_pane

0xa562,	// (0x0003a5d4) bg_status_flat_pane_g8

0xa56a,	// (0x0003a5dc) bg_status_flat_pane_g9

0x9968,	// (0x000399da) context_pane_ParamLimits

0x9968,	// (0x000399da) context_pane

0x9a7e,	// (0x00039af0) navi_pane_ParamLimits

0x9a7e,	// (0x00039af0) navi_pane

0x9b02,	// (0x00039b74) signal_pane_ParamLimits

0x9b02,	// (0x00039b74) signal_pane

0x0008,

0xf86a,	// (0x0003f8dc) bg_status_flat_pane_g

0x9b6f,	// (0x00039be1) status_pane_g1_ParamLimits

0x9b6f,	// (0x00039be1) status_pane_g1

0x9b83,	// (0x00039bf5) status_pane_g2_ParamLimits

0x9b83,	// (0x00039bf5) status_pane_g2

0x9b8f,	// (0x00039c01) status_pane_g3_ParamLimits

0x9b8f,	// (0x00039c01) status_pane_g3

0x0004,

0xf796,	// (0x0003f808) status_pane_g_ParamLimits

0xf796,	// (0x0003f808) status_pane_g

0x9bc3,	// (0x00039c35) title_pane_ParamLimits

0x9bc3,	// (0x00039c35) title_pane

0x9c00,	// (0x00039c72) uni_indicator_pane_ParamLimits

0x9c00,	// (0x00039c72) uni_indicator_pane

0x97c4,	// (0x00039836) bg_list_pane_ParamLimits

0x97c4,	// (0x00039836) bg_list_pane

0x4772,	// (0x000347e4) find_pane

0x97e4,	// (0x00039856) listscroll_app_pane_ParamLimits

0x97e4,	// (0x00039856) listscroll_app_pane

0x97f0,	// (0x00039862) listscroll_form_pane

0x59f5,	// (0x00035a67) listscroll_gen_pane_ParamLimits

0x59f5,	// (0x00035a67) listscroll_gen_pane

0x7723,	// (0x00037795) listscroll_set_pane

0x6ac6,	// (0x00036b38) main_idle_act_pane

0x94c4,	// (0x00039536) main_idle_trad_pane

0x94c4,	// (0x00039536) main_list_empty_pane

0x980a,	// (0x0003987c) main_midp_pane

0x9816,	// (0x00039888) main_pane_g1_ParamLimits

0x9816,	// (0x00039888) main_pane_g1

0x7739,	// (0x000377ab) popup_ai_message_window_ParamLimits

0x7739,	// (0x000377ab) popup_ai_message_window

0x77dd,	// (0x0003784f) popup_fep_china_uni_window_ParamLimits

0x77dd,	// (0x0003784f) popup_fep_china_uni_window

0x7837,	// (0x000378a9) popup_fep_japan_candidate_window_ParamLimits

0x7837,	// (0x000378a9) popup_fep_japan_candidate_window

0x7855,	// (0x000378c7) popup_fep_japan_predictive_window_ParamLimits

0x7855,	// (0x000378c7) popup_fep_japan_predictive_window

0x7885,	// (0x000378f7) popup_find_window

0x7892,	// (0x00037904) popup_grid_graphic_window_ParamLimits

0x7892,	// (0x00037904) popup_grid_graphic_window

0x78bc,	// (0x0003792e) popup_large_graphic_colour_window

0x78e2,	// (0x00037954) popup_menu_window_ParamLimits

0x78e2,	// (0x00037954) popup_menu_window

0x7a9e,	// (0x00037b10) popup_note_image_window

0x7a8a,	// (0x00037afc) popup_note_wait_window_ParamLimits

0x7a8a,	// (0x00037afc) popup_note_wait_window

0x7a8a,	// (0x00037afc) popup_note_window_ParamLimits

0x7a8a,	// (0x00037afc) popup_note_window

0x7af4,	// (0x00037b66) popup_query_code_window_ParamLimits

0x7af4,	// (0x00037b66) popup_query_code_window

0x7b08,	// (0x00037b7a) popup_query_data_code_window_ParamLimits

0x7b08,	// (0x00037b7a) popup_query_data_code_window

0x7b25,	// (0x00037b97) popup_query_data_window_ParamLimits

0x7b25,	// (0x00037b97) popup_query_data_window

0x7b41,	// (0x00037bb3) popup_query_sat_info_window_ParamLimits

0x7b41,	// (0x00037bb3) popup_query_sat_info_window

0x7b7a,	// (0x00037bec) popup_snote_single_graphic_window_ParamLimits

0x7b7a,	// (0x00037bec) popup_snote_single_graphic_window

0x7b7a,	// (0x00037bec) popup_snote_single_text_window_ParamLimits

0x7b7a,	// (0x00037bec) popup_snote_single_text_window

0x7b8f,	// (0x00037c01) popup_sub_window_general

0x7cbf,	// (0x00037d31) popup_window_general_ParamLimits

0x7cbf,	// (0x00037d31) popup_window_general

0x9824,	// (0x00039896) power_save_pane

0x75b5,	// (0x00037627) control_pane_g1_ParamLimits

0x75b5,	// (0x00037627) control_pane_g1

0x75dc,	// (0x0003764e) control_pane_g2_ParamLimits

0x75dc,	// (0x0003764e) control_pane_g2

0x9787,	// (0x000397f9) control_pane_g3_ParamLimits

0x9787,	// (0x000397f9) control_pane_g3

0x0007,

0xf77e,	// (0x0003f7f0) control_pane_g_ParamLimits

0xf77e,	// (0x0003f7f0) control_pane_g

0x7626,	// (0x00037698) control_pane_t1_ParamLimits

0x7626,	// (0x00037698) control_pane_t1

0x767a,	// (0x000376ec) control_pane_t2_ParamLimits

0x767a,	// (0x000376ec) control_pane_t2

0x0002,

0xf78f,	// (0x0003f801) control_pane_t_ParamLimits

0xf78f,	// (0x0003f801) control_pane_t

0x96ac,	// (0x0003971e) navi_navi_volume_pane_cp1

0x96b4,	// (0x00039726) status_small_icon_pane

0x96bc,	// (0x0003972e) status_small_pane_g1_ParamLimits

0x96bc,	// (0x0003972e) status_small_pane_g1

0x96f0,	// (0x00039762) status_small_pane_g2_ParamLimits

0x96f0,	// (0x00039762) status_small_pane_g2

0x96fc,	// (0x0003976e) status_small_pane_g3_ParamLimits

0x96fc,	// (0x0003976e) status_small_pane_g3

0x9708,	// (0x0003977a) status_small_pane_g4_ParamLimits

0x9708,	// (0x0003977a) status_small_pane_g4

0x9714,	// (0x00039786) status_small_pane_g5_ParamLimits

0x9714,	// (0x00039786) status_small_pane_g5

0x9722,	// (0x00039794) status_small_pane_g6_ParamLimits

0x9722,	// (0x00039794) status_small_pane_g6

0x0007,

0xf76d,	// (0x0003f7df) status_small_pane_g_ParamLimits

0xf76d,	// (0x0003f7df) status_small_pane_g

0x9751,	// (0x000397c3) status_small_pane_t1

0x9773,	// (0x000397e5) status_small_wait_pane_ParamLimits

0x9773,	// (0x000397e5) status_small_wait_pane

0x6e9b,	// (0x00036f0d) aid_levels_signal_ParamLimits

0x6e9b,	// (0x00036f0d) aid_levels_signal

0x6ead,	// (0x00036f1f) signal_pane_g1_ParamLimits

0x6ead,	// (0x00036f1f) signal_pane_g1

0x6ec2,	// (0x00036f34) signal_pane_g2_ParamLimits

0x6ec2,	// (0x00036f34) signal_pane_g2

0x0003,

0xf6fe,	// (0x0003f770) signal_pane_g_ParamLimits

0xf6fe,	// (0x0003f770) signal_pane_g

0x2be3,	// (0x00032c55) context_pane_g1

0x5e7a,	// (0x00035eec) title_pane_g1

0x5ea4,	// (0x00035f16) title_pane_t1

0x2360,	// (0x000323d2) title_pane_t2

0x2386,	// (0x000323f8) title_pane_t3

0x0002,

0xf557,	// (0x0003f5c9) title_pane_t

0x9c18,	// (0x00039c8a) aid_levels_battery_ParamLimits

0x9c18,	// (0x00039c8a) aid_levels_battery

0x9c2c,	// (0x00039c9e) battery_pane_g1_ParamLimits

0x9c2c,	// (0x00039c9e) battery_pane_g1

0x9c42,	// (0x00039cb4) battery_pane_g2_ParamLimits

0x9c42,	// (0x00039cb4) battery_pane_g2

0x0001,

0xf7a1,	// (0x0003f813) battery_pane_g_ParamLimits

0xf7a1,	// (0x0003f813) battery_pane_g

0xae86,	// (0x0003aef8) uni_indicator_pane_g1

0xae99,	// (0x0003af0b) uni_indicator_pane_g2

0xaeab,	// (0x0003af1d) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0003f984) uni_indicator_pane_g

0x7445,	// (0x000374b7) navi_icon_pane_ParamLimits

0x7445,	// (0x000374b7) navi_icon_pane

0x738f,	// (0x00037401) navi_midp_pane

0x7461,	// (0x000374d3) navi_navi_pane

0x746b,	// (0x000374dd) navi_text_pane_ParamLimits

0x746b,	// (0x000374dd) navi_text_pane

0x2340,	// (0x000323b2) status_small_wait_pane_g1

0x25d7,	// (0x00032649) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0003f97f) status_small_wait_pane_g

0xabad,	// (0x0003ac1f) navi_navi_icon_text_pane

0xabb5,	// (0x0003ac27) navi_navi_pane_g1_ParamLimits

0xabb5,	// (0x0003ac27) navi_navi_pane_g1

0xabc7,	// (0x0003ac39) navi_navi_pane_g2_ParamLimits

0xabc7,	// (0x0003ac39) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0003f94d) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0003f94d) navi_navi_pane_g

0xabd9,	// (0x0003ac4b) navi_navi_tabs_pane

0xabe2,	// (0x0003ac54) navi_navi_text_pane

0xabad,	// (0x0003ac1f) navi_navi_volume_pane

0xab89,	// (0x0003abfb) navi_text_pane_t1

0xab7d,	// (0x0003abef) navi_icon_pane_g1

0xaad0,	// (0x0003ab42) navi_navi_text_pane_t1

0x7fa4,	// (0x00038016) navi_navi_volume_pane_g1

0x7fac,	// (0x0003801e) volume_small_pane

0xaa36,	// (0x0003aaa8) navi_navi_icon_text_pane_g1

0xaa3e,	// (0x0003aab0) navi_navi_icon_text_pane_t1

0x7461,	// (0x000374d3) navi_tabs_2_long_pane

0x7461,	// (0x000374d3) navi_tabs_2_pane

0x7461,	// (0x000374d3) navi_tabs_3_long_pane

0x7461,	// (0x000374d3) navi_tabs_3_pane

0x7461,	// (0x000374d3) navi_tabs_4_pane

0x7f84,	// (0x00037ff6) tabs_2_active_pane_ParamLimits

0x7f84,	// (0x00037ff6) tabs_2_active_pane

0x7f94,	// (0x00038006) tabs_2_passive_pane_ParamLimits

0x7f94,	// (0x00038006) tabs_2_passive_pane

0x7f52,	// (0x00037fc4) tabs_3_active_pane_ParamLimits

0x7f52,	// (0x00037fc4) tabs_3_active_pane

0x7f62,	// (0x00037fd4) tabs_3_passive_pane_ParamLimits

0x7f62,	// (0x00037fd4) tabs_3_passive_pane

0x7f73,	// (0x00037fe5) tabs_3_passive_pane_cp_ParamLimits

0x7f73,	// (0x00037fe5) tabs_3_passive_pane_cp

0x7f0e,	// (0x00037f80) tabs_4_active_pane_ParamLimits

0x7f0e,	// (0x00037f80) tabs_4_active_pane

0x7f1f,	// (0x00037f91) tabs_4_passive_pane_ParamLimits

0x7f1f,	// (0x00037f91) tabs_4_passive_pane

0x7f30,	// (0x00037fa2) tabs_4_passive_pane_cp_ParamLimits

0x7f30,	// (0x00037fa2) tabs_4_passive_pane_cp

0x7f41,	// (0x00037fb3) tabs_4_passive_pane_cp2_ParamLimits

0x7f41,	// (0x00037fb3) tabs_4_passive_pane_cp2

0x7eea,	// (0x00037f5c) tabs_2_long_active_pane_ParamLimits

0x7eea,	// (0x00037f5c) tabs_2_long_active_pane

0x7efc,	// (0x00037f6e) tabs_2_long_passive_pane_ParamLimits

0x7efc,	// (0x00037f6e) tabs_2_long_passive_pane

0x7ea5,	// (0x00037f17) tabs_3_long_active_pane_ParamLimits

0x7ea5,	// (0x00037f17) tabs_3_long_active_pane

0x7ebe,	// (0x00037f30) tabs_3_long_passive_pane_ParamLimits

0x7ebe,	// (0x00037f30) tabs_3_long_passive_pane

0x7ed1,	// (0x00037f43) tabs_3_long_passive_pane_cp_ParamLimits

0x7ed1,	// (0x00037f43) tabs_3_long_passive_pane_cp

0x7e4b,	// (0x00037ebd) volume_small_pane_g1

0x7e54,	// (0x00037ec6) volume_small_pane_g2

0x7e5d,	// (0x00037ecf) volume_small_pane_g3

0x7e66,	// (0x00037ed8) volume_small_pane_g4

0x7e6f,	// (0x00037ee1) volume_small_pane_g5

0x7e78,	// (0x00037eea) volume_small_pane_g6

0x7e81,	// (0x00037ef3) volume_small_pane_g7

0x7e8a,	// (0x00037efc) volume_small_pane_g8

0x7e93,	// (0x00037f05) volume_small_pane_g9

0x7e9c,	// (0x00037f0e) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0003f919) volume_small_pane_g

0x23a6,	// (0x00032418) bg_active_tab_pane_cp2_ParamLimits

0x23a6,	// (0x00032418) bg_active_tab_pane_cp2

0x5f0c,	// (0x00035f7e) tabs_3_active_pane_g1

0x5f14,	// (0x00035f86) tabs_3_active_pane_t1

0x23a6,	// (0x00032418) bg_passive_tab_pane_cp2_ParamLimits

0x23a6,	// (0x00032418) bg_passive_tab_pane_cp2

0x5f0c,	// (0x00035f7e) tabs_3_passive_pane_g1

0x5f14,	// (0x00035f86) tabs_3_passive_pane_t1

0x23a6,	// (0x00032418) bg_active_tab_pane_cp3_ParamLimits

0x23a6,	// (0x00032418) bg_active_tab_pane_cp3

0x5f26,	// (0x00035f98) tabs_4_active_pane_g1

0x5f2e,	// (0x00035fa0) tabs_4_active_pane_t1

0x23a6,	// (0x00032418) bg_passive_tab_pane_cp3_ParamLimits

0x23a6,	// (0x00032418) bg_passive_tab_pane_cp3

0x5f26,	// (0x00035f98) tabs_4_1_passive_pane_g1

0x5f2e,	// (0x00035fa0) tabs_4_1_passive_pane_t1

0x980a,	// (0x0003987c) list_highlight_pane_cp2

0xb0ee,	// (0x0003b160) list_set_pane_ParamLimits

0xb0ee,	// (0x0003b160) list_set_pane

0xb190,	// (0x0003b202) main_pane_set_t1_ParamLimits

0xb190,	// (0x0003b202) main_pane_set_t1

0xb1b0,	// (0x0003b222) main_pane_set_t2_ParamLimits

0xb1b0,	// (0x0003b222) main_pane_set_t2

0xb1c4,	// (0x0003b236) main_pane_set_t3_ParamLimits

0xb1c4,	// (0x0003b236) main_pane_set_t3

0xb1d6,	// (0x0003b248) main_pane_set_t4_ParamLimits

0xb1d6,	// (0x0003b248) main_pane_set_t4

0x0003,

0xf977,	// (0x0003f9e9) main_pane_set_t_ParamLimits

0xf977,	// (0x0003f9e9) main_pane_set_t

0xb1e8,	// (0x0003b25a) setting_code_pane

0xb1f4,	// (0x0003b266) setting_slider_graphic_pane

0xb1f4,	// (0x0003b266) setting_slider_pane

0xb1f4,	// (0x0003b266) setting_text_pane

0xb1f4,	// (0x0003b266) setting_volume_pane

0x5f40,	// (0x00035fb2) volume_set_pane

0x23a6,	// (0x00032418) bg_set_opt_pane_cp

0x5f48,	// (0x00035fba) setting_slider_pane_t1

0x5f61,	// (0x00035fd3) setting_slider_pane_t2

0x5f7b,	// (0x00035fed) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003f5d0) setting_slider_pane_t

0x5f93,	// (0x00036005) slider_set_pane

0x234a,	// (0x000323bc) bg_set_opt_pane_cp2

0x23b4,	// (0x00032426) setting_slider_graphic_pane_g1

0x5fa9,	// (0x0003601b) setting_slider_graphic_pane_t1

0x5fb9,	// (0x0003602b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003f5d7) setting_slider_graphic_pane_t

0x5fc9,	// (0x0003603b) slider_set_pane_cp

0x234a,	// (0x000323bc) input_focus_pane_cp1

0xb0ad,	// (0x0003b11f) list_set_text_pane

0x2340,	// (0x000323b2) setting_text_pane_g1

0x234a,	// (0x000323bc) input_focus_pane_cp2

0x2340,	// (0x000323b2) setting_code_pane_g1

0x23bd,	// (0x0003242f) setting_code_pane_t1

0x4636,	// (0x000346a8) set_text_pane_t1_ParamLimits

0x4636,	// (0x000346a8) set_text_pane_t1

0x27b0,	// (0x00032822) set_opt_bg_pane_g1

0x27b8,	// (0x0003282a) set_opt_bg_pane_g2

0xb087,	// (0x0003b0f9) set_opt_bg_pane_g3

0x27c8,	// (0x0003283a) set_opt_bg_pane_g4

0x27d0,	// (0x00032842) set_opt_bg_pane_g5

0x27d8,	// (0x0003284a) set_opt_bg_pane_g6

0xb091,	// (0x0003b103) set_opt_bg_pane_g7

0xb099,	// (0x0003b10b) set_opt_bg_pane_g8

0xb0a3,	// (0x0003b115) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0003f9d6) set_opt_bg_pane_g

0xb07a,	// (0x0003b0ec) slider_set_pane_g1

0x802b,	// (0x0003809d) slider_set_pane_g2

0x0006,

0xf955,	// (0x0003f9c7) slider_set_pane_g

0x7fb5,	// (0x00038027) volume_set_pane_g1

0x7fbd,	// (0x0003802f) volume_set_pane_g2

0x7fc5,	// (0x00038037) volume_set_pane_g3

0x7fcd,	// (0x0003803f) volume_set_pane_g4

0x7fd5,	// (0x00038047) volume_set_pane_g5

0x7fdd,	// (0x0003804f) volume_set_pane_g6

0x7fe5,	// (0x00038057) volume_set_pane_g7

0x7fed,	// (0x0003805f) volume_set_pane_g8

0x7ff5,	// (0x00038067) volume_set_pane_g9

0x7ffd,	// (0x0003806f) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0003f99f) volume_set_pane_g

0x5fd1,	// (0x00036043) indicator_pane_ParamLimits

0x5fd1,	// (0x00036043) indicator_pane

0x5fdd,	// (0x0003604f) main_idle_pane_g2_ParamLimits

0x5fdd,	// (0x0003604f) main_idle_pane_g2

0x6005,	// (0x00036077) main_pane_idle_g1_ParamLimits

0x6005,	// (0x00036077) main_pane_idle_g1

0x23cb,	// (0x0003243d) popup_clock_digital_analogue_window_ParamLimits

0x23cb,	// (0x0003243d) popup_clock_digital_analogue_window

0x6012,	// (0x00036084) soft_indicator_pane_ParamLimits

0x6012,	// (0x00036084) soft_indicator_pane

0x601e,	// (0x00036090) wallpaper_pane_ParamLimits

0x601e,	// (0x00036090) wallpaper_pane

0x2340,	// (0x000323b2) wallpaper_pane_g1

0x602a,	// (0x0003609c) indicator_pane_g1_ParamLimits

0x602a,	// (0x0003609c) indicator_pane_g1

0xb4b1,	// (0x0003b523) navi_navi_icon_text_pane_srt_g1

0x23f9,	// (0x0003246b) soft_indicator_pane_t1

0x2413,	// (0x00032485) aid_ps_area_pane

0x6036,	// (0x000360a8) aid_ps_clock_pane

0x2424,	// (0x00032496) aid_ps_indicator_pane

0x2430,	// (0x000324a2) indicator_ps_pane_ParamLimits

0x2430,	// (0x000324a2) indicator_ps_pane

0x243f,	// (0x000324b1) power_save_pane_g1_ParamLimits

0x243f,	// (0x000324b1) power_save_pane_g1

0x244b,	// (0x000324bd) power_save_pane_g2_ParamLimits

0x244b,	// (0x000324bd) power_save_pane_g2

0x5a8f,	// (0x00035b01) aid_navinavi_width_pane

0x2413,	// (0x00032485) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003f5dc) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003f5dc) power_save_pane_g

0x2459,	// (0x000324cb) power_save_pane_t1_ParamLimits

0x2459,	// (0x000324cb) power_save_pane_t1

0x6036,	// (0x000360a8) aid_ps_clock_pane_ParamLimits

0x2424,	// (0x00032496) aid_ps_indicator_pane_ParamLimits

0x246b,	// (0x000324dd) power_save_pane_t4_ParamLimits

0x246b,	// (0x000324dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003f5e1) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003f5e1) power_save_pane_t

0x2495,	// (0x00032507) power_save_t3_ParamLimits

0x2495,	// (0x00032507) power_save_t3

0x2480,	// (0x000324f2) power_save_t2_ParamLimits

0x2480,	// (0x000324f2) power_save_t2

0x24aa,	// (0x0003251c) indicator_ps_pane_g1

0x6044,	// (0x000360b6) ai_gene_pane_ParamLimits

0x6044,	// (0x000360b6) ai_gene_pane

0x6050,	// (0x000360c2) ai_links_pane_ParamLimits

0x6050,	// (0x000360c2) ai_links_pane

0x605c,	// (0x000360ce) indicator_pane_cp1_ParamLimits

0x605c,	// (0x000360ce) indicator_pane_cp1

0x6068,	// (0x000360da) main_pane_idle_g1_cp_ParamLimits

0x6068,	// (0x000360da) main_pane_idle_g1_cp

0x6074,	// (0x000360e6) popup_ai_links_title_window

0x607d,	// (0x000360ef) soft_indicator_pane_cp1_ParamLimits

0x607d,	// (0x000360ef) soft_indicator_pane_cp1

0xae74,	// (0x0003aee6) ai_links_pane_g1

0xae7d,	// (0x0003aeef) grid_ai_links_pane

0xae57,	// (0x0003aec9) ai_gene_pane_1

0xae62,	// (0x0003aed4) ai_gene_pane_2

0xae6b,	// (0x0003aedd) list_highlight_pane_cp4

0xae3b,	// (0x0003aead) cell_ai_link_pane_ParamLimits

0xae3b,	// (0x0003aead) cell_ai_link_pane

0xae33,	// (0x0003aea5) cell_ai_link_pane_g1

0x25d7,	// (0x00032649) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0003f97a) cell_ai_link_pane_g

0x234a,	// (0x000323bc) grid_highlight_cp2

0x234a,	// (0x000323bc) bg_popup_sub_pane_cp1

0x24c1,	// (0x00032533) popup_ai_links_title_window_t1

0xad83,	// (0x0003adf5) ai_gene_pane_1_g1_ParamLimits

0xad83,	// (0x0003adf5) ai_gene_pane_1_g1

0xad8f,	// (0x0003ae01) ai_gene_pane_1_g2_ParamLimits

0xad8f,	// (0x0003ae01) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0003f970) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0003f970) ai_gene_pane_1_g

0xad9c,	// (0x0003ae0e) ai_gene_pane_1_t1_ParamLimits

0xad9c,	// (0x0003ae0e) ai_gene_pane_1_t1

0xadd0,	// (0x0003ae42) grid_ai_soft_ind_pane

0xad6e,	// (0x0003ade0) ai_gene_pane_2_t1_ParamLimits

0xad6e,	// (0x0003ade0) ai_gene_pane_2_t1

0x6089,	// (0x000360fb) main_pane_empty_t1_ParamLimits

0x6089,	// (0x000360fb) main_pane_empty_t1

0x60a1,	// (0x00036113) main_pane_empty_t2_ParamLimits

0x60a1,	// (0x00036113) main_pane_empty_t2

0x60b6,	// (0x00036128) main_pane_empty_t3_ParamLimits

0x60b6,	// (0x00036128) main_pane_empty_t3

0x60c8,	// (0x0003613a) main_pane_empty_t4_ParamLimits

0x60c8,	// (0x0003613a) main_pane_empty_t4

0x60da,	// (0x0003614c) main_pane_empty_t5_ParamLimits

0x60da,	// (0x0003614c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003f5e6) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003f5e6) main_pane_empty_t

0x2801,	// (0x00032873) bg_popup_window_pane_ParamLimits

0x2801,	// (0x00032873) bg_popup_window_pane

0xaade,	// (0x0003ab50) find_popup_pane_cp2_ParamLimits

0xaade,	// (0x0003ab50) find_popup_pane_cp2

0xaaea,	// (0x0003ab5c) heading_pane_ParamLimits

0xaaea,	// (0x0003ab5c) heading_pane

0x234a,	// (0x000323bc) bg_popup_sub_pane

0xaa58,	// (0x0003aaca) bg_popup_window_pane_g1_ParamLimits

0xaa58,	// (0x0003aaca) bg_popup_window_pane_g1

0xaa64,	// (0x0003aad6) bg_popup_window_pane_g2_ParamLimits

0xaa64,	// (0x0003aad6) bg_popup_window_pane_g2

0xaa70,	// (0x0003aae2) bg_popup_window_pane_g3_ParamLimits

0xaa70,	// (0x0003aae2) bg_popup_window_pane_g3

0xaa7c,	// (0x0003aaee) bg_popup_window_pane_g4_ParamLimits

0xaa7c,	// (0x0003aaee) bg_popup_window_pane_g4

0xaa88,	// (0x0003aafa) bg_popup_window_pane_g5_ParamLimits

0xaa88,	// (0x0003aafa) bg_popup_window_pane_g5

0xaa94,	// (0x0003ab06) bg_popup_window_pane_g6_ParamLimits

0xaa94,	// (0x0003ab06) bg_popup_window_pane_g6

0xaaa0,	// (0x0003ab12) bg_popup_window_pane_g7_ParamLimits

0xaaa0,	// (0x0003ab12) bg_popup_window_pane_g7

0xaaac,	// (0x0003ab1e) bg_popup_window_pane_g8_ParamLimits

0xaaac,	// (0x0003ab1e) bg_popup_window_pane_g8

0xaab8,	// (0x0003ab2a) bg_popup_window_pane_g9_ParamLimits

0xaab8,	// (0x0003ab2a) bg_popup_window_pane_g9

0xaac4,	// (0x0003ab36) bg_popup_window_pane_g10_ParamLimits

0xaac4,	// (0x0003ab36) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0003f938) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0003f938) bg_popup_window_pane_g

0xa9ed,	// (0x0003aa5f) bg_popup_heading_pane_ParamLimits

0xa9ed,	// (0x0003aa5f) bg_popup_heading_pane

0x81bb,	// (0x0003822d) tabs_4_passive_pane_cp_srt_ParamLimits

0x81bb,	// (0x0003822d) tabs_4_passive_pane_cp_srt

0x81cd,	// (0x0003823f) tabs_4_passive_pane_srt_ParamLimits

0xaa01,	// (0x0003aa73) heading_pane_g2

0x81cd,	// (0x0003823f) tabs_4_passive_pane_srt

0x980a,	// (0x0003987c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x980a,	// (0x0003987c) bg_passive_tab_pane_cp3_srt

0xaa09,	// (0x0003aa7b) heading_pane_t1_ParamLimits

0xaa09,	// (0x0003aa7b) heading_pane_t1

0xaa20,	// (0x0003aa92) heading_pane_t2_ParamLimits

0xaa20,	// (0x0003aa92) heading_pane_t2

0x0001,

0xf8c1,	// (0x0003f933) heading_pane_t_ParamLimits

0xf8c1,	// (0x0003f933) heading_pane_t

0xa52a,	// (0x0003a59c) bg_popup_heading_pane_g1

0xa5d9,	// (0x0003a64b) bg_popup_heading_pane_g2

0xa5e3,	// (0x0003a655) bg_popup_heading_pane_g3

0xa5ed,	// (0x0003a65f) bg_popup_heading_pane_g4

0xa5f7,	// (0x0003a669) bg_popup_heading_pane_g5

0xa601,	// (0x0003a673) bg_popup_heading_pane_g6

0xa609,	// (0x0003a67b) bg_popup_heading_pane_g7

0xa611,	// (0x0003a683) bg_popup_heading_pane_g8

0xa61b,	// (0x0003a68d) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0003f8ef) bg_popup_heading_pane_g

0x9d17,	// (0x00039d89) bg_popup_sub_pane_g1

0x9d27,	// (0x00039d99) bg_popup_sub_pane_g2

0x9d1f,	// (0x00039d91) bg_popup_sub_pane_g3

0x9d37,	// (0x00039da9) bg_popup_sub_pane_g4

0x9d2f,	// (0x00039da1) bg_popup_sub_pane_g5

0x9d3f,	// (0x00039db1) bg_popup_sub_pane_g6

0x9d47,	// (0x00039db9) bg_popup_sub_pane_g7

0x9d57,	// (0x00039dc9) bg_popup_sub_pane_g8

0x9d4f,	// (0x00039dc1) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0003f8c9) bg_popup_sub_pane_g

0x2398,	// (0x0003240a) bg_popup_window_pane_cp5_ParamLimits

0x2398,	// (0x0003240a) bg_popup_window_pane_cp5

0x24de,	// (0x00032550) popup_note_window_g1_ParamLimits

0x24de,	// (0x00032550) popup_note_window_g1

0x24ea,	// (0x0003255c) popup_note_window_t1_ParamLimits

0x24ea,	// (0x0003255c) popup_note_window_t1

0x2500,	// (0x00032572) popup_note_window_t2_ParamLimits

0x2500,	// (0x00032572) popup_note_window_t2

0x2516,	// (0x00032588) popup_note_window_t3_ParamLimits

0x2516,	// (0x00032588) popup_note_window_t3

0x252c,	// (0x0003259e) popup_note_window_t4_ParamLimits

0x252c,	// (0x0003259e) popup_note_window_t4

0x2554,	// (0x000325c6) popup_note_window_t5_ParamLimits

0x2554,	// (0x000325c6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003f5f1) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003f5f1) popup_note_window_t

0x2578,	// (0x000325ea) bg_popup_window_pane_cp6_ParamLimits

0x2578,	// (0x000325ea) bg_popup_window_pane_cp6

0xa4a6,	// (0x0003a518) popup_note_image_window_g1_ParamLimits

0xa4a6,	// (0x0003a518) popup_note_image_window_g1

0xa4b2,	// (0x0003a524) popup_note_image_window_g2_ParamLimits

0xa4b2,	// (0x0003a524) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0003f8bd) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0003f8bd) popup_note_image_window_g

0xa4cb,	// (0x0003a53d) popup_note_image_window_t1_ParamLimits

0xa4cb,	// (0x0003a53d) popup_note_image_window_t1

0xa4e4,	// (0x0003a556) popup_note_image_window_t2_ParamLimits

0xa4e4,	// (0x0003a556) popup_note_image_window_t2

0xa4fd,	// (0x0003a56f) popup_note_image_window_t3_ParamLimits

0xa4fd,	// (0x0003a56f) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0003f8c2) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0003f8c2) popup_note_image_window_t

0xa36f,	// (0x0003a3e1) bg_popup_window_pane_cp7_ParamLimits

0xa36f,	// (0x0003a3e1) bg_popup_window_pane_cp7

0xa39f,	// (0x0003a411) popup_note_wait_window_g1_ParamLimits

0xa39f,	// (0x0003a411) popup_note_wait_window_g1

0xa3ab,	// (0x0003a41d) popup_note_wait_window_g2_ParamLimits

0xa3ab,	// (0x0003a41d) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0003f8ab) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0003f8ab) popup_note_wait_window_g

0xa3c3,	// (0x0003a435) popup_note_wait_window_t1_ParamLimits

0xa3c3,	// (0x0003a435) popup_note_wait_window_t1

0xa3ea,	// (0x0003a45c) popup_note_wait_window_t2_ParamLimits

0xa3ea,	// (0x0003a45c) popup_note_wait_window_t2

0xa407,	// (0x0003a479) popup_note_wait_window_t3_ParamLimits

0xa407,	// (0x0003a479) popup_note_wait_window_t3

0xa41a,	// (0x0003a48c) popup_note_wait_window_t4_ParamLimits

0xa41a,	// (0x0003a48c) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0003f8b2) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0003f8b2) popup_note_wait_window_t

0xa43f,	// (0x0003a4b1) wait_bar_pane_ParamLimits

0xa43f,	// (0x0003a4b1) wait_bar_pane

0x234a,	// (0x000323bc) wait_anim_pane

0x234a,	// (0x000323bc) wait_border_pane

0x2340,	// (0x000323b2) wait_anim_pane_g1

0x2340,	// (0x000323b2) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0003f76b) wait_anim_pane_g

0xa31b,	// (0x0003a38d) wait_border_pane_g1

0xa326,	// (0x0003a398) wait_border_pane_g2

0xa32f,	// (0x0003a3a1) wait_border_pane_g3

0x0002,

0xf832,	// (0x0003f8a4) wait_border_pane_g

0xa186,	// (0x0003a1f8) bg_popup_window_pane_cp16_ParamLimits

0xa186,	// (0x0003a1f8) bg_popup_window_pane_cp16

0xa286,	// (0x0003a2f8) indicator_popup_pane_cp4_ParamLimits

0xa286,	// (0x0003a2f8) indicator_popup_pane_cp4

0xa29a,	// (0x0003a30c) popup_query_data_window_t1_ParamLimits

0xa29a,	// (0x0003a30c) popup_query_data_window_t1

0xa2ac,	// (0x0003a31e) popup_query_data_window_t2_ParamLimits

0xa2ac,	// (0x0003a31e) popup_query_data_window_t2

0xa2c5,	// (0x0003a337) popup_query_data_window_t3_ParamLimits

0xa2c5,	// (0x0003a337) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0003f89d) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0003f89d) popup_query_data_window_t

0xa2df,	// (0x0003a351) query_popup_data_pane_ParamLimits

0xa2df,	// (0x0003a351) query_popup_data_pane

0xa2f3,	// (0x0003a365) query_popup_data_pane_cp1_ParamLimits

0xa2f3,	// (0x0003a365) query_popup_data_pane_cp1

0xa186,	// (0x0003a1f8) bg_popup_window_pane_cp10_ParamLimits

0xa186,	// (0x0003a1f8) bg_popup_window_pane_cp10

0xa1b8,	// (0x0003a22a) indicator_popup_pane_ParamLimits

0xa1b8,	// (0x0003a22a) indicator_popup_pane

0xa1da,	// (0x0003a24c) popup_query_code_window_t1_ParamLimits

0xa1da,	// (0x0003a24c) popup_query_code_window_t1

0xa1f4,	// (0x0003a266) popup_query_code_window_t2_ParamLimits

0xa1f4,	// (0x0003a266) popup_query_code_window_t2

0xa23d,	// (0x0003a2af) popup_query_code_window_t3_ParamLimits

0xa23d,	// (0x0003a2af) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0003f896) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0003f896) popup_query_code_window_t

0xa26c,	// (0x0003a2de) query_popup_pane_ParamLimits

0xa26c,	// (0x0003a2de) query_popup_pane

0x2578,	// (0x000325ea) bg_popup_window_pane_cp15_ParamLimits

0x2578,	// (0x000325ea) bg_popup_window_pane_cp15

0x60ee,	// (0x00036160) indicator_popup_pane_cp1_ParamLimits

0x60ee,	// (0x00036160) indicator_popup_pane_cp1

0x6101,	// (0x00036173) indicator_popup_pane_cp2_ParamLimits

0x6101,	// (0x00036173) indicator_popup_pane_cp2

0x6114,	// (0x00036186) popup_query_data_code_window_g1_ParamLimits

0x6114,	// (0x00036186) popup_query_data_code_window_g1

0x2596,	// (0x00032608) popup_query_data_code_window_t1_ParamLimits

0x2596,	// (0x00032608) popup_query_data_code_window_t1

0x25a8,	// (0x0003261a) popup_query_data_code_window_t2_ParamLimits

0x25a8,	// (0x0003261a) popup_query_data_code_window_t2

0x6127,	// (0x00036199) popup_query_data_code_window_t3_ParamLimits

0x6127,	// (0x00036199) popup_query_data_code_window_t3

0x613d,	// (0x000361af) popup_query_data_code_window_t4_ParamLimits

0x613d,	// (0x000361af) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003f5fc) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003f5fc) popup_query_data_code_window_t

0x7d29,	// (0x00037d9b) list_single_midp_graphic_pane_g3

0x6155,	// (0x000361c7) query_popup_data_pane_cp2_ParamLimits

0x6168,	// (0x000361da) query_popup_pane_cp2_ParamLimits

0x6168,	// (0x000361da) query_popup_pane_cp2

0x234a,	// (0x000323bc) bg_popup_window_pane_cp11

0xa17e,	// (0x0003a1f0) heading_pane_cp5

0x2604,	// (0x00032676) listscroll_popup_info_pane

0x234a,	// (0x000323bc) input_focus_pane_cp3

0x25ba,	// (0x0003262c) query_popup_pane_t1

0x25c8,	// (0x0003263a) list_popup_info_pane_ParamLimits

0x25c8,	// (0x0003263a) list_popup_info_pane

0x25d7,	// (0x00032649) listscroll_popup_info_pane_g1

0x25df,	// (0x00032651) scroll_pane_cp7

0x617b,	// (0x000361ed) popup_info_list_pane_t1_ParamLimits

0x617b,	// (0x000361ed) popup_info_list_pane_t1

0x6195,	// (0x00036207) popup_info_list_pane_t2_ParamLimits

0x6195,	// (0x00036207) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003f605) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003f605) popup_info_list_pane_t

0x234a,	// (0x000323bc) bg_popup_window_pane_cp12

0xb4cb,	// (0x0003b53d) find_popup_pane

0x23a6,	// (0x00032418) bg_popup_window_pane_cp3

0x25e9,	// (0x0003265b) heading_pane_cp3

0x25f5,	// (0x00032667) listscroll_popup_graphic_pane

0x234a,	// (0x000323bc) bg_popup_window_pane_cp4

0x61ff,	// (0x00036271) heading_pane_cp4

0x2604,	// (0x00032676) listscroll_popup_colour_pane

0x6209,	// (0x0003627b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6209,	// (0x0003627b) cell_large_graphic_colour_none_popup_pane

0x621d,	// (0x0003628f) grid_large_graphic_colour_popup_pane_ParamLimits

0x621d,	// (0x0003628f) grid_large_graphic_colour_popup_pane

0x6245,	// (0x000362b7) listscroll_popup_colour_pane_g1_ParamLimits

0x6245,	// (0x000362b7) listscroll_popup_colour_pane_g1

0x625c,	// (0x000362ce) listscroll_popup_colour_pane_g2_ParamLimits

0x625c,	// (0x000362ce) listscroll_popup_colour_pane_g2

0x6273,	// (0x000362e5) listscroll_popup_colour_pane_g3_ParamLimits

0x6273,	// (0x000362e5) listscroll_popup_colour_pane_g3

0x6283,	// (0x000362f5) listscroll_popup_colour_pane_g4_ParamLimits

0x6283,	// (0x000362f5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003f60a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003f60a) listscroll_popup_colour_pane_g

0x260c,	// (0x0003267e) scroll_pane_cp6_ParamLimits

0x260c,	// (0x0003267e) scroll_pane_cp6

0x6293,	// (0x00036305) cell_large_graphic_colour_popup_pane_ParamLimits

0x6293,	// (0x00036305) cell_large_graphic_colour_popup_pane

0x62b2,	// (0x00036324) cell_large_graphic_colour_none_popup_pane_t1

0x234a,	// (0x000323bc) grid_highlight_pane_cp5

0x261e,	// (0x00032690) cell_large_graphic_colour_popup_pane_g1

0x2626,	// (0x00032698) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003f613) cell_large_graphic_colour_popup_pane_g

0x262e,	// (0x000326a0) cell_large_graphic_colour_popup_pane_g2_copy1

0x2637,	// (0x000326a9) grid_highlight_pane_cp4

0x263f,	// (0x000326b1) bg_popup_window_pane_cp8_ParamLimits

0x263f,	// (0x000326b1) bg_popup_window_pane_cp8

0x62c1,	// (0x00036333) popup_snote_single_text_window_g1_ParamLimits

0x62c1,	// (0x00036333) popup_snote_single_text_window_g1

0x62d3,	// (0x00036345) popup_snote_single_text_window_t1_ParamLimits

0x62d3,	// (0x00036345) popup_snote_single_text_window_t1

0x62e6,	// (0x00036358) popup_snote_single_text_window_t2_ParamLimits

0x62e6,	// (0x00036358) popup_snote_single_text_window_t2

0x62f9,	// (0x0003636b) popup_snote_single_text_window_t3_ParamLimits

0x62f9,	// (0x0003636b) popup_snote_single_text_window_t3

0x6332,	// (0x000363a4) popup_snote_single_text_window_t4_ParamLimits

0x6332,	// (0x000363a4) popup_snote_single_text_window_t4

0x6366,	// (0x000363d8) popup_snote_single_text_window_t5_ParamLimits

0x6366,	// (0x000363d8) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003f618) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003f618) popup_snote_single_text_window_t

0x265a,	// (0x000326cc) bg_popup_window_pane_cp9_ParamLimits

0x265a,	// (0x000326cc) bg_popup_window_pane_cp9

0x62c1,	// (0x00036333) popup_snote_single_graphic_window_g1_ParamLimits

0x62c1,	// (0x00036333) popup_snote_single_graphic_window_g1

0x2668,	// (0x000326da) popup_snote_single_graphic_window_g2_ParamLimits

0x2668,	// (0x000326da) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003f623) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003f623) popup_snote_single_graphic_window_g

0x2674,	// (0x000326e6) popup_snote_single_graphic_window_t1_ParamLimits

0x2674,	// (0x000326e6) popup_snote_single_graphic_window_t1

0x2687,	// (0x000326f9) popup_snote_single_graphic_window_t2_ParamLimits

0x2687,	// (0x000326f9) popup_snote_single_graphic_window_t2

0x6395,	// (0x00036407) popup_snote_single_graphic_window_t3_ParamLimits

0x6395,	// (0x00036407) popup_snote_single_graphic_window_t3

0x63ce,	// (0x00036440) popup_snote_single_graphic_window_t4_ParamLimits

0x63ce,	// (0x00036440) popup_snote_single_graphic_window_t4

0x6402,	// (0x00036474) popup_snote_single_graphic_window_t5_ParamLimits

0x6402,	// (0x00036474) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003f628) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003f628) popup_snote_single_graphic_window_t

0xb40d,	// (0x0003b47f) grid_graphic_popup_pane_ParamLimits

0xb40d,	// (0x0003b47f) grid_graphic_popup_pane

0xb437,	// (0x0003b4a9) listscroll_popup_graphic_pane_g1_ParamLimits

0xb437,	// (0x0003b4a9) listscroll_popup_graphic_pane_g1

0xb44b,	// (0x0003b4bd) listscroll_popup_graphic_pane_g2_ParamLimits

0xb44b,	// (0x0003b4bd) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0003fa13) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0003fa13) listscroll_popup_graphic_pane_g

0xb45f,	// (0x0003b4d1) scroll_pane_cp5

0xb3ac,	// (0x0003b41e) cell_graphic_popup_pane_ParamLimits

0xb3ac,	// (0x0003b41e) cell_graphic_popup_pane

0xb38d,	// (0x0003b3ff) cell_graphic_popup_pane_g1

0xb395,	// (0x0003b407) cell_graphic_popup_pane_g2

0x262e,	// (0x000326a0) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0003fa0c) cell_graphic_popup_pane_g

0xb39e,	// (0x0003b410) cell_graphic_popup_pane_t2

0x2637,	// (0x000326a9) grid_highlight_pane_cp3

0x26ac,	// (0x0003271e) list_gen_pane_ParamLimits

0x26ac,	// (0x0003271e) list_gen_pane

0x26d4,	// (0x00032746) scroll_pane

0xb2e5,	// (0x0003b357) bg_list_pane_g1_ParamLimits

0xb2e5,	// (0x0003b357) bg_list_pane_g1

0xb302,	// (0x0003b374) bg_list_pane_g2_ParamLimits

0xb302,	// (0x0003b374) bg_list_pane_g2

0xb317,	// (0x0003b389) bg_list_pane_g3_ParamLimits

0xb317,	// (0x0003b389) bg_list_pane_g3

0xb32b,	// (0x0003b39d) bg_list_pane_g4_ParamLimits

0xb32b,	// (0x0003b39d) bg_list_pane_g4

0xb33f,	// (0x0003b3b1) bg_list_pane_g5_ParamLimits

0xb33f,	// (0x0003b3b1) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0003fa01) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0003fa01) bg_list_pane_g

0xb27a,	// (0x0003b2ec) list_double2_graphic_large_graphic_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double2_graphic_large_graphic_pane

0xb27a,	// (0x0003b2ec) list_double2_graphic_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double2_graphic_pane

0xb27a,	// (0x0003b2ec) list_double2_large_graphic_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double2_large_graphic_pane

0x80d1,	// (0x00038143) list_double2_pane_ParamLimits

0x80d1,	// (0x00038143) list_double2_pane

0xb27a,	// (0x0003b2ec) list_double_graphic_heading_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_graphic_heading_pane

0xb27a,	// (0x0003b2ec) list_double_graphic_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_graphic_pane

0xb27a,	// (0x0003b2ec) list_double_heading_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_heading_pane

0xb27a,	// (0x0003b2ec) list_double_large_graphic_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_large_graphic_pane

0xb27a,	// (0x0003b2ec) list_double_number_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_number_pane

0xb27a,	// (0x0003b2ec) list_double_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_pane

0xb27a,	// (0x0003b2ec) list_double_time_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_double_time_pane

0xb27a,	// (0x0003b2ec) list_setting_number_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_setting_number_pane

0xb27a,	// (0x0003b2ec) list_setting_pane_ParamLimits

0xb27a,	// (0x0003b2ec) list_setting_pane

0x8112,	// (0x00038184) list_single_2graphic_pane_ParamLimits

0x8112,	// (0x00038184) list_single_2graphic_pane

0x8112,	// (0x00038184) list_single_graphic_heading_pane_ParamLimits

0x8112,	// (0x00038184) list_single_graphic_heading_pane

0x8112,	// (0x00038184) list_single_graphic_pane_ParamLimits

0x8112,	// (0x00038184) list_single_graphic_pane

0x8112,	// (0x00038184) list_single_heading_pane_ParamLimits

0x8112,	// (0x00038184) list_single_heading_pane

0x8174,	// (0x000381e6) list_single_large_graphic_pane_ParamLimits

0x8174,	// (0x000381e6) list_single_large_graphic_pane

0x8112,	// (0x00038184) list_single_number_heading_pane_ParamLimits

0x8112,	// (0x00038184) list_single_number_heading_pane

0x8112,	// (0x00038184) list_single_number_pane_ParamLimits

0x8112,	// (0x00038184) list_single_number_pane

0x8112,	// (0x00038184) list_single_pane_ParamLimits

0x8112,	// (0x00038184) list_single_pane

0x234a,	// (0x000323bc) list_highlight_pane_cp1

0x465d,	// (0x000346cf) list_single_pane_g1_ParamLimits

0x465d,	// (0x000346cf) list_single_pane_g1

0x4669,	// (0x000346db) list_single_pane_g2_ParamLimits

0x4669,	// (0x000346db) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_single_pane_g

0x80bb,	// (0x0003812d) list_single_pane_t1_ParamLimits

0x80bb,	// (0x0003812d) list_single_pane_t1

0x465d,	// (0x000346cf) list_single_number_pane_g1_ParamLimits

0x465d,	// (0x000346cf) list_single_number_pane_g1

0x4669,	// (0x000346db) list_single_number_pane_g2_ParamLimits

0x4669,	// (0x000346db) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_single_number_pane_g

0x6447,	// (0x000364b9) list_single_number_pane_t1_ParamLimits

0x6447,	// (0x000364b9) list_single_number_pane_t1

0x8005,	// (0x00038077) list_single_number_pane_t2_ParamLimits

0x8005,	// (0x00038077) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0003f9c2) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0003f9c2) list_single_number_pane_t

0x643b,	// (0x000364ad) list_single_graphic_pane_g1_ParamLimits

0x643b,	// (0x000364ad) list_single_graphic_pane_g1

0x465d,	// (0x000346cf) list_single_graphic_pane_g2_ParamLimits

0x465d,	// (0x000346cf) list_single_graphic_pane_g2

0x4669,	// (0x000346db) list_single_graphic_pane_g3_ParamLimits

0x4669,	// (0x000346db) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003f633) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003f633) list_single_graphic_pane_g

0x6447,	// (0x000364b9) list_single_graphic_pane_t1_ParamLimits

0x6447,	// (0x000364b9) list_single_graphic_pane_t1

0x465d,	// (0x000346cf) list_single_heading_pane_g1_ParamLimits

0x465d,	// (0x000346cf) list_single_heading_pane_g1

0x4669,	// (0x000346db) list_single_heading_pane_g2_ParamLimits

0x4669,	// (0x000346db) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_single_heading_pane_g

0x468b,	// (0x000346fd) list_single_heading_pane_t1_ParamLimits

0x468b,	// (0x000346fd) list_single_heading_pane_t1

0x46a1,	// (0x00034713) list_single_heading_pane_t2_ParamLimits

0x46a1,	// (0x00034713) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003f63f) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003f63f) list_single_heading_pane_t

0x465d,	// (0x000346cf) list_single_number_heading_pane_g1_ParamLimits

0x465d,	// (0x000346cf) list_single_number_heading_pane_g1

0x4669,	// (0x000346db) list_single_number_heading_pane_g2_ParamLimits

0x4669,	// (0x000346db) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_single_number_heading_pane_g

0x468b,	// (0x000346fd) list_single_number_heading_pane_t1_ParamLimits

0x468b,	// (0x000346fd) list_single_number_heading_pane_t1

0x46b3,	// (0x00034725) list_single_number_heading_pane_t2_ParamLimits

0x46b3,	// (0x00034725) list_single_number_heading_pane_t2

0x46c5,	// (0x00034737) list_single_number_heading_pane_t3_ParamLimits

0x46c5,	// (0x00034737) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003f644) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003f644) list_single_number_heading_pane_t

0x645d,	// (0x000364cf) list_single_graphic_heading_pane_g1_ParamLimits

0x645d,	// (0x000364cf) list_single_graphic_heading_pane_g1

0x6469,	// (0x000364db) list_single_graphic_heading_pane_g4_ParamLimits

0x6469,	// (0x000364db) list_single_graphic_heading_pane_g4

0x4669,	// (0x000346db) list_single_graphic_heading_pane_g5_ParamLimits

0x4669,	// (0x000346db) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003f64b) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003f64b) list_single_graphic_heading_pane_g

0x468b,	// (0x000346fd) list_single_graphic_heading_pane_t1_ParamLimits

0x468b,	// (0x000346fd) list_single_graphic_heading_pane_t1

0x647a,	// (0x000364ec) list_single_graphic_heading_pane_t2_ParamLimits

0x647a,	// (0x000364ec) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003f652) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003f652) list_single_graphic_heading_pane_t

0x648c,	// (0x000364fe) list_single_large_graphic_pane_g1_ParamLimits

0x648c,	// (0x000364fe) list_single_large_graphic_pane_g1

0x4ded,	// (0x00034e5f) list_single_large_graphic_pane_g2_ParamLimits

0x4ded,	// (0x00034e5f) list_single_large_graphic_pane_g2

0x6498,	// (0x0003650a) list_single_large_graphic_pane_g3_ParamLimits

0x6498,	// (0x0003650a) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003f657) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003f657) list_single_large_graphic_pane_g

0xa326,	// (0x0003a398) wait_border_pane_g2_copy1

0x64a4,	// (0x00036516) list_single_large_graphic_pane_g4_cp2

0x64ac,	// (0x0003651e) list_single_large_graphic_pane_t1_ParamLimits

0x64ac,	// (0x0003651e) list_single_large_graphic_pane_t1

0x64c2,	// (0x00036534) list_double_pane_g1_ParamLimits

0x64c2,	// (0x00036534) list_double_pane_g1

0x64ce,	// (0x00036540) list_double_pane_g2_ParamLimits

0x64ce,	// (0x00036540) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003f65e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003f65e) list_double_pane_g

0x64da,	// (0x0003654c) list_double_pane_t1_ParamLimits

0x64da,	// (0x0003654c) list_double_pane_t1

0x64f0,	// (0x00036562) list_double_pane_t2_ParamLimits

0x64f0,	// (0x00036562) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003f663) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003f663) list_double_pane_t

0x6502,	// (0x00036574) list_double2_pane_g1_ParamLimits

0x6502,	// (0x00036574) list_double2_pane_g1

0x471d,	// (0x0003478f) list_double2_pane_g2_ParamLimits

0x471d,	// (0x0003478f) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003f668) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003f668) list_double2_pane_g

0x6513,	// (0x00036585) list_double2_pane_t1_ParamLimits

0x6513,	// (0x00036585) list_double2_pane_t1

0x6529,	// (0x0003659b) list_double2_pane_t2_ParamLimits

0x6529,	// (0x0003659b) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003f66d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003f66d) list_double2_pane_t

0x64c2,	// (0x00036534) list_double_number_pane_g1_ParamLimits

0x64c2,	// (0x00036534) list_double_number_pane_g1

0x64ce,	// (0x00036540) list_double_number_pane_g2_ParamLimits

0x64ce,	// (0x00036540) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003f65e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003f65e) list_double_number_pane_g

0x653b,	// (0x000365ad) list_double_number_pane_t1_ParamLimits

0x653b,	// (0x000365ad) list_double_number_pane_t1

0x654d,	// (0x000365bf) list_double_number_pane_t2_ParamLimits

0x654d,	// (0x000365bf) list_double_number_pane_t2

0x6563,	// (0x000365d5) list_double_number_pane_t3_ParamLimits

0x6563,	// (0x000365d5) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003f672) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003f672) list_double_number_pane_t

0x6575,	// (0x000365e7) list_double_graphic_pane_g1_ParamLimits

0x6575,	// (0x000365e7) list_double_graphic_pane_g1

0x6581,	// (0x000365f3) list_double_graphic_pane_g2_ParamLimits

0x6581,	// (0x000365f3) list_double_graphic_pane_g2

0x6590,	// (0x00036602) list_double_graphic_pane_g3_ParamLimits

0x6590,	// (0x00036602) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003f679) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003f679) list_double_graphic_pane_g

0x654d,	// (0x000365bf) list_double_graphic_pane_t1_ParamLimits

0x654d,	// (0x000365bf) list_double_graphic_pane_t1

0x6563,	// (0x000365d5) list_double_graphic_pane_t2_ParamLimits

0x6563,	// (0x000365d5) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003f682) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003f682) list_double_graphic_pane_t

0x65a8,	// (0x0003661a) list_double2_graphic_pane_g1_ParamLimits

0x65a8,	// (0x0003661a) list_double2_graphic_pane_g1

0x64c2,	// (0x00036534) list_double2_graphic_pane_g2_ParamLimits

0x64c2,	// (0x00036534) list_double2_graphic_pane_g2

0x64ce,	// (0x00036540) list_double2_graphic_pane_g3_ParamLimits

0x64ce,	// (0x00036540) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003f687) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003f687) list_double2_graphic_pane_g

0x65b4,	// (0x00036626) list_double2_graphic_pane_t1_ParamLimits

0x65b4,	// (0x00036626) list_double2_graphic_pane_t1

0x65ca,	// (0x0003663c) list_double2_graphic_pane_t2_ParamLimits

0x65ca,	// (0x0003663c) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003f68e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003f68e) list_double2_graphic_pane_t

0x65dc,	// (0x0003664e) list_double_large_graphic_pane_g1_ParamLimits

0x65dc,	// (0x0003664e) list_double_large_graphic_pane_g1

0x65fb,	// (0x0003666d) list_double_large_graphic_pane_g2_ParamLimits

0x65fb,	// (0x0003666d) list_double_large_graphic_pane_g2

0x64ce,	// (0x00036540) list_double_large_graphic_pane_g3_ParamLimits

0x64ce,	// (0x00036540) list_double_large_graphic_pane_g3

0x660c,	// (0x0003667e) list_double_large_graphic_pane_g4_ParamLimits

0x660c,	// (0x0003667e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003f693) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003f693) list_double_large_graphic_pane_g

0x661f,	// (0x00036691) list_double_large_graphic_pane_t1_ParamLimits

0x661f,	// (0x00036691) list_double_large_graphic_pane_t1

0x6638,	// (0x000366aa) list_double_large_graphic_pane_t2_ParamLimits

0x6638,	// (0x000366aa) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003f69e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003f69e) list_double_large_graphic_pane_t

0x664a,	// (0x000366bc) list_double2_large_graphic_pane_g1_ParamLimits

0x664a,	// (0x000366bc) list_double2_large_graphic_pane_g1

0x6656,	// (0x000366c8) list_double2_large_graphic_pane_g2_ParamLimits

0x6656,	// (0x000366c8) list_double2_large_graphic_pane_g2

0x6667,	// (0x000366d9) list_double2_large_graphic_pane_g3_ParamLimits

0x6667,	// (0x000366d9) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003f6a3) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003f6a3) list_double2_large_graphic_pane_g

0x65b4,	// (0x00036626) list_double2_large_graphic_pane_t1_ParamLimits

0x65b4,	// (0x00036626) list_double2_large_graphic_pane_t1

0x65ca,	// (0x0003663c) list_double2_large_graphic_pane_t2_ParamLimits

0x65ca,	// (0x0003663c) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003f68e) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003f68e) list_double2_large_graphic_pane_t

0x6673,	// (0x000366e5) list_double_heading_pane_g1_ParamLimits

0x6673,	// (0x000366e5) list_double_heading_pane_g1

0x6684,	// (0x000366f6) list_double_heading_pane_g2_ParamLimits

0x6684,	// (0x000366f6) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0003f6aa) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0003f6aa) list_double_heading_pane_g

0x6690,	// (0x00036702) list_double_heading_pane_t1_ParamLimits

0x6690,	// (0x00036702) list_double_heading_pane_t1

0x66a6,	// (0x00036718) list_double_heading_pane_t2_ParamLimits

0x66a6,	// (0x00036718) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0003f6af) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0003f6af) list_double_heading_pane_t

0x65a8,	// (0x0003661a) list_double_graphic_heading_pane_g1_ParamLimits

0x65a8,	// (0x0003661a) list_double_graphic_heading_pane_g1

0x6673,	// (0x000366e5) list_double_graphic_heading_pane_g2_ParamLimits

0x6673,	// (0x000366e5) list_double_graphic_heading_pane_g2

0x6684,	// (0x000366f6) list_double_graphic_heading_pane_g3_ParamLimits

0x6684,	// (0x000366f6) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0003f6b4) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0003f6b4) list_double_graphic_heading_pane_g

0x6690,	// (0x00036702) list_double_graphic_heading_pane_t1_ParamLimits

0x6690,	// (0x00036702) list_double_graphic_heading_pane_t1

0x66a6,	// (0x00036718) list_double_graphic_heading_pane_t2_ParamLimits

0x66a6,	// (0x00036718) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0003f6af) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0003f6af) list_double_graphic_heading_pane_t

0x65fb,	// (0x0003666d) list_double_time_pane_g1_ParamLimits

0x65fb,	// (0x0003666d) list_double_time_pane_g1

0x64ce,	// (0x00036540) list_double_time_pane_g2_ParamLimits

0x64ce,	// (0x00036540) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0003f6bb) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0003f6bb) list_double_time_pane_g

0x66b8,	// (0x0003672a) list_double_time_pane_t1_ParamLimits

0x66b8,	// (0x0003672a) list_double_time_pane_t1

0x66ce,	// (0x00036740) list_double_time_pane_t2_ParamLimits

0x66ce,	// (0x00036740) list_double_time_pane_t2

0x66e0,	// (0x00036752) list_double_time_pane_t3_ParamLimits

0x66e0,	// (0x00036752) list_double_time_pane_t3

0x66f2,	// (0x00036764) list_double_time_pane_t4_ParamLimits

0x66f2,	// (0x00036764) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0003f6c0) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0003f6c0) list_double_time_pane_t

0x4c28,	// (0x00034c9a) list_setting_pane_g1_ParamLimits

0x4c28,	// (0x00034c9a) list_setting_pane_g1

0x6684,	// (0x000366f6) list_setting_pane_g2_ParamLimits

0x6684,	// (0x000366f6) list_setting_pane_g2

0x0001,

0xf657,	// (0x0003f6c9) list_setting_pane_g_ParamLimits

0xf657,	// (0x0003f6c9) list_setting_pane_g

0x6704,	// (0x00036776) list_setting_pane_t1_ParamLimits

0x6704,	// (0x00036776) list_setting_pane_t1

0x671b,	// (0x0003678d) list_setting_pane_t2_ParamLimits

0x671b,	// (0x0003678d) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0003f6ce) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0003f6ce) list_setting_pane_t

0x6758,	// (0x000367ca) set_value_pane_cp_ParamLimits

0x6758,	// (0x000367ca) set_value_pane_cp

0x6764,	// (0x000367d6) list_setting_number_pane_g1_ParamLimits

0x6764,	// (0x000367d6) list_setting_number_pane_g1

0x6770,	// (0x000367e2) list_setting_number_pane_g2_ParamLimits

0x6770,	// (0x000367e2) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0003f6d5) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0003f6d5) list_setting_number_pane_g

0x677c,	// (0x000367ee) list_setting_number_pane_t1_ParamLimits

0x677c,	// (0x000367ee) list_setting_number_pane_t1

0x6790,	// (0x00036802) list_setting_number_pane_t2_ParamLimits

0x6790,	// (0x00036802) list_setting_number_pane_t2

0x67a7,	// (0x00036819) list_setting_number_pane_t3_ParamLimits

0x67a7,	// (0x00036819) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0003f6da) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0003f6da) list_setting_number_pane_t

0x6758,	// (0x000367ca) set_value_pane_ParamLimits

0x6758,	// (0x000367ca) set_value_pane

0x2708,	// (0x0003277a) bg_set_opt_pane_ParamLimits

0x2708,	// (0x0003277a) bg_set_opt_pane

0x67ea,	// (0x0003685c) set_value_pane_t1

0x2729,	// (0x0003279b) slider_set_pane_cp3

0x67f8,	// (0x0003686a) volume_small_pane_cp

0x2732,	// (0x000327a4) list_form_gen_pane

0x273b,	// (0x000327ad) scroll_pane_cp8

0x6801,	// (0x00036873) form_field_data_pane_ParamLimits

0x6801,	// (0x00036873) form_field_data_pane

0x6819,	// (0x0003688b) form_field_data_wide_pane_ParamLimits

0x6819,	// (0x0003688b) form_field_data_wide_pane

0x683a,	// (0x000368ac) form_field_popup_pane_ParamLimits

0x683a,	// (0x000368ac) form_field_popup_pane

0x6858,	// (0x000368ca) form_field_popup_wide_pane_ParamLimits

0x6858,	// (0x000368ca) form_field_popup_wide_pane

0x474e,	// (0x000347c0) form_field_slider_pane_ParamLimits

0x474e,	// (0x000347c0) form_field_slider_pane

0x6875,	// (0x000368e7) form_field_slider_wide_pane_ParamLimits

0x6875,	// (0x000368e7) form_field_slider_wide_pane

0x274c,	// (0x000327be) data_form_pane

0x6892,	// (0x00036904) form_field_data_pane_t1

0x2758,	// (0x000327ca) input_focus_pane

0x68aa,	// (0x0003691c) data_form_wide_pane

0x68c7,	// (0x00036939) form_field_data_wide_pane_t1

0x264c,	// (0x000326be) input_focus_pane_cp6

0x68e9,	// (0x0003695b) form_field_popup_pane_t1

0x2758,	// (0x000327ca) input_focus_pane_cp7

0x2786,	// (0x000327f8) list_form_pane

0x6909,	// (0x0003697b) form_field_popup_wide_pane_t1

0x2758,	// (0x000327ca) input_focus_pane_cp8

0x2792,	// (0x00032804) list_form_wide_pane

0x6926,	// (0x00036998) form_field_slider_pane_t1_ParamLimits

0x6926,	// (0x00036998) form_field_slider_pane_t1

0x693c,	// (0x000369ae) form_field_slider_pane_t2_ParamLimits

0x693c,	// (0x000369ae) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0003f6ea) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0003f6ea) form_field_slider_pane_t

0x2398,	// (0x0003240a) input_focus_pane_cp9_ParamLimits

0x2398,	// (0x0003240a) input_focus_pane_cp9

0x6951,	// (0x000369c3) slider_cont_pane_ParamLimits

0x6951,	// (0x000369c3) slider_cont_pane

0x279e,	// (0x00032810) form_field_slider_wide_pane_t1_ParamLimits

0x279e,	// (0x00032810) form_field_slider_wide_pane_t1

0x6965,	// (0x000369d7) form_field_slider_wide_pane_t2_ParamLimits

0x6965,	// (0x000369d7) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0003f6ef) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0003f6ef) form_field_slider_wide_pane_t

0x2398,	// (0x0003240a) input_focus_pane_cp10_ParamLimits

0x2398,	// (0x0003240a) input_focus_pane_cp10

0x6977,	// (0x000369e9) slider_cont_pane_cp1_ParamLimits

0x6977,	// (0x000369e9) slider_cont_pane_cp1

0x698b,	// (0x000369fd) slider_form_pane_cp

0x27b0,	// (0x00032822) input_focus_pane_g1

0x27b8,	// (0x0003282a) input_focus_pane_g2

0x27c0,	// (0x00032832) input_focus_pane_g3

0x27c8,	// (0x0003283a) input_focus_pane_g4

0x27d0,	// (0x00032842) input_focus_pane_g5

0x27d8,	// (0x0003284a) input_focus_pane_g6

0x27e0,	// (0x00032852) input_focus_pane_g7

0x27e8,	// (0x0003285a) input_focus_pane_g8

0x27f0,	// (0x00032862) input_focus_pane_g9

0x2340,	// (0x000323b2) input_focus_pane_g10

0x0009,

0xf682,	// (0x0003f6f4) input_focus_pane_g

0xa32f,	// (0x0003a3a1) wait_border_pane_g3_copy1

0x6993,	// (0x00036a05) data_form_pane_t1

0x2340,	// (0x000323b2) wait_anim_pane_g1_copy1

0x808f,	// (0x00038101) data_form_wide_pane_t1

0x69ae,	// (0x00036a20) list_form_graphic_pane_cp_ParamLimits

0x69ae,	// (0x00036a20) list_form_graphic_pane_cp

0xb21e,	// (0x0003b290) slider_form_pane_g1

0xb227,	// (0x0003b299) slider_form_pane_g2

0x0006,

0xf980,	// (0x0003f9f2) slider_form_pane_g

0x69c2,	// (0x00036a34) list_form_graphic_pane_ParamLimits

0x69c2,	// (0x00036a34) list_form_graphic_pane

0x69d9,	// (0x00036a4b) list_form_graphic_pane_g1

0x69e1,	// (0x00036a53) list_form_graphic_pane_t1_ParamLimits

0x69e1,	// (0x00036a53) list_form_graphic_pane_t1

0x23a6,	// (0x00032418) list_highlight_pane_cp5_ParamLimits

0x23a6,	// (0x00032418) list_highlight_pane_cp5

0x4761,	// (0x000347d3) find_pane_g1

0x27f8,	// (0x0003286a) input_find_pane

0x69f6,	// (0x00036a68) input_find_pane_g1_ParamLimits

0x69f6,	// (0x00036a68) input_find_pane_g1

0x6a02,	// (0x00036a74) input_find_pane_t1_ParamLimits

0x6a02,	// (0x00036a74) input_find_pane_t1

0x6a17,	// (0x00036a89) input_find_pane_t2_ParamLimits

0x6a17,	// (0x00036a89) input_find_pane_t2

0x0001,

0xf697,	// (0x0003f709) input_find_pane_t_ParamLimits

0xf697,	// (0x0003f709) input_find_pane_t

0x2801,	// (0x00032873) input_focus_pane_cp5_ParamLimits

0x2801,	// (0x00032873) input_focus_pane_cp5

0x280f,	// (0x00032881) bg_popup_window_pane_cp2_ParamLimits

0x280f,	// (0x00032881) bg_popup_window_pane_cp2

0x281c,	// (0x0003288e) listscroll_menu_pane_ParamLimits

0x281c,	// (0x0003288e) listscroll_menu_pane

0x6a38,	// (0x00036aaa) popup_submenu_window_ParamLimits

0x6a38,	// (0x00036aaa) popup_submenu_window

0x2828,	// (0x0003289a) find_popup_pane_g1

0x6a60,	// (0x00036ad2) input_popup_find_pane_cp

0x2801,	// (0x00032873) input_focus_pane_cp4_ParamLimits

0x2801,	// (0x00032873) input_focus_pane_cp4

0x2830,	// (0x000328a2) input_popup_find_pane_t1_ParamLimits

0x2830,	// (0x000328a2) input_popup_find_pane_t1

0x234a,	// (0x000323bc) bg_popup_sub_pane_cp

0x285e,	// (0x000328d0) listscroll_popup_sub_pane

0x2866,	// (0x000328d8) list_submenu_pane_ParamLimits

0x2866,	// (0x000328d8) list_submenu_pane

0x2877,	// (0x000328e9) scroll_pane_cp4

0x6a78,	// (0x00036aea) list_single_popup_submenu_pane_ParamLimits

0x6a78,	// (0x00036aea) list_single_popup_submenu_pane

0x2d89,	// (0x00032dfb) list_single_popup_submenu_pane_g1

0x6a8c,	// (0x00036afe) list_single_popup_submenu_pane_t1_ParamLimits

0x6a8c,	// (0x00036afe) list_single_popup_submenu_pane_t1

0x23a6,	// (0x00032418) bg_active_tab_pane_cp1_ParamLimits

0x23a6,	// (0x00032418) bg_active_tab_pane_cp1

0x287f,	// (0x000328f1) tabs_2_active_pane_g1

0x6aa1,	// (0x00036b13) tabs_2_active_pane_t1

0x23a6,	// (0x00032418) bg_passive_tab_pane_cp1_ParamLimits

0x23a6,	// (0x00032418) bg_passive_tab_pane_cp1

0x287f,	// (0x000328f1) tabs_2_passive_pane_g1

0x6aa1,	// (0x00036b13) tabs_2_passive_pane_t1

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp4

0x6ab3,	// (0x00036b25) tabs_2_long_active_pane_t1

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp4

0x7d31,	// (0x00037da3) list_single_midp_graphic_pane_g4_ParamLimits

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp5

0x6ad2,	// (0x00036b44) tabs_3_long_active_pane_t1

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp5

0x7d31,	// (0x00037da3) list_single_midp_graphic_pane_g4

0x23a6,	// (0x00032418) bg_popup_window_pane_cp13_ParamLimits

0x23a6,	// (0x00032418) bg_popup_window_pane_cp13

0x2887,	// (0x000328f9) listscroll_popup_fast_pane_ParamLimits

0x2887,	// (0x000328f9) listscroll_popup_fast_pane

0x2893,	// (0x00032905) grid_popup_fast_pane_ParamLimits

0x2893,	// (0x00032905) grid_popup_fast_pane

0x28a5,	// (0x00032917) scroll_pane_cp9_ParamLimits

0x28a5,	// (0x00032917) scroll_pane_cp9

0xcb22,	// (0x0003cb94) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb22,	// (0x0003cb94) list_single_graphic_hl_pane_t1_cp2

0x28b8,	// (0x0003292a) input_focus_pane_cp20_ParamLimits

0x28b8,	// (0x0003292a) input_focus_pane_cp20

0x28c6,	// (0x00032938) query_popup_data_pane_t1_ParamLimits

0x28c6,	// (0x00032938) query_popup_data_pane_t1

0x28d9,	// (0x0003294b) query_popup_data_pane_t2_ParamLimits

0x28d9,	// (0x0003294b) query_popup_data_pane_t2

0x291f,	// (0x00032991) query_popup_data_pane_t3_ParamLimits

0x291f,	// (0x00032991) query_popup_data_pane_t3

0x2960,	// (0x000329d2) query_popup_data_pane_t4_ParamLimits

0x2960,	// (0x000329d2) query_popup_data_pane_t4

0x299c,	// (0x00032a0e) query_popup_data_pane_t5_ParamLimits

0x299c,	// (0x00032a0e) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0003f70e) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0003f70e) query_popup_data_pane_t

0x27b0,	// (0x00032822) bg_set_opt_pane_g1

0x27b8,	// (0x0003282a) bg_set_opt_pane_g2

0x27c0,	// (0x00032832) bg_set_opt_pane_g3

0x27c8,	// (0x0003283a) bg_set_opt_pane_g4

0x27d0,	// (0x00032842) bg_set_opt_pane_g5

0x27d8,	// (0x0003284a) bg_set_opt_pane_g6

0x27e0,	// (0x00032852) bg_set_opt_pane_g7

0x27e8,	// (0x0003285a) bg_set_opt_pane_g8

0x27f0,	// (0x00032862) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0003f719) bg_set_opt_pane_g

0x712f,	// (0x000371a1) control_top_pane_stacon_ParamLimits

0x712f,	// (0x000371a1) control_top_pane_stacon

0x7182,	// (0x000371f4) signal_pane_stacon_ParamLimits

0x7182,	// (0x000371f4) signal_pane_stacon

0x71a7,	// (0x00037219) stacon_top_pane_g1_ParamLimits

0x71a7,	// (0x00037219) stacon_top_pane_g1

0x71c9,	// (0x0003723b) title_pane_stacon_ParamLimits

0x71c9,	// (0x0003723b) title_pane_stacon

0x71f3,	// (0x00037265) uni_indicator_pane_stacon_ParamLimits

0x71f3,	// (0x00037265) uni_indicator_pane_stacon

0x7208,	// (0x0003727a) battery_pane_stacon_ParamLimits

0x7208,	// (0x0003727a) battery_pane_stacon

0x724c,	// (0x000372be) control_bottom_pane_stacon_ParamLimits

0x724c,	// (0x000372be) control_bottom_pane_stacon

0x726f,	// (0x000372e1) navi_pane_stacon_ParamLimits

0x726f,	// (0x000372e1) navi_pane_stacon

0x7292,	// (0x00037304) stacon_bottom_pane_g1_ParamLimits

0x7292,	// (0x00037304) stacon_bottom_pane_g1

0x6afe,	// (0x00036b70) aid_levels_signal_lsc_ParamLimits

0x6afe,	// (0x00036b70) aid_levels_signal_lsc

0x6b14,	// (0x00036b86) signal_pane_stacon_g1_ParamLimits

0x6b14,	// (0x00036b86) signal_pane_stacon_g1

0x6b28,	// (0x00036b9a) signal_pane_stacon_g2_ParamLimits

0x6b28,	// (0x00036b9a) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0003f72c) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0003f72c) signal_pane_stacon_g

0x6b5d,	// (0x00036bcf) title_pane_stacon_t1_ParamLimits

0x6b5d,	// (0x00036bcf) title_pane_stacon_t1

0x29f4,	// (0x00032a66) uni_indicator_pane_stacon_g1

0x29fe,	// (0x00032a70) uni_indicator_pane_stacon_g2

0x29e0,	// (0x00032a52) uni_indicator_pane_stacon_g3

0x29ea,	// (0x00032a5c) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0003f738) uni_indicator_pane_stacon_g

0x6b82,	// (0x00036bf4) control_top_pane_stacon_g1

0x6b8a,	// (0x00036bfc) control_top_pane_stacon_t1_ParamLimits

0x6b8a,	// (0x00036bfc) control_top_pane_stacon_t1

0x6bc1,	// (0x00036c33) aid_levels_battery_lsc_ParamLimits

0x6bc1,	// (0x00036c33) aid_levels_battery_lsc

0x6bd8,	// (0x00036c4a) battery_pane_stacon_g1_ParamLimits

0x6bd8,	// (0x00036c4a) battery_pane_stacon_g1

0x6beb,	// (0x00036c5d) battery_pane_stacon_g2_ParamLimits

0x6beb,	// (0x00036c5d) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003f741) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003f741) battery_pane_stacon_g

0x6c29,	// (0x00036c9b) navi_icon_pane_stacon

0x6c3d,	// (0x00036caf) navi_navi_pane_stacon

0x6c29,	// (0x00036c9b) navi_text_pane_stacon

0x6b82,	// (0x00036bf4) control_bottom_pane_stacon_g1

0x6c51,	// (0x00036cc3) control_bottom_pane_stacon_t1_ParamLimits

0x6c51,	// (0x00036cc3) control_bottom_pane_stacon_t1

0x6c88,	// (0x00036cfa) grid_app_pane_ParamLimits

0x6c88,	// (0x00036cfa) grid_app_pane

0x6cac,	// (0x00036d1e) scroll_pane_cp15_ParamLimits

0x6cac,	// (0x00036d1e) scroll_pane_cp15

0x6cbf,	// (0x00036d31) cell_app_pane_ParamLimits

0x6cbf,	// (0x00036d31) cell_app_pane

0x6ce7,	// (0x00036d59) cell_app_pane_g1_ParamLimits

0x6ce7,	// (0x00036d59) cell_app_pane_g1

0x2a22,	// (0x00032a94) cell_app_pane_g2_ParamLimits

0x2a22,	// (0x00032a94) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0003f746) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0003f746) cell_app_pane_g

0x6d0b,	// (0x00036d7d) cell_app_pane_t1_ParamLimits

0x6d0b,	// (0x00036d7d) cell_app_pane_t1

0x2a2e,	// (0x00032aa0) grid_highlight_pane_ParamLimits

0x2a2e,	// (0x00032aa0) grid_highlight_pane

0x27b0,	// (0x00032822) cell_highlight_pane_g1

0x27b8,	// (0x0003282a) cell_highlight_pane_g2

0x27c0,	// (0x00032832) cell_highlight_pane_g3

0x27c8,	// (0x0003283a) cell_highlight_pane_g4

0x27d0,	// (0x00032842) cell_highlight_pane_g5

0x27d8,	// (0x0003284a) cell_highlight_pane_g6

0x27e0,	// (0x00032852) cell_highlight_pane_g7

0x27e8,	// (0x0003285a) cell_highlight_pane_g8

0x27f0,	// (0x00032862) cell_highlight_pane_g9

0x2340,	// (0x000323b2) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0003f6f4) cell_highlight_pane_g

0x2a3f,	// (0x00032ab1) bg_scroll_pane

0x6d35,	// (0x00036da7) scroll_handle_pane

0x2a86,	// (0x00032af8) scroll_bg_pane_g1

0x2a9b,	// (0x00032b0d) scroll_bg_pane_g2

0x2ab3,	// (0x00032b25) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0003f74b) scroll_bg_pane_g

0x6d5e,	// (0x00036dd0) scroll_handle_focus_pane_ParamLimits

0x6d5e,	// (0x00036dd0) scroll_handle_focus_pane

0x2a86,	// (0x00032af8) scroll_handle_pane_g1

0x2ac8,	// (0x00032b3a) scroll_handle_pane_g2

0x2ab3,	// (0x00032b25) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0003f752) scroll_handle_pane_g

0x2801,	// (0x00032873) bg_popup_sub_pane_cp21_ParamLimits

0x2801,	// (0x00032873) bg_popup_sub_pane_cp21

0x6d6b,	// (0x00036ddd) popup_fep_japan_predictive_window_t1_ParamLimits

0x6d6b,	// (0x00036ddd) popup_fep_japan_predictive_window_t1

0x6d85,	// (0x00036df7) popup_fep_japan_predictive_window_t2_ParamLimits

0x6d85,	// (0x00036df7) popup_fep_japan_predictive_window_t2

0x6db8,	// (0x00036e2a) popup_fep_japan_predictive_window_t3_ParamLimits

0x6db8,	// (0x00036e2a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0003f759) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0003f759) popup_fep_japan_predictive_window_t

0x234a,	// (0x000323bc) bg_popup_sub_pane_cp23

0x36c9,	// (0x0003373b) listscroll_japin_cand_pane

0x2adc,	// (0x00032b4e) popup_fep_japan_candidate_window_t1

0x2aea,	// (0x00032b5c) candidate_pane_ParamLimits

0x2aea,	// (0x00032b5c) candidate_pane

0x6def,	// (0x00036e61) scroll_pane_cp30

0x2afc,	// (0x00032b6e) list_single_popup_jap_candidate_pane_ParamLimits

0x2afc,	// (0x00032b6e) list_single_popup_jap_candidate_pane

0x234a,	// (0x000323bc) list_highlight_pane_cp30

0x2b11,	// (0x00032b83) list_single_popup_jap_candidate_pane_t1

0x2b20,	// (0x00032b92) level_1_signal

0x2b2d,	// (0x00032b9f) level_2_signal

0x2b3a,	// (0x00032bac) level_3_signal

0x2b47,	// (0x00032bb9) level_4_signal

0x2b54,	// (0x00032bc6) level_5_signal

0x2b61,	// (0x00032bd3) level_6_signal

0x2b6e,	// (0x00032be0) level_7_signal

0x2b20,	// (0x00032b92) level_1_battery

0x2b2d,	// (0x00032b9f) level_2_battery

0x2b3a,	// (0x00032bac) level_3_battery

0x2b47,	// (0x00032bb9) level_4_battery

0x2b54,	// (0x00032bc6) level_5_battery

0x2b61,	// (0x00032bd3) level_6_battery

0x2b6e,	// (0x00032be0) level_7_battery

0x2b93,	// (0x00032c05) list_menu_pane_ParamLimits

0x2b93,	// (0x00032c05) list_menu_pane

0x2ba9,	// (0x00032c1b) scroll_pane_cp25_ParamLimits

0x2ba9,	// (0x00032c1b) scroll_pane_cp25

0x2bc2,	// (0x00032c34) list_double2_graphic_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double2_graphic_pane_cp2

0x2bc2,	// (0x00032c34) list_double2_large_graphic_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double2_large_graphic_pane_cp2

0x2bc2,	// (0x00032c34) list_double2_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double2_pane_cp2

0x2bc2,	// (0x00032c34) list_double_graphic_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double_graphic_pane_cp2

0x2bc2,	// (0x00032c34) list_double_large_graphic_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double_large_graphic_pane_cp2

0x2bc2,	// (0x00032c34) list_double_number_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double_number_pane_cp2

0x2bc2,	// (0x00032c34) list_double_pane_cp2_ParamLimits

0x2bc2,	// (0x00032c34) list_double_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_2graphic_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_2graphic_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_graphic_heading_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_graphic_heading_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_graphic_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_graphic_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_heading_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_heading_pane_cp2

0x2bd2,	// (0x00032c44) list_single_large_graphic_pane_cp2_ParamLimits

0x2bd2,	// (0x00032c44) list_single_large_graphic_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_number_heading_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_number_heading_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_number_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_number_pane_cp2

0x6e2a,	// (0x00036e9c) list_single_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_pane_cp2

0x2bec,	// (0x00032c5e) bg_popup_sub_pane_cp22

0x6f02,	// (0x00036f74) popup_side_volume_key_window_g1

0x6f26,	// (0x00036f98) popup_side_volume_key_window_t1

0x6f42,	// (0x00036fb4) volume_small_pane_cp1

0x2398,	// (0x0003240a) bg_popup_sub_pane_cp24_ParamLimits

0x2398,	// (0x0003240a) bg_popup_sub_pane_cp24

0x2c02,	// (0x00032c74) fep_china_uni_candidate_pane_ParamLimits

0x2c02,	// (0x00032c74) fep_china_uni_candidate_pane

0x2c16,	// (0x00032c88) fep_china_uni_entry_pane

0x2c26,	// (0x00032c98) popup_fep_china_uni_window_g1

0x6f4a,	// (0x00036fbc) fep_china_uni_entry_pane_g1

0x6f52,	// (0x00036fc4) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0003f78a) fep_china_uni_entry_pane_g

0x6f5a,	// (0x00036fcc) fep_entry_item_pane

0x6f64,	// (0x00036fd6) fep_candidate_item_pane

0x6f6c,	// (0x00036fde) fep_china_uni_candidate_pane_g1

0x6f74,	// (0x00036fe6) fep_china_uni_candidate_pane_g2

0x6f7c,	// (0x00036fee) fep_china_uni_candidate_pane_g3

0x6f84,	// (0x00036ff6) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0003f78f) fep_china_uni_candidate_pane_g

0x2340,	// (0x000323b2) fep_entry_item_pane_g1

0x6f8c,	// (0x00036ffe) fep_entry_item_pane_t1_ParamLimits

0x6f8c,	// (0x00036ffe) fep_entry_item_pane_t1

0x6fa2,	// (0x00037014) fep_candidate_item_pane_t1_ParamLimits

0x6fa2,	// (0x00037014) fep_candidate_item_pane_t1

0x6fb7,	// (0x00037029) fep_candidate_item_pane_t2_ParamLimits

0x6fb7,	// (0x00037029) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0003f798) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0003f798) fep_candidate_item_pane_t

0x23a6,	// (0x00032418) list_highlight_pane_cp31_ParamLimits

0x23a6,	// (0x00032418) list_highlight_pane_cp31

0x6fc9,	// (0x0003703b) level_1_signal_lsc

0x6fd2,	// (0x00037044) level_2_signal_lsc

0x6fdb,	// (0x0003704d) level_3_signal_lsc

0x6fe4,	// (0x00037056) level_4_signal_lsc

0x6fed,	// (0x0003705f) level_5_signal_lsc

0x6ff6,	// (0x00037068) level_6_signal_lsc

0x6fff,	// (0x00037071) level_7_signal_lsc

0x6fff,	// (0x00037071) level_1_battery_lsc

0x7008,	// (0x0003707a) level_2_battery_lsc

0x7011,	// (0x00037083) level_3_battery_lsc

0x701a,	// (0x0003708c) level_4_battery_lsc

0x7023,	// (0x00037095) level_5_battery_lsc

0x702c,	// (0x0003709e) level_6_battery_lsc

0x6fc9,	// (0x0003703b) level_7_battery_lsc

0x7035,	// (0x000370a7) scroll_handle_focus_pane_g1

0x703e,	// (0x000370b0) scroll_handle_focus_pane_g2

0x7047,	// (0x000370b9) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0003f79d) scroll_handle_focus_pane_g

0x7050,	// (0x000370c2) list_single_2graphic_pane_g1_ParamLimits

0x7050,	// (0x000370c2) list_single_2graphic_pane_g1

0x6469,	// (0x000364db) list_single_2graphic_pane_g2_ParamLimits

0x6469,	// (0x000364db) list_single_2graphic_pane_g2

0x4669,	// (0x000346db) list_single_2graphic_pane_g3_ParamLimits

0x4669,	// (0x000346db) list_single_2graphic_pane_g3

0x705c,	// (0x000370ce) list_single_2graphic_pane_g4_ParamLimits

0x705c,	// (0x000370ce) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0003f7a4) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0003f7a4) list_single_2graphic_pane_g

0x7068,	// (0x000370da) list_single_2graphic_pane_t1_ParamLimits

0x7068,	// (0x000370da) list_single_2graphic_pane_t1

0x7096,	// (0x00037108) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7096,	// (0x00037108) list_double2_graphic_large_graphic_pane_g1

0x6656,	// (0x000366c8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6656,	// (0x000366c8) list_double2_graphic_large_graphic_pane_g2

0x6667,	// (0x000366d9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6667,	// (0x000366d9) list_double2_graphic_large_graphic_pane_g3

0x70a6,	// (0x00037118) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x70a6,	// (0x00037118) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0003f7ad) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0003f7ad) list_double2_graphic_large_graphic_pane_g

0x70b2,	// (0x00037124) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x70b2,	// (0x00037124) list_double2_graphic_large_graphic_pane_t1

0x70c8,	// (0x0003713a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x70c8,	// (0x0003713a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0003f7b6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0003f7b6) list_double2_graphic_large_graphic_pane_t

0x7359,	// (0x000373cb) popup_fast_swap_window_ParamLimits

0x7359,	// (0x000373cb) popup_fast_swap_window

0x7375,	// (0x000373e7) popup_side_volume_key_window

0x738f,	// (0x00037401) stacon_top_pane

0x7399,	// (0x0003740b) status_pane_ParamLimits

0x7399,	// (0x0003740b) status_pane

0x73a7,	// (0x00037419) status_small_pane

0x234a,	// (0x000323bc) control_pane

0x234a,	// (0x000323bc) stacon_bottom_pane

0x273b,	// (0x000327ad) scroll_pane_cp121

0x2732,	// (0x000327a4) set_content_pane

0x70da,	// (0x0003714c) bg_active_tab_pane_g1_cp1

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp1

0x70ec,	// (0x0003715e) bg_active_tab_pane_g3_cp1

0x70da,	// (0x0003714c) bg_passive_tab_pane_g1_cp1

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp1

0x70ec,	// (0x0003715e) bg_passive_tab_pane_g3_cp1

0x70f5,	// (0x00037167) bg_active_tab_pane_g1_cp2

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp2

0x70fe,	// (0x00037170) bg_active_tab_pane_g3_cp2

0x70f5,	// (0x00037167) bg_passive_tab_pane_g1_cp2

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp2

0x70fe,	// (0x00037170) bg_passive_tab_pane_g3_cp2

0x7107,	// (0x00037179) bg_active_tab_pane_g1_cp3

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp3

0x7110,	// (0x00037182) bg_active_tab_pane_g3_cp3

0x7107,	// (0x00037179) bg_passive_tab_pane_g1_cp3

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp3

0x7110,	// (0x00037182) bg_passive_tab_pane_g3_cp3

0x7119,	// (0x0003718b) bg_active_tab_pane_g1_cp4

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp4

0x7124,	// (0x00037196) bg_active_tab_pane_g3_cp4

0x7119,	// (0x0003718b) bg_passive_tab_pane_g1_cp4

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp4

0x7124,	// (0x00037196) bg_passive_tab_pane_g3_cp4

0x72ae,	// (0x00037320) bg_active_tab_pane_g1_cp5

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp5

0x72b7,	// (0x00037329) bg_active_tab_pane_g3_cp5

0x72ae,	// (0x00037320) bg_passive_tab_pane_g1_cp5

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp5

0x72b7,	// (0x00037329) bg_passive_tab_pane_g3_cp5

0x72c0,	// (0x00037332) list_set_graphic_pane_ParamLimits

0x72c0,	// (0x00037332) list_set_graphic_pane

0x234a,	// (0x000323bc) bg_set_opt_pane_cp4

0x72de,	// (0x00037350) list_set_graphic_pane_g1_ParamLimits

0x72de,	// (0x00037350) list_set_graphic_pane_g1

0x72ea,	// (0x0003735c) list_set_graphic_pane_g2_ParamLimits

0x72ea,	// (0x0003735c) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0003f7bb) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0003f7bb) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0003fb4e) volume_small_pane_cp_g

0x730c,	// (0x0003737e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x730c,	// (0x0003737e) list_double2_large_graphic_pane_g1_cp2

0x7318,	// (0x0003738a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7318,	// (0x0003738a) list_double2_large_graphic_pane_g2_cp2

0x7329,	// (0x0003739b) list_double2_large_graphic_pane_g3_cp2

0x7331,	// (0x000373a3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7331,	// (0x000373a3) list_double2_large_graphic_pane_t1_cp2

0x7347,	// (0x000373b9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7347,	// (0x000373b9) list_double2_large_graphic_pane_t2_cp2

0xade0,	// (0x0003ae52) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xade0,	// (0x0003ae52) list_double_large_graphic_pane_g1_cp2

0xadf1,	// (0x0003ae63) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadf1,	// (0x0003ae63) list_double_large_graphic_pane_g2_cp2

0x74b4,	// (0x00037526) list_double_large_graphic_pane_g3_cp2

0xae02,	// (0x0003ae74) list_double_large_graphic_pane_g4_cp

0xae0a,	// (0x0003ae7c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae0a,	// (0x0003ae7c) list_double_large_graphic_pane_t1_cp2

0xae21,	// (0x0003ae93) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae21,	// (0x0003ae93) list_double_large_graphic_pane_t2_cp2

0x73b2,	// (0x00037424) list_double2_graphic_pane_g1_cp2_ParamLimits

0x73b2,	// (0x00037424) list_double2_graphic_pane_g1_cp2

0x73c0,	// (0x00037432) list_double2_graphic_pane_g2_cp2_ParamLimits

0x73c0,	// (0x00037432) list_double2_graphic_pane_g2_cp2

0x73d1,	// (0x00037443) list_double2_graphic_pane_g3_cp2

0x73db,	// (0x0003744d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x73db,	// (0x0003744d) list_double2_graphic_pane_t1_cp2

0x73f1,	// (0x00037463) list_double2_graphic_pane_t2_cp2_ParamLimits

0x73f1,	// (0x00037463) list_double2_graphic_pane_t2_cp2

0x2c42,	// (0x00032cb4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2c42,	// (0x00032cb4) list_single_number_heading_pane_g1_cp2

0x7403,	// (0x00037475) list_single_number_heading_pane_g2_cp2

0x740b,	// (0x0003747d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x740b,	// (0x0003747d) list_single_number_heading_pane_t1_cp2

0x7421,	// (0x00037493) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7421,	// (0x00037493) list_single_number_heading_pane_t2_cp2

0x7433,	// (0x000374a5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7433,	// (0x000374a5) list_single_number_heading_pane_t3_cp2

0x2c42,	// (0x00032cb4) list_single_heading_pane_g1_cp2_ParamLimits

0x2c42,	// (0x00032cb4) list_single_heading_pane_g1_cp2

0x7403,	// (0x00037475) list_single_heading_pane_g2_cp2

0x740b,	// (0x0003747d) list_single_heading_pane_t1_cp2_ParamLimits

0x740b,	// (0x0003747d) list_single_heading_pane_t1_cp2

0xabea,	// (0x0003ac5c) list_single_heading_pane_t2_cp2_ParamLimits

0xabea,	// (0x0003ac5c) list_single_heading_pane_t2_cp2

0xab32,	// (0x0003aba4) list_double_graphic_pane_g1_cp2_ParamLimits

0xab32,	// (0x0003aba4) list_double_graphic_pane_g1_cp2

0xab3e,	// (0x0003abb0) list_double_graphic_pane_g2_cp2_ParamLimits

0xab3e,	// (0x0003abb0) list_double_graphic_pane_g2_cp2

0xab4d,	// (0x0003abbf) list_double_graphic_pane_g3_cp2

0xab55,	// (0x0003abc7) list_double_graphic_pane_t1_cp2_ParamLimits

0xab55,	// (0x0003abc7) list_double_graphic_pane_t1_cp2

0xab6b,	// (0x0003abdd) list_double_graphic_pane_t2_cp2_ParamLimits

0xab6b,	// (0x0003abdd) list_double_graphic_pane_t2_cp2

0x74a8,	// (0x0003751a) list_double_number_pane_g1_cp2_ParamLimits

0x74a8,	// (0x0003751a) list_double_number_pane_g1_cp2

0x74b4,	// (0x00037526) list_double_number_pane_g2_cp2

0xaaf6,	// (0x0003ab68) list_double_number_pane_t1_cp2_ParamLimits

0xaaf6,	// (0x0003ab68) list_double_number_pane_t1_cp2

0xab0a,	// (0x0003ab7c) list_double_number_pane_t2_cp2_ParamLimits

0xab0a,	// (0x0003ab7c) list_double_number_pane_t2_cp2

0xab20,	// (0x0003ab92) list_double_number_pane_t3_cp2_ParamLimits

0xab20,	// (0x0003ab92) list_double_number_pane_t3_cp2

0xa9df,	// (0x0003aa51) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9df,	// (0x0003aa51) list_single_graphic_pane_g1_cp2

0x93fd,	// (0x0003946f) list_single_graphic_pane_g2_cp2_ParamLimits

0x93fd,	// (0x0003946f) list_single_graphic_pane_g2_cp2

0x9409,	// (0x0003947b) list_single_graphic_pane_g3_cp2

0xa9b5,	// (0x0003aa27) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9b5,	// (0x0003aa27) list_single_graphic_pane_t1_cp2

0x93fd,	// (0x0003946f) list_single_number_pane_g1_cp2_ParamLimits

0x93fd,	// (0x0003946f) list_single_number_pane_g1_cp2

0x9409,	// (0x0003947b) list_single_number_pane_g2_cp2

0xa9b5,	// (0x0003aa27) list_single_number_pane_t1_cp2_ParamLimits

0xa9b5,	// (0x0003aa27) list_single_number_pane_t1_cp2

0xa9cb,	// (0x0003aa3d) list_single_number_pane_t2_cp2_ParamLimits

0xa9cb,	// (0x0003aa3d) list_single_number_pane_t2_cp2

0x7318,	// (0x0003738a) list_double2_pane_g1_cp2_ParamLimits

0x7318,	// (0x0003738a) list_double2_pane_g1_cp2

0x7329,	// (0x0003739b) list_double2_pane_g2_cp2

0x7480,	// (0x000374f2) list_double2_pane_t1_cp2_ParamLimits

0x7480,	// (0x000374f2) list_double2_pane_t1_cp2

0x7496,	// (0x00037508) list_double2_pane_t2_cp2_ParamLimits

0x7496,	// (0x00037508) list_double2_pane_t2_cp2

0x74a8,	// (0x0003751a) list_double_pane_g1_cp2_ParamLimits

0x74a8,	// (0x0003751a) list_double_pane_g1_cp2

0x74b4,	// (0x00037526) list_double_pane_g2_cp2

0x74bc,	// (0x0003752e) list_double_pane_t1_cp2_ParamLimits

0x74bc,	// (0x0003752e) list_double_pane_t1_cp2

0x74d2,	// (0x00037544) list_double_pane_t2_cp2_ParamLimits

0x74d2,	// (0x00037544) list_double_pane_t2_cp2

0x74fc,	// (0x0003756e) list_single_pane_cp2_g3

0x93fd,	// (0x0003946f) list_single_pane_g1_cp2_ParamLimits

0x93fd,	// (0x0003946f) list_single_pane_g1_cp2

0x9409,	// (0x0003947b) list_single_pane_g2_cp2

0x9411,	// (0x00039483) list_single_pane_t1_cp2_ParamLimits

0x9411,	// (0x00039483) list_single_pane_t1_cp2

0x9429,	// (0x0003949b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9429,	// (0x0003949b) list_single_large_graphic_pane_g1_cp2

0x9435,	// (0x000394a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9435,	// (0x000394a7) list_single_large_graphic_pane_g2_cp2

0x9441,	// (0x000394b3) list_single_large_graphic_pane_g3_cp2

0x9449,	// (0x000394bb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9449,	// (0x000394bb) list_single_large_graphic_pane_g4_cp1

0x9463,	// (0x000394d5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9463,	// (0x000394d5) list_single_large_graphic_pane_t1_cp2

0xa981,	// (0x0003a9f3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa981,	// (0x0003a9f3) list_single_graphic_heading_pane_g1_cp2

0xa94e,	// (0x0003a9c0) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa94e,	// (0x0003a9c0) list_single_graphic_heading_pane_g4_cp2

0x9409,	// (0x0003947b) list_single_graphic_heading_pane_g5_cp2

0xa98d,	// (0x0003a9ff) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa98d,	// (0x0003a9ff) list_single_graphic_heading_pane_t1_cp2

0xa9a3,	// (0x0003aa15) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9a3,	// (0x0003aa15) list_single_graphic_heading_pane_t2_cp2

0xa942,	// (0x0003a9b4) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa942,	// (0x0003a9b4) list_single_2graphic_pane_g1_cp2

0xa94e,	// (0x0003a9c0) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa94e,	// (0x0003a9c0) list_single_2graphic_pane_g2_cp2

0x9409,	// (0x0003947b) list_single_2graphic_pane_g3_cp2

0xa95f,	// (0x0003a9d1) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa95f,	// (0x0003a9d1) list_single_2graphic_pane_g4_cp2

0xa96b,	// (0x0003a9dd) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa96b,	// (0x0003a9dd) list_single_2graphic_pane_t1_cp2

0x2340,	// (0x000323b2) list_highlight_pane_g10_cp1

0xa52a,	// (0x0003a59c) list_highlight_pane_g1_cp1

0xa532,	// (0x0003a5a4) list_highlight_pane_g2_cp1

0xa53a,	// (0x0003a5ac) list_highlight_pane_g3_cp1

0xa542,	// (0x0003a5b4) list_highlight_pane_g4_cp1

0xa54a,	// (0x0003a5bc) list_highlight_pane_g5_cp1

0xa552,	// (0x0003a5c4) list_highlight_pane_g6_cp1

0xa55a,	// (0x0003a5cc) list_highlight_pane_g7_cp1

0xa562,	// (0x0003a5d4) list_highlight_pane_g8_cp1

0xa56a,	// (0x0003a5dc) list_highlight_pane_g9_cp1

0xa452,	// (0x0003a4c4) form_field_slider_pane_t3

0xa460,	// (0x0003a4d2) form_field_slider_pane_t4

0xa46e,	// (0x0003a4e0) slider_form_pane_ParamLimits

0xa46e,	// (0x0003a4e0) slider_form_pane

0x234a,	// (0x000323bc) control_abbreviations

0x234a,	// (0x000323bc) control_conventions

0x234a,	// (0x000323bc) control_definitions

0x234a,	// (0x000323bc) format_table_attribute

0xac34,	// (0x0003aca6) bg_popup_preview_window_pane_g9

0x234a,	// (0x000323bc) format_table_data2

0x234a,	// (0x000323bc) format_table_data3

0x234a,	// (0x000323bc) format_table_data_example

0x0008,

0x234a,	// (0x000323bc) intro_purpose

0xf8e0,	// (0x0003f952) bg_popup_preview_window_pane_g

0x234a,	// (0x000323bc) texts_category

0x234a,	// (0x000323bc) texts_graphics

0x9479,	// (0x000394eb) text_digital

0x9488,	// (0x000394fa) text_primary

0x9497,	// (0x00039509) text_primary_small

0x94a6,	// (0x00039518) text_secondary

0x94b5,	// (0x00039527) text_title

0xb361,	// (0x0003b3d3) bg_passive_tab_pane_g1_cp3_srt

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp3_srt

0xb36a,	// (0x0003b3dc) bg_passive_tab_pane_g3_cp3_srt

0x23a6,	// (0x00032418) bg_active_tab_pane_cp3_srt_ParamLimits

0x23a6,	// (0x00032418) bg_active_tab_pane_cp3_srt

0xb373,	// (0x0003b3e5) tabs_4_active_pane_srt_g1

0xb37b,	// (0x0003b3ed) tabs_4_active_pane_srt_t1_ParamLimits

0xb37b,	// (0x0003b3ed) tabs_4_active_pane_srt_t1

0xb361,	// (0x0003b3d3) bg_active_tab_pane_g1_cp3_copy1

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp3_copy1

0xb36a,	// (0x0003b3dc) bg_active_tab_pane_g3_cp3_copy1

0x23a6,	// (0x00032418) tabs_2_long_active_pane_srt_ParamLimits

0x23a6,	// (0x00032418) tabs_2_long_active_pane_srt

0x23a6,	// (0x00032418) tabs_2_long_passive_pane_srt_ParamLimits

0x23a6,	// (0x00032418) tabs_2_long_passive_pane_srt

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp4_srt

0xb055,	// (0x0003b0c7) bg_passive_tab_pane_g1_cp4_srt

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp4_srt

0xb05e,	// (0x0003b0d0) bg_passive_tab_pane_g3_cp4_srt

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp4_srt_ParamLimits

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp4_srt

0xb067,	// (0x0003b0d9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb067,	// (0x0003b0d9) tabs_2_long_active_pane_srt_t1

0xb055,	// (0x0003b0c7) bg_active_tab_pane_g1_cp4_srt

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp4_srt

0xb05e,	// (0x0003b0d0) bg_active_tab_pane_g3_cp4_srt

0x2398,	// (0x0003240a) tabs_3_long_active_pane_srt_ParamLimits

0x2398,	// (0x0003240a) tabs_3_long_active_pane_srt

0x2398,	// (0x0003240a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2398,	// (0x0003240a) tabs_3_long_passive_pane_cp_srt

0x2398,	// (0x0003240a) tabs_3_long_passive_pane_srt_ParamLimits

0x2398,	// (0x0003240a) tabs_3_long_passive_pane_srt

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp5_srt

0x72ae,	// (0x00037320) bg_passive_tab_pane_g1_cp5_srt

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp5_srt

0x72b7,	// (0x00037329) bg_passive_tab_pane_g3_cp5_srt

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp5_srt_ParamLimits

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp5_srt

0xb043,	// (0x0003b0b5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb043,	// (0x0003b0b5) tabs_3_long_active_pane_srt_t1

0x72ae,	// (0x00037320) bg_active_tab_pane_g1_cp5_srt

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp5_srt

0x72b7,	// (0x00037329) bg_active_tab_pane_g3_cp5_srt

0xb035,	// (0x0003b0a7) navi_text_pane_srt_t1

0xb02d,	// (0x0003b09f) navi_icon_pane_srt_g1

0x9686,	// (0x000396f8) midp_editing_number_pane_srt

0x94c4,	// (0x00039536) midp_ticker_pane_srt

0x968e,	// (0x00039700) midp_ticker_pane_srt_g1

0x9696,	// (0x00039708) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0003f7da) midp_ticker_pane_srt_g

0x969e,	// (0x00039710) midp_ticker_pane_srt_t1

0xb01e,	// (0x0003b090) midp_editing_number_pane_t1_copy1

0x94cc,	// (0x0003953e) listscroll_midp_pane

0x94cc,	// (0x0003953e) midp_form_pane

0x953e,	// (0x000395b0) midp_info_popup_window_ParamLimits

0x953e,	// (0x000395b0) midp_info_popup_window

0x2801,	// (0x00032873) bg_popup_sub_pane_cp50_ParamLimits

0x2801,	// (0x00032873) bg_popup_sub_pane_cp50

0xa172,	// (0x0003a1e4) listscroll_midp_info_pane_ParamLimits

0xa172,	// (0x0003a1e4) listscroll_midp_info_pane

0xa152,	// (0x0003a1c4) listscroll_form_midp_pane_ParamLimits

0xa152,	// (0x0003a1c4) listscroll_form_midp_pane

0xa15e,	// (0x0003a1d0) scroll_bar_cp050

0xa132,	// (0x0003a1a4) list_midp_pane

0xbd97,	// (0x0003be09) signal_pane_g2_cp

0xa06c,	// (0x0003a0de) listscroll_midp_info_pane_t1_ParamLimits

0xa06c,	// (0x0003a0de) listscroll_midp_info_pane_t1

0xa084,	// (0x0003a0f6) listscroll_midp_info_pane_t2_ParamLimits

0xa084,	// (0x0003a0f6) listscroll_midp_info_pane_t2

0xa0c2,	// (0x0003a134) listscroll_midp_info_pane_t3_ParamLimits

0xa0c2,	// (0x0003a134) listscroll_midp_info_pane_t3

0xa0fc,	// (0x0003a16e) listscroll_midp_info_pane_t4_ParamLimits

0xa0fc,	// (0x0003a16e) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0003f88d) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0003f88d) listscroll_midp_info_pane_t

0x2877,	// (0x000328e9) scroll_pane_cp21

0xa00c,	// (0x0003a07e) form_midp_field_choice_group_pane

0xa015,	// (0x0003a087) form_midp_field_text_pane

0xa052,	// (0x0003a0c4) form_midp_field_time_pane

0xa05a,	// (0x0003a0cc) form_midp_gauge_slider_pane

0xa063,	// (0x0003a0d5) form_midp_gauge_wait_pane

0x234a,	// (0x000323bc) form_midp_image_pane

0x7e18,	// (0x00037e8a) list_single_midp_pane_ParamLimits

0x7e18,	// (0x00037e8a) list_single_midp_pane

0x9fc1,	// (0x0003a033) form_midp_field_text_pane_t1

0x9d8b,	// (0x00039dfd) input_focus_pane_cp050

0x9ffb,	// (0x0003a06d) list_midp_form_text_pane

0x9f90,	// (0x0003a002) form_midp_field_choice_group_pane_t1

0x9f9e,	// (0x0003a010) input_focus_pane_cp051

0x9fb2,	// (0x0003a024) list_midp_choice_pane

0x234a,	// (0x000323bc) status_idle_pane

0x9f74,	// (0x00039fe6) form_midp_field_time_pane_t1

0x2340,	// (0x000323b2) wait_anim_pane_g2_copy1

0x9f82,	// (0x00039ff4) form_midp_field_time_pane_t2

0x0001,

0x95ee,	// (0x00039660) aid_navinavi_width_2_pane

0xf816,	// (0x0003f888) form_midp_field_time_pane_t

0x234a,	// (0x000323bc) input_focus_pane_cp052

0x234a,	// (0x000323bc) bg_input_focus_pane_cp040

0x9f34,	// (0x00039fa6) form_midp_gauge_slider_pane_t1

0x9f42,	// (0x00039fb4) form_midp_gauge_slider_pane_t2

0x9f50,	// (0x00039fc2) form_midp_gauge_slider_pane_t3

0x9f5e,	// (0x00039fd0) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0003f87f) form_midp_gauge_slider_pane_t

0x9f6c,	// (0x00039fde) form_midp_slider_pane

0x23a6,	// (0x00032418) bg_input_focus_pane_cp041_ParamLimits

0x23a6,	// (0x00032418) bg_input_focus_pane_cp041

0x9f01,	// (0x00039f73) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f01,	// (0x00039f73) form_midp_gauge_wait_pane_t1

0x9f13,	// (0x00039f85) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f13,	// (0x00039f85) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0003f87a) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0003f87a) form_midp_gauge_wait_pane_t

0x9f25,	// (0x00039f97) form_midp_wait_pane_ParamLimits

0x9f25,	// (0x00039f97) form_midp_wait_pane

0x9ecb,	// (0x00039f3d) form_midp_image_pane_g1

0x9ed4,	// (0x00039f46) form_midp_image_pane_t1

0x9ee3,	// (0x00039f55) form_midp_image_pane_t2

0x9ef2,	// (0x00039f64) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0003f873) form_midp_image_pane_t

0x9ec2,	// (0x00039f34) list_single_midp_pane_g1

0x4894,	// (0x00034906) list_single_midp_pane_t1

0x9e99,	// (0x00039f0b) list_midp_form_item_pane_ParamLimits

0x9e99,	// (0x00039f0b) list_midp_form_item_pane

0x9596,	// (0x00039608) list_midp_form_item_pane_t1

0x95a5,	// (0x00039617) midp_ticker_pane_g1

0x95b1,	// (0x00039623) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0003f7c0) midp_ticker_pane_g

0x95bd,	// (0x0003962f) midp_ticker_pane_t1

0xb26b,	// (0x0003b2dd) midp_editing_number_pane_t1

0xb249,	// (0x0003b2bb) midp_editing_number_pane

0xb258,	// (0x0003b2ca) midp_ticker_pane

0xb00e,	// (0x0003b080) ai_message_heading_pane

0x234a,	// (0x000323bc) bg_popup_window_pane_cp14

0xb016,	// (0x0003b088) listscroll_ai_message_pane

0xaf98,	// (0x0003b00a) ai_message_heading_pane_g1_ParamLimits

0xaf98,	// (0x0003b00a) ai_message_heading_pane_g1

0xafa4,	// (0x0003b016) ai_message_heading_pane_g2_ParamLimits

0xafa4,	// (0x0003b016) ai_message_heading_pane_g2

0xafb0,	// (0x0003b022) ai_message_heading_pane_g3_ParamLimits

0xafb0,	// (0x0003b022) ai_message_heading_pane_g3

0xafbc,	// (0x0003b02e) ai_message_heading_pane_g4_ParamLimits

0xafbc,	// (0x0003b02e) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0003f9b4) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0003f9b4) ai_message_heading_pane_g

0xafc8,	// (0x0003b03a) ai_message_heading_pane_t1_ParamLimits

0xafc8,	// (0x0003b03a) ai_message_heading_pane_t1

0xafe2,	// (0x0003b054) ai_message_heading_pane_t2_ParamLimits

0xafe2,	// (0x0003b054) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0003f9bd) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0003f9bd) ai_message_heading_pane_t

0xaff4,	// (0x0003b066) bg_popup_heading_pane_cp1_ParamLimits

0xaff4,	// (0x0003b066) bg_popup_heading_pane_cp1

0xaf86,	// (0x0003aff8) list_ai_message_pane_ParamLimits

0xaf86,	// (0x0003aff8) list_ai_message_pane

0x2877,	// (0x000328e9) scroll_pane_cp10

0xaf22,	// (0x0003af94) list_ai_message_pane_g1

0xaf2a,	// (0x0003af9c) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0003f991) list_ai_message_pane_g

0xaf32,	// (0x0003afa4) list_ai_message_pane_t1_ParamLimits

0xaf32,	// (0x0003afa4) list_ai_message_pane_t1

0xaf47,	// (0x0003afb9) list_ai_message_pane_t2_ParamLimits

0xaf47,	// (0x0003afb9) list_ai_message_pane_t2

0xaf5c,	// (0x0003afce) list_ai_message_pane_t3_ParamLimits

0xaf5c,	// (0x0003afce) list_ai_message_pane_t3

0xaf71,	// (0x0003afe3) list_ai_message_pane_t4_ParamLimits

0xaf71,	// (0x0003afe3) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0003f996) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0003f996) list_ai_message_pane_t

0xaf0d,	// (0x0003af7f) cell_ai_soft_ind_pane_ParamLimits

0xaf0d,	// (0x0003af7f) cell_ai_soft_ind_pane

0x95cf,	// (0x00039641) cell_ai_soft_ind_pane_g1_ParamLimits

0x95cf,	// (0x00039641) cell_ai_soft_ind_pane_g1

0x234a,	// (0x000323bc) grid_highlight_cp1

0x95dc,	// (0x0003964e) text_secondary_cp56_ParamLimits

0x95dc,	// (0x0003964e) text_secondary_cp56

0xaee2,	// (0x0003af54) example_general_pane_ParamLimits

0xaee2,	// (0x0003af54) example_general_pane

0xaeee,	// (0x0003af60) example_parent_pane_g1_ParamLimits

0xaeee,	// (0x0003af60) example_parent_pane_g1

0xaefa,	// (0x0003af6c) example_parent_pane_t1_ParamLimits

0xaefa,	// (0x0003af6c) example_parent_pane_t1

0x7aac,	// (0x00037b1e) popup_preview_text_window_ParamLimits

0x7aac,	// (0x00037b1e) popup_preview_text_window

0x7504,	// (0x00037576) list_single_pane_cp2_g4

0x2578,	// (0x000325ea) bg_popup_preview_window_pane_ParamLimits

0x2578,	// (0x000325ea) bg_popup_preview_window_pane

0xac3c,	// (0x0003acae) popup_preview_text_window_t1_ParamLimits

0xac3c,	// (0x0003acae) popup_preview_text_window_t1

0xac5a,	// (0x0003accc) popup_preview_text_window_t2_ParamLimits

0xac5a,	// (0x0003accc) popup_preview_text_window_t2

0xaca3,	// (0x0003ad15) popup_preview_text_window_t3_ParamLimits

0xaca3,	// (0x0003ad15) popup_preview_text_window_t3

0xace8,	// (0x0003ad5a) popup_preview_text_window_t4_ParamLimits

0xace8,	// (0x0003ad5a) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0003f965) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0003f965) popup_preview_text_window_t

0xad66,	// (0x0003add8) scroll_pane_cp11

0x9d17,	// (0x00039d89) bg_popup_preview_window_pane_g1

0xabfc,	// (0x0003ac6e) bg_popup_preview_window_pane_g2

0xac04,	// (0x0003ac76) bg_popup_preview_window_pane_g3

0xac0c,	// (0x0003ac7e) bg_popup_preview_window_pane_g4

0xac14,	// (0x0003ac86) bg_popup_preview_window_pane_g5

0xac1c,	// (0x0003ac8e) bg_popup_preview_window_pane_g6

0xac24,	// (0x0003ac96) bg_popup_preview_window_pane_g7

0xac2c,	// (0x0003ac9e) bg_popup_preview_window_pane_g8

0x5a9b,	// (0x00035b0d) aid_popup_width_pane

0x7a8a,	// (0x00037afc) popup_midp_note_alarm_window_ParamLimits

0x7a8a,	// (0x00037afc) popup_midp_note_alarm_window

0x274c,	// (0x000327be) data_form_pane_ParamLimits

0x6888,	// (0x000368fa) form_field_data_pane_g1

0x6892,	// (0x00036904) form_field_data_pane_t1_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_ParamLimits

0x68aa,	// (0x0003691c) data_form_wide_pane_ParamLimits

0x68bb,	// (0x0003692d) form_field_data_wide_pane_g1

0x68c7,	// (0x00036939) form_field_data_wide_pane_t1_ParamLimits

0x264c,	// (0x000326be) input_focus_pane_cp6_ParamLimits

0x6a6a,	// (0x00036adc) input_popup_find_pane_g1_ParamLimits

0x6a6a,	// (0x00036adc) input_popup_find_pane_g1

0x6bfc,	// (0x00036c6e) aid_navi_side_left_pane

0x6c11,	// (0x00036c83) aid_navi_side_right_pane

0xa625,	// (0x0003a697) bg_popup_window_pane_cp30_ParamLimits

0xa625,	// (0x0003a697) bg_popup_window_pane_cp30

0xa69f,	// (0x0003a711) popup_midp_note_alarm_window_g1_ParamLimits

0xa69f,	// (0x0003a711) popup_midp_note_alarm_window_g1

0xa6cf,	// (0x0003a741) popup_midp_note_alarm_window_t1_ParamLimits

0xa6cf,	// (0x0003a741) popup_midp_note_alarm_window_t1

0xa770,	// (0x0003a7e2) popup_midp_note_alarm_window_t2_ParamLimits

0xa770,	// (0x0003a7e2) popup_midp_note_alarm_window_t2

0xa81e,	// (0x0003a890) popup_midp_note_alarm_window_t3_ParamLimits

0xa81e,	// (0x0003a890) popup_midp_note_alarm_window_t3

0xa846,	// (0x0003a8b8) popup_midp_note_alarm_window_t4_ParamLimits

0xa846,	// (0x0003a8b8) popup_midp_note_alarm_window_t4

0xa866,	// (0x0003a8d8) popup_midp_note_alarm_window_t5_ParamLimits

0xa866,	// (0x0003a8d8) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0003f902) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0003f902) popup_midp_note_alarm_window_t

0xa912,	// (0x0003a984) wait_bar_pane_cp1_ParamLimits

0xa912,	// (0x0003a984) wait_bar_pane_cp1

0x234a,	// (0x000323bc) wait_anim_pane_copy1

0x234a,	// (0x000323bc) wait_border_pane_copy1

0xa31b,	// (0x0003a38d) wait_border_pane_g1_copy1

0x68e1,	// (0x00036953) form_field_popup_pane_g1

0x68e9,	// (0x0003695b) form_field_popup_pane_t1_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_cp7_ParamLimits

0x2786,	// (0x000327f8) list_form_pane_ParamLimits

0x6901,	// (0x00036973) form_field_popup_wide_pane_g1

0x6909,	// (0x0003697b) form_field_popup_wide_pane_t1_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_cp8_ParamLimits

0x2792,	// (0x00032804) list_form_wide_pane_ParamLimits

0xb3f5,	// (0x0003b467) aid_size_cell_graphic_pane

0x6993,	// (0x00036a05) data_form_pane_t1_ParamLimits

0x808f,	// (0x00038101) data_form_wide_pane_t1_ParamLimits

0x98e1,	// (0x00039953) bg_status_flat_pane

0x5ea4,	// (0x00035f16) title_pane_t1_ParamLimits

0x2360,	// (0x000323d2) title_pane_t2_ParamLimits

0x2386,	// (0x000323f8) title_pane_t3_ParamLimits

0xf557,	// (0x0003f5c9) title_pane_t_ParamLimits

0x2b20,	// (0x00032b92) level_1_signal_ParamLimits

0x2b2d,	// (0x00032b9f) level_2_signal_ParamLimits

0x2b3a,	// (0x00032bac) level_3_signal_ParamLimits

0x2b47,	// (0x00032bb9) level_4_signal_ParamLimits

0x2b54,	// (0x00032bc6) level_5_signal_ParamLimits

0x2b61,	// (0x00032bd3) level_6_signal_ParamLimits

0x2b6e,	// (0x00032be0) level_7_signal_ParamLimits

0x2b20,	// (0x00032b92) level_1_battery_ParamLimits

0x2b2d,	// (0x00032b9f) level_2_battery_ParamLimits

0x2b3a,	// (0x00032bac) level_3_battery_ParamLimits

0x2b47,	// (0x00032bb9) level_4_battery_ParamLimits

0x2b54,	// (0x00032bc6) level_5_battery_ParamLimits

0x2b61,	// (0x00032bd3) level_6_battery_ParamLimits

0x2b6e,	// (0x00032be0) level_7_battery_ParamLimits

0xa52a,	// (0x0003a59c) bg_status_flat_pane_g1

0xa532,	// (0x0003a5a4) bg_status_flat_pane_g2

0xa53a,	// (0x0003a5ac) bg_status_flat_pane_g3

0xa542,	// (0x0003a5b4) bg_status_flat_pane_g4

0xa54a,	// (0x0003a5bc) bg_status_flat_pane_g5

0xa552,	// (0x0003a5c4) bg_status_flat_pane_g6

0xa55a,	// (0x0003a5cc) bg_status_flat_pane_g7

0x5f14,	// (0x00035f86) tabs_3_active_pane_t1_ParamLimits

0x5f14,	// (0x00035f86) tabs_3_passive_pane_t1_ParamLimits

0x5f2e,	// (0x00035fa0) tabs_4_active_pane_t1_ParamLimits

0x5f2e,	// (0x00035fa0) tabs_4_1_passive_pane_t1_ParamLimits

0x6aa1,	// (0x00036b13) tabs_2_active_pane_t1_ParamLimits

0x6aa1,	// (0x00036b13) tabs_2_passive_pane_t1_ParamLimits

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp4_ParamLimits

0x6ab3,	// (0x00036b25) tabs_2_long_active_pane_t1_ParamLimits

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp4_ParamLimits

0x7d65,	// (0x00037dd7) list_single_midp_graphic_pane_t1_ParamLimits

0x2c4e,	// (0x00032cc0) bg_active_tab_pane_cp5_ParamLimits

0x6ad2,	// (0x00036b44) tabs_3_long_active_pane_t1_ParamLimits

0x6ac6,	// (0x00036b38) bg_passive_tab_pane_cp5_ParamLimits

0x7d65,	// (0x00037dd7) list_single_midp_graphic_pane_t1

0x98e1,	// (0x00039953) bg_status_flat_pane_ParamLimits

0x99aa,	// (0x00039a1c) indicator_pane_cp2_ParamLimits

0x99aa,	// (0x00039a1c) indicator_pane_cp2

0x9ad5,	// (0x00039b47) navi_pane_srt_ParamLimits

0x9ad5,	// (0x00039b47) navi_pane_srt

0x9af9,	// (0x00039b6b) popup_clock_digital_analogue_window_cp1

0x23ea,	// (0x0003245c) indicator_pane_t1

0x94c4,	// (0x00039536) copy_highlight_pane

0x94c4,	// (0x00039536) cursor_graphics_pane

0x94c4,	// (0x00039536) graphic_within_text_pane

0x94c4,	// (0x00039536) link_highlight_pane

0xad29,	// (0x0003ad9b) popup_preview_text_window_t5_ParamLimits

0xad29,	// (0x0003ad9b) popup_preview_text_window_t5

0x95f6,	// (0x00039668) cursor_digital_pane

0x95f6,	// (0x00039668) cursor_primary_pane

0x9607,	// (0x00039679) cursor_primary_small_pane

0x960f,	// (0x00039681) cursor_secondary_pane

0x9617,	// (0x00039689) cursor_title_pane

0x95f6,	// (0x00039668) link_highlight_digital_pane

0x95fe,	// (0x00039670) link_highlight_primary_pane

0x9607,	// (0x00039679) link_highlight_primary_small_pane

0x960f,	// (0x00039681) link_highlight_secondary_pane

0x9617,	// (0x00039689) link_highlight_title_pane

0x95f6,	// (0x00039668) copy_highlight_digital_pane

0x95f6,	// (0x00039668) copy_highlight_primary_pane

0x9607,	// (0x00039679) copy_highlight_primary_small_pane

0x960f,	// (0x00039681) copy_highlight_secondary_pane

0x9617,	// (0x00039689) copy_highlight_title_pane

0x960f,	// (0x00039681) graphic_text_digital_pane

0xa5c8,	// (0x0003a63a) graphic_text_primary_pane

0xa5d1,	// (0x0003a643) graphic_text_primary_small_pane

0x9607,	// (0x00039679) graphic_text_secondary_pane

0x95f6,	// (0x00039668) graphic_text_title_pane

0x961f,	// (0x00039691) cursor_primary_pane_g1

0xa5ba,	// (0x0003a62c) cursor_text_primary_t1

0xa5a2,	// (0x0003a614) cursor_primary_small_pane_g1

0xa5ac,	// (0x0003a61e) cursor_text_primary_small_t1

0xa58a,	// (0x0003a5fc) cursor_primary_small_pane_g1_copy1

0xa594,	// (0x0003a606) cursor_text_primary_small_t1_copy1

0xa572,	// (0x0003a5e4) cursor_text_title_t1

0xa580,	// (0x0003a5f2) cursor_title_pane_g1

0x961f,	// (0x00039691) cursor_digital_pane_g1

0x9629,	// (0x0003969b) cursor_text_digital_t1

0x9637,	// (0x000396a9) link_highlight_primary_pane_g1

0xa51b,	// (0x0003a58d) link_highlight_primary_pane_t1

0x9637,	// (0x000396a9) link_highlight_primary_small_pane_g1

0x963f,	// (0x000396b1) link_highlight_primary_small_pane_t1

0x9637,	// (0x000396a9) link_highlight_secondary_pane_g1

0x964e,	// (0x000396c0) link_highlight_secondary_pane_t1

0xa480,	// (0x0003a4f2) link_highlight_title_pane_g1

0xa497,	// (0x0003a509) link_highlight_title_pane_t1

0xa480,	// (0x0003a4f2) link_highlight_digital_pane_g1

0xa488,	// (0x0003a4fa) link_highlight_digital_pane_t1

0xa33a,	// (0x0003a3ac) copy_highlight_primary_pane_g1

0xa360,	// (0x0003a3d2) copy_highlight_primary_pane_t1

0xa33a,	// (0x0003a3ac) copy_highlight_primary_small_pane_g1

0xa351,	// (0x0003a3c3) copy_highlight_primary_small_pane_t1

0x965d,	// (0x000396cf) copy_highlight_secondary_pane_g1

0x9665,	// (0x000396d7) copy_highlight_secondary_pane_t1

0xa33a,	// (0x0003a3ac) copy_highlight_title_pane_g1

0xa342,	// (0x0003a3b4) copy_highlight_title_pane_t1

0xa33a,	// (0x0003a3ac) copy_highlight_digital_pane_g1

0xb5c3,	// (0x0003b635) copy_highlight_digital_pane_t1

0xb517,	// (0x0003b589) graphic_text_primary_pane_g1

0xb5a7,	// (0x0003b619) graphic_text_primary_pane_t1

0xb5b5,	// (0x0003b627) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0003fa31) graphic_text_primary_pane_t

0xb583,	// (0x0003b5f5) graphic_text_primary_small_pane_g1

0xb58b,	// (0x0003b5fd) graphic_text_primary_small_pane_t1

0xb599,	// (0x0003b60b) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0003fa2c) graphic_text_primary_small_pane_t

0xb55f,	// (0x0003b5d1) graphic_text_secondary_pane_g1

0xb567,	// (0x0003b5d9) graphic_text_secondary_pane_t1

0xb575,	// (0x0003b5e7) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0003fa27) graphic_text_secondary_pane_t

0xb53b,	// (0x0003b5ad) graphic_text_title_pane_g1

0xb543,	// (0x0003b5b5) graphic_text_title_pane_t1

0xb551,	// (0x0003b5c3) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0003fa22) graphic_text_title_pane_t

0xb517,	// (0x0003b589) graphic_text_digital_pane_g1

0xb51f,	// (0x0003b591) graphic_text_digital_pane_t1

0xb52d,	// (0x0003b59f) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0003fa1d) graphic_text_digital_pane_t

0x23a6,	// (0x00032418) navi_icon_pane_srt_ParamLimits

0x23a6,	// (0x00032418) navi_icon_pane_srt

0x234a,	// (0x000323bc) navi_midp_pane_srt

0x234a,	// (0x000323bc) navi_navi_pane_srt

0x23a6,	// (0x00032418) navi_text_pane_srt_ParamLimits

0x23a6,	// (0x00032418) navi_text_pane_srt

0xb4e2,	// (0x0003b554) navi_navi_icon_text_pane_srt

0xb4ea,	// (0x0003b55c) navi_navi_pane_srt_g1_ParamLimits

0xb4ea,	// (0x0003b55c) navi_navi_pane_srt_g1

0xb4fc,	// (0x0003b56e) navi_navi_pane_srt_g2_ParamLimits

0xb4fc,	// (0x0003b56e) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0003fa18) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0003fa18) navi_navi_pane_srt_g

0xb50e,	// (0x0003b580) navi_navi_tabs_pane_srt

0xb4e2,	// (0x0003b554) navi_navi_text_pane_srt

0xb4e2,	// (0x0003b554) navi_navi_volume_pane_srt

0xb4d3,	// (0x0003b545) navi_navi_text_pane_srt_t1

0x8232,	// (0x000382a4) navi_navi_volume_pane_srt_g1

0x823a,	// (0x000382ac) volume_small_pane_srt_ParamLimits

0x823a,	// (0x000382ac) volume_small_pane_srt

0x750c,	// (0x0003757e) volume_small_pane_srt_g1_ParamLimits

0x750c,	// (0x0003757e) volume_small_pane_srt_g1

0x751c,	// (0x0003758e) volume_small_pane_srt_g2_ParamLimits

0x751c,	// (0x0003758e) volume_small_pane_srt_g2

0x752d,	// (0x0003759f) volume_small_pane_srt_g3_ParamLimits

0x752d,	// (0x0003759f) volume_small_pane_srt_g3

0x753e,	// (0x000375b0) volume_small_pane_srt_g4_ParamLimits

0x753e,	// (0x000375b0) volume_small_pane_srt_g4

0x754f,	// (0x000375c1) volume_small_pane_srt_g5_ParamLimits

0x754f,	// (0x000375c1) volume_small_pane_srt_g5

0x7560,	// (0x000375d2) volume_small_pane_srt_g6_ParamLimits

0x7560,	// (0x000375d2) volume_small_pane_srt_g6

0x7571,	// (0x000375e3) volume_small_pane_srt_g7_ParamLimits

0x7571,	// (0x000375e3) volume_small_pane_srt_g7

0x7582,	// (0x000375f4) volume_small_pane_srt_g8_ParamLimits

0x7582,	// (0x000375f4) volume_small_pane_srt_g8

0x7593,	// (0x00037605) volume_small_pane_srt_g9_ParamLimits

0x7593,	// (0x00037605) volume_small_pane_srt_g9

0x75a4,	// (0x00037616) volume_small_pane_srt_g10_ParamLimits

0x75a4,	// (0x00037616) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0003f7c5) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0003f7c5) volume_small_pane_srt_g

0x6155,	// (0x000361c7) query_popup_data_pane_cp2

0xb4b9,	// (0x0003b52b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4b9,	// (0x0003b52b) navi_navi_icon_text_pane_srt_t1

0xa5c8,	// (0x0003a63a) navi_tabs_2_long_pane_srt

0xa5c8,	// (0x0003a63a) navi_tabs_2_pane_srt

0xa5c8,	// (0x0003a63a) navi_tabs_3_long_pane_srt

0xa5c8,	// (0x0003a63a) navi_tabs_3_pane_srt

0xa5c8,	// (0x0003a63a) navi_tabs_4_pane_srt

0x8212,	// (0x00038284) tabs_2_active_pane_srt_ParamLimits

0x8212,	// (0x00038284) tabs_2_active_pane_srt

0x8222,	// (0x00038294) tabs_2_passive_pane_srt_ParamLimits

0x8222,	// (0x00038294) tabs_2_passive_pane_srt

0x980a,	// (0x0003987c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x980a,	// (0x0003987c) bg_passive_tab_pane_cp1_srt

0xb485,	// (0x0003b4f7) bg_passive_tab_pane_g1_cp1_srt

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp1_srt

0xb48e,	// (0x0003b500) bg_passive_tab_pane_g3_cp1_srt

0x23a6,	// (0x00032418) bg_active_tab_pane_cp1_srt_ParamLimits

0x23a6,	// (0x00032418) bg_active_tab_pane_cp1_srt

0xb497,	// (0x0003b509) tabs_2_active_pane_srt_g1

0xb49f,	// (0x0003b511) tabs_2_active_pane_srt_t1_ParamLimits

0xb49f,	// (0x0003b511) tabs_2_active_pane_srt_t1

0xb485,	// (0x0003b4f7) bg_active_tab_pane_g1_cp1_srt

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp1_srt

0xb48e,	// (0x0003b500) bg_active_tab_pane_g3_cp1_srt

0x81df,	// (0x00038251) tabs_3_active_pane_srt_ParamLimits

0x81df,	// (0x00038251) tabs_3_active_pane_srt

0x81f0,	// (0x00038262) tabs_3_passive_pane_cp_srt_ParamLimits

0x81f0,	// (0x00038262) tabs_3_passive_pane_cp_srt

0x8201,	// (0x00038273) tabs_3_passive_pane_srt_ParamLimits

0x8201,	// (0x00038273) tabs_3_passive_pane_srt

0x980a,	// (0x0003987c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x980a,	// (0x0003987c) bg_passive_tab_pane_cp2_srt

0x9674,	// (0x000396e6) bg_passive_tab_pane_g1_cp2_srt

0x70e3,	// (0x00037155) bg_passive_tab_pane_g2_cp2_srt

0x967d,	// (0x000396ef) bg_passive_tab_pane_g3_cp2_srt

0x23a6,	// (0x00032418) bg_active_tab_pane_cp2_srt_ParamLimits

0x23a6,	// (0x00032418) bg_active_tab_pane_cp2_srt

0xb46b,	// (0x0003b4dd) tabs_3_active_pane_srt_g1

0xb473,	// (0x0003b4e5) tabs_3_active_pane_srt_t1_ParamLimits

0xb473,	// (0x0003b4e5) tabs_3_active_pane_srt_t1

0x9674,	// (0x000396e6) bg_active_tab_pane_g1_cp2_srt

0x70e3,	// (0x00037155) bg_active_tab_pane_g2_cp2_srt

0x967d,	// (0x000396ef) bg_active_tab_pane_g3_cp2_srt

0x8197,	// (0x00038209) tabs_4_active_pane_srt_ParamLimits

0x8197,	// (0x00038209) tabs_4_active_pane_srt

0x81a9,	// (0x0003821b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x81a9,	// (0x0003821b) tabs_4_passive_pane_cp2_srt

0x7713,	// (0x00037785) aid_size_cell_toolbar

0x6ac6,	// (0x00036b38) main_idle_act_pane_ParamLimits

0x78bc,	// (0x0003792e) popup_large_graphic_colour_window_ParamLimits

0x7c27,	// (0x00037c99) popup_toolbar_window_ParamLimits

0x7c27,	// (0x00037c99) popup_toolbar_window

0x48a3,	// (0x00034915) list_single_graphic_2heading_pane_ParamLimits

0x48a3,	// (0x00034915) list_single_graphic_2heading_pane

0x2a08,	// (0x00032a7a) aid_size_cell_apps_grid_lsc_pane

0x2a1a,	// (0x00032a8c) aid_size_cell_apps_grid_prt_pane

0x980a,	// (0x0003987c) bg_wml_button_pane_cp1_ParamLimits

0x980a,	// (0x0003987c) bg_wml_button_pane_cp1

0x9fc1,	// (0x0003a033) form_midp_field_text_pane_t1_ParamLimits

0x9d8b,	// (0x00039dfd) input_focus_pane_cp050_ParamLimits

0x9ffb,	// (0x0003a06d) list_midp_form_text_pane_ParamLimits

0x9f9e,	// (0x0003a010) input_focus_pane_cp051_ParamLimits

0x9fb2,	// (0x0003a024) list_midp_choice_pane_ParamLimits

0x9e41,	// (0x00039eb3) list_single_2graphic_pane_cp3_ParamLimits

0x9e41,	// (0x00039eb3) list_single_2graphic_pane_cp3

0x9e66,	// (0x00039ed8) list_single_midp_graphic_pane_ParamLimits

0x9e66,	// (0x00039ed8) list_single_midp_graphic_pane

0x5a09,	// (0x00035a7b) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a09,	// (0x00035a7b) list_single_graphic_2heading_pane_g1

0x5a15,	// (0x00035a87) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a15,	// (0x00035a87) list_single_graphic_2heading_pane_g4

0x5a21,	// (0x00035a93) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a21,	// (0x00035a93) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0003f818) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0003f818) list_single_graphic_2heading_pane_g

0x5a2d,	// (0x00035a9f) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a2d,	// (0x00035a9f) list_single_graphic_2heading_pane_t1

0x5a41,	// (0x00035ab3) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a41,	// (0x00035ab3) list_single_graphic_2heading_pane_t2

0x5a5b,	// (0x00035acd) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a5b,	// (0x00035acd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0003f81f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0003f81f) list_single_graphic_2heading_pane_t

0x9c55,	// (0x00039cc7) bg_popup_sub_pane_cp2

0x9c7f,	// (0x00039cf1) grid_toobar_pane

0x7cd4,	// (0x00037d46) cell_toolbar_pane_ParamLimits

0x7cd4,	// (0x00037d46) cell_toolbar_pane

0x9cbb,	// (0x00039d2d) cell_toolbar_pane_g1_ParamLimits

0x9cbb,	// (0x00039d2d) cell_toolbar_pane_g1

0x9ccf,	// (0x00039d41) cell_toolbar_pane_g2_ParamLimits

0x9ccf,	// (0x00039d41) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0003f82d) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0003f82d) cell_toolbar_pane_g

0x9cf1,	// (0x00039d63) grid_highlight_pane_cp2_ParamLimits

0x9cf1,	// (0x00039d63) grid_highlight_pane_cp2

0x9d0b,	// (0x00039d7d) toolbar_button_pane

0x9d17,	// (0x00039d89) toolbar_button_pane_g1

0x9d1f,	// (0x00039d91) toolbar_button_pane_g2

0x9d27,	// (0x00039d99) toolbar_button_pane_g3

0x9d2f,	// (0x00039da1) toolbar_button_pane_g4

0x9d37,	// (0x00039da9) toolbar_button_pane_g5

0x9d3f,	// (0x00039db1) toolbar_button_pane_g6

0x9d47,	// (0x00039db9) toolbar_button_pane_g7

0x9d4f,	// (0x00039dc1) toolbar_button_pane_g8

0x9d57,	// (0x00039dc9) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0003f832) toolbar_button_pane_g

0x7d0c,	// (0x00037d7e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7d0c,	// (0x00037d7e) list_single_2graphic_pane_g1_cp3

0x7d18,	// (0x00037d8a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7d18,	// (0x00037d8a) list_single_2graphic_pane_g2_cp3

0x7d29,	// (0x00037d9b) list_single_2graphic_pane_g3_cp3

0x7d31,	// (0x00037da3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7d31,	// (0x00037da3) list_single_2graphic_pane_g4_cp3

0x7d3d,	// (0x00037daf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7d3d,	// (0x00037daf) list_single_2graphic_pane_t1_cp3

0x7d59,	// (0x00037dcb) list_single_midp_graphic_pane_g2_ParamLimits

0x7d59,	// (0x00037dcb) list_single_midp_graphic_pane_g2

0x771b,	// (0x0003778d) aid_zoom_text_primary

0x59ed,	// (0x00035a5f) aid_zoom_text_secondary

0x972e,	// (0x000397a0) status_small_pane_g7_ParamLimits

0x972e,	// (0x000397a0) status_small_pane_g7

0x9751,	// (0x000397c3) status_small_pane_t1_ParamLimits

0x5e87,	// (0x00035ef9) title_pane_g2

0x0003,

0xf54e,	// (0x0003f5c0) title_pane_g

0x61af,	// (0x00036221) aid_size_cell_colour_1_pane_ParamLimits

0x61af,	// (0x00036221) aid_size_cell_colour_1_pane

0x61c3,	// (0x00036235) aid_size_cell_colour_2_pane_ParamLimits

0x61c3,	// (0x00036235) aid_size_cell_colour_2_pane

0x61d7,	// (0x00036249) aid_size_cell_colour_3_pane_ParamLimits

0x61d7,	// (0x00036249) aid_size_cell_colour_3_pane

0x61eb,	// (0x0003625d) aid_size_cell_colour_4_pane_ParamLimits

0x61eb,	// (0x0003625d) aid_size_cell_colour_4_pane

0x6b39,	// (0x00036bab) title_pane_stacon_g1_ParamLimits

0x6b39,	// (0x00036bab) title_pane_stacon_g1

0xa3b7,	// (0x0003a429) popup_note_wait_window_g3_ParamLimits

0xa3b7,	// (0x0003a429) popup_note_wait_window_g3

0xa42d,	// (0x0003a49f) popup_note_wait_window_t5_ParamLimits

0xa42d,	// (0x0003a49f) popup_note_wait_window_t5

0x234a,	// (0x000323bc) main_feb_china_hwr_fs_writing_pane

0x77a3,	// (0x00037815) popup_feb_china_hwr_fs_window_ParamLimits

0x77a3,	// (0x00037815) popup_feb_china_hwr_fs_window

0x7d7b,	// (0x00037ded) aid_size_cell_hwr_fs_ParamLimits

0x7d7b,	// (0x00037ded) aid_size_cell_hwr_fs

0x9d8b,	// (0x00039dfd) bg_popup_sub_pane_cp3_ParamLimits

0x9d8b,	// (0x00039dfd) bg_popup_sub_pane_cp3

0x7d90,	// (0x00037e02) grid_hwr_fs_pane_ParamLimits

0x7d90,	// (0x00037e02) grid_hwr_fs_pane

0x7da8,	// (0x00037e1a) linegrid_hwr_fs_pane_ParamLimits

0x7da8,	// (0x00037e1a) linegrid_hwr_fs_pane

0x7db8,	// (0x00037e2a) cell_hwr_fs_pane_ParamLimits

0x7db8,	// (0x00037e2a) cell_hwr_fs_pane

0x9d97,	// (0x00039e09) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d97,	// (0x00039e09) linegrid_hwr_fs_pane_g1

0x9da3,	// (0x00039e15) linegrid_hwr_fs_pane_g2_ParamLimits

0x9da3,	// (0x00039e15) linegrid_hwr_fs_pane_g2

0x9db5,	// (0x00039e27) linegrid_hwr_fs_pane_g3_ParamLimits

0x9db5,	// (0x00039e27) linegrid_hwr_fs_pane_g3

0x7dda,	// (0x00037e4c) linegrid_hwr_fs_pane_g4_ParamLimits

0x7dda,	// (0x00037e4c) linegrid_hwr_fs_pane_g4

0x7df4,	// (0x00037e66) linegrid_hwr_fs_pane_g5_ParamLimits

0x7df4,	// (0x00037e66) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0003f858) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0003f858) linegrid_hwr_fs_pane_g

0x9dc1,	// (0x00039e33) cell_hwr_fs_pane_g1_ParamLimits

0x9dc1,	// (0x00039e33) cell_hwr_fs_pane_g1

0x9b8f,	// (0x00039c01) cell_hwr_fs_pane_g2_ParamLimits

0x9b8f,	// (0x00039c01) cell_hwr_fs_pane_g2

0x9dd7,	// (0x00039e49) cell_hwr_fs_pane_g3_ParamLimits

0x9dd7,	// (0x00039e49) cell_hwr_fs_pane_g3

0x9de4,	// (0x00039e56) cell_hwr_fs_pane_g4_ParamLimits

0x9de4,	// (0x00039e56) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0003f863) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0003f863) cell_hwr_fs_pane_g

0x7e0a,	// (0x00037e7c) cell_hwr_fs_pane_t1

0x234a,	// (0x000323bc) grid_highlight_pane_cp6

0x234a,	// (0x000323bc) main_idle_act2_pane

0x285e,	// (0x000328d0) aid_inside_area_popup_secondary

0xaa4c,	// (0x0003aabe) aid_inside_area_window_primary_ParamLimits

0xaa4c,	// (0x0003aabe) aid_inside_area_window_primary

0xb5d2,	// (0x0003b644) ai2_news_ticker_pane

0xb5da,	// (0x0003b64c) aid_size_cell_ai1_link_ParamLimits

0xb5da,	// (0x0003b64c) aid_size_cell_ai1_link

0xb5f4,	// (0x0003b666) popup_ai2_data_window_ParamLimits

0xb5f4,	// (0x0003b666) popup_ai2_data_window

0xb60a,	// (0x0003b67c) popup_ai2_link_window_ParamLimits

0xb60a,	// (0x0003b67c) popup_ai2_link_window

0x9d8b,	// (0x00039dfd) bg_popup_sub_pane_cp4_ParamLimits

0x9d8b,	// (0x00039dfd) bg_popup_sub_pane_cp4

0xb61e,	// (0x0003b690) grid_ai2_link_pane_ParamLimits

0xb61e,	// (0x0003b690) grid_ai2_link_pane

0xb635,	// (0x0003b6a7) popup_ai2_link_window_g1_ParamLimits

0xb635,	// (0x0003b6a7) popup_ai2_link_window_g1

0xb641,	// (0x0003b6b3) popup_ai2_link_window_g2_ParamLimits

0xb641,	// (0x0003b6b3) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0003fa36) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0003fa36) popup_ai2_link_window_g

0xb650,	// (0x0003b6c2) ai2_mp_button_pane

0xb658,	// (0x0003b6ca) ai2_mp_volume_pane

0x9f9e,	// (0x0003a010) bg_popup_sub_pane_cp5_ParamLimits

0x9f9e,	// (0x0003a010) bg_popup_sub_pane_cp5

0xb660,	// (0x0003b6d2) heading_ai2_gene_pane_ParamLimits

0xb660,	// (0x0003b6d2) heading_ai2_gene_pane

0xb66c,	// (0x0003b6de) list_ai2_gene_pane_ParamLimits

0xb66c,	// (0x0003b6de) list_ai2_gene_pane

0xb6b4,	// (0x0003b726) cell_ai2_link_pane_ParamLimits

0xb6b4,	// (0x0003b726) cell_ai2_link_pane

0xb6ca,	// (0x0003b73c) cell_ai2_link_pane_g1

0x234a,	// (0x000323bc) grid_highlight_pane_cp7

0x824f,	// (0x000382c1) ai2_mp_volume_pane_g1

0xb79a,	// (0x0003b80c) ai2_mp_volume_pane_g2

0xb70f,	// (0x0003b781) list_ai2_gene_pane_t1

0xb7a2,	// (0x0003b814) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0003fa4f) ai2_mp_volume_pane_g

0x8257,	// (0x000382c9) volume_small_pane_cp3

0xb7aa,	// (0x0003b81c) aid_size_cell_ai2_button

0xb7b2,	// (0x0003b824) grid_ai2_button_pane

0xb7bb,	// (0x0003b82d) cell_ai2_button_pane_ParamLimits

0xb7bb,	// (0x0003b82d) cell_ai2_button_pane

0x2340,	// (0x000323b2) cell_ai2_button_pane_g1

0x234a,	// (0x000323bc) grid_highlight_pane_cp8

0xb75a,	// (0x0003b7cc) ai2_gene_pane_t1_ParamLimits

0xb75a,	// (0x0003b7cc) ai2_gene_pane_t1

0x7709,	// (0x0003777b) aid_height_parent_landscape

0xb0b5,	// (0x0003b127) aid_height_set_list

0xb0c6,	// (0x0003b138) aid_size_parent

0xb3f5,	// (0x0003b467) aid_size_cell_graphic_pane_ParamLimits

0xb67c,	// (0x0003b6ee) popup_ai2_data_window_g1_ParamLimits

0xb67c,	// (0x0003b6ee) popup_ai2_data_window_g1

0xb688,	// (0x0003b6fa) ai2_news_ticker_pane_g1

0xb690,	// (0x0003b702) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0003fa3b) ai2_news_ticker_pane_g

0xb698,	// (0x0003b70a) ai2_news_ticker_pane_t1

0xb6a6,	// (0x0003b718) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0003fa40) ai2_news_ticker_pane_t

0xb6d3,	// (0x0003b745) heading_ai2_gene_pane_g1

0xb6db,	// (0x0003b74d) heading_ai2_gene_pane_t1_ParamLimits

0xb6db,	// (0x0003b74d) heading_ai2_gene_pane_t1

0xb6f0,	// (0x0003b762) list_highlight_pane_cp6

0xb6f8,	// (0x0003b76a) ai2_gene_pane_ParamLimits

0xb6f8,	// (0x0003b76a) ai2_gene_pane

0xb71d,	// (0x0003b78f) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0003fa45) list_ai2_gene_pane_t

0xb72b,	// (0x0003b79d) list_highlight_pane_cp8_ParamLimits

0xb72b,	// (0x0003b79d) list_highlight_pane_cp8

0xb73c,	// (0x0003b7ae) ai2_gene_pane_g1_ParamLimits

0xb73c,	// (0x0003b7ae) ai2_gene_pane_g1

0xb74e,	// (0x0003b7c0) ai2_gene_pane_g2_ParamLimits

0xb74e,	// (0x0003b7c0) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0003fa4a) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0003fa4a) ai2_gene_pane_g

0x26f7,	// (0x00032769) scroll_pane_cp12

0x76c6,	// (0x00037738) control_pane_t3_ParamLimits

0x76c6,	// (0x00037738) control_pane_t3

0x9742,	// (0x000397b4) status_small_pane_g8_ParamLimits

0x9742,	// (0x000397b4) status_small_pane_g8

0x7885,	// (0x000378f7) popup_find_window_ParamLimits

0x7a9e,	// (0x00037b10) popup_note_image_window_ParamLimits

0x4651,	// (0x000346c3) list_double2_graphic_pane_vc_g1_ParamLimits

0x4651,	// (0x000346c3) list_double2_graphic_pane_vc_g1

0x465d,	// (0x000346cf) list_double2_graphic_pane_vc_g2_ParamLimits

0x465d,	// (0x000346cf) list_double2_graphic_pane_vc_g2

0x4669,	// (0x000346db) list_double2_graphic_pane_vc_g3_ParamLimits

0x4669,	// (0x000346db) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0003f826) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0003f826) list_double2_graphic_pane_vc_g

0x4675,	// (0x000346e7) list_double2_graphic_pane_vc_t1_ParamLimits

0x4675,	// (0x000346e7) list_double2_graphic_pane_vc_t1

0x465d,	// (0x000346cf) list_single_heading_pane_vc_g1_ParamLimits

0x465d,	// (0x000346cf) list_single_heading_pane_vc_g1

0x4669,	// (0x000346db) list_single_heading_pane_vc_g2_ParamLimits

0x4669,	// (0x000346db) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_single_heading_pane_vc_g

0x47e8,	// (0x0003485a) list_single_heading_pane_vc_t1_ParamLimits

0x47e8,	// (0x0003485a) list_single_heading_pane_vc_t1

0x47fe,	// (0x00034870) list_single_heading_pane_vc_t2_ParamLimits

0x47fe,	// (0x00034870) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0003f847) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0003f847) list_single_heading_pane_vc_t

0x4810,	// (0x00034882) list_setting_number_pane_vc_g1_ParamLimits

0x4810,	// (0x00034882) list_setting_number_pane_vc_g1

0x481c,	// (0x0003488e) list_setting_number_pane_vc_g2_ParamLimits

0x481c,	// (0x0003488e) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0003f84c) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0003f84c) list_setting_number_pane_vc_g

0x4828,	// (0x0003489a) list_setting_number_pane_vc_t1_ParamLimits

0x4828,	// (0x0003489a) list_setting_number_pane_vc_t1

0x483c,	// (0x000348ae) list_setting_number_pane_vc_t2_ParamLimits

0x483c,	// (0x000348ae) list_setting_number_pane_vc_t2

0x4858,	// (0x000348ca) list_setting_number_pane_vc_t3_ParamLimits

0x4858,	// (0x000348ca) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0003f851) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0003f851) list_setting_number_pane_vc_t

0x4884,	// (0x000348f6) set_value_pane_vc_ParamLimits

0x4884,	// (0x000348f6) set_value_pane_vc

0x48a3,	// (0x00034915) list_double2_graphic_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double2_graphic_pane_vc

0xb296,	// (0x0003b308) list_double2_large_graphic_pane_vc_ParamLimits

0xb296,	// (0x0003b308) list_double2_large_graphic_pane_vc

0x48a3,	// (0x00034915) list_double2_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double2_pane_vc

0x48a3,	// (0x00034915) list_double_graphic_heading_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double_graphic_heading_pane_vc

0x48a3,	// (0x00034915) list_double_graphic_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double_graphic_pane_vc

0x48a3,	// (0x00034915) list_double_heading_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double_heading_pane_vc

0xb2a8,	// (0x0003b31a) list_double_large_graphic_pane_vc_ParamLimits

0xb2a8,	// (0x0003b31a) list_double_large_graphic_pane_vc

0x48a3,	// (0x00034915) list_double_number_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double_number_pane_vc

0x48a3,	// (0x00034915) list_double_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double_pane_vc

0x48a3,	// (0x00034915) list_double_time_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_double_time_pane_vc

0x48a3,	// (0x00034915) list_setting_number_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_setting_number_pane_vc

0x48a3,	// (0x00034915) list_setting_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_setting_pane_vc

0x48a3,	// (0x00034915) list_single_graphic_heading_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_single_graphic_heading_pane_vc

0x48a3,	// (0x00034915) list_single_heading_pane_vc_ParamLimits

0x48a3,	// (0x00034915) list_single_heading_pane_vc

0x80f0,	// (0x00038162) list_single_number_heading_pane_vc_ParamLimits

0x80f0,	// (0x00038162) list_single_number_heading_pane_vc

0x46d7,	// (0x00034749) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x46d7,	// (0x00034749) list_double_graphic_heading_pane_vc_g1

0x465d,	// (0x000346cf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x465d,	// (0x000346cf) list_double_graphic_heading_pane_vc_g2

0x4669,	// (0x000346db) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4669,	// (0x000346db) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0003fa56) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0003fa56) list_double_graphic_heading_pane_vc_g

0x48b6,	// (0x00034928) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48b6,	// (0x00034928) list_double_graphic_heading_pane_vc_t1

0x48ca,	// (0x0003493c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x48ca,	// (0x0003493c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0003fa5d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0003fa5d) list_double_graphic_heading_pane_vc_t

0x4810,	// (0x00034882) list_setting_pane_vc_g1_ParamLimits

0x4810,	// (0x00034882) list_setting_pane_vc_g1

0x481c,	// (0x0003488e) list_setting_pane_vc_g2_ParamLimits

0x481c,	// (0x0003488e) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0003f84c) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0003f84c) list_setting_pane_vc_g

0x48e2,	// (0x00034954) list_setting_pane_vc_t1_ParamLimits

0x48e2,	// (0x00034954) list_setting_pane_vc_t1

0x48fe,	// (0x00034970) list_setting_pane_vc_t2_ParamLimits

0x48fe,	// (0x00034970) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003faa0) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003faa0) list_setting_pane_vc_t

0x4884,	// (0x000348f6) set_value_pane_cp_vc_ParamLimits

0x4884,	// (0x000348f6) set_value_pane_cp_vc

0x465d,	// (0x000346cf) list_single_number_heading_pane_vc_g1_ParamLimits

0x465d,	// (0x000346cf) list_single_number_heading_pane_vc_g1

0x4669,	// (0x000346db) list_single_number_heading_pane_vc_g2_ParamLimits

0x4669,	// (0x000346db) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_single_number_heading_pane_vc_g

0x4918,	// (0x0003498a) list_single_number_heading_pane_vc_t1_ParamLimits

0x4918,	// (0x0003498a) list_single_number_heading_pane_vc_t1

0x492e,	// (0x000349a0) list_single_number_heading_pane_vc_t2_ParamLimits

0x492e,	// (0x000349a0) list_single_number_heading_pane_vc_t2

0x4940,	// (0x000349b2) list_single_number_heading_pane_vc_t3_ParamLimits

0x4940,	// (0x000349b2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0003faa5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003faa5) list_single_number_heading_pane_vc_t

0x4952,	// (0x000349c4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4952,	// (0x000349c4) list_single_graphic_heading_pane_vc_g1

0x465d,	// (0x000346cf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x465d,	// (0x000346cf) list_single_graphic_heading_pane_vc_g4

0x4669,	// (0x000346db) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4669,	// (0x000346db) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0003faac) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003faac) list_single_graphic_heading_pane_vc_g

0x495e,	// (0x000349d0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x495e,	// (0x000349d0) list_single_graphic_heading_pane_vc_t1

0x4974,	// (0x000349e6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4974,	// (0x000349e6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0003fab3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0003fab3) list_single_graphic_heading_pane_vc_t

0x465d,	// (0x000346cf) list_double2_pane_vc_g1_ParamLimits

0x465d,	// (0x000346cf) list_double2_pane_vc_g1

0x4669,	// (0x000346db) list_double2_pane_vc_g2_ParamLimits

0x4669,	// (0x000346db) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_double2_pane_vc_g

0x4986,	// (0x000349f8) list_double2_pane_vc_t1_ParamLimits

0x4986,	// (0x000349f8) list_double2_pane_vc_t1

0x46e3,	// (0x00034755) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x46e3,	// (0x00034755) list_double2_large_graphic_pane_vc_g1

0x46ef,	// (0x00034761) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x46ef,	// (0x00034761) list_double2_large_graphic_pane_vc_g2

0x46fb,	// (0x0003476d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x46fb,	// (0x0003476d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0003fab8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0003fab8) list_double2_large_graphic_pane_vc_g

0x4707,	// (0x00034779) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4707,	// (0x00034779) list_double2_large_graphic_pane_vc_t1

0x499e,	// (0x00034a10) list_double_time_pane_vc_g1_ParamLimits

0x499e,	// (0x00034a10) list_double_time_pane_vc_g1

0x49aa,	// (0x00034a1c) list_double_time_pane_vc_g2_ParamLimits

0x49aa,	// (0x00034a1c) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0003fabf) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003fabf) list_double_time_pane_vc_g

0x49b6,	// (0x00034a28) list_double_time_pane_vc_t1_ParamLimits

0x49b6,	// (0x00034a28) list_double_time_pane_vc_t1

0x49da,	// (0x00034a4c) list_double_time_pane_vc_t2_ParamLimits

0x49da,	// (0x00034a4c) list_double_time_pane_vc_t2

0x4a29,	// (0x00034a9b) list_double_time_pane_vc_t3_ParamLimits

0x4a29,	// (0x00034a9b) list_double_time_pane_vc_t3

0x4a3b,	// (0x00034aad) list_double_time_pane_vc_t4_ParamLimits

0x4a3b,	// (0x00034aad) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0003fac4) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0003fac4) list_double_time_pane_vc_t

0x465d,	// (0x000346cf) list_double_pane_vc_g1_ParamLimits

0x465d,	// (0x000346cf) list_double_pane_vc_g1

0x4669,	// (0x000346db) list_double_pane_vc_g2_ParamLimits

0x4669,	// (0x000346db) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_double_pane_vc_g

0x4a4f,	// (0x00034ac1) list_double_pane_vc_t1_ParamLimits

0x4a4f,	// (0x00034ac1) list_double_pane_vc_t1

0x4a63,	// (0x00034ad5) list_double_pane_vc_t2_ParamLimits

0x4a63,	// (0x00034ad5) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0003facd) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003facd) list_double_pane_vc_t

0x465d,	// (0x000346cf) list_double_number_pane_vc_g1_ParamLimits

0x465d,	// (0x000346cf) list_double_number_pane_vc_g1

0x4669,	// (0x000346db) list_double_number_pane_vc_g2_ParamLimits

0x4669,	// (0x000346db) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_double_number_pane_vc_g

0x4a7b,	// (0x00034aed) list_double_number_pane_vc_t1_ParamLimits

0x4a7b,	// (0x00034aed) list_double_number_pane_vc_t1

0x4a4f,	// (0x00034ac1) list_double_number_pane_vc_t2_ParamLimits

0x4a4f,	// (0x00034ac1) list_double_number_pane_vc_t2

0x4a8d,	// (0x00034aff) list_double_number_pane_vc_t3_ParamLimits

0x4a8d,	// (0x00034aff) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0003fad2) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0003fad2) list_double_number_pane_vc_t

0x4aa5,	// (0x00034b17) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4aa5,	// (0x00034b17) list_double_large_graphic_pane_vc_g1

0x4ac7,	// (0x00034b39) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4ac7,	// (0x00034b39) list_double_large_graphic_pane_vc_g2

0x4adb,	// (0x00034b4d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4adb,	// (0x00034b4d) list_double_large_graphic_pane_vc_g3

0x4aea,	// (0x00034b5c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4aea,	// (0x00034b5c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0003fad9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0003fad9) list_double_large_graphic_pane_vc_g

0x4af6,	// (0x00034b68) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4af6,	// (0x00034b68) list_double_large_graphic_pane_vc_t1

0x4b12,	// (0x00034b84) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4b12,	// (0x00034b84) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0003fae2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0003fae2) list_double_large_graphic_pane_vc_t

0x465d,	// (0x000346cf) list_double_heading_pane_vc_g1_ParamLimits

0x465d,	// (0x000346cf) list_double_heading_pane_vc_g1

0x4669,	// (0x000346db) list_double_heading_pane_vc_g2_ParamLimits

0x4669,	// (0x000346db) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f63a) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f63a) list_double_heading_pane_vc_g

0x4b34,	// (0x00034ba6) list_double_heading_pane_vc_t1_ParamLimits

0x4b34,	// (0x00034ba6) list_double_heading_pane_vc_t1

0x4b48,	// (0x00034bba) list_double_heading_pane_vc_t2_ParamLimits

0x4b48,	// (0x00034bba) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0003fae7) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0003fae7) list_double_heading_pane_vc_t

0x4b60,	// (0x00034bd2) list_double_graphic_pane_vc_g1_ParamLimits

0x4b60,	// (0x00034bd2) list_double_graphic_pane_vc_g1

0x4b78,	// (0x00034bea) list_double_graphic_pane_vc_g2_ParamLimits

0x4b78,	// (0x00034bea) list_double_graphic_pane_vc_g2

0x465d,	// (0x000346cf) list_double_graphic_pane_vc_g3_ParamLimits

0x465d,	// (0x000346cf) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0003faec) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0003faec) list_double_graphic_pane_vc_g

0x4b95,	// (0x00034c07) list_double_graphic_pane_vc_t1_ParamLimits

0x4b95,	// (0x00034c07) list_double_graphic_pane_vc_t1

0x4bb4,	// (0x00034c26) list_double_graphic_pane_vc_t2_ParamLimits

0x4bb4,	// (0x00034c26) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0003faf5) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0003faf5) list_double_graphic_pane_vc_t

0x5aa7,	// (0x00035b19) aid_size_cell_fastswap

0x5aaf,	// (0x00035b21) aid_size_cell_touch_ParamLimits

0x5aaf,	// (0x00035b21) aid_size_cell_touch

0x5d14,	// (0x00035d86) popup_fast_swap_wide_window_ParamLimits

0x5d14,	// (0x00035d86) popup_fast_swap_wide_window

0x5e1a,	// (0x00035e8c) touch_pane_ParamLimits

0x5e1a,	// (0x00035e8c) touch_pane

0x2744,	// (0x000327b6) button_value_adjust_pane_cp2

0x473e,	// (0x000347b0) button_value_adjust_pane_cp4

0x4746,	// (0x000347b8) form_field_data_pane_cp2

0x6830,	// (0x000368a2) form_field_data_wide_pane_cp2

0x2a3f,	// (0x00032ab1) bg_scroll_pane_ParamLimits

0x6d35,	// (0x00036da7) scroll_handle_pane_ParamLimits

0x6d49,	// (0x00036dbb) scroll_sc2_down_pane_ParamLimits

0x6d49,	// (0x00036dbb) scroll_sc2_down_pane

0x2a70,	// (0x00032ae2) scroll_sc2_up_pane_ParamLimits

0x2a70,	// (0x00032ae2) scroll_sc2_up_pane

0xbe70,	// (0x0003bee2) grid_wheel_folder_pane_g1_ParamLimits

0xbe70,	// (0x0003bee2) grid_wheel_folder_pane_g1

0x722a,	// (0x0003729c) clock_nsta_pane_cp2_ParamLimits

0x722a,	// (0x0003729c) clock_nsta_pane_cp2

0x94cc,	// (0x0003953e) listscroll_midp_pane_ParamLimits

0x94d8,	// (0x0003954a) midp_canvas_pane

0x97bc,	// (0x0003982e) nsta_clock_indic_pane

0x97f0,	// (0x00039862) listscroll_form_pane_vc

0x97f8,	// (0x0003986a) listscroll_set_pane_vc_ParamLimits

0x97f8,	// (0x0003986a) listscroll_set_pane_vc

0x98fd,	// (0x0003996f) clock_nsta_pane

0x9978,	// (0x000399ea) indicator_nsta_pane

0x9c55,	// (0x00039cc7) bg_popup_sub_pane_cp2_ParamLimits

0x9c69,	// (0x00039cdb) find_pane_cp2_ParamLimits

0x9c69,	// (0x00039cdb) find_pane_cp2

0x9c7f,	// (0x00039cf1) grid_toobar_pane_ParamLimits

0x9d5f,	// (0x00039dd1) list_form_gen_pane_vc_ParamLimits

0x9d5f,	// (0x00039dd1) list_form_gen_pane_vc

0x9d75,	// (0x00039de7) scroll_pane_cp8_vc_ParamLimits

0x9d75,	// (0x00039de7) scroll_pane_cp8_vc

0x9df1,	// (0x00039e63) data_form_wide_pane_vc_ParamLimits

0x9df1,	// (0x00039e63) data_form_wide_pane_vc

0x9dfd,	// (0x00039e6f) form_field_data_wide_pane_vc_g1

0x9e05,	// (0x00039e77) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e05,	// (0x00039e77) form_field_data_wide_pane_vc_t1

0x2758,	// (0x000327ca) input_focus_pane_cp6_vc_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_cp6_vc

0xa132,	// (0x0003a1a4) list_midp_pane_ParamLimits

0xa13e,	// (0x0003a1b0) scroll_pane_cp16_ParamLimits

0xa13e,	// (0x0003a1b0) scroll_pane_cp16

0xa194,	// (0x0003a206) button_value_adjust_pane_ParamLimits

0xa194,	// (0x0003a206) button_value_adjust_pane

0xb0d8,	// (0x0003b14a) button_value_adjust_pane_cp6_ParamLimits

0xb0d8,	// (0x0003b14a) button_value_adjust_pane_cp6

0xb1fe,	// (0x0003b270) settings_code_pane_cp_ParamLimits

0xb1fe,	// (0x0003b270) settings_code_pane_cp

0x2340,	// (0x000323b2) cell_touch_pane_g1

0x2340,	// (0x000323b2) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0003f76b) cell_touch_pane_g

0xb7cd,	// (0x0003b83f) cell_touch_pane_cp_ParamLimits

0xb7cd,	// (0x0003b83f) cell_touch_pane_cp

0xb7dd,	// (0x0003b84f) cell_touch_pane_ParamLimits

0xb7dd,	// (0x0003b84f) cell_touch_pane

0x2340,	// (0x000323b2) scroll_sc2_down_pane_g1

0x2340,	// (0x000323b2) scroll_sc2_up_pane_g1

0x234a,	// (0x000323bc) bg_set_opt_pane_cp4_vc

0xb7ef,	// (0x0003b861) list_set_graphic_pane_vc_g1_ParamLimits

0xb7ef,	// (0x0003b861) list_set_graphic_pane_vc_g1

0xb7fb,	// (0x0003b86d) list_set_graphic_pane_vc_g2_ParamLimits

0xb7fb,	// (0x0003b86d) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0003fa62) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0003fa62) list_set_graphic_pane_vc_g

0xb807,	// (0x0003b879) text_primary_small_cp13_vc_ParamLimits

0xb807,	// (0x0003b879) text_primary_small_cp13_vc

0xb81f,	// (0x0003b891) list_set_graphic_pane_vc_ParamLimits

0xb81f,	// (0x0003b891) list_set_graphic_pane_vc

0x234a,	// (0x000323bc) input_focus_pane_cp2_vc

0x2340,	// (0x000323b2) setting_code_pane_vc_g1

0x23bd,	// (0x0003242f) setting_code_pane_vc_t1

0xb832,	// (0x0003b8a4) set_text_pane_vc_t1_ParamLimits

0xb832,	// (0x0003b8a4) set_text_pane_vc_t1

0x234a,	// (0x000323bc) input_focus_pane_cp1_vc

0xb84e,	// (0x0003b8c0) list_set_text_pane_vc

0x2340,	// (0x000323b2) setting_text_pane_vc_g1

0x234a,	// (0x000323bc) bg_set_opt_pane_cp2_vc

0x23b4,	// (0x00032426) setting_slider_graphic_pane_vc_g1

0xb858,	// (0x0003b8ca) setting_slider_graphic_pane_vc_t1

0xb868,	// (0x0003b8da) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0003fa67) setting_slider_graphic_pane_vc_t

0xb878,	// (0x0003b8ea) slider_set_pane_cp_vc

0xb880,	// (0x0003b8f2) slider_set_pane_vc_g1

0xb889,	// (0x0003b8fb) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0003fa6c) slider_set_pane_vc_g

0x27b0,	// (0x00032822) set_opt_bg_pane_g1_copy1

0x27b8,	// (0x0003282a) set_opt_bg_pane_g2_copy1

0xb8b5,	// (0x0003b927) set_opt_bg_pane_g3_copy1

0x27c8,	// (0x0003283a) set_opt_bg_pane_g4_copy1

0x27d0,	// (0x00032842) set_opt_bg_pane_g5_copy1

0x27d8,	// (0x0003284a) set_opt_bg_pane_g6_copy1

0xb8bd,	// (0x0003b92f) set_opt_bg_pane_g7_copy1

0xb8c5,	// (0x0003b937) set_opt_bg_pane_g8_copy1

0xb8cd,	// (0x0003b93f) set_opt_bg_pane_g9_copy1

0x234a,	// (0x000323bc) bg_set_opt_pane_cp_vc

0xb8d5,	// (0x0003b947) setting_slider_pane_vc_t1

0xb8e4,	// (0x0003b956) setting_slider_pane_vc_t2

0xb8f4,	// (0x0003b966) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0003fa7b) setting_slider_pane_vc_t

0xb904,	// (0x0003b976) slider_set_pane_vc

0x7e4b,	// (0x00037ebd) volume_set_pane_vc_g1

0x8260,	// (0x000382d2) volume_set_pane_vc_g2

0x8269,	// (0x000382db) volume_set_pane_vc_g3

0x8272,	// (0x000382e4) volume_set_pane_vc_g4

0x827b,	// (0x000382ed) volume_set_pane_vc_g5

0x8284,	// (0x000382f6) volume_set_pane_vc_g6

0x828d,	// (0x000382ff) volume_set_pane_vc_g7

0x8296,	// (0x00038308) volume_set_pane_vc_g8

0x829f,	// (0x00038311) volume_set_pane_vc_g9

0x82a8,	// (0x0003831a) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0003fa82) volume_set_pane_vc_g

0xb90c,	// (0x0003b97e) volume_set_pane_vc

0xb914,	// (0x0003b986) button_value_adjust_pane_cp1_vc

0xb91e,	// (0x0003b990) list_highlight_pane_cp2_vc

0xb927,	// (0x0003b999) list_set_pane_vc_ParamLimits

0xb927,	// (0x0003b999) list_set_pane_vc

0xb985,	// (0x0003b9f7) main_pane_set_vc_t1_ParamLimits

0xb985,	// (0x0003b9f7) main_pane_set_vc_t1

0xb99a,	// (0x0003ba0c) main_pane_set_vc_t2_ParamLimits

0xb99a,	// (0x0003ba0c) main_pane_set_vc_t2

0xb9ac,	// (0x0003ba1e) main_pane_set_vc_t3_ParamLimits

0xb9ac,	// (0x0003ba1e) main_pane_set_vc_t3

0xb9be,	// (0x0003ba30) main_pane_set_vc_t4_ParamLimits

0xb9be,	// (0x0003ba30) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0003fa97) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0003fa97) main_pane_set_vc_t

0xb9d0,	// (0x0003ba42) setting_code_pane_vc_ParamLimits

0xb9d0,	// (0x0003ba42) setting_code_pane_vc

0xb9df,	// (0x0003ba51) setting_slider_graphic_pane_vc

0xb9df,	// (0x0003ba51) setting_slider_pane_vc

0xb9df,	// (0x0003ba51) setting_text_pane_vc

0xb9df,	// (0x0003ba51) setting_volume_pane_vc

0xb9e7,	// (0x0003ba59) scroll_pane_cp121_vc

0x2732,	// (0x000327a4) set_content_pane_vc

0xb9ef,	// (0x0003ba61) button_value_adjust_pane_g1

0xb9f8,	// (0x0003ba6a) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0003fafa) button_value_adjust_pane_g

0xba01,	// (0x0003ba73) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba01,	// (0x0003ba73) form_field_slider_wide_pane_vc_t1

0xba15,	// (0x0003ba87) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba15,	// (0x0003ba87) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0003faff) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0003faff) form_field_slider_wide_pane_vc_t

0x2398,	// (0x0003240a) input_focus_pane_cp10_vc_ParamLimits

0x2398,	// (0x0003240a) input_focus_pane_cp10_vc

0xba43,	// (0x0003bab5) slider_cont_pane_cp1_vc_ParamLimits

0xba43,	// (0x0003bab5) slider_cont_pane_cp1_vc

0xba55,	// (0x0003bac7) slider_form_pane_g1_cp2

0xb889,	// (0x0003b8fb) slider_form_pane_g2_cp2

0xba82,	// (0x0003baf4) form_field_slider_pane_vc_t3

0xba90,	// (0x0003bb02) form_field_slider_pane_vc_t4

0xba9e,	// (0x0003bb10) slider_form_pane_vc_ParamLimits

0xba9e,	// (0x0003bb10) slider_form_pane_vc

0xbaab,	// (0x0003bb1d) form_field_slider_pane_vc_t1_ParamLimits

0xbaab,	// (0x0003bb1d) form_field_slider_pane_vc_t1

0xba15,	// (0x0003ba87) form_field_slider_pane_vc_t2_ParamLimits

0xba15,	// (0x0003ba87) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003fb11) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003fb11) form_field_slider_pane_vc_t

0x2398,	// (0x0003240a) input_focus_pane_cp9_vc_ParamLimits

0x2398,	// (0x0003240a) input_focus_pane_cp9_vc

0xbac7,	// (0x0003bb39) slider_cont_pane_vc_ParamLimits

0xbac7,	// (0x0003bb39) slider_cont_pane_vc

0xbadb,	// (0x0003bb4d) list_form_graphic_pane_cp_vc_ParamLimits

0xbadb,	// (0x0003bb4d) list_form_graphic_pane_cp_vc

0x9dfd,	// (0x00039e6f) form_field_popup_wide_pane_vc_g1

0xbaf0,	// (0x0003bb62) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaf0,	// (0x0003bb62) form_field_popup_wide_pane_vc_t1

0x2758,	// (0x000327ca) input_focus_pane_cp8_vc_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_cp8_vc

0xbb35,	// (0x0003bba7) list_form_wide_pane_vc_ParamLimits

0xbb35,	// (0x0003bba7) list_form_wide_pane_vc

0xbb41,	// (0x0003bbb3) list_form_graphic_pane_vc_g1

0xbb49,	// (0x0003bbbb) list_form_graphic_pane_vc_t1_ParamLimits

0xbb49,	// (0x0003bbbb) list_form_graphic_pane_vc_t1

0x23a6,	// (0x00032418) list_highlight_pane_cp5_vc_ParamLimits

0x23a6,	// (0x00032418) list_highlight_pane_cp5_vc

0xbb65,	// (0x0003bbd7) list_form_graphic_pane_vc_ParamLimits

0xbb65,	// (0x0003bbd7) list_form_graphic_pane_vc

0x9dfd,	// (0x00039e6f) form_field_popup_pane_vc_g1

0xbb7b,	// (0x0003bbed) form_field_popup_pane_vc_t1_ParamLimits

0xbb7b,	// (0x0003bbed) form_field_popup_pane_vc_t1

0x2758,	// (0x000327ca) input_focus_pane_cp7_vc_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_cp7_vc

0xbb92,	// (0x0003bc04) list_form_pane_vc_ParamLimits

0xbb92,	// (0x0003bc04) list_form_pane_vc

0xbb9e,	// (0x0003bc10) data_form_pane_vc_t1_ParamLimits

0xbb9e,	// (0x0003bc10) data_form_pane_vc_t1

0x27b0,	// (0x00032822) input_focus_pane_vc_g1

0x27b8,	// (0x0003282a) input_focus_pane_vc_g2

0x27c0,	// (0x00032832) input_focus_pane_vc_g3

0x27c8,	// (0x0003283a) input_focus_pane_vc_g4

0x27d0,	// (0x00032842) input_focus_pane_vc_g5

0x27d8,	// (0x0003284a) input_focus_pane_vc_g6

0x27e0,	// (0x00032852) input_focus_pane_vc_g7

0x27e8,	// (0x0003285a) input_focus_pane_vc_g8

0x27f0,	// (0x00032862) input_focus_pane_vc_g9

0x2340,	// (0x000323b2) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0003f6f4) input_focus_pane_vc_g

0x9df1,	// (0x00039e63) data_form_pane_vc_ParamLimits

0x9df1,	// (0x00039e63) data_form_pane_vc

0x9dfd,	// (0x00039e6f) form_field_data_pane_vc_g1

0xbbb9,	// (0x0003bc2b) form_field_data_pane_vc_t1_ParamLimits

0xbbb9,	// (0x0003bc2b) form_field_data_pane_vc_t1

0x2758,	// (0x000327ca) input_focus_pane_vc_ParamLimits

0x2758,	// (0x000327ca) input_focus_pane_vc

0xbbd3,	// (0x0003bc45) button_value_adjust_pane_cp3_vc

0xbbdb,	// (0x0003bc4d) button_value_adjust_pane_cp5_vc

0xbbe3,	// (0x0003bc55) form_field_data_pane_vc_ParamLimits

0xbbe3,	// (0x0003bc55) form_field_data_pane_vc

0xbbfa,	// (0x0003bc6c) form_field_data_pane_vc_cp2

0xbc02,	// (0x0003bc74) form_field_data_wide_pane_vc_ParamLimits

0xbc02,	// (0x0003bc74) form_field_data_wide_pane_vc

0xbc18,	// (0x0003bc8a) form_field_data_wide_pane_vc_cp2

0xbc20,	// (0x0003bc92) form_field_popup_pane_vc_ParamLimits

0xbc20,	// (0x0003bc92) form_field_popup_pane_vc

0xbc37,	// (0x0003bca9) form_field_popup_wide_pane_vc_ParamLimits

0xbc37,	// (0x0003bca9) form_field_popup_wide_pane_vc

0xbc4d,	// (0x0003bcbf) form_field_slider_pane_vc_ParamLimits

0xbc4d,	// (0x0003bcbf) form_field_slider_pane_vc

0xbc60,	// (0x0003bcd2) form_field_slider_wide_pane_vc_ParamLimits

0xbc60,	// (0x0003bcd2) form_field_slider_wide_pane_vc

0xbc73,	// (0x0003bce5) grid_touch_1_pane_ParamLimits

0xbc73,	// (0x0003bce5) grid_touch_1_pane

0xbc7f,	// (0x0003bcf1) grid_touch_2_pane_ParamLimits

0xbc7f,	// (0x0003bcf1) grid_touch_2_pane

0x9787,	// (0x000397f9) touch_pane_g1_ParamLimits

0x9787,	// (0x000397f9) touch_pane_g1

0xbc97,	// (0x0003bd09) cell_app_pane_cp_wide_ParamLimits

0xbc97,	// (0x0003bd09) cell_app_pane_cp_wide

0xbca8,	// (0x0003bd1a) grid_popup_fast_wide_pane_ParamLimits

0xbca8,	// (0x0003bd1a) grid_popup_fast_wide_pane

0xbcbc,	// (0x0003bd2e) scroll_pane_cp19_ParamLimits

0xbcbc,	// (0x0003bd2e) scroll_pane_cp19

0x234a,	// (0x000323bc) bg_popup_window_pane_cp20

0xbcd0,	// (0x0003bd42) listscroll_popup_fast_wide_pane

0x23a6,	// (0x00032418) grid_indicator_nsta_pane

0xbcd8,	// (0x0003bd4a) clock_nsta_pane_g1

0xbce1,	// (0x0003bd53) clock_nsta_pane_t1

0xbcfd,	// (0x0003bd6f) cell_indicator_nsta_pane_ParamLimits

0xbcfd,	// (0x0003bd6f) cell_indicator_nsta_pane

0xbd2e,	// (0x0003bda0) cell_indicator_nsta_pane_g1

0xbd3c,	// (0x0003bdae) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0003fb22) cell_indicator_nsta_pane_g

0xbd49,	// (0x0003bdbb) clock_nsta_pane_cp

0xbd51,	// (0x0003bdc3) indicator_nsta_pane_cp

0xbd59,	// (0x0003bdcb) nsta_clock_indic_pane_g1

0x23e2,	// (0x00032454) grid_indicator_pane

0x6de7,	// (0x00036e59) scroll_pane_cp29

0x7157,	// (0x000371c9) indicator_nsta_pane_cp2_ParamLimits

0x7157,	// (0x000371c9) indicator_nsta_pane_cp2

0x23a6,	// (0x00032418) main_apps_wheel_pane

0xa015,	// (0x0003a087) form_midp_field_text_pane_ParamLimits

0xa15e,	// (0x0003a1d0) scroll_bar_cp050_ParamLimits

0xbda9,	// (0x0003be1b) cell_indicator_pane_ParamLimits

0xbda9,	// (0x0003be1b) cell_indicator_pane

0xbdc2,	// (0x0003be34) cell_indicator_pane_g1

0xbdcc,	// (0x0003be3e) grid_wheel_folder_pane_ParamLimits

0xbdcc,	// (0x0003be3e) grid_wheel_folder_pane

0xbde2,	// (0x0003be54) list_wheel_apps_pane_ParamLimits

0xbde2,	// (0x0003be54) list_wheel_apps_pane

0xbdf3,	// (0x0003be65) main_apps_wheel_pane_g1_ParamLimits

0xbdf3,	// (0x0003be65) main_apps_wheel_pane_g1

0xbe07,	// (0x0003be79) main_apps_wheel_pane_g2_ParamLimits

0xbe07,	// (0x0003be79) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0003fb3e) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0003fb3e) main_apps_wheel_pane_g

0xbe1f,	// (0x0003be91) main_apps_wheel_pane_t1_ParamLimits

0xbe1f,	// (0x0003be91) main_apps_wheel_pane_t1

0xbe42,	// (0x0003beb4) list_wheel_apps_pane_g1

0xbe4a,	// (0x0003bebc) list_wheel_apps_pane_g2

0xbe52,	// (0x0003bec4) list_wheel_apps_pane_g3

0xbe5c,	// (0x0003bece) list_wheel_apps_pane_g4

0xbe66,	// (0x0003bed8) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0003fb43) list_wheel_apps_pane_g

0x7453,	// (0x000374c5) navi_icon_text_pane

0x982c,	// (0x0003989e) aid_fill_nsta

0xbe89,	// (0x0003befb) navi_icon_text_pane_g1

0xbe95,	// (0x0003bf07) navi_icon_text_pane_t1

0x72f6,	// (0x00037368) list_set_graphic_pane_t1_ParamLimits

0x72f6,	// (0x00037368) list_set_graphic_pane_t1

0xa895,	// (0x0003a907) popup_midp_note_alarm_window_t6_ParamLimits

0xa895,	// (0x0003a907) popup_midp_note_alarm_window_t6

0xa8a7,	// (0x0003a919) popup_midp_note_alarm_window_t7_ParamLimits

0xa8a7,	// (0x0003a919) popup_midp_note_alarm_window_t7

0xa8b9,	// (0x0003a92b) popup_midp_note_alarm_window_t8_ParamLimits

0xa8b9,	// (0x0003a92b) popup_midp_note_alarm_window_t8

0xa8cb,	// (0x0003a93d) popup_midp_note_alarm_window_t9_ParamLimits

0xa8cb,	// (0x0003a93d) popup_midp_note_alarm_window_t9

0xa8dd,	// (0x0003a94f) popup_midp_note_alarm_window_t10_ParamLimits

0xa8dd,	// (0x0003a94f) popup_midp_note_alarm_window_t10

0xa8ef,	// (0x0003a961) popup_midp_note_alarm_window_t11_ParamLimits

0xa8ef,	// (0x0003a961) popup_midp_note_alarm_window_t11

0xa901,	// (0x0003a973) scroll_pane_cp17_ParamLimits

0xa901,	// (0x0003a973) scroll_pane_cp17

0x7e4b,	// (0x00037ebd) volume_small_pane_cp_g1

0x82b1,	// (0x00038323) volume_small_pane_cp_g2

0x82ba,	// (0x0003832c) volume_small_pane_cp_g3

0x82c3,	// (0x00038335) volume_small_pane_cp_g4

0x82cc,	// (0x0003833e) volume_small_pane_cp_g5

0x827b,	// (0x000382ed) volume_small_pane_cp_g6

0x82d5,	// (0x00038347) volume_small_pane_cp_g7

0x82de,	// (0x00038350) volume_small_pane_cp_g8

0x82e7,	// (0x00038359) volume_small_pane_cp_g9

0x82f0,	// (0x00038362) volume_small_pane_cp_g10

0x95a5,	// (0x00039617) midp_ticker_pane_g1_ParamLimits

0x95b1,	// (0x00039623) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0003f7c0) midp_ticker_pane_g_ParamLimits

0x95bd,	// (0x0003962f) midp_ticker_pane_t1_ParamLimits

0x9842,	// (0x000398b4) aid_fill_nsta_2

0xa14a,	// (0x0003a1bc) list_form2_midp_pane

0xb249,	// (0x0003b2bb) midp_editing_number_pane_ParamLimits

0xb258,	// (0x0003b2ca) midp_ticker_pane_ParamLimits

0xbea7,	// (0x0003bf19) form2_midp_field_pane

0xbecb,	// (0x0003bf3d) scroll_pane_cp51

0xbeeb,	// (0x0003bf5d) form2_midp_button_pane_ParamLimits

0xbeeb,	// (0x0003bf5d) form2_midp_button_pane

0xbefd,	// (0x0003bf6f) form2_midp_content_pane_ParamLimits

0xbefd,	// (0x0003bf6f) form2_midp_content_pane

0xbf17,	// (0x0003bf89) form2_midp_field_choice_group_pane

0xbf1f,	// (0x0003bf91) form2_midp_field_pane_g1

0xbf27,	// (0x0003bf99) form2_midp_field_pane_g2

0xbf2f,	// (0x0003bfa1) form2_midp_field_pane_g3

0xbf37,	// (0x0003bfa9) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0003fb68) form2_midp_field_pane_g

0xbf3f,	// (0x0003bfb1) form2_midp_gauge_slider_pane

0xbf47,	// (0x0003bfb9) form2_midp_gauge_wait_pane

0xbf4f,	// (0x0003bfc1) form2_midp_image_pane_ParamLimits

0xbf4f,	// (0x0003bfc1) form2_midp_image_pane

0xbf6a,	// (0x0003bfdc) form2_midp_label_pane_ParamLimits

0xbf6a,	// (0x0003bfdc) form2_midp_label_pane

0xbf83,	// (0x0003bff5) form2_midp_label_pane_cp_ParamLimits

0xbf83,	// (0x0003bff5) form2_midp_label_pane_cp

0xbfa4,	// (0x0003c016) form2_midp_string_pane_ParamLimits

0xbfa4,	// (0x0003c016) form2_midp_string_pane

0x4bde,	// (0x00034c50) form2_midp_text_pane_ParamLimits

0x4bde,	// (0x00034c50) form2_midp_text_pane

0xbfb6,	// (0x0003c028) form2_midp_time_pane

0xbfc6,	// (0x0003c038) input_focus_pane_cp51_ParamLimits

0xbfc6,	// (0x0003c038) input_focus_pane_cp51

0xbfde,	// (0x0003c050) form2_midp_label_pane_t1_ParamLimits

0xbfde,	// (0x0003c050) form2_midp_label_pane_t1

0x4bf7,	// (0x00034c69) form2_mdip_text_pane_t1_ParamLimits

0x4bf7,	// (0x00034c69) form2_mdip_text_pane_t1

0x4c15,	// (0x00034c87) form2_midp_time_pane_t1

0xc027,	// (0x0003c099) form2_midp_gauge_slider_pane_t1

0xc039,	// (0x0003c0ab) form2_midp_gauge_slider_pane_t2

0xc04b,	// (0x0003c0bd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0003fb71) form2_midp_gauge_slider_pane_t

0xc05d,	// (0x0003c0cf) form2_midp_slider_pane

0xc069,	// (0x0003c0db) form2_midp_gauge_wait_pane_t1

0xc077,	// (0x0003c0e9) form2_midp_wait_pane_ParamLimits

0xc077,	// (0x0003c0e9) form2_midp_wait_pane

0xc0a2,	// (0x0003c114) list_single_2graphic_pane_cp4_ParamLimits

0xc0a2,	// (0x0003c114) list_single_2graphic_pane_cp4

0x9e66,	// (0x00039ed8) list_single_midp_graphic_pane_cp_ParamLimits

0x9e66,	// (0x00039ed8) list_single_midp_graphic_pane_cp

0x234a,	// (0x000323bc) list_highlight_pane_cp20

0xc0ca,	// (0x0003c13c) list_single_2graphic_pane_g1_cp4

0xb6d3,	// (0x0003b745) list_single_2graphic_pane_g2_cp4

0xc0d2,	// (0x0003c144) list_single_2graphic_pane_t1_cp4

0x23a6,	// (0x00032418) list_highlight_pane_cp21

0xc0e1,	// (0x0003c153) list_single_midp_graphic_pane_g4_cp

0xc0f0,	// (0x0003c162) list_single_midp_graphic_pane_t1_cp

0xc105,	// (0x0003c177) form2_mdip_string_pane_t1_ParamLimits

0xc105,	// (0x0003c177) form2_mdip_string_pane_t1

0x234a,	// (0x000323bc) bg_wml_button_pane_cp2

0x2340,	// (0x000323b2) form2_midp_image_pane_g1

0x4729,	// (0x0003479b) list_double_large_graphic_pane_g5_ParamLimits

0x4729,	// (0x0003479b) list_double_large_graphic_pane_g5

0x94cc,	// (0x0003953e) midp_form_pane_ParamLimits

0x23a6,	// (0x00032418) main_apps_wheel_pane_ParamLimits

0x7ac4,	// (0x00037b36) popup_preview_window_ParamLimits

0x7ac4,	// (0x00037b36) popup_preview_window

0x7c7f,	// (0x00037cf1) popup_touch_info_window_ParamLimits

0x7c7f,	// (0x00037cf1) popup_touch_info_window

0x7c9d,	// (0x00037d0f) popup_touch_menu_window_ParamLimits

0x7c9d,	// (0x00037d0f) popup_touch_menu_window

0x2336,	// (0x000323a8) bg_popup_sub_pane_cp6

0xc206,	// (0x0003c278) list_touch_menu_pane

0xc20e,	// (0x0003c280) list_single_touch_menu_pane_ParamLimits

0xc20e,	// (0x0003c280) list_single_touch_menu_pane

0xc224,	// (0x0003c296) list_single_touch_menu_pane_t1

0x23a6,	// (0x00032418) bg_popup_sub_pane_cp7_ParamLimits

0x23a6,	// (0x00032418) bg_popup_sub_pane_cp7

0xc232,	// (0x0003c2a4) heading_sub_pane

0xc23a,	// (0x0003c2ac) list_touch_info_pane_ParamLimits

0xc23a,	// (0x0003c2ac) list_touch_info_pane

0xc249,	// (0x0003c2bb) list_single_touch_info_pane_ParamLimits

0xc249,	// (0x0003c2bb) list_single_touch_info_pane

0xc25b,	// (0x0003c2cd) list_single_touch_info_pane_t1

0xc269,	// (0x0003c2db) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0003fb7f) list_single_touch_info_pane_t

0x94c4,	// (0x00039536) bg_popup_heading_pane_cp

0xc277,	// (0x0003c2e9) heading_sub_pane_t1

0x9d8b,	// (0x00039dfd) bg_popup_preview_window_pane_cp_ParamLimits

0x9d8b,	// (0x00039dfd) bg_popup_preview_window_pane_cp

0xc232,	// (0x0003c2a4) heading_preview_pane

0xc23a,	// (0x0003c2ac) list_preview_pane_ParamLimits

0xc23a,	// (0x0003c2ac) list_preview_pane

0xc285,	// (0x0003c2f7) popup_preview_window_g1

0xc249,	// (0x0003c2bb) list_single_preview_pane_ParamLimits

0xc249,	// (0x0003c2bb) list_single_preview_pane

0xc28d,	// (0x0003c2ff) list_single_preview_pane_g1

0xc295,	// (0x0003c307) list_single_preview_pane_t1

0xc25b,	// (0x0003c2cd) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0003fb84) list_single_preview_pane_t

0xc2a3,	// (0x0003c315) bg_popup_heading_pane_cp2_ParamLimits

0xc2a3,	// (0x0003c315) bg_popup_heading_pane_cp2

0xc2b9,	// (0x0003c32b) heading_preview_pane_g1

0xc2c1,	// (0x0003c333) heading_preview_pane_t1_ParamLimits

0xc2c1,	// (0x0003c333) heading_preview_pane_t1

0x23f9,	// (0x0003246b) soft_indicator_pane_t1_ParamLimits

0x26d4,	// (0x00032746) scroll_pane_ParamLimits

0x2a67,	// (0x00032ad9) scroll_sc2_left_pane

0x2a5e,	// (0x00032ad0) scroll_sc2_right_pane

0x2a86,	// (0x00032af8) scroll_bg_pane_g1_ParamLimits

0x2a9b,	// (0x00032b0d) scroll_bg_pane_g2_ParamLimits

0x2ab3,	// (0x00032b25) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0003f74b) scroll_bg_pane_g_ParamLimits

0x2a86,	// (0x00032af8) scroll_handle_pane_g1_ParamLimits

0x2ac8,	// (0x00032b3a) scroll_handle_pane_g2_ParamLimits

0x2ab3,	// (0x00032b25) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0003f752) scroll_handle_pane_g_ParamLimits

0x7747,	// (0x000377b9) popup_choice_list_window_ParamLimits

0x7747,	// (0x000377b9) popup_choice_list_window

0x9c61,	// (0x00039cd3) choice_list_pane

0x9ce3,	// (0x00039d55) cell_toolbar_pane_t1

0x9d0b,	// (0x00039d7d) toolbar_button_pane_ParamLimits

0xadbb,	// (0x0003ae2d) ai_gene_pane_1_t2_ParamLimits

0xadbb,	// (0x0003ae2d) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0003f975) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0003f975) ai_gene_pane_1_t

0xc2de,	// (0x0003c350) scroll_sc2_left_pane_g1

0xc2de,	// (0x0003c350) scroll_sc2_right_pane_g1

0x980a,	// (0x0003987c) bg_popup_sub_pane_cp10

0xc2e8,	// (0x0003c35a) list_choice_list_pane

0xc301,	// (0x0003c373) list_single_choice_list_pane_ParamLimits

0xc301,	// (0x0003c373) list_single_choice_list_pane

0xc314,	// (0x0003c386) list_single_choice_list_pane_g1

0x6a8c,	// (0x00036afe) list_single_choice_list_pane_t1_ParamLimits

0x6a8c,	// (0x00036afe) list_single_choice_list_pane_t1

0xc31c,	// (0x0003c38e) choice_list_pane_g1

0xc324,	// (0x0003c396) choice_list_pane_t1

0x2336,	// (0x000323a8) input_focus_pane_cp11

0x29d3,	// (0x00032a45) title_pane_stacon_g2_ParamLimits

0x29d3,	// (0x00032a45) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0003f731) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0003f731) title_pane_stacon_g

0x94c4,	// (0x00039536) cursor_press_pane

0x77ef,	// (0x00037861) popup_fep_hwr_window_ParamLimits

0x77ef,	// (0x00037861) popup_fep_hwr_window

0x7867,	// (0x000378d9) popup_fep_vkb_window_ParamLimits

0x7867,	// (0x000378d9) popup_fep_vkb_window

0xc332,	// (0x0003c3a4) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0003fbad) fep_vkb_side_pane_g_ParamLimits

0x8332,	// (0x000383a4) fep_hwr_candidate_pane_ParamLimits

0x8332,	// (0x000383a4) fep_hwr_candidate_pane

0x835c,	// (0x000383ce) fep_hwr_side_pane_ParamLimits

0x835c,	// (0x000383ce) fep_hwr_side_pane

0x837c,	// (0x000383ee) fep_hwr_top_pane_ParamLimits

0x837c,	// (0x000383ee) fep_hwr_top_pane

0x8394,	// (0x00038406) fep_hwr_write_pane_ParamLimits

0x8394,	// (0x00038406) fep_hwr_write_pane

0xfb3b,	// (0x0003fbad) fep_vkb_side_pane_g

0xc33a,	// (0x0003c3ac) fep_hwr_top_pane_g1

0xc34c,	// (0x0003c3be) fep_hwr_top_pane_g2

0x83ce,	// (0x00038440) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0003fb89) fep_hwr_top_pane_g

0x83e3,	// (0x00038455) fep_hwr_top_text_pane

0x2b8b,	// (0x00032bfd) fep_hwr_top_text_pane_g1

0xc382,	// (0x0003c3f4) fep_hwr_top_text_pane_t1

0x84d9,	// (0x0003854b) fep_hwr_candidate_pane_g1

0xc5c7,	// (0x0003c639) fep_vkb_keypad_pane_g3_ParamLimits

0xc5c7,	// (0x0003c639) fep_vkb_keypad_pane_g3

0xc5ef,	// (0x0003c661) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ef,	// (0x0003c661) fep_vkb_keypad_pane_g4

0xc65e,	// (0x0003c6d0) fep_vkb_bottom_pane_g2_ParamLimits

0xc65e,	// (0x0003c6d0) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0003fbb4) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0003fbb4) fep_vkb_bottom_pane_g

0xc2de,	// (0x0003c350) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0003fbbe) cell_vkb_side_pane_g

0xc6e9,	// (0x0003c75b) cell_vkb_side_pane_t1

0xc6f7,	// (0x0003c769) cell_vkb_side_pane_t1_copy1

0xc2de,	// (0x0003c350) bg_fep_vkb_candidate_pane_g2

0xc823,	// (0x0003c895) cell_vkb_candidate_pane_ParamLimits

0xc390,	// (0x0003c402) aid_size_cell_vkb_ParamLimits

0xc390,	// (0x0003c402) aid_size_cell_vkb

0xc823,	// (0x0003c895) cell_vkb_candidate_pane

0x8500,	// (0x00038572) bg_popup_fep_shadow_pane_g1

0xc41e,	// (0x0003c490) fep_vkb_bottom_pane_ParamLimits

0xc41e,	// (0x0003c490) fep_vkb_bottom_pane

0xc454,	// (0x0003c4c6) fep_vkb_candidate_pane_ParamLimits

0xc454,	// (0x0003c4c6) fep_vkb_candidate_pane

0xc470,	// (0x0003c4e2) fep_vkb_keypad_pane_ParamLimits

0xc470,	// (0x0003c4e2) fep_vkb_keypad_pane

0xc4af,	// (0x0003c521) fep_vkb_side_pane_ParamLimits

0xc4af,	// (0x0003c521) fep_vkb_side_pane

0xc4eb,	// (0x0003c55d) fep_vkb_top_pane_ParamLimits

0xc4eb,	// (0x0003c55d) fep_vkb_top_pane

0xc520,	// (0x0003c592) fep_vkb_top_pane_g1_ParamLimits

0xc520,	// (0x0003c592) fep_vkb_top_pane_g1

0xc52f,	// (0x0003c5a1) fep_vkb_top_pane_g2_ParamLimits

0xc52f,	// (0x0003c5a1) fep_vkb_top_pane_g2

0xc53e,	// (0x0003c5b0) fep_vkb_top_pane_g3_ParamLimits

0xc53e,	// (0x0003c5b0) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0003fba4) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0003fba4) fep_vkb_top_pane_g

0xc55c,	// (0x0003c5ce) fep_vkb_top_text_pane_ParamLimits

0xc55c,	// (0x0003c5ce) fep_vkb_top_text_pane

0xc56d,	// (0x0003c5df) fep_vkb_side_pane_g1_ParamLimits

0xc56d,	// (0x0003c5df) fep_vkb_side_pane_g1

0xc5b6,	// (0x0003c628) grid_vkb_side_pane_ParamLimits

0xc5b6,	// (0x0003c628) grid_vkb_side_pane

0x8508,	// (0x0003857a) bg_popup_fep_shadow_pane_g2

0x8511,	// (0x00038583) bg_popup_fep_shadow_pane_g3

0x8519,	// (0x0003858b) bg_popup_fep_shadow_pane_g4

0x8522,	// (0x00038594) bg_popup_fep_shadow_pane_g5

0x852c,	// (0x0003859e) bg_popup_fep_shadow_pane_g6

0x8534,	// (0x000385a6) bg_popup_fep_shadow_pane_g7

0x27c8,	// (0x0003283a) bg_popup_fep_shadow_pane_g8

0xc60d,	// (0x0003c67f) grid_vkb_keypad_number_pane_ParamLimits

0xc60d,	// (0x0003c67f) grid_vkb_keypad_number_pane

0xc61d,	// (0x0003c68f) grid_vkb_keypad_pane_ParamLimits

0xc61d,	// (0x0003c68f) grid_vkb_keypad_pane

0xc643,	// (0x0003c6b5) fep_vkb_bottom_pane_g1_ParamLimits

0xc643,	// (0x0003c6b5) fep_vkb_bottom_pane_g1

0xc66c,	// (0x0003c6de) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc66c,	// (0x0003c6de) grid_vkb_keypad_bottom_left_pane

0xc681,	// (0x0003c6f3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc681,	// (0x0003c6f3) grid_vkb_keypad_bottom_right_pane

0xc696,	// (0x0003c708) fep_vkb_top_text_pane_g1

0xc6b1,	// (0x0003c723) fep_vkb_top_text_pane_t1

0xc6c6,	// (0x0003c738) cell_vkb_side_pane_ParamLimits

0xc6c6,	// (0x0003c738) cell_vkb_side_pane

0xc2de,	// (0x0003c350) cell_vkb_side_pane_g1

0xc705,	// (0x0003c777) cell_vkb_keypad_pane_ParamLimits

0xc705,	// (0x0003c777) cell_vkb_keypad_pane

0xc77a,	// (0x0003c7ec) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0003fbd1) bg_popup_fep_shadow_pane_g

0x8546,	// (0x000385b8) cell_hwr_side_pane_g1

0x8546,	// (0x000385b8) cell_hwr_side_pane_g2

0xc784,	// (0x0003c7f6) cell_vkb_keypad_pane_t1

0xc792,	// (0x0003c804) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc792,	// (0x0003c804) cell_vkb_keypad_bottom_left_pane

0xc7af,	// (0x0003c821) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7af,	// (0x0003c821) cell_vkb_keypad_bottom_right_pane

0xc2de,	// (0x0003c350) cell_vkb_keypad_bottom_left_pane_g1

0xc2de,	// (0x0003c350) cell_vkb_keypad_bottom_right_pane_g1

0xc7e8,	// (0x0003c85a) cell_vkb_keypad_number_pane_ParamLimits

0xc7e8,	// (0x0003c85a) cell_vkb_keypad_number_pane

0xc807,	// (0x0003c879) cell_vkb_keypad_number_pane_g1

0xc811,	// (0x0003c883) cell_vkb_keypad_number_pane_g2

0xc81a,	// (0x0003c88c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0003fbc3) cell_vkb_keypad_number_pane_g

0xc784,	// (0x0003c7f6) cell_vkb_keypad_number_pane_t1

0xc83e,	// (0x0003c8b0) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0003fbe4) cell_hwr_side_pane_g

0xc857,	// (0x0003c8c9) cell_hwr_side_pane_t1

0x8550,	// (0x000385c2) cell_hwr_side_pane_t1_copy1

0x855e,	// (0x000385d0) cell_hwr_candidate_pane_g1

0x858d,	// (0x000385ff) cell_hwr_candidate_pane_t1

0xc2de,	// (0x0003c350) cell_vkb_candidate_pane_g2

0xc89b,	// (0x0003c90d) cell_vkb_candidate_pane_t1

0x82f9,	// (0x0003836b) bg_popup_fep_shadow_pane_ParamLimits

0x82f9,	// (0x0003836b) bg_popup_fep_shadow_pane

0x83ae,	// (0x00038420) bg_fep_hwr_top_pane_g4

0xc35e,	// (0x0003c3d0) bg_hwr_side_pane_g1_ParamLimits

0xc35e,	// (0x0003c3d0) bg_hwr_side_pane_g1

0x841f,	// (0x00038491) cell_hwr_side_pane_ParamLimits

0x841f,	// (0x00038491) cell_hwr_side_pane

0x845a,	// (0x000384cc) fep_hwr_write_pane_g1_ParamLimits

0x845a,	// (0x000384cc) fep_hwr_write_pane_g1

0x8467,	// (0x000384d9) fep_hwr_write_pane_g2_ParamLimits

0x8467,	// (0x000384d9) fep_hwr_write_pane_g2

0x8474,	// (0x000384e6) fep_hwr_write_pane_g3_ParamLimits

0x8474,	// (0x000384e6) fep_hwr_write_pane_g3

0x8482,	// (0x000384f4) fep_hwr_write_pane_g4_ParamLimits

0x8482,	// (0x000384f4) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0003fb90) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0003fb90) fep_hwr_write_pane_g

0x83ae,	// (0x00038420) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x83ae,	// (0x00038420) bg_fep_hwr_candidate_pane_g2

0x8497,	// (0x00038509) cell_hwr_candidate_pane_ParamLimits

0x8497,	// (0x00038509) cell_hwr_candidate_pane

0x84d9,	// (0x0003854b) fep_hwr_candidate_pane_g1_ParamLimits

0xc3be,	// (0x0003c430) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3be,	// (0x0003c430) bg_popup_fep_shadow_pane_cp2

0xc54e,	// (0x0003c5c0) fep_vkb_top_pane_g4_ParamLimits

0xc54e,	// (0x0003c5c0) fep_vkb_top_pane_g4

0xc594,	// (0x0003c606) fep_vkb_side_pane_g2_ParamLimits

0xc594,	// (0x0003c606) fep_vkb_side_pane_g2

0x672d,	// (0x0003679f) list_setting_pane_t4_ParamLimits

0x672d,	// (0x0003679f) list_setting_pane_t4

0x67bf,	// (0x00036831) list_setting_number_pane_t5_ParamLimits

0x67bf,	// (0x00036831) list_setting_number_pane_t5

0x6e16,	// (0x00036e88) list_double_heading_pane_cp2_ParamLimits

0x6e16,	// (0x00036e88) list_double_heading_pane_cp2

0xc8a9,	// (0x0003c91b) list_double_heading_pane_g1_cp2_ParamLimits

0xc8a9,	// (0x0003c91b) list_double_heading_pane_g1_cp2

0xc8b5,	// (0x0003c927) list_double_heading_pane_g2_cp2_ParamLimits

0xc8b5,	// (0x0003c927) list_double_heading_pane_g2_cp2

0xc8c9,	// (0x0003c93b) list_double_heading_pane_t1_cp2_ParamLimits

0xc8c9,	// (0x0003c93b) list_double_heading_pane_t1_cp2

0xc8df,	// (0x0003c951) list_double_heading_pane_t2_cp2_ParamLimits

0xc8df,	// (0x0003c951) list_double_heading_pane_t2_cp2

0x232e,	// (0x000323a0) aid_value_unit2

0x5d60,	// (0x00035dd2) popup_preview_fixed_window

0x24d0,	// (0x00032542) bg_popup_preview_window_pane_cp02

0xc8f1,	// (0x0003c963) list_preview_fixed_pane

0xc937,	// (0x0003c9a9) list_empty_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_empty_pane_fp

0xc937,	// (0x0003c9a9) list_single_cale_day_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_single_cale_day_pane_fp

0xc937,	// (0x0003c9a9) list_single_graphic_heading_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_single_graphic_heading_pane_fp

0xc937,	// (0x0003c9a9) list_single_graphic_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_single_graphic_pane_fp

0xc937,	// (0x0003c9a9) list_single_heading_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_single_heading_pane_fp

0xc937,	// (0x0003c9a9) list_single_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_single_pane_fp

0xc94d,	// (0x0003c9bf) list_single_pane_fp_g1_ParamLimits

0xc94d,	// (0x0003c9bf) list_single_pane_fp_g1

0x4c28,	// (0x00034c9a) list_single_pane_fp_g2_ParamLimits

0x4c28,	// (0x00034c9a) list_single_pane_fp_g2

0x4c34,	// (0x00034ca6) list_single_pane_fp_g3_ParamLimits

0x4c34,	// (0x00034ca6) list_single_pane_fp_g3

0xc959,	// (0x0003c9cb) list_single_pane_fp_g4_ParamLimits

0xc959,	// (0x0003c9cb) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0003fbf7) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0003fbf7) list_single_pane_fp_g

0x4c48,	// (0x00034cba) list_single_pane_fp_t1_ParamLimits

0x4c48,	// (0x00034cba) list_single_pane_fp_t1

0x4c5f,	// (0x00034cd1) list_single_graphic_pane_fp_g1_ParamLimits

0x4c5f,	// (0x00034cd1) list_single_graphic_pane_fp_g1

0xc94d,	// (0x0003c9bf) list_single_graphic_pane_fp_g2_ParamLimits

0xc94d,	// (0x0003c9bf) list_single_graphic_pane_fp_g2

0x4c28,	// (0x00034c9a) list_single_graphic_pane_fp_g3_ParamLimits

0x4c28,	// (0x00034c9a) list_single_graphic_pane_fp_g3

0x4c34,	// (0x00034ca6) list_single_graphic_pane_fp_g4_ParamLimits

0x4c34,	// (0x00034ca6) list_single_graphic_pane_fp_g4

0xc959,	// (0x0003c9cb) list_single_graphic_pane_fp_g5_ParamLimits

0xc959,	// (0x0003c9cb) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003fc00) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003fc00) list_single_graphic_pane_fp_g

0x4c6b,	// (0x00034cdd) list_single_graphic_pane_fp_t1_ParamLimits

0x4c6b,	// (0x00034cdd) list_single_graphic_pane_fp_t1

0x4c5f,	// (0x00034cd1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c5f,	// (0x00034cd1) list_single_graphic_heading_pane_fp_g1

0xc94d,	// (0x0003c9bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x0003c9bf) list_single_graphic_heading_pane_fp_g2

0x4c28,	// (0x00034c9a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4c28,	// (0x00034c9a) list_single_graphic_heading_pane_fp_g3

0x4c34,	// (0x00034ca6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c34,	// (0x00034ca6) list_single_graphic_heading_pane_fp_g4

0xc959,	// (0x0003c9cb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc959,	// (0x0003c9cb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003fc00) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003fc00) list_single_graphic_heading_pane_fp_g

0x4c81,	// (0x00034cf3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c81,	// (0x00034cf3) list_single_graphic_heading_pane_fp_t1

0x4c97,	// (0x00034d09) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c97,	// (0x00034d09) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0003fc0b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0003fc0b) list_single_graphic_heading_pane_fp_t

0x4ca9,	// (0x00034d1b) list_single_cale_day_pane_fp_g1_ParamLimits

0x4ca9,	// (0x00034d1b) list_single_cale_day_pane_fp_g1

0xc965,	// (0x0003c9d7) list_single_cale_day_pane_fp_g2_ParamLimits

0xc965,	// (0x0003c9d7) list_single_cale_day_pane_fp_g2

0x4ce1,	// (0x00034d53) list_single_cale_day_pane_fp_g3_ParamLimits

0x4ce1,	// (0x00034d53) list_single_cale_day_pane_fp_g3

0x4d09,	// (0x00034d7b) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d09,	// (0x00034d7b) list_single_cale_day_pane_fp_g4

0x4d2d,	// (0x00034d9f) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d2d,	// (0x00034d9f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0003fc10) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0003fc10) list_single_cale_day_pane_fp_g

0x4d51,	// (0x00034dc3) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d51,	// (0x00034dc3) list_single_cale_day_pane_fp_t1

0x4d77,	// (0x00034de9) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d77,	// (0x00034de9) list_single_cale_day_pane_fp_t2

0x4d90,	// (0x00034e02) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d90,	// (0x00034e02) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0003fc1b) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0003fc1b) list_single_cale_day_pane_fp_t

0xc94d,	// (0x0003c9bf) list_empty_pane_fp_g1_ParamLimits

0xc94d,	// (0x0003c9bf) list_empty_pane_fp_g1

0x4da9,	// (0x00034e1b) list_empty_pane_fp_t1

0x4db7,	// (0x00034e29) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0003fc22) list_empty_pane_fp_t

0xc94d,	// (0x0003c9bf) list_single_heading_pane_fp_g1_ParamLimits

0xc94d,	// (0x0003c9bf) list_single_heading_pane_fp_g1

0x4c28,	// (0x00034c9a) list_single_heading_pane_fp_g2_ParamLimits

0x4c28,	// (0x00034c9a) list_single_heading_pane_fp_g2

0x4c34,	// (0x00034ca6) list_single_heading_pane_fp_g3_ParamLimits

0x4c34,	// (0x00034ca6) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0003fc27) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0003fc27) list_single_heading_pane_fp_g

0x4dc5,	// (0x00034e37) list_single_heading_pane_fp_t1_ParamLimits

0x4dc5,	// (0x00034e37) list_single_heading_pane_fp_t1

0x4dd7,	// (0x00034e49) list_single_heading_pane_fp_t2_ParamLimits

0x4dd7,	// (0x00034e49) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003fc2e) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003fc2e) list_single_heading_pane_fp_t

0x6ae4,	// (0x00036b56) aid_size_cell_fast

0x24b3,	// (0x00032525) soft_indicator_pane_cp1_t1

0x6aed,	// (0x00036b5f) cell_app_pane_cp2_ParamLimits

0x6aed,	// (0x00036b5f) cell_app_pane_cp2

0x831b,	// (0x0003838d) fep_hwr_candidate_drop_down_list_pane

0x84f3,	// (0x00038565) fep_hwr_candidate_pane_g3_ParamLimits

0x84f3,	// (0x00038565) fep_hwr_candidate_pane_g3

0x3f29,	// (0x00033f9b) fep_hwr_candidate_pane_g4_ParamLimits

0x3f29,	// (0x00033f9b) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0003fb9d) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0003fb9d) fep_hwr_candidate_pane_g

0xc443,	// (0x0003c4b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc443,	// (0x0003c4b5) fep_vkb_candidate_drop_down_list_pane

0xc846,	// (0x0003c8b8) fep_vkb_candidate_pane_g3

0xc84e,	// (0x0003c8c0) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0003fbca) fep_vkb_candidate_pane_g

0x855e,	// (0x000385d0) cell_hwr_candidate_pane_g1_ParamLimits

0x856c,	// (0x000385de) cell_hwr_candidate_pane_g3_ParamLimits

0x856c,	// (0x000385de) cell_hwr_candidate_pane_g3

0xd055,	// (0x0003d0c7) cell_hwr_candidate_pane_g4_ParamLimits

0xd055,	// (0x0003d0c7) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0003fbe9) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0003fbe9) cell_hwr_candidate_pane_g

0xc865,	// (0x0003c8d7) cell_vkb_candidate_pane_g3_ParamLimits

0xc865,	// (0x0003c8d7) cell_vkb_candidate_pane_g3

0xc880,	// (0x0003c8f2) cell_vkb_candidate_pane_g4_ParamLimits

0xc880,	// (0x0003c8f2) cell_vkb_candidate_pane_g4

0xc971,	// (0x0003c9e3) cell_app_pane_cp2_g1_ParamLimits

0xc971,	// (0x0003c9e3) cell_app_pane_cp2_g1

0xc98f,	// (0x0003ca01) cell_app_pane_cp2_g2_ParamLimits

0xc98f,	// (0x0003ca01) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0003fc33) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0003fc33) cell_app_pane_cp2_g

0xc99b,	// (0x0003ca0d) cell_app_pane_cp2_t1_ParamLimits

0xc99b,	// (0x0003ca0d) cell_app_pane_cp2_t1

0x2758,	// (0x000327ca) grid_highlight_pane_cp1_ParamLimits

0x2758,	// (0x000327ca) grid_highlight_pane_cp1

0x85ab,	// (0x0003861d) cell_hwr_candidate_pane_cp1_ParamLimits

0x85ab,	// (0x0003861d) cell_hwr_candidate_pane_cp1

0x855e,	// (0x000385d0) fep_hwr_candidate_drop_down_list_pane_g1

0x85ca,	// (0x0003863c) fep_hwr_candidate_drop_down_list_pane_g2

0x85d7,	// (0x00038649) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003fc38) fep_hwr_candidate_drop_down_list_pane_g

0x85e4,	// (0x00038656) fep_hwr_candidate_drop_down_list_scroll_pane

0x85ed,	// (0x0003865f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x85ed,	// (0x0003865f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x85fa,	// (0x0003866c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x85fa,	// (0x0003866c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8607,	// (0x00038679) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8607,	// (0x00038679) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8614,	// (0x00038686) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8614,	// (0x00038686) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x862f,	// (0x000386a1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x862f,	// (0x000386a1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x864a,	// (0x000386bc) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x864a,	// (0x000386bc) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8665,	// (0x000386d7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8665,	// (0x000386d7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8680,	// (0x000386f2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8680,	// (0x000386f2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0003fc3f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0003fc3f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9ad,	// (0x0003ca1f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9ad,	// (0x0003ca1f) cell_vkb_candidate_pane_cp1

0xc54e,	// (0x0003c5c0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc54e,	// (0x0003c5c0) fep_vkb_candidate_drop_down_list_pane_g1

0xc9cd,	// (0x0003ca3f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9cd,	// (0x0003ca3f) fep_vkb_candidate_drop_down_list_pane_g2

0xc9da,	// (0x0003ca4c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9da,	// (0x0003ca4c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0003fc50) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0003fc50) fep_vkb_candidate_drop_down_list_pane_g

0xc9e7,	// (0x0003ca59) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9e7,	// (0x0003ca59) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f4,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f4,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca01,	// (0x0003ca73) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca01,	// (0x0003ca73) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca0d,	// (0x0003ca7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca0d,	// (0x0003ca7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca19,	// (0x0003ca8b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca19,	// (0x0003ca8b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca3a,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca3a,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca5b,	// (0x0003cacd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca5b,	// (0x0003cacd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca7c,	// (0x0003caee) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca7c,	// (0x0003caee) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca9d,	// (0x0003cb0f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca9d,	// (0x0003cb0f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003fc57) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003fc57) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5e7a,	// (0x00035eec) title_pane_g1_ParamLimits

0x5e87,	// (0x00035ef9) title_pane_g2_ParamLimits

0xf54e,	// (0x0003f5c0) title_pane_g_ParamLimits

0x2b83,	// (0x00032bf5) aid_call2_pane

0x2b7b,	// (0x00032bed) aid_call_pane

0x2b8b,	// (0x00032bfd) popup_clock_analogue_window_g1

0x2b8b,	// (0x00032bfd) popup_clock_analogue_window_g2

0x6df7,	// (0x00036e69) popup_clock_analogue_window_g3

0x6e00,	// (0x00036e72) popup_clock_analogue_window_g4

0x2340,	// (0x000323b2) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0003f760) popup_clock_analogue_window_g

0x6e08,	// (0x00036e7a) popup_clock_analogue_window_t1

0x6e40,	// (0x00036eb2) clock_digital_number_pane_ParamLimits

0x6e40,	// (0x00036eb2) clock_digital_number_pane

0x6e4c,	// (0x00036ebe) clock_digital_number_pane_cp02_ParamLimits

0x6e4c,	// (0x00036ebe) clock_digital_number_pane_cp02

0x6e58,	// (0x00036eca) clock_digital_number_pane_cp03_ParamLimits

0x6e58,	// (0x00036eca) clock_digital_number_pane_cp03

0x6e64,	// (0x00036ed6) clock_digital_number_pane_cp04_ParamLimits

0x6e64,	// (0x00036ed6) clock_digital_number_pane_cp04

0x6e70,	// (0x00036ee2) clock_digital_separator_pane_ParamLimits

0x6e70,	// (0x00036ee2) clock_digital_separator_pane

0x6e7c,	// (0x00036eee) popup_clock_digital_window_t1_ParamLimits

0x6e7c,	// (0x00036eee) popup_clock_digital_window_t1

0x2340,	// (0x000323b2) clock_digital_number_pane_g1

0x2340,	// (0x000323b2) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0003f76b) clock_digital_number_pane_g

0x2340,	// (0x000323b2) clock_digital_separator_pane_g1

0x2340,	// (0x000323b2) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0003f76b) clock_digital_separator_pane_g

0x982c,	// (0x0003989e) aid_fill_nsta_ParamLimits

0x9978,	// (0x000399ea) indicator_nsta_pane_ParamLimits

0x9af1,	// (0x00039b63) popup_clock_analogue_window

0x9af1,	// (0x00039b63) popup_clock_digital_window

0x23a6,	// (0x00032418) grid_indicator_nsta_pane_ParamLimits

0xbcef,	// (0x0003bd61) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0003fb1d) clock_nsta_pane_t

0x6d22,	// (0x00036d94) aid_size_max_handle

0x6d2c,	// (0x00036d9e) aid_size_min_handle

0x94c4,	// (0x00039536) editor_scroll_pane

0xcab8,	// (0x0003cb2a) ex_editor_pane

0x2877,	// (0x000328e9) scroll_pane_cp13

0x2700,	// (0x00032772) scroll_pane_cp14

0x2bba,	// (0x00032c2c) scroll_pane_cp36

0x6e2a,	// (0x00036e9c) list_single_graphic_hl_pane_cp2_ParamLimits

0x6e2a,	// (0x00036e9c) list_single_graphic_hl_pane_cp2

0xb2c6,	// (0x0003b338) list_single_graphic_hl_pane_ParamLimits

0xb2c6,	// (0x0003b338) list_single_graphic_hl_pane

0x869b,	// (0x0003870d) aid_size_min_hl_cp1

0xcac0,	// (0x0003cb32) list_highlight_pane_cp34_ParamLimits

0xcac0,	// (0x0003cb32) list_highlight_pane_cp34

0xcad1,	// (0x0003cb43) list_single_graphic_hl_pane_g1_ParamLimits

0xcad1,	// (0x0003cb43) list_single_graphic_hl_pane_g1

0x86a4,	// (0x00038716) list_single_graphic_hl_pane_g2_ParamLimits

0x86a4,	// (0x00038716) list_single_graphic_hl_pane_g2

0x86a4,	// (0x00038716) list_single_graphic_hl_pane_g3_ParamLimits

0x86a4,	// (0x00038716) list_single_graphic_hl_pane_g3

0x86b0,	// (0x00038722) list_single_graphic_hl_pane_g4_ParamLimits

0x86b0,	// (0x00038722) list_single_graphic_hl_pane_g4

0x86bc,	// (0x0003872e) list_single_graphic_hl_pane_g5_ParamLimits

0x86bc,	// (0x0003872e) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003fc68) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003fc68) list_single_graphic_hl_pane_g

0x86d0,	// (0x00038742) list_single_graphic_hl_pane_t1_ParamLimits

0x86d0,	// (0x00038742) list_single_graphic_hl_pane_t1

0xcade,	// (0x0003cb50) aid_size_min_hl_cp2

0xcae7,	// (0x0003cb59) list_highlight_pane_cp34_cp2_ParamLimits

0xcae7,	// (0x0003cb59) list_highlight_pane_cp34_cp2

0xcad1,	// (0x0003cb43) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcad1,	// (0x0003cb43) list_single_graphic_hl_pane_g1_cp2

0xcaf4,	// (0x0003cb66) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcaf4,	// (0x0003cb66) list_single_graphic_hl_pane_g2_cp2

0xcb00,	// (0x0003cb72) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb00,	// (0x0003cb72) list_single_graphic_hl_pane_g3_cp2

0x93fd,	// (0x0003946f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x93fd,	// (0x0003946f) list_single_graphic_hl_pane_g4_cp2

0xcb0e,	// (0x0003cb80) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb0e,	// (0x0003cb80) list_single_graphic_hl_pane_g5_cp2

0x7603,	// (0x00037675) control_pane_g4_ParamLimits

0x7603,	// (0x00037675) control_pane_g4

0x980a,	// (0x0003987c) bg_popup_sub_pane_cp10_ParamLimits

0xc2e8,	// (0x0003c35a) list_choice_list_pane_ParamLimits

0xc2f7,	// (0x0003c369) scroll_pane_cp23

0x24d0,	// (0x00032542) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f1,	// (0x0003c963) list_preview_fixed_pane_ParamLimits

0xc907,	// (0x0003c979) list_preview_fixed_pane_cp_ParamLimits

0xc907,	// (0x0003c979) list_preview_fixed_pane_cp

0xc913,	// (0x0003c985) popup_preview_fixed_window_g1_ParamLimits

0xc913,	// (0x0003c985) popup_preview_fixed_window_g1

0xc91f,	// (0x0003c991) popup_preview_fixed_window_g2_ParamLimits

0xc91f,	// (0x0003c991) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0003fbf0) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0003fbf0) popup_preview_fixed_window_g

0x6bfc,	// (0x00036c6e) aid_navi_side_left_pane_ParamLimits

0x6c11,	// (0x00036c83) aid_navi_side_right_pane_ParamLimits

0x6c29,	// (0x00036c9b) navi_icon_pane_stacon_ParamLimits

0x6c3d,	// (0x00036caf) navi_navi_pane_stacon_ParamLimits

0x6c29,	// (0x00036c9b) navi_text_pane_stacon_ParamLimits

0x5c2f,	// (0x00035ca1) main_text_info_pane

0xcb38,	// (0x0003cbaa) listscroll_text_info_pane

0xcb40,	// (0x0003cbb2) list_text_info_pane_ParamLimits

0xcb40,	// (0x0003cbb2) list_text_info_pane

0xcb4f,	// (0x0003cbc1) scroll_pane_cp24_ParamLimits

0xcb4f,	// (0x0003cbc1) scroll_pane_cp24

0xcb6d,	// (0x0003cbdf) list_text_info_pane_t1_ParamLimits

0xcb6d,	// (0x0003cbdf) list_text_info_pane_t1

0x7763,	// (0x000377d5) popup_fast_swap2_window_ParamLimits

0x7763,	// (0x000377d5) popup_fast_swap2_window

0xcba1,	// (0x0003cc13) aid_size_cell_fast2

0x2336,	// (0x000323a8) bg_popup_window_pane_cp17

0xa17e,	// (0x0003a1f0) heading_pane_cp2

0x2604,	// (0x00032676) listscroll_fast2_pane

0xcbab,	// (0x0003cc1d) grid_fast2_pane

0xcbb5,	// (0x0003cc27) listscroll_fast2_pane_g1

0xcbbd,	// (0x0003cc2f) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003fc73) listscroll_fast2_pane_g

0x2877,	// (0x000328e9) scroll_pane_cp26

0xcbc7,	// (0x0003cc39) cell_fast2_pane_ParamLimits

0xcbc7,	// (0x0003cc39) cell_fast2_pane

0xcbdc,	// (0x0003cc4e) cell_fast2_pane_g1

0xcbe5,	// (0x0003cc57) cell_fast2_pane_g2

0xcbee,	// (0x0003cc60) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003fc78) cell_fast2_pane_g

0x2637,	// (0x000326a9) grid_highlight_pane_cp9

0x772b,	// (0x0003779d) main_eswt_pane_ParamLimits

0x772b,	// (0x0003779d) main_eswt_pane

0xcb64,	// (0x0003cbd6) list_single_text_info_pane

0xcbf6,	// (0x0003cc68) eswt_ctrl_button_pane

0xcbf6,	// (0x0003cc68) eswt_ctrl_canvas_pane

0xcbfe,	// (0x0003cc70) eswt_ctrl_combo_pane

0xcbf6,	// (0x0003cc68) eswt_ctrl_default_pane

0xcbf6,	// (0x0003cc68) eswt_ctrl_label_pane

0xcc06,	// (0x0003cc78) eswt_ctrl_wait_pane

0xcc0e,	// (0x0003cc80) eswt_shell_pane

0x2336,	// (0x000323a8) listscroll_eswt_app_pane

0xcc2e,	// (0x0003cca0) popup_eswt_tasktip_window_ParamLimits

0xcc2e,	// (0x0003cca0) popup_eswt_tasktip_window

0x9d8b,	// (0x00039dfd) bg_popup_window_pane_cp18

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_ParamLimits

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_ParamLimits

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_ParamLimits

0xcc59,	// (0x0003cccb) eswt_control_pane_g3

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_ParamLimits

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003fc7f) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003fc7f) eswt_control_pane_g

0x2758,	// (0x000327ca) bg_button_pane_ParamLimits

0x2758,	// (0x000327ca) bg_button_pane

0x264c,	// (0x000326be) common_borders_pane_copy2_ParamLimits

0x264c,	// (0x000326be) common_borders_pane_copy2

0xcc73,	// (0x0003cce5) control_button_pane_g1_ParamLimits

0xcc73,	// (0x0003cce5) control_button_pane_g1

0xcc7f,	// (0x0003ccf1) control_button_pane_g2_ParamLimits

0xcc7f,	// (0x0003ccf1) control_button_pane_g2

0xcc8b,	// (0x0003ccfd) control_button_pane_g3_ParamLimits

0xcc8b,	// (0x0003ccfd) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003fc88) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003fc88) control_button_pane_g

0xcc9f,	// (0x0003cd11) control_button_pane_t1

0xccad,	// (0x0003cd1f) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003fc8f) control_button_pane_t

0x9d17,	// (0x00039d89) bg_button_pane_g1

0x9d27,	// (0x00039d99) bg_button_pane_g2

0x9d1f,	// (0x00039d91) bg_button_pane_g3

0x9d37,	// (0x00039da9) bg_button_pane_g4

0x9d2f,	// (0x00039da1) bg_button_pane_g5

0x9d3f,	// (0x00039db1) bg_button_pane_g6

0x9d47,	// (0x00039db9) bg_button_pane_g7

0x9d57,	// (0x00039dc9) bg_button_pane_g8

0x9d4f,	// (0x00039dc1) bg_button_pane_g9

0x0008,

0xf857,	// (0x0003f8c9) bg_button_pane_g

0xc2a3,	// (0x0003c315) common_borders_pane_ParamLimits

0xc2a3,	// (0x0003c315) common_borders_pane

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy1_ParamLimits

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy1

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy1_ParamLimits

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy1

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy1_ParamLimits

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy1

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy1_ParamLimits

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy1

0xc2de,	// (0x0003c350) bg_eswt_ctrl_canvas_pane_g1

0xc2a3,	// (0x0003c315) common_borders_pane_cp2_ParamLimits

0xc2a3,	// (0x0003c315) common_borders_pane_cp2

0xc2a3,	// (0x0003c315) common_borders_pane_cp3_ParamLimits

0xc2a3,	// (0x0003c315) common_borders_pane_cp3

0xccbb,	// (0x0003cd2d) separator_horizontal_pane

0xccc3,	// (0x0003cd35) separator_vertical_pane

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy2_ParamLimits

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy2

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy2_ParamLimits

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy2

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy2_ParamLimits

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy2

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy2_ParamLimits

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy2

0x2336,	// (0x000323a8) common_borders_pane_cp4

0xcccc,	// (0x0003cd3e) separator_horizontal_pane_g1

0xccd5,	// (0x0003cd47) separator_horizontal_pane_g2

0xccde,	// (0x0003cd50) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003fc94) separator_horizontal_pane_g

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy3_ParamLimits

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy3

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy3_ParamLimits

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy3

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy3_ParamLimits

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy3

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy3_ParamLimits

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy3

0x2336,	// (0x000323a8) common_borders_pane_cp5

0xcce7,	// (0x0003cd59) separator_vertical_pane_g1

0xccf0,	// (0x0003cd62) separator_vertical_pane_g2

0xccf9,	// (0x0003cd6b) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003fc9b) separator_vertical_pane_g

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy4_ParamLimits

0xcc3f,	// (0x0003ccb1) eswt_control_pane_g1_copy4

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy4_ParamLimits

0xcc4c,	// (0x0003ccbe) eswt_control_pane_g2_copy4

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy4_ParamLimits

0xcc59,	// (0x0003cccb) eswt_control_pane_g3_copy4

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy4_ParamLimits

0xcc66,	// (0x0003ccd8) eswt_control_pane_g4_copy4

0xcd02,	// (0x0003cd74) eswt_ctrl_combo_button_pane

0xcd0a,	// (0x0003cd7c) eswt_ctrl_input_pane

0xcd12,	// (0x0003cd84) popup_choice_list_window_cp70

0xcd1a,	// (0x0003cd8c) eswt_ctrl_input_pane_t1

0x2336,	// (0x000323a8) input_focus_pane_cp70

0xc2a3,	// (0x0003c315) bg_button_pane_cp70_ParamLimits

0xc2a3,	// (0x0003c315) bg_button_pane_cp70

0xcd28,	// (0x0003cd9a) eswt_ctrl_combo_button_pane_g1

0xcd30,	// (0x0003cda2) wait_bar_pane_cp70

0x9d8b,	// (0x00039dfd) bg_popup_window_pane_cp70_ParamLimits

0x9d8b,	// (0x00039dfd) bg_popup_window_pane_cp70

0xcd38,	// (0x0003cdaa) popup_eswt_tasktip_window_t1

0xcd4e,	// (0x0003cdc0) wait_bar_pane_cp71_ParamLimits

0xcd4e,	// (0x0003cdc0) wait_bar_pane_cp71

0xcd5a,	// (0x0003cdcc) grid_eswt_app_pane

0x2a67,	// (0x00032ad9) scroll_pane_cp70

0xcd63,	// (0x0003cdd5) cell_eswt_app_pane_ParamLimits

0xcd63,	// (0x0003cdd5) cell_eswt_app_pane

0xcd93,	// (0x0003ce05) cell_eswt_app_pane_g1_ParamLimits

0xcd93,	// (0x0003ce05) cell_eswt_app_pane_g1

0xcdc2,	// (0x0003ce34) cell_eswt_app_pane_g2_ParamLimits

0xcdc2,	// (0x0003ce34) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003fca2) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003fca2) cell_eswt_app_pane_g

0xcde6,	// (0x0003ce58) cell_eswt_app_pane_t1_ParamLimits

0xcde6,	// (0x0003ce58) cell_eswt_app_pane_t1

0xce18,	// (0x0003ce8a) grid_highlight_pane_cp70_ParamLimits

0xce18,	// (0x0003ce8a) grid_highlight_pane_cp70

0x74a8,	// (0x0003751a) set_content_pane_g1

0x976b,	// (0x000397dd) status_small_volume_pane

0x86e6,	// (0x00038758) status_small_volume_pane_g1

0x86ee,	// (0x00038760) volume_small2_pane

0x86f7,	// (0x00038769) volume_small2_pane_g1

0x8700,	// (0x00038772) volume_small2_pane_g2

0x8709,	// (0x0003877b) volume_small2_pane_g3

0x8712,	// (0x00038784) volume_small2_pane_g4

0x871b,	// (0x0003878d) volume_small2_pane_g5

0x8724,	// (0x00038796) volume_small2_pane_g6

0x872d,	// (0x0003879f) volume_small2_pane_g7

0x8736,	// (0x000387a8) volume_small2_pane_g8

0x873f,	// (0x000387b1) volume_small2_pane_g9

0x8748,	// (0x000387ba) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003fca7) volume_small2_pane_g

0xc696,	// (0x0003c708) fep_vkb_top_text_pane_g1_ParamLimits

0xc6b1,	// (0x0003c723) fep_vkb_top_text_pane_t1_ParamLimits

0xc92b,	// (0x0003c99d) popup_preview_fixed_window_g3_ParamLimits

0xc92b,	// (0x0003c99d) popup_preview_fixed_window_g3

0x7c12,	// (0x00037c84) popup_toolbar_trans_pane

0xb0b5,	// (0x0003b127) aid_height_set_list_ParamLimits

0xb0c6,	// (0x0003b138) aid_size_parent_ParamLimits

0x980a,	// (0x0003987c) list_highlight_pane_cp2_ParamLimits

0x74a8,	// (0x0003751a) set_content_pane_g1_ParamLimits

0x8158,	// (0x000381ca) list_single_image_pane_ParamLimits

0x8158,	// (0x000381ca) list_single_image_pane

0xce24,	// (0x0003ce96) aid_size_cell_image_ParamLimits

0xce24,	// (0x0003ce96) aid_size_cell_image

0xce31,	// (0x0003cea3) grid_single_image_pane_ParamLimits

0xce31,	// (0x0003cea3) grid_single_image_pane

0xce3f,	// (0x0003ceb1) list_single_image_pane_g1_ParamLimits

0xce3f,	// (0x0003ceb1) list_single_image_pane_g1

0xce4b,	// (0x0003cebd) list_single_image_pane_g2_ParamLimits

0xce4b,	// (0x0003cebd) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003fcbc) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003fcbc) list_single_image_pane_g

0xce5f,	// (0x0003ced1) list_single_image_pane_t1_ParamLimits

0xce5f,	// (0x0003ced1) list_single_image_pane_t1

0xce75,	// (0x0003cee7) cell_image_list_pane_ParamLimits

0xce75,	// (0x0003cee7) cell_image_list_pane

0xce89,	// (0x0003cefb) cell_image_list_pane_g1

0xce92,	// (0x0003cf04) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003fcc1) cell_image_list_pane_g

0xce9b,	// (0x0003cf0d) aid_size_cell_tb_trans_pane

0x2758,	// (0x000327ca) bg_tb_trans_pane

0xcead,	// (0x0003cf1f) grid_tb_trans_pane

0x9d17,	// (0x00039d89) bg_tb_trans_pane_g1

0x9d27,	// (0x00039d99) bg_tb_trans_pane_g2

0x9d1f,	// (0x00039d91) bg_tb_trans_pane_g3

0x9d37,	// (0x00039da9) bg_tb_trans_pane_g4

0x9d2f,	// (0x00039da1) bg_tb_trans_pane_g5

0x9d57,	// (0x00039dc9) bg_tb_trans_pane_g6

0x9d4f,	// (0x00039dc1) bg_tb_trans_pane_g7

0x9d3f,	// (0x00039db1) bg_tb_trans_pane_g8

0x9d47,	// (0x00039db9) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003fcc6) bg_tb_trans_pane_g

0xcec1,	// (0x0003cf33) cell_toolbar_trans_pane_ParamLimits

0xcec1,	// (0x0003cf33) cell_toolbar_trans_pane

0xc2de,	// (0x0003c350) cell_toolbar_trans_pane_g1

0xbeaf,	// (0x0003bf21) list_form2_midp_pane_t1

0xbebd,	// (0x0003bf2f) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0003fb63) list_form2_midp_pane_t

0xbecb,	// (0x0003bf3d) scroll_pane_cp51_ParamLimits

0xc087,	// (0x0003c0f9) form2_midp_wait_pane_g1

0xc090,	// (0x0003c102) form2_midp_wait_pane_g2

0xc099,	// (0x0003c10b) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0003fb78) form2_midp_wait_pane_g

0x23a6,	// (0x00032418) list_highlight_pane_cp21_ParamLimits

0xc0e1,	// (0x0003c153) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0f0,	// (0x0003c162) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x80f0,	// (0x00038162) list_single_2graphic_im_pane_ParamLimits

0x80f0,	// (0x00038162) list_single_2graphic_im_pane

0xcee7,	// (0x0003cf59) list_single_2graphic_im_pane_g1_ParamLimits

0xcee7,	// (0x0003cf59) list_single_2graphic_im_pane_g1

0xcef8,	// (0x0003cf6a) list_single_2graphic_im_pane_g2_ParamLimits

0xcef8,	// (0x0003cf6a) list_single_2graphic_im_pane_g2

0xcf04,	// (0x0003cf76) list_single_2graphic_im_pane_g3_ParamLimits

0xcf04,	// (0x0003cf76) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003fcd9) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003fcd9) list_single_2graphic_im_pane_g

0xcf24,	// (0x0003cf96) list_single_2graphic_im_pane_t1_ParamLimits

0xcf24,	// (0x0003cf96) list_single_2graphic_im_pane_t1

0xc937,	// (0x0003c9a9) list_single_graphic_2heading_pane_fp_ParamLimits

0xc937,	// (0x0003c9a9) list_single_graphic_2heading_pane_fp

0x4c5f,	// (0x00034cd1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c5f,	// (0x00034cd1) list_single_graphic_2heading_pane_fp_g1

0xc94d,	// (0x0003c9bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x0003c9bf) list_single_graphic_2heading_pane_fp_g2

0x4c28,	// (0x00034c9a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4c28,	// (0x00034c9a) list_single_graphic_2heading_pane_fp_g3

0x4c34,	// (0x00034ca6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c34,	// (0x00034ca6) list_single_graphic_2heading_pane_fp_g4

0xc959,	// (0x0003c9cb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc959,	// (0x0003c9cb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003fc00) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003fc00) list_single_graphic_2heading_pane_fp_g

0x4df9,	// (0x00034e6b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4df9,	// (0x00034e6b) list_single_graphic_2heading_pane_fp_t1

0x4c97,	// (0x00034d09) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c97,	// (0x00034d09) list_single_graphic_2heading_pane_fp_t2

0x4e0f,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4e0f,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003fce2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003fce2) list_single_graphic_2heading_pane_fp_t

0xc36a,	// (0x0003c3dc) fep_hwr_write_pane_g5_ParamLimits

0xc36a,	// (0x0003c3dc) fep_hwr_write_pane_g5

0xc376,	// (0x0003c3e8) fep_hwr_write_pane_g6_ParamLimits

0xc376,	// (0x0003c3e8) fep_hwr_write_pane_g6

0xcc0e,	// (0x0003cc80) eswt_shell_pane_ParamLimits

0x9d8b,	// (0x00039dfd) bg_popup_window_pane_cp18_ParamLimits

0xb00e,	// (0x0003b080) heading_pane_cp70

0xcd38,	// (0x0003cdaa) popup_eswt_tasktip_window_t1_ParamLimits

0x9881,	// (0x000398f3) aid_touch_tab_arrow_left

0x9890,	// (0x00039902) aid_touch_tab_arrow_right

0x5e98,	// (0x00035f0a) title_pane_g3_ParamLimits

0x5e98,	// (0x00035f0a) title_pane_g3

0x2720,	// (0x00032792) set_value_pane_g1

0x7c12,	// (0x00037c84) popup_toolbar_trans_pane_ParamLimits

0xce9b,	// (0x0003cf0d) aid_size_cell_tb_trans_pane_ParamLimits

0x2758,	// (0x000327ca) bg_tb_trans_pane_ParamLimits

0xcead,	// (0x0003cf1f) grid_tb_trans_pane_ParamLimits

0x24d0,	// (0x00032542) cont_note_pane_ParamLimits

0x24d0,	// (0x00032542) cont_note_pane

0x264c,	// (0x000326be) cont_snote2_single_text_pane_ParamLimits

0x264c,	// (0x000326be) cont_snote2_single_text_pane

0x264c,	// (0x000326be) cont_snote2_single_graphic_pane_ParamLimits

0x264c,	// (0x000326be) cont_snote2_single_graphic_pane

0xa391,	// (0x0003a403) cont_note_wait_pane_ParamLimits

0xa391,	// (0x0003a403) cont_note_wait_pane

0xa391,	// (0x0003a403) cont_note_image_pane_ParamLimits

0xa391,	// (0x0003a403) cont_note_image_pane

0xcf55,	// (0x0003cfc7) popup_note2_window_g1_ParamLimits

0xcf55,	// (0x0003cfc7) popup_note2_window_g1

0xcf86,	// (0x0003cff8) popup_note2_window_t1_ParamLimits

0xcf86,	// (0x0003cff8) popup_note2_window_t1

0xcfcb,	// (0x0003d03d) popup_note2_window_t2_ParamLimits

0xcfcb,	// (0x0003d03d) popup_note2_window_t2

0xd010,	// (0x0003d082) popup_note2_window_t3_ParamLimits

0xd010,	// (0x0003d082) popup_note2_window_t3

0xd076,	// (0x0003d0e8) popup_note2_window_t4_ParamLimits

0xd076,	// (0x0003d0e8) popup_note2_window_t4

0x2554,	// (0x000325c6) popup_note2_window_t5_ParamLimits

0x2554,	// (0x000325c6) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003fcee) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003fcee) popup_note2_window_t

0xd0a5,	// (0x0003d117) popup_note2_image_window_g1_ParamLimits

0xd0a5,	// (0x0003d117) popup_note2_image_window_g1

0xd0b1,	// (0x0003d123) popup_note2_image_window_g2_ParamLimits

0xd0b1,	// (0x0003d123) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003fcf9) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003fcf9) popup_note2_image_window_g

0xd0c3,	// (0x0003d135) popup_note2_image_window_t1_ParamLimits

0xd0c3,	// (0x0003d135) popup_note2_image_window_t1

0xd0db,	// (0x0003d14d) popup_note2_image_window_t2_ParamLimits

0xd0db,	// (0x0003d14d) popup_note2_image_window_t2

0xd0f3,	// (0x0003d165) popup_note2_image_window_t3_ParamLimits

0xd0f3,	// (0x0003d165) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003fcfe) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003fcfe) popup_note2_image_window_t

0xa39f,	// (0x0003a411) popup_note2_wait_window_g1_ParamLimits

0xa39f,	// (0x0003a411) popup_note2_wait_window_g1

0xa3ab,	// (0x0003a41d) popup_note2_wait_window_g2_ParamLimits

0xa3ab,	// (0x0003a41d) popup_note2_wait_window_g2

0xa3b7,	// (0x0003a429) popup_note2_wait_window_g3_ParamLimits

0xa3b7,	// (0x0003a429) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0003f8ab) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0003f8ab) popup_note2_wait_window_g

0xd10f,	// (0x0003d181) popup_note2_wait_window_t1_ParamLimits

0xd10f,	// (0x0003d181) popup_note2_wait_window_t1

0xd12d,	// (0x0003d19f) popup_note2_wait_window_t2_ParamLimits

0xd12d,	// (0x0003d19f) popup_note2_wait_window_t2

0xd14b,	// (0x0003d1bd) popup_note2_wait_window_t3_ParamLimits

0xd14b,	// (0x0003d1bd) popup_note2_wait_window_t3

0xd15d,	// (0x0003d1cf) popup_note2_wait_window_t4_ParamLimits

0xd15d,	// (0x0003d1cf) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003fd05) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003fd05) popup_note2_wait_window_t

0xd16f,	// (0x0003d1e1) wait_bar2_pane_ParamLimits

0xd16f,	// (0x0003d1e1) wait_bar2_pane

0xd187,	// (0x0003d1f9) popup_snote2_single_text_window_g1_ParamLimits

0xd187,	// (0x0003d1f9) popup_snote2_single_text_window_g1

0xd1af,	// (0x0003d221) popup_snote2_single_text_window_t1_ParamLimits

0xd1af,	// (0x0003d221) popup_snote2_single_text_window_t1

0xd1fb,	// (0x0003d26d) popup_snote2_single_text_window_t2_ParamLimits

0xd1fb,	// (0x0003d26d) popup_snote2_single_text_window_t2

0xd247,	// (0x0003d2b9) popup_snote2_single_text_window_t3_ParamLimits

0xd247,	// (0x0003d2b9) popup_snote2_single_text_window_t3

0xd288,	// (0x0003d2fa) popup_snote2_single_text_window_t4_ParamLimits

0xd288,	// (0x0003d2fa) popup_snote2_single_text_window_t4

0xd2be,	// (0x0003d330) popup_snote2_single_text_window_t5_ParamLimits

0xd2be,	// (0x0003d330) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003fd0e) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003fd0e) popup_snote2_single_text_window_t

0xd2e9,	// (0x0003d35b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2e9,	// (0x0003d35b) popup_snote2_single_graphic_window_g1

0xd311,	// (0x0003d383) popup_snote2_single_graphic_window_g2_ParamLimits

0xd311,	// (0x0003d383) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003fd19) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003fd19) popup_snote2_single_graphic_window_g

0xd339,	// (0x0003d3ab) popup_snote2_single_graphic_window_t1_ParamLimits

0xd339,	// (0x0003d3ab) popup_snote2_single_graphic_window_t1

0xd385,	// (0x0003d3f7) popup_snote2_single_graphic_window_t2_ParamLimits

0xd385,	// (0x0003d3f7) popup_snote2_single_graphic_window_t2

0xd247,	// (0x0003d2b9) popup_snote2_single_graphic_window_t3_ParamLimits

0xd247,	// (0x0003d2b9) popup_snote2_single_graphic_window_t3

0xd288,	// (0x0003d2fa) popup_snote2_single_graphic_window_t4_ParamLimits

0xd288,	// (0x0003d2fa) popup_snote2_single_graphic_window_t4

0xd2be,	// (0x0003d330) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2be,	// (0x0003d330) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003fd1e) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003fd1e) popup_snote2_single_graphic_window_t

0xbd88,	// (0x0003bdfa) clock_nsta_pane_cp2_t1

0xbd88,	// (0x0003bdfa) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0003fb39) clock_nsta_pane_cp2_t

0x68bb,	// (0x0003692d) form_field_data_wide_pane_g1_ParamLimits

0x2766,	// (0x000327d8) form_field_data_wide_pane_g2_ParamLimits

0x2766,	// (0x000327d8) form_field_data_wide_pane_g2

0x2772,	// (0x000327e4) form_field_data_wide_pane_g3_ParamLimits

0x2772,	// (0x000327e4) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0003f6e3) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0003f6e3) form_field_data_wide_pane_g

0xbc8b,	// (0x0003bcfd) grid_touch_3_pane_ParamLimits

0xbc8b,	// (0x0003bcfd) grid_touch_3_pane

0xd3d1,	// (0x0003d443) cell_touch_3_pane_ParamLimits

0xd3d1,	// (0x0003d443) cell_touch_3_pane

0xc2de,	// (0x0003c350) cell_touch_3_pane_g1

0xc2de,	// (0x0003c350) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0003fbbe) cell_touch_3_pane_g

0x2586,	// (0x000325f8) cont_query_data_pane

0x258e,	// (0x00032600) cont_query_data_pane_cp1

0xd3ff,	// (0x0003d471) button_value_adjust_pane_cp7

0xd407,	// (0x0003d479) query_popup_pane_cp3

0x2bec,	// (0x00032c5e) bg_popup_sub_pane_cp22_ParamLimits

0x6ef6,	// (0x00036f68) navi_navi_volume_pane_cp2

0x6f0e,	// (0x00036f80) popup_side_volume_key_window_g2

0x6f1a,	// (0x00036f8c) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0003f779) popup_side_volume_key_window_g

0x6f34,	// (0x00036fa6) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0003f780) popup_side_volume_key_window_t

0x7375,	// (0x000373e7) popup_side_volume_key_window_ParamLimits

0x659c,	// (0x0003660e) list_double_graphic_pane_g4_ParamLimits

0x659c,	// (0x0003660e) list_double_graphic_pane_g4

0x8135,	// (0x000381a7) list_single_2heading_msg_pane_ParamLimits

0x8135,	// (0x000381a7) list_single_2heading_msg_pane

0x8751,	// (0x000387c3) list_single_2heading_msg_pane_g1_ParamLimits

0x8751,	// (0x000387c3) list_single_2heading_msg_pane_g1

0x465d,	// (0x000346cf) list_single_2heading_msg_pane_g2_ParamLimits

0x465d,	// (0x000346cf) list_single_2heading_msg_pane_g2

0x499e,	// (0x00034a10) list_single_2heading_msg_pane_g3_ParamLimits

0x499e,	// (0x00034a10) list_single_2heading_msg_pane_g3

0x4e2f,	// (0x00034ea1) list_single_2heading_msg_pane_g4_ParamLimits

0x4e2f,	// (0x00034ea1) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003fd29) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003fd29) list_single_2heading_msg_pane_g

0x4e47,	// (0x00034eb9) list_single_2heading_msg_pane_t1_ParamLimits

0x4e47,	// (0x00034eb9) list_single_2heading_msg_pane_t1

0x875d,	// (0x000387cf) list_single_2heading_msg_pane_t2_ParamLimits

0x875d,	// (0x000387cf) list_single_2heading_msg_pane_t2

0x8791,	// (0x00038803) list_single_2heading_msg_pane_t3_ParamLimits

0x8791,	// (0x00038803) list_single_2heading_msg_pane_t3

0x4e6f,	// (0x00034ee1) list_single_2heading_msg_pane_t4_ParamLimits

0x4e6f,	// (0x00034ee1) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003fd32) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003fd32) list_single_2heading_msg_pane_t

0x2354,	// (0x000323c6) title_pane_g4_ParamLimits

0x2354,	// (0x000323c6) title_pane_g4

0x6b4d,	// (0x00036bbf) title_pane_stacon_g3_ParamLimits

0x6b4d,	// (0x00036bbf) title_pane_stacon_g3

0xcf18,	// (0x0003cf8a) list_single_2graphic_im_pane_g4_ParamLimits

0xcf18,	// (0x0003cf8a) list_single_2graphic_im_pane_g4

0xadd8,	// (0x0003ae4a) popup_side_volume_key_window_cp

0xb5e6,	// (0x0003b658) main_idle_act2_pane_t1

0x7d04,	// (0x00037d76) toolbar_button_pane_g10

0x6431,	// (0x000364a3) popup_toolbar_window_cp1

0xbd79,	// (0x0003bdeb) clock_nsta_pane_cp_t1

0xbd79,	// (0x0003bdeb) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0003fb34) clock_nsta_pane_cp_t

0x6ef6,	// (0x00036f68) navi_navi_volume_pane_cp2_ParamLimits

0x6f02,	// (0x00036f74) popup_side_volume_key_window_g1_ParamLimits

0x6f0e,	// (0x00036f80) popup_side_volume_key_window_g2_ParamLimits

0x6f1a,	// (0x00036f8c) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0003f779) popup_side_volume_key_window_g_ParamLimits

0x8307,	// (0x00038379) fep_hwr_aid_pane

0x83ae,	// (0x00038420) bg_fep_hwr_top_pane_g4_ParamLimits

0xc33a,	// (0x0003c3ac) fep_hwr_top_pane_g1_ParamLimits

0xc34c,	// (0x0003c3be) fep_hwr_top_pane_g2_ParamLimits

0x83ce,	// (0x00038440) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0003fb89) fep_hwr_top_pane_g_ParamLimits

0x83e3,	// (0x00038455) fep_hwr_top_text_pane_ParamLimits

0xab9b,	// (0x0003ac0d) aid_touch_tab_arrow_arrow_2

0xaba4,	// (0x0003ac16) aid_touch_tab_arrow_left_2

0x831b,	// (0x0003838d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8352,	// (0x000383c4) fep_hwr_prediction_pane

0xc4a5,	// (0x0003c517) fep_vkb_prediction_pane

0xc5a2,	// (0x0003c614) fep_vkb_side_pane_g3_ParamLimits

0xc5a2,	// (0x0003c614) fep_vkb_side_pane_g3

0x855e,	// (0x000385d0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x85ca,	// (0x0003863c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x85d7,	// (0x00038649) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0003fc38) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x87ca,	// (0x0003883c) fep_hwr_prediction_pane_g1

0x87d4,	// (0x00038846) fep_hwr_prediction_pane_g2

0x87dc,	// (0x0003884e) fep_hwr_prediction_pane_g3

0x87e4,	// (0x00038856) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003fd3b) fep_hwr_prediction_pane_g

0xd42c,	// (0x0003d49e) fep_vkb_prediction_pane_g1

0xd436,	// (0x0003d4a8) fep_vkb_prediction_pane_g2

0xd43e,	// (0x0003d4b0) fep_vkb_prediction_pane_g3

0xd446,	// (0x0003d4b8) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003fd44) fep_vkb_prediction_pane_g

0x8037,	// (0x000380a9) slider_set_pane_g3

0x804b,	// (0x000380bd) slider_set_pane_g4

0x8063,	// (0x000380d5) slider_set_pane_g5

0x8037,	// (0x000380a9) slider_set_pane_g6

0x8079,	// (0x000380eb) slider_set_pane_g7

0xb227,	// (0x0003b299) slider_form_pane_g3

0xb230,	// (0x0003b2a2) slider_form_pane_g4

0xb238,	// (0x0003b2aa) slider_form_pane_g5

0xb227,	// (0x0003b299) slider_form_pane_g6

0xb240,	// (0x0003b2b2) slider_form_pane_g7

0xb891,	// (0x0003b903) slider_set_pane_vc_g3

0xb89a,	// (0x0003b90c) slider_set_pane_vc_g4

0xb8a3,	// (0x0003b915) slider_set_pane_vc_g5

0xb891,	// (0x0003b903) slider_set_pane_vc_g6

0xb8ac,	// (0x0003b91e) slider_set_pane_vc_g7

0xba5e,	// (0x0003bad0) slider_form_pane_vc_g1

0xba67,	// (0x0003bad9) slider_form_pane_vc_g2

0xba70,	// (0x0003bae2) slider_form_pane_vc_g3

0xba5e,	// (0x0003bad0) slider_form_pane_vc_g4

0xba79,	// (0x0003baeb) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0003fb06) slider_form_pane_vc_g

0x5c2f,	// (0x00035ca1) main_idle_act3_pane

0xd44e,	// (0x0003d4c0) ai3_links_pane

0xd457,	// (0x0003d4c9) popup_ai3_data_window_ParamLimits

0xd457,	// (0x0003d4c9) popup_ai3_data_window

0x2336,	// (0x000323a8) grid_ai3_links_pane

0xd46f,	// (0x0003d4e1) cell_ai3_links_pane_ParamLimits

0xd46f,	// (0x0003d4e1) cell_ai3_links_pane

0xd487,	// (0x0003d4f9) bg_popup_sub_pane_cp11

0xd494,	// (0x0003d506) cell_ai3_links_pane_g1

0x2336,	// (0x000323a8) bg_popup_sub_pane_cp12

0xd4b9,	// (0x0003d52b) heading_ai3_data_pane

0xd4c1,	// (0x0003d533) list_ai3_gene_pane

0xd4cd,	// (0x0003d53f) popup_ai3_data_window_g1

0xd4d5,	// (0x0003d547) heading_ai3_data_pane_g1

0xd4dd,	// (0x0003d54f) heading_ai3_data_pane_t1

0xd4eb,	// (0x0003d55d) list_double_ai3_gene_pane_ParamLimits

0xd4eb,	// (0x0003d55d) list_double_ai3_gene_pane

0xd4f8,	// (0x0003d56a) list_single_ai3_gene_pane_ParamLimits

0xd4f8,	// (0x0003d56a) list_single_ai3_gene_pane

0xc2a3,	// (0x0003c315) list_highlight_pane_cp7_ParamLimits

0xc2a3,	// (0x0003c315) list_highlight_pane_cp7

0xd505,	// (0x0003d577) list_single_a13_gene_pane_t1_ParamLimits

0xd505,	// (0x0003d577) list_single_a13_gene_pane_t1

0xd51c,	// (0x0003d58e) list_single_ai3_gene_pane_g1

0xd525,	// (0x0003d597) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003fd4d) list_single_ai3_gene_pane_g

0xd52d,	// (0x0003d59f) list_double_ai3_gene_pane_g1_ParamLimits

0xd52d,	// (0x0003d59f) list_double_ai3_gene_pane_g1

0xd539,	// (0x0003d5ab) list_double_ai3_gene_pane_t1_ParamLimits

0xd539,	// (0x0003d5ab) list_double_ai3_gene_pane_t1

0xd555,	// (0x0003d5c7) list_double_ai3_gene_pane_t2_ParamLimits

0xd555,	// (0x0003d5c7) list_double_ai3_gene_pane_t2

0xd56a,	// (0x0003d5dc) list_double_ai3_gene_pane_t3_ParamLimits

0xd56a,	// (0x0003d5dc) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003fd52) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003fd52) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e25,	// (0x00034e97) aid_size_min_col_2

0xd418,	// (0x0003d48a) aid_size_min_msg_ParamLimits

0xd418,	// (0x0003d48a) aid_size_min_msg

0xc6a2,	// (0x0003c714) fep_vkb_top_text_pane_g2_ParamLimits

0xc6a2,	// (0x0003c714) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0003fbb9) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0003fbb9) fep_vkb_top_text_pane_g

0x5c2f,	// (0x00035ca1) main_hc_apps_shell_pane

0xd587,	// (0x0003d5f9) grid_hc_apps_pane_ParamLimits

0xd587,	// (0x0003d5f9) grid_hc_apps_pane

0xd596,	// (0x0003d608) list_hc_apps_pane

0xd59e,	// (0x0003d610) scroll_pane_cp37_ParamLimits

0xd59e,	// (0x0003d610) scroll_pane_cp37

0xd5aa,	// (0x0003d61c) cell_hc_apps_pane_ParamLimits

0xd5aa,	// (0x0003d61c) cell_hc_apps_pane

0xd658,	// (0x0003d6ca) cell_hc_apps_pane_g1_ParamLimits

0xd658,	// (0x0003d6ca) cell_hc_apps_pane_g1

0xd689,	// (0x0003d6fb) cell_hc_apps_pane_g2_ParamLimits

0xd689,	// (0x0003d6fb) cell_hc_apps_pane_g2

0xd6a5,	// (0x0003d717) cell_hc_apps_pane_g3_ParamLimits

0xd6a5,	// (0x0003d717) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003fd59) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003fd59) cell_hc_apps_pane_g

0xd6c7,	// (0x0003d739) cell_hc_apps_pane_t1_ParamLimits

0xd6c7,	// (0x0003d739) cell_hc_apps_pane_t1

0x24d0,	// (0x00032542) grid_highlight_pane_cp10_ParamLimits

0x24d0,	// (0x00032542) grid_highlight_pane_cp10

0xd707,	// (0x0003d779) list_single_hc_apps_pane_ParamLimits

0xd707,	// (0x0003d779) list_single_hc_apps_pane

0xd76a,	// (0x0003d7dc) list_single_hc_apps_pane_g1

0x87ec,	// (0x0003885e) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003fd60) list_single_hc_apps_pane_g

0x8805,	// (0x00038877) list_single_hc_apps_pane_g2_copy1

0x8821,	// (0x00038893) list_single_hc_apps_pane_t1

0x23a6,	// (0x00032418) bg_set_opt_pane_cp_ParamLimits

0x5f48,	// (0x00035fba) setting_slider_pane_t1_ParamLimits

0x5f61,	// (0x00035fd3) setting_slider_pane_t2_ParamLimits

0x5f7b,	// (0x00035fed) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003f5d0) setting_slider_pane_t_ParamLimits

0x5f93,	// (0x00036005) slider_set_pane_ParamLimits

0x7617,	// (0x00037689) control_pane_g5_ParamLimits

0x7617,	// (0x00037689) control_pane_g5

0xb07a,	// (0x0003b0ec) slider_set_pane_g1_ParamLimits

0x802b,	// (0x0003809d) slider_set_pane_g2_ParamLimits

0x8037,	// (0x000380a9) slider_set_pane_g3_ParamLimits

0x804b,	// (0x000380bd) slider_set_pane_g4_ParamLimits

0x8063,	// (0x000380d5) slider_set_pane_g5_ParamLimits

0x8037,	// (0x000380a9) slider_set_pane_g6_ParamLimits

0x8079,	// (0x000380eb) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0003f9c7) slider_set_pane_g_ParamLimits

0x7453,	// (0x000374c5) navi_icon_text_pane_ParamLimits

0x9842,	// (0x000398b4) aid_fill_nsta_2_ParamLimits

0x9881,	// (0x000398f3) aid_touch_tab_arrow_left_ParamLimits

0x9890,	// (0x00039902) aid_touch_tab_arrow_right_ParamLimits

0x98fd,	// (0x0003996f) clock_nsta_pane_ParamLimits

0xab7d,	// (0x0003abef) navi_icon_pane_g1_ParamLimits

0xab89,	// (0x0003abfb) navi_text_pane_t1_ParamLimits

0xbe89,	// (0x0003befb) navi_icon_text_pane_g1_ParamLimits

0xbe95,	// (0x0003bf07) navi_icon_text_pane_t1_ParamLimits

0xd76a,	// (0x0003d7dc) list_single_hc_apps_pane_g1_ParamLimits

0x87ec,	// (0x0003885e) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003fd60) list_single_hc_apps_pane_g_ParamLimits

0x8805,	// (0x00038877) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8821,	// (0x00038893) list_single_hc_apps_pane_t1_ParamLimits

0x5d8c,	// (0x00035dfe) popup_toolbar2_fixed_window_ParamLimits

0x5d8c,	// (0x00035dfe) popup_toolbar2_fixed_window

0x7c08,	// (0x00037c7a) popup_toolbar2_float_window

0x2336,	// (0x000323a8) bg_popup_sub_pane_cp27

0xd783,	// (0x0003d7f5) grid_toolbar2_float_pane

0x2336,	// (0x000323a8) bg_popup_sub_pane_cp26

0xd783,	// (0x0003d7f5) grid_toolbar2_fixed_pane

0xd78b,	// (0x0003d7fd) cell_toolbar2_fixed_pane_ParamLimits

0xd78b,	// (0x0003d7fd) cell_toolbar2_fixed_pane

0xd79b,	// (0x0003d80d) cell_toolbar2_fixed_pane_g1

0x7ada,	// (0x00037b4c) toolbar2_fixed_button_pane

0x9d17,	// (0x00039d89) toolbar2_fixed_button_pane_g1

0x9d27,	// (0x00039d99) toolbar2_fixed_button_pane_g2

0x9d1f,	// (0x00039d91) toolbar2_fixed_button_pane_g3

0x9d37,	// (0x00039da9) toolbar2_fixed_button_pane_g4

0x9d2f,	// (0x00039da1) toolbar2_fixed_button_pane_g5

0x9d3f,	// (0x00039db1) toolbar2_fixed_button_pane_g6

0x9d47,	// (0x00039db9) toolbar2_fixed_button_pane_g7

0x9d57,	// (0x00039dc9) toolbar2_fixed_button_pane_g8

0x9d4f,	// (0x00039dc1) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0003f8c9) toolbar2_fixed_button_pane_g

0xd7a4,	// (0x0003d816) cell_toolbar2_float_pane_ParamLimits

0xd7a4,	// (0x0003d816) cell_toolbar2_float_pane

0xd7b5,	// (0x0003d827) cell_toolbar2_float_pane_g1

0x7ada,	// (0x00037b4c) toolbar2_fixed_button_pane_cp

0xc40c,	// (0x0003c47e) fep_vkb_accented_list_pane_ParamLimits

0xc40c,	// (0x0003c47e) fep_vkb_accented_list_pane

0x853e,	// (0x000385b0) bg_popup_fep_shadow_pane_g9

0x94c4,	// (0x00039536) bg_popup_fep_shadow_pane_cp3

0x285e,	// (0x000328d0) list_accented_list_pane

0xd7be,	// (0x0003d830) list_single_accented_list_pane_ParamLimits

0xd7be,	// (0x0003d830) list_single_accented_list_pane

0x94c4,	// (0x00039536) list_highlight_pane_cp10

0xd7cf,	// (0x0003d841) list_single_accented_list_pane_t1

0x7b58,	// (0x00037bca) popup_slider_window_ParamLimits

0x7b58,	// (0x00037bca) popup_slider_window

0xd40f,	// (0x0003d481) aid_indentation_list_msg

0xd885,	// (0x0003d8f7) bg_popup_window_pane_cp19

0xd8ef,	// (0x0003d961) popup_slider_window_g1

0xd90b,	// (0x0003d97d) popup_slider_window_g2

0xd927,	// (0x0003d999) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003fd65) popup_slider_window_g

0xd983,	// (0x0003d9f5) popup_slider_window_t1

0xd9f7,	// (0x0003da69) small_volume_slider_vertical_pane

0xc2de,	// (0x0003c350) small_volume_slider_vertical_pane_g1

0xc2de,	// (0x0003c350) small_volume_slider_vertical_pane_g2

0xda13,	// (0x0003da85) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003fd77) small_volume_slider_vertical_pane_g

0x5b52,	// (0x00035bc4) area_side_right_pane_ParamLimits

0x5b52,	// (0x00035bc4) area_side_right_pane

0x884f,	// (0x000388c1) aid_size_side_button_ParamLimits

0x884f,	// (0x000388c1) aid_size_side_button

0x8863,	// (0x000388d5) grid_sctrl_middle_pane_ParamLimits

0x8863,	// (0x000388d5) grid_sctrl_middle_pane

0x8882,	// (0x000388f4) sctrl_sk_bottom_pane

0x8893,	// (0x00038905) sctrl_sk_top_pane

0x88a5,	// (0x00038917) aid_touch_sctrl_top

0x88b2,	// (0x00038924) bg_sctrl_sk_pane_ParamLimits

0x88b2,	// (0x00038924) bg_sctrl_sk_pane

0x88c0,	// (0x00038932) sctrl_sk_top_pane_g1

0x88cd,	// (0x0003893f) sctrl_sk_top_pane_t1

0x88a5,	// (0x00038917) aid_touch_sctrl_bottom

0x88b2,	// (0x00038924) bg_sctrl_sk_pane_cp_ParamLimits

0x88b2,	// (0x00038924) bg_sctrl_sk_pane_cp

0x88e8,	// (0x0003895a) sctrl_sk_bottom_pane_g1

0x88cd,	// (0x0003893f) sctrl_sk_bottom_pane_t1

0x88f1,	// (0x00038963) cell_sctrl_middle_pane_ParamLimits

0x88f1,	// (0x00038963) cell_sctrl_middle_pane

0x890c,	// (0x0003897e) aid_touch_sctrl_middle_ParamLimits

0x890c,	// (0x0003897e) aid_touch_sctrl_middle

0x891e,	// (0x00038990) bg_sctrl_middle_pane_ParamLimits

0x891e,	// (0x00038990) bg_sctrl_middle_pane

0x855e,	// (0x000385d0) cell_sctrl_middle_pane_g1_ParamLimits

0x855e,	// (0x000385d0) cell_sctrl_middle_pane_g1

0x892c,	// (0x0003899e) cell_sctrl_middle_pane_g2_ParamLimits

0x892c,	// (0x0003899e) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003fd83) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003fd83) cell_sctrl_middle_pane_g

0x9d17,	// (0x00039d89) bg_sctrl_middle_pane_g1

0x9d1f,	// (0x00039d91) bg_sctrl_middle_pane_g2

0x9d27,	// (0x00039d99) bg_sctrl_middle_pane_g3

0x9d2f,	// (0x00039da1) bg_sctrl_middle_pane_g4

0x9d37,	// (0x00039da9) bg_sctrl_middle_pane_g5

0x9d3f,	// (0x00039db1) bg_sctrl_middle_pane_g6

0x9d47,	// (0x00039db9) bg_sctrl_middle_pane_g7

0x9d4f,	// (0x00039dc1) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003fd88) bg_sctrl_middle_pane_g

0x9d57,	// (0x00039dc9) bg_sctrl_middle_pane_g8_copy1

0x9d17,	// (0x00039d89) bg_sctrl_sk_pane_g1

0x9d27,	// (0x00039d99) bg_sctrl_sk_pane_g2

0x9d1f,	// (0x00039d91) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0003f8c9) bg_sctrl_sk_pane_g

0x269a,	// (0x0003270c) aid_size_touch_scroll_bar

0x9d37,	// (0x00039da9) bg_sctrl_sk_pane_g4

0x9d2f,	// (0x00039da1) bg_sctrl_sk_pane_g5

0x9d3f,	// (0x00039db1) bg_sctrl_sk_pane_g6

0x9d47,	// (0x00039db9) bg_sctrl_sk_pane_g7

0x9d57,	// (0x00039dc9) bg_sctrl_sk_pane_g8

0x9d4f,	// (0x00039dc1) bg_sctrl_sk_pane_g9

0x77c1,	// (0x00037833) popup_fep_china_hwr2_fs_candidate_window

0x77cb,	// (0x0003783d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x77cb,	// (0x0003783d) popup_fep_china_hwr2_fs_control_window

0x855e,	// (0x000385d0) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003fd7e) sctrl_sk_top_pane_g

0xda1c,	// (0x0003da8e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda1c,	// (0x0003da8e) aid_fep_china_hwr2_fs_cell

0xda2e,	// (0x0003daa0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda2e,	// (0x0003daa0) bg_popup_fep_shadow_pane_cp4

0xda45,	// (0x0003dab7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda45,	// (0x0003dab7) bg_popup_fep_shadow_pane_cp5

0xda57,	// (0x0003dac9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda57,	// (0x0003dac9) popup_fep_china_hwr2_fs_control_bar_grid

0xda67,	// (0x0003dad9) popup_fep_china_hwr2_fs_control_funtion_grid

0xda6f,	// (0x0003dae1) aid_fep_china_hwr2_fs_candi_cell

0x2336,	// (0x000323a8) bg_popup_fep_shadow_pane_cp6

0xda79,	// (0x0003daeb) popup_fep_china_hwr2_fs_candidate_grid

0xda83,	// (0x0003daf5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda83,	// (0x0003daf5) cell_fep_china_hwr2_fs_funtion_grid

0xc2de,	// (0x0003c350) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda9b,	// (0x0003db0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda9b,	// (0x0003db0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdaa9,	// (0x0003db1b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdaa9,	// (0x0003db1b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003fd99) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003fd99) cell_fep_china_hwr2_fs_funtion_grid_g

0xdabf,	// (0x0003db31) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdabf,	// (0x0003db31) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdad4,	// (0x0003db46) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdad4,	// (0x0003db46) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003fd9e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003fd9e) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaf0,	// (0x0003db62) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaf8,	// (0x0003db6a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb00,	// (0x0003db72) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003fda3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb08,	// (0x0003db7a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb08,	// (0x0003db7a) cell_fep_china_hwr2_fs_candidate_grid

0xdb21,	// (0x0003db93) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb29,	// (0x0003db9b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2de,	// (0x0003c350) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2de,	// (0x0003c350) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0003fbbe) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb31,	// (0x0003dba3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9910,	// (0x00039982) clock_nsta_pane_cp_24_ParamLimits

0x9910,	// (0x00039982) clock_nsta_pane_cp_24

0x998e,	// (0x00039a00) indicator_nsta_pane_cp_24_ParamLimits

0x998e,	// (0x00039a00) indicator_nsta_pane_cp_24

0xa9f9,	// (0x0003aa6b) heading_pane_g1

0x0001,

0xf8bc,	// (0x0003f92e) heading_pane_g

0xb42f,	// (0x0003b4a1) grid_sct_catagory_button_pane

0xb45f,	// (0x0003b4d1) scroll_pane_cp5_ParamLimits

0xbed7,	// (0x0003bf49) button_value_adjust_pane_cp5_ParamLimits

0xbed7,	// (0x0003bf49) button_value_adjust_pane_cp5

0xbfb6,	// (0x0003c028) form2_midp_time_pane_ParamLimits

0xdb3f,	// (0x0003dbb1) cell_sct_catagory_button_pane_ParamLimits

0xdb3f,	// (0x0003dbb1) cell_sct_catagory_button_pane

0xc2a3,	// (0x0003c315) bg_button_pane_cp01_ParamLimits

0xc2a3,	// (0x0003c315) bg_button_pane_cp01

0xc2de,	// (0x0003c350) cell_sct_catagory_button_pane_g1

0x7b97,	// (0x00037c09) popup_tb_extension_window

0xdb51,	// (0x0003dbc3) aid_size_cell_ext_ParamLimits

0xdb51,	// (0x0003dbc3) aid_size_cell_ext

0x24d0,	// (0x00032542) bg_tb_trans_pane_cp1_ParamLimits

0x24d0,	// (0x00032542) bg_tb_trans_pane_cp1

0xdb71,	// (0x0003dbe3) grid_tb_ext_pane_ParamLimits

0xdb71,	// (0x0003dbe3) grid_tb_ext_pane

0xdba1,	// (0x0003dc13) cell_tb_ext_pane_ParamLimits

0xdba1,	// (0x0003dc13) cell_tb_ext_pane

0xdbb8,	// (0x0003dc2a) cell_tb_ext_pane_g1_ParamLimits

0xdbb8,	// (0x0003dc2a) cell_tb_ext_pane_g1

0xdbd5,	// (0x0003dc47) cell_tb_ext_pane_t1

0x24d0,	// (0x00032542) list_highlight_pane_cp11_ParamLimits

0x24d0,	// (0x00032542) list_highlight_pane_cp11

0x5dab,	// (0x00035e1d) popup_uni_indicator_window_ParamLimits

0x5dab,	// (0x00035e1d) popup_uni_indicator_window

0x2758,	// (0x000327ca) bg_popup_sub_pane_cp14

0xdbf1,	// (0x0003dc63) list_uniindi_pane

0xdbfd,	// (0x0003dc6f) uniindi_top_pane

0x24d0,	// (0x00032542) bg_uniindi_top_pane

0xdc1c,	// (0x0003dc8e) uniindi_top_pane_g1

0xdc32,	// (0x0003dca4) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003fdaa) uniindi_top_pane_g

0xdc5c,	// (0x0003dcce) uniindi_top_pane_t1

0xdc86,	// (0x0003dcf8) list_single_uniindi_pane_ParamLimits

0xdc86,	// (0x0003dcf8) list_single_uniindi_pane

0xc2de,	// (0x0003c350) bg_uniindi_top_pane_g1

0xdc98,	// (0x0003dd0a) list_single_uniindi_pane_g1

0xdcab,	// (0x0003dd1d) list_single_uniindi_pane_t1

0x5c2f,	// (0x00035ca1) control_bg_pane

0xdcd0,	// (0x0003dd42) bg_sctrl_sk_pane_cp1

0xdcd9,	// (0x0003dd4b) bg_sctrl_sk_pane_cp2

0xdce2,	// (0x0003dd54) control_bg_pane_g1

0xdceb,	// (0x0003dd5d) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003fdb3) control_bg_pane_g

0xbd2e,	// (0x0003bda0) cell_indicator_nsta_pane_g1_ParamLimits

0xbd3c,	// (0x0003bdae) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0003fb22) cell_indicator_nsta_pane_g_ParamLimits

0x4c15,	// (0x00034c87) form2_midp_time_pane_t1_ParamLimits

0x772b,	// (0x0003779d) main_idle_act4_pane_ParamLimits

0x772b,	// (0x0003779d) main_idle_act4_pane

0x7b97,	// (0x00037c09) popup_tb_extension_window_ParamLimits

0xdb91,	// (0x0003dc03) tb_ext_find_pane_ParamLimits

0xdb91,	// (0x0003dc03) tb_ext_find_pane

0xdcf4,	// (0x0003dd66) ai_gene_pane_1_cp1

0x960f,	// (0x00039681) ai_gene_pane_2_cp1

0xdcfc,	// (0x0003dd6e) list_single_idle_plugin_calendar_pane

0xdd05,	// (0x0003dd77) list_single_idle_plugin_notification_pane

0xdd0e,	// (0x0003dd80) list_single_idle_plugin_player_pane

0xdd17,	// (0x0003dd89) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd17,	// (0x0003dd89) list_single_idle_plugin_shortcut_pane

0xdd39,	// (0x0003ddab) main_idle_act4_pane_t1

0xdd4b,	// (0x0003ddbd) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003fdb8) main_idle_act4_pane_t

0xdd5d,	// (0x0003ddcf) middle_sk_idle_act4_pane_ParamLimits

0xdd5d,	// (0x0003ddcf) middle_sk_idle_act4_pane

0xdd73,	// (0x0003dde5) popup_clock_digital_analogue_window_cp2

0xdd8d,	// (0x0003ddff) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd8d,	// (0x0003ddff) shortcut_wheel_idle_act4_pane

0xc2de,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g1

0xc2de,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g2

0xc2de,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g3

0xc2de,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g4

0xc2de,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g5

0xdda1,	// (0x0003de13) shortcut_wheel_idle_act4_pane_g6

0xdda9,	// (0x0003de1b) shortcut_wheel_idle_act4_pane_g7

0xddb1,	// (0x0003de23) shortcut_wheel_idle_act4_pane_g8

0xddb9,	// (0x0003de2b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003fdbd) shortcut_wheel_idle_act4_pane_g

0xc54e,	// (0x0003c5c0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc54e,	// (0x0003c5c0) middle_sk_idle_act4_pane_g1

0xde1d,	// (0x0003de8f) middle_sk_idle_act4_pane_g2_ParamLimits

0xde1d,	// (0x0003de8f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003fde0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003fde0) middle_sk_idle_act4_pane_g

0xde29,	// (0x0003de9b) middle_sk_idle_act4_pane_t1_ParamLimits

0xde29,	// (0x0003de9b) middle_sk_idle_act4_pane_t1

0xde46,	// (0x0003deb8) grid_ai_shortcut_pane_ParamLimits

0xde46,	// (0x0003deb8) grid_ai_shortcut_pane

0xde5f,	// (0x0003ded1) list_highlight_pane_cp16_ParamLimits

0xde5f,	// (0x0003ded1) list_highlight_pane_cp16

0xde6c,	// (0x0003dede) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde6c,	// (0x0003dede) list_single_idle_plugin_shortcut_pane_g1

0xde78,	// (0x0003deea) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde78,	// (0x0003deea) list_single_idle_plugin_shortcut_pane_g2

0xde90,	// (0x0003df02) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde90,	// (0x0003df02) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003fde5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003fde5) list_single_idle_plugin_shortcut_pane_g

0xdea3,	// (0x0003df15) cell_ai_shortcut_pane_ParamLimits

0xdea3,	// (0x0003df15) cell_ai_shortcut_pane

0xdec7,	// (0x0003df39) cell_ai_shortcut_pane_g1_ParamLimits

0xdec7,	// (0x0003df39) cell_ai_shortcut_pane_g1

0xdcf4,	// (0x0003dd66) ai_gene_pane_1_cp2

0xdee9,	// (0x0003df5b) ai_gene_pane_2_cp2

0xdef1,	// (0x0003df63) list_highlight_pane_cp15

0xdefa,	// (0x0003df6c) list_single_idle_plugin_calendar_pane_g1

0xdef1,	// (0x0003df63) list_highlight_pane_cp17

0xdf02,	// (0x0003df74) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf0a,	// (0x0003df7c) list_single_idle_plugin_player_pane_g1

0xb688,	// (0x0003b6fa) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003fdec) list_single_idle_plugin_player_pane_g

0xdf12,	// (0x0003df84) list_single_idle_plugin_player_pane_t1

0xdf20,	// (0x0003df92) list_single_idle_plugin_player_pane_t2

0xdf2e,	// (0x0003dfa0) list_single_idle_plugin_player_pane_t3

0xdf3c,	// (0x0003dfae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003fdf1) list_single_idle_plugin_player_pane_t

0xdf4a,	// (0x0003dfbc) wait_bar_pane_cp15

0xdf52,	// (0x0003dfc4) grid_ai_notification_pane

0xb688,	// (0x0003b6fa) list_single_idle_plugin_notification_pane_g1

0xdf5b,	// (0x0003dfcd) cell_ai_notification_pane_ParamLimits

0xdf5b,	// (0x0003dfcd) cell_ai_notification_pane

0xdf68,	// (0x0003dfda) cell_ai_notification_pane_g1

0xdf70,	// (0x0003dfe2) cell_ai_notification_pane_t1

0xdf7e,	// (0x0003dff0) tb_ext_find_button_pane

0xdf86,	// (0x0003dff8) tb_ext_find_pane_g1

0xdf8e,	// (0x0003e000) tb_ext_find_pane_t1

0x2b8b,	// (0x00032bfd) tb_ext_find_button_pane_g1

0xdf9c,	// (0x0003e00e) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003fdfa) tb_ext_find_button_pane_g

0xdd39,	// (0x0003ddab) main_idle_act4_pane_t1_ParamLimits

0xdd4b,	// (0x0003ddbd) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003fdb8) main_idle_act4_pane_t_ParamLimits

0xdd73,	// (0x0003dde5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd81,	// (0x0003ddf3) sat_plugin_idle_act4_pane_ParamLimits

0xdd81,	// (0x0003ddf3) sat_plugin_idle_act4_pane

0xdfa5,	// (0x0003e017) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfa5,	// (0x0003e017) sat_plugin_idle_act4_pane_t1

0xdfb8,	// (0x0003e02a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfb8,	// (0x0003e02a) sat_plugin_idle_act4_pane_t2

0xdfcb,	// (0x0003e03d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfcb,	// (0x0003e03d) sat_plugin_idle_act4_pane_t3

0xdfde,	// (0x0003e050) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfde,	// (0x0003e050) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003fdff) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003fdff) sat_plugin_idle_act4_pane_t

0x5cf4,	// (0x00035d66) popup_battery_window_ParamLimits

0x5cf4,	// (0x00035d66) popup_battery_window

0x24d0,	// (0x00032542) bg_popup_sub_pane_cp25_ParamLimits

0x24d0,	// (0x00032542) bg_popup_sub_pane_cp25

0xdff1,	// (0x0003e063) popup_battery_window_g1_ParamLimits

0xdff1,	// (0x0003e063) popup_battery_window_g1

0xdffd,	// (0x0003e06f) popup_battery_window_t1_ParamLimits

0xdffd,	// (0x0003e06f) popup_battery_window_t1

0xe00f,	// (0x0003e081) popup_battery_window_t2_ParamLimits

0xe00f,	// (0x0003e081) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003fe08) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003fe08) popup_battery_window_t

0x94d8,	// (0x0003954a) midp_canvas_pane_ParamLimits

0x9551,	// (0x000395c3) midp_keypad_pane_ParamLimits

0x9551,	// (0x000395c3) midp_keypad_pane

0x980a,	// (0x0003987c) main_midp_pane_ParamLimits

0xbd97,	// (0x0003be09) signal_pane_g2_cp_ParamLimits

0xe02c,	// (0x0003e09e) aid_size_cell_midp_keypad_ParamLimits

0xe02c,	// (0x0003e09e) aid_size_cell_midp_keypad

0xe046,	// (0x0003e0b8) midp_keyp_game_grid_pane_ParamLimits

0xe046,	// (0x0003e0b8) midp_keyp_game_grid_pane

0xe066,	// (0x0003e0d8) midp_keyp_rocker_pane_ParamLimits

0xe066,	// (0x0003e0d8) midp_keyp_rocker_pane

0xe09f,	// (0x0003e111) midp_keyp_sk_left_pane_ParamLimits

0xe09f,	// (0x0003e111) midp_keyp_sk_left_pane

0xe0f9,	// (0x0003e16b) midp_keyp_sk_right_pane_ParamLimits

0xe0f9,	// (0x0003e16b) midp_keyp_sk_right_pane

0x2336,	// (0x000323a8) bg_button_pane_cp03

0xe153,	// (0x0003e1c5) midp_keyp_sk_left_pane_g1

0x2336,	// (0x000323a8) bg_button_pane_cp04

0xe153,	// (0x0003e1c5) midp_keyp_sk_right_pane_g1

0xc2de,	// (0x0003c350) midp_keyp_rocker_pane_g1

0xe15c,	// (0x0003e1ce) keyp_game_cell_pane_ParamLimits

0xe15c,	// (0x0003e1ce) keyp_game_cell_pane

0x2336,	// (0x000323a8) bg_button_pane_cp02

0xe16f,	// (0x0003e1e1) keyp_game_cell_pane_g1

0x5d2a,	// (0x00035d9c) popup_fep_vkb2_window_ParamLimits

0x5d2a,	// (0x00035d9c) popup_fep_vkb2_window

0x894a,	// (0x000389bc) aid_size_cell_vkb2_ParamLimits

0x894a,	// (0x000389bc) aid_size_cell_vkb2

0x899e,	// (0x00038a10) popup_fep_vkb2_window_g1_ParamLimits

0x899e,	// (0x00038a10) popup_fep_vkb2_window_g1

0x89e6,	// (0x00038a58) vkb2_area_bottom_pane_ParamLimits

0x89e6,	// (0x00038a58) vkb2_area_bottom_pane

0x8a32,	// (0x00038aa4) vkb2_area_keypad_pane_ParamLimits

0x8a32,	// (0x00038aa4) vkb2_area_keypad_pane

0x8a74,	// (0x00038ae6) vkb2_area_top_pane_ParamLimits

0x8a74,	// (0x00038ae6) vkb2_area_top_pane

0x8aee,	// (0x00038b60) vkb2_top_entry_pane_ParamLimits

0x8aee,	// (0x00038b60) vkb2_top_entry_pane

0x8b18,	// (0x00038b8a) vkb2_top_grid_left_pane_ParamLimits

0x8b18,	// (0x00038b8a) vkb2_top_grid_left_pane

0x8b36,	// (0x00038ba8) vkb2_top_grid_right_pane_ParamLimits

0x8b36,	// (0x00038ba8) vkb2_top_grid_right_pane

0x8b54,	// (0x00038bc6) vkb2_cell_keypad_pane_ParamLimits

0x8b54,	// (0x00038bc6) vkb2_cell_keypad_pane

0x8c25,	// (0x00038c97) vkb2_area_bottom_grid_pane_ParamLimits

0x8c25,	// (0x00038c97) vkb2_area_bottom_grid_pane

0x8c4b,	// (0x00038cbd) vkb2_area_bottom_pane_g1_ParamLimits

0x8c4b,	// (0x00038cbd) vkb2_area_bottom_pane_g1

0x8c6f,	// (0x00038ce1) vkb2_area_bottom_pane_g2_ParamLimits

0x8c6f,	// (0x00038ce1) vkb2_area_bottom_pane_g2

0x8c9d,	// (0x00038d0f) vkb2_area_bottom_pane_g3_ParamLimits

0x8c9d,	// (0x00038d0f) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003fe0d) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003fe0d) vkb2_area_bottom_pane_g

0x8cfe,	// (0x00038d70) vkb2_top_cell_left_pane_ParamLimits

0x8cfe,	// (0x00038d70) vkb2_top_cell_left_pane

0xe180,	// (0x0003e1f2) vkb2_top_entry_pane_g1_ParamLimits

0xe180,	// (0x0003e1f2) vkb2_top_entry_pane_g1

0xe18e,	// (0x0003e200) vkb2_top_entry_pane_t1_ParamLimits

0xe18e,	// (0x0003e200) vkb2_top_entry_pane_t1

0xe1c0,	// (0x0003e232) vkb2_top_entry_pane_t2_ParamLimits

0xe1c0,	// (0x0003e232) vkb2_top_entry_pane_t2

0xe1f2,	// (0x0003e264) vkb2_top_entry_pane_t3_ParamLimits

0xe1f2,	// (0x0003e264) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003fe14) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003fe14) vkb2_top_entry_pane_t

0x8d4b,	// (0x00038dbd) vkb2_top_grid_right_pane_g1_ParamLimits

0x8d4b,	// (0x00038dbd) vkb2_top_grid_right_pane_g1

0x8d61,	// (0x00038dd3) vkb2_top_grid_right_pane_g2_ParamLimits

0x8d61,	// (0x00038dd3) vkb2_top_grid_right_pane_g2

0x8d79,	// (0x00038deb) vkb2_top_grid_right_pane_g3_ParamLimits

0x8d79,	// (0x00038deb) vkb2_top_grid_right_pane_g3

0x8d91,	// (0x00038e03) vkb2_top_grid_right_pane_g4_ParamLimits

0x8d91,	// (0x00038e03) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003fe1b) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003fe1b) vkb2_top_grid_right_pane_g

0x8da7,	// (0x00038e19) vkb2_top_cell_left_pane_g1

0x8dbe,	// (0x00038e30) vkb2_cell_keypad_pane_g1_ParamLimits

0x8dbe,	// (0x00038e30) vkb2_cell_keypad_pane_g1

0xe216,	// (0x0003e288) vkb2_cell_keypad_pane_t1_ParamLimits

0xe216,	// (0x0003e288) vkb2_cell_keypad_pane_t1

0x8dcc,	// (0x00038e3e) vkb2_cell_bottom_grid_pane_ParamLimits

0x8dcc,	// (0x00038e3e) vkb2_cell_bottom_grid_pane

0x8e05,	// (0x00038e77) vkb2_cell_bottom_grid_pane_g1

0xddc1,	// (0x0003de33) aid_call2_pane_cp02

0xddc9,	// (0x0003de3b) aid_call_pane_cp02

0xddd1,	// (0x0003de43) clock_digital_number_pane_cp10

0xddd9,	// (0x0003de4b) clock_digital_number_pane_cp11

0xdde1,	// (0x0003de53) clock_digital_number_pane_cp12

0xdde9,	// (0x0003de5b) clock_digital_number_pane_cp13

0xddf1,	// (0x0003de63) clock_digital_separator_pane_cp10

0x2b8b,	// (0x00032bfd) popup_clock_digital_analogue_window_cp2_g1

0x2b8b,	// (0x00032bfd) popup_clock_digital_analogue_window_cp2_g2

0xddf9,	// (0x0003de6b) popup_clock_digital_analogue_window_cp2_g3

0x2b8b,	// (0x00032bfd) popup_clock_digital_analogue_window_cp2_g4

0xddf9,	// (0x0003de6b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003fdd0) popup_clock_digital_analogue_window_cp2_g

0xde01,	// (0x0003de73) popup_clock_digital_analogue_window_cp2_t1

0xde0f,	// (0x0003de81) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003fddb) popup_clock_digital_analogue_window_cp2_t

0xc2de,	// (0x0003c350) clock_digital_number_pane_cp10_g1

0xc2de,	// (0x0003c350) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003fbbe) clock_digital_number_pane_cp10_g

0xc2de,	// (0x0003c350) clock_digital_separator_pane_cp10_g1

0xc2de,	// (0x0003c350) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003fbbe) clock_digital_separator_pane_cp10_g

0xdc3e,	// (0x0003dcb0) uniindi_top_pane_g3

0xdc4f,	// (0x0003dcc1) uniindi_top_pane_g4

0x8bdf,	// (0x00038c51) vkb2_row_keypad_pane_ParamLimits

0x8bdf,	// (0x00038c51) vkb2_row_keypad_pane

0x8e21,	// (0x00038e93) vkb2_cell_t_keypad_pane_ParamLimits

0x8e21,	// (0x00038e93) vkb2_cell_t_keypad_pane

0x8e31,	// (0x00038ea3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8e31,	// (0x00038ea3) vkb2_cell_t_keypad_pane_cp08

0x8e44,	// (0x00038eb6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e44,	// (0x00038eb6) vkb2_cell_t_keypad_pane_cp09

0x8e58,	// (0x00038eca) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8e58,	// (0x00038eca) vkb2_cell_t_keypad_pane_cp01

0x8e69,	// (0x00038edb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8e69,	// (0x00038edb) vkb2_cell_t_keypad_pane_cp02

0x8e7a,	// (0x00038eec) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8e7a,	// (0x00038eec) vkb2_cell_t_keypad_pane_cp03

0x8e8b,	// (0x00038efd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8e8b,	// (0x00038efd) vkb2_cell_t_keypad_pane_cp04

0x8e9c,	// (0x00038f0e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8e9c,	// (0x00038f0e) vkb2_cell_t_keypad_pane_cp05

0x8ead,	// (0x00038f1f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8ead,	// (0x00038f1f) vkb2_cell_t_keypad_pane_cp06

0x8ebe,	// (0x00038f30) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8ebe,	// (0x00038f30) vkb2_cell_t_keypad_pane_cp07

0x8ecf,	// (0x00038f41) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8ecf,	// (0x00038f41) vkb2_cell_t_keypad_pane_cp10

0x855e,	// (0x000385d0) vkb2_cell_t_keypad_pane_g1

0xe22d,	// (0x0003e29f) vkb2_cell_t_keypad_pane_t1

0x5c2f,	// (0x00035ca1) popup_grid_graphic2_window

0xe23f,	// (0x0003e2b1) aid_size_cell_graphic2_ParamLimits

0xe23f,	// (0x0003e2b1) aid_size_cell_graphic2

0xe277,	// (0x0003e2e9) bg_popup_window_pane_cp21_ParamLimits

0xe277,	// (0x0003e2e9) bg_popup_window_pane_cp21

0xe285,	// (0x0003e2f7) graphic2_pages_pane_ParamLimits

0xe285,	// (0x0003e2f7) graphic2_pages_pane

0xe2cb,	// (0x0003e33d) grid_graphic2_control_pane_ParamLimits

0xe2cb,	// (0x0003e33d) grid_graphic2_control_pane

0xe309,	// (0x0003e37b) grid_graphic2_pane_ParamLimits

0xe309,	// (0x0003e37b) grid_graphic2_pane

0xe37d,	// (0x0003e3ef) cell_graphic2_pane

0x5c2f,	// (0x00035ca1) main_comp_mode_pane

0xd4c1,	// (0x0003d533) list_ai3_gene_pane_ParamLimits

0xd885,	// (0x0003d8f7) bg_popup_window_pane_cp19_ParamLimits

0xd891,	// (0x0003d903) bg_touch_area_indi_pane_ParamLimits

0xd891,	// (0x0003d903) bg_touch_area_indi_pane

0xd8a7,	// (0x0003d919) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8a7,	// (0x0003d919) bg_touch_area_indi_pane_cp01

0xd8bd,	// (0x0003d92f) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8bd,	// (0x0003d92f) bg_touch_area_indi_pane_cp02

0xd8d5,	// (0x0003d947) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8d5,	// (0x0003d947) bg_touch_area_indi_pane_cp03

0xd8ef,	// (0x0003d961) popup_slider_window_g1_ParamLimits

0xd90b,	// (0x0003d97d) popup_slider_window_g2_ParamLimits

0xd927,	// (0x0003d999) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003fd65) popup_slider_window_g_ParamLimits

0xd983,	// (0x0003d9f5) popup_slider_window_t1_ParamLimits

0xd9f7,	// (0x0003da69) small_volume_slider_vertical_pane_ParamLimits

0xe37d,	// (0x0003e3ef) cell_graphic2_pane_ParamLimits

0xe3cc,	// (0x0003e43e) bg_button_pane_cp10_ParamLimits

0xe3cc,	// (0x0003e43e) bg_button_pane_cp10

0xe3df,	// (0x0003e451) bg_button_pane_cp11_ParamLimits

0xe3df,	// (0x0003e451) bg_button_pane_cp11

0xe3f2,	// (0x0003e464) graphic2_pages_pane_g1_ParamLimits

0xe3f2,	// (0x0003e464) graphic2_pages_pane_g1

0xe40d,	// (0x0003e47f) graphic2_pages_pane_g2_ParamLimits

0xe40d,	// (0x0003e47f) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003fe29) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003fe29) graphic2_pages_pane_g

0xe425,	// (0x0003e497) graphic2_pages_pane_t1_ParamLimits

0xe425,	// (0x0003e497) graphic2_pages_pane_t1

0xe43d,	// (0x0003e4af) cell_graphic2_control_pane_ParamLimits

0xe43d,	// (0x0003e4af) cell_graphic2_control_pane

0xe45b,	// (0x0003e4cd) cell_graphic2_pane_g1_ParamLimits

0xe45b,	// (0x0003e4cd) cell_graphic2_pane_g1

0xe468,	// (0x0003e4da) cell_graphic2_pane_g2_ParamLimits

0xe468,	// (0x0003e4da) cell_graphic2_pane_g2

0xe475,	// (0x0003e4e7) cell_graphic2_pane_g3_ParamLimits

0xe475,	// (0x0003e4e7) cell_graphic2_pane_g3

0xe482,	// (0x0003e4f4) cell_graphic2_pane_g4_ParamLimits

0xe482,	// (0x0003e4f4) cell_graphic2_pane_g4

0xe48f,	// (0x0003e501) cell_graphic2_pane_g5_ParamLimits

0xe48f,	// (0x0003e501) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003fe2e) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003fe2e) cell_graphic2_pane_g

0xe4aa,	// (0x0003e51c) cell_graphic2_pane_t1_ParamLimits

0xe4aa,	// (0x0003e51c) cell_graphic2_pane_t1

0x9d8b,	// (0x00039dfd) grid_highlight_pane_cp11_ParamLimits

0x9d8b,	// (0x00039dfd) grid_highlight_pane_cp11

0x24d0,	// (0x00032542) bg_button_pane_cp05

0xe4e1,	// (0x0003e553) cell_graphic2_control_pane_g1

0xc2de,	// (0x0003c350) bg_touch_area_indi_pane_g1

0xe509,	// (0x0003e57b) aid_cmod_rocker_key_size

0xe513,	// (0x0003e585) aid_cmode_itu_key_size

0xe51d,	// (0x0003e58f) main_cmode_video_pane

0xe527,	// (0x0003e599) main_comp_mode_itu_pane

0xe533,	// (0x0003e5a5) main_comp_mode_rocker_pane

0xe53f,	// (0x0003e5b1) cell_cmode_rocker_pane_ParamLimits

0xe53f,	// (0x0003e5b1) cell_cmode_rocker_pane

0xe551,	// (0x0003e5c3) cell_cmode_itu_pane_ParamLimits

0xe551,	// (0x0003e5c3) cell_cmode_itu_pane

0x2758,	// (0x000327ca) bg_button_pane_cp06_ParamLimits

0x2758,	// (0x000327ca) bg_button_pane_cp06

0xc54e,	// (0x0003c5c0) cell_cmode_rocker_pane_g1_ParamLimits

0xc54e,	// (0x0003c5c0) cell_cmode_rocker_pane_g1

0xda9b,	// (0x0003db0d) cell_cmode_rocker_pane_g2_ParamLimits

0xda9b,	// (0x0003db0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003fe3e) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003fe3e) cell_cmode_rocker_pane_g

0x2336,	// (0x000323a8) bg_button_pane_cp07

0xe566,	// (0x0003e5d8) cell_cmode_itu_pane_g1

0xe56f,	// (0x0003e5e1) cell_cmode_itu_pane_t1

0xe57d,	// (0x0003e5ef) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003fe43) cell_cmode_itu_pane_t

0xdcc0,	// (0x0003dd32) aid_touch_ctrl_left

0xdcc8,	// (0x0003dd3a) aid_touch_ctrl_right

0x2336,	// (0x000323a8) compa_mode_pane

0xe58b,	// (0x0003e5fd) aid_cmod_rocker_key_size_cp

0xe595,	// (0x0003e607) aid_cmode_itu_key_size_cp

0xe59f,	// (0x0003e611) compa_mode_pane_g1

0xe5a7,	// (0x0003e619) compa_mode_pane_g2

0xe5af,	// (0x0003e621) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003fe48) compa_mode_pane_g

0xe5b7,	// (0x0003e629) main_comp_mode_itu_pane_cp

0xe5bf,	// (0x0003e631) main_comp_mode_rocker_pane_cp

0xe5c7,	// (0x0003e639) cell_cmode_itu_pane_cp_ParamLimits

0xe5c7,	// (0x0003e639) cell_cmode_itu_pane_cp

0xe5dc,	// (0x0003e64e) cell_cmode_rocker_pane_cp_ParamLimits

0xe5dc,	// (0x0003e64e) cell_cmode_rocker_pane_cp

0x2758,	// (0x000327ca) bg_button_pane_cp06_cp_ParamLimits

0x2758,	// (0x000327ca) bg_button_pane_cp06_cp

0xc54e,	// (0x0003c5c0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc54e,	// (0x0003c5c0) cell_cmode_rocker_pane_g1_cp

0xc2de,	// (0x0003c350) cell_cmode_rocker_pane_g2_cp

0x2336,	// (0x000323a8) bg_button_pane_cp07_cp

0xe5ee,	// (0x0003e660) cell_cmode_itu_pane_g1_cp

0xe5f7,	// (0x0003e669) cell_cmode_itu_pane_t1_cp

0xe5f7,	// (0x0003e669) cell_cmode_itu_pane_t2_cp

0xb214,	// (0x0003b286) settings_code_pane_cp2

0x23a6,	// (0x00032418) bg_popup_window_pane_cp3_ParamLimits

0x25e9,	// (0x0003265b) heading_pane_cp3_ParamLimits

0x25f5,	// (0x00032667) listscroll_popup_graphic_pane_ParamLimits

0x8307,	// (0x00038379) fep_hwr_aid_pane_ParamLimits

0x88a5,	// (0x00038917) aid_touch_sctrl_top_ParamLimits

0x88c0,	// (0x00038932) sctrl_sk_top_pane_g1_ParamLimits

0x855e,	// (0x000385d0) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003fd7e) sctrl_sk_top_pane_g_ParamLimits

0x88cd,	// (0x0003893f) sctrl_sk_top_pane_t1_ParamLimits

0x88a5,	// (0x00038917) aid_touch_sctrl_bottom_ParamLimits

0x88cd,	// (0x0003893f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc0a,	// (0x0003dc7c) aid_area_touch_clock

0x8ab6,	// (0x00038b28) aid_vkb2_area_top_pane_cell_ParamLimits

0x8ab6,	// (0x00038b28) aid_vkb2_area_top_pane_cell

0x8c01,	// (0x00038c73) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8c01,	// (0x00038c73) aid_vkb2_area_bottom_pane_cell

0xe178,	// (0x0003e1ea) popup_char_count_window

0xe605,	// (0x0003e677) popup_char_count_window_g1

0xe60e,	// (0x0003e680) popup_char_count_window_g2

0xe617,	// (0x0003e689) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003fe4f) popup_char_count_window_g

0xe620,	// (0x0003e692) popup_char_count_window_t1

0x897c,	// (0x000389ee) popup_fep_char_preview_window_ParamLimits

0x897c,	// (0x000389ee) popup_fep_char_preview_window

0x8ad4,	// (0x00038b46) vkb2_top_candi_pane_ParamLimits

0x8ad4,	// (0x00038b46) vkb2_top_candi_pane

0xe62e,	// (0x0003e6a0) cell_vkb2_top_candi_pane_ParamLimits

0xe62e,	// (0x0003e6a0) cell_vkb2_top_candi_pane

0x8ee4,	// (0x00038f56) bg_popup_fep_char_preview_window_ParamLimits

0x8ee4,	// (0x00038f56) bg_popup_fep_char_preview_window

0x8ef2,	// (0x00038f64) popup_fep_char_preview_window_t1_ParamLimits

0x8ef2,	// (0x00038f64) popup_fep_char_preview_window_t1

0xe67b,	// (0x0003e6ed) bg_popup_fep_char_preview_window_g1

0xe683,	// (0x0003e6f5) bg_popup_fep_char_preview_window_g2

0xe68b,	// (0x0003e6fd) bg_popup_fep_char_preview_window_g3

0xe693,	// (0x0003e705) bg_popup_fep_char_preview_window_g4

0xe69b,	// (0x0003e70d) bg_popup_fep_char_preview_window_g5

0x8f2c,	// (0x00038f9e) bg_popup_fep_char_preview_window_g6

0xe6a3,	// (0x0003e715) bg_popup_fep_char_preview_window_g7

0xe6ab,	// (0x0003e71d) bg_popup_fep_char_preview_window_g8

0xe6b3,	// (0x0003e725) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003fe56) bg_popup_fep_char_preview_window_g

0x855e,	// (0x000385d0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x855e,	// (0x000385d0) cell_vkb2_top_candi_pane_g1

0x856c,	// (0x000385de) cell_vkb2_top_candi_pane_g2_ParamLimits

0x856c,	// (0x000385de) cell_vkb2_top_candi_pane_g2

0xd055,	// (0x0003d0c7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd055,	// (0x0003d0c7) cell_vkb2_top_candi_pane_g3

0x8f34,	// (0x00038fa6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8f34,	// (0x00038fa6) cell_vkb2_top_candi_pane_g4

0xca3a,	// (0x0003caac) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca3a,	// (0x0003caac) cell_vkb2_top_candi_pane_g5

0x8f55,	// (0x00038fc7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f55,	// (0x00038fc7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003fe69) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003fe69) cell_vkb2_top_candi_pane_g

0x8f63,	// (0x00038fd5) cell_vkb2_top_candi_pane_t1

0x8017,	// (0x00038089) aid_size_touch_slider_mark_ParamLimits

0x8017,	// (0x00038089) aid_size_touch_slider_mark

0xe2bb,	// (0x0003e32d) grid_graphic2_catg_pane_ParamLimits

0xe2bb,	// (0x0003e32d) grid_graphic2_catg_pane

0xe359,	// (0x0003e3cb) popup_grid_graphic2_window_t1_ParamLimits

0xe359,	// (0x0003e3cb) popup_grid_graphic2_window_t1

0xe36b,	// (0x0003e3dd) popup_grid_graphic2_window_t2_ParamLimits

0xe36b,	// (0x0003e3dd) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003fe24) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003fe24) popup_grid_graphic2_window_t

0x24d0,	// (0x00032542) bg_button_pane_cp05_ParamLimits

0xe4e1,	// (0x0003e553) cell_graphic2_control_pane_g1_ParamLimits

0xe6bb,	// (0x0003e72d) cell_graphic2_catg_pane_ParamLimits

0xe6bb,	// (0x0003e72d) cell_graphic2_catg_pane

0x2336,	// (0x000323a8) bg_button_pane_cp12

0xe6cd,	// (0x0003e73f) cell_graphic2_catg_pane_g1

0xdbd5,	// (0x0003dc47) cell_tb_ext_pane_t1_ParamLimits

0x8d1e,	// (0x00038d90) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8d1e,	// (0x00038d90) vkb2_top_cell_right_narrow_pane

0x8d36,	// (0x00038da8) vkb2_top_cell_right_wide_pane_ParamLimits

0x8d36,	// (0x00038da8) vkb2_top_cell_right_wide_pane

0x82f9,	// (0x0003836b) bg_vkb2_func_pane_ParamLimits

0x82f9,	// (0x0003836b) bg_vkb2_func_pane

0x8da7,	// (0x00038e19) vkb2_top_cell_left_pane_g1_ParamLimits

0x82f9,	// (0x0003836b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x82f9,	// (0x0003836b) bg_vkb2_fuc_pane_cp03

0x8e05,	// (0x00038e77) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d1f,	// (0x00039d91) bg_vkb2_func_pane_g1

0x9d27,	// (0x00039d99) bg_vkb2_func_pane_g2

0x9d37,	// (0x00039da9) bg_vkb2_func_pane_g3

0x9d2f,	// (0x00039da1) bg_vkb2_func_pane_g4

0x9d3f,	// (0x00039db1) bg_vkb2_func_pane_g5

0x9d47,	// (0x00039db9) bg_vkb2_func_pane_g6

0x9d4f,	// (0x00039dc1) bg_vkb2_func_pane_g7

0x9d57,	// (0x00039dc9) bg_vkb2_func_pane_g8

0x9d17,	// (0x00039d89) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003fe76) bg_vkb2_func_pane_g

0x82f9,	// (0x0003836b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x82f9,	// (0x0003836b) bg_vkb2_fuc_pane_cp01

0x8da7,	// (0x00038e19) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8da7,	// (0x00038e19) vkb2_top_cell_right_wide_pane_g1

0x82f9,	// (0x0003836b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x82f9,	// (0x0003836b) bg_vkb2_fuc_pane_cp02

0x8e05,	// (0x00038e77) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8e05,	// (0x00038e77) vkb2_top_cell_right_narrow_pane_g1

0xd807,	// (0x0003d879) aid_touch_area_decrease_ParamLimits

0xd807,	// (0x0003d879) aid_touch_area_decrease

0xd827,	// (0x0003d899) aid_touch_area_increase_ParamLimits

0xd827,	// (0x0003d899) aid_touch_area_increase

0xd833,	// (0x0003d8a5) aid_touch_area_mute_ParamLimits

0xd833,	// (0x0003d8a5) aid_touch_area_mute

0xd857,	// (0x0003d8c9) aid_touch_area_slider_ParamLimits

0xd857,	// (0x0003d8c9) aid_touch_area_slider

0xd943,	// (0x0003d9b5) popup_slider_window_g4_ParamLimits

0xd943,	// (0x0003d9b5) popup_slider_window_g4

0xd94f,	// (0x0003d9c1) popup_slider_window_g5_ParamLimits

0xd94f,	// (0x0003d9c1) popup_slider_window_g5

0xd971,	// (0x0003d9e3) popup_slider_window_g6_ParamLimits

0xd971,	// (0x0003d9e3) popup_slider_window_g6

0xd9b1,	// (0x0003da23) popup_slider_window_t2_ParamLimits

0xd9b1,	// (0x0003da23) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003fd72) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003fd72) popup_slider_window_t

0xd9c9,	// (0x0003da3b) slider_pane_ParamLimits

0xd9c9,	// (0x0003da3b) slider_pane

0xe6d6,	// (0x0003e748) slider_pane_g1_ParamLimits

0xe6d6,	// (0x0003e748) slider_pane_g1

0xe6ea,	// (0x0003e75c) slider_pane_g2_ParamLimits

0xe6ea,	// (0x0003e75c) slider_pane_g2

0xe700,	// (0x0003e772) slider_pane_g3_ParamLimits

0xe700,	// (0x0003e772) slider_pane_g3

0x0003,

0xfe17,	// (0x0003fe89) slider_pane_g_ParamLimits

0xfe17,	// (0x0003fe89) slider_pane_g

0x7bf3,	// (0x00037c65) popup_tb_float_extension_window_ParamLimits

0x7bf3,	// (0x00037c65) popup_tb_float_extension_window

0xe72c,	// (0x0003e79e) aid_size_cell_tb_float_ext

0x2336,	// (0x000323a8) bg_popup_sub_window_cp28

0xe738,	// (0x0003e7aa) grid_tb_float_ext_pane

0xe742,	// (0x0003e7b4) cell_tb_float_ext_pane_ParamLimits

0xe742,	// (0x0003e7b4) cell_tb_float_ext_pane

0xe75c,	// (0x0003e7ce) cell_tb_float_ext_pane_g1

0xe765,	// (0x0003e7d7) grid_highlight_pane_cp12

0x8448,	// (0x000384ba) cell_last_hwr_side_pane_ParamLimits

0x8448,	// (0x000384ba) cell_last_hwr_side_pane

0xc2de,	// (0x0003c350) cell_last_hwr_side_pane_g1

0xe76e,	// (0x0003e7e0) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003fe92) cell_last_hwr_side_pane_g

0x8ccd,	// (0x00038d3f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ccd,	// (0x00038d3f) vkb2_area_bottom_space_btn_pane

0x855e,	// (0x000385d0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe22d,	// (0x0003e29f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f63,	// (0x00038fd5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8f82,	// (0x00038ff4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8f82,	// (0x00038ff4) vkb2_area_bottom_space_btn_pane_g1

0x8fbc,	// (0x0003902e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8fbc,	// (0x0003902e) vkb2_area_bottom_space_btn_pane_g2

0x8ff2,	// (0x00039064) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8ff2,	// (0x00039064) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003fe97) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003fe97) vkb2_area_bottom_space_btn_pane_g

0x83bc,	// (0x0003842e) cel_fep_hwr_func_pane_ParamLimits

0x83bc,	// (0x0003842e) cel_fep_hwr_func_pane

0x83f8,	// (0x0003846a) cell_hwr_side_button_pane_ParamLimits

0x83f8,	// (0x0003846a) cell_hwr_side_button_pane

0xdc0a,	// (0x0003dc7c) aid_area_touch_clock_ParamLimits

0x24d0,	// (0x00032542) bg_uniindi_top_pane_ParamLimits

0xdc1c,	// (0x0003dc8e) uniindi_top_pane_g1_ParamLimits

0xdc32,	// (0x0003dca4) uniindi_top_pane_g2_ParamLimits

0xdc3e,	// (0x0003dcb0) uniindi_top_pane_g3_ParamLimits

0xdc4f,	// (0x0003dcc1) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003fdaa) uniindi_top_pane_g_ParamLimits

0xdc5c,	// (0x0003dcce) uniindi_top_pane_t1_ParamLimits

0x24d0,	// (0x00032542) bg_vkb2_func_pane_cp01_ParamLimits

0x24d0,	// (0x00032542) bg_vkb2_func_pane_cp01

0xe777,	// (0x0003e7e9) cel_fep_hwr_func_pane_g1_ParamLimits

0xe777,	// (0x0003e7e9) cel_fep_hwr_func_pane_g1

0x24d0,	// (0x00032542) bg_vkb2_func_pane_cp02_ParamLimits

0x24d0,	// (0x00032542) bg_vkb2_func_pane_cp02

0xe777,	// (0x0003e7e9) cell_hwr_side_button_pane_g1_ParamLimits

0xe777,	// (0x0003e7e9) cell_hwr_side_button_pane_g1

0x9b9b,	// (0x00039c0d) status_pane_g4_ParamLimits

0x9b9b,	// (0x00039c0d) status_pane_g4

0x9bb5,	// (0x00039c27) status_pane_t1

0xc01f,	// (0x0003c091) form2_midp_gauge_slider_cont_pane

0xc027,	// (0x0003c099) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc039,	// (0x0003c0ab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc04b,	// (0x0003c0bd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0003fb71) form2_midp_gauge_slider_pane_t_ParamLimits

0xc05d,	// (0x0003c0cf) form2_midp_slider_pane_ParamLimits

0x893c,	// (0x000389ae) aid_size_cell_func_vkb2_ParamLimits

0x893c,	// (0x000389ae) aid_size_cell_func_vkb2

0xe718,	// (0x0003e78a) slider_pane_g4_ParamLimits

0xe718,	// (0x0003e78a) slider_pane_g4

0x903c,	// (0x000390ae) form2_midp_gauge_slider_pane_t2_cp01

0x904a,	// (0x000390bc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x904a,	// (0x000390bc) form2_midp_gauge_slider_pane_t3_cp01

0x9067,	// (0x000390d9) form2_midp_slider_pane_cp01

0x2336,	// (0x000323a8) navi_smil_pane

0xe7b0,	// (0x0003e822) navi_smil_pane_g1

0xe7b8,	// (0x0003e82a) navi_smil_pane_t1

0xe785,	// (0x0003e7f7) form2_midp_slider_pane_g1

0xe78e,	// (0x0003e800) form2_midp_slider_pane_g2

0xe796,	// (0x0003e808) form2_midp_slider_pane_g3

0xe785,	// (0x0003e7f7) form2_midp_slider_pane_g4

0xe79e,	// (0x0003e810) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003fea0) form2_midp_slider_pane_g

0x902c,	// (0x0003909e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x902c,	// (0x0003909e) vkb2_area_bottom_space_btn_pane_g4

0x99ca,	// (0x00039a3c) lc0_navi_pane_ParamLimits

0x99ca,	// (0x00039a3c) lc0_navi_pane

0x9a40,	// (0x00039ab2) lc0_stat_indi_pane_ParamLimits

0x9a40,	// (0x00039ab2) lc0_stat_indi_pane

0x9a57,	// (0x00039ac9) ls0_title_pane_ParamLimits

0x9a57,	// (0x00039ac9) ls0_title_pane

0x2758,	// (0x000327ca) bg_popup_sub_pane_cp14_ParamLimits

0xdbf1,	// (0x0003dc63) list_uniindi_pane_ParamLimits

0xdbfd,	// (0x0003dc6f) uniindi_top_pane_ParamLimits

0xdc98,	// (0x0003dd0a) list_single_uniindi_pane_g1_ParamLimits

0xdcab,	// (0x0003dd1d) list_single_uniindi_pane_t1_ParamLimits

0x9070,	// (0x000390e2) lc0_stat_clock_pane_ParamLimits

0x9070,	// (0x000390e2) lc0_stat_clock_pane

0xe7c6,	// (0x0003e838) lc0_stat_indi_pane_g1_ParamLimits

0xe7c6,	// (0x0003e838) lc0_stat_indi_pane_g1

0xe7d3,	// (0x0003e845) lc0_stat_indi_pane_g2_ParamLimits

0xe7d3,	// (0x0003e845) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003feab) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003feab) lc0_stat_indi_pane_g

0x907d,	// (0x000390ef) lc0_uni_indicator_pane_ParamLimits

0x907d,	// (0x000390ef) lc0_uni_indicator_pane

0xe7e0,	// (0x0003e852) ls0_title_pane_g1_ParamLimits

0xe7e0,	// (0x0003e852) ls0_title_pane_g1

0xe7f4,	// (0x0003e866) ls0_title_pane_t1_ParamLimits

0xe7f4,	// (0x0003e866) ls0_title_pane_t1

0x908a,	// (0x000390fc) lc0_uni_indicator_pane_g1_ParamLimits

0x908a,	// (0x000390fc) lc0_uni_indicator_pane_g1

0xe82a,	// (0x0003e89c) lc0_stat_clock_pane_t1

0x5c2f,	// (0x00035ca1) main_ai5_pane

0xe838,	// (0x0003e8aa) ai5_sk_pane_ParamLimits

0xe838,	// (0x0003e8aa) ai5_sk_pane

0xe845,	// (0x0003e8b7) cell_ai5_widget_pane_ParamLimits

0xe845,	// (0x0003e8b7) cell_ai5_widget_pane

0xe8f7,	// (0x0003e969) aid_size_cell_widget_grid

0xe905,	// (0x0003e977) bg_ai5_widget_pane_ParamLimits

0xe905,	// (0x0003e977) bg_ai5_widget_pane

0xe979,	// (0x0003e9eb) cell_ai5_widget_pane_g2

0xe989,	// (0x0003e9fb) cell_ai5_widget_pane_g3

0xe9a0,	// (0x0003ea12) cell_ai5_widget_pane_g4

0xe9ac,	// (0x0003ea1e) cell_ai5_widget_pane_g5

0xe9b8,	// (0x0003ea2a) cell_ai5_widget_pane_g6

0xe9c4,	// (0x0003ea36) cell_ai5_widget_pane_g7

0xea0c,	// (0x0003ea7e) cell_ai5_widget_pane_t1_ParamLimits

0xea0c,	// (0x0003ea7e) cell_ai5_widget_pane_t1

0xea29,	// (0x0003ea9b) cell_ai5_widget_pane_t2_ParamLimits

0xea29,	// (0x0003ea9b) cell_ai5_widget_pane_t2

0xea41,	// (0x0003eab3) cell_ai5_widget_pane_t3_ParamLimits

0xea41,	// (0x0003eab3) cell_ai5_widget_pane_t3

0xea59,	// (0x0003eacb) cell_ai5_widget_pane_t4_ParamLimits

0xea59,	// (0x0003eacb) cell_ai5_widget_pane_t4

0xea76,	// (0x0003eae8) cell_ai5_widget_pane_t5_ParamLimits

0xea76,	// (0x0003eae8) cell_ai5_widget_pane_t5

0xea95,	// (0x0003eb07) cell_ai5_widget_pane_t6_ParamLimits

0xea95,	// (0x0003eb07) cell_ai5_widget_pane_t6

0xeaa7,	// (0x0003eb19) cell_ai5_widget_pane_t7_ParamLimits

0xeaa7,	// (0x0003eb19) cell_ai5_widget_pane_t7

0xeac0,	// (0x0003eb32) cell_ai5_widget_pane_t8_ParamLimits

0xeac0,	// (0x0003eb32) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003fec5) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003fec5) cell_ai5_widget_pane_t

0xeb14,	// (0x0003eb86) grid_ai5_widget_pane

0x2758,	// (0x000327ca) highlight_cell_ai5_widget_pane_ParamLimits

0x2758,	// (0x000327ca) highlight_cell_ai5_widget_pane

0xeb22,	// (0x0003eb94) ai5_sk_left_pane

0xeb2c,	// (0x0003eb9e) ai5_sk_middle_pane

0xeb36,	// (0x0003eba8) ai5_sk_right_pane

0xeb40,	// (0x0003ebb2) bg_ai5_widget_pane_g1_ParamLimits

0xeb40,	// (0x0003ebb2) bg_ai5_widget_pane_g1

0xeb4c,	// (0x0003ebbe) bg_ai5_widget_pane_g2_ParamLimits

0xeb4c,	// (0x0003ebbe) bg_ai5_widget_pane_g2

0xeb58,	// (0x0003ebca) bg_ai5_widget_pane_g3_ParamLimits

0xeb58,	// (0x0003ebca) bg_ai5_widget_pane_g3

0xeb64,	// (0x0003ebd6) bg_ai5_widget_pane_g4_ParamLimits

0xeb64,	// (0x0003ebd6) bg_ai5_widget_pane_g4

0xeb70,	// (0x0003ebe2) bg_ai5_widget_pane_g5_ParamLimits

0xeb70,	// (0x0003ebe2) bg_ai5_widget_pane_g5

0xeb7c,	// (0x0003ebee) bg_ai5_widget_pane_g6_ParamLimits

0xeb7c,	// (0x0003ebee) bg_ai5_widget_pane_g6

0xeb88,	// (0x0003ebfa) bg_ai5_widget_pane_g7_ParamLimits

0xeb88,	// (0x0003ebfa) bg_ai5_widget_pane_g7

0xeb94,	// (0x0003ec06) bg_ai5_widget_pane_g8_ParamLimits

0xeb94,	// (0x0003ec06) bg_ai5_widget_pane_g8

0xeba0,	// (0x0003ec12) bg_ai5_widget_pane_g9_ParamLimits

0xeba0,	// (0x0003ec12) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003feda) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003feda) bg_ai5_widget_pane_g

0xebd2,	// (0x0003ec44) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd2,	// (0x0003ec44) cell_shortcut_ai5_widget_pane

0x94c4,	// (0x00039536) bg_cell_shortcut_ai5_widget_pane

0xebe3,	// (0x0003ec55) cell_grid_ai5_widget_pane_g1

0x94c4,	// (0x00039536) highlight_cell_shortcut_ai5_widget_pane

0x9d1f,	// (0x00039d91) ai5_sk_left_pane_g1

0xebec,	// (0x0003ec5e) ai5_sk_left_pane_g2

0xebf4,	// (0x0003ec66) ai5_sk_left_pane_g3

0xebfc,	// (0x0003ec6e) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003feed) ai5_sk_left_pane_g

0xec04,	// (0x0003ec76) ai5_sk_left_pane_t1

0x9d27,	// (0x00039d99) ai5_sk_right_pane_g1

0xec12,	// (0x0003ec84) ai5_sk_right_pane_g2

0xec1a,	// (0x0003ec8c) ai5_sk_right_pane_g3

0xec22,	// (0x0003ec94) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003fef6) ai5_sk_right_pane_g

0xec2a,	// (0x0003ec9c) ai5_sk_right_pane_t1

0x9d27,	// (0x00039d99) ai5_sk_middle_pane_g1

0x9d1f,	// (0x00039d91) ai5_sk_middle_pane_g2

0x9d3f,	// (0x00039db1) ai5_sk_middle_pane_g3

0xec1a,	// (0x0003ec8c) ai5_sk_middle_pane_g4

0xebf4,	// (0x0003ec66) ai5_sk_middle_pane_g5

0xec38,	// (0x0003ecaa) ai5_sk_middle_pane_g6

0xec40,	// (0x0003ecb2) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003feff) ai5_sk_middle_pane_g

0x9850,	// (0x000398c2) aid_touch_area_size_lc0_ParamLimits

0x9850,	// (0x000398c2) aid_touch_area_size_lc0

0x858d,	// (0x000385ff) cell_hwr_candidate_pane_t1_ParamLimits

0x986c,	// (0x000398de) aid_touch_navi_pane

0x9b45,	// (0x00039bb7) status_dt_navi_pane_ParamLimits

0x9b45,	// (0x00039bb7) status_dt_navi_pane

0x9b52,	// (0x00039bc4) status_dt_sta_pane_ParamLimits

0x9b52,	// (0x00039bc4) status_dt_sta_pane

0xec48,	// (0x0003ecba) dt_sta_controll_pane

0xec55,	// (0x0003ecc7) dt_sta_indi_pane

0xec66,	// (0x0003ecd8) dt_sta_title_pane

0x24d0,	// (0x00032542) bg_dt_sta_indi_pane_ParamLimits

0x24d0,	// (0x00032542) bg_dt_sta_indi_pane

0xec79,	// (0x0003eceb) dt_sta_battery_pane

0xec81,	// (0x0003ecf3) dt_sta_indi_pane_g1

0xec8a,	// (0x0003ecfc) dt_sta_indi_pane_g2

0xec93,	// (0x0003ed05) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003ff0e) dt_sta_indi_pane_g

0xec9c,	// (0x0003ed0e) dt_sta_signal_pane

0x2758,	// (0x000327ca) bg_dt_sta_title_pane_ParamLimits

0x2758,	// (0x000327ca) bg_dt_sta_title_pane

0xab4d,	// (0x0003abbf) dt_sta_title_pane_g1

0xeca5,	// (0x0003ed17) dt_sta_title_pane_t1_ParamLimits

0xeca5,	// (0x0003ed17) dt_sta_title_pane_t1

0x2336,	// (0x000323a8) bg_dt_sta_control_pane

0xecba,	// (0x0003ed2c) dt_sta_controll_pane_g1

0xecc3,	// (0x0003ed35) bg_dt_sta_title_pane_g1

0xeccc,	// (0x0003ed3e) bg_dt_sta_title_pane_g2

0xecd5,	// (0x0003ed47) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003ff15) bg_dt_sta_title_pane_g

0xc2de,	// (0x0003c350) bg_dt_sta_indi_pane_g1

0xecde,	// (0x0003ed50) dt_sta_signal_pane_g1

0xece6,	// (0x0003ed58) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003ff1c) dt_sta_signal_pane_g

0xecee,	// (0x0003ed60) dt_sta_battery_pane_g1

0xecf7,	// (0x0003ed69) dt_sta_battery_pane_t1

0xc2de,	// (0x0003c350) bg_dt_sta_control_pane_g1

0x2c0e,	// (0x00032c80) fep_china_uni_eep_pane

0x2c16,	// (0x00032c88) fep_china_uni_entry_pane_ParamLimits

0x2c26,	// (0x00032c98) popup_fep_china_uni_window_g1_ParamLimits

0x2c36,	// (0x00032ca8) popup_fep_china_uni_window_g2_ParamLimits

0x2c36,	// (0x00032ca8) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0003f785) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0003f785) popup_fep_china_uni_window_g

0xed06,	// (0x0003ed78) fep_china_uni_eep_pane_g1

0xed0e,	// (0x0003ed80) fep_china_uni_eep_pane_t1

0xe7a7,	// (0x0003e819) aid_touch_area_size_smil_player

0x99c2,	// (0x00039a34) lc0_clock_pane

0x9ba9,	// (0x00039c1b) status_pane_g5_ParamLimits

0x9ba9,	// (0x00039c1b) status_pane_g5

0x78b4,	// (0x00037926) popup_keymap_window

0x9b67,	// (0x00039bd9) status_icon_pane

0xe989,	// (0x0003e9fb) cell_ai5_widget_pane_g3_ParamLimits

0xe9a0,	// (0x0003ea12) cell_ai5_widget_pane_g4_ParamLimits

0xe9ac,	// (0x0003ea1e) cell_ai5_widget_pane_g5_ParamLimits

0xe9d0,	// (0x0003ea42) cell_ai5_widget_pane_g8_ParamLimits

0xe9d0,	// (0x0003ea42) cell_ai5_widget_pane_g8

0xe9e4,	// (0x0003ea56) cell_ai5_widget_pane_g9_ParamLimits

0xe9e4,	// (0x0003ea56) cell_ai5_widget_pane_g9

0xe9f8,	// (0x0003ea6a) cell_ai5_widget_pane_g10_ParamLimits

0xe9f8,	// (0x0003ea6a) cell_ai5_widget_pane_g10

0xed1d,	// (0x0003ed8f) status_icon_pane_g1

0x2336,	// (0x000323a8) bg_popup_sub_pane_cp13

0xed25,	// (0x0003ed97) popup_keymap_window_t1

0x9795,	// (0x00039807) control_pane_g6_ParamLimits

0x9795,	// (0x00039807) control_pane_g6

0x97a2,	// (0x00039814) control_pane_g7_ParamLimits

0x97a2,	// (0x00039814) control_pane_g7

0x97af,	// (0x00039821) control_pane_g8_ParamLimits

0x97af,	// (0x00039821) control_pane_g8

0xec48,	// (0x0003ecba) dt_sta_controll_pane_ParamLimits

0xec55,	// (0x0003ecc7) dt_sta_indi_pane_ParamLimits

0xec66,	// (0x0003ecd8) dt_sta_title_pane_ParamLimits

0x26a3,	// (0x00032715) aid_size_touch_scroll_bar_cale

0x5d08,	// (0x00035d7a) popup_discreet_window_ParamLimits

0x5d08,	// (0x00035d7a) popup_discreet_window

0x5d82,	// (0x00035df4) popup_sk_window

0xa391,	// (0x0003a403) bg_popup_sub_pane_cp28_ParamLimits

0xa391,	// (0x0003a403) bg_popup_sub_pane_cp28

0xed33,	// (0x0003eda5) popup_discreet_window_g1_ParamLimits

0xed33,	// (0x0003eda5) popup_discreet_window_g1

0xed53,	// (0x0003edc5) popup_discreet_window_t1_ParamLimits

0xed53,	// (0x0003edc5) popup_discreet_window_t1

0xed71,	// (0x0003ede3) popup_discreet_window_t2_ParamLimits

0xed71,	// (0x0003ede3) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003ff21) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003ff21) popup_discreet_window_t

0x909e,	// (0x00039110) popup_sk_window_g1

0x90a8,	// (0x0003911a) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003ff28) popup_sk_window_g

0x90b0,	// (0x00039122) popup_sk_window_t1

0x90be,	// (0x00039130) popup_sk_window_t1_copy1

0xe979,	// (0x0003e9eb) cell_ai5_widget_pane_g2_ParamLimits

0xead2,	// (0x0003eb44) cell_ai5_widget_pane_t9_ParamLimits

0xead2,	// (0x0003eb44) cell_ai5_widget_pane_t9

0x2336,	// (0x000323a8) main_fep_fshwr2_pane

0x90cc,	// (0x0003913e) aid_fshwr2_btn_pane

0x90d8,	// (0x0003914a) aid_fshwr2_syb_pane

0x90e9,	// (0x0003915b) aid_fshwr2_txt_pane

0x90f5,	// (0x00039167) fshwr2_func_candi_pane

0x910d,	// (0x0003917f) fshwr2_hwr_syb_pane

0x9124,	// (0x00039196) fshwr2_icf_pane

0x5c2f,	// (0x00035ca1) fshwr2_icf_bg_pane

0x914d,	// (0x000391bf) fshwr2_icf_pane_t1_ParamLimits

0x914d,	// (0x000391bf) fshwr2_icf_pane_t1

0x2b8b,	// (0x00032bfd) fshwr2_func_candi_pane_g1

0xedc3,	// (0x0003ee35) fshwr2_func_candi_row_pane_ParamLimits

0xedc3,	// (0x0003ee35) fshwr2_func_candi_row_pane

0x9166,	// (0x000391d8) cell_fshwr2_syb_pane_ParamLimits

0x9166,	// (0x000391d8) cell_fshwr2_syb_pane

0x855e,	// (0x000385d0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x855e,	// (0x000385d0) fshwr2_hwr_syb_pane_g1

0x5c2f,	// (0x00035ca1) bg_popup_call_pane_cp01

0x917c,	// (0x000391ee) fshwr2_func_candi_cell_pane_ParamLimits

0x917c,	// (0x000391ee) fshwr2_func_candi_cell_pane

0xa9ed,	// (0x0003aa5f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9ed,	// (0x0003aa5f) fshwr2_func_candi_cell_bg_pane

0x91c7,	// (0x00039239) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x91c7,	// (0x00039239) fshwr2_func_candi_cell_pane_g1

0x91ef,	// (0x00039261) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x91ef,	// (0x00039261) fshwr2_func_candi_cell_pane_t1

0x5c2f,	// (0x00035ca1) bg_button_pane_cp08

0xedd3,	// (0x0003ee45) cell_fshwr2_syb_bg_pane

0x9202,	// (0x00039274) cell_fshwr2_syb_bg_pane_g1

0x920a,	// (0x0003927c) cell_fshwr2_syb_bg_pane_t1

0x2758,	// (0x000327ca) main_tmo_pane

0xae86,	// (0x0003aef8) uni_indicator_pane_g1_ParamLimits

0xae99,	// (0x0003af0b) uni_indicator_pane_g2_ParamLimits

0xaeab,	// (0x0003af1d) uni_indicator_pane_g3_ParamLimits

0xaeba,	// (0x0003af2c) uni_indicator_pane_g4_ParamLimits

0xaeba,	// (0x0003af2c) uni_indicator_pane_g4

0xaece,	// (0x0003af40) uni_indicator_pane_g5_ParamLimits

0xaece,	// (0x0003af40) uni_indicator_pane_g5

0xaece,	// (0x0003af40) uni_indicator_pane_g6_ParamLimits

0xaece,	// (0x0003af40) uni_indicator_pane_g6

0xf912,	// (0x0003f984) uni_indicator_pane_g_ParamLimits

0xd7e9,	// (0x0003d85b) popup_tmo_note_window_ParamLimits

0xd7e9,	// (0x0003d85b) popup_tmo_note_window

0x891e,	// (0x00038990) fshwr2_bg_pane

0x91e0,	// (0x00039252) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x91e0,	// (0x00039252) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003ff2d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003ff2d) fshwr2_func_candi_cell_pane_g

0x8546,	// (0x000385b8) bg_popup_window_pane_cp01

0x9219,	// (0x0003928b) bg_popup_window_pane_g1_cp01

0xeddb,	// (0x0003ee4d) bg_popup_window_pane_cp22_ParamLimits

0xeddb,	// (0x0003ee4d) bg_popup_window_pane_cp22

0xede9,	// (0x0003ee5b) listscroll_tmo_link_pane_ParamLimits

0xede9,	// (0x0003ee5b) listscroll_tmo_link_pane

0xee29,	// (0x0003ee9b) popup_tmo_note_window_g1_ParamLimits

0xee29,	// (0x0003ee9b) popup_tmo_note_window_g1

0xee36,	// (0x0003eea8) tmo_note_info_pane_ParamLimits

0xee36,	// (0x0003eea8) tmo_note_info_pane

0xee50,	// (0x0003eec2) list_tmo_note_info_pane_g1_ParamLimits

0xee50,	// (0x0003eec2) list_tmo_note_info_pane_g1

0xee67,	// (0x0003eed9) list_tmo_note_info_pane_g2_ParamLimits

0xee67,	// (0x0003eed9) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003ff32) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003ff32) list_tmo_note_info_pane_g

0xee83,	// (0x0003eef5) list_tmo_note_info_text_pane_ParamLimits

0xee83,	// (0x0003eef5) list_tmo_note_info_text_pane

0xef04,	// (0x0003ef76) list_tmo_link_pane

0xef11,	// (0x0003ef83) scroll_pane_cp20

0xef1e,	// (0x0003ef90) list_single_tmo_link_pane_ParamLimits

0xef1e,	// (0x0003ef90) list_single_tmo_link_pane

0xef2e,	// (0x0003efa0) list_single_tmo_link_pane_t1

0xef3c,	// (0x0003efae) list_tmo_note_info_text_pane_t1_ParamLimits

0xef3c,	// (0x0003efae) list_tmo_note_info_text_pane_t1

0x6a2c,	// (0x00036a9e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6a2c,	// (0x00036a9e) aid_size_touch_scroll_bar_cp01

0x691e,	// (0x00036990) aid_size_touch_slider_marker

0x5d6a,	// (0x00035ddc) popup_settings_window_ParamLimits

0x5d6a,	// (0x00035ddc) popup_settings_window

0x478e,	// (0x00034800) popup_candi_list_indi_window

0x986c,	// (0x000398de) aid_touch_navi_pane_ParamLimits

0x8879,	// (0x000388eb) rs_clock_indi_pane

0x8882,	// (0x000388f4) sctrl_sk_bottom_pane_ParamLimits

0x8893,	// (0x00038905) sctrl_sk_top_pane_ParamLimits

0x8996,	// (0x00038a08) popup_fep_tooltip_window

0xe8f7,	// (0x0003e969) aid_size_cell_widget_grid_ParamLimits

0xe964,	// (0x0003e9d6) cell_ai5_widget_pane_g1_ParamLimits

0xe964,	// (0x0003e9d6) cell_ai5_widget_pane_g1

0xe9b8,	// (0x0003ea2a) cell_ai5_widget_pane_g6_ParamLimits

0xe9c4,	// (0x0003ea36) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003feb0) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003feb0) cell_ai5_widget_pane_g

0xeaf6,	// (0x0003eb68) cell_ai5_widget_pane_t10_ParamLimits

0xeaf6,	// (0x0003eb68) cell_ai5_widget_pane_t10

0xeb14,	// (0x0003eb86) grid_ai5_widget_pane_ParamLimits

0xebac,	// (0x0003ec1e) cell_contacts_ai5_widget_pane_ParamLimits

0xebac,	// (0x0003ec1e) cell_contacts_ai5_widget_pane

0xed86,	// (0x0003edf8) popup_discreet_window_t3_ParamLimits

0xed86,	// (0x0003edf8) popup_discreet_window_t3

0x9139,	// (0x000391ab) popup_fshwr2_char_preview_window_ParamLimits

0x9139,	// (0x000391ab) popup_fshwr2_char_preview_window

0xeea1,	// (0x0003ef13) tmo_note_info_pane_t1

0xeeb6,	// (0x0003ef28) tmo_note_info_pane_t2

0xeecb,	// (0x0003ef3d) tmo_note_info_pane_t3

0xeee0,	// (0x0003ef52) tmo_note_info_pane_t4

0xeef2,	// (0x0003ef64) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003ff37) tmo_note_info_pane_t

0xef04,	// (0x0003ef76) list_tmo_link_pane_ParamLimits

0xef11,	// (0x0003ef83) scroll_pane_cp20_ParamLimits

0x5c2f,	// (0x00035ca1) bg_popup_fep_char_preview_window_cp01

0xef55,	// (0x0003efc7) popup_fshwr2_char_preview_window_t1

0xef63,	// (0x0003efd5) popup_candi_list_indi_window_g1

0xef6c,	// (0x0003efde) bg_cell_contacts_ai5_widget_pane

0xef78,	// (0x0003efea) cell_contacts_ai5_widget_pane_g1

0xc98f,	// (0x0003ca01) cell_contacts_ai5_widget_pane_g2

0xef8d,	// (0x0003efff) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003ff42) cell_contacts_ai5_widget_pane_g

0xef99,	// (0x0003f00b) cell_contacts_ai5_widget_pane_t1

0x2758,	// (0x000327ca) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf010,	// (0x0003f082) settings_container_pane

0x94c4,	// (0x00039536) listscroll_set_pane_copy1

0xb9e7,	// (0x0003ba59) scroll_pane_cp121_copy1

0xa14a,	// (0x0003a1bc) set_content_pane_copy1

0xf01c,	// (0x0003f08e) aid_height_set_list_copy1_ParamLimits

0xf01c,	// (0x0003f08e) aid_height_set_list_copy1

0xb0c6,	// (0x0003b138) aid_size_parent_copy1_ParamLimits

0xb0c6,	// (0x0003b138) aid_size_parent_copy1

0xf028,	// (0x0003f09a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf028,	// (0x0003f09a) button_value_adjust_pane_cp6_copy1

0x980a,	// (0x0003987c) list_highlight_pane_cp2_copy1_ParamLimits

0x980a,	// (0x0003987c) list_highlight_pane_cp2_copy1

0xf03c,	// (0x0003f0ae) list_set_pane_copy1_ParamLimits

0xf03c,	// (0x0003f0ae) list_set_pane_copy1

0xefab,	// (0x0003f01d) main_pane_set_t1_copy1_ParamLimits

0xefab,	// (0x0003f01d) main_pane_set_t1_copy1

0xefe5,	// (0x0003f057) main_pane_set_t2_copy1_ParamLimits

0xefe5,	// (0x0003f057) main_pane_set_t2_copy1

0xf0e9,	// (0x0003f15b) main_pane_set_t3_copy1

0xf0f7,	// (0x0003f169) main_pane_set_t4_copy1

0xf004,	// (0x0003f076) set_content_pane_g1_copy1_ParamLimits

0xf004,	// (0x0003f076) set_content_pane_g1_copy1

0xf105,	// (0x0003f177) setting_code_pane_copy1

0xf10d,	// (0x0003f17f) setting_slider_graphic_pane_copy1

0xf10d,	// (0x0003f17f) setting_slider_pane_copy1

0xf10d,	// (0x0003f17f) setting_text_pane_copy1

0xf10d,	// (0x0003f17f) setting_volume_pane_copy1

0xf105,	// (0x0003f177) settings_code_pane_cp2_copy1

0xf115,	// (0x0003f187) settings_code_pane_cp_copy1_ParamLimits

0xf115,	// (0x0003f187) settings_code_pane_cp_copy1

0x9222,	// (0x00039294) volume_set_pane_copy1

0xf129,	// (0x0003f19b) volume_set_pane_g10_copy1

0xf131,	// (0x0003f1a3) volume_set_pane_g1_copy1

0xf139,	// (0x0003f1ab) volume_set_pane_g2_copy1

0xf141,	// (0x0003f1b3) volume_set_pane_g3_copy1

0xf149,	// (0x0003f1bb) volume_set_pane_g4_copy1

0xf151,	// (0x0003f1c3) volume_set_pane_g5_copy1

0xf159,	// (0x0003f1cb) volume_set_pane_g6_copy1

0xf161,	// (0x0003f1d3) volume_set_pane_g7_copy1

0xf169,	// (0x0003f1db) volume_set_pane_g8_copy1

0xf171,	// (0x0003f1e3) volume_set_pane_g9_copy1

0x23a6,	// (0x00032418) bg_set_opt_pane_cp_copy1_ParamLimits

0x23a6,	// (0x00032418) bg_set_opt_pane_cp_copy1

0x922a,	// (0x0003929c) setting_slider_pane_t1_copy1_ParamLimits

0x922a,	// (0x0003929c) setting_slider_pane_t1_copy1

0x9248,	// (0x000392ba) setting_slider_pane_t2_copy1_ParamLimits

0x9248,	// (0x000392ba) setting_slider_pane_t2_copy1

0x9262,	// (0x000392d4) setting_slider_pane_t3_copy1_ParamLimits

0x9262,	// (0x000392d4) setting_slider_pane_t3_copy1

0x927a,	// (0x000392ec) slider_set_pane_copy1_ParamLimits

0x927a,	// (0x000392ec) slider_set_pane_copy1

0x27b0,	// (0x00032822) set_opt_bg_pane_g1_copy2

0x27b8,	// (0x0003282a) set_opt_bg_pane_g2_copy2

0xf179,	// (0x0003f1eb) set_opt_bg_pane_g3_copy2

0x27c8,	// (0x0003283a) set_opt_bg_pane_g4_copy2

0x27d0,	// (0x00032842) set_opt_bg_pane_g5_copy2

0x27d8,	// (0x0003284a) set_opt_bg_pane_g6_copy2

0xf183,	// (0x0003f1f5) set_opt_bg_pane_g7_copy2

0xf18b,	// (0x0003f1fd) set_opt_bg_pane_g8_copy2

0xf195,	// (0x0003f207) set_opt_bg_pane_g9_copy2

0x9290,	// (0x00039302) aid_size_touch_slider_mark_copy1_ParamLimits

0x9290,	// (0x00039302) aid_size_touch_slider_mark_copy1

0xf19f,	// (0x0003f211) slider_set_pane_g1_copy1

0x92a4,	// (0x00039316) slider_set_pane_g2_copy1

0x8037,	// (0x000380a9) slider_set_pane_g3_copy1_ParamLimits

0x8037,	// (0x000380a9) slider_set_pane_g3_copy1

0x804b,	// (0x000380bd) slider_set_pane_g4_copy1_ParamLimits

0x804b,	// (0x000380bd) slider_set_pane_g4_copy1

0x8063,	// (0x000380d5) slider_set_pane_g5_copy1_ParamLimits

0x8063,	// (0x000380d5) slider_set_pane_g5_copy1

0x8037,	// (0x000380a9) slider_set_pane_g6_copy1_ParamLimits

0x8037,	// (0x000380a9) slider_set_pane_g6_copy1

0x92ac,	// (0x0003931e) slider_set_pane_g7_copy1_ParamLimits

0x92ac,	// (0x0003931e) slider_set_pane_g7_copy1

0x234a,	// (0x000323bc) bg_set_opt_pane_cp2_copy1

0xf1a8,	// (0x0003f21a) setting_slider_graphic_pane_g1_copy1

0xf1b1,	// (0x0003f223) setting_slider_graphic_pane_t1_copy1

0xf1c1,	// (0x0003f233) setting_slider_graphic_pane_t2_copy1

0xf1d1,	// (0x0003f243) slider_set_pane_cp_copy1

0xf1e1,	// (0x0003f253) input_focus_pane_cp1_copy1

0xf1ea,	// (0x0003f25c) list_set_text_pane_copy1

0xf1f2,	// (0x0003f264) setting_text_pane_g1_copy1

0x4e94,	// (0x00034f06) set_text_pane_t1_copy1

0xf1e1,	// (0x0003f253) input_focus_pane_cp2_copy1

0xf1f2,	// (0x0003f264) setting_code_pane_g1_copy1

0xf1fb,	// (0x0003f26d) setting_code_pane_t1_copy1

0xf209,	// (0x0003f27b) list_set_graphic_pane_copy1

0x234a,	// (0x000323bc) bg_set_opt_pane_cp4_copy1

0x72de,	// (0x00037350) list_set_graphic_pane_g1_copy1_ParamLimits

0x72de,	// (0x00037350) list_set_graphic_pane_g1_copy1

0xf21d,	// (0x0003f28f) list_set_graphic_pane_g2_copy1

0x72f6,	// (0x00037368) list_set_graphic_pane_t1_copy1_ParamLimits

0x72f6,	// (0x00037368) list_set_graphic_pane_t1_copy1

0xc2de,	// (0x0003c350) rs_clock_indi_pane_g1

0xf225,	// (0x0003f297) rs_clock_indi_pane_t1

0xf233,	// (0x0003f2a5) rs_indi_pane

0xf23b,	// (0x0003f2ad) rs_indi_pane_g1

0xf244,	// (0x0003f2b6) rs_indi_pane_g2

0xef63,	// (0x0003efd5) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003ff49) rs_indi_pane_g

0x94c4,	// (0x00039536) bg_popup_preview_window_pane_cp03

0xf24d,	// (0x0003f2bf) popup_fep_tooltip_window_t1

0xcf79,	// (0x0003cfeb) popup_note2_window_g2_ParamLimits

0xcf79,	// (0x0003cfeb) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003fce9) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003fce9) popup_note2_window_g

0xd487,	// (0x0003d4f9) bg_popup_sub_pane_cp11_ParamLimits

0xd494,	// (0x0003d506) cell_ai3_links_pane_g1_ParamLimits

0xd4ab,	// (0x0003d51d) cell_ai3_links_pane_t1

0x4e94,	// (0x00034f06) set_text_pane_t1_copy1_ParamLimits

0x74e4,	// (0x00037556) cell_graphic_popup_pane_cp2_ParamLimits

0x74e4,	// (0x00037556) cell_graphic_popup_pane_cp2

0xf25b,	// (0x0003f2cd) cell_graphic_popup_pane_g1_cp2

0x2626,	// (0x00032698) cell_graphic_popup_pane_g2_cp2

0xf263,	// (0x0003f2d5) cell_graphic_popup_pane_g3_cp2

0xf26b,	// (0x0003f2dd) cell_graphic_popup_pane_t2_cp2

0x2637,	// (0x000326a9) grid_highlight_pane_cp3_cp2

0x2a08,	// (0x00032a7a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2758,	// (0x000327ca) main_tmo_pane_ParamLimits

0xd7dd,	// (0x0003d84f) popup_tmo_big_image_note_window

0xe953,	// (0x0003e9c5) cell_ai5_widget_list_pane

0xe95b,	// (0x0003e9cd) cell_ai5_widget_lrg_icon_pane

0xeea1,	// (0x0003ef13) tmo_note_info_pane_t1_ParamLimits

0xeeb6,	// (0x0003ef28) tmo_note_info_pane_t2_ParamLimits

0xeecb,	// (0x0003ef3d) tmo_note_info_pane_t3_ParamLimits

0xeee0,	// (0x0003ef52) tmo_note_info_pane_t4_ParamLimits

0xeef2,	// (0x0003ef64) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003ff37) tmo_note_info_pane_t_ParamLimits

0xf010,	// (0x0003f082) settings_container_pane_ParamLimits

0xf1d9,	// (0x0003f24b) indicator_popup_pane_cp5

0xf1d9,	// (0x0003f24b) indicator_popup_pane_cp6

0xf209,	// (0x0003f27b) list_set_graphic_pane_copy1_ParamLimits

0x2336,	// (0x000323a8) bg_popup_window_pane_cp23

0xf279,	// (0x0003f2eb) popup_tmo_big_image_note_window_g1

0xf282,	// (0x0003f2f4) popup_tmo_big_image_note_window_t1

0xf292,	// (0x0003f304) popup_tmo_big_image_note_window_t2

0xf2a2,	// (0x0003f314) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003ff50) popup_tmo_big_image_note_window_t

0xc2de,	// (0x0003c350) cell_ai5_widget_lrg_icon_pane_g1

0xf2b2,	// (0x0003f324) cell_ai5_widget_lrg_icon_pane_t1

0xf2c0,	// (0x0003f332) cell_ai5_widget_list_row_pane_ParamLimits

0xf2c0,	// (0x0003f332) cell_ai5_widget_list_row_pane

0xf2d7,	// (0x0003f349) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d7,	// (0x0003f349) cell_ai5_widget_list_row_pane_g1

0xf2e4,	// (0x0003f356) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e4,	// (0x0003f356) cell_ai5_widget_list_row_pane_t1

0xf30f,	// (0x0003f381) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30f,	// (0x0003f381) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0003ff57) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003ff57) cell_ai5_widget_list_row_pane_t

0x5c2f,	// (0x00035ca1) main_fep_vtchi_ss_pane

0xf353,	// (0x0003f3c5) popup_fep_char_pre_window

0xf35b,	// (0x0003f3cd) popup_fep_ituss_window

0xf37c,	// (0x0003f3ee) popup_fep_vkbss_window

0xf3a6,	// (0x0003f418) grid_vkbss_keypad_pane_ParamLimits

0xf3a6,	// (0x0003f418) grid_vkbss_keypad_pane

0xf3b2,	// (0x0003f424) ituss_keypad_pane

0x92ce,	// (0x00039340) aid_vkbss_key_offset_ParamLimits

0x92ce,	// (0x00039340) aid_vkbss_key_offset

0x92da,	// (0x0003934c) cell_vkbss_key_pane_ParamLimits

0x92da,	// (0x0003934c) cell_vkbss_key_pane

0x9b83,	// (0x00039bf5) bg_cell_vkbss_key_g1_ParamLimits

0x9b83,	// (0x00039bf5) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0003f433) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0003f433) cell_vkbss_key_3p_pane

0xf3d5,	// (0x0003f447) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x0003f447) cell_vkbss_key_g1

0xf3e9,	// (0x0003f45b) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x0003f45b) cell_vkbss_key_t1

0x92f0,	// (0x00039362) cell_ituss_key_pane_ParamLimits

0x92f0,	// (0x00039362) cell_ituss_key_pane

0xf414,	// (0x0003f486) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x0003f486) bg_cell_ituss_key_g1

0xf420,	// (0x0003f492) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0003f492) cell_ituss_key_pane_g1

0x9301,	// (0x00039373) cell_ituss_key_pane_g2_ParamLimits

0x9301,	// (0x00039373) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x0003ff5e) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0003ff5e) cell_ituss_key_pane_g

0x932d,	// (0x0003939f) cell_ituss_key_t1_ParamLimits

0x932d,	// (0x0003939f) cell_ituss_key_t1

0x9367,	// (0x000393d9) cell_ituss_key_t2_ParamLimits

0x9367,	// (0x000393d9) cell_ituss_key_t2

0x9398,	// (0x0003940a) cell_ituss_key_t3_ParamLimits

0x9398,	// (0x0003940a) cell_ituss_key_t3

0x9367,	// (0x000393d9) cell_ituss_key_t4_ParamLimits

0x9367,	// (0x000393d9) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x0003ff65) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0003ff65) cell_ituss_key_t

0xf446,	// (0x0003f4b8) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0003f4c0) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x0003f4c8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x0003ff70) cell_vkbss_key_3p_pane_g

0x5c2f,	// (0x00035ca1) bg_popup_fep_char_preview_window_cp02

0x93db,	// (0x0003944d) popup_fep_char_pre_window_t1

0xe8ed,	// (0x0003e95f) main_ai5_sk_pane

0xef6c,	// (0x0003efde) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef78,	// (0x0003efea) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc98f,	// (0x0003ca01) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef8d,	// (0x0003efff) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003ff42) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef99,	// (0x0003f00b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2758,	// (0x000327ca) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0003f4d0) main_ai5_sk_pane_g1

0xa1d2,	// (0x0003a244) popup_query_code_window_g1

0xf371,	// (0x0003f3e3) popup_fep_vkb_icf_pane

0xf390,	// (0x0003f402) popup_fep_vtchi_icf_pane

0xf467,	// (0x0003f4d9) bg_icf_pane

0xf473,	// (0x0003f4e5) list_vkb_icf_pane

0xf482,	// (0x0003f4f4) bg_icf_pane_cp01

0xf495,	// (0x0003f507) vtchi_icf_list_pane

0xf4a5,	// (0x0003f517) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x0003f517) list_vkb_icf_pane_t1

0xf4bc,	// (0x0003f52e) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x0003f52e) vtchi_icf_list_pane_t1

0xf35b,	// (0x0003f3cd) popup_fep_ituss_window_ParamLimits

0xf390,	// (0x0003f402) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0003f424) ituss_keypad_pane_ParamLimits

0x92c2,	// (0x00039334) ituss_sks_pane

0xf467,	// (0x0003f4d9) bg_icf_pane_ParamLimits

0xf337,	// (0x0003f3a9) icf_edit_indi_pane_ParamLimits

0xf337,	// (0x0003f3a9) icf_edit_indi_pane

0xf473,	// (0x0003f4e5) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x0003f4f4) bg_icf_pane_cp01_ParamLimits

0xf346,	// (0x0003f3b8) icf_edit_indi_pane_cp01_ParamLimits

0xf346,	// (0x0003f3b8) icf_edit_indi_pane_cp01

0xf49d,	// (0x0003f50f) vtchi_query_pane

0xc54e,	// (0x0003c5c0) icf_edit_indi_pane_g1_ParamLimits

0xc54e,	// (0x0003c5c0) icf_edit_indi_pane_g1

0xf531,	// (0x0003f5a3) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0003f5a3) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0003ff88) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0003ff88) icf_edit_indi_pane_g

0xf540,	// (0x0003f5b2) icf_edit_indi_pane_t1

0xf4da,	// (0x0003f54c) bg_input_focus_pane_cp042

0x269a,	// (0x0003270c) vtchi_button_pane

0xf4e3,	// (0x0003f555) vtchi_query_pane_t1

0xf4f1,	// (0x0003f563) vtchi_query_pane_t2

0xf4ff,	// (0x0003f571) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0003ff77) vtchi_query_pane_t

0x5c2f,	// (0x00035ca1) bg_button_pane_cp13

0xf50d,	// (0x0003f57f) vtchi_button_pane_g1

0x93ea,	// (0x0003945c) ituss_sks_pane_g1

0x93f5,	// (0x00039467) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0003ff7e) ituss_sks_pane_g

0xf515,	// (0x0003f587) ituss_sks_pane_t1

0xf523,	// (0x0003f595) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0003ff83) ituss_sks_pane_t

0xbd61,	// (0x0003bdd3) indicator_nsta_pane_cp_g1

0xbd69,	// (0x0003bddb) indicator_nsta_pane_cp_g2

0xbd71,	// (0x0003bde3) indicator_nsta_pane_cp_g3

0xbd61,	// (0x0003bdd3) indicator_nsta_pane_cp_g4

0xbd69,	// (0x0003bddb) indicator_nsta_pane_cp_g5

0xbd71,	// (0x0003bde3) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0003fb27) indicator_nsta_pane_cp_g

0xe4ce,	// (0x0003e540) cell_graphic2_pane_t2_ParamLimits

0xe4ce,	// (0x0003e540) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003fe39) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003fe39) cell_graphic2_pane_t

0xe4fb,	// (0x0003e56d) cell_graphic2_control_pane_t1

0x6ed4,	// (0x00036f46) signal_pane_g3_ParamLimits

0x6ed4,	// (0x00036f46) signal_pane_g3

0x6ee6,	// (0x00036f58) signal_pane_g4_ParamLimits

0x6ee6,	// (0x00036f58) signal_pane_g4

0xf321,	// (0x0003f393) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf321,	// (0x0003f393) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x0003f4a6) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x0003f4a6) cell_ituss_key_pane_t1

0x9e19,	// (0x00039e8b) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e19,	// (0x00039e8b) form_field_data_wide_pane_vc_t2

0x9e2d,	// (0x00039e9f) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e2d,	// (0x00039e9f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0003f86c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0003f86c) form_field_data_wide_pane_vc_t

0xba29,	// (0x0003ba9b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba29,	// (0x0003ba9b) form_field_slider_wide_pane_vc_t3

0xbb07,	// (0x0003bb79) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb07,	// (0x0003bb79) form_field_popup_wide_pane_vc_t2

0xbb1e,	// (0x0003bb90) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb1e,	// (0x0003bb90) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0003fb16) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0003fb16) form_field_popup_wide_pane_vc_t

0x90cc,	// (0x0003913e) aid_fshwr2_btn_pane_ParamLimits

0x90d8,	// (0x0003914a) aid_fshwr2_syb_pane_ParamLimits

0x90e9,	// (0x0003915b) aid_fshwr2_txt_pane_ParamLimits

0x891e,	// (0x00038990) fshwr2_bg_pane_ParamLimits

0x90f5,	// (0x00039167) fshwr2_func_candi_pane_ParamLimits

0x910d,	// (0x0003917f) fshwr2_hwr_syb_pane_ParamLimits

0x9124,	// (0x00039196) fshwr2_icf_pane_ParamLimits

0x4b89,	// (0x00034bfb) list_double_graphic_pane_vc_g4_ParamLimits

0x4b89,	// (0x00034bfb) list_double_graphic_pane_vc_g4

0x9321,	// (0x00039393) cell_ituss_key_pane_g3_ParamLimits

0x9321,	// (0x00039393) cell_ituss_key_pane_g3

0x93c9,	// (0x0003943b) cell_ituss_key_t5_ParamLimits

0x93c9,	// (0x0003943b) cell_ituss_key_t5

0xf37c,	// (0x0003f3ee) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
