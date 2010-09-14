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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000155ee };

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
0x94a2,	// (0x0001ea90) Screen

0x94ae,	// (0x0001ea9c) application_window_ParamLimits

0x94ae,	// (0x0001ea9c) application_window

0xc29d,	// (0x0002188b) screen_g1

0x7f3e,	// (0x0001d52c) area_bottom_pane_ParamLimits

0x7f3e,	// (0x0001d52c) area_bottom_pane

0xe1b1,	// (0x0002379f) area_top_pane_ParamLimits

0xe1b1,	// (0x0002379f) area_top_pane

0xe24f,	// (0x0002383d) main_pane_ParamLimits

0xe24f,	// (0x0002383d) main_pane

0xc2a7,	// (0x00021895) misc_graphics

0xa66c,	// (0x0001fc5a) battery_pane_ParamLimits

0xa66c,	// (0x0001fc5a) battery_pane

0x1aac,	// (0x0001709a) bg_status_flat_pane_g8

0x1ab4,	// (0x000170a2) bg_status_flat_pane_g9

0x0d83,	// (0x00016371) context_pane_ParamLimits

0x0d83,	// (0x00016371) context_pane

0xa7d7,	// (0x0001fdc5) navi_pane_ParamLimits

0xa7d7,	// (0x0001fdc5) navi_pane

0xa855,	// (0x0001fe43) signal_pane_ParamLimits

0xa855,	// (0x0001fe43) signal_pane

0x0008,

0xf834,	// (0x00024e22) bg_status_flat_pane_g

0xa8e5,	// (0x0001fed3) status_pane_g1_ParamLimits

0xa8e5,	// (0x0001fed3) status_pane_g1

0xa8fb,	// (0x0001fee9) status_pane_g2_ParamLimits

0xa8fb,	// (0x0001fee9) status_pane_g2

0x0faa,	// (0x00016598) status_pane_g3_ParamLimits

0x0faa,	// (0x00016598) status_pane_g3

0x0004,

0xf767,	// (0x00024d55) status_pane_g_ParamLimits

0xf767,	// (0x00024d55) status_pane_g

0xa907,	// (0x0001fef5) title_pane_ParamLimits

0xa907,	// (0x0001fef5) title_pane

0xa96a,	// (0x0001ff58) uni_indicator_pane_ParamLimits

0xa96a,	// (0x0001ff58) uni_indicator_pane

0xd19b,	// (0x00022789) bg_list_pane_ParamLimits

0xd19b,	// (0x00022789) bg_list_pane

0xa5df,	// (0x0001fbcd) find_pane

0x1280,	// (0x0001686e) listscroll_app_pane_ParamLimits

0x1280,	// (0x0001686e) listscroll_app_pane

0xd1bb,	// (0x000227a9) listscroll_form_pane

0x83ac,	// (0x0001d99a) listscroll_gen_pane_ParamLimits

0x83ac,	// (0x0001d99a) listscroll_gen_pane

0xe778,	// (0x00023d66) listscroll_set_pane

0x2622,	// (0x00017c10) main_idle_act_pane

0xd04f,	// (0x0002263d) main_idle_trad_pane

0xd04f,	// (0x0002263d) main_list_empty_pane

0xc8ed,	// (0x00021edb) main_midp_pane

0xd1d5,	// (0x000227c3) main_pane_g1_ParamLimits

0xd1d5,	// (0x000227c3) main_pane_g1

0x83c0,	// (0x0001d9ae) popup_ai_message_window_ParamLimits

0x83c0,	// (0x0001d9ae) popup_ai_message_window

0x8471,	// (0x0001da5f) popup_fep_china_uni_window_ParamLimits

0x8471,	// (0x0001da5f) popup_fep_china_uni_window

0x84cb,	// (0x0001dab9) popup_fep_japan_candidate_window_ParamLimits

0x84cb,	// (0x0001dab9) popup_fep_japan_candidate_window

0x84e9,	// (0x0001dad7) popup_fep_japan_predictive_window_ParamLimits

0x84e9,	// (0x0001dad7) popup_fep_japan_predictive_window

0x84fb,	// (0x0001dae9) popup_find_window

0x8518,	// (0x0001db06) popup_grid_graphic_window_ParamLimits

0x8518,	// (0x0001db06) popup_grid_graphic_window

0xe7c4,	// (0x00023db2) popup_large_graphic_colour_window

0x85b6,	// (0x0001dba4) popup_menu_window_ParamLimits

0x85b6,	// (0x0001dba4) popup_menu_window

0x8788,	// (0x0001dd76) popup_note_image_window

0x874e,	// (0x0001dd3c) popup_note_wait_window_ParamLimits

0x874e,	// (0x0001dd3c) popup_note_wait_window

0x87a0,	// (0x0001dd8e) popup_note_window_ParamLimits

0x87a0,	// (0x0001dd8e) popup_note_window

0x884f,	// (0x0001de3d) popup_query_code_window_ParamLimits

0x884f,	// (0x0001de3d) popup_query_code_window

0x8889,	// (0x0001de77) popup_query_data_code_window_ParamLimits

0x8889,	// (0x0001de77) popup_query_data_code_window

0x88a6,	// (0x0001de94) popup_query_data_window_ParamLimits

0x88a6,	// (0x0001de94) popup_query_data_window

0x8928,	// (0x0001df16) popup_query_sat_info_window_ParamLimits

0x8928,	// (0x0001df16) popup_query_sat_info_window

0x89bf,	// (0x0001dfad) popup_snote_single_graphic_window_ParamLimits

0x89bf,	// (0x0001dfad) popup_snote_single_graphic_window

0x89bf,	// (0x0001dfad) popup_snote_single_text_window_ParamLimits

0x89bf,	// (0x0001dfad) popup_snote_single_text_window

0xe7ea,	// (0x00023dd8) popup_sub_window_general

0x8b1c,	// (0x0001e10a) popup_window_general_ParamLimits

0x8b1c,	// (0x0001e10a) popup_window_general

0x0c3f,	// (0x0001622d) power_save_pane

0x822d,	// (0x0001d81b) control_pane_g1_ParamLimits

0x822d,	// (0x0001d81b) control_pane_g1

0x8256,	// (0x0001d844) control_pane_g2_ParamLimits

0x8256,	// (0x0001d844) control_pane_g2

0xd185,	// (0x00022773) control_pane_g3_ParamLimits

0xd185,	// (0x00022773) control_pane_g3

0x0007,

0xf74f,	// (0x00024d3d) control_pane_g_ParamLimits

0xf74f,	// (0x00024d3d) control_pane_g

0x8297,	// (0x0001d885) control_pane_t1_ParamLimits

0x8297,	// (0x0001d885) control_pane_t1

0x82ff,	// (0x0001d8ed) control_pane_t2_ParamLimits

0x82ff,	// (0x0001d8ed) control_pane_t2

0x0002,

0xf760,	// (0x00024d4e) control_pane_t_ParamLimits

0xf760,	// (0x00024d4e) control_pane_t

0xa511,	// (0x0001faff) navi_navi_volume_pane_cp1

0xa519,	// (0x0001fb07) status_small_icon_pane

0xd151,	// (0x0002273f) status_small_pane_g1_ParamLimits

0xd151,	// (0x0002273f) status_small_pane_g1

0xa521,	// (0x0001fb0f) status_small_pane_g2_ParamLimits

0xa521,	// (0x0001fb0f) status_small_pane_g2

0xa52d,	// (0x0001fb1b) status_small_pane_g3_ParamLimits

0xa52d,	// (0x0001fb1b) status_small_pane_g3

0xa539,	// (0x0001fb27) status_small_pane_g4_ParamLimits

0xa539,	// (0x0001fb27) status_small_pane_g4

0xa545,	// (0x0001fb33) status_small_pane_g5_ParamLimits

0xa545,	// (0x0001fb33) status_small_pane_g5

0xa553,	// (0x0001fb41) status_small_pane_g6_ParamLimits

0xa553,	// (0x0001fb41) status_small_pane_g6

0x0007,

0xf73e,	// (0x00024d2c) status_small_pane_g_ParamLimits

0xf73e,	// (0x00024d2c) status_small_pane_g

0xa582,	// (0x0001fb70) status_small_pane_t1

0xa5a4,	// (0x0001fb92) status_small_wait_pane_ParamLimits

0xa5a4,	// (0x0001fb92) status_small_wait_pane

0xa230,	// (0x0001f81e) aid_levels_signal_ParamLimits

0xa230,	// (0x0001f81e) aid_levels_signal

0xa248,	// (0x0001f836) signal_pane_g1_ParamLimits

0xa248,	// (0x0001f836) signal_pane_g1

0xa263,	// (0x0001f851) signal_pane_g2_ParamLimits

0xa263,	// (0x0001f851) signal_pane_g2

0x0003,

0xf6cf,	// (0x00024cbd) signal_pane_g_ParamLimits

0xf6cf,	// (0x00024cbd) signal_pane_g

0xcc55,	// (0x00022243) context_pane_g1

0x94be,	// (0x0001eaac) title_pane_g1

0x94f5,	// (0x0001eae3) title_pane_t1

0xc2bd,	// (0x000218ab) title_pane_t2

0xc2e3,	// (0x000218d1) title_pane_t3

0x0002,

0xf532,	// (0x00024b20) title_pane_t

0xa992,	// (0x0001ff80) aid_levels_battery_ParamLimits

0xa992,	// (0x0001ff80) aid_levels_battery

0xa9ae,	// (0x0001ff9c) battery_pane_g1_ParamLimits

0xa9ae,	// (0x0001ff9c) battery_pane_g1

0xa9cb,	// (0x0001ffb9) battery_pane_g2_ParamLimits

0xa9cb,	// (0x0001ffb9) battery_pane_g2

0x0001,

0xf772,	// (0x00024d60) battery_pane_g_ParamLimits

0xf772,	// (0x00024d60) battery_pane_g

0xafa8,	// (0x00020596) uni_indicator_pane_g1

0xafbe,	// (0x000205ac) uni_indicator_pane_g2

0xafd4,	// (0x000205c2) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x00024eca) uni_indicator_pane_g

0xcef2,	// (0x000224e0) navi_icon_pane_ParamLimits

0xcef2,	// (0x000224e0) navi_icon_pane

0xce47,	// (0x00022435) navi_midp_pane

0xcf0e,	// (0x000224fc) navi_navi_pane

0xcf18,	// (0x00022506) navi_text_pane_ParamLimits

0xcf18,	// (0x00022506) navi_text_pane

0xc29d,	// (0x0002188b) status_small_wait_pane_g1

0xc54e,	// (0x00021b3c) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x00024ec5) status_small_wait_pane_g

0xaf01,	// (0x000204ef) navi_navi_icon_text_pane

0x20ff,	// (0x000176ed) navi_navi_pane_g1_ParamLimits

0x20ff,	// (0x000176ed) navi_navi_pane_g1

0x2111,	// (0x000176ff) navi_navi_pane_g2_ParamLimits

0x2111,	// (0x000176ff) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x00024e93) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x00024e93) navi_navi_pane_g

0x2123,	// (0x00017711) navi_navi_tabs_pane

0x212c,	// (0x0001771a) navi_navi_text_pane

0xaf01,	// (0x000204ef) navi_navi_volume_pane

0x20d3,	// (0x000176c1) navi_text_pane_t1

0x20c7,	// (0x000176b5) navi_icon_pane_g1

0x201a,	// (0x00017608) navi_navi_text_pane_t1

0x8bd9,	// (0x0001e1c7) navi_navi_volume_pane_g1

0xea55,	// (0x00024043) volume_small_pane

0x1f80,	// (0x0001756e) navi_navi_icon_text_pane_g1

0xae59,	// (0x00020447) navi_navi_icon_text_pane_t1

0xcf0e,	// (0x000224fc) navi_tabs_2_long_pane

0xcf0e,	// (0x000224fc) navi_tabs_2_pane

0xcf0e,	// (0x000224fc) navi_tabs_3_long_pane

0xcf0e,	// (0x000224fc) navi_tabs_3_pane

0xcf0e,	// (0x000224fc) navi_tabs_4_pane

0xea35,	// (0x00024023) tabs_2_active_pane_ParamLimits

0xea35,	// (0x00024023) tabs_2_active_pane

0xea45,	// (0x00024033) tabs_2_passive_pane_ParamLimits

0xea45,	// (0x00024033) tabs_2_passive_pane

0xea03,	// (0x00023ff1) tabs_3_active_pane_ParamLimits

0xea03,	// (0x00023ff1) tabs_3_active_pane

0xea13,	// (0x00024001) tabs_3_passive_pane_ParamLimits

0xea13,	// (0x00024001) tabs_3_passive_pane

0xea24,	// (0x00024012) tabs_3_passive_pane_cp_ParamLimits

0xea24,	// (0x00024012) tabs_3_passive_pane_cp

0xe9bf,	// (0x00023fad) tabs_4_active_pane_ParamLimits

0xe9bf,	// (0x00023fad) tabs_4_active_pane

0xe9d0,	// (0x00023fbe) tabs_4_passive_pane_ParamLimits

0xe9d0,	// (0x00023fbe) tabs_4_passive_pane

0xe9e1,	// (0x00023fcf) tabs_4_passive_pane_cp_ParamLimits

0xe9e1,	// (0x00023fcf) tabs_4_passive_pane_cp

0xe9f2,	// (0x00023fe0) tabs_4_passive_pane_cp2_ParamLimits

0xe9f2,	// (0x00023fe0) tabs_4_passive_pane_cp2

0xe99b,	// (0x00023f89) tabs_2_long_active_pane_ParamLimits

0xe99b,	// (0x00023f89) tabs_2_long_active_pane

0xe9ad,	// (0x00023f9b) tabs_2_long_passive_pane_ParamLimits

0xe9ad,	// (0x00023f9b) tabs_2_long_passive_pane

0xe956,	// (0x00023f44) tabs_3_long_active_pane_ParamLimits

0xe956,	// (0x00023f44) tabs_3_long_active_pane

0xe96f,	// (0x00023f5d) tabs_3_long_passive_pane_ParamLimits

0xe96f,	// (0x00023f5d) tabs_3_long_passive_pane

0xe982,	// (0x00023f70) tabs_3_long_passive_pane_cp_ParamLimits

0xe982,	// (0x00023f70) tabs_3_long_passive_pane_cp

0xe8fc,	// (0x00023eea) volume_small_pane_g1

0xe905,	// (0x00023ef3) volume_small_pane_g2

0xe90e,	// (0x00023efc) volume_small_pane_g3

0xe917,	// (0x00023f05) volume_small_pane_g4

0xe920,	// (0x00023f0e) volume_small_pane_g5

0xe929,	// (0x00023f17) volume_small_pane_g6

0xe932,	// (0x00023f20) volume_small_pane_g7

0xe93b,	// (0x00023f29) volume_small_pane_g8

0xe944,	// (0x00023f32) volume_small_pane_g9

0xe94d,	// (0x00023f3b) volume_small_pane_g10

0x0009,

0xf871,	// (0x00024e5f) volume_small_pane_g

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp2_ParamLimits

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp2

0x9581,	// (0x0001eb6f) tabs_3_active_pane_g1

0x9589,	// (0x0001eb77) tabs_3_active_pane_t1

0xc2f5,	// (0x000218e3) bg_passive_tab_pane_cp2_ParamLimits

0xc2f5,	// (0x000218e3) bg_passive_tab_pane_cp2

0x9581,	// (0x0001eb6f) tabs_3_passive_pane_g1

0x9589,	// (0x0001eb77) tabs_3_passive_pane_t1

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp3_ParamLimits

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp3

0x959b,	// (0x0001eb89) tabs_4_active_pane_g1

0x95a3,	// (0x0001eb91) tabs_4_active_pane_t1

0xc2f5,	// (0x000218e3) bg_passive_tab_pane_cp3_ParamLimits

0xc2f5,	// (0x000218e3) bg_passive_tab_pane_cp3

0x959b,	// (0x0001eb89) tabs_4_1_passive_pane_g1

0x95a3,	// (0x0001eb91) tabs_4_1_passive_pane_t1

0xc8ed,	// (0x00021edb) list_highlight_pane_cp2

0xb0ec,	// (0x000206da) list_set_pane_ParamLimits

0xb0ec,	// (0x000206da) list_set_pane

0xb186,	// (0x00020774) main_pane_set_t1_ParamLimits

0xb186,	// (0x00020774) main_pane_set_t1

0xb1a6,	// (0x00020794) main_pane_set_t2_ParamLimits

0xb1a6,	// (0x00020794) main_pane_set_t2

0xb1ba,	// (0x000207a8) main_pane_set_t3_ParamLimits

0xb1ba,	// (0x000207a8) main_pane_set_t3

0xb1cc,	// (0x000207ba) main_pane_set_t4_ParamLimits

0xb1cc,	// (0x000207ba) main_pane_set_t4

0x0003,

0xf941,	// (0x00024f2f) main_pane_set_t_ParamLimits

0xf941,	// (0x00024f2f) main_pane_set_t

0xb1de,	// (0x000207cc) setting_code_pane

0xb1e8,	// (0x000207d6) setting_slider_graphic_pane

0xb1e8,	// (0x000207d6) setting_slider_pane

0xb1e8,	// (0x000207d6) setting_text_pane

0xb1e8,	// (0x000207d6) setting_volume_pane

0x813c,	// (0x0001d72a) volume_set_pane

0xc303,	// (0x000218f1) bg_set_opt_pane_cp

0x8144,	// (0x0001d732) setting_slider_pane_t1

0x815d,	// (0x0001d74b) setting_slider_pane_t2

0x8177,	// (0x0001d765) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00024b27) setting_slider_pane_t

0x818f,	// (0x0001d77d) slider_set_pane

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp2

0xc311,	// (0x000218ff) setting_slider_graphic_pane_g1

0x81a5,	// (0x0001d793) setting_slider_graphic_pane_t1

0x81b5,	// (0x0001d7a3) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00024b2e) setting_slider_graphic_pane_t

0x81c5,	// (0x0001d7b3) slider_set_pane_cp

0xc2a7,	// (0x00021895) input_focus_pane_cp1

0x2609,	// (0x00017bf7) list_set_text_pane

0xc29d,	// (0x0002188b) setting_text_pane_g1

0xc2a7,	// (0x00021895) input_focus_pane_cp2

0xc29d,	// (0x0002188b) setting_code_pane_g1

0xc31a,	// (0x00021908) setting_code_pane_t1

0xc328,	// (0x00021916) set_text_pane_t1_ParamLimits

0xc328,	// (0x00021916) set_text_pane_t1

0xc803,	// (0x00021df1) set_opt_bg_pane_g1

0xc80b,	// (0x00021df9) set_opt_bg_pane_g2

0xb0a1,	// (0x0002068f) set_opt_bg_pane_g3

0xc81b,	// (0x00021e09) set_opt_bg_pane_g4

0xc823,	// (0x00021e11) set_opt_bg_pane_g5

0xc82b,	// (0x00021e19) set_opt_bg_pane_g6

0xb0ab,	// (0x00020699) set_opt_bg_pane_g7

0xb0b3,	// (0x000206a1) set_opt_bg_pane_g8

0xb0bd,	// (0x000206ab) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x00024f1c) set_opt_bg_pane_g

0xb094,	// (0x00020682) slider_set_pane_g1

0xea5e,	// (0x0002404c) slider_set_pane_g2

0x0006,

0xf91f,	// (0x00024f0d) slider_set_pane_g

0x8be1,	// (0x0001e1cf) volume_set_pane_g1

0x8be9,	// (0x0001e1d7) volume_set_pane_g2

0x8bf1,	// (0x0001e1df) volume_set_pane_g3

0x8bf9,	// (0x0001e1e7) volume_set_pane_g4

0x8c01,	// (0x0001e1ef) volume_set_pane_g5

0x8c09,	// (0x0001e1f7) volume_set_pane_g6

0x8c11,	// (0x0001e1ff) volume_set_pane_g7

0x8c19,	// (0x0001e207) volume_set_pane_g8

0x8c21,	// (0x0001e20f) volume_set_pane_g9

0x8c29,	// (0x0001e217) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x00024ee5) volume_set_pane_g

0x95b5,	// (0x0001eba3) indicator_pane_ParamLimits

0x95b5,	// (0x0001eba3) indicator_pane

0x95dd,	// (0x0001ebcb) main_idle_pane_g2_ParamLimits

0x95dd,	// (0x0001ebcb) main_idle_pane_g2

0x9615,	// (0x0001ec03) main_pane_idle_g1_ParamLimits

0x9615,	// (0x0001ec03) main_pane_idle_g1

0xc342,	// (0x00021930) popup_clock_digital_analogue_window_ParamLimits

0xc342,	// (0x00021930) popup_clock_digital_analogue_window

0x963c,	// (0x0001ec2a) soft_indicator_pane_ParamLimits

0x963c,	// (0x0001ec2a) soft_indicator_pane

0x9660,	// (0x0001ec4e) wallpaper_pane_ParamLimits

0x9660,	// (0x0001ec4e) wallpaper_pane

0xc29d,	// (0x0002188b) wallpaper_pane_g1

0x9672,	// (0x0001ec60) indicator_pane_g1_ParamLimits

0x9672,	// (0x0001ec60) indicator_pane_g1

0x2afa,	// (0x000180e8) navi_navi_icon_text_pane_srt_g1

0xc370,	// (0x0002195e) soft_indicator_pane_t1

0xc38a,	// (0x00021978) aid_ps_area_pane

0x9688,	// (0x0001ec76) aid_ps_clock_pane

0xc39b,	// (0x00021989) aid_ps_indicator_pane

0xc3a7,	// (0x00021995) indicator_ps_pane_ParamLimits

0xc3a7,	// (0x00021995) indicator_ps_pane

0xc3b6,	// (0x000219a4) power_save_pane_g1_ParamLimits

0xc3b6,	// (0x000219a4) power_save_pane_g1

0xc3c2,	// (0x000219b0) power_save_pane_g2_ParamLimits

0xc3c2,	// (0x000219b0) power_save_pane_g2

0xe191,	// (0x0002377f) aid_navinavi_width_pane

0xc38a,	// (0x00021978) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00024b33) power_save_pane_g_ParamLimits

0xf545,	// (0x00024b33) power_save_pane_g

0xc3d0,	// (0x000219be) power_save_pane_t1_ParamLimits

0xc3d0,	// (0x000219be) power_save_pane_t1

0x9688,	// (0x0001ec76) aid_ps_clock_pane_ParamLimits

0xc39b,	// (0x00021989) aid_ps_indicator_pane_ParamLimits

0xc3e2,	// (0x000219d0) power_save_pane_t4_ParamLimits

0xc3e2,	// (0x000219d0) power_save_pane_t4

0x0001,

0xf54a,	// (0x00024b38) power_save_pane_t_ParamLimits

0xf54a,	// (0x00024b38) power_save_pane_t

0xc40c,	// (0x000219fa) power_save_t3_ParamLimits

0xc40c,	// (0x000219fa) power_save_t3

0xc3f7,	// (0x000219e5) power_save_t2_ParamLimits

0xc3f7,	// (0x000219e5) power_save_t2

0xc421,	// (0x00021a0f) indicator_ps_pane_g1

0x9696,	// (0x0001ec84) ai_gene_pane_ParamLimits

0x9696,	// (0x0001ec84) ai_gene_pane

0x96ad,	// (0x0001ec9b) ai_links_pane_ParamLimits

0x96ad,	// (0x0001ec9b) ai_links_pane

0x96c5,	// (0x0001ecb3) indicator_pane_cp1_ParamLimits

0x96c5,	// (0x0001ecb3) indicator_pane_cp1

0x96d4,	// (0x0001ecc2) main_pane_idle_g1_cp_ParamLimits

0x96d4,	// (0x0001ecc2) main_pane_idle_g1_cp

0x96ec,	// (0x0001ecda) popup_ai_links_title_window

0x96f5,	// (0x0001ece3) soft_indicator_pane_cp1_ParamLimits

0x96f5,	// (0x0001ece3) soft_indicator_pane_cp1

0x23be,	// (0x000179ac) ai_links_pane_g1

0x23c7,	// (0x000179b5) grid_ai_links_pane

0xaf9f,	// (0x0002058d) ai_gene_pane_1

0x23ac,	// (0x0001799a) ai_gene_pane_2

0x23b5,	// (0x000179a3) list_highlight_pane_cp4

0xaf7b,	// (0x00020569) cell_ai_link_pane_ParamLimits

0xaf7b,	// (0x00020569) cell_ai_link_pane

0x237d,	// (0x0001796b) cell_ai_link_pane_g1

0xc54e,	// (0x00021b3c) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x00024ec0) cell_ai_link_pane_g

0xc2a7,	// (0x00021895) grid_highlight_cp2

0xc2a7,	// (0x00021895) bg_popup_sub_pane_cp1

0xc438,	// (0x00021a26) popup_ai_links_title_window_t1

0x22cd,	// (0x000178bb) ai_gene_pane_1_g1_ParamLimits

0x22cd,	// (0x000178bb) ai_gene_pane_1_g1

0x22d9,	// (0x000178c7) ai_gene_pane_1_g2_ParamLimits

0x22d9,	// (0x000178c7) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00024eb6) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00024eb6) ai_gene_pane_1_g

0x22e6,	// (0x000178d4) ai_gene_pane_1_t1_ParamLimits

0x22e6,	// (0x000178d4) ai_gene_pane_1_t1

0x231a,	// (0x00017908) grid_ai_soft_ind_pane

0x22b8,	// (0x000178a6) ai_gene_pane_2_t1_ParamLimits

0x22b8,	// (0x000178a6) ai_gene_pane_2_t1

0x9709,	// (0x0001ecf7) main_pane_empty_t1_ParamLimits

0x9709,	// (0x0001ecf7) main_pane_empty_t1

0x9721,	// (0x0001ed0f) main_pane_empty_t2_ParamLimits

0x9721,	// (0x0001ed0f) main_pane_empty_t2

0x9736,	// (0x0001ed24) main_pane_empty_t3_ParamLimits

0x9736,	// (0x0001ed24) main_pane_empty_t3

0x9748,	// (0x0001ed36) main_pane_empty_t4_ParamLimits

0x9748,	// (0x0001ed36) main_pane_empty_t4

0x975a,	// (0x0001ed48) main_pane_empty_t5_ParamLimits

0x975a,	// (0x0001ed48) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00024b3d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00024b3d) main_pane_empty_t

0xc888,	// (0x00021e76) bg_popup_window_pane_ParamLimits

0xc888,	// (0x00021e76) bg_popup_window_pane

0xaef5,	// (0x000204e3) find_popup_pane_cp2_ParamLimits

0xaef5,	// (0x000204e3) find_popup_pane_cp2

0x2034,	// (0x00017622) heading_pane_ParamLimits

0x2034,	// (0x00017622) heading_pane

0xc2a7,	// (0x00021895) bg_popup_sub_pane

0xae76,	// (0x00020464) bg_popup_window_pane_g1_ParamLimits

0xae76,	// (0x00020464) bg_popup_window_pane_g1

0xae85,	// (0x00020473) bg_popup_window_pane_g2_ParamLimits

0xae85,	// (0x00020473) bg_popup_window_pane_g2

0xae91,	// (0x0002047f) bg_popup_window_pane_g3_ParamLimits

0xae91,	// (0x0002047f) bg_popup_window_pane_g3

0xae9d,	// (0x0002048b) bg_popup_window_pane_g4_ParamLimits

0xae9d,	// (0x0002048b) bg_popup_window_pane_g4

0xaeac,	// (0x0002049a) bg_popup_window_pane_g5_ParamLimits

0xaeac,	// (0x0002049a) bg_popup_window_pane_g5

0xaebc,	// (0x000204aa) bg_popup_window_pane_g6_ParamLimits

0xaebc,	// (0x000204aa) bg_popup_window_pane_g6

0xaec8,	// (0x000204b6) bg_popup_window_pane_g7_ParamLimits

0xaec8,	// (0x000204b6) bg_popup_window_pane_g7

0xaed7,	// (0x000204c5) bg_popup_window_pane_g8_ParamLimits

0xaed7,	// (0x000204c5) bg_popup_window_pane_g8

0xaee6,	// (0x000204d4) bg_popup_window_pane_g9_ParamLimits

0xaee6,	// (0x000204d4) bg_popup_window_pane_g9

0x200e,	// (0x000175fc) bg_popup_window_pane_g10_ParamLimits

0x200e,	// (0x000175fc) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00024e7e) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00024e7e) bg_popup_window_pane_g

0x1f37,	// (0x00017525) bg_popup_heading_pane_ParamLimits

0x1f37,	// (0x00017525) bg_popup_heading_pane

0xea8e,	// (0x0002407c) tabs_4_passive_pane_cp_srt_ParamLimits

0xea8e,	// (0x0002407c) tabs_4_passive_pane_cp_srt

0xeaa0,	// (0x0002408e) tabs_4_passive_pane_srt_ParamLimits

0x1f4b,	// (0x00017539) heading_pane_g2

0xeaa0,	// (0x0002408e) tabs_4_passive_pane_srt

0x1280,	// (0x0001686e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1280,	// (0x0001686e) bg_passive_tab_pane_cp3_srt

0x1f53,	// (0x00017541) heading_pane_t1_ParamLimits

0x1f53,	// (0x00017541) heading_pane_t1

0x1f6a,	// (0x00017558) heading_pane_t2_ParamLimits

0x1f6a,	// (0x00017558) heading_pane_t2

0x0001,

0xf88b,	// (0x00024e79) heading_pane_t_ParamLimits

0xf88b,	// (0x00024e79) heading_pane_t

0x1a74,	// (0x00017062) bg_popup_heading_pane_g1

0x1b23,	// (0x00017111) bg_popup_heading_pane_g2

0x1b2d,	// (0x0001711b) bg_popup_heading_pane_g3

0x1b37,	// (0x00017125) bg_popup_heading_pane_g4

0x1b41,	// (0x0001712f) bg_popup_heading_pane_g5

0x1b4b,	// (0x00017139) bg_popup_heading_pane_g6

0x1b53,	// (0x00017141) bg_popup_heading_pane_g7

0x1b5b,	// (0x00017149) bg_popup_heading_pane_g8

0x1b65,	// (0x00017153) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x00024e35) bg_popup_heading_pane_g

0x1160,	// (0x0001674e) bg_popup_sub_pane_g1

0x1170,	// (0x0001675e) bg_popup_sub_pane_g2

0x1168,	// (0x00016756) bg_popup_sub_pane_g3

0x1180,	// (0x0001676e) bg_popup_sub_pane_g4

0x1178,	// (0x00016766) bg_popup_sub_pane_g5

0x1188,	// (0x00016776) bg_popup_sub_pane_g6

0x1190,	// (0x0001677e) bg_popup_sub_pane_g7

0x11a0,	// (0x0001678e) bg_popup_sub_pane_g8

0x1198,	// (0x00016786) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x00024e0f) bg_popup_sub_pane_g

0xc2f5,	// (0x000218e3) bg_popup_window_pane_cp5_ParamLimits

0xc2f5,	// (0x000218e3) bg_popup_window_pane_cp5

0xc455,	// (0x00021a43) popup_note_window_g1_ParamLimits

0xc455,	// (0x00021a43) popup_note_window_g1

0xc461,	// (0x00021a4f) popup_note_window_t1_ParamLimits

0xc461,	// (0x00021a4f) popup_note_window_t1

0xc477,	// (0x00021a65) popup_note_window_t2_ParamLimits

0xc477,	// (0x00021a65) popup_note_window_t2

0xc48d,	// (0x00021a7b) popup_note_window_t3_ParamLimits

0xc48d,	// (0x00021a7b) popup_note_window_t3

0xc4a3,	// (0x00021a91) popup_note_window_t4_ParamLimits

0xc4a3,	// (0x00021a91) popup_note_window_t4

0xc4cb,	// (0x00021ab9) popup_note_window_t5_ParamLimits

0xc4cb,	// (0x00021ab9) popup_note_window_t5

0x0004,

0xf55a,	// (0x00024b48) popup_note_window_t_ParamLimits

0xf55a,	// (0x00024b48) popup_note_window_t

0xc4ef,	// (0x00021add) bg_popup_window_pane_cp6_ParamLimits

0xc4ef,	// (0x00021add) bg_popup_window_pane_cp6

0x19f0,	// (0x00016fde) popup_note_image_window_g1_ParamLimits

0x19f0,	// (0x00016fde) popup_note_image_window_g1

0xad1b,	// (0x00020309) popup_note_image_window_g2_ParamLimits

0xad1b,	// (0x00020309) popup_note_image_window_g2

0x0001,

0xf815,	// (0x00024e03) popup_note_image_window_g_ParamLimits

0xf815,	// (0x00024e03) popup_note_image_window_g

0x1a15,	// (0x00017003) popup_note_image_window_t1_ParamLimits

0x1a15,	// (0x00017003) popup_note_image_window_t1

0x1a2e,	// (0x0001701c) popup_note_image_window_t2_ParamLimits

0x1a2e,	// (0x0001701c) popup_note_image_window_t2

0x1a47,	// (0x00017035) popup_note_image_window_t3_ParamLimits

0x1a47,	// (0x00017035) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x00024e08) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x00024e08) popup_note_image_window_t

0x18b9,	// (0x00016ea7) bg_popup_window_pane_cp7_ParamLimits

0x18b9,	// (0x00016ea7) bg_popup_window_pane_cp7

0x18e9,	// (0x00016ed7) popup_note_wait_window_g1_ParamLimits

0x18e9,	// (0x00016ed7) popup_note_wait_window_g1

0x18f5,	// (0x00016ee3) popup_note_wait_window_g2_ParamLimits

0x18f5,	// (0x00016ee3) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x00024df1) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x00024df1) popup_note_wait_window_g

0x190d,	// (0x00016efb) popup_note_wait_window_t1_ParamLimits

0x190d,	// (0x00016efb) popup_note_wait_window_t1

0xacbc,	// (0x000202aa) popup_note_wait_window_t2_ParamLimits

0xacbc,	// (0x000202aa) popup_note_wait_window_t2

0xacd9,	// (0x000202c7) popup_note_wait_window_t3_ParamLimits

0xacd9,	// (0x000202c7) popup_note_wait_window_t3

0xacec,	// (0x000202da) popup_note_wait_window_t4_ParamLimits

0xacec,	// (0x000202da) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x00024df8) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x00024df8) popup_note_wait_window_t

0x1989,	// (0x00016f77) wait_bar_pane_ParamLimits

0x1989,	// (0x00016f77) wait_bar_pane

0xc2a7,	// (0x00021895) wait_anim_pane

0xc2a7,	// (0x00021895) wait_border_pane

0xc29d,	// (0x0002188b) wait_anim_pane_g1

0xc29d,	// (0x0002188b) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00024cb8) wait_anim_pane_g

0x1865,	// (0x00016e53) wait_border_pane_g1

0x1870,	// (0x00016e5e) wait_border_pane_g2

0x1879,	// (0x00016e67) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x00024dea) wait_border_pane_g

0x16d0,	// (0x00016cbe) bg_popup_window_pane_cp16_ParamLimits

0x16d0,	// (0x00016cbe) bg_popup_window_pane_cp16

0xac6c,	// (0x0002025a) indicator_popup_pane_cp4_ParamLimits

0xac6c,	// (0x0002025a) indicator_popup_pane_cp4

0x17e4,	// (0x00016dd2) popup_query_data_window_t1_ParamLimits

0x17e4,	// (0x00016dd2) popup_query_data_window_t1

0x17f6,	// (0x00016de4) popup_query_data_window_t2_ParamLimits

0x17f6,	// (0x00016de4) popup_query_data_window_t2

0x180f,	// (0x00016dfd) popup_query_data_window_t3_ParamLimits

0x180f,	// (0x00016dfd) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x00024de3) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x00024de3) popup_query_data_window_t

0xac80,	// (0x0002026e) query_popup_data_pane_ParamLimits

0xac80,	// (0x0002026e) query_popup_data_pane

0xac94,	// (0x00020282) query_popup_data_pane_cp1_ParamLimits

0xac94,	// (0x00020282) query_popup_data_pane_cp1

0x16d0,	// (0x00016cbe) bg_popup_window_pane_cp10_ParamLimits

0x16d0,	// (0x00016cbe) bg_popup_window_pane_cp10

0xabe7,	// (0x000201d5) indicator_popup_pane_ParamLimits

0xabe7,	// (0x000201d5) indicator_popup_pane

0xac09,	// (0x000201f7) popup_query_code_window_t1_ParamLimits

0xac09,	// (0x000201f7) popup_query_code_window_t1

0xac23,	// (0x00020211) popup_query_code_window_t2_ParamLimits

0xac23,	// (0x00020211) popup_query_code_window_t2

0x1787,	// (0x00016d75) popup_query_code_window_t3_ParamLimits

0x1787,	// (0x00016d75) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x00024ddc) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x00024ddc) popup_query_code_window_t

0x17b6,	// (0x00016da4) query_popup_pane_ParamLimits

0x17b6,	// (0x00016da4) query_popup_pane

0xc4ef,	// (0x00021add) bg_popup_window_pane_cp15_ParamLimits

0xc4ef,	// (0x00021add) bg_popup_window_pane_cp15

0x9792,	// (0x0001ed80) indicator_popup_pane_cp1_ParamLimits

0x9792,	// (0x0001ed80) indicator_popup_pane_cp1

0x97a5,	// (0x0001ed93) indicator_popup_pane_cp2_ParamLimits

0x97a5,	// (0x0001ed93) indicator_popup_pane_cp2

0x97b8,	// (0x0001eda6) popup_query_data_code_window_g1_ParamLimits

0x97b8,	// (0x0001eda6) popup_query_data_code_window_g1

0xc50d,	// (0x00021afb) popup_query_data_code_window_t1_ParamLimits

0xc50d,	// (0x00021afb) popup_query_data_code_window_t1

0xc51f,	// (0x00021b0d) popup_query_data_code_window_t2_ParamLimits

0xc51f,	// (0x00021b0d) popup_query_data_code_window_t2

0x97cb,	// (0x0001edb9) popup_query_data_code_window_t3_ParamLimits

0x97cb,	// (0x0001edb9) popup_query_data_code_window_t3

0x97e1,	// (0x0001edcf) popup_query_data_code_window_t4_ParamLimits

0x97e1,	// (0x0001edcf) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00024b53) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00024b53) popup_query_data_code_window_t

0xe8a0,	// (0x00023e8e) list_single_midp_graphic_pane_g3

0x97f9,	// (0x0001ede7) query_popup_data_pane_cp2_ParamLimits

0x980c,	// (0x0001edfa) query_popup_pane_cp2_ParamLimits

0x980c,	// (0x0001edfa) query_popup_pane_cp2

0xc2a7,	// (0x00021895) bg_popup_window_pane_cp11

0x16b4,	// (0x00016ca2) heading_pane_cp5

0x16bc,	// (0x00016caa) listscroll_popup_info_pane

0xc2a7,	// (0x00021895) input_focus_pane_cp3

0xc531,	// (0x00021b1f) query_popup_pane_t1

0xc53f,	// (0x00021b2d) list_popup_info_pane_ParamLimits

0xc53f,	// (0x00021b2d) list_popup_info_pane

0xc54e,	// (0x00021b3c) listscroll_popup_info_pane_g1

0xc556,	// (0x00021b44) scroll_pane_cp7

0x981f,	// (0x0001ee0d) popup_info_list_pane_t1_ParamLimits

0x981f,	// (0x0001ee0d) popup_info_list_pane_t1

0x9839,	// (0x0001ee27) popup_info_list_pane_t2_ParamLimits

0x9839,	// (0x0001ee27) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00024b5c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00024b5c) popup_info_list_pane_t

0xc2a7,	// (0x00021895) bg_popup_window_pane_cp12

0xb3cd,	// (0x000209bb) find_popup_pane

0xc303,	// (0x000218f1) bg_popup_window_pane_cp3

0xc560,	// (0x00021b4e) heading_pane_cp3

0xc56f,	// (0x00021b5d) listscroll_popup_graphic_pane

0xc2a7,	// (0x00021895) bg_popup_window_pane_cp4

0x98a3,	// (0x0001ee91) heading_pane_cp4

0xc57f,	// (0x00021b6d) listscroll_popup_colour_pane

0x98ad,	// (0x0001ee9b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x98ad,	// (0x0001ee9b) cell_large_graphic_colour_none_popup_pane

0x98c1,	// (0x0001eeaf) grid_large_graphic_colour_popup_pane_ParamLimits

0x98c1,	// (0x0001eeaf) grid_large_graphic_colour_popup_pane

0x98e5,	// (0x0001eed3) listscroll_popup_colour_pane_g1_ParamLimits

0x98e5,	// (0x0001eed3) listscroll_popup_colour_pane_g1

0x98fc,	// (0x0001eeea) listscroll_popup_colour_pane_g2_ParamLimits

0x98fc,	// (0x0001eeea) listscroll_popup_colour_pane_g2

0x9913,	// (0x0001ef01) listscroll_popup_colour_pane_g3_ParamLimits

0x9913,	// (0x0001ef01) listscroll_popup_colour_pane_g3

0x9923,	// (0x0001ef11) listscroll_popup_colour_pane_g4_ParamLimits

0x9923,	// (0x0001ef11) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00024b61) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00024b61) listscroll_popup_colour_pane_g

0xc587,	// (0x00021b75) scroll_pane_cp6_ParamLimits

0xc587,	// (0x00021b75) scroll_pane_cp6

0x9933,	// (0x0001ef21) cell_large_graphic_colour_popup_pane_ParamLimits

0x9933,	// (0x0001ef21) cell_large_graphic_colour_popup_pane

0x9952,	// (0x0001ef40) cell_large_graphic_colour_none_popup_pane_t1

0xc2a7,	// (0x00021895) grid_highlight_pane_cp5

0xc599,	// (0x00021b87) cell_large_graphic_colour_popup_pane_g1

0xc5a1,	// (0x00021b8f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00024b6a) cell_large_graphic_colour_popup_pane_g

0xc5a9,	// (0x00021b97) cell_large_graphic_colour_popup_pane_g2_copy1

0xc5b2,	// (0x00021ba0) grid_highlight_pane_cp4

0xc5ba,	// (0x00021ba8) bg_popup_window_pane_cp8_ParamLimits

0xc5ba,	// (0x00021ba8) bg_popup_window_pane_cp8

0x9961,	// (0x0001ef4f) popup_snote_single_text_window_g1_ParamLimits

0x9961,	// (0x0001ef4f) popup_snote_single_text_window_g1

0x9973,	// (0x0001ef61) popup_snote_single_text_window_t1_ParamLimits

0x9973,	// (0x0001ef61) popup_snote_single_text_window_t1

0x9986,	// (0x0001ef74) popup_snote_single_text_window_t2_ParamLimits

0x9986,	// (0x0001ef74) popup_snote_single_text_window_t2

0x9999,	// (0x0001ef87) popup_snote_single_text_window_t3_ParamLimits

0x9999,	// (0x0001ef87) popup_snote_single_text_window_t3

0x99d2,	// (0x0001efc0) popup_snote_single_text_window_t4_ParamLimits

0x99d2,	// (0x0001efc0) popup_snote_single_text_window_t4

0x9a06,	// (0x0001eff4) popup_snote_single_text_window_t5_ParamLimits

0x9a06,	// (0x0001eff4) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00024b6f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00024b6f) popup_snote_single_text_window_t

0xc5d5,	// (0x00021bc3) bg_popup_window_pane_cp9_ParamLimits

0xc5d5,	// (0x00021bc3) bg_popup_window_pane_cp9

0x9961,	// (0x0001ef4f) popup_snote_single_graphic_window_g1_ParamLimits

0x9961,	// (0x0001ef4f) popup_snote_single_graphic_window_g1

0xc5e3,	// (0x00021bd1) popup_snote_single_graphic_window_g2_ParamLimits

0xc5e3,	// (0x00021bd1) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00024b7a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00024b7a) popup_snote_single_graphic_window_g

0xc5ef,	// (0x00021bdd) popup_snote_single_graphic_window_t1_ParamLimits

0xc5ef,	// (0x00021bdd) popup_snote_single_graphic_window_t1

0xc602,	// (0x00021bf0) popup_snote_single_graphic_window_t2_ParamLimits

0xc602,	// (0x00021bf0) popup_snote_single_graphic_window_t2

0x9999,	// (0x0001ef87) popup_snote_single_graphic_window_t3_ParamLimits

0x9999,	// (0x0001ef87) popup_snote_single_graphic_window_t3

0x99d2,	// (0x0001efc0) popup_snote_single_graphic_window_t4_ParamLimits

0x99d2,	// (0x0001efc0) popup_snote_single_graphic_window_t4

0x9a35,	// (0x0001f023) popup_snote_single_graphic_window_t5_ParamLimits

0x9a35,	// (0x0001f023) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00024b7f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00024b7f) popup_snote_single_graphic_window_t

0x2a56,	// (0x00018044) grid_graphic_popup_pane_ParamLimits

0x2a56,	// (0x00018044) grid_graphic_popup_pane

0x2a80,	// (0x0001806e) listscroll_popup_graphic_pane_g1_ParamLimits

0x2a80,	// (0x0001806e) listscroll_popup_graphic_pane_g1

0xb36b,	// (0x00020959) listscroll_popup_graphic_pane_g2_ParamLimits

0xb36b,	// (0x00020959) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00024f59) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00024f59) listscroll_popup_graphic_pane_g

0x2aa8,	// (0x00018096) scroll_pane_cp5

0xb32a,	// (0x00020918) cell_graphic_popup_pane_ParamLimits

0xb32a,	// (0x00020918) cell_graphic_popup_pane

0x29cd,	// (0x00017fbb) cell_graphic_popup_pane_g1

0x29d5,	// (0x00017fc3) cell_graphic_popup_pane_g2

0xc5a9,	// (0x00021b97) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x00024f52) cell_graphic_popup_pane_g

0x29de,	// (0x00017fcc) cell_graphic_popup_pane_t2

0xc5b2,	// (0x00021ba0) grid_highlight_pane_cp3

0xc627,	// (0x00021c15) list_gen_pane_ParamLimits

0xc627,	// (0x00021c15) list_gen_pane

0xc64f,	// (0x00021c3d) scroll_pane

0xb294,	// (0x00020882) bg_list_pane_g1_ParamLimits

0xb294,	// (0x00020882) bg_list_pane_g1

0xb2af,	// (0x0002089d) bg_list_pane_g2_ParamLimits

0xb2af,	// (0x0002089d) bg_list_pane_g2

0xb2c2,	// (0x000208b0) bg_list_pane_g3_ParamLimits

0xb2c2,	// (0x000208b0) bg_list_pane_g3

0xb2d4,	// (0x000208c2) bg_list_pane_g4_ParamLimits

0xb2d4,	// (0x000208c2) bg_list_pane_g4

0xb2e6,	// (0x000208d4) bg_list_pane_g5_ParamLimits

0xb2e6,	// (0x000208d4) bg_list_pane_g5

0x0004,

0xf959,	// (0x00024f47) bg_list_pane_g_ParamLimits

0xf959,	// (0x00024f47) bg_list_pane_g

0xb237,	// (0x00020825) list_double2_graphic_large_graphic_pane_ParamLimits

0xb237,	// (0x00020825) list_double2_graphic_large_graphic_pane

0xb237,	// (0x00020825) list_double2_graphic_pane_ParamLimits

0xb237,	// (0x00020825) list_double2_graphic_pane

0xb237,	// (0x00020825) list_double2_large_graphic_pane_ParamLimits

0xb237,	// (0x00020825) list_double2_large_graphic_pane

0xb24a,	// (0x00020838) list_double2_pane_ParamLimits

0xb24a,	// (0x00020838) list_double2_pane

0xb237,	// (0x00020825) list_double_graphic_heading_pane_ParamLimits

0xb237,	// (0x00020825) list_double_graphic_heading_pane

0xb237,	// (0x00020825) list_double_graphic_pane_ParamLimits

0xb237,	// (0x00020825) list_double_graphic_pane

0xb237,	// (0x00020825) list_double_heading_pane_ParamLimits

0xb237,	// (0x00020825) list_double_heading_pane

0xb237,	// (0x00020825) list_double_large_graphic_pane_ParamLimits

0xb237,	// (0x00020825) list_double_large_graphic_pane

0xb237,	// (0x00020825) list_double_number_pane_ParamLimits

0xb237,	// (0x00020825) list_double_number_pane

0xb237,	// (0x00020825) list_double_pane_ParamLimits

0xb237,	// (0x00020825) list_double_pane

0xb237,	// (0x00020825) list_double_time_pane_ParamLimits

0xb237,	// (0x00020825) list_double_time_pane

0xb237,	// (0x00020825) list_setting_number_pane_ParamLimits

0xb237,	// (0x00020825) list_setting_number_pane

0xb237,	// (0x00020825) list_setting_pane_ParamLimits

0xb237,	// (0x00020825) list_setting_pane

0xa010,	// (0x0001f5fe) list_single_2graphic_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_2graphic_pane

0xa010,	// (0x0001f5fe) list_single_graphic_heading_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_graphic_heading_pane

0xa010,	// (0x0001f5fe) list_single_graphic_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_graphic_pane

0xa010,	// (0x0001f5fe) list_single_heading_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_heading_pane

0xb237,	// (0x00020825) list_single_large_graphic_pane_ParamLimits

0xb237,	// (0x00020825) list_single_large_graphic_pane

0xa010,	// (0x0001f5fe) list_single_number_heading_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_number_heading_pane

0xa010,	// (0x0001f5fe) list_single_number_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_number_pane

0xa010,	// (0x0001f5fe) list_single_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_pane

0xc2a7,	// (0x00021895) list_highlight_pane_cp1

0xc683,	// (0x00021c71) list_single_pane_g1_ParamLimits

0xc683,	// (0x00021c71) list_single_pane_g1

0x10e2,	// (0x000166d0) list_single_pane_g2_ParamLimits

0x10e2,	// (0x000166d0) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00024b91) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00024b91) list_single_pane_g

0x46f2,	// (0x00019ce0) list_single_pane_t1_ParamLimits

0x46f2,	// (0x00019ce0) list_single_pane_t1

0xc683,	// (0x00021c71) list_single_number_pane_g1_ParamLimits

0xc683,	// (0x00021c71) list_single_number_pane_g1

0x10e2,	// (0x000166d0) list_single_number_pane_g2_ParamLimits

0x10e2,	// (0x000166d0) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00024b91) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00024b91) list_single_number_pane_g

0x10ee,	// (0x000166dc) list_single_number_pane_t1_ParamLimits

0x10ee,	// (0x000166dc) list_single_number_pane_t1

0xb043,	// (0x00020631) list_single_number_pane_t2_ParamLimits

0xb043,	// (0x00020631) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x00024f08) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x00024f08) list_single_number_pane_t

0x10d6,	// (0x000166c4) list_single_graphic_pane_g1_ParamLimits

0x10d6,	// (0x000166c4) list_single_graphic_pane_g1

0xc683,	// (0x00021c71) list_single_graphic_pane_g2_ParamLimits

0xc683,	// (0x00021c71) list_single_graphic_pane_g2

0x10e2,	// (0x000166d0) list_single_graphic_pane_g3_ParamLimits

0x10e2,	// (0x000166d0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00024b8a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00024b8a) list_single_graphic_pane_g

0x10ee,	// (0x000166dc) list_single_graphic_pane_t1_ParamLimits

0x10ee,	// (0x000166dc) list_single_graphic_pane_t1

0xc683,	// (0x00021c71) list_single_heading_pane_g1_ParamLimits

0xc683,	// (0x00021c71) list_single_heading_pane_g1

0x10e2,	// (0x000166d0) list_single_heading_pane_g2_ParamLimits

0x10e2,	// (0x000166d0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00024b91) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00024b91) list_single_heading_pane_g

0x9a6e,	// (0x0001f05c) list_single_heading_pane_t1_ParamLimits

0x9a6e,	// (0x0001f05c) list_single_heading_pane_t1

0x9a84,	// (0x0001f072) list_single_heading_pane_t2_ParamLimits

0x9a84,	// (0x0001f072) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00024b96) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00024b96) list_single_heading_pane_t

0xc683,	// (0x00021c71) list_single_number_heading_pane_g1_ParamLimits

0xc683,	// (0x00021c71) list_single_number_heading_pane_g1

0x10e2,	// (0x000166d0) list_single_number_heading_pane_g2_ParamLimits

0x10e2,	// (0x000166d0) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00024b91) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00024b91) list_single_number_heading_pane_g

0x9a6e,	// (0x0001f05c) list_single_number_heading_pane_t1_ParamLimits

0x9a6e,	// (0x0001f05c) list_single_number_heading_pane_t1

0x9a96,	// (0x0001f084) list_single_number_heading_pane_t2_ParamLimits

0x9a96,	// (0x0001f084) list_single_number_heading_pane_t2

0x9aa8,	// (0x0001f096) list_single_number_heading_pane_t3_ParamLimits

0x9aa8,	// (0x0001f096) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00024b9b) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00024b9b) list_single_number_heading_pane_t

0x9aba,	// (0x0001f0a8) list_single_graphic_heading_pane_g1_ParamLimits

0x9aba,	// (0x0001f0a8) list_single_graphic_heading_pane_g1

0x9ac6,	// (0x0001f0b4) list_single_graphic_heading_pane_g4_ParamLimits

0x9ac6,	// (0x0001f0b4) list_single_graphic_heading_pane_g4

0x10e2,	// (0x000166d0) list_single_graphic_heading_pane_g5_ParamLimits

0x10e2,	// (0x000166d0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00024ba2) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00024ba2) list_single_graphic_heading_pane_g

0x9a6e,	// (0x0001f05c) list_single_graphic_heading_pane_t1_ParamLimits

0x9a6e,	// (0x0001f05c) list_single_graphic_heading_pane_t1

0x9ad7,	// (0x0001f0c5) list_single_graphic_heading_pane_t2_ParamLimits

0x9ad7,	// (0x0001f0c5) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00024ba9) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00024ba9) list_single_graphic_heading_pane_t

0x311b,	// (0x00018709) list_single_large_graphic_pane_g1_ParamLimits

0x311b,	// (0x00018709) list_single_large_graphic_pane_g1

0x3127,	// (0x00018715) list_single_large_graphic_pane_g2_ParamLimits

0x3127,	// (0x00018715) list_single_large_graphic_pane_g2

0x3133,	// (0x00018721) list_single_large_graphic_pane_g3_ParamLimits

0x3133,	// (0x00018721) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00024bae) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00024bae) list_single_large_graphic_pane_g

0x1870,	// (0x00016e5e) wait_border_pane_g2_copy1

0x9ae9,	// (0x0001f0d7) list_single_large_graphic_pane_g4_cp2

0x313f,	// (0x0001872d) list_single_large_graphic_pane_t1_ParamLimits

0x313f,	// (0x0001872d) list_single_large_graphic_pane_t1

0xc68f,	// (0x00021c7d) list_double_pane_g1_ParamLimits

0xc68f,	// (0x00021c7d) list_double_pane_g1

0xc69b,	// (0x00021c89) list_double_pane_g2_ParamLimits

0xc69b,	// (0x00021c89) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00024bb5) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00024bb5) list_double_pane_g

0x9af1,	// (0x0001f0df) list_double_pane_t1_ParamLimits

0x9af1,	// (0x0001f0df) list_double_pane_t1

0x9b07,	// (0x0001f0f5) list_double_pane_t2_ParamLimits

0x9b07,	// (0x0001f0f5) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00024bba) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00024bba) list_double_pane_t

0x9b19,	// (0x0001f107) list_double2_pane_g1_ParamLimits

0x9b19,	// (0x0001f107) list_double2_pane_g1

0x9b2a,	// (0x0001f118) list_double2_pane_g2_ParamLimits

0x9b2a,	// (0x0001f118) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00024bbf) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00024bbf) list_double2_pane_g

0x9b36,	// (0x0001f124) list_double2_pane_t1_ParamLimits

0x9b36,	// (0x0001f124) list_double2_pane_t1

0x9b4c,	// (0x0001f13a) list_double2_pane_t2_ParamLimits

0x9b4c,	// (0x0001f13a) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00024bc4) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00024bc4) list_double2_pane_t

0xc68f,	// (0x00021c7d) list_double_number_pane_g1_ParamLimits

0xc68f,	// (0x00021c7d) list_double_number_pane_g1

0xc69b,	// (0x00021c89) list_double_number_pane_g2_ParamLimits

0xc69b,	// (0x00021c89) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00024bb5) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00024bb5) list_double_number_pane_g

0x9b5e,	// (0x0001f14c) list_double_number_pane_t1_ParamLimits

0x9b5e,	// (0x0001f14c) list_double_number_pane_t1

0x9b70,	// (0x0001f15e) list_double_number_pane_t2_ParamLimits

0x9b70,	// (0x0001f15e) list_double_number_pane_t2

0x9b86,	// (0x0001f174) list_double_number_pane_t3_ParamLimits

0x9b86,	// (0x0001f174) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00024bc9) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00024bc9) list_double_number_pane_t

0x9b98,	// (0x0001f186) list_double_graphic_pane_g1_ParamLimits

0x9b98,	// (0x0001f186) list_double_graphic_pane_g1

0x9ba4,	// (0x0001f192) list_double_graphic_pane_g2_ParamLimits

0x9ba4,	// (0x0001f192) list_double_graphic_pane_g2

0x9bb3,	// (0x0001f1a1) list_double_graphic_pane_g3_ParamLimits

0x9bb3,	// (0x0001f1a1) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00024bd0) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00024bd0) list_double_graphic_pane_g

0x9af1,	// (0x0001f0df) list_double_graphic_pane_t1_ParamLimits

0x9af1,	// (0x0001f0df) list_double_graphic_pane_t1

0x9b07,	// (0x0001f0f5) list_double_graphic_pane_t2_ParamLimits

0x9b07,	// (0x0001f0f5) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x00024bba) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x00024bba) list_double_graphic_pane_t

0x9bcb,	// (0x0001f1b9) list_double2_graphic_pane_g1_ParamLimits

0x9bcb,	// (0x0001f1b9) list_double2_graphic_pane_g1

0x9bd7,	// (0x0001f1c5) list_double2_graphic_pane_g2_ParamLimits

0x9bd7,	// (0x0001f1c5) list_double2_graphic_pane_g2

0x9be3,	// (0x0001f1d1) list_double2_graphic_pane_g3_ParamLimits

0x9be3,	// (0x0001f1d1) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00024bd9) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00024bd9) list_double2_graphic_pane_g

0x9bef,	// (0x0001f1dd) list_double2_graphic_pane_t1_ParamLimits

0x9bef,	// (0x0001f1dd) list_double2_graphic_pane_t1

0x9c05,	// (0x0001f1f3) list_double2_graphic_pane_t2_ParamLimits

0x9c05,	// (0x0001f1f3) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024be0) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024be0) list_double2_graphic_pane_t

0x9c17,	// (0x0001f205) list_double_large_graphic_pane_g1_ParamLimits

0x9c17,	// (0x0001f205) list_double_large_graphic_pane_g1

0x9c36,	// (0x0001f224) list_double_large_graphic_pane_g2_ParamLimits

0x9c36,	// (0x0001f224) list_double_large_graphic_pane_g2

0xc69b,	// (0x00021c89) list_double_large_graphic_pane_g3_ParamLimits

0xc69b,	// (0x00021c89) list_double_large_graphic_pane_g3

0x9c47,	// (0x0001f235) list_double_large_graphic_pane_g4_ParamLimits

0x9c47,	// (0x0001f235) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x00024be5) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x00024be5) list_double_large_graphic_pane_g

0x9c59,	// (0x0001f247) list_double_large_graphic_pane_t1_ParamLimits

0x9c59,	// (0x0001f247) list_double_large_graphic_pane_t1

0x9c72,	// (0x0001f260) list_double_large_graphic_pane_t2_ParamLimits

0x9c72,	// (0x0001f260) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x00024bf0) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x00024bf0) list_double_large_graphic_pane_t

0x9c84,	// (0x0001f272) list_double2_large_graphic_pane_g1_ParamLimits

0x9c84,	// (0x0001f272) list_double2_large_graphic_pane_g1

0x9c90,	// (0x0001f27e) list_double2_large_graphic_pane_g2_ParamLimits

0x9c90,	// (0x0001f27e) list_double2_large_graphic_pane_g2

0x9be3,	// (0x0001f1d1) list_double2_large_graphic_pane_g3_ParamLimits

0x9be3,	// (0x0001f1d1) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x00024bf5) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x00024bf5) list_double2_large_graphic_pane_g

0x9bef,	// (0x0001f1dd) list_double2_large_graphic_pane_t1_ParamLimits

0x9bef,	// (0x0001f1dd) list_double2_large_graphic_pane_t1

0x9c05,	// (0x0001f1f3) list_double2_large_graphic_pane_t2_ParamLimits

0x9c05,	// (0x0001f1f3) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024be0) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024be0) list_double2_large_graphic_pane_t

0x9ca1,	// (0x0001f28f) list_double_heading_pane_g1_ParamLimits

0x9ca1,	// (0x0001f28f) list_double_heading_pane_g1

0x9cb2,	// (0x0001f2a0) list_double_heading_pane_g2_ParamLimits

0x9cb2,	// (0x0001f2a0) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x00024bfc) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x00024bfc) list_double_heading_pane_g

0x9cbe,	// (0x0001f2ac) list_double_heading_pane_t1_ParamLimits

0x9cbe,	// (0x0001f2ac) list_double_heading_pane_t1

0x9c05,	// (0x0001f1f3) list_double_heading_pane_t2_ParamLimits

0x9c05,	// (0x0001f1f3) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x00024c01) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x00024c01) list_double_heading_pane_t

0x9cd4,	// (0x0001f2c2) list_double_graphic_heading_pane_g1_ParamLimits

0x9cd4,	// (0x0001f2c2) list_double_graphic_heading_pane_g1

0x9ca1,	// (0x0001f28f) list_double_graphic_heading_pane_g2_ParamLimits

0x9ca1,	// (0x0001f28f) list_double_graphic_heading_pane_g2

0x9cb2,	// (0x0001f2a0) list_double_graphic_heading_pane_g3_ParamLimits

0x9cb2,	// (0x0001f2a0) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x00024c06) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x00024c06) list_double_graphic_heading_pane_g

0x9cbe,	// (0x0001f2ac) list_double_graphic_heading_pane_t1_ParamLimits

0x9cbe,	// (0x0001f2ac) list_double_graphic_heading_pane_t1

0x9c05,	// (0x0001f1f3) list_double_graphic_heading_pane_t2_ParamLimits

0x9c05,	// (0x0001f1f3) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x00024c01) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x00024c01) list_double_graphic_heading_pane_t

0x9c36,	// (0x0001f224) list_double_time_pane_g1_ParamLimits

0x9c36,	// (0x0001f224) list_double_time_pane_g1

0xc69b,	// (0x00021c89) list_double_time_pane_g2_ParamLimits

0xc69b,	// (0x00021c89) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x00024c0d) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x00024c0d) list_double_time_pane_g

0x9ce0,	// (0x0001f2ce) list_double_time_pane_t1_ParamLimits

0x9ce0,	// (0x0001f2ce) list_double_time_pane_t1

0x9cf6,	// (0x0001f2e4) list_double_time_pane_t2_ParamLimits

0x9cf6,	// (0x0001f2e4) list_double_time_pane_t2

0x9d08,	// (0x0001f2f6) list_double_time_pane_t3_ParamLimits

0x9d08,	// (0x0001f2f6) list_double_time_pane_t3

0x9d1a,	// (0x0001f308) list_double_time_pane_t4_ParamLimits

0x9d1a,	// (0x0001f308) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00024c12) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00024c12) list_double_time_pane_t

0x9bd7,	// (0x0001f1c5) list_setting_pane_g1_ParamLimits

0x9bd7,	// (0x0001f1c5) list_setting_pane_g1

0x9be3,	// (0x0001f1d1) list_setting_pane_g2_ParamLimits

0x9be3,	// (0x0001f1d1) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00024c1b) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00024c1b) list_setting_pane_g

0x9d2c,	// (0x0001f31a) list_setting_pane_t1_ParamLimits

0x9d2c,	// (0x0001f31a) list_setting_pane_t1

0x9d43,	// (0x0001f331) list_setting_pane_t2_ParamLimits

0x9d43,	// (0x0001f331) list_setting_pane_t2

0x0002,

0xf632,	// (0x00024c20) list_setting_pane_t_ParamLimits

0xf632,	// (0x00024c20) list_setting_pane_t

0x9d82,	// (0x0001f370) set_value_pane_cp_ParamLimits

0x9d82,	// (0x0001f370) set_value_pane_cp

0x9bd7,	// (0x0001f1c5) list_setting_number_pane_g1_ParamLimits

0x9bd7,	// (0x0001f1c5) list_setting_number_pane_g1

0x9be3,	// (0x0001f1d1) list_setting_number_pane_g2_ParamLimits

0x9be3,	// (0x0001f1d1) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x00024c1b) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x00024c1b) list_setting_number_pane_g

0x9d8e,	// (0x0001f37c) list_setting_number_pane_t1_ParamLimits

0x9d8e,	// (0x0001f37c) list_setting_number_pane_t1

0x9da2,	// (0x0001f390) list_setting_number_pane_t2_ParamLimits

0x9da2,	// (0x0001f390) list_setting_number_pane_t2

0x9db9,	// (0x0001f3a7) list_setting_number_pane_t3_ParamLimits

0x9db9,	// (0x0001f3a7) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x00024c27) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x00024c27) list_setting_number_pane_t

0x9d82,	// (0x0001f370) set_value_pane_ParamLimits

0x9d82,	// (0x0001f370) set_value_pane

0xc6bc,	// (0x00021caa) bg_set_opt_pane_ParamLimits

0xc6bc,	// (0x00021caa) bg_set_opt_pane

0xc6dd,	// (0x00021ccb) set_value_pane_t1

0xc6eb,	// (0x00021cd9) slider_set_pane_cp3

0x9dfc,	// (0x0001f3ea) volume_small_pane_cp

0xc6f4,	// (0x00021ce2) list_form_gen_pane

0xc6fd,	// (0x00021ceb) scroll_pane_cp8

0x9e05,	// (0x0001f3f3) form_field_data_pane_ParamLimits

0x9e05,	// (0x0001f3f3) form_field_data_pane

0x9e1c,	// (0x0001f40a) form_field_data_wide_pane_ParamLimits

0x9e1c,	// (0x0001f40a) form_field_data_wide_pane

0x9e3c,	// (0x0001f42a) form_field_popup_pane_ParamLimits

0x9e3c,	// (0x0001f42a) form_field_popup_pane

0x9e5c,	// (0x0001f44a) form_field_popup_wide_pane_ParamLimits

0x9e5c,	// (0x0001f44a) form_field_popup_wide_pane

0xc71e,	// (0x00021d0c) form_field_slider_pane_ParamLimits

0xc71e,	// (0x00021d0c) form_field_slider_pane

0x9e73,	// (0x0001f461) form_field_slider_wide_pane_ParamLimits

0x9e73,	// (0x0001f461) form_field_slider_wide_pane

0xc731,	// (0x00021d1f) data_form_pane

0x9e90,	// (0x0001f47e) form_field_data_pane_t1

0xc73d,	// (0x00021d2b) input_focus_pane

0xc74b,	// (0x00021d39) data_form_wide_pane

0xc788,	// (0x00021d76) form_field_data_wide_pane_t1

0xc5c7,	// (0x00021bb5) input_focus_pane_cp6

0x9eaa,	// (0x0001f498) form_field_popup_pane_t1

0xc73d,	// (0x00021d2b) input_focus_pane_cp7

0xc7aa,	// (0x00021d98) list_form_pane

0xc7be,	// (0x00021dac) form_field_popup_wide_pane_t1

0xc73d,	// (0x00021d2b) input_focus_pane_cp8

0xc7d3,	// (0x00021dc1) list_form_wide_pane

0x9ecc,	// (0x0001f4ba) form_field_slider_pane_t1_ParamLimits

0x9ecc,	// (0x0001f4ba) form_field_slider_pane_t1

0x9ee4,	// (0x0001f4d2) form_field_slider_pane_t2_ParamLimits

0x9ee4,	// (0x0001f4d2) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x00024c37) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x00024c37) form_field_slider_pane_t

0xc2f5,	// (0x000218e3) input_focus_pane_cp9_ParamLimits

0xc2f5,	// (0x000218e3) input_focus_pane_cp9

0x9ef9,	// (0x0001f4e7) slider_cont_pane_ParamLimits

0x9ef9,	// (0x0001f4e7) slider_cont_pane

0xc7df,	// (0x00021dcd) form_field_slider_wide_pane_t1_ParamLimits

0xc7df,	// (0x00021dcd) form_field_slider_wide_pane_t1

0xc7f1,	// (0x00021ddf) form_field_slider_wide_pane_t2_ParamLimits

0xc7f1,	// (0x00021ddf) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x00024c3c) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x00024c3c) form_field_slider_wide_pane_t

0xc2f5,	// (0x000218e3) input_focus_pane_cp10_ParamLimits

0xc2f5,	// (0x000218e3) input_focus_pane_cp10

0x9f0d,	// (0x0001f4fb) slider_cont_pane_cp1_ParamLimits

0x9f0d,	// (0x0001f4fb) slider_cont_pane_cp1

0x9f21,	// (0x0001f50f) slider_form_pane_cp

0xc803,	// (0x00021df1) input_focus_pane_g1

0xc80b,	// (0x00021df9) input_focus_pane_g2

0xc813,	// (0x00021e01) input_focus_pane_g3

0xc81b,	// (0x00021e09) input_focus_pane_g4

0xc823,	// (0x00021e11) input_focus_pane_g5

0xc82b,	// (0x00021e19) input_focus_pane_g6

0xc833,	// (0x00021e21) input_focus_pane_g7

0xc83b,	// (0x00021e29) input_focus_pane_g8

0xc843,	// (0x00021e31) input_focus_pane_g9

0xc29d,	// (0x0002188b) input_focus_pane_g10

0x0009,

0xf653,	// (0x00024c41) input_focus_pane_g

0x1879,	// (0x00016e67) wait_border_pane_g3_copy1

0x9f29,	// (0x0001f517) data_form_pane_t1

0xc29d,	// (0x0002188b) wait_anim_pane_g1_copy1

0xb21b,	// (0x00020809) data_form_wide_pane_t1

0x9f43,	// (0x0001f531) list_form_graphic_pane_cp_ParamLimits

0x9f43,	// (0x0001f531) list_form_graphic_pane_cp

0x277a,	// (0x00017d68) slider_form_pane_g1

0x2783,	// (0x00017d71) slider_form_pane_g2

0x0006,

0xf94a,	// (0x00024f38) slider_form_pane_g

0x9f55,	// (0x0001f543) list_form_graphic_pane_ParamLimits

0x9f55,	// (0x0001f543) list_form_graphic_pane

0x9f68,	// (0x0001f556) list_form_graphic_pane_g1

0x9f70,	// (0x0001f55e) list_form_graphic_pane_t1_ParamLimits

0x9f70,	// (0x0001f55e) list_form_graphic_pane_t1

0xc303,	// (0x000218f1) list_highlight_pane_cp5_ParamLimits

0xc303,	// (0x000218f1) list_highlight_pane_cp5

0x9f85,	// (0x0001f573) find_pane_g1

0xc84b,	// (0x00021e39) input_find_pane

0x9f8e,	// (0x0001f57c) input_find_pane_g1_ParamLimits

0x9f8e,	// (0x0001f57c) input_find_pane_g1

0x9f9a,	// (0x0001f588) input_find_pane_t1_ParamLimits

0x9f9a,	// (0x0001f588) input_find_pane_t1

0x9faf,	// (0x0001f59d) input_find_pane_t2_ParamLimits

0x9faf,	// (0x0001f59d) input_find_pane_t2

0x0001,

0xf668,	// (0x00024c56) input_find_pane_t_ParamLimits

0xf668,	// (0x00024c56) input_find_pane_t

0xc854,	// (0x00021e42) input_focus_pane_cp5_ParamLimits

0xc854,	// (0x00021e42) input_focus_pane_cp5

0xc867,	// (0x00021e55) bg_popup_window_pane_cp2_ParamLimits

0xc867,	// (0x00021e55) bg_popup_window_pane_cp2

0xc874,	// (0x00021e62) listscroll_menu_pane_ParamLimits

0xc874,	// (0x00021e62) listscroll_menu_pane

0x9fd0,	// (0x0001f5be) popup_submenu_window_ParamLimits

0x9fd0,	// (0x0001f5be) popup_submenu_window

0xc880,	// (0x00021e6e) find_popup_pane_g1

0x9ff8,	// (0x0001f5e6) input_popup_find_pane_cp

0xc888,	// (0x00021e76) input_focus_pane_cp4_ParamLimits

0xc888,	// (0x00021e76) input_focus_pane_cp4

0xc896,	// (0x00021e84) input_popup_find_pane_t1_ParamLimits

0xc896,	// (0x00021e84) input_popup_find_pane_t1

0xc2a7,	// (0x00021895) bg_popup_sub_pane_cp

0xc8c4,	// (0x00021eb2) listscroll_popup_sub_pane

0xc8cc,	// (0x00021eba) list_submenu_pane_ParamLimits

0xc8cc,	// (0x00021eba) list_submenu_pane

0xc8dd,	// (0x00021ecb) scroll_pane_cp4

0xa010,	// (0x0001f5fe) list_single_popup_submenu_pane_ParamLimits

0xa010,	// (0x0001f5fe) list_single_popup_submenu_pane

0xa024,	// (0x0001f612) list_single_popup_submenu_pane_g1

0xa02c,	// (0x0001f61a) list_single_popup_submenu_pane_t1_ParamLimits

0xa02c,	// (0x0001f61a) list_single_popup_submenu_pane_t1

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp1_ParamLimits

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp1

0xc8e5,	// (0x00021ed3) tabs_2_active_pane_g1

0xa041,	// (0x0001f62f) tabs_2_active_pane_t1

0xc2f5,	// (0x000218e3) bg_passive_tab_pane_cp1_ParamLimits

0xc2f5,	// (0x000218e3) bg_passive_tab_pane_cp1

0xc8e5,	// (0x00021ed3) tabs_2_passive_pane_g1

0xa041,	// (0x0001f62f) tabs_2_passive_pane_t1

0xc303,	// (0x000218f1) bg_active_tab_pane_cp4

0xa053,	// (0x0001f641) tabs_2_long_active_pane_t1

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp4

0xe8a8,	// (0x00023e96) list_single_midp_graphic_pane_g4_ParamLimits

0xc303,	// (0x000218f1) bg_active_tab_pane_cp5

0xa066,	// (0x0001f654) tabs_3_long_active_pane_t1

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp5

0xe8a8,	// (0x00023e96) list_single_midp_graphic_pane_g4

0xc303,	// (0x000218f1) bg_popup_window_pane_cp13_ParamLimits

0xc303,	// (0x000218f1) bg_popup_window_pane_cp13

0xc8f9,	// (0x00021ee7) listscroll_popup_fast_pane_ParamLimits

0xc8f9,	// (0x00021ee7) listscroll_popup_fast_pane

0xc905,	// (0x00021ef3) grid_popup_fast_pane_ParamLimits

0xc905,	// (0x00021ef3) grid_popup_fast_pane

0xc917,	// (0x00021f05) scroll_pane_cp9_ParamLimits

0xc917,	// (0x00021f05) scroll_pane_cp9

0x46f2,	// (0x00019ce0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x46f2,	// (0x00019ce0) list_single_graphic_hl_pane_t1_cp2

0xc92a,	// (0x00021f18) input_focus_pane_cp20_ParamLimits

0xc92a,	// (0x00021f18) input_focus_pane_cp20

0xc938,	// (0x00021f26) query_popup_data_pane_t1_ParamLimits

0xc938,	// (0x00021f26) query_popup_data_pane_t1

0xc94b,	// (0x00021f39) query_popup_data_pane_t2_ParamLimits

0xc94b,	// (0x00021f39) query_popup_data_pane_t2

0xc991,	// (0x00021f7f) query_popup_data_pane_t3_ParamLimits

0xc991,	// (0x00021f7f) query_popup_data_pane_t3

0xc9d2,	// (0x00021fc0) query_popup_data_pane_t4_ParamLimits

0xc9d2,	// (0x00021fc0) query_popup_data_pane_t4

0xca0e,	// (0x00021ffc) query_popup_data_pane_t5_ParamLimits

0xca0e,	// (0x00021ffc) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x00024c5b) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x00024c5b) query_popup_data_pane_t

0xc803,	// (0x00021df1) bg_set_opt_pane_g1

0xc80b,	// (0x00021df9) bg_set_opt_pane_g2

0xc813,	// (0x00021e01) bg_set_opt_pane_g3

0xc81b,	// (0x00021e09) bg_set_opt_pane_g4

0xc823,	// (0x00021e11) bg_set_opt_pane_g5

0xc82b,	// (0x00021e19) bg_set_opt_pane_g6

0xc833,	// (0x00021e21) bg_set_opt_pane_g7

0xc83b,	// (0x00021e29) bg_set_opt_pane_g8

0xc843,	// (0x00021e31) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00024c66) bg_set_opt_pane_g

0xe567,	// (0x00023b55) control_top_pane_stacon_ParamLimits

0xe567,	// (0x00023b55) control_top_pane_stacon

0xe5ba,	// (0x00023ba8) signal_pane_stacon_ParamLimits

0xe5ba,	// (0x00023ba8) signal_pane_stacon

0xcd9a,	// (0x00022388) stacon_top_pane_g1_ParamLimits

0xcd9a,	// (0x00022388) stacon_top_pane_g1

0xe5df,	// (0x00023bcd) title_pane_stacon_ParamLimits

0xe5df,	// (0x00023bcd) title_pane_stacon

0xe609,	// (0x00023bf7) uni_indicator_pane_stacon_ParamLimits

0xe609,	// (0x00023bf7) uni_indicator_pane_stacon

0xe61e,	// (0x00023c0c) battery_pane_stacon_ParamLimits

0xe61e,	// (0x00023c0c) battery_pane_stacon

0xe662,	// (0x00023c50) control_bottom_pane_stacon_ParamLimits

0xe662,	// (0x00023c50) control_bottom_pane_stacon

0xe685,	// (0x00023c73) navi_pane_stacon_ParamLimits

0xe685,	// (0x00023c73) navi_pane_stacon

0xcdbc,	// (0x000223aa) stacon_bottom_pane_g1_ParamLimits

0xcdbc,	// (0x000223aa) stacon_bottom_pane_g1

0xe32a,	// (0x00023918) aid_levels_signal_lsc_ParamLimits

0xe32a,	// (0x00023918) aid_levels_signal_lsc

0xe340,	// (0x0002392e) signal_pane_stacon_g1_ParamLimits

0xe340,	// (0x0002392e) signal_pane_stacon_g1

0xe354,	// (0x00023942) signal_pane_stacon_g2_ParamLimits

0xe354,	// (0x00023942) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00024c79) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00024c79) signal_pane_stacon_g

0xe389,	// (0x00023977) title_pane_stacon_t1_ParamLimits

0xe389,	// (0x00023977) title_pane_stacon_t1

0xca52,	// (0x00022040) uni_indicator_pane_stacon_g1

0xca5c,	// (0x0002204a) uni_indicator_pane_stacon_g2

0xca66,	// (0x00022054) uni_indicator_pane_stacon_g3

0xca70,	// (0x0002205e) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00024c85) uni_indicator_pane_stacon_g

0xe3ae,	// (0x0002399c) control_top_pane_stacon_g1

0xe3b6,	// (0x000239a4) control_top_pane_stacon_t1_ParamLimits

0xe3b6,	// (0x000239a4) control_top_pane_stacon_t1

0xe3ed,	// (0x000239db) aid_levels_battery_lsc_ParamLimits

0xe3ed,	// (0x000239db) aid_levels_battery_lsc

0xe404,	// (0x000239f2) battery_pane_stacon_g1_ParamLimits

0xe404,	// (0x000239f2) battery_pane_stacon_g1

0xe417,	// (0x00023a05) battery_pane_stacon_g2_ParamLimits

0xe417,	// (0x00023a05) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00024c8e) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00024c8e) battery_pane_stacon_g

0xe455,	// (0x00023a43) navi_icon_pane_stacon

0xe469,	// (0x00023a57) navi_navi_pane_stacon

0xe455,	// (0x00023a43) navi_text_pane_stacon

0xe3ae,	// (0x0002399c) control_bottom_pane_stacon_g1

0xe47d,	// (0x00023a6b) control_bottom_pane_stacon_t1_ParamLimits

0xe47d,	// (0x00023a6b) control_bottom_pane_stacon_t1

0xa092,	// (0x0001f680) grid_app_pane_ParamLimits

0xa092,	// (0x0001f680) grid_app_pane

0xa0ca,	// (0x0001f6b8) scroll_pane_cp15_ParamLimits

0xa0ca,	// (0x0001f6b8) scroll_pane_cp15

0xa0df,	// (0x0001f6cd) cell_app_pane_ParamLimits

0xa0df,	// (0x0001f6cd) cell_app_pane

0xa124,	// (0x0001f712) cell_app_pane_g1_ParamLimits

0xa124,	// (0x0001f712) cell_app_pane_g1

0xca94,	// (0x00022082) cell_app_pane_g2_ParamLimits

0xca94,	// (0x00022082) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x00024c93) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x00024c93) cell_app_pane_g

0xa148,	// (0x0001f736) cell_app_pane_t1_ParamLimits

0xa148,	// (0x0001f736) cell_app_pane_t1

0xcaa0,	// (0x0002208e) grid_highlight_pane_ParamLimits

0xcaa0,	// (0x0002208e) grid_highlight_pane

0xc803,	// (0x00021df1) cell_highlight_pane_g1

0xc80b,	// (0x00021df9) cell_highlight_pane_g2

0xc813,	// (0x00021e01) cell_highlight_pane_g3

0xc81b,	// (0x00021e09) cell_highlight_pane_g4

0xc823,	// (0x00021e11) cell_highlight_pane_g5

0xc82b,	// (0x00021e19) cell_highlight_pane_g6

0xc833,	// (0x00021e21) cell_highlight_pane_g7

0xc83b,	// (0x00021e29) cell_highlight_pane_g8

0xc843,	// (0x00021e31) cell_highlight_pane_g9

0xc29d,	// (0x0002188b) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x00024c41) cell_highlight_pane_g

0xcab1,	// (0x0002209f) bg_scroll_pane

0x81d6,	// (0x0001d7c4) scroll_handle_pane

0xcaf8,	// (0x000220e6) scroll_bg_pane_g1

0xcb0d,	// (0x000220fb) scroll_bg_pane_g2

0xcb25,	// (0x00022113) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00024c98) scroll_bg_pane_g

0xa15f,	// (0x0001f74d) scroll_handle_focus_pane_ParamLimits

0xa15f,	// (0x0001f74d) scroll_handle_focus_pane

0xcaf8,	// (0x000220e6) scroll_handle_pane_g1

0xcb3a,	// (0x00022128) scroll_handle_pane_g2

0xcb25,	// (0x00022113) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x00024c9f) scroll_handle_pane_g

0xc888,	// (0x00021e76) bg_popup_sub_pane_cp21_ParamLimits

0xc888,	// (0x00021e76) bg_popup_sub_pane_cp21

0xa16c,	// (0x0001f75a) popup_fep_japan_predictive_window_t1_ParamLimits

0xa16c,	// (0x0001f75a) popup_fep_japan_predictive_window_t1

0xa183,	// (0x0001f771) popup_fep_japan_predictive_window_t2_ParamLimits

0xa183,	// (0x0001f771) popup_fep_japan_predictive_window_t2

0xa1b6,	// (0x0001f7a4) popup_fep_japan_predictive_window_t3_ParamLimits

0xa1b6,	// (0x0001f7a4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00024ca6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00024ca6) popup_fep_japan_predictive_window_t

0xc2a7,	// (0x00021895) bg_popup_sub_pane_cp23

0xa1ed,	// (0x0001f7db) listscroll_japin_cand_pane

0xcb4e,	// (0x0002213c) popup_fep_japan_candidate_window_t1

0xcb5c,	// (0x0002214a) candidate_pane_ParamLimits

0xcb5c,	// (0x0002214a) candidate_pane

0xa1f5,	// (0x0001f7e3) scroll_pane_cp30

0xcb6e,	// (0x0002215c) list_single_popup_jap_candidate_pane_ParamLimits

0xcb6e,	// (0x0002215c) list_single_popup_jap_candidate_pane

0xc2a7,	// (0x00021895) list_highlight_pane_cp30

0xcb83,	// (0x00022171) list_single_popup_jap_candidate_pane_t1

0xcb92,	// (0x00022180) level_1_signal

0xcb9f,	// (0x0002218d) level_2_signal

0xcbac,	// (0x0002219a) level_3_signal

0xcbb9,	// (0x000221a7) level_4_signal

0xcbc6,	// (0x000221b4) level_5_signal

0xcbd3,	// (0x000221c1) level_6_signal

0xcbe0,	// (0x000221ce) level_7_signal

0xcb92,	// (0x00022180) level_1_battery

0xcb9f,	// (0x0002218d) level_2_battery

0xcbac,	// (0x0002219a) level_3_battery

0xcbb9,	// (0x000221a7) level_4_battery

0xcbc6,	// (0x000221b4) level_5_battery

0xcbd3,	// (0x000221c1) level_6_battery

0xcbe0,	// (0x000221ce) level_7_battery

0xcc05,	// (0x000221f3) list_menu_pane_ParamLimits

0xcc05,	// (0x000221f3) list_menu_pane

0xcc1b,	// (0x00022209) scroll_pane_cp25_ParamLimits

0xcc1b,	// (0x00022209) scroll_pane_cp25

0xa1fd,	// (0x0001f7eb) list_double2_graphic_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double2_graphic_pane_cp2

0xa1fd,	// (0x0001f7eb) list_double2_large_graphic_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double2_large_graphic_pane_cp2

0xa1fd,	// (0x0001f7eb) list_double2_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double2_pane_cp2

0xa1fd,	// (0x0001f7eb) list_double_graphic_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double_graphic_pane_cp2

0xa1fd,	// (0x0001f7eb) list_double_large_graphic_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double_large_graphic_pane_cp2

0xa1fd,	// (0x0001f7eb) list_double_number_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double_number_pane_cp2

0xa1fd,	// (0x0001f7eb) list_double_pane_cp2_ParamLimits

0xa1fd,	// (0x0001f7eb) list_double_pane_cp2

0xa20c,	// (0x0001f7fa) list_single_2graphic_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_2graphic_pane_cp2

0xa20c,	// (0x0001f7fa) list_single_graphic_heading_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_graphic_heading_pane_cp2

0xa20c,	// (0x0001f7fa) list_single_graphic_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_graphic_pane_cp2

0xa20c,	// (0x0001f7fa) list_single_heading_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_heading_pane_cp2

0xcc44,	// (0x00022232) list_single_large_graphic_pane_cp2_ParamLimits

0xcc44,	// (0x00022232) list_single_large_graphic_pane_cp2

0xa20c,	// (0x0001f7fa) list_single_number_heading_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_number_heading_pane_cp2

0xa20c,	// (0x0001f7fa) list_single_number_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_number_pane_cp2

0xa21e,	// (0x0001f80c) list_single_pane_cp2_ParamLimits

0xa21e,	// (0x0001f80c) list_single_pane_cp2

0xcc5e,	// (0x0002224c) bg_popup_sub_pane_cp22

0xe54d,	// (0x00023b3b) popup_side_volume_key_window_g1

0xe559,	// (0x00023b47) popup_side_volume_key_window_t1

0x8225,	// (0x0001d813) volume_small_pane_cp1

0xc2f5,	// (0x000218e3) bg_popup_sub_pane_cp24_ParamLimits

0xc2f5,	// (0x000218e3) bg_popup_sub_pane_cp24

0xcc74,	// (0x00022262) fep_china_uni_candidate_pane_ParamLimits

0xcc74,	// (0x00022262) fep_china_uni_candidate_pane

0xcc88,	// (0x00022276) fep_china_uni_entry_pane

0xcc98,	// (0x00022286) popup_fep_china_uni_window_g1

0xa2ab,	// (0x0001f899) fep_china_uni_entry_pane_g1

0xa2b3,	// (0x0001f8a1) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x00024cd7) fep_china_uni_entry_pane_g

0xccb4,	// (0x000222a2) fep_entry_item_pane

0xccbe,	// (0x000222ac) fep_candidate_item_pane

0xa2bb,	// (0x0001f8a9) fep_china_uni_candidate_pane_g1

0xccc6,	// (0x000222b4) fep_china_uni_candidate_pane_g2

0xccce,	// (0x000222bc) fep_china_uni_candidate_pane_g3

0xa2c3,	// (0x0001f8b1) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x00024cdc) fep_china_uni_candidate_pane_g

0xc29d,	// (0x0002188b) fep_entry_item_pane_g1

0xccd6,	// (0x000222c4) fep_entry_item_pane_t1_ParamLimits

0xccd6,	// (0x000222c4) fep_entry_item_pane_t1

0xccec,	// (0x000222da) fep_candidate_item_pane_t1_ParamLimits

0xccec,	// (0x000222da) fep_candidate_item_pane_t1

0xcd01,	// (0x000222ef) fep_candidate_item_pane_t2_ParamLimits

0xcd01,	// (0x000222ef) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x00024ce5) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x00024ce5) fep_candidate_item_pane_t

0xc303,	// (0x000218f1) list_highlight_pane_cp31_ParamLimits

0xc303,	// (0x000218f1) list_highlight_pane_cp31

0xcd13,	// (0x00022301) level_1_signal_lsc

0xcd1c,	// (0x0002230a) level_2_signal_lsc

0xcd25,	// (0x00022313) level_3_signal_lsc

0xcd2e,	// (0x0002231c) level_4_signal_lsc

0xcd37,	// (0x00022325) level_5_signal_lsc

0xcd40,	// (0x0002232e) level_6_signal_lsc

0xcd49,	// (0x00022337) level_7_signal_lsc

0xcd49,	// (0x00022337) level_1_battery_lsc

0xcd52,	// (0x00022340) level_2_battery_lsc

0xcd5b,	// (0x00022349) level_3_battery_lsc

0xcd64,	// (0x00022352) level_4_battery_lsc

0xcd6d,	// (0x0002235b) level_5_battery_lsc

0xcd76,	// (0x00022364) level_6_battery_lsc

0xcd13,	// (0x00022301) level_7_battery_lsc

0xcd7f,	// (0x0002236d) scroll_handle_focus_pane_g1

0xcd88,	// (0x00022376) scroll_handle_focus_pane_g2

0xcd91,	// (0x0002237f) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x00024cea) scroll_handle_focus_pane_g

0xa2cb,	// (0x0001f8b9) list_single_2graphic_pane_g1_ParamLimits

0xa2cb,	// (0x0001f8b9) list_single_2graphic_pane_g1

0x9ac6,	// (0x0001f0b4) list_single_2graphic_pane_g2_ParamLimits

0x9ac6,	// (0x0001f0b4) list_single_2graphic_pane_g2

0x10e2,	// (0x000166d0) list_single_2graphic_pane_g3_ParamLimits

0x10e2,	// (0x000166d0) list_single_2graphic_pane_g3

0xa2d7,	// (0x0001f8c5) list_single_2graphic_pane_g4_ParamLimits

0xa2d7,	// (0x0001f8c5) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x00024cf1) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x00024cf1) list_single_2graphic_pane_g

0xa2e3,	// (0x0001f8d1) list_single_2graphic_pane_t1_ParamLimits

0xa2e3,	// (0x0001f8d1) list_single_2graphic_pane_t1

0xa311,	// (0x0001f8ff) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa311,	// (0x0001f8ff) list_double2_graphic_large_graphic_pane_g1

0x9c90,	// (0x0001f27e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c90,	// (0x0001f27e) list_double2_graphic_large_graphic_pane_g2

0x9be3,	// (0x0001f1d1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9be3,	// (0x0001f1d1) list_double2_graphic_large_graphic_pane_g3

0xa323,	// (0x0001f911) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa323,	// (0x0001f911) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x00024cfa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x00024cfa) list_double2_graphic_large_graphic_pane_g

0xa32f,	// (0x0001f91d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa32f,	// (0x0001f91d) list_double2_graphic_large_graphic_pane_t1

0xa345,	// (0x0001f933) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa345,	// (0x0001f933) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x00024d03) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x00024d03) list_double2_graphic_large_graphic_pane_t

0xa3ca,	// (0x0001f9b8) popup_fast_swap_window_ParamLimits

0xa3ca,	// (0x0001f9b8) popup_fast_swap_window

0xa3e6,	// (0x0001f9d4) popup_side_volume_key_window

0xce47,	// (0x00022435) stacon_top_pane

0xce51,	// (0x0002243f) status_pane_ParamLimits

0xce51,	// (0x0002243f) status_pane

0xa400,	// (0x0001f9ee) status_small_pane

0xc2a7,	// (0x00021895) control_pane

0xc2a7,	// (0x00021895) stacon_bottom_pane

0xc6fd,	// (0x00021ceb) scroll_pane_cp121

0xc6f4,	// (0x00021ce2) set_content_pane

0xa357,	// (0x0001f945) bg_active_tab_pane_g1_cp1

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp1

0xa369,	// (0x0001f957) bg_active_tab_pane_g3_cp1

0xa357,	// (0x0001f945) bg_passive_tab_pane_g1_cp1

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp1

0xa369,	// (0x0001f957) bg_passive_tab_pane_g3_cp1

0xa372,	// (0x0001f960) bg_active_tab_pane_g1_cp2

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp2

0xa37b,	// (0x0001f969) bg_active_tab_pane_g3_cp2

0xa372,	// (0x0001f960) bg_passive_tab_pane_g1_cp2

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp2

0xa37b,	// (0x0001f969) bg_passive_tab_pane_g3_cp2

0xa384,	// (0x0001f972) bg_active_tab_pane_g1_cp3

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp3

0xa38d,	// (0x0001f97b) bg_active_tab_pane_g3_cp3

0xa384,	// (0x0001f972) bg_passive_tab_pane_g1_cp3

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp3

0xa38d,	// (0x0001f97b) bg_passive_tab_pane_g3_cp3

0xa396,	// (0x0001f984) bg_active_tab_pane_g1_cp4

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp4

0xa3a1,	// (0x0001f98f) bg_active_tab_pane_g3_cp4

0xa396,	// (0x0001f984) bg_passive_tab_pane_g1_cp4

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp4

0xa3a1,	// (0x0001f98f) bg_passive_tab_pane_g3_cp4

0xa3ac,	// (0x0001f99a) bg_active_tab_pane_g1_cp5

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp5

0xa3b5,	// (0x0001f9a3) bg_active_tab_pane_g3_cp5

0xa3ac,	// (0x0001f99a) bg_passive_tab_pane_g1_cp5

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp5

0xa3b5,	// (0x0001f9a3) bg_passive_tab_pane_g3_cp5

0x2ea0,	// (0x0001848e) list_set_graphic_pane_ParamLimits

0x2ea0,	// (0x0001848e) list_set_graphic_pane

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp4

0xcdd8,	// (0x000223c6) list_set_graphic_pane_g1_ParamLimits

0xcdd8,	// (0x000223c6) list_set_graphic_pane_g1

0xcde4,	// (0x000223d2) list_set_graphic_pane_g2_ParamLimits

0xcde4,	// (0x000223d2) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x00024d08) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x00024d08) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x0002508d) volume_small_pane_cp_g

0xa3be,	// (0x0001f9ac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa3be,	// (0x0001f9ac) list_double2_large_graphic_pane_g1_cp2

0xce06,	// (0x000223f4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xce06,	// (0x000223f4) list_double2_large_graphic_pane_g2_cp2

0xce17,	// (0x00022405) list_double2_large_graphic_pane_g3_cp2

0xce1f,	// (0x0002240d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xce1f,	// (0x0002240d) list_double2_large_graphic_pane_t1_cp2

0xce35,	// (0x00022423) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xce35,	// (0x00022423) list_double2_large_graphic_pane_t2_cp2

0xaf6a,	// (0x00020558) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaf6a,	// (0x00020558) list_double_large_graphic_pane_g1_cp2

0x233b,	// (0x00017929) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x233b,	// (0x00017929) list_double_large_graphic_pane_g2_cp2

0xcf61,	// (0x0002254f) list_double_large_graphic_pane_g3_cp2

0x234c,	// (0x0001793a) list_double_large_graphic_pane_g4_cp

0x2354,	// (0x00017942) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2354,	// (0x00017942) list_double_large_graphic_pane_t1_cp2

0x236b,	// (0x00017959) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x236b,	// (0x00017959) list_double_large_graphic_pane_t2_cp2

0xce5f,	// (0x0002244d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xce5f,	// (0x0002244d) list_double2_graphic_pane_g1_cp2

0xce6d,	// (0x0002245b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xce6d,	// (0x0002245b) list_double2_graphic_pane_g2_cp2

0xce7e,	// (0x0002246c) list_double2_graphic_pane_g3_cp2

0xce88,	// (0x00022476) list_double2_graphic_pane_t1_cp2_ParamLimits

0xce88,	// (0x00022476) list_double2_graphic_pane_t1_cp2

0xce9e,	// (0x0002248c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xce9e,	// (0x0002248c) list_double2_graphic_pane_t2_cp2

0xc68f,	// (0x00021c7d) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc68f,	// (0x00021c7d) list_single_number_heading_pane_g1_cp2

0xceb0,	// (0x0002249e) list_single_number_heading_pane_g2_cp2

0xceb8,	// (0x000224a6) list_single_number_heading_pane_t1_cp2_ParamLimits

0xceb8,	// (0x000224a6) list_single_number_heading_pane_t1_cp2

0xcece,	// (0x000224bc) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcece,	// (0x000224bc) list_single_number_heading_pane_t2_cp2

0xcee0,	// (0x000224ce) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcee0,	// (0x000224ce) list_single_number_heading_pane_t3_cp2

0xc68f,	// (0x00021c7d) list_single_heading_pane_g1_cp2_ParamLimits

0xc68f,	// (0x00021c7d) list_single_heading_pane_g1_cp2

0xceb0,	// (0x0002249e) list_single_heading_pane_g2_cp2

0xceb8,	// (0x000224a6) list_single_heading_pane_t1_cp2_ParamLimits

0xceb8,	// (0x000224a6) list_single_heading_pane_t1_cp2

0x2134,	// (0x00017722) list_single_heading_pane_t2_cp2_ParamLimits

0x2134,	// (0x00017722) list_single_heading_pane_t2_cp2

0x207c,	// (0x0001766a) list_double_graphic_pane_g1_cp2_ParamLimits

0x207c,	// (0x0001766a) list_double_graphic_pane_g1_cp2

0x2088,	// (0x00017676) list_double_graphic_pane_g2_cp2_ParamLimits

0x2088,	// (0x00017676) list_double_graphic_pane_g2_cp2

0x2097,	// (0x00017685) list_double_graphic_pane_g3_cp2

0x209f,	// (0x0001768d) list_double_graphic_pane_t1_cp2_ParamLimits

0x209f,	// (0x0001768d) list_double_graphic_pane_t1_cp2

0x20b5,	// (0x000176a3) list_double_graphic_pane_t2_cp2_ParamLimits

0x20b5,	// (0x000176a3) list_double_graphic_pane_t2_cp2

0xcf55,	// (0x00022543) list_double_number_pane_g1_cp2_ParamLimits

0xcf55,	// (0x00022543) list_double_number_pane_g1_cp2

0xcf61,	// (0x0002254f) list_double_number_pane_g2_cp2

0x2040,	// (0x0001762e) list_double_number_pane_t1_cp2_ParamLimits

0x2040,	// (0x0001762e) list_double_number_pane_t1_cp2

0x2054,	// (0x00017642) list_double_number_pane_t2_cp2_ParamLimits

0x2054,	// (0x00017642) list_double_number_pane_t2_cp2

0x206a,	// (0x00017658) list_double_number_pane_t3_cp2_ParamLimits

0x206a,	// (0x00017658) list_double_number_pane_t3_cp2

0x1f29,	// (0x00017517) list_single_graphic_pane_g1_cp2_ParamLimits

0x1f29,	// (0x00017517) list_single_graphic_pane_g1_cp2

0xc683,	// (0x00021c71) list_single_graphic_pane_g2_cp2_ParamLimits

0xc683,	// (0x00021c71) list_single_graphic_pane_g2_cp2

0xcfba,	// (0x000225a8) list_single_graphic_pane_g3_cp2

0x1eff,	// (0x000174ed) list_single_graphic_pane_t1_cp2_ParamLimits

0x1eff,	// (0x000174ed) list_single_graphic_pane_t1_cp2

0xc683,	// (0x00021c71) list_single_number_pane_g1_cp2_ParamLimits

0xc683,	// (0x00021c71) list_single_number_pane_g1_cp2

0xcfba,	// (0x000225a8) list_single_number_pane_g2_cp2

0x1eff,	// (0x000174ed) list_single_number_pane_t1_cp2_ParamLimits

0x1eff,	// (0x000174ed) list_single_number_pane_t1_cp2

0x1f15,	// (0x00017503) list_single_number_pane_t2_cp2_ParamLimits

0x1f15,	// (0x00017503) list_single_number_pane_t2_cp2

0xce06,	// (0x000223f4) list_double2_pane_g1_cp2_ParamLimits

0xce06,	// (0x000223f4) list_double2_pane_g1_cp2

0xce17,	// (0x00022405) list_double2_pane_g2_cp2

0xcf2d,	// (0x0002251b) list_double2_pane_t1_cp2_ParamLimits

0xcf2d,	// (0x0002251b) list_double2_pane_t1_cp2

0xcf43,	// (0x00022531) list_double2_pane_t2_cp2_ParamLimits

0xcf43,	// (0x00022531) list_double2_pane_t2_cp2

0xcf55,	// (0x00022543) list_double_pane_g1_cp2_ParamLimits

0xcf55,	// (0x00022543) list_double_pane_g1_cp2

0xcf61,	// (0x0002254f) list_double_pane_g2_cp2

0xcf69,	// (0x00022557) list_double_pane_t1_cp2_ParamLimits

0xcf69,	// (0x00022557) list_double_pane_t1_cp2

0xcf7f,	// (0x0002256d) list_double_pane_t2_cp2_ParamLimits

0xcf7f,	// (0x0002256d) list_double_pane_t2_cp2

0xa40b,	// (0x0001f9f9) list_single_pane_cp2_g3

0xc683,	// (0x00021c71) list_single_pane_g1_cp2_ParamLimits

0xc683,	// (0x00021c71) list_single_pane_g1_cp2

0xcfba,	// (0x000225a8) list_single_pane_g2_cp2

0xcfc2,	// (0x000225b0) list_single_pane_t1_cp2_ParamLimits

0xcfc2,	// (0x000225b0) list_single_pane_t1_cp2

0xa413,	// (0x0001fa01) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa413,	// (0x0001fa01) list_single_large_graphic_pane_g1_cp2

0xcfda,	// (0x000225c8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcfda,	// (0x000225c8) list_single_large_graphic_pane_g2_cp2

0xcfe6,	// (0x000225d4) list_single_large_graphic_pane_g3_cp2

0xa41f,	// (0x0001fa0d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa41f,	// (0x0001fa0d) list_single_large_graphic_pane_g4_cp1

0xcfee,	// (0x000225dc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcfee,	// (0x000225dc) list_single_large_graphic_pane_t1_cp2

0x1ecb,	// (0x000174b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1ecb,	// (0x000174b9) list_single_graphic_heading_pane_g1_cp2

0x1e98,	// (0x00017486) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1e98,	// (0x00017486) list_single_graphic_heading_pane_g4_cp2

0xcfba,	// (0x000225a8) list_single_graphic_heading_pane_g5_cp2

0x1ed7,	// (0x000174c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1ed7,	// (0x000174c5) list_single_graphic_heading_pane_t1_cp2

0x1eed,	// (0x000174db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1eed,	// (0x000174db) list_single_graphic_heading_pane_t2_cp2

0x1e8c,	// (0x0001747a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1e8c,	// (0x0001747a) list_single_2graphic_pane_g1_cp2

0x1e98,	// (0x00017486) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1e98,	// (0x00017486) list_single_2graphic_pane_g2_cp2

0xcfba,	// (0x000225a8) list_single_2graphic_pane_g3_cp2

0x1ea9,	// (0x00017497) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1ea9,	// (0x00017497) list_single_2graphic_pane_g4_cp2

0x1eb5,	// (0x000174a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1eb5,	// (0x000174a3) list_single_2graphic_pane_t1_cp2

0xc29d,	// (0x0002188b) list_highlight_pane_g10_cp1

0x1a74,	// (0x00017062) list_highlight_pane_g1_cp1

0x1a7c,	// (0x0001706a) list_highlight_pane_g2_cp1

0x1a84,	// (0x00017072) list_highlight_pane_g3_cp1

0x1a8c,	// (0x0001707a) list_highlight_pane_g4_cp1

0x1a94,	// (0x00017082) list_highlight_pane_g5_cp1

0x1a9c,	// (0x0001708a) list_highlight_pane_g6_cp1

0x1aa4,	// (0x00017092) list_highlight_pane_g7_cp1

0x1aac,	// (0x0001709a) list_highlight_pane_g8_cp1

0x1ab4,	// (0x000170a2) list_highlight_pane_g9_cp1

0xacff,	// (0x000202ed) form_field_slider_pane_t3

0xad0d,	// (0x000202fb) form_field_slider_pane_t4

0x19b8,	// (0x00016fa6) slider_form_pane_ParamLimits

0x19b8,	// (0x00016fa6) slider_form_pane

0xc2a7,	// (0x00021895) control_abbreviations

0xc2a7,	// (0x00021895) control_conventions

0xc2a7,	// (0x00021895) control_definitions

0xc2a7,	// (0x00021895) format_table_attribute

0xaf41,	// (0x0002052f) bg_popup_preview_window_pane_g9

0xc2a7,	// (0x00021895) format_table_data2

0xc2a7,	// (0x00021895) format_table_data3

0xc2a7,	// (0x00021895) format_table_data_example

0x0008,

0xc2a7,	// (0x00021895) intro_purpose

0xf8aa,	// (0x00024e98) bg_popup_preview_window_pane_g

0xc2a7,	// (0x00021895) texts_category

0xc2a7,	// (0x00021895) texts_graphics

0xd004,	// (0x000225f2) text_digital

0xd013,	// (0x00022601) text_primary

0xd022,	// (0x00022610) text_primary_small

0xd031,	// (0x0002261f) text_secondary

0xd040,	// (0x0002262e) text_title

0xb2fa,	// (0x000208e8) bg_passive_tab_pane_g1_cp3_srt

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp3_srt

0xb303,	// (0x000208f1) bg_passive_tab_pane_g3_cp3_srt

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp3_srt_ParamLimits

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp3_srt

0xb30c,	// (0x000208fa) tabs_4_active_pane_srt_g1

0xb314,	// (0x00020902) tabs_4_active_pane_srt_t1_ParamLimits

0xb314,	// (0x00020902) tabs_4_active_pane_srt_t1

0xb2fa,	// (0x000208e8) bg_active_tab_pane_g1_cp3_copy1

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp3_copy1

0xb303,	// (0x000208f1) bg_active_tab_pane_g3_cp3_copy1

0xc303,	// (0x000218f1) tabs_2_long_active_pane_srt_ParamLimits

0xc303,	// (0x000218f1) tabs_2_long_active_pane_srt

0xc303,	// (0x000218f1) tabs_2_long_passive_pane_srt_ParamLimits

0xc303,	// (0x000218f1) tabs_2_long_passive_pane_srt

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp4_srt

0xb06b,	// (0x00020659) bg_passive_tab_pane_g1_cp4_srt

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp4_srt

0xb074,	// (0x00020662) bg_passive_tab_pane_g3_cp4_srt

0xc303,	// (0x000218f1) bg_active_tab_pane_cp4_srt_ParamLimits

0xc303,	// (0x000218f1) bg_active_tab_pane_cp4_srt

0xb07d,	// (0x0002066b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb07d,	// (0x0002066b) tabs_2_long_active_pane_srt_t1

0xb06b,	// (0x00020659) bg_active_tab_pane_g1_cp4_srt

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp4_srt

0xb074,	// (0x00020662) bg_active_tab_pane_g3_cp4_srt

0xc2f5,	// (0x000218e3) tabs_3_long_active_pane_srt_ParamLimits

0xc2f5,	// (0x000218e3) tabs_3_long_active_pane_srt

0xc2f5,	// (0x000218e3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc2f5,	// (0x000218e3) tabs_3_long_passive_pane_cp_srt

0xc2f5,	// (0x000218e3) tabs_3_long_passive_pane_srt_ParamLimits

0xc2f5,	// (0x000218e3) tabs_3_long_passive_pane_srt

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp5_srt

0xa3ac,	// (0x0001f99a) bg_passive_tab_pane_g1_cp5_srt

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp5_srt

0xa3b5,	// (0x0001f9a3) bg_passive_tab_pane_g3_cp5_srt

0xc303,	// (0x000218f1) bg_active_tab_pane_cp5_srt_ParamLimits

0xc303,	// (0x000218f1) bg_active_tab_pane_cp5_srt

0xb055,	// (0x00020643) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb055,	// (0x00020643) tabs_3_long_active_pane_srt_t1

0xa3ac,	// (0x0001f99a) bg_active_tab_pane_g1_cp5_srt

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp5_srt

0xa3b5,	// (0x0001f9a3) bg_active_tab_pane_g3_cp5_srt

0x2591,	// (0x00017b7f) navi_text_pane_srt_t1

0x2589,	// (0x00017b77) navi_icon_pane_srt_g1

0xd12b,	// (0x00022719) midp_editing_number_pane_srt

0xd04f,	// (0x0002263d) midp_ticker_pane_srt

0xd133,	// (0x00022721) midp_ticker_pane_srt_g1

0xd13b,	// (0x00022729) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x00024d27) midp_ticker_pane_srt_g

0xd143,	// (0x00022731) midp_ticker_pane_srt_t1

0x257a,	// (0x00017b68) midp_editing_number_pane_t1_copy1

0xa439,	// (0x0001fa27) listscroll_midp_pane

0xa439,	// (0x0001fa27) midp_form_pane

0xa4a4,	// (0x0001fa92) midp_info_popup_window_ParamLimits

0xa4a4,	// (0x0001fa92) midp_info_popup_window

0xc888,	// (0x00021e76) bg_popup_sub_pane_cp50_ParamLimits

0xc888,	// (0x00021e76) bg_popup_sub_pane_cp50

0x16a8,	// (0x00016c96) listscroll_midp_info_pane_ParamLimits

0x16a8,	// (0x00016c96) listscroll_midp_info_pane

0x1688,	// (0x00016c76) listscroll_form_midp_pane_ParamLimits

0x1688,	// (0x00016c76) listscroll_form_midp_pane

0x1694,	// (0x00016c82) scroll_bar_cp050

0x1688,	// (0x00016c76) list_midp_pane

0xb49e,	// (0x00020a8c) signal_pane_g2_cp

0x15a2,	// (0x00016b90) listscroll_midp_info_pane_t1_ParamLimits

0x15a2,	// (0x00016b90) listscroll_midp_info_pane_t1

0xab39,	// (0x00020127) listscroll_midp_info_pane_t2_ParamLimits

0xab39,	// (0x00020127) listscroll_midp_info_pane_t2

0xab77,	// (0x00020165) listscroll_midp_info_pane_t3_ParamLimits

0xab77,	// (0x00020165) listscroll_midp_info_pane_t3

0xabb1,	// (0x0002019f) listscroll_midp_info_pane_t4_ParamLimits

0xabb1,	// (0x0002019f) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x00024dd3) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x00024dd3) listscroll_midp_info_pane_t

0xc8dd,	// (0x00021ecb) scroll_pane_cp21

0x1542,	// (0x00016b30) form_midp_field_choice_group_pane

0xaafc,	// (0x000200ea) form_midp_field_text_pane

0x1588,	// (0x00016b76) form_midp_field_time_pane

0x1590,	// (0x00016b7e) form_midp_gauge_slider_pane

0x1599,	// (0x00016b87) form_midp_gauge_wait_pane

0xc2a7,	// (0x00021895) form_midp_image_pane

0xaae5,	// (0x000200d3) list_single_midp_pane_ParamLimits

0xaae5,	// (0x000200d3) list_single_midp_pane

0xaac3,	// (0x000200b1) form_midp_field_text_pane_t1

0x1280,	// (0x0001686e) input_focus_pane_cp050

0x14ff,	// (0x00016aed) list_midp_form_text_pane

0x1494,	// (0x00016a82) form_midp_field_choice_group_pane_t1

0x14a2,	// (0x00016a90) input_focus_pane_cp051

0x14b6,	// (0x00016aa4) list_midp_choice_pane

0xc2a7,	// (0x00021895) status_idle_pane

0x1478,	// (0x00016a66) form_midp_field_time_pane_t1

0xc29d,	// (0x0002188b) wait_anim_pane_g2_copy1

0x1486,	// (0x00016a74) form_midp_field_time_pane_t2

0x0001,

0xd0af,	// (0x0002269d) aid_navinavi_width_2_pane

0xf7e0,	// (0x00024dce) form_midp_field_time_pane_t

0xc2a7,	// (0x00021895) input_focus_pane_cp052

0xc2a7,	// (0x00021895) bg_input_focus_pane_cp040

0x1438,	// (0x00016a26) form_midp_gauge_slider_pane_t1

0x1446,	// (0x00016a34) form_midp_gauge_slider_pane_t2

0xaaa7,	// (0x00020095) form_midp_gauge_slider_pane_t3

0xaab5,	// (0x000200a3) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x00024dc5) form_midp_gauge_slider_pane_t

0x1470,	// (0x00016a5e) form_midp_slider_pane

0xc303,	// (0x000218f1) bg_input_focus_pane_cp041_ParamLimits

0xc303,	// (0x000218f1) bg_input_focus_pane_cp041

0x1405,	// (0x000169f3) form_midp_gauge_wait_pane_t1_ParamLimits

0x1405,	// (0x000169f3) form_midp_gauge_wait_pane_t1

0x1417,	// (0x00016a05) form_midp_gauge_wait_pane_t2_ParamLimits

0x1417,	// (0x00016a05) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x00024dc0) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x00024dc0) form_midp_gauge_wait_pane_t

0x1429,	// (0x00016a17) form_midp_wait_pane_ParamLimits

0x1429,	// (0x00016a17) form_midp_wait_pane

0xaa71,	// (0x0002005f) form_midp_image_pane_g1

0xaa7a,	// (0x00020068) form_midp_image_pane_t1

0xaa89,	// (0x00020077) form_midp_image_pane_t2

0xaa98,	// (0x00020086) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00024db9) form_midp_image_pane_t

0x13b7,	// (0x000169a5) list_single_midp_pane_g1

0x13c0,	// (0x000169ae) list_single_midp_pane_t1

0xaa5c,	// (0x0002004a) list_midp_form_item_pane_ParamLimits

0xaa5c,	// (0x0002004a) list_midp_form_item_pane

0xd057,	// (0x00022645) list_midp_form_item_pane_t1

0xd066,	// (0x00022654) midp_ticker_pane_g1

0xd072,	// (0x00022660) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x00024d0d) midp_ticker_pane_g

0xd07e,	// (0x0002266c) midp_ticker_pane_t1

0x27fa,	// (0x00017de8) midp_editing_number_pane_t1

0x27d8,	// (0x00017dc6) midp_editing_number_pane

0x27e7,	// (0x00017dd5) midp_ticker_pane

0x2558,	// (0x00017b46) ai_message_heading_pane

0xc2a7,	// (0x00021895) bg_popup_window_pane_cp14

0x2560,	// (0x00017b4e) listscroll_ai_message_pane

0x24e2,	// (0x00017ad0) ai_message_heading_pane_g1_ParamLimits

0x24e2,	// (0x00017ad0) ai_message_heading_pane_g1

0xb00b,	// (0x000205f9) ai_message_heading_pane_g2_ParamLimits

0xb00b,	// (0x000205f9) ai_message_heading_pane_g2

0x24fa,	// (0x00017ae8) ai_message_heading_pane_g3_ParamLimits

0x24fa,	// (0x00017ae8) ai_message_heading_pane_g3

0x2506,	// (0x00017af4) ai_message_heading_pane_g4_ParamLimits

0x2506,	// (0x00017af4) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x00024efa) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x00024efa) ai_message_heading_pane_g

0xb017,	// (0x00020605) ai_message_heading_pane_t1_ParamLimits

0xb017,	// (0x00020605) ai_message_heading_pane_t1

0xb031,	// (0x0002061f) ai_message_heading_pane_t2_ParamLimits

0xb031,	// (0x0002061f) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x00024f03) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x00024f03) ai_message_heading_pane_t

0x253e,	// (0x00017b2c) bg_popup_heading_pane_cp1_ParamLimits

0x253e,	// (0x00017b2c) bg_popup_heading_pane_cp1

0x24d0,	// (0x00017abe) list_ai_message_pane_ParamLimits

0x24d0,	// (0x00017abe) list_ai_message_pane

0xc8dd,	// (0x00021ecb) scroll_pane_cp10

0x246c,	// (0x00017a5a) list_ai_message_pane_g1

0x2474,	// (0x00017a62) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x00024ed7) list_ai_message_pane_g

0x247c,	// (0x00017a6a) list_ai_message_pane_t1_ParamLimits

0x247c,	// (0x00017a6a) list_ai_message_pane_t1

0x2491,	// (0x00017a7f) list_ai_message_pane_t2_ParamLimits

0x2491,	// (0x00017a7f) list_ai_message_pane_t2

0x24a6,	// (0x00017a94) list_ai_message_pane_t3_ParamLimits

0x24a6,	// (0x00017a94) list_ai_message_pane_t3

0x24bb,	// (0x00017aa9) list_ai_message_pane_t4_ParamLimits

0x24bb,	// (0x00017aa9) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x00024edc) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x00024edc) list_ai_message_pane_t

0xafe7,	// (0x000205d5) cell_ai_soft_ind_pane_ParamLimits

0xafe7,	// (0x000205d5) cell_ai_soft_ind_pane

0xd090,	// (0x0002267e) cell_ai_soft_ind_pane_g1_ParamLimits

0xd090,	// (0x0002267e) cell_ai_soft_ind_pane_g1

0xc2a7,	// (0x00021895) grid_highlight_cp1

0xd09d,	// (0x0002268b) text_secondary_cp56_ParamLimits

0xd09d,	// (0x0002268b) text_secondary_cp56

0x242c,	// (0x00017a1a) example_general_pane_ParamLimits

0x242c,	// (0x00017a1a) example_general_pane

0x2438,	// (0x00017a26) example_parent_pane_g1_ParamLimits

0x2438,	// (0x00017a26) example_parent_pane_g1

0x2444,	// (0x00017a32) example_parent_pane_t1_ParamLimits

0x2444,	// (0x00017a32) example_parent_pane_t1

0x87d2,	// (0x0001ddc0) popup_preview_text_window_ParamLimits

0x87d2,	// (0x0001ddc0) popup_preview_text_window

0xcfb2,	// (0x000225a0) list_single_pane_cp2_g4

0xc4ef,	// (0x00021add) bg_popup_preview_window_pane_ParamLimits

0xc4ef,	// (0x00021add) bg_popup_preview_window_pane

0xaf49,	// (0x00020537) popup_preview_text_window_t1_ParamLimits

0xaf49,	// (0x00020537) popup_preview_text_window_t1

0x21a4,	// (0x00017792) popup_preview_text_window_t2_ParamLimits

0x21a4,	// (0x00017792) popup_preview_text_window_t2

0x21ed,	// (0x000177db) popup_preview_text_window_t3_ParamLimits

0x21ed,	// (0x000177db) popup_preview_text_window_t3

0x2232,	// (0x00017820) popup_preview_text_window_t4_ParamLimits

0x2232,	// (0x00017820) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x00024eab) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x00024eab) popup_preview_text_window_t

0x22b0,	// (0x0001789e) scroll_pane_cp11

0x1160,	// (0x0001674e) bg_popup_preview_window_pane_g1

0xaf09,	// (0x000204f7) bg_popup_preview_window_pane_g2

0xaf11,	// (0x000204ff) bg_popup_preview_window_pane_g3

0xaf19,	// (0x00020507) bg_popup_preview_window_pane_g4

0xaf21,	// (0x0002050f) bg_popup_preview_window_pane_g5

0xaf29,	// (0x00020517) bg_popup_preview_window_pane_g6

0xaf31,	// (0x0002051f) bg_popup_preview_window_pane_g7

0xaf39,	// (0x00020527) bg_popup_preview_window_pane_g8

0xe19d,	// (0x0002378b) aid_popup_width_pane

0x874e,	// (0x0001dd3c) popup_midp_note_alarm_window_ParamLimits

0x874e,	// (0x0001dd3c) popup_midp_note_alarm_window

0xc731,	// (0x00021d1f) data_form_pane_ParamLimits

0x9e86,	// (0x0001f474) form_field_data_pane_g1

0x9e90,	// (0x0001f47e) form_field_data_pane_t1_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_ParamLimits

0xc74b,	// (0x00021d39) data_form_wide_pane_ParamLimits

0xc75c,	// (0x00021d4a) form_field_data_wide_pane_g1

0xc788,	// (0x00021d76) form_field_data_wide_pane_t1_ParamLimits

0xc5c7,	// (0x00021bb5) input_focus_pane_cp6_ParamLimits

0xa002,	// (0x0001f5f0) input_popup_find_pane_g1_ParamLimits

0xa002,	// (0x0001f5f0) input_popup_find_pane_g1

0xe428,	// (0x00023a16) aid_navi_side_left_pane

0xe43d,	// (0x00023a2b) aid_navi_side_right_pane

0x1b6f,	// (0x0001715d) bg_popup_window_pane_cp30_ParamLimits

0x1b6f,	// (0x0001715d) bg_popup_window_pane_cp30

0x1be9,	// (0x000171d7) popup_midp_note_alarm_window_g1_ParamLimits

0x1be9,	// (0x000171d7) popup_midp_note_alarm_window_g1

0x1c19,	// (0x00017207) popup_midp_note_alarm_window_t1_ParamLimits

0x1c19,	// (0x00017207) popup_midp_note_alarm_window_t1

0xad52,	// (0x00020340) popup_midp_note_alarm_window_t2_ParamLimits

0xad52,	// (0x00020340) popup_midp_note_alarm_window_t2

0xae00,	// (0x000203ee) popup_midp_note_alarm_window_t3_ParamLimits

0xae00,	// (0x000203ee) popup_midp_note_alarm_window_t3

0xae28,	// (0x00020416) popup_midp_note_alarm_window_t4_ParamLimits

0xae28,	// (0x00020416) popup_midp_note_alarm_window_t4

0x1db0,	// (0x0001739e) popup_midp_note_alarm_window_t5_ParamLimits

0x1db0,	// (0x0001739e) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x00024e48) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x00024e48) popup_midp_note_alarm_window_t

0x1e5c,	// (0x0001744a) wait_bar_pane_cp1_ParamLimits

0x1e5c,	// (0x0001744a) wait_bar_pane_cp1

0xc2a7,	// (0x00021895) wait_anim_pane_copy1

0xc2a7,	// (0x00021895) wait_border_pane_copy1

0x1865,	// (0x00016e53) wait_border_pane_g1_copy1

0xc7a2,	// (0x00021d90) form_field_popup_pane_g1

0x9eaa,	// (0x0001f498) form_field_popup_pane_t1_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_cp7_ParamLimits

0xc7aa,	// (0x00021d98) list_form_pane_ParamLimits

0xc7b6,	// (0x00021da4) form_field_popup_wide_pane_g1

0xc7be,	// (0x00021dac) form_field_popup_wide_pane_t1_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_cp8_ParamLimits

0xc7d3,	// (0x00021dc1) list_form_wide_pane_ParamLimits

0x2a3e,	// (0x0001802c) aid_size_cell_graphic_pane

0x9f29,	// (0x0001f517) data_form_pane_t1_ParamLimits

0xb21b,	// (0x00020809) data_form_wide_pane_t1_ParamLimits

0xa6cb,	// (0x0001fcb9) bg_status_flat_pane

0x94f5,	// (0x0001eae3) title_pane_t1_ParamLimits

0xc2bd,	// (0x000218ab) title_pane_t2_ParamLimits

0xc2e3,	// (0x000218d1) title_pane_t3_ParamLimits

0xf532,	// (0x00024b20) title_pane_t_ParamLimits

0xcb92,	// (0x00022180) level_1_signal_ParamLimits

0xcb9f,	// (0x0002218d) level_2_signal_ParamLimits

0xcbac,	// (0x0002219a) level_3_signal_ParamLimits

0xcbb9,	// (0x000221a7) level_4_signal_ParamLimits

0xcbc6,	// (0x000221b4) level_5_signal_ParamLimits

0xcbd3,	// (0x000221c1) level_6_signal_ParamLimits

0xcbe0,	// (0x000221ce) level_7_signal_ParamLimits

0xcb92,	// (0x00022180) level_1_battery_ParamLimits

0xcb9f,	// (0x0002218d) level_2_battery_ParamLimits

0xcbac,	// (0x0002219a) level_3_battery_ParamLimits

0xcbb9,	// (0x000221a7) level_4_battery_ParamLimits

0xcbc6,	// (0x000221b4) level_5_battery_ParamLimits

0xcbd3,	// (0x000221c1) level_6_battery_ParamLimits

0xcbe0,	// (0x000221ce) level_7_battery_ParamLimits

0x1a74,	// (0x00017062) bg_status_flat_pane_g1

0x1a7c,	// (0x0001706a) bg_status_flat_pane_g2

0x1a84,	// (0x00017072) bg_status_flat_pane_g3

0x1a8c,	// (0x0001707a) bg_status_flat_pane_g4

0x1a94,	// (0x00017082) bg_status_flat_pane_g5

0x1a9c,	// (0x0001708a) bg_status_flat_pane_g6

0x1aa4,	// (0x00017092) bg_status_flat_pane_g7

0x9589,	// (0x0001eb77) tabs_3_active_pane_t1_ParamLimits

0x9589,	// (0x0001eb77) tabs_3_passive_pane_t1_ParamLimits

0x95a3,	// (0x0001eb91) tabs_4_active_pane_t1_ParamLimits

0x95a3,	// (0x0001eb91) tabs_4_1_passive_pane_t1_ParamLimits

0xa041,	// (0x0001f62f) tabs_2_active_pane_t1_ParamLimits

0xa041,	// (0x0001f62f) tabs_2_passive_pane_t1_ParamLimits

0xc303,	// (0x000218f1) bg_active_tab_pane_cp4_ParamLimits

0xa053,	// (0x0001f641) tabs_2_long_active_pane_t1_ParamLimits

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp4_ParamLimits

0xe8c0,	// (0x00023eae) list_single_midp_graphic_pane_t1_ParamLimits

0xc303,	// (0x000218f1) bg_active_tab_pane_cp5_ParamLimits

0xa066,	// (0x0001f654) tabs_3_long_active_pane_t1_ParamLimits

0xc8ed,	// (0x00021edb) bg_passive_tab_pane_cp5_ParamLimits

0xe8c0,	// (0x00023eae) list_single_midp_graphic_pane_t1

0xa6cb,	// (0x0001fcb9) bg_status_flat_pane_ParamLimits

0x0dc5,	// (0x000163b3) indicator_pane_cp2_ParamLimits

0x0dc5,	// (0x000163b3) indicator_pane_cp2

0xa849,	// (0x0001fe37) navi_pane_srt_ParamLimits

0xa849,	// (0x0001fe37) navi_pane_srt

0x0f14,	// (0x00016502) popup_clock_digital_analogue_window_cp1

0xc361,	// (0x0002194f) indicator_pane_t1

0xd04f,	// (0x0002263d) copy_highlight_pane

0xd04f,	// (0x0002263d) cursor_graphics_pane

0xd04f,	// (0x0002263d) graphic_within_text_pane

0xd04f,	// (0x0002263d) link_highlight_pane

0x2273,	// (0x00017861) popup_preview_text_window_t5_ParamLimits

0x2273,	// (0x00017861) popup_preview_text_window_t5

0xd0b7,	// (0x000226a5) cursor_digital_pane

0xd0b7,	// (0x000226a5) cursor_primary_pane

0xd0c8,	// (0x000226b6) cursor_primary_small_pane

0xd0d0,	// (0x000226be) cursor_secondary_pane

0xd0d8,	// (0x000226c6) cursor_title_pane

0xd0b7,	// (0x000226a5) link_highlight_digital_pane

0xd0bf,	// (0x000226ad) link_highlight_primary_pane

0xd0c8,	// (0x000226b6) link_highlight_primary_small_pane

0xd0d0,	// (0x000226be) link_highlight_secondary_pane

0xd0d8,	// (0x000226c6) link_highlight_title_pane

0xd0b7,	// (0x000226a5) copy_highlight_digital_pane

0xd0b7,	// (0x000226a5) copy_highlight_primary_pane

0xd0c8,	// (0x000226b6) copy_highlight_primary_small_pane

0xd0d0,	// (0x000226be) copy_highlight_secondary_pane

0xd0d8,	// (0x000226c6) copy_highlight_title_pane

0xd0d0,	// (0x000226be) graphic_text_digital_pane

0x1b12,	// (0x00017100) graphic_text_primary_pane

0x1b1b,	// (0x00017109) graphic_text_primary_small_pane

0xd0c8,	// (0x000226b6) graphic_text_secondary_pane

0xd0b7,	// (0x000226a5) graphic_text_title_pane

0xa4f5,	// (0x0001fae3) cursor_primary_pane_g1

0x1b04,	// (0x000170f2) cursor_text_primary_t1

0xad48,	// (0x00020336) cursor_primary_small_pane_g1

0x1af6,	// (0x000170e4) cursor_text_primary_small_t1

0xad3e,	// (0x0002032c) cursor_primary_small_pane_g1_copy1

0x1ade,	// (0x000170cc) cursor_text_primary_small_t1_copy1

0x1abc,	// (0x000170aa) cursor_text_title_t1

0xad34,	// (0x00020322) cursor_title_pane_g1

0xa4f5,	// (0x0001fae3) cursor_digital_pane_g1

0xd0e0,	// (0x000226ce) cursor_text_digital_t1

0xd0ee,	// (0x000226dc) link_highlight_primary_pane_g1

0x1a65,	// (0x00017053) link_highlight_primary_pane_t1

0xd0ee,	// (0x000226dc) link_highlight_primary_small_pane_g1

0xd0f6,	// (0x000226e4) link_highlight_primary_small_pane_t1

0xd0ee,	// (0x000226dc) link_highlight_secondary_pane_g1

0xd105,	// (0x000226f3) link_highlight_secondary_pane_t1

0x19ca,	// (0x00016fb8) link_highlight_title_pane_g1

0x19e1,	// (0x00016fcf) link_highlight_title_pane_t1

0x19ca,	// (0x00016fb8) link_highlight_digital_pane_g1

0x19d2,	// (0x00016fc0) link_highlight_digital_pane_t1

0x1884,	// (0x00016e72) copy_highlight_primary_pane_g1

0x18aa,	// (0x00016e98) copy_highlight_primary_pane_t1

0x1884,	// (0x00016e72) copy_highlight_primary_small_pane_g1

0x189b,	// (0x00016e89) copy_highlight_primary_small_pane_t1

0xd114,	// (0x00022702) copy_highlight_secondary_pane_g1

0xd11c,	// (0x0002270a) copy_highlight_secondary_pane_t1

0x1884,	// (0x00016e72) copy_highlight_title_pane_g1

0x188c,	// (0x00016e7a) copy_highlight_title_pane_t1

0x1884,	// (0x00016e72) copy_highlight_digital_pane_g1

0x2c0c,	// (0x000181fa) copy_highlight_digital_pane_t1

0x2b60,	// (0x0001814e) graphic_text_primary_pane_g1

0x2bf0,	// (0x000181de) graphic_text_primary_pane_t1

0x2bfe,	// (0x000181ec) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00024f77) graphic_text_primary_pane_t

0x2bcc,	// (0x000181ba) graphic_text_primary_small_pane_g1

0x2bd4,	// (0x000181c2) graphic_text_primary_small_pane_t1

0x2be2,	// (0x000181d0) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x00024f72) graphic_text_primary_small_pane_t

0x2ba8,	// (0x00018196) graphic_text_secondary_pane_g1

0x2bb0,	// (0x0001819e) graphic_text_secondary_pane_t1

0x2bbe,	// (0x000181ac) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00024f6d) graphic_text_secondary_pane_t

0x2b84,	// (0x00018172) graphic_text_title_pane_g1

0x2b8c,	// (0x0001817a) graphic_text_title_pane_t1

0x2b9a,	// (0x00018188) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00024f68) graphic_text_title_pane_t

0x2b60,	// (0x0001814e) graphic_text_digital_pane_g1

0x2b68,	// (0x00018156) graphic_text_digital_pane_t1

0x2b76,	// (0x00018164) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x00024f63) graphic_text_digital_pane_t

0xc303,	// (0x000218f1) navi_icon_pane_srt_ParamLimits

0xc303,	// (0x000218f1) navi_icon_pane_srt

0xc2a7,	// (0x00021895) navi_midp_pane_srt

0xc2a7,	// (0x00021895) navi_navi_pane_srt

0xc303,	// (0x000218f1) navi_text_pane_srt_ParamLimits

0xc303,	// (0x000218f1) navi_text_pane_srt

0x2b2b,	// (0x00018119) navi_navi_icon_text_pane_srt

0x2b33,	// (0x00018121) navi_navi_pane_srt_g1_ParamLimits

0x2b33,	// (0x00018121) navi_navi_pane_srt_g1

0x2b45,	// (0x00018133) navi_navi_pane_srt_g2_ParamLimits

0x2b45,	// (0x00018133) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00024f5e) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00024f5e) navi_navi_pane_srt_g

0x2b57,	// (0x00018145) navi_navi_tabs_pane_srt

0x2b2b,	// (0x00018119) navi_navi_text_pane_srt

0x2b2b,	// (0x00018119) navi_navi_volume_pane_srt

0x2b1c,	// (0x0001810a) navi_navi_text_pane_srt_t1

0xeab2,	// (0x000240a0) navi_navi_volume_pane_srt_g1

0xeaba,	// (0x000240a8) volume_small_pane_srt_ParamLimits

0xeaba,	// (0x000240a8) volume_small_pane_srt

0xe6a8,	// (0x00023c96) volume_small_pane_srt_g1_ParamLimits

0xe6a8,	// (0x00023c96) volume_small_pane_srt_g1

0xe6b8,	// (0x00023ca6) volume_small_pane_srt_g2_ParamLimits

0xe6b8,	// (0x00023ca6) volume_small_pane_srt_g2

0xe6c9,	// (0x00023cb7) volume_small_pane_srt_g3_ParamLimits

0xe6c9,	// (0x00023cb7) volume_small_pane_srt_g3

0xe6da,	// (0x00023cc8) volume_small_pane_srt_g4_ParamLimits

0xe6da,	// (0x00023cc8) volume_small_pane_srt_g4

0xe6eb,	// (0x00023cd9) volume_small_pane_srt_g5_ParamLimits

0xe6eb,	// (0x00023cd9) volume_small_pane_srt_g5

0xe6fc,	// (0x00023cea) volume_small_pane_srt_g6_ParamLimits

0xe6fc,	// (0x00023cea) volume_small_pane_srt_g6

0xe70d,	// (0x00023cfb) volume_small_pane_srt_g7_ParamLimits

0xe70d,	// (0x00023cfb) volume_small_pane_srt_g7

0xe71e,	// (0x00023d0c) volume_small_pane_srt_g8_ParamLimits

0xe71e,	// (0x00023d0c) volume_small_pane_srt_g8

0xe72f,	// (0x00023d1d) volume_small_pane_srt_g9_ParamLimits

0xe72f,	// (0x00023d1d) volume_small_pane_srt_g9

0xe740,	// (0x00023d2e) volume_small_pane_srt_g10_ParamLimits

0xe740,	// (0x00023d2e) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x00024d12) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x00024d12) volume_small_pane_srt_g

0x97f9,	// (0x0001ede7) query_popup_data_pane_cp2

0x2b02,	// (0x000180f0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2b02,	// (0x000180f0) navi_navi_icon_text_pane_srt_t1

0x1b12,	// (0x00017100) navi_tabs_2_long_pane_srt

0x1b12,	// (0x00017100) navi_tabs_2_pane_srt

0x1b12,	// (0x00017100) navi_tabs_3_long_pane_srt

0x1b12,	// (0x00017100) navi_tabs_3_pane_srt

0x1b12,	// (0x00017100) navi_tabs_4_pane_srt

0x8cd0,	// (0x0001e2be) tabs_2_active_pane_srt_ParamLimits

0x8cd0,	// (0x0001e2be) tabs_2_active_pane_srt

0x8ce0,	// (0x0001e2ce) tabs_2_passive_pane_srt_ParamLimits

0x8ce0,	// (0x0001e2ce) tabs_2_passive_pane_srt

0x1280,	// (0x0001686e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1280,	// (0x0001686e) bg_passive_tab_pane_cp1_srt

0xb39d,	// (0x0002098b) bg_passive_tab_pane_g1_cp1_srt

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp1_srt

0xb3a6,	// (0x00020994) bg_passive_tab_pane_g3_cp1_srt

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp1_srt_ParamLimits

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp1_srt

0xb3af,	// (0x0002099d) tabs_2_active_pane_srt_g1

0xb3b7,	// (0x000209a5) tabs_2_active_pane_srt_t1_ParamLimits

0xb3b7,	// (0x000209a5) tabs_2_active_pane_srt_t1

0xb39d,	// (0x0002098b) bg_active_tab_pane_g1_cp1_srt

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp1_srt

0xb3a6,	// (0x00020994) bg_active_tab_pane_g3_cp1_srt

0x8c9d,	// (0x0001e28b) tabs_3_active_pane_srt_ParamLimits

0x8c9d,	// (0x0001e28b) tabs_3_active_pane_srt

0x8cae,	// (0x0001e29c) tabs_3_passive_pane_cp_srt_ParamLimits

0x8cae,	// (0x0001e29c) tabs_3_passive_pane_cp_srt

0x8cbf,	// (0x0001e2ad) tabs_3_passive_pane_srt_ParamLimits

0x8cbf,	// (0x0001e2ad) tabs_3_passive_pane_srt

0x1280,	// (0x0001686e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1280,	// (0x0001686e) bg_passive_tab_pane_cp2_srt

0xa4ff,	// (0x0001faed) bg_passive_tab_pane_g1_cp2_srt

0xa360,	// (0x0001f94e) bg_passive_tab_pane_g2_cp2_srt

0xa508,	// (0x0001faf6) bg_passive_tab_pane_g3_cp2_srt

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp2_srt_ParamLimits

0xc2f5,	// (0x000218e3) bg_active_tab_pane_cp2_srt

0xb37f,	// (0x0002096d) tabs_3_active_pane_srt_g1

0xb387,	// (0x00020975) tabs_3_active_pane_srt_t1_ParamLimits

0xb387,	// (0x00020975) tabs_3_active_pane_srt_t1

0xa4ff,	// (0x0001faed) bg_active_tab_pane_g1_cp2_srt

0xa360,	// (0x0001f94e) bg_active_tab_pane_g2_cp2_srt

0xa508,	// (0x0001faf6) bg_active_tab_pane_g3_cp2_srt

0xea6a,	// (0x00024058) tabs_4_active_pane_srt_ParamLimits

0xea6a,	// (0x00024058) tabs_4_active_pane_srt

0xea7c,	// (0x0002406a) tabs_4_passive_pane_cp2_srt_ParamLimits

0xea7c,	// (0x0002406a) tabs_4_passive_pane_cp2_srt

0xe760,	// (0x00023d4e) aid_size_cell_toolbar

0x2622,	// (0x00017c10) main_idle_act_pane_ParamLimits

0xe7c4,	// (0x00023db2) popup_large_graphic_colour_window_ParamLimits

0x8a84,	// (0x0001e072) popup_toolbar_window_ParamLimits

0x8a84,	// (0x0001e072) popup_toolbar_window

0x2825,	// (0x00017e13) list_single_graphic_2heading_pane_ParamLimits

0x2825,	// (0x00017e13) list_single_graphic_2heading_pane

0xca7a,	// (0x00022068) aid_size_cell_apps_grid_lsc_pane

0xca8c,	// (0x0002207a) aid_size_cell_apps_grid_prt_pane

0xc8ed,	// (0x00021edb) bg_wml_button_pane_cp1_ParamLimits

0xc8ed,	// (0x00021edb) bg_wml_button_pane_cp1

0xaac3,	// (0x000200b1) form_midp_field_text_pane_t1_ParamLimits

0x1280,	// (0x0001686e) input_focus_pane_cp050_ParamLimits

0x14ff,	// (0x00016aed) list_midp_form_text_pane_ParamLimits

0x14a2,	// (0x00016a90) input_focus_pane_cp051_ParamLimits

0x14b6,	// (0x00016aa4) list_midp_choice_pane_ParamLimits

0xaa28,	// (0x00020016) list_single_2graphic_pane_cp3_ParamLimits

0xaa28,	// (0x00020016) list_single_2graphic_pane_cp3

0xaa3c,	// (0x0002002a) list_single_midp_graphic_pane_ParamLimits

0xaa3c,	// (0x0002002a) list_single_midp_graphic_pane

0xe7f2,	// (0x00023de0) list_single_graphic_2heading_pane_g1_ParamLimits

0xe7f2,	// (0x00023de0) list_single_graphic_2heading_pane_g1

0xe7fe,	// (0x00023dec) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7fe,	// (0x00023dec) list_single_graphic_2heading_pane_g4

0xe80a,	// (0x00023df8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe80a,	// (0x00023df8) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00024d65) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00024d65) list_single_graphic_2heading_pane_g

0xe816,	// (0x00023e04) list_single_graphic_2heading_pane_t1_ParamLimits

0xe816,	// (0x00023e04) list_single_graphic_2heading_pane_t1

0xe82a,	// (0x00023e18) list_single_graphic_2heading_pane_t2_ParamLimits

0xe82a,	// (0x00023e18) list_single_graphic_2heading_pane_t2

0xe844,	// (0x00023e32) list_single_graphic_2heading_pane_t3_ParamLimits

0xe844,	// (0x00023e32) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00024d6c) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00024d6c) list_single_graphic_2heading_pane_t

0x1070,	// (0x0001665e) bg_popup_sub_pane_cp2

0x109a,	// (0x00016688) grid_toobar_pane

0xe85c,	// (0x00023e4a) cell_toolbar_pane_ParamLimits

0xe85c,	// (0x00023e4a) cell_toolbar_pane

0x1104,	// (0x000166f2) cell_toolbar_pane_g1_ParamLimits

0x1104,	// (0x000166f2) cell_toolbar_pane_g1

0xa9e8,	// (0x0001ffd6) cell_toolbar_pane_g2_ParamLimits

0xa9e8,	// (0x0001ffd6) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x00024d73) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x00024d73) cell_toolbar_pane_g

0x113a,	// (0x00016728) grid_highlight_pane_cp2_ParamLimits

0x113a,	// (0x00016728) grid_highlight_pane_cp2

0x1154,	// (0x00016742) toolbar_button_pane

0x1160,	// (0x0001674e) toolbar_button_pane_g1

0x1168,	// (0x00016756) toolbar_button_pane_g2

0x1170,	// (0x0001675e) toolbar_button_pane_g3

0x1178,	// (0x00016766) toolbar_button_pane_g4

0x1180,	// (0x0001676e) toolbar_button_pane_g5

0x1188,	// (0x00016776) toolbar_button_pane_g6

0x1190,	// (0x0001677e) toolbar_button_pane_g7

0x1198,	// (0x00016786) toolbar_button_pane_g8

0x11a0,	// (0x0001678e) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00024d78) toolbar_button_pane_g

0xe894,	// (0x00023e82) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe894,	// (0x00023e82) list_single_2graphic_pane_g1_cp3

0x8b31,	// (0x0001e11f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8b31,	// (0x0001e11f) list_single_2graphic_pane_g2_cp3

0xe8a0,	// (0x00023e8e) list_single_2graphic_pane_g3_cp3

0xe8a8,	// (0x00023e96) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe8a8,	// (0x00023e96) list_single_2graphic_pane_g4_cp3

0x8b42,	// (0x0001e130) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8b42,	// (0x0001e130) list_single_2graphic_pane_t1_cp3

0xe8b4,	// (0x00023ea2) list_single_midp_graphic_pane_g2_ParamLimits

0xe8b4,	// (0x00023ea2) list_single_midp_graphic_pane_g2

0xe768,	// (0x00023d56) aid_zoom_text_primary

0xe770,	// (0x00023d5e) aid_zoom_text_secondary

0xa55f,	// (0x0001fb4d) status_small_pane_g7_ParamLimits

0xa55f,	// (0x0001fb4d) status_small_pane_g7

0xa582,	// (0x0001fb70) status_small_pane_t1_ParamLimits

0x94d1,	// (0x0001eabf) title_pane_g2

0x0003,

0xf529,	// (0x00024b17) title_pane_g

0x9853,	// (0x0001ee41) aid_size_cell_colour_1_pane_ParamLimits

0x9853,	// (0x0001ee41) aid_size_cell_colour_1_pane

0x9867,	// (0x0001ee55) aid_size_cell_colour_2_pane_ParamLimits

0x9867,	// (0x0001ee55) aid_size_cell_colour_2_pane

0x987b,	// (0x0001ee69) aid_size_cell_colour_3_pane_ParamLimits

0x987b,	// (0x0001ee69) aid_size_cell_colour_3_pane

0x988f,	// (0x0001ee7d) aid_size_cell_colour_4_pane_ParamLimits

0x988f,	// (0x0001ee7d) aid_size_cell_colour_4_pane

0xe365,	// (0x00023953) title_pane_stacon_g1_ParamLimits

0xe365,	// (0x00023953) title_pane_stacon_g1

0x1901,	// (0x00016eef) popup_note_wait_window_g3_ParamLimits

0x1901,	// (0x00016eef) popup_note_wait_window_g3

0x1977,	// (0x00016f65) popup_note_wait_window_t5_ParamLimits

0x1977,	// (0x00016f65) popup_note_wait_window_t5

0xc2a7,	// (0x00021895) main_feb_china_hwr_fs_writing_pane

0x8438,	// (0x0001da26) popup_feb_china_hwr_fs_window_ParamLimits

0x8438,	// (0x0001da26) popup_feb_china_hwr_fs_window

0x8b5e,	// (0x0001e14c) aid_size_cell_hwr_fs_ParamLimits

0x8b5e,	// (0x0001e14c) aid_size_cell_hwr_fs

0x1280,	// (0x0001686e) bg_popup_sub_pane_cp3_ParamLimits

0x1280,	// (0x0001686e) bg_popup_sub_pane_cp3

0x8b73,	// (0x0001e161) grid_hwr_fs_pane_ParamLimits

0x8b73,	// (0x0001e161) grid_hwr_fs_pane

0xe8d6,	// (0x00023ec4) linegrid_hwr_fs_pane_ParamLimits

0xe8d6,	// (0x00023ec4) linegrid_hwr_fs_pane

0x8b8b,	// (0x0001e179) cell_hwr_fs_pane_ParamLimits

0x8b8b,	// (0x0001e179) cell_hwr_fs_pane

0x128c,	// (0x0001687a) linegrid_hwr_fs_pane_g1_ParamLimits

0x128c,	// (0x0001687a) linegrid_hwr_fs_pane_g1

0xa9fc,	// (0x0001ffea) linegrid_hwr_fs_pane_g2_ParamLimits

0xa9fc,	// (0x0001ffea) linegrid_hwr_fs_pane_g2

0x12aa,	// (0x00016898) linegrid_hwr_fs_pane_g3_ParamLimits

0x12aa,	// (0x00016898) linegrid_hwr_fs_pane_g3

0x8bb1,	// (0x0001e19f) linegrid_hwr_fs_pane_g4_ParamLimits

0x8bb1,	// (0x0001e19f) linegrid_hwr_fs_pane_g4

0xe8e6,	// (0x00023ed4) linegrid_hwr_fs_pane_g5_ParamLimits

0xe8e6,	// (0x00023ed4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x00024d9e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x00024d9e) linegrid_hwr_fs_pane_g

0x12b6,	// (0x000168a4) cell_hwr_fs_pane_g1_ParamLimits

0x12b6,	// (0x000168a4) cell_hwr_fs_pane_g1

0x0faa,	// (0x00016598) cell_hwr_fs_pane_g2_ParamLimits

0x0faa,	// (0x00016598) cell_hwr_fs_pane_g2

0xaa0e,	// (0x0001fffc) cell_hwr_fs_pane_g3_ParamLimits

0xaa0e,	// (0x0001fffc) cell_hwr_fs_pane_g3

0xaa1b,	// (0x00020009) cell_hwr_fs_pane_g4_ParamLimits

0xaa1b,	// (0x00020009) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00024da9) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00024da9) cell_hwr_fs_pane_g

0x8bcb,	// (0x0001e1b9) cell_hwr_fs_pane_t1

0xc2a7,	// (0x00021895) grid_highlight_pane_cp6

0xc2a7,	// (0x00021895) main_idle_act2_pane

0xc8c4,	// (0x00021eb2) aid_inside_area_popup_secondary

0xae67,	// (0x00020455) aid_inside_area_window_primary_ParamLimits

0xae67,	// (0x00020455) aid_inside_area_window_primary

0xb3d5,	// (0x000209c3) ai2_news_ticker_pane

0x2c23,	// (0x00018211) aid_size_cell_ai1_link_ParamLimits

0x2c23,	// (0x00018211) aid_size_cell_ai1_link

0xb3dd,	// (0x000209cb) popup_ai2_data_window_ParamLimits

0xb3dd,	// (0x000209cb) popup_ai2_data_window

0x2c53,	// (0x00018241) popup_ai2_link_window_ParamLimits

0x2c53,	// (0x00018241) popup_ai2_link_window

0x1280,	// (0x0001686e) bg_popup_sub_pane_cp4_ParamLimits

0x1280,	// (0x0001686e) bg_popup_sub_pane_cp4

0x2c67,	// (0x00018255) grid_ai2_link_pane_ParamLimits

0x2c67,	// (0x00018255) grid_ai2_link_pane

0x2c7e,	// (0x0001826c) popup_ai2_link_window_g1_ParamLimits

0x2c7e,	// (0x0001826c) popup_ai2_link_window_g1

0x2c8a,	// (0x00018278) popup_ai2_link_window_g2_ParamLimits

0x2c8a,	// (0x00018278) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00024f7c) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00024f7c) popup_ai2_link_window_g

0x2c99,	// (0x00018287) ai2_mp_button_pane

0x2ca1,	// (0x0001828f) ai2_mp_volume_pane

0x14a2,	// (0x00016a90) bg_popup_sub_pane_cp5_ParamLimits

0x14a2,	// (0x00016a90) bg_popup_sub_pane_cp5

0x2ca9,	// (0x00018297) heading_ai2_gene_pane_ParamLimits

0x2ca9,	// (0x00018297) heading_ai2_gene_pane

0x2cb5,	// (0x000182a3) list_ai2_gene_pane_ParamLimits

0x2cb5,	// (0x000182a3) list_ai2_gene_pane

0x2cfd,	// (0x000182eb) cell_ai2_link_pane_ParamLimits

0x2cfd,	// (0x000182eb) cell_ai2_link_pane

0x2d13,	// (0x00018301) cell_ai2_link_pane_g1

0xc2a7,	// (0x00021895) grid_highlight_pane_cp7

0xeacf,	// (0x000240bd) ai2_mp_volume_pane_g1

0x2de3,	// (0x000183d1) ai2_mp_volume_pane_g2

0x2d58,	// (0x00018346) list_ai2_gene_pane_t1

0x2deb,	// (0x000183d9) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00024f95) ai2_mp_volume_pane_g

0x8cf0,	// (0x0001e2de) volume_small_pane_cp3

0x2df3,	// (0x000183e1) aid_size_cell_ai2_button

0x2dfb,	// (0x000183e9) grid_ai2_button_pane

0x2e04,	// (0x000183f2) cell_ai2_button_pane_ParamLimits

0x2e04,	// (0x000183f2) cell_ai2_button_pane

0xc29d,	// (0x0002188b) cell_ai2_button_pane_g1

0xc2a7,	// (0x00021895) grid_highlight_pane_cp8

0x2da3,	// (0x00018391) ai2_gene_pane_t1_ParamLimits

0x2da3,	// (0x00018391) ai2_gene_pane_t1

0x83a2,	// (0x0001d990) aid_height_parent_landscape

0xb0c7,	// (0x000206b5) aid_height_set_list

0x2622,	// (0x00017c10) aid_size_parent

0x2a3e,	// (0x0001802c) aid_size_cell_graphic_pane_ParamLimits

0x2cc5,	// (0x000182b3) popup_ai2_data_window_g1_ParamLimits

0x2cc5,	// (0x000182b3) popup_ai2_data_window_g1

0x2cd1,	// (0x000182bf) ai2_news_ticker_pane_g1

0x2cd9,	// (0x000182c7) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x00024f81) ai2_news_ticker_pane_g

0x2ce1,	// (0x000182cf) ai2_news_ticker_pane_t1

0x2cef,	// (0x000182dd) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00024f86) ai2_news_ticker_pane_t

0x2d1c,	// (0x0001830a) heading_ai2_gene_pane_g1

0x2d24,	// (0x00018312) heading_ai2_gene_pane_t1_ParamLimits

0x2d24,	// (0x00018312) heading_ai2_gene_pane_t1

0x2d39,	// (0x00018327) list_highlight_pane_cp6

0x2d41,	// (0x0001832f) ai2_gene_pane_ParamLimits

0x2d41,	// (0x0001832f) ai2_gene_pane

0x2d66,	// (0x00018354) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x00024f8b) list_ai2_gene_pane_t

0x2d74,	// (0x00018362) list_highlight_pane_cp8_ParamLimits

0x2d74,	// (0x00018362) list_highlight_pane_cp8

0x2d85,	// (0x00018373) ai2_gene_pane_g1_ParamLimits

0x2d85,	// (0x00018373) ai2_gene_pane_g1

0x2d97,	// (0x00018385) ai2_gene_pane_g2_ParamLimits

0x2d97,	// (0x00018385) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x00024f90) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x00024f90) ai2_gene_pane_g

0xc672,	// (0x00021c60) scroll_pane_cp12

0x835f,	// (0x0001d94d) control_pane_t3_ParamLimits

0x835f,	// (0x0001d94d) control_pane_t3

0xa573,	// (0x0001fb61) status_small_pane_g8_ParamLimits

0xa573,	// (0x0001fb61) status_small_pane_g8

0x84fb,	// (0x0001dae9) popup_find_window_ParamLimits

0x8788,	// (0x0001dd76) popup_note_image_window_ParamLimits

0x10d6,	// (0x000166c4) list_double2_graphic_pane_vc_g1_ParamLimits

0x10d6,	// (0x000166c4) list_double2_graphic_pane_vc_g1

0xc683,	// (0x00021c71) list_double2_graphic_pane_vc_g2_ParamLimits

0xc683,	// (0x00021c71) list_double2_graphic_pane_vc_g2

0x10e2,	// (0x000166d0) list_double2_graphic_pane_vc_g3_ParamLimits

0x10e2,	// (0x000166d0) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x00024b8a) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x00024b8a) list_double2_graphic_pane_vc_g

0x10ee,	// (0x000166dc) list_double2_graphic_pane_vc_t1_ParamLimits

0x10ee,	// (0x000166dc) list_double2_graphic_pane_vc_t1

0xc683,	// (0x00021c71) list_single_heading_pane_vc_g1_ParamLimits

0xc683,	// (0x00021c71) list_single_heading_pane_vc_g1

0x10e2,	// (0x000166d0) list_single_heading_pane_vc_g2_ParamLimits

0x10e2,	// (0x000166d0) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b91) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b91) list_single_heading_pane_vc_g

0x11a8,	// (0x00016796) list_single_heading_pane_vc_t1_ParamLimits

0x11a8,	// (0x00016796) list_single_heading_pane_vc_t1

0x11be,	// (0x000167ac) list_single_heading_pane_vc_t2_ParamLimits

0x11be,	// (0x000167ac) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00024d8d) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00024d8d) list_single_heading_pane_vc_t

0x11d0,	// (0x000167be) list_setting_number_pane_vc_g1_ParamLimits

0x11d0,	// (0x000167be) list_setting_number_pane_vc_g1

0x11dc,	// (0x000167ca) list_setting_number_pane_vc_g2_ParamLimits

0x11dc,	// (0x000167ca) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024d92) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024d92) list_setting_number_pane_vc_g

0x11e8,	// (0x000167d6) list_setting_number_pane_vc_t1_ParamLimits

0x11e8,	// (0x000167d6) list_setting_number_pane_vc_t1

0x11fc,	// (0x000167ea) list_setting_number_pane_vc_t2_ParamLimits

0x11fc,	// (0x000167ea) list_setting_number_pane_vc_t2

0x1218,	// (0x00016806) list_setting_number_pane_vc_t3_ParamLimits

0x1218,	// (0x00016806) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00024d97) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00024d97) list_setting_number_pane_vc_t

0x1244,	// (0x00016832) set_value_pane_vc_ParamLimits

0x1244,	// (0x00016832) set_value_pane_vc

0x2825,	// (0x00017e13) list_double2_graphic_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double2_graphic_pane_vc

0x2838,	// (0x00017e26) list_double2_large_graphic_pane_vc_ParamLimits

0x2838,	// (0x00017e26) list_double2_large_graphic_pane_vc

0x2825,	// (0x00017e13) list_double2_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double2_pane_vc

0x2825,	// (0x00017e13) list_double_graphic_heading_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double_graphic_heading_pane_vc

0x2825,	// (0x00017e13) list_double_graphic_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double_graphic_pane_vc

0x2825,	// (0x00017e13) list_double_heading_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double_heading_pane_vc

0x284a,	// (0x00017e38) list_double_large_graphic_pane_vc_ParamLimits

0x284a,	// (0x00017e38) list_double_large_graphic_pane_vc

0x2825,	// (0x00017e13) list_double_number_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double_number_pane_vc

0x2825,	// (0x00017e13) list_double_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double_pane_vc

0x2825,	// (0x00017e13) list_double_time_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_double_time_pane_vc

0x2825,	// (0x00017e13) list_setting_number_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_setting_number_pane_vc

0x2825,	// (0x00017e13) list_setting_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_setting_pane_vc

0x2825,	// (0x00017e13) list_single_graphic_heading_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_single_graphic_heading_pane_vc

0x2825,	// (0x00017e13) list_single_heading_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_single_heading_pane_vc

0x2825,	// (0x00017e13) list_single_number_heading_pane_vc_ParamLimits

0x2825,	// (0x00017e13) list_single_number_heading_pane_vc

0x2e38,	// (0x00018426) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2e38,	// (0x00018426) list_double_graphic_heading_pane_vc_g1

0xc683,	// (0x00021c71) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc683,	// (0x00021c71) list_double_graphic_heading_pane_vc_g2

0x10e2,	// (0x000166d0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x10e2,	// (0x000166d0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x00024f9c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x00024f9c) list_double_graphic_heading_pane_vc_g

0x2e44,	// (0x00018432) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2e44,	// (0x00018432) list_double_graphic_heading_pane_vc_t1

0x2e58,	// (0x00018446) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2e58,	// (0x00018446) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x00024fa3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x00024fa3) list_double_graphic_heading_pane_vc_t

0x11d0,	// (0x000167be) list_setting_pane_vc_g1_ParamLimits

0x11d0,	// (0x000167be) list_setting_pane_vc_g1

0x11dc,	// (0x000167ca) list_setting_pane_vc_g2_ParamLimits

0x11dc,	// (0x000167ca) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024d92) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024d92) list_setting_pane_vc_g

0x3075,	// (0x00018663) list_setting_pane_vc_t1_ParamLimits

0x3075,	// (0x00018663) list_setting_pane_vc_t1

0x3091,	// (0x0001867f) list_setting_pane_vc_t2_ParamLimits

0x3091,	// (0x0001867f) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x00024fe6) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x00024fe6) list_setting_pane_vc_t

0x1244,	// (0x00016832) set_value_pane_cp_vc_ParamLimits

0x1244,	// (0x00016832) set_value_pane_cp_vc

0xc683,	// (0x00021c71) list_single_number_heading_pane_vc_g1_ParamLimits

0xc683,	// (0x00021c71) list_single_number_heading_pane_vc_g1

0x10e2,	// (0x000166d0) list_single_number_heading_pane_vc_g2_ParamLimits

0x10e2,	// (0x000166d0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b91) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b91) list_single_number_heading_pane_vc_g

0x30ab,	// (0x00018699) list_single_number_heading_pane_vc_t1_ParamLimits

0x30ab,	// (0x00018699) list_single_number_heading_pane_vc_t1

0x30c1,	// (0x000186af) list_single_number_heading_pane_vc_t2_ParamLimits

0x30c1,	// (0x000186af) list_single_number_heading_pane_vc_t2

0x30d3,	// (0x000186c1) list_single_number_heading_pane_vc_t3_ParamLimits

0x30d3,	// (0x000186c1) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x00024feb) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00024feb) list_single_number_heading_pane_vc_t

0x30e5,	// (0x000186d3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x30e5,	// (0x000186d3) list_single_graphic_heading_pane_vc_g1

0xc683,	// (0x00021c71) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc683,	// (0x00021c71) list_single_graphic_heading_pane_vc_g4

0x10e2,	// (0x000166d0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x10e2,	// (0x000166d0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x00024ff2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00024ff2) list_single_graphic_heading_pane_vc_g

0x1ed7,	// (0x000174c5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1ed7,	// (0x000174c5) list_single_graphic_heading_pane_vc_t1

0x30f1,	// (0x000186df) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x30f1,	// (0x000186df) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00024ff9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00024ff9) list_single_graphic_heading_pane_vc_t

0xc683,	// (0x00021c71) list_double2_pane_vc_g1_ParamLimits

0xc683,	// (0x00021c71) list_double2_pane_vc_g1

0x10e2,	// (0x000166d0) list_double2_pane_vc_g2_ParamLimits

0x10e2,	// (0x000166d0) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b91) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b91) list_double2_pane_vc_g

0x3103,	// (0x000186f1) list_double2_pane_vc_t1_ParamLimits

0x3103,	// (0x000186f1) list_double2_pane_vc_t1

0x311b,	// (0x00018709) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x311b,	// (0x00018709) list_double2_large_graphic_pane_vc_g1

0x3127,	// (0x00018715) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3127,	// (0x00018715) list_double2_large_graphic_pane_vc_g2

0x3133,	// (0x00018721) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3133,	// (0x00018721) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00024bae) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00024bae) list_double2_large_graphic_pane_vc_g

0x313f,	// (0x0001872d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x313f,	// (0x0001872d) list_double2_large_graphic_pane_vc_t1

0x3155,	// (0x00018743) list_double_time_pane_vc_g1_ParamLimits

0x3155,	// (0x00018743) list_double_time_pane_vc_g1

0x3161,	// (0x0001874f) list_double_time_pane_vc_g2_ParamLimits

0x3161,	// (0x0001874f) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x00024ffe) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x00024ffe) list_double_time_pane_vc_g

0x316d,	// (0x0001875b) list_double_time_pane_vc_t1_ParamLimits

0x316d,	// (0x0001875b) list_double_time_pane_vc_t1

0x3191,	// (0x0001877f) list_double_time_pane_vc_t2_ParamLimits

0x3191,	// (0x0001877f) list_double_time_pane_vc_t2

0x31c0,	// (0x000187ae) list_double_time_pane_vc_t3_ParamLimits

0x31c0,	// (0x000187ae) list_double_time_pane_vc_t3

0x31d2,	// (0x000187c0) list_double_time_pane_vc_t4_ParamLimits

0x31d2,	// (0x000187c0) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x00025003) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x00025003) list_double_time_pane_vc_t

0xc683,	// (0x00021c71) list_double_pane_vc_g1_ParamLimits

0xc683,	// (0x00021c71) list_double_pane_vc_g1

0x10e2,	// (0x000166d0) list_double_pane_vc_g2_ParamLimits

0x10e2,	// (0x000166d0) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b91) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b91) list_double_pane_vc_g

0x31e6,	// (0x000187d4) list_double_pane_vc_t1_ParamLimits

0x31e6,	// (0x000187d4) list_double_pane_vc_t1

0x31fa,	// (0x000187e8) list_double_pane_vc_t2_ParamLimits

0x31fa,	// (0x000187e8) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x0002500c) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x0002500c) list_double_pane_vc_t

0xc683,	// (0x00021c71) list_double_number_pane_vc_g1_ParamLimits

0xc683,	// (0x00021c71) list_double_number_pane_vc_g1

0x10e2,	// (0x000166d0) list_double_number_pane_vc_g2_ParamLimits

0x10e2,	// (0x000166d0) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b91) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b91) list_double_number_pane_vc_g

0x3212,	// (0x00018800) list_double_number_pane_vc_t1_ParamLimits

0x3212,	// (0x00018800) list_double_number_pane_vc_t1

0x31e6,	// (0x000187d4) list_double_number_pane_vc_t2_ParamLimits

0x31e6,	// (0x000187d4) list_double_number_pane_vc_t2

0x3224,	// (0x00018812) list_double_number_pane_vc_t3_ParamLimits

0x3224,	// (0x00018812) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x00025011) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x00025011) list_double_number_pane_vc_t

0x323c,	// (0x0001882a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x323c,	// (0x0001882a) list_double_large_graphic_pane_vc_g1

0x3258,	// (0x00018846) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3258,	// (0x00018846) list_double_large_graphic_pane_vc_g2

0x326c,	// (0x0001885a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x326c,	// (0x0001885a) list_double_large_graphic_pane_vc_g3

0x327b,	// (0x00018869) list_double_large_graphic_pane_vc_g4_ParamLimits

0x327b,	// (0x00018869) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x00025018) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x00025018) list_double_large_graphic_pane_vc_g

0x328a,	// (0x00018878) list_double_large_graphic_pane_vc_t1_ParamLimits

0x328a,	// (0x00018878) list_double_large_graphic_pane_vc_t1

0x32a6,	// (0x00018894) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32a6,	// (0x00018894) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00025021) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x00025021) list_double_large_graphic_pane_vc_t

0xc683,	// (0x00021c71) list_double_heading_pane_vc_g1_ParamLimits

0xc683,	// (0x00021c71) list_double_heading_pane_vc_g1

0x10e2,	// (0x000166d0) list_double_heading_pane_vc_g2_ParamLimits

0x10e2,	// (0x000166d0) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b91) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b91) list_double_heading_pane_vc_g

0x32c8,	// (0x000188b6) list_double_heading_pane_vc_t1_ParamLimits

0x32c8,	// (0x000188b6) list_double_heading_pane_vc_t1

0x32dc,	// (0x000188ca) list_double_heading_pane_vc_t2_ParamLimits

0x32dc,	// (0x000188ca) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00025026) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00025026) list_double_heading_pane_vc_t

0x32f4,	// (0x000188e2) list_double_graphic_pane_vc_g1_ParamLimits

0x32f4,	// (0x000188e2) list_double_graphic_pane_vc_g1

0x3307,	// (0x000188f5) list_double_graphic_pane_vc_g2_ParamLimits

0x3307,	// (0x000188f5) list_double_graphic_pane_vc_g2

0xc683,	// (0x00021c71) list_double_graphic_pane_vc_g3_ParamLimits

0xc683,	// (0x00021c71) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x0002502b) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0002502b) list_double_graphic_pane_vc_g

0x3324,	// (0x00018912) list_double_graphic_pane_vc_t1_ParamLimits

0x3324,	// (0x00018912) list_double_graphic_pane_vc_t1

0x3343,	// (0x00018931) list_double_graphic_pane_vc_t2_ParamLimits

0x3343,	// (0x00018931) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x00025034) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x00025034) list_double_graphic_pane_vc_t

0xe1a9,	// (0x00023797) aid_size_cell_fastswap

0x7f16,	// (0x0001d504) aid_size_cell_touch_ParamLimits

0x7f16,	// (0x0001d504) aid_size_cell_touch

0xe30a,	// (0x000238f8) popup_fast_swap_wide_window_ParamLimits

0xe30a,	// (0x000238f8) popup_fast_swap_wide_window

0x80e6,	// (0x0001d6d4) touch_pane_ParamLimits

0x80e6,	// (0x0001d6d4) touch_pane

0xc706,	// (0x00021cf4) button_value_adjust_pane_cp2

0xc70e,	// (0x00021cfc) button_value_adjust_pane_cp4

0xc716,	// (0x00021d04) form_field_data_pane_cp2

0x9e32,	// (0x0001f420) form_field_data_wide_pane_cp2

0xcab1,	// (0x0002209f) bg_scroll_pane_ParamLimits

0x81d6,	// (0x0001d7c4) scroll_handle_pane_ParamLimits

0xe4be,	// (0x00023aac) scroll_sc2_down_pane_ParamLimits

0xe4be,	// (0x00023aac) scroll_sc2_down_pane

0xcae2,	// (0x000220d0) scroll_sc2_up_pane_ParamLimits

0xcae2,	// (0x000220d0) scroll_sc2_up_pane

0xb526,	// (0x00020b14) grid_wheel_folder_pane_g1_ParamLimits

0xb526,	// (0x00020b14) grid_wheel_folder_pane_g1

0xe640,	// (0x00023c2e) clock_nsta_pane_cp2_ParamLimits

0xe640,	// (0x00023c2e) clock_nsta_pane_cp2

0xa439,	// (0x0001fa27) listscroll_midp_pane_ParamLimits

0xa445,	// (0x0001fa33) midp_canvas_pane

0xd193,	// (0x00022781) nsta_clock_indic_pane

0xd1bb,	// (0x000227a9) listscroll_form_pane_vc

0xd1c3,	// (0x000227b1) listscroll_set_pane_vc_ParamLimits

0xd1c3,	// (0x000227b1) listscroll_set_pane_vc

0xa6f3,	// (0x0001fce1) clock_nsta_pane

0xa71d,	// (0x0001fd0b) indicator_nsta_pane

0x1070,	// (0x0001665e) bg_popup_sub_pane_cp2_ParamLimits

0x1084,	// (0x00016672) find_pane_cp2_ParamLimits

0x1084,	// (0x00016672) find_pane_cp2

0x109a,	// (0x00016688) grid_toobar_pane_ParamLimits

0x1254,	// (0x00016842) list_form_gen_pane_vc_ParamLimits

0x1254,	// (0x00016842) list_form_gen_pane_vc

0x126a,	// (0x00016858) scroll_pane_cp8_vc_ParamLimits

0x126a,	// (0x00016858) scroll_pane_cp8_vc

0x12e6,	// (0x000168d4) data_form_wide_pane_vc_ParamLimits

0x12e6,	// (0x000168d4) data_form_wide_pane_vc

0x12f2,	// (0x000168e0) form_field_data_wide_pane_vc_g1

0x12fa,	// (0x000168e8) form_field_data_wide_pane_vc_t1_ParamLimits

0x12fa,	// (0x000168e8) form_field_data_wide_pane_vc_t1

0xc73d,	// (0x00021d2b) input_focus_pane_cp6_vc_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_cp6_vc

0x1688,	// (0x00016c76) list_midp_pane_ParamLimits

0x2aa8,	// (0x00018096) scroll_pane_cp16_ParamLimits

0x2aa8,	// (0x00018096) scroll_pane_cp16

0x16de,	// (0x00016ccc) button_value_adjust_pane_ParamLimits

0x16de,	// (0x00016ccc) button_value_adjust_pane

0xb0d8,	// (0x000206c6) button_value_adjust_pane_cp6_ParamLimits

0xb0d8,	// (0x000206c6) button_value_adjust_pane_cp6

0xb1f2,	// (0x000207e0) settings_code_pane_cp_ParamLimits

0xb1f2,	// (0x000207e0) settings_code_pane_cp

0xc29d,	// (0x0002188b) cell_touch_pane_g1

0xc29d,	// (0x0002188b) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00024cb8) cell_touch_pane_g

0xb3f3,	// (0x000209e1) cell_touch_pane_cp_ParamLimits

0xb3f3,	// (0x000209e1) cell_touch_pane_cp

0xb40f,	// (0x000209fd) cell_touch_pane_ParamLimits

0xb40f,	// (0x000209fd) cell_touch_pane

0xc29d,	// (0x0002188b) scroll_sc2_down_pane_g1

0xc29d,	// (0x0002188b) scroll_sc2_up_pane_g1

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp4_vc

0x2e70,	// (0x0001845e) list_set_graphic_pane_vc_g1_ParamLimits

0x2e70,	// (0x0001845e) list_set_graphic_pane_vc_g1

0x2e7c,	// (0x0001846a) list_set_graphic_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0001846a) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00024fa8) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00024fa8) list_set_graphic_pane_vc_g

0x2e88,	// (0x00018476) text_primary_small_cp13_vc_ParamLimits

0x2e88,	// (0x00018476) text_primary_small_cp13_vc

0x2ea0,	// (0x0001848e) list_set_graphic_pane_vc_ParamLimits

0x2ea0,	// (0x0001848e) list_set_graphic_pane_vc

0xc2a7,	// (0x00021895) input_focus_pane_cp2_vc

0xc29d,	// (0x0002188b) setting_code_pane_vc_g1

0xc31a,	// (0x00021908) setting_code_pane_vc_t1

0x2eb3,	// (0x000184a1) set_text_pane_vc_t1_ParamLimits

0x2eb3,	// (0x000184a1) set_text_pane_vc_t1

0xc2a7,	// (0x00021895) input_focus_pane_cp1_vc

0x2ed0,	// (0x000184be) list_set_text_pane_vc

0xc29d,	// (0x0002188b) setting_text_pane_vc_g1

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp2_vc

0xc311,	// (0x000218ff) setting_slider_graphic_pane_vc_g1

0x2eda,	// (0x000184c8) setting_slider_graphic_pane_vc_t1

0x2eea,	// (0x000184d8) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x00024fad) setting_slider_graphic_pane_vc_t

0x2efa,	// (0x000184e8) slider_set_pane_cp_vc

0x2f02,	// (0x000184f0) slider_set_pane_vc_g1

0x2f0b,	// (0x000184f9) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x00024fb2) slider_set_pane_vc_g

0xc803,	// (0x00021df1) set_opt_bg_pane_g1_copy1

0xc80b,	// (0x00021df9) set_opt_bg_pane_g2_copy1

0x2f37,	// (0x00018525) set_opt_bg_pane_g3_copy1

0xc81b,	// (0x00021e09) set_opt_bg_pane_g4_copy1

0xc823,	// (0x00021e11) set_opt_bg_pane_g5_copy1

0xc82b,	// (0x00021e19) set_opt_bg_pane_g6_copy1

0x2f3f,	// (0x0001852d) set_opt_bg_pane_g7_copy1

0x2f49,	// (0x00018537) set_opt_bg_pane_g8_copy1

0x2f51,	// (0x0001853f) set_opt_bg_pane_g9_copy1

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp_vc

0x2f59,	// (0x00018547) setting_slider_pane_vc_t1

0x2f68,	// (0x00018556) setting_slider_pane_vc_t2

0x2f78,	// (0x00018566) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x00024fc1) setting_slider_pane_vc_t

0x2f88,	// (0x00018576) slider_set_pane_vc

0xe8fc,	// (0x00023eea) volume_set_pane_vc_g1

0xead7,	// (0x000240c5) volume_set_pane_vc_g2

0xeae0,	// (0x000240ce) volume_set_pane_vc_g3

0xeae9,	// (0x000240d7) volume_set_pane_vc_g4

0xeaf2,	// (0x000240e0) volume_set_pane_vc_g5

0xeafb,	// (0x000240e9) volume_set_pane_vc_g6

0xeb04,	// (0x000240f2) volume_set_pane_vc_g7

0xeb0d,	// (0x000240fb) volume_set_pane_vc_g8

0xeb16,	// (0x00024104) volume_set_pane_vc_g9

0xeb1f,	// (0x0002410d) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x00024fc8) volume_set_pane_vc_g

0x2f90,	// (0x0001857e) volume_set_pane_vc

0x2f9a,	// (0x00018588) button_value_adjust_pane_cp1_vc

0x2fa4,	// (0x00018592) list_highlight_pane_cp2_vc

0x2fad,	// (0x0001859b) list_set_pane_vc_ParamLimits

0x2fad,	// (0x0001859b) list_set_pane_vc

0x300b,	// (0x000185f9) main_pane_set_vc_t1_ParamLimits

0x300b,	// (0x000185f9) main_pane_set_vc_t1

0x3020,	// (0x0001860e) main_pane_set_vc_t2_ParamLimits

0x3020,	// (0x0001860e) main_pane_set_vc_t2

0x3032,	// (0x00018620) main_pane_set_vc_t3_ParamLimits

0x3032,	// (0x00018620) main_pane_set_vc_t3

0x3044,	// (0x00018632) main_pane_set_vc_t4_ParamLimits

0x3044,	// (0x00018632) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x00024fdd) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x00024fdd) main_pane_set_vc_t

0x3056,	// (0x00018644) setting_code_pane_vc_ParamLimits

0x3056,	// (0x00018644) setting_code_pane_vc

0x3065,	// (0x00018653) setting_slider_graphic_pane_vc

0x3065,	// (0x00018653) setting_slider_pane_vc

0x3065,	// (0x00018653) setting_text_pane_vc

0x3065,	// (0x00018653) setting_volume_pane_vc

0x306d,	// (0x0001865b) scroll_pane_cp121_vc

0xc6f4,	// (0x00021ce2) set_content_pane_vc

0x336d,	// (0x0001895b) button_value_adjust_pane_g1

0x3376,	// (0x00018964) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x00025039) button_value_adjust_pane_g

0x337f,	// (0x0001896d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x337f,	// (0x0001896d) form_field_slider_wide_pane_vc_t1

0x3393,	// (0x00018981) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3393,	// (0x00018981) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x0002503e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x0002503e) form_field_slider_wide_pane_vc_t

0xc2f5,	// (0x000218e3) input_focus_pane_cp10_vc_ParamLimits

0xc2f5,	// (0x000218e3) input_focus_pane_cp10_vc

0x33c1,	// (0x000189af) slider_cont_pane_cp1_vc_ParamLimits

0x33c1,	// (0x000189af) slider_cont_pane_cp1_vc

0x33d3,	// (0x000189c1) slider_form_pane_g1_cp2

0x2f0b,	// (0x000184f9) slider_form_pane_g2_cp2

0x3400,	// (0x000189ee) form_field_slider_pane_vc_t3

0x340e,	// (0x000189fc) form_field_slider_pane_vc_t4

0x341c,	// (0x00018a0a) slider_form_pane_vc_ParamLimits

0x341c,	// (0x00018a0a) slider_form_pane_vc

0x3429,	// (0x00018a17) form_field_slider_pane_vc_t1_ParamLimits

0x3429,	// (0x00018a17) form_field_slider_pane_vc_t1

0x3393,	// (0x00018981) form_field_slider_pane_vc_t2_ParamLimits

0x3393,	// (0x00018981) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x00025050) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x00025050) form_field_slider_pane_vc_t

0xc2f5,	// (0x000218e3) input_focus_pane_cp9_vc_ParamLimits

0xc2f5,	// (0x000218e3) input_focus_pane_cp9_vc

0x3445,	// (0x00018a33) slider_cont_pane_vc_ParamLimits

0x3445,	// (0x00018a33) slider_cont_pane_vc

0x3459,	// (0x00018a47) list_form_graphic_pane_cp_vc_ParamLimits

0x3459,	// (0x00018a47) list_form_graphic_pane_cp_vc

0x12f2,	// (0x000168e0) form_field_popup_wide_pane_vc_g1

0x346e,	// (0x00018a5c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x346e,	// (0x00018a5c) form_field_popup_wide_pane_vc_t1

0xc73d,	// (0x00021d2b) input_focus_pane_cp8_vc_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_cp8_vc

0x34b3,	// (0x00018aa1) list_form_wide_pane_vc_ParamLimits

0x34b3,	// (0x00018aa1) list_form_wide_pane_vc

0x34bf,	// (0x00018aad) list_form_graphic_pane_vc_g1

0x34c7,	// (0x00018ab5) list_form_graphic_pane_vc_t1_ParamLimits

0x34c7,	// (0x00018ab5) list_form_graphic_pane_vc_t1

0xc303,	// (0x000218f1) list_highlight_pane_cp5_vc_ParamLimits

0xc303,	// (0x000218f1) list_highlight_pane_cp5_vc

0x34e3,	// (0x00018ad1) list_form_graphic_pane_vc_ParamLimits

0x34e3,	// (0x00018ad1) list_form_graphic_pane_vc

0x12f2,	// (0x000168e0) form_field_popup_pane_vc_g1

0x34f9,	// (0x00018ae7) form_field_popup_pane_vc_t1_ParamLimits

0x34f9,	// (0x00018ae7) form_field_popup_pane_vc_t1

0xc73d,	// (0x00021d2b) input_focus_pane_cp7_vc_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_cp7_vc

0x3510,	// (0x00018afe) list_form_pane_vc_ParamLimits

0x3510,	// (0x00018afe) list_form_pane_vc

0x351c,	// (0x00018b0a) data_form_pane_vc_t1_ParamLimits

0x351c,	// (0x00018b0a) data_form_pane_vc_t1

0xc803,	// (0x00021df1) input_focus_pane_vc_g1

0xc80b,	// (0x00021df9) input_focus_pane_vc_g2

0xc813,	// (0x00021e01) input_focus_pane_vc_g3

0xc81b,	// (0x00021e09) input_focus_pane_vc_g4

0xc823,	// (0x00021e11) input_focus_pane_vc_g5

0xc82b,	// (0x00021e19) input_focus_pane_vc_g6

0xc833,	// (0x00021e21) input_focus_pane_vc_g7

0xc83b,	// (0x00021e29) input_focus_pane_vc_g8

0xc843,	// (0x00021e31) input_focus_pane_vc_g9

0xc29d,	// (0x0002188b) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x00024c41) input_focus_pane_vc_g

0x12e6,	// (0x000168d4) data_form_pane_vc_ParamLimits

0x12e6,	// (0x000168d4) data_form_pane_vc

0x12f2,	// (0x000168e0) form_field_data_pane_vc_g1

0x3537,	// (0x00018b25) form_field_data_pane_vc_t1_ParamLimits

0x3537,	// (0x00018b25) form_field_data_pane_vc_t1

0xc73d,	// (0x00021d2b) input_focus_pane_vc_ParamLimits

0xc73d,	// (0x00021d2b) input_focus_pane_vc

0x3551,	// (0x00018b3f) button_value_adjust_pane_cp3_vc

0x3559,	// (0x00018b47) button_value_adjust_pane_cp5_vc

0x3561,	// (0x00018b4f) form_field_data_pane_vc_ParamLimits

0x3561,	// (0x00018b4f) form_field_data_pane_vc

0x3578,	// (0x00018b66) form_field_data_pane_vc_cp2

0x3580,	// (0x00018b6e) form_field_data_wide_pane_vc_ParamLimits

0x3580,	// (0x00018b6e) form_field_data_wide_pane_vc

0x3596,	// (0x00018b84) form_field_data_wide_pane_vc_cp2

0x359e,	// (0x00018b8c) form_field_popup_pane_vc_ParamLimits

0x359e,	// (0x00018b8c) form_field_popup_pane_vc

0x35b5,	// (0x00018ba3) form_field_popup_wide_pane_vc_ParamLimits

0x35b5,	// (0x00018ba3) form_field_popup_wide_pane_vc

0x35cb,	// (0x00018bb9) form_field_slider_pane_vc_ParamLimits

0x35cb,	// (0x00018bb9) form_field_slider_pane_vc

0x35de,	// (0x00018bcc) form_field_slider_wide_pane_vc_ParamLimits

0x35de,	// (0x00018bcc) form_field_slider_wide_pane_vc

0xb42c,	// (0x00020a1a) grid_touch_1_pane_ParamLimits

0xb42c,	// (0x00020a1a) grid_touch_1_pane

0xb440,	// (0x00020a2e) grid_touch_2_pane_ParamLimits

0xb440,	// (0x00020a2e) grid_touch_2_pane

0x36c2,	// (0x00018cb0) touch_pane_g1_ParamLimits

0x36c2,	// (0x00018cb0) touch_pane_g1

0x3615,	// (0x00018c03) cell_app_pane_cp_wide_ParamLimits

0x3615,	// (0x00018c03) cell_app_pane_cp_wide

0x3626,	// (0x00018c14) grid_popup_fast_wide_pane_ParamLimits

0x3626,	// (0x00018c14) grid_popup_fast_wide_pane

0x363a,	// (0x00018c28) scroll_pane_cp19_ParamLimits

0x363a,	// (0x00018c28) scroll_pane_cp19

0xc2a7,	// (0x00021895) bg_popup_window_pane_cp20

0x364e,	// (0x00018c3c) listscroll_popup_fast_wide_pane

0xb46a,	// (0x00020a58) grid_indicator_nsta_pane

0x3668,	// (0x00018c56) clock_nsta_pane_g1

0x3671,	// (0x00018c5f) clock_nsta_pane_t1

0xb476,	// (0x00020a64) cell_indicator_nsta_pane_ParamLimits

0xb476,	// (0x00020a64) cell_indicator_nsta_pane

0x36c2,	// (0x00018cb0) cell_indicator_nsta_pane_g1

0xb491,	// (0x00020a7f) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x00025061) cell_indicator_nsta_pane_g

0x36e2,	// (0x00018cd0) clock_nsta_pane_cp

0x36eb,	// (0x00018cd9) indicator_nsta_pane_cp

0x36f5,	// (0x00018ce3) nsta_clock_indic_pane_g1

0xc359,	// (0x00021947) grid_indicator_pane

0xa1e5,	// (0x0001f7d3) scroll_pane_cp29

0xe58f,	// (0x00023b7d) indicator_nsta_pane_cp2_ParamLimits

0xe58f,	// (0x00023b7d) indicator_nsta_pane_cp2

0xc303,	// (0x000218f1) main_apps_wheel_pane

0xaafc,	// (0x000200ea) form_midp_field_text_pane_ParamLimits

0x1694,	// (0x00016c82) scroll_bar_cp050_ParamLimits

0x374e,	// (0x00018d3c) cell_indicator_pane_ParamLimits

0x374e,	// (0x00018d3c) cell_indicator_pane

0x3767,	// (0x00018d55) cell_indicator_pane_g1

0xb4b0,	// (0x00020a9e) grid_wheel_folder_pane_ParamLimits

0xb4b0,	// (0x00020a9e) grid_wheel_folder_pane

0xb4be,	// (0x00020aac) list_wheel_apps_pane_ParamLimits

0xb4be,	// (0x00020aac) list_wheel_apps_pane

0xb4cc,	// (0x00020aba) main_apps_wheel_pane_g1_ParamLimits

0xb4cc,	// (0x00020aba) main_apps_wheel_pane_g1

0xb4d8,	// (0x00020ac6) main_apps_wheel_pane_g2_ParamLimits

0xb4d8,	// (0x00020ac6) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x0002507d) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x0002507d) main_apps_wheel_pane_g

0xb4e6,	// (0x00020ad4) main_apps_wheel_pane_t1_ParamLimits

0xb4e6,	// (0x00020ad4) main_apps_wheel_pane_t1

0xb4fa,	// (0x00020ae8) list_wheel_apps_pane_g1

0xb502,	// (0x00020af0) list_wheel_apps_pane_g2

0xb50a,	// (0x00020af8) list_wheel_apps_pane_g3

0xb512,	// (0x00020b00) list_wheel_apps_pane_g4

0xb51c,	// (0x00020b0a) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x00025082) list_wheel_apps_pane_g

0xcf00,	// (0x000224ee) navi_icon_text_pane

0xa5e7,	// (0x0001fbd5) aid_fill_nsta

0x382e,	// (0x00018e1c) navi_icon_text_pane_g1

0x383a,	// (0x00018e28) navi_icon_text_pane_t1

0xcdf0,	// (0x000223de) list_set_graphic_pane_t1_ParamLimits

0xcdf0,	// (0x000223de) list_set_graphic_pane_t1

0x1ddf,	// (0x000173cd) popup_midp_note_alarm_window_t6_ParamLimits

0x1ddf,	// (0x000173cd) popup_midp_note_alarm_window_t6

0x1df1,	// (0x000173df) popup_midp_note_alarm_window_t7_ParamLimits

0x1df1,	// (0x000173df) popup_midp_note_alarm_window_t7

0x1e03,	// (0x000173f1) popup_midp_note_alarm_window_t8_ParamLimits

0x1e03,	// (0x000173f1) popup_midp_note_alarm_window_t8

0x1e15,	// (0x00017403) popup_midp_note_alarm_window_t9_ParamLimits

0x1e15,	// (0x00017403) popup_midp_note_alarm_window_t9

0x1e27,	// (0x00017415) popup_midp_note_alarm_window_t10_ParamLimits

0x1e27,	// (0x00017415) popup_midp_note_alarm_window_t10

0x1e39,	// (0x00017427) popup_midp_note_alarm_window_t11_ParamLimits

0x1e39,	// (0x00017427) popup_midp_note_alarm_window_t11

0xae48,	// (0x00020436) scroll_pane_cp17_ParamLimits

0xae48,	// (0x00020436) scroll_pane_cp17

0xe8fc,	// (0x00023eea) volume_small_pane_cp_g1

0xeb28,	// (0x00024116) volume_small_pane_cp_g2

0xeb31,	// (0x0002411f) volume_small_pane_cp_g3

0xeb3a,	// (0x00024128) volume_small_pane_cp_g4

0xeb43,	// (0x00024131) volume_small_pane_cp_g5

0xeaf2,	// (0x000240e0) volume_small_pane_cp_g6

0xeb4c,	// (0x0002413a) volume_small_pane_cp_g7

0xeb55,	// (0x00024143) volume_small_pane_cp_g8

0xeb5e,	// (0x0002414c) volume_small_pane_cp_g9

0xeb67,	// (0x00024155) volume_small_pane_cp_g10

0xd066,	// (0x00022654) midp_ticker_pane_g1_ParamLimits

0xd072,	// (0x00022660) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x00024d0d) midp_ticker_pane_g_ParamLimits

0xd07e,	// (0x0002266c) midp_ticker_pane_t1_ParamLimits

0xa60b,	// (0x0001fbf9) aid_fill_nsta_2

0x1680,	// (0x00016c6e) list_form2_midp_pane

0x27d8,	// (0x00017dc6) midp_editing_number_pane_ParamLimits

0x27e7,	// (0x00017dd5) midp_ticker_pane_ParamLimits

0x384c,	// (0x00018e3a) form2_midp_field_pane

0x3870,	// (0x00018e5e) scroll_pane_cp51

0x3890,	// (0x00018e7e) form2_midp_button_pane_ParamLimits

0x3890,	// (0x00018e7e) form2_midp_button_pane

0x38a2,	// (0x00018e90) form2_midp_content_pane_ParamLimits

0x38a2,	// (0x00018e90) form2_midp_content_pane

0x38bc,	// (0x00018eaa) form2_midp_field_choice_group_pane

0x38c4,	// (0x00018eb2) form2_midp_field_pane_g1

0x38cc,	// (0x00018eba) form2_midp_field_pane_g2

0x38d4,	// (0x00018ec2) form2_midp_field_pane_g3

0x38dc,	// (0x00018eca) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x000250a7) form2_midp_field_pane_g

0x38e4,	// (0x00018ed2) form2_midp_gauge_slider_pane

0x38ec,	// (0x00018eda) form2_midp_gauge_wait_pane

0x38f4,	// (0x00018ee2) form2_midp_image_pane_ParamLimits

0x38f4,	// (0x00018ee2) form2_midp_image_pane

0xb54f,	// (0x00020b3d) form2_midp_label_pane_ParamLimits

0xb54f,	// (0x00020b3d) form2_midp_label_pane

0xb568,	// (0x00020b56) form2_midp_label_pane_cp_ParamLimits

0xb568,	// (0x00020b56) form2_midp_label_pane_cp

0x3949,	// (0x00018f37) form2_midp_string_pane_ParamLimits

0x3949,	// (0x00018f37) form2_midp_string_pane

0xb587,	// (0x00020b75) form2_midp_text_pane_ParamLimits

0xb587,	// (0x00020b75) form2_midp_text_pane

0x3976,	// (0x00018f64) form2_midp_time_pane

0x3986,	// (0x00018f74) input_focus_pane_cp51_ParamLimits

0x3986,	// (0x00018f74) input_focus_pane_cp51

0xb5a0,	// (0x00020b8e) form2_midp_label_pane_t1_ParamLimits

0xb5a0,	// (0x00020b8e) form2_midp_label_pane_t1

0xb5e0,	// (0x00020bce) form2_mdip_text_pane_t1_ParamLimits

0xb5e0,	// (0x00020bce) form2_mdip_text_pane_t1

0x39fe,	// (0x00018fec) form2_midp_time_pane_t1

0x3a19,	// (0x00019007) form2_midp_gauge_slider_pane_t1

0xb5fc,	// (0x00020bea) form2_midp_gauge_slider_pane_t2

0xb60e,	// (0x00020bfc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x000250b0) form2_midp_gauge_slider_pane_t

0x3a4f,	// (0x0001903d) form2_midp_slider_pane

0x3a5b,	// (0x00019049) form2_midp_gauge_wait_pane_t1

0x3a69,	// (0x00019057) form2_midp_wait_pane_ParamLimits

0x3a69,	// (0x00019057) form2_midp_wait_pane

0xb620,	// (0x00020c0e) list_single_2graphic_pane_cp4_ParamLimits

0xb620,	// (0x00020c0e) list_single_2graphic_pane_cp4

0xaa3c,	// (0x0002002a) list_single_midp_graphic_pane_cp_ParamLimits

0xaa3c,	// (0x0002002a) list_single_midp_graphic_pane_cp

0xc2a7,	// (0x00021895) list_highlight_pane_cp20

0x3abc,	// (0x000190aa) list_single_2graphic_pane_g1_cp4

0x2d1c,	// (0x0001830a) list_single_2graphic_pane_g2_cp4

0x3ac4,	// (0x000190b2) list_single_2graphic_pane_t1_cp4

0xc303,	// (0x000218f1) list_highlight_pane_cp21

0x3ad3,	// (0x000190c1) list_single_midp_graphic_pane_g4_cp

0x3ae2,	// (0x000190d0) list_single_midp_graphic_pane_t1_cp

0xb635,	// (0x00020c23) form2_mdip_string_pane_t1_ParamLimits

0xb635,	// (0x00020c23) form2_mdip_string_pane_t1

0xc2a7,	// (0x00021895) bg_wml_button_pane_cp2

0xc29d,	// (0x0002188b) form2_midp_image_pane_g1

0xc6a7,	// (0x00021c95) list_double_large_graphic_pane_g5_ParamLimits

0xc6a7,	// (0x00021c95) list_double_large_graphic_pane_g5

0xa439,	// (0x0001fa27) midp_form_pane_ParamLimits

0xc303,	// (0x000218f1) main_apps_wheel_pane_ParamLimits

0x880f,	// (0x0001ddfd) popup_preview_window_ParamLimits

0x880f,	// (0x0001ddfd) popup_preview_window

0x8adc,	// (0x0001e0ca) popup_touch_info_window_ParamLimits

0x8adc,	// (0x0001e0ca) popup_touch_info_window

0x8afa,	// (0x0001e0e8) popup_touch_menu_window_ParamLimits

0x8afa,	// (0x0001e0e8) popup_touch_menu_window

0xc293,	// (0x00021881) bg_popup_sub_pane_cp6

0x3bfe,	// (0x000191ec) list_touch_menu_pane

0xb6ab,	// (0x00020c99) list_single_touch_menu_pane_ParamLimits

0xb6ab,	// (0x00020c99) list_single_touch_menu_pane

0xb6bf,	// (0x00020cad) list_single_touch_menu_pane_t1

0xc303,	// (0x000218f1) bg_popup_sub_pane_cp7_ParamLimits

0xc303,	// (0x000218f1) bg_popup_sub_pane_cp7

0x3c2a,	// (0x00019218) heading_sub_pane

0x3c32,	// (0x00019220) list_touch_info_pane_ParamLimits

0x3c32,	// (0x00019220) list_touch_info_pane

0x3c41,	// (0x0001922f) list_single_touch_info_pane_ParamLimits

0x3c41,	// (0x0001922f) list_single_touch_info_pane

0x3c53,	// (0x00019241) list_single_touch_info_pane_t1

0x3c61,	// (0x0001924f) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x000250be) list_single_touch_info_pane_t

0xd04f,	// (0x0002263d) bg_popup_heading_pane_cp

0x3c6f,	// (0x0001925d) heading_sub_pane_t1

0x1280,	// (0x0001686e) bg_popup_preview_window_pane_cp_ParamLimits

0x1280,	// (0x0001686e) bg_popup_preview_window_pane_cp

0x3c2a,	// (0x00019218) heading_preview_pane

0x3c32,	// (0x00019220) list_preview_pane_ParamLimits

0x3c32,	// (0x00019220) list_preview_pane

0x3c7d,	// (0x0001926b) popup_preview_window_g1

0x3c41,	// (0x0001922f) list_single_preview_pane_ParamLimits

0x3c41,	// (0x0001922f) list_single_preview_pane

0x3c85,	// (0x00019273) list_single_preview_pane_g1

0x3c8d,	// (0x0001927b) list_single_preview_pane_t1

0x3c53,	// (0x00019241) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x000250c3) list_single_preview_pane_t

0x3c9b,	// (0x00019289) bg_popup_heading_pane_cp2_ParamLimits

0x3c9b,	// (0x00019289) bg_popup_heading_pane_cp2

0x3cb1,	// (0x0001929f) heading_preview_pane_g1

0x3cb9,	// (0x000192a7) heading_preview_pane_t1_ParamLimits

0x3cb9,	// (0x000192a7) heading_preview_pane_t1

0xc370,	// (0x0002195e) soft_indicator_pane_t1_ParamLimits

0xc64f,	// (0x00021c3d) scroll_pane_ParamLimits

0xcad0,	// (0x000220be) scroll_sc2_left_pane

0xcad9,	// (0x000220c7) scroll_sc2_right_pane

0xcaf8,	// (0x000220e6) scroll_bg_pane_g1_ParamLimits

0xcb0d,	// (0x000220fb) scroll_bg_pane_g2_ParamLimits

0xcb25,	// (0x00022113) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00024c98) scroll_bg_pane_g_ParamLimits

0xcaf8,	// (0x000220e6) scroll_handle_pane_g1_ParamLimits

0xcb3a,	// (0x00022128) scroll_handle_pane_g2_ParamLimits

0xcb25,	// (0x00022113) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x00024c9f) scroll_handle_pane_g_ParamLimits

0x83dc,	// (0x0001d9ca) popup_choice_list_window_ParamLimits

0x83dc,	// (0x0001d9ca) popup_choice_list_window

0x107c,	// (0x0001666a) choice_list_pane

0x112c,	// (0x0001671a) cell_toolbar_pane_t1

0x1154,	// (0x00016742) toolbar_button_pane_ParamLimits

0x2305,	// (0x000178f3) ai_gene_pane_1_t2_ParamLimits

0x2305,	// (0x000178f3) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x00024ebb) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x00024ebb) ai_gene_pane_1_t

0x3cd6,	// (0x000192c4) scroll_sc2_left_pane_g1

0x3cd6,	// (0x000192c4) scroll_sc2_right_pane_g1

0xc8ed,	// (0x00021edb) bg_popup_sub_pane_cp10

0x3ce0,	// (0x000192ce) list_choice_list_pane

0xb25c,	// (0x0002084a) list_single_choice_list_pane_ParamLimits

0xb25c,	// (0x0002084a) list_single_choice_list_pane

0xd1eb,	// (0x000227d9) list_single_choice_list_pane_g1

0xa02c,	// (0x0001f61a) list_single_choice_list_pane_t1_ParamLimits

0xa02c,	// (0x0001f61a) list_single_choice_list_pane_t1

0x3d14,	// (0x00019302) choice_list_pane_g1

0xb6cd,	// (0x00020cbb) choice_list_pane_t1

0xc293,	// (0x00021881) input_focus_pane_cp11

0xca45,	// (0x00022033) title_pane_stacon_g2_ParamLimits

0xca45,	// (0x00022033) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00024c7e) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00024c7e) title_pane_stacon_g

0xd04f,	// (0x0002263d) cursor_press_pane

0x8483,	// (0x0001da71) popup_fep_hwr_window_ParamLimits

0x8483,	// (0x0001da71) popup_fep_hwr_window

0xe7a6,	// (0x00023d94) popup_fep_vkb_window_ParamLimits

0xe7a6,	// (0x00023d94) popup_fep_vkb_window

0xb6db,	// (0x00020cc9) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x000250ec) fep_vkb_side_pane_g_ParamLimits

0xeb9b,	// (0x00024189) fep_hwr_candidate_pane_ParamLimits

0xeb9b,	// (0x00024189) fep_hwr_candidate_pane

0xebc5,	// (0x000241b3) fep_hwr_side_pane_ParamLimits

0xebc5,	// (0x000241b3) fep_hwr_side_pane

0xebe5,	// (0x000241d3) fep_hwr_top_pane_ParamLimits

0xebe5,	// (0x000241d3) fep_hwr_top_pane

0xebfd,	// (0x000241eb) fep_hwr_write_pane_ParamLimits

0xebfd,	// (0x000241eb) fep_hwr_write_pane

0xfafe,	// (0x000250ec) fep_vkb_side_pane_g

0x3d32,	// (0x00019320) fep_hwr_top_pane_g1

0x3d44,	// (0x00019332) fep_hwr_top_pane_g2

0xec37,	// (0x00024225) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x000250c8) fep_hwr_top_pane_g

0xec4c,	// (0x0002423a) fep_hwr_top_text_pane

0xcbfd,	// (0x000221eb) fep_hwr_top_text_pane_g1

0x3d7a,	// (0x00019368) fep_hwr_top_text_pane_t1

0xeccb,	// (0x000242b9) fep_hwr_candidate_pane_g1

0x3fbf,	// (0x000195ad) fep_vkb_keypad_pane_g3_ParamLimits

0x3fbf,	// (0x000195ad) fep_vkb_keypad_pane_g3

0x3fe7,	// (0x000195d5) fep_vkb_keypad_pane_g4_ParamLimits

0x3fe7,	// (0x000195d5) fep_vkb_keypad_pane_g4

0x4056,	// (0x00019644) fep_vkb_bottom_pane_g2_ParamLimits

0x4056,	// (0x00019644) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x000250f3) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x000250f3) fep_vkb_bottom_pane_g

0x3cd6,	// (0x000192c4) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x000250fd) cell_vkb_side_pane_g

0x40e1,	// (0x000196cf) cell_vkb_side_pane_t1

0x40ef,	// (0x000196dd) cell_vkb_side_pane_t1_copy1

0x3cd6,	// (0x000192c4) bg_fep_vkb_candidate_pane_g2

0x421b,	// (0x00019809) cell_vkb_candidate_pane_ParamLimits

0x3d88,	// (0x00019376) aid_size_cell_vkb_ParamLimits

0x3d88,	// (0x00019376) aid_size_cell_vkb

0x421b,	// (0x00019809) cell_vkb_candidate_pane

0xecf2,	// (0x000242e0) bg_popup_fep_shadow_pane_g1

0xb6f5,	// (0x00020ce3) fep_vkb_bottom_pane_ParamLimits

0xb6f5,	// (0x00020ce3) fep_vkb_bottom_pane

0x3e4c,	// (0x0001943a) fep_vkb_candidate_pane_ParamLimits

0x3e4c,	// (0x0001943a) fep_vkb_candidate_pane

0xb71a,	// (0x00020d08) fep_vkb_keypad_pane_ParamLimits

0xb71a,	// (0x00020d08) fep_vkb_keypad_pane

0xb74f,	// (0x00020d3d) fep_vkb_side_pane_ParamLimits

0xb74f,	// (0x00020d3d) fep_vkb_side_pane

0xb78b,	// (0x00020d79) fep_vkb_top_pane_ParamLimits

0xb78b,	// (0x00020d79) fep_vkb_top_pane

0x3f18,	// (0x00019506) fep_vkb_top_pane_g1_ParamLimits

0x3f18,	// (0x00019506) fep_vkb_top_pane_g1

0x3f27,	// (0x00019515) fep_vkb_top_pane_g2_ParamLimits

0x3f27,	// (0x00019515) fep_vkb_top_pane_g2

0x3f36,	// (0x00019524) fep_vkb_top_pane_g3_ParamLimits

0x3f36,	// (0x00019524) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x000250e3) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x000250e3) fep_vkb_top_pane_g

0x3f54,	// (0x00019542) fep_vkb_top_text_pane_ParamLimits

0x3f54,	// (0x00019542) fep_vkb_top_text_pane

0xb7c0,	// (0x00020dae) fep_vkb_side_pane_g1_ParamLimits

0xb7c0,	// (0x00020dae) fep_vkb_side_pane_g1

0x3fae,	// (0x0001959c) grid_vkb_side_pane_ParamLimits

0x3fae,	// (0x0001959c) grid_vkb_side_pane

0xecfa,	// (0x000242e8) bg_popup_fep_shadow_pane_g2

0xed03,	// (0x000242f1) bg_popup_fep_shadow_pane_g3

0xed0b,	// (0x000242f9) bg_popup_fep_shadow_pane_g4

0xed14,	// (0x00024302) bg_popup_fep_shadow_pane_g5

0xed1e,	// (0x0002430c) bg_popup_fep_shadow_pane_g6

0xed26,	// (0x00024314) bg_popup_fep_shadow_pane_g7

0xc81b,	// (0x00021e09) bg_popup_fep_shadow_pane_g8

0x4005,	// (0x000195f3) grid_vkb_keypad_number_pane_ParamLimits

0x4005,	// (0x000195f3) grid_vkb_keypad_number_pane

0x4015,	// (0x00019603) grid_vkb_keypad_pane_ParamLimits

0x4015,	// (0x00019603) grid_vkb_keypad_pane

0x403b,	// (0x00019629) fep_vkb_bottom_pane_g1_ParamLimits

0x403b,	// (0x00019629) fep_vkb_bottom_pane_g1

0x4064,	// (0x00019652) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4064,	// (0x00019652) grid_vkb_keypad_bottom_left_pane

0x4079,	// (0x00019667) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4079,	// (0x00019667) grid_vkb_keypad_bottom_right_pane

0x408e,	// (0x0001967c) fep_vkb_top_text_pane_g1

0xb807,	// (0x00020df5) fep_vkb_top_text_pane_t1

0xb819,	// (0x00020e07) cell_vkb_side_pane_ParamLimits

0xb819,	// (0x00020e07) cell_vkb_side_pane

0x3cd6,	// (0x000192c4) cell_vkb_side_pane_g1

0x40fd,	// (0x000196eb) cell_vkb_keypad_pane_ParamLimits

0x40fd,	// (0x000196eb) cell_vkb_keypad_pane

0x4172,	// (0x00019760) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x00025110) bg_popup_fep_shadow_pane_g

0xed38,	// (0x00024326) cell_hwr_side_pane_g1

0xed38,	// (0x00024326) cell_hwr_side_pane_g2

0x417c,	// (0x0001976a) cell_vkb_keypad_pane_t1

0xb82f,	// (0x00020e1d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb82f,	// (0x00020e1d) cell_vkb_keypad_bottom_left_pane

0xb844,	// (0x00020e32) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb844,	// (0x00020e32) cell_vkb_keypad_bottom_right_pane

0x3cd6,	// (0x000192c4) cell_vkb_keypad_bottom_left_pane_g1

0x3cd6,	// (0x000192c4) cell_vkb_keypad_bottom_right_pane_g1

0x41e0,	// (0x000197ce) cell_vkb_keypad_number_pane_ParamLimits

0x41e0,	// (0x000197ce) cell_vkb_keypad_number_pane

0x41ff,	// (0x000197ed) cell_vkb_keypad_number_pane_g1

0x4209,	// (0x000197f7) cell_vkb_keypad_number_pane_g2

0x4212,	// (0x00019800) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x00025102) cell_vkb_keypad_number_pane_g

0x417c,	// (0x0001976a) cell_vkb_keypad_number_pane_t1

0x4236,	// (0x00019824) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x00025123) cell_hwr_side_pane_g

0x424f,	// (0x0001983d) cell_hwr_side_pane_t1

0xed42,	// (0x00024330) cell_hwr_side_pane_t1_copy1

0xed50,	// (0x0002433e) cell_hwr_candidate_pane_g1

0xed7f,	// (0x0002436d) cell_hwr_candidate_pane_t1

0x3cd6,	// (0x000192c4) cell_vkb_candidate_pane_g2

0x4293,	// (0x00019881) cell_vkb_candidate_pane_t1

0xe78e,	// (0x00023d7c) bg_popup_fep_shadow_pane_ParamLimits

0xe78e,	// (0x00023d7c) bg_popup_fep_shadow_pane

0xec17,	// (0x00024205) bg_fep_hwr_top_pane_g4

0x3d56,	// (0x00019344) bg_hwr_side_pane_g1_ParamLimits

0x3d56,	// (0x00019344) bg_hwr_side_pane_g1

0x8d11,	// (0x0001e2ff) cell_hwr_side_pane_ParamLimits

0x8d11,	// (0x0001e2ff) cell_hwr_side_pane

0xec61,	// (0x0002424f) fep_hwr_write_pane_g1_ParamLimits

0xec61,	// (0x0002424f) fep_hwr_write_pane_g1

0xec6e,	// (0x0002425c) fep_hwr_write_pane_g2_ParamLimits

0xec6e,	// (0x0002425c) fep_hwr_write_pane_g2

0xec7b,	// (0x00024269) fep_hwr_write_pane_g3_ParamLimits

0xec7b,	// (0x00024269) fep_hwr_write_pane_g3

0x8d31,	// (0x0001e31f) fep_hwr_write_pane_g4_ParamLimits

0x8d31,	// (0x0001e31f) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x000250cf) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x000250cf) fep_hwr_write_pane_g

0xec17,	// (0x00024205) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xec17,	// (0x00024205) bg_fep_hwr_candidate_pane_g2

0xec89,	// (0x00024277) cell_hwr_candidate_pane_ParamLimits

0xec89,	// (0x00024277) cell_hwr_candidate_pane

0xeccb,	// (0x000242b9) fep_hwr_candidate_pane_g1_ParamLimits

0x3db6,	// (0x000193a4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3db6,	// (0x000193a4) bg_popup_fep_shadow_pane_cp2

0x3f46,	// (0x00019534) fep_vkb_top_pane_g4_ParamLimits

0x3f46,	// (0x00019534) fep_vkb_top_pane_g4

0x3f8c,	// (0x0001957a) fep_vkb_side_pane_g2_ParamLimits

0x3f8c,	// (0x0001957a) fep_vkb_side_pane_g2

0x9d57,	// (0x0001f345) list_setting_pane_t4_ParamLimits

0x9d57,	// (0x0001f345) list_setting_pane_t4

0x9dd1,	// (0x0001f3bf) list_setting_number_pane_t5_ParamLimits

0x9dd1,	// (0x0001f3bf) list_setting_number_pane_t5

0xcc34,	// (0x00022222) list_double_heading_pane_cp2_ParamLimits

0xcc34,	// (0x00022222) list_double_heading_pane_cp2

0xd200,	// (0x000227ee) list_double_heading_pane_g1_cp2_ParamLimits

0xd200,	// (0x000227ee) list_double_heading_pane_g1_cp2

0x42a1,	// (0x0001988f) list_double_heading_pane_g2_cp2_ParamLimits

0x42a1,	// (0x0001988f) list_double_heading_pane_g2_cp2

0x42b5,	// (0x000198a3) list_double_heading_pane_t1_cp2_ParamLimits

0x42b5,	// (0x000198a3) list_double_heading_pane_t1_cp2

0x42cb,	// (0x000198b9) list_double_heading_pane_t2_cp2_ParamLimits

0x42cb,	// (0x000198b9) list_double_heading_pane_t2_cp2

0xc28b,	// (0x00021879) aid_value_unit2

0xe320,	// (0x0002390e) popup_preview_fixed_window

0xc447,	// (0x00021a35) bg_popup_preview_window_pane_cp02

0x42dd,	// (0x000198cb) list_preview_fixed_pane

0x4323,	// (0x00019911) list_empty_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_empty_pane_fp

0x4323,	// (0x00019911) list_single_cale_day_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_single_cale_day_pane_fp

0x4323,	// (0x00019911) list_single_graphic_heading_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_single_graphic_heading_pane_fp

0x4323,	// (0x00019911) list_single_graphic_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_single_graphic_pane_fp

0x4323,	// (0x00019911) list_single_heading_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_single_heading_pane_fp

0x4323,	// (0x00019911) list_single_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_single_pane_fp

0x4339,	// (0x00019927) list_single_pane_fp_g1_ParamLimits

0x4339,	// (0x00019927) list_single_pane_fp_g1

0xd20c,	// (0x000227fa) list_single_pane_fp_g2_ParamLimits

0xd20c,	// (0x000227fa) list_single_pane_fp_g2

0x4345,	// (0x00019933) list_single_pane_fp_g3_ParamLimits

0x4345,	// (0x00019933) list_single_pane_fp_g3

0x4359,	// (0x00019947) list_single_pane_fp_g4_ParamLimits

0x4359,	// (0x00019947) list_single_pane_fp_g4

0x0003,

0xfb48,	// (0x00025136) list_single_pane_fp_g_ParamLimits

0xfb48,	// (0x00025136) list_single_pane_fp_g

0x4365,	// (0x00019953) list_single_pane_fp_t1_ParamLimits

0x4365,	// (0x00019953) list_single_pane_fp_t1

0x437c,	// (0x0001996a) list_single_graphic_pane_fp_g1_ParamLimits

0x437c,	// (0x0001996a) list_single_graphic_pane_fp_g1

0x4339,	// (0x00019927) list_single_graphic_pane_fp_g2_ParamLimits

0x4339,	// (0x00019927) list_single_graphic_pane_fp_g2

0xd20c,	// (0x000227fa) list_single_graphic_pane_fp_g3_ParamLimits

0xd20c,	// (0x000227fa) list_single_graphic_pane_fp_g3

0x4345,	// (0x00019933) list_single_graphic_pane_fp_g4_ParamLimits

0x4345,	// (0x00019933) list_single_graphic_pane_fp_g4

0x4359,	// (0x00019947) list_single_graphic_pane_fp_g5_ParamLimits

0x4359,	// (0x00019947) list_single_graphic_pane_fp_g5

0x0004,

0xfb51,	// (0x0002513f) list_single_graphic_pane_fp_g_ParamLimits

0xfb51,	// (0x0002513f) list_single_graphic_pane_fp_g

0x4388,	// (0x00019976) list_single_graphic_pane_fp_t1_ParamLimits

0x4388,	// (0x00019976) list_single_graphic_pane_fp_t1

0x437c,	// (0x0001996a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x437c,	// (0x0001996a) list_single_graphic_heading_pane_fp_g1

0x4339,	// (0x00019927) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4339,	// (0x00019927) list_single_graphic_heading_pane_fp_g2

0xd20c,	// (0x000227fa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd20c,	// (0x000227fa) list_single_graphic_heading_pane_fp_g3

0x4345,	// (0x00019933) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4345,	// (0x00019933) list_single_graphic_heading_pane_fp_g4

0x4359,	// (0x00019947) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4359,	// (0x00019947) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb51,	// (0x0002513f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb51,	// (0x0002513f) list_single_graphic_heading_pane_fp_g

0x439e,	// (0x0001998c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x439e,	// (0x0001998c) list_single_graphic_heading_pane_fp_t1

0x43b4,	// (0x000199a2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x43b4,	// (0x000199a2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5c,	// (0x0002514a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5c,	// (0x0002514a) list_single_graphic_heading_pane_fp_t

0x43c6,	// (0x000199b4) list_single_cale_day_pane_fp_g1_ParamLimits

0x43c6,	// (0x000199b4) list_single_cale_day_pane_fp_g1

0x43fe,	// (0x000199ec) list_single_cale_day_pane_fp_g2_ParamLimits

0x43fe,	// (0x000199ec) list_single_cale_day_pane_fp_g2

0x440a,	// (0x000199f8) list_single_cale_day_pane_fp_g3_ParamLimits

0x440a,	// (0x000199f8) list_single_cale_day_pane_fp_g3

0x4432,	// (0x00019a20) list_single_cale_day_pane_fp_g4_ParamLimits

0x4432,	// (0x00019a20) list_single_cale_day_pane_fp_g4

0x4456,	// (0x00019a44) list_single_cale_day_pane_fp_g5_ParamLimits

0x4456,	// (0x00019a44) list_single_cale_day_pane_fp_g5

0x0004,

0xfb61,	// (0x0002514f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb61,	// (0x0002514f) list_single_cale_day_pane_fp_g

0x447a,	// (0x00019a68) list_single_cale_day_pane_fp_t1_ParamLimits

0x447a,	// (0x00019a68) list_single_cale_day_pane_fp_t1

0x44a0,	// (0x00019a8e) list_single_cale_day_pane_fp_t2_ParamLimits

0x44a0,	// (0x00019a8e) list_single_cale_day_pane_fp_t2

0x44b9,	// (0x00019aa7) list_single_cale_day_pane_fp_t3_ParamLimits

0x44b9,	// (0x00019aa7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6c,	// (0x0002515a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6c,	// (0x0002515a) list_single_cale_day_pane_fp_t

0x4339,	// (0x00019927) list_empty_pane_fp_g1_ParamLimits

0x4339,	// (0x00019927) list_empty_pane_fp_g1

0x44d2,	// (0x00019ac0) list_empty_pane_fp_t1

0x44e0,	// (0x00019ace) list_empty_pane_fp_t2

0x0001,

0xfb73,	// (0x00025161) list_empty_pane_fp_t

0x4339,	// (0x00019927) list_single_heading_pane_fp_g1_ParamLimits

0x4339,	// (0x00019927) list_single_heading_pane_fp_g1

0xd20c,	// (0x000227fa) list_single_heading_pane_fp_g2_ParamLimits

0xd20c,	// (0x000227fa) list_single_heading_pane_fp_g2

0x4345,	// (0x00019933) list_single_heading_pane_fp_g3_ParamLimits

0x4345,	// (0x00019933) list_single_heading_pane_fp_g3

0x0002,

0xfb78,	// (0x00025166) list_single_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x00025166) list_single_heading_pane_fp_g

0x44ee,	// (0x00019adc) list_single_heading_pane_fp_t1_ParamLimits

0x44ee,	// (0x00019adc) list_single_heading_pane_fp_t1

0x4500,	// (0x00019aee) list_single_heading_pane_fp_t2_ParamLimits

0x4500,	// (0x00019aee) list_single_heading_pane_fp_t2

0x0001,

0xfb7f,	// (0x0002516d) list_single_heading_pane_fp_t_ParamLimits

0xfb7f,	// (0x0002516d) list_single_heading_pane_fp_t

0xa078,	// (0x0001f666) aid_size_cell_fast

0xc42a,	// (0x00021a18) soft_indicator_pane_cp1_t1

0xa081,	// (0x0001f66f) cell_app_pane_cp2_ParamLimits

0xa081,	// (0x0001f66f) cell_app_pane_cp2

0xeb84,	// (0x00024172) fep_hwr_candidate_drop_down_list_pane

0xece5,	// (0x000242d3) fep_hwr_candidate_pane_g3_ParamLimits

0xece5,	// (0x000242d3) fep_hwr_candidate_pane_g3

0xd1f3,	// (0x000227e1) fep_hwr_candidate_pane_g4_ParamLimits

0xd1f3,	// (0x000227e1) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x000250dc) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x000250dc) fep_hwr_candidate_pane_g

0x3e3b,	// (0x00019429) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3e3b,	// (0x00019429) fep_vkb_candidate_drop_down_list_pane

0x423e,	// (0x0001982c) fep_vkb_candidate_pane_g3

0x4246,	// (0x00019834) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00025109) fep_vkb_candidate_pane_g

0xed50,	// (0x0002433e) cell_hwr_candidate_pane_g1_ParamLimits

0xed5e,	// (0x0002434c) cell_hwr_candidate_pane_g3_ParamLimits

0xed5e,	// (0x0002434c) cell_hwr_candidate_pane_g3

0x6027,	// (0x0001b615) cell_hwr_candidate_pane_g4_ParamLimits

0x6027,	// (0x0001b615) cell_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x00025128) cell_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x00025128) cell_hwr_candidate_pane_g

0x425d,	// (0x0001984b) cell_vkb_candidate_pane_g3_ParamLimits

0x425d,	// (0x0001984b) cell_vkb_candidate_pane_g3

0x4278,	// (0x00019866) cell_vkb_candidate_pane_g4_ParamLimits

0x4278,	// (0x00019866) cell_vkb_candidate_pane_g4

0xb85f,	// (0x00020e4d) cell_app_pane_cp2_g1_ParamLimits

0xb85f,	// (0x00020e4d) cell_app_pane_cp2_g1

0x4534,	// (0x00019b22) cell_app_pane_cp2_g2_ParamLimits

0x4534,	// (0x00019b22) cell_app_pane_cp2_g2

0x0001,

0xfb84,	// (0x00025172) cell_app_pane_cp2_g_ParamLimits

0xfb84,	// (0x00025172) cell_app_pane_cp2_g

0x4540,	// (0x00019b2e) cell_app_pane_cp2_t1_ParamLimits

0x4540,	// (0x00019b2e) cell_app_pane_cp2_t1

0xc73d,	// (0x00021d2b) grid_highlight_pane_cp1_ParamLimits

0xc73d,	// (0x00021d2b) grid_highlight_pane_cp1

0xed9d,	// (0x0002438b) cell_hwr_candidate_pane_cp1_ParamLimits

0xed9d,	// (0x0002438b) cell_hwr_candidate_pane_cp1

0xed50,	// (0x0002433e) fep_hwr_candidate_drop_down_list_pane_g1

0xedbc,	// (0x000243aa) fep_hwr_candidate_drop_down_list_pane_g2

0xedc9,	// (0x000243b7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb89,	// (0x00025177) fep_hwr_candidate_drop_down_list_pane_g

0xedd6,	// (0x000243c4) fep_hwr_candidate_drop_down_list_scroll_pane

0xeddf,	// (0x000243cd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeddf,	// (0x000243cd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xedec,	// (0x000243da) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedec,	// (0x000243da) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xedf9,	// (0x000243e7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xedf9,	// (0x000243e7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xee06,	// (0x000243f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xee06,	// (0x000243f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee21,	// (0x0002440f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee21,	// (0x0002440f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xee3c,	// (0x0002442a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee3c,	// (0x0002442a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xee57,	// (0x00024445) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee57,	// (0x00024445) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xee72,	// (0x00024460) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee72,	// (0x00024460) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb90,	// (0x0002517e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb90,	// (0x0002517e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4552,	// (0x00019b40) cell_vkb_candidate_pane_cp1_ParamLimits

0x4552,	// (0x00019b40) cell_vkb_candidate_pane_cp1

0x3f46,	// (0x00019534) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3f46,	// (0x00019534) fep_vkb_candidate_drop_down_list_pane_g1

0x4572,	// (0x00019b60) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4572,	// (0x00019b60) fep_vkb_candidate_drop_down_list_pane_g2

0x457f,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x457f,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0002518f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba1,	// (0x0002518f) fep_vkb_candidate_drop_down_list_pane_g

0x458c,	// (0x00019b7a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x458c,	// (0x00019b7a) fep_vkb_candidate_drop_down_list_scroll_pane

0x4599,	// (0x00019b87) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4599,	// (0x00019b87) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x45a6,	// (0x00019b94) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x45a6,	// (0x00019b94) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x45b2,	// (0x00019ba0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x45b2,	// (0x00019ba0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x45be,	// (0x00019bac) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x45be,	// (0x00019bac) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x45df,	// (0x00019bcd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x45df,	// (0x00019bcd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4600,	// (0x00019bee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4600,	// (0x00019bee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4621,	// (0x00019c0f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4621,	// (0x00019c0f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4642,	// (0x00019c30) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4642,	// (0x00019c30) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x00025196) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x00025196) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x94be,	// (0x0001eaac) title_pane_g1_ParamLimits

0x94d1,	// (0x0001eabf) title_pane_g2_ParamLimits

0xf529,	// (0x00024b17) title_pane_g_ParamLimits

0xcbed,	// (0x000221db) aid_call2_pane

0xcbf5,	// (0x000221e3) aid_call_pane

0xcbfd,	// (0x000221eb) popup_clock_analogue_window_g1

0xcbfd,	// (0x000221eb) popup_clock_analogue_window_g2

0xe4d3,	// (0x00023ac1) popup_clock_analogue_window_g3

0xe4dc,	// (0x00023aca) popup_clock_analogue_window_g4

0xc29d,	// (0x0002188b) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x00024cad) popup_clock_analogue_window_g

0xe4e4,	// (0x00023ad2) popup_clock_analogue_window_t1

0xe4f2,	// (0x00023ae0) clock_digital_number_pane_ParamLimits

0xe4f2,	// (0x00023ae0) clock_digital_number_pane

0xe4fe,	// (0x00023aec) clock_digital_number_pane_cp02_ParamLimits

0xe4fe,	// (0x00023aec) clock_digital_number_pane_cp02

0xe50a,	// (0x00023af8) clock_digital_number_pane_cp03_ParamLimits

0xe50a,	// (0x00023af8) clock_digital_number_pane_cp03

0xe516,	// (0x00023b04) clock_digital_number_pane_cp04_ParamLimits

0xe516,	// (0x00023b04) clock_digital_number_pane_cp04

0xe522,	// (0x00023b10) clock_digital_separator_pane_ParamLimits

0xe522,	// (0x00023b10) clock_digital_separator_pane

0xe52e,	// (0x00023b1c) popup_clock_digital_window_t1_ParamLimits

0xe52e,	// (0x00023b1c) popup_clock_digital_window_t1

0xc29d,	// (0x0002188b) clock_digital_number_pane_g1

0xc29d,	// (0x0002188b) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00024cb8) clock_digital_number_pane_g

0xc29d,	// (0x0002188b) clock_digital_separator_pane_g1

0xc29d,	// (0x0002188b) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00024cb8) clock_digital_separator_pane_g

0xa5e7,	// (0x0001fbd5) aid_fill_nsta_ParamLimits

0xa71d,	// (0x0001fd0b) indicator_nsta_pane_ParamLimits

0x0f0c,	// (0x000164fa) popup_clock_analogue_window

0x0f0c,	// (0x000164fa) popup_clock_digital_window

0xb46a,	// (0x00020a58) grid_indicator_nsta_pane_ParamLimits

0x367f,	// (0x00018c6d) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x0002505c) clock_nsta_pane_t

0xe4b4,	// (0x00023aa2) aid_size_max_handle

0x81cd,	// (0x0001d7bb) aid_size_min_handle

0xd04f,	// (0x0002263d) editor_scroll_pane

0x465d,	// (0x00019c4b) ex_editor_pane

0xc8dd,	// (0x00021ecb) scroll_pane_cp13

0xc67b,	// (0x00021c69) scroll_pane_cp14

0xcc2c,	// (0x0002221a) scroll_pane_cp36

0xa20c,	// (0x0001f7fa) list_single_graphic_hl_pane_cp2_ParamLimits

0xa20c,	// (0x0001f7fa) list_single_graphic_hl_pane_cp2

0xb270,	// (0x0002085e) list_single_graphic_hl_pane_ParamLimits

0xb270,	// (0x0002085e) list_single_graphic_hl_pane

0x6646,	// (0x0001bc34) aid_size_min_hl_cp1

0x466e,	// (0x00019c5c) list_highlight_pane_cp34_ParamLimits

0x466e,	// (0x00019c5c) list_highlight_pane_cp34

0x467f,	// (0x00019c6d) list_single_graphic_hl_pane_g1_ParamLimits

0x467f,	// (0x00019c6d) list_single_graphic_hl_pane_g1

0xb87d,	// (0x00020e6b) list_single_graphic_hl_pane_g2_ParamLimits

0xb87d,	// (0x00020e6b) list_single_graphic_hl_pane_g2

0xb87d,	// (0x00020e6b) list_single_graphic_hl_pane_g3_ParamLimits

0xb87d,	// (0x00020e6b) list_single_graphic_hl_pane_g3

0xcfda,	// (0x000225c8) list_single_graphic_hl_pane_g4_ParamLimits

0xcfda,	// (0x000225c8) list_single_graphic_hl_pane_g4

0xb889,	// (0x00020e77) list_single_graphic_hl_pane_g5_ParamLimits

0xb889,	// (0x00020e77) list_single_graphic_hl_pane_g5

0x0004,

0xfbb9,	// (0x000251a7) list_single_graphic_hl_pane_g_ParamLimits

0xfbb9,	// (0x000251a7) list_single_graphic_hl_pane_g

0xb89d,	// (0x00020e8b) list_single_graphic_hl_pane_t1_ParamLimits

0xb89d,	// (0x00020e8b) list_single_graphic_hl_pane_t1

0x46c2,	// (0x00019cb0) aid_size_min_hl_cp2

0x46cb,	// (0x00019cb9) list_highlight_pane_cp34_cp2_ParamLimits

0x46cb,	// (0x00019cb9) list_highlight_pane_cp34_cp2

0x467f,	// (0x00019c6d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x467f,	// (0x00019c6d) list_single_graphic_hl_pane_g1_cp2

0x46d8,	// (0x00019cc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x46d8,	// (0x00019cc6) list_single_graphic_hl_pane_g2_cp2

0xb8b3,	// (0x00020ea1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb8b3,	// (0x00020ea1) list_single_graphic_hl_pane_g3_cp2

0xc683,	// (0x00021c71) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc683,	// (0x00021c71) list_single_graphic_hl_pane_g4_cp2

0x4698,	// (0x00019c86) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4698,	// (0x00019c86) list_single_graphic_hl_pane_g5_cp2

0x827f,	// (0x0001d86d) control_pane_g4_ParamLimits

0x827f,	// (0x0001d86d) control_pane_g4

0xc8ed,	// (0x00021edb) bg_popup_sub_pane_cp10_ParamLimits

0x3ce0,	// (0x000192ce) list_choice_list_pane_ParamLimits

0x3cef,	// (0x000192dd) scroll_pane_cp23

0xc447,	// (0x00021a35) bg_popup_preview_window_pane_cp02_ParamLimits

0x42dd,	// (0x000198cb) list_preview_fixed_pane_ParamLimits

0x42f3,	// (0x000198e1) list_preview_fixed_pane_cp_ParamLimits

0x42f3,	// (0x000198e1) list_preview_fixed_pane_cp

0x42ff,	// (0x000198ed) popup_preview_fixed_window_g1_ParamLimits

0x42ff,	// (0x000198ed) popup_preview_fixed_window_g1

0x430b,	// (0x000198f9) popup_preview_fixed_window_g2_ParamLimits

0x430b,	// (0x000198f9) popup_preview_fixed_window_g2

0x0002,

0xfb41,	// (0x0002512f) popup_preview_fixed_window_g_ParamLimits

0xfb41,	// (0x0002512f) popup_preview_fixed_window_g

0xe428,	// (0x00023a16) aid_navi_side_left_pane_ParamLimits

0xe43d,	// (0x00023a2b) aid_navi_side_right_pane_ParamLimits

0xe455,	// (0x00023a43) navi_icon_pane_stacon_ParamLimits

0xe469,	// (0x00023a57) navi_navi_pane_stacon_ParamLimits

0xe455,	// (0x00023a43) navi_text_pane_stacon_ParamLimits

0xe245,	// (0x00023833) main_text_info_pane

0x4708,	// (0x00019cf6) listscroll_text_info_pane

0x4710,	// (0x00019cfe) list_text_info_pane_ParamLimits

0x4710,	// (0x00019cfe) list_text_info_pane

0x471f,	// (0x00019d0d) scroll_pane_cp24_ParamLimits

0x471f,	// (0x00019d0d) scroll_pane_cp24

0xb8c1,	// (0x00020eaf) list_text_info_pane_t1_ParamLimits

0xb8c1,	// (0x00020eaf) list_text_info_pane_t1

0x83f8,	// (0x0001d9e6) popup_fast_swap2_window_ParamLimits

0x83f8,	// (0x0001d9e6) popup_fast_swap2_window

0x4771,	// (0x00019d5f) aid_size_cell_fast2

0xc293,	// (0x00021881) bg_popup_window_pane_cp17

0x16b4,	// (0x00016ca2) heading_pane_cp2

0x16bc,	// (0x00016caa) listscroll_fast2_pane

0x477b,	// (0x00019d69) grid_fast2_pane

0x4785,	// (0x00019d73) listscroll_fast2_pane_g1

0x478d,	// (0x00019d7b) listscroll_fast2_pane_g2

0x0001,

0xfbc4,	// (0x000251b2) listscroll_fast2_pane_g

0xc8dd,	// (0x00021ecb) scroll_pane_cp26

0x4797,	// (0x00019d85) cell_fast2_pane_ParamLimits

0x4797,	// (0x00019d85) cell_fast2_pane

0x47ac,	// (0x00019d9a) cell_fast2_pane_g1

0x47b5,	// (0x00019da3) cell_fast2_pane_g2

0x47be,	// (0x00019dac) cell_fast2_pane_g3

0x0002,

0xfbc9,	// (0x000251b7) cell_fast2_pane_g

0xc5b2,	// (0x00021ba0) grid_highlight_pane_cp9

0xe780,	// (0x00023d6e) main_eswt_pane_ParamLimits

0xe780,	// (0x00023d6e) main_eswt_pane

0x4734,	// (0x00019d22) list_single_text_info_pane

0x47c6,	// (0x00019db4) eswt_ctrl_button_pane

0x47c6,	// (0x00019db4) eswt_ctrl_canvas_pane

0xb8dd,	// (0x00020ecb) eswt_ctrl_combo_pane

0x47c6,	// (0x00019db4) eswt_ctrl_default_pane

0x47c6,	// (0x00019db4) eswt_ctrl_label_pane

0x47d6,	// (0x00019dc4) eswt_ctrl_wait_pane

0xb8e5,	// (0x00020ed3) eswt_shell_pane

0xc293,	// (0x00021881) listscroll_eswt_app_pane

0x47fe,	// (0x00019dec) popup_eswt_tasktip_window_ParamLimits

0x47fe,	// (0x00019dec) popup_eswt_tasktip_window

0x1280,	// (0x0001686e) bg_popup_window_pane_cp18

0x480f,	// (0x00019dfd) eswt_control_pane_g1_ParamLimits

0x480f,	// (0x00019dfd) eswt_control_pane_g1

0x481c,	// (0x00019e0a) eswt_control_pane_g2_ParamLimits

0x481c,	// (0x00019e0a) eswt_control_pane_g2

0x4829,	// (0x00019e17) eswt_control_pane_g3_ParamLimits

0x4829,	// (0x00019e17) eswt_control_pane_g3

0x4836,	// (0x00019e24) eswt_control_pane_g4_ParamLimits

0x4836,	// (0x00019e24) eswt_control_pane_g4

0x0003,

0xfbd0,	// (0x000251be) eswt_control_pane_g_ParamLimits

0xfbd0,	// (0x000251be) eswt_control_pane_g

0xc73d,	// (0x00021d2b) bg_button_pane_ParamLimits

0xc73d,	// (0x00021d2b) bg_button_pane

0xc5c7,	// (0x00021bb5) common_borders_pane_copy2_ParamLimits

0xc5c7,	// (0x00021bb5) common_borders_pane_copy2

0x4843,	// (0x00019e31) control_button_pane_g1_ParamLimits

0x4843,	// (0x00019e31) control_button_pane_g1

0x484f,	// (0x00019e3d) control_button_pane_g2_ParamLimits

0x484f,	// (0x00019e3d) control_button_pane_g2

0x485b,	// (0x00019e49) control_button_pane_g3_ParamLimits

0x485b,	// (0x00019e49) control_button_pane_g3

0x0002,

0xfbd9,	// (0x000251c7) control_button_pane_g_ParamLimits

0xfbd9,	// (0x000251c7) control_button_pane_g

0x486f,	// (0x00019e5d) control_button_pane_t1

0x487d,	// (0x00019e6b) control_button_pane_t2

0x0001,

0xfbe0,	// (0x000251ce) control_button_pane_t

0x1160,	// (0x0001674e) bg_button_pane_g1

0x1170,	// (0x0001675e) bg_button_pane_g2

0x1168,	// (0x00016756) bg_button_pane_g3

0x1180,	// (0x0001676e) bg_button_pane_g4

0x1178,	// (0x00016766) bg_button_pane_g5

0x1188,	// (0x00016776) bg_button_pane_g6

0x1190,	// (0x0001677e) bg_button_pane_g7

0x11a0,	// (0x0001678e) bg_button_pane_g8

0x1198,	// (0x00016786) bg_button_pane_g9

0x0008,

0xf821,	// (0x00024e0f) bg_button_pane_g

0x3c9b,	// (0x00019289) common_borders_pane_ParamLimits

0x3c9b,	// (0x00019289) common_borders_pane

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy1_ParamLimits

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy1

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy1_ParamLimits

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy1

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy1_ParamLimits

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy1

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy1_ParamLimits

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy1

0x3cd6,	// (0x000192c4) bg_eswt_ctrl_canvas_pane_g1

0x3c9b,	// (0x00019289) common_borders_pane_cp2_ParamLimits

0x3c9b,	// (0x00019289) common_borders_pane_cp2

0x3c9b,	// (0x00019289) common_borders_pane_cp3_ParamLimits

0x3c9b,	// (0x00019289) common_borders_pane_cp3

0x488b,	// (0x00019e79) separator_horizontal_pane

0x4893,	// (0x00019e81) separator_vertical_pane

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy2_ParamLimits

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy2

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy2_ParamLimits

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy2

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy2_ParamLimits

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy2

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy2_ParamLimits

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy2

0xc293,	// (0x00021881) common_borders_pane_cp4

0x489c,	// (0x00019e8a) separator_horizontal_pane_g1

0x48a5,	// (0x00019e93) separator_horizontal_pane_g2

0x48ae,	// (0x00019e9c) separator_horizontal_pane_g3

0x0002,

0xfbe5,	// (0x000251d3) separator_horizontal_pane_g

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy3_ParamLimits

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy3

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy3_ParamLimits

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy3

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy3_ParamLimits

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy3

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy3_ParamLimits

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy3

0xc293,	// (0x00021881) common_borders_pane_cp5

0x48b7,	// (0x00019ea5) separator_vertical_pane_g1

0x48c0,	// (0x00019eae) separator_vertical_pane_g2

0x48c9,	// (0x00019eb7) separator_vertical_pane_g3

0x0002,

0xfbec,	// (0x000251da) separator_vertical_pane_g

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy4_ParamLimits

0x480f,	// (0x00019dfd) eswt_control_pane_g1_copy4

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy4_ParamLimits

0x481c,	// (0x00019e0a) eswt_control_pane_g2_copy4

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy4_ParamLimits

0x4829,	// (0x00019e17) eswt_control_pane_g3_copy4

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy4_ParamLimits

0x4836,	// (0x00019e24) eswt_control_pane_g4_copy4

0xb905,	// (0x00020ef3) eswt_ctrl_combo_button_pane

0xb90d,	// (0x00020efb) eswt_ctrl_input_pane

0xb915,	// (0x00020f03) popup_choice_list_window_cp70

0xb91d,	// (0x00020f0b) eswt_ctrl_input_pane_t1

0xc293,	// (0x00021881) input_focus_pane_cp70

0x3c9b,	// (0x00019289) bg_button_pane_cp70_ParamLimits

0x3c9b,	// (0x00019289) bg_button_pane_cp70

0xb92b,	// (0x00020f19) eswt_ctrl_combo_button_pane_g1

0x4900,	// (0x00019eee) wait_bar_pane_cp70

0x1280,	// (0x0001686e) bg_popup_window_pane_cp70_ParamLimits

0x1280,	// (0x0001686e) bg_popup_window_pane_cp70

0x4908,	// (0x00019ef6) popup_eswt_tasktip_window_t1

0x491e,	// (0x00019f0c) wait_bar_pane_cp71_ParamLimits

0x491e,	// (0x00019f0c) wait_bar_pane_cp71

0x492a,	// (0x00019f18) grid_eswt_app_pane

0xcad0,	// (0x000220be) scroll_pane_cp70

0xb933,	// (0x00020f21) cell_eswt_app_pane_ParamLimits

0xb933,	// (0x00020f21) cell_eswt_app_pane

0xb95d,	// (0x00020f4b) cell_eswt_app_pane_g1_ParamLimits

0xb95d,	// (0x00020f4b) cell_eswt_app_pane_g1

0xb98c,	// (0x00020f7a) cell_eswt_app_pane_g2_ParamLimits

0xb98c,	// (0x00020f7a) cell_eswt_app_pane_g2

0x0001,

0xfbf3,	// (0x000251e1) cell_eswt_app_pane_g_ParamLimits

0xfbf3,	// (0x000251e1) cell_eswt_app_pane_g

0xb9b0,	// (0x00020f9e) cell_eswt_app_pane_t1_ParamLimits

0xb9b0,	// (0x00020f9e) cell_eswt_app_pane_t1

0x49e8,	// (0x00019fd6) grid_highlight_pane_cp70_ParamLimits

0x49e8,	// (0x00019fd6) grid_highlight_pane_cp70

0xcf55,	// (0x00022543) set_content_pane_g1

0xa59c,	// (0x0001fb8a) status_small_volume_pane

0x8d46,	// (0x0001e334) status_small_volume_pane_g1

0x8d4e,	// (0x0001e33c) volume_small2_pane

0x8d57,	// (0x0001e345) volume_small2_pane_g1

0x8d60,	// (0x0001e34e) volume_small2_pane_g2

0x8d69,	// (0x0001e357) volume_small2_pane_g3

0x8d72,	// (0x0001e360) volume_small2_pane_g4

0x8d7b,	// (0x0001e369) volume_small2_pane_g5

0x8d84,	// (0x0001e372) volume_small2_pane_g6

0x8d8d,	// (0x0001e37b) volume_small2_pane_g7

0x8d96,	// (0x0001e384) volume_small2_pane_g8

0x8d9f,	// (0x0001e38d) volume_small2_pane_g9

0x8da8,	// (0x0001e396) volume_small2_pane_g10

0x0009,

0xfbf8,	// (0x000251e6) volume_small2_pane_g

0x408e,	// (0x0001967c) fep_vkb_top_text_pane_g1_ParamLimits

0xb807,	// (0x00020df5) fep_vkb_top_text_pane_t1_ParamLimits

0x4317,	// (0x00019905) popup_preview_fixed_window_g3_ParamLimits

0x4317,	// (0x00019905) popup_preview_fixed_window_g3

0x8a6f,	// (0x0001e05d) popup_toolbar_trans_pane

0xb0c7,	// (0x000206b5) aid_height_set_list_ParamLimits

0x2622,	// (0x00017c10) aid_size_parent_ParamLimits

0xc8ed,	// (0x00021edb) list_highlight_pane_cp2_ParamLimits

0xcf55,	// (0x00022543) set_content_pane_g1_ParamLimits

0xb282,	// (0x00020870) list_single_image_pane_ParamLimits

0xb282,	// (0x00020870) list_single_image_pane

0xb9e2,	// (0x00020fd0) aid_size_cell_image_ParamLimits

0xb9e2,	// (0x00020fd0) aid_size_cell_image

0xb9ef,	// (0x00020fdd) grid_single_image_pane_ParamLimits

0xb9ef,	// (0x00020fdd) grid_single_image_pane

0xd20c,	// (0x000227fa) list_single_image_pane_g1_ParamLimits

0xd20c,	// (0x000227fa) list_single_image_pane_g1

0x4345,	// (0x00019933) list_single_image_pane_g2_ParamLimits

0x4345,	// (0x00019933) list_single_image_pane_g2

0x0001,

0xfc0d,	// (0x000251fb) list_single_image_pane_g_ParamLimits

0xfc0d,	// (0x000251fb) list_single_image_pane_g

0x4a0d,	// (0x00019ffb) list_single_image_pane_t1_ParamLimits

0x4a0d,	// (0x00019ffb) list_single_image_pane_t1

0xb9fb,	// (0x00020fe9) cell_image_list_pane_ParamLimits

0xb9fb,	// (0x00020fe9) cell_image_list_pane

0xba0f,	// (0x00020ffd) cell_image_list_pane_g1

0xba18,	// (0x00021006) cell_image_list_pane_g2

0x0001,

0xfc12,	// (0x00025200) cell_image_list_pane_g

0xba21,	// (0x0002100f) aid_size_cell_tb_trans_pane

0xc73d,	// (0x00021d2b) bg_tb_trans_pane

0xba33,	// (0x00021021) grid_tb_trans_pane

0x1160,	// (0x0001674e) bg_tb_trans_pane_g1

0x1170,	// (0x0001675e) bg_tb_trans_pane_g2

0x1168,	// (0x00016756) bg_tb_trans_pane_g3

0x1180,	// (0x0001676e) bg_tb_trans_pane_g4

0x1178,	// (0x00016766) bg_tb_trans_pane_g5

0x11a0,	// (0x0001678e) bg_tb_trans_pane_g6

0x1198,	// (0x00016786) bg_tb_trans_pane_g7

0x1188,	// (0x00016776) bg_tb_trans_pane_g8

0x1190,	// (0x0001677e) bg_tb_trans_pane_g9

0x0008,

0xfc17,	// (0x00025205) bg_tb_trans_pane_g

0xba47,	// (0x00021035) cell_toolbar_trans_pane_ParamLimits

0xba47,	// (0x00021035) cell_toolbar_trans_pane

0x3cd6,	// (0x000192c4) cell_toolbar_trans_pane_g1

0xb533,	// (0x00020b21) list_form2_midp_pane_t1

0xb541,	// (0x00020b2f) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x000250a2) list_form2_midp_pane_t

0x3870,	// (0x00018e5e) scroll_pane_cp51_ParamLimits

0x3a79,	// (0x00019067) form2_midp_wait_pane_g1

0x3a82,	// (0x00019070) form2_midp_wait_pane_g2

0x3a8b,	// (0x00019079) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x000250b7) form2_midp_wait_pane_g

0xc303,	// (0x000218f1) list_highlight_pane_cp21_ParamLimits

0x3ad3,	// (0x000190c1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3ae2,	// (0x000190d0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2825,	// (0x00017e13) list_single_2graphic_im_pane_ParamLimits

0x2825,	// (0x00017e13) list_single_2graphic_im_pane

0xba6d,	// (0x0002105b) list_single_2graphic_im_pane_g1_ParamLimits

0xba6d,	// (0x0002105b) list_single_2graphic_im_pane_g1

0xba7e,	// (0x0002106c) list_single_2graphic_im_pane_g2_ParamLimits

0xba7e,	// (0x0002106c) list_single_2graphic_im_pane_g2

0xba8a,	// (0x00021078) list_single_2graphic_im_pane_g3_ParamLimits

0xba8a,	// (0x00021078) list_single_2graphic_im_pane_g3

0x0003,

0xfc2a,	// (0x00025218) list_single_2graphic_im_pane_g_ParamLimits

0xfc2a,	// (0x00025218) list_single_2graphic_im_pane_g

0xba9e,	// (0x0002108c) list_single_2graphic_im_pane_t1_ParamLimits

0xba9e,	// (0x0002108c) list_single_2graphic_im_pane_t1

0x4323,	// (0x00019911) list_single_graphic_2heading_pane_fp_ParamLimits

0x4323,	// (0x00019911) list_single_graphic_2heading_pane_fp

0x437c,	// (0x0001996a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x437c,	// (0x0001996a) list_single_graphic_2heading_pane_fp_g1

0x4339,	// (0x00019927) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4339,	// (0x00019927) list_single_graphic_2heading_pane_fp_g2

0xd20c,	// (0x000227fa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd20c,	// (0x000227fa) list_single_graphic_2heading_pane_fp_g3

0x4345,	// (0x00019933) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4345,	// (0x00019933) list_single_graphic_2heading_pane_fp_g4

0x4359,	// (0x00019947) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4359,	// (0x00019947) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb51,	// (0x0002513f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb51,	// (0x0002513f) list_single_graphic_2heading_pane_fp_g

0x4b03,	// (0x0001a0f1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4b03,	// (0x0001a0f1) list_single_graphic_2heading_pane_fp_t1

0x43b4,	// (0x000199a2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x43b4,	// (0x000199a2) list_single_graphic_2heading_pane_fp_t2

0x4b19,	// (0x0001a107) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4b19,	// (0x0001a107) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc33,	// (0x00025221) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc33,	// (0x00025221) list_single_graphic_2heading_pane_fp_t

0x3d62,	// (0x00019350) fep_hwr_write_pane_g5_ParamLimits

0x3d62,	// (0x00019350) fep_hwr_write_pane_g5

0x3d6e,	// (0x0001935c) fep_hwr_write_pane_g6_ParamLimits

0x3d6e,	// (0x0001935c) fep_hwr_write_pane_g6

0xb8e5,	// (0x00020ed3) eswt_shell_pane_ParamLimits

0x1280,	// (0x0001686e) bg_popup_window_pane_cp18_ParamLimits

0x2558,	// (0x00017b46) heading_pane_cp70

0x4908,	// (0x00019ef6) popup_eswt_tasktip_window_t1_ParamLimits

0xa642,	// (0x0001fc30) aid_touch_tab_arrow_left

0xa658,	// (0x0001fc46) aid_touch_tab_arrow_right

0x94e9,	// (0x0001ead7) title_pane_g3_ParamLimits

0x94e9,	// (0x0001ead7) title_pane_g3

0xc6d4,	// (0x00021cc2) set_value_pane_g1

0x8a6f,	// (0x0001e05d) popup_toolbar_trans_pane_ParamLimits

0xba21,	// (0x0002100f) aid_size_cell_tb_trans_pane_ParamLimits

0xc73d,	// (0x00021d2b) bg_tb_trans_pane_ParamLimits

0xba33,	// (0x00021021) grid_tb_trans_pane_ParamLimits

0xc447,	// (0x00021a35) cont_note_pane_ParamLimits

0xc447,	// (0x00021a35) cont_note_pane

0xc5c7,	// (0x00021bb5) cont_snote2_single_text_pane_ParamLimits

0xc5c7,	// (0x00021bb5) cont_snote2_single_text_pane

0xc5c7,	// (0x00021bb5) cont_snote2_single_graphic_pane_ParamLimits

0xc5c7,	// (0x00021bb5) cont_snote2_single_graphic_pane

0x18db,	// (0x00016ec9) cont_note_wait_pane_ParamLimits

0x18db,	// (0x00016ec9) cont_note_wait_pane

0x18db,	// (0x00016ec9) cont_note_image_pane_ParamLimits

0x18db,	// (0x00016ec9) cont_note_image_pane

0x4b2f,	// (0x0001a11d) popup_note2_window_g1_ParamLimits

0x4b2f,	// (0x0001a11d) popup_note2_window_g1

0xbadc,	// (0x000210ca) popup_note2_window_t1_ParamLimits

0xbadc,	// (0x000210ca) popup_note2_window_t1

0xbb21,	// (0x0002110f) popup_note2_window_t2_ParamLimits

0xbb21,	// (0x0002110f) popup_note2_window_t2

0xbb66,	// (0x00021154) popup_note2_window_t3_ParamLimits

0xbb66,	// (0x00021154) popup_note2_window_t3

0x4c2f,	// (0x0001a21d) popup_note2_window_t4_ParamLimits

0x4c2f,	// (0x0001a21d) popup_note2_window_t4

0xc4cb,	// (0x00021ab9) popup_note2_window_t5_ParamLimits

0xc4cb,	// (0x00021ab9) popup_note2_window_t5

0x0004,

0xfc3f,	// (0x0002522d) popup_note2_window_t_ParamLimits

0xfc3f,	// (0x0002522d) popup_note2_window_t

0x4c5e,	// (0x0001a24c) popup_note2_image_window_g1_ParamLimits

0x4c5e,	// (0x0001a24c) popup_note2_image_window_g1

0xbbab,	// (0x00021199) popup_note2_image_window_g2_ParamLimits

0xbbab,	// (0x00021199) popup_note2_image_window_g2

0x0001,

0xfc4a,	// (0x00025238) popup_note2_image_window_g_ParamLimits

0xfc4a,	// (0x00025238) popup_note2_image_window_g

0x4c7c,	// (0x0001a26a) popup_note2_image_window_t1_ParamLimits

0x4c7c,	// (0x0001a26a) popup_note2_image_window_t1

0x4c94,	// (0x0001a282) popup_note2_image_window_t2_ParamLimits

0x4c94,	// (0x0001a282) popup_note2_image_window_t2

0x4cac,	// (0x0001a29a) popup_note2_image_window_t3_ParamLimits

0x4cac,	// (0x0001a29a) popup_note2_image_window_t3

0x0002,

0xfc4f,	// (0x0002523d) popup_note2_image_window_t_ParamLimits

0xfc4f,	// (0x0002523d) popup_note2_image_window_t

0x18e9,	// (0x00016ed7) popup_note2_wait_window_g1_ParamLimits

0x18e9,	// (0x00016ed7) popup_note2_wait_window_g1

0x18f5,	// (0x00016ee3) popup_note2_wait_window_g2_ParamLimits

0x18f5,	// (0x00016ee3) popup_note2_wait_window_g2

0x1901,	// (0x00016eef) popup_note2_wait_window_g3_ParamLimits

0x1901,	// (0x00016eef) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x00024df1) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x00024df1) popup_note2_wait_window_g

0x4cc8,	// (0x0001a2b6) popup_note2_wait_window_t1_ParamLimits

0x4cc8,	// (0x0001a2b6) popup_note2_wait_window_t1

0x4ce6,	// (0x0001a2d4) popup_note2_wait_window_t2_ParamLimits

0x4ce6,	// (0x0001a2d4) popup_note2_wait_window_t2

0x4d04,	// (0x0001a2f2) popup_note2_wait_window_t3_ParamLimits

0x4d04,	// (0x0001a2f2) popup_note2_wait_window_t3

0x4d16,	// (0x0001a304) popup_note2_wait_window_t4_ParamLimits

0x4d16,	// (0x0001a304) popup_note2_wait_window_t4

0x0003,

0xfc56,	// (0x00025244) popup_note2_wait_window_t_ParamLimits

0xfc56,	// (0x00025244) popup_note2_wait_window_t

0x4d28,	// (0x0001a316) wait_bar2_pane_ParamLimits

0x4d28,	// (0x0001a316) wait_bar2_pane

0x4d40,	// (0x0001a32e) popup_snote2_single_text_window_g1_ParamLimits

0x4d40,	// (0x0001a32e) popup_snote2_single_text_window_g1

0x4d68,	// (0x0001a356) popup_snote2_single_text_window_t1_ParamLimits

0x4d68,	// (0x0001a356) popup_snote2_single_text_window_t1

0x4db4,	// (0x0001a3a2) popup_snote2_single_text_window_t2_ParamLimits

0x4db4,	// (0x0001a3a2) popup_snote2_single_text_window_t2

0x4e00,	// (0x0001a3ee) popup_snote2_single_text_window_t3_ParamLimits

0x4e00,	// (0x0001a3ee) popup_snote2_single_text_window_t3

0x4e41,	// (0x0001a42f) popup_snote2_single_text_window_t4_ParamLimits

0x4e41,	// (0x0001a42f) popup_snote2_single_text_window_t4

0x4e77,	// (0x0001a465) popup_snote2_single_text_window_t5_ParamLimits

0x4e77,	// (0x0001a465) popup_snote2_single_text_window_t5

0x0004,

0xfc5f,	// (0x0002524d) popup_snote2_single_text_window_t_ParamLimits

0xfc5f,	// (0x0002524d) popup_snote2_single_text_window_t

0xbbbd,	// (0x000211ab) popup_snote2_single_graphic_window_g1_ParamLimits

0xbbbd,	// (0x000211ab) popup_snote2_single_graphic_window_g1

0x4eca,	// (0x0001a4b8) popup_snote2_single_graphic_window_g2_ParamLimits

0x4eca,	// (0x0001a4b8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6a,	// (0x00025258) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6a,	// (0x00025258) popup_snote2_single_graphic_window_g

0x4ef2,	// (0x0001a4e0) popup_snote2_single_graphic_window_t1_ParamLimits

0x4ef2,	// (0x0001a4e0) popup_snote2_single_graphic_window_t1

0x4f3e,	// (0x0001a52c) popup_snote2_single_graphic_window_t2_ParamLimits

0x4f3e,	// (0x0001a52c) popup_snote2_single_graphic_window_t2

0x4e00,	// (0x0001a3ee) popup_snote2_single_graphic_window_t3_ParamLimits

0x4e00,	// (0x0001a3ee) popup_snote2_single_graphic_window_t3

0x4e41,	// (0x0001a42f) popup_snote2_single_graphic_window_t4_ParamLimits

0x4e41,	// (0x0001a42f) popup_snote2_single_graphic_window_t4

0x4e77,	// (0x0001a465) popup_snote2_single_graphic_window_t5_ParamLimits

0x4e77,	// (0x0001a465) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6f,	// (0x0002525d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6f,	// (0x0002525d) popup_snote2_single_graphic_window_t

0x372d,	// (0x00018d1b) clock_nsta_pane_cp2_t1

0x372d,	// (0x00018d1b) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00025078) clock_nsta_pane_cp2_t

0xc75c,	// (0x00021d4a) form_field_data_wide_pane_g1_ParamLimits

0xc768,	// (0x00021d56) form_field_data_wide_pane_g2_ParamLimits

0xc768,	// (0x00021d56) form_field_data_wide_pane_g2

0xc774,	// (0x00021d62) form_field_data_wide_pane_g3_ParamLimits

0xc774,	// (0x00021d62) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x00024c30) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x00024c30) form_field_data_wide_pane_g

0xb454,	// (0x00020a42) grid_touch_3_pane_ParamLimits

0xb454,	// (0x00020a42) grid_touch_3_pane

0xbbe5,	// (0x000211d3) cell_touch_3_pane_ParamLimits

0xbbe5,	// (0x000211d3) cell_touch_3_pane

0x3cd6,	// (0x000192c4) cell_touch_3_pane_g1

0x3cd6,	// (0x000192c4) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x000250fd) cell_touch_3_pane_g

0xc4fd,	// (0x00021aeb) cont_query_data_pane

0xc505,	// (0x00021af3) cont_query_data_pane_cp1

0x4fb8,	// (0x0001a5a6) button_value_adjust_pane_cp7

0x4fc0,	// (0x0001a5ae) query_popup_pane_cp3

0xcc5e,	// (0x0002224c) bg_popup_sub_pane_cp22_ParamLimits

0x81ea,	// (0x0001d7d8) navi_navi_volume_pane_cp2

0x81f9,	// (0x0001d7e7) popup_side_volume_key_window_g2

0x8208,	// (0x0001d7f6) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x00024cc6) popup_side_volume_key_window_g

0x8217,	// (0x0001d805) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x00024ccd) popup_side_volume_key_window_t

0xa3e6,	// (0x0001f9d4) popup_side_volume_key_window_ParamLimits

0x9bbf,	// (0x0001f1ad) list_double_graphic_pane_g4_ParamLimits

0x9bbf,	// (0x0001f1ad) list_double_graphic_pane_g4

0xb25c,	// (0x0002084a) list_single_2heading_msg_pane_ParamLimits

0xb25c,	// (0x0002084a) list_single_2heading_msg_pane

0xbc2e,	// (0x0002121c) list_single_2heading_msg_pane_g1_ParamLimits

0xbc2e,	// (0x0002121c) list_single_2heading_msg_pane_g1

0xbc3a,	// (0x00021228) list_single_2heading_msg_pane_g2_ParamLimits

0xbc3a,	// (0x00021228) list_single_2heading_msg_pane_g2

0xbc4d,	// (0x0002123b) list_single_2heading_msg_pane_g3_ParamLimits

0xbc4d,	// (0x0002123b) list_single_2heading_msg_pane_g3

0xbc59,	// (0x00021247) list_single_2heading_msg_pane_g4_ParamLimits

0xbc59,	// (0x00021247) list_single_2heading_msg_pane_g4

0x0003,

0xfc7a,	// (0x00025268) list_single_2heading_msg_pane_g_ParamLimits

0xfc7a,	// (0x00025268) list_single_2heading_msg_pane_g

0xbc71,	// (0x0002125f) list_single_2heading_msg_pane_t1_ParamLimits

0xbc71,	// (0x0002125f) list_single_2heading_msg_pane_t1

0xbc99,	// (0x00021287) list_single_2heading_msg_pane_t2_ParamLimits

0xbc99,	// (0x00021287) list_single_2heading_msg_pane_t2

0xbd04,	// (0x000212f2) list_single_2heading_msg_pane_t3_ParamLimits

0xbd04,	// (0x000212f2) list_single_2heading_msg_pane_t3

0x50af,	// (0x0001a69d) list_single_2heading_msg_pane_t4_ParamLimits

0x50af,	// (0x0001a69d) list_single_2heading_msg_pane_t4

0x0003,

0xfc83,	// (0x00025271) list_single_2heading_msg_pane_t_ParamLimits

0xfc83,	// (0x00025271) list_single_2heading_msg_pane_t

0xc2b1,	// (0x0002189f) title_pane_g4_ParamLimits

0xc2b1,	// (0x0002189f) title_pane_g4

0xe379,	// (0x00023967) title_pane_stacon_g3_ParamLimits

0xe379,	// (0x00023967) title_pane_stacon_g3

0x4ac6,	// (0x0001a0b4) list_single_2graphic_im_pane_g4_ParamLimits

0x4ac6,	// (0x0001a0b4) list_single_2graphic_im_pane_g4

0xaf62,	// (0x00020550) popup_side_volume_key_window_cp

0x2c2f,	// (0x0001821d) main_idle_act2_pane_t1

0xe88c,	// (0x00023e7a) toolbar_button_pane_g10

0x9a64,	// (0x0001f052) popup_toolbar_window_cp1

0x371e,	// (0x00018d0c) clock_nsta_pane_cp_t1

0x371e,	// (0x00018d0c) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x00025073) clock_nsta_pane_cp_t

0x81ea,	// (0x0001d7d8) navi_navi_volume_pane_cp2_ParamLimits

0xe54d,	// (0x00023b3b) popup_side_volume_key_window_g1_ParamLimits

0x81f9,	// (0x0001d7e7) popup_side_volume_key_window_g2_ParamLimits

0x8208,	// (0x0001d7f6) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x00024cc6) popup_side_volume_key_window_g_ParamLimits

0xeb70,	// (0x0002415e) fep_hwr_aid_pane

0xec17,	// (0x00024205) bg_fep_hwr_top_pane_g4_ParamLimits

0x3d32,	// (0x00019320) fep_hwr_top_pane_g1_ParamLimits

0x3d44,	// (0x00019332) fep_hwr_top_pane_g2_ParamLimits

0xec37,	// (0x00024225) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x000250c8) fep_hwr_top_pane_g_ParamLimits

0xec4c,	// (0x0002423a) fep_hwr_top_text_pane_ParamLimits

0x20e5,	// (0x000176d3) aid_touch_tab_arrow_arrow_2

0x20ee,	// (0x000176dc) aid_touch_tab_arrow_left_2

0xeb84,	// (0x00024172) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xebbb,	// (0x000241a9) fep_hwr_prediction_pane

0x3e9d,	// (0x0001948b) fep_vkb_prediction_pane

0xb7e7,	// (0x00020dd5) fep_vkb_side_pane_g3_ParamLimits

0xb7e7,	// (0x00020dd5) fep_vkb_side_pane_g3

0xed50,	// (0x0002433e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xedbc,	// (0x000243aa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xedc9,	// (0x000243b7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb89,	// (0x00025177) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xee8d,	// (0x0002447b) fep_hwr_prediction_pane_g1

0xee97,	// (0x00024485) fep_hwr_prediction_pane_g2

0xee9f,	// (0x0002448d) fep_hwr_prediction_pane_g3

0xeea7,	// (0x00024495) fep_hwr_prediction_pane_g4

0x0003,

0xfc8c,	// (0x0002527a) fep_hwr_prediction_pane_g

0x50d4,	// (0x0001a6c2) fep_vkb_prediction_pane_g1

0x50de,	// (0x0001a6cc) fep_vkb_prediction_pane_g2

0x50e6,	// (0x0001a6d4) fep_vkb_prediction_pane_g3

0x50ee,	// (0x0001a6dc) fep_vkb_prediction_pane_g4

0x0003,

0xfc95,	// (0x00025283) fep_vkb_prediction_pane_g

0x8c45,	// (0x0001e233) slider_set_pane_g3

0x8c59,	// (0x0001e247) slider_set_pane_g4

0x8c71,	// (0x0001e25f) slider_set_pane_g5

0x8c45,	// (0x0001e233) slider_set_pane_g6

0x8c87,	// (0x0001e275) slider_set_pane_g7

0x2783,	// (0x00017d71) slider_form_pane_g3

0x278c,	// (0x00017d7a) slider_form_pane_g4

0x2794,	// (0x00017d82) slider_form_pane_g5

0x2783,	// (0x00017d71) slider_form_pane_g6

0xb212,	// (0x00020800) slider_form_pane_g7

0x2f13,	// (0x00018501) slider_set_pane_vc_g3

0x2f1c,	// (0x0001850a) slider_set_pane_vc_g4

0x2f25,	// (0x00018513) slider_set_pane_vc_g5

0x2f13,	// (0x00018501) slider_set_pane_vc_g6

0x2f2e,	// (0x0001851c) slider_set_pane_vc_g7

0x33dc,	// (0x000189ca) slider_form_pane_vc_g1

0x33e5,	// (0x000189d3) slider_form_pane_vc_g2

0x33ee,	// (0x000189dc) slider_form_pane_vc_g3

0x33dc,	// (0x000189ca) slider_form_pane_vc_g4

0x33f7,	// (0x000189e5) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x00025045) slider_form_pane_vc_g

0xe245,	// (0x00023833) main_idle_act3_pane

0x50f6,	// (0x0001a6e4) ai3_links_pane

0xbd72,	// (0x00021360) popup_ai3_data_window_ParamLimits

0xbd72,	// (0x00021360) popup_ai3_data_window

0xc293,	// (0x00021881) grid_ai3_links_pane

0xbd8a,	// (0x00021378) cell_ai3_links_pane_ParamLimits

0xbd8a,	// (0x00021378) cell_ai3_links_pane

0x512f,	// (0x0001a71d) bg_popup_sub_pane_cp11

0x513c,	// (0x0001a72a) cell_ai3_links_pane_g1

0xc293,	// (0x00021881) bg_popup_sub_pane_cp12

0x5161,	// (0x0001a74f) heading_ai3_data_pane

0x5169,	// (0x0001a757) list_ai3_gene_pane

0x5175,	// (0x0001a763) popup_ai3_data_window_g1

0x517d,	// (0x0001a76b) heading_ai3_data_pane_g1

0x5185,	// (0x0001a773) heading_ai3_data_pane_t1

0xbda4,	// (0x00021392) list_double_ai3_gene_pane_ParamLimits

0xbda4,	// (0x00021392) list_double_ai3_gene_pane

0x51a0,	// (0x0001a78e) list_single_ai3_gene_pane_ParamLimits

0x51a0,	// (0x0001a78e) list_single_ai3_gene_pane

0x3c9b,	// (0x00019289) list_highlight_pane_cp7_ParamLimits

0x3c9b,	// (0x00019289) list_highlight_pane_cp7

0x51ad,	// (0x0001a79b) list_single_a13_gene_pane_t1_ParamLimits

0x51ad,	// (0x0001a79b) list_single_a13_gene_pane_t1

0x51c4,	// (0x0001a7b2) list_single_ai3_gene_pane_g1

0x51cd,	// (0x0001a7bb) list_single_ai3_gene_pane_g2

0x0001,

0xfc9e,	// (0x0002528c) list_single_ai3_gene_pane_g

0x51d5,	// (0x0001a7c3) list_double_ai3_gene_pane_g1_ParamLimits

0x51d5,	// (0x0001a7c3) list_double_ai3_gene_pane_g1

0xbdb1,	// (0x0002139f) list_double_ai3_gene_pane_t1_ParamLimits

0xbdb1,	// (0x0002139f) list_double_ai3_gene_pane_t1

0x51fd,	// (0x0001a7eb) list_double_ai3_gene_pane_t2_ParamLimits

0x51fd,	// (0x0001a7eb) list_double_ai3_gene_pane_t2

0x5212,	// (0x0001a800) list_double_ai3_gene_pane_t3_ParamLimits

0x5212,	// (0x0001a800) list_double_ai3_gene_pane_t3

0x0002,

0xfca3,	// (0x00025291) list_double_ai3_gene_pane_t_ParamLimits

0xfca3,	// (0x00025291) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4fd1,	// (0x0001a5bf) aid_size_min_col_2

0xbc18,	// (0x00021206) aid_size_min_msg_ParamLimits

0xbc18,	// (0x00021206) aid_size_min_msg

0xb7fb,	// (0x00020de9) fep_vkb_top_text_pane_g2_ParamLimits

0xb7fb,	// (0x00020de9) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x000250f8) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x000250f8) fep_vkb_top_text_pane_g

0xe245,	// (0x00023833) main_hc_apps_shell_pane

0x522f,	// (0x0001a81d) grid_hc_apps_pane_ParamLimits

0x522f,	// (0x0001a81d) grid_hc_apps_pane

0x5241,	// (0x0001a82f) list_hc_apps_pane

0x5249,	// (0x0001a837) scroll_pane_cp37_ParamLimits

0x5249,	// (0x0001a837) scroll_pane_cp37

0xbdcd,	// (0x000213bb) cell_hc_apps_pane_ParamLimits

0xbdcd,	// (0x000213bb) cell_hc_apps_pane

0xbe8b,	// (0x00021479) cell_hc_apps_pane_g1_ParamLimits

0xbe8b,	// (0x00021479) cell_hc_apps_pane_g1

0x5333,	// (0x0001a921) cell_hc_apps_pane_g2_ParamLimits

0x5333,	// (0x0001a921) cell_hc_apps_pane_g2

0x534f,	// (0x0001a93d) cell_hc_apps_pane_g3_ParamLimits

0x534f,	// (0x0001a93d) cell_hc_apps_pane_g3

0x0002,

0xfcaa,	// (0x00025298) cell_hc_apps_pane_g_ParamLimits

0xfcaa,	// (0x00025298) cell_hc_apps_pane_g

0xbeb7,	// (0x000214a5) cell_hc_apps_pane_t1_ParamLimits

0xbeb7,	// (0x000214a5) cell_hc_apps_pane_t1

0xc447,	// (0x00021a35) grid_highlight_pane_cp10_ParamLimits

0xc447,	// (0x00021a35) grid_highlight_pane_cp10

0xbef5,	// (0x000214e3) list_single_hc_apps_pane_ParamLimits

0xbef5,	// (0x000214e3) list_single_hc_apps_pane

0xbf25,	// (0x00021513) list_single_hc_apps_pane_g1

0xbf3e,	// (0x0002152c) list_single_hc_apps_pane_g2

0x0001,

0xfcb1,	// (0x0002529f) list_single_hc_apps_pane_g

0xbf57,	// (0x00021545) list_single_hc_apps_pane_g2_copy1

0xbf73,	// (0x00021561) list_single_hc_apps_pane_t1

0xc303,	// (0x000218f1) bg_set_opt_pane_cp_ParamLimits

0x8144,	// (0x0001d732) setting_slider_pane_t1_ParamLimits

0x815d,	// (0x0001d74b) setting_slider_pane_t2_ParamLimits

0x8177,	// (0x0001d765) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00024b27) setting_slider_pane_t_ParamLimits

0x818f,	// (0x0001d77d) slider_set_pane_ParamLimits

0xe751,	// (0x00023d3f) control_pane_g5_ParamLimits

0xe751,	// (0x00023d3f) control_pane_g5

0xb094,	// (0x00020682) slider_set_pane_g1_ParamLimits

0xea5e,	// (0x0002404c) slider_set_pane_g2_ParamLimits

0x8c45,	// (0x0001e233) slider_set_pane_g3_ParamLimits

0x8c59,	// (0x0001e247) slider_set_pane_g4_ParamLimits

0x8c71,	// (0x0001e25f) slider_set_pane_g5_ParamLimits

0x8c45,	// (0x0001e233) slider_set_pane_g6_ParamLimits

0x8c87,	// (0x0001e275) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x00024f0d) slider_set_pane_g_ParamLimits

0xcf00,	// (0x000224ee) navi_icon_text_pane_ParamLimits

0xa60b,	// (0x0001fbf9) aid_fill_nsta_2_ParamLimits

0xa642,	// (0x0001fc30) aid_touch_tab_arrow_left_ParamLimits

0xa658,	// (0x0001fc46) aid_touch_tab_arrow_right_ParamLimits

0xa6f3,	// (0x0001fce1) clock_nsta_pane_ParamLimits

0x20c7,	// (0x000176b5) navi_icon_pane_g1_ParamLimits

0x20d3,	// (0x000176c1) navi_text_pane_t1_ParamLimits

0x382e,	// (0x00018e1c) navi_icon_text_pane_g1_ParamLimits

0x383a,	// (0x00018e28) navi_icon_text_pane_t1_ParamLimits

0xbf25,	// (0x00021513) list_single_hc_apps_pane_g1_ParamLimits

0xbf3e,	// (0x0002152c) list_single_hc_apps_pane_g2_ParamLimits

0xfcb1,	// (0x0002529f) list_single_hc_apps_pane_g_ParamLimits

0xbf57,	// (0x00021545) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf73,	// (0x00021561) list_single_hc_apps_pane_t1_ParamLimits

0x806c,	// (0x0001d65a) popup_toolbar2_fixed_window_ParamLimits

0x806c,	// (0x0001d65a) popup_toolbar2_fixed_window

0x8a65,	// (0x0001e053) popup_toolbar2_float_window

0xc293,	// (0x00021881) bg_popup_sub_pane_cp27

0x5490,	// (0x0001aa7e) grid_toolbar2_float_pane

0xc293,	// (0x00021881) bg_popup_sub_pane_cp26

0x5490,	// (0x0001aa7e) grid_toolbar2_fixed_pane

0xbfa1,	// (0x0002158f) cell_toolbar2_fixed_pane_ParamLimits

0xbfa1,	// (0x0002158f) cell_toolbar2_fixed_pane

0xbfbb,	// (0x000215a9) cell_toolbar2_fixed_pane_g1

0x10b2,	// (0x000166a0) toolbar2_fixed_button_pane

0x1160,	// (0x0001674e) toolbar2_fixed_button_pane_g1

0x1170,	// (0x0001675e) toolbar2_fixed_button_pane_g2

0x1168,	// (0x00016756) toolbar2_fixed_button_pane_g3

0x1180,	// (0x0001676e) toolbar2_fixed_button_pane_g4

0x1178,	// (0x00016766) toolbar2_fixed_button_pane_g5

0x1188,	// (0x00016776) toolbar2_fixed_button_pane_g6

0x1190,	// (0x0001677e) toolbar2_fixed_button_pane_g7

0x11a0,	// (0x0001678e) toolbar2_fixed_button_pane_g8

0x1198,	// (0x00016786) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x00024e0f) toolbar2_fixed_button_pane_g

0x54b1,	// (0x0001aa9f) cell_toolbar2_float_pane_ParamLimits

0x54b1,	// (0x0001aa9f) cell_toolbar2_float_pane

0x54c2,	// (0x0001aab0) cell_toolbar2_float_pane_g1

0x10b2,	// (0x000166a0) toolbar2_fixed_button_pane_cp

0xb6e3,	// (0x00020cd1) fep_vkb_accented_list_pane_ParamLimits

0xb6e3,	// (0x00020cd1) fep_vkb_accented_list_pane

0xed30,	// (0x0002431e) bg_popup_fep_shadow_pane_g9

0xd04f,	// (0x0002263d) bg_popup_fep_shadow_pane_cp3

0xc8c4,	// (0x00021eb2) list_accented_list_pane

0x54cb,	// (0x0001aab9) list_single_accented_list_pane_ParamLimits

0x54cb,	// (0x0001aab9) list_single_accented_list_pane

0xd04f,	// (0x0002263d) list_highlight_pane_cp10

0x54dc,	// (0x0001aaca) list_single_accented_list_pane_t1

0x898f,	// (0x0001df7d) popup_slider_window_ParamLimits

0x898f,	// (0x0001df7d) popup_slider_window

0x4fc8,	// (0x0001a5b6) aid_indentation_list_msg

0xc0ac,	// (0x0002169a) bg_popup_window_pane_cp19

0x5602,	// (0x0001abf0) popup_slider_window_g1

0x561e,	// (0x0001ac0c) popup_slider_window_g2

0x563a,	// (0x0001ac28) popup_slider_window_g3

0x0005,

0xfcb6,	// (0x000252a4) popup_slider_window_g

0x56a0,	// (0x0001ac8e) popup_slider_window_t1

0x5714,	// (0x0001ad02) small_volume_slider_vertical_pane

0x3cd6,	// (0x000192c4) small_volume_slider_vertical_pane_g1

0x3cd6,	// (0x000192c4) small_volume_slider_vertical_pane_g2

0x5730,	// (0x0001ad1e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc8,	// (0x000252b6) small_volume_slider_vertical_pane_g

0x7fba,	// (0x0001d5a8) area_side_right_pane_ParamLimits

0x7fba,	// (0x0001d5a8) area_side_right_pane

0x8db1,	// (0x0001e39f) aid_size_side_button_ParamLimits

0x8db1,	// (0x0001e39f) aid_size_side_button

0x8dca,	// (0x0001e3b8) grid_sctrl_middle_pane_ParamLimits

0x8dca,	// (0x0001e3b8) grid_sctrl_middle_pane

0xeeb8,	// (0x000244a6) sctrl_sk_bottom_pane

0xeec9,	// (0x000244b7) sctrl_sk_top_pane

0xeedb,	// (0x000244c9) aid_touch_sctrl_top

0xeee8,	// (0x000244d6) bg_sctrl_sk_pane_ParamLimits

0xeee8,	// (0x000244d6) bg_sctrl_sk_pane

0xeef6,	// (0x000244e4) sctrl_sk_top_pane_g1

0xef03,	// (0x000244f1) sctrl_sk_top_pane_t1

0xeedb,	// (0x000244c9) aid_touch_sctrl_bottom

0xeee8,	// (0x000244d6) bg_sctrl_sk_pane_cp_ParamLimits

0xeee8,	// (0x000244d6) bg_sctrl_sk_pane_cp

0xef1e,	// (0x0002450c) sctrl_sk_bottom_pane_g1

0xef03,	// (0x000244f1) sctrl_sk_bottom_pane_t1

0x8de4,	// (0x0001e3d2) cell_sctrl_middle_pane_ParamLimits

0x8de4,	// (0x0001e3d2) cell_sctrl_middle_pane

0x8df5,	// (0x0001e3e3) aid_touch_sctrl_middle_ParamLimits

0x8df5,	// (0x0001e3e3) aid_touch_sctrl_middle

0x8e02,	// (0x0001e3f0) bg_sctrl_middle_pane_ParamLimits

0x8e02,	// (0x0001e3f0) bg_sctrl_middle_pane

0xef27,	// (0x00024515) cell_sctrl_middle_pane_g1_ParamLimits

0xef27,	// (0x00024515) cell_sctrl_middle_pane_g1

0x8e10,	// (0x0001e3fe) cell_sctrl_middle_pane_g2_ParamLimits

0x8e10,	// (0x0001e3fe) cell_sctrl_middle_pane_g2

0x0001,

0xfcd4,	// (0x000252c2) cell_sctrl_middle_pane_g_ParamLimits

0xfcd4,	// (0x000252c2) cell_sctrl_middle_pane_g

0x1160,	// (0x0001674e) bg_sctrl_middle_pane_g1

0x1168,	// (0x00016756) bg_sctrl_middle_pane_g2

0x1170,	// (0x0001675e) bg_sctrl_middle_pane_g3

0x1178,	// (0x00016766) bg_sctrl_middle_pane_g4

0x1180,	// (0x0001676e) bg_sctrl_middle_pane_g5

0x1188,	// (0x00016776) bg_sctrl_middle_pane_g6

0x1190,	// (0x0001677e) bg_sctrl_middle_pane_g7

0x1198,	// (0x00016786) bg_sctrl_middle_pane_g8

0x0007,

0xfcd9,	// (0x000252c7) bg_sctrl_middle_pane_g

0x11a0,	// (0x0001678e) bg_sctrl_middle_pane_g8_copy1

0x1160,	// (0x0001674e) bg_sctrl_sk_pane_g1

0x1170,	// (0x0001675e) bg_sctrl_sk_pane_g2

0x1168,	// (0x00016756) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x00024e0f) bg_sctrl_sk_pane_g

0xc615,	// (0x00021c03) aid_size_touch_scroll_bar

0x1180,	// (0x0001676e) bg_sctrl_sk_pane_g4

0x1178,	// (0x00016766) bg_sctrl_sk_pane_g5

0x1188,	// (0x00016776) bg_sctrl_sk_pane_g6

0x1190,	// (0x0001677e) bg_sctrl_sk_pane_g7

0x11a0,	// (0x0001678e) bg_sctrl_sk_pane_g8

0x1198,	// (0x00016786) bg_sctrl_sk_pane_g9

0xe79c,	// (0x00023d8a) popup_fep_china_hwr2_fs_candidate_window

0x8455,	// (0x0001da43) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8455,	// (0x0001da43) popup_fep_china_hwr2_fs_control_window

0xed50,	// (0x0002433e) sctrl_sk_top_pane_g2

0x0001,

0xfccf,	// (0x000252bd) sctrl_sk_top_pane_g

0xc164,	// (0x00021752) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc164,	// (0x00021752) aid_fep_china_hwr2_fs_cell

0xc178,	// (0x00021766) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc178,	// (0x00021766) bg_popup_fep_shadow_pane_cp4

0xc18f,	// (0x0002177d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc18f,	// (0x0002177d) bg_popup_fep_shadow_pane_cp5

0xc1a1,	// (0x0002178f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc1a1,	// (0x0002178f) popup_fep_china_hwr2_fs_control_bar_grid

0xd218,	// (0x00022806) popup_fep_china_hwr2_fs_control_funtion_grid

0x578c,	// (0x0001ad7a) aid_fep_china_hwr2_fs_candi_cell

0xc293,	// (0x00021881) bg_popup_fep_shadow_pane_cp6

0x5796,	// (0x0001ad84) popup_fep_china_hwr2_fs_candidate_grid

0xc1b5,	// (0x000217a3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc1b5,	// (0x000217a3) cell_fep_china_hwr2_fs_funtion_grid

0x3cd6,	// (0x000192c4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x57b8,	// (0x0001ada6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x57b8,	// (0x0001ada6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x57c6,	// (0x0001adb4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x57c6,	// (0x0001adb4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcea,	// (0x000252d8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcea,	// (0x000252d8) cell_fep_china_hwr2_fs_funtion_grid_g

0xc1cd,	// (0x000217bb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc1cd,	// (0x000217bb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc1e2,	// (0x000217d0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc1e2,	// (0x000217d0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcef,	// (0x000252dd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcef,	// (0x000252dd) cell_fep_china_hwr2_fs_funtion_grid_t

0x580d,	// (0x0001adfb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5815,	// (0x0001ae03) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x581d,	// (0x0001ae0b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf4,	// (0x000252e2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5825,	// (0x0001ae13) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5825,	// (0x0001ae13) cell_fep_china_hwr2_fs_candidate_grid

0x583e,	// (0x0001ae2c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5846,	// (0x0001ae34) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3cd6,	// (0x000192c4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3cd6,	// (0x000192c4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x000250fd) cell_fep_china_hwr2_fs_candidate_grid_g

0x584e,	// (0x0001ae3c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0d2b,	// (0x00016319) clock_nsta_pane_cp_24_ParamLimits

0x0d2b,	// (0x00016319) clock_nsta_pane_cp_24

0x0da9,	// (0x00016397) indicator_nsta_pane_cp_24_ParamLimits

0x0da9,	// (0x00016397) indicator_nsta_pane_cp_24

0x1f43,	// (0x00017531) heading_pane_g1

0x0001,

0xf886,	// (0x00024e74) heading_pane_g

0x2a78,	// (0x00018066) grid_sct_catagory_button_pane

0x2aa8,	// (0x00018096) scroll_pane_cp5_ParamLimits

0x387c,	// (0x00018e6a) button_value_adjust_pane_cp5_ParamLimits

0x387c,	// (0x00018e6a) button_value_adjust_pane_cp5

0x3976,	// (0x00018f64) form2_midp_time_pane_ParamLimits

0x585c,	// (0x0001ae4a) cell_sct_catagory_button_pane_ParamLimits

0x585c,	// (0x0001ae4a) cell_sct_catagory_button_pane

0x3c9b,	// (0x00019289) bg_button_pane_cp01_ParamLimits

0x3c9b,	// (0x00019289) bg_button_pane_cp01

0x3cd6,	// (0x000192c4) cell_sct_catagory_button_pane_g1

0x8a08,	// (0x0001dff6) popup_tb_extension_window

0xc1fe,	// (0x000217ec) aid_size_cell_ext_ParamLimits

0xc1fe,	// (0x000217ec) aid_size_cell_ext

0xc5c7,	// (0x00021bb5) bg_tb_trans_pane_cp1_ParamLimits

0xc5c7,	// (0x00021bb5) bg_tb_trans_pane_cp1

0xc224,	// (0x00021812) grid_tb_ext_pane_ParamLimits

0xc224,	// (0x00021812) grid_tb_ext_pane

0xd220,	// (0x0002280e) cell_tb_ext_pane_ParamLimits

0xd220,	// (0x0002280e) cell_tb_ext_pane

0xd248,	// (0x00022836) cell_tb_ext_pane_g1_ParamLimits

0xd248,	// (0x00022836) cell_tb_ext_pane_g1

0x58f2,	// (0x0001aee0) cell_tb_ext_pane_t1

0xc447,	// (0x00021a35) list_highlight_pane_cp11_ParamLimits

0xc447,	// (0x00021a35) list_highlight_pane_cp11

0x8081,	// (0x0001d66f) popup_uni_indicator_window_ParamLimits

0x8081,	// (0x0001d66f) popup_uni_indicator_window

0xc73d,	// (0x00021d2b) bg_popup_sub_pane_cp14

0xd265,	// (0x00022853) list_uniindi_pane

0xd271,	// (0x0002285f) uniindi_top_pane

0xc447,	// (0x00021a35) bg_uniindi_top_pane

0xd290,	// (0x0002287e) uniindi_top_pane_g1

0xd2a6,	// (0x00022894) uniindi_top_pane_g2

0x0003,

0xfcfb,	// (0x000252e9) uniindi_top_pane_g

0xd2c3,	// (0x000228b1) uniindi_top_pane_t1

0x59a3,	// (0x0001af91) list_single_uniindi_pane_ParamLimits

0x59a3,	// (0x0001af91) list_single_uniindi_pane

0x3cd6,	// (0x000192c4) bg_uniindi_top_pane_g1

0x59b6,	// (0x0001afa4) list_single_uniindi_pane_g1

0x59c9,	// (0x0001afb7) list_single_uniindi_pane_t1

0xe245,	// (0x00023833) control_bg_pane

0x59ee,	// (0x0001afdc) bg_sctrl_sk_pane_cp1

0x59f7,	// (0x0001afe5) bg_sctrl_sk_pane_cp2

0x5a00,	// (0x0001afee) control_bg_pane_g1

0x5a09,	// (0x0001aff7) control_bg_pane_g2

0x0001,

0xfd04,	// (0x000252f2) control_bg_pane_g

0x36c2,	// (0x00018cb0) cell_indicator_nsta_pane_g1_ParamLimits

0xb491,	// (0x00020a7f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x00025061) cell_indicator_nsta_pane_g_ParamLimits

0x39fe,	// (0x00018fec) form2_midp_time_pane_t1_ParamLimits

0xe78e,	// (0x00023d7c) main_idle_act4_pane_ParamLimits

0xe78e,	// (0x00023d7c) main_idle_act4_pane

0x8a08,	// (0x0001dff6) popup_tb_extension_window_ParamLimits

0xc249,	// (0x00021837) tb_ext_find_pane_ParamLimits

0xc249,	// (0x00021837) tb_ext_find_pane

0x5a12,	// (0x0001b000) ai_gene_pane_1_cp1

0xd0d0,	// (0x000226be) ai_gene_pane_2_cp1

0xd2ed,	// (0x000228db) list_single_idle_plugin_calendar_pane

0x5a23,	// (0x0001b011) list_single_idle_plugin_notification_pane

0x5a2c,	// (0x0001b01a) list_single_idle_plugin_player_pane

0xd2f6,	// (0x000228e4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd2f6,	// (0x000228e4) list_single_idle_plugin_shortcut_pane

0xd31e,	// (0x0002290c) main_idle_act4_pane_t1

0xd335,	// (0x00022923) main_idle_act4_pane_t2

0x0001,

0xfd09,	// (0x000252f7) main_idle_act4_pane_t

0xd34c,	// (0x0002293a) middle_sk_idle_act4_pane_ParamLimits

0xd34c,	// (0x0002293a) middle_sk_idle_act4_pane

0xd368,	// (0x00022956) popup_clock_digital_analogue_window_cp2

0xd394,	// (0x00022982) shortcut_wheel_idle_act4_pane_ParamLimits

0xd394,	// (0x00022982) shortcut_wheel_idle_act4_pane

0x3cd6,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g1

0x3cd6,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g2

0x3cd6,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g3

0x3cd6,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g4

0x3cd6,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g5

0x5abf,	// (0x0001b0ad) shortcut_wheel_idle_act4_pane_g6

0x5ac7,	// (0x0001b0b5) shortcut_wheel_idle_act4_pane_g7

0x5acf,	// (0x0001b0bd) shortcut_wheel_idle_act4_pane_g8

0x5ad7,	// (0x0001b0c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0e,	// (0x000252fc) shortcut_wheel_idle_act4_pane_g

0xc263,	// (0x00021851) middle_sk_idle_act4_pane_g1_ParamLimits

0xc263,	// (0x00021851) middle_sk_idle_act4_pane_g1

0xd411,	// (0x000229ff) middle_sk_idle_act4_pane_g2_ParamLimits

0xd411,	// (0x000229ff) middle_sk_idle_act4_pane_g2

0x0001,

0xfd31,	// (0x0002531f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd31,	// (0x0002531f) middle_sk_idle_act4_pane_g

0xd429,	// (0x00022a17) middle_sk_idle_act4_pane_t1_ParamLimits

0xd429,	// (0x00022a17) middle_sk_idle_act4_pane_t1

0xd458,	// (0x00022a46) grid_ai_shortcut_pane_ParamLimits

0xd458,	// (0x00022a46) grid_ai_shortcut_pane

0xd475,	// (0x00022a63) list_highlight_pane_cp16_ParamLimits

0xd475,	// (0x00022a63) list_highlight_pane_cp16

0xd482,	// (0x00022a70) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd482,	// (0x00022a70) list_single_idle_plugin_shortcut_pane_g1

0xd48e,	// (0x00022a7c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd48e,	// (0x00022a7c) list_single_idle_plugin_shortcut_pane_g2

0xd4aa,	// (0x00022a98) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd4aa,	// (0x00022a98) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd36,	// (0x00025324) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd36,	// (0x00025324) list_single_idle_plugin_shortcut_pane_g

0xd4bf,	// (0x00022aad) cell_ai_shortcut_pane_ParamLimits

0xd4bf,	// (0x00022aad) cell_ai_shortcut_pane

0xd4d5,	// (0x00022ac3) cell_ai_shortcut_pane_g1_ParamLimits

0xd4d5,	// (0x00022ac3) cell_ai_shortcut_pane_g1

0x5a12,	// (0x0001b000) ai_gene_pane_1_cp2

0x5c07,	// (0x0001b1f5) ai_gene_pane_2_cp2

0x5c0f,	// (0x0001b1fd) list_highlight_pane_cp15

0xd4f7,	// (0x00022ae5) list_single_idle_plugin_calendar_pane_g1

0x5c0f,	// (0x0001b1fd) list_highlight_pane_cp17

0x5c20,	// (0x0001b20e) list_single_idle_plugin_calendar_pane_g1_copy1

0x5c28,	// (0x0001b216) list_single_idle_plugin_player_pane_g1

0x2cd1,	// (0x000182bf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3d,	// (0x0002532b) list_single_idle_plugin_player_pane_g

0x5c30,	// (0x0001b21e) list_single_idle_plugin_player_pane_t1

0x5c3e,	// (0x0001b22c) list_single_idle_plugin_player_pane_t2

0x5c4c,	// (0x0001b23a) list_single_idle_plugin_player_pane_t3

0x5c5a,	// (0x0001b248) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd42,	// (0x00025330) list_single_idle_plugin_player_pane_t

0x5c68,	// (0x0001b256) wait_bar_pane_cp15

0x5c70,	// (0x0001b25e) grid_ai_notification_pane

0x2cd1,	// (0x000182bf) list_single_idle_plugin_notification_pane_g1

0xd4ff,	// (0x00022aed) cell_ai_notification_pane_ParamLimits

0xd4ff,	// (0x00022aed) cell_ai_notification_pane

0x5c86,	// (0x0001b274) cell_ai_notification_pane_g1

0x5c8e,	// (0x0001b27c) cell_ai_notification_pane_t1

0xd50c,	// (0x00022afa) tb_ext_find_button_pane

0xd514,	// (0x00022b02) tb_ext_find_pane_g1

0xd51c,	// (0x00022b0a) tb_ext_find_pane_t1

0xcbfd,	// (0x000221eb) tb_ext_find_button_pane_g1

0xd52a,	// (0x00022b18) tb_ext_find_button_pane_g2

0x0001,

0xfd4b,	// (0x00025339) tb_ext_find_button_pane_g

0xd31e,	// (0x0002290c) main_idle_act4_pane_t1_ParamLimits

0xd335,	// (0x00022923) main_idle_act4_pane_t2_ParamLimits

0xfd09,	// (0x000252f7) main_idle_act4_pane_t_ParamLimits

0xd368,	// (0x00022956) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd380,	// (0x0002296e) sat_plugin_idle_act4_pane_ParamLimits

0xd380,	// (0x0002296e) sat_plugin_idle_act4_pane

0xd533,	// (0x00022b21) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd533,	// (0x00022b21) sat_plugin_idle_act4_pane_t1

0xd54b,	// (0x00022b39) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd54b,	// (0x00022b39) sat_plugin_idle_act4_pane_t2

0xd563,	// (0x00022b51) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd563,	// (0x00022b51) sat_plugin_idle_act4_pane_t3

0xd57b,	// (0x00022b69) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd57b,	// (0x00022b69) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd50,	// (0x0002533e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd50,	// (0x0002533e) sat_plugin_idle_act4_pane_t

0x7ffc,	// (0x0001d5ea) popup_battery_window_ParamLimits

0x7ffc,	// (0x0001d5ea) popup_battery_window

0xc447,	// (0x00021a35) bg_popup_sub_pane_cp25_ParamLimits

0xc447,	// (0x00021a35) bg_popup_sub_pane_cp25

0x5d0f,	// (0x0001b2fd) popup_battery_window_g1_ParamLimits

0x5d0f,	// (0x0001b2fd) popup_battery_window_g1

0x5d1b,	// (0x0001b309) popup_battery_window_t1_ParamLimits

0x5d1b,	// (0x0001b309) popup_battery_window_t1

0x5d2d,	// (0x0001b31b) popup_battery_window_t2_ParamLimits

0x5d2d,	// (0x0001b31b) popup_battery_window_t2

0x0001,

0xfd59,	// (0x00025347) popup_battery_window_t_ParamLimits

0xfd59,	// (0x00025347) popup_battery_window_t

0xa445,	// (0x0001fa33) midp_canvas_pane_ParamLimits

0xa4b7,	// (0x0001faa5) midp_keypad_pane_ParamLimits

0xa4b7,	// (0x0001faa5) midp_keypad_pane

0xc8ed,	// (0x00021edb) main_midp_pane_ParamLimits

0xb49e,	// (0x00020a8c) signal_pane_g2_cp_ParamLimits

0xd593,	// (0x00022b81) aid_size_cell_midp_keypad_ParamLimits

0xd593,	// (0x00022b81) aid_size_cell_midp_keypad

0xd5b1,	// (0x00022b9f) midp_keyp_game_grid_pane_ParamLimits

0xd5b1,	// (0x00022b9f) midp_keyp_game_grid_pane

0xd5d8,	// (0x00022bc6) midp_keyp_rocker_pane_ParamLimits

0xd5d8,	// (0x00022bc6) midp_keyp_rocker_pane

0xd629,	// (0x00022c17) midp_keyp_sk_left_pane_ParamLimits

0xd629,	// (0x00022c17) midp_keyp_sk_left_pane

0xd67d,	// (0x00022c6b) midp_keyp_sk_right_pane_ParamLimits

0xd67d,	// (0x00022c6b) midp_keyp_sk_right_pane

0xc293,	// (0x00021881) bg_button_pane_cp03

0xd6d1,	// (0x00022cbf) midp_keyp_sk_left_pane_g1

0xc293,	// (0x00021881) bg_button_pane_cp04

0xd6d1,	// (0x00022cbf) midp_keyp_sk_right_pane_g1

0x3cd6,	// (0x000192c4) midp_keyp_rocker_pane_g1

0xd6da,	// (0x00022cc8) keyp_game_cell_pane_ParamLimits

0xd6da,	// (0x00022cc8) keyp_game_cell_pane

0xc293,	// (0x00021881) bg_button_pane_cp02

0xd6fe,	// (0x00022cec) keyp_game_cell_pane_g1

0x801c,	// (0x0001d60a) popup_fep_vkb2_window_ParamLimits

0x801c,	// (0x0001d60a) popup_fep_vkb2_window

0x8e1c,	// (0x0001e40a) aid_size_cell_vkb2_ParamLimits

0x8e1c,	// (0x0001e40a) aid_size_cell_vkb2

0x8e50,	// (0x0001e43e) popup_fep_vkb2_window_g1_ParamLimits

0x8e50,	// (0x0001e43e) popup_fep_vkb2_window_g1

0x8ea0,	// (0x0001e48e) vkb2_area_bottom_pane_ParamLimits

0x8ea0,	// (0x0001e48e) vkb2_area_bottom_pane

0x8ef4,	// (0x0001e4e2) vkb2_area_keypad_pane_ParamLimits

0x8ef4,	// (0x0001e4e2) vkb2_area_keypad_pane

0x8f3c,	// (0x0001e52a) vkb2_area_top_pane_ParamLimits

0x8f3c,	// (0x0001e52a) vkb2_area_top_pane

0x8fc8,	// (0x0001e5b6) vkb2_top_entry_pane_ParamLimits

0x8fc8,	// (0x0001e5b6) vkb2_top_entry_pane

0x8ff5,	// (0x0001e5e3) vkb2_top_grid_left_pane_ParamLimits

0x8ff5,	// (0x0001e5e3) vkb2_top_grid_left_pane

0x9016,	// (0x0001e604) vkb2_top_grid_right_pane_ParamLimits

0x9016,	// (0x0001e604) vkb2_top_grid_right_pane

0xef5d,	// (0x0002454b) vkb2_cell_keypad_pane_ParamLimits

0xef5d,	// (0x0002454b) vkb2_cell_keypad_pane

0x905e,	// (0x0001e64c) vkb2_area_bottom_grid_pane_ParamLimits

0x905e,	// (0x0001e64c) vkb2_area_bottom_grid_pane

0x9088,	// (0x0001e676) vkb2_area_bottom_pane_g1_ParamLimits

0x9088,	// (0x0001e676) vkb2_area_bottom_pane_g1

0x90ae,	// (0x0001e69c) vkb2_area_bottom_pane_g2_ParamLimits

0x90ae,	// (0x0001e69c) vkb2_area_bottom_pane_g2

0x90df,	// (0x0001e6cd) vkb2_area_bottom_pane_g3_ParamLimits

0x90df,	// (0x0001e6cd) vkb2_area_bottom_pane_g3

0x0002,

0xfd5e,	// (0x0002534c) vkb2_area_bottom_pane_g_ParamLimits

0xfd5e,	// (0x0002534c) vkb2_area_bottom_pane_g

0xf00a,	// (0x000245f8) vkb2_top_cell_left_pane_ParamLimits

0xf00a,	// (0x000245f8) vkb2_top_cell_left_pane

0xd707,	// (0x00022cf5) vkb2_top_entry_pane_g1_ParamLimits

0xd707,	// (0x00022cf5) vkb2_top_entry_pane_g1

0xd715,	// (0x00022d03) vkb2_top_entry_pane_t1_ParamLimits

0xd715,	// (0x00022d03) vkb2_top_entry_pane_t1

0x5ede,	// (0x0001b4cc) vkb2_top_entry_pane_t2_ParamLimits

0x5ede,	// (0x0001b4cc) vkb2_top_entry_pane_t2

0x5f10,	// (0x0001b4fe) vkb2_top_entry_pane_t3_ParamLimits

0x5f10,	// (0x0001b4fe) vkb2_top_entry_pane_t3

0x0002,

0xfd65,	// (0x00025353) vkb2_top_entry_pane_t_ParamLimits

0xfd65,	// (0x00025353) vkb2_top_entry_pane_t

0x9149,	// (0x0001e737) vkb2_top_grid_right_pane_g1_ParamLimits

0x9149,	// (0x0001e737) vkb2_top_grid_right_pane_g1

0xf057,	// (0x00024645) vkb2_top_grid_right_pane_g2_ParamLimits

0xf057,	// (0x00024645) vkb2_top_grid_right_pane_g2

0xf06f,	// (0x0002465d) vkb2_top_grid_right_pane_g3_ParamLimits

0xf06f,	// (0x0002465d) vkb2_top_grid_right_pane_g3

0x915f,	// (0x0001e74d) vkb2_top_grid_right_pane_g4_ParamLimits

0x915f,	// (0x0001e74d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6c,	// (0x0002535a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6c,	// (0x0002535a) vkb2_top_grid_right_pane_g

0xf087,	// (0x00024675) vkb2_top_cell_left_pane_g1

0xf09e,	// (0x0002468c) vkb2_cell_keypad_pane_g1_ParamLimits

0xf09e,	// (0x0002468c) vkb2_cell_keypad_pane_g1

0x5f34,	// (0x0001b522) vkb2_cell_keypad_pane_t1_ParamLimits

0x5f34,	// (0x0001b522) vkb2_cell_keypad_pane_t1

0xf0ac,	// (0x0002469a) vkb2_cell_bottom_grid_pane_ParamLimits

0xf0ac,	// (0x0002469a) vkb2_cell_bottom_grid_pane

0xf0e5,	// (0x000246d3) vkb2_cell_bottom_grid_pane_g1

0xd3b5,	// (0x000229a3) aid_call2_pane_cp02

0xd3bd,	// (0x000229ab) aid_call_pane_cp02

0xd3c5,	// (0x000229b3) clock_digital_number_pane_cp10

0xd3cd,	// (0x000229bb) clock_digital_number_pane_cp11

0xd3d5,	// (0x000229c3) clock_digital_number_pane_cp12

0xd3dd,	// (0x000229cb) clock_digital_number_pane_cp13

0xd3e5,	// (0x000229d3) clock_digital_separator_pane_cp10

0xcbfd,	// (0x000221eb) popup_clock_digital_analogue_window_cp2_g1

0xcbfd,	// (0x000221eb) popup_clock_digital_analogue_window_cp2_g2

0xd3ed,	// (0x000229db) popup_clock_digital_analogue_window_cp2_g3

0xcbfd,	// (0x000221eb) popup_clock_digital_analogue_window_cp2_g4

0xd3ed,	// (0x000229db) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd21,	// (0x0002530f) popup_clock_digital_analogue_window_cp2_g

0xd3f5,	// (0x000229e3) popup_clock_digital_analogue_window_cp2_t1

0xd403,	// (0x000229f1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2c,	// (0x0002531a) popup_clock_digital_analogue_window_cp2_t

0x3cd6,	// (0x000192c4) clock_digital_number_pane_cp10_g1

0x3cd6,	// (0x000192c4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000250fd) clock_digital_number_pane_cp10_g

0x3cd6,	// (0x000192c4) clock_digital_separator_pane_cp10_g1

0x3cd6,	// (0x000192c4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000250fd) clock_digital_separator_pane_cp10_g

0xd2b2,	// (0x000228a0) uniindi_top_pane_g3

0x596c,	// (0x0001af5a) uniindi_top_pane_g4

0xefe8,	// (0x000245d6) vkb2_row_keypad_pane_ParamLimits

0xefe8,	// (0x000245d6) vkb2_row_keypad_pane

0xf105,	// (0x000246f3) vkb2_cell_t_keypad_pane_ParamLimits

0xf105,	// (0x000246f3) vkb2_cell_t_keypad_pane

0xf115,	// (0x00024703) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf115,	// (0x00024703) vkb2_cell_t_keypad_pane_cp08

0xf128,	// (0x00024716) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf128,	// (0x00024716) vkb2_cell_t_keypad_pane_cp09

0xf13c,	// (0x0002472a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf13c,	// (0x0002472a) vkb2_cell_t_keypad_pane_cp01

0xf14d,	// (0x0002473b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf14d,	// (0x0002473b) vkb2_cell_t_keypad_pane_cp02

0xf15e,	// (0x0002474c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf15e,	// (0x0002474c) vkb2_cell_t_keypad_pane_cp03

0xf16f,	// (0x0002475d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf16f,	// (0x0002475d) vkb2_cell_t_keypad_pane_cp04

0xf180,	// (0x0002476e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf180,	// (0x0002476e) vkb2_cell_t_keypad_pane_cp05

0xf191,	// (0x0002477f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf191,	// (0x0002477f) vkb2_cell_t_keypad_pane_cp06

0xf1a2,	// (0x00024790) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf1a2,	// (0x00024790) vkb2_cell_t_keypad_pane_cp07

0xf1b3,	// (0x000247a1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf1b3,	// (0x000247a1) vkb2_cell_t_keypad_pane_cp10

0xed50,	// (0x0002433e) vkb2_cell_t_keypad_pane_g1

0x5f4b,	// (0x0001b539) vkb2_cell_t_keypad_pane_t1

0xe245,	// (0x00023833) popup_grid_graphic2_window

0xd74e,	// (0x00022d3c) aid_size_cell_graphic2_ParamLimits

0xd74e,	// (0x00022d3c) aid_size_cell_graphic2

0xd78c,	// (0x00022d7a) bg_popup_window_pane_cp21_ParamLimits

0xd78c,	// (0x00022d7a) bg_popup_window_pane_cp21

0xd79a,	// (0x00022d88) graphic2_pages_pane_ParamLimits

0xd79a,	// (0x00022d88) graphic2_pages_pane

0xd7f0,	// (0x00022dde) grid_graphic2_control_pane_ParamLimits

0xd7f0,	// (0x00022dde) grid_graphic2_control_pane

0xd838,	// (0x00022e26) grid_graphic2_pane_ParamLimits

0xd838,	// (0x00022e26) grid_graphic2_pane

0xd8bf,	// (0x00022ead) cell_graphic2_pane

0xe245,	// (0x00023833) main_comp_mode_pane

0x5169,	// (0x0001a757) list_ai3_gene_pane_ParamLimits

0xc0ac,	// (0x0002169a) bg_popup_window_pane_cp19_ParamLimits

0x55a6,	// (0x0001ab94) bg_touch_area_indi_pane_ParamLimits

0x55a6,	// (0x0001ab94) bg_touch_area_indi_pane

0x55bc,	// (0x0001abaa) bg_touch_area_indi_pane_cp01_ParamLimits

0x55bc,	// (0x0001abaa) bg_touch_area_indi_pane_cp01

0x55d2,	// (0x0001abc0) bg_touch_area_indi_pane_cp02_ParamLimits

0x55d2,	// (0x0001abc0) bg_touch_area_indi_pane_cp02

0x55e8,	// (0x0001abd6) bg_touch_area_indi_pane_cp03_ParamLimits

0x55e8,	// (0x0001abd6) bg_touch_area_indi_pane_cp03

0x5602,	// (0x0001abf0) popup_slider_window_g1_ParamLimits

0x561e,	// (0x0001ac0c) popup_slider_window_g2_ParamLimits

0x563a,	// (0x0001ac28) popup_slider_window_g3_ParamLimits

0xfcb6,	// (0x000252a4) popup_slider_window_g_ParamLimits

0x56a0,	// (0x0001ac8e) popup_slider_window_t1_ParamLimits

0x5714,	// (0x0001ad02) small_volume_slider_vertical_pane_ParamLimits

0xd8bf,	// (0x00022ead) cell_graphic2_pane_ParamLimits

0xd91a,	// (0x00022f08) bg_button_pane_cp10_ParamLimits

0xd91a,	// (0x00022f08) bg_button_pane_cp10

0xd92d,	// (0x00022f1b) bg_button_pane_cp11_ParamLimits

0xd92d,	// (0x00022f1b) bg_button_pane_cp11

0xd940,	// (0x00022f2e) graphic2_pages_pane_g1_ParamLimits

0xd940,	// (0x00022f2e) graphic2_pages_pane_g1

0xd95b,	// (0x00022f49) graphic2_pages_pane_g2_ParamLimits

0xd95b,	// (0x00022f49) graphic2_pages_pane_g2

0x0001,

0xfd7a,	// (0x00025368) graphic2_pages_pane_g_ParamLimits

0xfd7a,	// (0x00025368) graphic2_pages_pane_g

0xd973,	// (0x00022f61) graphic2_pages_pane_t1_ParamLimits

0xd973,	// (0x00022f61) graphic2_pages_pane_t1

0xd98b,	// (0x00022f79) cell_graphic2_control_pane_ParamLimits

0xd98b,	// (0x00022f79) cell_graphic2_control_pane

0xd9bd,	// (0x00022fab) cell_graphic2_pane_g1_ParamLimits

0xd9bd,	// (0x00022fab) cell_graphic2_pane_g1

0xc271,	// (0x0002185f) cell_graphic2_pane_g2_ParamLimits

0xc271,	// (0x0002185f) cell_graphic2_pane_g2

0xd1f3,	// (0x000227e1) cell_graphic2_pane_g3_ParamLimits

0xd1f3,	// (0x000227e1) cell_graphic2_pane_g3

0xc27e,	// (0x0002186c) cell_graphic2_pane_g4_ParamLimits

0xc27e,	// (0x0002186c) cell_graphic2_pane_g4

0xd9ca,	// (0x00022fb8) cell_graphic2_pane_g5_ParamLimits

0xd9ca,	// (0x00022fb8) cell_graphic2_pane_g5

0x0004,

0xfd7f,	// (0x0002536d) cell_graphic2_pane_g_ParamLimits

0xfd7f,	// (0x0002536d) cell_graphic2_pane_g

0xd9e7,	// (0x00022fd5) cell_graphic2_pane_t1_ParamLimits

0xd9e7,	// (0x00022fd5) cell_graphic2_pane_t1

0x1f37,	// (0x00017525) grid_highlight_pane_cp11_ParamLimits

0x1f37,	// (0x00017525) grid_highlight_pane_cp11

0xc447,	// (0x00021a35) bg_button_pane_cp05

0xda31,	// (0x0002301f) cell_graphic2_control_pane_g1

0x3cd6,	// (0x000192c4) bg_touch_area_indi_pane_g1

0x6245,	// (0x0001b833) aid_cmod_rocker_key_size

0x624f,	// (0x0001b83d) aid_cmode_itu_key_size

0x6259,	// (0x0001b847) main_cmode_video_pane

0x6263,	// (0x0001b851) main_comp_mode_itu_pane

0x626f,	// (0x0001b85d) main_comp_mode_rocker_pane

0x627b,	// (0x0001b869) cell_cmode_rocker_pane_ParamLimits

0x627b,	// (0x0001b869) cell_cmode_rocker_pane

0x628d,	// (0x0001b87b) cell_cmode_itu_pane_ParamLimits

0x628d,	// (0x0001b87b) cell_cmode_itu_pane

0xc73d,	// (0x00021d2b) bg_button_pane_cp06_ParamLimits

0xc73d,	// (0x00021d2b) bg_button_pane_cp06

0x3f46,	// (0x00019534) cell_cmode_rocker_pane_g1_ParamLimits

0x3f46,	// (0x00019534) cell_cmode_rocker_pane_g1

0x57b8,	// (0x0001ada6) cell_cmode_rocker_pane_g2_ParamLimits

0x57b8,	// (0x0001ada6) cell_cmode_rocker_pane_g2

0x0001,

0xfd8f,	// (0x0002537d) cell_cmode_rocker_pane_g_ParamLimits

0xfd8f,	// (0x0002537d) cell_cmode_rocker_pane_g

0xc293,	// (0x00021881) bg_button_pane_cp07

0x62a2,	// (0x0001b890) cell_cmode_itu_pane_g1

0x62ab,	// (0x0001b899) cell_cmode_itu_pane_t1

0x62b9,	// (0x0001b8a7) cell_cmode_itu_pane_t2

0x0001,

0xfd94,	// (0x00025382) cell_cmode_itu_pane_t

0x59de,	// (0x0001afcc) aid_touch_ctrl_left

0x59e6,	// (0x0001afd4) aid_touch_ctrl_right

0xc293,	// (0x00021881) compa_mode_pane

0xda57,	// (0x00023045) aid_cmod_rocker_key_size_cp

0xda61,	// (0x0002304f) aid_cmode_itu_key_size_cp

0x62db,	// (0x0001b8c9) compa_mode_pane_g1

0x62e3,	// (0x0001b8d1) compa_mode_pane_g2

0x62eb,	// (0x0001b8d9) compa_mode_pane_g3

0x0002,

0xfd99,	// (0x00025387) compa_mode_pane_g

0xda6b,	// (0x00023059) main_comp_mode_itu_pane_cp

0xda73,	// (0x00023061) main_comp_mode_rocker_pane_cp

0xda7b,	// (0x00023069) cell_cmode_itu_pane_cp_ParamLimits

0xda7b,	// (0x00023069) cell_cmode_itu_pane_cp

0xda90,	// (0x0002307e) cell_cmode_rocker_pane_cp_ParamLimits

0xda90,	// (0x0002307e) cell_cmode_rocker_pane_cp

0xc73d,	// (0x00021d2b) bg_button_pane_cp06_cp_ParamLimits

0xc73d,	// (0x00021d2b) bg_button_pane_cp06_cp

0x3f46,	// (0x00019534) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3f46,	// (0x00019534) cell_cmode_rocker_pane_g1_cp

0x3cd6,	// (0x000192c4) cell_cmode_rocker_pane_g2_cp

0xc293,	// (0x00021881) bg_button_pane_cp07_cp

0xdaa2,	// (0x00023090) cell_cmode_itu_pane_g1_cp

0xdaab,	// (0x00023099) cell_cmode_itu_pane_t1_cp

0xdaab,	// (0x00023099) cell_cmode_itu_pane_t2_cp

0xb208,	// (0x000207f6) settings_code_pane_cp2

0xc303,	// (0x000218f1) bg_popup_window_pane_cp3_ParamLimits

0xc560,	// (0x00021b4e) heading_pane_cp3_ParamLimits

0xc56f,	// (0x00021b5d) listscroll_popup_graphic_pane_ParamLimits

0xeb70,	// (0x0002415e) fep_hwr_aid_pane_ParamLimits

0xeedb,	// (0x000244c9) aid_touch_sctrl_top_ParamLimits

0xeef6,	// (0x000244e4) sctrl_sk_top_pane_g1_ParamLimits

0xed50,	// (0x0002433e) sctrl_sk_top_pane_g2_ParamLimits

0xfccf,	// (0x000252bd) sctrl_sk_top_pane_g_ParamLimits

0xef03,	// (0x000244f1) sctrl_sk_top_pane_t1_ParamLimits

0xeedb,	// (0x000244c9) aid_touch_sctrl_bottom_ParamLimits

0xef03,	// (0x000244f1) sctrl_sk_bottom_pane_t1_ParamLimits

0xd27e,	// (0x0002286c) aid_area_touch_clock

0x8f88,	// (0x0001e576) aid_vkb2_area_top_pane_cell_ParamLimits

0x8f88,	// (0x0001e576) aid_vkb2_area_top_pane_cell

0x9037,	// (0x0001e625) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9037,	// (0x0001e625) aid_vkb2_area_bottom_pane_cell

0x5e96,	// (0x0001b484) popup_char_count_window

0x6341,	// (0x0001b92f) popup_char_count_window_g1

0x634a,	// (0x0001b938) popup_char_count_window_g2

0x6353,	// (0x0001b941) popup_char_count_window_g3

0x0002,

0xfda0,	// (0x0002538e) popup_char_count_window_g

0x635c,	// (0x0001b94a) popup_char_count_window_t1

0xef43,	// (0x00024531) popup_fep_char_preview_window_ParamLimits

0xef43,	// (0x00024531) popup_fep_char_preview_window

0x8fa8,	// (0x0001e596) vkb2_top_candi_pane_ParamLimits

0x8fa8,	// (0x0001e596) vkb2_top_candi_pane

0xdab9,	// (0x000230a7) cell_vkb2_top_candi_pane_ParamLimits

0xdab9,	// (0x000230a7) cell_vkb2_top_candi_pane

0xf1c8,	// (0x000247b6) bg_popup_fep_char_preview_window_ParamLimits

0xf1c8,	// (0x000247b6) bg_popup_fep_char_preview_window

0xf1d6,	// (0x000247c4) popup_fep_char_preview_window_t1_ParamLimits

0xf1d6,	// (0x000247c4) popup_fep_char_preview_window_t1

0x63b4,	// (0x0001b9a2) bg_popup_fep_char_preview_window_g1

0x63bc,	// (0x0001b9aa) bg_popup_fep_char_preview_window_g2

0x63c4,	// (0x0001b9b2) bg_popup_fep_char_preview_window_g3

0x63cc,	// (0x0001b9ba) bg_popup_fep_char_preview_window_g4

0x63d4,	// (0x0001b9c2) bg_popup_fep_char_preview_window_g5

0x63dc,	// (0x0001b9ca) bg_popup_fep_char_preview_window_g6

0x63e4,	// (0x0001b9d2) bg_popup_fep_char_preview_window_g7

0x63ec,	// (0x0001b9da) bg_popup_fep_char_preview_window_g8

0x63f4,	// (0x0001b9e2) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda7,	// (0x00025395) bg_popup_fep_char_preview_window_g

0xed50,	// (0x0002433e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed50,	// (0x0002433e) cell_vkb2_top_candi_pane_g1

0xed5e,	// (0x0002434c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xed5e,	// (0x0002434c) cell_vkb2_top_candi_pane_g2

0x6027,	// (0x0001b615) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6027,	// (0x0001b615) cell_vkb2_top_candi_pane_g3

0xf210,	// (0x000247fe) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf210,	// (0x000247fe) cell_vkb2_top_candi_pane_g4

0x45df,	// (0x00019bcd) cell_vkb2_top_candi_pane_g5_ParamLimits

0x45df,	// (0x00019bcd) cell_vkb2_top_candi_pane_g5

0xef27,	// (0x00024515) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef27,	// (0x00024515) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbc,	// (0x000253aa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbc,	// (0x000253aa) cell_vkb2_top_candi_pane_g

0xf231,	// (0x0002481f) cell_vkb2_top_candi_pane_t1

0x8c31,	// (0x0001e21f) aid_size_touch_slider_mark_ParamLimits

0x8c31,	// (0x0001e21f) aid_size_touch_slider_mark

0xd7d6,	// (0x00022dc4) grid_graphic2_catg_pane_ParamLimits

0xd7d6,	// (0x00022dc4) grid_graphic2_catg_pane

0xd892,	// (0x00022e80) popup_grid_graphic2_window_t1_ParamLimits

0xd892,	// (0x00022e80) popup_grid_graphic2_window_t1

0xd8a8,	// (0x00022e96) popup_grid_graphic2_window_t2_ParamLimits

0xd8a8,	// (0x00022e96) popup_grid_graphic2_window_t2

0x0001,

0xfd75,	// (0x00025363) popup_grid_graphic2_window_t_ParamLimits

0xfd75,	// (0x00025363) popup_grid_graphic2_window_t

0xc447,	// (0x00021a35) bg_button_pane_cp05_ParamLimits

0xda31,	// (0x0002301f) cell_graphic2_control_pane_g1_ParamLimits

0xdb19,	// (0x00023107) cell_graphic2_catg_pane_ParamLimits

0xdb19,	// (0x00023107) cell_graphic2_catg_pane

0xc293,	// (0x00021881) bg_button_pane_cp12

0xdb2b,	// (0x00023119) cell_graphic2_catg_pane_g1

0x58f2,	// (0x0001aee0) cell_tb_ext_pane_t1_ParamLimits

0xf02a,	// (0x00024618) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf02a,	// (0x00024618) vkb2_top_cell_right_narrow_pane

0xf042,	// (0x00024630) vkb2_top_cell_right_wide_pane_ParamLimits

0xf042,	// (0x00024630) vkb2_top_cell_right_wide_pane

0xe78e,	// (0x00023d7c) bg_vkb2_func_pane_ParamLimits

0xe78e,	// (0x00023d7c) bg_vkb2_func_pane

0xf087,	// (0x00024675) vkb2_top_cell_left_pane_g1_ParamLimits

0xe78e,	// (0x00023d7c) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe78e,	// (0x00023d7c) bg_vkb2_fuc_pane_cp03

0xf0e5,	// (0x000246d3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1168,	// (0x00016756) bg_vkb2_func_pane_g1

0x1170,	// (0x0001675e) bg_vkb2_func_pane_g2

0x1180,	// (0x0001676e) bg_vkb2_func_pane_g3

0x1178,	// (0x00016766) bg_vkb2_func_pane_g4

0x1188,	// (0x00016776) bg_vkb2_func_pane_g5

0x1190,	// (0x0001677e) bg_vkb2_func_pane_g6

0x1198,	// (0x00016786) bg_vkb2_func_pane_g7

0x11a0,	// (0x0001678e) bg_vkb2_func_pane_g8

0x1160,	// (0x0001674e) bg_vkb2_func_pane_g9

0x0008,

0xfdc9,	// (0x000253b7) bg_vkb2_func_pane_g

0xe78e,	// (0x00023d7c) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe78e,	// (0x00023d7c) bg_vkb2_fuc_pane_cp01

0xf087,	// (0x00024675) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf087,	// (0x00024675) vkb2_top_cell_right_wide_pane_g1

0xe78e,	// (0x00023d7c) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe78e,	// (0x00023d7c) bg_vkb2_fuc_pane_cp02

0xf250,	// (0x0002483e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf250,	// (0x0002483e) vkb2_top_cell_right_narrow_pane_g1

0xbfee,	// (0x000215dc) aid_touch_area_decrease_ParamLimits

0xbfee,	// (0x000215dc) aid_touch_area_decrease

0xc028,	// (0x00021616) aid_touch_area_increase_ParamLimits

0xc028,	// (0x00021616) aid_touch_area_increase

0xc050,	// (0x0002163e) aid_touch_area_mute_ParamLimits

0xc050,	// (0x0002163e) aid_touch_area_mute

0xc078,	// (0x00021666) aid_touch_area_slider_ParamLimits

0xc078,	// (0x00021666) aid_touch_area_slider

0xc0b8,	// (0x000216a6) popup_slider_window_g4_ParamLimits

0xc0b8,	// (0x000216a6) popup_slider_window_g4

0xc0e0,	// (0x000216ce) popup_slider_window_g5_ParamLimits

0xc0e0,	// (0x000216ce) popup_slider_window_g5

0xc114,	// (0x00021702) popup_slider_window_g6_ParamLimits

0xc114,	// (0x00021702) popup_slider_window_g6

0x56ce,	// (0x0001acbc) popup_slider_window_t2_ParamLimits

0x56ce,	// (0x0001acbc) popup_slider_window_t2

0x0001,

0xfcc3,	// (0x000252b1) popup_slider_window_t_ParamLimits

0xfcc3,	// (0x000252b1) popup_slider_window_t

0xc130,	// (0x0002171e) slider_pane_ParamLimits

0xc130,	// (0x0002171e) slider_pane

0x6417,	// (0x0001ba05) slider_pane_g1_ParamLimits

0x6417,	// (0x0001ba05) slider_pane_g1

0x642b,	// (0x0001ba19) slider_pane_g2_ParamLimits

0x642b,	// (0x0001ba19) slider_pane_g2

0x6441,	// (0x0001ba2f) slider_pane_g3_ParamLimits

0x6441,	// (0x0001ba2f) slider_pane_g3

0x0003,

0xfddc,	// (0x000253ca) slider_pane_g_ParamLimits

0xfddc,	// (0x000253ca) slider_pane_g

0x8a50,	// (0x0001e03e) popup_tb_float_extension_window_ParamLimits

0x8a50,	// (0x0001e03e) popup_tb_float_extension_window

0x646d,	// (0x0001ba5b) aid_size_cell_tb_float_ext

0xc293,	// (0x00021881) bg_popup_sub_window_cp28

0xdb34,	// (0x00023122) grid_tb_float_ext_pane

0xdb3e,	// (0x0002312c) cell_tb_float_ext_pane_ParamLimits

0xdb3e,	// (0x0002312c) cell_tb_float_ext_pane

0xdb58,	// (0x00023146) cell_tb_float_ext_pane_g1

0xdb61,	// (0x0002314f) grid_highlight_pane_cp12

0x8d24,	// (0x0001e312) cell_last_hwr_side_pane_ParamLimits

0x8d24,	// (0x0001e312) cell_last_hwr_side_pane

0x3cd6,	// (0x000192c4) cell_last_hwr_side_pane_g1

0x64af,	// (0x0001ba9d) cell_last_hwr_side_pane_g2

0x0001,

0xfde5,	// (0x000253d3) cell_last_hwr_side_pane_g

0x9114,	// (0x0001e702) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9114,	// (0x0001e702) vkb2_area_bottom_space_btn_pane

0xed50,	// (0x0002433e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5f4b,	// (0x0001b539) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf231,	// (0x0002481f) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf270,	// (0x0002485e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf270,	// (0x0002485e) vkb2_area_bottom_space_btn_pane_g1

0xf2aa,	// (0x00024898) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf2aa,	// (0x00024898) vkb2_area_bottom_space_btn_pane_g2

0xf2e0,	// (0x000248ce) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf2e0,	// (0x000248ce) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdea,	// (0x000253d8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdea,	// (0x000253d8) vkb2_area_bottom_space_btn_pane_g

0xec25,	// (0x00024213) cel_fep_hwr_func_pane_ParamLimits

0xec25,	// (0x00024213) cel_fep_hwr_func_pane

0x8cf9,	// (0x0001e2e7) cell_hwr_side_button_pane_ParamLimits

0x8cf9,	// (0x0001e2e7) cell_hwr_side_button_pane

0xd27e,	// (0x0002286c) aid_area_touch_clock_ParamLimits

0xc447,	// (0x00021a35) bg_uniindi_top_pane_ParamLimits

0xd290,	// (0x0002287e) uniindi_top_pane_g1_ParamLimits

0xd2a6,	// (0x00022894) uniindi_top_pane_g2_ParamLimits

0xd2b2,	// (0x000228a0) uniindi_top_pane_g3_ParamLimits

0x596c,	// (0x0001af5a) uniindi_top_pane_g4_ParamLimits

0xfcfb,	// (0x000252e9) uniindi_top_pane_g_ParamLimits

0xd2c3,	// (0x000228b1) uniindi_top_pane_t1_ParamLimits

0xc447,	// (0x00021a35) bg_vkb2_func_pane_cp01_ParamLimits

0xc447,	// (0x00021a35) bg_vkb2_func_pane_cp01

0x64b8,	// (0x0001baa6) cel_fep_hwr_func_pane_g1_ParamLimits

0x64b8,	// (0x0001baa6) cel_fep_hwr_func_pane_g1

0xc447,	// (0x00021a35) bg_vkb2_func_pane_cp02_ParamLimits

0xc447,	// (0x00021a35) bg_vkb2_func_pane_cp02

0x64b8,	// (0x0001baa6) cell_hwr_side_button_pane_g1_ParamLimits

0x64b8,	// (0x0001baa6) cell_hwr_side_button_pane_g1

0x0fb6,	// (0x000165a4) status_pane_g4_ParamLimits

0x0fb6,	// (0x000165a4) status_pane_g4

0x0fd0,	// (0x000165be) status_pane_t1

0x3a11,	// (0x00018fff) form2_midp_gauge_slider_cont_pane

0x3a19,	// (0x00019007) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb5fc,	// (0x00020bea) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb60e,	// (0x00020bfc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x000250b0) form2_midp_gauge_slider_pane_t_ParamLimits

0x3a4f,	// (0x0001903d) form2_midp_slider_pane_ParamLimits

0xef35,	// (0x00024523) aid_size_cell_func_vkb2_ParamLimits

0xef35,	// (0x00024523) aid_size_cell_func_vkb2

0x6459,	// (0x0001ba47) slider_pane_g4_ParamLimits

0x6459,	// (0x0001ba47) slider_pane_g4

0x917d,	// (0x0001e76b) form2_midp_gauge_slider_pane_t2_cp01

0x918b,	// (0x0001e779) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x918b,	// (0x0001e779) form2_midp_gauge_slider_pane_t3_cp01

0xf32a,	// (0x00024918) form2_midp_slider_pane_cp01

0xc293,	// (0x00021881) navi_smil_pane

0x64f1,	// (0x0001badf) navi_smil_pane_g1

0x64f9,	// (0x0001bae7) navi_smil_pane_t1

0x64c6,	// (0x0001bab4) form2_midp_slider_pane_g1

0x64cf,	// (0x0001babd) form2_midp_slider_pane_g2

0x64d7,	// (0x0001bac5) form2_midp_slider_pane_g3

0x64c6,	// (0x0001bab4) form2_midp_slider_pane_g4

0xdb6a,	// (0x00023158) form2_midp_slider_pane_g5

0x0004,

0xfdf3,	// (0x000253e1) form2_midp_slider_pane_g

0xf31a,	// (0x00024908) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf31a,	// (0x00024908) vkb2_area_bottom_space_btn_pane_g4

0xa73e,	// (0x0001fd2c) lc0_navi_pane_ParamLimits

0xa73e,	// (0x0001fd2c) lc0_navi_pane

0xa7a8,	// (0x0001fd96) lc0_stat_indi_pane_ParamLimits

0xa7a8,	// (0x0001fd96) lc0_stat_indi_pane

0xa7bd,	// (0x0001fdab) ls0_title_pane_ParamLimits

0xa7bd,	// (0x0001fdab) ls0_title_pane

0xc73d,	// (0x00021d2b) bg_popup_sub_pane_cp14_ParamLimits

0xd265,	// (0x00022853) list_uniindi_pane_ParamLimits

0xd271,	// (0x0002285f) uniindi_top_pane_ParamLimits

0x59b6,	// (0x0001afa4) list_single_uniindi_pane_g1_ParamLimits

0x59c9,	// (0x0001afb7) list_single_uniindi_pane_t1_ParamLimits

0x91a8,	// (0x0001e796) lc0_stat_clock_pane_ParamLimits

0x91a8,	// (0x0001e796) lc0_stat_clock_pane

0xdb75,	// (0x00023163) lc0_stat_indi_pane_g1_ParamLimits

0xdb75,	// (0x00023163) lc0_stat_indi_pane_g1

0xdb82,	// (0x00023170) lc0_stat_indi_pane_g2_ParamLimits

0xdb82,	// (0x00023170) lc0_stat_indi_pane_g2

0x0001,

0xfdfe,	// (0x000253ec) lc0_stat_indi_pane_g_ParamLimits

0xfdfe,	// (0x000253ec) lc0_stat_indi_pane_g

0x91b8,	// (0x0001e7a6) lc0_uni_indicator_pane_ParamLimits

0x91b8,	// (0x0001e7a6) lc0_uni_indicator_pane

0xdb8f,	// (0x0002317d) ls0_title_pane_g1_ParamLimits

0xdb8f,	// (0x0002317d) ls0_title_pane_g1

0xdba3,	// (0x00023191) ls0_title_pane_t1_ParamLimits

0xdba3,	// (0x00023191) ls0_title_pane_t1

0x91c8,	// (0x0001e7b6) lc0_uni_indicator_pane_g1_ParamLimits

0x91c8,	// (0x0001e7b6) lc0_uni_indicator_pane_g1

0x656b,	// (0x0001bb59) lc0_stat_clock_pane_t1

0xe245,	// (0x00023833) main_ai5_pane

0x6579,	// (0x0001bb67) ai5_sk_pane_ParamLimits

0x6579,	// (0x0001bb67) ai5_sk_pane

0xdbd1,	// (0x000231bf) cell_ai5_widget_pane_ParamLimits

0xdbd1,	// (0x000231bf) cell_ai5_widget_pane

0x664f,	// (0x0001bc3d) aid_size_cell_widget_grid

0x665d,	// (0x0001bc4b) bg_ai5_widget_pane_ParamLimits

0x665d,	// (0x0001bc4b) bg_ai5_widget_pane

0x66d9,	// (0x0001bcc7) cell_ai5_widget_pane_g2

0x66ed,	// (0x0001bcdb) cell_ai5_widget_pane_g3

0x6707,	// (0x0001bcf5) cell_ai5_widget_pane_g4

0x6717,	// (0x0001bd05) cell_ai5_widget_pane_g5

0x6727,	// (0x0001bd15) cell_ai5_widget_pane_g6

0x6733,	// (0x0001bd21) cell_ai5_widget_pane_g7

0x679f,	// (0x0001bd8d) cell_ai5_widget_pane_t1_ParamLimits

0x679f,	// (0x0001bd8d) cell_ai5_widget_pane_t1

0x67bc,	// (0x0001bdaa) cell_ai5_widget_pane_t2_ParamLimits

0x67bc,	// (0x0001bdaa) cell_ai5_widget_pane_t2

0x67d4,	// (0x0001bdc2) cell_ai5_widget_pane_t3_ParamLimits

0x67d4,	// (0x0001bdc2) cell_ai5_widget_pane_t3

0x67ec,	// (0x0001bdda) cell_ai5_widget_pane_t4_ParamLimits

0x67ec,	// (0x0001bdda) cell_ai5_widget_pane_t4

0xdc3d,	// (0x0002322b) cell_ai5_widget_pane_t5_ParamLimits

0xdc3d,	// (0x0002322b) cell_ai5_widget_pane_t5

0x6831,	// (0x0001be1f) cell_ai5_widget_pane_t6_ParamLimits

0x6831,	// (0x0001be1f) cell_ai5_widget_pane_t6

0x6843,	// (0x0001be31) cell_ai5_widget_pane_t7_ParamLimits

0x6843,	// (0x0001be31) cell_ai5_widget_pane_t7

0x6862,	// (0x0001be50) cell_ai5_widget_pane_t8_ParamLimits

0x6862,	// (0x0001be50) cell_ai5_widget_pane_t8

0x000b,

0xfe1e,	// (0x0002540c) cell_ai5_widget_pane_t_ParamLimits

0xfe1e,	// (0x0002540c) cell_ai5_widget_pane_t

0x68e6,	// (0x0001bed4) grid_ai5_widget_pane

0xc73d,	// (0x00021d2b) highlight_cell_ai5_widget_pane_ParamLimits

0xc73d,	// (0x00021d2b) highlight_cell_ai5_widget_pane

0xdc5d,	// (0x0002324b) ai5_sk_left_pane

0xdc67,	// (0x00023255) ai5_sk_middle_pane

0xdc71,	// (0x0002325f) ai5_sk_right_pane

0x6912,	// (0x0001bf00) bg_ai5_widget_pane_g1_ParamLimits

0x6912,	// (0x0001bf00) bg_ai5_widget_pane_g1

0x691e,	// (0x0001bf0c) bg_ai5_widget_pane_g2_ParamLimits

0x691e,	// (0x0001bf0c) bg_ai5_widget_pane_g2

0x692a,	// (0x0001bf18) bg_ai5_widget_pane_g3_ParamLimits

0x692a,	// (0x0001bf18) bg_ai5_widget_pane_g3

0x6936,	// (0x0001bf24) bg_ai5_widget_pane_g4_ParamLimits

0x6936,	// (0x0001bf24) bg_ai5_widget_pane_g4

0x6942,	// (0x0001bf30) bg_ai5_widget_pane_g5_ParamLimits

0x6942,	// (0x0001bf30) bg_ai5_widget_pane_g5

0x694e,	// (0x0001bf3c) bg_ai5_widget_pane_g6_ParamLimits

0x694e,	// (0x0001bf3c) bg_ai5_widget_pane_g6

0x695a,	// (0x0001bf48) bg_ai5_widget_pane_g7_ParamLimits

0x695a,	// (0x0001bf48) bg_ai5_widget_pane_g7

0x6966,	// (0x0001bf54) bg_ai5_widget_pane_g8_ParamLimits

0x6966,	// (0x0001bf54) bg_ai5_widget_pane_g8

0x6972,	// (0x0001bf60) bg_ai5_widget_pane_g9_ParamLimits

0x6972,	// (0x0001bf60) bg_ai5_widget_pane_g9

0x0008,

0xfe37,	// (0x00025425) bg_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x00025425) bg_ai5_widget_pane_g

0x69a4,	// (0x0001bf92) cell_shortcut_ai5_widget_pane_ParamLimits

0x69a4,	// (0x0001bf92) cell_shortcut_ai5_widget_pane

0xd04f,	// (0x0002263d) bg_cell_shortcut_ai5_widget_pane

0x69b5,	// (0x0001bfa3) cell_grid_ai5_widget_pane_g1

0xd04f,	// (0x0002263d) highlight_cell_shortcut_ai5_widget_pane

0x1168,	// (0x00016756) ai5_sk_left_pane_g1

0x69be,	// (0x0001bfac) ai5_sk_left_pane_g2

0x69c6,	// (0x0001bfb4) ai5_sk_left_pane_g3

0x69ce,	// (0x0001bfbc) ai5_sk_left_pane_g4

0x0003,

0xfe4a,	// (0x00025438) ai5_sk_left_pane_g

0x69d6,	// (0x0001bfc4) ai5_sk_left_pane_t1

0x1170,	// (0x0001675e) ai5_sk_right_pane_g1

0x69e4,	// (0x0001bfd2) ai5_sk_right_pane_g2

0x69ec,	// (0x0001bfda) ai5_sk_right_pane_g3

0x69f4,	// (0x0001bfe2) ai5_sk_right_pane_g4

0x0003,

0xfe53,	// (0x00025441) ai5_sk_right_pane_g

0x69fc,	// (0x0001bfea) ai5_sk_right_pane_t1

0x1170,	// (0x0001675e) ai5_sk_middle_pane_g1

0x1168,	// (0x00016756) ai5_sk_middle_pane_g2

0x1188,	// (0x00016776) ai5_sk_middle_pane_g3

0x69ec,	// (0x0001bfda) ai5_sk_middle_pane_g4

0x69c6,	// (0x0001bfb4) ai5_sk_middle_pane_g5

0x6a0a,	// (0x0001bff8) ai5_sk_middle_pane_g6

0xdc7b,	// (0x00023269) ai5_sk_middle_pane_g7

0x0006,

0xfe5c,	// (0x0002544a) ai5_sk_middle_pane_g

0xa62a,	// (0x0001fc18) aid_touch_area_size_lc0_ParamLimits

0xa62a,	// (0x0001fc18) aid_touch_area_size_lc0

0xed7f,	// (0x0002436d) cell_hwr_candidate_pane_t1_ParamLimits

0x0c87,	// (0x00016275) aid_touch_navi_pane

0xa8b6,	// (0x0001fea4) status_dt_navi_pane_ParamLimits

0xa8b6,	// (0x0001fea4) status_dt_navi_pane

0xa8ce,	// (0x0001febc) status_dt_sta_pane_ParamLimits

0xa8ce,	// (0x0001febc) status_dt_sta_pane

0xdc83,	// (0x00023271) dt_sta_controll_pane

0xdc90,	// (0x0002327e) dt_sta_indi_pane

0xdc9d,	// (0x0002328b) dt_sta_title_pane

0xc447,	// (0x00021a35) bg_dt_sta_indi_pane_ParamLimits

0xc447,	// (0x00021a35) bg_dt_sta_indi_pane

0xdcaf,	// (0x0002329d) dt_sta_battery_pane

0xdcb7,	// (0x000232a5) dt_sta_indi_pane_g1

0x6a5c,	// (0x0001c04a) dt_sta_indi_pane_g2

0x6a65,	// (0x0001c053) dt_sta_indi_pane_g3

0x0002,

0xfe6b,	// (0x00025459) dt_sta_indi_pane_g

0x6a6e,	// (0x0001c05c) dt_sta_signal_pane

0xc73d,	// (0x00021d2b) bg_dt_sta_title_pane_ParamLimits

0xc73d,	// (0x00021d2b) bg_dt_sta_title_pane

0x2097,	// (0x00017685) dt_sta_title_pane_g1

0xdcc0,	// (0x000232ae) dt_sta_title_pane_t1_ParamLimits

0xdcc0,	// (0x000232ae) dt_sta_title_pane_t1

0xc293,	// (0x00021881) bg_dt_sta_control_pane

0xdcd5,	// (0x000232c3) dt_sta_controll_pane_g1

0xdcde,	// (0x000232cc) bg_dt_sta_title_pane_g1

0xdce7,	// (0x000232d5) bg_dt_sta_title_pane_g2

0xdcf0,	// (0x000232de) bg_dt_sta_title_pane_g3

0x0002,

0xfe72,	// (0x00025460) bg_dt_sta_title_pane_g

0x3cd6,	// (0x000192c4) bg_dt_sta_indi_pane_g1

0x6ab0,	// (0x0001c09e) dt_sta_signal_pane_g1

0x6ab8,	// (0x0001c0a6) dt_sta_signal_pane_g2

0x0001,

0xfe79,	// (0x00025467) dt_sta_signal_pane_g

0x6ac0,	// (0x0001c0ae) dt_sta_battery_pane_g1

0x6ac9,	// (0x0001c0b7) dt_sta_battery_pane_t1

0x3cd6,	// (0x000192c4) bg_dt_sta_control_pane_g1

0xcc80,	// (0x0002226e) fep_china_uni_eep_pane

0xcc88,	// (0x00022276) fep_china_uni_entry_pane_ParamLimits

0xcc98,	// (0x00022286) popup_fep_china_uni_window_g1_ParamLimits

0xcca8,	// (0x00022296) popup_fep_china_uni_window_g2_ParamLimits

0xcca8,	// (0x00022296) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x00024cd2) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x00024cd2) popup_fep_china_uni_window_g

0x6ad8,	// (0x0001c0c6) fep_china_uni_eep_pane_g1

0x6ae0,	// (0x0001c0ce) fep_china_uni_eep_pane_t1

0x64e8,	// (0x0001bad6) aid_touch_area_size_smil_player

0x0ddd,	// (0x000163cb) lc0_clock_pane

0x0fc4,	// (0x000165b2) status_pane_g5_ParamLimits

0x0fc4,	// (0x000165b2) status_pane_g5

0x85ac,	// (0x0001db9a) popup_keymap_window

0x0f82,	// (0x00016570) status_icon_pane

0x66ed,	// (0x0001bcdb) cell_ai5_widget_pane_g3_ParamLimits

0x6707,	// (0x0001bcf5) cell_ai5_widget_pane_g4_ParamLimits

0x6717,	// (0x0001bd05) cell_ai5_widget_pane_g5_ParamLimits

0x673f,	// (0x0001bd2d) cell_ai5_widget_pane_g8_ParamLimits

0x673f,	// (0x0001bd2d) cell_ai5_widget_pane_g8

0x6753,	// (0x0001bd41) cell_ai5_widget_pane_g9_ParamLimits

0x6753,	// (0x0001bd41) cell_ai5_widget_pane_g9

0x6767,	// (0x0001bd55) cell_ai5_widget_pane_g10_ParamLimits

0x6767,	// (0x0001bd55) cell_ai5_widget_pane_g10

0x6aef,	// (0x0001c0dd) status_icon_pane_g1

0xc293,	// (0x00021881) bg_popup_sub_pane_cp13

0x6af7,	// (0x0001c0e5) popup_keymap_window_t1

0xa5b8,	// (0x0001fba6) control_pane_g6_ParamLimits

0xa5b8,	// (0x0001fba6) control_pane_g6

0xa5c5,	// (0x0001fbb3) control_pane_g7_ParamLimits

0xa5c5,	// (0x0001fbb3) control_pane_g7

0xa5d2,	// (0x0001fbc0) control_pane_g8_ParamLimits

0xa5d2,	// (0x0001fbc0) control_pane_g8

0xdc83,	// (0x00023271) dt_sta_controll_pane_ParamLimits

0xdc90,	// (0x0002327e) dt_sta_indi_pane_ParamLimits

0xdc9d,	// (0x0002328b) dt_sta_title_pane_ParamLimits

0xc61e,	// (0x00021c0c) aid_size_touch_scroll_bar_cale

0x8010,	// (0x0001d5fe) popup_discreet_window_ParamLimits

0x8010,	// (0x0001d5fe) popup_discreet_window

0x8062,	// (0x0001d650) popup_sk_window

0x18db,	// (0x00016ec9) bg_popup_sub_pane_cp28_ParamLimits

0x18db,	// (0x00016ec9) bg_popup_sub_pane_cp28

0x6b05,	// (0x0001c0f3) popup_discreet_window_g1_ParamLimits

0x6b05,	// (0x0001c0f3) popup_discreet_window_g1

0xdcf9,	// (0x000232e7) popup_discreet_window_t1_ParamLimits

0xdcf9,	// (0x000232e7) popup_discreet_window_t1

0x6b43,	// (0x0001c131) popup_discreet_window_t2_ParamLimits

0x6b43,	// (0x0001c131) popup_discreet_window_t2

0x0002,

0xfe7e,	// (0x0002546c) popup_discreet_window_t_ParamLimits

0xfe7e,	// (0x0002546c) popup_discreet_window_t

0xf333,	// (0x00024921) popup_sk_window_g1

0xf33d,	// (0x0002492b) popup_sk_window_g2

0x0001,

0xfe85,	// (0x00025473) popup_sk_window_g

0x91f3,	// (0x0001e7e1) popup_sk_window_t1

0x9201,	// (0x0001e7ef) popup_sk_window_t1_copy1

0x66d9,	// (0x0001bcc7) cell_ai5_widget_pane_g2_ParamLimits

0x6874,	// (0x0001be62) cell_ai5_widget_pane_t9_ParamLimits

0x6874,	// (0x0001be62) cell_ai5_widget_pane_t9

0xc293,	// (0x00021881) main_fep_fshwr2_pane

0x920f,	// (0x0001e7fd) aid_fshwr2_btn_pane

0x9223,	// (0x0001e811) aid_fshwr2_syb_pane

0x9237,	// (0x0001e825) aid_fshwr2_txt_pane

0x9247,	// (0x0001e835) fshwr2_func_candi_pane

0x9267,	// (0x0001e855) fshwr2_hwr_syb_pane

0x9289,	// (0x0001e877) fshwr2_icf_pane

0xe245,	// (0x00023833) fshwr2_icf_bg_pane

0xf353,	// (0x00024941) fshwr2_icf_pane_t1_ParamLimits

0xf353,	// (0x00024941) fshwr2_icf_pane_t1

0xcbfd,	// (0x000221eb) fshwr2_func_candi_pane_g1

0xdd17,	// (0x00023305) fshwr2_func_candi_row_pane_ParamLimits

0xdd17,	// (0x00023305) fshwr2_func_candi_row_pane

0x92b9,	// (0x0001e8a7) cell_fshwr2_syb_pane_ParamLimits

0x92b9,	// (0x0001e8a7) cell_fshwr2_syb_pane

0xf36c,	// (0x0002495a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf36c,	// (0x0002495a) fshwr2_hwr_syb_pane_g1

0xe245,	// (0x00023833) bg_popup_call_pane_cp01

0x92df,	// (0x0001e8cd) fshwr2_func_candi_cell_pane_ParamLimits

0x92df,	// (0x0001e8cd) fshwr2_func_candi_cell_pane

0x16c4,	// (0x00016cb2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x16c4,	// (0x00016cb2) fshwr2_func_candi_cell_bg_pane

0x932a,	// (0x0001e918) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x932a,	// (0x0001e918) fshwr2_func_candi_cell_pane_g1

0x9361,	// (0x0001e94f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9361,	// (0x0001e94f) fshwr2_func_candi_cell_pane_t1

0xe245,	// (0x00023833) bg_button_pane_cp08

0xc8ed,	// (0x00021edb) cell_fshwr2_syb_bg_pane

0x937c,	// (0x0001e96a) cell_fshwr2_syb_bg_pane_g1

0x938f,	// (0x0001e97d) cell_fshwr2_syb_bg_pane_t1

0xc73d,	// (0x00021d2b) main_tmo_pane

0xafa8,	// (0x00020596) uni_indicator_pane_g1_ParamLimits

0xafbe,	// (0x000205ac) uni_indicator_pane_g2_ParamLimits

0xafd4,	// (0x000205c2) uni_indicator_pane_g3_ParamLimits

0x2404,	// (0x000179f2) uni_indicator_pane_g4_ParamLimits

0x2404,	// (0x000179f2) uni_indicator_pane_g4

0x2418,	// (0x00017a06) uni_indicator_pane_g5_ParamLimits

0x2418,	// (0x00017a06) uni_indicator_pane_g5

0x2418,	// (0x00017a06) uni_indicator_pane_g6_ParamLimits

0x2418,	// (0x00017a06) uni_indicator_pane_g6

0xf8dc,	// (0x00024eca) uni_indicator_pane_g_ParamLimits

0xbfd0,	// (0x000215be) popup_tmo_note_window_ParamLimits

0xbfd0,	// (0x000215be) popup_tmo_note_window

0xf345,	// (0x00024933) fshwr2_bg_pane

0x9352,	// (0x0001e940) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9352,	// (0x0001e940) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8a,	// (0x00025478) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8a,	// (0x00025478) fshwr2_func_candi_cell_pane_g

0xed38,	// (0x00024326) bg_popup_window_pane_cp01

0xf37a,	// (0x00024968) bg_popup_window_pane_g1_cp01

0x6bbc,	// (0x0001c1aa) bg_popup_window_pane_cp22_ParamLimits

0x6bbc,	// (0x0001c1aa) bg_popup_window_pane_cp22

0xdd3a,	// (0x00023328) listscroll_tmo_link_pane_ParamLimits

0xdd3a,	// (0x00023328) listscroll_tmo_link_pane

0x6c0a,	// (0x0001c1f8) popup_tmo_note_window_g1_ParamLimits

0x6c0a,	// (0x0001c1f8) popup_tmo_note_window_g1

0xdd7a,	// (0x00023368) tmo_note_info_pane_ParamLimits

0xdd7a,	// (0x00023368) tmo_note_info_pane

0xdd94,	// (0x00023382) list_tmo_note_info_pane_g1_ParamLimits

0xdd94,	// (0x00023382) list_tmo_note_info_pane_g1

0x6c48,	// (0x0001c236) list_tmo_note_info_pane_g2_ParamLimits

0x6c48,	// (0x0001c236) list_tmo_note_info_pane_g2

0x0001,

0xfe8f,	// (0x0002547d) list_tmo_note_info_pane_g_ParamLimits

0xfe8f,	// (0x0002547d) list_tmo_note_info_pane_g

0x6c64,	// (0x0001c252) list_tmo_note_info_text_pane_ParamLimits

0x6c64,	// (0x0001c252) list_tmo_note_info_text_pane

0x6ce5,	// (0x0001c2d3) list_tmo_link_pane

0x6cf2,	// (0x0001c2e0) scroll_pane_cp20

0x6cff,	// (0x0001c2ed) list_single_tmo_link_pane_ParamLimits

0x6cff,	// (0x0001c2ed) list_single_tmo_link_pane

0x6d0f,	// (0x0001c2fd) list_single_tmo_link_pane_t1

0x6d1d,	// (0x0001c30b) list_tmo_note_info_text_pane_t1_ParamLimits

0x6d1d,	// (0x0001c30b) list_tmo_note_info_text_pane_t1

0x9fc4,	// (0x0001f5b2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9fc4,	// (0x0001f5b2) aid_size_touch_scroll_bar_cp01

0x9ec4,	// (0x0001f4b2) aid_size_touch_slider_marker

0x8052,	// (0x0001d640) popup_settings_window_ParamLimits

0x8052,	// (0x0001d640) popup_settings_window

0xd1e3,	// (0x000227d1) popup_candi_list_indi_window

0x0c87,	// (0x00016275) aid_touch_navi_pane_ParamLimits

0xeeaf,	// (0x0002449d) rs_clock_indi_pane

0xeeb8,	// (0x000244a6) sctrl_sk_bottom_pane_ParamLimits

0xeec9,	// (0x000244b7) sctrl_sk_top_pane_ParamLimits

0x8e48,	// (0x0001e436) popup_fep_tooltip_window

0x664f,	// (0x0001bc3d) aid_size_cell_widget_grid_ParamLimits

0x66c4,	// (0x0001bcb2) cell_ai5_widget_pane_g1_ParamLimits

0x66c4,	// (0x0001bcb2) cell_ai5_widget_pane_g1

0x6727,	// (0x0001bd15) cell_ai5_widget_pane_g6_ParamLimits

0x6733,	// (0x0001bd21) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe03,	// (0x000253f1) cell_ai5_widget_pane_g_ParamLimits

0xfe03,	// (0x000253f1) cell_ai5_widget_pane_g

0x68a3,	// (0x0001be91) cell_ai5_widget_pane_t10_ParamLimits

0x68a3,	// (0x0001be91) cell_ai5_widget_pane_t10

0x68e6,	// (0x0001bed4) grid_ai5_widget_pane_ParamLimits

0x697e,	// (0x0001bf6c) cell_contacts_ai5_widget_pane_ParamLimits

0x697e,	// (0x0001bf6c) cell_contacts_ai5_widget_pane

0x6b58,	// (0x0001c146) popup_discreet_window_t3_ParamLimits

0x6b58,	// (0x0001c146) popup_discreet_window_t3

0x92a5,	// (0x0001e893) popup_fshwr2_char_preview_window_ParamLimits

0x92a5,	// (0x0001e893) popup_fshwr2_char_preview_window

0xddab,	// (0x00023399) tmo_note_info_pane_t1

0xddc0,	// (0x000233ae) tmo_note_info_pane_t2

0xddd7,	// (0x000233c5) tmo_note_info_pane_t3

0x6cc1,	// (0x0001c2af) tmo_note_info_pane_t4

0x6cd3,	// (0x0001c2c1) tmo_note_info_pane_t5

0x0004,

0xfe94,	// (0x00025482) tmo_note_info_pane_t

0x6ce5,	// (0x0001c2d3) list_tmo_link_pane_ParamLimits

0x6cf2,	// (0x0001c2e0) scroll_pane_cp20_ParamLimits

0xe245,	// (0x00023833) bg_popup_fep_char_preview_window_cp01

0xddec,	// (0x000233da) popup_fshwr2_char_preview_window_t1

0x6d44,	// (0x0001c332) popup_candi_list_indi_window_g1

0x6d4d,	// (0x0001c33b) bg_cell_contacts_ai5_widget_pane

0x6d59,	// (0x0001c347) cell_contacts_ai5_widget_pane_g1

0x4534,	// (0x00019b22) cell_contacts_ai5_widget_pane_g2

0x6d6e,	// (0x0001c35c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9f,	// (0x0002548d) cell_contacts_ai5_widget_pane_g

0x6d7a,	// (0x0001c368) cell_contacts_ai5_widget_pane_t1

0xc73d,	// (0x00021d2b) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6df1,	// (0x0001c3df) settings_container_pane

0xd04f,	// (0x0002263d) listscroll_set_pane_copy1

0x306d,	// (0x0001865b) scroll_pane_cp121_copy1

0x1680,	// (0x00016c6e) set_content_pane_copy1

0xddfa,	// (0x000233e8) aid_height_set_list_copy1_ParamLimits

0xddfa,	// (0x000233e8) aid_height_set_list_copy1

0x2622,	// (0x00017c10) aid_size_parent_copy1_ParamLimits

0x2622,	// (0x00017c10) aid_size_parent_copy1

0xde06,	// (0x000233f4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xde06,	// (0x000233f4) button_value_adjust_pane_cp6_copy1

0xc8ed,	// (0x00021edb) list_highlight_pane_cp2_copy1_ParamLimits

0xc8ed,	// (0x00021edb) list_highlight_pane_cp2_copy1

0xde1a,	// (0x00023408) list_set_pane_copy1_ParamLimits

0xde1a,	// (0x00023408) list_set_pane_copy1

0x6d8c,	// (0x0001c37a) main_pane_set_t1_copy1_ParamLimits

0x6d8c,	// (0x0001c37a) main_pane_set_t1_copy1

0x6dc6,	// (0x0001c3b4) main_pane_set_t2_copy1_ParamLimits

0x6dc6,	// (0x0001c3b4) main_pane_set_t2_copy1

0xdec7,	// (0x000234b5) main_pane_set_t3_copy1

0xded5,	// (0x000234c3) main_pane_set_t4_copy1

0x6de5,	// (0x0001c3d3) set_content_pane_g1_copy1_ParamLimits

0x6de5,	// (0x0001c3d3) set_content_pane_g1_copy1

0xdee3,	// (0x000234d1) setting_code_pane_copy1

0x6eee,	// (0x0001c4dc) setting_slider_graphic_pane_copy1

0x6eee,	// (0x0001c4dc) setting_slider_pane_copy1

0x6ef6,	// (0x0001c4e4) setting_text_pane_copy1

0x6ef6,	// (0x0001c4e4) setting_volume_pane_copy1

0xdee3,	// (0x000234d1) settings_code_pane_cp2_copy1

0xdeeb,	// (0x000234d9) settings_code_pane_cp_copy1_ParamLimits

0xdeeb,	// (0x000234d9) settings_code_pane_cp_copy1

0x93a5,	// (0x0001e993) volume_set_pane_copy1

0xdeff,	// (0x000234ed) volume_set_pane_g10_copy1

0xdf07,	// (0x000234f5) volume_set_pane_g1_copy1

0xdf0f,	// (0x000234fd) volume_set_pane_g2_copy1

0xdf17,	// (0x00023505) volume_set_pane_g3_copy1

0xdf1f,	// (0x0002350d) volume_set_pane_g4_copy1

0xdf27,	// (0x00023515) volume_set_pane_g5_copy1

0xdf2f,	// (0x0002351d) volume_set_pane_g6_copy1

0xdf37,	// (0x00023525) volume_set_pane_g7_copy1

0xdf3f,	// (0x0002352d) volume_set_pane_g8_copy1

0xdf47,	// (0x00023535) volume_set_pane_g9_copy1

0xc303,	// (0x000218f1) bg_set_opt_pane_cp_copy1_ParamLimits

0xc303,	// (0x000218f1) bg_set_opt_pane_cp_copy1

0x93ad,	// (0x0001e99b) setting_slider_pane_t1_copy1_ParamLimits

0x93ad,	// (0x0001e99b) setting_slider_pane_t1_copy1

0x93cc,	// (0x0001e9ba) setting_slider_pane_t2_copy1_ParamLimits

0x93cc,	// (0x0001e9ba) setting_slider_pane_t2_copy1

0x93e6,	// (0x0001e9d4) setting_slider_pane_t3_copy1_ParamLimits

0x93e6,	// (0x0001e9d4) setting_slider_pane_t3_copy1

0x93fe,	// (0x0001e9ec) slider_set_pane_copy1_ParamLimits

0x93fe,	// (0x0001e9ec) slider_set_pane_copy1

0xc803,	// (0x00021df1) set_opt_bg_pane_g1_copy2

0xc80b,	// (0x00021df9) set_opt_bg_pane_g2_copy2

0x6f62,	// (0x0001c550) set_opt_bg_pane_g3_copy2

0xc81b,	// (0x00021e09) set_opt_bg_pane_g4_copy2

0xc823,	// (0x00021e11) set_opt_bg_pane_g5_copy2

0xc82b,	// (0x00021e19) set_opt_bg_pane_g6_copy2

0xdf4f,	// (0x0002353d) set_opt_bg_pane_g7_copy2

0x6f74,	// (0x0001c562) set_opt_bg_pane_g8_copy2

0x6f7e,	// (0x0001c56c) set_opt_bg_pane_g9_copy2

0x9414,	// (0x0001ea02) aid_size_touch_slider_mark_copy1_ParamLimits

0x9414,	// (0x0001ea02) aid_size_touch_slider_mark_copy1

0xdf57,	// (0x00023545) slider_set_pane_g1_copy1

0xf383,	// (0x00024971) slider_set_pane_g2_copy1

0x8c45,	// (0x0001e233) slider_set_pane_g3_copy1_ParamLimits

0x8c45,	// (0x0001e233) slider_set_pane_g3_copy1

0x8c59,	// (0x0001e247) slider_set_pane_g4_copy1_ParamLimits

0x8c59,	// (0x0001e247) slider_set_pane_g4_copy1

0x8c71,	// (0x0001e25f) slider_set_pane_g5_copy1_ParamLimits

0x8c71,	// (0x0001e25f) slider_set_pane_g5_copy1

0x8c45,	// (0x0001e233) slider_set_pane_g6_copy1_ParamLimits

0x8c45,	// (0x0001e233) slider_set_pane_g6_copy1

0x9428,	// (0x0001ea16) slider_set_pane_g7_copy1_ParamLimits

0x9428,	// (0x0001ea16) slider_set_pane_g7_copy1

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp2_copy1

0xdf60,	// (0x0002354e) setting_slider_graphic_pane_g1_copy1

0xdf69,	// (0x00023557) setting_slider_graphic_pane_t1_copy1

0xdf79,	// (0x00023567) setting_slider_graphic_pane_t2_copy1

0xdf89,	// (0x00023577) slider_set_pane_cp_copy1

0x6fca,	// (0x0001c5b8) input_focus_pane_cp1_copy1

0x6fd3,	// (0x0001c5c1) list_set_text_pane_copy1

0x6fdb,	// (0x0001c5c9) setting_text_pane_g1_copy1

0x6fe4,	// (0x0001c5d2) set_text_pane_t1_copy1

0x6fca,	// (0x0001c5b8) input_focus_pane_cp2_copy1

0x6fdb,	// (0x0001c5c9) setting_code_pane_g1_copy1

0x6fff,	// (0x0001c5ed) setting_code_pane_t1_copy1

0x700d,	// (0x0001c5fb) list_set_graphic_pane_copy1

0xc2a7,	// (0x00021895) bg_set_opt_pane_cp4_copy1

0xcdd8,	// (0x000223c6) list_set_graphic_pane_g1_copy1_ParamLimits

0xcdd8,	// (0x000223c6) list_set_graphic_pane_g1_copy1

0x7021,	// (0x0001c60f) list_set_graphic_pane_g2_copy1

0xcdf0,	// (0x000223de) list_set_graphic_pane_t1_copy1_ParamLimits

0xcdf0,	// (0x000223de) list_set_graphic_pane_t1_copy1

0x3cd6,	// (0x000192c4) rs_clock_indi_pane_g1

0x7029,	// (0x0001c617) rs_clock_indi_pane_t1

0x7037,	// (0x0001c625) rs_indi_pane

0x703f,	// (0x0001c62d) rs_indi_pane_g1

0x7048,	// (0x0001c636) rs_indi_pane_g2

0x6d44,	// (0x0001c332) rs_indi_pane_g3

0x0002,

0xfea6,	// (0x00025494) rs_indi_pane_g

0xd04f,	// (0x0002263d) bg_popup_preview_window_pane_cp03

0x7051,	// (0x0001c63f) popup_fep_tooltip_window_t1

0xbacf,	// (0x000210bd) popup_note2_window_g2_ParamLimits

0xbacf,	// (0x000210bd) popup_note2_window_g2

0x0001,

0xfc3a,	// (0x00025228) popup_note2_window_g_ParamLimits

0xfc3a,	// (0x00025228) popup_note2_window_g

0x512f,	// (0x0001a71d) bg_popup_sub_pane_cp11_ParamLimits

0x513c,	// (0x0001a72a) cell_ai3_links_pane_g1_ParamLimits

0x5153,	// (0x0001a741) cell_ai3_links_pane_t1

0x6fe4,	// (0x0001c5d2) set_text_pane_t1_copy1_ParamLimits

0xcf91,	// (0x0002257f) cell_graphic_popup_pane_cp2_ParamLimits

0xcf91,	// (0x0002257f) cell_graphic_popup_pane_cp2

0xdf99,	// (0x00023587) cell_graphic_popup_pane_g1_cp2

0xc5a1,	// (0x00021b8f) cell_graphic_popup_pane_g2_cp2

0x7067,	// (0x0001c655) cell_graphic_popup_pane_g3_cp2

0xdfa1,	// (0x0002358f) cell_graphic_popup_pane_t2_cp2

0xc5b2,	// (0x00021ba0) grid_highlight_pane_cp3_cp2

0xca7a,	// (0x00022068) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc73d,	// (0x00021d2b) main_tmo_pane_ParamLimits

0xbfc4,	// (0x000215b2) popup_tmo_big_image_note_window

0x66b3,	// (0x0001bca1) cell_ai5_widget_list_pane

0x66bb,	// (0x0001bca9) cell_ai5_widget_lrg_icon_pane

0xddab,	// (0x00023399) tmo_note_info_pane_t1_ParamLimits

0xddc0,	// (0x000233ae) tmo_note_info_pane_t2_ParamLimits

0xddd7,	// (0x000233c5) tmo_note_info_pane_t3_ParamLimits

0x6cc1,	// (0x0001c2af) tmo_note_info_pane_t4_ParamLimits

0x6cd3,	// (0x0001c2c1) tmo_note_info_pane_t5_ParamLimits

0xfe94,	// (0x00025482) tmo_note_info_pane_t_ParamLimits

0x6df1,	// (0x0001c3df) settings_container_pane_ParamLimits

0xdf91,	// (0x0002357f) indicator_popup_pane_cp5

0xdf91,	// (0x0002357f) indicator_popup_pane_cp6

0x700d,	// (0x0001c5fb) list_set_graphic_pane_copy1_ParamLimits

0xc293,	// (0x00021881) bg_popup_window_pane_cp23

0x707d,	// (0x0001c66b) popup_tmo_big_image_note_window_g1

0x7086,	// (0x0001c674) popup_tmo_big_image_note_window_t1

0x7096,	// (0x0001c684) popup_tmo_big_image_note_window_t2

0x70a6,	// (0x0001c694) popup_tmo_big_image_note_window_t3

0x0002,

0xfead,	// (0x0002549b) popup_tmo_big_image_note_window_t

0x3cd6,	// (0x000192c4) cell_ai5_widget_lrg_icon_pane_g1

0x70b6,	// (0x0001c6a4) cell_ai5_widget_lrg_icon_pane_t1

0x70c4,	// (0x0001c6b2) cell_ai5_widget_list_row_pane_ParamLimits

0x70c4,	// (0x0001c6b2) cell_ai5_widget_list_row_pane

0x70db,	// (0x0001c6c9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x70db,	// (0x0001c6c9) cell_ai5_widget_list_row_pane_g1

0xdfaf,	// (0x0002359d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdfaf,	// (0x0002359d) cell_ai5_widget_list_row_pane_t1

0x7113,	// (0x0001c701) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7113,	// (0x0001c701) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb4,	// (0x000254a2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb4,	// (0x000254a2) cell_ai5_widget_list_row_pane_t

0xe245,	// (0x00023833) main_fep_vtchi_ss_pane

0x7163,	// (0x0001c751) popup_fep_char_pre_window

0x716b,	// (0x0001c759) popup_fep_ituss_window

0xe00a,	// (0x000235f8) popup_fep_vkbss_window

0xc8ed,	// (0x00021edb) grid_vkbss_keypad_pane_ParamLimits

0xc8ed,	// (0x00021edb) grid_vkbss_keypad_pane

0x71d7,	// (0x0001c7c5) ituss_keypad_pane

0xf395,	// (0x00024983) aid_vkbss_key_offset_ParamLimits

0xf395,	// (0x00024983) aid_vkbss_key_offset

0x943e,	// (0x0001ea2c) cell_vkbss_key_pane_ParamLimits

0x943e,	// (0x0001ea2c) cell_vkbss_key_pane

0x71e7,	// (0x0001c7d5) bg_cell_vkbss_key_g1_ParamLimits

0x71e7,	// (0x0001c7d5) bg_cell_vkbss_key_g1

0xe017,	// (0x00023605) cell_vkbss_key_3p_pane_ParamLimits

0xe017,	// (0x00023605) cell_vkbss_key_3p_pane

0xe04d,	// (0x0002363b) cell_vkbss_key_g1_ParamLimits

0xe04d,	// (0x0002363b) cell_vkbss_key_g1

0xe083,	// (0x00023671) cell_vkbss_key_t1_ParamLimits

0xe083,	// (0x00023671) cell_vkbss_key_t1

0xf3a1,	// (0x0002498f) cell_ituss_key_pane_ParamLimits

0xf3a1,	// (0x0002498f) cell_ituss_key_pane

0x72bb,	// (0x0001c8a9) bg_cell_ituss_key_g1_ParamLimits

0x72bb,	// (0x0001c8a9) bg_cell_ituss_key_g1

0x72c7,	// (0x0001c8b5) cell_ituss_key_pane_g1_ParamLimits

0x72c7,	// (0x0001c8b5) cell_ituss_key_pane_g1

0xf3b2,	// (0x000249a0) cell_ituss_key_pane_g2_ParamLimits

0xf3b2,	// (0x000249a0) cell_ituss_key_pane_g2

0x0005,

0xfebb,	// (0x000254a9) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x000254a9) cell_ituss_key_pane_g

0xf436,	// (0x00024a24) cell_ituss_key_t1_ParamLimits

0xf436,	// (0x00024a24) cell_ituss_key_t1

0xf470,	// (0x00024a5e) cell_ituss_key_t2_ParamLimits

0xf470,	// (0x00024a5e) cell_ituss_key_t2

0xf4a2,	// (0x00024a90) cell_ituss_key_t3_ParamLimits

0xf4a2,	// (0x00024a90) cell_ituss_key_t3

0xf4d3,	// (0x00024ac1) cell_ituss_key_t4_ParamLimits

0xf4d3,	// (0x00024ac1) cell_ituss_key_t4

0x0004,

0xfec8,	// (0x000254b6) cell_ituss_key_t_ParamLimits

0xfec8,	// (0x000254b6) cell_ituss_key_t

0xe0df,	// (0x000236cd) cell_vkbss_key_3p_pane_g1

0xe0e7,	// (0x000236d5) cell_vkbss_key_3p_pane_g2

0xe0ef,	// (0x000236dd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed3,	// (0x000254c1) cell_vkbss_key_3p_pane_g

0xd04f,	// (0x0002263d) bg_popup_fep_char_preview_window_cp02

0x7305,	// (0x0001c8f3) popup_fep_char_pre_window_t1

0xdc33,	// (0x00023221) main_ai5_sk_pane

0x6d4d,	// (0x0001c33b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6d59,	// (0x0001c347) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4534,	// (0x00019b22) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6d6e,	// (0x0001c35c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9f,	// (0x0002548d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6d7a,	// (0x0001c368) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc73d,	// (0x00021d2b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe0f7,	// (0x000236e5) main_ai5_sk_pane_g1

0xac01,	// (0x000201ef) popup_query_code_window_g1

0xdffb,	// (0x000235e9) popup_fep_vkb_icf_pane

0x71ae,	// (0x0001c79c) popup_fep_vtchi_icf_pane

0x731c,	// (0x0001c90a) bg_icf_pane

0x731c,	// (0x0001c90a) list_vkb_icf_pane

0x7328,	// (0x0001c916) bg_icf_pane_cp01

0x733b,	// (0x0001c929) vtchi_icf_list_pane

0xe14c,	// (0x0002373a) list_vkb_icf_pane_t1_ParamLimits

0xe14c,	// (0x0002373a) list_vkb_icf_pane_t1

0x73bd,	// (0x0001c9ab) vtchi_icf_list_pane_t1_ParamLimits

0x73bd,	// (0x0001c9ab) vtchi_icf_list_pane_t1

0x716b,	// (0x0001c759) popup_fep_ituss_window_ParamLimits

0x71ae,	// (0x0001c79c) popup_fep_vtchi_icf_pane_ParamLimits

0x71d7,	// (0x0001c7c5) ituss_keypad_pane_ParamLimits

0xf38b,	// (0x00024979) ituss_sks_pane

0x731c,	// (0x0001c90a) bg_icf_pane_ParamLimits

0xdfe0,	// (0x000235ce) icf_edit_indi_pane_ParamLimits

0xdfe0,	// (0x000235ce) icf_edit_indi_pane

0x731c,	// (0x0001c90a) list_vkb_icf_pane_ParamLimits

0x7328,	// (0x0001c916) bg_icf_pane_cp01_ParamLimits

0x7156,	// (0x0001c744) icf_edit_indi_pane_cp01_ParamLimits

0x7156,	// (0x0001c744) icf_edit_indi_pane_cp01

0x733b,	// (0x0001c929) vtchi_query_pane

0x64b8,	// (0x0001baa6) icf_edit_indi_pane_g1_ParamLimits

0x64b8,	// (0x0001baa6) icf_edit_indi_pane_g1

0xe164,	// (0x00023752) icf_edit_indi_pane_g2_ParamLimits

0xe164,	// (0x00023752) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x000254ec) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x000254ec) icf_edit_indi_pane_g

0xe178,	// (0x00023766) icf_edit_indi_pane_t1

0x73de,	// (0x0001c9cc) bg_input_focus_pane_cp042

0xc615,	// (0x00021c03) vtchi_button_pane

0x73e7,	// (0x0001c9d5) vtchi_query_pane_t1

0x73f5,	// (0x0001c9e3) vtchi_query_pane_t2

0x7403,	// (0x0001c9f1) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x000254db) vtchi_query_pane_t

0xe245,	// (0x00023833) bg_button_pane_cp13

0x7411,	// (0x0001c9ff) vtchi_button_pane_g1

0xf516,	// (0x00024b04) ituss_sks_pane_g1

0xf521,	// (0x00024b0f) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x000254e2) ituss_sks_pane_g

0x7419,	// (0x0001ca07) ituss_sks_pane_t1

0x7427,	// (0x0001ca15) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x000254e7) ituss_sks_pane_t

0x36fd,	// (0x00018ceb) indicator_nsta_pane_cp_g1

0x3706,	// (0x00018cf4) indicator_nsta_pane_cp_g2

0x370e,	// (0x00018cfc) indicator_nsta_pane_cp_g3

0x3716,	// (0x00018d04) indicator_nsta_pane_cp_g4

0x3706,	// (0x00018cf4) indicator_nsta_pane_cp_g5

0x370e,	// (0x00018cfc) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x00025066) indicator_nsta_pane_cp_g

0xda12,	// (0x00023000) cell_graphic2_pane_t2_ParamLimits

0xda12,	// (0x00023000) cell_graphic2_pane_t2

0x0001,

0xfd8a,	// (0x00025378) cell_graphic2_pane_t_ParamLimits

0xfd8a,	// (0x00025378) cell_graphic2_pane_t

0xda49,	// (0x00023037) cell_graphic2_control_pane_t1

0xa27f,	// (0x0001f86d) signal_pane_g3_ParamLimits

0xa27f,	// (0x0001f86d) signal_pane_g3

0xa293,	// (0x0001f881) signal_pane_g4_ParamLimits

0xa293,	// (0x0001f881) signal_pane_g4

0x7125,	// (0x0001c713) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7125,	// (0x0001c713) cell_ai5_widget_list_row_pane_t3

0x72db,	// (0x0001c8c9) cell_ituss_key_pane_t1_ParamLimits

0x72db,	// (0x0001c8c9) cell_ituss_key_pane_t1

0x130e,	// (0x000168fc) form_field_data_wide_pane_vc_t2_ParamLimits

0x130e,	// (0x000168fc) form_field_data_wide_pane_vc_t2

0x1322,	// (0x00016910) form_field_data_wide_pane_vc_t3_ParamLimits

0x1322,	// (0x00016910) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x00024db2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x00024db2) form_field_data_wide_pane_vc_t

0x33a7,	// (0x00018995) form_field_slider_wide_pane_vc_t3_ParamLimits

0x33a7,	// (0x00018995) form_field_slider_wide_pane_vc_t3

0x3485,	// (0x00018a73) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3485,	// (0x00018a73) form_field_popup_wide_pane_vc_t2

0x349c,	// (0x00018a8a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x349c,	// (0x00018a8a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00025055) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00025055) form_field_popup_wide_pane_vc_t

0x920f,	// (0x0001e7fd) aid_fshwr2_btn_pane_ParamLimits

0x9223,	// (0x0001e811) aid_fshwr2_syb_pane_ParamLimits

0x9237,	// (0x0001e825) aid_fshwr2_txt_pane_ParamLimits

0xf345,	// (0x00024933) fshwr2_bg_pane_ParamLimits

0x9247,	// (0x0001e835) fshwr2_func_candi_pane_ParamLimits

0x9267,	// (0x0001e855) fshwr2_hwr_syb_pane_ParamLimits

0x9289,	// (0x0001e877) fshwr2_icf_pane_ParamLimits

0x3318,	// (0x00018906) list_double_graphic_pane_vc_g4_ParamLimits

0x3318,	// (0x00018906) list_double_graphic_pane_vc_g4

0xf3d2,	// (0x000249c0) cell_ituss_key_pane_g3_ParamLimits

0xf3d2,	// (0x000249c0) cell_ituss_key_pane_g3

0xf504,	// (0x00024af2) cell_ituss_key_t5_ParamLimits

0xf504,	// (0x00024af2) cell_ituss_key_t5

0xe00a,	// (0x000235f8) popup_fep_vkbss_window_ParamLimits

0x6646,	// (0x0001bc34) aid_cell_ai5_quarter

0xe178,	// (0x00023766) icf_edit_indi_pane_t1_ParamLimits

0x976c,	// (0x0001ed5a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x976c,	// (0x0001ed5a) aid_tch_indicator_popup_pane_cp2

0x977f,	// (0x0001ed6d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x977f,	// (0x0001ed6d) aid_tch_query_popup_data_pane_cp2

0x16c4,	// (0x00016cb2) aid_tch_query_popup_pane_ParamLimits

0x16c4,	// (0x00016cb2) aid_tch_query_popup_pane

0x16c4,	// (0x00016cb2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x16c4,	// (0x00016cb2) aid_tch_query_popup_data_pane_cp1

0xc8ed,	// (0x00021edb) cell_fshwr2_syb_bg_pane_ParamLimits

0x937c,	// (0x0001e96a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x938f,	// (0x0001e97d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdffb,	// (0x000235e9) popup_fep_vkb_icf_pane_ParamLimits

0x9175,	// (0x0001e763) bg_popup_fep_char_preview_window_g10

0x677b,	// (0x0001bd69) cell_ai5_widget_pane_g11_ParamLimits

0x677b,	// (0x0001bd69) cell_ai5_widget_pane_g11

0x6787,	// (0x0001bd75) cell_ai5_widget_pane_g12_ParamLimits

0x6787,	// (0x0001bd75) cell_ai5_widget_pane_g12

0x6793,	// (0x0001bd81) cell_ai5_widget_pane_g13_ParamLimits

0x6793,	// (0x0001bd81) cell_ai5_widget_pane_g13

0x68c2,	// (0x0001beb0) cell_ai5_widget_pane_t11_ParamLimits

0x68c2,	// (0x0001beb0) cell_ai5_widget_pane_t11

0x68d4,	// (0x0001bec2) cell_ai5_widget_pane_t12_ParamLimits

0x68d4,	// (0x0001bec2) cell_ai5_widget_pane_t12

0xf3de,	// (0x000249cc) cell_ituss_key_pane_g4_ParamLimits

0xf3de,	// (0x000249cc) cell_ituss_key_pane_g4

0xf3fa,	// (0x000249e8) cell_ituss_key_pane_g5_ParamLimits

0xf3fa,	// (0x000249e8) cell_ituss_key_pane_g5

0xf416,	// (0x00024a04) cell_ituss_key_pane_g6_ParamLimits

0xf416,	// (0x00024a04) cell_ituss_key_pane_g6

0x1160,	// (0x0001674e) bg_icf_pane_g1

0xe100,	// (0x000236ee) bg_icf_pane_g2

0xe10a,	// (0x000236f8) bg_icf_pane_g3

0xe112,	// (0x00023700) bg_icf_pane_g4

0xe11c,	// (0x0002370a) bg_icf_pane_g5

0xe126,	// (0x00023714) bg_icf_pane_g6

0xe130,	// (0x0002371e) bg_icf_pane_g7

0xe138,	// (0x00023726) bg_icf_pane_g8

0xe142,	// (0x00023730) bg_icf_pane_g9

0x0008,

0xfeda,	// (0x000254c8) bg_icf_pane_g

0x71c4,	// (0x0001c7b2) popup_hyb_candi_window_ParamLimits

0x71c4,	// (0x0001c7b2) popup_hyb_candi_window

0x1280,	// (0x0001686e) bg_popup_sub_pane_cp01_ParamLimits

0x1280,	// (0x0001686e) bg_popup_sub_pane_cp01

0x7462,	// (0x0001ca50) entry_hyb_candi_pane_ParamLimits

0x7462,	// (0x0001ca50) entry_hyb_candi_pane

0x7471,	// (0x0001ca5f) grid_hyb_candi_pane_ParamLimits

0x7471,	// (0x0001ca5f) grid_hyb_candi_pane

0x7486,	// (0x0001ca74) grid_hyb_phrase_pane_ParamLimits

0x7486,	// (0x0001ca74) grid_hyb_phrase_pane

0x7495,	// (0x0001ca83) cell_hyb_candi_pane_ParamLimits

0x7495,	// (0x0001ca83) cell_hyb_candi_pane

0x74b8,	// (0x0001caa6) cell_hyb_candi_scroll_pane

0xcbfd,	// (0x000221eb) cell_hyb_candi_pane_g1

0x74c1,	// (0x0001caaf) cell_hyb_candi_pane_t1

0x74cf,	// (0x0001cabd) cell_hyb_phrase_pane

0xcbfd,	// (0x000221eb) cell_hyb_phrase_pane_g1

0x74d8,	// (0x0001cac6) cell_hyb_phrase_pane_t1

0x74e6,	// (0x0001cad4) entry_hyb_candi_pane_t1

0xd04f,	// (0x0002263d) input_focus_pane_cp06

0x74f4,	// (0x0001cae2) cell_hyb_candi_scroll_pane_g1

0x74fc,	// (0x0001caea) cell_hyb_candi_scroll_pane_g1_aid

0x7504,	// (0x0001caf2) cell_hyb_candi_scroll_pane_g2

0x750c,	// (0x0001cafa) cell_hyb_candi_scroll_pane_g2_aid

0x7514,	// (0x0001cb02) cell_hyb_candi_scroll_pane_g3

0x751c,	// (0x0001cb0a) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
