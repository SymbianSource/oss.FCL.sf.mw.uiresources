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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00002570 };

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
0x9662,	// (0x0000bbd2) Screen

0x966e,	// (0x0000bbde) application_window_ParamLimits

0x966e,	// (0x0000bbde) application_window

0xde9e,	// (0x0001040e) screen_g1

0x96a6,	// (0x0000bc16) area_bottom_pane_ParamLimits

0x96a6,	// (0x0000bc16) area_bottom_pane

0xdec8,	// (0x00010438) area_top_pane_ParamLimits

0xdec8,	// (0x00010438) area_top_pane

0xdf5c,	// (0x000104cc) main_pane_ParamLimits

0xdf5c,	// (0x000104cc) main_pane

0xe017,	// (0x00010587) misc_graphics

0xb06e,	// (0x0000d5de) battery_pane_ParamLimits

0xb06e,	// (0x0000d5de) battery_pane

0x1c5b,	// (0x000041cb) bg_status_flat_pane_g8

0x1c63,	// (0x000041d3) bg_status_flat_pane_g9

0x0dd9,	// (0x00003349) context_pane_ParamLimits

0x0dd9,	// (0x00003349) context_pane

0xb1e5,	// (0x0000d755) navi_pane_ParamLimits

0xb1e5,	// (0x0000d755) navi_pane

0xb26f,	// (0x0000d7df) signal_pane_ParamLimits

0xb26f,	// (0x0000d7df) signal_pane

0x0008,

0xf868,	// (0x00011dd8) bg_status_flat_pane_g

0xb2ff,	// (0x0000d86f) status_pane_g1_ParamLimits

0xb2ff,	// (0x0000d86f) status_pane_g1

0xb315,	// (0x0000d885) status_pane_g2_ParamLimits

0xb315,	// (0x0000d885) status_pane_g2

0x101a,	// (0x0000358a) status_pane_g3_ParamLimits

0x101a,	// (0x0000358a) status_pane_g3

0x0004,

0xf79b,	// (0x00011d0b) status_pane_g_ParamLimits

0xf79b,	// (0x00011d0b) status_pane_g

0xb321,	// (0x0000d891) title_pane_ParamLimits

0xb321,	// (0x0000d891) title_pane

0xb384,	// (0x0000d8f4) uni_indicator_pane_ParamLimits

0xb384,	// (0x0000d8f4) uni_indicator_pane

0x05f2,	// (0x00002b62) bg_list_pane_ParamLimits

0x05f2,	// (0x00002b62) bg_list_pane

0xa89c,	// (0x0000ce0c) find_pane

0xa8a4,	// (0x0000ce14) listscroll_app_pane_ParamLimits

0xa8a4,	// (0x0000ce14) listscroll_app_pane

0x0626,	// (0x00002b96) listscroll_form_pane

0xa8b4,	// (0x0000ce24) listscroll_gen_pane_ParamLimits

0xa8b4,	// (0x0000ce24) listscroll_gen_pane

0x0642,	// (0x00002bb2) listscroll_set_pane

0x2a6a,	// (0x00004fda) main_idle_act_pane

0x00e3,	// (0x00002653) main_idle_trad_pane

0x00e3,	// (0x00002653) main_list_empty_pane

0x065c,	// (0x00002bcc) main_midp_pane

0x0668,	// (0x00002bd8) main_pane_g1_ParamLimits

0x0668,	// (0x00002bd8) main_pane_g1

0xa8c8,	// (0x0000ce38) popup_ai_message_window_ParamLimits

0xa8c8,	// (0x0000ce38) popup_ai_message_window

0xa968,	// (0x0000ced8) popup_fep_china_uni_window_ParamLimits

0xa968,	// (0x0000ced8) popup_fep_china_uni_window

0x0792,	// (0x00002d02) popup_fep_japan_candidate_window_ParamLimits

0x0792,	// (0x00002d02) popup_fep_japan_candidate_window

0x07bc,	// (0x00002d2c) popup_fep_japan_predictive_window_ParamLimits

0x07bc,	// (0x00002d2c) popup_fep_japan_predictive_window

0xa9c8,	// (0x0000cf38) popup_find_window

0xa9e5,	// (0x0000cf55) popup_grid_graphic_window_ParamLimits

0xa9e5,	// (0x0000cf55) popup_grid_graphic_window

0x082d,	// (0x00002d9d) popup_large_graphic_colour_window

0xaa89,	// (0x0000cff9) popup_menu_window_ParamLimits

0xaa89,	// (0x0000cff9) popup_menu_window

0xac79,	// (0x0000d1e9) popup_note_image_window

0xac39,	// (0x0000d1a9) popup_note_wait_window_ParamLimits

0xac39,	// (0x0000d1a9) popup_note_wait_window

0xac91,	// (0x0000d201) popup_note_window_ParamLimits

0xac91,	// (0x0000d201) popup_note_window

0xad3f,	// (0x0000d2af) popup_query_code_window_ParamLimits

0xad3f,	// (0x0000d2af) popup_query_code_window

0x0a99,	// (0x00003009) popup_query_data_code_window_ParamLimits

0x0a99,	// (0x00003009) popup_query_data_code_window

0xad7f,	// (0x0000d2ef) popup_query_data_window_ParamLimits

0xad7f,	// (0x0000d2ef) popup_query_data_window

0xae13,	// (0x0000d383) popup_query_sat_info_window_ParamLimits

0xae13,	// (0x0000d383) popup_query_sat_info_window

0xaebe,	// (0x0000d42e) popup_snote_single_graphic_window_ParamLimits

0xaebe,	// (0x0000d42e) popup_snote_single_graphic_window

0xaebe,	// (0x0000d42e) popup_snote_single_text_window_ParamLimits

0xaebe,	// (0x0000d42e) popup_snote_single_text_window

0x0b34,	// (0x000030a4) popup_sub_window_general

0x0c7a,	// (0x000031ea) popup_window_general_ParamLimits

0x0c7a,	// (0x000031ea) popup_window_general

0x0c93,	// (0x00003203) power_save_pane

0xa70a,	// (0x0000cc7a) control_pane_g1_ParamLimits

0xa70a,	// (0x0000cc7a) control_pane_g1

0xa733,	// (0x0000cca3) control_pane_g2_ParamLimits

0xa733,	// (0x0000cca3) control_pane_g2

0x0497,	// (0x00002a07) control_pane_g3_ParamLimits

0x0497,	// (0x00002a07) control_pane_g3

0x0007,

0xf783,	// (0x00011cf3) control_pane_g_ParamLimits

0xf783,	// (0x00011cf3) control_pane_g

0xa795,	// (0x0000cd05) control_pane_t1_ParamLimits

0xa795,	// (0x0000cd05) control_pane_t1

0xa7f3,	// (0x0000cd63) control_pane_t2_ParamLimits

0xa7f3,	// (0x0000cd63) control_pane_t2

0x0002,

0xf794,	// (0x00011d04) control_pane_t_ParamLimits

0xf794,	// (0x00011d04) control_pane_t

0xa663,	// (0x0000cbd3) navi_navi_volume_pane_cp1

0xa66b,	// (0x0000cbdb) status_small_icon_pane

0x037e,	// (0x000028ee) status_small_pane_g1_ParamLimits

0x037e,	// (0x000028ee) status_small_pane_g1

0xa673,	// (0x0000cbe3) status_small_pane_g2_ParamLimits

0xa673,	// (0x0000cbe3) status_small_pane_g2

0xa67f,	// (0x0000cbef) status_small_pane_g3_ParamLimits

0xa67f,	// (0x0000cbef) status_small_pane_g3

0xa68b,	// (0x0000cbfb) status_small_pane_g4_ParamLimits

0xa68b,	// (0x0000cbfb) status_small_pane_g4

0xa697,	// (0x0000cc07) status_small_pane_g5_ParamLimits

0xa697,	// (0x0000cc07) status_small_pane_g5

0xa6a5,	// (0x0000cc15) status_small_pane_g6_ParamLimits

0xa6a5,	// (0x0000cc15) status_small_pane_g6

0x0007,

0xf772,	// (0x00011ce2) status_small_pane_g_ParamLimits

0xf772,	// (0x00011ce2) status_small_pane_g

0xa6d4,	// (0x0000cc44) status_small_pane_t1

0xa6f6,	// (0x0000cc66) status_small_wait_pane_ParamLimits

0xa6f6,	// (0x0000cc66) status_small_wait_pane

0xa39d,	// (0x0000c90d) aid_levels_signal_ParamLimits

0xa39d,	// (0x0000c90d) aid_levels_signal

0xa3b5,	// (0x0000c925) signal_pane_g1_ParamLimits

0xa3b5,	// (0x0000c925) signal_pane_g1

0xa3d0,	// (0x0000c940) signal_pane_g2_ParamLimits

0xa3d0,	// (0x0000c940) signal_pane_g2

0x0003,

0xf703,	// (0x00011c73) signal_pane_g_ParamLimits

0xf703,	// (0x00011c73) signal_pane_g

0xf05e,	// (0x000115ce) context_pane_g1

0x9892,	// (0x0000be02) title_pane_g1

0x98bd,	// (0x0000be2d) title_pane_t1

0xe08d,	// (0x000105fd) title_pane_t2

0xe0b3,	// (0x00010623) title_pane_t3

0x0002,

0xf557,	// (0x00011ac7) title_pane_t

0xb3ac,	// (0x0000d91c) aid_levels_battery_ParamLimits

0xb3ac,	// (0x0000d91c) aid_levels_battery

0xb3c8,	// (0x0000d938) battery_pane_g1_ParamLimits

0xb3c8,	// (0x0000d938) battery_pane_g1

0xb3e5,	// (0x0000d955) battery_pane_g2_ParamLimits

0xb3e5,	// (0x0000d955) battery_pane_g2

0x0001,

0xf7a6,	// (0x00011d16) battery_pane_g_ParamLimits

0xf7a6,	// (0x00011d16) battery_pane_g

0xb891,	// (0x0000de01) uni_indicator_pane_g1

0xb8a7,	// (0x0000de17) uni_indicator_pane_g2

0xb8bd,	// (0x0000de2d) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x00011e80) uni_indicator_pane_g

0xf4af,	// (0x00011a1f) navi_icon_pane_ParamLimits

0xf4af,	// (0x00011a1f) navi_icon_pane

0xf433,	// (0x000119a3) navi_midp_pane

0xf4cb,	// (0x00011a3b) navi_navi_pane

0xf4d5,	// (0x00011a45) navi_text_pane_ParamLimits

0xf4d5,	// (0x00011a45) navi_text_pane

0xde9e,	// (0x0001040e) status_small_wait_pane_g1

0xe45b,	// (0x000109cb) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x00011e7b) status_small_wait_pane_g

0xb7f8,	// (0x0000dd68) navi_navi_icon_text_pane

0xb800,	// (0x0000dd70) navi_navi_pane_g1_ParamLimits

0xb800,	// (0x0000dd70) navi_navi_pane_g1

0xb812,	// (0x0000dd82) navi_navi_pane_g2_ParamLimits

0xb812,	// (0x0000dd82) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00011e49) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00011e49) navi_navi_pane_g

0x2450,	// (0x000049c0) navi_navi_tabs_pane

0xb824,	// (0x0000dd94) navi_navi_text_pane

0xb7f8,	// (0x0000dd68) navi_navi_volume_pane

0xb7e6,	// (0x0000dd56) navi_text_pane_t1

0xb7da,	// (0x0000dd4a) navi_icon_pane_g1

0x2347,	// (0x000048b7) navi_navi_text_pane_t1

0xb7b5,	// (0x0000dd25) navi_navi_volume_pane_g1

0xb7bd,	// (0x0000dd2d) volume_small_pane

0xb711,	// (0x0000dc81) navi_navi_icon_text_pane_g1

0xb719,	// (0x0000dc89) navi_navi_icon_text_pane_t1

0xf4cb,	// (0x00011a3b) navi_tabs_2_long_pane

0xf4cb,	// (0x00011a3b) navi_tabs_2_pane

0xf4cb,	// (0x00011a3b) navi_tabs_3_long_pane

0xf4cb,	// (0x00011a3b) navi_tabs_3_pane

0xf4cb,	// (0x00011a3b) navi_tabs_4_pane

0xb6cf,	// (0x0000dc3f) tabs_2_active_pane_ParamLimits

0xb6cf,	// (0x0000dc3f) tabs_2_active_pane

0xb6df,	// (0x0000dc4f) tabs_2_passive_pane_ParamLimits

0xb6df,	// (0x0000dc4f) tabs_2_passive_pane

0xb69d,	// (0x0000dc0d) tabs_3_active_pane_ParamLimits

0xb69d,	// (0x0000dc0d) tabs_3_active_pane

0xb6ad,	// (0x0000dc1d) tabs_3_passive_pane_ParamLimits

0xb6ad,	// (0x0000dc1d) tabs_3_passive_pane

0xb6be,	// (0x0000dc2e) tabs_3_passive_pane_cp_ParamLimits

0xb6be,	// (0x0000dc2e) tabs_3_passive_pane_cp

0xb659,	// (0x0000dbc9) tabs_4_active_pane_ParamLimits

0xb659,	// (0x0000dbc9) tabs_4_active_pane

0xb66a,	// (0x0000dbda) tabs_4_passive_pane_ParamLimits

0xb66a,	// (0x0000dbda) tabs_4_passive_pane

0xb67b,	// (0x0000dbeb) tabs_4_passive_pane_cp_ParamLimits

0xb67b,	// (0x0000dbeb) tabs_4_passive_pane_cp

0xb68c,	// (0x0000dbfc) tabs_4_passive_pane_cp2_ParamLimits

0xb68c,	// (0x0000dbfc) tabs_4_passive_pane_cp2

0xb635,	// (0x0000dba5) tabs_2_long_active_pane_ParamLimits

0xb635,	// (0x0000dba5) tabs_2_long_active_pane

0xb647,	// (0x0000dbb7) tabs_2_long_passive_pane_ParamLimits

0xb647,	// (0x0000dbb7) tabs_2_long_passive_pane

0xb5ea,	// (0x0000db5a) tabs_3_long_active_pane_ParamLimits

0xb5ea,	// (0x0000db5a) tabs_3_long_active_pane

0xb603,	// (0x0000db73) tabs_3_long_passive_pane_ParamLimits

0xb603,	// (0x0000db73) tabs_3_long_passive_pane

0xb61c,	// (0x0000db8c) tabs_3_long_passive_pane_cp_ParamLimits

0xb61c,	// (0x0000db8c) tabs_3_long_passive_pane_cp

0x20c0,	// (0x00004630) volume_small_pane_g1

0xb599,	// (0x0000db09) volume_small_pane_g2

0xb5a2,	// (0x0000db12) volume_small_pane_g3

0xb5ab,	// (0x0000db1b) volume_small_pane_g4

0xb5b4,	// (0x0000db24) volume_small_pane_g5

0xb5bd,	// (0x0000db2d) volume_small_pane_g6

0xb5c6,	// (0x0000db36) volume_small_pane_g7

0xb5cf,	// (0x0000db3f) volume_small_pane_g8

0xb5d8,	// (0x0000db48) volume_small_pane_g9

0xb5e1,	// (0x0000db51) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00011e15) volume_small_pane_g

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp2_ParamLimits

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp2

0x9949,	// (0x0000beb9) tabs_3_active_pane_g1

0x9951,	// (0x0000bec1) tabs_3_active_pane_t1

0xe0c5,	// (0x00010635) bg_passive_tab_pane_cp2_ParamLimits

0xe0c5,	// (0x00010635) bg_passive_tab_pane_cp2

0x9949,	// (0x0000beb9) tabs_3_passive_pane_g1

0x9951,	// (0x0000bec1) tabs_3_passive_pane_t1

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp3_ParamLimits

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp3

0x9963,	// (0x0000bed3) tabs_4_active_pane_g1

0x996b,	// (0x0000bedb) tabs_4_active_pane_t1

0xe0c5,	// (0x00010635) bg_passive_tab_pane_cp3_ParamLimits

0xe0c5,	// (0x00010635) bg_passive_tab_pane_cp3

0x9963,	// (0x0000bed3) tabs_4_1_passive_pane_g1

0x996b,	// (0x0000bedb) tabs_4_1_passive_pane_t1

0x065c,	// (0x00002bcc) list_highlight_pane_cp2

0xb964,	// (0x0000ded4) list_set_pane_ParamLimits

0xb964,	// (0x0000ded4) list_set_pane

0xba2c,	// (0x0000df9c) main_pane_set_t1_ParamLimits

0xba2c,	// (0x0000df9c) main_pane_set_t1

0xba4c,	// (0x0000dfbc) main_pane_set_t2_ParamLimits

0xba4c,	// (0x0000dfbc) main_pane_set_t2

0xba60,	// (0x0000dfd0) main_pane_set_t3_ParamLimits

0xba60,	// (0x0000dfd0) main_pane_set_t3

0xba74,	// (0x0000dfe4) main_pane_set_t4_ParamLimits

0xba74,	// (0x0000dfe4) main_pane_set_t4

0x0003,

0xf975,	// (0x00011ee5) main_pane_set_t_ParamLimits

0xf975,	// (0x00011ee5) main_pane_set_t

0xba88,	// (0x0000dff8) setting_code_pane

0x2bbe,	// (0x0000512e) setting_slider_graphic_pane

0x2bbe,	// (0x0000512e) setting_slider_pane

0x2bbe,	// (0x0000512e) setting_text_pane

0x2bbe,	// (0x0000512e) setting_volume_pane

0xe0d3,	// (0x00010643) volume_set_pane

0xe0dd,	// (0x0001064d) bg_set_opt_pane_cp

0xe0eb,	// (0x0001065b) setting_slider_pane_t1

0xe104,	// (0x00010674) setting_slider_pane_t2

0xe11e,	// (0x0001068e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011ace) setting_slider_pane_t

0xe136,	// (0x000106a6) slider_set_pane

0xe017,	// (0x00010587) bg_set_opt_pane_cp2

0xe14c,	// (0x000106bc) setting_slider_graphic_pane_g1

0xe155,	// (0x000106c5) setting_slider_graphic_pane_t1

0xe165,	// (0x000106d5) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011ad5) setting_slider_graphic_pane_t

0xe175,	// (0x000106e5) slider_set_pane_cp

0xe017,	// (0x00010587) input_focus_pane_cp1

0x2a51,	// (0x00004fc1) list_set_text_pane

0xde9e,	// (0x0001040e) setting_text_pane_g1

0xe017,	// (0x00010587) input_focus_pane_cp2

0xde9e,	// (0x0001040e) setting_code_pane_g1

0xe17d,	// (0x000106ed) setting_code_pane_t1

0xe18b,	// (0x000106fb) set_text_pane_t1_ParamLimits

0xe18b,	// (0x000106fb) set_text_pane_t1

0xe8fc,	// (0x00010e6c) set_opt_bg_pane_g1

0xe904,	// (0x00010e74) set_opt_bg_pane_g2

0x2a29,	// (0x00004f99) set_opt_bg_pane_g3

0xe914,	// (0x00010e84) set_opt_bg_pane_g4

0xe91c,	// (0x00010e8c) set_opt_bg_pane_g5

0xe924,	// (0x00010e94) set_opt_bg_pane_g6

0x2a33,	// (0x00004fa3) set_opt_bg_pane_g7

0x2a3d,	// (0x00004fad) set_opt_bg_pane_g8

0x2a47,	// (0x00004fb7) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00011ed2) set_opt_bg_pane_g

0x29b8,	// (0x00004f28) slider_set_pane_g1

0x29c5,	// (0x00004f35) slider_set_pane_g2

0x0006,

0xf953,	// (0x00011ec3) slider_set_pane_g

0x2820,	// (0x00004d90) volume_set_pane_g1

0x282a,	// (0x00004d9a) volume_set_pane_g2

0x2834,	// (0x00004da4) volume_set_pane_g3

0x283e,	// (0x00004dae) volume_set_pane_g4

0x2848,	// (0x00004db8) volume_set_pane_g5

0x2852,	// (0x00004dc2) volume_set_pane_g6

0x285c,	// (0x00004dcc) volume_set_pane_g7

0x2866,	// (0x00004dd6) volume_set_pane_g8

0x2870,	// (0x00004de0) volume_set_pane_g9

0x287a,	// (0x00004dea) volume_set_pane_g10

0x0009,

0xf92b,	// (0x00011e9b) volume_set_pane_g

0x997d,	// (0x0000beed) indicator_pane_ParamLimits

0x997d,	// (0x0000beed) indicator_pane

0x99a9,	// (0x0000bf19) main_idle_pane_g2_ParamLimits

0x99a9,	// (0x0000bf19) main_idle_pane_g2

0x99e1,	// (0x0000bf51) main_pane_idle_g1_ParamLimits

0x99e1,	// (0x0000bf51) main_pane_idle_g1

0xe1a5,	// (0x00010715) popup_clock_digital_analogue_window_ParamLimits

0xe1a5,	// (0x00010715) popup_clock_digital_analogue_window

0x9a0f,	// (0x0000bf7f) soft_indicator_pane_ParamLimits

0x9a0f,	// (0x0000bf7f) soft_indicator_pane

0x9a2b,	// (0x0000bf9b) wallpaper_pane_ParamLimits

0x9a2b,	// (0x0000bf9b) wallpaper_pane

0xde9e,	// (0x0001040e) wallpaper_pane_g1

0x9a3d,	// (0x0000bfad) indicator_pane_g1_ParamLimits

0x9a3d,	// (0x0000bfad) indicator_pane_g1

0x2faa,	// (0x0000551a) navi_navi_icon_text_pane_srt_g1

0xe1d3,	// (0x00010743) soft_indicator_pane_t1

0xe1ed,	// (0x0001075d) aid_ps_area_pane

0x9a56,	// (0x0000bfc6) aid_ps_clock_pane

0xe1fe,	// (0x0001076e) aid_ps_indicator_pane

0xe20a,	// (0x0001077a) indicator_ps_pane_ParamLimits

0xe20a,	// (0x0001077a) indicator_ps_pane

0xe219,	// (0x00010789) power_save_pane_g1_ParamLimits

0xe219,	// (0x00010789) power_save_pane_g1

0xe225,	// (0x00010795) power_save_pane_g2_ParamLimits

0xe225,	// (0x00010795) power_save_pane_g2

0xdea8,	// (0x00010418) aid_navinavi_width_pane

0xe1ed,	// (0x0001075d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00011ada) power_save_pane_g_ParamLimits

0xf56a,	// (0x00011ada) power_save_pane_g

0xe233,	// (0x000107a3) power_save_pane_t1_ParamLimits

0xe233,	// (0x000107a3) power_save_pane_t1

0x9a56,	// (0x0000bfc6) aid_ps_clock_pane_ParamLimits

0xe1fe,	// (0x0001076e) aid_ps_indicator_pane_ParamLimits

0xe245,	// (0x000107b5) power_save_pane_t4_ParamLimits

0xe245,	// (0x000107b5) power_save_pane_t4

0x0001,

0xf56f,	// (0x00011adf) power_save_pane_t_ParamLimits

0xf56f,	// (0x00011adf) power_save_pane_t

0xe26f,	// (0x000107df) power_save_t3_ParamLimits

0xe26f,	// (0x000107df) power_save_t3

0xe25a,	// (0x000107ca) power_save_t2_ParamLimits

0xe25a,	// (0x000107ca) power_save_t2

0xe284,	// (0x000107f4) indicator_ps_pane_g1

0x9a64,	// (0x0000bfd4) ai_gene_pane_ParamLimits

0x9a64,	// (0x0000bfd4) ai_gene_pane

0x9a7b,	// (0x0000bfeb) ai_links_pane_ParamLimits

0x9a7b,	// (0x0000bfeb) ai_links_pane

0x9a93,	// (0x0000c003) indicator_pane_cp1_ParamLimits

0x9a93,	// (0x0000c003) indicator_pane_cp1

0x9aa2,	// (0x0000c012) main_pane_idle_g1_cp_ParamLimits

0x9aa2,	// (0x0000c012) main_pane_idle_g1_cp

0xe28d,	// (0x000107fd) popup_ai_links_title_window

0x9aba,	// (0x0000c02a) soft_indicator_pane_cp1_ParamLimits

0x9aba,	// (0x0000c02a) soft_indicator_pane_cp1

0x26ff,	// (0x00004c6f) ai_links_pane_g1

0x2708,	// (0x00004c78) grid_ai_links_pane

0xb888,	// (0x0000ddf8) ai_gene_pane_1

0x26ed,	// (0x00004c5d) ai_gene_pane_2

0x26f6,	// (0x00004c66) list_highlight_pane_cp4

0xb864,	// (0x0000ddd4) cell_ai_link_pane_ParamLimits

0xb864,	// (0x0000ddd4) cell_ai_link_pane

0x26bc,	// (0x00004c2c) cell_ai_link_pane_g1

0xe45b,	// (0x000109cb) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x00011e76) cell_ai_link_pane_g

0xe017,	// (0x00010587) grid_highlight_cp2

0xe017,	// (0x00010587) bg_popup_sub_pane_cp1

0xe2a4,	// (0x00010814) popup_ai_links_title_window_t1

0x2608,	// (0x00004b78) ai_gene_pane_1_g1_ParamLimits

0x2608,	// (0x00004b78) ai_gene_pane_1_g1

0x2614,	// (0x00004b84) ai_gene_pane_1_g2_ParamLimits

0x2614,	// (0x00004b84) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x00011e6c) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x00011e6c) ai_gene_pane_1_g

0x2621,	// (0x00004b91) ai_gene_pane_1_t1_ParamLimits

0x2621,	// (0x00004b91) ai_gene_pane_1_t1

0x2655,	// (0x00004bc5) grid_ai_soft_ind_pane

0x25f3,	// (0x00004b63) ai_gene_pane_2_t1_ParamLimits

0x25f3,	// (0x00004b63) ai_gene_pane_2_t1

0x9ace,	// (0x0000c03e) main_pane_empty_t1_ParamLimits

0x9ace,	// (0x0000c03e) main_pane_empty_t1

0x9ae6,	// (0x0000c056) main_pane_empty_t2_ParamLimits

0x9ae6,	// (0x0000c056) main_pane_empty_t2

0x9afb,	// (0x0000c06b) main_pane_empty_t3_ParamLimits

0x9afb,	// (0x0000c06b) main_pane_empty_t3

0x9b0d,	// (0x0000c07d) main_pane_empty_t4_ParamLimits

0x9b0d,	// (0x0000c07d) main_pane_empty_t4

0x9b1f,	// (0x0000c08f) main_pane_empty_t5_ParamLimits

0x9b1f,	// (0x0000c08f) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011ae4) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011ae4) main_pane_empty_t

0xe97c,	// (0x00010eec) bg_popup_window_pane_ParamLimits

0xe97c,	// (0x00010eec) bg_popup_window_pane

0x2355,	// (0x000048c5) find_popup_pane_cp2_ParamLimits

0x2355,	// (0x000048c5) find_popup_pane_cp2

0x2361,	// (0x000048d1) heading_pane_ParamLimits

0x2361,	// (0x000048d1) heading_pane

0xe017,	// (0x00010587) bg_popup_sub_pane

0xb736,	// (0x0000dca6) bg_popup_window_pane_g1_ParamLimits

0xb736,	// (0x0000dca6) bg_popup_window_pane_g1

0xb745,	// (0x0000dcb5) bg_popup_window_pane_g2_ParamLimits

0xb745,	// (0x0000dcb5) bg_popup_window_pane_g2

0xb751,	// (0x0000dcc1) bg_popup_window_pane_g3_ParamLimits

0xb751,	// (0x0000dcc1) bg_popup_window_pane_g3

0xb75d,	// (0x0000dccd) bg_popup_window_pane_g4_ParamLimits

0xb75d,	// (0x0000dccd) bg_popup_window_pane_g4

0xb76c,	// (0x0000dcdc) bg_popup_window_pane_g5_ParamLimits

0xb76c,	// (0x0000dcdc) bg_popup_window_pane_g5

0xb77c,	// (0x0000dcec) bg_popup_window_pane_g6_ParamLimits

0xb77c,	// (0x0000dcec) bg_popup_window_pane_g6

0xb788,	// (0x0000dcf8) bg_popup_window_pane_g7_ParamLimits

0xb788,	// (0x0000dcf8) bg_popup_window_pane_g7

0xb797,	// (0x0000dd07) bg_popup_window_pane_g8_ParamLimits

0xb797,	// (0x0000dd07) bg_popup_window_pane_g8

0xb7a6,	// (0x0000dd16) bg_popup_window_pane_g9_ParamLimits

0xb7a6,	// (0x0000dd16) bg_popup_window_pane_g9

0x232a,	// (0x0000489a) bg_popup_window_pane_g10_ParamLimits

0x232a,	// (0x0000489a) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00011e34) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00011e34) bg_popup_window_pane_g

0x2253,	// (0x000047c3) bg_popup_heading_pane_ParamLimits

0x2253,	// (0x000047c3) bg_popup_heading_pane

0x2eed,	// (0x0000545d) tabs_4_passive_pane_cp_srt_ParamLimits

0x2eed,	// (0x0000545d) tabs_4_passive_pane_cp_srt

0x2eff,	// (0x0000546f) tabs_4_passive_pane_srt_ParamLimits

0x2267,	// (0x000047d7) heading_pane_g2

0x2eff,	// (0x0000546f) tabs_4_passive_pane_srt

0x13e8,	// (0x00003958) bg_passive_tab_pane_cp3_srt_ParamLimits

0x13e8,	// (0x00003958) bg_passive_tab_pane_cp3_srt

0x226f,	// (0x000047df) heading_pane_t1_ParamLimits

0x226f,	// (0x000047df) heading_pane_t1

0x2286,	// (0x000047f6) heading_pane_t2_ParamLimits

0x2286,	// (0x000047f6) heading_pane_t2

0x0001,

0xf8bf,	// (0x00011e2f) heading_pane_t_ParamLimits

0xf8bf,	// (0x00011e2f) heading_pane_t

0x1c23,	// (0x00004193) bg_popup_heading_pane_g1

0x1cd2,	// (0x00004242) bg_popup_heading_pane_g2

0x1cdc,	// (0x0000424c) bg_popup_heading_pane_g3

0x1ce6,	// (0x00004256) bg_popup_heading_pane_g4

0x1cf0,	// (0x00004260) bg_popup_heading_pane_g5

0x1cfa,	// (0x0000426a) bg_popup_heading_pane_g6

0x1d02,	// (0x00004272) bg_popup_heading_pane_g7

0x1d0a,	// (0x0000427a) bg_popup_heading_pane_g8

0x1d14,	// (0x00004284) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00011deb) bg_popup_heading_pane_g

0x124b,	// (0x000037bb) bg_popup_sub_pane_g1

0x1253,	// (0x000037c3) bg_popup_sub_pane_g2

0x125b,	// (0x000037cb) bg_popup_sub_pane_g3

0x1263,	// (0x000037d3) bg_popup_sub_pane_g4

0x126b,	// (0x000037db) bg_popup_sub_pane_g5

0x1273,	// (0x000037e3) bg_popup_sub_pane_g6

0x127b,	// (0x000037eb) bg_popup_sub_pane_g7

0x1283,	// (0x000037f3) bg_popup_sub_pane_g8

0x128b,	// (0x000037fb) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00011dc5) bg_popup_sub_pane_g

0xe0c5,	// (0x00010635) bg_popup_window_pane_cp5_ParamLimits

0xe0c5,	// (0x00010635) bg_popup_window_pane_cp5

0xe2c1,	// (0x00010831) popup_note_window_g1_ParamLimits

0xe2c1,	// (0x00010831) popup_note_window_g1

0xe2cd,	// (0x0001083d) popup_note_window_t1_ParamLimits

0xe2cd,	// (0x0001083d) popup_note_window_t1

0xe2e3,	// (0x00010853) popup_note_window_t2_ParamLimits

0xe2e3,	// (0x00010853) popup_note_window_t2

0xe2f9,	// (0x00010869) popup_note_window_t3_ParamLimits

0xe2f9,	// (0x00010869) popup_note_window_t3

0xe30f,	// (0x0001087f) popup_note_window_t4_ParamLimits

0xe30f,	// (0x0001087f) popup_note_window_t4

0xe337,	// (0x000108a7) popup_note_window_t5_ParamLimits

0xe337,	// (0x000108a7) popup_note_window_t5

0x0004,

0xf57f,	// (0x00011aef) popup_note_window_t_ParamLimits

0xf57f,	// (0x00011aef) popup_note_window_t

0xe35b,	// (0x000108cb) bg_popup_window_pane_cp6_ParamLimits

0xe35b,	// (0x000108cb) bg_popup_window_pane_cp6

0x1b9f,	// (0x0000410f) popup_note_image_window_g1_ParamLimits

0x1b9f,	// (0x0000410f) popup_note_image_window_g1

0x1bab,	// (0x0000411b) popup_note_image_window_g2_ParamLimits

0x1bab,	// (0x0000411b) popup_note_image_window_g2

0x0001,

0xf849,	// (0x00011db9) popup_note_image_window_g_ParamLimits

0xf849,	// (0x00011db9) popup_note_image_window_g

0x1bc4,	// (0x00004134) popup_note_image_window_t1_ParamLimits

0x1bc4,	// (0x00004134) popup_note_image_window_t1

0x1bdd,	// (0x0000414d) popup_note_image_window_t2_ParamLimits

0x1bdd,	// (0x0000414d) popup_note_image_window_t2

0x1bf6,	// (0x00004166) popup_note_image_window_t3_ParamLimits

0x1bf6,	// (0x00004166) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x00011dbe) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x00011dbe) popup_note_image_window_t

0x1a5f,	// (0x00003fcf) bg_popup_window_pane_cp7_ParamLimits

0x1a5f,	// (0x00003fcf) bg_popup_window_pane_cp7

0x1a8f,	// (0x00003fff) popup_note_wait_window_g1_ParamLimits

0x1a8f,	// (0x00003fff) popup_note_wait_window_g1

0x1a9b,	// (0x0000400b) popup_note_wait_window_g2_ParamLimits

0x1a9b,	// (0x0000400b) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x00011da7) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x00011da7) popup_note_wait_window_g

0x1ab3,	// (0x00004023) popup_note_wait_window_t1_ParamLimits

0x1ab3,	// (0x00004023) popup_note_wait_window_t1

0x1ada,	// (0x0000404a) popup_note_wait_window_t2_ParamLimits

0x1ada,	// (0x0000404a) popup_note_wait_window_t2

0x1af8,	// (0x00004068) popup_note_wait_window_t3_ParamLimits

0x1af8,	// (0x00004068) popup_note_wait_window_t3

0x1b0b,	// (0x0000407b) popup_note_wait_window_t4_ParamLimits

0x1b0b,	// (0x0000407b) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x00011dae) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x00011dae) popup_note_wait_window_t

0x1b30,	// (0x000040a0) wait_bar_pane_ParamLimits

0x1b30,	// (0x000040a0) wait_bar_pane

0xe017,	// (0x00010587) wait_anim_pane

0xe017,	// (0x00010587) wait_border_pane

0xde9e,	// (0x0001040e) wait_anim_pane_g1

0xde9e,	// (0x0001040e) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00011c6e) wait_anim_pane_g

0x1a03,	// (0x00003f73) wait_border_pane_g1

0x1a0e,	// (0x00003f7e) wait_border_pane_g2

0x1a17,	// (0x00003f87) wait_border_pane_g3

0x0002,

0xf830,	// (0x00011da0) wait_border_pane_g

0x186d,	// (0x00003ddd) bg_popup_window_pane_cp16_ParamLimits

0x186d,	// (0x00003ddd) bg_popup_window_pane_cp16

0x196d,	// (0x00003edd) indicator_popup_pane_cp4_ParamLimits

0x196d,	// (0x00003edd) indicator_popup_pane_cp4

0x1981,	// (0x00003ef1) popup_query_data_window_t1_ParamLimits

0x1981,	// (0x00003ef1) popup_query_data_window_t1

0x1993,	// (0x00003f03) popup_query_data_window_t2_ParamLimits

0x1993,	// (0x00003f03) popup_query_data_window_t2

0x19ac,	// (0x00003f1c) popup_query_data_window_t3_ParamLimits

0x19ac,	// (0x00003f1c) popup_query_data_window_t3

0x0002,

0xf829,	// (0x00011d99) popup_query_data_window_t_ParamLimits

0xf829,	// (0x00011d99) popup_query_data_window_t

0x19c6,	// (0x00003f36) query_popup_data_pane_ParamLimits

0x19c6,	// (0x00003f36) query_popup_data_pane

0x19da,	// (0x00003f4a) query_popup_data_pane_cp1_ParamLimits

0x19da,	// (0x00003f4a) query_popup_data_pane_cp1

0x186d,	// (0x00003ddd) bg_popup_window_pane_cp10_ParamLimits

0x186d,	// (0x00003ddd) bg_popup_window_pane_cp10

0x189f,	// (0x00003e0f) indicator_popup_pane_ParamLimits

0x189f,	// (0x00003e0f) indicator_popup_pane

0x18c1,	// (0x00003e31) popup_query_code_window_t1_ParamLimits

0x18c1,	// (0x00003e31) popup_query_code_window_t1

0x18db,	// (0x00003e4b) popup_query_code_window_t2_ParamLimits

0x18db,	// (0x00003e4b) popup_query_code_window_t2

0x1924,	// (0x00003e94) popup_query_code_window_t3_ParamLimits

0x1924,	// (0x00003e94) popup_query_code_window_t3

0x0002,

0xf822,	// (0x00011d92) popup_query_code_window_t_ParamLimits

0xf822,	// (0x00011d92) popup_query_code_window_t

0x1953,	// (0x00003ec3) query_popup_pane_ParamLimits

0x1953,	// (0x00003ec3) query_popup_pane

0xe35b,	// (0x000108cb) bg_popup_window_pane_cp15_ParamLimits

0xe35b,	// (0x000108cb) bg_popup_window_pane_cp15

0xe37b,	// (0x000108eb) indicator_popup_pane_cp1_ParamLimits

0xe37b,	// (0x000108eb) indicator_popup_pane_cp1

0xe38e,	// (0x000108fe) indicator_popup_pane_cp2_ParamLimits

0xe38e,	// (0x000108fe) indicator_popup_pane_cp2

0xe3a9,	// (0x00010919) popup_query_data_code_window_g1_ParamLimits

0xe3a9,	// (0x00010919) popup_query_data_code_window_g1

0xe3bc,	// (0x0001092c) popup_query_data_code_window_t1_ParamLimits

0xe3bc,	// (0x0001092c) popup_query_data_code_window_t1

0xe3ce,	// (0x0001093e) popup_query_data_code_window_t2_ParamLimits

0xe3ce,	// (0x0001093e) popup_query_data_code_window_t2

0xe3e0,	// (0x00010950) popup_query_data_code_window_t3_ParamLimits

0xe3e0,	// (0x00010950) popup_query_data_code_window_t3

0xe3f6,	// (0x00010966) popup_query_data_code_window_t4_ParamLimits

0xe3f6,	// (0x00010966) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00011afa) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00011afa) popup_query_data_code_window_t

0xf47f,	// (0x000119ef) list_single_midp_graphic_pane_g3

0xe410,	// (0x00010980) query_popup_data_pane_cp2_ParamLimits

0xe423,	// (0x00010993) query_popup_pane_cp2_ParamLimits

0xe423,	// (0x00010993) query_popup_pane_cp2

0xe017,	// (0x00010587) bg_popup_window_pane_cp11

0x1865,	// (0x00003dd5) heading_pane_cp5

0xe4b9,	// (0x00010a29) listscroll_popup_info_pane

0xe017,	// (0x00010587) input_focus_pane_cp3

0xe43e,	// (0x000109ae) query_popup_pane_t1

0xe44c,	// (0x000109bc) list_popup_info_pane_ParamLimits

0xe44c,	// (0x000109bc) list_popup_info_pane

0xe45b,	// (0x000109cb) listscroll_popup_info_pane_g1

0xe463,	// (0x000109d3) scroll_pane_cp7

0xe46d,	// (0x000109dd) popup_info_list_pane_t1_ParamLimits

0xe46d,	// (0x000109dd) popup_info_list_pane_t1

0xe487,	// (0x000109f7) popup_info_list_pane_t2_ParamLimits

0xe487,	// (0x000109f7) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00011b03) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00011b03) popup_info_list_pane_t

0xe017,	// (0x00010587) bg_popup_window_pane_cp12

0x2fe1,	// (0x00005551) find_popup_pane

0xe0dd,	// (0x0001064d) bg_popup_window_pane_cp3

0xe4a1,	// (0x00010a11) heading_pane_cp3

0xe4ad,	// (0x00010a1d) listscroll_popup_graphic_pane

0xe017,	// (0x00010587) bg_popup_window_pane_cp4

0x9b81,	// (0x0000c0f1) heading_pane_cp4

0xe4b9,	// (0x00010a29) listscroll_popup_colour_pane

0x9b8b,	// (0x0000c0fb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9b8b,	// (0x0000c0fb) cell_large_graphic_colour_none_popup_pane

0x9b9f,	// (0x0000c10f) grid_large_graphic_colour_popup_pane_ParamLimits

0x9b9f,	// (0x0000c10f) grid_large_graphic_colour_popup_pane

0x9bc3,	// (0x0000c133) listscroll_popup_colour_pane_g1_ParamLimits

0x9bc3,	// (0x0000c133) listscroll_popup_colour_pane_g1

0x9bda,	// (0x0000c14a) listscroll_popup_colour_pane_g2_ParamLimits

0x9bda,	// (0x0000c14a) listscroll_popup_colour_pane_g2

0x9bf1,	// (0x0000c161) listscroll_popup_colour_pane_g3_ParamLimits

0x9bf1,	// (0x0000c161) listscroll_popup_colour_pane_g3

0x9c01,	// (0x0000c171) listscroll_popup_colour_pane_g4_ParamLimits

0x9c01,	// (0x0000c171) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00011b08) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00011b08) listscroll_popup_colour_pane_g

0xe4c1,	// (0x00010a31) scroll_pane_cp6_ParamLimits

0xe4c1,	// (0x00010a31) scroll_pane_cp6

0x9c11,	// (0x0000c181) cell_large_graphic_colour_popup_pane_ParamLimits

0x9c11,	// (0x0000c181) cell_large_graphic_colour_popup_pane

0xe4d3,	// (0x00010a43) cell_large_graphic_colour_none_popup_pane_t1

0xe017,	// (0x00010587) grid_highlight_pane_cp5

0xe4e2,	// (0x00010a52) cell_large_graphic_colour_popup_pane_g1

0xe4ea,	// (0x00010a5a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00011b11) cell_large_graphic_colour_popup_pane_g

0xe4f2,	// (0x00010a62) cell_large_graphic_colour_popup_pane_g2_copy1

0xe4fb,	// (0x00010a6b) grid_highlight_pane_cp4

0xe503,	// (0x00010a73) bg_popup_window_pane_cp8_ParamLimits

0xe503,	// (0x00010a73) bg_popup_window_pane_cp8

0xe51e,	// (0x00010a8e) popup_snote_single_text_window_g1_ParamLimits

0xe51e,	// (0x00010a8e) popup_snote_single_text_window_g1

0xe530,	// (0x00010aa0) popup_snote_single_text_window_t1_ParamLimits

0xe530,	// (0x00010aa0) popup_snote_single_text_window_t1

0xe543,	// (0x00010ab3) popup_snote_single_text_window_t2_ParamLimits

0xe543,	// (0x00010ab3) popup_snote_single_text_window_t2

0xe556,	// (0x00010ac6) popup_snote_single_text_window_t3_ParamLimits

0xe556,	// (0x00010ac6) popup_snote_single_text_window_t3

0xe58f,	// (0x00010aff) popup_snote_single_text_window_t4_ParamLimits

0xe58f,	// (0x00010aff) popup_snote_single_text_window_t4

0xe5c3,	// (0x00010b33) popup_snote_single_text_window_t5_ParamLimits

0xe5c3,	// (0x00010b33) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00011b16) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00011b16) popup_snote_single_text_window_t

0xe5f2,	// (0x00010b62) bg_popup_window_pane_cp9_ParamLimits

0xe5f2,	// (0x00010b62) bg_popup_window_pane_cp9

0xe51e,	// (0x00010a8e) popup_snote_single_graphic_window_g1_ParamLimits

0xe51e,	// (0x00010a8e) popup_snote_single_graphic_window_g1

0xe600,	// (0x00010b70) popup_snote_single_graphic_window_g2_ParamLimits

0xe600,	// (0x00010b70) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00011b21) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00011b21) popup_snote_single_graphic_window_g

0xe60c,	// (0x00010b7c) popup_snote_single_graphic_window_t1_ParamLimits

0xe60c,	// (0x00010b7c) popup_snote_single_graphic_window_t1

0xe61f,	// (0x00010b8f) popup_snote_single_graphic_window_t2_ParamLimits

0xe61f,	// (0x00010b8f) popup_snote_single_graphic_window_t2

0xe632,	// (0x00010ba2) popup_snote_single_graphic_window_t3_ParamLimits

0xe632,	// (0x00010ba2) popup_snote_single_graphic_window_t3

0xe66b,	// (0x00010bdb) popup_snote_single_graphic_window_t4_ParamLimits

0xe66b,	// (0x00010bdb) popup_snote_single_graphic_window_t4

0xe69f,	// (0x00010c0f) popup_snote_single_graphic_window_t5_ParamLimits

0xe69f,	// (0x00010c0f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00011b26) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00011b26) popup_snote_single_graphic_window_t

0x2e67,	// (0x000053d7) grid_graphic_popup_pane_ParamLimits

0x2e67,	// (0x000053d7) grid_graphic_popup_pane

0x2e95,	// (0x00005405) listscroll_popup_graphic_pane_g1_ParamLimits

0x2e95,	// (0x00005405) listscroll_popup_graphic_pane_g1

0xbbd2,	// (0x0000e142) listscroll_popup_graphic_pane_g2_ParamLimits

0xbbd2,	// (0x0000e142) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x00011f0f) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x00011f0f) listscroll_popup_graphic_pane_g

0x2ebd,	// (0x0000542d) scroll_pane_cp5

0xbb91,	// (0x0000e101) cell_graphic_popup_pane_ParamLimits

0xbb91,	// (0x0000e101) cell_graphic_popup_pane

0x2df0,	// (0x00005360) cell_graphic_popup_pane_g1

0x2df8,	// (0x00005368) cell_graphic_popup_pane_g2

0xe4f2,	// (0x00010a62) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00011f08) cell_graphic_popup_pane_g

0x2e01,	// (0x00005371) cell_graphic_popup_pane_t2

0xe4fb,	// (0x00010a6b) grid_highlight_pane_cp3

0xe6e0,	// (0x00010c50) list_gen_pane_ParamLimits

0xe6e0,	// (0x00010c50) list_gen_pane

0xe708,	// (0x00010c78) scroll_pane

0xbb48,	// (0x0000e0b8) bg_list_pane_g1_ParamLimits

0xbb48,	// (0x0000e0b8) bg_list_pane_g1

0x2d65,	// (0x000052d5) bg_list_pane_g2_ParamLimits

0x2d65,	// (0x000052d5) bg_list_pane_g2

0x2d7a,	// (0x000052ea) bg_list_pane_g3_ParamLimits

0x2d7a,	// (0x000052ea) bg_list_pane_g3

0x2d8e,	// (0x000052fe) bg_list_pane_g4_ParamLimits

0x2d8e,	// (0x000052fe) bg_list_pane_g4

0xbb65,	// (0x0000e0d5) bg_list_pane_g5_ParamLimits

0xbb65,	// (0x0000e0d5) bg_list_pane_g5

0x0004,

0xf98d,	// (0x00011efd) bg_list_pane_g_ParamLimits

0xf98d,	// (0x00011efd) bg_list_pane_g

0xbae2,	// (0x0000e052) list_double2_graphic_large_graphic_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double2_graphic_large_graphic_pane

0xbae2,	// (0x0000e052) list_double2_graphic_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double2_graphic_pane

0xbae2,	// (0x0000e052) list_double2_large_graphic_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double2_large_graphic_pane

0xbae2,	// (0x0000e052) list_double2_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double2_pane

0xbae2,	// (0x0000e052) list_double_graphic_heading_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_graphic_heading_pane

0xbae2,	// (0x0000e052) list_double_graphic_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_graphic_pane

0xbae2,	// (0x0000e052) list_double_heading_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_heading_pane

0xbae2,	// (0x0000e052) list_double_large_graphic_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_large_graphic_pane

0xbae2,	// (0x0000e052) list_double_number_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_number_pane

0xbae2,	// (0x0000e052) list_double_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_pane

0xbae2,	// (0x0000e052) list_double_time_pane_ParamLimits

0xbae2,	// (0x0000e052) list_double_time_pane

0xbae2,	// (0x0000e052) list_setting_number_pane_ParamLimits

0xbae2,	// (0x0000e052) list_setting_number_pane

0xbae2,	// (0x0000e052) list_setting_pane_ParamLimits

0xbae2,	// (0x0000e052) list_setting_pane

0xbaf6,	// (0x0000e066) list_single_2graphic_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_2graphic_pane

0xbaf6,	// (0x0000e066) list_single_graphic_heading_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_graphic_heading_pane

0xbaf6,	// (0x0000e066) list_single_graphic_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_graphic_pane

0xbaf6,	// (0x0000e066) list_single_heading_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_heading_pane

0xbaf6,	// (0x0000e066) list_single_large_graphic_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_large_graphic_pane

0xbaf6,	// (0x0000e066) list_single_number_heading_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_number_heading_pane

0xbaf6,	// (0x0000e066) list_single_number_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_number_pane

0xbaf6,	// (0x0000e066) list_single_pane_ParamLimits

0xbaf6,	// (0x0000e066) list_single_pane

0xe017,	// (0x00010587) list_highlight_pane_cp1

0x0054,	// (0x000025c4) list_single_pane_g1_ParamLimits

0x0054,	// (0x000025c4) list_single_pane_g1

0x10ef,	// (0x0000365f) list_single_pane_g2_ParamLimits

0x10ef,	// (0x0000365f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00011b38) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00011b38) list_single_pane_g

0x3606,	// (0x00005b76) list_single_pane_t1_ParamLimits

0x3606,	// (0x00005b76) list_single_pane_t1

0x0054,	// (0x000025c4) list_single_number_pane_g1_ParamLimits

0x0054,	// (0x000025c4) list_single_number_pane_g1

0x10ef,	// (0x0000365f) list_single_number_pane_g2_ParamLimits

0x10ef,	// (0x0000365f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00011b38) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00011b38) list_single_number_pane_g

0x11d9,	// (0x00003749) list_single_number_pane_t1_ParamLimits

0x11d9,	// (0x00003749) list_single_number_pane_t1

0xb900,	// (0x0000de70) list_single_number_pane_t2_ParamLimits

0xb900,	// (0x0000de70) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x00011ebe) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x00011ebe) list_single_number_pane_t

0x4f19,	// (0x00007489) list_single_graphic_pane_g1_ParamLimits

0x4f19,	// (0x00007489) list_single_graphic_pane_g1

0x0054,	// (0x000025c4) list_single_graphic_pane_g2_ParamLimits

0x0054,	// (0x000025c4) list_single_graphic_pane_g2

0x10ef,	// (0x0000365f) list_single_graphic_pane_g3_ParamLimits

0x10ef,	// (0x0000365f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00011b31) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00011b31) list_single_graphic_pane_g

0x9c3c,	// (0x0000c1ac) list_single_graphic_pane_t1_ParamLimits

0x9c3c,	// (0x0000c1ac) list_single_graphic_pane_t1

0x0054,	// (0x000025c4) list_single_heading_pane_g1_ParamLimits

0x0054,	// (0x000025c4) list_single_heading_pane_g1

0x10ef,	// (0x0000365f) list_single_heading_pane_g2_ParamLimits

0x10ef,	// (0x0000365f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011b38) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011b38) list_single_heading_pane_g

0x3628,	// (0x00005b98) list_single_heading_pane_t1_ParamLimits

0x3628,	// (0x00005b98) list_single_heading_pane_t1

0x9c52,	// (0x0000c1c2) list_single_heading_pane_t2_ParamLimits

0x9c52,	// (0x0000c1c2) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011b3d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011b3d) list_single_heading_pane_t

0x0054,	// (0x000025c4) list_single_number_heading_pane_g1_ParamLimits

0x0054,	// (0x000025c4) list_single_number_heading_pane_g1

0x10ef,	// (0x0000365f) list_single_number_heading_pane_g2_ParamLimits

0x10ef,	// (0x0000365f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011b38) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011b38) list_single_number_heading_pane_g

0x3628,	// (0x00005b98) list_single_number_heading_pane_t1_ParamLimits

0x3628,	// (0x00005b98) list_single_number_heading_pane_t1

0x9c64,	// (0x0000c1d4) list_single_number_heading_pane_t2_ParamLimits

0x9c64,	// (0x0000c1d4) list_single_number_heading_pane_t2

0x35e2,	// (0x00005b52) list_single_number_heading_pane_t3_ParamLimits

0x35e2,	// (0x00005b52) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00011b42) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00011b42) list_single_number_heading_pane_t

0x10e3,	// (0x00003653) list_single_graphic_heading_pane_g1_ParamLimits

0x10e3,	// (0x00003653) list_single_graphic_heading_pane_g1

0x9c76,	// (0x0000c1e6) list_single_graphic_heading_pane_g4_ParamLimits

0x9c76,	// (0x0000c1e6) list_single_graphic_heading_pane_g4

0x10ef,	// (0x0000365f) list_single_graphic_heading_pane_g5_ParamLimits

0x10ef,	// (0x0000365f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00011b49) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00011b49) list_single_graphic_heading_pane_g

0x3628,	// (0x00005b98) list_single_graphic_heading_pane_t1_ParamLimits

0x3628,	// (0x00005b98) list_single_graphic_heading_pane_t1

0x9c87,	// (0x0000c1f7) list_single_graphic_heading_pane_t2_ParamLimits

0x9c87,	// (0x0000c1f7) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011b50) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011b50) list_single_graphic_heading_pane_t

0x361c,	// (0x00005b8c) list_single_large_graphic_pane_g1_ParamLimits

0x361c,	// (0x00005b8c) list_single_large_graphic_pane_g1

0x0054,	// (0x000025c4) list_single_large_graphic_pane_g2_ParamLimits

0x0054,	// (0x000025c4) list_single_large_graphic_pane_g2

0x10ef,	// (0x0000365f) list_single_large_graphic_pane_g3_ParamLimits

0x10ef,	// (0x0000365f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00011b55) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00011b55) list_single_large_graphic_pane_g

0x1a0e,	// (0x00003f7e) wait_border_pane_g2_copy1

0x9c99,	// (0x0000c209) list_single_large_graphic_pane_g4_cp2

0x3628,	// (0x00005b98) list_single_large_graphic_pane_t1_ParamLimits

0x3628,	// (0x00005b98) list_single_large_graphic_pane_t1

0x9ca1,	// (0x0000c211) list_double_pane_g1_ParamLimits

0x9ca1,	// (0x0000c211) list_double_pane_g1

0x9cad,	// (0x0000c21d) list_double_pane_g2_ParamLimits

0x9cad,	// (0x0000c21d) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011b5c) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011b5c) list_double_pane_g

0x9cb9,	// (0x0000c229) list_double_pane_t1_ParamLimits

0x9cb9,	// (0x0000c229) list_double_pane_t1

0x9ccf,	// (0x0000c23f) list_double_pane_t2_ParamLimits

0x9ccf,	// (0x0000c23f) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011b61) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011b61) list_double_pane_t

0x9ce1,	// (0x0000c251) list_double2_pane_g1_ParamLimits

0x9ce1,	// (0x0000c251) list_double2_pane_g1

0x9cf2,	// (0x0000c262) list_double2_pane_g2_ParamLimits

0x9cf2,	// (0x0000c262) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00011b66) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00011b66) list_double2_pane_g

0x9cfe,	// (0x0000c26e) list_double2_pane_t1_ParamLimits

0x9cfe,	// (0x0000c26e) list_double2_pane_t1

0x9d14,	// (0x0000c284) list_double2_pane_t2_ParamLimits

0x9d14,	// (0x0000c284) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00011b6b) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00011b6b) list_double2_pane_t

0x9ca1,	// (0x0000c211) list_double_number_pane_g1_ParamLimits

0x9ca1,	// (0x0000c211) list_double_number_pane_g1

0x9cad,	// (0x0000c21d) list_double_number_pane_g2_ParamLimits

0x9cad,	// (0x0000c21d) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011b5c) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011b5c) list_double_number_pane_g

0x9d26,	// (0x0000c296) list_double_number_pane_t1_ParamLimits

0x9d26,	// (0x0000c296) list_double_number_pane_t1

0x9d38,	// (0x0000c2a8) list_double_number_pane_t2_ParamLimits

0x9d38,	// (0x0000c2a8) list_double_number_pane_t2

0x9d4e,	// (0x0000c2be) list_double_number_pane_t3_ParamLimits

0x9d4e,	// (0x0000c2be) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011b70) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011b70) list_double_number_pane_t

0xe754,	// (0x00010cc4) list_double_graphic_pane_g1_ParamLimits

0xe754,	// (0x00010cc4) list_double_graphic_pane_g1

0x9d60,	// (0x0000c2d0) list_double_graphic_pane_g2_ParamLimits

0x9d60,	// (0x0000c2d0) list_double_graphic_pane_g2

0x9d6f,	// (0x0000c2df) list_double_graphic_pane_g3_ParamLimits

0x9d6f,	// (0x0000c2df) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00011b77) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00011b77) list_double_graphic_pane_g

0x9d87,	// (0x0000c2f7) list_double_graphic_pane_t1_ParamLimits

0x9d87,	// (0x0000c2f7) list_double_graphic_pane_t1

0x9d9d,	// (0x0000c30d) list_double_graphic_pane_t2_ParamLimits

0x9d9d,	// (0x0000c30d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00011b80) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00011b80) list_double_graphic_pane_t

0x9daf,	// (0x0000c31f) list_double2_graphic_pane_g1_ParamLimits

0x9daf,	// (0x0000c31f) list_double2_graphic_pane_g1

0x9dbb,	// (0x0000c32b) list_double2_graphic_pane_g2_ParamLimits

0x9dbb,	// (0x0000c32b) list_double2_graphic_pane_g2

0x9cf2,	// (0x0000c262) list_double2_graphic_pane_g3_ParamLimits

0x9cf2,	// (0x0000c262) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00011b85) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00011b85) list_double2_graphic_pane_g

0x9dc7,	// (0x0000c337) list_double2_graphic_pane_t1_ParamLimits

0x9dc7,	// (0x0000c337) list_double2_graphic_pane_t1

0x9ddd,	// (0x0000c34d) list_double2_graphic_pane_t2_ParamLimits

0x9ddd,	// (0x0000c34d) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00011b8c) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00011b8c) list_double2_graphic_pane_t

0x9def,	// (0x0000c35f) list_double_large_graphic_pane_g1_ParamLimits

0x9def,	// (0x0000c35f) list_double_large_graphic_pane_g1

0x9e1a,	// (0x0000c38a) list_double_large_graphic_pane_g2_ParamLimits

0x9e1a,	// (0x0000c38a) list_double_large_graphic_pane_g2

0x9cad,	// (0x0000c21d) list_double_large_graphic_pane_g3_ParamLimits

0x9cad,	// (0x0000c21d) list_double_large_graphic_pane_g3

0x9e2b,	// (0x0000c39b) list_double_large_graphic_pane_g4_ParamLimits

0x9e2b,	// (0x0000c39b) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00011b91) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00011b91) list_double_large_graphic_pane_g

0x9e3d,	// (0x0000c3ad) list_double_large_graphic_pane_t1_ParamLimits

0x9e3d,	// (0x0000c3ad) list_double_large_graphic_pane_t1

0x9e56,	// (0x0000c3c6) list_double_large_graphic_pane_t2_ParamLimits

0x9e56,	// (0x0000c3c6) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00011b9c) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00011b9c) list_double_large_graphic_pane_t

0x9e68,	// (0x0000c3d8) list_double2_large_graphic_pane_g1_ParamLimits

0x9e68,	// (0x0000c3d8) list_double2_large_graphic_pane_g1

0x9ce1,	// (0x0000c251) list_double2_large_graphic_pane_g2_ParamLimits

0x9ce1,	// (0x0000c251) list_double2_large_graphic_pane_g2

0x9cf2,	// (0x0000c262) list_double2_large_graphic_pane_g3_ParamLimits

0x9cf2,	// (0x0000c262) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00011ba1) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00011ba1) list_double2_large_graphic_pane_g

0x9e74,	// (0x0000c3e4) list_double2_large_graphic_pane_t1_ParamLimits

0x9e74,	// (0x0000c3e4) list_double2_large_graphic_pane_t1

0x9e8a,	// (0x0000c3fa) list_double2_large_graphic_pane_t2_ParamLimits

0x9e8a,	// (0x0000c3fa) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00011ba8) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00011ba8) list_double2_large_graphic_pane_t

0x9e9c,	// (0x0000c40c) list_double_heading_pane_g1_ParamLimits

0x9e9c,	// (0x0000c40c) list_double_heading_pane_g1

0x9ead,	// (0x0000c41d) list_double_heading_pane_g2_ParamLimits

0x9ead,	// (0x0000c41d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00011bad) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00011bad) list_double_heading_pane_g

0x9eb9,	// (0x0000c429) list_double_heading_pane_t1_ParamLimits

0x9eb9,	// (0x0000c429) list_double_heading_pane_t1

0x9ecf,	// (0x0000c43f) list_double_heading_pane_t2_ParamLimits

0x9ecf,	// (0x0000c43f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00011bb2) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00011bb2) list_double_heading_pane_t

0x9ee1,	// (0x0000c451) list_double_graphic_heading_pane_g1_ParamLimits

0x9ee1,	// (0x0000c451) list_double_graphic_heading_pane_g1

0x9e9c,	// (0x0000c40c) list_double_graphic_heading_pane_g2_ParamLimits

0x9e9c,	// (0x0000c40c) list_double_graphic_heading_pane_g2

0x9ead,	// (0x0000c41d) list_double_graphic_heading_pane_g3_ParamLimits

0x9ead,	// (0x0000c41d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00011bb7) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00011bb7) list_double_graphic_heading_pane_g

0x9eed,	// (0x0000c45d) list_double_graphic_heading_pane_t1_ParamLimits

0x9eed,	// (0x0000c45d) list_double_graphic_heading_pane_t1

0x9f03,	// (0x0000c473) list_double_graphic_heading_pane_t2_ParamLimits

0x9f03,	// (0x0000c473) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00011bbe) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00011bbe) list_double_graphic_heading_pane_t

0x9e1a,	// (0x0000c38a) list_double_time_pane_g1_ParamLimits

0x9e1a,	// (0x0000c38a) list_double_time_pane_g1

0x9cad,	// (0x0000c21d) list_double_time_pane_g2_ParamLimits

0x9cad,	// (0x0000c21d) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00011bc3) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00011bc3) list_double_time_pane_g

0x9f15,	// (0x0000c485) list_double_time_pane_t1_ParamLimits

0x9f15,	// (0x0000c485) list_double_time_pane_t1

0x9f2b,	// (0x0000c49b) list_double_time_pane_t2_ParamLimits

0x9f2b,	// (0x0000c49b) list_double_time_pane_t2

0x9f3d,	// (0x0000c4ad) list_double_time_pane_t3_ParamLimits

0x9f3d,	// (0x0000c4ad) list_double_time_pane_t3

0x9f4f,	// (0x0000c4bf) list_double_time_pane_t4_ParamLimits

0x9f4f,	// (0x0000c4bf) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00011bc8) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00011bc8) list_double_time_pane_t

0x9dbb,	// (0x0000c32b) list_setting_pane_g1_ParamLimits

0x9dbb,	// (0x0000c32b) list_setting_pane_g1

0x9cf2,	// (0x0000c262) list_setting_pane_g2_ParamLimits

0x9cf2,	// (0x0000c262) list_setting_pane_g2

0x0001,

0xf661,	// (0x00011bd1) list_setting_pane_g_ParamLimits

0xf661,	// (0x00011bd1) list_setting_pane_g

0x9f61,	// (0x0000c4d1) list_setting_pane_t1_ParamLimits

0x9f61,	// (0x0000c4d1) list_setting_pane_t1

0x9f78,	// (0x0000c4e8) list_setting_pane_t2_ParamLimits

0x9f78,	// (0x0000c4e8) list_setting_pane_t2

0x0002,

0xf666,	// (0x00011bd6) list_setting_pane_t_ParamLimits

0xf666,	// (0x00011bd6) list_setting_pane_t

0x9fb7,	// (0x0000c527) set_value_pane_cp_ParamLimits

0x9fb7,	// (0x0000c527) set_value_pane_cp

0x9dbb,	// (0x0000c32b) list_setting_number_pane_g1_ParamLimits

0x9dbb,	// (0x0000c32b) list_setting_number_pane_g1

0x9cf2,	// (0x0000c262) list_setting_number_pane_g2_ParamLimits

0x9cf2,	// (0x0000c262) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00011bd1) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00011bd1) list_setting_number_pane_g

0x9fc5,	// (0x0000c535) list_setting_number_pane_t1_ParamLimits

0x9fc5,	// (0x0000c535) list_setting_number_pane_t1

0x9fd9,	// (0x0000c549) list_setting_number_pane_t2_ParamLimits

0x9fd9,	// (0x0000c549) list_setting_number_pane_t2

0x9ff0,	// (0x0000c560) list_setting_number_pane_t3_ParamLimits

0x9ff0,	// (0x0000c560) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00011bdd) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00011bdd) list_setting_number_pane_t

0x9fb7,	// (0x0000c527) set_value_pane_ParamLimits

0x9fb7,	// (0x0000c527) set_value_pane

0xe775,	// (0x00010ce5) bg_set_opt_pane_ParamLimits

0xe775,	// (0x00010ce5) bg_set_opt_pane

0xe796,	// (0x00010d06) set_value_pane_t1

0xe7a4,	// (0x00010d14) slider_set_pane_cp3

0xe7ad,	// (0x00010d1d) volume_small_pane_cp

0xe7b6,	// (0x00010d26) list_form_gen_pane

0xe7bf,	// (0x00010d2f) scroll_pane_cp8

0xa033,	// (0x0000c5a3) form_field_data_pane_ParamLimits

0xa033,	// (0x0000c5a3) form_field_data_pane

0xa04e,	// (0x0000c5be) form_field_data_wide_pane_ParamLimits

0xa04e,	// (0x0000c5be) form_field_data_wide_pane

0xa072,	// (0x0000c5e2) form_field_popup_pane_ParamLimits

0xa072,	// (0x0000c5e2) form_field_popup_pane

0xe7e0,	// (0x00010d50) form_field_popup_wide_pane_ParamLimits

0xe7e0,	// (0x00010d50) form_field_popup_wide_pane

0xe801,	// (0x00010d71) form_field_slider_pane_ParamLimits

0xe801,	// (0x00010d71) form_field_slider_pane

0xe814,	// (0x00010d84) form_field_slider_wide_pane_ParamLimits

0xe814,	// (0x00010d84) form_field_slider_wide_pane

0xe827,	// (0x00010d97) data_form_pane

0xa09e,	// (0x0000c60e) form_field_data_pane_t1

0xe833,	// (0x00010da3) input_focus_pane

0xe841,	// (0x00010db1) data_form_wide_pane

0xe87e,	// (0x00010dee) form_field_data_wide_pane_t1

0xe510,	// (0x00010a80) input_focus_pane_cp6

0xa0b8,	// (0x0000c628) form_field_popup_pane_t1

0xe833,	// (0x00010da3) input_focus_pane_cp7

0xe8a0,	// (0x00010e10) list_form_pane

0xe8b4,	// (0x00010e24) form_field_popup_wide_pane_t1

0xe833,	// (0x00010da3) input_focus_pane_cp8

0xe8c9,	// (0x00010e39) list_form_wide_pane

0xa0da,	// (0x0000c64a) form_field_slider_pane_t1_ParamLimits

0xa0da,	// (0x0000c64a) form_field_slider_pane_t1

0xa0f2,	// (0x0000c662) form_field_slider_pane_t2_ParamLimits

0xa0f2,	// (0x0000c662) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00011bed) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00011bed) form_field_slider_pane_t

0xe0c5,	// (0x00010635) input_focus_pane_cp9_ParamLimits

0xe0c5,	// (0x00010635) input_focus_pane_cp9

0xa107,	// (0x0000c677) slider_cont_pane_ParamLimits

0xa107,	// (0x0000c677) slider_cont_pane

0xe8d8,	// (0x00010e48) form_field_slider_wide_pane_t1_ParamLimits

0xe8d8,	// (0x00010e48) form_field_slider_wide_pane_t1

0xe8ea,	// (0x00010e5a) form_field_slider_wide_pane_t2_ParamLimits

0xe8ea,	// (0x00010e5a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00011bf2) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00011bf2) form_field_slider_wide_pane_t

0xe0c5,	// (0x00010635) input_focus_pane_cp10_ParamLimits

0xe0c5,	// (0x00010635) input_focus_pane_cp10

0xa11b,	// (0x0000c68b) slider_cont_pane_cp1_ParamLimits

0xa11b,	// (0x0000c68b) slider_cont_pane_cp1

0xa12f,	// (0x0000c69f) slider_form_pane_cp

0xe8fc,	// (0x00010e6c) input_focus_pane_g1

0xe904,	// (0x00010e74) input_focus_pane_g2

0xe90c,	// (0x00010e7c) input_focus_pane_g3

0xe914,	// (0x00010e84) input_focus_pane_g4

0xe91c,	// (0x00010e8c) input_focus_pane_g5

0xe924,	// (0x00010e94) input_focus_pane_g6

0xe92c,	// (0x00010e9c) input_focus_pane_g7

0xe934,	// (0x00010ea4) input_focus_pane_g8

0xe93c,	// (0x00010eac) input_focus_pane_g9

0xde9e,	// (0x0001040e) input_focus_pane_g10

0x0009,

0xf687,	// (0x00011bf7) input_focus_pane_g

0x1a17,	// (0x00003f87) wait_border_pane_g3_copy1

0xa137,	// (0x0000c6a7) data_form_pane_t1

0xde9e,	// (0x0001040e) wait_anim_pane_g1_copy1

0xbab7,	// (0x0000e027) data_form_wide_pane_t1

0xe944,	// (0x00010eb4) list_form_graphic_pane_cp_ParamLimits

0xe944,	// (0x00010eb4) list_form_graphic_pane_cp

0x2be6,	// (0x00005156) slider_form_pane_g1

0x2bef,	// (0x0000515f) slider_form_pane_g2

0x0006,

0xf97e,	// (0x00011eee) slider_form_pane_g

0xa153,	// (0x0000c6c3) list_form_graphic_pane_ParamLimits

0xa153,	// (0x0000c6c3) list_form_graphic_pane

0xe956,	// (0x00010ec6) list_form_graphic_pane_g1

0xe95e,	// (0x00010ece) list_form_graphic_pane_t1_ParamLimits

0xe95e,	// (0x00010ece) list_form_graphic_pane_t1

0xe0dd,	// (0x0001064d) list_highlight_pane_cp5_ParamLimits

0xe0dd,	// (0x0001064d) list_highlight_pane_cp5

0xa164,	// (0x0000c6d4) find_pane_g1

0xe973,	// (0x00010ee3) input_find_pane

0xa16d,	// (0x0000c6dd) input_find_pane_g1_ParamLimits

0xa16d,	// (0x0000c6dd) input_find_pane_g1

0xa179,	// (0x0000c6e9) input_find_pane_t1_ParamLimits

0xa179,	// (0x0000c6e9) input_find_pane_t1

0xa18e,	// (0x0000c6fe) input_find_pane_t2_ParamLimits

0xa18e,	// (0x0000c6fe) input_find_pane_t2

0x0001,

0xf69c,	// (0x00011c0c) input_find_pane_t_ParamLimits

0xf69c,	// (0x00011c0c) input_find_pane_t

0xe97c,	// (0x00010eec) input_focus_pane_cp5_ParamLimits

0xe97c,	// (0x00010eec) input_focus_pane_cp5

0xe98a,	// (0x00010efa) bg_popup_window_pane_cp2_ParamLimits

0xe98a,	// (0x00010efa) bg_popup_window_pane_cp2

0xe997,	// (0x00010f07) listscroll_menu_pane_ParamLimits

0xe997,	// (0x00010f07) listscroll_menu_pane

0xa1af,	// (0x0000c71f) popup_submenu_window_ParamLimits

0xa1af,	// (0x0000c71f) popup_submenu_window

0xe9a3,	// (0x00010f13) find_popup_pane_g1

0xe9ab,	// (0x00010f1b) input_popup_find_pane_cp

0xe97c,	// (0x00010eec) input_focus_pane_cp4_ParamLimits

0xe97c,	// (0x00010eec) input_focus_pane_cp4

0xe9b5,	// (0x00010f25) input_popup_find_pane_t1_ParamLimits

0xe9b5,	// (0x00010f25) input_popup_find_pane_t1

0xe017,	// (0x00010587) bg_popup_sub_pane_cp

0xe9e3,	// (0x00010f53) listscroll_popup_sub_pane

0xe9eb,	// (0x00010f5b) list_submenu_pane_ParamLimits

0xe9eb,	// (0x00010f5b) list_submenu_pane

0xe9fc,	// (0x00010f6c) scroll_pane_cp4

0xea04,	// (0x00010f74) list_single_popup_submenu_pane_ParamLimits

0xea04,	// (0x00010f74) list_single_popup_submenu_pane

0xea19,	// (0x00010f89) list_single_popup_submenu_pane_g1

0xea21,	// (0x00010f91) list_single_popup_submenu_pane_t1_ParamLimits

0xea21,	// (0x00010f91) list_single_popup_submenu_pane_t1

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp1_ParamLimits

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp1

0xa1ed,	// (0x0000c75d) tabs_2_active_pane_g1

0xa1f5,	// (0x0000c765) tabs_2_active_pane_t1

0xe0c5,	// (0x00010635) bg_passive_tab_pane_cp1_ParamLimits

0xe0c5,	// (0x00010635) bg_passive_tab_pane_cp1

0xa1ed,	// (0x0000c75d) tabs_2_passive_pane_g1

0xa1f5,	// (0x0000c765) tabs_2_passive_pane_t1

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp4

0xa207,	// (0x0000c777) tabs_2_long_active_pane_t1

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp4

0x12b8,	// (0x00003828) list_single_midp_graphic_pane_g4_ParamLimits

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp5

0xa21a,	// (0x0000c78a) tabs_3_long_active_pane_t1

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp5

0x12b8,	// (0x00003828) list_single_midp_graphic_pane_g4

0xe0dd,	// (0x0001064d) bg_popup_window_pane_cp13_ParamLimits

0xe0dd,	// (0x0001064d) bg_popup_window_pane_cp13

0xea3f,	// (0x00010faf) listscroll_popup_fast_pane_ParamLimits

0xea3f,	// (0x00010faf) listscroll_popup_fast_pane

0xea68,	// (0x00010fd8) grid_popup_fast_pane_ParamLimits

0xea68,	// (0x00010fd8) grid_popup_fast_pane

0xea7a,	// (0x00010fea) scroll_pane_cp9_ParamLimits

0xea7a,	// (0x00010fea) scroll_pane_cp9

0x4f93,	// (0x00007503) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f93,	// (0x00007503) list_single_graphic_hl_pane_t1_cp2

0xea9e,	// (0x0001100e) input_focus_pane_cp20_ParamLimits

0xea9e,	// (0x0001100e) input_focus_pane_cp20

0xeaac,	// (0x0001101c) query_popup_data_pane_t1_ParamLimits

0xeaac,	// (0x0001101c) query_popup_data_pane_t1

0xeabf,	// (0x0001102f) query_popup_data_pane_t2_ParamLimits

0xeabf,	// (0x0001102f) query_popup_data_pane_t2

0xeb05,	// (0x00011075) query_popup_data_pane_t3_ParamLimits

0xeb05,	// (0x00011075) query_popup_data_pane_t3

0xeb46,	// (0x000110b6) query_popup_data_pane_t4_ParamLimits

0xeb46,	// (0x000110b6) query_popup_data_pane_t4

0xeb82,	// (0x000110f2) query_popup_data_pane_t5_ParamLimits

0xeb82,	// (0x000110f2) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00011c11) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00011c11) query_popup_data_pane_t

0xe8fc,	// (0x00010e6c) bg_set_opt_pane_g1

0xe904,	// (0x00010e74) bg_set_opt_pane_g2

0xe90c,	// (0x00010e7c) bg_set_opt_pane_g3

0xe914,	// (0x00010e84) bg_set_opt_pane_g4

0xe91c,	// (0x00010e8c) bg_set_opt_pane_g5

0xe924,	// (0x00010e94) bg_set_opt_pane_g6

0xe92c,	// (0x00010e9c) bg_set_opt_pane_g7

0xe934,	// (0x00010ea4) bg_set_opt_pane_g8

0xe93c,	// (0x00010eac) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00011c1c) bg_set_opt_pane_g

0xf233,	// (0x000117a3) control_top_pane_stacon_ParamLimits

0xf233,	// (0x000117a3) control_top_pane_stacon

0xf286,	// (0x000117f6) signal_pane_stacon_ParamLimits

0xf286,	// (0x000117f6) signal_pane_stacon

0xf2ab,	// (0x0001181b) stacon_top_pane_g1_ParamLimits

0xf2ab,	// (0x0001181b) stacon_top_pane_g1

0xf2cd,	// (0x0001183d) title_pane_stacon_ParamLimits

0xf2cd,	// (0x0001183d) title_pane_stacon

0xf2f7,	// (0x00011867) uni_indicator_pane_stacon_ParamLimits

0xf2f7,	// (0x00011867) uni_indicator_pane_stacon

0xf30f,	// (0x0001187f) battery_pane_stacon_ParamLimits

0xf30f,	// (0x0001187f) battery_pane_stacon

0xf353,	// (0x000118c3) control_bottom_pane_stacon_ParamLimits

0xf353,	// (0x000118c3) control_bottom_pane_stacon

0xf376,	// (0x000118e6) navi_pane_stacon_ParamLimits

0xf376,	// (0x000118e6) navi_pane_stacon

0xf399,	// (0x00011909) stacon_bottom_pane_g1_ParamLimits

0xf399,	// (0x00011909) stacon_bottom_pane_g1

0xebb9,	// (0x00011129) aid_levels_signal_lsc_ParamLimits

0xebb9,	// (0x00011129) aid_levels_signal_lsc

0xebd0,	// (0x00011140) signal_pane_stacon_g1_ParamLimits

0xebd0,	// (0x00011140) signal_pane_stacon_g1

0xebe4,	// (0x00011154) signal_pane_stacon_g2_ParamLimits

0xebe4,	// (0x00011154) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00011c2f) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00011c2f) signal_pane_stacon_g

0xec26,	// (0x00011196) title_pane_stacon_t1_ParamLimits

0xec26,	// (0x00011196) title_pane_stacon_t1

0xec4b,	// (0x000111bb) uni_indicator_pane_stacon_g1

0xec55,	// (0x000111c5) uni_indicator_pane_stacon_g2

0xec5f,	// (0x000111cf) uni_indicator_pane_stacon_g3

0xec69,	// (0x000111d9) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00011c3b) uni_indicator_pane_stacon_g

0xec73,	// (0x000111e3) control_top_pane_stacon_g1

0xec7b,	// (0x000111eb) control_top_pane_stacon_t1_ParamLimits

0xec7b,	// (0x000111eb) control_top_pane_stacon_t1

0xecb2,	// (0x00011222) aid_levels_battery_lsc_ParamLimits

0xecb2,	// (0x00011222) aid_levels_battery_lsc

0xecca,	// (0x0001123a) battery_pane_stacon_g1_ParamLimits

0xecca,	// (0x0001123a) battery_pane_stacon_g1

0xecdd,	// (0x0001124d) battery_pane_stacon_g2_ParamLimits

0xecdd,	// (0x0001124d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00011c44) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00011c44) battery_pane_stacon_g

0xed1b,	// (0x0001128b) navi_icon_pane_stacon

0xed2f,	// (0x0001129f) navi_navi_pane_stacon

0xed1b,	// (0x0001128b) navi_text_pane_stacon

0xec73,	// (0x000111e3) control_bottom_pane_stacon_g1

0xed45,	// (0x000112b5) control_bottom_pane_stacon_t1_ParamLimits

0xed45,	// (0x000112b5) control_bottom_pane_stacon_t1

0xa22c,	// (0x0000c79c) grid_app_pane_ParamLimits

0xa22c,	// (0x0000c79c) grid_app_pane

0xa264,	// (0x0000c7d4) scroll_pane_cp15_ParamLimits

0xa264,	// (0x0000c7d4) scroll_pane_cp15

0xa279,	// (0x0000c7e9) cell_app_pane_ParamLimits

0xa279,	// (0x0000c7e9) cell_app_pane

0xa2c6,	// (0x0000c836) cell_app_pane_g1_ParamLimits

0xa2c6,	// (0x0000c836) cell_app_pane_g1

0xed96,	// (0x00011306) cell_app_pane_g2_ParamLimits

0xed96,	// (0x00011306) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00011c49) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00011c49) cell_app_pane_g

0xeda2,	// (0x00011312) cell_app_pane_t1_ParamLimits

0xeda2,	// (0x00011312) cell_app_pane_t1

0xedb9,	// (0x00011329) grid_highlight_pane_ParamLimits

0xedb9,	// (0x00011329) grid_highlight_pane

0xe8fc,	// (0x00010e6c) cell_highlight_pane_g1

0xe904,	// (0x00010e74) cell_highlight_pane_g2

0xe90c,	// (0x00010e7c) cell_highlight_pane_g3

0xe914,	// (0x00010e84) cell_highlight_pane_g4

0xe91c,	// (0x00010e8c) cell_highlight_pane_g5

0xe924,	// (0x00010e94) cell_highlight_pane_g6

0xe92c,	// (0x00010e9c) cell_highlight_pane_g7

0xe934,	// (0x00010ea4) cell_highlight_pane_g8

0xe93c,	// (0x00010eac) cell_highlight_pane_g9

0xde9e,	// (0x0001040e) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00011bf7) cell_highlight_pane_g

0xedd4,	// (0x00011344) bg_scroll_pane

0xedf3,	// (0x00011363) scroll_handle_pane

0xee44,	// (0x000113b4) scroll_bg_pane_g1

0xee59,	// (0x000113c9) scroll_bg_pane_g2

0xee71,	// (0x000113e1) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00011c4e) scroll_bg_pane_g

0xee86,	// (0x000113f6) scroll_handle_focus_pane_ParamLimits

0xee86,	// (0x000113f6) scroll_handle_focus_pane

0xee44,	// (0x000113b4) scroll_handle_pane_g1

0xee93,	// (0x00011403) scroll_handle_pane_g2

0xee71,	// (0x000113e1) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00011c55) scroll_handle_pane_g

0xe97c,	// (0x00010eec) bg_popup_sub_pane_cp21_ParamLimits

0xe97c,	// (0x00010eec) bg_popup_sub_pane_cp21

0xeea7,	// (0x00011417) popup_fep_japan_predictive_window_t1_ParamLimits

0xeea7,	// (0x00011417) popup_fep_japan_predictive_window_t1

0xeebe,	// (0x0001142e) popup_fep_japan_predictive_window_t2_ParamLimits

0xeebe,	// (0x0001142e) popup_fep_japan_predictive_window_t2

0xeef1,	// (0x00011461) popup_fep_japan_predictive_window_t3_ParamLimits

0xeef1,	// (0x00011461) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00011c5c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00011c5c) popup_fep_japan_predictive_window_t

0xe017,	// (0x00010587) bg_popup_sub_pane_cp23

0xef28,	// (0x00011498) listscroll_japin_cand_pane

0xef30,	// (0x000114a0) popup_fep_japan_candidate_window_t1

0xef3e,	// (0x000114ae) candidate_pane_ParamLimits

0xef3e,	// (0x000114ae) candidate_pane

0xef50,	// (0x000114c0) scroll_pane_cp30

0xef5a,	// (0x000114ca) list_single_popup_jap_candidate_pane_ParamLimits

0xef5a,	// (0x000114ca) list_single_popup_jap_candidate_pane

0xe017,	// (0x00010587) list_highlight_pane_cp30

0xef6e,	// (0x000114de) list_single_popup_jap_candidate_pane_t1

0xa2ef,	// (0x0000c85f) level_1_signal

0xa301,	// (0x0000c871) level_2_signal

0xa314,	// (0x0000c884) level_3_signal

0xa327,	// (0x0000c897) level_4_signal

0xa33a,	// (0x0000c8aa) level_5_signal

0xa34d,	// (0x0000c8bd) level_6_signal

0xa360,	// (0x0000c8d0) level_7_signal

0xa2ef,	// (0x0000c85f) level_1_battery

0xa301,	// (0x0000c871) level_2_battery

0xa314,	// (0x0000c884) level_3_battery

0xa327,	// (0x0000c897) level_4_battery

0xa33a,	// (0x0000c8aa) level_5_battery

0xa34d,	// (0x0000c8bd) level_6_battery

0xa360,	// (0x0000c8d0) level_7_battery

0xefb4,	// (0x00011524) list_menu_pane_ParamLimits

0xefb4,	// (0x00011524) list_menu_pane

0xefca,	// (0x0001153a) scroll_pane_cp25_ParamLimits

0xefca,	// (0x0001153a) scroll_pane_cp25

0xefe3,	// (0x00011553) list_double2_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double2_graphic_pane_cp2

0xefe3,	// (0x00011553) list_double2_large_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double2_large_graphic_pane_cp2

0xefe3,	// (0x00011553) list_double2_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double2_pane_cp2

0xefe3,	// (0x00011553) list_double_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double_graphic_pane_cp2

0xefe3,	// (0x00011553) list_double_large_graphic_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double_large_graphic_pane_cp2

0xefe3,	// (0x00011553) list_double_number_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double_number_pane_cp2

0xefe3,	// (0x00011553) list_double_pane_cp2_ParamLimits

0xefe3,	// (0x00011553) list_double_pane_cp2

0xa386,	// (0x0000c8f6) list_single_2graphic_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_2graphic_pane_cp2

0xa386,	// (0x0000c8f6) list_single_graphic_heading_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_graphic_heading_pane_cp2

0xa386,	// (0x0000c8f6) list_single_graphic_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_graphic_pane_cp2

0xa386,	// (0x0000c8f6) list_single_heading_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_heading_pane_cp2

0xeff3,	// (0x00011563) list_single_large_graphic_pane_cp2_ParamLimits

0xeff3,	// (0x00011563) list_single_large_graphic_pane_cp2

0xa386,	// (0x0000c8f6) list_single_number_heading_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_number_heading_pane_cp2

0xa386,	// (0x0000c8f6) list_single_number_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_number_pane_cp2

0xa386,	// (0x0000c8f6) list_single_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_pane_cp2

0xf067,	// (0x000115d7) bg_popup_sub_pane_cp22

0xf08c,	// (0x000115fc) popup_side_volume_key_window_g1

0xf0b6,	// (0x00011626) popup_side_volume_key_window_t1

0xf0d4,	// (0x00011644) volume_small_pane_cp1

0xe0c5,	// (0x00010635) bg_popup_sub_pane_cp24_ParamLimits

0xe0c5,	// (0x00010635) bg_popup_sub_pane_cp24

0xf0dc,	// (0x0001164c) fep_china_uni_candidate_pane_ParamLimits

0xf0dc,	// (0x0001164c) fep_china_uni_candidate_pane

0xf0f0,	// (0x00011660) fep_china_uni_entry_pane

0xf100,	// (0x00011670) popup_fep_china_uni_window_g1

0xf11c,	// (0x0001168c) fep_china_uni_entry_pane_g1

0xf126,	// (0x00011696) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00011c8d) fep_china_uni_entry_pane_g

0xf130,	// (0x000116a0) fep_entry_item_pane

0xf13a,	// (0x000116aa) fep_candidate_item_pane

0xf142,	// (0x000116b2) fep_china_uni_candidate_pane_g1

0xf14c,	// (0x000116bc) fep_china_uni_candidate_pane_g2

0xf154,	// (0x000116c4) fep_china_uni_candidate_pane_g3

0xf15c,	// (0x000116cc) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00011c92) fep_china_uni_candidate_pane_g

0xde9e,	// (0x0001040e) fep_entry_item_pane_g1

0xf166,	// (0x000116d6) fep_entry_item_pane_t1_ParamLimits

0xf166,	// (0x000116d6) fep_entry_item_pane_t1

0xf17c,	// (0x000116ec) fep_candidate_item_pane_t1_ParamLimits

0xf17c,	// (0x000116ec) fep_candidate_item_pane_t1

0xf191,	// (0x00011701) fep_candidate_item_pane_t2_ParamLimits

0xf191,	// (0x00011701) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00011c9b) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00011c9b) fep_candidate_item_pane_t

0xe0dd,	// (0x0001064d) list_highlight_pane_cp31_ParamLimits

0xe0dd,	// (0x0001064d) list_highlight_pane_cp31

0xf1a3,	// (0x00011713) level_1_signal_lsc

0xf1ac,	// (0x0001171c) level_2_signal_lsc

0xf1b5,	// (0x00011725) level_3_signal_lsc

0xf1be,	// (0x0001172e) level_4_signal_lsc

0xf1c7,	// (0x00011737) level_5_signal_lsc

0xf1d0,	// (0x00011740) level_6_signal_lsc

0xf1d9,	// (0x00011749) level_7_signal_lsc

0xf1d9,	// (0x00011749) level_1_battery_lsc

0xf1e2,	// (0x00011752) level_2_battery_lsc

0xf1eb,	// (0x0001175b) level_3_battery_lsc

0xf1f4,	// (0x00011764) level_4_battery_lsc

0xf1fd,	// (0x0001176d) level_5_battery_lsc

0xf206,	// (0x00011776) level_6_battery_lsc

0xf1a3,	// (0x00011713) level_7_battery_lsc

0xf20f,	// (0x0001177f) scroll_handle_focus_pane_g1

0xf218,	// (0x00011788) scroll_handle_focus_pane_g2

0xf221,	// (0x00011791) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00011ca0) scroll_handle_focus_pane_g

0xa418,	// (0x0000c988) list_single_2graphic_pane_g1_ParamLimits

0xa418,	// (0x0000c988) list_single_2graphic_pane_g1

0x9c76,	// (0x0000c1e6) list_single_2graphic_pane_g2_ParamLimits

0x9c76,	// (0x0000c1e6) list_single_2graphic_pane_g2

0x10ef,	// (0x0000365f) list_single_2graphic_pane_g3_ParamLimits

0x10ef,	// (0x0000365f) list_single_2graphic_pane_g3

0xa424,	// (0x0000c994) list_single_2graphic_pane_g4_ParamLimits

0xa424,	// (0x0000c994) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00011ca7) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00011ca7) list_single_2graphic_pane_g

0xa435,	// (0x0000c9a5) list_single_2graphic_pane_t1_ParamLimits

0xa435,	// (0x0000c9a5) list_single_2graphic_pane_t1

0xa463,	// (0x0000c9d3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa463,	// (0x0000c9d3) list_double2_graphic_large_graphic_pane_g1

0x9ce1,	// (0x0000c251) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ce1,	// (0x0000c251) list_double2_graphic_large_graphic_pane_g2

0x9cf2,	// (0x0000c262) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9cf2,	// (0x0000c262) list_double2_graphic_large_graphic_pane_g3

0xa475,	// (0x0000c9e5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa475,	// (0x0000c9e5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00011cb0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00011cb0) list_double2_graphic_large_graphic_pane_g

0xa481,	// (0x0000c9f1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa481,	// (0x0000c9f1) list_double2_graphic_large_graphic_pane_t1

0xa497,	// (0x0000ca07) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa497,	// (0x0000ca07) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00011cb9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00011cb9) list_double2_graphic_large_graphic_pane_t

0xf3f7,	// (0x00011967) popup_fast_swap_window_ParamLimits

0xf3f7,	// (0x00011967) popup_fast_swap_window

0xf415,	// (0x00011985) popup_side_volume_key_window

0xf433,	// (0x000119a3) stacon_top_pane

0xf43d,	// (0x000119ad) status_pane_ParamLimits

0xf43d,	// (0x000119ad) status_pane

0xa540,	// (0x0000cab0) status_small_pane

0xe017,	// (0x00010587) control_pane

0xe017,	// (0x00010587) stacon_bottom_pane

0xe7bf,	// (0x00010d2f) scroll_pane_cp121

0xe7b6,	// (0x00010d26) set_content_pane

0xa4a9,	// (0x0000ca19) bg_active_tab_pane_g1_cp1

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp1

0xa4b2,	// (0x0000ca22) bg_active_tab_pane_g3_cp1

0xa4a9,	// (0x0000ca19) bg_passive_tab_pane_g1_cp1

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp1

0xa4b2,	// (0x0000ca22) bg_passive_tab_pane_g3_cp1

0xa4bb,	// (0x0000ca2b) bg_active_tab_pane_g1_cp2

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp2

0xa4c4,	// (0x0000ca34) bg_active_tab_pane_g3_cp2

0xa4bb,	// (0x0000ca2b) bg_passive_tab_pane_g1_cp2

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp2

0xa4c4,	// (0x0000ca34) bg_passive_tab_pane_g3_cp2

0xa4cd,	// (0x0000ca3d) bg_active_tab_pane_g1_cp3

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp3

0xa4d6,	// (0x0000ca46) bg_active_tab_pane_g3_cp3

0xa4cd,	// (0x0000ca3d) bg_passive_tab_pane_g1_cp3

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp3

0xa4d6,	// (0x0000ca46) bg_passive_tab_pane_g3_cp3

0xa4df,	// (0x0000ca4f) bg_active_tab_pane_g1_cp4

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp4

0xa4e8,	// (0x0000ca58) bg_active_tab_pane_g3_cp4

0xa4df,	// (0x0000ca4f) bg_passive_tab_pane_g1_cp4

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp4

0xa4e8,	// (0x0000ca58) bg_passive_tab_pane_g3_cp4

0xf3b5,	// (0x00011925) bg_active_tab_pane_g1_cp5

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp5

0xf3be,	// (0x0001192e) bg_active_tab_pane_g3_cp5

0xf3b5,	// (0x00011925) bg_passive_tab_pane_g1_cp5

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp5

0xf3be,	// (0x0001192e) bg_passive_tab_pane_g3_cp5

0x3394,	// (0x00005904) list_set_graphic_pane_ParamLimits

0x3394,	// (0x00005904) list_set_graphic_pane

0xe017,	// (0x00010587) bg_set_opt_pane_cp4

0xa4f1,	// (0x0000ca61) list_set_graphic_pane_g1_ParamLimits

0xa4f1,	// (0x0000ca61) list_set_graphic_pane_g1

0xa4fd,	// (0x0000ca6d) list_set_graphic_pane_g2_ParamLimits

0xa4fd,	// (0x0000ca6d) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00011cbe) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00011cbe) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00012041) volume_small_pane_cp_g

0xa521,	// (0x0000ca91) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa521,	// (0x0000ca91) list_double2_large_graphic_pane_g1_cp2

0xa52f,	// (0x0000ca9f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa52f,	// (0x0000ca9f) list_double2_large_graphic_pane_g2_cp2

0xf3c7,	// (0x00011937) list_double2_large_graphic_pane_g3_cp2

0xf3cf,	// (0x0001193f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf3cf,	// (0x0001193f) list_double2_large_graphic_pane_t1_cp2

0xf3e5,	// (0x00011955) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf3e5,	// (0x00011955) list_double2_large_graphic_pane_t2_cp2

0xb840,	// (0x0000ddb0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb840,	// (0x0000ddb0) list_double_large_graphic_pane_g1_cp2

0xb853,	// (0x0000ddc3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb853,	// (0x0000ddc3) list_double_large_graphic_pane_g2_cp2

0xf51e,	// (0x00011a8e) list_double_large_graphic_pane_g3_cp2

0x268b,	// (0x00004bfb) list_double_large_graphic_pane_g4_cp

0x2693,	// (0x00004c03) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2693,	// (0x00004c03) list_double_large_graphic_pane_t1_cp2

0x26aa,	// (0x00004c1a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x26aa,	// (0x00004c1a) list_double_large_graphic_pane_t2_cp2

0xa54b,	// (0x0000cabb) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa54b,	// (0x0000cabb) list_double2_graphic_pane_g1_cp2

0xa559,	// (0x0000cac9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa559,	// (0x0000cac9) list_double2_graphic_pane_g2_cp2

0xa56a,	// (0x0000cada) list_double2_graphic_pane_g3_cp2

0xf44b,	// (0x000119bb) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf44b,	// (0x000119bb) list_double2_graphic_pane_t1_cp2

0xf461,	// (0x000119d1) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf461,	// (0x000119d1) list_double2_graphic_pane_t2_cp2

0xf473,	// (0x000119e3) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x000119e3) list_single_number_heading_pane_g1_cp2

0xf47f,	// (0x000119ef) list_single_number_heading_pane_g2_cp2

0xf487,	// (0x000119f7) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x000119f7) list_single_number_heading_pane_t1_cp2

0xa574,	// (0x0000cae4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa574,	// (0x0000cae4) list_single_number_heading_pane_t2_cp2

0xf49d,	// (0x00011a0d) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf49d,	// (0x00011a0d) list_single_number_heading_pane_t3_cp2

0xf473,	// (0x000119e3) list_single_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x000119e3) list_single_heading_pane_g1_cp2

0xf47f,	// (0x000119ef) list_single_heading_pane_g2_cp2

0xf487,	// (0x000119f7) list_single_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x000119f7) list_single_heading_pane_t1_cp2

0xb82c,	// (0x0000dd9c) list_single_heading_pane_t2_cp2_ParamLimits

0xb82c,	// (0x0000dd9c) list_single_heading_pane_t2_cp2

0x23a9,	// (0x00004919) list_double_graphic_pane_g1_cp2_ParamLimits

0x23a9,	// (0x00004919) list_double_graphic_pane_g1_cp2

0x23b5,	// (0x00004925) list_double_graphic_pane_g2_cp2_ParamLimits

0x23b5,	// (0x00004925) list_double_graphic_pane_g2_cp2

0x23c4,	// (0x00004934) list_double_graphic_pane_g3_cp2

0x23cc,	// (0x0000493c) list_double_graphic_pane_t1_cp2_ParamLimits

0x23cc,	// (0x0000493c) list_double_graphic_pane_t1_cp2

0x23e2,	// (0x00004952) list_double_graphic_pane_t2_cp2_ParamLimits

0x23e2,	// (0x00004952) list_double_graphic_pane_t2_cp2

0xf512,	// (0x00011a82) list_double_number_pane_g1_cp2_ParamLimits

0xf512,	// (0x00011a82) list_double_number_pane_g1_cp2

0xf51e,	// (0x00011a8e) list_double_number_pane_g2_cp2

0xb7c6,	// (0x0000dd36) list_double_number_pane_t1_cp2_ParamLimits

0xb7c6,	// (0x0000dd36) list_double_number_pane_t1_cp2

0x2381,	// (0x000048f1) list_double_number_pane_t2_cp2_ParamLimits

0x2381,	// (0x000048f1) list_double_number_pane_t2_cp2

0x2397,	// (0x00004907) list_double_number_pane_t3_cp2_ParamLimits

0x2397,	// (0x00004907) list_double_number_pane_t3_cp2

0xb703,	// (0x0000dc73) list_single_graphic_pane_g1_cp2_ParamLimits

0xb703,	// (0x0000dc73) list_single_graphic_pane_g1_cp2

0x001a,	// (0x0000258a) list_single_graphic_pane_g2_cp2_ParamLimits

0x001a,	// (0x0000258a) list_single_graphic_pane_g2_cp2

0x0026,	// (0x00002596) list_single_graphic_pane_g3_cp2

0x221b,	// (0x0000478b) list_single_graphic_pane_t1_cp2_ParamLimits

0x221b,	// (0x0000478b) list_single_graphic_pane_t1_cp2

0x001a,	// (0x0000258a) list_single_number_pane_g1_cp2_ParamLimits

0x001a,	// (0x0000258a) list_single_number_pane_g1_cp2

0x0026,	// (0x00002596) list_single_number_pane_g2_cp2

0x221b,	// (0x0000478b) list_single_number_pane_t1_cp2_ParamLimits

0x221b,	// (0x0000478b) list_single_number_pane_t1_cp2

0xb6ef,	// (0x0000dc5f) list_single_number_pane_t2_cp2_ParamLimits

0xb6ef,	// (0x0000dc5f) list_single_number_pane_t2_cp2

0xa52f,	// (0x0000ca9f) list_double2_pane_g1_cp2_ParamLimits

0xa52f,	// (0x0000ca9f) list_double2_pane_g1_cp2

0xf3c7,	// (0x00011937) list_double2_pane_g2_cp2

0xf4ea,	// (0x00011a5a) list_double2_pane_t1_cp2_ParamLimits

0xf4ea,	// (0x00011a5a) list_double2_pane_t1_cp2

0xf500,	// (0x00011a70) list_double2_pane_t2_cp2_ParamLimits

0xf500,	// (0x00011a70) list_double2_pane_t2_cp2

0xf512,	// (0x00011a82) list_double_pane_g1_cp2_ParamLimits

0xf512,	// (0x00011a82) list_double_pane_g1_cp2

0xf51e,	// (0x00011a8e) list_double_pane_g2_cp2

0xf526,	// (0x00011a96) list_double_pane_t1_cp2_ParamLimits

0xf526,	// (0x00011a96) list_double_pane_t1_cp2

0xf53c,	// (0x00011aac) list_double_pane_t2_cp2_ParamLimits

0xf53c,	// (0x00011aac) list_double_pane_t2_cp2

0x000a,	// (0x0000257a) list_single_pane_cp2_g3

0x001a,	// (0x0000258a) list_single_pane_g1_cp2_ParamLimits

0x001a,	// (0x0000258a) list_single_pane_g1_cp2

0x0026,	// (0x00002596) list_single_pane_g2_cp2

0x002e,	// (0x0000259e) list_single_pane_t1_cp2_ParamLimits

0x002e,	// (0x0000259e) list_single_pane_t1_cp2

0xa5a2,	// (0x0000cb12) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa5a2,	// (0x0000cb12) list_single_large_graphic_pane_g1_cp2

0x0054,	// (0x000025c4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0054,	// (0x000025c4) list_single_large_graphic_pane_g2_cp2

0x0060,	// (0x000025d0) list_single_large_graphic_pane_g3_cp2

0x0068,	// (0x000025d8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0068,	// (0x000025d8) list_single_large_graphic_pane_g4_cp1

0x0082,	// (0x000025f2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0082,	// (0x000025f2) list_single_large_graphic_pane_t1_cp2

0x208a,	// (0x000045fa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x208a,	// (0x000045fa) list_single_graphic_heading_pane_g1_cp2

0xb574,	// (0x0000dae4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb574,	// (0x0000dae4) list_single_graphic_heading_pane_g4_cp2

0x0026,	// (0x00002596) list_single_graphic_heading_pane_g5_cp2

0x2096,	// (0x00004606) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2096,	// (0x00004606) list_single_graphic_heading_pane_t1_cp2

0xb585,	// (0x0000daf5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb585,	// (0x0000daf5) list_single_graphic_heading_pane_t2_cp2

0x204b,	// (0x000045bb) list_single_2graphic_pane_g1_cp2_ParamLimits

0x204b,	// (0x000045bb) list_single_2graphic_pane_g1_cp2

0xb574,	// (0x0000dae4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb574,	// (0x0000dae4) list_single_2graphic_pane_g2_cp2

0x0026,	// (0x00002596) list_single_2graphic_pane_g3_cp2

0x2068,	// (0x000045d8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2068,	// (0x000045d8) list_single_2graphic_pane_g4_cp2

0x2074,	// (0x000045e4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2074,	// (0x000045e4) list_single_2graphic_pane_t1_cp2

0xde9e,	// (0x0001040e) list_highlight_pane_g10_cp1

0x1c23,	// (0x00004193) list_highlight_pane_g1_cp1

0x1c2b,	// (0x0000419b) list_highlight_pane_g2_cp1

0x1c33,	// (0x000041a3) list_highlight_pane_g3_cp1

0x1c3b,	// (0x000041ab) list_highlight_pane_g4_cp1

0x1c43,	// (0x000041b3) list_highlight_pane_g5_cp1

0x1c4b,	// (0x000041bb) list_highlight_pane_g6_cp1

0x1c53,	// (0x000041c3) list_highlight_pane_g7_cp1

0x1c5b,	// (0x000041cb) list_highlight_pane_g8_cp1

0x1c63,	// (0x000041d3) list_highlight_pane_g9_cp1

0xb53a,	// (0x0000daaa) form_field_slider_pane_t3

0xb548,	// (0x0000dab8) form_field_slider_pane_t4

0x1b5f,	// (0x000040cf) slider_form_pane_ParamLimits

0x1b5f,	// (0x000040cf) slider_form_pane

0xe017,	// (0x00010587) control_abbreviations

0xe017,	// (0x00010587) control_conventions

0xe017,	// (0x00010587) control_definitions

0xe017,	// (0x00010587) format_table_attribute

0x24b7,	// (0x00004a27) bg_popup_preview_window_pane_g9

0xe017,	// (0x00010587) format_table_data2

0xe017,	// (0x00010587) format_table_data3

0xe017,	// (0x00010587) format_table_data_example

0x0008,

0xe017,	// (0x00010587) intro_purpose

0xf8de,	// (0x00011e4e) bg_popup_preview_window_pane_g

0xe017,	// (0x00010587) texts_category

0xe017,	// (0x00010587) texts_graphics

0x0098,	// (0x00002608) text_digital

0x00a7,	// (0x00002617) text_primary

0x00b6,	// (0x00002626) text_primary_small

0x00c5,	// (0x00002635) text_secondary

0x00d4,	// (0x00002644) text_title

0x2dc4,	// (0x00005334) bg_passive_tab_pane_g1_cp3_srt

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp3_srt

0x2dcd,	// (0x0000533d) bg_passive_tab_pane_g3_cp3_srt

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp3_srt_ParamLimits

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp3_srt

0x2dd6,	// (0x00005346) tabs_4_active_pane_srt_g1

0xbb7b,	// (0x0000e0eb) tabs_4_active_pane_srt_t1_ParamLimits

0xbb7b,	// (0x0000e0eb) tabs_4_active_pane_srt_t1

0x2dc4,	// (0x00005334) bg_active_tab_pane_g1_cp3_copy1

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp3_copy1

0x2dcd,	// (0x0000533d) bg_active_tab_pane_g3_cp3_copy1

0xe0dd,	// (0x0001064d) tabs_2_long_active_pane_srt_ParamLimits

0xe0dd,	// (0x0001064d) tabs_2_long_active_pane_srt

0xe0dd,	// (0x0001064d) tabs_2_long_passive_pane_srt_ParamLimits

0xe0dd,	// (0x0001064d) tabs_2_long_passive_pane_srt

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp4_srt

0x297f,	// (0x00004eef) bg_passive_tab_pane_g1_cp4_srt

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp4_srt

0x2988,	// (0x00004ef8) bg_passive_tab_pane_g3_cp4_srt

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp4_srt_ParamLimits

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp4_srt

0xb928,	// (0x0000de98) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb928,	// (0x0000de98) tabs_2_long_active_pane_srt_t1

0x297f,	// (0x00004eef) bg_active_tab_pane_g1_cp4_srt

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp4_srt

0x2988,	// (0x00004ef8) bg_active_tab_pane_g3_cp4_srt

0xe0c5,	// (0x00010635) tabs_3_long_active_pane_srt_ParamLimits

0xe0c5,	// (0x00010635) tabs_3_long_active_pane_srt

0xe0c5,	// (0x00010635) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe0c5,	// (0x00010635) tabs_3_long_passive_pane_cp_srt

0xe0c5,	// (0x00010635) tabs_3_long_passive_pane_srt_ParamLimits

0xe0c5,	// (0x00010635) tabs_3_long_passive_pane_srt

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp5_srt

0xf3b5,	// (0x00011925) bg_passive_tab_pane_g1_cp5_srt

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp5_srt

0xf3be,	// (0x0001192e) bg_passive_tab_pane_g3_cp5_srt

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp5_srt_ParamLimits

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp5_srt

0xb912,	// (0x0000de82) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb912,	// (0x0000de82) tabs_3_long_active_pane_srt_t1

0xf3b5,	// (0x00011925) bg_active_tab_pane_g1_cp5_srt

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp5_srt

0xf3be,	// (0x0001192e) bg_active_tab_pane_g3_cp5_srt

0x295f,	// (0x00004ecf) navi_text_pane_srt_t1

0x2957,	// (0x00004ec7) navi_icon_pane_srt_g1

0x0348,	// (0x000028b8) midp_editing_number_pane_srt

0x00e3,	// (0x00002653) midp_ticker_pane_srt

0x0350,	// (0x000028c0) midp_ticker_pane_srt_g1

0x0358,	// (0x000028c8) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00011cdd) midp_ticker_pane_srt_g

0x0360,	// (0x000028d0) midp_ticker_pane_srt_t1

0x2948,	// (0x00004eb8) midp_editing_number_pane_t1_copy1

0x065c,	// (0x00002bcc) listscroll_midp_pane

0x065c,	// (0x00002bcc) midp_form_pane

0x014d,	// (0x000026bd) midp_info_popup_window_ParamLimits

0x014d,	// (0x000026bd) midp_info_popup_window

0xe97c,	// (0x00010eec) bg_popup_sub_pane_cp50_ParamLimits

0xe97c,	// (0x00010eec) bg_popup_sub_pane_cp50

0x1859,	// (0x00003dc9) listscroll_midp_info_pane_ParamLimits

0x1859,	// (0x00003dc9) listscroll_midp_info_pane

0x1841,	// (0x00003db1) listscroll_form_midp_pane_ParamLimits

0x1841,	// (0x00003db1) listscroll_form_midp_pane

0x184d,	// (0x00003dbd) scroll_bar_cp050

0xb52e,	// (0x0000da9e) list_midp_pane

0x3c44,	// (0x000061b4) signal_pane_g2_cp

0x175b,	// (0x00003ccb) listscroll_midp_info_pane_t1_ParamLimits

0x175b,	// (0x00003ccb) listscroll_midp_info_pane_t1

0x1773,	// (0x00003ce3) listscroll_midp_info_pane_t2_ParamLimits

0x1773,	// (0x00003ce3) listscroll_midp_info_pane_t2

0x17b1,	// (0x00003d21) listscroll_midp_info_pane_t3_ParamLimits

0x17b1,	// (0x00003d21) listscroll_midp_info_pane_t3

0x17eb,	// (0x00003d5b) listscroll_midp_info_pane_t4_ParamLimits

0x17eb,	// (0x00003d5b) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x00011d89) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x00011d89) listscroll_midp_info_pane_t

0xe9fc,	// (0x00010f6c) scroll_pane_cp21

0x16f5,	// (0x00003c65) form_midp_field_choice_group_pane

0x16fe,	// (0x00003c6e) form_midp_field_text_pane

0x1741,	// (0x00003cb1) form_midp_field_time_pane

0x1749,	// (0x00003cb9) form_midp_gauge_slider_pane

0x1752,	// (0x00003cc2) form_midp_gauge_wait_pane

0xe017,	// (0x00010587) form_midp_image_pane

0xb511,	// (0x0000da81) list_single_midp_pane_ParamLimits

0xb511,	// (0x0000da81) list_single_midp_pane

0xb4e9,	// (0x0000da59) form_midp_field_text_pane_t1

0x13e8,	// (0x00003958) input_focus_pane_cp050

0x16c4,	// (0x00003c34) list_midp_form_text_pane

0x1668,	// (0x00003bd8) form_midp_field_choice_group_pane_t1

0x1676,	// (0x00003be6) input_focus_pane_cp051

0x168a,	// (0x00003bfa) list_midp_choice_pane

0xe017,	// (0x00010587) status_idle_pane

0x164c,	// (0x00003bbc) form_midp_field_time_pane_t1

0xde9e,	// (0x0001040e) wait_anim_pane_g2_copy1

0x165a,	// (0x00003bca) form_midp_field_time_pane_t2

0x0001,

0x01fd,	// (0x0000276d) aid_navinavi_width_2_pane

0xf814,	// (0x00011d84) form_midp_field_time_pane_t

0xe017,	// (0x00010587) input_focus_pane_cp052

0xe017,	// (0x00010587) bg_input_focus_pane_cp040

0x160c,	// (0x00003b7c) form_midp_gauge_slider_pane_t1

0x161a,	// (0x00003b8a) form_midp_gauge_slider_pane_t2

0xb4cd,	// (0x0000da3d) form_midp_gauge_slider_pane_t3

0xb4db,	// (0x0000da4b) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x00011d7b) form_midp_gauge_slider_pane_t

0x1644,	// (0x00003bb4) form_midp_slider_pane

0xe0dd,	// (0x0001064d) bg_input_focus_pane_cp041_ParamLimits

0xe0dd,	// (0x0001064d) bg_input_focus_pane_cp041

0x15d9,	// (0x00003b49) form_midp_gauge_wait_pane_t1_ParamLimits

0x15d9,	// (0x00003b49) form_midp_gauge_wait_pane_t1

0x15eb,	// (0x00003b5b) form_midp_gauge_wait_pane_t2_ParamLimits

0x15eb,	// (0x00003b5b) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x00011d76) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x00011d76) form_midp_gauge_wait_pane_t

0x15fd,	// (0x00003b6d) form_midp_wait_pane_ParamLimits

0x15fd,	// (0x00003b6d) form_midp_wait_pane

0x15a1,	// (0x00003b11) form_midp_image_pane_g1

0x15aa,	// (0x00003b1a) form_midp_image_pane_t1

0x15b9,	// (0x00003b29) form_midp_image_pane_t2

0x15c8,	// (0x00003b38) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x00011d6f) form_midp_image_pane_t

0x1589,	// (0x00003af9) list_single_midp_pane_g1

0x1592,	// (0x00003b02) list_single_midp_pane_t1

0xb4b6,	// (0x0000da26) list_midp_form_item_pane_ParamLimits

0xb4b6,	// (0x0000da26) list_midp_form_item_pane

0x01a5,	// (0x00002715) list_midp_form_item_pane_t1

0x01b4,	// (0x00002724) midp_ticker_pane_g1

0x01c0,	// (0x00002730) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00011cc3) midp_ticker_pane_g

0xa647,	// (0x0000cbb7) midp_ticker_pane_t1

0xbad3,	// (0x0000e043) midp_editing_number_pane_t1

0x2c46,	// (0x000051b6) midp_editing_number_pane

0x2c55,	// (0x000051c5) midp_ticker_pane

0x2910,	// (0x00004e80) ai_message_heading_pane

0xe017,	// (0x00010587) bg_popup_window_pane_cp14

0x2918,	// (0x00004e88) listscroll_ai_message_pane

0x2896,	// (0x00004e06) ai_message_heading_pane_g1_ParamLimits

0x2896,	// (0x00004e06) ai_message_heading_pane_g1

0x28a2,	// (0x00004e12) ai_message_heading_pane_g2_ParamLimits

0x28a2,	// (0x00004e12) ai_message_heading_pane_g2

0x28b0,	// (0x00004e20) ai_message_heading_pane_g3_ParamLimits

0x28b0,	// (0x00004e20) ai_message_heading_pane_g3

0x28bc,	// (0x00004e2c) ai_message_heading_pane_g4_ParamLimits

0x28bc,	// (0x00004e2c) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x00011eb0) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x00011eb0) ai_message_heading_pane_g

0x28c8,	// (0x00004e38) ai_message_heading_pane_t1_ParamLimits

0x28c8,	// (0x00004e38) ai_message_heading_pane_t1

0x28e2,	// (0x00004e52) ai_message_heading_pane_t2_ParamLimits

0x28e2,	// (0x00004e52) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00011eb9) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00011eb9) ai_message_heading_pane_t

0x28f6,	// (0x00004e66) bg_popup_heading_pane_cp1_ParamLimits

0x28f6,	// (0x00004e66) bg_popup_heading_pane_cp1

0x2884,	// (0x00004df4) list_ai_message_pane_ParamLimits

0x2884,	// (0x00004df4) list_ai_message_pane

0xe9fc,	// (0x00010f6c) scroll_pane_cp10

0x27bc,	// (0x00004d2c) list_ai_message_pane_g1

0x27c4,	// (0x00004d34) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x00011e8d) list_ai_message_pane_g

0x27cc,	// (0x00004d3c) list_ai_message_pane_t1_ParamLimits

0x27cc,	// (0x00004d3c) list_ai_message_pane_t1

0x27e1,	// (0x00004d51) list_ai_message_pane_t2_ParamLimits

0x27e1,	// (0x00004d51) list_ai_message_pane_t2

0x27f6,	// (0x00004d66) list_ai_message_pane_t3_ParamLimits

0x27f6,	// (0x00004d66) list_ai_message_pane_t3

0x280b,	// (0x00004d7b) list_ai_message_pane_t4_ParamLimits

0x280b,	// (0x00004d7b) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x00011e92) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x00011e92) list_ai_message_pane_t

0xb8e6,	// (0x0000de56) cell_ai_soft_ind_pane_ParamLimits

0xb8e6,	// (0x0000de56) cell_ai_soft_ind_pane

0x01de,	// (0x0000274e) cell_ai_soft_ind_pane_g1_ParamLimits

0x01de,	// (0x0000274e) cell_ai_soft_ind_pane_g1

0xe017,	// (0x00010587) grid_highlight_cp1

0x01eb,	// (0x0000275b) text_secondary_cp56_ParamLimits

0x01eb,	// (0x0000275b) text_secondary_cp56

0x277a,	// (0x00004cea) example_general_pane_ParamLimits

0x277a,	// (0x00004cea) example_general_pane

0x2786,	// (0x00004cf6) example_parent_pane_g1_ParamLimits

0x2786,	// (0x00004cf6) example_parent_pane_g1

0x2792,	// (0x00004d02) example_parent_pane_t1_ParamLimits

0x2792,	// (0x00004d02) example_parent_pane_t1

0xacc9,	// (0x0000d239) popup_preview_text_window_ParamLimits

0xacc9,	// (0x0000d239) popup_preview_text_window

0x0012,	// (0x00002582) list_single_pane_cp2_g4

0xe35b,	// (0x000108cb) bg_popup_preview_window_pane_ParamLimits

0xe35b,	// (0x000108cb) bg_popup_preview_window_pane

0x24c1,	// (0x00004a31) popup_preview_text_window_t1_ParamLimits

0x24c1,	// (0x00004a31) popup_preview_text_window_t1

0x24df,	// (0x00004a4f) popup_preview_text_window_t2_ParamLimits

0x24df,	// (0x00004a4f) popup_preview_text_window_t2

0x2528,	// (0x00004a98) popup_preview_text_window_t3_ParamLimits

0x2528,	// (0x00004a98) popup_preview_text_window_t3

0x256d,	// (0x00004add) popup_preview_text_window_t4_ParamLimits

0x256d,	// (0x00004add) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x00011e61) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x00011e61) popup_preview_text_window_t

0x25eb,	// (0x00004b5b) scroll_pane_cp11

0x124b,	// (0x000037bb) bg_popup_preview_window_pane_g1

0x2475,	// (0x000049e5) bg_popup_preview_window_pane_g2

0x247f,	// (0x000049ef) bg_popup_preview_window_pane_g3

0x2489,	// (0x000049f9) bg_popup_preview_window_pane_g4

0x2493,	// (0x00004a03) bg_popup_preview_window_pane_g5

0x249d,	// (0x00004a0d) bg_popup_preview_window_pane_g6

0x24a5,	// (0x00004a15) bg_popup_preview_window_pane_g7

0x24ad,	// (0x00004a1d) bg_popup_preview_window_pane_g8

0xdeb4,	// (0x00010424) aid_popup_width_pane

0xac39,	// (0x0000d1a9) popup_midp_note_alarm_window_ParamLimits

0xac39,	// (0x0000d1a9) popup_midp_note_alarm_window

0xe827,	// (0x00010d97) data_form_pane_ParamLimits

0xa094,	// (0x0000c604) form_field_data_pane_g1

0xa09e,	// (0x0000c60e) form_field_data_pane_t1_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_ParamLimits

0xe841,	// (0x00010db1) data_form_wide_pane_ParamLimits

0xe852,	// (0x00010dc2) form_field_data_wide_pane_g1

0xe87e,	// (0x00010dee) form_field_data_wide_pane_t1_ParamLimits

0xe510,	// (0x00010a80) input_focus_pane_cp6_ParamLimits

0xa1df,	// (0x0000c74f) input_popup_find_pane_g1_ParamLimits

0xa1df,	// (0x0000c74f) input_popup_find_pane_g1

0xecee,	// (0x0001125e) aid_navi_side_left_pane

0xed03,	// (0x00011273) aid_navi_side_right_pane

0x1d1e,	// (0x0000428e) bg_popup_window_pane_cp30_ParamLimits

0x1d1e,	// (0x0000428e) bg_popup_window_pane_cp30

0x1d98,	// (0x00004308) popup_midp_note_alarm_window_g1_ParamLimits

0x1d98,	// (0x00004308) popup_midp_note_alarm_window_g1

0x1dc8,	// (0x00004338) popup_midp_note_alarm_window_t1_ParamLimits

0x1dc8,	// (0x00004338) popup_midp_note_alarm_window_t1

0x1e69,	// (0x000043d9) popup_midp_note_alarm_window_t2_ParamLimits

0x1e69,	// (0x000043d9) popup_midp_note_alarm_window_t2

0x1f17,	// (0x00004487) popup_midp_note_alarm_window_t3_ParamLimits

0x1f17,	// (0x00004487) popup_midp_note_alarm_window_t3

0x1f49,	// (0x000044b9) popup_midp_note_alarm_window_t4_ParamLimits

0x1f49,	// (0x000044b9) popup_midp_note_alarm_window_t4

0x1f6f,	// (0x000044df) popup_midp_note_alarm_window_t5_ParamLimits

0x1f6f,	// (0x000044df) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x00011dfe) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x00011dfe) popup_midp_note_alarm_window_t

0x201b,	// (0x0000458b) wait_bar_pane_cp1_ParamLimits

0x201b,	// (0x0000458b) wait_bar_pane_cp1

0xe017,	// (0x00010587) wait_anim_pane_copy1

0xe017,	// (0x00010587) wait_border_pane_copy1

0x1a03,	// (0x00003f73) wait_border_pane_g1_copy1

0xe898,	// (0x00010e08) form_field_popup_pane_g1

0xa0b8,	// (0x0000c628) form_field_popup_pane_t1_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_cp7_ParamLimits

0xe8a0,	// (0x00010e10) list_form_pane_ParamLimits

0xe8ac,	// (0x00010e1c) form_field_popup_wide_pane_g1

0xe8b4,	// (0x00010e24) form_field_popup_wide_pane_t1_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_cp8_ParamLimits

0xe8c9,	// (0x00010e39) list_form_wide_pane_ParamLimits

0x2e51,	// (0x000053c1) aid_size_cell_graphic_pane

0xa137,	// (0x0000c6a7) data_form_pane_t1_ParamLimits

0xbab7,	// (0x0000e027) data_form_wide_pane_t1_ParamLimits

0xb0cd,	// (0x0000d63d) bg_status_flat_pane

0x98bd,	// (0x0000be2d) title_pane_t1_ParamLimits

0xe08d,	// (0x000105fd) title_pane_t2_ParamLimits

0xe0b3,	// (0x00010623) title_pane_t3_ParamLimits

0xf557,	// (0x00011ac7) title_pane_t_ParamLimits

0xa2ef,	// (0x0000c85f) level_1_signal_ParamLimits

0xa301,	// (0x0000c871) level_2_signal_ParamLimits

0xa314,	// (0x0000c884) level_3_signal_ParamLimits

0xa327,	// (0x0000c897) level_4_signal_ParamLimits

0xa33a,	// (0x0000c8aa) level_5_signal_ParamLimits

0xa34d,	// (0x0000c8bd) level_6_signal_ParamLimits

0xa360,	// (0x0000c8d0) level_7_signal_ParamLimits

0xa2ef,	// (0x0000c85f) level_1_battery_ParamLimits

0xa301,	// (0x0000c871) level_2_battery_ParamLimits

0xa314,	// (0x0000c884) level_3_battery_ParamLimits

0xa327,	// (0x0000c897) level_4_battery_ParamLimits

0xa33a,	// (0x0000c8aa) level_5_battery_ParamLimits

0xa34d,	// (0x0000c8bd) level_6_battery_ParamLimits

0xa360,	// (0x0000c8d0) level_7_battery_ParamLimits

0x1c23,	// (0x00004193) bg_status_flat_pane_g1

0x1c2b,	// (0x0000419b) bg_status_flat_pane_g2

0x1c33,	// (0x000041a3) bg_status_flat_pane_g3

0x1c3b,	// (0x000041ab) bg_status_flat_pane_g4

0x1c43,	// (0x000041b3) bg_status_flat_pane_g5

0x1c4b,	// (0x000041bb) bg_status_flat_pane_g6

0x1c53,	// (0x000041c3) bg_status_flat_pane_g7

0x9951,	// (0x0000bec1) tabs_3_active_pane_t1_ParamLimits

0x9951,	// (0x0000bec1) tabs_3_passive_pane_t1_ParamLimits

0x996b,	// (0x0000bedb) tabs_4_active_pane_t1_ParamLimits

0x996b,	// (0x0000bedb) tabs_4_1_passive_pane_t1_ParamLimits

0xa1f5,	// (0x0000c765) tabs_2_active_pane_t1_ParamLimits

0xa1f5,	// (0x0000c765) tabs_2_passive_pane_t1_ParamLimits

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp4_ParamLimits

0xa207,	// (0x0000c777) tabs_2_long_active_pane_t1_ParamLimits

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp4_ParamLimits

0x1309,	// (0x00003879) list_single_midp_graphic_pane_t1_ParamLimits

0xe0dd,	// (0x0001064d) bg_active_tab_pane_cp5_ParamLimits

0xa21a,	// (0x0000c78a) tabs_3_long_active_pane_t1_ParamLimits

0x065c,	// (0x00002bcc) bg_passive_tab_pane_cp5_ParamLimits

0x1309,	// (0x00003879) list_single_midp_graphic_pane_t1

0xb0cd,	// (0x0000d63d) bg_status_flat_pane_ParamLimits

0x0e1d,	// (0x0000338d) indicator_pane_cp2_ParamLimits

0x0e1d,	// (0x0000338d) indicator_pane_cp2

0xb263,	// (0x0000d7d3) navi_pane_srt_ParamLimits

0xb263,	// (0x0000d7d3) navi_pane_srt

0x0f84,	// (0x000034f4) popup_clock_digital_analogue_window_cp1

0xe1c4,	// (0x00010734) indicator_pane_t1

0x00e3,	// (0x00002653) copy_highlight_pane

0x00e3,	// (0x00002653) cursor_graphics_pane

0x00e3,	// (0x00002653) graphic_within_text_pane

0x00e3,	// (0x00002653) link_highlight_pane

0x25ae,	// (0x00004b1e) popup_preview_text_window_t5_ParamLimits

0x25ae,	// (0x00004b1e) popup_preview_text_window_t5

0x0207,	// (0x00002777) cursor_digital_pane

0x0207,	// (0x00002777) cursor_primary_pane

0x0218,	// (0x00002788) cursor_primary_small_pane

0x0220,	// (0x00002790) cursor_secondary_pane

0x0228,	// (0x00002798) cursor_title_pane

0x0207,	// (0x00002777) link_highlight_digital_pane

0x020f,	// (0x0000277f) link_highlight_primary_pane

0x0218,	// (0x00002788) link_highlight_primary_small_pane

0x0220,	// (0x00002790) link_highlight_secondary_pane

0x0228,	// (0x00002798) link_highlight_title_pane

0x0207,	// (0x00002777) copy_highlight_digital_pane

0x0207,	// (0x00002777) copy_highlight_primary_pane

0x0218,	// (0x00002788) copy_highlight_primary_small_pane

0x0220,	// (0x00002790) copy_highlight_secondary_pane

0x0228,	// (0x00002798) copy_highlight_title_pane

0x0220,	// (0x00002790) graphic_text_digital_pane

0x1cc1,	// (0x00004231) graphic_text_primary_pane

0x1cca,	// (0x0000423a) graphic_text_primary_small_pane

0x0218,	// (0x00002788) graphic_text_secondary_pane

0x0207,	// (0x00002777) graphic_text_title_pane

0xa659,	// (0x0000cbc9) cursor_primary_pane_g1

0x1cb3,	// (0x00004223) cursor_text_primary_t1

0xb56a,	// (0x0000dada) cursor_primary_small_pane_g1

0x1ca5,	// (0x00004215) cursor_text_primary_small_t1

0xb560,	// (0x0000dad0) cursor_primary_small_pane_g1_copy1

0x1c8d,	// (0x000041fd) cursor_text_primary_small_t1_copy1

0x1c6b,	// (0x000041db) cursor_text_title_t1

0xb556,	// (0x0000dac6) cursor_title_pane_g1

0xa659,	// (0x0000cbc9) cursor_digital_pane_g1

0x023a,	// (0x000027aa) cursor_text_digital_t1

0x0248,	// (0x000027b8) link_highlight_primary_pane_g1

0x1c14,	// (0x00004184) link_highlight_primary_pane_t1

0x0248,	// (0x000027b8) link_highlight_primary_small_pane_g1

0x0250,	// (0x000027c0) link_highlight_primary_small_pane_t1

0x025f,	// (0x000027cf) link_highlight_secondary_pane_g1

0x0267,	// (0x000027d7) link_highlight_secondary_pane_t1

0x1b88,	// (0x000040f8) link_highlight_title_pane_g1

0x1b90,	// (0x00004100) link_highlight_title_pane_t1

0x1b71,	// (0x000040e1) link_highlight_digital_pane_g1

0x1b79,	// (0x000040e9) link_highlight_digital_pane_t1

0x1a39,	// (0x00003fa9) copy_highlight_primary_pane_g1

0x1a50,	// (0x00003fc0) copy_highlight_primary_pane_t1

0x1a39,	// (0x00003fa9) copy_highlight_primary_small_pane_g1

0x1a41,	// (0x00003fb1) copy_highlight_primary_small_pane_t1

0x0276,	// (0x000027e6) copy_highlight_secondary_pane_g1

0x027e,	// (0x000027ee) copy_highlight_secondary_pane_t1

0x1a22,	// (0x00003f92) copy_highlight_title_pane_g1

0x1a2a,	// (0x00003f9a) copy_highlight_title_pane_t1

0x1a39,	// (0x00003fa9) copy_highlight_digital_pane_g1

0x30d9,	// (0x00005649) copy_highlight_digital_pane_t1

0x302d,	// (0x0000559d) graphic_text_primary_pane_g1

0x30bd,	// (0x0000562d) graphic_text_primary_pane_t1

0x30cb,	// (0x0000563b) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x00011f2d) graphic_text_primary_pane_t

0x3099,	// (0x00005609) graphic_text_primary_small_pane_g1

0x30a1,	// (0x00005611) graphic_text_primary_small_pane_t1

0x30af,	// (0x0000561f) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x00011f28) graphic_text_primary_small_pane_t

0x3075,	// (0x000055e5) graphic_text_secondary_pane_g1

0x307d,	// (0x000055ed) graphic_text_secondary_pane_t1

0x308b,	// (0x000055fb) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x00011f23) graphic_text_secondary_pane_t

0x3051,	// (0x000055c1) graphic_text_title_pane_g1

0x3059,	// (0x000055c9) graphic_text_title_pane_t1

0x3067,	// (0x000055d7) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x00011f1e) graphic_text_title_pane_t

0x302d,	// (0x0000559d) graphic_text_digital_pane_g1

0x3035,	// (0x000055a5) graphic_text_digital_pane_t1

0x3043,	// (0x000055b3) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x00011f19) graphic_text_digital_pane_t

0xe0dd,	// (0x0001064d) navi_icon_pane_srt_ParamLimits

0xe0dd,	// (0x0001064d) navi_icon_pane_srt

0xe017,	// (0x00010587) navi_midp_pane_srt

0xe017,	// (0x00010587) navi_navi_pane_srt

0xe0dd,	// (0x0001064d) navi_text_pane_srt_ParamLimits

0xe0dd,	// (0x0001064d) navi_text_pane_srt

0x2ff8,	// (0x00005568) navi_navi_icon_text_pane_srt

0x3000,	// (0x00005570) navi_navi_pane_srt_g1_ParamLimits

0x3000,	// (0x00005570) navi_navi_pane_srt_g1

0x3012,	// (0x00005582) navi_navi_pane_srt_g2_ParamLimits

0x3012,	// (0x00005582) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x00011f14) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x00011f14) navi_navi_pane_srt_g

0x3024,	// (0x00005594) navi_navi_tabs_pane_srt

0x2ff8,	// (0x00005568) navi_navi_text_pane_srt

0x2ff8,	// (0x00005568) navi_navi_volume_pane_srt

0x2fe9,	// (0x00005559) navi_navi_text_pane_srt_t1

0x2fc4,	// (0x00005534) navi_navi_volume_pane_srt_g1

0x2fcc,	// (0x0000553c) volume_small_pane_srt_ParamLimits

0x2fcc,	// (0x0000553c) volume_small_pane_srt

0x028d,	// (0x000027fd) volume_small_pane_srt_g1_ParamLimits

0x028d,	// (0x000027fd) volume_small_pane_srt_g1

0x029d,	// (0x0000280d) volume_small_pane_srt_g2_ParamLimits

0x029d,	// (0x0000280d) volume_small_pane_srt_g2

0x02ae,	// (0x0000281e) volume_small_pane_srt_g3_ParamLimits

0x02ae,	// (0x0000281e) volume_small_pane_srt_g3

0x02bf,	// (0x0000282f) volume_small_pane_srt_g4_ParamLimits

0x02bf,	// (0x0000282f) volume_small_pane_srt_g4

0x02d0,	// (0x00002840) volume_small_pane_srt_g5_ParamLimits

0x02d0,	// (0x00002840) volume_small_pane_srt_g5

0x02e1,	// (0x00002851) volume_small_pane_srt_g6_ParamLimits

0x02e1,	// (0x00002851) volume_small_pane_srt_g6

0x02f2,	// (0x00002862) volume_small_pane_srt_g7_ParamLimits

0x02f2,	// (0x00002862) volume_small_pane_srt_g7

0x0303,	// (0x00002873) volume_small_pane_srt_g8_ParamLimits

0x0303,	// (0x00002873) volume_small_pane_srt_g8

0x0314,	// (0x00002884) volume_small_pane_srt_g9_ParamLimits

0x0314,	// (0x00002884) volume_small_pane_srt_g9

0x0325,	// (0x00002895) volume_small_pane_srt_g10_ParamLimits

0x0325,	// (0x00002895) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00011cc8) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00011cc8) volume_small_pane_srt_g

0xe410,	// (0x00010980) query_popup_data_pane_cp2

0x2fb2,	// (0x00005522) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2fb2,	// (0x00005522) navi_navi_icon_text_pane_srt_t1

0x1cc1,	// (0x00004231) navi_tabs_2_long_pane_srt

0x1cc1,	// (0x00004231) navi_tabs_2_pane_srt

0x1cc1,	// (0x00004231) navi_tabs_3_long_pane_srt

0x1cc1,	// (0x00004231) navi_tabs_3_pane_srt

0x1cc1,	// (0x00004231) navi_tabs_4_pane_srt

0x2f8a,	// (0x000054fa) tabs_2_active_pane_srt_ParamLimits

0x2f8a,	// (0x000054fa) tabs_2_active_pane_srt

0x2f9a,	// (0x0000550a) tabs_2_passive_pane_srt_ParamLimits

0x2f9a,	// (0x0000550a) tabs_2_passive_pane_srt

0x13e8,	// (0x00003958) bg_passive_tab_pane_cp1_srt_ParamLimits

0x13e8,	// (0x00003958) bg_passive_tab_pane_cp1_srt

0x2f5e,	// (0x000054ce) bg_passive_tab_pane_g1_cp1_srt

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp1_srt

0x2f67,	// (0x000054d7) bg_passive_tab_pane_g3_cp1_srt

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp1_srt_ParamLimits

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp1_srt

0x2f70,	// (0x000054e0) tabs_2_active_pane_srt_g1

0xbbfc,	// (0x0000e16c) tabs_2_active_pane_srt_t1_ParamLimits

0xbbfc,	// (0x0000e16c) tabs_2_active_pane_srt_t1

0x2f5e,	// (0x000054ce) bg_active_tab_pane_g1_cp1_srt

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp1_srt

0x2f67,	// (0x000054d7) bg_active_tab_pane_g3_cp1_srt

0x2f2b,	// (0x0000549b) tabs_3_active_pane_srt_ParamLimits

0x2f2b,	// (0x0000549b) tabs_3_active_pane_srt

0x2f3c,	// (0x000054ac) tabs_3_passive_pane_cp_srt_ParamLimits

0x2f3c,	// (0x000054ac) tabs_3_passive_pane_cp_srt

0x2f4d,	// (0x000054bd) tabs_3_passive_pane_srt_ParamLimits

0x2f4d,	// (0x000054bd) tabs_3_passive_pane_srt

0x13e8,	// (0x00003958) bg_passive_tab_pane_cp2_srt_ParamLimits

0x13e8,	// (0x00003958) bg_passive_tab_pane_cp2_srt

0x0336,	// (0x000028a6) bg_passive_tab_pane_g1_cp2_srt

0xf22a,	// (0x0001179a) bg_passive_tab_pane_g2_cp2_srt

0x033f,	// (0x000028af) bg_passive_tab_pane_g3_cp2_srt

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp2_srt_ParamLimits

0xe0c5,	// (0x00010635) bg_active_tab_pane_cp2_srt

0x2f11,	// (0x00005481) tabs_3_active_pane_srt_g1

0xbbe6,	// (0x0000e156) tabs_3_active_pane_srt_t1_ParamLimits

0xbbe6,	// (0x0000e156) tabs_3_active_pane_srt_t1

0x0336,	// (0x000028a6) bg_active_tab_pane_g1_cp2_srt

0xf22a,	// (0x0001179a) bg_active_tab_pane_g2_cp2_srt

0x033f,	// (0x000028af) bg_active_tab_pane_g3_cp2_srt

0x2ec9,	// (0x00005439) tabs_4_active_pane_srt_ParamLimits

0x2ec9,	// (0x00005439) tabs_4_active_pane_srt

0x2edb,	// (0x0000544b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2edb,	// (0x0000544b) tabs_4_passive_pane_cp2_srt

0x05da,	// (0x00002b4a) aid_size_cell_toolbar

0x2a6a,	// (0x00004fda) main_idle_act_pane_ParamLimits

0x082d,	// (0x00002d9d) popup_large_graphic_colour_window_ParamLimits

0xaf8f,	// (0x0000d4ff) popup_toolbar_window_ParamLimits

0xaf8f,	// (0x0000d4ff) popup_toolbar_window

0x2c8b,	// (0x000051fb) list_single_graphic_2heading_pane_ParamLimits

0x2c8b,	// (0x000051fb) list_single_graphic_2heading_pane

0xed7c,	// (0x000112ec) aid_size_cell_apps_grid_lsc_pane

0xed8e,	// (0x000112fe) aid_size_cell_apps_grid_prt_pane

0x065c,	// (0x00002bcc) bg_wml_button_pane_cp1_ParamLimits

0x065c,	// (0x00002bcc) bg_wml_button_pane_cp1

0xb4e9,	// (0x0000da59) form_midp_field_text_pane_t1_ParamLimits

0x13e8,	// (0x00003958) input_focus_pane_cp050_ParamLimits

0x16c4,	// (0x00003c34) list_midp_form_text_pane_ParamLimits

0x1676,	// (0x00003be6) input_focus_pane_cp051_ParamLimits

0x168a,	// (0x00003bfa) list_midp_choice_pane_ParamLimits

0xb4a0,	// (0x0000da10) list_single_2graphic_pane_cp3_ParamLimits

0xb4a0,	// (0x0000da10) list_single_2graphic_pane_cp3

0x400e,	// (0x0000657e) list_single_midp_graphic_pane_ParamLimits

0x400e,	// (0x0000657e) list_single_midp_graphic_pane

0x10e3,	// (0x00003653) list_single_graphic_2heading_pane_g1_ParamLimits

0x10e3,	// (0x00003653) list_single_graphic_2heading_pane_g1

0x0054,	// (0x000025c4) list_single_graphic_2heading_pane_g4_ParamLimits

0x0054,	// (0x000025c4) list_single_graphic_2heading_pane_g4

0x10ef,	// (0x0000365f) list_single_graphic_2heading_pane_g5_ParamLimits

0x10ef,	// (0x0000365f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00011d1b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00011d1b) list_single_graphic_2heading_pane_g

0x10fb,	// (0x0000366b) list_single_graphic_2heading_pane_t1_ParamLimits

0x10fb,	// (0x0000366b) list_single_graphic_2heading_pane_t1

0x110f,	// (0x0000367f) list_single_graphic_2heading_pane_t2_ParamLimits

0x110f,	// (0x0000367f) list_single_graphic_2heading_pane_t2

0x112b,	// (0x0000369b) list_single_graphic_2heading_pane_t3_ParamLimits

0x112b,	// (0x0000369b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00011d22) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00011d22) list_single_graphic_2heading_pane_t

0x1143,	// (0x000036b3) bg_popup_sub_pane_cp2

0x116d,	// (0x000036dd) grid_toobar_pane

0x11a9,	// (0x00003719) cell_toolbar_pane_ParamLimits

0x11a9,	// (0x00003719) cell_toolbar_pane

0x11ef,	// (0x0000375f) cell_toolbar_pane_g1_ParamLimits

0x11ef,	// (0x0000375f) cell_toolbar_pane_g1

0x1203,	// (0x00003773) cell_toolbar_pane_g2_ParamLimits

0x1203,	// (0x00003773) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00011d29) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00011d29) cell_toolbar_pane_g

0x1225,	// (0x00003795) grid_highlight_pane_cp2_ParamLimits

0x1225,	// (0x00003795) grid_highlight_pane_cp2

0x123f,	// (0x000037af) toolbar_button_pane

0x124b,	// (0x000037bb) toolbar_button_pane_g1

0x1253,	// (0x000037c3) toolbar_button_pane_g2

0x125b,	// (0x000037cb) toolbar_button_pane_g3

0x1263,	// (0x000037d3) toolbar_button_pane_g4

0x126b,	// (0x000037db) toolbar_button_pane_g5

0x1273,	// (0x000037e3) toolbar_button_pane_g6

0x127b,	// (0x000037eb) toolbar_button_pane_g7

0x1283,	// (0x000037f3) toolbar_button_pane_g8

0x128b,	// (0x000037fb) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x00011d2e) toolbar_button_pane_g

0x129b,	// (0x0000380b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x129b,	// (0x0000380b) list_single_2graphic_pane_g1_cp3

0xb402,	// (0x0000d972) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb402,	// (0x0000d972) list_single_2graphic_pane_g2_cp3

0xf47f,	// (0x000119ef) list_single_2graphic_pane_g3_cp3

0x12b8,	// (0x00003828) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12b8,	// (0x00003828) list_single_2graphic_pane_g4_cp3

0x12c4,	// (0x00003834) list_single_2graphic_pane_t1_cp3_ParamLimits

0x12c4,	// (0x00003834) list_single_2graphic_pane_t1_cp3

0xf473,	// (0x000119e3) list_single_midp_graphic_pane_g2_ParamLimits

0xf473,	// (0x000119e3) list_single_midp_graphic_pane_g2

0x05e2,	// (0x00002b52) aid_zoom_text_primary

0x05ea,	// (0x00002b5a) aid_zoom_text_secondary

0xa6b1,	// (0x0000cc21) status_small_pane_g7_ParamLimits

0xa6b1,	// (0x0000cc21) status_small_pane_g7

0xa6d4,	// (0x0000cc44) status_small_pane_t1_ParamLimits

0x98a5,	// (0x0000be15) title_pane_g2

0x0003,

0xf54e,	// (0x00011abe) title_pane_g

0x9b31,	// (0x0000c0a1) aid_size_cell_colour_1_pane_ParamLimits

0x9b31,	// (0x0000c0a1) aid_size_cell_colour_1_pane

0x9b45,	// (0x0000c0b5) aid_size_cell_colour_2_pane_ParamLimits

0x9b45,	// (0x0000c0b5) aid_size_cell_colour_2_pane

0x9b59,	// (0x0000c0c9) aid_size_cell_colour_3_pane_ParamLimits

0x9b59,	// (0x0000c0c9) aid_size_cell_colour_3_pane

0x9b6d,	// (0x0000c0dd) aid_size_cell_colour_4_pane_ParamLimits

0x9b6d,	// (0x0000c0dd) aid_size_cell_colour_4_pane

0xebf5,	// (0x00011165) title_pane_stacon_g1_ParamLimits

0xebf5,	// (0x00011165) title_pane_stacon_g1

0x1aa7,	// (0x00004017) popup_note_wait_window_g3_ParamLimits

0x1aa7,	// (0x00004017) popup_note_wait_window_g3

0x1b1e,	// (0x0000408e) popup_note_wait_window_t5_ParamLimits

0x1b1e,	// (0x0000408e) popup_note_wait_window_t5

0xe017,	// (0x00010587) main_feb_china_hwr_fs_writing_pane

0xa926,	// (0x0000ce96) popup_feb_china_hwr_fs_window_ParamLimits

0xa926,	// (0x0000ce96) popup_feb_china_hwr_fs_window

0xb413,	// (0x0000d983) aid_size_cell_hwr_fs_ParamLimits

0xb413,	// (0x0000d983) aid_size_cell_hwr_fs

0x13e8,	// (0x00003958) bg_popup_sub_pane_cp3_ParamLimits

0x13e8,	// (0x00003958) bg_popup_sub_pane_cp3

0xb428,	// (0x0000d998) grid_hwr_fs_pane_ParamLimits

0xb428,	// (0x0000d998) grid_hwr_fs_pane

0x140c,	// (0x0000397c) linegrid_hwr_fs_pane_ParamLimits

0x140c,	// (0x0000397c) linegrid_hwr_fs_pane

0xb440,	// (0x0000d9b0) cell_hwr_fs_pane_ParamLimits

0xb440,	// (0x0000d9b0) cell_hwr_fs_pane

0x1440,	// (0x000039b0) linegrid_hwr_fs_pane_g1_ParamLimits

0x1440,	// (0x000039b0) linegrid_hwr_fs_pane_g1

0xb466,	// (0x0000d9d6) linegrid_hwr_fs_pane_g2_ParamLimits

0xb466,	// (0x0000d9d6) linegrid_hwr_fs_pane_g2

0x145e,	// (0x000039ce) linegrid_hwr_fs_pane_g3_ParamLimits

0x145e,	// (0x000039ce) linegrid_hwr_fs_pane_g3

0x146a,	// (0x000039da) linegrid_hwr_fs_pane_g4_ParamLimits

0x146a,	// (0x000039da) linegrid_hwr_fs_pane_g4

0x1488,	// (0x000039f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x1488,	// (0x000039f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x00011d54) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x00011d54) linegrid_hwr_fs_pane_g

0x149e,	// (0x00003a0e) cell_hwr_fs_pane_g1_ParamLimits

0x149e,	// (0x00003a0e) cell_hwr_fs_pane_g1

0x101a,	// (0x0000358a) cell_hwr_fs_pane_g2_ParamLimits

0x101a,	// (0x0000358a) cell_hwr_fs_pane_g2

0xb478,	// (0x0000d9e8) cell_hwr_fs_pane_g3_ParamLimits

0xb478,	// (0x0000d9e8) cell_hwr_fs_pane_g3

0xb485,	// (0x0000d9f5) cell_hwr_fs_pane_g4_ParamLimits

0xb485,	// (0x0000d9f5) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x00011d5f) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x00011d5f) cell_hwr_fs_pane_g

0xb492,	// (0x0000da02) cell_hwr_fs_pane_t1

0xe017,	// (0x00010587) grid_highlight_pane_cp6

0xe017,	// (0x00010587) main_idle_act2_pane

0xe9e3,	// (0x00010f53) aid_inside_area_popup_secondary

0xb727,	// (0x0000dc97) aid_inside_area_window_primary_ParamLimits

0xb727,	// (0x0000dc97) aid_inside_area_window_primary

0x30e8,	// (0x00005658) ai2_news_ticker_pane

0x30f0,	// (0x00005660) aid_size_cell_ai1_link_ParamLimits

0x30f0,	// (0x00005660) aid_size_cell_ai1_link

0x310a,	// (0x0000567a) popup_ai2_data_window_ParamLimits

0x310a,	// (0x0000567a) popup_ai2_data_window

0x3128,	// (0x00005698) popup_ai2_link_window_ParamLimits

0x3128,	// (0x00005698) popup_ai2_link_window

0x13e8,	// (0x00003958) bg_popup_sub_pane_cp4_ParamLimits

0x13e8,	// (0x00003958) bg_popup_sub_pane_cp4

0x313e,	// (0x000056ae) grid_ai2_link_pane_ParamLimits

0x313e,	// (0x000056ae) grid_ai2_link_pane

0x3155,	// (0x000056c5) popup_ai2_link_window_g1_ParamLimits

0x3155,	// (0x000056c5) popup_ai2_link_window_g1

0x3161,	// (0x000056d1) popup_ai2_link_window_g2_ParamLimits

0x3161,	// (0x000056d1) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x00011f32) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x00011f32) popup_ai2_link_window_g

0x3172,	// (0x000056e2) ai2_mp_button_pane

0x317a,	// (0x000056ea) ai2_mp_volume_pane

0x1676,	// (0x00003be6) bg_popup_sub_pane_cp5_ParamLimits

0x1676,	// (0x00003be6) bg_popup_sub_pane_cp5

0x3182,	// (0x000056f2) heading_ai2_gene_pane_ParamLimits

0x3182,	// (0x000056f2) heading_ai2_gene_pane

0x318e,	// (0x000056fe) list_ai2_gene_pane_ParamLimits

0x318e,	// (0x000056fe) list_ai2_gene_pane

0x31d6,	// (0x00005746) cell_ai2_link_pane_ParamLimits

0x31d6,	// (0x00005746) cell_ai2_link_pane

0x31ec,	// (0x0000575c) cell_ai2_link_pane_g1

0xe017,	// (0x00010587) grid_highlight_pane_cp7

0x32bf,	// (0x0000582f) ai2_mp_volume_pane_g1

0x32c7,	// (0x00005837) ai2_mp_volume_pane_g2

0x3234,	// (0x000057a4) list_ai2_gene_pane_t1

0x32cf,	// (0x0000583f) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x00011f4b) ai2_mp_volume_pane_g

0x32d7,	// (0x00005847) volume_small_pane_cp3

0x32e0,	// (0x00005850) aid_size_cell_ai2_button

0x32e8,	// (0x00005858) grid_ai2_button_pane

0x32f1,	// (0x00005861) cell_ai2_button_pane_ParamLimits

0x32f1,	// (0x00005861) cell_ai2_button_pane

0xde9e,	// (0x0001040e) cell_ai2_button_pane_g1

0xe017,	// (0x00010587) grid_highlight_pane_cp8

0x327f,	// (0x000057ef) ai2_gene_pane_t1_ParamLimits

0x327f,	// (0x000057ef) ai2_gene_pane_t1

0xa892,	// (0x0000ce02) aid_height_parent_landscape

0xb93f,	// (0x0000deaf) aid_height_set_list

0x2a6a,	// (0x00004fda) aid_size_parent

0x2e51,	// (0x000053c1) aid_size_cell_graphic_pane_ParamLimits

0x319e,	// (0x0000570e) popup_ai2_data_window_g1_ParamLimits

0x319e,	// (0x0000570e) popup_ai2_data_window_g1

0x31aa,	// (0x0000571a) ai2_news_ticker_pane_g1

0x31b2,	// (0x00005722) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x00011f37) ai2_news_ticker_pane_g

0x31ba,	// (0x0000572a) ai2_news_ticker_pane_t1

0x31c8,	// (0x00005738) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x00011f3c) ai2_news_ticker_pane_t

0x31f5,	// (0x00005765) heading_ai2_gene_pane_g1

0x31fd,	// (0x0000576d) heading_ai2_gene_pane_t1_ParamLimits

0x31fd,	// (0x0000576d) heading_ai2_gene_pane_t1

0x3212,	// (0x00005782) list_highlight_pane_cp6

0x321a,	// (0x0000578a) ai2_gene_pane_ParamLimits

0x321a,	// (0x0000578a) ai2_gene_pane

0x3242,	// (0x000057b2) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x00011f41) list_ai2_gene_pane_t

0x3250,	// (0x000057c0) list_highlight_pane_cp8_ParamLimits

0x3250,	// (0x000057c0) list_highlight_pane_cp8

0x3261,	// (0x000057d1) ai2_gene_pane_g1_ParamLimits

0x3261,	// (0x000057d1) ai2_gene_pane_g1

0x3273,	// (0x000057e3) ai2_gene_pane_g2_ParamLimits

0x3273,	// (0x000057e3) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x00011f46) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x00011f46) ai2_gene_pane_g

0xe72b,	// (0x00010c9b) scroll_pane_cp12

0xa851,	// (0x0000cdc1) control_pane_t3_ParamLimits

0xa851,	// (0x0000cdc1) control_pane_t3

0xa6c5,	// (0x0000cc35) status_small_pane_g8_ParamLimits

0xa6c5,	// (0x0000cc35) status_small_pane_g8

0xa9c8,	// (0x0000cf38) popup_find_window_ParamLimits

0xac79,	// (0x0000d1e9) popup_note_image_window_ParamLimits

0x10e3,	// (0x00003653) list_double2_graphic_pane_vc_g1_ParamLimits

0x10e3,	// (0x00003653) list_double2_graphic_pane_vc_g1

0x0054,	// (0x000025c4) list_double2_graphic_pane_vc_g2_ParamLimits

0x0054,	// (0x000025c4) list_double2_graphic_pane_vc_g2

0x10ef,	// (0x0000365f) list_double2_graphic_pane_vc_g3_ParamLimits

0x10ef,	// (0x0000365f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x00011d1b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011d1b) list_double2_graphic_pane_vc_g

0x11d9,	// (0x00003749) list_double2_graphic_pane_vc_t1_ParamLimits

0x11d9,	// (0x00003749) list_double2_graphic_pane_vc_t1

0x0054,	// (0x000025c4) list_single_heading_pane_vc_g1_ParamLimits

0x0054,	// (0x000025c4) list_single_heading_pane_vc_g1

0x10ef,	// (0x0000365f) list_single_heading_pane_vc_g2_ParamLimits

0x10ef,	// (0x0000365f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b38) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b38) list_single_heading_pane_vc_g

0x12df,	// (0x0000384f) list_single_heading_pane_vc_t1_ParamLimits

0x12df,	// (0x0000384f) list_single_heading_pane_vc_t1

0x12f7,	// (0x00003867) list_single_heading_pane_vc_t2_ParamLimits

0x12f7,	// (0x00003867) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x00011d43) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x00011d43) list_single_heading_pane_vc_t

0x131f,	// (0x0000388f) list_setting_number_pane_vc_g1_ParamLimits

0x131f,	// (0x0000388f) list_setting_number_pane_vc_g1

0x132b,	// (0x0000389b) list_setting_number_pane_vc_g2_ParamLimits

0x132b,	// (0x0000389b) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011d48) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011d48) list_setting_number_pane_vc_g

0x1337,	// (0x000038a7) list_setting_number_pane_vc_t1_ParamLimits

0x1337,	// (0x000038a7) list_setting_number_pane_vc_t1

0x134b,	// (0x000038bb) list_setting_number_pane_vc_t2_ParamLimits

0x134b,	// (0x000038bb) list_setting_number_pane_vc_t2

0x1367,	// (0x000038d7) list_setting_number_pane_vc_t3_ParamLimits

0x1367,	// (0x000038d7) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x00011d4d) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x00011d4d) list_setting_number_pane_vc_t

0x1395,	// (0x00003905) set_value_pane_vc_ParamLimits

0x1395,	// (0x00003905) set_value_pane_vc

0x2c8b,	// (0x000051fb) list_double2_graphic_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double2_graphic_pane_vc

0x2c8b,	// (0x000051fb) list_double2_large_graphic_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double2_large_graphic_pane_vc

0x2c8b,	// (0x000051fb) list_double2_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double2_pane_vc

0x2c8b,	// (0x000051fb) list_double_graphic_heading_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double_graphic_heading_pane_vc

0x2c8b,	// (0x000051fb) list_double_graphic_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double_graphic_pane_vc

0x2c8b,	// (0x000051fb) list_double_heading_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double_heading_pane_vc

0x2c9f,	// (0x0000520f) list_double_large_graphic_pane_vc_ParamLimits

0x2c9f,	// (0x0000520f) list_double_large_graphic_pane_vc

0x2c8b,	// (0x000051fb) list_double_number_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double_number_pane_vc

0x2c8b,	// (0x000051fb) list_double_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double_pane_vc

0x2c8b,	// (0x000051fb) list_double_time_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_double_time_pane_vc

0x2c8b,	// (0x000051fb) list_setting_number_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_setting_number_pane_vc

0x2c8b,	// (0x000051fb) list_setting_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_setting_pane_vc

0x2c8b,	// (0x000051fb) list_single_graphic_heading_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_single_graphic_heading_pane_vc

0x2c8b,	// (0x000051fb) list_single_heading_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_single_heading_pane_vc

0x2c8b,	// (0x000051fb) list_single_number_heading_pane_vc_ParamLimits

0x2c8b,	// (0x000051fb) list_single_number_heading_pane_vc

0x10e3,	// (0x00003653) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x10e3,	// (0x00003653) list_double_graphic_heading_pane_vc_g1

0x3324,	// (0x00005894) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3324,	// (0x00005894) list_double_graphic_heading_pane_vc_g2

0x3330,	// (0x000058a0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3330,	// (0x000058a0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x00011f52) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x00011f52) list_double_graphic_heading_pane_vc_g

0x333c,	// (0x000058ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x333c,	// (0x000058ac) list_double_graphic_heading_pane_vc_t1

0x3352,	// (0x000058c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3352,	// (0x000058c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00011f59) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00011f59) list_double_graphic_heading_pane_vc_t

0x131f,	// (0x0000388f) list_setting_pane_vc_g1_ParamLimits

0x131f,	// (0x0000388f) list_setting_pane_vc_g1

0x132b,	// (0x0000389b) list_setting_pane_vc_g2_ParamLimits

0x132b,	// (0x0000389b) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011d48) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011d48) list_setting_pane_vc_g

0x3598,	// (0x00005b08) list_setting_pane_vc_t1_ParamLimits

0x3598,	// (0x00005b08) list_setting_pane_vc_t1

0x35b4,	// (0x00005b24) list_setting_pane_vc_t2_ParamLimits

0x35b4,	// (0x00005b24) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00011f9c) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00011f9c) list_setting_pane_vc_t

0x1395,	// (0x00003905) set_value_pane_cp_vc_ParamLimits

0x1395,	// (0x00003905) set_value_pane_cp_vc

0x0054,	// (0x000025c4) list_single_number_heading_pane_vc_g1_ParamLimits

0x0054,	// (0x000025c4) list_single_number_heading_pane_vc_g1

0x10ef,	// (0x0000365f) list_single_number_heading_pane_vc_g2_ParamLimits

0x10ef,	// (0x0000365f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b38) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b38) list_single_number_heading_pane_vc_g

0x12df,	// (0x0000384f) list_single_number_heading_pane_vc_t1_ParamLimits

0x12df,	// (0x0000384f) list_single_number_heading_pane_vc_t1

0x35d0,	// (0x00005b40) list_single_number_heading_pane_vc_t2_ParamLimits

0x35d0,	// (0x00005b40) list_single_number_heading_pane_vc_t2

0x35e2,	// (0x00005b52) list_single_number_heading_pane_vc_t3_ParamLimits

0x35e2,	// (0x00005b52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00011fa1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00011fa1) list_single_number_heading_pane_vc_t

0x10e3,	// (0x00003653) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x10e3,	// (0x00003653) list_single_graphic_heading_pane_vc_g1

0x0054,	// (0x000025c4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0054,	// (0x000025c4) list_single_graphic_heading_pane_vc_g4

0x10ef,	// (0x0000365f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x10ef,	// (0x0000365f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x00011d1b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011d1b) list_single_graphic_heading_pane_vc_g

0x12df,	// (0x0000384f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x12df,	// (0x0000384f) list_single_graphic_heading_pane_vc_t1

0x35f4,	// (0x00005b64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x35f4,	// (0x00005b64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00011fa8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00011fa8) list_single_graphic_heading_pane_vc_t

0x0054,	// (0x000025c4) list_double2_pane_vc_g1_ParamLimits

0x0054,	// (0x000025c4) list_double2_pane_vc_g1

0x10ef,	// (0x0000365f) list_double2_pane_vc_g2_ParamLimits

0x10ef,	// (0x0000365f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b38) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b38) list_double2_pane_vc_g

0x3606,	// (0x00005b76) list_double2_pane_vc_t1_ParamLimits

0x3606,	// (0x00005b76) list_double2_pane_vc_t1

0x361c,	// (0x00005b8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x361c,	// (0x00005b8c) list_double2_large_graphic_pane_vc_g1

0x0054,	// (0x000025c4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0054,	// (0x000025c4) list_double2_large_graphic_pane_vc_g2

0x10ef,	// (0x0000365f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x10ef,	// (0x0000365f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00011b55) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00011b55) list_double2_large_graphic_pane_vc_g

0x3628,	// (0x00005b98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3628,	// (0x00005b98) list_double2_large_graphic_pane_vc_t1

0x363e,	// (0x00005bae) list_double_time_pane_vc_g1_ParamLimits

0x363e,	// (0x00005bae) list_double_time_pane_vc_g1

0x364a,	// (0x00005bba) list_double_time_pane_vc_g2_ParamLimits

0x364a,	// (0x00005bba) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x00011fad) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x00011fad) list_double_time_pane_vc_g

0x3656,	// (0x00005bc6) list_double_time_pane_vc_t1_ParamLimits

0x3656,	// (0x00005bc6) list_double_time_pane_vc_t1

0x3686,	// (0x00005bf6) list_double_time_pane_vc_t2_ParamLimits

0x3686,	// (0x00005bf6) list_double_time_pane_vc_t2

0x36af,	// (0x00005c1f) list_double_time_pane_vc_t3_ParamLimits

0x36af,	// (0x00005c1f) list_double_time_pane_vc_t3

0x36c1,	// (0x00005c31) list_double_time_pane_vc_t4_ParamLimits

0x36c1,	// (0x00005c31) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x00011fb2) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x00011fb2) list_double_time_pane_vc_t

0x0054,	// (0x000025c4) list_double_pane_vc_g1_ParamLimits

0x0054,	// (0x000025c4) list_double_pane_vc_g1

0x10ef,	// (0x0000365f) list_double_pane_vc_g2_ParamLimits

0x10ef,	// (0x0000365f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b38) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b38) list_double_pane_vc_g

0x36e6,	// (0x00005c56) list_double_pane_vc_t1_ParamLimits

0x36e6,	// (0x00005c56) list_double_pane_vc_t1

0x36fa,	// (0x00005c6a) list_double_pane_vc_t2_ParamLimits

0x36fa,	// (0x00005c6a) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00011fbb) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00011fbb) list_double_pane_vc_t

0x0054,	// (0x000025c4) list_double_number_pane_vc_g1_ParamLimits

0x0054,	// (0x000025c4) list_double_number_pane_vc_g1

0x10ef,	// (0x0000365f) list_double_number_pane_vc_g2_ParamLimits

0x10ef,	// (0x0000365f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011b38) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011b38) list_double_number_pane_vc_g

0x3710,	// (0x00005c80) list_double_number_pane_vc_t1_ParamLimits

0x3710,	// (0x00005c80) list_double_number_pane_vc_t1

0x3724,	// (0x00005c94) list_double_number_pane_vc_t2_ParamLimits

0x3724,	// (0x00005c94) list_double_number_pane_vc_t2

0x3738,	// (0x00005ca8) list_double_number_pane_vc_t3_ParamLimits

0x3738,	// (0x00005ca8) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x00011fc0) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x00011fc0) list_double_number_pane_vc_t

0x374e,	// (0x00005cbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x374e,	// (0x00005cbe) list_double_large_graphic_pane_vc_g1

0x3776,	// (0x00005ce6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3776,	// (0x00005ce6) list_double_large_graphic_pane_vc_g2

0x378a,	// (0x00005cfa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x378a,	// (0x00005cfa) list_double_large_graphic_pane_vc_g3

0x3799,	// (0x00005d09) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3799,	// (0x00005d09) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00011fc7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00011fc7) list_double_large_graphic_pane_vc_g

0x37a9,	// (0x00005d19) list_double_large_graphic_pane_vc_t1_ParamLimits

0x37a9,	// (0x00005d19) list_double_large_graphic_pane_vc_t1

0x37cb,	// (0x00005d3b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x37cb,	// (0x00005d3b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x00011fd0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x00011fd0) list_double_large_graphic_pane_vc_t

0x3324,	// (0x00005894) list_double_heading_pane_vc_g1_ParamLimits

0x3324,	// (0x00005894) list_double_heading_pane_vc_g1

0x3330,	// (0x000058a0) list_double_heading_pane_vc_g2_ParamLimits

0x3330,	// (0x000058a0) list_double_heading_pane_vc_g2

0x0001,

0xfa65,	// (0x00011fd5) list_double_heading_pane_vc_g_ParamLimits

0xfa65,	// (0x00011fd5) list_double_heading_pane_vc_g

0x37eb,	// (0x00005d5b) list_double_heading_pane_vc_t1_ParamLimits

0x37eb,	// (0x00005d5b) list_double_heading_pane_vc_t1

0x12df,	// (0x0000384f) list_double_heading_pane_vc_t2_ParamLimits

0x12df,	// (0x0000384f) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00011fda) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00011fda) list_double_heading_pane_vc_t

0x37fd,	// (0x00005d6d) list_double_graphic_pane_vc_g1_ParamLimits

0x37fd,	// (0x00005d6d) list_double_graphic_pane_vc_g1

0x3809,	// (0x00005d79) list_double_graphic_pane_vc_g2_ParamLimits

0x3809,	// (0x00005d79) list_double_graphic_pane_vc_g2

0x0054,	// (0x000025c4) list_double_graphic_pane_vc_g3_ParamLimits

0x0054,	// (0x000025c4) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x00011fdf) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00011fdf) list_double_graphic_pane_vc_g

0x3826,	// (0x00005d96) list_double_graphic_pane_vc_t1_ParamLimits

0x3826,	// (0x00005d96) list_double_graphic_pane_vc_t1

0x3850,	// (0x00005dc0) list_double_graphic_pane_vc_t2_ParamLimits

0x3850,	// (0x00005dc0) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00011fe8) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00011fe8) list_double_graphic_pane_vc_t

0xdec0,	// (0x00010430) aid_size_cell_fastswap

0x967e,	// (0x0000bbee) aid_size_cell_touch_ParamLimits

0x967e,	// (0x0000bbee) aid_size_cell_touch

0xe047,	// (0x000105b7) popup_fast_swap_wide_window_ParamLimits

0xe047,	// (0x000105b7) popup_fast_swap_wide_window

0x983c,	// (0x0000bdac) touch_pane_ParamLimits

0x983c,	// (0x0000bdac) touch_pane

0xe7c8,	// (0x00010d38) button_value_adjust_pane_cp2

0xe7d0,	// (0x00010d40) button_value_adjust_pane_cp4

0xe7d8,	// (0x00010d48) form_field_data_pane_cp2

0xa068,	// (0x0000c5d8) form_field_data_wide_pane_cp2

0xedd4,	// (0x00011344) bg_scroll_pane_ParamLimits

0xedf3,	// (0x00011363) scroll_handle_pane_ParamLimits

0xee07,	// (0x00011377) scroll_sc2_down_pane_ParamLimits

0xee07,	// (0x00011377) scroll_sc2_down_pane

0xee2e,	// (0x0001139e) scroll_sc2_up_pane_ParamLimits

0xee2e,	// (0x0001139e) scroll_sc2_up_pane

0xbd39,	// (0x0000e2a9) grid_wheel_folder_pane_g1_ParamLimits

0xbd39,	// (0x0000e2a9) grid_wheel_folder_pane_g1

0xf331,	// (0x000118a1) clock_nsta_pane_cp2_ParamLimits

0xf331,	// (0x000118a1) clock_nsta_pane_cp2

0x065c,	// (0x00002bcc) listscroll_midp_pane_ParamLimits

0xa5b0,	// (0x0000cb20) midp_canvas_pane

0x05c8,	// (0x00002b38) nsta_clock_indic_pane

0x0626,	// (0x00002b96) listscroll_form_pane_vc

0x064a,	// (0x00002bba) listscroll_set_pane_vc_ParamLimits

0x064a,	// (0x00002bba) listscroll_set_pane_vc

0xb0f5,	// (0x0000d665) clock_nsta_pane

0xb11f,	// (0x0000d68f) indicator_nsta_pane

0x1143,	// (0x000036b3) bg_popup_sub_pane_cp2_ParamLimits

0x1157,	// (0x000036c7) find_pane_cp2_ParamLimits

0x1157,	// (0x000036c7) find_pane_cp2

0x116d,	// (0x000036dd) grid_toobar_pane_ParamLimits

0x13a7,	// (0x00003917) list_form_gen_pane_vc_ParamLimits

0x13a7,	// (0x00003917) list_form_gen_pane_vc

0x13bd,	// (0x0000392d) scroll_pane_cp8_vc_ParamLimits

0x13bd,	// (0x0000392d) scroll_pane_cp8_vc

0x14dc,	// (0x00003a4c) data_form_wide_pane_vc_ParamLimits

0x14dc,	// (0x00003a4c) data_form_wide_pane_vc

0x14e8,	// (0x00003a58) form_field_data_wide_pane_vc_g1

0x14f0,	// (0x00003a60) form_field_data_wide_pane_vc_t1_ParamLimits

0x14f0,	// (0x00003a60) form_field_data_wide_pane_vc_t1

0xe833,	// (0x00010da3) input_focus_pane_cp6_vc_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_cp6_vc

0xb52e,	// (0x0000da9e) list_midp_pane_ParamLimits

0x2ebd,	// (0x0000542d) scroll_pane_cp16_ParamLimits

0x2ebd,	// (0x0000542d) scroll_pane_cp16

0x187b,	// (0x00003deb) button_value_adjust_pane_ParamLimits

0x187b,	// (0x00003deb) button_value_adjust_pane

0xb950,	// (0x0000dec0) button_value_adjust_pane_cp6_ParamLimits

0xb950,	// (0x0000dec0) button_value_adjust_pane_cp6

0xba92,	// (0x0000e002) settings_code_pane_cp_ParamLimits

0xba92,	// (0x0000e002) settings_code_pane_cp

0xde9e,	// (0x0001040e) cell_touch_pane_g1

0xde9e,	// (0x0001040e) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00011c6e) cell_touch_pane_g

0xbc12,	// (0x0000e182) cell_touch_pane_cp_ParamLimits

0xbc12,	// (0x0000e182) cell_touch_pane_cp

0xbc2e,	// (0x0000e19e) cell_touch_pane_ParamLimits

0xbc2e,	// (0x0000e19e) cell_touch_pane

0xde9e,	// (0x0001040e) scroll_sc2_down_pane_g1

0xde9e,	// (0x0001040e) scroll_sc2_up_pane_g1

0xe017,	// (0x00010587) bg_set_opt_pane_cp4_vc

0x3370,	// (0x000058e0) list_set_graphic_pane_vc_g1_ParamLimits

0x3370,	// (0x000058e0) list_set_graphic_pane_vc_g1

0xea4e,	// (0x00010fbe) list_set_graphic_pane_vc_g2_ParamLimits

0xea4e,	// (0x00010fbe) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00011f5e) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00011f5e) list_set_graphic_pane_vc_g

0x337c,	// (0x000058ec) text_primary_small_cp13_vc_ParamLimits

0x337c,	// (0x000058ec) text_primary_small_cp13_vc

0x3394,	// (0x00005904) list_set_graphic_pane_vc_ParamLimits

0x3394,	// (0x00005904) list_set_graphic_pane_vc

0xe017,	// (0x00010587) input_focus_pane_cp2_vc

0xde9e,	// (0x0001040e) setting_code_pane_vc_g1

0xe17d,	// (0x000106ed) setting_code_pane_vc_t1

0x33a9,	// (0x00005919) set_text_pane_vc_t1_ParamLimits

0x33a9,	// (0x00005919) set_text_pane_vc_t1

0xe017,	// (0x00010587) input_focus_pane_cp1_vc

0x33c7,	// (0x00005937) list_set_text_pane_vc

0xde9e,	// (0x0001040e) setting_text_pane_vc_g1

0xe017,	// (0x00010587) bg_set_opt_pane_cp2_vc

0xe14c,	// (0x000106bc) setting_slider_graphic_pane_vc_g1

0x33d1,	// (0x00005941) setting_slider_graphic_pane_vc_t1

0x33e3,	// (0x00005953) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00011f63) setting_slider_graphic_pane_vc_t

0x33f5,	// (0x00005965) slider_set_pane_cp_vc

0x33ff,	// (0x0000596f) slider_set_pane_vc_g1

0x3408,	// (0x00005978) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00011f68) slider_set_pane_vc_g

0xe8fc,	// (0x00010e6c) set_opt_bg_pane_g1_copy1

0xe904,	// (0x00010e74) set_opt_bg_pane_g2_copy1

0x3434,	// (0x000059a4) set_opt_bg_pane_g3_copy1

0xe914,	// (0x00010e84) set_opt_bg_pane_g4_copy1

0xe91c,	// (0x00010e8c) set_opt_bg_pane_g5_copy1

0xe924,	// (0x00010e94) set_opt_bg_pane_g6_copy1

0x343e,	// (0x000059ae) set_opt_bg_pane_g7_copy1

0x3448,	// (0x000059b8) set_opt_bg_pane_g8_copy1

0x3452,	// (0x000059c2) set_opt_bg_pane_g9_copy1

0xe017,	// (0x00010587) bg_set_opt_pane_cp_vc

0x345c,	// (0x000059cc) setting_slider_pane_vc_t1

0x346b,	// (0x000059db) setting_slider_pane_vc_t2

0x347d,	// (0x000059ed) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00011f77) setting_slider_pane_vc_t

0x348f,	// (0x000059ff) slider_set_pane_vc

0x20c0,	// (0x00004630) volume_set_pane_vc_g1

0x20c9,	// (0x00004639) volume_set_pane_vc_g2

0x20d2,	// (0x00004642) volume_set_pane_vc_g3

0x20db,	// (0x0000464b) volume_set_pane_vc_g4

0x20e4,	// (0x00004654) volume_set_pane_vc_g5

0x20ed,	// (0x0000465d) volume_set_pane_vc_g6

0x20f6,	// (0x00004666) volume_set_pane_vc_g7

0x20ff,	// (0x0000466f) volume_set_pane_vc_g8

0x2108,	// (0x00004678) volume_set_pane_vc_g9

0x2111,	// (0x00004681) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00011f7e) volume_set_pane_vc_g

0x3499,	// (0x00005a09) volume_set_pane_vc

0x34a3,	// (0x00005a13) button_value_adjust_pane_cp1_vc

0x34ad,	// (0x00005a1d) list_highlight_pane_cp2_vc

0x34b6,	// (0x00005a26) list_set_pane_vc_ParamLimits

0x34b6,	// (0x00005a26) list_set_pane_vc

0x3526,	// (0x00005a96) main_pane_set_vc_t1_ParamLimits

0x3526,	// (0x00005a96) main_pane_set_vc_t1

0x353b,	// (0x00005aab) main_pane_set_vc_t2_ParamLimits

0x353b,	// (0x00005aab) main_pane_set_vc_t2

0x354d,	// (0x00005abd) main_pane_set_vc_t3_ParamLimits

0x354d,	// (0x00005abd) main_pane_set_vc_t3

0x3561,	// (0x00005ad1) main_pane_set_vc_t4_ParamLimits

0x3561,	// (0x00005ad1) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00011f93) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00011f93) main_pane_set_vc_t

0x3575,	// (0x00005ae5) setting_code_pane_vc_ParamLimits

0x3575,	// (0x00005ae5) setting_code_pane_vc

0x3586,	// (0x00005af6) setting_slider_graphic_pane_vc

0x3586,	// (0x00005af6) setting_slider_pane_vc

0x3586,	// (0x00005af6) setting_text_pane_vc

0x3586,	// (0x00005af6) setting_volume_pane_vc

0x3590,	// (0x00005b00) scroll_pane_cp121_vc

0xe7b6,	// (0x00010d26) set_content_pane_vc

0x386e,	// (0x00005dde) button_value_adjust_pane_g1

0x3877,	// (0x00005de7) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00011fed) button_value_adjust_pane_g

0x3880,	// (0x00005df0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3880,	// (0x00005df0) form_field_slider_wide_pane_vc_t1

0x3892,	// (0x00005e02) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3892,	// (0x00005e02) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00011ff2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00011ff2) form_field_slider_wide_pane_vc_t

0xe0c5,	// (0x00010635) input_focus_pane_cp10_vc_ParamLimits

0xe0c5,	// (0x00010635) input_focus_pane_cp10_vc

0x38be,	// (0x00005e2e) slider_cont_pane_cp1_vc_ParamLimits

0x38be,	// (0x00005e2e) slider_cont_pane_cp1_vc

0x38d0,	// (0x00005e40) slider_form_pane_g1_cp2

0x3408,	// (0x00005978) slider_form_pane_g2_cp2

0x38fd,	// (0x00005e6d) form_field_slider_pane_vc_t3

0x390b,	// (0x00005e7b) form_field_slider_pane_vc_t4

0x3919,	// (0x00005e89) slider_form_pane_vc_ParamLimits

0x3919,	// (0x00005e89) slider_form_pane_vc

0x3926,	// (0x00005e96) form_field_slider_pane_vc_t1_ParamLimits

0x3926,	// (0x00005e96) form_field_slider_pane_vc_t1

0x3892,	// (0x00005e02) form_field_slider_pane_vc_t2_ParamLimits

0x3892,	// (0x00005e02) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00012004) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00012004) form_field_slider_pane_vc_t

0xe0c5,	// (0x00010635) input_focus_pane_cp9_vc_ParamLimits

0xe0c5,	// (0x00010635) input_focus_pane_cp9_vc

0x393c,	// (0x00005eac) slider_cont_pane_vc_ParamLimits

0x393c,	// (0x00005eac) slider_cont_pane_vc

0x3950,	// (0x00005ec0) list_form_graphic_pane_cp_vc_ParamLimits

0x3950,	// (0x00005ec0) list_form_graphic_pane_cp_vc

0x14e8,	// (0x00003a58) form_field_popup_wide_pane_vc_g1

0x3965,	// (0x00005ed5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3965,	// (0x00005ed5) form_field_popup_wide_pane_vc_t1

0xe833,	// (0x00010da3) input_focus_pane_cp8_vc_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_cp8_vc

0x39aa,	// (0x00005f1a) list_form_wide_pane_vc_ParamLimits

0x39aa,	// (0x00005f1a) list_form_wide_pane_vc

0x39b6,	// (0x00005f26) list_form_graphic_pane_vc_g1

0x39be,	// (0x00005f2e) list_form_graphic_pane_vc_t1_ParamLimits

0x39be,	// (0x00005f2e) list_form_graphic_pane_vc_t1

0xe0dd,	// (0x0001064d) list_highlight_pane_cp5_vc_ParamLimits

0xe0dd,	// (0x0001064d) list_highlight_pane_cp5_vc

0x39da,	// (0x00005f4a) list_form_graphic_pane_vc_ParamLimits

0x39da,	// (0x00005f4a) list_form_graphic_pane_vc

0x14e8,	// (0x00003a58) form_field_popup_pane_vc_g1

0x39f0,	// (0x00005f60) form_field_popup_pane_vc_t1_ParamLimits

0x39f0,	// (0x00005f60) form_field_popup_pane_vc_t1

0xe833,	// (0x00010da3) input_focus_pane_cp7_vc_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_cp7_vc

0x3a07,	// (0x00005f77) list_form_pane_vc_ParamLimits

0x3a07,	// (0x00005f77) list_form_pane_vc

0x3a13,	// (0x00005f83) data_form_pane_vc_t1_ParamLimits

0x3a13,	// (0x00005f83) data_form_pane_vc_t1

0xe8fc,	// (0x00010e6c) input_focus_pane_vc_g1

0xe904,	// (0x00010e74) input_focus_pane_vc_g2

0xe90c,	// (0x00010e7c) input_focus_pane_vc_g3

0xe914,	// (0x00010e84) input_focus_pane_vc_g4

0xe91c,	// (0x00010e8c) input_focus_pane_vc_g5

0xe924,	// (0x00010e94) input_focus_pane_vc_g6

0xe92c,	// (0x00010e9c) input_focus_pane_vc_g7

0xe934,	// (0x00010ea4) input_focus_pane_vc_g8

0xe93c,	// (0x00010eac) input_focus_pane_vc_g9

0xde9e,	// (0x0001040e) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00011bf7) input_focus_pane_vc_g

0x14dc,	// (0x00003a4c) data_form_pane_vc_ParamLimits

0x14dc,	// (0x00003a4c) data_form_pane_vc

0x14e8,	// (0x00003a58) form_field_data_pane_vc_g1

0x3a30,	// (0x00005fa0) form_field_data_pane_vc_t1_ParamLimits

0x3a30,	// (0x00005fa0) form_field_data_pane_vc_t1

0xe833,	// (0x00010da3) input_focus_pane_vc_ParamLimits

0xe833,	// (0x00010da3) input_focus_pane_vc

0x3a4a,	// (0x00005fba) button_value_adjust_pane_cp3_vc

0x3a52,	// (0x00005fc2) button_value_adjust_pane_cp5_vc

0x3a5a,	// (0x00005fca) form_field_data_pane_vc_ParamLimits

0x3a5a,	// (0x00005fca) form_field_data_pane_vc

0x3a75,	// (0x00005fe5) form_field_data_pane_vc_cp2

0x3a7d,	// (0x00005fed) form_field_data_wide_pane_vc_ParamLimits

0x3a7d,	// (0x00005fed) form_field_data_wide_pane_vc

0x3a97,	// (0x00006007) form_field_data_wide_pane_vc_cp2

0x3a9f,	// (0x0000600f) form_field_popup_pane_vc_ParamLimits

0x3a9f,	// (0x0000600f) form_field_popup_pane_vc

0x3aba,	// (0x0000602a) form_field_popup_wide_pane_vc_ParamLimits

0x3aba,	// (0x0000602a) form_field_popup_wide_pane_vc

0x3ad4,	// (0x00006044) form_field_slider_pane_vc_ParamLimits

0x3ad4,	// (0x00006044) form_field_slider_pane_vc

0x3ae7,	// (0x00006057) form_field_slider_wide_pane_vc_ParamLimits

0x3ae7,	// (0x00006057) form_field_slider_wide_pane_vc

0xbc4c,	// (0x0000e1bc) grid_touch_1_pane_ParamLimits

0xbc4c,	// (0x0000e1bc) grid_touch_1_pane

0xbc60,	// (0x0000e1d0) grid_touch_2_pane_ParamLimits

0xbc60,	// (0x0000e1d0) grid_touch_2_pane

0x3bb8,	// (0x00006128) touch_pane_g1_ParamLimits

0x3bb8,	// (0x00006128) touch_pane_g1

0x3b20,	// (0x00006090) cell_app_pane_cp_wide_ParamLimits

0x3b20,	// (0x00006090) cell_app_pane_cp_wide

0x3b31,	// (0x000060a1) grid_popup_fast_wide_pane_ParamLimits

0x3b31,	// (0x000060a1) grid_popup_fast_wide_pane

0x3b45,	// (0x000060b5) scroll_pane_cp19_ParamLimits

0x3b45,	// (0x000060b5) scroll_pane_cp19

0xe017,	// (0x00010587) bg_popup_window_pane_cp20

0x3b59,	// (0x000060c9) listscroll_popup_fast_wide_pane

0xea5a,	// (0x00010fca) grid_indicator_nsta_pane

0x3b61,	// (0x000060d1) clock_nsta_pane_g1

0x3b6a,	// (0x000060da) clock_nsta_pane_t1

0xbc8c,	// (0x0000e1fc) cell_indicator_nsta_pane_ParamLimits

0xbc8c,	// (0x0000e1fc) cell_indicator_nsta_pane

0x3bb8,	// (0x00006128) cell_indicator_nsta_pane_g1

0xbca5,	// (0x0000e215) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00012015) cell_indicator_nsta_pane_g

0x3bdc,	// (0x0000614c) clock_nsta_pane_cp

0x3be4,	// (0x00006154) indicator_nsta_pane_cp

0x3bed,	// (0x0000615d) nsta_clock_indic_pane_g1

0xe1bc,	// (0x0001072c) grid_indicator_pane

0xef20,	// (0x00011490) scroll_pane_cp29

0xf25b,	// (0x000117cb) indicator_nsta_pane_cp2_ParamLimits

0xf25b,	// (0x000117cb) indicator_nsta_pane_cp2

0xe0dd,	// (0x0001064d) main_apps_wheel_pane

0x16fe,	// (0x00003c6e) form_midp_field_text_pane_ParamLimits

0x184d,	// (0x00003dbd) scroll_bar_cp050_ParamLimits

0x3c56,	// (0x000061c6) cell_indicator_pane_ParamLimits

0x3c56,	// (0x000061c6) cell_indicator_pane

0x3c6e,	// (0x000061de) cell_indicator_pane_g1

0xbcbb,	// (0x0000e22b) grid_wheel_folder_pane_ParamLimits

0xbcbb,	// (0x0000e22b) grid_wheel_folder_pane

0xbcc9,	// (0x0000e239) list_wheel_apps_pane_ParamLimits

0xbcc9,	// (0x0000e239) list_wheel_apps_pane

0xbcd7,	// (0x0000e247) main_apps_wheel_pane_g1_ParamLimits

0xbcd7,	// (0x0000e247) main_apps_wheel_pane_g1

0xbce7,	// (0x0000e257) main_apps_wheel_pane_g2_ParamLimits

0xbce7,	// (0x0000e257) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00012031) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00012031) main_apps_wheel_pane_g

0xbcf7,	// (0x0000e267) main_apps_wheel_pane_t1_ParamLimits

0xbcf7,	// (0x0000e267) main_apps_wheel_pane_t1

0xbd0f,	// (0x0000e27f) list_wheel_apps_pane_g1

0xbd17,	// (0x0000e287) list_wheel_apps_pane_g2

0xbd1f,	// (0x0000e28f) list_wheel_apps_pane_g3

0xbd27,	// (0x0000e297) list_wheel_apps_pane_g4

0xbd2f,	// (0x0000e29f) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00012036) list_wheel_apps_pane_g

0xf4bd,	// (0x00011a2d) navi_icon_text_pane

0xafe7,	// (0x0000d557) aid_fill_nsta

0xbd4c,	// (0x0000e2bc) navi_icon_text_pane_g1

0xbd58,	// (0x0000e2c8) navi_icon_text_pane_t1

0xa509,	// (0x0000ca79) list_set_graphic_pane_t1_ParamLimits

0xa509,	// (0x0000ca79) list_set_graphic_pane_t1

0x1f9e,	// (0x0000450e) popup_midp_note_alarm_window_t6_ParamLimits

0x1f9e,	// (0x0000450e) popup_midp_note_alarm_window_t6

0x1fb0,	// (0x00004520) popup_midp_note_alarm_window_t7_ParamLimits

0x1fb0,	// (0x00004520) popup_midp_note_alarm_window_t7

0x1fc2,	// (0x00004532) popup_midp_note_alarm_window_t8_ParamLimits

0x1fc2,	// (0x00004532) popup_midp_note_alarm_window_t8

0x1fd4,	// (0x00004544) popup_midp_note_alarm_window_t9_ParamLimits

0x1fd4,	// (0x00004544) popup_midp_note_alarm_window_t9

0x1fe6,	// (0x00004556) popup_midp_note_alarm_window_t10_ParamLimits

0x1fe6,	// (0x00004556) popup_midp_note_alarm_window_t10

0x1ff8,	// (0x00004568) popup_midp_note_alarm_window_t11_ParamLimits

0x1ff8,	// (0x00004568) popup_midp_note_alarm_window_t11

0x200a,	// (0x0000457a) scroll_pane_cp17_ParamLimits

0x200a,	// (0x0000457a) scroll_pane_cp17

0x20c0,	// (0x00004630) volume_small_pane_cp_g1

0x3d61,	// (0x000062d1) volume_small_pane_cp_g2

0x3d6a,	// (0x000062da) volume_small_pane_cp_g3

0x3d73,	// (0x000062e3) volume_small_pane_cp_g4

0x3d7c,	// (0x000062ec) volume_small_pane_cp_g5

0x3d85,	// (0x000062f5) volume_small_pane_cp_g6

0x3d8e,	// (0x000062fe) volume_small_pane_cp_g7

0x3d97,	// (0x00006307) volume_small_pane_cp_g8

0x3da0,	// (0x00006310) volume_small_pane_cp_g9

0x3da9,	// (0x00006319) volume_small_pane_cp_g10

0x01b4,	// (0x00002724) midp_ticker_pane_g1_ParamLimits

0x01c0,	// (0x00002730) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00011cc3) midp_ticker_pane_g_ParamLimits

0xa647,	// (0x0000cbb7) midp_ticker_pane_t1_ParamLimits

0xb00b,	// (0x0000d57b) aid_fill_nsta_2

0x1839,	// (0x00003da9) list_form2_midp_pane

0x2c46,	// (0x000051b6) midp_editing_number_pane_ParamLimits

0x2c55,	// (0x000051c5) midp_ticker_pane_ParamLimits

0x3db2,	// (0x00006322) form2_midp_field_pane

0x3dd6,	// (0x00006346) scroll_pane_cp51

0x3df6,	// (0x00006366) form2_midp_button_pane_ParamLimits

0x3df6,	// (0x00006366) form2_midp_button_pane

0x3e08,	// (0x00006378) form2_midp_content_pane_ParamLimits

0x3e08,	// (0x00006378) form2_midp_content_pane

0x3e22,	// (0x00006392) form2_midp_field_choice_group_pane

0x3e2a,	// (0x0000639a) form2_midp_field_pane_g1

0x3e32,	// (0x000063a2) form2_midp_field_pane_g2

0x3e3a,	// (0x000063aa) form2_midp_field_pane_g3

0x3e42,	// (0x000063b2) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0001205b) form2_midp_field_pane_g

0x3e4a,	// (0x000063ba) form2_midp_gauge_slider_pane

0x3e52,	// (0x000063c2) form2_midp_gauge_wait_pane

0x3e5a,	// (0x000063ca) form2_midp_image_pane_ParamLimits

0x3e5a,	// (0x000063ca) form2_midp_image_pane

0x3e75,	// (0x000063e5) form2_midp_label_pane_ParamLimits

0x3e75,	// (0x000063e5) form2_midp_label_pane

0xbd86,	// (0x0000e2f6) form2_midp_label_pane_cp_ParamLimits

0xbd86,	// (0x0000e2f6) form2_midp_label_pane_cp

0x3eb5,	// (0x00006425) form2_midp_string_pane_ParamLimits

0x3eb5,	// (0x00006425) form2_midp_string_pane

0xbda7,	// (0x0000e317) form2_midp_text_pane_ParamLimits

0xbda7,	// (0x0000e317) form2_midp_text_pane

0x3ee8,	// (0x00006458) form2_midp_time_pane

0x3ef8,	// (0x00006468) input_focus_pane_cp51_ParamLimits

0x3ef8,	// (0x00006468) input_focus_pane_cp51

0x3f10,	// (0x00006480) form2_midp_label_pane_t1_ParamLimits

0x3f10,	// (0x00006480) form2_midp_label_pane_t1

0xbdc8,	// (0x0000e338) form2_mdip_text_pane_t1_ParamLimits

0xbdc8,	// (0x0000e338) form2_mdip_text_pane_t1

0x3f78,	// (0x000064e8) form2_midp_time_pane_t1

0x3f93,	// (0x00006503) form2_midp_gauge_slider_pane_t1

0xbde7,	// (0x0000e357) form2_midp_gauge_slider_pane_t2

0xbdf9,	// (0x0000e369) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00012064) form2_midp_gauge_slider_pane_t

0x3fc9,	// (0x00006539) form2_midp_slider_pane

0x3fd5,	// (0x00006545) form2_midp_gauge_wait_pane_t1

0x3fe3,	// (0x00006553) form2_midp_wait_pane_ParamLimits

0x3fe3,	// (0x00006553) form2_midp_wait_pane

0x152f,	// (0x00003a9f) list_single_2graphic_pane_cp4_ParamLimits

0x152f,	// (0x00003a9f) list_single_2graphic_pane_cp4

0x400e,	// (0x0000657e) list_single_midp_graphic_pane_cp_ParamLimits

0x400e,	// (0x0000657e) list_single_midp_graphic_pane_cp

0xe017,	// (0x00010587) list_highlight_pane_cp20

0x4032,	// (0x000065a2) list_single_2graphic_pane_g1_cp4

0x31f5,	// (0x00005765) list_single_2graphic_pane_g2_cp4

0x403a,	// (0x000065aa) list_single_2graphic_pane_t1_cp4

0xe0dd,	// (0x0001064d) list_highlight_pane_cp21

0x4049,	// (0x000065b9) list_single_midp_graphic_pane_g4_cp

0x4058,	// (0x000065c8) list_single_midp_graphic_pane_t1_cp

0xbe0b,	// (0x0000e37b) form2_mdip_string_pane_t1_ParamLimits

0xbe0b,	// (0x0000e37b) form2_mdip_string_pane_t1

0xe017,	// (0x00010587) bg_wml_button_pane_cp2

0xde9e,	// (0x0001040e) form2_midp_image_pane_g1

0xe760,	// (0x00010cd0) list_double_large_graphic_pane_g5_ParamLimits

0xe760,	// (0x00010cd0) list_double_large_graphic_pane_g5

0x065c,	// (0x00002bcc) midp_form_pane_ParamLimits

0xe0dd,	// (0x0001064d) main_apps_wheel_pane_ParamLimits

0xacff,	// (0x0000d26f) popup_preview_window_ParamLimits

0xacff,	// (0x0000d26f) popup_preview_window

0x0c2c,	// (0x0000319c) popup_touch_info_window_ParamLimits

0x0c2c,	// (0x0000319c) popup_touch_info_window

0x0c4e,	// (0x000031be) popup_touch_menu_window_ParamLimits

0x0c4e,	// (0x000031be) popup_touch_menu_window

0xde94,	// (0x00010404) bg_popup_sub_pane_cp6

0x4112,	// (0x00006682) list_touch_menu_pane

0x411a,	// (0x0000668a) list_single_touch_menu_pane_ParamLimits

0x411a,	// (0x0000668a) list_single_touch_menu_pane

0x4132,	// (0x000066a2) list_single_touch_menu_pane_t1

0xe0dd,	// (0x0001064d) bg_popup_sub_pane_cp7_ParamLimits

0xe0dd,	// (0x0001064d) bg_popup_sub_pane_cp7

0x4140,	// (0x000066b0) heading_sub_pane

0x4148,	// (0x000066b8) list_touch_info_pane_ParamLimits

0x4148,	// (0x000066b8) list_touch_info_pane

0x4157,	// (0x000066c7) list_single_touch_info_pane_ParamLimits

0x4157,	// (0x000066c7) list_single_touch_info_pane

0x4169,	// (0x000066d9) list_single_touch_info_pane_t1

0x4177,	// (0x000066e7) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00012072) list_single_touch_info_pane_t

0x00e3,	// (0x00002653) bg_popup_heading_pane_cp

0x4185,	// (0x000066f5) heading_sub_pane_t1

0x13e8,	// (0x00003958) bg_popup_preview_window_pane_cp_ParamLimits

0x13e8,	// (0x00003958) bg_popup_preview_window_pane_cp

0x4140,	// (0x000066b0) heading_preview_pane

0x4148,	// (0x000066b8) list_preview_pane_ParamLimits

0x4148,	// (0x000066b8) list_preview_pane

0x4193,	// (0x00006703) popup_preview_window_g1

0x4157,	// (0x000066c7) list_single_preview_pane_ParamLimits

0x4157,	// (0x000066c7) list_single_preview_pane

0x419b,	// (0x0000670b) list_single_preview_pane_g1

0x41a3,	// (0x00006713) list_single_preview_pane_t1

0x4169,	// (0x000066d9) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00012077) list_single_preview_pane_t

0x41b1,	// (0x00006721) bg_popup_heading_pane_cp2_ParamLimits

0x41b1,	// (0x00006721) bg_popup_heading_pane_cp2

0x41c7,	// (0x00006737) heading_preview_pane_g1

0x41cf,	// (0x0000673f) heading_preview_pane_t1_ParamLimits

0x41cf,	// (0x0000673f) heading_preview_pane_t1

0xe1d3,	// (0x00010743) soft_indicator_pane_t1_ParamLimits

0xe708,	// (0x00010c78) scroll_pane_ParamLimits

0xee1c,	// (0x0001138c) scroll_sc2_left_pane

0xee25,	// (0x00011395) scroll_sc2_right_pane

0xee44,	// (0x000113b4) scroll_bg_pane_g1_ParamLimits

0xee59,	// (0x000113c9) scroll_bg_pane_g2_ParamLimits

0xee71,	// (0x000113e1) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00011c4e) scroll_bg_pane_g_ParamLimits

0xee44,	// (0x000113b4) scroll_handle_pane_g1_ParamLimits

0xee93,	// (0x00011403) scroll_handle_pane_g2_ParamLimits

0xee71,	// (0x000113e1) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00011c55) scroll_handle_pane_g_ParamLimits

0x068c,	// (0x00002bfc) popup_choice_list_window_ParamLimits

0x068c,	// (0x00002bfc) popup_choice_list_window

0x114f,	// (0x000036bf) choice_list_pane

0x1217,	// (0x00003787) cell_toolbar_pane_t1

0x123f,	// (0x000037af) toolbar_button_pane_ParamLimits

0x2640,	// (0x00004bb0) ai_gene_pane_1_t2_ParamLimits

0x2640,	// (0x00004bb0) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x00011e71) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x00011e71) ai_gene_pane_1_t

0x41ec,	// (0x0000675c) scroll_sc2_left_pane_g1

0x41ec,	// (0x0000675c) scroll_sc2_right_pane_g1

0x065c,	// (0x00002bcc) bg_popup_sub_pane_cp10

0x41f6,	// (0x00006766) list_choice_list_pane

0x420f,	// (0x0000677f) list_single_choice_list_pane_ParamLimits

0x420f,	// (0x0000677f) list_single_choice_list_pane

0x4227,	// (0x00006797) list_single_choice_list_pane_g1

0xea21,	// (0x00010f91) list_single_choice_list_pane_t1_ParamLimits

0xea21,	// (0x00010f91) list_single_choice_list_pane_t1

0x422f,	// (0x0000679f) choice_list_pane_g1

0x4237,	// (0x000067a7) choice_list_pane_t1

0xde94,	// (0x00010404) input_focus_pane_cp11

0xec09,	// (0x00011179) title_pane_stacon_g2_ParamLimits

0xec09,	// (0x00011179) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00011c34) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00011c34) title_pane_stacon_g

0x00e3,	// (0x00002653) cursor_press_pane

0xa97c,	// (0x0000ceec) popup_fep_hwr_window_ParamLimits

0xa97c,	// (0x0000ceec) popup_fep_hwr_window

0x07d0,	// (0x00002d40) popup_fep_vkb_window_ParamLimits

0x07d0,	// (0x00002d40) popup_fep_vkb_window

0x4245,	// (0x000067b5) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x000120a0) fep_vkb_side_pane_g_ParamLimits

0x4286,	// (0x000067f6) fep_hwr_candidate_pane_ParamLimits

0x4286,	// (0x000067f6) fep_hwr_candidate_pane

0x42b0,	// (0x00006820) fep_hwr_side_pane_ParamLimits

0x42b0,	// (0x00006820) fep_hwr_side_pane

0x42d2,	// (0x00006842) fep_hwr_top_pane_ParamLimits

0x42d2,	// (0x00006842) fep_hwr_top_pane

0x42ea,	// (0x0000685a) fep_hwr_write_pane_ParamLimits

0x42ea,	// (0x0000685a) fep_hwr_write_pane

0xfb30,	// (0x000120a0) fep_vkb_side_pane_g

0x4324,	// (0x00006894) fep_hwr_top_pane_g1

0x4336,	// (0x000068a6) fep_hwr_top_pane_g2

0x4348,	// (0x000068b8) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0001207c) fep_hwr_top_pane_g

0x435d,	// (0x000068cd) fep_hwr_top_text_pane

0xef8d,	// (0x000114fd) fep_hwr_top_text_pane_g1

0x4439,	// (0x000069a9) fep_hwr_top_text_pane_t1

0x4499,	// (0x00006a09) fep_hwr_candidate_pane_g1

0x470a,	// (0x00006c7a) fep_vkb_keypad_pane_g3_ParamLimits

0x470a,	// (0x00006c7a) fep_vkb_keypad_pane_g3

0x4736,	// (0x00006ca6) fep_vkb_keypad_pane_g4_ParamLimits

0x4736,	// (0x00006ca6) fep_vkb_keypad_pane_g4

0x47ad,	// (0x00006d1d) fep_vkb_bottom_pane_g2_ParamLimits

0x47ad,	// (0x00006d1d) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x000120a7) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x000120a7) fep_vkb_bottom_pane_g

0x41ec,	// (0x0000675c) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000120b1) cell_vkb_side_pane_g

0x4838,	// (0x00006da8) cell_vkb_side_pane_t1

0x4846,	// (0x00006db6) cell_vkb_side_pane_t1_copy1

0x41ec,	// (0x0000675c) bg_fep_vkb_candidate_pane_g2

0x498a,	// (0x00006efa) cell_vkb_candidate_pane_ParamLimits

0x44cd,	// (0x00006a3d) aid_size_cell_vkb_ParamLimits

0x44cd,	// (0x00006a3d) aid_size_cell_vkb

0x498a,	// (0x00006efa) cell_vkb_candidate_pane

0x49c4,	// (0x00006f34) bg_popup_fep_shadow_pane_g1

0xbf00,	// (0x0000e470) fep_vkb_bottom_pane_ParamLimits

0xbf00,	// (0x0000e470) fep_vkb_bottom_pane

0x459c,	// (0x00006b0c) fep_vkb_candidate_pane_ParamLimits

0x459c,	// (0x00006b0c) fep_vkb_candidate_pane

0xbf2c,	// (0x0000e49c) fep_vkb_keypad_pane_ParamLimits

0xbf2c,	// (0x0000e49c) fep_vkb_keypad_pane

0xbf53,	// (0x0000e4c3) fep_vkb_side_pane_ParamLimits

0xbf53,	// (0x0000e4c3) fep_vkb_side_pane

0xbf8f,	// (0x0000e4ff) fep_vkb_top_pane_ParamLimits

0xbf8f,	// (0x0000e4ff) fep_vkb_top_pane

0x4663,	// (0x00006bd3) fep_vkb_top_pane_g1_ParamLimits

0x4663,	// (0x00006bd3) fep_vkb_top_pane_g1

0x4672,	// (0x00006be2) fep_vkb_top_pane_g2_ParamLimits

0x4672,	// (0x00006be2) fep_vkb_top_pane_g2

0x4681,	// (0x00006bf1) fep_vkb_top_pane_g3_ParamLimits

0x4681,	// (0x00006bf1) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x00012097) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x00012097) fep_vkb_top_pane_g

0x469f,	// (0x00006c0f) fep_vkb_top_text_pane_ParamLimits

0x469f,	// (0x00006c0f) fep_vkb_top_text_pane

0xbfcb,	// (0x0000e53b) fep_vkb_side_pane_g1_ParamLimits

0xbfcb,	// (0x0000e53b) fep_vkb_side_pane_g1

0x46f9,	// (0x00006c69) grid_vkb_side_pane_ParamLimits

0x46f9,	// (0x00006c69) grid_vkb_side_pane

0x49cc,	// (0x00006f3c) bg_popup_fep_shadow_pane_g2

0x49d5,	// (0x00006f45) bg_popup_fep_shadow_pane_g3

0x49dd,	// (0x00006f4d) bg_popup_fep_shadow_pane_g4

0x49e6,	// (0x00006f56) bg_popup_fep_shadow_pane_g5

0x49f0,	// (0x00006f60) bg_popup_fep_shadow_pane_g6

0x49f8,	// (0x00006f68) bg_popup_fep_shadow_pane_g7

0xe91c,	// (0x00010e8c) bg_popup_fep_shadow_pane_g8

0x4758,	// (0x00006cc8) grid_vkb_keypad_number_pane_ParamLimits

0x4758,	// (0x00006cc8) grid_vkb_keypad_number_pane

0x476c,	// (0x00006cdc) grid_vkb_keypad_pane_ParamLimits

0x476c,	// (0x00006cdc) grid_vkb_keypad_pane

0x4792,	// (0x00006d02) fep_vkb_bottom_pane_g1_ParamLimits

0x4792,	// (0x00006d02) fep_vkb_bottom_pane_g1

0x47bb,	// (0x00006d2b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x47bb,	// (0x00006d2b) grid_vkb_keypad_bottom_left_pane

0x47d0,	// (0x00006d40) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x47d0,	// (0x00006d40) grid_vkb_keypad_bottom_right_pane

0x47e5,	// (0x00006d55) fep_vkb_top_text_pane_g1

0xc012,	// (0x0000e582) fep_vkb_top_text_pane_t1

0xc024,	// (0x0000e594) cell_vkb_side_pane_ParamLimits

0xc024,	// (0x0000e594) cell_vkb_side_pane

0x41ec,	// (0x0000675c) cell_vkb_side_pane_g1

0x4854,	// (0x00006dc4) cell_vkb_keypad_pane_ParamLimits

0x4854,	// (0x00006dc4) cell_vkb_keypad_pane

0x48e1,	// (0x00006e51) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000120c4) bg_popup_fep_shadow_pane_g

0x41ec,	// (0x0000675c) cell_hwr_side_pane_g1

0x41ec,	// (0x0000675c) cell_hwr_side_pane_g2

0x48eb,	// (0x00006e5b) cell_vkb_keypad_pane_t1

0xc03a,	// (0x0000e5aa) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc03a,	// (0x0000e5aa) cell_vkb_keypad_bottom_left_pane

0xc04f,	// (0x0000e5bf) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc04f,	// (0x0000e5bf) cell_vkb_keypad_bottom_right_pane

0x41ec,	// (0x0000675c) cell_vkb_keypad_bottom_left_pane_g1

0x41ec,	// (0x0000675c) cell_vkb_keypad_bottom_right_pane_g1

0x494f,	// (0x00006ebf) cell_vkb_keypad_number_pane_ParamLimits

0x494f,	// (0x00006ebf) cell_vkb_keypad_number_pane

0x496e,	// (0x00006ede) cell_vkb_keypad_number_pane_g1

0x4978,	// (0x00006ee8) cell_vkb_keypad_number_pane_g2

0x4981,	// (0x00006ef1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000120b6) cell_vkb_keypad_number_pane_g

0x48eb,	// (0x00006e5b) cell_vkb_keypad_number_pane_t1

0x49ab,	// (0x00006f1b) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x000120b1) cell_hwr_side_pane_g

0x4a0a,	// (0x00006f7a) cell_hwr_side_pane_t1

0x4a18,	// (0x00006f88) cell_hwr_side_pane_t1_copy1

0x4691,	// (0x00006c01) cell_hwr_candidate_pane_g1

0x4a68,	// (0x00006fd8) cell_hwr_candidate_pane_t1

0x41ec,	// (0x0000675c) cell_vkb_candidate_pane_g2

0x4abc,	// (0x0000702c) cell_vkb_candidate_pane_t1

0x424d,	// (0x000067bd) bg_popup_fep_shadow_pane_ParamLimits

0x424d,	// (0x000067bd) bg_popup_fep_shadow_pane

0x4304,	// (0x00006874) bg_fep_hwr_top_pane_g4

0x4372,	// (0x000068e2) bg_hwr_side_pane_g1_ParamLimits

0x4372,	// (0x000068e2) bg_hwr_side_pane_g1

0xbeb9,	// (0x0000e429) cell_hwr_side_pane_ParamLimits

0xbeb9,	// (0x0000e429) cell_hwr_side_pane

0x43e4,	// (0x00006954) fep_hwr_write_pane_g1_ParamLimits

0x43e4,	// (0x00006954) fep_hwr_write_pane_g1

0x43f1,	// (0x00006961) fep_hwr_write_pane_g2_ParamLimits

0x43f1,	// (0x00006961) fep_hwr_write_pane_g2

0x43fe,	// (0x0000696e) fep_hwr_write_pane_g3_ParamLimits

0x43fe,	// (0x0000696e) fep_hwr_write_pane_g3

0xbed9,	// (0x0000e449) fep_hwr_write_pane_g4_ParamLimits

0xbed9,	// (0x0000e449) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00012083) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00012083) fep_hwr_write_pane_g

0x4304,	// (0x00006874) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4304,	// (0x00006874) bg_fep_hwr_candidate_pane_g2

0x4447,	// (0x000069b7) cell_hwr_candidate_pane_ParamLimits

0x4447,	// (0x000069b7) cell_hwr_candidate_pane

0x4499,	// (0x00006a09) fep_hwr_candidate_pane_g1_ParamLimits

0x44fb,	// (0x00006a6b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x44fb,	// (0x00006a6b) bg_popup_fep_shadow_pane_cp2

0x4691,	// (0x00006c01) fep_vkb_top_pane_g4_ParamLimits

0x4691,	// (0x00006c01) fep_vkb_top_pane_g4

0x46d7,	// (0x00006c47) fep_vkb_side_pane_g2_ParamLimits

0x46d7,	// (0x00006c47) fep_vkb_side_pane_g2

0x9f8c,	// (0x0000c4fc) list_setting_pane_t4_ParamLimits

0x9f8c,	// (0x0000c4fc) list_setting_pane_t4

0xa008,	// (0x0000c578) list_setting_number_pane_t5_ParamLimits

0xa008,	// (0x0000c578) list_setting_number_pane_t5

0xa373,	// (0x0000c8e3) list_double_heading_pane_cp2_ParamLimits

0xa373,	// (0x0000c8e3) list_double_heading_pane_cp2

0x4aca,	// (0x0000703a) list_double_heading_pane_g1_cp2_ParamLimits

0x4aca,	// (0x0000703a) list_double_heading_pane_g1_cp2

0x4ad6,	// (0x00007046) list_double_heading_pane_g2_cp2_ParamLimits

0x4ad6,	// (0x00007046) list_double_heading_pane_g2_cp2

0x4aea,	// (0x0000705a) list_double_heading_pane_t1_cp2_ParamLimits

0x4aea,	// (0x0000705a) list_double_heading_pane_t1_cp2

0x4b00,	// (0x00007070) list_double_heading_pane_t2_cp2_ParamLimits

0x4b00,	// (0x00007070) list_double_heading_pane_t2_cp2

0xde8c,	// (0x000103fc) aid_value_unit2

0xe06b,	// (0x000105db) popup_preview_fixed_window

0xe2b3,	// (0x00010823) bg_popup_preview_window_pane_cp02

0x4b12,	// (0x00007082) list_preview_fixed_pane

0x4b58,	// (0x000070c8) list_empty_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_empty_pane_fp

0x4b58,	// (0x000070c8) list_single_cale_day_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_single_cale_day_pane_fp

0x4b58,	// (0x000070c8) list_single_graphic_heading_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_single_graphic_heading_pane_fp

0x4b58,	// (0x000070c8) list_single_graphic_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_single_graphic_pane_fp

0x4b58,	// (0x000070c8) list_single_heading_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_single_heading_pane_fp

0x4b58,	// (0x000070c8) list_single_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_single_pane_fp

0x4b71,	// (0x000070e1) list_single_pane_fp_g1_ParamLimits

0x4b71,	// (0x000070e1) list_single_pane_fp_g1

0x4aca,	// (0x0000703a) list_single_pane_fp_g2_ParamLimits

0x4aca,	// (0x0000703a) list_single_pane_fp_g2

0x4ad6,	// (0x00007046) list_single_pane_fp_g3_ParamLimits

0x4ad6,	// (0x00007046) list_single_pane_fp_g3

0x4b7d,	// (0x000070ed) list_single_pane_fp_g4_ParamLimits

0x4b7d,	// (0x000070ed) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x000120e5) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x000120e5) list_single_pane_fp_g

0x4b89,	// (0x000070f9) list_single_pane_fp_t1_ParamLimits

0x4b89,	// (0x000070f9) list_single_pane_fp_t1

0x4ba0,	// (0x00007110) list_single_graphic_pane_fp_g1_ParamLimits

0x4ba0,	// (0x00007110) list_single_graphic_pane_fp_g1

0x4b71,	// (0x000070e1) list_single_graphic_pane_fp_g2_ParamLimits

0x4b71,	// (0x000070e1) list_single_graphic_pane_fp_g2

0x4aca,	// (0x0000703a) list_single_graphic_pane_fp_g3_ParamLimits

0x4aca,	// (0x0000703a) list_single_graphic_pane_fp_g3

0x4ad6,	// (0x00007046) list_single_graphic_pane_fp_g4_ParamLimits

0x4ad6,	// (0x00007046) list_single_graphic_pane_fp_g4

0x4b7d,	// (0x000070ed) list_single_graphic_pane_fp_g5_ParamLimits

0x4b7d,	// (0x000070ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x000120ee) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x000120ee) list_single_graphic_pane_fp_g

0x4bac,	// (0x0000711c) list_single_graphic_pane_fp_t1_ParamLimits

0x4bac,	// (0x0000711c) list_single_graphic_pane_fp_t1

0x4ba0,	// (0x00007110) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4ba0,	// (0x00007110) list_single_graphic_heading_pane_fp_g1

0x4b71,	// (0x000070e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4b71,	// (0x000070e1) list_single_graphic_heading_pane_fp_g2

0x4aca,	// (0x0000703a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4aca,	// (0x0000703a) list_single_graphic_heading_pane_fp_g3

0x4ad6,	// (0x00007046) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ad6,	// (0x00007046) list_single_graphic_heading_pane_fp_g4

0x4b7d,	// (0x000070ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4b7d,	// (0x000070ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x000120ee) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x000120ee) list_single_graphic_heading_pane_fp_g

0x4bc2,	// (0x00007132) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4bc2,	// (0x00007132) list_single_graphic_heading_pane_fp_t1

0x4bd8,	// (0x00007148) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4bd8,	// (0x00007148) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x000120f9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x000120f9) list_single_graphic_heading_pane_fp_t

0x4bea,	// (0x0000715a) list_single_cale_day_pane_fp_g1_ParamLimits

0x4bea,	// (0x0000715a) list_single_cale_day_pane_fp_g1

0x4c22,	// (0x00007192) list_single_cale_day_pane_fp_g2_ParamLimits

0x4c22,	// (0x00007192) list_single_cale_day_pane_fp_g2

0x4c2e,	// (0x0000719e) list_single_cale_day_pane_fp_g3_ParamLimits

0x4c2e,	// (0x0000719e) list_single_cale_day_pane_fp_g3

0x4c56,	// (0x000071c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x4c56,	// (0x000071c6) list_single_cale_day_pane_fp_g4

0x4c7a,	// (0x000071ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x4c7a,	// (0x000071ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x000120fe) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x000120fe) list_single_cale_day_pane_fp_g

0x4c9e,	// (0x0000720e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4c9e,	// (0x0000720e) list_single_cale_day_pane_fp_t1

0x4cc4,	// (0x00007234) list_single_cale_day_pane_fp_t2_ParamLimits

0x4cc4,	// (0x00007234) list_single_cale_day_pane_fp_t2

0x4cdd,	// (0x0000724d) list_single_cale_day_pane_fp_t3_ParamLimits

0x4cdd,	// (0x0000724d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00012109) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00012109) list_single_cale_day_pane_fp_t

0x4b71,	// (0x000070e1) list_empty_pane_fp_g1_ParamLimits

0x4b71,	// (0x000070e1) list_empty_pane_fp_g1

0x4cf6,	// (0x00007266) list_empty_pane_fp_t1

0x4d04,	// (0x00007274) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x00012110) list_empty_pane_fp_t

0x4b71,	// (0x000070e1) list_single_heading_pane_fp_g1_ParamLimits

0x4b71,	// (0x000070e1) list_single_heading_pane_fp_g1

0x4aca,	// (0x0000703a) list_single_heading_pane_fp_g2_ParamLimits

0x4aca,	// (0x0000703a) list_single_heading_pane_fp_g2

0x4ad6,	// (0x00007046) list_single_heading_pane_fp_g3_ParamLimits

0x4ad6,	// (0x00007046) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00012115) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00012115) list_single_heading_pane_fp_g

0x4d12,	// (0x00007282) list_single_heading_pane_fp_t1_ParamLimits

0x4d12,	// (0x00007282) list_single_heading_pane_fp_t1

0x4d24,	// (0x00007294) list_single_heading_pane_fp_t2_ParamLimits

0x4d24,	// (0x00007294) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0001211c) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0001211c) list_single_heading_pane_fp_t

0xea36,	// (0x00010fa6) aid_size_cell_fast

0xe296,	// (0x00010806) soft_indicator_pane_cp1_t1

0xea8d,	// (0x00010ffd) cell_app_pane_cp2_ParamLimits

0xea8d,	// (0x00010ffd) cell_app_pane_cp2

0x426f,	// (0x000067df) fep_hwr_candidate_drop_down_list_pane

0x44b3,	// (0x00006a23) fep_hwr_candidate_pane_g3_ParamLimits

0x44b3,	// (0x00006a23) fep_hwr_candidate_pane_g3

0x44c0,	// (0x00006a30) fep_hwr_candidate_pane_g4_ParamLimits

0x44c0,	// (0x00006a30) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00012090) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00012090) fep_hwr_candidate_pane_g

0x458b,	// (0x00006afb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x458b,	// (0x00006afb) fep_vkb_candidate_drop_down_list_pane

0x49b3,	// (0x00006f23) fep_vkb_candidate_pane_g3

0x49bb,	// (0x00006f2b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000120bd) fep_vkb_candidate_pane_g

0x4691,	// (0x00006c01) cell_hwr_candidate_pane_g1_ParamLimits

0x4a26,	// (0x00006f96) cell_hwr_candidate_pane_g3_ParamLimits

0x4a26,	// (0x00006f96) cell_hwr_candidate_pane_g3

0x4a47,	// (0x00006fb7) cell_hwr_candidate_pane_g4_ParamLimits

0x4a47,	// (0x00006fb7) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x000120d7) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x000120d7) cell_hwr_candidate_pane_g

0x4a86,	// (0x00006ff6) cell_vkb_candidate_pane_g3_ParamLimits

0x4a86,	// (0x00006ff6) cell_vkb_candidate_pane_g3

0x4aa1,	// (0x00007011) cell_vkb_candidate_pane_g4_ParamLimits

0x4aa1,	// (0x00007011) cell_vkb_candidate_pane_g4

0x4d3a,	// (0x000072aa) cell_app_pane_cp2_g1_ParamLimits

0x4d3a,	// (0x000072aa) cell_app_pane_cp2_g1

0x4d58,	// (0x000072c8) cell_app_pane_cp2_g2_ParamLimits

0x4d58,	// (0x000072c8) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x00012121) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x00012121) cell_app_pane_cp2_g

0x4d64,	// (0x000072d4) cell_app_pane_cp2_t1_ParamLimits

0x4d64,	// (0x000072d4) cell_app_pane_cp2_t1

0xe833,	// (0x00010da3) grid_highlight_pane_cp1_ParamLimits

0xe833,	// (0x00010da3) grid_highlight_pane_cp1

0x4d76,	// (0x000072e6) cell_hwr_candidate_pane_cp1_ParamLimits

0x4d76,	// (0x000072e6) cell_hwr_candidate_pane_cp1

0x4691,	// (0x00006c01) fep_hwr_candidate_drop_down_list_pane_g1

0x4d9a,	// (0x0000730a) fep_hwr_candidate_drop_down_list_pane_g2

0x4da7,	// (0x00007317) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00012126) fep_hwr_candidate_drop_down_list_pane_g

0x4db4,	// (0x00007324) fep_hwr_candidate_drop_down_list_scroll_pane

0x4dbd,	// (0x0000732d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4dbd,	// (0x0000732d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4dca,	// (0x0000733a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4dca,	// (0x0000733a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4dd7,	// (0x00007347) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4dd7,	// (0x00007347) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4a86,	// (0x00006ff6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a86,	// (0x00006ff6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4aa1,	// (0x00007011) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4aa1,	// (0x00007011) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4de4,	// (0x00007354) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4de4,	// (0x00007354) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4dff,	// (0x0000736f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4dff,	// (0x0000736f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4e1a,	// (0x0000738a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4e1a,	// (0x0000738a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0001212d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0001212d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e35,	// (0x000073a5) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e35,	// (0x000073a5) cell_vkb_candidate_pane_cp1

0x4691,	// (0x00006c01) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4691,	// (0x00006c01) fep_vkb_candidate_drop_down_list_pane_g1

0x4d9a,	// (0x0000730a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4d9a,	// (0x0000730a) fep_vkb_candidate_drop_down_list_pane_g2

0x4da7,	// (0x00007317) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4da7,	// (0x00007317) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00012126) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00012126) fep_vkb_candidate_drop_down_list_pane_g

0x4e5b,	// (0x000073cb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e5b,	// (0x000073cb) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e68,	// (0x000073d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e68,	// (0x000073d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e75,	// (0x000073e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e75,	// (0x000073e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e81,	// (0x000073f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e81,	// (0x000073f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4a26,	// (0x00006f96) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a26,	// (0x00006f96) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4a47,	// (0x00006fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4a47,	// (0x00006fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e8d,	// (0x000073fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e8d,	// (0x000073fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eae,	// (0x0000741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eae,	// (0x0000741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4ecf,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4ecf,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0001213e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0001213e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9892,	// (0x0000be02) title_pane_g1_ParamLimits

0x98a5,	// (0x0000be15) title_pane_g2_ParamLimits

0xf54e,	// (0x00011abe) title_pane_g_ParamLimits

0xef7d,	// (0x000114ed) aid_call2_pane

0xef85,	// (0x000114f5) aid_call_pane

0xef8d,	// (0x000114fd) popup_clock_analogue_window_g1

0xef8d,	// (0x000114fd) popup_clock_analogue_window_g2

0xef95,	// (0x00011505) popup_clock_analogue_window_g3

0xef9e,	// (0x0001150e) popup_clock_analogue_window_g4

0xde9e,	// (0x0001040e) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00011c63) popup_clock_analogue_window_g

0xefa6,	// (0x00011516) popup_clock_analogue_window_t1

0xf003,	// (0x00011573) clock_digital_number_pane_ParamLimits

0xf003,	// (0x00011573) clock_digital_number_pane

0xf00f,	// (0x0001157f) clock_digital_number_pane_cp02_ParamLimits

0xf00f,	// (0x0001157f) clock_digital_number_pane_cp02

0xf01b,	// (0x0001158b) clock_digital_number_pane_cp03_ParamLimits

0xf01b,	// (0x0001158b) clock_digital_number_pane_cp03

0xf027,	// (0x00011597) clock_digital_number_pane_cp04_ParamLimits

0xf027,	// (0x00011597) clock_digital_number_pane_cp04

0xf033,	// (0x000115a3) clock_digital_separator_pane_ParamLimits

0xf033,	// (0x000115a3) clock_digital_separator_pane

0xf03f,	// (0x000115af) popup_clock_digital_window_t1_ParamLimits

0xf03f,	// (0x000115af) popup_clock_digital_window_t1

0xde9e,	// (0x0001040e) clock_digital_number_pane_g1

0xde9e,	// (0x0001040e) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00011c6e) clock_digital_number_pane_g

0xde9e,	// (0x0001040e) clock_digital_separator_pane_g1

0xde9e,	// (0x0001040e) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00011c6e) clock_digital_separator_pane_g

0xafe7,	// (0x0000d557) aid_fill_nsta_ParamLimits

0xb11f,	// (0x0000d68f) indicator_nsta_pane_ParamLimits

0x0f7c,	// (0x000034ec) popup_clock_analogue_window

0x0f7c,	// (0x000034ec) popup_clock_digital_window

0xea5a,	// (0x00010fca) grid_indicator_nsta_pane_ParamLimits

0x3b78,	// (0x000060e8) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00012010) clock_nsta_pane_t

0xedca,	// (0x0001133a) aid_size_max_handle

0xa2e6,	// (0x0000c856) aid_size_min_handle

0x00e3,	// (0x00002653) editor_scroll_pane

0x4eea,	// (0x0000745a) ex_editor_pane

0xe9fc,	// (0x00010f6c) scroll_pane_cp13

0xe734,	// (0x00010ca4) scroll_pane_cp14

0xefdb,	// (0x0001154b) scroll_pane_cp36

0xa386,	// (0x0000c8f6) list_single_graphic_hl_pane_cp2_ParamLimits

0xa386,	// (0x0000c8f6) list_single_graphic_hl_pane_cp2

0xbb20,	// (0x0000e090) list_single_graphic_hl_pane_ParamLimits

0xbb20,	// (0x0000e090) list_single_graphic_hl_pane

0x4ef2,	// (0x00007462) aid_size_min_hl_cp1

0x4efb,	// (0x0000746b) list_highlight_pane_cp34_ParamLimits

0x4efb,	// (0x0000746b) list_highlight_pane_cp34

0x4f0c,	// (0x0000747c) list_single_graphic_hl_pane_g1_ParamLimits

0x4f0c,	// (0x0000747c) list_single_graphic_hl_pane_g1

0xe73c,	// (0x00010cac) list_single_graphic_hl_pane_g2_ParamLimits

0xe73c,	// (0x00010cac) list_single_graphic_hl_pane_g2

0xe73c,	// (0x00010cac) list_single_graphic_hl_pane_g3_ParamLimits

0xe73c,	// (0x00010cac) list_single_graphic_hl_pane_g3

0xe748,	// (0x00010cb8) list_single_graphic_hl_pane_g4_ParamLimits

0xe748,	// (0x00010cb8) list_single_graphic_hl_pane_g4

0x4f7f,	// (0x000074ef) list_single_graphic_hl_pane_g5_ParamLimits

0x4f7f,	// (0x000074ef) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0001214f) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0001214f) list_single_graphic_hl_pane_g

0xc06a,	// (0x0000e5da) list_single_graphic_hl_pane_t1_ParamLimits

0xc06a,	// (0x0000e5da) list_single_graphic_hl_pane_t1

0x4f4f,	// (0x000074bf) aid_size_min_hl_cp2

0x4f58,	// (0x000074c8) list_highlight_pane_cp34_cp2_ParamLimits

0x4f58,	// (0x000074c8) list_highlight_pane_cp34_cp2

0x4f0c,	// (0x0000747c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f0c,	// (0x0000747c) list_single_graphic_hl_pane_g1_cp2

0x4f65,	// (0x000074d5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f65,	// (0x000074d5) list_single_graphic_hl_pane_g2_cp2

0xc080,	// (0x0000e5f0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc080,	// (0x0000e5f0) list_single_graphic_hl_pane_g3_cp2

0xe748,	// (0x00010cb8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe748,	// (0x00010cb8) list_single_graphic_hl_pane_g4_cp2

0x4f7f,	// (0x000074ef) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f7f,	// (0x000074ef) list_single_graphic_hl_pane_g5_cp2

0xa758,	// (0x0000ccc8) control_pane_g4_ParamLimits

0xa758,	// (0x0000ccc8) control_pane_g4

0x065c,	// (0x00002bcc) bg_popup_sub_pane_cp10_ParamLimits

0x41f6,	// (0x00006766) list_choice_list_pane_ParamLimits

0x4205,	// (0x00006775) scroll_pane_cp23

0xe2b3,	// (0x00010823) bg_popup_preview_window_pane_cp02_ParamLimits

0x4b12,	// (0x00007082) list_preview_fixed_pane_ParamLimits

0x4b28,	// (0x00007098) list_preview_fixed_pane_cp_ParamLimits

0x4b28,	// (0x00007098) list_preview_fixed_pane_cp

0x4b34,	// (0x000070a4) popup_preview_fixed_window_g1_ParamLimits

0x4b34,	// (0x000070a4) popup_preview_fixed_window_g1

0x4b40,	// (0x000070b0) popup_preview_fixed_window_g2_ParamLimits

0x4b40,	// (0x000070b0) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x000120de) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x000120de) popup_preview_fixed_window_g

0xecee,	// (0x0001125e) aid_navi_side_left_pane_ParamLimits

0xed03,	// (0x00011273) aid_navi_side_right_pane_ParamLimits

0xed1b,	// (0x0001128b) navi_icon_pane_stacon_ParamLimits

0xed2f,	// (0x0001129f) navi_navi_pane_stacon_ParamLimits

0xed1b,	// (0x0001128b) navi_text_pane_stacon_ParamLimits

0xde94,	// (0x00010404) main_text_info_pane

0x4fa9,	// (0x00007519) listscroll_text_info_pane

0x4fb1,	// (0x00007521) list_text_info_pane_ParamLimits

0x4fb1,	// (0x00007521) list_text_info_pane

0x4fc0,	// (0x00007530) scroll_pane_cp24_ParamLimits

0x4fc0,	// (0x00007530) scroll_pane_cp24

0xc08e,	// (0x0000e5fe) list_text_info_pane_t1_ParamLimits

0xc08e,	// (0x0000e5fe) list_text_info_pane_t1

0xa8e0,	// (0x0000ce50) popup_fast_swap2_window_ParamLimits

0xa8e0,	// (0x0000ce50) popup_fast_swap2_window

0x5003,	// (0x00007573) aid_size_cell_fast2

0xde94,	// (0x00010404) bg_popup_window_pane_cp17

0x1865,	// (0x00003dd5) heading_pane_cp2

0xe4b9,	// (0x00010a29) listscroll_fast2_pane

0x500d,	// (0x0000757d) grid_fast2_pane

0x5017,	// (0x00007587) listscroll_fast2_pane_g1

0x5021,	// (0x00007591) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0001215a) listscroll_fast2_pane_g

0xe9fc,	// (0x00010f6c) scroll_pane_cp26

0x502b,	// (0x0000759b) cell_fast2_pane_ParamLimits

0x502b,	// (0x0000759b) cell_fast2_pane

0x5042,	// (0x000075b2) cell_fast2_pane_g1

0x504b,	// (0x000075bb) cell_fast2_pane_g2

0x5054,	// (0x000075c4) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0001215f) cell_fast2_pane_g

0xe4fb,	// (0x00010a6b) grid_highlight_pane_cp9

0xe510,	// (0x00010a80) main_eswt_pane_ParamLimits

0xe510,	// (0x00010a80) main_eswt_pane

0x4fd5,	// (0x00007545) list_single_text_info_pane

0x505c,	// (0x000075cc) eswt_ctrl_button_pane

0x505c,	// (0x000075cc) eswt_ctrl_canvas_pane

0x5064,	// (0x000075d4) eswt_ctrl_combo_pane

0x505c,	// (0x000075cc) eswt_ctrl_default_pane

0x505c,	// (0x000075cc) eswt_ctrl_label_pane

0x506c,	// (0x000075dc) eswt_ctrl_wait_pane

0x5074,	// (0x000075e4) eswt_shell_pane

0xde94,	// (0x00010404) listscroll_eswt_app_pane

0x5094,	// (0x00007604) popup_eswt_tasktip_window_ParamLimits

0x5094,	// (0x00007604) popup_eswt_tasktip_window

0x13e8,	// (0x00003958) bg_popup_window_pane_cp18

0x50a5,	// (0x00007615) eswt_control_pane_g1_ParamLimits

0x50a5,	// (0x00007615) eswt_control_pane_g1

0x50b2,	// (0x00007622) eswt_control_pane_g2_ParamLimits

0x50b2,	// (0x00007622) eswt_control_pane_g2

0x50bf,	// (0x0000762f) eswt_control_pane_g3_ParamLimits

0x50bf,	// (0x0000762f) eswt_control_pane_g3

0x50cc,	// (0x0000763c) eswt_control_pane_g4_ParamLimits

0x50cc,	// (0x0000763c) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x00012166) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x00012166) eswt_control_pane_g

0xe833,	// (0x00010da3) bg_button_pane_ParamLimits

0xe833,	// (0x00010da3) bg_button_pane

0xe510,	// (0x00010a80) common_borders_pane_copy2_ParamLimits

0xe510,	// (0x00010a80) common_borders_pane_copy2

0x50d9,	// (0x00007649) control_button_pane_g1_ParamLimits

0x50d9,	// (0x00007649) control_button_pane_g1

0x50e5,	// (0x00007655) control_button_pane_g2_ParamLimits

0x50e5,	// (0x00007655) control_button_pane_g2

0x50f1,	// (0x00007661) control_button_pane_g3_ParamLimits

0x50f1,	// (0x00007661) control_button_pane_g3

0x0002,

0xfbff,	// (0x0001216f) control_button_pane_g_ParamLimits

0xfbff,	// (0x0001216f) control_button_pane_g

0x5105,	// (0x00007675) control_button_pane_t1

0x5113,	// (0x00007683) control_button_pane_t2

0x0001,

0xfc06,	// (0x00012176) control_button_pane_t

0x124b,	// (0x000037bb) bg_button_pane_g1

0x1253,	// (0x000037c3) bg_button_pane_g2

0x125b,	// (0x000037cb) bg_button_pane_g3

0x1263,	// (0x000037d3) bg_button_pane_g4

0x126b,	// (0x000037db) bg_button_pane_g5

0x1273,	// (0x000037e3) bg_button_pane_g6

0x127b,	// (0x000037eb) bg_button_pane_g7

0x1283,	// (0x000037f3) bg_button_pane_g8

0x128b,	// (0x000037fb) bg_button_pane_g9

0x0008,

0xf855,	// (0x00011dc5) bg_button_pane_g

0x41b1,	// (0x00006721) common_borders_pane_ParamLimits

0x41b1,	// (0x00006721) common_borders_pane

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy1_ParamLimits

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy1

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy1_ParamLimits

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy1

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy1_ParamLimits

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy1

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy1_ParamLimits

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy1

0x41ec,	// (0x0000675c) bg_eswt_ctrl_canvas_pane_g1

0x41b1,	// (0x00006721) common_borders_pane_cp2_ParamLimits

0x41b1,	// (0x00006721) common_borders_pane_cp2

0x41b1,	// (0x00006721) common_borders_pane_cp3_ParamLimits

0x41b1,	// (0x00006721) common_borders_pane_cp3

0x5121,	// (0x00007691) separator_horizontal_pane

0x5129,	// (0x00007699) separator_vertical_pane

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy2_ParamLimits

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy2

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy2_ParamLimits

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy2

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy2_ParamLimits

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy2

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy2_ParamLimits

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy2

0xde94,	// (0x00010404) common_borders_pane_cp4

0x5132,	// (0x000076a2) separator_horizontal_pane_g1

0x513b,	// (0x000076ab) separator_horizontal_pane_g2

0x5144,	// (0x000076b4) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0001217b) separator_horizontal_pane_g

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy3_ParamLimits

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy3

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy3_ParamLimits

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy3

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy3_ParamLimits

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy3

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy3_ParamLimits

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy3

0xde94,	// (0x00010404) common_borders_pane_cp5

0x514d,	// (0x000076bd) separator_vertical_pane_g1

0x5156,	// (0x000076c6) separator_vertical_pane_g2

0x515f,	// (0x000076cf) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x00012182) separator_vertical_pane_g

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy4_ParamLimits

0x50a5,	// (0x00007615) eswt_control_pane_g1_copy4

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy4_ParamLimits

0x50b2,	// (0x00007622) eswt_control_pane_g2_copy4

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy4_ParamLimits

0x50bf,	// (0x0000762f) eswt_control_pane_g3_copy4

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy4_ParamLimits

0x50cc,	// (0x0000763c) eswt_control_pane_g4_copy4

0xc0b0,	// (0x0000e620) eswt_ctrl_combo_button_pane

0xc0b8,	// (0x0000e628) eswt_ctrl_input_pane

0xc0c0,	// (0x0000e630) popup_choice_list_window_cp70

0xc0c8,	// (0x0000e638) eswt_ctrl_input_pane_t1

0xde94,	// (0x00010404) input_focus_pane_cp70

0x41b1,	// (0x00006721) bg_button_pane_cp70_ParamLimits

0x41b1,	// (0x00006721) bg_button_pane_cp70

0xc0d6,	// (0x0000e646) eswt_ctrl_combo_button_pane_g1

0x5196,	// (0x00007706) wait_bar_pane_cp70

0x13e8,	// (0x00003958) bg_popup_window_pane_cp70_ParamLimits

0x13e8,	// (0x00003958) bg_popup_window_pane_cp70

0x519e,	// (0x0000770e) popup_eswt_tasktip_window_t1

0x51b4,	// (0x00007724) wait_bar_pane_cp71_ParamLimits

0x51b4,	// (0x00007724) wait_bar_pane_cp71

0x51c0,	// (0x00007730) grid_eswt_app_pane

0xee25,	// (0x00011395) scroll_pane_cp70

0xc0de,	// (0x0000e64e) cell_eswt_app_pane_ParamLimits

0xc0de,	// (0x0000e64e) cell_eswt_app_pane

0xc110,	// (0x0000e680) cell_eswt_app_pane_g1_ParamLimits

0xc110,	// (0x0000e680) cell_eswt_app_pane_g1

0xc13f,	// (0x0000e6af) cell_eswt_app_pane_g2_ParamLimits

0xc13f,	// (0x0000e6af) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x00012189) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x00012189) cell_eswt_app_pane_g

0xc168,	// (0x0000e6d8) cell_eswt_app_pane_t1_ParamLimits

0xc168,	// (0x0000e6d8) cell_eswt_app_pane_t1

0x5285,	// (0x000077f5) grid_highlight_pane_cp70_ParamLimits

0x5285,	// (0x000077f5) grid_highlight_pane_cp70

0xf512,	// (0x00011a82) set_content_pane_g1

0xa6ee,	// (0x0000cc5e) status_small_volume_pane

0x5291,	// (0x00007801) status_small_volume_pane_g1

0x5299,	// (0x00007809) volume_small2_pane

0x52a2,	// (0x00007812) volume_small2_pane_g1

0x52ab,	// (0x0000781b) volume_small2_pane_g2

0x52b4,	// (0x00007824) volume_small2_pane_g3

0x52bd,	// (0x0000782d) volume_small2_pane_g4

0x52c6,	// (0x00007836) volume_small2_pane_g5

0x52cf,	// (0x0000783f) volume_small2_pane_g6

0x52d8,	// (0x00007848) volume_small2_pane_g7

0x52e1,	// (0x00007851) volume_small2_pane_g8

0x52ea,	// (0x0000785a) volume_small2_pane_g9

0x52f3,	// (0x00007863) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0001218e) volume_small2_pane_g

0x47e5,	// (0x00006d55) fep_vkb_top_text_pane_g1_ParamLimits

0xc012,	// (0x0000e582) fep_vkb_top_text_pane_t1_ParamLimits

0x4b4c,	// (0x000070bc) popup_preview_fixed_window_g3_ParamLimits

0x4b4c,	// (0x000070bc) popup_preview_fixed_window_g3

0xaf7a,	// (0x0000d4ea) popup_toolbar_trans_pane

0xb93f,	// (0x0000deaf) aid_height_set_list_ParamLimits

0x2a6a,	// (0x00004fda) aid_size_parent_ParamLimits

0x065c,	// (0x00002bcc) list_highlight_pane_cp2_ParamLimits

0xf512,	// (0x00011a82) set_content_pane_g1_ParamLimits

0xbb34,	// (0x0000e0a4) list_single_image_pane_ParamLimits

0xbb34,	// (0x0000e0a4) list_single_image_pane

0xc19a,	// (0x0000e70a) aid_size_cell_image_ParamLimits

0xc19a,	// (0x0000e70a) aid_size_cell_image

0xc1a7,	// (0x0000e717) grid_single_image_pane_ParamLimits

0xc1a7,	// (0x0000e717) grid_single_image_pane

0xe85e,	// (0x00010dce) list_single_image_pane_g1_ParamLimits

0xe85e,	// (0x00010dce) list_single_image_pane_g1

0xe86a,	// (0x00010dda) list_single_image_pane_g2_ParamLimits

0xe86a,	// (0x00010dda) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x000121a3) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x000121a3) list_single_image_pane_g

0x5317,	// (0x00007887) list_single_image_pane_t1_ParamLimits

0x5317,	// (0x00007887) list_single_image_pane_t1

0xc1b5,	// (0x0000e725) cell_image_list_pane_ParamLimits

0xc1b5,	// (0x0000e725) cell_image_list_pane

0xc1c9,	// (0x0000e739) cell_image_list_pane_g1

0xc1d2,	// (0x0000e742) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x000121a8) cell_image_list_pane_g

0x5355,	// (0x000078c5) aid_size_cell_tb_trans_pane

0xe833,	// (0x00010da3) bg_tb_trans_pane

0x5367,	// (0x000078d7) grid_tb_trans_pane

0x124b,	// (0x000037bb) bg_tb_trans_pane_g1

0x1253,	// (0x000037c3) bg_tb_trans_pane_g2

0x125b,	// (0x000037cb) bg_tb_trans_pane_g3

0x1263,	// (0x000037d3) bg_tb_trans_pane_g4

0x126b,	// (0x000037db) bg_tb_trans_pane_g5

0x1283,	// (0x000037f3) bg_tb_trans_pane_g6

0x128b,	// (0x000037fb) bg_tb_trans_pane_g7

0x1273,	// (0x000037e3) bg_tb_trans_pane_g8

0x127b,	// (0x000037eb) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x000121ad) bg_tb_trans_pane_g

0x537b,	// (0x000078eb) cell_toolbar_trans_pane_ParamLimits

0x537b,	// (0x000078eb) cell_toolbar_trans_pane

0x41ec,	// (0x0000675c) cell_toolbar_trans_pane_g1

0xbd6a,	// (0x0000e2da) list_form2_midp_pane_t1

0xbd78,	// (0x0000e2e8) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00012056) list_form2_midp_pane_t

0x3dd6,	// (0x00006346) scroll_pane_cp51_ParamLimits

0x3ff3,	// (0x00006563) form2_midp_wait_pane_g1

0x3ffc,	// (0x0000656c) form2_midp_wait_pane_g2

0x4005,	// (0x00006575) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0001206b) form2_midp_wait_pane_g

0xe0dd,	// (0x0001064d) list_highlight_pane_cp21_ParamLimits

0x4049,	// (0x000065b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4058,	// (0x000065c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2c8b,	// (0x000051fb) list_single_2graphic_im_pane_ParamLimits

0x2c8b,	// (0x000051fb) list_single_2graphic_im_pane

0xc1db,	// (0x0000e74b) list_single_2graphic_im_pane_g1_ParamLimits

0xc1db,	// (0x0000e74b) list_single_2graphic_im_pane_g1

0xc1ec,	// (0x0000e75c) list_single_2graphic_im_pane_g2_ParamLimits

0xc1ec,	// (0x0000e75c) list_single_2graphic_im_pane_g2

0xc1f8,	// (0x0000e768) list_single_2graphic_im_pane_g3_ParamLimits

0xc1f8,	// (0x0000e768) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x000121c0) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x000121c0) list_single_2graphic_im_pane_g

0xc20c,	// (0x0000e77c) list_single_2graphic_im_pane_t1_ParamLimits

0xc20c,	// (0x0000e77c) list_single_2graphic_im_pane_t1

0x4b58,	// (0x000070c8) list_single_graphic_2heading_pane_fp_ParamLimits

0x4b58,	// (0x000070c8) list_single_graphic_2heading_pane_fp

0x4ba0,	// (0x00007110) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4ba0,	// (0x00007110) list_single_graphic_2heading_pane_fp_g1

0x4b71,	// (0x000070e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4b71,	// (0x000070e1) list_single_graphic_2heading_pane_fp_g2

0x4aca,	// (0x0000703a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4aca,	// (0x0000703a) list_single_graphic_2heading_pane_fp_g3

0x4ad6,	// (0x00007046) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ad6,	// (0x00007046) list_single_graphic_2heading_pane_fp_g4

0x4b7d,	// (0x000070ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4b7d,	// (0x000070ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x000120ee) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x000120ee) list_single_graphic_2heading_pane_fp_g

0x540f,	// (0x0000797f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x540f,	// (0x0000797f) list_single_graphic_2heading_pane_fp_t1

0x4bd8,	// (0x00007148) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4bd8,	// (0x00007148) list_single_graphic_2heading_pane_fp_t2

0x5425,	// (0x00007995) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5425,	// (0x00007995) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x000121c9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x000121c9) list_single_graphic_2heading_pane_fp_t

0x4421,	// (0x00006991) fep_hwr_write_pane_g5_ParamLimits

0x4421,	// (0x00006991) fep_hwr_write_pane_g5

0x442d,	// (0x0000699d) fep_hwr_write_pane_g6_ParamLimits

0x442d,	// (0x0000699d) fep_hwr_write_pane_g6

0x5074,	// (0x000075e4) eswt_shell_pane_ParamLimits

0x13e8,	// (0x00003958) bg_popup_window_pane_cp18_ParamLimits

0x2910,	// (0x00004e80) heading_pane_cp70

0x519e,	// (0x0000770e) popup_eswt_tasktip_window_t1_ParamLimits

0xb044,	// (0x0000d5b4) aid_touch_tab_arrow_left

0xb05a,	// (0x0000d5ca) aid_touch_tab_arrow_right

0xe075,	// (0x000105e5) title_pane_g3_ParamLimits

0xe075,	// (0x000105e5) title_pane_g3

0xe78d,	// (0x00010cfd) set_value_pane_g1

0xaf7a,	// (0x0000d4ea) popup_toolbar_trans_pane_ParamLimits

0x5355,	// (0x000078c5) aid_size_cell_tb_trans_pane_ParamLimits

0xe833,	// (0x00010da3) bg_tb_trans_pane_ParamLimits

0x5367,	// (0x000078d7) grid_tb_trans_pane_ParamLimits

0xe2b3,	// (0x00010823) cont_note_pane_ParamLimits

0xe2b3,	// (0x00010823) cont_note_pane

0xe510,	// (0x00010a80) cont_snote2_single_text_pane_ParamLimits

0xe510,	// (0x00010a80) cont_snote2_single_text_pane

0xe510,	// (0x00010a80) cont_snote2_single_graphic_pane_ParamLimits

0xe510,	// (0x00010a80) cont_snote2_single_graphic_pane

0x1a81,	// (0x00003ff1) cont_note_wait_pane_ParamLimits

0x1a81,	// (0x00003ff1) cont_note_wait_pane

0x1a81,	// (0x00003ff1) cont_note_image_pane_ParamLimits

0x1a81,	// (0x00003ff1) cont_note_image_pane

0x543b,	// (0x000079ab) popup_note2_window_g1_ParamLimits

0x543b,	// (0x000079ab) popup_note2_window_g1

0x546c,	// (0x000079dc) popup_note2_window_t1_ParamLimits

0x546c,	// (0x000079dc) popup_note2_window_t1

0x54b1,	// (0x00007a21) popup_note2_window_t2_ParamLimits

0x54b1,	// (0x00007a21) popup_note2_window_t2

0x54f6,	// (0x00007a66) popup_note2_window_t3_ParamLimits

0x54f6,	// (0x00007a66) popup_note2_window_t3

0x553b,	// (0x00007aab) popup_note2_window_t4_ParamLimits

0x553b,	// (0x00007aab) popup_note2_window_t4

0xe337,	// (0x000108a7) popup_note2_window_t5_ParamLimits

0xe337,	// (0x000108a7) popup_note2_window_t5

0x0004,

0xfc65,	// (0x000121d5) popup_note2_window_t_ParamLimits

0xfc65,	// (0x000121d5) popup_note2_window_t

0x556a,	// (0x00007ada) popup_note2_image_window_g1_ParamLimits

0x556a,	// (0x00007ada) popup_note2_image_window_g1

0x5576,	// (0x00007ae6) popup_note2_image_window_g2_ParamLimits

0x5576,	// (0x00007ae6) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x000121e0) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x000121e0) popup_note2_image_window_g

0x5588,	// (0x00007af8) popup_note2_image_window_t1_ParamLimits

0x5588,	// (0x00007af8) popup_note2_image_window_t1

0x55a0,	// (0x00007b10) popup_note2_image_window_t2_ParamLimits

0x55a0,	// (0x00007b10) popup_note2_image_window_t2

0x55b8,	// (0x00007b28) popup_note2_image_window_t3_ParamLimits

0x55b8,	// (0x00007b28) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x000121e5) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x000121e5) popup_note2_image_window_t

0x1a8f,	// (0x00003fff) popup_note2_wait_window_g1_ParamLimits

0x1a8f,	// (0x00003fff) popup_note2_wait_window_g1

0x55d4,	// (0x00007b44) popup_note2_wait_window_g2_ParamLimits

0x55d4,	// (0x00007b44) popup_note2_wait_window_g2

0x1aa7,	// (0x00004017) popup_note2_wait_window_g3_ParamLimits

0x1aa7,	// (0x00004017) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x000121ec) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x000121ec) popup_note2_wait_window_g

0x55e0,	// (0x00007b50) popup_note2_wait_window_t1_ParamLimits

0x55e0,	// (0x00007b50) popup_note2_wait_window_t1

0x55fe,	// (0x00007b6e) popup_note2_wait_window_t2_ParamLimits

0x55fe,	// (0x00007b6e) popup_note2_wait_window_t2

0x561c,	// (0x00007b8c) popup_note2_wait_window_t3_ParamLimits

0x561c,	// (0x00007b8c) popup_note2_wait_window_t3

0x562e,	// (0x00007b9e) popup_note2_wait_window_t4_ParamLimits

0x562e,	// (0x00007b9e) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x000121f3) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x000121f3) popup_note2_wait_window_t

0x5640,	// (0x00007bb0) wait_bar2_pane_ParamLimits

0x5640,	// (0x00007bb0) wait_bar2_pane

0x5658,	// (0x00007bc8) popup_snote2_single_text_window_g1_ParamLimits

0x5658,	// (0x00007bc8) popup_snote2_single_text_window_g1

0x5680,	// (0x00007bf0) popup_snote2_single_text_window_t1_ParamLimits

0x5680,	// (0x00007bf0) popup_snote2_single_text_window_t1

0x56cc,	// (0x00007c3c) popup_snote2_single_text_window_t2_ParamLimits

0x56cc,	// (0x00007c3c) popup_snote2_single_text_window_t2

0x5718,	// (0x00007c88) popup_snote2_single_text_window_t3_ParamLimits

0x5718,	// (0x00007c88) popup_snote2_single_text_window_t3

0x5759,	// (0x00007cc9) popup_snote2_single_text_window_t4_ParamLimits

0x5759,	// (0x00007cc9) popup_snote2_single_text_window_t4

0x578f,	// (0x00007cff) popup_snote2_single_text_window_t5_ParamLimits

0x578f,	// (0x00007cff) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x000121fc) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x000121fc) popup_snote2_single_text_window_t

0x57ba,	// (0x00007d2a) popup_snote2_single_graphic_window_g1_ParamLimits

0x57ba,	// (0x00007d2a) popup_snote2_single_graphic_window_g1

0x57e2,	// (0x00007d52) popup_snote2_single_graphic_window_g2_ParamLimits

0x57e2,	// (0x00007d52) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00012207) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00012207) popup_snote2_single_graphic_window_g

0x580a,	// (0x00007d7a) popup_snote2_single_graphic_window_t1_ParamLimits

0x580a,	// (0x00007d7a) popup_snote2_single_graphic_window_t1

0x5856,	// (0x00007dc6) popup_snote2_single_graphic_window_t2_ParamLimits

0x5856,	// (0x00007dc6) popup_snote2_single_graphic_window_t2

0x5718,	// (0x00007c88) popup_snote2_single_graphic_window_t3_ParamLimits

0x5718,	// (0x00007c88) popup_snote2_single_graphic_window_t3

0x5759,	// (0x00007cc9) popup_snote2_single_graphic_window_t4_ParamLimits

0x5759,	// (0x00007cc9) popup_snote2_single_graphic_window_t4

0x578f,	// (0x00007cff) popup_snote2_single_graphic_window_t5_ParamLimits

0x578f,	// (0x00007cff) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0001220c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0001220c) popup_snote2_single_graphic_window_t

0x3c35,	// (0x000061a5) clock_nsta_pane_cp2_t1

0x3c35,	// (0x000061a5) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0001202c) clock_nsta_pane_cp2_t

0xe852,	// (0x00010dc2) form_field_data_wide_pane_g1_ParamLimits

0xe85e,	// (0x00010dce) form_field_data_wide_pane_g2_ParamLimits

0xe85e,	// (0x00010dce) form_field_data_wide_pane_g2

0xe86a,	// (0x00010dda) form_field_data_wide_pane_g3_ParamLimits

0xe86a,	// (0x00010dda) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00011be6) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00011be6) form_field_data_wide_pane_g

0xbc76,	// (0x0000e1e6) grid_touch_3_pane_ParamLimits

0xbc76,	// (0x0000e1e6) grid_touch_3_pane

0xc23d,	// (0x0000e7ad) cell_touch_3_pane_ParamLimits

0xc23d,	// (0x0000e7ad) cell_touch_3_pane

0x41ec,	// (0x0000675c) cell_touch_3_pane_g1

0x41ec,	// (0x0000675c) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000120b1) cell_touch_3_pane_g

0xe369,	// (0x000108d9) cont_query_data_pane

0xe371,	// (0x000108e1) cont_query_data_pane_cp1

0x58d5,	// (0x00007e45) button_value_adjust_pane_cp7

0x58dd,	// (0x00007e4d) query_popup_pane_cp3

0xf067,	// (0x000115d7) bg_popup_sub_pane_cp22_ParamLimits

0xf07d,	// (0x000115ed) navi_navi_volume_pane_cp2

0xf098,	// (0x00011608) popup_side_volume_key_window_g2

0xf0a7,	// (0x00011617) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00011c7c) popup_side_volume_key_window_g

0xf0c4,	// (0x00011634) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00011c83) popup_side_volume_key_window_t

0xf415,	// (0x00011985) popup_side_volume_key_window_ParamLimits

0x9d7b,	// (0x0000c2eb) list_double_graphic_pane_g4_ParamLimits

0x9d7b,	// (0x0000c2eb) list_double_graphic_pane_g4

0xbb0b,	// (0x0000e07b) list_single_2heading_msg_pane_ParamLimits

0xbb0b,	// (0x0000e07b) list_single_2heading_msg_pane

0xc287,	// (0x0000e7f7) list_single_2heading_msg_pane_g1_ParamLimits

0xc287,	// (0x0000e7f7) list_single_2heading_msg_pane_g1

0xc293,	// (0x0000e803) list_single_2heading_msg_pane_g2_ParamLimits

0xc293,	// (0x0000e803) list_single_2heading_msg_pane_g2

0xc2a6,	// (0x0000e816) list_single_2heading_msg_pane_g3_ParamLimits

0xc2a6,	// (0x0000e816) list_single_2heading_msg_pane_g3

0xc2b2,	// (0x0000e822) list_single_2heading_msg_pane_g4_ParamLimits

0xc2b2,	// (0x0000e822) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00012217) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00012217) list_single_2heading_msg_pane_g

0xc2ca,	// (0x0000e83a) list_single_2heading_msg_pane_t1_ParamLimits

0xc2ca,	// (0x0000e83a) list_single_2heading_msg_pane_t1

0xc2f2,	// (0x0000e862) list_single_2heading_msg_pane_t2_ParamLimits

0xc2f2,	// (0x0000e862) list_single_2heading_msg_pane_t2

0xc35d,	// (0x0000e8cd) list_single_2heading_msg_pane_t3_ParamLimits

0xc35d,	// (0x0000e8cd) list_single_2heading_msg_pane_t3

0x59ce,	// (0x00007f3e) list_single_2heading_msg_pane_t4_ParamLimits

0x59ce,	// (0x00007f3e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x00012220) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x00012220) list_single_2heading_msg_pane_t

0xe081,	// (0x000105f1) title_pane_g4_ParamLimits

0xe081,	// (0x000105f1) title_pane_g4

0xec16,	// (0x00011186) title_pane_stacon_g3_ParamLimits

0xec16,	// (0x00011186) title_pane_stacon_g3

0x53d2,	// (0x00007942) list_single_2graphic_im_pane_g4_ParamLimits

0x53d2,	// (0x00007942) list_single_2graphic_im_pane_g4

0x265d,	// (0x00004bcd) popup_side_volume_key_window_cp

0x30fc,	// (0x0000566c) main_idle_act2_pane_t1

0x1293,	// (0x00003803) toolbar_button_pane_g10

0x9c32,	// (0x0000c1a2) popup_toolbar_window_cp1

0x3c26,	// (0x00006196) clock_nsta_pane_cp_t1

0x3c26,	// (0x00006196) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00012027) clock_nsta_pane_cp_t

0xf07d,	// (0x000115ed) navi_navi_volume_pane_cp2_ParamLimits

0xf08c,	// (0x000115fc) popup_side_volume_key_window_g1_ParamLimits

0xf098,	// (0x00011608) popup_side_volume_key_window_g2_ParamLimits

0xf0a7,	// (0x00011617) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00011c7c) popup_side_volume_key_window_g_ParamLimits

0x425b,	// (0x000067cb) fep_hwr_aid_pane

0x4304,	// (0x00006874) bg_fep_hwr_top_pane_g4_ParamLimits

0x4324,	// (0x00006894) fep_hwr_top_pane_g1_ParamLimits

0x4336,	// (0x000068a6) fep_hwr_top_pane_g2_ParamLimits

0x4348,	// (0x000068b8) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0001207c) fep_hwr_top_pane_g_ParamLimits

0x435d,	// (0x000068cd) fep_hwr_top_text_pane_ParamLimits

0x2412,	// (0x00004982) aid_touch_tab_arrow_arrow_2

0x241b,	// (0x0000498b) aid_touch_tab_arrow_left_2

0x426f,	// (0x000067df) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x42a6,	// (0x00006816) fep_hwr_prediction_pane

0x45df,	// (0x00006b4f) fep_vkb_prediction_pane

0xbff2,	// (0x0000e562) fep_vkb_side_pane_g3_ParamLimits

0xbff2,	// (0x0000e562) fep_vkb_side_pane_g3

0x4691,	// (0x00006c01) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4d9a,	// (0x0000730a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4da7,	// (0x00007317) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00012126) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x59f3,	// (0x00007f63) fep_hwr_prediction_pane_g1

0x59fd,	// (0x00007f6d) fep_hwr_prediction_pane_g2

0x5a05,	// (0x00007f75) fep_hwr_prediction_pane_g3

0x5a0d,	// (0x00007f7d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00012229) fep_hwr_prediction_pane_g

0x59f3,	// (0x00007f63) fep_vkb_prediction_pane_g1

0x5a15,	// (0x00007f85) fep_vkb_prediction_pane_g2

0x5a1d,	// (0x00007f8d) fep_vkb_prediction_pane_g3

0x5a25,	// (0x00007f95) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x00012232) fep_vkb_prediction_pane_g

0x29d1,	// (0x00004f41) slider_set_pane_g3

0x29e5,	// (0x00004f55) slider_set_pane_g4

0x29fd,	// (0x00004f6d) slider_set_pane_g5

0x29d1,	// (0x00004f41) slider_set_pane_g6

0x2a13,	// (0x00004f83) slider_set_pane_g7

0x2bef,	// (0x0000515f) slider_form_pane_g3

0x2bf8,	// (0x00005168) slider_form_pane_g4

0x2c00,	// (0x00005170) slider_form_pane_g5

0x2bef,	// (0x0000515f) slider_form_pane_g6

0xbaae,	// (0x0000e01e) slider_form_pane_g7

0x3410,	// (0x00005980) slider_set_pane_vc_g3

0x3419,	// (0x00005989) slider_set_pane_vc_g4

0x3422,	// (0x00005992) slider_set_pane_vc_g5

0x3410,	// (0x00005980) slider_set_pane_vc_g6

0x342b,	// (0x0000599b) slider_set_pane_vc_g7

0x38d9,	// (0x00005e49) slider_form_pane_vc_g1

0x38e2,	// (0x00005e52) slider_form_pane_vc_g2

0x38eb,	// (0x00005e5b) slider_form_pane_vc_g3

0x38d9,	// (0x00005e49) slider_form_pane_vc_g4

0x38f4,	// (0x00005e64) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00011ff9) slider_form_pane_vc_g

0xde94,	// (0x00010404) main_idle_act3_pane

0x5a2d,	// (0x00007f9d) ai3_links_pane

0xc3cb,	// (0x0000e93b) popup_ai3_data_window_ParamLimits

0xc3cb,	// (0x0000e93b) popup_ai3_data_window

0xde94,	// (0x00010404) grid_ai3_links_pane

0xc3e9,	// (0x0000e959) cell_ai3_links_pane_ParamLimits

0xc3e9,	// (0x0000e959) cell_ai3_links_pane

0x5a6e,	// (0x00007fde) bg_popup_sub_pane_cp11

0x5a7b,	// (0x00007feb) cell_ai3_links_pane_g1

0xde94,	// (0x00010404) bg_popup_sub_pane_cp12

0x5aa0,	// (0x00008010) heading_ai3_data_pane

0x5aa8,	// (0x00008018) list_ai3_gene_pane

0x5ab4,	// (0x00008024) popup_ai3_data_window_g1

0x5abc,	// (0x0000802c) heading_ai3_data_pane_g1

0x5ac4,	// (0x00008034) heading_ai3_data_pane_t1

0x5ad2,	// (0x00008042) list_double_ai3_gene_pane_ParamLimits

0x5ad2,	// (0x00008042) list_double_ai3_gene_pane

0x5adf,	// (0x0000804f) list_single_ai3_gene_pane_ParamLimits

0x5adf,	// (0x0000804f) list_single_ai3_gene_pane

0x41b1,	// (0x00006721) list_highlight_pane_cp7_ParamLimits

0x41b1,	// (0x00006721) list_highlight_pane_cp7

0x5aec,	// (0x0000805c) list_single_a13_gene_pane_t1_ParamLimits

0x5aec,	// (0x0000805c) list_single_a13_gene_pane_t1

0x5b03,	// (0x00008073) list_single_ai3_gene_pane_g1

0x5b0c,	// (0x0000807c) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0001223b) list_single_ai3_gene_pane_g

0x5b14,	// (0x00008084) list_double_ai3_gene_pane_g1_ParamLimits

0x5b14,	// (0x00008084) list_double_ai3_gene_pane_g1

0x5b20,	// (0x00008090) list_double_ai3_gene_pane_t1_ParamLimits

0x5b20,	// (0x00008090) list_double_ai3_gene_pane_t1

0x5b3c,	// (0x000080ac) list_double_ai3_gene_pane_t2_ParamLimits

0x5b3c,	// (0x000080ac) list_double_ai3_gene_pane_t2

0x5b51,	// (0x000080c1) list_double_ai3_gene_pane_t3_ParamLimits

0x5b51,	// (0x000080c1) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x00012240) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x00012240) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58ee,	// (0x00007e5e) aid_size_min_col_2

0xc271,	// (0x0000e7e1) aid_size_min_msg_ParamLimits

0xc271,	// (0x0000e7e1) aid_size_min_msg

0xc006,	// (0x0000e576) fep_vkb_top_text_pane_g2_ParamLimits

0xc006,	// (0x0000e576) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000120ac) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000120ac) fep_vkb_top_text_pane_g

0xde94,	// (0x00010404) main_hc_apps_shell_pane

0x5b6e,	// (0x000080de) grid_hc_apps_pane_ParamLimits

0x5b6e,	// (0x000080de) grid_hc_apps_pane

0x5b7d,	// (0x000080ed) list_hc_apps_pane

0x5b85,	// (0x000080f5) scroll_pane_cp37_ParamLimits

0x5b85,	// (0x000080f5) scroll_pane_cp37

0xc403,	// (0x0000e973) cell_hc_apps_pane_ParamLimits

0xc403,	// (0x0000e973) cell_hc_apps_pane

0xc4cd,	// (0x0000ea3d) cell_hc_apps_pane_g1_ParamLimits

0xc4cd,	// (0x0000ea3d) cell_hc_apps_pane_g1

0x5c7a,	// (0x000081ea) cell_hc_apps_pane_g2_ParamLimits

0x5c7a,	// (0x000081ea) cell_hc_apps_pane_g2

0x5c96,	// (0x00008206) cell_hc_apps_pane_g3_ParamLimits

0x5c96,	// (0x00008206) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00012247) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00012247) cell_hc_apps_pane_g

0xc4fa,	// (0x0000ea6a) cell_hc_apps_pane_t1_ParamLimits

0xc4fa,	// (0x0000ea6a) cell_hc_apps_pane_t1

0xe2b3,	// (0x00010823) grid_highlight_pane_cp10_ParamLimits

0xe2b3,	// (0x00010823) grid_highlight_pane_cp10

0xc53a,	// (0x0000eaaa) list_single_hc_apps_pane_ParamLimits

0xc53a,	// (0x0000eaaa) list_single_hc_apps_pane

0xc574,	// (0x0000eae4) list_single_hc_apps_pane_g1

0xc58d,	// (0x0000eafd) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0001224e) list_single_hc_apps_pane_g

0xc5a6,	// (0x0000eb16) list_single_hc_apps_pane_g2_copy1

0xc5c2,	// (0x0000eb32) list_single_hc_apps_pane_t1

0xe0dd,	// (0x0001064d) bg_set_opt_pane_cp_ParamLimits

0xe0eb,	// (0x0001065b) setting_slider_pane_t1_ParamLimits

0xe104,	// (0x00010674) setting_slider_pane_t2_ParamLimits

0xe11e,	// (0x0001068e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011ace) setting_slider_pane_t_ParamLimits

0xe136,	// (0x000106a6) slider_set_pane_ParamLimits

0x04b9,	// (0x00002a29) control_pane_g5_ParamLimits

0x04b9,	// (0x00002a29) control_pane_g5

0x29b8,	// (0x00004f28) slider_set_pane_g1_ParamLimits

0x29c5,	// (0x00004f35) slider_set_pane_g2_ParamLimits

0x29d1,	// (0x00004f41) slider_set_pane_g3_ParamLimits

0x29e5,	// (0x00004f55) slider_set_pane_g4_ParamLimits

0x29fd,	// (0x00004f6d) slider_set_pane_g5_ParamLimits

0x29d1,	// (0x00004f41) slider_set_pane_g6_ParamLimits

0x2a13,	// (0x00004f83) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00011ec3) slider_set_pane_g_ParamLimits

0xf4bd,	// (0x00011a2d) navi_icon_text_pane_ParamLimits

0xb00b,	// (0x0000d57b) aid_fill_nsta_2_ParamLimits

0xb044,	// (0x0000d5b4) aid_touch_tab_arrow_left_ParamLimits

0xb05a,	// (0x0000d5ca) aid_touch_tab_arrow_right_ParamLimits

0xb0f5,	// (0x0000d665) clock_nsta_pane_ParamLimits

0xb7da,	// (0x0000dd4a) navi_icon_pane_g1_ParamLimits

0xb7e6,	// (0x0000dd56) navi_text_pane_t1_ParamLimits

0xbd4c,	// (0x0000e2bc) navi_icon_text_pane_g1_ParamLimits

0xbd58,	// (0x0000e2c8) navi_icon_text_pane_t1_ParamLimits

0xc574,	// (0x0000eae4) list_single_hc_apps_pane_g1_ParamLimits

0xc58d,	// (0x0000eafd) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0001224e) list_single_hc_apps_pane_g_ParamLimits

0xc5a6,	// (0x0000eb16) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc5c2,	// (0x0000eb32) list_single_hc_apps_pane_t1_ParamLimits

0x97b8,	// (0x0000bd28) popup_toolbar2_fixed_window_ParamLimits

0x97b8,	// (0x0000bd28) popup_toolbar2_fixed_window

0xaf70,	// (0x0000d4e0) popup_toolbar2_float_window

0xde94,	// (0x00010404) bg_popup_sub_pane_cp27

0x5db3,	// (0x00008323) grid_toolbar2_float_pane

0xde94,	// (0x00010404) bg_popup_sub_pane_cp26

0x5db3,	// (0x00008323) grid_toolbar2_fixed_pane

0xc5f0,	// (0x0000eb60) cell_toolbar2_fixed_pane_ParamLimits

0xc5f0,	// (0x0000eb60) cell_toolbar2_fixed_pane

0xc60d,	// (0x0000eb7d) cell_toolbar2_fixed_pane_g1

0x5dd4,	// (0x00008344) toolbar2_fixed_button_pane

0x124b,	// (0x000037bb) toolbar2_fixed_button_pane_g1

0x1253,	// (0x000037c3) toolbar2_fixed_button_pane_g2

0x125b,	// (0x000037cb) toolbar2_fixed_button_pane_g3

0x1263,	// (0x000037d3) toolbar2_fixed_button_pane_g4

0x126b,	// (0x000037db) toolbar2_fixed_button_pane_g5

0x1273,	// (0x000037e3) toolbar2_fixed_button_pane_g6

0x127b,	// (0x000037eb) toolbar2_fixed_button_pane_g7

0x1283,	// (0x000037f3) toolbar2_fixed_button_pane_g8

0x128b,	// (0x000037fb) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00011dc5) toolbar2_fixed_button_pane_g

0x5ddc,	// (0x0000834c) cell_toolbar2_float_pane_ParamLimits

0x5ddc,	// (0x0000834c) cell_toolbar2_float_pane

0x5ded,	// (0x0000835d) cell_toolbar2_float_pane_g1

0x5dd4,	// (0x00008344) toolbar2_fixed_button_pane_cp

0xbeee,	// (0x0000e45e) fep_vkb_accented_list_pane_ParamLimits

0xbeee,	// (0x0000e45e) fep_vkb_accented_list_pane

0x4a02,	// (0x00006f72) bg_popup_fep_shadow_pane_g9

0x00e3,	// (0x00002653) bg_popup_fep_shadow_pane_cp3

0xe9e3,	// (0x00010f53) list_accented_list_pane

0x5df6,	// (0x00008366) list_single_accented_list_pane_ParamLimits

0x5df6,	// (0x00008366) list_single_accented_list_pane

0x00e3,	// (0x00002653) list_highlight_pane_cp10

0x5e07,	// (0x00008377) list_single_accented_list_pane_t1

0xae8c,	// (0x0000d3fc) popup_slider_window_ParamLimits

0xae8c,	// (0x0000d3fc) popup_slider_window

0x58e5,	// (0x00007e55) aid_indentation_list_msg

0xc718,	// (0x0000ec88) bg_popup_window_pane_cp19

0x5f41,	// (0x000084b1) popup_slider_window_g1

0x5f5d,	// (0x000084cd) popup_slider_window_g2

0x5f79,	// (0x000084e9) popup_slider_window_g3

0x0005,

0xfce3,	// (0x00012253) popup_slider_window_g

0x5fd5,	// (0x00008545) popup_slider_window_t1

0x6049,	// (0x000085b9) small_volume_slider_vertical_pane

0x41ec,	// (0x0000675c) small_volume_slider_vertical_pane_g1

0x41ec,	// (0x0000675c) small_volume_slider_vertical_pane_g2

0x6065,	// (0x000085d5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x00012265) small_volume_slider_vertical_pane_g

0x9722,	// (0x0000bc92) area_side_right_pane_ParamLimits

0x9722,	// (0x0000bc92) area_side_right_pane

0xc7d0,	// (0x0000ed40) aid_size_side_button_ParamLimits

0xc7d0,	// (0x0000ed40) aid_size_side_button

0xc7e9,	// (0x0000ed59) grid_sctrl_middle_pane_ParamLimits

0xc7e9,	// (0x0000ed59) grid_sctrl_middle_pane

0x60a2,	// (0x00008612) sctrl_sk_bottom_pane

0x60b3,	// (0x00008623) sctrl_sk_top_pane

0x60c5,	// (0x00008635) aid_touch_sctrl_top

0xe2b3,	// (0x00010823) bg_sctrl_sk_pane_ParamLimits

0xe2b3,	// (0x00010823) bg_sctrl_sk_pane

0x60d2,	// (0x00008642) sctrl_sk_top_pane_g1

0x60df,	// (0x0000864f) sctrl_sk_top_pane_t1

0x60c5,	// (0x00008635) aid_touch_sctrl_bottom

0xe2b3,	// (0x00010823) bg_sctrl_sk_pane_cp_ParamLimits

0xe2b3,	// (0x00010823) bg_sctrl_sk_pane_cp

0x60fa,	// (0x0000866a) sctrl_sk_bottom_pane_g1

0x60df,	// (0x0000864f) sctrl_sk_bottom_pane_t1

0xc803,	// (0x0000ed73) cell_sctrl_middle_pane_ParamLimits

0xc803,	// (0x0000ed73) cell_sctrl_middle_pane

0xc816,	// (0x0000ed86) aid_touch_sctrl_middle_ParamLimits

0xc816,	// (0x0000ed86) aid_touch_sctrl_middle

0xc823,	// (0x0000ed93) bg_sctrl_middle_pane_ParamLimits

0xc823,	// (0x0000ed93) bg_sctrl_middle_pane

0x61c4,	// (0x00008734) cell_sctrl_middle_pane_g1_ParamLimits

0x61c4,	// (0x00008734) cell_sctrl_middle_pane_g1

0xc831,	// (0x0000eda1) cell_sctrl_middle_pane_g2_ParamLimits

0xc831,	// (0x0000eda1) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x00012271) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x00012271) cell_sctrl_middle_pane_g

0x124b,	// (0x000037bb) bg_sctrl_middle_pane_g1

0x1253,	// (0x000037c3) bg_sctrl_middle_pane_g2

0x125b,	// (0x000037cb) bg_sctrl_middle_pane_g3

0x1263,	// (0x000037d3) bg_sctrl_middle_pane_g4

0x126b,	// (0x000037db) bg_sctrl_middle_pane_g5

0x1273,	// (0x000037e3) bg_sctrl_middle_pane_g6

0x127b,	// (0x000037eb) bg_sctrl_middle_pane_g7

0x1283,	// (0x000037f3) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x00012276) bg_sctrl_middle_pane_g

0x128b,	// (0x000037fb) bg_sctrl_middle_pane_g8_copy1

0x124b,	// (0x000037bb) bg_sctrl_sk_pane_g1

0x1253,	// (0x000037c3) bg_sctrl_sk_pane_g2

0x125b,	// (0x000037cb) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00011dc5) bg_sctrl_sk_pane_g

0xe6ce,	// (0x00010c3e) aid_size_touch_scroll_bar

0x1263,	// (0x000037d3) bg_sctrl_sk_pane_g4

0x126b,	// (0x000037db) bg_sctrl_sk_pane_g5

0x1273,	// (0x000037e3) bg_sctrl_sk_pane_g6

0x127b,	// (0x000037eb) bg_sctrl_sk_pane_g7

0x1283,	// (0x000037f3) bg_sctrl_sk_pane_g8

0x128b,	// (0x000037fb) bg_sctrl_sk_pane_g9

0x0712,	// (0x00002c82) popup_fep_china_hwr2_fs_candidate_window

0xa944,	// (0x0000ceb4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa944,	// (0x0000ceb4) popup_fep_china_hwr2_fs_control_window

0x4691,	// (0x00006c01) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0001226c) sctrl_sk_top_pane_g

0xc83d,	// (0x0000edad) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc83d,	// (0x0000edad) aid_fep_china_hwr2_fs_cell

0xc853,	// (0x0000edc3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc853,	// (0x0000edc3) bg_popup_fep_shadow_pane_cp4

0xc86a,	// (0x0000edda) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc86a,	// (0x0000edda) bg_popup_fep_shadow_pane_cp5

0xc87c,	// (0x0000edec) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc87c,	// (0x0000edec) popup_fep_china_hwr2_fs_control_bar_grid

0xc890,	// (0x0000ee00) popup_fep_china_hwr2_fs_control_funtion_grid

0x6198,	// (0x00008708) aid_fep_china_hwr2_fs_candi_cell

0xde94,	// (0x00010404) bg_popup_fep_shadow_pane_cp6

0x61a2,	// (0x00008712) popup_fep_china_hwr2_fs_candidate_grid

0xc898,	// (0x0000ee08) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc898,	// (0x0000ee08) cell_fep_china_hwr2_fs_funtion_grid

0x41ec,	// (0x0000675c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x61c4,	// (0x00008734) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x61c4,	// (0x00008734) cell_fep_china_hwr2_fs_funtion_grid_g1

0x61d2,	// (0x00008742) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x61d2,	// (0x00008742) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x00012287) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x00012287) cell_fep_china_hwr2_fs_funtion_grid_g

0xc8b0,	// (0x0000ee20) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc8b0,	// (0x0000ee20) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc8c5,	// (0x0000ee35) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc8c5,	// (0x0000ee35) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0001228c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0001228c) cell_fep_china_hwr2_fs_funtion_grid_t

0x6219,	// (0x00008789) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6221,	// (0x00008791) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6229,	// (0x00008799) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x00012291) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6231,	// (0x000087a1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6231,	// (0x000087a1) cell_fep_china_hwr2_fs_candidate_grid

0x6250,	// (0x000087c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6258,	// (0x000087c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x41ec,	// (0x0000675c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x41ec,	// (0x0000675c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000120b1) cell_fep_china_hwr2_fs_candidate_grid_g

0x6260,	// (0x000087d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0d81,	// (0x000032f1) clock_nsta_pane_cp_24_ParamLimits

0x0d81,	// (0x000032f1) clock_nsta_pane_cp_24

0x0e01,	// (0x00003371) indicator_nsta_pane_cp_24_ParamLimits

0x0e01,	// (0x00003371) indicator_nsta_pane_cp_24

0x225f,	// (0x000047cf) heading_pane_g1

0x0001,

0xf8ba,	// (0x00011e2a) heading_pane_g

0x2e8b,	// (0x000053fb) grid_sct_catagory_button_pane

0x2ebd,	// (0x0000542d) scroll_pane_cp5_ParamLimits

0x3de2,	// (0x00006352) button_value_adjust_pane_cp5_ParamLimits

0x3de2,	// (0x00006352) button_value_adjust_pane_cp5

0x3ee8,	// (0x00006458) form2_midp_time_pane_ParamLimits

0x626e,	// (0x000087de) cell_sct_catagory_button_pane_ParamLimits

0x626e,	// (0x000087de) cell_sct_catagory_button_pane

0x41b1,	// (0x00006721) bg_button_pane_cp01_ParamLimits

0x41b1,	// (0x00006721) bg_button_pane_cp01

0x41ec,	// (0x0000675c) cell_sct_catagory_button_pane_g1

0xaf0d,	// (0x0000d47d) popup_tb_extension_window

0xc8e1,	// (0x0000ee51) aid_size_cell_ext_ParamLimits

0xc8e1,	// (0x0000ee51) aid_size_cell_ext

0xe510,	// (0x00010a80) bg_tb_trans_pane_cp1_ParamLimits

0xe510,	// (0x00010a80) bg_tb_trans_pane_cp1

0xc907,	// (0x0000ee77) grid_tb_ext_pane_ParamLimits

0xc907,	// (0x0000ee77) grid_tb_ext_pane

0xc947,	// (0x0000eeb7) cell_tb_ext_pane_ParamLimits

0xc947,	// (0x0000eeb7) cell_tb_ext_pane

0xc96f,	// (0x0000eedf) cell_tb_ext_pane_g1_ParamLimits

0xc96f,	// (0x0000eedf) cell_tb_ext_pane_g1

0x6304,	// (0x00008874) cell_tb_ext_pane_t1

0xe2b3,	// (0x00010823) list_highlight_pane_cp11_ParamLimits

0xe2b3,	// (0x00010823) list_highlight_pane_cp11

0x97cd,	// (0x0000bd3d) popup_uni_indicator_window_ParamLimits

0x97cd,	// (0x0000bd3d) popup_uni_indicator_window

0xe833,	// (0x00010da3) bg_popup_sub_pane_cp14

0x631f,	// (0x0000888f) list_uniindi_pane

0x632b,	// (0x0000889b) uniindi_top_pane

0xe2b3,	// (0x00010823) bg_uniindi_top_pane

0x634c,	// (0x000088bc) uniindi_top_pane_g1

0x6362,	// (0x000088d2) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x00012298) uniindi_top_pane_g

0x638c,	// (0x000088fc) uniindi_top_pane_t1

0x63b8,	// (0x00008928) list_single_uniindi_pane_ParamLimits

0x63b8,	// (0x00008928) list_single_uniindi_pane

0x41ec,	// (0x0000675c) bg_uniindi_top_pane_g1

0x63ca,	// (0x0000893a) list_single_uniindi_pane_g1

0x63dd,	// (0x0000894d) list_single_uniindi_pane_t1

0xde94,	// (0x00010404) control_bg_pane

0x6402,	// (0x00008972) bg_sctrl_sk_pane_cp1

0x640b,	// (0x0000897b) bg_sctrl_sk_pane_cp2

0x6414,	// (0x00008984) control_bg_pane_g1

0x641d,	// (0x0000898d) control_bg_pane_g2

0x0001,

0xfd31,	// (0x000122a1) control_bg_pane_g

0x3bb8,	// (0x00006128) cell_indicator_nsta_pane_g1_ParamLimits

0xbca5,	// (0x0000e215) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00012015) cell_indicator_nsta_pane_g_ParamLimits

0x3f78,	// (0x000064e8) form2_midp_time_pane_t1_ParamLimits

0x424d,	// (0x000067bd) main_idle_act4_pane_ParamLimits

0x424d,	// (0x000067bd) main_idle_act4_pane

0xaf0d,	// (0x0000d47d) popup_tb_extension_window_ParamLimits

0xc92f,	// (0x0000ee9f) tb_ext_find_pane_ParamLimits

0xc92f,	// (0x0000ee9f) tb_ext_find_pane

0x6426,	// (0x00008996) ai_gene_pane_1_cp1

0x0220,	// (0x00002790) ai_gene_pane_2_cp1

0x642e,	// (0x0000899e) list_single_idle_plugin_calendar_pane

0x6437,	// (0x000089a7) list_single_idle_plugin_notification_pane

0x6440,	// (0x000089b0) list_single_idle_plugin_player_pane

0xc98c,	// (0x0000eefc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc98c,	// (0x0000eefc) list_single_idle_plugin_shortcut_pane

0xc9b4,	// (0x0000ef24) main_idle_act4_pane_t1

0xc9cc,	// (0x0000ef3c) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x000122a6) main_idle_act4_pane_t

0xc9e4,	// (0x0000ef54) middle_sk_idle_act4_pane_ParamLimits

0xc9e4,	// (0x0000ef54) middle_sk_idle_act4_pane

0xca00,	// (0x0000ef70) popup_clock_digital_analogue_window_cp2

0xca27,	// (0x0000ef97) shortcut_wheel_idle_act4_pane_ParamLimits

0xca27,	// (0x0000ef97) shortcut_wheel_idle_act4_pane

0x41ec,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g1

0x41ec,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g2

0x41ec,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g3

0x41ec,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g4

0x41ec,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g5

0x64d3,	// (0x00008a43) shortcut_wheel_idle_act4_pane_g6

0x64db,	// (0x00008a4b) shortcut_wheel_idle_act4_pane_g7

0x64e3,	// (0x00008a53) shortcut_wheel_idle_act4_pane_g8

0x64eb,	// (0x00008a5b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x000122ab) shortcut_wheel_idle_act4_pane_g

0x4304,	// (0x00006874) middle_sk_idle_act4_pane_g1_ParamLimits

0x4304,	// (0x00006874) middle_sk_idle_act4_pane_g1

0xcaa4,	// (0x0000f014) middle_sk_idle_act4_pane_g2_ParamLimits

0xcaa4,	// (0x0000f014) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x000122ce) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x000122ce) middle_sk_idle_act4_pane_g

0xcabc,	// (0x0000f02c) middle_sk_idle_act4_pane_t1_ParamLimits

0xcabc,	// (0x0000f02c) middle_sk_idle_act4_pane_t1

0xcaeb,	// (0x0000f05b) grid_ai_shortcut_pane_ParamLimits

0xcaeb,	// (0x0000f05b) grid_ai_shortcut_pane

0xcb08,	// (0x0000f078) list_highlight_pane_cp16_ParamLimits

0xcb08,	// (0x0000f078) list_highlight_pane_cp16

0xcb15,	// (0x0000f085) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcb15,	// (0x0000f085) list_single_idle_plugin_shortcut_pane_g1

0xcb21,	// (0x0000f091) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcb21,	// (0x0000f091) list_single_idle_plugin_shortcut_pane_g2

0xcb3f,	// (0x0000f0af) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcb3f,	// (0x0000f0af) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x000122d3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x000122d3) list_single_idle_plugin_shortcut_pane_g

0xcb54,	// (0x0000f0c4) cell_ai_shortcut_pane_ParamLimits

0xcb54,	// (0x0000f0c4) cell_ai_shortcut_pane

0xcb6a,	// (0x0000f0da) cell_ai_shortcut_pane_g1_ParamLimits

0xcb6a,	// (0x0000f0da) cell_ai_shortcut_pane_g1

0x6426,	// (0x00008996) ai_gene_pane_1_cp2

0x661c,	// (0x00008b8c) ai_gene_pane_2_cp2

0x6624,	// (0x00008b94) list_highlight_pane_cp15

0x662d,	// (0x00008b9d) list_single_idle_plugin_calendar_pane_g1

0x6624,	// (0x00008b94) list_highlight_pane_cp17

0x6635,	// (0x00008ba5) list_single_idle_plugin_calendar_pane_g1_copy1

0x663d,	// (0x00008bad) list_single_idle_plugin_player_pane_g1

0x31aa,	// (0x0000571a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x000122da) list_single_idle_plugin_player_pane_g

0x6645,	// (0x00008bb5) list_single_idle_plugin_player_pane_t1

0x6653,	// (0x00008bc3) list_single_idle_plugin_player_pane_t2

0x6661,	// (0x00008bd1) list_single_idle_plugin_player_pane_t3

0x666f,	// (0x00008bdf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x000122df) list_single_idle_plugin_player_pane_t

0x667d,	// (0x00008bed) wait_bar_pane_cp15

0x6685,	// (0x00008bf5) grid_ai_notification_pane

0x31aa,	// (0x0000571a) list_single_idle_plugin_notification_pane_g1

0xcb8c,	// (0x0000f0fc) cell_ai_notification_pane_ParamLimits

0xcb8c,	// (0x0000f0fc) cell_ai_notification_pane

0x669b,	// (0x00008c0b) cell_ai_notification_pane_g1

0x66a3,	// (0x00008c13) cell_ai_notification_pane_t1

0xcb99,	// (0x0000f109) tb_ext_find_button_pane

0xcba1,	// (0x0000f111) tb_ext_find_pane_g1

0xcba9,	// (0x0000f119) tb_ext_find_pane_t1

0xef8d,	// (0x000114fd) tb_ext_find_button_pane_g1

0x66cf,	// (0x00008c3f) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x000122e8) tb_ext_find_button_pane_g

0xc9b4,	// (0x0000ef24) main_idle_act4_pane_t1_ParamLimits

0xc9cc,	// (0x0000ef3c) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x000122a6) main_idle_act4_pane_t_ParamLimits

0xca00,	// (0x0000ef70) popup_clock_digital_analogue_window_cp2_ParamLimits

0xca17,	// (0x0000ef87) sat_plugin_idle_act4_pane_ParamLimits

0xca17,	// (0x0000ef87) sat_plugin_idle_act4_pane

0xcbb7,	// (0x0000f127) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcbb7,	// (0x0000f127) sat_plugin_idle_act4_pane_t1

0xcbcf,	// (0x0000f13f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcbcf,	// (0x0000f13f) sat_plugin_idle_act4_pane_t2

0xcbe7,	// (0x0000f157) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcbe7,	// (0x0000f157) sat_plugin_idle_act4_pane_t3

0xcbff,	// (0x0000f16f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcbff,	// (0x0000f16f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x000122ed) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x000122ed) sat_plugin_idle_act4_pane_t

0xe021,	// (0x00010591) popup_battery_window_ParamLimits

0xe021,	// (0x00010591) popup_battery_window

0xe2b3,	// (0x00010823) bg_popup_sub_pane_cp25_ParamLimits

0xe2b3,	// (0x00010823) bg_popup_sub_pane_cp25

0x6724,	// (0x00008c94) popup_battery_window_g1_ParamLimits

0x6724,	// (0x00008c94) popup_battery_window_g1

0x6730,	// (0x00008ca0) popup_battery_window_t1_ParamLimits

0x6730,	// (0x00008ca0) popup_battery_window_t1

0x6742,	// (0x00008cb2) popup_battery_window_t2_ParamLimits

0x6742,	// (0x00008cb2) popup_battery_window_t2

0x0001,

0xfd86,	// (0x000122f6) popup_battery_window_t_ParamLimits

0xfd86,	// (0x000122f6) popup_battery_window_t

0xa5b0,	// (0x0000cb20) midp_canvas_pane_ParamLimits

0xa60b,	// (0x0000cb7b) midp_keypad_pane_ParamLimits

0xa60b,	// (0x0000cb7b) midp_keypad_pane

0x065c,	// (0x00002bcc) main_midp_pane_ParamLimits

0x3c44,	// (0x000061b4) signal_pane_g2_cp_ParamLimits

0xcc17,	// (0x0000f187) aid_size_cell_midp_keypad_ParamLimits

0xcc17,	// (0x0000f187) aid_size_cell_midp_keypad

0xcc35,	// (0x0000f1a5) midp_keyp_game_grid_pane_ParamLimits

0xcc35,	// (0x0000f1a5) midp_keyp_game_grid_pane

0xcc5c,	// (0x0000f1cc) midp_keyp_rocker_pane_ParamLimits

0xcc5c,	// (0x0000f1cc) midp_keyp_rocker_pane

0xcc9b,	// (0x0000f20b) midp_keyp_sk_left_pane_ParamLimits

0xcc9b,	// (0x0000f20b) midp_keyp_sk_left_pane

0xccef,	// (0x0000f25f) midp_keyp_sk_right_pane_ParamLimits

0xccef,	// (0x0000f25f) midp_keyp_sk_right_pane

0xde94,	// (0x00010404) bg_button_pane_cp03

0xcd43,	// (0x0000f2b3) midp_keyp_sk_left_pane_g1

0xde94,	// (0x00010404) bg_button_pane_cp04

0xcd43,	// (0x0000f2b3) midp_keyp_sk_right_pane_g1

0x41ec,	// (0x0000675c) midp_keyp_rocker_pane_g1

0xcd4c,	// (0x0000f2bc) keyp_game_cell_pane_ParamLimits

0xcd4c,	// (0x0000f2bc) keyp_game_cell_pane

0xde94,	// (0x00010404) bg_button_pane_cp02

0xcd72,	// (0x0000f2e2) keyp_game_cell_pane_g1

0x9764,	// (0x0000bcd4) popup_fep_vkb2_window_ParamLimits

0x9764,	// (0x0000bcd4) popup_fep_vkb2_window

0xcd7b,	// (0x0000f2eb) aid_size_cell_vkb2_ParamLimits

0xcd7b,	// (0x0000f2eb) aid_size_cell_vkb2

0xcdb1,	// (0x0000f321) popup_fep_vkb2_window_g1_ParamLimits

0xcdb1,	// (0x0000f321) popup_fep_vkb2_window_g1

0xce01,	// (0x0000f371) vkb2_area_bottom_pane_ParamLimits

0xce01,	// (0x0000f371) vkb2_area_bottom_pane

0xce5d,	// (0x0000f3cd) vkb2_area_keypad_pane_ParamLimits

0xce5d,	// (0x0000f3cd) vkb2_area_keypad_pane

0xceab,	// (0x0000f41b) vkb2_area_top_pane_ParamLimits

0xceab,	// (0x0000f41b) vkb2_area_top_pane

0xcf31,	// (0x0000f4a1) vkb2_top_entry_pane_ParamLimits

0xcf31,	// (0x0000f4a1) vkb2_top_entry_pane

0xcf5e,	// (0x0000f4ce) vkb2_top_grid_left_pane_ParamLimits

0xcf5e,	// (0x0000f4ce) vkb2_top_grid_left_pane

0xcf7e,	// (0x0000f4ee) vkb2_top_grid_right_pane_ParamLimits

0xcf7e,	// (0x0000f4ee) vkb2_top_grid_right_pane

0x6ac1,	// (0x00009031) vkb2_cell_keypad_pane_ParamLimits

0x6ac1,	// (0x00009031) vkb2_cell_keypad_pane

0xcfc4,	// (0x0000f534) vkb2_area_bottom_grid_pane_ParamLimits

0xcfc4,	// (0x0000f534) vkb2_area_bottom_grid_pane

0xcfee,	// (0x0000f55e) vkb2_area_bottom_pane_g1_ParamLimits

0xcfee,	// (0x0000f55e) vkb2_area_bottom_pane_g1

0xd014,	// (0x0000f584) vkb2_area_bottom_pane_g2_ParamLimits

0xd014,	// (0x0000f584) vkb2_area_bottom_pane_g2

0xd045,	// (0x0000f5b5) vkb2_area_bottom_pane_g3_ParamLimits

0xd045,	// (0x0000f5b5) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x000122fb) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x000122fb) vkb2_area_bottom_pane_g

0x6c6b,	// (0x000091db) vkb2_top_cell_left_pane_ParamLimits

0x6c6b,	// (0x000091db) vkb2_top_cell_left_pane

0xd0af,	// (0x0000f61f) vkb2_top_entry_pane_g1_ParamLimits

0xd0af,	// (0x0000f61f) vkb2_top_entry_pane_g1

0xd0bd,	// (0x0000f62d) vkb2_top_entry_pane_t1_ParamLimits

0xd0bd,	// (0x0000f62d) vkb2_top_entry_pane_t1

0x6cd3,	// (0x00009243) vkb2_top_entry_pane_t2_ParamLimits

0x6cd3,	// (0x00009243) vkb2_top_entry_pane_t2

0x6d05,	// (0x00009275) vkb2_top_entry_pane_t3_ParamLimits

0x6d05,	// (0x00009275) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x00012302) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x00012302) vkb2_top_entry_pane_t

0xd0f6,	// (0x0000f666) vkb2_top_grid_right_pane_g1_ParamLimits

0xd0f6,	// (0x0000f666) vkb2_top_grid_right_pane_g1

0x6d6c,	// (0x000092dc) vkb2_top_grid_right_pane_g2_ParamLimits

0x6d6c,	// (0x000092dc) vkb2_top_grid_right_pane_g2

0x6d84,	// (0x000092f4) vkb2_top_grid_right_pane_g3_ParamLimits

0x6d84,	// (0x000092f4) vkb2_top_grid_right_pane_g3

0xd10c,	// (0x0000f67c) vkb2_top_grid_right_pane_g4_ParamLimits

0xd10c,	// (0x0000f67c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00012309) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00012309) vkb2_top_grid_right_pane_g

0x6db2,	// (0x00009322) vkb2_top_cell_left_pane_g1

0x6dc9,	// (0x00009339) vkb2_cell_keypad_pane_g1_ParamLimits

0x6dc9,	// (0x00009339) vkb2_cell_keypad_pane_g1

0x6dd7,	// (0x00009347) vkb2_cell_keypad_pane_t1_ParamLimits

0x6dd7,	// (0x00009347) vkb2_cell_keypad_pane_t1

0x6dee,	// (0x0000935e) vkb2_cell_bottom_grid_pane_ParamLimits

0x6dee,	// (0x0000935e) vkb2_cell_bottom_grid_pane

0x6e27,	// (0x00009397) vkb2_cell_bottom_grid_pane_g1

0xca48,	// (0x0000efb8) aid_call2_pane_cp02

0xca50,	// (0x0000efc0) aid_call_pane_cp02

0xca58,	// (0x0000efc8) clock_digital_number_pane_cp10

0xca60,	// (0x0000efd0) clock_digital_number_pane_cp11

0xca68,	// (0x0000efd8) clock_digital_number_pane_cp12

0xca70,	// (0x0000efe0) clock_digital_number_pane_cp13

0xca78,	// (0x0000efe8) clock_digital_separator_pane_cp10

0xef8d,	// (0x000114fd) popup_clock_digital_analogue_window_cp2_g1

0xef8d,	// (0x000114fd) popup_clock_digital_analogue_window_cp2_g2

0xca80,	// (0x0000eff0) popup_clock_digital_analogue_window_cp2_g3

0xef8d,	// (0x000114fd) popup_clock_digital_analogue_window_cp2_g4

0xca80,	// (0x0000eff0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x000122be) popup_clock_digital_analogue_window_cp2_g

0xca88,	// (0x0000eff8) popup_clock_digital_analogue_window_cp2_t1

0xca96,	// (0x0000f006) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x000122c9) popup_clock_digital_analogue_window_cp2_t

0x41ec,	// (0x0000675c) clock_digital_number_pane_cp10_g1

0x41ec,	// (0x0000675c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000120b1) clock_digital_number_pane_cp10_g

0x41ec,	// (0x0000675c) clock_digital_separator_pane_cp10_g1

0x41ec,	// (0x0000675c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000120b1) clock_digital_separator_pane_cp10_g

0x636e,	// (0x000088de) uniindi_top_pane_g3

0x637f,	// (0x000088ef) uniindi_top_pane_g4

0x6b4c,	// (0x000090bc) vkb2_row_keypad_pane_ParamLimits

0x6b4c,	// (0x000090bc) vkb2_row_keypad_pane

0x6e43,	// (0x000093b3) vkb2_cell_t_keypad_pane_ParamLimits

0x6e43,	// (0x000093b3) vkb2_cell_t_keypad_pane

0x6e53,	// (0x000093c3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6e53,	// (0x000093c3) vkb2_cell_t_keypad_pane_cp08

0x6e68,	// (0x000093d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6e68,	// (0x000093d8) vkb2_cell_t_keypad_pane_cp09

0x6e7c,	// (0x000093ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6e7c,	// (0x000093ec) vkb2_cell_t_keypad_pane_cp01

0x6e8d,	// (0x000093fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6e8d,	// (0x000093fd) vkb2_cell_t_keypad_pane_cp02

0x6e9e,	// (0x0000940e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6e9e,	// (0x0000940e) vkb2_cell_t_keypad_pane_cp03

0x6eaf,	// (0x0000941f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6eaf,	// (0x0000941f) vkb2_cell_t_keypad_pane_cp04

0x6ec0,	// (0x00009430) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6ec0,	// (0x00009430) vkb2_cell_t_keypad_pane_cp05

0x6ed1,	// (0x00009441) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6ed1,	// (0x00009441) vkb2_cell_t_keypad_pane_cp06

0x6ee4,	// (0x00009454) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6ee4,	// (0x00009454) vkb2_cell_t_keypad_pane_cp07

0x6ef9,	// (0x00009469) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6ef9,	// (0x00009469) vkb2_cell_t_keypad_pane_cp10

0x4691,	// (0x00006c01) vkb2_cell_t_keypad_pane_g1

0x6f0e,	// (0x0000947e) vkb2_cell_t_keypad_pane_t1

0xde94,	// (0x00010404) popup_grid_graphic2_window

0xd122,	// (0x0000f692) aid_size_cell_graphic2_ParamLimits

0xd122,	// (0x0000f692) aid_size_cell_graphic2

0xd160,	// (0x0000f6d0) bg_popup_window_pane_cp21_ParamLimits

0xd160,	// (0x0000f6d0) bg_popup_window_pane_cp21

0xd16e,	// (0x0000f6de) graphic2_pages_pane_ParamLimits

0xd16e,	// (0x0000f6de) graphic2_pages_pane

0xd1c6,	// (0x0000f736) grid_graphic2_control_pane_ParamLimits

0xd1c6,	// (0x0000f736) grid_graphic2_control_pane

0xd20e,	// (0x0000f77e) grid_graphic2_pane_ParamLimits

0xd20e,	// (0x0000f77e) grid_graphic2_pane

0xd299,	// (0x0000f809) cell_graphic2_pane

0xde94,	// (0x00010404) main_comp_mode_pane

0x5aa8,	// (0x00008018) list_ai3_gene_pane_ParamLimits

0xc718,	// (0x0000ec88) bg_popup_window_pane_cp19_ParamLimits

0x5edf,	// (0x0000844f) bg_touch_area_indi_pane_ParamLimits

0x5edf,	// (0x0000844f) bg_touch_area_indi_pane

0x5ef5,	// (0x00008465) bg_touch_area_indi_pane_cp01_ParamLimits

0x5ef5,	// (0x00008465) bg_touch_area_indi_pane_cp01

0x5f0d,	// (0x0000847d) bg_touch_area_indi_pane_cp02_ParamLimits

0x5f0d,	// (0x0000847d) bg_touch_area_indi_pane_cp02

0x5f27,	// (0x00008497) bg_touch_area_indi_pane_cp03_ParamLimits

0x5f27,	// (0x00008497) bg_touch_area_indi_pane_cp03

0x5f41,	// (0x000084b1) popup_slider_window_g1_ParamLimits

0x5f5d,	// (0x000084cd) popup_slider_window_g2_ParamLimits

0x5f79,	// (0x000084e9) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x00012253) popup_slider_window_g_ParamLimits

0x5fd5,	// (0x00008545) popup_slider_window_t1_ParamLimits

0x6049,	// (0x000085b9) small_volume_slider_vertical_pane_ParamLimits

0xd299,	// (0x0000f809) cell_graphic2_pane_ParamLimits

0xd2fc,	// (0x0000f86c) bg_button_pane_cp10_ParamLimits

0xd2fc,	// (0x0000f86c) bg_button_pane_cp10

0xd30f,	// (0x0000f87f) bg_button_pane_cp11_ParamLimits

0xd30f,	// (0x0000f87f) bg_button_pane_cp11

0xd322,	// (0x0000f892) graphic2_pages_pane_g1_ParamLimits

0xd322,	// (0x0000f892) graphic2_pages_pane_g1

0xd33d,	// (0x0000f8ad) graphic2_pages_pane_g2_ParamLimits

0xd33d,	// (0x0000f8ad) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00012317) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00012317) graphic2_pages_pane_g

0xd355,	// (0x0000f8c5) graphic2_pages_pane_t1_ParamLimits

0xd355,	// (0x0000f8c5) graphic2_pages_pane_t1

0xd36d,	// (0x0000f8dd) cell_graphic2_control_pane_ParamLimits

0xd36d,	// (0x0000f8dd) cell_graphic2_control_pane

0xd3a1,	// (0x0000f911) cell_graphic2_pane_g1_ParamLimits

0xd3a1,	// (0x0000f911) cell_graphic2_pane_g1

0x44b3,	// (0x00006a23) cell_graphic2_pane_g2_ParamLimits

0x44b3,	// (0x00006a23) cell_graphic2_pane_g2

0xd3ae,	// (0x0000f91e) cell_graphic2_pane_g3_ParamLimits

0xd3ae,	// (0x0000f91e) cell_graphic2_pane_g3

0x44c0,	// (0x00006a30) cell_graphic2_pane_g4_ParamLimits

0x44c0,	// (0x00006a30) cell_graphic2_pane_g4

0xd3bb,	// (0x0000f92b) cell_graphic2_pane_g5_ParamLimits

0xd3bb,	// (0x0000f92b) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0001231c) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0001231c) cell_graphic2_pane_g

0xd3db,	// (0x0000f94b) cell_graphic2_pane_t1_ParamLimits

0xd3db,	// (0x0000f94b) cell_graphic2_pane_t1

0x2253,	// (0x000047c3) grid_highlight_pane_cp11_ParamLimits

0x2253,	// (0x000047c3) grid_highlight_pane_cp11

0xe2b3,	// (0x00010823) bg_button_pane_cp05

0xd410,	// (0x0000f980) cell_graphic2_control_pane_g1

0x41ec,	// (0x0000675c) bg_touch_area_indi_pane_g1

0x71e8,	// (0x00009758) aid_cmod_rocker_key_size

0x71f2,	// (0x00009762) aid_cmode_itu_key_size

0x71fc,	// (0x0000976c) main_cmode_video_pane

0x7206,	// (0x00009776) main_comp_mode_itu_pane

0x7212,	// (0x00009782) main_comp_mode_rocker_pane

0x721e,	// (0x0000978e) cell_cmode_rocker_pane_ParamLimits

0x721e,	// (0x0000978e) cell_cmode_rocker_pane

0x7232,	// (0x000097a2) cell_cmode_itu_pane_ParamLimits

0x7232,	// (0x000097a2) cell_cmode_itu_pane

0xe833,	// (0x00010da3) bg_button_pane_cp06_ParamLimits

0xe833,	// (0x00010da3) bg_button_pane_cp06

0x4691,	// (0x00006c01) cell_cmode_rocker_pane_g1_ParamLimits

0x4691,	// (0x00006c01) cell_cmode_rocker_pane_g1

0x61c4,	// (0x00008734) cell_cmode_rocker_pane_g2_ParamLimits

0x61c4,	// (0x00008734) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0001232c) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0001232c) cell_cmode_rocker_pane_g

0xde94,	// (0x00010404) bg_button_pane_cp07

0x7249,	// (0x000097b9) cell_cmode_itu_pane_g1

0x7252,	// (0x000097c2) cell_cmode_itu_pane_t1

0x7260,	// (0x000097d0) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x00012331) cell_cmode_itu_pane_t

0x63f2,	// (0x00008962) aid_touch_ctrl_left

0x63fa,	// (0x0000896a) aid_touch_ctrl_right

0xde94,	// (0x00010404) compa_mode_pane

0xd436,	// (0x0000f9a6) aid_cmod_rocker_key_size_cp

0xd440,	// (0x0000f9b0) aid_cmode_itu_key_size_cp

0x7282,	// (0x000097f2) compa_mode_pane_g1

0x728a,	// (0x000097fa) compa_mode_pane_g2

0x7292,	// (0x00009802) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x00012336) compa_mode_pane_g

0xd44a,	// (0x0000f9ba) main_comp_mode_itu_pane_cp

0xd452,	// (0x0000f9c2) main_comp_mode_rocker_pane_cp

0xd45a,	// (0x0000f9ca) cell_cmode_itu_pane_cp_ParamLimits

0xd45a,	// (0x0000f9ca) cell_cmode_itu_pane_cp

0xd46f,	// (0x0000f9df) cell_cmode_rocker_pane_cp_ParamLimits

0xd46f,	// (0x0000f9df) cell_cmode_rocker_pane_cp

0xe833,	// (0x00010da3) bg_button_pane_cp06_cp_ParamLimits

0xe833,	// (0x00010da3) bg_button_pane_cp06_cp

0x4691,	// (0x00006c01) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4691,	// (0x00006c01) cell_cmode_rocker_pane_g1_cp

0x41ec,	// (0x0000675c) cell_cmode_rocker_pane_g2_cp

0xde94,	// (0x00010404) bg_button_pane_cp07_cp

0xd481,	// (0x0000f9f1) cell_cmode_itu_pane_g1_cp

0xd48a,	// (0x0000f9fa) cell_cmode_itu_pane_t1_cp

0xd48a,	// (0x0000f9fa) cell_cmode_itu_pane_t2_cp

0xbaa6,	// (0x0000e016) settings_code_pane_cp2

0xe0dd,	// (0x0001064d) bg_popup_window_pane_cp3_ParamLimits

0xe4a1,	// (0x00010a11) heading_pane_cp3_ParamLimits

0xe4ad,	// (0x00010a1d) listscroll_popup_graphic_pane_ParamLimits

0x425b,	// (0x000067cb) fep_hwr_aid_pane_ParamLimits

0x60c5,	// (0x00008635) aid_touch_sctrl_top_ParamLimits

0x60d2,	// (0x00008642) sctrl_sk_top_pane_g1_ParamLimits

0x4691,	// (0x00006c01) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0001226c) sctrl_sk_top_pane_g_ParamLimits

0x60df,	// (0x0000864f) sctrl_sk_top_pane_t1_ParamLimits

0x60c5,	// (0x00008635) aid_touch_sctrl_bottom_ParamLimits

0x60df,	// (0x0000864f) sctrl_sk_bottom_pane_t1_ParamLimits

0x6338,	// (0x000088a8) aid_area_touch_clock

0xcef3,	// (0x0000f463) aid_vkb2_area_top_pane_cell_ParamLimits

0xcef3,	// (0x0000f463) aid_vkb2_area_top_pane_cell

0xcf9e,	// (0x0000f50e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf9e,	// (0x0000f50e) aid_vkb2_area_bottom_pane_cell

0x6c8b,	// (0x000091fb) popup_char_count_window

0x72e8,	// (0x00009858) popup_char_count_window_g1

0x72f1,	// (0x00009861) popup_char_count_window_g2

0x72fa,	// (0x0000986a) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0001233d) popup_char_count_window_g

0x7303,	// (0x00009873) popup_char_count_window_t1

0x68dd,	// (0x00008e4d) popup_fep_char_preview_window_ParamLimits

0x68dd,	// (0x00008e4d) popup_fep_char_preview_window

0xcf13,	// (0x0000f483) vkb2_top_candi_pane_ParamLimits

0xcf13,	// (0x0000f483) vkb2_top_candi_pane

0xd498,	// (0x0000fa08) cell_vkb2_top_candi_pane_ParamLimits

0xd498,	// (0x0000fa08) cell_vkb2_top_candi_pane

0x1a81,	// (0x00003ff1) bg_popup_fep_char_preview_window_ParamLimits

0x1a81,	// (0x00003ff1) bg_popup_fep_char_preview_window

0x7362,	// (0x000098d2) popup_fep_char_preview_window_t1_ParamLimits

0x7362,	// (0x000098d2) popup_fep_char_preview_window_t1

0x739c,	// (0x0000990c) bg_popup_fep_char_preview_window_g1

0x73a4,	// (0x00009914) bg_popup_fep_char_preview_window_g2

0x73ac,	// (0x0000991c) bg_popup_fep_char_preview_window_g3

0x73b4,	// (0x00009924) bg_popup_fep_char_preview_window_g4

0x73bc,	// (0x0000992c) bg_popup_fep_char_preview_window_g5

0x73c4,	// (0x00009934) bg_popup_fep_char_preview_window_g6

0x73cc,	// (0x0000993c) bg_popup_fep_char_preview_window_g7

0x73d4,	// (0x00009944) bg_popup_fep_char_preview_window_g8

0x73dc,	// (0x0000994c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x00012344) bg_popup_fep_char_preview_window_g

0x4691,	// (0x00006c01) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4691,	// (0x00006c01) cell_vkb2_top_candi_pane_g1

0x4a26,	// (0x00006f96) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4a26,	// (0x00006f96) cell_vkb2_top_candi_pane_g2

0x4a47,	// (0x00006fb7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4a47,	// (0x00006fb7) cell_vkb2_top_candi_pane_g3

0x73e4,	// (0x00009954) cell_vkb2_top_candi_pane_g4_ParamLimits

0x73e4,	// (0x00009954) cell_vkb2_top_candi_pane_g4

0x7405,	// (0x00009975) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7405,	// (0x00009975) cell_vkb2_top_candi_pane_g5

0x61c4,	// (0x00008734) cell_vkb2_top_candi_pane_g6_ParamLimits

0x61c4,	// (0x00008734) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00012357) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00012357) cell_vkb2_top_candi_pane_g

0x7426,	// (0x00009996) cell_vkb2_top_candi_pane_t1

0x29a4,	// (0x00004f14) aid_size_touch_slider_mark_ParamLimits

0x29a4,	// (0x00004f14) aid_size_touch_slider_mark

0xd1aa,	// (0x0000f71a) grid_graphic2_catg_pane_ParamLimits

0xd1aa,	// (0x0000f71a) grid_graphic2_catg_pane

0xd268,	// (0x0000f7d8) popup_grid_graphic2_window_t1_ParamLimits

0xd268,	// (0x0000f7d8) popup_grid_graphic2_window_t1

0xd27e,	// (0x0000f7ee) popup_grid_graphic2_window_t2_ParamLimits

0xd27e,	// (0x0000f7ee) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x00012312) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x00012312) popup_grid_graphic2_window_t

0xe2b3,	// (0x00010823) bg_button_pane_cp05_ParamLimits

0xd410,	// (0x0000f980) cell_graphic2_control_pane_g1_ParamLimits

0xd502,	// (0x0000fa72) cell_graphic2_catg_pane_ParamLimits

0xd502,	// (0x0000fa72) cell_graphic2_catg_pane

0xde94,	// (0x00010404) bg_button_pane_cp12

0xd514,	// (0x0000fa84) cell_graphic2_catg_pane_g1

0x6304,	// (0x00008874) cell_tb_ext_pane_t1_ParamLimits

0x6d29,	// (0x00009299) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d29,	// (0x00009299) vkb2_top_cell_right_narrow_pane

0x6d41,	// (0x000092b1) vkb2_top_cell_right_wide_pane_ParamLimits

0x6d41,	// (0x000092b1) vkb2_top_cell_right_wide_pane

0x424d,	// (0x000067bd) bg_vkb2_func_pane_ParamLimits

0x424d,	// (0x000067bd) bg_vkb2_func_pane

0x6db2,	// (0x00009322) vkb2_top_cell_left_pane_g1_ParamLimits

0x424d,	// (0x000067bd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x424d,	// (0x000067bd) bg_vkb2_fuc_pane_cp03

0x6e27,	// (0x00009397) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1253,	// (0x000037c3) bg_vkb2_func_pane_g1

0x125b,	// (0x000037cb) bg_vkb2_func_pane_g2

0x126b,	// (0x000037db) bg_vkb2_func_pane_g3

0x1263,	// (0x000037d3) bg_vkb2_func_pane_g4

0x1273,	// (0x000037e3) bg_vkb2_func_pane_g5

0x127b,	// (0x000037eb) bg_vkb2_func_pane_g6

0x1283,	// (0x000037f3) bg_vkb2_func_pane_g7

0x128b,	// (0x000037fb) bg_vkb2_func_pane_g8

0x124b,	// (0x000037bb) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x00012364) bg_vkb2_func_pane_g

0x424d,	// (0x000067bd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x424d,	// (0x000067bd) bg_vkb2_fuc_pane_cp01

0x6db2,	// (0x00009322) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6db2,	// (0x00009322) vkb2_top_cell_right_wide_pane_g1

0x424d,	// (0x000067bd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x424d,	// (0x000067bd) bg_vkb2_fuc_pane_cp02

0x6e27,	// (0x00009397) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e27,	// (0x00009397) vkb2_top_cell_right_narrow_pane_g1

0xc652,	// (0x0000ebc2) aid_touch_area_decrease_ParamLimits

0xc652,	// (0x0000ebc2) aid_touch_area_decrease

0xc68c,	// (0x0000ebfc) aid_touch_area_increase_ParamLimits

0xc68c,	// (0x0000ebfc) aid_touch_area_increase

0xc6b4,	// (0x0000ec24) aid_touch_area_mute_ParamLimits

0xc6b4,	// (0x0000ec24) aid_touch_area_mute

0xc6e4,	// (0x0000ec54) aid_touch_area_slider_ParamLimits

0xc6e4,	// (0x0000ec54) aid_touch_area_slider

0xc724,	// (0x0000ec94) popup_slider_window_g4_ParamLimits

0xc724,	// (0x0000ec94) popup_slider_window_g4

0xc74c,	// (0x0000ecbc) popup_slider_window_g5_ParamLimits

0xc74c,	// (0x0000ecbc) popup_slider_window_g5

0xc780,	// (0x0000ecf0) popup_slider_window_g6_ParamLimits

0xc780,	// (0x0000ecf0) popup_slider_window_g6

0x6003,	// (0x00008573) popup_slider_window_t2_ParamLimits

0x6003,	// (0x00008573) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x00012260) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x00012260) popup_slider_window_t

0xc79c,	// (0x0000ed0c) slider_pane_ParamLimits

0xc79c,	// (0x0000ed0c) slider_pane

0x745f,	// (0x000099cf) slider_pane_g1_ParamLimits

0x745f,	// (0x000099cf) slider_pane_g1

0x7473,	// (0x000099e3) slider_pane_g2_ParamLimits

0x7473,	// (0x000099e3) slider_pane_g2

0x7489,	// (0x000099f9) slider_pane_g3_ParamLimits

0x7489,	// (0x000099f9) slider_pane_g3

0x0003,

0xfe07,	// (0x00012377) slider_pane_g_ParamLimits

0xfe07,	// (0x00012377) slider_pane_g

0xaf59,	// (0x0000d4c9) popup_tb_float_extension_window_ParamLimits

0xaf59,	// (0x0000d4c9) popup_tb_float_extension_window

0x74b5,	// (0x00009a25) aid_size_cell_tb_float_ext

0xde94,	// (0x00010404) bg_popup_sub_window_cp28

0x74c1,	// (0x00009a31) grid_tb_float_ext_pane

0x74cd,	// (0x00009a3d) cell_tb_float_ext_pane_ParamLimits

0x74cd,	// (0x00009a3d) cell_tb_float_ext_pane

0x74e9,	// (0x00009a59) cell_tb_float_ext_pane_g1

0x74f2,	// (0x00009a62) grid_highlight_pane_cp12

0xbecc,	// (0x0000e43c) cell_last_hwr_side_pane_ParamLimits

0xbecc,	// (0x0000e43c) cell_last_hwr_side_pane

0x41ec,	// (0x0000675c) cell_last_hwr_side_pane_g1

0x74fb,	// (0x00009a6b) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x00012380) cell_last_hwr_side_pane_g

0xd07a,	// (0x0000f5ea) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd07a,	// (0x0000f5ea) vkb2_area_bottom_space_btn_pane

0x4691,	// (0x00006c01) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6f0e,	// (0x0000947e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7426,	// (0x00009996) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7504,	// (0x00009a74) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7504,	// (0x00009a74) vkb2_area_bottom_space_btn_pane_g1

0x753e,	// (0x00009aae) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x753e,	// (0x00009aae) vkb2_area_bottom_space_btn_pane_g2

0x7574,	// (0x00009ae4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7574,	// (0x00009ae4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x00012385) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x00012385) vkb2_area_bottom_space_btn_pane_g

0x4312,	// (0x00006882) cel_fep_hwr_func_pane_ParamLimits

0x4312,	// (0x00006882) cel_fep_hwr_func_pane

0xbea1,	// (0x0000e411) cell_hwr_side_button_pane_ParamLimits

0xbea1,	// (0x0000e411) cell_hwr_side_button_pane

0x6338,	// (0x000088a8) aid_area_touch_clock_ParamLimits

0xe2b3,	// (0x00010823) bg_uniindi_top_pane_ParamLimits

0x634c,	// (0x000088bc) uniindi_top_pane_g1_ParamLimits

0x6362,	// (0x000088d2) uniindi_top_pane_g2_ParamLimits

0x636e,	// (0x000088de) uniindi_top_pane_g3_ParamLimits

0x637f,	// (0x000088ef) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x00012298) uniindi_top_pane_g_ParamLimits

0x638c,	// (0x000088fc) uniindi_top_pane_t1_ParamLimits

0xe2b3,	// (0x00010823) bg_vkb2_func_pane_cp01_ParamLimits

0xe2b3,	// (0x00010823) bg_vkb2_func_pane_cp01

0x75be,	// (0x00009b2e) cel_fep_hwr_func_pane_g1_ParamLimits

0x75be,	// (0x00009b2e) cel_fep_hwr_func_pane_g1

0xe2b3,	// (0x00010823) bg_vkb2_func_pane_cp02_ParamLimits

0xe2b3,	// (0x00010823) bg_vkb2_func_pane_cp02

0x75be,	// (0x00009b2e) cell_hwr_side_button_pane_g1_ParamLimits

0x75be,	// (0x00009b2e) cell_hwr_side_button_pane_g1

0x1026,	// (0x00003596) status_pane_g4_ParamLimits

0x1026,	// (0x00003596) status_pane_g4

0x1040,	// (0x000035b0) status_pane_t1

0x3f8b,	// (0x000064fb) form2_midp_gauge_slider_cont_pane

0x3f93,	// (0x00006503) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbde7,	// (0x0000e357) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdf9,	// (0x0000e369) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00012064) form2_midp_gauge_slider_pane_t_ParamLimits

0x3fc9,	// (0x00006539) form2_midp_slider_pane_ParamLimits

0x689d,	// (0x00008e0d) aid_size_cell_func_vkb2_ParamLimits

0x689d,	// (0x00008e0d) aid_size_cell_func_vkb2

0x74a1,	// (0x00009a11) slider_pane_g4_ParamLimits

0x74a1,	// (0x00009a11) slider_pane_g4

0xd51d,	// (0x0000fa8d) form2_midp_gauge_slider_pane_t2_cp01

0xd52b,	// (0x0000fa9b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd52b,	// (0x0000fa9b) form2_midp_gauge_slider_pane_t3_cp01

0x75f7,	// (0x00009b67) form2_midp_slider_pane_cp01

0xde94,	// (0x00010404) navi_smil_pane

0x762b,	// (0x00009b9b) navi_smil_pane_g1

0x7633,	// (0x00009ba3) navi_smil_pane_t1

0x7600,	// (0x00009b70) form2_midp_slider_pane_g1

0x7609,	// (0x00009b79) form2_midp_slider_pane_g2

0x7611,	// (0x00009b81) form2_midp_slider_pane_g3

0x7600,	// (0x00009b70) form2_midp_slider_pane_g4

0xd548,	// (0x0000fab8) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0001238e) form2_midp_slider_pane_g

0x75ae,	// (0x00009b1e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x75ae,	// (0x00009b1e) vkb2_area_bottom_space_btn_pane_g4

0xb140,	// (0x0000d6b0) lc0_navi_pane_ParamLimits

0xb140,	// (0x0000d6b0) lc0_navi_pane

0xb1b0,	// (0x0000d720) lc0_stat_indi_pane_ParamLimits

0xb1b0,	// (0x0000d720) lc0_stat_indi_pane

0xb1c5,	// (0x0000d735) ls0_title_pane_ParamLimits

0xb1c5,	// (0x0000d735) ls0_title_pane

0xe833,	// (0x00010da3) bg_popup_sub_pane_cp14_ParamLimits

0x631f,	// (0x0000888f) list_uniindi_pane_ParamLimits

0x632b,	// (0x0000889b) uniindi_top_pane_ParamLimits

0x63ca,	// (0x0000893a) list_single_uniindi_pane_g1_ParamLimits

0x63dd,	// (0x0000894d) list_single_uniindi_pane_t1_ParamLimits

0xd551,	// (0x0000fac1) lc0_stat_clock_pane_ParamLimits

0xd551,	// (0x0000fac1) lc0_stat_clock_pane

0xd55e,	// (0x0000face) lc0_stat_indi_pane_g1_ParamLimits

0xd55e,	// (0x0000face) lc0_stat_indi_pane_g1

0xd56b,	// (0x0000fadb) lc0_stat_indi_pane_g2_ParamLimits

0xd56b,	// (0x0000fadb) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x00012399) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x00012399) lc0_stat_indi_pane_g

0xd578,	// (0x0000fae8) lc0_uni_indicator_pane_ParamLimits

0xd578,	// (0x0000fae8) lc0_uni_indicator_pane

0xd585,	// (0x0000faf5) ls0_title_pane_g1_ParamLimits

0xd585,	// (0x0000faf5) ls0_title_pane_g1

0xd599,	// (0x0000fb09) ls0_title_pane_t1_ParamLimits

0xd599,	// (0x0000fb09) ls0_title_pane_t1

0xd5c7,	// (0x0000fb37) lc0_uni_indicator_pane_g1_ParamLimits

0xd5c7,	// (0x0000fb37) lc0_uni_indicator_pane_g1

0x76d2,	// (0x00009c42) lc0_stat_clock_pane_t1

0xde94,	// (0x00010404) main_ai5_pane

0x76e0,	// (0x00009c50) ai5_sk_pane_ParamLimits

0x76e0,	// (0x00009c50) ai5_sk_pane

0xd5e6,	// (0x0000fb56) cell_ai5_widget_pane_ParamLimits

0xd5e6,	// (0x0000fb56) cell_ai5_widget_pane

0x7c89,	// (0x0000a1f9) aid_size_cell_widget_grid

0x7c97,	// (0x0000a207) bg_ai5_widget_pane_ParamLimits

0x7c97,	// (0x0000a207) bg_ai5_widget_pane

0x7d0b,	// (0x0000a27b) cell_ai5_widget_pane_g2

0x7d1b,	// (0x0000a28b) cell_ai5_widget_pane_g3

0x7d32,	// (0x0000a2a2) cell_ai5_widget_pane_g4

0x7d3e,	// (0x0000a2ae) cell_ai5_widget_pane_g5

0xd93d,	// (0x0000fead) cell_ai5_widget_pane_g6

0xd949,	// (0x0000feb9) cell_ai5_widget_pane_g7

0x7d9e,	// (0x0000a30e) cell_ai5_widget_pane_t1_ParamLimits

0x7d9e,	// (0x0000a30e) cell_ai5_widget_pane_t1

0x7dbb,	// (0x0000a32b) cell_ai5_widget_pane_t2_ParamLimits

0x7dbb,	// (0x0000a32b) cell_ai5_widget_pane_t2

0x7dd3,	// (0x0000a343) cell_ai5_widget_pane_t3_ParamLimits

0x7dd3,	// (0x0000a343) cell_ai5_widget_pane_t3

0x7deb,	// (0x0000a35b) cell_ai5_widget_pane_t4_ParamLimits

0x7deb,	// (0x0000a35b) cell_ai5_widget_pane_t4

0x7e08,	// (0x0000a378) cell_ai5_widget_pane_t5_ParamLimits

0x7e08,	// (0x0000a378) cell_ai5_widget_pane_t5

0x7e27,	// (0x0000a397) cell_ai5_widget_pane_t6_ParamLimits

0x7e27,	// (0x0000a397) cell_ai5_widget_pane_t6

0x7e39,	// (0x0000a3a9) cell_ai5_widget_pane_t7_ParamLimits

0x7e39,	// (0x0000a3a9) cell_ai5_widget_pane_t7

0x7e52,	// (0x0000a3c2) cell_ai5_widget_pane_t8_ParamLimits

0x7e52,	// (0x0000a3c2) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x000123b3) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x000123b3) cell_ai5_widget_pane_t

0x7ea6,	// (0x0000a416) grid_ai5_widget_pane

0xe833,	// (0x00010da3) highlight_cell_ai5_widget_pane_ParamLimits

0xe833,	// (0x00010da3) highlight_cell_ai5_widget_pane

0xd955,	// (0x0000fec5) ai5_sk_left_pane

0xd95f,	// (0x0000fecf) ai5_sk_middle_pane

0xd969,	// (0x0000fed9) ai5_sk_right_pane

0x7ed2,	// (0x0000a442) bg_ai5_widget_pane_g1_ParamLimits

0x7ed2,	// (0x0000a442) bg_ai5_widget_pane_g1

0x7ede,	// (0x0000a44e) bg_ai5_widget_pane_g2_ParamLimits

0x7ede,	// (0x0000a44e) bg_ai5_widget_pane_g2

0x7eea,	// (0x0000a45a) bg_ai5_widget_pane_g3_ParamLimits

0x7eea,	// (0x0000a45a) bg_ai5_widget_pane_g3

0x7ef6,	// (0x0000a466) bg_ai5_widget_pane_g4_ParamLimits

0x7ef6,	// (0x0000a466) bg_ai5_widget_pane_g4

0x7f02,	// (0x0000a472) bg_ai5_widget_pane_g5_ParamLimits

0x7f02,	// (0x0000a472) bg_ai5_widget_pane_g5

0x7f0e,	// (0x0000a47e) bg_ai5_widget_pane_g6_ParamLimits

0x7f0e,	// (0x0000a47e) bg_ai5_widget_pane_g6

0x7f1a,	// (0x0000a48a) bg_ai5_widget_pane_g7_ParamLimits

0x7f1a,	// (0x0000a48a) bg_ai5_widget_pane_g7

0x7f26,	// (0x0000a496) bg_ai5_widget_pane_g8_ParamLimits

0x7f26,	// (0x0000a496) bg_ai5_widget_pane_g8

0x7f32,	// (0x0000a4a2) bg_ai5_widget_pane_g9_ParamLimits

0x7f32,	// (0x0000a4a2) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x000123c8) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x000123c8) bg_ai5_widget_pane_g

0x7f6a,	// (0x0000a4da) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f6a,	// (0x0000a4da) cell_shortcut_ai5_widget_pane

0x00e3,	// (0x00002653) bg_cell_shortcut_ai5_widget_pane

0x7f7d,	// (0x0000a4ed) cell_grid_ai5_widget_pane_g1

0x00e3,	// (0x00002653) highlight_cell_shortcut_ai5_widget_pane

0x125b,	// (0x000037cb) ai5_sk_left_pane_g1

0x7f86,	// (0x0000a4f6) ai5_sk_left_pane_g2

0x7f8e,	// (0x0000a4fe) ai5_sk_left_pane_g3

0x7f96,	// (0x0000a506) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x000123db) ai5_sk_left_pane_g

0x7f9e,	// (0x0000a50e) ai5_sk_left_pane_t1

0x1253,	// (0x000037c3) ai5_sk_right_pane_g1

0x7fac,	// (0x0000a51c) ai5_sk_right_pane_g2

0x7fb4,	// (0x0000a524) ai5_sk_right_pane_g3

0x7fbc,	// (0x0000a52c) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x000123e4) ai5_sk_right_pane_g

0x7fc4,	// (0x0000a534) ai5_sk_right_pane_t1

0x1253,	// (0x000037c3) ai5_sk_middle_pane_g1

0x125b,	// (0x000037cb) ai5_sk_middle_pane_g2

0x1273,	// (0x000037e3) ai5_sk_middle_pane_g3

0x7fb4,	// (0x0000a524) ai5_sk_middle_pane_g4

0x7f8e,	// (0x0000a4fe) ai5_sk_middle_pane_g5

0x7fd2,	// (0x0000a542) ai5_sk_middle_pane_g6

0xd973,	// (0x0000fee3) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x000123ed) ai5_sk_middle_pane_g

0xb02a,	// (0x0000d59a) aid_touch_area_size_lc0_ParamLimits

0xb02a,	// (0x0000d59a) aid_touch_area_size_lc0

0x4a68,	// (0x00006fd8) cell_hwr_candidate_pane_t1_ParamLimits

0x0cdd,	// (0x0000324d) aid_touch_navi_pane

0xb2d0,	// (0x0000d840) status_dt_navi_pane_ParamLimits

0xb2d0,	// (0x0000d840) status_dt_navi_pane

0xb2e8,	// (0x0000d858) status_dt_sta_pane_ParamLimits

0xb2e8,	// (0x0000d858) status_dt_sta_pane

0xd97b,	// (0x0000feeb) dt_sta_controll_pane

0xd988,	// (0x0000fef8) dt_sta_indi_pane

0xd995,	// (0x0000ff05) dt_sta_title_pane

0xe2b3,	// (0x00010823) bg_dt_sta_indi_pane_ParamLimits

0xe2b3,	// (0x00010823) bg_dt_sta_indi_pane

0xd9a7,	// (0x0000ff17) dt_sta_battery_pane

0xd9af,	// (0x0000ff1f) dt_sta_indi_pane_g1

0xd9b8,	// (0x0000ff28) dt_sta_indi_pane_g2

0xd9c1,	// (0x0000ff31) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x000123fc) dt_sta_indi_pane_g

0xd9ca,	// (0x0000ff3a) dt_sta_signal_pane

0xe833,	// (0x00010da3) bg_dt_sta_title_pane_ParamLimits

0xe833,	// (0x00010da3) bg_dt_sta_title_pane

0xd9d3,	// (0x0000ff43) dt_sta_title_pane_g1

0xd9db,	// (0x0000ff4b) dt_sta_title_pane_t1_ParamLimits

0xd9db,	// (0x0000ff4b) dt_sta_title_pane_t1

0xde94,	// (0x00010404) bg_dt_sta_control_pane

0xd9f0,	// (0x0000ff60) dt_sta_controll_pane_g1

0xd9f9,	// (0x0000ff69) bg_dt_sta_title_pane_g1

0xda02,	// (0x0000ff72) bg_dt_sta_title_pane_g2

0xda0b,	// (0x0000ff7b) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x00012403) bg_dt_sta_title_pane_g

0x41ec,	// (0x0000675c) bg_dt_sta_indi_pane_g1

0x8080,	// (0x0000a5f0) dt_sta_signal_pane_g1

0x8088,	// (0x0000a5f8) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0001240a) dt_sta_signal_pane_g

0x8090,	// (0x0000a600) dt_sta_battery_pane_g1

0x8099,	// (0x0000a609) dt_sta_battery_pane_t1

0x41ec,	// (0x0000675c) bg_dt_sta_control_pane_g1

0xf0e8,	// (0x00011658) fep_china_uni_eep_pane

0xf0f0,	// (0x00011660) fep_china_uni_entry_pane_ParamLimits

0xf100,	// (0x00011670) popup_fep_china_uni_window_g1_ParamLimits

0xf110,	// (0x00011680) popup_fep_china_uni_window_g2_ParamLimits

0xf110,	// (0x00011680) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00011c88) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00011c88) popup_fep_china_uni_window_g

0x80a8,	// (0x0000a618) fep_china_uni_eep_pane_g1

0x80b0,	// (0x0000a620) fep_china_uni_eep_pane_t1

0x7622,	// (0x00009b92) aid_touch_area_size_smil_player

0x0e35,	// (0x000033a5) lc0_clock_pane

0x1034,	// (0x000035a4) status_pane_g5_ParamLimits

0x1034,	// (0x000035a4) status_pane_g5

0xaa7f,	// (0x0000cfef) popup_keymap_window

0x0ff2,	// (0x00003562) status_icon_pane

0x7d1b,	// (0x0000a28b) cell_ai5_widget_pane_g3_ParamLimits

0x7d32,	// (0x0000a2a2) cell_ai5_widget_pane_g4_ParamLimits

0x7d3e,	// (0x0000a2ae) cell_ai5_widget_pane_g5_ParamLimits

0x7d62,	// (0x0000a2d2) cell_ai5_widget_pane_g8_ParamLimits

0x7d62,	// (0x0000a2d2) cell_ai5_widget_pane_g8

0x7d76,	// (0x0000a2e6) cell_ai5_widget_pane_g9_ParamLimits

0x7d76,	// (0x0000a2e6) cell_ai5_widget_pane_g9

0x7d8a,	// (0x0000a2fa) cell_ai5_widget_pane_g10_ParamLimits

0x7d8a,	// (0x0000a2fa) cell_ai5_widget_pane_g10

0x80bf,	// (0x0000a62f) status_icon_pane_g1

0xde94,	// (0x00010404) bg_popup_sub_pane_cp13

0x80c7,	// (0x0000a637) popup_keymap_window_t1

0xa76e,	// (0x0000ccde) control_pane_g6_ParamLimits

0xa76e,	// (0x0000ccde) control_pane_g6

0xa77b,	// (0x0000cceb) control_pane_g7_ParamLimits

0xa77b,	// (0x0000cceb) control_pane_g7

0xa788,	// (0x0000ccf8) control_pane_g8_ParamLimits

0xa788,	// (0x0000ccf8) control_pane_g8

0xd97b,	// (0x0000feeb) dt_sta_controll_pane_ParamLimits

0xd988,	// (0x0000fef8) dt_sta_indi_pane_ParamLimits

0xd995,	// (0x0000ff05) dt_sta_title_pane_ParamLimits

0xe6d7,	// (0x00010c47) aid_size_touch_scroll_bar_cale

0xe039,	// (0x000105a9) popup_discreet_window_ParamLimits

0xe039,	// (0x000105a9) popup_discreet_window

0x97ae,	// (0x0000bd1e) popup_sk_window

0x1a81,	// (0x00003ff1) bg_popup_sub_pane_cp28_ParamLimits

0x1a81,	// (0x00003ff1) bg_popup_sub_pane_cp28

0x80d5,	// (0x0000a645) popup_discreet_window_g1_ParamLimits

0x80d5,	// (0x0000a645) popup_discreet_window_g1

0x80f5,	// (0x0000a665) popup_discreet_window_t1_ParamLimits

0x80f5,	// (0x0000a665) popup_discreet_window_t1

0x8113,	// (0x0000a683) popup_discreet_window_t2_ParamLimits

0x8113,	// (0x0000a683) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0001240f) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0001240f) popup_discreet_window_t

0x8165,	// (0x0000a6d5) popup_sk_window_g1

0x816f,	// (0x0000a6df) popup_sk_window_g2

0x0001,

0xfea6,	// (0x00012416) popup_sk_window_g

0x8179,	// (0x0000a6e9) popup_sk_window_t1

0x8189,	// (0x0000a6f9) popup_sk_window_t1_copy1

0x7d0b,	// (0x0000a27b) cell_ai5_widget_pane_g2_ParamLimits

0x7e64,	// (0x0000a3d4) cell_ai5_widget_pane_t9_ParamLimits

0x7e64,	// (0x0000a3d4) cell_ai5_widget_pane_t9

0xde94,	// (0x00010404) main_fep_fshwr2_pane

0xda14,	// (0x0000ff84) aid_fshwr2_btn_pane

0xda25,	// (0x0000ff95) aid_fshwr2_syb_pane

0xda36,	// (0x0000ffa6) aid_fshwr2_txt_pane

0xda42,	// (0x0000ffb2) fshwr2_func_candi_pane

0xda63,	// (0x0000ffd3) fshwr2_hwr_syb_pane

0xda80,	// (0x0000fff0) fshwr2_icf_pane

0xde94,	// (0x00010404) fshwr2_icf_bg_pane

0x820b,	// (0x0000a77b) fshwr2_icf_pane_t1_ParamLimits

0x820b,	// (0x0000a77b) fshwr2_icf_pane_t1

0xef8d,	// (0x000114fd) fshwr2_func_candi_pane_g1

0xdaac,	// (0x0001001c) fshwr2_func_candi_row_pane_ParamLimits

0xdaac,	// (0x0001001c) fshwr2_func_candi_row_pane

0xdabc,	// (0x0001002c) cell_fshwr2_syb_pane_ParamLimits

0xdabc,	// (0x0001002c) cell_fshwr2_syb_pane

0x4691,	// (0x00006c01) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4691,	// (0x00006c01) fshwr2_hwr_syb_pane_g1

0xde94,	// (0x00010404) bg_popup_call_pane_cp01

0xdad2,	// (0x00010042) fshwr2_func_candi_cell_pane_ParamLimits

0xdad2,	// (0x00010042) fshwr2_func_candi_cell_pane

0xdb02,	// (0x00010072) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdb02,	// (0x00010072) fshwr2_func_candi_cell_bg_pane

0xdb0e,	// (0x0001007e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdb0e,	// (0x0001007e) fshwr2_func_candi_cell_pane_g1

0xdb3d,	// (0x000100ad) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdb3d,	// (0x000100ad) fshwr2_func_candi_cell_pane_t1

0xde94,	// (0x00010404) bg_button_pane_cp08

0x82bc,	// (0x0000a82c) cell_fshwr2_syb_bg_pane

0xdb50,	// (0x000100c0) cell_fshwr2_syb_bg_pane_g1

0xdb58,	// (0x000100c8) cell_fshwr2_syb_bg_pane_t1

0xe833,	// (0x00010da3) main_tmo_pane

0xb891,	// (0x0000de01) uni_indicator_pane_g1_ParamLimits

0xb8a7,	// (0x0000de17) uni_indicator_pane_g2_ParamLimits

0xb8bd,	// (0x0000de2d) uni_indicator_pane_g3_ParamLimits

0xb8d2,	// (0x0000de42) uni_indicator_pane_g4_ParamLimits

0xb8d2,	// (0x0000de42) uni_indicator_pane_g4

0x2766,	// (0x00004cd6) uni_indicator_pane_g5_ParamLimits

0x2766,	// (0x00004cd6) uni_indicator_pane_g5

0x2766,	// (0x00004cd6) uni_indicator_pane_g6_ParamLimits

0x2766,	// (0x00004cd6) uni_indicator_pane_g6

0xf910,	// (0x00011e80) uni_indicator_pane_g_ParamLimits

0xc622,	// (0x0000eb92) popup_tmo_note_window_ParamLimits

0xc622,	// (0x0000eb92) popup_tmo_note_window

0xe833,	// (0x00010da3) fshwr2_bg_pane

0xdb2e,	// (0x0001009e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdb2e,	// (0x0001009e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0001241b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0001241b) fshwr2_func_candi_cell_pane_g

0x41ec,	// (0x0000675c) bg_popup_window_pane_cp01

0x82db,	// (0x0000a84b) bg_popup_window_pane_g1_cp01

0x82e4,	// (0x0000a854) bg_popup_window_pane_cp22_ParamLimits

0x82e4,	// (0x0000a854) bg_popup_window_pane_cp22

0x82f2,	// (0x0000a862) listscroll_tmo_link_pane_ParamLimits

0x82f2,	// (0x0000a862) listscroll_tmo_link_pane

0x8332,	// (0x0000a8a2) popup_tmo_note_window_g1_ParamLimits

0x8332,	// (0x0000a8a2) popup_tmo_note_window_g1

0x833f,	// (0x0000a8af) tmo_note_info_pane_ParamLimits

0x833f,	// (0x0000a8af) tmo_note_info_pane

0xdb67,	// (0x000100d7) list_tmo_note_info_pane_g1_ParamLimits

0xdb67,	// (0x000100d7) list_tmo_note_info_pane_g1

0x8370,	// (0x0000a8e0) list_tmo_note_info_pane_g2_ParamLimits

0x8370,	// (0x0000a8e0) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x00012420) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x00012420) list_tmo_note_info_pane_g

0x838c,	// (0x0000a8fc) list_tmo_note_info_text_pane_ParamLimits

0x838c,	// (0x0000a8fc) list_tmo_note_info_text_pane

0x8411,	// (0x0000a981) list_tmo_link_pane

0x841e,	// (0x0000a98e) scroll_pane_cp20

0x842b,	// (0x0000a99b) list_single_tmo_link_pane_ParamLimits

0x842b,	// (0x0000a99b) list_single_tmo_link_pane

0x843b,	// (0x0000a9ab) list_single_tmo_link_pane_t1

0x8449,	// (0x0000a9b9) list_tmo_note_info_text_pane_t1_ParamLimits

0x8449,	// (0x0000a9b9) list_tmo_note_info_text_pane_t1

0xa1a3,	// (0x0000c713) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa1a3,	// (0x0000c713) aid_size_touch_scroll_bar_cp01

0xa0d2,	// (0x0000c642) aid_size_touch_slider_marker

0x979e,	// (0x0000bd0e) popup_settings_window_ParamLimits

0x979e,	// (0x0000bd0e) popup_settings_window

0x0684,	// (0x00002bf4) popup_candi_list_indi_window

0x0cdd,	// (0x0000324d) aid_touch_navi_pane_ParamLimits

0x6099,	// (0x00008609) rs_clock_indi_pane

0x60a2,	// (0x00008612) sctrl_sk_bottom_pane_ParamLimits

0x60b3,	// (0x00008623) sctrl_sk_top_pane_ParamLimits

0x68f7,	// (0x00008e67) popup_fep_tooltip_window

0x7c89,	// (0x0000a1f9) aid_size_cell_widget_grid_ParamLimits

0x7cf6,	// (0x0000a266) cell_ai5_widget_pane_g1_ParamLimits

0x7cf6,	// (0x0000a266) cell_ai5_widget_pane_g1

0xd93d,	// (0x0000fead) cell_ai5_widget_pane_g6_ParamLimits

0xd949,	// (0x0000feb9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0001239e) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0001239e) cell_ai5_widget_pane_g

0x7e88,	// (0x0000a3f8) cell_ai5_widget_pane_t10_ParamLimits

0x7e88,	// (0x0000a3f8) cell_ai5_widget_pane_t10

0x7ea6,	// (0x0000a416) grid_ai5_widget_pane_ParamLimits

0x7f3e,	// (0x0000a4ae) cell_contacts_ai5_widget_pane_ParamLimits

0x7f3e,	// (0x0000a4ae) cell_contacts_ai5_widget_pane

0x8128,	// (0x0000a698) popup_discreet_window_t3_ParamLimits

0x8128,	// (0x0000a698) popup_discreet_window_t3

0xda98,	// (0x00010008) popup_fshwr2_char_preview_window_ParamLimits

0xda98,	// (0x00010008) popup_fshwr2_char_preview_window

0xdb7e,	// (0x000100ee) tmo_note_info_pane_t1

0xdb93,	// (0x00010103) tmo_note_info_pane_t2

0xdbac,	// (0x0001011c) tmo_note_info_pane_t3

0x83ed,	// (0x0000a95d) tmo_note_info_pane_t4

0x83ff,	// (0x0000a96f) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x00012425) tmo_note_info_pane_t

0x8411,	// (0x0000a981) list_tmo_link_pane_ParamLimits

0x841e,	// (0x0000a98e) scroll_pane_cp20_ParamLimits

0xde94,	// (0x00010404) bg_popup_fep_char_preview_window_cp01

0x8462,	// (0x0000a9d2) popup_fshwr2_char_preview_window_t1

0x8470,	// (0x0000a9e0) popup_candi_list_indi_window_g1

0x8479,	// (0x0000a9e9) bg_cell_contacts_ai5_widget_pane

0x8485,	// (0x0000a9f5) cell_contacts_ai5_widget_pane_g1

0x849a,	// (0x0000aa0a) cell_contacts_ai5_widget_pane_g2

0x84a6,	// (0x0000aa16) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x00012430) cell_contacts_ai5_widget_pane_g

0x84b2,	// (0x0000aa22) cell_contacts_ai5_widget_pane_t1

0xe833,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdc26,	// (0x00010196) settings_container_pane

0x00e3,	// (0x00002653) listscroll_set_pane_copy1

0x3590,	// (0x00005b00) scroll_pane_cp121_copy1

0x8535,	// (0x0000aaa5) set_content_pane_copy1

0xdc32,	// (0x000101a2) aid_height_set_list_copy1_ParamLimits

0xdc32,	// (0x000101a2) aid_height_set_list_copy1

0x2a6a,	// (0x00004fda) aid_size_parent_copy1_ParamLimits

0x2a6a,	// (0x00004fda) aid_size_parent_copy1

0xdc3e,	// (0x000101ae) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdc3e,	// (0x000101ae) button_value_adjust_pane_cp6_copy1

0x065c,	// (0x00002bcc) list_highlight_pane_cp2_copy1_ParamLimits

0x065c,	// (0x00002bcc) list_highlight_pane_cp2_copy1

0xdc52,	// (0x000101c2) list_set_pane_copy1_ParamLimits

0xdc52,	// (0x000101c2) list_set_pane_copy1

0xdbc1,	// (0x00010131) main_pane_set_t1_copy1_ParamLimits

0xdbc1,	// (0x00010131) main_pane_set_t1_copy1

0xdbfb,	// (0x0001016b) main_pane_set_t2_copy1_ParamLimits

0xdbfb,	// (0x0001016b) main_pane_set_t2_copy1

0xdd19,	// (0x00010289) main_pane_set_t3_copy1

0xdd27,	// (0x00010297) main_pane_set_t4_copy1

0xdc1a,	// (0x0001018a) set_content_pane_g1_copy1_ParamLimits

0xdc1a,	// (0x0001018a) set_content_pane_g1_copy1

0xdd35,	// (0x000102a5) setting_code_pane_copy1

0x8648,	// (0x0000abb8) setting_slider_graphic_pane_copy1

0x8648,	// (0x0000abb8) setting_slider_pane_copy1

0x8648,	// (0x0000abb8) setting_text_pane_copy1

0x8648,	// (0x0000abb8) setting_volume_pane_copy1

0xdd35,	// (0x000102a5) settings_code_pane_cp2_copy1

0xdd3d,	// (0x000102ad) settings_code_pane_cp_copy1_ParamLimits

0xdd3d,	// (0x000102ad) settings_code_pane_cp_copy1

0xdd51,	// (0x000102c1) volume_set_pane_copy1

0xdd5d,	// (0x000102cd) volume_set_pane_g10_copy1

0xdd69,	// (0x000102d9) volume_set_pane_g1_copy1

0xdd73,	// (0x000102e3) volume_set_pane_g2_copy1

0xdd7d,	// (0x000102ed) volume_set_pane_g3_copy1

0xdd87,	// (0x000102f7) volume_set_pane_g4_copy1

0xdd91,	// (0x00010301) volume_set_pane_g5_copy1

0xdd9b,	// (0x0001030b) volume_set_pane_g6_copy1

0xdda5,	// (0x00010315) volume_set_pane_g7_copy1

0xddaf,	// (0x0001031f) volume_set_pane_g8_copy1

0xddb9,	// (0x00010329) volume_set_pane_g9_copy1

0xe0dd,	// (0x0001064d) bg_set_opt_pane_cp_copy1_ParamLimits

0xe0dd,	// (0x0001064d) bg_set_opt_pane_cp_copy1

0x86d6,	// (0x0000ac46) setting_slider_pane_t1_copy1_ParamLimits

0x86d6,	// (0x0000ac46) setting_slider_pane_t1_copy1

0xddc3,	// (0x00010333) setting_slider_pane_t2_copy1_ParamLimits

0xddc3,	// (0x00010333) setting_slider_pane_t2_copy1

0xdddd,	// (0x0001034d) setting_slider_pane_t3_copy1_ParamLimits

0xdddd,	// (0x0001034d) setting_slider_pane_t3_copy1

0xddf5,	// (0x00010365) slider_set_pane_copy1_ParamLimits

0xddf5,	// (0x00010365) slider_set_pane_copy1

0xe8fc,	// (0x00010e6c) set_opt_bg_pane_g1_copy2

0xe904,	// (0x00010e74) set_opt_bg_pane_g2_copy2

0x873c,	// (0x0000acac) set_opt_bg_pane_g3_copy2

0xe914,	// (0x00010e84) set_opt_bg_pane_g4_copy2

0xe91c,	// (0x00010e8c) set_opt_bg_pane_g5_copy2

0xe924,	// (0x00010e94) set_opt_bg_pane_g6_copy2

0xde0b,	// (0x0001037b) set_opt_bg_pane_g7_copy2

0x8750,	// (0x0000acc0) set_opt_bg_pane_g8_copy2

0x875a,	// (0x0000acca) set_opt_bg_pane_g9_copy2

0x8764,	// (0x0000acd4) aid_size_touch_slider_mark_copy1_ParamLimits

0x8764,	// (0x0000acd4) aid_size_touch_slider_mark_copy1

0x8778,	// (0x0000ace8) slider_set_pane_g1_copy1

0x8781,	// (0x0000acf1) slider_set_pane_g2_copy1

0x29d1,	// (0x00004f41) slider_set_pane_g3_copy1_ParamLimits

0x29d1,	// (0x00004f41) slider_set_pane_g3_copy1

0x29e5,	// (0x00004f55) slider_set_pane_g4_copy1_ParamLimits

0x29e5,	// (0x00004f55) slider_set_pane_g4_copy1

0x29fd,	// (0x00004f6d) slider_set_pane_g5_copy1_ParamLimits

0x29fd,	// (0x00004f6d) slider_set_pane_g5_copy1

0x29d1,	// (0x00004f41) slider_set_pane_g6_copy1_ParamLimits

0x29d1,	// (0x00004f41) slider_set_pane_g6_copy1

0xde15,	// (0x00010385) slider_set_pane_g7_copy1_ParamLimits

0xde15,	// (0x00010385) slider_set_pane_g7_copy1

0xe017,	// (0x00010587) bg_set_opt_pane_cp2_copy1

0x879f,	// (0x0000ad0f) setting_slider_graphic_pane_g1_copy1

0xde2b,	// (0x0001039b) setting_slider_graphic_pane_t1_copy1

0xde3b,	// (0x000103ab) setting_slider_graphic_pane_t2_copy1

0xde4b,	// (0x000103bb) slider_set_pane_cp_copy1

0x87d8,	// (0x0000ad48) input_focus_pane_cp1_copy1

0x87e1,	// (0x0000ad51) list_set_text_pane_copy1

0x87e9,	// (0x0000ad59) setting_text_pane_g1_copy1

0xe18b,	// (0x000106fb) set_text_pane_t1_copy1

0x87d8,	// (0x0000ad48) input_focus_pane_cp2_copy1

0x87e9,	// (0x0000ad59) setting_code_pane_g1_copy1

0xde53,	// (0x000103c3) setting_code_pane_t1_copy1

0xde61,	// (0x000103d1) list_set_graphic_pane_copy1

0xe017,	// (0x00010587) bg_set_opt_pane_cp4_copy1

0xa4f1,	// (0x0000ca61) list_set_graphic_pane_g1_copy1_ParamLimits

0xa4f1,	// (0x0000ca61) list_set_graphic_pane_g1_copy1

0xde73,	// (0x000103e3) list_set_graphic_pane_g2_copy1

0xa509,	// (0x0000ca79) list_set_graphic_pane_t1_copy1_ParamLimits

0xa509,	// (0x0000ca79) list_set_graphic_pane_t1_copy1

0x41ec,	// (0x0000675c) rs_clock_indi_pane_g1

0x8833,	// (0x0000ada3) rs_clock_indi_pane_t1

0x8841,	// (0x0000adb1) rs_indi_pane

0x8849,	// (0x0000adb9) rs_indi_pane_g1

0x8852,	// (0x0000adc2) rs_indi_pane_g2

0x885b,	// (0x0000adcb) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x00012437) rs_indi_pane_g

0x00e3,	// (0x00002653) bg_popup_preview_window_pane_cp03

0x8864,	// (0x0000add4) popup_fep_tooltip_window_t1

0x545f,	// (0x000079cf) popup_note2_window_g2_ParamLimits

0x545f,	// (0x000079cf) popup_note2_window_g2

0x0001,

0xfc60,	// (0x000121d0) popup_note2_window_g_ParamLimits

0xfc60,	// (0x000121d0) popup_note2_window_g

0x5a6e,	// (0x00007fde) bg_popup_sub_pane_cp11_ParamLimits

0x5a7b,	// (0x00007feb) cell_ai3_links_pane_g1_ParamLimits

0x5a92,	// (0x00008002) cell_ai3_links_pane_t1

0xe18b,	// (0x000106fb) set_text_pane_t1_copy1_ParamLimits

0xa588,	// (0x0000caf8) cell_graphic_popup_pane_cp2_ParamLimits

0xa588,	// (0x0000caf8) cell_graphic_popup_pane_cp2

0xde7b,	// (0x000103eb) cell_graphic_popup_pane_g1_cp2

0xe4ea,	// (0x00010a5a) cell_graphic_popup_pane_g2_cp2

0x887a,	// (0x0000adea) cell_graphic_popup_pane_g3_cp2

0x8882,	// (0x0000adf2) cell_graphic_popup_pane_t2_cp2

0xe4fb,	// (0x00010a6b) grid_highlight_pane_cp3_cp2

0xed7c,	// (0x000112ec) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe833,	// (0x00010da3) main_tmo_pane_ParamLimits

0xc616,	// (0x0000eb86) popup_tmo_big_image_note_window

0x7ce5,	// (0x0000a255) cell_ai5_widget_list_pane

0x7ced,	// (0x0000a25d) cell_ai5_widget_lrg_icon_pane

0xdb7e,	// (0x000100ee) tmo_note_info_pane_t1_ParamLimits

0xdb93,	// (0x00010103) tmo_note_info_pane_t2_ParamLimits

0xdbac,	// (0x0001011c) tmo_note_info_pane_t3_ParamLimits

0x83ed,	// (0x0000a95d) tmo_note_info_pane_t4_ParamLimits

0x83ff,	// (0x0000a96f) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x00012425) tmo_note_info_pane_t_ParamLimits

0xdc26,	// (0x00010196) settings_container_pane_ParamLimits

0x87d0,	// (0x0000ad40) indicator_popup_pane_cp5

0x87d0,	// (0x0000ad40) indicator_popup_pane_cp6

0xde61,	// (0x000103d1) list_set_graphic_pane_copy1_ParamLimits

0xde94,	// (0x00010404) bg_popup_window_pane_cp23

0x8890,	// (0x0000ae00) popup_tmo_big_image_note_window_g1

0x889c,	// (0x0000ae0c) popup_tmo_big_image_note_window_t1

0x88ac,	// (0x0000ae1c) popup_tmo_big_image_note_window_t2

0x88bc,	// (0x0000ae2c) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0001243e) popup_tmo_big_image_note_window_t

0x41ec,	// (0x0000675c) cell_ai5_widget_lrg_icon_pane_g1

0x88cc,	// (0x0000ae3c) cell_ai5_widget_lrg_icon_pane_t1

0x88da,	// (0x0000ae4a) cell_ai5_widget_list_row_pane_ParamLimits

0x88da,	// (0x0000ae4a) cell_ai5_widget_list_row_pane

0x88f2,	// (0x0000ae62) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x88f2,	// (0x0000ae62) cell_ai5_widget_list_row_pane_g1

0x88ff,	// (0x0000ae6f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x88ff,	// (0x0000ae6f) cell_ai5_widget_list_row_pane_t1

0x892a,	// (0x0000ae9a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x892a,	// (0x0000ae9a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x00012445) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x00012445) cell_ai5_widget_list_row_pane_t

0xde94,	// (0x00010404) main_fep_vtchi_ss_pane

0x896e,	// (0x0000aede) popup_fep_char_pre_window

0x8976,	// (0x0000aee6) popup_fep_ituss_window

0x8997,	// (0x0000af07) popup_fep_vkbss_window

0x89b8,	// (0x0000af28) grid_vkbss_keypad_pane_ParamLimits

0x89b8,	// (0x0000af28) grid_vkbss_keypad_pane

0x89c8,	// (0x0000af38) ituss_keypad_pane

0x89e3,	// (0x0000af53) aid_vkbss_key_offset_ParamLimits

0x89e3,	// (0x0000af53) aid_vkbss_key_offset

0x89ef,	// (0x0000af5f) cell_vkbss_key_pane_ParamLimits

0x89ef,	// (0x0000af5f) cell_vkbss_key_pane

0x8a05,	// (0x0000af75) bg_cell_vkbss_key_g1_ParamLimits

0x8a05,	// (0x0000af75) bg_cell_vkbss_key_g1

0x8a11,	// (0x0000af81) cell_vkbss_key_3p_pane_ParamLimits

0x8a11,	// (0x0000af81) cell_vkbss_key_3p_pane

0x8a2b,	// (0x0000af9b) cell_vkbss_key_g1_ParamLimits

0x8a2b,	// (0x0000af9b) cell_vkbss_key_g1

0x8a45,	// (0x0000afb5) cell_vkbss_key_t1_ParamLimits

0x8a45,	// (0x0000afb5) cell_vkbss_key_t1

0x8a70,	// (0x0000afe0) cell_ituss_key_pane_ParamLimits

0x8a70,	// (0x0000afe0) cell_ituss_key_pane

0x8a81,	// (0x0000aff1) bg_cell_ituss_key_g1_ParamLimits

0x8a81,	// (0x0000aff1) bg_cell_ituss_key_g1

0x8a8d,	// (0x0000affd) cell_ituss_key_pane_g1_ParamLimits

0x8a8d,	// (0x0000affd) cell_ituss_key_pane_g1

0x8aa1,	// (0x0000b011) cell_ituss_key_pane_g2_ParamLimits

0x8aa1,	// (0x0000b011) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x0001244c) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0001244c) cell_ituss_key_pane_g

0x8adf,	// (0x0000b04f) cell_ituss_key_t1_ParamLimits

0x8adf,	// (0x0000b04f) cell_ituss_key_t1

0x8b19,	// (0x0000b089) cell_ituss_key_t2_ParamLimits

0x8b19,	// (0x0000b089) cell_ituss_key_t2

0x8b4a,	// (0x0000b0ba) cell_ituss_key_t3_ParamLimits

0x8b4a,	// (0x0000b0ba) cell_ituss_key_t3

0x8b19,	// (0x0000b089) cell_ituss_key_t4_ParamLimits

0x8b19,	// (0x0000b089) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00012453) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00012453) cell_ituss_key_t

0x8b8d,	// (0x0000b0fd) cell_vkbss_key_3p_pane_g1

0x8b95,	// (0x0000b105) cell_vkbss_key_3p_pane_g2

0x8b9d,	// (0x0000b10d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0001245e) cell_vkbss_key_3p_pane_g

0xde94,	// (0x00010404) bg_popup_fep_char_preview_window_cp02

0x8ba5,	// (0x0000b115) popup_fep_char_pre_window_t1

0xd933,	// (0x0000fea3) main_ai5_sk_pane

0x8479,	// (0x0000a9e9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8485,	// (0x0000a9f5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x849a,	// (0x0000aa0a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x84a6,	// (0x0000aa16) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x00012430) cell_contacts_ai5_widget_pane_g_ParamLimits

0x84b2,	// (0x0000aa22) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe833,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xde83,	// (0x000103f3) main_ai5_sk_pane_g1

0x18b9,	// (0x00003e29) popup_query_code_window_g1

0x898c,	// (0x0000aefc) popup_fep_vkb_icf_pane

0x89a2,	// (0x0000af12) popup_fep_vtchi_icf_pane

0x8bbd,	// (0x0000b12d) bg_icf_pane

0x8bc9,	// (0x0000b139) list_vkb_icf_pane

0x8bd5,	// (0x0000b145) bg_icf_pane_cp01

0x8be8,	// (0x0000b158) vtchi_icf_list_pane

0x8bf9,	// (0x0000b169) list_vkb_icf_pane_t1_ParamLimits

0x8bf9,	// (0x0000b169) list_vkb_icf_pane_t1

0x8c0f,	// (0x0000b17f) vtchi_icf_list_pane_t1_ParamLimits

0x8c0f,	// (0x0000b17f) vtchi_icf_list_pane_t1

0x8976,	// (0x0000aee6) popup_fep_ituss_window_ParamLimits

0x89a2,	// (0x0000af12) popup_fep_vtchi_icf_pane_ParamLimits

0x89c8,	// (0x0000af38) ituss_keypad_pane_ParamLimits

0x89d7,	// (0x0000af47) ituss_sks_pane

0x8bbd,	// (0x0000b12d) bg_icf_pane_ParamLimits

0x8952,	// (0x0000aec2) icf_edit_indi_pane_ParamLimits

0x8952,	// (0x0000aec2) icf_edit_indi_pane

0x8bc9,	// (0x0000b139) list_vkb_icf_pane_ParamLimits

0x8bd5,	// (0x0000b145) bg_icf_pane_cp01_ParamLimits

0x8961,	// (0x0000aed1) icf_edit_indi_pane_cp01_ParamLimits

0x8961,	// (0x0000aed1) icf_edit_indi_pane_cp01

0x8bf0,	// (0x0000b160) vtchi_query_pane

0x4691,	// (0x00006c01) icf_edit_indi_pane_g1_ParamLimits

0x4691,	// (0x00006c01) icf_edit_indi_pane_g1

0x8c91,	// (0x0000b201) icf_edit_indi_pane_g2_ParamLimits

0x8c91,	// (0x0000b201) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00012476) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00012476) icf_edit_indi_pane_g

0x8ca0,	// (0x0000b210) icf_edit_indi_pane_t1

0x8c27,	// (0x0000b197) bg_input_focus_pane_cp042

0xe6ce,	// (0x00010c3e) vtchi_button_pane

0x8c30,	// (0x0000b1a0) vtchi_query_pane_t1

0x8c3e,	// (0x0000b1ae) vtchi_query_pane_t2

0x8c4c,	// (0x0000b1bc) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00012465) vtchi_query_pane_t

0xde94,	// (0x00010404) bg_button_pane_cp13

0x8c5a,	// (0x0000b1ca) vtchi_button_pane_g1

0x8c62,	// (0x0000b1d2) ituss_sks_pane_g1

0x8c6d,	// (0x0000b1dd) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0001246c) ituss_sks_pane_g

0x8c75,	// (0x0000b1e5) ituss_sks_pane_t1

0x8c83,	// (0x0000b1f3) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00012471) ituss_sks_pane_t

0x3bf5,	// (0x00006165) indicator_nsta_pane_cp_g1

0x3bfe,	// (0x0000616e) indicator_nsta_pane_cp_g2

0x3c06,	// (0x00006176) indicator_nsta_pane_cp_g3

0x3c0e,	// (0x0000617e) indicator_nsta_pane_cp_g4

0x3c16,	// (0x00006186) indicator_nsta_pane_cp_g5

0x3c1e,	// (0x0000618e) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0001201a) indicator_nsta_pane_cp_g

0xd3f2,	// (0x0000f962) cell_graphic2_pane_t2_ParamLimits

0xd3f2,	// (0x0000f962) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00012327) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00012327) cell_graphic2_pane_t

0xd428,	// (0x0000f998) cell_graphic2_control_pane_t1

0xa3ec,	// (0x0000c95c) signal_pane_g3_ParamLimits

0xa3ec,	// (0x0000c95c) signal_pane_g3

0xa400,	// (0x0000c970) signal_pane_g4_ParamLimits

0xa400,	// (0x0000c970) signal_pane_g4

0x893c,	// (0x0000aeac) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x893c,	// (0x0000aeac) cell_ai5_widget_list_row_pane_t3

0x8acd,	// (0x0000b03d) cell_ituss_key_pane_t1_ParamLimits

0x8acd,	// (0x0000b03d) cell_ituss_key_pane_t1

0x1507,	// (0x00003a77) form_field_data_wide_pane_vc_t2_ParamLimits

0x1507,	// (0x00003a77) form_field_data_wide_pane_vc_t2

0x151b,	// (0x00003a8b) form_field_data_wide_pane_vc_t3_ParamLimits

0x151b,	// (0x00003a8b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x00011d68) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x00011d68) form_field_data_wide_pane_vc_t

0x38a6,	// (0x00005e16) form_field_slider_wide_pane_vc_t3_ParamLimits

0x38a6,	// (0x00005e16) form_field_slider_wide_pane_vc_t3

0x397c,	// (0x00005eec) form_field_popup_wide_pane_vc_t2_ParamLimits

0x397c,	// (0x00005eec) form_field_popup_wide_pane_vc_t2

0x3993,	// (0x00005f03) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3993,	// (0x00005f03) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00012009) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00012009) form_field_popup_wide_pane_vc_t

0xda14,	// (0x0000ff84) aid_fshwr2_btn_pane_ParamLimits

0xda25,	// (0x0000ff95) aid_fshwr2_syb_pane_ParamLimits

0xda36,	// (0x0000ffa6) aid_fshwr2_txt_pane_ParamLimits

0xe833,	// (0x00010da3) fshwr2_bg_pane_ParamLimits

0xda42,	// (0x0000ffb2) fshwr2_func_candi_pane_ParamLimits

0xda63,	// (0x0000ffd3) fshwr2_hwr_syb_pane_ParamLimits

0xda80,	// (0x0000fff0) fshwr2_icf_pane_ParamLimits

0x381a,	// (0x00005d8a) list_double_graphic_pane_vc_g4_ParamLimits

0x381a,	// (0x00005d8a) list_double_graphic_pane_vc_g4

0x8ac1,	// (0x0000b031) cell_ituss_key_pane_g3_ParamLimits

0x8ac1,	// (0x0000b031) cell_ituss_key_pane_g3

0x8b7b,	// (0x0000b0eb) cell_ituss_key_t5_ParamLimits

0x8b7b,	// (0x0000b0eb) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
