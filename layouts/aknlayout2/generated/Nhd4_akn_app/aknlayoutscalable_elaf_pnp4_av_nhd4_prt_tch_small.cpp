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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00020021 };

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
0x654c,	// (0x0002656d) Screen

0x6558,	// (0x00026579) application_window_ParamLimits

0x6558,	// (0x00026579) application_window

0x186a,	// (0x0002188b) screen_g1

0x65b4,	// (0x000265d5) area_bottom_pane_ParamLimits

0x65b4,	// (0x000265d5) area_bottom_pane

0x6674,	// (0x00026695) area_top_pane_ParamLimits

0x6674,	// (0x00026695) area_top_pane

0x6708,	// (0x00026729) main_pane_ParamLimits

0x6708,	// (0x00026729) main_pane

0x1874,	// (0x00021895) misc_graphics

0x80c4,	// (0x000280e5) battery_pane_ParamLimits

0x80c4,	// (0x000280e5) battery_pane

0xa287,	// (0x0002a2a8) bg_status_flat_pane_g8

0xa28f,	// (0x0002a2b0) bg_status_flat_pane_g9

0x818c,	// (0x000281ad) context_pane_ParamLimits

0x818c,	// (0x000281ad) context_pane

0x82a2,	// (0x000282c3) navi_pane_ParamLimits

0x82a2,	// (0x000282c3) navi_pane

0x8326,	// (0x00028347) signal_pane_ParamLimits

0x8326,	// (0x00028347) signal_pane

0x0008,

0xf840,	// (0x0002f861) bg_status_flat_pane_g

0x8393,	// (0x000283b4) status_pane_g1_ParamLimits

0x8393,	// (0x000283b4) status_pane_g1

0x83a7,	// (0x000283c8) status_pane_g2_ParamLimits

0x83a7,	// (0x000283c8) status_pane_g2

0x83b3,	// (0x000283d4) status_pane_g3_ParamLimits

0x83b3,	// (0x000283d4) status_pane_g3

0x0004,

0xf76c,	// (0x0002f78d) status_pane_g_ParamLimits

0xf76c,	// (0x0002f78d) status_pane_g

0x83e7,	// (0x00028408) title_pane_ParamLimits

0x83e7,	// (0x00028408) title_pane

0x8424,	// (0x00028445) uni_indicator_pane_ParamLimits

0x8424,	// (0x00028445) uni_indicator_pane

0x2768,	// (0x00022789) bg_list_pane_ParamLimits

0x2768,	// (0x00022789) bg_list_pane

0x5bcd,	// (0x00025bee) find_pane

0x1eba,	// (0x00021edb) listscroll_app_pane_ParamLimits

0x1eba,	// (0x00021edb) listscroll_app_pane

0x2788,	// (0x000227a9) listscroll_form_pane

0x5bd5,	// (0x00025bf6) listscroll_gen_pane_ParamLimits

0x5bd5,	// (0x00025bf6) listscroll_gen_pane

0x7aa5,	// (0x00027ac6) listscroll_set_pane

0x6fdd,	// (0x00026ffe) main_idle_act_pane

0x261c,	// (0x0002263d) main_idle_trad_pane

0x261c,	// (0x0002263d) main_list_empty_pane

0x1eba,	// (0x00021edb) main_midp_pane

0x27a2,	// (0x000227c3) main_pane_g1_ParamLimits

0x27a2,	// (0x000227c3) main_pane_g1

0x7aad,	// (0x00027ace) popup_ai_message_window_ParamLimits

0x7aad,	// (0x00027ace) popup_ai_message_window

0x7b51,	// (0x00027b72) popup_fep_china_uni_window_ParamLimits

0x7b51,	// (0x00027b72) popup_fep_china_uni_window

0x7bab,	// (0x00027bcc) popup_fep_japan_candidate_window_ParamLimits

0x7bab,	// (0x00027bcc) popup_fep_japan_candidate_window

0x7bc9,	// (0x00027bea) popup_fep_japan_predictive_window_ParamLimits

0x7bc9,	// (0x00027bea) popup_fep_japan_predictive_window

0x7bf9,	// (0x00027c1a) popup_find_window

0x7c06,	// (0x00027c27) popup_grid_graphic_window_ParamLimits

0x7c06,	// (0x00027c27) popup_grid_graphic_window

0x7c30,	// (0x00027c51) popup_large_graphic_colour_window

0x7c56,	// (0x00027c77) popup_menu_window_ParamLimits

0x7c56,	// (0x00027c77) popup_menu_window

0x7e12,	// (0x00027e33) popup_note_image_window

0x7dfe,	// (0x00027e1f) popup_note_wait_window_ParamLimits

0x7dfe,	// (0x00027e1f) popup_note_wait_window

0x7dfe,	// (0x00027e1f) popup_note_window_ParamLimits

0x7dfe,	// (0x00027e1f) popup_note_window

0x7e68,	// (0x00027e89) popup_query_code_window_ParamLimits

0x7e68,	// (0x00027e89) popup_query_code_window

0x7e7c,	// (0x00027e9d) popup_query_data_code_window_ParamLimits

0x7e7c,	// (0x00027e9d) popup_query_data_code_window

0x7e99,	// (0x00027eba) popup_query_data_window_ParamLimits

0x7e99,	// (0x00027eba) popup_query_data_window

0x7eb5,	// (0x00027ed6) popup_query_sat_info_window_ParamLimits

0x7eb5,	// (0x00027ed6) popup_query_sat_info_window

0x7eee,	// (0x00027f0f) popup_snote_single_graphic_window_ParamLimits

0x7eee,	// (0x00027f0f) popup_snote_single_graphic_window

0x7eee,	// (0x00027f0f) popup_snote_single_text_window_ParamLimits

0x7eee,	// (0x00027f0f) popup_snote_single_text_window

0x7f03,	// (0x00027f24) popup_sub_window_general

0x8033,	// (0x00028054) popup_window_general_ParamLimits

0x8033,	// (0x00028054) popup_window_general

0x8048,	// (0x00028069) power_save_pane

0x790c,	// (0x0002792d) control_pane_g1_ParamLimits

0x790c,	// (0x0002792d) control_pane_g1

0x7933,	// (0x00027954) control_pane_g2_ParamLimits

0x7933,	// (0x00027954) control_pane_g2

0x2752,	// (0x00022773) control_pane_g3_ParamLimits

0x2752,	// (0x00022773) control_pane_g3

0x0007,

0xf754,	// (0x0002f775) control_pane_g_ParamLimits

0xf754,	// (0x0002f775) control_pane_g

0x79a4,	// (0x000279c5) control_pane_t1_ParamLimits

0x79a4,	// (0x000279c5) control_pane_t1

0x79fa,	// (0x00027a1b) control_pane_t2_ParamLimits

0x79fa,	// (0x00027a1b) control_pane_t2

0x0002,

0xf765,	// (0x0002f786) control_pane_t_ParamLimits

0xf765,	// (0x0002f786) control_pane_t

0x7865,	// (0x00027886) navi_navi_volume_pane_cp1

0x786d,	// (0x0002788e) status_small_icon_pane

0x271e,	// (0x0002273f) status_small_pane_g1_ParamLimits

0x271e,	// (0x0002273f) status_small_pane_g1

0x7875,	// (0x00027896) status_small_pane_g2_ParamLimits

0x7875,	// (0x00027896) status_small_pane_g2

0x7881,	// (0x000278a2) status_small_pane_g3_ParamLimits

0x7881,	// (0x000278a2) status_small_pane_g3

0x788d,	// (0x000278ae) status_small_pane_g4_ParamLimits

0x788d,	// (0x000278ae) status_small_pane_g4

0x7899,	// (0x000278ba) status_small_pane_g5_ParamLimits

0x7899,	// (0x000278ba) status_small_pane_g5

0x78a7,	// (0x000278c8) status_small_pane_g6_ParamLimits

0x78a7,	// (0x000278c8) status_small_pane_g6

0x0007,

0xf743,	// (0x0002f764) status_small_pane_g_ParamLimits

0xf743,	// (0x0002f764) status_small_pane_g

0x78d6,	// (0x000278f7) status_small_pane_t1

0x78f8,	// (0x00027919) status_small_wait_pane_ParamLimits

0x78f8,	// (0x00027919) status_small_wait_pane

0x73c6,	// (0x000273e7) aid_levels_signal_ParamLimits

0x73c6,	// (0x000273e7) aid_levels_signal

0x73d8,	// (0x000273f9) signal_pane_g1_ParamLimits

0x73d8,	// (0x000273f9) signal_pane_g1

0x73ed,	// (0x0002740e) signal_pane_g2_ParamLimits

0x73ed,	// (0x0002740e) signal_pane_g2

0x0003,

0xf6d4,	// (0x0002f6f5) signal_pane_g_ParamLimits

0xf6d4,	// (0x0002f6f5) signal_pane_g

0x2222,	// (0x00022243) context_pane_g1

0x6949,	// (0x0002696a) title_pane_g1

0x6973,	// (0x00026994) title_pane_t1

0x188a,	// (0x000218ab) title_pane_t2

0x18b0,	// (0x000218d1) title_pane_t3

0x0002,

0xf532,	// (0x0002f553) title_pane_t

0x843c,	// (0x0002845d) aid_levels_battery_ParamLimits

0x843c,	// (0x0002845d) aid_levels_battery

0x8450,	// (0x00028471) battery_pane_g1_ParamLimits

0x8450,	// (0x00028471) battery_pane_g1

0x8466,	// (0x00028487) battery_pane_g2_ParamLimits

0x8466,	// (0x00028487) battery_pane_g2

0x0001,

0xf777,	// (0x0002f798) battery_pane_g_ParamLimits

0xf777,	// (0x0002f798) battery_pane_g

0xabab,	// (0x0002abcc) uni_indicator_pane_g1

0xabbe,	// (0x0002abdf) uni_indicator_pane_g2

0xabd0,	// (0x0002abf1) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x0002f909) uni_indicator_pane_g

0x24bf,	// (0x000224e0) navi_icon_pane_ParamLimits

0x24bf,	// (0x000224e0) navi_icon_pane

0x2414,	// (0x00022435) navi_midp_pane

0x24db,	// (0x000224fc) navi_navi_pane

0x24e5,	// (0x00022506) navi_text_pane_ParamLimits

0x24e5,	// (0x00022506) navi_text_pane

0x186a,	// (0x0002188b) status_small_wait_pane_g1

0x1b1b,	// (0x00021b3c) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0002f904) status_small_wait_pane_g

0xa8d2,	// (0x0002a8f3) navi_navi_icon_text_pane

0xa8da,	// (0x0002a8fb) navi_navi_pane_g1_ParamLimits

0xa8da,	// (0x0002a8fb) navi_navi_pane_g1

0xa8ec,	// (0x0002a90d) navi_navi_pane_g2_ParamLimits

0xa8ec,	// (0x0002a90d) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x0002f8d2) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x0002f8d2) navi_navi_pane_g

0xa8fe,	// (0x0002a91f) navi_navi_tabs_pane

0xa907,	// (0x0002a928) navi_navi_text_pane

0xa8d2,	// (0x0002a8f3) navi_navi_volume_pane

0xa8ae,	// (0x0002a8cf) navi_text_pane_t1

0xa8a2,	// (0x0002a8c3) navi_icon_pane_g1

0xa7f5,	// (0x0002a816) navi_navi_text_pane_t1

0x8ff4,	// (0x00029015) navi_navi_volume_pane_g1

0x8ffc,	// (0x0002901d) volume_small_pane

0xa75b,	// (0x0002a77c) navi_navi_icon_text_pane_g1

0xa763,	// (0x0002a784) navi_navi_icon_text_pane_t1

0x24db,	// (0x000224fc) navi_tabs_2_long_pane

0x24db,	// (0x000224fc) navi_tabs_2_pane

0x24db,	// (0x000224fc) navi_tabs_3_long_pane

0x24db,	// (0x000224fc) navi_tabs_3_pane

0x24db,	// (0x000224fc) navi_tabs_4_pane

0x8fd4,	// (0x00028ff5) tabs_2_active_pane_ParamLimits

0x8fd4,	// (0x00028ff5) tabs_2_active_pane

0x8fe4,	// (0x00029005) tabs_2_passive_pane_ParamLimits

0x8fe4,	// (0x00029005) tabs_2_passive_pane

0x8fa2,	// (0x00028fc3) tabs_3_active_pane_ParamLimits

0x8fa2,	// (0x00028fc3) tabs_3_active_pane

0x8fb2,	// (0x00028fd3) tabs_3_passive_pane_ParamLimits

0x8fb2,	// (0x00028fd3) tabs_3_passive_pane

0x8fc3,	// (0x00028fe4) tabs_3_passive_pane_cp_ParamLimits

0x8fc3,	// (0x00028fe4) tabs_3_passive_pane_cp

0x8f5e,	// (0x00028f7f) tabs_4_active_pane_ParamLimits

0x8f5e,	// (0x00028f7f) tabs_4_active_pane

0x8f6f,	// (0x00028f90) tabs_4_passive_pane_ParamLimits

0x8f6f,	// (0x00028f90) tabs_4_passive_pane

0x8f80,	// (0x00028fa1) tabs_4_passive_pane_cp_ParamLimits

0x8f80,	// (0x00028fa1) tabs_4_passive_pane_cp

0x8f91,	// (0x00028fb2) tabs_4_passive_pane_cp2_ParamLimits

0x8f91,	// (0x00028fb2) tabs_4_passive_pane_cp2

0x8f3a,	// (0x00028f5b) tabs_2_long_active_pane_ParamLimits

0x8f3a,	// (0x00028f5b) tabs_2_long_active_pane

0x8f4c,	// (0x00028f6d) tabs_2_long_passive_pane_ParamLimits

0x8f4c,	// (0x00028f6d) tabs_2_long_passive_pane

0x8ef5,	// (0x00028f16) tabs_3_long_active_pane_ParamLimits

0x8ef5,	// (0x00028f16) tabs_3_long_active_pane

0x8f0e,	// (0x00028f2f) tabs_3_long_passive_pane_ParamLimits

0x8f0e,	// (0x00028f2f) tabs_3_long_passive_pane

0x8f21,	// (0x00028f42) tabs_3_long_passive_pane_cp_ParamLimits

0x8f21,	// (0x00028f42) tabs_3_long_passive_pane_cp

0x8e9b,	// (0x00028ebc) volume_small_pane_g1

0x8ea4,	// (0x00028ec5) volume_small_pane_g2

0x8ead,	// (0x00028ece) volume_small_pane_g3

0x8eb6,	// (0x00028ed7) volume_small_pane_g4

0x8ebf,	// (0x00028ee0) volume_small_pane_g5

0x8ec8,	// (0x00028ee9) volume_small_pane_g6

0x8ed1,	// (0x00028ef2) volume_small_pane_g7

0x8eda,	// (0x00028efb) volume_small_pane_g8

0x8ee3,	// (0x00028f04) volume_small_pane_g9

0x8eec,	// (0x00028f0d) volume_small_pane_g10

0x0009,

0xf87d,	// (0x0002f89e) volume_small_pane_g

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp2_ParamLimits

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp2

0x69db,	// (0x000269fc) tabs_3_active_pane_g1

0x69e3,	// (0x00026a04) tabs_3_active_pane_t1

0x18d0,	// (0x000218f1) bg_passive_tab_pane_cp2_ParamLimits

0x18d0,	// (0x000218f1) bg_passive_tab_pane_cp2

0x69db,	// (0x000269fc) tabs_3_passive_pane_g1

0x69e3,	// (0x00026a04) tabs_3_passive_pane_t1

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp3_ParamLimits

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp3

0x69f5,	// (0x00026a16) tabs_4_active_pane_g1

0x69fd,	// (0x00026a1e) tabs_4_active_pane_t1

0x18d0,	// (0x000218f1) bg_passive_tab_pane_cp3_ParamLimits

0x18d0,	// (0x000218f1) bg_passive_tab_pane_cp3

0x69f5,	// (0x00026a16) tabs_4_1_passive_pane_g1

0x69fd,	// (0x00026a1e) tabs_4_1_passive_pane_t1

0x1eba,	// (0x00021edb) list_highlight_pane_cp2

0xae13,	// (0x0002ae34) list_set_pane_ParamLimits

0xae13,	// (0x0002ae34) list_set_pane

0xaeb5,	// (0x0002aed6) main_pane_set_t1_ParamLimits

0xaeb5,	// (0x0002aed6) main_pane_set_t1

0xaed5,	// (0x0002aef6) main_pane_set_t2_ParamLimits

0xaed5,	// (0x0002aef6) main_pane_set_t2

0xaee9,	// (0x0002af0a) main_pane_set_t3_ParamLimits

0xaee9,	// (0x0002af0a) main_pane_set_t3

0xaefb,	// (0x0002af1c) main_pane_set_t4_ParamLimits

0xaefb,	// (0x0002af1c) main_pane_set_t4

0x0003,

0xf94d,	// (0x0002f96e) main_pane_set_t_ParamLimits

0xf94d,	// (0x0002f96e) main_pane_set_t

0xaf0d,	// (0x0002af2e) setting_code_pane

0xaf19,	// (0x0002af3a) setting_slider_graphic_pane

0xaf19,	// (0x0002af3a) setting_slider_pane

0xaf19,	// (0x0002af3a) setting_text_pane

0xaf19,	// (0x0002af3a) setting_volume_pane

0x6a0f,	// (0x00026a30) volume_set_pane

0x18d0,	// (0x000218f1) bg_set_opt_pane_cp

0x6a17,	// (0x00026a38) setting_slider_pane_t1

0x6a30,	// (0x00026a51) setting_slider_pane_t2

0x6a4a,	// (0x00026a6b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002f55a) setting_slider_pane_t

0x6a62,	// (0x00026a83) slider_set_pane

0x1874,	// (0x00021895) bg_set_opt_pane_cp2

0x18de,	// (0x000218ff) setting_slider_graphic_pane_g1

0x6a78,	// (0x00026a99) setting_slider_graphic_pane_t1

0x6a88,	// (0x00026aa9) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002f561) setting_slider_graphic_pane_t

0x6a98,	// (0x00026ab9) slider_set_pane_cp

0x1874,	// (0x00021895) input_focus_pane_cp1

0xadd2,	// (0x0002adf3) list_set_text_pane

0x186a,	// (0x0002188b) setting_text_pane_g1

0x1874,	// (0x00021895) input_focus_pane_cp2

0x186a,	// (0x0002188b) setting_code_pane_g1

0x18e7,	// (0x00021908) setting_code_pane_t1

0x54d0,	// (0x000254f1) set_text_pane_t1_ParamLimits

0x54d0,	// (0x000254f1) set_text_pane_t1

0x1dd0,	// (0x00021df1) set_opt_bg_pane_g1

0x1dd8,	// (0x00021df9) set_opt_bg_pane_g2

0xadac,	// (0x0002adcd) set_opt_bg_pane_g3

0x1de8,	// (0x00021e09) set_opt_bg_pane_g4

0x1df0,	// (0x00021e11) set_opt_bg_pane_g5

0x1df8,	// (0x00021e19) set_opt_bg_pane_g6

0xadb6,	// (0x0002add7) set_opt_bg_pane_g7

0xadbe,	// (0x0002addf) set_opt_bg_pane_g8

0xadc8,	// (0x0002ade9) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x0002f95b) set_opt_bg_pane_g

0xad9f,	// (0x0002adc0) slider_set_pane_g1

0x9069,	// (0x0002908a) slider_set_pane_g2

0x0006,

0xf92b,	// (0x0002f94c) slider_set_pane_g

0x9005,	// (0x00029026) volume_set_pane_g1

0x900d,	// (0x0002902e) volume_set_pane_g2

0x9015,	// (0x00029036) volume_set_pane_g3

0x901d,	// (0x0002903e) volume_set_pane_g4

0x9025,	// (0x00029046) volume_set_pane_g5

0x902d,	// (0x0002904e) volume_set_pane_g6

0x9035,	// (0x00029056) volume_set_pane_g7

0x903d,	// (0x0002905e) volume_set_pane_g8

0x9045,	// (0x00029066) volume_set_pane_g9

0x904d,	// (0x0002906e) volume_set_pane_g10

0x0009,

0xf903,	// (0x0002f924) volume_set_pane_g

0x6aa0,	// (0x00026ac1) indicator_pane_ParamLimits

0x6aa0,	// (0x00026ac1) indicator_pane

0x6aac,	// (0x00026acd) main_idle_pane_g2_ParamLimits

0x6aac,	// (0x00026acd) main_idle_pane_g2

0x6ad4,	// (0x00026af5) main_pane_idle_g1_ParamLimits

0x6ad4,	// (0x00026af5) main_pane_idle_g1

0x190f,	// (0x00021930) popup_clock_digital_analogue_window_ParamLimits

0x190f,	// (0x00021930) popup_clock_digital_analogue_window

0x6ae1,	// (0x00026b02) soft_indicator_pane_ParamLimits

0x6ae1,	// (0x00026b02) soft_indicator_pane

0x6aed,	// (0x00026b0e) wallpaper_pane_ParamLimits

0x6aed,	// (0x00026b0e) wallpaper_pane

0x186a,	// (0x0002188b) wallpaper_pane_g1

0x6af9,	// (0x00026b1a) indicator_pane_g1_ParamLimits

0x6af9,	// (0x00026b1a) indicator_pane_g1

0xb1e5,	// (0x0002b206) navi_navi_icon_text_pane_srt_g1

0x193d,	// (0x0002195e) soft_indicator_pane_t1

0x1957,	// (0x00021978) aid_ps_area_pane

0x6b05,	// (0x00026b26) aid_ps_clock_pane

0x1968,	// (0x00021989) aid_ps_indicator_pane

0x1974,	// (0x00021995) indicator_ps_pane_ParamLimits

0x1974,	// (0x00021995) indicator_ps_pane

0x1983,	// (0x000219a4) power_save_pane_g1_ParamLimits

0x1983,	// (0x000219a4) power_save_pane_g1

0x198f,	// (0x000219b0) power_save_pane_g2_ParamLimits

0x198f,	// (0x000219b0) power_save_pane_g2

0x6568,	// (0x00026589) aid_navinavi_width_pane

0x1957,	// (0x00021978) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002f566) power_save_pane_g_ParamLimits

0xf545,	// (0x0002f566) power_save_pane_g

0x199d,	// (0x000219be) power_save_pane_t1_ParamLimits

0x199d,	// (0x000219be) power_save_pane_t1

0x6b05,	// (0x00026b26) aid_ps_clock_pane_ParamLimits

0x1968,	// (0x00021989) aid_ps_indicator_pane_ParamLimits

0x19af,	// (0x000219d0) power_save_pane_t4_ParamLimits

0x19af,	// (0x000219d0) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002f56b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002f56b) power_save_pane_t

0x19d9,	// (0x000219fa) power_save_t3_ParamLimits

0x19d9,	// (0x000219fa) power_save_t3

0x19c4,	// (0x000219e5) power_save_t2_ParamLimits

0x19c4,	// (0x000219e5) power_save_t2

0x19ee,	// (0x00021a0f) indicator_ps_pane_g1

0x6b13,	// (0x00026b34) ai_gene_pane_ParamLimits

0x6b13,	// (0x00026b34) ai_gene_pane

0x6b1f,	// (0x00026b40) ai_links_pane_ParamLimits

0x6b1f,	// (0x00026b40) ai_links_pane

0x6b2b,	// (0x00026b4c) indicator_pane_cp1_ParamLimits

0x6b2b,	// (0x00026b4c) indicator_pane_cp1

0x6b37,	// (0x00026b58) main_pane_idle_g1_cp_ParamLimits

0x6b37,	// (0x00026b58) main_pane_idle_g1_cp

0x6b43,	// (0x00026b64) popup_ai_links_title_window

0x6b4c,	// (0x00026b6d) soft_indicator_pane_cp1_ParamLimits

0x6b4c,	// (0x00026b6d) soft_indicator_pane_cp1

0xab99,	// (0x0002abba) ai_links_pane_g1

0xaba2,	// (0x0002abc3) grid_ai_links_pane

0xab7c,	// (0x0002ab9d) ai_gene_pane_1

0xab87,	// (0x0002aba8) ai_gene_pane_2

0xab90,	// (0x0002abb1) list_highlight_pane_cp4

0xab60,	// (0x0002ab81) cell_ai_link_pane_ParamLimits

0xab60,	// (0x0002ab81) cell_ai_link_pane

0xab58,	// (0x0002ab79) cell_ai_link_pane_g1

0x1b1b,	// (0x00021b3c) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x0002f8ff) cell_ai_link_pane_g

0x1874,	// (0x00021895) grid_highlight_cp2

0x1874,	// (0x00021895) bg_popup_sub_pane_cp1

0x1a05,	// (0x00021a26) popup_ai_links_title_window_t1

0xaaa8,	// (0x0002aac9) ai_gene_pane_1_g1_ParamLimits

0xaaa8,	// (0x0002aac9) ai_gene_pane_1_g1

0xaab4,	// (0x0002aad5) ai_gene_pane_1_g2_ParamLimits

0xaab4,	// (0x0002aad5) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0002f8f5) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0002f8f5) ai_gene_pane_1_g

0xaac1,	// (0x0002aae2) ai_gene_pane_1_t1_ParamLimits

0xaac1,	// (0x0002aae2) ai_gene_pane_1_t1

0xaaf5,	// (0x0002ab16) grid_ai_soft_ind_pane

0xaa93,	// (0x0002aab4) ai_gene_pane_2_t1_ParamLimits

0xaa93,	// (0x0002aab4) ai_gene_pane_2_t1

0x6b58,	// (0x00026b79) main_pane_empty_t1_ParamLimits

0x6b58,	// (0x00026b79) main_pane_empty_t1

0x6b70,	// (0x00026b91) main_pane_empty_t2_ParamLimits

0x6b70,	// (0x00026b91) main_pane_empty_t2

0x6b85,	// (0x00026ba6) main_pane_empty_t3_ParamLimits

0x6b85,	// (0x00026ba6) main_pane_empty_t3

0x6b97,	// (0x00026bb8) main_pane_empty_t4_ParamLimits

0x6b97,	// (0x00026bb8) main_pane_empty_t4

0x6ba9,	// (0x00026bca) main_pane_empty_t5_ParamLimits

0x6ba9,	// (0x00026bca) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002f570) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002f570) main_pane_empty_t

0x1e55,	// (0x00021e76) bg_popup_window_pane_ParamLimits

0x1e55,	// (0x00021e76) bg_popup_window_pane

0xa803,	// (0x0002a824) find_popup_pane_cp2_ParamLimits

0xa803,	// (0x0002a824) find_popup_pane_cp2

0xa80f,	// (0x0002a830) heading_pane_ParamLimits

0xa80f,	// (0x0002a830) heading_pane

0x1874,	// (0x00021895) bg_popup_sub_pane

0xa77d,	// (0x0002a79e) bg_popup_window_pane_g1_ParamLimits

0xa77d,	// (0x0002a79e) bg_popup_window_pane_g1

0xa789,	// (0x0002a7aa) bg_popup_window_pane_g2_ParamLimits

0xa789,	// (0x0002a7aa) bg_popup_window_pane_g2

0xa795,	// (0x0002a7b6) bg_popup_window_pane_g3_ParamLimits

0xa795,	// (0x0002a7b6) bg_popup_window_pane_g3

0xa7a1,	// (0x0002a7c2) bg_popup_window_pane_g4_ParamLimits

0xa7a1,	// (0x0002a7c2) bg_popup_window_pane_g4

0xa7ad,	// (0x0002a7ce) bg_popup_window_pane_g5_ParamLimits

0xa7ad,	// (0x0002a7ce) bg_popup_window_pane_g5

0xa7b9,	// (0x0002a7da) bg_popup_window_pane_g6_ParamLimits

0xa7b9,	// (0x0002a7da) bg_popup_window_pane_g6

0xa7c5,	// (0x0002a7e6) bg_popup_window_pane_g7_ParamLimits

0xa7c5,	// (0x0002a7e6) bg_popup_window_pane_g7

0xa7d1,	// (0x0002a7f2) bg_popup_window_pane_g8_ParamLimits

0xa7d1,	// (0x0002a7f2) bg_popup_window_pane_g8

0xa7dd,	// (0x0002a7fe) bg_popup_window_pane_g9_ParamLimits

0xa7dd,	// (0x0002a7fe) bg_popup_window_pane_g9

0xa7e9,	// (0x0002a80a) bg_popup_window_pane_g10_ParamLimits

0xa7e9,	// (0x0002a80a) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x0002f8bd) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x0002f8bd) bg_popup_window_pane_g

0xa712,	// (0x0002a733) bg_popup_heading_pane_ParamLimits

0xa712,	// (0x0002a733) bg_popup_heading_pane

0x90f1,	// (0x00029112) tabs_4_passive_pane_cp_srt_ParamLimits

0x90f1,	// (0x00029112) tabs_4_passive_pane_cp_srt

0x9103,	// (0x00029124) tabs_4_passive_pane_srt_ParamLimits

0xa726,	// (0x0002a747) heading_pane_g2

0x9103,	// (0x00029124) tabs_4_passive_pane_srt

0x1eba,	// (0x00021edb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1eba,	// (0x00021edb) bg_passive_tab_pane_cp3_srt

0xa72e,	// (0x0002a74f) heading_pane_t1_ParamLimits

0xa72e,	// (0x0002a74f) heading_pane_t1

0xa745,	// (0x0002a766) heading_pane_t2_ParamLimits

0xa745,	// (0x0002a766) heading_pane_t2

0x0001,

0xf897,	// (0x0002f8b8) heading_pane_t_ParamLimits

0xf897,	// (0x0002f8b8) heading_pane_t

0xa24f,	// (0x0002a270) bg_popup_heading_pane_g1

0xa2fe,	// (0x0002a31f) bg_popup_heading_pane_g2

0xa308,	// (0x0002a329) bg_popup_heading_pane_g3

0xa312,	// (0x0002a333) bg_popup_heading_pane_g4

0xa31c,	// (0x0002a33d) bg_popup_heading_pane_g5

0xa326,	// (0x0002a347) bg_popup_heading_pane_g6

0xa32e,	// (0x0002a34f) bg_popup_heading_pane_g7

0xa336,	// (0x0002a357) bg_popup_heading_pane_g8

0xa340,	// (0x0002a361) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x0002f874) bg_popup_heading_pane_g

0x856b,	// (0x0002858c) bg_popup_sub_pane_g1

0x8573,	// (0x00028594) bg_popup_sub_pane_g2

0x857b,	// (0x0002859c) bg_popup_sub_pane_g3

0x8583,	// (0x000285a4) bg_popup_sub_pane_g4

0x858b,	// (0x000285ac) bg_popup_sub_pane_g5

0x8593,	// (0x000285b4) bg_popup_sub_pane_g6

0x859b,	// (0x000285bc) bg_popup_sub_pane_g7

0x85a3,	// (0x000285c4) bg_popup_sub_pane_g8

0x85ab,	// (0x000285cc) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x0002f84e) bg_popup_sub_pane_g

0x18c2,	// (0x000218e3) bg_popup_window_pane_cp5_ParamLimits

0x18c2,	// (0x000218e3) bg_popup_window_pane_cp5

0x1a22,	// (0x00021a43) popup_note_window_g1_ParamLimits

0x1a22,	// (0x00021a43) popup_note_window_g1

0x1a2e,	// (0x00021a4f) popup_note_window_t1_ParamLimits

0x1a2e,	// (0x00021a4f) popup_note_window_t1

0x1a44,	// (0x00021a65) popup_note_window_t2_ParamLimits

0x1a44,	// (0x00021a65) popup_note_window_t2

0x1a5a,	// (0x00021a7b) popup_note_window_t3_ParamLimits

0x1a5a,	// (0x00021a7b) popup_note_window_t3

0x1a70,	// (0x00021a91) popup_note_window_t4_ParamLimits

0x1a70,	// (0x00021a91) popup_note_window_t4

0x1a98,	// (0x00021ab9) popup_note_window_t5_ParamLimits

0x1a98,	// (0x00021ab9) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002f57b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002f57b) popup_note_window_t

0x1abc,	// (0x00021add) bg_popup_window_pane_cp6_ParamLimits

0x1abc,	// (0x00021add) bg_popup_window_pane_cp6

0x8e26,	// (0x00028e47) popup_note_image_window_g1_ParamLimits

0x8e26,	// (0x00028e47) popup_note_image_window_g1

0x8e32,	// (0x00028e53) popup_note_image_window_g2_ParamLimits

0x8e32,	// (0x00028e53) popup_note_image_window_g2

0x0001,

0xf821,	// (0x0002f842) popup_note_image_window_g_ParamLimits

0xf821,	// (0x0002f842) popup_note_image_window_g

0x8e4b,	// (0x00028e6c) popup_note_image_window_t1_ParamLimits

0x8e4b,	// (0x00028e6c) popup_note_image_window_t1

0x8e64,	// (0x00028e85) popup_note_image_window_t2_ParamLimits

0x8e64,	// (0x00028e85) popup_note_image_window_t2

0x8e7d,	// (0x00028e9e) popup_note_image_window_t3_ParamLimits

0x8e7d,	// (0x00028e9e) popup_note_image_window_t3

0x0002,

0xf826,	// (0x0002f847) popup_note_image_window_t_ParamLimits

0xf826,	// (0x0002f847) popup_note_image_window_t

0x8cef,	// (0x00028d10) bg_popup_window_pane_cp7_ParamLimits

0x8cef,	// (0x00028d10) bg_popup_window_pane_cp7

0x8d1f,	// (0x00028d40) popup_note_wait_window_g1_ParamLimits

0x8d1f,	// (0x00028d40) popup_note_wait_window_g1

0x8d2b,	// (0x00028d4c) popup_note_wait_window_g2_ParamLimits

0x8d2b,	// (0x00028d4c) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x0002f830) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x0002f830) popup_note_wait_window_g

0x8d43,	// (0x00028d64) popup_note_wait_window_t1_ParamLimits

0x8d43,	// (0x00028d64) popup_note_wait_window_t1

0x8d6a,	// (0x00028d8b) popup_note_wait_window_t2_ParamLimits

0x8d6a,	// (0x00028d8b) popup_note_wait_window_t2

0x8d87,	// (0x00028da8) popup_note_wait_window_t3_ParamLimits

0x8d87,	// (0x00028da8) popup_note_wait_window_t3

0x8d9a,	// (0x00028dbb) popup_note_wait_window_t4_ParamLimits

0x8d9a,	// (0x00028dbb) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x0002f837) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x0002f837) popup_note_wait_window_t

0x8dbf,	// (0x00028de0) wait_bar_pane_ParamLimits

0x8dbf,	// (0x00028de0) wait_bar_pane

0x1874,	// (0x00021895) wait_anim_pane

0x1874,	// (0x00021895) wait_border_pane

0x186a,	// (0x0002188b) wait_anim_pane_g1

0x186a,	// (0x0002188b) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0002f6f0) wait_anim_pane_g

0x8c9b,	// (0x00028cbc) wait_border_pane_g1

0x8ca6,	// (0x00028cc7) wait_border_pane_g2

0x8caf,	// (0x00028cd0) wait_border_pane_g3

0x0002,

0xf808,	// (0x0002f829) wait_border_pane_g

0x8b06,	// (0x00028b27) bg_popup_window_pane_cp16_ParamLimits

0x8b06,	// (0x00028b27) bg_popup_window_pane_cp16

0x8c06,	// (0x00028c27) indicator_popup_pane_cp4_ParamLimits

0x8c06,	// (0x00028c27) indicator_popup_pane_cp4

0x8c1a,	// (0x00028c3b) popup_query_data_window_t1_ParamLimits

0x8c1a,	// (0x00028c3b) popup_query_data_window_t1

0x8c2c,	// (0x00028c4d) popup_query_data_window_t2_ParamLimits

0x8c2c,	// (0x00028c4d) popup_query_data_window_t2

0x8c45,	// (0x00028c66) popup_query_data_window_t3_ParamLimits

0x8c45,	// (0x00028c66) popup_query_data_window_t3

0x0002,

0xf801,	// (0x0002f822) popup_query_data_window_t_ParamLimits

0xf801,	// (0x0002f822) popup_query_data_window_t

0x8c5f,	// (0x00028c80) query_popup_data_pane_ParamLimits

0x8c5f,	// (0x00028c80) query_popup_data_pane

0x8c73,	// (0x00028c94) query_popup_data_pane_cp1_ParamLimits

0x8c73,	// (0x00028c94) query_popup_data_pane_cp1

0x8b06,	// (0x00028b27) bg_popup_window_pane_cp10_ParamLimits

0x8b06,	// (0x00028b27) bg_popup_window_pane_cp10

0x8b38,	// (0x00028b59) indicator_popup_pane_ParamLimits

0x8b38,	// (0x00028b59) indicator_popup_pane

0x8b5a,	// (0x00028b7b) popup_query_code_window_t1_ParamLimits

0x8b5a,	// (0x00028b7b) popup_query_code_window_t1

0x8b74,	// (0x00028b95) popup_query_code_window_t2_ParamLimits

0x8b74,	// (0x00028b95) popup_query_code_window_t2

0x8bbd,	// (0x00028bde) popup_query_code_window_t3_ParamLimits

0x8bbd,	// (0x00028bde) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x0002f81b) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x0002f81b) popup_query_code_window_t

0x8bec,	// (0x00028c0d) query_popup_pane_ParamLimits

0x8bec,	// (0x00028c0d) query_popup_pane

0x1abc,	// (0x00021add) bg_popup_window_pane_cp15_ParamLimits

0x1abc,	// (0x00021add) bg_popup_window_pane_cp15

0x6be3,	// (0x00026c04) indicator_popup_pane_cp1_ParamLimits

0x6be3,	// (0x00026c04) indicator_popup_pane_cp1

0x6bf6,	// (0x00026c17) indicator_popup_pane_cp2_ParamLimits

0x6bf6,	// (0x00026c17) indicator_popup_pane_cp2

0x6c09,	// (0x00026c2a) popup_query_data_code_window_g1_ParamLimits

0x6c09,	// (0x00026c2a) popup_query_data_code_window_g1

0x1ada,	// (0x00021afb) popup_query_data_code_window_t1_ParamLimits

0x1ada,	// (0x00021afb) popup_query_data_code_window_t1

0x1aec,	// (0x00021b0d) popup_query_data_code_window_t2_ParamLimits

0x1aec,	// (0x00021b0d) popup_query_data_code_window_t2

0x6c1c,	// (0x00026c3d) popup_query_data_code_window_t3_ParamLimits

0x6c1c,	// (0x00026c3d) popup_query_data_code_window_t3

0x6c32,	// (0x00026c53) popup_query_data_code_window_t4_ParamLimits

0x6c32,	// (0x00026c53) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002f586) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002f586) popup_query_data_code_window_t

0x247d,	// (0x0002249e) list_single_midp_graphic_pane_g3

0x6c4a,	// (0x00026c6b) query_popup_data_pane_cp2_ParamLimits

0x6c5d,	// (0x00026c7e) query_popup_pane_cp2_ParamLimits

0x6c5d,	// (0x00026c7e) query_popup_pane_cp2

0x1874,	// (0x00021895) bg_popup_window_pane_cp11

0x8aea,	// (0x00028b0b) heading_pane_cp5

0x8af2,	// (0x00028b13) listscroll_popup_info_pane

0x1874,	// (0x00021895) input_focus_pane_cp3

0x1afe,	// (0x00021b1f) query_popup_pane_t1

0x1b0c,	// (0x00021b2d) list_popup_info_pane_ParamLimits

0x1b0c,	// (0x00021b2d) list_popup_info_pane

0x1b1b,	// (0x00021b3c) listscroll_popup_info_pane_g1

0x1b23,	// (0x00021b44) scroll_pane_cp7

0x6c70,	// (0x00026c91) popup_info_list_pane_t1_ParamLimits

0x6c70,	// (0x00026c91) popup_info_list_pane_t1

0x6c8a,	// (0x00026cab) popup_info_list_pane_t2_ParamLimits

0x6c8a,	// (0x00026cab) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002f58f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002f58f) popup_info_list_pane_t

0x1874,	// (0x00021895) bg_popup_window_pane_cp12

0xb1ff,	// (0x0002b220) find_popup_pane

0x18d0,	// (0x000218f1) bg_popup_window_pane_cp3

0x1b2d,	// (0x00021b4e) heading_pane_cp3

0x1b3c,	// (0x00021b5d) listscroll_popup_graphic_pane

0x1874,	// (0x00021895) bg_popup_window_pane_cp4

0x6cf4,	// (0x00026d15) heading_pane_cp4

0x1b4c,	// (0x00021b6d) listscroll_popup_colour_pane

0x6cfe,	// (0x00026d1f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6cfe,	// (0x00026d1f) cell_large_graphic_colour_none_popup_pane

0x6d12,	// (0x00026d33) grid_large_graphic_colour_popup_pane_ParamLimits

0x6d12,	// (0x00026d33) grid_large_graphic_colour_popup_pane

0x6d36,	// (0x00026d57) listscroll_popup_colour_pane_g1_ParamLimits

0x6d36,	// (0x00026d57) listscroll_popup_colour_pane_g1

0x6d4d,	// (0x00026d6e) listscroll_popup_colour_pane_g2_ParamLimits

0x6d4d,	// (0x00026d6e) listscroll_popup_colour_pane_g2

0x6d64,	// (0x00026d85) listscroll_popup_colour_pane_g3_ParamLimits

0x6d64,	// (0x00026d85) listscroll_popup_colour_pane_g3

0x6d74,	// (0x00026d95) listscroll_popup_colour_pane_g4_ParamLimits

0x6d74,	// (0x00026d95) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002f594) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002f594) listscroll_popup_colour_pane_g

0x1b54,	// (0x00021b75) scroll_pane_cp6_ParamLimits

0x1b54,	// (0x00021b75) scroll_pane_cp6

0x6d84,	// (0x00026da5) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d84,	// (0x00026da5) cell_large_graphic_colour_popup_pane

0x6da3,	// (0x00026dc4) cell_large_graphic_colour_none_popup_pane_t1

0x1874,	// (0x00021895) grid_highlight_pane_cp5

0x1b66,	// (0x00021b87) cell_large_graphic_colour_popup_pane_g1

0x1b6e,	// (0x00021b8f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002f59d) cell_large_graphic_colour_popup_pane_g

0x1b76,	// (0x00021b97) cell_large_graphic_colour_popup_pane_g2_copy1

0x1b7f,	// (0x00021ba0) grid_highlight_pane_cp4

0x1b87,	// (0x00021ba8) bg_popup_window_pane_cp8_ParamLimits

0x1b87,	// (0x00021ba8) bg_popup_window_pane_cp8

0x6db2,	// (0x00026dd3) popup_snote_single_text_window_g1_ParamLimits

0x6db2,	// (0x00026dd3) popup_snote_single_text_window_g1

0x6dc4,	// (0x00026de5) popup_snote_single_text_window_t1_ParamLimits

0x6dc4,	// (0x00026de5) popup_snote_single_text_window_t1

0x6dd7,	// (0x00026df8) popup_snote_single_text_window_t2_ParamLimits

0x6dd7,	// (0x00026df8) popup_snote_single_text_window_t2

0x6dea,	// (0x00026e0b) popup_snote_single_text_window_t3_ParamLimits

0x6dea,	// (0x00026e0b) popup_snote_single_text_window_t3

0x6e23,	// (0x00026e44) popup_snote_single_text_window_t4_ParamLimits

0x6e23,	// (0x00026e44) popup_snote_single_text_window_t4

0x6e57,	// (0x00026e78) popup_snote_single_text_window_t5_ParamLimits

0x6e57,	// (0x00026e78) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002f5a2) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002f5a2) popup_snote_single_text_window_t

0x1ba2,	// (0x00021bc3) bg_popup_window_pane_cp9_ParamLimits

0x1ba2,	// (0x00021bc3) bg_popup_window_pane_cp9

0x6db2,	// (0x00026dd3) popup_snote_single_graphic_window_g1_ParamLimits

0x6db2,	// (0x00026dd3) popup_snote_single_graphic_window_g1

0x1bb0,	// (0x00021bd1) popup_snote_single_graphic_window_g2_ParamLimits

0x1bb0,	// (0x00021bd1) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002f5ad) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002f5ad) popup_snote_single_graphic_window_g

0x1bbc,	// (0x00021bdd) popup_snote_single_graphic_window_t1_ParamLimits

0x1bbc,	// (0x00021bdd) popup_snote_single_graphic_window_t1

0x1bcf,	// (0x00021bf0) popup_snote_single_graphic_window_t2_ParamLimits

0x1bcf,	// (0x00021bf0) popup_snote_single_graphic_window_t2

0x6e86,	// (0x00026ea7) popup_snote_single_graphic_window_t3_ParamLimits

0x6e86,	// (0x00026ea7) popup_snote_single_graphic_window_t3

0x6ebf,	// (0x00026ee0) popup_snote_single_graphic_window_t4_ParamLimits

0x6ebf,	// (0x00026ee0) popup_snote_single_graphic_window_t4

0x6ef3,	// (0x00026f14) popup_snote_single_graphic_window_t5_ParamLimits

0x6ef3,	// (0x00026f14) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002f5b2) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002f5b2) popup_snote_single_graphic_window_t

0xb141,	// (0x0002b162) grid_graphic_popup_pane_ParamLimits

0xb141,	// (0x0002b162) grid_graphic_popup_pane

0xb16b,	// (0x0002b18c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb16b,	// (0x0002b18c) listscroll_popup_graphic_pane_g1

0xb17f,	// (0x0002b1a0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb17f,	// (0x0002b1a0) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0002f998) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0002f998) listscroll_popup_graphic_pane_g

0xb193,	// (0x0002b1b4) scroll_pane_cp5

0xb0d7,	// (0x0002b0f8) cell_graphic_popup_pane_ParamLimits

0xb0d7,	// (0x0002b0f8) cell_graphic_popup_pane

0xb0b8,	// (0x0002b0d9) cell_graphic_popup_pane_g1

0xb0c0,	// (0x0002b0e1) cell_graphic_popup_pane_g2

0x1b76,	// (0x00021b97) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0002f991) cell_graphic_popup_pane_g

0xb0c9,	// (0x0002b0ea) cell_graphic_popup_pane_t2

0x1b7f,	// (0x00021ba0) grid_highlight_pane_cp3

0x1bf4,	// (0x00021c15) list_gen_pane_ParamLimits

0x1bf4,	// (0x00021c15) list_gen_pane

0x1c1c,	// (0x00021c3d) scroll_pane

0xb010,	// (0x0002b031) bg_list_pane_g1_ParamLimits

0xb010,	// (0x0002b031) bg_list_pane_g1

0xb02d,	// (0x0002b04e) bg_list_pane_g2_ParamLimits

0xb02d,	// (0x0002b04e) bg_list_pane_g2

0xb042,	// (0x0002b063) bg_list_pane_g3_ParamLimits

0xb042,	// (0x0002b063) bg_list_pane_g3

0xb056,	// (0x0002b077) bg_list_pane_g4_ParamLimits

0xb056,	// (0x0002b077) bg_list_pane_g4

0xb06a,	// (0x0002b08b) bg_list_pane_g5_ParamLimits

0xb06a,	// (0x0002b08b) bg_list_pane_g5

0x0004,

0xf965,	// (0x0002f986) bg_list_pane_g_ParamLimits

0xf965,	// (0x0002f986) bg_list_pane_g

0x5da5,	// (0x00025dc6) list_double2_graphic_large_graphic_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double2_graphic_large_graphic_pane

0x5da5,	// (0x00025dc6) list_double2_graphic_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double2_graphic_pane

0x5da5,	// (0x00025dc6) list_double2_large_graphic_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double2_large_graphic_pane

0x5da5,	// (0x00025dc6) list_double2_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double2_pane

0x5da5,	// (0x00025dc6) list_double_graphic_heading_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_graphic_heading_pane

0x5da5,	// (0x00025dc6) list_double_graphic_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_graphic_pane

0x5da5,	// (0x00025dc6) list_double_heading_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_heading_pane

0x5da5,	// (0x00025dc6) list_double_large_graphic_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_large_graphic_pane

0x5da5,	// (0x00025dc6) list_double_number_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_number_pane

0x5da5,	// (0x00025dc6) list_double_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_pane

0x5da5,	// (0x00025dc6) list_double_time_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_double_time_pane

0x5da5,	// (0x00025dc6) list_setting_number_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_setting_number_pane

0x5da5,	// (0x00025dc6) list_setting_pane_ParamLimits

0x5da5,	// (0x00025dc6) list_setting_pane

0x5e05,	// (0x00025e26) list_single_2graphic_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_2graphic_pane

0x5e05,	// (0x00025e26) list_single_graphic_heading_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_graphic_heading_pane

0x5e05,	// (0x00025e26) list_single_graphic_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_graphic_pane

0x5e05,	// (0x00025e26) list_single_heading_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_heading_pane

0xafed,	// (0x0002b00e) list_single_large_graphic_pane_ParamLimits

0xafed,	// (0x0002b00e) list_single_large_graphic_pane

0x5e05,	// (0x00025e26) list_single_number_heading_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_number_heading_pane

0x5e05,	// (0x00025e26) list_single_number_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_number_pane

0x5e05,	// (0x00025e26) list_single_pane_ParamLimits

0x5e05,	// (0x00025e26) list_single_pane

0x1874,	// (0x00021895) list_highlight_pane_cp1

0x54f7,	// (0x00025518) list_single_pane_g1_ParamLimits

0x54f7,	// (0x00025518) list_single_pane_g1

0x5503,	// (0x00025524) list_single_pane_g2_ParamLimits

0x5503,	// (0x00025524) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_single_pane_g

0x5d8f,	// (0x00025db0) list_single_pane_t1_ParamLimits

0x5d8f,	// (0x00025db0) list_single_pane_t1

0x54f7,	// (0x00025518) list_single_number_pane_g1_ParamLimits

0x54f7,	// (0x00025518) list_single_number_pane_g1

0x5503,	// (0x00025524) list_single_number_pane_g2_ParamLimits

0x5503,	// (0x00025524) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_single_number_pane_g

0x550f,	// (0x00025530) list_single_number_pane_t1_ParamLimits

0x550f,	// (0x00025530) list_single_number_pane_t1

0x5d51,	// (0x00025d72) list_single_number_pane_t2_ParamLimits

0x5d51,	// (0x00025d72) list_single_number_pane_t2

0x0001,

0xf926,	// (0x0002f947) list_single_number_pane_t_ParamLimits

0xf926,	// (0x0002f947) list_single_number_pane_t

0x54eb,	// (0x0002550c) list_single_graphic_pane_g1_ParamLimits

0x54eb,	// (0x0002550c) list_single_graphic_pane_g1

0x54f7,	// (0x00025518) list_single_graphic_pane_g2_ParamLimits

0x54f7,	// (0x00025518) list_single_graphic_pane_g2

0x5503,	// (0x00025524) list_single_graphic_pane_g3_ParamLimits

0x5503,	// (0x00025524) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002f5bd) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002f5bd) list_single_graphic_pane_g

0x550f,	// (0x00025530) list_single_graphic_pane_t1_ParamLimits

0x550f,	// (0x00025530) list_single_graphic_pane_t1

0x54f7,	// (0x00025518) list_single_heading_pane_g1_ParamLimits

0x54f7,	// (0x00025518) list_single_heading_pane_g1

0x5503,	// (0x00025524) list_single_heading_pane_g2_ParamLimits

0x5503,	// (0x00025524) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_single_heading_pane_g

0x5525,	// (0x00025546) list_single_heading_pane_t1_ParamLimits

0x5525,	// (0x00025546) list_single_heading_pane_t1

0x553b,	// (0x0002555c) list_single_heading_pane_t2_ParamLimits

0x553b,	// (0x0002555c) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002f5c9) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002f5c9) list_single_heading_pane_t

0x54f7,	// (0x00025518) list_single_number_heading_pane_g1_ParamLimits

0x54f7,	// (0x00025518) list_single_number_heading_pane_g1

0x5503,	// (0x00025524) list_single_number_heading_pane_g2_ParamLimits

0x5503,	// (0x00025524) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_single_number_heading_pane_g

0x5525,	// (0x00025546) list_single_number_heading_pane_t1_ParamLimits

0x5525,	// (0x00025546) list_single_number_heading_pane_t1

0x554d,	// (0x0002556e) list_single_number_heading_pane_t2_ParamLimits

0x554d,	// (0x0002556e) list_single_number_heading_pane_t2

0x555f,	// (0x00025580) list_single_number_heading_pane_t3_ParamLimits

0x555f,	// (0x00025580) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002f5ce) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002f5ce) list_single_number_heading_pane_t

0x5571,	// (0x00025592) list_single_graphic_heading_pane_g1_ParamLimits

0x5571,	// (0x00025592) list_single_graphic_heading_pane_g1

0x557d,	// (0x0002559e) list_single_graphic_heading_pane_g4_ParamLimits

0x557d,	// (0x0002559e) list_single_graphic_heading_pane_g4

0x5503,	// (0x00025524) list_single_graphic_heading_pane_g5_ParamLimits

0x5503,	// (0x00025524) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002f5d5) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002f5d5) list_single_graphic_heading_pane_g

0x5525,	// (0x00025546) list_single_graphic_heading_pane_t1_ParamLimits

0x5525,	// (0x00025546) list_single_graphic_heading_pane_t1

0x558e,	// (0x000255af) list_single_graphic_heading_pane_t2_ParamLimits

0x558e,	// (0x000255af) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002f5dc) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002f5dc) list_single_graphic_heading_pane_t

0x55a0,	// (0x000255c1) list_single_large_graphic_pane_g1_ParamLimits

0x55a0,	// (0x000255c1) list_single_large_graphic_pane_g1

0x55ac,	// (0x000255cd) list_single_large_graphic_pane_g2_ParamLimits

0x55ac,	// (0x000255cd) list_single_large_graphic_pane_g2

0x55b8,	// (0x000255d9) list_single_large_graphic_pane_g3_ParamLimits

0x55b8,	// (0x000255d9) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002f5e1) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002f5e1) list_single_large_graphic_pane_g

0x8ca6,	// (0x00028cc7) wait_border_pane_g2_copy1

0x55c4,	// (0x000255e5) list_single_large_graphic_pane_g4_cp2

0x55cc,	// (0x000255ed) list_single_large_graphic_pane_t1_ParamLimits

0x55cc,	// (0x000255ed) list_single_large_graphic_pane_t1

0x55e2,	// (0x00025603) list_double_pane_g1_ParamLimits

0x55e2,	// (0x00025603) list_double_pane_g1

0x55ee,	// (0x0002560f) list_double_pane_g2_ParamLimits

0x55ee,	// (0x0002560f) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002f5e8) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002f5e8) list_double_pane_g

0x55fa,	// (0x0002561b) list_double_pane_t1_ParamLimits

0x55fa,	// (0x0002561b) list_double_pane_t1

0x5610,	// (0x00025631) list_double_pane_t2_ParamLimits

0x5610,	// (0x00025631) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002f5ed) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002f5ed) list_double_pane_t

0x5622,	// (0x00025643) list_double2_pane_g1_ParamLimits

0x5622,	// (0x00025643) list_double2_pane_g1

0x55ee,	// (0x0002560f) list_double2_pane_g2_ParamLimits

0x55ee,	// (0x0002560f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002f5f2) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002f5f2) list_double2_pane_g

0x55fa,	// (0x0002561b) list_double2_pane_t1_ParamLimits

0x55fa,	// (0x0002561b) list_double2_pane_t1

0x5633,	// (0x00025654) list_double2_pane_t2_ParamLimits

0x5633,	// (0x00025654) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002f5f7) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002f5f7) list_double2_pane_t

0x55e2,	// (0x00025603) list_double_number_pane_g1_ParamLimits

0x55e2,	// (0x00025603) list_double_number_pane_g1

0x55ee,	// (0x0002560f) list_double_number_pane_g2_ParamLimits

0x55ee,	// (0x0002560f) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002f5e8) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002f5e8) list_double_number_pane_g

0x5645,	// (0x00025666) list_double_number_pane_t1_ParamLimits

0x5645,	// (0x00025666) list_double_number_pane_t1

0x5657,	// (0x00025678) list_double_number_pane_t2_ParamLimits

0x5657,	// (0x00025678) list_double_number_pane_t2

0x566d,	// (0x0002568e) list_double_number_pane_t3_ParamLimits

0x566d,	// (0x0002568e) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002f5fc) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002f5fc) list_double_number_pane_t

0x567f,	// (0x000256a0) list_double_graphic_pane_g1_ParamLimits

0x567f,	// (0x000256a0) list_double_graphic_pane_g1

0x568b,	// (0x000256ac) list_double_graphic_pane_g2_ParamLimits

0x568b,	// (0x000256ac) list_double_graphic_pane_g2

0x569a,	// (0x000256bb) list_double_graphic_pane_g3_ParamLimits

0x569a,	// (0x000256bb) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002f603) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002f603) list_double_graphic_pane_g

0x5657,	// (0x00025678) list_double_graphic_pane_t1_ParamLimits

0x5657,	// (0x00025678) list_double_graphic_pane_t1

0x566d,	// (0x0002568e) list_double_graphic_pane_t2_ParamLimits

0x566d,	// (0x0002568e) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002f60c) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002f60c) list_double_graphic_pane_t

0x567f,	// (0x000256a0) list_double2_graphic_pane_g1_ParamLimits

0x567f,	// (0x000256a0) list_double2_graphic_pane_g1

0x56b2,	// (0x000256d3) list_double2_graphic_pane_g2_ParamLimits

0x56b2,	// (0x000256d3) list_double2_graphic_pane_g2

0x56be,	// (0x000256df) list_double2_graphic_pane_g3_ParamLimits

0x56be,	// (0x000256df) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002f611) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002f611) list_double2_graphic_pane_g

0x5657,	// (0x00025678) list_double2_graphic_pane_t1_ParamLimits

0x5657,	// (0x00025678) list_double2_graphic_pane_t1

0x56ca,	// (0x000256eb) list_double2_graphic_pane_t2_ParamLimits

0x56ca,	// (0x000256eb) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f618) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f618) list_double2_graphic_pane_t

0x56dc,	// (0x000256fd) list_double_large_graphic_pane_g1_ParamLimits

0x56dc,	// (0x000256fd) list_double_large_graphic_pane_g1

0x5622,	// (0x00025643) list_double_large_graphic_pane_g2_ParamLimits

0x5622,	// (0x00025643) list_double_large_graphic_pane_g2

0x55ee,	// (0x0002560f) list_double_large_graphic_pane_g3_ParamLimits

0x55ee,	// (0x0002560f) list_double_large_graphic_pane_g3

0x56ef,	// (0x00025710) list_double_large_graphic_pane_g4_ParamLimits

0x56ef,	// (0x00025710) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002f61d) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002f61d) list_double_large_graphic_pane_g

0x5716,	// (0x00025737) list_double_large_graphic_pane_t1_ParamLimits

0x5716,	// (0x00025737) list_double_large_graphic_pane_t1

0x572f,	// (0x00025750) list_double_large_graphic_pane_t2_ParamLimits

0x572f,	// (0x00025750) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002f628) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002f628) list_double_large_graphic_pane_t

0x5741,	// (0x00025762) list_double2_large_graphic_pane_g1_ParamLimits

0x5741,	// (0x00025762) list_double2_large_graphic_pane_g1

0x5622,	// (0x00025643) list_double2_large_graphic_pane_g2_ParamLimits

0x5622,	// (0x00025643) list_double2_large_graphic_pane_g2

0x55ee,	// (0x0002560f) list_double2_large_graphic_pane_g3_ParamLimits

0x55ee,	// (0x0002560f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002f62d) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002f62d) list_double2_large_graphic_pane_g

0x5657,	// (0x00025678) list_double2_large_graphic_pane_t1_ParamLimits

0x5657,	// (0x00025678) list_double2_large_graphic_pane_t1

0x56ca,	// (0x000256eb) list_double2_large_graphic_pane_t2_ParamLimits

0x56ca,	// (0x000256eb) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f618) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f618) list_double2_large_graphic_pane_t

0x574d,	// (0x0002576e) list_double_heading_pane_g1_ParamLimits

0x574d,	// (0x0002576e) list_double_heading_pane_g1

0x575e,	// (0x0002577f) list_double_heading_pane_g2_ParamLimits

0x575e,	// (0x0002577f) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0002f634) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0002f634) list_double_heading_pane_g

0x576a,	// (0x0002578b) list_double_heading_pane_t1_ParamLimits

0x576a,	// (0x0002578b) list_double_heading_pane_t1

0x56ca,	// (0x000256eb) list_double_heading_pane_t2_ParamLimits

0x56ca,	// (0x000256eb) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0002f639) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0002f639) list_double_heading_pane_t

0x5780,	// (0x000257a1) list_double_graphic_heading_pane_g1_ParamLimits

0x5780,	// (0x000257a1) list_double_graphic_heading_pane_g1

0x574d,	// (0x0002576e) list_double_graphic_heading_pane_g2_ParamLimits

0x574d,	// (0x0002576e) list_double_graphic_heading_pane_g2

0x575e,	// (0x0002577f) list_double_graphic_heading_pane_g3_ParamLimits

0x575e,	// (0x0002577f) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0002f63e) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002f63e) list_double_graphic_heading_pane_g

0x576a,	// (0x0002578b) list_double_graphic_heading_pane_t1_ParamLimits

0x576a,	// (0x0002578b) list_double_graphic_heading_pane_t1

0x56ca,	// (0x000256eb) list_double_graphic_heading_pane_t2_ParamLimits

0x56ca,	// (0x000256eb) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0002f639) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0002f639) list_double_graphic_heading_pane_t

0x5622,	// (0x00025643) list_double_time_pane_g1_ParamLimits

0x5622,	// (0x00025643) list_double_time_pane_g1

0x55ee,	// (0x0002560f) list_double_time_pane_g2_ParamLimits

0x55ee,	// (0x0002560f) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x0002f5f2) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x0002f5f2) list_double_time_pane_g

0x578c,	// (0x000257ad) list_double_time_pane_t1_ParamLimits

0x578c,	// (0x000257ad) list_double_time_pane_t1

0x57a2,	// (0x000257c3) list_double_time_pane_t2_ParamLimits

0x57a2,	// (0x000257c3) list_double_time_pane_t2

0x57b4,	// (0x000257d5) list_double_time_pane_t3_ParamLimits

0x57b4,	// (0x000257d5) list_double_time_pane_t3

0x57c6,	// (0x000257e7) list_double_time_pane_t4_ParamLimits

0x57c6,	// (0x000257e7) list_double_time_pane_t4

0x0003,

0xf624,	// (0x0002f645) list_double_time_pane_t_ParamLimits

0xf624,	// (0x0002f645) list_double_time_pane_t

0x57d8,	// (0x000257f9) list_setting_pane_g1_ParamLimits

0x57d8,	// (0x000257f9) list_setting_pane_g1

0x57e4,	// (0x00025805) list_setting_pane_g2_ParamLimits

0x57e4,	// (0x00025805) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0002f64e) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0002f64e) list_setting_pane_g

0x57f0,	// (0x00025811) list_setting_pane_t1_ParamLimits

0x57f0,	// (0x00025811) list_setting_pane_t1

0x5807,	// (0x00025828) list_setting_pane_t2_ParamLimits

0x5807,	// (0x00025828) list_setting_pane_t2

0x0002,

0xf632,	// (0x0002f653) list_setting_pane_t_ParamLimits

0xf632,	// (0x0002f653) list_setting_pane_t

0x5844,	// (0x00025865) set_value_pane_cp_ParamLimits

0x5844,	// (0x00025865) set_value_pane_cp

0x5850,	// (0x00025871) list_setting_number_pane_g1_ParamLimits

0x5850,	// (0x00025871) list_setting_number_pane_g1

0x585c,	// (0x0002587d) list_setting_number_pane_g2_ParamLimits

0x585c,	// (0x0002587d) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x0002f65a) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x0002f65a) list_setting_number_pane_g

0x5868,	// (0x00025889) list_setting_number_pane_t1_ParamLimits

0x5868,	// (0x00025889) list_setting_number_pane_t1

0x587c,	// (0x0002589d) list_setting_number_pane_t2_ParamLimits

0x587c,	// (0x0002589d) list_setting_number_pane_t2

0x5893,	// (0x000258b4) list_setting_number_pane_t3_ParamLimits

0x5893,	// (0x000258b4) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0002f65f) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0002f65f) list_setting_number_pane_t

0x5844,	// (0x00025865) set_value_pane_ParamLimits

0x5844,	// (0x00025865) set_value_pane

0x1c89,	// (0x00021caa) bg_set_opt_pane_ParamLimits

0x1c89,	// (0x00021caa) bg_set_opt_pane

0x58d6,	// (0x000258f7) set_value_pane_t1

0x1cb8,	// (0x00021cd9) slider_set_pane_cp3

0x6f2c,	// (0x00026f4d) volume_small_pane_cp

0x1cc1,	// (0x00021ce2) list_form_gen_pane

0x1cca,	// (0x00021ceb) scroll_pane_cp8

0x58ec,	// (0x0002590d) form_field_data_pane_ParamLimits

0x58ec,	// (0x0002590d) form_field_data_pane

0x590c,	// (0x0002592d) form_field_data_wide_pane_ParamLimits

0x590c,	// (0x0002592d) form_field_data_wide_pane

0x592d,	// (0x0002594e) form_field_popup_pane_ParamLimits

0x592d,	// (0x0002594e) form_field_popup_pane

0x594b,	// (0x0002596c) form_field_popup_wide_pane_ParamLimits

0x594b,	// (0x0002596c) form_field_popup_wide_pane

0x5968,	// (0x00025989) form_field_slider_pane_ParamLimits

0x5968,	// (0x00025989) form_field_slider_pane

0x597b,	// (0x0002599c) form_field_slider_wide_pane_ParamLimits

0x597b,	// (0x0002599c) form_field_slider_wide_pane

0x1cfe,	// (0x00021d1f) data_form_pane

0x5998,	// (0x000259b9) form_field_data_pane_t1

0x1d0a,	// (0x00021d2b) input_focus_pane

0x59b0,	// (0x000259d1) data_form_wide_pane

0x59cd,	// (0x000259ee) form_field_data_wide_pane_t1

0x1b94,	// (0x00021bb5) input_focus_pane_cp6

0x59ef,	// (0x00025a10) form_field_popup_pane_t1

0x1d0a,	// (0x00021d2b) input_focus_pane_cp7

0x1d77,	// (0x00021d98) list_form_pane

0x5a0f,	// (0x00025a30) form_field_popup_wide_pane_t1

0x1d0a,	// (0x00021d2b) input_focus_pane_cp8

0x1da0,	// (0x00021dc1) list_form_wide_pane

0x5a2c,	// (0x00025a4d) form_field_slider_pane_t1_ParamLimits

0x5a2c,	// (0x00025a4d) form_field_slider_pane_t1

0x5a42,	// (0x00025a63) form_field_slider_pane_t2_ParamLimits

0x5a42,	// (0x00025a63) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0002f66f) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0002f66f) form_field_slider_pane_t

0x18c2,	// (0x000218e3) input_focus_pane_cp9_ParamLimits

0x18c2,	// (0x000218e3) input_focus_pane_cp9

0x5a57,	// (0x00025a78) slider_cont_pane_ParamLimits

0x5a57,	// (0x00025a78) slider_cont_pane

0x1dac,	// (0x00021dcd) form_field_slider_wide_pane_t1_ParamLimits

0x1dac,	// (0x00021dcd) form_field_slider_wide_pane_t1

0x5a6b,	// (0x00025a8c) form_field_slider_wide_pane_t2_ParamLimits

0x5a6b,	// (0x00025a8c) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0002f674) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0002f674) form_field_slider_wide_pane_t

0x18c2,	// (0x000218e3) input_focus_pane_cp10_ParamLimits

0x18c2,	// (0x000218e3) input_focus_pane_cp10

0x5a7d,	// (0x00025a9e) slider_cont_pane_cp1_ParamLimits

0x5a7d,	// (0x00025a9e) slider_cont_pane_cp1

0x5a91,	// (0x00025ab2) slider_form_pane_cp

0x1dd0,	// (0x00021df1) input_focus_pane_g1

0x1dd8,	// (0x00021df9) input_focus_pane_g2

0x1de0,	// (0x00021e01) input_focus_pane_g3

0x1de8,	// (0x00021e09) input_focus_pane_g4

0x1df0,	// (0x00021e11) input_focus_pane_g5

0x1df8,	// (0x00021e19) input_focus_pane_g6

0x1e00,	// (0x00021e21) input_focus_pane_g7

0x1e08,	// (0x00021e29) input_focus_pane_g8

0x1e10,	// (0x00021e31) input_focus_pane_g9

0x186a,	// (0x0002188b) input_focus_pane_g10

0x0009,

0xf658,	// (0x0002f679) input_focus_pane_g

0x8caf,	// (0x00028cd0) wait_border_pane_g3_copy1

0x5a99,	// (0x00025aba) data_form_pane_t1

0x186a,	// (0x0002188b) wait_anim_pane_g1_copy1

0x5d63,	// (0x00025d84) data_form_wide_pane_t1

0x5ab4,	// (0x00025ad5) list_form_graphic_pane_cp_ParamLimits

0x5ab4,	// (0x00025ad5) list_form_graphic_pane_cp

0xaf43,	// (0x0002af64) slider_form_pane_g1

0xaf4c,	// (0x0002af6d) slider_form_pane_g2

0x0006,

0xf956,	// (0x0002f977) slider_form_pane_g

0x5ac8,	// (0x00025ae9) list_form_graphic_pane_ParamLimits

0x5ac8,	// (0x00025ae9) list_form_graphic_pane

0x5adf,	// (0x00025b00) list_form_graphic_pane_g1

0x5ae7,	// (0x00025b08) list_form_graphic_pane_t1_ParamLimits

0x5ae7,	// (0x00025b08) list_form_graphic_pane_t1

0x18d0,	// (0x000218f1) list_highlight_pane_cp5_ParamLimits

0x18d0,	// (0x000218f1) list_highlight_pane_cp5

0x5afc,	// (0x00025b1d) find_pane_g1

0x1e18,	// (0x00021e39) input_find_pane

0x5b05,	// (0x00025b26) input_find_pane_g1_ParamLimits

0x5b05,	// (0x00025b26) input_find_pane_g1

0x5b11,	// (0x00025b32) input_find_pane_t1_ParamLimits

0x5b11,	// (0x00025b32) input_find_pane_t1

0x5b26,	// (0x00025b47) input_find_pane_t2_ParamLimits

0x5b26,	// (0x00025b47) input_find_pane_t2

0x0001,

0xf66d,	// (0x0002f68e) input_find_pane_t_ParamLimits

0xf66d,	// (0x0002f68e) input_find_pane_t

0x1e21,	// (0x00021e42) input_focus_pane_cp5_ParamLimits

0x1e21,	// (0x00021e42) input_focus_pane_cp5

0x1e34,	// (0x00021e55) bg_popup_window_pane_cp2_ParamLimits

0x1e34,	// (0x00021e55) bg_popup_window_pane_cp2

0x1e41,	// (0x00021e62) listscroll_menu_pane_ParamLimits

0x1e41,	// (0x00021e62) listscroll_menu_pane

0x6f41,	// (0x00026f62) popup_submenu_window_ParamLimits

0x6f41,	// (0x00026f62) popup_submenu_window

0x1e4d,	// (0x00021e6e) find_popup_pane_g1

0x6f69,	// (0x00026f8a) input_popup_find_pane_cp

0x1e55,	// (0x00021e76) input_focus_pane_cp4_ParamLimits

0x1e55,	// (0x00021e76) input_focus_pane_cp4

0x1e63,	// (0x00021e84) input_popup_find_pane_t1_ParamLimits

0x1e63,	// (0x00021e84) input_popup_find_pane_t1

0x1874,	// (0x00021895) bg_popup_sub_pane_cp

0x1e91,	// (0x00021eb2) listscroll_popup_sub_pane

0x1e99,	// (0x00021eba) list_submenu_pane_ParamLimits

0x1e99,	// (0x00021eba) list_submenu_pane

0x1eaa,	// (0x00021ecb) scroll_pane_cp4

0x6f81,	// (0x00026fa2) list_single_popup_submenu_pane_ParamLimits

0x6f81,	// (0x00026fa2) list_single_popup_submenu_pane

0x27b8,	// (0x000227d9) list_single_popup_submenu_pane_g1

0x6f95,	// (0x00026fb6) list_single_popup_submenu_pane_t1_ParamLimits

0x6f95,	// (0x00026fb6) list_single_popup_submenu_pane_t1

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp1_ParamLimits

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp1

0x1eb2,	// (0x00021ed3) tabs_2_active_pane_g1

0x6faa,	// (0x00026fcb) tabs_2_active_pane_t1

0x18d0,	// (0x000218f1) bg_passive_tab_pane_cp1_ParamLimits

0x18d0,	// (0x000218f1) bg_passive_tab_pane_cp1

0x1eb2,	// (0x00021ed3) tabs_2_passive_pane_g1

0x6faa,	// (0x00026fcb) tabs_2_passive_pane_t1

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp4

0x6fca,	// (0x00026feb) tabs_2_long_active_pane_t1

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp4

0x85d8,	// (0x000285f9) list_single_midp_graphic_pane_g4_ParamLimits

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp5

0x6fe9,	// (0x0002700a) tabs_3_long_active_pane_t1

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp5

0x85d8,	// (0x000285f9) list_single_midp_graphic_pane_g4

0x18d0,	// (0x000218f1) bg_popup_window_pane_cp13_ParamLimits

0x18d0,	// (0x000218f1) bg_popup_window_pane_cp13

0x1ec6,	// (0x00021ee7) listscroll_popup_fast_pane_ParamLimits

0x1ec6,	// (0x00021ee7) listscroll_popup_fast_pane

0x1ed2,	// (0x00021ef3) grid_popup_fast_pane_ParamLimits

0x1ed2,	// (0x00021ef3) grid_popup_fast_pane

0x1ee4,	// (0x00021f05) scroll_pane_cp9_ParamLimits

0x1ee4,	// (0x00021f05) scroll_pane_cp9

0xc87c,	// (0x0002c89d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc87c,	// (0x0002c89d) list_single_graphic_hl_pane_t1_cp2

0x1ef7,	// (0x00021f18) input_focus_pane_cp20_ParamLimits

0x1ef7,	// (0x00021f18) input_focus_pane_cp20

0x1f05,	// (0x00021f26) query_popup_data_pane_t1_ParamLimits

0x1f05,	// (0x00021f26) query_popup_data_pane_t1

0x1f18,	// (0x00021f39) query_popup_data_pane_t2_ParamLimits

0x1f18,	// (0x00021f39) query_popup_data_pane_t2

0x1f5e,	// (0x00021f7f) query_popup_data_pane_t3_ParamLimits

0x1f5e,	// (0x00021f7f) query_popup_data_pane_t3

0x1f9f,	// (0x00021fc0) query_popup_data_pane_t4_ParamLimits

0x1f9f,	// (0x00021fc0) query_popup_data_pane_t4

0x1fdb,	// (0x00021ffc) query_popup_data_pane_t5_ParamLimits

0x1fdb,	// (0x00021ffc) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0002f693) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0002f693) query_popup_data_pane_t

0x1dd0,	// (0x00021df1) bg_set_opt_pane_g1

0x1dd8,	// (0x00021df9) bg_set_opt_pane_g2

0x1de0,	// (0x00021e01) bg_set_opt_pane_g3

0x1de8,	// (0x00021e09) bg_set_opt_pane_g4

0x1df0,	// (0x00021e11) bg_set_opt_pane_g5

0x1df8,	// (0x00021e19) bg_set_opt_pane_g6

0x1e00,	// (0x00021e21) bg_set_opt_pane_g7

0x1e08,	// (0x00021e29) bg_set_opt_pane_g8

0x1e10,	// (0x00021e31) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0002f69e) bg_set_opt_pane_g

0x74ea,	// (0x0002750b) control_top_pane_stacon_ParamLimits

0x74ea,	// (0x0002750b) control_top_pane_stacon

0x753d,	// (0x0002755e) signal_pane_stacon_ParamLimits

0x753d,	// (0x0002755e) signal_pane_stacon

0x2367,	// (0x00022388) stacon_top_pane_g1_ParamLimits

0x2367,	// (0x00022388) stacon_top_pane_g1

0x7562,	// (0x00027583) title_pane_stacon_ParamLimits

0x7562,	// (0x00027583) title_pane_stacon

0x758c,	// (0x000275ad) uni_indicator_pane_stacon_ParamLimits

0x758c,	// (0x000275ad) uni_indicator_pane_stacon

0x75a1,	// (0x000275c2) battery_pane_stacon_ParamLimits

0x75a1,	// (0x000275c2) battery_pane_stacon

0x75e5,	// (0x00027606) control_bottom_pane_stacon_ParamLimits

0x75e5,	// (0x00027606) control_bottom_pane_stacon

0x7608,	// (0x00027629) navi_pane_stacon_ParamLimits

0x7608,	// (0x00027629) navi_pane_stacon

0x2389,	// (0x000223aa) stacon_bottom_pane_g1_ParamLimits

0x2389,	// (0x000223aa) stacon_bottom_pane_g1

0x7015,	// (0x00027036) aid_levels_signal_lsc_ParamLimits

0x7015,	// (0x00027036) aid_levels_signal_lsc

0x702b,	// (0x0002704c) signal_pane_stacon_g1_ParamLimits

0x702b,	// (0x0002704c) signal_pane_stacon_g1

0x703f,	// (0x00027060) signal_pane_stacon_g2_ParamLimits

0x703f,	// (0x00027060) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0002f6b1) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0002f6b1) signal_pane_stacon_g

0x7074,	// (0x00027095) title_pane_stacon_t1_ParamLimits

0x7074,	// (0x00027095) title_pane_stacon_t1

0x2033,	// (0x00022054) uni_indicator_pane_stacon_g1

0x203d,	// (0x0002205e) uni_indicator_pane_stacon_g2

0x201f,	// (0x00022040) uni_indicator_pane_stacon_g3

0x2029,	// (0x0002204a) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0002f6bd) uni_indicator_pane_stacon_g

0x7099,	// (0x000270ba) control_top_pane_stacon_g1

0x70a1,	// (0x000270c2) control_top_pane_stacon_t1_ParamLimits

0x70a1,	// (0x000270c2) control_top_pane_stacon_t1

0x70d8,	// (0x000270f9) aid_levels_battery_lsc_ParamLimits

0x70d8,	// (0x000270f9) aid_levels_battery_lsc

0x70ef,	// (0x00027110) battery_pane_stacon_g1_ParamLimits

0x70ef,	// (0x00027110) battery_pane_stacon_g1

0x7102,	// (0x00027123) battery_pane_stacon_g2_ParamLimits

0x7102,	// (0x00027123) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0002f6c6) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0002f6c6) battery_pane_stacon_g

0x7140,	// (0x00027161) navi_icon_pane_stacon

0x7154,	// (0x00027175) navi_navi_pane_stacon

0x7140,	// (0x00027161) navi_text_pane_stacon

0x7099,	// (0x000270ba) control_bottom_pane_stacon_g1

0x7168,	// (0x00027189) control_bottom_pane_stacon_t1_ParamLimits

0x7168,	// (0x00027189) control_bottom_pane_stacon_t1

0x719f,	// (0x000271c0) grid_app_pane_ParamLimits

0x719f,	// (0x000271c0) grid_app_pane

0x71c1,	// (0x000271e2) scroll_pane_cp15_ParamLimits

0x71c1,	// (0x000271e2) scroll_pane_cp15

0x71d4,	// (0x000271f5) cell_app_pane_ParamLimits

0x71d4,	// (0x000271f5) cell_app_pane

0x71fc,	// (0x0002721d) cell_app_pane_g1_ParamLimits

0x71fc,	// (0x0002721d) cell_app_pane_g1

0x2061,	// (0x00022082) cell_app_pane_g2_ParamLimits

0x2061,	// (0x00022082) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0002f6cb) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0002f6cb) cell_app_pane_g

0x7220,	// (0x00027241) cell_app_pane_t1_ParamLimits

0x7220,	// (0x00027241) cell_app_pane_t1

0x206d,	// (0x0002208e) grid_highlight_pane_ParamLimits

0x206d,	// (0x0002208e) grid_highlight_pane

0x1dd0,	// (0x00021df1) cell_highlight_pane_g1

0x1dd8,	// (0x00021df9) cell_highlight_pane_g2

0x1de0,	// (0x00021e01) cell_highlight_pane_g3

0x1de8,	// (0x00021e09) cell_highlight_pane_g4

0x1df0,	// (0x00021e11) cell_highlight_pane_g5

0x1df8,	// (0x00021e19) cell_highlight_pane_g6

0x1e00,	// (0x00021e21) cell_highlight_pane_g7

0x1e08,	// (0x00021e29) cell_highlight_pane_g8

0x1e10,	// (0x00021e31) cell_highlight_pane_g9

0x186a,	// (0x0002188b) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0002f679) cell_highlight_pane_g

0x207e,	// (0x0002209f) bg_scroll_pane

0x724a,	// (0x0002726b) scroll_handle_pane

0x20c5,	// (0x000220e6) scroll_bg_pane_g1

0x20da,	// (0x000220fb) scroll_bg_pane_g2

0x20f2,	// (0x00022113) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0002f6d0) scroll_bg_pane_g

0x7273,	// (0x00027294) scroll_handle_focus_pane_ParamLimits

0x7273,	// (0x00027294) scroll_handle_focus_pane

0x20c5,	// (0x000220e6) scroll_handle_pane_g1

0x2107,	// (0x00022128) scroll_handle_pane_g2

0x20f2,	// (0x00022113) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0002f6d7) scroll_handle_pane_g

0x1e55,	// (0x00021e76) bg_popup_sub_pane_cp21_ParamLimits

0x1e55,	// (0x00021e76) bg_popup_sub_pane_cp21

0x7280,	// (0x000272a1) popup_fep_japan_predictive_window_t1_ParamLimits

0x7280,	// (0x000272a1) popup_fep_japan_predictive_window_t1

0x729a,	// (0x000272bb) popup_fep_japan_predictive_window_t2_ParamLimits

0x729a,	// (0x000272bb) popup_fep_japan_predictive_window_t2

0x72cd,	// (0x000272ee) popup_fep_japan_predictive_window_t3_ParamLimits

0x72cd,	// (0x000272ee) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0002f6de) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0002f6de) popup_fep_japan_predictive_window_t

0x1874,	// (0x00021895) bg_popup_sub_pane_cp23

0x27e5,	// (0x00022806) listscroll_japin_cand_pane

0x211b,	// (0x0002213c) popup_fep_japan_candidate_window_t1

0x2129,	// (0x0002214a) candidate_pane_ParamLimits

0x2129,	// (0x0002214a) candidate_pane

0x7304,	// (0x00027325) scroll_pane_cp30

0x213b,	// (0x0002215c) list_single_popup_jap_candidate_pane_ParamLimits

0x213b,	// (0x0002215c) list_single_popup_jap_candidate_pane

0x1874,	// (0x00021895) list_highlight_pane_cp30

0x2150,	// (0x00022171) list_single_popup_jap_candidate_pane_t1

0x215f,	// (0x00022180) level_1_signal

0x216c,	// (0x0002218d) level_2_signal

0x2179,	// (0x0002219a) level_3_signal

0x2186,	// (0x000221a7) level_4_signal

0x2193,	// (0x000221b4) level_5_signal

0x21a0,	// (0x000221c1) level_6_signal

0x21ad,	// (0x000221ce) level_7_signal

0x215f,	// (0x00022180) level_1_battery

0x216c,	// (0x0002218d) level_2_battery

0x2179,	// (0x0002219a) level_3_battery

0x2186,	// (0x000221a7) level_4_battery

0x2193,	// (0x000221b4) level_5_battery

0x21a0,	// (0x000221c1) level_6_battery

0x21ad,	// (0x000221ce) level_7_battery

0x21d2,	// (0x000221f3) list_menu_pane_ParamLimits

0x21d2,	// (0x000221f3) list_menu_pane

0x21e8,	// (0x00022209) scroll_pane_cp25_ParamLimits

0x21e8,	// (0x00022209) scroll_pane_cp25

0x2201,	// (0x00022222) list_double2_graphic_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double2_graphic_pane_cp2

0x2201,	// (0x00022222) list_double2_large_graphic_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double2_large_graphic_pane_cp2

0x2201,	// (0x00022222) list_double2_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double2_pane_cp2

0x2201,	// (0x00022222) list_double_graphic_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double_graphic_pane_cp2

0x2201,	// (0x00022222) list_double_large_graphic_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double_large_graphic_pane_cp2

0x2201,	// (0x00022222) list_double_number_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double_number_pane_cp2

0x2201,	// (0x00022222) list_double_pane_cp2_ParamLimits

0x2201,	// (0x00022222) list_double_pane_cp2

0x733f,	// (0x00027360) list_single_2graphic_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_2graphic_pane_cp2

0x733f,	// (0x00027360) list_single_graphic_heading_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_graphic_heading_pane_cp2

0x733f,	// (0x00027360) list_single_graphic_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_graphic_pane_cp2

0x733f,	// (0x00027360) list_single_heading_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_heading_pane_cp2

0x2211,	// (0x00022232) list_single_large_graphic_pane_cp2_ParamLimits

0x2211,	// (0x00022232) list_single_large_graphic_pane_cp2

0x733f,	// (0x00027360) list_single_number_heading_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_number_heading_pane_cp2

0x733f,	// (0x00027360) list_single_number_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_number_pane_cp2

0x7355,	// (0x00027376) list_single_pane_cp2_ParamLimits

0x7355,	// (0x00027376) list_single_pane_cp2

0x222b,	// (0x0002224c) bg_popup_sub_pane_cp22

0x742d,	// (0x0002744e) popup_side_volume_key_window_g1

0x7451,	// (0x00027472) popup_side_volume_key_window_t1

0x746d,	// (0x0002748e) volume_small_pane_cp1

0x18c2,	// (0x000218e3) bg_popup_sub_pane_cp24_ParamLimits

0x18c2,	// (0x000218e3) bg_popup_sub_pane_cp24

0x2241,	// (0x00022262) fep_china_uni_candidate_pane_ParamLimits

0x2241,	// (0x00022262) fep_china_uni_candidate_pane

0x2255,	// (0x00022276) fep_china_uni_entry_pane

0x2265,	// (0x00022286) popup_fep_china_uni_window_g1

0x7475,	// (0x00027496) fep_china_uni_entry_pane_g1

0x747d,	// (0x0002749e) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0002f70f) fep_china_uni_entry_pane_g

0x2281,	// (0x000222a2) fep_entry_item_pane

0x228b,	// (0x000222ac) fep_candidate_item_pane

0x7485,	// (0x000274a6) fep_china_uni_candidate_pane_g1

0x2293,	// (0x000222b4) fep_china_uni_candidate_pane_g2

0x229b,	// (0x000222bc) fep_china_uni_candidate_pane_g3

0x748d,	// (0x000274ae) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0002f714) fep_china_uni_candidate_pane_g

0x186a,	// (0x0002188b) fep_entry_item_pane_g1

0x22a3,	// (0x000222c4) fep_entry_item_pane_t1_ParamLimits

0x22a3,	// (0x000222c4) fep_entry_item_pane_t1

0x22b9,	// (0x000222da) fep_candidate_item_pane_t1_ParamLimits

0x22b9,	// (0x000222da) fep_candidate_item_pane_t1

0x22ce,	// (0x000222ef) fep_candidate_item_pane_t2_ParamLimits

0x22ce,	// (0x000222ef) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0002f71d) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0002f71d) fep_candidate_item_pane_t

0x18d0,	// (0x000218f1) list_highlight_pane_cp31_ParamLimits

0x18d0,	// (0x000218f1) list_highlight_pane_cp31

0x22e0,	// (0x00022301) level_1_signal_lsc

0x22e9,	// (0x0002230a) level_2_signal_lsc

0x22f2,	// (0x00022313) level_3_signal_lsc

0x22fb,	// (0x0002231c) level_4_signal_lsc

0x2304,	// (0x00022325) level_5_signal_lsc

0x230d,	// (0x0002232e) level_6_signal_lsc

0x2316,	// (0x00022337) level_7_signal_lsc

0x2316,	// (0x00022337) level_1_battery_lsc

0x231f,	// (0x00022340) level_2_battery_lsc

0x2328,	// (0x00022349) level_3_battery_lsc

0x2331,	// (0x00022352) level_4_battery_lsc

0x233a,	// (0x0002235b) level_5_battery_lsc

0x2343,	// (0x00022364) level_6_battery_lsc

0x22e0,	// (0x00022301) level_7_battery_lsc

0x234c,	// (0x0002236d) scroll_handle_focus_pane_g1

0x2355,	// (0x00022376) scroll_handle_focus_pane_g2

0x235e,	// (0x0002237f) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0002f722) scroll_handle_focus_pane_g

0x5b3b,	// (0x00025b5c) list_single_2graphic_pane_g1_ParamLimits

0x5b3b,	// (0x00025b5c) list_single_2graphic_pane_g1

0x557d,	// (0x0002559e) list_single_2graphic_pane_g2_ParamLimits

0x557d,	// (0x0002559e) list_single_2graphic_pane_g2

0x5503,	// (0x00025524) list_single_2graphic_pane_g3_ParamLimits

0x5503,	// (0x00025524) list_single_2graphic_pane_g3

0x5b47,	// (0x00025b68) list_single_2graphic_pane_g4_ParamLimits

0x5b47,	// (0x00025b68) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0002f729) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0002f729) list_single_2graphic_pane_g

0x5b53,	// (0x00025b74) list_single_2graphic_pane_t1_ParamLimits

0x5b53,	// (0x00025b74) list_single_2graphic_pane_t1

0x5b81,	// (0x00025ba2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b81,	// (0x00025ba2) list_double2_graphic_large_graphic_pane_g1

0x5622,	// (0x00025643) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5622,	// (0x00025643) list_double2_graphic_large_graphic_pane_g2

0x55ee,	// (0x0002560f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x55ee,	// (0x0002560f) list_double2_graphic_large_graphic_pane_g3

0x5b91,	// (0x00025bb2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b91,	// (0x00025bb2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0002f732) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0002f732) list_double2_graphic_large_graphic_pane_g

0x5b9d,	// (0x00025bbe) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b9d,	// (0x00025bbe) list_double2_graphic_large_graphic_pane_t1

0x5bb3,	// (0x00025bd4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5bb3,	// (0x00025bd4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0002f73b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0002f73b) list_double2_graphic_large_graphic_pane_t

0x7667,	// (0x00027688) popup_fast_swap_window_ParamLimits

0x7667,	// (0x00027688) popup_fast_swap_window

0x7683,	// (0x000276a4) popup_side_volume_key_window

0x2414,	// (0x00022435) stacon_top_pane

0x241e,	// (0x0002243f) status_pane_ParamLimits

0x241e,	// (0x0002243f) status_pane

0x769d,	// (0x000276be) status_small_pane

0x1874,	// (0x00021895) control_pane

0x1874,	// (0x00021895) stacon_bottom_pane

0x1cca,	// (0x00021ceb) scroll_pane_cp121

0x1cc1,	// (0x00021ce2) set_content_pane

0x7495,	// (0x000274b6) bg_active_tab_pane_g1_cp1

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp1

0x74a7,	// (0x000274c8) bg_active_tab_pane_g3_cp1

0x7495,	// (0x000274b6) bg_passive_tab_pane_g1_cp1

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp1

0x74a7,	// (0x000274c8) bg_passive_tab_pane_g3_cp1

0x74b0,	// (0x000274d1) bg_active_tab_pane_g1_cp2

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp2

0x74b9,	// (0x000274da) bg_active_tab_pane_g3_cp2

0x74b0,	// (0x000274d1) bg_passive_tab_pane_g1_cp2

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp2

0x74b9,	// (0x000274da) bg_passive_tab_pane_g3_cp2

0x74c2,	// (0x000274e3) bg_active_tab_pane_g1_cp3

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp3

0x74cb,	// (0x000274ec) bg_active_tab_pane_g3_cp3

0x74c2,	// (0x000274e3) bg_passive_tab_pane_g1_cp3

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp3

0x74cb,	// (0x000274ec) bg_passive_tab_pane_g3_cp3

0x74d4,	// (0x000274f5) bg_active_tab_pane_g1_cp4

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp4

0x74df,	// (0x00027500) bg_active_tab_pane_g3_cp4

0x74d4,	// (0x000274f5) bg_passive_tab_pane_g1_cp4

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp4

0x74df,	// (0x00027500) bg_passive_tab_pane_g3_cp4

0x762b,	// (0x0002764c) bg_active_tab_pane_g1_cp5

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp5

0x7634,	// (0x00027655) bg_active_tab_pane_g3_cp5

0x762b,	// (0x0002764c) bg_passive_tab_pane_g1_cp5

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp5

0x7634,	// (0x00027655) bg_passive_tab_pane_g3_cp5

0x763d,	// (0x0002765e) list_set_graphic_pane_ParamLimits

0x763d,	// (0x0002765e) list_set_graphic_pane

0x1874,	// (0x00021895) bg_set_opt_pane_cp4

0x23a5,	// (0x000223c6) list_set_graphic_pane_g1_ParamLimits

0x23a5,	// (0x000223c6) list_set_graphic_pane_g1

0x23b1,	// (0x000223d2) list_set_graphic_pane_g2_ParamLimits

0x23b1,	// (0x000223d2) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0002f740) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0002f740) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0002fad8) volume_small_pane_cp_g

0x765b,	// (0x0002767c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x765b,	// (0x0002767c) list_double2_large_graphic_pane_g1_cp2

0x23d3,	// (0x000223f4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x23d3,	// (0x000223f4) list_double2_large_graphic_pane_g2_cp2

0x23e4,	// (0x00022405) list_double2_large_graphic_pane_g3_cp2

0x23ec,	// (0x0002240d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x23ec,	// (0x0002240d) list_double2_large_graphic_pane_t1_cp2

0x2402,	// (0x00022423) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2402,	// (0x00022423) list_double2_large_graphic_pane_t2_cp2

0xab05,	// (0x0002ab26) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab05,	// (0x0002ab26) list_double_large_graphic_pane_g1_cp2

0xab16,	// (0x0002ab37) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab16,	// (0x0002ab37) list_double_large_graphic_pane_g2_cp2

0x252e,	// (0x0002254f) list_double_large_graphic_pane_g3_cp2

0xab27,	// (0x0002ab48) list_double_large_graphic_pane_g4_cp

0xab2f,	// (0x0002ab50) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab2f,	// (0x0002ab50) list_double_large_graphic_pane_t1_cp2

0xab46,	// (0x0002ab67) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab46,	// (0x0002ab67) list_double_large_graphic_pane_t2_cp2

0x242c,	// (0x0002244d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x242c,	// (0x0002244d) list_double2_graphic_pane_g1_cp2

0x243a,	// (0x0002245b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x243a,	// (0x0002245b) list_double2_graphic_pane_g2_cp2

0x244b,	// (0x0002246c) list_double2_graphic_pane_g3_cp2

0x2455,	// (0x00022476) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2455,	// (0x00022476) list_double2_graphic_pane_t1_cp2

0x246b,	// (0x0002248c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x246b,	// (0x0002248c) list_double2_graphic_pane_t2_cp2

0x1c5c,	// (0x00021c7d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1c5c,	// (0x00021c7d) list_single_number_heading_pane_g1_cp2

0x247d,	// (0x0002249e) list_single_number_heading_pane_g2_cp2

0x2485,	// (0x000224a6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2485,	// (0x000224a6) list_single_number_heading_pane_t1_cp2

0x249b,	// (0x000224bc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x249b,	// (0x000224bc) list_single_number_heading_pane_t2_cp2

0x24ad,	// (0x000224ce) list_single_number_heading_pane_t3_cp2_ParamLimits

0x24ad,	// (0x000224ce) list_single_number_heading_pane_t3_cp2

0x1c5c,	// (0x00021c7d) list_single_heading_pane_g1_cp2_ParamLimits

0x1c5c,	// (0x00021c7d) list_single_heading_pane_g1_cp2

0x247d,	// (0x0002249e) list_single_heading_pane_g2_cp2

0x2485,	// (0x000224a6) list_single_heading_pane_t1_cp2_ParamLimits

0x2485,	// (0x000224a6) list_single_heading_pane_t1_cp2

0xa90f,	// (0x0002a930) list_single_heading_pane_t2_cp2_ParamLimits

0xa90f,	// (0x0002a930) list_single_heading_pane_t2_cp2

0xa857,	// (0x0002a878) list_double_graphic_pane_g1_cp2_ParamLimits

0xa857,	// (0x0002a878) list_double_graphic_pane_g1_cp2

0xa863,	// (0x0002a884) list_double_graphic_pane_g2_cp2_ParamLimits

0xa863,	// (0x0002a884) list_double_graphic_pane_g2_cp2

0xa872,	// (0x0002a893) list_double_graphic_pane_g3_cp2

0xa87a,	// (0x0002a89b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa87a,	// (0x0002a89b) list_double_graphic_pane_t1_cp2

0xa890,	// (0x0002a8b1) list_double_graphic_pane_t2_cp2_ParamLimits

0xa890,	// (0x0002a8b1) list_double_graphic_pane_t2_cp2

0x2522,	// (0x00022543) list_double_number_pane_g1_cp2_ParamLimits

0x2522,	// (0x00022543) list_double_number_pane_g1_cp2

0x252e,	// (0x0002254f) list_double_number_pane_g2_cp2

0xa81b,	// (0x0002a83c) list_double_number_pane_t1_cp2_ParamLimits

0xa81b,	// (0x0002a83c) list_double_number_pane_t1_cp2

0xa82f,	// (0x0002a850) list_double_number_pane_t2_cp2_ParamLimits

0xa82f,	// (0x0002a850) list_double_number_pane_t2_cp2

0xa845,	// (0x0002a866) list_double_number_pane_t3_cp2_ParamLimits

0xa845,	// (0x0002a866) list_double_number_pane_t3_cp2

0xa704,	// (0x0002a725) list_single_graphic_pane_g1_cp2_ParamLimits

0xa704,	// (0x0002a725) list_single_graphic_pane_g1_cp2

0x1c50,	// (0x00021c71) list_single_graphic_pane_g2_cp2_ParamLimits

0x1c50,	// (0x00021c71) list_single_graphic_pane_g2_cp2

0x2587,	// (0x000225a8) list_single_graphic_pane_g3_cp2

0xa6da,	// (0x0002a6fb) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6da,	// (0x0002a6fb) list_single_graphic_pane_t1_cp2

0x1c50,	// (0x00021c71) list_single_number_pane_g1_cp2_ParamLimits

0x1c50,	// (0x00021c71) list_single_number_pane_g1_cp2

0x2587,	// (0x000225a8) list_single_number_pane_g2_cp2

0xa6da,	// (0x0002a6fb) list_single_number_pane_t1_cp2_ParamLimits

0xa6da,	// (0x0002a6fb) list_single_number_pane_t1_cp2

0xa6f0,	// (0x0002a711) list_single_number_pane_t2_cp2_ParamLimits

0xa6f0,	// (0x0002a711) list_single_number_pane_t2_cp2

0x23d3,	// (0x000223f4) list_double2_pane_g1_cp2_ParamLimits

0x23d3,	// (0x000223f4) list_double2_pane_g1_cp2

0x23e4,	// (0x00022405) list_double2_pane_g2_cp2

0x24fa,	// (0x0002251b) list_double2_pane_t1_cp2_ParamLimits

0x24fa,	// (0x0002251b) list_double2_pane_t1_cp2

0x2510,	// (0x00022531) list_double2_pane_t2_cp2_ParamLimits

0x2510,	// (0x00022531) list_double2_pane_t2_cp2

0x2522,	// (0x00022543) list_double_pane_g1_cp2_ParamLimits

0x2522,	// (0x00022543) list_double_pane_g1_cp2

0x252e,	// (0x0002254f) list_double_pane_g2_cp2

0x2536,	// (0x00022557) list_double_pane_t1_cp2_ParamLimits

0x2536,	// (0x00022557) list_double_pane_t1_cp2

0x254c,	// (0x0002256d) list_double_pane_t2_cp2_ParamLimits

0x254c,	// (0x0002256d) list_double_pane_t2_cp2

0x76a8,	// (0x000276c9) list_single_pane_cp2_g3

0x1c50,	// (0x00021c71) list_single_pane_g1_cp2_ParamLimits

0x1c50,	// (0x00021c71) list_single_pane_g1_cp2

0x2587,	// (0x000225a8) list_single_pane_g2_cp2

0x258f,	// (0x000225b0) list_single_pane_t1_cp2_ParamLimits

0x258f,	// (0x000225b0) list_single_pane_t1_cp2

0x76b0,	// (0x000276d1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x76b0,	// (0x000276d1) list_single_large_graphic_pane_g1_cp2

0x25a7,	// (0x000225c8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x25a7,	// (0x000225c8) list_single_large_graphic_pane_g2_cp2

0x25b3,	// (0x000225d4) list_single_large_graphic_pane_g3_cp2

0x76bc,	// (0x000276dd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x76bc,	// (0x000276dd) list_single_large_graphic_pane_g4_cp1

0x25bb,	// (0x000225dc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25bb,	// (0x000225dc) list_single_large_graphic_pane_t1_cp2

0xa6a6,	// (0x0002a6c7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6a6,	// (0x0002a6c7) list_single_graphic_heading_pane_g1_cp2

0xa673,	// (0x0002a694) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa673,	// (0x0002a694) list_single_graphic_heading_pane_g4_cp2

0x2587,	// (0x000225a8) list_single_graphic_heading_pane_g5_cp2

0xa6b2,	// (0x0002a6d3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b2,	// (0x0002a6d3) list_single_graphic_heading_pane_t1_cp2

0xa6c8,	// (0x0002a6e9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6c8,	// (0x0002a6e9) list_single_graphic_heading_pane_t2_cp2

0xa667,	// (0x0002a688) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa667,	// (0x0002a688) list_single_2graphic_pane_g1_cp2

0xa673,	// (0x0002a694) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa673,	// (0x0002a694) list_single_2graphic_pane_g2_cp2

0x2587,	// (0x000225a8) list_single_2graphic_pane_g3_cp2

0xa684,	// (0x0002a6a5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa684,	// (0x0002a6a5) list_single_2graphic_pane_g4_cp2

0xa690,	// (0x0002a6b1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa690,	// (0x0002a6b1) list_single_2graphic_pane_t1_cp2

0x186a,	// (0x0002188b) list_highlight_pane_g10_cp1

0xa24f,	// (0x0002a270) list_highlight_pane_g1_cp1

0xa257,	// (0x0002a278) list_highlight_pane_g2_cp1

0xa25f,	// (0x0002a280) list_highlight_pane_g3_cp1

0xa267,	// (0x0002a288) list_highlight_pane_g4_cp1

0xa26f,	// (0x0002a290) list_highlight_pane_g5_cp1

0xa277,	// (0x0002a298) list_highlight_pane_g6_cp1

0xa27f,	// (0x0002a2a0) list_highlight_pane_g7_cp1

0xa287,	// (0x0002a2a8) list_highlight_pane_g8_cp1

0xa28f,	// (0x0002a2b0) list_highlight_pane_g9_cp1

0x8dd2,	// (0x00028df3) form_field_slider_pane_t3

0x8de0,	// (0x00028e01) form_field_slider_pane_t4

0x8dee,	// (0x00028e0f) slider_form_pane_ParamLimits

0x8dee,	// (0x00028e0f) slider_form_pane

0x1874,	// (0x00021895) control_abbreviations

0x1874,	// (0x00021895) control_conventions

0x1874,	// (0x00021895) control_definitions

0x1874,	// (0x00021895) format_table_attribute

0xa959,	// (0x0002a97a) bg_popup_preview_window_pane_g9

0x1874,	// (0x00021895) format_table_data2

0x1874,	// (0x00021895) format_table_data3

0x1874,	// (0x00021895) format_table_data_example

0x0008,

0x1874,	// (0x00021895) intro_purpose

0xf8b6,	// (0x0002f8d7) bg_popup_preview_window_pane_g

0x1874,	// (0x00021895) texts_category

0x1874,	// (0x00021895) texts_graphics

0x25d1,	// (0x000225f2) text_digital

0x25e0,	// (0x00022601) text_primary

0x25ef,	// (0x00022610) text_primary_small

0x25fe,	// (0x0002261f) text_secondary

0x260d,	// (0x0002262e) text_title

0xb08c,	// (0x0002b0ad) bg_passive_tab_pane_g1_cp3_srt

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp3_srt

0xb095,	// (0x0002b0b6) bg_passive_tab_pane_g3_cp3_srt

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp3_srt_ParamLimits

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp3_srt

0xb09e,	// (0x0002b0bf) tabs_4_active_pane_srt_g1

0xb0a6,	// (0x0002b0c7) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a6,	// (0x0002b0c7) tabs_4_active_pane_srt_t1

0xb08c,	// (0x0002b0ad) bg_active_tab_pane_g1_cp3_copy1

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp3_copy1

0xb095,	// (0x0002b0b6) bg_active_tab_pane_g3_cp3_copy1

0x18d0,	// (0x000218f1) tabs_2_long_active_pane_srt_ParamLimits

0x18d0,	// (0x000218f1) tabs_2_long_active_pane_srt

0x18d0,	// (0x000218f1) tabs_2_long_passive_pane_srt_ParamLimits

0x18d0,	// (0x000218f1) tabs_2_long_passive_pane_srt

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp4_srt

0xad7a,	// (0x0002ad9b) bg_passive_tab_pane_g1_cp4_srt

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp4_srt

0xad83,	// (0x0002ada4) bg_passive_tab_pane_g3_cp4_srt

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp4_srt_ParamLimits

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp4_srt

0xad8c,	// (0x0002adad) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad8c,	// (0x0002adad) tabs_2_long_active_pane_srt_t1

0xad7a,	// (0x0002ad9b) bg_active_tab_pane_g1_cp4_srt

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp4_srt

0xad83,	// (0x0002ada4) bg_active_tab_pane_g3_cp4_srt

0x18c2,	// (0x000218e3) tabs_3_long_active_pane_srt_ParamLimits

0x18c2,	// (0x000218e3) tabs_3_long_active_pane_srt

0x18c2,	// (0x000218e3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x18c2,	// (0x000218e3) tabs_3_long_passive_pane_cp_srt

0x18c2,	// (0x000218e3) tabs_3_long_passive_pane_srt_ParamLimits

0x18c2,	// (0x000218e3) tabs_3_long_passive_pane_srt

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp5_srt

0x762b,	// (0x0002764c) bg_passive_tab_pane_g1_cp5_srt

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp5_srt

0x7634,	// (0x00027655) bg_passive_tab_pane_g3_cp5_srt

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp5_srt_ParamLimits

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp5_srt

0xad68,	// (0x0002ad89) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad68,	// (0x0002ad89) tabs_3_long_active_pane_srt_t1

0x762b,	// (0x0002764c) bg_active_tab_pane_g1_cp5_srt

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp5_srt

0x7634,	// (0x00027655) bg_active_tab_pane_g3_cp5_srt

0xad5a,	// (0x0002ad7b) navi_text_pane_srt_t1

0xad52,	// (0x0002ad73) navi_icon_pane_srt_g1

0x26f8,	// (0x00022719) midp_editing_number_pane_srt

0x261c,	// (0x0002263d) midp_ticker_pane_srt

0x2700,	// (0x00022721) midp_ticker_pane_srt_g1

0x2708,	// (0x00022729) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0002f75f) midp_ticker_pane_srt_g

0x2710,	// (0x00022731) midp_ticker_pane_srt_t1

0xad43,	// (0x0002ad64) midp_editing_number_pane_t1_copy1

0x76d6,	// (0x000276f7) listscroll_midp_pane

0x76d6,	// (0x000276f7) midp_form_pane

0x7748,	// (0x00027769) midp_info_popup_window_ParamLimits

0x7748,	// (0x00027769) midp_info_popup_window

0x1e55,	// (0x00021e76) bg_popup_sub_pane_cp50_ParamLimits

0x1e55,	// (0x00021e76) bg_popup_sub_pane_cp50

0x8ade,	// (0x00028aff) listscroll_midp_info_pane_ParamLimits

0x8ade,	// (0x00028aff) listscroll_midp_info_pane

0x8abe,	// (0x00028adf) listscroll_form_midp_pane_ParamLimits

0x8abe,	// (0x00028adf) listscroll_form_midp_pane

0x8aca,	// (0x00028aeb) scroll_bar_cp050

0x8a9e,	// (0x00028abf) list_midp_pane

0xbaf7,	// (0x0002bb18) signal_pane_g2_cp

0x89d8,	// (0x000289f9) listscroll_midp_info_pane_t1_ParamLimits

0x89d8,	// (0x000289f9) listscroll_midp_info_pane_t1

0x89f0,	// (0x00028a11) listscroll_midp_info_pane_t2_ParamLimits

0x89f0,	// (0x00028a11) listscroll_midp_info_pane_t2

0x8a2e,	// (0x00028a4f) listscroll_midp_info_pane_t3_ParamLimits

0x8a2e,	// (0x00028a4f) listscroll_midp_info_pane_t3

0x8a68,	// (0x00028a89) listscroll_midp_info_pane_t4_ParamLimits

0x8a68,	// (0x00028a89) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x0002f812) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x0002f812) listscroll_midp_info_pane_t

0x1eaa,	// (0x00021ecb) scroll_pane_cp21

0x8978,	// (0x00028999) form_midp_field_choice_group_pane

0x8981,	// (0x000289a2) form_midp_field_text_pane

0x89be,	// (0x000289df) form_midp_field_time_pane

0x89c6,	// (0x000289e7) form_midp_gauge_slider_pane

0x89cf,	// (0x000289f0) form_midp_gauge_wait_pane

0x1874,	// (0x00021895) form_midp_image_pane

0x5d1e,	// (0x00025d3f) list_single_midp_pane_ParamLimits

0x5d1e,	// (0x00025d3f) list_single_midp_pane

0x892d,	// (0x0002894e) form_midp_field_text_pane_t1

0x866f,	// (0x00028690) input_focus_pane_cp050

0x8967,	// (0x00028988) list_midp_form_text_pane

0x88fc,	// (0x0002891d) form_midp_field_choice_group_pane_t1

0x890a,	// (0x0002892b) input_focus_pane_cp051

0x891e,	// (0x0002893f) list_midp_choice_pane

0x1874,	// (0x00021895) status_idle_pane

0x88e0,	// (0x00028901) form_midp_field_time_pane_t1

0x186a,	// (0x0002188b) wait_anim_pane_g2_copy1

0x88ee,	// (0x0002890f) form_midp_field_time_pane_t2

0x0001,

0x267c,	// (0x0002269d) aid_navinavi_width_2_pane

0xf7ec,	// (0x0002f80d) form_midp_field_time_pane_t

0x1874,	// (0x00021895) input_focus_pane_cp052

0x1874,	// (0x00021895) bg_input_focus_pane_cp040

0x88a0,	// (0x000288c1) form_midp_gauge_slider_pane_t1

0x88ae,	// (0x000288cf) form_midp_gauge_slider_pane_t2

0x88bc,	// (0x000288dd) form_midp_gauge_slider_pane_t3

0x88ca,	// (0x000288eb) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0002f804) form_midp_gauge_slider_pane_t

0x88d8,	// (0x000288f9) form_midp_slider_pane

0x18d0,	// (0x000218f1) bg_input_focus_pane_cp041_ParamLimits

0x18d0,	// (0x000218f1) bg_input_focus_pane_cp041

0x886d,	// (0x0002888e) form_midp_gauge_wait_pane_t1_ParamLimits

0x886d,	// (0x0002888e) form_midp_gauge_wait_pane_t1

0x887f,	// (0x000288a0) form_midp_gauge_wait_pane_t2_ParamLimits

0x887f,	// (0x000288a0) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x0002f7ff) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x0002f7ff) form_midp_gauge_wait_pane_t

0x8891,	// (0x000288b2) form_midp_wait_pane_ParamLimits

0x8891,	// (0x000288b2) form_midp_wait_pane

0x8837,	// (0x00028858) form_midp_image_pane_g1

0x8840,	// (0x00028861) form_midp_image_pane_t1

0x884f,	// (0x00028870) form_midp_image_pane_t2

0x885e,	// (0x0002887f) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0002f7f8) form_midp_image_pane_t

0x882e,	// (0x0002884f) list_single_midp_pane_g1

0x5d0f,	// (0x00025d30) list_single_midp_pane_t1

0x8805,	// (0x00028826) list_midp_form_item_pane_ParamLimits

0x8805,	// (0x00028826) list_midp_form_item_pane

0x2624,	// (0x00022645) list_midp_form_item_pane_t1

0x2633,	// (0x00022654) midp_ticker_pane_g1

0x263f,	// (0x00022660) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0002f745) midp_ticker_pane_g

0x264b,	// (0x0002266c) midp_ticker_pane_t1

0xaf90,	// (0x0002afb1) midp_editing_number_pane_t1

0xaf6e,	// (0x0002af8f) midp_editing_number_pane

0xaf7d,	// (0x0002af9e) midp_ticker_pane

0xad33,	// (0x0002ad54) ai_message_heading_pane

0x1874,	// (0x00021895) bg_popup_window_pane_cp14

0xad3b,	// (0x0002ad5c) listscroll_ai_message_pane

0xacbd,	// (0x0002acde) ai_message_heading_pane_g1_ParamLimits

0xacbd,	// (0x0002acde) ai_message_heading_pane_g1

0xacc9,	// (0x0002acea) ai_message_heading_pane_g2_ParamLimits

0xacc9,	// (0x0002acea) ai_message_heading_pane_g2

0xacd5,	// (0x0002acf6) ai_message_heading_pane_g3_ParamLimits

0xacd5,	// (0x0002acf6) ai_message_heading_pane_g3

0xace1,	// (0x0002ad02) ai_message_heading_pane_g4_ParamLimits

0xace1,	// (0x0002ad02) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x0002f939) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x0002f939) ai_message_heading_pane_g

0xaced,	// (0x0002ad0e) ai_message_heading_pane_t1_ParamLimits

0xaced,	// (0x0002ad0e) ai_message_heading_pane_t1

0xad07,	// (0x0002ad28) ai_message_heading_pane_t2_ParamLimits

0xad07,	// (0x0002ad28) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x0002f942) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x0002f942) ai_message_heading_pane_t

0xad19,	// (0x0002ad3a) bg_popup_heading_pane_cp1_ParamLimits

0xad19,	// (0x0002ad3a) bg_popup_heading_pane_cp1

0xacab,	// (0x0002accc) list_ai_message_pane_ParamLimits

0xacab,	// (0x0002accc) list_ai_message_pane

0x1eaa,	// (0x00021ecb) scroll_pane_cp10

0xac47,	// (0x0002ac68) list_ai_message_pane_g1

0xac4f,	// (0x0002ac70) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x0002f916) list_ai_message_pane_g

0xac57,	// (0x0002ac78) list_ai_message_pane_t1_ParamLimits

0xac57,	// (0x0002ac78) list_ai_message_pane_t1

0xac6c,	// (0x0002ac8d) list_ai_message_pane_t2_ParamLimits

0xac6c,	// (0x0002ac8d) list_ai_message_pane_t2

0xac81,	// (0x0002aca2) list_ai_message_pane_t3_ParamLimits

0xac81,	// (0x0002aca2) list_ai_message_pane_t3

0xac96,	// (0x0002acb7) list_ai_message_pane_t4_ParamLimits

0xac96,	// (0x0002acb7) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x0002f91b) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x0002f91b) list_ai_message_pane_t

0xac32,	// (0x0002ac53) cell_ai_soft_ind_pane_ParamLimits

0xac32,	// (0x0002ac53) cell_ai_soft_ind_pane

0x265d,	// (0x0002267e) cell_ai_soft_ind_pane_g1_ParamLimits

0x265d,	// (0x0002267e) cell_ai_soft_ind_pane_g1

0x1874,	// (0x00021895) grid_highlight_cp1

0x266a,	// (0x0002268b) text_secondary_cp56_ParamLimits

0x266a,	// (0x0002268b) text_secondary_cp56

0xac07,	// (0x0002ac28) example_general_pane_ParamLimits

0xac07,	// (0x0002ac28) example_general_pane

0xac13,	// (0x0002ac34) example_parent_pane_g1_ParamLimits

0xac13,	// (0x0002ac34) example_parent_pane_g1

0xac1f,	// (0x0002ac40) example_parent_pane_t1_ParamLimits

0xac1f,	// (0x0002ac40) example_parent_pane_t1

0x7e20,	// (0x00027e41) popup_preview_text_window_ParamLimits

0x7e20,	// (0x00027e41) popup_preview_text_window

0x257f,	// (0x000225a0) list_single_pane_cp2_g4

0x1abc,	// (0x00021add) bg_popup_preview_window_pane_ParamLimits

0x1abc,	// (0x00021add) bg_popup_preview_window_pane

0xa961,	// (0x0002a982) popup_preview_text_window_t1_ParamLimits

0xa961,	// (0x0002a982) popup_preview_text_window_t1

0xa97f,	// (0x0002a9a0) popup_preview_text_window_t2_ParamLimits

0xa97f,	// (0x0002a9a0) popup_preview_text_window_t2

0xa9c8,	// (0x0002a9e9) popup_preview_text_window_t3_ParamLimits

0xa9c8,	// (0x0002a9e9) popup_preview_text_window_t3

0xaa0d,	// (0x0002aa2e) popup_preview_text_window_t4_ParamLimits

0xaa0d,	// (0x0002aa2e) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x0002f8ea) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x0002f8ea) popup_preview_text_window_t

0xaa8b,	// (0x0002aaac) scroll_pane_cp11

0x856b,	// (0x0002858c) bg_popup_preview_window_pane_g1

0xa921,	// (0x0002a942) bg_popup_preview_window_pane_g2

0xa929,	// (0x0002a94a) bg_popup_preview_window_pane_g3

0xa931,	// (0x0002a952) bg_popup_preview_window_pane_g4

0xa939,	// (0x0002a95a) bg_popup_preview_window_pane_g5

0xa941,	// (0x0002a962) bg_popup_preview_window_pane_g6

0xa949,	// (0x0002a96a) bg_popup_preview_window_pane_g7

0xa951,	// (0x0002a972) bg_popup_preview_window_pane_g8

0x6574,	// (0x00026595) aid_popup_width_pane

0x7dfe,	// (0x00027e1f) popup_midp_note_alarm_window_ParamLimits

0x7dfe,	// (0x00027e1f) popup_midp_note_alarm_window

0x1cfe,	// (0x00021d1f) data_form_pane_ParamLimits

0x598e,	// (0x000259af) form_field_data_pane_g1

0x5998,	// (0x000259b9) form_field_data_pane_t1_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_ParamLimits

0x59b0,	// (0x000259d1) data_form_wide_pane_ParamLimits

0x59c1,	// (0x000259e2) form_field_data_wide_pane_g1

0x59cd,	// (0x000259ee) form_field_data_wide_pane_t1_ParamLimits

0x1b94,	// (0x00021bb5) input_focus_pane_cp6_ParamLimits

0x6f73,	// (0x00026f94) input_popup_find_pane_g1_ParamLimits

0x6f73,	// (0x00026f94) input_popup_find_pane_g1

0x7113,	// (0x00027134) aid_navi_side_left_pane

0x7128,	// (0x00027149) aid_navi_side_right_pane

0xa34a,	// (0x0002a36b) bg_popup_window_pane_cp30_ParamLimits

0xa34a,	// (0x0002a36b) bg_popup_window_pane_cp30

0xa3c4,	// (0x0002a3e5) popup_midp_note_alarm_window_g1_ParamLimits

0xa3c4,	// (0x0002a3e5) popup_midp_note_alarm_window_g1

0xa3f4,	// (0x0002a415) popup_midp_note_alarm_window_t1_ParamLimits

0xa3f4,	// (0x0002a415) popup_midp_note_alarm_window_t1

0xa495,	// (0x0002a4b6) popup_midp_note_alarm_window_t2_ParamLimits

0xa495,	// (0x0002a4b6) popup_midp_note_alarm_window_t2

0xa543,	// (0x0002a564) popup_midp_note_alarm_window_t3_ParamLimits

0xa543,	// (0x0002a564) popup_midp_note_alarm_window_t3

0xa56b,	// (0x0002a58c) popup_midp_note_alarm_window_t4_ParamLimits

0xa56b,	// (0x0002a58c) popup_midp_note_alarm_window_t4

0xa58b,	// (0x0002a5ac) popup_midp_note_alarm_window_t5_ParamLimits

0xa58b,	// (0x0002a5ac) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0002f887) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0002f887) popup_midp_note_alarm_window_t

0xa637,	// (0x0002a658) wait_bar_pane_cp1_ParamLimits

0xa637,	// (0x0002a658) wait_bar_pane_cp1

0x1874,	// (0x00021895) wait_anim_pane_copy1

0x1874,	// (0x00021895) wait_border_pane_copy1

0x8c9b,	// (0x00028cbc) wait_border_pane_g1_copy1

0x59e7,	// (0x00025a08) form_field_popup_pane_g1

0x59ef,	// (0x00025a10) form_field_popup_pane_t1_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_cp7_ParamLimits

0x1d77,	// (0x00021d98) list_form_pane_ParamLimits

0x5a07,	// (0x00025a28) form_field_popup_wide_pane_g1

0x5a0f,	// (0x00025a30) form_field_popup_wide_pane_t1_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_cp8_ParamLimits

0x1da0,	// (0x00021dc1) list_form_wide_pane_ParamLimits

0xb129,	// (0x0002b14a) aid_size_cell_graphic_pane

0x5a99,	// (0x00025aba) data_form_pane_t1_ParamLimits

0x5d63,	// (0x00025d84) data_form_wide_pane_t1_ParamLimits

0x8105,	// (0x00028126) bg_status_flat_pane

0x6973,	// (0x00026994) title_pane_t1_ParamLimits

0x188a,	// (0x000218ab) title_pane_t2_ParamLimits

0x18b0,	// (0x000218d1) title_pane_t3_ParamLimits

0xf532,	// (0x0002f553) title_pane_t_ParamLimits

0x215f,	// (0x00022180) level_1_signal_ParamLimits

0x216c,	// (0x0002218d) level_2_signal_ParamLimits

0x2179,	// (0x0002219a) level_3_signal_ParamLimits

0x2186,	// (0x000221a7) level_4_signal_ParamLimits

0x2193,	// (0x000221b4) level_5_signal_ParamLimits

0x21a0,	// (0x000221c1) level_6_signal_ParamLimits

0x21ad,	// (0x000221ce) level_7_signal_ParamLimits

0x215f,	// (0x00022180) level_1_battery_ParamLimits

0x216c,	// (0x0002218d) level_2_battery_ParamLimits

0x2179,	// (0x0002219a) level_3_battery_ParamLimits

0x2186,	// (0x000221a7) level_4_battery_ParamLimits

0x2193,	// (0x000221b4) level_5_battery_ParamLimits

0x21a0,	// (0x000221c1) level_6_battery_ParamLimits

0x21ad,	// (0x000221ce) level_7_battery_ParamLimits

0xa24f,	// (0x0002a270) bg_status_flat_pane_g1

0xa257,	// (0x0002a278) bg_status_flat_pane_g2

0xa25f,	// (0x0002a280) bg_status_flat_pane_g3

0xa267,	// (0x0002a288) bg_status_flat_pane_g4

0xa26f,	// (0x0002a290) bg_status_flat_pane_g5

0xa277,	// (0x0002a298) bg_status_flat_pane_g6

0xa27f,	// (0x0002a2a0) bg_status_flat_pane_g7

0x69e3,	// (0x00026a04) tabs_3_active_pane_t1_ParamLimits

0x69e3,	// (0x00026a04) tabs_3_passive_pane_t1_ParamLimits

0x69fd,	// (0x00026a1e) tabs_4_active_pane_t1_ParamLimits

0x69fd,	// (0x00026a1e) tabs_4_1_passive_pane_t1_ParamLimits

0x6faa,	// (0x00026fcb) tabs_2_active_pane_t1_ParamLimits

0x6faa,	// (0x00026fcb) tabs_2_passive_pane_t1_ParamLimits

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp4_ParamLimits

0x6fca,	// (0x00026feb) tabs_2_long_active_pane_t1_ParamLimits

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp4_ParamLimits

0x8600,	// (0x00028621) list_single_midp_graphic_pane_t1_ParamLimits

0x6fbc,	// (0x00026fdd) bg_active_tab_pane_cp5_ParamLimits

0x6fe9,	// (0x0002700a) tabs_3_long_active_pane_t1_ParamLimits

0x6fdd,	// (0x00026ffe) bg_passive_tab_pane_cp5_ParamLimits

0x8600,	// (0x00028621) list_single_midp_graphic_pane_t1

0x8105,	// (0x00028126) bg_status_flat_pane_ParamLimits

0x81ce,	// (0x000281ef) indicator_pane_cp2_ParamLimits

0x81ce,	// (0x000281ef) indicator_pane_cp2

0x82f9,	// (0x0002831a) navi_pane_srt_ParamLimits

0x82f9,	// (0x0002831a) navi_pane_srt

0x831d,	// (0x0002833e) popup_clock_digital_analogue_window_cp1

0x192e,	// (0x0002194f) indicator_pane_t1

0x261c,	// (0x0002263d) copy_highlight_pane

0x261c,	// (0x0002263d) cursor_graphics_pane

0x261c,	// (0x0002263d) graphic_within_text_pane

0x261c,	// (0x0002263d) link_highlight_pane

0xaa4e,	// (0x0002aa6f) popup_preview_text_window_t5_ParamLimits

0xaa4e,	// (0x0002aa6f) popup_preview_text_window_t5

0x2684,	// (0x000226a5) cursor_digital_pane

0x2684,	// (0x000226a5) cursor_primary_pane

0x2695,	// (0x000226b6) cursor_primary_small_pane

0x269d,	// (0x000226be) cursor_secondary_pane

0x26a5,	// (0x000226c6) cursor_title_pane

0x2684,	// (0x000226a5) link_highlight_digital_pane

0x268c,	// (0x000226ad) link_highlight_primary_pane

0x2695,	// (0x000226b6) link_highlight_primary_small_pane

0x269d,	// (0x000226be) link_highlight_secondary_pane

0x26a5,	// (0x000226c6) link_highlight_title_pane

0x2684,	// (0x000226a5) copy_highlight_digital_pane

0x2684,	// (0x000226a5) copy_highlight_primary_pane

0x2695,	// (0x000226b6) copy_highlight_primary_small_pane

0x269d,	// (0x000226be) copy_highlight_secondary_pane

0x26a5,	// (0x000226c6) copy_highlight_title_pane

0x269d,	// (0x000226be) graphic_text_digital_pane

0xa2ed,	// (0x0002a30e) graphic_text_primary_pane

0xa2f6,	// (0x0002a317) graphic_text_primary_small_pane

0x2695,	// (0x000226b6) graphic_text_secondary_pane

0x2684,	// (0x000226a5) graphic_text_title_pane

0x77a0,	// (0x000277c1) cursor_primary_pane_g1

0xa2df,	// (0x0002a300) cursor_text_primary_t1

0xa2c7,	// (0x0002a2e8) cursor_primary_small_pane_g1

0xa2d1,	// (0x0002a2f2) cursor_text_primary_small_t1

0xa2af,	// (0x0002a2d0) cursor_primary_small_pane_g1_copy1

0xa2b9,	// (0x0002a2da) cursor_text_primary_small_t1_copy1

0xa297,	// (0x0002a2b8) cursor_text_title_t1

0xa2a5,	// (0x0002a2c6) cursor_title_pane_g1

0x77a0,	// (0x000277c1) cursor_digital_pane_g1

0x26ad,	// (0x000226ce) cursor_text_digital_t1

0x26bb,	// (0x000226dc) link_highlight_primary_pane_g1

0xa240,	// (0x0002a261) link_highlight_primary_pane_t1

0x26bb,	// (0x000226dc) link_highlight_primary_small_pane_g1

0x26c3,	// (0x000226e4) link_highlight_primary_small_pane_t1

0x26bb,	// (0x000226dc) link_highlight_secondary_pane_g1

0x26d2,	// (0x000226f3) link_highlight_secondary_pane_t1

0x8e00,	// (0x00028e21) link_highlight_title_pane_g1

0x8e17,	// (0x00028e38) link_highlight_title_pane_t1

0x8e00,	// (0x00028e21) link_highlight_digital_pane_g1

0x8e08,	// (0x00028e29) link_highlight_digital_pane_t1

0x8cba,	// (0x00028cdb) copy_highlight_primary_pane_g1

0x8ce0,	// (0x00028d01) copy_highlight_primary_pane_t1

0x8cba,	// (0x00028cdb) copy_highlight_primary_small_pane_g1

0x8cd1,	// (0x00028cf2) copy_highlight_primary_small_pane_t1

0x26e1,	// (0x00022702) copy_highlight_secondary_pane_g1

0x26e9,	// (0x0002270a) copy_highlight_secondary_pane_t1

0x8cba,	// (0x00028cdb) copy_highlight_title_pane_g1

0x8cc2,	// (0x00028ce3) copy_highlight_title_pane_t1

0x8cba,	// (0x00028cdb) copy_highlight_digital_pane_g1

0xb2f7,	// (0x0002b318) copy_highlight_digital_pane_t1

0xb24b,	// (0x0002b26c) graphic_text_primary_pane_g1

0xb2db,	// (0x0002b2fc) graphic_text_primary_pane_t1

0xb2e9,	// (0x0002b30a) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0002f9b6) graphic_text_primary_pane_t

0xb2b7,	// (0x0002b2d8) graphic_text_primary_small_pane_g1

0xb2bf,	// (0x0002b2e0) graphic_text_primary_small_pane_t1

0xb2cd,	// (0x0002b2ee) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x0002f9b1) graphic_text_primary_small_pane_t

0xb293,	// (0x0002b2b4) graphic_text_secondary_pane_g1

0xb29b,	// (0x0002b2bc) graphic_text_secondary_pane_t1

0xb2a9,	// (0x0002b2ca) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x0002f9ac) graphic_text_secondary_pane_t

0xb26f,	// (0x0002b290) graphic_text_title_pane_g1

0xb277,	// (0x0002b298) graphic_text_title_pane_t1

0xb285,	// (0x0002b2a6) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0002f9a7) graphic_text_title_pane_t

0xb24b,	// (0x0002b26c) graphic_text_digital_pane_g1

0xb253,	// (0x0002b274) graphic_text_digital_pane_t1

0xb261,	// (0x0002b282) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x0002f9a2) graphic_text_digital_pane_t

0x18d0,	// (0x000218f1) navi_icon_pane_srt_ParamLimits

0x18d0,	// (0x000218f1) navi_icon_pane_srt

0x1874,	// (0x00021895) navi_midp_pane_srt

0x1874,	// (0x00021895) navi_navi_pane_srt

0x18d0,	// (0x000218f1) navi_text_pane_srt_ParamLimits

0x18d0,	// (0x000218f1) navi_text_pane_srt

0xb216,	// (0x0002b237) navi_navi_icon_text_pane_srt

0xb21e,	// (0x0002b23f) navi_navi_pane_srt_g1_ParamLimits

0xb21e,	// (0x0002b23f) navi_navi_pane_srt_g1

0xb230,	// (0x0002b251) navi_navi_pane_srt_g2_ParamLimits

0xb230,	// (0x0002b251) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x0002f99d) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x0002f99d) navi_navi_pane_srt_g

0xb242,	// (0x0002b263) navi_navi_tabs_pane_srt

0xb216,	// (0x0002b237) navi_navi_text_pane_srt

0xb216,	// (0x0002b237) navi_navi_volume_pane_srt

0xb207,	// (0x0002b228) navi_navi_text_pane_srt_t1

0x9168,	// (0x00029189) navi_navi_volume_pane_srt_g1

0x9170,	// (0x00029191) volume_small_pane_srt_ParamLimits

0x9170,	// (0x00029191) volume_small_pane_srt

0x77aa,	// (0x000277cb) volume_small_pane_srt_g1_ParamLimits

0x77aa,	// (0x000277cb) volume_small_pane_srt_g1

0x77ba,	// (0x000277db) volume_small_pane_srt_g2_ParamLimits

0x77ba,	// (0x000277db) volume_small_pane_srt_g2

0x77cb,	// (0x000277ec) volume_small_pane_srt_g3_ParamLimits

0x77cb,	// (0x000277ec) volume_small_pane_srt_g3

0x77dc,	// (0x000277fd) volume_small_pane_srt_g4_ParamLimits

0x77dc,	// (0x000277fd) volume_small_pane_srt_g4

0x77ed,	// (0x0002780e) volume_small_pane_srt_g5_ParamLimits

0x77ed,	// (0x0002780e) volume_small_pane_srt_g5

0x77fe,	// (0x0002781f) volume_small_pane_srt_g6_ParamLimits

0x77fe,	// (0x0002781f) volume_small_pane_srt_g6

0x780f,	// (0x00027830) volume_small_pane_srt_g7_ParamLimits

0x780f,	// (0x00027830) volume_small_pane_srt_g7

0x7820,	// (0x00027841) volume_small_pane_srt_g8_ParamLimits

0x7820,	// (0x00027841) volume_small_pane_srt_g8

0x7831,	// (0x00027852) volume_small_pane_srt_g9_ParamLimits

0x7831,	// (0x00027852) volume_small_pane_srt_g9

0x7842,	// (0x00027863) volume_small_pane_srt_g10_ParamLimits

0x7842,	// (0x00027863) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0002f74a) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0002f74a) volume_small_pane_srt_g

0x6c4a,	// (0x00026c6b) query_popup_data_pane_cp2

0xb1ed,	// (0x0002b20e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ed,	// (0x0002b20e) navi_navi_icon_text_pane_srt_t1

0xa2ed,	// (0x0002a30e) navi_tabs_2_long_pane_srt

0xa2ed,	// (0x0002a30e) navi_tabs_2_pane_srt

0xa2ed,	// (0x0002a30e) navi_tabs_3_long_pane_srt

0xa2ed,	// (0x0002a30e) navi_tabs_3_pane_srt

0xa2ed,	// (0x0002a30e) navi_tabs_4_pane_srt

0x9148,	// (0x00029169) tabs_2_active_pane_srt_ParamLimits

0x9148,	// (0x00029169) tabs_2_active_pane_srt

0x9158,	// (0x00029179) tabs_2_passive_pane_srt_ParamLimits

0x9158,	// (0x00029179) tabs_2_passive_pane_srt

0x1eba,	// (0x00021edb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1eba,	// (0x00021edb) bg_passive_tab_pane_cp1_srt

0xb1b9,	// (0x0002b1da) bg_passive_tab_pane_g1_cp1_srt

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp1_srt

0xb1c2,	// (0x0002b1e3) bg_passive_tab_pane_g3_cp1_srt

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp1_srt_ParamLimits

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp1_srt

0xb1cb,	// (0x0002b1ec) tabs_2_active_pane_srt_g1

0xb1d3,	// (0x0002b1f4) tabs_2_active_pane_srt_t1_ParamLimits

0xb1d3,	// (0x0002b1f4) tabs_2_active_pane_srt_t1

0xb1b9,	// (0x0002b1da) bg_active_tab_pane_g1_cp1_srt

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp1_srt

0xb1c2,	// (0x0002b1e3) bg_active_tab_pane_g3_cp1_srt

0x9115,	// (0x00029136) tabs_3_active_pane_srt_ParamLimits

0x9115,	// (0x00029136) tabs_3_active_pane_srt

0x9126,	// (0x00029147) tabs_3_passive_pane_cp_srt_ParamLimits

0x9126,	// (0x00029147) tabs_3_passive_pane_cp_srt

0x9137,	// (0x00029158) tabs_3_passive_pane_srt_ParamLimits

0x9137,	// (0x00029158) tabs_3_passive_pane_srt

0x1eba,	// (0x00021edb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1eba,	// (0x00021edb) bg_passive_tab_pane_cp2_srt

0x7853,	// (0x00027874) bg_passive_tab_pane_g1_cp2_srt

0x749e,	// (0x000274bf) bg_passive_tab_pane_g2_cp2_srt

0x785c,	// (0x0002787d) bg_passive_tab_pane_g3_cp2_srt

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp2_srt_ParamLimits

0x18d0,	// (0x000218f1) bg_active_tab_pane_cp2_srt

0xb19f,	// (0x0002b1c0) tabs_3_active_pane_srt_g1

0xb1a7,	// (0x0002b1c8) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a7,	// (0x0002b1c8) tabs_3_active_pane_srt_t1

0x7853,	// (0x00027874) bg_active_tab_pane_g1_cp2_srt

0x749e,	// (0x000274bf) bg_active_tab_pane_g2_cp2_srt

0x785c,	// (0x0002787d) bg_active_tab_pane_g3_cp2_srt

0x90cd,	// (0x000290ee) tabs_4_active_pane_srt_ParamLimits

0x90cd,	// (0x000290ee) tabs_4_active_pane_srt

0x90df,	// (0x00029100) tabs_4_passive_pane_cp2_srt_ParamLimits

0x90df,	// (0x00029100) tabs_4_passive_pane_cp2_srt

0x7a95,	// (0x00027ab6) aid_size_cell_toolbar

0x6fdd,	// (0x00026ffe) main_idle_act_pane_ParamLimits

0x7c30,	// (0x00027c51) popup_large_graphic_colour_window_ParamLimits

0x7f9b,	// (0x00027fbc) popup_toolbar_window_ParamLimits

0x7f9b,	// (0x00027fbc) popup_toolbar_window

0xaf9f,	// (0x0002afc0) list_single_graphic_2heading_pane_ParamLimits

0xaf9f,	// (0x0002afc0) list_single_graphic_2heading_pane

0x2047,	// (0x00022068) aid_size_cell_apps_grid_lsc_pane

0x2059,	// (0x0002207a) aid_size_cell_apps_grid_prt_pane

0x1eba,	// (0x00021edb) bg_wml_button_pane_cp1_ParamLimits

0x1eba,	// (0x00021edb) bg_wml_button_pane_cp1

0x892d,	// (0x0002894e) form_midp_field_text_pane_t1_ParamLimits

0x866f,	// (0x00028690) input_focus_pane_cp050_ParamLimits

0x8967,	// (0x00028988) list_midp_form_text_pane_ParamLimits

0x890a,	// (0x0002892b) input_focus_pane_cp051_ParamLimits

0x891e,	// (0x0002893f) list_midp_choice_pane_ParamLimits

0x87ad,	// (0x000287ce) list_single_2graphic_pane_cp3_ParamLimits

0x87ad,	// (0x000287ce) list_single_2graphic_pane_cp3

0x87d2,	// (0x000287f3) list_single_midp_graphic_pane_ParamLimits

0x87d2,	// (0x000287f3) list_single_midp_graphic_pane

0x5bf1,	// (0x00025c12) list_single_graphic_2heading_pane_g1_ParamLimits

0x5bf1,	// (0x00025c12) list_single_graphic_2heading_pane_g1

0x54f7,	// (0x00025518) list_single_graphic_2heading_pane_g4_ParamLimits

0x54f7,	// (0x00025518) list_single_graphic_2heading_pane_g4

0x5503,	// (0x00025524) list_single_graphic_2heading_pane_g5_ParamLimits

0x5503,	// (0x00025524) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0002f79d) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0002f79d) list_single_graphic_2heading_pane_g

0x5bfd,	// (0x00025c1e) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bfd,	// (0x00025c1e) list_single_graphic_2heading_pane_t1

0x5c11,	// (0x00025c32) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c11,	// (0x00025c32) list_single_graphic_2heading_pane_t2

0x5c2b,	// (0x00025c4c) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c2b,	// (0x00025c4c) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0002f7a4) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0002f7a4) list_single_graphic_2heading_pane_t

0x8479,	// (0x0002849a) bg_popup_sub_pane_cp2

0x84a3,	// (0x000284c4) grid_toobar_pane

0x84df,	// (0x00028500) cell_toolbar_pane_ParamLimits

0x84df,	// (0x00028500) cell_toolbar_pane

0x850f,	// (0x00028530) cell_toolbar_pane_g1_ParamLimits

0x850f,	// (0x00028530) cell_toolbar_pane_g1

0x8523,	// (0x00028544) cell_toolbar_pane_g2_ParamLimits

0x8523,	// (0x00028544) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0002f7b2) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0002f7b2) cell_toolbar_pane_g

0x8545,	// (0x00028566) grid_highlight_pane_cp2_ParamLimits

0x8545,	// (0x00028566) grid_highlight_pane_cp2

0x855f,	// (0x00028580) toolbar_button_pane

0x856b,	// (0x0002858c) toolbar_button_pane_g1

0x8573,	// (0x00028594) toolbar_button_pane_g2

0x857b,	// (0x0002859c) toolbar_button_pane_g3

0x8583,	// (0x000285a4) toolbar_button_pane_g4

0x858b,	// (0x000285ac) toolbar_button_pane_g5

0x8593,	// (0x000285b4) toolbar_button_pane_g6

0x859b,	// (0x000285bc) toolbar_button_pane_g7

0x85a3,	// (0x000285c4) toolbar_button_pane_g8

0x85ab,	// (0x000285cc) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0002f7b7) toolbar_button_pane_g

0x85bb,	// (0x000285dc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x85bb,	// (0x000285dc) list_single_2graphic_pane_g1_cp3

0x85c7,	// (0x000285e8) list_single_2graphic_pane_g2_cp3_ParamLimits

0x85c7,	// (0x000285e8) list_single_2graphic_pane_g2_cp3

0x247d,	// (0x0002249e) list_single_2graphic_pane_g3_cp3

0x85d8,	// (0x000285f9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x85d8,	// (0x000285f9) list_single_2graphic_pane_g4_cp3

0x85e4,	// (0x00028605) list_single_2graphic_pane_t1_cp3_ParamLimits

0x85e4,	// (0x00028605) list_single_2graphic_pane_t1_cp3

0x1c5c,	// (0x00021c7d) list_single_midp_graphic_pane_g2_ParamLimits

0x1c5c,	// (0x00021c7d) list_single_midp_graphic_pane_g2

0x7a9d,	// (0x00027abe) aid_zoom_text_primary

0x5bc5,	// (0x00025be6) aid_zoom_text_secondary

0x78b3,	// (0x000278d4) status_small_pane_g7_ParamLimits

0x78b3,	// (0x000278d4) status_small_pane_g7

0x78d6,	// (0x000278f7) status_small_pane_t1_ParamLimits

0x6956,	// (0x00026977) title_pane_g2

0x0003,

0xf529,	// (0x0002f54a) title_pane_g

0x6ca4,	// (0x00026cc5) aid_size_cell_colour_1_pane_ParamLimits

0x6ca4,	// (0x00026cc5) aid_size_cell_colour_1_pane

0x6cb8,	// (0x00026cd9) aid_size_cell_colour_2_pane_ParamLimits

0x6cb8,	// (0x00026cd9) aid_size_cell_colour_2_pane

0x6ccc,	// (0x00026ced) aid_size_cell_colour_3_pane_ParamLimits

0x6ccc,	// (0x00026ced) aid_size_cell_colour_3_pane

0x6ce0,	// (0x00026d01) aid_size_cell_colour_4_pane_ParamLimits

0x6ce0,	// (0x00026d01) aid_size_cell_colour_4_pane

0x7050,	// (0x00027071) title_pane_stacon_g1_ParamLimits

0x7050,	// (0x00027071) title_pane_stacon_g1

0x8d37,	// (0x00028d58) popup_note_wait_window_g3_ParamLimits

0x8d37,	// (0x00028d58) popup_note_wait_window_g3

0x8dad,	// (0x00028dce) popup_note_wait_window_t5_ParamLimits

0x8dad,	// (0x00028dce) popup_note_wait_window_t5

0x1874,	// (0x00021895) main_feb_china_hwr_fs_writing_pane

0x7b17,	// (0x00027b38) popup_feb_china_hwr_fs_window_ParamLimits

0x7b17,	// (0x00027b38) popup_feb_china_hwr_fs_window

0x865a,	// (0x0002867b) aid_size_cell_hwr_fs_ParamLimits

0x865a,	// (0x0002867b) aid_size_cell_hwr_fs

0x866f,	// (0x00028690) bg_popup_sub_pane_cp3_ParamLimits

0x866f,	// (0x00028690) bg_popup_sub_pane_cp3

0x867b,	// (0x0002869c) grid_hwr_fs_pane_ParamLimits

0x867b,	// (0x0002869c) grid_hwr_fs_pane

0x8693,	// (0x000286b4) linegrid_hwr_fs_pane_ParamLimits

0x8693,	// (0x000286b4) linegrid_hwr_fs_pane

0x86a3,	// (0x000286c4) cell_hwr_fs_pane_ParamLimits

0x86a3,	// (0x000286c4) cell_hwr_fs_pane

0x86c5,	// (0x000286e6) linegrid_hwr_fs_pane_g1_ParamLimits

0x86c5,	// (0x000286e6) linegrid_hwr_fs_pane_g1

0x86d1,	// (0x000286f2) linegrid_hwr_fs_pane_g2_ParamLimits

0x86d1,	// (0x000286f2) linegrid_hwr_fs_pane_g2

0x86e3,	// (0x00028704) linegrid_hwr_fs_pane_g3_ParamLimits

0x86e3,	// (0x00028704) linegrid_hwr_fs_pane_g3

0x86ef,	// (0x00028710) linegrid_hwr_fs_pane_g4_ParamLimits

0x86ef,	// (0x00028710) linegrid_hwr_fs_pane_g4

0x8709,	// (0x0002872a) linegrid_hwr_fs_pane_g5_ParamLimits

0x8709,	// (0x0002872a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x0002f7dd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x0002f7dd) linegrid_hwr_fs_pane_g

0x871f,	// (0x00028740) cell_hwr_fs_pane_g1_ParamLimits

0x871f,	// (0x00028740) cell_hwr_fs_pane_g1

0x83b3,	// (0x000283d4) cell_hwr_fs_pane_g2_ParamLimits

0x83b3,	// (0x000283d4) cell_hwr_fs_pane_g2

0x8735,	// (0x00028756) cell_hwr_fs_pane_g3_ParamLimits

0x8735,	// (0x00028756) cell_hwr_fs_pane_g3

0x8742,	// (0x00028763) cell_hwr_fs_pane_g4_ParamLimits

0x8742,	// (0x00028763) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0002f7e8) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0002f7e8) cell_hwr_fs_pane_g

0x874f,	// (0x00028770) cell_hwr_fs_pane_t1

0x1874,	// (0x00021895) grid_highlight_pane_cp6

0x1874,	// (0x00021895) main_idle_act2_pane

0x1e91,	// (0x00021eb2) aid_inside_area_popup_secondary

0xa771,	// (0x0002a792) aid_inside_area_window_primary_ParamLimits

0xa771,	// (0x0002a792) aid_inside_area_window_primary

0xb306,	// (0x0002b327) ai2_news_ticker_pane

0xb30e,	// (0x0002b32f) aid_size_cell_ai1_link_ParamLimits

0xb30e,	// (0x0002b32f) aid_size_cell_ai1_link

0xb328,	// (0x0002b349) popup_ai2_data_window_ParamLimits

0xb328,	// (0x0002b349) popup_ai2_data_window

0xb33e,	// (0x0002b35f) popup_ai2_link_window_ParamLimits

0xb33e,	// (0x0002b35f) popup_ai2_link_window

0x866f,	// (0x00028690) bg_popup_sub_pane_cp4_ParamLimits

0x866f,	// (0x00028690) bg_popup_sub_pane_cp4

0xb352,	// (0x0002b373) grid_ai2_link_pane_ParamLimits

0xb352,	// (0x0002b373) grid_ai2_link_pane

0xb369,	// (0x0002b38a) popup_ai2_link_window_g1_ParamLimits

0xb369,	// (0x0002b38a) popup_ai2_link_window_g1

0xb375,	// (0x0002b396) popup_ai2_link_window_g2_ParamLimits

0xb375,	// (0x0002b396) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x0002f9bb) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x0002f9bb) popup_ai2_link_window_g

0xb384,	// (0x0002b3a5) ai2_mp_button_pane

0xb38c,	// (0x0002b3ad) ai2_mp_volume_pane

0x890a,	// (0x0002892b) bg_popup_sub_pane_cp5_ParamLimits

0x890a,	// (0x0002892b) bg_popup_sub_pane_cp5

0xb394,	// (0x0002b3b5) heading_ai2_gene_pane_ParamLimits

0xb394,	// (0x0002b3b5) heading_ai2_gene_pane

0xb3a0,	// (0x0002b3c1) list_ai2_gene_pane_ParamLimits

0xb3a0,	// (0x0002b3c1) list_ai2_gene_pane

0xb3e8,	// (0x0002b409) cell_ai2_link_pane_ParamLimits

0xb3e8,	// (0x0002b409) cell_ai2_link_pane

0xb3fe,	// (0x0002b41f) cell_ai2_link_pane_g1

0x1874,	// (0x00021895) grid_highlight_pane_cp7

0x9185,	// (0x000291a6) ai2_mp_volume_pane_g1

0xb4ce,	// (0x0002b4ef) ai2_mp_volume_pane_g2

0xb443,	// (0x0002b464) list_ai2_gene_pane_t1

0xb4d6,	// (0x0002b4f7) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0002f9d4) ai2_mp_volume_pane_g

0x918d,	// (0x000291ae) volume_small_pane_cp3

0xb4de,	// (0x0002b4ff) aid_size_cell_ai2_button

0xb4e6,	// (0x0002b507) grid_ai2_button_pane

0xb4ef,	// (0x0002b510) cell_ai2_button_pane_ParamLimits

0xb4ef,	// (0x0002b510) cell_ai2_button_pane

0x186a,	// (0x0002188b) cell_ai2_button_pane_g1

0x1874,	// (0x00021895) grid_highlight_pane_cp8

0xb48e,	// (0x0002b4af) ai2_gene_pane_t1_ParamLimits

0xb48e,	// (0x0002b4af) ai2_gene_pane_t1

0x7a8b,	// (0x00027aac) aid_height_parent_landscape

0xadda,	// (0x0002adfb) aid_height_set_list

0xadeb,	// (0x0002ae0c) aid_size_parent

0xb129,	// (0x0002b14a) aid_size_cell_graphic_pane_ParamLimits

0xb3b0,	// (0x0002b3d1) popup_ai2_data_window_g1_ParamLimits

0xb3b0,	// (0x0002b3d1) popup_ai2_data_window_g1

0xb3bc,	// (0x0002b3dd) ai2_news_ticker_pane_g1

0xb3c4,	// (0x0002b3e5) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x0002f9c0) ai2_news_ticker_pane_g

0xb3cc,	// (0x0002b3ed) ai2_news_ticker_pane_t1

0xb3da,	// (0x0002b3fb) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0002f9c5) ai2_news_ticker_pane_t

0xb407,	// (0x0002b428) heading_ai2_gene_pane_g1

0xb40f,	// (0x0002b430) heading_ai2_gene_pane_t1_ParamLimits

0xb40f,	// (0x0002b430) heading_ai2_gene_pane_t1

0xb424,	// (0x0002b445) list_highlight_pane_cp6

0xb42c,	// (0x0002b44d) ai2_gene_pane_ParamLimits

0xb42c,	// (0x0002b44d) ai2_gene_pane

0xb451,	// (0x0002b472) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x0002f9ca) list_ai2_gene_pane_t

0xb45f,	// (0x0002b480) list_highlight_pane_cp8_ParamLimits

0xb45f,	// (0x0002b480) list_highlight_pane_cp8

0xb470,	// (0x0002b491) ai2_gene_pane_g1_ParamLimits

0xb470,	// (0x0002b491) ai2_gene_pane_g1

0xb482,	// (0x0002b4a3) ai2_gene_pane_g2_ParamLimits

0xb482,	// (0x0002b4a3) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x0002f9cf) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x0002f9cf) ai2_gene_pane_g

0x1c3f,	// (0x00021c60) scroll_pane_cp12

0x7a48,	// (0x00027a69) control_pane_t3_ParamLimits

0x7a48,	// (0x00027a69) control_pane_t3

0x78c7,	// (0x000278e8) status_small_pane_g8_ParamLimits

0x78c7,	// (0x000278e8) status_small_pane_g8

0x7bf9,	// (0x00027c1a) popup_find_window_ParamLimits

0x7e12,	// (0x00027e33) popup_note_image_window_ParamLimits

0x5c43,	// (0x00025c64) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c43,	// (0x00025c64) list_double2_graphic_pane_vc_g1

0x5c4f,	// (0x00025c70) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c4f,	// (0x00025c70) list_double2_graphic_pane_vc_g2

0x5c5b,	// (0x00025c7c) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c5b,	// (0x00025c7c) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0002f7ab) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0002f7ab) list_double2_graphic_pane_vc_g

0x5c67,	// (0x00025c88) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c67,	// (0x00025c88) list_double2_graphic_pane_vc_t1

0x54f7,	// (0x00025518) list_single_heading_pane_vc_g1_ParamLimits

0x54f7,	// (0x00025518) list_single_heading_pane_vc_g1

0x5503,	// (0x00025524) list_single_heading_pane_vc_g2_ParamLimits

0x5503,	// (0x00025524) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_single_heading_pane_vc_g

0x5c7d,	// (0x00025c9e) list_single_heading_pane_vc_t1_ParamLimits

0x5c7d,	// (0x00025c9e) list_single_heading_pane_vc_t1

0x5c93,	// (0x00025cb4) list_single_heading_pane_vc_t2_ParamLimits

0x5c93,	// (0x00025cb4) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x0002f7cc) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x0002f7cc) list_single_heading_pane_vc_t

0x8616,	// (0x00028637) list_setting_number_pane_vc_g1_ParamLimits

0x8616,	// (0x00028637) list_setting_number_pane_vc_g1

0x8622,	// (0x00028643) list_setting_number_pane_vc_g2_ParamLimits

0x8622,	// (0x00028643) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f7d1) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f7d1) list_setting_number_pane_vc_g

0x5ca5,	// (0x00025cc6) list_setting_number_pane_vc_t1_ParamLimits

0x5ca5,	// (0x00025cc6) list_setting_number_pane_vc_t1

0x5cb9,	// (0x00025cda) list_setting_number_pane_vc_t2_ParamLimits

0x5cb9,	// (0x00025cda) list_setting_number_pane_vc_t2

0x5cd5,	// (0x00025cf6) list_setting_number_pane_vc_t3_ParamLimits

0x5cd5,	// (0x00025cf6) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0002f7d6) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0002f7d6) list_setting_number_pane_vc_t

0x5cff,	// (0x00025d20) set_value_pane_vc_ParamLimits

0x5cff,	// (0x00025d20) set_value_pane_vc

0xaf9f,	// (0x0002afc0) list_double2_graphic_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double2_graphic_pane_vc

0xaf9f,	// (0x0002afc0) list_double2_large_graphic_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double2_large_graphic_pane_vc

0xaf9f,	// (0x0002afc0) list_double2_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double2_pane_vc

0xaf9f,	// (0x0002afc0) list_double_graphic_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double_graphic_heading_pane_vc

0xaf9f,	// (0x0002afc0) list_double_graphic_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double_graphic_pane_vc

0xaf9f,	// (0x0002afc0) list_double_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double_heading_pane_vc

0x5dc4,	// (0x00025de5) list_double_large_graphic_pane_vc_ParamLimits

0x5dc4,	// (0x00025de5) list_double_large_graphic_pane_vc

0xaf9f,	// (0x0002afc0) list_double_number_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double_number_pane_vc

0xaf9f,	// (0x0002afc0) list_double_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double_pane_vc

0xaf9f,	// (0x0002afc0) list_double_time_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_double_time_pane_vc

0xaf9f,	// (0x0002afc0) list_setting_number_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_setting_number_pane_vc

0xaf9f,	// (0x0002afc0) list_setting_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_setting_pane_vc

0xaf9f,	// (0x0002afc0) list_single_graphic_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_single_graphic_heading_pane_vc

0xaf9f,	// (0x0002afc0) list_single_heading_pane_vc_ParamLimits

0xaf9f,	// (0x0002afc0) list_single_heading_pane_vc

0x5de3,	// (0x00025e04) list_single_number_heading_pane_vc_ParamLimits

0x5de3,	// (0x00025e04) list_single_number_heading_pane_vc

0x5e4b,	// (0x00025e6c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e4b,	// (0x00025e6c) list_double_graphic_heading_pane_vc_g1

0x5c4f,	// (0x00025c70) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5c4f,	// (0x00025c70) list_double_graphic_heading_pane_vc_g2

0x5c5b,	// (0x00025c7c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5c5b,	// (0x00025c7c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x0002f9db) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x0002f9db) list_double_graphic_heading_pane_vc_g

0x5e57,	// (0x00025e78) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5e57,	// (0x00025e78) list_double_graphic_heading_pane_vc_t1

0x5e6b,	// (0x00025e8c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5e6b,	// (0x00025e8c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x0002f9e2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x0002f9e2) list_double_graphic_heading_pane_vc_t

0x8616,	// (0x00028637) list_setting_pane_vc_g1_ParamLimits

0x8616,	// (0x00028637) list_setting_pane_vc_g1

0x8622,	// (0x00028643) list_setting_pane_vc_g2_ParamLimits

0x8622,	// (0x00028643) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f7d1) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f7d1) list_setting_pane_vc_g

0x5e83,	// (0x00025ea4) list_setting_pane_vc_t1_ParamLimits

0x5e83,	// (0x00025ea4) list_setting_pane_vc_t1

0x5e9f,	// (0x00025ec0) list_setting_pane_vc_t2_ParamLimits

0x5e9f,	// (0x00025ec0) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x0002fa25) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x0002fa25) list_setting_pane_vc_t

0x5cff,	// (0x00025d20) set_value_pane_cp_vc_ParamLimits

0x5cff,	// (0x00025d20) set_value_pane_cp_vc

0x54f7,	// (0x00025518) list_single_number_heading_pane_vc_g1_ParamLimits

0x54f7,	// (0x00025518) list_single_number_heading_pane_vc_g1

0x5503,	// (0x00025524) list_single_number_heading_pane_vc_g2_ParamLimits

0x5503,	// (0x00025524) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_single_number_heading_pane_vc_g

0x5eb9,	// (0x00025eda) list_single_number_heading_pane_vc_t1_ParamLimits

0x5eb9,	// (0x00025eda) list_single_number_heading_pane_vc_t1

0x5ecf,	// (0x00025ef0) list_single_number_heading_pane_vc_t2_ParamLimits

0x5ecf,	// (0x00025ef0) list_single_number_heading_pane_vc_t2

0x5ee1,	// (0x00025f02) list_single_number_heading_pane_vc_t3_ParamLimits

0x5ee1,	// (0x00025f02) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x0002fa2a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0002fa2a) list_single_number_heading_pane_vc_t

0x5ef3,	// (0x00025f14) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5ef3,	// (0x00025f14) list_single_graphic_heading_pane_vc_g1

0x54f7,	// (0x00025518) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x54f7,	// (0x00025518) list_single_graphic_heading_pane_vc_g4

0x5503,	// (0x00025524) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5503,	// (0x00025524) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x0002fa31) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x0002fa31) list_single_graphic_heading_pane_vc_g

0x5eff,	// (0x00025f20) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5eff,	// (0x00025f20) list_single_graphic_heading_pane_vc_t1

0x5f15,	// (0x00025f36) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5f15,	// (0x00025f36) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x0002fa38) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x0002fa38) list_single_graphic_heading_pane_vc_t

0x54f7,	// (0x00025518) list_double2_pane_vc_g1_ParamLimits

0x54f7,	// (0x00025518) list_double2_pane_vc_g1

0x5503,	// (0x00025524) list_double2_pane_vc_g2_ParamLimits

0x5503,	// (0x00025524) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_double2_pane_vc_g

0x5f27,	// (0x00025f48) list_double2_pane_vc_t1_ParamLimits

0x5f27,	// (0x00025f48) list_double2_pane_vc_t1

0x5f3f,	// (0x00025f60) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5f3f,	// (0x00025f60) list_double2_large_graphic_pane_vc_g1

0x54f7,	// (0x00025518) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x54f7,	// (0x00025518) list_double2_large_graphic_pane_vc_g2

0x5503,	// (0x00025524) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5503,	// (0x00025524) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x0002fa3d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x0002fa3d) list_double2_large_graphic_pane_vc_g

0x5c67,	// (0x00025c88) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c67,	// (0x00025c88) list_double2_large_graphic_pane_vc_t1

0x5f4b,	// (0x00025f6c) list_double_time_pane_vc_g1_ParamLimits

0x5f4b,	// (0x00025f6c) list_double_time_pane_vc_g1

0x5f57,	// (0x00025f78) list_double_time_pane_vc_g2_ParamLimits

0x5f57,	// (0x00025f78) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x0002fa44) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x0002fa44) list_double_time_pane_vc_g

0x5f63,	// (0x00025f84) list_double_time_pane_vc_t1_ParamLimits

0x5f63,	// (0x00025f84) list_double_time_pane_vc_t1

0x5f87,	// (0x00025fa8) list_double_time_pane_vc_t2_ParamLimits

0x5f87,	// (0x00025fa8) list_double_time_pane_vc_t2

0x5fd6,	// (0x00025ff7) list_double_time_pane_vc_t3_ParamLimits

0x5fd6,	// (0x00025ff7) list_double_time_pane_vc_t3

0x5fe8,	// (0x00026009) list_double_time_pane_vc_t4_ParamLimits

0x5fe8,	// (0x00026009) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x0002fa49) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x0002fa49) list_double_time_pane_vc_t

0x54f7,	// (0x00025518) list_double_pane_vc_g1_ParamLimits

0x54f7,	// (0x00025518) list_double_pane_vc_g1

0x5503,	// (0x00025524) list_double_pane_vc_g2_ParamLimits

0x5503,	// (0x00025524) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_double_pane_vc_g

0x5ffc,	// (0x0002601d) list_double_pane_vc_t1_ParamLimits

0x5ffc,	// (0x0002601d) list_double_pane_vc_t1

0x6010,	// (0x00026031) list_double_pane_vc_t2_ParamLimits

0x6010,	// (0x00026031) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x0002fa52) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x0002fa52) list_double_pane_vc_t

0x54f7,	// (0x00025518) list_double_number_pane_vc_g1_ParamLimits

0x54f7,	// (0x00025518) list_double_number_pane_vc_g1

0x5503,	// (0x00025524) list_double_number_pane_vc_g2_ParamLimits

0x5503,	// (0x00025524) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f5c4) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f5c4) list_double_number_pane_vc_g

0x6028,	// (0x00026049) list_double_number_pane_vc_t1_ParamLimits

0x6028,	// (0x00026049) list_double_number_pane_vc_t1

0x5ffc,	// (0x0002601d) list_double_number_pane_vc_t2_ParamLimits

0x5ffc,	// (0x0002601d) list_double_number_pane_vc_t2

0x603a,	// (0x0002605b) list_double_number_pane_vc_t3_ParamLimits

0x603a,	// (0x0002605b) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x0002fa57) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x0002fa57) list_double_number_pane_vc_t

0x6052,	// (0x00026073) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6052,	// (0x00026073) list_double_large_graphic_pane_vc_g1

0x606e,	// (0x0002608f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x606e,	// (0x0002608f) list_double_large_graphic_pane_vc_g2

0x6082,	// (0x000260a3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6082,	// (0x000260a3) list_double_large_graphic_pane_vc_g3

0x6091,	// (0x000260b2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6091,	// (0x000260b2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x0002fa5e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0002fa5e) list_double_large_graphic_pane_vc_g

0x609d,	// (0x000260be) list_double_large_graphic_pane_vc_t1_ParamLimits

0x609d,	// (0x000260be) list_double_large_graphic_pane_vc_t1

0x60b9,	// (0x000260da) list_double_large_graphic_pane_vc_t2_ParamLimits

0x60b9,	// (0x000260da) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0002fa67) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0002fa67) list_double_large_graphic_pane_vc_t

0x5c4f,	// (0x00025c70) list_double_heading_pane_vc_g1_ParamLimits

0x5c4f,	// (0x00025c70) list_double_heading_pane_vc_g1

0x5c5b,	// (0x00025c7c) list_double_heading_pane_vc_g2_ParamLimits

0x5c5b,	// (0x00025c7c) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x0002fa6c) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x0002fa6c) list_double_heading_pane_vc_g

0x60db,	// (0x000260fc) list_double_heading_pane_vc_t1_ParamLimits

0x60db,	// (0x000260fc) list_double_heading_pane_vc_t1

0x60ef,	// (0x00026110) list_double_heading_pane_vc_t2_ParamLimits

0x60ef,	// (0x00026110) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0002fa71) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0002fa71) list_double_heading_pane_vc_t

0x6107,	// (0x00026128) list_double_graphic_pane_vc_g1_ParamLimits

0x6107,	// (0x00026128) list_double_graphic_pane_vc_g1

0x611a,	// (0x0002613b) list_double_graphic_pane_vc_g2_ParamLimits

0x611a,	// (0x0002613b) list_double_graphic_pane_vc_g2

0x54f7,	// (0x00025518) list_double_graphic_pane_vc_g3_ParamLimits

0x54f7,	// (0x00025518) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0002fa76) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002fa76) list_double_graphic_pane_vc_g

0x6137,	// (0x00026158) list_double_graphic_pane_vc_t1_ParamLimits

0x6137,	// (0x00026158) list_double_graphic_pane_vc_t1

0x6156,	// (0x00026177) list_double_graphic_pane_vc_t2_ParamLimits

0x6156,	// (0x00026177) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002fa7f) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002fa7f) list_double_graphic_pane_vc_t

0x6580,	// (0x000265a1) aid_size_cell_fastswap

0x6588,	// (0x000265a9) aid_size_cell_touch_ParamLimits

0x6588,	// (0x000265a9) aid_size_cell_touch

0x67e3,	// (0x00026804) popup_fast_swap_wide_window_ParamLimits

0x67e3,	// (0x00026804) popup_fast_swap_wide_window

0x68e9,	// (0x0002690a) touch_pane_ParamLimits

0x68e9,	// (0x0002690a) touch_pane

0x1cd3,	// (0x00021cf4) button_value_adjust_pane_cp2

0x58e4,	// (0x00025905) button_value_adjust_pane_cp4

0x5904,	// (0x00025925) form_field_data_pane_cp2

0x5923,	// (0x00025944) form_field_data_wide_pane_cp2

0x207e,	// (0x0002209f) bg_scroll_pane_ParamLimits

0x724a,	// (0x0002726b) scroll_handle_pane_ParamLimits

0x725e,	// (0x0002727f) scroll_sc2_down_pane_ParamLimits

0x725e,	// (0x0002727f) scroll_sc2_down_pane

0x20af,	// (0x000220d0) scroll_sc2_up_pane_ParamLimits

0x20af,	// (0x000220d0) scroll_sc2_up_pane

0xbbd0,	// (0x0002bbf1) grid_wheel_folder_pane_g1_ParamLimits

0xbbd0,	// (0x0002bbf1) grid_wheel_folder_pane_g1

0x75c3,	// (0x000275e4) clock_nsta_pane_cp2_ParamLimits

0x75c3,	// (0x000275e4) clock_nsta_pane_cp2

0x76d6,	// (0x000276f7) listscroll_midp_pane_ParamLimits

0x76e2,	// (0x00027703) midp_canvas_pane

0x2760,	// (0x00022781) nsta_clock_indic_pane

0x2788,	// (0x000227a9) listscroll_form_pane_vc

0x2790,	// (0x000227b1) listscroll_set_pane_vc_ParamLimits

0x2790,	// (0x000227b1) listscroll_set_pane_vc

0x8121,	// (0x00028142) clock_nsta_pane

0x819c,	// (0x000281bd) indicator_nsta_pane

0x8479,	// (0x0002849a) bg_popup_sub_pane_cp2_ParamLimits

0x848d,	// (0x000284ae) find_pane_cp2_ParamLimits

0x848d,	// (0x000284ae) find_pane_cp2

0x84a3,	// (0x000284c4) grid_toobar_pane_ParamLimits

0x862e,	// (0x0002864f) list_form_gen_pane_vc_ParamLimits

0x862e,	// (0x0002864f) list_form_gen_pane_vc

0x8644,	// (0x00028665) scroll_pane_cp8_vc_ParamLimits

0x8644,	// (0x00028665) scroll_pane_cp8_vc

0x875d,	// (0x0002877e) data_form_wide_pane_vc_ParamLimits

0x875d,	// (0x0002877e) data_form_wide_pane_vc

0x8769,	// (0x0002878a) form_field_data_wide_pane_vc_g1

0x8771,	// (0x00028792) form_field_data_wide_pane_vc_t1_ParamLimits

0x8771,	// (0x00028792) form_field_data_wide_pane_vc_t1

0x1d0a,	// (0x00021d2b) input_focus_pane_cp6_vc_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_cp6_vc

0x8a9e,	// (0x00028abf) list_midp_pane_ParamLimits

0x8aaa,	// (0x00028acb) scroll_pane_cp16_ParamLimits

0x8aaa,	// (0x00028acb) scroll_pane_cp16

0x8b14,	// (0x00028b35) button_value_adjust_pane_ParamLimits

0x8b14,	// (0x00028b35) button_value_adjust_pane

0xadfd,	// (0x0002ae1e) button_value_adjust_pane_cp6_ParamLimits

0xadfd,	// (0x0002ae1e) button_value_adjust_pane_cp6

0xaf23,	// (0x0002af44) settings_code_pane_cp_ParamLimits

0xaf23,	// (0x0002af44) settings_code_pane_cp

0x186a,	// (0x0002188b) cell_touch_pane_g1

0x186a,	// (0x0002188b) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0002f6f0) cell_touch_pane_g

0xb501,	// (0x0002b522) cell_touch_pane_cp_ParamLimits

0xb501,	// (0x0002b522) cell_touch_pane_cp

0xb511,	// (0x0002b532) cell_touch_pane_ParamLimits

0xb511,	// (0x0002b532) cell_touch_pane

0x186a,	// (0x0002188b) scroll_sc2_down_pane_g1

0x186a,	// (0x0002188b) scroll_sc2_up_pane_g1

0x1874,	// (0x00021895) bg_set_opt_pane_cp4_vc

0xb523,	// (0x0002b544) list_set_graphic_pane_vc_g1_ParamLimits

0xb523,	// (0x0002b544) list_set_graphic_pane_vc_g1

0xb52f,	// (0x0002b550) list_set_graphic_pane_vc_g2_ParamLimits

0xb52f,	// (0x0002b550) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0002f9e7) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0002f9e7) list_set_graphic_pane_vc_g

0xb53b,	// (0x0002b55c) text_primary_small_cp13_vc_ParamLimits

0xb53b,	// (0x0002b55c) text_primary_small_cp13_vc

0xb553,	// (0x0002b574) list_set_graphic_pane_vc_ParamLimits

0xb553,	// (0x0002b574) list_set_graphic_pane_vc

0x1874,	// (0x00021895) input_focus_pane_cp2_vc

0x186a,	// (0x0002188b) setting_code_pane_vc_g1

0x18e7,	// (0x00021908) setting_code_pane_vc_t1

0xb566,	// (0x0002b587) set_text_pane_vc_t1_ParamLimits

0xb566,	// (0x0002b587) set_text_pane_vc_t1

0x1874,	// (0x00021895) input_focus_pane_cp1_vc

0xb583,	// (0x0002b5a4) list_set_text_pane_vc

0x186a,	// (0x0002188b) setting_text_pane_vc_g1

0x1874,	// (0x00021895) bg_set_opt_pane_cp2_vc

0x18de,	// (0x000218ff) setting_slider_graphic_pane_vc_g1

0xb58d,	// (0x0002b5ae) setting_slider_graphic_pane_vc_t1

0xb59d,	// (0x0002b5be) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x0002f9ec) setting_slider_graphic_pane_vc_t

0xb5ad,	// (0x0002b5ce) slider_set_pane_cp_vc

0xb5b5,	// (0x0002b5d6) slider_set_pane_vc_g1

0xb5be,	// (0x0002b5df) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x0002f9f1) slider_set_pane_vc_g

0x1dd0,	// (0x00021df1) set_opt_bg_pane_g1_copy1

0x1dd8,	// (0x00021df9) set_opt_bg_pane_g2_copy1

0xb5ea,	// (0x0002b60b) set_opt_bg_pane_g3_copy1

0x1de8,	// (0x00021e09) set_opt_bg_pane_g4_copy1

0x1df0,	// (0x00021e11) set_opt_bg_pane_g5_copy1

0x1df8,	// (0x00021e19) set_opt_bg_pane_g6_copy1

0xb5f2,	// (0x0002b613) set_opt_bg_pane_g7_copy1

0xb5fc,	// (0x0002b61d) set_opt_bg_pane_g8_copy1

0xb604,	// (0x0002b625) set_opt_bg_pane_g9_copy1

0x1874,	// (0x00021895) bg_set_opt_pane_cp_vc

0xb60c,	// (0x0002b62d) setting_slider_pane_vc_t1

0xb61b,	// (0x0002b63c) setting_slider_pane_vc_t2

0xb62b,	// (0x0002b64c) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x0002fa00) setting_slider_pane_vc_t

0xb63b,	// (0x0002b65c) slider_set_pane_vc

0x8e9b,	// (0x00028ebc) volume_set_pane_vc_g1

0x9196,	// (0x000291b7) volume_set_pane_vc_g2

0x919f,	// (0x000291c0) volume_set_pane_vc_g3

0x91a8,	// (0x000291c9) volume_set_pane_vc_g4

0x91b1,	// (0x000291d2) volume_set_pane_vc_g5

0x91ba,	// (0x000291db) volume_set_pane_vc_g6

0x91c3,	// (0x000291e4) volume_set_pane_vc_g7

0x91cc,	// (0x000291ed) volume_set_pane_vc_g8

0x91d5,	// (0x000291f6) volume_set_pane_vc_g9

0x91de,	// (0x000291ff) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x0002fa07) volume_set_pane_vc_g

0xb643,	// (0x0002b664) volume_set_pane_vc

0xb64d,	// (0x0002b66e) button_value_adjust_pane_cp1_vc

0xb657,	// (0x0002b678) list_highlight_pane_cp2_vc

0xb660,	// (0x0002b681) list_set_pane_vc_ParamLimits

0xb660,	// (0x0002b681) list_set_pane_vc

0xb6be,	// (0x0002b6df) main_pane_set_vc_t1_ParamLimits

0xb6be,	// (0x0002b6df) main_pane_set_vc_t1

0xb6d3,	// (0x0002b6f4) main_pane_set_vc_t2_ParamLimits

0xb6d3,	// (0x0002b6f4) main_pane_set_vc_t2

0xb6e5,	// (0x0002b706) main_pane_set_vc_t3_ParamLimits

0xb6e5,	// (0x0002b706) main_pane_set_vc_t3

0xb6f7,	// (0x0002b718) main_pane_set_vc_t4_ParamLimits

0xb6f7,	// (0x0002b718) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x0002fa1c) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x0002fa1c) main_pane_set_vc_t

0xb709,	// (0x0002b72a) setting_code_pane_vc_ParamLimits

0xb709,	// (0x0002b72a) setting_code_pane_vc

0xb718,	// (0x0002b739) setting_slider_graphic_pane_vc

0xb718,	// (0x0002b739) setting_slider_pane_vc

0xb718,	// (0x0002b739) setting_text_pane_vc

0xb718,	// (0x0002b739) setting_volume_pane_vc

0xb720,	// (0x0002b741) scroll_pane_cp121_vc

0x1cc1,	// (0x00021ce2) set_content_pane_vc

0xb728,	// (0x0002b749) button_value_adjust_pane_g1

0xb731,	// (0x0002b752) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0002fa84) button_value_adjust_pane_g

0xb73a,	// (0x0002b75b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73a,	// (0x0002b75b) form_field_slider_wide_pane_vc_t1

0xb74e,	// (0x0002b76f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb74e,	// (0x0002b76f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0002fa89) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0002fa89) form_field_slider_wide_pane_vc_t

0x18c2,	// (0x000218e3) input_focus_pane_cp10_vc_ParamLimits

0x18c2,	// (0x000218e3) input_focus_pane_cp10_vc

0xb77c,	// (0x0002b79d) slider_cont_pane_cp1_vc_ParamLimits

0xb77c,	// (0x0002b79d) slider_cont_pane_cp1_vc

0xb78e,	// (0x0002b7af) slider_form_pane_g1_cp2

0xb5be,	// (0x0002b5df) slider_form_pane_g2_cp2

0xb7bb,	// (0x0002b7dc) form_field_slider_pane_vc_t3

0xb7c9,	// (0x0002b7ea) form_field_slider_pane_vc_t4

0xb7d7,	// (0x0002b7f8) slider_form_pane_vc_ParamLimits

0xb7d7,	// (0x0002b7f8) slider_form_pane_vc

0xb7e4,	// (0x0002b805) form_field_slider_pane_vc_t1_ParamLimits

0xb7e4,	// (0x0002b805) form_field_slider_pane_vc_t1

0xb74e,	// (0x0002b76f) form_field_slider_pane_vc_t2_ParamLimits

0xb74e,	// (0x0002b76f) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0002fa9b) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0002fa9b) form_field_slider_pane_vc_t

0x18c2,	// (0x000218e3) input_focus_pane_cp9_vc_ParamLimits

0x18c2,	// (0x000218e3) input_focus_pane_cp9_vc

0xb800,	// (0x0002b821) slider_cont_pane_vc_ParamLimits

0xb800,	// (0x0002b821) slider_cont_pane_vc

0xb814,	// (0x0002b835) list_form_graphic_pane_cp_vc_ParamLimits

0xb814,	// (0x0002b835) list_form_graphic_pane_cp_vc

0x8769,	// (0x0002878a) form_field_popup_wide_pane_vc_g1

0xb829,	// (0x0002b84a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb829,	// (0x0002b84a) form_field_popup_wide_pane_vc_t1

0x1d0a,	// (0x00021d2b) input_focus_pane_cp8_vc_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_cp8_vc

0xb86e,	// (0x0002b88f) list_form_wide_pane_vc_ParamLimits

0xb86e,	// (0x0002b88f) list_form_wide_pane_vc

0xb87a,	// (0x0002b89b) list_form_graphic_pane_vc_g1

0xb882,	// (0x0002b8a3) list_form_graphic_pane_vc_t1_ParamLimits

0xb882,	// (0x0002b8a3) list_form_graphic_pane_vc_t1

0x18d0,	// (0x000218f1) list_highlight_pane_cp5_vc_ParamLimits

0x18d0,	// (0x000218f1) list_highlight_pane_cp5_vc

0xb89e,	// (0x0002b8bf) list_form_graphic_pane_vc_ParamLimits

0xb89e,	// (0x0002b8bf) list_form_graphic_pane_vc

0x8769,	// (0x0002878a) form_field_popup_pane_vc_g1

0xb8b4,	// (0x0002b8d5) form_field_popup_pane_vc_t1_ParamLimits

0xb8b4,	// (0x0002b8d5) form_field_popup_pane_vc_t1

0x1d0a,	// (0x00021d2b) input_focus_pane_cp7_vc_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_cp7_vc

0xb8cb,	// (0x0002b8ec) list_form_pane_vc_ParamLimits

0xb8cb,	// (0x0002b8ec) list_form_pane_vc

0xb8d7,	// (0x0002b8f8) data_form_pane_vc_t1_ParamLimits

0xb8d7,	// (0x0002b8f8) data_form_pane_vc_t1

0x1dd0,	// (0x00021df1) input_focus_pane_vc_g1

0x1dd8,	// (0x00021df9) input_focus_pane_vc_g2

0x1de0,	// (0x00021e01) input_focus_pane_vc_g3

0x1de8,	// (0x00021e09) input_focus_pane_vc_g4

0x1df0,	// (0x00021e11) input_focus_pane_vc_g5

0x1df8,	// (0x00021e19) input_focus_pane_vc_g6

0x1e00,	// (0x00021e21) input_focus_pane_vc_g7

0x1e08,	// (0x00021e29) input_focus_pane_vc_g8

0x1e10,	// (0x00021e31) input_focus_pane_vc_g9

0x186a,	// (0x0002188b) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0002f679) input_focus_pane_vc_g

0x875d,	// (0x0002877e) data_form_pane_vc_ParamLimits

0x875d,	// (0x0002877e) data_form_pane_vc

0x8769,	// (0x0002878a) form_field_data_pane_vc_g1

0xb8f2,	// (0x0002b913) form_field_data_pane_vc_t1_ParamLimits

0xb8f2,	// (0x0002b913) form_field_data_pane_vc_t1

0x1d0a,	// (0x00021d2b) input_focus_pane_vc_ParamLimits

0x1d0a,	// (0x00021d2b) input_focus_pane_vc

0xb90c,	// (0x0002b92d) button_value_adjust_pane_cp3_vc

0xb914,	// (0x0002b935) button_value_adjust_pane_cp5_vc

0xb91c,	// (0x0002b93d) form_field_data_pane_vc_ParamLimits

0xb91c,	// (0x0002b93d) form_field_data_pane_vc

0xb933,	// (0x0002b954) form_field_data_pane_vc_cp2

0xb93b,	// (0x0002b95c) form_field_data_wide_pane_vc_ParamLimits

0xb93b,	// (0x0002b95c) form_field_data_wide_pane_vc

0xb951,	// (0x0002b972) form_field_data_wide_pane_vc_cp2

0xb959,	// (0x0002b97a) form_field_popup_pane_vc_ParamLimits

0xb959,	// (0x0002b97a) form_field_popup_pane_vc

0xb970,	// (0x0002b991) form_field_popup_wide_pane_vc_ParamLimits

0xb970,	// (0x0002b991) form_field_popup_wide_pane_vc

0xb986,	// (0x0002b9a7) form_field_slider_pane_vc_ParamLimits

0xb986,	// (0x0002b9a7) form_field_slider_pane_vc

0xb999,	// (0x0002b9ba) form_field_slider_wide_pane_vc_ParamLimits

0xb999,	// (0x0002b9ba) form_field_slider_wide_pane_vc

0xb9ac,	// (0x0002b9cd) grid_touch_1_pane_ParamLimits

0xb9ac,	// (0x0002b9cd) grid_touch_1_pane

0xb9b8,	// (0x0002b9d9) grid_touch_2_pane_ParamLimits

0xb9b8,	// (0x0002b9d9) grid_touch_2_pane

0x2752,	// (0x00022773) touch_pane_g1_ParamLimits

0x2752,	// (0x00022773) touch_pane_g1

0xb9d0,	// (0x0002b9f1) cell_app_pane_cp_wide_ParamLimits

0xb9d0,	// (0x0002b9f1) cell_app_pane_cp_wide

0xb9e1,	// (0x0002ba02) grid_popup_fast_wide_pane_ParamLimits

0xb9e1,	// (0x0002ba02) grid_popup_fast_wide_pane

0xb9f5,	// (0x0002ba16) scroll_pane_cp19_ParamLimits

0xb9f5,	// (0x0002ba16) scroll_pane_cp19

0x1874,	// (0x00021895) bg_popup_window_pane_cp20

0xba09,	// (0x0002ba2a) listscroll_popup_fast_wide_pane

0xba11,	// (0x0002ba32) grid_indicator_nsta_pane

0xba23,	// (0x0002ba44) clock_nsta_pane_g1

0xba2c,	// (0x0002ba4d) clock_nsta_pane_t1

0xba48,	// (0x0002ba69) cell_indicator_nsta_pane_ParamLimits

0xba48,	// (0x0002ba69) cell_indicator_nsta_pane

0xba7d,	// (0x0002ba9e) cell_indicator_nsta_pane_g1

0xba8b,	// (0x0002baac) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0002faac) cell_indicator_nsta_pane_g

0xba9d,	// (0x0002babe) clock_nsta_pane_cp

0xbaa6,	// (0x0002bac7) indicator_nsta_pane_cp

0xbab0,	// (0x0002bad1) nsta_clock_indic_pane_g1

0x1926,	// (0x00021947) grid_indicator_pane

0x72fc,	// (0x0002731d) scroll_pane_cp29

0x7512,	// (0x00027533) indicator_nsta_pane_cp2_ParamLimits

0x7512,	// (0x00027533) indicator_nsta_pane_cp2

0x18d0,	// (0x000218f1) main_apps_wheel_pane

0x8981,	// (0x000289a2) form_midp_field_text_pane_ParamLimits

0x8aca,	// (0x00028aeb) scroll_bar_cp050_ParamLimits

0xbb09,	// (0x0002bb2a) cell_indicator_pane_ParamLimits

0xbb09,	// (0x0002bb2a) cell_indicator_pane

0xbb22,	// (0x0002bb43) cell_indicator_pane_g1

0xbb2c,	// (0x0002bb4d) grid_wheel_folder_pane_ParamLimits

0xbb2c,	// (0x0002bb4d) grid_wheel_folder_pane

0xbb42,	// (0x0002bb63) list_wheel_apps_pane_ParamLimits

0xbb42,	// (0x0002bb63) list_wheel_apps_pane

0xbb53,	// (0x0002bb74) main_apps_wheel_pane_g1_ParamLimits

0xbb53,	// (0x0002bb74) main_apps_wheel_pane_g1

0xbb67,	// (0x0002bb88) main_apps_wheel_pane_g2_ParamLimits

0xbb67,	// (0x0002bb88) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0002fac8) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0002fac8) main_apps_wheel_pane_g

0xbb7f,	// (0x0002bba0) main_apps_wheel_pane_t1_ParamLimits

0xbb7f,	// (0x0002bba0) main_apps_wheel_pane_t1

0xbba2,	// (0x0002bbc3) list_wheel_apps_pane_g1

0xbbaa,	// (0x0002bbcb) list_wheel_apps_pane_g2

0xbbb2,	// (0x0002bbd3) list_wheel_apps_pane_g3

0xbbbc,	// (0x0002bbdd) list_wheel_apps_pane_g4

0xbbc6,	// (0x0002bbe7) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0002facd) list_wheel_apps_pane_g

0x24cd,	// (0x000224ee) navi_icon_text_pane

0x8050,	// (0x00028071) aid_fill_nsta

0xbbe9,	// (0x0002bc0a) navi_icon_text_pane_g1

0xbbf5,	// (0x0002bc16) navi_icon_text_pane_t1

0x23bd,	// (0x000223de) list_set_graphic_pane_t1_ParamLimits

0x23bd,	// (0x000223de) list_set_graphic_pane_t1

0xa5ba,	// (0x0002a5db) popup_midp_note_alarm_window_t6_ParamLimits

0xa5ba,	// (0x0002a5db) popup_midp_note_alarm_window_t6

0xa5cc,	// (0x0002a5ed) popup_midp_note_alarm_window_t7_ParamLimits

0xa5cc,	// (0x0002a5ed) popup_midp_note_alarm_window_t7

0xa5de,	// (0x0002a5ff) popup_midp_note_alarm_window_t8_ParamLimits

0xa5de,	// (0x0002a5ff) popup_midp_note_alarm_window_t8

0xa5f0,	// (0x0002a611) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f0,	// (0x0002a611) popup_midp_note_alarm_window_t9

0xa602,	// (0x0002a623) popup_midp_note_alarm_window_t10_ParamLimits

0xa602,	// (0x0002a623) popup_midp_note_alarm_window_t10

0xa614,	// (0x0002a635) popup_midp_note_alarm_window_t11_ParamLimits

0xa614,	// (0x0002a635) popup_midp_note_alarm_window_t11

0xa626,	// (0x0002a647) scroll_pane_cp17_ParamLimits

0xa626,	// (0x0002a647) scroll_pane_cp17

0x8e9b,	// (0x00028ebc) volume_small_pane_cp_g1

0x91e7,	// (0x00029208) volume_small_pane_cp_g2

0x91f0,	// (0x00029211) volume_small_pane_cp_g3

0x91f9,	// (0x0002921a) volume_small_pane_cp_g4

0x9202,	// (0x00029223) volume_small_pane_cp_g5

0x91b1,	// (0x000291d2) volume_small_pane_cp_g6

0x920b,	// (0x0002922c) volume_small_pane_cp_g7

0x9214,	// (0x00029235) volume_small_pane_cp_g8

0x921d,	// (0x0002923e) volume_small_pane_cp_g9

0x9226,	// (0x00029247) volume_small_pane_cp_g10

0x2633,	// (0x00022654) midp_ticker_pane_g1_ParamLimits

0x263f,	// (0x00022660) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0002f745) midp_ticker_pane_g_ParamLimits

0x264b,	// (0x0002266c) midp_ticker_pane_t1_ParamLimits

0x8066,	// (0x00028087) aid_fill_nsta_2

0x8ab6,	// (0x00028ad7) list_form2_midp_pane

0xaf6e,	// (0x0002af8f) midp_editing_number_pane_ParamLimits

0xaf7d,	// (0x0002af9e) midp_ticker_pane_ParamLimits

0xbc07,	// (0x0002bc28) form2_midp_field_pane

0xbc2b,	// (0x0002bc4c) scroll_pane_cp51

0xbc4b,	// (0x0002bc6c) form2_midp_button_pane_ParamLimits

0xbc4b,	// (0x0002bc6c) form2_midp_button_pane

0xbc5d,	// (0x0002bc7e) form2_midp_content_pane_ParamLimits

0xbc5d,	// (0x0002bc7e) form2_midp_content_pane

0xbc77,	// (0x0002bc98) form2_midp_field_choice_group_pane

0xbc7f,	// (0x0002bca0) form2_midp_field_pane_g1

0xbc87,	// (0x0002bca8) form2_midp_field_pane_g2

0xbc8f,	// (0x0002bcb0) form2_midp_field_pane_g3

0xbc97,	// (0x0002bcb8) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0002faf2) form2_midp_field_pane_g

0xbc9f,	// (0x0002bcc0) form2_midp_gauge_slider_pane

0xbca7,	// (0x0002bcc8) form2_midp_gauge_wait_pane

0xbcaf,	// (0x0002bcd0) form2_midp_image_pane_ParamLimits

0xbcaf,	// (0x0002bcd0) form2_midp_image_pane

0xbcca,	// (0x0002bceb) form2_midp_label_pane_ParamLimits

0xbcca,	// (0x0002bceb) form2_midp_label_pane

0xbce3,	// (0x0002bd04) form2_midp_label_pane_cp_ParamLimits

0xbce3,	// (0x0002bd04) form2_midp_label_pane_cp

0xbd04,	// (0x0002bd25) form2_midp_string_pane_ParamLimits

0xbd04,	// (0x0002bd25) form2_midp_string_pane

0x6180,	// (0x000261a1) form2_midp_text_pane_ParamLimits

0x6180,	// (0x000261a1) form2_midp_text_pane

0xbd16,	// (0x0002bd37) form2_midp_time_pane

0xbd26,	// (0x0002bd47) input_focus_pane_cp51_ParamLimits

0xbd26,	// (0x0002bd47) input_focus_pane_cp51

0xbd3e,	// (0x0002bd5f) form2_midp_label_pane_t1_ParamLimits

0xbd3e,	// (0x0002bd5f) form2_midp_label_pane_t1

0x6199,	// (0x000261ba) form2_mdip_text_pane_t1_ParamLimits

0x6199,	// (0x000261ba) form2_mdip_text_pane_t1

0x61b7,	// (0x000261d8) form2_midp_time_pane_t1

0xbd87,	// (0x0002bda8) form2_midp_gauge_slider_pane_t1

0xbd99,	// (0x0002bdba) form2_midp_gauge_slider_pane_t2

0xbdab,	// (0x0002bdcc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0002fafb) form2_midp_gauge_slider_pane_t

0xbdbd,	// (0x0002bdde) form2_midp_slider_pane

0xbdc9,	// (0x0002bdea) form2_midp_gauge_wait_pane_t1

0xbdd7,	// (0x0002bdf8) form2_midp_wait_pane_ParamLimits

0xbdd7,	// (0x0002bdf8) form2_midp_wait_pane

0xbe02,	// (0x0002be23) list_single_2graphic_pane_cp4_ParamLimits

0xbe02,	// (0x0002be23) list_single_2graphic_pane_cp4

0x87d2,	// (0x000287f3) list_single_midp_graphic_pane_cp_ParamLimits

0x87d2,	// (0x000287f3) list_single_midp_graphic_pane_cp

0x1874,	// (0x00021895) list_highlight_pane_cp20

0xbe2a,	// (0x0002be4b) list_single_2graphic_pane_g1_cp4

0xb407,	// (0x0002b428) list_single_2graphic_pane_g2_cp4

0xbe32,	// (0x0002be53) list_single_2graphic_pane_t1_cp4

0x18d0,	// (0x000218f1) list_highlight_pane_cp21

0xbe41,	// (0x0002be62) list_single_midp_graphic_pane_g4_cp

0xbe50,	// (0x0002be71) list_single_midp_graphic_pane_t1_cp

0xbe65,	// (0x0002be86) form2_mdip_string_pane_t1_ParamLimits

0xbe65,	// (0x0002be86) form2_mdip_string_pane_t1

0x1874,	// (0x00021895) bg_wml_button_pane_cp2

0x186a,	// (0x0002188b) form2_midp_image_pane_g1

0x5701,	// (0x00025722) list_double_large_graphic_pane_g5_ParamLimits

0x5701,	// (0x00025722) list_double_large_graphic_pane_g5

0x76d6,	// (0x000276f7) midp_form_pane_ParamLimits

0x18d0,	// (0x000218f1) main_apps_wheel_pane_ParamLimits

0x7e38,	// (0x00027e59) popup_preview_window_ParamLimits

0x7e38,	// (0x00027e59) popup_preview_window

0x7ff3,	// (0x00028014) popup_touch_info_window_ParamLimits

0x7ff3,	// (0x00028014) popup_touch_info_window

0x8011,	// (0x00028032) popup_touch_menu_window_ParamLimits

0x8011,	// (0x00028032) popup_touch_menu_window

0x1860,	// (0x00021881) bg_popup_sub_pane_cp6

0xbf6c,	// (0x0002bf8d) list_touch_menu_pane

0xbf74,	// (0x0002bf95) list_single_touch_menu_pane_ParamLimits

0xbf74,	// (0x0002bf95) list_single_touch_menu_pane

0xbf8a,	// (0x0002bfab) list_single_touch_menu_pane_t1

0x18d0,	// (0x000218f1) bg_popup_sub_pane_cp7_ParamLimits

0x18d0,	// (0x000218f1) bg_popup_sub_pane_cp7

0xbf98,	// (0x0002bfb9) heading_sub_pane

0xbfa0,	// (0x0002bfc1) list_touch_info_pane_ParamLimits

0xbfa0,	// (0x0002bfc1) list_touch_info_pane

0xbfaf,	// (0x0002bfd0) list_single_touch_info_pane_ParamLimits

0xbfaf,	// (0x0002bfd0) list_single_touch_info_pane

0xbfc1,	// (0x0002bfe2) list_single_touch_info_pane_t1

0xbfcf,	// (0x0002bff0) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0002fb09) list_single_touch_info_pane_t

0x261c,	// (0x0002263d) bg_popup_heading_pane_cp

0xbfdd,	// (0x0002bffe) heading_sub_pane_t1

0x866f,	// (0x00028690) bg_popup_preview_window_pane_cp_ParamLimits

0x866f,	// (0x00028690) bg_popup_preview_window_pane_cp

0xbf98,	// (0x0002bfb9) heading_preview_pane

0xbfa0,	// (0x0002bfc1) list_preview_pane_ParamLimits

0xbfa0,	// (0x0002bfc1) list_preview_pane

0xbfeb,	// (0x0002c00c) popup_preview_window_g1

0xbfaf,	// (0x0002bfd0) list_single_preview_pane_ParamLimits

0xbfaf,	// (0x0002bfd0) list_single_preview_pane

0xbff3,	// (0x0002c014) list_single_preview_pane_g1

0xbffb,	// (0x0002c01c) list_single_preview_pane_t1

0xbfc1,	// (0x0002bfe2) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0002fb0e) list_single_preview_pane_t

0xc009,	// (0x0002c02a) bg_popup_heading_pane_cp2_ParamLimits

0xc009,	// (0x0002c02a) bg_popup_heading_pane_cp2

0xc01f,	// (0x0002c040) heading_preview_pane_g1

0xc027,	// (0x0002c048) heading_preview_pane_t1_ParamLimits

0xc027,	// (0x0002c048) heading_preview_pane_t1

0x193d,	// (0x0002195e) soft_indicator_pane_t1_ParamLimits

0x1c1c,	// (0x00021c3d) scroll_pane_ParamLimits

0x20a6,	// (0x000220c7) scroll_sc2_left_pane

0x209d,	// (0x000220be) scroll_sc2_right_pane

0x20c5,	// (0x000220e6) scroll_bg_pane_g1_ParamLimits

0x20da,	// (0x000220fb) scroll_bg_pane_g2_ParamLimits

0x20f2,	// (0x00022113) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0002f6d0) scroll_bg_pane_g_ParamLimits

0x20c5,	// (0x000220e6) scroll_handle_pane_g1_ParamLimits

0x2107,	// (0x00022128) scroll_handle_pane_g2_ParamLimits

0x20f2,	// (0x00022113) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0002f6d7) scroll_handle_pane_g_ParamLimits

0x7abb,	// (0x00027adc) popup_choice_list_window_ParamLimits

0x7abb,	// (0x00027adc) popup_choice_list_window

0x8485,	// (0x000284a6) choice_list_pane

0x8537,	// (0x00028558) cell_toolbar_pane_t1

0x855f,	// (0x00028580) toolbar_button_pane_ParamLimits

0xaae0,	// (0x0002ab01) ai_gene_pane_1_t2_ParamLimits

0xaae0,	// (0x0002ab01) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x0002f8fa) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x0002f8fa) ai_gene_pane_1_t

0xc044,	// (0x0002c065) scroll_sc2_left_pane_g1

0xc044,	// (0x0002c065) scroll_sc2_right_pane_g1

0x1eba,	// (0x00021edb) bg_popup_sub_pane_cp10

0xc04e,	// (0x0002c06f) list_choice_list_pane

0xc067,	// (0x0002c088) list_single_choice_list_pane_ParamLimits

0xc067,	// (0x0002c088) list_single_choice_list_pane

0xc07a,	// (0x0002c09b) list_single_choice_list_pane_g1

0x6f95,	// (0x00026fb6) list_single_choice_list_pane_t1_ParamLimits

0x6f95,	// (0x00026fb6) list_single_choice_list_pane_t1

0xc082,	// (0x0002c0a3) choice_list_pane_g1

0xc08a,	// (0x0002c0ab) choice_list_pane_t1

0x1860,	// (0x00021881) input_focus_pane_cp11

0x2012,	// (0x00022033) title_pane_stacon_g2_ParamLimits

0x2012,	// (0x00022033) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0002f6b6) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0002f6b6) title_pane_stacon_g

0x261c,	// (0x0002263d) cursor_press_pane

0x7b63,	// (0x00027b84) popup_fep_hwr_window_ParamLimits

0x7b63,	// (0x00027b84) popup_fep_hwr_window

0x7bdb,	// (0x00027bfc) popup_fep_vkb_window_ParamLimits

0x7bdb,	// (0x00027bfc) popup_fep_vkb_window

0xc098,	// (0x0002c0b9) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0002fb37) fep_vkb_side_pane_g_ParamLimits

0x9268,	// (0x00029289) fep_hwr_candidate_pane_ParamLimits

0x9268,	// (0x00029289) fep_hwr_candidate_pane

0x9292,	// (0x000292b3) fep_hwr_side_pane_ParamLimits

0x9292,	// (0x000292b3) fep_hwr_side_pane

0x92b2,	// (0x000292d3) fep_hwr_top_pane_ParamLimits

0x92b2,	// (0x000292d3) fep_hwr_top_pane

0x92ca,	// (0x000292eb) fep_hwr_write_pane_ParamLimits

0x92ca,	// (0x000292eb) fep_hwr_write_pane

0xfb16,	// (0x0002fb37) fep_vkb_side_pane_g

0xc0a0,	// (0x0002c0c1) fep_hwr_top_pane_g1

0xc0b2,	// (0x0002c0d3) fep_hwr_top_pane_g2

0x92f6,	// (0x00029317) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0002fb13) fep_hwr_top_pane_g

0x930b,	// (0x0002932c) fep_hwr_top_text_pane

0x21ca,	// (0x000221eb) fep_hwr_top_text_pane_g1

0xc0e8,	// (0x0002c109) fep_hwr_top_text_pane_t1

0x9401,	// (0x00029422) fep_hwr_candidate_pane_g1

0xc32d,	// (0x0002c34e) fep_vkb_keypad_pane_g3_ParamLimits

0xc32d,	// (0x0002c34e) fep_vkb_keypad_pane_g3

0xc355,	// (0x0002c376) fep_vkb_keypad_pane_g4_ParamLimits

0xc355,	// (0x0002c376) fep_vkb_keypad_pane_g4

0xc3c4,	// (0x0002c3e5) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c4,	// (0x0002c3e5) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0002fb3e) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0002fb3e) fep_vkb_bottom_pane_g

0xc044,	// (0x0002c065) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0002fb48) cell_vkb_side_pane_g

0xc44f,	// (0x0002c470) cell_vkb_side_pane_t1

0xc45d,	// (0x0002c47e) cell_vkb_side_pane_t1_copy1

0xc044,	// (0x0002c065) bg_fep_vkb_candidate_pane_g2

0xc589,	// (0x0002c5aa) cell_vkb_candidate_pane_ParamLimits

0xc0f6,	// (0x0002c117) aid_size_cell_vkb_ParamLimits

0xc0f6,	// (0x0002c117) aid_size_cell_vkb

0xc589,	// (0x0002c5aa) cell_vkb_candidate_pane

0x941b,	// (0x0002943c) bg_popup_fep_shadow_pane_g1

0xc184,	// (0x0002c1a5) fep_vkb_bottom_pane_ParamLimits

0xc184,	// (0x0002c1a5) fep_vkb_bottom_pane

0xc1ba,	// (0x0002c1db) fep_vkb_candidate_pane_ParamLimits

0xc1ba,	// (0x0002c1db) fep_vkb_candidate_pane

0xc1d6,	// (0x0002c1f7) fep_vkb_keypad_pane_ParamLimits

0xc1d6,	// (0x0002c1f7) fep_vkb_keypad_pane

0xc215,	// (0x0002c236) fep_vkb_side_pane_ParamLimits

0xc215,	// (0x0002c236) fep_vkb_side_pane

0xc251,	// (0x0002c272) fep_vkb_top_pane_ParamLimits

0xc251,	// (0x0002c272) fep_vkb_top_pane

0xc286,	// (0x0002c2a7) fep_vkb_top_pane_g1_ParamLimits

0xc286,	// (0x0002c2a7) fep_vkb_top_pane_g1

0xc295,	// (0x0002c2b6) fep_vkb_top_pane_g2_ParamLimits

0xc295,	// (0x0002c2b6) fep_vkb_top_pane_g2

0xc2a4,	// (0x0002c2c5) fep_vkb_top_pane_g3_ParamLimits

0xc2a4,	// (0x0002c2c5) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0002fb2e) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0002fb2e) fep_vkb_top_pane_g

0xc2c2,	// (0x0002c2e3) fep_vkb_top_text_pane_ParamLimits

0xc2c2,	// (0x0002c2e3) fep_vkb_top_text_pane

0xc2d3,	// (0x0002c2f4) fep_vkb_side_pane_g1_ParamLimits

0xc2d3,	// (0x0002c2f4) fep_vkb_side_pane_g1

0xc31c,	// (0x0002c33d) grid_vkb_side_pane_ParamLimits

0xc31c,	// (0x0002c33d) grid_vkb_side_pane

0x9423,	// (0x00029444) bg_popup_fep_shadow_pane_g2

0x942c,	// (0x0002944d) bg_popup_fep_shadow_pane_g3

0x9434,	// (0x00029455) bg_popup_fep_shadow_pane_g4

0x943d,	// (0x0002945e) bg_popup_fep_shadow_pane_g5

0x9447,	// (0x00029468) bg_popup_fep_shadow_pane_g6

0x944f,	// (0x00029470) bg_popup_fep_shadow_pane_g7

0x1df0,	// (0x00021e11) bg_popup_fep_shadow_pane_g8

0xc373,	// (0x0002c394) grid_vkb_keypad_number_pane_ParamLimits

0xc373,	// (0x0002c394) grid_vkb_keypad_number_pane

0xc383,	// (0x0002c3a4) grid_vkb_keypad_pane_ParamLimits

0xc383,	// (0x0002c3a4) grid_vkb_keypad_pane

0xc3a9,	// (0x0002c3ca) fep_vkb_bottom_pane_g1_ParamLimits

0xc3a9,	// (0x0002c3ca) fep_vkb_bottom_pane_g1

0xc3d2,	// (0x0002c3f3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d2,	// (0x0002c3f3) grid_vkb_keypad_bottom_left_pane

0xc3e7,	// (0x0002c408) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e7,	// (0x0002c408) grid_vkb_keypad_bottom_right_pane

0xc3fc,	// (0x0002c41d) fep_vkb_top_text_pane_g1

0xc417,	// (0x0002c438) fep_vkb_top_text_pane_t1

0xc42c,	// (0x0002c44d) cell_vkb_side_pane_ParamLimits

0xc42c,	// (0x0002c44d) cell_vkb_side_pane

0xc044,	// (0x0002c065) cell_vkb_side_pane_g1

0xc46b,	// (0x0002c48c) cell_vkb_keypad_pane_ParamLimits

0xc46b,	// (0x0002c48c) cell_vkb_keypad_pane

0xc4e0,	// (0x0002c501) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0002fb5b) bg_popup_fep_shadow_pane_g

0xc044,	// (0x0002c065) cell_hwr_side_pane_g1

0xc044,	// (0x0002c065) cell_hwr_side_pane_g2

0xc4ea,	// (0x0002c50b) cell_vkb_keypad_pane_t1

0xc4f8,	// (0x0002c519) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4f8,	// (0x0002c519) cell_vkb_keypad_bottom_left_pane

0xc515,	// (0x0002c536) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc515,	// (0x0002c536) cell_vkb_keypad_bottom_right_pane

0xc044,	// (0x0002c065) cell_vkb_keypad_bottom_left_pane_g1

0xc044,	// (0x0002c065) cell_vkb_keypad_bottom_right_pane_g1

0xc54e,	// (0x0002c56f) cell_vkb_keypad_number_pane_ParamLimits

0xc54e,	// (0x0002c56f) cell_vkb_keypad_number_pane

0xc56d,	// (0x0002c58e) cell_vkb_keypad_number_pane_g1

0xc577,	// (0x0002c598) cell_vkb_keypad_number_pane_g2

0xc580,	// (0x0002c5a1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0002fb4d) cell_vkb_keypad_number_pane_g

0xc4ea,	// (0x0002c50b) cell_vkb_keypad_number_pane_t1

0xc5a4,	// (0x0002c5c5) fep_vkb_candidate_pane_g1

0x0001,

0xfb27,	// (0x0002fb48) cell_hwr_side_pane_g

0xc5bd,	// (0x0002c5de) cell_hwr_side_pane_t1

0x9461,	// (0x00029482) cell_hwr_side_pane_t1_copy1

0xc2b4,	// (0x0002c2d5) cell_hwr_candidate_pane_g1

0x946f,	// (0x00029490) cell_hwr_candidate_pane_t1

0xc044,	// (0x0002c065) cell_vkb_candidate_pane_g2

0xc643,	// (0x0002c664) cell_vkb_candidate_pane_t1

0x922f,	// (0x00029250) bg_popup_fep_shadow_pane_ParamLimits

0x922f,	// (0x00029250) bg_popup_fep_shadow_pane

0x1830,	// (0x00021851) bg_fep_hwr_top_pane_g4

0xc0c4,	// (0x0002c0e5) bg_hwr_side_pane_g1_ParamLimits

0xc0c4,	// (0x0002c0e5) bg_hwr_side_pane_g1

0x9347,	// (0x00029368) cell_hwr_side_pane_ParamLimits

0x9347,	// (0x00029368) cell_hwr_side_pane

0x9382,	// (0x000293a3) fep_hwr_write_pane_g1_ParamLimits

0x9382,	// (0x000293a3) fep_hwr_write_pane_g1

0x938f,	// (0x000293b0) fep_hwr_write_pane_g2_ParamLimits

0x938f,	// (0x000293b0) fep_hwr_write_pane_g2

0x939c,	// (0x000293bd) fep_hwr_write_pane_g3_ParamLimits

0x939c,	// (0x000293bd) fep_hwr_write_pane_g3

0x93aa,	// (0x000293cb) fep_hwr_write_pane_g4_ParamLimits

0x93aa,	// (0x000293cb) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0002fb1a) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0002fb1a) fep_hwr_write_pane_g

0x1830,	// (0x00021851) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1830,	// (0x00021851) bg_fep_hwr_candidate_pane_g2

0x93bf,	// (0x000293e0) cell_hwr_candidate_pane_ParamLimits

0x93bf,	// (0x000293e0) cell_hwr_candidate_pane

0x9401,	// (0x00029422) fep_hwr_candidate_pane_g1_ParamLimits

0xc124,	// (0x0002c145) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc124,	// (0x0002c145) bg_popup_fep_shadow_pane_cp2

0xc2b4,	// (0x0002c2d5) fep_vkb_top_pane_g4_ParamLimits

0xc2b4,	// (0x0002c2d5) fep_vkb_top_pane_g4

0xc2fa,	// (0x0002c31b) fep_vkb_side_pane_g2_ParamLimits

0xc2fa,	// (0x0002c31b) fep_vkb_side_pane_g2

0x5819,	// (0x0002583a) list_setting_pane_t4_ParamLimits

0x5819,	// (0x0002583a) list_setting_pane_t4

0x58ab,	// (0x000258cc) list_setting_number_pane_t5_ParamLimits

0x58ab,	// (0x000258cc) list_setting_number_pane_t5

0x732b,	// (0x0002734c) list_double_heading_pane_cp2_ParamLimits

0x732b,	// (0x0002734c) list_double_heading_pane_cp2

0x27cd,	// (0x000227ee) list_double_heading_pane_g1_cp2_ParamLimits

0x27cd,	// (0x000227ee) list_double_heading_pane_g1_cp2

0xc651,	// (0x0002c672) list_double_heading_pane_g2_cp2_ParamLimits

0xc651,	// (0x0002c672) list_double_heading_pane_g2_cp2

0xc665,	// (0x0002c686) list_double_heading_pane_t1_cp2_ParamLimits

0xc665,	// (0x0002c686) list_double_heading_pane_t1_cp2

0xc67b,	// (0x0002c69c) list_double_heading_pane_t2_cp2_ParamLimits

0xc67b,	// (0x0002c69c) list_double_heading_pane_t2_cp2

0x1858,	// (0x00021879) aid_value_unit2

0x682f,	// (0x00026850) popup_preview_fixed_window

0x1a14,	// (0x00021a35) bg_popup_preview_window_pane_cp02

0xc68d,	// (0x0002c6ae) list_preview_fixed_pane

0xc6d3,	// (0x0002c6f4) list_empty_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_empty_pane_fp

0xc6d3,	// (0x0002c6f4) list_single_cale_day_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_single_cale_day_pane_fp

0xc6d3,	// (0x0002c6f4) list_single_graphic_heading_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_single_graphic_heading_pane_fp

0xc6d3,	// (0x0002c6f4) list_single_graphic_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_single_graphic_pane_fp

0xc6d3,	// (0x0002c6f4) list_single_heading_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_single_heading_pane_fp

0xc6d3,	// (0x0002c6f4) list_single_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_single_pane_fp

0xc6e9,	// (0x0002c70a) list_single_pane_fp_g1_ParamLimits

0xc6e9,	// (0x0002c70a) list_single_pane_fp_g1

0x56b2,	// (0x000256d3) list_single_pane_fp_g2_ParamLimits

0x56b2,	// (0x000256d3) list_single_pane_fp_g2

0x61ca,	// (0x000261eb) list_single_pane_fp_g3_ParamLimits

0x61ca,	// (0x000261eb) list_single_pane_fp_g3

0xc6f5,	// (0x0002c716) list_single_pane_fp_g4_ParamLimits

0xc6f5,	// (0x0002c716) list_single_pane_fp_g4

0x0003,

0xfb5b,	// (0x0002fb7c) list_single_pane_fp_g_ParamLimits

0xfb5b,	// (0x0002fb7c) list_single_pane_fp_g

0x61de,	// (0x000261ff) list_single_pane_fp_t1_ParamLimits

0x61de,	// (0x000261ff) list_single_pane_fp_t1

0x61f5,	// (0x00026216) list_single_graphic_pane_fp_g1_ParamLimits

0x61f5,	// (0x00026216) list_single_graphic_pane_fp_g1

0xc6e9,	// (0x0002c70a) list_single_graphic_pane_fp_g2_ParamLimits

0xc6e9,	// (0x0002c70a) list_single_graphic_pane_fp_g2

0x56b2,	// (0x000256d3) list_single_graphic_pane_fp_g3_ParamLimits

0x56b2,	// (0x000256d3) list_single_graphic_pane_fp_g3

0x61ca,	// (0x000261eb) list_single_graphic_pane_fp_g4_ParamLimits

0x61ca,	// (0x000261eb) list_single_graphic_pane_fp_g4

0xc6f5,	// (0x0002c716) list_single_graphic_pane_fp_g5_ParamLimits

0xc6f5,	// (0x0002c716) list_single_graphic_pane_fp_g5

0x0004,

0xfb64,	// (0x0002fb85) list_single_graphic_pane_fp_g_ParamLimits

0xfb64,	// (0x0002fb85) list_single_graphic_pane_fp_g

0x6201,	// (0x00026222) list_single_graphic_pane_fp_t1_ParamLimits

0x6201,	// (0x00026222) list_single_graphic_pane_fp_t1

0x61f5,	// (0x00026216) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x61f5,	// (0x00026216) list_single_graphic_heading_pane_fp_g1

0xc6e9,	// (0x0002c70a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6e9,	// (0x0002c70a) list_single_graphic_heading_pane_fp_g2

0x56b2,	// (0x000256d3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56b2,	// (0x000256d3) list_single_graphic_heading_pane_fp_g3

0x61ca,	// (0x000261eb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x61ca,	// (0x000261eb) list_single_graphic_heading_pane_fp_g4

0xc6f5,	// (0x0002c716) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6f5,	// (0x0002c716) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002fb85) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002fb85) list_single_graphic_heading_pane_fp_g

0x6217,	// (0x00026238) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6217,	// (0x00026238) list_single_graphic_heading_pane_fp_t1

0x622d,	// (0x0002624e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x622d,	// (0x0002624e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6f,	// (0x0002fb90) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6f,	// (0x0002fb90) list_single_graphic_heading_pane_fp_t

0x623f,	// (0x00026260) list_single_cale_day_pane_fp_g1_ParamLimits

0x623f,	// (0x00026260) list_single_cale_day_pane_fp_g1

0xc701,	// (0x0002c722) list_single_cale_day_pane_fp_g2_ParamLimits

0xc701,	// (0x0002c722) list_single_cale_day_pane_fp_g2

0x6277,	// (0x00026298) list_single_cale_day_pane_fp_g3_ParamLimits

0x6277,	// (0x00026298) list_single_cale_day_pane_fp_g3

0x629f,	// (0x000262c0) list_single_cale_day_pane_fp_g4_ParamLimits

0x629f,	// (0x000262c0) list_single_cale_day_pane_fp_g4

0x62c3,	// (0x000262e4) list_single_cale_day_pane_fp_g5_ParamLimits

0x62c3,	// (0x000262e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb74,	// (0x0002fb95) list_single_cale_day_pane_fp_g_ParamLimits

0xfb74,	// (0x0002fb95) list_single_cale_day_pane_fp_g

0x62e7,	// (0x00026308) list_single_cale_day_pane_fp_t1_ParamLimits

0x62e7,	// (0x00026308) list_single_cale_day_pane_fp_t1

0x630d,	// (0x0002632e) list_single_cale_day_pane_fp_t2_ParamLimits

0x630d,	// (0x0002632e) list_single_cale_day_pane_fp_t2

0x6326,	// (0x00026347) list_single_cale_day_pane_fp_t3_ParamLimits

0x6326,	// (0x00026347) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7f,	// (0x0002fba0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7f,	// (0x0002fba0) list_single_cale_day_pane_fp_t

0xc6e9,	// (0x0002c70a) list_empty_pane_fp_g1_ParamLimits

0xc6e9,	// (0x0002c70a) list_empty_pane_fp_g1

0x633f,	// (0x00026360) list_empty_pane_fp_t1

0x634d,	// (0x0002636e) list_empty_pane_fp_t2

0x0001,

0xfb86,	// (0x0002fba7) list_empty_pane_fp_t

0xc6e9,	// (0x0002c70a) list_single_heading_pane_fp_g1_ParamLimits

0xc6e9,	// (0x0002c70a) list_single_heading_pane_fp_g1

0x56b2,	// (0x000256d3) list_single_heading_pane_fp_g2_ParamLimits

0x56b2,	// (0x000256d3) list_single_heading_pane_fp_g2

0x61ca,	// (0x000261eb) list_single_heading_pane_fp_g3_ParamLimits

0x61ca,	// (0x000261eb) list_single_heading_pane_fp_g3

0x0002,

0xfb8b,	// (0x0002fbac) list_single_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002fbac) list_single_heading_pane_fp_g

0x635b,	// (0x0002637c) list_single_heading_pane_fp_t1_ParamLimits

0x635b,	// (0x0002637c) list_single_heading_pane_fp_t1

0x636d,	// (0x0002638e) list_single_heading_pane_fp_t2_ParamLimits

0x636d,	// (0x0002638e) list_single_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0002fbb3) list_single_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0002fbb3) list_single_heading_pane_fp_t

0x6ffb,	// (0x0002701c) aid_size_cell_fast

0x19f7,	// (0x00021a18) soft_indicator_pane_cp1_t1

0x7004,	// (0x00027025) cell_app_pane_cp2_ParamLimits

0x7004,	// (0x00027025) cell_app_pane_cp2

0x9251,	// (0x00029272) fep_hwr_candidate_drop_down_list_pane

0x183e,	// (0x0002185f) fep_hwr_candidate_pane_g3_ParamLimits

0x183e,	// (0x0002185f) fep_hwr_candidate_pane_g3

0x184b,	// (0x0002186c) fep_hwr_candidate_pane_g4_ParamLimits

0x184b,	// (0x0002186c) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0002fb27) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0002fb27) fep_hwr_candidate_pane_g

0xc1a9,	// (0x0002c1ca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a9,	// (0x0002c1ca) fep_vkb_candidate_drop_down_list_pane

0xc5ac,	// (0x0002c5cd) fep_vkb_candidate_pane_g3

0xc5b4,	// (0x0002c5d5) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0002fb54) fep_vkb_candidate_pane_g

0xc2b4,	// (0x0002c2d5) cell_hwr_candidate_pane_g1_ParamLimits

0xc5cb,	// (0x0002c5ec) cell_hwr_candidate_pane_g3_ParamLimits

0xc5cb,	// (0x0002c5ec) cell_hwr_candidate_pane_g3

0xc5ec,	// (0x0002c60d) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ec,	// (0x0002c60d) cell_hwr_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0002fb6e) cell_hwr_candidate_pane_g_ParamLimits

0xfb4d,	// (0x0002fb6e) cell_hwr_candidate_pane_g

0xc60d,	// (0x0002c62e) cell_vkb_candidate_pane_g3_ParamLimits

0xc60d,	// (0x0002c62e) cell_vkb_candidate_pane_g3

0xc628,	// (0x0002c649) cell_vkb_candidate_pane_g4_ParamLimits

0xc628,	// (0x0002c649) cell_vkb_candidate_pane_g4

0xc70d,	// (0x0002c72e) cell_app_pane_cp2_g1_ParamLimits

0xc70d,	// (0x0002c72e) cell_app_pane_cp2_g1

0xc72b,	// (0x0002c74c) cell_app_pane_cp2_g2_ParamLimits

0xc72b,	// (0x0002c74c) cell_app_pane_cp2_g2

0x0001,

0xfb97,	// (0x0002fbb8) cell_app_pane_cp2_g_ParamLimits

0xfb97,	// (0x0002fbb8) cell_app_pane_cp2_g

0xc737,	// (0x0002c758) cell_app_pane_cp2_t1_ParamLimits

0xc737,	// (0x0002c758) cell_app_pane_cp2_t1

0x1d0a,	// (0x00021d2b) grid_highlight_pane_cp1_ParamLimits

0x1d0a,	// (0x00021d2b) grid_highlight_pane_cp1

0x948d,	// (0x000294ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x948d,	// (0x000294ae) cell_hwr_candidate_pane_cp1

0xc2b4,	// (0x0002c2d5) fep_hwr_candidate_drop_down_list_pane_g1

0xc749,	// (0x0002c76a) fep_hwr_candidate_drop_down_list_pane_g2

0xc756,	// (0x0002c777) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002fbbd) fep_hwr_candidate_drop_down_list_pane_g

0x94ac,	// (0x000294cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x94b5,	// (0x000294d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x94b5,	// (0x000294d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x94c2,	// (0x000294e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x94c2,	// (0x000294e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x94cf,	// (0x000294f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x94cf,	// (0x000294f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc60d,	// (0x0002c62e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc60d,	// (0x0002c62e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc628,	// (0x0002c649) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc628,	// (0x0002c649) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x94dc,	// (0x000294fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x94dc,	// (0x000294fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x94f7,	// (0x00029518) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x94f7,	// (0x00029518) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9512,	// (0x00029533) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9512,	// (0x00029533) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba3,	// (0x0002fbc4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba3,	// (0x0002fbc4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc763,	// (0x0002c784) cell_vkb_candidate_pane_cp1_ParamLimits

0xc763,	// (0x0002c784) cell_vkb_candidate_pane_cp1

0xc2b4,	// (0x0002c2d5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b4,	// (0x0002c2d5) fep_vkb_candidate_drop_down_list_pane_g1

0xc749,	// (0x0002c76a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc749,	// (0x0002c76a) fep_vkb_candidate_drop_down_list_pane_g2

0xc756,	// (0x0002c777) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc756,	// (0x0002c777) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002fbbd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9c,	// (0x0002fbbd) fep_vkb_candidate_drop_down_list_pane_g

0xc783,	// (0x0002c7a4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc783,	// (0x0002c7a4) fep_vkb_candidate_drop_down_list_scroll_pane

0xc790,	// (0x0002c7b1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc790,	// (0x0002c7b1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc79d,	// (0x0002c7be) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc79d,	// (0x0002c7be) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7a9,	// (0x0002c7ca) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7a9,	// (0x0002c7ca) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5cb,	// (0x0002c5ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5cb,	// (0x0002c5ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ec,	// (0x0002c60d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ec,	// (0x0002c60d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7b5,	// (0x0002c7d6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7b5,	// (0x0002c7d6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7d6,	// (0x0002c7f7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7d6,	// (0x0002c7f7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7f7,	// (0x0002c818) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7f7,	// (0x0002c818) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0002fbd5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0002fbd5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6949,	// (0x0002696a) title_pane_g1_ParamLimits

0x6956,	// (0x00026977) title_pane_g2_ParamLimits

0xf529,	// (0x0002f54a) title_pane_g_ParamLimits

0x21c2,	// (0x000221e3) aid_call2_pane

0x21ba,	// (0x000221db) aid_call_pane

0x21ca,	// (0x000221eb) popup_clock_analogue_window_g1

0x21ca,	// (0x000221eb) popup_clock_analogue_window_g2

0x730c,	// (0x0002732d) popup_clock_analogue_window_g3

0x7315,	// (0x00027336) popup_clock_analogue_window_g4

0x186a,	// (0x0002188b) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0002f6e5) popup_clock_analogue_window_g

0x731d,	// (0x0002733e) popup_clock_analogue_window_t1

0x736b,	// (0x0002738c) clock_digital_number_pane_ParamLimits

0x736b,	// (0x0002738c) clock_digital_number_pane

0x7377,	// (0x00027398) clock_digital_number_pane_cp02_ParamLimits

0x7377,	// (0x00027398) clock_digital_number_pane_cp02

0x7383,	// (0x000273a4) clock_digital_number_pane_cp03_ParamLimits

0x7383,	// (0x000273a4) clock_digital_number_pane_cp03

0x738f,	// (0x000273b0) clock_digital_number_pane_cp04_ParamLimits

0x738f,	// (0x000273b0) clock_digital_number_pane_cp04

0x739b,	// (0x000273bc) clock_digital_separator_pane_ParamLimits

0x739b,	// (0x000273bc) clock_digital_separator_pane

0x73a7,	// (0x000273c8) popup_clock_digital_window_t1_ParamLimits

0x73a7,	// (0x000273c8) popup_clock_digital_window_t1

0x186a,	// (0x0002188b) clock_digital_number_pane_g1

0x186a,	// (0x0002188b) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0002f6f0) clock_digital_number_pane_g

0x186a,	// (0x0002188b) clock_digital_separator_pane_g1

0x186a,	// (0x0002188b) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0002f6f0) clock_digital_separator_pane_g

0x8050,	// (0x00028071) aid_fill_nsta_ParamLimits

0x819c,	// (0x000281bd) indicator_nsta_pane_ParamLimits

0x8315,	// (0x00028336) popup_clock_analogue_window

0x8315,	// (0x00028336) popup_clock_digital_window

0xba11,	// (0x0002ba32) grid_indicator_nsta_pane_ParamLimits

0xba3a,	// (0x0002ba5b) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0002faa7) clock_nsta_pane_t

0x7237,	// (0x00027258) aid_size_max_handle

0x7241,	// (0x00027262) aid_size_min_handle

0x261c,	// (0x0002263d) editor_scroll_pane

0xc812,	// (0x0002c833) ex_editor_pane

0x1eaa,	// (0x00021ecb) scroll_pane_cp13

0x1c48,	// (0x00021c69) scroll_pane_cp14

0x21f9,	// (0x0002221a) scroll_pane_cp36

0x733f,	// (0x00027360) list_single_graphic_hl_pane_cp2_ParamLimits

0x733f,	// (0x00027360) list_single_graphic_hl_pane_cp2

0xafb2,	// (0x0002afd3) list_single_graphic_hl_pane_ParamLimits

0xafb2,	// (0x0002afd3) list_single_graphic_hl_pane

0xd76b,	// (0x0002d78c) aid_size_min_hl_cp1

0xc81a,	// (0x0002c83b) list_highlight_pane_cp34_ParamLimits

0xc81a,	// (0x0002c83b) list_highlight_pane_cp34

0xc82b,	// (0x0002c84c) list_single_graphic_hl_pane_g1_ParamLimits

0xc82b,	// (0x0002c84c) list_single_graphic_hl_pane_g1

0x6383,	// (0x000263a4) list_single_graphic_hl_pane_g2_ParamLimits

0x6383,	// (0x000263a4) list_single_graphic_hl_pane_g2

0x6383,	// (0x000263a4) list_single_graphic_hl_pane_g3_ParamLimits

0x6383,	// (0x000263a4) list_single_graphic_hl_pane_g3

0x5c4f,	// (0x00025c70) list_single_graphic_hl_pane_g4_ParamLimits

0x5c4f,	// (0x00025c70) list_single_graphic_hl_pane_g4

0x638f,	// (0x000263b0) list_single_graphic_hl_pane_g5_ParamLimits

0x638f,	// (0x000263b0) list_single_graphic_hl_pane_g5

0x0004,

0xfbc5,	// (0x0002fbe6) list_single_graphic_hl_pane_g_ParamLimits

0xfbc5,	// (0x0002fbe6) list_single_graphic_hl_pane_g

0x63a3,	// (0x000263c4) list_single_graphic_hl_pane_t1_ParamLimits

0x63a3,	// (0x000263c4) list_single_graphic_hl_pane_t1

0xc838,	// (0x0002c859) aid_size_min_hl_cp2

0xc841,	// (0x0002c862) list_highlight_pane_cp34_cp2_ParamLimits

0xc841,	// (0x0002c862) list_highlight_pane_cp34_cp2

0xc82b,	// (0x0002c84c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc82b,	// (0x0002c84c) list_single_graphic_hl_pane_g1_cp2

0xc84e,	// (0x0002c86f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc84e,	// (0x0002c86f) list_single_graphic_hl_pane_g2_cp2

0xc85a,	// (0x0002c87b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc85a,	// (0x0002c87b) list_single_graphic_hl_pane_g3_cp2

0x1c50,	// (0x00021c71) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1c50,	// (0x00021c71) list_single_graphic_hl_pane_g4_cp2

0xc868,	// (0x0002c889) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc868,	// (0x0002c889) list_single_graphic_hl_pane_g5_cp2

0x795a,	// (0x0002797b) control_pane_g4_ParamLimits

0x795a,	// (0x0002797b) control_pane_g4

0x1eba,	// (0x00021edb) bg_popup_sub_pane_cp10_ParamLimits

0xc04e,	// (0x0002c06f) list_choice_list_pane_ParamLimits

0xc05d,	// (0x0002c07e) scroll_pane_cp23

0x1a14,	// (0x00021a35) bg_popup_preview_window_pane_cp02_ParamLimits

0xc68d,	// (0x0002c6ae) list_preview_fixed_pane_ParamLimits

0xc6a3,	// (0x0002c6c4) list_preview_fixed_pane_cp_ParamLimits

0xc6a3,	// (0x0002c6c4) list_preview_fixed_pane_cp

0xc6af,	// (0x0002c6d0) popup_preview_fixed_window_g1_ParamLimits

0xc6af,	// (0x0002c6d0) popup_preview_fixed_window_g1

0xc6bb,	// (0x0002c6dc) popup_preview_fixed_window_g2_ParamLimits

0xc6bb,	// (0x0002c6dc) popup_preview_fixed_window_g2

0x0002,

0xfb54,	// (0x0002fb75) popup_preview_fixed_window_g_ParamLimits

0xfb54,	// (0x0002fb75) popup_preview_fixed_window_g

0x7113,	// (0x00027134) aid_navi_side_left_pane_ParamLimits

0x7128,	// (0x00027149) aid_navi_side_right_pane_ParamLimits

0x7140,	// (0x00027161) navi_icon_pane_stacon_ParamLimits

0x7154,	// (0x00027175) navi_navi_pane_stacon_ParamLimits

0x7140,	// (0x00027161) navi_text_pane_stacon_ParamLimits

0x1860,	// (0x00021881) main_text_info_pane

0xc892,	// (0x0002c8b3) listscroll_text_info_pane

0xc89a,	// (0x0002c8bb) list_text_info_pane_ParamLimits

0xc89a,	// (0x0002c8bb) list_text_info_pane

0xc8a9,	// (0x0002c8ca) scroll_pane_cp24_ParamLimits

0xc8a9,	// (0x0002c8ca) scroll_pane_cp24

0xc8c7,	// (0x0002c8e8) list_text_info_pane_t1_ParamLimits

0xc8c7,	// (0x0002c8e8) list_text_info_pane_t1

0x7ad7,	// (0x00027af8) popup_fast_swap2_window_ParamLimits

0x7ad7,	// (0x00027af8) popup_fast_swap2_window

0xc8fb,	// (0x0002c91c) aid_size_cell_fast2

0x1860,	// (0x00021881) bg_popup_window_pane_cp17

0x8aea,	// (0x00028b0b) heading_pane_cp2

0x8af2,	// (0x00028b13) listscroll_fast2_pane

0xc905,	// (0x0002c926) grid_fast2_pane

0xc90f,	// (0x0002c930) listscroll_fast2_pane_g1

0xc917,	// (0x0002c938) listscroll_fast2_pane_g2

0x0001,

0xfbd0,	// (0x0002fbf1) listscroll_fast2_pane_g

0x1eaa,	// (0x00021ecb) scroll_pane_cp26

0xc921,	// (0x0002c942) cell_fast2_pane_ParamLimits

0xc921,	// (0x0002c942) cell_fast2_pane

0xc936,	// (0x0002c957) cell_fast2_pane_g1

0xc93f,	// (0x0002c960) cell_fast2_pane_g2

0xc948,	// (0x0002c969) cell_fast2_pane_g3

0x0002,

0xfbd5,	// (0x0002fbf6) cell_fast2_pane_g

0x1b7f,	// (0x00021ba0) grid_highlight_pane_cp9

0x1b94,	// (0x00021bb5) main_eswt_pane_ParamLimits

0x1b94,	// (0x00021bb5) main_eswt_pane

0xc8be,	// (0x0002c8df) list_single_text_info_pane

0xc950,	// (0x0002c971) eswt_ctrl_button_pane

0xc950,	// (0x0002c971) eswt_ctrl_canvas_pane

0xc958,	// (0x0002c979) eswt_ctrl_combo_pane

0xc950,	// (0x0002c971) eswt_ctrl_default_pane

0xc950,	// (0x0002c971) eswt_ctrl_label_pane

0xc960,	// (0x0002c981) eswt_ctrl_wait_pane

0xc968,	// (0x0002c989) eswt_shell_pane

0x1860,	// (0x00021881) listscroll_eswt_app_pane

0xc988,	// (0x0002c9a9) popup_eswt_tasktip_window_ParamLimits

0xc988,	// (0x0002c9a9) popup_eswt_tasktip_window

0x866f,	// (0x00028690) bg_popup_window_pane_cp18

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_ParamLimits

0xc999,	// (0x0002c9ba) eswt_control_pane_g1

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_ParamLimits

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_ParamLimits

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_ParamLimits

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4

0x0003,

0xfbdc,	// (0x0002fbfd) eswt_control_pane_g_ParamLimits

0xfbdc,	// (0x0002fbfd) eswt_control_pane_g

0x1d0a,	// (0x00021d2b) bg_button_pane_ParamLimits

0x1d0a,	// (0x00021d2b) bg_button_pane

0x1b94,	// (0x00021bb5) common_borders_pane_copy2_ParamLimits

0x1b94,	// (0x00021bb5) common_borders_pane_copy2

0xc9cd,	// (0x0002c9ee) control_button_pane_g1_ParamLimits

0xc9cd,	// (0x0002c9ee) control_button_pane_g1

0xc9d9,	// (0x0002c9fa) control_button_pane_g2_ParamLimits

0xc9d9,	// (0x0002c9fa) control_button_pane_g2

0xc9e5,	// (0x0002ca06) control_button_pane_g3_ParamLimits

0xc9e5,	// (0x0002ca06) control_button_pane_g3

0x0002,

0xfbe5,	// (0x0002fc06) control_button_pane_g_ParamLimits

0xfbe5,	// (0x0002fc06) control_button_pane_g

0xc9f9,	// (0x0002ca1a) control_button_pane_t1

0xca07,	// (0x0002ca28) control_button_pane_t2

0x0001,

0xfbec,	// (0x0002fc0d) control_button_pane_t

0x856b,	// (0x0002858c) bg_button_pane_g1

0x8573,	// (0x00028594) bg_button_pane_g2

0x857b,	// (0x0002859c) bg_button_pane_g3

0x8583,	// (0x000285a4) bg_button_pane_g4

0x858b,	// (0x000285ac) bg_button_pane_g5

0x8593,	// (0x000285b4) bg_button_pane_g6

0x859b,	// (0x000285bc) bg_button_pane_g7

0x85a3,	// (0x000285c4) bg_button_pane_g8

0x85ab,	// (0x000285cc) bg_button_pane_g9

0x0008,

0xf82d,	// (0x0002f84e) bg_button_pane_g

0xc009,	// (0x0002c02a) common_borders_pane_ParamLimits

0xc009,	// (0x0002c02a) common_borders_pane

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy1_ParamLimits

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy1

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy1_ParamLimits

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy1

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy1_ParamLimits

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy1

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy1_ParamLimits

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy1

0xc044,	// (0x0002c065) bg_eswt_ctrl_canvas_pane_g1

0xc009,	// (0x0002c02a) common_borders_pane_cp2_ParamLimits

0xc009,	// (0x0002c02a) common_borders_pane_cp2

0xc009,	// (0x0002c02a) common_borders_pane_cp3_ParamLimits

0xc009,	// (0x0002c02a) common_borders_pane_cp3

0xca15,	// (0x0002ca36) separator_horizontal_pane

0xca1d,	// (0x0002ca3e) separator_vertical_pane

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy2_ParamLimits

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy2

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy2_ParamLimits

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy2

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy2_ParamLimits

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy2

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy2_ParamLimits

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy2

0x1860,	// (0x00021881) common_borders_pane_cp4

0xca26,	// (0x0002ca47) separator_horizontal_pane_g1

0xca2f,	// (0x0002ca50) separator_horizontal_pane_g2

0xca38,	// (0x0002ca59) separator_horizontal_pane_g3

0x0002,

0xfbf1,	// (0x0002fc12) separator_horizontal_pane_g

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy3_ParamLimits

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy3

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy3_ParamLimits

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy3

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy3_ParamLimits

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy3

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy3_ParamLimits

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy3

0x1860,	// (0x00021881) common_borders_pane_cp5

0xca41,	// (0x0002ca62) separator_vertical_pane_g1

0xca4a,	// (0x0002ca6b) separator_vertical_pane_g2

0xca53,	// (0x0002ca74) separator_vertical_pane_g3

0x0002,

0xfbf8,	// (0x0002fc19) separator_vertical_pane_g

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy4_ParamLimits

0xc999,	// (0x0002c9ba) eswt_control_pane_g1_copy4

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy4_ParamLimits

0xc9a6,	// (0x0002c9c7) eswt_control_pane_g2_copy4

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy4_ParamLimits

0xc9b3,	// (0x0002c9d4) eswt_control_pane_g3_copy4

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy4_ParamLimits

0xc9c0,	// (0x0002c9e1) eswt_control_pane_g4_copy4

0xca5c,	// (0x0002ca7d) eswt_ctrl_combo_button_pane

0xca64,	// (0x0002ca85) eswt_ctrl_input_pane

0xca6c,	// (0x0002ca8d) popup_choice_list_window_cp70

0xca74,	// (0x0002ca95) eswt_ctrl_input_pane_t1

0x1860,	// (0x00021881) input_focus_pane_cp70

0xc009,	// (0x0002c02a) bg_button_pane_cp70_ParamLimits

0xc009,	// (0x0002c02a) bg_button_pane_cp70

0xca82,	// (0x0002caa3) eswt_ctrl_combo_button_pane_g1

0xca8a,	// (0x0002caab) wait_bar_pane_cp70

0x866f,	// (0x00028690) bg_popup_window_pane_cp70_ParamLimits

0x866f,	// (0x00028690) bg_popup_window_pane_cp70

0xca92,	// (0x0002cab3) popup_eswt_tasktip_window_t1

0xcaa8,	// (0x0002cac9) wait_bar_pane_cp71_ParamLimits

0xcaa8,	// (0x0002cac9) wait_bar_pane_cp71

0xcab4,	// (0x0002cad5) grid_eswt_app_pane

0x209d,	// (0x000220be) scroll_pane_cp70

0xcabd,	// (0x0002cade) cell_eswt_app_pane_ParamLimits

0xcabd,	// (0x0002cade) cell_eswt_app_pane

0xcaed,	// (0x0002cb0e) cell_eswt_app_pane_g1_ParamLimits

0xcaed,	// (0x0002cb0e) cell_eswt_app_pane_g1

0xcb1c,	// (0x0002cb3d) cell_eswt_app_pane_g2_ParamLimits

0xcb1c,	// (0x0002cb3d) cell_eswt_app_pane_g2

0x0001,

0xfbff,	// (0x0002fc20) cell_eswt_app_pane_g_ParamLimits

0xfbff,	// (0x0002fc20) cell_eswt_app_pane_g

0xcb40,	// (0x0002cb61) cell_eswt_app_pane_t1_ParamLimits

0xcb40,	// (0x0002cb61) cell_eswt_app_pane_t1

0xcb72,	// (0x0002cb93) grid_highlight_pane_cp70_ParamLimits

0xcb72,	// (0x0002cb93) grid_highlight_pane_cp70

0x2522,	// (0x00022543) set_content_pane_g1

0x78f0,	// (0x00027911) status_small_volume_pane

0x952d,	// (0x0002954e) status_small_volume_pane_g1

0x9535,	// (0x00029556) volume_small2_pane

0x953e,	// (0x0002955f) volume_small2_pane_g1

0x9547,	// (0x00029568) volume_small2_pane_g2

0x9550,	// (0x00029571) volume_small2_pane_g3

0x9559,	// (0x0002957a) volume_small2_pane_g4

0x9562,	// (0x00029583) volume_small2_pane_g5

0x956b,	// (0x0002958c) volume_small2_pane_g6

0x9574,	// (0x00029595) volume_small2_pane_g7

0x957d,	// (0x0002959e) volume_small2_pane_g8

0x9586,	// (0x000295a7) volume_small2_pane_g9

0x958f,	// (0x000295b0) volume_small2_pane_g10

0x0009,

0xfc04,	// (0x0002fc25) volume_small2_pane_g

0xc3fc,	// (0x0002c41d) fep_vkb_top_text_pane_g1_ParamLimits

0xc417,	// (0x0002c438) fep_vkb_top_text_pane_t1_ParamLimits

0xc6c7,	// (0x0002c6e8) popup_preview_fixed_window_g3_ParamLimits

0xc6c7,	// (0x0002c6e8) popup_preview_fixed_window_g3

0x7f86,	// (0x00027fa7) popup_toolbar_trans_pane

0xadda,	// (0x0002adfb) aid_height_set_list_ParamLimits

0xadeb,	// (0x0002ae0c) aid_size_parent_ParamLimits

0x1eba,	// (0x00021edb) list_highlight_pane_cp2_ParamLimits

0x2522,	// (0x00022543) set_content_pane_g1_ParamLimits

0xafd1,	// (0x0002aff2) list_single_image_pane_ParamLimits

0xafd1,	// (0x0002aff2) list_single_image_pane

0xcb7e,	// (0x0002cb9f) aid_size_cell_image_ParamLimits

0xcb7e,	// (0x0002cb9f) aid_size_cell_image

0xcb8b,	// (0x0002cbac) grid_single_image_pane_ParamLimits

0xcb8b,	// (0x0002cbac) grid_single_image_pane

0x27d9,	// (0x000227fa) list_single_image_pane_g1_ParamLimits

0x27d9,	// (0x000227fa) list_single_image_pane_g1

0xcb97,	// (0x0002cbb8) list_single_image_pane_g2_ParamLimits

0xcb97,	// (0x0002cbb8) list_single_image_pane_g2

0x0001,

0xfc19,	// (0x0002fc3a) list_single_image_pane_g_ParamLimits

0xfc19,	// (0x0002fc3a) list_single_image_pane_g

0xcbab,	// (0x0002cbcc) list_single_image_pane_t1_ParamLimits

0xcbab,	// (0x0002cbcc) list_single_image_pane_t1

0xcbc1,	// (0x0002cbe2) cell_image_list_pane_ParamLimits

0xcbc1,	// (0x0002cbe2) cell_image_list_pane

0xcbd5,	// (0x0002cbf6) cell_image_list_pane_g1

0xcbde,	// (0x0002cbff) cell_image_list_pane_g2

0x0001,

0xfc1e,	// (0x0002fc3f) cell_image_list_pane_g

0xcbe7,	// (0x0002cc08) aid_size_cell_tb_trans_pane

0x1d0a,	// (0x00021d2b) bg_tb_trans_pane

0xcbf9,	// (0x0002cc1a) grid_tb_trans_pane

0x856b,	// (0x0002858c) bg_tb_trans_pane_g1

0x8573,	// (0x00028594) bg_tb_trans_pane_g2

0x857b,	// (0x0002859c) bg_tb_trans_pane_g3

0x8583,	// (0x000285a4) bg_tb_trans_pane_g4

0x858b,	// (0x000285ac) bg_tb_trans_pane_g5

0x85a3,	// (0x000285c4) bg_tb_trans_pane_g6

0x85ab,	// (0x000285cc) bg_tb_trans_pane_g7

0x8593,	// (0x000285b4) bg_tb_trans_pane_g8

0x859b,	// (0x000285bc) bg_tb_trans_pane_g9

0x0008,

0xfc23,	// (0x0002fc44) bg_tb_trans_pane_g

0xcc0d,	// (0x0002cc2e) cell_toolbar_trans_pane_ParamLimits

0xcc0d,	// (0x0002cc2e) cell_toolbar_trans_pane

0xc044,	// (0x0002c065) cell_toolbar_trans_pane_g1

0xbc0f,	// (0x0002bc30) list_form2_midp_pane_t1

0xbc1d,	// (0x0002bc3e) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0002faed) list_form2_midp_pane_t

0xbc2b,	// (0x0002bc4c) scroll_pane_cp51_ParamLimits

0xbde7,	// (0x0002be08) form2_midp_wait_pane_g1

0xbdf0,	// (0x0002be11) form2_midp_wait_pane_g2

0xbdf9,	// (0x0002be1a) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0002fb02) form2_midp_wait_pane_g

0x18d0,	// (0x000218f1) list_highlight_pane_cp21_ParamLimits

0xbe41,	// (0x0002be62) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe50,	// (0x0002be71) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5de3,	// (0x00025e04) list_single_2graphic_im_pane_ParamLimits

0x5de3,	// (0x00025e04) list_single_2graphic_im_pane

0xcc33,	// (0x0002cc54) list_single_2graphic_im_pane_g1_ParamLimits

0xcc33,	// (0x0002cc54) list_single_2graphic_im_pane_g1

0xcc44,	// (0x0002cc65) list_single_2graphic_im_pane_g2_ParamLimits

0xcc44,	// (0x0002cc65) list_single_2graphic_im_pane_g2

0xcc50,	// (0x0002cc71) list_single_2graphic_im_pane_g3_ParamLimits

0xcc50,	// (0x0002cc71) list_single_2graphic_im_pane_g3

0x0003,

0xfc36,	// (0x0002fc57) list_single_2graphic_im_pane_g_ParamLimits

0xfc36,	// (0x0002fc57) list_single_2graphic_im_pane_g

0xcc70,	// (0x0002cc91) list_single_2graphic_im_pane_t1_ParamLimits

0xcc70,	// (0x0002cc91) list_single_2graphic_im_pane_t1

0xc6d3,	// (0x0002c6f4) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6d3,	// (0x0002c6f4) list_single_graphic_2heading_pane_fp

0x61f5,	// (0x00026216) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x61f5,	// (0x00026216) list_single_graphic_2heading_pane_fp_g1

0xc6e9,	// (0x0002c70a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6e9,	// (0x0002c70a) list_single_graphic_2heading_pane_fp_g2

0x56b2,	// (0x000256d3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56b2,	// (0x000256d3) list_single_graphic_2heading_pane_fp_g3

0x61ca,	// (0x000261eb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x61ca,	// (0x000261eb) list_single_graphic_2heading_pane_fp_g4

0xc6f5,	// (0x0002c716) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6f5,	// (0x0002c716) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002fb85) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002fb85) list_single_graphic_2heading_pane_fp_g

0x63b9,	// (0x000263da) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x63b9,	// (0x000263da) list_single_graphic_2heading_pane_fp_t1

0x622d,	// (0x0002624e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x622d,	// (0x0002624e) list_single_graphic_2heading_pane_fp_t2

0x63cf,	// (0x000263f0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x63cf,	// (0x000263f0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3f,	// (0x0002fc60) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3f,	// (0x0002fc60) list_single_graphic_2heading_pane_fp_t

0xc0d0,	// (0x0002c0f1) fep_hwr_write_pane_g5_ParamLimits

0xc0d0,	// (0x0002c0f1) fep_hwr_write_pane_g5

0xc0dc,	// (0x0002c0fd) fep_hwr_write_pane_g6_ParamLimits

0xc0dc,	// (0x0002c0fd) fep_hwr_write_pane_g6

0xc968,	// (0x0002c989) eswt_shell_pane_ParamLimits

0x866f,	// (0x00028690) bg_popup_window_pane_cp18_ParamLimits

0xad33,	// (0x0002ad54) heading_pane_cp70

0xca92,	// (0x0002cab3) popup_eswt_tasktip_window_t1_ParamLimits

0x80a5,	// (0x000280c6) aid_touch_tab_arrow_left

0x80b4,	// (0x000280d5) aid_touch_tab_arrow_right

0x6967,	// (0x00026988) title_pane_g3_ParamLimits

0x6967,	// (0x00026988) title_pane_g3

0x1ca1,	// (0x00021cc2) set_value_pane_g1

0x7f86,	// (0x00027fa7) popup_toolbar_trans_pane_ParamLimits

0xcbe7,	// (0x0002cc08) aid_size_cell_tb_trans_pane_ParamLimits

0x1d0a,	// (0x00021d2b) bg_tb_trans_pane_ParamLimits

0xcbf9,	// (0x0002cc1a) grid_tb_trans_pane_ParamLimits

0x1a14,	// (0x00021a35) cont_note_pane_ParamLimits

0x1a14,	// (0x00021a35) cont_note_pane

0x1b94,	// (0x00021bb5) cont_snote2_single_text_pane_ParamLimits

0x1b94,	// (0x00021bb5) cont_snote2_single_text_pane

0x1b94,	// (0x00021bb5) cont_snote2_single_graphic_pane_ParamLimits

0x1b94,	// (0x00021bb5) cont_snote2_single_graphic_pane

0x8d11,	// (0x00028d32) cont_note_wait_pane_ParamLimits

0x8d11,	// (0x00028d32) cont_note_wait_pane

0x8d11,	// (0x00028d32) cont_note_image_pane_ParamLimits

0x8d11,	// (0x00028d32) cont_note_image_pane

0xcca1,	// (0x0002ccc2) popup_note2_window_g1_ParamLimits

0xcca1,	// (0x0002ccc2) popup_note2_window_g1

0xccd2,	// (0x0002ccf3) popup_note2_window_t1_ParamLimits

0xccd2,	// (0x0002ccf3) popup_note2_window_t1

0xcd17,	// (0x0002cd38) popup_note2_window_t2_ParamLimits

0xcd17,	// (0x0002cd38) popup_note2_window_t2

0xcd5c,	// (0x0002cd7d) popup_note2_window_t3_ParamLimits

0xcd5c,	// (0x0002cd7d) popup_note2_window_t3

0xcda1,	// (0x0002cdc2) popup_note2_window_t4_ParamLimits

0xcda1,	// (0x0002cdc2) popup_note2_window_t4

0x1a98,	// (0x00021ab9) popup_note2_window_t5_ParamLimits

0x1a98,	// (0x00021ab9) popup_note2_window_t5

0x0004,

0xfc4b,	// (0x0002fc6c) popup_note2_window_t_ParamLimits

0xfc4b,	// (0x0002fc6c) popup_note2_window_t

0xcdd0,	// (0x0002cdf1) popup_note2_image_window_g1_ParamLimits

0xcdd0,	// (0x0002cdf1) popup_note2_image_window_g1

0xcddc,	// (0x0002cdfd) popup_note2_image_window_g2_ParamLimits

0xcddc,	// (0x0002cdfd) popup_note2_image_window_g2

0x0001,

0xfc56,	// (0x0002fc77) popup_note2_image_window_g_ParamLimits

0xfc56,	// (0x0002fc77) popup_note2_image_window_g

0xcdee,	// (0x0002ce0f) popup_note2_image_window_t1_ParamLimits

0xcdee,	// (0x0002ce0f) popup_note2_image_window_t1

0xce06,	// (0x0002ce27) popup_note2_image_window_t2_ParamLimits

0xce06,	// (0x0002ce27) popup_note2_image_window_t2

0xce1e,	// (0x0002ce3f) popup_note2_image_window_t3_ParamLimits

0xce1e,	// (0x0002ce3f) popup_note2_image_window_t3

0x0002,

0xfc5b,	// (0x0002fc7c) popup_note2_image_window_t_ParamLimits

0xfc5b,	// (0x0002fc7c) popup_note2_image_window_t

0x8d1f,	// (0x00028d40) popup_note2_wait_window_g1_ParamLimits

0x8d1f,	// (0x00028d40) popup_note2_wait_window_g1

0x8d2b,	// (0x00028d4c) popup_note2_wait_window_g2_ParamLimits

0x8d2b,	// (0x00028d4c) popup_note2_wait_window_g2

0x8d37,	// (0x00028d58) popup_note2_wait_window_g3_ParamLimits

0x8d37,	// (0x00028d58) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x0002f830) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x0002f830) popup_note2_wait_window_g

0xce3a,	// (0x0002ce5b) popup_note2_wait_window_t1_ParamLimits

0xce3a,	// (0x0002ce5b) popup_note2_wait_window_t1

0xce58,	// (0x0002ce79) popup_note2_wait_window_t2_ParamLimits

0xce58,	// (0x0002ce79) popup_note2_wait_window_t2

0xce76,	// (0x0002ce97) popup_note2_wait_window_t3_ParamLimits

0xce76,	// (0x0002ce97) popup_note2_wait_window_t3

0xce88,	// (0x0002cea9) popup_note2_wait_window_t4_ParamLimits

0xce88,	// (0x0002cea9) popup_note2_wait_window_t4

0x0003,

0xfc62,	// (0x0002fc83) popup_note2_wait_window_t_ParamLimits

0xfc62,	// (0x0002fc83) popup_note2_wait_window_t

0xce9a,	// (0x0002cebb) wait_bar2_pane_ParamLimits

0xce9a,	// (0x0002cebb) wait_bar2_pane

0xceb2,	// (0x0002ced3) popup_snote2_single_text_window_g1_ParamLimits

0xceb2,	// (0x0002ced3) popup_snote2_single_text_window_g1

0xceda,	// (0x0002cefb) popup_snote2_single_text_window_t1_ParamLimits

0xceda,	// (0x0002cefb) popup_snote2_single_text_window_t1

0xcf26,	// (0x0002cf47) popup_snote2_single_text_window_t2_ParamLimits

0xcf26,	// (0x0002cf47) popup_snote2_single_text_window_t2

0xcf72,	// (0x0002cf93) popup_snote2_single_text_window_t3_ParamLimits

0xcf72,	// (0x0002cf93) popup_snote2_single_text_window_t3

0xcfb3,	// (0x0002cfd4) popup_snote2_single_text_window_t4_ParamLimits

0xcfb3,	// (0x0002cfd4) popup_snote2_single_text_window_t4

0xcfe9,	// (0x0002d00a) popup_snote2_single_text_window_t5_ParamLimits

0xcfe9,	// (0x0002d00a) popup_snote2_single_text_window_t5

0x0004,

0xfc6b,	// (0x0002fc8c) popup_snote2_single_text_window_t_ParamLimits

0xfc6b,	// (0x0002fc8c) popup_snote2_single_text_window_t

0xd014,	// (0x0002d035) popup_snote2_single_graphic_window_g1_ParamLimits

0xd014,	// (0x0002d035) popup_snote2_single_graphic_window_g1

0xd03c,	// (0x0002d05d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd03c,	// (0x0002d05d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc76,	// (0x0002fc97) popup_snote2_single_graphic_window_g_ParamLimits

0xfc76,	// (0x0002fc97) popup_snote2_single_graphic_window_g

0xd064,	// (0x0002d085) popup_snote2_single_graphic_window_t1_ParamLimits

0xd064,	// (0x0002d085) popup_snote2_single_graphic_window_t1

0xd0b0,	// (0x0002d0d1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b0,	// (0x0002d0d1) popup_snote2_single_graphic_window_t2

0xcf72,	// (0x0002cf93) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf72,	// (0x0002cf93) popup_snote2_single_graphic_window_t3

0xcfb3,	// (0x0002cfd4) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfb3,	// (0x0002cfd4) popup_snote2_single_graphic_window_t4

0xcfe9,	// (0x0002d00a) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfe9,	// (0x0002d00a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7b,	// (0x0002fc9c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7b,	// (0x0002fc9c) popup_snote2_single_graphic_window_t

0xbae8,	// (0x0002bb09) clock_nsta_pane_cp2_t1

0xbae8,	// (0x0002bb09) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0002fac3) clock_nsta_pane_cp2_t

0x59c1,	// (0x000259e2) form_field_data_wide_pane_g1_ParamLimits

0x1d35,	// (0x00021d56) form_field_data_wide_pane_g2_ParamLimits

0x1d35,	// (0x00021d56) form_field_data_wide_pane_g2

0x1d41,	// (0x00021d62) form_field_data_wide_pane_g3_ParamLimits

0x1d41,	// (0x00021d62) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0002f668) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0002f668) form_field_data_wide_pane_g

0xb9c4,	// (0x0002b9e5) grid_touch_3_pane_ParamLimits

0xb9c4,	// (0x0002b9e5) grid_touch_3_pane

0xd0fc,	// (0x0002d11d) cell_touch_3_pane_ParamLimits

0xd0fc,	// (0x0002d11d) cell_touch_3_pane

0xc044,	// (0x0002c065) cell_touch_3_pane_g1

0xc044,	// (0x0002c065) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0002fb48) cell_touch_3_pane_g

0x1aca,	// (0x00021aeb) cont_query_data_pane

0x1ad2,	// (0x00021af3) cont_query_data_pane_cp1

0xd12a,	// (0x0002d14b) button_value_adjust_pane_cp7

0xd132,	// (0x0002d153) query_popup_pane_cp3

0x222b,	// (0x0002224c) bg_popup_sub_pane_cp22_ParamLimits

0x7421,	// (0x00027442) navi_navi_volume_pane_cp2

0x7439,	// (0x0002745a) popup_side_volume_key_window_g2

0x7445,	// (0x00027466) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0002f6fe) popup_side_volume_key_window_g

0x745f,	// (0x00027480) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0002f705) popup_side_volume_key_window_t

0x7683,	// (0x000276a4) popup_side_volume_key_window_ParamLimits

0x56a6,	// (0x000256c7) list_double_graphic_pane_g4_ParamLimits

0x56a6,	// (0x000256c7) list_double_graphic_pane_g4

0x5e28,	// (0x00025e49) list_single_2heading_msg_pane_ParamLimits

0x5e28,	// (0x00025e49) list_single_2heading_msg_pane

0x63ef,	// (0x00026410) list_single_2heading_msg_pane_g1_ParamLimits

0x63ef,	// (0x00026410) list_single_2heading_msg_pane_g1

0x54f7,	// (0x00025518) list_single_2heading_msg_pane_g2_ParamLimits

0x54f7,	// (0x00025518) list_single_2heading_msg_pane_g2

0x5f4b,	// (0x00025f6c) list_single_2heading_msg_pane_g3_ParamLimits

0x5f4b,	// (0x00025f6c) list_single_2heading_msg_pane_g3

0x63fb,	// (0x0002641c) list_single_2heading_msg_pane_g4_ParamLimits

0x63fb,	// (0x0002641c) list_single_2heading_msg_pane_g4

0x0003,

0xfc86,	// (0x0002fca7) list_single_2heading_msg_pane_g_ParamLimits

0xfc86,	// (0x0002fca7) list_single_2heading_msg_pane_g

0x6413,	// (0x00026434) list_single_2heading_msg_pane_t1_ParamLimits

0x6413,	// (0x00026434) list_single_2heading_msg_pane_t1

0x643b,	// (0x0002645c) list_single_2heading_msg_pane_t2_ParamLimits

0x643b,	// (0x0002645c) list_single_2heading_msg_pane_t2

0x646f,	// (0x00026490) list_single_2heading_msg_pane_t3_ParamLimits

0x646f,	// (0x00026490) list_single_2heading_msg_pane_t3

0x64a8,	// (0x000264c9) list_single_2heading_msg_pane_t4_ParamLimits

0x64a8,	// (0x000264c9) list_single_2heading_msg_pane_t4

0x0003,

0xfc8f,	// (0x0002fcb0) list_single_2heading_msg_pane_t_ParamLimits

0xfc8f,	// (0x0002fcb0) list_single_2heading_msg_pane_t

0x187e,	// (0x0002189f) title_pane_g4_ParamLimits

0x187e,	// (0x0002189f) title_pane_g4

0x7064,	// (0x00027085) title_pane_stacon_g3_ParamLimits

0x7064,	// (0x00027085) title_pane_stacon_g3

0xcc64,	// (0x0002cc85) list_single_2graphic_im_pane_g4_ParamLimits

0xcc64,	// (0x0002cc85) list_single_2graphic_im_pane_g4

0xaafd,	// (0x0002ab1e) popup_side_volume_key_window_cp

0xb31a,	// (0x0002b33b) main_idle_act2_pane_t1

0x85b3,	// (0x000285d4) toolbar_button_pane_g10

0x6f22,	// (0x00026f43) popup_toolbar_window_cp1

0xbad9,	// (0x0002bafa) clock_nsta_pane_cp_t1

0xbad9,	// (0x0002bafa) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0002fabe) clock_nsta_pane_cp_t

0x7421,	// (0x00027442) navi_navi_volume_pane_cp2_ParamLimits

0x742d,	// (0x0002744e) popup_side_volume_key_window_g1_ParamLimits

0x7439,	// (0x0002745a) popup_side_volume_key_window_g2_ParamLimits

0x7445,	// (0x00027466) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0002f6fe) popup_side_volume_key_window_g_ParamLimits

0x923d,	// (0x0002925e) fep_hwr_aid_pane

0x1830,	// (0x00021851) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0a0,	// (0x0002c0c1) fep_hwr_top_pane_g1_ParamLimits

0xc0b2,	// (0x0002c0d3) fep_hwr_top_pane_g2_ParamLimits

0x92f6,	// (0x00029317) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0002fb13) fep_hwr_top_pane_g_ParamLimits

0x930b,	// (0x0002932c) fep_hwr_top_text_pane_ParamLimits

0xa8c0,	// (0x0002a8e1) aid_touch_tab_arrow_arrow_2

0xa8c9,	// (0x0002a8ea) aid_touch_tab_arrow_left_2

0x9251,	// (0x00029272) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9288,	// (0x000292a9) fep_hwr_prediction_pane

0xc20b,	// (0x0002c22c) fep_vkb_prediction_pane

0xc308,	// (0x0002c329) fep_vkb_side_pane_g3_ParamLimits

0xc308,	// (0x0002c329) fep_vkb_side_pane_g3

0xc2b4,	// (0x0002c2d5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc749,	// (0x0002c76a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc756,	// (0x0002c777) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9c,	// (0x0002fbbd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd157,	// (0x0002d178) fep_hwr_prediction_pane_g1

0x9598,	// (0x000295b9) fep_hwr_prediction_pane_g2

0x95a0,	// (0x000295c1) fep_hwr_prediction_pane_g3

0x95a8,	// (0x000295c9) fep_hwr_prediction_pane_g4

0x0003,

0xfc98,	// (0x0002fcb9) fep_hwr_prediction_pane_g

0xd157,	// (0x0002d178) fep_vkb_prediction_pane_g1

0xd161,	// (0x0002d182) fep_vkb_prediction_pane_g2

0xd169,	// (0x0002d18a) fep_vkb_prediction_pane_g3

0xd171,	// (0x0002d192) fep_vkb_prediction_pane_g4

0x0003,

0xfca1,	// (0x0002fcc2) fep_vkb_prediction_pane_g

0x9075,	// (0x00029096) slider_set_pane_g3

0x9089,	// (0x000290aa) slider_set_pane_g4

0x90a1,	// (0x000290c2) slider_set_pane_g5

0x9075,	// (0x00029096) slider_set_pane_g6

0x90b7,	// (0x000290d8) slider_set_pane_g7

0xaf4c,	// (0x0002af6d) slider_form_pane_g3

0xaf55,	// (0x0002af76) slider_form_pane_g4

0xaf5d,	// (0x0002af7e) slider_form_pane_g5

0xaf4c,	// (0x0002af6d) slider_form_pane_g6

0xaf65,	// (0x0002af86) slider_form_pane_g7

0xb5c6,	// (0x0002b5e7) slider_set_pane_vc_g3

0xb5cf,	// (0x0002b5f0) slider_set_pane_vc_g4

0xb5d8,	// (0x0002b5f9) slider_set_pane_vc_g5

0xb5c6,	// (0x0002b5e7) slider_set_pane_vc_g6

0xb5e1,	// (0x0002b602) slider_set_pane_vc_g7

0xb797,	// (0x0002b7b8) slider_form_pane_vc_g1

0xb7a0,	// (0x0002b7c1) slider_form_pane_vc_g2

0xb7a9,	// (0x0002b7ca) slider_form_pane_vc_g3

0xb797,	// (0x0002b7b8) slider_form_pane_vc_g4

0xb7b2,	// (0x0002b7d3) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0002fa90) slider_form_pane_vc_g

0x1860,	// (0x00021881) main_idle_act3_pane

0xd179,	// (0x0002d19a) ai3_links_pane

0xd182,	// (0x0002d1a3) popup_ai3_data_window_ParamLimits

0xd182,	// (0x0002d1a3) popup_ai3_data_window

0x1860,	// (0x00021881) grid_ai3_links_pane

0xd19a,	// (0x0002d1bb) cell_ai3_links_pane_ParamLimits

0xd19a,	// (0x0002d1bb) cell_ai3_links_pane

0xd1b2,	// (0x0002d1d3) bg_popup_sub_pane_cp11

0xd1bf,	// (0x0002d1e0) cell_ai3_links_pane_g1

0x1860,	// (0x00021881) bg_popup_sub_pane_cp12

0xd1e4,	// (0x0002d205) heading_ai3_data_pane

0xd1ec,	// (0x0002d20d) list_ai3_gene_pane

0xd1f8,	// (0x0002d219) popup_ai3_data_window_g1

0xd200,	// (0x0002d221) heading_ai3_data_pane_g1

0xd208,	// (0x0002d229) heading_ai3_data_pane_t1

0xd216,	// (0x0002d237) list_double_ai3_gene_pane_ParamLimits

0xd216,	// (0x0002d237) list_double_ai3_gene_pane

0xd223,	// (0x0002d244) list_single_ai3_gene_pane_ParamLimits

0xd223,	// (0x0002d244) list_single_ai3_gene_pane

0xc009,	// (0x0002c02a) list_highlight_pane_cp7_ParamLimits

0xc009,	// (0x0002c02a) list_highlight_pane_cp7

0xd230,	// (0x0002d251) list_single_a13_gene_pane_t1_ParamLimits

0xd230,	// (0x0002d251) list_single_a13_gene_pane_t1

0xd247,	// (0x0002d268) list_single_ai3_gene_pane_g1

0xd250,	// (0x0002d271) list_single_ai3_gene_pane_g2

0x0001,

0xfcaa,	// (0x0002fccb) list_single_ai3_gene_pane_g

0xd258,	// (0x0002d279) list_double_ai3_gene_pane_g1_ParamLimits

0xd258,	// (0x0002d279) list_double_ai3_gene_pane_g1

0xd264,	// (0x0002d285) list_double_ai3_gene_pane_t1_ParamLimits

0xd264,	// (0x0002d285) list_double_ai3_gene_pane_t1

0xd280,	// (0x0002d2a1) list_double_ai3_gene_pane_t2_ParamLimits

0xd280,	// (0x0002d2a1) list_double_ai3_gene_pane_t2

0xd295,	// (0x0002d2b6) list_double_ai3_gene_pane_t3_ParamLimits

0xd295,	// (0x0002d2b6) list_double_ai3_gene_pane_t3

0x0002,

0xfcaf,	// (0x0002fcd0) list_double_ai3_gene_pane_t_ParamLimits

0xfcaf,	// (0x0002fcd0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63e5,	// (0x00026406) aid_size_min_col_2

0xd143,	// (0x0002d164) aid_size_min_msg_ParamLimits

0xd143,	// (0x0002d164) aid_size_min_msg

0xc408,	// (0x0002c429) fep_vkb_top_text_pane_g2_ParamLimits

0xc408,	// (0x0002c429) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0002fb43) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0002fb43) fep_vkb_top_text_pane_g

0x1860,	// (0x00021881) main_hc_apps_shell_pane

0xd2b2,	// (0x0002d2d3) grid_hc_apps_pane_ParamLimits

0xd2b2,	// (0x0002d2d3) grid_hc_apps_pane

0xd2c4,	// (0x0002d2e5) list_hc_apps_pane

0xd2cc,	// (0x0002d2ed) scroll_pane_cp37_ParamLimits

0xd2cc,	// (0x0002d2ed) scroll_pane_cp37

0xd2d8,	// (0x0002d2f9) cell_hc_apps_pane_ParamLimits

0xd2d8,	// (0x0002d2f9) cell_hc_apps_pane

0xd386,	// (0x0002d3a7) cell_hc_apps_pane_g1_ParamLimits

0xd386,	// (0x0002d3a7) cell_hc_apps_pane_g1

0xd3b6,	// (0x0002d3d7) cell_hc_apps_pane_g2_ParamLimits

0xd3b6,	// (0x0002d3d7) cell_hc_apps_pane_g2

0xd3d2,	// (0x0002d3f3) cell_hc_apps_pane_g3_ParamLimits

0xd3d2,	// (0x0002d3f3) cell_hc_apps_pane_g3

0x0002,

0xfcb6,	// (0x0002fcd7) cell_hc_apps_pane_g_ParamLimits

0xfcb6,	// (0x0002fcd7) cell_hc_apps_pane_g

0xd3f4,	// (0x0002d415) cell_hc_apps_pane_t1_ParamLimits

0xd3f4,	// (0x0002d415) cell_hc_apps_pane_t1

0x1a14,	// (0x00021a35) grid_highlight_pane_cp10_ParamLimits

0x1a14,	// (0x00021a35) grid_highlight_pane_cp10

0xd434,	// (0x0002d455) list_single_hc_apps_pane_ParamLimits

0xd434,	// (0x0002d455) list_single_hc_apps_pane

0xd497,	// (0x0002d4b8) list_single_hc_apps_pane_g1

0x64cd,	// (0x000264ee) list_single_hc_apps_pane_g2

0x0001,

0xfcbd,	// (0x0002fcde) list_single_hc_apps_pane_g

0x64e6,	// (0x00026507) list_single_hc_apps_pane_g2_copy1

0x6502,	// (0x00026523) list_single_hc_apps_pane_t1

0x18d0,	// (0x000218f1) bg_set_opt_pane_cp_ParamLimits

0x6a17,	// (0x00026a38) setting_slider_pane_t1_ParamLimits

0x6a30,	// (0x00026a51) setting_slider_pane_t2_ParamLimits

0x6a4a,	// (0x00026a6b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002f55a) setting_slider_pane_t_ParamLimits

0x6a62,	// (0x00026a83) slider_set_pane_ParamLimits

0x796e,	// (0x0002798f) control_pane_g5_ParamLimits

0x796e,	// (0x0002798f) control_pane_g5

0xad9f,	// (0x0002adc0) slider_set_pane_g1_ParamLimits

0x9069,	// (0x0002908a) slider_set_pane_g2_ParamLimits

0x9075,	// (0x00029096) slider_set_pane_g3_ParamLimits

0x9089,	// (0x000290aa) slider_set_pane_g4_ParamLimits

0x90a1,	// (0x000290c2) slider_set_pane_g5_ParamLimits

0x9075,	// (0x00029096) slider_set_pane_g6_ParamLimits

0x90b7,	// (0x000290d8) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x0002f94c) slider_set_pane_g_ParamLimits

0x24cd,	// (0x000224ee) navi_icon_text_pane_ParamLimits

0x8066,	// (0x00028087) aid_fill_nsta_2_ParamLimits

0x80a5,	// (0x000280c6) aid_touch_tab_arrow_left_ParamLimits

0x80b4,	// (0x000280d5) aid_touch_tab_arrow_right_ParamLimits

0x8121,	// (0x00028142) clock_nsta_pane_ParamLimits

0xa8a2,	// (0x0002a8c3) navi_icon_pane_g1_ParamLimits

0xa8ae,	// (0x0002a8cf) navi_text_pane_t1_ParamLimits

0xbbe9,	// (0x0002bc0a) navi_icon_text_pane_g1_ParamLimits

0xbbf5,	// (0x0002bc16) navi_icon_text_pane_t1_ParamLimits

0xd497,	// (0x0002d4b8) list_single_hc_apps_pane_g1_ParamLimits

0x64cd,	// (0x000264ee) list_single_hc_apps_pane_g2_ParamLimits

0xfcbd,	// (0x0002fcde) list_single_hc_apps_pane_g_ParamLimits

0x64e6,	// (0x00026507) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6502,	// (0x00026523) list_single_hc_apps_pane_t1_ParamLimits

0x685b,	// (0x0002687c) popup_toolbar2_fixed_window_ParamLimits

0x685b,	// (0x0002687c) popup_toolbar2_fixed_window

0x7f7c,	// (0x00027f9d) popup_toolbar2_float_window

0x1860,	// (0x00021881) bg_popup_sub_pane_cp27

0xd4b0,	// (0x0002d4d1) grid_toolbar2_float_pane

0x1860,	// (0x00021881) bg_popup_sub_pane_cp26

0xd4b0,	// (0x0002d4d1) grid_toolbar2_fixed_pane

0xd4b8,	// (0x0002d4d9) cell_toolbar2_fixed_pane_ParamLimits

0xd4b8,	// (0x0002d4d9) cell_toolbar2_fixed_pane

0xd4c8,	// (0x0002d4e9) cell_toolbar2_fixed_pane_g1

0x84bb,	// (0x000284dc) toolbar2_fixed_button_pane

0x856b,	// (0x0002858c) toolbar2_fixed_button_pane_g1

0x8573,	// (0x00028594) toolbar2_fixed_button_pane_g2

0x857b,	// (0x0002859c) toolbar2_fixed_button_pane_g3

0x8583,	// (0x000285a4) toolbar2_fixed_button_pane_g4

0x858b,	// (0x000285ac) toolbar2_fixed_button_pane_g5

0x8593,	// (0x000285b4) toolbar2_fixed_button_pane_g6

0x859b,	// (0x000285bc) toolbar2_fixed_button_pane_g7

0x85a3,	// (0x000285c4) toolbar2_fixed_button_pane_g8

0x85ab,	// (0x000285cc) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x0002f84e) toolbar2_fixed_button_pane_g

0xd4d1,	// (0x0002d4f2) cell_toolbar2_float_pane_ParamLimits

0xd4d1,	// (0x0002d4f2) cell_toolbar2_float_pane

0xd4e2,	// (0x0002d503) cell_toolbar2_float_pane_g1

0x84bb,	// (0x000284dc) toolbar2_fixed_button_pane_cp

0xc172,	// (0x0002c193) fep_vkb_accented_list_pane_ParamLimits

0xc172,	// (0x0002c193) fep_vkb_accented_list_pane

0x9459,	// (0x0002947a) bg_popup_fep_shadow_pane_g9

0x261c,	// (0x0002263d) bg_popup_fep_shadow_pane_cp3

0x1e91,	// (0x00021eb2) list_accented_list_pane

0xd4eb,	// (0x0002d50c) list_single_accented_list_pane_ParamLimits

0xd4eb,	// (0x0002d50c) list_single_accented_list_pane

0x261c,	// (0x0002263d) list_highlight_pane_cp10

0xd4fc,	// (0x0002d51d) list_single_accented_list_pane_t1

0x7ecc,	// (0x00027eed) popup_slider_window_ParamLimits

0x7ecc,	// (0x00027eed) popup_slider_window

0xd13a,	// (0x0002d15b) aid_indentation_list_msg

0xd5ba,	// (0x0002d5db) bg_popup_window_pane_cp19

0xd622,	// (0x0002d643) popup_slider_window_g1

0xd63e,	// (0x0002d65f) popup_slider_window_g2

0xd65a,	// (0x0002d67b) popup_slider_window_g3

0x0005,

0xfcc2,	// (0x0002fce3) popup_slider_window_g

0xd6c0,	// (0x0002d6e1) popup_slider_window_t1

0xd734,	// (0x0002d755) small_volume_slider_vertical_pane

0xc044,	// (0x0002c065) small_volume_slider_vertical_pane_g1

0xc044,	// (0x0002c065) small_volume_slider_vertical_pane_g2

0xd750,	// (0x0002d771) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd4,	// (0x0002fcf5) small_volume_slider_vertical_pane_g

0x662b,	// (0x0002664c) area_side_right_pane_ParamLimits

0x662b,	// (0x0002664c) area_side_right_pane

0x95b0,	// (0x000295d1) aid_size_side_button_ParamLimits

0x95b0,	// (0x000295d1) aid_size_side_button

0x95c4,	// (0x000295e5) grid_sctrl_middle_pane_ParamLimits

0x95c4,	// (0x000295e5) grid_sctrl_middle_pane

0x95e3,	// (0x00029604) sctrl_sk_bottom_pane

0x95f4,	// (0x00029615) sctrl_sk_top_pane

0x9606,	// (0x00029627) aid_touch_sctrl_top

0x1a14,	// (0x00021a35) bg_sctrl_sk_pane_ParamLimits

0x1a14,	// (0x00021a35) bg_sctrl_sk_pane

0x9613,	// (0x00029634) sctrl_sk_top_pane_g1

0x9620,	// (0x00029641) sctrl_sk_top_pane_t1

0x9606,	// (0x00029627) aid_touch_sctrl_bottom

0x1a14,	// (0x00021a35) bg_sctrl_sk_pane_cp_ParamLimits

0x1a14,	// (0x00021a35) bg_sctrl_sk_pane_cp

0x963b,	// (0x0002965c) sctrl_sk_bottom_pane_g1

0x9620,	// (0x00029641) sctrl_sk_bottom_pane_t1

0x9644,	// (0x00029665) cell_sctrl_middle_pane_ParamLimits

0x9644,	// (0x00029665) cell_sctrl_middle_pane

0x965f,	// (0x00029680) aid_touch_sctrl_middle_ParamLimits

0x965f,	// (0x00029680) aid_touch_sctrl_middle

0x1d0a,	// (0x00021d2b) bg_sctrl_middle_pane_ParamLimits

0x1d0a,	// (0x00021d2b) bg_sctrl_middle_pane

0xc2b4,	// (0x0002c2d5) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b4,	// (0x0002c2d5) cell_sctrl_middle_pane_g1

0x9671,	// (0x00029692) cell_sctrl_middle_pane_g2_ParamLimits

0x9671,	// (0x00029692) cell_sctrl_middle_pane_g2

0x0001,

0xfce0,	// (0x0002fd01) cell_sctrl_middle_pane_g_ParamLimits

0xfce0,	// (0x0002fd01) cell_sctrl_middle_pane_g

0x856b,	// (0x0002858c) bg_sctrl_middle_pane_g1

0x8573,	// (0x00028594) bg_sctrl_middle_pane_g2

0x857b,	// (0x0002859c) bg_sctrl_middle_pane_g3

0x8583,	// (0x000285a4) bg_sctrl_middle_pane_g4

0x858b,	// (0x000285ac) bg_sctrl_middle_pane_g5

0x8593,	// (0x000285b4) bg_sctrl_middle_pane_g6

0x859b,	// (0x000285bc) bg_sctrl_middle_pane_g7

0x85a3,	// (0x000285c4) bg_sctrl_middle_pane_g8

0x0007,

0xfce5,	// (0x0002fd06) bg_sctrl_middle_pane_g

0x85ab,	// (0x000285cc) bg_sctrl_middle_pane_g8_copy1

0x856b,	// (0x0002858c) bg_sctrl_sk_pane_g1

0x8573,	// (0x00028594) bg_sctrl_sk_pane_g2

0x857b,	// (0x0002859c) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x0002f84e) bg_sctrl_sk_pane_g

0x1be2,	// (0x00021c03) aid_size_touch_scroll_bar

0x8583,	// (0x000285a4) bg_sctrl_sk_pane_g4

0x858b,	// (0x000285ac) bg_sctrl_sk_pane_g5

0x8593,	// (0x000285b4) bg_sctrl_sk_pane_g6

0x859b,	// (0x000285bc) bg_sctrl_sk_pane_g7

0x85a3,	// (0x000285c4) bg_sctrl_sk_pane_g8

0x85ab,	// (0x000285cc) bg_sctrl_sk_pane_g9

0x7b35,	// (0x00027b56) popup_fep_china_hwr2_fs_candidate_window

0x7b3f,	// (0x00027b60) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7b3f,	// (0x00027b60) popup_fep_china_hwr2_fs_control_window

0xc2b4,	// (0x0002c2d5) sctrl_sk_top_pane_g2

0x0001,

0xfcdb,	// (0x0002fcfc) sctrl_sk_top_pane_g

0xd759,	// (0x0002d77a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd759,	// (0x0002d77a) aid_fep_china_hwr2_fs_cell

0xd774,	// (0x0002d795) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd774,	// (0x0002d795) bg_popup_fep_shadow_pane_cp4

0xd78b,	// (0x0002d7ac) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78b,	// (0x0002d7ac) bg_popup_fep_shadow_pane_cp5

0xd79d,	// (0x0002d7be) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79d,	// (0x0002d7be) popup_fep_china_hwr2_fs_control_bar_grid

0xd7ad,	// (0x0002d7ce) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b5,	// (0x0002d7d6) aid_fep_china_hwr2_fs_candi_cell

0x1860,	// (0x00021881) bg_popup_fep_shadow_pane_cp6

0xd7bf,	// (0x0002d7e0) popup_fep_china_hwr2_fs_candidate_grid

0xd7c9,	// (0x0002d7ea) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c9,	// (0x0002d7ea) cell_fep_china_hwr2_fs_funtion_grid

0xc044,	// (0x0002c065) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e1,	// (0x0002d802) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e1,	// (0x0002d802) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7ef,	// (0x0002d810) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7ef,	// (0x0002d810) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf6,	// (0x0002fd17) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf6,	// (0x0002fd17) cell_fep_china_hwr2_fs_funtion_grid_g

0xd805,	// (0x0002d826) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd805,	// (0x0002d826) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81a,	// (0x0002d83b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81a,	// (0x0002d83b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfb,	// (0x0002fd1c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfb,	// (0x0002fd1c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd836,	// (0x0002d857) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd83e,	// (0x0002d85f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd846,	// (0x0002d867) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002fd21) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd84e,	// (0x0002d86f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd84e,	// (0x0002d86f) cell_fep_china_hwr2_fs_candidate_grid

0xd867,	// (0x0002d888) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd86f,	// (0x0002d890) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc044,	// (0x0002c065) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc044,	// (0x0002c065) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0002fb48) cell_fep_china_hwr2_fs_candidate_grid_g

0xd877,	// (0x0002d898) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8134,	// (0x00028155) clock_nsta_pane_cp_24_ParamLimits

0x8134,	// (0x00028155) clock_nsta_pane_cp_24

0x81b2,	// (0x000281d3) indicator_nsta_pane_cp_24_ParamLimits

0x81b2,	// (0x000281d3) indicator_nsta_pane_cp_24

0xa71e,	// (0x0002a73f) heading_pane_g1

0x0001,

0xf892,	// (0x0002f8b3) heading_pane_g

0xb163,	// (0x0002b184) grid_sct_catagory_button_pane

0xb193,	// (0x0002b1b4) scroll_pane_cp5_ParamLimits

0xbc37,	// (0x0002bc58) button_value_adjust_pane_cp5_ParamLimits

0xbc37,	// (0x0002bc58) button_value_adjust_pane_cp5

0xbd16,	// (0x0002bd37) form2_midp_time_pane_ParamLimits

0xd885,	// (0x0002d8a6) cell_sct_catagory_button_pane_ParamLimits

0xd885,	// (0x0002d8a6) cell_sct_catagory_button_pane

0xc009,	// (0x0002c02a) bg_button_pane_cp01_ParamLimits

0xc009,	// (0x0002c02a) bg_button_pane_cp01

0xc044,	// (0x0002c065) cell_sct_catagory_button_pane_g1

0x7f0b,	// (0x00027f2c) popup_tb_extension_window

0xd897,	// (0x0002d8b8) aid_size_cell_ext_ParamLimits

0xd897,	// (0x0002d8b8) aid_size_cell_ext

0x1a14,	// (0x00021a35) bg_tb_trans_pane_cp1_ParamLimits

0x1a14,	// (0x00021a35) bg_tb_trans_pane_cp1

0xd8b7,	// (0x0002d8d8) grid_tb_ext_pane_ParamLimits

0xd8b7,	// (0x0002d8d8) grid_tb_ext_pane

0xd8e7,	// (0x0002d908) cell_tb_ext_pane_ParamLimits

0xd8e7,	// (0x0002d908) cell_tb_ext_pane

0xd8fe,	// (0x0002d91f) cell_tb_ext_pane_g1_ParamLimits

0xd8fe,	// (0x0002d91f) cell_tb_ext_pane_g1

0xd91b,	// (0x0002d93c) cell_tb_ext_pane_t1

0x1a14,	// (0x00021a35) list_highlight_pane_cp11_ParamLimits

0x1a14,	// (0x00021a35) list_highlight_pane_cp11

0x687a,	// (0x0002689b) popup_uni_indicator_window_ParamLimits

0x687a,	// (0x0002689b) popup_uni_indicator_window

0x1d0a,	// (0x00021d2b) bg_popup_sub_pane_cp14

0xd937,	// (0x0002d958) list_uniindi_pane

0xd943,	// (0x0002d964) uniindi_top_pane

0x1a14,	// (0x00021a35) bg_uniindi_top_pane

0xd962,	// (0x0002d983) uniindi_top_pane_g1

0xd978,	// (0x0002d999) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002fd28) uniindi_top_pane_g

0xd9a2,	// (0x0002d9c3) uniindi_top_pane_t1

0xd9cc,	// (0x0002d9ed) list_single_uniindi_pane_ParamLimits

0xd9cc,	// (0x0002d9ed) list_single_uniindi_pane

0xc044,	// (0x0002c065) bg_uniindi_top_pane_g1

0xd9df,	// (0x0002da00) list_single_uniindi_pane_g1

0xd9f2,	// (0x0002da13) list_single_uniindi_pane_t1

0x1860,	// (0x00021881) control_bg_pane

0xda17,	// (0x0002da38) bg_sctrl_sk_pane_cp1

0xda20,	// (0x0002da41) bg_sctrl_sk_pane_cp2

0xda29,	// (0x0002da4a) control_bg_pane_g1

0xda32,	// (0x0002da53) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002fd31) control_bg_pane_g

0xba7d,	// (0x0002ba9e) cell_indicator_nsta_pane_g1_ParamLimits

0xba8b,	// (0x0002baac) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0002faac) cell_indicator_nsta_pane_g_ParamLimits

0x61b7,	// (0x000261d8) form2_midp_time_pane_t1_ParamLimits

0x1b94,	// (0x00021bb5) main_idle_act4_pane_ParamLimits

0x1b94,	// (0x00021bb5) main_idle_act4_pane

0x7f0b,	// (0x00027f2c) popup_tb_extension_window_ParamLimits

0xd8d7,	// (0x0002d8f8) tb_ext_find_pane_ParamLimits

0xd8d7,	// (0x0002d8f8) tb_ext_find_pane

0xda3b,	// (0x0002da5c) ai_gene_pane_1_cp1

0x269d,	// (0x000226be) ai_gene_pane_2_cp1

0xda43,	// (0x0002da64) list_single_idle_plugin_calendar_pane

0xda4c,	// (0x0002da6d) list_single_idle_plugin_notification_pane

0xda55,	// (0x0002da76) list_single_idle_plugin_player_pane

0xda5e,	// (0x0002da7f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5e,	// (0x0002da7f) list_single_idle_plugin_shortcut_pane

0xda80,	// (0x0002daa1) main_idle_act4_pane_t1

0xda92,	// (0x0002dab3) main_idle_act4_pane_t2

0x0001,

0xfd15,	// (0x0002fd36) main_idle_act4_pane_t

0xdaa4,	// (0x0002dac5) middle_sk_idle_act4_pane_ParamLimits

0xdaa4,	// (0x0002dac5) middle_sk_idle_act4_pane

0xdaba,	// (0x0002dadb) popup_clock_digital_analogue_window_cp2

0xdad4,	// (0x0002daf5) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad4,	// (0x0002daf5) shortcut_wheel_idle_act4_pane

0xc044,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g1

0xc044,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g2

0xc044,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g3

0xc044,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g4

0xc044,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g5

0xdae8,	// (0x0002db09) shortcut_wheel_idle_act4_pane_g6

0xdaf0,	// (0x0002db11) shortcut_wheel_idle_act4_pane_g7

0xdaf8,	// (0x0002db19) shortcut_wheel_idle_act4_pane_g8

0xdb00,	// (0x0002db21) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1a,	// (0x0002fd3b) shortcut_wheel_idle_act4_pane_g

0xc2b4,	// (0x0002c2d5) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b4,	// (0x0002c2d5) middle_sk_idle_act4_pane_g1

0xdb64,	// (0x0002db85) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb64,	// (0x0002db85) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3d,	// (0x0002fd5e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3d,	// (0x0002fd5e) middle_sk_idle_act4_pane_g

0xdb70,	// (0x0002db91) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb70,	// (0x0002db91) middle_sk_idle_act4_pane_t1

0xdb8d,	// (0x0002dbae) grid_ai_shortcut_pane_ParamLimits

0xdb8d,	// (0x0002dbae) grid_ai_shortcut_pane

0xdba6,	// (0x0002dbc7) list_highlight_pane_cp16_ParamLimits

0xdba6,	// (0x0002dbc7) list_highlight_pane_cp16

0xdbb3,	// (0x0002dbd4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb3,	// (0x0002dbd4) list_single_idle_plugin_shortcut_pane_g1

0xdbbf,	// (0x0002dbe0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbbf,	// (0x0002dbe0) list_single_idle_plugin_shortcut_pane_g2

0xdbd7,	// (0x0002dbf8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd7,	// (0x0002dbf8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd42,	// (0x0002fd63) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd42,	// (0x0002fd63) list_single_idle_plugin_shortcut_pane_g

0xdbea,	// (0x0002dc0b) cell_ai_shortcut_pane_ParamLimits

0xdbea,	// (0x0002dc0b) cell_ai_shortcut_pane

0xdc0e,	// (0x0002dc2f) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0e,	// (0x0002dc2f) cell_ai_shortcut_pane_g1

0xda3b,	// (0x0002da5c) ai_gene_pane_1_cp2

0xdc30,	// (0x0002dc51) ai_gene_pane_2_cp2

0xdc38,	// (0x0002dc59) list_highlight_pane_cp15

0xdc41,	// (0x0002dc62) list_single_idle_plugin_calendar_pane_g1

0xdc38,	// (0x0002dc59) list_highlight_pane_cp17

0xdc49,	// (0x0002dc6a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc51,	// (0x0002dc72) list_single_idle_plugin_player_pane_g1

0xb3bc,	// (0x0002b3dd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd49,	// (0x0002fd6a) list_single_idle_plugin_player_pane_g

0xdc59,	// (0x0002dc7a) list_single_idle_plugin_player_pane_t1

0xdc67,	// (0x0002dc88) list_single_idle_plugin_player_pane_t2

0xdc75,	// (0x0002dc96) list_single_idle_plugin_player_pane_t3

0xdc83,	// (0x0002dca4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4e,	// (0x0002fd6f) list_single_idle_plugin_player_pane_t

0xdc91,	// (0x0002dcb2) wait_bar_pane_cp15

0xdc99,	// (0x0002dcba) grid_ai_notification_pane

0xb3bc,	// (0x0002b3dd) list_single_idle_plugin_notification_pane_g1

0xdca2,	// (0x0002dcc3) cell_ai_notification_pane_ParamLimits

0xdca2,	// (0x0002dcc3) cell_ai_notification_pane

0xdcaf,	// (0x0002dcd0) cell_ai_notification_pane_g1

0xdcb7,	// (0x0002dcd8) cell_ai_notification_pane_t1

0xdcc5,	// (0x0002dce6) tb_ext_find_button_pane

0xdccd,	// (0x0002dcee) tb_ext_find_pane_g1

0xdcd5,	// (0x0002dcf6) tb_ext_find_pane_t1

0x21ca,	// (0x000221eb) tb_ext_find_button_pane_g1

0xdce3,	// (0x0002dd04) tb_ext_find_button_pane_g2

0x0001,

0xfd57,	// (0x0002fd78) tb_ext_find_button_pane_g

0xda80,	// (0x0002daa1) main_idle_act4_pane_t1_ParamLimits

0xda92,	// (0x0002dab3) main_idle_act4_pane_t2_ParamLimits

0xfd15,	// (0x0002fd36) main_idle_act4_pane_t_ParamLimits

0xdaba,	// (0x0002dadb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac8,	// (0x0002dae9) sat_plugin_idle_act4_pane_ParamLimits

0xdac8,	// (0x0002dae9) sat_plugin_idle_act4_pane

0xdcec,	// (0x0002dd0d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcec,	// (0x0002dd0d) sat_plugin_idle_act4_pane_t1

0xdcff,	// (0x0002dd20) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcff,	// (0x0002dd20) sat_plugin_idle_act4_pane_t2

0xdd12,	// (0x0002dd33) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd12,	// (0x0002dd33) sat_plugin_idle_act4_pane_t3

0xdd25,	// (0x0002dd46) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd25,	// (0x0002dd46) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5c,	// (0x0002fd7d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5c,	// (0x0002fd7d) sat_plugin_idle_act4_pane_t

0x67c3,	// (0x000267e4) popup_battery_window_ParamLimits

0x67c3,	// (0x000267e4) popup_battery_window

0x1a14,	// (0x00021a35) bg_popup_sub_pane_cp25_ParamLimits

0x1a14,	// (0x00021a35) bg_popup_sub_pane_cp25

0xdd38,	// (0x0002dd59) popup_battery_window_g1_ParamLimits

0xdd38,	// (0x0002dd59) popup_battery_window_g1

0xdd44,	// (0x0002dd65) popup_battery_window_t1_ParamLimits

0xdd44,	// (0x0002dd65) popup_battery_window_t1

0xdd56,	// (0x0002dd77) popup_battery_window_t2_ParamLimits

0xdd56,	// (0x0002dd77) popup_battery_window_t2

0x0001,

0xfd65,	// (0x0002fd86) popup_battery_window_t_ParamLimits

0xfd65,	// (0x0002fd86) popup_battery_window_t

0x76e2,	// (0x00027703) midp_canvas_pane_ParamLimits

0x775b,	// (0x0002777c) midp_keypad_pane_ParamLimits

0x775b,	// (0x0002777c) midp_keypad_pane

0x1eba,	// (0x00021edb) main_midp_pane_ParamLimits

0xbaf7,	// (0x0002bb18) signal_pane_g2_cp_ParamLimits

0xdd73,	// (0x0002dd94) aid_size_cell_midp_keypad_ParamLimits

0xdd73,	// (0x0002dd94) aid_size_cell_midp_keypad

0xdd8d,	// (0x0002ddae) midp_keyp_game_grid_pane_ParamLimits

0xdd8d,	// (0x0002ddae) midp_keyp_game_grid_pane

0xddad,	// (0x0002ddce) midp_keyp_rocker_pane_ParamLimits

0xddad,	// (0x0002ddce) midp_keyp_rocker_pane

0xdde6,	// (0x0002de07) midp_keyp_sk_left_pane_ParamLimits

0xdde6,	// (0x0002de07) midp_keyp_sk_left_pane

0xde40,	// (0x0002de61) midp_keyp_sk_right_pane_ParamLimits

0xde40,	// (0x0002de61) midp_keyp_sk_right_pane

0x1860,	// (0x00021881) bg_button_pane_cp03

0xde9a,	// (0x0002debb) midp_keyp_sk_left_pane_g1

0x1860,	// (0x00021881) bg_button_pane_cp04

0xde9a,	// (0x0002debb) midp_keyp_sk_right_pane_g1

0xc044,	// (0x0002c065) midp_keyp_rocker_pane_g1

0xdea3,	// (0x0002dec4) keyp_game_cell_pane_ParamLimits

0xdea3,	// (0x0002dec4) keyp_game_cell_pane

0x1860,	// (0x00021881) bg_button_pane_cp02

0xdeb6,	// (0x0002ded7) keyp_game_cell_pane_g1

0x67f9,	// (0x0002681a) popup_fep_vkb2_window_ParamLimits

0x67f9,	// (0x0002681a) popup_fep_vkb2_window

0x968f,	// (0x000296b0) aid_size_cell_vkb2_ParamLimits

0x968f,	// (0x000296b0) aid_size_cell_vkb2

0x96db,	// (0x000296fc) popup_fep_vkb2_window_g1_ParamLimits

0x96db,	// (0x000296fc) popup_fep_vkb2_window_g1

0x9723,	// (0x00029744) vkb2_area_bottom_pane_ParamLimits

0x9723,	// (0x00029744) vkb2_area_bottom_pane

0x976f,	// (0x00029790) vkb2_area_keypad_pane_ParamLimits

0x976f,	// (0x00029790) vkb2_area_keypad_pane

0x97b1,	// (0x000297d2) vkb2_area_top_pane_ParamLimits

0x97b1,	// (0x000297d2) vkb2_area_top_pane

0x9830,	// (0x00029851) vkb2_top_entry_pane_ParamLimits

0x9830,	// (0x00029851) vkb2_top_entry_pane

0x985a,	// (0x0002987b) vkb2_top_grid_left_pane_ParamLimits

0x985a,	// (0x0002987b) vkb2_top_grid_left_pane

0x9879,	// (0x0002989a) vkb2_top_grid_right_pane_ParamLimits

0x9879,	// (0x0002989a) vkb2_top_grid_right_pane

0x9898,	// (0x000298b9) vkb2_cell_keypad_pane_ParamLimits

0x9898,	// (0x000298b9) vkb2_cell_keypad_pane

0x9969,	// (0x0002998a) vkb2_area_bottom_grid_pane_ParamLimits

0x9969,	// (0x0002998a) vkb2_area_bottom_grid_pane

0x998f,	// (0x000299b0) vkb2_area_bottom_pane_g1_ParamLimits

0x998f,	// (0x000299b0) vkb2_area_bottom_pane_g1

0x99b3,	// (0x000299d4) vkb2_area_bottom_pane_g2_ParamLimits

0x99b3,	// (0x000299d4) vkb2_area_bottom_pane_g2

0x99e1,	// (0x00029a02) vkb2_area_bottom_pane_g3_ParamLimits

0x99e1,	// (0x00029a02) vkb2_area_bottom_pane_g3

0x0002,

0xfd6a,	// (0x0002fd8b) vkb2_area_bottom_pane_g_ParamLimits

0xfd6a,	// (0x0002fd8b) vkb2_area_bottom_pane_g

0x9a42,	// (0x00029a63) vkb2_top_cell_left_pane_ParamLimits

0x9a42,	// (0x00029a63) vkb2_top_cell_left_pane

0xdec7,	// (0x0002dee8) vkb2_top_entry_pane_g1_ParamLimits

0xdec7,	// (0x0002dee8) vkb2_top_entry_pane_g1

0xded5,	// (0x0002def6) vkb2_top_entry_pane_t1_ParamLimits

0xded5,	// (0x0002def6) vkb2_top_entry_pane_t1

0xdf07,	// (0x0002df28) vkb2_top_entry_pane_t2_ParamLimits

0xdf07,	// (0x0002df28) vkb2_top_entry_pane_t2

0xdf39,	// (0x0002df5a) vkb2_top_entry_pane_t3_ParamLimits

0xdf39,	// (0x0002df5a) vkb2_top_entry_pane_t3

0x0002,

0xfd71,	// (0x0002fd92) vkb2_top_entry_pane_t_ParamLimits

0xfd71,	// (0x0002fd92) vkb2_top_entry_pane_t

0x9a8f,	// (0x00029ab0) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a8f,	// (0x00029ab0) vkb2_top_grid_right_pane_g1

0x9aa5,	// (0x00029ac6) vkb2_top_grid_right_pane_g2_ParamLimits

0x9aa5,	// (0x00029ac6) vkb2_top_grid_right_pane_g2

0x9abd,	// (0x00029ade) vkb2_top_grid_right_pane_g3_ParamLimits

0x9abd,	// (0x00029ade) vkb2_top_grid_right_pane_g3

0x9ad5,	// (0x00029af6) vkb2_top_grid_right_pane_g4_ParamLimits

0x9ad5,	// (0x00029af6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd78,	// (0x0002fd99) vkb2_top_grid_right_pane_g_ParamLimits

0xfd78,	// (0x0002fd99) vkb2_top_grid_right_pane_g

0x9aeb,	// (0x00029b0c) vkb2_top_cell_left_pane_g1

0x9b02,	// (0x00029b23) vkb2_cell_keypad_pane_g1_ParamLimits

0x9b02,	// (0x00029b23) vkb2_cell_keypad_pane_g1

0xdf5d,	// (0x0002df7e) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5d,	// (0x0002df7e) vkb2_cell_keypad_pane_t1

0x9b10,	// (0x00029b31) vkb2_cell_bottom_grid_pane_ParamLimits

0x9b10,	// (0x00029b31) vkb2_cell_bottom_grid_pane

0x9b49,	// (0x00029b6a) vkb2_cell_bottom_grid_pane_g1

0xdb08,	// (0x0002db29) aid_call2_pane_cp02

0xdb10,	// (0x0002db31) aid_call_pane_cp02

0xdb18,	// (0x0002db39) clock_digital_number_pane_cp10

0xdb20,	// (0x0002db41) clock_digital_number_pane_cp11

0xdb28,	// (0x0002db49) clock_digital_number_pane_cp12

0xdb30,	// (0x0002db51) clock_digital_number_pane_cp13

0xdb38,	// (0x0002db59) clock_digital_separator_pane_cp10

0x21ca,	// (0x000221eb) popup_clock_digital_analogue_window_cp2_g1

0x21ca,	// (0x000221eb) popup_clock_digital_analogue_window_cp2_g2

0xdb40,	// (0x0002db61) popup_clock_digital_analogue_window_cp2_g3

0x21ca,	// (0x000221eb) popup_clock_digital_analogue_window_cp2_g4

0xdb40,	// (0x0002db61) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2d,	// (0x0002fd4e) popup_clock_digital_analogue_window_cp2_g

0xdb48,	// (0x0002db69) popup_clock_digital_analogue_window_cp2_t1

0xdb56,	// (0x0002db77) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd38,	// (0x0002fd59) popup_clock_digital_analogue_window_cp2_t

0xc044,	// (0x0002c065) clock_digital_number_pane_cp10_g1

0xc044,	// (0x0002c065) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002fb48) clock_digital_number_pane_cp10_g

0xc044,	// (0x0002c065) clock_digital_separator_pane_cp10_g1

0xc044,	// (0x0002c065) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002fb48) clock_digital_separator_pane_cp10_g

0xd984,	// (0x0002d9a5) uniindi_top_pane_g3

0xd995,	// (0x0002d9b6) uniindi_top_pane_g4

0x9923,	// (0x00029944) vkb2_row_keypad_pane_ParamLimits

0x9923,	// (0x00029944) vkb2_row_keypad_pane

0x9b69,	// (0x00029b8a) vkb2_cell_t_keypad_pane_ParamLimits

0x9b69,	// (0x00029b8a) vkb2_cell_t_keypad_pane

0x9b79,	// (0x00029b9a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9b79,	// (0x00029b9a) vkb2_cell_t_keypad_pane_cp08

0x9b8c,	// (0x00029bad) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9b8c,	// (0x00029bad) vkb2_cell_t_keypad_pane_cp09

0x9ba0,	// (0x00029bc1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9ba0,	// (0x00029bc1) vkb2_cell_t_keypad_pane_cp01

0x9bb1,	// (0x00029bd2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9bb1,	// (0x00029bd2) vkb2_cell_t_keypad_pane_cp02

0x9bc2,	// (0x00029be3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9bc2,	// (0x00029be3) vkb2_cell_t_keypad_pane_cp03

0x9bd3,	// (0x00029bf4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9bd3,	// (0x00029bf4) vkb2_cell_t_keypad_pane_cp04

0x9be4,	// (0x00029c05) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9be4,	// (0x00029c05) vkb2_cell_t_keypad_pane_cp05

0x9bf5,	// (0x00029c16) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9bf5,	// (0x00029c16) vkb2_cell_t_keypad_pane_cp06

0x9c06,	// (0x00029c27) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9c06,	// (0x00029c27) vkb2_cell_t_keypad_pane_cp07

0x9c17,	// (0x00029c38) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9c17,	// (0x00029c38) vkb2_cell_t_keypad_pane_cp10

0xc2b4,	// (0x0002c2d5) vkb2_cell_t_keypad_pane_g1

0xdf74,	// (0x0002df95) vkb2_cell_t_keypad_pane_t1

0x1860,	// (0x00021881) popup_grid_graphic2_window

0xdf86,	// (0x0002dfa7) aid_size_cell_graphic2_ParamLimits

0xdf86,	// (0x0002dfa7) aid_size_cell_graphic2

0xdfbe,	// (0x0002dfdf) bg_popup_window_pane_cp21_ParamLimits

0xdfbe,	// (0x0002dfdf) bg_popup_window_pane_cp21

0xdfcc,	// (0x0002dfed) graphic2_pages_pane_ParamLimits

0xdfcc,	// (0x0002dfed) graphic2_pages_pane

0xe012,	// (0x0002e033) grid_graphic2_control_pane_ParamLimits

0xe012,	// (0x0002e033) grid_graphic2_control_pane

0xe050,	// (0x0002e071) grid_graphic2_pane_ParamLimits

0xe050,	// (0x0002e071) grid_graphic2_pane

0xe0c4,	// (0x0002e0e5) cell_graphic2_pane

0x1860,	// (0x00021881) main_comp_mode_pane

0xd1ec,	// (0x0002d20d) list_ai3_gene_pane_ParamLimits

0xd5ba,	// (0x0002d5db) bg_popup_window_pane_cp19_ParamLimits

0xd5c6,	// (0x0002d5e7) bg_touch_area_indi_pane_ParamLimits

0xd5c6,	// (0x0002d5e7) bg_touch_area_indi_pane

0xd5dc,	// (0x0002d5fd) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5dc,	// (0x0002d5fd) bg_touch_area_indi_pane_cp01

0xd5f2,	// (0x0002d613) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f2,	// (0x0002d613) bg_touch_area_indi_pane_cp02

0xd608,	// (0x0002d629) bg_touch_area_indi_pane_cp03_ParamLimits

0xd608,	// (0x0002d629) bg_touch_area_indi_pane_cp03

0xd622,	// (0x0002d643) popup_slider_window_g1_ParamLimits

0xd63e,	// (0x0002d65f) popup_slider_window_g2_ParamLimits

0xd65a,	// (0x0002d67b) popup_slider_window_g3_ParamLimits

0xfcc2,	// (0x0002fce3) popup_slider_window_g_ParamLimits

0xd6c0,	// (0x0002d6e1) popup_slider_window_t1_ParamLimits

0xd734,	// (0x0002d755) small_volume_slider_vertical_pane_ParamLimits

0xe0c4,	// (0x0002e0e5) cell_graphic2_pane_ParamLimits

0xe113,	// (0x0002e134) bg_button_pane_cp10_ParamLimits

0xe113,	// (0x0002e134) bg_button_pane_cp10

0xe126,	// (0x0002e147) bg_button_pane_cp11_ParamLimits

0xe126,	// (0x0002e147) bg_button_pane_cp11

0xe139,	// (0x0002e15a) graphic2_pages_pane_g1_ParamLimits

0xe139,	// (0x0002e15a) graphic2_pages_pane_g1

0xe154,	// (0x0002e175) graphic2_pages_pane_g2_ParamLimits

0xe154,	// (0x0002e175) graphic2_pages_pane_g2

0x0001,

0xfd86,	// (0x0002fda7) graphic2_pages_pane_g_ParamLimits

0xfd86,	// (0x0002fda7) graphic2_pages_pane_g

0xe16c,	// (0x0002e18d) graphic2_pages_pane_t1_ParamLimits

0xe16c,	// (0x0002e18d) graphic2_pages_pane_t1

0xe184,	// (0x0002e1a5) cell_graphic2_control_pane_ParamLimits

0xe184,	// (0x0002e1a5) cell_graphic2_control_pane

0xe1a2,	// (0x0002e1c3) cell_graphic2_pane_g1_ParamLimits

0xe1a2,	// (0x0002e1c3) cell_graphic2_pane_g1

0xe1af,	// (0x0002e1d0) cell_graphic2_pane_g2_ParamLimits

0xe1af,	// (0x0002e1d0) cell_graphic2_pane_g2

0xe1bc,	// (0x0002e1dd) cell_graphic2_pane_g3_ParamLimits

0xe1bc,	// (0x0002e1dd) cell_graphic2_pane_g3

0xe1c9,	// (0x0002e1ea) cell_graphic2_pane_g4_ParamLimits

0xe1c9,	// (0x0002e1ea) cell_graphic2_pane_g4

0xe1d6,	// (0x0002e1f7) cell_graphic2_pane_g5_ParamLimits

0xe1d6,	// (0x0002e1f7) cell_graphic2_pane_g5

0x0004,

0xfd8b,	// (0x0002fdac) cell_graphic2_pane_g_ParamLimits

0xfd8b,	// (0x0002fdac) cell_graphic2_pane_g

0xe1ef,	// (0x0002e210) cell_graphic2_pane_t1_ParamLimits

0xe1ef,	// (0x0002e210) cell_graphic2_pane_t1

0x866f,	// (0x00028690) grid_highlight_pane_cp11_ParamLimits

0x866f,	// (0x00028690) grid_highlight_pane_cp11

0x1a14,	// (0x00021a35) bg_button_pane_cp05

0xe225,	// (0x0002e246) cell_graphic2_control_pane_g1

0xc044,	// (0x0002c065) bg_touch_area_indi_pane_g1

0xe24d,	// (0x0002e26e) aid_cmod_rocker_key_size

0xe257,	// (0x0002e278) aid_cmode_itu_key_size

0xe261,	// (0x0002e282) main_cmode_video_pane

0xe26b,	// (0x0002e28c) main_comp_mode_itu_pane

0xe277,	// (0x0002e298) main_comp_mode_rocker_pane

0xe283,	// (0x0002e2a4) cell_cmode_rocker_pane_ParamLimits

0xe283,	// (0x0002e2a4) cell_cmode_rocker_pane

0xe295,	// (0x0002e2b6) cell_cmode_itu_pane_ParamLimits

0xe295,	// (0x0002e2b6) cell_cmode_itu_pane

0x1d0a,	// (0x00021d2b) bg_button_pane_cp06_ParamLimits

0x1d0a,	// (0x00021d2b) bg_button_pane_cp06

0xc2b4,	// (0x0002c2d5) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b4,	// (0x0002c2d5) cell_cmode_rocker_pane_g1

0xd7e1,	// (0x0002d802) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e1,	// (0x0002d802) cell_cmode_rocker_pane_g2

0x0001,

0xfd9b,	// (0x0002fdbc) cell_cmode_rocker_pane_g_ParamLimits

0xfd9b,	// (0x0002fdbc) cell_cmode_rocker_pane_g

0x1860,	// (0x00021881) bg_button_pane_cp07

0xe2aa,	// (0x0002e2cb) cell_cmode_itu_pane_g1

0xe2b3,	// (0x0002e2d4) cell_cmode_itu_pane_t1

0xe2c1,	// (0x0002e2e2) cell_cmode_itu_pane_t2

0x0001,

0xfda0,	// (0x0002fdc1) cell_cmode_itu_pane_t

0xda07,	// (0x0002da28) aid_touch_ctrl_left

0xda0f,	// (0x0002da30) aid_touch_ctrl_right

0x1860,	// (0x00021881) compa_mode_pane

0xe2cf,	// (0x0002e2f0) aid_cmod_rocker_key_size_cp

0xe2d9,	// (0x0002e2fa) aid_cmode_itu_key_size_cp

0xe2e3,	// (0x0002e304) compa_mode_pane_g1

0xe2eb,	// (0x0002e30c) compa_mode_pane_g2

0xe2f3,	// (0x0002e314) compa_mode_pane_g3

0x0002,

0xfda5,	// (0x0002fdc6) compa_mode_pane_g

0xe2fb,	// (0x0002e31c) main_comp_mode_itu_pane_cp

0xe303,	// (0x0002e324) main_comp_mode_rocker_pane_cp

0xe30b,	// (0x0002e32c) cell_cmode_itu_pane_cp_ParamLimits

0xe30b,	// (0x0002e32c) cell_cmode_itu_pane_cp

0xe320,	// (0x0002e341) cell_cmode_rocker_pane_cp_ParamLimits

0xe320,	// (0x0002e341) cell_cmode_rocker_pane_cp

0x1d0a,	// (0x00021d2b) bg_button_pane_cp06_cp_ParamLimits

0x1d0a,	// (0x00021d2b) bg_button_pane_cp06_cp

0xc2b4,	// (0x0002c2d5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b4,	// (0x0002c2d5) cell_cmode_rocker_pane_g1_cp

0xc044,	// (0x0002c065) cell_cmode_rocker_pane_g2_cp

0x1860,	// (0x00021881) bg_button_pane_cp07_cp

0xe332,	// (0x0002e353) cell_cmode_itu_pane_g1_cp

0xe33b,	// (0x0002e35c) cell_cmode_itu_pane_t1_cp

0xe33b,	// (0x0002e35c) cell_cmode_itu_pane_t2_cp

0xaf39,	// (0x0002af5a) settings_code_pane_cp2

0x18d0,	// (0x000218f1) bg_popup_window_pane_cp3_ParamLimits

0x1b2d,	// (0x00021b4e) heading_pane_cp3_ParamLimits

0x1b3c,	// (0x00021b5d) listscroll_popup_graphic_pane_ParamLimits

0x923d,	// (0x0002925e) fep_hwr_aid_pane_ParamLimits

0x9606,	// (0x00029627) aid_touch_sctrl_top_ParamLimits

0x9613,	// (0x00029634) sctrl_sk_top_pane_g1_ParamLimits

0xc2b4,	// (0x0002c2d5) sctrl_sk_top_pane_g2_ParamLimits

0xfcdb,	// (0x0002fcfc) sctrl_sk_top_pane_g_ParamLimits

0x9620,	// (0x00029641) sctrl_sk_top_pane_t1_ParamLimits

0x9606,	// (0x00029627) aid_touch_sctrl_bottom_ParamLimits

0x9620,	// (0x00029641) sctrl_sk_bottom_pane_t1_ParamLimits

0xd950,	// (0x0002d971) aid_area_touch_clock

0x97f7,	// (0x00029818) aid_vkb2_area_top_pane_cell_ParamLimits

0x97f7,	// (0x00029818) aid_vkb2_area_top_pane_cell

0x9945,	// (0x00029966) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9945,	// (0x00029966) aid_vkb2_area_bottom_pane_cell

0xdebf,	// (0x0002dee0) popup_char_count_window

0xe349,	// (0x0002e36a) popup_char_count_window_g1

0xe352,	// (0x0002e373) popup_char_count_window_g2

0xe35b,	// (0x0002e37c) popup_char_count_window_g3

0x0002,

0xfdac,	// (0x0002fdcd) popup_char_count_window_g

0xe364,	// (0x0002e385) popup_char_count_window_t1

0x96b9,	// (0x000296da) popup_fep_char_preview_window_ParamLimits

0x96b9,	// (0x000296da) popup_fep_char_preview_window

0x9815,	// (0x00029836) vkb2_top_candi_pane_ParamLimits

0x9815,	// (0x00029836) vkb2_top_candi_pane

0xe372,	// (0x0002e393) cell_vkb2_top_candi_pane_ParamLimits

0xe372,	// (0x0002e393) cell_vkb2_top_candi_pane

0x8d11,	// (0x00028d32) bg_popup_fep_char_preview_window_ParamLimits

0x8d11,	// (0x00028d32) bg_popup_fep_char_preview_window

0x9c2c,	// (0x00029c4d) popup_fep_char_preview_window_t1_ParamLimits

0x9c2c,	// (0x00029c4d) popup_fep_char_preview_window_t1

0xe3bc,	// (0x0002e3dd) bg_popup_fep_char_preview_window_g1

0xe3c4,	// (0x0002e3e5) bg_popup_fep_char_preview_window_g2

0xe3cc,	// (0x0002e3ed) bg_popup_fep_char_preview_window_g3

0xe3d4,	// (0x0002e3f5) bg_popup_fep_char_preview_window_g4

0xe3dc,	// (0x0002e3fd) bg_popup_fep_char_preview_window_g5

0xe3e4,	// (0x0002e405) bg_popup_fep_char_preview_window_g6

0xe3ec,	// (0x0002e40d) bg_popup_fep_char_preview_window_g7

0xe3f4,	// (0x0002e415) bg_popup_fep_char_preview_window_g8

0xe3fc,	// (0x0002e41d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb3,	// (0x0002fdd4) bg_popup_fep_char_preview_window_g

0xc2b4,	// (0x0002c2d5) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b4,	// (0x0002c2d5) cell_vkb2_top_candi_pane_g1

0xc5cb,	// (0x0002c5ec) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5cb,	// (0x0002c5ec) cell_vkb2_top_candi_pane_g2

0xc5ec,	// (0x0002c60d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ec,	// (0x0002c60d) cell_vkb2_top_candi_pane_g3

0x9c6e,	// (0x00029c8f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9c6e,	// (0x00029c8f) cell_vkb2_top_candi_pane_g4

0xe404,	// (0x0002e425) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe404,	// (0x0002e425) cell_vkb2_top_candi_pane_g5

0xd7e1,	// (0x0002d802) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7e1,	// (0x0002d802) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc8,	// (0x0002fde9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc8,	// (0x0002fde9) cell_vkb2_top_candi_pane_g

0x9c8f,	// (0x00029cb0) cell_vkb2_top_candi_pane_t1

0x9055,	// (0x00029076) aid_size_touch_slider_mark_ParamLimits

0x9055,	// (0x00029076) aid_size_touch_slider_mark

0xe002,	// (0x0002e023) grid_graphic2_catg_pane_ParamLimits

0xe002,	// (0x0002e023) grid_graphic2_catg_pane

0xe0a0,	// (0x0002e0c1) popup_grid_graphic2_window_t1_ParamLimits

0xe0a0,	// (0x0002e0c1) popup_grid_graphic2_window_t1

0xe0b2,	// (0x0002e0d3) popup_grid_graphic2_window_t2_ParamLimits

0xe0b2,	// (0x0002e0d3) popup_grid_graphic2_window_t2

0x0001,

0xfd81,	// (0x0002fda2) popup_grid_graphic2_window_t_ParamLimits

0xfd81,	// (0x0002fda2) popup_grid_graphic2_window_t

0x1a14,	// (0x00021a35) bg_button_pane_cp05_ParamLimits

0xe225,	// (0x0002e246) cell_graphic2_control_pane_g1_ParamLimits

0xe425,	// (0x0002e446) cell_graphic2_catg_pane_ParamLimits

0xe425,	// (0x0002e446) cell_graphic2_catg_pane

0x1860,	// (0x00021881) bg_button_pane_cp12

0xe437,	// (0x0002e458) cell_graphic2_catg_pane_g1

0xd91b,	// (0x0002d93c) cell_tb_ext_pane_t1_ParamLimits

0x9a62,	// (0x00029a83) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9a62,	// (0x00029a83) vkb2_top_cell_right_narrow_pane

0x9a7a,	// (0x00029a9b) vkb2_top_cell_right_wide_pane_ParamLimits

0x9a7a,	// (0x00029a9b) vkb2_top_cell_right_wide_pane

0x922f,	// (0x00029250) bg_vkb2_func_pane_ParamLimits

0x922f,	// (0x00029250) bg_vkb2_func_pane

0x9aeb,	// (0x00029b0c) vkb2_top_cell_left_pane_g1_ParamLimits

0x922f,	// (0x00029250) bg_vkb2_fuc_pane_cp03_ParamLimits

0x922f,	// (0x00029250) bg_vkb2_fuc_pane_cp03

0x9b49,	// (0x00029b6a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8573,	// (0x00028594) bg_vkb2_func_pane_g1

0x857b,	// (0x0002859c) bg_vkb2_func_pane_g2

0x858b,	// (0x000285ac) bg_vkb2_func_pane_g3

0x8583,	// (0x000285a4) bg_vkb2_func_pane_g4

0x8593,	// (0x000285b4) bg_vkb2_func_pane_g5

0x859b,	// (0x000285bc) bg_vkb2_func_pane_g6

0x85a3,	// (0x000285c4) bg_vkb2_func_pane_g7

0x85ab,	// (0x000285cc) bg_vkb2_func_pane_g8

0x856b,	// (0x0002858c) bg_vkb2_func_pane_g9

0x0008,

0xfdd5,	// (0x0002fdf6) bg_vkb2_func_pane_g

0x922f,	// (0x00029250) bg_vkb2_fuc_pane_cp01_ParamLimits

0x922f,	// (0x00029250) bg_vkb2_fuc_pane_cp01

0x9aeb,	// (0x00029b0c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9aeb,	// (0x00029b0c) vkb2_top_cell_right_wide_pane_g1

0x922f,	// (0x00029250) bg_vkb2_fuc_pane_cp02_ParamLimits

0x922f,	// (0x00029250) bg_vkb2_fuc_pane_cp02

0x9cae,	// (0x00029ccf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9cae,	// (0x00029ccf) vkb2_top_cell_right_narrow_pane_g1

0xd534,	// (0x0002d555) aid_touch_area_decrease_ParamLimits

0xd534,	// (0x0002d555) aid_touch_area_decrease

0xd558,	// (0x0002d579) aid_touch_area_increase_ParamLimits

0xd558,	// (0x0002d579) aid_touch_area_increase

0xd570,	// (0x0002d591) aid_touch_area_mute_ParamLimits

0xd570,	// (0x0002d591) aid_touch_area_mute

0xd58c,	// (0x0002d5ad) aid_touch_area_slider_ParamLimits

0xd58c,	// (0x0002d5ad) aid_touch_area_slider

0xd676,	// (0x0002d697) popup_slider_window_g4_ParamLimits

0xd676,	// (0x0002d697) popup_slider_window_g4

0xd68e,	// (0x0002d6af) popup_slider_window_g5_ParamLimits

0xd68e,	// (0x0002d6af) popup_slider_window_g5

0xd6b0,	// (0x0002d6d1) popup_slider_window_g6_ParamLimits

0xd6b0,	// (0x0002d6d1) popup_slider_window_g6

0xd6ee,	// (0x0002d70f) popup_slider_window_t2_ParamLimits

0xd6ee,	// (0x0002d70f) popup_slider_window_t2

0x0001,

0xfccf,	// (0x0002fcf0) popup_slider_window_t_ParamLimits

0xfccf,	// (0x0002fcf0) popup_slider_window_t

0xd706,	// (0x0002d727) slider_pane_ParamLimits

0xd706,	// (0x0002d727) slider_pane

0xe440,	// (0x0002e461) slider_pane_g1_ParamLimits

0xe440,	// (0x0002e461) slider_pane_g1

0xe454,	// (0x0002e475) slider_pane_g2_ParamLimits

0xe454,	// (0x0002e475) slider_pane_g2

0xe46a,	// (0x0002e48b) slider_pane_g3_ParamLimits

0xe46a,	// (0x0002e48b) slider_pane_g3

0x0003,

0xfde8,	// (0x0002fe09) slider_pane_g_ParamLimits

0xfde8,	// (0x0002fe09) slider_pane_g

0x7f67,	// (0x00027f88) popup_tb_float_extension_window_ParamLimits

0x7f67,	// (0x00027f88) popup_tb_float_extension_window

0xe496,	// (0x0002e4b7) aid_size_cell_tb_float_ext

0x1860,	// (0x00021881) bg_popup_sub_window_cp28

0xe4a2,	// (0x0002e4c3) grid_tb_float_ext_pane

0xe4ac,	// (0x0002e4cd) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x0002e4cd) cell_tb_float_ext_pane

0xe4c6,	// (0x0002e4e7) cell_tb_float_ext_pane_g1

0xe4cf,	// (0x0002e4f0) grid_highlight_pane_cp12

0x9370,	// (0x00029391) cell_last_hwr_side_pane_ParamLimits

0x9370,	// (0x00029391) cell_last_hwr_side_pane

0xc044,	// (0x0002c065) cell_last_hwr_side_pane_g1

0xe4d8,	// (0x0002e4f9) cell_last_hwr_side_pane_g2

0x0001,

0xfdf1,	// (0x0002fe12) cell_last_hwr_side_pane_g

0x9a11,	// (0x00029a32) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9a11,	// (0x00029a32) vkb2_area_bottom_space_btn_pane

0xc2b4,	// (0x0002c2d5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf74,	// (0x0002df95) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9c8f,	// (0x00029cb0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9cce,	// (0x00029cef) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9cce,	// (0x00029cef) vkb2_area_bottom_space_btn_pane_g1

0x9d08,	// (0x00029d29) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9d08,	// (0x00029d29) vkb2_area_bottom_space_btn_pane_g2

0x9d3e,	// (0x00029d5f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9d3e,	// (0x00029d5f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf6,	// (0x0002fe17) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf6,	// (0x0002fe17) vkb2_area_bottom_space_btn_pane_g

0x92e4,	// (0x00029305) cel_fep_hwr_func_pane_ParamLimits

0x92e4,	// (0x00029305) cel_fep_hwr_func_pane

0x9320,	// (0x00029341) cell_hwr_side_button_pane_ParamLimits

0x9320,	// (0x00029341) cell_hwr_side_button_pane

0xd950,	// (0x0002d971) aid_area_touch_clock_ParamLimits

0x1a14,	// (0x00021a35) bg_uniindi_top_pane_ParamLimits

0xd962,	// (0x0002d983) uniindi_top_pane_g1_ParamLimits

0xd978,	// (0x0002d999) uniindi_top_pane_g2_ParamLimits

0xd984,	// (0x0002d9a5) uniindi_top_pane_g3_ParamLimits

0xd995,	// (0x0002d9b6) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002fd28) uniindi_top_pane_g_ParamLimits

0xd9a2,	// (0x0002d9c3) uniindi_top_pane_t1_ParamLimits

0x1a14,	// (0x00021a35) bg_vkb2_func_pane_cp01_ParamLimits

0x1a14,	// (0x00021a35) bg_vkb2_func_pane_cp01

0xe4e1,	// (0x0002e502) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e1,	// (0x0002e502) cel_fep_hwr_func_pane_g1

0x1a14,	// (0x00021a35) bg_vkb2_func_pane_cp02_ParamLimits

0x1a14,	// (0x00021a35) bg_vkb2_func_pane_cp02

0xe4e1,	// (0x0002e502) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e1,	// (0x0002e502) cell_hwr_side_button_pane_g1

0x83bf,	// (0x000283e0) status_pane_g4_ParamLimits

0x83bf,	// (0x000283e0) status_pane_g4

0x83d9,	// (0x000283fa) status_pane_t1

0xbd7f,	// (0x0002bda0) form2_midp_gauge_slider_cont_pane

0xbd87,	// (0x0002bda8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd99,	// (0x0002bdba) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdab,	// (0x0002bdcc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0002fafb) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbd,	// (0x0002bdde) form2_midp_slider_pane_ParamLimits

0x9681,	// (0x000296a2) aid_size_cell_func_vkb2_ParamLimits

0x9681,	// (0x000296a2) aid_size_cell_func_vkb2

0xe482,	// (0x0002e4a3) slider_pane_g4_ParamLimits

0xe482,	// (0x0002e4a3) slider_pane_g4

0x9d88,	// (0x00029da9) form2_midp_gauge_slider_pane_t2_cp01

0x9d96,	// (0x00029db7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d96,	// (0x00029db7) form2_midp_gauge_slider_pane_t3_cp01

0x9db3,	// (0x00029dd4) form2_midp_slider_pane_cp01

0x1860,	// (0x00021881) navi_smil_pane

0xe51a,	// (0x0002e53b) navi_smil_pane_g1

0xe522,	// (0x0002e543) navi_smil_pane_t1

0xe4ef,	// (0x0002e510) form2_midp_slider_pane_g1

0xe4f8,	// (0x0002e519) form2_midp_slider_pane_g2

0xe500,	// (0x0002e521) form2_midp_slider_pane_g3

0xe4ef,	// (0x0002e510) form2_midp_slider_pane_g4

0xe508,	// (0x0002e529) form2_midp_slider_pane_g5

0x0004,

0xfdff,	// (0x0002fe20) form2_midp_slider_pane_g

0x9d78,	// (0x00029d99) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9d78,	// (0x00029d99) vkb2_area_bottom_space_btn_pane_g4

0x81ee,	// (0x0002820f) lc0_navi_pane_ParamLimits

0x81ee,	// (0x0002820f) lc0_navi_pane

0x8264,	// (0x00028285) lc0_stat_indi_pane_ParamLimits

0x8264,	// (0x00028285) lc0_stat_indi_pane

0x827b,	// (0x0002829c) ls0_title_pane_ParamLimits

0x827b,	// (0x0002829c) ls0_title_pane

0x1d0a,	// (0x00021d2b) bg_popup_sub_pane_cp14_ParamLimits

0xd937,	// (0x0002d958) list_uniindi_pane_ParamLimits

0xd943,	// (0x0002d964) uniindi_top_pane_ParamLimits

0xd9df,	// (0x0002da00) list_single_uniindi_pane_g1_ParamLimits

0xd9f2,	// (0x0002da13) list_single_uniindi_pane_t1_ParamLimits

0x9dbc,	// (0x00029ddd) lc0_stat_clock_pane_ParamLimits

0x9dbc,	// (0x00029ddd) lc0_stat_clock_pane

0xe530,	// (0x0002e551) lc0_stat_indi_pane_g1_ParamLimits

0xe530,	// (0x0002e551) lc0_stat_indi_pane_g1

0xe53d,	// (0x0002e55e) lc0_stat_indi_pane_g2_ParamLimits

0xe53d,	// (0x0002e55e) lc0_stat_indi_pane_g2

0x0001,

0xfe0a,	// (0x0002fe2b) lc0_stat_indi_pane_g_ParamLimits

0xfe0a,	// (0x0002fe2b) lc0_stat_indi_pane_g

0x9dc9,	// (0x00029dea) lc0_uni_indicator_pane_ParamLimits

0x9dc9,	// (0x00029dea) lc0_uni_indicator_pane

0xe54a,	// (0x0002e56b) ls0_title_pane_g1_ParamLimits

0xe54a,	// (0x0002e56b) ls0_title_pane_g1

0xe55e,	// (0x0002e57f) ls0_title_pane_t1_ParamLimits

0xe55e,	// (0x0002e57f) ls0_title_pane_t1

0x9dd6,	// (0x00029df7) lc0_uni_indicator_pane_g1_ParamLimits

0x9dd6,	// (0x00029df7) lc0_uni_indicator_pane_g1

0xe594,	// (0x0002e5b5) lc0_stat_clock_pane_t1

0x1860,	// (0x00021881) main_ai5_pane

0xe5a2,	// (0x0002e5c3) ai5_sk_pane_ParamLimits

0xe5a2,	// (0x0002e5c3) ai5_sk_pane

0xe5af,	// (0x0002e5d0) cell_ai5_widget_pane_ParamLimits

0xe5af,	// (0x0002e5d0) cell_ai5_widget_pane

0xe66f,	// (0x0002e690) aid_size_cell_widget_grid

0xe67d,	// (0x0002e69e) bg_ai5_widget_pane_ParamLimits

0xe67d,	// (0x0002e69e) bg_ai5_widget_pane

0xe6f9,	// (0x0002e71a) cell_ai5_widget_pane_g2

0xe70d,	// (0x0002e72e) cell_ai5_widget_pane_g3

0xe727,	// (0x0002e748) cell_ai5_widget_pane_g4

0xe737,	// (0x0002e758) cell_ai5_widget_pane_g5

0xe747,	// (0x0002e768) cell_ai5_widget_pane_g6

0xe753,	// (0x0002e774) cell_ai5_widget_pane_g7

0xe7bf,	// (0x0002e7e0) cell_ai5_widget_pane_t1_ParamLimits

0xe7bf,	// (0x0002e7e0) cell_ai5_widget_pane_t1

0xe7dc,	// (0x0002e7fd) cell_ai5_widget_pane_t2_ParamLimits

0xe7dc,	// (0x0002e7fd) cell_ai5_widget_pane_t2

0xe7f4,	// (0x0002e815) cell_ai5_widget_pane_t3_ParamLimits

0xe7f4,	// (0x0002e815) cell_ai5_widget_pane_t3

0xe80c,	// (0x0002e82d) cell_ai5_widget_pane_t4_ParamLimits

0xe80c,	// (0x0002e82d) cell_ai5_widget_pane_t4

0xe832,	// (0x0002e853) cell_ai5_widget_pane_t5_ParamLimits

0xe832,	// (0x0002e853) cell_ai5_widget_pane_t5

0xe851,	// (0x0002e872) cell_ai5_widget_pane_t6_ParamLimits

0xe851,	// (0x0002e872) cell_ai5_widget_pane_t6

0xe863,	// (0x0002e884) cell_ai5_widget_pane_t7_ParamLimits

0xe863,	// (0x0002e884) cell_ai5_widget_pane_t7

0xe882,	// (0x0002e8a3) cell_ai5_widget_pane_t8_ParamLimits

0xe882,	// (0x0002e8a3) cell_ai5_widget_pane_t8

0x000b,

0xfe2a,	// (0x0002fe4b) cell_ai5_widget_pane_t_ParamLimits

0xfe2a,	// (0x0002fe4b) cell_ai5_widget_pane_t

0xe906,	// (0x0002e927) grid_ai5_widget_pane

0x1d0a,	// (0x00021d2b) highlight_cell_ai5_widget_pane_ParamLimits

0x1d0a,	// (0x00021d2b) highlight_cell_ai5_widget_pane

0xe914,	// (0x0002e935) ai5_sk_left_pane

0xe91e,	// (0x0002e93f) ai5_sk_middle_pane

0xe928,	// (0x0002e949) ai5_sk_right_pane

0xe932,	// (0x0002e953) bg_ai5_widget_pane_g1_ParamLimits

0xe932,	// (0x0002e953) bg_ai5_widget_pane_g1

0xe93e,	// (0x0002e95f) bg_ai5_widget_pane_g2_ParamLimits

0xe93e,	// (0x0002e95f) bg_ai5_widget_pane_g2

0xe94a,	// (0x0002e96b) bg_ai5_widget_pane_g3_ParamLimits

0xe94a,	// (0x0002e96b) bg_ai5_widget_pane_g3

0xe956,	// (0x0002e977) bg_ai5_widget_pane_g4_ParamLimits

0xe956,	// (0x0002e977) bg_ai5_widget_pane_g4

0xe962,	// (0x0002e983) bg_ai5_widget_pane_g5_ParamLimits

0xe962,	// (0x0002e983) bg_ai5_widget_pane_g5

0xe96e,	// (0x0002e98f) bg_ai5_widget_pane_g6_ParamLimits

0xe96e,	// (0x0002e98f) bg_ai5_widget_pane_g6

0xe97a,	// (0x0002e99b) bg_ai5_widget_pane_g7_ParamLimits

0xe97a,	// (0x0002e99b) bg_ai5_widget_pane_g7

0xe986,	// (0x0002e9a7) bg_ai5_widget_pane_g8_ParamLimits

0xe986,	// (0x0002e9a7) bg_ai5_widget_pane_g8

0xe992,	// (0x0002e9b3) bg_ai5_widget_pane_g9_ParamLimits

0xe992,	// (0x0002e9b3) bg_ai5_widget_pane_g9

0x0008,

0xfe43,	// (0x0002fe64) bg_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0002fe64) bg_ai5_widget_pane_g

0xe9c4,	// (0x0002e9e5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c4,	// (0x0002e9e5) cell_shortcut_ai5_widget_pane

0x261c,	// (0x0002263d) bg_cell_shortcut_ai5_widget_pane

0xe9d5,	// (0x0002e9f6) cell_grid_ai5_widget_pane_g1

0x261c,	// (0x0002263d) highlight_cell_shortcut_ai5_widget_pane

0x857b,	// (0x0002859c) ai5_sk_left_pane_g1

0xe9de,	// (0x0002e9ff) ai5_sk_left_pane_g2

0xe9e6,	// (0x0002ea07) ai5_sk_left_pane_g3

0xe9ee,	// (0x0002ea0f) ai5_sk_left_pane_g4

0x0003,

0xfe56,	// (0x0002fe77) ai5_sk_left_pane_g

0xe9f6,	// (0x0002ea17) ai5_sk_left_pane_t1

0x8573,	// (0x00028594) ai5_sk_right_pane_g1

0xea04,	// (0x0002ea25) ai5_sk_right_pane_g2

0xea0c,	// (0x0002ea2d) ai5_sk_right_pane_g3

0xea14,	// (0x0002ea35) ai5_sk_right_pane_g4

0x0003,

0xfe5f,	// (0x0002fe80) ai5_sk_right_pane_g

0xea1c,	// (0x0002ea3d) ai5_sk_right_pane_t1

0x8573,	// (0x00028594) ai5_sk_middle_pane_g1

0x857b,	// (0x0002859c) ai5_sk_middle_pane_g2

0x8593,	// (0x000285b4) ai5_sk_middle_pane_g3

0xea0c,	// (0x0002ea2d) ai5_sk_middle_pane_g4

0xe9e6,	// (0x0002ea07) ai5_sk_middle_pane_g5

0xea2a,	// (0x0002ea4b) ai5_sk_middle_pane_g6

0xea32,	// (0x0002ea53) ai5_sk_middle_pane_g7

0x0006,

0xfe68,	// (0x0002fe89) ai5_sk_middle_pane_g

0x8074,	// (0x00028095) aid_touch_area_size_lc0_ParamLimits

0x8074,	// (0x00028095) aid_touch_area_size_lc0

0x946f,	// (0x00029490) cell_hwr_candidate_pane_t1_ParamLimits

0x8090,	// (0x000280b1) aid_touch_navi_pane

0x8369,	// (0x0002838a) status_dt_navi_pane_ParamLimits

0x8369,	// (0x0002838a) status_dt_navi_pane

0x8376,	// (0x00028397) status_dt_sta_pane_ParamLimits

0x8376,	// (0x00028397) status_dt_sta_pane

0xea3a,	// (0x0002ea5b) dt_sta_controll_pane

0xea47,	// (0x0002ea68) dt_sta_indi_pane

0xea58,	// (0x0002ea79) dt_sta_title_pane

0x1a14,	// (0x00021a35) bg_dt_sta_indi_pane_ParamLimits

0x1a14,	// (0x00021a35) bg_dt_sta_indi_pane

0xea6b,	// (0x0002ea8c) dt_sta_battery_pane

0xea73,	// (0x0002ea94) dt_sta_indi_pane_g1

0xea7c,	// (0x0002ea9d) dt_sta_indi_pane_g2

0xea85,	// (0x0002eaa6) dt_sta_indi_pane_g3

0x0002,

0xfe77,	// (0x0002fe98) dt_sta_indi_pane_g

0xea8e,	// (0x0002eaaf) dt_sta_signal_pane

0x1d0a,	// (0x00021d2b) bg_dt_sta_title_pane_ParamLimits

0x1d0a,	// (0x00021d2b) bg_dt_sta_title_pane

0xa872,	// (0x0002a893) dt_sta_title_pane_g1

0xea97,	// (0x0002eab8) dt_sta_title_pane_t1_ParamLimits

0xea97,	// (0x0002eab8) dt_sta_title_pane_t1

0x1860,	// (0x00021881) bg_dt_sta_control_pane

0xeaac,	// (0x0002eacd) dt_sta_controll_pane_g1

0xeab5,	// (0x0002ead6) bg_dt_sta_title_pane_g1

0xeabe,	// (0x0002eadf) bg_dt_sta_title_pane_g2

0xeac7,	// (0x0002eae8) bg_dt_sta_title_pane_g3

0x0002,

0xfe7e,	// (0x0002fe9f) bg_dt_sta_title_pane_g

0xc044,	// (0x0002c065) bg_dt_sta_indi_pane_g1

0xead0,	// (0x0002eaf1) dt_sta_signal_pane_g1

0xead8,	// (0x0002eaf9) dt_sta_signal_pane_g2

0x0001,

0xfe85,	// (0x0002fea6) dt_sta_signal_pane_g

0xeae0,	// (0x0002eb01) dt_sta_battery_pane_g1

0xeae9,	// (0x0002eb0a) dt_sta_battery_pane_t1

0xc044,	// (0x0002c065) bg_dt_sta_control_pane_g1

0x224d,	// (0x0002226e) fep_china_uni_eep_pane

0x2255,	// (0x00022276) fep_china_uni_entry_pane_ParamLimits

0x2265,	// (0x00022286) popup_fep_china_uni_window_g1_ParamLimits

0x2275,	// (0x00022296) popup_fep_china_uni_window_g2_ParamLimits

0x2275,	// (0x00022296) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0002f70a) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0002f70a) popup_fep_china_uni_window_g

0xeaf8,	// (0x0002eb19) fep_china_uni_eep_pane_g1

0xeb00,	// (0x0002eb21) fep_china_uni_eep_pane_t1

0xe511,	// (0x0002e532) aid_touch_area_size_smil_player

0x81e6,	// (0x00028207) lc0_clock_pane

0x83cd,	// (0x000283ee) status_pane_g5_ParamLimits

0x83cd,	// (0x000283ee) status_pane_g5

0x7c28,	// (0x00027c49) popup_keymap_window

0x838b,	// (0x000283ac) status_icon_pane

0xe70d,	// (0x0002e72e) cell_ai5_widget_pane_g3_ParamLimits

0xe727,	// (0x0002e748) cell_ai5_widget_pane_g4_ParamLimits

0xe737,	// (0x0002e758) cell_ai5_widget_pane_g5_ParamLimits

0xe75f,	// (0x0002e780) cell_ai5_widget_pane_g8_ParamLimits

0xe75f,	// (0x0002e780) cell_ai5_widget_pane_g8

0xe773,	// (0x0002e794) cell_ai5_widget_pane_g9_ParamLimits

0xe773,	// (0x0002e794) cell_ai5_widget_pane_g9

0xe787,	// (0x0002e7a8) cell_ai5_widget_pane_g10_ParamLimits

0xe787,	// (0x0002e7a8) cell_ai5_widget_pane_g10

0xeb0f,	// (0x0002eb30) status_icon_pane_g1

0x1860,	// (0x00021881) bg_popup_sub_pane_cp13

0xeb17,	// (0x0002eb38) popup_keymap_window_t1

0x797d,	// (0x0002799e) control_pane_g6_ParamLimits

0x797d,	// (0x0002799e) control_pane_g6

0x798a,	// (0x000279ab) control_pane_g7_ParamLimits

0x798a,	// (0x000279ab) control_pane_g7

0x7997,	// (0x000279b8) control_pane_g8_ParamLimits

0x7997,	// (0x000279b8) control_pane_g8

0xea3a,	// (0x0002ea5b) dt_sta_controll_pane_ParamLimits

0xea47,	// (0x0002ea68) dt_sta_indi_pane_ParamLimits

0xea58,	// (0x0002ea79) dt_sta_title_pane_ParamLimits

0x1beb,	// (0x00021c0c) aid_size_touch_scroll_bar_cale

0x67d7,	// (0x000267f8) popup_discreet_window_ParamLimits

0x67d7,	// (0x000267f8) popup_discreet_window

0x6851,	// (0x00026872) popup_sk_window

0x8d11,	// (0x00028d32) bg_popup_sub_pane_cp28_ParamLimits

0x8d11,	// (0x00028d32) bg_popup_sub_pane_cp28

0xeb25,	// (0x0002eb46) popup_discreet_window_g1_ParamLimits

0xeb25,	// (0x0002eb46) popup_discreet_window_g1

0xeb45,	// (0x0002eb66) popup_discreet_window_t1_ParamLimits

0xeb45,	// (0x0002eb66) popup_discreet_window_t1

0xeb63,	// (0x0002eb84) popup_discreet_window_t2_ParamLimits

0xeb63,	// (0x0002eb84) popup_discreet_window_t2

0x0002,

0xfe8a,	// (0x0002feab) popup_discreet_window_t_ParamLimits

0xfe8a,	// (0x0002feab) popup_discreet_window_t

0x9dea,	// (0x00029e0b) popup_sk_window_g1

0x9df4,	// (0x00029e15) popup_sk_window_g2

0x0001,

0xfe91,	// (0x0002feb2) popup_sk_window_g

0x9dfc,	// (0x00029e1d) popup_sk_window_t1

0x9e0a,	// (0x00029e2b) popup_sk_window_t1_copy1

0xe6f9,	// (0x0002e71a) cell_ai5_widget_pane_g2_ParamLimits

0xe894,	// (0x0002e8b5) cell_ai5_widget_pane_t9_ParamLimits

0xe894,	// (0x0002e8b5) cell_ai5_widget_pane_t9

0x1860,	// (0x00021881) main_fep_fshwr2_pane

0x9e18,	// (0x00029e39) aid_fshwr2_btn_pane

0x9e2c,	// (0x00029e4d) aid_fshwr2_syb_pane

0x9e40,	// (0x00029e61) aid_fshwr2_txt_pane

0x9e50,	// (0x00029e71) fshwr2_func_candi_pane

0x9e74,	// (0x00029e95) fshwr2_hwr_syb_pane

0x9e8e,	// (0x00029eaf) fshwr2_icf_pane

0x1860,	// (0x00021881) fshwr2_icf_bg_pane

0x9ebc,	// (0x00029edd) fshwr2_icf_pane_t1_ParamLimits

0x9ebc,	// (0x00029edd) fshwr2_icf_pane_t1

0x21ca,	// (0x000221eb) fshwr2_func_candi_pane_g1

0xebb5,	// (0x0002ebd6) fshwr2_func_candi_row_pane_ParamLimits

0xebb5,	// (0x0002ebd6) fshwr2_func_candi_row_pane

0x9ed5,	// (0x00029ef6) cell_fshwr2_syb_pane_ParamLimits

0x9ed5,	// (0x00029ef6) cell_fshwr2_syb_pane

0xe4e1,	// (0x0002e502) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e1,	// (0x0002e502) fshwr2_hwr_syb_pane_g1

0x1860,	// (0x00021881) bg_popup_call_pane_cp01

0x9ef8,	// (0x00029f19) fshwr2_func_candi_cell_pane_ParamLimits

0x9ef8,	// (0x00029f19) fshwr2_func_candi_cell_pane

0xa712,	// (0x0002a733) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa712,	// (0x0002a733) fshwr2_func_candi_cell_bg_pane

0x9f43,	// (0x00029f64) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f43,	// (0x00029f64) fshwr2_func_candi_cell_pane_g1

0x9f63,	// (0x00029f84) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f63,	// (0x00029f84) fshwr2_func_candi_cell_pane_t1

0x1860,	// (0x00021881) bg_button_pane_cp08

0x1eba,	// (0x00021edb) cell_fshwr2_syb_bg_pane

0x9f76,	// (0x00029f97) cell_fshwr2_syb_bg_pane_g1

0x9f8a,	// (0x00029fab) cell_fshwr2_syb_bg_pane_t1

0x1d0a,	// (0x00021d2b) main_tmo_pane

0xabab,	// (0x0002abcc) uni_indicator_pane_g1_ParamLimits

0xabbe,	// (0x0002abdf) uni_indicator_pane_g2_ParamLimits

0xabd0,	// (0x0002abf1) uni_indicator_pane_g3_ParamLimits

0xabdf,	// (0x0002ac00) uni_indicator_pane_g4_ParamLimits

0xabdf,	// (0x0002ac00) uni_indicator_pane_g4

0xabf3,	// (0x0002ac14) uni_indicator_pane_g5_ParamLimits

0xabf3,	// (0x0002ac14) uni_indicator_pane_g5

0xabf3,	// (0x0002ac14) uni_indicator_pane_g6_ParamLimits

0xabf3,	// (0x0002ac14) uni_indicator_pane_g6

0xf8e8,	// (0x0002f909) uni_indicator_pane_g_ParamLimits

0xd516,	// (0x0002d537) popup_tmo_note_window_ParamLimits

0xd516,	// (0x0002d537) popup_tmo_note_window

0x1d0a,	// (0x00021d2b) fshwr2_bg_pane

0x9f54,	// (0x00029f75) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f54,	// (0x00029f75) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe96,	// (0x0002feb7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe96,	// (0x0002feb7) fshwr2_func_candi_cell_pane_g

0xc044,	// (0x0002c065) bg_popup_window_pane_cp01

0x9fa0,	// (0x00029fc1) bg_popup_window_pane_g1_cp01

0xebdc,	// (0x0002ebfd) bg_popup_window_pane_cp22_ParamLimits

0xebdc,	// (0x0002ebfd) bg_popup_window_pane_cp22

0xebea,	// (0x0002ec0b) listscroll_tmo_link_pane_ParamLimits

0xebea,	// (0x0002ec0b) listscroll_tmo_link_pane

0xec2a,	// (0x0002ec4b) popup_tmo_note_window_g1_ParamLimits

0xec2a,	// (0x0002ec4b) popup_tmo_note_window_g1

0xec37,	// (0x0002ec58) tmo_note_info_pane_ParamLimits

0xec37,	// (0x0002ec58) tmo_note_info_pane

0xec51,	// (0x0002ec72) list_tmo_note_info_pane_g1_ParamLimits

0xec51,	// (0x0002ec72) list_tmo_note_info_pane_g1

0xec68,	// (0x0002ec89) list_tmo_note_info_pane_g2_ParamLimits

0xec68,	// (0x0002ec89) list_tmo_note_info_pane_g2

0x0001,

0xfe9b,	// (0x0002febc) list_tmo_note_info_pane_g_ParamLimits

0xfe9b,	// (0x0002febc) list_tmo_note_info_pane_g

0xec84,	// (0x0002eca5) list_tmo_note_info_text_pane_ParamLimits

0xec84,	// (0x0002eca5) list_tmo_note_info_text_pane

0xed05,	// (0x0002ed26) list_tmo_link_pane

0xed12,	// (0x0002ed33) scroll_pane_cp20

0xed1f,	// (0x0002ed40) list_single_tmo_link_pane_ParamLimits

0xed1f,	// (0x0002ed40) list_single_tmo_link_pane

0xed2f,	// (0x0002ed50) list_single_tmo_link_pane_t1

0xed3d,	// (0x0002ed5e) list_tmo_note_info_text_pane_t1_ParamLimits

0xed3d,	// (0x0002ed5e) list_tmo_note_info_text_pane_t1

0x6f35,	// (0x00026f56) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f35,	// (0x00026f56) aid_size_touch_scroll_bar_cp01

0x5a24,	// (0x00025a45) aid_size_touch_slider_marker

0x6839,	// (0x0002685a) popup_settings_window_ParamLimits

0x6839,	// (0x0002685a) popup_settings_window

0x5be9,	// (0x00025c0a) popup_candi_list_indi_window

0x8090,	// (0x000280b1) aid_touch_navi_pane_ParamLimits

0x95da,	// (0x000295fb) rs_clock_indi_pane

0x95e3,	// (0x00029604) sctrl_sk_bottom_pane_ParamLimits

0x95f4,	// (0x00029615) sctrl_sk_top_pane_ParamLimits

0x96d3,	// (0x000296f4) popup_fep_tooltip_window

0xe66f,	// (0x0002e690) aid_size_cell_widget_grid_ParamLimits

0xe6e4,	// (0x0002e705) cell_ai5_widget_pane_g1_ParamLimits

0xe6e4,	// (0x0002e705) cell_ai5_widget_pane_g1

0xe747,	// (0x0002e768) cell_ai5_widget_pane_g6_ParamLimits

0xe753,	// (0x0002e774) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0f,	// (0x0002fe30) cell_ai5_widget_pane_g_ParamLimits

0xfe0f,	// (0x0002fe30) cell_ai5_widget_pane_g

0xe8c3,	// (0x0002e8e4) cell_ai5_widget_pane_t10_ParamLimits

0xe8c3,	// (0x0002e8e4) cell_ai5_widget_pane_t10

0xe906,	// (0x0002e927) grid_ai5_widget_pane_ParamLimits

0xe99e,	// (0x0002e9bf) cell_contacts_ai5_widget_pane_ParamLimits

0xe99e,	// (0x0002e9bf) cell_contacts_ai5_widget_pane

0xeb78,	// (0x0002eb99) popup_discreet_window_t3_ParamLimits

0xeb78,	// (0x0002eb99) popup_discreet_window_t3

0x9ea6,	// (0x00029ec7) popup_fshwr2_char_preview_window_ParamLimits

0x9ea6,	// (0x00029ec7) popup_fshwr2_char_preview_window

0xeca2,	// (0x0002ecc3) tmo_note_info_pane_t1

0xecb7,	// (0x0002ecd8) tmo_note_info_pane_t2

0xeccc,	// (0x0002eced) tmo_note_info_pane_t3

0xece1,	// (0x0002ed02) tmo_note_info_pane_t4

0xecf3,	// (0x0002ed14) tmo_note_info_pane_t5

0x0004,

0xfea0,	// (0x0002fec1) tmo_note_info_pane_t

0xed05,	// (0x0002ed26) list_tmo_link_pane_ParamLimits

0xed12,	// (0x0002ed33) scroll_pane_cp20_ParamLimits

0x1860,	// (0x00021881) bg_popup_fep_char_preview_window_cp01

0xed56,	// (0x0002ed77) popup_fshwr2_char_preview_window_t1

0xed64,	// (0x0002ed85) popup_candi_list_indi_window_g1

0xed6d,	// (0x0002ed8e) bg_cell_contacts_ai5_widget_pane

0xed79,	// (0x0002ed9a) cell_contacts_ai5_widget_pane_g1

0xc72b,	// (0x0002c74c) cell_contacts_ai5_widget_pane_g2

0xed8e,	// (0x0002edaf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeab,	// (0x0002fecc) cell_contacts_ai5_widget_pane_g

0xed9a,	// (0x0002edbb) cell_contacts_ai5_widget_pane_t1

0x1d0a,	// (0x00021d2b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee11,	// (0x0002ee32) settings_container_pane

0x261c,	// (0x0002263d) listscroll_set_pane_copy1

0xb720,	// (0x0002b741) scroll_pane_cp121_copy1

0x8ab6,	// (0x00028ad7) set_content_pane_copy1

0xee1d,	// (0x0002ee3e) aid_height_set_list_copy1_ParamLimits

0xee1d,	// (0x0002ee3e) aid_height_set_list_copy1

0xadeb,	// (0x0002ae0c) aid_size_parent_copy1_ParamLimits

0xadeb,	// (0x0002ae0c) aid_size_parent_copy1

0xee29,	// (0x0002ee4a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee29,	// (0x0002ee4a) button_value_adjust_pane_cp6_copy1

0x1eba,	// (0x00021edb) list_highlight_pane_cp2_copy1_ParamLimits

0x1eba,	// (0x00021edb) list_highlight_pane_cp2_copy1

0xee3d,	// (0x0002ee5e) list_set_pane_copy1_ParamLimits

0xee3d,	// (0x0002ee5e) list_set_pane_copy1

0xedac,	// (0x0002edcd) main_pane_set_t1_copy1_ParamLimits

0xedac,	// (0x0002edcd) main_pane_set_t1_copy1

0xede6,	// (0x0002ee07) main_pane_set_t2_copy1_ParamLimits

0xede6,	// (0x0002ee07) main_pane_set_t2_copy1

0xeeea,	// (0x0002ef0b) main_pane_set_t3_copy1

0xeef8,	// (0x0002ef19) main_pane_set_t4_copy1

0xee05,	// (0x0002ee26) set_content_pane_g1_copy1_ParamLimits

0xee05,	// (0x0002ee26) set_content_pane_g1_copy1

0xef06,	// (0x0002ef27) setting_code_pane_copy1

0xef0e,	// (0x0002ef2f) setting_slider_graphic_pane_copy1

0xef0e,	// (0x0002ef2f) setting_slider_pane_copy1

0xef16,	// (0x0002ef37) setting_text_pane_copy1

0xef16,	// (0x0002ef37) setting_volume_pane_copy1

0xef06,	// (0x0002ef27) settings_code_pane_cp2_copy1

0xef1e,	// (0x0002ef3f) settings_code_pane_cp_copy1_ParamLimits

0xef1e,	// (0x0002ef3f) settings_code_pane_cp_copy1

0x9fa9,	// (0x00029fca) volume_set_pane_copy1

0xef32,	// (0x0002ef53) volume_set_pane_g10_copy1

0xef3a,	// (0x0002ef5b) volume_set_pane_g1_copy1

0xef42,	// (0x0002ef63) volume_set_pane_g2_copy1

0xef4a,	// (0x0002ef6b) volume_set_pane_g3_copy1

0xef52,	// (0x0002ef73) volume_set_pane_g4_copy1

0xef5a,	// (0x0002ef7b) volume_set_pane_g5_copy1

0xef62,	// (0x0002ef83) volume_set_pane_g6_copy1

0xef6a,	// (0x0002ef8b) volume_set_pane_g7_copy1

0xef72,	// (0x0002ef93) volume_set_pane_g8_copy1

0xef7a,	// (0x0002ef9b) volume_set_pane_g9_copy1

0x18d0,	// (0x000218f1) bg_set_opt_pane_cp_copy1_ParamLimits

0x18d0,	// (0x000218f1) bg_set_opt_pane_cp_copy1

0x9fb1,	// (0x00029fd2) setting_slider_pane_t1_copy1_ParamLimits

0x9fb1,	// (0x00029fd2) setting_slider_pane_t1_copy1

0x9fd0,	// (0x00029ff1) setting_slider_pane_t2_copy1_ParamLimits

0x9fd0,	// (0x00029ff1) setting_slider_pane_t2_copy1

0x9fea,	// (0x0002a00b) setting_slider_pane_t3_copy1_ParamLimits

0x9fea,	// (0x0002a00b) setting_slider_pane_t3_copy1

0xa002,	// (0x0002a023) slider_set_pane_copy1_ParamLimits

0xa002,	// (0x0002a023) slider_set_pane_copy1

0x1dd0,	// (0x00021df1) set_opt_bg_pane_g1_copy2

0x1dd8,	// (0x00021df9) set_opt_bg_pane_g2_copy2

0xef82,	// (0x0002efa3) set_opt_bg_pane_g3_copy2

0x1de8,	// (0x00021e09) set_opt_bg_pane_g4_copy2

0x1df0,	// (0x00021e11) set_opt_bg_pane_g5_copy2

0x1df8,	// (0x00021e19) set_opt_bg_pane_g6_copy2

0xef8c,	// (0x0002efad) set_opt_bg_pane_g7_copy2

0xef94,	// (0x0002efb5) set_opt_bg_pane_g8_copy2

0xef9e,	// (0x0002efbf) set_opt_bg_pane_g9_copy2

0xa018,	// (0x0002a039) aid_size_touch_slider_mark_copy1_ParamLimits

0xa018,	// (0x0002a039) aid_size_touch_slider_mark_copy1

0xefa8,	// (0x0002efc9) slider_set_pane_g1_copy1

0xa02c,	// (0x0002a04d) slider_set_pane_g2_copy1

0x9075,	// (0x00029096) slider_set_pane_g3_copy1_ParamLimits

0x9075,	// (0x00029096) slider_set_pane_g3_copy1

0x9089,	// (0x000290aa) slider_set_pane_g4_copy1_ParamLimits

0x9089,	// (0x000290aa) slider_set_pane_g4_copy1

0x90a1,	// (0x000290c2) slider_set_pane_g5_copy1_ParamLimits

0x90a1,	// (0x000290c2) slider_set_pane_g5_copy1

0x9075,	// (0x00029096) slider_set_pane_g6_copy1_ParamLimits

0x9075,	// (0x00029096) slider_set_pane_g6_copy1

0xa034,	// (0x0002a055) slider_set_pane_g7_copy1_ParamLimits

0xa034,	// (0x0002a055) slider_set_pane_g7_copy1

0x1874,	// (0x00021895) bg_set_opt_pane_cp2_copy1

0xefb1,	// (0x0002efd2) setting_slider_graphic_pane_g1_copy1

0xefba,	// (0x0002efdb) setting_slider_graphic_pane_t1_copy1

0xefca,	// (0x0002efeb) setting_slider_graphic_pane_t2_copy1

0xefda,	// (0x0002effb) slider_set_pane_cp_copy1

0xefea,	// (0x0002f00b) input_focus_pane_cp1_copy1

0xeff3,	// (0x0002f014) list_set_text_pane_copy1

0xeffb,	// (0x0002f01c) setting_text_pane_g1_copy1

0x6530,	// (0x00026551) set_text_pane_t1_copy1

0xefea,	// (0x0002f00b) input_focus_pane_cp2_copy1

0xeffb,	// (0x0002f01c) setting_code_pane_g1_copy1

0xf004,	// (0x0002f025) setting_code_pane_t1_copy1

0xf012,	// (0x0002f033) list_set_graphic_pane_copy1

0x1874,	// (0x00021895) bg_set_opt_pane_cp4_copy1

0x23a5,	// (0x000223c6) list_set_graphic_pane_g1_copy1_ParamLimits

0x23a5,	// (0x000223c6) list_set_graphic_pane_g1_copy1

0xf026,	// (0x0002f047) list_set_graphic_pane_g2_copy1

0x23bd,	// (0x000223de) list_set_graphic_pane_t1_copy1_ParamLimits

0x23bd,	// (0x000223de) list_set_graphic_pane_t1_copy1

0xc044,	// (0x0002c065) rs_clock_indi_pane_g1

0xf02e,	// (0x0002f04f) rs_clock_indi_pane_t1

0xf03c,	// (0x0002f05d) rs_indi_pane

0xf044,	// (0x0002f065) rs_indi_pane_g1

0xf04d,	// (0x0002f06e) rs_indi_pane_g2

0xed64,	// (0x0002ed85) rs_indi_pane_g3

0x0002,

0xfeb2,	// (0x0002fed3) rs_indi_pane_g

0x261c,	// (0x0002263d) bg_popup_preview_window_pane_cp03

0xf056,	// (0x0002f077) popup_fep_tooltip_window_t1

0xccc5,	// (0x0002cce6) popup_note2_window_g2_ParamLimits

0xccc5,	// (0x0002cce6) popup_note2_window_g2

0x0001,

0xfc46,	// (0x0002fc67) popup_note2_window_g_ParamLimits

0xfc46,	// (0x0002fc67) popup_note2_window_g

0xd1b2,	// (0x0002d1d3) bg_popup_sub_pane_cp11_ParamLimits

0xd1bf,	// (0x0002d1e0) cell_ai3_links_pane_g1_ParamLimits

0xd1d6,	// (0x0002d1f7) cell_ai3_links_pane_t1

0x6530,	// (0x00026551) set_text_pane_t1_copy1_ParamLimits

0x255e,	// (0x0002257f) cell_graphic_popup_pane_cp2_ParamLimits

0x255e,	// (0x0002257f) cell_graphic_popup_pane_cp2

0xf064,	// (0x0002f085) cell_graphic_popup_pane_g1_cp2

0x1b6e,	// (0x00021b8f) cell_graphic_popup_pane_g2_cp2

0xf06c,	// (0x0002f08d) cell_graphic_popup_pane_g3_cp2

0xf074,	// (0x0002f095) cell_graphic_popup_pane_t2_cp2

0x1b7f,	// (0x00021ba0) grid_highlight_pane_cp3_cp2

0x2047,	// (0x00022068) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1d0a,	// (0x00021d2b) main_tmo_pane_ParamLimits

0xd50a,	// (0x0002d52b) popup_tmo_big_image_note_window

0xe6d3,	// (0x0002e6f4) cell_ai5_widget_list_pane

0xe6db,	// (0x0002e6fc) cell_ai5_widget_lrg_icon_pane

0xeca2,	// (0x0002ecc3) tmo_note_info_pane_t1_ParamLimits

0xecb7,	// (0x0002ecd8) tmo_note_info_pane_t2_ParamLimits

0xeccc,	// (0x0002eced) tmo_note_info_pane_t3_ParamLimits

0xece1,	// (0x0002ed02) tmo_note_info_pane_t4_ParamLimits

0xecf3,	// (0x0002ed14) tmo_note_info_pane_t5_ParamLimits

0xfea0,	// (0x0002fec1) tmo_note_info_pane_t_ParamLimits

0xee11,	// (0x0002ee32) settings_container_pane_ParamLimits

0xefe2,	// (0x0002f003) indicator_popup_pane_cp5

0xefe2,	// (0x0002f003) indicator_popup_pane_cp6

0xf012,	// (0x0002f033) list_set_graphic_pane_copy1_ParamLimits

0x1860,	// (0x00021881) bg_popup_window_pane_cp23

0xf082,	// (0x0002f0a3) popup_tmo_big_image_note_window_g1

0xf08b,	// (0x0002f0ac) popup_tmo_big_image_note_window_t1

0xf09b,	// (0x0002f0bc) popup_tmo_big_image_note_window_t2

0xf0ab,	// (0x0002f0cc) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb9,	// (0x0002feda) popup_tmo_big_image_note_window_t

0xc044,	// (0x0002c065) cell_ai5_widget_lrg_icon_pane_g1

0xf0bb,	// (0x0002f0dc) cell_ai5_widget_lrg_icon_pane_t1

0xf0c9,	// (0x0002f0ea) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c9,	// (0x0002f0ea) cell_ai5_widget_list_row_pane

0xf0e0,	// (0x0002f101) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e0,	// (0x0002f101) cell_ai5_widget_list_row_pane_g1

0xf0ed,	// (0x0002f10e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ed,	// (0x0002f10e) cell_ai5_widget_list_row_pane_t1

0xf118,	// (0x0002f139) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf118,	// (0x0002f139) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec0,	// (0x0002fee1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec0,	// (0x0002fee1) cell_ai5_widget_list_row_pane_t

0x1860,	// (0x00021881) main_fep_vtchi_ss_pane

0xf168,	// (0x0002f189) popup_fep_char_pre_window

0xf170,	// (0x0002f191) popup_fep_ituss_window

0xf19c,	// (0x0002f1bd) popup_fep_vkbss_window

0x1eba,	// (0x00021edb) grid_vkbss_keypad_pane_ParamLimits

0x1eba,	// (0x00021edb) grid_vkbss_keypad_pane

0xf1dc,	// (0x0002f1fd) ituss_keypad_pane

0xa054,	// (0x0002a075) aid_vkbss_key_offset_ParamLimits

0xa054,	// (0x0002a075) aid_vkbss_key_offset

0xa060,	// (0x0002a081) cell_vkbss_key_pane_ParamLimits

0xa060,	// (0x0002a081) cell_vkbss_key_pane

0xf1ec,	// (0x0002f20d) bg_cell_vkbss_key_g1_ParamLimits

0xf1ec,	// (0x0002f20d) bg_cell_vkbss_key_g1

0xf1f8,	// (0x0002f219) cell_vkbss_key_3p_pane_ParamLimits

0xf1f8,	// (0x0002f219) cell_vkbss_key_3p_pane

0xf22e,	// (0x0002f24f) cell_vkbss_key_g1_ParamLimits

0xf22e,	// (0x0002f24f) cell_vkbss_key_g1

0xf264,	// (0x0002f285) cell_vkbss_key_t1_ParamLimits

0xf264,	// (0x0002f285) cell_vkbss_key_t1

0xa0b8,	// (0x0002a0d9) cell_ituss_key_pane_ParamLimits

0xa0b8,	// (0x0002a0d9) cell_ituss_key_pane

0xf2c0,	// (0x0002f2e1) bg_cell_ituss_key_g1_ParamLimits

0xf2c0,	// (0x0002f2e1) bg_cell_ituss_key_g1

0xf2cc,	// (0x0002f2ed) cell_ituss_key_pane_g1_ParamLimits

0xf2cc,	// (0x0002f2ed) cell_ituss_key_pane_g1

0xa0c9,	// (0x0002a0ea) cell_ituss_key_pane_g2_ParamLimits

0xa0c9,	// (0x0002a0ea) cell_ituss_key_pane_g2

0x0005,

0xfec7,	// (0x0002fee8) cell_ituss_key_pane_g_ParamLimits

0xfec7,	// (0x0002fee8) cell_ituss_key_pane_g

0xa14d,	// (0x0002a16e) cell_ituss_key_t1_ParamLimits

0xa14d,	// (0x0002a16e) cell_ituss_key_t1

0xa187,	// (0x0002a1a8) cell_ituss_key_t2_ParamLimits

0xa187,	// (0x0002a1a8) cell_ituss_key_t2

0xa1b9,	// (0x0002a1da) cell_ituss_key_t3_ParamLimits

0xa1b9,	// (0x0002a1da) cell_ituss_key_t3

0xa1ea,	// (0x0002a20b) cell_ituss_key_t4_ParamLimits

0xa1ea,	// (0x0002a20b) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x0002fef5) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x0002fef5) cell_ituss_key_t

0xf2f2,	// (0x0002f313) cell_vkbss_key_3p_pane_g1

0xf2fa,	// (0x0002f31b) cell_vkbss_key_3p_pane_g2

0xf302,	// (0x0002f323) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x0002ff00) cell_vkbss_key_3p_pane_g

0x261c,	// (0x0002263d) bg_popup_fep_char_preview_window_cp02

0xf30a,	// (0x0002f32b) popup_fep_char_pre_window_t1

0xe665,	// (0x0002e686) main_ai5_sk_pane

0xed6d,	// (0x0002ed8e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed79,	// (0x0002ed9a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc72b,	// (0x0002c74c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8e,	// (0x0002edaf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeab,	// (0x0002fecc) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9a,	// (0x0002edbb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1d0a,	// (0x00021d2b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf318,	// (0x0002f339) main_ai5_sk_pane_g1

0x8b52,	// (0x00028b73) popup_query_code_window_g1

0xf186,	// (0x0002f1a7) popup_fep_vkb_icf_pane

0xf1b3,	// (0x0002f1d4) popup_fep_vtchi_icf_pane

0xf321,	// (0x0002f342) bg_icf_pane

0xf321,	// (0x0002f342) list_vkb_icf_pane

0xf32d,	// (0x0002f34e) bg_icf_pane_cp01

0xf340,	// (0x0002f361) vtchi_icf_list_pane

0xf3a0,	// (0x0002f3c1) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x0002f3c1) list_vkb_icf_pane_t1

0xf3c2,	// (0x0002f3e3) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x0002f3e3) vtchi_icf_list_pane_t1

0xf170,	// (0x0002f191) popup_fep_ituss_window_ParamLimits

0xf1b3,	// (0x0002f1d4) popup_fep_vtchi_icf_pane_ParamLimits

0xf1dc,	// (0x0002f1fd) ituss_keypad_pane_ParamLimits

0xa04a,	// (0x0002a06b) ituss_sks_pane

0xf321,	// (0x0002f342) bg_icf_pane_ParamLimits

0xf140,	// (0x0002f161) icf_edit_indi_pane_ParamLimits

0xf140,	// (0x0002f161) icf_edit_indi_pane

0xf321,	// (0x0002f342) list_vkb_icf_pane_ParamLimits

0xf32d,	// (0x0002f34e) bg_icf_pane_cp01_ParamLimits

0xf15b,	// (0x0002f17c) icf_edit_indi_pane_cp01_ParamLimits

0xf15b,	// (0x0002f17c) icf_edit_indi_pane_cp01

0xf340,	// (0x0002f361) vtchi_query_pane

0xe4e1,	// (0x0002e502) icf_edit_indi_pane_g1_ParamLimits

0xe4e1,	// (0x0002e502) icf_edit_indi_pane_g1

0xf43a,	// (0x0002f45b) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002f45b) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002ff2b) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002ff2b) icf_edit_indi_pane_g

0xf44e,	// (0x0002f46f) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002f404) bg_input_focus_pane_cp042

0x1be2,	// (0x00021c03) vtchi_button_pane

0xf3ec,	// (0x0002f40d) vtchi_query_pane_t1

0xf3fa,	// (0x0002f41b) vtchi_query_pane_t2

0xf408,	// (0x0002f429) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002ff1a) vtchi_query_pane_t

0x1860,	// (0x00021881) bg_button_pane_cp13

0xf416,	// (0x0002f437) vtchi_button_pane_g1

0xa22d,	// (0x0002a24e) ituss_sks_pane_g1

0xa238,	// (0x0002a259) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002ff21) ituss_sks_pane_g

0xf41e,	// (0x0002f43f) ituss_sks_pane_t1

0xf42c,	// (0x0002f44d) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002ff26) ituss_sks_pane_t

0xbab8,	// (0x0002bad9) indicator_nsta_pane_cp_g1

0xbac1,	// (0x0002bae2) indicator_nsta_pane_cp_g2

0xbac9,	// (0x0002baea) indicator_nsta_pane_cp_g3

0xbad1,	// (0x0002baf2) indicator_nsta_pane_cp_g4

0xbac1,	// (0x0002bae2) indicator_nsta_pane_cp_g5

0xbac9,	// (0x0002baea) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0002fab1) indicator_nsta_pane_cp_g

0xe213,	// (0x0002e234) cell_graphic2_pane_t2_ParamLimits

0xe213,	// (0x0002e234) cell_graphic2_pane_t2

0x0001,

0xfd96,	// (0x0002fdb7) cell_graphic2_pane_t_ParamLimits

0xfd96,	// (0x0002fdb7) cell_graphic2_pane_t

0xe23f,	// (0x0002e260) cell_graphic2_control_pane_t1

0x73ff,	// (0x00027420) signal_pane_g3_ParamLimits

0x73ff,	// (0x00027420) signal_pane_g3

0x7411,	// (0x00027432) signal_pane_g4_ParamLimits

0x7411,	// (0x00027432) signal_pane_g4

0xf12a,	// (0x0002f14b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12a,	// (0x0002f14b) cell_ai5_widget_list_row_pane_t3

0xf2e0,	// (0x0002f301) cell_ituss_key_pane_t1_ParamLimits

0xf2e0,	// (0x0002f301) cell_ituss_key_pane_t1

0x8785,	// (0x000287a6) form_field_data_wide_pane_vc_t2_ParamLimits

0x8785,	// (0x000287a6) form_field_data_wide_pane_vc_t2

0x8799,	// (0x000287ba) form_field_data_wide_pane_vc_t3_ParamLimits

0x8799,	// (0x000287ba) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x0002f7f1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x0002f7f1) form_field_data_wide_pane_vc_t

0xb762,	// (0x0002b783) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb762,	// (0x0002b783) form_field_slider_wide_pane_vc_t3

0xb840,	// (0x0002b861) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb840,	// (0x0002b861) form_field_popup_wide_pane_vc_t2

0xb857,	// (0x0002b878) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb857,	// (0x0002b878) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0002faa0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002faa0) form_field_popup_wide_pane_vc_t

0x9e18,	// (0x00029e39) aid_fshwr2_btn_pane_ParamLimits

0x9e2c,	// (0x00029e4d) aid_fshwr2_syb_pane_ParamLimits

0x9e40,	// (0x00029e61) aid_fshwr2_txt_pane_ParamLimits

0x1d0a,	// (0x00021d2b) fshwr2_bg_pane_ParamLimits

0x9e50,	// (0x00029e71) fshwr2_func_candi_pane_ParamLimits

0x9e74,	// (0x00029e95) fshwr2_hwr_syb_pane_ParamLimits

0x9e8e,	// (0x00029eaf) fshwr2_icf_pane_ParamLimits

0x612b,	// (0x0002614c) list_double_graphic_pane_vc_g4_ParamLimits

0x612b,	// (0x0002614c) list_double_graphic_pane_vc_g4

0xa0e9,	// (0x0002a10a) cell_ituss_key_pane_g3_ParamLimits

0xa0e9,	// (0x0002a10a) cell_ituss_key_pane_g3

0xa21b,	// (0x0002a23c) cell_ituss_key_t5_ParamLimits

0xa21b,	// (0x0002a23c) cell_ituss_key_t5

0xf19c,	// (0x0002f1bd) popup_fep_vkbss_window_ParamLimits

0xd76b,	// (0x0002d78c) aid_cell_ai5_quarter

0xf44e,	// (0x0002f46f) icf_edit_indi_pane_t1_ParamLimits

0x6bbd,	// (0x00026bde) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6bbd,	// (0x00026bde) aid_tch_indicator_popup_pane_cp2

0x6bd0,	// (0x00026bf1) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6bd0,	// (0x00026bf1) aid_tch_query_popup_data_pane_cp2

0x8afa,	// (0x00028b1b) aid_tch_query_popup_pane_ParamLimits

0x8afa,	// (0x00028b1b) aid_tch_query_popup_pane

0x8afa,	// (0x00028b1b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8afa,	// (0x00028b1b) aid_tch_query_popup_data_pane_cp1

0x1eba,	// (0x00021edb) cell_fshwr2_syb_bg_pane_ParamLimits

0x9f76,	// (0x00029f97) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9f8a,	// (0x00029fab) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0002f1a7) popup_fep_vkb_icf_pane_ParamLimits

0x9c66,	// (0x00029c87) bg_popup_fep_char_preview_window_g10

0xe79b,	// (0x0002e7bc) cell_ai5_widget_pane_g11_ParamLimits

0xe79b,	// (0x0002e7bc) cell_ai5_widget_pane_g11

0xe7a7,	// (0x0002e7c8) cell_ai5_widget_pane_g12_ParamLimits

0xe7a7,	// (0x0002e7c8) cell_ai5_widget_pane_g12

0xe7b3,	// (0x0002e7d4) cell_ai5_widget_pane_g13_ParamLimits

0xe7b3,	// (0x0002e7d4) cell_ai5_widget_pane_g13

0xe8e2,	// (0x0002e903) cell_ai5_widget_pane_t11_ParamLimits

0xe8e2,	// (0x0002e903) cell_ai5_widget_pane_t11

0xe8f4,	// (0x0002e915) cell_ai5_widget_pane_t12_ParamLimits

0xe8f4,	// (0x0002e915) cell_ai5_widget_pane_t12

0xa0f5,	// (0x0002a116) cell_ituss_key_pane_g4_ParamLimits

0xa0f5,	// (0x0002a116) cell_ituss_key_pane_g4

0xa111,	// (0x0002a132) cell_ituss_key_pane_g5_ParamLimits

0xa111,	// (0x0002a132) cell_ituss_key_pane_g5

0xa12d,	// (0x0002a14e) cell_ituss_key_pane_g6_ParamLimits

0xa12d,	// (0x0002a14e) cell_ituss_key_pane_g6

0x856b,	// (0x0002858c) bg_icf_pane_g1

0xf348,	// (0x0002f369) bg_icf_pane_g2

0xf354,	// (0x0002f375) bg_icf_pane_g3

0xf35e,	// (0x0002f37f) bg_icf_pane_g4

0xf36a,	// (0x0002f38b) bg_icf_pane_g5

0xf374,	// (0x0002f395) bg_icf_pane_g6

0xf380,	// (0x0002f3a1) bg_icf_pane_g7

0xf38a,	// (0x0002f3ab) bg_icf_pane_g8

0xf396,	// (0x0002f3b7) bg_icf_pane_g9

0x0008,

0xfee6,	// (0x0002ff07) bg_icf_pane_g

0xf1c9,	// (0x0002f1ea) popup_hyb_candi_window_ParamLimits

0xf1c9,	// (0x0002f1ea) popup_hyb_candi_window

0x866f,	// (0x00028690) bg_popup_sub_pane_cp01_ParamLimits

0x866f,	// (0x00028690) bg_popup_sub_pane_cp01

0xf467,	// (0x0002f488) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002f488) entry_hyb_candi_pane

0xf476,	// (0x0002f497) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002f497) grid_hyb_candi_pane

0xf48b,	// (0x0002f4ac) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002f4ac) grid_hyb_phrase_pane

0xf49a,	// (0x0002f4bb) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002f4bb) cell_hyb_candi_pane

0xf4bd,	// (0x0002f4de) cell_hyb_candi_scroll_pane

0x21ca,	// (0x000221eb) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002f4e7) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002f4f5) cell_hyb_phrase_pane

0x21ca,	// (0x000221eb) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002f4fe) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002f50c) entry_hyb_candi_pane_t1

0x261c,	// (0x0002263d) input_focus_pane_cp06

0xf4f9,	// (0x0002f51a) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002f522) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002f52a) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002f532) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002f53a) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002f542) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
